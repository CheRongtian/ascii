/*
 * debian: the Debian logo, the swirl, with a scan line running down it every
 * few seconds that scrambles what it passes.
 *
 * Drawn from devicon's debian-original.svg (MIT): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colours, lifted on a dark
 * page where they would sink into it; in a <pre> it is one ink, from devicon's
 * debian-plain.svg (MIT). The logo is a trademark of its owner, shown here to
 * name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/debian.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0xa80030, 0xc65978, 0xe5b3c1, 0xc20037, 0xd7597d, 0xedb3c3,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                 _pppqq____q__
             _pp888888888888888qpqp,
          _p888888888PPPPYP8888888888q,
        _p8888888P"            "Y888888q,
       p888888"                   "888888p
   _  q888P"                        Y88888p
    _p88P"                           )888"O
  ,_888"             ._pp0OOo(,       O888 :
  'd88P             q8"'      ''      "888,
  q88P            .pP                  888,
  |88P            qP             ,     888"
  q88|            8|                  '88P
  |88'            8b           _.     q88'
  d88.            )8p      __        q88'
  |88p           ~,"8q,            _p8Y
  '88b            ""("8q__    __pq8P"
   d88,              "YdPP88888P""'
   '8888p                '"^^'
    "888q
     "888p
      '888p
        "88q,
         'Y88q_
           'Y88q,
              "Y8qq_
                 '"YOo___,

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                 __ppqq____q__
             _pp888888888888888qpqp,
          _p888888888PPPPYP8888888888q,
        _p8888888P"            "Y888888q,
       p888888"                   "888888p
   _  q8888"                        Y88888p
    _p888"                           )888"O
  ,_888"             ._pp0OOo(,       O888 :
  'd88P             q8"'      ''      "888,
  q888            .pP                  888,
  |88P            qP             ,     888"
  |88|            8|                  '88P
  |88'            8b           _.     q88'
  |88,            )8p      __        q88'
  |88p           ~,"8q,            _p8Y
  '88b            ""("8q__    __pq88"
   d88,              "YdPP88888PY"'
   '8888p                '"^^'
    "888q'
     "888p
      '888p
        "88q,
         'Y88q_
           'Y88q,
              "Y8qq_
                 '"YOo___,

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                 0000000000000
             00000000000000000000000
          00000000000000000000000000000
        00000000000            0000000000
       00000000                   00000000
   0  000000                        0000000
    000000                           000000
  000000             0000000000       0000 0
  00000             0000      00      00000
  0000            000                  0000
  0000            00             0     0000
  0000            00                  0000
  0000            00           00     0000
  0000            000      00        0000
  0000           000000            0000
  0000            00000000    0000000
   0000              00000000000000
   000000                00000
    000000
     00000
      00000
        00000
         000000
           000000
              000000
                 000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "debian", "debian", "distros",
        "the red swirl, scanned now and then",
        46, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &debian_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_debian(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
