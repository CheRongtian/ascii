#pragma once
#include "options.hpp"
#include <chrono>
#include <ctime>
#include <functional>
#include <iomanip>
#include <limits>
#include <sstream>

namespace ascii {
inline double mod(double x, double n) { return std::fmod(std::fmod(x, n) + n, n); }
inline std::u16string fixed(double x, int digits) {
    std::ostringstream out; out << std::fixed << std::setprecision(digits) << x; return utf16(out.str());
}
inline std::u16string integer(int64_t x) { return utf16(std::to_string(x)); }
inline std::u16string repeat(std::u16string_view unit, int count) {
    std::u16string s; for (int i = 0; i < count; ++i) s += unit; return s;
}
inline std::u16string pad(std::u16string s, int width, char16_t ch = u' ') {
    if (int(s.size()) < width) s.resize(width, ch); return s;
}
inline std::u16string leftpad(std::u16string s, int width, char16_t ch = u' ') {
    if (int(s.size()) < width) s.insert(s.begin(), width - s.size(), ch); return s;
}
inline std::u16string clip(std::u16string s, int width) { s.resize(width, u' '); return s; }
inline std::vector<std::u16string> split(std::u16string_view text, char16_t separator = u'\n') {
    std::vector<std::u16string> out; size_t a = 0;
    while (true) {
        const auto b = text.find(separator, a); out.emplace_back(text.substr(a, b == text.npos ? text.npos : b - a));
        if (b == text.npos) break; a = b + 1;
    }
    return out;
}
struct Random {
    uint32_t state;
    explicit Random(uint32_t seed) : state(seed) {}
    double operator()() {
        state += 0x6d2b79f5u;
        uint32_t t = (state ^ (state >> 15)) * (1u | state);
        t = (t + (t ^ (t >> 7)) * (61u | t)) ^ t;
        return double(t ^ (t >> 14)) / 4294967296.;
    }
};
struct Grid {
    int w, h;
    std::vector<char16_t> chars;
    std::vector<uint8_t> colors;
    Grid(int cols, int rows, char16_t fill = u' ') : w(cols), h(rows), chars(w*h, fill), colors(w*h) {}
    void clear(char16_t ch = u' ') { std::fill(chars.begin(), chars.end(), ch); std::fill(colors.begin(), colors.end(), 0); }
    void put(int x, int y, char16_t ch, uint8_t color = 0) {
        if (x >= 0 && x < w && y >= 0 && y < h) { chars[y*w+x] = ch; colors[y*w+x] = color; }
    }
    void write(int x, int y, std::u16string_view s, uint8_t color = 0) {
        for (size_t i = 0; i < s.size(); ++i) put(x + int(i), y, s[i], color);
    }
    void center(int y, std::u16string_view s, uint8_t color = 0) { write(int(std::floor((w-double(s.size()))/2)), y, s, color); }
    void line(int x0, int y0, int x1, int y1, char16_t ch, uint8_t color = 0) {
        const int dx=std::abs(x1-x0),sx=x0<x1?1:-1,dy=-std::abs(y1-y0),sy=y0<y1?1:-1;
        int err=dx+dy;
        while (true) { put(x0,y0,ch,color); if(x0==x1&&y0==y1)break; const int e=2*err;if(e>=dy){err+=dy;x0+=sx;}if(e<=dx){err+=dx;y0+=sy;} }
    }
    void box(int x, int y, int width, int height, std::u16string_view edge = u"┌┐└┘─│") {
        for(int i=1;i<width-1;++i){put(x+i,y,edge[4]);put(x+i,y+height-1,edge[4]);}
        for(int j=1;j<height-1;++j){put(x,y+j,edge[5]);put(x+width-1,y+j,edge[5]);}
        put(x,y,edge[0]);put(x+width-1,y,edge[1]);put(x,y+height-1,edge[2]);put(x+width-1,y+height-1,edge[3]);
    }
    void publish(Piece &p, bool colored = false) const { p.join(chars,w,h); if(colored)p.colors=colors; }
};
struct DrawingPiece final : Piece {
    std::function<void(double, bool, bool, Piece &)> draw;
    explicit DrawingPiece(std::function<void(double, bool, bool, Piece &)> f) : draw(std::move(f)) {}
    void frame(double t, bool paper, bool colored) override { draw(t,paper,colored,*this); }
};
template<class F> std::unique_ptr<Piece> drawing_piece(F draw) { return std::make_unique<DrawingPiece>(std::move(draw)); }
struct WallClock {
    double offset = std::numeric_limits<double>::quiet_NaN();
    double seconds(double t) {
        const double wall=std::chrono::duration<double>(std::chrono::system_clock::now().time_since_epoch()).count();
        if(std::isnan(offset)||wall-(offset+t)>0.25||offset+t-wall>60)offset=wall-t;
        return offset+t;
    }
    static std::tm local(double secs) { const auto stamp=std::time_t(std::floor(secs)); std::tm out{}; localtime_r(&stamp,&out);return out; }
};
} // namespace ascii
