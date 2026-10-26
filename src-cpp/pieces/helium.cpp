/*
 * helium: the Helium logo, a six-pointed asterisk, with a glint crossing it
 * every few seconds.
 *
 * Drawn from Simple Icons' heliumbrowser.svg (CC0): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colour, lifted on a dark
 * page where it would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/helium.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x3450d1, 0x7b8de1, 0xc2cbf1, 0x3854d2, 0x7e90e2, 0xc3ccf2,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                      _p8q_
                   _p8888888q,
                   |888888888|
                   '888888888'
                    888888888
    ._pp_,          d8888888P          ._qq_,
  qq888888q_        |8888888|        _p888888qp
  88888888888q_      8888888      _p88888888888
  d888888888888q_,   8888888   ._p888888888888P
  "888888888888888q_ d88888P _p888888888888888"
     '"Y8888888888888p88888q8888888888888P"'
          ""Y88888888888888888888888P""
               ""88888888888888P""
              ._pp8888888888888qq_,
          _pp88888888888888888888888qq_,
     __pp888888888888Y88888P888888888888qq__
  \p88888888888888P" q88888p "Y88888888888888q,
  q888888888888P"    d88888b    "8888888888888p
  d8888888888P'     .8888888.     'Y8888888888b
  Y8888888P"        |8888888|        "O8888888P
     ""P"           q8888888p           "P""
                    888888888
                   .888888888,
                   |888888888|
                   '"8888888"'
                      "Y8P"

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                      _p8q_
                   _p8888888q,
                   |888888888|
                   '888888888'
                    888888888
    ._pp_,          d8888888P          ._qq_,
  qq888888q_        |8888888|        _p888888qp
  88888888888q_      8888888      _p88888888888
  d888888888888q_,   8888888   ._p888888888888P
  "888888888888888q_ d88888P _p888888888888888"
     '"Y8888888888888p88888q8888888888888P"'
          ""Y88888888888888888888888P""
               ""88888888888888P""
              ._pp8888888888888qq_,
          _pp88888888888888888888888qq_,
     __pp888888888888Y88888P888888888888qq__
  \p88888888888888P" q88888p "Y88888888888888q,
  q888888888888P"    d88888b    "8888888888888p
  d8888888888P'     .8888888.     'Y8888888888b
  Y8888888P"        |8888888|        "O8888888P
     ""P"           q8888888p           "P""
                    888888888
                   .888888888,
                   |888888888|
                   '"8888888"'
                      "Y8P"

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                      00000
                   00000000000
                   00000000000
                   00000000000
                    000000000
    000000          000000000          000000
  0000000000        000000000        0000000000
  0000000000000      0000000      0000000000000
  0000000000000000   0000000   0000000000000000
  000000000000000000 0000000 000000000000000000
     000000000000000000000000000000000000000
          00000000000000000000000000000
               0000000000000000000
              000000000000000000000
          000000000000000000000000000000
     000000000000000000000000000000000000000
  000000000000000000 0000000 000000000000000000
  000000000000000    0000000    000000000000000
  0000000000000     000000000     0000000000000
  0000000000        000000000        0000000000
     0000           000000000           0000
                    000000000
                   00000000000
                   00000000000
                   00000000000
                      00000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "helium", "helium", "companies",
        "the six-point asterisk, in blue, glinting now and then",
        49, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &helium_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_helium(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
