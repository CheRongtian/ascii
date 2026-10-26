import Foundation

struct WorkAppearance: Codable, Equatable, Sendable {
    var background: CanvasBackground
    var inkHex: String
    var mono: Bool
    var font: ArtFont
    var zoom: Double
    var fpsLimit: Int
}

struct UserWork: Identifiable, Codable, Equatable, Sendable {
    let id: UUID
    var name: String
    var note: String
    var parameters: TemplateParameters
    var appearance: WorkAppearance
    var revision: Int

    var templateID: String { parameters.templateID }
    var instanceID: String { "work/\(id.uuidString)/\(revision)" }
    var title: String { name.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty ? "未命名创作" : name }

    init(name: String, parameters: TemplateParameters, appearance: WorkAppearance) {
        id = UUID()
        self.name = name
        note = ""
        self.parameters = parameters
        self.appearance = appearance
        revision = 0
    }

    private enum CodingKeys: String, CodingKey {
        case id, name, note, templateID, parameters, appearance, revision
    }

    init(from decoder: Decoder) throws {
        let values = try decoder.container(keyedBy: CodingKeys.self)
        id = try values.decode(UUID.self, forKey: .id)
        name = try values.decode(String.self, forKey: .name)
        note = try values.decode(String.self, forKey: .note)
        let templateID = try values.decode(String.self, forKey: .templateID)
        switch templateID {
        case "wave-text":
            parameters = .waveText(try values.decode(WaveTextParameters.self, forKey: .parameters).normalized())
        default:
            throw DecodingError.dataCorruptedError(forKey: .templateID, in: values, debugDescription: "Unknown creation template: \(templateID)")
        }
        appearance = try values.decode(WorkAppearance.self, forKey: .appearance)
        revision = try values.decode(Int.self, forKey: .revision)
    }

    func encode(to encoder: Encoder) throws {
        var values = encoder.container(keyedBy: CodingKeys.self)
        try values.encode(id, forKey: .id)
        try values.encode(name, forKey: .name)
        try values.encode(note, forKey: .note)
        try values.encode(templateID, forKey: .templateID)
        switch parameters {
        case .waveText(let parameters): try values.encode(parameters, forKey: .parameters)
        }
        try values.encode(appearance, forKey: .appearance)
        try values.encode(revision, forKey: .revision)
    }
}
