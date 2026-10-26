// Direct, statically typed C++ from src/pieces/kite-festival.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_15581;
struct _n_Record_15597;
struct _n_Record_15627;
struct _n_Record_15632;
struct _n_Record_15638;
struct _n_Record_16008;
struct _n_Record_16186;
struct _n_Record_15581{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_15581> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15581>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_15597{
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
static std::shared_ptr<_n_Record_15597> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15597>();out->_p_base=d::decode<double>(j["base"]);out->_p_hmin=d::decode<double>(j["hmin"]);out->_p_hmax=d::decode<double>(j["hmax"]);out->_p_wmin=d::decode<double>(j["wmin"]);out->_p_wmax=d::decode<double>(j["wmax"]);out->_p_haze=d::decode<double>(j["haze"]);out->_p_d=d::decode<double>(j["d"]);out->_p_chh=d::decode<double>(j["chh"]);out->_p_fig=d::decode<double>(j["fig"]);out->_p_size=d::decode<double>(j["size"]);return out;}
};
struct _n_Record_15627{
double _p_x{};
double _p_y{};
double _p_d{};
static std::shared_ptr<_n_Record_15627> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15627>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_d=d::decode<double>(j["d"]);return out;}
};
struct _n_Record_15632{
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
static std::shared_ptr<_n_Record_15632> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15632>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_z=d::decode<double>(j["z"]);out->_p_h=d::decode<double>(j["h"]);out->_p_w=d::decode<double>(j["w"]);out->_p_A=d::decode<std::array<double,3>>(j["A"]);out->_p_B=d::decode<std::array<double,3>>(j["B"]);out->_p_design=d::decode<double>(j["design"]);out->_p_tilt=d::decode<double>(j["tilt"]);out->_p_amp=d::decode<double>(j["amp"]);out->_p_w1=d::decode<double>(j["w1"]);out->_p_w2=d::decode<double>(j["w2"]);out->_p_p1=d::decode<double>(j["p1"]);out->_p_p2=d::decode<double>(j["p2"]);out->_p_dive=d::decode<double>(j["dive"]);out->_p_cut=d::decode<double>(j["cut"]);out->_p_period=d::decode<double>(j["period"]);out->_p_drop=d::decode<double>(j["drop"]);out->_p_hand=d::decode<std::optional<d::Array<double,false>>>(j["hand"]);out->_p_tail=d::decode<double>(j["tail"]);return out;}
};
struct _n_Record_15638{
double _p_x{};
double _p_y{};
double _p_p{};
bool _p_circle{};
double _p_r{};
static std::shared_ptr<_n_Record_15638> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15638>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_p=d::decode<double>(j["p"]);out->_p_circle=d::decode<bool>(j["circle"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_16008{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_16008> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16008>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_16186{
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
static std::shared_ptr<_n_Record_16186> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16186>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_z=d::decode<double>(j["z"]);out->_p_h=d::decode<double>(j["h"]);out->_p_w=d::decode<double>(j["w"]);out->_p_A=d::decode<std::array<double,3>>(j["A"]);out->_p_B=d::decode<std::array<double,3>>(j["B"]);out->_p_design=d::decode<double>(j["design"]);out->_p_tilt=d::decode<double>(j["tilt"]);out->_p_amp=d::decode<double>(j["amp"]);out->_p_w1=d::decode<double>(j["w1"]);out->_p_w2=d::decode<double>(j["w2"]);out->_p_p1=d::decode<double>(j["p1"]);out->_p_p2=d::decode<double>(j["p2"]);out->_p_dive=d::decode<double>(j["dive"]);out->_p_cut=d::decode<double>(j["cut"]);out->_p_period=d::decode<double>(j["period"]);out->_p_drop=d::decode<double>(j["drop"]);out->_p_hand=d::decode<d::Nil>(j["hand"]);out->_p_tail=d::decode<double>(j["tail"]);return out;}
};
double _n_hash_15598(double _a0,double _a1);
double _n_noise_15599(double _a0,double _a1,double _a2);
double _n_fbm_15600(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_15601(double _a0);
double _n_smooth_15602(double _a0,double _a1,double _a2);
double _n_mix_15603(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_15604(d::String _a0);
std::array<double,3> _n_skyAt_15606(double _a0,double _a1);
std::array<double,3> _n_hazeAt_15607(double _a0);
std::shared_ptr<_n_Record_15581> _n_meta_15580=[](){return ([&](){auto _n_object_16011=std::make_shared<_n_Record_15581>();_n_object_16011->_p_name=d::String(u"kite festival");_n_object_16011->_p_category=d::String(u"scenes");_n_object_16011->_p_note=d::String(u"sankranti kites crowding a golden sky over the pink roofs of jaipur");_n_object_16011->_p_cols=200.0;_n_object_16011->_p_rows=100.0;_n_object_16011->_p_cell=1.0;_n_object_16011->_p_fps=15.0;_n_object_16011->_p_ground=d::String(u"#1a0f17");_n_object_16011->_p_palette=d::Array<d::String,false>{d::String(u"#6a5af0"),d::String(u"#8a78d0"),d::String(u"#c08cc8"),d::String(u"#f0a0c0"),d::String(u"#ffab7a"),d::String(u"#ffc25e"),d::String(u"#ffdc8c"),d::String(u"#fff6dc"),d::String(u"#9c7ae0"),d::String(u"#7a62c4"),d::String(u"#b89ae8"),d::String(u"#ff5f58"),d::String(u"#ff8478"),d::String(u"#ffaa9c"),d::String(u"#ffd6c4"),d::String(u"#ff2f7d"),d::String(u"#ff8fc4"),d::String(u"#ffd400"),d::String(u"#22c55e"),d::String(u"#a3e635"),d::String(u"#e8102a"),d::String(u"#1f6fff"),d::String(u"#5ec8ff"),d::String(u"#8b3dff"),d::String(u"#ffffff"),d::String(u"#ff7a00")};return _n_object_16011;})();}();
const double _n_W_15582=[](){return 200.0;}();
const double _n_H_15583=[](){return 100.0;}();
const double _n_HZ_15584=[](){return 62.0;}();
d::Array<double,false> _n_SUN_15585=[](){return d::Array<double,false>{56.0,50.0};}();
const double _n_SUN_R_15586=[](){return 6.5;}();
const d::String _n_DOTS_15587=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_15588=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_15589=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_15646=_a0;
return ((_n_v_15646/16.0)-0.47);});}();
const double _n_SKY_15590=[](){return (-d::number(1.0));}();
const double _n_BACK_15591=[](){return (-d::number(0.6));}();
const double _n_HILL_15592=[](){return (-d::number(0.3));}();
d::Array<std::array<double,3>,false> _n_PAPER_15593=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{1.0,0.17,0.5},std::array<double,3>{1.0,0.55,0.78},std::array<double,3>{1.0,0.84,0.02},std::array<double,3>{0.12,0.78,0.38},std::array<double,3>{0.62,0.9,0.2},std::array<double,3>{0.92,0.06,0.16},std::array<double,3>{0.12,0.43,1.0},std::array<double,3>{0.36,0.78,1.0},std::array<double,3>{0.56,0.25,1.0},std::array<double,3>{1.0,1.0,1.0},std::array<double,3>{1.0,0.5,0.02}};}();
d::Array<std::array<double,3>,false> _n_CLOTH_15594=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{1.0,1.0,0.95},std::array<double,3>{1.0,0.82,0.1},std::array<double,3>{0.95,0.12,0.2},std::array<double,3>{1.0,0.3,0.6},std::array<double,3>{0.2,0.5,1.0},std::array<double,3>{1.0,0.55,0.1},std::array<double,3>{0.2,0.75,0.4}};}();
d::Array<std::array<double,3>,false> _n_PLASTER_15595=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{0.96,0.57,0.49},std::array<double,3>{0.87,0.45,0.37},std::array<double,3>{0.95,0.66,0.43},std::array<double,3>{0.97,0.85,0.75}};}();
d::Array<std::shared_ptr<_n_Record_15597>,false> _n_LAYERS_15596=[](){return d::Array<std::shared_ptr<_n_Record_15597>,false>{([&](){auto _n_object_16014=std::make_shared<_n_Record_15597>();_n_object_16014->_p_base=66.0;_n_object_16014->_p_hmin=1.0;_n_object_16014->_p_hmax=4.0;_n_object_16014->_p_wmin=3.0;_n_object_16014->_p_wmax=7.0;_n_object_16014->_p_haze=0.58;_n_object_16014->_p_d=0.1;_n_object_16014->_p_chh=0.14;_n_object_16014->_p_fig=0.0;_n_object_16014->_p_size=0.0;return _n_object_16014;})(),([&](){auto _n_object_16016=std::make_shared<_n_Record_15597>();_n_object_16016->_p_base=72.0;_n_object_16016->_p_hmin=2.0;_n_object_16016->_p_hmax=6.0;_n_object_16016->_p_wmin=5.0;_n_object_16016->_p_wmax=10.0;_n_object_16016->_p_haze=0.42;_n_object_16016->_p_d=0.3;_n_object_16016->_p_chh=0.25;_n_object_16016->_p_fig=0.0;_n_object_16016->_p_size=1.0;return _n_object_16016;})(),([&](){auto _n_object_16018=std::make_shared<_n_Record_15597>();_n_object_16018->_p_base=79.0;_n_object_16018->_p_hmin=2.0;_n_object_16018->_p_hmax=7.0;_n_object_16018->_p_wmin=7.0;_n_object_16018->_p_wmax=14.0;_n_object_16018->_p_haze=0.27;_n_object_16018->_p_d=0.5;_n_object_16018->_p_chh=0.32;_n_object_16018->_p_fig=0.12;_n_object_16018->_p_size=2.0;return _n_object_16018;})(),([&](){auto _n_object_16020=std::make_shared<_n_Record_15597>();_n_object_16020->_p_base=89.0;_n_object_16020->_p_hmin=3.0;_n_object_16020->_p_hmax=10.0;_n_object_16020->_p_wmin=10.0;_n_object_16020->_p_wmax=19.0;_n_object_16020->_p_haze=0.13;_n_object_16020->_p_d=0.7;_n_object_16020->_p_chh=0.35;_n_object_16020->_p_fig=0.22;_n_object_16020->_p_size=3.0;return _n_object_16020;})(),([&](){auto _n_object_16022=std::make_shared<_n_Record_15597>();_n_object_16022->_p_base=101.0;_n_object_16022->_p_hmin=6.0;_n_object_16022->_p_hmax=13.0;_n_object_16022->_p_wmin=16.0;_n_object_16022->_p_wmax=30.0;_n_object_16022->_p_haze=0.04;_n_object_16022->_p_d=0.9;_n_object_16022->_p_chh=0.3;_n_object_16022->_p_fig=0.4;_n_object_16022->_p_size=4.0;return _n_object_16022;})()};}();
d::Array<std::shared_ptr<std::tuple<double,std::array<double,3>>>,false> _n_STOPS_15605=[](){return d::Array<std::shared_ptr<std::tuple<double,std::array<double,3>>>,false>{std::make_shared<std::tuple<double,std::array<double,3>>>(0.0,std::array<double,3>{0.1,0.085,0.25}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.3,std::array<double,3>{0.22,0.18,0.42}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.55,std::array<double,3>{0.6,0.38,0.5}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.75,std::array<double,3>{0.97,0.62,0.4}),std::make_shared<std::tuple<double,std::array<double,3>>>(0.9,std::array<double,3>{1.0,0.76,0.38}),std::make_shared<std::tuple<double,std::array<double,3>>>(1.0,std::array<double,3>{1.0,0.86,0.52})};}();
double _n_hash_15598(double _a0,double _a1){double _n_x_15647=_a0;
double _n_y_15648=_a1;
{
double _n_h_15649=([&](){auto _n_left_16023=d::imul(double(d::i32(_n_x_15647)|d::i32(0.0)),374761393.0);auto _n_right_16024=d::imul(double(d::i32(_n_y_15648)|d::i32(0.0)),668265263.0);return (_n_left_16023+_n_right_16024);})();
(void)((_n_h_15649=d::imul(double(d::i32(_n_h_15649)^d::i32(double(d::u32(_n_h_15649)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_15649)^d::i32(double(d::u32(_n_h_15649)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_15599(double _a0,double _a1,double _a2){double _n_x_15650=_a0;
double _n_y_15651=_a1;
double _n_period_15652=_a2;
{
double _n_xi_15653=std::floor(_n_x_15650);
double _n_yi_15654=std::floor(_n_y_15651);
double _n_fx_15655=(_n_x_15650-_n_xi_15653);
double _n_fy_15656=(_n_y_15651-_n_yi_15654);
double _n_u_15657=((_n_fx_15655*_n_fx_15655)*(3.0-(2.0*_n_fx_15655)));
double _n_v_15658=((_n_fy_15656*_n_fy_15656)*(3.0-(2.0*_n_fy_15656)));
double _n_x0_15659=_n_xi_15653;
double _n_x1_15660=(_n_xi_15653+1.0);
if(d::truth(_n_period_15652)){d::check_cancel();(void)((_n_x0_15659=d::mod((d::mod(_n_xi_15653,_n_period_15652)+_n_period_15652),_n_period_15652)));
(void)((_n_x1_15660=d::mod((_n_x0_15659+1.0),_n_period_15652)));
}
double _n_a_15661=_n_hash_15598(_n_x0_15659,_n_yi_15654);
double _n_b_15662=_n_hash_15598(_n_x1_15660,_n_yi_15654);
double _n_c_15663=_n_hash_15598(_n_x0_15659,(_n_yi_15654+1.0));
double _n_d_15664=_n_hash_15598(_n_x1_15660,(_n_yi_15654+1.0));
return (((_n_a_15661+((_n_b_15662-_n_a_15661)*_n_u_15657))+((_n_c_15663-_n_a_15661)*_n_v_15658))+(((((_n_a_15661-_n_b_15662)-_n_c_15663)+_n_d_15664)*_n_u_15657)*_n_v_15658));

}
}

double _n_fbm_15600(double _a0,double _a1,double _a2,double _a3){double _n_x_15665=_a0;
double _n_y_15666=_a1;
double _n_octaves_15667=_a2;
double _n_period_15668=_a3;
{
double _n_s_15669=0.0;
double _n_n_15670=0.0;
double _n_amp_15671=0.5;
double _n_f_15672=1.0;
{double _n_i_15673=0.0;
for(;d::truth((_n_i_15673<_n_octaves_15667));(void)((_n_i_15673++))){d::check_cancel();(void)((_n_s_15669=(_n_s_15669+(_n_amp_15671*_n_noise_15599((_n_x_15665*_n_f_15672),(_n_y_15666*_n_f_15672),(_n_period_15668*_n_f_15672))))));
(void)((_n_n_15670=(_n_n_15670+_n_amp_15671)));
(void)((_n_amp_15671=(_n_amp_15671*0.5)));
(void)((_n_f_15672=(_n_f_15672*2.0)));
}}
return (_n_s_15669/_n_n_15670);

}
}

double _n_clamp_15601(double _a0){double _n_v_15674=_a0;
return (d::truth((_n_v_15674<0.0))?0.0:(d::truth((_n_v_15674>1.0))?1.0:_n_v_15674));}

double _n_smooth_15602(double _a0,double _a1,double _a2){double _n_a_15675=_a0;
double _n_b_15676=_a1;
double _n_v_15677=_a2;
{
double _n_k_15678=_n_clamp_15601(((_n_v_15677-_n_a_15675)/(_n_b_15676-_n_a_15675)));
return ((_n_k_15678*_n_k_15678)*(3.0-(2.0*_n_k_15678)));

}
}

double _n_mix_15603(double _a0,double _a1,double _a2){double _n_a_15679=_a0;
double _n_b_15680=_a1;
double _n_k_15681=_a2;
return (_n_a_15679+((_n_b_15680-_n_a_15679)*_n_k_15681));}

d::Array<double,false> _n_hex_15604(d::String _a0){d::String _n_s_15682=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_15683=_a0;
return (([&](){auto _n_argument_16025=d::slice(_n_s_15682,_n_i_15683,(_n_i_15683+2.0));auto _n_argument_16026=16.0;return d::parseInt(_n_argument_16025,_n_argument_16026);})()/255.0);});}

std::array<double,3> _n_skyAt_15606(double _a0,double _a1){double _n_x_15684=_a0;
double _n_y_15685=_a1;
{
double _n_v_15686=_n_clamp_15601((_n_y_15685/_n_HZ_15584));
double _n_i_15687=0.0;
while((d::truth((_n_i_15687<(double(_n_STOPS_15605.size())-2.0)))&&d::truth((_n_v_15686>std::get<0>(*d::at(_n_STOPS_15605,(_n_i_15687+1.0))))))){d::check_cancel();(void)((_n_i_15687++));
}
auto _n_binding_16027=d::at(_n_STOPS_15605,_n_i_15687);
double _n_v0_15688=std::get<0>(*_n_binding_16027);
auto&& _n_a_15689=std::get<1>(*_n_binding_16027);
auto _n_binding_16028=d::at(_n_STOPS_15605,(_n_i_15687+1.0));
double _n_v1_15690=std::get<0>(*_n_binding_16028);
auto&& _n_b_15691=std::get<1>(*_n_binding_16028);
double _n_k_15692=((_n_v_15686-_n_v0_15688)/(_n_v1_15690-_n_v0_15688));
double _n_dx_15693=(_n_x_15684-d::at(_n_SUN_15585,0.0));
double _n_dy_15694=(_n_y_15685-d::at(_n_SUN_15585,1.0));
double _n_d_15695=std::sqrt(((_n_dx_15693*_n_dx_15693)+(_n_dy_15694*_n_dy_15694)));
double _n_glow_15696=([&](){auto _n_left_16029=([&](){auto _n_left_16031=(0.3*std::exp(((-d::number(_n_d_15695))/7.0)));auto _n_right_16032=(0.22*std::exp(((-d::number(_n_d_15695))/24.0)));return (_n_left_16031+_n_right_16032);})();auto _n_right_16030=(0.12*std::exp(([&](){auto _n_left_16033=((-d::number(std::fabs(_n_dy_15694)))/7.0);auto _n_right_16034=(std::fabs(_n_dx_15693)/90.0);return (_n_left_16033-_n_right_16034);})()));return (_n_left_16029+_n_right_16030);})();
return std::array<double,3>{(_n_mix_15603(d::at(_n_a_15689,0.0),d::at(_n_b_15691,0.0),_n_k_15692)+_n_glow_15696),(_n_mix_15603(d::at(_n_a_15689,1.0),d::at(_n_b_15691,1.0),_n_k_15692)+(_n_glow_15696*0.82)),(_n_mix_15603(d::at(_n_a_15689,2.0),d::at(_n_b_15691,2.0),_n_k_15692)+(_n_glow_15696*0.48))};

}
}

std::array<double,3> _n_hazeAt_15607(double _a0){double _n_x_15697=_a0;
{
auto&& _n_c_15698=_n_skyAt_15606(_n_x_15697,(_n_HZ_15584-4.0));
return std::array<double,3>{(d::at(_n_c_15698,0.0)*0.8),(d::at(_n_c_15698,1.0)*0.72),(d::at(_n_c_15698,2.0)*0.72)};

}
}

struct Native_kite_festival final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_15608{};
double _n_N_15609{};
d::Array<d::String,false> _n_out_15610{};
d::Array<uint8_t,true> _n_lut_15611{};
d::Array<float,true> _n_bgR_15613{};
d::Array<float,true> _n_bgG_15614{};
d::Array<float,true> _n_bgB_15615{};
d::Array<float,true> _n_skR_15616{};
d::Array<float,true> _n_skG_15617{};
d::Array<float,true> _n_skB_15618{};
d::Array<float,true> _n_dep_15619{};
d::Array<float,true> _n_flo_15620{};
d::Array<std::shared_ptr<_n_Record_15627>,false> _n_hands_15626{};
d::Array<std::shared_ptr<_n_Record_15632>,false> _n_kites_15631{};
d::Array<std::array<double,6>,false> _n_HERO_15635{};
d::Array<d::Array<std::array<double,3>,false>,false> _n_lit_15636{};
d::Array<std::shared_ptr<_n_Record_15638>,false> _n_BIRDS_15637{};
d::Array<float,true> _n_R_15639{};
d::Array<float,true> _n_G_15640{};
d::Array<float,true> _n_B_15641{};
d::Array<float,true> _n_F_15642{};
std::function<d::String(double,std::shared_ptr<_n_Record_16008>)> _render;
double _n_nearest_15612(double _a0,double _a1,double _a2){double _n_r_15699=_a0;
double _n_g_15700=_a1;
double _n_b_15701=_a2;
{
double _n_k_15702=([&](){auto _n_left_16146=([&](){auto _n_left_16148=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_15699*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_16149=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_15700*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_16148)|d::i32(_n_right_16149));})();auto _n_right_16147=d::minimum({31.0,double(d::i32((_n_b_15701*31.99))|d::i32(0.0))});return double(d::i32(_n_left_16146)|d::i32(_n_right_16147));})();
if(d::truth((d::at(this->_n_lut_15611,_n_k_15702)!=255.0))){d::check_cancel();return d::at(this->_n_lut_15611,_n_k_15702);
}
double _n_best_15703=0.0;
double _n_bd_15704=1000000000.0;
{double _n_i_15705=0.0;
for(;d::truth((_n_i_15705<double(this->_n_P_15608.size())));(void)((_n_i_15705++))){d::check_cancel();double _n_dr_15706=(d::at(d::at(this->_n_P_15608,_n_i_15705),0.0)-_n_r_15699);
double _n_dg_15707=(d::at(d::at(this->_n_P_15608,_n_i_15705),1.0)-_n_g_15700);
double _n_db_15708=(d::at(d::at(this->_n_P_15608,_n_i_15705),2.0)-_n_b_15701);
double _n_d_15709=((((0.3*_n_dr_15706)*_n_dr_15706)+((0.5*_n_dg_15707)*_n_dg_15707))+((0.2*_n_db_15708)*_n_db_15708));
if(d::truth((_n_d_15709<_n_bd_15704))){d::check_cancel();(void)(((_n_bd_15704=_n_d_15709),(_n_best_15703=_n_i_15705)));
}
}}
return ([&](){auto&& _n_array_16150=this->_n_lut_15611;auto _n_index_16151=_n_k_15702;auto _n_value_16152=_n_best_15703;d::put(_n_array_16150,_n_index_16151,_n_value_16152);return _n_value_16152;})();

}
}

void _n_put_15621(double _a0,double _a1,std::array<double,3> _a2,double _a3,std::optional<double> _a4){double _n_x_15710=_a0;
double _n_r_15711=_a1;
auto&& _n_c_15712=_a2;
double _n_d_15713=_a3;
double _n_f_15714=(d::present(_a4)?d::read(_a4):0.14);
{
if((((d::truth((_n_x_15710<0.0))||d::truth((_n_x_15710>=_n_W_15582)))||d::truth((_n_r_15711<0.0)))||d::truth((_n_r_15711>=_n_H_15583)))){d::check_cancel();return;
}
double _n_k_15715=((_n_r_15711*_n_W_15582)+_n_x_15710);
(void)(((((([&](){auto&& _n_array_16153=this->_n_bgR_15613;auto _n_index_16154=_n_k_15715;auto _n_value_16155=d::at(_n_c_15712,0.0);d::put(_n_array_16153,_n_index_16154,_n_value_16155);return _n_value_16155;})(),([&](){auto&& _n_array_16156=this->_n_bgG_15614;auto _n_index_16157=_n_k_15715;auto _n_value_16158=d::at(_n_c_15712,1.0);d::put(_n_array_16156,_n_index_16157,_n_value_16158);return _n_value_16158;})()),([&](){auto&& _n_array_16159=this->_n_bgB_15615;auto _n_index_16160=_n_k_15715;auto _n_value_16161=d::at(_n_c_15712,2.0);d::put(_n_array_16159,_n_index_16160,_n_value_16161);return _n_value_16161;})()),([&](){auto&& _n_array_16162=this->_n_dep_15619;auto _n_index_16163=_n_k_15715;auto _n_value_16164=_n_d_15713;d::put(_n_array_16162,_n_index_16163,_n_value_16164);return _n_value_16164;})()),([&](){auto&& _n_array_16165=this->_n_flo_15620;auto _n_index_16166=_n_k_15715;auto _n_value_16167=_n_f_15714;d::put(_n_array_16165,_n_index_16166,_n_value_16167);return _n_value_16167;})()));

}
}

double _n_ridgeS_15622(double _a0){double _n_x_15732=_a0;
return ([&](){auto _n_left_16168=([&](){auto _n_left_16170=(59.5-(12.0*std::exp((-d::number(std::pow(((_n_x_15732-156.0)/36.0),2.0))))));auto _n_right_16171=(5.0*std::exp((-d::number(std::pow(((_n_x_15732-102.0)/20.0),2.0)))));return (_n_left_16170-_n_right_16171);})();auto _n_right_16169=(3.0*std::exp((-d::number(std::pow(((_n_x_15732-14.0)/16.0),2.0)))));return (_n_left_16168-_n_right_16169);})();}

double _n_ridge_15623(double _a0){double _n_x_15733=_a0;
return (([&](){auto _n_left_16172=this->_n_ridgeS_15622(_n_x_15733);auto _n_right_16173=(1.8*_n_fbm_15600((_n_x_15733*0.09),2.1,3.0,0.0));return (_n_left_16172-_n_right_16173);})()+0.9);}

double _n_back_15624(double _a0){double _n_x_15734=_a0;
return ([&](){auto _n_left_16174=(55.5-(3.0*_n_fbm_15600((_n_x_15734*0.03),7.3,3.0,0.0)));auto _n_right_16175=(4.0*std::exp((-d::number(std::pow(((_n_x_15734-60.0)/30.0),2.0)))));return (_n_left_16174-_n_right_16175);})();}

std::array<double,3> _n_fortCol_15625(double _a0){double _n_lit_15745=_a0;
return std::array<double,3>{(0.08+(0.9*_n_lit_15745)),(0.06+(0.5*_n_lit_15745)),(0.16+(0.22*_n_lit_15745))};}

void _n_drawFigure_15628(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_15769=_a0;
double _n_top_15770=_a1;
double _n_size_15771=_a2;
double _n_s_15772=_a3;
double _n_d_15773=_a4;
{
auto&& _n_cloth_15774=d::at(_n_CLOTH_15594,std::floor((_n_hash_15598(_n_s_15772,31.0)*double(_n_CLOTH_15594.size()))));
auto&& _n_skin_15775=std::array<double,3>{0.32,0.18,0.16};
auto&& _n_legs_15776=(d::truth((_n_hash_15598(_n_s_15772,32.0)<0.5))?std::array<double,3>{0.92,0.9,0.86}:std::array<double,3>{0.3,0.18,0.24});
d::Array<std::shared_ptr<std::tuple<double,double,std::array<double,3>>>,false> _n_cells_15777=d::Array<std::shared_ptr<std::tuple<double,double,std::array<double,3>>>,false>{};
std::array<double,2> _n_hand_15778{};
if(d::truth((_n_size_15771==2.0))){d::check_cancel();(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(3.0)),_n_skin_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(2.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(1.0)),_n_legs_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(1.0)),(-d::number(3.0)),_n_cloth_15774)));
(void)((_n_hand_15778=std::array<double,2>{(-d::number(1.0)),(-d::number(4.0))}));
}else {d::check_cancel();if(d::truth((_n_size_15771==3.0))){d::check_cancel();(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(5.0)),_n_skin_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(4.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(3.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(4.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(2.0)),_n_legs_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(1.0)),_n_legs_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(1.0)),(-d::number(5.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(2.0)),(-d::number(6.0)),_n_skin_15775)));
(void)((_n_hand_15778=std::array<double,2>{(-d::number(2.0)),(-d::number(6.5))}));
}else {d::check_cancel();(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(8.0)),_n_skin_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(8.0)),_n_skin_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(7.0)),_n_skin_15775),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(7.0)),_n_skin_15775)));
{double _n_yy_15779=(-d::number(6.0));
for(;d::truth((_n_yy_15779<=(-d::number(3.0))));(void)((_n_yy_15779++))){d::check_cancel();(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,_n_yy_15779,_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,_n_yy_15779,_n_cloth_15774)));
}}
(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(2.0,(-d::number(5.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>(2.0,(-d::number(4.0)),_n_cloth_15774)));
(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(2.0)),_n_legs_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(0.0,(-d::number(1.0)),_n_legs_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(2.0)),_n_legs_15776),std::make_shared<std::tuple<double,double,std::array<double,3>>>(1.0,(-d::number(1.0)),_n_legs_15776)));
(void)(_n_cells_15777.push(std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(1.0)),(-d::number(6.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(2.0)),(-d::number(7.0)),_n_cloth_15774),std::make_shared<std::tuple<double,double,std::array<double,3>>>((-d::number(3.0)),(-d::number(8.0)),_n_skin_15775)));
(void)((_n_hand_15778=std::array<double,2>{(-d::number(3.0)),(-d::number(8.5))}));
}
}
for(auto &&_n_item_16176:_n_cells_15777){d::check_cancel();auto _n_binding_16177=_n_item_16176;
double _n_ox_15780=std::get<0>(*_n_binding_16177);
double _n_oy_15781=std::get<1>(*_n_binding_16177);
auto&& _n_c_15782=std::get<2>(*_n_binding_16177);
(void)(this->_n_put_15621((_n_fx_15769+_n_ox_15780),(_n_top_15770+_n_oy_15781),_n_c_15782,(_n_d_15773+0.01),std::optional<double>(0.1)));
}
(void)(this->_n_hands_15626.push(([&](){auto _n_object_16179=std::make_shared<_n_Record_15627>();_n_object_16179->_p_x=((_n_fx_15769+d::at(_n_hand_15778,0.0))+0.5);_n_object_16179->_p_y=(_n_top_15770+d::at(_n_hand_15778,1.0));_n_object_16179->_p_d=(_n_d_15773+0.01);return _n_object_16179;})()));

}
}

void _n_wall_15629(double _a0,double _a1,std::array<double,3> _a2,double _a3,double _a4,double _a5){double _n_x_15783=_a0;
double _n_r_15784=_a1;
auto&& _n_c_15785=_a2;
double _n_light_15786=_a3;
double _n_haze_15787=_a4;
double _n_d_15788=_a5;
{
auto&& _n_hz_15789=_n_hazeAt_15607((_n_x_15783+0.5));
(void)(([&](){auto _n_argument_16180=_n_x_15783;auto _n_argument_16181=_n_r_15784;auto _n_argument_16182=std::array<double,3>{_n_mix_15603((d::at(_n_c_15785,0.0)*_n_light_15786),d::at(_n_hz_15789,0.0),_n_haze_15787),_n_mix_15603((d::at(_n_c_15785,1.0)*_n_light_15786),d::at(_n_hz_15789,1.0),_n_haze_15787),_n_mix_15603((d::at(_n_c_15785,2.0)*_n_light_15786),d::at(_n_hz_15789,2.0),_n_haze_15787)};auto _n_argument_16183=_n_d_15788;auto _n_argument_16184=0.04;return this->_n_put_15621(_n_argument_16180,_n_argument_16181,_n_argument_16182,_n_argument_16183,std::optional<double>(_n_argument_16184));})());

}
}

void _n_hawaMahal_15630(double _a0,double _a1,double _a2){double _n_cx_15790=_a0;
double _n_base_15791=_a1;
double _n_d_15792=_a2;
{
d::Array<double,false> _n_spans_15793=d::Array<double,false>{17.0,17.0,15.0,11.0,6.0};
auto&& _n_pink_15794=std::array<double,3>{0.95,0.5,0.42};
auto&& _n_trim_15795=std::array<double,3>{1.0,0.86,0.74};
{double _n_tier_15796=0.0;
for(;d::truth((_n_tier_15796<double(_n_spans_15793.size())));(void)((_n_tier_15796++))){d::check_cancel();double _n_tTop_15797=(_n_base_15791-(4.0*(_n_tier_15796+1.0)));
double _n_hw_15798=d::at(_n_spans_15793,_n_tier_15796);
double _n_up_15799=([&]()->double{auto _n_logical_16185=d::at(_n_spans_15793,(_n_tier_15796+1.0));return d::has(_n_spans_15793,(_n_tier_15796+1.0))?_n_logical_16185:(-d::number(1.0));})();
{double _n_x_15800=(_n_cx_15790-_n_hw_15798);
for(;d::truth((_n_x_15800<(_n_cx_15790+_n_hw_15798)));(void)((_n_x_15800++))){d::check_cancel();double _n_lx_15801=(_n_x_15800-(_n_cx_15790-_n_hw_15798));
{double _n_tr_15802=0.0;
for(;d::truth((_n_tr_15802<4.0));(void)((_n_tr_15802++))){d::check_cancel();double _n_r_15803=(_n_tTop_15797+_n_tr_15802);
if(d::truth((_n_tr_15802==0.0))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15800,_n_r_15803,_n_trim_15795,1.0,0.1,_n_d_15792));
}else {d::check_cancel();if(d::truth((_n_tr_15802==3.0))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15800,_n_r_15803,_n_pink_15794,0.26,0.1,_n_d_15792));
}else {d::check_cancel();if(d::truth((d::mod(_n_lx_15801,2.0)==1.0))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15800,_n_r_15803,_n_trim_15795,(d::truth((_n_tr_15802==1.0))?1.0:0.8),0.1,_n_d_15792));
}else {d::check_cancel();(void)(this->_n_wall_15629(_n_x_15800,_n_r_15803,_n_pink_15794,0.3,0.1,_n_d_15792));
}
}
}
}}
if((d::truth((std::fabs(((_n_x_15800+0.5)-_n_cx_15790))>_n_up_15799))&&d::truth((d::mod(_n_lx_15801,3.0)==1.0)))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15800,(_n_tTop_15797-1.0),_n_trim_15795,0.9,0.1,_n_d_15792));
}
}}
}}
double _n_ct_15804=(_n_base_15791-(4.0*double(_n_spans_15793.size())));
{double _n_r_15805=(_n_ct_15804-4.0);
for(;d::truth((_n_r_15805<_n_ct_15804));(void)((_n_r_15805++))){d::check_cancel();{double _n_x_15806=(_n_cx_15790-4.0);
for(;d::truth((_n_x_15806<(_n_cx_15790+4.0)));(void)((_n_x_15806++))){d::check_cancel();if(d::truth((std::fabs(((_n_x_15806+0.5)-_n_cx_15790))<=(((_n_r_15805-(_n_ct_15804-4.0))*1.2)+0.6)))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15806,_n_r_15805,(d::truth((_n_r_15805==(_n_ct_15804-1.0)))?_n_trim_15795:_n_pink_15794),(d::truth((_n_r_15805==(_n_ct_15804-1.0)))?1.0:0.7),0.1,_n_d_15792));
}
}}
}}
(void)(this->_n_wall_15629(_n_cx_15790,(_n_ct_15804-5.0),_n_trim_15795,0.9,0.1,_n_d_15792));

}
}

std::shared_ptr<_n_Record_15632> _n_makeKite_15633(double _a0,double _a1,double _a2,double _a3){double _n_seed_15858=_a0;
double _n_x_15859=_a1;
double _n_y_15860=_a2;
double _n_z_15861=_a3;
{
double _n_a_15862=std::floor((_n_hash_15598(_n_seed_15858,1.0)*double(_n_PAPER_15593.size())));
double _n_b_15863=std::floor((_n_hash_15598(_n_seed_15858,2.0)*double(_n_PAPER_15593.size())));
if(d::truth((_n_b_15863==_n_a_15862))){d::check_cancel();(void)((_n_b_15863=d::mod((_n_b_15863+3.0),double(_n_PAPER_15593.size()))));
}
double _n_h_15864=(1.8+(6.4*std::pow(_n_z_15861,1.5)));
return ([&](){auto _n_object_16187=std::make_shared<_n_Record_15632>();_n_object_16187->_p_x=_n_x_15859;_n_object_16187->_p_y=_n_y_15860;_n_object_16187->_p_z=_n_z_15861;_n_object_16187->_p_h=_n_h_15864;_n_object_16187->_p_w=(_n_h_15864*(0.8+(0.08*_n_hash_15598(_n_seed_15858,3.0))));_n_object_16187->_p_A=d::at(_n_PAPER_15593,_n_a_15862);_n_object_16187->_p_B=d::at(_n_PAPER_15593,_n_b_15863);_n_object_16187->_p_design=std::floor((_n_hash_15598(_n_seed_15858,4.0)*6.0));_n_object_16187->_p_tilt=((-d::number(0.12))+(0.24*_n_hash_15598(_n_seed_15858,5.0)));_n_object_16187->_p_amp=(0.4+(1.6*_n_z_15861));_n_object_16187->_p_w1=(0.5+(0.7*_n_hash_15598(_n_seed_15858,6.0)));_n_object_16187->_p_w2=(0.7+(0.9*_n_hash_15598(_n_seed_15858,7.0)));_n_object_16187->_p_p1=(_n_hash_15598(_n_seed_15858,8.0)*6.28);_n_object_16187->_p_p2=(_n_hash_15598(_n_seed_15858,9.0)*6.28);_n_object_16187->_p_dive=(d::truth((_n_hash_15598(_n_seed_15858,10.0)<0.12))?1.0:0.0);_n_object_16187->_p_cut=0.0;_n_object_16187->_p_period=0.0;_n_object_16187->_p_drop=0.0;_n_object_16187->_p_hand=std::optional<d::Array<double,false>>{};_n_object_16187->_p_tail=((d::truth((_n_z_15861>0.55))&&d::truth((_n_hash_15598(_n_seed_15858,11.0)<0.6)))?(14.0+(26.0*_n_z_15861)):0.0);return _n_object_16187;})();

}
}

bool _n_room_15634(double _a0,double _a1,double _a2){double _n_x_15865=_a0;
double _n_y_15866=_a1;
double _n_z_15867=_a2;
{
double _n_h_15868=(1.8+(6.4*std::pow(_n_z_15867,1.5)));
if(d::truth((d::hypot(std::initializer_list<double>{(_n_x_15865-d::at(_n_SUN_15585,0.0)),(_n_y_15866-d::at(_n_SUN_15585,1.0))})<((_n_SUN_R_15586+_n_h_15868)+3.0)))){d::check_cancel();return false;
}
if((d::truth((_n_y_15866>((this->_n_ridgeS_15622(_n_x_15865)-_n_h_15868)-2.0)))||d::truth((_n_y_15866<(_n_h_15868-2.0))))){d::check_cancel();return false;
}
for(auto &&_n_item_16188:this->_n_kites_15631){d::check_cancel();std::shared_ptr<_n_Record_15632> _n_K_15869=_n_item_16188;
if(d::truth((d::hypot(std::initializer_list<double>{(_n_K_15869->_p_x-_n_x_15865),((_n_K_15869->_p_y-_n_y_15866)*0.8)})<(((_n_K_15869->_p_h+_n_h_15868)*1.05)+4.0)))){d::check_cancel();return false;
}
}
return true;

}
}

void _n_blend_15643(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_k_15901=_a0;
double _n_c0_15902=_a1;
double _n_c1_15903=_a2;
double _n_c2_15904=_a3;
double _n_a_15905=_a4;
{
(void)(([&](){auto&& _n_array_16189=this->_n_R_15639;auto _n_index_16190=_n_k_15901;auto _n_value_16191=(d::at(_n_array_16189,_n_index_16190)+((_n_c0_15902-d::at(this->_n_R_15639,_n_k_15901))*_n_a_15905));d::put(_n_array_16189,_n_index_16190,_n_value_16191);return _n_value_16191;})());
(void)(([&](){auto&& _n_array_16192=this->_n_G_15640;auto _n_index_16193=_n_k_15901;auto _n_value_16194=(d::at(_n_array_16192,_n_index_16193)+((_n_c1_15903-d::at(this->_n_G_15640,_n_k_15901))*_n_a_15905));d::put(_n_array_16192,_n_index_16193,_n_value_16194);return _n_value_16194;})());
(void)(([&](){auto&& _n_array_16195=this->_n_B_15641;auto _n_index_16196=_n_k_15901;auto _n_value_16197=(d::at(_n_array_16195,_n_index_16196)+((_n_c2_15904-d::at(this->_n_B_15641,_n_k_15901))*_n_a_15905));d::put(_n_array_16195,_n_index_16196,_n_value_16197);return _n_value_16197;})());

}
}

void _n_string_15644(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,bool _a6,double _a7){double _n_x0_15906=_a0;
double _n_y0_15907=_a1;
double _n_d0_15908=_a2;
double _n_x1_15909=_a3;
double _n_y1_15910=_a4;
double _n_d1_15911=_a5;
bool _n_fadeOut_15912=_a6;
double _n_z_15913=_a7;
{
double _n_len_15914=d::hypot(std::initializer_list<double>{(_n_x1_15909-_n_x0_15906),(_n_y1_15910-_n_y0_15907)});
double _n_n_15915=std::ceil((_n_len_15914*1.4));
double _n_sag_15916=(0.07*_n_len_15914);
double _n_last_15917=(-d::number(1.0));
{double _n_i_15918=0.0;
for(;d::truth((_n_i_15918<=_n_n_15915));(void)((_n_i_15918++))){d::check_cancel();double _n_s_15919=(_n_i_15918/_n_n_15915);
double _n_x_15920=_n_mix_15603(_n_x0_15906,_n_x1_15909,_n_s_15919);
double _n_y_15921=(_n_mix_15603(_n_y0_15907,_n_y1_15910,_n_s_15919)+(((_n_sag_15916*4.0)*_n_s_15919)*(1.0-_n_s_15919)));
double _n_ix_15922=std::floor(_n_x_15920);
double _n_iy_15923=std::floor(_n_y_15921);
if((((d::truth((_n_ix_15922<0.0))||d::truth((_n_ix_15922>=_n_W_15582)))||d::truth((_n_iy_15923<0.0)))||d::truth((_n_iy_15923>=_n_H_15583)))){d::check_cancel();continue;
}
double _n_k_15924=((_n_iy_15923*_n_W_15582)+_n_ix_15922);
if(d::truth((_n_k_15924==_n_last_15917))){d::check_cancel();continue;
}
(void)((_n_last_15917=_n_k_15924));
if(d::truth((d::at(this->_n_dep_15619,_n_k_15924)>=_n_mix_15603(_n_d0_15908,_n_d1_15911,_n_s_15919)))){d::check_cancel();continue;
}
double _n_seen_15925=(d::truth(_n_fadeOut_15912)?(1.0-_n_s_15919):([&](){auto _n_argument_16198=_n_smooth_15602(0.15,0.03,_n_s_15919);auto _n_argument_16199=_n_smooth_15602(0.5,0.8,_n_s_15919);return d::maximum({_n_argument_16198,_n_argument_16199});})());
double _n_a_15926=((0.3+(0.3*_n_z_15913))*_n_seen_15925);
if(d::truth((_n_a_15926<0.05))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_16200=this->_n_R_15639;auto _n_index_16201=_n_k_15924;auto _n_value_16202=(d::at(_n_array_16200,_n_index_16201)*(1.0-_n_a_15926));d::put(_n_array_16200,_n_index_16201,_n_value_16202);return _n_value_16202;})(),([&](){auto&& _n_array_16203=this->_n_G_15640;auto _n_index_16204=_n_k_15924;auto _n_value_16205=(d::at(_n_array_16203,_n_index_16204)*(1.0-_n_a_15926));d::put(_n_array_16203,_n_index_16204,_n_value_16205);return _n_value_16205;})()),([&](){auto&& _n_array_16206=this->_n_B_15641;auto _n_index_16207=_n_k_15924;auto _n_value_16208=(d::at(_n_array_16206,_n_index_16207)*(1.0-_n_a_15926));d::put(_n_array_16206,_n_index_16207,_n_value_16208);return _n_value_16208;})()));
(void)(([&](){auto&& _n_array_16209=this->_n_F_15642;auto _n_index_16210=_n_k_15924;auto _n_value_16211=d::minimum({d::at(this->_n_F_15642,_n_k_15924),0.04});d::put(_n_array_16209,_n_index_16210,_n_value_16211);return _n_value_16211;})());
}}

}
}

void _n_drawKite_15645(std::shared_ptr<_n_Record_15632> _a0,d::Array<std::array<double,3>,false> _a1,double _a2,double _a3,double _a4,double _a5,double _a6){std::shared_ptr<_n_Record_15632> _n_K_15927=_a0;
d::Array<std::array<double,3>,false> _n_cols_15928=_a1;
double _n_cx_15929=_a2;
double _n_cy_15930=_a3;
double _n_ang_15931=_a4;
double _n_fl_15932=_a5;
double _n_t_15933=_a6;
{
double _n_h_15934=_n_K_15927->_p_h;
double _n_w_15935=_n_K_15927->_p_w;
double _n_hz_15936=(([&](){auto _n_argument_16212=(1.0-d::minimum({1.0,_n_K_15927->_p_z}));auto _n_argument_16213=1.4;return std::pow(_n_argument_16212,_n_argument_16213);})()*0.25);
auto _n_binding_16214=_n_cols_15928;
auto&& _n_A_15937=d::at(_n_binding_16214,0.0);
auto&& _n_Bc_15938=d::at(_n_binding_16214,1.0);
if(d::truth((_n_h_15934<1.7))){d::check_cancel();double _n_ix_15939=std::floor(_n_cx_15929);
double _n_iy_15940=std::floor(_n_cy_15930);
if((((d::truth((_n_ix_15939<0.0))||d::truth((_n_ix_15939>=_n_W_15582)))||d::truth((_n_iy_15940<0.0)))||d::truth((_n_iy_15940>=(_n_H_15583-1.0))))){d::check_cancel();return;
}
double _n_k_15941=((_n_iy_15940*_n_W_15582)+_n_ix_15939);
if(d::truth((d::at(this->_n_dep_15619,_n_k_15941)<_n_K_15927->_p_z))){d::check_cancel();(void)(([&](){auto _n_argument_16215=_n_k_15941;auto _n_argument_16216=_n_mix_15603(d::at(_n_A_15937,0.0),d::at(this->_n_skR_15616,_n_k_15941),_n_hz_15936);auto _n_argument_16217=_n_mix_15603(d::at(_n_A_15937,1.0),d::at(this->_n_skG_15617,_n_k_15941),_n_hz_15936);auto _n_argument_16218=_n_mix_15603(d::at(_n_A_15937,2.0),d::at(this->_n_skB_15618,_n_k_15941),_n_hz_15936);auto _n_argument_16219=1.0;return this->_n_blend_15643(_n_argument_16215,_n_argument_16216,_n_argument_16217,_n_argument_16218,_n_argument_16219);})());
(void)(([&](){auto&& _n_array_16220=this->_n_F_15642;auto _n_index_16221=_n_k_15941;auto _n_value_16222=0.3;d::put(_n_array_16220,_n_index_16221,_n_value_16222);return _n_value_16222;})());
}
if((d::truth((_n_h_15934>1.3))&&d::truth((d::at(this->_n_dep_15619,(_n_k_15941+_n_W_15582))<_n_K_15927->_p_z)))){d::check_cancel();(void)(this->_n_blend_15643((_n_k_15941+_n_W_15582),d::at(_n_Bc_15938,0.0),d::at(_n_Bc_15938,1.0),d::at(_n_Bc_15938,2.0),0.4));
}
return;
}
double _n_ca_15942=std::cos(_n_ang_15931);
double _n_sa_15943=std::sin(_n_ang_15931);
double _n_tri_15944=(d::truth((_n_h_15934>1.8))?((0.26*_n_h_15934)+0.5):0.0);
double _n_tl_15945=(d::truth((_n_h_15934>5.5))?(_n_h_15934*0.55):0.0);
double _n_rad_15946=std::ceil((d::maximum({((_n_h_15934+_n_tri_15944)+_n_tl_15945),_n_w_15935})+1.5));
bool _n_big_15947=(_n_h_15934>=2.6);
double _n_edge_15948=([&](){auto _n_argument_16223=0.7;auto _n_argument_16224=d::minimum({(_n_w_15935*_n_fl_15932),_n_h_15934});return d::maximum({_n_argument_16223,_n_argument_16224});})();
{double _n_r_15949=([&](){auto _n_argument_16225=0.0;auto _n_argument_16226=std::floor((_n_cy_15930-_n_rad_15946));return d::maximum({_n_argument_16225,_n_argument_16226});})();
for(;d::truth((_n_r_15949<=d::minimum({(_n_H_15583-1.0),(_n_cy_15930+_n_rad_15946)})));(void)((_n_r_15949++))){d::check_cancel();{double _n_x_15950=([&](){auto _n_argument_16227=0.0;auto _n_argument_16228=std::floor((_n_cx_15929-_n_rad_15946));return d::maximum({_n_argument_16227,_n_argument_16228});})();
for(;d::truth((_n_x_15950<=d::minimum({(_n_W_15582-1.0),(_n_cx_15929+_n_rad_15946)})));(void)((_n_x_15950++))){d::check_cancel();double _n_k_15951=((_n_r_15949*_n_W_15582)+_n_x_15950);
if(d::truth((d::at(this->_n_dep_15619,_n_k_15951)>=_n_K_15927->_p_z))){d::check_cancel();continue;
}
double _n_dx_15952=((_n_x_15950+0.5)-_n_cx_15929);
double _n_dy_15953=((_n_r_15949+0.5)-_n_cy_15930);
double _n_u_15954=(((_n_dx_15952*_n_ca_15942)+(_n_dy_15953*_n_sa_15943))/_n_fl_15932);
double _n_v_15955=(((-d::number(_n_dx_15952))*_n_sa_15943)+(_n_dy_15953*_n_ca_15942));
double _n_q_15956=([&](){auto _n_left_16229=(std::fabs(_n_u_15954)/_n_w_15935);auto _n_right_16230=(std::fabs(_n_v_15955)/(d::truth((_n_v_15955<0.0))?(_n_h_15934*0.92):_n_h_15934));return (_n_left_16229+_n_right_16230);})();
double _n_cov_15957=(d::truth((_n_q_15956<=(1.0+(0.3/_n_edge_15948))))?1.0:0.0);
auto&& _n_c_15958=_n_A_15937;
if(d::truth(_n_cov_15957)){d::check_cancel();bool _n_two_15959=false;
{auto _n_switch_16231=_n_K_15927->_p_design;int _n_case_16232=-1;if(_n_case_16232<0&&_n_switch_16231==0.0)_n_case_16232=0;if(_n_case_16232<0&&_n_switch_16231==1.0)_n_case_16232=1;if(_n_case_16232<0&&_n_switch_16231==2.0)_n_case_16232=2;if(_n_case_16232<0&&_n_switch_16231==3.0)_n_case_16232=3;if(_n_case_16232<0&&_n_switch_16231==4.0)_n_case_16232=4;if(_n_case_16232<0)_n_case_16232=5;if(_n_case_16232>=0&&_n_case_16232<=0){(void)((_n_two_15959=(_n_v_15955<((-d::number(0.38))*_n_h_15934))));
goto _n_end_16233;
}if(_n_case_16232>=0&&_n_case_16232<=1){(void)((_n_two_15959=(_n_u_15954>0.0)));
goto _n_end_16233;
}if(_n_case_16232>=0&&_n_case_16232<=2){(void)((_n_two_15959=(((_n_u_15954*_n_u_15954)+std::pow((_n_v_15955+(0.05*_n_h_15934)),2.0))<std::pow((0.36*_n_w_15935),2.0))));
goto _n_end_16233;
}if(_n_case_16232>=0&&_n_case_16232<=3){(void)((_n_two_15959=(std::fabs(_n_v_15955)<(0.2*_n_h_15934))));
goto _n_end_16233;
}if(_n_case_16232>=0&&_n_case_16232<=4){(void)((_n_two_15959=(_n_v_15955>0.0)));
goto _n_end_16233;
}if(_n_case_16232>=0&&_n_case_16232<=5){(void)((_n_two_15959=(_n_q_15956>0.72)));
}_n_end_16233:;}if(d::truth(_n_two_15959)){d::check_cancel();(void)((_n_c_15958=_n_Bc_15938));
}
double _n_s_15960=1.0;
if(d::truth(_n_big_15947)){d::check_cancel();if((d::truth((std::fabs(_n_u_15954)<0.4))&&d::truth((_n_v_15955>((-d::number(_n_h_15934))*0.9))))){d::check_cancel();(void)((_n_s_15960=0.72));
}
double _n_bow_15961=(((-d::number(0.15))*_n_h_15934)+((0.32*_n_h_15934)*std::pow((_n_u_15954/_n_w_15935),2.0)));
if((d::truth((_n_h_15934>=4.0))&&d::truth((std::fabs((_n_v_15955-_n_bow_15961))<0.42)))){d::check_cancel();(void)((_n_s_15960=d::minimum({_n_s_15960,0.76})));
}
}
(void)(([&](){auto _n_argument_16234=_n_k_15951;auto _n_argument_16235=_n_mix_15603((d::at(_n_c_15958,0.0)*_n_s_15960),d::at(this->_n_skR_15616,_n_k_15951),_n_hz_15936);auto _n_argument_16236=_n_mix_15603((d::at(_n_c_15958,1.0)*_n_s_15960),d::at(this->_n_skG_15617,_n_k_15951),_n_hz_15936);auto _n_argument_16237=_n_mix_15603((d::at(_n_c_15958,2.0)*_n_s_15960),d::at(this->_n_skB_15618,_n_k_15951),_n_hz_15936);auto _n_argument_16238=1.0;return this->_n_blend_15643(_n_argument_16234,_n_argument_16235,_n_argument_16236,_n_argument_16237,_n_argument_16238);})());
(void)(([&](){auto&& _n_array_16239=this->_n_F_15642;auto _n_index_16240=_n_k_15951;auto _n_value_16241=0.24;d::put(_n_array_16239,_n_index_16240,_n_value_16241);return _n_value_16241;})());
continue;
}
double _n_tv_15962=(_n_v_15955-_n_h_15934);
double _n_tc_15963=0.0;
if((((d::truth(_n_tri_15944)&&d::truth((_n_tv_15962>(-d::number(0.3)))))&&d::truth((_n_tv_15962<_n_tri_15944)))&&d::truth((std::fabs((_n_u_15954*_n_fl_15932))<=(0.35+(_n_tv_15962*0.75)))))){d::check_cancel();(void)((_n_tc_15963=1.0));
}else {d::check_cancel();if(((d::truth(_n_tl_15945)&&d::truth((_n_tv_15962>0.0)))&&d::truth((_n_tv_15962<(_n_tri_15944+_n_tl_15945))))){d::check_cancel();for(auto &&_n_item_16242:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_15964=_n_item_16242;
{
double _n_uc_15965=((_n_side_15964*(0.3+(_n_tv_15962*0.18)))+(0.6*std::sin(((((_n_tv_15962*0.6)-(_n_t_15933*7.0))+_n_K_15927->_p_p1)+_n_side_15964))));
if(d::truth((std::fabs(((_n_u_15954*_n_fl_15932)-_n_uc_15965))<0.45))){d::check_cancel();(void)((_n_tc_15963=1.0));
}

}
}
}
}
if(d::truth(_n_tc_15963)){d::check_cancel();(void)(([&](){auto _n_argument_16243=_n_k_15951;auto _n_argument_16244=_n_mix_15603(d::at(_n_Bc_15938,0.0),d::at(this->_n_skR_15616,_n_k_15951),_n_hz_15936);auto _n_argument_16245=_n_mix_15603(d::at(_n_Bc_15938,1.0),d::at(this->_n_skG_15617,_n_k_15951),_n_hz_15936);auto _n_argument_16246=_n_mix_15603(d::at(_n_Bc_15938,2.0),d::at(this->_n_skB_15618,_n_k_15951),_n_hz_15936);auto _n_argument_16247=_n_tc_15963;return this->_n_blend_15643(_n_argument_16243,_n_argument_16244,_n_argument_16245,_n_argument_16246,_n_argument_16247);})());
(void)(([&](){auto&& _n_array_16248=this->_n_F_15642;auto _n_index_16249=_n_k_15951;auto _n_value_16250=0.24;d::put(_n_array_16248,_n_index_16249,_n_value_16250);return _n_value_16250;})());
}
}}
}}

}
}

explicit Native_kite_festival(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_15608=d::map(_n_meta_15580->_p_palette,_n_hex_15604);
this->_n_N_15609=(_n_W_15582*_n_H_15583);
this->_n_out_15610=d::Array<d::String,false>(size_t(this->_n_N_15609));
this->_n_lut_15611=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_bgR_15613=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_bgG_15614=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_bgB_15615=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_skR_15616=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_skG_15617=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_skB_15618=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_dep_15619=d::Array<float,true>(size_t(this->_n_N_15609)).fill(_n_SKY_15590);
this->_n_flo_15620=d::Array<float,true>(size_t(this->_n_N_15609)).fill(0.02);
{double _n_r_15716=0.0;
for(;d::truth((_n_r_15716<_n_H_15583));(void)((_n_r_15716++))){d::check_cancel();{double _n_x_15717=0.0;
for(;d::truth((_n_x_15717<_n_W_15582));(void)((_n_x_15717++))){d::check_cancel();double _n_k_15718=((_n_r_15716*_n_W_15582)+_n_x_15717);
double _n_y_15719=(_n_r_15716+0.5);
auto _n_binding_16035=_n_skyAt_15606((_n_x_15717+0.5),_n_y_15719);
double _n_sr_15720=d::at(_n_binding_16035,0.0);
double _n_sg_15721=d::at(_n_binding_16035,1.0);
double _n_sb_15722=d::at(_n_binding_16035,2.0);
(void)(((([&](){auto&& _n_array_16036=this->_n_skR_15616;auto _n_index_16037=_n_k_15718;auto _n_value_16038=_n_sr_15720;d::put(_n_array_16036,_n_index_16037,_n_value_16038);return _n_value_16038;})(),([&](){auto&& _n_array_16039=this->_n_skG_15617;auto _n_index_16040=_n_k_15718;auto _n_value_16041=_n_sg_15721;d::put(_n_array_16039,_n_index_16040,_n_value_16041);return _n_value_16041;})()),([&](){auto&& _n_array_16042=this->_n_skB_15618;auto _n_index_16043=_n_k_15718;auto _n_value_16044=_n_sb_15722;d::put(_n_array_16042,_n_index_16043,_n_value_16044);return _n_value_16044;})()));
double _n_cr_15723=_n_sr_15720;
double _n_cg_15724=_n_sg_15721;
double _n_cb_15725=_n_sb_15722;
double _n_dx_15726=((_n_x_15717+0.5)-d::at(_n_SUN_15585,0.0));
double _n_dy_15727=(_n_y_15719-d::at(_n_SUN_15585,1.0));
double _n_ds_15728=std::sqrt(((_n_dx_15726*_n_dx_15726)+(_n_dy_15727*_n_dy_15727)));
if(d::truth((_n_ds_15728<(_n_SUN_R_15586+0.6)))){d::check_cancel();double _n_a_15729=_n_smooth_15602((_n_SUN_R_15586+0.6),(_n_SUN_R_15586-0.6),_n_ds_15728);
double _n_low_15730=_n_smooth_15602((-d::number(_n_SUN_R_15586)),_n_SUN_R_15586,_n_dy_15727);
double _n_streak_15731=1.0;
(void)((_n_cr_15723=_n_mix_15603(_n_cr_15723,(1.2*_n_streak_15731),_n_a_15729)));
(void)((_n_cg_15724=_n_mix_15603(_n_cg_15724,((1.15-(0.2*_n_low_15730))*_n_streak_15731),_n_a_15729)));
(void)((_n_cb_15725=_n_mix_15603(_n_cb_15725,((1.0-(0.35*_n_low_15730))*_n_streak_15731),_n_a_15729)));
}
(void)(((([&](){auto&& _n_array_16045=this->_n_bgR_15613;auto _n_index_16046=_n_k_15718;auto _n_value_16047=_n_cr_15723;d::put(_n_array_16045,_n_index_16046,_n_value_16047);return _n_value_16047;})(),([&](){auto&& _n_array_16048=this->_n_bgG_15614;auto _n_index_16049=_n_k_15718;auto _n_value_16050=_n_cg_15724;d::put(_n_array_16048,_n_index_16049,_n_value_16050);return _n_value_16050;})()),([&](){auto&& _n_array_16051=this->_n_bgB_15615;auto _n_index_16052=_n_k_15718;auto _n_value_16053=_n_cb_15725;d::put(_n_array_16051,_n_index_16052,_n_value_16053);return _n_value_16053;})()));
}}
}}
{double _n_x_15735=0.0;
for(;d::truth((_n_x_15735<_n_W_15582));(void)((_n_x_15735++))){d::check_cancel();double _n_rt_15736=this->_n_ridge_15623((_n_x_15735+0.5));
double _n_bt_15737=this->_n_back_15624((_n_x_15735+0.5));
double _n_slope_15738=([&](){auto _n_left_16054=this->_n_ridge_15623((_n_x_15735+1.5));auto _n_right_16055=this->_n_ridge_15623((_n_x_15735-0.5));return (_n_left_16054-_n_right_16055);})();
{double _n_r_15739=std::floor(d::minimum({_n_rt_15736,_n_bt_15737}));
for(;d::truth((_n_r_15739<_n_H_15583));(void)((_n_r_15739++))){d::check_cancel();double _n_y_15740=(_n_r_15739+0.5);
double _n_k_15741=((_n_r_15739*_n_W_15582)+_n_x_15735);
if(d::truth((_n_y_15740>=_n_rt_15736))){d::check_cancel();double _n_s_15742=_n_clamp_15601(((0.5-(_n_slope_15738*0.5))+(0.4*(_n_fbm_15600((_n_x_15735*0.3),(_n_y_15740*0.3),3.0,0.0)-0.5))));
double _n_hz_15743=(0.04+(0.12*_n_smooth_15602((_n_rt_15736+2.0),(_n_rt_15736+14.0),_n_y_15740)));
auto&& _n_c_15744=std::array<double,3>{(0.11+(0.06*_n_s_15742)),(0.08+(0.04*_n_s_15742)),(0.2+(0.06*_n_s_15742))};
(void)(([&](){auto _n_argument_16056=_n_x_15735;auto _n_argument_16057=_n_r_15739;auto _n_argument_16058=std::array<double,3>{_n_mix_15603(d::at(_n_c_15744,0.0),0.62,_n_hz_15743),_n_mix_15603(d::at(_n_c_15744,1.0),0.44,_n_hz_15743),_n_mix_15603(d::at(_n_c_15744,2.0),0.66,_n_hz_15743)};auto _n_argument_16059=_n_HILL_15592;auto _n_argument_16060=0.0;return this->_n_put_15621(_n_argument_16056,_n_argument_16057,_n_argument_16058,_n_argument_16059,std::optional<double>(_n_argument_16060));})());
}else {d::check_cancel();if(d::truth((_n_y_15740>=_n_bt_15737))){d::check_cancel();(void)(([&](){auto _n_argument_16061=_n_x_15735;auto _n_argument_16062=_n_r_15739;auto _n_argument_16063=std::array<double,3>{_n_mix_15603(0.3,d::at(this->_n_skR_15616,_n_k_15741),0.12),_n_mix_15603(0.24,d::at(this->_n_skG_15617,_n_k_15741),0.12),_n_mix_15603(0.46,d::at(this->_n_skB_15618,_n_k_15741),0.12)};auto _n_argument_16064=_n_BACK_15591;auto _n_argument_16065=0.02;return this->_n_put_15621(_n_argument_16061,_n_argument_16062,_n_argument_16063,_n_argument_16064,std::optional<double>(_n_argument_16065));})());
}
}
}}
}}
{double _n_x_15746=112.0;
for(;d::truth((_n_x_15746<197.0));(void)((_n_x_15746++))){d::check_cancel();double _n_base_15747=(this->_n_ridgeS_15622((_n_x_15746+0.5))+1.0);
double _n_wt_15748=(_n_base_15747-3.0);
{double _n_r_15749=(std::floor(_n_wt_15748)-1.0);
for(;d::truth((_n_r_15749<(_n_base_15747+2.0)));(void)((_n_r_15749++))){d::check_cancel();double _n_y_15750=(_n_r_15749+0.5);
if((d::truth((_n_y_15750<_n_wt_15748))&&d::truth((d::mod(_n_x_15746,2.0)==1.0)))){d::check_cancel();continue;
}
if(d::truth((_n_y_15750<(_n_wt_15748-1.0)))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_16066=_n_x_15746;auto _n_argument_16067=_n_r_15749;auto _n_argument_16068=this->_n_fortCol_15625((d::truth((_n_y_15750<(_n_wt_15748+0.5)))?0.6:0.0));auto _n_argument_16069=(_n_HILL_15592+0.02);auto _n_argument_16070=0.04;return this->_n_put_15621(_n_argument_16066,_n_argument_16067,_n_argument_16068,_n_argument_16069,std::optional<double>(_n_argument_16070));})());
}}
}}
for(auto &&_n_item_16071:d::Array<double,false>{114.0,127.0,139.0,171.0,184.0,195.0}){d::check_cancel();double _n_bx_15751=_n_item_16071;
{
double _n_base_15752=(this->_n_ridgeS_15622(_n_bx_15751)+1.0);
{double _n_r_15753=std::floor((_n_base_15752-9.0));
for(;d::truth((_n_r_15753<(_n_base_15752+2.0)));(void)((_n_r_15753++))){d::check_cancel();{double _n_x_15754=(_n_bx_15751-3.0);
for(;d::truth((_n_x_15754<=(_n_bx_15751+3.0)));(void)((_n_x_15754++))){d::check_cancel();double _n_y_15755=(_n_r_15753+0.5);
double _n_dx_15756=((_n_x_15754+0.5)-_n_bx_15751);
double _n_top_15757=(_n_base_15752-6.0);
bool _n_tower_15758=([&]()->bool{auto _n_logical_16072=(std::fabs(_n_dx_15756)<=2.4);return d::truth(_n_logical_16072)?(_n_y_15755>=_n_top_15757):_n_logical_16072;})();
bool _n_dome_15759=([&]()->bool{auto _n_logical_16073=((std::pow((_n_dx_15756/2.0),2.0)+std::pow(((_n_y_15755-_n_top_15757)/2.2),2.0))<=1.0);return d::truth(_n_logical_16073)?(_n_y_15755<_n_top_15757):_n_logical_16073;})();
if((d::truth(_n_tower_15758)||d::truth(_n_dome_15759))){d::check_cancel();(void)(([&](){auto _n_argument_16074=_n_x_15754;auto _n_argument_16075=_n_r_15753;auto _n_argument_16076=this->_n_fortCol_15625((d::truth((_n_dx_15756<(-d::number(1.2))))?0.6:0.0));auto _n_argument_16077=(_n_HILL_15592+0.03);auto _n_argument_16078=0.04;return this->_n_put_15621(_n_argument_16074,_n_argument_16075,_n_argument_16076,_n_argument_16077,std::optional<double>(_n_argument_16078));})());
}
}}
}}

}
}
{
double _n_top_15760=(this->_n_ridgeS_15622(153.0)-8.0);
{double _n_r_15761=(std::floor(_n_top_15760)-4.0);
for(;d::truth((_n_r_15761<(this->_n_ridgeS_15622(153.0)+2.0)));(void)((_n_r_15761++))){d::check_cancel();{double _n_x_15762=142.0;
for(;d::truth((_n_x_15762<165.0));(void)((_n_x_15762++))){d::check_cancel();double _n_y_15763=(_n_r_15761+0.5);
bool _n_on_15764=(_n_y_15763>=_n_top_15760);
double _n_lit_15765=(d::truth((_n_x_15762<144.0))?0.6:(d::truth((_n_y_15763<(_n_top_15760+1.0)))?0.5:0.0));
if((((d::truth(_n_on_15764)&&d::truth((d::mod((_n_x_15762-142.0),3.0)==1.0)))&&d::truth((d::mod((_n_r_15761-std::floor(_n_top_15760)),3.0)==1.0)))&&d::truth((_n_y_15763>(_n_top_15760+1.0))))){d::check_cancel();(void)((_n_lit_15765=0.3));
}
for(auto &&_n_item_16079:d::Array<double,false>{145.0,153.5,162.0}){d::check_cancel();double _n_cx_15766=_n_item_16079;
{
double _n_dx_15767=((_n_x_15762+0.5)-_n_cx_15766);
double _n_dy_15768=(_n_y_15763-_n_top_15760);
if((d::truth(((std::pow((_n_dx_15767/1.7),2.0)+std::pow((_n_dy_15768/2.2),2.0))<=1.0))&&d::truth((_n_dy_15768<0.0)))){d::check_cancel();(void)(((_n_on_15764=true),(_n_lit_15765=(d::truth((_n_dx_15767<(-d::number(0.5))))?0.6:0.0))));
}
if(((d::truth((std::fabs(_n_dx_15767)<0.5))&&d::truth((_n_dy_15768<(-d::number(2.2)))))&&d::truth((_n_dy_15768>(-d::number(3.2)))))){d::check_cancel();(void)(((_n_on_15764=true),(_n_lit_15765=0.3)));
}

}
}
if(d::truth(_n_on_15764)){d::check_cancel();(void)(([&](){auto _n_argument_16080=_n_x_15762;auto _n_argument_16081=_n_r_15761;auto _n_argument_16082=this->_n_fortCol_15625(_n_lit_15765);auto _n_argument_16083=(_n_HILL_15592+0.04);auto _n_argument_16084=0.04;return this->_n_put_15621(_n_argument_16080,_n_argument_16081,_n_argument_16082,_n_argument_16083,std::optional<double>(_n_argument_16084));})());
}
}}
}}

}
this->_n_hands_15626=d::Array<std::shared_ptr<_n_Record_15627>,false>{};
{double _n_li_15807=0.0;
for(;d::truth((_n_li_15807<double(_n_LAYERS_15596.size())));(void)((_n_li_15807++))){d::check_cancel();std::shared_ptr<_n_Record_15597> _n_L_15808=d::at(_n_LAYERS_15596,_n_li_15807);
if(d::truth((_n_li_15807==4.0))){d::check_cancel();(void)(this->_n_hawaMahal_15630(108.0,93.0,0.8));
}
double _n_rp_15809=d::at(d::Array<double,false>{1.0,1.0,2.0,2.0,3.0},_n_li_15807);
double _n_x0_15810=((-d::number(2.0))-std::floor((_n_hash_15598(_n_li_15807,99.0)*6.0)));
{double _n_bi_15811=0.0;
for(;d::truth((_n_x0_15810<(_n_W_15582+2.0)));(void)((_n_bi_15811++))){d::check_cancel();double _n_s_15812=((_n_li_15807*1000.0)+_n_bi_15811);
double _n_w_15813=d::round((_n_L_15808->_p_wmin+(_n_hash_15598(_n_s_15812,1.0)*(_n_L_15808->_p_wmax-_n_L_15808->_p_wmin))));
double _n_h_15814=d::round((_n_L_15808->_p_hmin+(_n_hash_15598(_n_s_15812,2.0)*(_n_L_15808->_p_hmax-_n_L_15808->_p_hmin))));
double _n_top_15815=(_n_L_15808->_p_base-_n_h_15814);
double _n_pick_15816=_n_hash_15598(_n_s_15812,3.0);
auto&& _n_pc_15817=d::at(_n_PLASTER_15595,(d::truth((_n_pick_15816<0.6))?0.0:(d::truth((_n_pick_15816<0.85))?1.0:(d::truth((_n_pick_15816<0.95))?2.0:3.0))));
double _n_tone_15818=(0.92+(0.12*_n_hash_15598(_n_s_15812,5.0)));
auto&& _n_roof_15819=std::array<double,3>{(_n_mix_15603(d::at(_n_pc_15817,0.0),1.0,0.3)*_n_tone_15818),(_n_mix_15603(d::at(_n_pc_15817,1.0),0.84,0.3)*_n_tone_15818),(_n_mix_15603(d::at(_n_pc_15817,2.0),0.72,0.3)*_n_tone_15818)};
auto&& _n_face_15820=std::array<double,3>{(d::at(_n_pc_15817,0.0)*_n_tone_15818),(d::at(_n_pc_15817,1.0)*_n_tone_15818),(d::at(_n_pc_15817,2.0)*_n_tone_15818)};
bool _n_kangura_15821=([&]()->bool{auto _n_logical_16085=(_n_li_15807>=1.0);return d::truth(_n_logical_16085)?(_n_hash_15598(_n_s_15812,4.0)<0.65):_n_logical_16085;})();
double _n_px_15822=(d::truth((_n_li_15807<=2.0))?3.0:4.0);
double _n_py_15823=(d::truth((_n_li_15807<=2.0))?4.0:5.0);
double _n_ww_15824=(d::truth((_n_li_15807==4.0))?2.0:1.0);
double _n_wh_15825=(d::truth((_n_li_15807>=3.0))?3.0:2.0);
{double _n_r_15826=d::maximum({0.0,(_n_top_15815-(d::truth(_n_kangura_15821)?(d::truth((_n_li_15807==4.0))?2.0:1.0):0.0))});
for(;d::truth((_n_r_15826<_n_H_15583));(void)((_n_r_15826++))){d::check_cancel();{double _n_x_15827=d::maximum({0.0,_n_x0_15810});
for(;d::truth((_n_x_15827<d::minimum({_n_W_15582,(_n_x0_15810+_n_w_15813)})));(void)((_n_x_15827++))){d::check_cancel();double _n_lx_15828=(_n_x_15827-_n_x0_15810);
double _n_ly_15829=(_n_r_15826-_n_top_15815);
double _n_fy_15830=(_n_ly_15829-_n_rp_15809);
double _n_light_15831=0.72;
auto&& _n_c_15832=_n_face_15820;
if(((d::truth((_n_lx_15828>=(_n_w_15813-1.0)))&&d::truth((_n_li_15807>=1.0)))&&d::truth((_n_ly_15829>=0.0)))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15827,_n_r_15826,_n_face_15820,0.12,(_n_L_15808->_p_haze*0.5),_n_L_15808->_p_d));
continue;
}
if(d::truth((_n_ly_15829<0.0))){d::check_cancel();if(d::truth((d::truth((_n_li_15807==4.0))?(d::mod(_n_lx_15828,4.0)>=2.0):(d::truth((_n_li_15807==3.0))?(d::mod(_n_lx_15828,3.0)==2.0):(d::mod(_n_lx_15828,2.0)==1.0))))){d::check_cancel();continue;
}
(void)((_n_light_15831=1.1));
}else {d::check_cancel();if(d::truth((_n_fy_15830<0.0))){d::check_cancel();(void)(((_n_c_15832=_n_roof_15819),(_n_light_15831=((d::truth((_n_ly_15829==0.0))?1.05:0.85)-(0.05*_n_li_15807)))));
}else {d::check_cancel();if(d::truth((_n_fy_15830<1.0))){d::check_cancel();(void)((_n_light_15831=(d::truth((_n_li_15807<2.0))?0.8:1.25)));
}else {d::check_cancel();if(d::truth((_n_fy_15830<2.0))){d::check_cancel();(void)((_n_light_15831=(_n_light_15831*0.5)));
}else {d::check_cancel();if((d::truth((_n_lx_15828<1.0))&&d::truth((_n_li_15807>=2.0)))){d::check_cancel();(void)((_n_light_15831=(_n_light_15831*1.3)));
}else {d::check_cancel();if(d::truth((_n_lx_15828>=(_n_w_15813-2.0)))){d::check_cancel();(void)((_n_light_15831=(_n_light_15831*0.6)));
}
}
(void)((_n_light_15831=(_n_light_15831*(1.0-(0.8*_n_smooth_15602(2.0,9.0,_n_fy_15830))))));
if(((((((d::truth((_n_li_15807>=3.0))&&d::truth((_n_lx_15828>=1.0)))&&d::truth((_n_lx_15828<(_n_w_15813-1.0))))&&d::truth((_n_fy_15830>=3.0)))&&d::truth((d::mod((_n_lx_15828-1.0),_n_px_15822)<_n_ww_15824)))&&d::truth((d::mod((_n_fy_15830-3.0),_n_py_15823)<_n_wh_15825)))&&d::truth((([&](){auto _n_argument_16086=((_n_s_15812*7.0)+std::floor(((_n_lx_15828-1.0)/_n_px_15822)));auto _n_argument_16087=std::floor(((_n_fy_15830-3.0)/_n_py_15823));return _n_hash_15598(_n_argument_16086,_n_argument_16087);})()>0.5)))){d::check_cancel();(void)((_n_light_15831=(_n_light_15831*0.35)));
}
}
}
}
}
(void)(([&](){auto _n_argument_16088=_n_x_15827;auto _n_argument_16089=_n_r_15826;auto _n_argument_16090=_n_c_15832;auto _n_argument_16091=(_n_light_15831+(d::truth((_n_fy_15830<1.0))?(0.25*std::exp(((-d::number(std::fabs((_n_x_15827-d::at(_n_SUN_15585,0.0)))))/45.0))):0.0));auto _n_argument_16092=_n_L_15808->_p_haze;auto _n_argument_16093=_n_L_15808->_p_d;return this->_n_wall_15629(_n_argument_16088,_n_argument_16089,_n_argument_16090,_n_argument_16091,_n_argument_16092,_n_argument_16093);})());
if(d::truth((_n_fy_15830>=2.0))){d::check_cancel();(void)(([&](){auto&& _n_array_16094=this->_n_flo_15620;auto _n_index_16095=((_n_r_15826*_n_W_15582)+_n_x_15827);auto _n_value_16096=0.0;d::put(_n_array_16094,_n_index_16095,_n_value_16096);return _n_value_16096;})());
}
}}
}}
if(((d::truth((_n_li_15807>=2.0))&&d::truth((_n_w_15813>=7.0)))&&d::truth((_n_hash_15598(_n_s_15812,12.0)<0.4)))){d::check_cancel();double _n_mw_15833=(_n_li_15807+1.0);
double _n_mh_15834=_n_li_15807;
double _n_mx_15835=((_n_x0_15810+1.0)+std::floor((_n_hash_15598(_n_s_15812,14.0)*((_n_w_15813-_n_mw_15833)-2.0))));
{double _n_r_15836=(_n_top_15815-_n_mh_15834);
for(;d::truth((_n_r_15836<_n_top_15815));(void)((_n_r_15836++))){d::check_cancel();{double _n_x_15837=_n_mx_15835;
for(;d::truth((_n_x_15837<(_n_mx_15835+_n_mw_15833)));(void)((_n_x_15837++))){d::check_cancel();(void)(this->_n_wall_15629(_n_x_15837,_n_r_15836,_n_roof_15819,(d::truth((_n_r_15836==(_n_top_15815-_n_mh_15834)))?1.1:(d::truth((_n_x_15837==_n_mx_15835))?0.6:0.42)),_n_L_15808->_p_haze,_n_L_15808->_p_d));
}}
}}
}
if(((d::truth((_n_li_15807>=2.0))&&d::truth((_n_w_15813>=6.0)))&&d::truth((_n_hash_15598(_n_s_15812,13.0)<0.45)))){d::check_cancel();double _n_tw_15838=(d::truth((_n_li_15807==4.0))?3.0:2.0);
double _n_th_15839=(_n_li_15807-1.0);
double _n_tx_15840=((((_n_x0_15810+_n_w_15813)-_n_tw_15838)-1.0)-std::floor((_n_hash_15598(_n_s_15812,15.0)*3.0)));
{double _n_r_15841=(_n_top_15815-_n_th_15839);
for(;d::truth((_n_r_15841<_n_top_15815));(void)((_n_r_15841++))){d::check_cancel();{double _n_x_15842=_n_tx_15840;
for(;d::truth((_n_x_15842<(_n_tx_15840+_n_tw_15838)));(void)((_n_x_15842++))){d::check_cancel();(void)(this->_n_put_15621(_n_x_15842,_n_r_15841,std::array<double,3>{0.1,0.08,0.12},_n_L_15808->_p_d,std::optional<double>(0.02)));
}}
}}
}
if(((d::truth((_n_li_15807>=1.0))&&d::truth((_n_w_15813>=5.0)))&&d::truth((_n_hash_15598(_n_s_15812,6.0)<_n_L_15808->_p_chh)))){d::check_cancel();double _n_cw_15843=d::at(d::Array<double,false>{0.0,3.0,4.0,6.0,8.0},_n_li_15807);
double _n_cx_15844=(_n_x0_15810+(_n_w_15813*(0.25+(0.5*_n_hash_15598(_n_s_15812,7.0)))));
double _n_ch_15845=([&](){auto _n_argument_16097=1.0;auto _n_argument_16098=d::round((_n_cw_15843*0.75));return d::maximum({_n_argument_16097,_n_argument_16098});})();
double _n_rr_15846=((_n_cw_15843/2.0)+0.3);
double _n_slab_15847=((_n_top_15815-_n_ch_15845)-1.0);
{double _n_r_15848=std::floor(((_n_slab_15847-(_n_rr_15846*1.1))-2.0));
for(;d::truth((_n_r_15848<_n_top_15815));(void)((_n_r_15848++))){d::check_cancel();{double _n_x_15849=std::floor(((_n_cx_15844-_n_rr_15846)-1.0));
for(;d::truth((_n_x_15849<=((_n_cx_15844+_n_rr_15846)+1.0)));(void)((_n_x_15849++))){d::check_cancel();double _n_y_15850=(_n_r_15848+0.5);
double _n_dx_15851=((_n_x_15849+0.5)-_n_cx_15844);
double _n_light_15852=(-d::number(1.0));
if((d::truth((_n_y_15850>=(_n_top_15815-_n_ch_15845)))&&d::truth((std::fabs(_n_dx_15851)<=(_n_cw_15843/2.0))))){d::check_cancel();(void)((_n_light_15852=((d::truth((std::fabs(_n_dx_15851)>((_n_cw_15843/2.0)-1.0)))||d::truth((_n_cw_15843<3.0)))?0.75:0.12)));
}else {d::check_cancel();if(((d::truth((_n_y_15850>=_n_slab_15847))&&d::truth((_n_y_15850<(_n_top_15815-_n_ch_15845))))&&d::truth((std::fabs(_n_dx_15851)<=((_n_cw_15843/2.0)+0.7))))){d::check_cancel();(void)((_n_light_15852=1.15));
}else {d::check_cancel();if((d::truth((_n_y_15850<_n_slab_15847))&&d::truth(((std::pow((_n_dx_15851/_n_rr_15846),2.0)+std::pow(((_n_y_15850-_n_slab_15847)/(_n_rr_15846*0.95)),2.0))<=1.0)))){d::check_cancel();(void)((_n_light_15852=(0.6+(0.5*_n_clamp_15601((((-d::number(_n_dx_15851))/_n_rr_15846)+0.3))))));
}else {d::check_cancel();if(((d::truth((_n_y_15850<_n_slab_15847))&&d::truth((std::fabs(_n_dx_15851)<0.5)))&&d::truth((_n_y_15850>((_n_slab_15847-(_n_rr_15846*0.95))-1.1))))){d::check_cancel();(void)((_n_light_15852=0.9));
}
}
}
}
if((((d::truth((_n_light_15852<0.0))||d::truth((_n_x_15849<0.0)))||d::truth((_n_x_15849>=_n_W_15582)))||d::truth((_n_r_15848<0.0)))){d::check_cancel();continue;
}
auto&& _n_hz_15853=_n_hazeAt_15607((_n_x_15849+0.5));
auto&& _n_c_15854=std::array<double,3>{(1.0*_n_light_15852),(0.84*_n_light_15852),(0.72*_n_light_15852)};
(void)(([&](){auto _n_argument_16099=_n_x_15849;auto _n_argument_16100=_n_r_15848;auto _n_argument_16101=std::array<double,3>{_n_mix_15603(d::at(_n_c_15854,0.0),d::at(_n_hz_15853,0.0),_n_L_15808->_p_haze),_n_mix_15603(d::at(_n_c_15854,1.0),d::at(_n_hz_15853,1.0),_n_L_15808->_p_haze),_n_mix_15603(d::at(_n_c_15854,2.0),d::at(_n_hz_15853,2.0),_n_L_15808->_p_haze)};auto _n_argument_16102=_n_L_15808->_p_d;auto _n_argument_16103=0.04;return this->_n_put_15621(_n_argument_16099,_n_argument_16100,_n_argument_16101,_n_argument_16102,std::optional<double>(_n_argument_16103));})());
}}
}}
}
if((d::truth((_n_L_15808->_p_size>=2.0))&&d::truth((_n_w_15813>=5.0)))){d::check_cancel();double _n_n_15855=((d::truth((_n_li_15807==4.0))&&d::truth((_n_w_15813>20.0)))?2.0:1.0);
{double _n_j_15856=0.0;
for(;d::truth((_n_j_15856<_n_n_15855));(void)((_n_j_15856++))){d::check_cancel();if(d::truth((_n_hash_15598(_n_s_15812,(40.0+_n_j_15856))>_n_L_15808->_p_fig))){d::check_cancel();continue;
}
double _n_fx_15857=d::round(((_n_x0_15810+2.0)+(((_n_j_15856+_n_hash_15598(_n_s_15812,(42.0+_n_j_15856)))/_n_n_15855)*(_n_w_15813-4.0))));
if((d::truth((_n_fx_15857<3.0))||d::truth((_n_fx_15857>(_n_W_15582-3.0))))){d::check_cancel();continue;
}
(void)(this->_n_drawFigure_15628(_n_fx_15857,(_n_top_15815+_n_rp_15809),_n_L_15808->_p_size,((_n_s_15812*3.0)+_n_j_15856),_n_L_15808->_p_d));
}}
}
(void)((_n_x0_15810=(_n_x0_15810+_n_w_15813)));
}}
}}
this->_n_kites_15631=d::Array<std::shared_ptr<_n_Record_15632>,false>{};
this->_n_HERO_15635=d::Array<std::array<double,6>,false>{std::array<double,6>{30.0,15.0,1.08,0.0,2.0,2.0},std::array<double,6>{152.0,12.0,0.98,3.0,9.0,1.0},std::array<double,6>{96.0,28.0,0.8,5.0,2.0,0.0},std::array<double,6>{182.0,40.0,0.86,6.0,9.0,5.0},std::array<double,6>{74.0,8.0,0.72,2.0,8.0,3.0},std::array<double,6>{124.0,34.0,0.62,1.0,4.0,1.0}};
(void)(d::forEach(this->_n_HERO_15635,[&]( std::array<double,6> _a0,double _a1) mutable ->void{auto _n_binding_16104=_a0;
double _n_x_15870=d::at(_n_binding_16104,0.0);
double _n_y_15871=d::at(_n_binding_16104,1.0);
double _n_z_15872=d::at(_n_binding_16104,2.0);
double _n_a_15873=d::at(_n_binding_16104,3.0);
double _n_b_15874=d::at(_n_binding_16104,4.0);
double _n_design_15875=d::at(_n_binding_16104,5.0);
double _n_i_15876=_a1;
{
std::shared_ptr<_n_Record_15632> _n_k_15877=this->_n_makeKite_15633((900.0+_n_i_15876),_n_x_15870,_n_y_15871,_n_z_15872);
(void)(((((_n_k_15877->_p_A=d::at(_n_PAPER_15593,_n_a_15873)),(_n_k_15877->_p_B=d::at(_n_PAPER_15593,_n_b_15874))),(_n_k_15877->_p_design=_n_design_15875)),(_n_k_15877->_p_dive=(d::truth((_n_i_15876==2.0))?1.0:0.0))));
(void)(this->_n_kites_15631.push(_n_k_15877));

}
}));
(void)(d::forEach(this->_n_hands_15626,[&]( std::shared_ptr<_n_Record_15627> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_15627> _n_hd_15878=_a0;
double _n_i_15879=_a1;
{
double _n_z_15880=((0.2+(0.55*_n_hd_15878->_p_d))+((_n_hash_15598(_n_i_15879,51.0)-0.5)*0.2));
double _n_alt_15881=(14.0+(_n_hash_15598(_n_i_15879,52.0)*46.0));
double _n_x_15882=(_n_hd_15878->_p_x-((6.0+(_n_hash_15598(_n_i_15879,53.0)*34.0))*(0.5+_n_z_15880)));
double _n_y_15883=d::minimum({(_n_hd_15878->_p_y-10.0),((_n_HZ_15584-2.0)-(_n_alt_15881*(0.3+(0.75*_n_z_15880))))});
if(d::truth((!d::truth(this->_n_room_15634(_n_x_15882,_n_y_15883,_n_z_15880))))){d::check_cancel();return;
}
std::shared_ptr<_n_Record_15632> _n_k_15884=this->_n_makeKite_15633((500.0+_n_i_15879),_n_x_15882,_n_y_15883,_n_z_15880);
(void)((_n_k_15884->_p_hand=d::Array<double,false>{_n_hd_15878->_p_x,_n_hd_15878->_p_y,_n_hd_15878->_p_d}));
(void)(this->_n_kites_15631.push(_n_k_15884));

}
}));
{double _n_i_15885=0.0;
for(;(d::truth((_n_i_15885<2000.0))&&d::truth((double(this->_n_kites_15631.size())<66.0)));(void)((_n_i_15885++))){d::check_cancel();double _n_z_15886=(0.04+(0.7*([&](){auto _n_argument_16105=_n_hash_15598(_n_i_15885,61.0);auto _n_argument_16106=1.6;return std::pow(_n_argument_16105,_n_argument_16106);})()));
double _n_alt_15887=(6.0+(_n_hash_15598(_n_i_15885,62.0)*72.0));
double _n_y_15888=((_n_HZ_15584-3.0)-(_n_alt_15887*(0.3+(0.8*_n_z_15886))));
double _n_x_15889=(2.0+(_n_hash_15598(_n_i_15885,63.0)*196.0));
if(d::truth(this->_n_room_15634(_n_x_15889,_n_y_15888,_n_z_15886))){d::check_cancel();(void)(this->_n_kites_15631.push(this->_n_makeKite_15633(_n_i_15885,_n_x_15889,_n_y_15888,_n_z_15886)));
}
}}
{double _n_i_15890=0.0;
for(;d::truth((_n_i_15890<6.0));(void)((_n_i_15890++))){d::check_cancel();std::shared_ptr<_n_Record_15632> _n_k_15891=([&](){auto _n_argument_16107=(1200.0+_n_i_15890);auto _n_argument_16108=((15.0+(_n_i_15890*33.0))+(_n_hash_15598(_n_i_15890,71.0)*14.0));auto _n_argument_16109=0.0;auto _n_argument_16110=(0.45+(0.35*_n_hash_15598(_n_i_15890,72.0)));return this->_n_makeKite_15633(_n_argument_16107,_n_argument_16108,_n_argument_16109,_n_argument_16110);})();
(void)(((((_n_k_15891->_p_cut=(1.2+(_n_hash_15598(_n_i_15890,73.0)*1.6))),(_n_k_15891->_p_period=(13.0+(_n_hash_15598(_n_i_15890,74.0)*7.0)))),(_n_k_15891->_p_drop=_n_hash_15598(_n_i_15890,75.0))),(_n_k_15891->_p_tail=14.0)));
(void)(this->_n_kites_15631.push(_n_k_15891));
}}
(void)(this->_n_kites_15631.sort([=]( std::shared_ptr<_n_Record_15632> _a0,std::shared_ptr<_n_Record_15632> _a1) mutable ->double{std::shared_ptr<_n_Record_15632> _n_a_15892=_a0;
std::shared_ptr<_n_Record_15632> _n_b_15893=_a1;
return (_n_a_15892->_p_z-_n_b_15893->_p_z);}));
this->_n_lit_15636=d::map(this->_n_kites_15631,[&]( std::shared_ptr<_n_Record_15632> _a0) mutable ->d::Array<std::array<double,3>,false>{std::shared_ptr<_n_Record_15632> _n_K_15894=_a0;
{
double _n_d_15895=d::hypot(std::initializer_list<double>{(_n_K_15894->_p_x-d::at(_n_SUN_15585,0.0)),(_n_K_15894->_p_y-d::at(_n_SUN_15585,1.0))});
double _n_g_15896=std::exp(((-d::number(_n_d_15895))/22.0));
auto _n_f_15897=[&]( std::array<double,3> _a0) mutable ->std::array<double,3>{auto&& _n_c_15898=_a0;
return std::array<double,3>{((d::at(_n_c_15898,0.0)*(0.8+(0.3*_n_g_15896)))+(0.3*_n_g_15896)),((d::at(_n_c_15898,1.0)*(0.8+(0.3*_n_g_15896)))+(0.24*_n_g_15896)),((d::at(_n_c_15898,2.0)*(0.8+(0.3*_n_g_15896)))+(0.1*_n_g_15896))};};
return d::Array<std::array<double,3>,false>{_n_f_15897(_n_K_15894->_p_A),_n_f_15897(_n_K_15894->_p_B)};

}
});
this->_n_BIRDS_15637=d::Array<std::shared_ptr<_n_Record_15638>,false>(d::from(12.0,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_15638>{double _n_i_15900=_a1;
return ([&](){auto _n_object_16113=std::make_shared<_n_Record_15638>();_n_object_16113->_p_x=((_n_i_15900*5.0)+(_n_hash_15598(_n_i_15900,81.0)*6.0));_n_object_16113->_p_y=((33.0+(_n_hash_15598(_n_i_15900,82.0)*9.0))+(d::mod(_n_i_15900,3.0)*2.0));_n_object_16113->_p_p=(_n_hash_15598(_n_i_15900,84.0)*6.28);_n_object_16113->_p_circle=(_n_i_15900>=9.0);_n_object_16113->_p_r=(8.0+(_n_hash_15598(_n_i_15900,85.0)*9.0));return _n_object_16113;})();}));
this->_n_R_15639=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_G_15640=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_B_15641=d::Array<float,true>(size_t(this->_n_N_15609));
this->_n_F_15642=d::Array<float,true>(size_t(this->_n_N_15609));
_render=[=]( double _a0,std::shared_ptr<_n_Record_16008> _a1) mutable ->d::String{double _n_t_15966=_a0;
auto _n_binding_16116=(d::present(_a1)?_a1:([&](){auto _n_object_16115=std::make_shared<_n_Record_16008>();return _n_object_16115;})());
std::optional<d::Array<uint8_t,true>> _n_color_15967=_n_binding_16116->_p_color;
{
(void)((((this->_n_R_15639.set(this->_n_bgR_15613),this->_n_G_15640.set(this->_n_bgG_15614)),this->_n_B_15641.set(this->_n_bgB_15615)),this->_n_F_15642.set(this->_n_flo_15620)));
bool _n_bird_15968=false;
{double _n_i_15969=0.0;
for(;d::truth((_n_i_15969<double(this->_n_kites_15631.size())));(void)((_n_i_15969++))){d::check_cancel();std::shared_ptr<_n_Record_15632> _n_K_15970=d::at(this->_n_kites_15631,_n_i_15969);
if((d::truth((!d::truth(_n_bird_15968)))&&d::truth((_n_K_15970->_p_z>0.6)))){d::check_cancel();(void)((_n_bird_15968=true));
for(auto &&_n_item_16117:this->_n_BIRDS_15637){d::check_cancel();std::shared_ptr<_n_Record_15638> _n_b_15971=_n_item_16117;
{
double _n_bx_15972{};
double _n_by_15973{};
d::Array<d::Array<double,false>,false> _n_cells_15974{};
if(d::truth(_n_b_15971->_p_circle)){d::check_cancel();double _n_a_15975=((_n_t_15966*0.3)+_n_b_15971->_p_p);
(void)((_n_bx_15972=(152.0+((_n_b_15971->_p_r*1.8)*std::cos(_n_a_15975)))));
(void)((_n_by_15973=(24.0+((_n_b_15971->_p_r*0.5)*std::sin(_n_a_15975)))));
double _n_tip_15976=(d::truth((std::sin(_n_a_15975)>0.0))?1.0:0.0);
(void)((_n_cells_15974=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(2.0)),0.0},d::Array<double,false>{2.0,0.0},d::Array<double,false>{(-d::number(3.0)),_n_tip_15976},d::Array<double,false>{3.0,(1.0-_n_tip_15976)},d::Array<double,false>{0.0,1.0}}));
}else {d::check_cancel();(void)((_n_bx_15972=(d::mod(((_n_b_15971->_p_x+75.0)+(_n_t_15966*4.5)),280.0)-50.0)));
(void)((_n_by_15973=(_n_b_15971->_p_y+(1.2*std::sin(((_n_t_15966*0.8)+_n_b_15971->_p_p))))));
double _n_flap_15977=std::sin(((_n_t_15966*10.0)+_n_b_15971->_p_p));
double _n_wing_15978=(d::truth((_n_flap_15977>0.3))?(-d::number(1.0)):(d::truth((_n_flap_15977<(-d::number(0.3))))?1.0:0.0));
(void)((_n_cells_15974=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(2.0)),_n_wing_15978},d::Array<double,false>{2.0,_n_wing_15978}}));
}
double _n_ix_15979=std::floor(_n_bx_15972);
double _n_iy_15980=std::floor(_n_by_15973);
for(auto &&_n_item_16118:_n_cells_15974){d::check_cancel();auto _n_binding_16119=_n_item_16118;
double _n_ox_15981=d::at(_n_binding_16119,0.0);
double _n_oy_15982=d::at(_n_binding_16119,1.0);
{
double _n_x_15983=(_n_ix_15979+_n_ox_15981);
double _n_y_15984=(_n_iy_15980+_n_oy_15982);
if((((d::truth((_n_x_15983<0.0))||d::truth((_n_x_15983>=_n_W_15582)))||d::truth((_n_y_15984<0.0)))||d::truth((_n_y_15984>=_n_H_15583)))){d::check_cancel();continue;
}
double _n_k_15985=((_n_y_15984*_n_W_15582)+_n_x_15983);
if(d::truth((d::at(this->_n_dep_15619,_n_k_15985)>=0.6))){d::check_cancel();continue;
}
(void)(this->_n_blend_15643(_n_k_15985,0.07,0.05,0.1,1.0));
(void)(([&](){auto&& _n_array_16120=this->_n_F_15642;auto _n_index_16121=_n_k_15985;auto _n_value_16122=0.0;d::put(_n_array_16120,_n_index_16121,_n_value_16122);return _n_value_16122;})());

}
}

}
}
}
double _n_cx_15986{};
double _n_cy_15987{};
double _n_ang_15988{};
double _n_fl_15989=1.0;
if(d::truth(_n_K_15970->_p_cut)){d::check_cancel();double _n_ph_15990=d::mod(((_n_t_15966/_n_K_15970->_p_period)+_n_K_15970->_p_drop),1.0);
(void)((_n_cx_15986=((_n_K_15970->_p_x+(10.0*std::sin(((_n_ph_15990*7.0)+_n_K_15970->_p_p1))))-(_n_ph_15990*26.0))));
(void)((_n_cy_15987=((-d::number(14.0))+(_n_ph_15990*96.0))));
(void)((_n_ang_15988=((_n_t_15966*_n_K_15970->_p_cut)+_n_K_15970->_p_p2)));
(void)((_n_fl_15989=([&](){auto _n_argument_16123=0.22;auto _n_argument_16124=std::fabs(std::cos((((_n_t_15966*_n_K_15970->_p_cut)*0.7)+_n_K_15970->_p_p1)));return d::maximum({_n_argument_16123,_n_argument_16124});})()));
(void)(([&](){auto _n_argument_16125=_n_cx_15986;auto _n_argument_16126=_n_cy_15987;auto _n_argument_16127=_n_K_15970->_p_z;auto _n_argument_16128=((_n_cx_15986+9.0)+(3.0*std::sin(((_n_t_15966*3.0)+_n_K_15970->_p_p1))));auto _n_argument_16129=(_n_cy_15987-14.0);auto _n_argument_16130=_n_K_15970->_p_z;auto _n_argument_16131=true;auto _n_argument_16132=_n_K_15970->_p_z;return this->_n_string_15644(_n_argument_16125,_n_argument_16126,_n_argument_16127,_n_argument_16128,_n_argument_16129,_n_argument_16130,_n_argument_16131,_n_argument_16132);})());
}else {d::check_cancel();double _n_sw_15991=std::sin(((_n_t_15966*_n_K_15970->_p_w1)+_n_K_15970->_p_p1));
double _n_sw2_15992=std::sin(((_n_t_15966*_n_K_15970->_p_w2)+_n_K_15970->_p_p2));
(void)((_n_cx_15986=(_n_K_15970->_p_x+(_n_K_15970->_p_amp*_n_sw_15991))));
(void)((_n_cy_15987=(_n_K_15970->_p_y+((0.6*_n_K_15970->_p_amp)*_n_sw2_15992))));
(void)((_n_ang_15988=(_n_K_15970->_p_tilt+(0.2*std::sin(((((_n_t_15966*_n_K_15970->_p_w1)*1.3)+_n_K_15970->_p_p1)+1.0))))));
if(d::truth(_n_K_15970->_p_dive)){d::check_cancel();double _n_a_15993=((_n_t_15966*0.9)+_n_K_15970->_p_p2);
(void)((_n_cx_15986=(_n_cx_15986+((2.0+(4.0*_n_K_15970->_p_z))*std::sin(_n_a_15993)))));
(void)((_n_cy_15987=(_n_cy_15987+((1.2+(2.5*_n_K_15970->_p_z))*std::sin((2.0*_n_a_15993))))));
(void)((_n_ang_15988=(_n_ang_15988+(0.45*std::cos(_n_a_15993)))));
}
if(d::truth(_n_K_15970->_p_hand)){d::check_cancel();(void)(this->_n_string_15644(d::at(d::read(_n_K_15970->_p_hand),0.0),d::at(d::read(_n_K_15970->_p_hand),1.0),d::at(d::read(_n_K_15970->_p_hand),2.0),_n_cx_15986,_n_cy_15987,_n_K_15970->_p_z,false,_n_K_15970->_p_z));
}else {d::check_cancel();if(d::truth(_n_K_15970->_p_tail)){d::check_cancel();(void)(this->_n_string_15644(_n_cx_15986,_n_cy_15987,_n_K_15970->_p_z,(_n_cx_15986+(_n_K_15970->_p_tail*0.42)),(_n_cy_15987+_n_K_15970->_p_tail),_n_K_15970->_p_z,true,_n_K_15970->_p_z));
}
}
}
(void)(this->_n_drawKite_15645(_n_K_15970,d::at(this->_n_lit_15636,_n_i_15969),_n_cx_15986,_n_cy_15987,_n_ang_15988,_n_fl_15989,_n_t_15966));
}}
{double _n_r_15994=0.0;
for(;d::truth((_n_r_15994<_n_H_15583));(void)((_n_r_15994++))){d::check_cancel();{double _n_x_15995=0.0;
for(;d::truth((_n_x_15995<_n_W_15582));(void)((_n_x_15995++))){d::check_cancel();double _n_k_15996=((_n_r_15994*_n_W_15582)+_n_x_15995);
double _n_cr_15997=d::at(this->_n_R_15639,_n_k_15996);
double _n_cg_15998=d::at(this->_n_G_15640,_n_k_15996);
double _n_cbl_15999=d::at(this->_n_B_15641,_n_k_15996);
double _n_floor_16000=d::at(this->_n_F_15642,_n_k_15996);
double _n_peak_16001=d::maximum({_n_cr_15997,_n_cg_15998,_n_cbl_15999,0.0001});
double _n_level_16002=_n_clamp_15601((_n_floor_16000+(((1.0-_n_floor_16000)*std::pow(_n_peak_16001,0.85))*0.95)));
double _n_step_16003=([&](){auto _n_argument_16133=0.0;auto _n_argument_16134=([&](){auto _n_argument_16135=3.0;auto _n_argument_16136=d::round(((_n_level_16002*3.0)+d::at(_n_BAYER_15589,((double(d::i32(_n_r_15994)&d::i32(3.0))*4.0)+double(d::i32(_n_x_15995)&d::i32(3.0))))));return d::minimum({_n_argument_16135,_n_argument_16136});})();return d::maximum({_n_argument_16133,_n_argument_16134});})();
(void)(([&](){auto&& _n_array_16137=this->_n_out_15610;auto _n_index_16138=_n_k_15996;auto _n_value_16139=d::at(_n_DOTS_15587,_n_step_16003);d::put(_n_array_16137,_n_index_16138,_n_value_16139);return _n_value_16139;})());
if(d::truth(_n_color_15967)){d::check_cancel();double _n_want_16004=(d::truth(_n_step_16003)?d::minimum({1.0,((_n_level_16002+0.06)/d::at(_n_COVER_15588,_n_step_16003))}):0.0);
double _n_s_16005=((0.3+(0.7*_n_want_16004))/_n_peak_16001);
(void)(([&](){auto&& _n_array_16140=d::read(_n_color_15967);auto _n_index_16141=_n_k_15996;auto _n_value_16142=([&](){auto _n_argument_16143=_n_clamp_15601((_n_cr_15997*_n_s_16005));auto _n_argument_16144=_n_clamp_15601((_n_cg_15998*_n_s_16005));auto _n_argument_16145=_n_clamp_15601((_n_cbl_15999*_n_s_16005));return this->_n_nearest_15612(_n_argument_16143,_n_argument_16144,_n_argument_16145);})();d::put(_n_array_16140,_n_index_16141,_n_value_16142);return _n_value_16142;})());
}
}}
}}
d::Array<d::String,false> _n_lines_16006=d::Array<d::String,false>{};
{double _n_r_16007=0.0;
for(;d::truth((_n_r_16007<_n_H_15583));(void)((_n_r_16007++))){d::check_cancel();(void)(_n_lines_16006.push(d::join(this->_n_out_15610.slice((_n_r_16007*_n_W_15582),((_n_r_16007+1.0)*_n_W_15582)),d::String(u""))));
}}
return d::join(_n_lines_16006,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("kite-festival").cols)*ascii::catalog_meta("kite-festival").rows);auto _env=std::make_shared<_n_Record_16008>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &kite_festival_meta(){return catalog_meta("kite-festival");}
std::unique_ptr<Piece> make_kite_festival(const AsciiPieceOptions &o){return std::make_unique<Native_kite_festival>(o);}
}
