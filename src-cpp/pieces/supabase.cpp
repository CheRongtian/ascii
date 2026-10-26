/*
 * supabase: the Supabase logo, a lightning bolt, with a glint crossing it
 * every few seconds.
 *
 * Drawn from Simple Icons' supabase.svg (CC0): each cell holds the character
 * whose shape best matches the logo's edge through it, and 8 where the logo is
 * solid. On a canvas it takes the logo's colour, and a deeper shade of it on a
 * light page, where it would fade into it; in a <pre> it is one ink, from the
 * same drawing. The logo is a trademark of its owner, shown here to name the
 * company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/supabase.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x2aa76e, 0x75c6a1, 0xbfe5d4, 0x3fcf8e, 0x82e0b6, 0xc5f1dd,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                      _p88q,
                     q88888|
                   _8888888|
                 .p88888888|
                _8888888888|
              _p88888888888|
             q8888888888888|
           _p88888888888888|
         .p8888888888888888|
        _8888888888888888888qqqqqqqqqqqqqqqqqqqqqqq,
      _p88888888888888888888888888888888888888888888,
     q88888888888888888888888888888888888888888888888
   _p88888888888888888888888888888888888888888888888"
  q88888888888888888888888888888888888888888888888P"
  88888888888888888888888888888888888888888888888"
  "88888888888888888888888888888888888888888888P'
   '"88888888888888888888888888888888888888888"
                           d8888888888888888P
                           d888888888888888"
                           d8888888888888"
                           |88888888888P'
                           |8888888888"
                           |88888888P
                           |8888888"
                           |88888P
                           '888P'

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                      _p88q,
                     q88888|
                   _8888888|
                 .p88888888|
                _8888888888|
              _p88888888888|
             q8888888888888|
           _p88888888888888|
         .p8888888888888888|
        _8888888888888888888qqqqqqqqqqqqqqqqqqqqqqq,
      _p88888888888888888888888888888888888888888888,
     q88888888888888888888888888888888888888888888888
   _p88888888888888888888888888888888888888888888888"
  q88888888888888888888888888888888888888888888888P"
  88888888888888888888888888888888888888888888888"
  "88888888888888888888888888888888888888888888P'
   '"88888888888888888888888888888888888888888"
                           d8888888888888888P
                           d888888888888888"
                           d8888888888888"
                           |88888888888P'
                           |8888888888"
                           |88888888P
                           |8888888"
                           |88888P
                           '888P'

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                      000000
                     0000000
                   000000000
                 00000000000
                000000000000
              00000000000000
             000000000000000
           00000000000000000
         0000000000000000000
        00000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000
     000000000000000000000000000000000000000000000000
   00000000000000000000000000000000000000000000000000
  00000000000000000000000000000000000000000000000000
  000000000000000000000000000000000000000000000000
  00000000000000000000000000000000000000000000000
   00000000000000000000000000000000000000000000
                           000000000000000000
                           00000000000000000
                           000000000000000
                           00000000000000
                           000000000000
                           0000000000
                           000000000
                           0000000
                           000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "supabase", "supabase", "companies",
        "the green bolt, glinting now and then",
        55, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &supabase_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_supabase(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
