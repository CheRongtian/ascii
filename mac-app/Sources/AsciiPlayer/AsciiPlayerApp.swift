import AppKit
import SwiftUI

@main
struct AsciiPlayerApp: App {
    @NSApplicationDelegateAdaptor(PlayerAppDelegate.self) private var delegate
    @StateObject private var model = PlayerModel()

    var body: some Scene {
        Window("ASCII Player", id: "player") {
            ContentView(model: model)
                .onAppear { delegate.model = model }
        }
        .windowStyle(.hiddenTitleBar)
        .defaultSize(width: 1320, height: 880)
        .windowResizability(.contentMinSize)
        .commands {
            CommandGroup(replacing: .newItem) {
                Button("文字创作") { model.beginCreation() }
                    .keyboardShortcut("n", modifiers: .command)
                    .disabled(model.isCreating)
            }
            CommandGroup(after: .textEditing) {
                Button("搜索作品") {
                    NotificationCenter.default.post(name: .asciiFocusSearch, object: nil)
                }.keyboardShortcut("f", modifiers: .command)
                    .disabled(model.isCreating)
            }
            CommandMenu("播放") {
                Button(model.isPlaying ? "暂停" : "继续播放") { model.togglePlayback() }
                    .keyboardShortcut("p", modifiers: .command)
                Button("从头播放") { model.restart() }.keyboardShortcut("r", modifiers: .command)
                Divider()
                Button("上一个") { model.move(-1) }.keyboardShortcut(.leftArrow, modifiers: .command)
                    .disabled(model.isCreating)
                Button("下一个") { model.move(1) }.keyboardShortcut(.rightArrow, modifiers: .command)
                    .disabled(model.isCreating)
                Button("随机选择作品") { model.selectRandom() }.keyboardShortcut("s", modifiers: [.command, .shift])
                    .disabled(model.isCreating)
                Divider()
                Toggle("自动轮播", isOn: $model.autoAdvance)
                    .disabled(model.isCreating)
                Toggle("随机顺序", isOn: $model.shuffle)
                    .disabled(model.isCreating)
                if let id = model.selectedID {
                    Button(model.favorites.contains(id) ? "取消收藏" : "收藏当前作品") { model.toggleFavorite(id) }
                        .keyboardShortcut("d", modifiers: .command)
                        .disabled(model.isCreating)
                }
            }
            CommandGroup(after: .windowArrangement) {
                Toggle("窗口置顶", isOn: $model.alwaysOnTop)
                Button("切换全屏") { model.toggleFullscreen() }
                    .keyboardShortcut("f", modifiers: [.command, .control])
            }
        }
    }
}

@MainActor
final class PlayerAppDelegate: NSObject, NSApplicationDelegate {
    weak var model: PlayerModel?
    private var keyMonitor: Any?

    func applicationDidFinishLaunching(_ notification: Notification) {
        NSApp.setActivationPolicy(.regular)
        NSApp.activate(ignoringOtherApps: true)
        keyMonitor = NSEvent.addLocalMonitorForEvents(matching: .keyDown) { [weak self] event in
            let handled = MainActor.assumeIsolated {
                guard let model = self?.model,
                      event.window === model.surface.view?.window,
                      NSApp.keyWindow?.firstResponder === model.surface.view,
                      event.modifierFlags.intersection([.command, .control, .option, .shift]).isEmpty else { return false }
                switch event.keyCode {
                case 49: model.togglePlayback(); return true
                case 123: guard !model.isCreating else { return false }; model.move(-1); return true
                case 124: guard !model.isCreating else { return false }; model.move(1); return true
                default: return false
                }
            }
            return handled ? nil : event
        }
        NSWorkspace.shared.notificationCenter.addObserver(self, selector: #selector(willSleep), name: NSWorkspace.willSleepNotification, object: nil)
        NSWorkspace.shared.notificationCenter.addObserver(self, selector: #selector(didWake), name: NSWorkspace.didWakeNotification, object: nil)
    }

    @objc private func willSleep() { model?.isSleeping = true }
    @objc private func didWake() { model?.isSleeping = false }

    func applicationShouldTerminateAfterLastWindowClosed(_ sender: NSApplication) -> Bool { true }

    func applicationWillTerminate(_ notification: Notification) {
        model?.stop()
        if let keyMonitor { NSEvent.removeMonitor(keyMonitor) }
        NSWorkspace.shared.notificationCenter.removeObserver(self)
    }
}
