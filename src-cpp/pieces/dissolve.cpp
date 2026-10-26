// Direct, statically typed C++ from src/pieces/dissolve.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_7870;
struct _n_Record_7871;
struct _n_Record_7898;
struct _n_Record_7988;
struct _n_Record_7989;
struct _n_Record_7997;
struct _n_Record_7870{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_7871> _p_options{};
static std::shared_ptr<_n_Record_7870> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7870>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_7871>>(j["options"]);return out;}
};
struct _n_Record_7871{
d::Array<d::String,false> _p_words{};
static std::shared_ptr<_n_Record_7871> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7871>();out->_p_words=d::decode<d::Array<d::String,false>>(j["words"]);return out;}
};
struct _n_Record_7898{
d::Array<float,true> _p_cover{};
d::Array<int8_t,true> _p_slot{};
static std::shared_ptr<_n_Record_7898> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7898>();out->_p_cover=d::decode<d::Array<float,true>>(j["cover"]);out->_p_slot=d::decode<d::Array<int8_t,true>>(j["slot"]);return out;}
};
struct _n_Record_7988{
std::optional<std::variant<d::String,d::Array<d::String,false>>> _p_words{};
static std::shared_ptr<_n_Record_7988> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7988>();out->_p_words=d::decode<std::optional<std::variant<d::String,d::Array<d::String,false>>>>(j["words"]);return out;}
};
struct _n_Record_7989{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_7989> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7989>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_7997{
d::Array<d::Array<double,false>,false> _p_A{};
d::Array<d::Array<double,false>,false> _p_B{};
d::Array<d::Array<double,false>,false> _p_C{};
d::Array<d::Array<double,false>,false> _p_D{};
d::Array<d::Array<double,false>,false> _p_E{};
d::Array<d::Array<double,false>,false> _p_F{};
d::Array<d::Array<double,false>,false> _p_G{};
d::Array<d::Array<double,false>,false> _p_H{};
d::Array<d::Array<double,false>,false> _p_I{};
d::Array<d::Array<double,false>,false> _p_J{};
d::Array<d::Array<double,false>,false> _p_K{};
d::Array<d::Array<double,false>,false> _p_L{};
d::Array<d::Array<double,false>,false> _p_M{};
d::Array<d::Array<double,false>,false> _p_N{};
d::Array<d::Array<double,false>,false> _p_O{};
d::Array<d::Array<double,false>,false> _p_P{};
d::Array<d::Array<double,false>,false> _p_Q{};
d::Array<d::Array<double,false>,false> _p_R{};
d::Array<d::Array<double,false>,false> _p_S{};
d::Array<d::Array<double,false>,false> _p_T{};
d::Array<d::Array<double,false>,false> _p_U{};
d::Array<d::Array<double,false>,false> _p_V{};
d::Array<d::Array<double,false>,false> _p_W{};
d::Array<d::Array<double,false>,false> _p_X{};
d::Array<d::Array<double,false>,false> _p_Y{};
d::Array<d::Array<double,false>,false> _p_Z{};
d::Array<d::Array<double,false>,false> _p_0{};
d::Array<d::Array<double,false>,false> _p_1{};
d::Array<d::Array<double,false>,false> _p_2{};
d::Array<d::Array<double,false>,false> _p_3{};
d::Array<d::Array<double,false>,false> _p_4{};
d::Array<d::Array<double,false>,false> _p_5{};
d::Array<d::Array<double,false>,false> _p_6{};
d::Array<d::Array<double,false>,false> _p_7{};
d::Array<d::Array<double,false>,false> _p_8{};
d::Array<d::Array<double,false>,false> _p_9{};
d::Array<d::Array<double,false>,false> _p_symbol_2e{};
d::Array<d::Array<double,false>,false> _p_symbol_2c{};
d::Array<d::Array<double,false>,false> _p_symbol_21{};
d::Array<d::Array<double,false>,false> _p_symbol_3f{};
d::Array<d::Array<double,false>,false> _p_symbol_27{};
d::Array<d::Array<double,false>,false> _p_symbol_2d{};
static std::shared_ptr<_n_Record_7997> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_7997>();out->_p_A=d::decode<d::Array<d::Array<double,false>,false>>(j["A"]);out->_p_B=d::decode<d::Array<d::Array<double,false>,false>>(j["B"]);out->_p_C=d::decode<d::Array<d::Array<double,false>,false>>(j["C"]);out->_p_D=d::decode<d::Array<d::Array<double,false>,false>>(j["D"]);out->_p_E=d::decode<d::Array<d::Array<double,false>,false>>(j["E"]);out->_p_F=d::decode<d::Array<d::Array<double,false>,false>>(j["F"]);out->_p_G=d::decode<d::Array<d::Array<double,false>,false>>(j["G"]);out->_p_H=d::decode<d::Array<d::Array<double,false>,false>>(j["H"]);out->_p_I=d::decode<d::Array<d::Array<double,false>,false>>(j["I"]);out->_p_J=d::decode<d::Array<d::Array<double,false>,false>>(j["J"]);out->_p_K=d::decode<d::Array<d::Array<double,false>,false>>(j["K"]);out->_p_L=d::decode<d::Array<d::Array<double,false>,false>>(j["L"]);out->_p_M=d::decode<d::Array<d::Array<double,false>,false>>(j["M"]);out->_p_N=d::decode<d::Array<d::Array<double,false>,false>>(j["N"]);out->_p_O=d::decode<d::Array<d::Array<double,false>,false>>(j["O"]);out->_p_P=d::decode<d::Array<d::Array<double,false>,false>>(j["P"]);out->_p_Q=d::decode<d::Array<d::Array<double,false>,false>>(j["Q"]);out->_p_R=d::decode<d::Array<d::Array<double,false>,false>>(j["R"]);out->_p_S=d::decode<d::Array<d::Array<double,false>,false>>(j["S"]);out->_p_T=d::decode<d::Array<d::Array<double,false>,false>>(j["T"]);out->_p_U=d::decode<d::Array<d::Array<double,false>,false>>(j["U"]);out->_p_V=d::decode<d::Array<d::Array<double,false>,false>>(j["V"]);out->_p_W=d::decode<d::Array<d::Array<double,false>,false>>(j["W"]);out->_p_X=d::decode<d::Array<d::Array<double,false>,false>>(j["X"]);out->_p_Y=d::decode<d::Array<d::Array<double,false>,false>>(j["Y"]);out->_p_Z=d::decode<d::Array<d::Array<double,false>,false>>(j["Z"]);out->_p_0=d::decode<d::Array<d::Array<double,false>,false>>(j["0"]);out->_p_1=d::decode<d::Array<d::Array<double,false>,false>>(j["1"]);out->_p_2=d::decode<d::Array<d::Array<double,false>,false>>(j["2"]);out->_p_3=d::decode<d::Array<d::Array<double,false>,false>>(j["3"]);out->_p_4=d::decode<d::Array<d::Array<double,false>,false>>(j["4"]);out->_p_5=d::decode<d::Array<d::Array<double,false>,false>>(j["5"]);out->_p_6=d::decode<d::Array<d::Array<double,false>,false>>(j["6"]);out->_p_7=d::decode<d::Array<d::Array<double,false>,false>>(j["7"]);out->_p_8=d::decode<d::Array<d::Array<double,false>,false>>(j["8"]);out->_p_9=d::decode<d::Array<d::Array<double,false>,false>>(j["9"]);out->_p_symbol_2e=d::decode<d::Array<d::Array<double,false>,false>>(j["."]);out->_p_symbol_2c=d::decode<d::Array<d::Array<double,false>,false>>(j[","]);out->_p_symbol_21=d::decode<d::Array<d::Array<double,false>,false>>(j["!"]);out->_p_symbol_3f=d::decode<d::Array<d::Array<double,false>,false>>(j["?"]);out->_p_symbol_27=d::decode<d::Array<d::Array<double,false>,false>>(j["'"]);out->_p_symbol_2d=d::decode<d::Array<d::Array<double,false>,false>>(j["-"]);return out;}
};
double _n_hash_7884(double _a0,double _a1);
double _n_ease_7885(double _a0);
double _n_seg_7886(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
std::shared_ptr<_n_Record_7870> _n_meta_7869=[](){return ([&](){auto _n_object_7994=std::make_shared<_n_Record_7870>();_n_object_7994->_p_name=d::String(u"dissolve");_n_object_7994->_p_category=d::String(u"type");_n_object_7994->_p_note=d::String(u"words that crumble to dust and condense into the next");_n_object_7994->_p_cols=64.0;_n_object_7994->_p_rows=13.0;_n_object_7994->_p_fps=20.0;_n_object_7994->_p_options=([&](){auto _n_object_7996=std::make_shared<_n_Record_7871>();_n_object_7996->_p_words=d::Array<d::String,false>{d::String(u"hello"),d::String(u"hola"),d::String(u"ciao"),d::String(u"salut")};return _n_object_7996;})();return _n_object_7994;})();}();
d::Dict<d::String,d::Array<d::Array<double,false>,false>> _n_STROKES_7872=[](){return ([&](){d::Dict<d::String,d::Array<d::Array<double,false>,false>> _n_dictionary_7998;_n_dictionary_7998.set(d::String(u"A"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,6.0,1.6,0.0,2.4,0.0,4.0,6.0},d::Array<double,false>{0.7,4.0,3.3,4.0}});_n_dictionary_7998.set(d::String(u"B"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,0.0,6.0,3.0,6.0,4.0,5.0,4.0,4.0,3.0,3.0,0.0,3.0},d::Array<double,false>{0.0,0.0,2.5,0.0,3.5,1.0,3.5,2.0,2.5,3.0}});_n_dictionary_7998.set(d::String(u"C"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,1.0,3.0,0.0,1.0,0.0,0.0,1.0,0.0,5.0,1.0,6.0,3.0,6.0,4.0,5.0}});_n_dictionary_7998.set(d::String(u"D"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,0.0,6.0,2.5,6.0,4.0,4.5,4.0,1.5,2.5,0.0,0.0,0.0}});_n_dictionary_7998.set(d::String(u"E"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,0.0,0.0,0.0,0.0,6.0,4.0,6.0},d::Array<double,false>{0.0,3.0,3.0,3.0}});_n_dictionary_7998.set(d::String(u"F"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,0.0,0.0,0.0,0.0,6.0},d::Array<double,false>{0.0,3.0,3.0,3.0}});_n_dictionary_7998.set(d::String(u"G"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,1.0,3.0,0.0,1.0,0.0,0.0,1.0,0.0,5.0,1.0,6.0,3.0,6.0,4.0,5.0,4.0,3.0,2.0,3.0}});_n_dictionary_7998.set(d::String(u"H"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,0.0,6.0},d::Array<double,false>{4.0,0.0,4.0,6.0},d::Array<double,false>{0.0,3.0,4.0,3.0}});_n_dictionary_7998.set(d::String(u"I"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0,3.0,0.0},d::Array<double,false>{2.0,0.0,2.0,6.0},d::Array<double,false>{1.0,6.0,3.0,6.0}});_n_dictionary_7998.set(d::String(u"J"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.5,0.0,4.0,0.0},d::Array<double,false>{3.0,0.0,3.0,5.0,2.0,6.0,1.0,6.0,0.0,5.0}});_n_dictionary_7998.set(d::String(u"K"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,0.0,6.0},d::Array<double,false>{4.0,0.0,0.0,3.6},d::Array<double,false>{1.5,2.25,4.0,6.0}});_n_dictionary_7998.set(d::String(u"L"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,0.0,6.0,4.0,6.0}});_n_dictionary_7998.set(d::String(u"M"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,6.0,0.0,0.0,2.0,3.5,4.0,0.0,4.0,6.0}});_n_dictionary_7998.set(d::String(u"N"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,6.0,0.0,0.0,4.0,6.0,4.0,0.0}});_n_dictionary_7998.set(d::String(u"O"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0,3.0,0.0,4.0,1.0,4.0,5.0,3.0,6.0,1.0,6.0,0.0,5.0,0.0,1.0,1.0,0.0}});_n_dictionary_7998.set(d::String(u"P"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,6.0,0.0,0.0,3.0,0.0,4.0,1.0,4.0,2.0,3.0,3.0,0.0,3.0}});_n_dictionary_7998.set(d::String(u"Q"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0,3.0,0.0,4.0,1.0,4.0,5.0,3.0,6.0,1.0,6.0,0.0,5.0,0.0,1.0,1.0,0.0},d::Array<double,false>{2.4,4.4,4.0,6.2}});_n_dictionary_7998.set(d::String(u"R"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,6.0,0.0,0.0,3.0,0.0,4.0,1.0,4.0,2.0,3.0,3.0,0.0,3.0},d::Array<double,false>{2.2,3.0,4.0,6.0}});_n_dictionary_7998.set(d::String(u"S"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,1.0,3.0,0.0,1.0,0.0,0.0,1.0,0.0,2.0,1.0,3.0,3.0,3.0,4.0,4.0,4.0,5.0,3.0,6.0,1.0,6.0,0.0,5.0}});_n_dictionary_7998.set(d::String(u"T"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,4.0,0.0},d::Array<double,false>{2.0,0.0,2.0,6.0}});_n_dictionary_7998.set(d::String(u"U"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,0.0,5.0,1.0,6.0,3.0,6.0,4.0,5.0,4.0,0.0}});_n_dictionary_7998.set(d::String(u"V"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,2.0,6.0,4.0,0.0}});_n_dictionary_7998.set(d::String(u"W"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,1.0,6.0,2.0,2.0,3.0,6.0,4.0,0.0}});_n_dictionary_7998.set(d::String(u"X"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,4.0,6.0},d::Array<double,false>{4.0,0.0,0.0,6.0}});_n_dictionary_7998.set(d::String(u"Y"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,2.0,3.0},d::Array<double,false>{4.0,0.0,2.0,3.0,2.0,6.0}});_n_dictionary_7998.set(d::String(u"Z"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,4.0,0.0,0.0,6.0,4.0,6.0}});_n_dictionary_7998.set(d::String(u"0"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0,2.0,0.0,3.0,1.0,3.0,5.0,2.0,6.0,1.0,6.0,0.0,5.0,0.0,1.0,1.0,0.0}});_n_dictionary_7998.set(d::String(u"1"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.5,1.0,1.5,0.0,1.5,6.0},d::Array<double,false>{0.5,6.0,2.5,6.0}});_n_dictionary_7998.set(d::String(u"2"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,1.0,1.0,0.0,3.0,0.0,4.0,1.0,4.0,2.0,0.0,6.0,4.0,6.0}});_n_dictionary_7998.set(d::String(u"3"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,1.0,1.0,0.0,3.0,0.0,4.0,1.0,4.0,2.0,3.0,3.0,1.5,3.0},d::Array<double,false>{3.0,3.0,4.0,4.0,4.0,5.0,3.0,6.0,1.0,6.0,0.0,5.0}});_n_dictionary_7998.set(d::String(u"4"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{3.0,6.0,3.0,0.0,0.0,4.0,4.0,4.0}});_n_dictionary_7998.set(d::String(u"5"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,0.0,0.0,0.0,0.0,3.0,3.0,3.0,4.0,4.0,4.0,5.0,3.0,6.0,0.0,6.0}});_n_dictionary_7998.set(d::String(u"6"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{3.5,0.0,1.5,0.0,0.0,1.5,0.0,5.0,1.0,6.0,3.0,6.0,4.0,5.0,4.0,4.0,3.0,3.0,1.0,3.0,0.0,4.0}});_n_dictionary_7998.set(d::String(u"7"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,4.0,0.0,1.5,6.0}});_n_dictionary_7998.set(d::String(u"8"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,3.0,0.0,2.0,0.0,1.0,1.0,0.0,3.0,0.0,4.0,1.0,4.0,2.0,3.0,3.0,1.0,3.0,0.0,4.0,0.0,5.0,1.0,6.0,3.0,6.0,4.0,5.0,4.0,4.0,3.0,3.0}});_n_dictionary_7998.set(d::String(u"9"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.5,6.0,2.5,6.0,4.0,4.5,4.0,1.0,3.0,0.0,1.0,0.0,0.0,1.0,0.0,2.0,1.0,3.0,4.0,3.0}});_n_dictionary_7998.set(d::String(u"."),d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.0,6.0,2.0,6.0}});_n_dictionary_7998.set(d::String(u","),d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.0,5.6,1.5,7.0}});_n_dictionary_7998.set(d::String(u"!"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.0,0.0,2.0,4.0},d::Array<double,false>{2.0,6.0,2.0,6.0}});_n_dictionary_7998.set(d::String(u"?"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,1.0,1.0,0.0,3.0,0.0,4.0,1.0,4.0,2.0,2.0,3.5,2.0,4.2},d::Array<double,false>{2.0,6.0,2.0,6.0}});_n_dictionary_7998.set(d::String(u"'"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.0,0.0,2.0,1.5}});_n_dictionary_7998.set(d::String(u"-"),d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,3.0,3.0,3.0}});return _n_dictionary_7998;})();}();
const d::String _n_RAMP_7873=[](){return d::String(u" .·░▒▓█");}();
const double _n_HOLD_7874=[](){return 1.6;}();
const double _n_TRANS_7875=[](){return 2.6;}();
const double _n_STAGGER_7876=[](){return 0.2;}();
const double _n_JITTER_7877=[](){return 0.22;}();
const double _n_ERODE_7878=[](){return 0.3;}();
const double _n_FADE_7879=[](){return 0.5;}();
const double _n_LATER_7880=[](){return 1.0;}();
const double _n_R_7881=[](){return 0.5;}();
const double _n_RD_7882=[](){return 0.6;}();
const double _n_GAP_7883=[](){return 4.0;}();
double _n_hash_7884(double _a0,double _a1){double _n_a_7904=_a0;
double _n_b_7905=_a1;
{
double _n_h_7906=([&](){auto _n_left_7999=d::imul(_n_a_7904,374761393.0);auto _n_right_8000=d::imul(_n_b_7905,668265263.0);return (_n_left_7999+_n_right_8000);})();
(void)((_n_h_7906=d::imul(double(d::i32(_n_h_7906)^d::i32(double(d::u32(_n_h_7906)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_7906)^d::i32(double(d::u32(_n_h_7906)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_7885(double _a0){double _n_x_7907=_a0;
return (d::truth((_n_x_7907<=0.0))?0.0:(d::truth((_n_x_7907>=1.0))?1.0:((_n_x_7907*_n_x_7907)*(3.0-(2.0*_n_x_7907)))));}

double _n_seg_7886(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_7908=_a0;
double _n_y_7909=_a1;
double _n_ax_7910=_a2;
double _n_ay_7911=_a3;
double _n_bx_7912=_a4;
double _n_by_7913=_a5;
{
double _n_dx_7914=(_n_bx_7912-_n_ax_7910);
double _n_dy_7915=(_n_by_7913-_n_ay_7911);
double _n_l_7916=((_n_dx_7914*_n_dx_7914)+(_n_dy_7915*_n_dy_7915));
double _n_k_7917=(d::truth(_n_l_7916)?([&](){auto _n_argument_8001=0.0;auto _n_argument_8002=d::minimum({1.0,((((_n_x_7908-_n_ax_7910)*_n_dx_7914)+((_n_y_7909-_n_ay_7911)*_n_dy_7915))/_n_l_7916)});return d::maximum({_n_argument_8001,_n_argument_8002});})():0.0);
return (d::hypot(std::initializer_list<double>{((_n_x_7908-_n_ax_7910)-(_n_k_7917*_n_dx_7914)),((_n_y_7909-_n_ay_7911)-(_n_k_7917*_n_dy_7915))})-((d::truth(_n_dx_7914)&&d::truth(_n_dy_7915))?_n_RD_7882:_n_R_7881));

}
}

struct Native_dissolve final:ascii::Piece{
std::variant<d::String,d::Array<d::String,false>> _n_words_7887{};
double _n_cols_7888{};
double _n_rows_7889{};
d::Array<d::String,false> _n_given_7890{};
d::Array<d::Array<d::String,false>,false> _n_list_7891{};
double _n_unit_7895{};
double _n_gap_7896{};
d::Array<std::shared_ptr<_n_Record_7898>,false> _n_baked_7897{};
double _n_period_7899{};
d::Array<float,true> _n_val_7900{};
d::Array<float,true> _n_dust_7901{};
std::function<d::String(double,std::shared_ptr<_n_Record_7989>)> _render;
d::Array<d::Array<double,false>,false> _n_glyph_7892(d::String _a0){d::String _n_ch_7919=_a0;
return ([&]()->d::Array<d::Array<double,false>,false>{auto _n_logical_8034=_n_STROKES_7872.get(_n_ch_7919);return d::truth(_n_logical_8034)?_n_logical_8034:(d::truth((_n_ch_7919==d::String(u" ")))?d::Array<d::Array<double,false>,false>{}:_n_STROKES_7872.get(d::String(u"?")));})();}

std::array<double,2> _n_span_7893(d::Array<d::Array<double,false>,false> _a0){d::Array<d::Array<double,false>,false> _n_g_7920=_a0;
{
d::Array<double,false> _n_xs_7921=d::flatMap(_n_g_7920,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{d::Array<double,false> _n_p_7922=_a0;
return d::filter(_n_p_7922,[&]( double _a0,double _a1) mutable ->bool{double _n___7923=_a0;
double _n_i_7924=_a1;
return (d::mod(_n_i_7924,2.0)==0.0);});});
return (d::truth(double(_n_xs_7921.size()))?std::array<double,2>{([&](){d::Array<double> _n_numbers_8035;for(auto _x:_n_xs_7921)_n_numbers_8035.push(_x);return d::minimum(_n_numbers_8035);})(),([&](){d::Array<double> _n_numbers_8036;for(auto _x:_n_xs_7921)_n_numbers_8036.push(_x);return d::maximum(_n_numbers_8036);})()}:std::array<double,2>{0.0,2.0});

}
}

double _n_wide_7894(d::Array<d::String,false> _a0,double _a1){d::Array<d::String,false> _n_w_7925=_a0;
double _n_u_7926=_a1;
return (([&](){auto _n_left_8037=d::reduce(_n_w_7925,[&]( double _a0,d::String _a1) mutable ->double{double _n_a_7927=_a0;
d::String _n_ch_7928=_a1;
return ([&](){auto _n_left_8039=(_n_a_7927+d::round(((2.0*_n_u_7926)*([&](){auto _n_left_8041=d::at(this->_n_span_7893(this->_n_glyph_7892(_n_ch_7928)),1.0);auto _n_right_8042=d::at(this->_n_span_7893(this->_n_glyph_7892(_n_ch_7928)),0.0);return (_n_left_8041-_n_right_8042);})())));auto _n_right_8040=([&](){auto _n_argument_8043=2.0;auto _n_argument_8044=d::round((_n_GAP_7883*_n_u_7926));return d::maximum({_n_argument_8043,_n_argument_8044});})();return (_n_left_8039+_n_right_8040);})();},0.0);auto _n_right_8038=([&](){auto _n_argument_8045=2.0;auto _n_argument_8046=d::round((_n_GAP_7883*_n_u_7926));return d::maximum({_n_argument_8045,_n_argument_8046});})();return (_n_left_8037-_n_right_8038);})()+((4.0*_n_u_7926)*_n_R_7881));}

void _n_splat_7902(double _a0,double _a1,double _a2){double _n_x_7955=_a0;
double _n_y_7956=_a1;
double _n_d_7957=_a2;
{
double _n_c_7958=d::round(_n_x_7955);
double _n_r_7959=d::round(_n_y_7956);
if((((d::truth((_n_c_7958>=0.0))&&d::truth((_n_c_7958<this->_n_cols_7888)))&&d::truth((_n_r_7959>=0.0)))&&d::truth((_n_r_7959<this->_n_rows_7889)))){d::check_cancel();(void)(([&](){auto&& _n_array_8047=this->_n_dust_7901;auto _n_index_8048=((_n_r_7959*this->_n_cols_7888)+_n_c_7958);auto _n_value_8049=d::maximum({d::at(this->_n_dust_7901,((_n_r_7959*this->_n_cols_7888)+_n_c_7958)),_n_d_7957});d::put(_n_array_8047,_n_index_8048,_n_value_8049);return _n_value_8049;})());
}

}
}

explicit Native_dissolve(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_8003=d::decode<std::shared_ptr<_n_Record_7988>>(_options.data);
this->_n_words_7887=(d::present(_n_binding_8003->_p_words)?d::read(_n_binding_8003->_p_words):std::variant<d::String,d::Array<d::String,false>>(_n_meta_7869->_p_options->_p_words));
auto _n_binding_8004=_n_meta_7869;
this->_n_cols_7888=_n_binding_8004->_p_cols;
this->_n_rows_7889=_n_binding_8004->_p_rows;
this->_n_given_7890=d::filter((d::truth(d::isArray(this->_n_words_7887))?std::get<d::Array<d::String,false>>(this->_n_words_7887):d::split(d::string(std::get<d::String>(this->_n_words_7887)),d::Regex(u"[,\\s]+",u""))),d::ToBoolean{});
this->_n_list_7891=d::map((d::truth(double(this->_n_given_7890.size()))?this->_n_given_7890:d::Array<d::String,false>{d::String(u"hello")}),[&]( d::String _a0) mutable ->d::Array<d::String,false>{d::String _n_w_7918=_a0;
return ([&](){d::Array<d::String,false> _n_array_8006;for(const auto &_v:d::upper(d::string(_n_w_7918)))_n_array_8006.push(_v);return _n_array_8006;})();});
this->_n_unit_7895=d::minimum({1.0,((this->_n_rows_7889-2.0)/(6.0+(2.0*_n_R_7881)))});
while((d::truth((this->_n_unit_7895>0.3))&&d::truth((([&](){d::Array<double> _n_numbers_8007;for(auto _x:d::map(this->_n_list_7891,[&]( d::Array<d::String,false> _a0) mutable ->double{d::Array<d::String,false> _n_w_7929=_a0;
return this->_n_wide_7894(_n_w_7929,this->_n_unit_7895);}))_n_numbers_8007.push(_x);return d::maximum(_n_numbers_8007);})()>(this->_n_cols_7888-4.0))))){d::check_cancel();(void)((this->_n_unit_7895=(this->_n_unit_7895-0.02)));
}
this->_n_gap_7896=([&](){auto _n_argument_8008=2.0;auto _n_argument_8009=d::round((_n_GAP_7883*this->_n_unit_7895));return d::maximum({_n_argument_8008,_n_argument_8009});})();
this->_n_baked_7897=d::map(this->_n_list_7891,[&]( d::Array<d::String,false> _a0) mutable ->std::shared_ptr<_n_Record_7898>{d::Array<d::String,false> _n_w_7930=_a0;
{
d::Array<float,true> _n_cover_7931=d::Array<float,true>(size_t((this->_n_cols_7888*this->_n_rows_7889)));
d::Array<int8_t,true> _n_slot_7932=d::Array<int8_t,true>(size_t(this->_n_cols_7888));
double _n_y0_7933=((this->_n_rows_7889/2.0)-(3.0*this->_n_unit_7895));
double _n_pen_7934=d::round((((this->_n_cols_7888-this->_n_wide_7894(_n_w_7930,this->_n_unit_7895))/2.0)+((2.0*this->_n_unit_7895)*_n_R_7881)));
d::Array<double,false> _n_centres_7935=d::Array<double,false>{};
for(auto &&_n_item_8010:_n_w_7930){d::check_cancel();d::String _n_ch_7936=_n_item_8010;
{
d::Array<d::Array<double,false>,false> _n_g_7937=this->_n_glyph_7892(_n_ch_7936);
auto _n_binding_8011=this->_n_span_7893(_n_g_7937);
double _n_lo_7938=d::at(_n_binding_8011,0.0);
double _n_hi_7939=d::at(_n_binding_8011,1.0);
double _n_width_7940=d::round(((2.0*this->_n_unit_7895)*(_n_hi_7939-_n_lo_7938)));
(void)(_n_centres_7935.push((_n_pen_7934+(_n_width_7940/2.0))));
{double _n_r_7941=0.0;
for(;d::truth((_n_r_7941<this->_n_rows_7889));(void)((_n_r_7941++))){d::check_cancel();{double _n_c_7942=d::maximum({0.0,(_n_pen_7934-3.0)});
for(;d::truth((_n_c_7942<d::minimum({this->_n_cols_7888,((_n_pen_7934+_n_width_7940)+3.0)})));(void)((_n_c_7942++))){d::check_cancel();double _n_hit_7943=0.0;
{double _n_j_7944=0.0;
for(;d::truth((_n_j_7944<3.0));(void)((_n_j_7944++))){d::check_cancel();{double _n_i_7945=0.0;
for(;d::truth((_n_i_7945<3.0));(void)((_n_i_7945++))){d::check_cancel();double _n_gx_7946=(_n_lo_7938+(((_n_c_7942+((_n_i_7945+0.5)/3.0))-_n_pen_7934)/(2.0*this->_n_unit_7895)));
double _n_gy_7947=(((_n_r_7941+((_n_j_7944+0.5)/3.0))-_n_y0_7933)/this->_n_unit_7895);
double _n_d_7948=9.0;
for(auto &&_n_item_8012:_n_g_7937){d::check_cancel();d::Array<double,false> _n_p_7949=_n_item_8012;
{double _n_k_7950=0.0;
for(;d::truth(((_n_k_7950+3.0)<double(_n_p_7949.size())));(void)((_n_k_7950=(_n_k_7950+2.0)))){d::check_cancel();(void)((_n_d_7948=([&](){auto _n_argument_8013=_n_d_7948;auto _n_argument_8014=_n_seg_7886(_n_gx_7946,_n_gy_7947,d::at(_n_p_7949,_n_k_7950),d::at(_n_p_7949,(_n_k_7950+1.0)),d::at(_n_p_7949,(_n_k_7950+2.0)),d::at(_n_p_7949,(_n_k_7950+3.0)));return d::minimum({_n_argument_8013,_n_argument_8014});})()));
}}
}
if(d::truth((_n_d_7948<=0.0))){d::check_cancel();(void)((_n_hit_7943++));
}
}}
}}
(void)(([&](){auto&& _n_array_8015=_n_cover_7931;auto _n_index_8016=((_n_r_7941*this->_n_cols_7888)+_n_c_7942);auto _n_value_8017=d::maximum({d::at(_n_cover_7931,((_n_r_7941*this->_n_cols_7888)+_n_c_7942)),(_n_hit_7943/9.0)});d::put(_n_array_8015,_n_index_8016,_n_value_8017);return _n_value_8017;})());
}}
}}
(void)((_n_pen_7934=(_n_pen_7934+(_n_width_7940+this->_n_gap_7896))));

}
}
{double _n_c_7951=0.0;
for(;d::truth((_n_c_7951<this->_n_cols_7888));(void)((_n_c_7951++))){d::check_cancel();double _n_best_7952=0.0;
(void)(d::forEach(_n_centres_7935,[&]( double _a0,double _a1) mutable ->std::variant<double,bool>{double _n_x_7953=_a0;
double _n_i_7954=_a1;
return ([&]()->std::variant<double,bool>{auto _n_logical_8018=([&](){auto _n_left_8019=std::fabs((_n_x_7953-_n_c_7951));auto _n_right_8020=std::fabs((d::at(_n_centres_7935,_n_best_7952)-_n_c_7951));return (_n_left_8019<_n_right_8020);})();return d::truth(_n_logical_8018)?std::variant<double,bool>((_n_best_7952=_n_i_7954)):std::variant<double,bool>(_n_logical_8018);})();}));
(void)(([&](){auto&& _n_array_8021=_n_slot_7932;auto _n_index_8022=_n_c_7951;auto _n_value_8023=_n_best_7952;d::put(_n_array_8021,_n_index_8022,_n_value_8023);return _n_value_8023;})());
}}
return ([&](){auto _n_object_8025=std::make_shared<_n_Record_7898>();_n_object_8025->_p_cover=_n_cover_7931;_n_object_8025->_p_slot=_n_slot_7932;return _n_object_8025;})();

}
});
this->_n_period_7899=(double(this->_n_list_7891.size())*(_n_HOLD_7874+_n_TRANS_7875));
this->_n_val_7900=d::Array<float,true>(size_t((this->_n_cols_7888*this->_n_rows_7889)));
this->_n_dust_7901=d::Array<float,true>(size_t((this->_n_cols_7888*this->_n_rows_7889)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_7989> _a1) mutable ->d::String{double _n_t_7960=_a0;
{
double _n_u_7961=d::mod((d::mod((_n_t_7960+1.0),this->_n_period_7899)+this->_n_period_7899),this->_n_period_7899);
double _n_n_7962=std::floor((_n_u_7961/(_n_HOLD_7874+_n_TRANS_7875)));
double _n_tau_7963=((_n_u_7961-(_n_n_7962*(_n_HOLD_7874+_n_TRANS_7875)))-_n_HOLD_7874);
std::shared_ptr<_n_Record_7898> _n_A_7964=d::at(this->_n_baked_7897,_n_n_7962);
std::shared_ptr<_n_Record_7898> _n_B_7965=d::at(this->_n_baked_7897,d::mod((_n_n_7962+1.0),double(this->_n_list_7891.size())));
(void)(this->_n_dust_7901.fill(0.0));
{double _n_r_7966=0.0;
for(;d::truth((_n_r_7966<this->_n_rows_7889));(void)((_n_r_7966++))){d::check_cancel();{double _n_c_7967=0.0;
for(;d::truth((_n_c_7967<this->_n_cols_7888));(void)((_n_c_7967++))){d::check_cancel();double _n_k_7968=((_n_r_7966*this->_n_cols_7888)+_n_c_7967);
double _n_a_7969=d::at(_n_A_7964->_p_cover,_n_k_7968);
double _n_b_7970=d::at(_n_B_7965->_p_cover,_n_k_7968);
double _n_v_7971=_n_a_7969;
if(d::truth((_n_tau_7963>0.0))){d::check_cancel();(void)((_n_v_7971=0.0));
if(d::truth((_n_a_7969>0.0))){d::check_cancel();double _n_go_7972=((d::at(_n_A_7964->_p_slot,_n_c_7967)*_n_STAGGER_7876)+(_n_hash_7884(_n_k_7968,_n_n_7962)*_n_JITTER_7877));
double _n_e_7973=((_n_tau_7963-_n_go_7972)/_n_ERODE_7878);
if((d::truth((_n_a_7969<=0.3))||d::truth((_n_hash_7884(_n_k_7968,(_n_n_7962+7.0))>0.5)))){d::check_cancel();(void)((_n_v_7971=(_n_a_7969*(1.0-_n_ease_7885(_n_e_7973)))));
}else {d::check_cancel();if(d::truth((_n_e_7973<1.0))){d::check_cancel();(void)((_n_v_7971=(_n_a_7969*(1.0-(0.5*d::maximum({0.0,_n_e_7973}))))));
}else {d::check_cancel();double _n_age_7974=((_n_tau_7963-_n_go_7972)-_n_ERODE_7878);
double _n_life_7975=(0.5+(0.35*_n_hash_7884(_n_k_7968,(_n_n_7962+57.0))));
if(d::truth((_n_age_7974<_n_life_7975))){d::check_cancel();double _n_vx_7976=(0.6+(1.4*_n_hash_7884(_n_k_7968,(_n_n_7962+31.0))));
double _n_vy_7977=(0.3+(0.6*_n_hash_7884(_n_k_7968,(_n_n_7962+83.0))));
(void)(this->_n_splat_7902(((_n_c_7967+0.5)+(_n_vx_7976*_n_age_7974)),((_n_r_7966+(_n_vy_7977*_n_age_7974))+((4.0*_n_age_7974)*_n_age_7974)),(0.5*(1.0-((0.7*_n_age_7974)/_n_life_7975)))));
}
}
}
}
if(d::truth((_n_b_7970>0.0))){d::check_cancel();double _n_land_7978=((_n_LATER_7880+(d::at(_n_B_7965->_p_slot,_n_c_7967)*_n_STAGGER_7876))+(_n_hash_7884(_n_k_7968,(_n_n_7962+977.0))*_n_JITTER_7877));
if(d::truth((_n_tau_7963>=_n_land_7978))){d::check_cancel();(void)((_n_v_7971=([&](){auto _n_argument_8026=_n_v_7971;auto _n_argument_8027=(_n_b_7970*(d::truth((_n_b_7970>0.3))?(0.4+(0.6*_n_ease_7885(((_n_tau_7963-_n_land_7978)/_n_FADE_7879)))):_n_ease_7885(((_n_tau_7963-_n_land_7978)/_n_FADE_7879))));return d::maximum({_n_argument_8026,_n_argument_8027});})()));
}else {d::check_cancel();if((d::truth((_n_b_7970>0.3))&&d::truth((_n_hash_7884(_n_k_7968,(_n_n_7962+9.0))<0.55)))){d::check_cancel();double _n_life_7979=(0.45+(0.3*_n_hash_7884(_n_k_7968,(_n_n_7962+211.0))));
double _n_f_7980=((_n_land_7978-_n_tau_7963)/_n_life_7979);
if(d::truth((_n_f_7980<1.0))){d::check_cancel();double _n_q_7981=(_n_f_7980*_n_f_7980);
double _n_th_7982=(6.283*_n_hash_7884(_n_k_7968,(_n_n_7962+401.0)));
double _n_d_7983=(0.8+(1.2*_n_hash_7884(_n_k_7968,(_n_n_7962+613.0))));
(void)(([&](){auto _n_argument_8028=(_n_c_7967+(((1.8*_n_d_7983)*std::cos(_n_th_7982))*_n_q_7981));auto _n_argument_8029=(_n_r_7966+((_n_d_7983*std::sin(_n_th_7982))*_n_q_7981));auto _n_argument_8030=(0.17+(0.3*(1.0-_n_f_7980)));return this->_n_splat_7902(_n_argument_8028,_n_argument_8029,_n_argument_8030);})());
}
}
}
}
}
(void)(([&](){auto&& _n_array_8031=this->_n_val_7900;auto _n_index_8032=_n_k_7968;auto _n_value_8033=_n_v_7971;d::put(_n_array_8031,_n_index_8032,_n_value_8033);return _n_value_8033;})());
}}
}}
d::Array<d::String,false> _n_lines_7984=d::Array<d::String,false>{};
{double _n_r_7985=0.0;
for(;d::truth((_n_r_7985<this->_n_rows_7889));(void)((_n_r_7985++))){d::check_cancel();d::String _n_line_7986=d::String(u"");
{double _n_c_7987=0.0;
for(;d::truth((_n_c_7987<this->_n_cols_7888));(void)((_n_c_7987++))){d::check_cancel();(void)((_n_line_7986=(d::string(_n_line_7986)+d::string(d::at(_n_RAMP_7873,d::round((d::maximum({d::at(this->_n_val_7900,((_n_r_7985*this->_n_cols_7888)+_n_c_7987)),d::at(this->_n_dust_7901,((_n_r_7985*this->_n_cols_7888)+_n_c_7987))})*(double(_n_RAMP_7873.size())-1.0))))))));
}}
(void)(_n_lines_7984.push(_n_line_7986));
}}
return d::join(_n_lines_7984,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("dissolve").cols)*ascii::catalog_meta("dissolve").rows);auto _env=std::make_shared<_n_Record_7989>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &dissolve_meta(){return catalog_meta("dissolve");}
std::unique_ptr<Piece> make_dissolve(const AsciiPieceOptions &o){return std::make_unique<Native_dissolve>(o);}
}
