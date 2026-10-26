import AppKit
import SwiftUI

extension Notification.Name {
    static let asciiFocusSearch = Notification.Name("ascii.player.focusSearch")
}

struct ContentView: View {
    @ObservedObject var model: PlayerModel
    @State private var visibility: NavigationSplitViewVisibility = .all
    @State private var showSettings = false
    @FocusState private var searchFocused: Bool
    @Environment(\.accessibilityReduceMotion) private var reduceMotion

    var body: some View {
        NavigationSplitView(columnVisibility: $visibility) {
            sidebar.navigationSplitViewColumnWidth(min: 290, ideal: 320, max: 380)
        } detail: {
            player
        }
        .navigationSplitViewStyle(.balanced)
        .frame(minWidth: 1020, minHeight: 720)
        .preferredColorScheme(.light)
        .tint(PlayerStyle.accent)
        .onReceive(NotificationCenter.default.publisher(for: .asciiFocusSearch)) { _ in
            visibility = .all
            searchFocused = true
        }
        .onAppear {
            if reduceMotion { model.isPlaying = false }
            model.start()
        }
        .onChange(of: reduceMotion) { _, enabled in
            if enabled { model.isPlaying = false }
        }
        .onDisappear { model.stop() }
    }

    private var sidebar: some View {
        VStack(alignment: .leading, spacing: 0) {
            VStack(alignment: .leading, spacing: 22) {
                HStack(spacing: 12) {
                    Image(systemName: "square.grid.3x3")
                        .font(.system(size: 21, weight: .medium)).foregroundStyle(PlayerStyle.accent)
                        .frame(width: 44, height: 44)
                        .background(PlayerStyle.accentSoft, in: RoundedRectangle(cornerRadius: 12))
                        .accessibilityHidden(true)
                    VStack(alignment: .leading, spacing: 3) {
                        HStack(alignment: .firstTextBaseline, spacing: 7) {
                            Text("ASCII").font(.system(size: 26, weight: .semibold, design: .monospaced)).tracking(-1)
                            Text("Player").font(.system(size: 14, weight: .medium)).foregroundStyle(PlayerStyle.secondary)
                        }
                        Text("字符艺术播放台").font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
                    }
                }
                VStack(alignment: .leading, spacing: 9) {
                    Text("搜索作品").font(.system(size: 12, weight: .medium)).foregroundStyle(PlayerStyle.secondary)
                    searchField
                }
                HStack(spacing: 6) {
                    scopeButton("全部作品", count: model.pieces.count, favorite: false)
                    scopeButton("我的收藏", count: model.favorites.count, favorite: true)
                }
                HStack {
                    Picker("分类", selection: $model.category) {
                        Text("所有分类").tag("all")
                        ForEach(PieceCategory.all) { Text($0.title).tag($0.id) }
                    }
                    .pickerStyle(.menu).font(.system(size: 12))
                    .accessibilityLabel("按作品分类筛选")
                    Spacer(minLength: 4)
                    Text("\(model.filteredPieces.count) 件")
                        .font(.system(size: 12, design: .monospaced)).monospacedDigit()
                        .foregroundStyle(PlayerStyle.secondary)
                        .accessibilityLabel("找到 \(model.filteredPieces.count) 个作品")
                }
            }
            .padding(.horizontal, 20).padding(.top, 44).padding(.bottom, 16)
            Rectangle().fill(PlayerStyle.border).frame(height: 1).padding(.horizontal, 20)
            if model.filteredPieces.isEmpty { emptyLibrary }
            else { libraryList }
            HStack(spacing: 8) {
                Image(systemName: "checkmark.circle").foregroundStyle(PlayerStyle.success).accessibilityHidden(true)
                Text("本地作品，离线可用").font(.system(size: 12))
                Spacer(minLength: 4)
                Text("\(model.pieces.count)").font(.system(size: 12, design: .monospaced))
            }
            .foregroundStyle(PlayerStyle.secondary)
            .padding(.horizontal, 20).padding(.vertical, 16)
            .background(PlayerStyle.sidebar)
        }
        .foregroundStyle(PlayerStyle.foreground).background(PlayerStyle.sidebar)
    }

    private var searchField: some View {
        HStack(spacing: 9) {
            Image(systemName: "magnifyingglass").foregroundStyle(PlayerStyle.secondary).accessibilityHidden(true)
            TextField("名称、描述或分类", text: $model.query)
                .textFieldStyle(.plain).font(.system(size: 13)).focused($searchFocused)
                .accessibilityLabel("搜索作品")
            if model.query.isEmpty {
                Text("⌘F").font(.system(size: 12, design: .monospaced)).foregroundStyle(PlayerStyle.secondary).accessibilityHidden(true)
            } else {
                Button { model.query = "" } label: {
                    Image(systemName: "xmark.circle.fill").frame(width: 24, height: 24)
                }
                .buttonStyle(.plain).foregroundStyle(PlayerStyle.secondary)
                .accessibilityLabel("清空搜索").help("清空搜索")
            }
        }
        .padding(.horizontal, 12).frame(height: 42)
        .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 10))
        .overlay(RoundedRectangle(cornerRadius: 10).strokeBorder(searchFocused ? PlayerStyle.accent : PlayerStyle.border, lineWidth: searchFocused ? 2 : 1))
    }

    private func scopeButton(_ title: String, count: Int, favorite: Bool) -> some View {
        Button { model.favoritesOnly = favorite } label: {
            HStack(spacing: 6) {
                Text(title).font(.system(size: 12, weight: .medium))
                Text("\(count)").font(.system(size: 12, design: .monospaced)).monospacedDigit()
            }.frame(maxWidth: .infinity).frame(height: 36)
        }
        .buttonStyle(PlayerButtonStyle(selected: model.favoritesOnly == favorite))
        .accessibilityLabel("\(title)，\(count) 个作品")
        .accessibilityAddTraits(model.favoritesOnly == favorite ? .isSelected : [])
    }

    private var libraryList: some View {
        let matches = model.filteredPieces
        return ScrollViewReader { proxy in
            ScrollView {
                LazyVStack(alignment: .leading, spacing: 5) {
                    ForEach(PieceCategory.all) { category in
                        let group = matches.filter { $0.category == category.id }
                        if !group.isEmpty {
                            Section {
                                ForEach(group) { piece in
                                    LibraryPieceRow(piece: piece, selected: piece.id == model.selectedID,
                                                    favorite: model.favorites.contains(piece.id),
                                                    select: { model.selectedID = piece.id; searchFocused = false },
                                                    toggleFavorite: { model.toggleFavorite(piece.id) })
                                        .id(piece.id)
                                }
                            } header: {
                                HStack(spacing: 7) {
                                    Image(systemName: category.icon).accessibilityHidden(true)
                                    Text(category.title)
                                    Spacer()
                                    Text("\(group.count)").monospacedDigit()
                                }
                                .font(.system(size: 12, weight: .medium)).foregroundStyle(PlayerStyle.secondary)
                                .padding(.horizontal, 10).padding(.top, 18).padding(.bottom, 5)
                            }
                        }
                    }
                }.padding(.horizontal, 12).padding(.bottom, 16)
            }
            .onAppear {
                if let id = model.selectedID { proxy.scrollTo(id, anchor: .center) }
            }
            .onChange(of: model.selectedID) { _, id in
                guard let id, matches.contains(where: { $0.id == id }) else { return }
                withAnimation(reduceMotion ? nil : .easeOut(duration: 0.18)) { proxy.scrollTo(id, anchor: .center) }
            }
        }
    }

    private var emptyLibrary: some View {
        VStack(spacing: 14) {
            Image(systemName: model.favoritesOnly && model.query.isEmpty ? "star" : "magnifyingglass")
                .font(.system(size: 28, weight: .light)).foregroundStyle(PlayerStyle.secondary).accessibilityHidden(true)
            Text(model.favoritesOnly && model.query.isEmpty ? "留住喜欢的画面" : "没有找到作品")
                .font(.system(size: 15, weight: .semibold))
            Text(model.favoritesOnly && model.query.isEmpty ? "点击作品旁的星标，即可加入收藏。" : "试试 donut、rain、clock 或「风景」。")
                .font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary).multilineTextAlignment(.center)
            Button("查看全部作品") { model.query = ""; model.category = "all"; model.favoritesOnly = false }
                .font(.system(size: 12, weight: .medium)).padding(.top, 4)
        }
        .padding(24).frame(maxWidth: .infinity, maxHeight: .infinity)
    }

    private var player: some View {
        VStack(alignment: .leading, spacing: 0) {
            pieceHeading.padding(.bottom, 20)
            ArtworkStage(model: model).frame(maxHeight: .infinity)
            HStack {
                Text("\(model.filteredPieces.count) 个作品可切换")
                Spacer()
                Text(model.elapsedLabel).font(.system(size: 12, design: .monospaced)).monospacedDigit()
            }
            .font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary)
            .padding(.horizontal, 2).padding(.top, 14).padding(.bottom, 18)
            PlaybackControls(model: model)
            HStack(spacing: 16) {
                shortcutHint("SPACE", "播放 / 暂停")
                shortcutHint("← →", "切换作品")
                Spacer(minLength: 0)
                Text("ascii.rest").font(.system(size: 12, design: .monospaced)).foregroundStyle(PlayerStyle.secondary)
            }.padding(.horizontal, 2).padding(.top, 15)
        }
        .padding(.horizontal, 28).padding(.top, 34).padding(.bottom, 22)
        .foregroundStyle(PlayerStyle.foreground).background(PlayerStyle.background)
    }

    private var workspaceToolbar: some View {
        HStack(spacing: 8) {
            PlayerActionButton(title: "作品库", icon: "sidebar.left",
                               selected: visibility != .detailOnly, help: "展开或收起作品库") {
                visibility = visibility == .detailOnly ? .all : .detailOnly
            }
            if let id = model.selectedID {
                let favorite = model.favorites.contains(id)
                PlayerActionButton(title: favorite ? "取消收藏" : "收藏", icon: favorite ? "star.fill" : "star",
                                   selected: favorite, help: "收藏当前作品 · ⌘D") { model.toggleFavorite(id) }
            }
            PlayerActionButton(title: model.alwaysOnTop ? "取消置顶" : "窗口置顶", icon: model.alwaysOnTop ? "pin.fill" : "pin",
                               selected: model.alwaysOnTop) { model.alwaysOnTop.toggle() }
            PlayerActionButton(title: "全屏", icon: "arrow.up.left.and.arrow.down.right", help: "全屏 · ⌃⌘F") { model.toggleFullscreen() }
            PlayerActionButton(title: "显示设置", icon: "slider.horizontal.3", bordered: true) { showSettings.toggle() }
                .popover(isPresented: $showSettings, arrowEdge: .bottom) {
                    SettingsPanel(model: model) { showSettings = false }
                }
        }
    }

    private var pieceHeading: some View {
        HStack(alignment: .top, spacing: 16) {
            VStack(alignment: .leading, spacing: 9) {
                Text("现在播放").font(.system(size: 12, weight: .medium)).foregroundStyle(PlayerStyle.secondary)
                Text(model.selectedPiece?.title ?? "选择一个作品")
                    .font(.system(size: 30, weight: .medium, design: .monospaced)).tracking(-0.7)
                    .lineLimit(1).minimumScaleFactor(0.75)
                Text(model.selectedPiece?.displayNote ?? "从作品库选择一幅画面，开始你的字符艺术之旅。")
                    .font(.system(size: 13)).foregroundStyle(PlayerStyle.secondary).lineLimit(2)
            }
            Spacer(minLength: 0)
            workspaceToolbar.padding(.top, 22)
        }
    }

    private func shortcutHint(_ key: String, _ title: String) -> some View {
        HStack(spacing: 7) {
            Text(key).font(.system(size: 11, weight: .medium, design: .monospaced))
                .padding(.horizontal, 6).padding(.vertical, 3)
                .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 4))
                .overlay(RoundedRectangle(cornerRadius: 4).strokeBorder(PlayerStyle.border))
            Text(title).font(.system(size: 12))
        }.foregroundStyle(PlayerStyle.secondary).accessibilityElement(children: .combine)
    }
}

private struct LibraryPieceRow: View {
    let piece: Piece
    let selected: Bool
    let favorite: Bool
    let select: () -> Void
    let toggleFavorite: () -> Void

    var body: some View {
        HStack(spacing: 4) {
            Button(action: select) {
                HStack(spacing: 10) {
                    Image(systemName: selected ? "waveform" : piece.categoryInfo.icon)
                        .font(.system(size: 15, weight: .regular))
                        .foregroundStyle(selected ? PlayerStyle.accent : PlayerStyle.secondary)
                        .frame(width: 26).accessibilityHidden(true)
                    VStack(alignment: .leading, spacing: 5) {
                        Text(piece.title).font(.system(size: 13, weight: selected ? .semibold : .medium, design: .monospaced)).lineLimit(1)
                        Text(piece.displayNote).font(.system(size: 12)).foregroundStyle(PlayerStyle.secondary).lineLimit(1)
                    }
                    Spacer(minLength: 0)
                }
                .padding(.horizontal, 10).padding(.vertical, 12).frame(maxWidth: .infinity, alignment: .leading)
            }
            .buttonStyle(PlayerButtonStyle(selected: selected))
            .accessibilityLabel("播放 \(piece.title)，\(piece.displayNote)")
            .accessibilityAddTraits(selected ? .isSelected : [])
            PlayerActionButton(title: favorite ? "取消收藏 \(piece.title)" : "收藏 \(piece.title)",
                               icon: favorite ? "star.fill" : "star", selected: favorite, action: toggleFavorite)
        }
    }
}

private struct ArtworkStage: View {
    @ObservedObject var model: PlayerModel
    @State private var showLoading = false

    var body: some View {
        VStack(spacing: 0) {
            HStack(spacing: 8) {
                Image(systemName: model.isPlaying ? "play.circle" : "pause.circle").accessibilityHidden(true)
                Text(model.selectedPiece?.fps == 0 ? "静态作品" : model.isPlaying ? "播放中" : "已暂停")
                Spacer(minLength: 8)
                if let piece = model.selectedPiece {
                    Text(piece.categoryInfo.title)
                    Text("/").accessibilityHidden(true)
                    Text("\(piece.cols) × \(piece.rows)").monospacedDigit()
                    Text("/").accessibilityHidden(true)
                    Text("\(model.effectiveFPS) fps").monospacedDigit()
                }
            }
            .font(.system(size: 12, weight: .medium)).foregroundStyle(PlayerStyle.stageSecondary)
            .padding(.horizontal, 18).frame(height: 44).background(PlayerStyle.stage)
            ZStack {
                ArtCanvas(model: model)
                if let error = model.error {
                    VStack(spacing: 14) {
                        Label("暂时无法播放", systemImage: "exclamationmark.triangle")
                            .font(.system(size: 16, weight: .semibold))
                        Text(error).font(.system(size: 12)).multilineTextAlignment(.center).textSelection(.enabled)
                        Button("重新加载") { model.restart() }
                            .padding(.horizontal, 16).frame(height: 38).buttonStyle(PlayerButtonStyle(kind: .accent))
                    }
                    .foregroundStyle(PlayerStyle.foreground).padding(24)
                    .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 12)).padding(24)
                } else if model.isLoading && showLoading {
                    HStack(spacing: 12) {
                        ProgressView().controlSize(.small)
                        Text("正在准备画面…").font(.system(size: 13))
                    }
                    .foregroundStyle(PlayerStyle.foreground).padding(18)
                    .background(PlayerStyle.surface, in: RoundedRectangle(cornerRadius: 12))
                }
            }.frame(maxWidth: .infinity, maxHeight: .infinity)
        }
        .background(PlayerStyle.stage)
        .clipShape(RoundedRectangle(cornerRadius: 16))
        .overlay(RoundedRectangle(cornerRadius: 16).strokeBorder(.black.opacity(0.12)))
        .shadow(color: .black.opacity(0.08), radius: 18, x: 0, y: 8)
        .task(id: model.generation) {
            let generation = model.generation
            showLoading = false
            guard model.isLoading else { return }
            do { try await Task.sleep(for: .milliseconds(200)) } catch { return }
            guard !Task.isCancelled, model.generation == generation, model.isLoading else { return }
            showLoading = true
            model.preparationDidWait(for: generation)
        }
    }
}
