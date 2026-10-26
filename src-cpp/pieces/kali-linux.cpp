/*
 * kali linux: the Kali Linux logo, the dragon, with a scan line running down
 * it every few seconds that scrambles what it passes.
 *
 * Drawn from devicon's kalilinux-original.svg (MIT): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colours, lifted on a dark
 * page where they would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/kali-linux.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x287aff, 0x73a9ff, 0xbfd7ff, 0x287aff, 0x73a9ff, 0xbfd7ff,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

       ''''""""""^YYY0bqqqq___,
                          '""^Y88qq__
                ___________________"Y8p
       __,ooOYYY"""""""""""""""""""YY/b
  .'"'''                 .___pppp88888O,        .
                   __pp88PY"""'        8p,       ':-_
              ._pdP""'                 _888qqqqqq___'"~_
           _oY""                     p88P"""""""Y888qp_|Y_
        .""                        _88"             ""888qq,
                                   d8"                  "888_
                                  :88                    '"Y8q_
                                  '88,                       "P"
                                   88q,
                                    O88_,
                                     "888qq_______,
                                        ""Y888888888888qpq__,
                                                    ''"^88q/Y0q_
                                                          "Yq_ "Oq,
                                                            'Oq, 'O_
                                                              "q,  "(
                                                               "b   )
                                                                ),
                                                                 \
                                                                 |
                                                                  '

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

       ''''""""""^YYY0bqqqq___,
                          '""^Y88qq__
                ___________________"Y8p
       __,ooOYYY"""""""""""""""""""YY/b
  .'"'''                 .___pppp88888O,        .
                   __pp88PY"""'        8p,       ':-_
              ._pdP""'                 _888qqqqqq___'"~_
           _oY""                     p88P"""""""Y888qp_|Y_
        .""                        _88"             ""888qq,
                                   d8"                  "888_
                                  :88                    '"Y8q_
                                  '88,                       "P"
                                   88q,
                                    O88_,
                                     "888qq_______,
                                        ""Y888888888888qpq__,
                                                    ''"^88q/Y0q_
                                                          "Yq_ "Oq,
                                                            'Oq, 'O_
                                                              "q,  "(
                                                               "b   )
                                                                ),
                                                                 \
                                                                 |
                                                                  '

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

       000000000000000000000000
                          00000000000
                00000000000000000000000
       00000000000000000000000000000000
  000000                 000000000000000        0
                   000000000000        000       0000
              00000000                 00000000000000000
           00000                     000000000000000000000
        000                        0000             00000000
                                   000                  00000
                                  000                    000000
                                  0000                       000
                                   0000
                                    00000
                                     00000000000000
                                        000000000000000000000
                                                    000000000000
                                                          0000 0000
                                                            0000 000
                                                              000  00
                                                               00   0
                                                                00
                                                                 0
                                                                 0
                                                                  0

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "kali-linux", "kali linux", "distros",
        "the blue dragon, scanned now and then",
        71, 27, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &kali_linux_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_kali_linux(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
