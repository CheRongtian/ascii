import AppKit
import SwiftUI

struct PlaybackControls: View {
    @ObservedObject var model: PlayerModel
    @FocusState private var playFocused: Bool

    var body: some View {
        HStack(spacing: 10) {
            PlayerActionButton(title: model.shuffle ? "随机已开" : "随机", icon: "shuffle", showTitle: true,
                               selected: model.shuffle) { model.shuffle.toggle() }
                .frame(width: 100, alignment: .leading)
            Spacer(minLength: 4)
            HStack(spacing: 8) {
                PlayerActionButton(title: "从头播放", icon: "arrow.counterclockwise", help: "从头播放 · ⌘R") { model.restart() }
                PlayerActionButton(title: "上一个", icon: "backward.end.fill", help: "上一个 · ←") { model.move(-1) }
                    .disabled(model.filteredPieces.isEmpty)
                Button { model.togglePlayback() } label: {
                    Image(systemName: model.isPlaying ? "pause.fill" : "play.fill")
                        .font(.system(size: 19, weight: .semibold)).frame(width: 64, height: 48)
                }
                .buttonStyle(PlayerButtonStyle(kind: .accent))
                .focused($playFocused)
                .overlay(RoundedRectangle(cornerRadius: 11).strokeBorder(playFocused ? PlayerStyle.accent : .clear, lineWidth: 2).padding(-3))
                .accessibilityLabel(model.isPlaying ? "暂停播放" : "继续播放")
                .help("播放 / 暂停 · 空格")
                PlayerActionButton(title: "下一个", icon: "forward.end.fill", help: "下一个 · →") { model.move(1) }
                    .disabled(model.filteredPieces.isEmpty)
            }
            Spacer(minLength: 4)
            PlayerActionButton(title: model.autoAdvance ? "轮播 \(Int(model.interval))s" : "自动轮播",
                               icon: "repeat", showTitle: true, selected: model.autoAdvance,
                               help: "按当前搜索、分类与收藏筛选自动切换") { model.autoAdvance.toggle() }
                .frame(width: 108, alignment: .trailing)
        }
        .padding(12)
        .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 14))
        .overlay(RoundedRectangle(cornerRadius: 14).strokeBorder(PlayerStyle.border))
        .disabled(model.selectedPiece == nil)
    }
}

struct SettingsPanel: View {
    @ObservedObject var model: PlayerModel
    let close: () -> Void

    var body: some View {
        VStack(spacing: 0) {
            HStack {
                VStack(alignment: .leading, spacing: 5) {
                    Text("显示与播放").font(.system(size: 18, weight: .semibold))
                    Text("让画面适合此刻的桌面。")
                        .font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
                }
                Spacer()
                PlayerActionButton(title: "关闭设置", icon: "xmark", action: close)
            }.padding(20)
            Divider()
            Form {
                Section {
                    Picker("画布背景", selection: $model.background) {
                        ForEach(CanvasBackground.allCases) { Text($0.title).tag($0) }
                    }
                    Picker("字符字体", selection: $model.font) {
                        ForEach(ArtFont.allCases) { Text($0.rawValue).tag($0) }
                    }
                    ColorPicker("字符颜色", selection: Binding(get: { Color(nsColor: NSColor(hex: model.inkHex)) },
                                                         set: { model.inkHex = NSColor($0).rgbHex }), supportsOpacity: false)
                    Toggle("单色显示", isOn: $model.mono)
                } header: {
                    Text("画面外观")
                } footer: {
                    Text("彩色作品使用原有配色；单色模式使用你选择的字符颜色。")
                }
                Section("画面大小与流畅度") {
                    VStack(alignment: .leading, spacing: 12) {
                        HStack {
                            Text("缩放")
                            Spacer()
                            Button("\(Int(model.zoom * 100))% · 自适应") { model.zoom = 1 }
                                .font(.system(size: 12, design: .monospaced)).help("恢复自适应窗口")
                        }
                        Slider(value: $model.zoom, in: 0.5...2).accessibilityLabel("画面缩放")
                    }.padding(.vertical, 5)
                    Picker("帧率上限", selection: $model.fpsLimit) {
                        Text("跟随作品").tag(0)
                        ForEach([10, 15, 20, 30, 60], id: \.self) { Text("\($0) fps").tag($0) }
                    }
                }
                Section {
                    Toggle("自动轮播", isOn: $model.autoAdvance)
                    Toggle("随机顺序", isOn: $model.shuffle)
                    Picker("切换间隔", selection: $model.interval) {
                        ForEach([10.0, 20, 30, 60, 120], id: \.self) { Text("\(Int($0)) 秒").tag($0) }
                    }
                } header: {
                    Text("连续播放")
                } footer: {
                    Text("播放范围跟随当前筛选。暂停播放时，轮播计时同步暂停。")
                }
            }
            .formStyle(.grouped).scrollContentBackground(.hidden)
            .font(.system(size: 13)).toggleStyle(.switch).controlSize(.small)
        }
        .frame(width: 390, height: 650)
        .foregroundStyle(PlayerStyle.foreground).background(PlayerStyle.background)
        .preferredColorScheme(.light).tint(PlayerStyle.accent)
    }
}
