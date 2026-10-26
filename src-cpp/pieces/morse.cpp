// Direct, statically typed C++ from src/pieces/morse.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22061;
struct _n_Record_22062;
struct _n_Record_22121;
struct _n_Record_22122;
struct _n_Record_22130;
struct _n_Record_22061{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_22062> _p_options{};
static std::shared_ptr<_n_Record_22061> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22061>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_22062>>(j["options"]);return out;}
};
struct _n_Record_22062{
d::String _p_text{};
static std::shared_ptr<_n_Record_22062> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22062>();out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_22121{
std::optional<d::String> _p_text{};
static std::shared_ptr<_n_Record_22121> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22121>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);return out;}
};
struct _n_Record_22122{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22122> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22122>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_22130{
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
static std::shared_ptr<_n_Record_22130> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22130>();out->_p_A=d::decode<d::String>(j["A"]);out->_p_B=d::decode<d::String>(j["B"]);out->_p_C=d::decode<d::String>(j["C"]);out->_p_D=d::decode<d::String>(j["D"]);out->_p_E=d::decode<d::String>(j["E"]);out->_p_F=d::decode<d::String>(j["F"]);out->_p_G=d::decode<d::String>(j["G"]);out->_p_H=d::decode<d::String>(j["H"]);out->_p_I=d::decode<d::String>(j["I"]);out->_p_J=d::decode<d::String>(j["J"]);out->_p_K=d::decode<d::String>(j["K"]);out->_p_L=d::decode<d::String>(j["L"]);out->_p_M=d::decode<d::String>(j["M"]);out->_p_N=d::decode<d::String>(j["N"]);out->_p_O=d::decode<d::String>(j["O"]);out->_p_P=d::decode<d::String>(j["P"]);out->_p_Q=d::decode<d::String>(j["Q"]);out->_p_R=d::decode<d::String>(j["R"]);out->_p_S=d::decode<d::String>(j["S"]);out->_p_T=d::decode<d::String>(j["T"]);out->_p_U=d::decode<d::String>(j["U"]);out->_p_V=d::decode<d::String>(j["V"]);out->_p_W=d::decode<d::String>(j["W"]);out->_p_X=d::decode<d::String>(j["X"]);out->_p_Y=d::decode<d::String>(j["Y"]);out->_p_Z=d::decode<d::String>(j["Z"]);out->_p_0=d::decode<d::String>(j["0"]);out->_p_1=d::decode<d::String>(j["1"]);out->_p_2=d::decode<d::String>(j["2"]);out->_p_3=d::decode<d::String>(j["3"]);out->_p_4=d::decode<d::String>(j["4"]);out->_p_5=d::decode<d::String>(j["5"]);out->_p_6=d::decode<d::String>(j["6"]);out->_p_7=d::decode<d::String>(j["7"]);out->_p_8=d::decode<d::String>(j["8"]);out->_p_9=d::decode<d::String>(j["9"]);out->_p_symbol_2e=d::decode<d::String>(j["."]);out->_p_symbol_2c=d::decode<d::String>(j[","]);out->_p_symbol_3f=d::decode<d::String>(j["?"]);out->_p_symbol_21=d::decode<d::String>(j["!"]);out->_p_symbol_27=d::decode<d::String>(j["'"]);out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_2d=d::decode<d::String>(j["-"]);out->_p_symbol_26=d::decode<d::String>(j["&"]);return out;}
};

std::shared_ptr<_n_Record_22061> _n_meta_22060=[](){return ([&](){auto _n_object_22127=std::make_shared<_n_Record_22061>();_n_object_22127->_p_name=d::String(u"morse");_n_object_22127->_p_category=d::String(u"type");_n_object_22127->_p_note=d::String(u"a lamp keying morse, the marks on a tape, letters decoded");_n_object_22127->_p_cols=64.0;_n_object_22127->_p_rows=19.0;_n_object_22127->_p_fps=15.0;_n_object_22127->_p_options=([&](){auto _n_object_22129=std::make_shared<_n_Record_22062>();_n_object_22129->_p_text=d::String(u"hello world");return _n_object_22129;})();return _n_object_22127;})();}();
d::Dict<d::String,d::String> _n_CODE_22063=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_22131;_n_dictionary_22131.set(d::String(u"A"),d::String(u".-"));_n_dictionary_22131.set(d::String(u"B"),d::String(u"-..."));_n_dictionary_22131.set(d::String(u"C"),d::String(u"-.-."));_n_dictionary_22131.set(d::String(u"D"),d::String(u"-.."));_n_dictionary_22131.set(d::String(u"E"),d::String(u"."));_n_dictionary_22131.set(d::String(u"F"),d::String(u"..-."));_n_dictionary_22131.set(d::String(u"G"),d::String(u"--."));_n_dictionary_22131.set(d::String(u"H"),d::String(u"...."));_n_dictionary_22131.set(d::String(u"I"),d::String(u".."));_n_dictionary_22131.set(d::String(u"J"),d::String(u".---"));_n_dictionary_22131.set(d::String(u"K"),d::String(u"-.-"));_n_dictionary_22131.set(d::String(u"L"),d::String(u".-.."));_n_dictionary_22131.set(d::String(u"M"),d::String(u"--"));_n_dictionary_22131.set(d::String(u"N"),d::String(u"-."));_n_dictionary_22131.set(d::String(u"O"),d::String(u"---"));_n_dictionary_22131.set(d::String(u"P"),d::String(u".--."));_n_dictionary_22131.set(d::String(u"Q"),d::String(u"--.-"));_n_dictionary_22131.set(d::String(u"R"),d::String(u".-."));_n_dictionary_22131.set(d::String(u"S"),d::String(u"..."));_n_dictionary_22131.set(d::String(u"T"),d::String(u"-"));_n_dictionary_22131.set(d::String(u"U"),d::String(u"..-"));_n_dictionary_22131.set(d::String(u"V"),d::String(u"...-"));_n_dictionary_22131.set(d::String(u"W"),d::String(u".--"));_n_dictionary_22131.set(d::String(u"X"),d::String(u"-..-"));_n_dictionary_22131.set(d::String(u"Y"),d::String(u"-.--"));_n_dictionary_22131.set(d::String(u"Z"),d::String(u"--.."));_n_dictionary_22131.set(d::String(u"0"),d::String(u"-----"));_n_dictionary_22131.set(d::String(u"1"),d::String(u".----"));_n_dictionary_22131.set(d::String(u"2"),d::String(u"..---"));_n_dictionary_22131.set(d::String(u"3"),d::String(u"...--"));_n_dictionary_22131.set(d::String(u"4"),d::String(u"....-"));_n_dictionary_22131.set(d::String(u"5"),d::String(u"....."));_n_dictionary_22131.set(d::String(u"6"),d::String(u"-...."));_n_dictionary_22131.set(d::String(u"7"),d::String(u"--..."));_n_dictionary_22131.set(d::String(u"8"),d::String(u"---.."));_n_dictionary_22131.set(d::String(u"9"),d::String(u"----."));_n_dictionary_22131.set(d::String(u"."),d::String(u".-.-.-"));_n_dictionary_22131.set(d::String(u","),d::String(u"--..--"));_n_dictionary_22131.set(d::String(u"?"),d::String(u"..--.."));_n_dictionary_22131.set(d::String(u"!"),d::String(u"-.-.--"));_n_dictionary_22131.set(d::String(u"'"),d::String(u".----."));_n_dictionary_22131.set(d::String(u"/"),d::String(u"-..-."));_n_dictionary_22131.set(d::String(u"-"),d::String(u"-....-"));_n_dictionary_22131.set(d::String(u"&"),d::String(u".-..."));return _n_dictionary_22131;})();}();
const double _n_UNIT_22064=[](){return 0.12;}();
const d::String _n_RAMP_22065=[](){return d::String(u" ·:░▒▓█");}();

struct Native_morse final:ascii::Piece{
d::String _n_text_22066{};
double _n_cols_22067{};
double _n_rows_22068{};
d::Array<double,false> _n_on_22069{};
d::Array<std::shared_ptr<std::tuple<d::String,double,double>>,false> _n_letters_22070{};
double _n_at_22071{};
double _n_L_22072{};
double _n_cx_22074{};
double _n_cy_22075{};
double _n_head_22076{};
double _n_tape_22077{};
double _n_warm_22078{};
double _n_t0_22079{};
d::Array<d::Array<d::String,false>,false> _n_grid_22080{};
std::function<d::String(double,std::shared_ptr<_n_Record_22122>)> _render;
bool _n_lit_22073(double _a0){double _n_x_22089=_a0;
return (d::at(this->_n_on_22069,d::mod((d::mod(_n_x_22089,this->_n_L_22072)+this->_n_L_22072),this->_n_L_22072))==1.0);}

void _n_put_22081(double _a0,double _a1,d::String _a2){double _n_r_22091=_a0;
double _n_c_22092=_a1;
d::String _n_s_22093=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_22168;for(const auto &_v:_n_s_22093)_n_array_22168.push(_v);return _n_array_22168;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_22094=_a0;
double _n_i_22095=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_22169=([&]()->bool{auto _n_logical_22173=([&]()->bool{auto _n_logical_22174=([&]()->bool{auto _n_logical_22175=(_n_r_22091>=0.0);return d::truth(_n_logical_22175)?(_n_r_22091<this->_n_rows_22068):_n_logical_22175;})();return d::truth(_n_logical_22174)?((_n_c_22092+_n_i_22095)>=0.0):_n_logical_22174;})();return d::truth(_n_logical_22173)?((_n_c_22092+_n_i_22095)<this->_n_cols_22067):_n_logical_22173;})();return d::truth(_n_logical_22169)?std::variant<d::String,bool>(([&](){auto&& _n_array_22170=d::at(this->_n_grid_22080,_n_r_22091);auto _n_index_22171=(_n_c_22092+_n_i_22095);auto _n_value_22172=_n_ch_22094;d::put(_n_array_22170,_n_index_22171,_n_value_22172);return _n_value_22172;})()):std::variant<d::String,bool>(_n_logical_22169);})();});}

explicit Native_morse(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_22132=d::decode<std::shared_ptr<_n_Record_22121>>(_options.data);
this->_n_text_22066=(d::present(_n_binding_22132->_p_text)?d::read(_n_binding_22132->_p_text):_n_meta_22060->_p_options->_p_text);
auto _n_binding_22133=_n_meta_22060;
this->_n_cols_22067=_n_binding_22133->_p_cols;
this->_n_rows_22068=_n_binding_22133->_p_rows;
this->_n_on_22069=d::Array<double,false>{};
this->_n_letters_22070=d::Array<std::shared_ptr<std::tuple<d::String,double,double>>,false>{};
this->_n_at_22071=0.0;
for(auto &&_n_item_22134:d::chars(d::upper(d::string(this->_n_text_22066)))){d::check_cancel();d::String _n_ch_22083=_n_item_22134;
{
d::String _n_code_22084=_n_CODE_22063.get(_n_ch_22083);
if(d::truth((!d::truth(_n_code_22084)))){d::check_cancel();(void)((this->_n_at_22071=(this->_n_at_22071+4.0)));
continue;
}
double _n_start_22085=this->_n_at_22071;
for(auto &&_n_item_22135:d::chars(_n_code_22084)){d::check_cancel();d::String _n_m_22086=_n_item_22135;
{
double _n_len_22087=(d::truth((_n_m_22086==d::String(u".")))?1.0:3.0);
{double _n_i_22088=0.0;
for(;d::truth((_n_i_22088<_n_len_22087));(void)((_n_i_22088++))){d::check_cancel();(void)(([&](){auto&& _n_array_22136=this->_n_on_22069;auto _n_index_22137=(this->_n_at_22071+_n_i_22088);auto _n_value_22138=1.0;d::put(_n_array_22136,_n_index_22137,_n_value_22138);return _n_value_22138;})());
}}
(void)((this->_n_at_22071=(this->_n_at_22071+(_n_len_22087+1.0))));

}
}
(void)(this->_n_letters_22070.push(std::make_shared<std::tuple<d::String,double,double>>(_n_ch_22083,_n_start_22085,(this->_n_at_22071-1.0))));
(void)((this->_n_at_22071=(this->_n_at_22071+2.0)));

}
}
this->_n_L_22072=d::maximum({(this->_n_at_22071+12.0),20.0});
this->_n_cx_22074=31.0;
this->_n_cy_22075=6.0;
this->_n_head_22076=(this->_n_cols_22067-7.0);
this->_n_tape_22077=16.0;
this->_n_warm_22078=d::minimum({45.0,(this->_n_L_22072-1.0)});
while((d::truth((!d::truth(this->_n_lit_22073(this->_n_warm_22078))))&&d::truth((this->_n_warm_22078<(this->_n_L_22072*2.0))))){d::check_cancel();(void)((this->_n_warm_22078++));
}
this->_n_t0_22079=((this->_n_warm_22078+0.5)*_n_UNIT_22064);
this->_n_grid_22080=d::Array<d::Array<d::String,false>,false>{};
{double _n_r_22090=0.0;
for(;d::truth((_n_r_22090<this->_n_rows_22068));(void)((_n_r_22090++))){d::check_cancel();(void)(this->_n_grid_22080.push(d::Array<d::String,false>(size_t(this->_n_cols_22067)).fill(d::String(u" "))));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_22122> _a1) mutable ->d::String{double _n_t_22096=_a0;
auto _n_binding_22141=(d::present(_a1)?_a1:([&](){auto _n_object_22140=std::make_shared<_n_Record_22122>();return _n_object_22140;})());
bool _n_paper_22097=(d::present(_n_binding_22141->_p_paper)?d::read(_n_binding_22141->_p_paper):false);
{
double _n_now_22098=((_n_t_22096+this->_n_t0_22079)/_n_UNIT_22064);
double _n_unit_22099=std::floor(_n_now_22098);
double _n_glow_22100=(d::truth(this->_n_lit_22073(_n_unit_22099))?1.0:((d::truth(this->_n_lit_22073((_n_unit_22099-1.0)))&&d::truth(((_n_now_22098-_n_unit_22099)<0.5)))?0.35:0.0));
for(auto &&_n_item_22142:this->_n_grid_22080){d::check_cancel();d::Array<d::String,false> _n_row_22101=_n_item_22142;
(void)(_n_row_22101.fill(d::String(u" ")));
}
{double _n_r_22102=0.0;
for(;d::truth((_n_r_22102<12.0));(void)((_n_r_22102++))){d::check_cancel();{double _n_c_22103=(this->_n_cx_22074-10.0);
for(;d::truth((_n_c_22103<=(this->_n_cx_22074+10.0)));(void)((_n_c_22103++))){d::check_cancel();double _n_dx_22104=((_n_c_22103-this->_n_cx_22074)/2.0);
double _n_dy_22105=(_n_r_22102-this->_n_cy_22075);
double _n_d_22106=d::hypot(std::initializer_list<double>{_n_dx_22104,_n_dy_22105});
if(d::truth((_n_d_22106<=2.75))){d::check_cancel();double _n_glint_22107=(((d::truth((_n_dx_22104<(-d::number(0.3))))&&d::truth((_n_dy_22105<(-d::number(0.3)))))&&d::truth((std::fabs((_n_d_22106-1.9))<0.45)))?0.34:0.0);
double _n_b_22108=(d::truth(_n_glow_22100)?(_n_glow_22100*(0.62+(0.38*(1.0-std::pow((_n_d_22106/2.75),2.0))))):_n_glint_22107);
double _n_i_22109=d::round((_n_b_22108*(double(_n_RAMP_22065.size())-1.0)));
(void)(([&](){auto&& _n_array_22143=d::at(this->_n_grid_22080,_n_r_22102);auto _n_index_22144=_n_c_22103;auto _n_value_22145=d::at(_n_RAMP_22065,(d::truth(_n_paper_22097)?((double(_n_RAMP_22065.size())-1.0)-_n_i_22109):_n_i_22109));d::put(_n_array_22143,_n_index_22144,_n_value_22145);return _n_value_22145;})());
}else {d::check_cancel();if((d::truth((_n_d_22106>3.2))&&d::truth((_n_d_22106<=4.15)))){d::check_cancel();(void)(([&](){auto&& _n_array_22146=d::at(this->_n_grid_22080,_n_r_22102);auto _n_index_22147=_n_c_22103;auto _n_value_22148=(d::truth((_n_d_22106>3.8))?d::String(u"▓"):d::String(u"█"));d::put(_n_array_22146,_n_index_22147,_n_value_22148);return _n_value_22148;})());
}
}
}}
}}
if(d::truth(_n_glow_22100)){d::check_cancel();double _n_n_22110=(d::truth((_n_glow_22100==1.0))?3.0:1.0);
{double _n_k_22111=0.0;
for(;d::truth((_n_k_22111<_n_n_22110));(void)((_n_k_22111++))){d::check_cancel();(void)(this->_n_put_22081(this->_n_cy_22075,((this->_n_cx_22074-13.0)-(2.0*_n_k_22111)),d::String(u"─")));
(void)(this->_n_put_22081(this->_n_cy_22075,((this->_n_cx_22074+13.0)+(2.0*_n_k_22111)),d::String(u"─")));
(void)(this->_n_put_22081(((this->_n_cy_22075-5.0)-_n_k_22111),this->_n_cx_22074,d::String(u"│")));
(void)(this->_n_put_22081(((this->_n_cy_22075-4.0)-_n_k_22111),((this->_n_cx_22074-6.0)-_n_k_22111),d::String(u"╲")));
(void)(this->_n_put_22081(((this->_n_cy_22075-4.0)-_n_k_22111),((this->_n_cx_22074+6.0)+_n_k_22111),d::String(u"╱")));
}}
}
{double _n_r_22112=this->_n_cy_22075;
for(;d::truth((_n_r_22112<(this->_n_cy_22075+5.0)));(void)((_n_r_22112++))){d::check_cancel();(void)((this->_n_put_22081(_n_r_22112,(this->_n_cx_22074-10.0),d::String(u"│")),this->_n_put_22081(_n_r_22112,(this->_n_cx_22074+10.0),d::String(u"│"))));
}}
(void)(this->_n_put_22081(this->_n_cy_22075,(this->_n_cx_22074-10.0),d::String(u"o")));
(void)(this->_n_put_22081(this->_n_cy_22075,(this->_n_cx_22074+10.0),d::String(u"o")));
(void)(([&](){auto _n_argument_22149=(this->_n_cy_22075+5.0);auto _n_argument_22150=(this->_n_cx_22074-10.0);auto _n_argument_22151=(d::string(([&](){auto _n_left_22152=(d::string((d::string(d::String(u"╰"))+d::string(d::repeat(d::String(u"─"),9.0))))+d::string(d::String(u"┬")));auto _n_right_22153=d::repeat(d::String(u"─"),9.0);return (d::string(_n_left_22152)+d::string(_n_right_22153));})())+d::string(d::String(u"╯")));return this->_n_put_22081(_n_argument_22149,_n_argument_22150,_n_argument_22151);})());
(void)(this->_n_put_22081((this->_n_cy_22075+6.0),this->_n_cx_22074,d::String(u"│")));
(void)(this->_n_put_22081((this->_n_cy_22075+7.0),(this->_n_cx_22074-5.0),d::String(u"▄▄▄▄█▀█▄▄▄▄")));
(void)(([&](){auto _n_argument_22154=(this->_n_tape_22077-1.0);auto _n_argument_22155=0.0;auto _n_argument_22156=d::repeat(d::String(u"─"),this->_n_cols_22067);return this->_n_put_22081(_n_argument_22154,_n_argument_22155,_n_argument_22156);})());
(void)(([&](){auto _n_argument_22157=(this->_n_tape_22077+1.0);auto _n_argument_22158=0.0;auto _n_argument_22159=d::repeat(d::String(u"─"),this->_n_cols_22067);return this->_n_put_22081(_n_argument_22157,_n_argument_22158,_n_argument_22159);})());
{double _n_c_22113=0.0;
for(;d::truth((_n_c_22113<=this->_n_head_22076));(void)((_n_c_22113++))){d::check_cancel();if(d::truth(this->_n_lit_22073((_n_unit_22099-(this->_n_head_22076-_n_c_22113))))){d::check_cancel();(void)(([&](){auto&& _n_array_22160=d::at(this->_n_grid_22080,this->_n_tape_22077);auto _n_index_22161=_n_c_22113;auto _n_value_22162=d::String(u"█");d::put(_n_array_22160,_n_index_22161,_n_value_22162);return _n_value_22162;})());
}
}}
(void)(this->_n_put_22081((this->_n_tape_22077-1.0),this->_n_head_22076,d::String(u"┬")));
(void)(this->_n_put_22081((this->_n_tape_22077+1.0),this->_n_head_22076,d::String(u"┴")));
double _n_lap_22114=std::floor((_n_unit_22099/this->_n_L_22072));
{double _n_k_22115=(_n_lap_22114-1.0);
for(;d::truth((_n_k_22115<=_n_lap_22114));(void)((_n_k_22115++))){d::check_cancel();for(auto &&_n_item_22163:this->_n_letters_22070){d::check_cancel();auto _n_binding_22164=_n_item_22163;
d::String _n_ch_22116=std::get<0>(*_n_binding_22164);
double _n_s_22117=std::get<1>(*_n_binding_22164);
double _n_e_22118=std::get<2>(*_n_binding_22164);
{
double _n_end_22119=((_n_k_22115*this->_n_L_22072)+_n_e_22118);
if(d::truth((_n_end_22119>(_n_unit_22099-1.0)))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_22165=(this->_n_tape_22077+2.0);auto _n_argument_22166=(this->_n_head_22076-(_n_unit_22099-d::round(((_n_k_22115*this->_n_L_22072)+((_n_s_22117+_n_e_22118)/2.0)))));auto _n_argument_22167=_n_ch_22116;return this->_n_put_22081(_n_argument_22165,_n_argument_22166,_n_argument_22167);})());

}
}
}}
return d::join(d::map(this->_n_grid_22080,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_22120=_a0;
return d::join(_n_row_22120,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("morse").cols)*ascii::catalog_meta("morse").rows);auto _env=std::make_shared<_n_Record_22122>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &morse_meta(){return catalog_meta("morse");}
std::unique_ptr<Piece> make_morse(const AsciiPieceOptions &o){return std::make_unique<Native_morse>(o);}
}
