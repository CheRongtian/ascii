import Foundation
import CoreGraphics
import CoreText
import ImageIO

let output = URL(fileURLWithPath: CommandLine.arguments[1], isDirectory: true)
try FileManager.default.createDirectory(at: output, withIntermediateDirectories: true)
let space = CGColorSpace(name: CGColorSpace.sRGB)!
let context = CGContext(data: nil, width: 1024, height: 1024, bitsPerComponent: 8, bytesPerRow: 0,
                        space: space, bitmapInfo: CGImageAlphaInfo.premultipliedLast.rawValue)!
let card = CGRect(x: 32, y: 32, width: 960, height: 960)
let shape = CGPath(roundedRect: card, cornerWidth: 210, cornerHeight: 210, transform: nil)
context.addPath(shape)
context.clip()
let gradient = CGGradient(colorsSpace: space, colors: [CGColor(red: 0.10, green: 0.17, blue: 0.15, alpha: 1),
                                                       CGColor(red: 0.025, green: 0.04, blue: 0.055, alpha: 1)] as CFArray,
                          locations: [0, 1])!
context.drawLinearGradient(gradient, start: CGPoint(x: 100, y: 1000), end: CGPoint(x: 900, y: 0), options: [])
context.setStrokeColor(CGColor(red: 0.6, green: 0.95, blue: 0.75, alpha: 0.2))
context.setLineWidth(3)
context.addPath(CGPath(roundedRect: card.insetBy(dx: 2, dy: 2), cornerWidth: 208, cornerHeight: 208, transform: nil))
context.strokePath()

let cols = 36, rows = 25
var depth = [Double](repeating: 0, count: cols * rows)
var lights = [Double](repeating: -1, count: cols * rows)
let a = 0.7, b = 0.42
for theta in stride(from: 0.0, to: 2 * .pi, by: 0.08) {
    for phi in stride(from: 0.0, to: 2 * .pi, by: 0.025) {
        let ct = cos(theta), st = sin(theta), cp = cos(phi), sp = sin(phi)
        let h = 2 + ct
        let x = h * (cos(b) * cp + sin(a) * sin(b) * sp) - st * cos(a) * sin(b)
        let y = h * (sin(b) * cp - sin(a) * cos(b) * sp) + st * cos(a) * cos(b)
        let z = 1 / (6 + cos(a) * h * sp + st * sin(a))
        let column = Int(18 + 30 * z * x), row = Int(12 - 23 * z * y)
        guard column >= 0, column < cols, row >= 0, row < rows else { continue }
        let index = row * cols + column
        if z > depth[index] {
            depth[index] = z
            let nx = ct * (cos(b) * cp + sin(a) * sin(b) * sp) - st * cos(a) * sin(b)
            let ny = ct * (sin(b) * cp - sin(a) * cos(b) * sp) + st * cos(a) * cos(b)
            let nz = cos(a) * ct * sp + st * sin(a)
            lights[index] = max(0, (-0.4 * nx + ny - nz) / 1.47)
        }
    }
}
let ramp = Array(".,:;=+*#%@".utf16)
let font = CTFontCreateWithName("Menlo-Bold" as CFString, 29, nil)
for row in 0..<rows {
    for col in 0..<cols {
        let light = lights[row * cols + col]
        guard light >= 0 else { continue }
        var character = ramp[min(ramp.count - 1, Int(light * Double(ramp.count - 1)))]
        var glyph: CGGlyph = 0
        CTFontGetGlyphsForCharacters(font, &character, &glyph, 1)
        var position = CGPoint(x: 116 + col * 22, y: 820 - row * 27)
        context.setFillColor(CGColor(red: 0.25 + light * 0.45, green: 0.48 + light * 0.48, blue: 0.4 + light * 0.35, alpha: 1))
        CTFontDrawGlyphs(font, &glyph, &position, 1, context)
    }
}
let image = context.makeImage()!
for size in [16, 32, 128, 256, 512] {
    for scale in [1, 2] {
        let pixels = size * scale
        let target = CGContext(data: nil, width: pixels, height: pixels, bitsPerComponent: 8, bytesPerRow: 0,
                               space: space, bitmapInfo: CGImageAlphaInfo.premultipliedLast.rawValue)!
        target.interpolationQuality = .high
        target.draw(image, in: CGRect(x: 0, y: 0, width: pixels, height: pixels))
        let suffix = scale == 2 ? "@2x" : ""
        let url = output.appendingPathComponent("icon_\(size)x\(size)\(suffix).png")
        let destination = CGImageDestinationCreateWithURL(url as CFURL, "public.png" as CFString, 1, nil)!
        CGImageDestinationAddImage(destination, target.makeImage()!, nil)
        if !CGImageDestinationFinalize(destination) { fatalError("Could not write icon") }
    }
}
