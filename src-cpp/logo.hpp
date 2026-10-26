#pragma once

#include "core.hpp"
#include <string_view>

namespace ascii {
struct LogoDefinition {
    AsciiPieceMeta meta;
    std::u16string_view mono;
    std::u16string_view art;
    std::u16string_view ink;
    std::u16string_view solid = u"8dbqpPYOo0";
};

std::vector<std::u16string> logo_lines(std::u16string_view raw, int cols);
std::unique_ptr<Piece> make_logo(const LogoDefinition &definition, double shine);
std::unique_ptr<Piece> make_scan_logo(const LogoDefinition &definition, double scan);
} // namespace ascii
