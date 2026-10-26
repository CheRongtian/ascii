// Port of ascii.rest (MIT), from src/pieces/java.ts.
// Original logo drawings use devicon (MIT); trademarks belong to their owners.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0xef2e2f, 0x0077c1, 0xf57778, 0x59a7d7, 0xfac0c1, 0xb3d6ec,
    0xef2e2f, 0x0077c1, 0xf57778, 0x59a7d7, 0xfac0c1, 0xb3d6ec,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                          \
                          dp
                         .8P
                        _p8
                      _p8P'
                    _p88"    __-
                 _p88P"  __pP"
               _p88P'  _p8"'
              \888"  _p8P
              d88'   d88,
              "88,   888q,
               "8p   '8888,
                 Yq,   Y888
                  'Y(   d8"
        .__p=^'        )P'       ^""Oqq,
      q888__________________pp='     "88
       '""""^YYYYYYY^"""""''         q8P
          _p/              _       _p8"
          "888qqqqqqqppq88888=  _)P""
              '""""""""''
           .pq____,..______,
        _,  "88888888888888P"
  ._pd^"''       ''''''             _p
  8888qq_______,......_________ppod^"  _
     '"""""^YYPPPPPPPPPPY^""""' ___pp0"'
         '^^==ooooooooooood00OPP"""'

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                          \
                          dp
                         .8P
                        _p8
                      _p8P'
                    _p88"    __-
                 _p88P"  __pP"
               _p88P'  _p8"'
              \888"  _p8P
              d88'   d88,
              "88,   888q,
               "8p   '8888,
                 Yq,   Y888
                  'Y(   d8"
        .__p=^'        )P'       ^""Oqq,
      q888__________________pp='     "88
       '""""^YYYYYYY^"""""''         q8P
          _p/              _       _p8"
          "888qqqqqqqppq88888=  _)P""
              '""""""""''
           .pq____,..______,
        _,  "88888888888888P"
  ._pd^"''       ''''''             _p
  8888qq_______,......_________ppod^"  _
     '"""""^YYPPPPPPPPPPY^""""' ___pp0"'
         '^^==ooooooooooood00OPP"""'

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                          0
                          00
                         000
                        000
                      00000
                    00000    000
                 000000  00000
               000000  00000
              00000  0000
              0000   0000
              0000   00000
               000   000000
                 000   0000
                  000   000
        1111111        000       1111111
      11111111111111111111111111     111
       111111111111111111111         111
          111              1       1111
          11111111111111111111  11111
              11111111111
           11111111111111111
        11  11111111111111111
  11111111       111111             11
  11111111111111111111111111111111111  1
     11111111111111111111111111 11111111
         111111111111111111111111111

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "java", "java", "logos",
        "the steaming cup, glinting now and then",
        42, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &java_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_java(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
