// Direct, statically typed C++ from src/pieces/snow-train.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28522;
struct _n_Record_28580;
struct _n_Record_28786;
struct _n_Record_28886;
struct _n_Record_28522{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_28522> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28522>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_28580{
d::Array<d::Array<double,false>,false> _p_seeds{};
double _p_n{};
double _p_fall{};
double _p_sway{};
bool _p_big{};
double _p_v{};
bool _p_front{};
static std::shared_ptr<_n_Record_28580> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28580>();out->_p_seeds=d::decode<d::Array<d::Array<double,false>,false>>(j["seeds"]);out->_p_n=d::decode<double>(j["n"]);out->_p_fall=d::decode<double>(j["fall"]);out->_p_sway=d::decode<double>(j["sway"]);out->_p_big=d::decode<bool>(j["big"]);out->_p_v=d::decode<double>(j["v"]);out->_p_front=d::decode<bool>(j["front"]);return out;}
};
struct _n_Record_28786{
double _p_n{};
double _p_fall{};
double _p_sway{};
bool _p_big{};
double _p_v{};
bool _p_front{};
static std::shared_ptr<_n_Record_28786> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28786>();out->_p_n=d::decode<double>(j["n"]);out->_p_fall=d::decode<double>(j["fall"]);out->_p_sway=d::decode<double>(j["sway"]);out->_p_big=d::decode<bool>(j["big"]);out->_p_v=d::decode<double>(j["v"]);out->_p_front=d::decode<bool>(j["front"]);return out;}
};
struct _n_Record_28886{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28886> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28886>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_28544(double _a0,double _a1);
double _n_noise_28545(double _a0,double _a1,double _a2);
double _n_fbm_28546(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_28547(double _a0);
double _n_smooth_28548(double _a0,double _a1,double _a2);
double _n_mix_28549(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_28550(d::String _a0);
double _n_ground_28551(double _a0);
double _n_ridge_28552(double _a0);
double _n_woods_28553(double _a0);
double _n_riverY_28554(double _a0);
double _n_riverW_28555(double _a0);
double _n_pine_28556(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
std::shared_ptr<_n_Record_28522> _n_meta_28521=[](){return ([&](){auto _n_object_28889=std::make_shared<_n_Record_28522>();_n_object_28889->_p_name=d::String(u"snow train");_n_object_28889->_p_category=d::String(u"scenes");_n_object_28889->_p_note=d::String(u"a lit train crossing a snowy stone viaduct at night as snow falls");_n_object_28889->_p_cols=200.0;_n_object_28889->_p_rows=100.0;_n_object_28889->_p_cell=1.0;_n_object_28889->_p_fps=15.0;_n_object_28889->_p_ground=d::String(u"#070b16");_n_object_28889->_p_palette=d::Array<d::String,false>{d::String(u"#0c1428"),d::String(u"#121d38"),d::String(u"#19284a"),d::String(u"#22345e"),d::String(u"#2d4374"),d::String(u"#3b548a"),d::String(u"#4d68a0"),d::String(u"#6480b4"),d::String(u"#7f99c6"),d::String(u"#9db3d6"),d::String(u"#bccde4"),d::String(u"#d9e4f1"),d::String(u"#f1f5fb"),d::String(u"#ffe7b0"),d::String(u"#ffc56e"),d::String(u"#f29a3c"),d::String(u"#b8642a"),d::String(u"#6e3a22"),d::String(u"#3e1420"),d::String(u"#6a1e26"),d::String(u"#9a2c2e"),d::String(u"#ff4a3d"),d::String(u"#0b1a1e"),d::String(u"#11262a"),d::String(u"#1a3436"),d::String(u"#26474a"),d::String(u"#1e2230"),d::String(u"#2c3242"),d::String(u"#3e4658"),d::String(u"#586276"),d::String(u"#7c8698")};return _n_object_28889;})();}();
const double _n_W_28523=[](){return 200.0;}();
const double _n_H_28524=[](){return 100.0;}();
d::Array<double,false> _n_MOON_28525=[](){return d::Array<double,false>{152.0,15.0};}();
const double _n_MOON_R_28526=[](){return 7.0;}();
const double _n_ROOF_28527=[](){return 42.0;}();
const double _n_LAMP_Y_28528=[](){return 47.0;}();
const double _n_SPEED_28529=[](){return 7.0;}();
const double _n_LEN_28530=[](){return 156.0;}();
const double _n_MOUTH_28531=[](){return 185.0;}();
const double _n_PERIOD_28532=[](){return ((_n_MOUTH_28531+_n_LEN_28530)+40.0);}();
const d::String _n_DOTS_28533=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_28534=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_28535=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_28585=_a0;
return ((_n_v_28585/16.0)-0.47);});}();
const double _n_SKY_28536=[](){return 0.0;}();
const double _n_FAR_28537=[](){return 1.0;}();
const double _n_STONE_28538=[](){return 2.0;}();
const double _n_CAP_28539=[](){return 3.0;}();
const double _n_FRONT_28540=[](){return 4.0;}();
const double _n_RIVER_28541=[](){return 5.0;}();
const double _n_PANE_28542=[](){return 6.0;}();
const double _n_MOUTH_K_28543=[](){return 7.0;}();
double _n_hash_28544(double _a0,double _a1){double _n_x_28586=_a0;
double _n_y_28587=_a1;
{
double _n_h_28588=([&](){auto _n_left_28890=d::imul(double(d::i32(_n_x_28586)|d::i32(0.0)),374761393.0);auto _n_right_28891=d::imul(double(d::i32(_n_y_28587)|d::i32(0.0)),668265263.0);return (_n_left_28890+_n_right_28891);})();
(void)((_n_h_28588=d::imul(double(d::i32(_n_h_28588)^d::i32(double(d::u32(_n_h_28588)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_28588)^d::i32(double(d::u32(_n_h_28588)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_28545(double _a0,double _a1,double _a2){double _n_x_28589=_a0;
double _n_y_28590=_a1;
double _n_period_28591=_a2;
{
double _n_xi_28592=std::floor(_n_x_28589);
double _n_yi_28593=std::floor(_n_y_28590);
double _n_fx_28594=(_n_x_28589-_n_xi_28592);
double _n_fy_28595=(_n_y_28590-_n_yi_28593);
double _n_u_28596=((_n_fx_28594*_n_fx_28594)*(3.0-(2.0*_n_fx_28594)));
double _n_v_28597=((_n_fy_28595*_n_fy_28595)*(3.0-(2.0*_n_fy_28595)));
double _n_x0_28598=_n_xi_28592;
double _n_x1_28599=(_n_xi_28592+1.0);
if(d::truth(_n_period_28591)){d::check_cancel();(void)((_n_x0_28598=d::mod((d::mod(_n_xi_28592,_n_period_28591)+_n_period_28591),_n_period_28591)));
(void)((_n_x1_28599=d::mod((_n_x0_28598+1.0),_n_period_28591)));
}
double _n_a_28600=_n_hash_28544(_n_x0_28598,_n_yi_28593);
double _n_b_28601=_n_hash_28544(_n_x1_28599,_n_yi_28593);
double _n_c_28602=_n_hash_28544(_n_x0_28598,(_n_yi_28593+1.0));
double _n_d_28603=_n_hash_28544(_n_x1_28599,(_n_yi_28593+1.0));
return (((_n_a_28600+((_n_b_28601-_n_a_28600)*_n_u_28596))+((_n_c_28602-_n_a_28600)*_n_v_28597))+(((((_n_a_28600-_n_b_28601)-_n_c_28602)+_n_d_28603)*_n_u_28596)*_n_v_28597));

}
}

double _n_fbm_28546(double _a0,double _a1,double _a2,double _a3){double _n_x_28604=_a0;
double _n_y_28605=_a1;
double _n_octaves_28606=_a2;
double _n_period_28607=_a3;
{
double _n_s_28608=0.0;
double _n_n_28609=0.0;
double _n_amp_28610=0.5;
double _n_f_28611=1.0;
{double _n_i_28612=0.0;
for(;d::truth((_n_i_28612<_n_octaves_28606));(void)((_n_i_28612++))){d::check_cancel();(void)((_n_s_28608=(_n_s_28608+(_n_amp_28610*_n_noise_28545((_n_x_28604*_n_f_28611),(_n_y_28605*_n_f_28611),(_n_period_28607*_n_f_28611))))));
(void)((_n_n_28609=(_n_n_28609+_n_amp_28610)));
(void)((_n_amp_28610=(_n_amp_28610*0.5)));
(void)((_n_f_28611=(_n_f_28611*2.0)));
}}
return (_n_s_28608/_n_n_28609);

}
}

double _n_clamp_28547(double _a0){double _n_v_28613=_a0;
return (d::truth((_n_v_28613<0.0))?0.0:(d::truth((_n_v_28613>1.0))?1.0:_n_v_28613));}

double _n_smooth_28548(double _a0,double _a1,double _a2){double _n_a_28614=_a0;
double _n_b_28615=_a1;
double _n_v_28616=_a2;
{
double _n_k_28617=_n_clamp_28547(((_n_v_28616-_n_a_28614)/(_n_b_28615-_n_a_28614)));
return ((_n_k_28617*_n_k_28617)*(3.0-(2.0*_n_k_28617)));

}
}

double _n_mix_28549(double _a0,double _a1,double _a2){double _n_a_28618=_a0;
double _n_b_28619=_a1;
double _n_k_28620=_a2;
return (_n_a_28618+((_n_b_28619-_n_a_28618)*_n_k_28620));}

d::Array<double,false> _n_hex_28550(d::String _a0){d::String _n_s_28621=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_28622=_a0;
return (([&](){auto _n_argument_28892=d::slice(_n_s_28621,_n_i_28622,(_n_i_28622+2.0));auto _n_argument_28893=16.0;return d::parseInt(_n_argument_28892,_n_argument_28893);})()/255.0);});}

double _n_ground_28551(double _a0){double _n_x_28623=_a0;
return ([&](){auto _n_left_28894=([&](){auto _n_argument_28896=(80.0+(8.0*_n_smooth_28548(0.0,48.0,_n_x_28623)));auto _n_argument_28897=([&](){auto _n_left_28898=(88.0-(39.0*_n_smooth_28548(104.0,172.0,_n_x_28623)));auto _n_right_28899=(30.0*_n_smooth_28548(170.0,200.0,_n_x_28623));return (_n_left_28898-_n_right_28899);})();return d::minimum({_n_argument_28896,_n_argument_28897});})();auto _n_right_28895=(1.6*(_n_fbm_28546((_n_x_28623*0.09),2.3,3.0,0.0)-0.5));return (_n_left_28894+_n_right_28895);})();}

double _n_ridge_28552(double _a0){double _n_x_28624=_a0;
return ([&](){auto _n_left_28900=([&](){auto _n_left_28902=([&](){auto _n_left_28904=([&](){auto _n_left_28906=(34.0-(18.0*std::exp((-d::number(std::pow(((_n_x_28624-52.0)/30.0),2.0))))));auto _n_right_28907=(9.0*std::exp((-d::number(std::pow(((_n_x_28624-118.0)/16.0),2.0)))));return (_n_left_28906-_n_right_28907);})();auto _n_right_28905=(5.0*std::exp((-d::number(std::pow(((_n_x_28624-178.0)/22.0),2.0)))));return (_n_left_28904-_n_right_28905);})();auto _n_right_28903=(7.0*(_n_fbm_28546((_n_x_28624*0.06),0.5,4.0,0.0)-0.5));return (_n_left_28902+_n_right_28903);})();auto _n_right_28901=(2.5*(_n_fbm_28546((_n_x_28624*0.3),4.5,2.0,0.0)-0.5));return (_n_left_28900+_n_right_28901);})();}

double _n_woods_28553(double _a0){double _n_x_28625=_a0;
return ([&](){auto _n_left_28908=([&](){auto _n_left_28910=(76.0+(6.0*(_n_fbm_28546((_n_x_28625*0.04),7.1,3.0,0.0)-0.5)));auto _n_right_28911=(6.0*_n_smooth_28548(40.0,0.0,_n_x_28625));return (_n_left_28910-_n_right_28911);})();auto _n_right_28909=(6.0*_n_smooth_28548(110.0,160.0,_n_x_28625));return (_n_left_28908-_n_right_28909);})();}

double _n_riverY_28554(double _a0){double _n_x_28626=_a0;
return ([&](){auto _n_left_28912=(93.5+(1.8*std::sin(((_n_x_28626*0.045)+0.6))));auto _n_right_28913=(0.8*std::sin((_n_x_28626*0.13)));return (_n_left_28912+_n_right_28913);})();}

double _n_riverW_28555(double _a0){double _n_x_28627=_a0;
return (2.4+(0.8*std::sin(((_n_x_28627*0.07)+2.0))));}

double _n_pine_28556(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_28628=_a0;
double _n_y_28629=_a1;
double _n_cx_28630=_a2;
double _n_base_28631=_a3;
double _n_h_28632=_a4;
double _n_w_28633=_a5;
{
double _n_dy_28634=(_n_y_28629-(_n_base_28631-_n_h_28632));
if((d::truth((_n_dy_28634<0.0))||d::truth((_n_dy_28634>_n_h_28632)))){d::check_cancel();return 0.0;
}
double _n_dx_28635=((_n_x_28628+0.5)-_n_cx_28630);
if(d::truth((_n_dy_28634>(_n_h_28632-1.5)))){d::check_cancel();return (d::truth((std::fabs(_n_dx_28635)<0.6))?1.0:0.0);
}
double _n_tiers_28636=([&](){auto _n_argument_28914=2.0;auto _n_argument_28915=d::round((_n_h_28632/4.0));return d::maximum({_n_argument_28914,_n_argument_28915});})();
double _n_tier_28637=((_n_dy_28634/(_n_h_28632-1.5))*_n_tiers_28636);
double _n_local_28638=(_n_tier_28637-std::floor(_n_tier_28637));
double _n_hw_28639=((_n_w_28633*(((std::floor(_n_tier_28637)+0.35)+(0.65*_n_local_28638))/_n_tiers_28636))+0.35);
if(d::truth((std::fabs(_n_dx_28635)>_n_hw_28639))){d::check_cancel();return 0.0;
}
bool _n_top_28640=([&]()->bool{auto _n_logical_28916=(_n_local_28638<0.3);return d::truth(_n_logical_28916)?(std::fabs(_n_dx_28635)>(_n_hw_28639*0.35)):_n_logical_28916;})();
bool _n_lee_28641=([&]()->bool{auto _n_logical_28917=(_n_dx_28635>(_n_hw_28639*0.45));return d::truth(_n_logical_28917)?(_n_hash_28544(((_n_x_28628*3.0)+1.0),double(d::i32((_n_y_28629*7.0))|d::i32(0.0)))>0.45):_n_logical_28917;})();
return (((d::truth(_n_top_28640)||d::truth(_n_lee_28641))||d::truth((_n_dy_28634<1.2)))?2.0:1.0);

}
}

struct Native_snow_train final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_28557{};
double _n_N_28558{};
d::Array<d::String,false> _n_out_28559{};
d::Array<uint8_t,true> _n_lut_28560{};
d::Array<uint8_t,true> _n_kind_28562{};
d::Array<float,true> _n_br_28563{};
d::Array<float,true> _n_bg_28564{};
d::Array<float,true> _n_bb_28565{};
d::Array<float,true> _n_flo_28566{};
d::Array<float,true> _n_G_28568{};
d::Array<float,true> _n_R_28569{};
d::Array<float,true> _n_B_28570{};
d::Array<d::Array<double,false>,false> _n_chimneys_28572{};
d::Array<d::Array<double,false>,false> _n_panes_28573{};
d::Array<d::Array<double,false>,false> _n_trees_28574{};
double _n_CW_28576{};
double _n_CH_28577{};
d::Array<float,true> _n_cloud_28578{};
d::Array<std::shared_ptr<_n_Record_28580>,false> _n_LAYERS_28579{};
d::Array<float,true> _n_back_28581{};
d::Array<float,true> _n_front_28582{};
std::function<d::String(double,std::shared_ptr<_n_Record_28886>)> _render;
double _n_nearest_28561(double _a0,double _a1,double _a2){double _n_r_28642=_a0;
double _n_g_28643=_a1;
double _n_b_28644=_a2;
{
double _n_k_28645=([&](){auto _n_left_29071=([&](){auto _n_left_29073=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_28642*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_29074=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_28643*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_29073)|d::i32(_n_right_29074));})();auto _n_right_29072=d::minimum({31.0,double(d::i32((_n_b_28644*31.99))|d::i32(0.0))});return double(d::i32(_n_left_29071)|d::i32(_n_right_29072));})();
if(d::truth((d::at(this->_n_lut_28560,_n_k_28645)!=255.0))){d::check_cancel();return d::at(this->_n_lut_28560,_n_k_28645);
}
double _n_best_28646=0.0;
double _n_bd_28647=1000000000.0;
{double _n_i_28648=0.0;
for(;d::truth((_n_i_28648<double(this->_n_P_28557.size())));(void)((_n_i_28648++))){d::check_cancel();double _n_dr_28649=(d::at(d::at(this->_n_P_28557,_n_i_28648),0.0)-_n_r_28642);
double _n_dg_28650=(d::at(d::at(this->_n_P_28557,_n_i_28648),1.0)-_n_g_28643);
double _n_db_28651=(d::at(d::at(this->_n_P_28557,_n_i_28648),2.0)-_n_b_28644);
double _n_d_28652=((((0.3*_n_dr_28649)*_n_dr_28649)+((0.5*_n_dg_28650)*_n_dg_28650))+((0.2*_n_db_28651)*_n_db_28651));
if(d::truth((_n_d_28652<_n_bd_28647))){d::check_cancel();(void)(((_n_bd_28647=_n_d_28652),(_n_best_28646=_n_i_28648)));
}
}}
return ([&](){auto&& _n_array_29075=this->_n_lut_28560;auto _n_index_29076=_n_k_28645;auto _n_value_29077=_n_best_28646;d::put(_n_array_29075,_n_index_29076,_n_value_29077);return _n_value_29077;})();

}
}

void _n_set_28567(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_k_28653=_a0;
double _n_kd_28654=_a1;
double _n_r_28655=_a2;
double _n_g_28656=_a3;
double _n_b_28657=_a4;
double _n_f_28658=_a5;
{
(void)(((((([&](){auto&& _n_array_29078=this->_n_kind_28562;auto _n_index_29079=_n_k_28653;auto _n_value_29080=_n_kd_28654;d::put(_n_array_29078,_n_index_29079,_n_value_29080);return _n_value_29080;})(),([&](){auto&& _n_array_29081=this->_n_br_28563;auto _n_index_29082=_n_k_28653;auto _n_value_29083=_n_r_28655;d::put(_n_array_29081,_n_index_29082,_n_value_29083);return _n_value_29083;})()),([&](){auto&& _n_array_29084=this->_n_bg_28564;auto _n_index_29085=_n_k_28653;auto _n_value_29086=_n_g_28656;d::put(_n_array_29084,_n_index_29085,_n_value_29086);return _n_value_29086;})()),([&](){auto&& _n_array_29087=this->_n_bb_28565;auto _n_index_29088=_n_k_28653;auto _n_value_29089=_n_b_28657;d::put(_n_array_29087,_n_index_29088,_n_value_29089);return _n_value_29089;})()),([&](){auto&& _n_array_29090=this->_n_flo_28566;auto _n_index_29091=_n_k_28653;auto _n_value_29092=_n_f_28658;d::put(_n_array_29090,_n_index_29091,_n_value_29092);return _n_value_29092;})()));

}
}

double _n_relief_28571(double _a0,double _a1){double _n_x_28660=_a0;
double _n_y_28661=_a1;
{
double _n_n_28662=_n_fbm_28546(((_n_x_28660*0.05)+(_n_y_28661*0.03)),(_n_y_28661*0.11),4.0,0.0);
return (1.0-std::fabs(((2.0*_n_n_28662)-1.0)));

}
}

void _n_plant_28575(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_from_28747=_a0;
double _n_to_28748=_a1;
double _n_gap_28749=_a2;
double _n_hMin_28750=_a3;
double _n_hMax_28751=_a4;
double _n_seed_28752=_a5;
{
{double _n_x_28753=_n_from_28747;
for(;d::truth((_n_x_28753<_n_to_28748));(void)((_n_x_28753=(_n_x_28753+(_n_gap_28749+(_n_hash_28544(double(d::i32((_n_x_28753*7.0))|d::i32(0.0)),_n_seed_28752)*_n_gap_28749)))))){d::check_cancel();if((d::truth((_n_x_28753>114.0))&&d::truth((_n_x_28753<156.0)))){d::check_cancel();continue;
}
double _n_h_28754=(_n_hMin_28750+(_n_hash_28544(double(d::i32((_n_x_28753*3.0))|d::i32(0.0)),(_n_seed_28752+1.0))*(_n_hMax_28751-_n_hMin_28750)));
(void)(this->_n_trees_28574.push(d::Array<double,false>{_n_x_28753,(d::at(this->_n_G_28568,([&](){auto _n_argument_29093=0.0;auto _n_argument_29094=([&](){auto _n_argument_29095=_n_W_28523;auto _n_argument_29096=d::round(_n_x_28753);return d::minimum({_n_argument_29095,_n_argument_29096});})();return d::maximum({_n_argument_29093,_n_argument_29094});})())+1.5),_n_h_28754,(_n_h_28754*0.36)}));
}}

}
}

void _n_put_28583(d::Array<float,true> _a0,double _a1,double _a2,double _a3){d::Array<float,true> _n_buf_28790=_a0;
double _n_x_28791=_a1;
double _n_r_28792=_a2;
double _n_v_28793=_a3;
{
if((d::truth((_n_r_28792<0.0))||d::truth((_n_r_28792>=_n_H_28524)))){d::check_cancel();return;
}
double _n_xi_28794=d::mod((d::mod(_n_x_28791,_n_W_28523)+_n_W_28523),_n_W_28523);
double _n_k_28795=((_n_r_28792*_n_W_28523)+_n_xi_28794);
if(d::truth((_n_v_28793>d::at(_n_buf_28790,_n_k_28795)))){d::check_cancel();(void)(([&](){auto&& _n_array_29097=_n_buf_28790;auto _n_index_29098=_n_k_28795;auto _n_value_29099=_n_v_28793;d::put(_n_array_29097,_n_index_29098,_n_value_29099);return _n_value_29099;})());
}

}
}

double _n_windows_28584(double _a0){double _n_u_28796=_a0;
{
if((d::truth((_n_u_28796<0.0))||d::truth((_n_u_28796>=_n_LEN_28530)))){d::check_cancel();return 0.0;
}
if(d::truth((_n_u_28796<26.0))){d::check_cancel();return ((d::truth((_n_u_28796>8.0))&&d::truth((_n_u_28796<12.0)))?0.4:0.0);
}
double _n_c_28797=d::mod((_n_u_28796-28.0),26.0);
return (((d::truth((_n_u_28796>=28.0))&&d::truth((_n_c_28797>=2.0)))&&d::truth((_n_c_28797<22.0)))?1.0:0.0);

}
}

explicit Native_snow_train(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_28557=d::map(_n_meta_28521->_p_palette,_n_hex_28550);
this->_n_N_28558=(_n_W_28523*_n_H_28524);
this->_n_out_28559=d::Array<d::String,false>(size_t(this->_n_N_28558));
this->_n_lut_28560=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_kind_28562=d::Array<uint8_t,true>(size_t(this->_n_N_28558));
this->_n_br_28563=d::Array<float,true>(size_t(this->_n_N_28558));
this->_n_bg_28564=d::Array<float,true>(size_t(this->_n_N_28558));
this->_n_bb_28565=d::Array<float,true>(size_t(this->_n_N_28558));
this->_n_flo_28566=d::Array<float,true>(size_t(this->_n_N_28558));
this->_n_G_28568=d::Array<float,true>(size_t((_n_W_28523+1.0)));
this->_n_R_28569=d::Array<float,true>(size_t((_n_W_28523+1.0)));
this->_n_B_28570=d::Array<float,true>(size_t((_n_W_28523+1.0)));
{double _n_x_28659=0.0;
for(;d::truth((_n_x_28659<=_n_W_28523));(void)((_n_x_28659++))){d::check_cancel();(void)(((([&](){auto&& _n_array_28918=this->_n_G_28568;auto _n_index_28919=_n_x_28659;auto _n_value_28920=_n_ground_28551((_n_x_28659+0.5));d::put(_n_array_28918,_n_index_28919,_n_value_28920);return _n_value_28920;})(),([&](){auto&& _n_array_28921=this->_n_R_28569;auto _n_index_28922=_n_x_28659;auto _n_value_28923=_n_ridge_28552((_n_x_28659+0.5));d::put(_n_array_28921,_n_index_28922,_n_value_28923);return _n_value_28923;})()),([&](){auto&& _n_array_28924=this->_n_B_28570;auto _n_index_28925=_n_x_28659;auto _n_value_28926=_n_woods_28553((_n_x_28659+0.5));d::put(_n_array_28924,_n_index_28925,_n_value_28926);return _n_value_28926;})()));
}}
{double _n_r_28663=0.0;
for(;d::truth((_n_r_28663<_n_H_28524));(void)((_n_r_28663++))){d::check_cancel();{double _n_x_28664=0.0;
for(;d::truth((_n_x_28664<_n_W_28523));(void)((_n_x_28664++))){d::check_cancel();double _n_k_28665=((_n_r_28663*_n_W_28523)+_n_x_28664);
double _n_y_28666=(_n_r_28663+0.5);
double _n_v_28667=(_n_y_28666/50.0);
double _n_dmx_28668=((_n_x_28664+0.5)-d::at(_n_MOON_28525,0.0));
double _n_dmy_28669=(_n_y_28666-d::at(_n_MOON_28525,1.0));
double _n_dm_28670=std::sqrt(((_n_dmx_28668*_n_dmx_28668)+(_n_dmy_28669*_n_dmy_28669)));
double _n_halo_28671=([&](){auto _n_left_28927=(std::exp(((-d::number(_n_dm_28670))/26.0))*0.3);auto _n_right_28928=(std::exp(((-d::number(_n_dm_28670))/10.0))*0.4);return (_n_left_28927+_n_right_28928);})();
double _n_veil_28672=(0.88+(0.24*_n_fbm_28546((_n_x_28664*0.05),(_n_y_28666*0.08),3.0,0.0)));
(void)(this->_n_set_28567(_n_k_28665,_n_SKY_28536,(((0.015+((0.06*_n_v_28667)*_n_v_28667))*_n_veil_28672)+(0.26*_n_halo_28671)),(((0.025+((0.08*_n_v_28667)*_n_v_28667))*_n_veil_28672)+(0.31*_n_halo_28671)),(((0.06+((0.15*_n_v_28667)*_n_v_28667))*_n_veil_28672)+(0.38*_n_halo_28671)),0.04));
if(d::truth((_n_y_28666>=d::at(this->_n_R_28569,_n_x_28664)))){d::check_cancel();double _n_depth_28673=(_n_y_28666-d::at(this->_n_R_28569,_n_x_28664));
double _n_fall_28674=(([&](){auto _n_left_28929=d::at(this->_n_R_28569,d::minimum({_n_W_28523,(_n_x_28664+3.0)}));auto _n_right_28930=d::at(this->_n_R_28569,d::maximum({0.0,(_n_x_28664-3.0)}));return (_n_left_28929-_n_right_28930);})()/6.0);
double _n_h0_28675=this->_n_relief_28571(_n_x_28664,_n_y_28666);
double _n_face_28676=_n_clamp_28547(((0.45+(_n_fall_28674*1.6))+(5.0*(_n_h0_28675-this->_n_relief_28571((_n_x_28664+1.3),(_n_y_28666-0.9))))));
double _n_streak_28677=_n_noise_28545(((_n_x_28664*0.3)+(_n_y_28666*0.12)),(_n_y_28666*0.05),0.0);
double _n_rim_28678=(_n_smooth_28548(2.0,0.0,_n_depth_28673)*0.45);
double _n_s_28679=((((0.16+((0.95*_n_face_28676)*_n_face_28676))*(0.7+(0.45*_n_streak_28677)))+_n_rim_28678)*(1.0-(0.75*_n_smooth_28548(7.0,22.0,_n_depth_28673))));
double _n_cr_28680=(0.52*_n_s_28679);
double _n_cg_28681=(0.62*_n_s_28679);
double _n_cb_28682=(0.88*_n_s_28679);
double _n_mist_28683=_n_smooth_28548(36.0,52.0,_n_y_28666);
(void)((((_n_cr_28680=_n_mix_28549(_n_cr_28680,0.3,(_n_mist_28683*0.92))),(_n_cg_28681=_n_mix_28549(_n_cg_28681,0.38,(_n_mist_28683*0.92)))),(_n_cb_28682=_n_mix_28549(_n_cb_28682,0.57,(_n_mist_28683*0.92)))));
(void)(this->_n_set_28567(_n_k_28665,_n_FAR_28537,_n_cr_28680,_n_cg_28681,_n_cb_28682,0.12));
}
if(d::truth((_n_y_28666>=d::at(this->_n_B_28570,_n_x_28664)))){d::check_cancel();double _n_fleck_28684=(d::truth((_n_hash_28544(((_n_x_28664*5.0)+3.0),((_n_r_28663*9.0)+1.0))>0.8))?1.0:0.0);
double _n_deep_28685=_n_smooth_28548(d::at(this->_n_B_28570,_n_x_28664),(d::at(this->_n_B_28570,_n_x_28664)+10.0),_n_y_28666);
double _n_n_28686=_n_fbm_28546((_n_x_28664*0.2),(_n_y_28666*0.3),2.0,0.0);
double _n_m_28687=(0.5*(1.0-_n_deep_28685));
(void)(([&](){auto _n_argument_28931=_n_k_28665;auto _n_argument_28932=_n_FAR_28537;auto _n_argument_28933=_n_mix_28549((0.03+((0.2*_n_fleck_28684)*_n_n_28686)),0.2,_n_m_28687);auto _n_argument_28934=_n_mix_28549((0.06+((0.25*_n_fleck_28684)*_n_n_28686)),0.26,_n_m_28687);auto _n_argument_28935=_n_mix_28549((0.09+((0.36*_n_fleck_28684)*_n_n_28686)),0.4,_n_m_28687);auto _n_argument_28936=0.05;return this->_n_set_28567(_n_argument_28931,_n_argument_28932,_n_argument_28933,_n_argument_28934,_n_argument_28935,_n_argument_28936);})());
}
}}
}}
{double _n_x_28688=(-d::number(2.0));
for(;d::truth((_n_x_28688<(_n_W_28523+2.0)));(void)((_n_x_28688=(_n_x_28688+(1.6+(_n_hash_28544(double(d::i32((_n_x_28688*13.0))|d::i32(0.0)),21.0)*1.8)))))){d::check_cancel();double _n_cx_28689=(_n_x_28688+_n_hash_28544(double(d::i32((_n_x_28688*7.0))|d::i32(0.0)),22.0));
double _n_base_28690=(_n_woods_28553(_n_cx_28689)+3.0);
double _n_h_28691=(4.0+(_n_hash_28544(double(d::i32((_n_cx_28689*11.0))|d::i32(0.0)),23.0)*5.0));
double _n_w_28692=(1.3+(_n_hash_28544(double(d::i32((_n_cx_28689*5.0))|d::i32(0.0)),24.0)*1.0));
{double _n_r_28693=([&](){auto _n_argument_28937=0.0;auto _n_argument_28938=std::floor((_n_base_28690-_n_h_28691));return d::maximum({_n_argument_28937,_n_argument_28938});})();
for(;d::truth((_n_r_28693<d::minimum({_n_H_28524,(_n_base_28690+1.0)})));(void)((_n_r_28693++))){d::check_cancel();{double _n_xx_28694=([&](){auto _n_argument_28939=0.0;auto _n_argument_28940=std::floor(((_n_cx_28689-_n_w_28692)-1.0));return d::maximum({_n_argument_28939,_n_argument_28940});})();
for(;d::truth((_n_xx_28694<d::minimum({_n_W_28523,((_n_cx_28689+_n_w_28692)+1.0)})));(void)((_n_xx_28694++))){d::check_cancel();double _n_p_28695=_n_pine_28556(_n_xx_28694,(_n_r_28693+0.5),_n_cx_28689,_n_base_28690,_n_h_28691,_n_w_28692);
if(d::truth((!d::truth(_n_p_28695)))){d::check_cancel();continue;
}
double _n_m_28696=0.45;
if(d::truth((_n_p_28695==2.0))){d::check_cancel();(void)(([&](){auto _n_argument_28941=((_n_r_28693*_n_W_28523)+_n_xx_28694);auto _n_argument_28942=_n_FAR_28537;auto _n_argument_28943=_n_mix_28549(0.32,0.22,_n_m_28696);auto _n_argument_28944=_n_mix_28549(0.4,0.28,_n_m_28696);auto _n_argument_28945=_n_mix_28549(0.58,0.42,_n_m_28696);auto _n_argument_28946=0.1;return this->_n_set_28567(_n_argument_28941,_n_argument_28942,_n_argument_28943,_n_argument_28944,_n_argument_28945,_n_argument_28946);})());
}else {d::check_cancel();(void)(([&](){auto _n_argument_28947=((_n_r_28693*_n_W_28523)+_n_xx_28694);auto _n_argument_28948=_n_FAR_28537;auto _n_argument_28949=_n_mix_28549(0.05,0.2,(_n_m_28696*0.6));auto _n_argument_28950=_n_mix_28549(0.09,0.26,(_n_m_28696*0.6));auto _n_argument_28951=_n_mix_28549(0.11,0.4,(_n_m_28696*0.6));auto _n_argument_28952=0.08;return this->_n_set_28567(_n_argument_28947,_n_argument_28948,_n_argument_28949,_n_argument_28950,_n_argument_28951,_n_argument_28952);})());
}
}}
}}
}}
{double _n_r_28697=0.0;
for(;d::truth((_n_r_28697<_n_H_28524));(void)((_n_r_28697++))){d::check_cancel();{double _n_x_28698=0.0;
for(;d::truth((_n_x_28698<_n_W_28523));(void)((_n_x_28698++))){d::check_cancel();double _n_k_28699=((_n_r_28697*_n_W_28523)+_n_x_28698);
double _n_y_28700=(_n_r_28697+0.5);
double _n_g_28701=d::at(this->_n_G_28568,_n_x_28698);
if(((d::truth((_n_x_28698<176.0))&&d::truth((_n_y_28700>=49.0)))&&d::truth((_n_y_28700<(_n_g_28701+0.5))))){d::check_cancel();double _n_i_28702=d::round((((_n_x_28698+0.5)-8.0)/20.0));
double _n_dx_28703=((_n_x_28698+0.5)-(8.0+(20.0*_n_i_28702)));
double _n_hw_28704=(7.0-(d::maximum({0.0,(_n_y_28700-66.0)})*0.05));
bool _n_open_28705=([&]()->bool{auto _n_logical_28953=(_n_y_28700>59.0);return d::truth(_n_logical_28953)?(d::truth((_n_y_28700<66.0))?(((_n_dx_28703*_n_dx_28703)+std::pow((_n_y_28700-66.0),2.0))<49.0):(std::fabs(_n_dx_28703)<_n_hw_28704)):_n_logical_28953;})();
if(d::truth((!d::truth(_n_open_28705)))){d::check_cancel();double _n_course_28706=std::floor(((_n_r_28697-49.0)/3.0));
double _n_bx_28707=std::floor(((_n_x_28698+(double(d::i32(_n_course_28706)&d::i32(1.0))*3.0))/6.0));
bool _n_mortar_28708=([&]()->bool{auto _n_logical_28954=(d::mod((_n_r_28697-49.0),3.0)==0.0);return d::truth(_n_logical_28954)?_n_logical_28954:(d::mod((_n_x_28698+(double(d::i32(_n_course_28706)&d::i32(1.0))*3.0)),6.0)==0.0);})();
double _n_s_28709=([&](){auto _n_left_28955=(0.55+(0.4*_n_hash_28544(_n_bx_28707,_n_course_28706)));auto _n_right_28956=(0.25*_n_fbm_28546((_n_x_28698*0.3),(_n_y_28700*0.3),2.0,0.0));return (_n_left_28955+_n_right_28956);})();
if(d::truth(_n_mortar_28708)){d::check_cancel();(void)((_n_s_28709=(_n_s_28709*0.6)));
}
bool _n_ring_28710=([&]()->bool{auto _n_logical_28957=([&]()->bool{auto _n_logical_28958=([&]()->bool{auto _n_logical_28959=(_n_y_28700>57.0);return d::truth(_n_logical_28959)?(_n_y_28700<67.0):_n_logical_28959;})();return d::truth(_n_logical_28958)?(std::sqrt(((_n_dx_28703*_n_dx_28703)+std::pow((_n_y_28700-66.0),2.0)))<9.2):_n_logical_28958;})();return d::truth(_n_logical_28957)?(std::fabs(_n_dx_28703)<9.0):_n_logical_28957;})();
if(d::truth(_n_ring_28710)){d::check_cancel();(void)((_n_s_28709=(_n_s_28709*1.3)));
}
if((((d::truth((_n_y_28700>=59.0))&&d::truth(([&](){auto _n_left_28960=std::fabs(_n_dx_28703);auto _n_right_28961=((d::truth((_n_y_28700<66.0))?std::sqrt(d::maximum({0.0,(49.0-std::pow((_n_y_28700-66.0),2.0))})):_n_hw_28704)-0.1);return (_n_left_28960>_n_right_28961);})()))&&d::truth((_n_dx_28703<0.0)))&&d::truth((_n_dx_28703>((-d::number(_n_hw_28704))-1.5))))){d::check_cancel();(void)((_n_s_28709=(_n_s_28709*1.6)));
}
double _n_mist_28711=(_n_smooth_28548(62.0,92.0,_n_y_28700)*0.2);
double _n_cr_28712=_n_mix_28549((0.07*_n_s_28709),0.16,_n_mist_28711);
double _n_cg_28713=_n_mix_28549((0.085*_n_s_28709),0.2,_n_mist_28711);
double _n_cb_28714=_n_mix_28549((0.13*_n_s_28709),0.3,_n_mist_28711);
double _n_kd_28715=_n_STONE_28538;
if(d::truth((_n_r_28697==49.0))){d::check_cancel();double _n_n_28716=(0.85+(0.15*_n_hash_28544(_n_x_28698,77.0)));
(void)(((((_n_cr_28712=(0.62*_n_n_28716)),(_n_cg_28713=(0.7*_n_n_28716))),(_n_cb_28714=(0.86*_n_n_28716))),(_n_kd_28715=_n_CAP_28539)));
}else {d::check_cancel();if((d::truth((_n_r_28697==53.0))||d::truth((_n_r_28697==66.0)))){d::check_cancel();double _n_n_28717=(d::truth((_n_hash_28544((_n_x_28698*3.0),_n_r_28697)>0.3))?1.0:0.5);
(void)((((_n_cr_28712=(0.5*_n_n_28717)),(_n_cg_28713=(0.58*_n_n_28717))),(_n_cb_28714=(0.76*_n_n_28717))));
}else {d::check_cancel();if(d::truth((_n_r_28697==54.0))){d::check_cancel();(void)((((_n_cr_28712=(_n_cr_28712*0.45)),(_n_cg_28713=(_n_cg_28713*0.45))),(_n_cb_28714=(_n_cb_28714*0.5))));
}
}
}
(void)(this->_n_set_28567(_n_k_28699,_n_kd_28715,_n_cr_28712,_n_cg_28713,_n_cb_28714,(d::truth((_n_kd_28715==_n_CAP_28539))?0.12:0.03)));
}
}
if(d::truth((_n_y_28700>=_n_g_28701))){d::check_cancel();double _n_slope_28718=(d::at(this->_n_G_28568,d::minimum({_n_W_28523,(_n_x_28698+1.0)}))-_n_g_28701);
double _n_face_28719=_n_clamp_28547((0.5+(_n_slope_28718*1.4)));
double _n_crest_28720=(std::exp(((-d::number((_n_y_28700-_n_g_28701)))/2.5))*0.18);
double _n_ripple_28721=(0.06*std::sin((((_n_x_28698*0.35)+(_n_y_28700*1.1))+(_n_fbm_28546((_n_x_28698*0.05),(_n_y_28700*0.05),2.0,0.0)*9.0))));
double _n_s_28722=((((0.12+(0.24*_n_fbm_28546((_n_x_28698*0.07),(_n_y_28700*0.12),4.0,0.0)))+(0.34*_n_face_28719))+(1.8*_n_crest_28720))+_n_ripple_28721);
(void)(this->_n_set_28567(_n_k_28699,_n_FRONT_28540,(0.42*_n_s_28722),(0.53*_n_s_28722),(0.82*_n_s_28722),0.1));
double _n_ry_28723=_n_riverY_28554((_n_x_28698+0.5));
double _n_rw_28724=_n_riverW_28555((_n_x_28698+0.5));
if((d::truth((std::fabs((_n_y_28700-_n_ry_28723))<_n_rw_28724))&&d::truth((_n_y_28700>(_n_g_28701+2.0))))){d::check_cancel();double _n_n_28725=_n_fbm_28546((_n_x_28698*0.12),(_n_y_28700*0.7),3.0,0.0);
double _n_crack_28726=(d::truth((std::fabs((_n_noise_28545((_n_x_28698*0.22),(_n_y_28700*0.9),0.0)-0.5))<0.035))?0.18:0.0);
double _n_edge_28727=([&](){auto _n_argument_28962=_n_rw_28724;auto _n_argument_28963=(_n_rw_28724-1.2);auto _n_argument_28964=std::fabs((_n_y_28700-_n_ry_28723));return _n_smooth_28548(_n_argument_28962,_n_argument_28963,_n_argument_28964);})();
(void)(this->_n_set_28567(_n_k_28699,_n_RIVER_28541,((((0.2+(0.16*_n_n_28725))+_n_crack_28726)*_n_edge_28727)+(0.4*(1.0-_n_edge_28727))),((((0.28+(0.2*_n_n_28725))+_n_crack_28726)*_n_edge_28727)+(0.46*(1.0-_n_edge_28727))),((((0.44+(0.24*_n_n_28725))+_n_crack_28726)*_n_edge_28727)+(0.62*(1.0-_n_edge_28727))),0.16));
}
if(d::truth((_n_y_28700>(98.0+(1.5*_n_noise_28545((_n_x_28698*0.1),3.0,0.0)))))){d::check_cancel();(void)(this->_n_set_28567(_n_k_28699,_n_FRONT_28540,0.22,0.27,0.4,0.12));
}
}
if((((d::truth((_n_x_28698>=174.0))&&d::truth((_n_x_28698<189.0)))&&d::truth((_n_y_28700>=35.0)))&&d::truth((_n_y_28700<53.0)))){d::check_cancel();double _n_dx_28728=((_n_x_28698+0.5)-181.5);
bool _n_open_28729=([&]()->bool{auto _n_logical_28965=(d::truth((_n_y_28700>=45.0))?(std::fabs(_n_dx_28728)<4.5):(((_n_dx_28728*_n_dx_28728)+std::pow((_n_y_28700-45.0),2.0))<20.25));return d::truth(_n_logical_28965)?(_n_y_28700<52.5):_n_logical_28965;})();
if(d::truth(_n_open_28729)){d::check_cancel();(void)(this->_n_set_28567(_n_k_28699,_n_MOUTH_K_28543,0.015,0.015,0.03,0.0));
}else {d::check_cancel();if(d::truth((_n_r_28697==35.0))){d::check_cancel();(void)(this->_n_set_28567(_n_k_28699,_n_CAP_28539,0.62,0.7,0.86,0.12));
}else {d::check_cancel();bool _n_ring_28730=([&]()->bool{auto _n_logical_28966=(std::sqrt(((_n_dx_28728*_n_dx_28728)+std::pow((_n_y_28700-45.0),2.0)))<6.2);return d::truth(_n_logical_28966)?(_n_y_28700<46.0):_n_logical_28966;})();
bool _n_mortar_28731=([&]()->bool{auto _n_logical_28967=(d::mod((_n_r_28697-35.0),3.0)==0.0);return d::truth(_n_logical_28967)?_n_logical_28967:(d::mod((_n_x_28698+(double(d::i32((_n_r_28697/3.0))&d::i32(1.0))*3.0)),5.0)==0.0);})();
double _n_s_28732=(((0.5+(0.3*_n_hash_28544(double(d::i32(_n_x_28698)>>(d::u32(2.0)&31)),double(d::i32((_n_r_28697/3.0))|d::i32(0.0)))))*(d::truth(_n_mortar_28731)?0.75:1.0))*(d::truth(_n_ring_28730)?1.2:1.0));
(void)(this->_n_set_28567(_n_k_28699,_n_STONE_28538,(0.21*_n_s_28732),(0.24*_n_s_28732),(0.32*_n_s_28732),0.12));
}
}
}
}}
}}
this->_n_chimneys_28572=d::Array<d::Array<double,false>,false>{};
this->_n_panes_28573=d::Array<d::Array<double,false>,false>{};
for(auto &&_n_item_28968:d::Array<d::Array<double,false>,false>{d::Array<double,false>{115.0,10.0},d::Array<double,false>{128.0,9.0},d::Array<double,false>{141.0,10.0}}){d::check_cancel();auto _n_binding_28969=_n_item_28968;
double _n_x0_28733=d::at(_n_binding_28969,0.0);
double _n_w_28734=d::at(_n_binding_28969,1.0);
{
double _n_base_28735=0.0;
{double _n_x_28736=_n_x0_28733;
for(;d::truth((_n_x_28736<=(_n_x0_28733+_n_w_28734)));(void)((_n_x_28736++))){d::check_cancel();(void)((_n_base_28735=d::maximum({_n_base_28735,d::at(this->_n_G_28568,_n_x_28736)})));
}}
(void)((_n_base_28735=(d::round(_n_base_28735)+1.0)));
{double _n_r_28737=(_n_base_28735-9.0);
for(;d::truth((_n_r_28737<=_n_base_28735));(void)((_n_r_28737++))){d::check_cancel();{double _n_x_28738=(_n_x0_28733-1.0);
for(;d::truth((_n_x_28738<=((_n_x0_28733+_n_w_28734)+1.0)));(void)((_n_x_28738++))){d::check_cancel();double _n_k_28739=((_n_r_28737*_n_W_28523)+_n_x_28738);
double _n_y_28740=(_n_r_28737+0.5);
if(((d::truth((_n_r_28737>(_n_base_28735-5.0)))&&d::truth((_n_x_28738>=_n_x0_28733)))&&d::truth((_n_x_28738<=(_n_x0_28733+_n_w_28734))))){d::check_cancel();double _n_s_28741=(0.6+(0.4*_n_hash_28544(_n_x_28738,(_n_r_28737*3.0))));
(void)(this->_n_set_28567(_n_k_28739,_n_FRONT_28540,(0.06*_n_s_28741),(0.065*_n_s_28741),(0.09*_n_s_28741),0.02));
if(((d::truth(([&]()->bool{auto _n_logical_28970=([&]()->bool{auto _n_logical_28971=([&]()->bool{auto _n_logical_28972=(_n_x_28738==(_n_x0_28733+2.0));return d::truth(_n_logical_28972)?_n_logical_28972:(_n_x_28738==(_n_x0_28733+3.0));})();return d::truth(_n_logical_28971)?_n_logical_28971:(_n_x_28738==((_n_x0_28733+_n_w_28734)-3.0));})();return d::truth(_n_logical_28970)?_n_logical_28970:(_n_x_28738==((_n_x0_28733+_n_w_28734)-2.0));})())&&d::truth((_n_r_28737>=(_n_base_28735-3.0))))&&d::truth((_n_r_28737<=(_n_base_28735-2.0))))){d::check_cancel();(void)(this->_n_set_28567(_n_k_28739,_n_PANE_28542,1.0,0.74,0.34,0.3));
(void)(this->_n_panes_28573.push(d::Array<double,false>{(_n_x_28738+0.5),_n_y_28740}));
}
if((d::truth((_n_r_28737==_n_base_28735))&&d::truth((_n_hash_28544(_n_x_28738,91.0)>0.4)))){d::check_cancel();(void)(this->_n_set_28567(_n_k_28739,_n_FRONT_28540,0.5,0.58,0.78,0.2));
}
}else {d::check_cancel();if(d::truth((_n_r_28737<=(_n_base_28735-5.0)))){d::check_cancel();double _n_half_28742=(((_n_w_28734/2.0)+1.5)*((_n_y_28740-(_n_base_28735-9.0))/4.5));
double _n_cx_28743=((_n_x0_28733+(_n_w_28734/2.0))+0.5);
if(d::truth((std::fabs(((_n_x_28738+0.5)-_n_cx_28743))<=_n_half_28742))){d::check_cancel();double _n_lit_28744=(d::truth(((_n_x_28738+0.5)>_n_cx_28743))?1.0:0.82);
(void)(this->_n_set_28567(_n_k_28739,_n_FRONT_28540,(0.84*_n_lit_28744),(0.89*_n_lit_28744),(1.0*_n_lit_28744),0.3));
if(d::truth((_n_r_28737==(_n_base_28735-5.0)))){d::check_cancel();(void)(this->_n_set_28567(_n_k_28739,_n_FRONT_28540,0.05,0.05,0.08,0.02));
}
}
}
}
}}
}}
double _n_cx_28745=((_n_x0_28733+_n_w_28734)-2.0);
{double _n_r_28746=(_n_base_28735-10.0);
for(;d::truth((_n_r_28746<(_n_base_28735-7.0)));(void)((_n_r_28746++))){d::check_cancel();(void)(this->_n_set_28567(((_n_r_28746*_n_W_28523)+_n_cx_28745),_n_FRONT_28540,0.14,0.1,0.1,0.08));
}}
(void)(this->_n_set_28567((((_n_base_28735-10.0)*_n_W_28523)+_n_cx_28745),_n_FRONT_28540,0.6,0.68,0.86,0.2));
(void)(this->_n_chimneys_28572.push(d::Array<double,false>{(_n_cx_28745+0.5),(_n_base_28735-10.0)}));

}
}
this->_n_trees_28574=d::Array<d::Array<double,false>,false>{};
(void)(this->_n_plant_28575(26.0,70.0,3.5,6.0,11.0,40.0));
(void)(this->_n_plant_28575(102.0,174.0,3.0,6.0,12.0,50.0));
(void)(this->_n_plant_28575(189.0,203.0,3.0,8.0,14.0,60.0));
{double _n_i_28755=0.0;
for(;d::truth((_n_i_28755<150.0));(void)((_n_i_28755++))){d::check_cancel();double _n_x_28756=((_n_hash_28544(_n_i_28755,71.0)*206.0)-3.0);
double _n_g_28757=d::at(this->_n_G_28568,([&](){auto _n_argument_28973=0.0;auto _n_argument_28974=([&](){auto _n_argument_28975=_n_W_28523;auto _n_argument_28976=d::round(_n_x_28756);return d::minimum({_n_argument_28975,_n_argument_28976});})();return d::maximum({_n_argument_28973,_n_argument_28974});})());
double _n_base_28758=((_n_g_28757+4.0)+(_n_hash_28544(_n_i_28755,72.0)*(93.0-_n_g_28757)));
if((((d::truth((_n_base_28758>91.0))||d::truth(([&]()->bool{auto _n_logical_28977=([&]()->bool{auto _n_logical_28978=(_n_x_28756>108.0);return d::truth(_n_logical_28978)?(_n_x_28756<156.0):_n_logical_28978;})();return d::truth(_n_logical_28977)?(_n_base_28758<(_n_g_28757+14.0)):_n_logical_28977;})()))||d::truth(([&]()->bool{auto _n_logical_28979=(_n_x_28756<96.0);return d::truth(_n_logical_28979)?(_n_x_28756>40.0):_n_logical_28979;})()))||d::truth(([&]()->bool{auto _n_logical_28980=([&]()->bool{auto _n_logical_28981=(_n_x_28756>170.0);return d::truth(_n_logical_28981)?(_n_x_28756<192.0):_n_logical_28981;})();return d::truth(_n_logical_28980)?(_n_base_28758<56.0):_n_logical_28980;})()))){d::check_cancel();continue;
}
double _n_h_28759=(5.0+(_n_hash_28544(_n_i_28755,73.0)*5.0));
(void)(this->_n_trees_28574.push(d::Array<double,false>{_n_x_28756,_n_base_28758,_n_h_28759,(_n_h_28759*0.38)}));
}}
(void)(this->_n_trees_28574.push(d::Array<double,false>{112.0,(d::at(this->_n_G_28568,112.0)+1.5),12.0,4.2},d::Array<double,false>{158.0,(d::at(this->_n_G_28568,158.0)+1.5),10.0,3.6},d::Array<double,false>{161.0,(d::at(this->_n_G_28568,161.0)+1.5),13.0,4.5}));
(void)(this->_n_trees_28574.sort([=]( d::Array<double,false> _a0,d::Array<double,false> _a1) mutable ->double{d::Array<double,false> _n_a_28760=_a0;
d::Array<double,false> _n_b_28761=_a1;
return (d::at(_n_a_28760,1.0)-d::at(_n_b_28761,1.0));}));
(void)(this->_n_trees_28574.push(d::Array<double,false>{8.0,104.0,40.0,11.0},d::Array<double,false>{25.0,103.0,28.0,8.0},d::Array<double,false>{(-d::number(2.0)),102.0,22.0,7.0}));
for(auto &&_n_item_28982:this->_n_trees_28574){d::check_cancel();auto _n_binding_28983=_n_item_28982;
double _n_cx_28762=d::at(_n_binding_28983,0.0);
double _n_base_28763=d::at(_n_binding_28983,1.0);
double _n_h_28764=d::at(_n_binding_28983,2.0);
double _n_w_28765=d::at(_n_binding_28983,3.0);
{
bool _n_big_28766=(_n_h_28764>20.0);
{double _n_r_28767=([&](){auto _n_argument_28984=0.0;auto _n_argument_28985=std::floor((_n_base_28763-_n_h_28764));return d::maximum({_n_argument_28984,_n_argument_28985});})();
for(;d::truth((_n_r_28767<d::minimum({_n_H_28524,(_n_base_28763+1.0)})));(void)((_n_r_28767++))){d::check_cancel();{double _n_x_28768=([&](){auto _n_argument_28986=0.0;auto _n_argument_28987=std::floor(((_n_cx_28762-_n_w_28765)-1.0));return d::maximum({_n_argument_28986,_n_argument_28987});})();
for(;d::truth((_n_x_28768<d::minimum({_n_W_28523,((_n_cx_28762+_n_w_28765)+1.0)})));(void)((_n_x_28768++))){d::check_cancel();double _n_p_28769=_n_pine_28556(_n_x_28768,(_n_r_28767+0.5),_n_cx_28762,_n_base_28763,_n_h_28764,_n_w_28765);
if(d::truth((!d::truth(_n_p_28769)))){d::check_cancel();continue;
}
double _n_k_28770=((_n_r_28767*_n_W_28523)+_n_x_28768);
if(d::truth((_n_p_28769==2.0))){d::check_cancel();double _n_s_28771=(d::truth(_n_big_28766)?0.75:(0.9+(0.2*_n_hash_28544(_n_x_28768,_n_r_28767))));
(void)(this->_n_set_28567(_n_k_28770,_n_FRONT_28540,(0.66*_n_s_28771),(0.74*_n_s_28771),(0.94*_n_s_28771),0.2));
}else {d::check_cancel();double _n_s_28772=(d::truth(_n_big_28766)?0.5:(0.7+(0.5*_n_hash_28544((_n_x_28768*3.0),_n_r_28767))));
(void)(this->_n_set_28567(_n_k_28770,_n_FRONT_28540,(0.04*_n_s_28772),(0.1*_n_s_28772),(0.11*_n_s_28772),0.05));
}
}}
}}

}
}
{double _n_r_28773=0.0;
for(;d::truth((_n_r_28773<_n_H_28524));(void)((_n_r_28773++))){d::check_cancel();{double _n_x_28774=100.0;
for(;d::truth((_n_x_28774<160.0));(void)((_n_x_28774++))){d::check_cancel();double _n_k_28775=((_n_r_28773*_n_W_28523)+_n_x_28774);
if((d::truth((d::at(this->_n_kind_28562,_n_k_28775)!=_n_FRONT_28540))||d::truth((d::at(this->_n_bb_28565,_n_k_28775)<0.15)))){d::check_cancel();continue;
}
double _n_a_28776=0.0;
for(auto &&_n_item_28988:this->_n_panes_28573){d::check_cancel();auto _n_binding_28989=_n_item_28988;
double _n_px_28777=d::at(_n_binding_28989,0.0);
double _n_py_28778=d::at(_n_binding_28989,1.0);
{
double _n_d_28779=std::sqrt((std::pow(((_n_x_28774+0.5)-_n_px_28777),2.0)+std::pow((((_n_r_28773+0.5)-_n_py_28778)*1.3),2.0)));
(void)((_n_a_28776=(_n_a_28776+(std::exp(((-d::number(_n_d_28779))/1.5))*0.2))));

}
}
(void)(((([&](){auto&& _n_array_28990=this->_n_br_28563;auto _n_index_28991=_n_k_28775;auto _n_value_28992=(d::at(_n_array_28990,_n_index_28991)+_n_a_28776);d::put(_n_array_28990,_n_index_28991,_n_value_28992);return _n_value_28992;})(),([&](){auto&& _n_array_28993=this->_n_bg_28564;auto _n_index_28994=_n_k_28775;auto _n_value_28995=(d::at(_n_array_28993,_n_index_28994)+(_n_a_28776*0.6));d::put(_n_array_28993,_n_index_28994,_n_value_28995);return _n_value_28995;})()),([&](){auto&& _n_array_28996=this->_n_bb_28565;auto _n_index_28997=_n_k_28775;auto _n_value_28998=(d::at(_n_array_28996,_n_index_28997)+(_n_a_28776*0.22));d::put(_n_array_28996,_n_index_28997,_n_value_28998);return _n_value_28998;})()));
}}
}}
this->_n_CW_28576=600.0;
this->_n_CH_28577=40.0;
this->_n_cloud_28578=d::Array<float,true>(size_t((this->_n_CW_28576*this->_n_CH_28577)));
{double _n_r_28780=0.0;
for(;d::truth((_n_r_28780<this->_n_CH_28577));(void)((_n_r_28780++))){d::check_cancel();{double _n_x_28781=0.0;
for(;d::truth((_n_x_28781<this->_n_CW_28576));(void)((_n_x_28781++))){d::check_cancel();double _n_y_28782=(_n_r_28780+0.5);
double _n_q_28783=_n_fbm_28546((_n_x_28781*0.006),(_n_y_28782*0.04),3.0,(this->_n_CW_28576*0.006));
double _n_d_28784=_n_fbm_28546(((_n_x_28781*0.014)+(_n_q_28783*2.0)),((_n_y_28782*0.09)+_n_q_28783),5.0,(this->_n_CW_28576*0.014));
(void)(([&](){auto&& _n_array_28999=this->_n_cloud_28578;auto _n_index_29000=((_n_r_28780*this->_n_CW_28576)+_n_x_28781);auto _n_value_29001=([&](){auto _n_left_29002=([&](){auto _n_left_29004=([&](){auto _n_argument_29006=0.5;auto _n_argument_29007=0.68;auto _n_argument_29008=(_n_d_28784+(0.06*std::sin((_n_y_28782*0.35))));return _n_smooth_28548(_n_argument_29006,_n_argument_29007,_n_argument_29008);})();auto _n_right_29005=_n_smooth_28548(2.0,10.0,_n_y_28782);return (_n_left_29004*_n_right_29005);})();auto _n_right_29003=_n_smooth_28548(this->_n_CH_28577,24.0,_n_y_28782);return (_n_left_29002*_n_right_29003);})();d::put(_n_array_28999,_n_index_29000,_n_value_29001);return _n_value_29001;})());
}}
}}
this->_n_LAYERS_28579=d::map(d::Array<std::shared_ptr<_n_Record_28786>,false>{([&](){auto _n_object_29012=std::make_shared<_n_Record_28786>();_n_object_29012->_p_n=420.0;_n_object_29012->_p_fall=2.4;_n_object_29012->_p_sway=0.7;_n_object_29012->_p_big=false;_n_object_29012->_p_v=0.24;_n_object_29012->_p_front=false;return _n_object_29012;})(),([&](){auto _n_object_29014=std::make_shared<_n_Record_28786>();_n_object_29014->_p_n=200.0;_n_object_29014->_p_fall=5.0;_n_object_29014->_p_sway=1.3;_n_object_29014->_p_big=false;_n_object_29014->_p_v=0.55;_n_object_29014->_p_front=true;return _n_object_29014;})(),([&](){auto _n_object_29016=std::make_shared<_n_Record_28786>();_n_object_29016->_p_n=60.0;_n_object_29016->_p_fall=9.5;_n_object_29016->_p_sway=2.4;_n_object_29016->_p_big=true;_n_object_29016->_p_v=0.95;_n_object_29016->_p_front=true;return _n_object_29016;})()},[&]( std::shared_ptr<_n_Record_28786> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_28580>{std::shared_ptr<_n_Record_28786> _n_L_28785=_a0;
double _n_li_28787=_a1;
return ([&](){auto _n_object_29019=std::make_shared<_n_Record_28580>();auto _n_spread_29020=_n_L_28785;_n_object_29019->_p_n=_n_spread_29020->_p_n;_n_object_29019->_p_fall=_n_spread_29020->_p_fall;_n_object_29019->_p_sway=_n_spread_29020->_p_sway;_n_object_29019->_p_big=_n_spread_29020->_p_big;_n_object_29019->_p_v=_n_spread_29020->_p_v;_n_object_29019->_p_front=_n_spread_29020->_p_front;_n_object_29019->_p_seeds=d::Array<d::Array<double,false>,false>(d::from(_n_L_28785->_p_n,[&]( d::Nil _a0,double _a1) mutable ->d::Array<double,false>{double _n_i_28789=_a1;
return d::Array<double,false>{(_n_hash_28544(_n_i_28789,((_n_li_28787*31.0)+1.0))*_n_W_28523),(_n_hash_28544(_n_i_28789,((_n_li_28787*31.0)+2.0))*(_n_H_28524+6.0)),(_n_hash_28544(_n_i_28789,((_n_li_28787*31.0)+3.0))*6.28),(0.6+(_n_hash_28544(_n_i_28789,((_n_li_28787*31.0)+4.0))*0.8))};}));return _n_object_29019;})();});
this->_n_back_28581=d::Array<float,true>(size_t(this->_n_N_28558));
this->_n_front_28582=d::Array<float,true>(size_t(this->_n_N_28558));
_render=[=]( double _a0,std::shared_ptr<_n_Record_28886> _a1) mutable ->d::String{double _n_t_28798=_a0;
auto _n_binding_29023=(d::present(_a1)?_a1:([&](){auto _n_object_29022=std::make_shared<_n_Record_28886>();return _n_object_29022;})());
std::optional<d::Array<uint8_t,true>> _n_color_28799=_n_binding_29023->_p_color;
{
double _n_F_28800=(_n_MOUTH_28531-d::mod(((_n_SPEED_28529*_n_t_28798)+135.0),_n_PERIOD_28532));
double _n_drift_28801=(_n_t_28798*1.1);
(void)(this->_n_back_28581.fill(0.0));
(void)(this->_n_front_28582.fill(0.0));
for(auto &&_n_item_29024:this->_n_LAYERS_28579){d::check_cancel();std::shared_ptr<_n_Record_28580> _n_L_28802=_n_item_29024;
{
d::Array<float,true> _n_buf_28803=(d::truth(_n_L_28802->_p_front)?this->_n_front_28582:this->_n_back_28581);
for(auto &&_n_item_29025:_n_L_28802->_p_seeds){d::check_cancel();auto _n_binding_29026=_n_item_29025;
double _n_x0_28804=d::at(_n_binding_29026,0.0);
double _n_y0_28805=d::at(_n_binding_29026,1.0);
double _n_ph_28806=d::at(_n_binding_29026,2.0);
double _n_sp_28807=d::at(_n_binding_29026,3.0);
{
double _n_y_28808=(d::mod((_n_y0_28805+((_n_L_28802->_p_fall*_n_sp_28807)*_n_t_28798)),(_n_H_28524+6.0))-3.0);
double _n_x_28809=((_n_x0_28804-(((0.4*_n_L_28802->_p_fall)*_n_sp_28807)*_n_t_28798))+(_n_L_28802->_p_sway*std::sin((((_n_t_28798*0.9)*_n_sp_28807)+_n_ph_28806))));
double _n_xi_28810=d::round(_n_x_28809);
double _n_ri_28811=d::round(_n_y_28808);
(void)(this->_n_put_28583(_n_buf_28803,_n_xi_28810,_n_ri_28811,_n_L_28802->_p_v));
if(d::truth(_n_L_28802->_p_big)){d::check_cancel();(void)((this->_n_put_28583(_n_buf_28803,(_n_xi_28810-1.0),_n_ri_28811,(_n_L_28802->_p_v*0.45)),this->_n_put_28583(_n_buf_28803,(_n_xi_28810+1.0),_n_ri_28811,(_n_L_28802->_p_v*0.45))));
(void)((this->_n_put_28583(_n_buf_28803,_n_xi_28810,(_n_ri_28811-1.0),(_n_L_28802->_p_v*0.45)),this->_n_put_28583(_n_buf_28803,_n_xi_28810,(_n_ri_28811+1.0),(_n_L_28802->_p_v*0.45))));
}

}
}

}
}
{double _n_r_28812=0.0;
for(;d::truth((_n_r_28812<_n_H_28524));(void)((_n_r_28812++))){d::check_cancel();double _n_y_28813=(_n_r_28812+0.5);
{double _n_x_28814=0.0;
for(;d::truth((_n_x_28814<_n_W_28523));(void)((_n_x_28814++))){d::check_cancel();double _n_k_28815=((_n_r_28812*_n_W_28523)+_n_x_28814);
double _n_m_28816=d::at(this->_n_kind_28562,_n_k_28815);
double _n_cr_28817=d::at(this->_n_br_28563,_n_k_28815);
double _n_cg_28818=d::at(this->_n_bg_28564,_n_k_28815);
double _n_cbl_28819=d::at(this->_n_bb_28565,_n_k_28815);
double _n_floor_28820=d::at(this->_n_flo_28566,_n_k_28815);
double _n_fade_28821=1.0;
if(d::truth((_n_m_28816==_n_SKY_28536))){d::check_cancel();double _n_dmx_28822=((_n_x_28814+0.5)-d::at(_n_MOON_28525,0.0));
double _n_dmy_28823=(_n_y_28813-d::at(_n_MOON_28525,1.0));
double _n_dm_28824=std::sqrt(((_n_dmx_28822*_n_dmx_28822)+(_n_dmy_28823*_n_dmy_28823)));
double _n_c_28825=0.0;
if(d::truth((_n_r_28812<this->_n_CH_28577))){d::check_cancel();double _n_sx_28826=(_n_x_28814+_n_drift_28801);
double _n_ix_28827=std::floor(_n_sx_28826);
double _n_fx_28828=(_n_sx_28826-_n_ix_28827);
double _n_i0_28829=((_n_r_28812*this->_n_CW_28576)+d::mod(_n_ix_28827,this->_n_CW_28576));
double _n_i1_28830=((_n_r_28812*this->_n_CW_28576)+d::mod((_n_ix_28827+1.0),this->_n_CW_28576));
(void)((_n_c_28825=(d::at(this->_n_cloud_28578,_n_i0_28829)+((d::at(this->_n_cloud_28578,_n_i1_28830)-d::at(this->_n_cloud_28578,_n_i0_28829))*_n_fx_28828))));
}
if(d::truth((_n_dm_28824<_n_MOON_R_28526))){d::check_cancel();double _n_face_28831=(0.84+(0.16*_n_fbm_28546((_n_x_28814*0.45),(_n_y_28813*0.45),2.0,0.0)));
double _n_a_28832=((1.0-(_n_c_28825*0.55))*_n_smooth_28548(_n_MOON_R_28526,(_n_MOON_R_28526-1.0),_n_dm_28824));
(void)((((_n_cr_28817=_n_mix_28549(_n_cr_28817,(0.97*_n_face_28831),_n_a_28832)),(_n_cg_28818=_n_mix_28549(_n_cg_28818,(0.97*_n_face_28831),_n_a_28832))),(_n_cbl_28819=_n_mix_28549(_n_cbl_28819,(1.0*_n_face_28831),_n_a_28832))));
}else {d::check_cancel();if((d::truth((_n_c_28825<0.1))&&d::truth((_n_hash_28544(_n_x_28814,((_n_r_28812*3.0)+11.0))>0.984)))){d::check_cancel();double _n_tw_28833=(0.6+(0.4*std::sin(([&](){auto _n_left_29027=(_n_t_28798*(1.5+(_n_hash_28544(_n_x_28814,_n_r_28812)*3.0)));auto _n_right_29028=(_n_hash_28544(_n_r_28812,_n_x_28814)*6.28);return (_n_left_29027+_n_right_29028);})())));
double _n_s_28834=((0.45+(0.5*_n_tw_28833))*_n_smooth_28548(48.0,18.0,_n_y_28813));
(void)((((_n_cr_28817=d::maximum({_n_cr_28817,(_n_s_28834*0.9)})),(_n_cg_28818=d::maximum({_n_cg_28818,(_n_s_28834*0.93)}))),(_n_cbl_28819=d::maximum({_n_cbl_28819,_n_s_28834}))));
}
}
if(d::truth((_n_c_28825>0.01))){d::check_cancel();double _n_near_28835=std::exp(((-d::number(_n_dm_28824))/24.0));
double _n_b_28836=(0.35+(0.9*_n_near_28835));
double _n_a_28837=(_n_c_28825*(0.6+(0.35*_n_near_28835)));
(void)((((_n_cr_28817=_n_mix_28549(_n_cr_28817,((0.32*_n_b_28836)+0.06),_n_a_28837)),(_n_cg_28818=_n_mix_28549(_n_cg_28818,((0.38*_n_b_28836)+0.07),_n_a_28837))),(_n_cbl_28819=_n_mix_28549(_n_cbl_28819,((0.52*_n_b_28836)+0.12),_n_a_28837))));
}
}else {d::check_cancel();if(d::truth((_n_m_28816==_n_RIVER_28541))){d::check_cancel();double _n_road_28838=std::exp((-d::number(std::pow((((_n_x_28814+0.5)-d::at(_n_MOON_28525,0.0))/5.0),2.0))));
double _n_spark_28839=(d::truth((_n_hash_28544(((_n_x_28814*7.0)+double(d::i32((_n_t_28798*3.0))|d::i32(0.0))),(_n_r_28812*5.0))>0.93))?1.0:0.0);
(void)((((_n_cr_28817=(_n_cr_28817+(_n_road_28838*(0.25+(0.6*_n_spark_28839))))),(_n_cg_28818=(_n_cg_28818+(_n_road_28838*(0.28+(0.6*_n_spark_28839)))))),(_n_cbl_28819=(_n_cbl_28819+(_n_road_28838*(0.32+(0.6*_n_spark_28839)))))));
double _n_u_28840=((_n_x_28814+0.5)-_n_F_28800);
if(d::truth((_n_x_28814<_n_MOUTH_28531))){d::check_cancel();double _n_pane_28841=(d::truth((d::mod((d::mod((_n_u_28840-30.0),4.0)+4.0),4.0)<2.6))?1.0:0.25);
double _n_lit_28842=([&](){auto _n_left_29029=([&](){auto _n_left_29031=(this->_n_windows_28584(_n_u_28840)*_n_pane_28841);auto _n_right_29032=(0.35+(0.65*_n_noise_28545((_n_x_28814*0.5),(_n_y_28813*1.8),0.0)));return (_n_left_29031*_n_right_29032);})();auto _n_right_29030=([&](){auto _n_argument_29033=(_n_riverW_28555((_n_x_28814+0.5))+0.3);auto _n_argument_29034=0.5;auto _n_argument_29035=std::fabs((_n_y_28813-_n_riverY_28554((_n_x_28814+0.5))));return _n_smooth_28548(_n_argument_29033,_n_argument_29034,_n_argument_29035);})();return (_n_left_29029*_n_right_29030);})();
(void)((((_n_cr_28817=(_n_cr_28817+(0.95*_n_lit_28842))),(_n_cg_28818=(_n_cg_28818+(0.6*_n_lit_28842)))),(_n_cbl_28819=(_n_cbl_28819+(0.22*_n_lit_28842)))));
double _n_lamp_28843=((std::exp((-d::number(std::pow(((_n_u_28840+10.0)/9.0),2.0))))*0.5)*(d::truth((_n_F_28800<_n_MOUTH_28531))?1.0:0.0));
(void)((((_n_cr_28817=(_n_cr_28817+_n_lamp_28843)),(_n_cg_28818=(_n_cg_28818+(_n_lamp_28843*0.9)))),(_n_cbl_28819=(_n_cbl_28819+(_n_lamp_28843*0.7)))));
}
}else {d::check_cancel();if(d::truth((_n_m_28816==_n_PANE_28542))){d::check_cancel();double _n_g_28844=(0.85+(0.15*std::sin(((_n_t_28798*2.3)+(_n_x_28814*1.7)))));
(void)((((_n_cr_28817=_n_g_28844),(_n_cg_28818=(0.72*_n_g_28844))),(_n_cbl_28819=(0.32*_n_g_28844))));
}
}
}
double _n_u_28845=((_n_x_28814+0.5)-_n_F_28800);
if((((((d::truth((_n_r_28812>=_n_ROOF_28527))&&d::truth((_n_r_28812<49.0)))&&d::truth((_n_u_28845>=0.0)))&&d::truth((_n_u_28845<_n_LEN_28530)))&&d::truth((_n_x_28814<_n_MOUTH_28531)))&&d::truth(([&]()->bool{auto _n_logical_29036=([&]()->bool{auto _n_logical_29037=(_n_m_28816==_n_SKY_28536);return d::truth(_n_logical_29037)?_n_logical_29037:(_n_m_28816==_n_FAR_28537);})();return d::truth(_n_logical_29036)?_n_logical_29036:(_n_m_28816==_n_MOUTH_K_28543);})()))){d::check_cancel();double _n_tr_28846=(-d::number(1.0));
double _n_tg_28847=0.0;
double _n_tb_28848=0.0;
if(d::truth((_n_u_28845<26.0))){d::check_cancel();double _n_nose_28849=((48.0-_n_r_28812)*0.85);
if(d::truth((_n_u_28845>=_n_nose_28849))){d::check_cancel();double _n_s_28850=(d::truth((_n_r_28812==43.0))?1.25:1.0);
(void)((((_n_tr_28846=(0.46*_n_s_28850)),(_n_tg_28847=(0.09*_n_s_28850))),(_n_tb_28848=(0.1*_n_s_28850))));
if(d::truth((_n_r_28812==_n_ROOF_28527))){d::check_cancel();(void)((((_n_tr_28846=0.66),(_n_tg_28847=0.73)),(_n_tb_28848=0.9)));
}
if(((d::truth((_n_r_28812>=43.0))&&d::truth((_n_r_28812<=44.0)))&&d::truth((_n_u_28845<(_n_nose_28849+3.5))))){d::check_cancel();(void)((((_n_tr_28846=0.12),(_n_tg_28847=0.1)),(_n_tb_28848=0.14)));
}
if((((d::truth((_n_r_28812>=43.0))&&d::truth((_n_r_28812<=45.0)))&&d::truth((_n_u_28845>8.5)))&&d::truth((_n_u_28845<11.5)))){d::check_cancel();(void)((((_n_tr_28846=0.8),(_n_tg_28847=0.52)),(_n_tb_28848=0.22)));
}
if(d::truth((_n_r_28812==46.0))){d::check_cancel();(void)((((_n_tr_28846=0.62),(_n_tg_28847=0.56)),(_n_tb_28848=0.5)));
}
if((d::truth((_n_r_28812==47.0))&&d::truth((_n_u_28845<1.6)))){d::check_cancel();(void)((((_n_tr_28846=1.0),(_n_tg_28847=0.97)),(_n_tb_28848=0.85)));
}
}
}else {d::check_cancel();if(d::truth((_n_u_28845>=28.0))){d::check_cancel();double _n_c_28851=d::mod((_n_u_28845-28.0),26.0);
if(d::truth((_n_c_28851<24.0))){d::check_cancel();(void)((((_n_tr_28846=0.42),(_n_tg_28847=0.08)),(_n_tb_28848=0.09)));
if(d::truth((_n_r_28812==43.0))){d::check_cancel();(void)((((_n_tr_28846=0.54),(_n_tg_28847=0.11)),(_n_tb_28848=0.12)));
}
if(d::truth((_n_r_28812==_n_ROOF_28527))){d::check_cancel();if((d::truth((_n_c_28851<0.9))||d::truth((_n_c_28851>23.1)))){d::check_cancel();(void)((_n_tr_28846=(-d::number(1.0))));
}else {d::check_cancel();(void)((((_n_tr_28846=0.66),(_n_tg_28847=0.73)),(_n_tb_28848=0.9)));
}
}else {d::check_cancel();if((((d::truth(([&]()->bool{auto _n_logical_29038=(_n_r_28812==44.0);return d::truth(_n_logical_29038)?_n_logical_29038:(_n_r_28812==45.0);})())&&d::truth((_n_c_28851>=2.0)))&&d::truth((_n_c_28851<22.0)))&&d::truth((d::mod((_n_c_28851-2.0),4.0)<2.6)))){d::check_cancel();double _n_wi_28852=std::floor(((_n_u_28845-28.0)/4.0));
double _n_dim_28853=(d::truth((_n_hash_28544(_n_wi_28852,5.0)<0.12))?0.45:1.0);
double _n_who_28854=(((d::truth((_n_hash_28544(_n_wi_28852,6.0)<0.3))&&d::truth((_n_r_28812==45.0)))&&d::truth((d::mod((_n_c_28851-2.0),4.0)<1.3)))?0.55:1.0);
double _n_g_28855=(((0.9+(0.1*std::sin(((_n_t_28798*1.3)+_n_wi_28852))))*_n_dim_28853)*_n_who_28854);
(void)((((_n_tr_28846=_n_g_28855),(_n_tg_28847=(0.72*_n_g_28855))),(_n_tb_28848=(0.34*_n_g_28855))));
}else {d::check_cancel();if(d::truth((_n_r_28812==46.0))){d::check_cancel();(void)((((_n_tr_28846=0.62),(_n_tg_28847=0.56)),(_n_tb_28848=0.5)));
}else {d::check_cancel();if(d::truth((_n_r_28812>=47.0))){d::check_cancel();(void)((((_n_tr_28846=0.24),(_n_tg_28847=0.05)),(_n_tb_28848=0.07)));
}
}
}
}
if((d::truth((_n_u_28845>(_n_LEN_28530-1.5)))&&d::truth((_n_r_28812==47.0)))){d::check_cancel();(void)((((_n_tr_28846=1.0),(_n_tg_28847=0.25)),(_n_tb_28848=0.2)));
}
}else {d::check_cancel();if((d::truth((_n_r_28812==46.0))||d::truth((_n_r_28812==47.0)))){d::check_cancel();(void)((((_n_tr_28846=0.04),(_n_tg_28847=0.04)),(_n_tb_28848=0.06)));
}
}
}
}
if(d::truth((_n_tr_28846>=0.0))){d::check_cancel();double _n_dark_28856=((d::truth((_n_m_28816==_n_MOUTH_K_28543))||d::truth((_n_x_28814>176.0)))?0.35:1.0);
(void)(((((_n_cr_28817=(_n_tr_28846*_n_dark_28856)),(_n_cg_28818=(_n_tg_28847*_n_dark_28856))),(_n_cbl_28819=(_n_tb_28848*_n_dark_28856))),(_n_floor_28820=0.1)));
}
}
double _n_beam_28857=0.0;
if(((((d::truth((_n_F_28800<(_n_MOUTH_28531+30.0)))&&d::truth((_n_r_28812>28.0)))&&d::truth((_n_r_28812<66.0)))&&d::truth((_n_m_28816!=_n_FRONT_28540)))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_29039=(_n_m_28816==_n_STONE_28538);return d::truth(_n_logical_29039)?(_n_x_28814>=174.0):_n_logical_29039;})()))))){d::check_cancel();double _n_lx_28858=d::minimum({_n_F_28800,176.0});
double _n_a_28859=(_n_lx_28858-(_n_x_28814+0.5));
if(d::truth((_n_a_28859>0.0))){d::check_cancel();double _n_sp_28860=(0.8+(_n_a_28859*0.2));
double _n_py_28861=(((_n_y_28813-_n_LAMP_Y_28528)-0.5)-(_n_a_28859*0.03));
(void)((_n_beam_28857=([&](){auto _n_left_29040=([&](){auto _n_left_29042=std::exp(((-d::number(_n_a_28859))/60.0));auto _n_right_29043=([&](){auto _n_left_29044=std::exp((-d::number(std::pow((_n_py_28861/_n_sp_28860),2.0))));auto _n_right_29045=(0.18*std::exp((-d::number(std::pow((_n_py_28861/(_n_sp_28860*2.6)),2.0)))));return (_n_left_29044+_n_right_29045);})();return (_n_left_29042*_n_right_29043);})();auto _n_right_29041=(1.0-std::exp(((-d::number(_n_a_28859))/2.0)));return (_n_left_29040*_n_right_29041);})()));
}
double _n_dx_28862=((_n_x_28814+0.5)-_n_F_28800);
double _n_dy_28863=((_n_y_28813-_n_LAMP_Y_28528)-0.5);
double _n_d_28864=std::sqrt(((_n_dx_28862*_n_dx_28862)+(_n_dy_28863*_n_dy_28863)));
double _n_glow_28865=(d::truth((_n_F_28800<177.0))?([&](){auto _n_left_29046=(std::exp(((-d::number(_n_d_28864))/1.6))*0.8);auto _n_right_29047=(std::exp(((-d::number(_n_d_28864))/7.0))*0.25);return (_n_left_29046+_n_right_29047);})():0.0);
double _n_on_28866=((_n_beam_28857*(d::truth((_n_m_28816==_n_CAP_28539))?1.2:0.6))+_n_glow_28865);
(void)((((_n_cr_28817=(_n_cr_28817+_n_on_28866)),(_n_cg_28818=(_n_cg_28818+(_n_on_28866*0.92)))),(_n_cbl_28819=(_n_cbl_28819+(_n_on_28866*0.74)))));
}
double _n_spill_28867=0.0;
if(((d::truth((_n_r_28812>34.0))&&d::truth((_n_r_28812<52.0)))&&d::truth((_n_x_28814<_n_MOUTH_28531)))){d::check_cancel();double _n_wu_28868=([&](){auto _n_left_29048=this->_n_windows_28584(_n_u_28845);auto _n_right_29049=(0.5*([&](){auto _n_left_29050=this->_n_windows_28584((_n_u_28845-2.0));auto _n_right_29051=this->_n_windows_28584((_n_u_28845+2.0));return (_n_left_29050+_n_right_29051);})());return (_n_left_29048+_n_right_29049);})();
if(d::truth((_n_wu_28868>0.0))){d::check_cancel();(void)((_n_spill_28867=(_n_wu_28868*(d::truth((_n_r_28812==49.0))?0.35:(d::truth((_n_r_28812<_n_ROOF_28527))?(std::exp(((-d::number((_n_ROOF_28527-_n_r_28812)))/2.2))*0.12):0.0)))));
(void)((((_n_cr_28817=(_n_cr_28817+_n_spill_28867)),(_n_cg_28818=(_n_cg_28818+(_n_spill_28867*0.62)))),(_n_cbl_28819=(_n_cbl_28819+(_n_spill_28867*0.26)))));
}
}
if((((d::truth((_n_x_28814>70.0))&&d::truth((_n_x_28814<152.0)))&&d::truth((_n_r_28812>24.0)))&&d::truth((_n_r_28812<80.0)))){d::check_cancel();double _n_s_28869=0.0;
for(auto &&_n_item_29052:this->_n_chimneys_28572){d::check_cancel();auto _n_binding_29053=_n_item_29052;
double _n_sx_28870=d::at(_n_binding_29053,0.0);
double _n_sy_28871=d::at(_n_binding_29053,1.0);
{
double _n_up_28872=(_n_sy_28871-_n_y_28813);
if((d::truth((_n_up_28872<0.0))||d::truth((_n_up_28872>30.0)))){d::check_cancel();continue;
}
double _n_cx_28873=(((_n_sx_28870-(_n_up_28872*0.3))-((_n_up_28872*_n_up_28872)*0.012))+([&](){auto _n_left_29054=(2.4*(_n_noise_28545(((_n_up_28872*0.15)-(_n_t_28798*0.6)),_n_sx_28870,0.0)-0.5));auto _n_right_29055=d::minimum({1.0,(_n_up_28872/6.0)});return (_n_left_29054*_n_right_29055);})());
double _n_wd_28874=(0.9+(_n_up_28872*0.2));
double _n_n_28875=(0.45+(0.55*_n_noise_28545(((_n_x_28814*0.22)+(_n_t_28798*0.4)),((_n_y_28813*0.3)+(_n_t_28798*0.9)),0.0)));
(void)((_n_s_28869=(_n_s_28869+(([&](){auto _n_left_29056=std::exp((-d::number(std::pow((((_n_x_28814+0.5)-_n_cx_28873)/_n_wd_28874),2.0))));auto _n_right_29057=std::exp(((-d::number(_n_up_28872))/13.0));return (_n_left_29056*_n_right_29057);})()*_n_n_28875))));

}
}
if(d::truth((_n_s_28869>0.01))){d::check_cancel();double _n_a_28876=d::minimum({0.8,(_n_s_28869*1.4)});
(void)((((_n_cr_28817=_n_mix_28549(_n_cr_28817,0.56,_n_a_28876)),(_n_cg_28818=_n_mix_28549(_n_cg_28818,0.6,_n_a_28876))),(_n_cbl_28819=_n_mix_28549(_n_cbl_28819,0.74,_n_a_28876))));
}
}
double _n_flake_28877=((d::truth((_n_m_28816==_n_SKY_28536))||d::truth((_n_m_28816==_n_FAR_28537)))?d::at(this->_n_back_28581,_n_k_28815):0.0);
if(d::truth((d::at(this->_n_front_28582,_n_k_28815)>_n_flake_28877))){d::check_cancel();(void)((_n_flake_28877=d::at(this->_n_front_28582,_n_k_28815)));
}
if(d::truth((_n_flake_28877>0.0))){d::check_cancel();double _n_hot_28878=((_n_beam_28857*4.0)+(_n_spill_28867*3.0));
(void)((((_n_cr_28817=(_n_cr_28817+(_n_flake_28877*(0.62+_n_hot_28878)))),(_n_cg_28818=(_n_cg_28818+(_n_flake_28877*(0.68+(_n_hot_28878*0.86)))))),(_n_cbl_28819=(_n_cbl_28819+(_n_flake_28877*(0.82+(_n_hot_28878*0.6)))))));
}
if(d::truth((_n_r_28812>92.0))){d::check_cancel();(void)((_n_fade_28821=_n_smooth_28548((_n_H_28524+2.0),(_n_H_28524-8.0),_n_y_28813)));
}
double _n_peak_28879=d::maximum({_n_cr_28817,_n_cg_28818,_n_cbl_28819,0.0001});
double _n_level_28880=(_n_clamp_28547((_n_floor_28820+(((1.0-_n_floor_28820)*std::pow(_n_peak_28879,0.85))*0.95)))*_n_fade_28821);
double _n_step_28881=([&](){auto _n_argument_29058=0.0;auto _n_argument_29059=([&](){auto _n_argument_29060=3.0;auto _n_argument_29061=d::round(((_n_level_28880*3.0)+d::at(_n_BAYER_28535,((double(d::i32(_n_r_28812)&d::i32(3.0))*4.0)+double(d::i32(_n_x_28814)&d::i32(3.0))))));return d::minimum({_n_argument_29060,_n_argument_29061});})();return d::maximum({_n_argument_29058,_n_argument_29059});})();
(void)(([&](){auto&& _n_array_29062=this->_n_out_28559;auto _n_index_29063=_n_k_28815;auto _n_value_29064=d::at(_n_DOTS_28533,_n_step_28881);d::put(_n_array_29062,_n_index_29063,_n_value_29064);return _n_value_29064;})());
if(d::truth(_n_color_28799)){d::check_cancel();double _n_want_28882=(d::truth(_n_step_28881)?d::minimum({1.0,((_n_level_28880+0.06)/d::at(_n_COVER_28534,_n_step_28881))}):0.0);
double _n_s_28883=((0.3+(0.7*_n_want_28882))/_n_peak_28879);
(void)(([&](){auto&& _n_array_29065=d::read(_n_color_28799);auto _n_index_29066=_n_k_28815;auto _n_value_29067=([&](){auto _n_argument_29068=_n_clamp_28547((_n_cr_28817*_n_s_28883));auto _n_argument_29069=_n_clamp_28547((_n_cg_28818*_n_s_28883));auto _n_argument_29070=_n_clamp_28547((_n_cbl_28819*_n_s_28883));return this->_n_nearest_28561(_n_argument_29068,_n_argument_29069,_n_argument_29070);})();d::put(_n_array_29065,_n_index_29066,_n_value_29067);return _n_value_29067;})());
}
}}
}}
d::Array<d::String,false> _n_lines_28884=d::Array<d::String,false>{};
{double _n_r_28885=0.0;
for(;d::truth((_n_r_28885<_n_H_28524));(void)((_n_r_28885++))){d::check_cancel();(void)(_n_lines_28884.push(d::join(this->_n_out_28559.slice((_n_r_28885*_n_W_28523),((_n_r_28885+1.0)*_n_W_28523)),d::String(u""))));
}}
return d::join(_n_lines_28884,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("snow-train").cols)*ascii::catalog_meta("snow-train").rows);auto _env=std::make_shared<_n_Record_28886>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &snow_train_meta(){return catalog_meta("snow-train");}
std::unique_ptr<Piece> make_snow_train(const AsciiPieceOptions &o){return std::make_unique<Native_snow_train>(o);}
}
