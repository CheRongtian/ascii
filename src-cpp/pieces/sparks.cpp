// Direct, statically typed C++ from src/pieces/sparks.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29578;
struct _n_Record_29593;
struct _n_Record_29674;
struct _n_Record_29578{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_29578> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29578>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_29593{
double _p_t0{};
double _p_vx{};
double _p_vy{};
double _p_life{};
static std::shared_ptr<_n_Record_29593> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29593>();out->_p_t0=d::decode<double>(j["t0"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_life=d::decode<double>(j["life"]);return out;}
};
struct _n_Record_29674{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29674> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29674>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_29591(double _a0,double _a1);
std::optional<std::array<double,5>> _n_at_29592(std::shared_ptr<_n_Record_29593> _a0,double _a1);
double _n_tool_29594(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_29578> _n_meta_29577=[](){return ([&](){auto _n_object_29677=std::make_shared<_n_Record_29578>();_n_object_29677->_p_name=d::String(u"sparks");_n_object_29677->_p_category=d::String(u"effects");_n_object_29677->_p_note=d::String(u"an angle grinder throwing sparks that arc, skip and cool");_n_object_29677->_p_cols=64.0;_n_object_29677->_p_rows=20.0;_n_object_29677->_p_fps=30.0;return _n_object_29677;})();}();
const double _n_FLOOR_29579=[](){return 17.0;}();
const double _n_RD_29580=[](){return 3.7;}();
const double _n_SINK_29581=[](){return 0.3;}();
const double _n_DX_29582=[](){return 24.0;}();
const double _n_DY_29583=[](){return ((_n_FLOOR_29579-_n_RD_29580)+_n_SINK_29581);}();
const double _n_EX_29584=[](){return (_n_DX_29582+(2.0*std::sqrt(((_n_RD_29580*_n_RD_29580)-std::pow((_n_RD_29580-_n_SINK_29581),2.0)))));}();
const double _n_G_29585=[](){return 30.0;}();
const double _n_RATE_29586=[](){return 320.0;}();
const double _n_LIFE_29587=[](){return 1.3;}();
const double _n_BOUNCE_29588=[](){return 0.3;}();
const double _n_SKID_29589=[](){return 0.55;}();
const d::String _n_SHADE_29590=[](){return d::String(u" ░▒▓█");}();
const d::String _n_QUAD_29595=[](){return d::String(u" ▘▝▀▖▌▞▛▗▚▐▜▄▙▟█");}();
double _n_hash_29591(double _a0,double _a1){double _n_i_29604=_a0;
double _n_s_29605=_a1;
{
double _n_h_29606=([&](){auto _n_left_29678=d::imul(double(d::i32(_n_i_29604)^d::i32(2654435769.0)),2246822507.0);auto _n_right_29679=d::imul((_n_s_29605+1.0),3266489909.0);return double(d::i32(_n_left_29678)^d::i32(_n_right_29679));})();
(void)((_n_h_29606=d::imul(double(d::i32(_n_h_29606)^d::i32(double(d::u32(_n_h_29606)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_29606=d::imul(double(d::i32(_n_h_29606)^d::i32(double(d::u32(_n_h_29606)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_29606)^d::i32(double(d::u32(_n_h_29606)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

std::optional<std::array<double,5>> _n_at_29592(std::shared_ptr<_n_Record_29593> _a0,double _a1){std::shared_ptr<_n_Record_29593> _n_s_29607=_a0;
double _n_a_29608=_a1;
{
double _n_x_29609=_n_EX_29584;
double _n_vx_29610=_n_s_29607->_p_vx;
double _n_vy_29611=_n_s_29607->_p_vy;
{double _n_b_29612=0.0;
for(;d::truth((_n_b_29612<3.0));(void)((_n_b_29612++))){d::check_cancel();double _n_T_29613=((2.0*_n_vy_29611)/_n_G_29585);
if(d::truth((_n_a_29608<_n_T_29613))){d::check_cancel();return std::array<double,5>{(_n_x_29609+(_n_vx_29610*_n_a_29608)),(((_n_FLOOR_29579-0.5)-(_n_vy_29611*_n_a_29608))+(((_n_G_29585*_n_a_29608)*_n_a_29608)/2.0)),_n_vx_29610,(_n_vy_29611-(_n_G_29585*_n_a_29608)),_n_b_29612};
}
(void)((_n_x_29609=(_n_x_29609+(_n_vx_29610*_n_T_29613))));
(void)((_n_a_29608=(_n_a_29608-_n_T_29613)));
(void)((_n_vx_29610=(_n_vx_29610*_n_SKID_29589)));
(void)((_n_vy_29611=(_n_vy_29611*_n_BOUNCE_29588)));
}}
return std::optional<std::array<double,5>>{};

}
}

double _n_tool_29594(double _a0,double _a1,double _a2){double _n_x_29614=_a0;
double _n_y_29615=_a1;
double _n_spin_29616=_a2;
{
double _n_X_29617=(_n_x_29614-_n_DX_29582);
double _n_Y_29618=((_n_DY_29583-_n_y_29615)*2.0);
double _n_d_29619=(d::hypot(std::initializer_list<double>{_n_X_29617,_n_Y_29618})/2.0);
double _n_ang_29620=std::atan2(_n_Y_29618,_n_X_29617);
if(d::truth((_n_d_29619<_n_RD_29580))){d::check_cancel();if(d::truth((_n_d_29619<0.5))){d::check_cancel();return 0.1;
}
if(d::truth((_n_d_29619<1.05))){d::check_cancel();return 0.9;
}
if(d::truth((_n_d_29619>(_n_RD_29580-0.55)))){d::check_cancel();return 1.0;
}
double _n_k_29621=d::mod((d::mod((_n_ang_29620-_n_spin_29616),(2.0*ascii::PI))+(2.0*ascii::PI)),(2.0*ascii::PI));
if(((d::truth((_n_d_29619>1.7))&&d::truth((_n_d_29619<2.6)))&&d::truth((_n_k_29621<1.3)))){d::check_cancel();return 0.8;
}
return 0.3;
}
if((((d::truth((_n_d_29619>(_n_RD_29580+0.45)))&&d::truth((_n_d_29619<(_n_RD_29580+1.35))))&&d::truth((_n_ang_29620>0.75)))&&d::truth((_n_ang_29620<3.8)))){d::check_cancel();return (d::truth((_n_d_29619<(_n_RD_29580+0.9)))?1.0:0.7);
}
double _n_hx_29622=(_n_x_29614-(_n_DX_29582-3.5));
double _n_top_29623=1.2;
double _n_grip_29624=6.6;
double _n_base_29625=((_n_DY_29583-_n_RD_29580)-1.2);
if(((d::truth((_n_y_29615>_n_top_29623))&&d::truth((_n_y_29615<_n_base_29625)))&&d::truth((std::fabs(_n_hx_29622)<(d::truth((_n_y_29615<_n_grip_29624))?1.6:0.9))))){d::check_cancel();if((d::truth((_n_y_29615<(_n_top_29623+0.6)))&&d::truth((std::fabs(_n_hx_29622)>1.1)))){d::check_cancel();return (-d::number(1.0));
}
if(d::truth((_n_hx_29622>0.3))){d::check_cancel();return 0.4;
}
return (((d::truth((_n_y_29615>(_n_top_29623+1.0)))&&d::truth((_n_y_29615<(_n_grip_29624-0.5))))&&d::truth((d::mod(std::floor(_n_y_29615),2.0)==0.0)))?0.7:0.95);
}
double _n_by_29626=((_n_y_29615-(_n_DY_29583-0.4))/2.0);
if(((d::truth((_n_x_29614>1.0))&&d::truth((_n_x_29614<_n_DX_29582)))&&d::truth((std::fabs(_n_by_29626)<1.0)))){d::check_cancel();if((d::truth((_n_x_29614<2.5))&&d::truth((std::fabs(_n_by_29626)>0.55)))){d::check_cancel();return (-d::number(1.0));
}
if((((d::truth((_n_x_29614>4.0))&&d::truth((_n_x_29614<11.0)))&&d::truth((std::fabs((_n_by_29626+0.1))<0.4)))&&d::truth((d::mod(std::floor(_n_x_29614),2.0)==0.0)))){d::check_cancel();return 0.1;
}
return (d::truth((_n_by_29626<(-d::number(0.5))))?0.95:(d::truth((_n_by_29626<0.1))?0.75:(d::truth((_n_by_29626<0.55))?0.45:0.25)));
}
return (-d::number(1.0));

}
}

struct Native_sparks final:ascii::Piece{
double _n_cols_29596{};
double _n_rows_29597{};
d::Array<d::Array<d::String,false>,false> _n_g_29598{};
d::Array<float,true> _n_heat_29599{};
d::Array<float,true> _n_top_29600{};
std::function<d::String(double,std::shared_ptr<_n_Record_29674>)> _render;
std::shared_ptr<_n_Record_29593> _n_spark_29601(double _a0){double _n_i_29627=_a0;
{
double _n_t0_29628=((_n_i_29627+_n_hash_29591(_n_i_29627,1.0))/_n_RATE_29586);
double _n_press_29629=(0.72+([&](){auto _n_left_29727=(0.28*std::sin((_n_t0_29628*1.9)));auto _n_right_29728=std::sin(((_n_t0_29628*0.7)+1.0));return (_n_left_29727*_n_right_29728);})());
if(d::truth((_n_hash_29591(_n_i_29627,2.0)>_n_press_29629))){d::check_cancel();return std::shared_ptr<_n_Record_29593>{};
}
double _n_deg_29630=(4.0+(30.0*(([&](){auto _n_left_29729=_n_hash_29591(_n_i_29627,3.0);auto _n_right_29730=_n_hash_29591(_n_i_29627,6.0);return (_n_left_29729+_n_right_29730);})()/2.0)));
if(d::truth((_n_hash_29591(_n_i_29627,7.0)<0.1))){d::check_cancel();(void)((_n_deg_29630=(_n_deg_29630+(25.0*_n_hash_29591(_n_i_29627,8.0)))));
}
double _n_ang_29631=((_n_deg_29630*ascii::PI)/180.0);
double _n_v_29632=(34.0+(44.0*_n_hash_29591(_n_i_29627,4.0)));
return ([&](){auto _n_object_29732=std::make_shared<_n_Record_29593>();_n_object_29732->_p_t0=_n_t0_29628;_n_object_29732->_p_vx=(_n_v_29632*std::cos(_n_ang_29631));_n_object_29732->_p_vy=((_n_v_29632*std::sin(_n_ang_29631))/2.0);_n_object_29732->_p_life=(0.3+((_n_LIFE_29587-0.3)*std::pow(_n_hash_29591(_n_i_29627,5.0),0.8)));return _n_object_29732;})();

}
}

void _n_mark_29602(double _a0,double _a1,double _a2,d::String _a3){double _n_c_29633=_a0;
double _n_r_29634=_a1;
double _n_h_29635=_a2;
d::String _n_ch_29636=_a3;
{
if((((d::truth((_n_c_29633<0.0))||d::truth((_n_c_29633>=this->_n_cols_29596)))||d::truth((_n_r_29634<0.0)))||d::truth((_n_r_29634>=_n_FLOOR_29579)))){d::check_cancel();return;
}
double _n_k_29637=((_n_r_29634*this->_n_cols_29596)+_n_c_29633);
(void)(([&](){auto&& _n_array_29733=this->_n_heat_29599;auto _n_index_29734=_n_k_29637;auto _n_value_29735=(d::at(_n_array_29733,_n_index_29734)+_n_h_29635);d::put(_n_array_29733,_n_index_29734,_n_value_29735);return _n_value_29735;})());
if(d::truth((_n_h_29635>d::at(this->_n_top_29600,_n_k_29637)))){d::check_cancel();(void)(([&](){auto&& _n_array_29736=this->_n_top_29600;auto _n_index_29737=_n_k_29637;auto _n_value_29738=_n_h_29635;d::put(_n_array_29736,_n_index_29737,_n_value_29738);return _n_value_29738;})());
(void)(([&](){auto&& _n_array_29739=d::at(this->_n_g_29598,_n_r_29634);auto _n_index_29740=_n_c_29633;auto _n_value_29741=_n_ch_29636;d::put(_n_array_29739,_n_index_29740,_n_value_29741);return _n_value_29741;})());
}

}
}

d::String _n_along_29603(double _a0,double _a1){double _n_vx_29638=_a0;
double _n_vy_29639=_a1;
{
double _n_a_29640=((std::atan2((2.0*_n_vy_29639),_n_vx_29638)*180.0)/ascii::PI);
return ((d::truth((_n_a_29640>60.0))||d::truth((_n_a_29640<(-d::number(60.0)))))?d::String(u"|"):(d::truth((_n_a_29640>20.0))?d::String(u"/"):(d::truth((_n_a_29640<(-d::number(20.0))))?d::String(u"\\"):d::String(u"-"))));

}
}

explicit Native_sparks(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29680=_n_meta_29577;
this->_n_cols_29596=_n_binding_29680->_p_cols;
this->_n_rows_29597=_n_binding_29680->_p_rows;
this->_n_g_29598=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_29597,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_29596));}));
this->_n_heat_29599=d::Array<float,true>(size_t((this->_n_cols_29596*this->_n_rows_29597)));
this->_n_top_29600=d::Array<float,true>(size_t((this->_n_cols_29596*this->_n_rows_29597)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_29674> _a1) mutable ->d::String{double _n_t_29641=_a0;
auto _n_binding_29683=(d::present(_a1)?_a1:([&](){auto _n_object_29682=std::make_shared<_n_Record_29674>();return _n_object_29682;})());
bool _n_paper_29642=(d::present(_n_binding_29683->_p_paper)?d::read(_n_binding_29683->_p_paper):false);
{
{double _n_r_29643=0.0;
for(;d::truth((_n_r_29643<this->_n_rows_29597));(void)((_n_r_29643++))){d::check_cancel();(void)(d::at(this->_n_g_29598,_n_r_29643).fill(d::String(u" ")));
}}
(void)(this->_n_heat_29599.fill(0.0));
(void)(this->_n_top_29600.fill(0.0));
{double _n_i_29644=(std::floor(((_n_t_29641-_n_LIFE_29587)*_n_RATE_29586))-1.0);
for(;d::truth((_n_i_29644<=std::floor((_n_t_29641*_n_RATE_29586))));(void)((_n_i_29644++))){d::check_cancel();std::shared_ptr<_n_Record_29593> _n_s_29645=this->_n_spark_29601(_n_i_29644);
if(d::truth((!d::truth(_n_s_29645)))){d::check_cancel();continue;
}
double _n_a_29646=(_n_t_29641-_n_s_29645->_p_t0);
if((d::truth((_n_a_29646<0.0))||d::truth((_n_a_29646>_n_s_29645->_p_life)))){d::check_cancel();continue;
}
std::optional<std::array<double,5>> _n_p_29647=_n_at_29592(_n_s_29645,_n_a_29646);
if(d::truth((!d::truth(_n_p_29647)))){d::check_cancel();continue;
}
auto _n_binding_29684=d::read(_n_p_29647);
double _n_x_29648=d::at(_n_binding_29684,0.0);
double _n_y_29649=d::at(_n_binding_29684,1.0);
double _n_vx_29650=d::at(_n_binding_29684,2.0);
double _n_vy_29651=d::at(_n_binding_29684,3.0);
double _n_b_29652=d::at(_n_binding_29684,4.0);
double _n_h_29653=(std::pow((1.0-(_n_a_29646/_n_s_29645->_p_life)),1.4)*(d::truth(_n_b_29652)?0.5:1.0));
if((d::truth((!d::truth(_n_b_29652)))&&d::truth((_n_h_29653>0.35)))){d::check_cancel();double _n_n_29654=std::ceil(((d::hypot(std::initializer_list<double>{_n_vx_29650,(2.0*_n_vy_29651)})*0.04)*_n_h_29653));
d::String _n_ch_29655=this->_n_along_29603(_n_vx_29650,_n_vy_29651);
{double _n_k_29656=_n_n_29654;
for(;d::truth((_n_k_29656>=1.0));(void)((_n_k_29656--))){d::check_cancel();auto&& _n_q_29657=d::read(([&](){auto _n_argument_29685=_n_s_29645;auto _n_argument_29686=d::maximum({0.0,(_n_a_29646-(((_n_k_29656/_n_n_29654)*0.04)*_n_h_29653))});return _n_at_29592(_n_argument_29685,_n_argument_29686);})());
(void)(([&](){auto _n_argument_29687=std::floor(d::at(_n_q_29657,0.0));auto _n_argument_29688=std::floor(d::at(_n_q_29657,1.0));auto _n_argument_29689=(_n_h_29653*0.45);auto _n_argument_29690=_n_ch_29655;return this->_n_mark_29602(_n_argument_29687,_n_argument_29688,_n_argument_29689,_n_argument_29690);})());
}}
}
(void)(([&](){auto _n_argument_29691=std::floor(_n_x_29648);auto _n_argument_29692=std::floor(_n_y_29649);auto _n_argument_29693=_n_h_29653;auto _n_argument_29694=(d::truth((_n_h_29653>0.75))?d::String(u"*"):(d::truth((_n_h_29653>0.5))?d::String(u"+"):(d::truth((_n_h_29653>0.25))?d::String(u"·"):d::String(u"."))));return this->_n_mark_29602(_n_argument_29691,_n_argument_29692,_n_argument_29693,_n_argument_29694);})());
}}
{double _n_r_29658=0.0;
for(;d::truth((_n_r_29658<_n_FLOOR_29579));(void)((_n_r_29658++))){d::check_cancel();{double _n_c_29659=0.0;
for(;d::truth((_n_c_29659<this->_n_cols_29596));(void)((_n_c_29659++))){d::check_cancel();double _n_v_29660=d::at(this->_n_heat_29599,((_n_r_29658*this->_n_cols_29596)+_n_c_29659));
if(d::truth((_n_v_29660>4.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29695=d::at(this->_n_g_29598,_n_r_29658);auto _n_index_29696=_n_c_29659;auto _n_value_29697=d::String(u"#");d::put(_n_array_29695,_n_index_29696,_n_value_29697);return _n_value_29697;})());
}else {d::check_cancel();if(d::truth((_n_v_29660>1.8))){d::check_cancel();(void)(([&](){auto&& _n_array_29698=d::at(this->_n_g_29598,_n_r_29658);auto _n_index_29699=_n_c_29659;auto _n_value_29700=d::String(u"*");d::put(_n_array_29698,_n_index_29699,_n_value_29700);return _n_value_29700;})());
}
}
}}
}}
double _n_spin_29661=(((_n_t_29641*2.0)*ascii::PI)*0.6);
{double _n_r_29662=0.0;
for(;d::truth((_n_r_29662<_n_FLOOR_29579));(void)((_n_r_29662++))){d::check_cancel();{double _n_c_29663=0.0;
for(;d::truth((_n_c_29663<this->_n_cols_29596));(void)((_n_c_29663++))){d::check_cancel();double _n_mask_29664=0.0;
double _n_hit_29665=0.0;
double _n_sum_29666=0.0;
double _n_lit_29667=0.0;
{double _n_q_29668=0.0;
for(;d::truth((_n_q_29668<4.0));(void)((_n_q_29668++))){d::check_cancel();double _n_v_29669=_n_tool_29594(((_n_c_29663+0.25)+(0.5*double(d::i32(_n_q_29668)&d::i32(1.0)))),((_n_r_29662+0.25)+(0.5*double(d::i32(_n_q_29668)>>(d::u32(1.0)&31)))),_n_spin_29661);
if(d::truth((_n_v_29669<0.0))){d::check_cancel();continue;
}
(void)((_n_hit_29665++));
if(d::truth((_n_v_29669>=0.6))){d::check_cancel();(void)((_n_mask_29664=double(d::i32(_n_mask_29664)|d::i32(double(int32_t(d::u32(1.0)<<(d::u32(_n_q_29668)&31)))))));
(void)((_n_lit_29667=(_n_lit_29667+_n_v_29669)));
}else {d::check_cancel();(void)((_n_sum_29666=(_n_sum_29666+_n_v_29669)));
}
}}
if(d::truth((!d::truth(_n_hit_29665)))){d::check_cancel();continue;
}
if(d::truth(_n_paper_29642)){d::check_cancel();double _n_k_29670=d::round((((_n_sum_29666+_n_lit_29667)/_n_hit_29665)*4.0));
(void)(([&](){auto&& _n_array_29701=d::at(this->_n_g_29598,_n_r_29662);auto _n_index_29702=_n_c_29663;auto _n_value_29703=(d::truth((_n_hit_29665<2.0))?d::String(u" "):d::at(_n_SHADE_29590,d::maximum({1.0,(4.0-_n_k_29670)})));d::put(_n_array_29701,_n_index_29702,_n_value_29703);return _n_value_29703;})());
}else {d::check_cancel();if(d::truth((_n_mask_29664==15.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29704=d::at(this->_n_g_29598,_n_r_29662);auto _n_index_29705=_n_c_29663;auto _n_value_29706=(d::truth(((_n_lit_29667/4.0)>0.9))?d::String(u"█"):d::String(u"▓"));d::put(_n_array_29704,_n_index_29705,_n_value_29706);return _n_value_29706;})());
}else {d::check_cancel();if(d::truth(_n_mask_29664)){d::check_cancel();(void)(([&](){auto&& _n_array_29707=d::at(this->_n_g_29598,_n_r_29662);auto _n_index_29708=_n_c_29663;auto _n_value_29709=d::at(_n_QUAD_29595,_n_mask_29664);d::put(_n_array_29707,_n_index_29708,_n_value_29709);return _n_value_29709;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_29710=d::at(this->_n_g_29598,_n_r_29662);auto _n_index_29711=_n_c_29663;auto _n_value_29712=d::at(_n_SHADE_29590,d::round(((_n_sum_29666/_n_hit_29665)*4.0)));d::put(_n_array_29710,_n_index_29711,_n_value_29712);return _n_value_29712;})());
}
}
}
}}
}}
double _n_flick_29671=([&](){auto _n_argument_29713=std::floor((_n_t_29641*30.0));auto _n_argument_29714=9.0;return _n_hash_29591(_n_argument_29713,_n_argument_29714);})();
(void)(([&](){auto&& _n_array_29715=d::at(this->_n_g_29598,(_n_FLOOR_29579-1.0));auto _n_index_29716=std::floor(_n_EX_29584);auto _n_value_29717=(d::truth((_n_flick_29671<0.5))?d::String(u"@"):d::String(u"#"));d::put(_n_array_29715,_n_index_29716,_n_value_29717);return _n_value_29717;})());
{double _n_c_29672=0.0;
for(;d::truth((_n_c_29672<this->_n_cols_29596));(void)((_n_c_29672++))){d::check_cancel();(void)(([&](){auto&& _n_array_29718=d::at(this->_n_g_29598,_n_FLOOR_29579);auto _n_index_29719=_n_c_29672;auto _n_value_29720=d::String(u"▄");d::put(_n_array_29718,_n_index_29719,_n_value_29720);return _n_value_29720;})());
(void)(([&](){auto&& _n_array_29721=d::at(this->_n_g_29598,(_n_FLOOR_29579+1.0));auto _n_index_29722=_n_c_29672;auto _n_value_29723=d::at(_n_SHADE_29590,2.0);d::put(_n_array_29721,_n_index_29722,_n_value_29723);return _n_value_29723;})());
(void)(([&](){auto&& _n_array_29724=d::at(this->_n_g_29598,(_n_FLOOR_29579+2.0));auto _n_index_29725=_n_c_29672;auto _n_value_29726=d::at(_n_SHADE_29590,(d::truth(_n_paper_29642)?3.0:1.0));d::put(_n_array_29724,_n_index_29725,_n_value_29726);return _n_value_29726;})());
}}
return d::join(d::map(this->_n_g_29598,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_29673=_a0;
return d::join(_n_row_29673,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sparks").cols)*ascii::catalog_meta("sparks").rows);auto _env=std::make_shared<_n_Record_29674>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sparks_meta(){return catalog_meta("sparks");}
std::unique_ptr<Piece> make_sparks(const AsciiPieceOptions &o){return std::make_unique<Native_sparks>(o);}
}
