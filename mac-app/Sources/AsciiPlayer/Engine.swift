import Foundation

struct FrameSnapshot: Sendable {
    let text: String
    let colors: [UInt8]
}

struct FrameRequest: Sendable {
    let piece: Piece
    let time: Double
    let mono: Bool
    let paper: Bool
}

struct CachedPlayback: Sendable {
    let time: Double
    let frame: FrameSnapshot?
}

struct EngineFailure: LocalizedError, Sendable {
    let message: String
    var errorDescription: String? { message }
}

// C++ instances stay on this queue. Only value snapshots leave it.
final class AnimationEngine: @unchecked Sendable {
    private let queue = DispatchQueue(label: "ascii.player.engine", qos: .userInteractive)
    private let cacheLimit = 12
    // Fast pieces are kept only while active; delayed preparations may survive a switch.
    private var instances: [String: NativePiece] = [:]
    private var recency: [String] = []
    private let stateLock = NSLock()
    private var cancellation = NativeCancellation()
    private var cacheEligible: Set<String> = []
    private var previews: [String: Preview] = [:]

    private struct Preview {
        var time: Double
        var frame: FrameSnapshot?
        var paper: Bool
        var colored: Bool
    }

    func cancel() {
        let disposable = stateLock.withLock {
            cancellation.cancel()
            cancellation = NativeCancellation()
            let ids = previews.keys.filter { !cacheEligible.contains($0) }
            for id in ids { previews.removeValue(forKey: id) }
            return ids
        }
        queue.async { [self] in
            for id in disposable { instances.removeValue(forKey: id) }
        }
    }

    func cachePreparedPiece(_ id: String) {
        stateLock.withLock { _ = cacheEligible.insert(id) }
        queue.async { [self] in
            stateLock.withLock {
                guard cacheEligible.contains(id), instances[id] != nil else { return }
                retainCachedPiece(id)
            }
        }
    }

    func cachedPlayback(for piece: Piece, mono: Bool, paper: Bool) -> CachedPlayback? {
        let paper = piece.ground != nil && !mono ? false : paper
        let colored = !mono && piece.palette != nil
        return stateLock.withLock {
            guard cacheEligible.contains(piece.id), let preview = previews[piece.id] else { return nil }
            let frame = preview.paper == paper && preview.colored == colored ? preview.frame : nil
            return CachedPlayback(time: preview.time, frame: frame)
        }
    }

    func removeCachedPiece(_ id: String) {
        stateLock.withLock {
            previews.removeValue(forKey: id)
            cacheEligible.remove(id)
        }
        queue.async { [self] in
            instances.removeValue(forKey: id)
            recency.removeAll { $0 == id }
        }
    }

    func render(_ request: FrameRequest, completion: @escaping @Sendable (Result<FrameSnapshot, EngineFailure>) -> Void) {
        let token = stateLock.withLock { cancellation }
        queue.async { [self] in
            do {
                guard !token.isCancelled else { throw EngineFailure(message: "Cancelled") }
                completion(.success(try draw(request, cancellation: token)))
            }
            catch {
                if !token.isCancelled {
                    instances.removeValue(forKey: request.piece.id)
                    recency.removeAll { $0 == request.piece.id }
                    stateLock.withLock {
                        previews.removeValue(forKey: request.piece.id)
                        cacheEligible.remove(request.piece.id)
                    }
                    FileHandle.standardError.write(Data("[ASCII Player] \(request.piece.id)：\(error.localizedDescription)\n".utf8))
                }
                completion(.failure(EngineFailure(message: error.localizedDescription)))
            }
        }
    }

    // Called on the engine queue with stateLock held.
    private func retainCachedPiece(_ id: String) {
        recency.removeAll { $0 == id }
        recency.append(id)
        if recency.count > cacheLimit {
            let evicted = recency.removeFirst()
            instances.removeValue(forKey: evicted)
            previews.removeValue(forKey: evicted)
            cacheEligible.remove(evicted)
        }
    }

    private func draw(_ request: FrameRequest, cancellation: NativeCancellation) throws -> FrameSnapshot {
        let native: NativePiece
        if let cached = instances[request.piece.id] {
            native = cached
            native.useCancellation(cancellation)
        } else {
            native = try NativePiece(id: request.piece.id, cancellation: cancellation)
        }
        // Scenes keep their own ground; monochrome follows the selected canvas background.
        let paper = request.piece.ground != nil && !request.mono ? false : request.paper
        let colored = !request.mono && request.piece.palette != nil
        try stateLock.withLock {
            guard !cancellation.isCancelled else { throw EngineFailure(message: "Cancelled") }
            instances[request.piece.id] = native
            if cacheEligible.contains(request.piece.id) { retainCachedPiece(request.piece.id) }
            // Keep time monotonic even if a simulation frame is interrupted.
            if var preview = previews[request.piece.id] {
                preview.time = request.time
                previews[request.piece.id] = preview
            } else {
                previews[request.piece.id] = Preview(time: request.time, paper: paper, colored: colored)
            }
        }
        let frame = try native.render(at: request.time, paper: paper, colored: colored)
        try stateLock.withLock {
            guard !cancellation.isCancelled else { throw EngineFailure(message: "Cancelled") }
            previews[request.piece.id] = Preview(time: request.time, frame: frame, paper: paper, colored: colored)
        }
        return frame
    }
}
