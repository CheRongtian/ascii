// Direct, statically typed C++ from src/pieces/taj-dawn.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31880;
struct _n_Record_31939;
struct _n_Record_32274;
struct _n_Record_31880{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_31880> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31880>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_31939{
double _p_x{};
double _p_base{};
double _p_h{};
double _p_w{};
double _p_s{};
static std::shared_ptr<_n_Record_31939> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31939>();out->_p_x=d::decode<double>(j["x"]);out->_p_base=d::decode<double>(j["base"]);out->_p_h=d::decode<double>(j["h"]);out->_p_w=d::decode<double>(j["w"]);out->_p_s=d::decode<double>(j["s"]);return out;}
};
struct _n_Record_32274{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32274> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32274>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_31902(double _a0,double _a1);
double _n_noise_31903(double _a0,double _a1,double _a2);
double _n_fbm_31904(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_31905(double _a0);
double _n_smooth_31906(double _a0,double _a1,double _a2);
double _n_mix_31907(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_31908(d::String _a0);
double _n_onion_31909(double _a0);
double _n_arch_31910(double _a0,double _a1);
std::optional<d::Array<double,false>> _n_taj_31911(double _a0,double _a1);
double _n_mosque_31912(double _a0,double _a1);
std::shared_ptr<_n_Record_31880> _n_meta_31879=[](){return ([&](){auto _n_object_32277=std::make_shared<_n_Record_31880>();_n_object_32277->_p_name=d::String(u"taj dawn");_n_object_32277->_p_category=d::String(u"scenes");_n_object_32277->_p_note=d::String(u"the taj mahal at sunrise, mirrored in its pool through morning haze");_n_object_32277->_p_cols=200.0;_n_object_32277->_p_rows=100.0;_n_object_32277->_p_cell=1.0;_n_object_32277->_p_fps=15.0;_n_object_32277->_p_ground=d::String(u"#0d0a13");_n_object_32277->_p_palette=d::Array<d::String,false>{d::String(u"#2e2a55"),d::String(u"#3d3870"),d::String(u"#514a8a"),d::String(u"#6a62a3"),d::String(u"#8a83bd"),d::String(u"#5a3a5e"),d::String(u"#7a4d72"),d::String(u"#9a6284"),d::String(u"#b97a92"),d::String(u"#d495a2"),d::String(u"#b8705a"),d::String(u"#d98d66"),d::String(u"#efab78"),d::String(u"#f8c98e"),d::String(u"#ffe2ae"),d::String(u"#fff3d8"),d::String(u"#fffcf2"),d::String(u"#8e7f9e"),d::String(u"#ad9cb4"),d::String(u"#cbb6c4"),d::String(u"#e3cdd2"),d::String(u"#f3e0dc"),d::String(u"#2a4a3e"),d::String(u"#36584a"),d::String(u"#4a6c58"),d::String(u"#66845f"),d::String(u"#8a9a68"),d::String(u"#8a4a3e"),d::String(u"#b0624a"),d::String(u"#3a2f4a"),d::String(u"#4e3d5a"),d::String(u"#f6d6c0"),d::String(u"#e9bfae"),d::String(u"#5e6a40"),d::String(u"#7d8a52"),d::String(u"#a3a064"),d::String(u"#c2b274")};return _n_object_32277;})();}();
const double _n_W_31881=[](){return 200.0;}();
const double _n_H_31882=[](){return 100.0;}();
const double _n_CX_31883=[](){return 128.0;}();
const double _n_BASE_31884=[](){return 68.0;}();
const double _n_HZ_31885=[](){return 60.0;}();
const double _n_S_31886=[](){return 0.7;}();
d::Array<double,false> _n_SUN_31887=[](){return d::Array<double,false>{36.0,40.0};}();
const double _n_MX_31888=[](){return 45.0;}();
const double _n_MB_31889=[](){return 67.0;}();
const double _n_KR_31890=[](){return 1.55;}();
const d::String _n_DOTS_31891=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_31892=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_31893=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_31953=_a0;
return ((_n_v_31953/16.0)-0.47);});}();
const double _n_SKY_31894=[](){return 0.0;}();
const double _n_BGTREE_31895=[](){return 1.0;}();
const double _n_MARBLE_31896=[](){return 2.0;}();
const double _n_LAWN_31897=[](){return 3.0;}();
const double _n_WALK_31898=[](){return 4.0;}();
const double _n_POOL_31899=[](){return 5.0;}();
const double _n_CYPRESS_31900=[](){return 6.0;}();
const double _n_MOSQUE_31901=[](){return 7.0;}();
double _n_hash_31902(double _a0,double _a1){double _n_x_31954=_a0;
double _n_y_31955=_a1;
{
double _n_h_31956=([&](){auto _n_left_32278=d::imul(double(d::i32(_n_x_31954)|d::i32(0.0)),374761393.0);auto _n_right_32279=d::imul(double(d::i32(_n_y_31955)|d::i32(0.0)),668265263.0);return (_n_left_32278+_n_right_32279);})();
(void)((_n_h_31956=d::imul(double(d::i32(_n_h_31956)^d::i32(double(d::u32(_n_h_31956)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_31956)^d::i32(double(d::u32(_n_h_31956)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_31903(double _a0,double _a1,double _a2){double _n_x_31957=_a0;
double _n_y_31958=_a1;
double _n_period_31959=_a2;
{
double _n_xi_31960=std::floor(_n_x_31957);
double _n_yi_31961=std::floor(_n_y_31958);
double _n_fx_31962=(_n_x_31957-_n_xi_31960);
double _n_fy_31963=(_n_y_31958-_n_yi_31961);
double _n_u_31964=((_n_fx_31962*_n_fx_31962)*(3.0-(2.0*_n_fx_31962)));
double _n_v_31965=((_n_fy_31963*_n_fy_31963)*(3.0-(2.0*_n_fy_31963)));
double _n_x0_31966=_n_xi_31960;
double _n_x1_31967=(_n_xi_31960+1.0);
if(d::truth(_n_period_31959)){d::check_cancel();(void)((_n_x0_31966=d::mod((d::mod(_n_xi_31960,_n_period_31959)+_n_period_31959),_n_period_31959)));
(void)((_n_x1_31967=d::mod((_n_x0_31966+1.0),_n_period_31959)));
}
double _n_a_31968=_n_hash_31902(_n_x0_31966,_n_yi_31961);
double _n_b_31969=_n_hash_31902(_n_x1_31967,_n_yi_31961);
double _n_c_31970=_n_hash_31902(_n_x0_31966,(_n_yi_31961+1.0));
double _n_d_31971=_n_hash_31902(_n_x1_31967,(_n_yi_31961+1.0));
return (((_n_a_31968+((_n_b_31969-_n_a_31968)*_n_u_31964))+((_n_c_31970-_n_a_31968)*_n_v_31965))+(((((_n_a_31968-_n_b_31969)-_n_c_31970)+_n_d_31971)*_n_u_31964)*_n_v_31965));

}
}

double _n_fbm_31904(double _a0,double _a1,double _a2,double _a3){double _n_x_31972=_a0;
double _n_y_31973=_a1;
double _n_octaves_31974=_a2;
double _n_period_31975=_a3;
{
double _n_s_31976=0.0;
double _n_n_31977=0.0;
double _n_amp_31978=0.5;
double _n_f_31979=1.0;
{double _n_i_31980=0.0;
for(;d::truth((_n_i_31980<_n_octaves_31974));(void)((_n_i_31980++))){d::check_cancel();(void)((_n_s_31976=(_n_s_31976+(_n_amp_31978*_n_noise_31903((_n_x_31972*_n_f_31979),(_n_y_31973*_n_f_31979),(_n_period_31975*_n_f_31979))))));
(void)((_n_n_31977=(_n_n_31977+_n_amp_31978)));
(void)((_n_amp_31978=(_n_amp_31978*0.5)));
(void)((_n_f_31979=(_n_f_31979*2.0)));
}}
return (_n_s_31976/_n_n_31977);

}
}

double _n_clamp_31905(double _a0){double _n_v_31981=_a0;
return (d::truth((_n_v_31981<0.0))?0.0:(d::truth((_n_v_31981>1.0))?1.0:_n_v_31981));}

double _n_smooth_31906(double _a0,double _a1,double _a2){double _n_a_31982=_a0;
double _n_b_31983=_a1;
double _n_v_31984=_a2;
{
double _n_k_31985=_n_clamp_31905(((_n_v_31984-_n_a_31982)/(_n_b_31983-_n_a_31982)));
return ((_n_k_31985*_n_k_31985)*(3.0-(2.0*_n_k_31985)));

}
}

double _n_mix_31907(double _a0,double _a1,double _a2){double _n_a_31986=_a0;
double _n_b_31987=_a1;
double _n_k_31988=_a2;
return (_n_a_31986+((_n_b_31987-_n_a_31986)*_n_k_31988));}

d::Array<double,false> _n_hex_31908(d::String _a0){d::String _n_s_31989=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_31990=_a0;
return (([&](){auto _n_argument_32280=d::slice(_n_s_31989,_n_i_31990,(_n_i_31990+2.0));auto _n_argument_32281=16.0;return d::parseInt(_n_argument_32280,_n_argument_32281);})()/255.0);});}

double _n_onion_31909(double _a0){double _n_h_31991=_a0;
return (d::truth((_n_h_31991<0.3))?(0.8+(0.2*std::sin((((_n_h_31991/0.3)*ascii::PI)*0.5)))):([&](){auto _n_argument_32282=std::cos(((((_n_h_31991-0.3)/0.7)*ascii::PI)*0.5));auto _n_argument_32283=1.45;return std::pow(_n_argument_32282,_n_argument_32283);})());}

double _n_arch_31910(double _a0,double _a1){double _n_w_31992=_a0;
double _n_h_31993=_a1;
{
if(d::truth((_n_h_31993<=0.0))){d::check_cancel();return _n_w_31992;
}
double _n_c_31994=(_n_w_31992*0.5);
double _n_R_31995=(_n_w_31992+_n_c_31994);
double _n_q_31996=((_n_R_31995*_n_R_31995)-(_n_h_31993*_n_h_31993));
return (d::truth((_n_q_31996>0.0))?([&](){auto _n_argument_32284=0.0;auto _n_argument_32285=(std::sqrt(_n_q_31996)-_n_c_31994);return d::maximum({_n_argument_32284,_n_argument_32285});})():0.0);

}
}

std::optional<d::Array<double,false>> _n_taj_31911(double _a0,double _a1){double _n_X_31997=_a0;
double _n_Y_31998=_a1;
{
double _n_ax_31999=std::fabs(_n_X_31997);
double _n_left_32000=(d::truth((_n_X_31997<0.0))?1.0:(-d::number(1.0)));
if(((d::truth((_n_Y_31998>=72.0))&&d::truth((_n_Y_31998<80.5)))&&d::truth((_n_ax_31999<=([&](){auto _n_left_32286=(0.75+(d::truth((std::fabs((_n_Y_31998-74.5))<0.9))?0.6:0.0));auto _n_right_32287=(d::truth((std::fabs((_n_Y_31998-77.0))<0.7))?0.4:0.0);return (_n_left_32286+_n_right_32287);})())))){d::check_cancel();return d::Array<double,false>{(0.75+(0.2*_n_left_32000)),0.0};
}
if((d::truth((_n_Y_31998>=47.5))&&d::truth((_n_Y_31998<72.0)))){d::check_cancel();double _n_h_32001=((_n_Y_31998-47.5)/24.5);
double _n_hw_32002=(15.0*_n_onion_31909(_n_h_32001));
if(d::truth((_n_ax_31999<=_n_hw_32002))){d::check_cancel();double _n_nx_32003=(_n_X_31997/(_n_hw_32002+0.01));
double _n_nz_32004=std::sqrt(d::maximum({0.0,(1.0-(_n_nx_32003*_n_nx_32003))}));
return d::Array<double,false>{_n_clamp_31905(((0.3+(0.5*(((-d::number(0.8))*_n_nx_32003)+(0.4*_n_nz_32004))))+(0.2*_n_h_32001))),0.0};
}
}
double _n_cx_32005=(_n_ax_31999-17.5);
if(((d::truth((std::fabs(_n_cx_32005)<=4.4))&&d::truth((_n_Y_31998>=39.5)))&&d::truth((_n_Y_31998<55.5)))){d::check_cancel();double _n_nx_32006=((d::truth((_n_X_31997<0.0))?(-d::number(_n_cx_32005)):_n_cx_32005)/4.4);
if(d::truth((_n_Y_31998<41.0))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905((0.5-((0.4*_n_nx_32006)*_n_left_32000))),0.0};
}
if(d::truth((_n_Y_31998<46.5))){d::check_cancel();if(d::truth((std::fabs(_n_cx_32005)>3.6))){d::check_cancel();return std::optional<d::Array<double,false>>{};
}
bool _n_open_32007=([&]()->bool{auto _n_logical_32288=([&]()->bool{auto _n_logical_32289=(std::fabs(_n_cx_32005)<2.6);return d::truth(_n_logical_32289)?(std::fabs(_n_cx_32005)>0.6):_n_logical_32289;})();return d::truth(_n_logical_32288)?(_n_Y_31998<45.5):_n_logical_32288;})();
return d::Array<double,false>{_n_clamp_31905((0.5-(((0.45*(d::truth((_n_X_31997<0.0))?(-d::number(_n_cx_32005)):_n_cx_32005))/4.0)*_n_left_32000))),(d::truth(_n_open_32007)?0.75:0.0)};
}
if(d::truth((_n_Y_31998<47.3))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905((0.55-((0.4*_n_nx_32006)*_n_left_32000))),0.0};
}
double _n_h_32008=((_n_Y_31998-47.3)/6.5);
if((d::truth((_n_h_32008<1.0))&&d::truth(([&](){auto _n_left_32290=std::fabs(_n_cx_32005);auto _n_right_32291=(4.0*_n_onion_31909(_n_h_32008));return (_n_left_32290<=_n_right_32291);})()))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905(((0.55-((0.6*((d::truth((_n_X_31997<0.0))?(-d::number(_n_cx_32005)):_n_cx_32005)/((4.0*_n_onion_31909(_n_h_32008))+0.01)))*_n_left_32000))+(0.1*_n_h_32008))),0.0};
}
if((d::truth((_n_h_32008>=1.0))&&d::truth((std::fabs(_n_cx_32005)<0.6)))){d::check_cancel();return d::Array<double,false>{0.6,0.0};
}
}
if(((d::truth((_n_Y_31998>=40.0))&&d::truth((_n_Y_31998<47.5)))&&d::truth((_n_ax_31999<=12.2)))){d::check_cancel();double _n_nx_32009=(_n_X_31997/12.2);
double _n_band_32010=(d::truth((_n_Y_31998>45.8))?0.15:0.0);
return d::Array<double,false>{_n_clamp_31905(((0.45-(0.55*_n_nx_32009))+_n_band_32010)),0.0};
}
if((d::truth(([&]()->bool{auto _n_logical_32292=([&]()->bool{auto _n_logical_32293=(std::fabs((_n_ax_31999-8.8))<0.75);return d::truth(_n_logical_32293)?(_n_Y_31998>=40.0):_n_logical_32293;})();return d::truth(_n_logical_32292)?(_n_Y_31998<47.5):_n_logical_32292;})())||d::truth(([&]()->bool{auto _n_logical_32294=([&]()->bool{auto _n_logical_32295=(std::fabs((_n_ax_31999-28.2))<0.75);return d::truth(_n_logical_32295)?(_n_Y_31998>=38.0):_n_logical_32295;})();return d::truth(_n_logical_32294)?(_n_Y_31998<44.5):_n_logical_32294;})()))){d::check_cancel();return d::Array<double,false>{(0.55+(0.25*_n_left_32000)),0.0};
}
if(((d::truth((_n_ax_31999<=28.5))&&d::truth((_n_Y_31998>=7.0)))&&d::truth((_n_Y_31998<40.0)))){d::check_cancel();if(((d::truth((_n_Y_31998>=38.5))&&d::truth((_n_ax_31999>9.0)))&&d::truth(double(d::i32(std::floor(((_n_ax_31999+0.5)/1.5)))&d::i32(1.0))))){d::check_cancel();return std::optional<d::Array<double,false>>{};
}
if(d::truth((_n_ax_31999<=9.0))){d::check_cancel();double _n_hw_32011=_n_arch_31910(6.0,(_n_Y_31998-25.0));
if((d::truth((_n_ax_31999<=_n_hw_32011))&&d::truth((_n_Y_31998<(25.0+9.0))))){d::check_cancel();bool _n_door_32012=([&]()->bool{auto _n_logical_32296=(_n_ax_31999<=3.2);return d::truth(_n_logical_32296)?(_n_ax_31999<=_n_arch_31910(3.2,(_n_Y_31998-15.5))):_n_logical_32296;})();
return d::Array<double,false>{(0.35+(0.15*_n_left_32000)),(d::truth(_n_door_32012)?0.82:(0.6+(0.12*(1.0-_n_smooth_31906(25.0,33.0,_n_Y_31998)))))};
}
if((d::truth((_n_ax_31999<=(_n_hw_32011+0.8)))&&d::truth((_n_Y_31998<(25.0+10.2))))){d::check_cancel();return d::Array<double,false>{0.42,0.35};
}
if(((d::truth((_n_ax_31999>7.6))&&d::truth((_n_ax_31999<=9.0)))&&d::truth((_n_Y_31998<40.0)))){d::check_cancel();return d::Array<double,false>{(0.5+(0.12*_n_left_32000)),0.08};
}
return d::Array<double,false>{(0.5+(0.08*_n_left_32000)),0.0};
}
if(d::truth((_n_ax_31999<=21.0))){d::check_cancel();double _n_nx_32013=(_n_ax_31999-15.0);
for(auto &&_n_item_32297:d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,21.5},d::Array<double,false>{24.5,37.0}}){d::check_cancel();auto _n_binding_32298=_n_item_32297;
double _n_y0_32014=d::at(_n_binding_32298,0.0);
double _n_y1_32015=d::at(_n_binding_32298,1.0);
{
if(((d::truth((_n_Y_31998>=_n_y0_32014))&&d::truth((_n_Y_31998<_n_y1_32015)))&&d::truth(([&](){auto _n_left_32299=std::fabs(_n_nx_32013);auto _n_right_32300=_n_arch_31910(3.6,(_n_Y_31998-(_n_y1_32015-4.5)));return (_n_left_32299<=_n_right_32300);})()))){d::check_cancel();return d::Array<double,false>{(0.4+(0.1*_n_left_32000)),0.5};
}
if((((d::truth((_n_Y_31998>=(_n_y0_32014-0.6)))&&d::truth((_n_Y_31998<(_n_y1_32015+0.6))))&&d::truth(([&](){auto _n_left_32301=std::fabs(_n_nx_32013);auto _n_right_32302=_n_arch_31910(4.3,(_n_Y_31998-(_n_y1_32015-4.2)));return (_n_left_32301<=_n_right_32302);})()))&&d::truth((std::fabs(_n_nx_32013)>3.6)))){d::check_cancel();return d::Array<double,false>{0.45,0.22};
}

}
}
return d::Array<double,false>{(0.5+(0.1*_n_left_32000)),0.0};
}
double _n_lit_32016=(0.5+(0.48*_n_left_32000));
double _n_nx_32017=(_n_ax_31999-24.7);
for(auto &&_n_item_32303:d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,21.5},d::Array<double,false>{24.5,37.0}}){d::check_cancel();auto _n_binding_32304=_n_item_32303;
double _n_y0_32018=d::at(_n_binding_32304,0.0);
double _n_y1_32019=d::at(_n_binding_32304,1.0);
{
if(((d::truth((_n_Y_31998>=_n_y0_32018))&&d::truth((_n_Y_31998<_n_y1_32019)))&&d::truth(([&](){auto _n_left_32305=std::fabs(_n_nx_32017);auto _n_right_32306=_n_arch_31910(2.2,(_n_Y_31998-(_n_y1_32019-3.0)));return (_n_left_32305<=_n_right_32306);})()))){d::check_cancel();return d::Array<double,false>{(_n_lit_32016*0.7),0.45};
}

}
}
return d::Array<double,false>{_n_lit_32016,0.0};
}
double _n_mx_32020=(_n_ax_31999-44.0);
if((d::truth((_n_Y_31998>=7.0))&&d::truth((_n_Y_31998<57.0)))){d::check_cancel();double _n_s_32021=(d::truth((_n_X_31997<0.0))?(-d::number(_n_mx_32020)):_n_mx_32020);
double _n_hw_32022=(2.9-((0.6*(_n_Y_31998-7.0))/40.0));
for(auto &&_n_item_32307:d::Array<double,false>{19.5,32.0,44.5}){d::check_cancel();double _n_g_32023=_n_item_32307;
{
if(((d::truth((_n_Y_31998>=_n_g_32023))&&d::truth((_n_Y_31998<(_n_g_32023+1.4))))&&d::truth((std::fabs(_n_mx_32020)<=(_n_hw_32022+1.1))))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905((0.5-(((0.42*_n_s_32021)/(_n_hw_32022+1.1))*_n_left_32000))),(d::truth((_n_Y_31998<(_n_g_32023+0.5)))?0.35:0.0)};
}

}
}
if((d::truth((_n_Y_31998<46.0))&&d::truth((std::fabs(_n_mx_32020)<=_n_hw_32022)))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905((0.5-((0.48*(_n_s_32021/_n_hw_32022))*_n_left_32000))),0.0};
}
if(((d::truth((_n_Y_31998>=45.9))&&d::truth((_n_Y_31998<49.5)))&&d::truth((std::fabs(_n_mx_32020)<=2.2)))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905((0.5-(((0.4*_n_s_32021)/2.2)*_n_left_32000))),((d::truth((std::fabs(_n_mx_32020)<1.4))&&d::truth((std::fabs(_n_mx_32020)>0.3)))?0.7:0.0)};
}
if(d::truth((_n_Y_31998>=49.5))){d::check_cancel();double _n_h_32024=((_n_Y_31998-49.5)/4.5);
if((d::truth((_n_h_32024<1.0))&&d::truth(([&](){auto _n_left_32308=std::fabs(_n_mx_32020);auto _n_right_32309=(2.5*_n_onion_31909(_n_h_32024));return (_n_left_32308<=_n_right_32309);})()))){d::check_cancel();return d::Array<double,false>{_n_clamp_31905((0.55-(((0.55*_n_s_32021)/((2.5*_n_onion_31909(_n_h_32024))+0.01))*_n_left_32000))),0.0};
}
if(((d::truth((_n_h_32024>=1.0))&&d::truth((_n_Y_31998<56.0)))&&d::truth((std::fabs(_n_mx_32020)<0.5)))){d::check_cancel();return d::Array<double,false>{0.6,0.0};
}
}
}
if(((d::truth((_n_ax_31999<=47.5))&&d::truth((_n_Y_31998>=0.0)))&&d::truth((_n_Y_31998<7.0)))){d::check_cancel();if(d::truth((_n_Y_31998>6.2))){d::check_cancel();return d::Array<double,false>{0.62,0.0};
}
double _n_k_32025=(d::mod(_n_ax_31999,5.2)-2.6);
if(((d::truth((_n_Y_31998>1.5))&&d::truth((_n_Y_31998<5.2)))&&d::truth((std::fabs(_n_k_32025)<1.1)))){d::check_cancel();return d::Array<double,false>{0.42,0.3};
}
return d::Array<double,false>{0.52,0.0};
}
return std::optional<d::Array<double,false>>{};

}
}

double _n_mosque_31912(double _a0,double _a1){double _n_xc_32026=_a0;
double _n_y_32027=_a1;
{
double _n_dx_32028=(_n_xc_32026-_n_MX_31888);
double _n_ax_32029=std::fabs(_n_dx_32028);
if(((d::truth((_n_y_32027>=(_n_MB_31889-2.5)))&&d::truth((_n_y_32027<_n_MB_31889)))&&d::truth((_n_ax_32029<=22.0)))){d::check_cancel();return 0.0;
}
double _n_tx_32030=std::fabs((_n_ax_32029-19.5));
if(((d::truth((_n_tx_32030<=1.3))&&d::truth((_n_y_32027>=(_n_MB_31889-13.0))))&&d::truth((_n_y_32027<(_n_MB_31889-2.5))))){d::check_cancel();return 0.0;
}
if((d::truth((_n_y_32027>=(_n_MB_31889-15.5)))&&d::truth((_n_y_32027<(_n_MB_31889-13.0))))){d::check_cancel();double _n_h_32031=(((_n_MB_31889-13.0)-_n_y_32027)/2.5);
if(d::truth((_n_tx_32030<=(1.8*_n_onion_31909(_n_h_32031))))){d::check_cancel();return 1.0;
}
}
if(((d::truth((_n_tx_32030<0.35))&&d::truth((_n_y_32027>=(_n_MB_31889-16.5))))&&d::truth((_n_y_32027<(_n_MB_31889-15.5))))){d::check_cancel();return 1.0;
}
if(((d::truth((_n_ax_32029<=5.5))&&d::truth((_n_y_32027>=(_n_MB_31889-15.0))))&&d::truth((_n_y_32027<(_n_MB_31889-2.5))))){d::check_cancel();if((d::truth((_n_y_32027<(_n_MB_31889-14.3)))&&d::truth(double(d::i32(std::floor(_n_xc_32026))&d::i32(1.0))))){d::check_cancel();return (-d::number(1.0));
}
if((d::truth((_n_ax_32029<=_n_arch_31910(3.4,((_n_MB_31889-9.5)-_n_y_32027))))&&d::truth((_n_y_32027>=(_n_MB_31889-13.5))))){d::check_cancel();return 2.0;
}
return 0.0;
}
if(((d::truth((_n_ax_32029<=18.0))&&d::truth((_n_y_32027>=(_n_MB_31889-10.0))))&&d::truth((_n_y_32027<(_n_MB_31889-2.5))))){d::check_cancel();double _n_bay_32032=(d::mod((_n_ax_32029-5.5),4.2)-2.1);
if(((d::truth((_n_ax_32029>6.0))&&d::truth((_n_y_32027>=(_n_MB_31889-8.5))))&&d::truth(([&](){auto _n_left_32310=std::fabs(_n_bay_32032);auto _n_right_32311=_n_arch_31910(1.4,((_n_MB_31889-6.2)-_n_y_32027));return (_n_left_32310<=_n_right_32311);})()))){d::check_cancel();return 2.0;
}
return 0.0;
}
if((((d::truth((_n_ax_32029<=18.0))&&d::truth((_n_y_32027>=(_n_MB_31889-10.8))))&&d::truth((_n_y_32027<(_n_MB_31889-10.0))))&&d::truth(double(d::i32(std::floor((_n_xc_32026*0.75)))&d::i32(1.0))))){d::check_cancel();return 0.0;
}
double _n_sx_32033=std::fabs((_n_ax_32029-11.5));
if(((d::truth((_n_sx_32033<=2.6))&&d::truth((_n_y_32027>=(_n_MB_31889-12.0))))&&d::truth((_n_y_32027<(_n_MB_31889-10.0))))){d::check_cancel();return 0.0;
}
if((d::truth((_n_y_32027>=(_n_MB_31889-17.0)))&&d::truth((_n_y_32027<(_n_MB_31889-12.0))))){d::check_cancel();double _n_h_32034=(((_n_MB_31889-12.0)-_n_y_32027)/5.0);
if(d::truth((_n_sx_32033<=(3.6*_n_onion_31909(_n_h_32034))))){d::check_cancel();return 1.0;
}
}
if(((d::truth((_n_sx_32033<0.35))&&d::truth((_n_y_32027>=(_n_MB_31889-18.5))))&&d::truth((_n_y_32027<(_n_MB_31889-17.0))))){d::check_cancel();return 1.0;
}
if(((d::truth((_n_ax_32029<=4.0))&&d::truth((_n_y_32027>=(_n_MB_31889-16.5))))&&d::truth((_n_y_32027<(_n_MB_31889-15.0))))){d::check_cancel();return 0.0;
}
if((d::truth((_n_y_32027>=(_n_MB_31889-23.5)))&&d::truth((_n_y_32027<(_n_MB_31889-16.5))))){d::check_cancel();double _n_h_32035=(((_n_MB_31889-16.5)-_n_y_32027)/7.0);
if(d::truth((_n_ax_32029<=(5.2*_n_onion_31909(_n_h_32035))))){d::check_cancel();return 1.0;
}
}
if(((d::truth((_n_ax_32029<0.4))&&d::truth((_n_y_32027>=(_n_MB_31889-25.5))))&&d::truth((_n_y_32027<(_n_MB_31889-23.5))))){d::check_cancel();return 1.0;
}
return (-d::number(1.0));

}
}

struct Native_taj_dawn final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_31913{};
double _n_N_31914{};
d::Array<d::String,false> _n_out_31915{};
d::Array<uint8_t,true> _n_lut_31916{};
d::Array<uint8_t,true> _n_mat_31918{};
d::Array<float,true> _n_R_31919{};
d::Array<float,true> _n_G_31920{};
d::Array<float,true> _n_B_31921{};
d::Array<float,true> _n_floorA_31922{};
d::Array<float,true> _n_hazeW_31923{};
d::Array<float,true> _n_glowA_31924{};
double _n_CW_31927{};
double _n_CH_31928{};
d::Array<d::Array<double,false>,false> _n_banks_31929{};
d::Array<float,true> _n_cloud_31931{};
d::Array<float,true> _n_cloudLit_31932{};
d::Array<d::Array<double,false>,false> _n_crowns_31933{};
d::Array<float,true> _n_tops_31934{};
d::Array<std::shared_ptr<_n_Record_31939>,false> _n_trees_31938{};
d::Array<int8_t,true> _n_mq_31941{};
d::Array<float,true> _n_RR_31942{};
d::Array<float,true> _n_RG_31943{};
d::Array<float,true> _n_RB_31944{};
double _n_HWd_31945{};
d::Array<float,true> _n_haze1_31946{};
d::Array<float,true> _n_haze2_31947{};
d::Array<float,true> _n_hazeRow_31948{};
d::Array<d::Array<double,false>,false> _n_birds_31949{};
d::Array<float,true> _n_dith_31950{};
d::Array<float,true> _n_jit_31951{};
d::Array<float,true> _n_tone_31952{};
std::function<d::String(double,std::shared_ptr<_n_Record_32274>)> _render;
double _n_nearest_31917(double _a0,double _a1,double _a2){double _n_r_32036=_a0;
double _n_g_32037=_a1;
double _n_b_32038=_a2;
{
double _n_k_32039=([&](){auto _n_left_32465=([&](){auto _n_left_32467=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_32036*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_32468=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_32037*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_32467)|d::i32(_n_right_32468));})();auto _n_right_32466=d::minimum({31.0,double(d::i32((_n_b_32038*31.99))|d::i32(0.0))});return double(d::i32(_n_left_32465)|d::i32(_n_right_32466));})();
if(d::truth((d::at(this->_n_lut_31916,_n_k_32039)!=255.0))){d::check_cancel();return d::at(this->_n_lut_31916,_n_k_32039);
}
double _n_best_32040=0.0;
double _n_bd_32041=1000000000.0;
{double _n_i_32042=0.0;
for(;d::truth((_n_i_32042<double(this->_n_P_31913.size())));(void)((_n_i_32042++))){d::check_cancel();double _n_dr_32043=(d::at(d::at(this->_n_P_31913,_n_i_32042),0.0)-_n_r_32036);
double _n_dg_32044=(d::at(d::at(this->_n_P_31913,_n_i_32042),1.0)-_n_g_32037);
double _n_db_32045=(d::at(d::at(this->_n_P_31913,_n_i_32042),2.0)-_n_b_32038);
double _n_d_32046=((((0.3*_n_dr_32043)*_n_dr_32043)+((0.5*_n_dg_32044)*_n_dg_32044))+((0.2*_n_db_32045)*_n_db_32045));
if(d::truth((_n_d_32046<_n_bd_32041))){d::check_cancel();(void)(((_n_bd_32041=_n_d_32046),(_n_best_32040=_n_i_32042)));
}
}}
return ([&](){auto&& _n_array_32469=this->_n_lut_31916;auto _n_index_32470=_n_k_32039;auto _n_value_32471=_n_best_32040;d::put(_n_array_32469,_n_index_32470,_n_value_32471);return _n_value_32471;})();

}
}

double _n_sunGlow_31925(double _a0,double _a1){double _n_x_32047=_a0;
double _n_y_32048=_a1;
{
double _n_dx_32049=(_n_x_32047-d::at(_n_SUN_31887,0.0));
double _n_dy_32050=((_n_y_32048-d::at(_n_SUN_31887,1.0))*1.25);
double _n_d_32051=std::sqrt(((_n_dx_32049*_n_dx_32049)+(_n_dy_32050*_n_dy_32050)));
return ([&](){auto _n_left_32472=([&](){auto _n_left_32474=(std::exp(((-d::number(_n_d_32051))/4.0))*0.9);auto _n_right_32475=(std::exp(((-d::number(_n_d_32051))/13.0))*0.42);return (_n_left_32474+_n_right_32475);})();auto _n_right_32473=(std::exp(((-d::number(_n_d_32051))/40.0))*0.3);return (_n_left_32472+_n_right_32473);})();

}
}

d::Array<double,false> _n_skyAt_31926(double _a0,double _a1){double _n_x_32052=_a0;
double _n_y_32053=_a1;
{
double _n_v_32054=_n_clamp_31905((_n_y_32053/_n_HZ_31885));
double _n_up_32055=_n_smooth_31906(0.05,0.8,_n_v_32054);
double _n_r_32056=_n_mix_31907(0.055,0.3,_n_up_32055);
double _n_g_32057=_n_mix_31907(0.05,0.19,_n_up_32055);
double _n_b_32058=_n_mix_31907(0.17,0.36,_n_up_32055);
double _n_low_32059=_n_smooth_31906(0.62,1.0,_n_v_32054);
(void)((((_n_r_32056=_n_mix_31907(_n_r_32056,0.66,_n_low_32059)),(_n_g_32057=_n_mix_31907(_n_g_32057,0.4,_n_low_32059))),(_n_b_32058=_n_mix_31907(_n_b_32058,0.42,_n_low_32059))));
double _n_far_32060=(_n_smooth_31906(50.0,200.0,_n_x_32052)*0.18);
(void)((((_n_r_32056=(_n_r_32056*(1.0-_n_far_32060))),(_n_g_32057=(_n_g_32057*(1.0-(_n_far_32060*0.8))))),(_n_b_32058=(_n_b_32058*(1.0-(_n_far_32060*0.3))))));
double _n_glow_32061=([&](){auto _n_left_32476=this->_n_sunGlow_31925(_n_x_32052,_n_y_32053);auto _n_right_32477=([&](){auto _n_left_32478=(std::exp(((-d::number(std::fabs((_n_y_32053-57.0))))/5.0))*0.25);auto _n_right_32479=std::exp(((-d::number(std::fabs((_n_x_32052-d::at(_n_SUN_31887,0.0)))))/50.0));return (_n_left_32478*_n_right_32479);})();return (_n_left_32476+_n_right_32477);})();
(void)((((_n_r_32056=(_n_r_32056+(_n_glow_32061*1.0))),(_n_g_32057=(_n_g_32057+(_n_glow_32061*0.78)))),(_n_b_32058=(_n_b_32058+(_n_glow_32061*0.48)))));
double _n_ang_32062=std::atan2((_n_y_32053-d::at(_n_SUN_31887,1.0)),(_n_x_32052-d::at(_n_SUN_31887,0.0)));
double _n_ray_32063=_n_fbm_31904(((_n_ang_32062*9.0)+3.0),1.7,2.0,0.0);
double _n_rd_32064=d::hypot(std::initializer_list<double>{(_n_x_32052-d::at(_n_SUN_31887,0.0)),(_n_y_32053-d::at(_n_SUN_31887,1.0))});
double _n_shaft_32065=(([&](){auto _n_left_32480=([&](){auto _n_left_32482=_n_smooth_31906(0.5,0.75,_n_ray_32063);auto _n_right_32483=std::exp(((-d::number(_n_rd_32064))/45.0));return (_n_left_32482*_n_right_32483);})();auto _n_right_32481=_n_smooth_31906(4.0,14.0,_n_rd_32064);return (_n_left_32480*_n_right_32481);})()*0.12);
(void)((((_n_r_32056=(_n_r_32056+_n_shaft_32065)),(_n_g_32057=(_n_g_32057+(_n_shaft_32065*0.8)))),(_n_b_32058=(_n_b_32058+(_n_shaft_32065*0.55)))));
return d::Array<double,false>{_n_r_32056,_n_g_32057,_n_b_32058};

}
}

double _n_cdens_31930(double _a0,double _a1){double _n_x_32066=_a0;
double _n_y_32067=_a1;
{
double _n_q_32068=_n_fbm_31904((_n_x_32066*0.01),(_n_y_32067*0.04),2.0,(this->_n_CW_31927*0.01));
double _n_n_32069=_n_fbm_31904(((_n_x_32066*0.025)+(_n_q_32068*1.6)),((_n_y_32067*0.075)+(_n_q_32068*0.6)),5.0,(this->_n_CW_31927*0.025));
double _n_m_32070=0.0;
for(auto &&_n_item_32484:this->_n_banks_31929){d::check_cancel();auto _n_binding_32485=_n_item_32484;
double _n_bx_32071=d::at(_n_binding_32485,0.0);
double _n_by_32072=d::at(_n_binding_32485,1.0);
double _n_rx_32073=d::at(_n_binding_32485,2.0);
double _n_up_32074=d::at(_n_binding_32485,3.0);
double _n_down_32075=d::at(_n_binding_32485,4.0);
double _n_a_32076=d::at(_n_binding_32485,5.0);
{
double _n_dx_32077=(_n_x_32066-_n_bx_32071);
(void)((_n_dx_32077=(_n_dx_32077-(d::round((_n_dx_32077/this->_n_CW_31927))*this->_n_CW_31927))));
double _n_ex_32078=(_n_dx_32077/_n_rx_32073);
double _n_ey_32079=((_n_y_32067-_n_by_32072)/(d::truth((_n_y_32067<_n_by_32072))?_n_up_32074:_n_down_32075));
double _n_e_32080=(std::exp((((((-d::number(_n_ex_32078))*_n_ex_32078)*_n_ex_32078)*_n_ex_32078)-(_n_ey_32079*_n_ey_32079)))*_n_a_32076);
if(d::truth((_n_e_32080>_n_m_32070))){d::check_cancel();(void)((_n_m_32070=_n_e_32080));
}

}
}
return (((0.62*_n_m_32070)+(1.4*(_n_n_32069-0.5)))+0.02);

}
}

double _n_treeTop_31935(double _a0){double _n_x_32095=_a0;
return d::at(this->_n_tops_31934,([&](){auto _n_argument_32486=(_n_W_31881-1.0);auto _n_argument_32487=([&](){auto _n_argument_32488=0.0;auto _n_argument_32489=std::floor(_n_x_32095);return d::maximum({_n_argument_32488,_n_argument_32489});})();return d::minimum({_n_argument_32486,_n_argument_32487});})());}

double _n_poolHalf_31936(double _a0){double _n_y_32096=_a0;
return ((0.5*(_n_y_32096-_n_HZ_31885))+1.0);}

double _n_walkHalf_31937(double _a0){double _n_y_32097=_a0;
return ((0.7*(_n_y_32097-_n_HZ_31885))+1.5);}

double _n_shadowAt_31940(double _a0,double _a1){double _n_xc_32103=_a0;
double _n_y_32104=_a1;
{
double _n_lit_32105=1.0;
for(auto &&_n_item_32490:this->_n_trees_31938){d::check_cancel();std::shared_ptr<_n_Record_31939> _n_tr_32106=_n_item_32490;
{
double _n_dx_32107=(_n_xc_32103-_n_tr_32106->_p_x);
double _n_dy_32108=(_n_y_32104-_n_tr_32106->_p_base);
if(d::truth((_n_dy_32108<(-d::number(0.5))))){d::check_cancel();continue;
}
double _n_along_32109=(((_n_dx_32107*0.6)+(_n_dy_32108*0.8))/_n_tr_32106->_p_s);
double _n_across_32110=(((_n_dx_32107*0.8)-(_n_dy_32108*0.6))/_n_tr_32106->_p_s);
if(((d::truth((_n_along_32109>0.0))&&d::truth((_n_along_32109<3.0)))&&d::truth((std::fabs(_n_across_32110)<((0.17*(1.0-(_n_along_32109/3.4)))+0.03))))){d::check_cancel();(void)((_n_lit_32105=(_n_lit_32105*(0.08+(0.92*_n_smooth_31906(1.6,3.0,_n_along_32109))))));
}

}
}
return _n_lit_32105;

}
}

explicit Native_taj_dawn(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_31913=d::map(_n_meta_31879->_p_palette,_n_hex_31908);
this->_n_N_31914=(_n_W_31881*_n_H_31882);
this->_n_out_31915=d::Array<d::String,false>(size_t(this->_n_N_31914));
this->_n_lut_31916=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_31918=d::Array<uint8_t,true>(size_t(this->_n_N_31914));
this->_n_R_31919=d::Array<float,true>(size_t(this->_n_N_31914));
this->_n_G_31920=d::Array<float,true>(size_t(this->_n_N_31914));
this->_n_B_31921=d::Array<float,true>(size_t(this->_n_N_31914));
this->_n_floorA_31922=d::Array<float,true>(size_t(this->_n_N_31914)).fill(0.12);
this->_n_hazeW_31923=d::Array<float,true>(size_t(this->_n_N_31914));
this->_n_glowA_31924=d::Array<float,true>(size_t(this->_n_N_31914));
this->_n_CW_31927=400.0;
this->_n_CH_31928=50.0;
this->_n_banks_31929=d::Array<d::Array<double,false>,false>{d::Array<double,false>{76.0,28.0,40.0,7.0,3.5,1.4},d::Array<double,false>{152.0,36.0,52.0,9.0,4.0,1.0},d::Array<double,false>{16.0,13.0,32.0,4.0,2.5,0.8},d::Array<double,false>{250.0,24.0,40.0,8.0,4.0,1.0},d::Array<double,false>{330.0,33.0,36.0,7.0,4.0,0.95}};
this->_n_cloud_31931=d::Array<float,true>(size_t((this->_n_CW_31927*this->_n_CH_31928)));
this->_n_cloudLit_31932=d::Array<float,true>(size_t((this->_n_CW_31927*this->_n_CH_31928)));
{double _n_r_32081=0.0;
for(;d::truth((_n_r_32081<this->_n_CH_31928));(void)((_n_r_32081++))){d::check_cancel();{double _n_x_32082=0.0;
for(;d::truth((_n_x_32082<this->_n_CW_31927));(void)((_n_x_32082++))){d::check_cancel();double _n_y_32083=(_n_r_32081+0.5);
double _n_d_32084=this->_n_cdens_31930(_n_x_32082,_n_y_32083);
(void)(([&](){auto&& _n_array_32312=this->_n_cloud_31931;auto _n_index_32313=((_n_r_32081*this->_n_CW_31927)+_n_x_32082);auto _n_value_32314=_n_smooth_31906(0.46,0.66,_n_d_32084);d::put(_n_array_32312,_n_index_32313,_n_value_32314);return _n_value_32314;})());
double _n_toward_32085=this->_n_cdens_31930((_n_x_32082-2.0),(_n_y_32083+2.5));
(void)(([&](){auto&& _n_array_32315=this->_n_cloudLit_31932;auto _n_index_32316=((_n_r_32081*this->_n_CW_31927)+_n_x_32082);auto _n_value_32317=_n_clamp_31905((((0.56+((_n_d_32084-_n_toward_32085)*0.75))-((_n_d_32084-0.6)*0.2))+(0.7*(_n_fbm_31904((_n_x_32082*0.09),(_n_y_32083*0.2),2.0,(this->_n_CW_31927*0.09))-0.5))));d::put(_n_array_32315,_n_index_32316,_n_value_32317);return _n_value_32317;})());
}}
}}
this->_n_crowns_31933=d::Array<d::Array<double,false>,false>{};
{double _n_x_32086=(-d::number(12.0));
double _n_i_32087=0.0;
for(;d::truth((_n_x_32086<(_n_W_31881+12.0)));(void)(((_n_x_32086=(_n_x_32086+(4.0+(_n_hash_31902(_n_i_32087,60.0)*5.0)))),(_n_i_32087++)))){d::check_cancel();double _n_rad_32088=(3.0+(_n_hash_31902(_n_i_32087,61.0)*4.5));
(void)(this->_n_crowns_31933.push(d::Array<double,false>{_n_x_32086,(([&](){auto _n_left_32318=(60.5-(_n_hash_31902(_n_i_32087,62.0)*2.5));auto _n_right_32319=(2.5*_n_fbm_31904((_n_x_32086*0.03),2.0,2.0,0.0));return (_n_left_32318-_n_right_32319);})()+(_n_rad_32088*0.35)),_n_rad_32088}));
}}
this->_n_tops_31934=d::Array<float,true>(size_t(_n_W_31881));
{double _n_x_32089=0.0;
for(;d::truth((_n_x_32089<_n_W_31881));(void)((_n_x_32089++))){d::check_cancel();double _n_t0_32090=64.0;
for(auto &&_n_item_32320:this->_n_crowns_31933){d::check_cancel();auto _n_binding_32321=_n_item_32320;
double _n_cx_32091=d::at(_n_binding_32321,0.0);
double _n_cy_32092=d::at(_n_binding_32321,1.0);
double _n_rad_32093=d::at(_n_binding_32321,2.0);
{
double _n_dx_32094=((_n_x_32089+0.5)-_n_cx_32091);
if(d::truth((std::fabs(_n_dx_32094)<_n_rad_32093))){d::check_cancel();(void)((_n_t0_32090=([&](){auto _n_argument_32322=_n_t0_32090;auto _n_argument_32323=(_n_cy_32092-(std::sqrt(((_n_rad_32093*_n_rad_32093)-(_n_dx_32094*_n_dx_32094)))*0.75));return d::minimum({_n_argument_32322,_n_argument_32323});})()));
}

}
}
(void)(([&](){auto&& _n_array_32324=this->_n_tops_31934;auto _n_index_32325=_n_x_32089;auto _n_value_32326=(_n_t0_32090-(0.6*_n_fbm_31904((_n_x_32089*0.5),7.0,2.0,0.0)));d::put(_n_array_32324,_n_index_32325,_n_value_32326);return _n_value_32326;})());
}}
this->_n_trees_31938=d::Array<std::shared_ptr<_n_Record_31939>,false>{};
for(auto &&_n_item_32327:d::Array<double,false>{8.5,10.4,13.0,16.8,22.5,31.0}){d::check_cancel();double _n_s_32098=_n_item_32327;
{
for(auto &&_n_item_32328:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_32099=_n_item_32328;
{
for(auto &&_n_item_32329:d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.3,0.8},d::Array<double,false>{2.45,1.0}}){d::check_cancel();auto _n_binding_32330=_n_item_32329;
double _n_off_32100=d::at(_n_binding_32330,0.0);
double _n_tall_32101=d::at(_n_binding_32330,1.0);
{
if((d::truth((_n_off_32100>3.0))&&d::truth(([&]()->bool{auto _n_logical_32331=(_n_s_32098>20.0);return d::truth(_n_logical_32331)?_n_logical_32331:(_n_side_32099>0.0);})()))){d::check_cancel();continue;
}
if((d::truth((_n_side_32099<0.0))&&d::truth((_n_s_32098>30.0)))){d::check_cancel();continue;
}
double _n_cxp_32102=(_n_CX_31883+((_n_side_32099*_n_off_32100)*_n_s_32098));
(void)(this->_n_trees_31938.push(([&](){auto _n_object_32333=std::make_shared<_n_Record_31939>();_n_object_32333->_p_x=(_n_cxp_32102+((_n_hash_31902((_n_s_32098*10.0),(_n_side_32099+_n_off_32100))-0.5)*0.6));_n_object_32333->_p_base=(_n_HZ_31885+_n_s_32098);_n_object_32333->_p_h=(((1.6*_n_tall_32101)*_n_s_32098)*(0.94+(0.12*_n_hash_31902((_n_s_32098*7.0),((_n_side_32099+3.0)+_n_off_32100)))));_n_object_32333->_p_w=(0.26*_n_s_32098);_n_object_32333->_p_s=_n_s_32098;return _n_object_32333;})()));

}
}

}
}

}
}
this->_n_mq_31941=d::Array<int8_t,true>(size_t(this->_n_N_31914)).fill((-d::number(1.0)));
{double _n_r_32111=(_n_MB_31889-27.0);
for(;d::truth((_n_r_32111<_n_MB_31889));(void)((_n_r_32111++))){d::check_cancel();{double _n_x_32112=(_n_MX_31888-24.0);
for(;d::truth((_n_x_32112<=(_n_MX_31888+24.0)));(void)((_n_x_32112++))){d::check_cancel();(void)(([&](){auto&& _n_array_32334=this->_n_mq_31941;auto _n_index_32335=((_n_r_32111*_n_W_31881)+_n_x_32112);auto _n_value_32336=_n_mosque_31912((_n_x_32112+0.5),(_n_r_32111+0.5));d::put(_n_array_32334,_n_index_32335,_n_value_32336);return _n_value_32336;})());
}}
}}
{double _n_r_32113=0.0;
for(;d::truth((_n_r_32113<_n_H_31882));(void)((_n_r_32113++))){d::check_cancel();{double _n_x_32114=0.0;
for(;d::truth((_n_x_32114<_n_W_31881));(void)((_n_x_32114++))){d::check_cancel();double _n_k_32115=((_n_r_32113*_n_W_31881)+_n_x_32114);
double _n_y_32116=(_n_r_32113+0.5);
double _n_xc_32117=(_n_x_32114+0.5);
double _n_m_32118=_n_SKY_31894;
std::optional<double> _n_cr_32119{};
std::optional<double> _n_cg_32120{};
std::optional<double> _n_cb_32121{};
double _n_fl_32122=0.18;
double _n_hz_32123=0.0;
double _n_tt_32124=this->_n_treeTop_31935(_n_xc_32117);
if((d::truth((_n_y_32116<_n_BASE_31884))&&d::truth((_n_y_32116>=_n_tt_32124)))){d::check_cancel();(void)((_n_m_32118=_n_BGTREE_31895));
}else {d::check_cancel();if(d::truth((_n_y_32116>=_n_BASE_31884))){d::check_cancel();double _n_dx_32125=std::fabs((_n_xc_32117-_n_CX_31883));
(void)((_n_m_32118=(d::truth((_n_dx_32125<this->_n_poolHalf_31936(_n_y_32116)))?_n_POOL_31899:(d::truth((_n_dx_32125<this->_n_walkHalf_31937(_n_y_32116)))?_n_WALK_31898:_n_LAWN_31897))));
}
}
if(d::truth((_n_m_32118==_n_SKY_31894))){d::check_cancel();(void)(([&](){auto _n_unpack_32337=this->_n_skyAt_31926(_n_xc_32117,_n_y_32116);_n_cr_32119=std::optional<double>(d::at(_n_unpack_32337,0.0));_n_cg_32120=std::optional<double>(d::at(_n_unpack_32337,1.0));_n_cb_32121=std::optional<double>(d::at(_n_unpack_32337,2.0));return _n_unpack_32337;})());
double _n_veil_32126=(0.88+(0.24*_n_fbm_31904((_n_xc_32117*0.05),(_n_y_32116*0.09),3.0,0.0)));
(void)(((d::read((_n_cr_32119=(d::read(_n_cr_32119)*_n_veil_32126))),d::read((_n_cg_32120=(d::read(_n_cg_32120)*_n_veil_32126)))),d::read((_n_cb_32121=(d::read(_n_cb_32121)*_n_veil_32126)))));
(void)(([&](){auto&& _n_array_32338=this->_n_glowA_31924;auto _n_index_32339=_n_k_32115;auto _n_value_32340=this->_n_sunGlow_31925(_n_xc_32117,_n_y_32116);d::put(_n_array_32338,_n_index_32339,_n_value_32340);return _n_value_32340;})());
(void)((_n_hz_32123=(0.5+(0.5*_n_smooth_31906(20.0,58.0,_n_y_32116)))));
(void)((_n_fl_32122=(0.05+(0.13*_n_smooth_31906(18.0,42.0,_n_y_32116)))));
}else {d::check_cancel();if(d::truth((_n_m_32118==_n_BGTREE_31895))){d::check_cancel();double _n_tex_32127=_n_fbm_31904((_n_xc_32117*0.25),(_n_y_32116*0.3),3.0,0.0);
double _n_depth_32128=_n_smooth_31906(_n_tt_32124,_n_BASE_31884,_n_y_32116);
d::Array<double,false> _n_sky_32129=this->_n_skyAt_31926(_n_xc_32117,_n_tt_32124);
double _n_a_32130=((0.46-(0.12*_n_depth_32128))+(0.12*_n_tex_32127));
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(0.1,d::at(_n_sky_32129,0.0),_n_a_32130)))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(0.09,d::at(_n_sky_32129,1.0),_n_a_32130))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(0.15,d::at(_n_sky_32129,2.0),_n_a_32130))))));
double _n_rim_32131=([&](){auto _n_left_32341=_n_smooth_31906((_n_tt_32124+1.8),_n_tt_32124,_n_y_32116);auto _n_right_32342=std::exp(((-d::number(std::fabs((_n_xc_32117-d::at(_n_SUN_31887,0.0)))))/18.0));return (_n_left_32341*_n_right_32342);})();
(void)(((d::read((_n_cr_32119=(d::read(_n_cr_32119)+(0.4*_n_rim_32131)))),d::read((_n_cg_32120=(d::read(_n_cg_32120)+(0.27*_n_rim_32131))))),d::read((_n_cb_32121=(d::read(_n_cb_32121)+(0.14*_n_rim_32131))))));
double _n_patch_32132=(0.45+(0.75*([&](){auto _n_argument_32343=0.3;auto _n_argument_32344=0.7;auto _n_argument_32345=_n_fbm_31904(((_n_xc_32117*0.035)+11.0),(_n_y_32116*0.18),3.0,0.0);return _n_smooth_31906(_n_argument_32343,_n_argument_32344,_n_argument_32345);})()));
double _n_mist_32133=([&](){auto _n_left_32346=(_n_smooth_31906((_n_tt_32124+1.0),(_n_BASE_31884+1.0),_n_y_32116)*0.75);auto _n_right_32347=d::minimum({1.0,_n_patch_32132});return (_n_left_32346*_n_right_32347);})();
double _n_mw_32134=std::exp(((-d::number(std::fabs((_n_xc_32117-d::at(_n_SUN_31887,0.0)))))/90.0));
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(d::read(_n_cr_32119),(0.62+(0.25*_n_mw_32134)),_n_mist_32133)))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(d::read(_n_cg_32120),(0.46+(0.16*_n_mw_32134)),_n_mist_32133))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(d::read(_n_cb_32121),(0.55+(0.02*_n_mw_32134)),_n_mist_32133))))));
(void)((_n_fl_32122=0.1));
(void)((_n_hz_32123=0.8));
}else {d::check_cancel();if(d::truth((_n_m_32118==_n_LAWN_31897))){d::check_cancel();double _n_v_32135=((_n_y_32116-_n_BASE_31884)/(_n_H_31882-_n_BASE_31884));
double _n_u_32136=((_n_xc_32117-_n_CX_31883)/(_n_y_32116-_n_HZ_31885));
double _n_tex_32137=_n_fbm_31904((_n_u_32136*3.0),(40.0/(_n_y_32116-_n_HZ_31885)),3.0,0.0);
double _n_stripe_32138=(d::truth(double(d::i32(std::floor((_n_u_32136*1.4)))&d::i32(1.0)))?1.0:0.55);
double _n_lit_32139=(((0.6+(0.4*std::exp(((-d::number(std::fabs((_n_xc_32117-d::at(_n_SUN_31887,0.0)))))/60.0))))*_n_stripe_32138)*(0.85+(0.3*_n_tex_32137)));
(void)((_n_lit_32139=(_n_lit_32139*this->_n_shadowAt_31940(_n_xc_32117,_n_y_32116))));
double _n_vig_32140=(1.0-([&](){auto _n_left_32348=(0.45*_n_smooth_31906(0.5,1.0,_n_v_32135));auto _n_right_32349=(0.6+(0.4*([&](){auto _n_argument_32350=40.0;auto _n_argument_32351=0.0;auto _n_argument_32352=d::minimum({_n_xc_32117,(_n_W_31881-_n_xc_32117)});return _n_smooth_31906(_n_argument_32350,_n_argument_32351,_n_argument_32352);})()));return (_n_left_32348*_n_right_32349);})());
double _n_fall_32141=(1.0-(0.35*_n_v_32135));
double _n_warm_32142=std::exp(((-d::number(std::fabs((_n_xc_32117-d::at(_n_SUN_31887,0.0)))))/80.0));
double _n_amb_32143=((0.75+(0.5*_n_stripe_32138))-(0.25*_n_v_32135));
(void)((_n_cr_32119=std::optional<double>((((0.12*_n_amb_32143)+((0.56*_n_lit_32139)*_n_fall_32141))*_n_vig_32140))));
(void)((_n_cg_32120=std::optional<double>((((0.09*_n_amb_32143)+(((0.36+(0.14*_n_warm_32142))*_n_lit_32139)*_n_fall_32141))*_n_vig_32140))));
(void)((_n_cb_32121=std::optional<double>((((0.24*_n_amb_32143)+(((0.26-(0.1*_n_warm_32142))*_n_lit_32139)*_n_fall_32141))*_n_vig_32140))));
double _n_far_32144=(_n_smooth_31906((_n_BASE_31884+10.0),_n_BASE_31884,_n_y_32116)*0.7);
double _n_mw_32145=std::exp(((-d::number(std::fabs((_n_xc_32117-d::at(_n_SUN_31887,0.0)))))/90.0));
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(d::read(_n_cr_32119),(0.62+(0.25*_n_mw_32145)),_n_far_32144)))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(d::read(_n_cg_32120),(0.46+(0.16*_n_mw_32145)),_n_far_32144))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(d::read(_n_cb_32121),(0.55+(0.02*_n_mw_32145)),_n_far_32144))))));
(void)((_n_fl_32122=0.1));
(void)((_n_hz_32123=(0.7*(1.0-_n_v_32135))));
}else {d::check_cancel();if(d::truth((_n_m_32118==_n_WALK_31898))){d::check_cancel();double _n_v_32146=((_n_y_32116-_n_BASE_31884)/(_n_H_31882-_n_BASE_31884));
double _n_lit_32147=(d::truth((_n_xc_32117<_n_CX_31883))?1.0:0.86);
double _n_joint_32148=((d::truth((d::mod((90.0/(_n_y_32116-_n_HZ_31885)),1.0)<0.14))?0.72:1.0)*(0.5+(0.5*this->_n_shadowAt_31940(_n_xc_32117,_n_y_32116))));
(void)(((d::read((_n_cr_32119=std::optional<double>((((0.78-(0.22*_n_v_32146))*_n_lit_32147)*_n_joint_32148)))),d::read((_n_cg_32120=std::optional<double>((((0.57-(0.16*_n_v_32146))*_n_lit_32147)*_n_joint_32148))))),d::read((_n_cb_32121=std::optional<double>((((0.53-(0.12*_n_v_32146))*_n_lit_32147)*_n_joint_32148))))));
(void)((_n_fl_32122=0.15));
(void)((_n_hz_32123=0.3));
}else {d::check_cancel();(void)((_n_fl_32122=0.15));
}
}
}
}
double _n_q_32149=d::at(this->_n_mq_31941,_n_k_32115);
if(d::truth((_n_q_32149>=0.0))){d::check_cancel();(void)((_n_m_32118=_n_MOSQUE_31901));
double _n_sg_32150=this->_n_sunGlow_31925(_n_xc_32117,_n_y_32116);
bool _n_isDome_32151=(_n_q_32149==1.0);
d::Array<double,false> _n_a_32152=(d::truth(_n_isDome_32151)?d::Array<double,false>{0.2,0.11,0.19}:d::Array<double,false>{0.31,0.13,0.15});
if(d::truth((_n_q_32149==2.0))){d::check_cancel();(void)((_n_a_32152=d::Array<double,false>{0.07,0.04,0.07}));
}
double _n_air_32153=(0.06+(0.3*_n_smooth_31906((_n_MB_31889-8.0),_n_MB_31889,_n_y_32116)));
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(d::at(_n_a_32152,0.0),0.62,_n_air_32153)))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(d::at(_n_a_32152,1.0),0.44,_n_air_32153))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(d::at(_n_a_32152,2.0),0.5,_n_air_32153))))));
double _n_lft_32154=(d::truth((_n_x_32114>0.0))?d::at(this->_n_mq_31941,(_n_k_32115-1.0)):(-d::number(1.0)));
double _n_up_32155=(d::truth((_n_r_32113>0.0))?d::at(this->_n_mq_31941,(_n_k_32115-_n_W_31881)):(-d::number(1.0)));
double _n_toward_32156=(d::truth((_n_xc_32117<d::at(_n_SUN_31887,0.0)))?(d::truth((_n_x_32114<(_n_W_31881-1.0)))?d::at(this->_n_mq_31941,(_n_k_32115+1.0)):(-d::number(1.0))):_n_lft_32154);
double _n_rim_32157=(((d::truth((_n_up_32155<0.0))?0.75:0.0)+(d::truth((_n_toward_32156<0.0))?0.9:0.0))+((d::truth((_n_lft_32154<0.0))&&d::truth((_n_up_32155<0.0)))?0.2:0.0));
(void)((_n_rim_32157=([&](){auto _n_left_32353=d::minimum({1.0,_n_rim_32157});auto _n_right_32354=d::minimum({1.0,(0.25+(_n_sg_32150*1.6))});return (_n_left_32353*_n_right_32354);})()));
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(d::read(_n_cr_32119),1.0,(_n_rim_32157*0.8))))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(d::read(_n_cg_32120),0.7,(_n_rim_32157*0.8)))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(d::read(_n_cb_32121),0.48,(_n_rim_32157*0.8)))))));
(void)((_n_fl_32122=0.04));
(void)((_n_hz_32123=0.15));
}
if(d::truth((_n_y_32116<(_n_BASE_31884+0.01)))){d::check_cancel();std::optional<d::Array<double,false>> _n_t_32158=_n_taj_31911(((_n_xc_32117-_n_CX_31883)/_n_S_31886),((_n_BASE_31884-_n_y_32116)/_n_S_31886));
if(d::truth(_n_t_32158)){d::check_cancel();(void)((_n_m_32118=_n_MARBLE_31896));
auto _n_binding_32355=d::read(_n_t_32158);
double _n_lit_32159=d::at(_n_binding_32355,0.0);
double _n_rec_32160=d::at(_n_binding_32355,1.0);
d::Array<double,false> _n_sh_32161=d::Array<double,false>{0.42,0.36,0.56};
d::Array<double,false> _n_fr_32162=d::Array<double,false>{0.9,0.76,0.75};
d::Array<double,false> _n_gd_32163=d::Array<double,false>{1.0,0.88,0.72};
d::Array<double,false> _n_a_32164{};
d::Array<double,false> _n_b2_32165{};
double _n_kk_32166{};
if(d::truth((_n_lit_32159<0.5))){d::check_cancel();(void)((((_n_a_32164=_n_sh_32161),(_n_b2_32165=_n_fr_32162)),(_n_kk_32166=std::pow((_n_lit_32159*2.0),1.4))));
}else {d::check_cancel();(void)((((_n_a_32164=_n_fr_32162),(_n_b2_32165=_n_gd_32163)),(_n_kk_32166=((_n_lit_32159-0.5)*2.0))));
}
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(d::at(_n_a_32164,0.0),d::at(_n_b2_32165,0.0),_n_kk_32166)))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(d::at(_n_a_32164,1.0),d::at(_n_b2_32165,1.0),_n_kk_32166))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(d::at(_n_a_32164,2.0),d::at(_n_b2_32165,2.0),_n_kk_32166))))));
if(d::truth((_n_rec_32160>0.0))){d::check_cancel();double _n_d_32167=(1.0-(_n_rec_32160*0.78));
(void)(((d::read((_n_cr_32119=(d::read(_n_cr_32119)*(_n_d_32167*0.95)))),d::read((_n_cg_32120=(d::read(_n_cg_32120)*(_n_d_32167*0.92))))),d::read((_n_cb_32121=(d::read(_n_cb_32121)*_n_d_32167)))));
}
double _n_g_32168=(0.94+(0.08*_n_hash_31902(((_n_x_32114*3.0)+1.0),((_n_r_32113*5.0)+2.0))));
(void)(((d::read((_n_cr_32119=(d::read(_n_cr_32119)*_n_g_32168))),d::read((_n_cg_32120=(d::read(_n_cg_32120)*_n_g_32168)))),d::read((_n_cb_32121=(d::read(_n_cb_32121)*_n_g_32168)))));
double _n_low_32169=(_n_smooth_31906(40.0,_n_BASE_31884,_n_y_32116)*0.2);
d::Array<double,false> _n_sky_32170=this->_n_skyAt_31926(_n_xc_32117,_n_y_32116);
(void)(((d::read((_n_cr_32119=std::optional<double>(_n_mix_31907(d::read(_n_cr_32119),d::at(_n_sky_32170,0.0),_n_low_32169)))),d::read((_n_cg_32120=std::optional<double>(_n_mix_31907(d::read(_n_cg_32120),d::at(_n_sky_32170,1.0),_n_low_32169))))),d::read((_n_cb_32121=std::optional<double>(_n_mix_31907(d::read(_n_cb_32121),d::at(_n_sky_32170,2.0),_n_low_32169))))));
(void)((_n_fl_32122=0.12));
(void)((_n_hz_32123=0.55));
}
}
(void)(([&](){auto&& _n_array_32356=this->_n_mat_31918;auto _n_index_32357=_n_k_32115;auto _n_value_32358=_n_m_32118;d::put(_n_array_32356,_n_index_32357,_n_value_32358);return _n_value_32358;})());
(void)(((([&](){auto&& _n_array_32359=this->_n_R_31919;auto _n_index_32360=_n_k_32115;auto _n_value_32361=d::read(_n_cr_32119);d::put(_n_array_32359,_n_index_32360,_n_value_32361);return _n_value_32361;})(),([&](){auto&& _n_array_32362=this->_n_G_31920;auto _n_index_32363=_n_k_32115;auto _n_value_32364=d::read(_n_cg_32120);d::put(_n_array_32362,_n_index_32363,_n_value_32364);return _n_value_32364;})()),([&](){auto&& _n_array_32365=this->_n_B_31921;auto _n_index_32366=_n_k_32115;auto _n_value_32367=d::read(_n_cb_32121);d::put(_n_array_32365,_n_index_32366,_n_value_32367);return _n_value_32367;})()));
(void)(([&](){auto&& _n_array_32368=this->_n_floorA_31922;auto _n_index_32369=_n_k_32115;auto _n_value_32370=_n_fl_32122;d::put(_n_array_32368,_n_index_32369,_n_value_32370);return _n_value_32370;})());
(void)(([&](){auto&& _n_array_32371=this->_n_hazeW_31923;auto _n_index_32372=_n_k_32115;auto _n_value_32373=_n_hz_32123;d::put(_n_array_32371,_n_index_32372,_n_value_32373);return _n_value_32373;})());
}}
}}
for(auto &&_n_item_32374:this->_n_trees_31938){d::check_cancel();std::shared_ptr<_n_Record_31939> _n_tr_32171=_n_item_32374;
{
double _n_top_32172=(_n_tr_32171->_p_base-_n_tr_32171->_p_h);
double _n_sunSide_32173=(d::truth((_n_tr_32171->_p_x<_n_CX_31883))?0.9:0.6);
{double _n_r_32174=([&](){auto _n_argument_32375=0.0;auto _n_argument_32376=std::floor(_n_top_32172);return d::maximum({_n_argument_32375,_n_argument_32376});})();
for(;d::truth((_n_r_32174<([&](){auto _n_argument_32377=_n_H_31882;auto _n_argument_32378=std::ceil((_n_tr_32171->_p_base+0.6));return d::minimum({_n_argument_32377,_n_argument_32378});})()));(void)((_n_r_32174++))){d::check_cancel();double _n_y_32175=(_n_r_32174+0.5);
double _n_u_32176=((_n_tr_32171->_p_base-_n_y_32175)/_n_tr_32171->_p_h);
if(d::truth((_n_u_32176>1.0))){d::check_cancel();continue;
}
double _n_p_32177=(d::truth((_n_u_32176<0.06))?0.18:(d::truth((_n_u_32176<0.3))?(0.8+(0.2*(_n_u_32176/0.3))):std::pow(((1.0-_n_u_32176)/0.7),0.8)));
{double _n_x_32178=([&](){auto _n_argument_32379=0.0;auto _n_argument_32380=std::floor(((_n_tr_32171->_p_x-_n_tr_32171->_p_w)-2.0));return d::maximum({_n_argument_32379,_n_argument_32380});})();
for(;d::truth((_n_x_32178<([&](){auto _n_argument_32381=_n_W_31881;auto _n_argument_32382=std::ceil(((_n_tr_32171->_p_x+_n_tr_32171->_p_w)+2.0));return d::minimum({_n_argument_32381,_n_argument_32382});})()));(void)((_n_x_32178++))){d::check_cancel();double _n_xc_32179=(_n_x_32178+0.5);
double _n_n_32180=_n_noise_31903((_n_xc_32179*0.9),((_n_y_32175*0.55)+_n_tr_32171->_p_s),0.0);
double _n_hw_32181=(((_n_tr_32171->_p_w*_n_p_32177)*(0.88+(0.26*_n_n_32180)))+0.35);
double _n_dx_32182=((_n_xc_32179-_n_tr_32171->_p_x)/_n_hw_32181);
if(d::truth((std::fabs(_n_dx_32182)>1.0))){d::check_cancel();continue;
}
double _n_k_32183=((_n_r_32174*_n_W_31881)+_n_x_32178);
double _n_leaf_32184=_n_fbm_31904((_n_xc_32179*0.6),((_n_y_32175*0.35)+(_n_tr_32171->_p_s*3.0)),2.0,0.0);
double _n_rim_32185=([&](){auto _n_left_32383=(_n_smooth_31906((-d::number(0.2)),(-d::number(0.9)),_n_dx_32182)*(0.4+(0.6*_n_leaf_32184)));auto _n_right_32384=(0.5+(0.5*std::exp(((-d::number(std::fabs((_n_tr_32171->_p_x-d::at(_n_SUN_31887,0.0)))))/80.0))));return (_n_left_32383*_n_right_32384);})();
double _n_clump_32186=([&](){auto _n_argument_32385=0.45;auto _n_argument_32386=0.7;auto _n_argument_32387=_n_fbm_31904((_n_xc_32179*0.45),((_n_y_32175*0.3)+(_n_tr_32171->_p_s*3.0)),3.0,0.0);return _n_smooth_31906(_n_argument_32385,_n_argument_32386,_n_argument_32387);})();
double _n_base_32187=((0.5+(0.5*_n_leaf_32184))+(0.5*_n_clump_32186));
double _n_dist_32188=_n_smooth_31906(30.0,8.0,_n_tr_32171->_p_s);
double _n_cr_32189=((0.045*_n_base_32187)+(_n_sunSide_32173*_n_rim_32185));
double _n_cg_32190=((0.1*_n_base_32187)+((_n_sunSide_32173*0.63)*_n_rim_32185));
double _n_cb_32191=((0.08*_n_base_32187)+((_n_sunSide_32173*0.27)*_n_rim_32185));
d::Array<double,false> _n_sky_32192=d::Array<double,false>{0.7,0.5,0.56};
(void)((((_n_cr_32189=_n_mix_31907(_n_cr_32189,d::at(_n_sky_32192,0.0),(_n_dist_32188*0.45))),(_n_cg_32190=_n_mix_31907(_n_cg_32190,d::at(_n_sky_32192,1.0),(_n_dist_32188*0.45)))),(_n_cb_32191=_n_mix_31907(_n_cb_32191,d::at(_n_sky_32192,2.0),(_n_dist_32188*0.45)))));
(void)(([&](){auto&& _n_array_32388=this->_n_mat_31918;auto _n_index_32389=_n_k_32183;auto _n_value_32390=_n_CYPRESS_31900;d::put(_n_array_32388,_n_index_32389,_n_value_32390);return _n_value_32390;})());
(void)(((([&](){auto&& _n_array_32391=this->_n_R_31919;auto _n_index_32392=_n_k_32183;auto _n_value_32393=_n_cr_32189;d::put(_n_array_32391,_n_index_32392,_n_value_32393);return _n_value_32393;})(),([&](){auto&& _n_array_32394=this->_n_G_31920;auto _n_index_32395=_n_k_32183;auto _n_value_32396=_n_cg_32190;d::put(_n_array_32394,_n_index_32395,_n_value_32396);return _n_value_32396;})()),([&](){auto&& _n_array_32397=this->_n_B_31921;auto _n_index_32398=_n_k_32183;auto _n_value_32399=_n_cb_32191;d::put(_n_array_32397,_n_index_32398,_n_value_32399);return _n_value_32399;})()));
(void)(([&](){auto&& _n_array_32400=this->_n_floorA_31922;auto _n_index_32401=_n_k_32183;auto _n_value_32402=0.05;d::put(_n_array_32400,_n_index_32401,_n_value_32402);return _n_value_32402;})());
(void)(([&](){auto&& _n_array_32403=this->_n_hazeW_31923;auto _n_index_32404=_n_k_32183;auto _n_value_32405=((0.3+(0.4*_n_dist_32188))*_n_smooth_31906((_n_tr_32171->_p_base-(_n_tr_32171->_p_h*0.7)),_n_tr_32171->_p_base,_n_y_32175));d::put(_n_array_32403,_n_index_32404,_n_value_32405);return _n_value_32405;})());
}}
}}

}
}
this->_n_RR_31942=this->_n_R_31919.slice();
this->_n_RG_31943=this->_n_G_31920.slice();
this->_n_RB_31944=this->_n_B_31921.slice();
this->_n_HWd_31945=400.0;
this->_n_haze1_31946=d::Array<float,true>(size_t((this->_n_HWd_31945*_n_H_31882)));
this->_n_haze2_31947=d::Array<float,true>(size_t((this->_n_HWd_31945*_n_H_31882)));
{double _n_r_32193=0.0;
for(;d::truth((_n_r_32193<_n_H_31882));(void)((_n_r_32193++))){d::check_cancel();{double _n_x_32194=0.0;
for(;d::truth((_n_x_32194<this->_n_HWd_31945));(void)((_n_x_32194++))){d::check_cancel();(void)(([&](){auto&& _n_array_32406=this->_n_haze1_31946;auto _n_index_32407=((_n_r_32193*this->_n_HWd_31945)+_n_x_32194);auto _n_value_32408=([&](){auto _n_argument_32409=0.4;auto _n_argument_32410=0.75;auto _n_argument_32411=_n_fbm_31904((_n_x_32194*0.018),(_n_r_32193*0.09),4.0,(this->_n_HWd_31945*0.018));return _n_smooth_31906(_n_argument_32409,_n_argument_32410,_n_argument_32411);})();d::put(_n_array_32406,_n_index_32407,_n_value_32408);return _n_value_32408;})());
(void)(([&](){auto&& _n_array_32412=this->_n_haze2_31947;auto _n_index_32413=((_n_r_32193*this->_n_HWd_31945)+_n_x_32194);auto _n_value_32414=([&](){auto _n_argument_32415=0.42;auto _n_argument_32416=0.8;auto _n_argument_32417=_n_fbm_31904(((_n_x_32194*0.04)+7.0),((_n_r_32193*0.16)+3.0),3.0,(this->_n_HWd_31945*0.04));return _n_smooth_31906(_n_argument_32415,_n_argument_32416,_n_argument_32417);})();d::put(_n_array_32412,_n_index_32413,_n_value_32414);return _n_value_32414;})());
}}
}}
this->_n_hazeRow_31948=d::Array<float,true>(size_t(_n_H_31882));
{double _n_r_32195=0.0;
for(;d::truth((_n_r_32195<_n_H_31882));(void)((_n_r_32195++))){d::check_cancel();(void)(([&](){auto&& _n_array_32418=this->_n_hazeRow_31948;auto _n_index_32419=_n_r_32195;auto _n_value_32420=(0.03+(0.42*std::exp(((-d::number(std::fabs(((_n_r_32195+0.5)-63.0))))/6.0))));d::put(_n_array_32418,_n_index_32419,_n_value_32420);return _n_value_32420;})());
}}
this->_n_birds_31949=d::Array<d::Array<double,false>,false>{};
{double _n_i_32196=0.0;
for(;d::truth((_n_i_32196<3.0));(void)((_n_i_32196++))){d::check_cancel();(void)(this->_n_birds_31949.push(d::Array<double,false>{((58.0+(_n_i_32196*8.0))+(_n_hash_31902(_n_i_32196,40.0)*4.0)),((30.0-(_n_i_32196*2.5))+(_n_hash_31902(_n_i_32196,41.0)*2.0)),(_n_hash_31902(_n_i_32196,42.0)*6.28)}));
}}
this->_n_dith_31950=d::Array<float,true>(size_t(this->_n_N_31914));
this->_n_jit_31951=d::Array<float,true>(size_t(this->_n_N_31914));
{double _n_k_32197=0.0;
for(;d::truth((_n_k_32197<this->_n_N_31914));(void)((_n_k_32197++))){d::check_cancel();(void)(([&](){auto&& _n_array_32421=this->_n_dith_31950;auto _n_index_32422=_n_k_32197;auto _n_value_32423=(d::at(_n_BAYER_31893,((double(d::i32(std::floor((_n_k_32197/_n_W_31881)))&d::i32(3.0))*4.0)+double(d::i32(d::mod(_n_k_32197,_n_W_31881))&d::i32(3.0))))*0.85);d::put(_n_array_32421,_n_index_32422,_n_value_32423);return _n_value_32423;})());
(void)(([&](){auto&& _n_array_32424=this->_n_jit_31951;auto _n_index_32425=_n_k_32197;auto _n_value_32426=(_n_hash_31902(_n_k_32197,77.0)-0.5);d::put(_n_array_32424,_n_index_32425,_n_value_32426);return _n_value_32426;})());
}}
this->_n_tone_31952=d::Array<float,true>(size_t(1025.0));
{double _n_i_32198=0.0;
for(;d::truth((_n_i_32198<=1024.0));(void)((_n_i_32198++))){d::check_cancel();double _n_v_32199=(_n_i_32198/256.0);
(void)(([&](){auto&& _n_array_32427=this->_n_tone_31952;auto _n_index_32428=_n_i_32198;auto _n_value_32429=(d::truth((_n_v_32199<0.75))?_n_v_32199:(0.75+(0.25*(1.0-std::exp(((-d::number((_n_v_32199-0.75)))*4.0))))));d::put(_n_array_32427,_n_index_32428,_n_value_32429);return _n_value_32429;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_32274> _a1) mutable ->d::String{double _n_t_32200=_a0;
auto _n_binding_32432=(d::present(_a1)?_a1:([&](){auto _n_object_32431=std::make_shared<_n_Record_32274>();return _n_object_32431;})());
std::optional<d::Array<uint8_t,true>> _n_color_32201=_n_binding_32432->_p_color;
{
double _n_d1_32202=(_n_t_32200*1.1);
double _n_d2_32203=(_n_t_32200*2.3);
double _n_cd_32204=(_n_t_32200*0.5);
double _n_breathe_32205=(0.035*std::sin((((_n_t_32200/6.0)*ascii::PI)*2.0)));
d::Array<double,false> _n_bx_32206=d::Array<double,false>{};
d::Array<double,false> _n_by_32207=d::Array<double,false>{};
d::Array<bool,false> _n_bu_32208=d::Array<bool,false>{};
for(auto &&_n_item_32433:this->_n_birds_31949){d::check_cancel();auto _n_binding_32434=_n_item_32433;
double _n_x0_32209=d::at(_n_binding_32434,0.0);
double _n_y0_32210=d::at(_n_binding_32434,1.0);
double _n_ph_32211=d::at(_n_binding_32434,2.0);
{
(void)(_n_bx_32206.push((d::mod((d::mod((_n_x0_32209+(_n_t_32200*3.2)),260.0)+260.0),260.0)-30.0)));
(void)(_n_by_32207.push((_n_y0_32210+(std::sin(((_n_t_32200*0.4)+_n_ph_32211))*1.3))));
(void)(_n_bu_32208.push((std::sin(((_n_t_32200*7.0)+_n_ph_32211))>0.0)));

}
}
{double _n_r_32212=0.0;
for(;d::truth((_n_r_32212<_n_H_31882));(void)((_n_r_32212++))){d::check_cancel();double _n_y_32213=(_n_r_32212+0.5);
double _n_hr_32214=d::at(this->_n_hazeRow_31948,_n_r_32212);
{double _n_x_32215=0.0;
for(;d::truth((_n_x_32215<_n_W_31881));(void)((_n_x_32215++))){d::check_cancel();double _n_k_32216=((_n_r_32212*_n_W_31881)+_n_x_32215);
double _n_m_32217=d::at(this->_n_mat_31918,_n_k_32216);
double _n_cr_32218{};
double _n_cg_32219{};
double _n_cb_32220{};
double _n_fl_32221=d::at(this->_n_floorA_31922,_n_k_32216);
double _n_fade_32222=1.0;
if(d::truth((_n_m_32217==_n_POOL_31899))){d::check_cancel();double _n_depth_32223=((_n_y_32213-_n_BASE_31884)/(_n_H_31882-_n_BASE_31884));
double _n_wob_32224=(std::sin((((_n_y_32213*1.9)-(_n_t_32200*2.4))+(std::sin(((_n_x_32215*0.11)+(_n_t_32200*0.7)))*1.5)))*(0.2+(0.7*_n_depth_32223)));
double _n_sx_32225=d::round((_n_x_32215+_n_wob_32224));
(void)((_n_sx_32225=(d::truth((_n_sx_32225<0.0))?0.0:(d::truth((_n_sx_32225>(_n_W_31881-1.0)))?(_n_W_31881-1.0):_n_sx_32225))));
double _n_sr_32226=d::round((((_n_BASE_31884-0.5)-((_n_y_32213-_n_BASE_31884)*_n_KR_31890))-(d::truth((std::sin((((_n_x_32215*0.3)+(_n_t_32200*1.3))+_n_y_32213))>0.6))?1.0:0.0)));
(void)((_n_sr_32226=(d::truth((_n_sr_32226<0.0))?0.0:(d::truth((_n_sr_32226>(_n_BASE_31884-1.0)))?(_n_BASE_31884-1.0):_n_sr_32226))));
double _n_j_32227=((_n_sr_32226*_n_W_31881)+_n_sx_32225);
double _n_src_32228=(d::truth((d::at(this->_n_mat_31918,_n_j_32227)==_n_MARBLE_31896))?1.0:0.85);
double _n_dim_32229=(_n_src_32228-(0.1*_n_depth_32223));
(void)((((_n_cr_32218=((d::at(this->_n_RR_31942,_n_j_32227)*_n_dim_32229)*0.9)),(_n_cg_32219=((d::at(this->_n_RG_31943,_n_j_32227)*_n_dim_32229)*0.94))),(_n_cb_32220=((d::at(this->_n_RB_31944,_n_j_32227)*_n_dim_32229)+0.05))));
double _n_w_32230=_n_noise_31903(((_n_x_32215*0.12)+(_n_t_32200*0.15)),((_n_y_32213*0.9)-(_n_t_32200*0.9)),0.0);
double _n_glint_32231=(_n_smooth_31906(0.75,0.95,_n_w_32230)*0.14);
(void)((((_n_cr_32218=(_n_cr_32218+_n_glint_32231)),(_n_cg_32219=(_n_cg_32219+(_n_glint_32231*0.85)))),(_n_cb_32220=(_n_cb_32220+(_n_glint_32231*0.75)))));
if((d::truth((_n_r_32212>_n_BASE_31884))&&d::truth((_n_r_32212<=(_n_BASE_31884+4.0))))){d::check_cancel();double _n_gl_32232=(([&](){auto _n_argument_32435=0.62;auto _n_argument_32436=0.85;auto _n_argument_32437=_n_noise_31903(((_n_x_32215*0.55)-(_n_t_32200*0.9)),((_n_r_32212*2.7)+(_n_t_32200*0.2)),0.0);return _n_smooth_31906(_n_argument_32435,_n_argument_32436,_n_argument_32437);})()*(0.5-(0.08*(_n_r_32212-_n_BASE_31884))));
(void)((((_n_cr_32218=(_n_cr_32218+_n_gl_32232)),(_n_cg_32219=(_n_cg_32219+(_n_gl_32232*0.85)))),(_n_cb_32220=(_n_cb_32220+(_n_gl_32232*0.6)))));
}
if(d::truth((_n_r_32212==_n_BASE_31884))){d::check_cancel();(void)((((_n_cr_32218=(_n_cr_32218+0.2)),(_n_cg_32219=(_n_cg_32219+0.16))),(_n_cb_32220=(_n_cb_32220+0.12))));
}
(void)((_n_fade_32222=(0.8+(0.2*_n_smooth_31906((_n_H_31882+2.0),(_n_H_31882-6.0),_n_y_32213)))));
}else {d::check_cancel();(void)((((_n_cr_32218=d::at(this->_n_R_31919,_n_k_32216)),(_n_cg_32219=d::at(this->_n_G_31920,_n_k_32216))),(_n_cb_32220=d::at(this->_n_B_31921,_n_k_32216))));
if(d::truth((_n_m_32217==_n_SKY_31894))){d::check_cancel();double _n_ga_32233=(d::at(this->_n_glowA_31924,_n_k_32216)*_n_breathe_32205);
(void)((((_n_cr_32218=(_n_cr_32218+_n_ga_32233)),(_n_cg_32219=(_n_cg_32219+(_n_ga_32233*0.78)))),(_n_cb_32220=(_n_cb_32220+(_n_ga_32233*0.48)))));
}
if((d::truth((_n_m_32217==_n_SKY_31894))&&d::truth((_n_y_32213<this->_n_CH_31928)))){d::check_cancel();double _n_sx_32234=(_n_x_32215+_n_cd_32204);
double _n_ix_32235=std::floor(_n_sx_32234);
double _n_fx_32236=(_n_sx_32234-_n_ix_32235);
double _n_i0_32237=((_n_r_32212*this->_n_CW_31927)+d::mod(_n_ix_32235,this->_n_CW_31927));
double _n_i1_32238=((_n_r_32212*this->_n_CW_31927)+d::mod((_n_ix_32235+1.0),this->_n_CW_31927));
double _n_c_32239=(d::at(this->_n_cloud_31931,_n_i0_32237)+((d::at(this->_n_cloud_31931,_n_i1_32238)-d::at(this->_n_cloud_31931,_n_i0_32237))*_n_fx_32236));
if(d::truth((_n_c_32239>0.01))){d::check_cancel();double _n_l_32240=(d::at(this->_n_cloudLit_31932,_n_i0_32237)+((d::at(this->_n_cloudLit_31932,_n_i1_32238)-d::at(this->_n_cloudLit_31932,_n_i0_32237))*_n_fx_32236));
double _n_near_32241=d::minimum({1.0,(d::at(this->_n_glowA_31924,_n_k_32216)*1.7)});
double _n_b2_32242=_n_clamp_31905(((0.2+(0.6*_n_l_32240))+((_n_near_32241*0.55)*_n_l_32240)));
double _n_kr_32243{};
double _n_kg_32244{};
double _n_kb_32245{};
if(d::truth((_n_b2_32242<0.5))){d::check_cancel();double _n_q_32246=(_n_b2_32242*2.0);
(void)((((_n_kr_32243=_n_mix_31907(0.16,0.6,_n_q_32246)),(_n_kg_32244=_n_mix_31907(0.12,0.34,_n_q_32246))),(_n_kb_32245=_n_mix_31907(0.3,0.5,_n_q_32246))));
}else {d::check_cancel();double _n_q_32247=((_n_b2_32242-0.5)*2.0);
(void)((((_n_kr_32243=_n_mix_31907(0.6,1.05,_n_q_32247)),(_n_kg_32244=_n_mix_31907(0.34,0.8,_n_q_32247))),(_n_kb_32245=_n_mix_31907(0.5,0.55,_n_q_32247))));
}
double _n_a_32248=(d::minimum({1.0,_n_c_32239})*0.9);
(void)((((_n_cr_32218=_n_mix_31907(_n_cr_32218,_n_kr_32243,_n_a_32248)),(_n_cg_32219=_n_mix_31907(_n_cg_32219,_n_kg_32244,_n_a_32248))),(_n_cb_32220=_n_mix_31907(_n_cb_32220,_n_kb_32245,_n_a_32248))));
}
}
if((((d::truth((_n_m_32217==_n_SKY_31894))&&d::truth((_n_r_32212<24.0)))&&d::truth((_n_x_32215>96.0)))&&d::truth((_n_hash_31902(_n_x_32215,((_n_r_32212*3.0)+11.0))>0.988)))){d::check_cancel();double _n_tw_32249=(0.7+(0.3*std::sin(([&](){auto _n_left_32438=(_n_t_32200*(1.2+(_n_hash_31902(_n_x_32215,_n_r_32212)*2.0)));auto _n_right_32439=(_n_hash_31902(_n_r_32212,_n_x_32215)*6.28);return (_n_left_32438+_n_right_32439);})())));
double _n_s_32250=([&](){auto _n_left_32440=((_n_tw_32249*0.62)*_n_smooth_31906(24.0,8.0,_n_r_32212));auto _n_right_32441=_n_smooth_31906(96.0,140.0,_n_x_32215);return (_n_left_32440*_n_right_32441);})();
(void)((((_n_cr_32218=d::maximum({_n_cr_32218,(_n_s_32250*0.85)})),(_n_cg_32219=d::maximum({_n_cg_32219,(_n_s_32250*0.85)}))),(_n_cb_32220=d::maximum({_n_cb_32220,_n_s_32250}))));
}
if(d::truth((_n_m_32217==_n_SKY_31894))){d::check_cancel();double _n_dx_32251=((_n_x_32215+0.5)-d::at(_n_SUN_31887,0.0));
double _n_dy_32252=(_n_y_32213-d::at(_n_SUN_31887,1.0));
double _n_dd_32253=((_n_dx_32251*_n_dx_32251)+(_n_dy_32252*_n_dy_32252));
if(d::truth((_n_dd_32253<22.0))){d::check_cancel();double _n_a_32254=_n_smooth_31906(22.0,9.0,_n_dd_32253);
(void)((((_n_cr_32218=_n_mix_31907(_n_cr_32218,1.05,_n_a_32254)),(_n_cg_32219=_n_mix_31907(_n_cg_32219,0.98,_n_a_32254))),(_n_cb_32220=_n_mix_31907(_n_cb_32220,0.86,_n_a_32254))));
}
{double _n_i_32255=0.0;
for(;d::truth((_n_i_32255<double(_n_bx_32206.size())));(void)((_n_i_32255++))){d::check_cancel();double _n_ox_32256=(d::round(d::at(_n_bx_32206,_n_i_32255))-_n_x_32215);
double _n_oy_32257=(d::round(d::at(_n_by_32207,_n_i_32255))-_n_r_32212);
if((d::truth((_n_ox_32256<(-d::number(2.0))))||d::truth((_n_ox_32256>2.0)))){d::check_cancel();continue;
}
double _n_ax_32258=(d::truth((_n_ox_32256<0.0))?(-d::number(_n_ox_32256)):_n_ox_32256);
bool _n_hit_32259=(d::truth(d::at(_n_bu_32208,_n_i_32255))?([&]()->bool{auto _n_logical_32442=([&]()->bool{auto _n_logical_32444=([&]()->bool{auto _n_logical_32446=(_n_ax_32258==0.0);return d::truth(_n_logical_32446)?(_n_oy_32257==0.0):_n_logical_32446;})();return d::truth(_n_logical_32444)?_n_logical_32444:([&]()->bool{auto _n_logical_32445=(_n_ax_32258==1.0);return d::truth(_n_logical_32445)?(_n_oy_32257==1.0):_n_logical_32445;})();})();return d::truth(_n_logical_32442)?_n_logical_32442:([&]()->bool{auto _n_logical_32443=(_n_ax_32258==2.0);return d::truth(_n_logical_32443)?(_n_oy_32257==1.0):_n_logical_32443;})();})():([&]()->bool{auto _n_logical_32447=([&]()->bool{auto _n_logical_32449=([&]()->bool{auto _n_logical_32451=(_n_ax_32258==0.0);return d::truth(_n_logical_32451)?(_n_oy_32257==0.0):_n_logical_32451;})();return d::truth(_n_logical_32449)?_n_logical_32449:([&]()->bool{auto _n_logical_32450=(_n_ax_32258==1.0);return d::truth(_n_logical_32450)?(_n_oy_32257==0.0):_n_logical_32450;})();})();return d::truth(_n_logical_32447)?_n_logical_32447:([&]()->bool{auto _n_logical_32448=(_n_ax_32258==2.0);return d::truth(_n_logical_32448)?(_n_oy_32257==(-d::number(1.0))):_n_logical_32448;})();})());
if(d::truth(_n_hit_32259)){d::check_cancel();(void)(((((_n_cr_32218=0.16),(_n_cg_32219=0.1)),(_n_cb_32220=0.17)),(_n_fl_32221=0.0)));
}
}}
}
}
double _n_hw_32260=d::at(this->_n_hazeW_31923,_n_k_32216);
if((d::truth((_n_hw_32260>0.0))||d::truth((_n_m_32217==_n_POOL_31899)))){d::check_cancel();double _n_a_32261=((d::truth((_n_m_32217==_n_POOL_31899))?0.12:_n_hw_32260)*_n_hr_32214);
double _n_sx1_32262=d::mod((_n_x_32215+_n_d1_32202),this->_n_HWd_31945);
double _n_sx2_32263=d::mod((_n_x_32215+_n_d2_32203),this->_n_HWd_31945);
double _n_i1_32264=((_n_r_32212*this->_n_HWd_31945)+double(d::i32(_n_sx1_32262)|d::i32(0.0)));
double _n_i2_32265=((_n_r_32212*this->_n_HWd_31945)+double(d::i32(_n_sx2_32263)|d::i32(0.0)));
double _n_hz_32266=(_n_a_32261*((0.35+(0.75*d::at(this->_n_haze1_31946,_n_i1_32264)))+(0.45*d::at(this->_n_haze2_31947,_n_i2_32265))));
(void)((((_n_cr_32218=_n_mix_31907(_n_cr_32218,0.9,_n_hz_32266)),(_n_cg_32219=_n_mix_31907(_n_cg_32219,0.64,_n_hz_32266))),(_n_cb_32220=_n_mix_31907(_n_cb_32220,0.62,_n_hz_32266))));
}
(void)((((_n_cr_32218=d::at(this->_n_tone_31952,d::minimum({1024.0,double(d::i32((_n_cr_32218*256.0))|d::i32(0.0))}))),(_n_cg_32219=d::at(this->_n_tone_31952,d::minimum({1024.0,double(d::i32((_n_cg_32219*256.0))|d::i32(0.0))})))),(_n_cb_32220=d::at(this->_n_tone_31952,d::minimum({1024.0,double(d::i32((_n_cb_32220*256.0))|d::i32(0.0))})))));
double _n_peak_32267=d::maximum({_n_cr_32218,_n_cg_32219,_n_cb_32220,0.0001});
double _n_level_32268=(_n_clamp_31905((_n_fl_32221+(((1.0-_n_fl_32221)*std::pow(_n_peak_32267,1.1))*1.02)))*_n_fade_32222);
double _n_step_32269=([&](){auto _n_argument_32452=0.0;auto _n_argument_32453=([&](){auto _n_argument_32454=3.0;auto _n_argument_32455=d::round((((_n_level_32268*3.0)+d::at(this->_n_dith_31950,_n_k_32216))+(d::at(this->_n_jit_31951,_n_k_32216)*(d::truth((_n_level_32268<0.3))?0.12:0.3))));return d::minimum({_n_argument_32454,_n_argument_32455});})();return d::maximum({_n_argument_32452,_n_argument_32453});})();
(void)(([&](){auto&& _n_array_32456=this->_n_out_31915;auto _n_index_32457=_n_k_32216;auto _n_value_32458=d::at(_n_DOTS_31891,_n_step_32269);d::put(_n_array_32456,_n_index_32457,_n_value_32458);return _n_value_32458;})());
if(d::truth(_n_color_32201)){d::check_cancel();double _n_want_32270=(d::truth(_n_step_32269)?d::minimum({1.0,((_n_level_32268+0.06)/d::at(_n_COVER_31892,_n_step_32269))}):0.0);
double _n_s_32271=((0.3+(0.7*_n_want_32270))/_n_peak_32267);
if((d::truth((_n_m_32217==_n_SKY_31894))&&d::truth((_n_s_32271>1.6)))){d::check_cancel();(void)((_n_s_32271=1.6));
}
(void)(([&](){auto&& _n_array_32459=d::read(_n_color_32201);auto _n_index_32460=_n_k_32216;auto _n_value_32461=([&](){auto _n_argument_32462=_n_clamp_31905((_n_cr_32218*_n_s_32271));auto _n_argument_32463=_n_clamp_31905((_n_cg_32219*_n_s_32271));auto _n_argument_32464=_n_clamp_31905((_n_cb_32220*_n_s_32271));return this->_n_nearest_31917(_n_argument_32462,_n_argument_32463,_n_argument_32464);})();d::put(_n_array_32459,_n_index_32460,_n_value_32461);return _n_value_32461;})());
}
}}
}}
d::Array<d::String,false> _n_lines_32272=d::Array<d::String,false>{};
{double _n_r_32273=0.0;
for(;d::truth((_n_r_32273<_n_H_31882));(void)((_n_r_32273++))){d::check_cancel();(void)(_n_lines_32272.push(d::join(this->_n_out_31915.slice((_n_r_32273*_n_W_31881),((_n_r_32273+1.0)*_n_W_31881)),d::String(u""))));
}}
return d::join(_n_lines_32272,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("taj-dawn").cols)*ascii::catalog_meta("taj-dawn").rows);auto _env=std::make_shared<_n_Record_32274>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &taj_dawn_meta(){return catalog_meta("taj-dawn");}
std::unique_ptr<Piece> make_taj_dawn(const AsciiPieceOptions &o){return std::make_unique<Native_taj_dawn>(o);}
}
