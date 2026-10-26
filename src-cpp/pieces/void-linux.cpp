/*
 * void linux: the Void Linux logo, a ring cut through, with a scan line
 * running down it every few seconds that scrambles what it passes.
 *
 * Drawn from Simple Icons' voidlinux.svg (CC0): each cell holds the character
 * whose shape best matches the logo's edge through it, and 8 where the logo is
 * solid. On a canvas it takes the logo's colours, lifted on a dark page where
 * they would sink into it; in a <pre> it is one ink, from the same drawing.
 * The logo is a trademark of its owner, shown here to name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/void-linux.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x478061, 0x87ac98, 0xc8d9d0, 0x478061, 0x87ac98, 0xc8d9d0,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                  __pppq88888888qqqq__
              __p8888888888888888888888q_,
             d8888888888888888888888888888qq,
              "888888888888888888888888888888q,
                "88888P""''''''""Y8888888888888q,
      __          ""                '"88888888888_
     q88q_                             "8888888888p
    q88888q_                             "888888888p
   )88888888P             .__,             O88888888p
  .88888888P          _pp888888qq,          O88888888,
  q88888888          p888888888888q          88888888p
  88888888P         q88888888888888p         )88888888
  88888888|        |8888888888888888,        |88888888
  88888888|        |8888888888888888|        |88888888
  88888888p         888888888888888P         q88888888
  d88888888,         Y888888888888P         .88888888P
  '88888888p          '"88888888"'          q88888888'
   )88888888q             ''''             d88888888"
    Y88888888q_                             "888888P
     Y888888888q_                             "888P
      "8888888888qq_                __          ""
       'Y888888888888qq__________pp888q_
         'Y88888888888888888888888888888q_
           '"88888888888888888888888888888b
              '"88888888888888888888888P"'
                  '""Y88888888888PP""'

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                  __pppq88888888qqqq__
              __p8888888888888888888888q_,
             d8888888888888888888888888888qq,
              "888888888888888888888888888888q,
                "88888P""''''''""Y8888888888888q,
      __          ""                '"88888888888_
     q88q_                             "8888888888p
    q88888q_                             "888888888p
   )88888888P             .__,             O88888888p
  .88888888P          _pp888888qq,          O88888888,
  q88888888          p888888888888q          88888888p
  88888888P         q88888888888888p         )88888888
  88888888|        |8888888888888888,        |88888888
  88888888|        |8888888888888888|        |88888888
  88888888p         888888888888888P         q88888888
  d88888888,         Y888888888888P         .88888888P
  '88888888p          '"88888888"'          q88888888'
   )88888888q             ''''             d88888888"
    Y88888888q_                             "888888P
     Y888888888q_                             "888P
      "8888888888qq_                __          ""
       'Y888888888888qq__________pp888q_
         'Y88888888888888888888888888888q_
           '"88888888888888888888888888888b
              '"88888888888888888888888P"'
                  '""Y88888888888PP""'

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                  00000000000000000000
              0000000000000000000000000000
             00000000000000000000000000000000
              000000000000000000000000000000000
                000000000000000000000000000000000
      00          00                00000000000000
     00000                             000000000000
    00000000                             00000000000
   0000000000             0000             0000000000
  0000000000          000000000000          0000000000
  000000000          00000000000000          000000000
  000000000         0000000000000000         000000000
  000000000        000000000000000000        000000000
  000000000        000000000000000000        000000000
  000000000         0000000000000000         000000000
  0000000000         00000000000000         0000000000
  0000000000          000000000000          0000000000
   0000000000             0000             0000000000
    00000000000                             00000000
     000000000000                             00000
      00000000000000                00          00
       000000000000000000000000000000000
         000000000000000000000000000000000
           00000000000000000000000000000000
              0000000000000000000000000000
                  00000000000000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "void-linux", "void linux", "distros",
        "the green ring, cut through, scanned now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &void_linux_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_void_linux(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
