/*
 * greptile: the Greptile logo, a G folded into an open cube, with a glint
 * crossing it every few seconds.
 *
 * Drawn from Greptile's own mark, from greptile.com: each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colour, and a deeper
 * shade of it on a light page, where it would fade into it; in a <pre> it is
 * one ink, from the same drawing. The logo is a trademark of its owner, shown
 * here to name the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/greptile.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x11a96f, 0x64c7a1, 0xb8e5d4, 0x28e99f, 0x73f1c1, 0xbff8e2,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                       _pq_
                    ._88888q_
                  _p888888888q_
                _p888888888888P'
             ._8888888888888P' _88_,
           _p8888888888888" _p888888q,
         _p888888888888P" _p8888888888q,
      ._8888888888888P"   'O888888888888q_
    _p8888888888888P'       'Y888888888888q_
  \p8888888888888"            'Y888888888888q_
   "8888888888888q,           .p8888888888888P'
  8q,"8888888888888q,       _p8888888888888"'_p
  888q,'Y888888888888q_   _p8888888888888" _p88
  88888q,'Y888888888888qp8888888888888P" _p8888
  8888888q_'"88888888888888888888888"'_p8888888
  888888888q_ "888888888888888888P" _p888888888
  "8888888888q_ "88888888888888P" _p8888888888P
    'Y8888888888_ "8888888888"'.p88888888888"
      'Y8888888888q,"88888P" _p8888888888P"
         "8888888888q,'YP" _p8888888888P"
           "8888888888q, _88888888888P'
             "888888888| 8888888888"
               "8888888| 8888888P"
                 "88888| 88888P'
                   'Y88| 888"
                     'Y| P"

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                       _pq_
                    ._88888q_
                  _p888888888q_
                _p888888888888P'
             ._8888888888888P' _88_,
           _p8888888888888" _p888888q,
         _p888888888888P" _p8888888888q,
      ._8888888888888P"   'O888888888888q_
    _p8888888888888P'       'Y888888888888q_
  \p8888888888888"            'Y888888888888q_
   "8888888888888q,           .p8888888888888P'
  8q,"8888888888888q,       _p8888888888888"'_p
  888q,'Y888888888888q_   _p8888888888888" _p88
  88888q,'Y888888888888qp8888888888888P" _p8888
  8888888q_'"88888888888888888888888"'_p8888888
  888888888q_ "888888888888888888P" _p888888888
  "8888888888q_ "88888888888888P" _p8888888888P
    'Y8888888888_ "8888888888"'.p88888888888"
      'Y8888888888q,"88888P" _p8888888888P"
         "8888888888q,'YP" _p8888888888P"
           "8888888888q, _88888888888P'
             "888888888| 8888888888"
               "8888888| 8888888P"
                 "88888| 88888P'
                   'Y88| 888"
                     'Y| P"

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                       0000
                    000000000
                  0000000000000
                0000000000000000
             00000000000000000 00000
           0000000000000000 0000000000
         0000000000000000 00000000000000
      00000000000000000   0000000000000000
    00000000000000000       0000000000000000
  0000000000000000            0000000000000000
   0000000000000000           00000000000000000
  0000000000000000000       0000000000000000000
  000000000000000000000   0000000000000000 0000
  00000000000000000000000000000000000000 000000
  000000000000000000000000000000000000000000000
  00000000000 000000000000000000000 00000000000
  0000000000000 00000000000000000 0000000000000
    0000000000000 000000000000000000000000000
      0000000000000000000000 00000000000000
         00000000000000000 00000000000000
           0000000000000 00000000000000
             00000000000 00000000000
               000000000 000000000
                 0000000 0000000
                   00000 0000
                     000 00

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "greptile", "greptile", "companies",
        "the g folded into a cube, in green, glinting now and then",
        49, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &greptile_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_greptile(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
