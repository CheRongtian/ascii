cmake_minimum_required(VERSION 3.20)

set(CMAKE_OSX_DEPLOYMENT_TARGET "14.0" CACHE STRING "Minimum macOS version")
project(AsciiPlayer LANGUAGES CXX OBJCXX)

if(NOT APPLE)
    message(FATAL_ERROR "ASCII Player requires macOS.")
endif()

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build configuration" FORCE)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_OBJCXX_STANDARD 17)
set(CMAKE_OBJCXX_STANDARD_REQUIRED ON)
set(CMAKE_OBJCXX_EXTENSIONS OFF)

set(ASCII_CPP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/src-cpp")
set(ASCII_MAC_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/mac-app")
file(GLOB ASCII_PIECES CONFIGURE_DEPENDS "${ASCII_CPP_ROOT}/pieces/*.cpp")
add_library(AsciiEngine STATIC
    "${ASCII_CPP_ROOT}/engine.cpp"
    "${ASCII_CPP_ROOT}/catalog.cpp"
    "${ASCII_CPP_ROOT}/logo.cpp"
    ${ASCII_PIECES}
)

target_precompile_headers(AsciiEngine PRIVATE "${ASCII_CPP_ROOT}/direct.hpp")
# Clang PCH support for the ccache compiler entry used by this build.
target_compile_options(AsciiEngine PRIVATE -Xclang -fno-pch-timestamp)
set_property(TARGET AsciiEngine PROPERTY CXX_COMPILER_LAUNCHER
    "${CMAKE_COMMAND};-E;env;CCACHE_SLOPPINESS=pch_defines,time_macros"
)

# SDK utilities are built only when their target is requested.
file(GLOB ASCII_TOOLKIT_MODULES CONFIGURE_DEPENDS "${ASCII_CPP_ROOT}/compiled/*.cpp")
add_library(AsciiToolkit STATIC EXCLUDE_FROM_ALL
    "${ASCII_CPP_ROOT}/value.cpp"
    "${ASCII_CPP_ROOT}/value_methods.cpp"
    "${ASCII_CPP_ROOT}/modules.cpp"
    "${ASCII_CPP_ROOT}/compiled_modules.cpp"
    "${ASCII_CPP_ROOT}/image_io.mm"
    "${ASCII_CPP_ROOT}/terminal.cpp"
    ${ASCII_TOOLKIT_MODULES}
)

foreach(ASCII_LIBRARY IN ITEMS AsciiEngine AsciiToolkit)
    target_include_directories(${ASCII_LIBRARY} PUBLIC "${ASCII_CPP_ROOT}")
    target_compile_options(${ASCII_LIBRARY} PRIVATE
        -ffp-contract=off -fbracket-depth=1024
        "$<$<COMPILE_LANGUAGE:OBJCXX>:-fobjc-arc>"
    )
endforeach()

find_library(ASCII_FOUNDATION Foundation REQUIRED)
find_library(ASCII_APPKIT AppKit REQUIRED)
find_library(ASCII_IMAGEIO ImageIO REQUIRED)
find_library(ASCII_COREGRAPHICS CoreGraphics REQUIRED)
target_link_libraries(AsciiToolkit PUBLIC AsciiEngine z
    "${ASCII_FOUNDATION}" "${ASCII_APPKIT}" "${ASCII_IMAGEIO}" "${ASCII_COREGRAPHICS}"
)

find_program(ASCII_XCRUN xcrun REQUIRED)
find_program(ASCII_ICONUTIL iconutil REQUIRED)
find_program(ASCII_CODESIGN codesign REQUIRED)

# Swift is invoked directly so the default Makefiles generator works without Ninja.
file(GLOB ASCII_SWIFT_SOURCES CONFIGURE_DEPENDS "${ASCII_MAC_ROOT}/Sources/AsciiPlayer/*.swift")
set(ASCII_APP "${CMAKE_CURRENT_BINARY_DIR}/ASCII Player.app")
set(ASCII_CONTENTS "${ASCII_APP}/Contents")
set(ASCII_EXECUTABLE "${ASCII_CONTENTS}/MacOS/AsciiPlayer")
set(ASCII_MODULE_CACHE "${CMAKE_CURRENT_BINARY_DIR}/ModuleCache")
set(ASCII_SWIFT_TARGET "${CMAKE_SYSTEM_PROCESSOR}-apple-macosx${CMAKE_OSX_DEPLOYMENT_TARGET}")

add_custom_command(
    OUTPUT "${ASCII_EXECUTABLE}"
    COMMAND "${CMAKE_COMMAND}" -E make_directory "${ASCII_CONTENTS}/MacOS" "${ASCII_MODULE_CACHE}"
    COMMAND "${ASCII_XCRUN}" swiftc -O -parse-as-library -swift-version 6
        -target "${ASCII_SWIFT_TARGET}"
        -module-cache-path "${ASCII_MODULE_CACHE}"
        -import-objc-header "${ASCII_CPP_ROOT}/include/ascii_engine.h"
        -framework SwiftUI -framework AppKit -framework Foundation -framework ImageIO
        -framework CoreText -framework CoreGraphics
        ${ASCII_SWIFT_SOURCES} "$<TARGET_FILE:AsciiEngine>" -lc++ -lz
        -o "${ASCII_EXECUTABLE}"
    DEPENDS AsciiEngine ${ASCII_SWIFT_SOURCES} "${ASCII_CPP_ROOT}/include/ascii_engine.h"
    COMMENT "Linking Swift executable AsciiPlayer"
    VERBATIM
)

set(ASCII_ICON_BUILDER "${CMAKE_CURRENT_BINARY_DIR}/MakeIcon")
set(ASCII_ICONSET "${CMAKE_CURRENT_BINARY_DIR}/AppIcon.iconset")
set(ASCII_ICON "${CMAKE_CURRENT_BINARY_DIR}/AppIcon.icns")
add_custom_command(
    OUTPUT "${ASCII_ICON_BUILDER}"
    COMMAND "${CMAKE_COMMAND}" -E make_directory "${ASCII_MODULE_CACHE}"
    COMMAND "${ASCII_XCRUN}" swiftc -O -target "${ASCII_SWIFT_TARGET}"
        -module-cache-path "${ASCII_MODULE_CACHE}"
        "${ASCII_MAC_ROOT}/scripts/Icon.swift" -o "${ASCII_ICON_BUILDER}"
    DEPENDS "${ASCII_MAC_ROOT}/scripts/Icon.swift"
    COMMENT "Compiling MakeIcon"
    VERBATIM
)
add_custom_command(
    OUTPUT "${ASCII_ICON}"
    COMMAND "${ASCII_ICON_BUILDER}" "${ASCII_ICONSET}"
    COMMAND "${ASCII_ICONUTIL}" -c icns "${ASCII_ICONSET}" -o "${ASCII_ICON}"
    DEPENDS "${ASCII_ICON_BUILDER}"
    COMMENT "Generating AppIcon.icns"
    VERBATIM
)

set(ASCII_FONT_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/site/src/assets/fonts")
set(ASCII_BUNDLE_STAMP "${CMAKE_CURRENT_BINARY_DIR}/AsciiPlayer-bundle.stamp")
add_custom_command(
    OUTPUT "${ASCII_BUNDLE_STAMP}"
    COMMAND "${CMAKE_COMMAND}" -E make_directory "${ASCII_CONTENTS}/Resources"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${ASCII_MAC_ROOT}/Info.plist" "${ASCII_CONTENTS}/Info.plist"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE" "${ASCII_CONTENTS}/Resources/ascii.rest-LICENSE.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${ASCII_FONT_ROOT}/PaperMono-Regular.ttf" "${ASCII_CONTENTS}/Resources/PaperMono-Regular.ttf"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${ASCII_FONT_ROOT}/OFL.txt" "${ASCII_CONTENTS}/Resources/PaperMono-LICENSE.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${ASCII_ICON}" "${ASCII_CONTENTS}/Resources/AppIcon.icns"
    COMMAND "${ASCII_CODESIGN}" --force --sign - "${ASCII_APP}"
    COMMAND "${CMAKE_COMMAND}" -E touch "${ASCII_BUNDLE_STAMP}"
    DEPENDS "${ASCII_EXECUTABLE}" "${ASCII_ICON}" "${ASCII_MAC_ROOT}/Info.plist"
        "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE"
        "${ASCII_FONT_ROOT}/PaperMono-Regular.ttf" "${ASCII_FONT_ROOT}/OFL.txt"
    BYPRODUCTS "${ASCII_CONTENTS}/Info.plist"
        "${ASCII_CONTENTS}/Resources/ascii.rest-LICENSE.txt"
        "${ASCII_CONTENTS}/Resources/PaperMono-Regular.ttf"
        "${ASCII_CONTENTS}/Resources/PaperMono-LICENSE.txt"
        "${ASCII_CONTENTS}/Resources/AppIcon.icns"
        "${ASCII_CONTENTS}/_CodeSignature/CodeResources"
    COMMENT "Packaging and signing ASCII Player.app"
    VERBATIM
)
add_custom_target(AsciiPlayer ALL DEPENDS "${ASCII_BUNDLE_STAMP}")
