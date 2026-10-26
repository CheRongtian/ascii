/*
 * databuddy: the Databuddy logo, a bunny drawn in a few bold strokes, with a
 * glint crossing it every few seconds.
 *
 * Drawn from Databuddy's own mark, from databuddy.cc: each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it is black, and a light grey on a dark page,
 * where black would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/databuddy.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x000000, 0x595959, 0xb3b3b3, 0xe8ebef, 0xf0f2f5, 0xf8f9fa,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                _pq8888q_
              _8888P^Y888qqq_
            _p888"     "888888q,
           _888P  _pp      '"888p
           d88P  q8P'         888p
          q88P  q8P    q888q, '888,
          888' |88   .p88888p  d88p
         .888  q8|   q8888888  q88P
         '888  d8   .8888888P  d88|
        _p888, '8   |8888888"  888'
      _p8888P'      |888888P  q88P
    _8888"          |888888' _8888888qqq__
   q888"   _pppqq_   88888P _888PPYYY888888q,
  \888"  _p88888888, |88888pP"         '"8888p
  d88|   d8888  .888q88888"  ___pqqq__    "888q,
  888'  .88888qp8888888888qpp8888888888q,   O88p
  888,   8888888888888888888888888888888p    888
  )88b,  '8888888888888888888888888888888    888qqq_,
   Y88q,   '"88888P""88888888888888888888   .88888888,
    "888q_        _p88888888888888888888'   p8P"  "888
      "8888qqqqpp888888888888888888888"   .p8"     888
        "Y888888888888888888888888P"'    _88P     p88(
            "888888888888888PP""'     ._p8888___p888P
            .888P""'''          .__ppq888888888888P"
             8888qqqqqqqqppppq888888888P"''""""""
              "88888888888888888PP"""

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                _pq8888q_
              _8888P^Y888qqq_
            _p888"     "888888q,
           _888P  _pp      '"888p
           d88P  q8P'         888p
          q88P  q8P    q888q, '888,
          888' |88   .p88888p  d88p
         .888  q8|   q8888888  q88P
         '888  d8   .8888888P  d88|
        _p888, '8   |8888888"  888'
      _p8888P'      |888888P  q88P
    _8888"          |888888' _8888888qqq__
   q888"   _pppqq_   88888P _888PPYYY888888q,
  \888"  _p88888888, |88888pP"         '"8888p
  d88|   d8888  .888q88888"  ___pqqq__    "888q,
  888'  .88888qp8888888888qpp8888888888q,   O88p
  888,   8888888888888888888888888888888p    888
  )88b,  '8888888888888888888888888888888    888qqq_,
   Y88q,   '"88888P""88888888888888888888   .88888888,
    "888q_        _p88888888888888888888'   p8P"  "888
      "8888qqqqpp888888888888888888888"   .p8"     888
        "Y888888888888888888888888P"'    _88P     p88(
            "888888888888888PP""'     ._p8888___p888P
            .888P""'''          .__ppq888888888888P"
             8888qqqqqqqqppppq888888888P"''""""""
              "88888888888888888PP"""

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                000000000
              000000000000000
            000000     000000000
           00000  000      000000
           0000  0000         0000
          0000  000    000000 00000
          0000 000   00000000  0000
         0000  000   00000000  0000
         0000  00   000000000  0000
        000000 00   000000000  0000
      00000000      00000000  0000
    000000          00000000 0000000000000
   00000   0000000   000000 00000000000000000
  00000  00000000000 000000000         0000000
  0000   00000  00000000000  000000000    000000
  0000  000000000000000000000000000000000   0000
  0000   00000000000000000000000000000000    000
  00000  00000000000000000000000000000000    00000000
   00000   000000000000000000000000000000   0000000000
    000000        00000000000000000000000   0000  0000
      000000000000000000000000000000000   0000     000
        00000000000000000000000000000    0000     0000
            000000000000000000000     000000000000000
            0000000000          00000000000000000000
             000000000000000000000000000000000000
              00000000000000000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "databuddy", "databuddy", "companies",
        "the databuddy bunny, glinting now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &databuddy_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_databuddy(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
