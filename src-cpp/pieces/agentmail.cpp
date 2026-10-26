/*
 * agentmail: the AgentMail logo, an agent in a brimmed hat with the collar
 * turned up, with a glint crossing it every few seconds.
 *
 * Drawn from the agent in AgentMail's own logo, from agentmail.to: each cell
 * holds the character whose shape best matches the logo's edge through it, and
 * 8 where the logo is solid. On a canvas it is black, and a light grey on a
 * dark page, where black would sink into it; in a <pre> it is one ink, from
 * the same drawing. The logo is a trademark of its owner, shown here to name
 * the company.
 */
// C++ port of ascii.rest (MIT), from src/pieces/agentmail.ts.
#include "../logo.hpp"

namespace ascii {
namespace {
constexpr uint32_t PALETTE[] = {
    0x000000, 0x595959, 0xb3b3b3, 0xe8ebef, 0xf0f2f5, 0xf8f9fa,
};

constexpr char16_t MONO[] = uR"ASCII_LOGO(

                q8qq__               _pp8q
               |8888888q__       _pp888888,
               q88888888888qqqpp8888888888p
              .8888888888888888888888888888,
              q8888888888888888888888888888|
              "Y8888888888888888888888888PP"
      __,           '"""^YPP88PPPP"""'           .__
     q88888qqqq____                    ____pppp88888q,
   _p888888888888888888qqqqqqqqpppq888888888888888888q,
  _8888888888888888888888888888888888888888888888888888,
  88888888888888888888888888888888888888888888888888888P
     '"""YY88888888888888888888888888888888888PPY"""'
                ''""""""^YYPPPPPY^""""""''

               qqqq_     ________     _ppp(
               |88888qqp8888888888qqp88888|
                88888888888888888888888888
                8888888888888888888888888P
             ,  "888888888888888888888888"  _
            '8q_  "8888888888888888888P"  _p8
             '888_, "Y88888888888888P' .p88P'
              '8888q, '"8888888888"  _p888P'
               '88888q_  "88888P"  _p8888P
                '888888q_  '""'  _p88888P
                  888888P'      "888888P
                   88P"            "Y8P

)ASCII_LOGO";

constexpr char16_t ART[] = uR"ASCII_LOGO(

                q8qq__               _pp8q
               |8888888q__       _pp888888,
               q88888888888qqqpp8888888888p
              .8888888888888888888888888888,
              q8888888888888888888888888888|
              "Y8888888888888888888888888PP"
      __,           '"""^YPP88PPPP"""'           .__
     q88888qqqq____                    ____pppp88888q,
   _p888888888888888888qqqqqqqqpppq888888888888888888q,
  _8888888888888888888888888888888888888888888888888888,
  88888888888888888888888888888888888888888888888888888P
     '"""YY88888888888888888888888888888888888PPY"""'
                ''""""""^YYPPPPPY^""""""''

               qqqq_     ________     _ppp(
               |88888qqp8888888888qqp88888|
                88888888888888888888888888
                8888888888888888888888888P
             ,  "888888888888888888888888"  _
            '8q_  "8888888888888888888P"  _p8
             '888_, "Y88888888888888P' .p88P'
              '8888q, '"8888888888"  _p888P'
               '88888q_  "88888P"  _p8888P
                '888888q_  '""'  _p88888P
                  888888P'      "888888P
                   88P"            "Y8P

)ASCII_LOGO";

constexpr char16_t INK[] = uR"ASCII_LOGO(

                000000               00000
               00000000000       0000000000
               0000000000000000000000000000
              000000000000000000000000000000
              000000000000000000000000000000
              000000000000000000000000000000
      000           000000000000000000           000
     00000000000000                    000000000000000
   0000000000000000000000000000000000000000000000000000
  000000000000000000000000000000000000000000000000000000
  000000000000000000000000000000000000000000000000000000
     000000000000000000000000000000000000000000000000
                00000000000000000000000000

               00000     00000000     00000
               0000000000000000000000000000
                00000000000000000000000000
                00000000000000000000000000
             0  00000000000000000000000000  0
            0000  0000000000000000000000  000
             000000 000000000000000000 000000
              0000000 0000000000000  0000000
               00000000  00000000  0000000
                000000000  0000  00000000
                  00000000      00000000
                   0000            0000

)ASCII_LOGO";

const LogoDefinition LOGO = {
    {
        "agentmail", "agentmail", "companies",
        "the agent in a brimmed hat, glinting now and then",
        58, 28, 30, 2, 0, nullptr, PALETTE,
        sizeof(PALETTE) / sizeof(PALETTE[0]), {5, 0}
    },
    MONO, ART, INK
};
} // namespace

const AsciiPieceMeta &agentmail_meta() { return LOGO.meta; }
std::unique_ptr<Piece> make_agentmail(const AsciiPieceOptions &options) {
    return make_logo(LOGO, options.shine);
}
} // namespace ascii
