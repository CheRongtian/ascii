// Direct, statically typed C++ from src/pieces/tokyo-rain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32856;
struct _n_Record_32891;
struct _n_Record_32980;
struct _n_Record_33591;
struct _n_Record_33595;
struct _n_Record_33597;
struct _n_Record_33598;
struct _n_Record_33599;
struct _n_Record_33600;
struct _n_Record_33601;
struct _n_Record_33602;
struct _n_Record_33603;
struct _n_Record_32856{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_32856> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32856>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_32891{
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
static std::shared_ptr<_n_Record_32891> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32891>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_rows=d::decode<std::optional<double>>(j["rows"]);out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_edge=d::decode<std::optional<double>>(j["edge"]);out->_p_group=d::decode<std::optional<double>>(j["group"]);out->_p_fail=d::decode<std::optional<double>>(j["fail"]);return out;}
};
struct _n_Record_32980{
double _p_xw{};
double _p_z{};
double _p_s{};
double _p_fade{};
double _p_ph{};
static std::shared_ptr<_n_Record_32980> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32980>();out->_p_xw=d::decode<double>(j["xw"]);out->_p_z=d::decode<double>(j["z"]);out->_p_s=d::decode<double>(j["s"]);out->_p_fade=d::decode<double>(j["fade"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_33591{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_33591> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33591>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_33595{
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
static std::shared_ptr<_n_Record_33595> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33595>();out->_p_ra=d::decode<d::String>(j["ra"]);out->_p_symbol_2d=d::decode<d::String>(j["-"]);out->_p_me=d::decode<d::String>(j["me"]);out->_p_n=d::decode<d::String>(j["n"]);out->_p_ka=d::decode<d::String>(j["ka"]);out->_p_o=d::decode<d::String>(j["o"]);out->_p_ke=d::decode<d::String>(j["ke"]);out->_p_su=d::decode<d::String>(j["su"]);out->_p_na=d::decode<d::String>(j["na"]);out->_p_tsu=d::decode<d::String>(j["tsu"]);out->_p_ku=d::decode<d::String>(j["ku"]);out->_p_ho=d::decode<d::String>(j["ho"]);out->_p_te=d::decode<d::String>(j["te"]);out->_p_ru=d::decode<d::String>(j["ru"]);out->_p_k1=d::decode<d::String>(j["k1"]);out->_p_k2=d::decode<d::String>(j["k2"]);out->_p_k3=d::decode<d::String>(j["k3"]);out->_p_k4=d::decode<d::String>(j["k4"]);out->_p_k5=d::decode<d::String>(j["k5"]);return out;}
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
double _p_fail{};
static std::shared_ptr<_n_Record_33597> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33597>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);out->_p_fail=d::decode<double>(j["fail"]);return out;}
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
static std::shared_ptr<_n_Record_33598> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33598>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_33599{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
d::String _p_text{};
double _p_group{};
static std::shared_ptr<_n_Record_33599> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33599>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);out->_p_group=d::decode<double>(j["group"]);return out;}
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
static std::shared_ptr<_n_Record_33600> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33600>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_rows=d::decode<double>(j["rows"]);return out;}
};
struct _n_Record_33601{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
double _p_rows{};
double _p_group{};
static std::shared_ptr<_n_Record_33601> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33601>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_group=d::decode<double>(j["group"]);return out;}
};
struct _n_Record_33602{
double _p_side{};
double _p_s{};
double _p_hb{};
double _p_w{};
double _p_g{};
double _p_kind{};
d::Array<double,false> _p_hue{};
d::String _p_text{};
double _p_edge{};
static std::shared_ptr<_n_Record_33602> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33602>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<d::String>(j["text"]);out->_p_edge=d::decode<double>(j["edge"]);return out;}
};
struct _n_Record_33603{
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
static std::shared_ptr<_n_Record_33603> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_33603>();out->_p_side=d::decode<double>(j["side"]);out->_p_s=d::decode<double>(j["s"]);out->_p_hb=d::decode<double>(j["hb"]);out->_p_w=d::decode<double>(j["w"]);out->_p_g=d::decode<double>(j["g"]);out->_p_kind=d::decode<double>(j["kind"]);out->_p_hue=d::decode<d::Array<double,false>>(j["hue"]);out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_fail=d::decode<std::optional<double>>(j["fail"]);out->_p_group=d::decode<std::optional<double>>(j["group"]);out->_p_rows=d::decode<std::optional<double>>(j["rows"]);out->_p_edge=d::decode<std::optional<double>>(j["edge"]);return out;}
};
double _n_hash_32900(double _a0,double _a1);
double _n_noise_32901(double _a0,double _a1,double _a2);
double _n_fbm_32902(double _a0,double _a1,double _a2,double _a3);
double _n_endGlow_32904(double _a0,double _a1);
double _n_clamp_32905(double _a0);
double _n_smooth_32906(double _a0,double _a1,double _a2);
double _n_mix_32907(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_32908(d::String _a0);
double _n_walkerShape_32909(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_32856> _n_meta_32855=[](){return ([&](){auto _n_object_33594=std::make_shared<_n_Record_32856>();_n_object_33594->_p_name=d::String(u"tokyo rain");_n_object_33594->_p_category=d::String(u"scenes");_n_object_33594->_p_note=d::String(u"a tokyo side street in the rain, neon signs shining on the wet road");_n_object_33594->_p_cols=200.0;_n_object_33594->_p_rows=100.0;_n_object_33594->_p_cell=1.0;_n_object_33594->_p_fps=15.0;_n_object_33594->_p_ground=d::String(u"#07060d");_n_object_33594->_p_palette=d::Array<d::String,false>{d::String(u"#100f22"),d::String(u"#17162f"),d::String(u"#201e3d"),d::String(u"#2b284e"),d::String(u"#383463"),d::String(u"#4a447a"),d::String(u"#4c4890"),d::String(u"#6a64c4"),d::String(u"#1d1520"),d::String(u"#2c1f2e"),d::String(u"#3e2b3e"),d::String(u"#553a52"),d::String(u"#6a3a74"),d::String(u"#8e4c8a"),d::String(u"#b4649c"),d::String(u"#d885ae"),d::String(u"#6e1248"),d::String(u"#a3196c"),d::String(u"#d8278c"),d::String(u"#ff47a8"),d::String(u"#ff85c6"),d::String(u"#ffc4e3"),d::String(u"#0c4656"),d::String(u"#106f80"),d::String(u"#16a0b2"),d::String(u"#28d2e2"),d::String(u"#7cecf4"),d::String(u"#ccfbfd"),d::String(u"#5e340a"),d::String(u"#93540f"),d::String(u"#cc7b16"),d::String(u"#f7a32a"),d::String(u"#ffc65e"),d::String(u"#ffe2a0"),d::String(u"#fff4d8"),d::String(u"#55100e"),d::String(u"#8a1a14"),d::String(u"#c22a1a"),d::String(u"#ee4626"),d::String(u"#ff7a4c"),d::String(u"#8ea2c4"),d::String(u"#bccbe6"),d::String(u"#e4ecfb"),d::String(u"#ffffff"),d::String(u"#2e62e0"),d::String(u"#79a2ff"),d::String(u"#20844c"),d::String(u"#43d884"),d::String(u"#e6c21e"),d::String(u"#fff07a"),d::String(u"#6a7896"),d::String(u"#9ba7c2"),d::String(u"#c9d0e2"),d::String(u"#262a36"),d::String(u"#3a3f4e"),d::String(u"#565c6c")};return _n_object_33594;})();}();
const double _n_W_32857=[](){return 200.0;}();
const double _n_H_32858=[](){return 100.0;}();
const double _n_VX_32859=[](){return 100.0;}();
const double _n_HY_32860=[](){return 50.0;}();
const double _n_F_32861=[](){return 46.0;}();
const double _n_EYE_32862=[](){return 1.5;}();
const double _n_HALF_32863=[](){return 3.2;}();
const double _n_THICK_32864=[](){return 0.3;}();
const double _n_ZF_32865=[](){return 17.0;}();
const double _n_EXT_32866=[](){return 70.0;}();
const d::String _n_DOTS_32867=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_32868=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_32869=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_32982=_a0;
return ((_n_v_32982/16.0)-0.47);});}();
const double _n_SKY_32870=[](){return 0.0;}();
const double _n_WALL_32871=[](){return 1.0;}();
const double _n_ROAD_32872=[](){return 2.0;}();
const double _n_SIGN_32873=[](){return 3.0;}();
const double _n_SIDE_32874=[](){return 4.0;}();
const double _n_VEND_32875=[](){return 5.0;}();
const double _n_POLE_32876=[](){return 6.0;}();
const double _n_WIRE_32877=[](){return 7.0;}();
const double _n_TOWER_32878=[](){return 8.0;}();
d::Array<double,false> _n_GIVE_32879=[](){return d::Array<double,false>{0.25,0.1,0.0,1.0,0.5,0.9,0.12,0.15,0.2};}();
d::Array<double,false> _n_FLOOR_32880=[](){return d::Array<double,false>{0.12,0.04,0.05,0.1,0.06,0.1,0.03,0.0,0.0};}();
d::Array<double,false> _n_PINK_32881=[](){return d::Array<double,false>{1.0,0.2,0.62};}();
d::Array<double,false> _n_CYAN_32882=[](){return d::Array<double,false>{0.14,0.88,1.0};}();
d::Array<double,false> _n_AMBER_32883=[](){return d::Array<double,false>{1.0,0.6,0.14};}();
d::Array<double,false> _n_RED_32884=[](){return d::Array<double,false>{1.0,0.16,0.1};}();
const double _n_NEON_32885=[](){return 0.0;}();
const double _n_PANEL_32886=[](){return 1.0;}();
const double _n_WHITE_32887=[](){return 2.0;}();
const double _n_BULBS_32888=[](){return 3.0;}();
d::Dict<d::String,d::String> _n_FONT_32889=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_33596;_n_dictionary_33596.set(d::String(u"ra"),d::String(u".###. ..... ##### ....# ..##."));_n_dictionary_33596.set(d::String(u"-"),d::String(u"..#.. ..#.. ..#.. ..#.. ..#.."));_n_dictionary_33596.set(d::String(u"me"),d::String(u"....# .#.#. ..#.. .#.#. #...."));_n_dictionary_33596.set(d::String(u"n"),d::String(u"#.... .#..# ....# ...#. ###.."));_n_dictionary_33596.set(d::String(u"ka"),d::String(u".#... ##### .#..# .#..# #..##"));_n_dictionary_33596.set(d::String(u"o"),d::String(u"...#. ##### ..##. .#.#. #..#."));_n_dictionary_33596.set(d::String(u"ke"),d::String(u".#... .#### #..#. ...#. ..#.."));_n_dictionary_33596.set(d::String(u"su"),d::String(u"####. ...#. ..#.. .#.#. #...#"));_n_dictionary_33596.set(d::String(u"na"),d::String(u"..#.. ##### ..#.. ..#.. .#..."));_n_dictionary_33596.set(d::String(u"tsu"),d::String(u"#.#.# .#..# ....# ...#. .##.."));_n_dictionary_33596.set(d::String(u"ku"),d::String(u".#... .#### #...# ...#. .##.."));_n_dictionary_33596.set(d::String(u"ho"),d::String(u"..#.. ##### ..#.. #.#.# ..#.."));_n_dictionary_33596.set(d::String(u"te"),d::String(u"####. ..... ##### ..#.. .#..."));_n_dictionary_33596.set(d::String(u"ru"),d::String(u".#.#. .#.#. .#.#. .#.## #..#."));_n_dictionary_33596.set(d::String(u"k1"),d::String(u"#.### ..#.# #.### ..#.# #.###"));_n_dictionary_33596.set(d::String(u"k2"),d::String(u"##### #...# ##### #.#.. #.###"));_n_dictionary_33596.set(d::String(u"k3"),d::String(u"#.### #.#.# ###.# #.#.# ###.#"));_n_dictionary_33596.set(d::String(u"k4"),d::String(u"..#.. .#.#. ##### #.#.# #.###"));_n_dictionary_33596.set(d::String(u"k5"),d::String(u"..#.. ##### .###. #.#.# ..#.."));return _n_dictionary_33596;})();}();
d::Array<std::shared_ptr<_n_Record_32891>,false> _n_SIGNS_32890=[](){return d::Array<std::shared_ptr<_n_Record_32891>,false>{([&](){auto _n_object_33605=std::make_shared<_n_Record_32891>();_n_object_33605->_p_side=(-d::number(1.0));_n_object_33605->_p_s=27.0;_n_object_33605->_p_hb=2.3;_n_object_33605->_p_w=16.0;_n_object_33605->_p_g=2.0;_n_object_33605->_p_kind=_n_NEON_32885;_n_object_33605->_p_hue=_n_PINK_32881;_n_object_33605->_p_text=std::optional<d::String>(d::String(u"ra - me n"));_n_object_33605->_p_fail=std::optional<double>(2.0);return _n_object_33605;})(),([&](){auto _n_object_33607=std::make_shared<_n_Record_32891>();_n_object_33607->_p_side=(-d::number(1.0));_n_object_33607->_p_s=17.5;_n_object_33607->_p_hb=2.45;_n_object_33607->_p_w=14.0;_n_object_33607->_p_g=2.0;_n_object_33607->_p_kind=_n_PANEL_32886;_n_object_33607->_p_hue=_n_AMBER_32883;_n_object_33607->_p_text=std::optional<d::String>(d::String(u"k1 k2 k3"));return _n_object_33607;})(),([&](){auto _n_object_33609=std::make_shared<_n_Record_32891>();_n_object_33609->_p_side=(-d::number(1.0));_n_object_33609->_p_s=11.5;_n_object_33609->_p_hb=2.55;_n_object_33609->_p_w=9.0;_n_object_33609->_p_g=1.0;_n_object_33609->_p_kind=_n_NEON_32885;_n_object_33609->_p_hue=_n_CYAN_32882;_n_object_33609->_p_text=std::optional<d::String>(d::String(u"k4 k5 k1"));_n_object_33609->_p_group=std::optional<double>(1.0);return _n_object_33609;})(),([&](){auto _n_object_33611=std::make_shared<_n_Record_32891>();_n_object_33611->_p_side=(-d::number(1.0));_n_object_33611->_p_s=7.4;_n_object_33611->_p_hb=2.6;_n_object_33611->_p_w=7.0;_n_object_33611->_p_g=1.0;_n_object_33611->_p_kind=_n_WHITE_32887;_n_object_33611->_p_hue=_n_RED_32884;_n_object_33611->_p_text=std::optional<d::String>(d::String(u"k2 k3 k5"));return _n_object_33611;})(),([&](){auto _n_object_33613=std::make_shared<_n_Record_32891>();_n_object_33613->_p_side=(-d::number(1.0));_n_object_33613->_p_s=5.0;_n_object_33613->_p_hb=2.7;_n_object_33613->_p_w=4.0;_n_object_33613->_p_g=0.0;_n_object_33613->_p_kind=_n_PANEL_32886;_n_object_33613->_p_hue=_n_PINK_32881;_n_object_33613->_p_rows=std::optional<double>(18.0);return _n_object_33613;})(),([&](){auto _n_object_33615=std::make_shared<_n_Record_32891>();_n_object_33615->_p_side=(-d::number(1.0));_n_object_33615->_p_s=5.0;_n_object_33615->_p_hb=6.6;_n_object_33615->_p_w=4.0;_n_object_33615->_p_g=0.0;_n_object_33615->_p_kind=_n_NEON_32885;_n_object_33615->_p_hue=_n_AMBER_32883;_n_object_33615->_p_rows=std::optional<double>(10.0);return _n_object_33615;})(),([&](){auto _n_object_33617=std::make_shared<_n_Record_32891>();_n_object_33617->_p_side=(-d::number(1.0));_n_object_33617->_p_s=3.4;_n_object_33617->_p_hb=2.5;_n_object_33617->_p_w=3.0;_n_object_33617->_p_g=0.0;_n_object_33617->_p_kind=_n_NEON_32885;_n_object_33617->_p_hue=_n_CYAN_32882;_n_object_33617->_p_rows=std::optional<double>(14.0);return _n_object_33617;})(),([&](){auto _n_object_33619=std::make_shared<_n_Record_32891>();_n_object_33619->_p_side=(-d::number(1.0));_n_object_33619->_p_s=2.3;_n_object_33619->_p_hb=2.8;_n_object_33619->_p_w=2.0;_n_object_33619->_p_g=0.0;_n_object_33619->_p_kind=_n_PANEL_32886;_n_object_33619->_p_hue=_n_AMBER_32883;_n_object_33619->_p_rows=std::optional<double>(10.0);return _n_object_33619;})(),([&](){auto _n_object_33621=std::make_shared<_n_Record_32891>();_n_object_33621->_p_side=1.0;_n_object_33621->_p_s=24.0;_n_object_33621->_p_hb=2.55;_n_object_33621->_p_w=16.0;_n_object_33621->_p_g=2.0;_n_object_33621->_p_kind=_n_NEON_32885;_n_object_33621->_p_hue=_n_CYAN_32882;_n_object_33621->_p_text=std::optional<d::String>(d::String(u"ka ra o ke"));return _n_object_33621;})(),([&](){auto _n_object_33623=std::make_shared<_n_Record_32891>();_n_object_33623->_p_side=1.0;_n_object_33623->_p_s=14.5;_n_object_33623->_p_hb=2.5;_n_object_33623->_p_w=11.0;_n_object_33623->_p_g=1.0;_n_object_33623->_p_kind=_n_BULBS_32888;_n_object_33623->_p_hue=_n_PINK_32881;_n_object_33623->_p_text=std::optional<d::String>(d::String(u"su na tsu ku"));return _n_object_33623;})(),([&](){auto _n_object_33625=std::make_shared<_n_Record_32891>();_n_object_33625->_p_side=1.0;_n_object_33625->_p_s=6.6;_n_object_33625->_p_hb=2.6;_n_object_33625->_p_w=7.0;_n_object_33625->_p_g=1.0;_n_object_33625->_p_kind=_n_PANEL_32886;_n_object_33625->_p_hue=_n_AMBER_32883;_n_object_33625->_p_text=std::optional<d::String>(d::String(u"ho te ru"));return _n_object_33625;})(),([&](){auto _n_object_33627=std::make_shared<_n_Record_32891>();_n_object_33627->_p_side=1.0;_n_object_33627->_p_s=4.6;_n_object_33627->_p_hb=2.7;_n_object_33627->_p_w=4.0;_n_object_33627->_p_g=0.0;_n_object_33627->_p_kind=_n_NEON_32885;_n_object_33627->_p_hue=_n_CYAN_32882;_n_object_33627->_p_rows=std::optional<double>(16.0);_n_object_33627->_p_group=std::optional<double>(2.0);return _n_object_33627;})(),([&](){auto _n_object_33629=std::make_shared<_n_Record_32891>();_n_object_33629->_p_side=1.0;_n_object_33629->_p_s=4.6;_n_object_33629->_p_hb=6.4;_n_object_33629->_p_w=4.0;_n_object_33629->_p_g=0.0;_n_object_33629->_p_kind=_n_PANEL_32886;_n_object_33629->_p_hue=_n_PINK_32881;_n_object_33629->_p_rows=std::optional<double>(9.0);return _n_object_33629;})(),([&](){auto _n_object_33631=std::make_shared<_n_Record_32891>();_n_object_33631->_p_side=1.0;_n_object_33631->_p_s=3.1;_n_object_33631->_p_hb=2.6;_n_object_33631->_p_w=3.0;_n_object_33631->_p_g=0.0;_n_object_33631->_p_kind=_n_PANEL_32886;_n_object_33631->_p_hue=_n_AMBER_32883;_n_object_33631->_p_rows=std::optional<double>(13.0);return _n_object_33631;})(),([&](){auto _n_object_33633=std::make_shared<_n_Record_32891>();_n_object_33633->_p_side=1.0;_n_object_33633->_p_s=2.1;_n_object_33633->_p_hb=2.9;_n_object_33633->_p_w=2.0;_n_object_33633->_p_g=0.0;_n_object_33633->_p_kind=_n_NEON_32885;_n_object_33633->_p_hue=_n_PINK_32881;_n_object_33633->_p_rows=std::optional<double>(10.0);return _n_object_33633;})(),([&](){auto _n_object_33635=std::make_shared<_n_Record_32891>();_n_object_33635->_p_side=1.0;_n_object_33635->_p_s=18.0;_n_object_33635->_p_hb=0.14;_n_object_33635->_p_w=7.0;_n_object_33635->_p_g=1.0;_n_object_33635->_p_kind=_n_WHITE_32887;_n_object_33635->_p_hue=_n_RED_32884;_n_object_33635->_p_text=std::optional<d::String>(d::String(u"k1 k4"));_n_object_33635->_p_edge=std::optional<double>(2.44);return _n_object_33635;})()};}();
d::Array<d::Array<double,false>,false> _n_LEFT_32892=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,2.55,10.5,1.0},d::Array<double,false>{2.55,4.6,7.2,3.0},d::Array<double,false>{4.6,7.0,6.2,2.0},d::Array<double,false>{7.0,10.5,11.0,3.0},d::Array<double,false>{10.5,15.0,8.4,2.0},d::Array<double,false>{15.0,22.0,12.5,0.0},d::Array<double,false>{22.0,32.0,9.5,2.0},d::Array<double,false>{32.0,60.0,14.0,0.0},d::Array<double,false>{60.0,100000.0,18.0,0.0}};}();
d::Array<d::Array<double,false>,false> _n_RIGHT_32893=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,3.2,9.6,4.0},d::Array<double,false>{3.2,5.0,8.2,0.0},d::Array<double,false>{5.0,6.4,0.0,0.0},d::Array<double,false>{6.4,9.5,7.4,2.0},d::Array<double,false>{9.5,14.0,13.5,3.0},d::Array<double,false>{14.0,20.0,8.0,2.0},d::Array<double,false>{20.0,30.0,11.0,0.0},d::Array<double,false>{30.0,100000.0,16.0,0.0}};}();
d::Array<d::Array<double,false>,false> _n_TANKS_32894=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),5.3,6.2,1.7},d::Array<double,false>{(-d::number(1.0)),11.6,12.7,1.5},d::Array<double,false>{1.0,7.3,8.1,1.4}};}();
d::Array<d::Array<double,false>,false> _n_MASTS_32895=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),13.8,3.0},d::Array<double,false>{1.0,18.4,2.4}};}();
d::Array<d::Array<double,false>,false> _n_POLES_32896=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.9,4.3,9.4,0.32},d::Array<double,false>{(-d::number(2.95)),9.6,9.4,0.3},d::Array<double,false>{2.9,15.0,9.2,0.28},d::Array<double,false>{(-d::number(2.95)),24.0,9.2,0.26}};}();
d::Array<d::Array<double,false>,false> _n_WIRES_32897=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.9,8.6,4.3,(-d::number(2.95)),8.9,9.6,0.45},d::Array<double,false>{2.9,8.2,4.3,(-d::number(2.95)),8.4,9.6,0.55},d::Array<double,false>{2.9,7.6,4.3,(-d::number(3.2)),5.9,6.0,0.3},d::Array<double,false>{2.9,9.0,4.3,2.9,8.9,15.0,0.4},d::Array<double,false>{2.9,8.4,4.3,2.9,8.5,15.0,0.5},d::Array<double,false>{(-d::number(2.95)),8.9,9.6,(-d::number(2.95)),8.9,24.0,0.35},d::Array<double,false>{(-d::number(2.95)),8.4,9.6,2.9,8.5,15.0,0.4},d::Array<double,false>{2.9,8.5,15.0,(-d::number(2.95)),8.6,24.0,0.3},d::Array<double,false>{2.9,8.9,15.0,2.9,8.8,28.0,0.3},d::Array<double,false>{(-d::number(2.95)),8.4,24.0,2.9,8.4,34.0,0.25}};}();
d::Array<d::Array<double,false>,false> _n_LANTERNS_32898=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{26.3,2.72,1.88,0.0},d::Array<double,false>{14.8,2.72,1.95,1.9}};}();
const double _n_VEND_S_32899=[](){return 16.0;}();
d::Array<double,false> _n_END_32903=[](){return d::Array<double,false>{1.0,0.7,0.86};}();
double _n_hash_32900(double _a0,double _a1){double _n_x_32983=_a0;
double _n_y_32984=_a1;
{
double _n_h_32985=([&](){auto _n_left_33636=d::imul(double(d::i32(_n_x_32983)|d::i32(0.0)),374761393.0);auto _n_right_33637=d::imul(double(d::i32(_n_y_32984)|d::i32(0.0)),668265263.0);return (_n_left_33636+_n_right_33637);})();
(void)((_n_h_32985=d::imul(double(d::i32(_n_h_32985)^d::i32(double(d::u32(_n_h_32985)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_32985)^d::i32(double(d::u32(_n_h_32985)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_32901(double _a0,double _a1,double _a2){double _n_x_32986=_a0;
double _n_y_32987=_a1;
double _n_period_32988=_a2;
{
double _n_xi_32989=std::floor(_n_x_32986);
double _n_yi_32990=std::floor(_n_y_32987);
double _n_fx_32991=(_n_x_32986-_n_xi_32989);
double _n_fy_32992=(_n_y_32987-_n_yi_32990);
double _n_u_32993=((_n_fx_32991*_n_fx_32991)*(3.0-(2.0*_n_fx_32991)));
double _n_v_32994=((_n_fy_32992*_n_fy_32992)*(3.0-(2.0*_n_fy_32992)));
double _n_x0_32995=_n_xi_32989;
double _n_x1_32996=(_n_xi_32989+1.0);
if(d::truth(_n_period_32988)){d::check_cancel();(void)((_n_x0_32995=d::mod((d::mod(_n_xi_32989,_n_period_32988)+_n_period_32988),_n_period_32988)));
(void)((_n_x1_32996=d::mod((_n_x0_32995+1.0),_n_period_32988)));
}
double _n_a_32997=_n_hash_32900(_n_x0_32995,_n_yi_32990);
double _n_b_32998=_n_hash_32900(_n_x1_32996,_n_yi_32990);
double _n_c_32999=_n_hash_32900(_n_x0_32995,(_n_yi_32990+1.0));
double _n_d_33000=_n_hash_32900(_n_x1_32996,(_n_yi_32990+1.0));
return (((_n_a_32997+((_n_b_32998-_n_a_32997)*_n_u_32993))+((_n_c_32999-_n_a_32997)*_n_v_32994))+(((((_n_a_32997-_n_b_32998)-_n_c_32999)+_n_d_33000)*_n_u_32993)*_n_v_32994));

}
}

double _n_fbm_32902(double _a0,double _a1,double _a2,double _a3){double _n_x_33001=_a0;
double _n_y_33002=_a1;
double _n_octaves_33003=_a2;
double _n_period_33004=_a3;
{
double _n_s_33005=0.0;
double _n_n_33006=0.0;
double _n_amp_33007=0.5;
double _n_f_33008=1.0;
{double _n_i_33009=0.0;
for(;d::truth((_n_i_33009<_n_octaves_33003));(void)((_n_i_33009++))){d::check_cancel();(void)((_n_s_33005=(_n_s_33005+(_n_amp_33007*_n_noise_32901((_n_x_33001*_n_f_33008),(_n_y_33002*_n_f_33008),(_n_period_33004*_n_f_33008))))));
(void)((_n_n_33006=(_n_n_33006+_n_amp_33007)));
(void)((_n_amp_33007=(_n_amp_33007*0.5)));
(void)((_n_f_33008=(_n_f_33008*2.0)));
}}
return (_n_s_33005/_n_n_33006);

}
}

double _n_endGlow_32904(double _a0,double _a1){double _n_x_33010=_a0;
double _n_y_33011=_a1;
{
double _n_d_33012=d::hypot(std::initializer_list<double>{((_n_x_33010-_n_VX_32859)*0.9),(((_n_y_33011-_n_HY_32860)+2.0)*1.25)});
return ([&](){auto _n_left_33638=([&](){auto _n_left_33640=(std::exp(((-d::number(_n_d_33012))/6.5))*0.95);auto _n_right_33641=(std::exp(((-d::number(_n_d_33012))/16.0))*0.26);return (_n_left_33640+_n_right_33641);})();auto _n_right_33639=(std::exp(((-d::number(_n_d_33012))/45.0))*0.08);return (_n_left_33638+_n_right_33639);})();

}
}

double _n_clamp_32905(double _a0){double _n_v_33013=_a0;
return (d::truth((_n_v_33013<0.0))?0.0:(d::truth((_n_v_33013>1.0))?1.0:_n_v_33013));}

double _n_smooth_32906(double _a0,double _a1,double _a2){double _n_a_33014=_a0;
double _n_b_33015=_a1;
double _n_v_33016=_a2;
{
double _n_k_33017=_n_clamp_32905(((_n_v_33016-_n_a_33014)/(_n_b_33015-_n_a_33014)));
return ((_n_k_33017*_n_k_33017)*(3.0-(2.0*_n_k_33017)));

}
}

double _n_mix_32907(double _a0,double _a1,double _a2){double _n_a_33018=_a0;
double _n_b_33019=_a1;
double _n_k_33020=_a2;
return (_n_a_33018+((_n_b_33019-_n_a_33018)*_n_k_33020));}

d::Array<double,false> _n_hex_32908(d::String _a0){d::String _n_s_33021=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_33022=_a0;
return (([&](){auto _n_argument_33642=d::slice(_n_s_33021,_n_i_33022,(_n_i_33022+2.0));auto _n_argument_33643=16.0;return d::parseInt(_n_argument_33642,_n_argument_33643);})()/255.0);});}

double _n_walkerShape_32909(double _a0,double _a1,double _a2){double _n_u_33023=_a0;
double _n_v_33024=_a1;
double _n_ph_33025=_a2;
{
(void)((_n_v_33024=(_n_v_33024-(0.014*std::fabs(std::cos(_n_ph_33025))))));
double _n_R_33026=0.56;
double _n_RIM_33027=1.74;
if(d::truth((_n_v_33024>(_n_RIM_33027-0.07)))){d::check_cancel();double _n_q_33028=(_n_u_33023/_n_R_33026);
if((d::truth((_n_q_33028>(-d::number(1.0))))&&d::truth((_n_q_33028<1.0)))){d::check_cancel();double _n_top_33029=(_n_RIM_33027+(0.4*std::sqrt((1.0-(_n_q_33028*_n_q_33028)))));
double _n_bottom_33030=(_n_RIM_33027-(0.05*std::fabs(std::cos(((_n_q_33028*2.5)*ascii::PI)))));
if((d::truth((_n_v_33024<=_n_top_33029))&&d::truth((_n_v_33024>=_n_bottom_33030)))){d::check_cancel();return (d::truth((_n_v_33024>(_n_top_33029-0.06)))?2.0:3.0);
}
}
if(((d::truth((_n_u_33023>(-d::number(0.03))))&&d::truth((_n_u_33023<0.03)))&&d::truth((_n_v_33024<(_n_RIM_33027+0.5))))){d::check_cancel();return 3.0;
}
}
double _n_hy_33031=((_n_v_33024-1.6)/0.125);
double _n_hx_33032=(_n_u_33023/0.1);
if(d::truth((((_n_hx_33032*_n_hx_33032)+(_n_hy_33031*_n_hy_33031))<1.0))){d::check_cancel();return 1.0;
}
if((d::truth((_n_v_33024>=0.5))&&d::truth((_n_v_33024<=1.48)))){d::check_cancel();double _n_hw_33033=(d::truth((_n_v_33024>1.36))?(0.2*std::sqrt((1.0-std::pow(((_n_v_33024-1.36)/0.12),2.0)))):(0.18+(0.035*_n_smooth_32906(0.85,0.5,_n_v_33024))));
if((d::truth((_n_u_33023>(-d::number(_n_hw_33033))))&&d::truth((_n_u_33023<_n_hw_33033)))){d::check_cancel();return 1.0;
}
}
if((((d::truth((_n_v_33024>1.2))&&d::truth((_n_v_33024<_n_RIM_33027)))&&d::truth((_n_u_33023>0.01)))&&d::truth((_n_u_33023<0.07)))){d::check_cancel();return 1.0;
}
{double _n_i_33034=(-d::number(1.0));
for(;d::truth((_n_i_33034<=1.0));(void)((_n_i_33034=(_n_i_33034+2.0)))){d::check_cancel();double _n_lift_33035=(0.09*([&](){auto _n_argument_33644=0.0;auto _n_argument_33645=std::sin((_n_ph_33025+(d::truth((_n_i_33034>0.0))?ascii::PI:0.0)));return d::maximum({_n_argument_33644,_n_argument_33645});})());
double _n_lx_33036=(_n_u_33023-(_n_i_33034*0.075));
if((((d::truth((_n_v_33024>=_n_lift_33035))&&d::truth((_n_v_33024<0.62)))&&d::truth((_n_lx_33036>(-d::number(0.055)))))&&d::truth((_n_lx_33036<0.055)))){d::check_cancel();return 1.0;
}
}}
return 0.0;

}
}

struct Native_tokyo_rain final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_32910{};
double _n_N_32911{};
d::Array<d::String,false> _n_out_32912{};
d::Array<uint8_t,true> _n_lut_32913{};
d::Array<uint8_t,true> _n_mat_32915{};
d::Array<float,true> _n_S_32916{};
d::Array<float,true> _n_ER_32917{};
d::Array<float,true> _n_EG_32918{};
d::Array<float,true> _n_EB_32919{};
d::Array<float,true> _n_AR_32920{};
d::Array<float,true> _n_AG_32921{};
d::Array<float,true> _n_AB_32922{};
d::Array<float,true> _n_KG_32923{};
d::Array<uint8_t,true> _n_grp_32924{};
d::Array<float,true> _n_SR_32925{};
d::Array<float,true> _n_SG_32926{};
d::Array<float,true> _n_SB_32927{};
d::Array<float,true> _n_wet_32928{};
d::Array<float,true> _n_wallS_32931{};
d::Array<float,true> _n_roofY_32932{};
d::Array<float,true> _n_bareY_32933{};
d::Array<float,true> _n_baseY_32934{};
d::Array<int8_t,true> _n_colI_32935{};
d::Array<float,true> _n_colH_32936{};
d::Array<uint8_t,true> _n_tankCol_32937{};
double _n_towerTop_32938{};
d::Array<std::array<double,2>,false> _n_bulbs_32939{};
d::Array<double,false> _n_order_32940{};
d::Array<float,true> _n_LR_32942{};
d::Array<float,true> _n_LG_32943{};
d::Array<float,true> _n_LB_32944{};
d::Array<float,true> _n_fog_32947{};
d::Array<float,true> _n_HZR_32948{};
d::Array<float,true> _n_HZG_32949{};
d::Array<float,true> _n_HZB_32950{};
double _n_XH_32952{};
d::Array<float,true> _n_CR_32954{};
d::Array<float,true> _n_CG_32955{};
d::Array<float,true> _n_CB_32956{};
d::Array<float,true> _n_GR_32957{};
d::Array<float,true> _n_GG_32958{};
d::Array<float,true> _n_GB_32959{};
d::Array<float,true> _n_RR_32960{};
d::Array<float,true> _n_RG_32961{};
d::Array<float,true> _n_RB_32962{};
double _n_NG_32963{};
d::Array<std::shared_ptr<std::tuple<d::Array<int32_t,true>,d::Array<float,true>>>,false> _n_dropC_32964{};
d::Array<d::Array<d::Array<float,true>,false>,false> _n_dropR_32965{};
d::Array<double,false> _n_road_32966{};
d::Array<int32_t,true> _n_roadK_32967{};
d::Array<double,false> _n_sky_32968{};
d::Array<int32_t,true> _n_skyK_32969{};
double _n_CW_32970{};
d::Array<float,true> _n_cloud_32971{};
d::Array<d::Array<double,false>,false> _n_LAYERS_32972{};
d::Array<d::Array<double,false>,false> _n_drops_32973{};
d::Array<float,true> _n_FR_32974{};
d::Array<float,true> _n_FG_32975{};
d::Array<float,true> _n_FB_32976{};
d::Array<float,true> _n_rain_32977{};
d::Array<float,true> _n_hold_32978{};
std::function<d::String(double,std::shared_ptr<_n_Record_33591>)> _render;
double _n_nearest_32914(double _a0,double _a1,double _a2){double _n_r_33037=_a0;
double _n_g_33038=_a1;
double _n_b_33039=_a2;
{
double _n_k_33040=([&](){auto _n_left_34117=([&](){auto _n_left_34119=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_33037*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_34120=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_33038*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_34119)|d::i32(_n_right_34120));})();auto _n_right_34118=d::minimum({31.0,double(d::i32((_n_b_33039*31.99))|d::i32(0.0))});return double(d::i32(_n_left_34117)|d::i32(_n_right_34118));})();
if(d::truth((d::at(this->_n_lut_32913,_n_k_33040)!=255.0))){d::check_cancel();return d::at(this->_n_lut_32913,_n_k_33040);
}
double _n_best_33041=0.0;
double _n_bd_33042=1000000000.0;
{double _n_i_33043=0.0;
for(;d::truth((_n_i_33043<double(this->_n_P_32910.size())));(void)((_n_i_33043++))){d::check_cancel();double _n_dr_33044=(d::at(d::at(this->_n_P_32910,_n_i_33043),0.0)-_n_r_33037);
double _n_dg_33045=(d::at(d::at(this->_n_P_32910,_n_i_33043),1.0)-_n_g_33038);
double _n_db_33046=(d::at(d::at(this->_n_P_32910,_n_i_33043),2.0)-_n_b_33039);
double _n_d_33047=((((0.3*_n_dr_33044)*_n_dr_33044)+((0.5*_n_dg_33045)*_n_dg_33045))+((0.2*_n_db_33046)*_n_db_33046));
if(d::truth((_n_d_33047<_n_bd_33042))){d::check_cancel();(void)(((_n_bd_33042=_n_d_33047),(_n_best_33041=_n_i_33043)));
}
}}
return ([&](){auto&& _n_array_34121=this->_n_lut_32913;auto _n_index_34122=_n_k_33040;auto _n_value_34123=_n_best_33041;d::put(_n_array_34121,_n_index_34122,_n_value_34123);return _n_value_34123;})();

}
}

void _n_emit_32929(double _a0,double _a1,double _a2,double _a3){double _n_k_33048=_a0;
double _n_r_33049=_a1;
double _n_g_33050=_a2;
double _n_b_33051=_a3;
{
(void)((((((([&](){auto&& _n_array_34124=this->_n_ER_32917;auto _n_index_34125=_n_k_33048;auto _n_value_34126=_n_r_33049;d::put(_n_array_34124,_n_index_34125,_n_value_34126);return _n_value_34126;})(),([&](){auto&& _n_array_34127=this->_n_EG_32918;auto _n_index_34128=_n_k_33048;auto _n_value_34129=_n_g_33050;d::put(_n_array_34127,_n_index_34128,_n_value_34129);return _n_value_34129;})()),([&](){auto&& _n_array_34130=this->_n_EB_32919;auto _n_index_34131=_n_k_33048;auto _n_value_34132=_n_b_33051;d::put(_n_array_34130,_n_index_34131,_n_value_34132);return _n_value_34132;})()),([&](){auto&& _n_array_34133=this->_n_AR_32920;auto _n_index_34134=_n_k_33048;auto _n_value_34135=0.0;d::put(_n_array_34133,_n_index_34134,_n_value_34135);return _n_value_34135;})()),([&](){auto&& _n_array_34136=this->_n_AG_32921;auto _n_index_34137=_n_k_33048;auto _n_value_34138=0.0;d::put(_n_array_34136,_n_index_34137,_n_value_34138);return _n_value_34138;})()),([&](){auto&& _n_array_34139=this->_n_AB_32922;auto _n_index_34140=_n_k_33048;auto _n_value_34141=0.0;d::put(_n_array_34139,_n_index_34140,_n_value_34141);return _n_value_34141;})()));

}
}

void _n_surface_32930(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_k_33052=_a0;
double _n_r_33053=_a1;
double _n_g_33054=_a2;
double _n_b_33055=_a3;
double _n_kg_33056=_a4;
{
(void)(((((((([&](){auto&& _n_array_34142=this->_n_ER_32917;auto _n_index_34143=_n_k_33052;auto _n_value_34144=0.0;d::put(_n_array_34142,_n_index_34143,_n_value_34144);return _n_value_34144;})(),([&](){auto&& _n_array_34145=this->_n_EG_32918;auto _n_index_34146=_n_k_33052;auto _n_value_34147=0.0;d::put(_n_array_34145,_n_index_34146,_n_value_34147);return _n_value_34147;})()),([&](){auto&& _n_array_34148=this->_n_EB_32919;auto _n_index_34149=_n_k_33052;auto _n_value_34150=0.0;d::put(_n_array_34148,_n_index_34149,_n_value_34150);return _n_value_34150;})()),([&](){auto&& _n_array_34151=this->_n_AR_32920;auto _n_index_34152=_n_k_33052;auto _n_value_34153=_n_r_33053;d::put(_n_array_34151,_n_index_34152,_n_value_34153);return _n_value_34153;})()),([&](){auto&& _n_array_34154=this->_n_AG_32921;auto _n_index_34155=_n_k_33052;auto _n_value_34156=_n_g_33054;d::put(_n_array_34154,_n_index_34155,_n_value_34156);return _n_value_34156;})()),([&](){auto&& _n_array_34157=this->_n_AB_32922;auto _n_index_34158=_n_k_33052;auto _n_value_34159=_n_b_33055;d::put(_n_array_34157,_n_index_34158,_n_value_34159);return _n_value_34159;})()),([&](){auto&& _n_array_34160=this->_n_KG_32923;auto _n_index_34161=_n_k_33052;auto _n_value_34162=_n_kg_33056;d::put(_n_array_34160,_n_index_34161,_n_value_34162);return _n_value_34162;})()));

}
}

void _n_lantern_32941(double _a0,double _a1,std::function<void(double,double,double,double)> _a2){double _n_li_33298=_a0;
double _n_swing_33299=_a1;
std::function<void(double,double,double,double)> _n_put_33300=_a2;
{
auto _n_binding_34163=d::at(_n_LANTERNS_32898,_n_li_33298);
double _n_s_33305=d::at(_n_binding_34163,0.0);
double _n_lx_33306=d::at(_n_binding_34163,1.0);
double _n_lh_33307=d::at(_n_binding_34163,2.0);
double _n_xc_33308=(_n_VX_32859+(_n_lx_33306*_n_s_33305));
double _n_yc_33309=(_n_HY_32860-((_n_lh_33307-_n_EYE_32862)*_n_s_33305));
double _n_top_33310=(_n_HY_32860-(((_n_lh_33307+0.62)-_n_EYE_32862)*_n_s_33305));
{double _n_r_33311=([&](){auto _n_argument_34164=0.0;auto _n_argument_34165=std::floor(_n_top_33310);return d::maximum({_n_argument_34164,_n_argument_34165});})();
for(;d::truth((_n_r_33311<([&](){auto _n_argument_34166=_n_H_32858;auto _n_argument_34167=std::ceil((_n_yc_33309+(0.48*_n_s_33305)));return d::minimum({_n_argument_34166,_n_argument_34167});})()));(void)((_n_r_33311++))){d::check_cancel();double _n_y_33312=(_n_r_33311+0.5);
double _n_v_33313=((_n_yc_33309-_n_y_33312)/_n_s_33305);
double _n_off_33314=(_n_swing_33299*(0.62-_n_v_33313));
{double _n_x_33315=std::floor(((_n_xc_33308-(0.36*_n_s_33305))-1.0));
for(;d::truth((_n_x_33315<=std::ceil(((_n_xc_33308+(0.36*_n_s_33305))+1.0))));(void)((_n_x_33315++))){d::check_cancel();if((d::truth((_n_x_33315<0.0))||d::truth((_n_x_33315>=_n_W_32857)))){d::check_cancel();continue;
}
double _n_u_33316=((((_n_x_33315+0.5)-_n_xc_33308)/_n_s_33305)-_n_off_33314);
double _n_k_33317=((_n_r_33311*_n_W_32857)+_n_x_33315);
if(d::truth((_n_v_33313>0.44))){d::check_cancel();if(d::truth((std::fabs(_n_u_33316)<(0.5/_n_s_33305)))){d::check_cancel();(void)(_n_put_33300(_n_k_33317,0.04,0.02,0.02));
}
continue;
}
if(d::truth((_n_v_33313<(-d::number(0.44))))){d::check_cancel();continue;
}
if(d::truth((std::fabs(_n_v_33313)>0.38))){d::check_cancel();if(d::truth((std::fabs(_n_u_33316)<0.15))){d::check_cancel();(void)(_n_put_33300(_n_k_33317,0.06,0.02,0.02));
}
continue;
}
double _n_hw_33318=(0.26*std::sqrt((1.0-std::pow((_n_v_33313/0.46),2.0))));
if(d::truth((std::fabs(_n_u_33316)>_n_hw_33318))){d::check_cancel();continue;
}
double _n_q_33319=(_n_u_33316/_n_hw_33318);
double _n_b_33320=(0.6+(0.4*(1.0-(_n_q_33319*_n_q_33319))));
if(d::truth((d::mod((_n_v_33313+0.38),0.095)<0.024))){d::check_cancel();(void)((_n_b_33320=(_n_b_33320*0.5)));
}
bool _n_letter_33321=([&]()->bool{auto _n_logical_34168=(std::fabs(_n_v_33313)<0.24);return d::truth(_n_logical_34168)?([&]()->bool{auto _n_logical_34169=(std::fabs(_n_u_33316)<0.02);return d::truth(_n_logical_34169)?_n_logical_34169:([&]()->bool{auto _n_logical_34170=(std::fabs(_n_u_33316)<0.08);return d::truth(_n_logical_34170)?(d::mod((_n_v_33313+0.24),0.12)<0.03):_n_logical_34170;})();})():_n_logical_34168;})();
if(d::truth(_n_letter_33321)){d::check_cancel();(void)((_n_b_33320=(_n_b_33320*0.12)));
}
(void)(_n_put_33300(_n_k_33317,_n_b_33320,(_n_b_33320*0.27),(_n_b_33320*0.11)));
}}
}}

}
}

d::Array<float,true> _n_blur_32945(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_src_33327=_a0;
double _n_rad_33328=_a1;
double _n_passes_33329=_a2;
{
d::Array<float,true> _n_a_33330=_n_src_33327.slice();
d::Array<float,true> _n_b_33331=d::Array<float,true>(size_t(this->_n_N_32911));
d::Array<float,true> _n_pre_33332=d::Array<float,true>(size_t((d::maximum({_n_W_32857,_n_H_32858})+1.0)));
double _n_n_33333=((2.0*_n_rad_33328)+1.0);
{double _n_p_33334=0.0;
for(;d::truth((_n_p_33334<_n_passes_33329));(void)((_n_p_33334++))){d::check_cancel();{double _n_r_33335=0.0;
for(;d::truth((_n_r_33335<_n_H_32858));(void)((_n_r_33335++))){d::check_cancel();{double _n_x_33336=0.0;
for(;d::truth((_n_x_33336<_n_W_32857));(void)((_n_x_33336++))){d::check_cancel();(void)(([&](){auto&& _n_array_34171=_n_pre_33332;auto _n_index_34172=(_n_x_33336+1.0);auto _n_value_34173=(d::at(_n_pre_33332,_n_x_33336)+d::at(_n_a_33330,((_n_r_33335*_n_W_32857)+_n_x_33336)));d::put(_n_array_34171,_n_index_34172,_n_value_34173);return _n_value_34173;})());
}}
{double _n_x_33337=0.0;
for(;d::truth((_n_x_33337<_n_W_32857));(void)((_n_x_33337++))){d::check_cancel();(void)(([&](){auto&& _n_array_34174=_n_b_33331;auto _n_index_34175=((_n_r_33335*_n_W_32857)+_n_x_33337);auto _n_value_34176=(([&](){auto _n_left_34177=d::at(_n_pre_33332,d::minimum({_n_W_32857,((_n_x_33337+_n_rad_33328)+1.0)}));auto _n_right_34178=d::at(_n_pre_33332,d::maximum({0.0,(_n_x_33337-_n_rad_33328)}));return (_n_left_34177-_n_right_34178);})()/_n_n_33333);d::put(_n_array_34174,_n_index_34175,_n_value_34176);return _n_value_34176;})());
}}
}}
{double _n_x_33338=0.0;
for(;d::truth((_n_x_33338<_n_W_32857));(void)((_n_x_33338++))){d::check_cancel();{double _n_r_33339=0.0;
for(;d::truth((_n_r_33339<_n_H_32858));(void)((_n_r_33339++))){d::check_cancel();(void)(([&](){auto&& _n_array_34179=_n_pre_33332;auto _n_index_34180=(_n_r_33339+1.0);auto _n_value_34181=(d::at(_n_pre_33332,_n_r_33339)+d::at(_n_b_33331,((_n_r_33339*_n_W_32857)+_n_x_33338)));d::put(_n_array_34179,_n_index_34180,_n_value_34181);return _n_value_34181;})());
}}
{double _n_r_33340=0.0;
for(;d::truth((_n_r_33340<_n_H_32858));(void)((_n_r_33340++))){d::check_cancel();(void)(([&](){auto&& _n_array_34182=_n_a_33330;auto _n_index_34183=((_n_r_33340*_n_W_32857)+_n_x_33338);auto _n_value_34184=(([&](){auto _n_left_34185=d::at(_n_pre_33332,d::minimum({_n_H_32858,((_n_r_33340+_n_rad_33328)+1.0)}));auto _n_right_34186=d::at(_n_pre_33332,d::maximum({0.0,(_n_r_33340-_n_rad_33328)}));return (_n_left_34185-_n_right_34186);})()/_n_n_33333);d::put(_n_array_34182,_n_index_34183,_n_value_34184);return _n_value_34184;})());
}}
}}
}}
return _n_a_33330;

}
}

d::Array<float,true> _n_glow_32946(d::Array<float,true> _a0){d::Array<float,true> _n_e_33341=_a0;
{
d::Array<float,true> _n_a_33342=this->_n_blur_32945(_n_e_33341,2.0,2.0);
d::Array<float,true> _n_b_33343=this->_n_blur_32945(_n_e_33341,6.0,3.0);
d::Array<float,true> _n_c_33344=this->_n_blur_32945(_n_e_33341,20.0,2.0);
{double _n_k_33345=0.0;
for(;d::truth((_n_k_33345<this->_n_N_32911));(void)((_n_k_33345++))){d::check_cancel();(void)(([&](){auto&& _n_array_34187=_n_a_33342;auto _n_index_34188=_n_k_33345;auto _n_value_34189=(((d::at(_n_a_33342,_n_k_33345)*0.5)+(d::at(_n_b_33343,_n_k_33345)*1.0))+(d::at(_n_c_33344,_n_k_33345)*0.22));d::put(_n_array_34187,_n_index_34188,_n_value_34189);return _n_value_34189;})());
}}
return _n_a_33342;

}
}

d::Array<d::Array<float,true>,false> _n_shade_32951(d::Array<float,true> _a0,d::Array<float,true> _a1,d::Array<float,true> _a2){d::Array<float,true> _n_er_33351=_a0;
d::Array<float,true> _n_eg_33352=_a1;
d::Array<float,true> _n_eb_33353=_a2;
{
d::Array<float,true> _n_gr_33354=this->_n_glow_32946(d::map(_n_er_33351,[&]( double _a0,double _a1) mutable ->double{double _n_v_33355=_a0;
double _n_k_33356=_a1;
return (_n_v_33355+d::at(this->_n_LR_32942,_n_k_33356));}));
d::Array<float,true> _n_gg_33357=this->_n_glow_32946(d::map(_n_eg_33352,[&]( double _a0,double _a1) mutable ->double{double _n_v_33358=_a0;
double _n_k_33359=_a1;
return (_n_v_33358+d::at(this->_n_LG_32943,_n_k_33359));}));
d::Array<float,true> _n_gb_33360=this->_n_glow_32946(d::map(_n_eb_33353,[&]( double _a0,double _a1) mutable ->double{double _n_v_33361=_a0;
double _n_k_33362=_a1;
return (_n_v_33361+d::at(this->_n_LB_32944,_n_k_33362));}));
d::Array<float,true> _n_cr_33363=d::Array<float,true>(size_t(this->_n_N_32911));
d::Array<float,true> _n_cg_33364=d::Array<float,true>(size_t(this->_n_N_32911));
d::Array<float,true> _n_cb_33365=d::Array<float,true>(size_t(this->_n_N_32911));
{double _n_k_33366=0.0;
for(;d::truth((_n_k_33366<this->_n_N_32911));(void)((_n_k_33366++))){d::check_cancel();double _n_m_33367=d::at(this->_n_mat_32915,_n_k_33366);
double _n_r_33368{};
double _n_g_33369{};
double _n_b_33370{};
if((d::truth((_n_m_33367==_n_SKY_32870))||d::truth((_n_m_33367==_n_WIRE_32877)))){d::check_cancel();(void)((((_n_r_33368=(d::at(this->_n_SR_32925,_n_k_33366)+(d::at(_n_gr_33354,_n_k_33366)*0.06))),(_n_g_33369=(d::at(this->_n_SG_32926,_n_k_33366)+(d::at(_n_gg_33357,_n_k_33366)*0.06)))),(_n_b_33370=(d::at(this->_n_SB_32927,_n_k_33366)+(d::at(_n_gb_33360,_n_k_33366)*0.06)))));
if(d::truth((_n_m_33367==_n_WIRE_32877))){d::check_cancel();(void)((((_n_r_33368=((_n_r_33368*0.3)+(d::at(_n_gr_33354,_n_k_33366)*0.3))),(_n_g_33369=((_n_g_33369*0.3)+(d::at(_n_gg_33357,_n_k_33366)*0.3)))),(_n_b_33370=((_n_b_33370*0.3)+(d::at(_n_gb_33360,_n_k_33366)*0.3)))));
}
}else {d::check_cancel();double _n_kg_33371=((d::at(this->_n_KG_32923,_n_k_33366)+(d::truth((_n_m_33367==_n_SIGN_32873))?0.05:0.0))*2.4);
(void)((((_n_r_33368=(d::at(_n_er_33351,_n_k_33366)+(d::at(this->_n_AR_32920,_n_k_33366)*(0.06+(d::at(_n_gr_33354,_n_k_33366)*_n_kg_33371))))),(_n_g_33369=(d::at(_n_eg_33352,_n_k_33366)+(d::at(this->_n_AG_32921,_n_k_33366)*(0.05+(d::at(_n_gg_33357,_n_k_33366)*_n_kg_33371)))))),(_n_b_33370=(d::at(_n_eb_33353,_n_k_33366)+(d::at(this->_n_AB_32922,_n_k_33366)*(0.09+(d::at(_n_gb_33360,_n_k_33366)*_n_kg_33371)))))));
double _n_f_33372=d::at(this->_n_fog_32947,_n_k_33366);
(void)((((_n_r_33368=_n_mix_32907(_n_r_33368,(d::at(this->_n_HZR_32948,_n_k_33366)+(d::at(_n_gr_33354,_n_k_33366)*0.3)),_n_f_33372)),(_n_g_33369=_n_mix_32907(_n_g_33369,(d::at(this->_n_HZG_32949,_n_k_33366)+(d::at(_n_gg_33357,_n_k_33366)*0.3)),_n_f_33372))),(_n_b_33370=_n_mix_32907(_n_b_33370,(d::at(this->_n_HZB_32950,_n_k_33366)+(d::at(_n_gb_33360,_n_k_33366)*0.3)),_n_f_33372))));
}
(void)(((([&](){auto&& _n_array_34190=_n_cr_33363;auto _n_index_34191=_n_k_33366;auto _n_value_34192=_n_r_33368;d::put(_n_array_34190,_n_index_34191,_n_value_34192);return _n_value_34192;})(),([&](){auto&& _n_array_34193=_n_cg_33364;auto _n_index_34194=_n_k_33366;auto _n_value_34195=_n_g_33369;d::put(_n_array_34193,_n_index_34194,_n_value_34195);return _n_value_34195;})()),([&](){auto&& _n_array_34196=_n_cb_33365;auto _n_index_34197=_n_k_33366;auto _n_value_34198=_n_b_33370;d::put(_n_array_34196,_n_index_34197,_n_value_34198);return _n_value_34198;})()));
}}
return d::Array<d::Array<float,true>,false>{_n_cr_33363,_n_cg_33364,_n_cb_33365,_n_gr_33354,_n_gg_33357,_n_gb_33360};

}
}

d::Array<d::Array<float,true>,false> _n_mirror_32953(d::Array<float,true> _a0,d::Array<float,true> _a1,d::Array<float,true> _a2){d::Array<float,true> _n_cr_33373=_a0;
d::Array<float,true> _n_cg_33374=_a1;
d::Array<float,true> _n_cb_33375=_a2;
{
d::Array<float,true> _n_xr_33376=d::Array<float,true>(size_t((_n_W_32857*this->_n_XH_32952)));
d::Array<float,true> _n_xg_33377=d::Array<float,true>(size_t((_n_W_32857*this->_n_XH_32952)));
d::Array<float,true> _n_xb_33378=d::Array<float,true>(size_t((_n_W_32857*this->_n_XH_32952)));
d::Array<float,true> _n_xd_33379=d::Array<float,true>(size_t((_n_W_32857*this->_n_XH_32952))).fill((-d::number(1.0)));
{double _n_k_33380=0.0;
for(;d::truth((_n_k_33380<this->_n_N_32911));(void)((_n_k_33380++))){d::check_cancel();double _n_m_33381=d::at(this->_n_mat_32915,_n_k_33380);
if(d::truth((_n_m_33381==_n_ROAD_32872))){d::check_cancel();continue;
}
double _n_x_33382=d::mod(_n_k_33380,_n_W_32857);
double _n_r_33383=double(d::i32((_n_k_33380/_n_W_32857))|d::i32(0.0));
double _n_s_33384=d::at(this->_n_S_32916,_n_k_33380);
double _n_rr_33385=std::floor(((((2.0*_n_HY_32860)+((2.0*_n_EYE_32862)*_n_s_33384))-_n_r_33383)-0.5));
if(((d::truth((_n_rr_33385<_n_HY_32860))||d::truth((_n_rr_33385>=this->_n_XH_32952)))||d::truth(([&]()->bool{auto _n_logical_34199=(_n_rr_33385<_n_H_32858);return d::truth(_n_logical_34199)?(d::at(this->_n_mat_32915,((_n_rr_33385*_n_W_32857)+_n_x_33382))!=_n_ROAD_32872):_n_logical_34199;})()))){d::check_cancel();continue;
}
double _n_q_33386=((_n_rr_33385*_n_W_32857)+_n_x_33382);
if(d::truth((_n_s_33384<=d::at(_n_xd_33379,_n_q_33386)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_34200=_n_xd_33379;auto _n_index_34201=_n_q_33386;auto _n_value_34202=_n_s_33384;d::put(_n_array_34200,_n_index_34201,_n_value_34202);return _n_value_34202;})());
double _n_f_33387=d::at(_n_GIVE_32879,_n_m_33381);
(void)(((([&](){auto&& _n_array_34203=_n_xr_33376;auto _n_index_34204=_n_q_33386;auto _n_value_34205=(d::at(_n_cr_33373,_n_k_33380)*_n_f_33387);d::put(_n_array_34203,_n_index_34204,_n_value_34205);return _n_value_34205;})(),([&](){auto&& _n_array_34206=_n_xg_33377;auto _n_index_34207=_n_q_33386;auto _n_value_34208=(d::at(_n_cg_33374,_n_k_33380)*_n_f_33387);d::put(_n_array_34206,_n_index_34207,_n_value_34208);return _n_value_34208;})()),([&](){auto&& _n_array_34209=_n_xb_33378;auto _n_index_34210=_n_q_33386;auto _n_value_34211=(d::at(_n_cb_33375,_n_k_33380)*_n_f_33387);d::put(_n_array_34209,_n_index_34210,_n_value_34211);return _n_value_34211;})()));
}}
d::Array<float,true> _n_rr_33388=d::Array<float,true>(size_t(this->_n_N_32911));
d::Array<float,true> _n_rg_33389=d::Array<float,true>(size_t(this->_n_N_32911));
d::Array<float,true> _n_rb_33390=d::Array<float,true>(size_t(this->_n_N_32911));
{double _n_x_33391=0.0;
for(;d::truth((_n_x_33391<_n_W_32857));(void)((_n_x_33391++))){d::check_cancel();{double _n_r_33392=(_n_HY_32860+1.0);
for(;d::truth((_n_r_33392<this->_n_XH_32952));(void)((_n_r_33392++))){d::check_cancel();double _n_q_33393=((_n_r_33392*_n_W_32857)+_n_x_33391);
if((d::truth((d::at(_n_xd_33379,_n_q_33393)<0.0))&&d::truth((d::at(_n_xd_33379,(_n_q_33393-_n_W_32857))>=0.0)))){d::check_cancel();(void)((((([&](){auto&& _n_array_34212=_n_xr_33376;auto _n_index_34213=_n_q_33393;auto _n_value_34214=d::at(_n_xr_33376,(_n_q_33393-_n_W_32857));d::put(_n_array_34212,_n_index_34213,_n_value_34214);return _n_value_34214;})(),([&](){auto&& _n_array_34215=_n_xg_33377;auto _n_index_34216=_n_q_33393;auto _n_value_34217=d::at(_n_xg_33377,(_n_q_33393-_n_W_32857));d::put(_n_array_34215,_n_index_34216,_n_value_34217);return _n_value_34217;})()),([&](){auto&& _n_array_34218=_n_xb_33378;auto _n_index_34219=_n_q_33393;auto _n_value_34220=d::at(_n_xb_33378,(_n_q_33393-_n_W_32857));d::put(_n_array_34218,_n_index_34219,_n_value_34220);return _n_value_34220;})()),([&](){auto&& _n_array_34221=_n_xd_33379;auto _n_index_34222=_n_q_33393;auto _n_value_34223=0.0;d::put(_n_array_34221,_n_index_34222,_n_value_34223);return _n_value_34223;})()));
}
}}
double _n_ur_33394=0.0;
double _n_ug_33395=0.0;
double _n_ub_33396=0.0;
double _n_dr_33397=0.0;
double _n_dg_33398=0.0;
double _n_db_33399=0.0;
d::Array<float,true> _n_upR_33400=d::Array<float,true>(size_t(this->_n_XH_32952));
d::Array<float,true> _n_upG_33401=d::Array<float,true>(size_t(this->_n_XH_32952));
d::Array<float,true> _n_upB_33402=d::Array<float,true>(size_t(this->_n_XH_32952));
{double _n_r_33403=(this->_n_XH_32952-1.0);
for(;d::truth((_n_r_33403>=_n_HY_32860));(void)((_n_r_33403--))){d::check_cancel();double _n_q_33404=((_n_r_33403*_n_W_32857)+_n_x_33391);
(void)((((_n_ur_33394=((_n_ur_33394*0.96)+(d::at(_n_xr_33376,_n_q_33404)*0.04))),(_n_ug_33395=((_n_ug_33395*0.96)+(d::at(_n_xg_33377,_n_q_33404)*0.04)))),(_n_ub_33396=((_n_ub_33396*0.96)+(d::at(_n_xb_33378,_n_q_33404)*0.04)))));
(void)(((([&](){auto&& _n_array_34224=_n_upR_33400;auto _n_index_34225=_n_r_33403;auto _n_value_34226=_n_ur_33394;d::put(_n_array_34224,_n_index_34225,_n_value_34226);return _n_value_34226;})(),([&](){auto&& _n_array_34227=_n_upG_33401;auto _n_index_34228=_n_r_33403;auto _n_value_34229=_n_ug_33395;d::put(_n_array_34227,_n_index_34228,_n_value_34229);return _n_value_34229;})()),([&](){auto&& _n_array_34230=_n_upB_33402;auto _n_index_34231=_n_r_33403;auto _n_value_34232=_n_ub_33396;d::put(_n_array_34230,_n_index_34231,_n_value_34232);return _n_value_34232;})()));
}}
{double _n_r_33405=_n_HY_32860;
for(;d::truth((_n_r_33405<_n_H_32858));(void)((_n_r_33405++))){d::check_cancel();double _n_q_33406=((_n_r_33405*_n_W_32857)+_n_x_33391);
(void)((((_n_dr_33397=((_n_dr_33397*0.9)+(d::at(_n_xr_33376,_n_q_33406)*0.1))),(_n_dg_33398=((_n_dg_33398*0.9)+(d::at(_n_xg_33377,_n_q_33406)*0.1)))),(_n_db_33399=((_n_db_33399*0.9)+(d::at(_n_xb_33378,_n_q_33406)*0.1)))));
if(d::truth((d::at(this->_n_mat_32915,_n_q_33406)!=_n_ROAD_32872))){d::check_cancel();continue;
}
double _n_y_33407=(_n_r_33405+0.5);
double _n_fres_33408=(0.45+(0.55*_n_smooth_32906((_n_H_32858+6.0),(_n_HY_32860+3.0),_n_y_33407)));
(void)(([&](){auto&& _n_array_34233=_n_rr_33388;auto _n_index_34234=_n_q_33406;auto _n_value_34235=((((d::at(_n_xr_33376,_n_q_33406)*0.35)+(_n_dr_33397*0.5))+(d::at(_n_upR_33400,_n_r_33405)*1.1))*_n_fres_33408);d::put(_n_array_34233,_n_index_34234,_n_value_34235);return _n_value_34235;})());
(void)(([&](){auto&& _n_array_34236=_n_rg_33389;auto _n_index_34237=_n_q_33406;auto _n_value_34238=((((d::at(_n_xg_33377,_n_q_33406)*0.35)+(_n_dg_33398*0.5))+(d::at(_n_upG_33401,_n_r_33405)*1.1))*_n_fres_33408);d::put(_n_array_34236,_n_index_34237,_n_value_34238);return _n_value_34238;})());
(void)(([&](){auto&& _n_array_34239=_n_rb_33390;auto _n_index_34240=_n_q_33406;auto _n_value_34241=((((d::at(_n_xb_33378,_n_q_33406)*0.35)+(_n_db_33399*0.5))+(d::at(_n_upB_33402,_n_r_33405)*1.1))*_n_fres_33408);d::put(_n_array_34239,_n_index_34240,_n_value_34241);return _n_value_34241;})());
}}
}}
return d::Array<d::Array<float,true>,false>{_n_rr_33388,_n_rg_33389,_n_rb_33390};

}
}

std::shared_ptr<_n_Record_32980> _n_walker_32979(double _a0){double _n_t_33447=_a0;
{
double _n_tau_33448=d::mod((d::mod((_n_t_33447+5.5),24.0)+24.0),24.0);
double _n_k_33449=_n_clamp_32905(((_n_tau_33448-3.0)/4.0));
double _n_ramp_33450=(d::truth((_n_tau_33448<3.0))?0.0:(d::truth((_n_tau_33448<7.0))?(4.0*(((_n_k_33449*_n_k_33449)*_n_k_33449)-((((_n_k_33449*_n_k_33449)*_n_k_33449)*_n_k_33449)/2.0))):((2.0+_n_tau_33448)-7.0)));
double _n_z_33451=((5.6+(0.06*_n_tau_33448))+(0.5*_n_ramp_33450));
double _n_xw_33452=(4.4-(4.05*_n_smooth_32906(0.0,5.5,_n_tau_33448)));
return ([&](){auto _n_object_34243=std::make_shared<_n_Record_32980>();_n_object_34243->_p_xw=_n_xw_33452;_n_object_34243->_p_z=_n_z_33451;_n_object_34243->_p_s=(_n_F_32861/_n_z_33451);_n_object_34243->_p_fade=_n_smooth_32906(15.0,12.0,_n_z_33451);_n_object_34243->_p_ph=((_n_tau_33448*1.7)*ascii::PI);return _n_object_34243;})();

}
}

double _n_flicker_32981(double _a0,double _a1){double _n_gi_33453=_a0;
double _n_t_33454=_a1;
{
double _n_f_33455=std::floor((_n_t_33454*15.0));
if(d::truth((_n_gi_33453==1.0))){d::check_cancel();double _n_c_33456=d::mod((_n_t_33454+3.0),9.0);
return (d::truth((_n_c_33456<0.9))?(d::truth((_n_hash_32900(_n_f_33455,11.0)>0.45))?1.0:0.1):(0.96+(0.04*_n_hash_32900(_n_f_33455,12.0))));
}
if(d::truth((_n_gi_33453==2.0))){d::check_cancel();double _n_c_33457=d::mod((_n_t_33454+7.0),13.0);
if((d::truth((_n_c_33457<0.7))||d::truth(([&]()->bool{auto _n_logical_34244=(_n_c_33457>4.0);return d::truth(_n_logical_34244)?(_n_c_33457<4.8):_n_logical_34244;})()))){d::check_cancel();return (d::truth((_n_hash_32900(_n_f_33455,21.0)>0.5))?1.0:0.0);
}
return (d::truth((_n_c_33457<4.0))?0.0:1.0);
}
double _n_c_33458=d::mod((_n_t_33454+1.5),7.0);
return (d::truth((_n_c_33458<1.2))?(d::truth((_n_hash_32900(_n_f_33455,31.0)>0.35))?1.0:0.0):1.0);

}
}

explicit Native_tokyo_rain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_32910=d::map(_n_meta_32855->_p_palette,_n_hex_32908);
this->_n_N_32911=(_n_W_32857*_n_H_32858);
this->_n_out_32912=d::Array<d::String,false>(size_t(this->_n_N_32911));
this->_n_lut_32913=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_32915=d::Array<uint8_t,true>(size_t(this->_n_N_32911));
this->_n_S_32916=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_ER_32917=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_EG_32918=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_EB_32919=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_AR_32920=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_AG_32921=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_AB_32922=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_KG_32923=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_grp_32924=d::Array<uint8_t,true>(size_t(this->_n_N_32911));
this->_n_SR_32925=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_SG_32926=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_SB_32927=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_wet_32928=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_wallS_32931=d::Array<float,true>(size_t(_n_W_32857));
this->_n_roofY_32932=d::Array<float,true>(size_t(_n_W_32857));
this->_n_bareY_32933=d::Array<float,true>(size_t(_n_W_32857));
this->_n_baseY_32934=d::Array<float,true>(size_t(_n_W_32857));
this->_n_colI_32935=d::Array<int8_t,true>(size_t(_n_W_32857));
this->_n_colH_32936=d::Array<float,true>(size_t(_n_W_32857));
this->_n_tankCol_32937=d::Array<uint8_t,true>(size_t(_n_W_32857));
{double _n_x_33057=0.0;
for(;d::truth((_n_x_33057<_n_W_32857));(void)((_n_x_33057++))){d::check_cancel();double _n_xc_33058=(_n_x_33057+0.5);
double _n_side_33059=(d::truth((_n_xc_33058<_n_VX_32859))?(-d::number(1.0)):1.0);
d::Array<d::Array<double,false>,false> _n_list_33060=(d::truth((_n_side_33059<0.0))?_n_LEFT_32892:_n_RIGHT_32893);
double _n_s0_33061=(std::fabs((_n_xc_33058-_n_VX_32859))/_n_HALF_32863);
double _n_z_33062=(_n_F_32861/_n_s0_33061);
double _n_i_33063=0.0;
while((d::truth((_n_i_33063<(double(_n_list_33060.size())-1.0)))&&d::truth((_n_z_33062>=d::at(d::at(_n_list_33060,_n_i_33063),1.0))))){d::check_cancel();(void)((_n_i_33063++));
}
double _n_s_33064=_n_s0_33061;
double _n_hgt_33065=d::at(d::at(_n_list_33060,_n_i_33063),2.0);
if(d::truth((!d::truth(_n_hgt_33065)))){d::check_cancel();(void)((_n_s_33064=(_n_F_32861/d::at(d::at(_n_list_33060,_n_i_33063),1.0))));
(void)((_n_hgt_33065=d::at(d::at(_n_list_33060,(_n_i_33063+1.0)),2.0)));
}
double _n_extra_33066=0.0;
for(auto &&_n_item_33646:_n_TANKS_32894){d::check_cancel();auto _n_binding_33647=_n_item_33646;
double _n_ts_33067=d::at(_n_binding_33647,0.0);
double _n_a_33068=d::at(_n_binding_33647,1.0);
double _n_b_33069=d::at(_n_binding_33647,2.0);
double _n_e_33070=d::at(_n_binding_33647,3.0);
if(((d::truth((_n_ts_33067==_n_side_33059))&&d::truth((_n_z_33062>=_n_a_33068)))&&d::truth((_n_z_33062<_n_b_33069)))){d::check_cancel();(void)(((_n_extra_33066=_n_e_33070),([&](){auto&& _n_array_33648=this->_n_tankCol_32937;auto _n_index_33649=_n_x_33057;auto _n_value_33650=1.0;d::put(_n_array_33648,_n_index_33649,_n_value_33650);return _n_value_33650;})()));
}
}
(void)(([&](){auto&& _n_array_33651=this->_n_wallS_32931;auto _n_index_33652=_n_x_33057;auto _n_value_33653=_n_s_33064;d::put(_n_array_33651,_n_index_33652,_n_value_33653);return _n_value_33653;})());
(void)(([&](){auto&& _n_array_33654=this->_n_baseY_32934;auto _n_index_33655=_n_x_33057;auto _n_value_33656=(_n_HY_32860+(_n_EYE_32862*_n_s_33064));d::put(_n_array_33654,_n_index_33655,_n_value_33656);return _n_value_33656;})());
(void)(([&](){auto&& _n_array_33657=this->_n_bareY_32933;auto _n_index_33658=_n_x_33057;auto _n_value_33659=(_n_HY_32860-((_n_hgt_33065-_n_EYE_32862)*_n_s_33064));d::put(_n_array_33657,_n_index_33658,_n_value_33659);return _n_value_33659;})());
(void)(([&](){auto&& _n_array_33660=this->_n_roofY_32932;auto _n_index_33661=_n_x_33057;auto _n_value_33662=(_n_HY_32860-(((_n_hgt_33065+_n_extra_33066)-_n_EYE_32862)*_n_s_33064));d::put(_n_array_33660,_n_index_33661,_n_value_33662);return _n_value_33662;})());
(void)(([&](){auto&& _n_array_33663=this->_n_colI_32935;auto _n_index_33664=_n_x_33057;auto _n_value_33665=_n_i_33063;d::put(_n_array_33663,_n_index_33664,_n_value_33665);return _n_value_33665;})());
(void)(([&](){auto&& _n_array_33666=this->_n_colH_32936;auto _n_index_33667=_n_x_33057;auto _n_value_33668=_n_hgt_33065;d::put(_n_array_33666,_n_index_33667,_n_value_33668);return _n_value_33668;})());
}}
for(auto &&_n_item_33669:_n_MASTS_32895){d::check_cancel();auto _n_binding_33670=_n_item_33669;
double _n_ms_33071=d::at(_n_binding_33670,0.0);
double _n_at_33072=d::at(_n_binding_33670,1.0);
double _n_e_33073=d::at(_n_binding_33670,2.0);
{
double _n_s_33074=(_n_F_32861/_n_at_33072);
double _n_x_33075=std::floor((_n_VX_32859+((_n_ms_33071*_n_HALF_32863)*_n_s_33074)));
(void)(([&](){auto&& _n_array_33671=this->_n_roofY_32932;auto _n_index_33672=_n_x_33075;auto _n_value_33673=d::minimum({d::at(this->_n_roofY_32932,_n_x_33075),(d::at(this->_n_bareY_32933,_n_x_33075)-(_n_e_33073*_n_s_33074))});d::put(_n_array_33671,_n_index_33672,_n_value_33673);return _n_value_33673;})());

}
}
{double _n_r_33076=0.0;
for(;d::truth((_n_r_33076<_n_H_32858));(void)((_n_r_33076++))){d::check_cancel();double _n_y_33077=(_n_r_33076+0.5);
{double _n_x_33078=0.0;
for(;d::truth((_n_x_33078<_n_W_32857));(void)((_n_x_33078++))){d::check_cancel();double _n_k_33079=((_n_r_33076*_n_W_32857)+_n_x_33078);
double _n_xc_33080=(_n_x_33078+0.5);
double _n_side_33081=(d::truth((_n_xc_33080<_n_VX_32859))?(-d::number(1.0)):1.0);
if(d::truth((_n_y_33077>=d::at(this->_n_baseY_32934,_n_x_33078)))){d::check_cancel();(void)(([&](){auto&& _n_array_33674=this->_n_mat_32915;auto _n_index_33675=_n_k_33079;auto _n_value_33676=_n_ROAD_32872;d::put(_n_array_33674,_n_index_33675,_n_value_33676);return _n_value_33676;})());
double _n_s_33082=((_n_y_33077-_n_HY_32860)/_n_EYE_32862);
double _n_z_33083=(_n_F_32861/_n_s_33082);
double _n_xw_33084=((_n_xc_33080-_n_VX_32859)/_n_s_33082);
double _n_ax_33085=std::fabs(_n_xw_33084);
(void)(([&](){auto&& _n_array_33677=this->_n_S_32916;auto _n_index_33678=_n_k_33079;auto _n_value_33679=_n_s_33082;d::put(_n_array_33677,_n_index_33678,_n_value_33679);return _n_value_33679;})());
double _n_a_33086=(0.11+(0.07*_n_fbm_32902((_n_xw_33084*2.2),(_n_z_33083*1.1),2.0,0.0)));
double _n_lo_33087=(_n_ax_33085-(0.5/_n_s_33082));
double _n_hi_33088=(_n_ax_33085+(0.5/_n_s_33082));
double _n_paint_33089=_n_clamp_32905((([&](){auto _n_left_33680=d::minimum({_n_hi_33088,2.66});auto _n_right_33681=d::maximum({_n_lo_33087,2.52});return (_n_left_33680-_n_right_33681);})()*_n_s_33082));
(void)((_n_a_33086=_n_mix_32907(_n_a_33086,0.75,_n_paint_33089)));
if(d::truth((_n_ax_33085>2.85))){d::check_cancel();(void)((_n_a_33086=(d::truth((d::mod(_n_z_33083,0.55)<0.08))?0.07:0.2)));
}
(void)(this->_n_surface_32930(_n_k_33079,(_n_a_33086*0.82),(_n_a_33086*0.86),_n_a_33086,0.6));
(void)(((([&](){auto&& _n_array_33682=this->_n_ER_32917;auto _n_index_33683=_n_k_33079;auto _n_value_33684=(_n_paint_33089*0.13);d::put(_n_array_33682,_n_index_33683,_n_value_33684);return _n_value_33684;})(),([&](){auto&& _n_array_33685=this->_n_EG_32918;auto _n_index_33686=_n_k_33079;auto _n_value_33687=(_n_paint_33089*0.14);d::put(_n_array_33685,_n_index_33686,_n_value_33687);return _n_value_33687;})()),([&](){auto&& _n_array_33688=this->_n_EB_32919;auto _n_index_33689=_n_k_33079;auto _n_value_33690=(_n_paint_33089*0.17);d::put(_n_array_33688,_n_index_33689,_n_value_33690);return _n_value_33690;})()));
(void)(([&](){auto&& _n_array_33691=this->_n_wet_32928;auto _n_index_33692=_n_k_33079;auto _n_value_33693=(0.5+(0.5*([&](){auto _n_argument_33694=0.42;auto _n_argument_33695=0.6;auto _n_argument_33696=_n_fbm_32902(((_n_xw_33084*0.9)+3.0),(_n_z_33083*0.35),3.0,0.0);return _n_smooth_32906(_n_argument_33694,_n_argument_33695,_n_argument_33696);})()));d::put(_n_array_33691,_n_index_33692,_n_value_33693);return _n_value_33693;})());
continue;
}
std::variant<bool,double> _n_tankLeg_33090=([&]()->std::variant<bool,double>{auto _n_logical_33697=([&]()->std::variant<bool,double>{auto _n_logical_33698=([&]()->std::variant<bool,double>{auto _n_logical_33699=([&]()->std::variant<bool,double>{auto _n_logical_33700=d::at(this->_n_tankCol_32937,_n_x_33078);return d::truth(_n_logical_33700)?std::variant<bool,double>((_n_y_33077<d::at(this->_n_bareY_32933,_n_x_33078))):std::variant<bool,double>(_n_logical_33700);})();return d::truth(_n_logical_33699)?std::variant<bool,double>((_n_y_33077>d::at(this->_n_roofY_32932,_n_x_33078))):_n_logical_33699;})();return d::truth(_n_logical_33698)?std::variant<bool,double>((((((_n_HY_32860-_n_y_33077)/d::at(this->_n_wallS_32931,_n_x_33078))+_n_EYE_32862)-d::at(this->_n_colH_32936,_n_x_33078))<0.45)):_n_logical_33698;})();return d::truth(_n_logical_33697)?std::variant<bool,double>((double(d::i32(_n_x_33078)&d::i32(1.0))==0.0)):_n_logical_33697;})();
if((d::truth((_n_y_33077<d::at(this->_n_roofY_32932,_n_x_33078)))||d::truth(_n_tankLeg_33090))){d::check_cancel();(void)(([&](){auto&& _n_array_33701=this->_n_mat_32915;auto _n_index_33702=_n_k_33079;auto _n_value_33703=_n_SKY_32870;d::put(_n_array_33701,_n_index_33702,_n_value_33703);return _n_value_33703;})());
continue;
}
(void)(([&](){auto&& _n_array_33704=this->_n_mat_32915;auto _n_index_33705=_n_k_33079;auto _n_value_33706=_n_WALL_32871;d::put(_n_array_33704,_n_index_33705,_n_value_33706);return _n_value_33706;})());
double _n_s_33091=d::at(this->_n_wallS_32931,_n_x_33078);
(void)(([&](){auto&& _n_array_33707=this->_n_S_32916;auto _n_index_33708=_n_k_33079;auto _n_value_33709=_n_s_33091;d::put(_n_array_33707,_n_index_33708,_n_value_33709);return _n_value_33709;})());
d::Array<d::Array<double,false>,false> _n_list_33092=(d::truth((_n_side_33081<0.0))?_n_LEFT_32892:_n_RIGHT_32893);
double _n_i_33093=d::at(this->_n_colI_32935,_n_x_33078);
auto _n_binding_33710=d::at(_n_list_33092,_n_i_33093);
double _n_z0_33094=d::at(_n_binding_33710,0.0);
double _n_z1_33095=d::at(_n_binding_33710,1.0);
double _n_front_33096=d::at(_n_binding_33710,3.0);
double _n_h_33097=(_n_EYE_32862+((_n_HY_32860-_n_y_33077)/_n_s_33091));
double _n_tone_33098=(0.75+(0.5*_n_hash_32900(_n_i_33093,(_n_side_33081+7.0))));
double _n_wr_33099=(0.3*_n_tone_33098);
double _n_wg_33100=(0.28*_n_tone_33098);
double _n_wb_33101=(0.33*_n_tone_33098);
double _n_tex_33102=(0.8+(0.35*_n_fbm_32902((_n_xc_33080*0.6),(_n_y_33077*0.6),2.0,0.0)));
(void)((((_n_wr_33099=(_n_wr_33099*_n_tex_33102)),(_n_wg_33100=(_n_wg_33100*_n_tex_33102))),(_n_wb_33101=(_n_wb_33101*_n_tex_33102))));
if(d::truth((!d::truth(d::at(d::at(_n_list_33092,_n_i_33093),2.0))))){d::check_cancel();double _n_xw_33103=((_n_xc_33080-_n_VX_32859)/_n_s_33091);
double _n_dl_33104=d::hypot(std::initializer_list<double>{(_n_xw_33103-3.65),((_n_h_33097-2.9)*0.8)});
if(d::truth((_n_dl_33104<0.1))){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,1.2,1.0,0.7));
}else {d::check_cancel();if(((d::truth((_n_h_33097>2.95))&&d::truth((_n_h_33097<3.05)))&&d::truth((std::fabs((_n_xw_33103-3.65))<0.16)))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.05,0.05,0.06,0.4));
}else {d::check_cancel();if(d::truth((std::fabs((_n_xw_33103-3.36))<0.05))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.12,0.12,0.14,0.6));
}else {d::check_cancel();if((d::truth((_n_xw_33103>3.85))&&d::truth((_n_h_33097<2.1)))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.06,0.05,0.05,0.5));
}else {d::check_cancel();double _n_pool_33105=(std::exp(((-d::number(_n_dl_33104))/0.9))*0.55);
(void)(this->_n_surface_32930(_n_k_33079,(_n_wr_33099*0.8),(_n_wg_33100*0.8),(_n_wb_33101*0.8),1.0));
(void)(((([&](){auto&& _n_array_33711=this->_n_ER_32917;auto _n_index_33712=_n_k_33079;auto _n_value_33713=(_n_pool_33105*0.9);d::put(_n_array_33711,_n_index_33712,_n_value_33713);return _n_value_33713;})(),([&](){auto&& _n_array_33714=this->_n_EG_32918;auto _n_index_33715=_n_k_33079;auto _n_value_33716=(_n_pool_33105*0.62);d::put(_n_array_33714,_n_index_33715,_n_value_33716);return _n_value_33716;})()),([&](){auto&& _n_array_33717=this->_n_EB_32919;auto _n_index_33718=_n_k_33079;auto _n_value_33719=(_n_pool_33105*0.36);d::put(_n_array_33717,_n_index_33718,_n_value_33719);return _n_value_33719;})()));
}
}
}
}
continue;
}
double _n_z_33106=(_n_F_32861/_n_s_33091);
if((d::truth((_n_side_33081<0.0))&&d::truth((_n_i_33093==0.0)))){d::check_cancel();double _n_lx_33107=(_n_VX_32859-(_n_HALF_32863*(_n_F_32861/1.62)));
double _n_ly_33108=(_n_HY_32860-((2.2-_n_EYE_32862)*(_n_F_32861/1.62)));
double _n_dl_33109=d::hypot(std::initializer_list<double>{((_n_xc_33080-_n_lx_33107)/1.4),((_n_y_33077-_n_ly_33108)/1.1)});
if(d::truth((_n_dl_33109<1.0))){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,1.3,0.95,0.6));
continue;
}
if((d::truth((_n_dl_33109<1.9))&&d::truth((_n_y_33077<(_n_ly_33108-0.6))))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.06,0.06,0.07,0.5));
continue;
}
}
if(d::truth((_n_h_33097>2.6))){d::check_cancel();double _n_fl_33110=std::floor(((_n_h_33097-2.9)/2.8));
double _n_fh_33111=((_n_h_33097-2.9)-(_n_fl_33110*2.8));
double _n_bay_33112=std::floor((((_n_z_33106-_n_z0_33094)-0.5)/1.9));
double _n_bz_33113=(((_n_z_33106-_n_z0_33094)-0.5)-(_n_bay_33112*1.9));
if(((((((d::truth((_n_h_33097>2.9))&&d::truth((_n_fh_33111>0.55)))&&d::truth((_n_fh_33111<1.85)))&&d::truth((_n_bz_33113>0.3)))&&d::truth((_n_bz_33113<1.3)))&&d::truth((_n_z_33106<(_n_z1_33095-0.5))))&&d::truth((_n_h_33097<(d::at(this->_n_colH_32936,_n_x_33078)-0.5))))){d::check_cancel();double _n_hh_33114=_n_hash_32900(((_n_bay_33112*7.0)+_n_fl_33110),((_n_side_33081*31.0)+_n_i_33093));
if(d::truth((_n_hh_33114<0.36))){d::check_cancel();double _n_v_33115=((0.3+(0.3*_n_hash_32900(_n_bay_33112,(_n_fl_33110+9.0))))*(d::truth((d::mod(_n_fh_33111,0.17)<0.045))?0.55:1.0));
if(d::truth((_n_hh_33114<0.12))){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,(0.5*_n_v_33115),(0.72*_n_v_33115),(1.0*_n_v_33115)));
}else {d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,_n_v_33115,(0.7*_n_v_33115),(0.4*_n_v_33115)));
}
}else {d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.08,0.09,0.13,0.9));
}
}else {d::check_cancel();if((d::truth((_n_h_33097>2.9))&&d::truth((_n_fh_33111<0.14)))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,(_n_wr_33099*1.25),(_n_wg_33100*1.25),(_n_wb_33101*1.25),1.0));
}else {d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,_n_wr_33099,_n_wg_33100,_n_wb_33101,1.0));
}
}
if((((((d::truth((_n_side_33081<0.0))&&d::truth((_n_i_33093==2.0)))&&d::truth((_n_z_33106>4.85)))&&d::truth((_n_z_33106<6.75)))&&d::truth((_n_h_33097>2.45)))&&d::truth((_n_h_33097<2.85)))){d::check_cancel();bool _n_letter_33116=([&]()->bool{auto _n_logical_33720=([&]()->bool{auto _n_logical_33721=([&]()->bool{auto _n_logical_33722=(d::mod((_n_z_33106-4.85),0.42)>0.1);return d::truth(_n_logical_33722)?(d::mod((_n_z_33106-4.85),0.42)<0.3):_n_logical_33722;})();return d::truth(_n_logical_33721)?(_n_h_33097>2.53):_n_logical_33721;})();return d::truth(_n_logical_33720)?(_n_h_33097<2.77):_n_logical_33720;})();
(void)(this->_n_emit_32929(_n_k_33079,(d::at(_n_AMBER_32883,0.0)*(d::truth(_n_letter_33116)?0.12:0.9)),(d::at(_n_AMBER_32883,1.0)*(d::truth(_n_letter_33116)?0.12:0.9)),(d::at(_n_AMBER_32883,2.0)*(d::truth(_n_letter_33116)?0.12:0.9))));
}
continue;
}
(void)(this->_n_surface_32930(_n_k_33079,_n_wr_33099,_n_wg_33100,_n_wb_33101,1.0));
if(d::truth((_n_front_33096==1.0))){d::check_cancel();double _n_lx_33117=(_n_VX_32859-(_n_HALF_32863*(_n_F_32861/1.62)));
double _n_ly_33118=(_n_HY_32860-((2.2-_n_EYE_32862)*(_n_F_32861/1.62)));
double _n_pool_33119=(std::exp(((-d::number(d::hypot(std::initializer_list<double>{((_n_xc_33080-_n_lx_33117)*0.7),(_n_y_33077-_n_ly_33118)})))/11.0))*0.42);
if(d::truth((_n_h_33097<2.15))){d::check_cancel();double _n_rib_33120=(d::truth((d::mod(_n_h_33097,0.11)<0.035))?0.3:1.0);
(void)(this->_n_surface_32930(_n_k_33079,(0.27*_n_rib_33120),(0.29*_n_rib_33120),(0.35*_n_rib_33120),1.0));
(void)(((([&](){auto&& _n_array_33723=this->_n_ER_32917;auto _n_index_33724=_n_k_33079;auto _n_value_33725=(_n_pool_33119*_n_rib_33120);d::put(_n_array_33723,_n_index_33724,_n_value_33725);return _n_value_33725;})(),([&](){auto&& _n_array_33726=this->_n_EG_32918;auto _n_index_33727=_n_k_33079;auto _n_value_33728=((_n_pool_33119*0.72)*_n_rib_33120);d::put(_n_array_33726,_n_index_33727,_n_value_33728);return _n_value_33728;})()),([&](){auto&& _n_array_33729=this->_n_EB_32919;auto _n_index_33730=_n_k_33079;auto _n_value_33731=((_n_pool_33119*0.45)*_n_rib_33120);d::put(_n_array_33729,_n_index_33730,_n_value_33731);return _n_value_33731;})()));
}else {d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.16,0.16,0.2,1.0));
}
}else {d::check_cancel();if(d::truth((_n_front_33096==2.0))){d::check_cancel();double _n_zz_33121=(_n_z_33106-_n_z0_33094);
if((((d::truth((_n_zz_33121>0.3))&&d::truth((_n_zz_33121<((_n_z1_33095-_n_z0_33094)-0.3))))&&d::truth((_n_h_33097>0.1)))&&d::truth((_n_h_33097<2.15)))){d::check_cancel();bool _n_cool_33122=([&]()->bool{auto _n_logical_33732=(_n_i_33093==4.0);return d::truth(_n_logical_33732)?(_n_side_33081<0.0):_n_logical_33732;})();
bool _n_shelf_33123=([&]()->bool{auto _n_logical_33733=([&]()->bool{auto _n_logical_33734=(std::fabs((_n_h_33097-0.75))<0.05);return d::truth(_n_logical_33734)?_n_logical_33734:(std::fabs((_n_h_33097-1.3))<0.05);})();return d::truth(_n_logical_33733)?_n_logical_33733:(std::fabs((_n_h_33097-1.82))<0.05);})();
double _n_v_33124=((d::truth((d::mod(_n_zz_33121,1.4)<0.07))?0.05:(d::truth(_n_shelf_33123)?0.3:0.62))*(0.85+(0.3*([&](){auto _n_argument_33735=std::floor((_n_zz_33121*3.0));auto _n_argument_33736=5.0;return _n_hash_32900(_n_argument_33735,_n_argument_33736);})())));
if(d::truth(_n_cool_33122)){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,(0.7*_n_v_33124),(0.85*_n_v_33124),(1.0*_n_v_33124)));
}else {d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,_n_v_33124,(0.72*_n_v_33124),(0.44*_n_v_33124)));
}
}
}else {d::check_cancel();if(d::truth((_n_front_33096==3.0))){d::check_cancel();double _n_zz_33125=(_n_z_33106-_n_z0_33094);
if((d::truth((_n_zz_33125>0.35))&&d::truth((_n_zz_33125<1.15)))){d::check_cancel();if(d::truth((_n_h_33097<2.0))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.07,0.05,0.04,0.8));
}else {d::check_cancel();if(d::truth((_n_h_33097<2.22))){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,0.55,0.38,0.2));
}
}
}else {d::check_cancel();if((((d::truth((_n_zz_33125>1.5))&&d::truth((_n_zz_33125<2.5)))&&d::truth((_n_h_33097>1.0)))&&d::truth((_n_h_33097<1.9)))){d::check_cancel();bool _n_lattice_33126=([&]()->bool{auto _n_logical_33737=(d::mod(_n_zz_33125,0.12)<0.03);return d::truth(_n_logical_33737)?_n_logical_33737:(d::mod((_n_h_33097-1.0),0.18)<0.035);})();
if(d::truth(_n_lattice_33126)){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.06,0.04,0.03,0.6));
}else {d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,0.5,0.36,0.2));
}
}
}
}else {d::check_cancel();if(d::truth((_n_front_33096==4.0))){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.3,0.19,0.12,1.0));
if(((d::truth((_n_z_33106>2.35))&&d::truth((_n_z_33106<3.0)))&&d::truth((_n_h_33097<2.05)))){d::check_cancel();if(d::truth((_n_h_33097>1.42))){d::check_cancel();bool _n_slit_33127=(d::mod((_n_z_33106-2.35),0.217)<0.028);
bool _n_crest_33128=([&]()->bool{auto _n_logical_33738=((std::pow(((_n_z_33106-2.675)/0.09),2.0)+std::pow(((_n_h_33097-1.76)/0.13),2.0))<1.0);return d::truth(_n_logical_33738)?((std::pow(((_n_z_33106-2.675)/0.09),2.0)+std::pow(((_n_h_33097-1.76)/0.13),2.0))>0.35):_n_logical_33738;})();
if(d::truth(_n_slit_33127)){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,0.8,0.5,0.22));
}else {d::check_cancel();if(d::truth(_n_crest_33128)){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,0.75,0.74,0.72));
}else {d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,0.09,0.1,0.3));
}
}
}else {d::check_cancel();double _n_v_33129=((d::truth((std::fabs((_n_h_33097-0.95))<0.06))?0.35:(0.5+(0.35*_n_smooth_32906(0.2,1.4,_n_h_33097))))*(d::truth((_n_h_33097<0.3))?0.6:1.0));
for(auto &&_n_item_33739:d::Array<double,false>{2.52,2.83}){d::check_cancel();double _n_pz_33130=_n_item_33739;
{
bool _n_head_33131=((std::pow(((_n_z_33106-_n_pz_33130)/0.075),2.0)+std::pow(((_n_h_33097-1.3)/0.1),2.0))<1.0);
bool _n_back_33132=([&]()->bool{auto _n_logical_33740=([&]()->bool{auto _n_logical_33743=(_n_h_33097>0.9);return d::truth(_n_logical_33743)?(_n_h_33097<1.22):_n_logical_33743;})();return d::truth(_n_logical_33740)?([&](){auto _n_left_33741=std::fabs((_n_z_33106-_n_pz_33130));auto _n_right_33742=(0.1+(0.05*_n_smooth_32906(1.2,0.95,_n_h_33097)));return (_n_left_33741<_n_right_33742);})():_n_logical_33740;})();
if((d::truth(_n_head_33131)||d::truth(_n_back_33132))){d::check_cancel();(void)((_n_v_33129=0.07));
}

}
}
(void)(this->_n_emit_32929(_n_k_33079,_n_v_33129,(0.6*_n_v_33129),(0.28*_n_v_33129)));
}
}else {d::check_cancel();if((((d::truth((_n_z_33106>1.5))&&d::truth((_n_z_33106<1.85)))&&d::truth((_n_h_33097>1.05)))&&d::truth((_n_h_33097<1.8)))){d::check_cancel();bool _n_lattice_33133=([&]()->bool{auto _n_logical_33744=(d::mod(_n_z_33106,0.11)<0.03);return d::truth(_n_logical_33744)?_n_logical_33744:(d::mod((_n_h_33097-1.05),0.19)<0.04);})();
if(d::truth(_n_lattice_33133)){d::check_cancel();(void)(this->_n_surface_32930(_n_k_33079,0.12,0.07,0.04,0.6));
}else {d::check_cancel();(void)(this->_n_emit_32929(_n_k_33079,0.6,0.38,0.18));
}
}
}
}
}
}
}
}}
}}
{double _n_k_33134=0.0;
for(;d::truth((_n_k_33134<this->_n_N_32911));(void)((_n_k_33134++))){d::check_cancel();double _n_x_33135=d::mod(_n_k_33134,_n_W_32857);
double _n_y_33136=(std::floor((_n_k_33134/_n_W_32857))+0.5);
double _n_v_33137=_n_clamp_32905((_n_y_33136/_n_HY_32860));
double _n_glow_33138=_n_endGlow_32904((_n_x_33135+0.5),_n_y_33136);
(void)(([&](){auto&& _n_array_33745=this->_n_SR_32925;auto _n_index_33746=_n_k_33134;auto _n_value_33747=((0.11+(0.16*std::pow(_n_v_33137,1.6)))+(_n_glow_33138*d::at(_n_END_32903,0.0)));d::put(_n_array_33745,_n_index_33746,_n_value_33747);return _n_value_33747;})());
(void)(([&](){auto&& _n_array_33748=this->_n_SG_32926;auto _n_index_33749=_n_k_33134;auto _n_value_33750=((0.08+(0.08*std::pow(_n_v_33137,1.6)))+(_n_glow_33138*d::at(_n_END_32903,1.0)));d::put(_n_array_33748,_n_index_33749,_n_value_33750);return _n_value_33750;})());
(void)(([&](){auto&& _n_array_33751=this->_n_SB_32927;auto _n_index_33752=_n_k_33134;auto _n_value_33753=((0.24+(0.16*std::pow(_n_v_33137,1.6)))+(_n_glow_33138*d::at(_n_END_32903,2.0)));d::put(_n_array_33751,_n_index_33752,_n_value_33753);return _n_value_33753;})());
}}
this->_n_towerTop_32938=15.0;
{double _n_r_33139=8.0;
for(;d::truth((_n_r_33139<38.0));(void)((_n_r_33139++))){d::check_cancel();{double _n_x_33140=96.0;
for(;d::truth((_n_x_33140<=103.0));(void)((_n_x_33140++))){d::check_cancel();double _n_k_33141=((_n_r_33139*_n_W_32857)+_n_x_33140);
if(d::truth((d::at(this->_n_mat_32915,_n_k_33141)!=_n_SKY_32870))){d::check_cancel();continue;
}
bool _n_spire_33142=([&]()->bool{auto _n_logical_33754=(_n_x_33140==99.0);return d::truth(_n_logical_33754)?_n_logical_33754:(_n_x_33140==100.0);})();
if((d::truth((_n_r_33139<this->_n_towerTop_32938))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_33755=_n_spire_33142;return d::truth(_n_logical_33755)?(_n_r_33139>=9.0):_n_logical_33755;})()))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_33756=this->_n_mat_32915;auto _n_index_33757=_n_k_33141;auto _n_value_33758=_n_TOWER_32878;d::put(_n_array_33756,_n_index_33757,_n_value_33758);return _n_value_33758;})());
(void)(([&](){auto&& _n_array_33759=this->_n_S_32916;auto _n_index_33760=_n_k_33141;auto _n_value_33761=0.05;d::put(_n_array_33759,_n_index_33760,_n_value_33761);return _n_value_33761;})());
if(d::truth((_n_r_33139<this->_n_towerTop_32938))){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33141,0.015,0.012,0.025));
}else {d::check_cancel();if(d::truth((_n_r_33139<(this->_n_towerTop_32938+2.0)))){d::check_cancel();(void)(this->_n_emit_32929(_n_k_33141,0.42,0.36,0.5));
}else {d::check_cancel();bool _n_lit_33143=([&]()->bool{auto _n_logical_33762=([&]()->bool{auto _n_logical_33763=(double(d::i32(_n_x_33140)&d::i32(1.0))==0.0);return d::truth(_n_logical_33763)?(double(d::i32(_n_r_33139)&d::i32(1.0))==1.0):_n_logical_33763;})();return d::truth(_n_logical_33762)?(_n_hash_32900(_n_x_33140,(_n_r_33139+5.0))<0.45):_n_logical_33762;})();
(void)(this->_n_emit_32929(_n_k_33141,(d::truth(_n_lit_33143)?0.32:0.015),(d::truth(_n_lit_33143)?0.24:0.012),(d::truth(_n_lit_33143)?0.18:0.025)));
}
}
}}
}}
{double _n_p_33144=0.0;
for(;d::truth((_n_p_33144<double(_n_POLES_32896.size())));(void)((_n_p_33144++))){d::check_cancel();auto _n_binding_33764=d::at(_n_POLES_32896,_n_p_33144);
double _n_px_33145=d::at(_n_binding_33764,0.0);
double _n_pz_33146=d::at(_n_binding_33764,1.0);
double _n_top_33147=d::at(_n_binding_33764,2.0);
double _n_thick_33148=d::at(_n_binding_33764,3.0);
double _n_s_33149=(_n_F_32861/_n_pz_33146);
double _n_xc_33150=(_n_VX_32859+(_n_px_33145*_n_s_33149));
double _n_hw_33151=((_n_thick_33148/2.0)*_n_s_33149);
double _n_yt_33152=(_n_HY_32860-((_n_top_33147-_n_EYE_32862)*_n_s_33149));
double _n_yb_33153=(_n_HY_32860+(_n_EYE_32862*_n_s_33149));
double _n_arm_33154=(_n_top_33147-0.45);
{double _n_r_33155=([&](){auto _n_argument_33765=0.0;auto _n_argument_33766=std::floor((_n_yt_33152-3.0));return d::maximum({_n_argument_33765,_n_argument_33766});})();
for(;d::truth((_n_r_33155<([&](){auto _n_argument_33767=_n_H_32858;auto _n_argument_33768=std::ceil(_n_yb_33153);return d::minimum({_n_argument_33767,_n_argument_33768});})()));(void)((_n_r_33155++))){d::check_cancel();double _n_y_33156=(_n_r_33155+0.5);
double _n_h_33157=(_n_EYE_32862+((_n_HY_32860-_n_y_33156)/_n_s_33149));
{double _n_x_33158=([&](){auto _n_argument_33769=0.0;auto _n_argument_33770=std::floor((_n_xc_33150-(0.9*_n_s_33149)));return d::maximum({_n_argument_33769,_n_argument_33770});})();
for(;d::truth((_n_x_33158<([&](){auto _n_argument_33771=_n_W_32857;auto _n_argument_33772=std::ceil((_n_xc_33150+(0.9*_n_s_33149)));return d::minimum({_n_argument_33771,_n_argument_33772});})()));(void)((_n_x_33158++))){d::check_cancel();double _n_k_33159=((_n_r_33155*_n_W_32857)+_n_x_33158);
if(d::truth((d::at(this->_n_S_32916,_n_k_33159)>=_n_s_33149))){d::check_cancel();continue;
}
double _n_cov_33160=0.0;
if((d::truth((_n_h_33157<=_n_top_33147))&&d::truth((_n_h_33157>=0.0)))){d::check_cancel();(void)((_n_cov_33160=_n_clamp_32905(([&](){auto _n_left_33773=d::minimum({(_n_x_33158+1.0),(_n_xc_33150+_n_hw_33151)});auto _n_right_33774=d::maximum({_n_x_33158,(_n_xc_33150-_n_hw_33151)});return (_n_left_33773-_n_right_33774);})())));
}
bool _n_onArm_33161=([&]()->bool{auto _n_logical_33775=([&](){auto _n_left_33776=std::fabs((_n_h_33157-_n_arm_33154));auto _n_right_33777=d::maximum({0.06,(0.5/_n_s_33149)});return (_n_left_33776<_n_right_33777);})();return d::truth(_n_logical_33775)?(std::fabs(((_n_x_33158+0.5)-_n_xc_33150))<(0.65*_n_s_33149)):_n_logical_33775;})();
bool _n_can_33162=([&]()->bool{auto _n_logical_33778=([&]()->bool{auto _n_logical_33779=([&]()->bool{auto _n_logical_33780=([&]()->bool{auto _n_logical_33781=(_n_p_33144==1.0);return d::truth(_n_logical_33781)?(_n_h_33157>6.4):_n_logical_33781;})();return d::truth(_n_logical_33780)?(_n_h_33157<7.5):_n_logical_33780;})();return d::truth(_n_logical_33779)?(((_n_x_33158+0.5)-_n_xc_33150)>0.0):_n_logical_33779;})();return d::truth(_n_logical_33778)?(((_n_x_33158+0.5)-_n_xc_33150)<(0.45*_n_s_33149)):_n_logical_33778;})();
if((d::truth(_n_onArm_33161)||d::truth(_n_can_33162))){d::check_cancel();(void)((_n_cov_33160=([&](){auto _n_argument_33782=_n_cov_33160;auto _n_argument_33783=(d::truth(_n_can_33162)?1.0:_n_clamp_32905((0.12*_n_s_33149)));return d::maximum({_n_argument_33782,_n_argument_33783});})()));
}
if(d::truth((_n_cov_33160<0.05))){d::check_cancel();continue;
}
double _n_cr_33163=0.36;
double _n_cg_33164=0.36;
double _n_cb_33165=0.4;
if(d::truth((_n_p_33144==0.0))){d::check_cancel();double _n_u_33166=(((_n_x_33158+0.5)-_n_xc_33150)/_n_hw_33151);
double _n_round_33167=(0.55+(0.45*std::sqrt(_n_clamp_32905((1.0-(_n_u_33166*_n_u_33166))))));
(void)((((_n_cr_33163=(_n_cr_33163*_n_round_33167)),(_n_cg_33164=(_n_cg_33164*_n_round_33167))),(_n_cb_33165=(_n_cb_33165*_n_round_33167))));
if((d::truth((_n_h_33157>0.25))&&d::truth((_n_h_33157<1.8)))){d::check_cancel();bool _n_stripe_33168=(d::mod(((_n_h_33157*4.5)+(_n_u_33166*0.35)),1.0)<0.5);
if(d::truth(_n_stripe_33168)){d::check_cancel();(void)((((_n_cr_33163=0.9),(_n_cg_33164=0.72)),(_n_cb_33165=0.08)));
}else {d::check_cancel();(void)((((_n_cr_33163=0.05),(_n_cg_33164=0.05)),(_n_cb_33165=0.05)));
}
}else {d::check_cancel();if(((d::truth((_n_h_33157>1.95))&&d::truth((_n_h_33157<2.35)))&&d::truth((std::fabs(_n_u_33166)<0.85)))){d::check_cancel();bool _n_dot_33169=([&]()->bool{auto _n_logical_33784=([&]()->bool{auto _n_logical_33785=(d::mod((_n_x_33158+_n_r_33155),2.0)==0.0);return d::truth(_n_logical_33785)?(_n_h_33157>2.03):_n_logical_33785;})();return d::truth(_n_logical_33784)?(_n_h_33157<2.27):_n_logical_33784;})();
if(d::truth(_n_dot_33169)){d::check_cancel();(void)((((_n_cr_33163=0.85),(_n_cg_33164=0.88)),(_n_cb_33165=0.95)));
}else {d::check_cancel();(void)((((_n_cr_33163=0.12),(_n_cg_33164=0.25)),(_n_cb_33165=0.75)));
}
}
}
}else {d::check_cancel();if(d::truth(_n_can_33162)){d::check_cancel();(void)((((_n_cr_33163=0.4),(_n_cg_33164=0.42)),(_n_cb_33165=0.46)));
}else {d::check_cancel();(void)((((_n_cr_33163=0.12),(_n_cg_33164=0.12)),(_n_cb_33165=0.15)));
}
}
(void)(((([&](){auto&& _n_array_33786=this->_n_AR_32920;auto _n_index_33787=_n_k_33159;auto _n_value_33788=_n_mix_32907(d::at(this->_n_AR_32920,_n_k_33159),_n_cr_33163,_n_cov_33160);d::put(_n_array_33786,_n_index_33787,_n_value_33788);return _n_value_33788;})(),([&](){auto&& _n_array_33789=this->_n_AG_32921;auto _n_index_33790=_n_k_33159;auto _n_value_33791=_n_mix_32907(d::at(this->_n_AG_32921,_n_k_33159),_n_cg_33164,_n_cov_33160);d::put(_n_array_33789,_n_index_33790,_n_value_33791);return _n_value_33791;})()),([&](){auto&& _n_array_33792=this->_n_AB_32922;auto _n_index_33793=_n_k_33159;auto _n_value_33794=_n_mix_32907(d::at(this->_n_AB_32922,_n_k_33159),_n_cb_33165,_n_cov_33160);d::put(_n_array_33792,_n_index_33793,_n_value_33794);return _n_value_33794;})()));
(void)(((([&](){auto&& _n_array_33795=this->_n_ER_32917;auto _n_index_33796=_n_k_33159;auto _n_value_33797=(d::at(_n_array_33795,_n_index_33796)*(1.0-_n_cov_33160));d::put(_n_array_33795,_n_index_33796,_n_value_33797);return _n_value_33797;})(),([&](){auto&& _n_array_33798=this->_n_EG_32918;auto _n_index_33799=_n_k_33159;auto _n_value_33800=(d::at(_n_array_33798,_n_index_33799)*(1.0-_n_cov_33160));d::put(_n_array_33798,_n_index_33799,_n_value_33800);return _n_value_33800;})()),([&](){auto&& _n_array_33801=this->_n_EB_32919;auto _n_index_33802=_n_k_33159;auto _n_value_33803=(d::at(_n_array_33801,_n_index_33802)*(1.0-_n_cov_33160));d::put(_n_array_33801,_n_index_33802,_n_value_33803);return _n_value_33803;})()));
(void)(([&](){auto&& _n_array_33804=this->_n_KG_32923;auto _n_index_33805=_n_k_33159;auto _n_value_33806=_n_mix_32907(d::at(this->_n_KG_32923,_n_k_33159),1.0,_n_cov_33160);d::put(_n_array_33804,_n_index_33805,_n_value_33806);return _n_value_33806;})());
if(d::truth((_n_cov_33160>0.5))){d::check_cancel();(void)((([&](){auto&& _n_array_33807=this->_n_mat_32915;auto _n_index_33808=_n_k_33159;auto _n_value_33809=_n_POLE_32876;d::put(_n_array_33807,_n_index_33808,_n_value_33809);return _n_value_33809;})(),([&](){auto&& _n_array_33810=this->_n_S_32916;auto _n_index_33811=_n_k_33159;auto _n_value_33812=_n_s_33149;d::put(_n_array_33810,_n_index_33811,_n_value_33812);return _n_value_33812;})()));
}
}}
}}
}}
for(auto &&_n_item_33813:_n_WIRES_32897){d::check_cancel();auto _n_binding_33814=_n_item_33813;
double _n_ax_33170=d::at(_n_binding_33814,0.0);
double _n_ah_33171=d::at(_n_binding_33814,1.0);
double _n_az_33172=d::at(_n_binding_33814,2.0);
double _n_bx_33173=d::at(_n_binding_33814,3.0);
double _n_bh_33174=d::at(_n_binding_33814,4.0);
double _n_bz_33175=d::at(_n_binding_33814,5.0);
double _n_sag_33176=d::at(_n_binding_33814,6.0);
{
double _n_px_33177=0.0;
double _n_py_33178=0.0;
double _n_ps_33179=0.0;
{double _n_i_33180=0.0;
for(;d::truth((_n_i_33180<=120.0));(void)((_n_i_33180++))){d::check_cancel();double _n_q_33181=(_n_i_33180/120.0);
double _n_wx_33182=_n_mix_32907(_n_ax_33170,_n_bx_33173,_n_q_33181);
double _n_wz_33183=_n_mix_32907(_n_az_33172,_n_bz_33175,_n_q_33181);
double _n_wh_33184=(_n_mix_32907(_n_ah_33171,_n_bh_33174,_n_q_33181)-(((_n_sag_33176*4.0)*_n_q_33181)*(1.0-_n_q_33181)));
double _n_s_33185=(_n_F_32861/_n_wz_33183);
double _n_sx_33186=(_n_VX_32859+(_n_wx_33182*_n_s_33185));
double _n_sy_33187=(_n_HY_32860-((_n_wh_33184-_n_EYE_32862)*_n_s_33185));
if(d::truth((_n_i_33180>0.0))){d::check_cancel();double _n_minx_33188=([&](){auto _n_argument_33815=0.0;auto _n_argument_33816=std::floor((d::minimum({_n_px_33177,_n_sx_33186})-1.0));return d::maximum({_n_argument_33815,_n_argument_33816});})();
double _n_maxx_33189=([&](){auto _n_argument_33817=(_n_W_32857-1.0);auto _n_argument_33818=std::ceil((d::maximum({_n_px_33177,_n_sx_33186})+1.0));return d::minimum({_n_argument_33817,_n_argument_33818});})();
double _n_miny_33190=([&](){auto _n_argument_33819=0.0;auto _n_argument_33820=std::floor((d::minimum({_n_py_33178,_n_sy_33187})-1.0));return d::maximum({_n_argument_33819,_n_argument_33820});})();
double _n_maxy_33191=([&](){auto _n_argument_33821=(_n_H_32858-1.0);auto _n_argument_33822=std::ceil((d::maximum({_n_py_33178,_n_sy_33187})+1.0));return d::minimum({_n_argument_33821,_n_argument_33822});})();
double _n_dx_33192=(_n_sx_33186-_n_px_33177);
double _n_dy_33193=(_n_sy_33187-_n_py_33178);
double _n_len2_33194=([&]()->double{auto _n_logical_33823=((_n_dx_33192*_n_dx_33192)+(_n_dy_33193*_n_dy_33193));return d::truth(_n_logical_33823)?_n_logical_33823:0.000001;})();
{double _n_r_33195=_n_miny_33190;
for(;d::truth((_n_r_33195<=_n_maxy_33191));(void)((_n_r_33195++))){d::check_cancel();{double _n_x_33196=_n_minx_33188;
for(;d::truth((_n_x_33196<=_n_maxx_33189));(void)((_n_x_33196++))){d::check_cancel();double _n_k_33197=((_n_r_33195*_n_W_32857)+_n_x_33196);
double _n_kk_33198=_n_clamp_32905((((((_n_x_33196+0.5)-_n_px_33177)*_n_dx_33192)+(((_n_r_33195+0.5)-_n_py_33178)*_n_dy_33193))/_n_len2_33194));
double _n_ex_33199=(((_n_px_33177+(_n_dx_33192*_n_kk_33198))-_n_x_33196)-0.5);
double _n_ey_33200=(((_n_py_33178+(_n_dy_33193*_n_kk_33198))-_n_r_33195)-0.5);
double _n_cov_33201=(_n_clamp_32905((1.15-(std::sqrt(((_n_ex_33199*_n_ex_33199)+(_n_ey_33200*_n_ey_33200)))*1.5)))*0.9);
double _n_s2_33202=_n_mix_32907(_n_ps_33179,_n_s_33185,_n_kk_33198);
if((d::truth((_n_cov_33201<0.05))||d::truth((d::at(this->_n_S_32916,_n_k_33197)>=_n_s2_33202)))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_33824=this->_n_AR_32920;auto _n_index_33825=_n_k_33197;auto _n_value_33826=_n_mix_32907(d::at(this->_n_AR_32920,_n_k_33197),0.05,_n_cov_33201);d::put(_n_array_33824,_n_index_33825,_n_value_33826);return _n_value_33826;})(),([&](){auto&& _n_array_33827=this->_n_AG_32921;auto _n_index_33828=_n_k_33197;auto _n_value_33829=_n_mix_32907(d::at(this->_n_AG_32921,_n_k_33197),0.05,_n_cov_33201);d::put(_n_array_33827,_n_index_33828,_n_value_33829);return _n_value_33829;})()),([&](){auto&& _n_array_33830=this->_n_AB_32922;auto _n_index_33831=_n_k_33197;auto _n_value_33832=_n_mix_32907(d::at(this->_n_AB_32922,_n_k_33197),0.07,_n_cov_33201);d::put(_n_array_33830,_n_index_33831,_n_value_33832);return _n_value_33832;})()));
(void)(((([&](){auto&& _n_array_33833=this->_n_ER_32917;auto _n_index_33834=_n_k_33197;auto _n_value_33835=(d::at(_n_array_33833,_n_index_33834)*(1.0-_n_cov_33201));d::put(_n_array_33833,_n_index_33834,_n_value_33835);return _n_value_33835;})(),([&](){auto&& _n_array_33836=this->_n_EG_32918;auto _n_index_33837=_n_k_33197;auto _n_value_33838=(d::at(_n_array_33836,_n_index_33837)*(1.0-_n_cov_33201));d::put(_n_array_33836,_n_index_33837,_n_value_33838);return _n_value_33838;})()),([&](){auto&& _n_array_33839=this->_n_EB_32919;auto _n_index_33840=_n_k_33197;auto _n_value_33841=(d::at(_n_array_33839,_n_index_33840)*(1.0-_n_cov_33201));d::put(_n_array_33839,_n_index_33840,_n_value_33841);return _n_value_33841;})()));
(void)(([&](){auto&& _n_array_33842=this->_n_KG_32923;auto _n_index_33843=_n_k_33197;auto _n_value_33844=_n_mix_32907(d::at(this->_n_KG_32923,_n_k_33197),0.8,_n_cov_33201);d::put(_n_array_33842,_n_index_33843,_n_value_33844);return _n_value_33844;})());
if((d::truth((d::at(this->_n_mat_32915,_n_k_33197)==_n_SKY_32870))||d::truth((d::at(this->_n_mat_32915,_n_k_33197)==_n_TOWER_32878)))){d::check_cancel();(void)(((([&](){auto&& _n_array_33845=this->_n_SR_32925;auto _n_index_33846=_n_k_33197;auto _n_value_33847=(d::at(_n_array_33845,_n_index_33846)*(1.0-_n_cov_33201));d::put(_n_array_33845,_n_index_33846,_n_value_33847);return _n_value_33847;})(),([&](){auto&& _n_array_33848=this->_n_SG_32926;auto _n_index_33849=_n_k_33197;auto _n_value_33850=(d::at(_n_array_33848,_n_index_33849)*(1.0-_n_cov_33201));d::put(_n_array_33848,_n_index_33849,_n_value_33850);return _n_value_33850;})()),([&](){auto&& _n_array_33851=this->_n_SB_32927;auto _n_index_33852=_n_k_33197;auto _n_value_33853=(d::at(_n_array_33851,_n_index_33852)*(1.0-_n_cov_33201));d::put(_n_array_33851,_n_index_33852,_n_value_33853);return _n_value_33853;})()));
}
if((d::truth((_n_cov_33201>0.45))&&d::truth((d::at(this->_n_mat_32915,_n_k_33197)!=_n_ROAD_32872)))){d::check_cancel();(void)((([&](){auto&& _n_array_33854=this->_n_mat_32915;auto _n_index_33855=_n_k_33197;auto _n_value_33856=((d::truth((d::at(this->_n_mat_32915,_n_k_33197)==_n_SKY_32870))||d::truth((d::at(this->_n_mat_32915,_n_k_33197)==_n_TOWER_32878)))?_n_WIRE_32877:d::at(this->_n_mat_32915,_n_k_33197));d::put(_n_array_33854,_n_index_33855,_n_value_33856);return _n_value_33856;})(),([&](){auto&& _n_array_33857=this->_n_S_32916;auto _n_index_33858=_n_k_33197;auto _n_value_33859=d::maximum({d::at(this->_n_S_32916,_n_k_33197),0.01});d::put(_n_array_33857,_n_index_33858,_n_value_33859);return _n_value_33859;})()));
}
}}
}}
}
(void)((((_n_px_33177=_n_sx_33186),(_n_py_33178=_n_sy_33187)),(_n_ps_33179=_n_s_33185)));
}}

}
}
{
double _n_s_33203=_n_VEND_S_32899;
double _n_s2_33204=(_n_s_33203/(1.0+((0.7*_n_s_33203)/_n_F_32861)));
d::Array<d::Array<double,false>,false> _n_CANS_33205=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.16,0.1},d::Array<double,false>{0.15,0.4,1.0},d::Array<double,false>{1.0,0.55,0.1},d::Array<double,false>{0.2,0.85,0.45},d::Array<double,false>{0.95,0.95,0.95},d::Array<double,false>{1.0,0.85,0.15},d::Array<double,false>{0.85,0.2,0.6}};
{double _n_r_33206=0.0;
for(;d::truth((_n_r_33206<_n_H_32858));(void)((_n_r_33206++))){d::check_cancel();double _n_y_33207=(_n_r_33206+0.5);
double _n_h0_33208=(_n_EYE_32862+((_n_HY_32860-_n_y_33207)/_n_s_33203));
{double _n_x_33209=40.0;
for(;d::truth((_n_x_33209<80.0));(void)((_n_x_33209++))){d::check_cancel();double _n_k_33210=((_n_r_33206*_n_W_32857)+_n_x_33209);
double _n_xc_33211=(_n_x_33209+0.5);
double _n_u_33212=(((_n_xc_33211-_n_VX_32859)/_n_s_33203)+3.15);
if(((((d::truth((_n_u_33212>=0.0))&&d::truth((_n_u_33212<=0.95)))&&d::truth((_n_h0_33208>=0.0)))&&d::truth((_n_h0_33208<=1.83)))&&d::truth((d::at(this->_n_S_32916,_n_k_33210)<_n_s_33203)))){d::check_cancel();(void)(([&](){auto&& _n_array_33860=this->_n_mat_32915;auto _n_index_33861=_n_k_33210;auto _n_value_33862=_n_VEND_32875;d::put(_n_array_33860,_n_index_33861,_n_value_33862);return _n_value_33862;})());
(void)(([&](){auto&& _n_array_33863=this->_n_S_32916;auto _n_index_33864=_n_k_33210;auto _n_value_33865=_n_s_33203;d::put(_n_array_33863,_n_index_33864,_n_value_33865);return _n_value_33865;})());
(void)(([&](){auto&& _n_array_33866=this->_n_grp_32924;auto _n_index_33867=_n_k_33210;auto _n_value_33868=0.0;d::put(_n_array_33866,_n_index_33867,_n_value_33868);return _n_value_33868;})());
double _n_cr_33213=0.62;
double _n_cg_33214=0.66;
double _n_cb_33215=0.74;
if((((d::truth((_n_u_33212>0.05))&&d::truth((_n_u_33212<0.9)))&&d::truth((_n_h0_33208>0.05)))&&d::truth((_n_h0_33208<1.78)))){d::check_cancel();if(d::truth((_n_h0_33208>1.5))){d::check_cancel();(void)((((_n_cr_33213=0.85),(_n_cg_33214=0.93)),(_n_cb_33215=1.0)));
if((d::truth((_n_h0_33208>1.6))&&d::truth((_n_h0_33208<1.71)))){d::check_cancel();(void)((((_n_cr_33213=1.0),(_n_cg_33214=0.18)),(_n_cb_33215=0.12)));
}
}else {d::check_cancel();if(d::truth((_n_h0_33208>0.53))){d::check_cancel();double _n_band_33216=(d::truth((_n_h0_33208>1.13))?0.0:(d::truth((_n_h0_33208>0.83))?1.0:2.0));
double _n_b0_33217=d::at(d::Array<double,false>{1.13,0.83,0.53},_n_band_33216);
double _n_hb_33218=(_n_h0_33208-_n_b0_33217);
double _n_slot_33219=std::floor(((_n_u_33212-0.08)/0.135));
double _n_su_33220=((_n_u_33212-0.08)-(_n_slot_33219*0.135));
(void)((((_n_cr_33213=0.82),(_n_cg_33214=0.9)),(_n_cb_33215=1.0)));
if(d::truth((_n_hb_33218<0.045))){d::check_cancel();bool _n_lit_33221=([&]()->bool{auto _n_logical_33869=([&]()->bool{auto _n_logical_33870=([&]()->bool{auto _n_logical_33871=(_n_su_33220>0.05);return d::truth(_n_logical_33871)?(_n_su_33220<0.09):_n_logical_33871;})();return d::truth(_n_logical_33870)?(_n_slot_33219>=0.0):_n_logical_33870;})();return d::truth(_n_logical_33869)?(_n_slot_33219<6.0):_n_logical_33869;})();
(void)((((_n_cr_33213=(d::truth(_n_lit_33221)?0.35:0.2)),(_n_cg_33214=(d::truth(_n_lit_33221)?0.75:0.22))),(_n_cb_33215=(d::truth(_n_lit_33221)?1.0:0.28))));
}else {d::check_cancel();if((((((d::truth((_n_hb_33218>0.07))&&d::truth((_n_hb_33218<0.26)))&&d::truth((_n_slot_33219>=0.0)))&&d::truth((_n_slot_33219<6.0)))&&d::truth((_n_su_33220>0.02)))&&d::truth((_n_su_33220<0.1)))){d::check_cancel();d::Array<double,false> _n_c_33222=d::at(_n_CANS_33205,std::floor((_n_hash_32900(_n_slot_33219,(_n_band_33216+3.0))*double(_n_CANS_33205.size()))));
(void)((((_n_cr_33213=(d::at(_n_c_33222,0.0)*0.95)),(_n_cg_33214=(d::at(_n_c_33222,1.0)*0.95))),(_n_cb_33215=(d::at(_n_c_33222,2.0)*0.95))));
}
}
}else {d::check_cancel();(void)((((_n_cr_33213=0.3),(_n_cg_33214=0.32)),(_n_cb_33215=0.38)));
if((((d::truth((_n_u_33212>0.12))&&d::truth((_n_u_33212<0.62)))&&d::truth((_n_h0_33208>0.1)))&&d::truth((_n_h0_33208<0.26)))){d::check_cancel();(void)((((_n_cr_33213=0.02),(_n_cg_33214=0.02)),(_n_cb_33215=0.03)));
}
if((((d::truth((_n_u_33212>0.7))&&d::truth((_n_u_33212<0.86)))&&d::truth((_n_h0_33208>0.3)))&&d::truth((_n_h0_33208<0.46)))){d::check_cancel();bool _n_read_33223=([&]()->bool{auto _n_logical_33872=(_n_h0_33208>0.38);return d::truth(_n_logical_33872)?(_n_h0_33208<0.44):_n_logical_33872;})();
(void)((((_n_cr_33213=(d::truth(_n_read_33223)?0.2:0.06)),(_n_cg_33214=(d::truth(_n_read_33223)?1.0:0.06))),(_n_cb_33215=(d::truth(_n_read_33223)?0.5:0.08))));
}
}
}
}
(void)(this->_n_emit_32929(_n_k_33210,_n_cr_33213,_n_cg_33214,_n_cb_33215));
}
}}
}}
double _n_xin_33224=(_n_VX_32859-(2.2*_n_s_33203));
double _n_xend_33225=(_n_VX_32859-(2.2*_n_s2_33204));
{double _n_x_33226=std::floor(_n_xin_33224);
for(;d::truth((_n_x_33226<std::ceil(_n_xend_33225)));(void)((_n_x_33226++))){d::check_cancel();double _n_sc_33227=(((_n_VX_32859-_n_x_33226)-0.5)/2.2);
if((d::truth((_n_sc_33227>_n_s_33203))||d::truth((_n_sc_33227<_n_s2_33204)))){d::check_cancel();continue;
}
double _n_along_33228=(((_n_F_32861/_n_sc_33227)-(_n_F_32861/_n_s_33203))/0.7);
{double _n_r_33229=0.0;
for(;d::truth((_n_r_33229<_n_H_32858));(void)((_n_r_33229++))){d::check_cancel();double _n_y_33230=(_n_r_33229+0.5);
double _n_h_33231=(_n_EYE_32862+((_n_HY_32860-_n_y_33230)/_n_sc_33227));
double _n_k_33232=((_n_r_33229*_n_W_32857)+_n_x_33226);
if(((d::truth((_n_h_33231<0.0))||d::truth((_n_h_33231>1.83)))||d::truth((d::at(this->_n_S_32916,_n_k_33232)>=_n_sc_33227)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_33873=this->_n_mat_32915;auto _n_index_33874=_n_k_33232;auto _n_value_33875=_n_VEND_32875;d::put(_n_array_33873,_n_index_33874,_n_value_33875);return _n_value_33875;})());
(void)(([&](){auto&& _n_array_33876=this->_n_S_32916;auto _n_index_33877=_n_k_33232;auto _n_value_33878=_n_sc_33227;d::put(_n_array_33876,_n_index_33877,_n_value_33878);return _n_value_33878;})());
bool _n_seam_33233=(std::fabs((_n_along_33228-0.5))<0.04);
double _n_v_33234=(((d::truth((_n_h_33231>1.72))?0.5:0.36)*(d::truth(_n_seam_33233)?0.6:1.0))*(1.0-(0.3*_n_along_33228)));
(void)(this->_n_emit_32929(_n_k_33232,(_n_v_33234*0.92),(_n_v_33234*0.96),(_n_v_33234*1.05)));
}}
}}

}
this->_n_bulbs_32939=d::Array<std::array<double,2>,false>{};
this->_n_order_32940=d::map(_n_SIGNS_32890,[&]( std::shared_ptr<_n_Record_32891> _a0,double _a1) mutable ->double{std::shared_ptr<_n_Record_32891> _n___33235=_a0;
double _n_i_33236=_a1;
return _n_i_33236;}).sort([=]( double _a0,double _a1) mutable ->double{double _n_a_33237=_a0;
double _n_b_33238=_a1;
return (d::at(_n_SIGNS_32890,_n_a_33237)->_p_s-d::at(_n_SIGNS_32890,_n_b_33238)->_p_s);});
for(auto &&_n_item_33879:this->_n_order_32940){d::check_cancel();double _n_si_33239=_n_item_33879;
{
std::shared_ptr<_n_Record_32891> _n_sg_33240=d::at(_n_SIGNS_32890,_n_si_33239);
auto _n_binding_33880=_n_sg_33240;
double _n_side_33241=_n_binding_33880->_p_side;
double _n_s_33242=_n_binding_33880->_p_s;
double _n_g_33243=_n_binding_33880->_p_g;
double _n_kind_33244=_n_binding_33880->_p_kind;
d::Array<double,false> _n_hue_33245=_n_binding_33880->_p_hue;
double _n_w_33246=_n_binding_33880->_p_w;
double _n_xo_33247=d::round((_n_VX_32859+((_n_side_33241*([&]()->double{auto _n_logical_33881=_n_sg_33240->_p_edge;return d::present(_n_logical_33881)?d::read(_n_logical_33881):_n_HALF_32863;})())*_n_s_33242)));
double _n_x0_33248=(d::truth((_n_side_33241<0.0))?_n_xo_33247:(_n_xo_33247-_n_w_33246));
double _n_x1_33249=(_n_x0_33248+_n_w_33246);
double _n_y1_33250=d::round((_n_HY_32860-((_n_sg_33240->_p_hb-_n_EYE_32862)*_n_s_33242)));
d::Array<d::String,false> _n_text_33251=(d::truth(_n_sg_33240->_p_text)?d::split(d::read(_n_sg_33240->_p_text),d::String(u" ")):d::Array<d::String,false>{});
double _n_n_33252=double(_n_text_33251.size());
double _n_m_33253=(d::truth((_n_kind_33244==_n_BULBS_32888))?3.0:(_n_g_33243+1.0));
double _n_step_33254=(((5.0*_n_g_33243)+_n_g_33243)+1.0);
double _n_hc_33255=(d::truth(_n_g_33243)?((((2.0*_n_m_33253)+(_n_n_33252*_n_step_33254))-_n_g_33243)-1.0):d::read(_n_sg_33240->_p_rows));
double _n_y0_33256=(_n_y1_33250-_n_hc_33255);
double _n_gx_33257=(_n_x0_33248+std::floor(((_n_w_33246-(5.0*_n_g_33243))/2.0)));
d::Array<double,false> _n_pale_33258=d::Array<double,false>{_n_mix_32907(d::at(_n_hue_33245,0.0),1.0,0.32),_n_mix_32907(d::at(_n_hue_33245,1.0),1.0,0.32),_n_mix_32907(d::at(_n_hue_33245,2.0),1.0,0.32)};
double _n_ring_33259=0.0;
{double _n_r_33260=d::maximum({0.0,_n_y0_33256});
for(;d::truth((_n_r_33260<d::minimum({_n_H_32858,_n_y1_33250})));(void)((_n_r_33260++))){d::check_cancel();{double _n_x_33261=d::maximum({0.0,_n_x0_33248});
for(;d::truth((_n_x_33261<d::minimum({_n_W_32857,_n_x1_33249})));(void)((_n_x_33261++))){d::check_cancel();double _n_k_33262=((_n_r_33260*_n_W_32857)+_n_x_33261);
if(d::truth((d::at(this->_n_S_32916,_n_k_33262)>=_n_s_33242))){d::check_cancel();continue;
}
double _n_i_33263=(_n_x_33261-_n_x0_33248);
double _n_j_33264=(_n_r_33260-_n_y0_33256);
double _n_jb_33265=((_n_y1_33250-1.0)-_n_r_33260);
bool _n_edge_33266=([&]()->bool{auto _n_logical_33882=([&]()->bool{auto _n_logical_33883=([&]()->bool{auto _n_logical_33884=(_n_i_33263==0.0);return d::truth(_n_logical_33884)?_n_logical_33884:(_n_i_33263==(_n_w_33246-1.0));})();return d::truth(_n_logical_33883)?_n_logical_33883:(_n_j_33264==0.0);})();return d::truth(_n_logical_33882)?_n_logical_33882:(_n_jb_33265==0.0);})();
bool _n_stroke_33267=false;
double _n_gi_33268=(-d::number(1.0));
if(d::truth(_n_g_33243)){d::check_cancel();(void)((_n_gi_33268=std::floor(((_n_j_33264-_n_m_33253)/_n_step_33254))));
double _n_gr_33269=((_n_j_33264-_n_m_33253)-(_n_gi_33268*_n_step_33254));
double _n_gc_33270=(_n_x_33261-_n_gx_33257);
if((((((d::truth((_n_gi_33268>=0.0))&&d::truth((_n_gi_33268<_n_n_33252)))&&d::truth((_n_gr_33269>=0.0)))&&d::truth((_n_gr_33269<(5.0*_n_g_33243))))&&d::truth((_n_gc_33270>=0.0)))&&d::truth((_n_gc_33270<(5.0*_n_g_33243))))){d::check_cancel();(void)((_n_stroke_33267=(d::at(_n_FONT_32889.get(d::at(_n_text_33251,_n_gi_33268)),([&](){auto _n_left_33885=(std::floor((_n_gr_33269/_n_g_33243))*6.0);auto _n_right_33886=std::floor((_n_gc_33270/_n_g_33243));return (_n_left_33885+_n_right_33886);})())==d::String(u"#"))));
}
}else {d::check_cancel();if(((d::truth((_n_w_33246>2.0))&&d::truth((_n_i_33263>0.0)))&&d::truth((_n_i_33263<(_n_w_33246-1.0))))){d::check_cancel();(void)((_n_stroke_33267=([&]()->bool{auto _n_logical_33887=(d::mod(_n_j_33264,4.0)==1.0);return d::truth(_n_logical_33887)?_n_logical_33887:(d::mod(_n_j_33264,4.0)==2.0);})()));
}
}
double _n_cr_33271{};
double _n_cg_33272{};
double _n_cb_33273{};
if(d::truth((_n_kind_33244==_n_NEON_32885))){d::check_cancel();if(d::truth(_n_edge_33266)){d::check_cancel();(void)((((_n_cr_33271=d::at(_n_hue_33245,0.0)),(_n_cg_33272=d::at(_n_hue_33245,1.0))),(_n_cb_33273=d::at(_n_hue_33245,2.0))));
}else {d::check_cancel();if(d::truth(_n_stroke_33267)){d::check_cancel();(void)((((_n_cr_33271=d::at(_n_pale_33258,0.0)),(_n_cg_33272=d::at(_n_pale_33258,1.0))),(_n_cb_33273=d::at(_n_pale_33258,2.0))));
}else {d::check_cancel();(void)((((_n_cr_33271=(0.03+(d::at(_n_hue_33245,0.0)*0.05))),(_n_cg_33272=(0.025+(d::at(_n_hue_33245,1.0)*0.05)))),(_n_cb_33273=(0.045+(d::at(_n_hue_33245,2.0)*0.05)))));
}
}
}else {d::check_cancel();if(d::truth((_n_kind_33244==_n_PANEL_32886))){d::check_cancel();if(d::truth(_n_stroke_33267)){d::check_cancel();(void)((((_n_cr_33271=(d::at(_n_hue_33245,0.0)*0.07)),(_n_cg_33272=(d::at(_n_hue_33245,1.0)*0.07))),(_n_cb_33273=(d::at(_n_hue_33245,2.0)*0.07))));
}else {d::check_cancel();if((d::truth(_n_edge_33266)&&d::truth((_n_w_33246>3.0)))){d::check_cancel();(void)((((_n_cr_33271=(d::at(_n_hue_33245,0.0)*0.55)),(_n_cg_33272=(d::at(_n_hue_33245,1.0)*0.55))),(_n_cb_33273=(d::at(_n_hue_33245,2.0)*0.55))));
}else {d::check_cancel();(void)((((_n_cr_33271=(d::at(_n_pale_33258,0.0)*0.92)),(_n_cg_33272=(d::at(_n_pale_33258,1.0)*0.92))),(_n_cb_33273=(d::at(_n_pale_33258,2.0)*0.92))));
}
}
}else {d::check_cancel();if(d::truth((_n_kind_33244==_n_WHITE_32887))){d::check_cancel();if(d::truth(_n_stroke_33267)){d::check_cancel();(void)((((_n_cr_33271=(d::at(_n_hue_33245,0.0)*0.9)),(_n_cg_33272=(d::at(_n_hue_33245,1.0)*0.9))),(_n_cb_33273=(d::at(_n_hue_33245,2.0)*0.9))));
}else {d::check_cancel();if(d::truth(_n_edge_33266)){d::check_cancel();(void)((((_n_cr_33271=(d::at(_n_hue_33245,0.0)*0.7)),(_n_cg_33272=(d::at(_n_hue_33245,1.0)*0.7))),(_n_cb_33273=(d::at(_n_hue_33245,2.0)*0.7))));
}else {d::check_cancel();(void)((((_n_cr_33271=0.95),(_n_cg_33272=0.93)),(_n_cb_33273=0.88)));
}
}
}else {d::check_cancel();if(d::truth(_n_edge_33266)){d::check_cancel();(void)((((_n_cr_33271=0.04),(_n_cg_33272=0.03)),(_n_cb_33273=0.03)));
if(d::truth((d::mod((_n_i_33263+_n_j_33264),2.0)==0.0))){d::check_cancel();(void)(this->_n_bulbs_32939.push(std::array<double,2>{_n_k_33262,(_n_ring_33259++)}));
}
}else {d::check_cancel();if(d::truth(_n_stroke_33267)){d::check_cancel();(void)((((_n_cr_33271=1.0),(_n_cg_33272=0.95)),(_n_cb_33273=0.86)));
}else {d::check_cancel();(void)((((_n_cr_33271=(d::at(_n_hue_33245,0.0)*0.42)),(_n_cg_33272=(d::at(_n_hue_33245,1.0)*0.42))),(_n_cb_33273=(d::at(_n_hue_33245,2.0)*0.42))));
}
}
}
}
}
(void)(([&](){auto&& _n_array_33888=this->_n_mat_32915;auto _n_index_33889=_n_k_33262;auto _n_value_33890=_n_SIGN_32873;d::put(_n_array_33888,_n_index_33889,_n_value_33890);return _n_value_33890;})());
(void)(([&](){auto&& _n_array_33891=this->_n_S_32916;auto _n_index_33892=_n_k_33262;auto _n_value_33893=_n_s_33242;d::put(_n_array_33891,_n_index_33892,_n_value_33893);return _n_value_33893;})());
(void)(this->_n_emit_32929(_n_k_33262,_n_cr_33271,_n_cg_33272,_n_cb_33273));
(void)(([&](){auto&& _n_array_33894=this->_n_grp_32924;auto _n_index_33895=_n_k_33262;auto _n_value_33896=([&]()->double{auto _n_logical_33897=_n_sg_33240->_p_group;return d::present(_n_logical_33897)?d::read(_n_logical_33897):(((d::truth((d::present(_n_sg_33240->_p_fail)))&&d::truth((_n_gi_33268==d::read(_n_sg_33240->_p_fail))))&&d::truth(_n_stroke_33267))?3.0:0.0);})();d::put(_n_array_33894,_n_index_33895,_n_value_33896);return _n_value_33896;})());
}}
}}
double _n_xin_33274=(d::truth((_n_side_33241<0.0))?_n_x1_33249:_n_x0_33248);
double _n_xwIn_33275=((_n_xin_33274-_n_VX_32859)/_n_s_33242);
double _n_s2_33276=(_n_s_33242/(1.0+((_n_THICK_32864*_n_s_33242)/_n_F_32861)));
double _n_xend_33277=(_n_VX_32859+(_n_xwIn_33275*_n_s2_33276));
double _n_hb_33278=(_n_EYE_32862+((_n_HY_32860-_n_y1_33250)/_n_s_33242));
double _n_ht_33279=(_n_EYE_32862+((_n_HY_32860-_n_y0_33256)/_n_s_33242));
double _n_lo_33280=std::floor(d::minimum({_n_xin_33274,_n_xend_33277}));
double _n_hi_33281=std::ceil(d::maximum({_n_xin_33274,_n_xend_33277}));
{double _n_x_33282=d::maximum({0.0,_n_lo_33280});
for(;d::truth((_n_x_33282<d::minimum({_n_W_32857,_n_hi_33281})));(void)((_n_x_33282++))){d::check_cancel();double _n_sc_33283=(((_n_x_33282+0.5)-_n_VX_32859)/_n_xwIn_33275);
if((d::truth((_n_sc_33283>_n_s_33242))||d::truth((_n_sc_33283<_n_s2_33276)))){d::check_cancel();continue;
}
double _n_yt_33284=(_n_HY_32860-((_n_ht_33279-_n_EYE_32862)*_n_sc_33283));
double _n_yb_33285=(_n_HY_32860-((_n_hb_33278-_n_EYE_32862)*_n_sc_33283));
{double _n_r_33286=([&](){auto _n_argument_33898=0.0;auto _n_argument_33899=std::floor(_n_yt_33284);return d::maximum({_n_argument_33898,_n_argument_33899});})();
for(;d::truth((_n_r_33286<([&](){auto _n_argument_33900=_n_H_32858;auto _n_argument_33901=std::ceil(_n_yb_33285);return d::minimum({_n_argument_33900,_n_argument_33901});})()));(void)((_n_r_33286++))){d::check_cancel();double _n_y_33287=(_n_r_33286+0.5);
double _n_k_33288=((_n_r_33286*_n_W_32857)+_n_x_33282);
if(((d::truth((_n_y_33287<_n_yt_33284))||d::truth((_n_y_33287>=_n_yb_33285)))||d::truth((d::at(this->_n_S_32916,_n_k_33288)>=_n_sc_33283)))){d::check_cancel();continue;
}
double _n_v_33289=(d::truth((_n_kind_33244==_n_NEON_32885))?0.14:(d::truth((_n_kind_33244==_n_BULBS_32888))?0.3:0.5));
d::Array<double,false> _n_c_33290=(d::truth((_n_kind_33244==_n_WHITE_32887))?d::Array<double,false>{0.95,0.93,0.88}:(d::truth((_n_kind_33244==_n_NEON_32885))?_n_hue_33245:_n_pale_33258));
(void)(([&](){auto&& _n_array_33902=this->_n_mat_32915;auto _n_index_33903=_n_k_33288;auto _n_value_33904=_n_SIDE_32874;d::put(_n_array_33902,_n_index_33903,_n_value_33904);return _n_value_33904;})());
(void)(([&](){auto&& _n_array_33905=this->_n_S_32916;auto _n_index_33906=_n_k_33288;auto _n_value_33907=_n_sc_33283;d::put(_n_array_33905,_n_index_33906,_n_value_33907);return _n_value_33907;})());
(void)(this->_n_emit_32929(_n_k_33288,(d::at(_n_c_33290,0.0)*_n_v_33289),(d::at(_n_c_33290,1.0)*_n_v_33289),(d::at(_n_c_33290,2.0)*_n_v_33289)));
(void)(([&](){auto&& _n_array_33908=this->_n_grp_32924;auto _n_index_33909=_n_k_33288;auto _n_value_33910=([&]()->double{auto _n_logical_33911=_n_sg_33240->_p_group;return d::present(_n_logical_33911)?d::read(_n_logical_33911):0.0;})();d::put(_n_array_33908,_n_index_33909,_n_value_33910);return _n_value_33910;})());
}}
}}

}
}
{
double _n_s_33291=18.0;
double _n_y0_33292=d::round((_n_HY_32860+((_n_EYE_32862-0.14)*_n_s_33291)));
double _n_y1_33293=d::round((_n_HY_32860+(_n_EYE_32862*_n_s_33291)));
for(auto &&_n_item_33912:d::Array<double,false>{2.1,2.4}){d::check_cancel();double _n_xw_33294=_n_item_33912;
{
double _n_x_33295=std::floor((_n_VX_32859+(_n_xw_33294*_n_s_33291)));
{double _n_r_33296=_n_y0_33292;
for(;d::truth((_n_r_33296<_n_y1_33293));(void)((_n_r_33296++))){d::check_cancel();double _n_k_33297=((_n_r_33296*_n_W_32857)+_n_x_33295);
if(d::truth((d::at(this->_n_S_32916,_n_k_33297)<_n_s_33291))){d::check_cancel();(void)(((([&](){auto&& _n_array_33913=this->_n_mat_32915;auto _n_index_33914=_n_k_33297;auto _n_value_33915=_n_POLE_32876;d::put(_n_array_33913,_n_index_33914,_n_value_33915);return _n_value_33915;})(),([&](){auto&& _n_array_33916=this->_n_S_32916;auto _n_index_33917=_n_k_33297;auto _n_value_33918=_n_s_33291;d::put(_n_array_33916,_n_index_33917,_n_value_33918);return _n_value_33918;})()),this->_n_surface_32930(_n_k_33297,0.05,0.05,0.06,0.5)));
}
}}

}
}

}
this->_n_LR_32942=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_LG_32943=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_LB_32944=d::Array<float,true>(size_t(this->_n_N_32911));
{double _n_li_33322=0.0;
for(;d::truth((_n_li_33322<double(_n_LANTERNS_32898.size())));(void)((_n_li_33322++))){d::check_cancel();(void)(this->_n_lantern_32941(_n_li_33322,0.0,[=]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_k_33323=_a0;
double _n_r_33324=_a1;
double _n_g_33325=_a2;
double _n_b_33326=_a3;
((([&](){auto&& _n_array_33919=this->_n_LR_32942;auto _n_index_33920=_n_k_33323;auto _n_value_33921=_n_r_33324;d::put(_n_array_33919,_n_index_33920,_n_value_33921);return _n_value_33921;})(),([&](){auto&& _n_array_33922=this->_n_LG_32943;auto _n_index_33923=_n_k_33323;auto _n_value_33924=_n_g_33325;d::put(_n_array_33922,_n_index_33923,_n_value_33924);return _n_value_33924;})()),([&](){(void)(([&](){auto&& _n_array_33925=this->_n_LB_32944;auto _n_index_33926=_n_k_33323;auto _n_value_33927=_n_b_33326;d::put(_n_array_33925,_n_index_33926,_n_value_33927);return _n_value_33927;})());})());}));
}}
this->_n_fog_32947=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_HZR_32948=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_HZG_32949=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_HZB_32950=d::Array<float,true>(size_t(this->_n_N_32911));
{double _n_k_33346=0.0;
for(;d::truth((_n_k_33346<this->_n_N_32911));(void)((_n_k_33346++))){d::check_cancel();double _n_s_33347=d::at(this->_n_S_32916,_n_k_33346);
(void)(([&](){auto&& _n_array_33928=this->_n_fog_32947;auto _n_index_33929=_n_k_33346;auto _n_value_33930=(d::truth((d::at(this->_n_mat_32915,_n_k_33346)==_n_TOWER_32878))?0.1:(d::truth((_n_s_33347>0.0))?(1.0-std::exp((((-d::number(_n_F_32861))/_n_s_33347)/_n_ZF_32865))):0.0));d::put(_n_array_33928,_n_index_33929,_n_value_33930);return _n_value_33930;})());
double _n_x_33348=d::mod(_n_k_33346,_n_W_32857);
double _n_y_33349=(std::floor((_n_k_33346/_n_W_32857))+0.5);
double _n_g_33350=(_n_endGlow_32904((_n_x_33348+0.5),_n_y_33349)*1.1);
(void)(((([&](){auto&& _n_array_33931=this->_n_HZR_32948;auto _n_index_33932=_n_k_33346;auto _n_value_33933=(0.1+(_n_g_33350*d::at(_n_END_32903,0.0)));d::put(_n_array_33931,_n_index_33932,_n_value_33933);return _n_value_33933;})(),([&](){auto&& _n_array_33934=this->_n_HZG_32949;auto _n_index_33935=_n_k_33346;auto _n_value_33936=(0.07+(_n_g_33350*d::at(_n_END_32903,1.0)));d::put(_n_array_33934,_n_index_33935,_n_value_33936);return _n_value_33936;})()),([&](){auto&& _n_array_33937=this->_n_HZB_32950;auto _n_index_33938=_n_k_33346;auto _n_value_33939=(0.16+(_n_g_33350*d::at(_n_END_32903,2.0)));d::put(_n_array_33937,_n_index_33938,_n_value_33939);return _n_value_33939;})()));
}}
this->_n_XH_32952=(_n_H_32858+_n_EXT_32866);
auto _n_binding_33940=this->_n_shade_32951(this->_n_ER_32917,this->_n_EG_32918,this->_n_EB_32919);
this->_n_CR_32954=d::at(_n_binding_33940,0.0);
this->_n_CG_32955=d::at(_n_binding_33940,1.0);
this->_n_CB_32956=d::at(_n_binding_33940,2.0);
this->_n_GR_32957=d::at(_n_binding_33940,3.0);
this->_n_GG_32958=d::at(_n_binding_33940,4.0);
this->_n_GB_32959=d::at(_n_binding_33940,5.0);
auto _n_binding_33941=this->_n_mirror_32953(this->_n_CR_32954,this->_n_CG_32955,this->_n_CB_32956);
this->_n_RR_32960=d::at(_n_binding_33941,0.0);
this->_n_RG_32961=d::at(_n_binding_33941,1.0);
this->_n_RB_32962=d::at(_n_binding_33941,2.0);
this->_n_NG_32963=3.0;
this->_n_dropC_32964=d::Array<std::shared_ptr<std::tuple<d::Array<int32_t,true>,d::Array<float,true>>>,false>{};
this->_n_dropR_32965=d::Array<d::Array<d::Array<float,true>,false>,false>{};
{double _n_gi_33409=1.0;
for(;d::truth((_n_gi_33409<=this->_n_NG_32963));(void)((_n_gi_33409++))){d::check_cancel();d::Array<float,true> _n_er_33410=this->_n_ER_32917.slice();
d::Array<float,true> _n_eg_33411=this->_n_EG_32918.slice();
d::Array<float,true> _n_eb_33412=this->_n_EB_32919.slice();
{double _n_k_33413=0.0;
for(;d::truth((_n_k_33413<this->_n_N_32911));(void)((_n_k_33413++))){d::check_cancel();if(d::truth((d::at(this->_n_grp_32924,_n_k_33413)!=_n_gi_33409))){d::check_cancel();continue;
}
if(d::truth((_n_gi_33409==3.0))){d::check_cancel();(void)(((([&](){auto&& _n_array_33942=_n_er_33410;auto _n_index_33943=_n_k_33413;auto _n_value_33944=(0.03+(d::at(_n_PINK_32881,0.0)*0.05));d::put(_n_array_33942,_n_index_33943,_n_value_33944);return _n_value_33944;})(),([&](){auto&& _n_array_33945=_n_eg_33411;auto _n_index_33946=_n_k_33413;auto _n_value_33947=(0.025+(d::at(_n_PINK_32881,1.0)*0.05));d::put(_n_array_33945,_n_index_33946,_n_value_33947);return _n_value_33947;})()),([&](){auto&& _n_array_33948=_n_eb_33412;auto _n_index_33949=_n_k_33413;auto _n_value_33950=(0.045+(d::at(_n_PINK_32881,2.0)*0.05));d::put(_n_array_33948,_n_index_33949,_n_value_33950);return _n_value_33950;})()));
}else {d::check_cancel();(void)(((([&](){auto&& _n_array_33951=_n_er_33410;auto _n_index_33952=_n_k_33413;auto _n_value_33953=(d::at(_n_array_33951,_n_index_33952)*0.08);d::put(_n_array_33951,_n_index_33952,_n_value_33953);return _n_value_33953;})(),([&](){auto&& _n_array_33954=_n_eg_33411;auto _n_index_33955=_n_k_33413;auto _n_value_33956=(d::at(_n_array_33954,_n_index_33955)*0.08);d::put(_n_array_33954,_n_index_33955,_n_value_33956);return _n_value_33956;})()),([&](){auto&& _n_array_33957=_n_eb_33412;auto _n_index_33958=_n_k_33413;auto _n_value_33959=(d::at(_n_array_33957,_n_index_33958)*0.08);d::put(_n_array_33957,_n_index_33958,_n_value_33959);return _n_value_33959;})()));
}
}}
auto _n_binding_33960=this->_n_shade_32951(_n_er_33410,_n_eg_33411,_n_eb_33412);
d::Array<float,true> _n_cr_33414=d::at(_n_binding_33960,0.0);
d::Array<float,true> _n_cg_33415=d::at(_n_binding_33960,1.0);
d::Array<float,true> _n_cb_33416=d::at(_n_binding_33960,2.0);
d::Array<double,false> _n_ks_33417=d::Array<double,false>{};
d::Array<double,false> _n_vs_33418=d::Array<double,false>{};
{double _n_k_33419=0.0;
for(;d::truth((_n_k_33419<this->_n_N_32911));(void)((_n_k_33419++))){d::check_cancel();double _n_d_33420=([&](){auto _n_left_33961=([&](){auto _n_left_33963=std::fabs((d::at(this->_n_CR_32954,_n_k_33419)-d::at(_n_cr_33414,_n_k_33419)));auto _n_right_33964=std::fabs((d::at(this->_n_CG_32955,_n_k_33419)-d::at(_n_cg_33415,_n_k_33419)));return (_n_left_33963+_n_right_33964);})();auto _n_right_33962=std::fabs((d::at(this->_n_CB_32956,_n_k_33419)-d::at(_n_cb_33416,_n_k_33419)));return (_n_left_33961+_n_right_33962);})();
if(d::truth((_n_d_33420>0.004))){d::check_cancel();(void)((_n_ks_33417.push(_n_k_33419),_n_vs_33418.push((d::at(this->_n_CR_32954,_n_k_33419)-d::at(_n_cr_33414,_n_k_33419)),(d::at(this->_n_CG_32955,_n_k_33419)-d::at(_n_cg_33415,_n_k_33419)),(d::at(this->_n_CB_32956,_n_k_33419)-d::at(_n_cb_33416,_n_k_33419)))));
}
}}
(void)(this->_n_dropC_32964.push(std::make_shared<std::tuple<d::Array<int32_t,true>,d::Array<float,true>>>(d::Array<int32_t,true>(_n_ks_33417),d::Array<float,true>(_n_vs_33418))));
auto _n_binding_33965=this->_n_mirror_32953(_n_cr_33414,_n_cg_33415,_n_cb_33416);
d::Array<float,true> _n_rr_33421=d::at(_n_binding_33965,0.0);
d::Array<float,true> _n_rg_33422=d::at(_n_binding_33965,1.0);
d::Array<float,true> _n_rb_33423=d::at(_n_binding_33965,2.0);
(void)(this->_n_dropR_32965.push(d::Array<d::Array<float,true>,false>{d::map(this->_n_RR_32960,[&]( double _a0,double _a1) mutable ->double{double _n_v_33424=_a0;
double _n_k_33425=_a1;
return (_n_v_33424-d::at(_n_rr_33421,_n_k_33425));}),d::map(this->_n_RG_32961,[&]( double _a0,double _a1) mutable ->double{double _n_v_33426=_a0;
double _n_k_33427=_a1;
return (_n_v_33426-d::at(_n_rg_33422,_n_k_33427));}),d::map(this->_n_RB_32962,[&]( double _a0,double _a1) mutable ->double{double _n_v_33428=_a0;
double _n_k_33429=_a1;
return (_n_v_33428-d::at(_n_rb_33423,_n_k_33429));})}));
}}
{double _n_k_33430=0.0;
for(;d::truth((_n_k_33430<this->_n_N_32911));(void)((_n_k_33430++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_32915,_n_k_33430)!=_n_ROAD_32872))){d::check_cancel();continue;
}
double _n_s_33431=d::at(this->_n_S_32916,_n_k_33430);
double _n_d_33432=std::fabs(((d::mod(_n_k_33430,_n_W_32857)+0.5)-_n_VX_32859));
double _n_path_33433=([&](){auto _n_left_33966=std::exp((-d::number(std::pow((_n_d_33432/(1.4+(0.36*_n_s_33431))),1.6))));auto _n_right_33967=(0.16+(0.7*std::exp(((-d::number(_n_s_33431))/12.0))));return (_n_left_33966*_n_right_33967);})();
(void)(((([&](){auto&& _n_array_33968=this->_n_RR_32960;auto _n_index_33969=_n_k_33430;auto _n_value_33970=(d::at(_n_array_33968,_n_index_33969)+(_n_path_33433*d::at(_n_END_32903,0.0)));d::put(_n_array_33968,_n_index_33969,_n_value_33970);return _n_value_33970;})(),([&](){auto&& _n_array_33971=this->_n_RG_32961;auto _n_index_33972=_n_k_33430;auto _n_value_33973=(d::at(_n_array_33971,_n_index_33972)+(_n_path_33433*d::at(_n_END_32903,1.0)));d::put(_n_array_33971,_n_index_33972,_n_value_33973);return _n_value_33973;})()),([&](){auto&& _n_array_33974=this->_n_RB_32962;auto _n_index_33975=_n_k_33430;auto _n_value_33976=(d::at(_n_array_33974,_n_index_33975)+(_n_path_33433*d::at(_n_END_32903,2.0)));d::put(_n_array_33974,_n_index_33975,_n_value_33976);return _n_value_33976;})()));
}}
this->_n_road_32966=d::Array<double,false>{};
{double _n_k_33434=0.0;
for(;d::truth((_n_k_33434<this->_n_N_32911));(void)((_n_k_33434++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_32915,_n_k_33434)==_n_ROAD_32872))){d::check_cancel();(void)(this->_n_road_32966.push(_n_k_33434));
}
}}
this->_n_roadK_32967=d::Array<int32_t,true>(this->_n_road_32966);
this->_n_sky_32968=d::Array<double,false>{};
{double _n_k_33435=0.0;
for(;d::truth((_n_k_33435<this->_n_N_32911));(void)((_n_k_33435++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_32915,_n_k_33435)==_n_SKY_32870))){d::check_cancel();(void)(this->_n_sky_32968.push(_n_k_33435));
}
}}
this->_n_skyK_32969=d::Array<int32_t,true>(this->_n_sky_32968);
this->_n_CW_32970=400.0;
this->_n_cloud_32971=d::Array<float,true>(size_t((this->_n_CW_32970*_n_HY_32860)));
{double _n_r_33436=0.0;
for(;d::truth((_n_r_33436<_n_HY_32860));(void)((_n_r_33436++))){d::check_cancel();{double _n_x_33437=0.0;
for(;d::truth((_n_x_33437<this->_n_CW_32970));(void)((_n_x_33437++))){d::check_cancel();(void)(([&](){auto&& _n_array_33977=this->_n_cloud_32971;auto _n_index_33978=((_n_r_33436*this->_n_CW_32970)+_n_x_33437);auto _n_value_33979=_n_fbm_32902((_n_x_33437*0.03),(_n_r_33436*0.09),4.0,(this->_n_CW_32970*0.03));d::put(_n_array_33977,_n_index_33978,_n_value_33979);return _n_value_33979;})());
}}
}}
this->_n_LAYERS_32972=d::Array<d::Array<double,false>,false>{d::Array<double,false>{150.0,40.0,3.0,0.18,0.1},d::Array<double,false>{190.0,72.0,6.0,0.38,0.13},d::Array<double,false>{60.0,125.0,11.0,0.7,0.17}};
this->_n_drops_32973=d::Array<d::Array<double,false>,false>{};
(void)(d::forEach(this->_n_LAYERS_32972,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_33980=_a0;
double _n_count_33438=d::at(_n_binding_33980,0.0);
double _n_v_33439=d::at(_n_binding_33980,1.0);
double _n_len_33440=d::at(_n_binding_33980,2.0);
double _n_b_33441=d::at(_n_binding_33980,3.0);
double _n_sl_33442=d::at(_n_binding_33980,4.0);
double _n_li_33443=_a1;
{
{double _n_i_33444=0.0;
for(;d::truth((_n_i_33444<_n_count_33438));(void)((_n_i_33444++))){d::check_cancel();auto _n_h_33445=[&]( double _a0) mutable ->double{double _n_n_33446=_a0;
return _n_hash_32900(((_n_i_33444*7.0)+(_n_li_33443*1001.0)),_n_n_33446);};
(void)(this->_n_drops_32973.push(d::Array<double,false>{((_n_h_33445(1.0)*(_n_W_32857+30.0))-20.0),(_n_h_33445(2.0)*((_n_H_32858+_n_len_33440)+6.0)),(_n_v_33439*(0.85+(0.3*_n_h_33445(3.0)))),_n_len_33440,(_n_b_33441*(0.75+(0.5*_n_h_33445(4.0)))),_n_sl_33442}));
}}

}
}));
this->_n_FR_32974=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_FG_32975=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_FB_32976=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_rain_32977=d::Array<float,true>(size_t(this->_n_N_32911));
this->_n_hold_32978=d::Array<float,true>(size_t(this->_n_N_32911));
_render=[=]( double _a0,std::shared_ptr<_n_Record_33591> _a1) mutable ->d::String{double _n_t_33459=_a0;
auto _n_binding_33983=(d::present(_a1)?_a1:([&](){auto _n_object_33982=std::make_shared<_n_Record_33591>();return _n_object_33982;})());
std::optional<d::Array<uint8_t,true>> _n_color_33460=_n_binding_33983->_p_color;
{
(void)(((this->_n_FR_32974.set(this->_n_CR_32954),this->_n_FG_32975.set(this->_n_CG_32955)),this->_n_FB_32976.set(this->_n_CB_32956)));
d::Array<double,false> _n_mg_33461=d::Array<double,false>{1.0,this->_n_flicker_32981(1.0,_n_t_33459),this->_n_flicker_32981(2.0,_n_t_33459),this->_n_flicker_32981(3.0,_n_t_33459)};
{double _n_gi_33462=1.0;
for(;d::truth((_n_gi_33462<=this->_n_NG_32963));(void)((_n_gi_33462++))){d::check_cancel();double _n_off_33463=(1.0-d::at(_n_mg_33461,_n_gi_33462));
if(d::truth((_n_off_33463<=0.0))){d::check_cancel();continue;
}
auto _n_binding_33984=d::at(this->_n_dropC_32964,(_n_gi_33462-1.0));
d::Array<int32_t,true> _n_ks_33464=std::get<0>(*_n_binding_33984);
d::Array<float,true> _n_vs_33465=std::get<1>(*_n_binding_33984);
{double _n_i_33466=0.0;
for(;d::truth((_n_i_33466<double(_n_ks_33464.size())));(void)((_n_i_33466++))){d::check_cancel();double _n_k_33467=d::at(_n_ks_33464,_n_i_33466);
(void)(((([&](){auto&& _n_array_33985=this->_n_FR_32974;auto _n_index_33986=_n_k_33467;auto _n_value_33987=(d::at(_n_array_33985,_n_index_33986)-(d::at(_n_vs_33465,(_n_i_33466*3.0))*_n_off_33463));d::put(_n_array_33985,_n_index_33986,_n_value_33987);return _n_value_33987;})(),([&](){auto&& _n_array_33988=this->_n_FG_32975;auto _n_index_33989=_n_k_33467;auto _n_value_33990=(d::at(_n_array_33988,_n_index_33989)-(d::at(_n_vs_33465,((_n_i_33466*3.0)+1.0))*_n_off_33463));d::put(_n_array_33988,_n_index_33989,_n_value_33990);return _n_value_33990;})()),([&](){auto&& _n_array_33991=this->_n_FB_32976;auto _n_index_33992=_n_k_33467;auto _n_value_33993=(d::at(_n_array_33991,_n_index_33992)-(d::at(_n_vs_33465,((_n_i_33466*3.0)+2.0))*_n_off_33463));d::put(_n_array_33991,_n_index_33992,_n_value_33993);return _n_value_33993;})()));
}}
}}
double _n_drift_33468=(_n_t_33459*0.9);
{double _n_i_33469=0.0;
for(;d::truth((_n_i_33469<double(this->_n_skyK_32969.size())));(void)((_n_i_33469++))){d::check_cancel();double _n_k_33470=d::at(this->_n_skyK_32969,_n_i_33469);
double _n_x_33471=d::mod(_n_k_33470,_n_W_32857);
double _n_r_33472=double(d::i32((_n_k_33470/_n_W_32857))|d::i32(0.0));
double _n_sx_33473=(_n_x_33471+_n_drift_33468);
double _n_ix_33474=std::floor(_n_sx_33473);
double _n_fx_33475=(_n_sx_33473-_n_ix_33474);
double _n_c0_33476=d::at(this->_n_cloud_32971,((_n_r_33472*this->_n_CW_32970)+d::mod(_n_ix_33474,this->_n_CW_32970)));
double _n_c1_33477=d::at(this->_n_cloud_32971,((_n_r_33472*this->_n_CW_32970)+d::mod((_n_ix_33474+1.0),this->_n_CW_32970)));
double _n_c_33478=(0.72+(0.7*_n_smooth_32906(0.35,0.75,(_n_c0_33476+((_n_c1_33477-_n_c0_33476)*_n_fx_33475)))));
(void)(((([&](){auto&& _n_array_33994=this->_n_FR_32974;auto _n_index_33995=_n_k_33470;auto _n_value_33996=(d::at(_n_array_33994,_n_index_33995)*_n_c_33478);d::put(_n_array_33994,_n_index_33995,_n_value_33996);return _n_value_33996;})(),([&](){auto&& _n_array_33997=this->_n_FG_32975;auto _n_index_33998=_n_k_33470;auto _n_value_33999=(d::at(_n_array_33997,_n_index_33998)*_n_c_33478);d::put(_n_array_33997,_n_index_33998,_n_value_33999);return _n_value_33999;})()),([&](){auto&& _n_array_34000=this->_n_FB_32976;auto _n_index_34001=_n_k_33470;auto _n_value_34002=(d::at(_n_array_34000,_n_index_34001)*_n_c_33478);d::put(_n_array_34000,_n_index_34001,_n_value_34002);return _n_value_34002;})()));
}}
std::shared_ptr<_n_Record_32980> _n_wk_33479=this->_n_walker_32979(_n_t_33459);
double _n_fs_33480=_n_wk_33479->_p_s;
double _n_fx_33481=(_n_VX_32859+(_n_wk_33479->_p_xw*_n_fs_33480));
double _n_fy_33482=(_n_HY_32860+(_n_EYE_32862*_n_fs_33480));
double _n_fz_33483=(_n_fs_33480*1.12);
double _n_seen_33484=(_n_wk_33479->_p_fade*_n_smooth_32906(3.5,2.7,_n_wk_33479->_p_xw));
double _n_bx0_33485=([&](){auto _n_argument_34003=0.0;auto _n_argument_34004=std::floor(((_n_fx_33481-(0.62*_n_fz_33483))-1.0));return d::maximum({_n_argument_34003,_n_argument_34004});})();
double _n_bx1_33486=([&](){auto _n_argument_34005=(_n_W_32857-1.0);auto _n_argument_34006=std::ceil(((_n_fx_33481+(0.62*_n_fz_33483))+1.0));return d::minimum({_n_argument_34005,_n_argument_34006});})();
{double _n_i_33487=0.0;
for(;d::truth((_n_i_33487<double(this->_n_roadK_32967.size())));(void)((_n_i_33487++))){d::check_cancel();double _n_k_33488=d::at(this->_n_roadK_32967,_n_i_33487);
double _n_x_33489=d::mod(_n_k_33488,_n_W_32857);
double _n_r_33490=double(d::i32((_n_k_33488/_n_W_32857))|d::i32(0.0));
double _n_y_33491=(_n_r_33490+0.5);
double _n_v_33492=((_n_y_33491-_n_HY_32860)/(_n_H_32858-_n_HY_32860));
double _n_wob_33493=([&](){auto _n_left_34007=((_n_noise_32901(((_n_x_33489*0.07)+7.0),((_n_y_33491*0.55)-(_n_t_33459*0.9)),0.0)-0.5)*(0.6+(4.0*_n_v_33492)));auto _n_right_34008=((_n_noise_32901((_n_x_33489*0.3),((_n_y_33491*1.3)-(_n_t_33459*2.1)),0.0)-0.5)*(0.3+(1.2*_n_v_33492)));return (_n_left_34007+_n_right_34008);})();
double _n_sx_33494=(_n_x_33489+_n_wob_33493);
if(d::truth((_n_sx_33494<0.0))){d::check_cancel();(void)((_n_sx_33494=0.0));
}
if(d::truth((_n_sx_33494>(_n_W_32857-1.001)))){d::check_cancel();(void)((_n_sx_33494=(_n_W_32857-1.001)));
}
double _n_j_33495=((_n_r_33490*_n_W_32857)+double(d::i32(_n_sx_33494)|d::i32(0.0)));
double _n_f_33496=(_n_sx_33494-double(d::i32(_n_sx_33494)|d::i32(0.0)));
double _n_dash_33497=(0.3+(1.0*([&](){auto _n_argument_34009=0.3;auto _n_argument_34010=0.65;auto _n_argument_34011=_n_noise_32901(((_n_x_33489*0.09)+3.0),((_n_y_33491*(0.7+(0.5*_n_v_33492)))-(_n_t_33459*1.5)),0.0);return _n_smooth_32906(_n_argument_34009,_n_argument_34010,_n_argument_34011);})()));
double _n_rr_33498=(d::at(this->_n_RR_32960,_n_j_33495)+((d::at(this->_n_RR_32960,(_n_j_33495+1.0))-d::at(this->_n_RR_32960,_n_j_33495))*_n_f_33496));
double _n_rg_33499=(d::at(this->_n_RG_32961,_n_j_33495)+((d::at(this->_n_RG_32961,(_n_j_33495+1.0))-d::at(this->_n_RG_32961,_n_j_33495))*_n_f_33496));
double _n_rb_33500=(d::at(this->_n_RB_32962,_n_j_33495)+((d::at(this->_n_RB_32962,(_n_j_33495+1.0))-d::at(this->_n_RB_32962,_n_j_33495))*_n_f_33496));
{double _n_gi_33501=1.0;
for(;d::truth((_n_gi_33501<=this->_n_NG_32963));(void)((_n_gi_33501++))){d::check_cancel();double _n_off_33502=(1.0-d::at(_n_mg_33461,_n_gi_33501));
if(d::truth((_n_off_33502<=0.0))){d::check_cancel();continue;
}
auto _n_binding_34012=d::at(this->_n_dropR_32965,(_n_gi_33501-1.0));
d::Array<float,true> _n_dr_33503=d::at(_n_binding_34012,0.0);
d::Array<float,true> _n_dg_33504=d::at(_n_binding_34012,1.0);
d::Array<float,true> _n_db_33505=d::at(_n_binding_34012,2.0);
(void)((((_n_rr_33498=(_n_rr_33498-((d::at(_n_dr_33503,_n_j_33495)+((d::at(_n_dr_33503,(_n_j_33495+1.0))-d::at(_n_dr_33503,_n_j_33495))*_n_f_33496))*_n_off_33502))),(_n_rg_33499=(_n_rg_33499-((d::at(_n_dg_33504,_n_j_33495)+((d::at(_n_dg_33504,(_n_j_33495+1.0))-d::at(_n_dg_33504,_n_j_33495))*_n_f_33496))*_n_off_33502)))),(_n_rb_33500=(_n_rb_33500-((d::at(_n_db_33505,_n_j_33495)+((d::at(_n_db_33505,(_n_j_33495+1.0))-d::at(_n_db_33505,_n_j_33495))*_n_f_33496))*_n_off_33502)))));
}}
double _n_a_33506=(_n_dash_33497*d::at(this->_n_wet_32928,_n_k_33488));
if(((((d::truth((_n_seen_33484>0.0))&&d::truth((_n_x_33489>=_n_bx0_33485)))&&d::truth((_n_x_33489<=_n_bx1_33486)))&&d::truth((_n_y_33491>_n_fy_33482)))&&d::truth((_n_y_33491<(_n_fy_33482+(2.3*_n_fz_33483)))))){d::check_cancel();if(d::truth(_n_walkerShape_32909((((_n_x_33489+0.5)-_n_fx_33481)/_n_fz_33483),((_n_y_33491-_n_fy_33482)/_n_fz_33483),_n_wk_33479->_p_ph))){d::check_cancel();(void)((_n_a_33506=(_n_a_33506*(1.0-(0.8*_n_seen_33484)))));
}
}
(void)(((([&](){auto&& _n_array_34013=this->_n_FR_32974;auto _n_index_34014=_n_k_33488;auto _n_value_34015=(d::at(_n_array_34013,_n_index_34014)+(d::maximum({0.0,_n_rr_33498})*_n_a_33506));d::put(_n_array_34013,_n_index_34014,_n_value_34015);return _n_value_34015;})(),([&](){auto&& _n_array_34016=this->_n_FG_32975;auto _n_index_34017=_n_k_33488;auto _n_value_34018=(d::at(_n_array_34016,_n_index_34017)+(d::maximum({0.0,_n_rg_33499})*_n_a_33506));d::put(_n_array_34016,_n_index_34017,_n_value_34018);return _n_value_34018;})()),([&](){auto&& _n_array_34019=this->_n_FB_32976;auto _n_index_34020=_n_k_33488;auto _n_value_34021=(d::at(_n_array_34019,_n_index_34020)+(d::maximum({0.0,_n_rb_33500})*_n_a_33506));d::put(_n_array_34019,_n_index_34020,_n_value_34021);return _n_value_34021;})()));
}}
{double _n_li_33507=0.0;
for(;d::truth((_n_li_33507<double(_n_LANTERNS_32898.size())));(void)((_n_li_33507++))){d::check_cancel();double _n_sw_33508=([&](){auto _n_left_34022=(0.05*std::sin(((_n_t_33459*1.1)+d::at(d::at(_n_LANTERNS_32898,_n_li_33507),3.0))));auto _n_right_34023=(0.015*std::sin(((_n_t_33459*2.7)+_n_li_33507)));return (_n_left_34022+_n_right_34023);})();
double _n_ls_33509=d::at(d::at(_n_LANTERNS_32898,_n_li_33507),0.0);
(void)(this->_n_lantern_32941(_n_li_33507,_n_sw_33508,[=]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_k_33510=_a0;
double _n_r_33511=_a1;
double _n_g_33512=_a2;
double _n_b_33513=_a3;
{
if(d::truth((d::at(this->_n_S_32916,_n_k_33510)>_n_ls_33509))){d::check_cancel();return;
}
double _n_f_33514=(d::at(this->_n_fog_32947,_n_k_33510)*0.3);
(void)(((([&](){auto&& _n_array_34024=this->_n_FR_32974;auto _n_index_34025=_n_k_33510;auto _n_value_34026=_n_mix_32907(_n_r_33511,d::at(this->_n_HZR_32948,_n_k_33510),_n_f_33514);d::put(_n_array_34024,_n_index_34025,_n_value_34026);return _n_value_34026;})(),([&](){auto&& _n_array_34027=this->_n_FG_32975;auto _n_index_34028=_n_k_33510;auto _n_value_34029=_n_mix_32907(_n_g_33512,d::at(this->_n_HZG_32949,_n_k_33510),_n_f_33514);d::put(_n_array_34027,_n_index_34028,_n_value_34029);return _n_value_34029;})()),([&](){auto&& _n_array_34030=this->_n_FB_32976;auto _n_index_34031=_n_k_33510;auto _n_value_34032=_n_mix_32907(_n_b_33513,d::at(this->_n_HZB_32950,_n_k_33510),_n_f_33514);d::put(_n_array_34030,_n_index_34031,_n_value_34032);return _n_value_34032;})()));

}
}));
}}
double _n_chase_33515=std::floor((_n_t_33459*6.0));
for(auto &&_n_item_34033:this->_n_bulbs_32939){d::check_cancel();auto _n_binding_34034=_n_item_34033;
double _n_k_33516=d::at(_n_binding_34034,0.0);
double _n_i_33517=d::at(_n_binding_34034,1.0);
{
bool _n_on_33518=(d::mod((_n_i_33517+_n_chase_33515),3.0)!=0.0);
(void)(((([&](){auto&& _n_array_34035=this->_n_FR_32974;auto _n_index_34036=_n_k_33516;auto _n_value_34037=(d::truth(_n_on_33518)?1.0:0.22);d::put(_n_array_34035,_n_index_34036,_n_value_34037);return _n_value_34037;})(),([&](){auto&& _n_array_34038=this->_n_FG_32975;auto _n_index_34039=_n_k_33516;auto _n_value_34040=(d::truth(_n_on_33518)?0.9:0.1);d::put(_n_array_34038,_n_index_34039,_n_value_34040);return _n_value_34040;})()),([&](){auto&& _n_array_34041=this->_n_FB_32976;auto _n_index_34042=_n_k_33516;auto _n_value_34043=(d::truth(_n_on_33518)?0.7:0.06);d::put(_n_array_34041,_n_index_34042,_n_value_34043);return _n_value_34043;})()));

}
}
{
double _n_c_33519=d::mod(_n_t_33459,24.0);
double _n_lamp_33520=(d::truth((_n_c_33519<14.0))?0.0:(d::truth((_n_c_33519<17.0))?1.0:2.0));
double _n_k_33521=(((41.0*_n_W_32857)+99.0)+_n_lamp_33520);
d::Array<double,false> _n_col_33522=d::at(d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.25,1.0,0.55},d::Array<double,false>{1.0,0.75,0.15},d::Array<double,false>{1.0,0.15,0.1}},_n_lamp_33520);
(void)(((([&](){auto&& _n_array_34044=this->_n_FR_32974;auto _n_index_34045=_n_k_33521;auto _n_value_34046=d::at(_n_col_33522,0.0);d::put(_n_array_34044,_n_index_34045,_n_value_34046);return _n_value_34046;})(),([&](){auto&& _n_array_34047=this->_n_FG_32975;auto _n_index_34048=_n_k_33521;auto _n_value_34049=d::at(_n_col_33522,1.0);d::put(_n_array_34047,_n_index_34048,_n_value_34049);return _n_value_34049;})()),([&](){auto&& _n_array_34050=this->_n_FB_32976;auto _n_index_34051=_n_k_33521;auto _n_value_34052=d::at(_n_col_33522,2.0);d::put(_n_array_34050,_n_index_34051,_n_value_34052);return _n_value_34052;})()));
for(auto &&_n_item_34053:d::Array<double,false>{(-d::number(1.0)),1.0,(-d::number(_n_W_32857)),_n_W_32857}){d::check_cancel();double _n_d_33523=_n_item_34053;
(void)(((([&](){auto&& _n_array_34054=this->_n_FR_32974;auto _n_index_34055=(_n_k_33521+_n_d_33523);auto _n_value_34056=(d::at(_n_array_34054,_n_index_34055)+(d::at(_n_col_33522,0.0)*0.12));d::put(_n_array_34054,_n_index_34055,_n_value_34056);return _n_value_34056;})(),([&](){auto&& _n_array_34057=this->_n_FG_32975;auto _n_index_34058=(_n_k_33521+_n_d_33523);auto _n_value_34059=(d::at(_n_array_34057,_n_index_34058)+(d::at(_n_col_33522,1.0)*0.12));d::put(_n_array_34057,_n_index_34058,_n_value_34059);return _n_value_34059;})()),([&](){auto&& _n_array_34060=this->_n_FB_32976;auto _n_index_34061=(_n_k_33521+_n_d_33523);auto _n_value_34062=(d::at(_n_array_34060,_n_index_34061)+(d::at(_n_col_33522,2.0)*0.12));d::put(_n_array_34060,_n_index_34061,_n_value_34062);return _n_value_34062;})()));
}
bool _n_on_33524=(d::mod(_n_t_33459,1.6)<0.35);
double _n_kb_33525=((8.0*_n_W_32857)+99.0);
(void)(((([&](){auto&& _n_array_34063=this->_n_FR_32974;auto _n_index_34064=_n_kb_33525;auto _n_value_34065=(d::truth(_n_on_33524)?1.0:0.2);d::put(_n_array_34063,_n_index_34064,_n_value_34065);return _n_value_34065;})(),([&](){auto&& _n_array_34066=this->_n_FG_32975;auto _n_index_34067=_n_kb_33525;auto _n_value_34068=(d::truth(_n_on_33524)?0.15:0.05);d::put(_n_array_34066,_n_index_34067,_n_value_34068);return _n_value_34068;})()),([&](){auto&& _n_array_34069=this->_n_FB_32976;auto _n_index_34070=_n_kb_33525;auto _n_value_34071=(d::truth(_n_on_33524)?0.1:0.05);d::put(_n_array_34069,_n_index_34070,_n_value_34071);return _n_value_34071;})()));

}
(void)(this->_n_hold_32978.fill(0.0));
if(d::truth((_n_wk_33479->_p_fade>0.0))){d::check_cancel();double _n_f_33526=(0.7*_n_smooth_32906(8.0,26.0,_n_wk_33479->_p_z));
double _n_top_33527=([&](){auto _n_argument_34072=0.0;auto _n_argument_34073=std::floor(((_n_fy_33482-(2.3*_n_fz_33483))-1.0));return d::maximum({_n_argument_34072,_n_argument_34073});})();
{double _n_r_33528=_n_top_33527;
for(;d::truth((_n_r_33528<=([&](){auto _n_argument_34074=(_n_H_32858-1.0);auto _n_argument_34075=std::ceil(_n_fy_33482);return d::minimum({_n_argument_34074,_n_argument_34075});})()));(void)((_n_r_33528++))){d::check_cancel();{double _n_x_33529=_n_bx0_33485;
for(;d::truth((_n_x_33529<=_n_bx1_33486));(void)((_n_x_33529++))){d::check_cancel();double _n_k_33530=((_n_r_33528*_n_W_32857)+_n_x_33529);
if(d::truth((d::at(this->_n_S_32916,_n_k_33530)>=_n_fs_33480))){d::check_cancel();continue;
}
double _n_cov_33531=0.0;
double _n_lit_33532=0.0;
{double _n_q_33533=0.0;
for(;d::truth((_n_q_33533<4.0));(void)((_n_q_33533++))){d::check_cancel();double _n_u_33534=((((_n_x_33529+0.25)+(0.5*double(d::i32(_n_q_33533)&d::i32(1.0))))-_n_fx_33481)/_n_fz_33483);
double _n_v_33535=((((_n_fy_33482-_n_r_33528)-0.25)-(0.5*double(d::i32(_n_q_33533)>>(d::u32(1.0)&31))))/_n_fz_33483);
double _n_sh_33536=_n_walkerShape_32909(_n_u_33534,_n_v_33535,_n_wk_33479->_p_ph);
if(d::truth(_n_sh_33536)){d::check_cancel();(void)((_n_cov_33531=(_n_cov_33531+0.25)));
}
if(d::truth((_n_sh_33536==2.0))){d::check_cancel();(void)((_n_lit_33532=(_n_lit_33532+0.25)));
}
}}
if(d::truth((!d::truth(_n_cov_33531)))){d::check_cancel();continue;
}
double _n_l_33537=(_n_lit_33532/_n_cov_33531);
double _n_cr_33538=(0.006+((_n_l_33537*d::at(this->_n_GR_32957,_n_k_33530))*0.12));
double _n_cg_33539=(0.005+((_n_l_33537*d::at(this->_n_GG_32958,_n_k_33530))*0.12));
double _n_cb_33540=(0.01+((_n_l_33537*d::at(this->_n_GB_32959,_n_k_33530))*0.12));
(void)((((_n_cr_33538=_n_mix_32907(_n_cr_33538,d::at(this->_n_HZR_32948,_n_k_33530),_n_f_33526)),(_n_cg_33539=_n_mix_32907(_n_cg_33539,d::at(this->_n_HZG_32949,_n_k_33530),_n_f_33526))),(_n_cb_33540=_n_mix_32907(_n_cb_33540,d::at(this->_n_HZB_32950,_n_k_33530),_n_f_33526))));
double _n_a_33541=(_n_cov_33531*_n_wk_33479->_p_fade);
(void)(((([&](){auto&& _n_array_34076=this->_n_FR_32974;auto _n_index_34077=_n_k_33530;auto _n_value_34078=_n_mix_32907(d::at(this->_n_FR_32974,_n_k_33530),_n_cr_33538,_n_a_33541);d::put(_n_array_34076,_n_index_34077,_n_value_34078);return _n_value_34078;})(),([&](){auto&& _n_array_34079=this->_n_FG_32975;auto _n_index_34080=_n_k_33530;auto _n_value_34081=_n_mix_32907(d::at(this->_n_FG_32975,_n_k_33530),_n_cg_33539,_n_a_33541);d::put(_n_array_34079,_n_index_34080,_n_value_34081);return _n_value_34081;})()),([&](){auto&& _n_array_34082=this->_n_FB_32976;auto _n_index_34083=_n_k_33530;auto _n_value_34084=_n_mix_32907(d::at(this->_n_FB_32976,_n_k_33530),_n_cb_33540,_n_a_33541);d::put(_n_array_34082,_n_index_34083,_n_value_34084);return _n_value_34084;})()));
(void)(([&](){auto&& _n_array_34085=this->_n_hold_32978;auto _n_index_34086=_n_k_33530;auto _n_value_34087=(_n_a_33541*(1.0-_n_f_33526));d::put(_n_array_34085,_n_index_34086,_n_value_34087);return _n_value_34087;})());
}}
}}
}
{double _n_i_33542=0.0;
for(;d::truth((_n_i_33542<34.0));(void)((_n_i_33542++))){d::check_cancel();double _n_per_33543=(0.7+(0.6*_n_hash_32900(_n_i_33542,301.0)));
double _n_tt_33544=(_n_t_33459+(_n_hash_32900(_n_i_33542,302.0)*_n_per_33543));
double _n_c_33545=std::floor((_n_tt_33544/_n_per_33543));
double _n_a_33546=((_n_tt_33544-(_n_c_33545*_n_per_33543))/_n_per_33543);
double _n_cy_33547=(56.0+(43.0*_n_hash_32900(((_n_i_33542*7.0)+_n_c_33545),303.0)));
double _n_xw_33548=(((_n_hash_32900(((_n_i_33542*5.0)+_n_c_33545),304.0)*2.0)-1.0)*2.7);
double _n_s_33549=((_n_cy_33547-_n_HY_32860)/_n_EYE_32862);
double _n_cx_33550=(_n_VX_32859+(_n_xw_33548*_n_s_33549));
double _n_rad_33551=((0.04+(0.18*_n_a_33546))*_n_s_33549);
double _n_sq_33552=((_n_EYE_32862*_n_s_33549)/_n_F_32861);
double _n_ry_33553=d::maximum({0.6,(_n_rad_33551*_n_sq_33552)});
double _n_b_33554=(std::pow((1.0-_n_a_33546),1.4)*0.8);
{double _n_r_33555=std::floor(((_n_cy_33547-_n_ry_33553)-1.0));
for(;d::truth((_n_r_33555<=std::ceil(((_n_cy_33547+_n_ry_33553)+1.0))));(void)((_n_r_33555++))){d::check_cancel();if((d::truth((_n_r_33555<0.0))||d::truth((_n_r_33555>=_n_H_32858)))){d::check_cancel();continue;
}
{double _n_x_33556=std::floor(((_n_cx_33550-_n_rad_33551)-1.0));
for(;d::truth((_n_x_33556<=std::ceil(((_n_cx_33550+_n_rad_33551)+1.0))));(void)((_n_x_33556++))){d::check_cancel();if((d::truth((_n_x_33556<0.0))||d::truth((_n_x_33556>=_n_W_32857)))){d::check_cancel();continue;
}
double _n_k_33557=((_n_r_33555*_n_W_32857)+_n_x_33556);
if(d::truth((d::at(this->_n_mat_32915,_n_k_33557)!=_n_ROAD_32872))){d::check_cancel();continue;
}
double _n_d_33558=([&](){auto _n_argument_34088=(((_n_x_33556+0.5)-_n_cx_33550)/d::maximum({0.6,_n_rad_33551}));auto _n_argument_34089=(((_n_r_33555+0.5)-_n_cy_33547)/_n_ry_33553);return d::hypot(std::initializer_list<double>{_n_argument_34088,_n_argument_34089});})();
double _n_ring_33559=((std::exp((-d::number(std::pow(((_n_d_33558-1.0)/0.35),2.0))))*_n_b_33554)+((d::truth((_n_a_33546<0.12))&&d::truth((_n_d_33558<0.6)))?0.5:0.0));
if(d::truth((_n_ring_33559<0.02))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_34090=this->_n_FR_32974;auto _n_index_34091=_n_k_33557;auto _n_value_34092=(d::at(_n_array_34090,_n_index_34091)+(_n_ring_33559*(0.4+(d::at(this->_n_RR_32960,_n_k_33557)*2.0))));d::put(_n_array_34090,_n_index_34091,_n_value_34092);return _n_value_34092;})(),([&](){auto&& _n_array_34093=this->_n_FG_32975;auto _n_index_34094=_n_k_33557;auto _n_value_34095=(d::at(_n_array_34093,_n_index_34094)+(_n_ring_33559*(0.44+(d::at(this->_n_RG_32961,_n_k_33557)*2.0))));d::put(_n_array_34093,_n_index_34094,_n_value_34095);return _n_value_34095;})()),([&](){auto&& _n_array_34096=this->_n_FB_32976;auto _n_index_34097=_n_k_33557;auto _n_value_34098=(d::at(_n_array_34096,_n_index_34097)+(_n_ring_33559*(0.55+(d::at(this->_n_RB_32962,_n_k_33557)*2.0))));d::put(_n_array_34096,_n_index_34097,_n_value_34098);return _n_value_34098;})()));
}}
}}
}}
(void)(this->_n_rain_32977.fill(0.0));
for(auto &&_n_item_34099:this->_n_drops_32973){d::check_cancel();auto _n_binding_34100=_n_item_34099;
double _n_x0_33560=d::at(_n_binding_34100,0.0);
double _n_y0_33561=d::at(_n_binding_34100,1.0);
double _n_v_33562=d::at(_n_binding_34100,2.0);
double _n_len_33563=d::at(_n_binding_34100,3.0);
double _n_b_33564=d::at(_n_binding_34100,4.0);
double _n_sl_33565=d::at(_n_binding_34100,5.0);
{
double _n_span_33566=((_n_H_32858+_n_len_33563)+6.0);
double _n_head_33567=(d::mod((_n_y0_33561+(_n_v_33562*_n_t_33459)),_n_span_33566)-3.0);
{double _n_i_33568=0.0;
for(;d::truth((_n_i_33568<_n_len_33563));(void)((_n_i_33568++))){d::check_cancel();double _n_y_33569=(_n_head_33567-_n_i_33568);
double _n_r_33570=std::floor(_n_y_33569);
if((d::truth((_n_r_33570<0.0))||d::truth((_n_r_33570>=_n_H_32858)))){d::check_cancel();continue;
}
double _n_x_33571=std::floor((_n_x0_33560+(_n_sl_33565*_n_y_33569)));
if((d::truth((_n_x_33571<0.0))||d::truth((_n_x_33571>=_n_W_32857)))){d::check_cancel();continue;
}
double _n_k_33572=((_n_r_33570*_n_W_32857)+_n_x_33571);
double _n_a_33573=(_n_b_33564*(1.0-((0.7*_n_i_33568)/_n_len_33563)));
if(d::truth((_n_a_33573>d::at(this->_n_rain_32977,_n_k_33572)))){d::check_cancel();(void)(([&](){auto&& _n_array_34101=this->_n_rain_32977;auto _n_index_34102=_n_k_33572;auto _n_value_34103=_n_a_33573;d::put(_n_array_34101,_n_index_34102,_n_value_34103);return _n_value_34103;})());
}
}}

}
}
{double _n_r_33574=0.0;
for(;d::truth((_n_r_33574<_n_H_32858));(void)((_n_r_33574++))){d::check_cancel();double _n_y_33575=(_n_r_33574+0.5);
double _n_fade_33576=_n_smooth_32906((_n_H_32858+8.0),(_n_H_32858-6.0),_n_y_33575);
{double _n_x_33577=0.0;
for(;d::truth((_n_x_33577<_n_W_32857));(void)((_n_x_33577++))){d::check_cancel();double _n_k_33578=((_n_r_33574*_n_W_32857)+_n_x_33577);
double _n_cr_33579=d::at(this->_n_FR_32974,_n_k_33578);
double _n_cg_33580=d::at(this->_n_FG_32975,_n_k_33578);
double _n_cb_33581=d::at(this->_n_FB_32976,_n_k_33578);
double _n_rn_33582=(d::at(this->_n_rain_32977,_n_k_33578)*(1.0-(0.85*d::at(this->_n_hold_32978,_n_k_33578))));
if(d::truth(_n_rn_33582)){d::check_cancel();(void)((((_n_cr_33579=(_n_cr_33579+(_n_rn_33582*(0.42+(d::at(this->_n_GR_32957,_n_k_33578)*0.8))))),(_n_cg_33580=(_n_cg_33580+(_n_rn_33582*(0.47+(d::at(this->_n_GG_32958,_n_k_33578)*0.8)))))),(_n_cb_33581=(_n_cb_33581+(_n_rn_33582*(0.6+(d::at(this->_n_GB_32959,_n_k_33578)*0.8)))))));
}
(void)((((_n_cr_33579=d::maximum({0.0,_n_cr_33579})),(_n_cg_33580=d::maximum({0.0,_n_cg_33580}))),(_n_cb_33581=d::maximum({0.0,_n_cb_33581}))));
double _n_peak_33583=d::maximum({_n_cr_33579,_n_cg_33580,_n_cb_33581,0.0001});
double _n_fl_33584=(d::at(_n_FLOOR_32880,d::at(this->_n_mat_32915,_n_k_33578))*(1.0-d::at(this->_n_hold_32978,_n_k_33578)));
double _n_level_33585=(_n_clamp_32905((_n_fl_33584+(((1.0-_n_fl_33584)*std::pow(_n_peak_33583,0.64))*0.95)))*_n_fade_33576);
double _n_step_33586=([&](){auto _n_argument_34104=0.0;auto _n_argument_34105=([&](){auto _n_argument_34106=3.0;auto _n_argument_34107=d::round(((_n_level_33585*3.0)+d::at(_n_BAYER_32869,((double(d::i32(_n_r_33574)&d::i32(3.0))*4.0)+double(d::i32(_n_x_33577)&d::i32(3.0))))));return d::minimum({_n_argument_34106,_n_argument_34107});})();return d::maximum({_n_argument_34104,_n_argument_34105});})();
if((d::truth((_n_rn_33582>0.22))&&d::truth((_n_step_33586<(d::truth((_n_rn_33582>0.55))?2.0:1.0))))){d::check_cancel();(void)((_n_step_33586=(d::truth((_n_rn_33582>0.55))?2.0:1.0)));
}
(void)(([&](){auto&& _n_array_34108=this->_n_out_32912;auto _n_index_34109=_n_k_33578;auto _n_value_34110=d::at(_n_DOTS_32867,_n_step_33586);d::put(_n_array_34108,_n_index_34109,_n_value_34110);return _n_value_34110;})());
if(d::truth(_n_color_33460)){d::check_cancel();double _n_want_33587=(d::truth(_n_step_33586)?d::minimum({1.0,((_n_level_33585+0.06)/d::at(_n_COVER_32868,_n_step_33586))}):0.0);
double _n_s_33588=((0.3+(0.7*_n_want_33587))/_n_peak_33583);
(void)(([&](){auto&& _n_array_34111=d::read(_n_color_33460);auto _n_index_34112=_n_k_33578;auto _n_value_34113=([&](){auto _n_argument_34114=_n_clamp_32905((_n_cr_33579*_n_s_33588));auto _n_argument_34115=_n_clamp_32905((_n_cg_33580*_n_s_33588));auto _n_argument_34116=_n_clamp_32905((_n_cb_33581*_n_s_33588));return this->_n_nearest_32914(_n_argument_34114,_n_argument_34115,_n_argument_34116);})();d::put(_n_array_34111,_n_index_34112,_n_value_34113);return _n_value_34113;})());
}
}}
}}
d::Array<d::String,false> _n_lines_33589=d::Array<d::String,false>{};
{double _n_r_33590=0.0;
for(;d::truth((_n_r_33590<_n_H_32858));(void)((_n_r_33590++))){d::check_cancel();(void)(_n_lines_33589.push(d::join(this->_n_out_32912.slice((_n_r_33590*_n_W_32857),((_n_r_33590+1.0)*_n_W_32857)),d::String(u""))));
}}
return d::join(_n_lines_33589,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tokyo-rain").cols)*ascii::catalog_meta("tokyo-rain").rows);auto _env=std::make_shared<_n_Record_33591>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tokyo_rain_meta(){return catalog_meta("tokyo-rain");}
std::unique_ptr<Piece> make_tokyo_rain(const AsciiPieceOptions &o){return std::make_unique<Native_tokyo_rain>(o);}
}
