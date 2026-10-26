#include "catalog.hpp"
#include <iterator>
#include <stdexcept>
namespace ascii {
namespace {
constexpr uint32_t palette_a0[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_agentmail[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_almalinux[] = {0xff4546,0x0068d8,0x85d82e,0xffc911,0x22c1ff,0xff8687,0x599de6,0xb0e677,0xffdc64,0x6fd7ff,0xffc7c8,0xb3d2f3,0xdaf3c0,0xffefb8,0xbdecff,0xff4546,0x0068d8,0x85d82e,0xffc911,0x22c1ff,0xff8687,0x599de6,0xb0e677,0xffdc64,0x6fd7ff,0xffc7c8,0xb3d2f3,0xdaf3c0,0xffefb8,0xbdecff};
constexpr uint32_t palette_alpine_dawn[] = {0x0e1430,0x151d40,0x1d2752,0x263365,0x314179,0x3e508c,0x4f62a0,0x6577b3,0x8090c4,0x9eaad3,0xbec6e2,0x4b3e6c,0x6a5482,0x8c6a92,0xb0829c,0xcf96a4,0xe8a9a8,0xf5bcaa,0xffd0b0,0xffe2c2,0xfff1e0,0xfdfaf6,0xffc887,0xf7a965,0xf2a08f,0xe58a87,0xf8b59d,0xd97b7e,0x7a4c4a,0xa5654f,0x523a4a,0x1b2034,0x262c45,0x363c59,0x0a1418,0x0f1f24,0x162a2f,0x203a3c,0xa3a7c6,0xc6c3d8,0xe0d4dc,0x5a4f7e,0x7b6c9c,0x9a8cb6,0xb8a8c8,0xd8bccb};
constexpr uint32_t palette_alpine_linux[] = {0x0d597f,0x6293ac,0xb6cdd9,0x0f6692,0x639cb8,0xb7d1de};
constexpr uint32_t palette_amer_fort[] = {0x0a1230,0x101a40,0x16234f,0x1e2e62,0x283c78,0x364d8e,0x4a5f9f,0x6a7fb8,0xc9d4ee,0xeef1f8,0xfff6dc,0x3a220f,0x5a3415,0x7d4a1c,0xa06426,0xc27f32,0xdc9c44,0xecb85c,0xf6d07e,0xffe4a6,0xfff1cc,0x0b0f1c,0x121829,0x1a2236,0x2a2228,0x4a3a2c,0x4c6e34,0x6f9448,0x8fbf5a,0xb4dc7c,0xa08a62};
constexpr uint32_t palette_apple[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_arch_linux[] = {0x1894d4,0x69b9e3,0xbadff2,0x1894d4,0x69b9e3,0xbadff2};
constexpr uint32_t palette_aurora_fjord[] = {0x0b1322,0x101b30,0x16243f,0x1e3050,0x2a3f63,0x0e3a33,0x11573f,0x167a4c,0x22a05c,0x3ccb73,0x7cf0a0,0xc8ffdc,0x0f5f5c,0x16877f,0x2cb5a6,0x7fe6d6,0x2a1f52,0x432b78,0x6a3c9f,0x9558c6,0xc48ae4,0x363a72,0x4f5596,0x1b4f63,0x1a2236,0x283350,0x3b4a6e,0x566a92,0x7d91b8,0xa9bad9,0xd6e0f2,0x9fc9cf,0x0f1a1c,0x173128,0x24493a,0x4a1517,0x7c2420,0xb23a2a,0xd65aa8,0xffd27c,0xffb04a,0xfff2c4,0xeef3ff};
constexpr uint32_t palette_autumn[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_black_prism[] = {0x161616,0x242424,0x363636,0x4a4a4a,0x636363,0x7e7e7e,0x9c9c9c,0xbcbcbc,0xdcdcdc,0xffffff,0xff2a3c,0x9a1c28,0xff7417,0xa04a10,0xffdf2e,0xa08c1c,0x38f56a,0x1f9a42,0x24dcff,0x16879e,0x3a64ff,0x233f9e,0x9a4cff,0x5f2f9e,0xfff4c8,0xd4f6ff,0xffd2d6};
constexpr uint32_t palette_c[] = {0x659ad3,0xffffff,0x03599c,0x9bbde2,0xffffff,0x5b93bf,0xd1e1f2,0xffffff,0xb3cde1,0x659ad3,0xffffff,0x0362ab,0x9bbde2,0xffffff,0x5b99c8,0xd1e1f2,0xffffff,0xb3d0e6};
constexpr uint32_t palette_centos[] = {0xfefefe,0x262577,0x9ccd2c,0x93237a,0xefa725,0xfefefe,0x7271a7,0xbfdf76,0xb970a9,0xf5c671,0xffffff,0xbebed6,0xe1f0c0,0xdfbdd7,0xfae5be,0xfefefe,0x504ec8,0x9ccd2c,0xa8288b,0xefa725,0xfefefe,0x8d8cdb,0xbfdf76,0xc673b4,0xf5c671,0xffffff,0xcbcaef,0xe1f0c0,0xe5bfdc,0xfae5be};
constexpr uint32_t palette_clojure[] = {0xffffff,0x5881d8,0x91dc48,0x90b4fe,0x63b132,0xffffff,0x92ade6,0xb8e888,0xb7cefe,0x9acc7a,0xffffff,0xcdd9f3,0xdef5c8,0xdee9ff,0xd0e8c2,0xffffff,0x5881d8,0x91dc48,0x90b4fe,0x63b132,0xffffff,0x92ade6,0xb8e888,0xb7cefe,0x9acc7a,0xffffff,0xcdd9f3,0xdef5c8,0xdee9ff,0xd0e8c2};
constexpr uint32_t palette_cloud_sea[] = {0x0e0e0f,0x161617,0x1f1f20,0x2a2a2b,0x353536,0x404041,0x545456,0x6c6c6e,0x8a8a8c,0xa39a94,0x2c211c,0x43302a,0x5e3c2a,0x7c4826,0x9c521f,0xc2601c,0xdc6f1e,0xf38020,0xf6922e,0xfaae40,0xfbbd5c,0xfccb7c,0xfdda9e,0xfeeac4,0xfff6e6};
constexpr uint32_t palette_cloudflare[] = {0xf38020,0xf7ac6e,0xfbd9bc,0xf38020,0xf7ac6e,0xfbd9bc};
constexpr uint32_t palette_coderabbit[] = {0xff570a,0xff9260,0xffcdb6,0xff570a,0xff9260,0xffcdb6};
constexpr uint32_t palette_collabute[] = {0xd5d5d5,0xaaaaaa,0x808080,0x555555,0x2a2a2a,0x000000,0xe4e4e4,0xc8c8c8,0xacacac,0x919191,0x757575,0x595959,0xf2f2f2,0xe6e6e6,0xd9d9d9,0xcccccc,0xbfbfbf,0xb3b3b3,0x2b2b2b,0x555555,0x808080,0xaaaaaa,0xd5d5d5,0xffffff,0x757575,0x919191,0xacacac,0xc8c8c8,0xe4e4e4,0xffffff,0xbfbfbf,0xcccccc,0xd9d9d9,0xe6e6e6,0xf2f2f2,0xffffff};
constexpr uint32_t palette_command_city[] = {0x101012,0x17171a,0x1f1f23,0x29292e,0x34343a,0x414148,0x505058,0x62626a,0x76767e,0x8c8c93,0xa4a4aa,0xbdbdc2,0xd6d6da,0xececef,0xffffff,0x3a2a1c,0x5a3c20,0x7e5224,0xa86a2a,0xcf8433,0xee9e45,0xffb860,0xffcf88,0xffe4b4,0xfff3dc,0xc9d3e6,0x8d99b0,0xff7a3a,0xc0522a};
constexpr uint32_t palette_command_code[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_cpp[] = {0x659ad2,0xffffff,0x004482,0x00599c,0x9bbde2,0xffffff,0x5985ae,0x5993bf,0xd1e1f2,0xffffff,0xb3c7da,0xb3cde1,0x659ad2,0xffffff,0x005fb5,0x0062ab,0x9bbde2,0xffffff,0x5997cf,0x5999c8,0xd1e1f2,0xffffff,0xb3cfe9,0xb3d0e6};
constexpr uint32_t palette_csharp[] = {0x9b4f96,0xffffff,0x68217a,0xbe8dbb,0xffffff,0x9d6fa9,0xe1cae0,0xffffff,0xd2bcd7,0x9b4f96,0xffffff,0x942fae,0xbe8dbb,0xffffff,0xb978ca,0xe1cae0,0xffffff,0xdfc1e7};
constexpr uint32_t palette_css[] = {0x1572b6,0xf6f7f7,0x33a9dc,0x67a3d0,0xf9fafa,0x7ac7e8,0xb9d5e9,0xfcfdfd,0xc2e5f5,0x1572b6,0xf6f7f7,0x33a9dc,0x67a3d0,0xf9fafa,0x7ac7e8,0xb9d5e9,0xfcfdfd,0xc2e5f5};
constexpr uint32_t palette_dart[] = {0x00c4b3,0x0075c9,0x00a8e1,0x22d3c5,0x59d9ce,0x59a5dc,0x59c6ec,0x6fe2d9,0xb3ede8,0xb3d6ef,0xb3e5f6,0xbdf2ee,0x00c4b3,0x0075c9,0x00a8e1,0x22d3c5,0x59d9ce,0x59a5dc,0x59c6ec,0x6fe2d9,0xb3ede8,0xb3d6ef,0xb3e5f6,0xbdf2ee};
constexpr uint32_t palette_databuddy[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_debian[] = {0xa80030,0xc65978,0xe5b3c1,0xc20037,0xd7597d,0xedb3c3};
constexpr uint32_t palette_deep_reef[] = {0x114a66,0x165c78,0x1d708a,0x27869b,0x3a9fae,0x58b9c0,0x80d2d2,0xb0e8e2,0xe2fbf5,0x5e6b62,0x87927f,0xaab39a,0xcfd2b4,0x38461a,0x5a6420,0x857f2a,0xb0a03c,0xd6c25a,0xefe08e,0x8e3355,0xc4506a,0xe0786e,0xf0a070,0x6a3a78,0x9a5aa8,0xc88ad0,0x6f8a98,0x9fb8c6,0xcfe3ea};
constexpr uint32_t palette_deepin[] = {0x007cff,0x59aaff,0xb3d8ff,0x007cff,0x59aaff,0xb3d8ff};
constexpr uint32_t palette_desert_night[] = {0x0a1024,0x101830,0x16213f,0x1e2b50,0x283864,0x34477a,0x45598f,0x5a6fa6,0x7488bd,0x93a5d2,0xb6c3e4,0xd8e0f2,0xf4f6fb,0xfff3dc,0xffe2b4,0xf5c98e,0xe2a86e,0xc4864f,0x9c6440,0x74492f,0x2a2230,0x3d2f3a,0x56404a,0x735358,0x946a62,0xb6836c,0x4a3b48,0x6b5562,0x8a6f7a,0xa88590,0xc9a3a3,0xe2bfb4,0x2a2448,0x3d3466,0x57498a,0x7a68a8,0xffd8a8,0xcfe0ff,0xa9c4ff,0xff9a52,0xe07a3e,0x0d0f1a,0x151827};
constexpr uint32_t palette_earthrise[] = {0x18181b,0x232326,0x303033,0x414143,0x555556,0x6b6a69,0x83817d,0x9c9993,0xb6b2aa,0xcfcac1,0xe6e1d8,0xf7f4ee,0x0c1120,0x131a2e,0x1b2540,0x262f4a,0xdfe9ff,0x0a2259,0x0f2f72,0x15408c,0x1d53a6,0x2a69bf,0x4386d3,0x6eaeea,0xa8d3f6,0xe8f0fa,0xc2d0e3,0x8b9fbc,0x2f4a26,0x3b5a2c,0x5b7238,0x7a9150,0x77783f,0x8f8550,0xa8955e,0x6b5634,0xb9774a,0x8a4838};
constexpr uint32_t palette_edge_orbit[] = {0x080c18,0x0d1529,0x152142,0x1e2f5c,0x2b4479,0x40609c,0x7d9cd2,0xb8cdee,0x181d27,0x252b37,0x404041,0x5c6578,0x2e1608,0x4f2410,0x7a3812,0xa94f16,0xd0661a,0xf38020,0xfaae40,0x3d2a0e,0x6b4a16,0xa57524,0xd49434,0xffd68a,0xffe8c0,0xfff6e8,0xffffff};
constexpr uint32_t palette_elementary_os[] = {0x64baff,0x9ad2ff,0xd1eaff,0x64baff,0x9ad2ff,0xd1eaff};
constexpr uint32_t palette_elixir[] = {0x9c88ad,0xf4f3f4,0x664a78,0xcec5d7,0x816a92,0x46265c,0xafa2b9,0xbfb2ca,0xf8f7f8,0x9c89a7,0xdfd9e5,0xad9eb8,0x877295,0xcbc3d2,0xe1dbe6,0xfcfbfc,0xd1c9d7,0xf0eef3,0xd9d2de,0xc8bece,0xe7e3ea,0x9c88ad,0xf4f3f4,0x715285,0xcec5d7,0x816a92,0x7d44a4,0xafa2b9,0xbfb2ca,0xf8f7f8,0xa38fb0,0xdfd9e5,0xad9eb8,0xab85c4,0xcbc3d2,0xe1dbe6,0xfcfbfc,0xd4cbda,0xf0eef3,0xd9d2de,0xd8c7e4,0xe7e3ea};
constexpr uint32_t palette_elm[] = {0xefa500,0x8dd737,0x60b5cc,0x34495e,0xf5c559,0xb5e57d,0x98cfde,0x7b8996,0xfae4b3,0xddf3c3,0xcfe9f0,0xc2c8cf,0xefa500,0x8dd737,0x60b5cc,0x45617d,0xf5c559,0xb5e57d,0x98cfde,0x8698ab,0xfae4b3,0xddf3c3,0xcfe9f0,0xc7d0d8};
constexpr uint32_t palette_endeavouros[] = {0x7f7fff,0xacacff,0xd9d9ff,0x7f7fff,0xacacff,0xd9d9ff};
constexpr uint32_t palette_erlang[] = {0xad0534,0xca5d7b,0xe6b4c2,0xbc0538,0xd35d7e,0xebb4c3};
constexpr uint32_t palette_fedora[] = {0x294172,0xffffff,0x3c6eb4,0x7484a3,0xffffff,0x80a1ce,0xbfc6d5,0xffffff,0xc5d4e9,0x3b5da3,0xffffff,0x3c6eb4,0x8096c3,0xffffff,0x80a1ce,0xc4cee3,0xffffff,0xc5d4e9};
constexpr uint32_t palette_gangaur_ghat[] = {0x0a1230,0x0f1a40,0x152352,0x1c2e66,0x253a7a,0x30498e,0x3e5aa2,0x0c0f1e,0x161a30,0x232842,0x4a5a86,0x6474a0,0x8291b8,0xa3afcf,0xc6cee3,0xe6ebf5,0xfff6dc,0xffe6a8,0xffd277,0xffb84a,0xf29a34,0xd8782a,0xa85a26,0x7a4224,0xe8c48c,0xc89a62,0x9a7048,0x6a4c38,0x3e2c2a,0xdfe6ff};
constexpr uint32_t palette_gentoo[] = {0x9d95de,0xbfbaea,0xe2dff5,0x9d95de,0xbfbaea,0xe2dff5};
constexpr uint32_t palette_go[] = {0x00b0db,0x59cce8,0xb3e7f4,0x00b0db,0x59cce8,0xb3e7f4};
constexpr uint32_t palette_green_storm[] = {0x1c1c1c,0x242424,0x2e2e2e,0x3a3a3a,0x4a4a4a,0x5e5e5e,0x777777,0x939393,0xb4b4b4,0xd6d6d6,0x1d2a24,0x243a30,0x2d4d3e,0x3a6450,0x4d8066,0x67a084,0x0f3324,0x14472f,0x1a5e3e,0x22784f,0x2c9663,0x36b578,0x3ecf8e,0x65dba5,0x8fe6be,0xbdf2d8,0xe6fbf1,0xffffff};
constexpr uint32_t palette_greptile[] = {0x11a96f,0x64c7a1,0xb8e5d4,0x28e99f,0x73f1c1,0xbff8e2};
constexpr uint32_t palette_haskell[] = {0x463b63,0x5e5187,0x904f8c,0x87809a,0x968eb1,0xb78db4,0xc8c4d0,0xcfcbdb,0xdecadd,0x665690,0x655791,0x904f8c,0x9c91b7,0x9b92b8,0xb78db4,0xd1ccde,0xd1cdde,0xdecadd};
constexpr uint32_t palette_helium[] = {0x3450d1,0x7b8de1,0xc2cbf1,0x3854d2,0x7e90e2,0xc3ccf2};
constexpr uint32_t palette_helixdb[] = {0x1e1715,0x6d6867,0xbcb9b9,0xebd9af,0xf2e6cb,0xf9f4e7};
constexpr uint32_t palette_helmcode[] = {0x4934e1,0x897beb,0xc8c2f6,0x8071ea,0xaca3f1,0xd9d4f9};
constexpr uint32_t palette_html[] = {0xe44d26,0xffffff,0xebebea,0xf1652a,0xed8b72,0xffffff,0xf2f2f1,0xf69b75,0xf7cabe,0xffffff,0xf9f9f9,0xfbd1bf,0xe44d26,0xffffff,0xebebea,0xf1652a,0xed8b72,0xffffff,0xf2f2f1,0xf69b75,0xf7cabe,0xffffff,0xf9f9f9,0xfbd1bf};
constexpr uint32_t palette_jal_mahal[] = {0x3e4a6b,0x56628a,0x7180a6,0x8e9cc0,0xaab6d4,0xc6cfe3,0xe2e7f1,0x6b4a66,0x8a5f7c,0xa87891,0xc895a6,0xe2b4bd,0xf2d0d0,0xfff3d6,0xffe3a6,0xf6c87a,0xe8a865,0xc98552,0x5a3e3a,0x7d5848,0xa47a5e,0xc99d78,0xe4c29c,0x2a2f45,0x3a3550,0x4d4660,0x4a3226,0x6e4a32,0xfbfaf7};
constexpr uint32_t palette_java[] = {0xef2e2f,0x0077c1,0xf57778,0x59a7d7,0xfac0c1,0xb3d6ec,0xef2e2f,0x0077c1,0xf57778,0x59a7d7,0xfac0c1,0xb3d6ec};
constexpr uint32_t palette_javascript[] = {0xf5df50,0x323330,0xf9ea8d,0x7a7a78,0xfcf5cb,0xc2c2c1,0xf5df50,0x323330,0xf9ea8d,0x7a7a78,0xfcf5cb,0xc2c2c1};
constexpr uint32_t palette_julia[] = {0xeeeeee,0xcb3c33,0x389826,0x9558b2,0xf4f4f4,0xdd807a,0x7ebc72,0xba92cd,0xfafafa,0xefc5c2,0xc3e0be,0xdfcde8,0xeeeeee,0xcb3c33,0x389826,0x9558b2,0xf4f4f4,0xdd807a,0x7ebc72,0xba92cd,0xfafafa,0xefc5c2,0xc3e0be,0xdfcde8};
constexpr uint32_t palette_jungle_falls[] = {0x0d2616,0x173d1f,0x225a26,0x2f7a2c,0x45983a,0x6bb544,0x9ccf55,0xc9e27a,0x2a3436,0x465256,0x6c7676,0x9aa29c,0xf7fcfc,0xd6eef0,0xa8dcdf,0x6cc5c6,0x35aeb0,0x1d8b92,0x11636c,0xc9e6ef,0x93c9e2,0xfff1c2,0xf2cf6b,0xe5483b,0xf08c34,0x3d84d6,0x8b6bd0,0xa92d25,0x5b8f7a,0x8fb8a0,0x5e4a36};
constexpr uint32_t palette_kali_linux[] = {0x287aff,0x73a9ff,0xbfd7ff,0x287aff,0x73a9ff,0xbfd7ff};
constexpr uint32_t palette_keiki[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_kite_festival[] = {0x6a5af0,0x8a78d0,0xc08cc8,0xf0a0c0,0xffab7a,0xffc25e,0xffdc8c,0xfff6dc,0x9c7ae0,0x7a62c4,0xb89ae8,0xff5f58,0xff8478,0xffaa9c,0xffd6c4,0xff2f7d,0xff8fc4,0xffd400,0x22c55e,0xa3e635,0xe8102a,0x1f6fff,0x5ec8ff,0x8b3dff,0xffffff,0xff7a00};
constexpr uint32_t palette_kotlin[] = {0xc01ae1,0x963df5,0xd124b1,0xac2aec,0xdb3683,0xd66aec,0xbb81f9,0xe171cc,0xc975f3,0xe87cae,0xecbaf6,0xe0c5fc,0xf1bde8,0xe6bff9,0xf4c3da,0xc01ae1,0x963df5,0xd124b1,0xac2aec,0xdb3683,0xd66aec,0xbb81f9,0xe171cc,0xc975f3,0xe87cae,0xecbaf6,0xe0c5fc,0xf1bde8,0xe6bff9,0xf4c3da};
constexpr uint32_t palette_kyoto_dusk[] = {0x1c1d4a,0x262759,0x33316b,0x433d7c,0x574a8c,0x6e5a9a,0x8a5a92,0xa8668f,0xc4748f,0xdb8a95,0xec9f9c,0xf6b8a8,0xfbd0b8,0xfff1d8,0xfffaf0,0x7e5f9e,0xf9d3dc,0xf2b2c4,0xe28fab,0xc66e92,0x9c5279,0x74405f,0xffd9a0,0xffbb6a,0xf29a4a,0xd0763a,0xa35a35,0x2a2240,0x3a2c50,0x4a3860,0x5b4f86,0x7a6aa0,0x2c3a3a,0x3d4c46,0x56604f,0x9a6aa0,0xb47ea6,0x4a3038,0x6a4448,0x2b3a6a,0x3e4f86};
constexpr uint32_t palette_lake_pichola[] = {0x1c1028,0x2a1840,0x3d2058,0x55286a,0x6e3178,0x8a3c7c,0xa8477a,0xc85a6e,0xe0704e,0xf08a40,0xf8a840,0xffc65a,0xffe08a,0xfff2c8,0xfffaf0,0x2b1c40,0x3c2852,0x4f3666,0x6a4a7e,0x9a7aa0,0xf6e6d0,0xe8cdb0,0xd4a888,0xb88a78,0x8e6a6a,0x6a4a58,0xc88a9a,0xffd070,0xff9a3c,0xb8323a,0x140c1c};
constexpr uint32_t palette_lantern_lake[] = {0x141b30,0x1c2a52,0x22346a,0x2a4080,0x324c96,0x3c58a8,0x33306e,0x433c88,0x54449a,0x62407e,0x7a4a88,0x934e86,0xa4546e,0xbc5e66,0xd06a62,0xdc7650,0xe88444,0xf09238,0xd4581a,0xea6c1e,0xf78226,0xff9530,0xffa83c,0xffbb4e,0xffcc66,0xffdc86,0xffe8a8,0xfff3cf,0xfffbec,0xb8341a,0xd84420,0x2f3748,0x4f586c,0x5e5a7e,0x7a6a8c,0x5a3220,0x7c4628,0x4a5578,0x5d6a92,0x7381ab,0xc4cdec,0xe4e9fb,0xffffff};
constexpr uint32_t palette_lava_wall[] = {0x16121a,0x221c22,0x33282a,0x4a3a32,0x6e5442,0x9a7658,0x404041,0x707074,0xa9a9ae,0xe8e4de,0x5c1616,0x9e211d,0xdc362b,0xff6a52,0x7c3510,0xc4570f,0xf38020,0xfaae40,0xffd27c,0xfff1c8,0xe6c02a,0x0f3a3c,0x18786f,0x43d6c0,0x2f1842,0x6b2f92,0xb45ddc,0xe2508c,0x1d3768,0x3f80d2};
constexpr uint32_t palette_linux_mint[] = {0xfcfcfc,0x69b53f,0xfdfdfd,0x9ecf82,0xfefefe,0xd2e9c5,0xfcfcfc,0x69b53f,0xfdfdfd,0x9ecf82,0xfefefe,0xd2e9c5};
constexpr uint32_t palette_lua[] = {0x818186,0xffffff,0x000080,0xadadb0,0xffffff,0x5959ac,0xd9d9db,0xffffff,0xb3b3d9,0x818186,0xffffff,0x3e3eff,0xadadb0,0xffffff,0x8282ff,0xd9d9db,0xffffff,0xc5c5ff};
constexpr uint32_t palette_manjaro[] = {0x35bfa4,0x7cd5c4,0xc2ece4,0x35bfa4,0x7cd5c4,0xc2ece4};
constexpr uint32_t palette_marine_drive[] = {0x18213f,0x202c55,0x2a396d,0x374a88,0x4a60a2,0x6880bc,0x2c2140,0x3f2d58,0x56396b,0x6e4a7a,0x8a5f88,0x5a2e3c,0x7b404c,0x9e5858,0x55300f,0x7d4515,0xa95c1b,0xd27a24,0xee9631,0xffb246,0xffcd6a,0xffe39c,0xfff2cf,0xffffff,0xdce6ff,0xa9bde8,0x6a181b,0xb22a28,0xff4b3e,0x132c38,0x1c3f4f,0x2a5868,0x29283a,0x3c3a4c,0x565266,0x79738a};
constexpr uint32_t palette_mintlify[] = {0x12a670,0x65c5a2,0xb8e4d4,0x18e299,0x69ecbd,0xbaf6e0};
constexpr uint32_t palette_misty_forest[] = {0xfffbea,0xfff0c8,0xfbe2a6,0xf2c97e,0xe0a95e,0xb9834a,0xe4ebe6,0xcbe0dc,0xa8d2d0,0x86c0c2,0x68a7ac,0x4f8c93,0x3b7078,0x557570,0x456761,0x365952,0x2a4a44,0x1f3c37,0x172f2b,0x11231f,0xa4a35a,0x8a8f4c,0x6d7440,0x4d5530,0x7a5a3a,0x5b4532,0xa9c3cc,0x8eadb8,0x6f93a2,0x53798a,0x3d6172,0x2b4a5a};
constexpr uint32_t palette_night_coast[] = {0x15203d,0x1b2a50,0x223463,0x2b4077,0x364e8b,0x445f9f,0x5874b2,0x7089c0,0x8a9cc4,0xa3b1cf,0xbec9dc,0xd8dfea,0xeef1f6,0xf7f8fc,0xffe9ae,0xffd27c,0xf3a64a,0xc46c2d,0x121c1b,0x182724,0x203530,0x2c473d,0x3c5c4c,0x232a36,0x363e4c,0x555d6c,0x2a3550,0x3a4868,0x9c4136,0xff5d4d};
constexpr uint32_t palette_night_highway[] = {0x0d1226,0x141b38,0x1c264c,0x263463,0x34457a,0x4a5d96,0x6b7fb3,0x9aa8d0,0xcdd5ea,0xf4f6fc,0x2a1d45,0x43285e,0x643474,0x8a4683,0xb85a78,0xe0766a,0xf59a5c,0xffc477,0xffe6b0,0x16161e,0x24232d,0x383744,0x55535f,0x7a1622,0xd42a32,0xff6a5c,0xd9b44a,0x3fd6c8,0xfff4d8,0x3a2a2a};
constexpr uint32_t palette_nixos[] = {0x5277c3,0x81bfea,0x8fa7d8,0xadd5f1,0xcbd6ed,0xd9ecf9,0x5277c3,0x81bfea,0x8fa7d8,0xadd5f1,0xcbd6ed,0xd9ecf9};
constexpr uint32_t palette_ocaml[] = {0xee760a,0xf4a660,0xfad6b6,0xee760a,0xf4a660,0xfad6b6};
constexpr uint32_t palette_ocean_sunset[] = {0x140f2c,0x1e1640,0x2b1c52,0x3d2266,0x552a74,0x6e2c78,0x90327c,0xb23c7c,0xd24f7a,0xea6a78,0xc2306a,0xff5d8f,0xff8a9a,0x7a2456,0xf05d5e,0xf2804f,0xf99a43,0xffb44a,0xffcd62,0xffe39a,0xfff5d8,0xa8323c,0xd2453c,0xe8603e,0x2f1a3e,0x47234f,0x63305c,0x874266,0xac5b70,0xff9e86,0xffc4a2,0xffdcc0,0x0e1230,0x171a46,0x232059,0x33286a,0x4a2f78,0x1c2a5c,0x2e4078,0x7d3f8f,0xa24f98,0xc8649e,0xde8bb5};
constexpr uint32_t palette_omarchy[] = {0x6ea235,0xa1c37c,0xd4e3c2,0x9ece6a,0xc0df9e,0xe2f0d2};
constexpr uint32_t palette_opensuse[] = {0x76be26,0xa6d572,0xd6ecbe,0x76be26,0xa6d572,0xd6ecbe};
constexpr uint32_t palette_orchid[] = {0x08152e,0x5e6777,0xb5b9c0,0xfcfcfd,0xfdfdfe,0xfefefe};
constexpr uint32_t palette_perl[] = {0x212178,0xfefefe,0x6f6fa7,0xfefefe,0xbcbcd7,0xffffff,0x4f4fcf,0xfefefe,0x8d8de0,0xfefefe,0xcacaf1,0xffffff};
constexpr uint32_t palette_php[] = {0xabafd0,0x000000,0x494d88,0xfefefe,0x777bb3,0x65699d,0xc8cbe0,0x595959,0x898bb2,0xfefefe,0xa7a9ce,0x9b9ebf,0xe6e7f1,0xb3b3b3,0xc8cadb,0xffffff,0xd6d7e8,0xd1d2e2,0xabafd0,0x000000,0x54589c,0xfefefe,0x777bb3,0x65699d,0xc8cbe0,0x595959,0x9092bf,0xfefefe,0xa7a9ce,0x9b9ebf,0xe6e7f1,0xb3b3b3,0xcccde1,0xffffff,0xd6d7e8,0xd1d2e2};
constexpr uint32_t palette_planet_scale[] = {0x101010,0x181818,0x202020,0x282828,0x303030,0x3a3a3a,0x444444,0x4e4e4e,0x585858,0x636363,0x6e6e6e,0x797979,0x858585,0x919191,0x9d9d9d,0xa9a9a9,0xb5b5b5,0xc1c1c1,0xcccccc,0xd7d7d7,0xe1e1e1,0xeaeaea,0xf3f3f3,0xffffff};
constexpr uint32_t palette_planetscale[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_playstation[] = {0x0070d1,0x59a2e1,0xb3d4f1,0x0070d1,0x59a2e1,0xb3d4f1};
constexpr uint32_t palette_polar[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_pop_os[] = {0x48b9c7,0x88d2db,0xc8eaee,0x48b9c7,0x88d2db,0xc8eaee};
constexpr uint32_t palette_prism_city[] = {0x111a33,0x16213f,0x1c2a50,0x233463,0x2b4077,0x364e8b,0x445f9f,0x5874b2,0x7089c0,0x8a9cc4,0xa3b1cf,0xc8d2e4,0xeef1f6,0xffffff,0xffe9ae,0xffd27c,0x4a2a2a,0x6e3a24,0x9a4a1c,0xc85f17,0xf38020,0xf8a040,0xfbc06e,0xffdca6,0x3a3352,0x544766,0x0e1220,0x1a2030,0x283044,0x9c2a26,0xff4b3e};
constexpr uint32_t palette_python[] = {0x417fb0,0xffe05c,0x336d9d,0x84accc,0xffeb95,0x7aa0bf,0xc6d9e7,0xfff6ce,0xc2d3e2,0x417fb0,0xffe05c,0x336d9d,0x84accc,0xffeb95,0x7aa0bf,0xc6d9e7,0xfff6ce,0xc2d3e2};
constexpr uint32_t palette_r[] = {0xb0b2b6,0x2066b9,0x97989e,0xcccdd0,0x6e9cd2,0xbbbcc0,0xe7e8e9,0xbcd1ea,0xe0e0e2,0xb0b2b6,0x2066b9,0x97989e,0xcccdd0,0x6e9cd2,0xbbbcc0,0xe7e8e9,0xbcd1ea,0xe0e0e2};
constexpr uint32_t palette_red_hat[] = {0x000000,0xffffff,0xe93442,0x595959,0xffffff,0xf17b84,0xb3b3b3,0xffffff,0xf8c2c6,0x545454,0xffffff,0xe93442,0x909090,0xffffff,0xf17b84,0xcccccc,0xffffff,0xf8c2c6};
constexpr uint32_t palette_rocky_linux[] = {0x10bd85,0x64d4b0,0xb7ebda,0x10bd85,0x64d4b0,0xb7ebda};
constexpr uint32_t palette_ruby[] = {0xfefbfb,0x960f05,0xe37a63,0xcc2312,0xf0b7a9,0xda4a32,0xb31405,0xfefcfc,0xbb635d,0xeda99a,0xde7065,0xf5d0c7,0xe7897a,0xce665d,0xfffefe,0xe0b7b4,0xf7d7d0,0xf0bdb8,0xfbe9e5,0xf4c9c2,0xe8b9b4,0xfefbfb,0xbd1306,0xe37a63,0xcc2312,0xf0b7a9,0xda4a32,0xbd1505,0xfefcfc,0xd4665d,0xeda99a,0xde7065,0xf5d0c7,0xe7897a,0xd4675d,0xfffefe,0xebb8b4,0xf7d7d0,0xf0bdb8,0xfbe9e5,0xf4c9c2,0xebb9b4};
constexpr uint32_t palette_rust[] = {0xf74c00,0xfa8b59,0xfdc9b3,0xf74c00,0xfa8b59,0xfdc9b3};
constexpr uint32_t palette_salt_flat[] = {0x0d0d0e,0x161617,0x1f1f21,0x2a2a2c,0x363638,0x444446,0x555557,0x69696b,0x808082,0x9a9a9c,0xb8b8ba,0xd8d8da,0xffffff,0x50e3c2,0x0070f3,0x7928ca,0xff0080,0xff4d4d,0xf9cb28,0xb0f2e3,0x8cbcf9,0xbb94e4,0xff8cc0,0xffa6a6,0xfce59a,0x24665a,0x00326d,0x36125b,0x73003a,0x732323,0x705b12};
constexpr uint32_t palette_saturn_rise[] = {0x0b0d14,0x161922,0x252935,0x3a3f4c,0x3b2a1a,0x5c4027,0x7f5a35,0xa37645,0xc4925a,0xdcae74,0xecc893,0xf6e0b8,0x6b6a6c,0x8a8070,0xb3a892,0xd8cfba,0x7f8a96,0x0e1a2e,0x15284a,0x1f3a66,0x2c5085,0x3f6aa3,0x5e8bbf,0x89afd6,0xb6d0ea,0xddebf8,0x2a7fb0,0x56b3dc,0xffffff,0xfff0c8};
constexpr uint32_t palette_scala[] = {0x3a0d09,0xe33524,0x7f625f,0xed7c71,0xc4b6b5,0xf7c2bd,0xb6291c,0xe33524,0xd0746b,0xed7c71,0xe9bfbb,0xf7c2bd};
constexpr uint32_t palette_snow_train[] = {0x0c1428,0x121d38,0x19284a,0x22345e,0x2d4374,0x3b548a,0x4d68a0,0x6480b4,0x7f99c6,0x9db3d6,0xbccde4,0xd9e4f1,0xf1f5fb,0xffe7b0,0xffc56e,0xf29a3c,0xb8642a,0x6e3a22,0x3e1420,0x6a1e26,0x9a2c2e,0xff4a3d,0x0b1a1e,0x11262a,0x1a3436,0x26474a,0x1e2230,0x2c3242,0x3e4658,0x586276,0x7c8698};
constexpr uint32_t palette_storm_plains[] = {0x0f0c20,0x141029,0x1c1638,0x261c4a,0x32235a,0x40306c,0x53407e,0x6a5590,0x8670a6,0x7a6288,0x9a7890,0xb98e94,0xe6a890,0xf2bca8,0xf7d6a8,0xfbe8c6,0xf8b070,0xe88a4c,0xc8643a,0x9a4630,0x6a3226,0xf0c868,0xd8a447,0xb7843a,0x8c6230,0x5e4226,0x3a2a1c,0x261c14,0x181a2c,0x2a3048,0x3a4260,0x4f5878,0x6a7392,0x8890ae,0xa2aabd,0x5d5878,0x7c7598,0xa6a2c8,0xd6d2fa,0xf4f2ff,0xffe08a,0xffb84a};
constexpr uint32_t palette_supabase[] = {0x2aa76e,0x75c6a1,0xbfe5d4,0x3fcf8e,0x82e0b6,0xc5f1dd};
constexpr uint32_t palette_supermemory[] = {0x0b1015,0x606467,0xb6b7b9,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_svelte[] = {0xff3e00,0xfffffe,0xff8259,0xfffffe,0xffc5b3,0xffffff,0xff3e00,0xfffffe,0xff8259,0xfffffe,0xffc5b3,0xffffff};
constexpr uint32_t palette_swift[] = {0xf05138,0xfefefe,0xf58e7e,0xfefefe,0xfbcbc3,0xffffff,0xf05138,0xfefefe,0xf58e7e,0xfefefe,0xfbcbc3,0xffffff};
constexpr uint32_t palette_taj_dawn[] = {0x2e2a55,0x3d3870,0x514a8a,0x6a62a3,0x8a83bd,0x5a3a5e,0x7a4d72,0x9a6284,0xb97a92,0xd495a2,0xb8705a,0xd98d66,0xefab78,0xf8c98e,0xffe2ae,0xfff3d8,0xfffcf2,0x8e7f9e,0xad9cb4,0xcbb6c4,0xe3cdd2,0xf3e0dc,0x2a4a3e,0x36584a,0x4a6c58,0x66845f,0x8a9a68,0x8a4a3e,0xb0624a,0x3a2f4a,0x4e3d5a,0xf6d6c0,0xe9bfae,0x5e6a40,0x7d8a52,0xa3a064,0xc2b274};
constexpr uint32_t palette_tokyo_rain[] = {0x100f22,0x17162f,0x201e3d,0x2b284e,0x383463,0x4a447a,0x4c4890,0x6a64c4,0x1d1520,0x2c1f2e,0x3e2b3e,0x553a52,0x6a3a74,0x8e4c8a,0xb4649c,0xd885ae,0x6e1248,0xa3196c,0xd8278c,0xff47a8,0xff85c6,0xffc4e3,0x0c4656,0x106f80,0x16a0b2,0x28d2e2,0x7cecf4,0xccfbfd,0x5e340a,0x93540f,0xcc7b16,0xf7a32a,0xffc65e,0xffe2a0,0xfff4d8,0x55100e,0x8a1a14,0xc22a1a,0xee4626,0xff7a4c,0x8ea2c4,0xbccbe6,0xe4ecfb,0xffffff,0x2e62e0,0x79a2ff,0x20844c,0x43d884,0xe6c21e,0xfff07a,0x6a7896,0x9ba7c2,0xc9d0e2,0x262a36,0x3a3f4e,0x565c6c};
constexpr uint32_t palette_tux[] = {0x030202,0xfcfcfc,0xa58137,0xfdcc1b,0x5b5b5b,0xfdfdfd,0xc5ad7d,0xfede6b,0xb3b3b3,0xfefefe,0xe4d9c3,0xfef0bb,0x545454,0xfcfcfc,0xa58137,0xfdcc1b,0x909090,0xfdfdfd,0xc5ad7d,0xfede6b,0xcccccc,0xfefefe,0xe4d9c3,0xfef0bb};
constexpr uint32_t palette_typescript[] = {0x007acc,0xfeffff,0x59a9de,0xfeffff,0xb3d7f0,0xffffff,0x007acc,0xfeffff,0x59a9de,0xfeffff,0xb3d7f0,0xffffff};
constexpr uint32_t palette_ubuntu[] = {0xe95420,0xf1906e,0xf8ccbc,0xe95420,0xf1906e,0xf8ccbc};
constexpr uint32_t palette_varanasi_ghats[] = {0x141230,0x1d1a42,0x272257,0x332b6a,0x45357a,0x5a4388,0x7259a8,0x6d3a73,0x8a4677,0xa8527a,0xc4607a,0xd97a92,0xb866a0,0x9a68c8,0xc868b0,0xe8707a,0xd9705f,0xe88552,0xf29f4a,0xf8b85a,0xfcd07a,0xffe3a6,0xfff2d2,0x1a1220,0x24182a,0x301f33,0x3f2838,0x523340,0x3a2c4c,0x4d3a64,0x5e3524,0x7d4527,0xa0582a,0xc06e2e,0xd98a46,0xffffff,0xfff6d8,0xffd860,0xff9f2a,0xf06a1e,0xc8401a,0x8a2a16,0x0f1a2c,0x162540,0x20325a,0xd6d4ee};
constexpr uint32_t palette_vercel[] = {0x000000,0x595959,0xb3b3b3,0xe8ebef,0xf0f2f5,0xf8f9fa};
constexpr uint32_t palette_void_linux[] = {0x478061,0x87ac98,0xc8d9d0,0x478061,0x87ac98,0xc8d9d0};
constexpr uint32_t palette_volcano_night[] = {0x5a1a10,0x7a2410,0x982e0e,0xb8380b,0xd4480b,0xea5e10,0xf77a18,0xff9628,0xffb244,0xffcc63,0xffe28c,0xfff3c0,0xfffcec,0x4a3a37,0x63504b,0x7d6863,0x98827b,0xb39d94,0xcdb9af,0x8a4a3a,0xa85a40,0xc87048,0x3c4258,0x5d6280,0x8a90b4,0xb4b9dc,0xdfe2f7,0xb9a8ff,0xf4f0ff,0x1a1012,0x2c1a18};
constexpr uint32_t palette_zig[] = {0xfba81e,0xfcc66d,0xfee5bc,0xfba81e,0xfcc66d,0xfee5bc};
constexpr uint32_t palette_zorin_os[] = {0x15a6f0,0x67c5f5,0xb9e4fb,0x15a6f0,0x67c5f5,0xb9e4fb};
const AsciiPieceMeta entries[] = {
    {"a0","a0","companies","the rounded a with a round hole, glinting now and then",59,28,30,2,0,nullptr,palette_a0,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"agentmail","agentmail","companies","the agent in a brimmed hat, glinting now and then",58,28,30,2,0,nullptr,palette_agentmail,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"almalinux","almalinux","distros","five coloured figures in a ring, scanned now and then",56,28,30,2,0,nullptr,palette_almalinux,30,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"alpine-dawn","alpine dawn","scenes","snow peaks catching first light above a still, misty mountain lake",200,100,15,1,0,"#090c18",palette_alpine_dawn,46,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"alpine-linux","alpine linux","distros","the mountain in a hexagon, scanned now and then",64,28,30,2,0,nullptr,palette_alpine_linux,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"amer-fort","amer fort","scenes","amer fort floodlit gold on its hill, mirrored in maota lake at night",200,100,15,1,0,"#060915",palette_amer_fort,31,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"analog-clock","analog clock","objects","a round clock face showing the local time, seconds ticking",47,23,8,2,1,nullptr,nullptr,0,{0,0,R"OPTIONS({"numerals":true,"seconds":true})OPTIONS"},0,0},
    {"apple","apple","companies","the apple with a bite out of it, glinting now and then",46,28,30,2,0,nullptr,palette_apple,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"aquarium","aquarium","creatures","fish swimming and turning in a tank, bubbles and weed",60,20,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"arch-linux","arch linux","distros","the blue arch, scanned now and then",59,28,30,2,0,nullptr,palette_arch_linux,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"aurora-fjord","aurora fjord","scenes","aurora curtains rippling over a still fjord, a cabin lit on the shore",200,100,15,1,0,"#05080f",palette_aurora_fjord,43,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"aurora","aurora","nature","an aurora curtain rippling over a treeline under stars",64,20,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"autumn","autumn","companies","the leaf with a slash for its vein, glinting now and then",29,28,30,2,0,nullptr,palette_autumn,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"bar-chart","bar chart","data","bars easing between three datasets, values riding on top",60,19,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"title":"visits by day","labels":["mon","tue","wed","thu","fri","sat","sun"],"datasets":[{"name":"week 1","values":[320,410,380,460,540,240,180]},{"name":"week 2","values":[210,480,300,560,390,340,150]},{"name":"week 3","values":[450,290,520,380,580,160,270]}]})OPTIONS"},0,0},
    {"big-text","big text","type","a block-letter banner with a line shadow and a passing glint",66,8,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"text":"hello"})OPTIONS"},0,0},
    {"black-hole","black hole","space","a black hole, its lensed disk turning, one side brighter",64,20,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"black-prism","black prism","scenes","the vercel triangle as a glass prism, splitting white light to a rainbow",200,100,15,1,0,"#000000",palette_black_prism,27,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"bonsai","bonsai","nature","a potted tree that sheds its leaves and leafs out again",52,19,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"boot-log","boot log","ui","a self test counts memory, then the boot log scrolls by",64,16,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"bouncing-balls","bouncing balls","physics","rubber balls bouncing lower each time, squashing on landing",64,22,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"balls":3})OPTIONS"},0,0},
    {"box-frames","box frames","ui","twelve frame styles to copy, each one labelled",78,20,0,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"butterfly","butterfly","creatures","a butterfly flapping and gliding along a wandering path",64,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"c","c","logos","a c on a blue hexagon, glinting now and then",49,28,30,2,0,nullptr,palette_c,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"calendar","calendar","ui","this month like cal, today bracketed, time ticking below",32,13,8,2,1,nullptr,nullptr,0,{0,0,R"OPTIONS({"monday":false,"time":true})OPTIONS"},0,0},
    {"campfire","campfire","nature","a log fire flickering, sparks rising; denser ink is hotter",52,22,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"candle","candle","objects","a flickering candle burning down in its holder, then renewed",40,30,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"candlesticks","candlesticks","data","hollow up candles, solid down ones, the last one forming live",70,22,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"start":100,"seed":3})OPTIONS"},0,0},
    {"cat","cat","creatures","a tabby asleep on its paws, breathing slowly",56,15,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"centos","centos","distros","four coloured squares in a star, scanned now and then",56,28,30,2,0,nullptr,palette_centos,30,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"chat","chat","ui","a chat in bubbles: typed, sent, three dots, then the reply streaming",48,18,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"messages":["can you help me name my cli?","sure. what does it do?","it turns images into ascii art","how about glyph, inkdrop or asciify?","glyph. that's the one","nice pick. want a logo to go with it?"]})OPTIONS"},18.770000000000003,0},
    {"cherry-blossom","cherry blossom","nature","a flowering cherry branch shedding petals on the wind",64,20,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"chladni","chladni plate","physics","sand travelling to the nodal lines of a ringing plate",45,23,12,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"clojure","clojure","logos","a lambda in a green and blue circle, glinting now and then",56,28,30,2,0,nullptr,palette_clojure,30,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"cloud-sea","cloud sea","scenes","the sun sinks into a drifting sea of orange cloud at dusk",200,100,15,1,0,"#0e0e0f",palette_cloud_sea,25,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"cloudflare","cloudflare","companies","the orange cloud, glinting now and then",79,19,30,2,0,nullptr,palette_cloudflare,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"coderabbit","coderabbit","companies","the sitting rabbit in its orange disc, glinting now and then",56,28,30,2,0,nullptr,palette_coderabbit,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"coffee","coffee","objects","steam curling up from a cup of coffee on its saucer",52,24,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"collabute","collabute","companies","the disc shading white to black, in a black ring, glinting now and then",56,28,30,2,0,nullptr,palette_collabute,36,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"command-city","command city","scenes","a night city whose boulevards trace the command key in streetlight",200,100,15,1,0,"#060607",palette_command_city,29,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"command-code","command code","companies","the command key in a rounded square, glinting now and then",64,32,30,2,0,nullptr,palette_command_code,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"contour-map","contour map","nature","an island in contour lines, its hills slowly reshaping",72,20,8,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"cpp","c++","logos","c++ on a blue hexagon, glinting now and then",50,28,30,2,0,nullptr,palette_cpp,24,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"cpu-meters","cpu meters","data","htop-style core, memory and swap meters over a process list",66,16,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"commands":["build","indexer","server","backup","sync","editor","shell"]})OPTIONS"},0,0},
    {"csharp","c#","logos","c# on a purple hexagon, glinting now and then",49,28,30,2,0,nullptr,palette_csharp,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"css","css","logos","the blue shield with a 3, glinting now and then",50,28,30,2,0,nullptr,palette_css,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"cube","cube","shapes","a stippled hidden-line cube turning a quarter at a time",32,18,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"dart","dart","logos","the dart, in blue and teal, glinting now and then",56,28,30,2,0,nullptr,palette_dart,24,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"databuddy","databuddy","companies","the databuddy bunny, glinting now and then",56,28,30,2,0,nullptr,palette_databuddy,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"debian","debian","distros","the red swirl, scanned now and then",46,28,30,2,0,nullptr,palette_debian,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"deep-reef","deep reef","scenes","light shafts, swaying kelp and a turning school of fish over a reef",200,100,15,1,0,"#03101a",palette_deep_reef,29,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"deepin","deepin","distros","the swirl in a blue ring, scanned now and then",56,28,30,2,0,nullptr,palette_deepin,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"desert-night","desert night","scenes","the milky way over a lone acacia on moonless dunes, meteors falling",200,100,15,1,0,"#04060c",palette_desert_night,43,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"digital-clock","digital clock","ui","the local time in seven-segment digits, colon blinking",70,11,10,2,1,nullptr,nullptr,0,{0,0,R"OPTIONS({"hour12":false,"seconds":true,"date":true})OPTIONS"},0,0},
    {"dissolve","dissolve","type","words that crumble to dust and condense into the next",64,13,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"words":["hello","hola","ciao","salut"]})OPTIONS"},0,0},
    {"dividers","dividers","ui","rules and ornaments for between sections, plain to fancy",63,25,0,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"width":59})OPTIONS"},0,0},
    {"dna-helix","dna helix","shapes","a double helix with base pairs, turning about its axis",64,15,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"donut","donut","shapes","a lit torus turning on two axes, after donut.c",40,22,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"doom-fire","doom fire","effects","the psx fire spread, tongues climbing off a white-hot bed",60,18,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"double-pendulum","double pendulum","physics","a chaotic double pendulum; its tip leaves a fading trail",48,25,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"earth","earth","space","a lit globe turning, continents from a five-degree map",60,30,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"earthrise","earthrise","scenes","the earth rising over a cratered lunar horizon in long low sunlight",200,100,15,1,0,"#030408",palette_earthrise,38,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"eclipse","eclipse","space","the moon slides over the sun; diamond ring, then corona",64,27,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"edge-orbit","edge orbit","scenes","the night earth from orbit, cloudflare requests arcing city to city",200,100,15,1,0,"#04060c",palette_edge_orbit,27,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"elementary-os","elementary os","distros","the e in a ring, scanned now and then",56,28,30,2,0,nullptr,palette_elementary_os,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"elixir","elixir","logos","the purple drop, glinting now and then",38,28,30,2,0,nullptr,palette_elixir,42,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"elm","elm","logos","seven tangram pieces in a square, glinting now and then",56,28,30,2,0,nullptr,palette_elm,24,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"endeavouros","endeavouros","distros","the violet sail, scanned now and then",67,28,30,2,0,nullptr,palette_endeavouros,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"epicycles","epicycles","generative","a chain of turning circles whose tip traces a star",60,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"equalizer","equalizer","data","spectrum bars bouncing to a beat, peak caps falling slowly",62,16,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"bpm":120})OPTIONS"},0,0},
    {"erlang","erlang","logos","the red e in brackets, glinting now and then",70,23,30,2,0,nullptr,palette_erlang,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"falling-sand","falling sand","physics","sand pouring into a heap, then draining through the shelf",55,22,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"fedora","fedora","distros","the f in its blue bubble, scanned now and then",56,28,30,2,0,nullptr,palette_fedora,18,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"fern","fern","nature","barnsley's fern filling in point by point, then swaying",44,30,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"ferris-wheel","ferris wheel","objects","a wheel turning on its a-frame, cabins hanging upright",64,26,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"file-tree","file tree","ui","a tree listing opened folder by folder, then closed again",36,23,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"root":".","entries":"docs/\n  guide.md\n  notes.md\npublic/\n  favicon.ico\n  robots.txt\nsrc/\n  components/\n    button.ts\n    card.ts\n    menu.ts\n  lib/\n    fetch.ts\n    format.ts\n  index.ts\n  styles.css\ntests/\n  format.test.ts\npackage.json\nREADME.md"})OPTIONS"},0,0},
    {"fireflies","fireflies","nature","fireflies over night grass, a flash spreading through them",60,18,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"seed":7,"count":44})OPTIONS"},0,0},
    {"fireworks","fireworks","effects","shells climb and burst as peonies, rings, willows and palms",64,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"flag","flag","physics","a striped flag rippling on a pole, folds catching the light",62,21,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"stripes":5})OPTIONS"},0,0},
    {"flow-field","flow field","generative","particle trails gathering into winding, merging streams",64,22,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"form-controls","form controls","ui","a terminal style form being filled in, field by field",54,16,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"title":"preferences"})OPTIONS"},0,0},
    {"fountain","fountain","physics","arcs of water from a nozzle falling as drops into a basin",57,22,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"fox","fox","creatures","a fox asleep on its tail, breathing, peeking now and then",47,16,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"fractal-tree","fractal tree","nature","a recursive branching tree swaying in the wind",60,24,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"seed":4})OPTIONS"},0,0},
    {"galaxy","galaxy","space","a tilted spiral galaxy turning, its inner stars the fastest",64,26,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"gangaur-ghat","gangaur ghat","scenes","udaipur at night, a lit gateway on lake pichola and diyas on the water",200,100,15,1,0,"#070a18",palette_gangaur_ghat,30,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"gauge","gauge","data","semicircle dial, the needle overshoots each new reading",55,18,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"label":"load","unit":"%","min":0,"max":100})OPTIONS"},0,0},
    {"gentoo","gentoo","distros","the lavender g, scanned now and then",54,28,30,2,0,nullptr,palette_gentoo,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"git-graph","git graph","ui","git log --graph scrolling, branches forking off main and merging back",60,16,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},23.1,0},
    {"glider-gun","glider gun","generative","gosper's gun firing a glider every 30 generations",56,20,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"glitch","glitch","type","a pixel word that tears into sliding slices in short bursts",64,13,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"text":"noise"})OPTIONS"},0,0},
    {"glxgears","glxgears","shapes","three meshing gears turning, after glxgears",56,31,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"go","go","logos","go with its speed lines, glinting now and then",79,16,30,2,0,nullptr,palette_go,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"green-storm","green storm","scenes","a thunderstorm at sea, the lightning striking in the supabase bolt",200,100,15,1,0,"#0e0e0e",palette_green_storm,28,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"greptile","greptile","companies","the g folded into a cube, in green, glinting now and then",49,28,30,2,0,nullptr,palette_greptile,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"gyroscope","gyroscope","shapes","gimbals swing round a spinning rotor whose axle holds still",60,32,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"harmonograph","harmonograph","physics","a pen on two decaying pendulums winding a figure inward",64,28,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"haskell","haskell","logos","an angle, a lambda and an equals sign, glinting now and then",69,25,30,2,0,nullptr,palette_haskell,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"hawa-mahal","hawa mahal","objects","jaipur's palace of winds at night, lamps behind the jali",61,24,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"heart","heart","shapes","a glossy 3d heart swaying and beating lub-dub",52,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"heartbeat","heartbeat","data","an ecg trace sweeping over its last pass, with a bpm readout",72,15,25,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"bpm":72})OPTIONS"},0,0},
    {"heatmap","heatmap","data","contribution calendar, a day at a time, weeks scrolling left",66,12,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"unit":"contributions","seed":7})OPTIONS"},0,0},
    {"helium","helium","companies","the six-point asterisk, in blue, glinting now and then",49,28,30,2,0,nullptr,palette_helium,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"helixdb","helixdb","companies","the stepped rungs of a helix between two posts, glinting now and then",64,32,30,2,0,nullptr,palette_helixdb,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"helmcode","helmcode","companies","the helmcode hexagon in its violet, glinting now and then",53,30,30,2,0,nullptr,palette_helmcode,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"hilbert-curve","hilbert curve","generative","a closed loop of two hilbert curves, with two lit runners",65,17,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"hourglass","hourglass","objects","sand running through the neck, then turned over",43,21,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"html","html","logos","the orange shield with a 5, glinting now and then",50,28,30,2,0,nullptr,palette_html,24,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"icosahedron","icosahedron","shapes","a wireframe icosahedron turning, its hidden edges dotted",46,22,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"jal-mahal","jal mahal","scenes","the jaipur water palace floating on a misty lake at sunrise",200,100,15,1,0,"#16141f",palette_jal_mahal,29,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"java","java","logos","the steaming cup, glinting now and then",42,28,30,2,0,nullptr,palette_java,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"javascript","javascript","logos","js on a yellow square, glinting now and then",56,28,30,2,0,nullptr,palette_javascript,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"jellyfish","jellyfish","creatures","a jellyfish pulsing upward, its tentacles trailing late",44,26,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"julia-set","julia set","generative","a julia set changing shape as its constant c goes round",66,24,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"julia","julia","logos","three dots, green, red and purple, glinting now and then",60,28,30,2,0,nullptr,palette_julia,24,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"jungle-falls","jungle falls","scenes","a tiered waterfall in a rainforest gorge, spray, a rainbow and macaws",200,100,15,1,0,"#07130d",palette_jungle_falls,31,{0,0,R"OPTIONS({})OPTIONS"},0,6},
    {"kali-linux","kali linux","distros","the blue dragon, scanned now and then",71,27,30,2,0,nullptr,palette_kali_linux,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"keiki","keiki","companies","the rocking horse, glinting now and then",62,28,30,2,0,nullptr,palette_keiki,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"kite-festival","kite festival","scenes","sankranti kites crowding a golden sky over the pink roofs of jaipur",200,100,15,1,0,"#1a0f17",palette_kite_festival,26,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"kite","kite","objects","a diamond kite riding the wind, its string sagging in lulls",64,24,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"kotlin","kotlin","logos","the k, in violet and pink, glinting now and then",56,28,30,2,0,nullptr,palette_kotlin,30,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"kyoto-dusk","kyoto dusk","scenes","a pagoda at dusk behind a cherry tree lit by a stone lantern",200,100,15,1,0,"#0b0a16",palette_kyoto_dusk,41,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"lake-pichola","lake pichola","scenes","sunset on lake pichola, udaipur's palaces glowing over the water",200,100,15,1,0,"#120a1a",palette_lake_pichola,31,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"landscape","landscape","nature","a range and a lake under the sun or moon of the local hour",64,18,8,2,1,nullptr,nullptr,0,{0,0,R"OPTIONS({"hour":null,"phase":null})OPTIONS"},0,0},
    {"langtons-ant","langton's ant","generative","order, then chaos, then the ant builds its highway",72,25,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"lantern-lake","lantern lake","scenes","sky lanterns rising over a still mountain lake, one let go from a boat",200,100,15,1,0,"#04060d",palette_lantern_lake,43,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"lava-lamp","lava lamp","objects","wax blobs rising, merging and sinking in a lit glass",30,27,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"lava-wall","lava wall","scenes","a wall of lava lamps under the glowing orange cloud, watched by a camera",200,100,15,1,0,"#08070a",palette_lava_wall,30,{0,0,R"OPTIONS({})OPTIONS"},30,0},
    {"lighthouse","lighthouse","objects","a beam sweeping over night sea from a lighthouse on rocks",64,30,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"lightning","lightning","nature","a forked bolt striking out of a storm cloud in the rain",64,22,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"linux-mint","linux mint","distros","lm in a green circle, scanned now and then",56,28,30,2,0,nullptr,palette_linux_mint,12,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"lorenz","lorenz attractor","physics","one lorenz trajectory looping both wings, older loops fading",60,22,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"lua","lua","logos","a planet and its moon, glinting now and then",56,28,30,2,0,nullptr,palette_lua,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"mandelbrot","mandelbrot","generative","a slow zoom into seahorse valley and back out again",64,26,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"manjaro","manjaro","distros","three green blocks, scanned now and then",56,28,30,2,0,nullptr,palette_manjaro,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"marine-drive","marine drive","scenes","mumbai's queen's necklace at night, lamps curving round the bay",200,100,15,1,0,"#07080f",palette_marine_drive,36,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"marquee","marquee","type","a scrolling led sign framed by chasing bulbs",61,10,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"text":"now showing · doors open at 7:30 ·","speed":12})OPTIONS"},0,0},
    {"matrix-rain","matrix rain","effects","streams of glyphs falling, heavy at the head, thin behind",63,24,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"maze","maze","generative","a maze carved by backtracking, then solved, then remade",61,21,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"mintlify","mintlify","companies","the leaf within a leaf, in mint green, glinting now and then",56,28,30,2,0,nullptr,palette_mintlify,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"misty-forest","misty forest","scenes","pine ridges fading into morning fog, sunbeams slanting through",200,100,15,1,0,"#090f0e",palette_misty_forest,32,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"mobius-strip","mobius strip","shapes","a mobius strip turning and nodding, lit from above",58,20,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"moon-phases","moon phases","space","the moon waxing and waning, its maria darker in the light",46,23,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"morse","morse","type","a lamp keying morse, the marks on a tape, letters decoded",64,19,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"text":"hello world"})OPTIONS"},0,0},
    {"newtons-cradle","newton's cradle","physics","five steel balls on strings passing one knock back and forth",74,17,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"lifted":1})OPTIONS"},0,0},
    {"night-coast","night coast","scenes","a lighthouse turning its beam under moonlit clouds over a dark sea",200,100,15,1,0,"#080b12",palette_night_coast,30,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"night-highway","night highway","scenes","a desert highway at dusk, rushing toward the mountains and last light",200,100,15,1,0,"#07080f",palette_night_highway,30,{0,0,R"OPTIONS({})OPTIONS"},12,0},
    {"nixos","nixos","distros","the snowflake of lambdas, scanned now and then",64,28,30,2,0,nullptr,palette_nixos,12,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"not-found","not found","ui","a block-letter 404 with a small ghost drifting beneath it",60,21,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"code":"404","title":"page not found","message":"the page you asked for has moved or never existed"})OPTIONS"},0,0},
    {"ocaml","ocaml","logos","the camel on an orange square, glinting now and then",64,28,30,2,0,nullptr,palette_ocaml,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"ocean-sunset","ocean sunset","scenes","the sun sets past a pine headland, lit cloud, glitter on rolling sea",200,100,15,1,0,"#0b0817",palette_ocean_sunset,43,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"omarchy","omarchy","distros","the square o of brackets, in green, scanned now and then",56,28,30,2,0,nullptr,palette_omarchy,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"opensuse","opensuse","distros","the green chameleon, scanned now and then",69,18,30,2,0,nullptr,palette_opensuse,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"orchid","orchid","companies","the five-petal flower, glinting now and then",57,28,30,2,0,nullptr,palette_orchid,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"owl","owl","creatures","an owl on a branch, blinking slowly and turning its head",41,24,12,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"pendulum-wave","pendulum wave","physics","a row of pendulums drifting in and out of step, from above",67,19,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"perl","perl","logos","the onion, glinting now and then",56,28,30,2,0,nullptr,palette_perl,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"php","php","logos","php in its purple oval, glinting now and then",69,19,30,2,0,nullptr,palette_php,36,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"pipeline","pipeline","ui","a ci run going stage by stage, one run failing its tests, then green",56,13,12,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"stages":["install","lint","test","build","deploy"]})OPTIONS"},39.922079999999994,0},
    {"planet-scale","planet scale","scenes","a dark planet cut into the planetscale mark, backlit, a moon circling",200,100,15,1,0,"#050505",palette_planet_scale,24,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"planet","planet","space","a banded ringed planet turning, with shadows both ways",64,18,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"planetscale","planetscale","companies","the disc cut by two strokes, glinting now and then",56,28,30,2,0,nullptr,palette_planetscale,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"plasma","plasma","generative","soft interference blobs drifting and pulsing",64,22,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"playstation","playstation","companies","the p standing on a flat s, in blue, glinting now and then",70,28,30,2,0,nullptr,palette_playstation,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"plucked-string","plucked string","physics","a plucked string, slowed down, its harmonics fading",64,14,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"polar","polar","companies","the half star, bar and arc, glinting now and then",51,28,30,2,0,nullptr,palette_polar,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"pond-ripples","pond ripples","physics","raindrops opening rings that cross and fade on a pond",64,20,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"pop-os","pop!_os","distros","the p! in a teal circle, scanned now and then",56,28,30,2,0,nullptr,palette_pop_os,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"prism-city","prism city","scenes","a black spire and an orange cloud over a blue hour city and its river",200,100,15,1,0,"#06080f",palette_prism_city,31,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"progress-bar","progress bar","ui","five bar styles filling at uneven paces, percent at right",48,11,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"labels":["fetching","unpacking","indexing","building","linking"]})OPTIONS"},0,0},
    {"python","python","logos","two snakes, blue and yellow, glinting now and then",51,28,30,2,0,nullptr,palette_python,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"r","r","logos","a blue r over a grey ring, glinting now and then",69,27,30,2,0,nullptr,palette_r,18,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"radar","radar","data","rotating sweep with afterglow, contacts fade between passes",53,25,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"range":24,"unit":"nm"})OPTIONS"},0,0},
    {"rain","rain","nature","slanting rain in three depths, crowns and puddle rings",64,20,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"reaction-diffusion","reaction diffusion","generative","gray-scott spots and stripes dying back and growing out",60,24,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"red-hat","red hat","distros","the man in the red hat, scanned now and then",56,28,30,2,0,nullptr,palette_red_hat,18,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"rocket","rocket","space","a rocket lifting off its pad at night, then landing back",48,28,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"rocky-linux","rocky linux","distros","the mountain in a green circle, scanned now and then",56,28,30,2,0,nullptr,palette_rocky_linux,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"rotozoomer","rotozoomer","effects","a brick wall texture turning and zooming about the centre",64,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"ruby","ruby","logos","the cut red gem, glinting now and then",56,28,30,2,0,nullptr,palette_ruby,42,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"rule-30","rule 30","generative","one cell grows a row at a time under rules 30, 90 and 110",64,20,8,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"ruled-mountains","ruled mountains","nature","ruled lines with a range rising from them, drifting forward",64,20,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"rust","rust","logos","the r in its cog, in ferris orange, glinting now and then",64,32,30,2,0,nullptr,palette_rust,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"salt-flat","salt flat","scenes","the vercel triangle over a mirror of salt, the sun rising behind its tip",200,100,15,1,0,"#000000",palette_salt_flat,31,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"saptarishi","saptarishi","space","the big dipper at true positions in a twinkling sky",64,18,12,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"lines":true})OPTIONS"},0,0},
    {"saturn-rise","saturn rise","scenes","saturn and its rings hanging over the cracked ice and geysers of a moon",200,100,15,1,0,"#04050a",palette_saturn_rise,30,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"scala","scala","logos","the red spiral stair, glinting now and then",37,28,30,2,0,nullptr,palette_scala,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"scramble","scramble","type","phrases decoding left to right out of flickering glyphs",44,3,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"phrases":["hello, world","decoding the signal","nothing is lost","see you on the other side"]})OPTIONS"},0,0},
    {"sea-swell","sea swell","nature","a long swell lifting a small sailboat as it rolls under",64,14,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"sierpinski","sierpinski","generative","the chaos game filling a sierpinski triangle point by point",59,26,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"skeleton","skeleton","ui","a loading card in shade blocks with a shimmer passing over",52,23,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"lines":3,"image":true,"avatar":true})OPTIONS"},0,0},
    {"skyline","skyline","objects","a city at night, windows going on and off, a blinking mast",64,23,10,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"smoke","smoke","physics","incense smoke rising straight, then curling and thinning",44,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"snake","snake","creatures","a snake slithering along an s-curve, flicking its tongue",64,15,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"snow-train","snow train","scenes","a lit train crossing a snowy stone viaduct at night as snow falls",200,100,15,1,0,"#070b16",palette_snow_train,31,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"snowfall","snowfall","nature","snow swaying down, building drifts on the ground and a fence",64,22,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"solar-system","solar system","space","four planets on dotted orbits, periods by kepler's third law",61,29,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"speed":1})OPTIONS"},0,0},
    {"sparkline","sparkline","data","three live block sparklines scrolling left, values at right",72,9,12,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"series":[{"label":"cpu","unit":"%","lo":0,"hi":100},{"label":"memory","unit":" gb","lo":1.2,"hi":3.4,"digits":1},{"label":"requests","unit":"/s","lo":0,"hi":260}],"range":true,"rate":4})OPTIONS"},0,0},
    {"sparks","sparks","effects","an angle grinder throwing sparks that arc, skip and cool",64,20,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"spider","spider","creatures","a spider lowering itself on silk, then climbing back up",28,24,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"spinners","spinners","ui","twelve loading spinners side by side, each with its name",66,13,12,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"names":[],"labels":true,"speed":1})OPTIONS"},0,0},
    {"split-flap","split-flap","type","a departures board whose flaps riffle to each new line",61,18,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"title":"departures","start":"14:03","flights":[["14:05","lisbon","a4","on time"],["14:15","oslo","b12","on time"],["14:20","nairobi","c7","delayed"],["14:35","lima","a9","on time"],["14:40","reykjavik","d21","on time"],["14:50","seoul","b3","on time"],["15:00","marrakesh","c14","cancelled"],["15:05","helsinki","a2","on time"],["15:20","auckland","d8","on time"],["15:25","kyoto","b16","delayed"],["15:35","cape town","c11","on time"],["15:45","montreal","a6","on time"]]})OPTIONS"},0,0},
    {"spring","spring","shapes","a weight bouncing on a coil spring, its coils bunching",40,28,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"starfield","starfield","space","stars rush out from the centre and streak at the edges",64,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"stars":60,"speed":1})OPTIONS"},0,0},
    {"starlings","starlings","creatures","a murmuration wheeling about, split by a passing falcon",64,16,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"storm-plains","storm plains","scenes","an anvil thunderhead at dusk flickering over a wheat field",200,100,15,1,0,"#0b0912",palette_storm_plains,42,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"sundial","sundial","objects","jaipur's samrat yantra, its shadow set by your local time",65,23,10,2,1,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"sunrise","sunrise","nature","the sun lifting off a sea horizon, its path glittering",60,20,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"supabase","supabase","companies","the green bolt, glinting now and then",55,28,30,2,0,nullptr,palette_supabase,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"supermemory","supermemory","companies","the two mirrored strokes, glinting now and then",68,28,30,2,0,nullptr,palette_supermemory,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"svelte","svelte","logos","the orange ribbon folded round an s, glinting now and then",47,28,30,2,0,nullptr,palette_svelte,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"swift","swift","logos","the swift on an orange square, glinting now and then",58,28,30,2,0,nullptr,palette_swift,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"synthwave","synthwave","effects","a grid rolling toward a striped sun behind a mountain ridge",65,28,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"taj-dawn","taj dawn","scenes","the taj mahal at sunrise, mirrored in its pool through morning haze",200,100,15,1,0,"#0d0a13",palette_taj_dawn,37,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"terminal","terminal","ui","a shell session: typed commands, output, scrolling, clear",62,18,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"prompt":"~/notes $","title":"~/notes"})OPTIONS"},0,0},
    {"tesseract","tesseract","shapes","a 4d hypercube turning, its cubes passing through each other",54,28,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"three-body","three-body","space","three equal masses sharing one figure-eight orbit",65,15,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"tokyo-rain","tokyo rain","scenes","a tokyo side street in the rain, neon signs shining on the wet road",200,100,15,1,0,"#07060d",palette_tokyo_rain,56,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"torus-knot","torus knot","shapes","a trefoil knot drawn as a lit tube, turning slowly",60,28,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"train","train","objects","a steam train crossing on its track, smoke puffing behind",76,26,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"tunnel","tunnel","effects","flying down a tiled tube that bends and twists",64,24,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"tux","tux","distros","tux the penguin, scanned now and then",49,28,30,2,0,nullptr,palette_tux,24,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"tv-static","tv static","effects","snow on an old set that tunes into a test card and loses it",58,26,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"set":true})OPTIONS"},0,0},
    {"twisted-ring","twisted ring","shapes","a square ring twisted three quarters, so it has one face",46,21,30,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"typescript","typescript","logos","ts on a blue square, glinting now and then",56,28,30,2,0,nullptr,palette_typescript,12,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"typewriter","typewriter","type","phrases typed and deleted in turn behind a blinking cursor",44,3,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"prefix":"i make ","phrases":["small tools.","quiet websites.","things that last.","notes for later."]})OPTIONS"},0,0},
    {"ubuntu","ubuntu","distros","the circle of friends, in orange, scanned now and then",58,28,30,2,0,nullptr,palette_ubuntu,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"uptime-bar","uptime bar","data","60-day uptime bars for three services, a new day slides in",64,15,8,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"services":["api","website","database"]})OPTIONS"},0,0},
    {"varanasi-ghats","varanasi ghats","scenes","dusk aarti on the ganga, lamps on the steps and diyas on the water",200,100,15,1,0,"#0b0812",palette_varanasi_ghats,46,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"vercel","vercel","companies","the vercel triangle, glinting now and then",64,28,30,2,0,nullptr,palette_vercel,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"vinyl","vinyl","objects","a record turning under the tonearm, seen from above",64,25,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"void-linux","void linux","distros","the green ring, cut through, scanned now and then",56,28,30,2,0,nullptr,palette_void_linux,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0},
    {"volcano-night","volcano night","scenes","a volcano erupting at night, lava rivers, an ash plume full of lightning",200,100,15,1,0,"#070405",palette_volcano_night,31,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"voronoi","voronoi","generative","cells of ground nearest each drifting seed",64,22,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"wave-interference","wave interference","physics","two sources in a ripple tank, still lines fanning out",72,26,24,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"wavelength":5,"separation":2.2})OPTIONS"},0,0},
    {"wave-text","wave text","type","a swell running through a line of text, left to right",36,5,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({"text":"making waves","amp":1.25,"wavelength":18,"speed":8,"spacing":0,"settle":true})OPTIONS"},0,0},
    {"whale","whale","creatures","a whale blows, arches its back and dives, fluke last",72,18,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"wind","wind","nature","gusts streaming along bending lines, curling at the head",64,14,15,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"windmill","windmill","objects","four lattice sails turning on a dutch mill, clouds passing",64,28,20,2,0,nullptr,nullptr,0,{0,0,R"OPTIONS({})OPTIONS"},0,0},
    {"zig","zig","logos","the slanted z in brackets, glinting now and then",61,28,30,2,0,nullptr,palette_zig,6,{5,0,R"OPTIONS({"shine":5})OPTIONS"},0,0},
    {"zorin-os","zorin os","distros","the z in blue stripes, scanned now and then",64,28,30,2,0,nullptr,palette_zorin_os,6,{0,5,R"OPTIONS({"scan":5})OPTIONS"},0,0}
};
}
const AsciiPieceMeta &catalog_meta(std::string_view id) {
    // Entries retain source-file order, which differs from ID order for names
    // such as aurora.ts and aurora-fjord.ts.
    const auto it = std::find_if(std::begin(entries), std::end(entries), [id](const auto &entry) { return id == entry.id; });
    if (it == std::end(entries)) throw std::invalid_argument("Unknown piece metadata: " + std::string(id));
    return *it;
}
}
