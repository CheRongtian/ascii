#!/bin/bash
set -euo pipefail

ASCII_CPP_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ASCII_CPP_OUTPUT="${1:-$ASCII_CPP_ROOT/build}"
bash "$ASCII_CPP_ROOT/build.sh" "$ASCII_CPP_OUTPUT"
mkdir -p "$ASCII_CPP_OUTPUT"

ASCII_CPP_FLAGS=(-std=c++17 -O3 -ffp-contract=off -fbracket-depth=1024
    -target "$(uname -m)-apple-macosx14.0" -I "$ASCII_CPP_ROOT")
# Optional SDK utilities; piece loading calls the concrete calculation library.
ASCII_CPP_SOURCES=("$ASCII_CPP_ROOT/value.cpp" "$ASCII_CPP_ROOT/value_methods.cpp"
    "$ASCII_CPP_ROOT/modules.cpp" "$ASCII_CPP_ROOT/compiled_modules.cpp"
    "$ASCII_CPP_ROOT/image_io.mm" "$ASCII_CPP_ROOT/terminal.cpp"
    "$ASCII_CPP_ROOT"/compiled/*.cpp)
ASCII_CPP_HEADERS=("$ASCII_CPP_ROOT"/*.hpp "$ASCII_CPP_ROOT"/include/*.h "$ASCII_CPP_ROOT"/include/*.hpp)
ASCII_CPP_OBJECTS=()
ASCII_CPP_PIDS=()
ASCII_CPP_BUSY=0

for ASCII_CPP_SOURCE in "${ASCII_CPP_SOURCES[@]}"; do
    ASCII_CPP_RELATIVE="${ASCII_CPP_SOURCE#"$ASCII_CPP_ROOT/"}"
    ASCII_CPP_OBJECT="$ASCII_CPP_OUTPUT/${ASCII_CPP_RELATIVE%.*}.o"
    mkdir -p "$(dirname "$ASCII_CPP_OBJECT")"
    ASCII_CPP_OBJECTS+=("$ASCII_CPP_OBJECT")
    ASCII_CPP_RECOMPILE=false
    if [ ! -f "$ASCII_CPP_OBJECT" ] || [ "$ASCII_CPP_SOURCE" -nt "$ASCII_CPP_OBJECT" ] \
        || [ "$ASCII_CPP_ROOT/build-toolkit.sh" -nt "$ASCII_CPP_OBJECT" ]; then
        ASCII_CPP_RECOMPILE=true
    else
        for ASCII_CPP_HEADER in "${ASCII_CPP_HEADERS[@]}"; do
            if [ "$ASCII_CPP_HEADER" -nt "$ASCII_CPP_OBJECT" ]; then ASCII_CPP_RECOMPILE=true; break; fi
        done
    fi
    if [ "$ASCII_CPP_RECOMPILE" = false ]; then continue; fi
    printf '  %s\n' "$ASCII_CPP_RELATIVE"
    if [[ "$ASCII_CPP_SOURCE" == *.mm ]]; then
        xcrun clang++ "${ASCII_CPP_FLAGS[@]}" -fobjc-arc -c "$ASCII_CPP_SOURCE" -o "$ASCII_CPP_OBJECT" &
    else
        xcrun clang++ "${ASCII_CPP_FLAGS[@]}" -c "$ASCII_CPP_SOURCE" -o "$ASCII_CPP_OBJECT" &
    fi
    ASCII_CPP_PIDS+=("$!")
    ASCII_CPP_BUSY=$((ASCII_CPP_BUSY + 1))
    if [ "$ASCII_CPP_BUSY" -ge 4 ]; then
        for ASCII_CPP_PID in "${ASCII_CPP_PIDS[@]}"; do wait "$ASCII_CPP_PID"; done
        ASCII_CPP_PIDS=()
        ASCII_CPP_BUSY=0
    fi
done
if [ "$ASCII_CPP_BUSY" -gt 0 ]; then
    for ASCII_CPP_PID in "${ASCII_CPP_PIDS[@]}"; do wait "$ASCII_CPP_PID"; done
fi
xcrun libtool -static -o "$ASCII_CPP_OUTPUT/libAsciiToolkit.a" "${ASCII_CPP_OBJECTS[@]}"
printf 'C++ library: %s\n' "$ASCII_CPP_OUTPUT/libAsciiToolkit.a"
