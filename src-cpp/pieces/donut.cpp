// Port of ascii.rest (MIT). Original algorithms remain in src/pieces/.
#include "../core.hpp"

namespace ascii {
namespace {
struct Donut : Piece {
    std::vector<char16_t> out = std::vector<char16_t>(40 * 22);
    Floats depth = Floats(40 * 22);
    const std::u16string ramp = u".,-~:;=!*#$@";
    const double K1 = 19 / (3 / std::sqrt(36 - 9));
    const double m = std::hypot(-0.4, 1., -1.);
    void frame(double t, bool paper, bool) override {
        const double A = 1 + t * 0.8, B = 1 + t * 0.35;
        std::fill(out.begin(), out.end(), u' ');
        std::fill(depth.begin(), depth.end(), 0);
        const double cA = std::cos(A), sA = std::sin(A), cB = std::cos(B), sB = std::sin(B);
        for (double th = 0; th < 6.283; th += 0.07) {
            const double ct = std::cos(th), st = std::sin(th);
            for (double ph = 0; ph < 6.283; ph += 0.03) {
                const double cp = std::cos(ph), sp = std::sin(ph), h = 2 + ct;
                const double x = h * (cB * cp + sA * sB * sp) - st * cA * sB;
                const double y = h * (sB * cp - sA * cB * sp) + st * cA * cB;
                const double ooz = 1 / (6 + cA * h * sp + st * sA);
                const int col = int(std::floor(20 + K1 * ooz * x));
                const int row = int(std::floor(11 - K1 * 0.5 * ooz * y));
                if (col < 0 || col >= 40 || row < 0 || row >= 22) continue;
                const int k = col + row * 40;
                if (ooz <= get(depth, k)) continue;
                depth[k] = float(ooz);
                const double nx = ct * (cB * cp + sA * sB * sp) - st * cA * sB;
                const double ny = ct * (sB * cp - sA * cB * sp) + st * cA * cB;
                const double nz = cA * ct * sp + st * sA;
                const int i = jsround(std::max(0., nx * (-0.4 / m) + ny * (1 / m) + nz * (-1 / m)) * (ramp.size() - 1));
                out[k] = ramp[paper ? ramp.size() - 1 - i : i];
            }
        }
        join(out, 40, 22);
    }
};
} // namespace

const AsciiPieceMeta &donut_meta() {
    static const AsciiPieceMeta meta = {
        "donut", "donut", "shapes",
        "a lit torus turning on two axes, after donut.c",
        40, 22, 30, 2, 0, nullptr, nullptr, 0, {0}
    };
    return meta;
}

std::unique_ptr<Piece> make_donut(const AsciiPieceOptions &) { return std::make_unique<Donut>(); }
} // namespace ascii
