import AppKit
import SwiftUI

struct Piece: Decodable, Identifiable, Hashable, Sendable {
    let id: String
    let name: String
    let category: String
    let note: String
    let cols: Int
    let rows: Int
    let fps: Int
    let palette: [String]?
    let ground: String?
    let cell: Int?
    let clock: Bool?

    var title: String { Self.preferredTitles[id] ?? name.capitalized }
    var displayNote: String {
        let sentence = note.split(separator: " ", omittingEmptySubsequences: false)
            .map { Self.noteSpellings[String($0)] ?? String($0) }
            .joined(separator: " ")
        return sentence.prefix(1).uppercased() + sentence.dropFirst()
    }
    var categoryInfo: PieceCategory { PieceCategory.all.first { $0.id == category } ?? PieceCategory.all[0] }
    var aspect: CGFloat { CGFloat(cols) / CGFloat(rows * (cell ?? 2)) }

    func matches(_ words: [String]) -> Bool {
        let text = "\(id) \(name) \(note) \(category) \(categoryInfo.title)".lowercased()
        return words.allSatisfy { text.contains($0) }
    }

    // Keep acronyms, product names and command names in their established spelling.
    private static let preferredTitles: [String: String] = [
        "a0": "a0", "agentmail": "AgentMail", "coderabbit": "CodeRabbit",
        "helixdb": "HelixDB", "planetscale": "PlanetScale", "playstation": "PlayStation",
        "c": "C", "cpp": "C++", "csharp": "C#", "css": "CSS", "html": "HTML",
        "javascript": "JavaScript", "typescript": "TypeScript", "ocaml": "OCaml", "php": "PHP", "r": "R",
        "almalinux": "AlmaLinux", "centos": "CentOS", "deepin": "deepin",
        "elementary-os": "elementary OS", "endeavouros": "EndeavourOS",
        "nixos": "NixOS", "opensuse": "openSUSE", "pop-os": "Pop!_OS", "zorin-os": "Zorin OS",
        "cpu-meters": "CPU Meters", "dna-helix": "DNA Helix", "tv-static": "TV Static", "glxgears": "glxgears"
    ]
    private static let noteSpellings: [String: String] = [
        "js": "JS", "ts": "TS", "php": "PHP", "psx": "PSX", "lm": "LM", "3d": "3D",
        "tux": "Tux", "vercel": "Vercel", "ferris": "Ferris", "databuddy": "Databuddy", "helmcode": "Helmcode"
    ]
}

struct PieceCategory: Identifiable, Hashable, Sendable {
    let id: String
    let title: String
    let icon: String

    static let all: [PieceCategory] = [
        .init(id: "scenes", title: "风景", icon: "mountain.2"),
        .init(id: "ui", title: "时钟与组件", icon: "clock"),
        .init(id: "data", title: "数据图表", icon: "chart.bar.xaxis"),
        .init(id: "type", title: "文字", icon: "textformat"),
        .init(id: "logos", title: "语言标志", icon: "chevron.left.forwardslash.chevron.right"),
        .init(id: "companies", title: "品牌标志", icon: "building.2"),
        .init(id: "distros", title: "Linux 发行版", icon: "terminal"),
        .init(id: "shapes", title: "几何", icon: "cube.transparent"),
        .init(id: "space", title: "宇宙", icon: "sparkles"),
        .init(id: "physics", title: "物理", icon: "atom"),
        .init(id: "nature", title: "自然", icon: "leaf"),
        .init(id: "creatures", title: "生物", icon: "pawprint"),
        .init(id: "objects", title: "物件", icon: "cup.and.saucer"),
        .init(id: "generative", title: "生成艺术", icon: "point.3.connected.trianglepath.dotted"),
        .init(id: "effects", title: "视觉效果", icon: "wand.and.stars")
    ]
}

enum CanvasBackground: String, CaseIterable, Identifiable {
    case midnight, charcoal, paper
    var id: String { rawValue }
    var title: String {
        switch self { case .midnight: "午夜"; case .charcoal: "石墨"; case .paper: "纸白" }
    }
    var hex: String {
        switch self { case .midnight: "#0b0e14"; case .charcoal: "#1c1c20"; case .paper: "#f2efe7" }
    }
    var isLight: Bool { self == .paper }
}

enum ArtFont: String, CaseIterable, Identifiable {
    case paper = "Paper Mono", menlo = "Menlo", monaco = "Monaco"
    var id: String { rawValue }
}

extension NSColor {
    convenience init(hex: String) {
        let value = UInt32(hex.trimmingCharacters(in: CharacterSet(charactersIn: "#")), radix: 16) ?? 0
        self.init(srgbRed: CGFloat((value >> 16) & 255) / 255,
                  green: CGFloat((value >> 8) & 255) / 255,
                  blue: CGFloat(value & 255) / 255, alpha: 1)
    }

    var rgbHex: String {
        let rgb = usingColorSpace(.sRGB) ?? self
        return String(format: "#%02x%02x%02x", Int((rgb.redComponent * 255).rounded()),
                      Int((rgb.greenComponent * 255).rounded()), Int((rgb.blueComponent * 255).rounded()))
    }
}

