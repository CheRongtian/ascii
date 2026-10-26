/*
 * omarchy: the Omarchy logo, a square o built from interlocking brackets, with
 * a scan line running down it every few seconds that scrambles what it passes.
 *
 * Drawn from Simple Icons' omarchy.svg (MIT, from omarchy.org): each cell
 * holds the character whose shape best matches the logo's edge through it, and
 * 8 where the logo is solid. On a canvas it takes the logo's colour, and a
 * deeper shade of it on a light page, where it would fade into it; in a <pre>
 * it is one ink, from the same drawing. The logo is a trademark of its owner,
 * shown here to name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/omarchy.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x6ea235, 0xa1c37c, 0xd4e3c2, 0x9ece6a, 0xc0df9e, 0xe2f0d2,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

  8888888888888888888888888888888888888888888888888888
  8888888888888888888888888888888888888888888888888888
  888P                    d88b                    d888
  888P  .qqqqqqqqqqqqqqqqq888b          qqqqqqp.  d888
  888P  .88888888888888888888b          8888888.  d888
  888P  .888(""""""""""""""""'          '"")888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  8888888888|                              |888.  d888
  8888888888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888(______________________________)888.  d888
  888P  .88888888888888888888888888888888888888.  d888
  888P   YYYYYYYYYYYYYYYYY8888YYYYYYYYYYYYYYYYY   d888
  888P                    d88b                    d888
  8888qqqqqqqqqqqqqqqqqqqq888b   qqqqqqqqqqqqqqqqq8888
  888888888888888888888888888b   888888888888888888888

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

  8888888888888888888888888888888888888888888888888888
  8888888888888888888888888888888888888888888888888888
  888P                    d88b                    d888
  888P  .qqqqqqqqqqqqqqqqq888b          qqqqqqp.  d888
  888P  .88888888888888888888b          8888888.  d888
  888P  .888(""""""""""""""""'          '"")888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  8888888888|                              |888.  d888
  8888888888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888|                              |888.  d888
  888P  .888(______________________________)888.  d888
  888P  .88888888888888888888888888888888888888.  d888
  888P   YYYYYYYYYYYYYYYYY8888YYYYYYYYYYYYYYYYY   d888
  888P                    d88b                    d888
  8888qqqqqqqqqqqqqqqqqqqq888b   qqqqqqqqqqqqqqqqq8888
  888888888888888888888888888b   888888888888888888888

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

  0000000000000000000000000000000000000000000000000000
  0000000000000000000000000000000000000000000000000000
  0000                    0000                    0000
  0000  0000000000000000000000          00000000  0000
  0000  0000000000000000000000          00000000  0000
  0000  0000000000000000000000          00000000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  00000000000                              00000  0000
  00000000000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  00000                              00000  0000
  0000  0000000000000000000000000000000000000000  0000
  0000  0000000000000000000000000000000000000000  0000
  0000   00000000000000000000000000000000000000   0000
  0000                    0000                    0000
  0000000000000000000000000000   000000000000000000000
  0000000000000000000000000000   000000000000000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "omarchy", "omarchy", "distros",
        "the square o of brackets, in green, scanned now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &omarchy_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_omarchy(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
