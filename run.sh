#!/bin/bash
set -euo pipefail

ASCII_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
exec > >(tee "$ASCII_ROOT/log.log") 2>&1

ASCII_BUILD_DIR="$ASCII_ROOT/mac-app/build"
ASCII_APP="$ASCII_BUILD_DIR/ASCII Player.app"
ASCII_EXECUTABLE="$ASCII_APP/Contents/MacOS/AsciiPlayer"

cmake -S "$ASCII_ROOT" -B "$ASCII_BUILD_DIR" -DCMAKE_BUILD_TYPE=Release
cmake --build "$ASCII_BUILD_DIR" --config Release --target AsciiPlayer --parallel 8

exec "$ASCII_EXECUTABLE"
