// Direct, statically typed C++ from src/pieces/snow-train.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28521;
struct _n_Record_28579;
struct _n_Record_28785;
struct _n_Record_28885;
struct _n_Record_28521{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_28521> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28521>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_28579{
d::Array<std::array<double,4>,false> _p_seeds{};
double _p_n{};
double _p_fall{};
double _p_sway{};
bool _p_big{};
double _p_v{};
bool _p_front{};
static std::shared_ptr<_n_Record_28579> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28579>();out->_p_seeds=d::decode<d::Array<std::array<double,4>,false>>(j["seeds"]);out->_p_n=d::decode<double>(j["n"]);out->_p_fall=d::decode<double>(j["fall"]);out->_p_sway=d::decode<double>(j["sway"]);out->_p_big=d::decode<bool>(j["big"]);out->_p_v=d::decode<double>(j["v"]);out->_p_front=d::decode<bool>(j["front"]);return out;}
};
struct _n_Record_28785{
double _p_n{};
double _p_fall{};
double _p_sway{};
bool _p_big{};
double _p_v{};
bool _p_front{};
static std::shared_ptr<_n_Record_28785> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28785>();out->_p_n=d::decode<double>(j["n"]);out->_p_fall=d::decode<double>(j["fall"]);out->_p_sway=d::decode<double>(j["sway"]);out->_p_big=d::decode<bool>(j["big"]);out->_p_v=d::decode<double>(j["v"]);out->_p_front=d::decode<bool>(j["front"]);return out;}
};
struct _n_Record_28885{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28885> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28885>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_28543(double _a0,double _a1);
double _n_noise_28544(double _a0,double _a1,double _a2);
double _n_fbm_28545(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_28546(double _a0);
double _n_smooth_28547(double _a0,double _a1,double _a2);
double _n_mix_28548(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_28549(d::String _a0);
double _n_ground_28550(double _a0);
double _n_ridge_28551(double _a0);
double _n_woods_28552(double _a0);
double _n_riverY_28553(double _a0);
double _n_riverW_28554(double _a0);
double _n_pine_28555(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
std::shared_ptr<_n_Record_28521> _n_meta_28520=[](){return ([&](){auto _n_object_28888=std::make_shared<_n_Record_28521>();_n_object_28888->_p_name=d::String(u"snow train");_n_object_28888->_p_category=d::String(u"scenes");_n_object_28888->_p_note=d::String(u"a lit train crossing a snowy stone viaduct at night as snow falls");_n_object_28888->_p_cols=200.0;_n_object_28888->_p_rows=100.0;_n_object_28888->_p_cell=1.0;_n_object_28888->_p_fps=15.0;_n_object_28888->_p_ground=d::String(u"#070b16");_n_object_28888->_p_palette=d::Array<d::String,false>{d::String(u"#0c1428"),d::String(u"#121d38"),d::String(u"#19284a"),d::String(u"#22345e"),d::String(u"#2d4374"),d::String(u"#3b548a"),d::String(u"#4d68a0"),d::String(u"#6480b4"),d::String(u"#7f99c6"),d::String(u"#9db3d6"),d::String(u"#bccde4"),d::String(u"#d9e4f1"),d::String(u"#f1f5fb"),d::String(u"#ffe7b0"),d::String(u"#ffc56e"),d::String(u"#f29a3c"),d::String(u"#b8642a"),d::String(u"#6e3a22"),d::String(u"#3e1420"),d::String(u"#6a1e26"),d::String(u"#9a2c2e"),d::String(u"#ff4a3d"),d::String(u"#0b1a1e"),d::String(u"#11262a"),d::String(u"#1a3436"),d::String(u"#26474a"),d::String(u"#1e2230"),d::String(u"#2c3242"),d::String(u"#3e4658"),d::String(u"#586276"),d::String(u"#7c8698")};return _n_object_28888;})();}();
const double _n_W_28522=[](){return 200.0;}();
const double _n_H_28523=[](){return 100.0;}();
d::Array<double,false> _n_MOON_28524=[](){return d::Array<double,false>{152.0,15.0};}();
const double _n_MOON_R_28525=[](){return 7.0;}();
const double _n_ROOF_28526=[](){return 42.0;}();
const double _n_LAMP_Y_28527=[](){return 47.0;}();
const double _n_SPEED_28528=[](){return 7.0;}();
const double _n_LEN_28529=[](){return 156.0;}();
const double _n_MOUTH_28530=[](){return 185.0;}();
const double _n_PERIOD_28531=[](){return ((_n_MOUTH_28530+_n_LEN_28529)+40.0);}();
const d::String _n_DOTS_28532=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_28533=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_28534=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_28584=_a0;
return ((_n_v_28584/16.0)-0.47);});}();
const double _n_SKY_28535=[](){return 0.0;}();
const double _n_FAR_28536=[](){return 1.0;}();
const double _n_STONE_28537=[](){return 2.0;}();
const double _n_CAP_28538=[](){return 3.0;}();
const double _n_FRONT_28539=[](){return 4.0;}();
const double _n_RIVER_28540=[](){return 5.0;}();
const double _n_PANE_28541=[](){return 6.0;}();
const double _n_MOUTH_K_28542=[](){return 7.0;}();
double _n_hash_28543(double _a0,double _a1){double _n_x_28585=_a0;
double _n_y_28586=_a1;
{
double _n_h_28587=([&](){auto _n_left_28889=d::imul(double(d::i32(_n_x_28585)|d::i32(0.0)),374761393.0);auto _n_right_28890=d::imul(double(d::i32(_n_y_28586)|d::i32(0.0)),668265263.0);return (_n_left_28889+_n_right_28890);})();
(void)((_n_h_28587=d::imul(double(d::i32(_n_h_28587)^d::i32(double(d::u32(_n_h_28587)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_28587)^d::i32(double(d::u32(_n_h_28587)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_28544(double _a0,double _a1,double _a2){double _n_x_28588=_a0;
double _n_y_28589=_a1;
double _n_period_28590=_a2;
{
double _n_xi_28591=std::floor(_n_x_28588);
double _n_yi_28592=std::floor(_n_y_28589);
double _n_fx_28593=(_n_x_28588-_n_xi_28591);
double _n_fy_28594=(_n_y_28589-_n_yi_28592);
double _n_u_28595=((_n_fx_28593*_n_fx_28593)*(3.0-(2.0*_n_fx_28593)));
double _n_v_28596=((_n_fy_28594*_n_fy_28594)*(3.0-(2.0*_n_fy_28594)));
double _n_x0_28597=_n_xi_28591;
double _n_x1_28598=(_n_xi_28591+1.0);
if(d::truth(_n_period_28590)){d::check_cancel();(void)((_n_x0_28597=d::mod((d::mod(_n_xi_28591,_n_period_28590)+_n_period_28590),_n_period_28590)));
(void)((_n_x1_28598=d::mod((_n_x0_28597+1.0),_n_period_28590)));
}
double _n_a_28599=_n_hash_28543(_n_x0_28597,_n_yi_28592);
double _n_b_28600=_n_hash_28543(_n_x1_28598,_n_yi_28592);
double _n_c_28601=_n_hash_28543(_n_x0_28597,(_n_yi_28592+1.0));
double _n_d_28602=_n_hash_28543(_n_x1_28598,(_n_yi_28592+1.0));
return (((_n_a_28599+((_n_b_28600-_n_a_28599)*_n_u_28595))+((_n_c_28601-_n_a_28599)*_n_v_28596))+(((((_n_a_28599-_n_b_28600)-_n_c_28601)+_n_d_28602)*_n_u_28595)*_n_v_28596));

}
}

double _n_fbm_28545(double _a0,double _a1,double _a2,double _a3){double _n_x_28603=_a0;
double _n_y_28604=_a1;
double _n_octaves_28605=_a2;
double _n_period_28606=_a3;
{
double _n_s_28607=0.0;
double _n_n_28608=0.0;
double _n_amp_28609=0.5;
double _n_f_28610=1.0;
{double _n_i_28611=0.0;
for(;d::truth((_n_i_28611<_n_octaves_28605));(void)((_n_i_28611++))){d::check_cancel();(void)((_n_s_28607=(_n_s_28607+(_n_amp_28609*_n_noise_28544((_n_x_28603*_n_f_28610),(_n_y_28604*_n_f_28610),(_n_period_28606*_n_f_28610))))));
(void)((_n_n_28608=(_n_n_28608+_n_amp_28609)));
(void)((_n_amp_28609=(_n_amp_28609*0.5)));
(void)((_n_f_28610=(_n_f_28610*2.0)));
}}
return (_n_s_28607/_n_n_28608);

}
}

double _n_clamp_28546(double _a0){double _n_v_28612=_a0;
return (d::truth((_n_v_28612<0.0))?0.0:(d::truth((_n_v_28612>1.0))?1.0:_n_v_28612));}

double _n_smooth_28547(double _a0,double _a1,double _a2){double _n_a_28613=_a0;
double _n_b_28614=_a1;
double _n_v_28615=_a2;
{
double _n_k_28616=_n_clamp_28546(((_n_v_28615-_n_a_28613)/(_n_b_28614-_n_a_28613)));
return ((_n_k_28616*_n_k_28616)*(3.0-(2.0*_n_k_28616)));

}
}

double _n_mix_28548(double _a0,double _a1,double _a2){double _n_a_28617=_a0;
double _n_b_28618=_a1;
double _n_k_28619=_a2;
return (_n_a_28617+((_n_b_28618-_n_a_28617)*_n_k_28619));}

d::Array<double,false> _n_hex_28549(d::String _a0){d::String _n_s_28620=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_28621=_a0;
return (([&](){auto _n_argument_28891=d::slice(_n_s_28620,_n_i_28621,(_n_i_28621+2.0));auto _n_argument_28892=16.0;return d::parseInt(_n_argument_28891,_n_argument_28892);})()/255.0);});}

double _n_ground_28550(double _a0){double _n_x_28622=_a0;
return ([&](){auto _n_left_28893=([&](){auto _n_argument_28895=(80.0+(8.0*_n_smooth_28547(0.0,48.0,_n_x_28622)));auto _n_argument_28896=([&](){auto _n_left_28897=(88.0-(39.0*_n_smooth_28547(104.0,172.0,_n_x_28622)));auto _n_right_28898=(30.0*_n_smooth_28547(170.0,200.0,_n_x_28622));return (_n_left_28897-_n_right_28898);})();return d::minimum({_n_argument_28895,_n_argument_28896});})();auto _n_right_28894=(1.6*(_n_fbm_28545((_n_x_28622*0.09),2.3,3.0,0.0)-0.5));return (_n_left_28893+_n_right_28894);})();}

double _n_ridge_28551(double _a0){double _n_x_28623=_a0;
return ([&](){auto _n_left_28899=([&](){auto _n_left_28901=([&](){auto _n_left_28903=([&](){auto _n_left_28905=(34.0-(18.0*std::exp((-d::number(std::pow(((_n_x_28623-52.0)/30.0),2.0))))));auto _n_right_28906=(9.0*std::exp((-d::number(std::pow(((_n_x_28623-118.0)/16.0),2.0)))));return (_n_left_28905-_n_right_28906);})();auto _n_right_28904=(5.0*std::exp((-d::number(std::pow(((_n_x_28623-178.0)/22.0),2.0)))));return (_n_left_28903-_n_right_28904);})();auto _n_right_28902=(7.0*(_n_fbm_28545((_n_x_28623*0.06),0.5,4.0,0.0)-0.5));return (_n_left_28901+_n_right_28902);})();auto _n_right_28900=(2.5*(_n_fbm_28545((_n_x_28623*0.3),4.5,2.0,0.0)-0.5));return (_n_left_28899+_n_right_28900);})();}

double _n_woods_28552(double _a0){double _n_x_28624=_a0;
return ([&](){auto _n_left_28907=([&](){auto _n_left_28909=(76.0+(6.0*(_n_fbm_28545((_n_x_28624*0.04),7.1,3.0,0.0)-0.5)));auto _n_right_28910=(6.0*_n_smooth_28547(40.0,0.0,_n_x_28624));return (_n_left_28909-_n_right_28910);})();auto _n_right_28908=(6.0*_n_smooth_28547(110.0,160.0,_n_x_28624));return (_n_left_28907-_n_right_28908);})();}

double _n_riverY_28553(double _a0){double _n_x_28625=_a0;
return ([&](){auto _n_left_28911=(93.5+(1.8*std::sin(((_n_x_28625*0.045)+0.6))));auto _n_right_28912=(0.8*std::sin((_n_x_28625*0.13)));return (_n_left_28911+_n_right_28912);})();}

double _n_riverW_28554(double _a0){double _n_x_28626=_a0;
return (2.4+(0.8*std::sin(((_n_x_28626*0.07)+2.0))));}

double _n_pine_28555(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_28627=_a0;
double _n_y_28628=_a1;
double _n_cx_28629=_a2;
double _n_base_28630=_a3;
double _n_h_28631=_a4;
double _n_w_28632=_a5;
{
double _n_dy_28633=(_n_y_28628-(_n_base_28630-_n_h_28631));
if((d::truth((_n_dy_28633<0.0))||d::truth((_n_dy_28633>_n_h_28631)))){d::check_cancel();return 0.0;
}
double _n_dx_28634=((_n_x_28627+0.5)-_n_cx_28629);
if(d::truth((_n_dy_28633>(_n_h_28631-1.5)))){d::check_cancel();return (d::truth((std::fabs(_n_dx_28634)<0.6))?1.0:0.0);
}
double _n_tiers_28635=([&](){auto _n_argument_28913=2.0;auto _n_argument_28914=d::round((_n_h_28631/4.0));return d::maximum({_n_argument_28913,_n_argument_28914});})();
double _n_tier_28636=((_n_dy_28633/(_n_h_28631-1.5))*_n_tiers_28635);
double _n_local_28637=(_n_tier_28636-std::floor(_n_tier_28636));
double _n_hw_28638=((_n_w_28632*(((std::floor(_n_tier_28636)+0.35)+(0.65*_n_local_28637))/_n_tiers_28635))+0.35);
if(d::truth((std::fabs(_n_dx_28634)>_n_hw_28638))){d::check_cancel();return 0.0;
}
bool _n_top_28639=([&]()->bool{auto _n_logical_28915=(_n_local_28637<0.3);return d::truth(_n_logical_28915)?(std::fabs(_n_dx_28634)>(_n_hw_28638*0.35)):_n_logical_28915;})();
bool _n_lee_28640=([&]()->bool{auto _n_logical_28916=(_n_dx_28634>(_n_hw_28638*0.45));return d::truth(_n_logical_28916)?(_n_hash_28543(((_n_x_28627*3.0)+1.0),double(d::i32((_n_y_28628*7.0))|d::i32(0.0)))>0.45):_n_logical_28916;})();
return (((d::truth(_n_top_28639)||d::truth(_n_lee_28640))||d::truth((_n_dy_28633<1.2)))?2.0:1.0);

}
}

struct Native_snow_train final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_28556{};
double _n_N_28557{};
d::Array<d::String,false> _n_out_28558{};
d::Array<uint8_t,true> _n_lut_28559{};
d::Array<uint8_t,true> _n_kind_28561{};
d::Array<float,true> _n_br_28562{};
d::Array<float,true> _n_bg_28563{};
d::Array<float,true> _n_bb_28564{};
d::Array<float,true> _n_flo_28565{};
d::Array<float,true> _n_G_28567{};
d::Array<float,true> _n_R_28568{};
d::Array<float,true> _n_B_28569{};
d::Array<std::array<double,2>,false> _n_chimneys_28571{};
d::Array<std::array<double,2>,false> _n_panes_28572{};
d::Array<std::array<double,4>,false> _n_trees_28573{};
double _n_CW_28575{};
double _n_CH_28576{};
d::Array<float,true> _n_cloud_28577{};
d::Array<std::shared_ptr<_n_Record_28579>,false> _n_LAYERS_28578{};
d::Array<float,true> _n_back_28580{};
d::Array<float,true> _n_front_28581{};
std::function<d::String(double,std::shared_ptr<_n_Record_28885>)> _render;
double _n_nearest_28560(double _a0,double _a1,double _a2){double _n_r_28641=_a0;
double _n_g_28642=_a1;
double _n_b_28643=_a2;
{
double _n_k_28644=([&](){auto _n_left_29070=([&](){auto _n_left_29072=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_28641*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_29073=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_28642*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_29072)|d::i32(_n_right_29073));})();auto _n_right_29071=d::minimum({31.0,double(d::i32((_n_b_28643*31.99))|d::i32(0.0))});return double(d::i32(_n_left_29070)|d::i32(_n_right_29071));})();
if(d::truth((d::at(this->_n_lut_28559,_n_k_28644)!=255.0))){d::check_cancel();return d::at(this->_n_lut_28559,_n_k_28644);
}
double _n_best_28645=0.0;
double _n_bd_28646=1000000000.0;
{double _n_i_28647=0.0;
for(;d::truth((_n_i_28647<double(this->_n_P_28556.size())));(void)((_n_i_28647++))){d::check_cancel();double _n_dr_28648=(d::at(d::at(this->_n_P_28556,_n_i_28647),0.0)-_n_r_28641);
double _n_dg_28649=(d::at(d::at(this->_n_P_28556,_n_i_28647),1.0)-_n_g_28642);
double _n_db_28650=(d::at(d::at(this->_n_P_28556,_n_i_28647),2.0)-_n_b_28643);
double _n_d_28651=((((0.3*_n_dr_28648)*_n_dr_28648)+((0.5*_n_dg_28649)*_n_dg_28649))+((0.2*_n_db_28650)*_n_db_28650));
if(d::truth((_n_d_28651<_n_bd_28646))){d::check_cancel();(void)(((_n_bd_28646=_n_d_28651),(_n_best_28645=_n_i_28647)));
}
}}
return ([&](){auto&& _n_array_29074=this->_n_lut_28559;auto _n_index_29075=_n_k_28644;auto _n_value_29076=_n_best_28645;d::put(_n_array_29074,_n_index_29075,_n_value_29076);return _n_value_29076;})();

}
}

void _n_set_28566(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_k_28652=_a0;
double _n_kd_28653=_a1;
double _n_r_28654=_a2;
double _n_g_28655=_a3;
double _n_b_28656=_a4;
double _n_f_28657=_a5;
{
(void)(((((([&](){auto&& _n_array_29077=this->_n_kind_28561;auto _n_index_29078=_n_k_28652;auto _n_value_29079=_n_kd_28653;d::put(_n_array_29077,_n_index_29078,_n_value_29079);return _n_value_29079;})(),([&](){auto&& _n_array_29080=this->_n_br_28562;auto _n_index_29081=_n_k_28652;auto _n_value_29082=_n_r_28654;d::put(_n_array_29080,_n_index_29081,_n_value_29082);return _n_value_29082;})()),([&](){auto&& _n_array_29083=this->_n_bg_28563;auto _n_index_29084=_n_k_28652;auto _n_value_29085=_n_g_28655;d::put(_n_array_29083,_n_index_29084,_n_value_29085);return _n_value_29085;})()),([&](){auto&& _n_array_29086=this->_n_bb_28564;auto _n_index_29087=_n_k_28652;auto _n_value_29088=_n_b_28656;d::put(_n_array_29086,_n_index_29087,_n_value_29088);return _n_value_29088;})()),([&](){auto&& _n_array_29089=this->_n_flo_28565;auto _n_index_29090=_n_k_28652;auto _n_value_29091=_n_f_28657;d::put(_n_array_29089,_n_index_29090,_n_value_29091);return _n_value_29091;})()));

}
}

double _n_relief_28570(double _a0,double _a1){double _n_x_28659=_a0;
double _n_y_28660=_a1;
{
double _n_n_28661=_n_fbm_28545(((_n_x_28659*0.05)+(_n_y_28660*0.03)),(_n_y_28660*0.11),4.0,0.0);
return (1.0-std::fabs(((2.0*_n_n_28661)-1.0)));

}
}

void _n_plant_28574(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_from_28746=_a0;
double _n_to_28747=_a1;
double _n_gap_28748=_a2;
double _n_hMin_28749=_a3;
double _n_hMax_28750=_a4;
double _n_seed_28751=_a5;
{
{double _n_x_28752=_n_from_28746;
for(;d::truth((_n_x_28752<_n_to_28747));(void)((_n_x_28752=(_n_x_28752+(_n_gap_28748+(_n_hash_28543(double(d::i32((_n_x_28752*7.0))|d::i32(0.0)),_n_seed_28751)*_n_gap_28748)))))){d::check_cancel();if((d::truth((_n_x_28752>114.0))&&d::truth((_n_x_28752<156.0)))){d::check_cancel();continue;
}
double _n_h_28753=(_n_hMin_28749+(_n_hash_28543(double(d::i32((_n_x_28752*3.0))|d::i32(0.0)),(_n_seed_28751+1.0))*(_n_hMax_28750-_n_hMin_28749)));
(void)(this->_n_trees_28573.push(std::array<double,4>{_n_x_28752,(d::at(this->_n_G_28567,([&](){auto _n_argument_29092=0.0;auto _n_argument_29093=([&](){auto _n_argument_29094=_n_W_28522;auto _n_argument_29095=d::round(_n_x_28752);return d::minimum({_n_argument_29094,_n_argument_29095});})();return d::maximum({_n_argument_29092,_n_argument_29093});})())+1.5),_n_h_28753,(_n_h_28753*0.36)}));
}}

}
}

void _n_put_28582(d::Array<float,true> _a0,double _a1,double _a2,double _a3){d::Array<float,true> _n_buf_28789=_a0;
double _n_x_28790=_a1;
double _n_r_28791=_a2;
double _n_v_28792=_a3;
{
if((d::truth((_n_r_28791<0.0))||d::truth((_n_r_28791>=_n_H_28523)))){d::check_cancel();return;
}
double _n_xi_28793=d::mod((d::mod(_n_x_28790,_n_W_28522)+_n_W_28522),_n_W_28522);
double _n_k_28794=((_n_r_28791*_n_W_28522)+_n_xi_28793);
if(d::truth((_n_v_28792>d::at(_n_buf_28789,_n_k_28794)))){d::check_cancel();(void)(([&](){auto&& _n_array_29096=_n_buf_28789;auto _n_index_29097=_n_k_28794;auto _n_value_29098=_n_v_28792;d::put(_n_array_29096,_n_index_29097,_n_value_29098);return _n_value_29098;})());
}

}
}

double _n_windows_28583(double _a0){double _n_u_28795=_a0;
{
if((d::truth((_n_u_28795<0.0))||d::truth((_n_u_28795>=_n_LEN_28529)))){d::check_cancel();return 0.0;
}
if(d::truth((_n_u_28795<26.0))){d::check_cancel();return ((d::truth((_n_u_28795>8.0))&&d::truth((_n_u_28795<12.0)))?0.4:0.0);
}
double _n_c_28796=d::mod((_n_u_28795-28.0),26.0);
return (((d::truth((_n_u_28795>=28.0))&&d::truth((_n_c_28796>=2.0)))&&d::truth((_n_c_28796<22.0)))?1.0:0.0);

}
}

explicit Native_snow_train(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_28556=d::map(_n_meta_28520->_p_palette,_n_hex_28549);
this->_n_N_28557=(_n_W_28522*_n_H_28523);
this->_n_out_28558=d::Array<d::String,false>(size_t(this->_n_N_28557));
this->_n_lut_28559=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_kind_28561=d::Array<uint8_t,true>(size_t(this->_n_N_28557));
this->_n_br_28562=d::Array<float,true>(size_t(this->_n_N_28557));
this->_n_bg_28563=d::Array<float,true>(size_t(this->_n_N_28557));
this->_n_bb_28564=d::Array<float,true>(size_t(this->_n_N_28557));
this->_n_flo_28565=d::Array<float,true>(size_t(this->_n_N_28557));
this->_n_G_28567=d::Array<float,true>(size_t((_n_W_28522+1.0)));
this->_n_R_28568=d::Array<float,true>(size_t((_n_W_28522+1.0)));
this->_n_B_28569=d::Array<float,true>(size_t((_n_W_28522+1.0)));
{double _n_x_28658=0.0;
for(;d::truth((_n_x_28658<=_n_W_28522));(void)((_n_x_28658++))){d::check_cancel();(void)(((([&](){auto&& _n_array_28917=this->_n_G_28567;auto _n_index_28918=_n_x_28658;auto _n_value_28919=_n_ground_28550((_n_x_28658+0.5));d::put(_n_array_28917,_n_index_28918,_n_value_28919);return _n_value_28919;})(),([&](){auto&& _n_array_28920=this->_n_R_28568;auto _n_index_28921=_n_x_28658;auto _n_value_28922=_n_ridge_28551((_n_x_28658+0.5));d::put(_n_array_28920,_n_index_28921,_n_value_28922);return _n_value_28922;})()),([&](){auto&& _n_array_28923=this->_n_B_28569;auto _n_index_28924=_n_x_28658;auto _n_value_28925=_n_woods_28552((_n_x_28658+0.5));d::put(_n_array_28923,_n_index_28924,_n_value_28925);return _n_value_28925;})()));
}}
{double _n_r_28662=0.0;
for(;d::truth((_n_r_28662<_n_H_28523));(void)((_n_r_28662++))){d::check_cancel();{double _n_x_28663=0.0;
for(;d::truth((_n_x_28663<_n_W_28522));(void)((_n_x_28663++))){d::check_cancel();double _n_k_28664=((_n_r_28662*_n_W_28522)+_n_x_28663);
double _n_y_28665=(_n_r_28662+0.5);
double _n_v_28666=(_n_y_28665/50.0);
double _n_dmx_28667=((_n_x_28663+0.5)-d::at(_n_MOON_28524,0.0));
double _n_dmy_28668=(_n_y_28665-d::at(_n_MOON_28524,1.0));
double _n_dm_28669=std::sqrt(((_n_dmx_28667*_n_dmx_28667)+(_n_dmy_28668*_n_dmy_28668)));
double _n_halo_28670=([&](){auto _n_left_28926=(std::exp(((-d::number(_n_dm_28669))/26.0))*0.3);auto _n_right_28927=(std::exp(((-d::number(_n_dm_28669))/10.0))*0.4);return (_n_left_28926+_n_right_28927);})();
double _n_veil_28671=(0.88+(0.24*_n_fbm_28545((_n_x_28663*0.05),(_n_y_28665*0.08),3.0,0.0)));
(void)(this->_n_set_28566(_n_k_28664,_n_SKY_28535,(((0.015+((0.06*_n_v_28666)*_n_v_28666))*_n_veil_28671)+(0.26*_n_halo_28670)),(((0.025+((0.08*_n_v_28666)*_n_v_28666))*_n_veil_28671)+(0.31*_n_halo_28670)),(((0.06+((0.15*_n_v_28666)*_n_v_28666))*_n_veil_28671)+(0.38*_n_halo_28670)),0.04));
if(d::truth((_n_y_28665>=d::at(this->_n_R_28568,_n_x_28663)))){d::check_cancel();double _n_depth_28672=(_n_y_28665-d::at(this->_n_R_28568,_n_x_28663));
double _n_fall_28673=(([&](){auto _n_left_28928=d::at(this->_n_R_28568,d::minimum({_n_W_28522,(_n_x_28663+3.0)}));auto _n_right_28929=d::at(this->_n_R_28568,d::maximum({0.0,(_n_x_28663-3.0)}));return (_n_left_28928-_n_right_28929);})()/6.0);
double _n_h0_28674=this->_n_relief_28570(_n_x_28663,_n_y_28665);
double _n_face_28675=_n_clamp_28546(((0.45+(_n_fall_28673*1.6))+(5.0*(_n_h0_28674-this->_n_relief_28570((_n_x_28663+1.3),(_n_y_28665-0.9))))));
double _n_streak_28676=_n_noise_28544(((_n_x_28663*0.3)+(_n_y_28665*0.12)),(_n_y_28665*0.05),0.0);
double _n_rim_28677=(_n_smooth_28547(2.0,0.0,_n_depth_28672)*0.45);
double _n_s_28678=((((0.16+((0.95*_n_face_28675)*_n_face_28675))*(0.7+(0.45*_n_streak_28676)))+_n_rim_28677)*(1.0-(0.75*_n_smooth_28547(7.0,22.0,_n_depth_28672))));
double _n_cr_28679=(0.52*_n_s_28678);
double _n_cg_28680=(0.62*_n_s_28678);
double _n_cb_28681=(0.88*_n_s_28678);
double _n_mist_28682=_n_smooth_28547(36.0,52.0,_n_y_28665);
(void)((((_n_cr_28679=_n_mix_28548(_n_cr_28679,0.3,(_n_mist_28682*0.92))),(_n_cg_28680=_n_mix_28548(_n_cg_28680,0.38,(_n_mist_28682*0.92)))),(_n_cb_28681=_n_mix_28548(_n_cb_28681,0.57,(_n_mist_28682*0.92)))));
(void)(this->_n_set_28566(_n_k_28664,_n_FAR_28536,_n_cr_28679,_n_cg_28680,_n_cb_28681,0.12));
}
if(d::truth((_n_y_28665>=d::at(this->_n_B_28569,_n_x_28663)))){d::check_cancel();double _n_fleck_28683=(d::truth((_n_hash_28543(((_n_x_28663*5.0)+3.0),((_n_r_28662*9.0)+1.0))>0.8))?1.0:0.0);
double _n_deep_28684=_n_smooth_28547(d::at(this->_n_B_28569,_n_x_28663),(d::at(this->_n_B_28569,_n_x_28663)+10.0),_n_y_28665);
double _n_n_28685=_n_fbm_28545((_n_x_28663*0.2),(_n_y_28665*0.3),2.0,0.0);
double _n_m_28686=(0.5*(1.0-_n_deep_28684));
(void)(([&](){auto _n_argument_28930=_n_k_28664;auto _n_argument_28931=_n_FAR_28536;auto _n_argument_28932=_n_mix_28548((0.03+((0.2*_n_fleck_28683)*_n_n_28685)),0.2,_n_m_28686);auto _n_argument_28933=_n_mix_28548((0.06+((0.25*_n_fleck_28683)*_n_n_28685)),0.26,_n_m_28686);auto _n_argument_28934=_n_mix_28548((0.09+((0.36*_n_fleck_28683)*_n_n_28685)),0.4,_n_m_28686);auto _n_argument_28935=0.05;return this->_n_set_28566(_n_argument_28930,_n_argument_28931,_n_argument_28932,_n_argument_28933,_n_argument_28934,_n_argument_28935);})());
}
}}
}}
{double _n_x_28687=(-d::number(2.0));
for(;d::truth((_n_x_28687<(_n_W_28522+2.0)));(void)((_n_x_28687=(_n_x_28687+(1.6+(_n_hash_28543(double(d::i32((_n_x_28687*13.0))|d::i32(0.0)),21.0)*1.8)))))){d::check_cancel();double _n_cx_28688=(_n_x_28687+_n_hash_28543(double(d::i32((_n_x_28687*7.0))|d::i32(0.0)),22.0));
double _n_base_28689=(_n_woods_28552(_n_cx_28688)+3.0);
double _n_h_28690=(4.0+(_n_hash_28543(double(d::i32((_n_cx_28688*11.0))|d::i32(0.0)),23.0)*5.0));
double _n_w_28691=(1.3+(_n_hash_28543(double(d::i32((_n_cx_28688*5.0))|d::i32(0.0)),24.0)*1.0));
{double _n_r_28692=([&](){auto _n_argument_28936=0.0;auto _n_argument_28937=std::floor((_n_base_28689-_n_h_28690));return d::maximum({_n_argument_28936,_n_argument_28937});})();
for(;d::truth((_n_r_28692<d::minimum({_n_H_28523,(_n_base_28689+1.0)})));(void)((_n_r_28692++))){d::check_cancel();{double _n_xx_28693=([&](){auto _n_argument_28938=0.0;auto _n_argument_28939=std::floor(((_n_cx_28688-_n_w_28691)-1.0));return d::maximum({_n_argument_28938,_n_argument_28939});})();
for(;d::truth((_n_xx_28693<d::minimum({_n_W_28522,((_n_cx_28688+_n_w_28691)+1.0)})));(void)((_n_xx_28693++))){d::check_cancel();double _n_p_28694=_n_pine_28555(_n_xx_28693,(_n_r_28692+0.5),_n_cx_28688,_n_base_28689,_n_h_28690,_n_w_28691);
if(d::truth((!d::truth(_n_p_28694)))){d::check_cancel();continue;
}
double _n_m_28695=0.45;
if(d::truth((_n_p_28694==2.0))){d::check_cancel();(void)(([&](){auto _n_argument_28940=((_n_r_28692*_n_W_28522)+_n_xx_28693);auto _n_argument_28941=_n_FAR_28536;auto _n_argument_28942=_n_mix_28548(0.32,0.22,_n_m_28695);auto _n_argument_28943=_n_mix_28548(0.4,0.28,_n_m_28695);auto _n_argument_28944=_n_mix_28548(0.58,0.42,_n_m_28695);auto _n_argument_28945=0.1;return this->_n_set_28566(_n_argument_28940,_n_argument_28941,_n_argument_28942,_n_argument_28943,_n_argument_28944,_n_argument_28945);})());
}else {d::check_cancel();(void)(([&](){auto _n_argument_28946=((_n_r_28692*_n_W_28522)+_n_xx_28693);auto _n_argument_28947=_n_FAR_28536;auto _n_argument_28948=_n_mix_28548(0.05,0.2,(_n_m_28695*0.6));auto _n_argument_28949=_n_mix_28548(0.09,0.26,(_n_m_28695*0.6));auto _n_argument_28950=_n_mix_28548(0.11,0.4,(_n_m_28695*0.6));auto _n_argument_28951=0.08;return this->_n_set_28566(_n_argument_28946,_n_argument_28947,_n_argument_28948,_n_argument_28949,_n_argument_28950,_n_argument_28951);})());
}
}}
}}
}}
{double _n_r_28696=0.0;
for(;d::truth((_n_r_28696<_n_H_28523));(void)((_n_r_28696++))){d::check_cancel();{double _n_x_28697=0.0;
for(;d::truth((_n_x_28697<_n_W_28522));(void)((_n_x_28697++))){d::check_cancel();double _n_k_28698=((_n_r_28696*_n_W_28522)+_n_x_28697);
double _n_y_28699=(_n_r_28696+0.5);
double _n_g_28700=d::at(this->_n_G_28567,_n_x_28697);
if(((d::truth((_n_x_28697<176.0))&&d::truth((_n_y_28699>=49.0)))&&d::truth((_n_y_28699<(_n_g_28700+0.5))))){d::check_cancel();double _n_i_28701=d::round((((_n_x_28697+0.5)-8.0)/20.0));
double _n_dx_28702=((_n_x_28697+0.5)-(8.0+(20.0*_n_i_28701)));
double _n_hw_28703=(7.0-(d::maximum({0.0,(_n_y_28699-66.0)})*0.05));
bool _n_open_28704=([&]()->bool{auto _n_logical_28952=(_n_y_28699>59.0);return d::truth(_n_logical_28952)?(d::truth((_n_y_28699<66.0))?(((_n_dx_28702*_n_dx_28702)+std::pow((_n_y_28699-66.0),2.0))<49.0):(std::fabs(_n_dx_28702)<_n_hw_28703)):_n_logical_28952;})();
if(d::truth((!d::truth(_n_open_28704)))){d::check_cancel();double _n_course_28705=std::floor(((_n_r_28696-49.0)/3.0));
double _n_bx_28706=std::floor(((_n_x_28697+(double(d::i32(_n_course_28705)&d::i32(1.0))*3.0))/6.0));
bool _n_mortar_28707=([&]()->bool{auto _n_logical_28953=(d::mod((_n_r_28696-49.0),3.0)==0.0);return d::truth(_n_logical_28953)?_n_logical_28953:(d::mod((_n_x_28697+(double(d::i32(_n_course_28705)&d::i32(1.0))*3.0)),6.0)==0.0);})();
double _n_s_28708=([&](){auto _n_left_28954=(0.55+(0.4*_n_hash_28543(_n_bx_28706,_n_course_28705)));auto _n_right_28955=(0.25*_n_fbm_28545((_n_x_28697*0.3),(_n_y_28699*0.3),2.0,0.0));return (_n_left_28954+_n_right_28955);})();
if(d::truth(_n_mortar_28707)){d::check_cancel();(void)((_n_s_28708=(_n_s_28708*0.6)));
}
bool _n_ring_28709=([&]()->bool{auto _n_logical_28956=([&]()->bool{auto _n_logical_28957=([&]()->bool{auto _n_logical_28958=(_n_y_28699>57.0);return d::truth(_n_logical_28958)?(_n_y_28699<67.0):_n_logical_28958;})();return d::truth(_n_logical_28957)?(std::sqrt(((_n_dx_28702*_n_dx_28702)+std::pow((_n_y_28699-66.0),2.0)))<9.2):_n_logical_28957;})();return d::truth(_n_logical_28956)?(std::fabs(_n_dx_28702)<9.0):_n_logical_28956;})();
if(d::truth(_n_ring_28709)){d::check_cancel();(void)((_n_s_28708=(_n_s_28708*1.3)));
}
if((((d::truth((_n_y_28699>=59.0))&&d::truth(([&](){auto _n_left_28959=std::fabs(_n_dx_28702);auto _n_right_28960=((d::truth((_n_y_28699<66.0))?std::sqrt(d::maximum({0.0,(49.0-std::pow((_n_y_28699-66.0),2.0))})):_n_hw_28703)-0.1);return (_n_left_28959>_n_right_28960);})()))&&d::truth((_n_dx_28702<0.0)))&&d::truth((_n_dx_28702>((-d::number(_n_hw_28703))-1.5))))){d::check_cancel();(void)((_n_s_28708=(_n_s_28708*1.6)));
}
double _n_mist_28710=(_n_smooth_28547(62.0,92.0,_n_y_28699)*0.2);
double _n_cr_28711=_n_mix_28548((0.07*_n_s_28708),0.16,_n_mist_28710);
double _n_cg_28712=_n_mix_28548((0.085*_n_s_28708),0.2,_n_mist_28710);
double _n_cb_28713=_n_mix_28548((0.13*_n_s_28708),0.3,_n_mist_28710);
double _n_kd_28714=_n_STONE_28537;
if(d::truth((_n_r_28696==49.0))){d::check_cancel();double _n_n_28715=(0.85+(0.15*_n_hash_28543(_n_x_28697,77.0)));
(void)(((((_n_cr_28711=(0.62*_n_n_28715)),(_n_cg_28712=(0.7*_n_n_28715))),(_n_cb_28713=(0.86*_n_n_28715))),(_n_kd_28714=_n_CAP_28538)));
}else {d::check_cancel();if((d::truth((_n_r_28696==53.0))||d::truth((_n_r_28696==66.0)))){d::check_cancel();double _n_n_28716=(d::truth((_n_hash_28543((_n_x_28697*3.0),_n_r_28696)>0.3))?1.0:0.5);
(void)((((_n_cr_28711=(0.5*_n_n_28716)),(_n_cg_28712=(0.58*_n_n_28716))),(_n_cb_28713=(0.76*_n_n_28716))));
}else {d::check_cancel();if(d::truth((_n_r_28696==54.0))){d::check_cancel();(void)((((_n_cr_28711=(_n_cr_28711*0.45)),(_n_cg_28712=(_n_cg_28712*0.45))),(_n_cb_28713=(_n_cb_28713*0.5))));
}
}
}
(void)(this->_n_set_28566(_n_k_28698,_n_kd_28714,_n_cr_28711,_n_cg_28712,_n_cb_28713,(d::truth((_n_kd_28714==_n_CAP_28538))?0.12:0.03)));
}
}
if(d::truth((_n_y_28699>=_n_g_28700))){d::check_cancel();double _n_slope_28717=(d::at(this->_n_G_28567,d::minimum({_n_W_28522,(_n_x_28697+1.0)}))-_n_g_28700);
double _n_face_28718=_n_clamp_28546((0.5+(_n_slope_28717*1.4)));
double _n_crest_28719=(std::exp(((-d::number((_n_y_28699-_n_g_28700)))/2.5))*0.18);
double _n_ripple_28720=(0.06*std::sin((((_n_x_28697*0.35)+(_n_y_28699*1.1))+(_n_fbm_28545((_n_x_28697*0.05),(_n_y_28699*0.05),2.0,0.0)*9.0))));
double _n_s_28721=((((0.12+(0.24*_n_fbm_28545((_n_x_28697*0.07),(_n_y_28699*0.12),4.0,0.0)))+(0.34*_n_face_28718))+(1.8*_n_crest_28719))+_n_ripple_28720);
(void)(this->_n_set_28566(_n_k_28698,_n_FRONT_28539,(0.42*_n_s_28721),(0.53*_n_s_28721),(0.82*_n_s_28721),0.1));
double _n_ry_28722=_n_riverY_28553((_n_x_28697+0.5));
double _n_rw_28723=_n_riverW_28554((_n_x_28697+0.5));
if((d::truth((std::fabs((_n_y_28699-_n_ry_28722))<_n_rw_28723))&&d::truth((_n_y_28699>(_n_g_28700+2.0))))){d::check_cancel();double _n_n_28724=_n_fbm_28545((_n_x_28697*0.12),(_n_y_28699*0.7),3.0,0.0);
double _n_crack_28725=(d::truth((std::fabs((_n_noise_28544((_n_x_28697*0.22),(_n_y_28699*0.9),0.0)-0.5))<0.035))?0.18:0.0);
double _n_edge_28726=([&](){auto _n_argument_28961=_n_rw_28723;auto _n_argument_28962=(_n_rw_28723-1.2);auto _n_argument_28963=std::fabs((_n_y_28699-_n_ry_28722));return _n_smooth_28547(_n_argument_28961,_n_argument_28962,_n_argument_28963);})();
(void)(this->_n_set_28566(_n_k_28698,_n_RIVER_28540,((((0.2+(0.16*_n_n_28724))+_n_crack_28725)*_n_edge_28726)+(0.4*(1.0-_n_edge_28726))),((((0.28+(0.2*_n_n_28724))+_n_crack_28725)*_n_edge_28726)+(0.46*(1.0-_n_edge_28726))),((((0.44+(0.24*_n_n_28724))+_n_crack_28725)*_n_edge_28726)+(0.62*(1.0-_n_edge_28726))),0.16));
}
if(d::truth((_n_y_28699>(98.0+(1.5*_n_noise_28544((_n_x_28697*0.1),3.0,0.0)))))){d::check_cancel();(void)(this->_n_set_28566(_n_k_28698,_n_FRONT_28539,0.22,0.27,0.4,0.12));
}
}
if((((d::truth((_n_x_28697>=174.0))&&d::truth((_n_x_28697<189.0)))&&d::truth((_n_y_28699>=35.0)))&&d::truth((_n_y_28699<53.0)))){d::check_cancel();double _n_dx_28727=((_n_x_28697+0.5)-181.5);
bool _n_open_28728=([&]()->bool{auto _n_logical_28964=(d::truth((_n_y_28699>=45.0))?(std::fabs(_n_dx_28727)<4.5):(((_n_dx_28727*_n_dx_28727)+std::pow((_n_y_28699-45.0),2.0))<20.25));return d::truth(_n_logical_28964)?(_n_y_28699<52.5):_n_logical_28964;})();
if(d::truth(_n_open_28728)){d::check_cancel();(void)(this->_n_set_28566(_n_k_28698,_n_MOUTH_K_28542,0.015,0.015,0.03,0.0));
}else {d::check_cancel();if(d::truth((_n_r_28696==35.0))){d::check_cancel();(void)(this->_n_set_28566(_n_k_28698,_n_CAP_28538,0.62,0.7,0.86,0.12));
}else {d::check_cancel();bool _n_ring_28729=([&]()->bool{auto _n_logical_28965=(std::sqrt(((_n_dx_28727*_n_dx_28727)+std::pow((_n_y_28699-45.0),2.0)))<6.2);return d::truth(_n_logical_28965)?(_n_y_28699<46.0):_n_logical_28965;})();
bool _n_mortar_28730=([&]()->bool{auto _n_logical_28966=(d::mod((_n_r_28696-35.0),3.0)==0.0);return d::truth(_n_logical_28966)?_n_logical_28966:(d::mod((_n_x_28697+(double(d::i32((_n_r_28696/3.0))&d::i32(1.0))*3.0)),5.0)==0.0);})();
double _n_s_28731=(((0.5+(0.3*_n_hash_28543(double(d::i32(_n_x_28697)>>(d::u32(2.0)&31)),double(d::i32((_n_r_28696/3.0))|d::i32(0.0)))))*(d::truth(_n_mortar_28730)?0.75:1.0))*(d::truth(_n_ring_28729)?1.2:1.0));
(void)(this->_n_set_28566(_n_k_28698,_n_STONE_28537,(0.21*_n_s_28731),(0.24*_n_s_28731),(0.32*_n_s_28731),0.12));
}
}
}
}}
}}
this->_n_chimneys_28571=d::Array<std::array<double,2>,false>{};
this->_n_panes_28572=d::Array<std::array<double,2>,false>{};
for(auto &&_n_item_28967:d::Array<d::Array<double,false>,false>{d::Array<double,false>{115.0,10.0},d::Array<double,false>{128.0,9.0},d::Array<double,false>{141.0,10.0}}){d::check_cancel();auto _n_binding_28968=_n_item_28967;
double _n_x0_28732=d::at(_n_binding_28968,0.0);
double _n_w_28733=d::at(_n_binding_28968,1.0);
{
double _n_base_28734=0.0;
{double _n_x_28735=_n_x0_28732;
for(;d::truth((_n_x_28735<=(_n_x0_28732+_n_w_28733)));(void)((_n_x_28735++))){d::check_cancel();(void)((_n_base_28734=d::maximum({_n_base_28734,d::at(this->_n_G_28567,_n_x_28735)})));
}}
(void)((_n_base_28734=(d::round(_n_base_28734)+1.0)));
{double _n_r_28736=(_n_base_28734-9.0);
for(;d::truth((_n_r_28736<=_n_base_28734));(void)((_n_r_28736++))){d::check_cancel();{double _n_x_28737=(_n_x0_28732-1.0);
for(;d::truth((_n_x_28737<=((_n_x0_28732+_n_w_28733)+1.0)));(void)((_n_x_28737++))){d::check_cancel();double _n_k_28738=((_n_r_28736*_n_W_28522)+_n_x_28737);
double _n_y_28739=(_n_r_28736+0.5);
if(((d::truth((_n_r_28736>(_n_base_28734-5.0)))&&d::truth((_n_x_28737>=_n_x0_28732)))&&d::truth((_n_x_28737<=(_n_x0_28732+_n_w_28733))))){d::check_cancel();double _n_s_28740=(0.6+(0.4*_n_hash_28543(_n_x_28737,(_n_r_28736*3.0))));
(void)(this->_n_set_28566(_n_k_28738,_n_FRONT_28539,(0.06*_n_s_28740),(0.065*_n_s_28740),(0.09*_n_s_28740),0.02));
if(((d::truth(([&]()->bool{auto _n_logical_28969=([&]()->bool{auto _n_logical_28970=([&]()->bool{auto _n_logical_28971=(_n_x_28737==(_n_x0_28732+2.0));return d::truth(_n_logical_28971)?_n_logical_28971:(_n_x_28737==(_n_x0_28732+3.0));})();return d::truth(_n_logical_28970)?_n_logical_28970:(_n_x_28737==((_n_x0_28732+_n_w_28733)-3.0));})();return d::truth(_n_logical_28969)?_n_logical_28969:(_n_x_28737==((_n_x0_28732+_n_w_28733)-2.0));})())&&d::truth((_n_r_28736>=(_n_base_28734-3.0))))&&d::truth((_n_r_28736<=(_n_base_28734-2.0))))){d::check_cancel();(void)(this->_n_set_28566(_n_k_28738,_n_PANE_28541,1.0,0.74,0.34,0.3));
(void)(this->_n_panes_28572.push(std::array<double,2>{(_n_x_28737+0.5),_n_y_28739}));
}
if((d::truth((_n_r_28736==_n_base_28734))&&d::truth((_n_hash_28543(_n_x_28737,91.0)>0.4)))){d::check_cancel();(void)(this->_n_set_28566(_n_k_28738,_n_FRONT_28539,0.5,0.58,0.78,0.2));
}
}else {d::check_cancel();if(d::truth((_n_r_28736<=(_n_base_28734-5.0)))){d::check_cancel();double _n_half_28741=(((_n_w_28733/2.0)+1.5)*((_n_y_28739-(_n_base_28734-9.0))/4.5));
double _n_cx_28742=((_n_x0_28732+(_n_w_28733/2.0))+0.5);
if(d::truth((std::fabs(((_n_x_28737+0.5)-_n_cx_28742))<=_n_half_28741))){d::check_cancel();double _n_lit_28743=(d::truth(((_n_x_28737+0.5)>_n_cx_28742))?1.0:0.82);
(void)(this->_n_set_28566(_n_k_28738,_n_FRONT_28539,(0.84*_n_lit_28743),(0.89*_n_lit_28743),(1.0*_n_lit_28743),0.3));
if(d::truth((_n_r_28736==(_n_base_28734-5.0)))){d::check_cancel();(void)(this->_n_set_28566(_n_k_28738,_n_FRONT_28539,0.05,0.05,0.08,0.02));
}
}
}
}
}}
}}
double _n_cx_28744=((_n_x0_28732+_n_w_28733)-2.0);
{double _n_r_28745=(_n_base_28734-10.0);
for(;d::truth((_n_r_28745<(_n_base_28734-7.0)));(void)((_n_r_28745++))){d::check_cancel();(void)(this->_n_set_28566(((_n_r_28745*_n_W_28522)+_n_cx_28744),_n_FRONT_28539,0.14,0.1,0.1,0.08));
}}
(void)(this->_n_set_28566((((_n_base_28734-10.0)*_n_W_28522)+_n_cx_28744),_n_FRONT_28539,0.6,0.68,0.86,0.2));
(void)(this->_n_chimneys_28571.push(std::array<double,2>{(_n_cx_28744+0.5),(_n_base_28734-10.0)}));

}
}
this->_n_trees_28573=d::Array<std::array<double,4>,false>{};
(void)(this->_n_plant_28574(26.0,70.0,3.5,6.0,11.0,40.0));
(void)(this->_n_plant_28574(102.0,174.0,3.0,6.0,12.0,50.0));
(void)(this->_n_plant_28574(189.0,203.0,3.0,8.0,14.0,60.0));
{double _n_i_28754=0.0;
for(;d::truth((_n_i_28754<150.0));(void)((_n_i_28754++))){d::check_cancel();double _n_x_28755=((_n_hash_28543(_n_i_28754,71.0)*206.0)-3.0);
double _n_g_28756=d::at(this->_n_G_28567,([&](){auto _n_argument_28972=0.0;auto _n_argument_28973=([&](){auto _n_argument_28974=_n_W_28522;auto _n_argument_28975=d::round(_n_x_28755);return d::minimum({_n_argument_28974,_n_argument_28975});})();return d::maximum({_n_argument_28972,_n_argument_28973});})());
double _n_base_28757=((_n_g_28756+4.0)+(_n_hash_28543(_n_i_28754,72.0)*(93.0-_n_g_28756)));
if((((d::truth((_n_base_28757>91.0))||d::truth(([&]()->bool{auto _n_logical_28976=([&]()->bool{auto _n_logical_28977=(_n_x_28755>108.0);return d::truth(_n_logical_28977)?(_n_x_28755<156.0):_n_logical_28977;})();return d::truth(_n_logical_28976)?(_n_base_28757<(_n_g_28756+14.0)):_n_logical_28976;})()))||d::truth(([&]()->bool{auto _n_logical_28978=(_n_x_28755<96.0);return d::truth(_n_logical_28978)?(_n_x_28755>40.0):_n_logical_28978;})()))||d::truth(([&]()->bool{auto _n_logical_28979=([&]()->bool{auto _n_logical_28980=(_n_x_28755>170.0);return d::truth(_n_logical_28980)?(_n_x_28755<192.0):_n_logical_28980;})();return d::truth(_n_logical_28979)?(_n_base_28757<56.0):_n_logical_28979;})()))){d::check_cancel();continue;
}
double _n_h_28758=(5.0+(_n_hash_28543(_n_i_28754,73.0)*5.0));
(void)(this->_n_trees_28573.push(std::array<double,4>{_n_x_28755,_n_base_28757,_n_h_28758,(_n_h_28758*0.38)}));
}}
(void)(this->_n_trees_28573.push(std::array<double,4>{112.0,(d::at(this->_n_G_28567,112.0)+1.5),12.0,4.2},std::array<double,4>{158.0,(d::at(this->_n_G_28567,158.0)+1.5),10.0,3.6},std::array<double,4>{161.0,(d::at(this->_n_G_28567,161.0)+1.5),13.0,4.5}));
(void)(this->_n_trees_28573.sort([=]( std::array<double,4> _a0,std::array<double,4> _a1) mutable ->double{auto&& _n_a_28759=_a0;
auto&& _n_b_28760=_a1;
return (d::at(_n_a_28759,1.0)-d::at(_n_b_28760,1.0));}));
(void)(this->_n_trees_28573.push(std::array<double,4>{8.0,104.0,40.0,11.0},std::array<double,4>{25.0,103.0,28.0,8.0},std::array<double,4>{(-d::number(2.0)),102.0,22.0,7.0}));
for(auto &&_n_item_28981:this->_n_trees_28573){d::check_cancel();auto _n_binding_28982=_n_item_28981;
double _n_cx_28761=d::at(_n_binding_28982,0.0);
double _n_base_28762=d::at(_n_binding_28982,1.0);
double _n_h_28763=d::at(_n_binding_28982,2.0);
double _n_w_28764=d::at(_n_binding_28982,3.0);
{
bool _n_big_28765=(_n_h_28763>20.0);
{double _n_r_28766=([&](){auto _n_argument_28983=0.0;auto _n_argument_28984=std::floor((_n_base_28762-_n_h_28763));return d::maximum({_n_argument_28983,_n_argument_28984});})();
for(;d::truth((_n_r_28766<d::minimum({_n_H_28523,(_n_base_28762+1.0)})));(void)((_n_r_28766++))){d::check_cancel();{double _n_x_28767=([&](){auto _n_argument_28985=0.0;auto _n_argument_28986=std::floor(((_n_cx_28761-_n_w_28764)-1.0));return d::maximum({_n_argument_28985,_n_argument_28986});})();
for(;d::truth((_n_x_28767<d::minimum({_n_W_28522,((_n_cx_28761+_n_w_28764)+1.0)})));(void)((_n_x_28767++))){d::check_cancel();double _n_p_28768=_n_pine_28555(_n_x_28767,(_n_r_28766+0.5),_n_cx_28761,_n_base_28762,_n_h_28763,_n_w_28764);
if(d::truth((!d::truth(_n_p_28768)))){d::check_cancel();continue;
}
double _n_k_28769=((_n_r_28766*_n_W_28522)+_n_x_28767);
if(d::truth((_n_p_28768==2.0))){d::check_cancel();double _n_s_28770=(d::truth(_n_big_28765)?0.75:(0.9+(0.2*_n_hash_28543(_n_x_28767,_n_r_28766))));
(void)(this->_n_set_28566(_n_k_28769,_n_FRONT_28539,(0.66*_n_s_28770),(0.74*_n_s_28770),(0.94*_n_s_28770),0.2));
}else {d::check_cancel();double _n_s_28771=(d::truth(_n_big_28765)?0.5:(0.7+(0.5*_n_hash_28543((_n_x_28767*3.0),_n_r_28766))));
(void)(this->_n_set_28566(_n_k_28769,_n_FRONT_28539,(0.04*_n_s_28771),(0.1*_n_s_28771),(0.11*_n_s_28771),0.05));
}
}}
}}

}
}
{double _n_r_28772=0.0;
for(;d::truth((_n_r_28772<_n_H_28523));(void)((_n_r_28772++))){d::check_cancel();{double _n_x_28773=100.0;
for(;d::truth((_n_x_28773<160.0));(void)((_n_x_28773++))){d::check_cancel();double _n_k_28774=((_n_r_28772*_n_W_28522)+_n_x_28773);
if((d::truth((d::at(this->_n_kind_28561,_n_k_28774)!=_n_FRONT_28539))||d::truth((d::at(this->_n_bb_28564,_n_k_28774)<0.15)))){d::check_cancel();continue;
}
double _n_a_28775=0.0;
for(auto &&_n_item_28987:this->_n_panes_28572){d::check_cancel();auto _n_binding_28988=_n_item_28987;
double _n_px_28776=d::at(_n_binding_28988,0.0);
double _n_py_28777=d::at(_n_binding_28988,1.0);
{
double _n_d_28778=std::sqrt((std::pow(((_n_x_28773+0.5)-_n_px_28776),2.0)+std::pow((((_n_r_28772+0.5)-_n_py_28777)*1.3),2.0)));
(void)((_n_a_28775=(_n_a_28775+(std::exp(((-d::number(_n_d_28778))/1.5))*0.2))));

}
}
(void)(((([&](){auto&& _n_array_28989=this->_n_br_28562;auto _n_index_28990=_n_k_28774;auto _n_value_28991=(d::at(_n_array_28989,_n_index_28990)+_n_a_28775);d::put(_n_array_28989,_n_index_28990,_n_value_28991);return _n_value_28991;})(),([&](){auto&& _n_array_28992=this->_n_bg_28563;auto _n_index_28993=_n_k_28774;auto _n_value_28994=(d::at(_n_array_28992,_n_index_28993)+(_n_a_28775*0.6));d::put(_n_array_28992,_n_index_28993,_n_value_28994);return _n_value_28994;})()),([&](){auto&& _n_array_28995=this->_n_bb_28564;auto _n_index_28996=_n_k_28774;auto _n_value_28997=(d::at(_n_array_28995,_n_index_28996)+(_n_a_28775*0.22));d::put(_n_array_28995,_n_index_28996,_n_value_28997);return _n_value_28997;})()));
}}
}}
this->_n_CW_28575=600.0;
this->_n_CH_28576=40.0;
this->_n_cloud_28577=d::Array<float,true>(size_t((this->_n_CW_28575*this->_n_CH_28576)));
{double _n_r_28779=0.0;
for(;d::truth((_n_r_28779<this->_n_CH_28576));(void)((_n_r_28779++))){d::check_cancel();{double _n_x_28780=0.0;
for(;d::truth((_n_x_28780<this->_n_CW_28575));(void)((_n_x_28780++))){d::check_cancel();double _n_y_28781=(_n_r_28779+0.5);
double _n_q_28782=_n_fbm_28545((_n_x_28780*0.006),(_n_y_28781*0.04),3.0,(this->_n_CW_28575*0.006));
double _n_d_28783=_n_fbm_28545(((_n_x_28780*0.014)+(_n_q_28782*2.0)),((_n_y_28781*0.09)+_n_q_28782),5.0,(this->_n_CW_28575*0.014));
(void)(([&](){auto&& _n_array_28998=this->_n_cloud_28577;auto _n_index_28999=((_n_r_28779*this->_n_CW_28575)+_n_x_28780);auto _n_value_29000=([&](){auto _n_left_29001=([&](){auto _n_left_29003=([&](){auto _n_argument_29005=0.5;auto _n_argument_29006=0.68;auto _n_argument_29007=(_n_d_28783+(0.06*std::sin((_n_y_28781*0.35))));return _n_smooth_28547(_n_argument_29005,_n_argument_29006,_n_argument_29007);})();auto _n_right_29004=_n_smooth_28547(2.0,10.0,_n_y_28781);return (_n_left_29003*_n_right_29004);})();auto _n_right_29002=_n_smooth_28547(this->_n_CH_28576,24.0,_n_y_28781);return (_n_left_29001*_n_right_29002);})();d::put(_n_array_28998,_n_index_28999,_n_value_29000);return _n_value_29000;})());
}}
}}
this->_n_LAYERS_28578=d::map(d::Array<std::shared_ptr<_n_Record_28785>,false>{([&](){auto _n_object_29011=std::make_shared<_n_Record_28785>();_n_object_29011->_p_n=420.0;_n_object_29011->_p_fall=2.4;_n_object_29011->_p_sway=0.7;_n_object_29011->_p_big=false;_n_object_29011->_p_v=0.24;_n_object_29011->_p_front=false;return _n_object_29011;})(),([&](){auto _n_object_29013=std::make_shared<_n_Record_28785>();_n_object_29013->_p_n=200.0;_n_object_29013->_p_fall=5.0;_n_object_29013->_p_sway=1.3;_n_object_29013->_p_big=false;_n_object_29013->_p_v=0.55;_n_object_29013->_p_front=true;return _n_object_29013;})(),([&](){auto _n_object_29015=std::make_shared<_n_Record_28785>();_n_object_29015->_p_n=60.0;_n_object_29015->_p_fall=9.5;_n_object_29015->_p_sway=2.4;_n_object_29015->_p_big=true;_n_object_29015->_p_v=0.95;_n_object_29015->_p_front=true;return _n_object_29015;})()},[&]( std::shared_ptr<_n_Record_28785> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_28579>{std::shared_ptr<_n_Record_28785> _n_L_28784=_a0;
double _n_li_28786=_a1;
return ([&](){auto _n_object_29018=std::make_shared<_n_Record_28579>();auto _n_spread_29019=_n_L_28784;_n_object_29018->_p_n=_n_spread_29019->_p_n;_n_object_29018->_p_fall=_n_spread_29019->_p_fall;_n_object_29018->_p_sway=_n_spread_29019->_p_sway;_n_object_29018->_p_big=_n_spread_29019->_p_big;_n_object_29018->_p_v=_n_spread_29019->_p_v;_n_object_29018->_p_front=_n_spread_29019->_p_front;_n_object_29018->_p_seeds=d::Array<std::array<double,4>,false>(d::from(_n_L_28784->_p_n,[&]( d::Nil _a0,double _a1) mutable ->std::array<double,4>{double _n_i_28788=_a1;
return std::array<double,4>{(_n_hash_28543(_n_i_28788,((_n_li_28786*31.0)+1.0))*_n_W_28522),(_n_hash_28543(_n_i_28788,((_n_li_28786*31.0)+2.0))*(_n_H_28523+6.0)),(_n_hash_28543(_n_i_28788,((_n_li_28786*31.0)+3.0))*6.28),(0.6+(_n_hash_28543(_n_i_28788,((_n_li_28786*31.0)+4.0))*0.8))};}));return _n_object_29018;})();});
this->_n_back_28580=d::Array<float,true>(size_t(this->_n_N_28557));
this->_n_front_28581=d::Array<float,true>(size_t(this->_n_N_28557));
_render=[=]( double _a0,std::shared_ptr<_n_Record_28885> _a1) mutable ->d::String{double _n_t_28797=_a0;
auto _n_binding_29022=(d::present(_a1)?_a1:([&](){auto _n_object_29021=std::make_shared<_n_Record_28885>();return _n_object_29021;})());
std::optional<d::Array<uint8_t,true>> _n_color_28798=_n_binding_29022->_p_color;
{
double _n_F_28799=(_n_MOUTH_28530-d::mod(((_n_SPEED_28528*_n_t_28797)+135.0),_n_PERIOD_28531));
double _n_drift_28800=(_n_t_28797*1.1);
(void)(this->_n_back_28580.fill(0.0));
(void)(this->_n_front_28581.fill(0.0));
for(auto &&_n_item_29023:this->_n_LAYERS_28578){d::check_cancel();std::shared_ptr<_n_Record_28579> _n_L_28801=_n_item_29023;
{
d::Array<float,true> _n_buf_28802=(d::truth(_n_L_28801->_p_front)?this->_n_front_28581:this->_n_back_28580);
for(auto &&_n_item_29024:_n_L_28801->_p_seeds){d::check_cancel();auto _n_binding_29025=_n_item_29024;
double _n_x0_28803=d::at(_n_binding_29025,0.0);
double _n_y0_28804=d::at(_n_binding_29025,1.0);
double _n_ph_28805=d::at(_n_binding_29025,2.0);
double _n_sp_28806=d::at(_n_binding_29025,3.0);
{
double _n_y_28807=(d::mod((_n_y0_28804+((_n_L_28801->_p_fall*_n_sp_28806)*_n_t_28797)),(_n_H_28523+6.0))-3.0);
double _n_x_28808=((_n_x0_28803-(((0.4*_n_L_28801->_p_fall)*_n_sp_28806)*_n_t_28797))+(_n_L_28801->_p_sway*std::sin((((_n_t_28797*0.9)*_n_sp_28806)+_n_ph_28805))));
double _n_xi_28809=d::round(_n_x_28808);
double _n_ri_28810=d::round(_n_y_28807);
(void)(this->_n_put_28582(_n_buf_28802,_n_xi_28809,_n_ri_28810,_n_L_28801->_p_v));
if(d::truth(_n_L_28801->_p_big)){d::check_cancel();(void)((this->_n_put_28582(_n_buf_28802,(_n_xi_28809-1.0),_n_ri_28810,(_n_L_28801->_p_v*0.45)),this->_n_put_28582(_n_buf_28802,(_n_xi_28809+1.0),_n_ri_28810,(_n_L_28801->_p_v*0.45))));
(void)((this->_n_put_28582(_n_buf_28802,_n_xi_28809,(_n_ri_28810-1.0),(_n_L_28801->_p_v*0.45)),this->_n_put_28582(_n_buf_28802,_n_xi_28809,(_n_ri_28810+1.0),(_n_L_28801->_p_v*0.45))));
}

}
}

}
}
{double _n_r_28811=0.0;
for(;d::truth((_n_r_28811<_n_H_28523));(void)((_n_r_28811++))){d::check_cancel();double _n_y_28812=(_n_r_28811+0.5);
{double _n_x_28813=0.0;
for(;d::truth((_n_x_28813<_n_W_28522));(void)((_n_x_28813++))){d::check_cancel();double _n_k_28814=((_n_r_28811*_n_W_28522)+_n_x_28813);
double _n_m_28815=d::at(this->_n_kind_28561,_n_k_28814);
double _n_cr_28816=d::at(this->_n_br_28562,_n_k_28814);
double _n_cg_28817=d::at(this->_n_bg_28563,_n_k_28814);
double _n_cbl_28818=d::at(this->_n_bb_28564,_n_k_28814);
double _n_floor_28819=d::at(this->_n_flo_28565,_n_k_28814);
double _n_fade_28820=1.0;
if(d::truth((_n_m_28815==_n_SKY_28535))){d::check_cancel();double _n_dmx_28821=((_n_x_28813+0.5)-d::at(_n_MOON_28524,0.0));
double _n_dmy_28822=(_n_y_28812-d::at(_n_MOON_28524,1.0));
double _n_dm_28823=std::sqrt(((_n_dmx_28821*_n_dmx_28821)+(_n_dmy_28822*_n_dmy_28822)));
double _n_c_28824=0.0;
if(d::truth((_n_r_28811<this->_n_CH_28576))){d::check_cancel();double _n_sx_28825=(_n_x_28813+_n_drift_28800);
double _n_ix_28826=std::floor(_n_sx_28825);
double _n_fx_28827=(_n_sx_28825-_n_ix_28826);
double _n_i0_28828=((_n_r_28811*this->_n_CW_28575)+d::mod(_n_ix_28826,this->_n_CW_28575));
double _n_i1_28829=((_n_r_28811*this->_n_CW_28575)+d::mod((_n_ix_28826+1.0),this->_n_CW_28575));
(void)((_n_c_28824=(d::at(this->_n_cloud_28577,_n_i0_28828)+((d::at(this->_n_cloud_28577,_n_i1_28829)-d::at(this->_n_cloud_28577,_n_i0_28828))*_n_fx_28827))));
}
if(d::truth((_n_dm_28823<_n_MOON_R_28525))){d::check_cancel();double _n_face_28830=(0.84+(0.16*_n_fbm_28545((_n_x_28813*0.45),(_n_y_28812*0.45),2.0,0.0)));
double _n_a_28831=((1.0-(_n_c_28824*0.55))*_n_smooth_28547(_n_MOON_R_28525,(_n_MOON_R_28525-1.0),_n_dm_28823));
(void)((((_n_cr_28816=_n_mix_28548(_n_cr_28816,(0.97*_n_face_28830),_n_a_28831)),(_n_cg_28817=_n_mix_28548(_n_cg_28817,(0.97*_n_face_28830),_n_a_28831))),(_n_cbl_28818=_n_mix_28548(_n_cbl_28818,(1.0*_n_face_28830),_n_a_28831))));
}else {d::check_cancel();if((d::truth((_n_c_28824<0.1))&&d::truth((_n_hash_28543(_n_x_28813,((_n_r_28811*3.0)+11.0))>0.984)))){d::check_cancel();double _n_tw_28832=(0.6+(0.4*std::sin(([&](){auto _n_left_29026=(_n_t_28797*(1.5+(_n_hash_28543(_n_x_28813,_n_r_28811)*3.0)));auto _n_right_29027=(_n_hash_28543(_n_r_28811,_n_x_28813)*6.28);return (_n_left_29026+_n_right_29027);})())));
double _n_s_28833=((0.45+(0.5*_n_tw_28832))*_n_smooth_28547(48.0,18.0,_n_y_28812));
(void)((((_n_cr_28816=d::maximum({_n_cr_28816,(_n_s_28833*0.9)})),(_n_cg_28817=d::maximum({_n_cg_28817,(_n_s_28833*0.93)}))),(_n_cbl_28818=d::maximum({_n_cbl_28818,_n_s_28833}))));
}
}
if(d::truth((_n_c_28824>0.01))){d::check_cancel();double _n_near_28834=std::exp(((-d::number(_n_dm_28823))/24.0));
double _n_b_28835=(0.35+(0.9*_n_near_28834));
double _n_a_28836=(_n_c_28824*(0.6+(0.35*_n_near_28834)));
(void)((((_n_cr_28816=_n_mix_28548(_n_cr_28816,((0.32*_n_b_28835)+0.06),_n_a_28836)),(_n_cg_28817=_n_mix_28548(_n_cg_28817,((0.38*_n_b_28835)+0.07),_n_a_28836))),(_n_cbl_28818=_n_mix_28548(_n_cbl_28818,((0.52*_n_b_28835)+0.12),_n_a_28836))));
}
}else {d::check_cancel();if(d::truth((_n_m_28815==_n_RIVER_28540))){d::check_cancel();double _n_road_28837=std::exp((-d::number(std::pow((((_n_x_28813+0.5)-d::at(_n_MOON_28524,0.0))/5.0),2.0))));
double _n_spark_28838=(d::truth((_n_hash_28543(((_n_x_28813*7.0)+double(d::i32((_n_t_28797*3.0))|d::i32(0.0))),(_n_r_28811*5.0))>0.93))?1.0:0.0);
(void)((((_n_cr_28816=(_n_cr_28816+(_n_road_28837*(0.25+(0.6*_n_spark_28838))))),(_n_cg_28817=(_n_cg_28817+(_n_road_28837*(0.28+(0.6*_n_spark_28838)))))),(_n_cbl_28818=(_n_cbl_28818+(_n_road_28837*(0.32+(0.6*_n_spark_28838)))))));
double _n_u_28839=((_n_x_28813+0.5)-_n_F_28799);
if(d::truth((_n_x_28813<_n_MOUTH_28530))){d::check_cancel();double _n_pane_28840=(d::truth((d::mod((d::mod((_n_u_28839-30.0),4.0)+4.0),4.0)<2.6))?1.0:0.25);
double _n_lit_28841=([&](){auto _n_left_29028=([&](){auto _n_left_29030=(this->_n_windows_28583(_n_u_28839)*_n_pane_28840);auto _n_right_29031=(0.35+(0.65*_n_noise_28544((_n_x_28813*0.5),(_n_y_28812*1.8),0.0)));return (_n_left_29030*_n_right_29031);})();auto _n_right_29029=([&](){auto _n_argument_29032=(_n_riverW_28554((_n_x_28813+0.5))+0.3);auto _n_argument_29033=0.5;auto _n_argument_29034=std::fabs((_n_y_28812-_n_riverY_28553((_n_x_28813+0.5))));return _n_smooth_28547(_n_argument_29032,_n_argument_29033,_n_argument_29034);})();return (_n_left_29028*_n_right_29029);})();
(void)((((_n_cr_28816=(_n_cr_28816+(0.95*_n_lit_28841))),(_n_cg_28817=(_n_cg_28817+(0.6*_n_lit_28841)))),(_n_cbl_28818=(_n_cbl_28818+(0.22*_n_lit_28841)))));
double _n_lamp_28842=((std::exp((-d::number(std::pow(((_n_u_28839+10.0)/9.0),2.0))))*0.5)*(d::truth((_n_F_28799<_n_MOUTH_28530))?1.0:0.0));
(void)((((_n_cr_28816=(_n_cr_28816+_n_lamp_28842)),(_n_cg_28817=(_n_cg_28817+(_n_lamp_28842*0.9)))),(_n_cbl_28818=(_n_cbl_28818+(_n_lamp_28842*0.7)))));
}
}else {d::check_cancel();if(d::truth((_n_m_28815==_n_PANE_28541))){d::check_cancel();double _n_g_28843=(0.85+(0.15*std::sin(((_n_t_28797*2.3)+(_n_x_28813*1.7)))));
(void)((((_n_cr_28816=_n_g_28843),(_n_cg_28817=(0.72*_n_g_28843))),(_n_cbl_28818=(0.32*_n_g_28843))));
}
}
}
double _n_u_28844=((_n_x_28813+0.5)-_n_F_28799);
if((((((d::truth((_n_r_28811>=_n_ROOF_28526))&&d::truth((_n_r_28811<49.0)))&&d::truth((_n_u_28844>=0.0)))&&d::truth((_n_u_28844<_n_LEN_28529)))&&d::truth((_n_x_28813<_n_MOUTH_28530)))&&d::truth(([&]()->bool{auto _n_logical_29035=([&]()->bool{auto _n_logical_29036=(_n_m_28815==_n_SKY_28535);return d::truth(_n_logical_29036)?_n_logical_29036:(_n_m_28815==_n_FAR_28536);})();return d::truth(_n_logical_29035)?_n_logical_29035:(_n_m_28815==_n_MOUTH_K_28542);})()))){d::check_cancel();double _n_tr_28845=(-d::number(1.0));
double _n_tg_28846=0.0;
double _n_tb_28847=0.0;
if(d::truth((_n_u_28844<26.0))){d::check_cancel();double _n_nose_28848=((48.0-_n_r_28811)*0.85);
if(d::truth((_n_u_28844>=_n_nose_28848))){d::check_cancel();double _n_s_28849=(d::truth((_n_r_28811==43.0))?1.25:1.0);
(void)((((_n_tr_28845=(0.46*_n_s_28849)),(_n_tg_28846=(0.09*_n_s_28849))),(_n_tb_28847=(0.1*_n_s_28849))));
if(d::truth((_n_r_28811==_n_ROOF_28526))){d::check_cancel();(void)((((_n_tr_28845=0.66),(_n_tg_28846=0.73)),(_n_tb_28847=0.9)));
}
if(((d::truth((_n_r_28811>=43.0))&&d::truth((_n_r_28811<=44.0)))&&d::truth((_n_u_28844<(_n_nose_28848+3.5))))){d::check_cancel();(void)((((_n_tr_28845=0.12),(_n_tg_28846=0.1)),(_n_tb_28847=0.14)));
}
if((((d::truth((_n_r_28811>=43.0))&&d::truth((_n_r_28811<=45.0)))&&d::truth((_n_u_28844>8.5)))&&d::truth((_n_u_28844<11.5)))){d::check_cancel();(void)((((_n_tr_28845=0.8),(_n_tg_28846=0.52)),(_n_tb_28847=0.22)));
}
if(d::truth((_n_r_28811==46.0))){d::check_cancel();(void)((((_n_tr_28845=0.62),(_n_tg_28846=0.56)),(_n_tb_28847=0.5)));
}
if((d::truth((_n_r_28811==47.0))&&d::truth((_n_u_28844<1.6)))){d::check_cancel();(void)((((_n_tr_28845=1.0),(_n_tg_28846=0.97)),(_n_tb_28847=0.85)));
}
}
}else {d::check_cancel();if(d::truth((_n_u_28844>=28.0))){d::check_cancel();double _n_c_28850=d::mod((_n_u_28844-28.0),26.0);
if(d::truth((_n_c_28850<24.0))){d::check_cancel();(void)((((_n_tr_28845=0.42),(_n_tg_28846=0.08)),(_n_tb_28847=0.09)));
if(d::truth((_n_r_28811==43.0))){d::check_cancel();(void)((((_n_tr_28845=0.54),(_n_tg_28846=0.11)),(_n_tb_28847=0.12)));
}
if(d::truth((_n_r_28811==_n_ROOF_28526))){d::check_cancel();if((d::truth((_n_c_28850<0.9))||d::truth((_n_c_28850>23.1)))){d::check_cancel();(void)((_n_tr_28845=(-d::number(1.0))));
}else {d::check_cancel();(void)((((_n_tr_28845=0.66),(_n_tg_28846=0.73)),(_n_tb_28847=0.9)));
}
}else {d::check_cancel();if((((d::truth(([&]()->bool{auto _n_logical_29037=(_n_r_28811==44.0);return d::truth(_n_logical_29037)?_n_logical_29037:(_n_r_28811==45.0);})())&&d::truth((_n_c_28850>=2.0)))&&d::truth((_n_c_28850<22.0)))&&d::truth((d::mod((_n_c_28850-2.0),4.0)<2.6)))){d::check_cancel();double _n_wi_28851=std::floor(((_n_u_28844-28.0)/4.0));
double _n_dim_28852=(d::truth((_n_hash_28543(_n_wi_28851,5.0)<0.12))?0.45:1.0);
double _n_who_28853=(((d::truth((_n_hash_28543(_n_wi_28851,6.0)<0.3))&&d::truth((_n_r_28811==45.0)))&&d::truth((d::mod((_n_c_28850-2.0),4.0)<1.3)))?0.55:1.0);
double _n_g_28854=(((0.9+(0.1*std::sin(((_n_t_28797*1.3)+_n_wi_28851))))*_n_dim_28852)*_n_who_28853);
(void)((((_n_tr_28845=_n_g_28854),(_n_tg_28846=(0.72*_n_g_28854))),(_n_tb_28847=(0.34*_n_g_28854))));
}else {d::check_cancel();if(d::truth((_n_r_28811==46.0))){d::check_cancel();(void)((((_n_tr_28845=0.62),(_n_tg_28846=0.56)),(_n_tb_28847=0.5)));
}else {d::check_cancel();if(d::truth((_n_r_28811>=47.0))){d::check_cancel();(void)((((_n_tr_28845=0.24),(_n_tg_28846=0.05)),(_n_tb_28847=0.07)));
}
}
}
}
if((d::truth((_n_u_28844>(_n_LEN_28529-1.5)))&&d::truth((_n_r_28811==47.0)))){d::check_cancel();(void)((((_n_tr_28845=1.0),(_n_tg_28846=0.25)),(_n_tb_28847=0.2)));
}
}else {d::check_cancel();if((d::truth((_n_r_28811==46.0))||d::truth((_n_r_28811==47.0)))){d::check_cancel();(void)((((_n_tr_28845=0.04),(_n_tg_28846=0.04)),(_n_tb_28847=0.06)));
}
}
}
}
if(d::truth((_n_tr_28845>=0.0))){d::check_cancel();double _n_dark_28855=((d::truth((_n_m_28815==_n_MOUTH_K_28542))||d::truth((_n_x_28813>176.0)))?0.35:1.0);
(void)(((((_n_cr_28816=(_n_tr_28845*_n_dark_28855)),(_n_cg_28817=(_n_tg_28846*_n_dark_28855))),(_n_cbl_28818=(_n_tb_28847*_n_dark_28855))),(_n_floor_28819=0.1)));
}
}
double _n_beam_28856=0.0;
if(((((d::truth((_n_F_28799<(_n_MOUTH_28530+30.0)))&&d::truth((_n_r_28811>28.0)))&&d::truth((_n_r_28811<66.0)))&&d::truth((_n_m_28815!=_n_FRONT_28539)))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_29038=(_n_m_28815==_n_STONE_28537);return d::truth(_n_logical_29038)?(_n_x_28813>=174.0):_n_logical_29038;})()))))){d::check_cancel();double _n_lx_28857=d::minimum({_n_F_28799,176.0});
double _n_a_28858=(_n_lx_28857-(_n_x_28813+0.5));
if(d::truth((_n_a_28858>0.0))){d::check_cancel();double _n_sp_28859=(0.8+(_n_a_28858*0.2));
double _n_py_28860=(((_n_y_28812-_n_LAMP_Y_28527)-0.5)-(_n_a_28858*0.03));
(void)((_n_beam_28856=([&](){auto _n_left_29039=([&](){auto _n_left_29041=std::exp(((-d::number(_n_a_28858))/60.0));auto _n_right_29042=([&](){auto _n_left_29043=std::exp((-d::number(std::pow((_n_py_28860/_n_sp_28859),2.0))));auto _n_right_29044=(0.18*std::exp((-d::number(std::pow((_n_py_28860/(_n_sp_28859*2.6)),2.0)))));return (_n_left_29043+_n_right_29044);})();return (_n_left_29041*_n_right_29042);})();auto _n_right_29040=(1.0-std::exp(((-d::number(_n_a_28858))/2.0)));return (_n_left_29039*_n_right_29040);})()));
}
double _n_dx_28861=((_n_x_28813+0.5)-_n_F_28799);
double _n_dy_28862=((_n_y_28812-_n_LAMP_Y_28527)-0.5);
double _n_d_28863=std::sqrt(((_n_dx_28861*_n_dx_28861)+(_n_dy_28862*_n_dy_28862)));
double _n_glow_28864=(d::truth((_n_F_28799<177.0))?([&](){auto _n_left_29045=(std::exp(((-d::number(_n_d_28863))/1.6))*0.8);auto _n_right_29046=(std::exp(((-d::number(_n_d_28863))/7.0))*0.25);return (_n_left_29045+_n_right_29046);})():0.0);
double _n_on_28865=((_n_beam_28856*(d::truth((_n_m_28815==_n_CAP_28538))?1.2:0.6))+_n_glow_28864);
(void)((((_n_cr_28816=(_n_cr_28816+_n_on_28865)),(_n_cg_28817=(_n_cg_28817+(_n_on_28865*0.92)))),(_n_cbl_28818=(_n_cbl_28818+(_n_on_28865*0.74)))));
}
double _n_spill_28866=0.0;
if(((d::truth((_n_r_28811>34.0))&&d::truth((_n_r_28811<52.0)))&&d::truth((_n_x_28813<_n_MOUTH_28530)))){d::check_cancel();double _n_wu_28867=([&](){auto _n_left_29047=this->_n_windows_28583(_n_u_28844);auto _n_right_29048=(0.5*([&](){auto _n_left_29049=this->_n_windows_28583((_n_u_28844-2.0));auto _n_right_29050=this->_n_windows_28583((_n_u_28844+2.0));return (_n_left_29049+_n_right_29050);})());return (_n_left_29047+_n_right_29048);})();
if(d::truth((_n_wu_28867>0.0))){d::check_cancel();(void)((_n_spill_28866=(_n_wu_28867*(d::truth((_n_r_28811==49.0))?0.35:(d::truth((_n_r_28811<_n_ROOF_28526))?(std::exp(((-d::number((_n_ROOF_28526-_n_r_28811)))/2.2))*0.12):0.0)))));
(void)((((_n_cr_28816=(_n_cr_28816+_n_spill_28866)),(_n_cg_28817=(_n_cg_28817+(_n_spill_28866*0.62)))),(_n_cbl_28818=(_n_cbl_28818+(_n_spill_28866*0.26)))));
}
}
if((((d::truth((_n_x_28813>70.0))&&d::truth((_n_x_28813<152.0)))&&d::truth((_n_r_28811>24.0)))&&d::truth((_n_r_28811<80.0)))){d::check_cancel();double _n_s_28868=0.0;
for(auto &&_n_item_29051:this->_n_chimneys_28571){d::check_cancel();auto _n_binding_29052=_n_item_29051;
double _n_sx_28869=d::at(_n_binding_29052,0.0);
double _n_sy_28870=d::at(_n_binding_29052,1.0);
{
double _n_up_28871=(_n_sy_28870-_n_y_28812);
if((d::truth((_n_up_28871<0.0))||d::truth((_n_up_28871>30.0)))){d::check_cancel();continue;
}
double _n_cx_28872=(((_n_sx_28869-(_n_up_28871*0.3))-((_n_up_28871*_n_up_28871)*0.012))+([&](){auto _n_left_29053=(2.4*(_n_noise_28544(((_n_up_28871*0.15)-(_n_t_28797*0.6)),_n_sx_28869,0.0)-0.5));auto _n_right_29054=d::minimum({1.0,(_n_up_28871/6.0)});return (_n_left_29053*_n_right_29054);})());
double _n_wd_28873=(0.9+(_n_up_28871*0.2));
double _n_n_28874=(0.45+(0.55*_n_noise_28544(((_n_x_28813*0.22)+(_n_t_28797*0.4)),((_n_y_28812*0.3)+(_n_t_28797*0.9)),0.0)));
(void)((_n_s_28868=(_n_s_28868+(([&](){auto _n_left_29055=std::exp((-d::number(std::pow((((_n_x_28813+0.5)-_n_cx_28872)/_n_wd_28873),2.0))));auto _n_right_29056=std::exp(((-d::number(_n_up_28871))/13.0));return (_n_left_29055*_n_right_29056);})()*_n_n_28874))));

}
}
if(d::truth((_n_s_28868>0.01))){d::check_cancel();double _n_a_28875=d::minimum({0.8,(_n_s_28868*1.4)});
(void)((((_n_cr_28816=_n_mix_28548(_n_cr_28816,0.56,_n_a_28875)),(_n_cg_28817=_n_mix_28548(_n_cg_28817,0.6,_n_a_28875))),(_n_cbl_28818=_n_mix_28548(_n_cbl_28818,0.74,_n_a_28875))));
}
}
double _n_flake_28876=((d::truth((_n_m_28815==_n_SKY_28535))||d::truth((_n_m_28815==_n_FAR_28536)))?d::at(this->_n_back_28580,_n_k_28814):0.0);
if(d::truth((d::at(this->_n_front_28581,_n_k_28814)>_n_flake_28876))){d::check_cancel();(void)((_n_flake_28876=d::at(this->_n_front_28581,_n_k_28814)));
}
if(d::truth((_n_flake_28876>0.0))){d::check_cancel();double _n_hot_28877=((_n_beam_28856*4.0)+(_n_spill_28866*3.0));
(void)((((_n_cr_28816=(_n_cr_28816+(_n_flake_28876*(0.62+_n_hot_28877)))),(_n_cg_28817=(_n_cg_28817+(_n_flake_28876*(0.68+(_n_hot_28877*0.86)))))),(_n_cbl_28818=(_n_cbl_28818+(_n_flake_28876*(0.82+(_n_hot_28877*0.6)))))));
}
if(d::truth((_n_r_28811>92.0))){d::check_cancel();(void)((_n_fade_28820=_n_smooth_28547((_n_H_28523+2.0),(_n_H_28523-8.0),_n_y_28812)));
}
double _n_peak_28878=d::maximum({_n_cr_28816,_n_cg_28817,_n_cbl_28818,0.0001});
double _n_level_28879=(_n_clamp_28546((_n_floor_28819+(((1.0-_n_floor_28819)*std::pow(_n_peak_28878,0.85))*0.95)))*_n_fade_28820);
double _n_step_28880=([&](){auto _n_argument_29057=0.0;auto _n_argument_29058=([&](){auto _n_argument_29059=3.0;auto _n_argument_29060=d::round(((_n_level_28879*3.0)+d::at(_n_BAYER_28534,((double(d::i32(_n_r_28811)&d::i32(3.0))*4.0)+double(d::i32(_n_x_28813)&d::i32(3.0))))));return d::minimum({_n_argument_29059,_n_argument_29060});})();return d::maximum({_n_argument_29057,_n_argument_29058});})();
(void)(([&](){auto&& _n_array_29061=this->_n_out_28558;auto _n_index_29062=_n_k_28814;auto _n_value_29063=d::at(_n_DOTS_28532,_n_step_28880);d::put(_n_array_29061,_n_index_29062,_n_value_29063);return _n_value_29063;})());
if(d::truth(_n_color_28798)){d::check_cancel();double _n_want_28881=(d::truth(_n_step_28880)?d::minimum({1.0,((_n_level_28879+0.06)/d::at(_n_COVER_28533,_n_step_28880))}):0.0);
double _n_s_28882=((0.3+(0.7*_n_want_28881))/_n_peak_28878);
(void)(([&](){auto&& _n_array_29064=d::read(_n_color_28798);auto _n_index_29065=_n_k_28814;auto _n_value_29066=([&](){auto _n_argument_29067=_n_clamp_28546((_n_cr_28816*_n_s_28882));auto _n_argument_29068=_n_clamp_28546((_n_cg_28817*_n_s_28882));auto _n_argument_29069=_n_clamp_28546((_n_cbl_28818*_n_s_28882));return this->_n_nearest_28560(_n_argument_29067,_n_argument_29068,_n_argument_29069);})();d::put(_n_array_29064,_n_index_29065,_n_value_29066);return _n_value_29066;})());
}
}}
}}
d::Array<d::String,false> _n_lines_28883=d::Array<d::String,false>{};
{double _n_r_28884=0.0;
for(;d::truth((_n_r_28884<_n_H_28523));(void)((_n_r_28884++))){d::check_cancel();(void)(_n_lines_28883.push(d::join(this->_n_out_28558.slice((_n_r_28884*_n_W_28522),((_n_r_28884+1.0)*_n_W_28522)),d::String(u""))));
}}
return d::join(_n_lines_28883,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("snow-train").cols)*ascii::catalog_meta("snow-train").rows);auto _env=std::make_shared<_n_Record_28885>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &snow_train_meta(){return catalog_meta("snow-train");}
std::unique_ptr<Piece> make_snow_train(const AsciiPieceOptions &o){return std::make_unique<Native_snow_train>(o);}
}
