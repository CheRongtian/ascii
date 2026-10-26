/*
 * polar: the Polar logo, half a star, a bar and an arc, cut by a circle, with
 * a glint crossing it every few seconds.
 *
 * Drawn from Polar's own logomark, from polar.sh/brand: each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it is black, and a light grey on a dark page,
 * where black would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/polar.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x000000, 0x595959, 0xb3b3b3, 0xe8ebef, 0xf0f2f5, 0xf8f9fa,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                         q8888p
                         d8888b
                         d8888b
         _p8q,           d8888b             qq,
        q88888q,         d8888b           _8888p
        "8888888q,       d8888b          q888888P
          "8888888q,     d8888b         p888888"
            "8888888q,   d8888b        q88888P'
              "8888888q, d8888b       q88888P
                "8888888qd8888b      .888888'
                  "88888888888b      q88888|
  ___________________888888888b      888888
  8888888888888888888888888888b      888888
  8888888888888888888888888888b      888888
  """""""""""""""""""888888888b      888888
                  _p8888888888b      d88888|
                _p888888P88888b      '888888,
              _p888888P' d8888b       )88888q,
            _p888888P'   d8888b        O88888q,
          _p888888P'     d8888b         O888888_
        _p888888P'       d8888b          "888888b
        Y88888P'         d8888b           "8888"
         'Y8P'           d8888b             ""
                         d8888b
                         d8888b
                         d8888P

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                         q8888p
                         d8888b
                         d8888b
         _p8q,           d8888b             qq,
        q88888q,         d8888b           _8888p
        "8888888q,       d8888b          q888888P
          "8888888q,     d8888b         p888888"
            "8888888q,   d8888b        q88888P'
              "8888888q, d8888b       q88888P
                "8888888qd8888b      .888888'
                  "88888888888b      q88888|
  ___________________888888888b      888888
  8888888888888888888888888888b      888888
  8888888888888888888888888888b      888888
  """""""""""""""""""888888888b      888888
                  _p8888888888b      d88888|
                _p888888P88888b      '888888,
              _p888888P' d8888b       )88888q,
            _p888888P'   d8888b        O88888q,
          _p888888P'     d8888b         O888888_
        _p888888P'       d8888b          "888888b
        Y88888P'         d8888b           "8888"
         'Y8P'           d8888b             ""
                         d8888b
                         d8888b
                         d8888P

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                         000000
                         000000
                         000000
         00000           000000             000
        00000000         000000           000000
        0000000000       000000          00000000
          0000000000     000000         00000000
            0000000000   000000        00000000
              0000000000 000000       0000000
                000000000000000      00000000
                  0000000000000      0000000
  00000000000000000000000000000      000000
  00000000000000000000000000000      000000
  00000000000000000000000000000      000000
  00000000000000000000000000000      000000
                  0000000000000      0000000
                000000000000000      00000000
              0000000000 000000       00000000
            0000000000   000000        00000000
          0000000000     000000         00000000
        0000000000       000000          00000000
        00000000         000000           000000
         00000           000000             00
                         000000
                         000000
                         000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "polar", "polar", "companies",
        "the half star, bar and arc, glinting now and then",
        51, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &polar_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_polar(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
