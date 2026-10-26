/*
 * helixdb: the HelixDB logo, two posts joined by a crossbar, stepped rungs
 * stacked above and below it like a helix seen side on, with a glint crossing
 * it every few seconds.
 *
 * Drawn from HelixDB's own mark, from the navbar of helix-db.com: each cell
 * holds the character whose shape best matches the logo's edge through it, and
 * 8 where the logo is solid. On a canvas it is in its cream on a dark page, as
 * on the site, and in its favicon's near-black on a light one; in a <pre> it is
 * one ink, from the same drawing. The logo is a trademark of its owner, shown
 * here to name the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/helixdb.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x1e1715, 0x6d6867, 0xbcb9b9, 0xebd9af, 0xf2e6cb, 0xf9f4e7,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

  888888888888888888888888                          |888888888
  888888888PPPPPP"                                  |888888888
  888888888|                                        |888888888
  888888888888888888888888888888'                   |888888888
  888888888PPPPPPPPPPPP\                            |888888888
  888888888|                                        |888888888
  8888888888qqqqqqqqqqqqqqqqqqqqqqqqqqqqp           |888888888
  888888888888888888888888888888|                   |888888888
  888888888|                                        |888888888
  888888888qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq/  |88888888P
    "888888888888888888888888888888888888""""""""'  |88888P"
       "888|                                        |88P"
          "\________________________________________/"
           d8888888888888888888888888888888888888888b
           d8888888888888888888888888888888888888888b
           d8888888888888888888888888888888888888888b
           d8888888888888888888888888888888888888888b
          _/""""""""""""""""""""""""""""""""""""""""\_
       _p88|                                        |88q_
    _p88888|  .________q8888888888888888888888888888888888q_
  p88888888|  'PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP888888888q
  888888888|                                        |888888888
  888888888|                   .qqqqqqqqqqqqqqqqqqqqp888888888
  888888888|           888888888888888888888888888888888888888
  888888888|                                        |888888888
  888888888|                            .qqqqqqqqqqqp888888888
  888888888|                    qqqqqqqq8888888888888888888888
  888888888|                                        |888888888
  888888888|                                  .qqqqqp888888888
  888888888|                          qqqqqqqqq888888888888888

)ASCII_LOGO";

constexpr auto &ART = MONO;

constexpr char16_t INK[] = uR"ASCII_LOGO(

  000000000000000000000000                          0000000000
  0000000000000000                                  0000000000
  0000000000                                        0000000000
  0000000000000000000000000000000                   0000000000
  0000000000000000000000                            0000000000
  0000000000                                        0000000000
  000000000000000000000000000000000000000           0000000000
  0000000000000000000000000000000                   0000000000
  0000000000                                        0000000000
  000000000000000000000000000000000000000000000000  0000000000
    0000000000000000000000000000000000000000000000  00000000
       00000                                        00000
          00000000000000000000000000000000000000000000
           000000000000000000000000000000000000000000
           000000000000000000000000000000000000000000
           000000000000000000000000000000000000000000
           000000000000000000000000000000000000000000
          00000000000000000000000000000000000000000000
       00000                                        00000
    00000000  0000000000000000000000000000000000000000000000
  0000000000  000000000000000000000000000000000000000000000000
  0000000000                                        0000000000
  0000000000                   0000000000000000000000000000000
  0000000000           000000000000000000000000000000000000000
  0000000000                                        0000000000
  0000000000                            0000000000000000000000
  0000000000                    000000000000000000000000000000
  0000000000                                        0000000000
  0000000000                                  0000000000000000
  0000000000                          000000000000000000000000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "helixdb", "helixdb", "companies",
        "the stepped rungs of a helix between two posts, glinting now and then",
        64, 32, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &helixdb_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_helixdb(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
