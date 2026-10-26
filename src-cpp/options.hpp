#pragma once
#include "core.hpp"
#include <cstdlib>
#include <map>
#include <stdexcept>
#include <variant>

namespace ascii {
inline std::u16string utf16(const std::string &s) {
    std::u16string out;
    out.reserve(s.size());
    for (size_t i = 0; i < s.size();) {
        const auto lead = static_cast<uint8_t>(s[i++]);
        uint32_t cp;
        unsigned remaining;
        uint32_t minimum;
        if (lead < 0x80) {
            out.push_back(static_cast<char16_t>(lead));
            continue;
        } else if (lead >= 0xc2 && lead <= 0xdf) {
            cp = lead & 0x1f; remaining = 1; minimum = 0x80;
        } else if (lead >= 0xe0 && lead <= 0xef) {
            cp = lead & 0x0f; remaining = 2; minimum = 0x800;
        } else if (lead >= 0xf0 && lead <= 0xf4) {
            cp = lead & 0x07; remaining = 3; minimum = 0x10000;
        } else {
            throw std::range_error("Invalid UTF-8");
        }
        if (s.size() - i < remaining) throw std::range_error("Invalid UTF-8");
        while (remaining--) {
            const auto byte = static_cast<uint8_t>(s[i++]);
            if ((byte & 0xc0) != 0x80) throw std::range_error("Invalid UTF-8");
            cp = (cp << 6) | (byte & 0x3f);
        }
        if (cp < minimum || cp > 0x10ffff || (cp >= 0xd800 && cp <= 0xdfff))
            throw std::range_error("Invalid UTF-8");
        if (cp < 0x10000) {
            out.push_back(static_cast<char16_t>(cp));
        } else {
            cp -= 0x10000;
            out.push_back(static_cast<char16_t>(0xd800 | (cp >> 10)));
            out.push_back(static_cast<char16_t>(0xdc00 | (cp & 0x3ff)));
        }
    }
    return out;
}
inline std::string utf8(std::u16string_view s) {
    std::string out;
    out.reserve(s.size());
    for (size_t i = 0; i < s.size(); ++i) {
        uint32_t cp = s[i];
        if (cp >= 0xd800 && cp <= 0xdbff) {
            if (i + 1 == s.size() || s[i + 1] < 0xdc00 || s[i + 1] > 0xdfff)
                throw std::range_error("Invalid UTF-16");
            cp = 0x10000 + ((cp - 0xd800) << 10) + (s[++i] - 0xdc00);
        } else if (cp >= 0xdc00 && cp <= 0xdfff) {
            throw std::range_error("Invalid UTF-16");
        }
        if (cp < 0x80) {
            out.push_back(static_cast<char>(cp));
        } else if (cp < 0x800) {
            out.push_back(static_cast<char>(0xc0 | (cp >> 6)));
            out.push_back(static_cast<char>(0x80 | (cp & 0x3f)));
        } else if (cp < 0x10000) {
            out.push_back(static_cast<char>(0xe0 | (cp >> 12)));
            out.push_back(static_cast<char>(0x80 | ((cp >> 6) & 0x3f)));
            out.push_back(static_cast<char>(0x80 | (cp & 0x3f)));
        } else {
            out.push_back(static_cast<char>(0xf0 | (cp >> 18)));
            out.push_back(static_cast<char>(0x80 | ((cp >> 12) & 0x3f)));
            out.push_back(static_cast<char>(0x80 | ((cp >> 6) & 0x3f)));
            out.push_back(static_cast<char>(0x80 | (cp & 0x3f)));
        }
    }
    return out;
}

struct Json {
    using Array = std::vector<Json>;
    using Object = std::map<std::string, Json>;
    std::variant<std::nullptr_t, bool, double, std::string, Array, Object> value = nullptr;
    Json() = default;
    template<class T> explicit Json(T v) : value(std::move(v)) {}
    const Json &operator[](const std::string &key) const {
        static const Json absent;
        if (const auto *o = std::get_if<Object>(&value)) {
            const auto it = o->find(key);
            if (it != o->end()) return it->second;
        }
        return absent;
    }
    double number(double fallback = 0) const {
        const auto *v = std::get_if<double>(&value); return v ? *v : fallback;
    }
    bool boolean(bool fallback = false) const {
        const auto *v = std::get_if<bool>(&value); return v ? *v : fallback;
    }
    std::string string(const std::string &fallback = "") const {
        const auto *v = std::get_if<std::string>(&value); return v ? *v : fallback;
    }
    const Array &array() const {
        static const Array empty;
        const auto *v = std::get_if<Array>(&value); return v ? *v : empty;
    }
    bool missing() const { return std::holds_alternative<std::nullptr_t>(value); }
    static Json parse(const std::string &text) {
        struct Parser {
            const std::string &s; size_t i = 0;
            void ws() { while (i < s.size() && (s[i] == ' ' || s[i] == '\n' || s[i] == '\r' || s[i] == '\t')) ++i; }
            [[noreturn]] void fail() { throw std::runtime_error("Invalid piece options JSON"); }
            void eat(char c) { ws(); if (i >= s.size() || s[i++] != c) fail(); }
            std::string str() {
                eat('"'); std::string out;
                while (i < s.size()) {
                    char c = s[i++];
                    if (c == '"') return out;
                    if (c != '\\') { out += c; continue; }
                    if (i == s.size()) fail();
                    c = s[i++];
                    switch (c) {
                        case '"': case '\\': case '/': out += c; break;
                        case 'b': out += '\b'; break; case 'f': out += '\f'; break;
                        case 'n': out += '\n'; break; case 'r': out += '\r'; break; case 't': out += '\t'; break;
                        case 'u': {
                            if (i + 4 > s.size()) fail();
                            std::u16string units(1, char16_t(std::stoul(s.substr(i, 4), nullptr, 16))); i += 4;
                            if (units[0] >= 0xd800 && units[0] <= 0xdbff && s.compare(i, 2, "\\u") == 0) {
                                i += 2; if (i + 4 > s.size()) fail();
                                units += char16_t(std::stoul(s.substr(i, 4), nullptr, 16)); i += 4;
                            }
                            out += utf8(units); break;
                        }
                        default: fail();
                    }
                }
                fail();
            }
            Json read() {
                ws(); if (i >= s.size()) fail();
                if (s[i] == '"') return Json(str());
                if (s[i] == '{') {
                    ++i; Object o; ws();
                    if (i < s.size() && s[i] == '}') { ++i; return Json(o); }
                    while (true) {
                        const auto key = str(); eat(':'); o[key] = read(); ws();
                        if (i < s.size() && s[i] == '}') { ++i; return Json(o); }
                        eat(',');
                    }
                }
                if (s[i] == '[') {
                    ++i; Array a; ws();
                    if (i < s.size() && s[i] == ']') { ++i; return Json(a); }
                    while (true) {
                        a.push_back(read()); ws();
                        if (i < s.size() && s[i] == ']') { ++i; return Json(a); }
                        eat(',');
                    }
                }
                if (s.compare(i, 4, "true") == 0) { i += 4; return Json(true); }
                if (s.compare(i, 5, "false") == 0) { i += 5; return Json(false); }
                if (s.compare(i, 4, "null") == 0) { i += 4; return Json(); }
                char *end = nullptr; const double n = std::strtod(s.c_str() + i, &end);
                if (end == s.c_str() + i) fail();
                i = size_t(end - s.c_str()); return Json(n);
            }
        } parser{text};
        auto out = parser.read(); parser.ws(); if (parser.i != text.size()) parser.fail(); return out;
    }
};

struct Options {
    Json data;
    explicit Options(const AsciiPieceOptions &o) : data(Json::parse(o.json ? o.json : "{}")) {}
    double number(const std::string &key, double fallback) const { return data[key].number(fallback); }
    bool boolean(const std::string &key, bool fallback) const { return data[key].boolean(fallback); }
    std::u16string text(const std::string &key, std::u16string_view fallback) const {
        return data[key].missing() ? std::u16string(fallback) : utf16(data[key].string());
    }
    std::vector<std::u16string> strings(const std::string &key, std::vector<std::u16string> fallback) const {
        if (data[key].missing()) return fallback;
        std::vector<std::u16string> out;
        for (const auto &v : data[key].array()) out.push_back(utf16(v.string()));
        return out;
    }
};
} // namespace ascii
