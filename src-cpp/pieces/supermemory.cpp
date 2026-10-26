/*
 * supermemory: the Supermemory logo, two mirrored strokes, each a bar with an
 * upright and a slanting leg, with a glint crossing it every few seconds.
 *
 * Drawn from Supermemory's own mark, from supermemory.ai: each cell holds the
 * character whose shape best matches the logo's edge through it, and 8 where
 * the logo is solid. On a canvas it is in its ink, and in its light version on
 * a dark page, where the ink would sink into it; in a <pre> it is one ink,
 * from the same drawing. The logo is a trademark of its owner, shown here to
 * name the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/supermemory.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x0b1015, 0x606467, 0xb6b7b9, 0xe8ebef, 0xf0f2f5, 0xf8f9fa,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                                  |8888888:
                                  |8888888:
         .q8q,                    |8888888:
        q88888q,                  |8888888:
      q888888888q,                |8888888:
       "8888888888q,              |8888888:
         "8888888888q,            |8888888:
           "8888888888q,          |8888888:
             "8888888888q,        |8888888:
               "8888888888p,      |8888888:
                 "8888888888p,    |8888888qqqqqqqqqqqqqqqqqqqqqqqp
  _________________"8888888888p   |8888888888888888888888888888888
  888888888888888888888888888888, '8888888888888888888888888888888
  8888888888888888888888888888888, "888888888888888888888888888888
  8888888888888888888888888888888|   "8888888888('''''''''''''''''
  O888888888888888888888888888888|     "8888888888_
                         |8888888|       "8888888888_
                         |8888888|         "8888888888_
                         |8888888|           "8888888888_
                         |8888888|             Y8888888888_
                         |8888888|              'Y8888888888_
                         |8888888|                'Y888888888"
                         |8888888|                  'Y88888"
                         |8888888|                    'Y8"
                         |8888888|
                         |8888888|

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                                  |8888888:
                                  |8888888:
         .q8q,                    |8888888:
        q88888q,                  |8888888:
      q888888888q,                |8888888:
       "8888888888q,              |8888888:
         "8888888888q,            |8888888:
           "8888888888q,          |8888888:
             "8888888888q,        |8888888:
               "8888888888p,      |8888888:
                 "8888888888p,    |8888888qqqqqqqqqqqqqqqqqqqqqqqp
  _________________"8888888888p   |8888888888888888888888888888888
  888888888888888888888888888888, '8888888888888888888888888888888
  8888888888888888888888888888888, "888888888888888888888888888888
  8888888888888888888888888888888|   "8888888888('''''''''''''''''
  O888888888888888888888888888888|     "8888888888_
                         |8888888|       "8888888888_
                         |8888888|         "8888888888_
                         |8888888|           "8888888888_
                         |8888888|             Y8888888888_
                         |8888888|              'Y8888888888_
                         |8888888|                'Y888888888"
                         |8888888|                  'Y88888"
                         |8888888|                    'Y8"
                         |8888888|
                         |8888888|

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                                  000000000
                                  000000000
         00000                    000000000
        00000000                  000000000
      000000000000                000000000
       0000000000000              000000000
         0000000000000            000000000
           0000000000000          000000000
             0000000000000        000000000
               0000000000000      000000000
                 0000000000000    00000000000000000000000000000000
  00000000000000000000000000000   00000000000000000000000000000000
  0000000000000000000000000000000 00000000000000000000000000000000
  00000000000000000000000000000000 0000000000000000000000000000000
  00000000000000000000000000000000   00000000000000000000000000000
  00000000000000000000000000000000     000000000000
                         000000000       000000000000
                         000000000         000000000000
                         000000000           000000000000
                         000000000             000000000000
                         000000000              0000000000000
                         000000000                000000000000
                         000000000                  00000000
                         000000000                    0000
                         000000000
                         000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "supermemory", "supermemory", "companies",
        "the two mirrored strokes, glinting now and then",
        68, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &supermemory_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_supermemory(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
