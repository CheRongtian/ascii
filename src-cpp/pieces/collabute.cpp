/*
 * collabute: the Collabute logo, a disc shading round from white to black,
 * with a white tab at its corner, in a black ring, with a glint crossing it
 * every few seconds.
 *
 * Drawn from Collabute's own logo, collabute.ai/logo.png, in tones: on a light
 * page the logo's dark is the ink, so its white is the page, and on a dark
 * page its light is, so its black is. Where an edge crosses a cell it holds
 * the character whose shape best matches it, and elsewhere the character from
 * a ramp as dense as the tone; on a canvas each is in a grey as deep, 6 of
 * them, and in a <pre> it is the drawing for its page, in one ink. The logo is
 * a trademark of its owner, shown here to name the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/collabute.ts.
#include "../logo.hpp"
#include <limits>

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0xd5d5d5, 0xaaaaaa, 0x808080, 0x555555, 0x2a2a2a, 0x000000,
    0xe4e4e4, 0xc8c8c8, 0xacacac, 0x919191, 0x757575, 0x595959,
    0xf2f2f2, 0xe6e6e6, 0xd9d9d9, 0xcccccc, 0xbfbfbf, 0xb3b3b3,
    0x2b2b2b, 0x555555, 0x808080, 0xaaaaaa, 0xd5d5d5, 0xffffff,
    0x757575, 0x919191, 0xacacac, 0xc8c8c8, 0xe4e4e4, 0xffffff,
    0xbfbfbf, 0xcccccc, 0xd9d9d9, 0xe6e6e6, 0xf2f2f2, 0xffffff,
};

constexpr char16_t LIGHT[] = uR"ASCII_LOGO(

                  __qppp80088008qqqp__
              __p8888888888888888888888q_,
           __p0888888888888888888888888880q_,
         _q8888888888888888888888888888888888p,
       .q08888888888888888PPPPPPPPPPPPPPPPPPP80p,
      _8888888888808P"'                      d888_
     q08888888888"'..                        d8880p
    q8888888888"......                       d88888p
   |888888888P:-.......                      d888888|
  .888888888P:-----.....                     q8888888,
  q88888888P:::::----....                   _08888888p
  888888880+:::::::::---..                 _8888888888
  088888888::::::::::::::-.             __p00888888880
  088888888++++++++++++++++qqqqqqqqqqpq888888888888880
  888888888++++++++++===***oo0000000000000888888888888
  |88888888p+++======****oooo000000000000000088888888P
  '888888888======******oooooo00000000000000888888888'
   "888888888*=********ooooooo0000000000000888888888"
    Y888888888p*******ooooooooo00000000000888888888P
     Y0888888888p***ooooooooooo0000000000888888880P
      "88888888888poooooooooooo000000008888888888"
       'Y0888888888808ooooooooo0000088888888880P'
         'Y8888888888888888888888888888888888P'
           '"808888888888888888888888888808"'
              '"88888888888888888888888P"'
                  '""Y88880000888PP""'

)ASCII_LOGO";

constexpr char16_t LIGHT_INK[] = uR"ASCII_LOGO(

                  55555555555555555555
              5555555555555555555555555555
           5555555555555555555555555555555555
         55555555555555555555555555555555555555
       555555555555555555544444444444444444445555
      55555555555555432                      45555
     5555555555554211                        455555
    555555555553211111                       4555555
   55555555554222211111                      45555555
  5555555555422222221111                     555555555
  55555555552222222222111                   2555555555
  555555555333322222222211                 35555555555
  5555555553333333333322221             23555555555555
  5555555553333333333333333344444444445555555555555555
  5555555553333333333334444555555555555555555555555555
  5555555554333333344444444555555555555555555555555555
  5555555555434444444444444555555555555555555555555555
   55555555554444444444444555555555555555555555555555
    555555555544444444444455555555555555555555555555
     5555555555544444444455555555555555555555555555
      55555555555554444445555555555555555555555555
       555555555555555555555555555555555555555555
         55555555555555555555555555555555555555
           5555555555555555555555555555555555
              5555555555555555555555555555
                  55555555555555555555

)ASCII_LOGO";

constexpr char16_t DARK[] = uR"ASCII_LOGO(





                       ._____________________,
                   _qq80088888888888888888888|
                _q800000008888888888888888888|
              _q00000000008888888888888888888|
             )o000000000008888888888888888888|
            qo0000000000000888888888888888888|
           |ooooo000000000088888888888888888P
           oooooooooo0000008888888888888888P'
          |oooooooooooooo0008888888888888P"
          |ooooooooooooooooY"""""""""""'
          'oooooooo******=+::...
           |***********==++::-......
           '********===+++:::--.........
            '*****====++++::::--..........
             '|=====+++++::::::--.........
               "|==++++++::::::---......
                 '"+++++:::::::----...
                    .'-::::::::-..





)ASCII_LOGO";

constexpr char16_t DARK_INK[] = uR"ASCII_LOGO(





                       12333333333333333333332
                   244555555555555555555555553
                245555555555555555555555555553
              24555555555555555555555555555553
             355555555555555555555555555555553
            3555555555555555555555555555555553
           3555555555555555555555555555555555
           4555555555555555555555555555555542
          255555555555555555555555555555542
          244444444444444444333333333322
          2444444444444444332211
           4444444444444333322211111
           24444444444333333222221111111
            244444443333333322222211111111
             13444433333333322222222111111
               2333333333333222222222111
                 123333333332222222211
                    12223332222221





)ASCII_LOGO";

const AsciiPieceMeta META = {
        "collabute", "collabute", "companies",
        "the disc shading white to black, in a black ring, glinting now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    };

constexpr double START = 0.5, PASS = 2, HALF = 5, LEAN = 0.9;
constexpr std::u16string_view SOLID = u"8dbqpPYOo0*+=";
struct Reach { double lo, span; };

Reach reach(const std::vector<std::u16string> &pic, int cols) {
    double lo = std::numeric_limits<double>::infinity();
    double hi = -std::numeric_limits<double>::infinity();
    for (size_t y = 0; y < pic.size(); ++y) {
        for (int x = 0; x < cols; ++x) {
            if (pic[y][x] != u' ') {
                lo = std::min(lo, x + LEAN * y);
                hi = std::max(hi, x + LEAN * y);
            }
        }
    }
    return {lo, hi - lo + 2 * HALF};
}

struct Collabute final : Piece {
    int cols, rows, baseColors;
    std::vector<std::u16string> light, lightInk, dark, darkInk;
    Reach onLight, onDark;
    std::vector<char16_t> out;
    double every;

    explicit Collabute(double shine)
        : cols(META.cols), rows(META.rows), baseColors(int(META.palette_count / 6)),
          light(logo_lines(LIGHT, cols)), lightInk(logo_lines(LIGHT_INK, cols)),
          dark(logo_lines(DARK, cols)), darkInk(logo_lines(DARK_INK, cols)),
          onLight(reach(light, cols)), onDark(reach(dark, cols)), out(cols * rows),
          every(shine > 0 ? std::max(shine, PASS + 0.5) : 0) {
        colors.resize(cols * rows);
    }

    void frame(double t, bool paper, bool colored) override {
        const auto &pic = paper ? light : dark;
        const auto &ink = paper ? lightInk : darkInk;
        const auto &extent = paper ? onLight : onDark;
        const double since = t - START;
        const double at = every && since >= 0
            ? extent.lo - HALF + (extent.span * std::fmod(since, every)) / PASS
            : -std::numeric_limits<double>::infinity();
        for (int y = 0; y < rows; ++y) {
            for (int x = 0; x < cols; ++x) {
                char16_t ch = pic[y][x];
                if (ch != u' ') {
                    const double d = std::abs(x + LEAN * y - at);
                    double k = d < HALF ? 1 - d / HALF : 0;
                    k = k * k * (3 - 2 * k);
                    if (k > 0.55 && SOLID.find(ch) != SOLID.npos) ch = u'/';
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
} // namespace

const AsciiPieceMeta &collabute_meta() { return META; }
std::unique_ptr<Piece> make_collabute(const AsciiPieceOptions &options) {
    return std::make_unique<Collabute>(options.shine);
}
} // namespace ascii
