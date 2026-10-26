#!/bin/bash
set -euo pipefail

ASCII_APP_ROOT="$(cd "$(dirname "$0")" && pwd)"
ASCII_BUILD_DIR="$ASCII_APP_ROOT/build"
ASCII_APP="$ASCII_BUILD_DIR/ASCII Player.app"
ASCII_CONTENTS="$ASCII_APP/Contents"
ASCII_CPP_ROOT="$ASCII_APP_ROOT/../src-cpp"
mkdir -p "$ASCII_CONTENTS/MacOS" "$ASCII_CONTENTS/Resources" "$ASCII_BUILD_DIR/ModuleCache"

bash "$ASCII_CPP_ROOT/build.sh" "$ASCII_BUILD_DIR/Cpp"
cp "$ASCII_APP_ROOT/../LICENSE" "$ASCII_CONTENTS/Resources/ascii.rest-LICENSE.txt"
cp "$ASCII_APP_ROOT/../site/src/assets/fonts/PaperMono-Regular.ttf" "$ASCII_CONTENTS/Resources/"
cp "$ASCII_APP_ROOT/../site/src/assets/fonts/OFL.txt" "$ASCII_CONTENTS/Resources/PaperMono-LICENSE.txt"
# Rebuilding an older app must not keep its obsolete JavaScript resource bundle.
if [ -d "$ASCII_CONTENTS/Resources/Pieces" ]; then rm -r "$ASCII_CONTENTS/Resources/Pieces"; fi
if [ -f "$ASCII_CONTENTS/Resources/catalog.json" ]; then rm "$ASCII_CONTENTS/Resources/catalog.json"; fi
cp "$ASCII_APP_ROOT/Info.plist" "$ASCII_CONTENTS/Info.plist"

xcrun swiftc -O -parse-as-library -swift-version 6 \
  -target "$(uname -m)-apple-macosx14.0" \
  -module-cache-path "$ASCII_BUILD_DIR/ModuleCache" \
  -import-objc-header "$ASCII_CPP_ROOT/include/ascii_engine.h" \
  -framework SwiftUI -framework AppKit -framework Foundation -framework ImageIO \
  -framework CoreText -framework CoreGraphics \
  "$ASCII_APP_ROOT"/Sources/AsciiPlayer/*.swift \
  "$ASCII_BUILD_DIR/Cpp/libAsciiEngine.a" -lc++ -lz \
  -o "$ASCII_CONTENTS/MacOS/AsciiPlayer"

xcrun swiftc -O -module-cache-path "$ASCII_BUILD_DIR/ModuleCache" \
  "$ASCII_APP_ROOT/scripts/Icon.swift" -o "$ASCII_BUILD_DIR/MakeIcon"
"$ASCII_BUILD_DIR/MakeIcon" "$ASCII_BUILD_DIR/AppIcon.iconset"
iconutil -c icns "$ASCII_BUILD_DIR/AppIcon.iconset" -o "$ASCII_CONTENTS/Resources/AppIcon.icns"
codesign --force --sign - "$ASCII_APP"
printf '\nBuilt: %s\n' "$ASCII_APP"
