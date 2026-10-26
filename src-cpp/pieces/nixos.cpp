/*
 * nixos: the NixOS logo, the snowflake of lambdas, with a scan line running
 * down it every few seconds that scrambles what it passes.
 *
 * Drawn from devicon's nixos-original.svg (MIT): each cell holds the character
 * whose shape best matches the logo's edge through it, and 8 where the logo is
 * solid. On a canvas it takes the logo's colours, lifted on a dark page where
 * they would sink into it; in a <pre> it is one ink, from devicon's
 * nixos-plain.svg (MIT). The logo is a trademark of its owner, shown here to
 * name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/nixos.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x5277c3, 0x81bfea, 0x8fa7d8, 0xadd5f1, 0xcbd6ed, 0xd9ecf9,
    0x5277c3, 0x81bfea, 0x8fa7d8, 0xadd5f1, 0xcbd6ed, 0xd9ecf9,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                q8888,       "888888(     _8888p
               )888888,       "888888p   _888888(
                "888888_       "888888p _888888"
                 "888888p       '888888q888888"
           ________888888p________88888888888"
          _88888888888888888888888pO88888888'       q,
         )8888888888888888888888888q)888888,       q88_
        )888888888888888888888888888b"888888(    .p8888p
                  q888888"            "888888p  _p88888P
                 p888888'              "888888p_888888P
               .p88888P'                '88888\888888P
   _qqqqqqqqqqq888888P                    888)888888qqqqqqqq,
  _88888888888888888P                      "q8888888888888888,
  "8888888888888888(p                      q88888888888888888"
   """"""""8888888\88q,                  .p888888"""""""""""'
          q888888\8888q,                _p88888P
         p888888'O888888,              _888888P
       .p88888P'  Y888888,            |888888P
        Y8888P     "888888pqqqqqqqqqqqqqqqqqqqqqqqqqqqp(
         "88P       "888888p88888888888888888888888888"
          ""       _p8888888pO88888888888888888888888"
                  _8888888888q''''''''Y888888,'''''''
                 _888888888888q,       "888888,
                q888888" O888888,       "888888(
               )888888"   )888888,       "888888(
                "8888'     "888888(       "8888"

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                q8888,       "888888(     _8888p
               )888888,       "888888p   _888888(
                "888888_       "888888p _888888"
                 "888888p       '888888q888888"
           ________888888p________88888888888"
          _88888888888888888888888pO88888888'       q,
         )8888888888888888888888888q)888888,       q88_
        )888888888888888888888888888b"888888(    .p8888p
                  q888888"            "888888p  _p88888P
                 p888888'              "888888p_888888P
               .p88888P'                '88888\888888P
   _qqqqqqqqqqq888888P                    888)888888qqqqqqqq,
  _88888888888888888P                      "q8888888888888888,
  "8888888888888888(p                      q88888888888888888"
   """"""""8888888\88q,                  .p888888"""""""""""'
          q888888\8888q,                _p88888P
         p888888'O888888,              _888888P
       .p88888P'  Y888888,            |888888P
        Y8888P     "888888/qqqqqqqqqqqqqqqqqqqqqqqqqqqp(
         "88P       "888888p88888888888888888888888888"
          ""       _p8888888pO88888888888888888888888"
                  _8888888888q''''''''Y888888,'''''''
                 _888888888888q,       "888888,
                q888888" Y888888,       "888888(
               )888888"   )888888,       "888888(
                "8888'     "888888(       "8888"

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                000000       11111111     111111
               00000000       11111111   11111111
                00000000       11111111 11111111
                 00000000       111111111111111
           00000000000000000000000111111111111
          00000000000000000000000001111111111       00
         00000000000000000000000000011111111       0000
        0000000000000000000000000000011111111    0000000
                  11111111            11111111  00000000
                 11111111              1111111100000000
               111111111                11111100000000
   1111111111111111111                    1110000000000000000
  1111111111111111111                      1000000000000000000
  1111111111111111110                      0000000000000000000
   11111111111111110000                  00000000000000000000
          11111111000000                00000000
         1111111100000000              00000000
       111111111  00000000            00000000
        111111     0000000011111111111111111111111111111
         1111       00000000111111111111111111111111111
          11       00000000001111111111111111111111111
                  00000000000011111111111111111111111
                 000000000000000       11111111
                00000000 00000000       11111111
               00000000   00000000       11111111
                000000     00000000       111111

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "nixos", "nixos", "distros",
        "the snowflake of lambdas, scanned now and then",
        64, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &nixos_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_nixos(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
