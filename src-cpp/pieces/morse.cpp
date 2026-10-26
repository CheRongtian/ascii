// Direct, statically typed C++ from src/pieces/morse.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22060;
struct _n_Record_22061;
struct _n_Record_22120;
struct _n_Record_22121;
struct _n_Record_22129;
struct _n_Record_22060{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_22061> _p_options{};
static std::shared_ptr<_n_Record_22060> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22060>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_22061>>(j["options"]);return out;}
};
struct _n_Record_22061{
d::String _p_text{};
static std::shared_ptr<_n_Record_22061> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22061>();out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_22120{
std::optional<d::String> _p_text{};
static std::shared_ptr<_n_Record_22120> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22120>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);return out;}
};
struct _n_Record_22121{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22121> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22121>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_22129{
d::String _p_A{};
d::String _p_B{};
d::String _p_C{};
d::String _p_D{};
d::String _p_E{};
d::String _p_F{};
d::String _p_G{};
d::String _p_H{};
d::String _p_I{};
d::String _p_J{};
d::String _p_K{};
d::String _p_L{};
d::String _p_M{};
d::String _p_N{};
d::String _p_O{};
d::String _p_P{};
d::String _p_Q{};
d::String _p_R{};
d::String _p_S{};
d::String _p_T{};
d::String _p_U{};
d::String _p_V{};
d::String _p_W{};
d::String _p_X{};
d::String _p_Y{};
d::String _p_Z{};
d::String _p_0{};
d::String _p_1{};
d::String _p_2{};
d::String _p_3{};
d::String _p_4{};
d::String _p_5{};
d::String _p_6{};
d::String _p_7{};
d::String _p_8{};
d::String _p_9{};
d::String _p_symbol_2e{};
d::String _p_symbol_2c{};
d::String _p_symbol_3f{};
d::String _p_symbol_21{};
d::String _p_symbol_27{};
d::String _p_symbol_2f{};
d::String _p_symbol_2d{};
d::String _p_symbol_26{};
static std::shared_ptr<_n_Record_22129> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22129>();out->_p_A=d::decode<d::String>(j["A"]);out->_p_B=d::decode<d::String>(j["B"]);out->_p_C=d::decode<d::String>(j["C"]);out->_p_D=d::decode<d::String>(j["D"]);out->_p_E=d::decode<d::String>(j["E"]);out->_p_F=d::decode<d::String>(j["F"]);out->_p_G=d::decode<d::String>(j["G"]);out->_p_H=d::decode<d::String>(j["H"]);out->_p_I=d::decode<d::String>(j["I"]);out->_p_J=d::decode<d::String>(j["J"]);out->_p_K=d::decode<d::String>(j["K"]);out->_p_L=d::decode<d::String>(j["L"]);out->_p_M=d::decode<d::String>(j["M"]);out->_p_N=d::decode<d::String>(j["N"]);out->_p_O=d::decode<d::String>(j["O"]);out->_p_P=d::decode<d::String>(j["P"]);out->_p_Q=d::decode<d::String>(j["Q"]);out->_p_R=d::decode<d::String>(j["R"]);out->_p_S=d::decode<d::String>(j["S"]);out->_p_T=d::decode<d::String>(j["T"]);out->_p_U=d::decode<d::String>(j["U"]);out->_p_V=d::decode<d::String>(j["V"]);out->_p_W=d::decode<d::String>(j["W"]);out->_p_X=d::decode<d::String>(j["X"]);out->_p_Y=d::decode<d::String>(j["Y"]);out->_p_Z=d::decode<d::String>(j["Z"]);out->_p_0=d::decode<d::String>(j["0"]);out->_p_1=d::decode<d::String>(j["1"]);out->_p_2=d::decode<d::String>(j["2"]);out->_p_3=d::decode<d::String>(j["3"]);out->_p_4=d::decode<d::String>(j["4"]);out->_p_5=d::decode<d::String>(j["5"]);out->_p_6=d::decode<d::String>(j["6"]);out->_p_7=d::decode<d::String>(j["7"]);out->_p_8=d::decode<d::String>(j["8"]);out->_p_9=d::decode<d::String>(j["9"]);out->_p_symbol_2e=d::decode<d::String>(j["."]);out->_p_symbol_2c=d::decode<d::String>(j[","]);out->_p_symbol_3f=d::decode<d::String>(j["?"]);out->_p_symbol_21=d::decode<d::String>(j["!"]);out->_p_symbol_27=d::decode<d::String>(j["'"]);out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_2d=d::decode<d::String>(j["-"]);out->_p_symbol_26=d::decode<d::String>(j["&"]);return out;}
};

std::shared_ptr<_n_Record_22060> _n_meta_22059=[](){return ([&](){auto _n_object_22126=std::make_shared<_n_Record_22060>();_n_object_22126->_p_name=d::String(u"morse");_n_object_22126->_p_category=d::String(u"type");_n_object_22126->_p_note=d::String(u"a lamp keying morse, the marks on a tape, letters decoded");_n_object_22126->_p_cols=64.0;_n_object_22126->_p_rows=19.0;_n_object_22126->_p_fps=15.0;_n_object_22126->_p_options=([&](){auto _n_object_22128=std::make_shared<_n_Record_22061>();_n_object_22128->_p_text=d::String(u"hello world");return _n_object_22128;})();return _n_object_22126;})();}();
d::Dict<d::String,d::String> _n_CODE_22062=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_22130;_n_dictionary_22130.set(d::String(u"A"),d::String(u".-"));_n_dictionary_22130.set(d::String(u"B"),d::String(u"-..."));_n_dictionary_22130.set(d::String(u"C"),d::String(u"-.-."));_n_dictionary_22130.set(d::String(u"D"),d::String(u"-.."));_n_dictionary_22130.set(d::String(u"E"),d::String(u"."));_n_dictionary_22130.set(d::String(u"F"),d::String(u"..-."));_n_dictionary_22130.set(d::String(u"G"),d::String(u"--."));_n_dictionary_22130.set(d::String(u"H"),d::String(u"...."));_n_dictionary_22130.set(d::String(u"I"),d::String(u".."));_n_dictionary_22130.set(d::String(u"J"),d::String(u".---"));_n_dictionary_22130.set(d::String(u"K"),d::String(u"-.-"));_n_dictionary_22130.set(d::String(u"L"),d::String(u".-.."));_n_dictionary_22130.set(d::String(u"M"),d::String(u"--"));_n_dictionary_22130.set(d::String(u"N"),d::String(u"-."));_n_dictionary_22130.set(d::String(u"O"),d::String(u"---"));_n_dictionary_22130.set(d::String(u"P"),d::String(u".--."));_n_dictionary_22130.set(d::String(u"Q"),d::String(u"--.-"));_n_dictionary_22130.set(d::String(u"R"),d::String(u".-."));_n_dictionary_22130.set(d::String(u"S"),d::String(u"..."));_n_dictionary_22130.set(d::String(u"T"),d::String(u"-"));_n_dictionary_22130.set(d::String(u"U"),d::String(u"..-"));_n_dictionary_22130.set(d::String(u"V"),d::String(u"...-"));_n_dictionary_22130.set(d::String(u"W"),d::String(u".--"));_n_dictionary_22130.set(d::String(u"X"),d::String(u"-..-"));_n_dictionary_22130.set(d::String(u"Y"),d::String(u"-.--"));_n_dictionary_22130.set(d::String(u"Z"),d::String(u"--.."));_n_dictionary_22130.set(d::String(u"0"),d::String(u"-----"));_n_dictionary_22130.set(d::String(u"1"),d::String(u".----"));_n_dictionary_22130.set(d::String(u"2"),d::String(u"..---"));_n_dictionary_22130.set(d::String(u"3"),d::String(u"...--"));_n_dictionary_22130.set(d::String(u"4"),d::String(u"....-"));_n_dictionary_22130.set(d::String(u"5"),d::String(u"....."));_n_dictionary_22130.set(d::String(u"6"),d::String(u"-...."));_n_dictionary_22130.set(d::String(u"7"),d::String(u"--..."));_n_dictionary_22130.set(d::String(u"8"),d::String(u"---.."));_n_dictionary_22130.set(d::String(u"9"),d::String(u"----."));_n_dictionary_22130.set(d::String(u"."),d::String(u".-.-.-"));_n_dictionary_22130.set(d::String(u","),d::String(u"--..--"));_n_dictionary_22130.set(d::String(u"?"),d::String(u"..--.."));_n_dictionary_22130.set(d::String(u"!"),d::String(u"-.-.--"));_n_dictionary_22130.set(d::String(u"'"),d::String(u".----."));_n_dictionary_22130.set(d::String(u"/"),d::String(u"-..-."));_n_dictionary_22130.set(d::String(u"-"),d::String(u"-....-"));_n_dictionary_22130.set(d::String(u"&"),d::String(u".-..."));return _n_dictionary_22130;})();}();
const double _n_UNIT_22063=[](){return 0.12;}();
const d::String _n_RAMP_22064=[](){return d::String(u" ·:░▒▓█");}();

struct Native_morse final:ascii::Piece{
d::String _n_text_22065{};
double _n_cols_22066{};
double _n_rows_22067{};
d::Array<double,false> _n_on_22068{};
d::Array<std::shared_ptr<std::tuple<d::String,double,double>>,false> _n_letters_22069{};
double _n_at_22070{};
double _n_L_22071{};
double _n_cx_22073{};
double _n_cy_22074{};
double _n_head_22075{};
double _n_tape_22076{};
double _n_warm_22077{};
double _n_t0_22078{};
d::Array<d::Array<d::String,false>,false> _n_grid_22079{};
std::function<d::String(double,std::shared_ptr<_n_Record_22121>)> _render;
bool _n_lit_22072(double _a0){double _n_x_22088=_a0;
return (d::at(this->_n_on_22068,d::mod((d::mod(_n_x_22088,this->_n_L_22071)+this->_n_L_22071),this->_n_L_22071))==1.0);}

void _n_put_22080(double _a0,double _a1,d::String _a2){double _n_r_22090=_a0;
double _n_c_22091=_a1;
d::String _n_s_22092=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_22167;for(const auto &_v:_n_s_22092)_n_array_22167.push(_v);return _n_array_22167;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_22093=_a0;
double _n_i_22094=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_22168=([&]()->bool{auto _n_logical_22172=([&]()->bool{auto _n_logical_22173=([&]()->bool{auto _n_logical_22174=(_n_r_22090>=0.0);return d::truth(_n_logical_22174)?(_n_r_22090<this->_n_rows_22067):_n_logical_22174;})();return d::truth(_n_logical_22173)?((_n_c_22091+_n_i_22094)>=0.0):_n_logical_22173;})();return d::truth(_n_logical_22172)?((_n_c_22091+_n_i_22094)<this->_n_cols_22066):_n_logical_22172;})();return d::truth(_n_logical_22168)?std::variant<d::String,bool>(([&](){auto&& _n_array_22169=d::at(this->_n_grid_22079,_n_r_22090);auto _n_index_22170=(_n_c_22091+_n_i_22094);auto _n_value_22171=_n_ch_22093;d::put(_n_array_22169,_n_index_22170,_n_value_22171);return _n_value_22171;})()):std::variant<d::String,bool>(_n_logical_22168);})();});}

explicit Native_morse(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_22131=d::decode<std::shared_ptr<_n_Record_22120>>(_options.data);
this->_n_text_22065=(d::present(_n_binding_22131->_p_text)?d::read(_n_binding_22131->_p_text):_n_meta_22059->_p_options->_p_text);
auto _n_binding_22132=_n_meta_22059;
this->_n_cols_22066=_n_binding_22132->_p_cols;
this->_n_rows_22067=_n_binding_22132->_p_rows;
this->_n_on_22068=d::Array<double,false>{};
this->_n_letters_22069=d::Array<std::shared_ptr<std::tuple<d::String,double,double>>,false>{};
this->_n_at_22070=0.0;
for(auto &&_n_item_22133:d::chars(d::upper(d::string(this->_n_text_22065)))){d::check_cancel();d::String _n_ch_22082=_n_item_22133;
{
d::String _n_code_22083=_n_CODE_22062.get(_n_ch_22082);
if(d::truth((!d::truth(_n_code_22083)))){d::check_cancel();(void)((this->_n_at_22070=(this->_n_at_22070+4.0)));
continue;
}
double _n_start_22084=this->_n_at_22070;
for(auto &&_n_item_22134:d::chars(_n_code_22083)){d::check_cancel();d::String _n_m_22085=_n_item_22134;
{
double _n_len_22086=(d::truth((_n_m_22085==d::String(u".")))?1.0:3.0);
{double _n_i_22087=0.0;
for(;d::truth((_n_i_22087<_n_len_22086));(void)((_n_i_22087++))){d::check_cancel();(void)(([&](){auto&& _n_array_22135=this->_n_on_22068;auto _n_index_22136=(this->_n_at_22070+_n_i_22087);auto _n_value_22137=1.0;d::put(_n_array_22135,_n_index_22136,_n_value_22137);return _n_value_22137;})());
}}
(void)((this->_n_at_22070=(this->_n_at_22070+(_n_len_22086+1.0))));

}
}
(void)(this->_n_letters_22069.push(std::make_shared<std::tuple<d::String,double,double>>(_n_ch_22082,_n_start_22084,(this->_n_at_22070-1.0))));
(void)((this->_n_at_22070=(this->_n_at_22070+2.0)));

}
}
this->_n_L_22071=d::maximum({(this->_n_at_22070+12.0),20.0});
this->_n_cx_22073=31.0;
this->_n_cy_22074=6.0;
this->_n_head_22075=(this->_n_cols_22066-7.0);
this->_n_tape_22076=16.0;
this->_n_warm_22077=d::minimum({45.0,(this->_n_L_22071-1.0)});
while((d::truth((!d::truth(this->_n_lit_22072(this->_n_warm_22077))))&&d::truth((this->_n_warm_22077<(this->_n_L_22071*2.0))))){d::check_cancel();(void)((this->_n_warm_22077++));
}
this->_n_t0_22078=((this->_n_warm_22077+0.5)*_n_UNIT_22063);
this->_n_grid_22079=d::Array<d::Array<d::String,false>,false>{};
{double _n_r_22089=0.0;
for(;d::truth((_n_r_22089<this->_n_rows_22067));(void)((_n_r_22089++))){d::check_cancel();(void)(this->_n_grid_22079.push(d::Array<d::String,false>(size_t(this->_n_cols_22066)).fill(d::String(u" "))));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_22121> _a1) mutable ->d::String{double _n_t_22095=_a0;
auto _n_binding_22140=(d::present(_a1)?_a1:([&](){auto _n_object_22139=std::make_shared<_n_Record_22121>();return _n_object_22139;})());
bool _n_paper_22096=(d::present(_n_binding_22140->_p_paper)?d::read(_n_binding_22140->_p_paper):false);
{
double _n_now_22097=((_n_t_22095+this->_n_t0_22078)/_n_UNIT_22063);
double _n_unit_22098=std::floor(_n_now_22097);
double _n_glow_22099=(d::truth(this->_n_lit_22072(_n_unit_22098))?1.0:((d::truth(this->_n_lit_22072((_n_unit_22098-1.0)))&&d::truth(((_n_now_22097-_n_unit_22098)<0.5)))?0.35:0.0));
for(auto &&_n_item_22141:this->_n_grid_22079){d::check_cancel();d::Array<d::String,false> _n_row_22100=_n_item_22141;
(void)(_n_row_22100.fill(d::String(u" ")));
}
{double _n_r_22101=0.0;
for(;d::truth((_n_r_22101<12.0));(void)((_n_r_22101++))){d::check_cancel();{double _n_c_22102=(this->_n_cx_22073-10.0);
for(;d::truth((_n_c_22102<=(this->_n_cx_22073+10.0)));(void)((_n_c_22102++))){d::check_cancel();double _n_dx_22103=((_n_c_22102-this->_n_cx_22073)/2.0);
double _n_dy_22104=(_n_r_22101-this->_n_cy_22074);
double _n_d_22105=d::hypot(std::initializer_list<double>{_n_dx_22103,_n_dy_22104});
if(d::truth((_n_d_22105<=2.75))){d::check_cancel();double _n_glint_22106=(((d::truth((_n_dx_22103<(-d::number(0.3))))&&d::truth((_n_dy_22104<(-d::number(0.3)))))&&d::truth((std::fabs((_n_d_22105-1.9))<0.45)))?0.34:0.0);
double _n_b_22107=(d::truth(_n_glow_22099)?(_n_glow_22099*(0.62+(0.38*(1.0-std::pow((_n_d_22105/2.75),2.0))))):_n_glint_22106);
double _n_i_22108=d::round((_n_b_22107*(double(_n_RAMP_22064.size())-1.0)));
(void)(([&](){auto&& _n_array_22142=d::at(this->_n_grid_22079,_n_r_22101);auto _n_index_22143=_n_c_22102;auto _n_value_22144=d::at(_n_RAMP_22064,(d::truth(_n_paper_22096)?((double(_n_RAMP_22064.size())-1.0)-_n_i_22108):_n_i_22108));d::put(_n_array_22142,_n_index_22143,_n_value_22144);return _n_value_22144;})());
}else {d::check_cancel();if((d::truth((_n_d_22105>3.2))&&d::truth((_n_d_22105<=4.15)))){d::check_cancel();(void)(([&](){auto&& _n_array_22145=d::at(this->_n_grid_22079,_n_r_22101);auto _n_index_22146=_n_c_22102;auto _n_value_22147=(d::truth((_n_d_22105>3.8))?d::String(u"▓"):d::String(u"█"));d::put(_n_array_22145,_n_index_22146,_n_value_22147);return _n_value_22147;})());
}
}
}}
}}
if(d::truth(_n_glow_22099)){d::check_cancel();double _n_n_22109=(d::truth((_n_glow_22099==1.0))?3.0:1.0);
{double _n_k_22110=0.0;
for(;d::truth((_n_k_22110<_n_n_22109));(void)((_n_k_22110++))){d::check_cancel();(void)(this->_n_put_22080(this->_n_cy_22074,((this->_n_cx_22073-13.0)-(2.0*_n_k_22110)),d::String(u"─")));
(void)(this->_n_put_22080(this->_n_cy_22074,((this->_n_cx_22073+13.0)+(2.0*_n_k_22110)),d::String(u"─")));
(void)(this->_n_put_22080(((this->_n_cy_22074-5.0)-_n_k_22110),this->_n_cx_22073,d::String(u"│")));
(void)(this->_n_put_22080(((this->_n_cy_22074-4.0)-_n_k_22110),((this->_n_cx_22073-6.0)-_n_k_22110),d::String(u"╲")));
(void)(this->_n_put_22080(((this->_n_cy_22074-4.0)-_n_k_22110),((this->_n_cx_22073+6.0)+_n_k_22110),d::String(u"╱")));
}}
}
{double _n_r_22111=this->_n_cy_22074;
for(;d::truth((_n_r_22111<(this->_n_cy_22074+5.0)));(void)((_n_r_22111++))){d::check_cancel();(void)((this->_n_put_22080(_n_r_22111,(this->_n_cx_22073-10.0),d::String(u"│")),this->_n_put_22080(_n_r_22111,(this->_n_cx_22073+10.0),d::String(u"│"))));
}}
(void)(this->_n_put_22080(this->_n_cy_22074,(this->_n_cx_22073-10.0),d::String(u"o")));
(void)(this->_n_put_22080(this->_n_cy_22074,(this->_n_cx_22073+10.0),d::String(u"o")));
(void)(([&](){auto _n_argument_22148=(this->_n_cy_22074+5.0);auto _n_argument_22149=(this->_n_cx_22073-10.0);auto _n_argument_22150=(d::string(([&](){auto _n_left_22151=(d::string((d::string(d::String(u"╰"))+d::string(d::repeat(d::String(u"─"),9.0))))+d::string(d::String(u"┬")));auto _n_right_22152=d::repeat(d::String(u"─"),9.0);return (d::string(_n_left_22151)+d::string(_n_right_22152));})())+d::string(d::String(u"╯")));return this->_n_put_22080(_n_argument_22148,_n_argument_22149,_n_argument_22150);})());
(void)(this->_n_put_22080((this->_n_cy_22074+6.0),this->_n_cx_22073,d::String(u"│")));
(void)(this->_n_put_22080((this->_n_cy_22074+7.0),(this->_n_cx_22073-5.0),d::String(u"▄▄▄▄█▀█▄▄▄▄")));
(void)(([&](){auto _n_argument_22153=(this->_n_tape_22076-1.0);auto _n_argument_22154=0.0;auto _n_argument_22155=d::repeat(d::String(u"─"),this->_n_cols_22066);return this->_n_put_22080(_n_argument_22153,_n_argument_22154,_n_argument_22155);})());
(void)(([&](){auto _n_argument_22156=(this->_n_tape_22076+1.0);auto _n_argument_22157=0.0;auto _n_argument_22158=d::repeat(d::String(u"─"),this->_n_cols_22066);return this->_n_put_22080(_n_argument_22156,_n_argument_22157,_n_argument_22158);})());
{double _n_c_22112=0.0;
for(;d::truth((_n_c_22112<=this->_n_head_22075));(void)((_n_c_22112++))){d::check_cancel();if(d::truth(this->_n_lit_22072((_n_unit_22098-(this->_n_head_22075-_n_c_22112))))){d::check_cancel();(void)(([&](){auto&& _n_array_22159=d::at(this->_n_grid_22079,this->_n_tape_22076);auto _n_index_22160=_n_c_22112;auto _n_value_22161=d::String(u"█");d::put(_n_array_22159,_n_index_22160,_n_value_22161);return _n_value_22161;})());
}
}}
(void)(this->_n_put_22080((this->_n_tape_22076-1.0),this->_n_head_22075,d::String(u"┬")));
(void)(this->_n_put_22080((this->_n_tape_22076+1.0),this->_n_head_22075,d::String(u"┴")));
double _n_lap_22113=std::floor((_n_unit_22098/this->_n_L_22071));
{double _n_k_22114=(_n_lap_22113-1.0);
for(;d::truth((_n_k_22114<=_n_lap_22113));(void)((_n_k_22114++))){d::check_cancel();for(auto &&_n_item_22162:this->_n_letters_22069){d::check_cancel();auto _n_binding_22163=_n_item_22162;
d::String _n_ch_22115=std::get<0>(*_n_binding_22163);
double _n_s_22116=std::get<1>(*_n_binding_22163);
double _n_e_22117=std::get<2>(*_n_binding_22163);
{
double _n_end_22118=((_n_k_22114*this->_n_L_22071)+_n_e_22117);
if(d::truth((_n_end_22118>(_n_unit_22098-1.0)))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_22164=(this->_n_tape_22076+2.0);auto _n_argument_22165=(this->_n_head_22075-(_n_unit_22098-d::round(((_n_k_22114*this->_n_L_22071)+((_n_s_22116+_n_e_22117)/2.0)))));auto _n_argument_22166=_n_ch_22115;return this->_n_put_22080(_n_argument_22164,_n_argument_22165,_n_argument_22166);})());

}
}
}}
return d::join(d::map(this->_n_grid_22079,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_22119=_a0;
return d::join(_n_row_22119,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("morse").cols)*ascii::catalog_meta("morse").rows);auto _env=std::make_shared<_n_Record_22121>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &morse_meta(){return catalog_meta("morse");}
std::unique_ptr<Piece> make_morse(const AsciiPieceOptions &o){return std::make_unique<Native_morse>(o);}
}
