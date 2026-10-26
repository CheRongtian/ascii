// Native source generated from src/kit/core.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_core final:j::Module {
j::Cell _v_3712_compose;
j::Cell _v_3713_fx;
j::Cell _v_3714_fail;
j::Cell _v_3717_and;
j::Cell _v_3720_TAU;
j::Cell _v_3721_clamp;
j::Cell _v_3726_lerp;
j::Cell _v_3731_smoothstep;
j::Cell _v_3737_fract;
j::Cell _v_3740_hash;
j::Cell _v_3747_mulberry32;
j::Cell _v_3753_valueNoise;
j::Cell _v_3768_BAYER4;
j::Cell _v_3771_bayer;
j::Cell _v_3775_ramps;
j::Cell _v_3776_CONTROL;
j::Cell _v_3777_ramp;
j::Cell _v_3780_shadeChar;
j::Cell _v_3788_INK;
j::Cell _v_3789_HEX;
j::Cell _v_3790_isHex;
j::Cell _v_3793_rgb;
j::Cell _v_3796_hex;
j::Cell _v_3803_mix;
j::Cell _v_3813_gradient;
j::Cell _v_3826_distance;
j::Cell _v_3830_nearest;
j::Cell _v_3841_themed;
j::Cell _v_3844_Palette;
j::Cell _v_3862_schemes;
j::Cell _v_3863_materialColors;
j::Cell _v_3864_named;
j::Cell _v_3870_NAMES;
j::Cell _v_3872_colorsOf;
j::Cell _v_3880_colorOf;
j::Cell _v_3889_didYouMean;
j::Cell _v_3896_lettersApart;
j::Cell _v_3908_SYNONYMS;
j::Cell _v_3909_nearWords;
j::Cell _v_3920_suggest;
j::Cell _v_3927_mergePalettes;
j::Cell _v_3945_EMPTY;
j::Cell _v_3946_NONE;
j::Cell _v_3947_code;
j::Cell _v_3951_Surface;
j::Cell _v_4055_CATEGORIES;
j::Cell _v_4056_MAX;
j::Cell _v_4057_checkMeta;
j::Cell _v_4060_Chainable;
j::Cell _v_4114_chained;
j::Cell _v_4117_specOf;
j::Cell _v_4125_spread;
j::Cell _v_4131_metaOf;
j::Cell _v_4137_piece;
j::Cell _v_4155_asPiece;
j::Cell _v_4186_sample;
j::Cell _v_4202_snapshot;
std::vector<V> _literals;
Generated_kit_core():_v_3712_compose(this->slot("compose")),_v_3713_fx(this->slot("fx")),_v_3714_fail(this->slot("fail")),_v_3717_and(this->slot("and")),_v_3720_TAU(this->slot("TAU")),_v_3721_clamp(this->slot("clamp")),_v_3726_lerp(this->slot("lerp")),_v_3731_smoothstep(this->slot("smoothstep")),_v_3737_fract(this->slot("fract")),_v_3740_hash(this->slot("hash")),_v_3747_mulberry32(this->slot("mulberry32")),_v_3753_valueNoise(this->slot("valueNoise")),_v_3768_BAYER4(this->slot("BAYER4")),_v_3771_bayer(this->slot("bayer")),_v_3775_ramps(this->slot("ramps")),_v_3776_CONTROL(this->slot("CONTROL")),_v_3777_ramp(this->slot("ramp")),_v_3780_shadeChar(this->slot("shadeChar")),_v_3788_INK(this->slot("INK")),_v_3789_HEX(this->slot("HEX")),_v_3790_isHex(this->slot("isHex")),_v_3793_rgb(this->slot("rgb")),_v_3796_hex(this->slot("hex")),_v_3803_mix(this->slot("mix")),_v_3813_gradient(this->slot("gradient")),_v_3826_distance(this->slot("distance")),_v_3830_nearest(this->slot("nearest")),_v_3841_themed(this->slot("themed")),_v_3844_Palette(this->slot("Palette")),_v_3862_schemes(this->slot("schemes")),_v_3863_materialColors(this->slot("materialColors")),_v_3864_named(this->slot("named")),_v_3870_NAMES(this->slot("NAMES")),_v_3872_colorsOf(this->slot("colorsOf")),_v_3880_colorOf(this->slot("colorOf")),_v_3889_didYouMean(this->slot("didYouMean")),_v_3896_lettersApart(this->slot("lettersApart")),_v_3908_SYNONYMS(this->slot("SYNONYMS")),_v_3909_nearWords(this->slot("nearWords")),_v_3920_suggest(this->slot("suggest")),_v_3927_mergePalettes(this->slot("mergePalettes")),_v_3945_EMPTY(this->slot("EMPTY")),_v_3946_NONE(this->slot("NONE")),_v_3947_code(this->slot("code")),_v_3951_Surface(this->slot("Surface")),_v_4055_CATEGORIES(this->slot("CATEGORIES")),_v_4056_MAX(this->slot("MAX")),_v_4057_checkMeta(this->slot("checkMeta")),_v_4060_Chainable(this->slot("Chainable")),_v_4114_chained(this->slot("chained")),_v_4117_specOf(this->slot("specOf")),_v_4125_spread(this->slot("spread")),_v_4131_metaOf(this->slot("metaOf")),_v_4137_piece(this->slot("piece")),_v_4155_asPiece(this->slot("asPiece")),_v_4186_sample(this->slot("sample")),_v_4202_snapshot(this->slot("snapshot")),_literals{V(u"standard"),
V(u"string"),
V(u"keys"),
V(u"hasOwn"),
V(u"length"),
V(u"test"),
V(u"stringify"),
V(u"slice"),
V(u"isArray"),
V(u"a gradient takes one or more colours as #rrggbb"),
V(u"isInteger"),
V(u"map"),
V(u"min"),
V(u"from"),
V(u"colors"),
V(u"looks"),
V(u"light"),
V(u"dark"),
V(u"every"),
V(u"object"),
V(u"color"),
V(u" or "),
V(u"join"),
V(u"toLowerCase"),
V(u"includes"),
V(u"filter"),
V(u""),
V(u"get"),
V(u"push"),
V(u"set"),
V(u"some"),
V(u"palette"),
V(u"maps"),
V(u"ink"),
V(u"charCodeAt"),
V(u"a piece takes a meta object"),
V(u"name"),
V(u"trim"),
V(u"a piece takes a name: one line, such as \"orbit\""),
V(u"category"),
V(u"note"),
V(u"cols"),
V(u"rows"),
V(u"fps"),
V(u"options"),
V(u"options takes an object of the piece's options and their defaults"),
V(u"a palette takes 2 to 64 colours as #rrggbb"),
V(u"ground"),
V(u"cell"),
V(u"loop"),
V(u"number"),
V(u"isFinite"),
V(u"still"),
V(u"meta"),
V(u"default"),
V(u"function"),
V(u"prototype"),
V(u"create"),
V(u"assign"),
V(u"piece() takes a spec: { name, cols, rows } at least"),
V(u"generative"),
V(u"clock"),
V(u"setup"),
V(u"piece() takes a drawing, (t, s, ctx) => { ... }, or { setup: (options) => drawing }"),
V(u"clear"),
V(u"aspect"),
V(u"paper"),
V(u"mono"),
V(u"a piece's setup returns its drawing, (t, s, ctx) => { ... }"),
V(u"frame"),
V(u"text"),
V(u"clone"),
V(u"type"),
V(u"themed"),
V(u"size"),
V(u"\n"),
V(u"replace"),
V(u"split"),
V(u"shift"),
V(u"pop"),
V(u"trimStart"),
V(u"reduce"),
V(u"max"),
V(u"text takes printable characters and newlines, not control characters"),
V(u"padEnd"),
V(u"this takes a piece, a string of text or a Surface"),
V(u"at"),
V(u"load"),
V(u", "),
V(u"PI"),
V(u" .:-=+*#%@"),
V(u"detailed"),
V(u" .'`^\",:;Il!i><~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$"),
V(u"donut"),
V(u" .,-~:;=!*#$@"),
V(u"blocks"),
V(u" ░▒▓█"),
V(u"eighths"),
V(u" ▁▂▃▄▅▆▇█"),
V(u"dots"),
V(u" .·•●"),
V(u"lines"),
V(u" .-=≡"),
V(u"stars"),
V(u" .·+*"),
V(u"binary"),
V(u" #"),
V(u"#1f2328"),
V(u"#f0f6fc"),
V(u"#"),
V(u"0"),
V(u"toString"),
V(u"padStart"),
V(u"#cache"),
V(u"#ink"),
V(u"a palette takes one or more colours as #rrggbb, not an empty list"),
V(u"index"),
V(u"ocean"),
V(u"#7fb8d6"),
V(u"#3a8fc4"),
V(u"#0077b6"),
V(u"#025a8c"),
V(u"#023e6b"),
V(u"#03045e"),
V(u"#0a1f5c"),
V(u"#0353a4"),
V(u"#00b4d8"),
V(u"#90e0ef"),
V(u"#e0fbfc"),
V(u"sunset"),
V(u"#f4a261"),
V(u"#e76f51"),
V(u"#c9184a"),
V(u"#9d0b4a"),
V(u"#6a0d6b"),
V(u"#3b0f5c"),
V(u"#7b2cbf"),
V(u"#ff6b35"),
V(u"#ffb627"),
V(u"#ffe8a3"),
V(u"neon"),
V(u"#c77dff"),
V(u"#9d4edd"),
V(u"#e0218a"),
V(u"#b5179e"),
V(u"#7209b7"),
V(u"#3a0ca3"),
V(u"#3c096c"),
V(u"#7b2ff7"),
V(u"#f107a3"),
V(u"#ff5edf"),
V(u"#00e5ff"),
V(u"#e0ffff"),
V(u"fire"),
V(u"#fbbf24"),
V(u"#f59e0b"),
V(u"#ea580c"),
V(u"#c2410c"),
V(u"#991b1b"),
V(u"#5b0f0f"),
V(u"#4a0d02"),
V(u"#dc2626"),
V(u"#f97316"),
V(u"#facc15"),
V(u"#fef9c3"),
V(u"aurora"),
V(u"#a78bfa"),
V(u"#7c3aed"),
V(u"#0d9488"),
V(u"#047857"),
V(u"#065f46"),
V(u"#064e3b"),
V(u"#312e81"),
V(u"#0e7490"),
V(u"#059669"),
V(u"#22c55e"),
V(u"#86efac"),
V(u"#ecfdf5"),
V(u"forest"),
V(u"#a3d9a5"),
V(u"#4ade80"),
V(u"#16a34a"),
V(u"#15803d"),
V(u"#166534"),
V(u"#14532d"),
V(u"#052e16"),
V(u"#dcfce7"),
V(u"candy"),
V(u"#f9a8d4"),
V(u"#f472b6"),
V(u"#db2777"),
V(u"#a21caf"),
V(u"#7e22ce"),
V(u"#831843"),
V(u"#c084fc"),
V(u"#67e8f9"),
V(u"#fef08a"),
V(u"#d4d4d8"),
V(u"#a1a1aa"),
V(u"#71717a"),
V(u"#3f3f46"),
V(u"#18181b"),
V(u"#fafafa"),
V(u"#d6c4a8"),
V(u"#b08d62"),
V(u"#8b6a43"),
V(u"#5c4630"),
V(u"#3b2a1d"),
V(u"#3f2d20"),
V(u"#6b4f3a"),
V(u"#a07850"),
V(u"#d4b483"),
V(u"#f3e3c3"),
V(u"github"),
V(u"#9be9a8"),
V(u"#40c463"),
V(u"#30a14e"),
V(u"#216e39"),
V(u"#0e4429"),
V(u"#006d32"),
V(u"#26a641"),
V(u"#39d353"),
V(u"ice"),
V(u"#7dd3fc"),
V(u"#38bdf8"),
V(u"#0284c7"),
V(u"#075985"),
V(u"#0c4a6e"),
V(u"#0369a1"),
V(u"#bae6fd"),
V(u"#f0f9ff"),
V(u"gold"),
V(u"#eab308"),
V(u"#ca8a04"),
V(u"#a16207"),
V(u"#713f12"),
V(u"#fffbeb"),
V(u"lava"),
V(u"#fdba74"),
V(u"#450a0a"),
V(u"#ef4444"),
V(u"#fde047"),
V(u"matrix"),
V(u"#022c0f"),
V(u"#f0fdf4"),
V(u"night"),
V(u"#93c5fd"),
V(u"#60a5fa"),
V(u"#2563eb"),
V(u"#1e40af"),
V(u"#172554"),
V(u"#1e293b"),
V(u"#3b82f6"),
V(u"#f8fafc"),
V(u"space"),
V(u"#ddd6fe"),
V(u"#c4b5fd"),
V(u"#8b5cf6"),
V(u"#6d28d9"),
V(u"#4338ca"),
V(u"#1e1b4b"),
V(u"#2e1065"),
V(u"#5b21b6"),
V(u"#e0e7ff"),
V(u"#fff7ed"),
V(u"water"),
V(u"#1e3a8a"),
V(u"#1d4ed8"),
V(u"#a5d8ff"),
V(u"#e0f2fe"),
V(u"sea"),
V(u"#134e4a"),
V(u"#115e59"),
V(u"#0f766e"),
V(u"#14b8a6"),
V(u"#2dd4bf"),
V(u"#ccfbf1"),
V(u"cola"),
V(u"#2b1408"),
V(u"#431d0b"),
V(u"#7c3a12"),
V(u"#92400e"),
V(u"#5a250c"),
V(u"#74351a"),
V(u"#94532a"),
V(u"#ead0a8"),
V(u"lemonade"),
V(u"#854d0e"),
V(u"coffee"),
V(u"#3b2314"),
V(u"#4a2c18"),
V(u"#5b3a24"),
V(u"#7c4a2a"),
V(u"#7b5135"),
V(u"#946446"),
V(u"#b8875e"),
V(u"#e2c9a6"),
V(u"tea"),
V(u"#b45309"),
V(u"#d97706"),
V(u"#fde68a"),
V(u"juice"),
V(u"#9a3412"),
V(u"#fb923c"),
V(u"#fed7aa"),
V(u"wine"),
V(u"#4c0519"),
V(u"#881337"),
V(u"#9f1239"),
V(u"#be123c"),
V(u"#e11d48"),
V(u"#fda4af"),
V(u"milk"),
V(u"#64748b"),
V(u"#94a3b8"),
V(u"#cbd5e1"),
V(u"#e2e8f0"),
V(u"#f1f5f9"),
V(u"#ffffff"),
V(u"glass"),
V(u"#475569"),
V(u"#7f1d1d"),
V(u"#b91c1c"),
V(u"candle"),
V(u"smoke"),
V(u"#9ca3af"),
V(u"#6b7280"),
V(u"#4b5563"),
V(u"#d1d5db"),
V(u"steam"),
V(u"cloud"),
V(u"#e5e7eb"),
V(u"storm"),
V(u"#374151"),
V(u"#1f2937"),
V(u"steel"),
V(u"copper"),
V(u"#7c2d12"),
V(u"#ffedd5"),
V(u"wood"),
V(u"#3f2a14"),
V(u"#6b4423"),
V(u"#8b5a2b"),
V(u"#a0682f"),
V(u"#d29b5c"),
V(u"grass"),
V(u"seaweed"),
V(u"#10b981"),
V(u"#6ee7b7"),
V(u"sand"),
V(u"#d4a24c"),
V(u"#f5deb3"),
V(u"#9d174d"),
V(u"#ec4899"),
V(u"#fce7f3"),
V(u"cyan"),
V(u"#0891b2"),
V(u"#164e63"),
V(u"#155e75"),
V(u"#22d3ee"),
V(u"#ecfeff"),
V(u"lamp"),
V(u"#fcd34d"),
V(u"#fef3c7"),
V(u"ceramic"),
V(u"wax"),
V(u"#d6b98c"),
V(u"#78350f"),
V(u"#a8a29e"),
V(u"moon"),
V(u"#334155"),
V(u"rose"),
V(u"#fb7185"),
V(u"#ffe4e6"),
V(u"goldfish"),
V(u"brick"),
V(u"bubbles"),
V(u"fizz"),
V(u"#e0b98a"),
V(u"sparks"),
V(u"rain"),
V(u"#bfdbfe"),
V(u"snow"),
V(u"sky"),
V(u"#0ea5e9"),
V(u"#0f172a"),
V(u"materials"),
V(u"middle"),
V(u"center"),
V(u"centre"),
V(u"centred"),
V(u"mid"),
V(u"colour"),
V(u"colours"),
V(u"scale"),
V(u"dir"),
V(u"to"),
V(u"toward"),
V(u"way"),
V(u"direction"),
V(u"heading"),
V(u"towards"),
V(u"big"),
V(u"large"),
V(u"strong"),
V(u"huge"),
V(u"little"),
V(u"small"),
V(u"subtle"),
V(u"tiny"),
V(u"quick"),
V(u"fast"),
V(u"quickly"),
V(u"rapid"),
V(u"slowly"),
V(u"slow"),
V(u"medium"),
V(u"normal"),
V(u"heavy"),
V(u"weak"),
V(u"soft"),
V(u"hard"),
V(u"duration"),
V(u"period"),
V(u"seconds"),
V(u"time"),
V(u"delay"),
V(u"first"),
V(u"start"),
V(u"label"),
V(u"title"),
V(u"caption"),
V(u"width"),
V(u"height"),
V(u"columns"),
V(u"speed"),
V(u"rate"),
V(u"amount"),
V(u"strength"),
V(u"intensity"),
V(u"chars"),
V(u"#line"),
V(u"fill"),
V(u"resolve"),
V(u"put"),
V(u"fromCharCode"),
V(u"colorAt"),
V(u"clip"),
V(u"x"),
V(u"y"),
V(u"write"),
V(u"paste"),
V(u"mask"),
V(u" "),
V(u"apply"),
V(u"scenes"),
V(u"shapes"),
V(u"physics"),
V(u"nature"),
V(u"creatures"),
V(u"objects"),
V(u"effects"),
V(u"ui"),
V(u"data"),
V(u"logos"),
V(u"companies"),
V(u"distros"),
V(u"named"),
V(u"over"),
V(u"behind"),
V(u"repeat"),
V(u"freeze"),
V(u"pad"),
V(u"border"),
V(u"crop"),
V(u"flip"),
V(u"glint"),
V(u"shake"),
V(u"glitch"),
V(u"wave"),
V(u"fade"),
V(u"dissolve"),
V(u"rainbow"),
V(u"hueCycle"),
V(u"outline"),
V(u"shadow"),
V(u"scan"),
V(u"typeIn")}{
this->exports["fail"]=this->_v_3714_fail;
this->exports["and"]=this->_v_3717_and;
this->exports["TAU"]=this->_v_3720_TAU;
this->exports["clamp"]=this->_v_3721_clamp;
this->exports["lerp"]=this->_v_3726_lerp;
this->exports["smoothstep"]=this->_v_3731_smoothstep;
this->exports["fract"]=this->_v_3737_fract;
this->exports["hash"]=this->_v_3740_hash;
this->exports["mulberry32"]=this->_v_3747_mulberry32;
this->exports["valueNoise"]=this->_v_3753_valueNoise;
this->exports["bayer"]=this->_v_3771_bayer;
this->exports["ramps"]=this->_v_3775_ramps;
this->exports["ramp"]=this->_v_3777_ramp;
this->exports["shadeChar"]=this->_v_3780_shadeChar;
this->exports["INK"]=this->_v_3788_INK;
this->exports["isHex"]=this->_v_3790_isHex;
this->exports["rgb"]=this->_v_3793_rgb;
this->exports["hex"]=this->_v_3796_hex;
this->exports["mix"]=this->_v_3803_mix;
this->exports["gradient"]=this->_v_3813_gradient;
this->exports["nearest"]=this->_v_3830_nearest;
this->exports["Palette"]=this->_v_3844_Palette;
this->exports["schemes"]=this->_v_3862_schemes;
this->exports["materialColors"]=this->_v_3863_materialColors;
this->exports["colorsOf"]=this->_v_3872_colorsOf;
this->exports["colorOf"]=this->_v_3880_colorOf;
this->exports["suggest"]=this->_v_3920_suggest;
this->exports["mergePalettes"]=this->_v_3927_mergePalettes;
this->exports["EMPTY"]=this->_v_3945_EMPTY;
this->exports["NONE"]=this->_v_3946_NONE;
this->exports["code"]=this->_v_3947_code;
this->exports["Surface"]=this->_v_3951_Surface;
this->exports["MAX"]=this->_v_4056_MAX;
this->exports["checkMeta"]=this->_v_4057_checkMeta;
this->exports["Chainable"]=this->_v_4060_Chainable;
this->exports["chained"]=this->_v_4114_chained;
this->exports["specOf"]=this->_v_4117_specOf;
this->exports["spread"]=this->_v_4125_spread;
this->exports["metaOf"]=this->_v_4131_metaOf;
this->exports["piece"]=this->_v_4137_piece;
this->exports["asPiece"]=this->_v_4155_asPiece;
this->exports["sample"]=this->_v_4186_sample;
this->exports["snapshot"]=this->_v_4202_snapshot;
}
void init() override{if(initialized)return;initialized=true;
this->_v_3714_fail.get()=j::function([=](const j::Args &_args_fn3715,const V &_receiver_fn3715,const V &_self_fn3715) mutable ->V{
V _v_3716_what;
_v_3716_what=_args_fn3715[0];
{
j::raise(([&]()->V{V _callee4213=j::builtin("Error");return j::construct(_callee4213,j::Args{([&]()->V{std::u16string _text4212;_text4212+=u"ascii.rest: ";_text4212+=j::string(_v_3716_what);_text4212+=u"";return V(std::move(_text4212));})()});})());

}

return V{};
},1);
this->_v_3740_hash.get()=j::function([=](const j::Args &_args_fn3741,const V &_receiver_fn3741,const V &_self_fn3741) mutable ->V{
V _v_3742_a;
V _v_3743_b;
V _v_3744_c;
V _v_3745_d;
_v_3742_a=_args_fn3741[0];
V _default4214=_args_fn3741[1];if(_default4214.kind==V::Undefined||_default4214.kind==V::Hole)_default4214=V(0.0);
_v_3743_b=_default4214;
V _default4215=_args_fn3741[2];if(_default4215.kind==V::Undefined||_default4215.kind==V::Hole)_default4215=V(0.0);
_v_3744_c=_default4215;
V _default4216=_args_fn3741[3];if(_default4216.kind==V::Undefined||_default4216.kind==V::Hole)_default4216=V(0.0);
_v_3745_d=_default4216;
{
V _v_3746_h;
_v_3746_h=([&]()->V{V _lhs4217=([&]()->V{V _lhs4219=([&]()->V{V _lhs4221=([&]()->V{V _number4225=([&]()->V{V _lhs4227=_v_3742_a;V _rhs4228=V(0.0);return V(int(j::i32(_lhs4227)|j::i32(_rhs4228)));})();V _number4226=V(374761393.0);return V(double(int32_t(j::u32(_number4225)*j::u32(_number4226))));})();V _rhs4222=([&]()->V{V _number4231=([&]()->V{V _lhs4233=_v_3743_b;V _rhs4234=V(0.0);return V(int(j::i32(_lhs4233)|j::i32(_rhs4234)));})();V _number4232=V(668265263.0);return V(double(int32_t(j::u32(_number4231)*j::u32(_number4232))));})();return j::binary("+",_lhs4221,_rhs4222);})();V _rhs4220=([&]()->V{V _number4237=([&]()->V{V _lhs4239=_v_3744_c;V _rhs4240=V(0.0);return V(int(j::i32(_lhs4239)|j::i32(_rhs4240)));})();V _number4238=V(2246822519.0);return V(double(int32_t(j::u32(_number4237)*j::u32(_number4238))));})();return j::binary("+",_lhs4219,_rhs4220);})();V _rhs4218=([&]()->V{V _number4243=([&]()->V{V _lhs4245=_v_3745_d;V _rhs4246=V(0.0);return V(int(j::i32(_lhs4245)|j::i32(_rhs4246)));})();V _number4244=V(3266489917.0);return V(double(int32_t(j::u32(_number4243)*j::u32(_number4244))));})();return j::binary("+",_lhs4217,_rhs4218);})();
(void)((_v_3746_h=([&]()->V{V _number4252=([&]()->V{V _lhs4254=_v_3746_h;V _rhs4255=([&]()->V{V _lhs4256=_v_3746_h;V _rhs4257=V(13.0);return V(double(j::u32(_lhs4256)>>(j::u32(_rhs4257)&31)));})();return V(int(j::i32(_lhs4254)^j::i32(_rhs4255)));})();V _number4253=V(1274126177.0);return V(double(int32_t(j::u32(_number4252)*j::u32(_number4253))));})()));
return ([&]()->V{V _lhs4258=([&]()->V{V _lhs4260=([&]()->V{V _lhs4262=_v_3746_h;V _rhs4263=([&]()->V{V _lhs4264=_v_3746_h;V _rhs4265=V(16.0);return V(double(j::u32(_lhs4264)>>(j::u32(_rhs4265)&31)));})();return V(int(j::i32(_lhs4262)^j::i32(_rhs4263)));})();V _rhs4261=V(0.0);return V(double(j::u32(_lhs4260)>>(j::u32(_rhs4261)&31)));})();V _rhs4259=V(4294967296.0);return V(j::number(_lhs4258)/j::number(_rhs4259));})();

}

return V{};
},1);
this->_v_3747_mulberry32.get()=j::function([=](const j::Args &_args_fn3748,const V &_receiver_fn3748,const V &_self_fn3748) mutable ->V{
V _v_3749_seed;
_v_3749_seed=_args_fn3748[0];
{
j::Cell _v_3750_a;
_v_3750_a.get()=([&]()->V{V _lhs4266=_v_3749_seed;V _rhs4267=V(0.0);return V(int(j::i32(_lhs4266)|j::i32(_rhs4267)));})();
return j::function([=](const j::Args &_args_fn3751,const V &_receiver_fn3751,const V &_self_fn3751) mutable ->V{
{
V _v_3752_t;
(void)((_v_3750_a.get()=([&]()->V{V _lhs4269=([&]()->V{V _lhs4271=_v_3750_a.get();V _rhs4272=V(1831565813.0);return j::binary("+",_lhs4271,_rhs4272);})();V _rhs4270=V(0.0);return V(int(j::i32(_lhs4269)|j::i32(_rhs4270)));})()));
_v_3752_t=([&]()->V{V _number4279=([&]()->V{V _lhs4281=_v_3750_a.get();V _rhs4282=([&]()->V{V _lhs4283=_v_3750_a.get();V _rhs4284=V(15.0);return V(double(j::u32(_lhs4283)>>(j::u32(_rhs4284)&31)));})();return V(int(j::i32(_lhs4281)^j::i32(_rhs4282)));})();V _number4280=([&]()->V{V _lhs4285=V(1.0);V _rhs4286=_v_3750_a.get();return V(int(j::i32(_lhs4285)|j::i32(_rhs4286)));})();return V(double(int32_t(j::u32(_number4279)*j::u32(_number4280))));})();
(void)((_v_3752_t=([&]()->V{V _lhs4288=([&]()->V{V _lhs4290=_v_3752_t;V _rhs4291=([&]()->V{V _number4298=([&]()->V{V _lhs4300=_v_3752_t;V _rhs4301=([&]()->V{V _lhs4302=_v_3752_t;V _rhs4303=V(7.0);return V(double(j::u32(_lhs4302)>>(j::u32(_rhs4303)&31)));})();return V(int(j::i32(_lhs4300)^j::i32(_rhs4301)));})();V _number4299=([&]()->V{V _lhs4304=V(61.0);V _rhs4305=_v_3752_t;return V(int(j::i32(_lhs4304)|j::i32(_rhs4305)));})();return V(double(int32_t(j::u32(_number4298)*j::u32(_number4299))));})();return j::binary("+",_lhs4290,_rhs4291);})();V _rhs4289=_v_3752_t;return V(int(j::i32(_lhs4288)^j::i32(_rhs4289)));})()));
return ([&]()->V{V _lhs4306=([&]()->V{V _lhs4308=([&]()->V{V _lhs4310=_v_3752_t;V _rhs4311=([&]()->V{V _lhs4312=_v_3752_t;V _rhs4313=V(14.0);return V(double(j::u32(_lhs4312)>>(j::u32(_rhs4313)&31)));})();return V(int(j::i32(_lhs4310)^j::i32(_rhs4311)));})();V _rhs4309=V(0.0);return V(double(j::u32(_lhs4308)>>(j::u32(_rhs4309)&31)));})();V _rhs4307=V(4294967296.0);return V(j::number(_lhs4306)/j::number(_rhs4307));})();

}

return V{};
},0);

}

return V{};
},1);
this->_v_3753_valueNoise.get()=j::function([=](const j::Args &_args_fn3754,const V &_receiver_fn3754,const V &_self_fn3754) mutable ->V{
V _v_3755_x;
V _v_3756_y;
V _v_3757_seed;
_v_3755_x=_args_fn3754[0];
_v_3756_y=_args_fn3754[1];
V _default4314=_args_fn3754[2];if(_default4314.kind==V::Undefined||_default4314.kind==V::Hole)_default4314=V(0.0);
_v_3757_seed=_default4314;
{
V _v_3758_xi;
V _v_3759_yi;
V _v_3760_fx;
V _v_3761_fy;
V _v_3762_u;
V _v_3763_v;
V _v_3764_a;
V _v_3765_b;
V _v_3766_c;
V _v_3767_d;
_v_3758_xi=([&]()->V{V _number4315=_v_3755_x;return V(std::floor(j::number(_number4315)));})();
_v_3759_yi=([&]()->V{V _number4316=_v_3756_y;return V(std::floor(j::number(_number4316)));})();
_v_3760_fx=([&]()->V{V _lhs4317=_v_3755_x;V _rhs4318=_v_3758_xi;return V(j::number(_lhs4317)-j::number(_rhs4318));})();
_v_3761_fy=([&]()->V{V _lhs4319=_v_3756_y;V _rhs4320=_v_3759_yi;return V(j::number(_lhs4319)-j::number(_rhs4320));})();
_v_3762_u=([&]()->V{V _lhs4321=([&]()->V{V _lhs4323=_v_3760_fx;V _rhs4324=_v_3760_fx;return V(j::number(_lhs4323)*j::number(_rhs4324));})();V _rhs4322=([&]()->V{V _lhs4325=V(3.0);V _rhs4326=([&]()->V{V _lhs4327=V(2.0);V _rhs4328=_v_3760_fx;return V(j::number(_lhs4327)*j::number(_rhs4328));})();return V(j::number(_lhs4325)-j::number(_rhs4326));})();return V(j::number(_lhs4321)*j::number(_rhs4322));})();
_v_3763_v=([&]()->V{V _lhs4329=([&]()->V{V _lhs4331=_v_3761_fy;V _rhs4332=_v_3761_fy;return V(j::number(_lhs4331)*j::number(_rhs4332));})();V _rhs4330=([&]()->V{V _lhs4333=V(3.0);V _rhs4334=([&]()->V{V _lhs4335=V(2.0);V _rhs4336=_v_3761_fy;return V(j::number(_lhs4335)*j::number(_rhs4336));})();return V(j::number(_lhs4333)-j::number(_rhs4334));})();return V(j::number(_lhs4329)*j::number(_rhs4330));})();
_v_3764_a=([&]()->V{V _callee4337=this->_v_3740_hash.get();return j::call(_callee4337,j::Args{_v_3758_xi,_v_3759_yi,_v_3757_seed});})();
_v_3765_b=([&]()->V{V _callee4340=this->_v_3740_hash.get();return j::call(_callee4340,j::Args{([&]()->V{V _lhs4338=_v_3758_xi;V _rhs4339=V(1.0);return j::binary("+",_lhs4338,_rhs4339);})(),_v_3759_yi,_v_3757_seed});})();
_v_3766_c=([&]()->V{V _callee4343=this->_v_3740_hash.get();return j::call(_callee4343,j::Args{_v_3758_xi,([&]()->V{V _lhs4341=_v_3759_yi;V _rhs4342=V(1.0);return j::binary("+",_lhs4341,_rhs4342);})(),_v_3757_seed});})();
_v_3767_d=([&]()->V{V _callee4348=this->_v_3740_hash.get();return j::call(_callee4348,j::Args{([&]()->V{V _lhs4344=_v_3758_xi;V _rhs4345=V(1.0);return j::binary("+",_lhs4344,_rhs4345);})(),([&]()->V{V _lhs4346=_v_3759_yi;V _rhs4347=V(1.0);return j::binary("+",_lhs4346,_rhs4347);})(),_v_3757_seed});})();
return ([&]()->V{V _lhs4349=([&]()->V{V _lhs4351=([&]()->V{V _lhs4353=_v_3764_a;V _rhs4354=([&]()->V{V _lhs4355=([&]()->V{V _lhs4357=_v_3765_b;V _rhs4358=_v_3764_a;return V(j::number(_lhs4357)-j::number(_rhs4358));})();V _rhs4356=_v_3762_u;return V(j::number(_lhs4355)*j::number(_rhs4356));})();return j::binary("+",_lhs4353,_rhs4354);})();V _rhs4352=([&]()->V{V _lhs4359=([&]()->V{V _lhs4361=_v_3766_c;V _rhs4362=_v_3764_a;return V(j::number(_lhs4361)-j::number(_rhs4362));})();V _rhs4360=_v_3763_v;return V(j::number(_lhs4359)*j::number(_rhs4360));})();return j::binary("+",_lhs4351,_rhs4352);})();V _rhs4350=([&]()->V{V _lhs4363=([&]()->V{V _lhs4365=([&]()->V{V _lhs4367=([&]()->V{V _lhs4369=([&]()->V{V _lhs4371=_v_3764_a;V _rhs4372=_v_3765_b;return V(j::number(_lhs4371)-j::number(_rhs4372));})();V _rhs4370=_v_3766_c;return V(j::number(_lhs4369)-j::number(_rhs4370));})();V _rhs4368=_v_3767_d;return j::binary("+",_lhs4367,_rhs4368);})();V _rhs4366=_v_3762_u;return V(j::number(_lhs4365)*j::number(_rhs4366));})();V _rhs4364=_v_3763_v;return V(j::number(_lhs4363)*j::number(_rhs4364));})();return j::binary("+",_lhs4349,_rhs4350);})();

}

return V{};
},2);
this->_v_3777_ramp.get()=j::function([=](const j::Args &_args_fn3778,const V &_receiver_fn3778,const V &_self_fn3778) mutable ->V{
V _v_3779_r;
V _default4373=_args_fn3778[0];if(_default4373.kind==V::Undefined||_default4373.kind==V::Hole)_default4373=this->_literals[0];
_v_3779_r=_default4373;
{
if(j::truth(([&]()->V{V _lhs4374=j::unary("typeof",_v_3779_r);V _rhs4375=this->_literals[1];return V(!j::equal(_lhs4374,_rhs4375,true));})())){(void)(([&]()->V{V _callee4382=this->_v_3714_fail.get();return j::call(_callee4382,j::Args{([&]()->V{std::u16string _text4376;_text4376+=u"a ramp takes a name, ";_text4376+=j::string(([&]()->V{V _callee4380=this->_v_3717_and.get();return j::call(_callee4380,j::Args{([&]()->V{V _receiver4377=j::builtin("Object");V _method4378=this->_literals[2];V _method=j::get(_receiver4377,_method4378);j::Args _params4379=j::Args{this->_v_3775_ramps.get()};return j::call(_method,_params4379,_receiver4377);})()});})());_text4376+=u", or a string of characters, not ";_text4376+=j::string(([&]()->V{V _callee4381=j::builtin("String");return j::call(_callee4381,j::Args{_v_3779_r});})());_text4376+=u"";return V(std::move(_text4376));})()});})());
}
if(j::truth(([&]()->V{V _receiver4383=j::builtin("Object");V _method4384=this->_literals[3];V _method=j::get(_receiver4383,_method4384);j::Args _params4385=j::Args{this->_v_3775_ramps.get(),_v_3779_r};return j::call(_method,_params4385,_receiver4383);})())){return j::get(this->_v_3775_ramps.get(),_v_3779_r);
}
if(j::truth(([&]()->V{V _logical4386=([&]()->V{V _logical4387=([&]()->V{V _lhs4388=j::get(_v_3779_r,this->_literals[4]);V _rhs4389=V(2.0);return j::binary("<",_lhs4388,_rhs4389);})();return !j::truth(_logical4387)?([&]()->V{V _receiver4390=this->_v_3776_CONTROL.get();V _method4391=this->_literals[5];V _method=j::get(_receiver4390,_method4391);j::Args _params4392=j::Args{_v_3779_r};return j::call(_method,_params4392,_receiver4390);})():_logical4387;})();return !j::truth(_logical4386)?([&]()->V{V _receiver4393=j::regexp(u"[\\ud800-\\udfff]","");V _method4394=this->_literals[5];V _method=j::get(_receiver4393,_method4394);j::Args _params4395=j::Args{_v_3779_r};return j::call(_method,_params4395,_receiver4393);})():_logical4386;})())){(void)(([&]()->V{V _callee4404=this->_v_3714_fail.get();return j::call(_callee4404,j::Args{([&]()->V{std::u16string _text4396;_text4396+=u"a ramp takes a name, ";_text4396+=j::string(([&]()->V{V _callee4400=this->_v_3717_and.get();return j::call(_callee4400,j::Args{([&]()->V{V _receiver4397=j::builtin("Object");V _method4398=this->_literals[2];V _method=j::get(_receiver4397,_method4398);j::Args _params4399=j::Args{this->_v_3775_ramps.get()};return j::call(_method,_params4399,_receiver4397);})()});})());_text4396+=u", or two or more characters of your own, not ";_text4396+=j::string(([&]()->V{V _receiver4401=j::builtin("JSON");V _method4402=this->_literals[6];V _method=j::get(_receiver4401,_method4402);j::Args _params4403=j::Args{_v_3779_r};return j::call(_method,_params4403,_receiver4401);})());_text4396+=u"";return V(std::move(_text4396));})()});})());
}
return _v_3779_r;

}

return V{};
},0);
this->_v_3780_shadeChar.get()=j::function([=](const j::Args &_args_fn3781,const V &_receiver_fn3781,const V &_self_fn3781) mutable ->V{
V _v_3782_chars;
V _v_3783_v;
V _v_3784_flip;
V _v_3785_jitter;
_v_3782_chars=_args_fn3781[0];
_v_3783_v=_args_fn3781[1];
V _default4405=_args_fn3781[2];if(_default4405.kind==V::Undefined||_default4405.kind==V::Hole)_default4405=V(false);
_v_3784_flip=_default4405;
V _default4406=_args_fn3781[3];if(_default4406.kind==V::Undefined||_default4406.kind==V::Hole)_default4406=V(0.0);
_v_3785_jitter=_default4406;
{
V _v_3786_n;
V _v_3787_i;
_v_3786_n=j::get(_v_3782_chars,this->_literals[4]);
_v_3787_i=([&]()->V{V _number4412=([&]()->V{V _lhs4413=([&]()->V{V _lhs4415=([&]()->V{V _callee4417=this->_v_3721_clamp.get();return j::call(_callee4417,j::Args{_v_3783_v});})();V _rhs4416=_v_3786_n;return V(j::number(_lhs4415)*j::number(_rhs4416));})();V _rhs4414=_v_3785_jitter;return j::binary("+",_lhs4413,_rhs4414);})();return V(std::floor(j::number(_number4412)));})();
(void)((_v_3787_i=(j::truth(([&]()->V{V _lhs4419=_v_3787_i;V _rhs4420=V(0.0);return j::binary("<",_lhs4419,_rhs4420);})())?V(0.0):(j::truth(([&]()->V{V _lhs4421=_v_3787_i;V _rhs4422=_v_3786_n;return j::binary(">=",_lhs4421,_rhs4422);})())?([&]()->V{V _lhs4423=_v_3786_n;V _rhs4424=V(1.0);return V(j::number(_lhs4423)-j::number(_rhs4424));})():_v_3787_i))));
return j::get(_v_3782_chars,(j::truth(_v_3784_flip)?([&]()->V{V _lhs4425=([&]()->V{V _lhs4427=_v_3786_n;V _rhs4428=V(1.0);return V(j::number(_lhs4427)-j::number(_rhs4428));})();V _rhs4426=_v_3787_i;return V(j::number(_lhs4425)-j::number(_rhs4426));})():_v_3787_i));

}

return V{};
},2);
this->_v_3793_rgb.get()=j::function([=](const j::Args &_args_fn3794,const V &_receiver_fn3794,const V &_self_fn3794) mutable ->V{
V _v_3795_hex;
_v_3795_hex=_args_fn3794[0];
{
if(j::truth(j::unary("!",([&]()->V{V _callee4429=this->_v_3790_isHex.get();return j::call(_callee4429,j::Args{_v_3795_hex});})()))){(void)(([&]()->V{V _callee4434=this->_v_3714_fail.get();return j::call(_callee4434,j::Args{([&]()->V{std::u16string _text4430;_text4430+=u"a colour takes #rrggbb, not ";_text4430+=j::string(([&]()->V{V _receiver4431=j::builtin("JSON");V _method4432=this->_literals[6];V _method=j::get(_receiver4431,_method4432);j::Args _params4433=j::Args{_v_3795_hex};return j::call(_method,_params4433,_receiver4431);})());_text4430+=u"";return V(std::move(_text4430));})()});})());
}
return ([&]()->V{j::Args _array4435;_array4435.push_back(([&]()->V{V _callee4439=j::builtin("parseInt");return j::call(_callee4439,j::Args{([&]()->V{V _receiver4436=_v_3795_hex;V _method4437=this->_literals[7];V _method=j::get(_receiver4436,_method4437);j::Args _params4438=j::Args{V(1.0),V(3.0)};return j::call(_method,_params4438,_receiver4436);})(),V(16.0)});})());_array4435.push_back(([&]()->V{V _callee4443=j::builtin("parseInt");return j::call(_callee4443,j::Args{([&]()->V{V _receiver4440=_v_3795_hex;V _method4441=this->_literals[7];V _method=j::get(_receiver4440,_method4441);j::Args _params4442=j::Args{V(3.0),V(5.0)};return j::call(_method,_params4442,_receiver4440);})(),V(16.0)});})());_array4435.push_back(([&]()->V{V _callee4447=j::builtin("parseInt");return j::call(_callee4447,j::Args{([&]()->V{V _receiver4444=_v_3795_hex;V _method4445=this->_literals[7];V _method=j::get(_receiver4444,_method4445);j::Args _params4446=j::Args{V(5.0),V(7.0)};return j::call(_method,_params4446,_receiver4444);})(),V(16.0)});})());return j::array(std::move(_array4435));})();

}

return V{};
},1);
this->_v_3813_gradient.get()=j::function([=](const j::Args &_args_fn3814,const V &_receiver_fn3814,const V &_self_fn3814) mutable ->V{
V _v_3815_stops;
j::Cell _v_3816_n;
_v_3815_stops=_args_fn3814[0];
_v_3816_n.get()=_args_fn3814[1];
{
j::Cell _v_3817_c;
if(j::truth(([&]()->V{V _logical4448=j::unary("!",([&]()->V{V _receiver4449=j::builtin("Array");V _method4450=this->_literals[8];V _method=j::get(_receiver4449,_method4450);j::Args _params4451=j::Args{_v_3815_stops};return j::call(_method,_params4451,_receiver4449);})());return !j::truth(_logical4448)?j::unary("!",j::get(_v_3815_stops,this->_literals[4])):_logical4448;})())){(void)(([&]()->V{V _callee4452=this->_v_3714_fail.get();return j::call(_callee4452,j::Args{this->_literals[9]});})());
}
if(j::truth(([&]()->V{V _logical4453=j::unary("!",([&]()->V{V _receiver4454=j::builtin("Number");V _method4455=this->_literals[10];V _method=j::get(_receiver4454,_method4455);j::Args _params4456=j::Args{_v_3816_n.get()};return j::call(_method,_params4456,_receiver4454);})());return !j::truth(_logical4453)?([&]()->V{V _lhs4457=_v_3816_n.get();V _rhs4458=V(1.0);return j::binary("<",_lhs4457,_rhs4458);})():_logical4453;})())){(void)(([&]()->V{V _callee4461=this->_v_3714_fail.get();return j::call(_callee4461,j::Args{([&]()->V{std::u16string _text4459;_text4459+=u"a gradient takes a whole number of colours of 1 or more, not ";_text4459+=j::string(([&]()->V{V _callee4460=j::builtin("String");return j::call(_callee4460,j::Args{_v_3816_n.get()});})());_text4459+=u"";return V(std::move(_text4459));})()});})());
}
_v_3817_c.get()=([&]()->V{V _receiver4462=_v_3815_stops;V _method4463=this->_literals[11];V _method=j::get(_receiver4462,_method4463);j::Args _params4464=j::Args{this->_v_3793_rgb.get()};return j::call(_method,_params4464,_receiver4462);})();
return ([&]()->V{V _receiver4496=j::builtin("Array");V _method4497=this->_literals[13];V _method=j::get(_receiver4496,_method4497);j::Args _params4498=j::Args{([&]()->V{V _obj4465=j::object();j::put(_obj4465,this->_literals[4],_v_3816_n.get());return _obj4465;})(),j::function([=](const j::Args &_args_fn3818,const V &_receiver_fn3818,const V &_self_fn3818) mutable ->V{
V _v_3819__;
V _v_3820_i;
_v_3819__=_args_fn3818[0];
_v_3820_i=_args_fn3818[1];
{
j::Cell _v_3821_k;
j::Cell _v_3822_a;
_v_3821_k.get()=(j::truth(([&]()->V{V _lhs4466=_v_3816_n.get();V _rhs4467=V(1.0);return j::binary(">",_lhs4466,_rhs4467);})())?([&]()->V{V _lhs4468=([&]()->V{V _lhs4470=_v_3820_i;V _rhs4471=([&]()->V{V _lhs4472=_v_3816_n.get();V _rhs4473=V(1.0);return V(j::number(_lhs4472)-j::number(_rhs4473));})();return V(j::number(_lhs4470)/j::number(_rhs4471));})();V _rhs4469=([&]()->V{V _lhs4474=j::get(_v_3817_c.get(),this->_literals[4]);V _rhs4475=V(1.0);return V(j::number(_lhs4474)-j::number(_rhs4475));})();return V(j::number(_lhs4468)*j::number(_rhs4469));})():V(0.0));
_v_3822_a.get()=([&]()->V{V _receiver4481=j::builtin("Math");V _method4482=this->_literals[12];V _method=j::get(_receiver4481,_method4482);j::Args _params4483=j::Args{([&]()->V{V _lhs4476=j::get(_v_3817_c.get(),this->_literals[4]);V _rhs4477=V(2.0);return V(j::number(_lhs4476)-j::number(_rhs4477));})(),([&]()->V{V _number4478=_v_3821_k.get();return V(std::floor(j::number(_number4478)));})()};return j::call(_method,_params4483,_receiver4481);})();
return (j::truth(([&]()->V{V _lhs4484=j::get(_v_3817_c.get(),this->_literals[4]);V _rhs4485=V(1.0);return V(j::equal(_lhs4484,_rhs4485,true));})())?([&]()->V{V _callee4486=this->_v_3796_hex.get();return j::call(_callee4486,j::Args{j::get(_v_3817_c.get(),V(0.0))});})():([&]()->V{V _callee4495=this->_v_3796_hex.get();return j::call(_callee4495,j::Args{([&]()->V{V _receiver4492=j::get(_v_3817_c.get(),_v_3822_a.get());V _method4493=this->_literals[11];V _method=j::get(_receiver4492,_method4493);j::Args _params4494=j::Args{j::function([=](const j::Args &_args_fn3823,const V &_receiver_fn3823,const V &_self_fn3823) mutable ->V{
V _v_3824_v;
V _v_3825_j;
_v_3824_v=_args_fn3823[0];
_v_3825_j=_args_fn3823[1];
return ([&]()->V{V _callee4491=this->_v_3726_lerp.get();return j::call(_callee4491,j::Args{_v_3824_v,j::get(j::get(_v_3817_c.get(),([&]()->V{V _lhs4487=_v_3822_a.get();V _rhs4488=V(1.0);return j::binary("+",_lhs4487,_rhs4488);})()),_v_3825_j),([&]()->V{V _lhs4489=_v_3821_k.get();V _rhs4490=_v_3822_a.get();return V(j::number(_lhs4489)-j::number(_rhs4490));})()});})();
return V{};
},2)};return j::call(_method,_params4494,_receiver4492);})()});})());

}

return V{};
},2)};return j::call(_method,_params4498,_receiver4496);})();

}

return V{};
},2);
this->_v_3830_nearest.get()=j::function([=](const j::Args &_args_fn3831,const V &_receiver_fn3831,const V &_self_fn3831) mutable ->V{
V _v_3832_colors;
V _v_3833_color;
V _v_3834_from;
V _v_3835_to;
_v_3832_colors=_args_fn3831[0];
_v_3833_color=_args_fn3831[1];
V _default4499=_args_fn3831[2];if(_default4499.kind==V::Undefined||_default4499.kind==V::Hole)_default4499=V(0.0);
_v_3834_from=_default4499;
V _default4500=_args_fn3831[3];if(_default4500.kind==V::Undefined||_default4500.kind==V::Hole)_default4500=j::get(_v_3832_colors,this->_literals[4]);
_v_3835_to=_default4500;
{
V _v_3836_want;
V _v_3837_best;
V _v_3838_bd;
_v_3836_want=([&]()->V{V _callee4501=this->_v_3793_rgb.get();return j::call(_callee4501,j::Args{_v_3833_color});})();
_v_3837_best=_v_3834_from;
_v_3838_bd=j::builtin("Infinity");
{V _v_3839_i;
_v_3839_i=_v_3834_from;
for(;j::truth(([&]()->V{V _lhs4502=_v_3839_i;V _rhs4503=_v_3835_to;return j::binary("<",_lhs4502,_rhs4503);})());(void)(j::increment(_v_3839_i,1,false))){
V _v_3840_d;
_v_3840_d=([&]()->V{V _callee4505=this->_v_3826_distance.get();return j::call(_callee4505,j::Args{([&]()->V{V _callee4504=this->_v_3793_rgb.get();return j::call(_callee4504,j::Args{j::get(_v_3832_colors,_v_3839_i)});})(),_v_3836_want});})();
if(j::truth(([&]()->V{V _lhs4506=_v_3840_d;V _rhs4507=_v_3838_bd;return j::binary("<",_lhs4506,_rhs4507);})())){(void)(((_v_3838_bd=_v_3840_d),(_v_3837_best=_v_3839_i)));
}

}
}
return _v_3837_best;

}

return V{};
},2);
this->_v_3872_colorsOf.get()=j::function([=](const j::Args &_args_fn3873,const V &_receiver_fn3873,const V &_self_fn3873) mutable ->V{
V _v_3874_v;
V _v_3875_what;
V _v_3876_prefer;
_v_3874_v=_args_fn3873[0];
V _default4510=_args_fn3873[1];if(_default4510.kind==V::Undefined||_default4510.kind==V::Hole)_default4510=this->_literals[14];
_v_3875_what=_default4510;
V _default4511=_args_fn3873[2];if(_default4511.kind==V::Undefined||_default4511.kind==V::Hole)_default4511=this->_literals[15];
_v_3876_prefer=_default4511;
{
if(j::truth(([&]()->V{V _lhs4512=j::unary("typeof",_v_3874_v);V _rhs4513=this->_literals[1];return V(j::equal(_lhs4512,_rhs4513,true));})())){
V _v_3877_s;
if(j::truth(([&]()->V{V _callee4514=this->_v_3790_isHex.get();return j::call(_callee4514,j::Args{_v_3874_v});})())){return ([&]()->V{j::Args _array4515;_array4515.push_back(_v_3874_v);return j::array(std::move(_array4515));})();
}
_v_3877_s=([&]()->V{V _callee4516=this->_v_3864_named.get();return j::call(_callee4516,j::Args{_v_3874_v,_v_3876_prefer});})();
if(j::truth(_v_3877_s)){return ([&]()->V{V _obj4517=j::object();j::put(_obj4517,this->_literals[16],([&]()->V{j::Args _array4518;for(const auto &_value:j::elements(j::get(_v_3877_s,this->_literals[16])))_array4518.push_back(_value);return j::array(std::move(_array4518));})());j::put(_obj4517,this->_literals[17],([&]()->V{j::Args _array4519;for(const auto &_value:j::elements(j::get(_v_3877_s,this->_literals[17])))_array4519.push_back(_value);return j::array(std::move(_array4519));})());return _obj4517;})();
}
return ([&]()->V{V _callee4526=this->_v_3714_fail.get();return j::call(_callee4526,j::Args{([&]()->V{std::u16string _text4520;_text4520+=u"";_text4520+=j::string(_v_3875_what);_text4520+=u" takes ";_text4520+=j::string(([&]()->V{V _callee4521=this->_v_3870_NAMES.get();return j::call(_callee4521,j::Args{});})());_text4520+=u", colours as #rrggbb, or { light, dark }, not ";_text4520+=j::string(([&]()->V{V _receiver4522=j::builtin("JSON");V _method4523=this->_literals[6];V _method=j::get(_receiver4522,_method4523);j::Args _params4524=j::Args{_v_3874_v};return j::call(_method,_params4524,_receiver4522);})());_text4520+=u": ";_text4520+=j::string(([&]()->V{V _callee4525=this->_v_3889_didYouMean.get();return j::call(_callee4525,j::Args{_v_3874_v});})());_text4520+=u"";return V(std::move(_text4520));})()});})();

}

if(j::truth(([&]()->V{V _receiver4527=j::builtin("Array");V _method4528=this->_literals[8];V _method=j::get(_receiver4527,_method4528);j::Args _params4529=j::Args{_v_3874_v};return j::call(_method,_params4529,_receiver4527);})())){
if(j::truth(([&]()->V{V _logical4530=j::unary("!",j::get(_v_3874_v,this->_literals[4]));return !j::truth(_logical4530)?j::unary("!",([&]()->V{V _receiver4531=_v_3874_v;V _method4532=this->_literals[18];V _method=j::get(_receiver4531,_method4532);j::Args _params4533=j::Args{this->_v_3790_isHex.get()};return j::call(_method,_params4533,_receiver4531);})()):_logical4530;})())){(void)(([&]()->V{V _callee4538=this->_v_3714_fail.get();return j::call(_callee4538,j::Args{([&]()->V{std::u16string _text4534;_text4534+=u"";_text4534+=j::string(_v_3875_what);_text4534+=u" takes colours as #rrggbb, one or more, not ";_text4534+=j::string(([&]()->V{V _receiver4535=j::builtin("JSON");V _method4536=this->_literals[6];V _method=j::get(_receiver4535,_method4536);j::Args _params4537=j::Args{_v_3874_v};return j::call(_method,_params4537,_receiver4535);})());_text4534+=u"";return V(std::move(_text4534));})()});})());
}
return ([&]()->V{j::Args _array4539;for(const auto &_value:j::elements(_v_3874_v))_array4539.push_back(_value);return j::array(std::move(_array4539));})();

}

if(j::truth(([&]()->V{V _logical4540=([&]()->V{V _logical4541=([&]()->V{V _logical4542=([&]()->V{V _lhs4543=_v_3874_v;V _rhs4544=V::null();return V(!j::equal(_lhs4543,_rhs4544,true));})();return j::truth(_logical4542)?([&]()->V{V _lhs4545=j::unary("typeof",_v_3874_v);V _rhs4546=this->_literals[19];return V(j::equal(_lhs4545,_rhs4546,true));})():_logical4542;})();return j::truth(_logical4541)?([&]()->V{V _receiver4547=j::builtin("Array");V _method4548=this->_literals[8];V _method=j::get(_receiver4547,_method4548);j::Args _params4549=j::Args{j::get(_v_3874_v,this->_literals[16])};return j::call(_method,_params4549,_receiver4547);})():_logical4541;})();return j::truth(_logical4540)?([&]()->V{V _receiver4550=j::builtin("Array");V _method4551=this->_literals[8];V _method=j::get(_receiver4550,_method4551);j::Args _params4552=j::Args{j::get(_v_3874_v,this->_literals[17])};return j::call(_method,_params4552,_receiver4550);})():_logical4540;})())){
V _v_3878_light;
V _v_3879_dark;
V _pattern4553=_v_3874_v;
_v_3878_light=j::get(_pattern4553,this->_literals[16]);
_v_3879_dark=j::get(_pattern4553,this->_literals[17]);
if(j::truth(([&]()->V{V _logical4554=([&]()->V{V _logical4555=([&]()->V{V _logical4556=j::unary("!",j::get(_v_3878_light,this->_literals[4]));return !j::truth(_logical4556)?j::unary("!",j::get(_v_3879_dark,this->_literals[4])):_logical4556;})();return !j::truth(_logical4555)?j::unary("!",([&]()->V{V _receiver4557=_v_3878_light;V _method4558=this->_literals[18];V _method=j::get(_receiver4557,_method4558);j::Args _params4559=j::Args{this->_v_3790_isHex.get()};return j::call(_method,_params4559,_receiver4557);})()):_logical4555;})();return !j::truth(_logical4554)?j::unary("!",([&]()->V{V _receiver4560=_v_3879_dark;V _method4561=this->_literals[18];V _method=j::get(_receiver4560,_method4561);j::Args _params4562=j::Args{this->_v_3790_isHex.get()};return j::call(_method,_params4562,_receiver4560);})()):_logical4554;})())){(void)(([&]()->V{V _callee4567=this->_v_3714_fail.get();return j::call(_callee4567,j::Args{([&]()->V{std::u16string _text4563;_text4563+=u"";_text4563+=j::string(_v_3875_what);_text4563+=u" takes { light, dark }, each one or more colours as #rrggbb, not ";_text4563+=j::string(([&]()->V{V _receiver4564=j::builtin("JSON");V _method4565=this->_literals[6];V _method=j::get(_receiver4564,_method4565);j::Args _params4566=j::Args{_v_3874_v};return j::call(_method,_params4566,_receiver4564);})());_text4563+=u"";return V(std::move(_text4563));})()});})());
}
return ([&]()->V{V _obj4568=j::object();j::put(_obj4568,this->_literals[16],([&]()->V{j::Args _array4569;for(const auto &_value:j::elements(_v_3878_light))_array4569.push_back(_value);return j::array(std::move(_array4569));})());j::put(_obj4568,this->_literals[17],([&]()->V{j::Args _array4570;for(const auto &_value:j::elements(_v_3879_dark))_array4570.push_back(_value);return j::array(std::move(_array4570));})());return _obj4568;})();

}

return ([&]()->V{V _callee4581=this->_v_3714_fail.get();return j::call(_callee4581,j::Args{([&]()->V{std::u16string _text4571;_text4571+=u"";_text4571+=j::string(_v_3875_what);_text4571+=u" takes ";_text4571+=j::string(([&]()->V{V _callee4572=this->_v_3870_NAMES.get();return j::call(_callee4572,j::Args{});})());_text4571+=u", colours as #rrggbb, or { light, dark }, not ";_text4571+=j::string((j::truth(([&]()->V{V _lhs4573=j::unary("typeof",_v_3874_v);V _rhs4574=this->_literals[19];return V(j::equal(_lhs4573,_rhs4574,true));})())?([&]()->V{V _logical4575=([&]()->V{V _receiver4576=j::builtin("JSON");V _method4577=this->_literals[6];V _method=j::get(_receiver4576,_method4577);j::Args _params4578=j::Args{_v_3874_v};return j::call(_method,_params4578,_receiver4576);})();return j::nullish(_logical4575)?([&]()->V{V _callee4579=j::builtin("String");return j::call(_callee4579,j::Args{_v_3874_v});})():_logical4575;})():([&]()->V{V _callee4580=j::builtin("String");return j::call(_callee4580,j::Args{_v_3874_v});})()));_text4571+=u"";return V(std::move(_text4571));})()});})();

}

return V{};
},1);
this->_v_3880_colorOf.get()=j::function([=](const j::Args &_args_fn3881,const V &_receiver_fn3881,const V &_self_fn3881) mutable ->V{
V _v_3882_v;
V _v_3883_what;
_v_3882_v=_args_fn3881[0];
V _default4582=_args_fn3881[1];if(_default4582.kind==V::Undefined||_default4582.kind==V::Hole)_default4582=this->_literals[20];
_v_3883_what=_default4582;
{
V _v_3888_o;
if(j::truth(([&]()->V{V _callee4583=this->_v_3790_isHex.get();return j::call(_callee4583,j::Args{_v_3882_v});})())){return ([&]()->V{V _obj4584=j::object();j::put(_obj4584,this->_literals[16],_v_3882_v);j::put(_obj4584,this->_literals[17],_v_3882_v);return _obj4584;})();
}
if(j::truth(([&]()->V{V _lhs4585=j::unary("typeof",_v_3882_v);V _rhs4586=this->_literals[1];return V(j::equal(_lhs4585,_rhs4586,true));})())){
V _v_3884_s;
V _v_3885_strong;
_v_3884_s=([&]()->V{V _callee4587=this->_v_3864_named.get();return j::call(_callee4587,j::Args{_v_3882_v,this->_literals[15]});})();
if(j::truth(j::unary("!",_v_3884_s))){return ([&]()->V{V _callee4594=this->_v_3714_fail.get();return j::call(_callee4594,j::Args{([&]()->V{std::u16string _text4588;_text4588+=u"";_text4588+=j::string(_v_3883_what);_text4588+=u" takes a colour as #rrggbb, { light, dark }, or ";_text4588+=j::string(([&]()->V{V _callee4589=this->_v_3870_NAMES.get();return j::call(_callee4589,j::Args{});})());_text4588+=u", not ";_text4588+=j::string(([&]()->V{V _receiver4590=j::builtin("JSON");V _method4591=this->_literals[6];V _method=j::get(_receiver4590,_method4591);j::Args _params4592=j::Args{_v_3882_v};return j::call(_method,_params4592,_receiver4590);})());_text4588+=u": ";_text4588+=j::string(([&]()->V{V _callee4593=this->_v_3889_didYouMean.get();return j::call(_callee4593,j::Args{_v_3882_v});})());_text4588+=u"";return V(std::move(_text4588));})()});})();
}
_v_3885_strong=j::function([=](const j::Args &_args_fn3886,const V &_receiver_fn3886,const V &_self_fn3886) mutable ->V{
V _v_3887_list;
_v_3887_list=_args_fn3886[0];
return j::get(_v_3887_list,([&]()->V{V _receiver4604=j::builtin("Math");V _method4605=this->_literals[12];V _method=j::get(_receiver4604,_method4605);j::Args _params4606=j::Args{([&]()->V{V _lhs4595=j::get(_v_3887_list,this->_literals[4]);V _rhs4596=V(1.0);return V(j::number(_lhs4595)-j::number(_rhs4596));})(),([&]()->V{V _number4599=([&]()->V{V _lhs4600=j::get(_v_3887_list,this->_literals[4]);V _rhs4601=V(0.6);return V(j::number(_lhs4600)*j::number(_rhs4601));})();return V(std::floor(j::number(_number4599)));})()};return j::call(_method,_params4606,_receiver4604);})());
return V{};
},1);
return ([&]()->V{V _obj4607=j::object();j::put(_obj4607,this->_literals[16],([&]()->V{V _callee4608=_v_3885_strong;return j::call(_callee4608,j::Args{j::get(_v_3884_s,this->_literals[16])});})());j::put(_obj4607,this->_literals[17],([&]()->V{V _callee4609=_v_3885_strong;return j::call(_callee4609,j::Args{j::get(_v_3884_s,this->_literals[17])});})());return _obj4607;})();

}

_v_3888_o=_v_3882_v;
if(j::truth(([&]()->V{V _logical4610=([&]()->V{V _logical4611=([&]()->V{V _logical4612=([&]()->V{V _logical4613=([&]()->V{V _lhs4614=_v_3882_v;V _rhs4615=V::null();return V(!j::equal(_lhs4614,_rhs4615,true));})();return j::truth(_logical4613)?([&]()->V{V _lhs4616=j::unary("typeof",_v_3882_v);V _rhs4617=this->_literals[19];return V(j::equal(_lhs4616,_rhs4617,true));})():_logical4613;})();return j::truth(_logical4612)?j::unary("!",([&]()->V{V _receiver4618=j::builtin("Array");V _method4619=this->_literals[8];V _method=j::get(_receiver4618,_method4619);j::Args _params4620=j::Args{_v_3882_v};return j::call(_method,_params4620,_receiver4618);})()):_logical4612;})();return j::truth(_logical4611)?([&]()->V{V _callee4621=this->_v_3790_isHex.get();return j::call(_callee4621,j::Args{j::get(_v_3888_o,this->_literals[16])});})():_logical4611;})();return j::truth(_logical4610)?([&]()->V{V _callee4622=this->_v_3790_isHex.get();return j::call(_callee4622,j::Args{j::get(_v_3888_o,this->_literals[17])});})():_logical4610;})())){return ([&]()->V{V _obj4623=j::object();j::put(_obj4623,this->_literals[16],j::get(_v_3888_o,this->_literals[16]));j::put(_obj4623,this->_literals[17],j::get(_v_3888_o,this->_literals[17]));return _obj4623;})();
}
return ([&]()->V{V _callee4634=this->_v_3714_fail.get();return j::call(_callee4634,j::Args{([&]()->V{std::u16string _text4624;_text4624+=u"";_text4624+=j::string(_v_3883_what);_text4624+=u" takes a colour as #rrggbb, { light, dark }, or ";_text4624+=j::string(([&]()->V{V _callee4625=this->_v_3870_NAMES.get();return j::call(_callee4625,j::Args{});})());_text4624+=u", not ";_text4624+=j::string((j::truth(([&]()->V{V _lhs4626=j::unary("typeof",_v_3882_v);V _rhs4627=this->_literals[19];return V(j::equal(_lhs4626,_rhs4627,true));})())?([&]()->V{V _logical4628=([&]()->V{V _receiver4629=j::builtin("JSON");V _method4630=this->_literals[6];V _method=j::get(_receiver4629,_method4630);j::Args _params4631=j::Args{_v_3882_v};return j::call(_method,_params4631,_receiver4629);})();return j::nullish(_logical4628)?([&]()->V{V _callee4632=j::builtin("String");return j::call(_callee4632,j::Args{_v_3882_v});})():_logical4628;})():([&]()->V{V _callee4633=j::builtin("String");return j::call(_callee4633,j::Args{_v_3882_v});})()));_text4624+=u"";return V(std::move(_text4624));})()});})();

}

return V{};
},1);
this->_v_3889_didYouMean.get()=j::function([=](const j::Args &_args_fn3890,const V &_receiver_fn3890,const V &_self_fn3890) mutable ->V{
V _v_3891_word;
_v_3891_word=_args_fn3890[0];
{
V _v_3892_all;
V _v_3893_near;
_v_3892_all=([&]()->V{j::Args _array4635;for(const auto &_value:j::elements(([&]()->V{V _callee4643=j::builtin("Set");return j::construct(_callee4643,j::Args{([&]()->V{j::Args _array4636;for(const auto &_value:j::elements(([&]()->V{V _receiver4637=j::builtin("Object");V _method4638=this->_literals[2];V _method=j::get(_receiver4637,_method4638);j::Args _params4639=j::Args{this->_v_3862_schemes.get()};return j::call(_method,_params4639,_receiver4637);})()))_array4636.push_back(_value);for(const auto &_value:j::elements(([&]()->V{V _receiver4640=j::builtin("Object");V _method4641=this->_literals[2];V _method=j::get(_receiver4640,_method4641);j::Args _params4642=j::Args{this->_v_3863_materialColors.get()};return j::call(_method,_params4642,_receiver4640);})()))_array4636.push_back(_value);return j::array(std::move(_array4636));})()});})()))_array4635.push_back(_value);return j::array(std::move(_array4635));})();
_v_3893_near=([&]()->V{V _callee4644=this->_v_3909_nearWords.get();return j::call(_callee4644,j::Args{_v_3891_word,_v_3892_all});})();
return (j::truth(j::get(_v_3893_near,this->_literals[4]))?([&]()->V{std::u16string _text4645;_text4645+=u"did you mean ";_text4645+=j::string(([&]()->V{V _receiver4646=([&]()->V{V _receiver4652=_v_3893_near;V _method4653=this->_literals[11];V _method=j::get(_receiver4652,_method4653);j::Args _params4654=j::Args{j::function([=](const j::Args &_args_fn3894,const V &_receiver_fn3894,const V &_self_fn3894) mutable ->V{
V _v_3895_n;
_v_3895_n=_args_fn3894[0];
return ([&]()->V{V _receiver4649=j::builtin("JSON");V _method4650=this->_literals[6];V _method=j::get(_receiver4649,_method4650);j::Args _params4651=j::Args{_v_3895_n};return j::call(_method,_params4651,_receiver4649);})();
return V{};
},1)};return j::call(_method,_params4654,_receiver4652);})();V _method4647=this->_literals[22];V _method=j::get(_receiver4646,_method4647);j::Args _params4648=j::Args{this->_literals[21]};return j::call(_method,_params4648,_receiver4646);})());_text4645+=u"?";return V(std::move(_text4645));})():([&]()->V{std::u16string _text4655;_text4655+=u"a colour of your own is #rrggbb, and the names are ";_text4655+=j::string(([&]()->V{V _callee4656=this->_v_3717_and.get();return j::call(_callee4656,j::Args{_v_3892_all});})());_text4655+=u"";return V(std::move(_text4655));})());

}

return V{};
},1);
this->_v_3896_lettersApart.get()=j::function([=](const j::Args &_args_fn3897,const V &_receiver_fn3897,const V &_self_fn3897) mutable ->V{
V _v_3898_a;
V _v_3899_b;
_v_3898_a=_args_fn3897[0];
_v_3899_b=_args_fn3897[1];
{
V _v_3900_d;
_v_3900_d=([&]()->V{V _receiver4660=j::builtin("Array");V _method4661=this->_literals[13];V _method=j::get(_receiver4660,_method4661);j::Args _params4662=j::Args{([&]()->V{V _obj4657=j::object();j::put(_obj4657,this->_literals[4],([&]()->V{V _lhs4658=j::get(_v_3899_b,this->_literals[4]);V _rhs4659=V(1.0);return j::binary("+",_lhs4658,_rhs4659);})());return _obj4657;})(),j::function([=](const j::Args &_args_fn3901,const V &_receiver_fn3901,const V &_self_fn3901) mutable ->V{
V _v_3902__;
V _v_3903_j;
_v_3902__=_args_fn3901[0];
_v_3903_j=_args_fn3901[1];
return _v_3903_j;
return V{};
},2)};return j::call(_method,_params4662,_receiver4660);})();
{V _v_3904_i;
_v_3904_i=V(1.0);
for(;j::truth(([&]()->V{V _lhs4663=_v_3904_i;V _rhs4664=j::get(_v_3898_a,this->_literals[4]);return j::binary("<=",_lhs4663,_rhs4664);})());(void)(j::increment(_v_3904_i,1,false))){
V _v_3905_prev;
_v_3905_prev=j::get(_v_3900_d,V(0.0));
(void)(([&]()->V{V _base4666=_v_3900_d;V _key4667=V(0.0);V _assign4665=_v_3904_i;return j::put(_base4666,_key4667,_assign4665);})());
{V _v_3906_j;
_v_3906_j=V(1.0);
for(;j::truth(([&]()->V{V _lhs4668=_v_3906_j;V _rhs4669=j::get(_v_3899_b,this->_literals[4]);return j::binary("<=",_lhs4668,_rhs4669);})());(void)(j::increment(_v_3906_j,1,false))){
V _v_3907_keep;
_v_3907_keep=j::get(_v_3900_d,_v_3906_j);
(void)(([&]()->V{V _base4671=_v_3900_d;V _key4672=_v_3906_j;V _assign4670=([&]()->V{V _receiver4690=j::builtin("Math");V _method4691=this->_literals[12];V _method=j::get(_receiver4690,_method4691);j::Args _params4692=j::Args{([&]()->V{V _lhs4673=j::get(_v_3900_d,_v_3906_j);V _rhs4674=V(1.0);return j::binary("+",_lhs4673,_rhs4674);})(),([&]()->V{V _lhs4675=j::get(_v_3900_d,([&]()->V{V _lhs4677=_v_3906_j;V _rhs4678=V(1.0);return V(j::number(_lhs4677)-j::number(_rhs4678));})());V _rhs4676=V(1.0);return j::binary("+",_lhs4675,_rhs4676);})(),([&]()->V{V _lhs4679=_v_3905_prev;V _rhs4680=(j::truth(([&]()->V{V _lhs4681=j::get(_v_3898_a,([&]()->V{V _lhs4683=_v_3904_i;V _rhs4684=V(1.0);return V(j::number(_lhs4683)-j::number(_rhs4684));})());V _rhs4682=j::get(_v_3899_b,([&]()->V{V _lhs4685=_v_3906_j;V _rhs4686=V(1.0);return V(j::number(_lhs4685)-j::number(_rhs4686));})());return V(j::equal(_lhs4681,_rhs4682,true));})())?V(0.0):V(1.0));return j::binary("+",_lhs4679,_rhs4680);})()};return j::call(_method,_params4692,_receiver4690);})();return j::put(_base4671,_key4672,_assign4670);})());
(void)((_v_3905_prev=_v_3907_keep));

}
}

}
}
return j::get(_v_3900_d,j::get(_v_3899_b,this->_literals[4]));

}

return V{};
},2);
this->_v_3909_nearWords.get()=j::function([=](const j::Args &_args_fn3910,const V &_receiver_fn3910,const V &_self_fn3910) mutable ->V{
j::Cell _v_3911_word;
j::Cell _v_3912_words;
_v_3911_word.get()=_args_fn3910[0];
_v_3912_words.get()=_args_fn3910[1];
{
j::Cell _v_3913_w;
j::Cell _v_3914_same;
V _v_3917_close;
_v_3913_w.get()=([&]()->V{V _receiver4694=([&]()->V{V _receiver4697=_v_3911_word.get();V _method4698=this->_literals[23];V _method=j::get(_receiver4697,_method4698);j::Args _params4699=j::Args{};return j::call(_method,_params4699,_receiver4697);})();V _method4695=this->_literals[7];V _method=j::get(_receiver4694,_method4695);j::Args _params4696=j::Args{V(0.0),V(40.0)};return j::call(_method,_params4696,_receiver4694);})();
_v_3914_same.get()=([&]()->V{V _receiver4706=([&]()->V{V _logical4709=j::get(this->_v_3908_SYNONYMS.get(),_v_3913_w.get());return j::nullish(_logical4709)?([&]()->V{j::Args _array4710;return j::array(std::move(_array4710));})():_logical4709;})();V _method4707=this->_literals[25];V _method=j::get(_receiver4706,_method4707);j::Args _params4708=j::Args{j::function([=](const j::Args &_args_fn3915,const V &_receiver_fn3915,const V &_self_fn3915) mutable ->V{
V _v_3916_s;
_v_3916_s=_args_fn3915[0];
return ([&]()->V{V _logical4700=([&]()->V{V _receiver4701=_v_3912_words.get();V _method4702=this->_literals[24];V _method=j::get(_receiver4701,_method4702);j::Args _params4703=j::Args{_v_3916_s};return j::call(_method,_params4703,_receiver4701);})();return j::truth(_logical4700)?([&]()->V{V _lhs4704=_v_3916_s;V _rhs4705=_v_3911_word.get();return V(!j::equal(_lhs4704,_rhs4705,true));})():_logical4700;})();
return V{};
},1)};return j::call(_method,_params4708,_receiver4706);})();
_v_3917_close=([&]()->V{V _receiver4723=_v_3912_words.get();V _method4724=this->_literals[25];V _method=j::get(_receiver4723,_method4724);j::Args _params4725=j::Args{j::function([=](const j::Args &_args_fn3918,const V &_receiver_fn3918,const V &_self_fn3918) mutable ->V{
V _v_3919_n;
_v_3919_n=_args_fn3918[0];
return ([&]()->V{V _logical4711=j::unary("!",([&]()->V{V _receiver4712=_v_3914_same.get();V _method4713=this->_literals[24];V _method=j::get(_receiver4712,_method4713);j::Args _params4714=j::Args{_v_3919_n};return j::call(_method,_params4714,_receiver4712);})());return j::truth(_logical4711)?([&]()->V{V _lhs4715=([&]()->V{V _callee4720=this->_v_3896_lettersApart.get();return j::call(_callee4720,j::Args{_v_3913_w.get(),([&]()->V{V _receiver4717=_v_3919_n;V _method4718=this->_literals[23];V _method=j::get(_receiver4717,_method4718);j::Args _params4719=j::Args{};return j::call(_method,_params4719,_receiver4717);})()});})();V _rhs4716=(j::truth(([&]()->V{V _lhs4721=j::get(_v_3913_w.get(),this->_literals[4]);V _rhs4722=V(4.0);return j::binary("<=",_lhs4721,_rhs4722);})())?V(1.0):V(2.0));return j::binary("<=",_lhs4715,_rhs4716);})():_logical4711;})();
return V{};
},1)};return j::call(_method,_params4725,_receiver4723);})();
return ([&]()->V{V _receiver4726=([&]()->V{j::Args _array4729;for(const auto &_value:j::elements(_v_3914_same.get()))_array4729.push_back(_value);for(const auto &_value:j::elements(_v_3917_close))_array4729.push_back(_value);return j::array(std::move(_array4729));})();V _method4727=this->_literals[7];V _method=j::get(_receiver4726,_method4727);j::Args _params4728=j::Args{V(0.0),V(3.0)};return j::call(_method,_params4728,_receiver4726);})();

}

return V{};
},2);
this->_v_3920_suggest.get()=j::function([=](const j::Args &_args_fn3921,const V &_receiver_fn3921,const V &_self_fn3921) mutable ->V{
V _v_3922_word;
V _v_3923_words;
_v_3922_word=_args_fn3921[0];
_v_3923_words=_args_fn3921[1];
{
V _v_3924_near;
if(j::truth(([&]()->V{V _lhs4730=j::unary("typeof",_v_3922_word);V _rhs4731=this->_literals[1];return V(!j::equal(_lhs4730,_rhs4731,true));})())){return this->_literals[26];
}
_v_3924_near=([&]()->V{V _callee4732=this->_v_3909_nearWords.get();return j::call(_callee4732,j::Args{_v_3922_word,_v_3923_words});})();
return (j::truth(j::get(_v_3924_near,this->_literals[4]))?([&]()->V{std::u16string _text4733;_text4733+=u" (did you mean ";_text4733+=j::string(([&]()->V{V _receiver4734=([&]()->V{V _receiver4740=_v_3924_near;V _method4741=this->_literals[11];V _method=j::get(_receiver4740,_method4741);j::Args _params4742=j::Args{j::function([=](const j::Args &_args_fn3925,const V &_receiver_fn3925,const V &_self_fn3925) mutable ->V{
V _v_3926_n;
_v_3926_n=_args_fn3925[0];
return ([&]()->V{V _receiver4737=j::builtin("JSON");V _method4738=this->_literals[6];V _method=j::get(_receiver4737,_method4738);j::Args _params4739=j::Args{_v_3926_n};return j::call(_method,_params4739,_receiver4737);})();
return V{};
},1)};return j::call(_method,_params4742,_receiver4740);})();V _method4735=this->_literals[22];V _method=j::get(_receiver4734,_method4735);j::Args _params4736=j::Args{this->_literals[21]};return j::call(_method,_params4736,_receiver4734);})());_text4733+=u"?)";return V(std::move(_text4733));})():this->_literals[26]);

}

return V{};
},2);
this->_v_3927_mergePalettes.get()=j::function([=](const j::Args &_args_fn3928,const V &_receiver_fn3928,const V &_self_fn3928) mutable ->V{
V _v_3929_parts;
_v_3929_parts=_args_fn3928[0];
{
j::Cell _v_3930_palette;
j::Cell _v_3931_at;
j::Cell _v_3932_add;
V _v_3937_maps;
V _v_3942_ink;
_v_3930_palette.get()=([&]()->V{j::Args _array4743;return j::array(std::move(_array4743));})();
_v_3931_at.get()=([&]()->V{V _callee4744=j::builtin("Map");return j::construct(_callee4744,j::Args{});})();
_v_3932_add.get()=j::function([=](const j::Args &_args_fn3933,const V &_receiver_fn3933,const V &_self_fn3933) mutable ->V{
V _v_3934_c;
_v_3934_c=_args_fn3933[0];
{
V _v_3935_k;
V _v_3936_i;
_v_3935_k=([&]()->V{V _receiver4745=_v_3934_c;V _method4746=this->_literals[23];V _method=j::get(_receiver4745,_method4746);j::Args _params4747=j::Args{};return j::call(_method,_params4747,_receiver4745);})();
_v_3936_i=([&]()->V{V _receiver4748=_v_3931_at.get();V _method4749=this->_literals[27];V _method=j::get(_receiver4748,_method4749);j::Args _params4750=j::Args{_v_3935_k};return j::call(_method,_params4750,_receiver4748);})();
if(j::truth(([&]()->V{V _lhs4751=_v_3936_i;V _rhs4752=j::builtin("undefined");return V(j::equal(_lhs4751,_rhs4752,true));})())){(void)(([&]()->V{V _receiver4759=_v_3931_at.get();V _method4760=this->_literals[29];V _method=j::get(_receiver4759,_method4760);j::Args _params4761=j::Args{_v_3935_k,(_v_3936_i=([&]()->V{V _lhs4754=([&]()->V{V _receiver4756=_v_3930_palette.get();V _method4757=this->_literals[28];V _method=j::get(_receiver4756,_method4757);j::Args _params4758=j::Args{_v_3934_c};return j::call(_method,_params4758,_receiver4756);})();V _rhs4755=V(1.0);return V(j::number(_lhs4754)-j::number(_rhs4755));})())};return j::call(_method,_params4761,_receiver4759);})());
}
return _v_3936_i;

}

return V{};
},1);
_v_3937_maps=([&]()->V{V _receiver4768=_v_3929_parts;V _method4769=this->_literals[11];V _method=j::get(_receiver4768,_method4769);j::Args _params4770=j::Args{j::function([=](const j::Args &_args_fn3938,const V &_receiver_fn3938,const V &_self_fn3938) mutable ->V{
V _v_3939_p;
_v_3939_p=_args_fn3938[0];
return ([&]()->V{V _receiver4765=j::builtin("Uint8Array");V _method4766=this->_literals[13];V _method=j::get(_receiver4765,_method4766);j::Args _params4767=j::Args{([&]()->V{V _logical4762=_v_3939_p;return j::nullish(_logical4762)?([&]()->V{j::Args _array4763;return j::array(std::move(_array4763));})():_logical4762;})(),j::function([=](const j::Args &_args_fn3940,const V &_receiver_fn3940,const V &_self_fn3940) mutable ->V{
V _v_3941_c;
_v_3941_c=_args_fn3940[0];
return ([&]()->V{V _callee4764=_v_3932_add.get();return j::call(_callee4764,j::Args{_v_3941_c});})();
return V{};
},1)};return j::call(_method,_params4767,_receiver4765);})();
return V{};
},1)};return j::call(_method,_params4770,_receiver4768);})();
_v_3942_ink=V::null();
if(j::truth(([&]()->V{V _logical4771=j::get(_v_3930_palette.get(),this->_literals[4]);return j::truth(_logical4771)?([&]()->V{V _receiver4772=_v_3929_parts;V _method4773=this->_literals[30];V _method=j::get(_receiver4772,_method4773);j::Args _params4774=j::Args{j::function([=](const j::Args &_args_fn3943,const V &_receiver_fn3943,const V &_self_fn3943) mutable ->V{
V _v_3944_p;
_v_3944_p=_args_fn3943[0];
return j::unary("!",_v_3944_p);
return V{};
},1)};return j::call(_method,_params4774,_receiver4772);})():_logical4771;})())){(void)((_v_3942_ink=([&]()->V{V _obj4776=j::object();j::put(_obj4776,this->_literals[16],([&]()->V{V _callee4777=_v_3932_add.get();return j::call(_callee4777,j::Args{j::get(this->_v_3788_INK.get(),this->_literals[16])});})());j::put(_obj4776,this->_literals[17],([&]()->V{V _callee4778=_v_3932_add.get();return j::call(_callee4778,j::Args{j::get(this->_v_3788_INK.get(),this->_literals[17])});})());return _obj4776;})()));
}
if(j::truth(([&]()->V{V _lhs4779=j::get(_v_3930_palette.get(),this->_literals[4]);V _rhs4780=V(64.0);return j::binary(">",_lhs4779,_rhs4780);})())){(void)(([&]()->V{V _callee4782=this->_v_3714_fail.get();return j::call(_callee4782,j::Args{([&]()->V{std::u16string _text4781;_text4781+=u"these pieces have ";_text4781+=j::string(j::get(_v_3930_palette.get(),this->_literals[4]));_text4781+=u" colours between them, past the 64 a piece can have: use fewer, or a piece in fewer colours";return V(std::move(_text4781));})()});})());
}
if(j::truth(([&]()->V{V _lhs4783=j::get(_v_3930_palette.get(),this->_literals[4]);V _rhs4784=V(1.0);return V(j::equal(_lhs4783,_rhs4784,true));})())){(void)(([&]()->V{V _receiver4785=_v_3930_palette.get();V _method4786=this->_literals[28];V _method=j::get(_receiver4785,_method4786);j::Args _params4787=j::Args{j::get(_v_3930_palette.get(),V(0.0))};return j::call(_method,_params4787,_receiver4785);})());
}
return ([&]()->V{V _obj4788=j::object();j::put(_obj4788,this->_literals[31],_v_3930_palette.get());j::put(_obj4788,this->_literals[32],_v_3937_maps);j::put(_obj4788,this->_literals[33],_v_3942_ink);return _obj4788;})();

}

return V{};
},1);
this->_v_3947_code.get()=j::function([=](const j::Args &_args_fn3948,const V &_receiver_fn3948,const V &_self_fn3948) mutable ->V{
V _v_3949_ch;
_v_3949_ch=_args_fn3948[0];
{
V _v_3950_c;
if(j::truth(([&]()->V{V _lhs4789=j::unary("typeof",_v_3949_ch);V _rhs4790=this->_literals[1];return V(!j::equal(_lhs4789,_rhs4790,true));})())){(void)(([&]()->V{V _callee4793=this->_v_3714_fail.get();return j::call(_callee4793,j::Args{([&]()->V{std::u16string _text4791;_text4791+=u"a cell takes a character as a string, not ";_text4791+=j::string(([&]()->V{V _callee4792=j::builtin("String");return j::call(_callee4792,j::Args{_v_3949_ch});})());_text4791+=u"";return V(std::move(_text4791));})()});})());
}
_v_3950_c=(j::truth(j::get(_v_3949_ch,this->_literals[4]))?([&]()->V{V _receiver4794=_v_3949_ch;V _method4795=this->_literals[34];V _method=j::get(_receiver4794,_method4795);j::Args _params4796=j::Args{V(0.0)};return j::call(_method,_params4796,_receiver4794);})():this->_v_3945_EMPTY.get());
if(j::truth(([&]()->V{V _logical4797=_v_3950_c;return j::truth(_logical4797)?([&]()->V{V _logical4798=([&]()->V{V _logical4799=([&]()->V{V _lhs4800=_v_3950_c;V _rhs4801=V(32.0);return j::binary("<",_lhs4800,_rhs4801);})();return !j::truth(_logical4799)?([&]()->V{V _logical4802=([&]()->V{V _lhs4803=_v_3950_c;V _rhs4804=V(127.0);return j::binary(">=",_lhs4803,_rhs4804);})();return j::truth(_logical4802)?([&]()->V{V _lhs4805=_v_3950_c;V _rhs4806=V(159.0);return j::binary("<=",_lhs4805,_rhs4806);})():_logical4802;})():_logical4799;})();return !j::truth(_logical4798)?([&]()->V{V _logical4807=([&]()->V{V _lhs4808=_v_3950_c;V _rhs4809=V(55296.0);return j::binary(">=",_lhs4808,_rhs4809);})();return j::truth(_logical4807)?([&]()->V{V _lhs4810=_v_3950_c;V _rhs4811=V(57343.0);return j::binary("<=",_lhs4810,_rhs4811);})():_logical4807;})():_logical4798;})():_logical4797;})())){(void)(([&]()->V{V _callee4816=this->_v_3714_fail.get();return j::call(_callee4816,j::Args{([&]()->V{std::u16string _text4812;_text4812+=u"a cell takes one printable character from the Basic Multilingual Plane, not ";_text4812+=j::string(([&]()->V{V _receiver4813=j::builtin("JSON");V _method4814=this->_literals[6];V _method=j::get(_receiver4813,_method4814);j::Args _params4815=j::Args{_v_3949_ch};return j::call(_method,_params4815,_receiver4813);})());_text4812+=u"";return V(std::move(_text4812));})()});})());
}
return _v_3950_c;

}

return V{};
},1);
this->_v_4057_checkMeta.get()=j::function([=](const j::Args &_args_fn4058,const V &_receiver_fn4058,const V &_self_fn4058) mutable ->V{
V _v_4059_m;
_v_4059_m=_args_fn4058[0];
{
if(j::truth(([&]()->V{V _logical4817=j::unary("!",_v_4059_m);return !j::truth(_logical4817)?([&]()->V{V _lhs4818=j::unary("typeof",_v_4059_m);V _rhs4819=this->_literals[19];return V(!j::equal(_lhs4818,_rhs4819,true));})():_logical4817;})())){(void)(([&]()->V{V _callee4820=this->_v_3714_fail.get();return j::call(_callee4820,j::Args{this->_literals[35]});})());
}
if(j::truth(([&]()->V{V _logical4821=([&]()->V{V _lhs4822=j::unary("typeof",j::get(_v_4059_m,this->_literals[36]));V _rhs4823=this->_literals[1];return V(!j::equal(_lhs4822,_rhs4823,true));})();return !j::truth(_logical4821)?j::unary("!",([&]()->V{V _receiver4824=j::get(_v_4059_m,this->_literals[36]);V _method4825=this->_literals[37];V _method=j::get(_receiver4824,_method4825);j::Args _params4826=j::Args{};return j::call(_method,_params4826,_receiver4824);})()):_logical4821;})())){(void)(([&]()->V{V _callee4827=this->_v_3714_fail.get();return j::call(_callee4827,j::Args{this->_literals[38]});})());
}
if(j::truth(j::unary("!",([&]()->V{V _receiver4828=this->_v_4055_CATEGORIES.get();V _method4829=this->_literals[24];V _method=j::get(_receiver4828,_method4829);j::Args _params4830=j::Args{j::get(_v_4059_m,this->_literals[39])};return j::call(_method,_params4830,_receiver4828);})()))){(void)(([&]()->V{V _callee4836=this->_v_3714_fail.get();return j::call(_callee4836,j::Args{([&]()->V{std::u16string _text4831;_text4831+=u"category takes one of ";_text4831+=j::string(([&]()->V{V _callee4832=this->_v_3717_and.get();return j::call(_callee4832,j::Args{this->_v_4055_CATEGORIES.get()});})());_text4831+=u", not ";_text4831+=j::string(([&]()->V{V _receiver4833=j::builtin("JSON");V _method4834=this->_literals[6];V _method=j::get(_receiver4833,_method4834);j::Args _params4835=j::Args{j::get(_v_4059_m,this->_literals[39])};return j::call(_method,_params4835,_receiver4833);})());_text4831+=u"";return V(std::move(_text4831));})()});})());
}
if(j::truth(([&]()->V{V _logical4837=([&]()->V{V _logical4838=([&]()->V{V _lhs4839=j::unary("typeof",j::get(_v_4059_m,this->_literals[40]));V _rhs4840=this->_literals[1];return V(!j::equal(_lhs4839,_rhs4840,true));})();return !j::truth(_logical4838)?j::unary("!",j::get(_v_4059_m,this->_literals[40])):_logical4838;})();return !j::truth(_logical4837)?([&]()->V{V _lhs4841=j::get(j::get(_v_4059_m,this->_literals[40]),this->_literals[4]);V _rhs4842=V(72.0);return j::binary(">",_lhs4841,_rhs4842);})():_logical4837;})())){(void)(([&]()->V{V _callee4847=this->_v_3714_fail.get();return j::call(_callee4847,j::Args{([&]()->V{std::u16string _text4843;_text4843+=u"note takes one line of 1 to 72 characters, not ";_text4843+=j::string(([&]()->V{V _receiver4844=j::builtin("JSON");V _method4845=this->_literals[6];V _method=j::get(_receiver4844,_method4845);j::Args _params4846=j::Args{j::get(_v_4059_m,this->_literals[40])};return j::call(_method,_params4846,_receiver4844);})());_text4843+=u"";return V(std::move(_text4843));})()});})());
}
if(j::truth(([&]()->V{V _logical4848=([&]()->V{V _logical4849=j::unary("!",([&]()->V{V _receiver4850=j::builtin("Number");V _method4851=this->_literals[10];V _method=j::get(_receiver4850,_method4851);j::Args _params4852=j::Args{j::get(_v_4059_m,this->_literals[41])};return j::call(_method,_params4852,_receiver4850);})());return !j::truth(_logical4849)?([&]()->V{V _lhs4853=j::get(_v_4059_m,this->_literals[41]);V _rhs4854=V(1.0);return j::binary("<",_lhs4853,_rhs4854);})():_logical4849;})();return !j::truth(_logical4848)?([&]()->V{V _lhs4855=j::get(_v_4059_m,this->_literals[41]);V _rhs4856=j::get(this->_v_4056_MAX.get(),this->_literals[41]);return j::binary(">",_lhs4855,_rhs4856);})():_logical4848;})())){(void)(([&]()->V{V _callee4859=this->_v_3714_fail.get();return j::call(_callee4859,j::Args{([&]()->V{std::u16string _text4857;_text4857+=u"cols takes a whole number from 1 to ";_text4857+=j::string(j::get(this->_v_4056_MAX.get(),this->_literals[41]));_text4857+=u", not ";_text4857+=j::string(([&]()->V{V _callee4858=j::builtin("String");return j::call(_callee4858,j::Args{j::get(_v_4059_m,this->_literals[41])});})());_text4857+=u"";return V(std::move(_text4857));})()});})());
}
if(j::truth(([&]()->V{V _logical4860=([&]()->V{V _logical4861=j::unary("!",([&]()->V{V _receiver4862=j::builtin("Number");V _method4863=this->_literals[10];V _method=j::get(_receiver4862,_method4863);j::Args _params4864=j::Args{j::get(_v_4059_m,this->_literals[42])};return j::call(_method,_params4864,_receiver4862);})());return !j::truth(_logical4861)?([&]()->V{V _lhs4865=j::get(_v_4059_m,this->_literals[42]);V _rhs4866=V(1.0);return j::binary("<",_lhs4865,_rhs4866);})():_logical4861;})();return !j::truth(_logical4860)?([&]()->V{V _lhs4867=j::get(_v_4059_m,this->_literals[42]);V _rhs4868=j::get(this->_v_4056_MAX.get(),this->_literals[42]);return j::binary(">",_lhs4867,_rhs4868);})():_logical4860;})())){(void)(([&]()->V{V _callee4871=this->_v_3714_fail.get();return j::call(_callee4871,j::Args{([&]()->V{std::u16string _text4869;_text4869+=u"rows takes a whole number from 1 to ";_text4869+=j::string(j::get(this->_v_4056_MAX.get(),this->_literals[42]));_text4869+=u", not ";_text4869+=j::string(([&]()->V{V _callee4870=j::builtin("String");return j::call(_callee4870,j::Args{j::get(_v_4059_m,this->_literals[42])});})());_text4869+=u"";return V(std::move(_text4869));})()});})());
}
if(j::truth(([&]()->V{V _logical4872=([&]()->V{V _logical4873=j::unary("!",([&]()->V{V _receiver4874=j::builtin("Number");V _method4875=this->_literals[10];V _method=j::get(_receiver4874,_method4875);j::Args _params4876=j::Args{j::get(_v_4059_m,this->_literals[43])};return j::call(_method,_params4876,_receiver4874);})());return !j::truth(_logical4873)?([&]()->V{V _lhs4877=j::get(_v_4059_m,this->_literals[43]);V _rhs4878=V(0.0);return j::binary("<",_lhs4877,_rhs4878);})():_logical4873;})();return !j::truth(_logical4872)?([&]()->V{V _lhs4879=j::get(_v_4059_m,this->_literals[43]);V _rhs4880=V(60.0);return j::binary(">",_lhs4879,_rhs4880);})():_logical4872;})())){(void)(([&]()->V{V _callee4883=this->_v_3714_fail.get();return j::call(_callee4883,j::Args{([&]()->V{std::u16string _text4881;_text4881+=u"fps takes a whole number from 0 (a still) to 60, not ";_text4881+=j::string(([&]()->V{V _callee4882=j::builtin("String");return j::call(_callee4882,j::Args{j::get(_v_4059_m,this->_literals[43])});})());_text4881+=u"";return V(std::move(_text4881));})()});})());
}
if(j::truth(([&]()->V{V _logical4884=([&]()->V{V _lhs4885=j::get(_v_4059_m,this->_literals[44]);V _rhs4886=j::builtin("undefined");return V(!j::equal(_lhs4885,_rhs4886,true));})();return j::truth(_logical4884)?([&]()->V{V _logical4887=([&]()->V{V _lhs4888=j::unary("typeof",j::get(_v_4059_m,this->_literals[44]));V _rhs4889=this->_literals[19];return V(!j::equal(_lhs4888,_rhs4889,true));})();return !j::truth(_logical4887)?([&]()->V{V _lhs4890=j::get(_v_4059_m,this->_literals[44]);V _rhs4891=V::null();return V(j::equal(_lhs4890,_rhs4891,true));})():_logical4887;})():_logical4884;})())){(void)(([&]()->V{V _callee4892=this->_v_3714_fail.get();return j::call(_callee4892,j::Args{this->_literals[45]});})());
}
if(j::truth(([&]()->V{V _logical4893=([&]()->V{V _lhs4894=j::get(_v_4059_m,this->_literals[31]);V _rhs4895=j::builtin("undefined");return V(!j::equal(_lhs4894,_rhs4895,true));})();return j::truth(_logical4893)?j::unary("!",([&]()->V{V _logical4896=([&]()->V{V _logical4897=([&]()->V{V _logical4898=([&]()->V{V _receiver4899=j::builtin("Array");V _method4900=this->_literals[8];V _method=j::get(_receiver4899,_method4900);j::Args _params4901=j::Args{j::get(_v_4059_m,this->_literals[31])};return j::call(_method,_params4901,_receiver4899);})();return j::truth(_logical4898)?([&]()->V{V _lhs4902=j::get(j::get(_v_4059_m,this->_literals[31]),this->_literals[4]);V _rhs4903=V(2.0);return j::binary(">=",_lhs4902,_rhs4903);})():_logical4898;})();return j::truth(_logical4897)?([&]()->V{V _lhs4904=j::get(j::get(_v_4059_m,this->_literals[31]),this->_literals[4]);V _rhs4905=V(64.0);return j::binary("<=",_lhs4904,_rhs4905);})():_logical4897;})();return j::truth(_logical4896)?([&]()->V{V _receiver4906=j::get(_v_4059_m,this->_literals[31]);V _method4907=this->_literals[18];V _method=j::get(_receiver4906,_method4907);j::Args _params4908=j::Args{this->_v_3790_isHex.get()};return j::call(_method,_params4908,_receiver4906);})():_logical4896;})()):_logical4893;})())){(void)(([&]()->V{V _callee4909=this->_v_3714_fail.get();return j::call(_callee4909,j::Args{this->_literals[46]});})());
}
if(j::truth(([&]()->V{V _logical4910=([&]()->V{V _lhs4911=j::get(_v_4059_m,this->_literals[47]);V _rhs4912=j::builtin("undefined");return V(!j::equal(_lhs4911,_rhs4912,true));})();return j::truth(_logical4910)?j::unary("!",([&]()->V{V _callee4913=this->_v_3790_isHex.get();return j::call(_callee4913,j::Args{j::get(_v_4059_m,this->_literals[47])});})()):_logical4910;})())){(void)(([&]()->V{V _callee4918=this->_v_3714_fail.get();return j::call(_callee4918,j::Args{([&]()->V{std::u16string _text4914;_text4914+=u"ground takes a colour as #rrggbb, not ";_text4914+=j::string(([&]()->V{V _receiver4915=j::builtin("JSON");V _method4916=this->_literals[6];V _method=j::get(_receiver4915,_method4916);j::Args _params4917=j::Args{j::get(_v_4059_m,this->_literals[47])};return j::call(_method,_params4917,_receiver4915);})());_text4914+=u"";return V(std::move(_text4914));})()});})());
}
if(j::truth(([&]()->V{V _logical4919=([&]()->V{V _logical4920=([&]()->V{V _lhs4921=j::get(_v_4059_m,this->_literals[48]);V _rhs4922=j::builtin("undefined");return V(!j::equal(_lhs4921,_rhs4922,true));})();return j::truth(_logical4920)?([&]()->V{V _lhs4923=j::get(_v_4059_m,this->_literals[48]);V _rhs4924=V(1.0);return V(!j::equal(_lhs4923,_rhs4924,true));})():_logical4920;})();return j::truth(_logical4919)?([&]()->V{V _lhs4925=j::get(_v_4059_m,this->_literals[48]);V _rhs4926=V(2.0);return V(!j::equal(_lhs4925,_rhs4926,true));})():_logical4919;})())){(void)(([&]()->V{V _callee4929=this->_v_3714_fail.get();return j::call(_callee4929,j::Args{([&]()->V{std::u16string _text4927;_text4927+=u"cell takes 1 (square) or 2, not ";_text4927+=j::string(([&]()->V{V _callee4928=j::builtin("String");return j::call(_callee4928,j::Args{j::get(_v_4059_m,this->_literals[48])});})());_text4927+=u"";return V(std::move(_text4927));})()});})());
}
if(j::truth(([&]()->V{V _logical4930=([&]()->V{V _lhs4931=j::get(_v_4059_m,this->_literals[49]);V _rhs4932=j::builtin("undefined");return V(!j::equal(_lhs4931,_rhs4932,true));})();return j::truth(_logical4930)?j::unary("!",([&]()->V{V _logical4933=([&]()->V{V _logical4934=([&]()->V{V _lhs4935=j::unary("typeof",j::get(_v_4059_m,this->_literals[49]));V _rhs4936=this->_literals[50];return V(j::equal(_lhs4935,_rhs4936,true));})();return j::truth(_logical4934)?([&]()->V{V _receiver4937=j::builtin("Number");V _method4938=this->_literals[51];V _method=j::get(_receiver4937,_method4938);j::Args _params4939=j::Args{j::get(_v_4059_m,this->_literals[49])};return j::call(_method,_params4939,_receiver4937);})():_logical4934;})();return j::truth(_logical4933)?([&]()->V{V _lhs4940=j::get(_v_4059_m,this->_literals[49]);V _rhs4941=V(0.0);return j::binary(">",_lhs4940,_rhs4941);})():_logical4933;})()):_logical4930;})())){(void)(([&]()->V{V _callee4944=this->_v_3714_fail.get();return j::call(_callee4944,j::Args{([&]()->V{std::u16string _text4942;_text4942+=u"loop takes a number of seconds above 0, not ";_text4942+=j::string(([&]()->V{V _callee4943=j::builtin("String");return j::call(_callee4943,j::Args{j::get(_v_4059_m,this->_literals[49])});})());_text4942+=u"";return V(std::move(_text4942));})()});})());
}
if(j::truth(([&]()->V{V _logical4945=([&]()->V{V _lhs4946=j::get(_v_4059_m,this->_literals[52]);V _rhs4947=j::builtin("undefined");return V(!j::equal(_lhs4946,_rhs4947,true));})();return j::truth(_logical4945)?j::unary("!",([&]()->V{V _logical4948=([&]()->V{V _logical4949=([&]()->V{V _lhs4950=j::unary("typeof",j::get(_v_4059_m,this->_literals[52]));V _rhs4951=this->_literals[50];return V(j::equal(_lhs4950,_rhs4951,true));})();return j::truth(_logical4949)?([&]()->V{V _receiver4952=j::builtin("Number");V _method4953=this->_literals[51];V _method=j::get(_receiver4952,_method4953);j::Args _params4954=j::Args{j::get(_v_4059_m,this->_literals[52])};return j::call(_method,_params4954,_receiver4952);})():_logical4949;})();return j::truth(_logical4948)?([&]()->V{V _lhs4955=j::get(_v_4059_m,this->_literals[52]);V _rhs4956=V(0.0);return j::binary(">=",_lhs4955,_rhs4956);})():_logical4948;})()):_logical4945;})())){(void)(([&]()->V{V _callee4959=this->_v_3714_fail.get();return j::call(_callee4959,j::Args{([&]()->V{std::u16string _text4957;_text4957+=u"still takes a number of seconds of 0 or more, not ";_text4957+=j::string(([&]()->V{V _callee4958=j::builtin("String");return j::call(_callee4958,j::Args{j::get(_v_4059_m,this->_literals[52])});})());_text4957+=u"";return V(std::move(_text4957));})()});})());
}
return _v_4059_m;

}

return V{};
},1);
this->_v_4114_chained.get()=j::function([=](const j::Args &_args_fn4115,const V &_receiver_fn4115,const V &_self_fn4115) mutable ->V{
V _v_4116_p;
_v_4116_p=_args_fn4115[0];
{
if(j::truth(([&]()->V{V _lhs4960=_v_4116_p;V _rhs4961=this->_v_4060_Chainable.get();return j::binary("instanceof",_lhs4960,_rhs4961);})())){return _v_4116_p;
}
if(j::truth(([&]()->V{V _logical4962=([&]()->V{V _logical4963=([&]()->V{V _logical4964=j::unary("!",_v_4116_p);return !j::truth(_logical4964)?([&]()->V{V _lhs4965=j::unary("typeof",_v_4116_p);V _rhs4966=this->_literals[19];return V(!j::equal(_lhs4965,_rhs4966,true));})():_logical4964;})();return !j::truth(_logical4963)?j::unary("!",j::get(_v_4116_p,this->_literals[53])):_logical4963;})();return !j::truth(_logical4962)?([&]()->V{V _lhs4967=j::unary("typeof",j::get(_v_4116_p,this->_literals[54]));V _rhs4968=this->_literals[55];return V(!j::equal(_lhs4967,_rhs4968,true));})():_logical4962;})())){(void)(([&]()->V{V _callee4971=this->_v_3714_fail.get();return j::call(_callee4971,j::Args{([&]()->V{std::u16string _text4969;_text4969+=u"chained() takes a piece, meta and a default function, not ";_text4969+=j::string(([&]()->V{V _callee4970=j::builtin("String");return j::call(_callee4970,j::Args{_v_4116_p});})());_text4969+=u"";return V(std::move(_text4969));})()});})());
}
return ([&]()->V{V _receiver4975=j::builtin("Object");V _method4976=this->_literals[58];V _method=j::get(_receiver4975,_method4976);j::Args _params4977=j::Args{([&]()->V{V _receiver4972=j::builtin("Object");V _method4973=this->_literals[57];V _method=j::get(_receiver4972,_method4973);j::Args _params4974=j::Args{j::get(this->_v_4060_Chainable.get(),this->_literals[56])};return j::call(_method,_params4974,_receiver4972);})(),_v_4116_p};return j::call(_method,_params4977,_receiver4975);})();

}

return V{};
},1);
this->_v_4117_specOf.get()=j::function([=](const j::Args &_args_fn4118,const V &_receiver_fn4118,const V &_self_fn4118) mutable ->V{
V _v_4119_spec;
V _v_4120_name;
V _v_4121_size;
_v_4119_spec=_args_fn4118[0];
_v_4120_name=_args_fn4118[1];
V _default4978=_args_fn4118[2];if(_default4978.kind==V::Undefined||_default4978.kind==V::Hole)_default4978=([&]()->V{V _obj4979=j::object();j::put(_obj4979,this->_literals[41],V(64.0));j::put(_obj4979,this->_literals[42],V(24.0));return _obj4979;})();
_v_4121_size=_default4978;
{
V _v_4122_given;
V _v_4123_rest;
V _v_4124_palette;
if(j::truth(([&]()->V{V _logical4980=([&]()->V{V _lhs4981=_v_4119_spec;V _rhs4982=j::builtin("undefined");return V(!j::equal(_lhs4981,_rhs4982,true));})();return j::truth(_logical4980)?([&]()->V{V _logical4983=([&]()->V{V _lhs4984=_v_4119_spec;V _rhs4985=V::null();return V(j::equal(_lhs4984,_rhs4985,true));})();return !j::truth(_logical4983)?([&]()->V{V _lhs4986=j::unary("typeof",_v_4119_spec);V _rhs4987=this->_literals[19];return V(!j::equal(_lhs4986,_rhs4987,true));})():_logical4983;})():_logical4980;})())){(void)(([&]()->V{V _callee4989=this->_v_3714_fail.get();return j::call(_callee4989,j::Args{([&]()->V{std::u16string _text4988;_text4988+=u"";_text4988+=j::string(_v_4120_name);_text4988+=u"() takes a spec object, such as { cols: 64, rows: 24 }";return V(std::move(_text4988));})()});})());
}
V _pattern4992=([&]()->V{V _logical4990=_v_4119_spec;return j::nullish(_logical4990)?([&]()->V{V _obj4991=j::object();return _obj4991;})():_logical4990;})();
_v_4122_given=j::get(_pattern4992,this->_literals[31]);
_v_4123_rest=j::object_rest(_pattern4992,{j::string(this->_literals[31])});
_v_4124_palette=(j::truth(([&]()->V{V _lhs4993=_v_4122_given;V _rhs4994=j::builtin("undefined");return V(j::equal(_lhs4993,_rhs4994,true));})())?j::builtin("undefined"):([&]()->V{V _callee4996=this->_v_3872_colorsOf.get();return j::call(_callee4996,j::Args{_v_4122_given,([&]()->V{std::u16string _text4995;_text4995+=u"";_text4995+=j::string(_v_4120_name);_text4995+=u"()'s palette";return V(std::move(_text4995));})()});})());
return ([&]()->V{V _obj4997=j::object();V _spread4998=_v_4123_rest;for(const auto &_key:j::keys(_spread4998))j::put(_obj4997,_key,j::get(_spread4998,_key));j::put(_obj4997,this->_literals[36],([&]()->V{V _logical4999=([&]()->V{V _chain5000=_v_4119_spec;if(j::nullish(_chain5000))return V{};V _chain5001=j::get(_chain5000,this->_literals[36]);return _chain5001;})();return j::nullish(_logical4999)?_v_4120_name:_logical4999;})());j::put(_obj4997,this->_literals[41],([&]()->V{V _logical5002=([&]()->V{V _chain5003=_v_4119_spec;if(j::nullish(_chain5003))return V{};V _chain5004=j::get(_chain5003,this->_literals[41]);return _chain5004;})();return j::nullish(_logical5002)?j::get(_v_4121_size,this->_literals[41]):_logical5002;})());j::put(_obj4997,this->_literals[42],([&]()->V{V _logical5005=([&]()->V{V _chain5006=_v_4119_spec;if(j::nullish(_chain5006))return V{};V _chain5007=j::get(_chain5006,this->_literals[42]);return _chain5007;})();return j::nullish(_logical5005)?j::get(_v_4121_size,this->_literals[42]):_logical5005;})());V _spread5008=(j::truth(([&]()->V{V _lhs5009=_v_4124_palette;V _rhs5010=j::builtin("undefined");return V(!j::equal(_lhs5009,_rhs5010,true));})())?([&]()->V{V _obj5011=j::object();j::put(_obj5011,this->_literals[31],_v_4124_palette);return _obj5011;})():([&]()->V{V _obj5012=j::object();return _obj5012;})());for(const auto &_key:j::keys(_spread5008))j::put(_obj4997,_key,j::get(_spread5008,_key));return _obj4997;})();

}

return V{};
},2);
this->_v_4125_spread.get()=j::function([=](const j::Args &_args_fn4126,const V &_receiver_fn4126,const V &_self_fn4126) mutable ->V{
V _v_4127_stops;
V _v_4128_n;
_v_4127_stops=_args_fn4126[0];
_v_4128_n=_args_fn4126[1];
{
V _v_4129_light;
V _v_4130_dark;
if(j::truth(([&]()->V{V _receiver5013=j::builtin("Array");V _method5014=this->_literals[8];V _method=j::get(_receiver5013,_method5014);j::Args _params5015=j::Args{_v_4127_stops};return j::call(_method,_params5015,_receiver5013);})())){return ([&]()->V{V _callee5016=this->_v_3813_gradient.get();return j::call(_callee5016,j::Args{_v_4127_stops,_v_4128_n});})();
}
V _pattern5017=_v_4127_stops;
_v_4129_light=j::get(_pattern5017,this->_literals[16]);
_v_4130_dark=j::get(_pattern5017,this->_literals[17]);
if(j::truth(([&]()->V{V _logical5018=j::unary("!",([&]()->V{V _receiver5019=j::builtin("Array");V _method5020=this->_literals[8];V _method=j::get(_receiver5019,_method5020);j::Args _params5021=j::Args{_v_4129_light};return j::call(_method,_params5021,_receiver5019);})());return !j::truth(_logical5018)?j::unary("!",([&]()->V{V _receiver5022=j::builtin("Array");V _method5023=this->_literals[8];V _method=j::get(_receiver5022,_method5023);j::Args _params5024=j::Args{_v_4130_dark};return j::call(_method,_params5024,_receiver5022);})()):_logical5018;})())){(void)(([&]()->V{V _callee5029=this->_v_3714_fail.get();return j::call(_callee5029,j::Args{([&]()->V{std::u16string _text5025;_text5025+=u"colours take a list of #rrggbb, or { light, dark }, not ";_text5025+=j::string(([&]()->V{V _receiver5026=j::builtin("JSON");V _method5027=this->_literals[6];V _method=j::get(_receiver5026,_method5027);j::Args _params5028=j::Args{_v_4127_stops};return j::call(_method,_params5028,_receiver5026);})());_text5025+=u"";return V(std::move(_text5025));})()});})());
}
return ([&]()->V{V _obj5030=j::object();j::put(_obj5030,this->_literals[16],([&]()->V{V _callee5031=this->_v_3813_gradient.get();return j::call(_callee5031,j::Args{_v_4129_light,_v_4128_n});})());j::put(_obj5030,this->_literals[17],([&]()->V{V _callee5032=this->_v_3813_gradient.get();return j::call(_callee5032,j::Args{_v_4130_dark,_v_4128_n});})());return _obj5030;})();

}

return V{};
},2);
this->_v_4131_metaOf.get()=j::function([=](const j::Args &_args_fn4132,const V &_receiver_fn4132,const V &_self_fn4132) mutable ->V{
V _v_4133_spec;
_v_4133_spec=_args_fn4132[0];
{
V _v_4134_palette;
V _v_4135_name;
V _v_4136_meta;
if(j::truth(([&]()->V{V _logical5033=j::unary("!",_v_4133_spec);return !j::truth(_logical5033)?([&]()->V{V _lhs5034=j::unary("typeof",_v_4133_spec);V _rhs5035=this->_literals[19];return V(!j::equal(_lhs5034,_rhs5035,true));})():_logical5033;})())){(void)(([&]()->V{V _callee5036=this->_v_3714_fail.get();return j::call(_callee5036,j::Args{this->_literals[59]});})());
}
_v_4134_palette=(j::truth(([&]()->V{V _lhs5037=j::get(_v_4133_spec,this->_literals[31]);V _rhs5038=j::builtin("undefined");return V(j::equal(_lhs5037,_rhs5038,true));})())?V::null():([&]()->V{V _callee5043=this->_v_3844_Palette.get();return j::construct(_callee5043,j::Args{(j::truth(([&]()->V{V _lhs5039=j::unary("typeof",j::get(_v_4133_spec,this->_literals[31]));V _rhs5040=this->_literals[1];return V(j::equal(_lhs5039,_rhs5040,true));})())?([&]()->V{V _callee5041=this->_v_3872_colorsOf.get();return j::call(_callee5041,j::Args{j::get(_v_4133_spec,this->_literals[31]),this->_literals[31]});})():j::get(_v_4133_spec,this->_literals[31])),([&]()->V{V _logical5042=j::get(_v_4133_spec,this->_literals[33]);return j::nullish(_logical5042)?V(0.0):_logical5042;})()});})());
if(j::truth(_v_4134_palette)){
(void)(([&]()->V{V _receiver5044=_v_4134_palette;V _method5045=this->_literals[33];V _method=j::get(_receiver5044,_method5045);j::Args _params5046=j::Args{V(true)};return j::call(_method,_params5046,_receiver5044);})());
(void)(([&]()->V{V _receiver5047=_v_4134_palette;V _method5048=this->_literals[33];V _method=j::get(_receiver5047,_method5048);j::Args _params5049=j::Args{V(false)};return j::call(_method,_params5049,_receiver5047);})());

}

_v_4135_name=(j::truth(([&]()->V{V _lhs5050=j::unary("typeof",j::get(_v_4133_spec,this->_literals[36]));V _rhs5051=this->_literals[1];return V(j::equal(_lhs5050,_rhs5051,true));})())?([&]()->V{V _receiver5052=j::get(_v_4133_spec,this->_literals[36]);V _method5053=this->_literals[37];V _method=j::get(_receiver5052,_method5053);j::Args _params5054=j::Args{};return j::call(_method,_params5054,_receiver5052);})():j::get(_v_4133_spec,this->_literals[36]));
_v_4136_meta=([&]()->V{V _obj5055=j::object();j::put(_obj5055,this->_literals[36],_v_4135_name);j::put(_obj5055,this->_literals[39],([&]()->V{V _logical5056=j::get(_v_4133_spec,this->_literals[39]);return j::nullish(_logical5056)?this->_literals[60]:_logical5056;})());j::put(_obj5055,this->_literals[40],([&]()->V{V _logical5057=j::get(_v_4133_spec,this->_literals[40]);return j::nullish(_logical5057)?(j::truth(([&]()->V{V _lhs5058=j::unary("typeof",_v_4135_name);V _rhs5059=this->_literals[1];return V(j::equal(_lhs5058,_rhs5059,true));})())?([&]()->V{V _receiver5060=_v_4135_name;V _method5061=this->_literals[7];V _method=j::get(_receiver5060,_method5061);j::Args _params5062=j::Args{V(0.0),V(72.0)};return j::call(_method,_params5062,_receiver5060);})():_v_4135_name):_logical5057;})());j::put(_obj5055,this->_literals[41],j::get(_v_4133_spec,this->_literals[41]));j::put(_obj5055,this->_literals[42],j::get(_v_4133_spec,this->_literals[42]));j::put(_obj5055,this->_literals[43],([&]()->V{V _logical5063=j::get(_v_4133_spec,this->_literals[43]);return j::nullish(_logical5063)?V(30.0):_logical5063;})());V _spread5064=(j::truth(([&]()->V{V _lhs5065=j::get(_v_4133_spec,this->_literals[44]);V _rhs5066=j::builtin("undefined");return V(!j::equal(_lhs5065,_rhs5066,true));})())?([&]()->V{V _obj5067=j::object();j::put(_obj5067,this->_literals[44],j::get(_v_4133_spec,this->_literals[44]));return _obj5067;})():([&]()->V{V _obj5068=j::object();return _obj5068;})());for(const auto &_key:j::keys(_spread5064))j::put(_obj5055,_key,j::get(_spread5064,_key));V _spread5069=(j::truth(j::get(_v_4133_spec,this->_literals[61]))?([&]()->V{V _obj5070=j::object();j::put(_obj5070,this->_literals[61],V(true));return _obj5070;})():([&]()->V{V _obj5071=j::object();return _obj5071;})());for(const auto &_key:j::keys(_spread5069))j::put(_obj5055,_key,j::get(_spread5069,_key));V _spread5072=(j::truth(_v_4134_palette)?([&]()->V{V _obj5073=j::object();j::put(_obj5073,this->_literals[31],j::get(_v_4134_palette,this->_literals[14]));return _obj5073;})():([&]()->V{V _obj5074=j::object();return _obj5074;})());for(const auto &_key:j::keys(_spread5072))j::put(_obj5055,_key,j::get(_spread5072,_key));V _spread5075=(j::truth(([&]()->V{V _lhs5076=j::get(_v_4133_spec,this->_literals[47]);V _rhs5077=j::builtin("undefined");return V(!j::equal(_lhs5076,_rhs5077,true));})())?([&]()->V{V _obj5078=j::object();j::put(_obj5078,this->_literals[47],j::get(_v_4133_spec,this->_literals[47]));return _obj5078;})():([&]()->V{V _obj5079=j::object();return _obj5079;})());for(const auto &_key:j::keys(_spread5075))j::put(_obj5055,_key,j::get(_spread5075,_key));V _spread5080=(j::truth(([&]()->V{V _lhs5081=j::get(_v_4133_spec,this->_literals[48]);V _rhs5082=j::builtin("undefined");return V(!j::equal(_lhs5081,_rhs5082,true));})())?([&]()->V{V _obj5083=j::object();j::put(_obj5083,this->_literals[48],j::get(_v_4133_spec,this->_literals[48]));return _obj5083;})():([&]()->V{V _obj5084=j::object();return _obj5084;})());for(const auto &_key:j::keys(_spread5080))j::put(_obj5055,_key,j::get(_spread5080,_key));V _spread5085=(j::truth(([&]()->V{V _lhs5086=j::get(_v_4133_spec,this->_literals[49]);V _rhs5087=j::builtin("undefined");return V(!j::equal(_lhs5086,_rhs5087,true));})())?([&]()->V{V _obj5088=j::object();j::put(_obj5088,this->_literals[49],j::get(_v_4133_spec,this->_literals[49]));return _obj5088;})():([&]()->V{V _obj5089=j::object();return _obj5089;})());for(const auto &_key:j::keys(_spread5085))j::put(_obj5055,_key,j::get(_spread5085,_key));V _spread5090=(j::truth(([&]()->V{V _lhs5091=j::get(_v_4133_spec,this->_literals[52]);V _rhs5092=j::builtin("undefined");return V(!j::equal(_lhs5091,_rhs5092,true));})())?([&]()->V{V _obj5093=j::object();j::put(_obj5093,this->_literals[52],j::get(_v_4133_spec,this->_literals[52]));return _obj5093;})():([&]()->V{V _obj5094=j::object();return _obj5094;})());for(const auto &_key:j::keys(_spread5090))j::put(_obj5055,_key,j::get(_spread5090,_key));return _obj5055;})();
return ([&]()->V{V _obj5095=j::object();j::put(_obj5095,this->_literals[53],([&]()->V{V _callee5096=this->_v_4057_checkMeta.get();return j::call(_callee5096,j::Args{_v_4136_meta});})());j::put(_obj5095,this->_literals[31],_v_4134_palette);return _obj5095;})();

}

return V{};
},1);
this->_v_4137_piece.get()=j::function([=](const j::Args &_args_fn4138,const V &_receiver_fn4138,const V &_self_fn4138) mutable ->V{
V _v_4139_spec;
j::Cell _v_4140_draw;
_v_4139_spec=_args_fn4138[0];
_v_4140_draw.get()=_args_fn4138[1];
{
j::Cell _v_4141_meta;
j::Cell _v_4142_palette;
j::Cell _v_4143_setup;
j::Cell _v_4145_wipe;
V _pattern5098=([&]()->V{V _callee5097=this->_v_4131_metaOf.get();return j::call(_callee5097,j::Args{_v_4139_spec});})();
_v_4141_meta.get()=j::get(_pattern5098,this->_literals[53]);
_v_4142_palette.get()=j::get(_pattern5098,this->_literals[31]);
_v_4143_setup.get()=(j::truth(([&]()->V{V _lhs5099=j::unary("typeof",_v_4140_draw.get());V _rhs5100=this->_literals[55];return V(j::equal(_lhs5099,_rhs5100,true));})())?j::function([=](const j::Args &_args_fn4144,const V &_receiver_fn4144,const V &_self_fn4144) mutable ->V{
return _v_4140_draw.get();
return V{};
},0):(j::truth(([&]()->V{V _logical5101=([&]()->V{V _logical5102=_v_4140_draw.get();return j::truth(_logical5102)?([&]()->V{V _lhs5103=j::unary("typeof",_v_4140_draw.get());V _rhs5104=this->_literals[19];return V(j::equal(_lhs5103,_rhs5104,true));})():_logical5102;})();return j::truth(_logical5101)?([&]()->V{V _lhs5105=j::unary("typeof",j::get(_v_4140_draw.get(),this->_literals[62]));V _rhs5106=this->_literals[55];return V(j::equal(_lhs5105,_rhs5106,true));})():_logical5101;})())?j::get(_v_4140_draw.get(),this->_literals[62]):([&]()->V{V _callee5107=this->_v_3714_fail.get();return j::call(_callee5107,j::Args{this->_literals[63]});})()));
_v_4145_wipe.get()=([&]()->V{V _logical5108=j::get(_v_4139_spec,this->_literals[64]);return j::nullish(_logical5108)?V(true):_logical5108;})();
return ([&]()->V{V _callee5146=this->_v_4114_chained.get();return j::call(_callee5146,j::Args{([&]()->V{V _obj5109=j::object();j::put(_obj5109,this->_literals[53],_v_4141_meta.get());j::put(_obj5109,this->_literals[54],j::function([=](const j::Args &_args_fn4146,const V &_receiver_fn4146,const V &_self_fn4146) mutable ->V{
V _v_4147_options;
_v_4147_options=_args_fn4146[0];
{
V _v_4148_opts;
j::Cell _v_4149_s;
j::Cell _v_4150_ctx;
j::Cell _v_4151_fn;
_v_4148_opts=([&]()->V{V _obj5110=j::object();V _spread5111=j::get(_v_4141_meta.get(),this->_literals[44]);for(const auto &_key:j::keys(_spread5111))j::put(_obj5110,_key,j::get(_spread5111,_key));V _spread5112=_v_4147_options;for(const auto &_key:j::keys(_spread5112))j::put(_obj5110,_key,j::get(_spread5112,_key));return _obj5110;})();
_v_4149_s.get()=([&]()->V{V _callee5115=this->_v_3951_Surface.get();return j::construct(_callee5115,j::Args{j::get(_v_4141_meta.get(),this->_literals[41]),j::get(_v_4141_meta.get(),this->_literals[42]),([&]()->V{V _obj5113=j::object();j::put(_obj5113,this->_literals[31],_v_4142_palette.get());j::put(_obj5113,this->_literals[65],([&]()->V{V _logical5114=j::get(_v_4141_meta.get(),this->_literals[48]);return j::nullish(_logical5114)?V(2.0):_logical5114;})());return _obj5113;})()});})();
_v_4150_ctx.get()=([&]()->V{V _obj5116=j::object();j::put(_obj5116,this->_literals[44],_v_4148_opts);j::put(_obj5116,this->_literals[66],V(false));j::put(_obj5116,this->_literals[67],V(true));j::put(_obj5116,this->_literals[41],j::get(_v_4141_meta.get(),this->_literals[41]));j::put(_obj5116,this->_literals[42],j::get(_v_4141_meta.get(),this->_literals[42]));return _obj5116;})();
_v_4151_fn.get()=([&]()->V{V _callee5118=_v_4143_setup.get();return j::call(_callee5118,j::Args{_v_4148_opts,([&]()->V{V _obj5117=j::object();j::put(_obj5117,this->_literals[41],j::get(_v_4141_meta.get(),this->_literals[41]));j::put(_obj5117,this->_literals[42],j::get(_v_4141_meta.get(),this->_literals[42]));return _obj5117;})()});})();
if(j::truth(([&]()->V{V _lhs5119=j::unary("typeof",_v_4151_fn.get());V _rhs5120=this->_literals[55];return V(!j::equal(_lhs5119,_rhs5120,true));})())){(void)(([&]()->V{V _callee5121=this->_v_3714_fail.get();return j::call(_callee5121,j::Args{this->_literals[68]});})());
}
return j::function([=](const j::Args &_args_fn4152,const V &_receiver_fn4152,const V &_self_fn4152) mutable ->V{
V _v_4153_t;
V _v_4154_env;
_v_4153_t=_args_fn4152[0];
V _default5122=_args_fn4152[1];if(_default5122.kind==V::Undefined||_default5122.kind==V::Hole)_default5122=([&]()->V{V _obj5123=j::object();return _obj5123;})();
_v_4154_env=_default5122;
{
(void)(([&]()->V{V _base5125=_v_4149_s.get();V _key5126=this->_literals[66];V _assign5124=([&]()->V{V _base5128=_v_4150_ctx.get();V _key5129=this->_literals[66];V _assign5127=j::unary("!",j::unary("!",j::get(_v_4154_env,this->_literals[66])));return j::put(_base5128,_key5129,_assign5127);})();return j::put(_base5125,_key5126,_assign5124);})());
(void)(([&]()->V{V _base5131=_v_4149_s.get();V _key5132=this->_literals[67];V _assign5130=([&]()->V{V _base5134=_v_4150_ctx.get();V _key5135=this->_literals[67];V _assign5133=j::unary("!",j::get(_v_4154_env,this->_literals[20]));return j::put(_base5134,_key5135,_assign5133);})();return j::put(_base5131,_key5132,_assign5130);})());
if(j::truth(_v_4145_wipe.get())){(void)(([&]()->V{V _receiver5136=_v_4149_s.get();V _method5137=this->_literals[64];V _method=j::get(_receiver5136,_method5137);j::Args _params5138=j::Args{};return j::call(_method,_params5138,_receiver5136);})());
}
(void)(([&]()->V{V _callee5142=_v_4151_fn.get();return j::call(_callee5142,j::Args{(j::truth(([&]()->V{V _receiver5139=j::builtin("Number");V _method5140=this->_literals[51];V _method=j::get(_receiver5139,_method5140);j::Args _params5141=j::Args{_v_4153_t};return j::call(_method,_params5141,_receiver5139);})())?_v_4153_t:V(0.0)),_v_4149_s.get(),_v_4150_ctx.get()});})());
return ([&]()->V{V _receiver5143=_v_4149_s.get();V _method5144=this->_literals[69];V _method=j::get(_receiver5143,_method5144);j::Args _params5145=j::Args{_v_4154_env};return j::call(_method,_params5145,_receiver5143);})();

}

return V{};
},1);

}

return V{};
},1));return _obj5109;})()});})();

}

return V{};
},2);
this->_v_4155_asPiece.get()=j::function([=](const j::Args &_args_fn4156,const V &_receiver_fn4156,const V &_self_fn4156) mutable ->V{
V _v_4157_src;
V _v_4158_name;
_v_4157_src=_args_fn4156[0];
V _default5147=_args_fn4156[1];if(_default5147.kind==V::Undefined||_default5147.kind==V::Hole)_default5147=this->_literals[70];
_v_4158_name=_default5147;
{
if(j::truth(([&]()->V{V _lhs5148=_v_4157_src;V _rhs5149=this->_v_3951_Surface.get();return j::binary("instanceof",_lhs5148,_rhs5149);})())){
j::Cell _v_4159_grid;
V _v_4160_palette;
V _v_4161_meta;
j::Cell _v_4162_other;
_v_4159_grid.get()=([&]()->V{V _receiver5150=_v_4157_src;V _method5151=this->_literals[71];V _method=j::get(_receiver5150,_method5151);j::Args _params5152=j::Args{};return j::call(_method,_params5152,_receiver5150);})();
_v_4160_palette=j::get(_v_4159_grid.get(),this->_literals[31]);
_v_4161_meta=([&]()->V{V _callee5157=this->_v_4057_checkMeta.get();return j::call(_callee5157,j::Args{([&]()->V{V _obj5153=j::object();j::put(_obj5153,this->_literals[36],_v_4158_name);j::put(_obj5153,this->_literals[39],this->_literals[72]);j::put(_obj5153,this->_literals[40],_v_4158_name);j::put(_obj5153,this->_literals[41],j::get(_v_4159_grid.get(),this->_literals[41]));j::put(_obj5153,this->_literals[42],j::get(_v_4159_grid.get(),this->_literals[42]));j::put(_obj5153,this->_literals[43],V(0.0));V _spread5154=(j::truth(_v_4160_palette)?([&]()->V{V _obj5155=j::object();j::put(_obj5155,this->_literals[31],j::get(_v_4160_palette,this->_literals[14]));return _obj5155;})():([&]()->V{V _obj5156=j::object();return _obj5156;})());for(const auto &_key:j::keys(_spread5154))j::put(_obj5153,_key,j::get(_spread5154,_key));return _obj5153;})()});})();
_v_4162_other.get()=([&]()->V{V _receiver5158=_v_4159_grid.get();V _method5159=this->_literals[71];V _method=j::get(_receiver5158,_method5159);j::Args _params5160=j::Args{};return j::call(_method,_params5160,_receiver5158);})();
if(j::truth(([&]()->V{V _chain5161=_v_4160_palette;if(j::nullish(_chain5161))return V{};V _chain5162=j::get(_chain5161,this->_literals[73]);return _chain5162;})())){
V _v_4163_n;
_v_4163_n=j::get(_v_4160_palette,this->_literals[74]);
{V _v_4164_i;
_v_4164_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs5163=_v_4164_i;V _rhs5164=j::get(j::get(_v_4162_other.get(),this->_literals[14]),this->_literals[4]);return j::binary("<",_lhs5163,_rhs5164);})());(void)(j::increment(_v_4164_i,1,false))){
V _v_4165_c;
_v_4165_c=j::get(j::get(_v_4162_other.get(),this->_literals[14]),_v_4164_i);
if(j::truth(([&]()->V{V _lhs5165=_v_4165_c;V _rhs5166=this->_v_3946_NONE.get();return V(!j::equal(_lhs5165,_rhs5166,true));})())){(void)(([&]()->V{V _base5168=j::get(_v_4162_other.get(),this->_literals[14]);V _key5169=_v_4164_i;V _assign5167=(j::truth(j::get(_v_4159_grid.get(),this->_literals[66]))?(j::truth(([&]()->V{V _lhs5170=_v_4165_c;V _rhs5171=_v_4163_n;return j::binary("<",_lhs5170,_rhs5171);})())?([&]()->V{V _lhs5172=_v_4165_c;V _rhs5173=_v_4163_n;return j::binary("+",_lhs5172,_rhs5173);})():_v_4165_c):(j::truth(([&]()->V{V _lhs5174=_v_4165_c;V _rhs5175=_v_4163_n;return j::binary(">=",_lhs5174,_rhs5175);})())?([&]()->V{V _lhs5176=_v_4165_c;V _rhs5177=_v_4163_n;return V(j::number(_lhs5176)-j::number(_rhs5177));})():_v_4165_c));return j::put(_base5168,_key5169,_assign5167);})());
}

}
}

}

(void)(([&]()->V{V _base5179=_v_4162_other.get();V _key5180=this->_literals[66];V _assign5178=j::unary("!",j::get(_v_4159_grid.get(),this->_literals[66]));return j::put(_base5179,_key5180,_assign5178);})());
return ([&]()->V{V _callee5189=this->_v_4114_chained.get();return j::call(_callee5189,j::Args{([&]()->V{V _obj5181=j::object();j::put(_obj5181,this->_literals[53],_v_4161_meta);j::put(_obj5181,this->_literals[54],j::function([=](const j::Args &_args_fn4166,const V &_receiver_fn4166,const V &_self_fn4166) mutable ->V{
return j::function([=](const j::Args &_args_fn4167,const V &_receiver_fn4167,const V &_self_fn4167) mutable ->V{
V _v_4168_t;
V _v_4169_env;
_v_4168_t=_args_fn4167[0];
V _default5182=_args_fn4167[1];if(_default5182.kind==V::Undefined||_default5182.kind==V::Hole)_default5182=([&]()->V{V _obj5183=j::object();return _obj5183;})();
_v_4169_env=_default5182;
return ([&]()->V{V _receiver5184=(j::truth(([&]()->V{V _lhs5187=j::unary("!",j::unary("!",j::get(_v_4169_env,this->_literals[66])));V _rhs5188=j::get(_v_4159_grid.get(),this->_literals[66]);return V(j::equal(_lhs5187,_rhs5188,true));})())?_v_4159_grid.get():_v_4162_other.get());V _method5185=this->_literals[69];V _method=j::get(_receiver5184,_method5185);j::Args _params5186=j::Args{_v_4169_env};return j::call(_method,_params5186,_receiver5184);})();
return V{};
},1);
return V{};
},0));return _obj5181;})()});})();

}

if(j::truth(([&]()->V{V _lhs5190=j::unary("typeof",_v_4157_src);V _rhs5191=this->_literals[1];return V(j::equal(_lhs5190,_rhs5191,true));})())){
V _v_4170_lines;
j::Cell _v_4177_cols;
j::Cell _v_4180_text;
V _v_4183_meta;
_v_4170_lines=([&]()->V{V _receiver5192=([&]()->V{V _receiver5195=_v_4157_src;V _method5196=this->_literals[76];V _method=j::get(_receiver5195,_method5196);j::Args _params5197=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[75]};return j::call(_method,_params5197,_receiver5195);})();V _method5193=this->_literals[77];V _method=j::get(_receiver5192,_method5193);j::Args _params5194=j::Args{this->_literals[75]};return j::call(_method,_params5194,_receiver5192);})();
if(j::truth(([&]()->V{V _logical5198=([&]()->V{V _lhs5199=j::get(_v_4170_lines,this->_literals[4]);V _rhs5200=V(1.0);return j::binary(">",_lhs5199,_rhs5200);})();return j::truth(_logical5198)?([&]()->V{V _lhs5201=j::get(_v_4170_lines,V(0.0));V _rhs5202=this->_literals[26];return V(j::equal(_lhs5201,_rhs5202,true));})():_logical5198;})())){
j::Cell _v_4171_indent;
while(j::truth(([&]()->V{V _logical5203=([&]()->V{V _lhs5204=j::get(_v_4170_lines,this->_literals[4]);V _rhs5205=V(1.0);return j::binary(">",_lhs5204,_rhs5205);})();return j::truth(_logical5203)?j::unary("!",([&]()->V{V _receiver5206=j::get(_v_4170_lines,V(0.0));V _method5207=this->_literals[37];V _method=j::get(_receiver5206,_method5207);j::Args _params5208=j::Args{};return j::call(_method,_params5208,_receiver5206);})()):_logical5203;})())){(void)(([&]()->V{V _receiver5209=_v_4170_lines;V _method5210=this->_literals[78];V _method=j::get(_receiver5209,_method5210);j::Args _params5211=j::Args{};return j::call(_method,_params5211,_receiver5209);})());
}
while(j::truth(([&]()->V{V _logical5212=([&]()->V{V _lhs5213=j::get(_v_4170_lines,this->_literals[4]);V _rhs5214=V(1.0);return j::binary(">",_lhs5213,_rhs5214);})();return j::truth(_logical5212)?j::unary("!",([&]()->V{V _receiver5215=j::get(_v_4170_lines,([&]()->V{V _lhs5218=j::get(_v_4170_lines,this->_literals[4]);V _rhs5219=V(1.0);return V(j::number(_lhs5218)-j::number(_rhs5219));})());V _method5216=this->_literals[37];V _method=j::get(_receiver5215,_method5216);j::Args _params5217=j::Args{};return j::call(_method,_params5217,_receiver5215);})()):_logical5212;})())){(void)(([&]()->V{V _receiver5220=_v_4170_lines;V _method5221=this->_literals[79];V _method=j::get(_receiver5220,_method5221);j::Args _params5222=j::Args{};return j::call(_method,_params5222,_receiver5220);})());
}
_v_4171_indent.get()=([&]()->V{V _receiver5236=_v_4170_lines;V _method5237=this->_literals[81];V _method=j::get(_receiver5236,_method5237);j::Args _params5238=j::Args{j::function([=](const j::Args &_args_fn4172,const V &_receiver_fn4172,const V &_self_fn4172) mutable ->V{
V _v_4173_n;
V _v_4174_l;
_v_4173_n=_args_fn4172[0];
_v_4174_l=_args_fn4172[1];
return (j::truth(([&]()->V{V _receiver5223=_v_4174_l;V _method5224=this->_literals[37];V _method=j::get(_receiver5223,_method5224);j::Args _params5225=j::Args{};return j::call(_method,_params5225,_receiver5223);})())?([&]()->V{V _receiver5233=j::builtin("Math");V _method5234=this->_literals[12];V _method=j::get(_receiver5233,_method5234);j::Args _params5235=j::Args{_v_4173_n,([&]()->V{V _lhs5226=j::get(_v_4174_l,this->_literals[4]);V _rhs5227=j::get(([&]()->V{V _receiver5228=_v_4174_l;V _method5229=this->_literals[80];V _method=j::get(_receiver5228,_method5229);j::Args _params5230=j::Args{};return j::call(_method,_params5230,_receiver5228);})(),this->_literals[4]);return V(j::number(_lhs5226)-j::number(_rhs5227));})()};return j::call(_method,_params5235,_receiver5233);})():_v_4173_n);
return V{};
},2),j::builtin("Infinity")};return j::call(_method,_params5238,_receiver5236);})();
if(j::truth(([&]()->V{V _receiver5239=j::builtin("Number");V _method5240=this->_literals[51];V _method=j::get(_receiver5239,_method5240);j::Args _params5241=j::Args{_v_4171_indent.get()};return j::call(_method,_params5241,_receiver5239);})())){(void)((_v_4170_lines=([&]()->V{V _receiver5246=_v_4170_lines;V _method5247=this->_literals[11];V _method=j::get(_receiver5246,_method5247);j::Args _params5248=j::Args{j::function([=](const j::Args &_args_fn4175,const V &_receiver_fn4175,const V &_self_fn4175) mutable ->V{
V _v_4176_l;
_v_4176_l=_args_fn4175[0];
return ([&]()->V{V _receiver5243=_v_4176_l;V _method5244=this->_literals[7];V _method=j::get(_receiver5243,_method5244);j::Args _params5245=j::Args{_v_4171_indent.get()};return j::call(_method,_params5245,_receiver5243);})();
return V{};
},1)};return j::call(_method,_params5248,_receiver5246);})()));
}

}

_v_4177_cols.get()=([&]()->V{V _receiver5253=j::builtin("Math");V _method5254=this->_literals[82];V _method=j::get(_receiver5253,_method5254);j::Args _params5255=([&](){j::Args _args5249;_args5249.push_back(V(1.0));for(const auto &_v:j::elements(([&]()->V{V _receiver5250=_v_4170_lines;V _method5251=this->_literals[11];V _method=j::get(_receiver5250,_method5251);j::Args _params5252=j::Args{j::function([=](const j::Args &_args_fn4178,const V &_receiver_fn4178,const V &_self_fn4178) mutable ->V{
V _v_4179_l;
_v_4179_l=_args_fn4178[0];
return j::get(_v_4179_l,this->_literals[4]);
return V{};
},1)};return j::call(_method,_params5252,_receiver5250);})()))_args5249.push_back(_v);return _args5249;})();return j::call(_method,_params5255,_receiver5253);})();
if(j::truth(([&]()->V{V _receiver5259=this->_v_3776_CONTROL.get();V _method5260=this->_literals[5];V _method=j::get(_receiver5259,_method5260);j::Args _params5261=j::Args{([&]()->V{V _receiver5256=_v_4170_lines;V _method5257=this->_literals[22];V _method=j::get(_receiver5256,_method5257);j::Args _params5258=j::Args{this->_literals[26]};return j::call(_method,_params5258,_receiver5256);})()};return j::call(_method,_params5261,_receiver5259);})())){(void)(([&]()->V{V _callee5262=this->_v_3714_fail.get();return j::call(_callee5262,j::Args{this->_literals[83]});})());
}
_v_4180_text.get()=([&]()->V{V _receiver5263=([&]()->V{V _receiver5269=_v_4170_lines;V _method5270=this->_literals[11];V _method=j::get(_receiver5269,_method5270);j::Args _params5271=j::Args{j::function([=](const j::Args &_args_fn4181,const V &_receiver_fn4181,const V &_self_fn4181) mutable ->V{
V _v_4182_l;
_v_4182_l=_args_fn4181[0];
return ([&]()->V{V _receiver5266=_v_4182_l;V _method5267=this->_literals[84];V _method=j::get(_receiver5266,_method5267);j::Args _params5268=j::Args{_v_4177_cols.get()};return j::call(_method,_params5268,_receiver5266);})();
return V{};
},1)};return j::call(_method,_params5271,_receiver5269);})();V _method5264=this->_literals[22];V _method=j::get(_receiver5263,_method5264);j::Args _params5265=j::Args{this->_literals[75]};return j::call(_method,_params5265,_receiver5263);})();
_v_4183_meta=([&]()->V{V _callee5273=this->_v_4057_checkMeta.get();return j::call(_callee5273,j::Args{([&]()->V{V _obj5272=j::object();j::put(_obj5272,this->_literals[36],_v_4158_name);j::put(_obj5272,this->_literals[39],this->_literals[72]);j::put(_obj5272,this->_literals[40],_v_4158_name);j::put(_obj5272,this->_literals[41],_v_4177_cols.get());j::put(_obj5272,this->_literals[42],j::get(_v_4170_lines,this->_literals[4]));j::put(_obj5272,this->_literals[43],V(0.0));return _obj5272;})()});})();
return ([&]()->V{V _callee5275=this->_v_4114_chained.get();return j::call(_callee5275,j::Args{([&]()->V{V _obj5274=j::object();j::put(_obj5274,this->_literals[53],_v_4183_meta);j::put(_obj5274,this->_literals[54],j::function([=](const j::Args &_args_fn4184,const V &_receiver_fn4184,const V &_self_fn4184) mutable ->V{
return j::function([=](const j::Args &_args_fn4185,const V &_receiver_fn4185,const V &_self_fn4185) mutable ->V{
return _v_4180_text.get();
return V{};
},0);
return V{};
},0));return _obj5274;})()});})();

}

if(j::truth(([&]()->V{V _logical5276=([&]()->V{V _logical5277=([&]()->V{V _logical5278=j::unary("!",_v_4157_src);return !j::truth(_logical5278)?([&]()->V{V _lhs5279=j::unary("typeof",_v_4157_src);V _rhs5280=this->_literals[19];return V(!j::equal(_lhs5279,_rhs5280,true));})():_logical5278;})();return !j::truth(_logical5277)?j::unary("!",j::get(_v_4157_src,this->_literals[53])):_logical5277;})();return !j::truth(_logical5276)?([&]()->V{V _lhs5281=j::unary("typeof",j::get(_v_4157_src,this->_literals[54]));V _rhs5282=this->_literals[55];return V(!j::equal(_lhs5281,_rhs5282,true));})():_logical5276;})())){(void)(([&]()->V{V _callee5283=this->_v_3714_fail.get();return j::call(_callee5283,j::Args{this->_literals[85]});})());
}
return _v_4157_src;

}

return V{};
},1);
this->_v_4186_sample.get()=j::function([=](const j::Args &_args_fn4187,const V &_receiver_fn4187,const V &_self_fn4187) mutable ->V{
V _v_4188_src;
V _v_4189_options;
_v_4188_src=_args_fn4187[0];
V _default5284=_args_fn4187[1];if(_default5284.kind==V::Undefined||_default5284.kind==V::Hole)_default5284=([&]()->V{V _obj5285=j::object();return _obj5285;})();
_v_4189_options=_default5284;
{
V _v_4190_p;
V _v_4191_meta;
j::Cell _v_4192_frame;
V _v_4193_palette;
j::Cell _v_4194_color;
j::Cell _v_4195_grid;
_v_4190_p=([&]()->V{V _callee5286=this->_v_4155_asPiece.get();return j::call(_callee5286,j::Args{_v_4188_src});})();
V _pattern5287=_v_4190_p;
_v_4191_meta=j::get(_pattern5287,this->_literals[53]);
_v_4192_frame.get()=([&]()->V{V _receiver5291=_v_4190_p;V _method5292=this->_literals[54];V _method=j::get(_receiver5291,_method5292);j::Args _params5293=j::Args{([&]()->V{V _obj5288=j::object();V _spread5289=j::get(_v_4191_meta,this->_literals[44]);for(const auto &_key:j::keys(_spread5289))j::put(_obj5288,_key,j::get(_spread5289,_key));V _spread5290=_v_4189_options;for(const auto &_key:j::keys(_spread5290))j::put(_obj5288,_key,j::get(_spread5290,_key));return _obj5288;})()};return j::call(_method,_params5293,_receiver5291);})();
_v_4193_palette=([&]()->V{V _logical5294=j::get(_v_4191_meta,this->_literals[31]);return j::nullish(_logical5294)?V::null():_logical5294;})();
_v_4194_color.get()=(j::truth(_v_4193_palette)?([&]()->V{V _callee5297=j::builtin("Uint8Array");return j::construct(_callee5297,j::Args{([&]()->V{V _lhs5295=j::get(_v_4191_meta,this->_literals[41]);V _rhs5296=j::get(_v_4191_meta,this->_literals[42]);return V(j::number(_lhs5295)*j::number(_rhs5296));})()});})():j::builtin("undefined"));
_v_4195_grid.get()=([&]()->V{V _callee5301=this->_v_3951_Surface.get();return j::construct(_callee5301,j::Args{j::get(_v_4191_meta,this->_literals[41]),j::get(_v_4191_meta,this->_literals[42]),([&]()->V{V _obj5298=j::object();j::put(_obj5298,this->_literals[31],(j::truth(_v_4193_palette)?([&]()->V{V _callee5299=this->_v_3844_Palette.get();return j::construct(_callee5299,j::Args{_v_4193_palette});})():V::null()));j::put(_obj5298,this->_literals[65],([&]()->V{V _logical5300=j::get(_v_4191_meta,this->_literals[48]);return j::nullish(_logical5300)?V(2.0):_logical5300;})());return _obj5298;})()});})();
return ([&]()->V{V _obj5302=j::object();j::put(_obj5302,this->_literals[53],_v_4191_meta);j::put(_obj5302,this->_literals[31],_v_4193_palette);j::put(_obj5302,this->_literals[86],j::function([=](const j::Args &_args_fn4196,const V &_receiver_fn4196,const V &_self_fn4196) mutable ->V{
V _v_4197_t;
V _v_4198_paper;
V _v_4199_mono;
_v_4197_t=_args_fn4196[0];
V _default5303=_args_fn4196[1];if(_default5303.kind==V::Undefined||_default5303.kind==V::Hole)_default5303=([&]()->V{V _obj5304=j::object();return _obj5304;})();
V _pattern5305=_default5303;
V _default5306=j::get(_pattern5305,this->_literals[66]);if(_default5306.kind==V::Undefined||_default5306.kind==V::Hole)_default5306=V(false);
_v_4198_paper=_default5306;
V _default5307=j::get(_pattern5305,this->_literals[67]);if(_default5307.kind==V::Undefined||_default5307.kind==V::Hole)_default5307=V(false);
_v_4199_mono=_default5307;
{
V _v_4200_c;
V _v_4201_text;
_v_4200_c=(j::truth(_v_4199_mono)?j::builtin("undefined"):_v_4194_color.get());
_v_4201_text=([&]()->V{V _callee5309=_v_4192_frame.get();return j::call(_callee5309,j::Args{_v_4197_t,([&]()->V{V _obj5308=j::object();j::put(_obj5308,this->_literals[66],_v_4198_paper);j::put(_obj5308,this->_literals[20],_v_4200_c);return _obj5308;})()});})();
(void)(([&]()->V{V _base5311=_v_4195_grid.get();V _key5312=this->_literals[66];V _assign5310=_v_4198_paper;return j::put(_base5311,_key5312,_assign5310);})());
(void)(([&]()->V{V _base5314=_v_4195_grid.get();V _key5315=this->_literals[67];V _assign5313=j::unary("!",_v_4200_c);return j::put(_base5314,_key5315,_assign5313);})());
return ([&]()->V{V _receiver5316=_v_4195_grid.get();V _method5317=this->_literals[87];V _method=j::get(_receiver5316,_method5317);j::Args _params5318=j::Args{_v_4201_text,_v_4200_c};return j::call(_method,_params5318,_receiver5316);})();

}

return V{};
},1));return _obj5302;})();

}

return V{};
},1);
this->_v_4202_snapshot.get()=j::function([=](const j::Args &_args_fn4203,const V &_receiver_fn4203,const V &_self_fn4203) mutable ->V{
V _v_4204_src;
V _v_4205_t;
V _v_4206_paper;
V _v_4207_mono;
V _v_4208_options;
_v_4204_src=_args_fn4203[0];
V _default5319=_args_fn4203[1];if(_default5319.kind==V::Undefined||_default5319.kind==V::Hole)_default5319=V(0.0);
_v_4205_t=_default5319;
V _default5320=_args_fn4203[2];if(_default5320.kind==V::Undefined||_default5320.kind==V::Hole)_default5320=([&]()->V{V _obj5321=j::object();return _obj5321;})();
V _pattern5322=_default5320;
V _default5323=j::get(_pattern5322,this->_literals[66]);if(_default5323.kind==V::Undefined||_default5323.kind==V::Hole)_default5323=V(false);
_v_4206_paper=_default5323;
V _default5324=j::get(_pattern5322,this->_literals[67]);if(_default5324.kind==V::Undefined||_default5324.kind==V::Hole)_default5324=V(false);
_v_4207_mono=_default5324;
V _default5325=j::get(_pattern5322,this->_literals[44]);if(_default5325.kind==V::Undefined||_default5325.kind==V::Hole)_default5325=([&]()->V{V _obj5326=j::object();return _obj5326;})();
_v_4208_options=_default5325;
{
V _v_4209_p;
V _v_4210_color;
V _v_4211_text;
_v_4209_p=([&]()->V{V _callee5327=this->_v_4155_asPiece.get();return j::call(_callee5327,j::Args{_v_4204_src});})();
_v_4210_color=(j::truth(([&]()->V{V _logical5328=j::get(j::get(_v_4209_p,this->_literals[53]),this->_literals[31]);return j::truth(_logical5328)?j::unary("!",_v_4207_mono):_logical5328;})())?([&]()->V{V _callee5331=j::builtin("Uint8Array");return j::construct(_callee5331,j::Args{([&]()->V{V _lhs5329=j::get(j::get(_v_4209_p,this->_literals[53]),this->_literals[41]);V _rhs5330=j::get(j::get(_v_4209_p,this->_literals[53]),this->_literals[42]);return V(j::number(_lhs5329)*j::number(_rhs5330));})()});})():j::builtin("undefined"));
_v_4211_text=([&]()->V{V _callee5333=([&]()->V{V _receiver5337=_v_4209_p;V _method5338=this->_literals[54];V _method=j::get(_receiver5337,_method5338);j::Args _params5339=j::Args{([&]()->V{V _obj5334=j::object();V _spread5335=j::get(j::get(_v_4209_p,this->_literals[53]),this->_literals[44]);for(const auto &_key:j::keys(_spread5335))j::put(_obj5334,_key,j::get(_spread5335,_key));V _spread5336=_v_4208_options;for(const auto &_key:j::keys(_spread5336))j::put(_obj5334,_key,j::get(_spread5336,_key));return _obj5334;})()};return j::call(_method,_params5339,_receiver5337);})();return j::call(_callee5333,j::Args{_v_4205_t,([&]()->V{V _obj5332=j::object();j::put(_obj5332,this->_literals[66],_v_4206_paper);j::put(_obj5332,this->_literals[20],_v_4210_color);return _obj5332;})()});})();
return ([&]()->V{V _obj5340=j::object();j::put(_obj5340,this->_literals[70],_v_4211_text);j::put(_obj5340,this->_literals[20],([&]()->V{V _logical5341=_v_4210_color;return j::nullish(_logical5341)?V::null():_logical5341;})());return _obj5340;})();

}

return V{};
},1);
auto &_import914=j::module("kit/compose");
this->_v_3712_compose.get()=j::module_value(_import914);
auto &_import955=j::module("kit/fx");
this->_v_3713_fx.get()=j::module_value(_import955);
this->exports["fail"]=this->_v_3714_fail;
this->exports["and"]=this->_v_3717_and;
this->exports["TAU"]=this->_v_3720_TAU;
this->exports["clamp"]=this->_v_3721_clamp;
this->exports["lerp"]=this->_v_3726_lerp;
this->exports["smoothstep"]=this->_v_3731_smoothstep;
this->exports["fract"]=this->_v_3737_fract;
this->exports["hash"]=this->_v_3740_hash;
this->exports["mulberry32"]=this->_v_3747_mulberry32;
this->exports["valueNoise"]=this->_v_3753_valueNoise;
this->exports["bayer"]=this->_v_3771_bayer;
this->exports["ramps"]=this->_v_3775_ramps;
this->exports["ramp"]=this->_v_3777_ramp;
this->exports["shadeChar"]=this->_v_3780_shadeChar;
this->exports["INK"]=this->_v_3788_INK;
this->exports["isHex"]=this->_v_3790_isHex;
this->exports["rgb"]=this->_v_3793_rgb;
this->exports["hex"]=this->_v_3796_hex;
this->exports["mix"]=this->_v_3803_mix;
this->exports["gradient"]=this->_v_3813_gradient;
this->exports["nearest"]=this->_v_3830_nearest;
this->exports["Palette"]=this->_v_3844_Palette;
this->exports["schemes"]=this->_v_3862_schemes;
this->exports["materialColors"]=this->_v_3863_materialColors;
this->exports["colorsOf"]=this->_v_3872_colorsOf;
this->exports["colorOf"]=this->_v_3880_colorOf;
this->exports["suggest"]=this->_v_3920_suggest;
this->exports["mergePalettes"]=this->_v_3927_mergePalettes;
this->exports["EMPTY"]=this->_v_3945_EMPTY;
this->exports["NONE"]=this->_v_3946_NONE;
this->exports["code"]=this->_v_3947_code;
this->exports["Surface"]=this->_v_3951_Surface;
this->exports["MAX"]=this->_v_4056_MAX;
this->exports["checkMeta"]=this->_v_4057_checkMeta;
this->exports["Chainable"]=this->_v_4060_Chainable;
this->exports["chained"]=this->_v_4114_chained;
this->exports["specOf"]=this->_v_4117_specOf;
this->exports["spread"]=this->_v_4125_spread;
this->exports["metaOf"]=this->_v_4131_metaOf;
this->exports["piece"]=this->_v_4137_piece;
this->exports["asPiece"]=this->_v_4155_asPiece;
this->exports["sample"]=this->_v_4186_sample;
this->exports["snapshot"]=this->_v_4202_snapshot;
this->_v_3717_and.get()=j::function([=](const j::Args &_args_fn3718,const V &_receiver_fn3718,const V &_self_fn3718) mutable ->V{
V _v_3719_words;
_v_3719_words=_args_fn3718[0];
return (j::truth(([&]()->V{V _lhs5342=j::get(_v_3719_words,this->_literals[4]);V _rhs5343=V(1.0);return j::binary(">",_lhs5342,_rhs5343);})())?([&]()->V{std::u16string _text5344;_text5344+=u"";_text5344+=j::string(([&]()->V{V _receiver5345=([&]()->V{V _receiver5348=_v_3719_words;V _method5349=this->_literals[7];V _method=j::get(_receiver5348,_method5349);j::Args _params5350=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params5350,_receiver5348);})();V _method5346=this->_literals[22];V _method=j::get(_receiver5345,_method5346);j::Args _params5347=j::Args{this->_literals[88]};return j::call(_method,_params5347,_receiver5345);})());_text5344+=u" and ";_text5344+=j::string(([&]()->V{V _receiver5351=_v_3719_words;V _method5352=this->_literals[86];V _method=j::get(_receiver5351,_method5352);j::Args _params5353=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params5353,_receiver5351);})());_text5344+=u"";return V(std::move(_text5344));})():([&]()->V{V _logical5354=j::get(_v_3719_words,V(0.0));return j::nullish(_logical5354)?this->_literals[26]:_logical5354;})());
return V{};
},1);
this->_v_3720_TAU.get()=([&]()->V{V _lhs5355=j::get(j::builtin("Math"),this->_literals[89]);V _rhs5356=V(2.0);return V(j::number(_lhs5355)*j::number(_rhs5356));})();
this->_v_3721_clamp.get()=j::function([=](const j::Args &_args_fn3722,const V &_receiver_fn3722,const V &_self_fn3722) mutable ->V{
V _v_3723_v;
V _v_3724_lo;
V _v_3725_hi;
_v_3723_v=_args_fn3722[0];
V _default5357=_args_fn3722[1];if(_default5357.kind==V::Undefined||_default5357.kind==V::Hole)_default5357=V(0.0);
_v_3724_lo=_default5357;
V _default5358=_args_fn3722[2];if(_default5358.kind==V::Undefined||_default5358.kind==V::Hole)_default5358=V(1.0);
_v_3725_hi=_default5358;
return (j::truth(([&]()->V{V _lhs5359=_v_3723_v;V _rhs5360=_v_3724_lo;return j::binary("<",_lhs5359,_rhs5360);})())?_v_3724_lo:(j::truth(([&]()->V{V _lhs5361=_v_3723_v;V _rhs5362=_v_3725_hi;return j::binary(">",_lhs5361,_rhs5362);})())?_v_3725_hi:_v_3723_v));
return V{};
},1);
this->_v_3726_lerp.get()=j::function([=](const j::Args &_args_fn3727,const V &_receiver_fn3727,const V &_self_fn3727) mutable ->V{
V _v_3728_a;
V _v_3729_b;
V _v_3730_k;
_v_3728_a=_args_fn3727[0];
_v_3729_b=_args_fn3727[1];
_v_3730_k=_args_fn3727[2];
return ([&]()->V{V _lhs5363=_v_3728_a;V _rhs5364=([&]()->V{V _lhs5365=([&]()->V{V _lhs5367=_v_3729_b;V _rhs5368=_v_3728_a;return V(j::number(_lhs5367)-j::number(_rhs5368));})();V _rhs5366=_v_3730_k;return V(j::number(_lhs5365)*j::number(_rhs5366));})();return j::binary("+",_lhs5363,_rhs5364);})();
return V{};
},3);
this->_v_3731_smoothstep.get()=j::function([=](const j::Args &_args_fn3732,const V &_receiver_fn3732,const V &_self_fn3732) mutable ->V{
V _v_3733_e0;
V _v_3734_e1;
V _v_3735_v;
_v_3733_e0=_args_fn3732[0];
_v_3734_e1=_args_fn3732[1];
_v_3735_v=_args_fn3732[2];
{
V _v_3736_k;
_v_3736_k=([&]()->V{V _callee5375=this->_v_3721_clamp.get();return j::call(_callee5375,j::Args{([&]()->V{V _lhs5369=([&]()->V{V _lhs5371=_v_3735_v;V _rhs5372=_v_3733_e0;return V(j::number(_lhs5371)-j::number(_rhs5372));})();V _rhs5370=([&]()->V{V _lhs5373=_v_3734_e1;V _rhs5374=_v_3733_e0;return V(j::number(_lhs5373)-j::number(_rhs5374));})();return V(j::number(_lhs5369)/j::number(_rhs5370));})()});})();
return ([&]()->V{V _lhs5376=([&]()->V{V _lhs5378=_v_3736_k;V _rhs5379=_v_3736_k;return V(j::number(_lhs5378)*j::number(_rhs5379));})();V _rhs5377=([&]()->V{V _lhs5380=V(3.0);V _rhs5381=([&]()->V{V _lhs5382=V(2.0);V _rhs5383=_v_3736_k;return V(j::number(_lhs5382)*j::number(_rhs5383));})();return V(j::number(_lhs5380)-j::number(_rhs5381));})();return V(j::number(_lhs5376)*j::number(_rhs5377));})();

}

return V{};
},3);
this->_v_3737_fract.get()=j::function([=](const j::Args &_args_fn3738,const V &_receiver_fn3738,const V &_self_fn3738) mutable ->V{
V _v_3739_v;
_v_3739_v=_args_fn3738[0];
return ([&]()->V{V _lhs5384=_v_3739_v;V _rhs5385=([&]()->V{V _number5386=_v_3739_v;return V(std::floor(j::number(_number5386)));})();return V(j::number(_lhs5384)-j::number(_rhs5385));})();
return V{};
},1);
this->_v_3768_BAYER4.get()=([&]()->V{V _receiver5393=([&]()->V{j::Args _array5396;_array5396.push_back(V(0.0));_array5396.push_back(V(8.0));_array5396.push_back(V(2.0));_array5396.push_back(V(10.0));_array5396.push_back(V(12.0));_array5396.push_back(V(4.0));_array5396.push_back(V(14.0));_array5396.push_back(V(6.0));_array5396.push_back(V(3.0));_array5396.push_back(V(11.0));_array5396.push_back(V(1.0));_array5396.push_back(V(9.0));_array5396.push_back(V(15.0));_array5396.push_back(V(7.0));_array5396.push_back(V(13.0));_array5396.push_back(V(5.0));return j::array(std::move(_array5396));})();V _method5394=this->_literals[11];V _method=j::get(_receiver5393,_method5394);j::Args _params5395=j::Args{j::function([=](const j::Args &_args_fn3769,const V &_receiver_fn3769,const V &_self_fn3769) mutable ->V{
V _v_3770_v;
_v_3770_v=_args_fn3769[0];
return ([&]()->V{V _lhs5387=([&]()->V{V _lhs5389=([&]()->V{V _lhs5391=_v_3770_v;V _rhs5392=V(0.5);return j::binary("+",_lhs5391,_rhs5392);})();V _rhs5390=V(16.0);return V(j::number(_lhs5389)/j::number(_rhs5390));})();V _rhs5388=V(0.5);return V(j::number(_lhs5387)-j::number(_rhs5388));})();
return V{};
},1)};return j::call(_method,_params5395,_receiver5393);})();
this->_v_3771_bayer.get()=j::function([=](const j::Args &_args_fn3772,const V &_receiver_fn3772,const V &_self_fn3772) mutable ->V{
V _v_3773_x;
V _v_3774_y;
_v_3773_x=_args_fn3772[0];
_v_3774_y=_args_fn3772[1];
return j::get(this->_v_3768_BAYER4.get(),([&]()->V{V _lhs5397=([&]()->V{V _lhs5399=([&]()->V{V _lhs5401=_v_3774_y;V _rhs5402=V(3.0);return V(int(j::i32(_lhs5401)&j::i32(_rhs5402)));})();V _rhs5400=V(4.0);return V(j::number(_lhs5399)*j::number(_rhs5400));})();V _rhs5398=([&]()->V{V _lhs5403=_v_3773_x;V _rhs5404=V(3.0);return V(int(j::i32(_lhs5403)&j::i32(_rhs5404)));})();return j::binary("+",_lhs5397,_rhs5398);})());
return V{};
},2);
this->_v_3775_ramps.get()=([&]()->V{V _obj5405=j::object();j::put(_obj5405,this->_literals[0],this->_literals[90]);j::put(_obj5405,this->_literals[91],this->_literals[92]);j::put(_obj5405,this->_literals[93],this->_literals[94]);j::put(_obj5405,this->_literals[95],this->_literals[96]);j::put(_obj5405,this->_literals[97],this->_literals[98]);j::put(_obj5405,this->_literals[99],this->_literals[100]);j::put(_obj5405,this->_literals[101],this->_literals[102]);j::put(_obj5405,this->_literals[103],this->_literals[104]);j::put(_obj5405,this->_literals[105],this->_literals[106]);return _obj5405;})();
this->_v_3776_CONTROL.get()=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");
this->_v_3788_INK.get()=([&]()->V{V _obj5406=j::object();j::put(_obj5406,this->_literals[16],this->_literals[107]);j::put(_obj5406,this->_literals[17],this->_literals[108]);return _obj5406;})();
this->_v_3789_HEX.get()=j::regexp(u"^#[0-9a-f]{6}$","i");
this->_v_3790_isHex.get()=j::function([=](const j::Args &_args_fn3791,const V &_receiver_fn3791,const V &_self_fn3791) mutable ->V{
V _v_3792_v;
_v_3792_v=_args_fn3791[0];
return ([&]()->V{V _logical5407=([&]()->V{V _lhs5408=j::unary("typeof",_v_3792_v);V _rhs5409=this->_literals[1];return V(j::equal(_lhs5408,_rhs5409,true));})();return j::truth(_logical5407)?([&]()->V{V _receiver5410=this->_v_3789_HEX.get();V _method5411=this->_literals[5];V _method=j::get(_receiver5410,_method5411);j::Args _params5412=j::Args{_v_3792_v};return j::call(_method,_params5412,_receiver5410);})():_logical5407;})();
return V{};
},1);
this->_v_3796_hex.get()=j::function([=](const j::Args &_args_fn3797,const V &_receiver_fn3797,const V &_self_fn3797) mutable ->V{
V _v_3798_r;
V _v_3799_g;
V _v_3800_b;
V _pattern5413=_args_fn3797[0];
_v_3798_r=j::get(_pattern5413,V(0));
_v_3799_g=j::get(_pattern5413,V(1));
_v_3800_b=j::get(_pattern5413,V(2));
return ([&]()->V{V _lhs5414=this->_literals[109];V _rhs5415=([&]()->V{V _receiver5416=([&]()->V{V _receiver5428=([&]()->V{j::Args _array5431;_array5431.push_back(_v_3798_r);_array5431.push_back(_v_3799_g);_array5431.push_back(_v_3800_b);return j::array(std::move(_array5431));})();V _method5429=this->_literals[11];V _method=j::get(_receiver5428,_method5429);j::Args _params5430=j::Args{j::function([=](const j::Args &_args_fn3801,const V &_receiver_fn3801,const V &_self_fn3801) mutable ->V{
V _v_3802_v;
_v_3802_v=_args_fn3801[0];
return ([&]()->V{V _receiver5419=([&]()->V{V _receiver5422=([&]()->V{V _number5426=([&]()->V{V _callee5427=this->_v_3721_clamp.get();return j::call(_callee5427,j::Args{_v_3802_v,V(0.0),V(255.0)});})();return V(std::floor(j::number(_number5426)+.5));})();V _method5423=this->_literals[111];V _method=j::get(_receiver5422,_method5423);j::Args _params5424=j::Args{V(16.0)};return j::call(_method,_params5424,_receiver5422);})();V _method5420=this->_literals[112];V _method=j::get(_receiver5419,_method5420);j::Args _params5421=j::Args{V(2.0),this->_literals[110]};return j::call(_method,_params5421,_receiver5419);})();
return V{};
},1)};return j::call(_method,_params5430,_receiver5428);})();V _method5417=this->_literals[22];V _method=j::get(_receiver5416,_method5417);j::Args _params5418=j::Args{this->_literals[26]};return j::call(_method,_params5418,_receiver5416);})();return j::binary("+",_lhs5414,_rhs5415);})();
return V{};
},1);
this->_v_3803_mix.get()=j::function([=](const j::Args &_args_fn3804,const V &_receiver_fn3804,const V &_self_fn3804) mutable ->V{
V _v_3805_a;
V _v_3806_b;
j::Cell _v_3807_k;
_v_3805_a=_args_fn3804[0];
_v_3806_b=_args_fn3804[1];
_v_3807_k.get()=_args_fn3804[2];
{
V _v_3808_x;
j::Cell _v_3809_y;
_v_3808_x=([&]()->V{V _callee5432=this->_v_3793_rgb.get();return j::call(_callee5432,j::Args{_v_3805_a});})();
_v_3809_y.get()=([&]()->V{V _callee5433=this->_v_3793_rgb.get();return j::call(_callee5433,j::Args{_v_3806_b});})();
return ([&]()->V{V _callee5439=this->_v_3796_hex.get();return j::call(_callee5439,j::Args{([&]()->V{V _receiver5436=_v_3808_x;V _method5437=this->_literals[11];V _method=j::get(_receiver5436,_method5437);j::Args _params5438=j::Args{j::function([=](const j::Args &_args_fn3810,const V &_receiver_fn3810,const V &_self_fn3810) mutable ->V{
V _v_3811_v;
V _v_3812_i;
_v_3811_v=_args_fn3810[0];
_v_3812_i=_args_fn3810[1];
return ([&]()->V{V _callee5435=this->_v_3726_lerp.get();return j::call(_callee5435,j::Args{_v_3811_v,j::get(_v_3809_y.get(),_v_3812_i),([&]()->V{V _callee5434=this->_v_3721_clamp.get();return j::call(_callee5434,j::Args{_v_3807_k.get()});})()});})();
return V{};
},2)};return j::call(_method,_params5438,_receiver5436);})()});})();

}

return V{};
},3);
this->_v_3826_distance.get()=j::function([=](const j::Args &_args_fn3827,const V &_receiver_fn3827,const V &_self_fn3827) mutable ->V{
V _v_3828_a;
V _v_3829_b;
_v_3828_a=_args_fn3827[0];
_v_3829_b=_args_fn3827[1];
return ([&]()->V{V _lhs5440=([&]()->V{V _lhs5442=([&]()->V{V _lhs5444=V(0.3);V _rhs5445=([&]()->V{V _lhs5446=([&]()->V{V _lhs5448=j::get(_v_3828_a,V(0.0));V _rhs5449=j::get(_v_3829_b,V(0.0));return V(j::number(_lhs5448)-j::number(_rhs5449));})();V _rhs5447=V(2.0);return V(std::pow(j::number(_lhs5446),j::number(_rhs5447)));})();return V(j::number(_lhs5444)*j::number(_rhs5445));})();V _rhs5443=([&]()->V{V _lhs5450=V(0.59);V _rhs5451=([&]()->V{V _lhs5452=([&]()->V{V _lhs5454=j::get(_v_3828_a,V(1.0));V _rhs5455=j::get(_v_3829_b,V(1.0));return V(j::number(_lhs5454)-j::number(_rhs5455));})();V _rhs5453=V(2.0);return V(std::pow(j::number(_lhs5452),j::number(_rhs5453)));})();return V(j::number(_lhs5450)*j::number(_rhs5451));})();return j::binary("+",_lhs5442,_rhs5443);})();V _rhs5441=([&]()->V{V _lhs5456=V(0.11);V _rhs5457=([&]()->V{V _lhs5458=([&]()->V{V _lhs5460=j::get(_v_3828_a,V(2.0));V _rhs5461=j::get(_v_3829_b,V(2.0));return V(j::number(_lhs5460)-j::number(_rhs5461));})();V _rhs5459=V(2.0);return V(std::pow(j::number(_lhs5458),j::number(_rhs5459)));})();return V(j::number(_lhs5456)*j::number(_rhs5457));})();return j::binary("+",_lhs5440,_rhs5441);})();
return V{};
},2);
this->_v_3841_themed.get()=j::function([=](const j::Args &_args_fn3842,const V &_receiver_fn3842,const V &_self_fn3842) mutable ->V{
V _v_3843_v;
_v_3843_v=_args_fn3842[0];
return ([&]()->V{V _logical5462=([&]()->V{V _logical5463=([&]()->V{V _logical5464=([&]()->V{V _logical5465=([&]()->V{V _lhs5466=_v_3843_v;V _rhs5467=V::null();return V(!j::equal(_lhs5466,_rhs5467,true));})();return j::truth(_logical5465)?([&]()->V{V _lhs5468=j::unary("typeof",_v_3843_v);V _rhs5469=this->_literals[19];return V(j::equal(_lhs5468,_rhs5469,true));})():_logical5465;})();return j::truth(_logical5464)?j::unary("!",([&]()->V{V _receiver5470=j::builtin("Array");V _method5471=this->_literals[8];V _method=j::get(_receiver5470,_method5471);j::Args _params5472=j::Args{_v_3843_v};return j::call(_method,_params5472,_receiver5470);})()):_logical5464;})();return j::truth(_logical5463)?([&]()->V{V _lhs5473=this->_literals[16];V _rhs5474=_v_3843_v;return j::binary("in",_lhs5473,_rhs5474);})():_logical5463;})();return j::truth(_logical5462)?([&]()->V{V _lhs5475=this->_literals[17];V _rhs5476=_v_3843_v;return j::binary("in",_lhs5475,_rhs5476);})():_logical5462;})();
return V{};
},1);
{V _base5477=V{};V _class5478=j::make_class("Palette",_base5477,j::function([=](const j::Args &_args_fn3845,const V &_receiver_fn3845,const V &_self_fn3845) mutable ->V{
j::put(_receiver_fn3845,this->_literals[14],V{});j::put(_receiver_fn3845,this->_literals[73],V{});j::put(_receiver_fn3845,this->_literals[74],V{});j::put(_receiver_fn3845,this->_literals[113],([&]()->V{j::Args _array5479;_array5479.push_back(([&]()->V{V _callee5480=j::builtin("Map");return j::construct(_callee5480,j::Args{});})());_array5479.push_back(([&]()->V{V _callee5481=j::builtin("Map");return j::construct(_callee5481,j::Args{});})());return j::array(std::move(_array5479));})());_receiver_fn3845.data->hidden.insert(j::string(this->_literals[113]));j::put(_receiver_fn3845,this->_literals[114],V{});_receiver_fn3845.data->hidden.insert(j::string(this->_literals[114]));V _v_3846_spec;
V _v_3847_ink;
_v_3846_spec=_args_fn3845[0];
V _default5482=_args_fn3845[1];if(_default5482.kind==V::Undefined||_default5482.kind==V::Hole)_default5482=V(0.0);
_v_3847_ink=_default5482;
{
if(j::truth(([&]()->V{V _receiver5483=j::builtin("Array");V _method5484=this->_literals[8];V _method=j::get(_receiver5483,_method5484);j::Args _params5485=j::Args{_v_3846_spec};return j::call(_method,_params5485,_receiver5483);})())){
if(j::truth(j::unary("!",j::get(_v_3846_spec,this->_literals[4])))){(void)(([&]()->V{V _callee5486=this->_v_3714_fail.get();return j::call(_callee5486,j::Args{this->_literals[115]});})());
}
(void)(([&]()->V{V _base5488=_receiver_fn3845;V _key5489=this->_literals[73];V _assign5487=V(false);return j::put(_base5488,_key5489,_assign5487);})());
(void)(([&]()->V{V _base5491=_receiver_fn3845;V _key5492=this->_literals[74];V _assign5490=j::get(_v_3846_spec,this->_literals[4]);return j::put(_base5491,_key5492,_assign5490);})());
(void)(([&]()->V{V _base5494=_receiver_fn3845;V _key5495=this->_literals[14];V _assign5493=(j::truth(([&]()->V{V _lhs5496=j::get(_v_3846_spec,this->_literals[4]);V _rhs5497=V(1.0);return V(j::equal(_lhs5496,_rhs5497,true));})())?([&]()->V{j::Args _array5498;_array5498.push_back(j::get(_v_3846_spec,V(0.0)));_array5498.push_back(j::get(_v_3846_spec,V(0.0)));return j::array(std::move(_array5498));})():([&]()->V{j::Args _array5499;for(const auto &_value:j::elements(_v_3846_spec))_array5499.push_back(_value);return j::array(std::move(_array5499));})());return j::put(_base5494,_key5495,_assign5493);})());

}
else {if(j::truth(([&]()->V{V _logical5500=([&]()->V{V _logical5501=([&]()->V{V _logical5502=_v_3846_spec;return j::truth(_logical5502)?([&]()->V{V _lhs5503=j::unary("typeof",_v_3846_spec);V _rhs5504=this->_literals[19];return V(j::equal(_lhs5503,_rhs5504,true));})():_logical5502;})();return j::truth(_logical5501)?([&]()->V{V _receiver5505=j::builtin("Array");V _method5506=this->_literals[8];V _method=j::get(_receiver5505,_method5506);j::Args _params5507=j::Args{j::get(_v_3846_spec,this->_literals[16])};return j::call(_method,_params5507,_receiver5505);})():_logical5501;})();return j::truth(_logical5500)?([&]()->V{V _receiver5508=j::builtin("Array");V _method5509=this->_literals[8];V _method=j::get(_receiver5508,_method5509);j::Args _params5510=j::Args{j::get(_v_3846_spec,this->_literals[17])};return j::call(_method,_params5510,_receiver5508);})():_logical5500;})())){
V _v_3848_light;
V _v_3849_dark;
V _pattern5511=_v_3846_spec;
_v_3848_light=j::get(_pattern5511,this->_literals[16]);
_v_3849_dark=j::get(_pattern5511,this->_literals[17]);
if(j::truth(([&]()->V{V _logical5512=j::unary("!",j::get(_v_3848_light,this->_literals[4]));return !j::truth(_logical5512)?([&]()->V{V _lhs5513=j::get(_v_3848_light,this->_literals[4]);V _rhs5514=j::get(_v_3849_dark,this->_literals[4]);return V(!j::equal(_lhs5513,_rhs5514,true));})():_logical5512;})())){(void)(([&]()->V{V _callee5516=this->_v_3714_fail.get();return j::call(_callee5516,j::Args{([&]()->V{std::u16string _text5515;_text5515+=u"a palette's light and dark lists take the same number of colours, one or more, not ";_text5515+=j::string(j::get(_v_3848_light,this->_literals[4]));_text5515+=u" and ";_text5515+=j::string(j::get(_v_3849_dark,this->_literals[4]));_text5515+=u"";return V(std::move(_text5515));})()});})());
}
(void)(([&]()->V{V _base5518=_receiver_fn3845;V _key5519=this->_literals[73];V _assign5517=V(true);return j::put(_base5518,_key5519,_assign5517);})());
(void)(([&]()->V{V _base5521=_receiver_fn3845;V _key5522=this->_literals[74];V _assign5520=j::get(_v_3848_light,this->_literals[4]);return j::put(_base5521,_key5522,_assign5520);})());
(void)(([&]()->V{V _base5524=_receiver_fn3845;V _key5525=this->_literals[14];V _assign5523=([&]()->V{j::Args _array5526;for(const auto &_value:j::elements(_v_3848_light))_array5526.push_back(_value);for(const auto &_value:j::elements(_v_3849_dark))_array5526.push_back(_value);return j::array(std::move(_array5526));})();return j::put(_base5524,_key5525,_assign5523);})());

}
else {(void)(([&]()->V{V _callee5531=this->_v_3714_fail.get();return j::call(_callee5531,j::Args{([&]()->V{std::u16string _text5527;_text5527+=u"a palette takes a list of colours as #rrggbb, or { light, dark }, not ";_text5527+=j::string(([&]()->V{V _receiver5528=j::builtin("JSON");V _method5529=this->_literals[6];V _method=j::get(_receiver5528,_method5529);j::Args _params5530=j::Args{_v_3846_spec};return j::call(_method,_params5530,_receiver5528);})());_text5527+=u"";return V(std::move(_text5527));})()});})());
}
}
{for(const auto &_item5532:j::elements(j::get(_receiver_fn3845,this->_literals[14]))){V _v_3850_c;
_v_3850_c=_item5532;
if(j::truth(j::unary("!",([&]()->V{V _callee5533=this->_v_3790_isHex.get();return j::call(_callee5533,j::Args{_v_3850_c});})()))){(void)(([&]()->V{V _callee5538=this->_v_3714_fail.get();return j::call(_callee5538,j::Args{([&]()->V{std::u16string _text5534;_text5534+=u"a palette takes colours as #rrggbb, not ";_text5534+=j::string(([&]()->V{V _receiver5535=j::builtin("JSON");V _method5536=this->_literals[6];V _method=j::get(_receiver5535,_method5536);j::Args _params5537=j::Args{_v_3850_c};return j::call(_method,_params5537,_receiver5535);})());_text5534+=u"";return V(std::move(_text5534));})()});})());
}
}}
if(j::truth(([&]()->V{V _lhs5539=j::get(j::get(_receiver_fn3845,this->_literals[14]),this->_literals[4]);V _rhs5540=V(64.0);return j::binary(">",_lhs5539,_rhs5540);})())){(void)(([&]()->V{V _callee5542=this->_v_3714_fail.get();return j::call(_callee5542,j::Args{([&]()->V{std::u16string _text5541;_text5541+=u"a palette takes up to 64 colours, light and dark together, not ";_text5541+=j::string(j::get(j::get(_receiver_fn3845,this->_literals[14]),this->_literals[4]));_text5541+=u"";return V(std::move(_text5541));})()});})());
}
(void)(([&]()->V{V _base5544=_receiver_fn3845;V _key5545=this->_literals[114];V _assign5543=_v_3847_ink;return j::put(_base5544,_key5545,_assign5543);})());

}

return V{};
},1));this->_v_3844_Palette.get()=_class5478;j::class_method(_class5478,this->_literals[116],j::function([=](const j::Args &_args_fn3851,const V &_receiver_fn3851,const V &_self_fn3851) mutable ->V{
V _v_3852_c;
V _v_3853_paper;
_v_3852_c=_args_fn3851[0];
V _default5546=_args_fn3851[1];if(_default5546.kind==V::Undefined||_default5546.kind==V::Hole)_default5546=V(false);
_v_3853_paper=_default5546;
{
V _v_3854_base;
V _v_3855_cache;
V _v_3856_i;
_v_3854_base=(j::truth(([&]()->V{V _logical5547=j::get(_receiver_fn3851,this->_literals[73]);return j::truth(_logical5547)?j::unary("!",_v_3853_paper):_logical5547;})())?j::get(_receiver_fn3851,this->_literals[74]):V(0.0));
if(j::truth(([&]()->V{V _lhs5548=j::unary("typeof",_v_3852_c);V _rhs5549=this->_literals[50];return V(j::equal(_lhs5548,_rhs5549,true));})())){
if(j::truth(([&]()->V{V _logical5550=([&]()->V{V _logical5551=j::unary("!",([&]()->V{V _receiver5552=j::builtin("Number");V _method5553=this->_literals[10];V _method=j::get(_receiver5552,_method5553);j::Args _params5554=j::Args{_v_3852_c};return j::call(_method,_params5554,_receiver5552);})());return !j::truth(_logical5551)?([&]()->V{V _lhs5555=_v_3852_c;V _rhs5556=V(0.0);return j::binary("<",_lhs5555,_rhs5556);})():_logical5551;})();return !j::truth(_logical5550)?([&]()->V{V _lhs5557=_v_3852_c;V _rhs5558=j::get(_receiver_fn3851,this->_literals[74]);return j::binary(">=",_lhs5557,_rhs5558);})():_logical5550;})())){(void)(([&]()->V{V _callee5562=this->_v_3714_fail.get();return j::call(_callee5562,j::Args{([&]()->V{std::u16string _text5559;_text5559+=u"colour ";_text5559+=j::string(_v_3852_c);_text5559+=u" is not one of the palette's ";_text5559+=j::string(j::get(_receiver_fn3851,this->_literals[74]));_text5559+=u": a colour index takes a whole number from 0 to ";_text5559+=j::string(([&]()->V{V _lhs5560=j::get(_receiver_fn3851,this->_literals[74]);V _rhs5561=V(1.0);return V(j::number(_lhs5560)-j::number(_rhs5561));})());_text5559+=u"";return V(std::move(_text5559));})()});})());
}
return ([&]()->V{V _lhs5563=_v_3854_base;V _rhs5564=_v_3852_c;return j::binary("+",_lhs5563,_rhs5564);})();

}

_v_3855_cache=j::get(j::get(_receiver_fn3851,this->_literals[113]),(j::truth(_v_3853_paper)?V(0.0):V(1.0)));
_v_3856_i=([&]()->V{V _receiver5565=_v_3855_cache;V _method5566=this->_literals[27];V _method=j::get(_receiver5565,_method5566);j::Args _params5567=j::Args{_v_3852_c};return j::call(_method,_params5567,_receiver5565);})();
if(j::truth(([&]()->V{V _lhs5568=_v_3856_i;V _rhs5569=j::builtin("undefined");return V(j::equal(_lhs5568,_rhs5569,true));})())){
V _v_3857_lc;
if(j::truth(j::unary("!",([&]()->V{V _callee5570=this->_v_3790_isHex.get();return j::call(_callee5570,j::Args{_v_3852_c});})()))){(void)(([&]()->V{V _callee5575=this->_v_3714_fail.get();return j::call(_callee5575,j::Args{([&]()->V{std::u16string _text5571;_text5571+=u"a colour takes #rrggbb or an index into the palette, not ";_text5571+=j::string(([&]()->V{V _receiver5572=j::builtin("JSON");V _method5573=this->_literals[6];V _method=j::get(_receiver5572,_method5573);j::Args _params5574=j::Args{_v_3852_c};return j::call(_method,_params5574,_receiver5572);})());_text5571+=u"";return V(std::move(_text5571));})()});})());
}
_v_3857_lc=([&]()->V{V _receiver5576=_v_3852_c;V _method5577=this->_literals[23];V _method=j::get(_receiver5576,_method5577);j::Args _params5578=j::Args{};return j::call(_method,_params5578,_receiver5576);})();
(void)((_v_3856_i=j::unary("-",V(1.0))));
{V _v_3858_k;
_v_3858_k=_v_3854_base;
for(;j::truth(([&]()->V{V _lhs5580=_v_3858_k;V _rhs5581=([&]()->V{V _lhs5582=_v_3854_base;V _rhs5583=j::get(_receiver_fn3851,this->_literals[74]);return j::binary("+",_lhs5582,_rhs5583);})();return j::binary("<",_lhs5580,_rhs5581);})());(void)(j::increment(_v_3858_k,1,false))){if(j::truth(([&]()->V{V _lhs5584=([&]()->V{V _receiver5586=j::get(j::get(_receiver_fn3851,this->_literals[14]),_v_3858_k);V _method5587=this->_literals[23];V _method=j::get(_receiver5586,_method5587);j::Args _params5588=j::Args{};return j::call(_method,_params5588,_receiver5586);})();V _rhs5585=_v_3857_lc;return V(j::equal(_lhs5584,_rhs5585,true));})())){(void)(((_v_3856_i=_v_3858_k),(_v_3858_k=j::builtin("Infinity"))));
}
}}
if(j::truth(([&]()->V{V _lhs5591=_v_3856_i;V _rhs5592=V(0.0);return j::binary("<",_lhs5591,_rhs5592);})())){(void)((_v_3856_i=([&]()->V{V _callee5596=this->_v_3830_nearest.get();return j::call(_callee5596,j::Args{j::get(_receiver_fn3851,this->_literals[14]),_v_3852_c,_v_3854_base,([&]()->V{V _lhs5594=_v_3854_base;V _rhs5595=j::get(_receiver_fn3851,this->_literals[74]);return j::binary("+",_lhs5594,_rhs5595);})()});})()));
}
(void)(([&]()->V{V _receiver5597=_v_3855_cache;V _method5598=this->_literals[29];V _method=j::get(_receiver5597,_method5598);j::Args _params5599=j::Args{_v_3852_c,_v_3856_i};return j::call(_method,_params5599,_receiver5597);})());

}

return _v_3856_i;

}

return V{};
},1),false,"method");j::class_method(_class5478,this->_literals[33],j::function([=](const j::Args &_args_fn3859,const V &_receiver_fn3859,const V &_self_fn3859) mutable ->V{
V _v_3860_paper;
V _default5600=_args_fn3859[0];if(_default5600.kind==V::Undefined||_default5600.kind==V::Hole)_default5600=V(false);
_v_3860_paper=_default5600;
{
V _v_3861_ink;
_v_3861_ink=j::get(_receiver_fn3859,this->_literals[114]);
return ([&]()->V{V _receiver5602=_receiver_fn3859;V _method5603=this->_literals[116];V _method=j::get(_receiver5602,_method5603);j::Args _params5604=j::Args{(j::truth(([&]()->V{V _callee5601=this->_v_3841_themed.get();return j::call(_callee5601,j::Args{_v_3861_ink});})())?(j::truth(_v_3860_paper)?j::get(_v_3861_ink,this->_literals[16]):j::get(_v_3861_ink,this->_literals[17])):_v_3861_ink),_v_3860_paper};return j::call(_method,_params5604,_receiver5602);})();

}

return V{};
},0),false,"method");}
this->_v_3862_schemes.get()=([&]()->V{V _obj5605=j::object();j::put(_obj5605,this->_literals[117],([&]()->V{V _obj5606=j::object();j::put(_obj5606,this->_literals[16],([&]()->V{j::Args _array5607;_array5607.push_back(this->_literals[118]);_array5607.push_back(this->_literals[119]);_array5607.push_back(this->_literals[120]);_array5607.push_back(this->_literals[121]);_array5607.push_back(this->_literals[122]);_array5607.push_back(this->_literals[123]);return j::array(std::move(_array5607));})());j::put(_obj5606,this->_literals[17],([&]()->V{j::Args _array5608;_array5608.push_back(this->_literals[124]);_array5608.push_back(this->_literals[125]);_array5608.push_back(this->_literals[120]);_array5608.push_back(this->_literals[126]);_array5608.push_back(this->_literals[127]);_array5608.push_back(this->_literals[128]);return j::array(std::move(_array5608));})());return _obj5606;})());j::put(_obj5605,this->_literals[129],([&]()->V{V _obj5609=j::object();j::put(_obj5609,this->_literals[16],([&]()->V{j::Args _array5610;_array5610.push_back(this->_literals[130]);_array5610.push_back(this->_literals[131]);_array5610.push_back(this->_literals[132]);_array5610.push_back(this->_literals[133]);_array5610.push_back(this->_literals[134]);_array5610.push_back(this->_literals[135]);return j::array(std::move(_array5610));})());j::put(_obj5609,this->_literals[17],([&]()->V{j::Args _array5611;_array5611.push_back(this->_literals[135]);_array5611.push_back(this->_literals[136]);_array5611.push_back(this->_literals[132]);_array5611.push_back(this->_literals[137]);_array5611.push_back(this->_literals[138]);_array5611.push_back(this->_literals[139]);return j::array(std::move(_array5611));})());return _obj5609;})());j::put(_obj5605,this->_literals[140],([&]()->V{V _obj5612=j::object();j::put(_obj5612,this->_literals[16],([&]()->V{j::Args _array5613;_array5613.push_back(this->_literals[141]);_array5613.push_back(this->_literals[142]);_array5613.push_back(this->_literals[143]);_array5613.push_back(this->_literals[144]);_array5613.push_back(this->_literals[145]);_array5613.push_back(this->_literals[146]);return j::array(std::move(_array5613));})());j::put(_obj5612,this->_literals[17],([&]()->V{j::Args _array5614;_array5614.push_back(this->_literals[147]);_array5614.push_back(this->_literals[148]);_array5614.push_back(this->_literals[149]);_array5614.push_back(this->_literals[150]);_array5614.push_back(this->_literals[151]);_array5614.push_back(this->_literals[152]);return j::array(std::move(_array5614));})());return _obj5612;})());j::put(_obj5605,this->_literals[153],([&]()->V{V _obj5615=j::object();j::put(_obj5615,this->_literals[16],([&]()->V{j::Args _array5616;_array5616.push_back(this->_literals[154]);_array5616.push_back(this->_literals[155]);_array5616.push_back(this->_literals[156]);_array5616.push_back(this->_literals[157]);_array5616.push_back(this->_literals[158]);_array5616.push_back(this->_literals[159]);return j::array(std::move(_array5616));})());j::put(_obj5615,this->_literals[17],([&]()->V{j::Args _array5617;_array5617.push_back(this->_literals[160]);_array5617.push_back(this->_literals[158]);_array5617.push_back(this->_literals[161]);_array5617.push_back(this->_literals[162]);_array5617.push_back(this->_literals[163]);_array5617.push_back(this->_literals[164]);return j::array(std::move(_array5617));})());return _obj5615;})());j::put(_obj5605,this->_literals[165],([&]()->V{V _obj5618=j::object();j::put(_obj5618,this->_literals[16],([&]()->V{j::Args _array5619;_array5619.push_back(this->_literals[166]);_array5619.push_back(this->_literals[167]);_array5619.push_back(this->_literals[168]);_array5619.push_back(this->_literals[169]);_array5619.push_back(this->_literals[170]);_array5619.push_back(this->_literals[171]);return j::array(std::move(_array5619));})());j::put(_obj5618,this->_literals[17],([&]()->V{j::Args _array5620;_array5620.push_back(this->_literals[172]);_array5620.push_back(this->_literals[173]);_array5620.push_back(this->_literals[174]);_array5620.push_back(this->_literals[175]);_array5620.push_back(this->_literals[176]);_array5620.push_back(this->_literals[177]);return j::array(std::move(_array5620));})());return _obj5618;})());j::put(_obj5605,this->_literals[178],([&]()->V{V _obj5621=j::object();j::put(_obj5621,this->_literals[16],([&]()->V{j::Args _array5622;_array5622.push_back(this->_literals[179]);_array5622.push_back(this->_literals[180]);_array5622.push_back(this->_literals[181]);_array5622.push_back(this->_literals[182]);_array5622.push_back(this->_literals[183]);_array5622.push_back(this->_literals[184]);return j::array(std::move(_array5622));})());j::put(_obj5621,this->_literals[17],([&]()->V{j::Args _array5623;_array5623.push_back(this->_literals[185]);_array5623.push_back(this->_literals[184]);_array5623.push_back(this->_literals[182]);_array5623.push_back(this->_literals[175]);_array5623.push_back(this->_literals[176]);_array5623.push_back(this->_literals[186]);return j::array(std::move(_array5623));})());return _obj5621;})());j::put(_obj5605,this->_literals[187],([&]()->V{V _obj5624=j::object();j::put(_obj5624,this->_literals[16],([&]()->V{j::Args _array5625;_array5625.push_back(this->_literals[188]);_array5625.push_back(this->_literals[189]);_array5625.push_back(this->_literals[190]);_array5625.push_back(this->_literals[191]);_array5625.push_back(this->_literals[192]);_array5625.push_back(this->_literals[173]);return j::array(std::move(_array5625));})());j::put(_obj5624,this->_literals[17],([&]()->V{j::Args _array5626;_array5626.push_back(this->_literals[193]);_array5626.push_back(this->_literals[190]);_array5626.push_back(this->_literals[189]);_array5626.push_back(this->_literals[194]);_array5626.push_back(this->_literals[195]);_array5626.push_back(this->_literals[196]);return j::array(std::move(_array5626));})());return _obj5624;})());j::put(_obj5605,this->_literals[67],([&]()->V{V _obj5627=j::object();j::put(_obj5627,this->_literals[16],([&]()->V{j::Args _array5628;_array5628.push_back(this->_literals[197]);_array5628.push_back(this->_literals[198]);_array5628.push_back(this->_literals[199]);_array5628.push_back(this->_literals[200]);_array5628.push_back(this->_literals[201]);return j::array(std::move(_array5628));})());j::put(_obj5627,this->_literals[17],([&]()->V{j::Args _array5629;_array5629.push_back(this->_literals[200]);_array5629.push_back(this->_literals[199]);_array5629.push_back(this->_literals[198]);_array5629.push_back(this->_literals[197]);_array5629.push_back(this->_literals[202]);return j::array(std::move(_array5629));})());return _obj5627;})());j::put(_obj5605,this->_literals[33],([&]()->V{V _obj5630=j::object();j::put(_obj5630,this->_literals[16],([&]()->V{j::Args _array5631;_array5631.push_back(j::get(this->_v_3788_INK.get(),this->_literals[16]));return j::array(std::move(_array5631));})());j::put(_obj5630,this->_literals[17],([&]()->V{j::Args _array5632;_array5632.push_back(j::get(this->_v_3788_INK.get(),this->_literals[17]));return j::array(std::move(_array5632));})());return _obj5630;})());j::put(_obj5605,this->_literals[66],([&]()->V{V _obj5633=j::object();j::put(_obj5633,this->_literals[16],([&]()->V{j::Args _array5634;_array5634.push_back(this->_literals[203]);_array5634.push_back(this->_literals[204]);_array5634.push_back(this->_literals[205]);_array5634.push_back(this->_literals[206]);_array5634.push_back(this->_literals[207]);return j::array(std::move(_array5634));})());j::put(_obj5633,this->_literals[17],([&]()->V{j::Args _array5635;_array5635.push_back(this->_literals[208]);_array5635.push_back(this->_literals[209]);_array5635.push_back(this->_literals[210]);_array5635.push_back(this->_literals[211]);_array5635.push_back(this->_literals[212]);return j::array(std::move(_array5635));})());return _obj5633;})());j::put(_obj5605,this->_literals[213],([&]()->V{V _obj5636=j::object();j::put(_obj5636,this->_literals[16],([&]()->V{j::Args _array5637;_array5637.push_back(this->_literals[214]);_array5637.push_back(this->_literals[215]);_array5637.push_back(this->_literals[216]);_array5637.push_back(this->_literals[217]);return j::array(std::move(_array5637));})());j::put(_obj5636,this->_literals[17],([&]()->V{j::Args _array5638;_array5638.push_back(this->_literals[218]);_array5638.push_back(this->_literals[219]);_array5638.push_back(this->_literals[220]);_array5638.push_back(this->_literals[221]);return j::array(std::move(_array5638));})());return _obj5636;})());j::put(_obj5605,this->_literals[222],([&]()->V{V _obj5639=j::object();j::put(_obj5639,this->_literals[16],([&]()->V{j::Args _array5640;_array5640.push_back(this->_literals[223]);_array5640.push_back(this->_literals[224]);_array5640.push_back(this->_literals[225]);_array5640.push_back(this->_literals[226]);_array5640.push_back(this->_literals[227]);return j::array(std::move(_array5640));})());j::put(_obj5639,this->_literals[17],([&]()->V{j::Args _array5641;_array5641.push_back(this->_literals[227]);_array5641.push_back(this->_literals[228]);_array5641.push_back(this->_literals[224]);_array5641.push_back(this->_literals[229]);_array5641.push_back(this->_literals[230]);return j::array(std::move(_array5641));})());return _obj5639;})());j::put(_obj5605,this->_literals[231],([&]()->V{V _obj5642=j::object();j::put(_obj5642,this->_literals[16],([&]()->V{j::Args _array5643;_array5643.push_back(this->_literals[163]);_array5643.push_back(this->_literals[232]);_array5643.push_back(this->_literals[233]);_array5643.push_back(this->_literals[234]);_array5643.push_back(this->_literals[235]);return j::array(std::move(_array5643));})());j::put(_obj5642,this->_literals[17],([&]()->V{j::Args _array5644;_array5644.push_back(this->_literals[235]);_array5644.push_back(this->_literals[233]);_array5644.push_back(this->_literals[163]);_array5644.push_back(this->_literals[196]);_array5644.push_back(this->_literals[236]);return j::array(std::move(_array5644));})());return _obj5642;})());j::put(_obj5605,this->_literals[237],([&]()->V{V _obj5645=j::object();j::put(_obj5645,this->_literals[16],([&]()->V{j::Args _array5646;_array5646.push_back(this->_literals[238]);_array5646.push_back(this->_literals[162]);_array5646.push_back(this->_literals[161]);_array5646.push_back(this->_literals[158]);_array5646.push_back(this->_literals[239]);return j::array(std::move(_array5646));})());j::put(_obj5645,this->_literals[17],([&]()->V{j::Args _array5647;_array5647.push_back(this->_literals[239]);_array5647.push_back(this->_literals[158]);_array5647.push_back(this->_literals[240]);_array5647.push_back(this->_literals[162]);_array5647.push_back(this->_literals[241]);return j::array(std::move(_array5647));})());return _obj5645;})());j::put(_obj5605,this->_literals[242],([&]()->V{V _obj5648=j::object();j::put(_obj5648,this->_literals[16],([&]()->V{j::Args _array5649;_array5649.push_back(this->_literals[176]);_array5649.push_back(this->_literals[180]);_array5649.push_back(this->_literals[181]);_array5649.push_back(this->_literals[182]);_array5649.push_back(this->_literals[184]);return j::array(std::move(_array5649));})());j::put(_obj5648,this->_literals[17],([&]()->V{j::Args _array5650;_array5650.push_back(this->_literals[243]);_array5650.push_back(this->_literals[182]);_array5650.push_back(this->_literals[175]);_array5650.push_back(this->_literals[176]);_array5650.push_back(this->_literals[244]);return j::array(std::move(_array5650));})());return _obj5648;})());j::put(_obj5605,this->_literals[245],([&]()->V{V _obj5651=j::object();j::put(_obj5651,this->_literals[16],([&]()->V{j::Args _array5652;_array5652.push_back(this->_literals[246]);_array5652.push_back(this->_literals[247]);_array5652.push_back(this->_literals[248]);_array5652.push_back(this->_literals[249]);_array5652.push_back(this->_literals[250]);return j::array(std::move(_array5652));})());j::put(_obj5651,this->_literals[17],([&]()->V{j::Args _array5653;_array5653.push_back(this->_literals[251]);_array5653.push_back(this->_literals[249]);_array5653.push_back(this->_literals[252]);_array5653.push_back(this->_literals[246]);_array5653.push_back(this->_literals[253]);return j::array(std::move(_array5653));})());return _obj5651;})());j::put(_obj5605,this->_literals[254],([&]()->V{V _obj5654=j::object();j::put(_obj5654,this->_literals[16],([&]()->V{j::Args _array5655;_array5655.push_back(this->_literals[255]);_array5655.push_back(this->_literals[256]);_array5655.push_back(this->_literals[257]);_array5655.push_back(this->_literals[258]);_array5655.push_back(this->_literals[259]);_array5655.push_back(this->_literals[260]);return j::array(std::move(_array5655));})());j::put(_obj5654,this->_literals[17],([&]()->V{j::Args _array5656;_array5656.push_back(this->_literals[261]);_array5656.push_back(this->_literals[262]);_array5656.push_back(this->_literals[167]);_array5656.push_back(this->_literals[247]);_array5656.push_back(this->_literals[263]);_array5656.push_back(this->_literals[264]);return j::array(std::move(_array5656));})());return _obj5654;})());return _obj5605;})();
this->_v_3863_materialColors.get()=([&]()->V{V _obj5657=j::object();j::put(_obj5657,this->_literals[265],([&]()->V{V _obj5658=j::object();j::put(_obj5658,this->_literals[16],([&]()->V{j::Args _array5659;_array5659.push_back(this->_literals[266]);_array5659.push_back(this->_literals[267]);_array5659.push_back(this->_literals[247]);_array5659.push_back(this->_literals[228]);return j::array(std::move(_array5659));})());j::put(_obj5658,this->_literals[17],([&]()->V{j::Args _array5660;_array5660.push_back(this->_literals[248]);_array5660.push_back(this->_literals[247]);_array5660.push_back(this->_literals[268]);_array5660.push_back(this->_literals[269]);return j::array(std::move(_array5660));})());return _obj5658;})());j::put(_obj5657,this->_literals[270],([&]()->V{V _obj5661=j::object();j::put(_obj5661,this->_literals[16],([&]()->V{j::Args _array5662;_array5662.push_back(this->_literals[271]);_array5662.push_back(this->_literals[272]);_array5662.push_back(this->_literals[273]);_array5662.push_back(this->_literals[168]);return j::array(std::move(_array5662));})());j::put(_obj5661,this->_literals[17],([&]()->V{j::Args _array5663;_array5663.push_back(this->_literals[273]);_array5663.push_back(this->_literals[274]);_array5663.push_back(this->_literals[275]);_array5663.push_back(this->_literals[276]);return j::array(std::move(_array5663));})());return _obj5661;})());j::put(_obj5657,this->_literals[277],([&]()->V{V _obj5664=j::object();j::put(_obj5664,this->_literals[16],([&]()->V{j::Args _array5665;_array5665.push_back(this->_literals[278]);_array5665.push_back(this->_literals[279]);_array5665.push_back(this->_literals[280]);_array5665.push_back(this->_literals[281]);return j::array(std::move(_array5665));})());j::put(_obj5664,this->_literals[17],([&]()->V{j::Args _array5666;_array5666.push_back(this->_literals[282]);_array5666.push_back(this->_literals[283]);_array5666.push_back(this->_literals[284]);_array5666.push_back(this->_literals[285]);return j::array(std::move(_array5666));})());return _obj5664;})());j::put(_obj5657,this->_literals[286],([&]()->V{V _obj5667=j::object();j::put(_obj5667,this->_literals[16],([&]()->V{j::Args _array5668;_array5668.push_back(this->_literals[287]);_array5668.push_back(this->_literals[234]);_array5668.push_back(this->_literals[233]);_array5668.push_back(this->_literals[234]);return j::array(std::move(_array5668));})());j::put(_obj5667,this->_literals[17],([&]()->V{j::Args _array5669;_array5669.push_back(this->_literals[233]);_array5669.push_back(this->_literals[232]);_array5669.push_back(this->_literals[241]);_array5669.push_back(this->_literals[164]);return j::array(std::move(_array5669));})());return _obj5667;})());j::put(_obj5657,this->_literals[288],([&]()->V{V _obj5670=j::object();j::put(_obj5670,this->_literals[16],([&]()->V{j::Args _array5671;_array5671.push_back(this->_literals[289]);_array5671.push_back(this->_literals[290]);_array5671.push_back(this->_literals[291]);_array5671.push_back(this->_literals[292]);return j::array(std::move(_array5671));})());j::put(_obj5670,this->_literals[17],([&]()->V{j::Args _array5672;_array5672.push_back(this->_literals[293]);_array5672.push_back(this->_literals[294]);_array5672.push_back(this->_literals[295]);_array5672.push_back(this->_literals[296]);return j::array(std::move(_array5672));})());return _obj5670;})());j::put(_obj5657,this->_literals[297],([&]()->V{V _obj5673=j::object();j::put(_obj5673,this->_literals[16],([&]()->V{j::Args _array5674;_array5674.push_back(this->_literals[235]);_array5674.push_back(this->_literals[287]);_array5674.push_back(this->_literals[234]);_array5674.push_back(this->_literals[298]);return j::array(std::move(_array5674));})());j::put(_obj5673,this->_literals[17],([&]()->V{j::Args _array5675;_array5675.push_back(this->_literals[298]);_array5675.push_back(this->_literals[299]);_array5675.push_back(this->_literals[155]);_array5675.push_back(this->_literals[300]);return j::array(std::move(_array5675));})());return _obj5673;})());j::put(_obj5657,this->_literals[301],([&]()->V{V _obj5676=j::object();j::put(_obj5676,this->_literals[16],([&]()->V{j::Args _array5677;_array5677.push_back(this->_literals[302]);_array5677.push_back(this->_literals[157]);_array5677.push_back(this->_literals[156]);_array5677.push_back(this->_literals[157]);return j::array(std::move(_array5677));})());j::put(_obj5676,this->_literals[17],([&]()->V{j::Args _array5678;_array5678.push_back(this->_literals[157]);_array5678.push_back(this->_literals[156]);_array5678.push_back(this->_literals[303]);_array5678.push_back(this->_literals[304]);return j::array(std::move(_array5678));})());return _obj5676;})());j::put(_obj5657,this->_literals[305],([&]()->V{V _obj5679=j::object();j::put(_obj5679,this->_literals[16],([&]()->V{j::Args _array5680;_array5680.push_back(this->_literals[306]);_array5680.push_back(this->_literals[307]);_array5680.push_back(this->_literals[308]);_array5680.push_back(this->_literals[309]);return j::array(std::move(_array5680));})());j::put(_obj5679,this->_literals[17],([&]()->V{j::Args _array5681;_array5681.push_back(this->_literals[308]);_array5681.push_back(this->_literals[309]);_array5681.push_back(this->_literals[310]);_array5681.push_back(this->_literals[311]);return j::array(std::move(_array5681));})());return _obj5679;})());j::put(_obj5657,this->_literals[312],([&]()->V{V _obj5682=j::object();j::put(_obj5682,this->_literals[16],([&]()->V{j::Args _array5683;_array5683.push_back(this->_literals[313]);_array5683.push_back(this->_literals[314]);_array5683.push_back(this->_literals[314]);_array5683.push_back(this->_literals[313]);return j::array(std::move(_array5683));})());j::put(_obj5682,this->_literals[17],([&]()->V{j::Args _array5684;_array5684.push_back(this->_literals[315]);_array5684.push_back(this->_literals[316]);_array5684.push_back(this->_literals[317]);_array5684.push_back(this->_literals[318]);return j::array(std::move(_array5684));})());return _obj5682;})());j::put(_obj5657,this->_literals[319],([&]()->V{V _obj5685=j::object();j::put(_obj5685,this->_literals[16],([&]()->V{j::Args _array5686;_array5686.push_back(this->_literals[320]);_array5686.push_back(this->_literals[314]);_array5686.push_back(this->_literals[313]);return j::array(std::move(_array5686));})());j::put(_obj5685,this->_literals[17],([&]()->V{j::Args _array5687;_array5687.push_back(this->_literals[314]);_array5687.push_back(this->_literals[253]);_array5687.push_back(this->_literals[315]);return j::array(std::move(_array5687));})());return _obj5685;})());j::put(_obj5657,this->_literals[153],([&]()->V{V _obj5688=j::object();j::put(_obj5688,this->_literals[16],([&]()->V{j::Args _array5689;_array5689.push_back(this->_literals[321]);_array5689.push_back(this->_literals[322]);_array5689.push_back(this->_literals[157]);_array5689.push_back(this->_literals[299]);_array5689.push_back(this->_literals[234]);return j::array(std::move(_array5689));})());j::put(_obj5688,this->_literals[17],([&]()->V{j::Args _array5690;_array5690.push_back(this->_literals[321]);_array5690.push_back(this->_literals[161]);_array5690.push_back(this->_literals[162]);_array5690.push_back(this->_literals[163]);_array5690.push_back(this->_literals[164]);return j::array(std::move(_array5690));})());return _obj5688;})());j::put(_obj5657,this->_literals[323],([&]()->V{V _obj5691=j::object();j::put(_obj5691,this->_literals[16],([&]()->V{j::Args _array5692;_array5692.push_back(this->_literals[302]);_array5692.push_back(this->_literals[157]);_array5692.push_back(this->_literals[299]);_array5692.push_back(this->_literals[298]);_array5692.push_back(this->_literals[281]);return j::array(std::move(_array5692));})());j::put(_obj5691,this->_literals[17],([&]()->V{j::Args _array5693;_array5693.push_back(this->_literals[157]);_array5693.push_back(this->_literals[162]);_array5693.push_back(this->_literals[154]);_array5693.push_back(this->_literals[300]);_array5693.push_back(this->_literals[236]);return j::array(std::move(_array5693));})());return _obj5691;})());j::put(_obj5657,this->_literals[237],([&]()->V{V _obj5694=j::object();j::put(_obj5694,this->_literals[16],([&]()->V{j::Args _array5695;_array5695.push_back(this->_literals[321]);_array5695.push_back(this->_literals[322]);_array5695.push_back(this->_literals[156]);_array5695.push_back(this->_literals[233]);return j::array(std::move(_array5695));})());j::put(_obj5694,this->_literals[17],([&]()->V{j::Args _array5696;_array5696.push_back(this->_literals[158]);_array5696.push_back(this->_literals[240]);_array5696.push_back(this->_literals[162]);_array5696.push_back(this->_literals[241]);return j::array(std::move(_array5696));})());return _obj5694;})());j::put(_obj5657,this->_literals[324],([&]()->V{V _obj5697=j::object();j::put(_obj5697,this->_literals[16],([&]()->V{j::Args _array5698;_array5698.push_back(this->_literals[325]);_array5698.push_back(this->_literals[326]);_array5698.push_back(this->_literals[327]);return j::array(std::move(_array5698));})());j::put(_obj5697,this->_literals[17],([&]()->V{j::Args _array5699;_array5699.push_back(this->_literals[327]);_array5699.push_back(this->_literals[325]);_array5699.push_back(this->_literals[328]);return j::array(std::move(_array5699));})());return _obj5697;})());j::put(_obj5657,this->_literals[329],([&]()->V{V _obj5700=j::object();j::put(_obj5700,this->_literals[16],([&]()->V{j::Args _array5701;_array5701.push_back(this->_literals[314]);_array5701.push_back(this->_literals[313]);return j::array(std::move(_array5701));})());j::put(_obj5700,this->_literals[17],([&]()->V{j::Args _array5702;_array5702.push_back(this->_literals[314]);_array5702.push_back(this->_literals[316]);return j::array(std::move(_array5702));})());return _obj5700;})());j::put(_obj5657,this->_literals[330],([&]()->V{V _obj5703=j::object();j::put(_obj5703,this->_literals[16],([&]()->V{j::Args _array5704;_array5704.push_back(this->_literals[326]);_array5704.push_back(this->_literals[325]);_array5704.push_back(this->_literals[327]);return j::array(std::move(_array5704));})());j::put(_obj5703,this->_literals[17],([&]()->V{j::Args _array5705;_array5705.push_back(this->_literals[331]);_array5705.push_back(this->_literals[326]);_array5705.push_back(this->_literals[325]);return j::array(std::move(_array5705));})());return _obj5703;})());j::put(_obj5657,this->_literals[332],([&]()->V{V _obj5706=j::object();j::put(_obj5706,this->_literals[16],([&]()->V{j::Args _array5707;_array5707.push_back(this->_literals[333]);_array5707.push_back(this->_literals[326]);_array5707.push_back(this->_literals[334]);return j::array(std::move(_array5707));})());j::put(_obj5706,this->_literals[17],([&]()->V{j::Args _array5708;_array5708.push_back(this->_literals[325]);_array5708.push_back(this->_literals[333]);_array5708.push_back(this->_literals[327]);return j::array(std::move(_array5708));})());return _obj5706;})());j::put(_obj5657,this->_literals[335],([&]()->V{V _obj5709=j::object();j::put(_obj5709,this->_literals[16],([&]()->V{j::Args _array5710;_array5710.push_back(this->_literals[251]);_array5710.push_back(this->_literals[320]);_array5710.push_back(this->_literals[313]);_array5710.push_back(this->_literals[314]);return j::array(std::move(_array5710));})());j::put(_obj5709,this->_literals[17],([&]()->V{j::Args _array5711;_array5711.push_back(this->_literals[320]);_array5711.push_back(this->_literals[314]);_array5711.push_back(this->_literals[315]);_array5711.push_back(this->_literals[318]);return j::array(std::move(_array5711));})());return _obj5709;})());j::put(_obj5657,this->_literals[231],([&]()->V{V _obj5712=j::object();j::put(_obj5712,this->_literals[16],([&]()->V{j::Args _array5713;_array5713.push_back(this->_literals[235]);_array5713.push_back(this->_literals[287]);_array5713.push_back(this->_literals[234]);_array5713.push_back(this->_literals[233]);return j::array(std::move(_array5713));})());j::put(_obj5712,this->_literals[17],([&]()->V{j::Args _array5714;_array5714.push_back(this->_literals[234]);_array5714.push_back(this->_literals[232]);_array5714.push_back(this->_literals[241]);_array5714.push_back(this->_literals[236]);return j::array(std::move(_array5714));})());return _obj5712;})());j::put(_obj5657,this->_literals[336],([&]()->V{V _obj5715=j::object();j::put(_obj5715,this->_literals[16],([&]()->V{j::Args _array5716;_array5716.push_back(this->_literals[337]);_array5716.push_back(this->_literals[302]);_array5716.push_back(this->_literals[157]);_array5716.push_back(this->_literals[156]);return j::array(std::move(_array5716));})());j::put(_obj5715,this->_literals[17],([&]()->V{j::Args _array5717;_array5717.push_back(this->_literals[302]);_array5717.push_back(this->_literals[157]);_array5717.push_back(this->_literals[303]);_array5717.push_back(this->_literals[338]);return j::array(std::move(_array5717));})());return _obj5715;})());j::put(_obj5657,this->_literals[339],([&]()->V{V _obj5718=j::object();j::put(_obj5718,this->_literals[16],([&]()->V{j::Args _array5719;_array5719.push_back(this->_literals[340]);_array5719.push_back(this->_literals[341]);_array5719.push_back(this->_literals[342]);return j::array(std::move(_array5719));})());j::put(_obj5718,this->_literals[17],([&]()->V{j::Args _array5720;_array5720.push_back(this->_literals[341]);_array5720.push_back(this->_literals[343]);_array5720.push_back(this->_literals[344]);return j::array(std::move(_array5720));})());return _obj5718;})());j::put(_obj5657,this->_literals[345],([&]()->V{V _obj5721=j::object();j::put(_obj5721,this->_literals[16],([&]()->V{j::Args _array5722;_array5722.push_back(this->_literals[184]);_array5722.push_back(this->_literals[182]);_array5722.push_back(this->_literals[181]);return j::array(std::move(_array5722));})());j::put(_obj5721,this->_literals[17],([&]()->V{j::Args _array5723;_array5723.push_back(this->_literals[183]);_array5723.push_back(this->_literals[175]);_array5723.push_back(this->_literals[176]);return j::array(std::move(_array5723));})());return _obj5721;})());j::put(_obj5657,this->_literals[346],([&]()->V{V _obj5724=j::object();j::put(_obj5724,this->_literals[16],([&]()->V{j::Args _array5725;_array5725.push_back(this->_literals[171]);_array5725.push_back(this->_literals[169]);_array5725.push_back(this->_literals[174]);return j::array(std::move(_array5725));})());j::put(_obj5724,this->_literals[17],([&]()->V{j::Args _array5726;_array5726.push_back(this->_literals[170]);_array5726.push_back(this->_literals[347]);_array5726.push_back(this->_literals[348]);return j::array(std::move(_array5726));})());return _obj5724;})());j::put(_obj5657,this->_literals[349],([&]()->V{V _obj5727=j::object();j::put(_obj5727,this->_literals[16],([&]()->V{j::Args _array5728;_array5728.push_back(this->_literals[235]);_array5728.push_back(this->_literals[281]);_array5728.push_back(this->_literals[234]);return j::array(std::move(_array5728));})());j::put(_obj5727,this->_literals[17],([&]()->V{j::Args _array5729;_array5729.push_back(this->_literals[234]);_array5729.push_back(this->_literals[350]);_array5729.push_back(this->_literals[351]);return j::array(std::move(_array5729));})());return _obj5727;})());j::put(_obj5657,this->_literals[222],([&]()->V{V _obj5730=j::object();j::put(_obj5730,this->_literals[16],([&]()->V{j::Args _array5731;_array5731.push_back(this->_literals[228]);_array5731.push_back(this->_literals[225]);_array5731.push_back(this->_literals[227]);return j::array(std::move(_array5731));})());j::put(_obj5730,this->_literals[17],([&]()->V{j::Args _array5732;_array5732.push_back(this->_literals[223]);_array5732.push_back(this->_literals[229]);_array5732.push_back(this->_literals[318]);return j::array(std::move(_array5732));})());return _obj5730;})());j::put(_obj5657,this->_literals[140],([&]()->V{V _obj5733=j::object();j::put(_obj5733,this->_literals[16],([&]()->V{j::Args _array5734;_array5734.push_back(this->_literals[188]);_array5734.push_back(this->_literals[190]);_array5734.push_back(this->_literals[193]);return j::array(std::move(_array5734));})());j::put(_obj5733,this->_literals[17],([&]()->V{j::Args _array5735;_array5735.push_back(this->_literals[352]);_array5735.push_back(this->_literals[353]);_array5735.push_back(this->_literals[354]);return j::array(std::move(_array5735));})());return _obj5733;})());j::put(_obj5657,this->_literals[355],([&]()->V{V _obj5736=j::object();j::put(_obj5736,this->_literals[16],([&]()->V{j::Args _array5737;_array5737.push_back(this->_literals[195]);_array5737.push_back(this->_literals[356]);_array5737.push_back(this->_literals[357]);return j::array(std::move(_array5737));})());j::put(_obj5736,this->_literals[17],([&]()->V{j::Args _array5738;_array5738.push_back(this->_literals[358]);_array5738.push_back(this->_literals[359]);_array5738.push_back(this->_literals[360]);return j::array(std::move(_array5738));})());return _obj5736;})());j::put(_obj5657,this->_literals[361],([&]()->V{V _obj5739=j::object();j::put(_obj5739,this->_literals[16],([&]()->V{j::Args _array5740;_array5740.push_back(this->_literals[362]);_array5740.push_back(this->_literals[299]);_array5740.push_back(this->_literals[281]);return j::array(std::move(_array5740));})());j::put(_obj5739,this->_literals[17],([&]()->V{j::Args _array5741;_array5741.push_back(this->_literals[281]);_array5741.push_back(this->_literals[155]);_array5741.push_back(this->_literals[363]);return j::array(std::move(_array5741));})());return _obj5739;})());j::put(_obj5657,this->_literals[364],([&]()->V{V _obj5742=j::object();j::put(_obj5742,this->_literals[16],([&]()->V{j::Args _array5743;_array5743.push_back(this->_literals[333]);_array5743.push_back(this->_literals[325]);_array5743.push_back(this->_literals[326]);return j::array(std::move(_array5743));})());j::put(_obj5742,this->_literals[17],([&]()->V{j::Args _array5744;_array5744.push_back(this->_literals[331]);_array5744.push_back(this->_literals[326]);_array5744.push_back(this->_literals[318]);return j::array(std::move(_array5744));})());return _obj5742;})());j::put(_obj5657,this->_literals[365],([&]()->V{V _obj5745=j::object();j::put(_obj5745,this->_literals[16],([&]()->V{j::Args _array5746;_array5746.push_back(this->_literals[281]);_array5746.push_back(this->_literals[366]);_array5746.push_back(this->_literals[367]);return j::array(std::move(_array5746));})());j::put(_obj5745,this->_literals[17],([&]()->V{j::Args _array5747;_array5747.push_back(this->_literals[363]);_array5747.push_back(this->_literals[368]);_array5747.push_back(this->_literals[318]);return j::array(std::move(_array5747));})());return _obj5745;})());j::put(_obj5657,this->_literals[369],([&]()->V{V _obj5748=j::object();j::put(_obj5748,this->_literals[16],([&]()->V{j::Args _array5749;_array5749.push_back(this->_literals[234]);_array5749.push_back(this->_literals[233]);_array5749.push_back(this->_literals[233]);return j::array(std::move(_array5749));})());j::put(_obj5748,this->_literals[17],([&]()->V{j::Args _array5750;_array5750.push_back(this->_literals[164]);_array5750.push_back(this->_literals[300]);_array5750.push_back(this->_literals[318]);return j::array(std::move(_array5750));})());return _obj5748;})());j::put(_obj5657,this->_literals[245],([&]()->V{V _obj5751=j::object();j::put(_obj5751,this->_literals[16],([&]()->V{j::Args _array5752;_array5752.push_back(this->_literals[370]);_array5752.push_back(this->_literals[314]);_array5752.push_back(this->_literals[320]);return j::array(std::move(_array5752));})());j::put(_obj5751,this->_literals[17],([&]()->V{j::Args _array5753;_array5753.push_back(this->_literals[315]);_array5753.push_back(this->_literals[320]);_array5753.push_back(this->_literals[317]);return j::array(std::move(_array5753));})());return _obj5751;})());j::put(_obj5657,this->_literals[103],([&]()->V{V _obj5754=j::object();j::put(_obj5754,this->_literals[16],([&]()->V{j::Args _array5755;_array5755.push_back(this->_literals[314]);_array5755.push_back(this->_literals[370]);return j::array(std::move(_array5755));})());j::put(_obj5754,this->_literals[17],([&]()->V{j::Args _array5756;_array5756.push_back(this->_literals[313]);_array5756.push_back(this->_literals[253]);return j::array(std::move(_array5756));})());return _obj5754;})());j::put(_obj5657,this->_literals[371],([&]()->V{V _obj5757=j::object();j::put(_obj5757,this->_literals[16],([&]()->V{j::Args _array5758;_array5758.push_back(this->_literals[309]);_array5758.push_back(this->_literals[310]);_array5758.push_back(this->_literals[308]);return j::array(std::move(_array5758));})());j::put(_obj5757,this->_literals[17],([&]()->V{j::Args _array5759;_array5759.push_back(this->_literals[310]);_array5759.push_back(this->_literals[372]);_array5759.push_back(this->_literals[373]);return j::array(std::move(_array5759));})());return _obj5757;})());j::put(_obj5657,this->_literals[374],([&]()->V{V _obj5760=j::object();j::put(_obj5760,this->_literals[16],([&]()->V{j::Args _array5761;_array5761.push_back(this->_literals[157]);_array5761.push_back(this->_literals[156]);_array5761.push_back(this->_literals[302]);return j::array(std::move(_array5761));})());j::put(_obj5760,this->_literals[17],([&]()->V{j::Args _array5762;_array5762.push_back(this->_literals[156]);_array5762.push_back(this->_literals[303]);_array5762.push_back(this->_literals[338]);return j::array(std::move(_array5762));})());return _obj5760;})());j::put(_obj5657,this->_literals[375],([&]()->V{V _obj5763=j::object();j::put(_obj5763,this->_literals[16],([&]()->V{j::Args _array5764;_array5764.push_back(this->_literals[321]);_array5764.push_back(this->_literals[302]);return j::array(std::move(_array5764));})());j::put(_obj5763,this->_literals[17],([&]()->V{j::Args _array5765;_array5765.push_back(this->_literals[322]);_array5765.push_back(this->_literals[162]);return j::array(std::move(_array5765));})());return _obj5763;})());j::put(_obj5657,this->_literals[376],([&]()->V{V _obj5766=j::object();j::put(_obj5766,this->_literals[16],([&]()->V{j::Args _array5767;_array5767.push_back(this->_literals[225]);_array5767.push_back(this->_literals[228]);return j::array(std::move(_array5767));})());j::put(_obj5766,this->_literals[17],([&]()->V{j::Args _array5768;_array5768.push_back(this->_literals[223]);_array5768.push_back(this->_literals[230]);return j::array(std::move(_array5768));})());return _obj5766;})());j::put(_obj5657,this->_literals[377],([&]()->V{V _obj5769=j::object();j::put(_obj5769,this->_literals[16],([&]()->V{j::Args _array5770;_array5770.push_back(this->_literals[281]);_array5770.push_back(this->_literals[298]);return j::array(std::move(_array5770));})());j::put(_obj5769,this->_literals[17],([&]()->V{j::Args _array5771;_array5771.push_back(this->_literals[378]);_array5771.push_back(this->_literals[363]);return j::array(std::move(_array5771));})());return _obj5769;})());j::put(_obj5657,this->_literals[379],([&]()->V{V _obj5772=j::object();j::put(_obj5772,this->_literals[16],([&]()->V{j::Args _array5773;_array5773.push_back(this->_literals[233]);_array5773.push_back(this->_literals[156]);_array5773.push_back(this->_literals[322]);return j::array(std::move(_array5773));})());j::put(_obj5772,this->_literals[17],([&]()->V{j::Args _array5774;_array5774.push_back(this->_literals[241]);_array5774.push_back(this->_literals[162]);_array5774.push_back(this->_literals[161]);return j::array(std::move(_array5774));})());return _obj5772;})());j::put(_obj5657,this->_literals[380],([&]()->V{V _obj5775=j::object();j::put(_obj5775,this->_literals[16],([&]()->V{j::Args _array5776;_array5776.push_back(this->_literals[267]);_array5776.push_back(this->_literals[248]);return j::array(std::move(_array5776));})());j::put(_obj5775,this->_literals[17],([&]()->V{j::Args _array5777;_array5777.push_back(this->_literals[247]);_array5777.push_back(this->_literals[381]);return j::array(std::move(_array5777));})());return _obj5775;})());j::put(_obj5657,this->_literals[382],([&]()->V{V _obj5778=j::object();j::put(_obj5778,this->_literals[16],([&]()->V{j::Args _array5779;_array5779.push_back(this->_literals[313]);_array5779.push_back(this->_literals[314]);return j::array(std::move(_array5779));})());j::put(_obj5778,this->_literals[17],([&]()->V{j::Args _array5780;_array5780.push_back(this->_literals[316]);_array5780.push_back(this->_literals[318]);return j::array(std::move(_array5780));})());return _obj5778;})());j::put(_obj5657,this->_literals[33],([&]()->V{V _obj5781=j::object();j::put(_obj5781,this->_literals[16],([&]()->V{j::Args _array5782;_array5782.push_back(j::get(this->_v_3788_INK.get(),this->_literals[16]));return j::array(std::move(_array5782));})());j::put(_obj5781,this->_literals[17],([&]()->V{j::Args _array5783;_array5783.push_back(j::get(this->_v_3788_INK.get(),this->_literals[17]));return j::array(std::move(_array5783));})());return _obj5781;})());j::put(_obj5657,this->_literals[129],([&]()->V{V _obj5784=j::object();j::put(_obj5784,this->_literals[16],([&]()->V{j::Args _array5785;_array5785.push_back(this->_literals[260]);_array5785.push_back(this->_literals[258]);_array5785.push_back(this->_literals[157]);_array5785.push_back(this->_literals[233]);return j::array(std::move(_array5785));})());j::put(_obj5784,this->_literals[17],([&]()->V{j::Args _array5786;_array5786.push_back(this->_literals[260]);_array5786.push_back(this->_literals[167]);_array5786.push_back(this->_literals[162]);_array5786.push_back(this->_literals[241]);return j::array(std::move(_array5786));})());return _obj5784;})());j::put(_obj5657,this->_literals[383],([&]()->V{V _obj5787=j::object();j::put(_obj5787,this->_literals[16],([&]()->V{j::Args _array5788;_array5788.push_back(this->_literals[266]);_array5788.push_back(this->_literals[248]);_array5788.push_back(this->_literals[384]);return j::array(std::move(_array5788));})());j::put(_obj5787,this->_literals[17],([&]()->V{j::Args _array5789;_array5789.push_back(this->_literals[385]);_array5789.push_back(this->_literals[266]);_array5789.push_back(this->_literals[224]);return j::array(std::move(_array5789));})());return _obj5787;})());return _obj5657;})();
this->_v_3864_named.get()=j::function([=](const j::Args &_args_fn3865,const V &_receiver_fn3865,const V &_self_fn3865) mutable ->V{
V _v_3866_name;
V _v_3867_prefer;
_v_3866_name=_args_fn3865[0];
_v_3867_prefer=_args_fn3865[1];
{
V _v_3868_a;
V _v_3869_b;
V _pattern5794=(j::truth(([&]()->V{V _lhs5790=_v_3867_prefer;V _rhs5791=this->_literals[386];return V(j::equal(_lhs5790,_rhs5791,true));})())?([&]()->V{j::Args _array5792;_array5792.push_back(this->_v_3863_materialColors.get());_array5792.push_back(this->_v_3862_schemes.get());return j::array(std::move(_array5792));})():([&]()->V{j::Args _array5793;_array5793.push_back(this->_v_3862_schemes.get());_array5793.push_back(this->_v_3863_materialColors.get());return j::array(std::move(_array5793));})());
_v_3868_a=j::get(_pattern5794,V(0));
_v_3869_b=j::get(_pattern5794,V(1));
return (j::truth(([&]()->V{V _receiver5795=j::builtin("Object");V _method5796=this->_literals[3];V _method=j::get(_receiver5795,_method5796);j::Args _params5797=j::Args{_v_3868_a,_v_3866_name};return j::call(_method,_params5797,_receiver5795);})())?j::get(_v_3868_a,_v_3866_name):(j::truth(([&]()->V{V _receiver5798=j::builtin("Object");V _method5799=this->_literals[3];V _method=j::get(_receiver5798,_method5799);j::Args _params5800=j::Args{_v_3869_b,_v_3866_name};return j::call(_method,_params5800,_receiver5798);})())?j::get(_v_3869_b,_v_3866_name):j::builtin("undefined")));

}

return V{};
},2);
this->_v_3870_NAMES.get()=j::function([=](const j::Args &_args_fn3871,const V &_receiver_fn3871,const V &_self_fn3871) mutable ->V{
return ([&]()->V{std::u16string _text5801;_text5801+=u"a palette's name such as \"ocean\", \"fire\" or \"cola\" (see schemes and materialColors)";return V(std::move(_text5801));})();
return V{};
},0);
this->_v_3908_SYNONYMS.get()=([&]()->V{V _obj5802=j::object();j::put(_obj5802,this->_literals[387],([&]()->V{j::Args _array5803;_array5803.push_back(this->_literals[388]);_array5803.push_back(this->_literals[387]);return j::array(std::move(_array5803));})());j::put(_obj5802,this->_literals[389],([&]()->V{j::Args _array5804;_array5804.push_back(this->_literals[388]);return j::array(std::move(_array5804));})());j::put(_obj5802,this->_literals[390],([&]()->V{j::Args _array5805;_array5805.push_back(this->_literals[388]);return j::array(std::move(_array5805));})());j::put(_obj5802,this->_literals[391],([&]()->V{j::Args _array5806;_array5806.push_back(this->_literals[388]);_array5806.push_back(this->_literals[387]);return j::array(std::move(_array5806));})());j::put(_obj5802,this->_literals[392],([&]()->V{j::Args _array5807;_array5807.push_back(this->_literals[20]);_array5807.push_back(this->_literals[14]);_array5807.push_back(this->_literals[31]);return j::array(std::move(_array5807));})());j::put(_obj5802,this->_literals[393],([&]()->V{j::Args _array5808;_array5808.push_back(this->_literals[14]);_array5808.push_back(this->_literals[31]);_array5808.push_back(this->_literals[20]);return j::array(std::move(_array5808));})());j::put(_obj5802,this->_literals[31],([&]()->V{j::Args _array5809;_array5809.push_back(this->_literals[14]);_array5809.push_back(this->_literals[20]);return j::array(std::move(_array5809));})());j::put(_obj5802,this->_literals[14],([&]()->V{j::Args _array5810;_array5810.push_back(this->_literals[31]);_array5810.push_back(this->_literals[20]);return j::array(std::move(_array5810));})());j::put(_obj5802,this->_literals[20],([&]()->V{j::Args _array5811;_array5811.push_back(this->_literals[14]);_array5811.push_back(this->_literals[31]);return j::array(std::move(_array5811));})());j::put(_obj5802,this->_literals[74],([&]()->V{j::Args _array5812;_array5812.push_back(this->_literals[394]);_array5812.push_back(this->_literals[74]);return j::array(std::move(_array5812));})());j::put(_obj5802,this->_literals[394],([&]()->V{j::Args _array5813;_array5813.push_back(this->_literals[74]);_array5813.push_back(this->_literals[394]);return j::array(std::move(_array5813));})());j::put(_obj5802,this->_literals[395],([&]()->V{j::Args _array5814;_array5814.push_back(this->_literals[396]);_array5814.push_back(this->_literals[397]);_array5814.push_back(this->_literals[398]);return j::array(std::move(_array5814));})());j::put(_obj5802,this->_literals[399],([&]()->V{j::Args _array5815;_array5815.push_back(this->_literals[396]);_array5815.push_back(this->_literals[397]);_array5815.push_back(this->_literals[398]);_array5815.push_back(this->_literals[399]);return j::array(std::move(_array5815));})());j::put(_obj5802,this->_literals[400],([&]()->V{j::Args _array5816;_array5816.push_back(this->_literals[396]);return j::array(std::move(_array5816));})());j::put(_obj5802,this->_literals[401],([&]()->V{j::Args _array5817;_array5817.push_back(this->_literals[397]);_array5817.push_back(this->_literals[396]);return j::array(std::move(_array5817));})());j::put(_obj5802,this->_literals[402],([&]()->V{j::Args _array5818;_array5818.push_back(this->_literals[403]);_array5818.push_back(this->_literals[404]);_array5818.push_back(this->_literals[402]);return j::array(std::move(_array5818));})());j::put(_obj5802,this->_literals[403],([&]()->V{j::Args _array5819;_array5819.push_back(this->_literals[405]);_array5819.push_back(this->_literals[403]);_array5819.push_back(this->_literals[404]);return j::array(std::move(_array5819));})());j::put(_obj5802,this->_literals[406],([&]()->V{j::Args _array5820;_array5820.push_back(this->_literals[407]);_array5820.push_back(this->_literals[408]);return j::array(std::move(_array5820));})());j::put(_obj5802,this->_literals[409],([&]()->V{j::Args _array5821;_array5821.push_back(this->_literals[407]);_array5821.push_back(this->_literals[408]);_array5821.push_back(this->_literals[409]);return j::array(std::move(_array5821));})());j::put(_obj5802,this->_literals[405],([&]()->V{j::Args _array5822;_array5822.push_back(this->_literals[405]);_array5822.push_back(this->_literals[403]);return j::array(std::move(_array5822));})());j::put(_obj5802,this->_literals[410],([&]()->V{j::Args _array5823;_array5823.push_back(this->_literals[411]);return j::array(std::move(_array5823));})());j::put(_obj5802,this->_literals[412],([&]()->V{j::Args _array5824;_array5824.push_back(this->_literals[411]);return j::array(std::move(_array5824));})());j::put(_obj5802,this->_literals[413],([&]()->V{j::Args _array5825;_array5825.push_back(this->_literals[411]);return j::array(std::move(_array5825));})());j::put(_obj5802,this->_literals[414],([&]()->V{j::Args _array5826;_array5826.push_back(this->_literals[415]);return j::array(std::move(_array5826));})());j::put(_obj5802,this->_literals[416],([&]()->V{j::Args _array5827;_array5827.push_back(this->_literals[417]);_array5827.push_back(this->_literals[416]);return j::array(std::move(_array5827));})());j::put(_obj5802,this->_literals[417],([&]()->V{j::Args _array5828;_array5828.push_back(this->_literals[416]);_array5828.push_back(this->_literals[417]);return j::array(std::move(_array5828));})());j::put(_obj5802,this->_literals[16],([&]()->V{j::Args _array5829;_array5829.push_back(this->_literals[408]);_array5829.push_back(this->_literals[16]);return j::array(std::move(_array5829));})());j::put(_obj5802,this->_literals[418],([&]()->V{j::Args _array5830;_array5830.push_back(this->_literals[404]);_array5830.push_back(this->_literals[418]);return j::array(std::move(_array5830));})());j::put(_obj5802,this->_literals[419],([&]()->V{j::Args _array5831;_array5831.push_back(this->_literals[408]);return j::array(std::move(_array5831));})());j::put(_obj5802,this->_literals[420],([&]()->V{j::Args _array5832;_array5832.push_back(this->_literals[408]);_array5832.push_back(this->_literals[420]);return j::array(std::move(_array5832));})());j::put(_obj5802,this->_literals[421],([&]()->V{j::Args _array5833;_array5833.push_back(this->_literals[404]);return j::array(std::move(_array5833));})());j::put(_obj5802,this->_literals[422],([&]()->V{j::Args _array5834;_array5834.push_back(this->_literals[423]);_array5834.push_back(this->_literals[424]);return j::array(std::move(_array5834));})());j::put(_obj5802,this->_literals[425],([&]()->V{j::Args _array5835;_array5835.push_back(this->_literals[423]);_array5835.push_back(this->_literals[424]);return j::array(std::move(_array5835));})());j::put(_obj5802,this->_literals[4],([&]()->V{j::Args _array5836;_array5836.push_back(this->_literals[423]);_array5836.push_back(this->_literals[424]);_array5836.push_back(this->_literals[4]);return j::array(std::move(_array5836));})());j::put(_obj5802,this->_literals[49],([&]()->V{j::Args _array5837;_array5837.push_back(this->_literals[423]);_array5837.push_back(this->_literals[49]);return j::array(std::move(_array5837));})());j::put(_obj5802,this->_literals[426],([&]()->V{j::Args _array5838;_array5838.push_back(this->_literals[427]);_array5838.push_back(this->_literals[428]);_array5838.push_back(this->_literals[426]);return j::array(std::move(_array5838));})());j::put(_obj5802,this->_literals[70],([&]()->V{j::Args _array5839;_array5839.push_back(this->_literals[429]);_array5839.push_back(this->_literals[430]);_array5839.push_back(this->_literals[70]);return j::array(std::move(_array5839));})());j::put(_obj5802,this->_literals[430],([&]()->V{j::Args _array5840;_array5840.push_back(this->_literals[429]);_array5840.push_back(this->_literals[430]);return j::array(std::move(_array5840));})());j::put(_obj5802,this->_literals[429],([&]()->V{j::Args _array5841;_array5841.push_back(this->_literals[430]);_array5841.push_back(this->_literals[429]);return j::array(std::move(_array5841));})());j::put(_obj5802,this->_literals[431],([&]()->V{j::Args _array5842;_array5842.push_back(this->_literals[429]);_array5842.push_back(this->_literals[430]);return j::array(std::move(_array5842));})());j::put(_obj5802,this->_literals[432],([&]()->V{j::Args _array5843;_array5843.push_back(this->_literals[41]);_array5843.push_back(this->_literals[432]);return j::array(std::move(_array5843));})());j::put(_obj5802,this->_literals[433],([&]()->V{j::Args _array5844;_array5844.push_back(this->_literals[42]);_array5844.push_back(this->_literals[433]);return j::array(std::move(_array5844));})());j::put(_obj5802,this->_literals[434],([&]()->V{j::Args _array5845;_array5845.push_back(this->_literals[41]);_array5845.push_back(this->_literals[434]);return j::array(std::move(_array5845));})());j::put(_obj5802,this->_literals[435],([&]()->V{j::Args _array5846;_array5846.push_back(this->_literals[435]);_array5846.push_back(this->_literals[423]);return j::array(std::move(_array5846));})());j::put(_obj5802,this->_literals[436],([&]()->V{j::Args _array5847;_array5847.push_back(this->_literals[435]);_array5847.push_back(this->_literals[436]);return j::array(std::move(_array5847));})());j::put(_obj5802,this->_literals[437],([&]()->V{j::Args _array5848;_array5848.push_back(this->_literals[437]);_array5848.push_back(this->_literals[74]);return j::array(std::move(_array5848));})());j::put(_obj5802,this->_literals[438],([&]()->V{j::Args _array5849;_array5849.push_back(this->_literals[437]);return j::array(std::move(_array5849));})());j::put(_obj5802,this->_literals[439],([&]()->V{j::Args _array5850;_array5850.push_back(this->_literals[437]);return j::array(std::move(_array5850));})());return _obj5802;})();
this->_v_3945_EMPTY.get()=V(0.0);
this->_v_3946_NONE.get()=V(255.0);
{V _base5851=V{};V _class5852=j::make_class("Surface",_base5851,j::function([=](const j::Args &_args_fn3952,const V &_receiver_fn3952,const V &_self_fn3952) mutable ->V{
j::put(_receiver_fn3952,this->_literals[41],V{});j::put(_receiver_fn3952,this->_literals[42],V{});j::put(_receiver_fn3952,this->_literals[440],V{});j::put(_receiver_fn3952,this->_literals[14],V{});j::put(_receiver_fn3952,this->_literals[65],V{});j::put(_receiver_fn3952,this->_literals[31],V{});j::put(_receiver_fn3952,this->_literals[66],V(false));j::put(_receiver_fn3952,this->_literals[67],V(true));j::put(_receiver_fn3952,this->_literals[441],V{});_receiver_fn3952.data->hidden.insert(j::string(this->_literals[441]));V _v_3953_cols;
V _v_3954_rows;
V _v_3955_palette;
V _v_3956_aspect;
_v_3953_cols=_args_fn3952[0];
_v_3954_rows=_args_fn3952[1];
V _default5853=_args_fn3952[2];if(_default5853.kind==V::Undefined||_default5853.kind==V::Hole)_default5853=([&]()->V{V _obj5854=j::object();return _obj5854;})();
V _pattern5855=_default5853;
V _default5856=j::get(_pattern5855,this->_literals[31]);if(_default5856.kind==V::Undefined||_default5856.kind==V::Hole)_default5856=V::null();
_v_3955_palette=_default5856;
V _default5857=j::get(_pattern5855,this->_literals[65]);if(_default5857.kind==V::Undefined||_default5857.kind==V::Hole)_default5857=V(2.0);
_v_3956_aspect=_default5857;
{
if(j::truth(([&]()->V{V _logical5858=([&]()->V{V _logical5859=([&]()->V{V _logical5860=j::unary("!",([&]()->V{V _receiver5861=j::builtin("Number");V _method5862=this->_literals[10];V _method=j::get(_receiver5861,_method5862);j::Args _params5863=j::Args{_v_3953_cols};return j::call(_method,_params5863,_receiver5861);})());return !j::truth(_logical5860)?([&]()->V{V _lhs5864=_v_3953_cols;V _rhs5865=V(1.0);return j::binary("<",_lhs5864,_rhs5865);})():_logical5860;})();return !j::truth(_logical5859)?j::unary("!",([&]()->V{V _receiver5866=j::builtin("Number");V _method5867=this->_literals[10];V _method=j::get(_receiver5866,_method5867);j::Args _params5868=j::Args{_v_3954_rows};return j::call(_method,_params5868,_receiver5866);})()):_logical5859;})();return !j::truth(_logical5858)?([&]()->V{V _lhs5869=_v_3954_rows;V _rhs5870=V(1.0);return j::binary("<",_lhs5869,_rhs5870);})():_logical5858;})())){(void)(([&]()->V{V _callee5872=this->_v_3714_fail.get();return j::call(_callee5872,j::Args{([&]()->V{std::u16string _text5871;_text5871+=u"a surface takes whole numbers of columns and rows of 1 or more, not ";_text5871+=j::string(_v_3953_cols);_text5871+=u" by ";_text5871+=j::string(_v_3954_rows);_text5871+=u"";return V(std::move(_text5871));})()});})());
}
(void)(([&]()->V{V _base5874=_receiver_fn3952;V _key5875=this->_literals[41];V _assign5873=_v_3953_cols;return j::put(_base5874,_key5875,_assign5873);})());
(void)(([&]()->V{V _base5877=_receiver_fn3952;V _key5878=this->_literals[42];V _assign5876=_v_3954_rows;return j::put(_base5877,_key5878,_assign5876);})());
(void)(([&]()->V{V _base5880=_receiver_fn3952;V _key5881=this->_literals[440];V _assign5879=([&]()->V{V _callee5884=j::builtin("Uint16Array");return j::construct(_callee5884,j::Args{([&]()->V{V _lhs5882=_v_3953_cols;V _rhs5883=_v_3954_rows;return V(j::number(_lhs5882)*j::number(_rhs5883));})()});})();return j::put(_base5880,_key5881,_assign5879);})());
(void)(([&]()->V{V _base5886=_receiver_fn3952;V _key5887=this->_literals[14];V _assign5885=([&]()->V{V _receiver5888=([&]()->V{V _callee5893=j::builtin("Uint8Array");return j::construct(_callee5893,j::Args{([&]()->V{V _lhs5891=_v_3953_cols;V _rhs5892=_v_3954_rows;return V(j::number(_lhs5891)*j::number(_rhs5892));})()});})();V _method5889=this->_literals[442];V _method=j::get(_receiver5888,_method5889);j::Args _params5890=j::Args{this->_v_3946_NONE.get()};return j::call(_method,_params5890,_receiver5888);})();return j::put(_base5886,_key5887,_assign5885);})());
(void)(([&]()->V{V _base5895=_receiver_fn3952;V _key5896=this->_literals[65];V _assign5894=_v_3956_aspect;return j::put(_base5895,_key5896,_assign5894);})());
(void)(([&]()->V{V _base5898=_receiver_fn3952;V _key5899=this->_literals[31];V _assign5897=_v_3955_palette;return j::put(_base5898,_key5899,_assign5897);})());
(void)(([&]()->V{V _base5901=_receiver_fn3952;V _key5902=this->_literals[441];V _assign5900=([&]()->V{V _callee5903=j::builtin("Uint16Array");return j::construct(_callee5903,j::Args{_v_3953_cols});})();return j::put(_base5901,_key5902,_assign5900);})());

}

return V{};
},2));this->_v_3951_Surface.get()=_class5852;j::class_method(_class5852,this->_literals[116],j::function([=](const j::Args &_args_fn3957,const V &_receiver_fn3957,const V &_self_fn3957) mutable ->V{
V _v_3958_x;
V _v_3959_y;
_v_3958_x=_args_fn3957[0];
_v_3959_y=_args_fn3957[1];
{
(void)((_v_3958_x=([&]()->V{V _number5905=_v_3958_x;return V(std::floor(j::number(_number5905)));})()));
(void)((_v_3959_y=([&]()->V{V _number5907=_v_3959_y;return V(std::floor(j::number(_number5907)));})()));
return (j::truth(([&]()->V{V _logical5908=([&]()->V{V _logical5909=([&]()->V{V _logical5910=([&]()->V{V _lhs5911=_v_3958_x;V _rhs5912=V(0.0);return j::binary(">=",_lhs5911,_rhs5912);})();return j::truth(_logical5910)?([&]()->V{V _lhs5913=_v_3958_x;V _rhs5914=j::get(_receiver_fn3957,this->_literals[41]);return j::binary("<",_lhs5913,_rhs5914);})():_logical5910;})();return j::truth(_logical5909)?([&]()->V{V _lhs5915=_v_3959_y;V _rhs5916=V(0.0);return j::binary(">=",_lhs5915,_rhs5916);})():_logical5909;})();return j::truth(_logical5908)?([&]()->V{V _lhs5917=_v_3959_y;V _rhs5918=j::get(_receiver_fn3957,this->_literals[42]);return j::binary("<",_lhs5917,_rhs5918);})():_logical5908;})())?([&]()->V{V _lhs5919=([&]()->V{V _lhs5921=_v_3959_y;V _rhs5922=j::get(_receiver_fn3957,this->_literals[41]);return V(j::number(_lhs5921)*j::number(_rhs5922));})();V _rhs5920=_v_3958_x;return j::binary("+",_lhs5919,_rhs5920);})():j::unary("-",V(1.0)));

}

return V{};
},2),false,"method");j::class_method(_class5852,this->_literals[443],j::function([=](const j::Args &_args_fn3960,const V &_receiver_fn3960,const V &_self_fn3960) mutable ->V{
V _v_3961_color;
_v_3961_color=_args_fn3960[0];
{
if(j::truth(([&]()->V{V _logical5923=([&]()->V{V _logical5924=([&]()->V{V _lhs5925=_v_3961_color;V _rhs5926=j::builtin("undefined");return V(j::equal(_lhs5925,_rhs5926,true));})();return !j::truth(_logical5924)?([&]()->V{V _lhs5927=_v_3961_color;V _rhs5928=V::null();return V(j::equal(_lhs5927,_rhs5928,true));})():_logical5924;})();return !j::truth(_logical5923)?j::unary("!",j::get(_receiver_fn3960,this->_literals[31])):_logical5923;})())){return this->_v_3946_NONE.get();
}
return ([&]()->V{V _receiver5929=j::get(_receiver_fn3960,this->_literals[31]);V _method5930=this->_literals[116];V _method=j::get(_receiver5929,_method5930);j::Args _params5931=j::Args{_v_3961_color,j::get(_receiver_fn3960,this->_literals[66])};return j::call(_method,_params5931,_receiver5929);})();

}

return V{};
},1),false,"method");j::class_method(_class5852,this->_literals[29],j::function([=](const j::Args &_args_fn3962,const V &_receiver_fn3962,const V &_self_fn3962) mutable ->V{
V _v_3963_x;
V _v_3964_y;
V _v_3965_ch;
V _v_3966_color;
_v_3963_x=_args_fn3962[0];
_v_3964_y=_args_fn3962[1];
_v_3965_ch=_args_fn3962[2];
_v_3966_color=_args_fn3962[3];
{
V _v_3967_i;
V _v_3968_c;
_v_3967_i=([&]()->V{V _receiver5932=_receiver_fn3962;V _method5933=this->_literals[116];V _method=j::get(_receiver5932,_method5933);j::Args _params5934=j::Args{_v_3963_x,_v_3964_y};return j::call(_method,_params5934,_receiver5932);})();
if(j::truth(([&]()->V{V _lhs5935=_v_3967_i;V _rhs5936=V(0.0);return j::binary("<",_lhs5935,_rhs5936);})())){return V{};
}
_v_3968_c=([&]()->V{V _callee5937=this->_v_3947_code.get();return j::call(_callee5937,j::Args{_v_3965_ch});})();
(void)(([&]()->V{V _base5939=j::get(_receiver_fn3962,this->_literals[440]);V _key5940=_v_3967_i;V _assign5938=_v_3968_c;return j::put(_base5939,_key5940,_assign5938);})());
(void)(([&]()->V{V _base5942=j::get(_receiver_fn3962,this->_literals[14]);V _key5943=_v_3967_i;V _assign5941=(j::truth(([&]()->V{V _lhs5944=_v_3968_c;V _rhs5945=this->_v_3945_EMPTY.get();return V(j::equal(_lhs5944,_rhs5945,true));})())?this->_v_3946_NONE.get():([&]()->V{V _receiver5946=_receiver_fn3962;V _method5947=this->_literals[443];V _method=j::get(_receiver5946,_method5947);j::Args _params5948=j::Args{_v_3966_color};return j::call(_method,_params5948,_receiver5946);})());return j::put(_base5942,_key5943,_assign5941);})());

}

return V{};
},4),false,"method");j::class_method(_class5852,this->_literals[444],j::function([=](const j::Args &_args_fn3969,const V &_receiver_fn3969,const V &_self_fn3969) mutable ->V{
V _v_3970_i;
V _v_3971_code;
V _v_3972_color;
_v_3970_i=_args_fn3969[0];
_v_3971_code=_args_fn3969[1];
V _default5949=_args_fn3969[2];if(_default5949.kind==V::Undefined||_default5949.kind==V::Hole)_default5949=this->_v_3946_NONE.get();
_v_3972_color=_default5949;
{
(void)(([&]()->V{V _base5951=j::get(_receiver_fn3969,this->_literals[440]);V _key5952=_v_3970_i;V _assign5950=_v_3971_code;return j::put(_base5951,_key5952,_assign5950);})());
(void)(([&]()->V{V _base5954=j::get(_receiver_fn3969,this->_literals[14]);V _key5955=_v_3970_i;V _assign5953=_v_3972_color;return j::put(_base5954,_key5955,_assign5953);})());

}

return V{};
},2),false,"method");j::class_method(_class5852,this->_literals[27],j::function([=](const j::Args &_args_fn3973,const V &_receiver_fn3973,const V &_self_fn3973) mutable ->V{
V _v_3974_x;
V _v_3975_y;
_v_3974_x=_args_fn3973[0];
_v_3975_y=_args_fn3973[1];
{
V _v_3976_i;
_v_3976_i=([&]()->V{V _receiver5956=_receiver_fn3973;V _method5957=this->_literals[116];V _method=j::get(_receiver5956,_method5957);j::Args _params5958=j::Args{_v_3974_x,_v_3975_y};return j::call(_method,_params5958,_receiver5956);})();
return (j::truth(([&]()->V{V _logical5959=([&]()->V{V _lhs5960=_v_3976_i;V _rhs5961=V(0.0);return j::binary("<",_lhs5960,_rhs5961);})();return !j::truth(_logical5959)?([&]()->V{V _lhs5962=j::get(j::get(_receiver_fn3973,this->_literals[440]),_v_3976_i);V _rhs5963=this->_v_3945_EMPTY.get();return V(j::equal(_lhs5962,_rhs5963,true));})():_logical5959;})())?this->_literals[26]:([&]()->V{V _receiver5964=j::builtin("String");V _method5965=this->_literals[445];V _method=j::get(_receiver5964,_method5965);j::Args _params5966=j::Args{j::get(j::get(_receiver_fn3973,this->_literals[440]),_v_3976_i)};return j::call(_method,_params5966,_receiver5964);})());

}

return V{};
},2),false,"method");j::class_method(_class5852,this->_literals[446],j::function([=](const j::Args &_args_fn3977,const V &_receiver_fn3977,const V &_self_fn3977) mutable ->V{
V _v_3978_x;
V _v_3979_y;
_v_3978_x=_args_fn3977[0];
_v_3979_y=_args_fn3977[1];
{
V _v_3980_i;
_v_3980_i=([&]()->V{V _receiver5967=_receiver_fn3977;V _method5968=this->_literals[116];V _method=j::get(_receiver5967,_method5968);j::Args _params5969=j::Args{_v_3978_x,_v_3979_y};return j::call(_method,_params5969,_receiver5967);})();
return (j::truth(([&]()->V{V _lhs5970=_v_3980_i;V _rhs5971=V(0.0);return j::binary("<",_lhs5970,_rhs5971);})())?this->_v_3946_NONE.get():j::get(j::get(_receiver_fn3977,this->_literals[14]),_v_3980_i));

}

return V{};
},2),false,"method");j::class_method(_class5852,this->_literals[64],j::function([=](const j::Args &_args_fn3981,const V &_receiver_fn3981,const V &_self_fn3981) mutable ->V{
V _v_3982_region;
_v_3982_region=_args_fn3981[0];
{
if(j::truth(j::unary("!",_v_3982_region))){
(void)(([&]()->V{V _receiver5972=j::get(_receiver_fn3981,this->_literals[440]);V _method5973=this->_literals[442];V _method=j::get(_receiver5972,_method5973);j::Args _params5974=j::Args{this->_v_3945_EMPTY.get()};return j::call(_method,_params5974,_receiver5972);})());
(void)(([&]()->V{V _receiver5975=j::get(_receiver_fn3981,this->_literals[14]);V _method5976=this->_literals[442];V _method=j::get(_receiver5975,_method5976);j::Args _params5977=j::Args{this->_v_3946_NONE.get()};return j::call(_method,_params5977,_receiver5975);})());
return V{};

}

(void)(([&]()->V{V _receiver5978=_receiver_fn3981;V _method5979=this->_literals[442];V _method=j::get(_receiver5978,_method5979);j::Args _params5980=j::Args{this->_literals[26],j::builtin("undefined"),_v_3982_region};return j::call(_method,_params5980,_receiver5978);})());

}

return V{};
},1),false,"method");j::class_method(_class5852,this->_literals[442],j::function([=](const j::Args &_args_fn3983,const V &_receiver_fn3983,const V &_self_fn3983) mutable ->V{
V _v_3984_ch;
V _v_3985_color;
V _v_3986_region;
_v_3984_ch=_args_fn3983[0];
_v_3985_color=_args_fn3983[1];
_v_3986_region=_args_fn3983[2];
{
V _v_3987_x;
V _v_3988_y;
V _v_3989_cols;
V _v_3990_rows;
V _v_3991_c;
V _v_3992_k;
V _pattern5984=([&]()->V{V _receiver5981=_receiver_fn3983;V _method5982=this->_literals[447];V _method=j::get(_receiver5981,_method5982);j::Args _params5983=j::Args{_v_3986_region};return j::call(_method,_params5983,_receiver5981);})();
_v_3987_x=j::get(_pattern5984,this->_literals[448]);
_v_3988_y=j::get(_pattern5984,this->_literals[449]);
_v_3989_cols=j::get(_pattern5984,this->_literals[41]);
_v_3990_rows=j::get(_pattern5984,this->_literals[42]);
_v_3991_c=([&]()->V{V _callee5985=this->_v_3947_code.get();return j::call(_callee5985,j::Args{_v_3984_ch});})();
_v_3992_k=(j::truth(([&]()->V{V _lhs5986=_v_3991_c;V _rhs5987=this->_v_3945_EMPTY.get();return V(j::equal(_lhs5986,_rhs5987,true));})())?this->_v_3946_NONE.get():([&]()->V{V _receiver5988=_receiver_fn3983;V _method5989=this->_literals[443];V _method=j::get(_receiver5988,_method5989);j::Args _params5990=j::Args{_v_3985_color};return j::call(_method,_params5990,_receiver5988);})());
{V _v_3993_r;
_v_3993_r=_v_3988_y;
for(;j::truth(([&]()->V{V _lhs5991=_v_3993_r;V _rhs5992=([&]()->V{V _lhs5993=_v_3988_y;V _rhs5994=_v_3990_rows;return j::binary("+",_lhs5993,_rhs5994);})();return j::binary("<",_lhs5991,_rhs5992);})());(void)(j::increment(_v_3993_r,1,false))){
(void)(([&]()->V{V _receiver6005=j::get(_receiver_fn3983,this->_literals[440]);V _method6006=this->_literals[442];V _method=j::get(_receiver6005,_method6006);j::Args _params6007=j::Args{_v_3991_c,([&]()->V{V _lhs5995=([&]()->V{V _lhs5997=_v_3993_r;V _rhs5998=j::get(_receiver_fn3983,this->_literals[41]);return V(j::number(_lhs5997)*j::number(_rhs5998));})();V _rhs5996=_v_3987_x;return j::binary("+",_lhs5995,_rhs5996);})(),([&]()->V{V _lhs5999=([&]()->V{V _lhs6001=([&]()->V{V _lhs6003=_v_3993_r;V _rhs6004=j::get(_receiver_fn3983,this->_literals[41]);return V(j::number(_lhs6003)*j::number(_rhs6004));})();V _rhs6002=_v_3987_x;return j::binary("+",_lhs6001,_rhs6002);})();V _rhs6000=_v_3989_cols;return j::binary("+",_lhs5999,_rhs6000);})()};return j::call(_method,_params6007,_receiver6005);})());
(void)(([&]()->V{V _receiver6018=j::get(_receiver_fn3983,this->_literals[14]);V _method6019=this->_literals[442];V _method=j::get(_receiver6018,_method6019);j::Args _params6020=j::Args{_v_3992_k,([&]()->V{V _lhs6008=([&]()->V{V _lhs6010=_v_3993_r;V _rhs6011=j::get(_receiver_fn3983,this->_literals[41]);return V(j::number(_lhs6010)*j::number(_rhs6011));})();V _rhs6009=_v_3987_x;return j::binary("+",_lhs6008,_rhs6009);})(),([&]()->V{V _lhs6012=([&]()->V{V _lhs6014=([&]()->V{V _lhs6016=_v_3993_r;V _rhs6017=j::get(_receiver_fn3983,this->_literals[41]);return V(j::number(_lhs6016)*j::number(_rhs6017));})();V _rhs6015=_v_3987_x;return j::binary("+",_lhs6014,_rhs6015);})();V _rhs6013=_v_3989_cols;return j::binary("+",_lhs6012,_rhs6013);})()};return j::call(_method,_params6020,_receiver6018);})());

}
}

}

return V{};
},3),false,"method");j::class_method(_class5852,this->_literals[447],j::function([=](const j::Args &_args_fn3994,const V &_receiver_fn3994,const V &_self_fn3994) mutable ->V{
V _v_3995_region;
_v_3995_region=_args_fn3994[0];
{
V _v_3996_x0;
V _v_3997_y0;
V _v_3998_x1;
V _v_3999_y1;
if(j::truth(j::unary("!",_v_3995_region))){return ([&]()->V{V _obj6021=j::object();j::put(_obj6021,this->_literals[448],V(0.0));j::put(_obj6021,this->_literals[449],V(0.0));j::put(_obj6021,this->_literals[41],j::get(_receiver_fn3994,this->_literals[41]));j::put(_obj6021,this->_literals[42],j::get(_receiver_fn3994,this->_literals[42]));return _obj6021;})();
}
_v_3996_x0=([&]()->V{V _receiver6025=j::builtin("Math");V _method6026=this->_literals[82];V _method=j::get(_receiver6025,_method6026);j::Args _params6027=j::Args{V(0.0),([&]()->V{V _number6022=j::get(_v_3995_region,this->_literals[448]);return V(std::floor(j::number(_number6022)));})()};return j::call(_method,_params6027,_receiver6025);})();
_v_3997_y0=([&]()->V{V _receiver6031=j::builtin("Math");V _method6032=this->_literals[82];V _method=j::get(_receiver6031,_method6032);j::Args _params6033=j::Args{V(0.0),([&]()->V{V _number6028=j::get(_v_3995_region,this->_literals[449]);return V(std::floor(j::number(_number6028)));})()};return j::call(_method,_params6033,_receiver6031);})();
_v_3998_x1=([&]()->V{V _receiver6040=j::builtin("Math");V _method6041=this->_literals[12];V _method=j::get(_receiver6040,_method6041);j::Args _params6042=j::Args{j::get(_receiver_fn3994,this->_literals[41]),([&]()->V{V _lhs6034=([&]()->V{V _number6036=j::get(_v_3995_region,this->_literals[448]);return V(std::floor(j::number(_number6036)));})();V _rhs6035=([&]()->V{V _number6037=j::get(_v_3995_region,this->_literals[41]);return V(std::floor(j::number(_number6037)));})();return j::binary("+",_lhs6034,_rhs6035);})()};return j::call(_method,_params6042,_receiver6040);})();
_v_3999_y1=([&]()->V{V _receiver6049=j::builtin("Math");V _method6050=this->_literals[12];V _method=j::get(_receiver6049,_method6050);j::Args _params6051=j::Args{j::get(_receiver_fn3994,this->_literals[42]),([&]()->V{V _lhs6043=([&]()->V{V _number6045=j::get(_v_3995_region,this->_literals[449]);return V(std::floor(j::number(_number6045)));})();V _rhs6044=([&]()->V{V _number6046=j::get(_v_3995_region,this->_literals[42]);return V(std::floor(j::number(_number6046)));})();return j::binary("+",_lhs6043,_rhs6044);})()};return j::call(_method,_params6051,_receiver6049);})();
return ([&]()->V{V _obj6052=j::object();j::put(_obj6052,this->_literals[448],_v_3996_x0);j::put(_obj6052,this->_literals[449],_v_3997_y0);j::put(_obj6052,this->_literals[41],([&]()->V{V _receiver6057=j::builtin("Math");V _method6058=this->_literals[82];V _method=j::get(_receiver6057,_method6058);j::Args _params6059=j::Args{V(0.0),([&]()->V{V _lhs6053=_v_3998_x1;V _rhs6054=_v_3996_x0;return V(j::number(_lhs6053)-j::number(_rhs6054));})()};return j::call(_method,_params6059,_receiver6057);})());j::put(_obj6052,this->_literals[42],([&]()->V{V _receiver6064=j::builtin("Math");V _method6065=this->_literals[82];V _method=j::get(_receiver6064,_method6065);j::Args _params6066=j::Args{V(0.0),([&]()->V{V _lhs6060=_v_3999_y1;V _rhs6061=_v_3997_y0;return V(j::number(_lhs6060)-j::number(_rhs6061));})()};return j::call(_method,_params6066,_receiver6064);})());return _obj6052;})();

}

return V{};
},1),false,"method");j::class_method(_class5852,this->_literals[450],j::function([=](const j::Args &_args_fn4000,const V &_receiver_fn4000,const V &_self_fn4000) mutable ->V{
V _v_4001_x;
V _v_4002_y;
V _v_4003_text;
V _v_4004_color;
_v_4001_x=_args_fn4000[0];
_v_4002_y=_args_fn4000[1];
_v_4003_text=_args_fn4000[2];
_v_4004_color=_args_fn4000[3];
{
V _v_4005_cx;
V _v_4006_cy;
_v_4005_cx=([&]()->V{V _number6067=_v_4001_x;return V(std::floor(j::number(_number6067)));})();
_v_4006_cy=([&]()->V{V _number6068=_v_4002_y;return V(std::floor(j::number(_number6068)));})();
{for(const auto &_item6069:j::elements(([&]()->V{V _callee6070=j::builtin("String");return j::call(_callee6070,j::Args{_v_4003_text});})())){V _v_4007_ch;
_v_4007_ch=_item6069;
{
if(j::truth(([&]()->V{V _lhs6071=_v_4007_ch;V _rhs6072=this->_literals[75];return V(j::equal(_lhs6071,_rhs6072,true));})())){(void)(((_v_4005_cx=([&]()->V{V _number6074=_v_4001_x;return V(std::floor(j::number(_number6074)));})()),j::increment(_v_4006_cy,1,false)));
}else {(void)(([&]()->V{V _receiver6075=_receiver_fn4000;V _method6076=this->_literals[29];V _method=j::get(_receiver6075,_method6076);j::Args _params6077=j::Args{j::increment(_v_4005_cx,1,false),_v_4006_cy,_v_4007_ch,_v_4004_color};return j::call(_method,_params6077,_receiver6075);})());
}

}
}}

}

return V{};
},4),false,"method");j::class_method(_class5852,this->_literals[451],j::function([=](const j::Args &_args_fn4008,const V &_receiver_fn4008,const V &_self_fn4008) mutable ->V{
V _v_4009_src;
V _v_4010_x;
V _v_4011_y;
V _v_4012_mask;
V _v_4013_map;
_v_4009_src=_args_fn4008[0];
_v_4010_x=_args_fn4008[1];
_v_4011_y=_args_fn4008[2];
V _default6078=_args_fn4008[3];if(_default6078.kind==V::Undefined||_default6078.kind==V::Hole)_default6078=([&]()->V{V _obj6079=j::object();return _obj6079;})();
V _pattern6080=_default6078;
V _default6081=j::get(_pattern6080,this->_literals[452]);if(_default6081.kind==V::Undefined||_default6081.kind==V::Hole)_default6081=this->_literals[453];
_v_4012_mask=_default6081;
_v_4013_map=j::get(_pattern6080,this->_literals[11]);
{
V _v_4014_m;
_v_4014_m=(j::truth(([&]()->V{V _logical6082=([&]()->V{V _lhs6083=_v_4012_mask;V _rhs6084=V::null();return V(j::equal(_lhs6083,_rhs6084,true));})();return !j::truth(_logical6082)?([&]()->V{V _lhs6085=_v_4012_mask;V _rhs6086=this->_literals[26];return V(j::equal(_lhs6085,_rhs6086,true));})():_logical6082;})())?j::unary("-",V(1.0)):([&]()->V{V _receiver6087=_v_4012_mask;V _method6088=this->_literals[34];V _method=j::get(_receiver6087,_method6088);j::Args _params6089=j::Args{V(0.0)};return j::call(_method,_params6089,_receiver6087);})());
(void)((_v_4010_x=([&]()->V{V _number6091=_v_4010_x;return V(std::floor(j::number(_number6091)));})()));
(void)((_v_4011_y=([&]()->V{V _number6093=_v_4011_y;return V(std::floor(j::number(_number6093)));})()));
{V _v_4015_r;
_v_4015_r=([&]()->V{V _receiver6096=j::builtin("Math");V _method6097=this->_literals[82];V _method=j::get(_receiver6096,_method6097);j::Args _params6098=j::Args{V(0.0),j::unary("-",_v_4011_y)};return j::call(_method,_params6098,_receiver6096);})();
for(;j::truth(([&]()->V{V _logical6099=([&]()->V{V _lhs6100=_v_4015_r;V _rhs6101=j::get(_v_4009_src,this->_literals[42]);return j::binary("<",_lhs6100,_rhs6101);})();return j::truth(_logical6099)?([&]()->V{V _lhs6102=([&]()->V{V _lhs6104=_v_4015_r;V _rhs6105=_v_4011_y;return j::binary("+",_lhs6104,_rhs6105);})();V _rhs6103=j::get(_receiver_fn4008,this->_literals[42]);return j::binary("<",_lhs6102,_rhs6103);})():_logical6099;})());(void)(j::increment(_v_4015_r,1,false))){{V _v_4016_c;
_v_4016_c=([&]()->V{V _receiver6108=j::builtin("Math");V _method6109=this->_literals[82];V _method=j::get(_receiver6108,_method6109);j::Args _params6110=j::Args{V(0.0),j::unary("-",_v_4010_x)};return j::call(_method,_params6110,_receiver6108);})();
for(;j::truth(([&]()->V{V _logical6111=([&]()->V{V _lhs6112=_v_4016_c;V _rhs6113=j::get(_v_4009_src,this->_literals[41]);return j::binary("<",_lhs6112,_rhs6113);})();return j::truth(_logical6111)?([&]()->V{V _lhs6114=([&]()->V{V _lhs6116=_v_4016_c;V _rhs6117=_v_4010_x;return j::binary("+",_lhs6116,_rhs6117);})();V _rhs6115=j::get(_receiver_fn4008,this->_literals[41]);return j::binary("<",_lhs6114,_rhs6115);})():_logical6111;})());(void)(j::increment(_v_4016_c,1,false))){
V _v_4017_i;
V _v_4018_ch;
V _v_4019_k;
V _v_4020_col;
_v_4017_i=([&]()->V{V _lhs6118=([&]()->V{V _lhs6120=_v_4015_r;V _rhs6121=j::get(_v_4009_src,this->_literals[41]);return V(j::number(_lhs6120)*j::number(_rhs6121));})();V _rhs6119=_v_4016_c;return j::binary("+",_lhs6118,_rhs6119);})();
_v_4018_ch=j::get(j::get(_v_4009_src,this->_literals[440]),_v_4017_i);
if(j::truth(([&]()->V{V _logical6122=([&]()->V{V _lhs6123=_v_4018_ch;V _rhs6124=this->_v_3945_EMPTY.get();return V(j::equal(_lhs6123,_rhs6124,true));})();return !j::truth(_logical6122)?([&]()->V{V _lhs6125=_v_4018_ch;V _rhs6126=_v_4014_m;return V(j::equal(_lhs6125,_rhs6126,true));})():_logical6122;})())){continue;
}
_v_4019_k=([&]()->V{V _lhs6127=([&]()->V{V _lhs6129=([&]()->V{V _lhs6131=([&]()->V{V _lhs6133=_v_4015_r;V _rhs6134=_v_4011_y;return j::binary("+",_lhs6133,_rhs6134);})();V _rhs6132=j::get(_receiver_fn4008,this->_literals[41]);return V(j::number(_lhs6131)*j::number(_rhs6132));})();V _rhs6130=_v_4016_c;return j::binary("+",_lhs6129,_rhs6130);})();V _rhs6128=_v_4010_x;return j::binary("+",_lhs6127,_rhs6128);})();
_v_4020_col=j::get(j::get(_v_4009_src,this->_literals[14]),_v_4017_i);
(void)(([&]()->V{V _base6136=j::get(_receiver_fn4008,this->_literals[440]);V _key6137=_v_4019_k;V _assign6135=_v_4018_ch;return j::put(_base6136,_key6137,_assign6135);})());
(void)(([&]()->V{V _base6139=j::get(_receiver_fn4008,this->_literals[14]);V _key6140=_v_4019_k;V _assign6138=(j::truth(([&]()->V{V _logical6141=([&]()->V{V _lhs6142=_v_4020_col;V _rhs6143=this->_v_3946_NONE.get();return V(j::equal(_lhs6142,_rhs6143,true));})();return !j::truth(_logical6141)?j::unary("!",_v_4013_map):_logical6141;})())?_v_4020_col:([&]()->V{V _logical6144=j::get(_v_4013_map,_v_4020_col);return j::nullish(_logical6144)?this->_v_3946_NONE.get():_logical6144;})());return j::put(_base6139,_key6140,_assign6138);})());

}
}
}}

}

return V{};
},3),false,"method");j::class_method(_class5852,this->_literals[87],j::function([=](const j::Args &_args_fn4021,const V &_receiver_fn4021,const V &_self_fn4021) mutable ->V{
V _v_4022_text;
V _v_4023_color;
_v_4022_text=_args_fn4021[0];
_v_4023_color=_args_fn4021[1];
{
V _v_4024_x;
V _v_4025_y;
(void)(([&]()->V{V _receiver6145=_receiver_fn4021;V _method6146=this->_literals[64];V _method=j::get(_receiver6145,_method6146);j::Args _params6147=j::Args{};return j::call(_method,_params6147,_receiver6145);})());
_v_4024_x=V(0.0);
_v_4025_y=V(0.0);
{V _v_4026_k;
_v_4026_k=V(0.0);
for(;j::truth(([&]()->V{V _logical6148=([&]()->V{V _lhs6149=_v_4026_k;V _rhs6150=j::get(_v_4022_text,this->_literals[4]);return j::binary("<",_lhs6149,_rhs6150);})();return j::truth(_logical6148)?([&]()->V{V _lhs6151=_v_4025_y;V _rhs6152=j::get(_receiver_fn4021,this->_literals[42]);return j::binary("<",_lhs6151,_rhs6152);})():_logical6148;})());(void)(j::increment(_v_4026_k,1,false))){
V _v_4027_c;
_v_4027_c=([&]()->V{V _receiver6153=_v_4022_text;V _method6154=this->_literals[34];V _method=j::get(_receiver6153,_method6154);j::Args _params6155=j::Args{_v_4026_k};return j::call(_method,_params6155,_receiver6153);})();
if(j::truth(([&]()->V{V _lhs6156=_v_4027_c;V _rhs6157=V(10.0);return V(j::equal(_lhs6156,_rhs6157,true));})())){
(void)((_v_4024_x=V(0.0)));
(void)(j::increment(_v_4025_y,1,false));
continue;

}

if(j::truth(([&]()->V{V _logical6159=([&]()->V{V _lhs6160=_v_4024_x;V _rhs6161=j::get(_receiver_fn4021,this->_literals[41]);return j::binary("<",_lhs6160,_rhs6161);})();return j::truth(_logical6159)?([&]()->V{V _lhs6162=_v_4027_c;V _rhs6163=V(32.0);return V(!j::equal(_lhs6162,_rhs6163,true));})():_logical6159;})())){
V _v_4028_i;
_v_4028_i=([&]()->V{V _lhs6164=([&]()->V{V _lhs6166=_v_4025_y;V _rhs6167=j::get(_receiver_fn4021,this->_literals[41]);return V(j::number(_lhs6166)*j::number(_rhs6167));})();V _rhs6165=_v_4024_x;return j::binary("+",_lhs6164,_rhs6165);})();
(void)(([&]()->V{V _base6169=j::get(_receiver_fn4021,this->_literals[440]);V _key6170=_v_4028_i;V _assign6168=_v_4027_c;return j::put(_base6169,_key6170,_assign6168);})());
(void)(([&]()->V{V _base6172=j::get(_receiver_fn4021,this->_literals[14]);V _key6173=_v_4028_i;V _assign6171=(j::truth(_v_4023_color)?j::get(_v_4023_color,_v_4028_i):this->_v_3946_NONE.get());return j::put(_base6172,_key6173,_assign6171);})());

}

(void)(j::increment(_v_4024_x,1,false));

}
}
return _receiver_fn4021;

}

return V{};
},2),false,"method");j::class_method(_class5852,this->_literals[69],j::function([=](const j::Args &_args_fn4029,const V &_receiver_fn4029,const V &_self_fn4029) mutable ->V{
V _v_4030_env;
V _default6174=_args_fn4029[0];if(_default6174.kind==V::Undefined||_default6174.kind==V::Hole)_default6174=([&]()->V{V _obj6175=j::object();return _obj6175;})();
_v_4030_env=_default6174;
{
V _v_4031_cols;
V _v_4032_rows;
V _v_4033_chars;
V _v_4034_colors;
V _v_4035_color;
V _v_4039_line;
V _v_4040_out;
V _pattern6176=_receiver_fn4029;
_v_4031_cols=j::get(_pattern6176,this->_literals[41]);
_v_4032_rows=j::get(_pattern6176,this->_literals[42]);
_v_4033_chars=j::get(_pattern6176,this->_literals[440]);
_v_4034_colors=j::get(_pattern6176,this->_literals[14]);
_v_4035_color=j::get(_v_4030_env,this->_literals[20]);
if(j::truth(([&]()->V{V _logical6177=_v_4035_color;return j::truth(_logical6177)?j::get(_receiver_fn4029,this->_literals[31]):_logical6177;})())){
V _v_4036_ink;
V _v_4037_n;
_v_4036_ink=([&]()->V{V _receiver6178=j::get(_receiver_fn4029,this->_literals[31]);V _method6179=this->_literals[33];V _method=j::get(_receiver6178,_method6179);j::Args _params6180=j::Args{j::get(_receiver_fn4029,this->_literals[66])};return j::call(_method,_params6180,_receiver6178);})();
_v_4037_n=([&]()->V{V _receiver6183=j::builtin("Math");V _method6184=this->_literals[12];V _method=j::get(_receiver6183,_method6184);j::Args _params6185=j::Args{j::get(_v_4035_color,this->_literals[4]),j::get(_v_4033_chars,this->_literals[4])};return j::call(_method,_params6185,_receiver6183);})();
{V _v_4038_i;
_v_4038_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs6186=_v_4038_i;V _rhs6187=_v_4037_n;return j::binary("<",_lhs6186,_rhs6187);})());(void)(j::increment(_v_4038_i,1,false))){(void)(([&]()->V{V _base6189=_v_4035_color;V _key6190=_v_4038_i;V _assign6188=(j::truth(([&]()->V{V _lhs6191=j::get(_v_4034_colors,_v_4038_i);V _rhs6192=this->_v_3946_NONE.get();return V(j::equal(_lhs6191,_rhs6192,true));})())?_v_4036_ink:j::get(_v_4034_colors,_v_4038_i));return j::put(_base6189,_key6190,_assign6188);})());
}}

}

_v_4039_line=j::get(_receiver_fn4029,this->_literals[441]);
_v_4040_out=this->_literals[26];
{V _v_4041_r;
_v_4041_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs6193=_v_4041_r;V _rhs6194=_v_4032_rows;return j::binary("<",_lhs6193,_rhs6194);})());(void)(j::increment(_v_4041_r,1,false))){
{V _v_4042_c;
V _v_4043_i;
_v_4042_c=V(0.0);
_v_4043_i=([&]()->V{V _lhs6195=_v_4041_r;V _rhs6196=_v_4031_cols;return V(j::number(_lhs6195)*j::number(_rhs6196));})();
for(;j::truth(([&]()->V{V _lhs6197=_v_4042_c;V _rhs6198=_v_4031_cols;return j::binary("<",_lhs6197,_rhs6198);})());(void)((j::increment(_v_4042_c,1,false),j::increment(_v_4043_i,1,false)))){(void)(([&]()->V{V _base6200=_v_4039_line;V _key6201=_v_4042_c;V _assign6199=([&]()->V{V _logical6202=j::get(_v_4033_chars,_v_4043_i);return !j::truth(_logical6202)?V(32.0):_logical6202;})();return j::put(_base6200,_key6201,_assign6199);})());
}}
(void)((_v_4040_out=j::binary("+",_v_4040_out,([&]()->V{V _lhs6204=(j::truth(_v_4041_r)?this->_literals[75]:this->_literals[26]);V _rhs6205=([&]()->V{V _receiver6206=j::get(j::builtin("String"),this->_literals[445]);V _method6207=this->_literals[454];V _method=j::get(_receiver6206,_method6207);j::Args _params6208=j::Args{V::null(),_v_4039_line};return j::call(_method,_params6208,_receiver6206);})();return j::binary("+",_lhs6204,_rhs6205);})())));

}
}
return _v_4040_out;

}

return V{};
},0),false,"method");j::class_method(_class5852,this->_literals[111],j::function([=](const j::Args &_args_fn4044,const V &_receiver_fn4044,const V &_self_fn4044) mutable ->V{
{
return ([&]()->V{V _receiver6209=_receiver_fn4044;V _method6210=this->_literals[69];V _method=j::get(_receiver6209,_method6210);j::Args _params6211=j::Args{};return j::call(_method,_params6211,_receiver6209);})();

}

return V{};
},0),false,"method");j::class_method(_class5852,this->_literals[71],j::function([=](const j::Args &_args_fn4045,const V &_receiver_fn4045,const V &_self_fn4045) mutable ->V{
{
V _v_4046_s;
_v_4046_s=([&]()->V{V _callee6213=this->_v_3951_Surface.get();return j::construct(_callee6213,j::Args{j::get(_receiver_fn4045,this->_literals[41]),j::get(_receiver_fn4045,this->_literals[42]),([&]()->V{V _obj6212=j::object();j::put(_obj6212,this->_literals[31],j::get(_receiver_fn4045,this->_literals[31]));j::put(_obj6212,this->_literals[65],j::get(_receiver_fn4045,this->_literals[65]));return _obj6212;})()});})();
(void)(([&]()->V{V _receiver6214=j::get(_v_4046_s,this->_literals[440]);V _method6215=this->_literals[29];V _method=j::get(_receiver6214,_method6215);j::Args _params6216=j::Args{j::get(_receiver_fn4045,this->_literals[440])};return j::call(_method,_params6216,_receiver6214);})());
(void)(([&]()->V{V _receiver6217=j::get(_v_4046_s,this->_literals[14]);V _method6218=this->_literals[29];V _method=j::get(_receiver6217,_method6218);j::Args _params6219=j::Args{j::get(_receiver_fn4045,this->_literals[14])};return j::call(_method,_params6219,_receiver6217);})());
(void)(([&]()->V{V _base6221=_v_4046_s;V _key6222=this->_literals[66];V _assign6220=j::get(_receiver_fn4045,this->_literals[66]);return j::put(_base6221,_key6222,_assign6220);})());
(void)(([&]()->V{V _base6224=_v_4046_s;V _key6225=this->_literals[67];V _assign6223=j::get(_receiver_fn4045,this->_literals[67]);return j::put(_base6224,_key6225,_assign6223);})());
return _v_4046_s;

}

return V{};
},0),false,"method");j::class_method(_class5852,this->_literals[13],j::function([=](const j::Args &_args_fn4047,const V &_receiver_fn4047,const V &_self_fn4047) mutable ->V{
V _v_4048_text;
V _v_4049_color;
V _v_4050_palette;
_v_4048_text=_args_fn4047[0];
_v_4049_color=_args_fn4047[1];
V _default6226=_args_fn4047[2];if(_default6226.kind==V::Undefined||_default6226.kind==V::Hole)_default6226=V::null();
_v_4050_palette=_default6226;
{
V _v_4051_lines;
V _v_4052_s;
_v_4051_lines=([&]()->V{V _receiver6227=([&]()->V{V _callee6230=j::builtin("String");return j::call(_callee6230,j::Args{_v_4048_text});})();V _method6228=this->_literals[77];V _method=j::get(_receiver6227,_method6228);j::Args _params6229=j::Args{this->_literals[75]};return j::call(_method,_params6229,_receiver6227);})();
_v_4052_s=([&]()->V{V _callee6244=this->_v_3951_Surface.get();return j::construct(_callee6244,j::Args{([&]()->V{V _receiver6235=j::builtin("Math");V _method6236=this->_literals[82];V _method=j::get(_receiver6235,_method6236);j::Args _params6237=([&](){j::Args _args6231;_args6231.push_back(V(1.0));for(const auto &_v:j::elements(([&]()->V{V _receiver6232=_v_4051_lines;V _method6233=this->_literals[11];V _method=j::get(_receiver6232,_method6233);j::Args _params6234=j::Args{j::function([=](const j::Args &_args_fn4053,const V &_receiver_fn4053,const V &_self_fn4053) mutable ->V{
V _v_4054_l;
_v_4054_l=_args_fn4053[0];
return j::get(_v_4054_l,this->_literals[4]);
return V{};
},1)};return j::call(_method,_params6234,_receiver6232);})()))_args6231.push_back(_v);return _args6231;})();return j::call(_method,_params6237,_receiver6235);})(),([&]()->V{V _receiver6240=j::builtin("Math");V _method6241=this->_literals[82];V _method=j::get(_receiver6240,_method6241);j::Args _params6242=j::Args{V(1.0),j::get(_v_4051_lines,this->_literals[4])};return j::call(_method,_params6242,_receiver6240);})(),([&]()->V{V _obj6243=j::object();j::put(_obj6243,this->_literals[31],_v_4050_palette);return _obj6243;})()});})();
return ([&]()->V{V _receiver6246=_v_4052_s;V _method6247=this->_literals[87];V _method=j::get(_receiver6246,_method6247);j::Args _params6248=j::Args{([&]()->V{V _callee6245=j::builtin("String");return j::call(_callee6245,j::Args{_v_4048_text});})(),_v_4049_color};return j::call(_method,_params6248,_receiver6246);})();

}

return V{};
},2),true,"method");}
this->_v_4055_CATEGORIES.get()=([&]()->V{j::Args _array6249;_array6249.push_back(this->_literals[455]);_array6249.push_back(this->_literals[456]);_array6249.push_back(this->_literals[254]);_array6249.push_back(this->_literals[457]);_array6249.push_back(this->_literals[458]);_array6249.push_back(this->_literals[459]);_array6249.push_back(this->_literals[460]);_array6249.push_back(this->_literals[60]);_array6249.push_back(this->_literals[461]);_array6249.push_back(this->_literals[462]);_array6249.push_back(this->_literals[463]);_array6249.push_back(this->_literals[72]);_array6249.push_back(this->_literals[464]);_array6249.push_back(this->_literals[465]);_array6249.push_back(this->_literals[466]);return j::array(std::move(_array6249));})();
this->_v_4056_MAX.get()=([&]()->V{V _obj6250=j::object();j::put(_obj6250,this->_literals[41],V(320.0));j::put(_obj6250,this->_literals[42],V(120.0));return _obj6250;})();
{V _base6251=V{};V _class6252=j::make_class("Chainable",_base6251,j::function([=](const j::Args &_a,const V &_instance,const V &)->V{return V{};}));this->_v_4060_Chainable.get()=_class6252;j::class_method(_class6252,this->_literals[467],j::function([=](const j::Args &_args_fn4061,const V &_receiver_fn4061,const V &_self_fn4061) mutable ->V{
V _v_4062_name;
V _v_4063_note;
_v_4062_name=_args_fn4061[0];
_v_4063_note=_args_fn4061[1];
{
return ([&]()->V{V _receiver6257=this->_v_3712_compose.get();V _method6258=this->_literals[467];V _method=j::get(_receiver6257,_method6258);j::Args _params6259=j::Args{_receiver_fn4061,_v_4062_name,(j::truth(([&]()->V{V _lhs6253=_v_4063_note;V _rhs6254=j::builtin("undefined");return V(j::equal(_lhs6253,_rhs6254,true));})())?([&]()->V{V _obj6255=j::object();return _obj6255;})():([&]()->V{V _obj6256=j::object();j::put(_obj6256,this->_literals[40],_v_4063_note);return _obj6256;})())};return j::call(_method,_params6259,_receiver6257);})();

}

return V{};
},2),false,"method");j::class_method(_class6252,this->_literals[40],j::function([=](const j::Args &_args_fn4064,const V &_receiver_fn4064,const V &_self_fn4064) mutable ->V{
V _v_4065_note;
_v_4065_note=_args_fn4064[0];
{
return ([&]()->V{V _receiver6261=this->_v_3712_compose.get();V _method6262=this->_literals[467];V _method=j::get(_receiver6261,_method6262);j::Args _params6263=j::Args{_receiver_fn4064,j::get(j::get(_receiver_fn4064,this->_literals[53]),this->_literals[36]),([&]()->V{V _obj6260=j::object();j::put(_obj6260,this->_literals[40],_v_4065_note);return _obj6260;})()};return j::call(_method,_params6263,_receiver6261);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[468],j::function([=](const j::Args &_args_fn4066,const V &_receiver_fn4066,const V &_self_fn4066) mutable ->V{
V _v_4067_bottom;
V _v_4068_o;
_v_4067_bottom=_args_fn4066[0];
_v_4068_o=_args_fn4066[1];
{
return ([&]()->V{V _receiver6264=this->_v_3712_compose.get();V _method6265=this->_literals[468];V _method=j::get(_receiver6264,_method6265);j::Args _params6266=j::Args{_receiver_fn4066,_v_4067_bottom,_v_4068_o};return j::call(_method,_params6266,_receiver6264);})();

}

return V{};
},2),false,"method");j::class_method(_class6252,this->_literals[469],j::function([=](const j::Args &_args_fn4069,const V &_receiver_fn4069,const V &_self_fn4069) mutable ->V{
V _v_4070_top;
V _v_4071_o;
_v_4070_top=_args_fn4069[0];
_v_4071_o=_args_fn4069[1];
{
return ([&]()->V{V _receiver6267=this->_v_3712_compose.get();V _method6268=this->_literals[468];V _method=j::get(_receiver6267,_method6268);j::Args _params6269=j::Args{_v_4070_top,_receiver_fn4069,_v_4071_o};return j::call(_method,_params6269,_receiver6267);})();

}

return V{};
},2),false,"method");j::class_method(_class6252,this->_literals[435],j::function([=](const j::Args &_args_fn4072,const V &_receiver_fn4072,const V &_self_fn4072) mutable ->V{
V _v_4073_factor;
_v_4073_factor=_args_fn4072[0];
{
return ([&]()->V{V _receiver6270=this->_v_3712_compose.get();V _method6271=this->_literals[435];V _method=j::get(_receiver6270,_method6271);j::Args _params6272=j::Args{_receiver_fn4072,_v_4073_factor};return j::call(_method,_params6272,_receiver6270);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[426],j::function([=](const j::Args &_args_fn4074,const V &_receiver_fn4074,const V &_self_fn4074) mutable ->V{
V _v_4075_seconds;
_v_4075_seconds=_args_fn4074[0];
{
return ([&]()->V{V _receiver6273=this->_v_3712_compose.get();V _method6274=this->_literals[426];V _method=j::get(_receiver6273,_method6274);j::Args _params6275=j::Args{_receiver_fn4074,_v_4075_seconds};return j::call(_method,_params6275,_receiver6273);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[470],j::function([=](const j::Args &_args_fn4076,const V &_receiver_fn4076,const V &_self_fn4076) mutable ->V{
V _v_4077_seconds;
_v_4077_seconds=_args_fn4076[0];
{
return ([&]()->V{V _receiver6276=this->_v_3712_compose.get();V _method6277=this->_literals[470];V _method=j::get(_receiver6276,_method6277);j::Args _params6278=j::Args{_receiver_fn4076,_v_4077_seconds};return j::call(_method,_params6278,_receiver6276);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[471],j::function([=](const j::Args &_args_fn4078,const V &_receiver_fn4078,const V &_self_fn4078) mutable ->V{
V _v_4079_at;
_v_4079_at=_args_fn4078[0];
{
return ([&]()->V{V _receiver6279=this->_v_3712_compose.get();V _method6280=this->_literals[471];V _method=j::get(_receiver6279,_method6280);j::Args _params6281=j::Args{_receiver_fn4078,_v_4079_at};return j::call(_method,_params6281,_receiver6279);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[472],j::function([=](const j::Args &_args_fn4080,const V &_receiver_fn4080,const V &_self_fn4080) mutable ->V{
V _v_4081_n;
_v_4081_n=_args_fn4080[0];
{
return ([&]()->V{V _receiver6282=this->_v_3712_compose.get();V _method6283=this->_literals[472];V _method=j::get(_receiver6282,_method6283);j::Args _params6284=j::Args{_receiver_fn4080,_v_4081_n};return j::call(_method,_params6284,_receiver6282);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[473],j::function([=](const j::Args &_args_fn4082,const V &_receiver_fn4082,const V &_self_fn4082) mutable ->V{
V _v_4083_o;
_v_4083_o=_args_fn4082[0];
{
return ([&]()->V{V _receiver6285=this->_v_3712_compose.get();V _method6286=this->_literals[473];V _method=j::get(_receiver6285,_method6286);j::Args _params6287=j::Args{_receiver_fn4082,_v_4083_o};return j::call(_method,_params6287,_receiver6285);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[474],j::function([=](const j::Args &_args_fn4084,const V &_receiver_fn4084,const V &_self_fn4084) mutable ->V{
V _v_4085_region;
_v_4085_region=_args_fn4084[0];
{
return ([&]()->V{V _receiver6288=this->_v_3712_compose.get();V _method6289=this->_literals[474];V _method=j::get(_receiver6288,_method6289);j::Args _params6290=j::Args{_receiver_fn4084,_v_4085_region};return j::call(_method,_params6290,_receiver6288);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[475],j::function([=](const j::Args &_args_fn4086,const V &_receiver_fn4086,const V &_self_fn4086) mutable ->V{
V _v_4087_axis;
_v_4087_axis=_args_fn4086[0];
{
return ([&]()->V{V _receiver6291=this->_v_3712_compose.get();V _method6292=this->_literals[475];V _method=j::get(_receiver6291,_method6292);j::Args _params6293=j::Args{_receiver_fn4086,_v_4087_axis};return j::call(_method,_params6293,_receiver6291);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[394],j::function([=](const j::Args &_args_fn4088,const V &_receiver_fn4088,const V &_self_fn4088) mutable ->V{
V _v_4089_factor;
_v_4089_factor=_args_fn4088[0];
{
return ([&]()->V{V _receiver6294=this->_v_3712_compose.get();V _method6295=this->_literals[394];V _method=j::get(_receiver6294,_method6295);j::Args _params6296=j::Args{_receiver_fn4088,_v_4089_factor};return j::call(_method,_params6296,_receiver6294);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[476],j::function([=](const j::Args &_args_fn4090,const V &_receiver_fn4090,const V &_self_fn4090) mutable ->V{
V _v_4091_o;
_v_4091_o=_args_fn4090[0];
{
return ([&]()->V{V _receiver6297=this->_v_3713_fx.get();V _method6298=this->_literals[476];V _method=j::get(_receiver6297,_method6298);j::Args _params6299=j::Args{_receiver_fn4090,_v_4091_o};return j::call(_method,_params6299,_receiver6297);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[477],j::function([=](const j::Args &_args_fn4092,const V &_receiver_fn4092,const V &_self_fn4092) mutable ->V{
V _v_4093_o;
_v_4093_o=_args_fn4092[0];
{
return ([&]()->V{V _receiver6300=this->_v_3713_fx.get();V _method6301=this->_literals[477];V _method=j::get(_receiver6300,_method6301);j::Args _params6302=j::Args{_receiver_fn4092,_v_4093_o};return j::call(_method,_params6302,_receiver6300);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[478],j::function([=](const j::Args &_args_fn4094,const V &_receiver_fn4094,const V &_self_fn4094) mutable ->V{
V _v_4095_o;
_v_4095_o=_args_fn4094[0];
{
return ([&]()->V{V _receiver6303=this->_v_3713_fx.get();V _method6304=this->_literals[478];V _method=j::get(_receiver6303,_method6304);j::Args _params6305=j::Args{_receiver_fn4094,_v_4095_o};return j::call(_method,_params6305,_receiver6303);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[479],j::function([=](const j::Args &_args_fn4096,const V &_receiver_fn4096,const V &_self_fn4096) mutable ->V{
V _v_4097_o;
_v_4097_o=_args_fn4096[0];
{
return ([&]()->V{V _receiver6306=this->_v_3713_fx.get();V _method6307=this->_literals[479];V _method=j::get(_receiver6306,_method6307);j::Args _params6308=j::Args{_receiver_fn4096,_v_4097_o};return j::call(_method,_params6308,_receiver6306);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[480],j::function([=](const j::Args &_args_fn4098,const V &_receiver_fn4098,const V &_self_fn4098) mutable ->V{
V _v_4099_o;
_v_4099_o=_args_fn4098[0];
{
return ([&]()->V{V _receiver6309=this->_v_3713_fx.get();V _method6310=this->_literals[480];V _method=j::get(_receiver6309,_method6310);j::Args _params6311=j::Args{_receiver_fn4098,_v_4099_o};return j::call(_method,_params6311,_receiver6309);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[481],j::function([=](const j::Args &_args_fn4100,const V &_receiver_fn4100,const V &_self_fn4100) mutable ->V{
V _v_4101_o;
_v_4101_o=_args_fn4100[0];
{
return ([&]()->V{V _receiver6312=this->_v_3713_fx.get();V _method6313=this->_literals[481];V _method=j::get(_receiver6312,_method6313);j::Args _params6314=j::Args{_receiver_fn4100,_v_4101_o};return j::call(_method,_params6314,_receiver6312);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[482],j::function([=](const j::Args &_args_fn4102,const V &_receiver_fn4102,const V &_self_fn4102) mutable ->V{
V _v_4103_o;
_v_4103_o=_args_fn4102[0];
{
return ([&]()->V{V _receiver6315=this->_v_3713_fx.get();V _method6316=this->_literals[482];V _method=j::get(_receiver6315,_method6316);j::Args _params6317=j::Args{_receiver_fn4102,_v_4103_o};return j::call(_method,_params6317,_receiver6315);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[483],j::function([=](const j::Args &_args_fn4104,const V &_receiver_fn4104,const V &_self_fn4104) mutable ->V{
V _v_4105_o;
_v_4105_o=_args_fn4104[0];
{
return ([&]()->V{V _receiver6318=this->_v_3713_fx.get();V _method6319=this->_literals[483];V _method=j::get(_receiver6318,_method6319);j::Args _params6320=j::Args{_receiver_fn4104,_v_4105_o};return j::call(_method,_params6320,_receiver6318);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[484],j::function([=](const j::Args &_args_fn4106,const V &_receiver_fn4106,const V &_self_fn4106) mutable ->V{
V _v_4107_o;
_v_4107_o=_args_fn4106[0];
{
return ([&]()->V{V _receiver6321=this->_v_3713_fx.get();V _method6322=this->_literals[484];V _method=j::get(_receiver6321,_method6322);j::Args _params6323=j::Args{_receiver_fn4106,_v_4107_o};return j::call(_method,_params6323,_receiver6321);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[485],j::function([=](const j::Args &_args_fn4108,const V &_receiver_fn4108,const V &_self_fn4108) mutable ->V{
V _v_4109_o;
_v_4109_o=_args_fn4108[0];
{
return ([&]()->V{V _receiver6324=this->_v_3713_fx.get();V _method6325=this->_literals[485];V _method=j::get(_receiver6324,_method6325);j::Args _params6326=j::Args{_receiver_fn4108,_v_4109_o};return j::call(_method,_params6326,_receiver6324);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[486],j::function([=](const j::Args &_args_fn4110,const V &_receiver_fn4110,const V &_self_fn4110) mutable ->V{
V _v_4111_o;
_v_4111_o=_args_fn4110[0];
{
return ([&]()->V{V _receiver6327=this->_v_3713_fx.get();V _method6328=this->_literals[486];V _method=j::get(_receiver6327,_method6328);j::Args _params6329=j::Args{_receiver_fn4110,_v_4111_o};return j::call(_method,_params6329,_receiver6327);})();

}

return V{};
},1),false,"method");j::class_method(_class6252,this->_literals[487],j::function([=](const j::Args &_args_fn4112,const V &_receiver_fn4112,const V &_self_fn4112) mutable ->V{
V _v_4113_o;
_v_4113_o=_args_fn4112[0];
{
return ([&]()->V{V _receiver6330=this->_v_3713_fx.get();V _method6331=this->_literals[487];V _method=j::get(_receiver6330,_method6331);j::Args _params6332=j::Args{_receiver_fn4112,_v_4113_o};return j::call(_method,_params6332,_receiver6330);})();

}

return V{};
},1),false,"method");}
}
};
}
std::unique_ptr<Module> new_kit_core(){return std::make_unique<Generated_kit_core>();}
}
