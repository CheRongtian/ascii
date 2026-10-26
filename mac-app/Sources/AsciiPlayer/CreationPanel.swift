import AppKit
import SwiftUI

struct CreationPanel: View {
    @ObservedObject var creation: CreationModel
    @ObservedObject var player: PlayerModel
    @State private var showsSpaces = true
    @State private var showsAppearance = false
    @FocusState private var focusedField: InputField?

    private enum InputField { case text, name }
    private var text: String { creation.waveText.text }
    private var spaceCount: Int { text.filter { $0 == " " }.count }
    private var visibleLimit: Int {
        let columns = player.selectedPiece?.cols ?? 36
        return (columns - 1) / (creation.waveText.spacing + 1) + 1
    }
    private var overflows: Bool { text.utf16.count > visibleLimit }
    private var status: String {
        creation.isPreviewPending ? "等待更新" : player.isLoading ? "正在生成" : "自动预览"
    }

    var body: some View {
        VStack(spacing: 0) {
            header
            Divider()
            ScrollView {
                VStack(alignment: .leading, spacing: 24) {
                    textSection
                    effectsSection
                    appearanceSection
                }
                .frame(maxWidth: .infinity, alignment: .leading)
                .padding(24)
            }
            .scrollIndicators(.visible)
            Divider()
            footer
        }
        .frame(width: 400)
        .foregroundStyle(PlayerStyle.foreground)
        .background(PlayerStyle.sidebar)
        .onAppear { focusedField = .text }
    }

    private var header: some View {
        HStack(spacing: 12) {
            Image(systemName: "textformat")
                .font(.system(size: 19, weight: .medium))
                .foregroundStyle(PlayerStyle.accent)
                .frame(width: 44, height: 44)
                .background(PlayerStyle.accentSoft, in: RoundedRectangle(cornerRadius: 12))
                .accessibilityHidden(true)
            VStack(alignment: .leading, spacing: 5) {
                Text("文字波浪").font(.system(size: 20, weight: .semibold))
                Text("Wave Text · 草稿").font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
            }
            Spacer(minLength: 8)
            PlayerActionButton(title: "返回播放", icon: "xmark") { player.endCreation() }
        }.padding(24)
    }

    private var textSection: some View {
        VStack(alignment: .leading, spacing: 12) {
            HStack {
                Text("展示文字").font(.system(size: 14, weight: .semibold))
                Spacer()
                Text("\(text.count) 字符 · \(spaceCount) 空格")
                    .font(.system(size: 12, design: .monospaced))
                    .foregroundStyle(PlayerStyle.secondary).monospacedDigit()
                    .accessibilityLabel("已输入 \(text.count) 个字符，其中 \(spaceCount) 个空格")
            }
            TextField("例如：Welcome to America", text: $creation.waveText.text)
                .textFieldStyle(.plain)
                .font(.system(size: 15, design: .monospaced))
                .multilineTextAlignment(.leading)
                .lineLimit(1)
                .autocorrectionDisabled()
                .focused($focusedField, equals: .text)
                .onSubmit { creation.flushPreview() }
                .padding(.horizontal, 14)
                .frame(maxWidth: .infinity, minHeight: 52, alignment: .leading)
                .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 10))
                .overlay(RoundedRectangle(cornerRadius: 10).strokeBorder(
                    focusedField == .text ? PlayerStyle.accent : PlayerStyle.border,
                    lineWidth: focusedField == .text ? 2 : 1
                ))
                .accessibilityLabel("展示文字")
                .accessibilityHint("单行输入，支持空格。长文字可通过左右方向键浏览，回车立即更新预览。")
            Text(overflows
                 ? "当前间距可显示前 \(visibleLimit) 个字符，超出部分会在预览中裁切。"
                 : "当前间距最多显示 \(visibleLimit) 个字符，空格也占一个位置。")
                .font(.system(size: 12))
                .foregroundStyle(overflows ? PlayerStyle.selectedText : PlayerStyle.secondary)
                .fixedSize(horizontal: false, vertical: true)
                .frame(minHeight: 34, alignment: .topLeading)
            Toggle("检查空格位置", isOn: $showsSpaces)
                .toggleStyle(.checkbox).font(.system(size: 12))
                .accessibilityHint("在下方用中点标记空格，输入内容保持原样。")
            if showsSpaces {
                VStack(alignment: .leading, spacing: 8) {
                    ScrollView(.horizontal) {
                        Text(text.isEmpty ? "在上方输入一行文字" : text.replacingOccurrences(of: " ", with: "·"))
                            .font(.system(size: 14, design: .monospaced))
                            .foregroundStyle(text.isEmpty ? PlayerStyle.secondary : PlayerStyle.foreground)
                            .lineLimit(1).fixedSize(horizontal: true, vertical: false)
                            .textSelection(.enabled).padding(12)
                    }
                    .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 8))
                    .overlay(RoundedRectangle(cornerRadius: 8).strokeBorder(PlayerStyle.border))
                    .accessibilityLabel("空格位置检查")
                    Text("· 表示空格。长内容可横向滚动查看。")
                        .font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
                }
            }
        }
    }

    private var effectsSection: some View {
        VStack(alignment: .leading, spacing: 14) {
            sectionTitle("波浪效果", icon: "waveform.path")
            VStack(spacing: 20) {
                parameterSlider("振幅", value: $creation.waveText.amp,
                                range: WaveTextParameters.amplitudeRange, step: 0.05, digits: 2, unit: "行")
                parameterSlider("波长", value: $creation.waveText.wavelength,
                                range: WaveTextParameters.wavelengthRange, step: 1, digits: 0, unit: "字")
                parameterSlider("速度", value: $creation.waveText.speed,
                                range: WaveTextParameters.speedRange, step: 0.5, digits: 1, unit: "字/秒")
                Divider()
                VStack(alignment: .leading, spacing: 10) {
                    Text("字间距").font(.system(size: 13, weight: .medium))
                    Picker("字间距", selection: $creation.waveText.spacing) {
                        Text("无").tag(0)
                        ForEach(1...3, id: \.self) { Text("\($0) 格").tag($0) }
                    }
                    .pickerStyle(.segmented)
                    .labelsHidden().accessibilityLabel("字间距")
                    .onChange(of: creation.waveText.spacing) { _, _ in creation.flushPreview() }
                }
                Toggle(isOn: $creation.waveText.settle) {
                    VStack(alignment: .leading, spacing: 5) {
                        Text("波浪间歇").font(.system(size: 13, weight: .medium))
                        Text("每轮结束后回到水平。")
                            .font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
                    }
                }
                .toggleStyle(.switch)
                .onChange(of: creation.waveText.settle) { _, _ in creation.flushPreview() }
            }
            .padding(18)
            .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 12))
            .overlay(RoundedRectangle(cornerRadius: 12).strokeBorder(PlayerStyle.border))
        }
    }

    private var appearanceSection: some View {
        DisclosureGroup(isExpanded: $showsAppearance) {
            VStack(alignment: .leading, spacing: 20) {
                VStack(alignment: .leading, spacing: 10) {
                    Text("作品名称").font(.system(size: 13, weight: .medium))
                    TextField("为这份草稿取个名字", text: $creation.name)
                        .textFieldStyle(.plain).font(.system(size: 14))
                        .multilineTextAlignment(.leading).lineLimit(1)
                        .focused($focusedField, equals: .name)
                        .padding(.horizontal, 12).frame(minHeight: 44)
                        .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 9))
                        .overlay(RoundedRectangle(cornerRadius: 9).strokeBorder(
                            focusedField == .name ? PlayerStyle.accent : PlayerStyle.border,
                            lineWidth: focusedField == .name ? 2 : 1
                        ))
                        .accessibilityLabel("作品名称")
                }
                VStack(alignment: .leading, spacing: 10) {
                    Text("背景").font(.system(size: 13, weight: .medium))
                    Picker("背景", selection: $creation.appearance.background) {
                        ForEach(CanvasBackground.allCases) { Text($0.title).tag($0) }
                    }.pickerStyle(.segmented).labelsHidden().accessibilityLabel("画布背景")
                }
                ColorPicker("字符颜色", selection: Binding(
                    get: { Color(nsColor: NSColor(hex: creation.appearance.inkHex)) },
                    set: { creation.appearance.inkHex = NSColor($0).rgbHex }
                ), supportsOpacity: false).font(.system(size: 13, weight: .medium))
                Picker("字体", selection: $creation.appearance.font) {
                    ForEach(ArtFont.allCases) { Text($0.rawValue).tag($0) }
                }.font(.system(size: 13))
                VStack(alignment: .leading, spacing: 10) {
                    valueLabel("缩放", value: "\(Int(creation.appearance.zoom * 100))%")
                    Slider(value: $creation.appearance.zoom, in: 0.5...2, step: 0.05)
                        .accessibilityLabel("创作画面缩放")
                }
                Picker("帧率上限", selection: $creation.appearance.fpsLimit) {
                    Text("跟随模板 · 15 fps").tag(0)
                    ForEach([10, 15, 20, 30, 60], id: \.self) { Text("\($0) fps").tag($0) }
                }.font(.system(size: 13))
            }.padding(.top, 18)
        } label: {
            sectionTitle("外观与作品信息", icon: "slider.horizontal.3")
        }.tint(PlayerStyle.secondary)
    }

    private var footer: some View {
        VStack(alignment: .leading, spacing: 14) {
            HStack {
                Label(status, systemImage: creation.isPreviewPending || player.isLoading ? "clock" : "checkmark.circle")
                    .font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
                Spacer()
                Text("草稿 · 本次会话").font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
            }
            HStack(spacing: 12) {
                Button { creation.restoreDefaults() } label: {
                    Text("恢复默认").font(.system(size: 13, weight: .medium))
                        .frame(maxWidth: .infinity, minHeight: 44)
                }.buttonStyle(PlayerButtonStyle(kind: .bordered))
                Button { player.endCreation() } label: {
                    Text("返回播放").font(.system(size: 13, weight: .semibold))
                        .frame(maxWidth: .infinity, minHeight: 44)
                }.buttonStyle(PlayerButtonStyle(kind: .accent))
            }
        }.padding(24).background(PlayerStyle.sidebar)
    }

    private func sectionTitle(_ title: String, icon: String) -> some View {
        HStack(spacing: 8) {
            Image(systemName: icon).foregroundStyle(PlayerStyle.accent).accessibilityHidden(true)
            Text(title)
        }.font(.system(size: 14, weight: .semibold))
    }

    private func valueLabel(_ title: String, value: String) -> some View {
        HStack {
            Text(title).font(.system(size: 13, weight: .medium))
            Spacer()
            Text(value).font(.system(size: 12, design: .monospaced)).monospacedDigit()
                .foregroundStyle(PlayerStyle.selectedText)
                .padding(.horizontal, 9).padding(.vertical, 5)
                .background(PlayerStyle.accentSoft, in: Capsule())
        }
    }

    private func parameterSlider(_ title: String, value: Binding<Double>, range: ClosedRange<Double>,
                                 step: Double, digits: Int, unit: String) -> some View {
        VStack(alignment: .leading, spacing: 10) {
            valueLabel(title, value: "\(value.wrappedValue.formatted(.number.precision(.fractionLength(digits)))) \(unit)")
            Slider(value: value, in: range, step: step, onEditingChanged: creation.sliderEditingChanged)
                .accessibilityLabel(title)
        }
    }
}
