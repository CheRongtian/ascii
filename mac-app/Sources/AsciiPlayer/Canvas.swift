import AppKit
import CoreText
import SwiftUI

struct ArtCanvas: NSViewRepresentable {
    @ObservedObject var model: PlayerModel

    func makeNSView(context: Context) -> AsciiCanvasView {
        let view = AsciiCanvasView()
        model.surface.view = view
        view.snapshot = model.surface.snapshot
        return view
    }

    func updateNSView(_ view: AsciiCanvasView, context: Context) {
        model.surface.view = view
        view.configure(piece: model.selectedPiece, background: model.background.hex,
                       ink: model.canvasInk.rgbHex, mono: model.mono, font: model.font, zoom: model.zoom)
    }
}

@MainActor
final class AsciiCanvasView: NSView {
    var snapshot: FrameSnapshot?
    private var piece: Piece?
    private var backgroundHex = "#0b0e14"
    private var inkHex = "#a1efbf"
    private var mono = false
    private var artFont = ArtFont.paper
    private var zoom: Double = 1
    private var palette: [CGColor] = []
    private var cachedWidth: CGFloat = 0
    private var fonts: [CTFont] = []
    private var glyphCache: [UInt16: Glyph] = [:]
    private var paperGraphicsFont: CGFont?

    private struct Glyph { let font: Int; let glyph: CGGlyph; let advance: CGFloat }
    private struct BatchKey: Hashable { let font: Int; let color: Int }
    private struct Batch { var glyphs: [CGGlyph] = []; var positions: [CGPoint] = [] }

    override init(frame frameRect: NSRect) {
        super.init(frame: frameRect)
        if let url = Bundle.main.url(forResource: "PaperMono-Regular", withExtension: "ttf"),
           let provider = CGDataProvider(url: url as CFURL) {
            paperGraphicsFont = CGFont(provider)
        }
        setAccessibilityElement(true)
        setAccessibilityRole(.image)
    }

    required init?(coder: NSCoder) { fatalError("init(coder:) has not been implemented") }
    override var acceptsFirstResponder: Bool { true }
    override var isOpaque: Bool { true }

    override func viewDidMoveToWindow() {
        super.viewDidMoveToWindow()
        if let window, window.frameAutosaveName.isEmpty {
            window.setFrameAutosaveName("ASCIIPlayerMain")
            window.setFrameUsingName("ASCIIPlayerMain")
        }
    }

    override func mouseDown(with event: NSEvent) { window?.makeFirstResponder(self) }

    func configure(piece: Piece?, background: String, ink: String, mono: Bool, font: ArtFont, zoom: Double) {
        guard self.piece != piece || backgroundHex != background || inkHex != ink || self.mono != mono || artFont != font || self.zoom != zoom else { return }
        self.piece = piece
        backgroundHex = background
        inkHex = ink
        self.mono = mono
        self.zoom = zoom
        if artFont != font { cachedWidth = 0 }
        artFont = font
        palette = (piece?.palette ?? []).map { NSColor(hex: $0).cgColor }
        setAccessibilityLabel(piece.map { "\($0.title)，\($0.displayNote)" } ?? "字符动画播放区")
        needsDisplay = true
    }

    override func draw(_ dirtyRect: NSRect) {
        guard let context = NSGraphicsContext.current?.cgContext else { return }
        context.setFillColor(NSColor(hex: backgroundHex).cgColor)
        context.fill(bounds)
        guard let piece, let snapshot else { return }

        let cellHeight = CGFloat(piece.cell ?? 2)
        let available = bounds.insetBy(dx: 32, dy: 38)
        let fit = min(available.width / CGFloat(piece.cols), available.height / (CGFloat(piece.rows) * cellHeight))
        let width = max(0.1, fit * zoom)
        let height = width * cellHeight
        let rect = CGRect(x: (bounds.width - width * CGFloat(piece.cols)) / 2,
                          y: (bounds.height - height * CGFloat(piece.rows)) / 2,
                          width: width * CGFloat(piece.cols), height: height * CGFloat(piece.rows))
        context.saveGState()
        context.clip(to: rect)
        if let ground = piece.ground, !mono {
            context.setFillColor(NSColor(hex: ground).cgColor)
            context.fill(rect)
        }
        prepareFont(for: width)
        guard let baseFont = fonts.first else { context.restoreGState(); return }
        let baselineOffset = (CTFontGetAscent(baseFont) - CTFontGetDescent(baseFont)) / 2
        var batches: [BatchKey: Batch] = [:]
        let colored = !mono && !palette.isEmpty && !snapshot.colors.isEmpty
        var column = 0, row = 0
        for code in snapshot.text.utf16 {
            if code == 10 { row += 1; column = 0; continue }
            defer { column += 1 }
            guard code != 32, column < piece.cols, row < piece.rows else { continue }
            let index = row * piece.cols + column
            let color = colored && index < snapshot.colors.count ? min(Int(snapshot.colors[index]), palette.count - 1) : -1
            let info = glyph(for: code)
            let key = BatchKey(font: info.font, color: color)
            let point = CGPoint(x: rect.minX + (CGFloat(column) + 0.5) * width - info.advance / 2,
                                y: rect.maxY - (CGFloat(row) + 0.5) * height - baselineOffset)
            batches[key, default: Batch()].glyphs.append(info.glyph)
            batches[key, default: Batch()].positions.append(point)
        }
        context.textMatrix = .identity
        let ink = NSColor(hex: inkHex).cgColor
        for (key, batch) in batches {
            context.setFillColor(key.color < 0 ? ink : palette[key.color])
            batch.glyphs.withUnsafeBufferPointer { glyphs in
                batch.positions.withUnsafeBufferPointer { positions in
                    if let g = glyphs.baseAddress, let p = positions.baseAddress {
                        CTFontDrawGlyphs(fonts[key.font], g, p, glyphs.count, context)
                    }
                }
            }
        }
        context.restoreGState()
    }

    private func prepareFont(for width: CGFloat) {
        guard width != cachedWidth || fonts.isEmpty else { return }
        cachedWidth = width
        let sample: CTFont
        if artFont == .paper, let paperGraphicsFont {
            sample = CTFontCreateWithGraphicsFont(paperGraphicsFont, 12, nil, nil)
        } else {
            sample = CTFontCreateWithName((artFont == .paper ? "Menlo" : artFont.rawValue) as CFString, 12, nil)
        }
        var character: UniChar = 77
        var glyph: CGGlyph = 0
        CTFontGetGlyphsForCharacters(sample, &character, &glyph, 1)
        var advance = CGSize.zero
        CTFontGetAdvancesForGlyphs(sample, .horizontal, &glyph, &advance, 1)
        let size = 12 * width / max(advance.width, 1)
        fonts = [CTFontCreateCopyWithAttributes(sample, size, nil, nil)]
        glyphCache.removeAll(keepingCapacity: true)
    }

    private func glyph(for code: UInt16) -> Glyph {
        if let cached = glyphCache[code] { return cached }
        var character = code
        var result: CGGlyph = 0
        var fontIndex = 0
        if !CTFontGetGlyphsForCharacters(fonts[0], &character, &result, 1) {
            let string = String(utf16CodeUnits: &character, count: 1) as CFString
            let fallback = CTFontCreateForString(fonts[0], string, CFRange(location: 0, length: 1))
            if let existing = fonts.firstIndex(where: { CFEqual($0, fallback) }) { fontIndex = existing }
            else { fontIndex = fonts.count; fonts.append(fallback) }
            CTFontGetGlyphsForCharacters(fonts[fontIndex], &character, &result, 1)
        }
        var advance = CGSize.zero
        CTFontGetAdvancesForGlyphs(fonts[fontIndex], .horizontal, &result, &advance, 1)
        let info = Glyph(font: fontIndex, glyph: result, advance: advance.width)
        glyphCache[code] = info
        return info
    }
}
