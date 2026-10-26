/*
 * autumn: the Autumn logo, a leaf with a slash for its vein, with a glint
 * crossing it every few seconds.
 *
 * Drawn from the leaf in Autumn's own logo, from useautumn.com: each cell
 * holds the character whose shape best matches the logo's edge through it, and
 * 8 where the logo is solid. On a canvas it is black, and a light grey on a
 * dark page, where black would sink into it; in a <pre> it is one ink, from
 * the same drawing. The logo is a trademark of its owner, shown here to name
 * the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/autumn.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x000000, 0x595959, 0xb3b3b3, 0xe8ebef, 0xf0f2f5, 0xf8f9fa,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(





                      ._ppp
                  __p88888b
             ._pp888888888b
         __p88888888888888b
       q888888888888888888b
      \8888888888888888888b
     _88888888888\88888888b
    _8888888888P\888888888b
   .8888888888"_8888888888b
   p88888888P'q88888888888b
  d88888888" q888888888888b
   "88888P  p8888888888888"
    '888" .p8888888888P"'
      "  _p88888888P"
        _8888888P"
       _8888P"'
      )88P"
     )P"





)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(





                      ._ppp
                  __p88888b
             ._pp888888888b
         __p88888888888888b
       q888888888888888888b
      \8888888888888888888b
     _88888888888\88888888b
    _8888888888P\888888888b
   .8888888888"_8888888888b
   p88888888P'q88888888888b
  d88888888" q888888888888b
   "88888P  p8888888888888"
    '888" .p8888888888P"'
      "  _p88888888P"
        _8888888P"
       _8888P"'
      )88P"
     )P"





)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(





                      00000
                  000000000
             00000000000000
         000000000000000000
       00000000000000000000
      000000000000000000000
     0000000000000000000000
    00000000000000000000000
   000000000000000000000000
   000000000000000000000000
  0000000000 00000000000000
   0000000  000000000000000
    00000 000000000000000
      0  000000000000
        0000000000
       00000000
      00000
     000





)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "autumn", "autumn", "companies",
        "the leaf with a slash for its vein, glinting now and then",
        29, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &autumn_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_autumn(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
