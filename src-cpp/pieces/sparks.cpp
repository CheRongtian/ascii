// Direct, statically typed C++ from src/pieces/sparks.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29579;
struct _n_Record_29594;
struct _n_Record_29675;
struct _n_Record_29579{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_29579> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29579>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_29594{
double _p_t0{};
double _p_vx{};
double _p_vy{};
double _p_life{};
static std::shared_ptr<_n_Record_29594> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29594>();out->_p_t0=d::decode<double>(j["t0"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_life=d::decode<double>(j["life"]);return out;}
};
struct _n_Record_29675{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29675> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29675>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_29592(double _a0,double _a1);
std::optional<std::array<double,5>> _n_at_29593(std::shared_ptr<_n_Record_29594> _a0,double _a1);
double _n_tool_29595(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_29579> _n_meta_29578=[](){return ([&](){auto _n_object_29678=std::make_shared<_n_Record_29579>();_n_object_29678->_p_name=d::String(u"sparks");_n_object_29678->_p_category=d::String(u"effects");_n_object_29678->_p_note=d::String(u"an angle grinder throwing sparks that arc, skip and cool");_n_object_29678->_p_cols=64.0;_n_object_29678->_p_rows=20.0;_n_object_29678->_p_fps=30.0;return _n_object_29678;})();}();
const double _n_FLOOR_29580=[](){return 17.0;}();
const double _n_RD_29581=[](){return 3.7;}();
const double _n_SINK_29582=[](){return 0.3;}();
const double _n_DX_29583=[](){return 24.0;}();
const double _n_DY_29584=[](){return ((_n_FLOOR_29580-_n_RD_29581)+_n_SINK_29582);}();
const double _n_EX_29585=[](){return (_n_DX_29583+(2.0*std::sqrt(((_n_RD_29581*_n_RD_29581)-std::pow((_n_RD_29581-_n_SINK_29582),2.0)))));}();
const double _n_G_29586=[](){return 30.0;}();
const double _n_RATE_29587=[](){return 320.0;}();
const double _n_LIFE_29588=[](){return 1.3;}();
const double _n_BOUNCE_29589=[](){return 0.3;}();
const double _n_SKID_29590=[](){return 0.55;}();
const d::String _n_SHADE_29591=[](){return d::String(u" ░▒▓█");}();
const d::String _n_QUAD_29596=[](){return d::String(u" ▘▝▀▖▌▞▛▗▚▐▜▄▙▟█");}();
double _n_hash_29592(double _a0,double _a1){double _n_i_29605=_a0;
double _n_s_29606=_a1;
{
double _n_h_29607=([&](){auto _n_left_29679=d::imul(double(d::i32(_n_i_29605)^d::i32(2654435769.0)),2246822507.0);auto _n_right_29680=d::imul((_n_s_29606+1.0),3266489909.0);return double(d::i32(_n_left_29679)^d::i32(_n_right_29680));})();
(void)((_n_h_29607=d::imul(double(d::i32(_n_h_29607)^d::i32(double(d::u32(_n_h_29607)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_29607=d::imul(double(d::i32(_n_h_29607)^d::i32(double(d::u32(_n_h_29607)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_29607)^d::i32(double(d::u32(_n_h_29607)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

std::optional<std::array<double,5>> _n_at_29593(std::shared_ptr<_n_Record_29594> _a0,double _a1){std::shared_ptr<_n_Record_29594> _n_s_29608=_a0;
double _n_a_29609=_a1;
{
double _n_x_29610=_n_EX_29585;
double _n_vx_29611=_n_s_29608->_p_vx;
double _n_vy_29612=_n_s_29608->_p_vy;
{double _n_b_29613=0.0;
for(;d::truth((_n_b_29613<3.0));(void)((_n_b_29613++))){d::check_cancel();double _n_T_29614=((2.0*_n_vy_29612)/_n_G_29586);
if(d::truth((_n_a_29609<_n_T_29614))){d::check_cancel();return std::array<double,5>{(_n_x_29610+(_n_vx_29611*_n_a_29609)),(((_n_FLOOR_29580-0.5)-(_n_vy_29612*_n_a_29609))+(((_n_G_29586*_n_a_29609)*_n_a_29609)/2.0)),_n_vx_29611,(_n_vy_29612-(_n_G_29586*_n_a_29609)),_n_b_29613};
}
(void)((_n_x_29610=(_n_x_29610+(_n_vx_29611*_n_T_29614))));
(void)((_n_a_29609=(_n_a_29609-_n_T_29614)));
(void)((_n_vx_29611=(_n_vx_29611*_n_SKID_29590)));
(void)((_n_vy_29612=(_n_vy_29612*_n_BOUNCE_29589)));
}}
return std::optional<std::array<double,5>>{};

}
}

double _n_tool_29595(double _a0,double _a1,double _a2){double _n_x_29615=_a0;
double _n_y_29616=_a1;
double _n_spin_29617=_a2;
{
double _n_X_29618=(_n_x_29615-_n_DX_29583);
double _n_Y_29619=((_n_DY_29584-_n_y_29616)*2.0);
double _n_d_29620=(d::hypot(std::initializer_list<double>{_n_X_29618,_n_Y_29619})/2.0);
double _n_ang_29621=std::atan2(_n_Y_29619,_n_X_29618);
if(d::truth((_n_d_29620<_n_RD_29581))){d::check_cancel();if(d::truth((_n_d_29620<0.5))){d::check_cancel();return 0.1;
}
if(d::truth((_n_d_29620<1.05))){d::check_cancel();return 0.9;
}
if(d::truth((_n_d_29620>(_n_RD_29581-0.55)))){d::check_cancel();return 1.0;
}
double _n_k_29622=d::mod((d::mod((_n_ang_29621-_n_spin_29617),(2.0*ascii::PI))+(2.0*ascii::PI)),(2.0*ascii::PI));
if(((d::truth((_n_d_29620>1.7))&&d::truth((_n_d_29620<2.6)))&&d::truth((_n_k_29622<1.3)))){d::check_cancel();return 0.8;
}
return 0.3;
}
if((((d::truth((_n_d_29620>(_n_RD_29581+0.45)))&&d::truth((_n_d_29620<(_n_RD_29581+1.35))))&&d::truth((_n_ang_29621>0.75)))&&d::truth((_n_ang_29621<3.8)))){d::check_cancel();return (d::truth((_n_d_29620<(_n_RD_29581+0.9)))?1.0:0.7);
}
double _n_hx_29623=(_n_x_29615-(_n_DX_29583-3.5));
double _n_top_29624=1.2;
double _n_grip_29625=6.6;
double _n_base_29626=((_n_DY_29584-_n_RD_29581)-1.2);
if(((d::truth((_n_y_29616>_n_top_29624))&&d::truth((_n_y_29616<_n_base_29626)))&&d::truth((std::fabs(_n_hx_29623)<(d::truth((_n_y_29616<_n_grip_29625))?1.6:0.9))))){d::check_cancel();if((d::truth((_n_y_29616<(_n_top_29624+0.6)))&&d::truth((std::fabs(_n_hx_29623)>1.1)))){d::check_cancel();return (-d::number(1.0));
}
if(d::truth((_n_hx_29623>0.3))){d::check_cancel();return 0.4;
}
return (((d::truth((_n_y_29616>(_n_top_29624+1.0)))&&d::truth((_n_y_29616<(_n_grip_29625-0.5))))&&d::truth((d::mod(std::floor(_n_y_29616),2.0)==0.0)))?0.7:0.95);
}
double _n_by_29627=((_n_y_29616-(_n_DY_29584-0.4))/2.0);
if(((d::truth((_n_x_29615>1.0))&&d::truth((_n_x_29615<_n_DX_29583)))&&d::truth((std::fabs(_n_by_29627)<1.0)))){d::check_cancel();if((d::truth((_n_x_29615<2.5))&&d::truth((std::fabs(_n_by_29627)>0.55)))){d::check_cancel();return (-d::number(1.0));
}
if((((d::truth((_n_x_29615>4.0))&&d::truth((_n_x_29615<11.0)))&&d::truth((std::fabs((_n_by_29627+0.1))<0.4)))&&d::truth((d::mod(std::floor(_n_x_29615),2.0)==0.0)))){d::check_cancel();return 0.1;
}
return (d::truth((_n_by_29627<(-d::number(0.5))))?0.95:(d::truth((_n_by_29627<0.1))?0.75:(d::truth((_n_by_29627<0.55))?0.45:0.25)));
}
return (-d::number(1.0));

}
}

struct Native_sparks final:ascii::Piece{
double _n_cols_29597{};
double _n_rows_29598{};
d::Array<d::Array<d::String,false>,false> _n_g_29599{};
d::Array<float,true> _n_heat_29600{};
d::Array<float,true> _n_top_29601{};
std::function<d::String(double,std::shared_ptr<_n_Record_29675>)> _render;
std::shared_ptr<_n_Record_29594> _n_spark_29602(double _a0){double _n_i_29628=_a0;
{
double _n_t0_29629=((_n_i_29628+_n_hash_29592(_n_i_29628,1.0))/_n_RATE_29587);
double _n_press_29630=(0.72+([&](){auto _n_left_29728=(0.28*std::sin((_n_t0_29629*1.9)));auto _n_right_29729=std::sin(((_n_t0_29629*0.7)+1.0));return (_n_left_29728*_n_right_29729);})());
if(d::truth((_n_hash_29592(_n_i_29628,2.0)>_n_press_29630))){d::check_cancel();return std::shared_ptr<_n_Record_29594>{};
}
double _n_deg_29631=(4.0+(30.0*(([&](){auto _n_left_29730=_n_hash_29592(_n_i_29628,3.0);auto _n_right_29731=_n_hash_29592(_n_i_29628,6.0);return (_n_left_29730+_n_right_29731);})()/2.0)));
if(d::truth((_n_hash_29592(_n_i_29628,7.0)<0.1))){d::check_cancel();(void)((_n_deg_29631=(_n_deg_29631+(25.0*_n_hash_29592(_n_i_29628,8.0)))));
}
double _n_ang_29632=((_n_deg_29631*ascii::PI)/180.0);
double _n_v_29633=(34.0+(44.0*_n_hash_29592(_n_i_29628,4.0)));
return ([&](){auto _n_object_29733=std::make_shared<_n_Record_29594>();_n_object_29733->_p_t0=_n_t0_29629;_n_object_29733->_p_vx=(_n_v_29633*std::cos(_n_ang_29632));_n_object_29733->_p_vy=((_n_v_29633*std::sin(_n_ang_29632))/2.0);_n_object_29733->_p_life=(0.3+((_n_LIFE_29588-0.3)*std::pow(_n_hash_29592(_n_i_29628,5.0),0.8)));return _n_object_29733;})();

}
}

void _n_mark_29603(double _a0,double _a1,double _a2,d::String _a3){double _n_c_29634=_a0;
double _n_r_29635=_a1;
double _n_h_29636=_a2;
d::String _n_ch_29637=_a3;
{
if((((d::truth((_n_c_29634<0.0))||d::truth((_n_c_29634>=this->_n_cols_29597)))||d::truth((_n_r_29635<0.0)))||d::truth((_n_r_29635>=_n_FLOOR_29580)))){d::check_cancel();return;
}
double _n_k_29638=((_n_r_29635*this->_n_cols_29597)+_n_c_29634);
(void)(([&](){auto&& _n_array_29734=this->_n_heat_29600;auto _n_index_29735=_n_k_29638;auto _n_value_29736=(d::at(_n_array_29734,_n_index_29735)+_n_h_29636);d::put(_n_array_29734,_n_index_29735,_n_value_29736);return _n_value_29736;})());
if(d::truth((_n_h_29636>d::at(this->_n_top_29601,_n_k_29638)))){d::check_cancel();(void)(([&](){auto&& _n_array_29737=this->_n_top_29601;auto _n_index_29738=_n_k_29638;auto _n_value_29739=_n_h_29636;d::put(_n_array_29737,_n_index_29738,_n_value_29739);return _n_value_29739;})());
(void)(([&](){auto&& _n_array_29740=d::at(this->_n_g_29599,_n_r_29635);auto _n_index_29741=_n_c_29634;auto _n_value_29742=_n_ch_29637;d::put(_n_array_29740,_n_index_29741,_n_value_29742);return _n_value_29742;})());
}

}
}

d::String _n_along_29604(double _a0,double _a1){double _n_vx_29639=_a0;
double _n_vy_29640=_a1;
{
double _n_a_29641=((std::atan2((2.0*_n_vy_29640),_n_vx_29639)*180.0)/ascii::PI);
return ((d::truth((_n_a_29641>60.0))||d::truth((_n_a_29641<(-d::number(60.0)))))?d::String(u"|"):(d::truth((_n_a_29641>20.0))?d::String(u"/"):(d::truth((_n_a_29641<(-d::number(20.0))))?d::String(u"\\"):d::String(u"-"))));

}
}

explicit Native_sparks(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29681=_n_meta_29578;
this->_n_cols_29597=_n_binding_29681->_p_cols;
this->_n_rows_29598=_n_binding_29681->_p_rows;
this->_n_g_29599=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_29598,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_29597));}));
this->_n_heat_29600=d::Array<float,true>(size_t((this->_n_cols_29597*this->_n_rows_29598)));
this->_n_top_29601=d::Array<float,true>(size_t((this->_n_cols_29597*this->_n_rows_29598)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_29675> _a1) mutable ->d::String{double _n_t_29642=_a0;
auto _n_binding_29684=(d::present(_a1)?_a1:([&](){auto _n_object_29683=std::make_shared<_n_Record_29675>();return _n_object_29683;})());
bool _n_paper_29643=(d::present(_n_binding_29684->_p_paper)?d::read(_n_binding_29684->_p_paper):false);
{
{double _n_r_29644=0.0;
for(;d::truth((_n_r_29644<this->_n_rows_29598));(void)((_n_r_29644++))){d::check_cancel();(void)(d::at(this->_n_g_29599,_n_r_29644).fill(d::String(u" ")));
}}
(void)(this->_n_heat_29600.fill(0.0));
(void)(this->_n_top_29601.fill(0.0));
{double _n_i_29645=(std::floor(((_n_t_29642-_n_LIFE_29588)*_n_RATE_29587))-1.0);
for(;d::truth((_n_i_29645<=std::floor((_n_t_29642*_n_RATE_29587))));(void)((_n_i_29645++))){d::check_cancel();std::shared_ptr<_n_Record_29594> _n_s_29646=this->_n_spark_29602(_n_i_29645);
if(d::truth((!d::truth(_n_s_29646)))){d::check_cancel();continue;
}
double _n_a_29647=(_n_t_29642-_n_s_29646->_p_t0);
if((d::truth((_n_a_29647<0.0))||d::truth((_n_a_29647>_n_s_29646->_p_life)))){d::check_cancel();continue;
}
std::optional<std::array<double,5>> _n_p_29648=_n_at_29593(_n_s_29646,_n_a_29647);
if(d::truth((!d::truth(_n_p_29648)))){d::check_cancel();continue;
}
auto _n_binding_29685=d::read(_n_p_29648);
double _n_x_29649=d::at(_n_binding_29685,0.0);
double _n_y_29650=d::at(_n_binding_29685,1.0);
double _n_vx_29651=d::at(_n_binding_29685,2.0);
double _n_vy_29652=d::at(_n_binding_29685,3.0);
double _n_b_29653=d::at(_n_binding_29685,4.0);
double _n_h_29654=(std::pow((1.0-(_n_a_29647/_n_s_29646->_p_life)),1.4)*(d::truth(_n_b_29653)?0.5:1.0));
if((d::truth((!d::truth(_n_b_29653)))&&d::truth((_n_h_29654>0.35)))){d::check_cancel();double _n_n_29655=std::ceil(((d::hypot(std::initializer_list<double>{_n_vx_29651,(2.0*_n_vy_29652)})*0.04)*_n_h_29654));
d::String _n_ch_29656=this->_n_along_29604(_n_vx_29651,_n_vy_29652);
{double _n_k_29657=_n_n_29655;
for(;d::truth((_n_k_29657>=1.0));(void)((_n_k_29657--))){d::check_cancel();auto&& _n_q_29658=d::read(([&](){auto _n_argument_29686=_n_s_29646;auto _n_argument_29687=d::maximum({0.0,(_n_a_29647-(((_n_k_29657/_n_n_29655)*0.04)*_n_h_29654))});return _n_at_29593(_n_argument_29686,_n_argument_29687);})());
(void)(([&](){auto _n_argument_29688=std::floor(d::at(_n_q_29658,0.0));auto _n_argument_29689=std::floor(d::at(_n_q_29658,1.0));auto _n_argument_29690=(_n_h_29654*0.45);auto _n_argument_29691=_n_ch_29656;return this->_n_mark_29603(_n_argument_29688,_n_argument_29689,_n_argument_29690,_n_argument_29691);})());
}}
}
(void)(([&](){auto _n_argument_29692=std::floor(_n_x_29649);auto _n_argument_29693=std::floor(_n_y_29650);auto _n_argument_29694=_n_h_29654;auto _n_argument_29695=(d::truth((_n_h_29654>0.75))?d::String(u"*"):(d::truth((_n_h_29654>0.5))?d::String(u"+"):(d::truth((_n_h_29654>0.25))?d::String(u"·"):d::String(u"."))));return this->_n_mark_29603(_n_argument_29692,_n_argument_29693,_n_argument_29694,_n_argument_29695);})());
}}
{double _n_r_29659=0.0;
for(;d::truth((_n_r_29659<_n_FLOOR_29580));(void)((_n_r_29659++))){d::check_cancel();{double _n_c_29660=0.0;
for(;d::truth((_n_c_29660<this->_n_cols_29597));(void)((_n_c_29660++))){d::check_cancel();double _n_v_29661=d::at(this->_n_heat_29600,((_n_r_29659*this->_n_cols_29597)+_n_c_29660));
if(d::truth((_n_v_29661>4.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29696=d::at(this->_n_g_29599,_n_r_29659);auto _n_index_29697=_n_c_29660;auto _n_value_29698=d::String(u"#");d::put(_n_array_29696,_n_index_29697,_n_value_29698);return _n_value_29698;})());
}else {d::check_cancel();if(d::truth((_n_v_29661>1.8))){d::check_cancel();(void)(([&](){auto&& _n_array_29699=d::at(this->_n_g_29599,_n_r_29659);auto _n_index_29700=_n_c_29660;auto _n_value_29701=d::String(u"*");d::put(_n_array_29699,_n_index_29700,_n_value_29701);return _n_value_29701;})());
}
}
}}
}}
double _n_spin_29662=(((_n_t_29642*2.0)*ascii::PI)*0.6);
{double _n_r_29663=0.0;
for(;d::truth((_n_r_29663<_n_FLOOR_29580));(void)((_n_r_29663++))){d::check_cancel();{double _n_c_29664=0.0;
for(;d::truth((_n_c_29664<this->_n_cols_29597));(void)((_n_c_29664++))){d::check_cancel();double _n_mask_29665=0.0;
double _n_hit_29666=0.0;
double _n_sum_29667=0.0;
double _n_lit_29668=0.0;
{double _n_q_29669=0.0;
for(;d::truth((_n_q_29669<4.0));(void)((_n_q_29669++))){d::check_cancel();double _n_v_29670=_n_tool_29595(((_n_c_29664+0.25)+(0.5*double(d::i32(_n_q_29669)&d::i32(1.0)))),((_n_r_29663+0.25)+(0.5*double(d::i32(_n_q_29669)>>(d::u32(1.0)&31)))),_n_spin_29662);
if(d::truth((_n_v_29670<0.0))){d::check_cancel();continue;
}
(void)((_n_hit_29666++));
if(d::truth((_n_v_29670>=0.6))){d::check_cancel();(void)((_n_mask_29665=double(d::i32(_n_mask_29665)|d::i32(double(int32_t(d::u32(1.0)<<(d::u32(_n_q_29669)&31)))))));
(void)((_n_lit_29668=(_n_lit_29668+_n_v_29670)));
}else {d::check_cancel();(void)((_n_sum_29667=(_n_sum_29667+_n_v_29670)));
}
}}
if(d::truth((!d::truth(_n_hit_29666)))){d::check_cancel();continue;
}
if(d::truth(_n_paper_29643)){d::check_cancel();double _n_k_29671=d::round((((_n_sum_29667+_n_lit_29668)/_n_hit_29666)*4.0));
(void)(([&](){auto&& _n_array_29702=d::at(this->_n_g_29599,_n_r_29663);auto _n_index_29703=_n_c_29664;auto _n_value_29704=(d::truth((_n_hit_29666<2.0))?d::String(u" "):d::at(_n_SHADE_29591,d::maximum({1.0,(4.0-_n_k_29671)})));d::put(_n_array_29702,_n_index_29703,_n_value_29704);return _n_value_29704;})());
}else {d::check_cancel();if(d::truth((_n_mask_29665==15.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29705=d::at(this->_n_g_29599,_n_r_29663);auto _n_index_29706=_n_c_29664;auto _n_value_29707=(d::truth(((_n_lit_29668/4.0)>0.9))?d::String(u"█"):d::String(u"▓"));d::put(_n_array_29705,_n_index_29706,_n_value_29707);return _n_value_29707;})());
}else {d::check_cancel();if(d::truth(_n_mask_29665)){d::check_cancel();(void)(([&](){auto&& _n_array_29708=d::at(this->_n_g_29599,_n_r_29663);auto _n_index_29709=_n_c_29664;auto _n_value_29710=d::at(_n_QUAD_29596,_n_mask_29665);d::put(_n_array_29708,_n_index_29709,_n_value_29710);return _n_value_29710;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_29711=d::at(this->_n_g_29599,_n_r_29663);auto _n_index_29712=_n_c_29664;auto _n_value_29713=d::at(_n_SHADE_29591,d::round(((_n_sum_29667/_n_hit_29666)*4.0)));d::put(_n_array_29711,_n_index_29712,_n_value_29713);return _n_value_29713;})());
}
}
}
}}
}}
double _n_flick_29672=([&](){auto _n_argument_29714=std::floor((_n_t_29642*30.0));auto _n_argument_29715=9.0;return _n_hash_29592(_n_argument_29714,_n_argument_29715);})();
(void)(([&](){auto&& _n_array_29716=d::at(this->_n_g_29599,(_n_FLOOR_29580-1.0));auto _n_index_29717=std::floor(_n_EX_29585);auto _n_value_29718=(d::truth((_n_flick_29672<0.5))?d::String(u"@"):d::String(u"#"));d::put(_n_array_29716,_n_index_29717,_n_value_29718);return _n_value_29718;})());
{double _n_c_29673=0.0;
for(;d::truth((_n_c_29673<this->_n_cols_29597));(void)((_n_c_29673++))){d::check_cancel();(void)(([&](){auto&& _n_array_29719=d::at(this->_n_g_29599,_n_FLOOR_29580);auto _n_index_29720=_n_c_29673;auto _n_value_29721=d::String(u"▄");d::put(_n_array_29719,_n_index_29720,_n_value_29721);return _n_value_29721;})());
(void)(([&](){auto&& _n_array_29722=d::at(this->_n_g_29599,(_n_FLOOR_29580+1.0));auto _n_index_29723=_n_c_29673;auto _n_value_29724=d::at(_n_SHADE_29591,2.0);d::put(_n_array_29722,_n_index_29723,_n_value_29724);return _n_value_29724;})());
(void)(([&](){auto&& _n_array_29725=d::at(this->_n_g_29599,(_n_FLOOR_29580+2.0));auto _n_index_29726=_n_c_29673;auto _n_value_29727=d::at(_n_SHADE_29591,(d::truth(_n_paper_29643)?3.0:1.0));d::put(_n_array_29725,_n_index_29726,_n_value_29727);return _n_value_29727;})());
}}
return d::join(d::map(this->_n_g_29599,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_29674=_a0;
return d::join(_n_row_29674,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sparks").cols)*ascii::catalog_meta("sparks").rows);auto _env=std::make_shared<_n_Record_29675>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sparks_meta(){return catalog_meta("sparks");}
std::unique_ptr<Piece> make_sparks(const AsciiPieceOptions &o){return std::make_unique<Native_sparks>(o);}
}
