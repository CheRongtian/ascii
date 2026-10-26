/*
 * playstation: the PlayStation logo, a P standing on a flat S, with a glint
 * crossing it every few seconds.
 *
 * Drawn from Simple Icons' playstation.svg (CC0): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colour, lifted on a dark
 * page where it would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/playstation.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x0070d1, 0x59a2e1, 0xb3d4f1, 0x0070d1, 0x59a2e1, 0xb3d4f1,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                          |8qqq___
                          |88888888qqq__,
                          |888888888888888qq_,
                          |8888888888888888888qq_
                          |88888888888""Y88888888q_
                          |8888888888P   |888888888q
                          |8888888888P   |8888888888p
                          |8888888888P   |88888888888,
                          |8888888888P   |88888888888p
                          |8888888888P   |88888888888b
                          |8888888888P   |88888888888b
                          |8888888888P   |88888888888P
                          |8888888888P   |88888888888'
                          |8888888888P   |8888888888"
                       __ |8888888888P   '88888888"
                 .__pp88b |8888888888P       '''
            __pp88888888b |8888888888P  ___ppppq88888888qqqq__,
       _ppp8888888888888P |8888888888P q888888888888888888888888qq_
   _pp88888888888888P""   |8888888888P d888888888P""'    '888888888p
  q88888888888PP"'      . |8888888888P d888P""'      __pp8888888888P
  8888888888,      __pp8b |8888888888P "'      .__pp8888888888888P"
   "Y8888888888q88888888b |8888888888P    __pp888888888888888P""
       ""Y88888888888888P |8888888888P qp88888888888888P""'
                          |8888888888P d8888888888P""
                           ""88888888P d8888P""'
                                '""Y8P """

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                          |8qqq___
                          |88888888qqq__,
                          |888888888888888qq_,
                          |8888888888888888888qq_
                          |88888888888""Y88888888q_
                          |8888888888P   |888888888q
                          |8888888888P   |8888888888p
                          |8888888888P   |88888888888,
                          |8888888888P   |88888888888p
                          |8888888888P   |88888888888b
                          |8888888888P   |88888888888b
                          |8888888888P   |88888888888P
                          |8888888888P   |88888888888'
                          |8888888888P   |8888888888"
                       __ |8888888888P   '88888888"
                 .__pp88b |8888888888P       '''
            __pp88888888b |8888888888P  ___ppppq88888888qqqq__,
       _ppp8888888888888P |8888888888P q888888888888888888888888qq_
   _pp88888888888888P""   |8888888888P d888888888P""'    '888888888p
  q88888888888PP"'      . |8888888888P d888P""'      __pp8888888888P
  8888888888,      __pp8b |8888888888P "'      .__pp8888888888888P"
   "Y8888888888q88888888b |8888888888P    __pp888888888888888P""
       ""Y88888888888888P |8888888888P qp88888888888888P""'
                          |8888888888P d8888888888P""
                           ""88888888P d8888P""'
                                '""Y8P """

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                          00000000
                          000000000000000
                          00000000000000000000
                          00000000000000000000000
                          0000000000000000000000000
                          000000000000   00000000000
                          000000000000   000000000000
                          000000000000   0000000000000
                          000000000000   0000000000000
                          000000000000   0000000000000
                          000000000000   0000000000000
                          000000000000   0000000000000
                          000000000000   0000000000000
                          000000000000   000000000000
                       00 000000000000   0000000000
                 00000000 000000000000       000
            0000000000000 000000000000  00000000000000000000000
       000000000000000000 000000000000 0000000000000000000000000000
   00000000000000000000   000000000000 00000000000000    00000000000
  0000000000000000      0 000000000000 00000000      000000000000000
  00000000000      000000 000000000000 00      00000000000000000000
   0000000000000000000000 000000000000    0000000000000000000000
       000000000000000000 000000000000 00000000000000000000
                          000000000000 00000000000000
                           00000000000 000000000
                                000000 000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "playstation", "playstation", "companies",
        "the p standing on a flat s, in blue, glinting now and then",
        70, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &playstation_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_playstation(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
