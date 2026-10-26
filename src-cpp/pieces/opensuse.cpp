/*
 * opensuse: the openSUSE logo, the green chameleon, with a scan line running
 * down it every few seconds that scrambles what it passes.
 *
 * Drawn from devicon's opensuse-original.svg (MIT): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colours, lifted on a dark
 * page where they would sink into it; in a <pre> it is one ink, from the same
 * drawing. The logo is a trademark of its owner, shown here to name the
 * distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/opensuse.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x76be26, 0xa6d572, 0xd6ecbe, 0x76be26, 0xa6d572, 0xd6ecbe,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                    .__pppq888888888888qqqqq___   qqq___,
                _pp888888888888888888888888888888q88888888qqq__
            __p888888888888888888888888888888888888888888P"__"Y8_
         ._p88888888888888888888888888888888888888888888P\8P"Yp"8p
       _p88888888888888888888888888888888888888888888888p/88q8P.88,
     .p888888888888888888888888888888888888888888888("888q_"""_8888
    _888888888888888888888888888888888888888888888888qq_,"Y8888PP"_
   q888888P""""""Y8888888888888888888888888888888888888888qqqpppq8"
  \88888"  __pq__, '"88888888888888888888888888888888888888888P""
  d888P  _88888888q_  "88888888P"""""Y888888888"    '''''''
  8888| |888"''"Y888p   888888'        "888888P
  8888p "888q_q_ "888,   8888P           "88888
  "8888_ "88888P .888|   '"88p             "888q  ,
   "8888q_, ''  _p888'       '                '"Y'|'
    'Y8888888q88888P'
       "Y8888888P"'

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                    .__pppq888888888888qqqqq___   qqq___,
                _pp888888888888888888888888888888q88888888qqq__
            __p888888888888888888888888888888888888888888P"__"Y8_
         ._p88888888888888888888888888888888888888888888P\8P"Yp"8p
       _p88888888888888888888888888888888888888888888888p/88q8P.88,
     .p888888888888888888888888888888888888888888888("888q_"""_8888
    _888888888888888888888888888888888888888888888888qq_,"Y8888PP"_
   q888888P""""""Y8888888888888888888888888888888888888888qqqpppq8"
  \88888"  __pq__, '"88888888888888888888888888888888888888888P""
  d888P  _88888888q_  "88888888P"""""Y888888888"    '''''''
  8888| |888"''"Y888p   888888'        "888888P
  8888p "888q_q_ "888,   8888P           "88888
  "8888_ "88888P .888|   '"88p             "888q  ,
   "8888q_, ''  _p888'       '                '"Y'|'
    'Y8888888q88888P'
       "Y8888888P"'

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                    000000000000000000000000000   0000000
                00000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000000000000000000
         000000000000000000000000000000000000000000000000000000000
       000000000000000000000000000000000000000000000000000000000000
     00000000000000000000000000000000000000000000000000000000000000
    000000000000000000000000000000000000000000000000000000000000000
   0000000000000000000000000000000000000000000000000000000000000000
  0000000  0000000 0000000000000000000000000000000000000000000000
  00000  00000000000  00000000000000000000000000    0000000
  00000 0000000000000   0000000        00000000
  00000 00000000 00000   00000           000000
  000000 0000000 00000   00000             00000  0
   00000000 00  000000       0                000000
    00000000000000000
       000000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "opensuse", "opensuse", "distros",
        "the green chameleon, scanned now and then",
        69, 18, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &opensuse_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_opensuse(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
