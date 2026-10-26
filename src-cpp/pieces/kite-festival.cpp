// Direct, statically typed C++ from src/pieces/kite-festival.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_15582;
struct _n_Record_15598;
struct _n_Record_15628;
struct _n_Record_15633;
struct _n_Record_15639;
struct _n_Record_16009;
struct _n_Record_16187;
struct _n_Record_15582{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_15582> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15582>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_15598{
double _p_base{};
double _p_hmin{};
double _p_hmax{};
double _p_wmin{};
double _p_wmax{};
double _p_haze{};
double _p_d{};
double _p_chh{};
double _p_fig{};
double _p_size{};
static std::shared_ptr<_n_Record_15598> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15598>();out->_p_base=d::decode<double>(j["base"]);out->_p_hmin=d::decode<double>(j["hmin"]);out->_p_hmax=d::decode<double>(j["hmax"]);out->_p_wmin=d::decode<double>(j["wmin"]);out->_p_wmax=d::decode<double>(j["wmax"]);out->_p_haze=d::decode<double>(j["haze"]);out->_p_d=d::decode<double>(j["d"]);out->_p_chh=d::decode<double>(j["chh"]);out->_p_fig=d::decode<double>(j["fig"]);out->_p_size=d::decode<double>(j["size"]);return out;}
};
struct _n_Record_15628{
double _p_x{};
double _p_y{};
double _p_d{};
static std::shared_ptr<_n_Record_15628> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15628>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_d=d::decode<double>(j["d"]);return out;}
};
struct _n_Record_15633{
double _p_x{};
double _p_y{};
double _p_z{};
double _p_h{};
double _p_w{};
std::array<double,3> _p_A{};
std::array<double,3> _p_B{};
double _p_design{};
double _p_tilt{};
double _p_amp{};
double _p_w1{};
double _p_w2{};
double _p_p1{};
double _p_p2{};
double _p_dive{};
double _p_cut{};
double _p_period{};
double _p_drop{};
std::optional<d::Array<double,false>> _p_hand{};
double _p_tail{};
static std::shared_ptr<_n_Record_15633> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15633>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_z=d::decode<double>(j["z"]);out->_p_h=d::decode<double>(j["h"]);out->_p_w=d::decode<double>(j["w"]);out->_p_A=d::decode<std::array<double,3>>(j["A"]);out->_p_B=d::decode<std::array<double,3>>(j["B"]);out->_p_design=d::decode<double>(j["design"]);out->_p_tilt=d::decode<double>(j["tilt"]);out->_p_amp=d::decode<double>(j["amp"]);out->_p_w1=d::decode<double>(j["w1"]);out->_p_w2=d::decode<double>(j["w2"]);out->_p_p1=d::decode<double>(j["p1"]);out->_p_p2=d::decode<double>(j["p2"]);out->_p_dive=d::decode<double>(j["dive"]);out->_p_cut=d::decode<double>(j["cut"]);out->_p_period=d::decode<double>(j["period"]);out->_p_drop=d::decode<double>(j["drop"]);out->_p_hand=d::decode<std::optional<d::Array<double,false>>>(j["hand"]);out->_p_tail=d::decode<double>(j["tail"]);return out;}
};
struct _n_Record_15639{
double _p_x{};
double _p_y{};
double _p_p{};
bool _p_circle{};
double _p_r{};
static std::shared_ptr<_n_Record_15639> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15639>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_p=d::decode<double>(j["p"]);out->_p_circle=d::decode<bool>(j["circle"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_16009{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_16009> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16009>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_16187{
double _p_x{};
double _p_y{};
double _p_z{};
double _p_h{};
double _p_w{};
std::array<double,3> _p_A{};
std::array<double,3> _p_B{};
double _p_design{};
double _p_tilt{};
double _p_amp{};
double _p_w1{};
double _p_w2{};
double _p_p1{};
double _p_p2{};
double _p_dive{};
double _p_cut{};
double _p_period{};
double _p_drop{};
d::Nil _p_hand{};
double _p_tail{};
static std::shared_ptr<_n_Record_16187> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16187>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_z=d::decode<double>(j["z"]);out->_p_h=d::decode<double>(j["h"]);out->_p_w=d::decode<double>(j["w"]);out->_p_A=d::decode<std::array<double,3>>(j["A"]);out->_p_B=d::decode<std::array<double,3>>(j["B"]);out->_p_design=d::decode<double>(j["design"]);out->_p_tilt=d::decode<double>(j["tilt"]);out->_p_amp=d::decode<double>(j["amp"]);out->_p_w1=d::decode<double>(j["w1"]);out->_p_w2=d::decode<double>(j["w2"]);out->_p_p1=d::decode<double>(j["p1"]);out->_p_p2=d::decode<double>(j["p2"]);out->_p_dive=d::decode<double>(j["dive"]);out->_p_cut=d::decode<double>(j["cut"]);out->_p_period=d::decode<double>(j["period"]);out->_p_drop=d::decode<double>(j["drop"]);out->_p_hand=d::decode<d::Nil>(j["hand"]);out->_p_tail=d::decode<double>(j["tail"]);return out;}
};
double _n_hash_15599(double _a0,double _a1);
double _n_noise_15600(double _a0,double _a1,double _a2);
double _n_fbm_15601(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_15602(double _a0);
double _n_smooth_15603(double _a0,double _a1,double _a2);
double _n_mix_15604(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_15605(d::String _a0);
std::array<double,3> _n_skyAt_15607(double _a0,double _a1);
std::array<double,3> _n_hazeAt_15608(double _a0);
std::shared_ptr<_n_Record_15582> _n_meta_15581=[](){return ([&](){auto _n_object_16012=std::make_shared<_n_Record_15582>();_n_object_16012->_p_name=d::String(u"kite festival");_n_object_16012->_p_category=d::String(u"scenes");_n_object_16012->_p_note=d::String(u"sankranti kites crowding a golden sky over the pink roofs of jaipur");_n_object_16012->_p_cols=200.0;_n_object_16012->_p_rows=100.0;_n_object_16012->_p_cell=1.0;_n_object_16012->_p_fps=15.0;_n_object_16012->_p_ground=d::String(u"#1a0f17");_n_object_16012->_p_palette=d::Array<d::String,false>{d::String(u"#6a5af0"),d::String(u"#8a78d0"),d::String(u"#c08cc8"),d::String(u"#f0a0c0"),d::String(u"#ffab7a"),d::String(u"#ffc25e"),d::String(u"#ffdc8c"),d::String(u"#fff6dc"),d::String(u"#9c7ae0"),d::String(u"#7a62c4"),d::String(u"#b89ae8"),d::String(u"#ff5f58"),d::String(u"#ff8478"),d::String(u"#ffaa9c"),d::String(u"#ffd6c4"),d::String(u"#ff2f7d"),d::String(u"#ff8fc4"),d::String(u"#ffd400"),d::String(u"#22c55e"),d::String(u"#a3e635"),d::String(u"#e8102a"),d::String(u"#1f6fff"),d::String(u"#5ec8ff"),d::String(u"#8b3dff"),d::String(u"#ffffff"),d::String(u"#ff7a00")};return _n_object_16012;})();}();
const double _n_W_15583=[](){return 200.0;}();
const double _n_H_15584=[](){return 100.0;}();
const double _n_HZ_15585=[](){return 62.0;}();
d::Array<double,false> _n_SUN_15586=[](){return d::Array<double,false>{56.0,50.0};}();
const double _n_SUN_R_15587=[](){return 6.5;}();
const d::String _n_DOTS_15588=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_15589=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_15590=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_15647=_a0;
return ((_n_v_15647/16.0)-0.47);});}();
const double _n_SKY_15591=[](){return (-d::number(1.0));}();
const double _n_BACK_15592=[](){return (-d::number(0.6));}();
const double _n_HILL_15593=[](){return (-d::number(0.3));}();
d::Array<std::array<double,3>,false> _n_PAPER_15594=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{1.0,0.17,0.5},std::array<double,3>{1.0,0.55,0.78},std::array<double,3>{1.0,0.84,0.02},std::array<double,3>{0.12,0.78,0.38},std::array<double,3>{0.62,0.9,0.2},std::array<double,3>{0.92,0.06,0.16},std::array<double,3>{0.12,0.43,1.0},std::array<double,3>{0.36,0.78,1.0},std::array<double,3>{0.56,0.25,1.0},std::array<double,3>{1.0,1.0,1.0},std::array<double,3>{1.0,0.5,0.02}};}();
d::Array<std::array<double,3>,false> _n_CLOTH_15595=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{1.0,1.0,0.95},std::array<double,3>{1.0,0.82,0.1},std::array<double,3>{0.95,0.12,0.2},std::array<double,3>{1.0,0.3,0.6},std::array<double,3>{0.2,0.5,1.0},std::array<double,3>{1.0,0.55,0.1},std::array<double,3>{0.2,0.75,0.4}};}();
d::Array<std::array<double,3>,false> _n_PLASTER_15596=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{0.96,0.57,0.49},std::array<double,3>{0.87,0.45,0.37},std::array<double,3>{0.95,0.66,0.43},std::array<double,3>{0.97,0.85,0.75}};}();
d::Array<std::shared_ptr<_n_Record_15598>,false> _n_LAYERS_15597=[](){return d::Array<std::shared_ptr<_n_Record_15598>,false>{([&](){auto _n_object_16015=std::make_shared<_n_Record_15598>();_n_object_16015->_p_base=66.0;_n_object_16015->_p_hmin=1.0;_n_object_16015->_p_hmax=4.0;_n_object_16015->_p_wmin=3.0;_n_object_16015->_p_wmax=7.0;_n_object_16015->_p_haze=0.58;_n_object_16015->_p_d=0.1;_n_object_16015->_p_chh=0.14;_n_object_16015->_p_fig=0.0;_n_object_16015->_p_size=0.0;return _n_object_16015;})(),([&](){auto _n_object_16017=std::make_shared<_n_Record_15598>();_n_object_16017->_p_base=72.0;_n_object_16017->_p_hmin=2.0;_n_object_16017->_p_hmax=6.0;_n_object_16017->_p_wmin=5.0;_n_object_16017->_p_wmax=10.0;_n_object_16017->_p_haze=0.42;_n_object_16017->_p_d=0.3;_n_object_16017->_p_chh=0.25;_n_object_16017->_p_fig=0.0;_n_object_16017->_p_size=1.0;return _n_object_16017;})(),([&](){auto _n_object_16019=std::make_shared<_n_Record_15598>();_n_object_16019->_p_base=79.0;_n_object_16019->_p_hmin=2.0;_n_object_16019->_p_hmax=7.0;_n_object_16019->_p_wmin=7.0;_n_object_16019->_p_wmax=14.0;_n_object_16019->_p_haze=0.27;_n_object_16019->_p_d=0.5;_n_object_16019->_p_chh=0.32;_n_object_16019->_p_fig=0.12;_n_object_16019->_p_size=2.0;return _n_object_16019;})(),([&](){auto _n_object_16021=std::make_shared<_n_Record_15598>();_n_object_16021->_p_base=89.0;_n_object_16021->_p_hmin=3.0;_n_object_16021->_p_hmax=10.0;_n_object_16021->_p_wmin=10.0;_n_object_16021->_p_wmax=19.0;_n_object_16021->_p_haze=0.13;_n_object_16021->_p_d=0.7;_n_object_16021->_p_chh=0.35;_n_object_16021->_p_fig=0.22;_n_object_16021->_p_size=3.0;return _n_object_16021;})(),([&](){auto _n_object_16023=std::make_shared<_n_Record_15598>();_n_object_16023->_p_base=101.0;_n_object_16023->_p_hmin=6.0;_n_object_16023->_p_hmax=13.0;_n_object_16023->_p_wmin=16.0;_n_object_16023->_p_wmax=30.0;_n_object_16023->_p_haze=0.04;_n_object_16023->_p_d=0.9;_n_object_16023->_p_chh=0.3;_n_object_16023->_p_fig=0.4;_n_object_16023->_p_size=4.0;return _n_object_16023;})()};}();
d::Array<std::shared_ptr<std::tuple<double,std::array<double,3>>>,false> _n_STOPS_15606=[](){return d::Array<std::shared_ptr<std::tuple<double,std::array<double,3>>>,false>{std::make_shared<std::tuple<double,std::array<double,3>>>(0.0,std::array<double,3>{0.1,0.085,0.25}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.3,std::array<double,3>{0.22,0.18,0.42}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.55,std::array<double,3>{0.6,0.38,0.5}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.75,std::array<double,3>{0.97,0.62,0.4}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.9,std::array<double,3>{1.0,0.76,0.38}),std::make_shared<std::tuple<double,std::array<double,3>>>(1.0,std::array<double,3>{1.0,0.86,0.52})};}();
double _n_hash_15599(double _a0,double _a1){double _n_x_15648=_a0;
double _n_y_15649=_a1;
{
double _n_h_15650=([&](){auto _n_left_16024=d::imul(double(d::i32(_n_x_15648)|d::i32(0.0)),374761393.0);auto _n_right_16025=d::imul(double(d::i32(_n_y_15649)|d::i32(0.0)),668265263.0);return (_n_left_16024+_n_right_16025);})();
(void)((_n_h_15650=d::imul(double(d::i32(_n_h_15650)^d::i32(double(d::u32(_n_h_15650)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_15650)^d::i32(double(d::u32(_n_h_15650)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_15600(double _a0,double _a1,double _a2){double _n_x_15651=_a0;
double _n_y_15652=_a1;
double _n_period_15653=_a2;
{
double _n_xi_15654=std::floor(_n_x_15651);
double _n_yi_15655=std::floor(_n_y_15652);
double _n_fx_15656=(_n_x_15651-_n_xi_15654);
double _n_fy_15657=(_n_y_15652-_n_yi_15655);
double _n_u_15658=((_n_fx_15656*_n_fx_15656)*(3.0-(2.0*_n_fx_15656)));
double _n_v_15659=((_n_fy_15657*_n_fy_15657)*(3.0-(2.0*_n_fy_15657)));
double _n_x0_15660=_n_xi_15654;
double _n_x1_15661=(_n_xi_15654+1.0);
if(d::truth(_n_period_15653)){d::check_cancel();(void)((_n_x0_15660=d::mod((d::mod(_n_xi_15654,_n_period_15653)+_n_period_15653),_n_period_15653)));
(void)((_n_x1_15661=d::mod((_n_x0_15660+1.0),_n_period_15653)));
}
double _n_a_15662=_n_hash_15599(_n_x0_15660,_n_yi_15655);
double _n_b_15663=_n_hash_15599(_n_x1_15661,_n_yi_15655);
double _n_c_15664=_n_hash_15599(_n_x0_15660,(_n_yi_15655+1.0));
double _n_d_15665=_n_hash_15599(_n_x1_15661,(_n_yi_15655+1.0));
return (((_n_a_15662+((_n_b_15663-_n_a_15662)*_n_u_15658))+((_n_c_15664-_n_a_15662)*_n_v_15659))+(((((_n_a_15662-_n_b_15663)-_n_c_15664)+_n_d_15665)*_n_u_15658)*_n_v_15659));

}
}

double _n_fbm_15601(double _a0,double _a1,double _a2,double _a3){double _n_x_15666=_a0;
double _n_y_15667=_a1;
double _n_octaves_15668=_a2;
double _n_period_15669=_a3;
{
double _n_s_15670=0.0;
double _n_n_15671=0.0;
double _n_amp_15672=0.5;
double _n_f_15673=1.0;
{double _n_i_15674=0.0;
for(;d::truth((_n_i_15674<_n_octaves_15668));(void)((_n_i_15674++))){d::check_cancel();(void)((_n_s_15670=(_n_s_15670+(_n_amp_15672*_n_noise_15600((_n_x_15666*_n_f_15673),(_n_y_15667*_n_f_15673),(_n_period_15669*_n_f_15673))))));
(void)((_n_n_15671=(_n_n_15671+_n_amp_15672)));
(void)((_n_amp_15672=(_n_amp_15672*0.5)));
(void)((_n_f_15673=(_n_f_15673*2.0)));
}}
return (_n_s_15670/_n_n_15671);

}
}

double _n_clamp_15602(double _a0){double _n_v_15675=_a0;
return (d::truth((_n_v_15675<0.0))?0.0:(d::truth((_n_v_15675>1.0))?1.0:_n_v_15675));}

double _n_smooth_15603(double _a0,double _a1,double _a2){double _n_a_15676=_a0;
double _n_b_15677=_a1;
double _n_v_15678=_a2;
{
double _n_k_15679=_n_clamp_15602(((_n_v_15678-_n_a_15676)/(_n_b_15677-_n_a_15676)));
return ((_n_k_15679*_n_k_15679)*(3.0-(2.0*_n_k_15679)));

}
}

double _n_mix_15604(double _a0,double _a1,double _a2){double _n_a_15680=_a0;
double _n_b_15681=_a1;
double _n_k_15682=_a2;
return (_n_a_15680+((_n_b_15681-_n_a_15680)*_n_k_15682));}

d::Array<double,false> _n_hex_15605(d::String _a0){d::String _n_s_15683=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_15684=_a0;
return (([&](){auto _n_argument_16026=d::slice(_n_s_15683,_n_i_15684,(_n_i_15684+2.0));auto _n_argument_16027=16.0;return d::parseInt(_n_argument_16026,_n_argument_16027);})()/255.0);});}

std::array<double,3> _n_skyAt_15607(double _a0,double _a1){double _n_x_15685=_a0;
double _n_y_15686=_a1;
{
double _n_v_15687=_n_clamp_15602((_n_y_15686/_n_HZ_15585));
double _n_i_15688=0.0;
while((d::truth((_n_i_15688<(double(_n_STOPS_15606.size())-2.0)))&&d::truth((_n_v_15687>std::get<0>(*d::at(_n_STOPS_15606,(_n_i_15688+1.0))))))){d::check_cancel();(void)((_n_i_15688++));
}
auto _n_binding_16028=d::at(_n_STOPS_15606,_n_i_15688);
double _n_v0_15689=std::get<0>(*_n_binding_16028);
auto&& _n_a_15690=std::get<1>(*_n_binding_16028);
auto _n_binding_16029=d::at(_n_STOPS_15606,(_n_i_15688+1.0));
double _n_v1_15691=std::get<0>(*_n_binding_16029);
auto&& _n_b_15692=std::get<1>(*_n_binding_16029);
double _n_k_15693=((_n_v_15687-_n_v0_15689)/(_n_v1_15691-_n_v0_15689));
double _n_dx_15694=(_n_x_15685-d::at(_n_SUN_15586,0.0));
double _n_dy_15695=(_n_y_15686-d::at(_n_SUN_15586,1.0));
double _n_d_15696=std::sqrt(((_n_dx_15694*_n_dx_15694)+(_n_dy_15695*_n_dy_15695)));
double _n_glow_15697=([&](){auto _n_left_16030=([&](){auto _n_left_16032=(0.3*std::exp(((-d::number(_n_d_15696))/7.0)));auto _n_right_16033=(0.22*std::exp(((-d::number(_n_d_15696))/24.0)));return (_n_left_16032+_n_right_16033);})();auto _n_right_16031=(0.12*std::exp(([&](){auto _n_left_16034=((-d::number(std::fabs(_n_dy_15695)))/7.0);auto _n_right_16035=(std::fabs(_n_dx_15694)/90.0);return (_n_left_16034-_n_right_16035);})()));return (_n_left_16030+_n_right_16031);})();
return std::array<double,3>{(_n_mix_15604(d::at(_n_a_15690,0.0),d::at(_n_b_15692,0.0),_n_k_15693)+_n_glow_15697),(_n_mix_15604(d::at(_n_a_15690,1.0),d::at(_n_b_15692,1.0),_n_k_15693)+(_n_glow_15697*0.82)),(_n_mix_15604(d::at(_n_a_15690,2.0),d::at(_n_b_15692,2.0),_n_k_15693)+(_n_glow_15697*0.48))};

}
}

std::array<double,3> _n_hazeAt_15608(double _a0){double _n_x_15698=_a0;
{
auto&& _n_c_15699=_n_skyAt_15607(_n_x_15698,(_n_HZ_15585-4.0));
return std::array<double,3>{(d::at(_n_c_15699,0.0)*0.8),(d::at(_n_c_15699,1.0)*0.72),(d::at(_n_c_15699,2.0)*0.72)};

}
}

struct Native_kite_festival final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_15609{};
double _n_N_15610{};
d::Array<d::String,false> _n_out_15611{};
d::Array<uint8_t,true> _n_lut_15612{};
d::Array<float,true> _n_bgR_15614{};
d::Array<float,true> _n_bgG_15615{};
d::Array<float,true> _n_bgB_15616{};
d::Array<float,true> _n_skR_15617{};
d::Array<float,true> _n_skG_15618{};
d::Array<float,true> _n_skB_15619{};
d::Array<float,true> _n_dep_15620{};
d::Array<float,true> _n_flo_15621{};
d::Array<std::shared_ptr<_n_Record_15628>,false> _n_hands_15627{};
d::Array<std::shared_ptr<_n_Record_15633>,false> _n_kites_15632{};
d::Array<std::array<double,6>,false> _n_HERO_15636{};
d::Array<d::Array<std::array<double,3>,false>,false> _n_lit_15637{};
d::Array<std::shared_ptr<_n_Record_15639>,false> _n_BIRDS_15638{};
d::Array<float,true> _n_R_15640{};
d::Array<float,true> _n_G_15641{};
d::Array<float,true> _n_B_15642{};
d::Array<float,true> _n_F_15643{};
std::function<d::String(double,std::shared_ptr<_n_Record_16009>)> _render;
double _n_nearest_15613(double _a0,double _a1,double _a2){double _n_r_15700=_a0;
double _n_g_15701=_a1;
double _n_b_15702=_a2;
{
double _n_k_15703=([&](){auto _n_left_16147=([&](){auto _n_left_16149=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_15700*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_16150=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_15701*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_16149)|d::i32(_n_right_16150));})();auto _n_right_16148=d::minimum({31.0,double(d::i32((_n_b_15702*31.99))|d::i32(0.0))});return double(d::i32(_n_left_16147)|d::i32(_n_right_16148));})();
if(d::truth((d::at(this->_n_lut_15612,_n_k_15703)!=255.0))){d::check_cancel();return d::at(this->_n_lut_15612,_n_k_15703);
}
double _n_best_15704=0.0;
double _n_bd_15705=1000000000.0;
{double _n_i_15706=0.0;
for(;d::truth((_n_i_15706<double(this->_n_P_15609.size())));(void)((_n_i_15706++))){d::check_cancel();double _n_dr_15707=(d::at(d::at(this->_n_P_15609,_n_i_15706),0.0)-_n_r_15700);
double _n_dg_15708=(d::at(d::at(this->_n_P_15609,_n_i_15706),1.0)-_n_g_15701);
double _n_db_15709=(d::at(d::at(this->_n_P_15609,_n_i_15706),2.0)-_n_b_15702);
double _n_d_15710=((((0.3*_n_dr_15707)*_n_dr_15707)+((0.5*_n_dg_15708)*_n_dg_15708))+((0.2*_n_db_15709)*_n_db_15709));
if(d::truth((_n_d_15710<_n_bd_15705))){d::check_cancel();(void)(((_n_bd_15705=_n_d_15710),(_n_best_15704=_n_i_15706)));
}
}}
return ([&](){auto&& _n_array_16151=this->_n_lut_15612;auto _n_index_16152=_n_k_15703;auto _n_value_16153=_n_best_15704;d::put(_n_array_16151,_n_index_16152,_n_value_16153);return _n_value_16153;})();

}
}

void _n_put_15622(double _a0,double _a1,std::array<double,3> _a2,double _a3,std::optional<double> _a4){double _n_x_15711=_a0;
double _n_r_15712=_a1;
auto&& _n_c_15713=_a2;
double _n_d_15714=_a3;
double _n_f_15715=(d::present(_a4)?d::read(_a4):0.14);
{
if((((d::truth((_n_x_15711<0.0))||d::truth((_n_x_15711>=_n_W_15583)))||d::truth((_n_r_15712<0.0)))||d::truth((_n_r_15712>=_n_H_15584)))){d::check_cancel();return;
}
double _n_k_15716=((_n_r_15712*_n_W_15583)+_n_x_15711);
(void)(((((([&](){auto&& _n_array_16154=this->_n_bgR_15614;auto _n_index_16155=_n_k_15716;auto _n_value_16156=d::at(_n_c_15713,0.0);d::put(_n_array_16154,_n_index_16155,_n_value_16156);return _n_value_16156;})(),([&](){auto&& _n_array_16157=this->_n_bgG_15615;auto _n_index_16158=_n_k_15716;auto _n_value_16159=d::at(_n_c_15713,1.0);d::put(_n_array_16157,_n_index_16158,_n_value_16159);return _n_value_16159;})()),([&](){auto&& _n_array_16160=this->_n_bgB_15616;auto _n_index_16161=_n_k_15716;auto _n_value_16162=d::at(_n_c_15713,2.0);d::put(_n_array_16160,_n_index_16161,_n_value_16162);return _n_value_16162;})()),([&](){auto&& _n_array_16163=this->_n_dep_15620;auto _n_index_16164=_n_k_15716;auto _n_value_16165=_n_d_15714;d::put(_n_array_16163,_n_index_16164,_n_value_16165);return _n_value_16165;})()),([&](){auto&& _n_array_16166=this->_n_flo_15621;auto _n_index_16167=_n_k_15716;auto _n_value_16168=_n_f_15715;d::put(_n_array_16166,_n_index_16167,_n_value_16168);return _n_value_16168;})()));

}
}

double _n_ridgeS_15623(double _a0){double _n_x_15733=_a0;
return ([&](){auto _n_left_16169=([&](){auto _n_left_16171=(59.5-(12.0*std::exp((-d::number(std::pow(((_n_x_15733-156.0)/36.0),2.0))))));auto _n_right_16172=(5.0*std::exp((-d::number(std::pow(((_n_x_15733-102.0)/20.0),2.0)))));return (_n_left_16171-_n_right_16172);})();auto _n_right_16170=(3.0*std::exp((-d::number(std::pow(((_n_x_15733-14.0)/16.0),2.0)))));return (_n_left_16169-_n_right_16170);})();}

double _n_ridge_15624(double _a0){double _n_x_15734=_a0;
return (([&](){auto _n_left_16173=this->_n_ridgeS_15623(_n_x_15734);auto _n_right_16174=(1.8*_n_fbm_15601((_n_x_15734*0.09),2.1,3.0,0.0));return (_n_left_16173-_n_right_16174);})()+0.9);}

double _n_back_15625(double _a0){double _n_x_15735=_a0;
return ([&](){auto _n_left_16175=(55.5-(3.0*_n_fbm_15601((_n_x_15735*0.03),7.3,3.0,0.0)));auto _n_right_16176=(4.0*std::exp((-d::number(std::pow(((_n_x_15735-60.0)/30.0),2.0)))));return (_n_left_16175-_n_right_16176);})();}

std::array<double,3> _n_fortCol_15626(double _a0){double _n_lit_15746=_a0;
return std::array<double,3>{(0.08+(0.9*_n_lit_15746)),(0.06+(0.5*_n_lit_15746)),(0.16+(0.22*_n_lit_15746))};}

void _n_drawFigure_15629(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_15770=_a0;
double _n_top_15771=_a1;
double _n_size_15772=_a2;
double _n_s_15773=_a3;
double _n_d_15774=_a4;
{
auto&& _n_cloth_15775=d::at(_n_CLOTH_15595,std::floor((_n_hash_15599(_n_s_15773,31.0)*double(_n_CLOTH_15595.size()))));
auto&& _n_skin_15776=std::array<double,3>{0.32,0.18,0.16};
auto&& _n_legs_15777=(d::truth((_n_hash_15599(_n_s_15773,32.0)<0.5))?std::array<double,3>{0.92,0.9,0.86}:std::array<double,3>{0.3,0.18,0.24});
d::Array<std::shared_ptr<std::tuple<double,double,std::array<double,3>>>,false> _n_cells_15778=d::Array<std::shared_ptr<std::tuple<double,double,std::array<double,3>>>,false>{};
d::Array<double,false> _n_hand_15779{};
if(d::truth((_n_size_15772==2.0))){d::check_cancel();(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(3.0)),_n_skin_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(2.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(1.0)),_n_legs_15777),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(1.0)),(-d::number(3.0)),_n_cloth_15775)));
(void)((_n_hand_15779=d::Array<double,false>{(-d::number(1.0)),(-d::number(4.0))}));
}else {d::check_cancel();if(d::truth((_n_size_15772==3.0))){d::check_cancel();(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(5.0)),_n_skin_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(4.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(3.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(4.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(2.0)),_n_legs_15777),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(1.0)),_n_legs_15777),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(1.0)),(-d::number(5.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(2.0)),(-d::number(6.0)),_n_skin_15776)));
(void)((_n_hand_15779=d::Array<double,false>{(-d::number(2.0)),(-d::number(6.5))}));
}else {d::check_cancel();(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(8.0)),_n_skin_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(8.0)),_n_skin_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(7.0)),_n_skin_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(7.0)),_n_skin_15776)));
{double _n_yy_15780=(-d::number(6.0));
for(;d::truth((_n_yy_15780<=(-d::number(3.0))));(void)((_n_yy_15780++))){d::check_cancel();(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,_n_yy_15780,_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,_n_yy_15780,_n_cloth_15775)));
}}
(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(2.0,(-d::number(5.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(2.0,(-d::number(4.0)),_n_cloth_15775)));
(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(2.0)),_n_legs_15777),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(1.0)),_n_legs_15777),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(2.0)),_n_legs_15777),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(1.0)),_n_legs_15777)));
(void)(_n_cells_15778.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(1.0)),(-d::number(6.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(2.0)),(-d::number(7.0)),_n_cloth_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(3.0)),(-d::number(8.0)),_n_skin_15776)));
(void)((_n_hand_15779=d::Array<double,false>{(-d::number(3.0)),(-d::number(8.5))}));
}
}
for(auto &&_n_item_16177:_n_cells_15778){d::check_cancel();auto _n_binding_16178=_n_item_16177;
double _n_ox_15781=std::get<0>(*_n_binding_16178);
double _n_oy_15782=std::get<1>(*_n_binding_16178);
auto&& _n_c_15783=std::get<2>(*_n_binding_16178);
(void)(this->_n_put_15622((_n_fx_15770+_n_ox_15781),(_n_top_15771+_n_oy_15782),_n_c_15783,(_n_d_15774+0.01),std::optional<double>(0.1)));
}
(void)(this->_n_hands_15627.push(([&](){auto _n_object_16180=std::make_shared<_n_Record_15628>();_n_object_16180->_p_x=((_n_fx_15770+d::at(_n_hand_15779,0.0))+0.5);_n_object_16180->_p_y=(_n_top_15771+d::at(_n_hand_15779,1.0));_n_object_16180->_p_d=(_n_d_15774+0.01);return _n_object_16180;})()));

}
}

void _n_wall_15630(double _a0,double _a1,std::array<double,3> _a2,double _a3,double _a4,double _a5){double _n_x_15784=_a0;
double _n_r_15785=_a1;
auto&& _n_c_15786=_a2;
double _n_light_15787=_a3;
double _n_haze_15788=_a4;
double _n_d_15789=_a5;
{
auto&& _n_hz_15790=_n_hazeAt_15608((_n_x_15784+0.5));
(void)(([&](){auto _n_argument_16181=_n_x_15784;auto _n_argument_16182=_n_r_15785;auto _n_argument_16183=d::Array<double,false>{_n_mix_15604((d::at(_n_c_15786,0.0)*_n_light_15787),d::at(_n_hz_15790,0.0),_n_haze_15788),_n_mix_15604((d::at(_n_c_15786,1.0)*_n_light_15787),d::at(_n_hz_15790,1.0),_n_haze_15788),_n_mix_15604((d::at(_n_c_15786,2.0)*_n_light_15787),d::at(_n_hz_15790,2.0),_n_haze_15788)};auto _n_argument_16184=_n_d_15789;auto _n_argument_16185=0.04;return this->_n_put_15622(_n_argument_16181,_n_argument_16182,d::fixedArray<double,3>(_n_argument_16183),_n_argument_16184,std::optional<double>(_n_argument_16185));})());

}
}

void _n_hawaMahal_15631(double _a0,double _a1,double _a2){double _n_cx_15791=_a0;
double _n_base_15792=_a1;
double _n_d_15793=_a2;
{
d::Array<double,false> _n_spans_15794=d::Array<double,false>{17.0,17.0,15.0,11.0,6.0};
auto&& _n_pink_15795=std::array<double,3>{0.95,0.5,0.42};
auto&& _n_trim_15796=std::array<double,3>{1.0,0.86,0.74};
{double _n_tier_15797=0.0;
for(;d::truth((_n_tier_15797<double(_n_spans_15794.size())));(void)((_n_tier_15797++))){d::check_cancel();double _n_tTop_15798=(_n_base_15792-(4.0*(_n_tier_15797+1.0)));
double _n_hw_15799=d::at(_n_spans_15794,_n_tier_15797);
double _n_up_15800=([&]()->double{auto _n_logical_16186=d::at(_n_spans_15794,(_n_tier_15797+1.0));return d::has(_n_spans_15794,(_n_tier_15797+1.0))?_n_logical_16186:(-d::number(1.0));})();
{double _n_x_15801=(_n_cx_15791-_n_hw_15799);
for(;d::truth((_n_x_15801<(_n_cx_15791+_n_hw_15799)));(void)((_n_x_15801++))){d::check_cancel();double _n_lx_15802=(_n_x_15801-(_n_cx_15791-_n_hw_15799));
{double _n_tr_15803=0.0;
for(;d::truth((_n_tr_15803<4.0));(void)((_n_tr_15803++))){d::check_cancel();double _n_r_15804=(_n_tTop_15798+_n_tr_15803);
if(d::truth((_n_tr_15803==0.0))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15801,_n_r_15804,_n_trim_15796,1.0,0.1,_n_d_15793));
}else {d::check_cancel();if(d::truth((_n_tr_15803==3.0))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15801,_n_r_15804,_n_pink_15795,0.26,0.1,_n_d_15793));
}else {d::check_cancel();if(d::truth((d::mod(_n_lx_15802,2.0)==1.0))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15801,_n_r_15804,_n_trim_15796,(d::truth((_n_tr_15803==1.0))?1.0:0.8),0.1,_n_d_15793));
}else {d::check_cancel();(void)(this->_n_wall_15630(_n_x_15801,_n_r_15804,_n_pink_15795,0.3,0.1,_n_d_15793));
}
}
}
}}
if((d::truth((std::fabs(((_n_x_15801+0.5)-_n_cx_15791))>_n_up_15800))&&d::truth((d::mod(_n_lx_15802,3.0)==1.0)))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15801,(_n_tTop_15798-1.0),_n_trim_15796,0.9,0.1,_n_d_15793));
}
}}
}}
double _n_ct_15805=(_n_base_15792-(4.0*double(_n_spans_15794.size())));
{double _n_r_15806=(_n_ct_15805-4.0);
for(;d::truth((_n_r_15806<_n_ct_15805));(void)((_n_r_15806++))){d::check_cancel();{double _n_x_15807=(_n_cx_15791-4.0);
for(;d::truth((_n_x_15807<(_n_cx_15791+4.0)));(void)((_n_x_15807++))){d::check_cancel();if(d::truth((std::fabs(((_n_x_15807+0.5)-_n_cx_15791))<=(((_n_r_15806-(_n_ct_15805-4.0))*1.2)+0.6)))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15807,_n_r_15806,(d::truth((_n_r_15806==(_n_ct_15805-1.0)))?_n_trim_15796:_n_pink_15795),(d::truth((_n_r_15806==(_n_ct_15805-1.0)))?1.0:0.7),0.1,_n_d_15793));
}
}}
}}
(void)(this->_n_wall_15630(_n_cx_15791,(_n_ct_15805-5.0),_n_trim_15796,0.9,0.1,_n_d_15793));

}
}

std::shared_ptr<_n_Record_15633> _n_makeKite_15634(double _a0,double _a1,double _a2,double _a3){double _n_seed_15859=_a0;
double _n_x_15860=_a1;
double _n_y_15861=_a2;
double _n_z_15862=_a3;
{
double _n_a_15863=std::floor((_n_hash_15599(_n_seed_15859,1.0)*double(_n_PAPER_15594.size())));
double _n_b_15864=std::floor((_n_hash_15599(_n_seed_15859,2.0)*double(_n_PAPER_15594.size())));
if(d::truth((_n_b_15864==_n_a_15863))){d::check_cancel();(void)((_n_b_15864=d::mod((_n_b_15864+3.0),double(_n_PAPER_15594.size()))));
}
double _n_h_15865=(1.8+(6.4*std::pow(_n_z_15862,1.5)));
return ([&](){auto _n_object_16188=std::make_shared<_n_Record_15633>();_n_object_16188->_p_x=_n_x_15860;_n_object_16188->_p_y=_n_y_15861;_n_object_16188->_p_z=_n_z_15862;_n_object_16188->_p_h=_n_h_15865;_n_object_16188->_p_w=(_n_h_15865*(0.8+(0.08*_n_hash_15599(_n_seed_15859,3.0))));_n_object_16188->_p_A=d::at(_n_PAPER_15594,_n_a_15863);_n_object_16188->_p_B=d::at(_n_PAPER_15594,_n_b_15864);_n_object_16188->_p_design=std::floor((_n_hash_15599(_n_seed_15859,4.0)*6.0));_n_object_16188->_p_tilt=((-d::number(0.12))+(0.24*_n_hash_15599(_n_seed_15859,5.0)));_n_object_16188->_p_amp=(0.4+(1.6*_n_z_15862));_n_object_16188->_p_w1=(0.5+(0.7*_n_hash_15599(_n_seed_15859,6.0)));_n_object_16188->_p_w2=(0.7+(0.9*_n_hash_15599(_n_seed_15859,7.0)));_n_object_16188->_p_p1=(_n_hash_15599(_n_seed_15859,8.0)*6.28);_n_object_16188->_p_p2=(_n_hash_15599(_n_seed_15859,9.0)*6.28);_n_object_16188->_p_dive=(d::truth((_n_hash_15599(_n_seed_15859,10.0)<0.12))?1.0:0.0);_n_object_16188->_p_cut=0.0;_n_object_16188->_p_period=0.0;_n_object_16188->_p_drop=0.0;_n_object_16188->_p_hand=std::optional<d::Array<double,false>>{};_n_object_16188->_p_tail=((d::truth((_n_z_15862>0.55))&&d::truth((_n_hash_15599(_n_seed_15859,11.0)<0.6)))?(14.0+(26.0*_n_z_15862)):0.0);return _n_object_16188;})();

}
}

bool _n_room_15635(double _a0,double _a1,double _a2){double _n_x_15866=_a0;
double _n_y_15867=_a1;
double _n_z_15868=_a2;
{
double _n_h_15869=(1.8+(6.4*std::pow(_n_z_15868,1.5)));
if(d::truth((d::hypot(std::initializer_list<double>{(_n_x_15866-d::at(_n_SUN_15586,0.0)),(_n_y_15867-d::at(_n_SUN_15586,1.0))})<((_n_SUN_R_15587+_n_h_15869)+3.0)))){d::check_cancel();return false;
}
if((d::truth((_n_y_15867>((this->_n_ridgeS_15623(_n_x_15866)-_n_h_15869)-2.0)))||d::truth((_n_y_15867<(_n_h_15869-2.0))))){d::check_cancel();return false;
}
for(auto &&_n_item_16189:this->_n_kites_15632){d::check_cancel();std::shared_ptr<_n_Record_15633> _n_K_15870=_n_item_16189;
if(d::truth((d::hypot(std::initializer_list<double>{(_n_K_15870->_p_x-_n_x_15866),((_n_K_15870->_p_y-_n_y_15867)*0.8)})<(((_n_K_15870->_p_h+_n_h_15869)*1.05)+4.0)))){d::check_cancel();return false;
}
}
return true;

}
}

void _n_blend_15644(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_k_15902=_a0;
double _n_c0_15903=_a1;
double _n_c1_15904=_a2;
double _n_c2_15905=_a3;
double _n_a_15906=_a4;
{
(void)(([&](){auto&& _n_array_16190=this->_n_R_15640;auto _n_index_16191=_n_k_15902;auto _n_value_16192=(d::at(_n_array_16190,_n_index_16191)+((_n_c0_15903-d::at(this->_n_R_15640,_n_k_15902))*_n_a_15906));d::put(_n_array_16190,_n_index_16191,_n_value_16192);return _n_value_16192;})());
(void)(([&](){auto&& _n_array_16193=this->_n_G_15641;auto _n_index_16194=_n_k_15902;auto _n_value_16195=(d::at(_n_array_16193,_n_index_16194)+((_n_c1_15904-d::at(this->_n_G_15641,_n_k_15902))*_n_a_15906));d::put(_n_array_16193,_n_index_16194,_n_value_16195);return _n_value_16195;})());
(void)(([&](){auto&& _n_array_16196=this->_n_B_15642;auto _n_index_16197=_n_k_15902;auto _n_value_16198=(d::at(_n_array_16196,_n_index_16197)+((_n_c2_15905-d::at(this->_n_B_15642,_n_k_15902))*_n_a_15906));d::put(_n_array_16196,_n_index_16197,_n_value_16198);return _n_value_16198;})());

}
}

void _n_string_15645(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,bool _a6,double _a7){double _n_x0_15907=_a0;
double _n_y0_15908=_a1;
double _n_d0_15909=_a2;
double _n_x1_15910=_a3;
double _n_y1_15911=_a4;
double _n_d1_15912=_a5;
bool _n_fadeOut_15913=_a6;
double _n_z_15914=_a7;
{
double _n_len_15915=d::hypot(std::initializer_list<double>{(_n_x1_15910-_n_x0_15907),(_n_y1_15911-_n_y0_15908)});
double _n_n_15916=std::ceil((_n_len_15915*1.4));
double _n_sag_15917=(0.07*_n_len_15915);
double _n_last_15918=(-d::number(1.0));
{double _n_i_15919=0.0;
for(;d::truth((_n_i_15919<=_n_n_15916));(void)((_n_i_15919++))){d::check_cancel();double _n_s_15920=(_n_i_15919/_n_n_15916);
double _n_x_15921=_n_mix_15604(_n_x0_15907,_n_x1_15910,_n_s_15920);
double _n_y_15922=(_n_mix_15604(_n_y0_15908,_n_y1_15911,_n_s_15920)+(((_n_sag_15917*4.0)*_n_s_15920)*(1.0-_n_s_15920)));
double _n_ix_15923=std::floor(_n_x_15921);
double _n_iy_15924=std::floor(_n_y_15922);
if((((d::truth((_n_ix_15923<0.0))||d::truth((_n_ix_15923>=_n_W_15583)))||d::truth((_n_iy_15924<0.0)))||d::truth((_n_iy_15924>=_n_H_15584)))){d::check_cancel();continue;
}
double _n_k_15925=((_n_iy_15924*_n_W_15583)+_n_ix_15923);
if(d::truth((_n_k_15925==_n_last_15918))){d::check_cancel();continue;
}
(void)((_n_last_15918=_n_k_15925));
if(d::truth((d::at(this->_n_dep_15620,_n_k_15925)>=_n_mix_15604(_n_d0_15909,_n_d1_15912,_n_s_15920)))){d::check_cancel();continue;
}
double _n_seen_15926=(d::truth(_n_fadeOut_15913)?(1.0-_n_s_15920):([&](){auto _n_argument_16199=_n_smooth_15603(0.15,0.03,_n_s_15920);auto _n_argument_16200=_n_smooth_15603(0.5,0.8,_n_s_15920);return d::maximum({_n_argument_16199,_n_argument_16200});})());
double _n_a_15927=((0.3+(0.3*_n_z_15914))*_n_seen_15926);
if(d::truth((_n_a_15927<0.05))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_16201=this->_n_R_15640;auto _n_index_16202=_n_k_15925;auto _n_value_16203=(d::at(_n_array_16201,_n_index_16202)*(1.0-_n_a_15927));d::put(_n_array_16201,_n_index_16202,_n_value_16203);return _n_value_16203;})(),([&](){auto&& _n_array_16204=this->_n_G_15641;auto _n_index_16205=_n_k_15925;auto _n_value_16206=(d::at(_n_array_16204,_n_index_16205)*(1.0-_n_a_15927));d::put(_n_array_16204,_n_index_16205,_n_value_16206);return _n_value_16206;})()),([&](){auto&& _n_array_16207=this->_n_B_15642;auto _n_index_16208=_n_k_15925;auto _n_value_16209=(d::at(_n_array_16207,_n_index_16208)*(1.0-_n_a_15927));d::put(_n_array_16207,_n_index_16208,_n_value_16209);return _n_value_16209;})()));
(void)(([&](){auto&& _n_array_16210=this->_n_F_15643;auto _n_index_16211=_n_k_15925;auto _n_value_16212=d::minimum({d::at(this->_n_F_15643,_n_k_15925),0.04});d::put(_n_array_16210,_n_index_16211,_n_value_16212);return _n_value_16212;})());
}}

}
}

void _n_drawKite_15646(std::shared_ptr<_n_Record_15633> _a0,d::Array<std::array<double,3>,false> _a1,double _a2,double _a3,double _a4,double _a5,double _a6){std::shared_ptr<_n_Record_15633> _n_K_15928=_a0;
d::Array<std::array<double,3>,false> _n_cols_15929=_a1;
double _n_cx_15930=_a2;
double _n_cy_15931=_a3;
double _n_ang_15932=_a4;
double _n_fl_15933=_a5;
double _n_t_15934=_a6;
{
double _n_h_15935=_n_K_15928->_p_h;
double _n_w_15936=_n_K_15928->_p_w;
double _n_hz_15937=(([&](){auto _n_argument_16213=(1.0-d::minimum({1.0,_n_K_15928->_p_z}));auto _n_argument_16214=1.4;return std::pow(_n_argument_16213,_n_argument_16214);})()*0.25);
auto _n_binding_16215=_n_cols_15929;
auto&& _n_A_15938=d::at(_n_binding_16215,0.0);
auto&& _n_Bc_15939=d::at(_n_binding_16215,1.0);
if(d::truth((_n_h_15935<1.7))){d::check_cancel();double _n_ix_15940=std::floor(_n_cx_15930);
double _n_iy_15941=std::floor(_n_cy_15931);
if((((d::truth((_n_ix_15940<0.0))||d::truth((_n_ix_15940>=_n_W_15583)))||d::truth((_n_iy_15941<0.0)))||d::truth((_n_iy_15941>=(_n_H_15584-1.0))))){d::check_cancel();return;
}
double _n_k_15942=((_n_iy_15941*_n_W_15583)+_n_ix_15940);
if(d::truth((d::at(this->_n_dep_15620,_n_k_15942)<_n_K_15928->_p_z))){d::check_cancel();(void)(([&](){auto _n_argument_16216=_n_k_15942;auto _n_argument_16217=_n_mix_15604(d::at(_n_A_15938,0.0),d::at(this->_n_skR_15617,_n_k_15942),_n_hz_15937);auto _n_argument_16218=_n_mix_15604(d::at(_n_A_15938,1.0),d::at(this->_n_skG_15618,_n_k_15942),_n_hz_15937);auto _n_argument_16219=_n_mix_15604(d::at(_n_A_15938,2.0),d::at(this->_n_skB_15619,_n_k_15942),_n_hz_15937);auto _n_argument_16220=1.0;return this->_n_blend_15644(_n_argument_16216,_n_argument_16217,_n_argument_16218,_n_argument_16219,_n_argument_16220);})());
(void)(([&](){auto&& _n_array_16221=this->_n_F_15643;auto _n_index_16222=_n_k_15942;auto _n_value_16223=0.3;d::put(_n_array_16221,_n_index_16222,_n_value_16223);return _n_value_16223;})());
}
if((d::truth((_n_h_15935>1.3))&&d::truth((d::at(this->_n_dep_15620,(_n_k_15942+_n_W_15583))<_n_K_15928->_p_z)))){d::check_cancel();(void)(this->_n_blend_15644((_n_k_15942+_n_W_15583),d::at(_n_Bc_15939,0.0),d::at(_n_Bc_15939,1.0),d::at(_n_Bc_15939,2.0),0.4));
}
return;
}
double _n_ca_15943=std::cos(_n_ang_15932);
double _n_sa_15944=std::sin(_n_ang_15932);
double _n_tri_15945=(d::truth((_n_h_15935>1.8))?((0.26*_n_h_15935)+0.5):0.0);
double _n_tl_15946=(d::truth((_n_h_15935>5.5))?(_n_h_15935*0.55):0.0);
double _n_rad_15947=std::ceil((d::maximum({((_n_h_15935+_n_tri_15945)+_n_tl_15946),_n_w_15936})+1.5));
bool _n_big_15948=(_n_h_15935>=2.6);
double _n_edge_15949=([&](){auto _n_argument_16224=0.7;auto _n_argument_16225=d::minimum({(_n_w_15936*_n_fl_15933),_n_h_15935});return d::maximum({_n_argument_16224,_n_argument_16225});})();
{double _n_r_15950=([&](){auto _n_argument_16226=0.0;auto _n_argument_16227=std::floor((_n_cy_15931-_n_rad_15947));return d::maximum({_n_argument_16226,_n_argument_16227});})();
for(;d::truth((_n_r_15950<=d::minimum({(_n_H_15584-1.0),(_n_cy_15931+_n_rad_15947)})));(void)((_n_r_15950++))){d::check_cancel();{double _n_x_15951=([&](){auto _n_argument_16228=0.0;auto _n_argument_16229=std::floor((_n_cx_15930-_n_rad_15947));return d::maximum({_n_argument_16228,_n_argument_16229});})();
for(;d::truth((_n_x_15951<=d::minimum({(_n_W_15583-1.0),(_n_cx_15930+_n_rad_15947)})));(void)((_n_x_15951++))){d::check_cancel();double _n_k_15952=((_n_r_15950*_n_W_15583)+_n_x_15951);
if(d::truth((d::at(this->_n_dep_15620,_n_k_15952)>=_n_K_15928->_p_z))){d::check_cancel();continue;
}
double _n_dx_15953=((_n_x_15951+0.5)-_n_cx_15930);
double _n_dy_15954=((_n_r_15950+0.5)-_n_cy_15931);
double _n_u_15955=(((_n_dx_15953*_n_ca_15943)+(_n_dy_15954*_n_sa_15944))/_n_fl_15933);
double _n_v_15956=(((-d::number(_n_dx_15953))*_n_sa_15944)+(_n_dy_15954*_n_ca_15943));
double _n_q_15957=([&](){auto _n_left_16230=(std::fabs(_n_u_15955)/_n_w_15936);auto _n_right_16231=(std::fabs(_n_v_15956)/(d::truth((_n_v_15956<0.0))?(_n_h_15935*0.92):_n_h_15935));return (_n_left_16230+_n_right_16231);})();
double _n_cov_15958=(d::truth((_n_q_15957<=(1.0+(0.3/_n_edge_15949))))?1.0:0.0);
auto&& _n_c_15959=_n_A_15938;
if(d::truth(_n_cov_15958)){d::check_cancel();bool _n_two_15960=false;
{auto _n_switch_16232=_n_K_15928->_p_design;int _n_case_16233=-1;if(_n_case_16233<0&&_n_switch_16232==0.0)_n_case_16233=0;if(_n_case_16233<0&&_n_switch_16232==1.0)_n_case_16233=1;if(_n_case_16233<0&&_n_switch_16232==2.0)_n_case_16233=2;if(_n_case_16233<0&&_n_switch_16232==3.0)_n_case_16233=3;if(_n_case_16233<0&&_n_switch_16232==4.0)_n_case_16233=4;if(_n_case_16233<0)_n_case_16233=5;if(_n_case_16233>=0&&_n_case_16233<=0){(void)((_n_two_15960=(_n_v_15956<((-d::number(0.38))*_n_h_15935))));
goto _n_end_16234;
}if(_n_case_16233>=0&&_n_case_16233<=1){(void)((_n_two_15960=(_n_u_15955>0.0)));
goto _n_end_16234;
}if(_n_case_16233>=0&&_n_case_16233<=2){(void)((_n_two_15960=(((_n_u_15955*_n_u_15955)+std::pow((_n_v_15956+(0.05*_n_h_15935)),2.0))<std::pow((0.36*_n_w_15936),2.0))));
goto _n_end_16234;
}if(_n_case_16233>=0&&_n_case_16233<=3){(void)((_n_two_15960=(std::fabs(_n_v_15956)<(0.2*_n_h_15935))));
goto _n_end_16234;
}if(_n_case_16233>=0&&_n_case_16233<=4){(void)((_n_two_15960=(_n_v_15956>0.0)));
goto _n_end_16234;
}if(_n_case_16233>=0&&_n_case_16233<=5){(void)((_n_two_15960=(_n_q_15957>0.72)));
}_n_end_16234:;}if(d::truth(_n_two_15960)){d::check_cancel();(void)((_n_c_15959=_n_Bc_15939));
}
double _n_s_15961=1.0;
if(d::truth(_n_big_15948)){d::check_cancel();if((d::truth((std::fabs(_n_u_15955)<0.4))&&d::truth((_n_v_15956>((-d::number(_n_h_15935))*0.9))))){d::check_cancel();(void)((_n_s_15961=0.72));
}
double _n_bow_15962=(((-d::number(0.15))*_n_h_15935)+((0.32*_n_h_15935)*std::pow((_n_u_15955/_n_w_15936),2.0)));
if((d::truth((_n_h_15935>=4.0))&&d::truth((std::fabs((_n_v_15956-_n_bow_15962))<0.42)))){d::check_cancel();(void)((_n_s_15961=d::minimum({_n_s_15961,0.76})));
}
}
(void)(([&](){auto _n_argument_16235=_n_k_15952;auto _n_argument_16236=_n_mix_15604((d::at(_n_c_15959,0.0)*_n_s_15961),d::at(this->_n_skR_15617,_n_k_15952),_n_hz_15937);auto _n_argument_16237=_n_mix_15604((d::at(_n_c_15959,1.0)*_n_s_15961),d::at(this->_n_skG_15618,_n_k_15952),_n_hz_15937);auto _n_argument_16238=_n_mix_15604((d::at(_n_c_15959,2.0)*_n_s_15961),d::at(this->_n_skB_15619,_n_k_15952),_n_hz_15937);auto _n_argument_16239=1.0;return this->_n_blend_15644(_n_argument_16235,_n_argument_16236,_n_argument_16237,_n_argument_16238,_n_argument_16239);})());
(void)(([&](){auto&& _n_array_16240=this->_n_F_15643;auto _n_index_16241=_n_k_15952;auto _n_value_16242=0.24;d::put(_n_array_16240,_n_index_16241,_n_value_16242);return _n_value_16242;})());
continue;
}
double _n_tv_15963=(_n_v_15956-_n_h_15935);
double _n_tc_15964=0.0;
if((((d::truth(_n_tri_15945)&&d::truth((_n_tv_15963>(-d::number(0.3)))))&&d::truth((_n_tv_15963<_n_tri_15945)))&&d::truth((std::fabs((_n_u_15955*_n_fl_15933))<=(0.35+(_n_tv_15963*0.75)))))){d::check_cancel();(void)((_n_tc_15964=1.0));
}else {d::check_cancel();if(((d::truth(_n_tl_15946)&&d::truth((_n_tv_15963>0.0)))&&d::truth((_n_tv_15963<(_n_tri_15945+_n_tl_15946))))){d::check_cancel();for(auto &&_n_item_16243:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_15965=_n_item_16243;
{
double _n_uc_15966=((_n_side_15965*(0.3+(_n_tv_15963*0.18)))+(0.6*std::sin(((((_n_tv_15963*0.6)-(_n_t_15934*7.0))+_n_K_15928->_p_p1)+_n_side_15965))));
if(d::truth((std::fabs(((_n_u_15955*_n_fl_15933)-_n_uc_15966))<0.45))){d::check_cancel();(void)((_n_tc_15964=1.0));
}

}
}
}
}
if(d::truth(_n_tc_15964)){d::check_cancel();(void)(([&](){auto _n_argument_16244=_n_k_15952;auto _n_argument_16245=_n_mix_15604(d::at(_n_Bc_15939,0.0),d::at(this->_n_skR_15617,_n_k_15952),_n_hz_15937);auto _n_argument_16246=_n_mix_15604(d::at(_n_Bc_15939,1.0),d::at(this->_n_skG_15618,_n_k_15952),_n_hz_15937);auto _n_argument_16247=_n_mix_15604(d::at(_n_Bc_15939,2.0),d::at(this->_n_skB_15619,_n_k_15952),_n_hz_15937);auto _n_argument_16248=_n_tc_15964;return this->_n_blend_15644(_n_argument_16244,_n_argument_16245,_n_argument_16246,_n_argument_16247,_n_argument_16248);})());
(void)(([&](){auto&& _n_array_16249=this->_n_F_15643;auto _n_index_16250=_n_k_15952;auto _n_value_16251=0.24;d::put(_n_array_16249,_n_index_16250,_n_value_16251);return _n_value_16251;})());
}
}}
}}

}
}

explicit Native_kite_festival(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_15609=d::map(_n_meta_15581->_p_palette,_n_hex_15605);
this->_n_N_15610=(_n_W_15583*_n_H_15584);
this->_n_out_15611=d::Array<d::String,false>(size_t(this->_n_N_15610));
this->_n_lut_15612=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_bgR_15614=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_bgG_15615=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_bgB_15616=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_skR_15617=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_skG_15618=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_skB_15619=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_dep_15620=d::Array<float,true>(size_t(this->_n_N_15610)).fill(_n_SKY_15591);
this->_n_flo_15621=d::Array<float,true>(size_t(this->_n_N_15610)).fill(0.02);
{double _n_r_15717=0.0;
for(;d::truth((_n_r_15717<_n_H_15584));(void)((_n_r_15717++))){d::check_cancel();{double _n_x_15718=0.0;
for(;d::truth((_n_x_15718<_n_W_15583));(void)((_n_x_15718++))){d::check_cancel();double _n_k_15719=((_n_r_15717*_n_W_15583)+_n_x_15718);
double _n_y_15720=(_n_r_15717+0.5);
auto _n_binding_16036=_n_skyAt_15607((_n_x_15718+0.5),_n_y_15720);
double _n_sr_15721=d::at(_n_binding_16036,0.0);
double _n_sg_15722=d::at(_n_binding_16036,1.0);
double _n_sb_15723=d::at(_n_binding_16036,2.0);
(void)(((([&](){auto&& _n_array_16037=this->_n_skR_15617;auto _n_index_16038=_n_k_15719;auto _n_value_16039=_n_sr_15721;d::put(_n_array_16037,_n_index_16038,_n_value_16039);return _n_value_16039;})(),([&](){auto&& _n_array_16040=this->_n_skG_15618;auto _n_index_16041=_n_k_15719;auto _n_value_16042=_n_sg_15722;d::put(_n_array_16040,_n_index_16041,_n_value_16042);return _n_value_16042;})()),([&](){auto&& _n_array_16043=this->_n_skB_15619;auto _n_index_16044=_n_k_15719;auto _n_value_16045=_n_sb_15723;d::put(_n_array_16043,_n_index_16044,_n_value_16045);return _n_value_16045;})()));
double _n_cr_15724=_n_sr_15721;
double _n_cg_15725=_n_sg_15722;
double _n_cb_15726=_n_sb_15723;
double _n_dx_15727=((_n_x_15718+0.5)-d::at(_n_SUN_15586,0.0));
double _n_dy_15728=(_n_y_15720-d::at(_n_SUN_15586,1.0));
double _n_ds_15729=std::sqrt(((_n_dx_15727*_n_dx_15727)+(_n_dy_15728*_n_dy_15728)));
if(d::truth((_n_ds_15729<(_n_SUN_R_15587+0.6)))){d::check_cancel();double _n_a_15730=_n_smooth_15603((_n_SUN_R_15587+0.6),(_n_SUN_R_15587-0.6),_n_ds_15729);
double _n_low_15731=_n_smooth_15603((-d::number(_n_SUN_R_15587)),_n_SUN_R_15587,_n_dy_15728);
double _n_streak_15732=1.0;
(void)((_n_cr_15724=_n_mix_15604(_n_cr_15724,(1.2*_n_streak_15732),_n_a_15730)));
(void)((_n_cg_15725=_n_mix_15604(_n_cg_15725,((1.15-(0.2*_n_low_15731))*_n_streak_15732),_n_a_15730)));
(void)((_n_cb_15726=_n_mix_15604(_n_cb_15726,((1.0-(0.35*_n_low_15731))*_n_streak_15732),_n_a_15730)));
}
(void)(((([&](){auto&& _n_array_16046=this->_n_bgR_15614;auto _n_index_16047=_n_k_15719;auto _n_value_16048=_n_cr_15724;d::put(_n_array_16046,_n_index_16047,_n_value_16048);return _n_value_16048;})(),([&](){auto&& _n_array_16049=this->_n_bgG_15615;auto _n_index_16050=_n_k_15719;auto _n_value_16051=_n_cg_15725;d::put(_n_array_16049,_n_index_16050,_n_value_16051);return _n_value_16051;})()),([&](){auto&& _n_array_16052=this->_n_bgB_15616;auto _n_index_16053=_n_k_15719;auto _n_value_16054=_n_cb_15726;d::put(_n_array_16052,_n_index_16053,_n_value_16054);return _n_value_16054;})()));
}}
}}
{double _n_x_15736=0.0;
for(;d::truth((_n_x_15736<_n_W_15583));(void)((_n_x_15736++))){d::check_cancel();double _n_rt_15737=this->_n_ridge_15624((_n_x_15736+0.5));
double _n_bt_15738=this->_n_back_15625((_n_x_15736+0.5));
double _n_slope_15739=([&](){auto _n_left_16055=this->_n_ridge_15624((_n_x_15736+1.5));auto _n_right_16056=this->_n_ridge_15624((_n_x_15736-0.5));return (_n_left_16055-_n_right_16056);})();
{double _n_r_15740=std::floor(d::minimum({_n_rt_15737,_n_bt_15738}));
for(;d::truth((_n_r_15740<_n_H_15584));(void)((_n_r_15740++))){d::check_cancel();double _n_y_15741=(_n_r_15740+0.5);
double _n_k_15742=((_n_r_15740*_n_W_15583)+_n_x_15736);
if(d::truth((_n_y_15741>=_n_rt_15737))){d::check_cancel();double _n_s_15743=_n_clamp_15602(((0.5-(_n_slope_15739*0.5))+(0.4*(_n_fbm_15601((_n_x_15736*0.3),(_n_y_15741*0.3),3.0,0.0)-0.5))));
double _n_hz_15744=(0.04+(0.12*_n_smooth_15603((_n_rt_15737+2.0),(_n_rt_15737+14.0),_n_y_15741)));
auto&& _n_c_15745=std::array<double,3>{(0.11+(0.06*_n_s_15743)),(0.08+(0.04*_n_s_15743)),(0.2+(0.06*_n_s_15743))};
(void)(([&](){auto _n_argument_16057=_n_x_15736;auto _n_argument_16058=_n_r_15740;auto _n_argument_16059=d::Array<double,false>{_n_mix_15604(d::at(_n_c_15745,0.0),0.62,_n_hz_15744),_n_mix_15604(d::at(_n_c_15745,1.0),0.44,_n_hz_15744),_n_mix_15604(d::at(_n_c_15745,2.0),0.66,_n_hz_15744)};auto _n_argument_16060=_n_HILL_15593;auto _n_argument_16061=0.0;return this->_n_put_15622(_n_argument_16057,_n_argument_16058,d::fixedArray<double,3>(_n_argument_16059),_n_argument_16060,std::optional<double>(_n_argument_16061));})());
}else {d::check_cancel();if(d::truth((_n_y_15741>=_n_bt_15738))){d::check_cancel();(void)(([&](){auto _n_argument_16062=_n_x_15736;auto _n_argument_16063=_n_r_15740;auto _n_argument_16064=d::Array<double,false>{_n_mix_15604(0.3,d::at(this->_n_skR_15617,_n_k_15742),0.12),_n_mix_15604(0.24,d::at(this->_n_skG_15618,_n_k_15742),0.12),_n_mix_15604(0.46,d::at(this->_n_skB_15619,_n_k_15742),0.12)};auto _n_argument_16065=_n_BACK_15592;auto _n_argument_16066=0.02;return this->_n_put_15622(_n_argument_16062,_n_argument_16063,d::fixedArray<double,3>(_n_argument_16064),_n_argument_16065,std::optional<double>(_n_argument_16066));})());
}
}
}}
}}
{double _n_x_15747=112.0;
for(;d::truth((_n_x_15747<197.0));(void)((_n_x_15747++))){d::check_cancel();double _n_base_15748=(this->_n_ridgeS_15623((_n_x_15747+0.5))+1.0);
double _n_wt_15749=(_n_base_15748-3.0);
{double _n_r_15750=(std::floor(_n_wt_15749)-1.0);
for(;d::truth((_n_r_15750<(_n_base_15748+2.0)));(void)((_n_r_15750++))){d::check_cancel();double _n_y_15751=(_n_r_15750+0.5);
if((d::truth((_n_y_15751<_n_wt_15749))&&d::truth((d::mod(_n_x_15747,2.0)==1.0)))){d::check_cancel();continue;
}
if(d::truth((_n_y_15751<(_n_wt_15749-1.0)))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_16067=_n_x_15747;auto _n_argument_16068=_n_r_15750;auto _n_argument_16069=this->_n_fortCol_15626((d::truth((_n_y_15751<(_n_wt_15749+0.5)))?0.6:0.0));auto _n_argument_16070=(_n_HILL_15593+0.02);auto _n_argument_16071=0.04;return this->_n_put_15622(_n_argument_16067,_n_argument_16068,_n_argument_16069,_n_argument_16070,std::optional<double>(_n_argument_16071));})());
}}
}}
for(auto &&_n_item_16072:d::Array<double,false>{114.0,127.0,139.0,171.0,184.0,195.0}){d::check_cancel();double _n_bx_15752=_n_item_16072;
{
double _n_base_15753=(this->_n_ridgeS_15623(_n_bx_15752)+1.0);
{double _n_r_15754=std::floor((_n_base_15753-9.0));
for(;d::truth((_n_r_15754<(_n_base_15753+2.0)));(void)((_n_r_15754++))){d::check_cancel();{double _n_x_15755=(_n_bx_15752-3.0);
for(;d::truth((_n_x_15755<=(_n_bx_15752+3.0)));(void)((_n_x_15755++))){d::check_cancel();double _n_y_15756=(_n_r_15754+0.5);
double _n_dx_15757=((_n_x_15755+0.5)-_n_bx_15752);
double _n_top_15758=(_n_base_15753-6.0);
bool _n_tower_15759=([&]()->bool{auto _n_logical_16073=(std::fabs(_n_dx_15757)<=2.4);return d::truth(_n_logical_16073)?(_n_y_15756>=_n_top_15758):_n_logical_16073;})();
bool _n_dome_15760=([&]()->bool{auto _n_logical_16074=((std::pow((_n_dx_15757/2.0),2.0)+std::pow(((_n_y_15756-_n_top_15758)/2.2),2.0))<=1.0);return d::truth(_n_logical_16074)?(_n_y_15756<_n_top_15758):_n_logical_16074;})();
if((d::truth(_n_tower_15759)||d::truth(_n_dome_15760))){d::check_cancel();(void)(([&](){auto _n_argument_16075=_n_x_15755;auto _n_argument_16076=_n_r_15754;auto _n_argument_16077=this->_n_fortCol_15626((d::truth((_n_dx_15757<(-d::number(1.2))))?0.6:0.0));auto _n_argument_16078=(_n_HILL_15593+0.03);auto _n_argument_16079=0.04;return this->_n_put_15622(_n_argument_16075,_n_argument_16076,_n_argument_16077,_n_argument_16078,std::optional<double>(_n_argument_16079));})());
}
}}
}}

}
}
{
double _n_top_15761=(this->_n_ridgeS_15623(153.0)-8.0);
{double _n_r_15762=(std::floor(_n_top_15761)-4.0);
for(;d::truth((_n_r_15762<(this->_n_ridgeS_15623(153.0)+2.0)));(void)((_n_r_15762++))){d::check_cancel();{double _n_x_15763=142.0;
for(;d::truth((_n_x_15763<165.0));(void)((_n_x_15763++))){d::check_cancel();double _n_y_15764=(_n_r_15762+0.5);
bool _n_on_15765=(_n_y_15764>=_n_top_15761);
double _n_lit_15766=(d::truth((_n_x_15763<144.0))?0.6:(d::truth((_n_y_15764<(_n_top_15761+1.0)))?0.5:0.0));
if((((d::truth(_n_on_15765)&&d::truth((d::mod((_n_x_15763-142.0),3.0)==1.0)))&&d::truth((d::mod((_n_r_15762-std::floor(_n_top_15761)),3.0)==1.0)))&&d::truth((_n_y_15764>(_n_top_15761+1.0))))){d::check_cancel();(void)((_n_lit_15766=0.3));
}
for(auto &&_n_item_16080:d::Array<double,false>{145.0,153.5,162.0}){d::check_cancel();double _n_cx_15767=_n_item_16080;
{
double _n_dx_15768=((_n_x_15763+0.5)-_n_cx_15767);
double _n_dy_15769=(_n_y_15764-_n_top_15761);
if((d::truth(((std::pow((_n_dx_15768/1.7),2.0)+std::pow((_n_dy_15769/2.2),2.0))<=1.0))&&d::truth((_n_dy_15769<0.0)))){d::check_cancel();(void)(((_n_on_15765=true),(_n_lit_15766=(d::truth((_n_dx_15768<(-d::number(0.5))))?0.6:0.0))));
}
if(((d::truth((std::fabs(_n_dx_15768)<0.5))&&d::truth((_n_dy_15769<(-d::number(2.2)))))&&d::truth((_n_dy_15769>(-d::number(3.2)))))){d::check_cancel();(void)(((_n_on_15765=true),(_n_lit_15766=0.3)));
}

}
}
if(d::truth(_n_on_15765)){d::check_cancel();(void)(([&](){auto _n_argument_16081=_n_x_15763;auto _n_argument_16082=_n_r_15762;auto _n_argument_16083=this->_n_fortCol_15626(_n_lit_15766);auto _n_argument_16084=(_n_HILL_15593+0.04);auto _n_argument_16085=0.04;return this->_n_put_15622(_n_argument_16081,_n_argument_16082,_n_argument_16083,_n_argument_16084,std::optional<double>(_n_argument_16085));})());
}
}}
}}

}
this->_n_hands_15627=d::Array<std::shared_ptr<_n_Record_15628>,false>{};
{double _n_li_15808=0.0;
for(;d::truth((_n_li_15808<double(_n_LAYERS_15597.size())));(void)((_n_li_15808++))){d::check_cancel();std::shared_ptr<_n_Record_15598> _n_L_15809=d::at(_n_LAYERS_15597,_n_li_15808);
if(d::truth((_n_li_15808==4.0))){d::check_cancel();(void)(this->_n_hawaMahal_15631(108.0,93.0,0.8));
}
double _n_rp_15810=d::at(d::Array<double,false>{1.0,1.0,2.0,2.0,3.0},_n_li_15808);
double _n_x0_15811=((-d::number(2.0))-std::floor((_n_hash_15599(_n_li_15808,99.0)*6.0)));
{double _n_bi_15812=0.0;
for(;d::truth((_n_x0_15811<(_n_W_15583+2.0)));(void)((_n_bi_15812++))){d::check_cancel();double _n_s_15813=((_n_li_15808*1000.0)+_n_bi_15812);
double _n_w_15814=d::round((_n_L_15809->_p_wmin+(_n_hash_15599(_n_s_15813,1.0)*(_n_L_15809->_p_wmax-_n_L_15809->_p_wmin))));
double _n_h_15815=d::round((_n_L_15809->_p_hmin+(_n_hash_15599(_n_s_15813,2.0)*(_n_L_15809->_p_hmax-_n_L_15809->_p_hmin))));
double _n_top_15816=(_n_L_15809->_p_base-_n_h_15815);
double _n_pick_15817=_n_hash_15599(_n_s_15813,3.0);
auto&& _n_pc_15818=d::at(_n_PLASTER_15596,(d::truth((_n_pick_15817<0.6))?0.0:(d::truth((_n_pick_15817<0.85))?1.0:(d::truth((_n_pick_15817<0.95))?2.0:3.0))));
double _n_tone_15819=(0.92+(0.12*_n_hash_15599(_n_s_15813,5.0)));
auto&& _n_roof_15820=std::array<double,3>{(_n_mix_15604(d::at(_n_pc_15818,0.0),1.0,0.3)*_n_tone_15819),(_n_mix_15604(d::at(_n_pc_15818,1.0),0.84,0.3)*_n_tone_15819),(_n_mix_15604(d::at(_n_pc_15818,2.0),0.72,0.3)*_n_tone_15819)};
auto&& _n_face_15821=std::array<double,3>{(d::at(_n_pc_15818,0.0)*_n_tone_15819),(d::at(_n_pc_15818,1.0)*_n_tone_15819),(d::at(_n_pc_15818,2.0)*_n_tone_15819)};
bool _n_kangura_15822=([&]()->bool{auto _n_logical_16086=(_n_li_15808>=1.0);return d::truth(_n_logical_16086)?(_n_hash_15599(_n_s_15813,4.0)<0.65):_n_logical_16086;})();
double _n_px_15823=(d::truth((_n_li_15808<=2.0))?3.0:4.0);
double _n_py_15824=(d::truth((_n_li_15808<=2.0))?4.0:5.0);
double _n_ww_15825=(d::truth((_n_li_15808==4.0))?2.0:1.0);
double _n_wh_15826=(d::truth((_n_li_15808>=3.0))?3.0:2.0);
{double _n_r_15827=d::maximum({0.0,(_n_top_15816-(d::truth(_n_kangura_15822)?(d::truth((_n_li_15808==4.0))?2.0:1.0):0.0))});
for(;d::truth((_n_r_15827<_n_H_15584));(void)((_n_r_15827++))){d::check_cancel();{double _n_x_15828=d::maximum({0.0,_n_x0_15811});
for(;d::truth((_n_x_15828<d::minimum({_n_W_15583,(_n_x0_15811+_n_w_15814)})));(void)((_n_x_15828++))){d::check_cancel();double _n_lx_15829=(_n_x_15828-_n_x0_15811);
double _n_ly_15830=(_n_r_15827-_n_top_15816);
double _n_fy_15831=(_n_ly_15830-_n_rp_15810);
double _n_light_15832=0.72;
auto&& _n_c_15833=_n_face_15821;
if(((d::truth((_n_lx_15829>=(_n_w_15814-1.0)))&&d::truth((_n_li_15808>=1.0)))&&d::truth((_n_ly_15830>=0.0)))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15828,_n_r_15827,_n_face_15821,0.12,(_n_L_15809->_p_haze*0.5),_n_L_15809->_p_d));
continue;
}
if(d::truth((_n_ly_15830<0.0))){d::check_cancel();if(d::truth((d::truth((_n_li_15808==4.0))?(d::mod(_n_lx_15829,4.0)>=2.0):(d::truth((_n_li_15808==3.0))?(d::mod(_n_lx_15829,3.0)==2.0):(d::mod(_n_lx_15829,2.0)==1.0))))){d::check_cancel();continue;
}
(void)((_n_light_15832=1.1));
}else {d::check_cancel();if(d::truth((_n_fy_15831<0.0))){d::check_cancel();(void)(((_n_c_15833=_n_roof_15820),(_n_light_15832=((d::truth((_n_ly_15830==0.0))?1.05:0.85)-(0.05*_n_li_15808)))));
}else {d::check_cancel();if(d::truth((_n_fy_15831<1.0))){d::check_cancel();(void)((_n_light_15832=(d::truth((_n_li_15808<2.0))?0.8:1.25)));
}else {d::check_cancel();if(d::truth((_n_fy_15831<2.0))){d::check_cancel();(void)((_n_light_15832=(_n_light_15832*0.5)));
}else {d::check_cancel();if((d::truth((_n_lx_15829<1.0))&&d::truth((_n_li_15808>=2.0)))){d::check_cancel();(void)((_n_light_15832=(_n_light_15832*1.3)));
}else {d::check_cancel();if(d::truth((_n_lx_15829>=(_n_w_15814-2.0)))){d::check_cancel();(void)((_n_light_15832=(_n_light_15832*0.6)));
}
}
(void)((_n_light_15832=(_n_light_15832*(1.0-(0.8*_n_smooth_15603(2.0,9.0,_n_fy_15831))))));
if(((((((d::truth((_n_li_15808>=3.0))&&d::truth((_n_lx_15829>=1.0)))&&d::truth((_n_lx_15829<(_n_w_15814-1.0))))&&d::truth((_n_fy_15831>=3.0)))&&d::truth((d::mod((_n_lx_15829-1.0),_n_px_15823)<_n_ww_15825)))&&d::truth((d::mod((_n_fy_15831-3.0),_n_py_15824)<_n_wh_15826)))&&d::truth((([&](){auto _n_argument_16087=((_n_s_15813*7.0)+std::floor(((_n_lx_15829-1.0)/_n_px_15823)));auto _n_argument_16088=std::floor(((_n_fy_15831-3.0)/_n_py_15824));return _n_hash_15599(_n_argument_16087,_n_argument_16088);})()>0.5)))){d::check_cancel();(void)((_n_light_15832=(_n_light_15832*0.35)));
}
}
}
}
}
(void)(([&](){auto _n_argument_16089=_n_x_15828;auto _n_argument_16090=_n_r_15827;auto _n_argument_16091=_n_c_15833;auto _n_argument_16092=(_n_light_15832+(d::truth((_n_fy_15831<1.0))?(0.25*std::exp(((-d::number(std::fabs((_n_x_15828-d::at(_n_SUN_15586,0.0)))))/45.0))):0.0));auto _n_argument_16093=_n_L_15809->_p_haze;auto _n_argument_16094=_n_L_15809->_p_d;return this->_n_wall_15630(_n_argument_16089,_n_argument_16090,_n_argument_16091,_n_argument_16092,_n_argument_16093,_n_argument_16094);})());
if(d::truth((_n_fy_15831>=2.0))){d::check_cancel();(void)(([&](){auto&& _n_array_16095=this->_n_flo_15621;auto _n_index_16096=((_n_r_15827*_n_W_15583)+_n_x_15828);auto _n_value_16097=0.0;d::put(_n_array_16095,_n_index_16096,_n_value_16097);return _n_value_16097;})());
}
}}
}}
if(((d::truth((_n_li_15808>=2.0))&&d::truth((_n_w_15814>=7.0)))&&d::truth((_n_hash_15599(_n_s_15813,12.0)<0.4)))){d::check_cancel();double _n_mw_15834=(_n_li_15808+1.0);
double _n_mh_15835=_n_li_15808;
double _n_mx_15836=((_n_x0_15811+1.0)+std::floor((_n_hash_15599(_n_s_15813,14.0)*((_n_w_15814-_n_mw_15834)-2.0))));
{double _n_r_15837=(_n_top_15816-_n_mh_15835);
for(;d::truth((_n_r_15837<_n_top_15816));(void)((_n_r_15837++))){d::check_cancel();{double _n_x_15838=_n_mx_15836;
for(;d::truth((_n_x_15838<(_n_mx_15836+_n_mw_15834)));(void)((_n_x_15838++))){d::check_cancel();(void)(this->_n_wall_15630(_n_x_15838,_n_r_15837,_n_roof_15820,(d::truth((_n_r_15837==(_n_top_15816-_n_mh_15835)))?1.1:(d::truth((_n_x_15838==_n_mx_15836))?0.6:0.42)),_n_L_15809->_p_haze,_n_L_15809->_p_d));
}}
}}
}
if(((d::truth((_n_li_15808>=2.0))&&d::truth((_n_w_15814>=6.0)))&&d::truth((_n_hash_15599(_n_s_15813,13.0)<0.45)))){d::check_cancel();double _n_tw_15839=(d::truth((_n_li_15808==4.0))?3.0:2.0);
double _n_th_15840=(_n_li_15808-1.0);
double _n_tx_15841=((((_n_x0_15811+_n_w_15814)-_n_tw_15839)-1.0)-std::floor((_n_hash_15599(_n_s_15813,15.0)*3.0)));
{double _n_r_15842=(_n_top_15816-_n_th_15840);
for(;d::truth((_n_r_15842<_n_top_15816));(void)((_n_r_15842++))){d::check_cancel();{double _n_x_15843=_n_tx_15841;
for(;d::truth((_n_x_15843<(_n_tx_15841+_n_tw_15839)));(void)((_n_x_15843++))){d::check_cancel();(void)(this->_n_put_15622(_n_x_15843,_n_r_15842,std::array<double,3>{0.1,0.08,0.12},_n_L_15809->_p_d,std::optional<double>(0.02)));
}}
}}
}
if(((d::truth((_n_li_15808>=1.0))&&d::truth((_n_w_15814>=5.0)))&&d::truth((_n_hash_15599(_n_s_15813,6.0)<_n_L_15809->_p_chh)))){d::check_cancel();double _n_cw_15844=d::at(d::Array<double,false>{0.0,3.0,4.0,6.0,8.0},_n_li_15808);
double _n_cx_15845=(_n_x0_15811+(_n_w_15814*(0.25+(0.5*_n_hash_15599(_n_s_15813,7.0)))));
double _n_ch_15846=([&](){auto _n_argument_16098=1.0;auto _n_argument_16099=d::round((_n_cw_15844*0.75));return d::maximum({_n_argument_16098,_n_argument_16099});})();
double _n_rr_15847=((_n_cw_15844/2.0)+0.3);
double _n_slab_15848=((_n_top_15816-_n_ch_15846)-1.0);
{double _n_r_15849=std::floor(((_n_slab_15848-(_n_rr_15847*1.1))-2.0));
for(;d::truth((_n_r_15849<_n_top_15816));(void)((_n_r_15849++))){d::check_cancel();{double _n_x_15850=std::floor(((_n_cx_15845-_n_rr_15847)-1.0));
for(;d::truth((_n_x_15850<=((_n_cx_15845+_n_rr_15847)+1.0)));(void)((_n_x_15850++))){d::check_cancel();double _n_y_15851=(_n_r_15849+0.5);
double _n_dx_15852=((_n_x_15850+0.5)-_n_cx_15845);
double _n_light_15853=(-d::number(1.0));
if((d::truth((_n_y_15851>=(_n_top_15816-_n_ch_15846)))&&d::truth((std::fabs(_n_dx_15852)<=(_n_cw_15844/2.0))))){d::check_cancel();(void)((_n_light_15853=((d::truth((std::fabs(_n_dx_15852)>((_n_cw_15844/2.0)-1.0)))||d::truth((_n_cw_15844<3.0)))?0.75:0.12)));
}else {d::check_cancel();if(((d::truth((_n_y_15851>=_n_slab_15848))&&d::truth((_n_y_15851<(_n_top_15816-_n_ch_15846))))&&d::truth((std::fabs(_n_dx_15852)<=((_n_cw_15844/2.0)+0.7))))){d::check_cancel();(void)((_n_light_15853=1.15));
}else {d::check_cancel();if((d::truth((_n_y_15851<_n_slab_15848))&&d::truth(((std::pow((_n_dx_15852/_n_rr_15847),2.0)+std::pow(((_n_y_15851-_n_slab_15848)/(_n_rr_15847*0.95)),2.0))<=1.0)))){d::check_cancel();(void)((_n_light_15853=(0.6+(0.5*_n_clamp_15602((((-d::number(_n_dx_15852))/_n_rr_15847)+0.3))))));
}else {d::check_cancel();if(((d::truth((_n_y_15851<_n_slab_15848))&&d::truth((std::fabs(_n_dx_15852)<0.5)))&&d::truth((_n_y_15851>((_n_slab_15848-(_n_rr_15847*0.95))-1.1))))){d::check_cancel();(void)((_n_light_15853=0.9));
}
}
}
}
if((((d::truth((_n_light_15853<0.0))||d::truth((_n_x_15850<0.0)))||d::truth((_n_x_15850>=_n_W_15583)))||d::truth((_n_r_15849<0.0)))){d::check_cancel();continue;
}
auto&& _n_hz_15854=_n_hazeAt_15608((_n_x_15850+0.5));
auto&& _n_c_15855=std::array<double,3>{(1.0*_n_light_15853),(0.84*_n_light_15853),(0.72*_n_light_15853)};
(void)(([&](){auto _n_argument_16100=_n_x_15850;auto _n_argument_16101=_n_r_15849;auto _n_argument_16102=d::Array<double,false>{_n_mix_15604(d::at(_n_c_15855,0.0),d::at(_n_hz_15854,0.0),_n_L_15809->_p_haze),_n_mix_15604(d::at(_n_c_15855,1.0),d::at(_n_hz_15854,1.0),_n_L_15809->_p_haze),_n_mix_15604(d::at(_n_c_15855,2.0),d::at(_n_hz_15854,2.0),_n_L_15809->_p_haze)};auto _n_argument_16103=_n_L_15809->_p_d;auto _n_argument_16104=0.04;return this->_n_put_15622(_n_argument_16100,_n_argument_16101,d::fixedArray<double,3>(_n_argument_16102),_n_argument_16103,std::optional<double>(_n_argument_16104));})());
}}
}}
}
if((d::truth((_n_L_15809->_p_size>=2.0))&&d::truth((_n_w_15814>=5.0)))){d::check_cancel();double _n_n_15856=((d::truth((_n_li_15808==4.0))&&d::truth((_n_w_15814>20.0)))?2.0:1.0);
{double _n_j_15857=0.0;
for(;d::truth((_n_j_15857<_n_n_15856));(void)((_n_j_15857++))){d::check_cancel();if(d::truth((_n_hash_15599(_n_s_15813,(40.0+_n_j_15857))>_n_L_15809->_p_fig))){d::check_cancel();continue;
}
double _n_fx_15858=d::round(((_n_x0_15811+2.0)+(((_n_j_15857+_n_hash_15599(_n_s_15813,(42.0+_n_j_15857)))/_n_n_15856)*(_n_w_15814-4.0))));
if((d::truth((_n_fx_15858<3.0))||d::truth((_n_fx_15858>(_n_W_15583-3.0))))){d::check_cancel();continue;
}
(void)(this->_n_drawFigure_15629(_n_fx_15858,(_n_top_15816+_n_rp_15810),_n_L_15809->_p_size,((_n_s_15813*3.0)+_n_j_15857),_n_L_15809->_p_d));
}}
}
(void)((_n_x0_15811=(_n_x0_15811+_n_w_15814)));
}}
}}
this->_n_kites_15632=d::Array<std::shared_ptr<_n_Record_15633>,false>{};
this->_n_HERO_15636=d::Array<std::array<double,6>,false>{std::array<double,6>{30.0,15.0,1.08,0.0,2.0,2.0},std::array<double,6>{152.0,12.0,0.98,3.0,9.0,1.0},std::array<double,6>{96.0,28.0,0.8,5.0,2.0,0.0},std::array<double,6>{182.0,40.0,0.86,6.0,9.0,5.0},std::array<double,6>{74.0,8.0,0.72,2.0,8.0,3.0},std::array<double,6>{124.0,34.0,0.62,1.0,4.0,1.0}};
(void)(d::forEach(this->_n_HERO_15636,[&]( std::array<double,6> _a0,double _a1) mutable ->void{auto _n_binding_16105=_a0;
double _n_x_15871=d::at(_n_binding_16105,0.0);
double _n_y_15872=d::at(_n_binding_16105,1.0);
double _n_z_15873=d::at(_n_binding_16105,2.0);
double _n_a_15874=d::at(_n_binding_16105,3.0);
double _n_b_15875=d::at(_n_binding_16105,4.0);
double _n_design_15876=d::at(_n_binding_16105,5.0);
double _n_i_15877=_a1;
{
std::shared_ptr<_n_Record_15633> _n_k_15878=this->_n_makeKite_15634((900.0+_n_i_15877),_n_x_15871,_n_y_15872,_n_z_15873);
(void)(((((_n_k_15878->_p_A=d::at(_n_PAPER_15594,_n_a_15874)),(_n_k_15878->_p_B=d::at(_n_PAPER_15594,_n_b_15875))),(_n_k_15878->_p_design=_n_design_15876)),(_n_k_15878->_p_dive=(d::truth((_n_i_15877==2.0))?1.0:0.0))));
(void)(this->_n_kites_15632.push(_n_k_15878));

}
}));
(void)(d::forEach(this->_n_hands_15627,[&]( std::shared_ptr<_n_Record_15628> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_15628> _n_hd_15879=_a0;
double _n_i_15880=_a1;
{
double _n_z_15881=((0.2+(0.55*_n_hd_15879->_p_d))+((_n_hash_15599(_n_i_15880,51.0)-0.5)*0.2));
double _n_alt_15882=(14.0+(_n_hash_15599(_n_i_15880,52.0)*46.0));
double _n_x_15883=(_n_hd_15879->_p_x-((6.0+(_n_hash_15599(_n_i_15880,53.0)*34.0))*(0.5+_n_z_15881)));
double _n_y_15884=d::minimum({(_n_hd_15879->_p_y-10.0),((_n_HZ_15585-2.0)-(_n_alt_15882*(0.3+(0.75*_n_z_15881))))});
if(d::truth((!d::truth(this->_n_room_15635(_n_x_15883,_n_y_15884,_n_z_15881))))){d::check_cancel();return;
}
std::shared_ptr<_n_Record_15633> _n_k_15885=this->_n_makeKite_15634((500.0+_n_i_15880),_n_x_15883,_n_y_15884,_n_z_15881);
(void)((_n_k_15885->_p_hand=d::Array<double,false>{_n_hd_15879->_p_x,_n_hd_15879->_p_y,_n_hd_15879->_p_d}));
(void)(this->_n_kites_15632.push(_n_k_15885));

}
}));
{double _n_i_15886=0.0;
for(;(d::truth((_n_i_15886<2000.0))&&d::truth((double(this->_n_kites_15632.size())<66.0)));(void)((_n_i_15886++))){d::check_cancel();double _n_z_15887=(0.04+(0.7*([&](){auto _n_argument_16106=_n_hash_15599(_n_i_15886,61.0);auto _n_argument_16107=1.6;return std::pow(_n_argument_16106,_n_argument_16107);})()));
double _n_alt_15888=(6.0+(_n_hash_15599(_n_i_15886,62.0)*72.0));
double _n_y_15889=((_n_HZ_15585-3.0)-(_n_alt_15888*(0.3+(0.8*_n_z_15887))));
double _n_x_15890=(2.0+(_n_hash_15599(_n_i_15886,63.0)*196.0));
if(d::truth(this->_n_room_15635(_n_x_15890,_n_y_15889,_n_z_15887))){d::check_cancel();(void)(this->_n_kites_15632.push(this->_n_makeKite_15634(_n_i_15886,_n_x_15890,_n_y_15889,_n_z_15887)));
}
}}
{double _n_i_15891=0.0;
for(;d::truth((_n_i_15891<6.0));(void)((_n_i_15891++))){d::check_cancel();std::shared_ptr<_n_Record_15633> _n_k_15892=([&](){auto _n_argument_16108=(1200.0+_n_i_15891);auto _n_argument_16109=((15.0+(_n_i_15891*33.0))+(_n_hash_15599(_n_i_15891,71.0)*14.0));auto _n_argument_16110=0.0;auto _n_argument_16111=(0.45+(0.35*_n_hash_15599(_n_i_15891,72.0)));return this->_n_makeKite_15634(_n_argument_16108,_n_argument_16109,_n_argument_16110,_n_argument_16111);})();
(void)(((((_n_k_15892->_p_cut=(1.2+(_n_hash_15599(_n_i_15891,73.0)*1.6))),(_n_k_15892->_p_period=(13.0+(_n_hash_15599(_n_i_15891,74.0)*7.0)))),(_n_k_15892->_p_drop=_n_hash_15599(_n_i_15891,75.0))),(_n_k_15892->_p_tail=14.0)));
(void)(this->_n_kites_15632.push(_n_k_15892));
}}
(void)(this->_n_kites_15632.sort([=]( std::shared_ptr<_n_Record_15633> _a0,std::shared_ptr<_n_Record_15633> _a1) mutable ->double{std::shared_ptr<_n_Record_15633> _n_a_15893=_a0;
std::shared_ptr<_n_Record_15633> _n_b_15894=_a1;
return (_n_a_15893->_p_z-_n_b_15894->_p_z);}));
this->_n_lit_15637=d::map(this->_n_kites_15632,[&]( std::shared_ptr<_n_Record_15633> _a0) mutable ->d::Array<std::array<double,3>,false>{std::shared_ptr<_n_Record_15633> _n_K_15895=_a0;
{
double _n_d_15896=d::hypot(std::initializer_list<double>{(_n_K_15895->_p_x-d::at(_n_SUN_15586,0.0)),(_n_K_15895->_p_y-d::at(_n_SUN_15586,1.0))});
double _n_g_15897=std::exp(((-d::number(_n_d_15896))/22.0));
auto _n_f_15898=[&]( std::array<double,3> _a0) mutable ->std::array<double,3>{auto&& _n_c_15899=_a0;
return std::array<double,3>{((d::at(_n_c_15899,0.0)*(0.8+(0.3*_n_g_15897)))+(0.3*_n_g_15897)),((d::at(_n_c_15899,1.0)*(0.8+(0.3*_n_g_15897)))+(0.24*_n_g_15897)),((d::at(_n_c_15899,2.0)*(0.8+(0.3*_n_g_15897)))+(0.1*_n_g_15897))};};
return d::Array<std::array<double,3>,false>{_n_f_15898(_n_K_15895->_p_A),_n_f_15898(_n_K_15895->_p_B)};

}
});
this->_n_BIRDS_15638=d::Array<std::shared_ptr<_n_Record_15639>,false>(d::from(12.0,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_15639>{double _n_i_15901=_a1;
return ([&](){auto _n_object_16114=std::make_shared<_n_Record_15639>();_n_object_16114->_p_x=((_n_i_15901*5.0)+(_n_hash_15599(_n_i_15901,81.0)*6.0));_n_object_16114->_p_y=((33.0+(_n_hash_15599(_n_i_15901,82.0)*9.0))+(d::mod(_n_i_15901,3.0)*2.0));_n_object_16114->_p_p=(_n_hash_15599(_n_i_15901,84.0)*6.28);_n_object_16114->_p_circle=(_n_i_15901>=9.0);_n_object_16114->_p_r=(8.0+(_n_hash_15599(_n_i_15901,85.0)*9.0));return _n_object_16114;})();}));
this->_n_R_15640=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_G_15641=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_B_15642=d::Array<float,true>(size_t(this->_n_N_15610));
this->_n_F_15643=d::Array<float,true>(size_t(this->_n_N_15610));
_render=[=]( double _a0,std::shared_ptr<_n_Record_16009> _a1) mutable ->d::String{double _n_t_15967=_a0;
auto _n_binding_16117=(d::present(_a1)?_a1:([&](){auto _n_object_16116=std::make_shared<_n_Record_16009>();return _n_object_16116;})());
std::optional<d::Array<uint8_t,true>> _n_color_15968=_n_binding_16117->_p_color;
{
(void)((((this->_n_R_15640.set(this->_n_bgR_15614),this->_n_G_15641.set(this->_n_bgG_15615)),this->_n_B_15642.set(this->_n_bgB_15616)),this->_n_F_15643.set(this->_n_flo_15621)));
bool _n_bird_15969=false;
{double _n_i_15970=0.0;
for(;d::truth((_n_i_15970<double(this->_n_kites_15632.size())));(void)((_n_i_15970++))){d::check_cancel();std::shared_ptr<_n_Record_15633> _n_K_15971=d::at(this->_n_kites_15632,_n_i_15970);
if((d::truth((!d::truth(_n_bird_15969)))&&d::truth((_n_K_15971->_p_z>0.6)))){d::check_cancel();(void)((_n_bird_15969=true));
for(auto &&_n_item_16118:this->_n_BIRDS_15638){d::check_cancel();std::shared_ptr<_n_Record_15639> _n_b_15972=_n_item_16118;
{
double _n_bx_15973{};
double _n_by_15974{};
d::Array<d::Array<double,false>,false> _n_cells_15975{};
if(d::truth(_n_b_15972->_p_circle)){d::check_cancel();double _n_a_15976=((_n_t_15967*0.3)+_n_b_15972->_p_p);
(void)((_n_bx_15973=(152.0+((_n_b_15972->_p_r*1.8)*std::cos(_n_a_15976)))));
(void)((_n_by_15974=(24.0+((_n_b_15972->_p_r*0.5)*std::sin(_n_a_15976)))));
double _n_tip_15977=(d::truth((std::sin(_n_a_15976)>0.0))?1.0:0.0);
(void)((_n_cells_15975=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(2.0)),0.0},d::Array<double,false>{2.0,0.0},d::Array<double,false>{(-d::number(3.0)),_n_tip_15977},d::Array<double,false>{3.0,(1.0-_n_tip_15977)},d::Array<double,false>{0.0,1.0}}));
}else {d::check_cancel();(void)((_n_bx_15973=(d::mod(((_n_b_15972->_p_x+75.0)+(_n_t_15967*4.5)),280.0)-50.0)));
(void)((_n_by_15974=(_n_b_15972->_p_y+(1.2*std::sin(((_n_t_15967*0.8)+_n_b_15972->_p_p))))));
double _n_flap_15978=std::sin(((_n_t_15967*10.0)+_n_b_15972->_p_p));
double _n_wing_15979=(d::truth((_n_flap_15978>0.3))?(-d::number(1.0)):(d::truth((_n_flap_15978<(-d::number(0.3))))?1.0:0.0));
(void)((_n_cells_15975=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(2.0)),_n_wing_15979},d::Array<double,false>{2.0,_n_wing_15979}}));
}
double _n_ix_15980=std::floor(_n_bx_15973);
double _n_iy_15981=std::floor(_n_by_15974);
for(auto &&_n_item_16119:_n_cells_15975){d::check_cancel();auto _n_binding_16120=_n_item_16119;
double _n_ox_15982=d::at(_n_binding_16120,0.0);
double _n_oy_15983=d::at(_n_binding_16120,1.0);
{
double _n_x_15984=(_n_ix_15980+_n_ox_15982);
double _n_y_15985=(_n_iy_15981+_n_oy_15983);
if((((d::truth((_n_x_15984<0.0))||d::truth((_n_x_15984>=_n_W_15583)))||d::truth((_n_y_15985<0.0)))||d::truth((_n_y_15985>=_n_H_15584)))){d::check_cancel();continue;
}
double _n_k_15986=((_n_y_15985*_n_W_15583)+_n_x_15984);
if(d::truth((d::at(this->_n_dep_15620,_n_k_15986)>=0.6))){d::check_cancel();continue;
}
(void)(this->_n_blend_15644(_n_k_15986,0.07,0.05,0.1,1.0));
(void)(([&](){auto&& _n_array_16121=this->_n_F_15643;auto _n_index_16122=_n_k_15986;auto _n_value_16123=0.0;d::put(_n_array_16121,_n_index_16122,_n_value_16123);return _n_value_16123;})());

}
}

}
}
}
double _n_cx_15987{};
double _n_cy_15988{};
double _n_ang_15989{};
double _n_fl_15990=1.0;
if(d::truth(_n_K_15971->_p_cut)){d::check_cancel();double _n_ph_15991=d::mod(((_n_t_15967/_n_K_15971->_p_period)+_n_K_15971->_p_drop),1.0);
(void)((_n_cx_15987=((_n_K_15971->_p_x+(10.0*std::sin(((_n_ph_15991*7.0)+_n_K_15971->_p_p1))))-(_n_ph_15991*26.0))));
(void)((_n_cy_15988=((-d::number(14.0))+(_n_ph_15991*96.0))));
(void)((_n_ang_15989=((_n_t_15967*_n_K_15971->_p_cut)+_n_K_15971->_p_p2)));
(void)((_n_fl_15990=([&](){auto _n_argument_16124=0.22;auto _n_argument_16125=std::fabs(std::cos((((_n_t_15967*_n_K_15971->_p_cut)*0.7)+_n_K_15971->_p_p1)));return d::maximum({_n_argument_16124,_n_argument_16125});})()));
(void)(([&](){auto _n_argument_16126=_n_cx_15987;auto _n_argument_16127=_n_cy_15988;auto _n_argument_16128=_n_K_15971->_p_z;auto _n_argument_16129=((_n_cx_15987+9.0)+(3.0*std::sin(((_n_t_15967*3.0)+_n_K_15971->_p_p1))));auto _n_argument_16130=(_n_cy_15988-14.0);auto _n_argument_16131=_n_K_15971->_p_z;auto _n_argument_16132=true;auto _n_argument_16133=_n_K_15971->_p_z;return this->_n_string_15645(_n_argument_16126,_n_argument_16127,_n_argument_16128,_n_argument_16129,_n_argument_16130,_n_argument_16131,_n_argument_16132,_n_argument_16133);})());
}else {d::check_cancel();double _n_sw_15992=std::sin(((_n_t_15967*_n_K_15971->_p_w1)+_n_K_15971->_p_p1));
double _n_sw2_15993=std::sin(((_n_t_15967*_n_K_15971->_p_w2)+_n_K_15971->_p_p2));
(void)((_n_cx_15987=(_n_K_15971->_p_x+(_n_K_15971->_p_amp*_n_sw_15992))));
(void)((_n_cy_15988=(_n_K_15971->_p_y+((0.6*_n_K_15971->_p_amp)*_n_sw2_15993))));
(void)((_n_ang_15989=(_n_K_15971->_p_tilt+(0.2*std::sin(((((_n_t_15967*_n_K_15971->_p_w1)*1.3)+_n_K_15971->_p_p1)+1.0))))));
if(d::truth(_n_K_15971->_p_dive)){d::check_cancel();double _n_a_15994=((_n_t_15967*0.9)+_n_K_15971->_p_p2);
(void)((_n_cx_15987=(_n_cx_15987+((2.0+(4.0*_n_K_15971->_p_z))*std::sin(_n_a_15994)))));
(void)((_n_cy_15988=(_n_cy_15988+((1.2+(2.5*_n_K_15971->_p_z))*std::sin((2.0*_n_a_15994))))));
(void)((_n_ang_15989=(_n_ang_15989+(0.45*std::cos(_n_a_15994)))));
}
if(d::truth(_n_K_15971->_p_hand)){d::check_cancel();(void)(this->_n_string_15645(d::at(d::read(_n_K_15971->_p_hand),0.0),d::at(d::read(_n_K_15971->_p_hand),1.0),d::at(d::read(_n_K_15971->_p_hand),2.0),_n_cx_15987,_n_cy_15988,_n_K_15971->_p_z,false,_n_K_15971->_p_z));
}else {d::check_cancel();if(d::truth(_n_K_15971->_p_tail)){d::check_cancel();(void)(this->_n_string_15645(_n_cx_15987,_n_cy_15988,_n_K_15971->_p_z,(_n_cx_15987+(_n_K_15971->_p_tail*0.42)),(_n_cy_15988+_n_K_15971->_p_tail),_n_K_15971->_p_z,true,_n_K_15971->_p_z));
}
}
}
(void)(this->_n_drawKite_15646(_n_K_15971,d::at(this->_n_lit_15637,_n_i_15970),_n_cx_15987,_n_cy_15988,_n_ang_15989,_n_fl_15990,_n_t_15967));
}}
{double _n_r_15995=0.0;
for(;d::truth((_n_r_15995<_n_H_15584));(void)((_n_r_15995++))){d::check_cancel();{double _n_x_15996=0.0;
for(;d::truth((_n_x_15996<_n_W_15583));(void)((_n_x_15996++))){d::check_cancel();double _n_k_15997=((_n_r_15995*_n_W_15583)+_n_x_15996);
double _n_cr_15998=d::at(this->_n_R_15640,_n_k_15997);
double _n_cg_15999=d::at(this->_n_G_15641,_n_k_15997);
double _n_cbl_16000=d::at(this->_n_B_15642,_n_k_15997);
double _n_floor_16001=d::at(this->_n_F_15643,_n_k_15997);
double _n_peak_16002=d::maximum({_n_cr_15998,_n_cg_15999,_n_cbl_16000,0.0001});
double _n_level_16003=_n_clamp_15602((_n_floor_16001+(((1.0-_n_floor_16001)*std::pow(_n_peak_16002,0.85))*0.95)));
double _n_step_16004=([&](){auto _n_argument_16134=0.0;auto _n_argument_16135=([&](){auto _n_argument_16136=3.0;auto _n_argument_16137=d::round(((_n_level_16003*3.0)+d::at(_n_BAYER_15590,((double(d::i32(_n_r_15995)&d::i32(3.0))*4.0)+double(d::i32(_n_x_15996)&d::i32(3.0))))));return d::minimum({_n_argument_16136,_n_argument_16137});})();return d::maximum({_n_argument_16134,_n_argument_16135});})();
(void)(([&](){auto&& _n_array_16138=this->_n_out_15611;auto _n_index_16139=_n_k_15997;auto _n_value_16140=d::at(_n_DOTS_15588,_n_step_16004);d::put(_n_array_16138,_n_index_16139,_n_value_16140);return _n_value_16140;})());
if(d::truth(_n_color_15968)){d::check_cancel();double _n_want_16005=(d::truth(_n_step_16004)?d::minimum({1.0,((_n_level_16003+0.06)/d::at(_n_COVER_15589,_n_step_16004))}):0.0);
double _n_s_16006=((0.3+(0.7*_n_want_16005))/_n_peak_16002);
(void)(([&](){auto&& _n_array_16141=d::read(_n_color_15968);auto _n_index_16142=_n_k_15997;auto _n_value_16143=([&](){auto _n_argument_16144=_n_clamp_15602((_n_cr_15998*_n_s_16006));auto _n_argument_16145=_n_clamp_15602((_n_cg_15999*_n_s_16006));auto _n_argument_16146=_n_clamp_15602((_n_cbl_16000*_n_s_16006));return this->_n_nearest_15613(_n_argument_16144,_n_argument_16145,_n_argument_16146);})();d::put(_n_array_16141,_n_index_16142,_n_value_16143);return _n_value_16143;})());
}
}}
}}
d::Array<d::String,false> _n_lines_16007=d::Array<d::String,false>{};
{double _n_r_16008=0.0;
for(;d::truth((_n_r_16008<_n_H_15584));(void)((_n_r_16008++))){d::check_cancel();(void)(_n_lines_16007.push(d::join(this->_n_out_15611.slice((_n_r_16008*_n_W_15583),((_n_r_16008+1.0)*_n_W_15583)),d::String(u""))));
}}
return d::join(_n_lines_16007,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("kite-festival").cols)*ascii::catalog_meta("kite-festival").rows);auto _env=std::make_shared<_n_Record_16009>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &kite_festival_meta(){return catalog_meta("kite-festival");}
std::unique_ptr<Piece> make_kite_festival(const AsciiPieceOptions &o){return std::make_unique<Native_kite_festival>(o);}
}
