import Combine
import Foundation

@MainActor
final class CreationModel: ObservableObject {
    @Published private(set) var draft: UserWork {
        didSet {
            if draft.parameters != oldValue.parameters { schedulePreview() }
            if draft.name != oldValue.name || draft.appearance != oldValue.appearance {
                onPresentationChange(draft)
            }
        }
    }
    @Published private(set) var isPreviewPending = false

    private let initialParameters: TemplateParameters
    private let initialAppearance: WorkAppearance
    private let onParametersChange: @MainActor (UserWork) -> Void
    private let onPresentationChange: @MainActor (UserWork) -> Void
    private var previewTask: Task<Void, Never>?
    private var isAdjustingSlider = false

    init(draft: UserWork,
         onParametersChange: @escaping @MainActor (UserWork) -> Void,
         onPresentationChange: @escaping @MainActor (UserWork) -> Void) {
        self.draft = draft
        initialParameters = draft.parameters
        initialAppearance = draft.appearance
        self.onParametersChange = onParametersChange
        self.onPresentationChange = onPresentationChange
    }

    var name: String {
        get { draft.name }
        set { draft.name = newValue }
    }

    var appearance: WorkAppearance {
        get { draft.appearance }
        set { draft.appearance = newValue }
    }

    var waveText: WaveTextParameters {
        get { draft.parameters.waveText }
        set {
            let parameters = TemplateParameters.waveText(newValue.normalized())
            guard parameters != draft.parameters else { return }
            var updated = draft
            updated.parameters = parameters
            updated.revision += 1
            draft = updated
        }
    }

    func sliderEditingChanged(_ editing: Bool) {
        isAdjustingSlider = editing
        if editing { previewTask?.cancel() }
        else { flushPreview() }
    }

    func flushPreview() {
        previewTask?.cancel()
        previewTask = nil
        guard isPreviewPending else { return }
        isPreviewPending = false
        onParametersChange(draft)
    }

    func cancelPendingPreview() {
        previewTask?.cancel()
        previewTask = nil
        isPreviewPending = false
        isAdjustingSlider = false
    }

    func restoreDefaults() {
        var updated = draft
        if updated.parameters != initialParameters {
            updated.parameters = initialParameters
            updated.revision += 1
        }
        updated.appearance = initialAppearance
        draft = updated
        flushPreview()
    }

    private func schedulePreview() {
        previewTask?.cancel()
        isPreviewPending = true
        guard !isAdjustingSlider else { return }
        previewTask = Task { @MainActor [weak self] in
            do { try await Task.sleep(for: .milliseconds(300)) }
            catch { return }
            guard !Task.isCancelled else { return }
            self?.flushPreview()
        }
    }
}
