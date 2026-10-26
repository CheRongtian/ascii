# ASCII C++ 计算库

为全部 240 个作品提供本地计算实现。Swift 从 C++ 读取目录、创建实例和取得字符帧，桌面端已移除 JavaScriptCore 和 JavaScript 作品打包步骤。

全部 240 个作品通过具体 C++ 类型计算。原有 83 个直接实现保留；其余 157 个已替换为数值表达式、具体字段、类型化连续数组和直接函数调用，作品不再通过 `Value` / `Cell` 执行。RGB 与坐标等短数值元组可使用固定数组；传入普通数组参数时保留共享存储，让参数中的修改写回原数组。普通数组记录空槽，`forEach`、`map`、`filter` 等按原规则跳过空槽，类型化数组保持连续有效元素。生成的 `.cpp` 是构建输入，启动时不做源码转换。

切换或重播会取消旧实例正在进行的初始化和绘帧，计算循环响应取消后退出串行队列。Swift 播放器仅缓存准备超过 200 ms 并显示加载提示的慢作品，在内存中最多保留 12 个此类作品的实例、最近完整画面及播放位置；快速作品仅在当前播放期间保留，切走后释放。每次切入独立计时，切回缓存中的慢作品时恢复画面并复用实例；超出容量时淘汰最久未使用的缓存作品。初次打开仍执行原算法所需的预计算，未完成初始化的实例不会入缓存。缓存随应用退出释放。

**语法与类型静态检查已通过：275 个 C++ / Objective-C++ 源文件，0 个编译错误。** 检查使用 `clang++ -fsyntax-only`，没有链接或启动应用。代码保留原公式、种子、采样尺寸和预热步骤；240 个作品的画面与速度仍需用户确认，不能将此前三个案例的加速倍数推广到全部作品。

## 启动与构建

退出已运行的旧版播放器，在项目根目录执行：

```sh
./run.sh
```

需要 macOS 14+、Xcode 命令行工具和 CMake 3.20+。桌面构建与运行无需 Node.js、npm、数据库或网络下载。`run.sh` 通过根目录 `CMakeLists.txt` 构建；引擎先将 `direct.hpp` 及其引入的公共头生成为 PCH，后续各源文件复用。构建保留 Release 的 `-O3` 优化，同时最多编译八个文件；CMake 跟踪头文件依赖并复用已有对象文件。首次启用 PCH 时需要重新编译引擎。

单独构建计算库：

```sh
cmake -S . -B mac-app/build -DCMAKE_BUILD_TYPE=Release
cmake --build mac-app/build --config Release --target AsciiEngine --parallel 8
```

在项目根目录执行，生成 `mac-app/build/libAsciiEngine.a`，桌面应用链接同一个 CMake 目标。作品计算使用 C++17。桌面只构建和链接 `libAsciiEngine.a`，包含作品、标志、元数据与生命周期接口。原有 `src-cpp/build.sh` 仍可手动使用，产物位于 `src-cpp/build/`。

## 结构

| 文件 | 用途 |
| --- | --- |
| `include/ascii_engine.h` | Swift 可导入的 C 接口、目录与帧结构 |
| `include/ascii.hpp` | C++ 的作品、kit、Banner、SVG、终端入口 |
| `pieces/` | 240 个作品的具体类型计算实现 |
| `direct.hpp` | 类型化数组、字符串、数学和选项转换辅助 |
| `cancellation.hpp` | 跨线程取消标记与计算作用域 |
| `compiled/` | 独立 SDK 工具库的生成实现与清单，不含作品计算模块 |
| `catalog.cpp`、`engine.cpp` | 完整元数据、默认参数、注册与实例生命周期 |
| `value.*`、`value_methods.cpp` | 数值、字符串、数组、对象与回调操作 |
| `modules.cpp` | SDK 工具模块初始化，作品加载统一调用 C 接口 |
| `logo.*`、`draw.hpp`、`options.hpp` | 标志计算、基础绘图、随机数、时钟和 JSON 参数 |
| `image_io.mm`、`terminal.cpp` | 本机图片解码、PNG 解压、终端播放与输出 |
| `tools/direct.mjs` | 将作品算法转换为具体类型 C++ 的维护工具 |
| `tools/translate.mjs` | 独立 SDK 工具库的维护工具 |

运行时不解析或执行脚本。生成工具只在维护源文件时需要 Node.js 22.18+，启动和构建脚本均不会调用它。

## C 接口

```cpp
#include "include/ascii_engine.h"

AsciiPiece *piece = ascii_piece_create("reaction-diffusion", nullptr);
if (piece) {
    AsciiFrame frame{};
    if (ascii_piece_render(piece, 0.0, 0, 0, &frame)) {
        // frame.text 为 UTF-16；frame.text_length 为 UTF-16 单元数。
    }
    ascii_piece_destroy(piece);
}
```

`ascii_piece_count()` / `ascii_piece_meta_at()` 枚举目录。元数据为 UTF-8，调色板为 `0xRRGGBB`。帧字符和颜色借用实例缓冲区，下一次绘帧或销毁前应拷贝。创建失败返回空指针，绘帧失败返回 0；在同一线程读取 `ascii_engine_last_error()`。

空选项指针使用原默认值。`AsciiPieceOptions.json` 提供可序列化参数覆盖，标志还提供 `shine` / `scan` 字段。Swift 沿用默认参数，同一实例始终在一条串行队列中使用。实例从缓存恢复后通过 `ascii_piece_set_cancellation()` 绑定新任务的取消标记，再继续绘帧；取消期间未完成的帧不会替换最近完整画面。重新播放时释放并重建当前实例，模拟恢复初始状态。画面缓存区分纸色及颜色索引输出设置。

## C++ 工具接口

```cpp
#include "include/ascii.hpp"
#include <iostream>
using namespace ascii::native;

auto piece = ascii::load("donut");
std::cout << ascii::still(piece) << '\n';
auto title = ascii::banner(Value(u"Hello"), object({{u"color", u"#ff6a00"}}));
auto image = ascii::svg(title);
auto sea = ascii::kit("sea", {object({{u"cols", Value(64)}, {u"rows", Value(24)}})});
```

工具库单独构建：

```sh
cmake --build mac-app/build --config Release --target AsciiToolkit --parallel 4
```

先执行前面的 CMake 配置命令。该目标生成 `mac-app/build/libAsciiToolkit.a` 和计算库；SDK 调用者链接这两个静态库。Swift 播放器不编译或链接工具库。

`Value` 保留工具库实际使用的数值、数组、选项对象和回调。`get` / `put` 访问属性，`call` 调用函数，`function(callback, arity)` 创建回调。kit 保留回调入口。作品计算统一走具体类型引擎，C 接口的参数是可序列化 JSON。`module("kit/math")` 等模块提供原有命名导出。

原生图片入口接受本地路径、URL、文件字节或 RGBA 数据，使用系统解码器；SVG 形状可使用 kit 的 `fromSvg`。DOM、浏览器 Canvas 元素、React、Astro 和网页挂载适配保留在 `src/`，桌面展示由 SwiftUI / AppKit 承担。原异步图片和终端接口在 C++ 中同步返回，终端播放会阻塞调用线程。

SDK 独立链接两个静态库后，需使用 `-lc++ -lz -framework Foundation -framework AppKit -framework ImageIO -framework CoreGraphics`。

## 维护

```sh
node src-cpp/tools/direct.mjs
# 仅在维护 SDK 工具模块时：
node --disable-warning=ExperimentalWarning src-cpp/tools/translate.mjs
```

`direct.mjs` 更新 157 个具体类型作品实现，保留原有 83 个直接实现。维护时需要现有 TypeScript 编译器，可通过 `ASCII_TYPESCRIPT_PATH` 指定 `typescript.js`；正常构建无需该编译器。`translate.mjs` 只更新独立 SDK 工具模块，不能覆盖作品计算。新增作品还需补充元数据和注册入口。原 `src/` 继续服务网页库；修改它不会在桌面启动时自动转换，桌面直接使用 `src-cpp/`。

分批进度见 [MIGRATION.md](MIGRATION.md)。自由创作界面继续暂缓。作品源自 ascii.rest，沿用 MIT 许可。
