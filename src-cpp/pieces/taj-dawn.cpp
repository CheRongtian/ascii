// Direct, statically typed C++ from src/pieces/taj-dawn.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31881;
struct _n_Record_31940;
struct _n_Record_32275;
struct _n_Record_31881{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_31881> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31881>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_31940{
double _p_x{};
double _p_base{};
double _p_h{};
double _p_w{};
double _p_s{};
static std::shared_ptr<_n_Record_31940> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31940>();out->_p_x=d::decode<double>(j["x"]);out->_p_base=d::decode<double>(j["base"]);out->_p_h=d::decode<double>(j["h"]);out->_p_w=d::decode<double>(j["w"]);out->_p_s=d::decode<double>(j["s"]);return out;}
};
struct _n_Record_32275{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32275> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32275>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_31903(double _a0,double _a1);
double _n_noise_31904(double _a0,double _a1,double _a2);
double _n_fbm_31905(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_31906(double _a0);
double _n_smooth_31907(double _a0,double _a1,double _a2);
double _n_mix_31908(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_31909(d::String _a0);
double _n_onion_31910(double _a0);
double _n_arch_31911(double _a0,double _a1);
std::optional<std::array<double,2>> _n_taj_31912(double _a0,double _a1);
double _n_mosque_31913(double _a0,double _a1);
std::shared_ptr<_n_Record_31881> _n_meta_31880=[](){return ([&](){auto _n_object_32278=std::make_shared<_n_Record_31881>();_n_object_32278->_p_name=d::String(u"taj dawn");_n_object_32278->_p_category=d::String(u"scenes");_n_object_32278->_p_note=d::String(u"the taj mahal at sunrise, mirrored in its pool through morning haze");_n_object_32278->_p_cols=200.0;_n_object_32278->_p_rows=100.0;_n_object_32278->_p_cell=1.0;_n_object_32278->_p_fps=15.0;_n_object_32278->_p_ground=d::String(u"#0d0a13");_n_object_32278->_p_palette=d::Array<d::String,false>{d::String(u"#2e2a55"),d::String(u"#3d3870"),d::String(u"#514a8a"),d::String(u"#6a62a3"),d::String(u"#8a83bd"),d::String(u"#5a3a5e"),d::String(u"#7a4d72"),d::String(u"#9a6284"),d::String(u"#b97a92"),d::String(u"#d495a2"),d::String(u"#b8705a"),d::String(u"#d98d66"),d::String(u"#efab78"),d::String(u"#f8c98e"),d::String(u"#ffe2ae"),d::String(u"#fff3d8"),d::String(u"#fffcf2"),d::String(u"#8e7f9e"),d::String(u"#ad9cb4"),d::String(u"#cbb6c4"),d::String(u"#e3cdd2"),d::String(u"#f3e0dc"),d::String(u"#2a4a3e"),d::String(u"#36584a"),d::String(u"#4a6c58"),d::String(u"#66845f"),d::String(u"#8a9a68"),d::String(u"#8a4a3e"),d::String(u"#b0624a"),d::String(u"#3a2f4a"),d::String(u"#4e3d5a"),d::String(u"#f6d6c0"),d::String(u"#e9bfae"),d::String(u"#5e6a40"),d::String(u"#7d8a52"),d::String(u"#a3a064"),d::String(u"#c2b274")};return _n_object_32278;})();}();
const double _n_W_31882=[](){return 200.0;}();
const double _n_H_31883=[](){return 100.0;}();
const double _n_CX_31884=[](){return 128.0;}();
const double _n_BASE_31885=[](){return 68.0;}();
const double _n_HZ_31886=[](){return 60.0;}();
const double _n_S_31887=[](){return 0.7;}();
d::Array<double,false> _n_SUN_31888=[](){return d::Array<double,false>{36.0,40.0};}();
const double _n_MX_31889=[](){return 45.0;}();
const double _n_MB_31890=[](){return 67.0;}();
const double _n_KR_31891=[](){return 1.55;}();
const d::String _n_DOTS_31892=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_31893=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_31894=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_31954=_a0;
return ((_n_v_31954/16.0)-0.47);});}();
const double _n_SKY_31895=[](){return 0.0;}();
const double _n_BGTREE_31896=[](){return 1.0;}();
const double _n_MARBLE_31897=[](){return 2.0;}();
const double _n_LAWN_31898=[](){return 3.0;}();
const double _n_WALK_31899=[](){return 4.0;}();
const double _n_POOL_31900=[](){return 5.0;}();
const double _n_CYPRESS_31901=[](){return 6.0;}();
const double _n_MOSQUE_31902=[](){return 7.0;}();
double _n_hash_31903(double _a0,double _a1){double _n_x_31955=_a0;
double _n_y_31956=_a1;
{
double _n_h_31957=([&](){auto _n_left_32279=d::imul(double(d::i32(_n_x_31955)|d::i32(0.0)),374761393.0);auto _n_right_32280=d::imul(double(d::i32(_n_y_31956)|d::i32(0.0)),668265263.0);return (_n_left_32279+_n_right_32280);})();
(void)((_n_h_31957=d::imul(double(d::i32(_n_h_31957)^d::i32(double(d::u32(_n_h_31957)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_31957)^d::i32(double(d::u32(_n_h_31957)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_31904(double _a0,double _a1,double _a2){double _n_x_31958=_a0;
double _n_y_31959=_a1;
double _n_period_31960=_a2;
{
double _n_xi_31961=std::floor(_n_x_31958);
double _n_yi_31962=std::floor(_n_y_31959);
double _n_fx_31963=(_n_x_31958-_n_xi_31961);
double _n_fy_31964=(_n_y_31959-_n_yi_31962);
double _n_u_31965=((_n_fx_31963*_n_fx_31963)*(3.0-(2.0*_n_fx_31963)));
double _n_v_31966=((_n_fy_31964*_n_fy_31964)*(3.0-(2.0*_n_fy_31964)));
double _n_x0_31967=_n_xi_31961;
double _n_x1_31968=(_n_xi_31961+1.0);
if(d::truth(_n_period_31960)){d::check_cancel();(void)((_n_x0_31967=d::mod((d::mod(_n_xi_31961,_n_period_31960)+_n_period_31960),_n_period_31960)));
(void)((_n_x1_31968=d::mod((_n_x0_31967+1.0),_n_period_31960)));
}
double _n_a_31969=_n_hash_31903(_n_x0_31967,_n_yi_31962);
double _n_b_31970=_n_hash_31903(_n_x1_31968,_n_yi_31962);
double _n_c_31971=_n_hash_31903(_n_x0_31967,(_n_yi_31962+1.0));
double _n_d_31972=_n_hash_31903(_n_x1_31968,(_n_yi_31962+1.0));
return (((_n_a_31969+((_n_b_31970-_n_a_31969)*_n_u_31965))+((_n_c_31971-_n_a_31969)*_n_v_31966))+(((((_n_a_31969-_n_b_31970)-_n_c_31971)+_n_d_31972)*_n_u_31965)*_n_v_31966));

}
}

double _n_fbm_31905(double _a0,double _a1,double _a2,double _a3){double _n_x_31973=_a0;
double _n_y_31974=_a1;
double _n_octaves_31975=_a2;
double _n_period_31976=_a3;
{
double _n_s_31977=0.0;
double _n_n_31978=0.0;
double _n_amp_31979=0.5;
double _n_f_31980=1.0;
{double _n_i_31981=0.0;
for(;d::truth((_n_i_31981<_n_octaves_31975));(void)((_n_i_31981++))){d::check_cancel();(void)((_n_s_31977=(_n_s_31977+(_n_amp_31979*_n_noise_31904((_n_x_31973*_n_f_31980),(_n_y_31974*_n_f_31980),(_n_period_31976*_n_f_31980))))));
(void)((_n_n_31978=(_n_n_31978+_n_amp_31979)));
(void)((_n_amp_31979=(_n_amp_31979*0.5)));
(void)((_n_f_31980=(_n_f_31980*2.0)));
}}
return (_n_s_31977/_n_n_31978);

}
}

double _n_clamp_31906(double _a0){double _n_v_31982=_a0;
return (d::truth((_n_v_31982<0.0))?0.0:(d::truth((_n_v_31982>1.0))?1.0:_n_v_31982));}

double _n_smooth_31907(double _a0,double _a1,double _a2){double _n_a_31983=_a0;
double _n_b_31984=_a1;
double _n_v_31985=_a2;
{
double _n_k_31986=_n_clamp_31906(((_n_v_31985-_n_a_31983)/(_n_b_31984-_n_a_31983)));
return ((_n_k_31986*_n_k_31986)*(3.0-(2.0*_n_k_31986)));

}
}

double _n_mix_31908(double _a0,double _a1,double _a2){double _n_a_31987=_a0;
double _n_b_31988=_a1;
double _n_k_31989=_a2;
return (_n_a_31987+((_n_b_31988-_n_a_31987)*_n_k_31989));}

d::Array<double,false> _n_hex_31909(d::String _a0){d::String _n_s_31990=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_31991=_a0;
return (([&](){auto _n_argument_32281=d::slice(_n_s_31990,_n_i_31991,(_n_i_31991+2.0));auto _n_argument_32282=16.0;return d::parseInt(_n_argument_32281,_n_argument_32282);})()/255.0);});}

double _n_onion_31910(double _a0){double _n_h_31992=_a0;
return (d::truth((_n_h_31992<0.3))?(0.8+(0.2*std::sin((((_n_h_31992/0.3)*ascii::PI)*0.5)))):([&](){auto _n_argument_32283=std::cos(((((_n_h_31992-0.3)/0.7)*ascii::PI)*0.5));auto _n_argument_32284=1.45;return std::pow(_n_argument_32283,_n_argument_32284);})());}

double _n_arch_31911(double _a0,double _a1){double _n_w_31993=_a0;
double _n_h_31994=_a1;
{
if(d::truth((_n_h_31994<=0.0))){d::check_cancel();return _n_w_31993;
}
double _n_c_31995=(_n_w_31993*0.5);
double _n_R_31996=(_n_w_31993+_n_c_31995);
double _n_q_31997=((_n_R_31996*_n_R_31996)-(_n_h_31994*_n_h_31994));
return (d::truth((_n_q_31997>0.0))?([&](){auto _n_argument_32285=0.0;auto _n_argument_32286=(std::sqrt(_n_q_31997)-_n_c_31995);return d::maximum({_n_argument_32285,_n_argument_32286});})():0.0);

}
}

std::optional<std::array<double,2>> _n_taj_31912(double _a0,double _a1){double _n_X_31998=_a0;
double _n_Y_31999=_a1;
{
double _n_ax_32000=std::fabs(_n_X_31998);
double _n_left_32001=(d::truth((_n_X_31998<0.0))?1.0:(-d::number(1.0)));
if(((d::truth((_n_Y_31999>=72.0))&&d::truth((_n_Y_31999<80.5)))&&d::truth((_n_ax_32000<=([&](){auto _n_left_32287=(0.75+(d::truth((std::fabs((_n_Y_31999-74.5))<0.9))?0.6:0.0));auto _n_right_32288=(d::truth((std::fabs((_n_Y_31999-77.0))<0.7))?0.4:0.0);return (_n_left_32287+_n_right_32288);})())))){d::check_cancel();return std::array<double,2>{(0.75+(0.2*_n_left_32001)),0.0};
}
if((d::truth((_n_Y_31999>=47.5))&&d::truth((_n_Y_31999<72.0)))){d::check_cancel();double _n_h_32002=((_n_Y_31999-47.5)/24.5);
double _n_hw_32003=(15.0*_n_onion_31910(_n_h_32002));
if(d::truth((_n_ax_32000<=_n_hw_32003))){d::check_cancel();double _n_nx_32004=(_n_X_31998/(_n_hw_32003+0.01));
double _n_nz_32005=std::sqrt(d::maximum({0.0,(1.0-(_n_nx_32004*_n_nx_32004))}));
return std::array<double,2>{_n_clamp_31906(((0.3+(0.5*(((-d::number(0.8))*_n_nx_32004)+(0.4*_n_nz_32005))))+(0.2*_n_h_32002))),0.0};
}
}
double _n_cx_32006=(_n_ax_32000-17.5);
if(((d::truth((std::fabs(_n_cx_32006)<=4.4))&&d::truth((_n_Y_31999>=39.5)))&&d::truth((_n_Y_31999<55.5)))){d::check_cancel();double _n_nx_32007=((d::truth((_n_X_31998<0.0))?(-d::number(_n_cx_32006)):_n_cx_32006)/4.4);
if(d::truth((_n_Y_31999<41.0))){d::check_cancel();return std::array<double,2>{_n_clamp_31906((0.5-((0.4*_n_nx_32007)*_n_left_32001))),0.0};
}
if(d::truth((_n_Y_31999<46.5))){d::check_cancel();if(d::truth((std::fabs(_n_cx_32006)>3.6))){d::check_cancel();return std::optional<std::array<double,2>>{};
}
bool _n_open_32008=([&]()->bool{auto _n_logical_32289=([&]()->bool{auto _n_logical_32290=(std::fabs(_n_cx_32006)<2.6);return d::truth(_n_logical_32290)?(std::fabs(_n_cx_32006)>0.6):_n_logical_32290;})();return d::truth(_n_logical_32289)?(_n_Y_31999<45.5):_n_logical_32289;})();
return std::array<double,2>{_n_clamp_31906((0.5-(((0.45*(d::truth((_n_X_31998<0.0))?(-d::number(_n_cx_32006)):_n_cx_32006))/4.0)*_n_left_32001))),(d::truth(_n_open_32008)?0.75:0.0)};
}
if(d::truth((_n_Y_31999<47.3))){d::check_cancel();return std::array<double,2>{_n_clamp_31906((0.55-((0.4*_n_nx_32007)*_n_left_32001))),0.0};
}
double _n_h_32009=((_n_Y_31999-47.3)/6.5);
if((d::truth((_n_h_32009<1.0))&&d::truth(([&](){auto _n_left_32291=std::fabs(_n_cx_32006);auto _n_right_32292=(4.0*_n_onion_31910(_n_h_32009));return (_n_left_32291<=_n_right_32292);})()))){d::check_cancel();return std::array<double,2>{_n_clamp_31906(((0.55-((0.6*((d::truth((_n_X_31998<0.0))?(-d::number(_n_cx_32006)):_n_cx_32006)/((4.0*_n_onion_31910(_n_h_32009))+0.01)))*_n_left_32001))+(0.1*_n_h_32009))),0.0};
}
if((d::truth((_n_h_32009>=1.0))&&d::truth((std::fabs(_n_cx_32006)<0.6)))){d::check_cancel();return std::array<double,2>{0.6,0.0};
}
}
if(((d::truth((_n_Y_31999>=40.0))&&d::truth((_n_Y_31999<47.5)))&&d::truth((_n_ax_32000<=12.2)))){d::check_cancel();double _n_nx_32010=(_n_X_31998/12.2);
double _n_band_32011=(d::truth((_n_Y_31999>45.8))?0.15:0.0);
return std::array<double,2>{_n_clamp_31906(((0.45-(0.55*_n_nx_32010))+_n_band_32011)),0.0};
}
if((d::truth(([&]()->bool{auto _n_logical_32293=([&]()->bool{auto _n_logical_32294=(std::fabs((_n_ax_32000-8.8))<0.75);return d::truth(_n_logical_32294)?(_n_Y_31999>=40.0):_n_logical_32294;})();return d::truth(_n_logical_32293)?(_n_Y_31999<47.5):_n_logical_32293;})())||d::truth(([&]()->bool{auto _n_logical_32295=([&]()->bool{auto _n_logical_32296=(std::fabs((_n_ax_32000-28.2))<0.75);return d::truth(_n_logical_32296)?(_n_Y_31999>=38.0):_n_logical_32296;})();return d::truth(_n_logical_32295)?(_n_Y_31999<44.5):_n_logical_32295;})()))){d::check_cancel();return std::array<double,2>{(0.55+(0.25*_n_left_32001)),0.0};
}
if(((d::truth((_n_ax_32000<=28.5))&&d::truth((_n_Y_31999>=7.0)))&&d::truth((_n_Y_31999<40.0)))){d::check_cancel();if(((d::truth((_n_Y_31999>=38.5))&&d::truth((_n_ax_32000>9.0)))&&d::truth(double(d::i32(std::floor(((_n_ax_32000+0.5)/1.5)))&d::i32(1.0))))){d::check_cancel();return std::optional<std::array<double,2>>{};
}
if(d::truth((_n_ax_32000<=9.0))){d::check_cancel();double _n_hw_32012=_n_arch_31911(6.0,(_n_Y_31999-25.0));
if((d::truth((_n_ax_32000<=_n_hw_32012))&&d::truth((_n_Y_31999<(25.0+9.0))))){d::check_cancel();bool _n_door_32013=([&]()->bool{auto _n_logical_32297=(_n_ax_32000<=3.2);return d::truth(_n_logical_32297)?(_n_ax_32000<=_n_arch_31911(3.2,(_n_Y_31999-15.5))):_n_logical_32297;})();
return std::array<double,2>{(0.35+(0.15*_n_left_32001)),(d::truth(_n_door_32013)?0.82:(0.6+(0.12*(1.0-_n_smooth_31907(25.0,33.0,_n_Y_31999)))))};
}
if((d::truth((_n_ax_32000<=(_n_hw_32012+0.8)))&&d::truth((_n_Y_31999<(25.0+10.2))))){d::check_cancel();return std::array<double,2>{0.42,0.35};
}
if(((d::truth((_n_ax_32000>7.6))&&d::truth((_n_ax_32000<=9.0)))&&d::truth((_n_Y_31999<40.0)))){d::check_cancel();return std::array<double,2>{(0.5+(0.12*_n_left_32001)),0.08};
}
return std::array<double,2>{(0.5+(0.08*_n_left_32001)),0.0};
}
if(d::truth((_n_ax_32000<=21.0))){d::check_cancel();double _n_nx_32014=(_n_ax_32000-15.0);
for(auto &&_n_item_32298:d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,21.5},d::Array<double,false>{24.5,37.0}}){d::check_cancel();auto _n_binding_32299=_n_item_32298;
double _n_y0_32015=d::at(_n_binding_32299,0.0);
double _n_y1_32016=d::at(_n_binding_32299,1.0);
{
if(((d::truth((_n_Y_31999>=_n_y0_32015))&&d::truth((_n_Y_31999<_n_y1_32016)))&&d::truth(([&](){auto _n_left_32300=std::fabs(_n_nx_32014);auto _n_right_32301=_n_arch_31911(3.6,(_n_Y_31999-(_n_y1_32016-4.5)));return (_n_left_32300<=_n_right_32301);})()))){d::check_cancel();return std::array<double,2>{(0.4+(0.1*_n_left_32001)),0.5};
}
if((((d::truth((_n_Y_31999>=(_n_y0_32015-0.6)))&&d::truth((_n_Y_31999<(_n_y1_32016+0.6))))&&d::truth(([&](){auto _n_left_32302=std::fabs(_n_nx_32014);auto _n_right_32303=_n_arch_31911(4.3,(_n_Y_31999-(_n_y1_32016-4.2)));return (_n_left_32302<=_n_right_32303);})()))&&d::truth((std::fabs(_n_nx_32014)>3.6)))){d::check_cancel();return std::array<double,2>{0.45,0.22};
}

}
}
return std::array<double,2>{(0.5+(0.1*_n_left_32001)),0.0};
}
double _n_lit_32017=(0.5+(0.48*_n_left_32001));
double _n_nx_32018=(_n_ax_32000-24.7);
for(auto &&_n_item_32304:d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,21.5},d::Array<double,false>{24.5,37.0}}){d::check_cancel();auto _n_binding_32305=_n_item_32304;
double _n_y0_32019=d::at(_n_binding_32305,0.0);
double _n_y1_32020=d::at(_n_binding_32305,1.0);
{
if(((d::truth((_n_Y_31999>=_n_y0_32019))&&d::truth((_n_Y_31999<_n_y1_32020)))&&d::truth(([&](){auto _n_left_32306=std::fabs(_n_nx_32018);auto _n_right_32307=_n_arch_31911(2.2,(_n_Y_31999-(_n_y1_32020-3.0)));return (_n_left_32306<=_n_right_32307);})()))){d::check_cancel();return std::array<double,2>{(_n_lit_32017*0.7),0.45};
}

}
}
return std::array<double,2>{_n_lit_32017,0.0};
}
double _n_mx_32021=(_n_ax_32000-44.0);
if((d::truth((_n_Y_31999>=7.0))&&d::truth((_n_Y_31999<57.0)))){d::check_cancel();double _n_s_32022=(d::truth((_n_X_31998<0.0))?(-d::number(_n_mx_32021)):_n_mx_32021);
double _n_hw_32023=(2.9-((0.6*(_n_Y_31999-7.0))/40.0));
for(auto &&_n_item_32308:d::Array<double,false>{19.5,32.0,44.5}){d::check_cancel();double _n_g_32024=_n_item_32308;
{
if(((d::truth((_n_Y_31999>=_n_g_32024))&&d::truth((_n_Y_31999<(_n_g_32024+1.4))))&&d::truth((std::fabs(_n_mx_32021)<=(_n_hw_32023+1.1))))){d::check_cancel();return std::array<double,2>{_n_clamp_31906((0.5-(((0.42*_n_s_32022)/(_n_hw_32023+1.1))*_n_left_32001))),(d::truth((_n_Y_31999<(_n_g_32024+0.5)))?0.35:0.0)};
}

}
}
if((d::truth((_n_Y_31999<46.0))&&d::truth((std::fabs(_n_mx_32021)<=_n_hw_32023)))){d::check_cancel();return std::array<double,2>{_n_clamp_31906((0.5-((0.48*(_n_s_32022/_n_hw_32023))*_n_left_32001))),0.0};
}
if(((d::truth((_n_Y_31999>=45.9))&&d::truth((_n_Y_31999<49.5)))&&d::truth((std::fabs(_n_mx_32021)<=2.2)))){d::check_cancel();return std::array<double,2>{_n_clamp_31906((0.5-(((0.4*_n_s_32022)/2.2)*_n_left_32001))),((d::truth((std::fabs(_n_mx_32021)<1.4))&&d::truth((std::fabs(_n_mx_32021)>0.3)))?0.7:0.0)};
}
if(d::truth((_n_Y_31999>=49.5))){d::check_cancel();double _n_h_32025=((_n_Y_31999-49.5)/4.5);
if((d::truth((_n_h_32025<1.0))&&d::truth(([&](){auto _n_left_32309=std::fabs(_n_mx_32021);auto _n_right_32310=(2.5*_n_onion_31910(_n_h_32025));return (_n_left_32309<=_n_right_32310);})()))){d::check_cancel();return std::array<double,2>{_n_clamp_31906((0.55-(((0.55*_n_s_32022)/((2.5*_n_onion_31910(_n_h_32025))+0.01))*_n_left_32001))),0.0};
}
if(((d::truth((_n_h_32025>=1.0))&&d::truth((_n_Y_31999<56.0)))&&d::truth((std::fabs(_n_mx_32021)<0.5)))){d::check_cancel();return std::array<double,2>{0.6,0.0};
}
}
}
if(((d::truth((_n_ax_32000<=47.5))&&d::truth((_n_Y_31999>=0.0)))&&d::truth((_n_Y_31999<7.0)))){d::check_cancel();if(d::truth((_n_Y_31999>6.2))){d::check_cancel();return std::array<double,2>{0.62,0.0};
}
double _n_k_32026=(d::mod(_n_ax_32000,5.2)-2.6);
if(((d::truth((_n_Y_31999>1.5))&&d::truth((_n_Y_31999<5.2)))&&d::truth((std::fabs(_n_k_32026)<1.1)))){d::check_cancel();return std::array<double,2>{0.42,0.3};
}
return std::array<double,2>{0.52,0.0};
}
return std::optional<std::array<double,2>>{};

}
}

double _n_mosque_31913(double _a0,double _a1){double _n_xc_32027=_a0;
double _n_y_32028=_a1;
{
double _n_dx_32029=(_n_xc_32027-_n_MX_31889);
double _n_ax_32030=std::fabs(_n_dx_32029);
if(((d::truth((_n_y_32028>=(_n_MB_31890-2.5)))&&d::truth((_n_y_32028<_n_MB_31890)))&&d::truth((_n_ax_32030<=22.0)))){d::check_cancel();return 0.0;
}
double _n_tx_32031=std::fabs((_n_ax_32030-19.5));
if(((d::truth((_n_tx_32031<=1.3))&&d::truth((_n_y_32028>=(_n_MB_31890-13.0))))&&d::truth((_n_y_32028<(_n_MB_31890-2.5))))){d::check_cancel();return 0.0;
}
if((d::truth((_n_y_32028>=(_n_MB_31890-15.5)))&&d::truth((_n_y_32028<(_n_MB_31890-13.0))))){d::check_cancel();double _n_h_32032=(((_n_MB_31890-13.0)-_n_y_32028)/2.5);
if(d::truth((_n_tx_32031<=(1.8*_n_onion_31910(_n_h_32032))))){d::check_cancel();return 1.0;
}
}
if(((d::truth((_n_tx_32031<0.35))&&d::truth((_n_y_32028>=(_n_MB_31890-16.5))))&&d::truth((_n_y_32028<(_n_MB_31890-15.5))))){d::check_cancel();return 1.0;
}
if(((d::truth((_n_ax_32030<=5.5))&&d::truth((_n_y_32028>=(_n_MB_31890-15.0))))&&d::truth((_n_y_32028<(_n_MB_31890-2.5))))){d::check_cancel();if((d::truth((_n_y_32028<(_n_MB_31890-14.3)))&&d::truth(double(d::i32(std::floor(_n_xc_32027))&d::i32(1.0))))){d::check_cancel();return (-d::number(1.0));
}
if((d::truth((_n_ax_32030<=_n_arch_31911(3.4,((_n_MB_31890-9.5)-_n_y_32028))))&&d::truth((_n_y_32028>=(_n_MB_31890-13.5))))){d::check_cancel();return 2.0;
}
return 0.0;
}
if(((d::truth((_n_ax_32030<=18.0))&&d::truth((_n_y_32028>=(_n_MB_31890-10.0))))&&d::truth((_n_y_32028<(_n_MB_31890-2.5))))){d::check_cancel();double _n_bay_32033=(d::mod((_n_ax_32030-5.5),4.2)-2.1);
if(((d::truth((_n_ax_32030>6.0))&&d::truth((_n_y_32028>=(_n_MB_31890-8.5))))&&d::truth(([&](){auto _n_left_32311=std::fabs(_n_bay_32033);auto _n_right_32312=_n_arch_31911(1.4,((_n_MB_31890-6.2)-_n_y_32028));return (_n_left_32311<=_n_right_32312);})()))){d::check_cancel();return 2.0;
}
return 0.0;
}
if((((d::truth((_n_ax_32030<=18.0))&&d::truth((_n_y_32028>=(_n_MB_31890-10.8))))&&d::truth((_n_y_32028<(_n_MB_31890-10.0))))&&d::truth(double(d::i32(std::floor((_n_xc_32027*0.75)))&d::i32(1.0))))){d::check_cancel();return 0.0;
}
double _n_sx_32034=std::fabs((_n_ax_32030-11.5));
if(((d::truth((_n_sx_32034<=2.6))&&d::truth((_n_y_32028>=(_n_MB_31890-12.0))))&&d::truth((_n_y_32028<(_n_MB_31890-10.0))))){d::check_cancel();return 0.0;
}
if((d::truth((_n_y_32028>=(_n_MB_31890-17.0)))&&d::truth((_n_y_32028<(_n_MB_31890-12.0))))){d::check_cancel();double _n_h_32035=(((_n_MB_31890-12.0)-_n_y_32028)/5.0);
if(d::truth((_n_sx_32034<=(3.6*_n_onion_31910(_n_h_32035))))){d::check_cancel();return 1.0;
}
}
if(((d::truth((_n_sx_32034<0.35))&&d::truth((_n_y_32028>=(_n_MB_31890-18.5))))&&d::truth((_n_y_32028<(_n_MB_31890-17.0))))){d::check_cancel();return 1.0;
}
if(((d::truth((_n_ax_32030<=4.0))&&d::truth((_n_y_32028>=(_n_MB_31890-16.5))))&&d::truth((_n_y_32028<(_n_MB_31890-15.0))))){d::check_cancel();return 0.0;
}
if((d::truth((_n_y_32028>=(_n_MB_31890-23.5)))&&d::truth((_n_y_32028<(_n_MB_31890-16.5))))){d::check_cancel();double _n_h_32036=(((_n_MB_31890-16.5)-_n_y_32028)/7.0);
if(d::truth((_n_ax_32030<=(5.2*_n_onion_31910(_n_h_32036))))){d::check_cancel();return 1.0;
}
}
if(((d::truth((_n_ax_32030<0.4))&&d::truth((_n_y_32028>=(_n_MB_31890-25.5))))&&d::truth((_n_y_32028<(_n_MB_31890-23.5))))){d::check_cancel();return 1.0;
}
return (-d::number(1.0));

}
}

struct Native_taj_dawn final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_31914{};
double _n_N_31915{};
d::Array<d::String,false> _n_out_31916{};
d::Array<uint8_t,true> _n_lut_31917{};
d::Array<uint8_t,true> _n_mat_31919{};
d::Array<float,true> _n_R_31920{};
d::Array<float,true> _n_G_31921{};
d::Array<float,true> _n_B_31922{};
d::Array<float,true> _n_floorA_31923{};
d::Array<float,true> _n_hazeW_31924{};
d::Array<float,true> _n_glowA_31925{};
double _n_CW_31928{};
double _n_CH_31929{};
d::Array<d::Array<double,false>,false> _n_banks_31930{};
d::Array<float,true> _n_cloud_31932{};
d::Array<float,true> _n_cloudLit_31933{};
d::Array<std::array<double,3>,false> _n_crowns_31934{};
d::Array<float,true> _n_tops_31935{};
d::Array<std::shared_ptr<_n_Record_31940>,false> _n_trees_31939{};
d::Array<int8_t,true> _n_mq_31942{};
d::Array<float,true> _n_RR_31943{};
d::Array<float,true> _n_RG_31944{};
d::Array<float,true> _n_RB_31945{};
double _n_HWd_31946{};
d::Array<float,true> _n_haze1_31947{};
d::Array<float,true> _n_haze2_31948{};
d::Array<float,true> _n_hazeRow_31949{};
d::Array<std::array<double,3>,false> _n_birds_31950{};
d::Array<float,true> _n_dith_31951{};
d::Array<float,true> _n_jit_31952{};
d::Array<float,true> _n_tone_31953{};
std::function<d::String(double,std::shared_ptr<_n_Record_32275>)> _render;
double _n_nearest_31918(double _a0,double _a1,double _a2){double _n_r_32037=_a0;
double _n_g_32038=_a1;
double _n_b_32039=_a2;
{
double _n_k_32040=([&](){auto _n_left_32466=([&](){auto _n_left_32468=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_32037*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_32469=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_32038*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_32468)|d::i32(_n_right_32469));})();auto _n_right_32467=d::minimum({31.0,double(d::i32((_n_b_32039*31.99))|d::i32(0.0))});return double(d::i32(_n_left_32466)|d::i32(_n_right_32467));})();
if(d::truth((d::at(this->_n_lut_31917,_n_k_32040)!=255.0))){d::check_cancel();return d::at(this->_n_lut_31917,_n_k_32040);
}
double _n_best_32041=0.0;
double _n_bd_32042=1000000000.0;
{double _n_i_32043=0.0;
for(;d::truth((_n_i_32043<double(this->_n_P_31914.size())));(void)((_n_i_32043++))){d::check_cancel();double _n_dr_32044=(d::at(d::at(this->_n_P_31914,_n_i_32043),0.0)-_n_r_32037);
double _n_dg_32045=(d::at(d::at(this->_n_P_31914,_n_i_32043),1.0)-_n_g_32038);
double _n_db_32046=(d::at(d::at(this->_n_P_31914,_n_i_32043),2.0)-_n_b_32039);
double _n_d_32047=((((0.3*_n_dr_32044)*_n_dr_32044)+((0.5*_n_dg_32045)*_n_dg_32045))+((0.2*_n_db_32046)*_n_db_32046));
if(d::truth((_n_d_32047<_n_bd_32042))){d::check_cancel();(void)(((_n_bd_32042=_n_d_32047),(_n_best_32041=_n_i_32043)));
}
}}
return ([&](){auto&& _n_array_32470=this->_n_lut_31917;auto _n_index_32471=_n_k_32040;auto _n_value_32472=_n_best_32041;d::put(_n_array_32470,_n_index_32471,_n_value_32472);return _n_value_32472;})();

}
}

double _n_sunGlow_31926(double _a0,double _a1){double _n_x_32048=_a0;
double _n_y_32049=_a1;
{
double _n_dx_32050=(_n_x_32048-d::at(_n_SUN_31888,0.0));
double _n_dy_32051=((_n_y_32049-d::at(_n_SUN_31888,1.0))*1.25);
double _n_d_32052=std::sqrt(((_n_dx_32050*_n_dx_32050)+(_n_dy_32051*_n_dy_32051)));
return ([&](){auto _n_left_32473=([&](){auto _n_left_32475=(std::exp(((-d::number(_n_d_32052))/4.0))*0.9);auto _n_right_32476=(std::exp(((-d::number(_n_d_32052))/13.0))*0.42);return (_n_left_32475+_n_right_32476);})();auto _n_right_32474=(std::exp(((-d::number(_n_d_32052))/40.0))*0.3);return (_n_left_32473+_n_right_32474);})();

}
}

std::array<double,3> _n_skyAt_31927(double _a0,double _a1){double _n_x_32053=_a0;
double _n_y_32054=_a1;
{
double _n_v_32055=_n_clamp_31906((_n_y_32054/_n_HZ_31886));
double _n_up_32056=_n_smooth_31907(0.05,0.8,_n_v_32055);
double _n_r_32057=_n_mix_31908(0.055,0.3,_n_up_32056);
double _n_g_32058=_n_mix_31908(0.05,0.19,_n_up_32056);
double _n_b_32059=_n_mix_31908(0.17,0.36,_n_up_32056);
double _n_low_32060=_n_smooth_31907(0.62,1.0,_n_v_32055);
(void)((((_n_r_32057=_n_mix_31908(_n_r_32057,0.66,_n_low_32060)),(_n_g_32058=_n_mix_31908(_n_g_32058,0.4,_n_low_32060))),(_n_b_32059=_n_mix_31908(_n_b_32059,0.42,_n_low_32060))));
double _n_far_32061=(_n_smooth_31907(50.0,200.0,_n_x_32053)*0.18);
(void)((((_n_r_32057=(_n_r_32057*(1.0-_n_far_32061))),(_n_g_32058=(_n_g_32058*(1.0-(_n_far_32061*0.8))))),(_n_b_32059=(_n_b_32059*(1.0-(_n_far_32061*0.3))))));
double _n_glow_32062=([&](){auto _n_left_32477=this->_n_sunGlow_31926(_n_x_32053,_n_y_32054);auto _n_right_32478=([&](){auto _n_left_32479=(std::exp(((-d::number(std::fabs((_n_y_32054-57.0))))/5.0))*0.25);auto _n_right_32480=std::exp(((-d::number(std::fabs((_n_x_32053-d::at(_n_SUN_31888,0.0)))))/50.0));return (_n_left_32479*_n_right_32480);})();return (_n_left_32477+_n_right_32478);})();
(void)((((_n_r_32057=(_n_r_32057+(_n_glow_32062*1.0))),(_n_g_32058=(_n_g_32058+(_n_glow_32062*0.78)))),(_n_b_32059=(_n_b_32059+(_n_glow_32062*0.48)))));
double _n_ang_32063=std::atan2((_n_y_32054-d::at(_n_SUN_31888,1.0)),(_n_x_32053-d::at(_n_SUN_31888,0.0)));
double _n_ray_32064=_n_fbm_31905(((_n_ang_32063*9.0)+3.0),1.7,2.0,0.0);
double _n_rd_32065=d::hypot(std::initializer_list<double>{(_n_x_32053-d::at(_n_SUN_31888,0.0)),(_n_y_32054-d::at(_n_SUN_31888,1.0))});
double _n_shaft_32066=(([&](){auto _n_left_32481=([&](){auto _n_left_32483=_n_smooth_31907(0.5,0.75,_n_ray_32064);auto _n_right_32484=std::exp(((-d::number(_n_rd_32065))/45.0));return (_n_left_32483*_n_right_32484);})();auto _n_right_32482=_n_smooth_31907(4.0,14.0,_n_rd_32065);return (_n_left_32481*_n_right_32482);})()*0.12);
(void)((((_n_r_32057=(_n_r_32057+_n_shaft_32066)),(_n_g_32058=(_n_g_32058+(_n_shaft_32066*0.8)))),(_n_b_32059=(_n_b_32059+(_n_shaft_32066*0.55)))));
return std::array<double,3>{_n_r_32057,_n_g_32058,_n_b_32059};

}
}

double _n_cdens_31931(double _a0,double _a1){double _n_x_32067=_a0;
double _n_y_32068=_a1;
{
double _n_q_32069=_n_fbm_31905((_n_x_32067*0.01),(_n_y_32068*0.04),2.0,(this->_n_CW_31928*0.01));
double _n_n_32070=_n_fbm_31905(((_n_x_32067*0.025)+(_n_q_32069*1.6)),((_n_y_32068*0.075)+(_n_q_32069*0.6)),5.0,(this->_n_CW_31928*0.025));
double _n_m_32071=0.0;
for(auto &&_n_item_32485:this->_n_banks_31930){d::check_cancel();auto _n_binding_32486=_n_item_32485;
double _n_bx_32072=d::at(_n_binding_32486,0.0);
double _n_by_32073=d::at(_n_binding_32486,1.0);
double _n_rx_32074=d::at(_n_binding_32486,2.0);
double _n_up_32075=d::at(_n_binding_32486,3.0);
double _n_down_32076=d::at(_n_binding_32486,4.0);
double _n_a_32077=d::at(_n_binding_32486,5.0);
{
double _n_dx_32078=(_n_x_32067-_n_bx_32072);
(void)((_n_dx_32078=(_n_dx_32078-(d::round((_n_dx_32078/this->_n_CW_31928))*this->_n_CW_31928))));
double _n_ex_32079=(_n_dx_32078/_n_rx_32074);
double _n_ey_32080=((_n_y_32068-_n_by_32073)/(d::truth((_n_y_32068<_n_by_32073))?_n_up_32075:_n_down_32076));
double _n_e_32081=(std::exp((((((-d::number(_n_ex_32079))*_n_ex_32079)*_n_ex_32079)*_n_ex_32079)-(_n_ey_32080*_n_ey_32080)))*_n_a_32077);
if(d::truth((_n_e_32081>_n_m_32071))){d::check_cancel();(void)((_n_m_32071=_n_e_32081));
}

}
}
return (((0.62*_n_m_32071)+(1.4*(_n_n_32070-0.5)))+0.02);

}
}

double _n_treeTop_31936(double _a0){double _n_x_32096=_a0;
return d::at(this->_n_tops_31935,([&](){auto _n_argument_32487=(_n_W_31882-1.0);auto _n_argument_32488=([&](){auto _n_argument_32489=0.0;auto _n_argument_32490=std::floor(_n_x_32096);return d::maximum({_n_argument_32489,_n_argument_32490});})();return d::minimum({_n_argument_32487,_n_argument_32488});})());}

double _n_poolHalf_31937(double _a0){double _n_y_32097=_a0;
return ((0.5*(_n_y_32097-_n_HZ_31886))+1.0);}

double _n_walkHalf_31938(double _a0){double _n_y_32098=_a0;
return ((0.7*(_n_y_32098-_n_HZ_31886))+1.5);}

double _n_shadowAt_31941(double _a0,double _a1){double _n_xc_32104=_a0;
double _n_y_32105=_a1;
{
double _n_lit_32106=1.0;
for(auto &&_n_item_32491:this->_n_trees_31939){d::check_cancel();std::shared_ptr<_n_Record_31940> _n_tr_32107=_n_item_32491;
{
double _n_dx_32108=(_n_xc_32104-_n_tr_32107->_p_x);
double _n_dy_32109=(_n_y_32105-_n_tr_32107->_p_base);
if(d::truth((_n_dy_32109<(-d::number(0.5))))){d::check_cancel();continue;
}
double _n_along_32110=(((_n_dx_32108*0.6)+(_n_dy_32109*0.8))/_n_tr_32107->_p_s);
double _n_across_32111=(((_n_dx_32108*0.8)-(_n_dy_32109*0.6))/_n_tr_32107->_p_s);
if(((d::truth((_n_along_32110>0.0))&&d::truth((_n_along_32110<3.0)))&&d::truth((std::fabs(_n_across_32111)<((0.17*(1.0-(_n_along_32110/3.4)))+0.03))))){d::check_cancel();(void)((_n_lit_32106=(_n_lit_32106*(0.08+(0.92*_n_smooth_31907(1.6,3.0,_n_along_32110))))));
}

}
}
return _n_lit_32106;

}
}

explicit Native_taj_dawn(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_31914=d::map(_n_meta_31880->_p_palette,_n_hex_31909);
this->_n_N_31915=(_n_W_31882*_n_H_31883);
this->_n_out_31916=d::Array<d::String,false>(size_t(this->_n_N_31915));
this->_n_lut_31917=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_31919=d::Array<uint8_t,true>(size_t(this->_n_N_31915));
this->_n_R_31920=d::Array<float,true>(size_t(this->_n_N_31915));
this->_n_G_31921=d::Array<float,true>(size_t(this->_n_N_31915));
this->_n_B_31922=d::Array<float,true>(size_t(this->_n_N_31915));
this->_n_floorA_31923=d::Array<float,true>(size_t(this->_n_N_31915)).fill(0.12);
this->_n_hazeW_31924=d::Array<float,true>(size_t(this->_n_N_31915));
this->_n_glowA_31925=d::Array<float,true>(size_t(this->_n_N_31915));
this->_n_CW_31928=400.0;
this->_n_CH_31929=50.0;
this->_n_banks_31930=d::Array<d::Array<double,false>,false>{d::Array<double,false>{76.0,28.0,40.0,7.0,3.5,1.4},d::Array<double,false>{152.0,36.0,52.0,9.0,4.0,1.0},d::Array<double,false>{16.0,13.0,32.0,4.0,2.5,0.8},d::Array<double,false>{250.0,24.0,40.0,8.0,4.0,1.0},d::Array<double,false>{330.0,33.0,36.0,7.0,4.0,0.95}};
this->_n_cloud_31932=d::Array<float,true>(size_t((this->_n_CW_31928*this->_n_CH_31929)));
this->_n_cloudLit_31933=d::Array<float,true>(size_t((this->_n_CW_31928*this->_n_CH_31929)));
{double _n_r_32082=0.0;
for(;d::truth((_n_r_32082<this->_n_CH_31929));(void)((_n_r_32082++))){d::check_cancel();{double _n_x_32083=0.0;
for(;d::truth((_n_x_32083<this->_n_CW_31928));(void)((_n_x_32083++))){d::check_cancel();double _n_y_32084=(_n_r_32082+0.5);
double _n_d_32085=this->_n_cdens_31931(_n_x_32083,_n_y_32084);
(void)(([&](){auto&& _n_array_32313=this->_n_cloud_31932;auto _n_index_32314=((_n_r_32082*this->_n_CW_31928)+_n_x_32083);auto _n_value_32315=_n_smooth_31907(0.46,0.66,_n_d_32085);d::put(_n_array_32313,_n_index_32314,_n_value_32315);return _n_value_32315;})());
double _n_toward_32086=this->_n_cdens_31931((_n_x_32083-2.0),(_n_y_32084+2.5));
(void)(([&](){auto&& _n_array_32316=this->_n_cloudLit_31933;auto _n_index_32317=((_n_r_32082*this->_n_CW_31928)+_n_x_32083);auto _n_value_32318=_n_clamp_31906((((0.56+((_n_d_32085-_n_toward_32086)*0.75))-((_n_d_32085-0.6)*0.2))+(0.7*(_n_fbm_31905((_n_x_32083*0.09),(_n_y_32084*0.2),2.0,(this->_n_CW_31928*0.09))-0.5))));d::put(_n_array_32316,_n_index_32317,_n_value_32318);return _n_value_32318;})());
}}
}}
this->_n_crowns_31934=d::Array<std::array<double,3>,false>{};
{double _n_x_32087=(-d::number(12.0));
double _n_i_32088=0.0;
for(;d::truth((_n_x_32087<(_n_W_31882+12.0)));(void)(((_n_x_32087=(_n_x_32087+(4.0+(_n_hash_31903(_n_i_32088,60.0)*5.0)))),(_n_i_32088++)))){d::check_cancel();double _n_rad_32089=(3.0+(_n_hash_31903(_n_i_32088,61.0)*4.5));
(void)(this->_n_crowns_31934.push(std::array<double,3>{_n_x_32087,(([&](){auto _n_left_32319=(60.5-(_n_hash_31903(_n_i_32088,62.0)*2.5));auto _n_right_32320=(2.5*_n_fbm_31905((_n_x_32087*0.03),2.0,2.0,0.0));return (_n_left_32319-_n_right_32320);})()+(_n_rad_32089*0.35)),_n_rad_32089}));
}}
this->_n_tops_31935=d::Array<float,true>(size_t(_n_W_31882));
{double _n_x_32090=0.0;
for(;d::truth((_n_x_32090<_n_W_31882));(void)((_n_x_32090++))){d::check_cancel();double _n_t0_32091=64.0;
for(auto &&_n_item_32321:this->_n_crowns_31934){d::check_cancel();auto _n_binding_32322=_n_item_32321;
double _n_cx_32092=d::at(_n_binding_32322,0.0);
double _n_cy_32093=d::at(_n_binding_32322,1.0);
double _n_rad_32094=d::at(_n_binding_32322,2.0);
{
double _n_dx_32095=((_n_x_32090+0.5)-_n_cx_32092);
if(d::truth((std::fabs(_n_dx_32095)<_n_rad_32094))){d::check_cancel();(void)((_n_t0_32091=([&](){auto _n_argument_32323=_n_t0_32091;auto _n_argument_32324=(_n_cy_32093-(std::sqrt(((_n_rad_32094*_n_rad_32094)-(_n_dx_32095*_n_dx_32095)))*0.75));return d::minimum({_n_argument_32323,_n_argument_32324});})()));
}

}
}
(void)(([&](){auto&& _n_array_32325=this->_n_tops_31935;auto _n_index_32326=_n_x_32090;auto _n_value_32327=(_n_t0_32091-(0.6*_n_fbm_31905((_n_x_32090*0.5),7.0,2.0,0.0)));d::put(_n_array_32325,_n_index_32326,_n_value_32327);return _n_value_32327;})());
}}
this->_n_trees_31939=d::Array<std::shared_ptr<_n_Record_31940>,false>{};
for(auto &&_n_item_32328:d::Array<double,false>{8.5,10.4,13.0,16.8,22.5,31.0}){d::check_cancel();double _n_s_32099=_n_item_32328;
{
for(auto &&_n_item_32329:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_32100=_n_item_32329;
{
for(auto &&_n_item_32330:d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.3,0.8},d::Array<double,false>{2.45,1.0}}){d::check_cancel();auto _n_binding_32331=_n_item_32330;
double _n_off_32101=d::at(_n_binding_32331,0.0);
double _n_tall_32102=d::at(_n_binding_32331,1.0);
{
if((d::truth((_n_off_32101>3.0))&&d::truth(([&]()->bool{auto _n_logical_32332=(_n_s_32099>20.0);return d::truth(_n_logical_32332)?_n_logical_32332:(_n_side_32100>0.0);})()))){d::check_cancel();continue;
}
if((d::truth((_n_side_32100<0.0))&&d::truth((_n_s_32099>30.0)))){d::check_cancel();continue;
}
double _n_cxp_32103=(_n_CX_31884+((_n_side_32100*_n_off_32101)*_n_s_32099));
(void)(this->_n_trees_31939.push(([&](){auto _n_object_32334=std::make_shared<_n_Record_31940>();_n_object_32334->_p_x=(_n_cxp_32103+((_n_hash_31903((_n_s_32099*10.0),(_n_side_32100+_n_off_32101))-0.5)*0.6));_n_object_32334->_p_base=(_n_HZ_31886+_n_s_32099);_n_object_32334->_p_h=(((1.6*_n_tall_32102)*_n_s_32099)*(0.94+(0.12*_n_hash_31903((_n_s_32099*7.0),((_n_side_32100+3.0)+_n_off_32101)))));_n_object_32334->_p_w=(0.26*_n_s_32099);_n_object_32334->_p_s=_n_s_32099;return _n_object_32334;})()));

}
}

}
}

}
}
this->_n_mq_31942=d::Array<int8_t,true>(size_t(this->_n_N_31915)).fill((-d::number(1.0)));
{double _n_r_32112=(_n_MB_31890-27.0);
for(;d::truth((_n_r_32112<_n_MB_31890));(void)((_n_r_32112++))){d::check_cancel();{double _n_x_32113=(_n_MX_31889-24.0);
for(;d::truth((_n_x_32113<=(_n_MX_31889+24.0)));(void)((_n_x_32113++))){d::check_cancel();(void)(([&](){auto&& _n_array_32335=this->_n_mq_31942;auto _n_index_32336=((_n_r_32112*_n_W_31882)+_n_x_32113);auto _n_value_32337=_n_mosque_31913((_n_x_32113+0.5),(_n_r_32112+0.5));d::put(_n_array_32335,_n_index_32336,_n_value_32337);return _n_value_32337;})());
}}
}}
{double _n_r_32114=0.0;
for(;d::truth((_n_r_32114<_n_H_31883));(void)((_n_r_32114++))){d::check_cancel();{double _n_x_32115=0.0;
for(;d::truth((_n_x_32115<_n_W_31882));(void)((_n_x_32115++))){d::check_cancel();double _n_k_32116=((_n_r_32114*_n_W_31882)+_n_x_32115);
double _n_y_32117=(_n_r_32114+0.5);
double _n_xc_32118=(_n_x_32115+0.5);
double _n_m_32119=_n_SKY_31895;
std::optional<double> _n_cr_32120{};
std::optional<double> _n_cg_32121{};
std::optional<double> _n_cb_32122{};
double _n_fl_32123=0.18;
double _n_hz_32124=0.0;
double _n_tt_32125=this->_n_treeTop_31936(_n_xc_32118);
if((d::truth((_n_y_32117<_n_BASE_31885))&&d::truth((_n_y_32117>=_n_tt_32125)))){d::check_cancel();(void)((_n_m_32119=_n_BGTREE_31896));
}else {d::check_cancel();if(d::truth((_n_y_32117>=_n_BASE_31885))){d::check_cancel();double _n_dx_32126=std::fabs((_n_xc_32118-_n_CX_31884));
(void)((_n_m_32119=(d::truth((_n_dx_32126<this->_n_poolHalf_31937(_n_y_32117)))?_n_POOL_31900:(d::truth((_n_dx_32126<this->_n_walkHalf_31938(_n_y_32117)))?_n_WALK_31899:_n_LAWN_31898))));
}
}
if(d::truth((_n_m_32119==_n_SKY_31895))){d::check_cancel();(void)(([&](){auto _n_unpack_32338=this->_n_skyAt_31927(_n_xc_32118,_n_y_32117);_n_cr_32120=std::optional<double>(d::at(_n_unpack_32338,0.0));_n_cg_32121=std::optional<double>(d::at(_n_unpack_32338,1.0));_n_cb_32122=std::optional<double>(d::at(_n_unpack_32338,2.0));return _n_unpack_32338;})());
double _n_veil_32127=(0.88+(0.24*_n_fbm_31905((_n_xc_32118*0.05),(_n_y_32117*0.09),3.0,0.0)));
(void)(((d::read((_n_cr_32120=(d::read(_n_cr_32120)*_n_veil_32127))),d::read((_n_cg_32121=(d::read(_n_cg_32121)*_n_veil_32127)))),d::read((_n_cb_32122=(d::read(_n_cb_32122)*_n_veil_32127)))));
(void)(([&](){auto&& _n_array_32339=this->_n_glowA_31925;auto _n_index_32340=_n_k_32116;auto _n_value_32341=this->_n_sunGlow_31926(_n_xc_32118,_n_y_32117);d::put(_n_array_32339,_n_index_32340,_n_value_32341);return _n_value_32341;})());
(void)((_n_hz_32124=(0.5+(0.5*_n_smooth_31907(20.0,58.0,_n_y_32117)))));
(void)((_n_fl_32123=(0.05+(0.13*_n_smooth_31907(18.0,42.0,_n_y_32117)))));
}else {d::check_cancel();if(d::truth((_n_m_32119==_n_BGTREE_31896))){d::check_cancel();double _n_tex_32128=_n_fbm_31905((_n_xc_32118*0.25),(_n_y_32117*0.3),3.0,0.0);
double _n_depth_32129=_n_smooth_31907(_n_tt_32125,_n_BASE_31885,_n_y_32117);
auto&& _n_sky_32130=this->_n_skyAt_31927(_n_xc_32118,_n_tt_32125);
double _n_a_32131=((0.46-(0.12*_n_depth_32129))+(0.12*_n_tex_32128));
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(0.1,d::at(_n_sky_32130,0.0),_n_a_32131)))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(0.09,d::at(_n_sky_32130,1.0),_n_a_32131))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(0.15,d::at(_n_sky_32130,2.0),_n_a_32131))))));
double _n_rim_32132=([&](){auto _n_left_32342=_n_smooth_31907((_n_tt_32125+1.8),_n_tt_32125,_n_y_32117);auto _n_right_32343=std::exp(((-d::number(std::fabs((_n_xc_32118-d::at(_n_SUN_31888,0.0)))))/18.0));return (_n_left_32342*_n_right_32343);})();
(void)(((d::read((_n_cr_32120=(d::read(_n_cr_32120)+(0.4*_n_rim_32132)))),d::read((_n_cg_32121=(d::read(_n_cg_32121)+(0.27*_n_rim_32132))))),d::read((_n_cb_32122=(d::read(_n_cb_32122)+(0.14*_n_rim_32132))))));
double _n_patch_32133=(0.45+(0.75*([&](){auto _n_argument_32344=0.3;auto _n_argument_32345=0.7;auto _n_argument_32346=_n_fbm_31905(((_n_xc_32118*0.035)+11.0),(_n_y_32117*0.18),3.0,0.0);return _n_smooth_31907(_n_argument_32344,_n_argument_32345,_n_argument_32346);})()));
double _n_mist_32134=([&](){auto _n_left_32347=(_n_smooth_31907((_n_tt_32125+1.0),(_n_BASE_31885+1.0),_n_y_32117)*0.75);auto _n_right_32348=d::minimum({1.0,_n_patch_32133});return (_n_left_32347*_n_right_32348);})();
double _n_mw_32135=std::exp(((-d::number(std::fabs((_n_xc_32118-d::at(_n_SUN_31888,0.0)))))/90.0));
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(d::read(_n_cr_32120),(0.62+(0.25*_n_mw_32135)),_n_mist_32134)))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(d::read(_n_cg_32121),(0.46+(0.16*_n_mw_32135)),_n_mist_32134))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(d::read(_n_cb_32122),(0.55+(0.02*_n_mw_32135)),_n_mist_32134))))));
(void)((_n_fl_32123=0.1));
(void)((_n_hz_32124=0.8));
}else {d::check_cancel();if(d::truth((_n_m_32119==_n_LAWN_31898))){d::check_cancel();double _n_v_32136=((_n_y_32117-_n_BASE_31885)/(_n_H_31883-_n_BASE_31885));
double _n_u_32137=((_n_xc_32118-_n_CX_31884)/(_n_y_32117-_n_HZ_31886));
double _n_tex_32138=_n_fbm_31905((_n_u_32137*3.0),(40.0/(_n_y_32117-_n_HZ_31886)),3.0,0.0);
double _n_stripe_32139=(d::truth(double(d::i32(std::floor((_n_u_32137*1.4)))&d::i32(1.0)))?1.0:0.55);
double _n_lit_32140=(((0.6+(0.4*std::exp(((-d::number(std::fabs((_n_xc_32118-d::at(_n_SUN_31888,0.0)))))/60.0))))*_n_stripe_32139)*(0.85+(0.3*_n_tex_32138)));
(void)((_n_lit_32140=(_n_lit_32140*this->_n_shadowAt_31941(_n_xc_32118,_n_y_32117))));
double _n_vig_32141=(1.0-([&](){auto _n_left_32349=(0.45*_n_smooth_31907(0.5,1.0,_n_v_32136));auto _n_right_32350=(0.6+(0.4*([&](){auto _n_argument_32351=40.0;auto _n_argument_32352=0.0;auto _n_argument_32353=d::minimum({_n_xc_32118,(_n_W_31882-_n_xc_32118)});return _n_smooth_31907(_n_argument_32351,_n_argument_32352,_n_argument_32353);})()));return (_n_left_32349*_n_right_32350);})());
double _n_fall_32142=(1.0-(0.35*_n_v_32136));
double _n_warm_32143=std::exp(((-d::number(std::fabs((_n_xc_32118-d::at(_n_SUN_31888,0.0)))))/80.0));
double _n_amb_32144=((0.75+(0.5*_n_stripe_32139))-(0.25*_n_v_32136));
(void)((_n_cr_32120=std::optional<double>((((0.12*_n_amb_32144)+((0.56*_n_lit_32140)*_n_fall_32142))*_n_vig_32141))));
(void)((_n_cg_32121=std::optional<double>((((0.09*_n_amb_32144)+(((0.36+(0.14*_n_warm_32143))*_n_lit_32140)*_n_fall_32142))*_n_vig_32141))));
(void)((_n_cb_32122=std::optional<double>((((0.24*_n_amb_32144)+(((0.26-(0.1*_n_warm_32143))*_n_lit_32140)*_n_fall_32142))*_n_vig_32141))));
double _n_far_32145=(_n_smooth_31907((_n_BASE_31885+10.0),_n_BASE_31885,_n_y_32117)*0.7);
double _n_mw_32146=std::exp(((-d::number(std::fabs((_n_xc_32118-d::at(_n_SUN_31888,0.0)))))/90.0));
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(d::read(_n_cr_32120),(0.62+(0.25*_n_mw_32146)),_n_far_32145)))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(d::read(_n_cg_32121),(0.46+(0.16*_n_mw_32146)),_n_far_32145))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(d::read(_n_cb_32122),(0.55+(0.02*_n_mw_32146)),_n_far_32145))))));
(void)((_n_fl_32123=0.1));
(void)((_n_hz_32124=(0.7*(1.0-_n_v_32136))));
}else {d::check_cancel();if(d::truth((_n_m_32119==_n_WALK_31899))){d::check_cancel();double _n_v_32147=((_n_y_32117-_n_BASE_31885)/(_n_H_31883-_n_BASE_31885));
double _n_lit_32148=(d::truth((_n_xc_32118<_n_CX_31884))?1.0:0.86);
double _n_joint_32149=((d::truth((d::mod((90.0/(_n_y_32117-_n_HZ_31886)),1.0)<0.14))?0.72:1.0)*(0.5+(0.5*this->_n_shadowAt_31941(_n_xc_32118,_n_y_32117))));
(void)(((d::read((_n_cr_32120=std::optional<double>((((0.78-(0.22*_n_v_32147))*_n_lit_32148)*_n_joint_32149)))),d::read((_n_cg_32121=std::optional<double>((((0.57-(0.16*_n_v_32147))*_n_lit_32148)*_n_joint_32149))))),d::read((_n_cb_32122=std::optional<double>((((0.53-(0.12*_n_v_32147))*_n_lit_32148)*_n_joint_32149))))));
(void)((_n_fl_32123=0.15));
(void)((_n_hz_32124=0.3));
}else {d::check_cancel();(void)((_n_fl_32123=0.15));
}
}
}
}
double _n_q_32150=d::at(this->_n_mq_31942,_n_k_32116);
if(d::truth((_n_q_32150>=0.0))){d::check_cancel();(void)((_n_m_32119=_n_MOSQUE_31902));
double _n_sg_32151=this->_n_sunGlow_31926(_n_xc_32118,_n_y_32117);
bool _n_isDome_32152=(_n_q_32150==1.0);
d::Array<double,false> _n_a_32153=(d::truth(_n_isDome_32152)?d::Array<double,false>{0.2,0.11,0.19}:d::Array<double,false>{0.31,0.13,0.15});
if(d::truth((_n_q_32150==2.0))){d::check_cancel();(void)((_n_a_32153=d::Array<double,false>{0.07,0.04,0.07}));
}
double _n_air_32154=(0.06+(0.3*_n_smooth_31907((_n_MB_31890-8.0),_n_MB_31890,_n_y_32117)));
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(d::at(_n_a_32153,0.0),0.62,_n_air_32154)))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(d::at(_n_a_32153,1.0),0.44,_n_air_32154))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(d::at(_n_a_32153,2.0),0.5,_n_air_32154))))));
double _n_lft_32155=(d::truth((_n_x_32115>0.0))?d::at(this->_n_mq_31942,(_n_k_32116-1.0)):(-d::number(1.0)));
double _n_up_32156=(d::truth((_n_r_32114>0.0))?d::at(this->_n_mq_31942,(_n_k_32116-_n_W_31882)):(-d::number(1.0)));
double _n_toward_32157=(d::truth((_n_xc_32118<d::at(_n_SUN_31888,0.0)))?(d::truth((_n_x_32115<(_n_W_31882-1.0)))?d::at(this->_n_mq_31942,(_n_k_32116+1.0)):(-d::number(1.0))):_n_lft_32155);
double _n_rim_32158=(((d::truth((_n_up_32156<0.0))?0.75:0.0)+(d::truth((_n_toward_32157<0.0))?0.9:0.0))+((d::truth((_n_lft_32155<0.0))&&d::truth((_n_up_32156<0.0)))?0.2:0.0));
(void)((_n_rim_32158=([&](){auto _n_left_32354=d::minimum({1.0,_n_rim_32158});auto _n_right_32355=d::minimum({1.0,(0.25+(_n_sg_32151*1.6))});return (_n_left_32354*_n_right_32355);})()));
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(d::read(_n_cr_32120),1.0,(_n_rim_32158*0.8))))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(d::read(_n_cg_32121),0.7,(_n_rim_32158*0.8)))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(d::read(_n_cb_32122),0.48,(_n_rim_32158*0.8)))))));
(void)((_n_fl_32123=0.04));
(void)((_n_hz_32124=0.15));
}
if(d::truth((_n_y_32117<(_n_BASE_31885+0.01)))){d::check_cancel();std::optional<std::array<double,2>> _n_t_32159=_n_taj_31912(((_n_xc_32118-_n_CX_31884)/_n_S_31887),((_n_BASE_31885-_n_y_32117)/_n_S_31887));
if(d::truth(_n_t_32159)){d::check_cancel();(void)((_n_m_32119=_n_MARBLE_31897));
auto _n_binding_32356=d::read(_n_t_32159);
double _n_lit_32160=d::at(_n_binding_32356,0.0);
double _n_rec_32161=d::at(_n_binding_32356,1.0);
d::Array<double,false> _n_sh_32162=d::Array<double,false>{0.42,0.36,0.56};
d::Array<double,false> _n_fr_32163=d::Array<double,false>{0.9,0.76,0.75};
d::Array<double,false> _n_gd_32164=d::Array<double,false>{1.0,0.88,0.72};
d::Array<double,false> _n_a_32165{};
d::Array<double,false> _n_b2_32166{};
double _n_kk_32167{};
if(d::truth((_n_lit_32160<0.5))){d::check_cancel();(void)((((_n_a_32165=_n_sh_32162),(_n_b2_32166=_n_fr_32163)),(_n_kk_32167=std::pow((_n_lit_32160*2.0),1.4))));
}else {d::check_cancel();(void)((((_n_a_32165=_n_fr_32163),(_n_b2_32166=_n_gd_32164)),(_n_kk_32167=((_n_lit_32160-0.5)*2.0))));
}
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(d::at(_n_a_32165,0.0),d::at(_n_b2_32166,0.0),_n_kk_32167)))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(d::at(_n_a_32165,1.0),d::at(_n_b2_32166,1.0),_n_kk_32167))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(d::at(_n_a_32165,2.0),d::at(_n_b2_32166,2.0),_n_kk_32167))))));
if(d::truth((_n_rec_32161>0.0))){d::check_cancel();double _n_d_32168=(1.0-(_n_rec_32161*0.78));
(void)(((d::read((_n_cr_32120=(d::read(_n_cr_32120)*(_n_d_32168*0.95)))),d::read((_n_cg_32121=(d::read(_n_cg_32121)*(_n_d_32168*0.92))))),d::read((_n_cb_32122=(d::read(_n_cb_32122)*_n_d_32168)))));
}
double _n_g_32169=(0.94+(0.08*_n_hash_31903(((_n_x_32115*3.0)+1.0),((_n_r_32114*5.0)+2.0))));
(void)(((d::read((_n_cr_32120=(d::read(_n_cr_32120)*_n_g_32169))),d::read((_n_cg_32121=(d::read(_n_cg_32121)*_n_g_32169)))),d::read((_n_cb_32122=(d::read(_n_cb_32122)*_n_g_32169)))));
double _n_low_32170=(_n_smooth_31907(40.0,_n_BASE_31885,_n_y_32117)*0.2);
auto&& _n_sky_32171=this->_n_skyAt_31927(_n_xc_32118,_n_y_32117);
(void)(((d::read((_n_cr_32120=std::optional<double>(_n_mix_31908(d::read(_n_cr_32120),d::at(_n_sky_32171,0.0),_n_low_32170)))),d::read((_n_cg_32121=std::optional<double>(_n_mix_31908(d::read(_n_cg_32121),d::at(_n_sky_32171,1.0),_n_low_32170))))),d::read((_n_cb_32122=std::optional<double>(_n_mix_31908(d::read(_n_cb_32122),d::at(_n_sky_32171,2.0),_n_low_32170))))));
(void)((_n_fl_32123=0.12));
(void)((_n_hz_32124=0.55));
}
}
(void)(([&](){auto&& _n_array_32357=this->_n_mat_31919;auto _n_index_32358=_n_k_32116;auto _n_value_32359=_n_m_32119;d::put(_n_array_32357,_n_index_32358,_n_value_32359);return _n_value_32359;})());
(void)(((([&](){auto&& _n_array_32360=this->_n_R_31920;auto _n_index_32361=_n_k_32116;auto _n_value_32362=d::read(_n_cr_32120);d::put(_n_array_32360,_n_index_32361,_n_value_32362);return _n_value_32362;})(),([&](){auto&& _n_array_32363=this->_n_G_31921;auto _n_index_32364=_n_k_32116;auto _n_value_32365=d::read(_n_cg_32121);d::put(_n_array_32363,_n_index_32364,_n_value_32365);return _n_value_32365;})()),([&](){auto&& _n_array_32366=this->_n_B_31922;auto _n_index_32367=_n_k_32116;auto _n_value_32368=d::read(_n_cb_32122);d::put(_n_array_32366,_n_index_32367,_n_value_32368);return _n_value_32368;})()));
(void)(([&](){auto&& _n_array_32369=this->_n_floorA_31923;auto _n_index_32370=_n_k_32116;auto _n_value_32371=_n_fl_32123;d::put(_n_array_32369,_n_index_32370,_n_value_32371);return _n_value_32371;})());
(void)(([&](){auto&& _n_array_32372=this->_n_hazeW_31924;auto _n_index_32373=_n_k_32116;auto _n_value_32374=_n_hz_32124;d::put(_n_array_32372,_n_index_32373,_n_value_32374);return _n_value_32374;})());
}}
}}
for(auto &&_n_item_32375:this->_n_trees_31939){d::check_cancel();std::shared_ptr<_n_Record_31940> _n_tr_32172=_n_item_32375;
{
double _n_top_32173=(_n_tr_32172->_p_base-_n_tr_32172->_p_h);
double _n_sunSide_32174=(d::truth((_n_tr_32172->_p_x<_n_CX_31884))?0.9:0.6);
{double _n_r_32175=([&](){auto _n_argument_32376=0.0;auto _n_argument_32377=std::floor(_n_top_32173);return d::maximum({_n_argument_32376,_n_argument_32377});})();
for(;d::truth((_n_r_32175<([&](){auto _n_argument_32378=_n_H_31883;auto _n_argument_32379=std::ceil((_n_tr_32172->_p_base+0.6));return d::minimum({_n_argument_32378,_n_argument_32379});})()));(void)((_n_r_32175++))){d::check_cancel();double _n_y_32176=(_n_r_32175+0.5);
double _n_u_32177=((_n_tr_32172->_p_base-_n_y_32176)/_n_tr_32172->_p_h);
if(d::truth((_n_u_32177>1.0))){d::check_cancel();continue;
}
double _n_p_32178=(d::truth((_n_u_32177<0.06))?0.18:(d::truth((_n_u_32177<0.3))?(0.8+(0.2*(_n_u_32177/0.3))):std::pow(((1.0-_n_u_32177)/0.7),0.8)));
{double _n_x_32179=([&](){auto _n_argument_32380=0.0;auto _n_argument_32381=std::floor(((_n_tr_32172->_p_x-_n_tr_32172->_p_w)-2.0));return d::maximum({_n_argument_32380,_n_argument_32381});})();
for(;d::truth((_n_x_32179<([&](){auto _n_argument_32382=_n_W_31882;auto _n_argument_32383=std::ceil(((_n_tr_32172->_p_x+_n_tr_32172->_p_w)+2.0));return d::minimum({_n_argument_32382,_n_argument_32383});})()));(void)((_n_x_32179++))){d::check_cancel();double _n_xc_32180=(_n_x_32179+0.5);
double _n_n_32181=_n_noise_31904((_n_xc_32180*0.9),((_n_y_32176*0.55)+_n_tr_32172->_p_s),0.0);
double _n_hw_32182=(((_n_tr_32172->_p_w*_n_p_32178)*(0.88+(0.26*_n_n_32181)))+0.35);
double _n_dx_32183=((_n_xc_32180-_n_tr_32172->_p_x)/_n_hw_32182);
if(d::truth((std::fabs(_n_dx_32183)>1.0))){d::check_cancel();continue;
}
double _n_k_32184=((_n_r_32175*_n_W_31882)+_n_x_32179);
double _n_leaf_32185=_n_fbm_31905((_n_xc_32180*0.6),((_n_y_32176*0.35)+(_n_tr_32172->_p_s*3.0)),2.0,0.0);
double _n_rim_32186=([&](){auto _n_left_32384=(_n_smooth_31907((-d::number(0.2)),(-d::number(0.9)),_n_dx_32183)*(0.4+(0.6*_n_leaf_32185)));auto _n_right_32385=(0.5+(0.5*std::exp(((-d::number(std::fabs((_n_tr_32172->_p_x-d::at(_n_SUN_31888,0.0)))))/80.0))));return (_n_left_32384*_n_right_32385);})();
double _n_clump_32187=([&](){auto _n_argument_32386=0.45;auto _n_argument_32387=0.7;auto _n_argument_32388=_n_fbm_31905((_n_xc_32180*0.45),((_n_y_32176*0.3)+(_n_tr_32172->_p_s*3.0)),3.0,0.0);return _n_smooth_31907(_n_argument_32386,_n_argument_32387,_n_argument_32388);})();
double _n_base_32188=((0.5+(0.5*_n_leaf_32185))+(0.5*_n_clump_32187));
double _n_dist_32189=_n_smooth_31907(30.0,8.0,_n_tr_32172->_p_s);
double _n_cr_32190=((0.045*_n_base_32188)+(_n_sunSide_32174*_n_rim_32186));
double _n_cg_32191=((0.1*_n_base_32188)+((_n_sunSide_32174*0.63)*_n_rim_32186));
double _n_cb_32192=((0.08*_n_base_32188)+((_n_sunSide_32174*0.27)*_n_rim_32186));
d::Array<double,false> _n_sky_32193=d::Array<double,false>{0.7,0.5,0.56};
(void)((((_n_cr_32190=_n_mix_31908(_n_cr_32190,d::at(_n_sky_32193,0.0),(_n_dist_32189*0.45))),(_n_cg_32191=_n_mix_31908(_n_cg_32191,d::at(_n_sky_32193,1.0),(_n_dist_32189*0.45)))),(_n_cb_32192=_n_mix_31908(_n_cb_32192,d::at(_n_sky_32193,2.0),(_n_dist_32189*0.45)))));
(void)(([&](){auto&& _n_array_32389=this->_n_mat_31919;auto _n_index_32390=_n_k_32184;auto _n_value_32391=_n_CYPRESS_31901;d::put(_n_array_32389,_n_index_32390,_n_value_32391);return _n_value_32391;})());
(void)(((([&](){auto&& _n_array_32392=this->_n_R_31920;auto _n_index_32393=_n_k_32184;auto _n_value_32394=_n_cr_32190;d::put(_n_array_32392,_n_index_32393,_n_value_32394);return _n_value_32394;})(),([&](){auto&& _n_array_32395=this->_n_G_31921;auto _n_index_32396=_n_k_32184;auto _n_value_32397=_n_cg_32191;d::put(_n_array_32395,_n_index_32396,_n_value_32397);return _n_value_32397;})()),([&](){auto&& _n_array_32398=this->_n_B_31922;auto _n_index_32399=_n_k_32184;auto _n_value_32400=_n_cb_32192;d::put(_n_array_32398,_n_index_32399,_n_value_32400);return _n_value_32400;})()));
(void)(([&](){auto&& _n_array_32401=this->_n_floorA_31923;auto _n_index_32402=_n_k_32184;auto _n_value_32403=0.05;d::put(_n_array_32401,_n_index_32402,_n_value_32403);return _n_value_32403;})());
(void)(([&](){auto&& _n_array_32404=this->_n_hazeW_31924;auto _n_index_32405=_n_k_32184;auto _n_value_32406=((0.3+(0.4*_n_dist_32189))*_n_smooth_31907((_n_tr_32172->_p_base-(_n_tr_32172->_p_h*0.7)),_n_tr_32172->_p_base,_n_y_32176));d::put(_n_array_32404,_n_index_32405,_n_value_32406);return _n_value_32406;})());
}}
}}

}
}
this->_n_RR_31943=this->_n_R_31920.slice();
this->_n_RG_31944=this->_n_G_31921.slice();
this->_n_RB_31945=this->_n_B_31922.slice();
this->_n_HWd_31946=400.0;
this->_n_haze1_31947=d::Array<float,true>(size_t((this->_n_HWd_31946*_n_H_31883)));
this->_n_haze2_31948=d::Array<float,true>(size_t((this->_n_HWd_31946*_n_H_31883)));
{double _n_r_32194=0.0;
for(;d::truth((_n_r_32194<_n_H_31883));(void)((_n_r_32194++))){d::check_cancel();{double _n_x_32195=0.0;
for(;d::truth((_n_x_32195<this->_n_HWd_31946));(void)((_n_x_32195++))){d::check_cancel();(void)(([&](){auto&& _n_array_32407=this->_n_haze1_31947;auto _n_index_32408=((_n_r_32194*this->_n_HWd_31946)+_n_x_32195);auto _n_value_32409=([&](){auto _n_argument_32410=0.4;auto _n_argument_32411=0.75;auto _n_argument_32412=_n_fbm_31905((_n_x_32195*0.018),(_n_r_32194*0.09),4.0,(this->_n_HWd_31946*0.018));return _n_smooth_31907(_n_argument_32410,_n_argument_32411,_n_argument_32412);})();d::put(_n_array_32407,_n_index_32408,_n_value_32409);return _n_value_32409;})());
(void)(([&](){auto&& _n_array_32413=this->_n_haze2_31948;auto _n_index_32414=((_n_r_32194*this->_n_HWd_31946)+_n_x_32195);auto _n_value_32415=([&](){auto _n_argument_32416=0.42;auto _n_argument_32417=0.8;auto _n_argument_32418=_n_fbm_31905(((_n_x_32195*0.04)+7.0),((_n_r_32194*0.16)+3.0),3.0,(this->_n_HWd_31946*0.04));return _n_smooth_31907(_n_argument_32416,_n_argument_32417,_n_argument_32418);})();d::put(_n_array_32413,_n_index_32414,_n_value_32415);return _n_value_32415;})());
}}
}}
this->_n_hazeRow_31949=d::Array<float,true>(size_t(_n_H_31883));
{double _n_r_32196=0.0;
for(;d::truth((_n_r_32196<_n_H_31883));(void)((_n_r_32196++))){d::check_cancel();(void)(([&](){auto&& _n_array_32419=this->_n_hazeRow_31949;auto _n_index_32420=_n_r_32196;auto _n_value_32421=(0.03+(0.42*std::exp(((-d::number(std::fabs(((_n_r_32196+0.5)-63.0))))/6.0))));d::put(_n_array_32419,_n_index_32420,_n_value_32421);return _n_value_32421;})());
}}
this->_n_birds_31950=d::Array<std::array<double,3>,false>{};
{double _n_i_32197=0.0;
for(;d::truth((_n_i_32197<3.0));(void)((_n_i_32197++))){d::check_cancel();(void)(this->_n_birds_31950.push(std::array<double,3>{((58.0+(_n_i_32197*8.0))+(_n_hash_31903(_n_i_32197,40.0)*4.0)),((30.0-(_n_i_32197*2.5))+(_n_hash_31903(_n_i_32197,41.0)*2.0)),(_n_hash_31903(_n_i_32197,42.0)*6.28)}));
}}
this->_n_dith_31951=d::Array<float,true>(size_t(this->_n_N_31915));
this->_n_jit_31952=d::Array<float,true>(size_t(this->_n_N_31915));
{double _n_k_32198=0.0;
for(;d::truth((_n_k_32198<this->_n_N_31915));(void)((_n_k_32198++))){d::check_cancel();(void)(([&](){auto&& _n_array_32422=this->_n_dith_31951;auto _n_index_32423=_n_k_32198;auto _n_value_32424=(d::at(_n_BAYER_31894,((double(d::i32(std::floor((_n_k_32198/_n_W_31882)))&d::i32(3.0))*4.0)+double(d::i32(d::mod(_n_k_32198,_n_W_31882))&d::i32(3.0))))*0.85);d::put(_n_array_32422,_n_index_32423,_n_value_32424);return _n_value_32424;})());
(void)(([&](){auto&& _n_array_32425=this->_n_jit_31952;auto _n_index_32426=_n_k_32198;auto _n_value_32427=(_n_hash_31903(_n_k_32198,77.0)-0.5);d::put(_n_array_32425,_n_index_32426,_n_value_32427);return _n_value_32427;})());
}}
this->_n_tone_31953=d::Array<float,true>(size_t(1025.0));
{double _n_i_32199=0.0;
for(;d::truth((_n_i_32199<=1024.0));(void)((_n_i_32199++))){d::check_cancel();double _n_v_32200=(_n_i_32199/256.0);
(void)(([&](){auto&& _n_array_32428=this->_n_tone_31953;auto _n_index_32429=_n_i_32199;auto _n_value_32430=(d::truth((_n_v_32200<0.75))?_n_v_32200:(0.75+(0.25*(1.0-std::exp(((-d::number((_n_v_32200-0.75)))*4.0))))));d::put(_n_array_32428,_n_index_32429,_n_value_32430);return _n_value_32430;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_32275> _a1) mutable ->d::String{double _n_t_32201=_a0;
auto _n_binding_32433=(d::present(_a1)?_a1:([&](){auto _n_object_32432=std::make_shared<_n_Record_32275>();return _n_object_32432;})());
std::optional<d::Array<uint8_t,true>> _n_color_32202=_n_binding_32433->_p_color;
{
double _n_d1_32203=(_n_t_32201*1.1);
double _n_d2_32204=(_n_t_32201*2.3);
double _n_cd_32205=(_n_t_32201*0.5);
double _n_breathe_32206=(0.035*std::sin((((_n_t_32201/6.0)*ascii::PI)*2.0)));
d::Array<double,false> _n_bx_32207=d::Array<double,false>{};
d::Array<double,false> _n_by_32208=d::Array<double,false>{};
d::Array<bool,false> _n_bu_32209=d::Array<bool,false>{};
for(auto &&_n_item_32434:this->_n_birds_31950){d::check_cancel();auto _n_binding_32435=_n_item_32434;
double _n_x0_32210=d::at(_n_binding_32435,0.0);
double _n_y0_32211=d::at(_n_binding_32435,1.0);
double _n_ph_32212=d::at(_n_binding_32435,2.0);
{
(void)(_n_bx_32207.push((d::mod((d::mod((_n_x0_32210+(_n_t_32201*3.2)),260.0)+260.0),260.0)-30.0)));
(void)(_n_by_32208.push((_n_y0_32211+(std::sin(((_n_t_32201*0.4)+_n_ph_32212))*1.3))));
(void)(_n_bu_32209.push((std::sin(((_n_t_32201*7.0)+_n_ph_32212))>0.0)));

}
}
{double _n_r_32213=0.0;
for(;d::truth((_n_r_32213<_n_H_31883));(void)((_n_r_32213++))){d::check_cancel();double _n_y_32214=(_n_r_32213+0.5);
double _n_hr_32215=d::at(this->_n_hazeRow_31949,_n_r_32213);
{double _n_x_32216=0.0;
for(;d::truth((_n_x_32216<_n_W_31882));(void)((_n_x_32216++))){d::check_cancel();double _n_k_32217=((_n_r_32213*_n_W_31882)+_n_x_32216);
double _n_m_32218=d::at(this->_n_mat_31919,_n_k_32217);
double _n_cr_32219{};
double _n_cg_32220{};
double _n_cb_32221{};
double _n_fl_32222=d::at(this->_n_floorA_31923,_n_k_32217);
double _n_fade_32223=1.0;
if(d::truth((_n_m_32218==_n_POOL_31900))){d::check_cancel();double _n_depth_32224=((_n_y_32214-_n_BASE_31885)/(_n_H_31883-_n_BASE_31885));
double _n_wob_32225=(std::sin((((_n_y_32214*1.9)-(_n_t_32201*2.4))+(std::sin(((_n_x_32216*0.11)+(_n_t_32201*0.7)))*1.5)))*(0.2+(0.7*_n_depth_32224)));
double _n_sx_32226=d::round((_n_x_32216+_n_wob_32225));
(void)((_n_sx_32226=(d::truth((_n_sx_32226<0.0))?0.0:(d::truth((_n_sx_32226>(_n_W_31882-1.0)))?(_n_W_31882-1.0):_n_sx_32226))));
double _n_sr_32227=d::round((((_n_BASE_31885-0.5)-((_n_y_32214-_n_BASE_31885)*_n_KR_31891))-(d::truth((std::sin((((_n_x_32216*0.3)+(_n_t_32201*1.3))+_n_y_32214))>0.6))?1.0:0.0)));
(void)((_n_sr_32227=(d::truth((_n_sr_32227<0.0))?0.0:(d::truth((_n_sr_32227>(_n_BASE_31885-1.0)))?(_n_BASE_31885-1.0):_n_sr_32227))));
double _n_j_32228=((_n_sr_32227*_n_W_31882)+_n_sx_32226);
double _n_src_32229=(d::truth((d::at(this->_n_mat_31919,_n_j_32228)==_n_MARBLE_31897))?1.0:0.85);
double _n_dim_32230=(_n_src_32229-(0.1*_n_depth_32224));
(void)((((_n_cr_32219=((d::at(this->_n_RR_31943,_n_j_32228)*_n_dim_32230)*0.9)),(_n_cg_32220=((d::at(this->_n_RG_31944,_n_j_32228)*_n_dim_32230)*0.94))),(_n_cb_32221=((d::at(this->_n_RB_31945,_n_j_32228)*_n_dim_32230)+0.05))));
double _n_w_32231=_n_noise_31904(((_n_x_32216*0.12)+(_n_t_32201*0.15)),((_n_y_32214*0.9)-(_n_t_32201*0.9)),0.0);
double _n_glint_32232=(_n_smooth_31907(0.75,0.95,_n_w_32231)*0.14);
(void)((((_n_cr_32219=(_n_cr_32219+_n_glint_32232)),(_n_cg_32220=(_n_cg_32220+(_n_glint_32232*0.85)))),(_n_cb_32221=(_n_cb_32221+(_n_glint_32232*0.75)))));
if((d::truth((_n_r_32213>_n_BASE_31885))&&d::truth((_n_r_32213<=(_n_BASE_31885+4.0))))){d::check_cancel();double _n_gl_32233=(([&](){auto _n_argument_32436=0.62;auto _n_argument_32437=0.85;auto _n_argument_32438=_n_noise_31904(((_n_x_32216*0.55)-(_n_t_32201*0.9)),((_n_r_32213*2.7)+(_n_t_32201*0.2)),0.0);return _n_smooth_31907(_n_argument_32436,_n_argument_32437,_n_argument_32438);})()*(0.5-(0.08*(_n_r_32213-_n_BASE_31885))));
(void)((((_n_cr_32219=(_n_cr_32219+_n_gl_32233)),(_n_cg_32220=(_n_cg_32220+(_n_gl_32233*0.85)))),(_n_cb_32221=(_n_cb_32221+(_n_gl_32233*0.6)))));
}
if(d::truth((_n_r_32213==_n_BASE_31885))){d::check_cancel();(void)((((_n_cr_32219=(_n_cr_32219+0.2)),(_n_cg_32220=(_n_cg_32220+0.16))),(_n_cb_32221=(_n_cb_32221+0.12))));
}
(void)((_n_fade_32223=(0.8+(0.2*_n_smooth_31907((_n_H_31883+2.0),(_n_H_31883-6.0),_n_y_32214)))));
}else {d::check_cancel();(void)((((_n_cr_32219=d::at(this->_n_R_31920,_n_k_32217)),(_n_cg_32220=d::at(this->_n_G_31921,_n_k_32217))),(_n_cb_32221=d::at(this->_n_B_31922,_n_k_32217))));
if(d::truth((_n_m_32218==_n_SKY_31895))){d::check_cancel();double _n_ga_32234=(d::at(this->_n_glowA_31925,_n_k_32217)*_n_breathe_32206);
(void)((((_n_cr_32219=(_n_cr_32219+_n_ga_32234)),(_n_cg_32220=(_n_cg_32220+(_n_ga_32234*0.78)))),(_n_cb_32221=(_n_cb_32221+(_n_ga_32234*0.48)))));
}
if((d::truth((_n_m_32218==_n_SKY_31895))&&d::truth((_n_y_32214<this->_n_CH_31929)))){d::check_cancel();double _n_sx_32235=(_n_x_32216+_n_cd_32205);
double _n_ix_32236=std::floor(_n_sx_32235);
double _n_fx_32237=(_n_sx_32235-_n_ix_32236);
double _n_i0_32238=((_n_r_32213*this->_n_CW_31928)+d::mod(_n_ix_32236,this->_n_CW_31928));
double _n_i1_32239=((_n_r_32213*this->_n_CW_31928)+d::mod((_n_ix_32236+1.0),this->_n_CW_31928));
double _n_c_32240=(d::at(this->_n_cloud_31932,_n_i0_32238)+((d::at(this->_n_cloud_31932,_n_i1_32239)-d::at(this->_n_cloud_31932,_n_i0_32238))*_n_fx_32237));
if(d::truth((_n_c_32240>0.01))){d::check_cancel();double _n_l_32241=(d::at(this->_n_cloudLit_31933,_n_i0_32238)+((d::at(this->_n_cloudLit_31933,_n_i1_32239)-d::at(this->_n_cloudLit_31933,_n_i0_32238))*_n_fx_32237));
double _n_near_32242=d::minimum({1.0,(d::at(this->_n_glowA_31925,_n_k_32217)*1.7)});
double _n_b2_32243=_n_clamp_31906(((0.2+(0.6*_n_l_32241))+((_n_near_32242*0.55)*_n_l_32241)));
double _n_kr_32244{};
double _n_kg_32245{};
double _n_kb_32246{};
if(d::truth((_n_b2_32243<0.5))){d::check_cancel();double _n_q_32247=(_n_b2_32243*2.0);
(void)((((_n_kr_32244=_n_mix_31908(0.16,0.6,_n_q_32247)),(_n_kg_32245=_n_mix_31908(0.12,0.34,_n_q_32247))),(_n_kb_32246=_n_mix_31908(0.3,0.5,_n_q_32247))));
}else {d::check_cancel();double _n_q_32248=((_n_b2_32243-0.5)*2.0);
(void)((((_n_kr_32244=_n_mix_31908(0.6,1.05,_n_q_32248)),(_n_kg_32245=_n_mix_31908(0.34,0.8,_n_q_32248))),(_n_kb_32246=_n_mix_31908(0.5,0.55,_n_q_32248))));
}
double _n_a_32249=(d::minimum({1.0,_n_c_32240})*0.9);
(void)((((_n_cr_32219=_n_mix_31908(_n_cr_32219,_n_kr_32244,_n_a_32249)),(_n_cg_32220=_n_mix_31908(_n_cg_32220,_n_kg_32245,_n_a_32249))),(_n_cb_32221=_n_mix_31908(_n_cb_32221,_n_kb_32246,_n_a_32249))));
}
}
if((((d::truth((_n_m_32218==_n_SKY_31895))&&d::truth((_n_r_32213<24.0)))&&d::truth((_n_x_32216>96.0)))&&d::truth((_n_hash_31903(_n_x_32216,((_n_r_32213*3.0)+11.0))>0.988)))){d::check_cancel();double _n_tw_32250=(0.7+(0.3*std::sin(([&](){auto _n_left_32439=(_n_t_32201*(1.2+(_n_hash_31903(_n_x_32216,_n_r_32213)*2.0)));auto _n_right_32440=(_n_hash_31903(_n_r_32213,_n_x_32216)*6.28);return (_n_left_32439+_n_right_32440);})())));
double _n_s_32251=([&](){auto _n_left_32441=((_n_tw_32250*0.62)*_n_smooth_31907(24.0,8.0,_n_r_32213));auto _n_right_32442=_n_smooth_31907(96.0,140.0,_n_x_32216);return (_n_left_32441*_n_right_32442);})();
(void)((((_n_cr_32219=d::maximum({_n_cr_32219,(_n_s_32251*0.85)})),(_n_cg_32220=d::maximum({_n_cg_32220,(_n_s_32251*0.85)}))),(_n_cb_32221=d::maximum({_n_cb_32221,_n_s_32251}))));
}
if(d::truth((_n_m_32218==_n_SKY_31895))){d::check_cancel();double _n_dx_32252=((_n_x_32216+0.5)-d::at(_n_SUN_31888,0.0));
double _n_dy_32253=(_n_y_32214-d::at(_n_SUN_31888,1.0));
double _n_dd_32254=((_n_dx_32252*_n_dx_32252)+(_n_dy_32253*_n_dy_32253));
if(d::truth((_n_dd_32254<22.0))){d::check_cancel();double _n_a_32255=_n_smooth_31907(22.0,9.0,_n_dd_32254);
(void)((((_n_cr_32219=_n_mix_31908(_n_cr_32219,1.05,_n_a_32255)),(_n_cg_32220=_n_mix_31908(_n_cg_32220,0.98,_n_a_32255))),(_n_cb_32221=_n_mix_31908(_n_cb_32221,0.86,_n_a_32255))));
}
{double _n_i_32256=0.0;
for(;d::truth((_n_i_32256<double(_n_bx_32207.size())));(void)((_n_i_32256++))){d::check_cancel();double _n_ox_32257=(d::round(d::at(_n_bx_32207,_n_i_32256))-_n_x_32216);
double _n_oy_32258=(d::round(d::at(_n_by_32208,_n_i_32256))-_n_r_32213);
if((d::truth((_n_ox_32257<(-d::number(2.0))))||d::truth((_n_ox_32257>2.0)))){d::check_cancel();continue;
}
double _n_ax_32259=(d::truth((_n_ox_32257<0.0))?(-d::number(_n_ox_32257)):_n_ox_32257);
bool _n_hit_32260=(d::truth(d::at(_n_bu_32209,_n_i_32256))?([&]()->bool{auto _n_logical_32443=([&]()->bool{auto _n_logical_32445=([&]()->bool{auto _n_logical_32447=(_n_ax_32259==0.0);return d::truth(_n_logical_32447)?(_n_oy_32258==0.0):_n_logical_32447;})();return d::truth(_n_logical_32445)?_n_logical_32445:([&]()->bool{auto _n_logical_32446=(_n_ax_32259==1.0);return d::truth(_n_logical_32446)?(_n_oy_32258==1.0):_n_logical_32446;})();})();return d::truth(_n_logical_32443)?_n_logical_32443:([&]()->bool{auto _n_logical_32444=(_n_ax_32259==2.0);return d::truth(_n_logical_32444)?(_n_oy_32258==1.0):_n_logical_32444;})();})():([&]()->bool{auto _n_logical_32448=([&]()->bool{auto _n_logical_32450=([&]()->bool{auto _n_logical_32452=(_n_ax_32259==0.0);return d::truth(_n_logical_32452)?(_n_oy_32258==0.0):_n_logical_32452;})();return d::truth(_n_logical_32450)?_n_logical_32450:([&]()->bool{auto _n_logical_32451=(_n_ax_32259==1.0);return d::truth(_n_logical_32451)?(_n_oy_32258==0.0):_n_logical_32451;})();})();return d::truth(_n_logical_32448)?_n_logical_32448:([&]()->bool{auto _n_logical_32449=(_n_ax_32259==2.0);return d::truth(_n_logical_32449)?(_n_oy_32258==(-d::number(1.0))):_n_logical_32449;})();})());
if(d::truth(_n_hit_32260)){d::check_cancel();(void)(((((_n_cr_32219=0.16),(_n_cg_32220=0.1)),(_n_cb_32221=0.17)),(_n_fl_32222=0.0)));
}
}}
}
}
double _n_hw_32261=d::at(this->_n_hazeW_31924,_n_k_32217);
if((d::truth((_n_hw_32261>0.0))||d::truth((_n_m_32218==_n_POOL_31900)))){d::check_cancel();double _n_a_32262=((d::truth((_n_m_32218==_n_POOL_31900))?0.12:_n_hw_32261)*_n_hr_32215);
double _n_sx1_32263=d::mod((_n_x_32216+_n_d1_32203),this->_n_HWd_31946);
double _n_sx2_32264=d::mod((_n_x_32216+_n_d2_32204),this->_n_HWd_31946);
double _n_i1_32265=((_n_r_32213*this->_n_HWd_31946)+double(d::i32(_n_sx1_32263)|d::i32(0.0)));
double _n_i2_32266=((_n_r_32213*this->_n_HWd_31946)+double(d::i32(_n_sx2_32264)|d::i32(0.0)));
double _n_hz_32267=(_n_a_32262*((0.35+(0.75*d::at(this->_n_haze1_31947,_n_i1_32265)))+(0.45*d::at(this->_n_haze2_31948,_n_i2_32266))));
(void)((((_n_cr_32219=_n_mix_31908(_n_cr_32219,0.9,_n_hz_32267)),(_n_cg_32220=_n_mix_31908(_n_cg_32220,0.64,_n_hz_32267))),(_n_cb_32221=_n_mix_31908(_n_cb_32221,0.62,_n_hz_32267))));
}
(void)((((_n_cr_32219=d::at(this->_n_tone_31953,d::minimum({1024.0,double(d::i32((_n_cr_32219*256.0))|d::i32(0.0))}))),(_n_cg_32220=d::at(this->_n_tone_31953,d::minimum({1024.0,double(d::i32((_n_cg_32220*256.0))|d::i32(0.0))})))),(_n_cb_32221=d::at(this->_n_tone_31953,d::minimum({1024.0,double(d::i32((_n_cb_32221*256.0))|d::i32(0.0))})))));
double _n_peak_32268=d::maximum({_n_cr_32219,_n_cg_32220,_n_cb_32221,0.0001});
double _n_level_32269=(_n_clamp_31906((_n_fl_32222+(((1.0-_n_fl_32222)*std::pow(_n_peak_32268,1.1))*1.02)))*_n_fade_32223);
double _n_step_32270=([&](){auto _n_argument_32453=0.0;auto _n_argument_32454=([&](){auto _n_argument_32455=3.0;auto _n_argument_32456=d::round((((_n_level_32269*3.0)+d::at(this->_n_dith_31951,_n_k_32217))+(d::at(this->_n_jit_31952,_n_k_32217)*(d::truth((_n_level_32269<0.3))?0.12:0.3))));return d::minimum({_n_argument_32455,_n_argument_32456});})();return d::maximum({_n_argument_32453,_n_argument_32454});})();
(void)(([&](){auto&& _n_array_32457=this->_n_out_31916;auto _n_index_32458=_n_k_32217;auto _n_value_32459=d::at(_n_DOTS_31892,_n_step_32270);d::put(_n_array_32457,_n_index_32458,_n_value_32459);return _n_value_32459;})());
if(d::truth(_n_color_32202)){d::check_cancel();double _n_want_32271=(d::truth(_n_step_32270)?d::minimum({1.0,((_n_level_32269+0.06)/d::at(_n_COVER_31893,_n_step_32270))}):0.0);
double _n_s_32272=((0.3+(0.7*_n_want_32271))/_n_peak_32268);
if((d::truth((_n_m_32218==_n_SKY_31895))&&d::truth((_n_s_32272>1.6)))){d::check_cancel();(void)((_n_s_32272=1.6));
}
(void)(([&](){auto&& _n_array_32460=d::read(_n_color_32202);auto _n_index_32461=_n_k_32217;auto _n_value_32462=([&](){auto _n_argument_32463=_n_clamp_31906((_n_cr_32219*_n_s_32272));auto _n_argument_32464=_n_clamp_31906((_n_cg_32220*_n_s_32272));auto _n_argument_32465=_n_clamp_31906((_n_cb_32221*_n_s_32272));return this->_n_nearest_31918(_n_argument_32463,_n_argument_32464,_n_argument_32465);})();d::put(_n_array_32460,_n_index_32461,_n_value_32462);return _n_value_32462;})());
}
}}
}}
d::Array<d::String,false> _n_lines_32273=d::Array<d::String,false>{};
{double _n_r_32274=0.0;
for(;d::truth((_n_r_32274<_n_H_31883));(void)((_n_r_32274++))){d::check_cancel();(void)(_n_lines_32273.push(d::join(this->_n_out_31916.slice((_n_r_32274*_n_W_31882),((_n_r_32274+1.0)*_n_W_31882)),d::String(u""))));
}}
return d::join(_n_lines_32273,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("taj-dawn").cols)*ascii::catalog_meta("taj-dawn").rows);auto _env=std::make_shared<_n_Record_32275>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &taj_dawn_meta(){return catalog_meta("taj-dawn");}
std::unique_ptr<Piece> make_taj_dawn(const AsciiPieceOptions &o){return std::make_unique<Native_taj_dawn>(o);}
}
