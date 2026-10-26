// Direct, statically typed C++ from src/pieces/saturn-rise.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26861;
struct _n_Record_27321;
struct _n_Record_26861{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_26861> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26861>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_27321{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_27321> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27321>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_norm_26881(d::Array<double,false> _a0);
double _n_hash_26888(double _a0,double _a1);
double _n_noise_26889(double _a0,double _a1,double _a2);
double _n_fbm_26890(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_26891(double _a0);
double _n_smooth_26892(double _a0,double _a1,double _a2);
double _n_mix_26893(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_26894(d::String _a0);
std::array<double,4> _n_ring_26895(double _a0);
double _n_ice_26896(double _a0,double _a1);
std::array<double,2> _n_plates_26897(double _a0,double _a1);
std::shared_ptr<_n_Record_26861> _n_meta_26860=[](){return ([&](){auto _n_object_27324=std::make_shared<_n_Record_26861>();_n_object_27324->_p_name=d::String(u"saturn rise");_n_object_27324->_p_category=d::String(u"scenes");_n_object_27324->_p_note=d::String(u"saturn and its rings hanging over the cracked ice and geysers of a moon");_n_object_27324->_p_cols=200.0;_n_object_27324->_p_rows=100.0;_n_object_27324->_p_cell=1.0;_n_object_27324->_p_fps=15.0;_n_object_27324->_p_ground=d::String(u"#04050a");_n_object_27324->_p_palette=d::Array<d::String,false>{d::String(u"#0b0d14"),d::String(u"#161922"),d::String(u"#252935"),d::String(u"#3a3f4c"),d::String(u"#3b2a1a"),d::String(u"#5c4027"),d::String(u"#7f5a35"),d::String(u"#a37645"),d::String(u"#c4925a"),d::String(u"#dcae74"),d::String(u"#ecc893"),d::String(u"#f6e0b8"),d::String(u"#6b6a6c"),d::String(u"#8a8070"),d::String(u"#b3a892"),d::String(u"#d8cfba"),d::String(u"#7f8a96"),d::String(u"#0e1a2e"),d::String(u"#15284a"),d::String(u"#1f3a66"),d::String(u"#2c5085"),d::String(u"#3f6aa3"),d::String(u"#5e8bbf"),d::String(u"#89afd6"),d::String(u"#b6d0ea"),d::String(u"#ddebf8"),d::String(u"#2a7fb0"),d::String(u"#56b3dc"),d::String(u"#ffffff"),d::String(u"#fff0c8")};return _n_object_27324;})();}();
const double _n_W_26862=[](){return 200.0;}();
const double _n_H_26863=[](){return 100.0;}();
const double _n_HZ_26864=[](){return 70.0;}();
const double _n_F_26865=[](){return 110.0;}();
const double _n_FG_26866=[](){return 60.0;}();
const double _n_CAM_26867=[](){return 8.0;}();
d::Array<double,false> _n_SC_26868=[](){return d::Array<double,false>{84.0,33.0};}();
const double _n_SR_26869=[](){return 25.0;}();
const double _n_INC_26870=[](){return 0.34;}();
const double _n_ROLL_26871=[](){return 0.14;}();
d::Array<double,false> _n_SUN_26872=[](){return d::Array<double,false>{173.0,55.0};}();
const double _n_MOON_R_26873=[](){return 2.85;}();
const double _n_MOON_T_26874=[](){return 140.0;}();
const d::String _n_DOTS_26875=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_26876=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_26877=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_26953=_a0;
return ((_n_v_26953/16.0)-0.47);});}();
d::Array<d::Array<double,false>,false> _n_BRIGHT_26878=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{176.0,12.0,1.0,4.4},d::Array<double,false>{12.0,9.0,0.85,3.6},d::Array<double,false>{194.0,33.0,0.8,5.2},d::Array<double,false>{150.0,5.0,0.75,4.9},d::Array<double,false>{7.0,44.0,0.7,3.9}};}();
d::Array<d::Array<double,false>,false> _n_PLUMES_26879=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{146.0,72.0,40.0,0.2,0.9},d::Array<double,false>{162.0,75.0,58.0,0.22,1.1},d::Array<double,false>{124.0,71.0,26.0,0.18,0.8},d::Array<double,false>{22.0,77.0,38.0,0.2,0.85}};}();
d::Array<double,false> _n_STRIPES_26880=[](){return d::Array<double,false>{25.0,46.0,92.0};}();
d::Array<double,false> _n_NR_26882=[](){return d::Array<double,false>{([&](){auto _n_left_27325=(-d::number(std::sin(_n_ROLL_26871)));auto _n_right_27326=std::cos(_n_INC_26870);return (_n_left_27325*_n_right_27326);})(),([&](){auto _n_left_27327=std::cos(_n_ROLL_26871);auto _n_right_27328=std::cos(_n_INC_26870);return (_n_left_27327*_n_right_27328);})(),std::sin(_n_INC_26870)};}();
d::Array<double,false> _n_E1_26883=[](){return _n_norm_26881(d::Array<double,false>{d::at(_n_NR_26882,1.0),(-d::number(d::at(_n_NR_26882,0.0))),0.0});}();
d::Array<double,false> _n_E2_26884=[](){return d::Array<double,false>{((-d::number(d::at(_n_NR_26882,2.0)))*d::at(_n_E1_26883,1.0)),(d::at(_n_NR_26882,2.0)*d::at(_n_E1_26883,0.0)),((d::at(_n_NR_26882,0.0)*d::at(_n_E1_26883,1.0))-(d::at(_n_NR_26882,1.0)*d::at(_n_E1_26883,0.0)))};}();
d::Array<double,false> _n_LS_26885=[](){return _n_norm_26881(d::Array<double,false>{0.6,0.28,0.72});}();
d::Array<double,false> _n_LG_26886=[](){return _n_norm_26881(d::Array<double,false>{0.78,0.42,0.3});}();
d::Array<double,false> _n_LV_26887=[](){return _n_norm_26881(d::Array<double,false>{((d::at(_n_SUN_26872,0.0)-100.0)/_n_F_26865),((_n_HZ_26864-d::at(_n_SUN_26872,1.0))/_n_F_26865),1.0});}();
d::Array<double,false> _n_norm_26881(d::Array<double,false> _a0){d::Array<double,false> _n_v_26954=_a0;
{
double _n_l_26955=d::hypot(_n_v_26954);
return d::map(_n_v_26954,[&]( double _a0) mutable ->double{double _n_c_26956=_a0;
return (_n_c_26956/_n_l_26955);});

}
}

double _n_hash_26888(double _a0,double _a1){double _n_x_26957=_a0;
double _n_y_26958=_a1;
{
double _n_h_26959=([&](){auto _n_left_27329=d::imul(double(d::i32(_n_x_26957)|d::i32(0.0)),374761393.0);auto _n_right_27330=d::imul(double(d::i32(_n_y_26958)|d::i32(0.0)),668265263.0);return (_n_left_27329+_n_right_27330);})();
(void)((_n_h_26959=d::imul(double(d::i32(_n_h_26959)^d::i32(double(d::u32(_n_h_26959)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_26959)^d::i32(double(d::u32(_n_h_26959)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_26889(double _a0,double _a1,double _a2){double _n_x_26960=_a0;
double _n_y_26961=_a1;
double _n_period_26962=_a2;
{
double _n_xi_26963=std::floor(_n_x_26960);
double _n_yi_26964=std::floor(_n_y_26961);
double _n_fx_26965=(_n_x_26960-_n_xi_26963);
double _n_fy_26966=(_n_y_26961-_n_yi_26964);
double _n_u_26967=((_n_fx_26965*_n_fx_26965)*(3.0-(2.0*_n_fx_26965)));
double _n_v_26968=((_n_fy_26966*_n_fy_26966)*(3.0-(2.0*_n_fy_26966)));
double _n_x0_26969=_n_xi_26963;
double _n_x1_26970=(_n_xi_26963+1.0);
if(d::truth(_n_period_26962)){d::check_cancel();(void)((_n_x0_26969=d::mod((d::mod(_n_xi_26963,_n_period_26962)+_n_period_26962),_n_period_26962)));
(void)((_n_x1_26970=d::mod((_n_x0_26969+1.0),_n_period_26962)));
}
double _n_a_26971=_n_hash_26888(_n_x0_26969,_n_yi_26964);
double _n_b_26972=_n_hash_26888(_n_x1_26970,_n_yi_26964);
double _n_c_26973=_n_hash_26888(_n_x0_26969,(_n_yi_26964+1.0));
double _n_d_26974=_n_hash_26888(_n_x1_26970,(_n_yi_26964+1.0));
return (((_n_a_26971+((_n_b_26972-_n_a_26971)*_n_u_26967))+((_n_c_26973-_n_a_26971)*_n_v_26968))+(((((_n_a_26971-_n_b_26972)-_n_c_26973)+_n_d_26974)*_n_u_26967)*_n_v_26968));

}
}

double _n_fbm_26890(double _a0,double _a1,double _a2,double _a3){double _n_x_26975=_a0;
double _n_y_26976=_a1;
double _n_octaves_26977=_a2;
double _n_period_26978=_a3;
{
double _n_s_26979=0.0;
double _n_n_26980=0.0;
double _n_amp_26981=0.5;
double _n_f_26982=1.0;
{double _n_i_26983=0.0;
for(;d::truth((_n_i_26983<_n_octaves_26977));(void)((_n_i_26983++))){d::check_cancel();(void)((_n_s_26979=(_n_s_26979+(_n_amp_26981*_n_noise_26889((_n_x_26975*_n_f_26982),(_n_y_26976*_n_f_26982),(_n_period_26978*_n_f_26982))))));
(void)((_n_n_26980=(_n_n_26980+_n_amp_26981)));
(void)((_n_amp_26981=(_n_amp_26981*0.5)));
(void)((_n_f_26982=(_n_f_26982*2.0)));
}}
return (_n_s_26979/_n_n_26980);

}
}

double _n_clamp_26891(double _a0){double _n_v_26984=_a0;
return (d::truth((_n_v_26984<0.0))?0.0:(d::truth((_n_v_26984>1.0))?1.0:_n_v_26984));}

double _n_smooth_26892(double _a0,double _a1,double _a2){double _n_a_26985=_a0;
double _n_b_26986=_a1;
double _n_v_26987=_a2;
{
double _n_k_26988=_n_clamp_26891(((_n_v_26987-_n_a_26985)/(_n_b_26986-_n_a_26985)));
return ((_n_k_26988*_n_k_26988)*(3.0-(2.0*_n_k_26988)));

}
}

double _n_mix_26893(double _a0,double _a1,double _a2){double _n_a_26989=_a0;
double _n_b_26990=_a1;
double _n_k_26991=_a2;
return (_n_a_26989+((_n_b_26990-_n_a_26989)*_n_k_26991));}

d::Array<double,false> _n_hex_26894(d::String _a0){d::String _n_s_26992=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_26993=_a0;
return (([&](){auto _n_argument_27331=d::slice(_n_s_26992,_n_i_26993,(_n_i_26993+2.0));auto _n_argument_27332=16.0;return d::parseInt(_n_argument_27331,_n_argument_27332);})()/255.0);});}

std::array<double,4> _n_ring_26895(double _a0){double _n_r_26994=_a0;
{
double _n_fine_26995=(0.88+(0.24*_n_fbm_26890((_n_r_26994*90.0),3.3,2.0,0.0)));
double _n_a_26996=0.0;
d::Array<double,false> _n_c_26997=d::Array<double,false>{0.0,0.0,0.0};
if((d::truth((_n_r_26994>1.24))&&d::truth((_n_r_26994<1.53)))){d::check_cancel();(void)(((_n_a_26996=(0.2*_n_fine_26995)),(_n_c_26997=d::Array<double,false>{0.55,0.52,0.48})));
}else {d::check_cancel();if((d::truth((_n_r_26994>=1.53))&&d::truth((_n_r_26994<1.95)))){d::check_cancel();(void)(((_n_a_26996=([&](){auto _n_argument_27333=1.0;auto _n_argument_27334=((0.7+(0.4*_n_smooth_26892(1.53,1.7,_n_r_26994)))*_n_fine_26995);return d::minimum({_n_argument_27333,_n_argument_27334});})()),(_n_c_26997=d::Array<double,false>{1.0,0.9,0.72})));
}else {d::check_cancel();if((d::truth((_n_r_26994>=1.95))&&d::truth((_n_r_26994<2.03)))){d::check_cancel();(void)(((_n_a_26996=0.02),(_n_c_26997=d::Array<double,false>{0.5,0.48,0.45})));
}else {d::check_cancel();if((d::truth((_n_r_26994>=2.03))&&d::truth((_n_r_26994<2.27)))){d::check_cancel();(void)(((_n_a_26996=((d::truth((_n_r_26994>2.2))&&d::truth((_n_r_26994<2.23)))?0.04:(0.55*_n_fine_26995))),(_n_c_26997=d::Array<double,false>{0.78,0.74,0.68})));
}else {d::check_cancel();if((d::truth((_n_r_26994>2.315))&&d::truth((_n_r_26994<2.335)))){d::check_cancel();(void)(((_n_a_26996=0.4),(_n_c_26997=d::Array<double,false>{0.85,0.82,0.76})));
}
}
}
}
}
return std::array<double,4>{_n_clamp_26891(_n_a_26996),d::at(_n_c_26997,0.0),d::at(_n_c_26997,1.0),d::at(_n_c_26997,2.0)};

}
}

double _n_ice_26896(double _a0,double _a1){double _n_X_26998=_a0;
double _n_Z_26999=_a1;
{
double _n_h_27000=(0.9*_n_fbm_26890(((_n_X_26998*0.03)+11.0),(_n_Z_26999*0.03),3.0,0.0));
double _n_w_27001=_n_fbm_26890((_n_X_26998*0.012),((_n_Z_26999*0.012)+5.0),2.0,0.0);
double _n_crest_27002=(1.0-std::fabs(((2.0*_n_noise_26889(((_n_X_26998*0.016)+(_n_w_27001*2.5)),((_n_Z_26999*0.045)+(_n_w_27001*3.0)),0.0))-1.0)));
(void)((_n_h_27000=(_n_h_27000+((4.5*std::pow(_n_crest_27002,8.0))*([&](){auto _n_argument_27335=0.45;auto _n_argument_27336=0.65;auto _n_argument_27337=_n_fbm_26890(((_n_X_26998*0.02)+3.0),(_n_Z_26999*0.02),2.0,0.0);return _n_smooth_26892(_n_argument_27335,_n_argument_27336,_n_argument_27337);})()))));
for(auto &&_n_item_27338:_n_STRIPES_26880){d::check_cancel();double _n_zc_27003=_n_item_27338;
{
double _n_zs_27004=((_n_zc_27003+(0.08*_n_X_26998))+((_n_zc_27003*0.12)*(_n_fbm_26890((_n_X_26998*0.01),_n_zc_27003,2.0,0.0)-0.5)));
double _n_wd_27005=(_n_zc_27003*0.07);
double _n_d_27006=(std::fabs((_n_Z_26999-_n_zs_27004))/_n_wd_27005);
(void)((_n_h_27000=(_n_h_27000+(_n_wd_27005*([&](){auto _n_left_27339=((-d::number(0.45))*std::exp(((-d::number(_n_d_27006))*_n_d_27006)));auto _n_right_27340=(0.25*std::exp((-d::number(std::pow(((_n_d_27006-1.8)/0.7),2.0)))));return (_n_left_27339+_n_right_27340);})()))));

}
}
return _n_h_27000;

}
}

std::array<double,2> _n_plates_26897(double _a0,double _a1){double _n_X_27007=_a0;
double _n_Z_27008=_a1;
{
double _n_xi_27009=std::floor(_n_X_27007);
double _n_zi_27010=std::floor(_n_Z_27008);
double _n_d1_27011=9.0;
double _n_d2_27012=9.0;
double _n_id_27013=0.0;
{double _n_j_27014=(-d::number(1.0));
for(;d::truth((_n_j_27014<=1.0));(void)((_n_j_27014++))){d::check_cancel();{double _n_i_27015=(-d::number(1.0));
for(;d::truth((_n_i_27015<=1.0));(void)((_n_i_27015++))){d::check_cancel();double _n_cx_27016=(_n_xi_27009+_n_i_27015);
double _n_cz_27017=(_n_zi_27010+_n_j_27014);
double _n_dx_27018=((_n_cx_27016+_n_hash_26888(_n_cx_27016,(_n_cz_27017+41.0)))-_n_X_27007);
double _n_dz_27019=((_n_cz_27017+_n_hash_26888((_n_cx_27016+43.0),_n_cz_27017))-_n_Z_27008);
double _n_d_27020=std::sqrt(((_n_dx_27018*_n_dx_27018)+(_n_dz_27019*_n_dz_27019)));
if(d::truth((_n_d_27020<_n_d1_27011))){d::check_cancel();(void)((((_n_d2_27012=_n_d1_27011),(_n_d1_27011=_n_d_27020)),(_n_id_27013=_n_hash_26888((_n_cx_27016+7.0),(_n_cz_27017+9.0)))));
}else {d::check_cancel();if(d::truth((_n_d_27020<_n_d2_27012))){d::check_cancel();(void)((_n_d2_27012=_n_d_27020));
}
}
}}
}}
return std::array<double,2>{(_n_d2_27012-_n_d1_27011),_n_id_27013};

}
}

struct Native_saturn_rise final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_26898{};
double _n_N_26899{};
d::Array<uint8_t,true> _n_lut_26900{};
d::Array<d::String,false> _n_chars_26902{};
d::Array<uint8_t,true> _n_cols_26903{};
d::Array<float,true> _n_sr_26905{};
d::Array<float,true> _n_sg_26906{};
d::Array<float,true> _n_sb_26907{};
d::Array<float,true> _n_sf_26908{};
d::Array<float,true> _n_scap_26909{};
d::Array<uint8_t,true> _n_solid_26910{};
d::Array<float,true> _n_crest_26911{};
d::Array<uint8_t,true> _n_gnd_26912{};
d::Array<float,true> _n_gx_26913{};
d::Array<float,true> _n_gz_26914{};
d::Array<float,true> _n_gy_26915{};
double _n_TW_26916{};
double _n_TH_26917{};
d::Array<float,true> _n_tr_26918{};
d::Array<float,true> _n_tg_26919{};
d::Array<float,true> _n_tb_26920{};
double _n_RB_26922{};
double _n_TB_26923{};
double _n_R0_26924{};
double _n_R1_26925{};
d::Array<float,true> _n_rt_26926{};
d::Array<float,true> _n_omega_26927{};
d::Array<double,false> _n_sat_26928{};
d::Array<float,true> _n_pa_26929{};
d::Array<float,true> _n_pl_26930{};
d::Array<float,true> _n_pu_26931{};
d::Array<float,true> _n_pv_26932{};
d::Array<float,true> _n_pz_26933{};
d::Array<float,true> _n_ra_26934{};
d::Array<float,true> _n_rcr_26935{};
d::Array<float,true> _n_rcg_26936{};
d::Array<float,true> _n_rcb_26937{};
d::Array<float,true> _n_rz_26938{};
d::Array<int16_t,true> _n_rbin_26939{};
d::Array<float,true> _n_rth_26940{};
d::Array<d::Array<double,false>,false> _n_SUB_26941{};
d::Array<d::Array<std::array<double,6>,false>,false> _n_grains_26942{};
d::Array<uint8_t,true> _n_live_26943{};
d::Array<double,false> _n_cells_26945{};
d::Array<uint8_t,true> _n_dirty_26946{};
d::Array<float,true> _n_fr_26947{};
d::Array<float,true> _n_fg_26948{};
d::Array<float,true> _n_fb_26949{};
d::Array<float,true> _n_ff_26950{};
d::Array<float,true> _n_fc_26951{};
d::Array<d::String,false> _n_lines_26952{};
std::function<d::String(double,std::shared_ptr<_n_Record_27321>)> _render;
double _n_nearest_26901(double _a0,double _a1,double _a2){double _n_r_27021=_a0;
double _n_g_27022=_a1;
double _n_b_27023=_a2;
{
double _n_k_27024=([&](){auto _n_left_27679=([&](){auto _n_left_27681=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_27021*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_27682=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_27022*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_27681)|d::i32(_n_right_27682));})();auto _n_right_27680=d::minimum({31.0,double(d::i32((_n_b_27023*31.99))|d::i32(0.0))});return double(d::i32(_n_left_27679)|d::i32(_n_right_27680));})();
if(d::truth((d::at(this->_n_lut_26900,_n_k_27024)!=255.0))){d::check_cancel();return d::at(this->_n_lut_26900,_n_k_27024);
}
double _n_best_27025=0.0;
double _n_bd_27026=1000000000.0;
{double _n_i_27027=0.0;
for(;d::truth((_n_i_27027<double(this->_n_P_26898.size())));(void)((_n_i_27027++))){d::check_cancel();double _n_dr_27028=(d::at(d::at(this->_n_P_26898,_n_i_27027),0.0)-_n_r_27021);
double _n_dg_27029=(d::at(d::at(this->_n_P_26898,_n_i_27027),1.0)-_n_g_27022);
double _n_db_27030=(d::at(d::at(this->_n_P_26898,_n_i_27027),2.0)-_n_b_27023);
double _n_d_27031=((((0.3*_n_dr_27028)*_n_dr_27028)+((0.5*_n_dg_27029)*_n_dg_27029))+((0.2*_n_db_27030)*_n_db_27030));
if(d::truth((_n_d_27031<_n_bd_27026))){d::check_cancel();(void)(((_n_bd_27026=_n_d_27031),(_n_best_27025=_n_i_27027)));
}
}}
return ([&](){auto&& _n_array_27683=this->_n_lut_26900;auto _n_index_27684=_n_k_27024;auto _n_value_27685=_n_best_27025;d::put(_n_array_27683,_n_index_27684,_n_value_27685);return _n_value_27685;})();

}
}

void _n_dot_26904(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_k_27032=_a0;
double _n_cr_27033=_a1;
double _n_cg_27034=_a2;
double _n_cb_27035=_a3;
double _n_floor_27036=_a4;
double _n_cap_27037=_a5;
{
double _n_x_27038=d::mod(_n_k_27032,_n_W_26862);
double _n_r_27039=double(d::i32((_n_k_27032/_n_W_26862))|d::i32(0.0));
double _n_peak_27040=d::maximum({_n_cr_27033,_n_cg_27034,_n_cb_27035,0.0001});
double _n_level_27041=_n_clamp_26891((_n_floor_27036+(((1.0-_n_floor_27036)*std::pow(_n_peak_27040,0.85))*0.95)));
double _n_step_27042=([&](){auto _n_argument_27686=0.0;auto _n_argument_27687=([&](){auto _n_argument_27688=3.0;auto _n_argument_27689=d::round(((_n_level_27041*3.0)+d::at(_n_BAYER_26877,((double(d::i32(_n_r_27039)&d::i32(3.0))*4.0)+double(d::i32(_n_x_27038)&d::i32(3.0))))));return d::minimum({_n_argument_27688,_n_argument_27689});})();return d::maximum({_n_argument_27686,_n_argument_27687});})();
(void)(([&](){auto&& _n_array_27690=this->_n_chars_26902;auto _n_index_27691=_n_k_27032;auto _n_value_27692=d::at(_n_DOTS_26875,_n_step_27042);d::put(_n_array_27690,_n_index_27691,_n_value_27692);return _n_value_27692;})());
double _n_want_27043=(d::truth(_n_step_27042)?d::minimum({1.0,((_n_level_27041+0.06)/d::at(_n_COVER_26876,_n_step_27042))}):0.0);
double _n_s_27044=(d::minimum({_n_cap_27037,(0.3+(0.7*_n_want_27043))})/_n_peak_27040);
(void)(([&](){auto&& _n_array_27693=this->_n_cols_26903;auto _n_index_27694=_n_k_27032;auto _n_value_27695=([&](){auto _n_argument_27696=_n_clamp_26891((_n_cr_27033*_n_s_27044));auto _n_argument_27697=_n_clamp_26891((_n_cg_27034*_n_s_27044));auto _n_argument_27698=_n_clamp_26891((_n_cb_27035*_n_s_27044));return this->_n_nearest_26901(_n_argument_27696,_n_argument_27697,_n_argument_27698);})();d::put(_n_array_27693,_n_index_27694,_n_value_27695);return _n_value_27695;})());

}
}

double _n_sample_26921(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_A_27131=_a0;
double _n_u_27132=_a1;
double _n_vy_27133=_a2;
{
double _n_fx_27134=(d::mod((d::mod(_n_u_27132,1.0)+1.0),1.0)*this->_n_TW_26916);
double _n_x0_27135=std::floor(_n_fx_27134);
double _n_ax_27136=(_n_fx_27134-_n_x0_27135);
double _n_x1_27137=d::mod((_n_x0_27135+1.0),this->_n_TW_26916);
double _n_y0_27138=([&](){auto _n_argument_27699=0.0;auto _n_argument_27700=([&](){auto _n_argument_27701=(this->_n_TH_26917-2.0);auto _n_argument_27702=std::floor(_n_vy_27133);return d::minimum({_n_argument_27701,_n_argument_27702});})();return d::maximum({_n_argument_27699,_n_argument_27700});})();
double _n_ay_27139=_n_clamp_26891((_n_vy_27133-_n_y0_27138));
double _n_a_27140=d::at(_n_A_27131,((_n_y0_27138*this->_n_TW_26916)+_n_x0_27135));
double _n_b_27141=d::at(_n_A_27131,((_n_y0_27138*this->_n_TW_26916)+_n_x1_27137));
double _n_c_27142=d::at(_n_A_27131,(((_n_y0_27138*this->_n_TW_26916)+this->_n_TW_26916)+_n_x0_27135));
double _n_d_27143=d::at(_n_A_27131,(((_n_y0_27138*this->_n_TW_26916)+this->_n_TW_26916)+_n_x1_27137));
return (((_n_a_27140+((_n_b_27141-_n_a_27140)*_n_ax_27136))+((_n_c_27142-_n_a_27140)*_n_ay_27139))+(((((_n_a_27140-_n_b_27141)-_n_c_27142)+_n_d_27143)*_n_ax_27136)*_n_ay_27139));

}
}

d::Array<double,false> _n_orbit_26944(double _a0){double _n_a_27202=_a0;
{
double _n_ca_27203=(std::cos(_n_a_27202)*_n_MOON_R_26873);
double _n_sa_27204=(std::sin(_n_a_27202)*_n_MOON_R_26873);
return d::Array<double,false>{((_n_ca_27203*d::at(_n_E1_26883,0.0))+(_n_sa_27204*d::at(_n_E2_26884,0.0))),((_n_ca_27203*d::at(_n_E1_26883,1.0))+(_n_sa_27204*d::at(_n_E2_26884,1.0))),((_n_ca_27203*d::at(_n_E1_26883,2.0))+(_n_sa_27204*d::at(_n_E2_26884,2.0)))};

}
}

explicit Native_saturn_rise(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_26898=d::map(_n_meta_26860->_p_palette,_n_hex_26894);
this->_n_N_26899=(_n_W_26862*_n_H_26863);
this->_n_lut_26900=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_chars_26902=d::Array<d::String,false>(size_t(this->_n_N_26899)).fill(d::String(u" "));
this->_n_cols_26903=d::Array<uint8_t,true>(size_t(this->_n_N_26899));
this->_n_sr_26905=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_sg_26906=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_sb_26907=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_sf_26908=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_scap_26909=d::Array<float,true>(size_t(this->_n_N_26899)).fill(1.0);
this->_n_solid_26910=d::Array<uint8_t,true>(size_t(this->_n_N_26899));
this->_n_crest_26911=d::Array<float,true>(size_t((_n_W_26862+2.0)));
{double _n_x_27045=(-d::number(1.0));
for(;d::truth((_n_x_27045<=_n_W_26862));(void)((_n_x_27045++))){d::check_cancel();double _n_m_27046=(1.0-std::fabs(((2.0*_n_fbm_26890(((_n_x_27045*0.035)+4.0),1.5,3.0,0.0))-1.0)));
(void)(([&](){auto&& _n_array_27341=this->_n_crest_26911;auto _n_index_27342=(_n_x_27045+1.0);auto _n_value_27343=((_n_HZ_26864-0.5)-([&](){auto _n_left_27344=([&](){auto _n_left_27346=((1.2+((4.5*_n_m_27046)*_n_m_27046))+(6.0*std::exp((-d::number(std::pow(((_n_x_27045-38.0)/30.0),2.0))))));auto _n_right_27347=(3.0*std::exp((-d::number(std::pow(((_n_x_27045-190.0)/14.0),2.0)))));return (_n_left_27346+_n_right_27347);})();auto _n_right_27345=(0.8*_n_hash_26888(_n_x_27045,7.0));return (_n_left_27344+_n_right_27345);})());d::put(_n_array_27341,_n_index_27342,_n_value_27343);return _n_value_27343;})());
}}
this->_n_gnd_26912=d::Array<uint8_t,true>(size_t(this->_n_N_26899));
this->_n_gx_26913=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_gz_26914=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_gy_26915=d::Array<float,true>(size_t(this->_n_N_26899));
{double _n_c_27047=0.0;
for(;d::truth((_n_c_27047<_n_W_26862));(void)((_n_c_27047++))){d::check_cancel();double _n_dir_27048=(((_n_c_27047+0.5)-100.0)/_n_FG_26866);
double _n_topR_27049=_n_H_26863;
double _n_Z_27050=10.0;
double _n_prevF_27051=1000000000.0;
double _n_prevZ_27052=0.0;
double _n_prevY_27053=0.0;
while((d::truth((_n_Z_27050<3000.0))&&d::truth((_n_topR_27049>0.0)))){d::check_cancel();double _n_hy_27054=_n_ice_26896((_n_dir_27048*_n_Z_27050),_n_Z_27050);
double _n_yf_27055=(_n_HZ_26864+((_n_FG_26866*(_n_CAM_26867-_n_hy_27054))/_n_Z_27050));
double _n_r0_27056=([&](){auto _n_argument_27348=0.0;auto _n_argument_27349=std::ceil((_n_yf_27055-0.5));return d::maximum({_n_argument_27348,_n_argument_27349});})();
{double _n_r_27057=_n_r0_27056;
for(;d::truth((_n_r_27057<_n_topR_27049));(void)((_n_r_27057++))){d::check_cancel();double _n_a_27058=(d::truth((_n_prevF_27051>(_n_yf_27055+0.000001)))?_n_clamp_26891(((_n_prevF_27051-(_n_r_27057+0.5))/(_n_prevF_27051-_n_yf_27055))):1.0);
double _n_k_27059=((_n_r_27057*_n_W_26862)+_n_c_27047);
(void)(([&](){auto&& _n_array_27350=this->_n_gnd_26912;auto _n_index_27351=_n_k_27059;auto _n_value_27352=1.0;d::put(_n_array_27350,_n_index_27351,_n_value_27352);return _n_value_27352;})());
(void)(([&](){auto&& _n_array_27353=this->_n_gz_26914;auto _n_index_27354=_n_k_27059;auto _n_value_27355=(d::truth(_n_prevZ_27052)?_n_mix_26893(_n_prevZ_27052,_n_Z_27050,_n_a_27058):_n_Z_27050);d::put(_n_array_27353,_n_index_27354,_n_value_27355);return _n_value_27355;})());
(void)(([&](){auto&& _n_array_27356=this->_n_gx_26913;auto _n_index_27357=_n_k_27059;auto _n_value_27358=(_n_dir_27048*d::at(this->_n_gz_26914,_n_k_27059));d::put(_n_array_27356,_n_index_27357,_n_value_27358);return _n_value_27358;})());
(void)(([&](){auto&& _n_array_27359=this->_n_gy_26915;auto _n_index_27360=_n_k_27059;auto _n_value_27361=(d::truth(_n_prevZ_27052)?_n_mix_26893(_n_prevY_27053,_n_hy_27054,_n_a_27058):_n_hy_27054);d::put(_n_array_27359,_n_index_27360,_n_value_27361);return _n_value_27361;})());
}}
if(d::truth((_n_r0_27056<_n_topR_27049))){d::check_cancel();(void)((_n_topR_27049=_n_r0_27056));
}
(void)((((_n_prevF_27051=_n_yf_27055),(_n_prevY_27053=_n_hy_27054)),(_n_prevZ_27052=_n_Z_27050)));
(void)((_n_Z_27050=(_n_Z_27050+(0.05+(_n_Z_27050*0.012)))));
}
}}
{double _n_r_27060=0.0;
for(;d::truth((_n_r_27060<_n_H_26863));(void)((_n_r_27060++))){d::check_cancel();{double _n_x_27061=0.0;
for(;d::truth((_n_x_27061<_n_W_26862));(void)((_n_x_27061++))){d::check_cancel();double _n_k_27062=((_n_r_27060*_n_W_26862)+_n_x_27061);
double _n_y_27063=(_n_r_27060+0.5);
double _n_cr_27064=0.0;
double _n_cg_27065=0.0;
double _n_cb_27066=0.0;
double _n_floor_27067=0.0;
double _n_cap_27068=1.0;
double _n_ds_27069=d::hypot(std::initializer_list<double>{((_n_x_27061+0.5)-d::at(_n_SUN_26872,0.0)),(_n_y_27063-d::at(_n_SUN_26872,1.0))});
if(d::truth(d::at(this->_n_gnd_26912,_n_k_27062))){d::check_cancel();(void)(([&](){auto&& _n_array_27362=this->_n_solid_26910;auto _n_index_27363=_n_k_27062;auto _n_value_27364=1.0;d::put(_n_array_27362,_n_index_27363,_n_value_27364);return _n_value_27364;})());
double _n_X_27070=d::at(this->_n_gx_26913,_n_k_27062);
double _n_Z_27071=d::at(this->_n_gz_26914,_n_k_27062);
double _n_Y_27072=d::at(this->_n_gy_26915,_n_k_27062);
double _n_e_27073=(0.1+(_n_Z_27071*0.006));
double _n_hx_27074=(([&](){auto _n_left_27365=_n_ice_26896((_n_X_27070+_n_e_27073),_n_Z_27071);auto _n_right_27366=_n_ice_26896((_n_X_27070-_n_e_27073),_n_Z_27071);return (_n_left_27365-_n_right_27366);})()/(2.0*_n_e_27073));
double _n_hz_27075=(([&](){auto _n_left_27367=_n_ice_26896(_n_X_27070,(_n_Z_27071+_n_e_27073));auto _n_right_27368=_n_ice_26896(_n_X_27070,(_n_Z_27071-_n_e_27073));return (_n_left_27367-_n_right_27368);})()/(2.0*_n_e_27073));
double _n_nl_27076=d::hypot(std::initializer_list<double>{_n_hx_27074,1.0,_n_hz_27075});
double _n_nx_27077=((-d::number(_n_hx_27074))/_n_nl_27076);
double _n_ny_27078=(1.0/_n_nl_27076);
double _n_nz_27079=((-d::number(_n_hz_27075))/_n_nl_27076);
double _n_lam_27080=d::maximum({0.0,(((_n_nx_27077*d::at(_n_LG_26886,0.0))+(_n_ny_27078*d::at(_n_LG_26886,1.0)))+(_n_nz_27079*d::at(_n_LG_26886,2.0)))});
if((d::truth((_n_lam_27080>0.0))&&d::truth((_n_Z_27071<400.0)))){d::check_cancel();{double _n_s_27081=(0.3+(_n_Z_27071*0.004));
for(;d::truth((_n_s_27081<80.0));(void)((_n_s_27081=(_n_s_27081+(0.25+(_n_s_27081*0.15)))))){d::check_cancel();if(d::truth((_n_ice_26896((_n_X_27070+(d::at(_n_LG_26886,0.0)*_n_s_27081)),(_n_Z_27071+(d::at(_n_LG_26886,2.0)*_n_s_27081)))>((_n_Y_27072+0.02)+(d::at(_n_LG_26886,1.0)*_n_s_27081))))){d::check_cancel();(void)((_n_lam_27080=0.0));
break;
}
}}
}
auto _n_binding_27369=_n_plates_26897((_n_X_27070*0.14),(_n_Z_27071*0.14));
double _n_edge_27082=d::at(_n_binding_27369,0.0);
double _n_near_27083=_n_smooth_26892(130.0,30.0,_n_Z_27071);
double _n_crack_27084=(_n_smooth_26892((0.05+(0.6/_n_Z_27071)),0.01,_n_edge_27082)*_n_near_27083);
double _n_deep_27085=0.0;
for(auto &&_n_item_27370:_n_STRIPES_26880){d::check_cancel();double _n_zc_27086=_n_item_27370;
{
double _n_zs_27087=((_n_zc_27086+(0.08*_n_X_27070))+((_n_zc_27086*0.12)*(_n_fbm_26890((_n_X_27070*0.01),_n_zc_27086,2.0,0.0)-0.5)));
(void)((_n_deep_27085=([&](){auto _n_argument_27371=_n_deep_27085;auto _n_argument_27372=std::exp(((-d::number(std::pow((std::fabs((_n_Z_27071-_n_zs_27087))/(_n_zc_27086*0.07)),2.0)))*1.6));return d::maximum({_n_argument_27371,_n_argument_27372});})()));

}
}
double _n_albedo_27088=(0.85+(0.25*(_n_fbm_26890((_n_X_27070*0.2),(_n_Z_27071*0.2),2.0,0.0)-0.5)));
double _n_sun_27089=d::maximum({0.0,((2.2*_n_lam_27080)-0.25)});
(void)((_n_cr_27064=(_n_albedo_27088*((_n_sun_27089*1.0)+0.06))));
(void)((_n_cg_27065=(_n_albedo_27088*((_n_sun_27089*0.98)+0.12))));
(void)((_n_cb_27066=(_n_albedo_27088*((_n_sun_27089*0.95)+0.28))));
(void)((((_n_cr_27064=_n_mix_26893(_n_cr_27064,0.08,(_n_deep_27085*0.9))),(_n_cg_27065=_n_mix_26893(_n_cg_27065,0.36,(_n_deep_27085*0.9)))),(_n_cb_27066=_n_mix_26893(_n_cb_27066,0.62,(_n_deep_27085*0.9)))));
(void)((((_n_cr_27064=_n_mix_26893(_n_cr_27064,0.0,_n_crack_27084)),(_n_cg_27065=_n_mix_26893(_n_cg_27065,0.02,_n_crack_27084))),(_n_cb_27066=_n_mix_26893(_n_cb_27066,0.06,_n_crack_27084))));
double _n_vx_27090=(-d::number(_n_X_27070));
double _n_vy_27091=(_n_CAM_26867-_n_Y_27072);
double _n_vz_27092=(-d::number(_n_Z_27071));
double _n_vl_27093=d::hypot(std::initializer_list<double>{_n_vx_27090,_n_vy_27091,_n_vz_27092});
double _n_hvx_27094=(d::at(_n_LV_26887,0.0)+(_n_vx_27090/_n_vl_27093));
double _n_hvy_27095=(d::at(_n_LV_26887,1.0)+(_n_vy_27091/_n_vl_27093));
double _n_hvz_27096=(d::at(_n_LV_26887,2.0)+(_n_vz_27092/_n_vl_27093));
double _n_hl_27097=d::hypot(std::initializer_list<double>{_n_hvx_27094,_n_hvy_27095,_n_hvz_27096});
double _n_glint_27098=(([&](){auto _n_left_27373=([&](){auto _n_argument_27375=d::maximum({0.0,((((_n_nx_27077*_n_hvx_27094)+(_n_ny_27078*_n_hvy_27095))+(_n_nz_27079*_n_hvz_27096))/_n_hl_27097)});auto _n_argument_27376=60.0;return std::pow(_n_argument_27375,_n_argument_27376);})();auto _n_right_27374=([&](){auto _n_argument_27377=0.6;auto _n_argument_27378=0.9;auto _n_argument_27379=_n_hash_26888(_n_x_27061,(_n_r_27060*5.0));return _n_smooth_26892(_n_argument_27377,_n_argument_27378,_n_argument_27379);})();return (_n_left_27373*_n_right_27374);})()*(1.0-_n_crack_27084));
(void)((((_n_cr_27064=(_n_cr_27064+(1.2*_n_glint_27098))),(_n_cg_27065=(_n_cg_27065+(1.15*_n_glint_27098)))),(_n_cb_27066=(_n_cb_27066+(1.05*_n_glint_27098)))));
double _n_far_27099=(_n_smooth_26892(35.0,260.0,_n_Z_27071)*0.8);
double _n_toward_27100=([&](){auto _n_left_27380=std::exp(((-d::number(std::fabs((_n_x_27061-d::at(_n_SUN_26872,0.0)))))/28.0));auto _n_right_27381=_n_smooth_26892(150.0,600.0,_n_Z_27071);return (_n_left_27380*_n_right_27381);})();
(void)((((_n_cr_27064=_n_mix_26893(_n_cr_27064,(0.22+(0.6*_n_toward_27100)),_n_far_27099)),(_n_cg_27065=_n_mix_26893(_n_cg_27065,(0.3+(0.55*_n_toward_27100)),_n_far_27099))),(_n_cb_27066=_n_mix_26893(_n_cb_27066,(0.48+(0.4*_n_toward_27100)),_n_far_27099))));
(void)((_n_floor_27067=0.02));
(void)((_n_cap_27068=(0.5+(0.6*_n_clamp_26891(d::maximum({_n_cr_27064,_n_cg_27065,_n_cb_27066}))))));
}else {d::check_cancel();if(d::truth((_n_y_27063>=d::at(this->_n_crest_26911,(_n_x_27061+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_27382=this->_n_solid_26910;auto _n_index_27383=_n_k_27062;auto _n_value_27384=1.0;d::put(_n_array_27382,_n_index_27383,_n_value_27384);return _n_value_27384;})());
double _n_slope_27101=(d::at(this->_n_crest_26911,(_n_x_27061+2.0))-d::at(this->_n_crest_26911,_n_x_27061));
double _n_face_27102=(_n_clamp_26891((_n_slope_27101*0.5))*0.4);
double _n_below_27103=(_n_y_27063-d::at(this->_n_crest_26911,(_n_x_27061+1.0)));
double _n_rim_27104=([&](){auto _n_left_27385=std::exp(((-d::number(_n_below_27103))/0.9));auto _n_right_27386=(0.25+(0.9*std::exp(((-d::number(std::fabs((_n_x_27061-d::at(_n_SUN_26872,0.0)))))/30.0))));return (_n_left_27385*_n_right_27386);})();
double _n_streak_27105=(0.75+(0.5*_n_hash_26888(_n_x_27061,3.0)));
double _n_b_27106=((0.12+_n_face_27102)*_n_streak_27105);
(void)((_n_cr_27064=((0.1*_n_b_27106)+(_n_rim_27104*1.0))));
(void)((_n_cg_27065=((0.18*_n_b_27106)+(_n_rim_27104*0.97))));
(void)((_n_cb_27066=((0.38*_n_b_27106)+(_n_rim_27104*0.9))));
(void)((_n_cr_27064=(_n_cr_27064+(0.3*std::exp(((-d::number(_n_ds_27069))/7.0))))));
(void)((_n_cg_27065=(_n_cg_27065+(0.26*std::exp(((-d::number(_n_ds_27069))/7.0))))));
(void)((_n_cb_27066=(_n_cb_27066+(0.2*std::exp(((-d::number(_n_ds_27069))/7.0))))));
(void)((_n_floor_27067=0.03));
(void)((_n_cap_27068=(0.22+(0.85*_n_clamp_26891(d::maximum({_n_cr_27064,_n_cg_27065,_n_cb_27066}))))));
}else {d::check_cancel();double _n_band_27107=([&](){auto _n_left_27387=std::exp((-d::number(std::pow(((_n_r_27060-(90.0-(_n_x_27061*0.45)))/12.0),2.0))));auto _n_right_27388=([&](){auto _n_argument_27389=0.4;auto _n_argument_27390=0.7;auto _n_argument_27391=_n_fbm_26890((_n_x_27061*0.05),(_n_r_27060*0.08),3.0,0.0);return _n_smooth_26892(_n_argument_27389,_n_argument_27390,_n_argument_27391);})();return (_n_left_27387*_n_right_27388);})();
double _n_hs_27108=_n_hash_26888(((_n_x_27061*3.0)+1.0),((_n_r_27060*7.0)+2.0));
if(d::truth((_n_hs_27108>(0.992-(0.04*_n_band_27107))))){d::check_cancel();double _n_m_27109=([&](){auto _n_argument_27392=_n_hash_26888((_n_x_27061+17.0),(_n_r_27060+29.0));auto _n_argument_27393=3.0;return std::pow(_n_argument_27392,_n_argument_27393);})();
double _n_s_27110=(0.18+(0.5*_n_m_27109));
double _n_tint_27111=_n_hash_26888((_n_x_27061+5.0),(_n_r_27060+77.0));
auto _n_binding_27394=(d::truth((_n_tint_27111<0.3))?std::array<double,3>{0.84,0.9,1.0}:(d::truth((_n_tint_27111>0.88))?std::array<double,3>{1.0,0.93,0.84}:std::array<double,3>{0.96,0.96,0.98}));
double _n_tr_27112=d::at(_n_binding_27394,0.0);
double _n_tg_27113=d::at(_n_binding_27394,1.0);
double _n_tb_27114=d::at(_n_binding_27394,2.0);
(void)((((_n_cr_27064=(_n_s_27110*_n_tr_27112)),(_n_cg_27065=(_n_s_27110*_n_tg_27113))),(_n_cb_27066=(_n_s_27110*_n_tb_27114))));
}
(void)((((_n_cr_27064=(_n_cr_27064+(0.015*_n_band_27107))),(_n_cg_27065=(_n_cg_27065+(0.018*_n_band_27107)))),(_n_cb_27066=(_n_cb_27066+(0.03*_n_band_27107)))));
}
}
(void)(((((([&](){auto&& _n_array_27395=this->_n_sr_26905;auto _n_index_27396=_n_k_27062;auto _n_value_27397=_n_cr_27064;d::put(_n_array_27395,_n_index_27396,_n_value_27397);return _n_value_27397;})(),([&](){auto&& _n_array_27398=this->_n_sg_26906;auto _n_index_27399=_n_k_27062;auto _n_value_27400=_n_cg_27065;d::put(_n_array_27398,_n_index_27399,_n_value_27400);return _n_value_27400;})()),([&](){auto&& _n_array_27401=this->_n_sb_26907;auto _n_index_27402=_n_k_27062;auto _n_value_27403=_n_cb_27066;d::put(_n_array_27401,_n_index_27402,_n_value_27403);return _n_value_27403;})()),([&](){auto&& _n_array_27404=this->_n_sf_26908;auto _n_index_27405=_n_k_27062;auto _n_value_27406=_n_floor_27067;d::put(_n_array_27404,_n_index_27405,_n_value_27406);return _n_value_27406;})()),([&](){auto&& _n_array_27407=this->_n_scap_26909;auto _n_index_27408=_n_k_27062;auto _n_value_27409=_n_cap_27068;d::put(_n_array_27407,_n_index_27408,_n_value_27409);return _n_value_27409;})()));
}}
}}
{double _n_k_27115=0.0;
for(;d::truth((_n_k_27115<this->_n_N_26899));(void)((_n_k_27115++))){d::check_cancel();(void)(this->_n_dot_26904(_n_k_27115,d::at(this->_n_sr_26905,_n_k_27115),d::at(this->_n_sg_26906,_n_k_27115),d::at(this->_n_sb_26907,_n_k_27115),d::at(this->_n_sf_26908,_n_k_27115),d::at(this->_n_scap_26909,_n_k_27115)));
}}
this->_n_TW_26916=256.0;
this->_n_TH_26917=128.0;
this->_n_tr_26918=d::Array<float,true>(size_t((this->_n_TW_26916*this->_n_TH_26917)));
this->_n_tg_26919=d::Array<float,true>(size_t((this->_n_TW_26916*this->_n_TH_26917)));
this->_n_tb_26920=d::Array<float,true>(size_t((this->_n_TW_26916*this->_n_TH_26917)));
{double _n_j_27116=0.0;
for(;d::truth((_n_j_27116<this->_n_TH_26917));(void)((_n_j_27116++))){d::check_cancel();{double _n_i_27117=0.0;
for(;d::truth((_n_i_27117<this->_n_TW_26916));(void)((_n_i_27117++))){d::check_cancel();double _n_u_27118=(_n_i_27117/this->_n_TW_26916);
double _n_v_27119=((_n_j_27116+0.5)/this->_n_TH_26917);
double _n_lat_27120=((0.5-_n_v_27119)*ascii::PI);
double _n_warp_27121=([&](){auto _n_left_27410=(0.035*(_n_fbm_26890((_n_u_27118*10.0),(_n_v_27119*18.0),3.0,10.0)-0.5));auto _n_right_27411=(1.0+(1.5*std::exp((-d::number(std::pow((_n_lat_27120/0.3),2.0))))));return (_n_left_27410*_n_right_27411);})();
double _n_s_27122=std::sin((_n_lat_27120+_n_warp_27121));
double _n_wave_27123=([&](){auto _n_left_27412=std::sin(((_n_s_27122*13.0)+(0.8*std::sin((_n_s_27122*4.0)))));auto _n_right_27413=(0.45*std::sin(((_n_s_27122*33.0)+1.3)));return (_n_left_27412+_n_right_27413);})();
double _n_tone_27124=((0.56+(0.3*_n_wave_27123))+(0.25*(_n_fbm_26890(((_n_s_27122*22.0)+3.0),0.5,3.0,0.0)-0.5)));
(void)((_n_tone_27124=(_n_tone_27124+(0.05*(_n_fbm_26890((_n_u_27118*40.0),(_n_v_27119*20.0),2.0,40.0)-0.5)))));
(void)((_n_tone_27124=_n_clamp_26891(_n_tone_27124)));
double _n_r_27125=_n_mix_26893(0.5,1.0,_n_tone_27124);
double _n_g_27126=_n_mix_26893(0.3,0.86,_n_tone_27124);
double _n_b_27127=_n_mix_26893(0.13,0.6,_n_tone_27124);
double _n_eq_27128=std::exp((-d::number(std::pow((_n_s_27122/0.1),2.0))));
(void)((((_n_r_27125=_n_mix_26893(_n_r_27125,1.0,(0.55*_n_eq_27128))),(_n_g_27126=_n_mix_26893(_n_g_27126,0.9,(0.55*_n_eq_27128)))),(_n_b_27127=_n_mix_26893(_n_b_27127,0.66,(0.55*_n_eq_27128)))));
double _n_pole_27129=([&](){auto _n_argument_27414=0.72;auto _n_argument_27415=0.96;auto _n_argument_27416=std::fabs(_n_s_27122);return _n_smooth_26892(_n_argument_27414,_n_argument_27415,_n_argument_27416);})();
(void)((((_n_r_27125=_n_mix_26893(_n_r_27125,0.48,(0.65*_n_pole_27129))),(_n_g_27126=_n_mix_26893(_n_g_27126,0.53,(0.65*_n_pole_27129)))),(_n_b_27127=_n_mix_26893(_n_b_27127,0.58,(0.65*_n_pole_27129)))));
double _n_t_27130=((_n_j_27116*this->_n_TW_26916)+_n_i_27117);
(void)(((([&](){auto&& _n_array_27417=this->_n_tr_26918;auto _n_index_27418=_n_t_27130;auto _n_value_27419=_n_r_27125;d::put(_n_array_27417,_n_index_27418,_n_value_27419);return _n_value_27419;})(),([&](){auto&& _n_array_27420=this->_n_tg_26919;auto _n_index_27421=_n_t_27130;auto _n_value_27422=_n_g_27126;d::put(_n_array_27420,_n_index_27421,_n_value_27422);return _n_value_27422;})()),([&](){auto&& _n_array_27423=this->_n_tb_26920;auto _n_index_27424=_n_t_27130;auto _n_value_27425=_n_b_27127;d::put(_n_array_27423,_n_index_27424,_n_value_27425);return _n_value_27425;})()));
}}
}}
this->_n_RB_26922=520.0;
this->_n_TB_26923=720.0;
this->_n_R0_26924=1.1;
this->_n_R1_26925=2.4;
this->_n_rt_26926=d::Array<float,true>(size_t((this->_n_RB_26922*this->_n_TB_26923)));
this->_n_omega_26927=d::Array<float,true>(size_t(this->_n_RB_26922));
{double _n_i_27144=0.0;
for(;d::truth((_n_i_27144<this->_n_RB_26922));(void)((_n_i_27144++))){d::check_cancel();double _n_rr_27145=(this->_n_R0_26924+(((this->_n_R1_26925-this->_n_R0_26924)*(_n_i_27144+0.5))/this->_n_RB_26922));
(void)(([&](){auto&& _n_array_27426=this->_n_omega_26927;auto _n_index_27427=_n_i_27144;auto _n_value_27428=(0.05*std::pow(_n_rr_27145,(-d::number(1.5))));d::put(_n_array_27426,_n_index_27427,_n_value_27428);return _n_value_27428;})());
{double _n_j_27146=0.0;
for(;d::truth((_n_j_27146<this->_n_TB_26923));(void)((_n_j_27146++))){d::check_cancel();(void)(([&](){auto&& _n_array_27429=this->_n_rt_26926;auto _n_index_27430=((_n_i_27144*this->_n_TB_26923)+_n_j_27146);auto _n_value_27431=(0.8+(0.4*_n_fbm_26890((_n_j_27146/16.0),(_n_i_27144*0.3),3.0,45.0)));d::put(_n_array_27429,_n_index_27430,_n_value_27431);return _n_value_27431;})());
}}
}}
this->_n_sat_26928=d::Array<double,false>{};
this->_n_pa_26929=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_pl_26930=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_pu_26931=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_pv_26932=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_pz_26933=d::Array<float,true>(size_t(this->_n_N_26899)).fill((-d::number(9.0)));
this->_n_ra_26934=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_rcr_26935=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_rcg_26936=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_rcb_26937=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_rz_26938=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_rbin_26939=d::Array<int16_t,true>(size_t(this->_n_N_26899));
this->_n_rth_26940=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_SUB_26941=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.25,0.25},d::Array<double,false>{0.75,0.25},d::Array<double,false>{0.25,0.75},d::Array<double,false>{0.75,0.75}};
{double _n_r_27147=0.0;
for(;d::truth((_n_r_27147<_n_HZ_26864));(void)((_n_r_27147++))){d::check_cancel();{double _n_x_27148=0.0;
for(;d::truth((_n_x_27148<_n_W_26862));(void)((_n_x_27148++))){d::check_cancel();double _n_k_27149=((_n_r_27147*_n_W_26862)+_n_x_27148);
if(d::truth(d::at(this->_n_solid_26910,_n_k_27149))){d::check_cancel();continue;
}
double _n_acov_27150=0.0;
double _n_ar_27151=0.0;
double _n_ag_27152=0.0;
double _n_ab_27153=0.0;
double _n_pcov_27154=0.0;
for(auto &&_n_item_27432:this->_n_SUB_26941){d::check_cancel();auto _n_binding_27433=_n_item_27432;
double _n_ox_27155=d::at(_n_binding_27433,0.0);
double _n_oy_27156=d::at(_n_binding_27433,1.0);
{
double _n_px_27157=(((_n_x_27148+_n_ox_27155)-d::at(_n_SC_26868,0.0))/_n_SR_26869);
double _n_py_27158=((-d::number(((_n_r_27147+_n_oy_27156)-d::at(_n_SC_26868,1.0))))/_n_SR_26869);
double _n_q2_27159=((_n_px_27157*_n_px_27157)+(_n_py_27158*_n_py_27158));
double _n_zs_27160=(d::truth((_n_q2_27159<1.0))?std::sqrt((1.0-_n_q2_27159)):(-d::number(9.0)));
if(d::truth((_n_q2_27159<1.0))){d::check_cancel();(void)((_n_pcov_27154=(_n_pcov_27154+0.25)));
}
double _n_zr_27161=((-d::number(((d::at(_n_NR_26882,0.0)*_n_px_27157)+(d::at(_n_NR_26882,1.0)*_n_py_27158))))/d::at(_n_NR_26882,2.0));
double _n_rr_27162=std::sqrt((_n_q2_27159+(_n_zr_27161*_n_zr_27161)));
if(((d::truth((_n_rr_27162<this->_n_R0_26924))||d::truth((_n_rr_27162>this->_n_R1_26925)))||d::truth((_n_zr_27161<_n_zs_27160)))){d::check_cancel();continue;
}
auto _n_binding_27434=_n_ring_26895(_n_rr_27162);
double _n_a_27163=d::at(_n_binding_27434,0.0);
double _n_cr_27164=d::at(_n_binding_27434,1.0);
double _n_cg_27165=d::at(_n_binding_27434,2.0);
double _n_cb_27166=d::at(_n_binding_27434,3.0);
if(d::truth((_n_a_27163<=0.0))){d::check_cancel();continue;
}
double _n_d_27167=(((_n_px_27157*d::at(_n_LS_26885,0.0))+(_n_py_27158*d::at(_n_LS_26885,1.0)))+(_n_zr_27161*d::at(_n_LS_26885,2.0)));
double _n_perp_27168=std::sqrt(d::maximum({0.0,((_n_rr_27162*_n_rr_27162)-(_n_d_27167*_n_d_27167))}));
double _n_lit_27169=(d::truth((_n_d_27167<0.0))?_n_smooth_26892(0.98,1.03,_n_perp_27168):1.0);
double _n_b_27170=(0.92*(0.08+(0.92*_n_lit_27169)));
(void)(((((_n_acov_27150=(_n_acov_27150+(_n_a_27163*0.25))),(_n_ar_27151=(_n_ar_27151+(((_n_a_27163*_n_cr_27164)*_n_b_27170)*0.25)))),(_n_ag_27152=(_n_ag_27152+(((_n_a_27163*_n_cg_27165)*_n_b_27170)*0.25)))),(_n_ab_27153=(_n_ab_27153+(((_n_a_27163*_n_cb_27166)*_n_b_27170)*0.25)))));

}
}
double _n_px_27171=(((_n_x_27148+0.5)-d::at(_n_SC_26868,0.0))/_n_SR_26869);
double _n_py_27172=((-d::number(((_n_r_27147+0.5)-d::at(_n_SC_26868,1.0))))/_n_SR_26869);
double _n_q2_27173=((_n_px_27171*_n_px_27171)+(_n_py_27172*_n_py_27172));
if(d::truth((_n_pcov_27154>0.0))){d::check_cancel();double _n_qc_27174=([&](){auto _n_argument_27435=0.999;auto _n_argument_27436=std::sqrt(_n_q2_27173);return d::minimum({_n_argument_27435,_n_argument_27436});})();
double _n_nz_27175=std::sqrt((1.0-(_n_qc_27174*_n_qc_27174)));
double _n_nx_27176=(d::truth((_n_q2_27173>0.998))?((_n_px_27171/std::sqrt(_n_q2_27173))*_n_qc_27174):_n_px_27171);
double _n_ny_27177=(d::truth((_n_q2_27173>0.998))?((_n_py_27172/std::sqrt(_n_q2_27173))*_n_qc_27174):_n_py_27172);
double _n_ndl_27178=(((_n_nx_27176*d::at(_n_LS_26885,0.0))+(_n_ny_27177*d::at(_n_LS_26885,1.0)))+(_n_nz_27175*d::at(_n_LS_26885,2.0)));
double _n_shade_27179=1.0;
double _n_dn_27180=(((d::at(_n_NR_26882,0.0)*d::at(_n_LS_26885,0.0))+(d::at(_n_NR_26882,1.0)*d::at(_n_LS_26885,1.0)))+(d::at(_n_NR_26882,2.0)*d::at(_n_LS_26885,2.0)));
double _n_tt_27181=((-d::number((((d::at(_n_NR_26882,0.0)*_n_nx_27176)+(d::at(_n_NR_26882,1.0)*_n_ny_27177))+(d::at(_n_NR_26882,2.0)*_n_nz_27175))))/_n_dn_27180);
if(d::truth((_n_tt_27181>0.0))){d::check_cancel();double _n_qx_27182=(_n_nx_27176+(_n_tt_27181*d::at(_n_LS_26885,0.0)));
double _n_qy_27183=(_n_ny_27177+(_n_tt_27181*d::at(_n_LS_26885,1.0)));
double _n_qz_27184=(_n_nz_27175+(_n_tt_27181*d::at(_n_LS_26885,2.0)));
(void)((_n_shade_27179=(1.0-(0.88*d::at(_n_ring_26895(d::hypot(std::initializer_list<double>{_n_qx_27182,_n_qy_27183,_n_qz_27184})),0.0)))));
}
double _n_day_27185=([&](){auto _n_left_27437=_n_smooth_26892((-d::number(0.03)),0.14,_n_ndl_27178);auto _n_right_27438=(0.3+(0.85*std::sqrt(_n_clamp_26891(_n_ndl_27178))));return (_n_left_27437*_n_right_27438);})();
double _n_limb_27186=(0.5+(0.5*std::sqrt(_n_nz_27175)));
(void)(([&](){auto&& _n_array_27439=this->_n_pl_26930;auto _n_index_27440=_n_k_27149;auto _n_value_27441=(((_n_day_27185*_n_limb_27186)*_n_shade_27179)+(0.05*_n_limb_27186));d::put(_n_array_27439,_n_index_27440,_n_value_27441);return _n_value_27441;})());
double _n_sy_27187=(((_n_nx_27176*d::at(_n_NR_26882,0.0))+(_n_ny_27177*d::at(_n_NR_26882,1.0)))+(_n_nz_27175*d::at(_n_NR_26882,2.0)));
double _n_s1_27188=(((_n_nx_27176*d::at(_n_E1_26883,0.0))+(_n_ny_27177*d::at(_n_E1_26883,1.0)))+(_n_nz_27175*d::at(_n_E1_26883,2.0)));
double _n_s2_27189=(((_n_nx_27176*d::at(_n_E2_26884,0.0))+(_n_ny_27177*d::at(_n_E2_26884,1.0)))+(_n_nz_27175*d::at(_n_E2_26884,2.0)));
(void)(([&](){auto&& _n_array_27442=this->_n_pu_26931;auto _n_index_27443=_n_k_27149;auto _n_value_27444=(std::atan2(_n_s1_27188,_n_s2_27189)/(ascii::PI*2.0));d::put(_n_array_27442,_n_index_27443,_n_value_27444);return _n_value_27444;})());
(void)(([&](){auto&& _n_array_27445=this->_n_pv_26932;auto _n_index_27446=_n_k_27149;auto _n_value_27447=(((0.5-(std::asin(([&](){auto _n_argument_27448=(-d::number(1.0));auto _n_argument_27449=d::minimum({1.0,_n_sy_27187});return d::maximum({_n_argument_27448,_n_argument_27449});})())/ascii::PI))*this->_n_TH_26917)-0.5);d::put(_n_array_27445,_n_index_27446,_n_value_27447);return _n_value_27447;})());
(void)(([&](){auto&& _n_array_27450=this->_n_pa_26929;auto _n_index_27451=_n_k_27149;auto _n_value_27452=_n_pcov_27154;d::put(_n_array_27450,_n_index_27451,_n_value_27452);return _n_value_27452;})());
(void)(([&](){auto&& _n_array_27453=this->_n_pz_26933;auto _n_index_27454=_n_k_27149;auto _n_value_27455=_n_nz_27175;d::put(_n_array_27453,_n_index_27454,_n_value_27455);return _n_value_27455;})());
}
double _n_zr_27190=((-d::number(((d::at(_n_NR_26882,0.0)*_n_px_27171)+(d::at(_n_NR_26882,1.0)*_n_py_27172))))/d::at(_n_NR_26882,2.0));
double _n_rr_27191=std::sqrt((_n_q2_27173+(_n_zr_27190*_n_zr_27190)));
if(d::truth((_n_acov_27150>0.002))){d::check_cancel();(void)(((((([&](){auto&& _n_array_27456=this->_n_ra_26934;auto _n_index_27457=_n_k_27149;auto _n_value_27458=_n_acov_27150;d::put(_n_array_27456,_n_index_27457,_n_value_27458);return _n_value_27458;})(),([&](){auto&& _n_array_27459=this->_n_rcr_26935;auto _n_index_27460=_n_k_27149;auto _n_value_27461=_n_ar_27151;d::put(_n_array_27459,_n_index_27460,_n_value_27461);return _n_value_27461;})()),([&](){auto&& _n_array_27462=this->_n_rcg_26936;auto _n_index_27463=_n_k_27149;auto _n_value_27464=_n_ag_27152;d::put(_n_array_27462,_n_index_27463,_n_value_27464);return _n_value_27464;})()),([&](){auto&& _n_array_27465=this->_n_rcb_26937;auto _n_index_27466=_n_k_27149;auto _n_value_27467=_n_ab_27153;d::put(_n_array_27465,_n_index_27466,_n_value_27467);return _n_value_27467;})()),([&](){auto&& _n_array_27468=this->_n_rz_26938;auto _n_index_27469=_n_k_27149;auto _n_value_27470=_n_zr_27190;d::put(_n_array_27468,_n_index_27469,_n_value_27470);return _n_value_27470;})()));
(void)(([&](){auto&& _n_array_27471=this->_n_rbin_26939;auto _n_index_27472=_n_k_27149;auto _n_value_27473=([&](){auto _n_argument_27474=0.0;auto _n_argument_27475=([&](){auto _n_argument_27476=(this->_n_RB_26922-1.0);auto _n_argument_27477=std::floor((((_n_rr_27191-this->_n_R0_26924)/(this->_n_R1_26925-this->_n_R0_26924))*this->_n_RB_26922));return d::minimum({_n_argument_27476,_n_argument_27477});})();return d::maximum({_n_argument_27474,_n_argument_27475});})();d::put(_n_array_27471,_n_index_27472,_n_value_27473);return _n_value_27473;})());
double _n_th_27192=std::atan2((((_n_px_27171*d::at(_n_E2_26884,0.0))+(_n_py_27172*d::at(_n_E2_26884,1.0)))+(_n_zr_27190*d::at(_n_E2_26884,2.0))),(((_n_px_27171*d::at(_n_E1_26883,0.0))+(_n_py_27172*d::at(_n_E1_26883,1.0)))+(_n_zr_27190*d::at(_n_E1_26883,2.0))));
(void)(([&](){auto&& _n_array_27478=this->_n_rth_26940;auto _n_index_27479=_n_k_27149;auto _n_value_27480=_n_th_27192;d::put(_n_array_27478,_n_index_27479,_n_value_27480);return _n_value_27480;})());
}
if((d::truth((_n_pcov_27154>0.0))||d::truth((_n_acov_27150>0.002)))){d::check_cancel();(void)(this->_n_sat_26928.push(_n_k_27149));
}
}}
}}
this->_n_grains_26942=d::map(_n_PLUMES_26879,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::Array<std::array<double,6>,false>{auto _n_binding_27481=_a0;
double _n_ph_27193=d::at(_n_binding_27481,2.0);
double _n_sp_27194=d::at(_n_binding_27481,3.0);
double _n_pi_27195=_a1;
{
d::Array<std::array<double,6>,false> _n_list_27196=d::Array<std::array<double,6>,false>{};
{double _n_i_27197=0.0;
for(;d::truth((_n_i_27197<150.0));(void)((_n_i_27197++))){d::check_cancel();double _n_life_27198=(16.0+(12.0*_n_hash_26888(_n_i_27197,((_n_pi_27195*7.0)+1.0))));
double _n_vy_27199=((_n_ph_27193*(0.75+(0.5*_n_hash_26888(_n_i_27197,((_n_pi_27195*7.0)+2.0)))))/(_n_life_27198*0.8));
double _n_vx_27200=((((_n_hash_26888(_n_i_27197,((_n_pi_27195*7.0)+3.0))-0.5)*3.2)*_n_sp_27194)*_n_vy_27199);
(void)(_n_list_27196.push(std::array<double,6>{_n_hash_26888(_n_i_27197,((_n_pi_27195*7.0)+4.0)),_n_life_27198,_n_vx_27200,_n_vy_27199,((_n_vy_27199/_n_life_27198)*0.35),(_n_hash_26888(_n_i_27197,((_n_pi_27195*7.0)+5.0))*6.28)}));
}}
return _n_list_27196;

}
});
this->_n_live_26943=d::Array<uint8_t,true>(size_t(this->_n_N_26899));
for(auto &&_n_item_27482:this->_n_sat_26928){d::check_cancel();double _n_k_27201=_n_item_27482;
(void)(([&](){auto&& _n_array_27483=this->_n_live_26943;auto _n_index_27484=_n_k_27201;auto _n_value_27485=1.0;d::put(_n_array_27483,_n_index_27484,_n_value_27485);return _n_value_27485;})());
}
{double _n_i_27205=0.0;
for(;d::truth((_n_i_27205<720.0));(void)((_n_i_27205++))){d::check_cancel();auto _n_binding_27486=this->_n_orbit_26944((((_n_i_27205/720.0)*ascii::PI)*2.0));
double _n_ox_27206=d::at(_n_binding_27486,0.0);
double _n_oy_27207=d::at(_n_binding_27486,1.0);
double _n_cx_27208=d::round((d::at(_n_SC_26868,0.0)+(_n_ox_27206*_n_SR_26869)));
double _n_cy_27209=d::round((d::at(_n_SC_26868,1.0)-(_n_oy_27207*_n_SR_26869)));
{double _n_dy_27210=(-d::number(3.0));
for(;d::truth((_n_dy_27210<=3.0));(void)((_n_dy_27210++))){d::check_cancel();{double _n_dx_27211=(-d::number(3.0));
for(;d::truth((_n_dx_27211<=3.0));(void)((_n_dx_27211++))){d::check_cancel();double _n_x_27212=(_n_cx_27208+_n_dx_27211);
double _n_r_27213=(_n_cy_27209+_n_dy_27210);
if((((d::truth((_n_x_27212>=0.0))&&d::truth((_n_x_27212<_n_W_26862)))&&d::truth((_n_r_27213>=0.0)))&&d::truth((_n_r_27213<_n_H_26863)))){d::check_cancel();(void)(([&](){auto&& _n_array_27487=this->_n_live_26943;auto _n_index_27488=((_n_r_27213*_n_W_26862)+_n_x_27212);auto _n_value_27489=1.0;d::put(_n_array_27487,_n_index_27488,_n_value_27489);return _n_value_27489;})());
}
}}
}}
}}
for(auto &&_n_item_27490:_n_PLUMES_26879){d::check_cancel();auto _n_binding_27491=_n_item_27490;
double _n_bx_27214=d::at(_n_binding_27491,0.0);
double _n_by_27215=d::at(_n_binding_27491,1.0);
double _n_ph_27216=d::at(_n_binding_27491,2.0);
double _n_sp_27217=d::at(_n_binding_27491,3.0);
{
{double _n_r_27218=d::maximum({0.0,((_n_by_27215-_n_ph_27216)-8.0)});
for(;d::truth((_n_r_27218<=_n_by_27215));(void)((_n_r_27218++))){d::check_cancel();double _n_hw_27219=(std::ceil(((0.7+(((_n_by_27215-_n_r_27218)*_n_sp_27217)*1.4))*2.2))+3.0);
{double _n_x_27220=([&](){auto _n_argument_27492=0.0;auto _n_argument_27493=std::floor((_n_bx_27214-_n_hw_27219));return d::maximum({_n_argument_27492,_n_argument_27493});})();
for(;d::truth((_n_x_27220<=([&](){auto _n_argument_27494=(_n_W_26862-1.0);auto _n_argument_27495=std::ceil((_n_bx_27214+_n_hw_27219));return d::minimum({_n_argument_27494,_n_argument_27495});})()));(void)((_n_x_27220++))){d::check_cancel();(void)(([&](){auto&& _n_array_27496=this->_n_live_26943;auto _n_index_27497=((_n_r_27218*_n_W_26862)+_n_x_27220);auto _n_value_27498=1.0;d::put(_n_array_27496,_n_index_27497,_n_value_27498);return _n_value_27498;})());
}}
}}

}
}
{double _n_r_27221=(d::at(_n_SUN_26872,1.0)-14.0);
for(;d::truth((_n_r_27221<=(d::at(_n_SUN_26872,1.0)+14.0)));(void)((_n_r_27221++))){d::check_cancel();{double _n_x_27222=(d::at(_n_SUN_26872,0.0)-26.0);
for(;d::truth((_n_x_27222<=(d::at(_n_SUN_26872,0.0)+26.0)));(void)((_n_x_27222++))){d::check_cancel();if((d::truth((_n_x_27222>=0.0))&&d::truth((_n_x_27222<_n_W_26862)))){d::check_cancel();(void)(([&](){auto&& _n_array_27499=this->_n_live_26943;auto _n_index_27500=((_n_r_27221*_n_W_26862)+_n_x_27222);auto _n_value_27501=1.0;d::put(_n_array_27499,_n_index_27500,_n_value_27501);return _n_value_27501;})());
}
}}
}}
for(auto &&_n_item_27502:_n_BRIGHT_26878){d::check_cancel();auto _n_binding_27503=_n_item_27502;
double _n_x_27223=d::at(_n_binding_27503,0.0);
double _n_r_27224=d::at(_n_binding_27503,1.0);
{double _n_dy_27225=(-d::number(1.0));
for(;d::truth((_n_dy_27225<=1.0));(void)((_n_dy_27225++))){d::check_cancel();{double _n_dx_27226=(-d::number(1.0));
for(;d::truth((_n_dx_27226<=1.0));(void)((_n_dx_27226++))){d::check_cancel();(void)(([&](){auto&& _n_array_27504=this->_n_live_26943;auto _n_index_27505=((((_n_r_27224+_n_dy_27225)*_n_W_26862)+_n_x_27223)+_n_dx_27226);auto _n_value_27506=1.0;d::put(_n_array_27504,_n_index_27505,_n_value_27506);return _n_value_27506;})());
}}
}}
}
this->_n_cells_26945=d::Array<double,false>{};
{double _n_k_27227=0.0;
for(;d::truth((_n_k_27227<this->_n_N_26899));(void)((_n_k_27227++))){d::check_cancel();if(d::truth(d::at(this->_n_live_26943,_n_k_27227))){d::check_cancel();(void)(this->_n_cells_26945.push(_n_k_27227));
}
}}
this->_n_dirty_26946=d::Array<uint8_t,true>(size_t(_n_H_26863));
for(auto &&_n_item_27507:this->_n_cells_26945){d::check_cancel();double _n_k_27228=_n_item_27507;
(void)(([&](){auto&& _n_array_27508=this->_n_dirty_26946;auto _n_index_27509=double(d::i32((_n_k_27228/_n_W_26862))|d::i32(0.0));auto _n_value_27510=1.0;d::put(_n_array_27508,_n_index_27509,_n_value_27510);return _n_value_27510;})());
}
this->_n_fr_26947=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_fg_26948=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_fb_26949=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_ff_26950=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_fc_26951=d::Array<float,true>(size_t(this->_n_N_26899));
this->_n_lines_26952=d::Array<d::String,false>{};
{double _n_r_27229=0.0;
for(;d::truth((_n_r_27229<_n_H_26863));(void)((_n_r_27229++))){d::check_cancel();(void)(this->_n_lines_26952.push(d::join(this->_n_chars_26902.slice((_n_r_27229*_n_W_26862),((_n_r_27229+1.0)*_n_W_26862)),d::String(u""))));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_27321> _a1) mutable ->d::String{double _n_t_27230=_a0;
auto _n_binding_27513=(d::present(_a1)?_a1:([&](){auto _n_object_27512=std::make_shared<_n_Record_27321>();return _n_object_27512;})());
std::optional<d::Array<uint8_t,true>> _n_color_27231=_n_binding_27513->_p_color;
{
for(auto &&_n_item_27514:this->_n_cells_26945){d::check_cancel();double _n_k_27232=_n_item_27514;
(void)(((((([&](){auto&& _n_array_27515=this->_n_fr_26947;auto _n_index_27516=_n_k_27232;auto _n_value_27517=d::at(this->_n_sr_26905,_n_k_27232);d::put(_n_array_27515,_n_index_27516,_n_value_27517);return _n_value_27517;})(),([&](){auto&& _n_array_27518=this->_n_fg_26948;auto _n_index_27519=_n_k_27232;auto _n_value_27520=d::at(this->_n_sg_26906,_n_k_27232);d::put(_n_array_27518,_n_index_27519,_n_value_27520);return _n_value_27520;})()),([&](){auto&& _n_array_27521=this->_n_fb_26949;auto _n_index_27522=_n_k_27232;auto _n_value_27523=d::at(this->_n_sb_26907,_n_k_27232);d::put(_n_array_27521,_n_index_27522,_n_value_27523);return _n_value_27523;})()),([&](){auto&& _n_array_27524=this->_n_ff_26950;auto _n_index_27525=_n_k_27232;auto _n_value_27526=d::at(this->_n_sf_26908,_n_k_27232);d::put(_n_array_27524,_n_index_27525,_n_value_27526);return _n_value_27526;})()),([&](){auto&& _n_array_27527=this->_n_fc_26951;auto _n_index_27528=_n_k_27232;auto _n_value_27529=d::at(this->_n_scap_26909,_n_k_27232);d::put(_n_array_27527,_n_index_27528,_n_value_27529);return _n_value_27529;})()));
}
auto _n_binding_27530=this->_n_orbit_26944((1.9+(((_n_t_27230/_n_MOON_T_26874)*ascii::PI)*2.0)));
double _n_mx_27233=d::at(_n_binding_27530,0.0);
double _n_my_27234=d::at(_n_binding_27530,1.0);
double _n_mz_27235=d::at(_n_binding_27530,2.0);
double _n_msx_27236=(d::at(_n_SC_26868,0.0)+(_n_mx_27233*_n_SR_26869));
double _n_msy_27237=(d::at(_n_SC_26868,1.0)-(_n_my_27234*_n_SR_26869));
auto _n_moonAt_27238=[&]( double _a0) mutable ->double{double _n_k_27239=_a0;
{
double _n_x_27240=d::mod(_n_k_27239,_n_W_26862);
double _n_r_27241=double(d::i32((_n_k_27239/_n_W_26862))|d::i32(0.0));
double _n_d_27242=d::hypot(std::initializer_list<double>{((_n_x_27240+0.5)-_n_msx_27236),((_n_r_27241+0.5)-_n_msy_27237)});
return _n_smooth_26892(1.9,1.2,_n_d_27242);

}
};
auto _n_moonLit_27243=[&]( double _a0) mutable ->double{double _n_k_27244=_a0;
{
double _n_x_27245=d::mod(_n_k_27244,_n_W_26862);
double _n_r_27246=double(d::i32((_n_k_27244/_n_W_26862))|d::i32(0.0));
return (0.35+(0.65*_n_smooth_26892((-d::number(0.4)),0.6,(((((_n_x_27245+0.5)-_n_msx_27236)*d::at(_n_LS_26885,0.0))-(((_n_r_27246+0.5)-_n_msy_27237)*d::at(_n_LS_26885,1.0)))/1.4))));

}
};
double _n_spin_27247=(_n_t_27230*0.0025);
auto _n_lay_27248=[&]( double _a0,double _a1,double _a2,double _a3,double _a4) mutable ->void{double _n_k_27249=_a0;
double _n_c_27250=_a1;
double _n_cr_27251=_a2;
double _n_cg_27252=_a3;
double _n_cb_27253=_a4;
{
(void)(((([&](){auto&& _n_array_27531=this->_n_fr_26947;auto _n_index_27532=_n_k_27249;auto _n_value_27533=_n_mix_26893(d::at(this->_n_fr_26947,_n_k_27249),_n_cr_27251,_n_c_27250);d::put(_n_array_27531,_n_index_27532,_n_value_27533);return _n_value_27533;})(),([&](){auto&& _n_array_27534=this->_n_fg_26948;auto _n_index_27535=_n_k_27249;auto _n_value_27536=_n_mix_26893(d::at(this->_n_fg_26948,_n_k_27249),_n_cg_27252,_n_c_27250);d::put(_n_array_27534,_n_index_27535,_n_value_27536);return _n_value_27536;})()),([&](){auto&& _n_array_27537=this->_n_fb_26949;auto _n_index_27538=_n_k_27249;auto _n_value_27539=_n_mix_26893(d::at(this->_n_fb_26949,_n_k_27249),_n_cb_27253,_n_c_27250);d::put(_n_array_27537,_n_index_27538,_n_value_27539);return _n_value_27539;})()));

}
};
for(auto &&_n_item_27540:this->_n_sat_26928){d::check_cancel();double _n_k_27254=_n_item_27540;
{
double _n_m_27255=_n_moonAt_27238(_n_k_27254);
bool _n_mzBehind_27256=([&]()->bool{auto _n_logical_27541=(_n_mz_27235<d::at(this->_n_pz_26933,_n_k_27254));return d::truth(_n_logical_27541)?(d::at(this->_n_pa_26929,_n_k_27254)>0.5):_n_logical_27541;})();
if(((d::truth((_n_m_27255>0.0))&&d::truth((!d::truth(_n_mzBehind_27256))))&&d::truth(([&]()->bool{auto _n_logical_27542=(d::at(this->_n_ra_26934,_n_k_27254)==0.0);return d::truth(_n_logical_27542)?_n_logical_27542:(_n_mz_27235<d::at(this->_n_rz_26938,_n_k_27254));})()))){d::check_cancel();(void)(([&](){auto _n_argument_27543=_n_k_27254;auto _n_argument_27544=_n_m_27255;auto _n_argument_27545=(0.82*_n_moonLit_27243(_n_k_27254));auto _n_argument_27546=(0.8*_n_moonLit_27243(_n_k_27254));auto _n_argument_27547=(0.76*_n_moonLit_27243(_n_k_27254));return _n_lay_27248(_n_argument_27543,_n_argument_27544,_n_argument_27545,_n_argument_27546,_n_argument_27547);})());
}
bool _n_ringOver_27257=([&]()->bool{auto _n_logical_27548=(d::at(this->_n_ra_26934,_n_k_27254)>0.0);return d::truth(_n_logical_27548)?([&]()->bool{auto _n_logical_27549=(d::at(this->_n_pa_26929,_n_k_27254)==0.0);return d::truth(_n_logical_27549)?_n_logical_27549:(d::at(this->_n_rz_26938,_n_k_27254)>(d::at(this->_n_pz_26933,_n_k_27254)-0.001));})():_n_logical_27548;})();
auto _n_drawRing_27258=[&]( ) mutable ->void{{
double _n_b_27259=d::at(this->_n_rbin_26939,_n_k_27254);
double _n_th_27260=((d::at(this->_n_rth_26940,_n_k_27254)-(d::at(this->_n_omega_26927,_n_b_27259)*_n_t_27230))/(ascii::PI*2.0));
(void)((_n_th_27260=(d::mod((d::mod(_n_th_27260,1.0)+1.0),1.0)*this->_n_TB_26923)));
double _n_j0_27261=double(d::i32(_n_th_27260)|d::i32(0.0));
double _n_j1_27262=d::mod((_n_j0_27261+1.0),this->_n_TB_26923);
double _n_aj_27263=(_n_th_27260-_n_j0_27261);
double _n_s_27264=((d::at(this->_n_rt_26926,((_n_b_27259*this->_n_TB_26923)+_n_j0_27261))*(1.0-_n_aj_27263))+(d::at(this->_n_rt_26926,((_n_b_27259*this->_n_TB_26923)+_n_j1_27262))*_n_aj_27263));
double _n_sp_27265=(((d::at(this->_n_rth_26940,_n_k_27254)-0.4)-(_n_t_27230*0.016))/(ascii::PI*2.0));
(void)((_n_sp_27265=std::fabs((_n_sp_27265-(d::round((_n_sp_27265*2.0))/2.0)))));
(void)((_n_s_27264=(_n_s_27264*(1.0-([&](){auto _n_left_27550=([&](){auto _n_left_27552=(0.3*std::exp((-d::number(std::pow((_n_sp_27265/0.012),2.0)))));auto _n_right_27553=_n_smooth_26892(1.6,1.7,(this->_n_R0_26924+(((this->_n_R1_26925-this->_n_R0_26924)*_n_b_27259)/this->_n_RB_26922)));return (_n_left_27552*_n_right_27553);})();auto _n_right_27551=_n_smooth_26892(1.92,1.82,(this->_n_R0_26924+(((this->_n_R1_26925-this->_n_R0_26924)*_n_b_27259)/this->_n_RB_26922)));return (_n_left_27550*_n_right_27551);})()))));
double _n_a_27266=d::at(this->_n_ra_26934,_n_k_27254);
(void)(((([&](){auto&& _n_array_27554=this->_n_fr_26947;auto _n_index_27555=_n_k_27254;auto _n_value_27556=((d::at(this->_n_fr_26947,_n_k_27254)*(1.0-_n_a_27266))+(d::at(this->_n_rcr_26935,_n_k_27254)*_n_s_27264));d::put(_n_array_27554,_n_index_27555,_n_value_27556);return _n_value_27556;})(),([&](){auto&& _n_array_27557=this->_n_fg_26948;auto _n_index_27558=_n_k_27254;auto _n_value_27559=((d::at(this->_n_fg_26948,_n_k_27254)*(1.0-_n_a_27266))+(d::at(this->_n_rcg_26936,_n_k_27254)*_n_s_27264));d::put(_n_array_27557,_n_index_27558,_n_value_27559);return _n_value_27559;})()),([&](){auto&& _n_array_27560=this->_n_fb_26949;auto _n_index_27561=_n_k_27254;auto _n_value_27562=((d::at(this->_n_fb_26949,_n_k_27254)*(1.0-_n_a_27266))+(d::at(this->_n_rcb_26937,_n_k_27254)*_n_s_27264));d::put(_n_array_27560,_n_index_27561,_n_value_27562);return _n_value_27562;})()));
(void)(([&](){auto&& _n_array_27563=this->_n_fc_26951;auto _n_index_27564=_n_k_27254;auto _n_value_27565=1.0;d::put(_n_array_27563,_n_index_27564,_n_value_27565);return _n_value_27565;})());

}
};
if((d::truth((d::at(this->_n_ra_26934,_n_k_27254)>0.0))&&d::truth((!d::truth(_n_ringOver_27257))))){d::check_cancel();(void)(_n_drawRing_27258());
}
if(d::truth((d::at(this->_n_pa_26929,_n_k_27254)>0.0))){d::check_cancel();double _n_u_27267=(d::at(this->_n_pu_26931,_n_k_27254)+_n_spin_27247);
double _n_v_27268=d::at(this->_n_pv_26932,_n_k_27254);
double _n_l_27269=d::at(this->_n_pl_26930,_n_k_27254);
(void)(([&](){auto _n_argument_27566=_n_k_27254;auto _n_argument_27567=d::at(this->_n_pa_26929,_n_k_27254);auto _n_argument_27568=(this->_n_sample_26921(this->_n_tr_26918,_n_u_27267,_n_v_27268)*_n_l_27269);auto _n_argument_27569=(this->_n_sample_26921(this->_n_tg_26919,_n_u_27267,_n_v_27268)*_n_l_27269);auto _n_argument_27570=(this->_n_sample_26921(this->_n_tb_26920,_n_u_27267,_n_v_27268)*_n_l_27269);return _n_lay_27248(_n_argument_27566,_n_argument_27567,_n_argument_27568,_n_argument_27569,_n_argument_27570);})());
(void)(([&](){auto&& _n_array_27571=this->_n_ff_26950;auto _n_index_27572=_n_k_27254;auto _n_value_27573=((0.1*d::minimum({1.0,_n_l_27269}))*d::at(this->_n_pa_26929,_n_k_27254));d::put(_n_array_27571,_n_index_27572,_n_value_27573);return _n_value_27573;})());
(void)(([&](){auto&& _n_array_27574=this->_n_fc_26951;auto _n_index_27575=_n_k_27254;auto _n_value_27576=(0.35+(0.7*_n_clamp_26891(d::maximum({d::at(this->_n_fr_26947,_n_k_27254),d::at(this->_n_fg_26948,_n_k_27254),d::at(this->_n_fb_26949,_n_k_27254)}))));d::put(_n_array_27574,_n_index_27575,_n_value_27576);return _n_value_27576;})());
}
if(d::truth(_n_ringOver_27257)){d::check_cancel();(void)(_n_drawRing_27258());
}
if((d::truth((_n_m_27255>0.0))&&d::truth((_n_mz_27235>d::maximum({(d::truth((d::at(this->_n_pa_26929,_n_k_27254)>0.5))?d::at(this->_n_pz_26933,_n_k_27254):(-d::number(9.0))),(d::truth((d::at(this->_n_ra_26934,_n_k_27254)>0.0))?d::at(this->_n_rz_26938,_n_k_27254):(-d::number(9.0)))}))))){d::check_cancel();(void)(([&](){auto _n_argument_27577=_n_k_27254;auto _n_argument_27578=_n_m_27255;auto _n_argument_27579=(0.82*_n_moonLit_27243(_n_k_27254));auto _n_argument_27580=(0.8*_n_moonLit_27243(_n_k_27254));auto _n_argument_27581=(0.76*_n_moonLit_27243(_n_k_27254));return _n_lay_27248(_n_argument_27577,_n_argument_27578,_n_argument_27579,_n_argument_27580,_n_argument_27581);})());
}

}
}
{double _n_r_27270=([&](){auto _n_argument_27582=0.0;auto _n_argument_27583=std::floor((_n_msy_27237-2.0));return d::maximum({_n_argument_27582,_n_argument_27583});})();
for(;d::truth((_n_r_27270<=([&](){auto _n_argument_27584=_n_HZ_26864;auto _n_argument_27585=std::ceil((_n_msy_27237+2.0));return d::minimum({_n_argument_27584,_n_argument_27585});})()));(void)((_n_r_27270++))){d::check_cancel();{double _n_x_27271=([&](){auto _n_argument_27586=0.0;auto _n_argument_27587=std::floor((_n_msx_27236-2.0));return d::maximum({_n_argument_27586,_n_argument_27587});})();
for(;d::truth((_n_x_27271<=([&](){auto _n_argument_27588=(_n_W_26862-1.0);auto _n_argument_27589=std::ceil((_n_msx_27236+2.0));return d::minimum({_n_argument_27588,_n_argument_27589});})()));(void)((_n_x_27271++))){d::check_cancel();double _n_k_27272=((_n_r_27270*_n_W_26862)+_n_x_27271);
if(((d::truth(d::at(this->_n_solid_26910,_n_k_27272))||d::truth((d::at(this->_n_pa_26929,_n_k_27272)>0.0)))||d::truth((d::at(this->_n_ra_26934,_n_k_27272)>0.0)))){d::check_cancel();continue;
}
double _n_m_27273=_n_moonAt_27238(_n_k_27272);
if(d::truth((_n_m_27273>0.0))){d::check_cancel();(void)((([&](){auto _n_argument_27590=_n_k_27272;auto _n_argument_27591=_n_m_27273;auto _n_argument_27592=(0.82*_n_moonLit_27243(_n_k_27272));auto _n_argument_27593=(0.8*_n_moonLit_27243(_n_k_27272));auto _n_argument_27594=(0.76*_n_moonLit_27243(_n_k_27272));return _n_lay_27248(_n_argument_27590,_n_argument_27591,_n_argument_27592,_n_argument_27593,_n_argument_27594);})(),([&](){auto&& _n_array_27595=this->_n_fc_26951;auto _n_index_27596=_n_k_27272;auto _n_value_27597=1.0;d::put(_n_array_27595,_n_index_27596,_n_value_27597);return _n_value_27597;})()));
}
}}
}}
{double _n_p_27274=0.0;
for(;d::truth((_n_p_27274<double(_n_PLUMES_26879.size())));(void)((_n_p_27274++))){d::check_cancel();auto _n_binding_27598=d::at(_n_PLUMES_26879,_n_p_27274);
double _n_bx_27275=d::at(_n_binding_27598,0.0);
double _n_by_27276=d::at(_n_binding_27598,1.0);
double _n_ph_27277=d::at(_n_binding_27598,2.0);
double _n_sp_27278=d::at(_n_binding_27598,3.0);
double _n_pb_27279=d::at(_n_binding_27598,4.0);
double _n_fs_27280=(_n_pb_27279*(0.55+(1.3*std::exp(((-d::number(std::fabs((_n_bx_27275-d::at(_n_SUN_26872,0.0)))))/25.0)))));
{double _n_r_27281=d::maximum({0.0,((_n_by_27276-_n_ph_27277)-8.0)});
for(;d::truth((_n_r_27281<_n_by_27276));(void)((_n_r_27281++))){d::check_cancel();double _n_h_27282=(_n_by_27276-(_n_r_27281+0.5));
double _n_w_27283=(0.7+((_n_h_27282*_n_sp_27278)*1.4));
double _n_hw_27284=std::ceil((_n_w_27283*2.2));
{double _n_x_27285=([&](){auto _n_argument_27599=0.0;auto _n_argument_27600=std::floor((_n_bx_27275-_n_hw_27284));return d::maximum({_n_argument_27599,_n_argument_27600});})();
for(;d::truth((_n_x_27285<=([&](){auto _n_argument_27601=(_n_W_26862-1.0);auto _n_argument_27602=std::ceil((_n_bx_27275+_n_hw_27284));return d::minimum({_n_argument_27601,_n_argument_27602});})()));(void)((_n_x_27285++))){d::check_cancel();double _n_k_27286=((_n_r_27281*_n_W_26862)+_n_x_27285);
double _n_dx_27287=((_n_x_27285+0.5)-_n_bx_27275);
double _n_fan_27288=std::exp((-d::number(std::pow((_n_dx_27287/_n_w_27283),2.0))));
double _n_rise_27289=_n_noise_26889(((_n_dx_27287*0.22)+(_n_p_27274*9.0)),((_n_h_27282-(_n_t_27230*1.3))*0.11),0.0);
double _n_d_27290=((([&](){auto _n_left_27603=(((_n_fan_27288*(3.0/(_n_w_27283+2.0)))*_n_smooth_26892((_n_ph_27277*1.2),(_n_ph_27277*0.25),_n_h_27282))*(0.5+(0.8*_n_rise_27289)));auto _n_right_27604=_n_smooth_26892(0.0,5.0,_n_h_27282);return (_n_left_27603*_n_right_27604);})()*_n_fs_27280)*0.55);
(void)((_n_d_27290=d::maximum({0.0,(_n_d_27290-0.03)})));
(void)(((([&](){auto&& _n_array_27605=this->_n_fr_26947;auto _n_index_27606=_n_k_27286;auto _n_value_27607=(d::at(_n_array_27605,_n_index_27606)+(_n_d_27290*0.72));d::put(_n_array_27605,_n_index_27606,_n_value_27607);return _n_value_27607;})(),([&](){auto&& _n_array_27608=this->_n_fg_26948;auto _n_index_27609=_n_k_27286;auto _n_value_27610=(d::at(_n_array_27608,_n_index_27609)+(_n_d_27290*0.86));d::put(_n_array_27608,_n_index_27609,_n_value_27610);return _n_value_27610;})()),([&](){auto&& _n_array_27611=this->_n_fb_26949;auto _n_index_27612=_n_k_27286;auto _n_value_27613=(d::at(_n_array_27611,_n_index_27612)+_n_d_27290);d::put(_n_array_27611,_n_index_27612,_n_value_27613);return _n_value_27613;})()));
if(d::truth((_n_d_27290>0.05))){d::check_cancel();(void)((([&](){auto&& _n_array_27614=this->_n_fc_26951;auto _n_index_27615=_n_k_27286;auto _n_value_27616=1.0;d::put(_n_array_27614,_n_index_27615,_n_value_27616);return _n_value_27616;})(),([&](){auto&& _n_array_27617=this->_n_ff_26950;auto _n_index_27618=_n_k_27286;auto _n_value_27619=([&](){auto _n_argument_27620=d::at(this->_n_ff_26950,_n_k_27286);auto _n_argument_27621=(0.12*_n_smooth_26892(0.05,0.3,_n_d_27290));return d::maximum({_n_argument_27620,_n_argument_27621});})();d::put(_n_array_27617,_n_index_27618,_n_value_27619);return _n_value_27619;})()));
}
}}
}}
for(auto &&_n_item_27622:d::at(this->_n_grains_26942,_n_p_27274)){d::check_cancel();auto _n_binding_27623=_n_item_27622;
double _n_phase_27291=d::at(_n_binding_27623,0.0);
double _n_life_27292=d::at(_n_binding_27623,1.0);
double _n_vx_27293=d::at(_n_binding_27623,2.0);
double _n_vy_27294=d::at(_n_binding_27623,3.0);
double _n_g_27295=d::at(_n_binding_27623,4.0);
double _n_tw_27296=d::at(_n_binding_27623,5.0);
{
double _n_age_27297=(d::mod((d::mod(((_n_t_27230/_n_life_27292)+_n_phase_27291),1.0)+1.0),1.0)*_n_life_27292);
double _n_gx_27298=(_n_bx_27275+(_n_vx_27293*_n_age_27297));
double _n_gy_27299=((_n_by_27276-(_n_vy_27294*_n_age_27297))+((_n_g_27295*_n_age_27297)*_n_age_27297));
if(d::truth((_n_gy_27299>=_n_by_27276))){d::check_cancel();continue;
}
double _n_x_27300=std::floor(_n_gx_27298);
double _n_r_27301=std::floor(_n_gy_27299);
if(((d::truth((_n_x_27300<0.0))||d::truth((_n_x_27300>=_n_W_26862)))||d::truth((_n_r_27301<0.0)))){d::check_cancel();continue;
}
double _n_k_27302=((_n_r_27301*_n_W_26862)+_n_x_27300);
if(d::truth((!d::truth(d::at(this->_n_live_26943,_n_k_27302))))){d::check_cancel();continue;
}
double _n_v_27303=((((1.0-(_n_age_27297/_n_life_27292))*(0.55+(0.45*std::sin(((_n_t_27230*3.0)+_n_tw_27296)))))*_n_fs_27280)*0.7);
(void)(((([&](){auto&& _n_array_27624=this->_n_fr_26947;auto _n_index_27625=_n_k_27302;auto _n_value_27626=(d::at(_n_array_27624,_n_index_27625)+(_n_v_27303*0.85));d::put(_n_array_27624,_n_index_27625,_n_value_27626);return _n_value_27626;})(),([&](){auto&& _n_array_27627=this->_n_fg_26948;auto _n_index_27628=_n_k_27302;auto _n_value_27629=(d::at(_n_array_27627,_n_index_27628)+(_n_v_27303*0.93));d::put(_n_array_27627,_n_index_27628,_n_value_27629);return _n_value_27629;})()),([&](){auto&& _n_array_27630=this->_n_fb_26949;auto _n_index_27631=_n_k_27302;auto _n_value_27632=(d::at(_n_array_27630,_n_index_27631)+_n_v_27303);d::put(_n_array_27630,_n_index_27631,_n_value_27632);return _n_value_27632;})()));
(void)(([&](){auto&& _n_array_27633=this->_n_fc_26951;auto _n_index_27634=_n_k_27302;auto _n_value_27635=1.0;d::put(_n_array_27633,_n_index_27634,_n_value_27635);return _n_value_27635;})());

}
}
}}
double _n_breathe_27304=(1.0+(0.12*std::sin((_n_t_27230*0.9))));
{double _n_r_27305=(d::at(_n_SUN_26872,1.0)-14.0);
for(;d::truth((_n_r_27305<=(d::at(_n_SUN_26872,1.0)+14.0)));(void)((_n_r_27305++))){d::check_cancel();{double _n_x_27306=d::maximum({0.0,(d::at(_n_SUN_26872,0.0)-26.0)});
for(;d::truth((_n_x_27306<=d::minimum({(_n_W_26862-1.0),(d::at(_n_SUN_26872,0.0)+26.0)})));(void)((_n_x_27306++))){d::check_cancel();double _n_k_27307=((_n_r_27305*_n_W_26862)+_n_x_27306);
double _n_dx_27308=((_n_x_27306+0.5)-d::at(_n_SUN_26872,0.0));
double _n_dy_27309=((_n_r_27305+0.5)-d::at(_n_SUN_26872,1.0));
double _n_d_27310=d::hypot(std::initializer_list<double>{_n_dx_27308,_n_dy_27309});
double _n_g_27311=([&](){auto _n_left_27636=(std::exp(((-d::number(_n_d_27310))/2.0))*1.4);auto _n_right_27637=(std::exp(((-d::number(_n_d_27310))/8.0))*0.2);return (_n_left_27636+_n_right_27637);})();
(void)((_n_g_27311=(_n_g_27311+(([&](){auto _n_left_27638=std::exp((((-d::number(_n_dy_27309))*_n_dy_27309)*2.0));auto _n_right_27639=std::exp(((-d::number(std::fabs(_n_dx_27308)))/(8.0*_n_breathe_27304)));return (_n_left_27638*_n_right_27639);})()*1.1))));
(void)((_n_g_27311=(_n_g_27311+(([&](){auto _n_left_27640=std::exp((((-d::number(_n_dx_27308))*_n_dx_27308)*2.0));auto _n_right_27641=std::exp(((-d::number(std::fabs(_n_dy_27309)))/(4.0*_n_breathe_27304)));return (_n_left_27640*_n_right_27641);})()*0.9))));
if(d::truth((_n_d_27310<1.6))){d::check_cancel();(void)((_n_g_27311=3.0));
}
if(d::truth(d::at(this->_n_solid_26910,_n_k_27307))){d::check_cancel();(void)((_n_g_27311=(_n_g_27311*0.4)));
}
(void)(((([&](){auto&& _n_array_27642=this->_n_fr_26947;auto _n_index_27643=_n_k_27307;auto _n_value_27644=(d::at(_n_array_27642,_n_index_27643)+_n_g_27311);d::put(_n_array_27642,_n_index_27643,_n_value_27644);return _n_value_27644;})(),([&](){auto&& _n_array_27645=this->_n_fg_26948;auto _n_index_27646=_n_k_27307;auto _n_value_27647=(d::at(_n_array_27645,_n_index_27646)+(_n_g_27311*0.96));d::put(_n_array_27645,_n_index_27646,_n_value_27647);return _n_value_27647;})()),([&](){auto&& _n_array_27648=this->_n_fb_26949;auto _n_index_27649=_n_k_27307;auto _n_value_27650=(d::at(_n_array_27648,_n_index_27649)+(_n_g_27311*0.86));d::put(_n_array_27648,_n_index_27649,_n_value_27650);return _n_value_27650;})()));
if(d::truth((_n_g_27311>0.08))){d::check_cancel();(void)(([&](){auto&& _n_array_27651=this->_n_fc_26951;auto _n_index_27652=_n_k_27307;auto _n_value_27653=1.0;d::put(_n_array_27651,_n_index_27652,_n_value_27653);return _n_value_27653;})());
}
}}
}}
for(auto &&_n_item_27654:_n_BRIGHT_26878){d::check_cancel();auto _n_binding_27655=_n_item_27654;
double _n_x_27312=d::at(_n_binding_27655,0.0);
double _n_r_27313=d::at(_n_binding_27655,1.0);
double _n_s_27314=d::at(_n_binding_27655,2.0);
double _n_p_27315=d::at(_n_binding_27655,3.0);
{
double _n_v_27316=(_n_s_27314*(0.8+(0.2*std::sin(((((_n_t_27230/_n_p_27315)*ascii::PI)*2.0)+(_n_hash_26888(_n_x_27312,_n_r_27313)*6.28))))));
double _n_k_27317=((_n_r_27313*_n_W_26862)+_n_x_27312);
if((d::truth((d::at(this->_n_pa_26929,_n_k_27317)>0.0))||d::truth((d::at(this->_n_ra_26934,_n_k_27317)>0.0)))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_27656=this->_n_fr_26947;auto _n_index_27657=_n_k_27317;auto _n_value_27658=d::maximum({d::at(this->_n_fr_26947,_n_k_27317),(_n_v_27316*0.95)});d::put(_n_array_27656,_n_index_27657,_n_value_27658);return _n_value_27658;})(),([&](){auto&& _n_array_27659=this->_n_fg_26948;auto _n_index_27660=_n_k_27317;auto _n_value_27661=d::maximum({d::at(this->_n_fg_26948,_n_k_27317),(_n_v_27316*0.97)});d::put(_n_array_27659,_n_index_27660,_n_value_27661);return _n_value_27661;})()),([&](){auto&& _n_array_27662=this->_n_fb_26949;auto _n_index_27663=_n_k_27317;auto _n_value_27664=d::maximum({d::at(this->_n_fb_26949,_n_k_27317),_n_v_27316});d::put(_n_array_27662,_n_index_27663,_n_value_27664);return _n_value_27664;})()));
for(auto &&_n_item_27665:d::Array<double,false>{(-d::number(1.0)),1.0,(-d::number(_n_W_26862)),_n_W_26862}){d::check_cancel();double _n_o_27318=_n_item_27665;
(void)(((([&](){auto&& _n_array_27666=this->_n_fr_26947;auto _n_index_27667=(_n_k_27317+_n_o_27318);auto _n_value_27668=(d::at(_n_array_27666,_n_index_27667)+(_n_v_27316*0.16));d::put(_n_array_27666,_n_index_27667,_n_value_27668);return _n_value_27668;})(),([&](){auto&& _n_array_27669=this->_n_fg_26948;auto _n_index_27670=(_n_k_27317+_n_o_27318);auto _n_value_27671=(d::at(_n_array_27669,_n_index_27670)+(_n_v_27316*0.17));d::put(_n_array_27669,_n_index_27670,_n_value_27671);return _n_value_27671;})()),([&](){auto&& _n_array_27672=this->_n_fb_26949;auto _n_index_27673=(_n_k_27317+_n_o_27318);auto _n_value_27674=(d::at(_n_array_27672,_n_index_27673)+(_n_v_27316*0.2));d::put(_n_array_27672,_n_index_27673,_n_value_27674);return _n_value_27674;})()));
}

}
}
for(auto &&_n_item_27675:this->_n_cells_26945){d::check_cancel();double _n_k_27319=_n_item_27675;
(void)(this->_n_dot_26904(_n_k_27319,d::at(this->_n_fr_26947,_n_k_27319),d::at(this->_n_fg_26948,_n_k_27319),d::at(this->_n_fb_26949,_n_k_27319),d::at(this->_n_ff_26950,_n_k_27319),d::at(this->_n_fc_26951,_n_k_27319)));
}
{double _n_r_27320=0.0;
for(;d::truth((_n_r_27320<_n_H_26863));(void)((_n_r_27320++))){d::check_cancel();if(d::truth(d::at(this->_n_dirty_26946,_n_r_27320))){d::check_cancel();(void)(([&](){auto&& _n_array_27676=this->_n_lines_26952;auto _n_index_27677=_n_r_27320;auto _n_value_27678=d::join(this->_n_chars_26902.slice((_n_r_27320*_n_W_26862),((_n_r_27320+1.0)*_n_W_26862)),d::String(u""));d::put(_n_array_27676,_n_index_27677,_n_value_27678);return _n_value_27678;})());
}
}}
if(d::truth(_n_color_27231)){d::check_cancel();(void)(d::read(_n_color_27231).set(this->_n_cols_26903));
}
return d::join(this->_n_lines_26952,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("saturn-rise").cols)*ascii::catalog_meta("saturn-rise").rows);auto _env=std::make_shared<_n_Record_27321>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &saturn_rise_meta(){return catalog_meta("saturn-rise");}
std::unique_ptr<Piece> make_saturn_rise(const AsciiPieceOptions &o){return std::make_unique<Native_saturn_rise>(o);}
}
