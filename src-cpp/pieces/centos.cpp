/*
 * centos: the CentOS logo, four coloured squares in a star, with a scan line
 * running down it every few seconds that scrambles what it passes.
 *
 * Drawn from devicon's centos-original.svg (MIT): each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it takes the logo's colours, lifted on a dark
 * page where they would sink into it; in a <pre> it is one ink, from devicon's
 * centos-plain.svg (MIT). The logo is a trademark of its owner, shown here to
 * name the distribution.
 */
// C++ port of ascii.rest (MIT), from src/pieces/centos.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0xfefefe, 0x262577, 0x9ccd2c, 0x93237a, 0xefa725, 0xfefefe,
    0x7271a7, 0xbfdf76, 0xb970a9, 0xf5c671, 0xffffff, 0xbebed6,
    0xe1f0c0, 0xdfbdd7, 0xfae5be, 0xfefefe, 0x504ec8, 0x9ccd2c,
    0xa8288b, 0xefa725, 0xfefefe, 0x8d8cdb, 0xbfdf76, 0xc673b4,
    0xf5c671, 0xffffff, 0xcbcaef, 0xe1f0c0, 0xe5bfdc, 0xfae5be,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                          _pq_
                        _p8888q_
                      .d88888888b,
         \qqqqqqqqp-_pqqq.d888 qqqq_ __________
         d8888888P_p88888.d888 88888q_"88888888
         d88888P'q8888888.d888 8888888p."888888
         d888P88q_"888888.d888 888888P_p88P8888
         d8P_q,Y88q_"8888.d888 8888P_p88P_p_"88
         "_p888q,Y88q_"88.d888 88P'p88P'p888q_"
         q8888888q,Y88q_"'d888 P'p88P'p8888888p
      _p:d888888888q,Y88q."88P q88P'p8888888888 q_
    _p88:""""""""""""''""   '  """ """""""""""" 88q,
  _p8888888888888888888q,       q8888888888888888888q,
  '88888888888888888888P'       Y8888888888888888888P"
    '888:\qqqqqqqqqqp-._q. .,  qq,-qqqqqqqqqqqp 88P"
      'O:d888888888P'p88P q88p Y88q,Y8888888888 P"
         d8888888P'p88P'p.d888 q,Y88q,Y8888888P
         _'O888P'p88P'p88.d888 88q,Y88q,Y888P"_
         d8q'Y'p88P'p8888.d888 8888q,Y88q,Y"_88
         d888q88P'p888888.d888 888888q,Y88q8888
         d88888_'88888888.d888 8888888P'_888888
         d8888888_"888888.d888 88888P"_88888888
         "^^^^^^^^^ "^^^^'d888 "^^^" '"""""""""
                      "888888888P"
                        "88888P"
                          "8P"

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                          _pq_
                        _p8888q_
                      _p88888888q_
         \qqqqqqqqqqqp888888888888qqqqqqqqqqqqp
         d8qqqqqqqqq88888888888888888________p8
         d8888888888888888888888888888888888888
         d8888888888888888888888888888888888888
         d8888888888888888888888888888888888888
         d8888888888888888888888888888888888888
        _d8888888888888888888888888888888888888_
      _p8888888888888888888888888888888888888888q_
    _p88888888888888888888P88P88888888888888888888q,
  _p888888888888888888888q, ' _888888888888888888888q,
  "8888888888888888888888P,   )888888888888888888888P"
    "888888888888888888888q88q88888888888888888888P"
      '88888888888888888888888888888888888888888P"
        '88888888888888888888888888888888888888"
         d888888888888888888888888888888888888b
         d888888888888888888888888888888888888b
         d888888888888888888888888888888888888b
         d888888888888888888888888888888888888b
         d888888888888888888888888888888888888b
         """"""""""""8888888888888P""""""""""""
                      "888888888P"
                        "88888P"
                          "8P"

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                          0000
                        00044000
                      000444444000
         00000000000000004444444000000000000000
         00222222220022220444404443000333333300
         00222222002222220444403333330033333330
         00222222022222220444403333333033333330
         00220002220222220444403333303333003330
         00002220022202220444403330033303330030
        0002222222002220204444030033303333333000
      00000222222222002220044400333033333333330000
    000330022222222200002000000330033333333330011000
  0003333333333333333333000 0 001111111111111111111000
  0003333333333333333333000   001111111111111111111000
    000330011111111110001000000440044444444440011000
      00000111111111001110022204444044444444440000
        0001111111001110102222040444404444444000
         00001110011101110222204440444404440000
         00110001110111110222204444404440004440
         00111111011111110222204444444044444440
         00111111001111110222204444440044444440
         00111111110011110222204444004444444440
         00000000000000022222222000000000000000
                      000222222000
                        00022000
                          0000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "centos", "centos", "distros",
        "four coloured squares in a star, scanned now and then",
        56, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {0, 5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &centos_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_centos(const AsciiPieceOptions &options) {
    return make_scan_logo(LOGO, options.scan);
}
} // namespace ascii
