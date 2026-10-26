import Foundation

final class NativeCancellation: @unchecked Sendable {
    let handle: OpaquePointer = ascii_cancellation_create()!
    private let lock = NSLock()
    private var cancelled = false

    var isCancelled: Bool { lock.withLock { cancelled } }

    func cancel() {
        lock.withLock {
            cancelled = true
            ascii_cancellation_cancel(handle)
        }
    }

    deinit { ascii_cancellation_destroy(handle) }
}

// Owned by AnimationEngine; render calls stay on its existing serial queue.
final class NativePiece {
    private let handle: OpaquePointer
    private(set) var cancellation: NativeCancellation

    static func supports(_ id: String) -> Bool {
        id.withCString { ascii_piece_find($0) != nil }
    }

    static func loadCatalog() throws -> [Piece] {
        try (0..<Int(ascii_piece_count())).map { index in
            guard let pointer = ascii_piece_meta_at(index) else { throw Self.failure() }
            let meta = pointer.pointee
            var palette: [String]?
            if meta.palette_count > 0, let entries = meta.palette {
                palette = (0..<Int(meta.palette_count)).map {
                    String(format: "#%06x", entries[$0])
                }
            }
            return Piece(id: String(cString: meta.id), name: String(cString: meta.name),
                         category: String(cString: meta.category), note: String(cString: meta.note),
                         cols: Int(meta.cols), rows: Int(meta.rows), fps: Int(meta.fps),
                         palette: palette, ground: meta.ground.map { String(cString: $0) },
                         cell: Int(meta.cell), clock: meta.clock != 0)
        }
    }

    static func defaultOptions(for id: String) throws -> String {
        guard let metadata = id.withCString({ ascii_piece_find($0) }) else { throw Self.failure() }
        return metadata.pointee.options.json.map { String(cString: $0) } ?? "{}"
    }

    init(id: String, optionsJSON: String? = nil, cancellation: NativeCancellation) throws {
        self.cancellation = cancellation
        guard let metadata = id.withCString({ ascii_piece_find($0) }) else { throw Self.failure() }
        var options = metadata.pointee.options
        options.cancellation = cancellation.handle
        let created: OpaquePointer?
        if let optionsJSON {
            // The C++ constructor consumes JSON before this buffer is released.
            created = optionsJSON.withCString { json in
                options.json = json
                return id.withCString { ascii_piece_create($0, &options) }
            }
        } else {
            created = id.withCString { ascii_piece_create($0, &options) }
        }
        guard let handle = created else {
            throw Self.failure()
        }
        self.handle = handle
    }

    deinit { ascii_piece_destroy(handle) }

    func useCancellation(_ cancellation: NativeCancellation) {
        guard self.cancellation !== cancellation else { return }
        ascii_piece_set_cancellation(handle, cancellation.handle)
        self.cancellation = cancellation
    }

    func render(at time: Double, paper: Bool, colored: Bool) throws -> FrameSnapshot {
        var output = AsciiFrame()
        guard ascii_piece_render(handle, time, paper ? 1 : 0, colored ? 1 : 0, &output) != 0,
              let characters = output.text else { throw Self.failure() }
        // Copy borrowed C++ buffers before another render can change them.
        let text = String(decoding: UnsafeBufferPointer(start: characters, count: output.text_length),
                          as: UTF16.self)
        var colors: [UInt8] = []
        if output.color_count > 0, let indices = output.colors {
            colors = Array(UnsafeBufferPointer(start: indices, count: output.color_count))
        }
        return FrameSnapshot(text: text, colors: colors)
    }

    private static func failure() -> EngineFailure {
        EngineFailure(message: "C++ 动画引擎：\(String(cString: ascii_engine_last_error()))")
    }
}
