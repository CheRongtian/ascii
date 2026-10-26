/*
 * arch linux: the Arch Linux logo, the blue arch, with a scan line running
 * down it every few seconds that scrambles what it passes.
 *
 * Drawn from devicon's archlinux-original.svg (MIT): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colours, lifted on a dark
 * page where they would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/arch-linux.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x1894d4, 0x69b9e3, 0xbadff2, 0x1894d4, 0x69b9e3, 0xbadff2,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                           \p
                          _88(
                         .8888,
                         p88888,
                        q8888888,
                       q88888888q,
                      )8888888888q
                     '888888888888q
                    _q_"88888888888p
                   _8888q_8888888888p
                  _888888888888888888p
                 _88888888888888888888q
                _8888888888888888888888q
               )888888888888888888888888q,
              q88888888888888888888888888q,
             q88888888888P"''"Y88888888888q,
            q88888888888"      '888888888888,
           q88888888888'         888888888888,
          p88888888888P          "888888888888,
        .p888888888888|           88888888q("Y8,
       _p8888888888888|           88888888888q_,
      _88888888888888P\          '88888888888888q_
     _888888888P""'                  '""Y888888888p   __.
    _88888P""                              ""888888p  '"|
   )88P""                                      '"888p
  )P"                                              ""b

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                           \p
                          _88(
                         .8888,
                         p88888,
                        q8888888,
                       q88888888q,
                      )8888888888q
                     '888888888888q
                    _q_"88888888888p
                   _8888q_8888888888p
                  _888888888888888888p
                 _88888888888888888888q
                _8888888888888888888888q
               )888888888888888888888888q,
              q88888888888888888888888888q,
             q88888888888P"''"Y88888888888q,
            q88888888888"      '888888888888,
           q88888888888'         888888888888,
          p88888888888P          "888888888888,
        .p888888888888|           88888888q("Y8,
       _p8888888888888|           88888888888q_,
      _88888888888888P\          '88888888888888q_
     _888888888P""'                  '""Y888888888p   __.
    _88888P""                              ""888888p  '"|
   )88P""                                      '"888p
  )P"                                              ""b

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                           00
                          0000
                         000000
                         0000000
                        000000000
                       00000000000
                      000000000000
                     00000000000000
                    0000000000000000
                   000000000000000000
                  00000000000000000000
                 0000000000000000000000
                000000000000000000000000
               000000000000000000000000000
              00000000000000000000000000000
             0000000000000000000000000000000
            0000000000000      00000000000000
           0000000000000         0000000000000
          0000000000000          00000000000000
        000000000000000           00000000000000
       0000000000000000           00000000000000
      00000000000000000          00000000000000000
     00000000000000                  00000000000000   000
    000000000                              000000000  000
   000000                                      000000
  000                                              000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "arch-linux", "arch linux", "distros",
        "the blue arch, scanned now and then",
        59, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &arch_linux_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_arch_linux(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
