import Foundation

struct WaveTextParameters: Codable, Equatable, Sendable {
    var text: String
    var amp: Double
    var wavelength: Double
    var speed: Double
    var spacing: Int
    var settle: Bool

    static let amplitudeRange = 0.0...2.4
    static let wavelengthRange = 4.0...72.0
    static let speedRange = 0.5...20.0
    static let spacingRange = 0...3

    func normalized() -> Self {
        var result = self
        result.text = text.components(separatedBy: .newlines).joined(separator: " ")
        result.amp = amp.isFinite ? min(max(amp, Self.amplitudeRange.lowerBound), Self.amplitudeRange.upperBound) : 1.25
        result.wavelength = wavelength.isFinite ? min(max(wavelength, Self.wavelengthRange.lowerBound), Self.wavelengthRange.upperBound) : 18
        result.speed = speed.isFinite ? min(max(speed, Self.speedRange.lowerBound), Self.speedRange.upperBound) : 8
        result.spacing = min(max(spacing, Self.spacingRange.lowerBound), Self.spacingRange.upperBound)
        return result
    }
}

enum TemplateParameters: Equatable, Sendable {
    case waveText(WaveTextParameters)

    var templateID: String { "wave-text" }

    var waveText: WaveTextParameters {
        switch self { case .waveText(let parameters): parameters }
    }

    func engineJSON() throws -> String {
        let data: Data
        switch self {
        case .waveText(let parameters): data = try JSONEncoder().encode(parameters.normalized())
        }
        return String(decoding: data, as: UTF8.self)
    }
}
