// Direct, statically typed C++ from src/pieces/spring.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30178;
struct _n_Record_30283;
struct _n_Record_30178{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_30178> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30178>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_30283{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_30283> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30283>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
void _n_curve_30180(d::Array<d::Array<double,false>,false> _a0,std::function<void(double,double,d::String,double)> _a1);
void _n_run_30181(d::Array<d::Array<double,false>,false> _a0,double _a1,double _a2,bool _a3,std::function<void(double,double,d::String,double)> _a4);
std::shared_ptr<_n_Record_30178> _n_meta_30177=[](){return ([&](){auto _n_object_30286=std::make_shared<_n_Record_30178>();_n_object_30286->_p_name=d::String(u"spring");_n_object_30286->_p_category=d::String(u"shapes");_n_object_30286->_p_note=d::String(u"a weight bouncing on a coil spring, its coils bunching");_n_object_30286->_p_cols=40.0;_n_object_30286->_p_rows=28.0;_n_object_30286->_p_fps=30.0;return _n_object_30286;})();}();
const d::String _n_RAMP_30179=[](){return d::String(u".:-=+*#%@");}();
d::Array<d::String,false> _n_DRUM_30182=[](){return d::Array<d::String,false>{d::String(u"  .-----------.  "),d::String(u" (      o      ) "),d::String(u" |`-----------'| "),d::String(u" |9887766543210| "),d::String(u" |9887766543210| "),d::String(u"  `-----------'  ")};}();
void _n_curve_30180(d::Array<d::Array<double,false>,false> _a0,std::function<void(double,double,d::String,double)> _a1){d::Array<d::Array<double,false>,false> _n_P_30202=_a0;
std::function<void(double,double,d::String,double)> _n_put_30203=_a1;
{
auto _n_steep_30208=[&]( double _a0) mutable ->bool{double _n_i_30209=_a0;
return ([&](){auto _n_left_30287=std::fabs((d::at(d::at(_n_P_30202,(_n_i_30209+1.0)),1.0)-d::at(d::at(_n_P_30202,_n_i_30209),1.0)));auto _n_right_30288=std::fabs((d::at(d::at(_n_P_30202,(_n_i_30209+1.0)),0.0)-d::at(d::at(_n_P_30202,_n_i_30209),0.0)));return (_n_left_30287>_n_right_30288);})();};
auto _n_dir_30210=[&]( double _a0) mutable ->double{double _n_i_30211=_a0;
return d::sign(([&](){auto _n_left_30289=d::at(d::at(_n_P_30202,(_n_i_30211+1.0)),(d::truth(_n_steep_30208(_n_i_30211))?1.0:0.0));auto _n_right_30290=d::at(d::at(_n_P_30202,_n_i_30211),(d::truth(_n_steep_30208(_n_i_30211))?1.0:0.0));return (_n_left_30289-_n_right_30290);})());};
{double _n_s_30212=0.0;
for(;d::truth((_n_s_30212<(double(_n_P_30202.size())-1.0)));){d::check_cancel();double _n_e_30213=(_n_s_30212+1.0);
while(((d::truth((_n_e_30213<(double(_n_P_30202.size())-1.0)))&&d::truth(([&](){auto _n_left_30291=_n_steep_30208(_n_e_30213);auto _n_right_30292=_n_steep_30208(_n_s_30212);return (_n_left_30291==_n_right_30292);})()))&&d::truth(([&](){auto _n_left_30293=_n_dir_30210(_n_e_30213);auto _n_right_30294=_n_dir_30210(_n_s_30212);return (_n_left_30293==_n_right_30294);})()))){d::check_cancel();(void)((_n_e_30213++));
}
(void)(([&](){auto _n_argument_30295=_n_P_30202;auto _n_argument_30296=_n_s_30212;auto _n_argument_30297=_n_e_30213;auto _n_argument_30298=_n_steep_30208(_n_s_30212);auto _n_argument_30299=_n_put_30203;return _n_run_30181(_n_argument_30295,_n_argument_30296,_n_argument_30297,_n_argument_30298,_n_argument_30299);})());
(void)((_n_s_30212=_n_e_30213));
}}

}
}

void _n_run_30181(d::Array<d::Array<double,false>,false> _a0,double _a1,double _a2,bool _a3,std::function<void(double,double,d::String,double)> _a4){d::Array<d::Array<double,false>,false> _n_P_30214=_a0;
double _n_s_30215=_a1;
double _n_e_30216=_a2;
bool _n_steep_30217=_a3;
std::function<void(double,double,d::String,double)> _n_put_30218=_a4;
{
double _n_A_30223=(d::truth(_n_steep_30217)?1.0:0.0);
double _n_B_30224=(1.0-_n_A_30223);
double _n_lo_30225=d::minimum({d::at(d::at(_n_P_30214,_n_s_30215),_n_A_30223),d::at(d::at(_n_P_30214,_n_e_30216),_n_A_30223)});
double _n_hi_30226=d::maximum({d::at(d::at(_n_P_30214,_n_s_30215),_n_A_30223),d::at(d::at(_n_P_30214,_n_e_30216),_n_A_30223)});
auto _n_at_30227=[&]( double _a0) mutable ->std::array<double,3>{double _n_m_30228=_a0;
{
(void)((_n_m_30228=([&](){auto _n_argument_30300=_n_lo_30225;auto _n_argument_30301=d::minimum({_n_hi_30226,_n_m_30228});return d::maximum({_n_argument_30300,_n_argument_30301});})()));
{double _n_i_30229=_n_s_30215;
for(;d::truth((_n_i_30229<_n_e_30216));(void)((_n_i_30229++))){d::check_cancel();d::Array<double,false> _n_p_30230=d::at(_n_P_30214,_n_i_30229);
d::Array<double,false> _n_q_30231=d::at(_n_P_30214,(_n_i_30229+1.0));
if((d::truth((_n_m_30228>=(d::minimum({d::at(_n_p_30230,_n_A_30223),d::at(_n_q_30231,_n_A_30223)})-1e-9)))&&d::truth((_n_m_30228<=(d::maximum({d::at(_n_p_30230,_n_A_30223),d::at(_n_q_30231,_n_A_30223)})+1e-9))))){d::check_cancel();double _n_d_30232=([&]()->double{auto _n_logical_30302=(d::at(_n_q_30231,_n_A_30223)-d::at(_n_p_30230,_n_A_30223));return d::truth(_n_logical_30302)?_n_logical_30302:1e-9;})();
double _n_u_30233=((_n_m_30228-d::at(_n_p_30230,_n_A_30223))/_n_d_30232);
return std::array<double,3>{(d::at(_n_p_30230,_n_B_30224)+((d::at(_n_q_30231,_n_B_30224)-d::at(_n_p_30230,_n_B_30224))*_n_u_30233)),((d::at(_n_q_30231,_n_B_30224)-d::at(_n_p_30230,_n_B_30224))/_n_d_30232),(d::truth((_n_u_30233<0.5))?_n_i_30229:(_n_i_30229+1.0))};
}
}}
return std::array<double,3>{d::at(d::at(_n_P_30214,_n_s_30215),_n_B_30224),0.0,_n_s_30215};

}
};
{double _n_k_30234=std::ceil((_n_lo_30225-0.5));
for(;d::truth((_n_k_30234<=std::floor((_n_hi_30226-0.5))));(void)((_n_k_30234++))){d::check_cancel();auto _n_binding_30303=_n_at_30227((_n_k_30234+0.5));
double _n_v_30235=d::at(_n_binding_30303,0.0);
double _n_d_30236=d::at(_n_binding_30303,1.0);
double _n_i_30237=d::at(_n_binding_30303,2.0);
if(d::truth(_n_steep_30217)){d::check_cancel();(void)(([&](){auto _n_argument_30304=std::floor(_n_v_30235);auto _n_argument_30305=_n_k_30234;auto _n_argument_30306=(d::truth((std::fabs(_n_d_30236)<0.48))?d::String(u"|"):(d::truth((_n_d_30236<0.0))?d::String(u"/"):d::String(u"\\")));auto _n_argument_30307=_n_i_30237;return _n_put_30218(_n_argument_30304,_n_argument_30305,_n_argument_30306,_n_argument_30307);})());
}else {d::check_cancel();if(d::truth((std::fabs(_n_d_30236)<0.38))){d::check_cancel();double _n_n_30238=(d::truth((std::fabs(_n_d_30236)<0.2))?2.0:4.0);
d::Array<d::String,false> _n_g_30239=(d::truth((_n_n_30238==4.0))?d::Array<d::String,false>{d::String(u"_"),(d::truth((_n_d_30236>0.0))?d::String(u"`"):d::String(u"'")),d::String(u"-"),d::String(u"."),d::String(u"_")}:d::Array<d::String,false>{d::String(u"_"),d::String(u"-"),d::String(u"_")});
double _n_r_30240=std::floor(_n_v_30235);
double _n_j_30241=d::round(((_n_v_30235-_n_r_30240)*_n_n_30238));
(void)(_n_put_30218(_n_k_30234,(d::truth(_n_j_30241)?_n_r_30240:(_n_r_30240-1.0)),d::at(_n_g_30239,_n_j_30241),_n_i_30237));
}else {d::check_cancel();double _n_ya_30242=d::round(d::at(_n_at_30227(_n_k_30234),0.0));
double _n_yb_30243=d::round(d::at(_n_at_30227((_n_k_30234+1.0)),0.0));
if(d::truth((_n_yb_30243>_n_ya_30242))){d::check_cancel();(void)(_n_put_30218(_n_k_30234,_n_ya_30242,d::String(u"\\"),_n_i_30237));
}else {d::check_cancel();(void)(_n_put_30218(_n_k_30234,(_n_ya_30242-1.0),(d::truth((_n_yb_30243<_n_ya_30242))?d::String(u"/"):d::String(u"_")),_n_i_30237));
}
}
}
}}

}
}

struct Native_spring final:ascii::Piece{
double _n_cols_30183{};
double _n_rows_30184{};
double _n_cx_30185{};
double _n_TURNS_30186{};
double _n_RC_30187{};
double _n_BULGE_30188{};
double _n_P0_30189{};
double _n_AMP_30190{};
double _n_PERIOD_30191{};
double _n_TOP_30192{};
double _n_STEPS_30193{};
d::Array<d::String,false> _n_out_30194{};
d::Array<uint8_t,true> _n_front_30195{};
double _n_N_30196{};
d::String _n_ceiling_30197{};
d::String _n_plate_30198{};
d::Array<uint8_t,true> _n_near_30199{};
double _n_th0_30200{};
std::function<d::String(double,std::shared_ptr<_n_Record_30283>)> _render;
bool _n_inside_30201(double _a0,double _a1){double _n_c_30245=_a0;
double _n_r_30246=_a1;
return ([&]()->bool{auto _n_logical_30356=([&]()->bool{auto _n_logical_30357=([&]()->bool{auto _n_logical_30358=(_n_c_30245>=0.0);return d::truth(_n_logical_30358)?(_n_c_30245<this->_n_cols_30183):_n_logical_30358;})();return d::truth(_n_logical_30357)?(_n_r_30246>=0.0):_n_logical_30357;})();return d::truth(_n_logical_30356)?(_n_r_30246<this->_n_rows_30184):_n_logical_30356;})();}

explicit Native_spring(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30308=_n_meta_30177;
this->_n_cols_30183=_n_binding_30308->_p_cols;
this->_n_rows_30184=_n_binding_30308->_p_rows;
this->_n_cx_30185=(this->_n_cols_30183/2.0);
this->_n_TURNS_30186=3.5;
this->_n_RC_30187=7.5;
this->_n_BULGE_30188=1.75;
this->_n_P0_30189=3.5;
this->_n_AMP_30190=0.6;
this->_n_PERIOD_30191=1.4;
this->_n_TOP_30192=3.0;
this->_n_STEPS_30193=160.0;
this->_n_out_30194=d::Array<d::String,false>(size_t((this->_n_cols_30183*this->_n_rows_30184)));
this->_n_front_30195=d::Array<uint8_t,true>(size_t((this->_n_cols_30183*this->_n_rows_30184)));
this->_n_N_30196=(double(_n_RAMP_30179.size())-1.0);
this->_n_ceiling_30197=d::repeat(d::String(u"/"),22.0);
this->_n_plate_30198=([&](){auto _n_left_30309=(d::string(d::repeat(d::String(u"─"),11.0))+d::string(d::String(u"┬")));auto _n_right_30310=d::repeat(d::String(u"─"),10.0);return (d::string(_n_left_30309)+d::string(_n_right_30310));})();
this->_n_near_30199=d::Array<uint8_t,true>(size_t((this->_n_STEPS_30193+1.0)));
this->_n_th0_30200=((-d::number(ascii::PI))/2.0);
{double _n_i_30244=0.0;
for(;d::truth((_n_i_30244<=this->_n_STEPS_30193));(void)((_n_i_30244++))){d::check_cancel();(void)(([&](){auto&& _n_array_30311=this->_n_near_30199;auto _n_index_30312=_n_i_30244;auto _n_value_30313=(d::truth((std::sin((this->_n_th0_30200+(((_n_i_30244/this->_n_STEPS_30193)*this->_n_TURNS_30186)*6.2832)))>0.0))?1.0:0.0);d::put(_n_array_30311,_n_index_30312,_n_value_30313);return _n_value_30313;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_30283> _a1) mutable ->d::String{double _n_t_30247=_a0;
auto _n_binding_30316=(d::present(_a1)?_a1:([&](){auto _n_object_30315=std::make_shared<_n_Record_30283>();return _n_object_30315;})());
bool _n_paper_30248=(d::present(_n_binding_30316->_p_paper)?d::read(_n_binding_30316->_p_paper):false);
{
double _n_pitch_30249=(this->_n_P0_30189+(this->_n_AMP_30190*std::cos(((_n_t_30247/this->_n_PERIOD_30191)*6.2832))));
(void)(this->_n_out_30194.fill(d::String(u" ")));
(void)(this->_n_front_30195.fill(0.0));
auto _n_lift_30250=[&]( double _a0) mutable ->double{double _n_u_30251=_a0;
{
double _n_k_30252=([&](){auto _n_argument_30317=std::floor(_n_u_30251);auto _n_argument_30318=(std::ceil(this->_n_TURNS_30186)-1.0);return d::minimum({_n_argument_30317,_n_argument_30318});})();
double _n_y0_30253=d::round((_n_k_30252*_n_pitch_30249));
return ((this->_n_TOP_30192+_n_y0_30253)+((d::round(((_n_k_30252+1.0)*_n_pitch_30249))-_n_y0_30253)*(_n_u_30251-_n_k_30252)));

}
};
d::Array<std::array<double,2>,false> _n_P_30254=d::Array<std::array<double,2>,false>{};
{double _n_i_30255=0.0;
for(;d::truth((_n_i_30255<=this->_n_STEPS_30193));(void)((_n_i_30255++))){d::check_cancel();double _n_th_30256=(this->_n_th0_30200+(((_n_i_30255/this->_n_STEPS_30193)*this->_n_TURNS_30186)*6.2832));
(void)(_n_P_30254.push(std::array<double,2>{(this->_n_cx_30185+(this->_n_RC_30187*std::cos(_n_th_30256))),([&](){auto _n_left_30319=_n_lift_30250(((_n_th_30256-this->_n_th0_30200)/6.2832));auto _n_right_30320=(this->_n_BULGE_30188*(std::sin(_n_th_30256)+1.0));return (_n_left_30319+_n_right_30320);})()}));
}}
double _n_foot_30257=d::at(d::at(_n_P_30254,this->_n_STEPS_30193),1.0);
double _n_lid_30258=d::round((_n_foot_30257+2.3));
double _n_edge_30259=std::floor(((this->_n_cx_30185-this->_n_RC_30187)+0.5));
{double _n_k_30260=0.0;
for(;d::truth((_n_k_30260<(this->_n_TURNS_30186-0.5)));(void)((_n_k_30260++))){d::check_cancel();double _n_r_30261=std::floor((_n_lift_30250((_n_k_30260+0.75))+this->_n_BULGE_30188));
if(d::truth(this->_n_inside_30201(_n_edge_30259,_n_r_30261))){d::check_cancel();(void)(([&](){auto&& _n_array_30321=this->_n_out_30194;auto _n_index_30322=(_n_edge_30259+(_n_r_30261*this->_n_cols_30183));auto _n_value_30323=d::String(u"(");d::put(_n_array_30321,_n_index_30322,_n_value_30323);return _n_value_30323;})());
(void)(([&](){auto&& _n_array_30324=this->_n_front_30195;auto _n_index_30325=(_n_edge_30259+(_n_r_30261*this->_n_cols_30183));auto _n_value_30326=1.0;d::put(_n_array_30324,_n_index_30325,_n_value_30326);return _n_value_30326;})());
}
}}
(void)(_n_curve_30180(d::Array<d::Array<double,false>,false>(d::map(_n_P_30254,[&](const auto &_n_element_30327){return d::Array<double,false>(_n_element_30327);})),[=]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_30262=_a0;
double _n_r_30263=_a1;
d::String _n_ch_30264=_a2;
double _n_i_30265=_a3;
{
if((((d::truth((!d::truth(d::at(this->_n_near_30199,_n_i_30265))))||d::truth((!d::truth(this->_n_inside_30201(_n_c_30262,_n_r_30263)))))||d::truth((_n_c_30262<_n_edge_30259)))||d::truth((d::at(this->_n_out_30194,(_n_c_30262+(_n_r_30263*this->_n_cols_30183)))==d::String(u"("))))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_30328=this->_n_out_30194;auto _n_index_30329=(_n_c_30262+(_n_r_30263*this->_n_cols_30183));auto _n_value_30330=_n_ch_30264;d::put(_n_array_30328,_n_index_30329,_n_value_30330);return _n_value_30330;})());
(void)(([&](){auto&& _n_array_30331=this->_n_front_30195;auto _n_index_30332=(_n_c_30262+(_n_r_30263*this->_n_cols_30183));auto _n_value_30333=1.0;d::put(_n_array_30331,_n_index_30332,_n_value_30333);return _n_value_30333;})());

}
}));
(void)(_n_curve_30180(d::Array<d::Array<double,false>,false>(d::map(_n_P_30254,[&](const auto &_n_element_30334){return d::Array<double,false>(_n_element_30334);})),[=]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_30266=_a0;
double _n_r_30267=_a1;
d::String _n_ch_30268=_a2;
double _n_i_30269=_a3;
{
double _n_q_30270=(_n_c_30266+(_n_r_30267*this->_n_cols_30183));
if((((((d::truth(d::at(this->_n_near_30199,_n_i_30269))||d::truth((!d::truth(this->_n_inside_30201(_n_c_30266,_n_r_30267)))))||d::truth((_n_c_30266<_n_edge_30259)))||d::truth(d::at(this->_n_front_30195,_n_q_30270)))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_30335=(_n_c_30266>0.0);return d::truth(_n_logical_30335)?std::variant<double,bool>(d::at(this->_n_front_30195,(_n_q_30270-1.0))):std::variant<double,bool>(_n_logical_30335);})()))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_30336=(_n_c_30266<(this->_n_cols_30183-1.0));return d::truth(_n_logical_30336)?std::variant<double,bool>(d::at(this->_n_front_30195,(_n_q_30270+1.0))):std::variant<double,bool>(_n_logical_30336);})()))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_30337=this->_n_out_30194;auto _n_index_30338=_n_q_30270;auto _n_value_30339=_n_ch_30268;d::put(_n_array_30337,_n_index_30338,_n_value_30339);return _n_value_30339;})());

}
}));
(void)(([&](){auto&& _n_array_30340=this->_n_out_30194;auto _n_index_30341=(std::floor(this->_n_cx_30185)+(2.0*this->_n_cols_30183));auto _n_value_30342=d::String(u"|");d::put(_n_array_30340,_n_index_30341,_n_value_30342);return _n_value_30342;})());
double _n_dx_30271=(std::floor(this->_n_cx_30185)-8.0);
(void)(d::forEach(_n_DRUM_30182,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_30272=_a0;
double _n_j_30273=_a1;
{
double _n_r_30274=((_n_lid_30258-1.0)+_n_j_30273);
if((d::truth((_n_r_30274<0.0))||d::truth((_n_r_30274>=this->_n_rows_30184)))){d::check_cancel();return;
}
{double _n_k_30275=0.0;
for(;d::truth((_n_k_30275<double(_n_line_30272.size())));(void)((_n_k_30275++))){d::check_cancel();d::String _n_ch_30276=d::at(_n_line_30272,_n_k_30275);
if((d::truth((_n_ch_30276>=d::String(u"0")))&&d::truth((_n_ch_30276<=d::String(u"9"))))){d::check_cancel();double _n_i_30277=d::round((((+d::number(_n_ch_30276))/9.0)*this->_n_N_30196));
(void)((_n_ch_30276=d::at(_n_RAMP_30179,(d::truth(_n_paper_30248)?(this->_n_N_30196-_n_i_30277):_n_i_30277))));
}
if((d::truth((_n_ch_30276!=d::String(u" ")))||d::truth(([&]()->bool{auto _n_logical_30343=(_n_k_30275>1.0);return d::truth(_n_logical_30343)?(_n_k_30275<(double(_n_line_30272.size())-2.0)):_n_logical_30343;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_30344=this->_n_out_30194;auto _n_index_30345=((_n_dx_30271+_n_k_30275)+(_n_r_30274*this->_n_cols_30183));auto _n_value_30346=_n_ch_30276;d::put(_n_array_30344,_n_index_30345,_n_value_30346);return _n_value_30346;})());
}
}}

}
}));
{double _n_r_30278=(std::floor(_n_foot_30257)+1.0);
for(;d::truth((_n_r_30278<_n_lid_30258));(void)((_n_r_30278++))){d::check_cancel();if(d::truth(this->_n_inside_30201(0.0,_n_r_30278))){d::check_cancel();(void)(([&](){auto&& _n_array_30347=this->_n_out_30194;auto _n_index_30348=(std::floor(this->_n_cx_30185)+(_n_r_30278*this->_n_cols_30183));auto _n_value_30349=d::String(u"|");d::put(_n_array_30347,_n_index_30348,_n_value_30349);return _n_value_30349;})());
}
}}
double _n_left_30279=std::floor((this->_n_cx_30185-(double(this->_n_ceiling_30197.size())/2.0)));
{double _n_i_30280=0.0;
for(;d::truth((_n_i_30280<double(this->_n_ceiling_30197.size())));(void)((_n_i_30280++))){d::check_cancel();(void)(([&](){auto&& _n_array_30350=this->_n_out_30194;auto _n_index_30351=(_n_left_30279+_n_i_30280);auto _n_value_30352=d::at(this->_n_ceiling_30197,_n_i_30280);d::put(_n_array_30350,_n_index_30351,_n_value_30352);return _n_value_30352;})());
(void)(([&](){auto&& _n_array_30353=this->_n_out_30194;auto _n_index_30354=((this->_n_cols_30183+_n_left_30279)+_n_i_30280);auto _n_value_30355=d::at(this->_n_plate_30198,_n_i_30280);d::put(_n_array_30353,_n_index_30354,_n_value_30355);return _n_value_30355;})());
}}
d::Array<d::String,false> _n_lines_30281=d::Array<d::String,false>{};
{double _n_r_30282=0.0;
for(;d::truth((_n_r_30282<this->_n_rows_30184));(void)((_n_r_30282++))){d::check_cancel();(void)(_n_lines_30281.push(d::join(this->_n_out_30194.slice((_n_r_30282*this->_n_cols_30183),((_n_r_30282+1.0)*this->_n_cols_30183)),d::String(u""))));
}}
return d::join(_n_lines_30281,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("spring").cols)*ascii::catalog_meta("spring").rows);auto _env=std::make_shared<_n_Record_30283>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &spring_meta(){return catalog_meta("spring");}
std::unique_ptr<Piece> make_spring(const AsciiPieceOptions &o){return std::make_unique<Native_spring>(o);}
}
