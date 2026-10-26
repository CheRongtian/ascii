/*
 * helmcode: the Helmcode mark, a hexagon with a folded cut through it, in its
 * violet, with a glint crossing it every few seconds.
 *
 * Drawn from Helmcode's own mark, helmcode.com/brand: each cell holds the
 * character whose shape best matches the mark's edge through it, and 8 where
 * the mark is solid. On a canvas it takes the mark's colour, lifted on a dark
 * page where it would sink into it; in a <pre> it is one ink, from the same
 * drawing. The mark is a trademark of its owner, shown here to name the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/helmcode.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x4934e1, 0x897beb, 0xc8c2f6, 0x8071ea, 0xaca3f1, 0xd9d4f9,
};

constexpr char16_t ART[] = uR"ASCII_LOGO(

                      _qq888pp_
                  _qq88888888888pp_
               _q8888888888888888888p_
           _qq8888888888888888888888888pp_
        _q888888888888888888888888888888888p_
    _qq8888888888888888PPP'PP88888888888888888pp_
   q8888888888888888PP'       ^PP8888888888888888p
  q8888888888888PP'              'PP88888888888888p
  8888888888PP^                      ^PP88888888888
  888888888p_                           'PP88888888
  888888888888p_                           q8888888
  888888888888888pp_                       q8888888
  8888888888888888888pp_                   q8888888
  8888888888888888888888pp_                q8888888
  888888888888888888888888b                q8888888
  888888888888888888888888b                q8888888
  888888888888888888888888b                q8888888
  888888888888888888888888b                q8888888
  888888888888888888888888b              _qq8888888
  888888888888888888888888b           _qq8888888888
  P88888888888888888888888b       _qq8888888888888P
   P8888888888888888888888b    _qq888888888888888P
    'PP8888888888888888888b_qq8888888888888888PP'
        ^P888888888888888888888888888888888P^
           'PP8888888888888888888888888PP'
               PP8888888888888888888PP
                  ^PP88888888888PP'
                      PPP888PPP

)ASCII_LOGO";
constexpr auto &MONO = ART;

constexpr char16_t INK[] = uR"ASCII_LOGO(

                      000000000
                  00000000000000000
               00000000000000000000000
           0000000000000000000000000000000
        0000000000000000000000000000000000000
    000000000000000000000000000000000000000000000
   00000000000000000000       00000000000000000000
  00000000000000000              000000000000000000
  0000000000000                      00000000000000
  00000000000                           00000000000
  00000000000000                           00000000
  000000000000000000                       00000000
  0000000000000000000000                   00000000
  0000000000000000000000000                00000000
  0000000000000000000000000                00000000
  0000000000000000000000000                00000000
  0000000000000000000000000                00000000
  0000000000000000000000000                00000000
  0000000000000000000000000              0000000000
  0000000000000000000000000           0000000000000
  0000000000000000000000000       00000000000000000
   000000000000000000000000    0000000000000000000
    000000000000000000000000000000000000000000000
        0000000000000000000000000000000000000
           0000000000000000000000000000000
               00000000000000000000000
                  00000000000000000
                      000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "helmcode", "helmcode", "companies",
        "the helmcode hexagon in its violet, glinting now and then",
        53, 30, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK, u"8dbqpPY"
};
} // namespace

const AsciiPieceMeta &helmcode_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_helmcode(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
