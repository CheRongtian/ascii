// Port of ascii.rest (MIT). Original algorithms remain in src/pieces/.
#include "../core.hpp"

namespace ascii {
namespace {
struct Reaction : Piece {
    static constexpr int W = 60, H = 48, WARM = 1200, RATE = 1000, CYCLE = 8000;
    Floats u = Floats(W * H, 1), v = Floats(W * H), u2 = Floats(W * H), v2 = Floats(W * H);
    Floats feed = Floats(W), kill = Floats(W), fade = Floats(60 * 24), bite = Floats(W * H);
    uint32_t randomState = 5;
    int n = 0, cycle = -1;
    double rand() {
        randomState += 0x6d2b79f5u;
        uint32_t t = (randomState ^ (randomState >> 15)) * (1u | randomState);
        t = (t + (t ^ (t >> 7)) * (61u | t)) ^ t;
        return double(t ^ (t >> 14)) / 4294967296.;
    }
    void seed(int cx, int cy) {
        for (int dy = -2; dy <= 2; ++dy) for (int dx = -2; dx <= 2; ++dx) {
            const int i = ((cy + dy + H) % H) * W + ((cx + dx + W) % W);
            u[i] = 0.5f; v[i] = 0.25f;
        }
    }
    Reaction() {
        for (int x = 0; x < W; ++x) {
            const double s = smooth(0.1, 0.9, (1 + std::sin((2 * PI * (x + 0.5)) / W)) / 2);
            feed[x] = float(0.03 + (0.0367 - 0.03) * s);
            kill[x] = float(0.057 + (0.0649 - 0.057) * s);
        }
        for (int r = 0; r < 24; ++r) for (int c = 0; c < 60; ++c) {
            const double ax = std::abs((c + 0.5) / 60 - 0.5) * 2, ay = std::abs((r + 0.5) / 24 - 0.5) * 2;
            fade[r * 60 + c] = float(1 - 0.6 * smooth(0.55, 1, std::cbrt(std::pow(ax, 3) + std::pow(ay, 3))));
        }
        for (int i = 0; i < 48; ++i) {
            // JS evaluates function arguments left to right.
            const int cx = int(std::floor(rand() * W)), cy = int(std::floor(rand() * H));
            seed(cx, cy);
        }
        while (n < WARM) step();
    }
    void reshape() {
        std::array<std::array<double, 3>, 3> waves;
        for (auto &wave : waves) {
            int kx = 0, ky = 0;
            while (!kx && !ky) { kx = int(std::floor(rand() * 5)) - 2; ky = int(std::floor(rand() * 5)) - 2; }
            wave = {double(kx), double(ky), rand() * 6.283};
        }
        for (int y = 0; y < H; ++y) for (int x = 0; x < W; ++x) {
            double s = 0;
            for (const auto &w : waves) s += std::cos(2 * PI * ((w[0] * x) / W + (w[1] * y) / H) + w[2]);
            bite[y * W + x] = float(1 + s / 6);
        }
    }
    void step() {
        check_cancel();
        const int k = int(std::floor(double(n - WARM) / CYCLE));
        if (k != cycle) { cycle = k; reshape(); }
        const double p = double(n - WARM) / CYCLE - k;
        const double b = 0.012 * smooth(0.1, 0.25, p) * (1 - smooth(0.35, 0.48, p));
        ++n;
        for (int y = 0; y < H; ++y) {
            const int ym = ((y + H - 1) % H) * W, y0 = y * W, yp = ((y + 1) % H) * W;
            for (int x = 0; x < W; ++x) {
                const int xm = (x + W - 1) % W, xp = (x + 1) % W, i = y0 + x;
                const double lu = 0.2 * (get(u, ym + x) + get(u, yp + x) + get(u, y0 + xm) + get(u, y0 + xp)) + 0.05 * (get(u, ym + xm) + get(u, ym + xp) + get(u, yp + xm) + get(u, yp + xp)) - get(u, i);
                const double lv = 0.2 * (get(v, ym + x) + get(v, yp + x) + get(v, y0 + xm) + get(v, y0 + xp)) + 0.05 * (get(v, ym + xm) + get(v, ym + xp) + get(v, yp + xm) + get(v, yp + xp)) - get(v, i);
                const double uvv = get(u, i) * get(v, i) * get(v, i);
                u2[i] = float(get(u, i) + 0.45 * lu - uvv + get(feed, x) * (1 - get(u, i)));
                v2[i] = float(get(v, i) + 0.225 * lv + uvv - (get(feed, x) + get(kill, x) + b * get(bite, i)) * get(v, i));
            }
        }
        u.swap(u2); v.swap(v2);
        if (p < 0.48 && p + 1. / CYCLE >= 0.48 && std::accumulate(v.begin(), v.end(), 0.) < 8) {
            for (int i = 0; i < 4; ++i) { const int cx = int(std::floor(rand() * W)), cy = int(std::floor(rand() * H)); seed(cx, cy); }
        }
    }
    void frame(double t, bool, bool) override {
        const int want = WARM + int(std::floor(t * RATE));
        if (want - n > RATE / 5) n = want - int(std::ceil(RATE / 5.));
        while (n < want) step();
        const std::u16string ramp = u"-=*#%@";
        std::vector<char16_t> out(60 * 24);
        for (int r = 0; r < 24; ++r) for (int c = 0; c < 60; ++c) {
            const double val = ((get(v, 2 * r * W + c) + get(v, (2 * r + 1) * W + c)) / 2) * get(fade, r * 60 + c);
            const double q = std::sqrt(std::min(1., (val - 0.12) / (0.28 - 0.12)));
            out[r * 60 + c] = val < 0.12 ? u' ' : ramp[std::min(5, int(std::floor(q * ramp.size())))];
        }
        join(out, 60, 24);
    }
};
} // namespace

const AsciiPieceMeta &reaction_diffusion_meta() {
    static const AsciiPieceMeta meta = {
        "reaction-diffusion", "reaction diffusion", "generative",
        "gray-scott spots and stripes dying back and growing out",
        60, 24, 20, 2, 0, nullptr, nullptr, 0, {0}
    };
    return meta;
}

std::unique_ptr<Piece> make_reaction_diffusion(const AsciiPieceOptions &) { return std::make_unique<Reaction>(); }
} // namespace ascii
