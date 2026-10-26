// Direct, statically typed C++ from src/pieces/tokyo-rain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32855;
struct _n_Record_32890;
struct _n_Record_32979;
struct _n_Record_33590;
struct _n_Record_33594;
struct _n_Record_33596;
struct _n_Record_33597;
struct _n_Record_33598;
struct _n_Record_33599;
struct _n_Record_33600;
struct _n_Record_33601;
struct _n_Record_33602;
struct _n_Record_32855{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_32855> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32855>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_32890{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
std::optional<double> _p_rows{};
std::optional<d::String> _p_text{};
std::optional<double> _p_edge{};
std::optional<double> _p_group{};
std::optional<double> _p_fail{};
static std::shared_ptr<_n_Record_32890> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32890>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_rows=d::decode<std::optional<double>>(j["rows"]);out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_edge=d::decode<std::optional<double>>(j["edge"]);out->_p_group=d::decode<std::optional<double>>(j["group"]);out->_p_fail=d::decode<std::optional<double>>(j["fail"]);return out;}
};
struct _n_Record_32979{
double _p_xw{};
double _p_z{};
double _p_s{};
double _p_fade{};
double _p_ph{};
static std::shared_ptr<_n_Record_32979> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32979>();out->_p_xw=d::decode<double>(j["xw"]);out->_p_z=d::decode<double>(j["z"]);out->_p_s=d::decode<double>(j["s"]);out->_p_fade=d::decode<double>(j["fade"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_33590{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_33590> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33590>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_33594{
d::String _p_ra{};
d::String _p_symbol_2d{};
d::String _p_me{};
d::String _p_n{};
d::String _p_ka{};
d::String _p_o{};
d::String _p_ke{};
d::String _p_su{};
d::String _p_na{};
d::String _p_tsu{};
d::String _p_ku{};
d::String _p_ho{};
d::String _p_te{};
d::String _p_ru{};
d::String _p_k1{};
d::String _p_k2{};
d::String _p_k3{};
d::String _p_k4{};
d::String _p_k5{};
static std::shared_ptr<_n_Record_33594> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33594>();out->_p_ra=d::decode<d::String>(j["ra"]);out->_p_symbol_2d=d::decode<d::String>(j["-"]);out->_p_me=d::decode<d::String>(j["me"]);out->_p_n=d::decode<d::String>(j["n"]);out->_p_ka=d::decode<d::String>(j["ka"]);out->_p_o=d::decode<d::String>(j["o"]);out->_p_ke=d::decode<d::String>(j["ke"]);out->_p_su=d::decode<d::String>(j["su"]);out->_p_na=d::decode<d::String>(j["na"]);out->_p_tsu=d::decode<d::String>(j["tsu"]);out->_p_ku=d::decode<d::String>(j["ku"]);out->_p_ho=d::decode<d::String>(j["ho"]);out->_p_te=d::decode<d::String>(j["te"]);out->_p_ru=d::decode<d::String>(j["ru"]);out->_p_k1=d::decode<d::String>(j["k1"]);out->_p_k2=d::decode<d::String>(j["k2"]);out->_p_k3=d::decode<d::String>(j["k3"]);out->_p_k4=d::decode<d::String>(j["k4"]);out->_p_k5=d::decode<d::String>(j["k5"]);return out;}
};
struct _n_Record_33596{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
d::String _p_text{};
double _p_fail{};
static std::shared_ptr<_n_Record_33596> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33596>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);out->_p_fail=d::decode<double>(j["fail"]);return out;}
};
struct _n_Record_33597{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
d::String _p_text{};
static std::shared_ptr<_n_Record_33597> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33597>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_33598{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
d::String _p_text{};
double _p_group{};
static std::shared_ptr<_n_Record_33598> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33598>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);out->_p_group=d::decode<double>(j["group"]);return out;}
};
struct _n_Record_33599{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
double _p_rows{};
static std::shared_ptr<_n_Record_33599> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33599>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_rows=d::decode<double>(j["rows"]);return out;}
};
struct _n_Record_33600{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
double _p_rows{};
double _p_group{};
static std::shared_ptr<_n_Record_33600> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33600>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_group=d::decode<double>(j["group"]);return out;}
};
struct _n_Record_33601{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
d::String _p_text{};
double _p_edge{};
static std::shared_ptr<_n_Record_33601> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33601>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);out->_p_edge=d::decode<double>(j["edge"]);return out;}
};
struct _n_Record_33602{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
std::optional<d::String> _p_text{};
std::optional<double> _p_fail{};
std::optional<double> _p_group{};
std::optional<double> _p_rows{};
std::optional<double> _p_edge{};
static std::shared_ptr<_n_Record_33602> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33602>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_fail=d::decode<std::optional<double>>(j["fail"]);out->_p_group=d::decode<std::optional<double>>(j["group"]);out->_p_rows=d::decode<std::optional<double>>(j["rows"]);out->_p_edge=d::decode<std::optional<double>>(j["edge"]);return out;}
};
double _n_hash_32899(double _a0,double _a1);
double _n_noise_32900(double _a0,double _a1,double _a2);
double _n_fbm_32901(double _a0,double _a1,double _a2,double _a3);
double _n_endGlow_32903(double _a0,double _a1);
double _n_clamp_32904(double _a0);
double _n_smooth_32905(double _a0,double _a1,double _a2);
double _n_mix_32906(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_32907(d::String _a0);
double _n_walkerShape_32908(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_32855> _n_meta_32854=[](){return ([&](){auto _n_object_33593=std::make_shared<_n_Record_32855>();_n_object_33593->_p_name=d::String(u"tokyo rain");_n_object_33593->_p_category=d::String(u"scenes");_n_object_33593->_p_note=d::String(u"a tokyo side street in the rain, neon signs shining on the wet road");_n_object_33593->_p_cols=200.0;_n_object_33593->_p_rows=100.0;_n_object_33593->_p_cell=1.0;_n_object_33593->_p_fps=15.0;_n_object_33593->_p_ground=d::String(u"#07060d");_n_object_33593->_p_palette=d::Array<d::String,false>{d::String(u"#100f22"),d::String(u"#17162f"),d::String(u"#201e3d"),d::String(u"#2b284e"),d::String(u"#383463"),d::String(u"#4a447a"),d::String(u"#4c4890"),d::String(u"#6a64c4"),d::String(u"#1d1520"),d::String(u"#2c1f2e"),d::String(u"#3e2b3e"),d::String(u"#553a52"),d::String(u"#6a3a74"),d::String(u"#8e4c8a"),d::String(u"#b4649c"),d::String(u"#d885ae"),d::String(u"#6e1248"),d::String(u"#a3196c"),d::String(u"#d8278c"),d::String(u"#ff47a8"),d::String(u"#ff85c6"),d::String(u"#ffc4e3"),d::String(u"#0c4656"),d::String(u"#106f80"),d::String(u"#16a0b2"),d::String(u"#28d2e2"),d::String(u"#7cecf4"),d::String(u"#ccfbfd"),d::String(u"#5e340a"),d::String(u"#93540f"),d::String(u"#cc7b16"),d::String(u"#f7a32a"),d::String(u"#ffc65e"),d::String(u"#ffe2a0"),d::String(u"#fff4d8"),d::String(u"#55100e"),d::String(u"#8a1a14"),d::String(u"#c22a1a"),d::String(u"#ee4626"),d::String(u"#ff7a4c"),d::String(u"#8ea2c4"),d::String(u"#bccbe6"),d::String(u"#e4ecfb"),d::String(u"#ffffff"),d::String(u"#2e62e0"),d::String(u"#79a2ff"),d::String(u"#20844c"),d::String(u"#43d884"),d::String(u"#e6c21e"),d::String(u"#fff07a"),d::String(u"#6a7896"),d::String(u"#9ba7c2"),d::String(u"#c9d0e2"),d::String(u"#262a36"),d::String(u"#3a3f4e"),d::String(u"#565c6c")};return _n_object_33593;})();}();
const double _n_W_32856=[](){return 200.0;}();
const double _n_H_32857=[](){return 100.0;}();
const double _n_VX_32858=[](){return 100.0;}();
const double _n_HY_32859=[](){return 50.0;}();
const double _n_F_32860=[](){return 46.0;}();
const double _n_EYE_32861=[](){return 1.5;}();
const double _n_HALF_32862=[](){return 3.2;}();
const double _n_THICK_32863=[](){return 0.3;}();
const double _n_ZF_32864=[](){return 17.0;}();
const double _n_EXT_32865=[](){return 70.0;}();
const d::String _n_DOTS_32866=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_32867=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_32868=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_32981=_a0;
return ((_n_v_32981/16.0)-0.47);});}();
const double _n_SKY_32869=[](){return 0.0;}();
const double _n_WALL_32870=[](){return 1.0;}();
const double _n_ROAD_32871=[](){return 2.0;}();
const double _n_SIGN_32872=[](){return 3.0;}();
const double _n_SIDE_32873=[](){return 4.0;}();
const double _n_VEND_32874=[](){return 5.0;}();
const double _n_POLE_32875=[](){return 6.0;}();
const double _n_WIRE_32876=[](){return 7.0;}();
const double _n_TOWER_32877=[](){return 8.0;}();
d::Array<double,false> _n_GIVE_32878=[](){return d::Array<double,false>{0.25,0.1,0.0,1.0,0.5,0.9,0.12,0.15,0.2};}();
d::Array<double,false> _n_FLOOR_32879=[](){return d::Array<double,false>{0.12,0.04,0.05,0.1,0.06,0.1,0.03,0.0,0.0};}();
d::Array<double,false> _n_PINK_32880=[](){return d::Array<double,false>{1.0,0.2,0.62};}();
d::Array<double,false> _n_CYAN_32881=[](){return d::Array<double,false>{0.14,0.88,1.0};}();
d::Array<double,false> _n_AMBER_32882=[](){return d::Array<double,false>{1.0,0.6,0.14};}();
d::Array<double,false> _n_RED_32883=[](){return d::Array<double,false>{1.0,0.16,0.1};}();
const double _n_NEON_32884=[](){return 0.0;}();
const double _n_PANEL_32885=[](){return 1.0;}();
const double _n_WHITE_32886=[](){return 2.0;}();
const double _n_BULBS_32887=[](){return 3.0;}();
d::Dict<d::String,d::String> _n_FONT_32888=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_33595;_n_dictionary_33595.set(d::String(u"ra"),d::String(u".###. ..... ##### ....# ..##."));_n_dictionary_33595.set(d::String(u"-"),d::String(u"..#.. ..#.. ..#.. ..#.. ..#.."));_n_dictionary_33595.set(d::String(u"me"),d::String(u"....# .#.#. ..#.. .#.#. #...."));_n_dictionary_33595.set(d::String(u"n"),d::String(u"#.... .#..# ....# ...#. ###.."));_n_dictionary_33595.set(d::String(u"ka"),d::String(u".#... ##### .#..# .#..# #..##"));_n_dictionary_33595.set(d::String(u"o"),d::String(u"...#. ##### ..##. .#.#. #..#."));_n_dictionary_33595.set(d::String(u"ke"),d::String(u".#... .#### #..#. ...#. ..#.."));_n_dictionary_33595.set(d::String(u"su"),d::String(u"####. ...#. ..#.. .#.#. #...#"));_n_dictionary_33595.set(d::String(u"na"),d::String(u"..#.. ##### ..#.. ..#.. .#..."));_n_dictionary_33595.set(d::String(u"tsu"),d::String(u"#.#.# .#..# ....# ...#. .##.."));_n_dictionary_33595.set(d::String(u"ku"),d::String(u".#... .#### #...# ...#. .##.."));_n_dictionary_33595.set(d::String(u"ho"),d::String(u"..#.. ##### ..#.. #.#.# ..#.."));_n_dictionary_33595.set(d::String(u"te"),d::String(u"####. ..... ##### ..#.. .#..."));_n_dictionary_33595.set(d::String(u"ru"),d::String(u".#.#. .#.#. .#.#. .#.## #..#."));_n_dictionary_33595.set(d::String(u"k1"),d::String(u"#.### ..#.# #.### ..#.# #.###"));_n_dictionary_33595.set(d::String(u"k2"),d::String(u"##### #...# ##### #.#.. #.###"));_n_dictionary_33595.set(d::String(u"k3"),d::String(u"#.### #.#.# ###.# #.#.# ###.#"));_n_dictionary_33595.set(d::String(u"k4"),d::String(u"..#.. .#.#. ##### #.#.# #.###"));_n_dictionary_33595.set(d::String(u"k5"),d::String(u"..#.. ##### .###. #.#.# ..#.."));return _n_dictionary_33595;})();}();
d::Array<std::shared_ptr<_n_Record_32890>,false> _n_SIGNS_32889=[](){return d::Array<std::shared_ptr<_n_Record_32890>,false>{([&](){auto _n_object_33604=std::make_shared<_n_Record_32890>();_n_object_33604->_p_side=(-d::number(1.0));_n_object_33604->_p_s=27.0;_n_object_33604->_p_hb=2.3;_n_object_33604->_p_w=16.0;_n_object_33604->_p_g=2.0;_n_object_33604->_p_kind=_n_NEON_32884;_n_object_33604->_p_hue=_n_PINK_32880;_n_object_33604->_p_text=std::optional<d::String>(d::String(u"ra - me n"));_n_object_33604->_p_fail=std::optional<double>(2.0);return _n_object_33604;})(),([&](){auto _n_object_33606=std::make_shared<_n_Record_32890>();_n_object_33606->_p_side=(-d::number(1.0));_n_object_33606->_p_s=17.5;_n_object_33606->_p_hb=2.45;_n_object_33606->_p_w=14.0;_n_object_33606->_p_g=2.0;_n_object_33606->_p_kind=_n_PANEL_32885;_n_object_33606->_p_hue=_n_AMBER_32882;_n_object_33606->_p_text=std::optional<d::String>(d::String(u"k1 k2 k3"));return _n_object_33606;})(),([&](){auto _n_object_33608=std::make_shared<_n_Record_32890>();_n_object_33608->_p_side=(-d::number(1.0));_n_object_33608->_p_s=11.5;_n_object_33608->_p_hb=2.55;_n_object_33608->_p_w=9.0;_n_object_33608->_p_g=1.0;_n_object_33608->_p_kind=_n_NEON_32884;_n_object_33608->_p_hue=_n_CYAN_32881;_n_object_33608->_p_text=std::optional<d::String>(d::String(u"k4 k5 k1"));_n_object_33608->_p_group=std::optional<double>(1.0);return _n_object_33608;})(),([&](){auto _n_object_33610=std::make_shared<_n_Record_32890>();_n_object_33610->_p_side=(-d::number(1.0));_n_object_33610->_p_s=7.4;_n_object_33610->_p_hb=2.6;_n_object_33610->_p_w=7.0;_n_object_33610->_p_g=1.0;_n_object_33610->_p_kind=_n_WHITE_32886;_n_object_33610->_p_hue=_n_RED_32883;_n_object_33610->_p_text=std::optional<d::String>(d::String(u"k2 k3 k5"));return _n_object_33610;})(),([&](){auto _n_object_33612=std::make_shared<_n_Record_32890>();_n_object_33612->_p_side=(-d::number(1.0));_n_object_33612->_p_s=5.0;_n_object_33612->_p_hb=2.7;_n_object_33612->_p_w=4.0;_n_object_33612->_p_g=0.0;_n_object_33612->_p_kind=_n_PANEL_32885;_n_object_33612->_p_hue=_n_PINK_32880;_n_object_33612->_p_rows=std::optional<double>(18.0);return _n_object_33612;})(),([&](){auto _n_object_33614=std::make_shared<_n_Record_32890>();_n_object_33614->_p_side=(-d::number(1.0));_n_object_33614->_p_s=5.0;_n_object_33614->_p_hb=6.6;_n_object_33614->_p_w=4.0;_n_object_33614->_p_g=0.0;_n_object_33614->_p_kind=_n_NEON_32884;_n_object_33614->_p_hue=_n_AMBER_32882;_n_object_33614->_p_rows=std::optional<double>(10.0);return _n_object_33614;})(),([&](){auto _n_object_33616=std::make_shared<_n_Record_32890>();_n_object_33616->_p_side=(-d::number(1.0));_n_object_33616->_p_s=3.4;_n_object_33616->_p_hb=2.5;_n_object_33616->_p_w=3.0;_n_object_33616->_p_g=0.0;_n_object_33616->_p_kind=_n_NEON_32884;_n_object_33616->_p_hue=_n_CYAN_32881;_n_object_33616->_p_rows=std::optional<double>(14.0);return _n_object_33616;})(),([&](){auto _n_object_33618=std::make_shared<_n_Record_32890>();_n_object_33618->_p_side=(-d::number(1.0));_n_object_33618->_p_s=2.3;_n_object_33618->_p_hb=2.8;_n_object_33618->_p_w=2.0;_n_object_33618->_p_g=0.0;_n_object_33618->_p_kind=_n_PANEL_32885;_n_object_33618->_p_hue=_n_AMBER_32882;_n_object_33618->_p_rows=std::optional<double>(10.0);return _n_object_33618;})(),([&](){auto _n_object_33620=std::make_shared<_n_Record_32890>();_n_object_33620->_p_side=1.0;_n_object_33620->_p_s=24.0;_n_object_33620->_p_hb=2.55;_n_object_33620->_p_w=16.0;_n_object_33620->_p_g=2.0;_n_object_33620->_p_kind=_n_NEON_32884;_n_object_33620->_p_hue=_n_CYAN_32881;_n_object_33620->_p_text=std::optional<d::String>(d::String(u"ka ra o ke"));return _n_object_33620;})(),([&](){auto _n_object_33622=std::make_shared<_n_Record_32890>();_n_object_33622->_p_side=1.0;_n_object_33622->_p_s=14.5;_n_object_33622->_p_hb=2.5;_n_object_33622->_p_w=11.0;_n_object_33622->_p_g=1.0;_n_object_33622->_p_kind=_n_BULBS_32887;_n_object_33622->_p_hue=_n_PINK_32880;_n_object_33622->_p_text=std::optional<d::String>(d::String(u"su na tsu ku"));return _n_object_33622;})(),([&](){auto _n_object_33624=std::make_shared<_n_Record_32890>();_n_object_33624->_p_side=1.0;_n_object_33624->_p_s=6.6;_n_object_33624->_p_hb=2.6;_n_object_33624->_p_w=7.0;_n_object_33624->_p_g=1.0;_n_object_33624->_p_kind=_n_PANEL_32885;_n_object_33624->_p_hue=_n_AMBER_32882;_n_object_33624->_p_text=std::optional<d::String>(d::String(u"ho te ru"));return _n_object_33624;})(),([&](){auto _n_object_33626=std::make_shared<_n_Record_32890>();_n_object_33626->_p_side=1.0;_n_object_33626->_p_s=4.6;_n_object_33626->_p_hb=2.7;_n_object_33626->_p_w=4.0;_n_object_33626->_p_g=0.0;_n_object_33626->_p_kind=_n_NEON_32884;_n_object_33626->_p_hue=_n_CYAN_32881;_n_object_33626->_p_rows=std::optional<double>(16.0);_n_object_33626->_p_group=std::optional<double>(2.0);return _n_object_33626;})(),([&](){auto _n_object_33628=std::make_shared<_n_Record_32890>();_n_object_33628->_p_side=1.0;_n_object_33628->_p_s=4.6;_n_object_33628->_p_hb=6.4;_n_object_33628->_p_w=4.0;_n_object_33628->_p_g=0.0;_n_object_33628->_p_kind=_n_PANEL_32885;_n_object_33628->_p_hue=_n_PINK_32880;_n_object_33628->_p_rows=std::optional<double>(9.0);return _n_object_33628;})(),([&](){auto _n_object_33630=std::make_shared<_n_Record_32890>();_n_object_33630->_p_side=1.0;_n_object_33630->_p_s=3.1;_n_object_33630->_p_hb=2.6;_n_object_33630->_p_w=3.0;_n_object_33630->_p_g=0.0;_n_object_33630->_p_kind=_n_PANEL_32885;_n_object_33630->_p_hue=_n_AMBER_32882;_n_object_33630->_p_rows=std::optional<double>(13.0);return _n_object_33630;})(),([&](){auto _n_object_33632=std::make_shared<_n_Record_32890>();_n_object_33632->_p_side=1.0;_n_object_33632->_p_s=2.1;_n_object_33632->_p_hb=2.9;_n_object_33632->_p_w=2.0;_n_object_33632->_p_g=0.0;_n_object_33632->_p_kind=_n_NEON_32884;_n_object_33632->_p_hue=_n_PINK_32880;_n_object_33632->_p_rows=std::optional<double>(10.0);return _n_object_33632;})(),([&](){auto _n_object_33634=std::make_shared<_n_Record_32890>();_n_object_33634->_p_side=1.0;_n_object_33634->_p_s=18.0;_n_object_33634->_p_hb=0.14;_n_object_33634->_p_w=7.0;_n_object_33634->_p_g=1.0;_n_object_33634->_p_kind=_n_WHITE_32886;_n_object_33634->_p_hue=_n_RED_32883;_n_object_33634->_p_text=std::optional<d::String>(d::String(u"k1 k4"));_n_object_33634->_p_edge=std::optional<double>(2.44);return _n_object_33634;})()};}();
d::Array<d::Array<double,false>,false> _n_LEFT_32891=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,2.55,10.5,1.0},d::Array<double,false>{2.55,4.6,7.2,3.0},d::Array<double,false>{4.6,7.0,6.2,2.0},d::Array<double,false>{7.0,10.5,11.0,3.0},d::Array<double,false>{10.5,15.0,8.4,2.0},d::Array<double,false>{15.0,22.0,12.5,0.0},d::Array<double,false>{22.0,32.0,9.5,2.0},d::Array<double,false>{32.0,60.0,14.0,0.0},d::Array<double,false>{60.0,100000.0,18.0,0.0}};}();
d::Array<d::Array<double,false>,false> _n_RIGHT_32892=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,3.2,9.6,4.0},d::Array<double,false>{3.2,5.0,8.2,0.0},d::Array<double,false>{5.0,6.4,0.0,0.0},d::Array<double,false>{6.4,9.5,7.4,2.0},d::Array<double,false>{9.5,14.0,13.5,3.0},d::Array<double,false>{14.0,20.0,8.0,2.0},d::Array<double,false>{20.0,30.0,11.0,0.0},d::Array<double,false>{30.0,100000.0,16.0,0.0}};}();
d::Array<d::Array<double,false>,false> _n_TANKS_32893=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),5.3,6.2,1.7},d::Array<double,false>{(-d::number(1.0)),11.6,12.7,1.5},d::Array<double,false>{1.0,7.3,8.1,1.4}};}();
d::Array<d::Array<double,false>,false> _n_MASTS_32894=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),13.8,3.0},d::Array<double,false>{1.0,18.4,2.4}};}();
d::Array<d::Array<double,false>,false> _n_POLES_32895=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.9,4.3,9.4,0.32},d::Array<double,false>{(-d::number(2.95)),9.6,9.4,0.3},d::Array<double,false>{2.9,15.0,9.2,0.28},d::Array<double,false>{(-d::number(2.95)),24.0,9.2,0.26}};}();
d::Array<d::Array<double,false>,false> _n_WIRES_32896=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.9,8.6,4.3,(-d::number(2.95)),8.9,9.6,0.45},d::Array<double,false>{2.9,8.2,4.3,(-d::number(2.95)),8.4,9.6,0.55},d::Array<double,false>{2.9,7.6,4.3,(-d::number(3.2)),5.9,6.0,0.3},d::Array<double,false>{2.9,9.0,4.3,2.9,8.9,15.0,0.4},d::Array<double,false>{2.9,8.4,4.3,2.9,8.5,15.0,0.5},d::Array<double,false>{(-d::number(2.95)),8.9,9.6,(-d::number(2.95)),8.9,24.0,0.35},d::Array<double,false>{(-d::number(2.95)),8.4,9.6,2.9,8.5,15.0,0.4},d::Array<double,false>{2.9,8.5,15.0,(-d::number(2.95)),8.6,24.0,0.3},d::Array<double,false>{2.9,8.9,15.0,2.9,8.8,28.0,0.3},d::Array<double,false>{(-d::number(2.95)),8.4,24.0,2.9,8.4,34.0,0.25}};}();
d::Array<d::Array<double,false>,false> _n_LANTERNS_32897=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{26.3,2.72,1.88,0.0},d::Array<double,false>{14.8,2.72,1.95,1.9}};}();
const double _n_VEND_S_32898=[](){return 16.0;}();
d::Array<double,false> _n_END_32902=[](){return d::Array<double,false>{1.0,0.7,0.86};}();
double _n_hash_32899(double _a0,double _a1){double _n_x_32982=_a0;
double _n_y_32983=_a1;
{
double _n_h_32984=([&](){auto _n_left_33635=d::imul(double(d::i32(_n_x_32982)|d::i32(0.0)),374761393.0);auto _n_right_33636=d::imul(double(d::i32(_n_y_32983)|d::i32(0.0)),668265263.0);return (_n_left_33635+_n_right_33636);})();
(void)((_n_h_32984=d::imul(double(d::i32(_n_h_32984)^d::i32(double(d::u32(_n_h_32984)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_32984)^d::i32(double(d::u32(_n_h_32984)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_32900(double _a0,double _a1,double _a2){double _n_x_32985=_a0;
double _n_y_32986=_a1;
double _n_period_32987=_a2;
{
double _n_xi_32988=std::floor(_n_x_32985);
double _n_yi_32989=std::floor(_n_y_32986);
double _n_fx_32990=(_n_x_32985-_n_xi_32988);
double _n_fy_32991=(_n_y_32986-_n_yi_32989);
double _n_u_32992=((_n_fx_32990*_n_fx_32990)*(3.0-(2.0*_n_fx_32990)));
double _n_v_32993=((_n_fy_32991*_n_fy_32991)*(3.0-(2.0*_n_fy_32991)));
double _n_x0_32994=_n_xi_32988;
double _n_x1_32995=(_n_xi_32988+1.0);
if(d::truth(_n_period_32987)){d::check_cancel();(void)((_n_x0_32994=d::mod((d::mod(_n_xi_32988,_n_period_32987)+_n_period_32987),_n_period_32987)));
(void)((_n_x1_32995=d::mod((_n_x0_32994+1.0),_n_period_32987)));
}
double _n_a_32996=_n_hash_32899(_n_x0_32994,_n_yi_32989);
double _n_b_32997=_n_hash_32899(_n_x1_32995,_n_yi_32989);
double _n_c_32998=_n_hash_32899(_n_x0_32994,(_n_yi_32989+1.0));
double _n_d_32999=_n_hash_32899(_n_x1_32995,(_n_yi_32989+1.0));
return (((_n_a_32996+((_n_b_32997-_n_a_32996)*_n_u_32992))+((_n_c_32998-_n_a_32996)*_n_v_32993))+(((((_n_a_32996-_n_b_32997)-_n_c_32998)+_n_d_32999)*_n_u_32992)*_n_v_32993));

}
}

double _n_fbm_32901(double _a0,double _a1,double _a2,double _a3){double _n_x_33000=_a0;
double _n_y_33001=_a1;
double _n_octaves_33002=_a2;
double _n_period_33003=_a3;
{
double _n_s_33004=0.0;
double _n_n_33005=0.0;
double _n_amp_33006=0.5;
double _n_f_33007=1.0;
{double _n_i_33008=0.0;
for(;d::truth((_n_i_33008<_n_octaves_33002));(void)((_n_i_33008++))){d::check_cancel();(void)((_n_s_33004=(_n_s_33004+(_n_amp_33006*_n_noise_32900((_n_x_33000*_n_f_33007),(_n_y_33001*_n_f_33007),(_n_period_33003*_n_f_33007))))));
(void)((_n_n_33005=(_n_n_33005+_n_amp_33006)));
(void)((_n_amp_33006=(_n_amp_33006*0.5)));
(void)((_n_f_33007=(_n_f_33007*2.0)));
}}
return (_n_s_33004/_n_n_33005);

}
}

double _n_endGlow_32903(double _a0,double _a1){double _n_x_33009=_a0;
double _n_y_33010=_a1;
{
double _n_d_33011=d::hypot(std::initializer_list<double>{((_n_x_33009-_n_VX_32858)*0.9),(((_n_y_33010-_n_HY_32859)+2.0)*1.25)});
return ([&](){auto _n_left_33637=([&](){auto _n_left_33639=(std::exp(((-d::number(_n_d_33011))/6.5))*0.95);auto _n_right_33640=(std::exp(((-d::number(_n_d_33011))/16.0))*0.26);return (_n_left_33639+_n_right_33640);})();auto _n_right_33638=(std::exp(((-d::number(_n_d_33011))/45.0))*0.08);return (_n_left_33637+_n_right_33638);})();

}
}

double _n_clamp_32904(double _a0){double _n_v_33012=_a0;
return (d::truth((_n_v_33012<0.0))?0.0:(d::truth((_n_v_33012>1.0))?1.0:_n_v_33012));}

double _n_smooth_32905(double _a0,double _a1,double _a2){double _n_a_33013=_a0;
double _n_b_33014=_a1;
double _n_v_33015=_a2;
{
double _n_k_33016=_n_clamp_32904(((_n_v_33015-_n_a_33013)/(_n_b_33014-_n_a_33013)));
return ((_n_k_33016*_n_k_33016)*(3.0-(2.0*_n_k_33016)));

}
}

double _n_mix_32906(double _a0,double _a1,double _a2){double _n_a_33017=_a0;
double _n_b_33018=_a1;
double _n_k_33019=_a2;
return (_n_a_33017+((_n_b_33018-_n_a_33017)*_n_k_33019));}

d::Array<double,false> _n_hex_32907(d::String _a0){d::String _n_s_33020=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_33021=_a0;
return (([&](){auto _n_argument_33641=d::slice(_n_s_33020,_n_i_33021,(_n_i_33021+2.0));auto _n_argument_33642=16.0;return d::parseInt(_n_argument_33641,_n_argument_33642);})()/255.0);});}

double _n_walkerShape_32908(double _a0,double _a1,double _a2){double _n_u_33022=_a0;
double _n_v_33023=_a1;
double _n_ph_33024=_a2;
{
(void)((_n_v_33023=(_n_v_33023-(0.014*std::fabs(std::cos(_n_ph_33024))))));
double _n_R_33025=0.56;
double _n_RIM_33026=1.74;
if(d::truth((_n_v_33023>(_n_RIM_33026-0.07)))){d::check_cancel();double _n_q_33027=(_n_u_33022/_n_R_33025);
if((d::truth((_n_q_33027>(-d::number(1.0))))&&d::truth((_n_q_33027<1.0)))){d::check_cancel();double _n_top_33028=(_n_RIM_33026+(0.4*std::sqrt((1.0-(_n_q_33027*_n_q_33027)))));
double _n_bottom_33029=(_n_RIM_33026-(0.05*std::fabs(std::cos(((_n_q_33027*2.5)*ascii::PI)))));
if((d::truth((_n_v_33023<=_n_top_33028))&&d::truth((_n_v_33023>=_n_bottom_33029)))){d::check_cancel();return (d::truth((_n_v_33023>(_n_top_33028-0.06)))?2.0:3.0);
}
}
if(((d::truth((_n_u_33022>(-d::number(0.03))))&&d::truth((_n_u_33022<0.03)))&&d::truth((_n_v_33023<(_n_RIM_33026+0.5))))){d::check_cancel();return 3.0;
}
}
double _n_hy_33030=((_n_v_33023-1.6)/0.125);
double _n_hx_33031=(_n_u_33022/0.1);
if(d::truth((((_n_hx_33031*_n_hx_33031)+(_n_hy_33030*_n_hy_33030))<1.0))){d::check_cancel();return 1.0;
}
if((d::truth((_n_v_33023>=0.5))&&d::truth((_n_v_33023<=1.48)))){d::check_cancel();double _n_hw_33032=(d::truth((_n_v_33023>1.36))?(0.2*std::sqrt((1.0-std::pow(((_n_v_33023-1.36)/0.12),2.0)))):(0.18+(0.035*_n_smooth_32905(0.85,0.5,_n_v_33023))));
if((d::truth((_n_u_33022>(-d::number(_n_hw_33032))))&&d::truth((_n_u_33022<_n_hw_33032)))){d::check_cancel();return 1.0;
}
}
if((((d::truth((_n_v_33023>1.2))&&d::truth((_n_v_33023<_n_RIM_33026)))&&d::truth((_n_u_33022>0.01)))&&d::truth((_n_u_33022<0.07)))){d::check_cancel();return 1.0;
}
{double _n_i_33033=(-d::number(1.0));
for(;d::truth((_n_i_33033<=1.0));(void)((_n_i_33033=(_n_i_33033+2.0)))){d::check_cancel();double _n_lift_33034=(0.09*([&](){auto _n_argument_33643=0.0;auto _n_argument_33644=std::sin((_n_ph_33024+(d::truth((_n_i_33033>0.0))?ascii::PI:0.0)));return d::maximum({_n_argument_33643,_n_argument_33644});})());
double _n_lx_33035=(_n_u_33022-(_n_i_33033*0.075));
if((((d::truth((_n_v_33023>=_n_lift_33034))&&d::truth((_n_v_33023<0.62)))&&d::truth((_n_lx_33035>(-d::number(0.055)))))&&d::truth((_n_lx_33035<0.055)))){d::check_cancel();return 1.0;
}
}}
return 0.0;

}
}

struct Native_tokyo_rain final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_32909{};
double _n_N_32910{};
d::Array<d::String,false> _n_out_32911{};
d::Array<uint8_t,true> _n_lut_32912{};
d::Array<uint8_t,true> _n_mat_32914{};
d::Array<float,true> _n_S_32915{};
d::Array<float,true> _n_ER_32916{};
d::Array<float,true> _n_EG_32917{};
d::Array<float,true> _n_EB_32918{};
d::Array<float,true> _n_AR_32919{};
d::Array<float,true> _n_AG_32920{};
d::Array<float,true> _n_AB_32921{};
d::Array<float,true> _n_KG_32922{};
d::Array<uint8_t,true> _n_grp_32923{};
d::Array<float,true> _n_SR_32924{};
d::Array<float,true> _n_SG_32925{};
d::Array<float,true> _n_SB_32926{};
d::Array<float,true> _n_wet_32927{};
d::Array<float,true> _n_wallS_32930{};
d::Array<float,true> _n_roofY_32931{};
d::Array<float,true> _n_bareY_32932{};
d::Array<float,true> _n_baseY_32933{};
d::Array<int8_t,true> _n_colI_32934{};
d::Array<float,true> _n_colH_32935{};
d::Array<uint8_t,true> _n_tankCol_32936{};
double _n_towerTop_32937{};
d::Array<d::Array<double,false>,false> _n_bulbs_32938{};
d::Array<double,false> _n_order_32939{};
d::Array<float,true> _n_LR_32941{};
d::Array<float,true> _n_LG_32942{};
d::Array<float,true> _n_LB_32943{};
d::Array<float,true> _n_fog_32946{};
d::Array<float,true> _n_HZR_32947{};
d::Array<float,true> _n_HZG_32948{};
d::Array<float,true> _n_HZB_32949{};
double _n_XH_32951{};
d::Array<float,true> _n_CR_32953{};
d::Array<float,true> _n_CG_32954{};
d::Array<float,true> _n_CB_32955{};
d::Array<float,true> _n_GR_32956{};
d::Array<float,true> _n_GG_32957{};
d::Array<float,true> _n_GB_32958{};
d::Array<float,true> _n_RR_32959{};
d::Array<float,true> _n_RG_32960{};
d::Array<float,true> _n_RB_32961{};
double _n_NG_32962{};
d::Array<std::shared_ptr<std::tuple<d::Array<int32_t,true>,d::Array<float,true>>>,false> _n_dropC_32963{};
d::Array<d::Array<d::Array<float,true>,false>,false> _n_dropR_32964{};
d::Array<double,false> _n_road_32965{};
d::Array<int32_t,true> _n_roadK_32966{};
d::Array<double,false> _n_sky_32967{};
d::Array<int32_t,true> _n_skyK_32968{};
double _n_CW_32969{};
d::Array<float,true> _n_cloud_32970{};
d::Array<d::Array<double,false>,false> _n_LAYERS_32971{};
d::Array<d::Array<double,false>,false> _n_drops_32972{};
d::Array<float,true> _n_FR_32973{};
d::Array<float,true> _n_FG_32974{};
d::Array<float,true> _n_FB_32975{};
d::Array<float,true> _n_rain_32976{};
d::Array<float,true> _n_hold_32977{};
std::function<d::String(double,std::shared_ptr<_n_Record_33590>)> _render;
double _n_nearest_32913(double _a0,double _a1,double _a2){double _n_r_33036=_a0;
double _n_g_33037=_a1;
double _n_b_33038=_a2;
{
double _n_k_33039=([&](){auto _n_left_34116=([&](){auto _n_left_34118=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_33036*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_34119=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_33037*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_34118)|d::i32(_n_right_34119));})();auto _n_right_34117=d::minimum({31.0,double(d::i32((_n_b_33038*31.99))|d::i32(0.0))});return double(d::i32(_n_left_34116)|d::i32(_n_right_34117));})();
if(d::truth((d::at(this->_n_lut_32912,_n_k_33039)!=255.0))){d::check_cancel();return d::at(this->_n_lut_32912,_n_k_33039);
}
double _n_best_33040=0.0;
double _n_bd_33041=1000000000.0;
{double _n_i_33042=0.0;
for(;d::truth((_n_i_33042<double(this->_n_P_32909.size())));(void)((_n_i_33042++))){d::check_cancel();double _n_dr_33043=(d::at(d::at(this->_n_P_32909,_n_i_33042),0.0)-_n_r_33036);
double _n_dg_33044=(d::at(d::at(this->_n_P_32909,_n_i_33042),1.0)-_n_g_33037);
double _n_db_33045=(d::at(d::at(this->_n_P_32909,_n_i_33042),2.0)-_n_b_33038);
double _n_d_33046=((((0.3*_n_dr_33043)*_n_dr_33043)+((0.5*_n_dg_33044)*_n_dg_33044))+((0.2*_n_db_33045)*_n_db_33045));
if(d::truth((_n_d_33046<_n_bd_33041))){d::check_cancel();(void)(((_n_bd_33041=_n_d_33046),(_n_best_33040=_n_i_33042)));
}
}}
return ([&](){auto&& _n_array_34120=this->_n_lut_32912;auto _n_index_34121=_n_k_33039;auto _n_value_34122=_n_best_33040;d::put(_n_array_34120,_n_index_34121,_n_value_34122);return _n_value_34122;})();

}
}

void _n_emit_32928(double _a0,double _a1,double _a2,double _a3){double _n_k_33047=_a0;
double _n_r_33048=_a1;
double _n_g_33049=_a2;
double _n_b_33050=_a3;
{
(void)((((((([&](){auto&& _n_array_34123=this->_n_ER_32916;auto _n_index_34124=_n_k_33047;auto _n_value_34125=_n_r_33048;d::put(_n_array_34123,_n_index_34124,_n_value_34125);return _n_value_34125;})(),([&](){auto&& _n_array_34126=this->_n_EG_32917;auto _n_index_34127=_n_k_33047;auto _n_value_34128=_n_g_33049;d::put(_n_array_34126,_n_index_34127,_n_value_34128);return _n_value_34128;})()),([&](){auto&& _n_array_34129=this->_n_EB_32918;auto _n_index_34130=_n_k_33047;auto _n_value_34131=_n_b_33050;d::put(_n_array_34129,_n_index_34130,_n_value_34131);return _n_value_34131;})()),([&](){auto&& _n_array_34132=this->_n_AR_32919;auto _n_index_34133=_n_k_33047;auto _n_value_34134=0.0;d::put(_n_array_34132,_n_index_34133,_n_value_34134);return _n_value_34134;})()),([&](){auto&& _n_array_34135=this->_n_AG_32920;auto _n_index_34136=_n_k_33047;auto _n_value_34137=0.0;d::put(_n_array_34135,_n_index_34136,_n_value_34137);return _n_value_34137;})()),([&](){auto&& _n_array_34138=this->_n_AB_32921;auto _n_index_34139=_n_k_33047;auto _n_value_34140=0.0;d::put(_n_array_34138,_n_index_34139,_n_value_34140);return _n_value_34140;})()));

}
}

void _n_surface_32929(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_k_33051=_a0;
double _n_r_33052=_a1;
double _n_g_33053=_a2;
double _n_b_33054=_a3;
double _n_kg_33055=_a4;
{
(void)(((((((([&](){auto&& _n_array_34141=this->_n_ER_32916;auto _n_index_34142=_n_k_33051;auto _n_value_34143=0.0;d::put(_n_array_34141,_n_index_34142,_n_value_34143);return _n_value_34143;})(),([&](){auto&& _n_array_34144=this->_n_EG_32917;auto _n_index_34145=_n_k_33051;auto _n_value_34146=0.0;d::put(_n_array_34144,_n_index_34145,_n_value_34146);return _n_value_34146;})()),([&](){auto&& _n_array_34147=this->_n_EB_32918;auto _n_index_34148=_n_k_33051;auto _n_value_34149=0.0;d::put(_n_array_34147,_n_index_34148,_n_value_34149);return _n_value_34149;})()),([&](){auto&& _n_array_34150=this->_n_AR_32919;auto _n_index_34151=_n_k_33051;auto _n_value_34152=_n_r_33052;d::put(_n_array_34150,_n_index_34151,_n_value_34152);return _n_value_34152;})()),([&](){auto&& _n_array_34153=this->_n_AG_32920;auto _n_index_34154=_n_k_33051;auto _n_value_34155=_n_g_33053;d::put(_n_array_34153,_n_index_34154,_n_value_34155);return _n_value_34155;})()),([&](){auto&& _n_array_34156=this->_n_AB_32921;auto _n_index_34157=_n_k_33051;auto _n_value_34158=_n_b_33054;d::put(_n_array_34156,_n_index_34157,_n_value_34158);return _n_value_34158;})()),([&](){auto&& _n_array_34159=this->_n_KG_32922;auto _n_index_34160=_n_k_33051;auto _n_value_34161=_n_kg_33055;d::put(_n_array_34159,_n_index_34160,_n_value_34161);return _n_value_34161;})()));

}
}

void _n_lantern_32940(double _a0,double _a1,std::function<void(double,double,double,double)> _a2){double _n_li_33297=_a0;
double _n_swing_33298=_a1;
std::function<void(double,double,double,double)> _n_put_33299=_a2;
{
auto _n_binding_34162=d::at(_n_LANTERNS_32897,_n_li_33297);
double _n_s_33304=d::at(_n_binding_34162,0.0);
double _n_lx_33305=d::at(_n_binding_34162,1.0);
double _n_lh_33306=d::at(_n_binding_34162,2.0);
double _n_xc_33307=(_n_VX_32858+(_n_lx_33305*_n_s_33304));
double _n_yc_33308=(_n_HY_32859-((_n_lh_33306-_n_EYE_32861)*_n_s_33304));
double _n_top_33309=(_n_HY_32859-(((_n_lh_33306+0.62)-_n_EYE_32861)*_n_s_33304));
{double _n_r_33310=([&](){auto _n_argument_34163=0.0;auto _n_argument_34164=std::floor(_n_top_33309);return d::maximum({_n_argument_34163,_n_argument_34164});})();
for(;d::truth((_n_r_33310<([&](){auto _n_argument_34165=_n_H_32857;auto _n_argument_34166=std::ceil((_n_yc_33308+(0.48*_n_s_33304)));return d::minimum({_n_argument_34165,_n_argument_34166});})()));(void)((_n_r_33310++))){d::check_cancel();double _n_y_33311=(_n_r_33310+0.5);
double _n_v_33312=((_n_yc_33308-_n_y_33311)/_n_s_33304);
double _n_off_33313=(_n_swing_33298*(0.62-_n_v_33312));
{double _n_x_33314=std::floor(((_n_xc_33307-(0.36*_n_s_33304))-1.0));
for(;d::truth((_n_x_33314<=std::ceil(((_n_xc_33307+(0.36*_n_s_33304))+1.0))));(void)((_n_x_33314++))){d::check_cancel();if((d::truth((_n_x_33314<0.0))||d::truth((_n_x_33314>=_n_W_32856)))){d::check_cancel();continue;
}
double _n_u_33315=((((_n_x_33314+0.5)-_n_xc_33307)/_n_s_33304)-_n_off_33313);
double _n_k_33316=((_n_r_33310*_n_W_32856)+_n_x_33314);
if(d::truth((_n_v_33312>0.44))){d::check_cancel();if(d::truth((std::fabs(_n_u_33315)<(0.5/_n_s_33304)))){d::check_cancel();(void)(_n_put_33299(_n_k_33316,0.04,0.02,0.02));
}
continue;
}
if(d::truth((_n_v_33312<(-d::number(0.44))))){d::check_cancel();continue;
}
if(d::truth((std::fabs(_n_v_33312)>0.38))){d::check_cancel();if(d::truth((std::fabs(_n_u_33315)<0.15))){d::check_cancel();(void)(_n_put_33299(_n_k_33316,0.06,0.02,0.02));
}
continue;
}
double _n_hw_33317=(0.26*std::sqrt((1.0-std::pow((_n_v_33312/0.46),2.0))));
if(d::truth((std::fabs(_n_u_33315)>_n_hw_33317))){d::check_cancel();continue;
}
double _n_q_33318=(_n_u_33315/_n_hw_33317);
double _n_b_33319=(0.6+(0.4*(1.0-(_n_q_33318*_n_q_33318))));
if(d::truth((d::mod((_n_v_33312+0.38),0.095)<0.024))){d::check_cancel();(void)((_n_b_33319=(_n_b_33319*0.5)));
}
bool _n_letter_33320=([&]()->bool{auto _n_logical_34167=(std::fabs(_n_v_33312)<0.24);return d::truth(_n_logical_34167)?([&]()->bool{auto _n_logical_34168=(std::fabs(_n_u_33315)<0.02);return d::truth(_n_logical_34168)?_n_logical_34168:([&]()->bool{auto _n_logical_34169=(std::fabs(_n_u_33315)<0.08);return d::truth(_n_logical_34169)?(d::mod((_n_v_33312+0.24),0.12)<0.03):_n_logical_34169;})();})():_n_logical_34167;})();
if(d::truth(_n_letter_33320)){d::check_cancel();(void)((_n_b_33319=(_n_b_33319*0.12)));
}
(void)(_n_put_33299(_n_k_33316,_n_b_33319,(_n_b_33319*0.27),(_n_b_33319*0.11)));
}}
}}

}
}

d::Array<float,true> _n_blur_32944(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_src_33326=_a0;
double _n_rad_33327=_a1;
double _n_passes_33328=_a2;
{
d::Array<float,true> _n_a_33329=_n_src_33326.slice();
d::Array<float,true> _n_b_33330=d::Array<float,true>(size_t(this->_n_N_32910));
d::Array<float,true> _n_pre_33331=d::Array<float,true>(size_t((d::maximum({_n_W_32856,_n_H_32857})+1.0)));
double _n_n_33332=((2.0*_n_rad_33327)+1.0);
{double _n_p_33333=0.0;
for(;d::truth((_n_p_33333<_n_passes_33328));(void)((_n_p_33333++))){d::check_cancel();{double _n_r_33334=0.0;
for(;d::truth((_n_r_33334<_n_H_32857));(void)((_n_r_33334++))){d::check_cancel();{double _n_x_33335=0.0;
for(;d::truth((_n_x_33335<_n_W_32856));(void)((_n_x_33335++))){d::check_cancel();(void)(([&](){auto&& _n_array_34170=_n_pre_33331;auto _n_index_34171=(_n_x_33335+1.0);auto _n_value_34172=(d::at(_n_pre_33331,_n_x_33335)+d::at(_n_a_33329,((_n_r_33334*_n_W_32856)+_n_x_33335)));d::put(_n_array_34170,_n_index_34171,_n_value_34172);return _n_value_34172;})());
}}
{double _n_x_33336=0.0;
for(;d::truth((_n_x_33336<_n_W_32856));(void)((_n_x_33336++))){d::check_cancel();(void)(([&](){auto&& _n_array_34173=_n_b_33330;auto _n_index_34174=((_n_r_33334*_n_W_32856)+_n_x_33336);auto _n_value_34175=(([&](){auto _n_left_34176=d::at(_n_pre_33331,d::minimum({_n_W_32856,((_n_x_33336+_n_rad_33327)+1.0)}));auto _n_right_34177=d::at(_n_pre_33331,d::maximum({0.0,(_n_x_33336-_n_rad_33327)}));return (_n_left_34176-_n_right_34177);})()/_n_n_33332);d::put(_n_array_34173,_n_index_34174,_n_value_34175);return _n_value_34175;})());
}}
}}
{double _n_x_33337=0.0;
for(;d::truth((_n_x_33337<_n_W_32856));(void)((_n_x_33337++))){d::check_cancel();{double _n_r_33338=0.0;
for(;d::truth((_n_r_33338<_n_H_32857));(void)((_n_r_33338++))){d::check_cancel();(void)(([&](){auto&& _n_array_34178=_n_pre_33331;auto _n_index_34179=(_n_r_33338+1.0);auto _n_value_34180=(d::at(_n_pre_33331,_n_r_33338)+d::at(_n_b_33330,((_n_r_33338*_n_W_32856)+_n_x_33337)));d::put(_n_array_34178,_n_index_34179,_n_value_34180);return _n_value_34180;})());
}}
{double _n_r_33339=0.0;
for(;d::truth((_n_r_33339<_n_H_32857));(void)((_n_r_33339++))){d::check_cancel();(void)(([&](){auto&& _n_array_34181=_n_a_33329;auto _n_index_34182=((_n_r_33339*_n_W_32856)+_n_x_33337);auto _n_value_34183=(([&](){auto _n_left_34184=d::at(_n_pre_33331,d::minimum({_n_H_32857,((_n_r_33339+_n_rad_33327)+1.0)}));auto _n_right_34185=d::at(_n_pre_33331,d::maximum({0.0,(_n_r_33339-_n_rad_33327)}));return (_n_left_34184-_n_right_34185);})()/_n_n_33332);d::put(_n_array_34181,_n_index_34182,_n_value_34183);return _n_value_34183;})());
}}
}}
}}
return _n_a_33329;

}
}

d::Array<float,true> _n_glow_32945(d::Array<float,true> _a0){d::Array<float,true> _n_e_33340=_a0;
{
d::Array<float,true> _n_a_33341=this->_n_blur_32944(_n_e_33340,2.0,2.0);
d::Array<float,true> _n_b_33342=this->_n_blur_32944(_n_e_33340,6.0,3.0);
d::Array<float,true> _n_c_33343=this->_n_blur_32944(_n_e_33340,20.0,2.0);
{double _n_k_33344=0.0;
for(;d::truth((_n_k_33344<this->_n_N_32910));(void)((_n_k_33344++))){d::check_cancel();(void)(([&](){auto&& _n_array_34186=_n_a_33341;auto _n_index_34187=_n_k_33344;auto _n_value_34188=(((d::at(_n_a_33341,_n_k_33344)*0.5)+(d::at(_n_b_33342,_n_k_33344)*1.0))+(d::at(_n_c_33343,_n_k_33344)*0.22));d::put(_n_array_34186,_n_index_34187,_n_value_34188);return _n_value_34188;})());
}}
return _n_a_33341;

}
}

d::Array<d::Array<float,true>,false> _n_shade_32950(d::Array<float,true> _a0,d::Array<float,true> _a1,d::Array<float,true> _a2){d::Array<float,true> _n_er_33350=_a0;
d::Array<float,true> _n_eg_33351=_a1;
d::Array<float,true> _n_eb_33352=_a2;
{
d::Array<float,true> _n_gr_33353=this->_n_glow_32945(d::map(_n_er_33350,[&]( double _a0,double _a1) mutable ->double{double _n_v_33354=_a0;
double _n_k_33355=_a1;
return (_n_v_33354+d::at(this->_n_LR_32941,_n_k_33355));}));
d::Array<float,true> _n_gg_33356=this->_n_glow_32945(d::map(_n_eg_33351,[&]( double _a0,double _a1) mutable ->double{double _n_v_33357=_a0;
double _n_k_33358=_a1;
return (_n_v_33357+d::at(this->_n_LG_32942,_n_k_33358));}));
d::Array<float,true> _n_gb_33359=this->_n_glow_32945(d::map(_n_eb_33352,[&]( double _a0,double _a1) mutable ->double{double _n_v_33360=_a0;
double _n_k_33361=_a1;
return (_n_v_33360+d::at(this->_n_LB_32943,_n_k_33361));}));
d::Array<float,true> _n_cr_33362=d::Array<float,true>(size_t(this->_n_N_32910));
d::Array<float,true> _n_cg_33363=d::Array<float,true>(size_t(this->_n_N_32910));
d::Array<float,true> _n_cb_33364=d::Array<float,true>(size_t(this->_n_N_32910));
{double _n_k_33365=0.0;
for(;d::truth((_n_k_33365<this->_n_N_32910));(void)((_n_k_33365++))){d::check_cancel();double _n_m_33366=d::at(this->_n_mat_32914,_n_k_33365);
double _n_r_33367{};
double _n_g_33368{};
double _n_b_33369{};
if((d::truth((_n_m_33366==_n_SKY_32869))||d::truth((_n_m_33366==_n_WIRE_32876)))){d::check_cancel();(void)((((_n_r_33367=(d::at(this->_n_SR_32924,_n_k_33365)+(d::at(_n_gr_33353,_n_k_33365)*0.06))),(_n_g_33368=(d::at(this->_n_SG_32925,_n_k_33365)+(d::at(_n_gg_33356,_n_k_33365)*0.06)))),(_n_b_33369=(d::at(this->_n_SB_32926,_n_k_33365)+(d::at(_n_gb_33359,_n_k_33365)*0.06)))));
if(d::truth((_n_m_33366==_n_WIRE_32876))){d::check_cancel();(void)((((_n_r_33367=((_n_r_33367*0.3)+(d::at(_n_gr_33353,_n_k_33365)*0.3))),(_n_g_33368=((_n_g_33368*0.3)+(d::at(_n_gg_33356,_n_k_33365)*0.3)))),(_n_b_33369=((_n_b_33369*0.3)+(d::at(_n_gb_33359,_n_k_33365)*0.3)))));
}
}else {d::check_cancel();double _n_kg_33370=((d::at(this->_n_KG_32922,_n_k_33365)+(d::truth((_n_m_33366==_n_SIGN_32872))?0.05:0.0))*2.4);
(void)((((_n_r_33367=(d::at(_n_er_33350,_n_k_33365)+(d::at(this->_n_AR_32919,_n_k_33365)*(0.06+(d::at(_n_gr_33353,_n_k_33365)*_n_kg_33370))))),(_n_g_33368=(d::at(_n_eg_33351,_n_k_33365)+(d::at(this->_n_AG_32920,_n_k_33365)*(0.05+(d::at(_n_gg_33356,_n_k_33365)*_n_kg_33370)))))),(_n_b_33369=(d::at(_n_eb_33352,_n_k_33365)+(d::at(this->_n_AB_32921,_n_k_33365)*(0.09+(d::at(_n_gb_33359,_n_k_33365)*_n_kg_33370)))))));
double _n_f_33371=d::at(this->_n_fog_32946,_n_k_33365);
(void)((((_n_r_33367=_n_mix_32906(_n_r_33367,(d::at(this->_n_HZR_32947,_n_k_33365)+(d::at(_n_gr_33353,_n_k_33365)*0.3)),_n_f_33371)),(_n_g_33368=_n_mix_32906(_n_g_33368,(d::at(this->_n_HZG_32948,_n_k_33365)+(d::at(_n_gg_33356,_n_k_33365)*0.3)),_n_f_33371))),(_n_b_33369=_n_mix_32906(_n_b_33369,(d::at(this->_n_HZB_32949,_n_k_33365)+(d::at(_n_gb_33359,_n_k_33365)*0.3)),_n_f_33371))));
}
(void)(((([&](){auto&& _n_array_34189=_n_cr_33362;auto _n_index_34190=_n_k_33365;auto _n_value_34191=_n_r_33367;d::put(_n_array_34189,_n_index_34190,_n_value_34191);return _n_value_34191;})(),([&](){auto&& _n_array_34192=_n_cg_33363;auto _n_index_34193=_n_k_33365;auto _n_value_34194=_n_g_33368;d::put(_n_array_34192,_n_index_34193,_n_value_34194);return _n_value_34194;})()),([&](){auto&& _n_array_34195=_n_cb_33364;auto _n_index_34196=_n_k_33365;auto _n_value_34197=_n_b_33369;d::put(_n_array_34195,_n_index_34196,_n_value_34197);return _n_value_34197;})()));
}}
return d::Array<d::Array<float,true>,false>{_n_cr_33362,_n_cg_33363,_n_cb_33364,_n_gr_33353,_n_gg_33356,_n_gb_33359};

}
}

d::Array<d::Array<float,true>,false> _n_mirror_32952(d::Array<float,true> _a0,d::Array<float,true> _a1,d::Array<float,true> _a2){d::Array<float,true> _n_cr_33372=_a0;
d::Array<float,true> _n_cg_33373=_a1;
d::Array<float,true> _n_cb_33374=_a2;
{
d::Array<float,true> _n_xr_33375=d::Array<float,true>(size_t((_n_W_32856*this->_n_XH_32951)));
d::Array<float,true> _n_xg_33376=d::Array<float,true>(size_t((_n_W_32856*this->_n_XH_32951)));
d::Array<float,true> _n_xb_33377=d::Array<float,true>(size_t((_n_W_32856*this->_n_XH_32951)));
d::Array<float,true> _n_xd_33378=d::Array<float,true>(size_t((_n_W_32856*this->_n_XH_32951))).fill((-d::number(1.0)));
{double _n_k_33379=0.0;
for(;d::truth((_n_k_33379<this->_n_N_32910));(void)((_n_k_33379++))){d::check_cancel();double _n_m_33380=d::at(this->_n_mat_32914,_n_k_33379);
if(d::truth((_n_m_33380==_n_ROAD_32871))){d::check_cancel();continue;
}
double _n_x_33381=d::mod(_n_k_33379,_n_W_32856);
double _n_r_33382=double(d::i32((_n_k_33379/_n_W_32856))|d::i32(0.0));
double _n_s_33383=d::at(this->_n_S_32915,_n_k_33379);
double _n_rr_33384=std::floor(((((2.0*_n_HY_32859)+((2.0*_n_EYE_32861)*_n_s_33383))-_n_r_33382)-0.5));
if(((d::truth((_n_rr_33384<_n_HY_32859))||d::truth((_n_rr_33384>=this->_n_XH_32951)))||d::truth(([&]()->bool{auto _n_logical_34198=(_n_rr_33384<_n_H_32857);return d::truth(_n_logical_34198)?(d::at(this->_n_mat_32914,((_n_rr_33384*_n_W_32856)+_n_x_33381))!=_n_ROAD_32871):_n_logical_34198;})()))){d::check_cancel();continue;
}
double _n_q_33385=((_n_rr_33384*_n_W_32856)+_n_x_33381);
if(d::truth((_n_s_33383<=d::at(_n_xd_33378,_n_q_33385)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_34199=_n_xd_33378;auto _n_index_34200=_n_q_33385;auto _n_value_34201=_n_s_33383;d::put(_n_array_34199,_n_index_34200,_n_value_34201);return _n_value_34201;})());
double _n_f_33386=d::at(_n_GIVE_32878,_n_m_33380);
(void)(((([&](){auto&& _n_array_34202=_n_xr_33375;auto _n_index_34203=_n_q_33385;auto _n_value_34204=(d::at(_n_cr_33372,_n_k_33379)*_n_f_33386);d::put(_n_array_34202,_n_index_34203,_n_value_34204);return _n_value_34204;})(),([&](){auto&& _n_array_34205=_n_xg_33376;auto _n_index_34206=_n_q_33385;auto _n_value_34207=(d::at(_n_cg_33373,_n_k_33379)*_n_f_33386);d::put(_n_array_34205,_n_index_34206,_n_value_34207);return _n_value_34207;})()),([&](){auto&& _n_array_34208=_n_xb_33377;auto _n_index_34209=_n_q_33385;auto _n_value_34210=(d::at(_n_cb_33374,_n_k_33379)*_n_f_33386);d::put(_n_array_34208,_n_index_34209,_n_value_34210);return _n_value_34210;})()));
}}
d::Array<float,true> _n_rr_33387=d::Array<float,true>(size_t(this->_n_N_32910));
d::Array<float,true> _n_rg_33388=d::Array<float,true>(size_t(this->_n_N_32910));
d::Array<float,true> _n_rb_33389=d::Array<float,true>(size_t(this->_n_N_32910));
{double _n_x_33390=0.0;
for(;d::truth((_n_x_33390<_n_W_32856));(void)((_n_x_33390++))){d::check_cancel();{double _n_r_33391=(_n_HY_32859+1.0);
for(;d::truth((_n_r_33391<this->_n_XH_32951));(void)((_n_r_33391++))){d::check_cancel();double _n_q_33392=((_n_r_33391*_n_W_32856)+_n_x_33390);
if((d::truth((d::at(_n_xd_33378,_n_q_33392)<0.0))&&d::truth((d::at(_n_xd_33378,(_n_q_33392-_n_W_32856))>=0.0)))){d::check_cancel();(void)((((([&](){auto&& _n_array_34211=_n_xr_33375;auto _n_index_34212=_n_q_33392;auto _n_value_34213=d::at(_n_xr_33375,(_n_q_33392-_n_W_32856));d::put(_n_array_34211,_n_index_34212,_n_value_34213);return _n_value_34213;})(),([&](){auto&& _n_array_34214=_n_xg_33376;auto _n_index_34215=_n_q_33392;auto _n_value_34216=d::at(_n_xg_33376,(_n_q_33392-_n_W_32856));d::put(_n_array_34214,_n_index_34215,_n_value_34216);return _n_value_34216;})()),([&](){auto&& _n_array_34217=_n_xb_33377;auto _n_index_34218=_n_q_33392;auto _n_value_34219=d::at(_n_xb_33377,(_n_q_33392-_n_W_32856));d::put(_n_array_34217,_n_index_34218,_n_value_34219);return _n_value_34219;})()),([&](){auto&& _n_array_34220=_n_xd_33378;auto _n_index_34221=_n_q_33392;auto _n_value_34222=0.0;d::put(_n_array_34220,_n_index_34221,_n_value_34222);return _n_value_34222;})()));
}
}}
double _n_ur_33393=0.0;
double _n_ug_33394=0.0;
double _n_ub_33395=0.0;
double _n_dr_33396=0.0;
double _n_dg_33397=0.0;
double _n_db_33398=0.0;
d::Array<float,true> _n_upR_33399=d::Array<float,true>(size_t(this->_n_XH_32951));
d::Array<float,true> _n_upG_33400=d::Array<float,true>(size_t(this->_n_XH_32951));
d::Array<float,true> _n_upB_33401=d::Array<float,true>(size_t(this->_n_XH_32951));
{double _n_r_33402=(this->_n_XH_32951-1.0);
for(;d::truth((_n_r_33402>=_n_HY_32859));(void)((_n_r_33402--))){d::check_cancel();double _n_q_33403=((_n_r_33402*_n_W_32856)+_n_x_33390);
(void)((((_n_ur_33393=((_n_ur_33393*0.96)+(d::at(_n_xr_33375,_n_q_33403)*0.04))),(_n_ug_33394=((_n_ug_33394*0.96)+(d::at(_n_xg_33376,_n_q_33403)*0.04)))),(_n_ub_33395=((_n_ub_33395*0.96)+(d::at(_n_xb_33377,_n_q_33403)*0.04)))));
(void)(((([&](){auto&& _n_array_34223=_n_upR_33399;auto _n_index_34224=_n_r_33402;auto _n_value_34225=_n_ur_33393;d::put(_n_array_34223,_n_index_34224,_n_value_34225);return _n_value_34225;})(),([&](){auto&& _n_array_34226=_n_upG_33400;auto _n_index_34227=_n_r_33402;auto _n_value_34228=_n_ug_33394;d::put(_n_array_34226,_n_index_34227,_n_value_34228);return _n_value_34228;})()),([&](){auto&& _n_array_34229=_n_upB_33401;auto _n_index_34230=_n_r_33402;auto _n_value_34231=_n_ub_33395;d::put(_n_array_34229,_n_index_34230,_n_value_34231);return _n_value_34231;})()));
}}
{double _n_r_33404=_n_HY_32859;
for(;d::truth((_n_r_33404<_n_H_32857));(void)((_n_r_33404++))){d::check_cancel();double _n_q_33405=((_n_r_33404*_n_W_32856)+_n_x_33390);
(void)((((_n_dr_33396=((_n_dr_33396*0.9)+(d::at(_n_xr_33375,_n_q_33405)*0.1))),(_n_dg_33397=((_n_dg_33397*0.9)+(d::at(_n_xg_33376,_n_q_33405)*0.1)))),(_n_db_33398=((_n_db_33398*0.9)+(d::at(_n_xb_33377,_n_q_33405)*0.1)))));
if(d::truth((d::at(this->_n_mat_32914,_n_q_33405)!=_n_ROAD_32871))){d::check_cancel();continue;
}
double _n_y_33406=(_n_r_33404+0.5);
double _n_fres_33407=(0.45+(0.55*_n_smooth_32905((_n_H_32857+6.0),(_n_HY_32859+3.0),_n_y_33406)));
(void)(([&](){auto&& _n_array_34232=_n_rr_33387;auto _n_index_34233=_n_q_33405;auto _n_value_34234=((((d::at(_n_xr_33375,_n_q_33405)*0.35)+(_n_dr_33396*0.5))+(d::at(_n_upR_33399,_n_r_33404)*1.1))*_n_fres_33407);d::put(_n_array_34232,_n_index_34233,_n_value_34234);return _n_value_34234;})());
(void)(([&](){auto&& _n_array_34235=_n_rg_33388;auto _n_index_34236=_n_q_33405;auto _n_value_34237=((((d::at(_n_xg_33376,_n_q_33405)*0.35)+(_n_dg_33397*0.5))+(d::at(_n_upG_33400,_n_r_33404)*1.1))*_n_fres_33407);d::put(_n_array_34235,_n_index_34236,_n_value_34237);return _n_value_34237;})());
(void)(([&](){auto&& _n_array_34238=_n_rb_33389;auto _n_index_34239=_n_q_33405;auto _n_value_34240=((((d::at(_n_xb_33377,_n_q_33405)*0.35)+(_n_db_33398*0.5))+(d::at(_n_upB_33401,_n_r_33404)*1.1))*_n_fres_33407);d::put(_n_array_34238,_n_index_34239,_n_value_34240);return _n_value_34240;})());
}}
}}
return d::Array<d::Array<float,true>,false>{_n_rr_33387,_n_rg_33388,_n_rb_33389};

}
}

std::shared_ptr<_n_Record_32979> _n_walker_32978(double _a0){double _n_t_33446=_a0;
{
double _n_tau_33447=d::mod((d::mod((_n_t_33446+5.5),24.0)+24.0),24.0);
double _n_k_33448=_n_clamp_32904(((_n_tau_33447-3.0)/4.0));
double _n_ramp_33449=(d::truth((_n_tau_33447<3.0))?0.0:(d::truth((_n_tau_33447<7.0))?(4.0*(((_n_k_33448*_n_k_33448)*_n_k_33448)-((((_n_k_33448*_n_k_33448)*_n_k_33448)*_n_k_33448)/2.0))):((2.0+_n_tau_33447)-7.0)));
double _n_z_33450=((5.6+(0.06*_n_tau_33447))+(0.5*_n_ramp_33449));
double _n_xw_33451=(4.4-(4.05*_n_smooth_32905(0.0,5.5,_n_tau_33447)));
return ([&](){auto _n_object_34242=std::make_shared<_n_Record_32979>();_n_object_34242->_p_xw=_n_xw_33451;_n_object_34242->_p_z=_n_z_33450;_n_object_34242->_p_s=(_n_F_32860/_n_z_33450);_n_object_34242->_p_fade=_n_smooth_32905(15.0,12.0,_n_z_33450);_n_object_34242->_p_ph=((_n_tau_33447*1.7)*ascii::PI);return _n_object_34242;})();

}
}

double _n_flicker_32980(double _a0,double _a1){double _n_gi_33452=_a0;
double _n_t_33453=_a1;
{
double _n_f_33454=std::floor((_n_t_33453*15.0));
if(d::truth((_n_gi_33452==1.0))){d::check_cancel();double _n_c_33455=d::mod((_n_t_33453+3.0),9.0);
return (d::truth((_n_c_33455<0.9))?(d::truth((_n_hash_32899(_n_f_33454,11.0)>0.45))?1.0:0.1):(0.96+(0.04*_n_hash_32899(_n_f_33454,12.0))));
}
if(d::truth((_n_gi_33452==2.0))){d::check_cancel();double _n_c_33456=d::mod((_n_t_33453+7.0),13.0);
if((d::truth((_n_c_33456<0.7))||d::truth(([&]()->bool{auto _n_logical_34243=(_n_c_33456>4.0);return d::truth(_n_logical_34243)?(_n_c_33456<4.8):_n_logical_34243;})()))){d::check_cancel();return (d::truth((_n_hash_32899(_n_f_33454,21.0)>0.5))?1.0:0.0);
}
return (d::truth((_n_c_33456<4.0))?0.0:1.0);
}
double _n_c_33457=d::mod((_n_t_33453+1.5),7.0);
return (d::truth((_n_c_33457<1.2))?(d::truth((_n_hash_32899(_n_f_33454,31.0)>0.35))?1.0:0.0):1.0);

}
}

explicit Native_tokyo_rain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_32909=d::map(_n_meta_32854->_p_palette,_n_hex_32907);
this->_n_N_32910=(_n_W_32856*_n_H_32857);
this->_n_out_32911=d::Array<d::String,false>(size_t(this->_n_N_32910));
this->_n_lut_32912=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_32914=d::Array<uint8_t,true>(size_t(this->_n_N_32910));
this->_n_S_32915=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_ER_32916=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_EG_32917=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_EB_32918=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_AR_32919=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_AG_32920=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_AB_32921=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_KG_32922=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_grp_32923=d::Array<uint8_t,true>(size_t(this->_n_N_32910));
this->_n_SR_32924=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_SG_32925=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_SB_32926=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_wet_32927=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_wallS_32930=d::Array<float,true>(size_t(_n_W_32856));
this->_n_roofY_32931=d::Array<float,true>(size_t(_n_W_32856));
this->_n_bareY_32932=d::Array<float,true>(size_t(_n_W_32856));
this->_n_baseY_32933=d::Array<float,true>(size_t(_n_W_32856));
this->_n_colI_32934=d::Array<int8_t,true>(size_t(_n_W_32856));
this->_n_colH_32935=d::Array<float,true>(size_t(_n_W_32856));
this->_n_tankCol_32936=d::Array<uint8_t,true>(size_t(_n_W_32856));
{double _n_x_33056=0.0;
for(;d::truth((_n_x_33056<_n_W_32856));(void)((_n_x_33056++))){d::check_cancel();double _n_xc_33057=(_n_x_33056+0.5);
double _n_side_33058=(d::truth((_n_xc_33057<_n_VX_32858))?(-d::number(1.0)):1.0);
d::Array<d::Array<double,false>,false> _n_list_33059=(d::truth((_n_side_33058<0.0))?_n_LEFT_32891:_n_RIGHT_32892);
double _n_s0_33060=(std::fabs((_n_xc_33057-_n_VX_32858))/_n_HALF_32862);
double _n_z_33061=(_n_F_32860/_n_s0_33060);
double _n_i_33062=0.0;
while((d::truth((_n_i_33062<(double(_n_list_33059.size())-1.0)))&&d::truth((_n_z_33061>=d::at(d::at(_n_list_33059,_n_i_33062),1.0))))){d::check_cancel();(void)((_n_i_33062++));
}
double _n_s_33063=_n_s0_33060;
double _n_hgt_33064=d::at(d::at(_n_list_33059,_n_i_33062),2.0);
if(d::truth((!d::truth(_n_hgt_33064)))){d::check_cancel();(void)((_n_s_33063=(_n_F_32860/d::at(d::at(_n_list_33059,_n_i_33062),1.0))));
(void)((_n_hgt_33064=d::at(d::at(_n_list_33059,(_n_i_33062+1.0)),2.0)));
}
double _n_extra_33065=0.0;
for(auto &&_n_item_33645:_n_TANKS_32893){d::check_cancel();auto _n_binding_33646=_n_item_33645;
double _n_ts_33066=d::at(_n_binding_33646,0.0);
double _n_a_33067=d::at(_n_binding_33646,1.0);
double _n_b_33068=d::at(_n_binding_33646,2.0);
double _n_e_33069=d::at(_n_binding_33646,3.0);
if(((d::truth((_n_ts_33066==_n_side_33058))&&d::truth((_n_z_33061>=_n_a_33067)))&&d::truth((_n_z_33061<_n_b_33068)))){d::check_cancel();(void)(((_n_extra_33065=_n_e_33069),([&](){auto&& _n_array_33647=this->_n_tankCol_32936;auto _n_index_33648=_n_x_33056;auto _n_value_33649=1.0;d::put(_n_array_33647,_n_index_33648,_n_value_33649);return _n_value_33649;})()));
}
}
(void)(([&](){auto&& _n_array_33650=this->_n_wallS_32930;auto _n_index_33651=_n_x_33056;auto _n_value_33652=_n_s_33063;d::put(_n_array_33650,_n_index_33651,_n_value_33652);return _n_value_33652;})());
(void)(([&](){auto&& _n_array_33653=this->_n_baseY_32933;auto _n_index_33654=_n_x_33056;auto _n_value_33655=(_n_HY_32859+(_n_EYE_32861*_n_s_33063));d::put(_n_array_33653,_n_index_33654,_n_value_33655);return _n_value_33655;})());
(void)(([&](){auto&& _n_array_33656=this->_n_bareY_32932;auto _n_index_33657=_n_x_33056;auto _n_value_33658=(_n_HY_32859-((_n_hgt_33064-_n_EYE_32861)*_n_s_33063));d::put(_n_array_33656,_n_index_33657,_n_value_33658);return _n_value_33658;})());
(void)(([&](){auto&& _n_array_33659=this->_n_roofY_32931;auto _n_index_33660=_n_x_33056;auto _n_value_33661=(_n_HY_32859-(((_n_hgt_33064+_n_extra_33065)-_n_EYE_32861)*_n_s_33063));d::put(_n_array_33659,_n_index_33660,_n_value_33661);return _n_value_33661;})());
(void)(([&](){auto&& _n_array_33662=this->_n_colI_32934;auto _n_index_33663=_n_x_33056;auto _n_value_33664=_n_i_33062;d::put(_n_array_33662,_n_index_33663,_n_value_33664);return _n_value_33664;})());
(void)(([&](){auto&& _n_array_33665=this->_n_colH_32935;auto _n_index_33666=_n_x_33056;auto _n_value_33667=_n_hgt_33064;d::put(_n_array_33665,_n_index_33666,_n_value_33667);return _n_value_33667;})());
}}
for(auto &&_n_item_33668:_n_MASTS_32894){d::check_cancel();auto _n_binding_33669=_n_item_33668;
double _n_ms_33070=d::at(_n_binding_33669,0.0);
double _n_at_33071=d::at(_n_binding_33669,1.0);
double _n_e_33072=d::at(_n_binding_33669,2.0);
{
double _n_s_33073=(_n_F_32860/_n_at_33071);
double _n_x_33074=std::floor((_n_VX_32858+((_n_ms_33070*_n_HALF_32862)*_n_s_33073)));
(void)(([&](){auto&& _n_array_33670=this->_n_roofY_32931;auto _n_index_33671=_n_x_33074;auto _n_value_33672=d::minimum({d::at(this->_n_roofY_32931,_n_x_33074),(d::at(this->_n_bareY_32932,_n_x_33074)-(_n_e_33072*_n_s_33073))});d::put(_n_array_33670,_n_index_33671,_n_value_33672);return _n_value_33672;})());

}
}
{double _n_r_33075=0.0;
for(;d::truth((_n_r_33075<_n_H_32857));(void)((_n_r_33075++))){d::check_cancel();double _n_y_33076=(_n_r_33075+0.5);
{double _n_x_33077=0.0;
for(;d::truth((_n_x_33077<_n_W_32856));(void)((_n_x_33077++))){d::check_cancel();double _n_k_33078=((_n_r_33075*_n_W_32856)+_n_x_33077);
double _n_xc_33079=(_n_x_33077+0.5);
double _n_side_33080=(d::truth((_n_xc_33079<_n_VX_32858))?(-d::number(1.0)):1.0);
if(d::truth((_n_y_33076>=d::at(this->_n_baseY_32933,_n_x_33077)))){d::check_cancel();(void)(([&](){auto&& _n_array_33673=this->_n_mat_32914;auto _n_index_33674=_n_k_33078;auto _n_value_33675=_n_ROAD_32871;d::put(_n_array_33673,_n_index_33674,_n_value_33675);return _n_value_33675;})());
double _n_s_33081=((_n_y_33076-_n_HY_32859)/_n_EYE_32861);
double _n_z_33082=(_n_F_32860/_n_s_33081);
double _n_xw_33083=((_n_xc_33079-_n_VX_32858)/_n_s_33081);
double _n_ax_33084=std::fabs(_n_xw_33083);
(void)(([&](){auto&& _n_array_33676=this->_n_S_32915;auto _n_index_33677=_n_k_33078;auto _n_value_33678=_n_s_33081;d::put(_n_array_33676,_n_index_33677,_n_value_33678);return _n_value_33678;})());
double _n_a_33085=(0.11+(0.07*_n_fbm_32901((_n_xw_33083*2.2),(_n_z_33082*1.1),2.0,0.0)));
double _n_lo_33086=(_n_ax_33084-(0.5/_n_s_33081));
double _n_hi_33087=(_n_ax_33084+(0.5/_n_s_33081));
double _n_paint_33088=_n_clamp_32904((([&](){auto _n_left_33679=d::minimum({_n_hi_33087,2.66});auto _n_right_33680=d::maximum({_n_lo_33086,2.52});return (_n_left_33679-_n_right_33680);})()*_n_s_33081));
(void)((_n_a_33085=_n_mix_32906(_n_a_33085,0.75,_n_paint_33088)));
if(d::truth((_n_ax_33084>2.85))){d::check_cancel();(void)((_n_a_33085=(d::truth((d::mod(_n_z_33082,0.55)<0.08))?0.07:0.2)));
}
(void)(this->_n_surface_32929(_n_k_33078,(_n_a_33085*0.82),(_n_a_33085*0.86),_n_a_33085,0.6));
(void)(((([&](){auto&& _n_array_33681=this->_n_ER_32916;auto _n_index_33682=_n_k_33078;auto _n_value_33683=(_n_paint_33088*0.13);d::put(_n_array_33681,_n_index_33682,_n_value_33683);return _n_value_33683;})(),([&](){auto&& _n_array_33684=this->_n_EG_32917;auto _n_index_33685=_n_k_33078;auto _n_value_33686=(_n_paint_33088*0.14);d::put(_n_array_33684,_n_index_33685,_n_value_33686);return _n_value_33686;})()),([&](){auto&& _n_array_33687=this->_n_EB_32918;auto _n_index_33688=_n_k_33078;auto _n_value_33689=(_n_paint_33088*0.17);d::put(_n_array_33687,_n_index_33688,_n_value_33689);return _n_value_33689;})()));
(void)(([&](){auto&& _n_array_33690=this->_n_wet_32927;auto _n_index_33691=_n_k_33078;auto _n_value_33692=(0.5+(0.5*([&](){auto _n_argument_33693=0.42;auto _n_argument_33694=0.6;auto _n_argument_33695=_n_fbm_32901(((_n_xw_33083*0.9)+3.0),(_n_z_33082*0.35),3.0,0.0);return _n_smooth_32905(_n_argument_33693,_n_argument_33694,_n_argument_33695);})()));d::put(_n_array_33690,_n_index_33691,_n_value_33692);return _n_value_33692;})());
continue;
}
std::variant<bool,double> _n_tankLeg_33089=([&]()->std::variant<bool,double>{auto _n_logical_33696=([&]()->std::variant<bool,double>{auto _n_logical_33697=([&]()->std::variant<bool,double>{auto _n_logical_33698=([&]()->std::variant<bool,double>{auto _n_logical_33699=d::at(this->_n_tankCol_32936,_n_x_33077);return d::truth(_n_logical_33699)?std::variant<bool,double>((_n_y_33076<d::at(this->_n_bareY_32932,_n_x_33077))):std::variant<bool,double>(_n_logical_33699);})();return d::truth(_n_logical_33698)?std::variant<bool,double>((_n_y_33076>d::at(this->_n_roofY_32931,_n_x_33077))):_n_logical_33698;})();return d::truth(_n_logical_33697)?std::variant<bool,double>((((((_n_HY_32859-_n_y_33076)/d::at(this->_n_wallS_32930,_n_x_33077))+_n_EYE_32861)-d::at(this->_n_colH_32935,_n_x_33077))<0.45)):_n_logical_33697;})();return d::truth(_n_logical_33696)?std::variant<bool,double>((double(d::i32(_n_x_33077)&d::i32(1.0))==0.0)):_n_logical_33696;})();
if((d::truth((_n_y_33076<d::at(this->_n_roofY_32931,_n_x_33077)))||d::truth(_n_tankLeg_33089))){d::check_cancel();(void)(([&](){auto&& _n_array_33700=this->_n_mat_32914;auto _n_index_33701=_n_k_33078;auto _n_value_33702=_n_SKY_32869;d::put(_n_array_33700,_n_index_33701,_n_value_33702);return _n_value_33702;})());
continue;
}
(void)(([&](){auto&& _n_array_33703=this->_n_mat_32914;auto _n_index_33704=_n_k_33078;auto _n_value_33705=_n_WALL_32870;d::put(_n_array_33703,_n_index_33704,_n_value_33705);return _n_value_33705;})());
double _n_s_33090=d::at(this->_n_wallS_32930,_n_x_33077);
(void)(([&](){auto&& _n_array_33706=this->_n_S_32915;auto _n_index_33707=_n_k_33078;auto _n_value_33708=_n_s_33090;d::put(_n_array_33706,_n_index_33707,_n_value_33708);return _n_value_33708;})());
d::Array<d::Array<double,false>,false> _n_list_33091=(d::truth((_n_side_33080<0.0))?_n_LEFT_32891:_n_RIGHT_32892);
double _n_i_33092=d::at(this->_n_colI_32934,_n_x_33077);
auto _n_binding_33709=d::at(_n_list_33091,_n_i_33092);
double _n_z0_33093=d::at(_n_binding_33709,0.0);
double _n_z1_33094=d::at(_n_binding_33709,1.0);
double _n_front_33095=d::at(_n_binding_33709,3.0);
double _n_h_33096=(_n_EYE_32861+((_n_HY_32859-_n_y_33076)/_n_s_33090));
double _n_tone_33097=(0.75+(0.5*_n_hash_32899(_n_i_33092,(_n_side_33080+7.0))));
double _n_wr_33098=(0.3*_n_tone_33097);
double _n_wg_33099=(0.28*_n_tone_33097);
double _n_wb_33100=(0.33*_n_tone_33097);
double _n_tex_33101=(0.8+(0.35*_n_fbm_32901((_n_xc_33079*0.6),(_n_y_33076*0.6),2.0,0.0)));
(void)((((_n_wr_33098=(_n_wr_33098*_n_tex_33101)),(_n_wg_33099=(_n_wg_33099*_n_tex_33101))),(_n_wb_33100=(_n_wb_33100*_n_tex_33101))));
if(d::truth((!d::truth(d::at(d::at(_n_list_33091,_n_i_33092),2.0))))){d::check_cancel();double _n_xw_33102=((_n_xc_33079-_n_VX_32858)/_n_s_33090);
double _n_dl_33103=d::hypot(std::initializer_list<double>{(_n_xw_33102-3.65),((_n_h_33096-2.9)*0.8)});
if(d::truth((_n_dl_33103<0.1))){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,1.2,1.0,0.7));
}else {d::check_cancel();if(((d::truth((_n_h_33096>2.95))&&d::truth((_n_h_33096<3.05)))&&d::truth((std::fabs((_n_xw_33102-3.65))<0.16)))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.05,0.05,0.06,0.4));
}else {d::check_cancel();if(d::truth((std::fabs((_n_xw_33102-3.36))<0.05))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.12,0.12,0.14,0.6));
}else {d::check_cancel();if((d::truth((_n_xw_33102>3.85))&&d::truth((_n_h_33096<2.1)))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.06,0.05,0.05,0.5));
}else {d::check_cancel();double _n_pool_33104=(std::exp(((-d::number(_n_dl_33103))/0.9))*0.55);
(void)(this->_n_surface_32929(_n_k_33078,(_n_wr_33098*0.8),(_n_wg_33099*0.8),(_n_wb_33100*0.8),1.0));
(void)(((([&](){auto&& _n_array_33710=this->_n_ER_32916;auto _n_index_33711=_n_k_33078;auto _n_value_33712=(_n_pool_33104*0.9);d::put(_n_array_33710,_n_index_33711,_n_value_33712);return _n_value_33712;})(),([&](){auto&& _n_array_33713=this->_n_EG_32917;auto _n_index_33714=_n_k_33078;auto _n_value_33715=(_n_pool_33104*0.62);d::put(_n_array_33713,_n_index_33714,_n_value_33715);return _n_value_33715;})()),([&](){auto&& _n_array_33716=this->_n_EB_32918;auto _n_index_33717=_n_k_33078;auto _n_value_33718=(_n_pool_33104*0.36);d::put(_n_array_33716,_n_index_33717,_n_value_33718);return _n_value_33718;})()));
}
}
}
}
continue;
}
double _n_z_33105=(_n_F_32860/_n_s_33090);
if((d::truth((_n_side_33080<0.0))&&d::truth((_n_i_33092==0.0)))){d::check_cancel();double _n_lx_33106=(_n_VX_32858-(_n_HALF_32862*(_n_F_32860/1.62)));
double _n_ly_33107=(_n_HY_32859-((2.2-_n_EYE_32861)*(_n_F_32860/1.62)));
double _n_dl_33108=d::hypot(std::initializer_list<double>{((_n_xc_33079-_n_lx_33106)/1.4),((_n_y_33076-_n_ly_33107)/1.1)});
if(d::truth((_n_dl_33108<1.0))){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,1.3,0.95,0.6));
continue;
}
if((d::truth((_n_dl_33108<1.9))&&d::truth((_n_y_33076<(_n_ly_33107-0.6))))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.06,0.06,0.07,0.5));
continue;
}
}
if(d::truth((_n_h_33096>2.6))){d::check_cancel();double _n_fl_33109=std::floor(((_n_h_33096-2.9)/2.8));
double _n_fh_33110=((_n_h_33096-2.9)-(_n_fl_33109*2.8));
double _n_bay_33111=std::floor((((_n_z_33105-_n_z0_33093)-0.5)/1.9));
double _n_bz_33112=(((_n_z_33105-_n_z0_33093)-0.5)-(_n_bay_33111*1.9));
if(((((((d::truth((_n_h_33096>2.9))&&d::truth((_n_fh_33110>0.55)))&&d::truth((_n_fh_33110<1.85)))&&d::truth((_n_bz_33112>0.3)))&&d::truth((_n_bz_33112<1.3)))&&d::truth((_n_z_33105<(_n_z1_33094-0.5))))&&d::truth((_n_h_33096<(d::at(this->_n_colH_32935,_n_x_33077)-0.5))))){d::check_cancel();double _n_hh_33113=_n_hash_32899(((_n_bay_33111*7.0)+_n_fl_33109),((_n_side_33080*31.0)+_n_i_33092));
if(d::truth((_n_hh_33113<0.36))){d::check_cancel();double _n_v_33114=((0.3+(0.3*_n_hash_32899(_n_bay_33111,(_n_fl_33109+9.0))))*(d::truth((d::mod(_n_fh_33110,0.17)<0.045))?0.55:1.0));
if(d::truth((_n_hh_33113<0.12))){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,(0.5*_n_v_33114),(0.72*_n_v_33114),(1.0*_n_v_33114)));
}else {d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,_n_v_33114,(0.7*_n_v_33114),(0.4*_n_v_33114)));
}
}else {d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.08,0.09,0.13,0.9));
}
}else {d::check_cancel();if((d::truth((_n_h_33096>2.9))&&d::truth((_n_fh_33110<0.14)))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,(_n_wr_33098*1.25),(_n_wg_33099*1.25),(_n_wb_33100*1.25),1.0));
}else {d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,_n_wr_33098,_n_wg_33099,_n_wb_33100,1.0));
}
}
if((((((d::truth((_n_side_33080<0.0))&&d::truth((_n_i_33092==2.0)))&&d::truth((_n_z_33105>4.85)))&&d::truth((_n_z_33105<6.75)))&&d::truth((_n_h_33096>2.45)))&&d::truth((_n_h_33096<2.85)))){d::check_cancel();bool _n_letter_33115=([&]()->bool{auto _n_logical_33719=([&]()->bool{auto _n_logical_33720=([&]()->bool{auto _n_logical_33721=(d::mod((_n_z_33105-4.85),0.42)>0.1);return d::truth(_n_logical_33721)?(d::mod((_n_z_33105-4.85),0.42)<0.3):_n_logical_33721;})();return d::truth(_n_logical_33720)?(_n_h_33096>2.53):_n_logical_33720;})();return d::truth(_n_logical_33719)?(_n_h_33096<2.77):_n_logical_33719;})();
(void)(this->_n_emit_32928(_n_k_33078,(d::at(_n_AMBER_32882,0.0)*(d::truth(_n_letter_33115)?0.12:0.9)),(d::at(_n_AMBER_32882,1.0)*(d::truth(_n_letter_33115)?0.12:0.9)),(d::at(_n_AMBER_32882,2.0)*(d::truth(_n_letter_33115)?0.12:0.9))));
}
continue;
}
(void)(this->_n_surface_32929(_n_k_33078,_n_wr_33098,_n_wg_33099,_n_wb_33100,1.0));
if(d::truth((_n_front_33095==1.0))){d::check_cancel();double _n_lx_33116=(_n_VX_32858-(_n_HALF_32862*(_n_F_32860/1.62)));
double _n_ly_33117=(_n_HY_32859-((2.2-_n_EYE_32861)*(_n_F_32860/1.62)));
double _n_pool_33118=(std::exp(((-d::number(d::hypot(std::initializer_list<double>{((_n_xc_33079-_n_lx_33116)*0.7),(_n_y_33076-_n_ly_33117)})))/11.0))*0.42);
if(d::truth((_n_h_33096<2.15))){d::check_cancel();double _n_rib_33119=(d::truth((d::mod(_n_h_33096,0.11)<0.035))?0.3:1.0);
(void)(this->_n_surface_32929(_n_k_33078,(0.27*_n_rib_33119),(0.29*_n_rib_33119),(0.35*_n_rib_33119),1.0));
(void)(((([&](){auto&& _n_array_33722=this->_n_ER_32916;auto _n_index_33723=_n_k_33078;auto _n_value_33724=(_n_pool_33118*_n_rib_33119);d::put(_n_array_33722,_n_index_33723,_n_value_33724);return _n_value_33724;})(),([&](){auto&& _n_array_33725=this->_n_EG_32917;auto _n_index_33726=_n_k_33078;auto _n_value_33727=((_n_pool_33118*0.72)*_n_rib_33119);d::put(_n_array_33725,_n_index_33726,_n_value_33727);return _n_value_33727;})()),([&](){auto&& _n_array_33728=this->_n_EB_32918;auto _n_index_33729=_n_k_33078;auto _n_value_33730=((_n_pool_33118*0.45)*_n_rib_33119);d::put(_n_array_33728,_n_index_33729,_n_value_33730);return _n_value_33730;})()));
}else {d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.16,0.16,0.2,1.0));
}
}else {d::check_cancel();if(d::truth((_n_front_33095==2.0))){d::check_cancel();double _n_zz_33120=(_n_z_33105-_n_z0_33093);
if((((d::truth((_n_zz_33120>0.3))&&d::truth((_n_zz_33120<((_n_z1_33094-_n_z0_33093)-0.3))))&&d::truth((_n_h_33096>0.1)))&&d::truth((_n_h_33096<2.15)))){d::check_cancel();bool _n_cool_33121=([&]()->bool{auto _n_logical_33731=(_n_i_33092==4.0);return d::truth(_n_logical_33731)?(_n_side_33080<0.0):_n_logical_33731;})();
bool _n_shelf_33122=([&]()->bool{auto _n_logical_33732=([&]()->bool{auto _n_logical_33733=(std::fabs((_n_h_33096-0.75))<0.05);return d::truth(_n_logical_33733)?_n_logical_33733:(std::fabs((_n_h_33096-1.3))<0.05);})();return d::truth(_n_logical_33732)?_n_logical_33732:(std::fabs((_n_h_33096-1.82))<0.05);})();
double _n_v_33123=((d::truth((d::mod(_n_zz_33120,1.4)<0.07))?0.05:(d::truth(_n_shelf_33122)?0.3:0.62))*(0.85+(0.3*([&](){auto _n_argument_33734=std::floor((_n_zz_33120*3.0));auto _n_argument_33735=5.0;return _n_hash_32899(_n_argument_33734,_n_argument_33735);})())));
if(d::truth(_n_cool_33121)){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,(0.7*_n_v_33123),(0.85*_n_v_33123),(1.0*_n_v_33123)));
}else {d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,_n_v_33123,(0.72*_n_v_33123),(0.44*_n_v_33123)));
}
}
}else {d::check_cancel();if(d::truth((_n_front_33095==3.0))){d::check_cancel();double _n_zz_33124=(_n_z_33105-_n_z0_33093);
if((d::truth((_n_zz_33124>0.35))&&d::truth((_n_zz_33124<1.15)))){d::check_cancel();if(d::truth((_n_h_33096<2.0))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.07,0.05,0.04,0.8));
}else {d::check_cancel();if(d::truth((_n_h_33096<2.22))){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,0.55,0.38,0.2));
}
}
}else {d::check_cancel();if((((d::truth((_n_zz_33124>1.5))&&d::truth((_n_zz_33124<2.5)))&&d::truth((_n_h_33096>1.0)))&&d::truth((_n_h_33096<1.9)))){d::check_cancel();bool _n_lattice_33125=([&]()->bool{auto _n_logical_33736=(d::mod(_n_zz_33124,0.12)<0.03);return d::truth(_n_logical_33736)?_n_logical_33736:(d::mod((_n_h_33096-1.0),0.18)<0.035);})();
if(d::truth(_n_lattice_33125)){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.06,0.04,0.03,0.6));
}else {d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,0.5,0.36,0.2));
}
}
}
}else {d::check_cancel();if(d::truth((_n_front_33095==4.0))){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.3,0.19,0.12,1.0));
if(((d::truth((_n_z_33105>2.35))&&d::truth((_n_z_33105<3.0)))&&d::truth((_n_h_33096<2.05)))){d::check_cancel();if(d::truth((_n_h_33096>1.42))){d::check_cancel();bool _n_slit_33126=(d::mod((_n_z_33105-2.35),0.217)<0.028);
bool _n_crest_33127=([&]()->bool{auto _n_logical_33737=((std::pow(((_n_z_33105-2.675)/0.09),2.0)+std::pow(((_n_h_33096-1.76)/0.13),2.0))<1.0);return d::truth(_n_logical_33737)?((std::pow(((_n_z_33105-2.675)/0.09),2.0)+std::pow(((_n_h_33096-1.76)/0.13),2.0))>0.35):_n_logical_33737;})();
if(d::truth(_n_slit_33126)){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,0.8,0.5,0.22));
}else {d::check_cancel();if(d::truth(_n_crest_33127)){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,0.75,0.74,0.72));
}else {d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,0.09,0.1,0.3));
}
}
}else {d::check_cancel();double _n_v_33128=((d::truth((std::fabs((_n_h_33096-0.95))<0.06))?0.35:(0.5+(0.35*_n_smooth_32905(0.2,1.4,_n_h_33096))))*(d::truth((_n_h_33096<0.3))?0.6:1.0));
for(auto &&_n_item_33738:d::Array<double,false>{2.52,2.83}){d::check_cancel();double _n_pz_33129=_n_item_33738;
{
bool _n_head_33130=((std::pow(((_n_z_33105-_n_pz_33129)/0.075),2.0)+std::pow(((_n_h_33096-1.3)/0.1),2.0))<1.0);
bool _n_back_33131=([&]()->bool{auto _n_logical_33739=([&]()->bool{auto _n_logical_33742=(_n_h_33096>0.9);return d::truth(_n_logical_33742)?(_n_h_33096<1.22):_n_logical_33742;})();return d::truth(_n_logical_33739)?([&](){auto _n_left_33740=std::fabs((_n_z_33105-_n_pz_33129));auto _n_right_33741=(0.1+(0.05*_n_smooth_32905(1.2,0.95,_n_h_33096)));return (_n_left_33740<_n_right_33741);})():_n_logical_33739;})();
if((d::truth(_n_head_33130)||d::truth(_n_back_33131))){d::check_cancel();(void)((_n_v_33128=0.07));
}

}
}
(void)(this->_n_emit_32928(_n_k_33078,_n_v_33128,(0.6*_n_v_33128),(0.28*_n_v_33128)));
}
}else {d::check_cancel();if((((d::truth((_n_z_33105>1.5))&&d::truth((_n_z_33105<1.85)))&&d::truth((_n_h_33096>1.05)))&&d::truth((_n_h_33096<1.8)))){d::check_cancel();bool _n_lattice_33132=([&]()->bool{auto _n_logical_33743=(d::mod(_n_z_33105,0.11)<0.03);return d::truth(_n_logical_33743)?_n_logical_33743:(d::mod((_n_h_33096-1.05),0.19)<0.04);})();
if(d::truth(_n_lattice_33132)){d::check_cancel();(void)(this->_n_surface_32929(_n_k_33078,0.12,0.07,0.04,0.6));
}else {d::check_cancel();(void)(this->_n_emit_32928(_n_k_33078,0.6,0.38,0.18));
}
}
}
}
}
}
}
}}
}}
{double _n_k_33133=0.0;
for(;d::truth((_n_k_33133<this->_n_N_32910));(void)((_n_k_33133++))){d::check_cancel();double _n_x_33134=d::mod(_n_k_33133,_n_W_32856);
double _n_y_33135=(std::floor((_n_k_33133/_n_W_32856))+0.5);
double _n_v_33136=_n_clamp_32904((_n_y_33135/_n_HY_32859));
double _n_glow_33137=_n_endGlow_32903((_n_x_33134+0.5),_n_y_33135);
(void)(([&](){auto&& _n_array_33744=this->_n_SR_32924;auto _n_index_33745=_n_k_33133;auto _n_value_33746=((0.11+(0.16*std::pow(_n_v_33136,1.6)))+(_n_glow_33137*d::at(_n_END_32902,0.0)));d::put(_n_array_33744,_n_index_33745,_n_value_33746);return _n_value_33746;})());
(void)(([&](){auto&& _n_array_33747=this->_n_SG_32925;auto _n_index_33748=_n_k_33133;auto _n_value_33749=((0.08+(0.08*std::pow(_n_v_33136,1.6)))+(_n_glow_33137*d::at(_n_END_32902,1.0)));d::put(_n_array_33747,_n_index_33748,_n_value_33749);return _n_value_33749;})());
(void)(([&](){auto&& _n_array_33750=this->_n_SB_32926;auto _n_index_33751=_n_k_33133;auto _n_value_33752=((0.24+(0.16*std::pow(_n_v_33136,1.6)))+(_n_glow_33137*d::at(_n_END_32902,2.0)));d::put(_n_array_33750,_n_index_33751,_n_value_33752);return _n_value_33752;})());
}}
this->_n_towerTop_32937=15.0;
{double _n_r_33138=8.0;
for(;d::truth((_n_r_33138<38.0));(void)((_n_r_33138++))){d::check_cancel();{double _n_x_33139=96.0;
for(;d::truth((_n_x_33139<=103.0));(void)((_n_x_33139++))){d::check_cancel();double _n_k_33140=((_n_r_33138*_n_W_32856)+_n_x_33139);
if(d::truth((d::at(this->_n_mat_32914,_n_k_33140)!=_n_SKY_32869))){d::check_cancel();continue;
}
bool _n_spire_33141=([&]()->bool{auto _n_logical_33753=(_n_x_33139==99.0);return d::truth(_n_logical_33753)?_n_logical_33753:(_n_x_33139==100.0);})();
if((d::truth((_n_r_33138<this->_n_towerTop_32937))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_33754=_n_spire_33141;return d::truth(_n_logical_33754)?(_n_r_33138>=9.0):_n_logical_33754;})()))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_33755=this->_n_mat_32914;auto _n_index_33756=_n_k_33140;auto _n_value_33757=_n_TOWER_32877;d::put(_n_array_33755,_n_index_33756,_n_value_33757);return _n_value_33757;})());
(void)(([&](){auto&& _n_array_33758=this->_n_S_32915;auto _n_index_33759=_n_k_33140;auto _n_value_33760=0.05;d::put(_n_array_33758,_n_index_33759,_n_value_33760);return _n_value_33760;})());
if(d::truth((_n_r_33138<this->_n_towerTop_32937))){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33140,0.015,0.012,0.025));
}else {d::check_cancel();if(d::truth((_n_r_33138<(this->_n_towerTop_32937+2.0)))){d::check_cancel();(void)(this->_n_emit_32928(_n_k_33140,0.42,0.36,0.5));
}else {d::check_cancel();bool _n_lit_33142=([&]()->bool{auto _n_logical_33761=([&]()->bool{auto _n_logical_33762=(double(d::i32(_n_x_33139)&d::i32(1.0))==0.0);return d::truth(_n_logical_33762)?(double(d::i32(_n_r_33138)&d::i32(1.0))==1.0):_n_logical_33762;})();return d::truth(_n_logical_33761)?(_n_hash_32899(_n_x_33139,(_n_r_33138+5.0))<0.45):_n_logical_33761;})();
(void)(this->_n_emit_32928(_n_k_33140,(d::truth(_n_lit_33142)?0.32:0.015),(d::truth(_n_lit_33142)?0.24:0.012),(d::truth(_n_lit_33142)?0.18:0.025)));
}
}
}}
}}
{double _n_p_33143=0.0;
for(;d::truth((_n_p_33143<double(_n_POLES_32895.size())));(void)((_n_p_33143++))){d::check_cancel();auto _n_binding_33763=d::at(_n_POLES_32895,_n_p_33143);
double _n_px_33144=d::at(_n_binding_33763,0.0);
double _n_pz_33145=d::at(_n_binding_33763,1.0);
double _n_top_33146=d::at(_n_binding_33763,2.0);
double _n_thick_33147=d::at(_n_binding_33763,3.0);
double _n_s_33148=(_n_F_32860/_n_pz_33145);
double _n_xc_33149=(_n_VX_32858+(_n_px_33144*_n_s_33148));
double _n_hw_33150=((_n_thick_33147/2.0)*_n_s_33148);
double _n_yt_33151=(_n_HY_32859-((_n_top_33146-_n_EYE_32861)*_n_s_33148));
double _n_yb_33152=(_n_HY_32859+(_n_EYE_32861*_n_s_33148));
double _n_arm_33153=(_n_top_33146-0.45);
{double _n_r_33154=([&](){auto _n_argument_33764=0.0;auto _n_argument_33765=std::floor((_n_yt_33151-3.0));return d::maximum({_n_argument_33764,_n_argument_33765});})();
for(;d::truth((_n_r_33154<([&](){auto _n_argument_33766=_n_H_32857;auto _n_argument_33767=std::ceil(_n_yb_33152);return d::minimum({_n_argument_33766,_n_argument_33767});})()));(void)((_n_r_33154++))){d::check_cancel();double _n_y_33155=(_n_r_33154+0.5);
double _n_h_33156=(_n_EYE_32861+((_n_HY_32859-_n_y_33155)/_n_s_33148));
{double _n_x_33157=([&](){auto _n_argument_33768=0.0;auto _n_argument_33769=std::floor((_n_xc_33149-(0.9*_n_s_33148)));return d::maximum({_n_argument_33768,_n_argument_33769});})();
for(;d::truth((_n_x_33157<([&](){auto _n_argument_33770=_n_W_32856;auto _n_argument_33771=std::ceil((_n_xc_33149+(0.9*_n_s_33148)));return d::minimum({_n_argument_33770,_n_argument_33771});})()));(void)((_n_x_33157++))){d::check_cancel();double _n_k_33158=((_n_r_33154*_n_W_32856)+_n_x_33157);
if(d::truth((d::at(this->_n_S_32915,_n_k_33158)>=_n_s_33148))){d::check_cancel();continue;
}
double _n_cov_33159=0.0;
if((d::truth((_n_h_33156<=_n_top_33146))&&d::truth((_n_h_33156>=0.0)))){d::check_cancel();(void)((_n_cov_33159=_n_clamp_32904(([&](){auto _n_left_33772=d::minimum({(_n_x_33157+1.0),(_n_xc_33149+_n_hw_33150)});auto _n_right_33773=d::maximum({_n_x_33157,(_n_xc_33149-_n_hw_33150)});return (_n_left_33772-_n_right_33773);})())));
}
bool _n_onArm_33160=([&]()->bool{auto _n_logical_33774=([&](){auto _n_left_33775=std::fabs((_n_h_33156-_n_arm_33153));auto _n_right_33776=d::maximum({0.06,(0.5/_n_s_33148)});return (_n_left_33775<_n_right_33776);})();return d::truth(_n_logical_33774)?(std::fabs(((_n_x_33157+0.5)-_n_xc_33149))<(0.65*_n_s_33148)):_n_logical_33774;})();
bool _n_can_33161=([&]()->bool{auto _n_logical_33777=([&]()->bool{auto _n_logical_33778=([&]()->bool{auto _n_logical_33779=([&]()->bool{auto _n_logical_33780=(_n_p_33143==1.0);return d::truth(_n_logical_33780)?(_n_h_33156>6.4):_n_logical_33780;})();return d::truth(_n_logical_33779)?(_n_h_33156<7.5):_n_logical_33779;})();return d::truth(_n_logical_33778)?(((_n_x_33157+0.5)-_n_xc_33149)>0.0):_n_logical_33778;})();return d::truth(_n_logical_33777)?(((_n_x_33157+0.5)-_n_xc_33149)<(0.45*_n_s_33148)):_n_logical_33777;})();
if((d::truth(_n_onArm_33160)||d::truth(_n_can_33161))){d::check_cancel();(void)((_n_cov_33159=([&](){auto _n_argument_33781=_n_cov_33159;auto _n_argument_33782=(d::truth(_n_can_33161)?1.0:_n_clamp_32904((0.12*_n_s_33148)));return d::maximum({_n_argument_33781,_n_argument_33782});})()));
}
if(d::truth((_n_cov_33159<0.05))){d::check_cancel();continue;
}
double _n_cr_33162=0.36;
double _n_cg_33163=0.36;
double _n_cb_33164=0.4;
if(d::truth((_n_p_33143==0.0))){d::check_cancel();double _n_u_33165=(((_n_x_33157+0.5)-_n_xc_33149)/_n_hw_33150);
double _n_round_33166=(0.55+(0.45*std::sqrt(_n_clamp_32904((1.0-(_n_u_33165*_n_u_33165))))));
(void)((((_n_cr_33162=(_n_cr_33162*_n_round_33166)),(_n_cg_33163=(_n_cg_33163*_n_round_33166))),(_n_cb_33164=(_n_cb_33164*_n_round_33166))));
if((d::truth((_n_h_33156>0.25))&&d::truth((_n_h_33156<1.8)))){d::check_cancel();bool _n_stripe_33167=(d::mod(((_n_h_33156*4.5)+(_n_u_33165*0.35)),1.0)<0.5);
if(d::truth(_n_stripe_33167)){d::check_cancel();(void)((((_n_cr_33162=0.9),(_n_cg_33163=0.72)),(_n_cb_33164=0.08)));
}else {d::check_cancel();(void)((((_n_cr_33162=0.05),(_n_cg_33163=0.05)),(_n_cb_33164=0.05)));
}
}else {d::check_cancel();if(((d::truth((_n_h_33156>1.95))&&d::truth((_n_h_33156<2.35)))&&d::truth((std::fabs(_n_u_33165)<0.85)))){d::check_cancel();bool _n_dot_33168=([&]()->bool{auto _n_logical_33783=([&]()->bool{auto _n_logical_33784=(d::mod((_n_x_33157+_n_r_33154),2.0)==0.0);return d::truth(_n_logical_33784)?(_n_h_33156>2.03):_n_logical_33784;})();return d::truth(_n_logical_33783)?(_n_h_33156<2.27):_n_logical_33783;})();
if(d::truth(_n_dot_33168)){d::check_cancel();(void)((((_n_cr_33162=0.85),(_n_cg_33163=0.88)),(_n_cb_33164=0.95)));
}else {d::check_cancel();(void)((((_n_cr_33162=0.12),(_n_cg_33163=0.25)),(_n_cb_33164=0.75)));
}
}
}
}else {d::check_cancel();if(d::truth(_n_can_33161)){d::check_cancel();(void)((((_n_cr_33162=0.4),(_n_cg_33163=0.42)),(_n_cb_33164=0.46)));
}else {d::check_cancel();(void)((((_n_cr_33162=0.12),(_n_cg_33163=0.12)),(_n_cb_33164=0.15)));
}
}
(void)(((([&](){auto&& _n_array_33785=this->_n_AR_32919;auto _n_index_33786=_n_k_33158;auto _n_value_33787=_n_mix_32906(d::at(this->_n_AR_32919,_n_k_33158),_n_cr_33162,_n_cov_33159);d::put(_n_array_33785,_n_index_33786,_n_value_33787);return _n_value_33787;})(),([&](){auto&& _n_array_33788=this->_n_AG_32920;auto _n_index_33789=_n_k_33158;auto _n_value_33790=_n_mix_32906(d::at(this->_n_AG_32920,_n_k_33158),_n_cg_33163,_n_cov_33159);d::put(_n_array_33788,_n_index_33789,_n_value_33790);return _n_value_33790;})()),([&](){auto&& _n_array_33791=this->_n_AB_32921;auto _n_index_33792=_n_k_33158;auto _n_value_33793=_n_mix_32906(d::at(this->_n_AB_32921,_n_k_33158),_n_cb_33164,_n_cov_33159);d::put(_n_array_33791,_n_index_33792,_n_value_33793);return _n_value_33793;})()));
(void)(((([&](){auto&& _n_array_33794=this->_n_ER_32916;auto _n_index_33795=_n_k_33158;auto _n_value_33796=(d::at(_n_array_33794,_n_index_33795)*(1.0-_n_cov_33159));d::put(_n_array_33794,_n_index_33795,_n_value_33796);return _n_value_33796;})(),([&](){auto&& _n_array_33797=this->_n_EG_32917;auto _n_index_33798=_n_k_33158;auto _n_value_33799=(d::at(_n_array_33797,_n_index_33798)*(1.0-_n_cov_33159));d::put(_n_array_33797,_n_index_33798,_n_value_33799);return _n_value_33799;})()),([&](){auto&& _n_array_33800=this->_n_EB_32918;auto _n_index_33801=_n_k_33158;auto _n_value_33802=(d::at(_n_array_33800,_n_index_33801)*(1.0-_n_cov_33159));d::put(_n_array_33800,_n_index_33801,_n_value_33802);return _n_value_33802;})()));
(void)(([&](){auto&& _n_array_33803=this->_n_KG_32922;auto _n_index_33804=_n_k_33158;auto _n_value_33805=_n_mix_32906(d::at(this->_n_KG_32922,_n_k_33158),1.0,_n_cov_33159);d::put(_n_array_33803,_n_index_33804,_n_value_33805);return _n_value_33805;})());
if(d::truth((_n_cov_33159>0.5))){d::check_cancel();(void)((([&](){auto&& _n_array_33806=this->_n_mat_32914;auto _n_index_33807=_n_k_33158;auto _n_value_33808=_n_POLE_32875;d::put(_n_array_33806,_n_index_33807,_n_value_33808);return _n_value_33808;})(),([&](){auto&& _n_array_33809=this->_n_S_32915;auto _n_index_33810=_n_k_33158;auto _n_value_33811=_n_s_33148;d::put(_n_array_33809,_n_index_33810,_n_value_33811);return _n_value_33811;})()));
}
}}
}}
}}
for(auto &&_n_item_33812:_n_WIRES_32896){d::check_cancel();auto _n_binding_33813=_n_item_33812;
double _n_ax_33169=d::at(_n_binding_33813,0.0);
double _n_ah_33170=d::at(_n_binding_33813,1.0);
double _n_az_33171=d::at(_n_binding_33813,2.0);
double _n_bx_33172=d::at(_n_binding_33813,3.0);
double _n_bh_33173=d::at(_n_binding_33813,4.0);
double _n_bz_33174=d::at(_n_binding_33813,5.0);
double _n_sag_33175=d::at(_n_binding_33813,6.0);
{
double _n_px_33176=0.0;
double _n_py_33177=0.0;
double _n_ps_33178=0.0;
{double _n_i_33179=0.0;
for(;d::truth((_n_i_33179<=120.0));(void)((_n_i_33179++))){d::check_cancel();double _n_q_33180=(_n_i_33179/120.0);
double _n_wx_33181=_n_mix_32906(_n_ax_33169,_n_bx_33172,_n_q_33180);
double _n_wz_33182=_n_mix_32906(_n_az_33171,_n_bz_33174,_n_q_33180);
double _n_wh_33183=(_n_mix_32906(_n_ah_33170,_n_bh_33173,_n_q_33180)-(((_n_sag_33175*4.0)*_n_q_33180)*(1.0-_n_q_33180)));
double _n_s_33184=(_n_F_32860/_n_wz_33182);
double _n_sx_33185=(_n_VX_32858+(_n_wx_33181*_n_s_33184));
double _n_sy_33186=(_n_HY_32859-((_n_wh_33183-_n_EYE_32861)*_n_s_33184));
if(d::truth((_n_i_33179>0.0))){d::check_cancel();double _n_minx_33187=([&](){auto _n_argument_33814=0.0;auto _n_argument_33815=std::floor((d::minimum({_n_px_33176,_n_sx_33185})-1.0));return d::maximum({_n_argument_33814,_n_argument_33815});})();
double _n_maxx_33188=([&](){auto _n_argument_33816=(_n_W_32856-1.0);auto _n_argument_33817=std::ceil((d::maximum({_n_px_33176,_n_sx_33185})+1.0));return d::minimum({_n_argument_33816,_n_argument_33817});})();
double _n_miny_33189=([&](){auto _n_argument_33818=0.0;auto _n_argument_33819=std::floor((d::minimum({_n_py_33177,_n_sy_33186})-1.0));return d::maximum({_n_argument_33818,_n_argument_33819});})();
double _n_maxy_33190=([&](){auto _n_argument_33820=(_n_H_32857-1.0);auto _n_argument_33821=std::ceil((d::maximum({_n_py_33177,_n_sy_33186})+1.0));return d::minimum({_n_argument_33820,_n_argument_33821});})();
double _n_dx_33191=(_n_sx_33185-_n_px_33176);
double _n_dy_33192=(_n_sy_33186-_n_py_33177);
double _n_len2_33193=([&]()->double{auto _n_logical_33822=((_n_dx_33191*_n_dx_33191)+(_n_dy_33192*_n_dy_33192));return d::truth(_n_logical_33822)?_n_logical_33822:0.000001;})();
{double _n_r_33194=_n_miny_33189;
for(;d::truth((_n_r_33194<=_n_maxy_33190));(void)((_n_r_33194++))){d::check_cancel();{double _n_x_33195=_n_minx_33187;
for(;d::truth((_n_x_33195<=_n_maxx_33188));(void)((_n_x_33195++))){d::check_cancel();double _n_k_33196=((_n_r_33194*_n_W_32856)+_n_x_33195);
double _n_kk_33197=_n_clamp_32904((((((_n_x_33195+0.5)-_n_px_33176)*_n_dx_33191)+(((_n_r_33194+0.5)-_n_py_33177)*_n_dy_33192))/_n_len2_33193));
double _n_ex_33198=(((_n_px_33176+(_n_dx_33191*_n_kk_33197))-_n_x_33195)-0.5);
double _n_ey_33199=(((_n_py_33177+(_n_dy_33192*_n_kk_33197))-_n_r_33194)-0.5);
double _n_cov_33200=(_n_clamp_32904((1.15-(std::sqrt(((_n_ex_33198*_n_ex_33198)+(_n_ey_33199*_n_ey_33199)))*1.5)))*0.9);
double _n_s2_33201=_n_mix_32906(_n_ps_33178,_n_s_33184,_n_kk_33197);
if((d::truth((_n_cov_33200<0.05))||d::truth((d::at(this->_n_S_32915,_n_k_33196)>=_n_s2_33201)))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_33823=this->_n_AR_32919;auto _n_index_33824=_n_k_33196;auto _n_value_33825=_n_mix_32906(d::at(this->_n_AR_32919,_n_k_33196),0.05,_n_cov_33200);d::put(_n_array_33823,_n_index_33824,_n_value_33825);return _n_value_33825;})(),([&](){auto&& _n_array_33826=this->_n_AG_32920;auto _n_index_33827=_n_k_33196;auto _n_value_33828=_n_mix_32906(d::at(this->_n_AG_32920,_n_k_33196),0.05,_n_cov_33200);d::put(_n_array_33826,_n_index_33827,_n_value_33828);return _n_value_33828;})()),([&](){auto&& _n_array_33829=this->_n_AB_32921;auto _n_index_33830=_n_k_33196;auto _n_value_33831=_n_mix_32906(d::at(this->_n_AB_32921,_n_k_33196),0.07,_n_cov_33200);d::put(_n_array_33829,_n_index_33830,_n_value_33831);return _n_value_33831;})()));
(void)(((([&](){auto&& _n_array_33832=this->_n_ER_32916;auto _n_index_33833=_n_k_33196;auto _n_value_33834=(d::at(_n_array_33832,_n_index_33833)*(1.0-_n_cov_33200));d::put(_n_array_33832,_n_index_33833,_n_value_33834);return _n_value_33834;})(),([&](){auto&& _n_array_33835=this->_n_EG_32917;auto _n_index_33836=_n_k_33196;auto _n_value_33837=(d::at(_n_array_33835,_n_index_33836)*(1.0-_n_cov_33200));d::put(_n_array_33835,_n_index_33836,_n_value_33837);return _n_value_33837;})()),([&](){auto&& _n_array_33838=this->_n_EB_32918;auto _n_index_33839=_n_k_33196;auto _n_value_33840=(d::at(_n_array_33838,_n_index_33839)*(1.0-_n_cov_33200));d::put(_n_array_33838,_n_index_33839,_n_value_33840);return _n_value_33840;})()));
(void)(([&](){auto&& _n_array_33841=this->_n_KG_32922;auto _n_index_33842=_n_k_33196;auto _n_value_33843=_n_mix_32906(d::at(this->_n_KG_32922,_n_k_33196),0.8,_n_cov_33200);d::put(_n_array_33841,_n_index_33842,_n_value_33843);return _n_value_33843;})());
if((d::truth((d::at(this->_n_mat_32914,_n_k_33196)==_n_SKY_32869))||d::truth((d::at(this->_n_mat_32914,_n_k_33196)==_n_TOWER_32877)))){d::check_cancel();(void)(((([&](){auto&& _n_array_33844=this->_n_SR_32924;auto _n_index_33845=_n_k_33196;auto _n_value_33846=(d::at(_n_array_33844,_n_index_33845)*(1.0-_n_cov_33200));d::put(_n_array_33844,_n_index_33845,_n_value_33846);return _n_value_33846;})(),([&](){auto&& _n_array_33847=this->_n_SG_32925;auto _n_index_33848=_n_k_33196;auto _n_value_33849=(d::at(_n_array_33847,_n_index_33848)*(1.0-_n_cov_33200));d::put(_n_array_33847,_n_index_33848,_n_value_33849);return _n_value_33849;})()),([&](){auto&& _n_array_33850=this->_n_SB_32926;auto _n_index_33851=_n_k_33196;auto _n_value_33852=(d::at(_n_array_33850,_n_index_33851)*(1.0-_n_cov_33200));d::put(_n_array_33850,_n_index_33851,_n_value_33852);return _n_value_33852;})()));
}
if((d::truth((_n_cov_33200>0.45))&&d::truth((d::at(this->_n_mat_32914,_n_k_33196)!=_n_ROAD_32871)))){d::check_cancel();(void)((([&](){auto&& _n_array_33853=this->_n_mat_32914;auto _n_index_33854=_n_k_33196;auto _n_value_33855=((d::truth((d::at(this->_n_mat_32914,_n_k_33196)==_n_SKY_32869))||d::truth((d::at(this->_n_mat_32914,_n_k_33196)==_n_TOWER_32877)))?_n_WIRE_32876:d::at(this->_n_mat_32914,_n_k_33196));d::put(_n_array_33853,_n_index_33854,_n_value_33855);return _n_value_33855;})(),([&](){auto&& _n_array_33856=this->_n_S_32915;auto _n_index_33857=_n_k_33196;auto _n_value_33858=d::maximum({d::at(this->_n_S_32915,_n_k_33196),0.01});d::put(_n_array_33856,_n_index_33857,_n_value_33858);return _n_value_33858;})()));
}
}}
}}
}
(void)((((_n_px_33176=_n_sx_33185),(_n_py_33177=_n_sy_33186)),(_n_ps_33178=_n_s_33184)));
}}

}
}
{
double _n_s_33202=_n_VEND_S_32898;
double _n_s2_33203=(_n_s_33202/(1.0+((0.7*_n_s_33202)/_n_F_32860)));
d::Array<d::Array<double,false>,false> _n_CANS_33204=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.16,0.1},d::Array<double,false>{0.15,0.4,1.0},d::Array<double,false>{1.0,0.55,0.1},d::Array<double,false>{0.2,0.85,0.45},d::Array<double,false>{0.95,0.95,0.95},d::Array<double,false>{1.0,0.85,0.15},d::Array<double,false>{0.85,0.2,0.6}};
{double _n_r_33205=0.0;
for(;d::truth((_n_r_33205<_n_H_32857));(void)((_n_r_33205++))){d::check_cancel();double _n_y_33206=(_n_r_33205+0.5);
double _n_h0_33207=(_n_EYE_32861+((_n_HY_32859-_n_y_33206)/_n_s_33202));
{double _n_x_33208=40.0;
for(;d::truth((_n_x_33208<80.0));(void)((_n_x_33208++))){d::check_cancel();double _n_k_33209=((_n_r_33205*_n_W_32856)+_n_x_33208);
double _n_xc_33210=(_n_x_33208+0.5);
double _n_u_33211=(((_n_xc_33210-_n_VX_32858)/_n_s_33202)+3.15);
if(((((d::truth((_n_u_33211>=0.0))&&d::truth((_n_u_33211<=0.95)))&&d::truth((_n_h0_33207>=0.0)))&&d::truth((_n_h0_33207<=1.83)))&&d::truth((d::at(this->_n_S_32915,_n_k_33209)<_n_s_33202)))){d::check_cancel();(void)(([&](){auto&& _n_array_33859=this->_n_mat_32914;auto _n_index_33860=_n_k_33209;auto _n_value_33861=_n_VEND_32874;d::put(_n_array_33859,_n_index_33860,_n_value_33861);return _n_value_33861;})());
(void)(([&](){auto&& _n_array_33862=this->_n_S_32915;auto _n_index_33863=_n_k_33209;auto _n_value_33864=_n_s_33202;d::put(_n_array_33862,_n_index_33863,_n_value_33864);return _n_value_33864;})());
(void)(([&](){auto&& _n_array_33865=this->_n_grp_32923;auto _n_index_33866=_n_k_33209;auto _n_value_33867=0.0;d::put(_n_array_33865,_n_index_33866,_n_value_33867);return _n_value_33867;})());
double _n_cr_33212=0.62;
double _n_cg_33213=0.66;
double _n_cb_33214=0.74;
if((((d::truth((_n_u_33211>0.05))&&d::truth((_n_u_33211<0.9)))&&d::truth((_n_h0_33207>0.05)))&&d::truth((_n_h0_33207<1.78)))){d::check_cancel();if(d::truth((_n_h0_33207>1.5))){d::check_cancel();(void)((((_n_cr_33212=0.85),(_n_cg_33213=0.93)),(_n_cb_33214=1.0)));
if((d::truth((_n_h0_33207>1.6))&&d::truth((_n_h0_33207<1.71)))){d::check_cancel();(void)((((_n_cr_33212=1.0),(_n_cg_33213=0.18)),(_n_cb_33214=0.12)));
}
}else {d::check_cancel();if(d::truth((_n_h0_33207>0.53))){d::check_cancel();double _n_band_33215=(d::truth((_n_h0_33207>1.13))?0.0:(d::truth((_n_h0_33207>0.83))?1.0:2.0));
double _n_b0_33216=d::at(d::Array<double,false>{1.13,0.83,0.53},_n_band_33215);
double _n_hb_33217=(_n_h0_33207-_n_b0_33216);
double _n_slot_33218=std::floor(((_n_u_33211-0.08)/0.135));
double _n_su_33219=((_n_u_33211-0.08)-(_n_slot_33218*0.135));
(void)((((_n_cr_33212=0.82),(_n_cg_33213=0.9)),(_n_cb_33214=1.0)));
if(d::truth((_n_hb_33217<0.045))){d::check_cancel();bool _n_lit_33220=([&]()->bool{auto _n_logical_33868=([&]()->bool{auto _n_logical_33869=([&]()->bool{auto _n_logical_33870=(_n_su_33219>0.05);return d::truth(_n_logical_33870)?(_n_su_33219<0.09):_n_logical_33870;})();return d::truth(_n_logical_33869)?(_n_slot_33218>=0.0):_n_logical_33869;})();return d::truth(_n_logical_33868)?(_n_slot_33218<6.0):_n_logical_33868;})();
(void)((((_n_cr_33212=(d::truth(_n_lit_33220)?0.35:0.2)),(_n_cg_33213=(d::truth(_n_lit_33220)?0.75:0.22))),(_n_cb_33214=(d::truth(_n_lit_33220)?1.0:0.28))));
}else {d::check_cancel();if((((((d::truth((_n_hb_33217>0.07))&&d::truth((_n_hb_33217<0.26)))&&d::truth((_n_slot_33218>=0.0)))&&d::truth((_n_slot_33218<6.0)))&&d::truth((_n_su_33219>0.02)))&&d::truth((_n_su_33219<0.1)))){d::check_cancel();d::Array<double,false> _n_c_33221=d::at(_n_CANS_33204,std::floor((_n_hash_32899(_n_slot_33218,(_n_band_33215+3.0))*double(_n_CANS_33204.size()))));
(void)((((_n_cr_33212=(d::at(_n_c_33221,0.0)*0.95)),(_n_cg_33213=(d::at(_n_c_33221,1.0)*0.95))),(_n_cb_33214=(d::at(_n_c_33221,2.0)*0.95))));
}
}
}else {d::check_cancel();(void)((((_n_cr_33212=0.3),(_n_cg_33213=0.32)),(_n_cb_33214=0.38)));
if((((d::truth((_n_u_33211>0.12))&&d::truth((_n_u_33211<0.62)))&&d::truth((_n_h0_33207>0.1)))&&d::truth((_n_h0_33207<0.26)))){d::check_cancel();(void)((((_n_cr_33212=0.02),(_n_cg_33213=0.02)),(_n_cb_33214=0.03)));
}
if((((d::truth((_n_u_33211>0.7))&&d::truth((_n_u_33211<0.86)))&&d::truth((_n_h0_33207>0.3)))&&d::truth((_n_h0_33207<0.46)))){d::check_cancel();bool _n_read_33222=([&]()->bool{auto _n_logical_33871=(_n_h0_33207>0.38);return d::truth(_n_logical_33871)?(_n_h0_33207<0.44):_n_logical_33871;})();
(void)((((_n_cr_33212=(d::truth(_n_read_33222)?0.2:0.06)),(_n_cg_33213=(d::truth(_n_read_33222)?1.0:0.06))),(_n_cb_33214=(d::truth(_n_read_33222)?0.5:0.08))));
}
}
}
}
(void)(this->_n_emit_32928(_n_k_33209,_n_cr_33212,_n_cg_33213,_n_cb_33214));
}
}}
}}
double _n_xin_33223=(_n_VX_32858-(2.2*_n_s_33202));
double _n_xend_33224=(_n_VX_32858-(2.2*_n_s2_33203));
{double _n_x_33225=std::floor(_n_xin_33223);
for(;d::truth((_n_x_33225<std::ceil(_n_xend_33224)));(void)((_n_x_33225++))){d::check_cancel();double _n_sc_33226=(((_n_VX_32858-_n_x_33225)-0.5)/2.2);
if((d::truth((_n_sc_33226>_n_s_33202))||d::truth((_n_sc_33226<_n_s2_33203)))){d::check_cancel();continue;
}
double _n_along_33227=(((_n_F_32860/_n_sc_33226)-(_n_F_32860/_n_s_33202))/0.7);
{double _n_r_33228=0.0;
for(;d::truth((_n_r_33228<_n_H_32857));(void)((_n_r_33228++))){d::check_cancel();double _n_y_33229=(_n_r_33228+0.5);
double _n_h_33230=(_n_EYE_32861+((_n_HY_32859-_n_y_33229)/_n_sc_33226));
double _n_k_33231=((_n_r_33228*_n_W_32856)+_n_x_33225);
if(((d::truth((_n_h_33230<0.0))||d::truth((_n_h_33230>1.83)))||d::truth((d::at(this->_n_S_32915,_n_k_33231)>=_n_sc_33226)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_33872=this->_n_mat_32914;auto _n_index_33873=_n_k_33231;auto _n_value_33874=_n_VEND_32874;d::put(_n_array_33872,_n_index_33873,_n_value_33874);return _n_value_33874;})());
(void)(([&](){auto&& _n_array_33875=this->_n_S_32915;auto _n_index_33876=_n_k_33231;auto _n_value_33877=_n_sc_33226;d::put(_n_array_33875,_n_index_33876,_n_value_33877);return _n_value_33877;})());
bool _n_seam_33232=(std::fabs((_n_along_33227-0.5))<0.04);
double _n_v_33233=(((d::truth((_n_h_33230>1.72))?0.5:0.36)*(d::truth(_n_seam_33232)?0.6:1.0))*(1.0-(0.3*_n_along_33227)));
(void)(this->_n_emit_32928(_n_k_33231,(_n_v_33233*0.92),(_n_v_33233*0.96),(_n_v_33233*1.05)));
}}
}}

}
this->_n_bulbs_32938=d::Array<d::Array<double,false>,false>{};
this->_n_order_32939=d::map(_n_SIGNS_32889,[&]( std::shared_ptr<_n_Record_32890> _a0,double _a1) mutable ->double{std::shared_ptr<_n_Record_32890> _n___33234=_a0;
double _n_i_33235=_a1;
return _n_i_33235;}).sort([=]( double _a0,double _a1) mutable ->double{double _n_a_33236=_a0;
double _n_b_33237=_a1;
return (d::at(_n_SIGNS_32889,_n_a_33236)->_p_s-d::at(_n_SIGNS_32889,_n_b_33237)->_p_s);});
for(auto &&_n_item_33878:this->_n_order_32939){d::check_cancel();double _n_si_33238=_n_item_33878;
{
std::shared_ptr<_n_Record_32890> _n_sg_33239=d::at(_n_SIGNS_32889,_n_si_33238);
auto _n_binding_33879=_n_sg_33239;
double _n_side_33240=_n_binding_33879->_p_side;
double _n_s_33241=_n_binding_33879->_p_s;
double _n_g_33242=_n_binding_33879->_p_g;
double _n_kind_33243=_n_binding_33879->_p_kind;
d::Array<double,false> _n_hue_33244=_n_binding_33879->_p_hue;
double _n_w_33245=_n_binding_33879->_p_w;
double _n_xo_33246=d::round((_n_VX_32858+((_n_side_33240*([&]()->double{auto _n_logical_33880=_n_sg_33239->_p_edge;return d::present(_n_logical_33880)?d::read(_n_logical_33880):_n_HALF_32862;})())*_n_s_33241)));
double _n_x0_33247=(d::truth((_n_side_33240<0.0))?_n_xo_33246:(_n_xo_33246-_n_w_33245));
double _n_x1_33248=(_n_x0_33247+_n_w_33245);
double _n_y1_33249=d::round((_n_HY_32859-((_n_sg_33239->_p_hb-_n_EYE_32861)*_n_s_33241)));
d::Array<d::String,false> _n_text_33250=(d::truth(_n_sg_33239->_p_text)?d::split(d::read(_n_sg_33239->_p_text),d::String(u" ")):d::Array<d::String,false>{});
double _n_n_33251=double(_n_text_33250.size());
double _n_m_33252=(d::truth((_n_kind_33243==_n_BULBS_32887))?3.0:(_n_g_33242+1.0));
double _n_step_33253=(((5.0*_n_g_33242)+_n_g_33242)+1.0);
double _n_hc_33254=(d::truth(_n_g_33242)?((((2.0*_n_m_33252)+(_n_n_33251*_n_step_33253))-_n_g_33242)-1.0):d::read(_n_sg_33239->_p_rows));
double _n_y0_33255=(_n_y1_33249-_n_hc_33254);
double _n_gx_33256=(_n_x0_33247+std::floor(((_n_w_33245-(5.0*_n_g_33242))/2.0)));
d::Array<double,false> _n_pale_33257=d::Array<double,false>{_n_mix_32906(d::at(_n_hue_33244,0.0),1.0,0.32),_n_mix_32906(d::at(_n_hue_33244,1.0),1.0,0.32),_n_mix_32906(d::at(_n_hue_33244,2.0),1.0,0.32)};
double _n_ring_33258=0.0;
{double _n_r_33259=d::maximum({0.0,_n_y0_33255});
for(;d::truth((_n_r_33259<d::minimum({_n_H_32857,_n_y1_33249})));(void)((_n_r_33259++))){d::check_cancel();{double _n_x_33260=d::maximum({0.0,_n_x0_33247});
for(;d::truth((_n_x_33260<d::minimum({_n_W_32856,_n_x1_33248})));(void)((_n_x_33260++))){d::check_cancel();double _n_k_33261=((_n_r_33259*_n_W_32856)+_n_x_33260);
if(d::truth((d::at(this->_n_S_32915,_n_k_33261)>=_n_s_33241))){d::check_cancel();continue;
}
double _n_i_33262=(_n_x_33260-_n_x0_33247);
double _n_j_33263=(_n_r_33259-_n_y0_33255);
double _n_jb_33264=((_n_y1_33249-1.0)-_n_r_33259);
bool _n_edge_33265=([&]()->bool{auto _n_logical_33881=([&]()->bool{auto _n_logical_33882=([&]()->bool{auto _n_logical_33883=(_n_i_33262==0.0);return d::truth(_n_logical_33883)?_n_logical_33883:(_n_i_33262==(_n_w_33245-1.0));})();return d::truth(_n_logical_33882)?_n_logical_33882:(_n_j_33263==0.0);})();return d::truth(_n_logical_33881)?_n_logical_33881:(_n_jb_33264==0.0);})();
bool _n_stroke_33266=false;
double _n_gi_33267=(-d::number(1.0));
if(d::truth(_n_g_33242)){d::check_cancel();(void)((_n_gi_33267=std::floor(((_n_j_33263-_n_m_33252)/_n_step_33253))));
double _n_gr_33268=((_n_j_33263-_n_m_33252)-(_n_gi_33267*_n_step_33253));
double _n_gc_33269=(_n_x_33260-_n_gx_33256);
if((((((d::truth((_n_gi_33267>=0.0))&&d::truth((_n_gi_33267<_n_n_33251)))&&d::truth((_n_gr_33268>=0.0)))&&d::truth((_n_gr_33268<(5.0*_n_g_33242))))&&d::truth((_n_gc_33269>=0.0)))&&d::truth((_n_gc_33269<(5.0*_n_g_33242))))){d::check_cancel();(void)((_n_stroke_33266=(d::at(_n_FONT_32888.get(d::at(_n_text_33250,_n_gi_33267)),([&](){auto _n_left_33884=(std::floor((_n_gr_33268/_n_g_33242))*6.0);auto _n_right_33885=std::floor((_n_gc_33269/_n_g_33242));return (_n_left_33884+_n_right_33885);})())==d::String(u"#"))));
}
}else {d::check_cancel();if(((d::truth((_n_w_33245>2.0))&&d::truth((_n_i_33262>0.0)))&&d::truth((_n_i_33262<(_n_w_33245-1.0))))){d::check_cancel();(void)((_n_stroke_33266=([&]()->bool{auto _n_logical_33886=(d::mod(_n_j_33263,4.0)==1.0);return d::truth(_n_logical_33886)?_n_logical_33886:(d::mod(_n_j_33263,4.0)==2.0);})()));
}
}
double _n_cr_33270{};
double _n_cg_33271{};
double _n_cb_33272{};
if(d::truth((_n_kind_33243==_n_NEON_32884))){d::check_cancel();if(d::truth(_n_edge_33265)){d::check_cancel();(void)((((_n_cr_33270=d::at(_n_hue_33244,0.0)),(_n_cg_33271=d::at(_n_hue_33244,1.0))),(_n_cb_33272=d::at(_n_hue_33244,2.0))));
}else {d::check_cancel();if(d::truth(_n_stroke_33266)){d::check_cancel();(void)((((_n_cr_33270=d::at(_n_pale_33257,0.0)),(_n_cg_33271=d::at(_n_pale_33257,1.0))),(_n_cb_33272=d::at(_n_pale_33257,2.0))));
}else {d::check_cancel();(void)((((_n_cr_33270=(0.03+(d::at(_n_hue_33244,0.0)*0.05))),(_n_cg_33271=(0.025+(d::at(_n_hue_33244,1.0)*0.05)))),(_n_cb_33272=(0.045+(d::at(_n_hue_33244,2.0)*0.05)))));
}
}
}else {d::check_cancel();if(d::truth((_n_kind_33243==_n_PANEL_32885))){d::check_cancel();if(d::truth(_n_stroke_33266)){d::check_cancel();(void)((((_n_cr_33270=(d::at(_n_hue_33244,0.0)*0.07)),(_n_cg_33271=(d::at(_n_hue_33244,1.0)*0.07))),(_n_cb_33272=(d::at(_n_hue_33244,2.0)*0.07))));
}else {d::check_cancel();if((d::truth(_n_edge_33265)&&d::truth((_n_w_33245>3.0)))){d::check_cancel();(void)((((_n_cr_33270=(d::at(_n_hue_33244,0.0)*0.55)),(_n_cg_33271=(d::at(_n_hue_33244,1.0)*0.55))),(_n_cb_33272=(d::at(_n_hue_33244,2.0)*0.55))));
}else {d::check_cancel();(void)((((_n_cr_33270=(d::at(_n_pale_33257,0.0)*0.92)),(_n_cg_33271=(d::at(_n_pale_33257,1.0)*0.92))),(_n_cb_33272=(d::at(_n_pale_33257,2.0)*0.92))));
}
}
}else {d::check_cancel();if(d::truth((_n_kind_33243==_n_WHITE_32886))){d::check_cancel();if(d::truth(_n_stroke_33266)){d::check_cancel();(void)((((_n_cr_33270=(d::at(_n_hue_33244,0.0)*0.9)),(_n_cg_33271=(d::at(_n_hue_33244,1.0)*0.9))),(_n_cb_33272=(d::at(_n_hue_33244,2.0)*0.9))));
}else {d::check_cancel();if(d::truth(_n_edge_33265)){d::check_cancel();(void)((((_n_cr_33270=(d::at(_n_hue_33244,0.0)*0.7)),(_n_cg_33271=(d::at(_n_hue_33244,1.0)*0.7))),(_n_cb_33272=(d::at(_n_hue_33244,2.0)*0.7))));
}else {d::check_cancel();(void)((((_n_cr_33270=0.95),(_n_cg_33271=0.93)),(_n_cb_33272=0.88)));
}
}
}else {d::check_cancel();if(d::truth(_n_edge_33265)){d::check_cancel();(void)((((_n_cr_33270=0.04),(_n_cg_33271=0.03)),(_n_cb_33272=0.03)));
if(d::truth((d::mod((_n_i_33262+_n_j_33263),2.0)==0.0))){d::check_cancel();(void)(this->_n_bulbs_32938.push(d::Array<double,false>{_n_k_33261,(_n_ring_33258++)}));
}
}else {d::check_cancel();if(d::truth(_n_stroke_33266)){d::check_cancel();(void)((((_n_cr_33270=1.0),(_n_cg_33271=0.95)),(_n_cb_33272=0.86)));
}else {d::check_cancel();(void)((((_n_cr_33270=(d::at(_n_hue_33244,0.0)*0.42)),(_n_cg_33271=(d::at(_n_hue_33244,1.0)*0.42))),(_n_cb_33272=(d::at(_n_hue_33244,2.0)*0.42))));
}
}
}
}
}
(void)(([&](){auto&& _n_array_33887=this->_n_mat_32914;auto _n_index_33888=_n_k_33261;auto _n_value_33889=_n_SIGN_32872;d::put(_n_array_33887,_n_index_33888,_n_value_33889);return _n_value_33889;})());
(void)(([&](){auto&& _n_array_33890=this->_n_S_32915;auto _n_index_33891=_n_k_33261;auto _n_value_33892=_n_s_33241;d::put(_n_array_33890,_n_index_33891,_n_value_33892);return _n_value_33892;})());
(void)(this->_n_emit_32928(_n_k_33261,_n_cr_33270,_n_cg_33271,_n_cb_33272));
(void)(([&](){auto&& _n_array_33893=this->_n_grp_32923;auto _n_index_33894=_n_k_33261;auto _n_value_33895=([&]()->double{auto _n_logical_33896=_n_sg_33239->_p_group;return d::present(_n_logical_33896)?d::read(_n_logical_33896):(((d::truth((d::present(_n_sg_33239->_p_fail)))&&d::truth((_n_gi_33267==d::read(_n_sg_33239->_p_fail))))&&d::truth(_n_stroke_33266))?3.0:0.0);})();d::put(_n_array_33893,_n_index_33894,_n_value_33895);return _n_value_33895;})());
}}
}}
double _n_xin_33273=(d::truth((_n_side_33240<0.0))?_n_x1_33248:_n_x0_33247);
double _n_xwIn_33274=((_n_xin_33273-_n_VX_32858)/_n_s_33241);
double _n_s2_33275=(_n_s_33241/(1.0+((_n_THICK_32863*_n_s_33241)/_n_F_32860)));
double _n_xend_33276=(_n_VX_32858+(_n_xwIn_33274*_n_s2_33275));
double _n_hb_33277=(_n_EYE_32861+((_n_HY_32859-_n_y1_33249)/_n_s_33241));
double _n_ht_33278=(_n_EYE_32861+((_n_HY_32859-_n_y0_33255)/_n_s_33241));
double _n_lo_33279=std::floor(d::minimum({_n_xin_33273,_n_xend_33276}));
double _n_hi_33280=std::ceil(d::maximum({_n_xin_33273,_n_xend_33276}));
{double _n_x_33281=d::maximum({0.0,_n_lo_33279});
for(;d::truth((_n_x_33281<d::minimum({_n_W_32856,_n_hi_33280})));(void)((_n_x_33281++))){d::check_cancel();double _n_sc_33282=(((_n_x_33281+0.5)-_n_VX_32858)/_n_xwIn_33274);
if((d::truth((_n_sc_33282>_n_s_33241))||d::truth((_n_sc_33282<_n_s2_33275)))){d::check_cancel();continue;
}
double _n_yt_33283=(_n_HY_32859-((_n_ht_33278-_n_EYE_32861)*_n_sc_33282));
double _n_yb_33284=(_n_HY_32859-((_n_hb_33277-_n_EYE_32861)*_n_sc_33282));
{double _n_r_33285=([&](){auto _n_argument_33897=0.0;auto _n_argument_33898=std::floor(_n_yt_33283);return d::maximum({_n_argument_33897,_n_argument_33898});})();
for(;d::truth((_n_r_33285<([&](){auto _n_argument_33899=_n_H_32857;auto _n_argument_33900=std::ceil(_n_yb_33284);return d::minimum({_n_argument_33899,_n_argument_33900});})()));(void)((_n_r_33285++))){d::check_cancel();double _n_y_33286=(_n_r_33285+0.5);
double _n_k_33287=((_n_r_33285*_n_W_32856)+_n_x_33281);
if(((d::truth((_n_y_33286<_n_yt_33283))||d::truth((_n_y_33286>=_n_yb_33284)))||d::truth((d::at(this->_n_S_32915,_n_k_33287)>=_n_sc_33282)))){d::check_cancel();continue;
}
double _n_v_33288=(d::truth((_n_kind_33243==_n_NEON_32884))?0.14:(d::truth((_n_kind_33243==_n_BULBS_32887))?0.3:0.5));
d::Array<double,false> _n_c_33289=(d::truth((_n_kind_33243==_n_WHITE_32886))?d::Array<double,false>{0.95,0.93,0.88}:(d::truth((_n_kind_33243==_n_NEON_32884))?_n_hue_33244:_n_pale_33257));
(void)(([&](){auto&& _n_array_33901=this->_n_mat_32914;auto _n_index_33902=_n_k_33287;auto _n_value_33903=_n_SIDE_32873;d::put(_n_array_33901,_n_index_33902,_n_value_33903);return _n_value_33903;})());
(void)(([&](){auto&& _n_array_33904=this->_n_S_32915;auto _n_index_33905=_n_k_33287;auto _n_value_33906=_n_sc_33282;d::put(_n_array_33904,_n_index_33905,_n_value_33906);return _n_value_33906;})());
(void)(this->_n_emit_32928(_n_k_33287,(d::at(_n_c_33289,0.0)*_n_v_33288),(d::at(_n_c_33289,1.0)*_n_v_33288),(d::at(_n_c_33289,2.0)*_n_v_33288)));
(void)(([&](){auto&& _n_array_33907=this->_n_grp_32923;auto _n_index_33908=_n_k_33287;auto _n_value_33909=([&]()->double{auto _n_logical_33910=_n_sg_33239->_p_group;return d::present(_n_logical_33910)?d::read(_n_logical_33910):0.0;})();d::put(_n_array_33907,_n_index_33908,_n_value_33909);return _n_value_33909;})());
}}
}}

}
}
{
double _n_s_33290=18.0;
double _n_y0_33291=d::round((_n_HY_32859+((_n_EYE_32861-0.14)*_n_s_33290)));
double _n_y1_33292=d::round((_n_HY_32859+(_n_EYE_32861*_n_s_33290)));
for(auto &&_n_item_33911:d::Array<double,false>{2.1,2.4}){d::check_cancel();double _n_xw_33293=_n_item_33911;
{
double _n_x_33294=std::floor((_n_VX_32858+(_n_xw_33293*_n_s_33290)));
{double _n_r_33295=_n_y0_33291;
for(;d::truth((_n_r_33295<_n_y1_33292));(void)((_n_r_33295++))){d::check_cancel();double _n_k_33296=((_n_r_33295*_n_W_32856)+_n_x_33294);
if(d::truth((d::at(this->_n_S_32915,_n_k_33296)<_n_s_33290))){d::check_cancel();(void)(((([&](){auto&& _n_array_33912=this->_n_mat_32914;auto _n_index_33913=_n_k_33296;auto _n_value_33914=_n_POLE_32875;d::put(_n_array_33912,_n_index_33913,_n_value_33914);return _n_value_33914;})(),([&](){auto&& _n_array_33915=this->_n_S_32915;auto _n_index_33916=_n_k_33296;auto _n_value_33917=_n_s_33290;d::put(_n_array_33915,_n_index_33916,_n_value_33917);return _n_value_33917;})()),this->_n_surface_32929(_n_k_33296,0.05,0.05,0.06,0.5)));
}
}}

}
}

}
this->_n_LR_32941=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_LG_32942=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_LB_32943=d::Array<float,true>(size_t(this->_n_N_32910));
{double _n_li_33321=0.0;
for(;d::truth((_n_li_33321<double(_n_LANTERNS_32897.size())));(void)((_n_li_33321++))){d::check_cancel();(void)(this->_n_lantern_32940(_n_li_33321,0.0,[=]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_k_33322=_a0;
double _n_r_33323=_a1;
double _n_g_33324=_a2;
double _n_b_33325=_a3;
((([&](){auto&& _n_array_33918=this->_n_LR_32941;auto _n_index_33919=_n_k_33322;auto _n_value_33920=_n_r_33323;d::put(_n_array_33918,_n_index_33919,_n_value_33920);return _n_value_33920;})(),([&](){auto&& _n_array_33921=this->_n_LG_32942;auto _n_index_33922=_n_k_33322;auto _n_value_33923=_n_g_33324;d::put(_n_array_33921,_n_index_33922,_n_value_33923);return _n_value_33923;})()),([&](){(void)(([&](){auto&& _n_array_33924=this->_n_LB_32943;auto _n_index_33925=_n_k_33322;auto _n_value_33926=_n_b_33325;d::put(_n_array_33924,_n_index_33925,_n_value_33926);return _n_value_33926;})());})());}));
}}
this->_n_fog_32946=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_HZR_32947=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_HZG_32948=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_HZB_32949=d::Array<float,true>(size_t(this->_n_N_32910));
{double _n_k_33345=0.0;
for(;d::truth((_n_k_33345<this->_n_N_32910));(void)((_n_k_33345++))){d::check_cancel();double _n_s_33346=d::at(this->_n_S_32915,_n_k_33345);
(void)(([&](){auto&& _n_array_33927=this->_n_fog_32946;auto _n_index_33928=_n_k_33345;auto _n_value_33929=(d::truth((d::at(this->_n_mat_32914,_n_k_33345)==_n_TOWER_32877))?0.1:(d::truth((_n_s_33346>0.0))?(1.0-std::exp((((-d::number(_n_F_32860))/_n_s_33346)/_n_ZF_32864))):0.0));d::put(_n_array_33927,_n_index_33928,_n_value_33929);return _n_value_33929;})());
double _n_x_33347=d::mod(_n_k_33345,_n_W_32856);
double _n_y_33348=(std::floor((_n_k_33345/_n_W_32856))+0.5);
double _n_g_33349=(_n_endGlow_32903((_n_x_33347+0.5),_n_y_33348)*1.1);
(void)(((([&](){auto&& _n_array_33930=this->_n_HZR_32947;auto _n_index_33931=_n_k_33345;auto _n_value_33932=(0.1+(_n_g_33349*d::at(_n_END_32902,0.0)));d::put(_n_array_33930,_n_index_33931,_n_value_33932);return _n_value_33932;})(),([&](){auto&& _n_array_33933=this->_n_HZG_32948;auto _n_index_33934=_n_k_33345;auto _n_value_33935=(0.07+(_n_g_33349*d::at(_n_END_32902,1.0)));d::put(_n_array_33933,_n_index_33934,_n_value_33935);return _n_value_33935;})()),([&](){auto&& _n_array_33936=this->_n_HZB_32949;auto _n_index_33937=_n_k_33345;auto _n_value_33938=(0.16+(_n_g_33349*d::at(_n_END_32902,2.0)));d::put(_n_array_33936,_n_index_33937,_n_value_33938);return _n_value_33938;})()));
}}
this->_n_XH_32951=(_n_H_32857+_n_EXT_32865);
auto _n_binding_33939=this->_n_shade_32950(this->_n_ER_32916,this->_n_EG_32917,this->_n_EB_32918);
this->_n_CR_32953=d::at(_n_binding_33939,0.0);
this->_n_CG_32954=d::at(_n_binding_33939,1.0);
this->_n_CB_32955=d::at(_n_binding_33939,2.0);
this->_n_GR_32956=d::at(_n_binding_33939,3.0);
this->_n_GG_32957=d::at(_n_binding_33939,4.0);
this->_n_GB_32958=d::at(_n_binding_33939,5.0);
auto _n_binding_33940=this->_n_mirror_32952(this->_n_CR_32953,this->_n_CG_32954,this->_n_CB_32955);
this->_n_RR_32959=d::at(_n_binding_33940,0.0);
this->_n_RG_32960=d::at(_n_binding_33940,1.0);
this->_n_RB_32961=d::at(_n_binding_33940,2.0);
this->_n_NG_32962=3.0;
this->_n_dropC_32963=d::Array<std::shared_ptr<std::tuple<d::Array<int32_t,true>,d::Array<float,true>>>,false>{};
this->_n_dropR_32964=d::Array<d::Array<d::Array<float,true>,false>,false>{};
{double _n_gi_33408=1.0;
for(;d::truth((_n_gi_33408<=this->_n_NG_32962));(void)((_n_gi_33408++))){d::check_cancel();d::Array<float,true> _n_er_33409=this->_n_ER_32916.slice();
d::Array<float,true> _n_eg_33410=this->_n_EG_32917.slice();
d::Array<float,true> _n_eb_33411=this->_n_EB_32918.slice();
{double _n_k_33412=0.0;
for(;d::truth((_n_k_33412<this->_n_N_32910));(void)((_n_k_33412++))){d::check_cancel();if(d::truth((d::at(this->_n_grp_32923,_n_k_33412)!=_n_gi_33408))){d::check_cancel();continue;
}
if(d::truth((_n_gi_33408==3.0))){d::check_cancel();(void)(((([&](){auto&& _n_array_33941=_n_er_33409;auto _n_index_33942=_n_k_33412;auto _n_value_33943=(0.03+(d::at(_n_PINK_32880,0.0)*0.05));d::put(_n_array_33941,_n_index_33942,_n_value_33943);return _n_value_33943;})(),([&](){auto&& _n_array_33944=_n_eg_33410;auto _n_index_33945=_n_k_33412;auto _n_value_33946=(0.025+(d::at(_n_PINK_32880,1.0)*0.05));d::put(_n_array_33944,_n_index_33945,_n_value_33946);return _n_value_33946;})()),([&](){auto&& _n_array_33947=_n_eb_33411;auto _n_index_33948=_n_k_33412;auto _n_value_33949=(0.045+(d::at(_n_PINK_32880,2.0)*0.05));d::put(_n_array_33947,_n_index_33948,_n_value_33949);return _n_value_33949;})()));
}else {d::check_cancel();(void)(((([&](){auto&& _n_array_33950=_n_er_33409;auto _n_index_33951=_n_k_33412;auto _n_value_33952=(d::at(_n_array_33950,_n_index_33951)*0.08);d::put(_n_array_33950,_n_index_33951,_n_value_33952);return _n_value_33952;})(),([&](){auto&& _n_array_33953=_n_eg_33410;auto _n_index_33954=_n_k_33412;auto _n_value_33955=(d::at(_n_array_33953,_n_index_33954)*0.08);d::put(_n_array_33953,_n_index_33954,_n_value_33955);return _n_value_33955;})()),([&](){auto&& _n_array_33956=_n_eb_33411;auto _n_index_33957=_n_k_33412;auto _n_value_33958=(d::at(_n_array_33956,_n_index_33957)*0.08);d::put(_n_array_33956,_n_index_33957,_n_value_33958);return _n_value_33958;})()));
}
}}
auto _n_binding_33959=this->_n_shade_32950(_n_er_33409,_n_eg_33410,_n_eb_33411);
d::Array<float,true> _n_cr_33413=d::at(_n_binding_33959,0.0);
d::Array<float,true> _n_cg_33414=d::at(_n_binding_33959,1.0);
d::Array<float,true> _n_cb_33415=d::at(_n_binding_33959,2.0);
d::Array<double,false> _n_ks_33416=d::Array<double,false>{};
d::Array<double,false> _n_vs_33417=d::Array<double,false>{};
{double _n_k_33418=0.0;
for(;d::truth((_n_k_33418<this->_n_N_32910));(void)((_n_k_33418++))){d::check_cancel();double _n_d_33419=([&](){auto _n_left_33960=([&](){auto _n_left_33962=std::fabs((d::at(this->_n_CR_32953,_n_k_33418)-d::at(_n_cr_33413,_n_k_33418)));auto _n_right_33963=std::fabs((d::at(this->_n_CG_32954,_n_k_33418)-d::at(_n_cg_33414,_n_k_33418)));return (_n_left_33962+_n_right_33963);})();auto _n_right_33961=std::fabs((d::at(this->_n_CB_32955,_n_k_33418)-d::at(_n_cb_33415,_n_k_33418)));return (_n_left_33960+_n_right_33961);})();
if(d::truth((_n_d_33419>0.004))){d::check_cancel();(void)((_n_ks_33416.push(_n_k_33418),_n_vs_33417.push((d::at(this->_n_CR_32953,_n_k_33418)-d::at(_n_cr_33413,_n_k_33418)),(d::at(this->_n_CG_32954,_n_k_33418)-d::at(_n_cg_33414,_n_k_33418)),(d::at(this->_n_CB_32955,_n_k_33418)-d::at(_n_cb_33415,_n_k_33418)))));
}
}}
(void)(this->_n_dropC_32963.push(std::make_shared<std::tuple<d::Array<int32_t,true>,d::Array<float,true>>>(d::Array<int32_t,true>(_n_ks_33416),d::Array<float,true>(_n_vs_33417))));
auto _n_binding_33964=this->_n_mirror_32952(_n_cr_33413,_n_cg_33414,_n_cb_33415);
d::Array<float,true> _n_rr_33420=d::at(_n_binding_33964,0.0);
d::Array<float,true> _n_rg_33421=d::at(_n_binding_33964,1.0);
d::Array<float,true> _n_rb_33422=d::at(_n_binding_33964,2.0);
(void)(this->_n_dropR_32964.push(d::Array<d::Array<float,true>,false>{d::map(this->_n_RR_32959,[&]( double _a0,double _a1) mutable ->double{double _n_v_33423=_a0;
double _n_k_33424=_a1;
return (_n_v_33423-d::at(_n_rr_33420,_n_k_33424));}),d::map(this->_n_RG_32960,[&]( double _a0,double _a1) mutable ->double{double _n_v_33425=_a0;
double _n_k_33426=_a1;
return (_n_v_33425-d::at(_n_rg_33421,_n_k_33426));}),d::map(this->_n_RB_32961,[&]( double _a0,double _a1) mutable ->double{double _n_v_33427=_a0;
double _n_k_33428=_a1;
return (_n_v_33427-d::at(_n_rb_33422,_n_k_33428));})}));
}}
{double _n_k_33429=0.0;
for(;d::truth((_n_k_33429<this->_n_N_32910));(void)((_n_k_33429++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_32914,_n_k_33429)!=_n_ROAD_32871))){d::check_cancel();continue;
}
double _n_s_33430=d::at(this->_n_S_32915,_n_k_33429);
double _n_d_33431=std::fabs(((d::mod(_n_k_33429,_n_W_32856)+0.5)-_n_VX_32858));
double _n_path_33432=([&](){auto _n_left_33965=std::exp((-d::number(std::pow((_n_d_33431/(1.4+(0.36*_n_s_33430))),1.6))));auto _n_right_33966=(0.16+(0.7*std::exp(((-d::number(_n_s_33430))/12.0))));return (_n_left_33965*_n_right_33966);})();
(void)(((([&](){auto&& _n_array_33967=this->_n_RR_32959;auto _n_index_33968=_n_k_33429;auto _n_value_33969=(d::at(_n_array_33967,_n_index_33968)+(_n_path_33432*d::at(_n_END_32902,0.0)));d::put(_n_array_33967,_n_index_33968,_n_value_33969);return _n_value_33969;})(),([&](){auto&& _n_array_33970=this->_n_RG_32960;auto _n_index_33971=_n_k_33429;auto _n_value_33972=(d::at(_n_array_33970,_n_index_33971)+(_n_path_33432*d::at(_n_END_32902,1.0)));d::put(_n_array_33970,_n_index_33971,_n_value_33972);return _n_value_33972;})()),([&](){auto&& _n_array_33973=this->_n_RB_32961;auto _n_index_33974=_n_k_33429;auto _n_value_33975=(d::at(_n_array_33973,_n_index_33974)+(_n_path_33432*d::at(_n_END_32902,2.0)));d::put(_n_array_33973,_n_index_33974,_n_value_33975);return _n_value_33975;})()));
}}
this->_n_road_32965=d::Array<double,false>{};
{double _n_k_33433=0.0;
for(;d::truth((_n_k_33433<this->_n_N_32910));(void)((_n_k_33433++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_32914,_n_k_33433)==_n_ROAD_32871))){d::check_cancel();(void)(this->_n_road_32965.push(_n_k_33433));
}
}}
this->_n_roadK_32966=d::Array<int32_t,true>(this->_n_road_32965);
this->_n_sky_32967=d::Array<double,false>{};
{double _n_k_33434=0.0;
for(;d::truth((_n_k_33434<this->_n_N_32910));(void)((_n_k_33434++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_32914,_n_k_33434)==_n_SKY_32869))){d::check_cancel();(void)(this->_n_sky_32967.push(_n_k_33434));
}
}}
this->_n_skyK_32968=d::Array<int32_t,true>(this->_n_sky_32967);
this->_n_CW_32969=400.0;
this->_n_cloud_32970=d::Array<float,true>(size_t((this->_n_CW_32969*_n_HY_32859)));
{double _n_r_33435=0.0;
for(;d::truth((_n_r_33435<_n_HY_32859));(void)((_n_r_33435++))){d::check_cancel();{double _n_x_33436=0.0;
for(;d::truth((_n_x_33436<this->_n_CW_32969));(void)((_n_x_33436++))){d::check_cancel();(void)(([&](){auto&& _n_array_33976=this->_n_cloud_32970;auto _n_index_33977=((_n_r_33435*this->_n_CW_32969)+_n_x_33436);auto _n_value_33978=_n_fbm_32901((_n_x_33436*0.03),(_n_r_33435*0.09),4.0,(this->_n_CW_32969*0.03));d::put(_n_array_33976,_n_index_33977,_n_value_33978);return _n_value_33978;})());
}}
}}
this->_n_LAYERS_32971=d::Array<d::Array<double,false>,false>{d::Array<double,false>{150.0,40.0,3.0,0.18,0.1},d::Array<double,false>{190.0,72.0,6.0,0.38,0.13},d::Array<double,false>{60.0,125.0,11.0,0.7,0.17}};
this->_n_drops_32972=d::Array<d::Array<double,false>,false>{};
(void)(d::forEach(this->_n_LAYERS_32971,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_33979=_a0;
double _n_count_33437=d::at(_n_binding_33979,0.0);
double _n_v_33438=d::at(_n_binding_33979,1.0);
double _n_len_33439=d::at(_n_binding_33979,2.0);
double _n_b_33440=d::at(_n_binding_33979,3.0);
double _n_sl_33441=d::at(_n_binding_33979,4.0);
double _n_li_33442=_a1;
{
{double _n_i_33443=0.0;
for(;d::truth((_n_i_33443<_n_count_33437));(void)((_n_i_33443++))){d::check_cancel();auto _n_h_33444=[&]( double _a0) mutable ->double{double _n_n_33445=_a0;
return _n_hash_32899(((_n_i_33443*7.0)+(_n_li_33442*1001.0)),_n_n_33445);};
(void)(this->_n_drops_32972.push(d::Array<double,false>{((_n_h_33444(1.0)*(_n_W_32856+30.0))-20.0),(_n_h_33444(2.0)*((_n_H_32857+_n_len_33439)+6.0)),(_n_v_33438*(0.85+(0.3*_n_h_33444(3.0)))),_n_len_33439,(_n_b_33440*(0.75+(0.5*_n_h_33444(4.0)))),_n_sl_33441}));
}}

}
}));
this->_n_FR_32973=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_FG_32974=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_FB_32975=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_rain_32976=d::Array<float,true>(size_t(this->_n_N_32910));
this->_n_hold_32977=d::Array<float,true>(size_t(this->_n_N_32910));
_render=[=]( double _a0,std::shared_ptr<_n_Record_33590> _a1) mutable ->d::String{double _n_t_33458=_a0;
auto _n_binding_33982=(d::present(_a1)?_a1:([&](){auto _n_object_33981=std::make_shared<_n_Record_33590>();return _n_object_33981;})());
std::optional<d::Array<uint8_t,true>> _n_color_33459=_n_binding_33982->_p_color;
{
(void)(((this->_n_FR_32973.set(this->_n_CR_32953),this->_n_FG_32974.set(this->_n_CG_32954)),this->_n_FB_32975.set(this->_n_CB_32955)));
d::Array<double,false> _n_mg_33460=d::Array<double,false>{1.0,this->_n_flicker_32980(1.0,_n_t_33458),this->_n_flicker_32980(2.0,_n_t_33458),this->_n_flicker_32980(3.0,_n_t_33458)};
{double _n_gi_33461=1.0;
for(;d::truth((_n_gi_33461<=this->_n_NG_32962));(void)((_n_gi_33461++))){d::check_cancel();double _n_off_33462=(1.0-d::at(_n_mg_33460,_n_gi_33461));
if(d::truth((_n_off_33462<=0.0))){d::check_cancel();continue;
}
auto _n_binding_33983=d::at(this->_n_dropC_32963,(_n_gi_33461-1.0));
d::Array<int32_t,true> _n_ks_33463=std::get<0>(*_n_binding_33983);
d::Array<float,true> _n_vs_33464=std::get<1>(*_n_binding_33983);
{double _n_i_33465=0.0;
for(;d::truth((_n_i_33465<double(_n_ks_33463.size())));(void)((_n_i_33465++))){d::check_cancel();double _n_k_33466=d::at(_n_ks_33463,_n_i_33465);
(void)(((([&](){auto&& _n_array_33984=this->_n_FR_32973;auto _n_index_33985=_n_k_33466;auto _n_value_33986=(d::at(_n_array_33984,_n_index_33985)-(d::at(_n_vs_33464,(_n_i_33465*3.0))*_n_off_33462));d::put(_n_array_33984,_n_index_33985,_n_value_33986);return _n_value_33986;})(),([&](){auto&& _n_array_33987=this->_n_FG_32974;auto _n_index_33988=_n_k_33466;auto _n_value_33989=(d::at(_n_array_33987,_n_index_33988)-(d::at(_n_vs_33464,((_n_i_33465*3.0)+1.0))*_n_off_33462));d::put(_n_array_33987,_n_index_33988,_n_value_33989);return _n_value_33989;})()),([&](){auto&& _n_array_33990=this->_n_FB_32975;auto _n_index_33991=_n_k_33466;auto _n_value_33992=(d::at(_n_array_33990,_n_index_33991)-(d::at(_n_vs_33464,((_n_i_33465*3.0)+2.0))*_n_off_33462));d::put(_n_array_33990,_n_index_33991,_n_value_33992);return _n_value_33992;})()));
}}
}}
double _n_drift_33467=(_n_t_33458*0.9);
{double _n_i_33468=0.0;
for(;d::truth((_n_i_33468<double(this->_n_skyK_32968.size())));(void)((_n_i_33468++))){d::check_cancel();double _n_k_33469=d::at(this->_n_skyK_32968,_n_i_33468);
double _n_x_33470=d::mod(_n_k_33469,_n_W_32856);
double _n_r_33471=double(d::i32((_n_k_33469/_n_W_32856))|d::i32(0.0));
double _n_sx_33472=(_n_x_33470+_n_drift_33467);
double _n_ix_33473=std::floor(_n_sx_33472);
double _n_fx_33474=(_n_sx_33472-_n_ix_33473);
double _n_c0_33475=d::at(this->_n_cloud_32970,((_n_r_33471*this->_n_CW_32969)+d::mod(_n_ix_33473,this->_n_CW_32969)));
double _n_c1_33476=d::at(this->_n_cloud_32970,((_n_r_33471*this->_n_CW_32969)+d::mod((_n_ix_33473+1.0),this->_n_CW_32969)));
double _n_c_33477=(0.72+(0.7*_n_smooth_32905(0.35,0.75,(_n_c0_33475+((_n_c1_33476-_n_c0_33475)*_n_fx_33474)))));
(void)(((([&](){auto&& _n_array_33993=this->_n_FR_32973;auto _n_index_33994=_n_k_33469;auto _n_value_33995=(d::at(_n_array_33993,_n_index_33994)*_n_c_33477);d::put(_n_array_33993,_n_index_33994,_n_value_33995);return _n_value_33995;})(),([&](){auto&& _n_array_33996=this->_n_FG_32974;auto _n_index_33997=_n_k_33469;auto _n_value_33998=(d::at(_n_array_33996,_n_index_33997)*_n_c_33477);d::put(_n_array_33996,_n_index_33997,_n_value_33998);return _n_value_33998;})()),([&](){auto&& _n_array_33999=this->_n_FB_32975;auto _n_index_34000=_n_k_33469;auto _n_value_34001=(d::at(_n_array_33999,_n_index_34000)*_n_c_33477);d::put(_n_array_33999,_n_index_34000,_n_value_34001);return _n_value_34001;})()));
}}
std::shared_ptr<_n_Record_32979> _n_wk_33478=this->_n_walker_32978(_n_t_33458);
double _n_fs_33479=_n_wk_33478->_p_s;
double _n_fx_33480=(_n_VX_32858+(_n_wk_33478->_p_xw*_n_fs_33479));
double _n_fy_33481=(_n_HY_32859+(_n_EYE_32861*_n_fs_33479));
double _n_fz_33482=(_n_fs_33479*1.12);
double _n_seen_33483=(_n_wk_33478->_p_fade*_n_smooth_32905(3.5,2.7,_n_wk_33478->_p_xw));
double _n_bx0_33484=([&](){auto _n_argument_34002=0.0;auto _n_argument_34003=std::floor(((_n_fx_33480-(0.62*_n_fz_33482))-1.0));return d::maximum({_n_argument_34002,_n_argument_34003});})();
double _n_bx1_33485=([&](){auto _n_argument_34004=(_n_W_32856-1.0);auto _n_argument_34005=std::ceil(((_n_fx_33480+(0.62*_n_fz_33482))+1.0));return d::minimum({_n_argument_34004,_n_argument_34005});})();
{double _n_i_33486=0.0;
for(;d::truth((_n_i_33486<double(this->_n_roadK_32966.size())));(void)((_n_i_33486++))){d::check_cancel();double _n_k_33487=d::at(this->_n_roadK_32966,_n_i_33486);
double _n_x_33488=d::mod(_n_k_33487,_n_W_32856);
double _n_r_33489=double(d::i32((_n_k_33487/_n_W_32856))|d::i32(0.0));
double _n_y_33490=(_n_r_33489+0.5);
double _n_v_33491=((_n_y_33490-_n_HY_32859)/(_n_H_32857-_n_HY_32859));
double _n_wob_33492=([&](){auto _n_left_34006=((_n_noise_32900(((_n_x_33488*0.07)+7.0),((_n_y_33490*0.55)-(_n_t_33458*0.9)),0.0)-0.5)*(0.6+(4.0*_n_v_33491)));auto _n_right_34007=((_n_noise_32900((_n_x_33488*0.3),((_n_y_33490*1.3)-(_n_t_33458*2.1)),0.0)-0.5)*(0.3+(1.2*_n_v_33491)));return (_n_left_34006+_n_right_34007);})();
double _n_sx_33493=(_n_x_33488+_n_wob_33492);
if(d::truth((_n_sx_33493<0.0))){d::check_cancel();(void)((_n_sx_33493=0.0));
}
if(d::truth((_n_sx_33493>(_n_W_32856-1.001)))){d::check_cancel();(void)((_n_sx_33493=(_n_W_32856-1.001)));
}
double _n_j_33494=((_n_r_33489*_n_W_32856)+double(d::i32(_n_sx_33493)|d::i32(0.0)));
double _n_f_33495=(_n_sx_33493-double(d::i32(_n_sx_33493)|d::i32(0.0)));
double _n_dash_33496=(0.3+(1.0*([&](){auto _n_argument_34008=0.3;auto _n_argument_34009=0.65;auto _n_argument_34010=_n_noise_32900(((_n_x_33488*0.09)+3.0),((_n_y_33490*(0.7+(0.5*_n_v_33491)))-(_n_t_33458*1.5)),0.0);return _n_smooth_32905(_n_argument_34008,_n_argument_34009,_n_argument_34010);})()));
double _n_rr_33497=(d::at(this->_n_RR_32959,_n_j_33494)+((d::at(this->_n_RR_32959,(_n_j_33494+1.0))-d::at(this->_n_RR_32959,_n_j_33494))*_n_f_33495));
double _n_rg_33498=(d::at(this->_n_RG_32960,_n_j_33494)+((d::at(this->_n_RG_32960,(_n_j_33494+1.0))-d::at(this->_n_RG_32960,_n_j_33494))*_n_f_33495));
double _n_rb_33499=(d::at(this->_n_RB_32961,_n_j_33494)+((d::at(this->_n_RB_32961,(_n_j_33494+1.0))-d::at(this->_n_RB_32961,_n_j_33494))*_n_f_33495));
{double _n_gi_33500=1.0;
for(;d::truth((_n_gi_33500<=this->_n_NG_32962));(void)((_n_gi_33500++))){d::check_cancel();double _n_off_33501=(1.0-d::at(_n_mg_33460,_n_gi_33500));
if(d::truth((_n_off_33501<=0.0))){d::check_cancel();continue;
}
auto _n_binding_34011=d::at(this->_n_dropR_32964,(_n_gi_33500-1.0));
d::Array<float,true> _n_dr_33502=d::at(_n_binding_34011,0.0);
d::Array<float,true> _n_dg_33503=d::at(_n_binding_34011,1.0);
d::Array<float,true> _n_db_33504=d::at(_n_binding_34011,2.0);
(void)((((_n_rr_33497=(_n_rr_33497-((d::at(_n_dr_33502,_n_j_33494)+((d::at(_n_dr_33502,(_n_j_33494+1.0))-d::at(_n_dr_33502,_n_j_33494))*_n_f_33495))*_n_off_33501))),(_n_rg_33498=(_n_rg_33498-((d::at(_n_dg_33503,_n_j_33494)+((d::at(_n_dg_33503,(_n_j_33494+1.0))-d::at(_n_dg_33503,_n_j_33494))*_n_f_33495))*_n_off_33501)))),(_n_rb_33499=(_n_rb_33499-((d::at(_n_db_33504,_n_j_33494)+((d::at(_n_db_33504,(_n_j_33494+1.0))-d::at(_n_db_33504,_n_j_33494))*_n_f_33495))*_n_off_33501)))));
}}
double _n_a_33505=(_n_dash_33496*d::at(this->_n_wet_32927,_n_k_33487));
if(((((d::truth((_n_seen_33483>0.0))&&d::truth((_n_x_33488>=_n_bx0_33484)))&&d::truth((_n_x_33488<=_n_bx1_33485)))&&d::truth((_n_y_33490>_n_fy_33481)))&&d::truth((_n_y_33490<(_n_fy_33481+(2.3*_n_fz_33482)))))){d::check_cancel();if(d::truth(_n_walkerShape_32908((((_n_x_33488+0.5)-_n_fx_33480)/_n_fz_33482),((_n_y_33490-_n_fy_33481)/_n_fz_33482),_n_wk_33478->_p_ph))){d::check_cancel();(void)((_n_a_33505=(_n_a_33505*(1.0-(0.8*_n_seen_33483)))));
}
}
(void)(((([&](){auto&& _n_array_34012=this->_n_FR_32973;auto _n_index_34013=_n_k_33487;auto _n_value_34014=(d::at(_n_array_34012,_n_index_34013)+(d::maximum({0.0,_n_rr_33497})*_n_a_33505));d::put(_n_array_34012,_n_index_34013,_n_value_34014);return _n_value_34014;})(),([&](){auto&& _n_array_34015=this->_n_FG_32974;auto _n_index_34016=_n_k_33487;auto _n_value_34017=(d::at(_n_array_34015,_n_index_34016)+(d::maximum({0.0,_n_rg_33498})*_n_a_33505));d::put(_n_array_34015,_n_index_34016,_n_value_34017);return _n_value_34017;})()),([&](){auto&& _n_array_34018=this->_n_FB_32975;auto _n_index_34019=_n_k_33487;auto _n_value_34020=(d::at(_n_array_34018,_n_index_34019)+(d::maximum({0.0,_n_rb_33499})*_n_a_33505));d::put(_n_array_34018,_n_index_34019,_n_value_34020);return _n_value_34020;})()));
}}
{double _n_li_33506=0.0;
for(;d::truth((_n_li_33506<double(_n_LANTERNS_32897.size())));(void)((_n_li_33506++))){d::check_cancel();double _n_sw_33507=([&](){auto _n_left_34021=(0.05*std::sin(((_n_t_33458*1.1)+d::at(d::at(_n_LANTERNS_32897,_n_li_33506),3.0))));auto _n_right_34022=(0.015*std::sin(((_n_t_33458*2.7)+_n_li_33506)));return (_n_left_34021+_n_right_34022);})();
double _n_ls_33508=d::at(d::at(_n_LANTERNS_32897,_n_li_33506),0.0);
(void)(this->_n_lantern_32940(_n_li_33506,_n_sw_33507,[=]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_k_33509=_a0;
double _n_r_33510=_a1;
double _n_g_33511=_a2;
double _n_b_33512=_a3;
{
if(d::truth((d::at(this->_n_S_32915,_n_k_33509)>_n_ls_33508))){d::check_cancel();return;
}
double _n_f_33513=(d::at(this->_n_fog_32946,_n_k_33509)*0.3);
(void)(((([&](){auto&& _n_array_34023=this->_n_FR_32973;auto _n_index_34024=_n_k_33509;auto _n_value_34025=_n_mix_32906(_n_r_33510,d::at(this->_n_HZR_32947,_n_k_33509),_n_f_33513);d::put(_n_array_34023,_n_index_34024,_n_value_34025);return _n_value_34025;})(),([&](){auto&& _n_array_34026=this->_n_FG_32974;auto _n_index_34027=_n_k_33509;auto _n_value_34028=_n_mix_32906(_n_g_33511,d::at(this->_n_HZG_32948,_n_k_33509),_n_f_33513);d::put(_n_array_34026,_n_index_34027,_n_value_34028);return _n_value_34028;})()),([&](){auto&& _n_array_34029=this->_n_FB_32975;auto _n_index_34030=_n_k_33509;auto _n_value_34031=_n_mix_32906(_n_b_33512,d::at(this->_n_HZB_32949,_n_k_33509),_n_f_33513);d::put(_n_array_34029,_n_index_34030,_n_value_34031);return _n_value_34031;})()));

}
}));
}}
double _n_chase_33514=std::floor((_n_t_33458*6.0));
for(auto &&_n_item_34032:this->_n_bulbs_32938){d::check_cancel();auto _n_binding_34033=_n_item_34032;
double _n_k_33515=d::at(_n_binding_34033,0.0);
double _n_i_33516=d::at(_n_binding_34033,1.0);
{
bool _n_on_33517=(d::mod((_n_i_33516+_n_chase_33514),3.0)!=0.0);
(void)(((([&](){auto&& _n_array_34034=this->_n_FR_32973;auto _n_index_34035=_n_k_33515;auto _n_value_34036=(d::truth(_n_on_33517)?1.0:0.22);d::put(_n_array_34034,_n_index_34035,_n_value_34036);return _n_value_34036;})(),([&](){auto&& _n_array_34037=this->_n_FG_32974;auto _n_index_34038=_n_k_33515;auto _n_value_34039=(d::truth(_n_on_33517)?0.9:0.1);d::put(_n_array_34037,_n_index_34038,_n_value_34039);return _n_value_34039;})()),([&](){auto&& _n_array_34040=this->_n_FB_32975;auto _n_index_34041=_n_k_33515;auto _n_value_34042=(d::truth(_n_on_33517)?0.7:0.06);d::put(_n_array_34040,_n_index_34041,_n_value_34042);return _n_value_34042;})()));

}
}
{
double _n_c_33518=d::mod(_n_t_33458,24.0);
double _n_lamp_33519=(d::truth((_n_c_33518<14.0))?0.0:(d::truth((_n_c_33518<17.0))?1.0:2.0));
double _n_k_33520=(((41.0*_n_W_32856)+99.0)+_n_lamp_33519);
d::Array<double,false> _n_col_33521=d::at(d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.25,1.0,0.55},d::Array<double,false>{1.0,0.75,0.15},d::Array<double,false>{1.0,0.15,0.1}},_n_lamp_33519);
(void)(((([&](){auto&& _n_array_34043=this->_n_FR_32973;auto _n_index_34044=_n_k_33520;auto _n_value_34045=d::at(_n_col_33521,0.0);d::put(_n_array_34043,_n_index_34044,_n_value_34045);return _n_value_34045;})(),([&](){auto&& _n_array_34046=this->_n_FG_32974;auto _n_index_34047=_n_k_33520;auto _n_value_34048=d::at(_n_col_33521,1.0);d::put(_n_array_34046,_n_index_34047,_n_value_34048);return _n_value_34048;})()),([&](){auto&& _n_array_34049=this->_n_FB_32975;auto _n_index_34050=_n_k_33520;auto _n_value_34051=d::at(_n_col_33521,2.0);d::put(_n_array_34049,_n_index_34050,_n_value_34051);return _n_value_34051;})()));
for(auto &&_n_item_34052:d::Array<double,false>{(-d::number(1.0)),1.0,(-d::number(_n_W_32856)),_n_W_32856}){d::check_cancel();double _n_d_33522=_n_item_34052;
(void)(((([&](){auto&& _n_array_34053=this->_n_FR_32973;auto _n_index_34054=(_n_k_33520+_n_d_33522);auto _n_value_34055=(d::at(_n_array_34053,_n_index_34054)+(d::at(_n_col_33521,0.0)*0.12));d::put(_n_array_34053,_n_index_34054,_n_value_34055);return _n_value_34055;})(),([&](){auto&& _n_array_34056=this->_n_FG_32974;auto _n_index_34057=(_n_k_33520+_n_d_33522);auto _n_value_34058=(d::at(_n_array_34056,_n_index_34057)+(d::at(_n_col_33521,1.0)*0.12));d::put(_n_array_34056,_n_index_34057,_n_value_34058);return _n_value_34058;})()),([&](){auto&& _n_array_34059=this->_n_FB_32975;auto _n_index_34060=(_n_k_33520+_n_d_33522);auto _n_value_34061=(d::at(_n_array_34059,_n_index_34060)+(d::at(_n_col_33521,2.0)*0.12));d::put(_n_array_34059,_n_index_34060,_n_value_34061);return _n_value_34061;})()));
}
bool _n_on_33523=(d::mod(_n_t_33458,1.6)<0.35);
double _n_kb_33524=((8.0*_n_W_32856)+99.0);
(void)(((([&](){auto&& _n_array_34062=this->_n_FR_32973;auto _n_index_34063=_n_kb_33524;auto _n_value_34064=(d::truth(_n_on_33523)?1.0:0.2);d::put(_n_array_34062,_n_index_34063,_n_value_34064);return _n_value_34064;})(),([&](){auto&& _n_array_34065=this->_n_FG_32974;auto _n_index_34066=_n_kb_33524;auto _n_value_34067=(d::truth(_n_on_33523)?0.15:0.05);d::put(_n_array_34065,_n_index_34066,_n_value_34067);return _n_value_34067;})()),([&](){auto&& _n_array_34068=this->_n_FB_32975;auto _n_index_34069=_n_kb_33524;auto _n_value_34070=(d::truth(_n_on_33523)?0.1:0.05);d::put(_n_array_34068,_n_index_34069,_n_value_34070);return _n_value_34070;})()));

}
(void)(this->_n_hold_32977.fill(0.0));
if(d::truth((_n_wk_33478->_p_fade>0.0))){d::check_cancel();double _n_f_33525=(0.7*_n_smooth_32905(8.0,26.0,_n_wk_33478->_p_z));
double _n_top_33526=([&](){auto _n_argument_34071=0.0;auto _n_argument_34072=std::floor(((_n_fy_33481-(2.3*_n_fz_33482))-1.0));return d::maximum({_n_argument_34071,_n_argument_34072});})();
{double _n_r_33527=_n_top_33526;
for(;d::truth((_n_r_33527<=([&](){auto _n_argument_34073=(_n_H_32857-1.0);auto _n_argument_34074=std::ceil(_n_fy_33481);return d::minimum({_n_argument_34073,_n_argument_34074});})()));(void)((_n_r_33527++))){d::check_cancel();{double _n_x_33528=_n_bx0_33484;
for(;d::truth((_n_x_33528<=_n_bx1_33485));(void)((_n_x_33528++))){d::check_cancel();double _n_k_33529=((_n_r_33527*_n_W_32856)+_n_x_33528);
if(d::truth((d::at(this->_n_S_32915,_n_k_33529)>=_n_fs_33479))){d::check_cancel();continue;
}
double _n_cov_33530=0.0;
double _n_lit_33531=0.0;
{double _n_q_33532=0.0;
for(;d::truth((_n_q_33532<4.0));(void)((_n_q_33532++))){d::check_cancel();double _n_u_33533=((((_n_x_33528+0.25)+(0.5*double(d::i32(_n_q_33532)&d::i32(1.0))))-_n_fx_33480)/_n_fz_33482);
double _n_v_33534=((((_n_fy_33481-_n_r_33527)-0.25)-(0.5*double(d::i32(_n_q_33532)>>(d::u32(1.0)&31))))/_n_fz_33482);
double _n_sh_33535=_n_walkerShape_32908(_n_u_33533,_n_v_33534,_n_wk_33478->_p_ph);
if(d::truth(_n_sh_33535)){d::check_cancel();(void)((_n_cov_33530=(_n_cov_33530+0.25)));
}
if(d::truth((_n_sh_33535==2.0))){d::check_cancel();(void)((_n_lit_33531=(_n_lit_33531+0.25)));
}
}}
if(d::truth((!d::truth(_n_cov_33530)))){d::check_cancel();continue;
}
double _n_l_33536=(_n_lit_33531/_n_cov_33530);
double _n_cr_33537=(0.006+((_n_l_33536*d::at(this->_n_GR_32956,_n_k_33529))*0.12));
double _n_cg_33538=(0.005+((_n_l_33536*d::at(this->_n_GG_32957,_n_k_33529))*0.12));
double _n_cb_33539=(0.01+((_n_l_33536*d::at(this->_n_GB_32958,_n_k_33529))*0.12));
(void)((((_n_cr_33537=_n_mix_32906(_n_cr_33537,d::at(this->_n_HZR_32947,_n_k_33529),_n_f_33525)),(_n_cg_33538=_n_mix_32906(_n_cg_33538,d::at(this->_n_HZG_32948,_n_k_33529),_n_f_33525))),(_n_cb_33539=_n_mix_32906(_n_cb_33539,d::at(this->_n_HZB_32949,_n_k_33529),_n_f_33525))));
double _n_a_33540=(_n_cov_33530*_n_wk_33478->_p_fade);
(void)(((([&](){auto&& _n_array_34075=this->_n_FR_32973;auto _n_index_34076=_n_k_33529;auto _n_value_34077=_n_mix_32906(d::at(this->_n_FR_32973,_n_k_33529),_n_cr_33537,_n_a_33540);d::put(_n_array_34075,_n_index_34076,_n_value_34077);return _n_value_34077;})(),([&](){auto&& _n_array_34078=this->_n_FG_32974;auto _n_index_34079=_n_k_33529;auto _n_value_34080=_n_mix_32906(d::at(this->_n_FG_32974,_n_k_33529),_n_cg_33538,_n_a_33540);d::put(_n_array_34078,_n_index_34079,_n_value_34080);return _n_value_34080;})()),([&](){auto&& _n_array_34081=this->_n_FB_32975;auto _n_index_34082=_n_k_33529;auto _n_value_34083=_n_mix_32906(d::at(this->_n_FB_32975,_n_k_33529),_n_cb_33539,_n_a_33540);d::put(_n_array_34081,_n_index_34082,_n_value_34083);return _n_value_34083;})()));
(void)(([&](){auto&& _n_array_34084=this->_n_hold_32977;auto _n_index_34085=_n_k_33529;auto _n_value_34086=(_n_a_33540*(1.0-_n_f_33525));d::put(_n_array_34084,_n_index_34085,_n_value_34086);return _n_value_34086;})());
}}
}}
}
{double _n_i_33541=0.0;
for(;d::truth((_n_i_33541<34.0));(void)((_n_i_33541++))){d::check_cancel();double _n_per_33542=(0.7+(0.6*_n_hash_32899(_n_i_33541,301.0)));
double _n_tt_33543=(_n_t_33458+(_n_hash_32899(_n_i_33541,302.0)*_n_per_33542));
double _n_c_33544=std::floor((_n_tt_33543/_n_per_33542));
double _n_a_33545=((_n_tt_33543-(_n_c_33544*_n_per_33542))/_n_per_33542);
double _n_cy_33546=(56.0+(43.0*_n_hash_32899(((_n_i_33541*7.0)+_n_c_33544),303.0)));
double _n_xw_33547=(((_n_hash_32899(((_n_i_33541*5.0)+_n_c_33544),304.0)*2.0)-1.0)*2.7);
double _n_s_33548=((_n_cy_33546-_n_HY_32859)/_n_EYE_32861);
double _n_cx_33549=(_n_VX_32858+(_n_xw_33547*_n_s_33548));
double _n_rad_33550=((0.04+(0.18*_n_a_33545))*_n_s_33548);
double _n_sq_33551=((_n_EYE_32861*_n_s_33548)/_n_F_32860);
double _n_ry_33552=d::maximum({0.6,(_n_rad_33550*_n_sq_33551)});
double _n_b_33553=(std::pow((1.0-_n_a_33545),1.4)*0.8);
{double _n_r_33554=std::floor(((_n_cy_33546-_n_ry_33552)-1.0));
for(;d::truth((_n_r_33554<=std::ceil(((_n_cy_33546+_n_ry_33552)+1.0))));(void)((_n_r_33554++))){d::check_cancel();if((d::truth((_n_r_33554<0.0))||d::truth((_n_r_33554>=_n_H_32857)))){d::check_cancel();continue;
}
{double _n_x_33555=std::floor(((_n_cx_33549-_n_rad_33550)-1.0));
for(;d::truth((_n_x_33555<=std::ceil(((_n_cx_33549+_n_rad_33550)+1.0))));(void)((_n_x_33555++))){d::check_cancel();if((d::truth((_n_x_33555<0.0))||d::truth((_n_x_33555>=_n_W_32856)))){d::check_cancel();continue;
}
double _n_k_33556=((_n_r_33554*_n_W_32856)+_n_x_33555);
if(d::truth((d::at(this->_n_mat_32914,_n_k_33556)!=_n_ROAD_32871))){d::check_cancel();continue;
}
double _n_d_33557=([&](){auto _n_argument_34087=(((_n_x_33555+0.5)-_n_cx_33549)/d::maximum({0.6,_n_rad_33550}));auto _n_argument_34088=(((_n_r_33554+0.5)-_n_cy_33546)/_n_ry_33552);return d::hypot(std::initializer_list<double>{_n_argument_34087,_n_argument_34088});})();
double _n_ring_33558=((std::exp((-d::number(std::pow(((_n_d_33557-1.0)/0.35),2.0))))*_n_b_33553)+((d::truth((_n_a_33545<0.12))&&d::truth((_n_d_33557<0.6)))?0.5:0.0));
if(d::truth((_n_ring_33558<0.02))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_34089=this->_n_FR_32973;auto _n_index_34090=_n_k_33556;auto _n_value_34091=(d::at(_n_array_34089,_n_index_34090)+(_n_ring_33558*(0.4+(d::at(this->_n_RR_32959,_n_k_33556)*2.0))));d::put(_n_array_34089,_n_index_34090,_n_value_34091);return _n_value_34091;})(),([&](){auto&& _n_array_34092=this->_n_FG_32974;auto _n_index_34093=_n_k_33556;auto _n_value_34094=(d::at(_n_array_34092,_n_index_34093)+(_n_ring_33558*(0.44+(d::at(this->_n_RG_32960,_n_k_33556)*2.0))));d::put(_n_array_34092,_n_index_34093,_n_value_34094);return _n_value_34094;})()),([&](){auto&& _n_array_34095=this->_n_FB_32975;auto _n_index_34096=_n_k_33556;auto _n_value_34097=(d::at(_n_array_34095,_n_index_34096)+(_n_ring_33558*(0.55+(d::at(this->_n_RB_32961,_n_k_33556)*2.0))));d::put(_n_array_34095,_n_index_34096,_n_value_34097);return _n_value_34097;})()));
}}
}}
}}
(void)(this->_n_rain_32976.fill(0.0));
for(auto &&_n_item_34098:this->_n_drops_32972){d::check_cancel();auto _n_binding_34099=_n_item_34098;
double _n_x0_33559=d::at(_n_binding_34099,0.0);
double _n_y0_33560=d::at(_n_binding_34099,1.0);
double _n_v_33561=d::at(_n_binding_34099,2.0);
double _n_len_33562=d::at(_n_binding_34099,3.0);
double _n_b_33563=d::at(_n_binding_34099,4.0);
double _n_sl_33564=d::at(_n_binding_34099,5.0);
{
double _n_span_33565=((_n_H_32857+_n_len_33562)+6.0);
double _n_head_33566=(d::mod((_n_y0_33560+(_n_v_33561*_n_t_33458)),_n_span_33565)-3.0);
{double _n_i_33567=0.0;
for(;d::truth((_n_i_33567<_n_len_33562));(void)((_n_i_33567++))){d::check_cancel();double _n_y_33568=(_n_head_33566-_n_i_33567);
double _n_r_33569=std::floor(_n_y_33568);
if((d::truth((_n_r_33569<0.0))||d::truth((_n_r_33569>=_n_H_32857)))){d::check_cancel();continue;
}
double _n_x_33570=std::floor((_n_x0_33559+(_n_sl_33564*_n_y_33568)));
if((d::truth((_n_x_33570<0.0))||d::truth((_n_x_33570>=_n_W_32856)))){d::check_cancel();continue;
}
double _n_k_33571=((_n_r_33569*_n_W_32856)+_n_x_33570);
double _n_a_33572=(_n_b_33563*(1.0-((0.7*_n_i_33567)/_n_len_33562)));
if(d::truth((_n_a_33572>d::at(this->_n_rain_32976,_n_k_33571)))){d::check_cancel();(void)(([&](){auto&& _n_array_34100=this->_n_rain_32976;auto _n_index_34101=_n_k_33571;auto _n_value_34102=_n_a_33572;d::put(_n_array_34100,_n_index_34101,_n_value_34102);return _n_value_34102;})());
}
}}

}
}
{double _n_r_33573=0.0;
for(;d::truth((_n_r_33573<_n_H_32857));(void)((_n_r_33573++))){d::check_cancel();double _n_y_33574=(_n_r_33573+0.5);
double _n_fade_33575=_n_smooth_32905((_n_H_32857+8.0),(_n_H_32857-6.0),_n_y_33574);
{double _n_x_33576=0.0;
for(;d::truth((_n_x_33576<_n_W_32856));(void)((_n_x_33576++))){d::check_cancel();double _n_k_33577=((_n_r_33573*_n_W_32856)+_n_x_33576);
double _n_cr_33578=d::at(this->_n_FR_32973,_n_k_33577);
double _n_cg_33579=d::at(this->_n_FG_32974,_n_k_33577);
double _n_cb_33580=d::at(this->_n_FB_32975,_n_k_33577);
double _n_rn_33581=(d::at(this->_n_rain_32976,_n_k_33577)*(1.0-(0.85*d::at(this->_n_hold_32977,_n_k_33577))));
if(d::truth(_n_rn_33581)){d::check_cancel();(void)((((_n_cr_33578=(_n_cr_33578+(_n_rn_33581*(0.42+(d::at(this->_n_GR_32956,_n_k_33577)*0.8))))),(_n_cg_33579=(_n_cg_33579+(_n_rn_33581*(0.47+(d::at(this->_n_GG_32957,_n_k_33577)*0.8)))))),(_n_cb_33580=(_n_cb_33580+(_n_rn_33581*(0.6+(d::at(this->_n_GB_32958,_n_k_33577)*0.8)))))));
}
(void)((((_n_cr_33578=d::maximum({0.0,_n_cr_33578})),(_n_cg_33579=d::maximum({0.0,_n_cg_33579}))),(_n_cb_33580=d::maximum({0.0,_n_cb_33580}))));
double _n_peak_33582=d::maximum({_n_cr_33578,_n_cg_33579,_n_cb_33580,0.0001});
double _n_fl_33583=(d::at(_n_FLOOR_32879,d::at(this->_n_mat_32914,_n_k_33577))*(1.0-d::at(this->_n_hold_32977,_n_k_33577)));
double _n_level_33584=(_n_clamp_32904((_n_fl_33583+(((1.0-_n_fl_33583)*std::pow(_n_peak_33582,0.64))*0.95)))*_n_fade_33575);
double _n_step_33585=([&](){auto _n_argument_34103=0.0;auto _n_argument_34104=([&](){auto _n_argument_34105=3.0;auto _n_argument_34106=d::round(((_n_level_33584*3.0)+d::at(_n_BAYER_32868,((double(d::i32(_n_r_33573)&d::i32(3.0))*4.0)+double(d::i32(_n_x_33576)&d::i32(3.0))))));return d::minimum({_n_argument_34105,_n_argument_34106});})();return d::maximum({_n_argument_34103,_n_argument_34104});})();
if((d::truth((_n_rn_33581>0.22))&&d::truth((_n_step_33585<(d::truth((_n_rn_33581>0.55))?2.0:1.0))))){d::check_cancel();(void)((_n_step_33585=(d::truth((_n_rn_33581>0.55))?2.0:1.0)));
}
(void)(([&](){auto&& _n_array_34107=this->_n_out_32911;auto _n_index_34108=_n_k_33577;auto _n_value_34109=d::at(_n_DOTS_32866,_n_step_33585);d::put(_n_array_34107,_n_index_34108,_n_value_34109);return _n_value_34109;})());
if(d::truth(_n_color_33459)){d::check_cancel();double _n_want_33586=(d::truth(_n_step_33585)?d::minimum({1.0,((_n_level_33584+0.06)/d::at(_n_COVER_32867,_n_step_33585))}):0.0);
double _n_s_33587=((0.3+(0.7*_n_want_33586))/_n_peak_33582);
(void)(([&](){auto&& _n_array_34110=d::read(_n_color_33459);auto _n_index_34111=_n_k_33577;auto _n_value_34112=([&](){auto _n_argument_34113=_n_clamp_32904((_n_cr_33578*_n_s_33587));auto _n_argument_34114=_n_clamp_32904((_n_cg_33579*_n_s_33587));auto _n_argument_34115=_n_clamp_32904((_n_cb_33580*_n_s_33587));return this->_n_nearest_32913(_n_argument_34113,_n_argument_34114,_n_argument_34115);})();d::put(_n_array_34110,_n_index_34111,_n_value_34112);return _n_value_34112;})());
}
}}
}}
d::Array<d::String,false> _n_lines_33588=d::Array<d::String,false>{};
{double _n_r_33589=0.0;
for(;d::truth((_n_r_33589<_n_H_32857));(void)((_n_r_33589++))){d::check_cancel();(void)(_n_lines_33588.push(d::join(this->_n_out_32911.slice((_n_r_33589*_n_W_32856),((_n_r_33589+1.0)*_n_W_32856)),d::String(u""))));
}}
return d::join(_n_lines_33588,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tokyo-rain").cols)*ascii::catalog_meta("tokyo-rain").rows);auto _env=std::make_shared<_n_Record_33590>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tokyo_rain_meta(){return catalog_meta("tokyo-rain");}
std::unique_ptr<Piece> make_tokyo_rain(const AsciiPieceOptions &o){return std::make_unique<Native_tokyo_rain>(o);}
}
