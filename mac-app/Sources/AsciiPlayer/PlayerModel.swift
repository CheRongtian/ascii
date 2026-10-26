import AppKit
import Combine
import SwiftUI

@MainActor
final class FrameSurface {
    weak var view: AsciiCanvasView?
    private(set) var snapshot: FrameSnapshot?

    func publish(_ snapshot: FrameSnapshot?) {
        self.snapshot = snapshot
        view?.snapshot = snapshot
        view?.needsDisplay = true
    }
}

@MainActor
final class PlayerModel: ObservableObject {
    let pieces: [Piece]
    let surface = FrameSurface()
    private let engine: AnimationEngine
    private let defaults = UserDefaults.standard

    @Published var query = ""
    @Published var category = "all" { didSet { defaults.set(category, forKey: "category") } }
    @Published var favoritesOnly = false { didSet { defaults.set(favoritesOnly, forKey: "favoritesOnly") } }
    @Published var favorites: Set<String> = [] { didSet { defaults.set(Array(favorites), forKey: "favorites") } }
    @Published var selectedID: String? { didSet { if selectedID != oldValue { selectionChanged() } } }
    @Published var isPlaying = true
    @Published var autoAdvance = false { didSet { defaults.set(autoAdvance, forKey: "autoAdvance"); advanceTime = 0 } }
    @Published var shuffle = false { didSet { defaults.set(shuffle, forKey: "shuffle") } }
    @Published var interval: Double = 20 { didSet { defaults.set(interval, forKey: "interval"); advanceTime = 0 } }
    @Published var fpsLimit = 0 { didSet { defaults.set(fpsLimit, forKey: "fpsLimit"); invalidateFrame() } }
    @Published var mono = false { didSet { defaults.set(mono, forKey: "mono"); invalidateFrame() } }
    @Published var background: CanvasBackground = .midnight { didSet { defaults.set(background.rawValue, forKey: "background"); invalidateFrame() } }
    @Published var inkHex = "#a1efbf" { didSet { defaults.set(inkHex, forKey: "inkHex") } }
    @Published var font: ArtFont = .paper { didSet { defaults.set(font.rawValue, forKey: "font") } }
    @Published var zoom: Double = 1 { didSet { defaults.set(zoom, forKey: "zoom") } }
    @Published var alwaysOnTop = false { didSet { updateWindowLevel() } }
    @Published var error: String?
    @Published private(set) var isLoading = true
    @Published private(set) var elapsedLabel = "00:00"
    @Published private(set) var generation = 0
    @Published private(set) var creation: CreationModel?
    @Published private(set) var isCreating = false
    @Published private(set) var previewWork: UserWork?

    var isSleeping = false
    private var ticker: DispatchSourceTimer?
    private var elapsed: Double = 0
    private var advanceTime: Double = 0
    private var lastTick = ProcessInfo.processInfo.systemUptime
    private var nextFrameAt: Double = 0
    private var inFlight = false
    private var needsFrame = true
    private var history: [String] = []
    private var historyIndex = -1
    private var navigatingHistory = false
    private var previewOptionsJSON: String?

    init() {
        engine = AnimationEngine()
        let order = PieceCategory.all.map(\.id)
        do {
            pieces = try NativePiece.loadCatalog().sorted {
                let a = order.firstIndex(of: $0.category) ?? 99
                let b = order.firstIndex(of: $1.category) ?? 99
                return a == b ? $0.name < $1.name : a < b
            }
        } catch {
            pieces = []
            self.error = "无法读取作品目录。\n\(error.localizedDescription)"
            FileHandle.standardError.write(Data("[ASCII Player] 读取作品目录失败：\(error.localizedDescription)\n".utf8))
        }
        favorites = Set(defaults.stringArray(forKey: "favorites") ?? [])
        category = defaults.string(forKey: "category") ?? "all"
        favoritesOnly = defaults.bool(forKey: "favoritesOnly")
        autoAdvance = defaults.bool(forKey: "autoAdvance")
        shuffle = defaults.bool(forKey: "shuffle")
        interval = defaults.object(forKey: "interval") == nil ? 20 : defaults.double(forKey: "interval")
        fpsLimit = defaults.integer(forKey: "fpsLimit")
        mono = defaults.bool(forKey: "mono")
        background = CanvasBackground(rawValue: defaults.string(forKey: "background") ?? "") ?? .midnight
        inkHex = defaults.string(forKey: "inkHex") ?? "#a1efbf"
        font = ArtFont(rawValue: defaults.string(forKey: "font") ?? "") ?? .paper
        zoom = defaults.object(forKey: "zoom") == nil ? 1 : defaults.double(forKey: "zoom")
        let saved = defaults.string(forKey: "selectedID") ?? "night-coast"
        selectedID = pieces.first(where: { $0.id == saved })?.id ?? pieces.first?.id
        if let selectedID { history = [selectedID]; historyIndex = 0 }
    }

    var selectedPiece: Piece? {
        let id = isCreating ? previewWork?.templateID : selectedID
        return pieces.first { $0.id == id }
    }
    var playbackAppearance: WorkAppearance {
        if isCreating, let previewWork { return previewWork.appearance }
        return WorkAppearance(background: background, inkHex: inkHex, mono: mono,
                              font: font, zoom: zoom, fpsLimit: fpsLimit)
    }
    private var playbackInstanceID: String? {
        isCreating ? previewWork?.instanceID : selectedID
    }
    var filteredPieces: [Piece] {
        let words = query.lowercased().split(whereSeparator: \.isWhitespace).map(String.init)
        return pieces.filter {
            (category == "all" || $0.category == category) &&
            (!favoritesOnly || favorites.contains($0.id)) && $0.matches(words)
        }
    }
    var effectiveFPS: Int {
        guard let piece = selectedPiece, piece.fps > 0 else { return 0 }
        let limit = playbackAppearance.fpsLimit
        return limit == 0 ? piece.fps : min(piece.fps, limit)
    }
    var canvasInk: NSColor {
        let appearance = playbackAppearance
        if appearance.background.isLight && appearance.inkHex == "#a1efbf" { return NSColor(hex: "#26392d") }
        return NSColor(hex: appearance.inkHex)
    }

    func start() {
        guard ticker == nil else { return }
        lastTick = ProcessInfo.processInfo.systemUptime
        let source = DispatchSource.makeTimerSource(queue: .main)
        source.schedule(deadline: .now(), repeating: .nanoseconds(16_666_667), leeway: .milliseconds(1))
        source.setEventHandler { [weak self] in
            MainActor.assumeIsolated { self?.tick() }
        }
        ticker = source
        source.resume()
    }

    func stop() {
        ticker?.cancel()
        ticker = nil
        creation?.cancelPendingPreview()
        engine.cancel()
    }

    func toggleFavorite(_ id: String) {
        guard !isCreating else { return }
        if favorites.contains(id) { favorites.remove(id) } else { favorites.insert(id) }
    }

    func togglePlayback() { isPlaying.toggle() }

    func preparationDidWait(for generation: Int) {
        guard !isCreating, generation == self.generation, isLoading, let selectedID else { return }
        engine.cachePreparedPiece(selectedID)
    }

    func restart() {
        if isCreating, let creation, creation.isPreviewPending {
            creation.flushPreview()
            return
        }
        engine.cancel()
        if let id = playbackInstanceID { engine.removeCachedPiece(id) }
        resetTimeline(clearFrame: true)
    }

    func beginCreation() {
        guard !isCreating else { return }
        do {
            if creation == nil {
                let json = try NativePiece.defaultOptions(for: "wave-text")
                let parameters = try JSONDecoder().decode(WaveTextParameters.self, from: Data(json.utf8)).normalized()
                let draft = UserWork(name: "我的文字波浪", parameters: .waveText(parameters),
                                     appearance: playbackAppearance)
                creation = CreationModel(draft: draft, onParametersChange: { [weak self] work in
                    self?.applyCreationParameters(work)
                }, onPresentationChange: { [weak self] work in
                    self?.applyCreationPresentation(work)
                })
            }
            guard let creation else { return }
            let work = creation.draft
            let json = try work.parameters.engineJSON()
            creation.cancelPendingPreview()
            engine.cancel()
            isCreating = true
            previewWork = work
            previewOptionsJSON = json
            resetTimeline(clearFrame: true)
        } catch {
            self.error = "无法打开创作预览。\n\(error.localizedDescription)"
        }
    }

    func endCreation() {
        guard isCreating else { return }
        closeCreationPreview()
        restoreSelectedPlayback()
    }

    private func closeCreationPreview() {
        creation?.cancelPendingPreview()
        if let id = previewWork?.instanceID { engine.removeCachedPiece(id) }
        isCreating = false
        previewWork = nil
        previewOptionsJSON = nil
    }

    private func applyCreationParameters(_ work: UserWork) {
        guard isCreating else { return }
        do {
            let json = try work.parameters.engineJSON()
            engine.cancel()
            if let id = previewWork?.instanceID { engine.removeCachedPiece(id) }
            previewWork = work
            previewOptionsJSON = json
            resetTimeline(clearFrame: false)
        } catch {
            self.error = "无法更新创作预览。\n\(error.localizedDescription)"
            isLoading = false
        }
    }

    private func applyCreationPresentation(_ work: UserWork) {
        guard isCreating, var current = previewWork else { return }
        let previous = current.appearance
        current.name = work.name
        current.note = work.note
        current.appearance = work.appearance
        previewWork = current
        if previous.mono != work.appearance.mono ||
            previous.background.isLight != work.appearance.background.isLight {
            invalidateFrame()
        }
        if previous.fpsLimit != work.appearance.fpsLimit { nextFrameAt = 0 }
    }

    private func resetTimeline(clearFrame: Bool) {
        elapsed = 0
        advanceTime = 0
        elapsedLabel = "00:00"
        error = nil
        if clearFrame { surface.publish(nil) }
        isLoading = true
        invalidateFrame()
    }

    func move(_ direction: Int) {
        guard !isCreating else { return }
        let candidates = filteredPieces
        guard !candidates.isEmpty else { return }
        if shuffle && direction < 0 && historyIndex > 0,
           let previous = history[..<historyIndex].lastIndex(where: { id in candidates.contains { $0.id == id } }) {
            historyIndex = previous
            navigatingHistory = true
            selectedID = history[historyIndex]
            navigatingHistory = false
        } else if shuffle && direction > 0 {
            selectRandom()
        } else {
            let index = candidates.firstIndex { $0.id == selectedID }
            let next = index.map { ($0 + direction + candidates.count) % candidates.count } ?? (direction > 0 ? 0 : candidates.count - 1)
            if candidates[next].id == selectedID { restart() }
            else { selectedID = candidates[next].id }
        }
    }

    func selectRandom() {
        guard !isCreating else { return }
        let candidates = filteredPieces.filter { $0.id != selectedID }
        if let next = candidates.randomElement() { selectedID = next.id }
    }

    func toggleFullscreen() { surface.view?.window?.toggleFullScreen(nil) }
    func updateWindowLevel() { surface.view?.window?.level = alwaysOnTop ? .floating : .normal }

    private func selectionChanged() {
        guard let selectedID else { return }
        if isCreating { closeCreationPreview() }
        defaults.set(selectedID, forKey: "selectedID")
        if !navigatingHistory {
            history = Array(history.prefix(historyIndex + 1))
            history.append(selectedID)
            historyIndex = history.count - 1
        }
        restoreSelectedPlayback()
    }

    private func restoreSelectedPlayback() {
        engine.cancel()
        let cached = selectedPiece.flatMap {
            engine.cachedPlayback(for: $0, mono: mono, paper: background.isLight)
        }
        elapsed = cached?.time ?? 0
        advanceTime = 0
        let seconds = Int(elapsed)
        elapsedLabel = String(format: "%02d:%02d", seconds / 60, seconds % 60)
        error = nil
        surface.publish(cached?.frame)
        isLoading = cached?.frame == nil
        invalidateFrame()
    }

    private func invalidateFrame() {
        generation += 1
        needsFrame = true
        nextFrameAt = 0
    }

    private func tick() {
        let now = ProcessInfo.processInfo.systemUptime
        let delta = min(now - lastTick, 0.1)
        lastTick = now
        guard !isSleeping, !NSApp.isHidden, let window = surface.view?.window,
              window.isVisible, !window.isMiniaturized else { return }
        if isPlaying && !isLoading {
            elapsed += delta
            advanceTime += delta
            let seconds = Int(elapsed)
            let label = String(format: "%02d:%02d", seconds / 60, seconds % 60)
            if label != elapsedLabel { elapsedLabel = label }
            if !isCreating && autoAdvance && advanceTime >= interval && filteredPieces.count > 1 {
                move(1)
                return
            }
        }
        let due = isPlaying && effectiveFPS > 0 && now >= nextFrameAt
        guard !inFlight, selectedPiece != nil, error == nil, needsFrame || due else { return }
        requestFrame(at: now)
    }

    private func requestFrame(at now: Double) {
        guard let piece = selectedPiece, let instanceID = playbackInstanceID else { return }
        let stamp = generation
        let appearance = playbackAppearance
        let request = FrameRequest(piece: piece, instanceID: instanceID, optionsJSON: previewOptionsJSON,
                                   time: elapsed, mono: appearance.mono, paper: appearance.background.isLight)
        needsFrame = false
        inFlight = true
        if effectiveFPS > 0 {
            let period = 1 / Double(effectiveFPS)
            nextFrameAt = nextFrameAt == 0 ? now + period : nextFrameAt + period
            if nextFrameAt <= now { nextFrameAt = now + period }
        }
        engine.render(request) { [weak self] result in
            Task { @MainActor in
                guard let self else { return }
                self.inFlight = false
                guard stamp == self.generation else { self.needsFrame = true; return }
                switch result {
                case .success(let frame):
                    self.surface.publish(frame)
                    if self.isLoading { self.isLoading = false }
                case .failure(let error):
                    self.error = error.message
                    self.isLoading = false
                }
            }
        }
    }
}
