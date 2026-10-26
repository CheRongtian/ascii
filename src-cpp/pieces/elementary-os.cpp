/*
 * elementary os: the elementary OS logo, an e in a ring, with a scan line
 * running down it every few seconds that scrambles what it passes.
 *
 * Drawn from Simple Icons' elementary.svg (CC0): each cell holds the character
 * whose shape best matches the logo's edge through it, and 8 where the logo is
 * solid. On a canvas it takes the logo's colours, lifted on a dark page where
 * they would sink into it; in a <pre> it is one ink, from the same drawing.
 * The logo is a trademark of its owner, shown here to name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/elementary-os.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x64baff, 0x9ad2ff, 0xd1eaff, 0x64baff, 0x9ad2ff, 0xd1eaff,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                  __pppq88888888qqqq__
              __p888PP"""''''''"""Y8888q_,
           _pp88P"'      _______     '"Y88qq,
         _p88P"      _pp8PP^^Y888q_      'Y88q,
       _p88"      _p88"'        'Y88_       "88q,
      _88P      _p8P"             "88p        "88_
     q88"      p88"                |88,        "88p
    q8P'     _p88"                  88|         '88p
   q88'     .888"                  .88'          '88p
  .88"      q88"                   q8P            "88,
  q8P      |88P                   q88            .p88p
  88|      d88|                  q8P'           _p8888
  88|      888'                _p8P            _88"|88
  88|      888,              _p8P"           _p88" |88
  88|      )88p            _p88"            q88P   |88
  d8b       888,         _p88"            _88P"    d8P
  '88,      '888_    ._p88P"           _p888"     \88'
   )88,      '888q_pp88P"           ._p88P"      .88(
    Y8q,   ___p888888_,         __pp888P'       .p8P
     Y88q888888P""O88888qqqqpp88888P"'         _88P
      "888"""       '"YP888888P""'            q88"
       'Y88_                                _88P'
         'Y88q_                          _p88P'
           '"888q_,                  __p888"'
              '"8888qq____________pp888P"'
                  '""Y888888888888P""'

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                  __pppq88888888qqqq__
              __p888PP"""''''''"""Y8888q_,
           _pp88P"'      _______     '"Y88qq,
         _p88P"      _pp8PP^^Y888q_      'Y88q,
       _p88"      _p88"'        'Y88_       "88q,
      _88P      _p8P"             "88p        "88_
     q88"      p88"                |88,        "88p
    q8P'     _p88"                  88|         '88p
   q88'     .888"                  .88'          '88p
  .88"      q88"                   q8P            "88,
  q8P      |88P                   q88            .p88p
  88|      d88|                  q8P'           _p8888
  88|      888'                _p8P            _88"|88
  88|      888,              _p8P"           _p88" |88
  88|      )88p            _p88"            q88P   |88
  d8b       888,         _p88"            _88P"    d8P
  '88,      '888_    ._p88P"           _p888"     \88'
   )88,      '888q_pp88P"           ._p88P"      .88(
    Y8q,   ___p888888_,         __pp888P'       .p8P
     Y88q888888P""O88888qqqqpp88888P"'         _88P
      "888"""       '"YP888888P""'            q88"
       'Y88_                                _88P'
         'Y88q_                          _p88P'
           '"888q_,                  __p888"'
              '"8888qq____________pp888P"'
                  '""Y888888888888P""'

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                  00000000000000000000
              0000000000000000000000000000
           00000000      0000000     00000000
         000000      00000000000000      000000
       00000      000000        00000       00000
      0000      00000             0000        0000
     0000      0000                0000        0000
    0000     00000                  000         0000
   0000     00000                  0000          0000
  0000      0000                   000            0000
  000      0000                   000            00000
  000      0000                  0000           000000
  000      0000                0000            0000000
  000      0000              00000           00000 000
  000      0000            00000            0000   000
  000       0000         00000            00000    000
  0000      00000    0000000           000000     0000
   0000      000000000000           0000000      0000
    0000   000000000000         000000000       0000
     000000000000000000000000000000000         0000
      0000000       00000000000000            0000
       00000                                00000
         000000                          000000
           00000000                  00000000
              0000000000000000000000000000
                  00000000000000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "elementary-os", "elementary os", "distros",
        "the e in a ring, scanned now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &elementary_os_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_elementary_os(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
