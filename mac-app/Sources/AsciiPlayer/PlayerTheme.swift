import SwiftUI

enum PlayerStyle {
    static let background = Color(hex: "#F6F4F0")
    static let sidebar = Color(hex: "#EEECE6")
    static let surface = Color(hex: "#FFFDF9")
    static let foreground = Color(hex: "#242927")
    static let secondary = Color(hex: "#62685F")
    static let muted = Color(hex: "#6C7168")
    static let border = Color(hex: "#D8D8D0")
    static let hover = Color(hex: "#E5E3DC")
    static let accent = Color(hex: "#B9472F")
    static let accentPressed = Color(hex: "#963A27")
    static let accentSoft = Color(hex: "#F5E2D8")
    static let selectedText = Color(hex: "#8C3423")
    static let stage = Color(hex: "#101612")
    static let stageText = Color(hex: "#F7F4EC")
    static let stageSecondary = Color(hex: "#C0C9BC")
    static let success = Color(hex: "#39744E")
    static let radius: CGFloat = 12
    static let controlHeight: CGFloat = 38
}

extension Color {
    init(hex: String) { self.init(nsColor: NSColor(hex: hex)) }
}

struct PlayerButtonStyle: ButtonStyle {
    enum Kind { case quiet, bordered, accent }
    var kind: Kind = .quiet
    var selected = false
    @Environment(\.isEnabled) private var enabled
    @Environment(\.accessibilityReduceMotion) private var reduceMotion
    @State private var hovered = false

    func makeBody(configuration: Configuration) -> some View {
        configuration.label
            .foregroundStyle(foreground)
            .background(fill(pressed: configuration.isPressed), in: RoundedRectangle(cornerRadius: 9))
            .overlay(RoundedRectangle(cornerRadius: 9).strokeBorder(border))
            .opacity(enabled ? 1 : 0.4)
            .contentShape(RoundedRectangle(cornerRadius: 9))
            .onHover { hovered = $0 }
            .animation(reduceMotion ? nil : .easeOut(duration: 0.12), value: hovered)
            .animation(reduceMotion ? nil : .easeOut(duration: 0.08), value: configuration.isPressed)
    }

    private var foreground: Color {
        kind == .accent ? .white : selected ? PlayerStyle.selectedText : PlayerStyle.foreground
    }
    private var border: Color {
        if kind == .accent { return .clear }
        return selected ? PlayerStyle.accent.opacity(0.35) : kind == .bordered ? PlayerStyle.border : .clear
    }
    private func fill(pressed: Bool) -> Color {
        if kind == .accent { return pressed ? PlayerStyle.accentPressed : hovered ? PlayerStyle.accentPressed : PlayerStyle.accent }
        if pressed { return PlayerStyle.border }
        if selected { return PlayerStyle.accentSoft }
        if hovered && enabled { return PlayerStyle.hover }
        return kind == .bordered ? PlayerStyle.surface : .clear
    }
}

struct PlayerActionButton: View {
    let title: String
    let icon: String
    var showTitle = false
    var selected = false
    var bordered = false
    var help: String? = nil
    let action: () -> Void
    @FocusState private var focused: Bool

    var body: some View {
        Button(action: action) {
            HStack(spacing: 7) {
                Image(systemName: icon).font(.system(size: 14, weight: .medium)).accessibilityHidden(true)
                if showTitle { Text(title).font(.system(size: 13, weight: .medium)) }
            }
            .padding(.horizontal, showTitle ? 12 : 0)
            .frame(minWidth: PlayerStyle.controlHeight, minHeight: PlayerStyle.controlHeight)
        }
        .buttonStyle(PlayerButtonStyle(kind: bordered ? .bordered : .quiet, selected: selected))
        .focused($focused)
        .overlay(RoundedRectangle(cornerRadius: 10).strokeBorder(focused ? PlayerStyle.accent : .clear, lineWidth: 2))
        .accessibilityLabel(title)
        .accessibilityAddTraits(selected ? .isSelected : [])
        .help(help ?? title)
    }
}
