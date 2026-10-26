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
    let reset: Bool
}

struct EngineFailure: LocalizedError, Sendable {
    let message: String
    var errorDescription: String? { message }
}

// C++ instances stay on this queue. Only value snapshots leave it.
final class AnimationEngine: @unchecked Sendable {
    private let queue = DispatchQueue(label: "ascii.player.engine", qos: .userInteractive)
    private var native: NativePiece?
    private var activeID: String?
    private let cancellationLock = NSLock()
    private var cancellation = NativeCancellation()

    func cancel() {
        cancellationLock.withLock {
            cancellation.cancel()
            cancellation = NativeCancellation()
        }
    }

    func render(_ request: FrameRequest, completion: @escaping @Sendable (Result<FrameSnapshot, EngineFailure>) -> Void) {
        let token = cancellationLock.withLock { cancellation }
        queue.async { [self] in
            do {
                guard !token.isCancelled else { throw EngineFailure(message: "Cancelled") }
                completion(.success(try draw(request, cancellation: token)))
            }
            catch {
                if !token.isCancelled {
                    FileHandle.standardError.write(Data("[ASCII Player] \(request.piece.id)：\(error.localizedDescription)\n".utf8))
                }
                completion(.failure(EngineFailure(message: error.localizedDescription)))
            }
        }
    }

    private func draw(_ request: FrameRequest, cancellation: NativeCancellation) throws -> FrameSnapshot {
        if activeID != request.piece.id || request.reset || native == nil || native?.cancellation !== cancellation {
            // A switch or restart releases the previous engine and its simulation state.
            native = nil
            activeID = nil
            native = try NativePiece(id: request.piece.id, cancellation: cancellation)
            activeID = request.piece.id
        }
        // Scenes keep their own ground; monochrome follows the selected canvas background.
        let paper = request.piece.ground != nil && !request.mono ? false : request.paper
        guard let native else { throw EngineFailure(message: "动画引擎尚未就绪") }
        return try native.render(at: request.time, paper: paper,
                                 colored: !request.mono && request.piece.palette != nil)
    }
}
