/*
 * almalinux: the AlmaLinux logo, five coloured figures in a ring, with a scan
 * line running down it every few seconds that scrambles what it passes.
 *
 * Drawn from devicon's almalinux-original.svg (MIT): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colours, lifted on a dark
 * page where they would sink into it; in a <pre> it is one ink, from devicon's
 * almalinux-plain.svg (MIT). The logo is a trademark of its owner, shown here
 * to name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/almalinux.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0xff4546, 0x0068d8, 0x85d82e, 0xffc911, 0x22c1ff, 0xff8687,
    0x599de6, 0xb0e677, 0xffdc64, 0x6fd7ff, 0xffc7c8, 0xb3d2f3,
    0xdaf3c0, 0xffefb8, 0xbdecff, 0xff4546, 0x0068d8, 0x85d82e,
    0xffc911, 0x22c1ff, 0xff8687, 0x599de6, 0xb0e677, 0xffdc64,
    0x6fd7ff, 0xffc7c8, 0xb3d2f3, 0xdaf3c0, 0xffefb8, 0xbdecff,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

            _pq88q_                       ,
            8888888p _pq_       __p__  _p888q_
            8888888Pq88888.   _888888pq8888888,
            'Y8888(p88888"  _p88888888/8888888"
           qpqqqpp888888'  _8888888888q/8888P"
          q888888888888P   8888"   '88888qqqq,
          d88888P         |888'     '888888888
          '88888,         |88P       O8888888P
           '8888q,        |88'              '
         __, "8888q_,      88        ________
       _p888,  "Y8888qq_,  "8    _p88888888888qq,
       )88888q,   '"""YYYY' '  oPP""""""""Y888888q,
   _ppqq/888888p                            O88888p
  q888888p8888P          _p'  )q_           q88888P
  88888888d888         _p8P    "8q_      __8888P"___
  "888888\8888      __p88"      "88p   )888888\888888(
    """'q88888qqqppp888P'        O88p   O8888P88888888
        "888888888888P"          '888,  |8888b)888888P
         '"88888PP""    _pq,     .888p  |8888P '"PPP"
                   __pp88888q_,._p888P   ""'
                   888888888888888888"
                   '8888"""""8888888P
                       _p8888p"888P"
                      .8888888p
                       8888888P
                       'Y888P"

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

            _pq88q_                       ,
            8888888p _pq_       __p__  _p888q_
            8888888Pq88888.   _888888pq8888888,
            'Y8888(p88888"  _p88888888/8888888"
           qpqqqpp888888'  _8888888888q/8888P"
          q888888888888P   8888"   '88888qqqq,
          d88888P         |888'     '888888888
          '88888,         |88P       O8888888P
           '8888q,        |88'              '
         __, "8888q_,      88        ________
       _p888,  "Y8888qq_,  "8    _p88888888888qq,
       )88888q,   '"""YYYY' '  oPP""""""""Y888888q,
   _ppqq/888888p                            O88888p
  q888888p8888P          _p'  )q_           q88888P
  88888888d888         _p8P    "8q_      __8888P"___
  "888888\8888      __p88"      "88p   )888888\888888(
    """'q88888qqqppp888P'        O88p   O8888P88888888
        "888888888888P"          '888,  |8888b)888888P
         '"88888PP""    _pq,     .888p  |8888P '"PPP"
                   __pp88888q_,._p888P   ""'
                   888888888888888888"
                   '8888"""""8888888P
                       _p8888p"888P"
                      .8888888p
                       8888888P
                       'Y888P"

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

            0000000                       3
            00000000 0000       33333  3333333
            000000000000000   33333333333333333
            00000000000000  3333333333333333333
           00000000000000  3333333333333333333
          00000000000000   33333   33333333333
          0000000         33333     3333333333
          0000000         3333       333333333
           0000000        3333              3
         111 00000000      33        22222222
       111111  0000000000  33    2222222222222222
       11111111   000000000 3  22222222222222222222
   1111111111111                            2222222
  1111111111111          111  444           2222222
  111111111111         1111    4444      22222222222
  111111111111      111111      4444   222222222222222
    111111111111111111111        4444   22222222222222
        111111111111111          44444  22222222222222
         11111111111    4444     44444  222222 222222
                   4444444444444444444   222
                   4444444444444444444
                   444444444444444444
                       4444444444444
                      444444444
                       44444444
                       4444444

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "almalinux", "almalinux", "distros",
        "five coloured figures in a ring, scanned now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &almalinux_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_almalinux(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
