// Glint and scan renderers used by the original logos in src/pieces/.
#include "logo.hpp"
#include <limits>
#include <utility>

namespace ascii {
namespace {
constexpr double START = 0.5;
constexpr double PASS = 2;
constexpr double HALF = 5;
constexpr double LEAN = 0.9;
constexpr double HEAD = 2;
constexpr double TRAIL = 5;
constexpr std::u16string_view NOISE = u"#$%&*+<=>?@[]{}";
} // namespace

std::vector<std::u16string> logo_lines(std::u16string_view raw, int cols) {
    // Match String.raw art.slice(1, -1).split("\n").map(padEnd(cols)).
    raw.remove_prefix(1);
    raw.remove_suffix(1);
    std::vector<std::u16string> result;
    size_t start = 0;
    while (true) {
        const auto end = raw.find(u'\n', start);
        std::u16string line(raw.substr(start, end == raw.npos ? raw.npos : end - start));
        if (line.size() < size_t(cols)) line.resize(cols, u' ');
        result.push_back(std::move(line));
        if (end == raw.npos) break;
        start = end + 1;
    }
    return result;
}

namespace {
struct Logo final : Piece {
    int cols, rows, baseColors;
    std::vector<std::u16string> mono, art, ink;
    std::vector<char16_t> out;
    double every, lo, span;
    std::u16string_view solid;

    Logo(const LogoDefinition &definition, double shine)
        : cols(definition.meta.cols), rows(definition.meta.rows),
          baseColors(int(definition.meta.palette_count / 6)),
          mono(logo_lines(definition.mono, cols)), art(logo_lines(definition.art, cols)),
          ink(logo_lines(definition.ink, cols)), out(cols * rows),
          every(shine > 0 ? std::max(shine, PASS + 0.5) : 0),
          lo(std::numeric_limits<double>::infinity()), span(0), solid(definition.solid) {
        colors.resize(cols * rows);
        double hi = -std::numeric_limits<double>::infinity();
        for (const auto *pic : {&mono, &art}) {
            for (size_t y = 0; y < pic->size(); ++y) {
                for (int x = 0; x < cols; ++x) {
                    if ((*pic)[y][x] != u' ') {
                        lo = std::min(lo, x + LEAN * y);
                        hi = std::max(hi, x + LEAN * y);
                    }
                }
            }
        }
        span = hi - lo + 2 * HALF;
    }

    void frame(double t, bool paper, bool colored) override {
        const auto &pic = colored ? art : mono;
        const double since = t - START;
        const double at = every && since >= 0
            ? lo - HALF + (span * std::fmod(since, every)) / PASS
            : -std::numeric_limits<double>::infinity();
        for (int y = 0; y < rows; ++y) {
            for (int x = 0; x < cols; ++x) {
                char16_t ch = pic[y][x];
                if (ch != u' ') {
                    const double d = std::abs(x + LEAN * y - at);
                    double k = d < HALF ? 1 - d / HALF : 0;
                    k = k * k * (3 - 2 * k);
                    if (k > 0.55 && solid.find(ch) != solid.npos) ch = u'/';
                    if (colored) {
                        const char16_t digit = ink[y][x];
                        const int pigment = digit >= u'0' && digit <= u'9'
                            ? digit - u'0' : digit - u'a' + 10;
                        colors[y * cols + x] = uint8_t((paper ? 0 : 3 * baseColors)
                            + (k > 0.6 ? 2 : k > 0.25 ? 1 : 0) * baseColors + pigment);
                    }
                }
                out[y * cols + x] = ch;
            }
        }
        join(out, cols, rows);
    }
};

// Reproduce Math.imul and JavaScript's unsigned shifts for the scan noise.
uint32_t scan_hash(int x, int y, uint32_t tick) {
    uint32_t h = uint32_t(x) * 73856093u ^ uint32_t(y) * 19349663u ^ tick * 83492791u;
    h = (h ^ (h >> 13)) * 1274126177u;
    return h ^ (h >> 16);
}

struct ScanLogo final : Piece {
    int cols, rows, fps, baseColors, first;
    std::vector<std::u16string> mono, art, ink;
    std::vector<char16_t> out;
    double every, span;

    ScanLogo(const LogoDefinition &definition, double scan)
        : cols(definition.meta.cols), rows(definition.meta.rows), fps(definition.meta.fps),
          baseColors(int(definition.meta.palette_count / 6)), first(rows),
          mono(logo_lines(definition.mono, cols)), art(logo_lines(definition.art, cols)),
          ink(logo_lines(definition.ink, cols)), out(cols * rows),
          every(scan > 0 ? std::max(scan, PASS + 0.5) : 0), span(0) {
        colors.resize(cols * rows);
        int last = -1;
        for (const auto *pic : {&mono, &art}) {
            for (size_t y = 0; y < pic->size(); ++y) {
                if ((*pic)[y].find_first_not_of(u" \t\r") != std::u16string::npos) {
                    first = std::min(first, int(y));
                    last = std::max(last, int(y));
                }
            }
        }
        span = last - first + 1 + HEAD + TRAIL;
    }

    void frame(double t, bool paper, bool colored) override {
        const auto &pic = colored ? art : mono;
        const double since = t - START;
        const double at = every && since >= 0
            ? first + (span * std::fmod(since, every)) / PASS
            : -std::numeric_limits<double>::infinity();
        const auto tick = uint32_t(int64_t(std::floor((t * fps) / 2)));
        for (int y = 0; y < rows; ++y) {
            const double d = at - y;
            const int level = d >= 0 && d < HEAD ? 2 : d >= HEAD && d < HEAD + TRAIL ? 1 : 0;
            for (int x = 0; x < cols; ++x) {
                char16_t ch = pic[y][x];
                if (ch != u' ') {
                    if (level == 2) {
                        const uint32_t h = scan_hash(x, y, tick);
                        if (h % 4) ch = NOISE[(h >> 2) % NOISE.size()];
                    }
                    if (colored) {
                        const char16_t digit = ink[y][x];
                        const int pigment = digit >= u'0' && digit <= u'9'
                            ? digit - u'0' : digit - u'a' + 10;
                        colors[y * cols + x] = uint8_t((paper ? 0 : 3 * baseColors)
                            + level * baseColors + pigment);
                    }
                }
                out[y * cols + x] = ch;
            }
        }
        join(out, cols, rows);
    }
};
} // namespace

std::unique_ptr<Piece> make_logo(const LogoDefinition &definition, double shine) {
    return std::make_unique<Logo>(definition, shine);
}

std::unique_ptr<Piece> make_scan_logo(const LogoDefinition &definition, double scan) {
    return std::make_unique<ScanLogo>(definition, scan);
}
} // namespace ascii
