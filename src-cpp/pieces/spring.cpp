// Direct, statically typed C++ from src/pieces/spring.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30179;
struct _n_Record_30284;
struct _n_Record_30179{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_30179> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30179>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_30284{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_30284> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30284>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
void _n_curve_30181(d::Array<d::Array<double,false>,false> _a0,std::function<void(double,double,d::String,double)> _a1);
void _n_run_30182(d::Array<d::Array<double,false>,false> _a0,double _a1,double _a2,bool _a3,std::function<void(double,double,d::String,double)> _a4);
std::shared_ptr<_n_Record_30179> _n_meta_30178=[](){return ([&](){auto _n_object_30287=std::make_shared<_n_Record_30179>();_n_object_30287->_p_name=d::String(u"spring");_n_object_30287->_p_category=d::String(u"shapes");_n_object_30287->_p_note=d::String(u"a weight bouncing on a coil spring, its coils bunching");_n_object_30287->_p_cols=40.0;_n_object_30287->_p_rows=28.0;_n_object_30287->_p_fps=30.0;return _n_object_30287;})();}();
const d::String _n_RAMP_30180=[](){return d::String(u".:-=+*#%@");}();
d::Array<d::String,false> _n_DRUM_30183=[](){return d::Array<d::String,false>{d::String(u"  .-----------.  "),d::String(u" (      o      ) "),d::String(u" |`-----------'| "),d::String(u" |9887766543210| "),d::String(u" |9887766543210| "),d::String(u"  `-----------'  ")};}();
void _n_curve_30181(d::Array<d::Array<double,false>,false> _a0,std::function<void(double,double,d::String,double)> _a1){d::Array<d::Array<double,false>,false> _n_P_30203=_a0;
std::function<void(double,double,d::String,double)> _n_put_30204=_a1;
{
auto _n_steep_30209=[&]( double _a0) mutable ->bool{double _n_i_30210=_a0;
return ([&](){auto _n_left_30288=std::fabs((d::at(d::at(_n_P_30203,(_n_i_30210+1.0)),1.0)-d::at(d::at(_n_P_30203,_n_i_30210),1.0)));auto _n_right_30289=std::fabs((d::at(d::at(_n_P_30203,(_n_i_30210+1.0)),0.0)-d::at(d::at(_n_P_30203,_n_i_30210),0.0)));return (_n_left_30288>_n_right_30289);})();};
auto _n_dir_30211=[&]( double _a0) mutable ->double{double _n_i_30212=_a0;
return d::sign(([&](){auto _n_left_30290=d::at(d::at(_n_P_30203,(_n_i_30212+1.0)),(d::truth(_n_steep_30209(_n_i_30212))?1.0:0.0));auto _n_right_30291=d::at(d::at(_n_P_30203,_n_i_30212),(d::truth(_n_steep_30209(_n_i_30212))?1.0:0.0));return (_n_left_30290-_n_right_30291);})());};
{double _n_s_30213=0.0;
for(;d::truth((_n_s_30213<(double(_n_P_30203.size())-1.0)));){d::check_cancel();double _n_e_30214=(_n_s_30213+1.0);
while(((d::truth((_n_e_30214<(double(_n_P_30203.size())-1.0)))&&d::truth(([&](){auto _n_left_30292=_n_steep_30209(_n_e_30214);auto _n_right_30293=_n_steep_30209(_n_s_30213);return (_n_left_30292==_n_right_30293);})()))&&d::truth(([&](){auto _n_left_30294=_n_dir_30211(_n_e_30214);auto _n_right_30295=_n_dir_30211(_n_s_30213);return (_n_left_30294==_n_right_30295);})()))){d::check_cancel();(void)((_n_e_30214++));
}
(void)(([&](){auto _n_argument_30296=_n_P_30203;auto _n_argument_30297=_n_s_30213;auto _n_argument_30298=_n_e_30214;auto _n_argument_30299=_n_steep_30209(_n_s_30213);auto _n_argument_30300=_n_put_30204;return _n_run_30182(_n_argument_30296,_n_argument_30297,_n_argument_30298,_n_argument_30299,_n_argument_30300);})());
(void)((_n_s_30213=_n_e_30214));
}}

}
}

void _n_run_30182(d::Array<d::Array<double,false>,false> _a0,double _a1,double _a2,bool _a3,std::function<void(double,double,d::String,double)> _a4){d::Array<d::Array<double,false>,false> _n_P_30215=_a0;
double _n_s_30216=_a1;
double _n_e_30217=_a2;
bool _n_steep_30218=_a3;
std::function<void(double,double,d::String,double)> _n_put_30219=_a4;
{
double _n_A_30224=(d::truth(_n_steep_30218)?1.0:0.0);
double _n_B_30225=(1.0-_n_A_30224);
double _n_lo_30226=d::minimum({d::at(d::at(_n_P_30215,_n_s_30216),_n_A_30224),d::at(d::at(_n_P_30215,_n_e_30217),_n_A_30224)});
double _n_hi_30227=d::maximum({d::at(d::at(_n_P_30215,_n_s_30216),_n_A_30224),d::at(d::at(_n_P_30215,_n_e_30217),_n_A_30224)});
auto _n_at_30228=[&]( double _a0) mutable ->d::Array<double,false>{double _n_m_30229=_a0;
{
(void)((_n_m_30229=([&](){auto _n_argument_30301=_n_lo_30226;auto _n_argument_30302=d::minimum({_n_hi_30227,_n_m_30229});return d::maximum({_n_argument_30301,_n_argument_30302});})()));
{double _n_i_30230=_n_s_30216;
for(;d::truth((_n_i_30230<_n_e_30217));(void)((_n_i_30230++))){d::check_cancel();d::Array<double,false> _n_p_30231=d::at(_n_P_30215,_n_i_30230);
d::Array<double,false> _n_q_30232=d::at(_n_P_30215,(_n_i_30230+1.0));
if((d::truth((_n_m_30229>=(d::minimum({d::at(_n_p_30231,_n_A_30224),d::at(_n_q_30232,_n_A_30224)})-1e-9)))&&d::truth((_n_m_30229<=(d::maximum({d::at(_n_p_30231,_n_A_30224),d::at(_n_q_30232,_n_A_30224)})+1e-9))))){d::check_cancel();double _n_d_30233=([&]()->double{auto _n_logical_30303=(d::at(_n_q_30232,_n_A_30224)-d::at(_n_p_30231,_n_A_30224));return d::truth(_n_logical_30303)?_n_logical_30303:1e-9;})();
double _n_u_30234=((_n_m_30229-d::at(_n_p_30231,_n_A_30224))/_n_d_30233);
return d::Array<double,false>{(d::at(_n_p_30231,_n_B_30225)+((d::at(_n_q_30232,_n_B_30225)-d::at(_n_p_30231,_n_B_30225))*_n_u_30234)),((d::at(_n_q_30232,_n_B_30225)-d::at(_n_p_30231,_n_B_30225))/_n_d_30233),(d::truth((_n_u_30234<0.5))?_n_i_30230:(_n_i_30230+1.0))};
}
}}
return d::Array<double,false>{d::at(d::at(_n_P_30215,_n_s_30216),_n_B_30225),0.0,_n_s_30216};

}
};
{double _n_k_30235=std::ceil((_n_lo_30226-0.5));
for(;d::truth((_n_k_30235<=std::floor((_n_hi_30227-0.5))));(void)((_n_k_30235++))){d::check_cancel();auto _n_binding_30304=_n_at_30228((_n_k_30235+0.5));
double _n_v_30236=d::at(_n_binding_30304,0.0);
double _n_d_30237=d::at(_n_binding_30304,1.0);
double _n_i_30238=d::at(_n_binding_30304,2.0);
if(d::truth(_n_steep_30218)){d::check_cancel();(void)(([&](){auto _n_argument_30305=std::floor(_n_v_30236);auto _n_argument_30306=_n_k_30235;auto _n_argument_30307=(d::truth((std::fabs(_n_d_30237)<0.48))?d::String(u"|"):(d::truth((_n_d_30237<0.0))?d::String(u"/"):d::String(u"\\")));auto _n_argument_30308=_n_i_30238;return _n_put_30219(_n_argument_30305,_n_argument_30306,_n_argument_30307,_n_argument_30308);})());
}else {d::check_cancel();if(d::truth((std::fabs(_n_d_30237)<0.38))){d::check_cancel();double _n_n_30239=(d::truth((std::fabs(_n_d_30237)<0.2))?2.0:4.0);
d::Array<d::String,false> _n_g_30240=(d::truth((_n_n_30239==4.0))?d::Array<d::String,false>{d::String(u"_"),(d::truth((_n_d_30237>0.0))?d::String(u"`"):d::String(u"'")),d::String(u"-"),d::String(u"."),d::String(u"_")}:d::Array<d::String,false>{d::String(u"_"),d::String(u"-"),d::String(u"_")});
double _n_r_30241=std::floor(_n_v_30236);
double _n_j_30242=d::round(((_n_v_30236-_n_r_30241)*_n_n_30239));
(void)(_n_put_30219(_n_k_30235,(d::truth(_n_j_30242)?_n_r_30241:(_n_r_30241-1.0)),d::at(_n_g_30240,_n_j_30242),_n_i_30238));
}else {d::check_cancel();double _n_ya_30243=d::round(d::at(_n_at_30228(_n_k_30235),0.0));
double _n_yb_30244=d::round(d::at(_n_at_30228((_n_k_30235+1.0)),0.0));
if(d::truth((_n_yb_30244>_n_ya_30243))){d::check_cancel();(void)(_n_put_30219(_n_k_30235,_n_ya_30243,d::String(u"\\"),_n_i_30238));
}else {d::check_cancel();(void)(_n_put_30219(_n_k_30235,(_n_ya_30243-1.0),(d::truth((_n_yb_30244<_n_ya_30243))?d::String(u"/"):d::String(u"_")),_n_i_30238));
}
}
}
}}

}
}

struct Native_spring final:ascii::Piece{
double _n_cols_30184{};
double _n_rows_30185{};
double _n_cx_30186{};
double _n_TURNS_30187{};
double _n_RC_30188{};
double _n_BULGE_30189{};
double _n_P0_30190{};
double _n_AMP_30191{};
double _n_PERIOD_30192{};
double _n_TOP_30193{};
double _n_STEPS_30194{};
d::Array<d::String,false> _n_out_30195{};
d::Array<uint8_t,true> _n_front_30196{};
double _n_N_30197{};
d::String _n_ceiling_30198{};
d::String _n_plate_30199{};
d::Array<uint8_t,true> _n_near_30200{};
double _n_th0_30201{};
std::function<d::String(double,std::shared_ptr<_n_Record_30284>)> _render;
bool _n_inside_30202(double _a0,double _a1){double _n_c_30246=_a0;
double _n_r_30247=_a1;
return ([&]()->bool{auto _n_logical_30355=([&]()->bool{auto _n_logical_30356=([&]()->bool{auto _n_logical_30357=(_n_c_30246>=0.0);return d::truth(_n_logical_30357)?(_n_c_30246<this->_n_cols_30184):_n_logical_30357;})();return d::truth(_n_logical_30356)?(_n_r_30247>=0.0):_n_logical_30356;})();return d::truth(_n_logical_30355)?(_n_r_30247<this->_n_rows_30185):_n_logical_30355;})();}

explicit Native_spring(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30309=_n_meta_30178;
this->_n_cols_30184=_n_binding_30309->_p_cols;
this->_n_rows_30185=_n_binding_30309->_p_rows;
this->_n_cx_30186=(this->_n_cols_30184/2.0);
this->_n_TURNS_30187=3.5;
this->_n_RC_30188=7.5;
this->_n_BULGE_30189=1.75;
this->_n_P0_30190=3.5;
this->_n_AMP_30191=0.6;
this->_n_PERIOD_30192=1.4;
this->_n_TOP_30193=3.0;
this->_n_STEPS_30194=160.0;
this->_n_out_30195=d::Array<d::String,false>(size_t((this->_n_cols_30184*this->_n_rows_30185)));
this->_n_front_30196=d::Array<uint8_t,true>(size_t((this->_n_cols_30184*this->_n_rows_30185)));
this->_n_N_30197=(double(_n_RAMP_30180.size())-1.0);
this->_n_ceiling_30198=d::repeat(d::String(u"/"),22.0);
this->_n_plate_30199=([&](){auto _n_left_30310=(d::string(d::repeat(d::String(u"─"),11.0))+d::string(d::String(u"┬")));auto _n_right_30311=d::repeat(d::String(u"─"),10.0);return (d::string(_n_left_30310)+d::string(_n_right_30311));})();
this->_n_near_30200=d::Array<uint8_t,true>(size_t((this->_n_STEPS_30194+1.0)));
this->_n_th0_30201=((-d::number(ascii::PI))/2.0);
{double _n_i_30245=0.0;
for(;d::truth((_n_i_30245<=this->_n_STEPS_30194));(void)((_n_i_30245++))){d::check_cancel();(void)(([&](){auto&& _n_array_30312=this->_n_near_30200;auto _n_index_30313=_n_i_30245;auto _n_value_30314=(d::truth((std::sin((this->_n_th0_30201+(((_n_i_30245/this->_n_STEPS_30194)*this->_n_TURNS_30187)*6.2832)))>0.0))?1.0:0.0);d::put(_n_array_30312,_n_index_30313,_n_value_30314);return _n_value_30314;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_30284> _a1) mutable ->d::String{double _n_t_30248=_a0;
auto _n_binding_30317=(d::present(_a1)?_a1:([&](){auto _n_object_30316=std::make_shared<_n_Record_30284>();return _n_object_30316;})());
bool _n_paper_30249=(d::present(_n_binding_30317->_p_paper)?d::read(_n_binding_30317->_p_paper):false);
{
double _n_pitch_30250=(this->_n_P0_30190+(this->_n_AMP_30191*std::cos(((_n_t_30248/this->_n_PERIOD_30192)*6.2832))));
(void)(this->_n_out_30195.fill(d::String(u" ")));
(void)(this->_n_front_30196.fill(0.0));
auto _n_lift_30251=[&]( double _a0) mutable ->double{double _n_u_30252=_a0;
{
double _n_k_30253=([&](){auto _n_argument_30318=std::floor(_n_u_30252);auto _n_argument_30319=(std::ceil(this->_n_TURNS_30187)-1.0);return d::minimum({_n_argument_30318,_n_argument_30319});})();
double _n_y0_30254=d::round((_n_k_30253*_n_pitch_30250));
return ((this->_n_TOP_30193+_n_y0_30254)+((d::round(((_n_k_30253+1.0)*_n_pitch_30250))-_n_y0_30254)*(_n_u_30252-_n_k_30253)));

}
};
d::Array<d::Array<double,false>,false> _n_P_30255=d::Array<d::Array<double,false>,false>{};
{double _n_i_30256=0.0;
for(;d::truth((_n_i_30256<=this->_n_STEPS_30194));(void)((_n_i_30256++))){d::check_cancel();double _n_th_30257=(this->_n_th0_30201+(((_n_i_30256/this->_n_STEPS_30194)*this->_n_TURNS_30187)*6.2832));
(void)(_n_P_30255.push(d::Array<double,false>{(this->_n_cx_30186+(this->_n_RC_30188*std::cos(_n_th_30257))),([&](){auto _n_left_30320=_n_lift_30251(((_n_th_30257-this->_n_th0_30201)/6.2832));auto _n_right_30321=(this->_n_BULGE_30189*(std::sin(_n_th_30257)+1.0));return (_n_left_30320+_n_right_30321);})()}));
}}
double _n_foot_30258=d::at(d::at(_n_P_30255,this->_n_STEPS_30194),1.0);
double _n_lid_30259=d::round((_n_foot_30258+2.3));
double _n_edge_30260=std::floor(((this->_n_cx_30186-this->_n_RC_30188)+0.5));
{double _n_k_30261=0.0;
for(;d::truth((_n_k_30261<(this->_n_TURNS_30187-0.5)));(void)((_n_k_30261++))){d::check_cancel();double _n_r_30262=std::floor((_n_lift_30251((_n_k_30261+0.75))+this->_n_BULGE_30189));
if(d::truth(this->_n_inside_30202(_n_edge_30260,_n_r_30262))){d::check_cancel();(void)(([&](){auto&& _n_array_30322=this->_n_out_30195;auto _n_index_30323=(_n_edge_30260+(_n_r_30262*this->_n_cols_30184));auto _n_value_30324=d::String(u"(");d::put(_n_array_30322,_n_index_30323,_n_value_30324);return _n_value_30324;})());
(void)(([&](){auto&& _n_array_30325=this->_n_front_30196;auto _n_index_30326=(_n_edge_30260+(_n_r_30262*this->_n_cols_30184));auto _n_value_30327=1.0;d::put(_n_array_30325,_n_index_30326,_n_value_30327);return _n_value_30327;})());
}
}}
(void)(_n_curve_30181(_n_P_30255,[=]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_30263=_a0;
double _n_r_30264=_a1;
d::String _n_ch_30265=_a2;
double _n_i_30266=_a3;
{
if((((d::truth((!d::truth(d::at(this->_n_near_30200,_n_i_30266))))||d::truth((!d::truth(this->_n_inside_30202(_n_c_30263,_n_r_30264)))))||d::truth((_n_c_30263<_n_edge_30260)))||d::truth((d::at(this->_n_out_30195,(_n_c_30263+(_n_r_30264*this->_n_cols_30184)))==d::String(u"("))))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_30328=this->_n_out_30195;auto _n_index_30329=(_n_c_30263+(_n_r_30264*this->_n_cols_30184));auto _n_value_30330=_n_ch_30265;d::put(_n_array_30328,_n_index_30329,_n_value_30330);return _n_value_30330;})());
(void)(([&](){auto&& _n_array_30331=this->_n_front_30196;auto _n_index_30332=(_n_c_30263+(_n_r_30264*this->_n_cols_30184));auto _n_value_30333=1.0;d::put(_n_array_30331,_n_index_30332,_n_value_30333);return _n_value_30333;})());

}
}));
(void)(_n_curve_30181(_n_P_30255,[=]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_30267=_a0;
double _n_r_30268=_a1;
d::String _n_ch_30269=_a2;
double _n_i_30270=_a3;
{
double _n_q_30271=(_n_c_30267+(_n_r_30268*this->_n_cols_30184));
if((((((d::truth(d::at(this->_n_near_30200,_n_i_30270))||d::truth((!d::truth(this->_n_inside_30202(_n_c_30267,_n_r_30268)))))||d::truth((_n_c_30267<_n_edge_30260)))||d::truth(d::at(this->_n_front_30196,_n_q_30271)))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_30334=(_n_c_30267>0.0);return d::truth(_n_logical_30334)?std::variant<double,bool>(d::at(this->_n_front_30196,(_n_q_30271-1.0))):std::variant<double,bool>(_n_logical_30334);})()))||d::truth(([&]()->std::variant<double,bool>{auto _n_logical_30335=(_n_c_30267<(this->_n_cols_30184-1.0));return d::truth(_n_logical_30335)?std::variant<double,bool>(d::at(this->_n_front_30196,(_n_q_30271+1.0))):std::variant<double,bool>(_n_logical_30335);})()))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_30336=this->_n_out_30195;auto _n_index_30337=_n_q_30271;auto _n_value_30338=_n_ch_30269;d::put(_n_array_30336,_n_index_30337,_n_value_30338);return _n_value_30338;})());

}
}));
(void)(([&](){auto&& _n_array_30339=this->_n_out_30195;auto _n_index_30340=(std::floor(this->_n_cx_30186)+(2.0*this->_n_cols_30184));auto _n_value_30341=d::String(u"|");d::put(_n_array_30339,_n_index_30340,_n_value_30341);return _n_value_30341;})());
double _n_dx_30272=(std::floor(this->_n_cx_30186)-8.0);
(void)(d::forEach(_n_DRUM_30183,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_30273=_a0;
double _n_j_30274=_a1;
{
double _n_r_30275=((_n_lid_30259-1.0)+_n_j_30274);
if((d::truth((_n_r_30275<0.0))||d::truth((_n_r_30275>=this->_n_rows_30185)))){d::check_cancel();return;
}
{double _n_k_30276=0.0;
for(;d::truth((_n_k_30276<double(_n_line_30273.size())));(void)((_n_k_30276++))){d::check_cancel();d::String _n_ch_30277=d::at(_n_line_30273,_n_k_30276);
if((d::truth((_n_ch_30277>=d::String(u"0")))&&d::truth((_n_ch_30277<=d::String(u"9"))))){d::check_cancel();double _n_i_30278=d::round((((+d::number(_n_ch_30277))/9.0)*this->_n_N_30197));
(void)((_n_ch_30277=d::at(_n_RAMP_30180,(d::truth(_n_paper_30249)?(this->_n_N_30197-_n_i_30278):_n_i_30278))));
}
if((d::truth((_n_ch_30277!=d::String(u" ")))||d::truth(([&]()->bool{auto _n_logical_30342=(_n_k_30276>1.0);return d::truth(_n_logical_30342)?(_n_k_30276<(double(_n_line_30273.size())-2.0)):_n_logical_30342;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_30343=this->_n_out_30195;auto _n_index_30344=((_n_dx_30272+_n_k_30276)+(_n_r_30275*this->_n_cols_30184));auto _n_value_30345=_n_ch_30277;d::put(_n_array_30343,_n_index_30344,_n_value_30345);return _n_value_30345;})());
}
}}

}
}));
{double _n_r_30279=(std::floor(_n_foot_30258)+1.0);
for(;d::truth((_n_r_30279<_n_lid_30259));(void)((_n_r_30279++))){d::check_cancel();if(d::truth(this->_n_inside_30202(0.0,_n_r_30279))){d::check_cancel();(void)(([&](){auto&& _n_array_30346=this->_n_out_30195;auto _n_index_30347=(std::floor(this->_n_cx_30186)+(_n_r_30279*this->_n_cols_30184));auto _n_value_30348=d::String(u"|");d::put(_n_array_30346,_n_index_30347,_n_value_30348);return _n_value_30348;})());
}
}}
double _n_left_30280=std::floor((this->_n_cx_30186-(double(this->_n_ceiling_30198.size())/2.0)));
{double _n_i_30281=0.0;
for(;d::truth((_n_i_30281<double(this->_n_ceiling_30198.size())));(void)((_n_i_30281++))){d::check_cancel();(void)(([&](){auto&& _n_array_30349=this->_n_out_30195;auto _n_index_30350=(_n_left_30280+_n_i_30281);auto _n_value_30351=d::at(this->_n_ceiling_30198,_n_i_30281);d::put(_n_array_30349,_n_index_30350,_n_value_30351);return _n_value_30351;})());
(void)(([&](){auto&& _n_array_30352=this->_n_out_30195;auto _n_index_30353=((this->_n_cols_30184+_n_left_30280)+_n_i_30281);auto _n_value_30354=d::at(this->_n_plate_30199,_n_i_30281);d::put(_n_array_30352,_n_index_30353,_n_value_30354);return _n_value_30354;})());
}}
d::Array<d::String,false> _n_lines_30282=d::Array<d::String,false>{};
{double _n_r_30283=0.0;
for(;d::truth((_n_r_30283<this->_n_rows_30185));(void)((_n_r_30283++))){d::check_cancel();(void)(_n_lines_30282.push(d::join(this->_n_out_30195.slice((_n_r_30283*this->_n_cols_30184),((_n_r_30283+1.0)*this->_n_cols_30184)),d::String(u""))));
}}
return d::join(_n_lines_30282,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("spring").cols)*ascii::catalog_meta("spring").rows);auto _env=std::make_shared<_n_Record_30284>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &spring_meta(){return catalog_meta("spring");}
std::unique_ptr<Piece> make_spring(const AsciiPieceOptions &o){return std::make_unique<Native_spring>(o);}
}
