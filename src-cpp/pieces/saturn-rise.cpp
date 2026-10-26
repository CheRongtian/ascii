// Direct, statically typed C++ from src/pieces/saturn-rise.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26862;
struct _n_Record_27322;
struct _n_Record_26862{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_26862> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26862>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_27322{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_27322> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27322>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_norm_26882(d::Array<double,false> _a0);
double _n_hash_26889(double _a0,double _a1);
double _n_noise_26890(double _a0,double _a1,double _a2);
double _n_fbm_26891(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_26892(double _a0);
double _n_smooth_26893(double _a0,double _a1,double _a2);
double _n_mix_26894(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_26895(d::String _a0);
std::array<double,4> _n_ring_26896(double _a0);
double _n_ice_26897(double _a0,double _a1);
std::array<double,2> _n_plates_26898(double _a0,double _a1);
std::shared_ptr<_n_Record_26862> _n_meta_26861=[](){return ([&](){auto _n_object_27325=std::make_shared<_n_Record_26862>();_n_object_27325->_p_name=d::String(u"saturn rise");_n_object_27325->_p_category=d::String(u"scenes");_n_object_27325->_p_note=d::String(u"saturn and its rings hanging over the cracked ice and geysers of a moon");_n_object_27325->_p_cols=200.0;_n_object_27325->_p_rows=100.0;_n_object_27325->_p_cell=1.0;_n_object_27325->_p_fps=15.0;_n_object_27325->_p_ground=d::String(u"#04050a");_n_object_27325->_p_palette=d::Array<d::String,false>{d::String(u"#0b0d14"),d::String(u"#161922"),d::String(u"#252935"),d::String(u"#3a3f4c"),d::String(u"#3b2a1a"),d::String(u"#5c4027"),d::String(u"#7f5a35"),d::String(u"#a37645"),d::String(u"#c4925a"),d::String(u"#dcae74"),d::String(u"#ecc893"),d::String(u"#f6e0b8"),d::String(u"#6b6a6c"),d::String(u"#8a8070"),d::String(u"#b3a892"),d::String(u"#d8cfba"),d::String(u"#7f8a96"),d::String(u"#0e1a2e"),d::String(u"#15284a"),d::String(u"#1f3a66"),d::String(u"#2c5085"),d::String(u"#3f6aa3"),d::String(u"#5e8bbf"),d::String(u"#89afd6"),d::String(u"#b6d0ea"),d::String(u"#ddebf8"),d::String(u"#2a7fb0"),d::String(u"#56b3dc"),d::String(u"#ffffff"),d::String(u"#fff0c8")};return _n_object_27325;})();}();
const double _n_W_26863=[](){return 200.0;}();
const double _n_H_26864=[](){return 100.0;}();
const double _n_HZ_26865=[](){return 70.0;}();
const double _n_F_26866=[](){return 110.0;}();
const double _n_FG_26867=[](){return 60.0;}();
const double _n_CAM_26868=[](){return 8.0;}();
d::Array<double,false> _n_SC_26869=[](){return d::Array<double,false>{84.0,33.0};}();
const double _n_SR_26870=[](){return 25.0;}();
const double _n_INC_26871=[](){return 0.34;}();
const double _n_ROLL_26872=[](){return 0.14;}();
d::Array<double,false> _n_SUN_26873=[](){return d::Array<double,false>{173.0,55.0};}();
const double _n_MOON_R_26874=[](){return 2.85;}();
const double _n_MOON_T_26875=[](){return 140.0;}();
const d::String _n_DOTS_26876=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_26877=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_26878=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_26954=_a0;
return ((_n_v_26954/16.0)-0.47);});}();
d::Array<d::Array<double,false>,false> _n_BRIGHT_26879=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{176.0,12.0,1.0,4.4},d::Array<double,false>{12.0,9.0,0.85,3.6},d::Array<double,false>{194.0,33.0,0.8,5.2},d::Array<double,false>{150.0,5.0,0.75,4.9},d::Array<double,false>{7.0,44.0,0.7,3.9}};}();
d::Array<d::Array<double,false>,false> _n_PLUMES_26880=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{146.0,72.0,40.0,0.2,0.9},d::Array<double,false>{162.0,75.0,58.0,0.22,1.1},d::Array<double,false>{124.0,71.0,26.0,0.18,0.8},d::Array<double,false>{22.0,77.0,38.0,0.2,0.85}};}();
d::Array<double,false> _n_STRIPES_26881=[](){return d::Array<double,false>{25.0,46.0,92.0};}();
d::Array<double,false> _n_NR_26883=[](){return d::Array<double,false>{([&](){auto _n_left_27326=(-d::number(std::sin(_n_ROLL_26872)));auto _n_right_27327=std::cos(_n_INC_26871);return (_n_left_27326*_n_right_27327);})(),([&](){auto _n_left_27328=std::cos(_n_ROLL_26872);auto _n_right_27329=std::cos(_n_INC_26871);return (_n_left_27328*_n_right_27329);})(),std::sin(_n_INC_26871)};}();
d::Array<double,false> _n_E1_26884=[](){return _n_norm_26882(d::Array<double,false>{d::at(_n_NR_26883,1.0),(-d::number(d::at(_n_NR_26883,0.0))),0.0});}();
d::Array<double,false> _n_E2_26885=[](){return d::Array<double,false>{((-d::number(d::at(_n_NR_26883,2.0)))*d::at(_n_E1_26884,1.0)),(d::at(_n_NR_26883,2.0)*d::at(_n_E1_26884,0.0)),((d::at(_n_NR_26883,0.0)*d::at(_n_E1_26884,1.0))-(d::at(_n_NR_26883,1.0)*d::at(_n_E1_26884,0.0)))};}();
d::Array<double,false> _n_LS_26886=[](){return _n_norm_26882(d::Array<double,false>{0.6,0.28,0.72});}();
d::Array<double,false> _n_LG_26887=[](){return _n_norm_26882(d::Array<double,false>{0.78,0.42,0.3});}();
d::Array<double,false> _n_LV_26888=[](){return _n_norm_26882(d::Array<double,false>{((d::at(_n_SUN_26873,0.0)-100.0)/_n_F_26866),((_n_HZ_26865-d::at(_n_SUN_26873,1.0))/_n_F_26866),1.0});}();
d::Array<double,false> _n_norm_26882(d::Array<double,false> _a0){d::Array<double,false> _n_v_26955=_a0;
{
double _n_l_26956=d::hypot(_n_v_26955);
return d::map(_n_v_26955,[&]( double _a0) mutable ->double{double _n_c_26957=_a0;
return (_n_c_26957/_n_l_26956);});

}
}

double _n_hash_26889(double _a0,double _a1){double _n_x_26958=_a0;
double _n_y_26959=_a1;
{
double _n_h_26960=([&](){auto _n_left_27330=d::imul(double(d::i32(_n_x_26958)|d::i32(0.0)),374761393.0);auto _n_right_27331=d::imul(double(d::i32(_n_y_26959)|d::i32(0.0)),668265263.0);return (_n_left_27330+_n_right_27331);})();
(void)((_n_h_26960=d::imul(double(d::i32(_n_h_26960)^d::i32(double(d::u32(_n_h_26960)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_26960)^d::i32(double(d::u32(_n_h_26960)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_26890(double _a0,double _a1,double _a2){double _n_x_26961=_a0;
double _n_y_26962=_a1;
double _n_period_26963=_a2;
{
double _n_xi_26964=std::floor(_n_x_26961);
double _n_yi_26965=std::floor(_n_y_26962);
double _n_fx_26966=(_n_x_26961-_n_xi_26964);
double _n_fy_26967=(_n_y_26962-_n_yi_26965);
double _n_u_26968=((_n_fx_26966*_n_fx_26966)*(3.0-(2.0*_n_fx_26966)));
double _n_v_26969=((_n_fy_26967*_n_fy_26967)*(3.0-(2.0*_n_fy_26967)));
double _n_x0_26970=_n_xi_26964;
double _n_x1_26971=(_n_xi_26964+1.0);
if(d::truth(_n_period_26963)){d::check_cancel();(void)((_n_x0_26970=d::mod((d::mod(_n_xi_26964,_n_period_26963)+_n_period_26963),_n_period_26963)));
(void)((_n_x1_26971=d::mod((_n_x0_26970+1.0),_n_period_26963)));
}
double _n_a_26972=_n_hash_26889(_n_x0_26970,_n_yi_26965);
double _n_b_26973=_n_hash_26889(_n_x1_26971,_n_yi_26965);
double _n_c_26974=_n_hash_26889(_n_x0_26970,(_n_yi_26965+1.0));
double _n_d_26975=_n_hash_26889(_n_x1_26971,(_n_yi_26965+1.0));
return (((_n_a_26972+((_n_b_26973-_n_a_26972)*_n_u_26968))+((_n_c_26974-_n_a_26972)*_n_v_26969))+(((((_n_a_26972-_n_b_26973)-_n_c_26974)+_n_d_26975)*_n_u_26968)*_n_v_26969));

}
}

double _n_fbm_26891(double _a0,double _a1,double _a2,double _a3){double _n_x_26976=_a0;
double _n_y_26977=_a1;
double _n_octaves_26978=_a2;
double _n_period_26979=_a3;
{
double _n_s_26980=0.0;
double _n_n_26981=0.0;
double _n_amp_26982=0.5;
double _n_f_26983=1.0;
{double _n_i_26984=0.0;
for(;d::truth((_n_i_26984<_n_octaves_26978));(void)((_n_i_26984++))){d::check_cancel();(void)((_n_s_26980=(_n_s_26980+(_n_amp_26982*_n_noise_26890((_n_x_26976*_n_f_26983),(_n_y_26977*_n_f_26983),(_n_period_26979*_n_f_26983))))));
(void)((_n_n_26981=(_n_n_26981+_n_amp_26982)));
(void)((_n_amp_26982=(_n_amp_26982*0.5)));
(void)((_n_f_26983=(_n_f_26983*2.0)));
}}
return (_n_s_26980/_n_n_26981);

}
}

double _n_clamp_26892(double _a0){double _n_v_26985=_a0;
return (d::truth((_n_v_26985<0.0))?0.0:(d::truth((_n_v_26985>1.0))?1.0:_n_v_26985));}

double _n_smooth_26893(double _a0,double _a1,double _a2){double _n_a_26986=_a0;
double _n_b_26987=_a1;
double _n_v_26988=_a2;
{
double _n_k_26989=_n_clamp_26892(((_n_v_26988-_n_a_26986)/(_n_b_26987-_n_a_26986)));
return ((_n_k_26989*_n_k_26989)*(3.0-(2.0*_n_k_26989)));

}
}

double _n_mix_26894(double _a0,double _a1,double _a2){double _n_a_26990=_a0;
double _n_b_26991=_a1;
double _n_k_26992=_a2;
return (_n_a_26990+((_n_b_26991-_n_a_26990)*_n_k_26992));}

d::Array<double,false> _n_hex_26895(d::String _a0){d::String _n_s_26993=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_26994=_a0;
return (([&](){auto _n_argument_27332=d::slice(_n_s_26993,_n_i_26994,(_n_i_26994+2.0));auto _n_argument_27333=16.0;return d::parseInt(_n_argument_27332,_n_argument_27333);})()/255.0);});}

std::array<double,4> _n_ring_26896(double _a0){double _n_r_26995=_a0;
{
double _n_fine_26996=(0.88+(0.24*_n_fbm_26891((_n_r_26995*90.0),3.3,2.0,0.0)));
double _n_a_26997=0.0;
d::Array<double,false> _n_c_26998=d::Array<double,false>{0.0,0.0,0.0};
if((d::truth((_n_r_26995>1.24))&&d::truth((_n_r_26995<1.53)))){d::check_cancel();(void)(((_n_a_26997=(0.2*_n_fine_26996)),(_n_c_26998=d::Array<double,false>{0.55,0.52,0.48})));
}else {d::check_cancel();if((d::truth((_n_r_26995>=1.53))&&d::truth((_n_r_26995<1.95)))){d::check_cancel();(void)(((_n_a_26997=([&](){auto _n_argument_27334=1.0;auto _n_argument_27335=((0.7+(0.4*_n_smooth_26893(1.53,1.7,_n_r_26995)))*_n_fine_26996);return d::minimum({_n_argument_27334,_n_argument_27335});})()),(_n_c_26998=d::Array<double,false>{1.0,0.9,0.72})));
}else {d::check_cancel();if((d::truth((_n_r_26995>=1.95))&&d::truth((_n_r_26995<2.03)))){d::check_cancel();(void)(((_n_a_26997=0.02),(_n_c_26998=d::Array<double,false>{0.5,0.48,0.45})));
}else {d::check_cancel();if((d::truth((_n_r_26995>=2.03))&&d::truth((_n_r_26995<2.27)))){d::check_cancel();(void)(((_n_a_26997=((d::truth((_n_r_26995>2.2))&&d::truth((_n_r_26995<2.23)))?0.04:(0.55*_n_fine_26996))),(_n_c_26998=d::Array<double,false>{0.78,0.74,0.68})));
}else {d::check_cancel();if((d::truth((_n_r_26995>2.315))&&d::truth((_n_r_26995<2.335)))){d::check_cancel();(void)(((_n_a_26997=0.4),(_n_c_26998=d::Array<double,false>{0.85,0.82,0.76})));
}
}
}
}
}
return std::array<double,4>{_n_clamp_26892(_n_a_26997),d::at(_n_c_26998,0.0),d::at(_n_c_26998,1.0),d::at(_n_c_26998,2.0)};

}
}

double _n_ice_26897(double _a0,double _a1){double _n_X_26999=_a0;
double _n_Z_27000=_a1;
{
double _n_h_27001=(0.9*_n_fbm_26891(((_n_X_26999*0.03)+11.0),(_n_Z_27000*0.03),3.0,0.0));
double _n_w_27002=_n_fbm_26891((_n_X_26999*0.012),((_n_Z_27000*0.012)+5.0),2.0,0.0);
double _n_crest_27003=(1.0-std::fabs(((2.0*_n_noise_26890(((_n_X_26999*0.016)+(_n_w_27002*2.5)),((_n_Z_27000*0.045)+(_n_w_27002*3.0)),0.0))-1.0)));
(void)((_n_h_27001=(_n_h_27001+((4.5*std::pow(_n_crest_27003,8.0))*([&](){auto _n_argument_27336=0.45;auto _n_argument_27337=0.65;auto _n_argument_27338=_n_fbm_26891(((_n_X_26999*0.02)+3.0),(_n_Z_27000*0.02),2.0,0.0);return _n_smooth_26893(_n_argument_27336,_n_argument_27337,_n_argument_27338);})()))));
for(auto &&_n_item_27339:_n_STRIPES_26881){d::check_cancel();double _n_zc_27004=_n_item_27339;
{
double _n_zs_27005=((_n_zc_27004+(0.08*_n_X_26999))+((_n_zc_27004*0.12)*(_n_fbm_26891((_n_X_26999*0.01),_n_zc_27004,2.0,0.0)-0.5)));
double _n_wd_27006=(_n_zc_27004*0.07);
double _n_d_27007=(std::fabs((_n_Z_27000-_n_zs_27005))/_n_wd_27006);
(void)((_n_h_27001=(_n_h_27001+(_n_wd_27006*([&](){auto _n_left_27340=((-d::number(0.45))*std::exp(((-d::number(_n_d_27007))*_n_d_27007)));auto _n_right_27341=(0.25*std::exp((-d::number(std::pow(((_n_d_27007-1.8)/0.7),2.0)))));return (_n_left_27340+_n_right_27341);})()))));

}
}
return _n_h_27001;

}
}

std::array<double,2> _n_plates_26898(double _a0,double _a1){double _n_X_27008=_a0;
double _n_Z_27009=_a1;
{
double _n_xi_27010=std::floor(_n_X_27008);
double _n_zi_27011=std::floor(_n_Z_27009);
double _n_d1_27012=9.0;
double _n_d2_27013=9.0;
double _n_id_27014=0.0;
{double _n_j_27015=(-d::number(1.0));
for(;d::truth((_n_j_27015<=1.0));(void)((_n_j_27015++))){d::check_cancel();{double _n_i_27016=(-d::number(1.0));
for(;d::truth((_n_i_27016<=1.0));(void)((_n_i_27016++))){d::check_cancel();double _n_cx_27017=(_n_xi_27010+_n_i_27016);
double _n_cz_27018=(_n_zi_27011+_n_j_27015);
double _n_dx_27019=((_n_cx_27017+_n_hash_26889(_n_cx_27017,(_n_cz_27018+41.0)))-_n_X_27008);
double _n_dz_27020=((_n_cz_27018+_n_hash_26889((_n_cx_27017+43.0),_n_cz_27018))-_n_Z_27009);
double _n_d_27021=std::sqrt(((_n_dx_27019*_n_dx_27019)+(_n_dz_27020*_n_dz_27020)));
if(d::truth((_n_d_27021<_n_d1_27012))){d::check_cancel();(void)((((_n_d2_27013=_n_d1_27012),(_n_d1_27012=_n_d_27021)),(_n_id_27014=_n_hash_26889((_n_cx_27017+7.0),(_n_cz_27018+9.0)))));
}else {d::check_cancel();if(d::truth((_n_d_27021<_n_d2_27013))){d::check_cancel();(void)((_n_d2_27013=_n_d_27021));
}
}
}}
}}
return std::array<double,2>{(_n_d2_27013-_n_d1_27012),_n_id_27014};

}
}

struct Native_saturn_rise final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_26899{};
double _n_N_26900{};
d::Array<uint8_t,true> _n_lut_26901{};
d::Array<d::String,false> _n_chars_26903{};
d::Array<uint8_t,true> _n_cols_26904{};
d::Array<float,true> _n_sr_26906{};
d::Array<float,true> _n_sg_26907{};
d::Array<float,true> _n_sb_26908{};
d::Array<float,true> _n_sf_26909{};
d::Array<float,true> _n_scap_26910{};
d::Array<uint8_t,true> _n_solid_26911{};
d::Array<float,true> _n_crest_26912{};
d::Array<uint8_t,true> _n_gnd_26913{};
d::Array<float,true> _n_gx_26914{};
d::Array<float,true> _n_gz_26915{};
d::Array<float,true> _n_gy_26916{};
double _n_TW_26917{};
double _n_TH_26918{};
d::Array<float,true> _n_tr_26919{};
d::Array<float,true> _n_tg_26920{};
d::Array<float,true> _n_tb_26921{};
double _n_RB_26923{};
double _n_TB_26924{};
double _n_R0_26925{};
double _n_R1_26926{};
d::Array<float,true> _n_rt_26927{};
d::Array<float,true> _n_omega_26928{};
d::Array<double,false> _n_sat_26929{};
d::Array<float,true> _n_pa_26930{};
d::Array<float,true> _n_pl_26931{};
d::Array<float,true> _n_pu_26932{};
d::Array<float,true> _n_pv_26933{};
d::Array<float,true> _n_pz_26934{};
d::Array<float,true> _n_ra_26935{};
d::Array<float,true> _n_rcr_26936{};
d::Array<float,true> _n_rcg_26937{};
d::Array<float,true> _n_rcb_26938{};
d::Array<float,true> _n_rz_26939{};
d::Array<int16_t,true> _n_rbin_26940{};
d::Array<float,true> _n_rth_26941{};
d::Array<d::Array<double,false>,false> _n_SUB_26942{};
d::Array<d::Array<std::array<double,6>,false>,false> _n_grains_26943{};
d::Array<uint8_t,true> _n_live_26944{};
d::Array<double,false> _n_cells_26946{};
d::Array<uint8_t,true> _n_dirty_26947{};
d::Array<float,true> _n_fr_26948{};
d::Array<float,true> _n_fg_26949{};
d::Array<float,true> _n_fb_26950{};
d::Array<float,true> _n_ff_26951{};
d::Array<float,true> _n_fc_26952{};
d::Array<d::String,false> _n_lines_26953{};
std::function<d::String(double,std::shared_ptr<_n_Record_27322>)> _render;
double _n_nearest_26902(double _a0,double _a1,double _a2){double _n_r_27022=_a0;
double _n_g_27023=_a1;
double _n_b_27024=_a2;
{
double _n_k_27025=([&](){auto _n_left_27680=([&](){auto _n_left_27682=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_27022*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_27683=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_27023*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_27682)|d::i32(_n_right_27683));})();auto _n_right_27681=d::minimum({31.0,double(d::i32((_n_b_27024*31.99))|d::i32(0.0))});return double(d::i32(_n_left_27680)|d::i32(_n_right_27681));})();
if(d::truth((d::at(this->_n_lut_26901,_n_k_27025)!=255.0))){d::check_cancel();return d::at(this->_n_lut_26901,_n_k_27025);
}
double _n_best_27026=0.0;
double _n_bd_27027=1000000000.0;
{double _n_i_27028=0.0;
for(;d::truth((_n_i_27028<double(this->_n_P_26899.size())));(void)((_n_i_27028++))){d::check_cancel();double _n_dr_27029=(d::at(d::at(this->_n_P_26899,_n_i_27028),0.0)-_n_r_27022);
double _n_dg_27030=(d::at(d::at(this->_n_P_26899,_n_i_27028),1.0)-_n_g_27023);
double _n_db_27031=(d::at(d::at(this->_n_P_26899,_n_i_27028),2.0)-_n_b_27024);
double _n_d_27032=((((0.3*_n_dr_27029)*_n_dr_27029)+((0.5*_n_dg_27030)*_n_dg_27030))+((0.2*_n_db_27031)*_n_db_27031));
if(d::truth((_n_d_27032<_n_bd_27027))){d::check_cancel();(void)(((_n_bd_27027=_n_d_27032),(_n_best_27026=_n_i_27028)));
}
}}
return ([&](){auto&& _n_array_27684=this->_n_lut_26901;auto _n_index_27685=_n_k_27025;auto _n_value_27686=_n_best_27026;d::put(_n_array_27684,_n_index_27685,_n_value_27686);return _n_value_27686;})();

}
}

void _n_dot_26905(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_k_27033=_a0;
double _n_cr_27034=_a1;
double _n_cg_27035=_a2;
double _n_cb_27036=_a3;
double _n_floor_27037=_a4;
double _n_cap_27038=_a5;
{
double _n_x_27039=d::mod(_n_k_27033,_n_W_26863);
double _n_r_27040=double(d::i32((_n_k_27033/_n_W_26863))|d::i32(0.0));
double _n_peak_27041=d::maximum({_n_cr_27034,_n_cg_27035,_n_cb_27036,0.0001});
double _n_level_27042=_n_clamp_26892((_n_floor_27037+(((1.0-_n_floor_27037)*std::pow(_n_peak_27041,0.85))*0.95)));
double _n_step_27043=([&](){auto _n_argument_27687=0.0;auto _n_argument_27688=([&](){auto _n_argument_27689=3.0;auto _n_argument_27690=d::round(((_n_level_27042*3.0)+d::at(_n_BAYER_26878,((double(d::i32(_n_r_27040)&d::i32(3.0))*4.0)+double(d::i32(_n_x_27039)&d::i32(3.0))))));return d::minimum({_n_argument_27689,_n_argument_27690});})();return d::maximum({_n_argument_27687,_n_argument_27688});})();
(void)(([&](){auto&& _n_array_27691=this->_n_chars_26903;auto _n_index_27692=_n_k_27033;auto _n_value_27693=d::at(_n_DOTS_26876,_n_step_27043);d::put(_n_array_27691,_n_index_27692,_n_value_27693);return _n_value_27693;})());
double _n_want_27044=(d::truth(_n_step_27043)?d::minimum({1.0,((_n_level_27042+0.06)/d::at(_n_COVER_26877,_n_step_27043))}):0.0);
double _n_s_27045=(d::minimum({_n_cap_27038,(0.3+(0.7*_n_want_27044))})/_n_peak_27041);
(void)(([&](){auto&& _n_array_27694=this->_n_cols_26904;auto _n_index_27695=_n_k_27033;auto _n_value_27696=([&](){auto _n_argument_27697=_n_clamp_26892((_n_cr_27034*_n_s_27045));auto _n_argument_27698=_n_clamp_26892((_n_cg_27035*_n_s_27045));auto _n_argument_27699=_n_clamp_26892((_n_cb_27036*_n_s_27045));return this->_n_nearest_26902(_n_argument_27697,_n_argument_27698,_n_argument_27699);})();d::put(_n_array_27694,_n_index_27695,_n_value_27696);return _n_value_27696;})());

}
}

double _n_sample_26922(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_A_27132=_a0;
double _n_u_27133=_a1;
double _n_vy_27134=_a2;
{
double _n_fx_27135=(d::mod((d::mod(_n_u_27133,1.0)+1.0),1.0)*this->_n_TW_26917);
double _n_x0_27136=std::floor(_n_fx_27135);
double _n_ax_27137=(_n_fx_27135-_n_x0_27136);
double _n_x1_27138=d::mod((_n_x0_27136+1.0),this->_n_TW_26917);
double _n_y0_27139=([&](){auto _n_argument_27700=0.0;auto _n_argument_27701=([&](){auto _n_argument_27702=(this->_n_TH_26918-2.0);auto _n_argument_27703=std::floor(_n_vy_27134);return d::minimum({_n_argument_27702,_n_argument_27703});})();return d::maximum({_n_argument_27700,_n_argument_27701});})();
double _n_ay_27140=_n_clamp_26892((_n_vy_27134-_n_y0_27139));
double _n_a_27141=d::at(_n_A_27132,((_n_y0_27139*this->_n_TW_26917)+_n_x0_27136));
double _n_b_27142=d::at(_n_A_27132,((_n_y0_27139*this->_n_TW_26917)+_n_x1_27138));
double _n_c_27143=d::at(_n_A_27132,(((_n_y0_27139*this->_n_TW_26917)+this->_n_TW_26917)+_n_x0_27136));
double _n_d_27144=d::at(_n_A_27132,(((_n_y0_27139*this->_n_TW_26917)+this->_n_TW_26917)+_n_x1_27138));
return (((_n_a_27141+((_n_b_27142-_n_a_27141)*_n_ax_27137))+((_n_c_27143-_n_a_27141)*_n_ay_27140))+(((((_n_a_27141-_n_b_27142)-_n_c_27143)+_n_d_27144)*_n_ax_27137)*_n_ay_27140));

}
}

d::Array<double,false> _n_orbit_26945(double _a0){double _n_a_27203=_a0;
{
double _n_ca_27204=(std::cos(_n_a_27203)*_n_MOON_R_26874);
double _n_sa_27205=(std::sin(_n_a_27203)*_n_MOON_R_26874);
return d::Array<double,false>{((_n_ca_27204*d::at(_n_E1_26884,0.0))+(_n_sa_27205*d::at(_n_E2_26885,0.0))),((_n_ca_27204*d::at(_n_E1_26884,1.0))+(_n_sa_27205*d::at(_n_E2_26885,1.0))),((_n_ca_27204*d::at(_n_E1_26884,2.0))+(_n_sa_27205*d::at(_n_E2_26885,2.0)))};

}
}

explicit Native_saturn_rise(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_26899=d::map(_n_meta_26861->_p_palette,_n_hex_26895);
this->_n_N_26900=(_n_W_26863*_n_H_26864);
this->_n_lut_26901=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_chars_26903=d::Array<d::String,false>(size_t(this->_n_N_26900)).fill(d::String(u" "));
this->_n_cols_26904=d::Array<uint8_t,true>(size_t(this->_n_N_26900));
this->_n_sr_26906=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_sg_26907=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_sb_26908=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_sf_26909=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_scap_26910=d::Array<float,true>(size_t(this->_n_N_26900)).fill(1.0);
this->_n_solid_26911=d::Array<uint8_t,true>(size_t(this->_n_N_26900));
this->_n_crest_26912=d::Array<float,true>(size_t((_n_W_26863+2.0)));
{double _n_x_27046=(-d::number(1.0));
for(;d::truth((_n_x_27046<=_n_W_26863));(void)((_n_x_27046++))){d::check_cancel();double _n_m_27047=(1.0-std::fabs(((2.0*_n_fbm_26891(((_n_x_27046*0.035)+4.0),1.5,3.0,0.0))-1.0)));
(void)(([&](){auto&& _n_array_27342=this->_n_crest_26912;auto _n_index_27343=(_n_x_27046+1.0);auto _n_value_27344=((_n_HZ_26865-0.5)-([&](){auto _n_left_27345=([&](){auto _n_left_27347=((1.2+((4.5*_n_m_27047)*_n_m_27047))+(6.0*std::exp((-d::number(std::pow(((_n_x_27046-38.0)/30.0),2.0))))));auto _n_right_27348=(3.0*std::exp((-d::number(std::pow(((_n_x_27046-190.0)/14.0),2.0)))));return (_n_left_27347+_n_right_27348);})();auto _n_right_27346=(0.8*_n_hash_26889(_n_x_27046,7.0));return (_n_left_27345+_n_right_27346);})());d::put(_n_array_27342,_n_index_27343,_n_value_27344);return _n_value_27344;})());
}}
this->_n_gnd_26913=d::Array<uint8_t,true>(size_t(this->_n_N_26900));
this->_n_gx_26914=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_gz_26915=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_gy_26916=d::Array<float,true>(size_t(this->_n_N_26900));
{double _n_c_27048=0.0;
for(;d::truth((_n_c_27048<_n_W_26863));(void)((_n_c_27048++))){d::check_cancel();double _n_dir_27049=(((_n_c_27048+0.5)-100.0)/_n_FG_26867);
double _n_topR_27050=_n_H_26864;
double _n_Z_27051=10.0;
double _n_prevF_27052=1000000000.0;
double _n_prevZ_27053=0.0;
double _n_prevY_27054=0.0;
while((d::truth((_n_Z_27051<3000.0))&&d::truth((_n_topR_27050>0.0)))){d::check_cancel();double _n_hy_27055=_n_ice_26897((_n_dir_27049*_n_Z_27051),_n_Z_27051);
double _n_yf_27056=(_n_HZ_26865+((_n_FG_26867*(_n_CAM_26868-_n_hy_27055))/_n_Z_27051));
double _n_r0_27057=([&](){auto _n_argument_27349=0.0;auto _n_argument_27350=std::ceil((_n_yf_27056-0.5));return d::maximum({_n_argument_27349,_n_argument_27350});})();
{double _n_r_27058=_n_r0_27057;
for(;d::truth((_n_r_27058<_n_topR_27050));(void)((_n_r_27058++))){d::check_cancel();double _n_a_27059=(d::truth((_n_prevF_27052>(_n_yf_27056+0.000001)))?_n_clamp_26892(((_n_prevF_27052-(_n_r_27058+0.5))/(_n_prevF_27052-_n_yf_27056))):1.0);
double _n_k_27060=((_n_r_27058*_n_W_26863)+_n_c_27048);
(void)(([&](){auto&& _n_array_27351=this->_n_gnd_26913;auto _n_index_27352=_n_k_27060;auto _n_value_27353=1.0;d::put(_n_array_27351,_n_index_27352,_n_value_27353);return _n_value_27353;})());
(void)(([&](){auto&& _n_array_27354=this->_n_gz_26915;auto _n_index_27355=_n_k_27060;auto _n_value_27356=(d::truth(_n_prevZ_27053)?_n_mix_26894(_n_prevZ_27053,_n_Z_27051,_n_a_27059):_n_Z_27051);d::put(_n_array_27354,_n_index_27355,_n_value_27356);return _n_value_27356;})());
(void)(([&](){auto&& _n_array_27357=this->_n_gx_26914;auto _n_index_27358=_n_k_27060;auto _n_value_27359=(_n_dir_27049*d::at(this->_n_gz_26915,_n_k_27060));d::put(_n_array_27357,_n_index_27358,_n_value_27359);return _n_value_27359;})());
(void)(([&](){auto&& _n_array_27360=this->_n_gy_26916;auto _n_index_27361=_n_k_27060;auto _n_value_27362=(d::truth(_n_prevZ_27053)?_n_mix_26894(_n_prevY_27054,_n_hy_27055,_n_a_27059):_n_hy_27055);d::put(_n_array_27360,_n_index_27361,_n_value_27362);return _n_value_27362;})());
}}
if(d::truth((_n_r0_27057<_n_topR_27050))){d::check_cancel();(void)((_n_topR_27050=_n_r0_27057));
}
(void)((((_n_prevF_27052=_n_yf_27056),(_n_prevY_27054=_n_hy_27055)),(_n_prevZ_27053=_n_Z_27051)));
(void)((_n_Z_27051=(_n_Z_27051+(0.05+(_n_Z_27051*0.012)))));
}
}}
{double _n_r_27061=0.0;
for(;d::truth((_n_r_27061<_n_H_26864));(void)((_n_r_27061++))){d::check_cancel();{double _n_x_27062=0.0;
for(;d::truth((_n_x_27062<_n_W_26863));(void)((_n_x_27062++))){d::check_cancel();double _n_k_27063=((_n_r_27061*_n_W_26863)+_n_x_27062);
double _n_y_27064=(_n_r_27061+0.5);
double _n_cr_27065=0.0;
double _n_cg_27066=0.0;
double _n_cb_27067=0.0;
double _n_floor_27068=0.0;
double _n_cap_27069=1.0;
double _n_ds_27070=d::hypot(std::initializer_list<double>{((_n_x_27062+0.5)-d::at(_n_SUN_26873,0.0)),(_n_y_27064-d::at(_n_SUN_26873,1.0))});
if(d::truth(d::at(this->_n_gnd_26913,_n_k_27063))){d::check_cancel();(void)(([&](){auto&& _n_array_27363=this->_n_solid_26911;auto _n_index_27364=_n_k_27063;auto _n_value_27365=1.0;d::put(_n_array_27363,_n_index_27364,_n_value_27365);return _n_value_27365;})());
double _n_X_27071=d::at(this->_n_gx_26914,_n_k_27063);
double _n_Z_27072=d::at(this->_n_gz_26915,_n_k_27063);
double _n_Y_27073=d::at(this->_n_gy_26916,_n_k_27063);
double _n_e_27074=(0.1+(_n_Z_27072*0.006));
double _n_hx_27075=(([&](){auto _n_left_27366=_n_ice_26897((_n_X_27071+_n_e_27074),_n_Z_27072);auto _n_right_27367=_n_ice_26897((_n_X_27071-_n_e_27074),_n_Z_27072);return (_n_left_27366-_n_right_27367);})()/(2.0*_n_e_27074));
double _n_hz_27076=(([&](){auto _n_left_27368=_n_ice_26897(_n_X_27071,(_n_Z_27072+_n_e_27074));auto _n_right_27369=_n_ice_26897(_n_X_27071,(_n_Z_27072-_n_e_27074));return (_n_left_27368-_n_right_27369);})()/(2.0*_n_e_27074));
double _n_nl_27077=d::hypot(std::initializer_list<double>{_n_hx_27075,1.0,_n_hz_27076});
double _n_nx_27078=((-d::number(_n_hx_27075))/_n_nl_27077);
double _n_ny_27079=(1.0/_n_nl_27077);
double _n_nz_27080=((-d::number(_n_hz_27076))/_n_nl_27077);
double _n_lam_27081=d::maximum({0.0,(((_n_nx_27078*d::at(_n_LG_26887,0.0))+(_n_ny_27079*d::at(_n_LG_26887,1.0)))+(_n_nz_27080*d::at(_n_LG_26887,2.0)))});
if((d::truth((_n_lam_27081>0.0))&&d::truth((_n_Z_27072<400.0)))){d::check_cancel();{double _n_s_27082=(0.3+(_n_Z_27072*0.004));
for(;d::truth((_n_s_27082<80.0));(void)((_n_s_27082=(_n_s_27082+(0.25+(_n_s_27082*0.15)))))){d::check_cancel();if(d::truth((_n_ice_26897((_n_X_27071+(d::at(_n_LG_26887,0.0)*_n_s_27082)),(_n_Z_27072+(d::at(_n_LG_26887,2.0)*_n_s_27082)))>((_n_Y_27073+0.02)+(d::at(_n_LG_26887,1.0)*_n_s_27082))))){d::check_cancel();(void)((_n_lam_27081=0.0));
break;
}
}}
}
auto _n_binding_27370=_n_plates_26898((_n_X_27071*0.14),(_n_Z_27072*0.14));
double _n_edge_27083=d::at(_n_binding_27370,0.0);
double _n_near_27084=_n_smooth_26893(130.0,30.0,_n_Z_27072);
double _n_crack_27085=(_n_smooth_26893((0.05+(0.6/_n_Z_27072)),0.01,_n_edge_27083)*_n_near_27084);
double _n_deep_27086=0.0;
for(auto &&_n_item_27371:_n_STRIPES_26881){d::check_cancel();double _n_zc_27087=_n_item_27371;
{
double _n_zs_27088=((_n_zc_27087+(0.08*_n_X_27071))+((_n_zc_27087*0.12)*(_n_fbm_26891((_n_X_27071*0.01),_n_zc_27087,2.0,0.0)-0.5)));
(void)((_n_deep_27086=([&](){auto _n_argument_27372=_n_deep_27086;auto _n_argument_27373=std::exp(((-d::number(std::pow((std::fabs((_n_Z_27072-_n_zs_27088))/(_n_zc_27087*0.07)),2.0)))*1.6));return d::maximum({_n_argument_27372,_n_argument_27373});})()));

}
}
double _n_albedo_27089=(0.85+(0.25*(_n_fbm_26891((_n_X_27071*0.2),(_n_Z_27072*0.2),2.0,0.0)-0.5)));
double _n_sun_27090=d::maximum({0.0,((2.2*_n_lam_27081)-0.25)});
(void)((_n_cr_27065=(_n_albedo_27089*((_n_sun_27090*1.0)+0.06))));
(void)((_n_cg_27066=(_n_albedo_27089*((_n_sun_27090*0.98)+0.12))));
(void)((_n_cb_27067=(_n_albedo_27089*((_n_sun_27090*0.95)+0.28))));
(void)((((_n_cr_27065=_n_mix_26894(_n_cr_27065,0.08,(_n_deep_27086*0.9))),(_n_cg_27066=_n_mix_26894(_n_cg_27066,0.36,(_n_deep_27086*0.9)))),(_n_cb_27067=_n_mix_26894(_n_cb_27067,0.62,(_n_deep_27086*0.9)))));
(void)((((_n_cr_27065=_n_mix_26894(_n_cr_27065,0.0,_n_crack_27085)),(_n_cg_27066=_n_mix_26894(_n_cg_27066,0.02,_n_crack_27085))),(_n_cb_27067=_n_mix_26894(_n_cb_27067,0.06,_n_crack_27085))));
double _n_vx_27091=(-d::number(_n_X_27071));
double _n_vy_27092=(_n_CAM_26868-_n_Y_27073);
double _n_vz_27093=(-d::number(_n_Z_27072));
double _n_vl_27094=d::hypot(std::initializer_list<double>{_n_vx_27091,_n_vy_27092,_n_vz_27093});
double _n_hvx_27095=(d::at(_n_LV_26888,0.0)+(_n_vx_27091/_n_vl_27094));
double _n_hvy_27096=(d::at(_n_LV_26888,1.0)+(_n_vy_27092/_n_vl_27094));
double _n_hvz_27097=(d::at(_n_LV_26888,2.0)+(_n_vz_27093/_n_vl_27094));
double _n_hl_27098=d::hypot(std::initializer_list<double>{_n_hvx_27095,_n_hvy_27096,_n_hvz_27097});
double _n_glint_27099=(([&](){auto _n_left_27374=([&](){auto _n_argument_27376=d::maximum({0.0,((((_n_nx_27078*_n_hvx_27095)+(_n_ny_27079*_n_hvy_27096))+(_n_nz_27080*_n_hvz_27097))/_n_hl_27098)});auto _n_argument_27377=60.0;return std::pow(_n_argument_27376,_n_argument_27377);})();auto _n_right_27375=([&](){auto _n_argument_27378=0.6;auto _n_argument_27379=0.9;auto _n_argument_27380=_n_hash_26889(_n_x_27062,(_n_r_27061*5.0));return _n_smooth_26893(_n_argument_27378,_n_argument_27379,_n_argument_27380);})();return (_n_left_27374*_n_right_27375);})()*(1.0-_n_crack_27085));
(void)((((_n_cr_27065=(_n_cr_27065+(1.2*_n_glint_27099))),(_n_cg_27066=(_n_cg_27066+(1.15*_n_glint_27099)))),(_n_cb_27067=(_n_cb_27067+(1.05*_n_glint_27099)))));
double _n_far_27100=(_n_smooth_26893(35.0,260.0,_n_Z_27072)*0.8);
double _n_toward_27101=([&](){auto _n_left_27381=std::exp(((-d::number(std::fabs((_n_x_27062-d::at(_n_SUN_26873,0.0)))))/28.0));auto _n_right_27382=_n_smooth_26893(150.0,600.0,_n_Z_27072);return (_n_left_27381*_n_right_27382);})();
(void)((((_n_cr_27065=_n_mix_26894(_n_cr_27065,(0.22+(0.6*_n_toward_27101)),_n_far_27100)),(_n_cg_27066=_n_mix_26894(_n_cg_27066,(0.3+(0.55*_n_toward_27101)),_n_far_27100))),(_n_cb_27067=_n_mix_26894(_n_cb_27067,(0.48+(0.4*_n_toward_27101)),_n_far_27100))));
(void)((_n_floor_27068=0.02));
(void)((_n_cap_27069=(0.5+(0.6*_n_clamp_26892(d::maximum({_n_cr_27065,_n_cg_27066,_n_cb_27067}))))));
}else {d::check_cancel();if(d::truth((_n_y_27064>=d::at(this->_n_crest_26912,(_n_x_27062+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_27383=this->_n_solid_26911;auto _n_index_27384=_n_k_27063;auto _n_value_27385=1.0;d::put(_n_array_27383,_n_index_27384,_n_value_27385);return _n_value_27385;})());
double _n_slope_27102=(d::at(this->_n_crest_26912,(_n_x_27062+2.0))-d::at(this->_n_crest_26912,_n_x_27062));
double _n_face_27103=(_n_clamp_26892((_n_slope_27102*0.5))*0.4);
double _n_below_27104=(_n_y_27064-d::at(this->_n_crest_26912,(_n_x_27062+1.0)));
double _n_rim_27105=([&](){auto _n_left_27386=std::exp(((-d::number(_n_below_27104))/0.9));auto _n_right_27387=(0.25+(0.9*std::exp(((-d::number(std::fabs((_n_x_27062-d::at(_n_SUN_26873,0.0)))))/30.0))));return (_n_left_27386*_n_right_27387);})();
double _n_streak_27106=(0.75+(0.5*_n_hash_26889(_n_x_27062,3.0)));
double _n_b_27107=((0.12+_n_face_27103)*_n_streak_27106);
(void)((_n_cr_27065=((0.1*_n_b_27107)+(_n_rim_27105*1.0))));
(void)((_n_cg_27066=((0.18*_n_b_27107)+(_n_rim_27105*0.97))));
(void)((_n_cb_27067=((0.38*_n_b_27107)+(_n_rim_27105*0.9))));
(void)((_n_cr_27065=(_n_cr_27065+(0.3*std::exp(((-d::number(_n_ds_27070))/7.0))))));
(void)((_n_cg_27066=(_n_cg_27066+(0.26*std::exp(((-d::number(_n_ds_27070))/7.0))))));
(void)((_n_cb_27067=(_n_cb_27067+(0.2*std::exp(((-d::number(_n_ds_27070))/7.0))))));
(void)((_n_floor_27068=0.03));
(void)((_n_cap_27069=(0.22+(0.85*_n_clamp_26892(d::maximum({_n_cr_27065,_n_cg_27066,_n_cb_27067}))))));
}else {d::check_cancel();double _n_band_27108=([&](){auto _n_left_27388=std::exp((-d::number(std::pow(((_n_r_27061-(90.0-(_n_x_27062*0.45)))/12.0),2.0))));auto _n_right_27389=([&](){auto _n_argument_27390=0.4;auto _n_argument_27391=0.7;auto _n_argument_27392=_n_fbm_26891((_n_x_27062*0.05),(_n_r_27061*0.08),3.0,0.0);return _n_smooth_26893(_n_argument_27390,_n_argument_27391,_n_argument_27392);})();return (_n_left_27388*_n_right_27389);})();
double _n_hs_27109=_n_hash_26889(((_n_x_27062*3.0)+1.0),((_n_r_27061*7.0)+2.0));
if(d::truth((_n_hs_27109>(0.992-(0.04*_n_band_27108))))){d::check_cancel();double _n_m_27110=([&](){auto _n_argument_27393=_n_hash_26889((_n_x_27062+17.0),(_n_r_27061+29.0));auto _n_argument_27394=3.0;return std::pow(_n_argument_27393,_n_argument_27394);})();
double _n_s_27111=(0.18+(0.5*_n_m_27110));
double _n_tint_27112=_n_hash_26889((_n_x_27062+5.0),(_n_r_27061+77.0));
auto _n_binding_27395=(d::truth((_n_tint_27112<0.3))?d::Array<double,false>{0.84,0.9,1.0}:(d::truth((_n_tint_27112>0.88))?d::Array<double,false>{1.0,0.93,0.84}:d::Array<double,false>{0.96,0.96,0.98}));
double _n_tr_27113=d::at(_n_binding_27395,0.0);
double _n_tg_27114=d::at(_n_binding_27395,1.0);
double _n_tb_27115=d::at(_n_binding_27395,2.0);
(void)((((_n_cr_27065=(_n_s_27111*_n_tr_27113)),(_n_cg_27066=(_n_s_27111*_n_tg_27114))),(_n_cb_27067=(_n_s_27111*_n_tb_27115))));
}
(void)((((_n_cr_27065=(_n_cr_27065+(0.015*_n_band_27108))),(_n_cg_27066=(_n_cg_27066+(0.018*_n_band_27108)))),(_n_cb_27067=(_n_cb_27067+(0.03*_n_band_27108)))));
}
}
(void)(((((([&](){auto&& _n_array_27396=this->_n_sr_26906;auto _n_index_27397=_n_k_27063;auto _n_value_27398=_n_cr_27065;d::put(_n_array_27396,_n_index_27397,_n_value_27398);return _n_value_27398;})(),([&](){auto&& _n_array_27399=this->_n_sg_26907;auto _n_index_27400=_n_k_27063;auto _n_value_27401=_n_cg_27066;d::put(_n_array_27399,_n_index_27400,_n_value_27401);return _n_value_27401;})()),([&](){auto&& _n_array_27402=this->_n_sb_26908;auto _n_index_27403=_n_k_27063;auto _n_value_27404=_n_cb_27067;d::put(_n_array_27402,_n_index_27403,_n_value_27404);return _n_value_27404;})()),([&](){auto&& _n_array_27405=this->_n_sf_26909;auto _n_index_27406=_n_k_27063;auto _n_value_27407=_n_floor_27068;d::put(_n_array_27405,_n_index_27406,_n_value_27407);return _n_value_27407;})()),([&](){auto&& _n_array_27408=this->_n_scap_26910;auto _n_index_27409=_n_k_27063;auto _n_value_27410=_n_cap_27069;d::put(_n_array_27408,_n_index_27409,_n_value_27410);return _n_value_27410;})()));
}}
}}
{double _n_k_27116=0.0;
for(;d::truth((_n_k_27116<this->_n_N_26900));(void)((_n_k_27116++))){d::check_cancel();(void)(this->_n_dot_26905(_n_k_27116,d::at(this->_n_sr_26906,_n_k_27116),d::at(this->_n_sg_26907,_n_k_27116),d::at(this->_n_sb_26908,_n_k_27116),d::at(this->_n_sf_26909,_n_k_27116),d::at(this->_n_scap_26910,_n_k_27116)));
}}
this->_n_TW_26917=256.0;
this->_n_TH_26918=128.0;
this->_n_tr_26919=d::Array<float,true>(size_t((this->_n_TW_26917*this->_n_TH_26918)));
this->_n_tg_26920=d::Array<float,true>(size_t((this->_n_TW_26917*this->_n_TH_26918)));
this->_n_tb_26921=d::Array<float,true>(size_t((this->_n_TW_26917*this->_n_TH_26918)));
{double _n_j_27117=0.0;
for(;d::truth((_n_j_27117<this->_n_TH_26918));(void)((_n_j_27117++))){d::check_cancel();{double _n_i_27118=0.0;
for(;d::truth((_n_i_27118<this->_n_TW_26917));(void)((_n_i_27118++))){d::check_cancel();double _n_u_27119=(_n_i_27118/this->_n_TW_26917);
double _n_v_27120=((_n_j_27117+0.5)/this->_n_TH_26918);
double _n_lat_27121=((0.5-_n_v_27120)*ascii::PI);
double _n_warp_27122=([&](){auto _n_left_27411=(0.035*(_n_fbm_26891((_n_u_27119*10.0),(_n_v_27120*18.0),3.0,10.0)-0.5));auto _n_right_27412=(1.0+(1.5*std::exp((-d::number(std::pow((_n_lat_27121/0.3),2.0))))));return (_n_left_27411*_n_right_27412);})();
double _n_s_27123=std::sin((_n_lat_27121+_n_warp_27122));
double _n_wave_27124=([&](){auto _n_left_27413=std::sin(((_n_s_27123*13.0)+(0.8*std::sin((_n_s_27123*4.0)))));auto _n_right_27414=(0.45*std::sin(((_n_s_27123*33.0)+1.3)));return (_n_left_27413+_n_right_27414);})();
double _n_tone_27125=((0.56+(0.3*_n_wave_27124))+(0.25*(_n_fbm_26891(((_n_s_27123*22.0)+3.0),0.5,3.0,0.0)-0.5)));
(void)((_n_tone_27125=(_n_tone_27125+(0.05*(_n_fbm_26891((_n_u_27119*40.0),(_n_v_27120*20.0),2.0,40.0)-0.5)))));
(void)((_n_tone_27125=_n_clamp_26892(_n_tone_27125)));
double _n_r_27126=_n_mix_26894(0.5,1.0,_n_tone_27125);
double _n_g_27127=_n_mix_26894(0.3,0.86,_n_tone_27125);
double _n_b_27128=_n_mix_26894(0.13,0.6,_n_tone_27125);
double _n_eq_27129=std::exp((-d::number(std::pow((_n_s_27123/0.1),2.0))));
(void)((((_n_r_27126=_n_mix_26894(_n_r_27126,1.0,(0.55*_n_eq_27129))),(_n_g_27127=_n_mix_26894(_n_g_27127,0.9,(0.55*_n_eq_27129)))),(_n_b_27128=_n_mix_26894(_n_b_27128,0.66,(0.55*_n_eq_27129)))));
double _n_pole_27130=([&](){auto _n_argument_27415=0.72;auto _n_argument_27416=0.96;auto _n_argument_27417=std::fabs(_n_s_27123);return _n_smooth_26893(_n_argument_27415,_n_argument_27416,_n_argument_27417);})();
(void)((((_n_r_27126=_n_mix_26894(_n_r_27126,0.48,(0.65*_n_pole_27130))),(_n_g_27127=_n_mix_26894(_n_g_27127,0.53,(0.65*_n_pole_27130)))),(_n_b_27128=_n_mix_26894(_n_b_27128,0.58,(0.65*_n_pole_27130)))));
double _n_t_27131=((_n_j_27117*this->_n_TW_26917)+_n_i_27118);
(void)(((([&](){auto&& _n_array_27418=this->_n_tr_26919;auto _n_index_27419=_n_t_27131;auto _n_value_27420=_n_r_27126;d::put(_n_array_27418,_n_index_27419,_n_value_27420);return _n_value_27420;})(),([&](){auto&& _n_array_27421=this->_n_tg_26920;auto _n_index_27422=_n_t_27131;auto _n_value_27423=_n_g_27127;d::put(_n_array_27421,_n_index_27422,_n_value_27423);return _n_value_27423;})()),([&](){auto&& _n_array_27424=this->_n_tb_26921;auto _n_index_27425=_n_t_27131;auto _n_value_27426=_n_b_27128;d::put(_n_array_27424,_n_index_27425,_n_value_27426);return _n_value_27426;})()));
}}
}}
this->_n_RB_26923=520.0;
this->_n_TB_26924=720.0;
this->_n_R0_26925=1.1;
this->_n_R1_26926=2.4;
this->_n_rt_26927=d::Array<float,true>(size_t((this->_n_RB_26923*this->_n_TB_26924)));
this->_n_omega_26928=d::Array<float,true>(size_t(this->_n_RB_26923));
{double _n_i_27145=0.0;
for(;d::truth((_n_i_27145<this->_n_RB_26923));(void)((_n_i_27145++))){d::check_cancel();double _n_rr_27146=(this->_n_R0_26925+(((this->_n_R1_26926-this->_n_R0_26925)*(_n_i_27145+0.5))/this->_n_RB_26923));
(void)(([&](){auto&& _n_array_27427=this->_n_omega_26928;auto _n_index_27428=_n_i_27145;auto _n_value_27429=(0.05*std::pow(_n_rr_27146,(-d::number(1.5))));d::put(_n_array_27427,_n_index_27428,_n_value_27429);return _n_value_27429;})());
{double _n_j_27147=0.0;
for(;d::truth((_n_j_27147<this->_n_TB_26924));(void)((_n_j_27147++))){d::check_cancel();(void)(([&](){auto&& _n_array_27430=this->_n_rt_26927;auto _n_index_27431=((_n_i_27145*this->_n_TB_26924)+_n_j_27147);auto _n_value_27432=(0.8+(0.4*_n_fbm_26891((_n_j_27147/16.0),(_n_i_27145*0.3),3.0,45.0)));d::put(_n_array_27430,_n_index_27431,_n_value_27432);return _n_value_27432;})());
}}
}}
this->_n_sat_26929=d::Array<double,false>{};
this->_n_pa_26930=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_pl_26931=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_pu_26932=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_pv_26933=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_pz_26934=d::Array<float,true>(size_t(this->_n_N_26900)).fill((-d::number(9.0)));
this->_n_ra_26935=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_rcr_26936=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_rcg_26937=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_rcb_26938=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_rz_26939=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_rbin_26940=d::Array<int16_t,true>(size_t(this->_n_N_26900));
this->_n_rth_26941=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_SUB_26942=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.25,0.25},d::Array<double,false>{0.75,0.25},d::Array<double,false>{0.25,0.75},d::Array<double,false>{0.75,0.75}};
{double _n_r_27148=0.0;
for(;d::truth((_n_r_27148<_n_HZ_26865));(void)((_n_r_27148++))){d::check_cancel();{double _n_x_27149=0.0;
for(;d::truth((_n_x_27149<_n_W_26863));(void)((_n_x_27149++))){d::check_cancel();double _n_k_27150=((_n_r_27148*_n_W_26863)+_n_x_27149);
if(d::truth(d::at(this->_n_solid_26911,_n_k_27150))){d::check_cancel();continue;
}
double _n_acov_27151=0.0;
double _n_ar_27152=0.0;
double _n_ag_27153=0.0;
double _n_ab_27154=0.0;
double _n_pcov_27155=0.0;
for(auto &&_n_item_27433:this->_n_SUB_26942){d::check_cancel();auto _n_binding_27434=_n_item_27433;
double _n_ox_27156=d::at(_n_binding_27434,0.0);
double _n_oy_27157=d::at(_n_binding_27434,1.0);
{
double _n_px_27158=(((_n_x_27149+_n_ox_27156)-d::at(_n_SC_26869,0.0))/_n_SR_26870);
double _n_py_27159=((-d::number(((_n_r_27148+_n_oy_27157)-d::at(_n_SC_26869,1.0))))/_n_SR_26870);
double _n_q2_27160=((_n_px_27158*_n_px_27158)+(_n_py_27159*_n_py_27159));
double _n_zs_27161=(d::truth((_n_q2_27160<1.0))?std::sqrt((1.0-_n_q2_27160)):(-d::number(9.0)));
if(d::truth((_n_q2_27160<1.0))){d::check_cancel();(void)((_n_pcov_27155=(_n_pcov_27155+0.25)));
}
double _n_zr_27162=((-d::number(((d::at(_n_NR_26883,0.0)*_n_px_27158)+(d::at(_n_NR_26883,1.0)*_n_py_27159))))/d::at(_n_NR_26883,2.0));
double _n_rr_27163=std::sqrt((_n_q2_27160+(_n_zr_27162*_n_zr_27162)));
if(((d::truth((_n_rr_27163<this->_n_R0_26925))||d::truth((_n_rr_27163>this->_n_R1_26926)))||d::truth((_n_zr_27162<_n_zs_27161)))){d::check_cancel();continue;
}
auto _n_binding_27435=_n_ring_26896(_n_rr_27163);
double _n_a_27164=d::at(_n_binding_27435,0.0);
double _n_cr_27165=d::at(_n_binding_27435,1.0);
double _n_cg_27166=d::at(_n_binding_27435,2.0);
double _n_cb_27167=d::at(_n_binding_27435,3.0);
if(d::truth((_n_a_27164<=0.0))){d::check_cancel();continue;
}
double _n_d_27168=(((_n_px_27158*d::at(_n_LS_26886,0.0))+(_n_py_27159*d::at(_n_LS_26886,1.0)))+(_n_zr_27162*d::at(_n_LS_26886,2.0)));
double _n_perp_27169=std::sqrt(d::maximum({0.0,((_n_rr_27163*_n_rr_27163)-(_n_d_27168*_n_d_27168))}));
double _n_lit_27170=(d::truth((_n_d_27168<0.0))?_n_smooth_26893(0.98,1.03,_n_perp_27169):1.0);
double _n_b_27171=(0.92*(0.08+(0.92*_n_lit_27170)));
(void)(((((_n_acov_27151=(_n_acov_27151+(_n_a_27164*0.25))),(_n_ar_27152=(_n_ar_27152+(((_n_a_27164*_n_cr_27165)*_n_b_27171)*0.25)))),(_n_ag_27153=(_n_ag_27153+(((_n_a_27164*_n_cg_27166)*_n_b_27171)*0.25)))),(_n_ab_27154=(_n_ab_27154+(((_n_a_27164*_n_cb_27167)*_n_b_27171)*0.25)))));

}
}
double _n_px_27172=(((_n_x_27149+0.5)-d::at(_n_SC_26869,0.0))/_n_SR_26870);
double _n_py_27173=((-d::number(((_n_r_27148+0.5)-d::at(_n_SC_26869,1.0))))/_n_SR_26870);
double _n_q2_27174=((_n_px_27172*_n_px_27172)+(_n_py_27173*_n_py_27173));
if(d::truth((_n_pcov_27155>0.0))){d::check_cancel();double _n_qc_27175=([&](){auto _n_argument_27436=0.999;auto _n_argument_27437=std::sqrt(_n_q2_27174);return d::minimum({_n_argument_27436,_n_argument_27437});})();
double _n_nz_27176=std::sqrt((1.0-(_n_qc_27175*_n_qc_27175)));
double _n_nx_27177=(d::truth((_n_q2_27174>0.998))?((_n_px_27172/std::sqrt(_n_q2_27174))*_n_qc_27175):_n_px_27172);
double _n_ny_27178=(d::truth((_n_q2_27174>0.998))?((_n_py_27173/std::sqrt(_n_q2_27174))*_n_qc_27175):_n_py_27173);
double _n_ndl_27179=(((_n_nx_27177*d::at(_n_LS_26886,0.0))+(_n_ny_27178*d::at(_n_LS_26886,1.0)))+(_n_nz_27176*d::at(_n_LS_26886,2.0)));
double _n_shade_27180=1.0;
double _n_dn_27181=(((d::at(_n_NR_26883,0.0)*d::at(_n_LS_26886,0.0))+(d::at(_n_NR_26883,1.0)*d::at(_n_LS_26886,1.0)))+(d::at(_n_NR_26883,2.0)*d::at(_n_LS_26886,2.0)));
double _n_tt_27182=((-d::number((((d::at(_n_NR_26883,0.0)*_n_nx_27177)+(d::at(_n_NR_26883,1.0)*_n_ny_27178))+(d::at(_n_NR_26883,2.0)*_n_nz_27176))))/_n_dn_27181);
if(d::truth((_n_tt_27182>0.0))){d::check_cancel();double _n_qx_27183=(_n_nx_27177+(_n_tt_27182*d::at(_n_LS_26886,0.0)));
double _n_qy_27184=(_n_ny_27178+(_n_tt_27182*d::at(_n_LS_26886,1.0)));
double _n_qz_27185=(_n_nz_27176+(_n_tt_27182*d::at(_n_LS_26886,2.0)));
(void)((_n_shade_27180=(1.0-(0.88*d::at(_n_ring_26896(d::hypot(std::initializer_list<double>{_n_qx_27183,_n_qy_27184,_n_qz_27185})),0.0)))));
}
double _n_day_27186=([&](){auto _n_left_27438=_n_smooth_26893((-d::number(0.03)),0.14,_n_ndl_27179);auto _n_right_27439=(0.3+(0.85*std::sqrt(_n_clamp_26892(_n_ndl_27179))));return (_n_left_27438*_n_right_27439);})();
double _n_limb_27187=(0.5+(0.5*std::sqrt(_n_nz_27176)));
(void)(([&](){auto&& _n_array_27440=this->_n_pl_26931;auto _n_index_27441=_n_k_27150;auto _n_value_27442=(((_n_day_27186*_n_limb_27187)*_n_shade_27180)+(0.05*_n_limb_27187));d::put(_n_array_27440,_n_index_27441,_n_value_27442);return _n_value_27442;})());
double _n_sy_27188=(((_n_nx_27177*d::at(_n_NR_26883,0.0))+(_n_ny_27178*d::at(_n_NR_26883,1.0)))+(_n_nz_27176*d::at(_n_NR_26883,2.0)));
double _n_s1_27189=(((_n_nx_27177*d::at(_n_E1_26884,0.0))+(_n_ny_27178*d::at(_n_E1_26884,1.0)))+(_n_nz_27176*d::at(_n_E1_26884,2.0)));
double _n_s2_27190=(((_n_nx_27177*d::at(_n_E2_26885,0.0))+(_n_ny_27178*d::at(_n_E2_26885,1.0)))+(_n_nz_27176*d::at(_n_E2_26885,2.0)));
(void)(([&](){auto&& _n_array_27443=this->_n_pu_26932;auto _n_index_27444=_n_k_27150;auto _n_value_27445=(std::atan2(_n_s1_27189,_n_s2_27190)/(ascii::PI*2.0));d::put(_n_array_27443,_n_index_27444,_n_value_27445);return _n_value_27445;})());
(void)(([&](){auto&& _n_array_27446=this->_n_pv_26933;auto _n_index_27447=_n_k_27150;auto _n_value_27448=(((0.5-(std::asin(([&](){auto _n_argument_27449=(-d::number(1.0));auto _n_argument_27450=d::minimum({1.0,_n_sy_27188});return d::maximum({_n_argument_27449,_n_argument_27450});})())/ascii::PI))*this->_n_TH_26918)-0.5);d::put(_n_array_27446,_n_index_27447,_n_value_27448);return _n_value_27448;})());
(void)(([&](){auto&& _n_array_27451=this->_n_pa_26930;auto _n_index_27452=_n_k_27150;auto _n_value_27453=_n_pcov_27155;d::put(_n_array_27451,_n_index_27452,_n_value_27453);return _n_value_27453;})());
(void)(([&](){auto&& _n_array_27454=this->_n_pz_26934;auto _n_index_27455=_n_k_27150;auto _n_value_27456=_n_nz_27176;d::put(_n_array_27454,_n_index_27455,_n_value_27456);return _n_value_27456;})());
}
double _n_zr_27191=((-d::number(((d::at(_n_NR_26883,0.0)*_n_px_27172)+(d::at(_n_NR_26883,1.0)*_n_py_27173))))/d::at(_n_NR_26883,2.0));
double _n_rr_27192=std::sqrt((_n_q2_27174+(_n_zr_27191*_n_zr_27191)));
if(d::truth((_n_acov_27151>0.002))){d::check_cancel();(void)(((((([&](){auto&& _n_array_27457=this->_n_ra_26935;auto _n_index_27458=_n_k_27150;auto _n_value_27459=_n_acov_27151;d::put(_n_array_27457,_n_index_27458,_n_value_27459);return _n_value_27459;})(),([&](){auto&& _n_array_27460=this->_n_rcr_26936;auto _n_index_27461=_n_k_27150;auto _n_value_27462=_n_ar_27152;d::put(_n_array_27460,_n_index_27461,_n_value_27462);return _n_value_27462;})()),([&](){auto&& _n_array_27463=this->_n_rcg_26937;auto _n_index_27464=_n_k_27150;auto _n_value_27465=_n_ag_27153;d::put(_n_array_27463,_n_index_27464,_n_value_27465);return _n_value_27465;})()),([&](){auto&& _n_array_27466=this->_n_rcb_26938;auto _n_index_27467=_n_k_27150;auto _n_value_27468=_n_ab_27154;d::put(_n_array_27466,_n_index_27467,_n_value_27468);return _n_value_27468;})()),([&](){auto&& _n_array_27469=this->_n_rz_26939;auto _n_index_27470=_n_k_27150;auto _n_value_27471=_n_zr_27191;d::put(_n_array_27469,_n_index_27470,_n_value_27471);return _n_value_27471;})()));
(void)(([&](){auto&& _n_array_27472=this->_n_rbin_26940;auto _n_index_27473=_n_k_27150;auto _n_value_27474=([&](){auto _n_argument_27475=0.0;auto _n_argument_27476=([&](){auto _n_argument_27477=(this->_n_RB_26923-1.0);auto _n_argument_27478=std::floor((((_n_rr_27192-this->_n_R0_26925)/(this->_n_R1_26926-this->_n_R0_26925))*this->_n_RB_26923));return d::minimum({_n_argument_27477,_n_argument_27478});})();return d::maximum({_n_argument_27475,_n_argument_27476});})();d::put(_n_array_27472,_n_index_27473,_n_value_27474);return _n_value_27474;})());
double _n_th_27193=std::atan2((((_n_px_27172*d::at(_n_E2_26885,0.0))+(_n_py_27173*d::at(_n_E2_26885,1.0)))+(_n_zr_27191*d::at(_n_E2_26885,2.0))),(((_n_px_27172*d::at(_n_E1_26884,0.0))+(_n_py_27173*d::at(_n_E1_26884,1.0)))+(_n_zr_27191*d::at(_n_E1_26884,2.0))));
(void)(([&](){auto&& _n_array_27479=this->_n_rth_26941;auto _n_index_27480=_n_k_27150;auto _n_value_27481=_n_th_27193;d::put(_n_array_27479,_n_index_27480,_n_value_27481);return _n_value_27481;})());
}
if((d::truth((_n_pcov_27155>0.0))||d::truth((_n_acov_27151>0.002)))){d::check_cancel();(void)(this->_n_sat_26929.push(_n_k_27150));
}
}}
}}
this->_n_grains_26943=d::map(_n_PLUMES_26880,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::Array<std::array<double,6>,false>{auto _n_binding_27482=_a0;
double _n_ph_27194=d::at(_n_binding_27482,2.0);
double _n_sp_27195=d::at(_n_binding_27482,3.0);
double _n_pi_27196=_a1;
{
d::Array<std::array<double,6>,false> _n_list_27197=d::Array<std::array<double,6>,false>{};
{double _n_i_27198=0.0;
for(;d::truth((_n_i_27198<150.0));(void)((_n_i_27198++))){d::check_cancel();double _n_life_27199=(16.0+(12.0*_n_hash_26889(_n_i_27198,((_n_pi_27196*7.0)+1.0))));
double _n_vy_27200=((_n_ph_27194*(0.75+(0.5*_n_hash_26889(_n_i_27198,((_n_pi_27196*7.0)+2.0)))))/(_n_life_27199*0.8));
double _n_vx_27201=((((_n_hash_26889(_n_i_27198,((_n_pi_27196*7.0)+3.0))-0.5)*3.2)*_n_sp_27195)*_n_vy_27200);
(void)(_n_list_27197.push(std::array<double,6>{_n_hash_26889(_n_i_27198,((_n_pi_27196*7.0)+4.0)),_n_life_27199,_n_vx_27201,_n_vy_27200,((_n_vy_27200/_n_life_27199)*0.35),(_n_hash_26889(_n_i_27198,((_n_pi_27196*7.0)+5.0))*6.28)}));
}}
return _n_list_27197;

}
});
this->_n_live_26944=d::Array<uint8_t,true>(size_t(this->_n_N_26900));
for(auto &&_n_item_27483:this->_n_sat_26929){d::check_cancel();double _n_k_27202=_n_item_27483;
(void)(([&](){auto&& _n_array_27484=this->_n_live_26944;auto _n_index_27485=_n_k_27202;auto _n_value_27486=1.0;d::put(_n_array_27484,_n_index_27485,_n_value_27486);return _n_value_27486;})());
}
{double _n_i_27206=0.0;
for(;d::truth((_n_i_27206<720.0));(void)((_n_i_27206++))){d::check_cancel();auto _n_binding_27487=this->_n_orbit_26945((((_n_i_27206/720.0)*ascii::PI)*2.0));
double _n_ox_27207=d::at(_n_binding_27487,0.0);
double _n_oy_27208=d::at(_n_binding_27487,1.0);
double _n_cx_27209=d::round((d::at(_n_SC_26869,0.0)+(_n_ox_27207*_n_SR_26870)));
double _n_cy_27210=d::round((d::at(_n_SC_26869,1.0)-(_n_oy_27208*_n_SR_26870)));
{double _n_dy_27211=(-d::number(3.0));
for(;d::truth((_n_dy_27211<=3.0));(void)((_n_dy_27211++))){d::check_cancel();{double _n_dx_27212=(-d::number(3.0));
for(;d::truth((_n_dx_27212<=3.0));(void)((_n_dx_27212++))){d::check_cancel();double _n_x_27213=(_n_cx_27209+_n_dx_27212);
double _n_r_27214=(_n_cy_27210+_n_dy_27211);
if((((d::truth((_n_x_27213>=0.0))&&d::truth((_n_x_27213<_n_W_26863)))&&d::truth((_n_r_27214>=0.0)))&&d::truth((_n_r_27214<_n_H_26864)))){d::check_cancel();(void)(([&](){auto&& _n_array_27488=this->_n_live_26944;auto _n_index_27489=((_n_r_27214*_n_W_26863)+_n_x_27213);auto _n_value_27490=1.0;d::put(_n_array_27488,_n_index_27489,_n_value_27490);return _n_value_27490;})());
}
}}
}}
}}
for(auto &&_n_item_27491:_n_PLUMES_26880){d::check_cancel();auto _n_binding_27492=_n_item_27491;
double _n_bx_27215=d::at(_n_binding_27492,0.0);
double _n_by_27216=d::at(_n_binding_27492,1.0);
double _n_ph_27217=d::at(_n_binding_27492,2.0);
double _n_sp_27218=d::at(_n_binding_27492,3.0);
{
{double _n_r_27219=d::maximum({0.0,((_n_by_27216-_n_ph_27217)-8.0)});
for(;d::truth((_n_r_27219<=_n_by_27216));(void)((_n_r_27219++))){d::check_cancel();double _n_hw_27220=(std::ceil(((0.7+(((_n_by_27216-_n_r_27219)*_n_sp_27218)*1.4))*2.2))+3.0);
{double _n_x_27221=([&](){auto _n_argument_27493=0.0;auto _n_argument_27494=std::floor((_n_bx_27215-_n_hw_27220));return d::maximum({_n_argument_27493,_n_argument_27494});})();
for(;d::truth((_n_x_27221<=([&](){auto _n_argument_27495=(_n_W_26863-1.0);auto _n_argument_27496=std::ceil((_n_bx_27215+_n_hw_27220));return d::minimum({_n_argument_27495,_n_argument_27496});})()));(void)((_n_x_27221++))){d::check_cancel();(void)(([&](){auto&& _n_array_27497=this->_n_live_26944;auto _n_index_27498=((_n_r_27219*_n_W_26863)+_n_x_27221);auto _n_value_27499=1.0;d::put(_n_array_27497,_n_index_27498,_n_value_27499);return _n_value_27499;})());
}}
}}

}
}
{double _n_r_27222=(d::at(_n_SUN_26873,1.0)-14.0);
for(;d::truth((_n_r_27222<=(d::at(_n_SUN_26873,1.0)+14.0)));(void)((_n_r_27222++))){d::check_cancel();{double _n_x_27223=(d::at(_n_SUN_26873,0.0)-26.0);
for(;d::truth((_n_x_27223<=(d::at(_n_SUN_26873,0.0)+26.0)));(void)((_n_x_27223++))){d::check_cancel();if((d::truth((_n_x_27223>=0.0))&&d::truth((_n_x_27223<_n_W_26863)))){d::check_cancel();(void)(([&](){auto&& _n_array_27500=this->_n_live_26944;auto _n_index_27501=((_n_r_27222*_n_W_26863)+_n_x_27223);auto _n_value_27502=1.0;d::put(_n_array_27500,_n_index_27501,_n_value_27502);return _n_value_27502;})());
}
}}
}}
for(auto &&_n_item_27503:_n_BRIGHT_26879){d::check_cancel();auto _n_binding_27504=_n_item_27503;
double _n_x_27224=d::at(_n_binding_27504,0.0);
double _n_r_27225=d::at(_n_binding_27504,1.0);
{double _n_dy_27226=(-d::number(1.0));
for(;d::truth((_n_dy_27226<=1.0));(void)((_n_dy_27226++))){d::check_cancel();{double _n_dx_27227=(-d::number(1.0));
for(;d::truth((_n_dx_27227<=1.0));(void)((_n_dx_27227++))){d::check_cancel();(void)(([&](){auto&& _n_array_27505=this->_n_live_26944;auto _n_index_27506=((((_n_r_27225+_n_dy_27226)*_n_W_26863)+_n_x_27224)+_n_dx_27227);auto _n_value_27507=1.0;d::put(_n_array_27505,_n_index_27506,_n_value_27507);return _n_value_27507;})());
}}
}}
}
this->_n_cells_26946=d::Array<double,false>{};
{double _n_k_27228=0.0;
for(;d::truth((_n_k_27228<this->_n_N_26900));(void)((_n_k_27228++))){d::check_cancel();if(d::truth(d::at(this->_n_live_26944,_n_k_27228))){d::check_cancel();(void)(this->_n_cells_26946.push(_n_k_27228));
}
}}
this->_n_dirty_26947=d::Array<uint8_t,true>(size_t(_n_H_26864));
for(auto &&_n_item_27508:this->_n_cells_26946){d::check_cancel();double _n_k_27229=_n_item_27508;
(void)(([&](){auto&& _n_array_27509=this->_n_dirty_26947;auto _n_index_27510=double(d::i32((_n_k_27229/_n_W_26863))|d::i32(0.0));auto _n_value_27511=1.0;d::put(_n_array_27509,_n_index_27510,_n_value_27511);return _n_value_27511;})());
}
this->_n_fr_26948=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_fg_26949=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_fb_26950=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_ff_26951=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_fc_26952=d::Array<float,true>(size_t(this->_n_N_26900));
this->_n_lines_26953=d::Array<d::String,false>{};
{double _n_r_27230=0.0;
for(;d::truth((_n_r_27230<_n_H_26864));(void)((_n_r_27230++))){d::check_cancel();(void)(this->_n_lines_26953.push(d::join(this->_n_chars_26903.slice((_n_r_27230*_n_W_26863),((_n_r_27230+1.0)*_n_W_26863)),d::String(u""))));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_27322> _a1) mutable ->d::String{double _n_t_27231=_a0;
auto _n_binding_27514=(d::present(_a1)?_a1:([&](){auto _n_object_27513=std::make_shared<_n_Record_27322>();return _n_object_27513;})());
std::optional<d::Array<uint8_t,true>> _n_color_27232=_n_binding_27514->_p_color;
{
for(auto &&_n_item_27515:this->_n_cells_26946){d::check_cancel();double _n_k_27233=_n_item_27515;
(void)(((((([&](){auto&& _n_array_27516=this->_n_fr_26948;auto _n_index_27517=_n_k_27233;auto _n_value_27518=d::at(this->_n_sr_26906,_n_k_27233);d::put(_n_array_27516,_n_index_27517,_n_value_27518);return _n_value_27518;})(),([&](){auto&& _n_array_27519=this->_n_fg_26949;auto _n_index_27520=_n_k_27233;auto _n_value_27521=d::at(this->_n_sg_26907,_n_k_27233);d::put(_n_array_27519,_n_index_27520,_n_value_27521);return _n_value_27521;})()),([&](){auto&& _n_array_27522=this->_n_fb_26950;auto _n_index_27523=_n_k_27233;auto _n_value_27524=d::at(this->_n_sb_26908,_n_k_27233);d::put(_n_array_27522,_n_index_27523,_n_value_27524);return _n_value_27524;})()),([&](){auto&& _n_array_27525=this->_n_ff_26951;auto _n_index_27526=_n_k_27233;auto _n_value_27527=d::at(this->_n_sf_26909,_n_k_27233);d::put(_n_array_27525,_n_index_27526,_n_value_27527);return _n_value_27527;})()),([&](){auto&& _n_array_27528=this->_n_fc_26952;auto _n_index_27529=_n_k_27233;auto _n_value_27530=d::at(this->_n_scap_26910,_n_k_27233);d::put(_n_array_27528,_n_index_27529,_n_value_27530);return _n_value_27530;})()));
}
auto _n_binding_27531=this->_n_orbit_26945((1.9+(((_n_t_27231/_n_MOON_T_26875)*ascii::PI)*2.0)));
double _n_mx_27234=d::at(_n_binding_27531,0.0);
double _n_my_27235=d::at(_n_binding_27531,1.0);
double _n_mz_27236=d::at(_n_binding_27531,2.0);
double _n_msx_27237=(d::at(_n_SC_26869,0.0)+(_n_mx_27234*_n_SR_26870));
double _n_msy_27238=(d::at(_n_SC_26869,1.0)-(_n_my_27235*_n_SR_26870));
auto _n_moonAt_27239=[&]( double _a0) mutable ->double{double _n_k_27240=_a0;
{
double _n_x_27241=d::mod(_n_k_27240,_n_W_26863);
double _n_r_27242=double(d::i32((_n_k_27240/_n_W_26863))|d::i32(0.0));
double _n_d_27243=d::hypot(std::initializer_list<double>{((_n_x_27241+0.5)-_n_msx_27237),((_n_r_27242+0.5)-_n_msy_27238)});
return _n_smooth_26893(1.9,1.2,_n_d_27243);

}
};
auto _n_moonLit_27244=[&]( double _a0) mutable ->double{double _n_k_27245=_a0;
{
double _n_x_27246=d::mod(_n_k_27245,_n_W_26863);
double _n_r_27247=double(d::i32((_n_k_27245/_n_W_26863))|d::i32(0.0));
return (0.35+(0.65*_n_smooth_26893((-d::number(0.4)),0.6,(((((_n_x_27246+0.5)-_n_msx_27237)*d::at(_n_LS_26886,0.0))-(((_n_r_27247+0.5)-_n_msy_27238)*d::at(_n_LS_26886,1.0)))/1.4))));

}
};
double _n_spin_27248=(_n_t_27231*0.0025);
auto _n_lay_27249=[&]( double _a0,double _a1,double _a2,double _a3,double _a4) mutable ->void{double _n_k_27250=_a0;
double _n_c_27251=_a1;
double _n_cr_27252=_a2;
double _n_cg_27253=_a3;
double _n_cb_27254=_a4;
{
(void)(((([&](){auto&& _n_array_27532=this->_n_fr_26948;auto _n_index_27533=_n_k_27250;auto _n_value_27534=_n_mix_26894(d::at(this->_n_fr_26948,_n_k_27250),_n_cr_27252,_n_c_27251);d::put(_n_array_27532,_n_index_27533,_n_value_27534);return _n_value_27534;})(),([&](){auto&& _n_array_27535=this->_n_fg_26949;auto _n_index_27536=_n_k_27250;auto _n_value_27537=_n_mix_26894(d::at(this->_n_fg_26949,_n_k_27250),_n_cg_27253,_n_c_27251);d::put(_n_array_27535,_n_index_27536,_n_value_27537);return _n_value_27537;})()),([&](){auto&& _n_array_27538=this->_n_fb_26950;auto _n_index_27539=_n_k_27250;auto _n_value_27540=_n_mix_26894(d::at(this->_n_fb_26950,_n_k_27250),_n_cb_27254,_n_c_27251);d::put(_n_array_27538,_n_index_27539,_n_value_27540);return _n_value_27540;})()));

}
};
for(auto &&_n_item_27541:this->_n_sat_26929){d::check_cancel();double _n_k_27255=_n_item_27541;
{
double _n_m_27256=_n_moonAt_27239(_n_k_27255);
bool _n_mzBehind_27257=([&]()->bool{auto _n_logical_27542=(_n_mz_27236<d::at(this->_n_pz_26934,_n_k_27255));return d::truth(_n_logical_27542)?(d::at(this->_n_pa_26930,_n_k_27255)>0.5):_n_logical_27542;})();
if(((d::truth((_n_m_27256>0.0))&&d::truth((!d::truth(_n_mzBehind_27257))))&&d::truth(([&]()->bool{auto _n_logical_27543=(d::at(this->_n_ra_26935,_n_k_27255)==0.0);return d::truth(_n_logical_27543)?_n_logical_27543:(_n_mz_27236<d::at(this->_n_rz_26939,_n_k_27255));})()))){d::check_cancel();(void)(([&](){auto _n_argument_27544=_n_k_27255;auto _n_argument_27545=_n_m_27256;auto _n_argument_27546=(0.82*_n_moonLit_27244(_n_k_27255));auto _n_argument_27547=(0.8*_n_moonLit_27244(_n_k_27255));auto _n_argument_27548=(0.76*_n_moonLit_27244(_n_k_27255));return _n_lay_27249(_n_argument_27544,_n_argument_27545,_n_argument_27546,_n_argument_27547,_n_argument_27548);})());
}
bool _n_ringOver_27258=([&]()->bool{auto _n_logical_27549=(d::at(this->_n_ra_26935,_n_k_27255)>0.0);return d::truth(_n_logical_27549)?([&]()->bool{auto _n_logical_27550=(d::at(this->_n_pa_26930,_n_k_27255)==0.0);return d::truth(_n_logical_27550)?_n_logical_27550:(d::at(this->_n_rz_26939,_n_k_27255)>(d::at(this->_n_pz_26934,_n_k_27255)-0.001));})():_n_logical_27549;})();
auto _n_drawRing_27259=[&]( ) mutable ->void{{
double _n_b_27260=d::at(this->_n_rbin_26940,_n_k_27255);
double _n_th_27261=((d::at(this->_n_rth_26941,_n_k_27255)-(d::at(this->_n_omega_26928,_n_b_27260)*_n_t_27231))/(ascii::PI*2.0));
(void)((_n_th_27261=(d::mod((d::mod(_n_th_27261,1.0)+1.0),1.0)*this->_n_TB_26924)));
double _n_j0_27262=double(d::i32(_n_th_27261)|d::i32(0.0));
double _n_j1_27263=d::mod((_n_j0_27262+1.0),this->_n_TB_26924);
double _n_aj_27264=(_n_th_27261-_n_j0_27262);
double _n_s_27265=((d::at(this->_n_rt_26927,((_n_b_27260*this->_n_TB_26924)+_n_j0_27262))*(1.0-_n_aj_27264))+(d::at(this->_n_rt_26927,((_n_b_27260*this->_n_TB_26924)+_n_j1_27263))*_n_aj_27264));
double _n_sp_27266=(((d::at(this->_n_rth_26941,_n_k_27255)-0.4)-(_n_t_27231*0.016))/(ascii::PI*2.0));
(void)((_n_sp_27266=std::fabs((_n_sp_27266-(d::round((_n_sp_27266*2.0))/2.0)))));
(void)((_n_s_27265=(_n_s_27265*(1.0-([&](){auto _n_left_27551=([&](){auto _n_left_27553=(0.3*std::exp((-d::number(std::pow((_n_sp_27266/0.012),2.0)))));auto _n_right_27554=_n_smooth_26893(1.6,1.7,(this->_n_R0_26925+(((this->_n_R1_26926-this->_n_R0_26925)*_n_b_27260)/this->_n_RB_26923)));return (_n_left_27553*_n_right_27554);})();auto _n_right_27552=_n_smooth_26893(1.92,1.82,(this->_n_R0_26925+(((this->_n_R1_26926-this->_n_R0_26925)*_n_b_27260)/this->_n_RB_26923)));return (_n_left_27551*_n_right_27552);})()))));
double _n_a_27267=d::at(this->_n_ra_26935,_n_k_27255);
(void)(((([&](){auto&& _n_array_27555=this->_n_fr_26948;auto _n_index_27556=_n_k_27255;auto _n_value_27557=((d::at(this->_n_fr_26948,_n_k_27255)*(1.0-_n_a_27267))+(d::at(this->_n_rcr_26936,_n_k_27255)*_n_s_27265));d::put(_n_array_27555,_n_index_27556,_n_value_27557);return _n_value_27557;})(),([&](){auto&& _n_array_27558=this->_n_fg_26949;auto _n_index_27559=_n_k_27255;auto _n_value_27560=((d::at(this->_n_fg_26949,_n_k_27255)*(1.0-_n_a_27267))+(d::at(this->_n_rcg_26937,_n_k_27255)*_n_s_27265));d::put(_n_array_27558,_n_index_27559,_n_value_27560);return _n_value_27560;})()),([&](){auto&& _n_array_27561=this->_n_fb_26950;auto _n_index_27562=_n_k_27255;auto _n_value_27563=((d::at(this->_n_fb_26950,_n_k_27255)*(1.0-_n_a_27267))+(d::at(this->_n_rcb_26938,_n_k_27255)*_n_s_27265));d::put(_n_array_27561,_n_index_27562,_n_value_27563);return _n_value_27563;})()));
(void)(([&](){auto&& _n_array_27564=this->_n_fc_26952;auto _n_index_27565=_n_k_27255;auto _n_value_27566=1.0;d::put(_n_array_27564,_n_index_27565,_n_value_27566);return _n_value_27566;})());

}
};
if((d::truth((d::at(this->_n_ra_26935,_n_k_27255)>0.0))&&d::truth((!d::truth(_n_ringOver_27258))))){d::check_cancel();(void)(_n_drawRing_27259());
}
if(d::truth((d::at(this->_n_pa_26930,_n_k_27255)>0.0))){d::check_cancel();double _n_u_27268=(d::at(this->_n_pu_26932,_n_k_27255)+_n_spin_27248);
double _n_v_27269=d::at(this->_n_pv_26933,_n_k_27255);
double _n_l_27270=d::at(this->_n_pl_26931,_n_k_27255);
(void)(([&](){auto _n_argument_27567=_n_k_27255;auto _n_argument_27568=d::at(this->_n_pa_26930,_n_k_27255);auto _n_argument_27569=(this->_n_sample_26922(this->_n_tr_26919,_n_u_27268,_n_v_27269)*_n_l_27270);auto _n_argument_27570=(this->_n_sample_26922(this->_n_tg_26920,_n_u_27268,_n_v_27269)*_n_l_27270);auto _n_argument_27571=(this->_n_sample_26922(this->_n_tb_26921,_n_u_27268,_n_v_27269)*_n_l_27270);return _n_lay_27249(_n_argument_27567,_n_argument_27568,_n_argument_27569,_n_argument_27570,_n_argument_27571);})());
(void)(([&](){auto&& _n_array_27572=this->_n_ff_26951;auto _n_index_27573=_n_k_27255;auto _n_value_27574=((0.1*d::minimum({1.0,_n_l_27270}))*d::at(this->_n_pa_26930,_n_k_27255));d::put(_n_array_27572,_n_index_27573,_n_value_27574);return _n_value_27574;})());
(void)(([&](){auto&& _n_array_27575=this->_n_fc_26952;auto _n_index_27576=_n_k_27255;auto _n_value_27577=(0.35+(0.7*_n_clamp_26892(d::maximum({d::at(this->_n_fr_26948,_n_k_27255),d::at(this->_n_fg_26949,_n_k_27255),d::at(this->_n_fb_26950,_n_k_27255)}))));d::put(_n_array_27575,_n_index_27576,_n_value_27577);return _n_value_27577;})());
}
if(d::truth(_n_ringOver_27258)){d::check_cancel();(void)(_n_drawRing_27259());
}
if((d::truth((_n_m_27256>0.0))&&d::truth((_n_mz_27236>d::maximum({(d::truth((d::at(this->_n_pa_26930,_n_k_27255)>0.5))?d::at(this->_n_pz_26934,_n_k_27255):(-d::number(9.0))),(d::truth((d::at(this->_n_ra_26935,_n_k_27255)>0.0))?d::at(this->_n_rz_26939,_n_k_27255):(-d::number(9.0)))}))))){d::check_cancel();(void)(([&](){auto _n_argument_27578=_n_k_27255;auto _n_argument_27579=_n_m_27256;auto _n_argument_27580=(0.82*_n_moonLit_27244(_n_k_27255));auto _n_argument_27581=(0.8*_n_moonLit_27244(_n_k_27255));auto _n_argument_27582=(0.76*_n_moonLit_27244(_n_k_27255));return _n_lay_27249(_n_argument_27578,_n_argument_27579,_n_argument_27580,_n_argument_27581,_n_argument_27582);})());
}

}
}
{double _n_r_27271=([&](){auto _n_argument_27583=0.0;auto _n_argument_27584=std::floor((_n_msy_27238-2.0));return d::maximum({_n_argument_27583,_n_argument_27584});})();
for(;d::truth((_n_r_27271<=([&](){auto _n_argument_27585=_n_HZ_26865;auto _n_argument_27586=std::ceil((_n_msy_27238+2.0));return d::minimum({_n_argument_27585,_n_argument_27586});})()));(void)((_n_r_27271++))){d::check_cancel();{double _n_x_27272=([&](){auto _n_argument_27587=0.0;auto _n_argument_27588=std::floor((_n_msx_27237-2.0));return d::maximum({_n_argument_27587,_n_argument_27588});})();
for(;d::truth((_n_x_27272<=([&](){auto _n_argument_27589=(_n_W_26863-1.0);auto _n_argument_27590=std::ceil((_n_msx_27237+2.0));return d::minimum({_n_argument_27589,_n_argument_27590});})()));(void)((_n_x_27272++))){d::check_cancel();double _n_k_27273=((_n_r_27271*_n_W_26863)+_n_x_27272);
if(((d::truth(d::at(this->_n_solid_26911,_n_k_27273))||d::truth((d::at(this->_n_pa_26930,_n_k_27273)>0.0)))||d::truth((d::at(this->_n_ra_26935,_n_k_27273)>0.0)))){d::check_cancel();continue;
}
double _n_m_27274=_n_moonAt_27239(_n_k_27273);
if(d::truth((_n_m_27274>0.0))){d::check_cancel();(void)((([&](){auto _n_argument_27591=_n_k_27273;auto _n_argument_27592=_n_m_27274;auto _n_argument_27593=(0.82*_n_moonLit_27244(_n_k_27273));auto _n_argument_27594=(0.8*_n_moonLit_27244(_n_k_27273));auto _n_argument_27595=(0.76*_n_moonLit_27244(_n_k_27273));return _n_lay_27249(_n_argument_27591,_n_argument_27592,_n_argument_27593,_n_argument_27594,_n_argument_27595);})(),([&](){auto&& _n_array_27596=this->_n_fc_26952;auto _n_index_27597=_n_k_27273;auto _n_value_27598=1.0;d::put(_n_array_27596,_n_index_27597,_n_value_27598);return _n_value_27598;})()));
}
}}
}}
{double _n_p_27275=0.0;
for(;d::truth((_n_p_27275<double(_n_PLUMES_26880.size())));(void)((_n_p_27275++))){d::check_cancel();auto _n_binding_27599=d::at(_n_PLUMES_26880,_n_p_27275);
double _n_bx_27276=d::at(_n_binding_27599,0.0);
double _n_by_27277=d::at(_n_binding_27599,1.0);
double _n_ph_27278=d::at(_n_binding_27599,2.0);
double _n_sp_27279=d::at(_n_binding_27599,3.0);
double _n_pb_27280=d::at(_n_binding_27599,4.0);
double _n_fs_27281=(_n_pb_27280*(0.55+(1.3*std::exp(((-d::number(std::fabs((_n_bx_27276-d::at(_n_SUN_26873,0.0)))))/25.0)))));
{double _n_r_27282=d::maximum({0.0,((_n_by_27277-_n_ph_27278)-8.0)});
for(;d::truth((_n_r_27282<_n_by_27277));(void)((_n_r_27282++))){d::check_cancel();double _n_h_27283=(_n_by_27277-(_n_r_27282+0.5));
double _n_w_27284=(0.7+((_n_h_27283*_n_sp_27279)*1.4));
double _n_hw_27285=std::ceil((_n_w_27284*2.2));
{double _n_x_27286=([&](){auto _n_argument_27600=0.0;auto _n_argument_27601=std::floor((_n_bx_27276-_n_hw_27285));return d::maximum({_n_argument_27600,_n_argument_27601});})();
for(;d::truth((_n_x_27286<=([&](){auto _n_argument_27602=(_n_W_26863-1.0);auto _n_argument_27603=std::ceil((_n_bx_27276+_n_hw_27285));return d::minimum({_n_argument_27602,_n_argument_27603});})()));(void)((_n_x_27286++))){d::check_cancel();double _n_k_27287=((_n_r_27282*_n_W_26863)+_n_x_27286);
double _n_dx_27288=((_n_x_27286+0.5)-_n_bx_27276);
double _n_fan_27289=std::exp((-d::number(std::pow((_n_dx_27288/_n_w_27284),2.0))));
double _n_rise_27290=_n_noise_26890(((_n_dx_27288*0.22)+(_n_p_27275*9.0)),((_n_h_27283-(_n_t_27231*1.3))*0.11),0.0);
double _n_d_27291=((([&](){auto _n_left_27604=(((_n_fan_27289*(3.0/(_n_w_27284+2.0)))*_n_smooth_26893((_n_ph_27278*1.2),(_n_ph_27278*0.25),_n_h_27283))*(0.5+(0.8*_n_rise_27290)));auto _n_right_27605=_n_smooth_26893(0.0,5.0,_n_h_27283);return (_n_left_27604*_n_right_27605);})()*_n_fs_27281)*0.55);
(void)((_n_d_27291=d::maximum({0.0,(_n_d_27291-0.03)})));
(void)(((([&](){auto&& _n_array_27606=this->_n_fr_26948;auto _n_index_27607=_n_k_27287;auto _n_value_27608=(d::at(_n_array_27606,_n_index_27607)+(_n_d_27291*0.72));d::put(_n_array_27606,_n_index_27607,_n_value_27608);return _n_value_27608;})(),([&](){auto&& _n_array_27609=this->_n_fg_26949;auto _n_index_27610=_n_k_27287;auto _n_value_27611=(d::at(_n_array_27609,_n_index_27610)+(_n_d_27291*0.86));d::put(_n_array_27609,_n_index_27610,_n_value_27611);return _n_value_27611;})()),([&](){auto&& _n_array_27612=this->_n_fb_26950;auto _n_index_27613=_n_k_27287;auto _n_value_27614=(d::at(_n_array_27612,_n_index_27613)+_n_d_27291);d::put(_n_array_27612,_n_index_27613,_n_value_27614);return _n_value_27614;})()));
if(d::truth((_n_d_27291>0.05))){d::check_cancel();(void)((([&](){auto&& _n_array_27615=this->_n_fc_26952;auto _n_index_27616=_n_k_27287;auto _n_value_27617=1.0;d::put(_n_array_27615,_n_index_27616,_n_value_27617);return _n_value_27617;})(),([&](){auto&& _n_array_27618=this->_n_ff_26951;auto _n_index_27619=_n_k_27287;auto _n_value_27620=([&](){auto _n_argument_27621=d::at(this->_n_ff_26951,_n_k_27287);auto _n_argument_27622=(0.12*_n_smooth_26893(0.05,0.3,_n_d_27291));return d::maximum({_n_argument_27621,_n_argument_27622});})();d::put(_n_array_27618,_n_index_27619,_n_value_27620);return _n_value_27620;})()));
}
}}
}}
for(auto &&_n_item_27623:d::at(this->_n_grains_26943,_n_p_27275)){d::check_cancel();auto _n_binding_27624=_n_item_27623;
double _n_phase_27292=d::at(_n_binding_27624,0.0);
double _n_life_27293=d::at(_n_binding_27624,1.0);
double _n_vx_27294=d::at(_n_binding_27624,2.0);
double _n_vy_27295=d::at(_n_binding_27624,3.0);
double _n_g_27296=d::at(_n_binding_27624,4.0);
double _n_tw_27297=d::at(_n_binding_27624,5.0);
{
double _n_age_27298=(d::mod((d::mod(((_n_t_27231/_n_life_27293)+_n_phase_27292),1.0)+1.0),1.0)*_n_life_27293);
double _n_gx_27299=(_n_bx_27276+(_n_vx_27294*_n_age_27298));
double _n_gy_27300=((_n_by_27277-(_n_vy_27295*_n_age_27298))+((_n_g_27296*_n_age_27298)*_n_age_27298));
if(d::truth((_n_gy_27300>=_n_by_27277))){d::check_cancel();continue;
}
double _n_x_27301=std::floor(_n_gx_27299);
double _n_r_27302=std::floor(_n_gy_27300);
if(((d::truth((_n_x_27301<0.0))||d::truth((_n_x_27301>=_n_W_26863)))||d::truth((_n_r_27302<0.0)))){d::check_cancel();continue;
}
double _n_k_27303=((_n_r_27302*_n_W_26863)+_n_x_27301);
if(d::truth((!d::truth(d::at(this->_n_live_26944,_n_k_27303))))){d::check_cancel();continue;
}
double _n_v_27304=((((1.0-(_n_age_27298/_n_life_27293))*(0.55+(0.45*std::sin(((_n_t_27231*3.0)+_n_tw_27297)))))*_n_fs_27281)*0.7);
(void)(((([&](){auto&& _n_array_27625=this->_n_fr_26948;auto _n_index_27626=_n_k_27303;auto _n_value_27627=(d::at(_n_array_27625,_n_index_27626)+(_n_v_27304*0.85));d::put(_n_array_27625,_n_index_27626,_n_value_27627);return _n_value_27627;})(),([&](){auto&& _n_array_27628=this->_n_fg_26949;auto _n_index_27629=_n_k_27303;auto _n_value_27630=(d::at(_n_array_27628,_n_index_27629)+(_n_v_27304*0.93));d::put(_n_array_27628,_n_index_27629,_n_value_27630);return _n_value_27630;})()),([&](){auto&& _n_array_27631=this->_n_fb_26950;auto _n_index_27632=_n_k_27303;auto _n_value_27633=(d::at(_n_array_27631,_n_index_27632)+_n_v_27304);d::put(_n_array_27631,_n_index_27632,_n_value_27633);return _n_value_27633;})()));
(void)(([&](){auto&& _n_array_27634=this->_n_fc_26952;auto _n_index_27635=_n_k_27303;auto _n_value_27636=1.0;d::put(_n_array_27634,_n_index_27635,_n_value_27636);return _n_value_27636;})());

}
}
}}
double _n_breathe_27305=(1.0+(0.12*std::sin((_n_t_27231*0.9))));
{double _n_r_27306=(d::at(_n_SUN_26873,1.0)-14.0);
for(;d::truth((_n_r_27306<=(d::at(_n_SUN_26873,1.0)+14.0)));(void)((_n_r_27306++))){d::check_cancel();{double _n_x_27307=d::maximum({0.0,(d::at(_n_SUN_26873,0.0)-26.0)});
for(;d::truth((_n_x_27307<=d::minimum({(_n_W_26863-1.0),(d::at(_n_SUN_26873,0.0)+26.0)})));(void)((_n_x_27307++))){d::check_cancel();double _n_k_27308=((_n_r_27306*_n_W_26863)+_n_x_27307);
double _n_dx_27309=((_n_x_27307+0.5)-d::at(_n_SUN_26873,0.0));
double _n_dy_27310=((_n_r_27306+0.5)-d::at(_n_SUN_26873,1.0));
double _n_d_27311=d::hypot(std::initializer_list<double>{_n_dx_27309,_n_dy_27310});
double _n_g_27312=([&](){auto _n_left_27637=(std::exp(((-d::number(_n_d_27311))/2.0))*1.4);auto _n_right_27638=(std::exp(((-d::number(_n_d_27311))/8.0))*0.2);return (_n_left_27637+_n_right_27638);})();
(void)((_n_g_27312=(_n_g_27312+(([&](){auto _n_left_27639=std::exp((((-d::number(_n_dy_27310))*_n_dy_27310)*2.0));auto _n_right_27640=std::exp(((-d::number(std::fabs(_n_dx_27309)))/(8.0*_n_breathe_27305)));return (_n_left_27639*_n_right_27640);})()*1.1))));
(void)((_n_g_27312=(_n_g_27312+(([&](){auto _n_left_27641=std::exp((((-d::number(_n_dx_27309))*_n_dx_27309)*2.0));auto _n_right_27642=std::exp(((-d::number(std::fabs(_n_dy_27310)))/(4.0*_n_breathe_27305)));return (_n_left_27641*_n_right_27642);})()*0.9))));
if(d::truth((_n_d_27311<1.6))){d::check_cancel();(void)((_n_g_27312=3.0));
}
if(d::truth(d::at(this->_n_solid_26911,_n_k_27308))){d::check_cancel();(void)((_n_g_27312=(_n_g_27312*0.4)));
}
(void)(((([&](){auto&& _n_array_27643=this->_n_fr_26948;auto _n_index_27644=_n_k_27308;auto _n_value_27645=(d::at(_n_array_27643,_n_index_27644)+_n_g_27312);d::put(_n_array_27643,_n_index_27644,_n_value_27645);return _n_value_27645;})(),([&](){auto&& _n_array_27646=this->_n_fg_26949;auto _n_index_27647=_n_k_27308;auto _n_value_27648=(d::at(_n_array_27646,_n_index_27647)+(_n_g_27312*0.96));d::put(_n_array_27646,_n_index_27647,_n_value_27648);return _n_value_27648;})()),([&](){auto&& _n_array_27649=this->_n_fb_26950;auto _n_index_27650=_n_k_27308;auto _n_value_27651=(d::at(_n_array_27649,_n_index_27650)+(_n_g_27312*0.86));d::put(_n_array_27649,_n_index_27650,_n_value_27651);return _n_value_27651;})()));
if(d::truth((_n_g_27312>0.08))){d::check_cancel();(void)(([&](){auto&& _n_array_27652=this->_n_fc_26952;auto _n_index_27653=_n_k_27308;auto _n_value_27654=1.0;d::put(_n_array_27652,_n_index_27653,_n_value_27654);return _n_value_27654;})());
}
}}
}}
for(auto &&_n_item_27655:_n_BRIGHT_26879){d::check_cancel();auto _n_binding_27656=_n_item_27655;
double _n_x_27313=d::at(_n_binding_27656,0.0);
double _n_r_27314=d::at(_n_binding_27656,1.0);
double _n_s_27315=d::at(_n_binding_27656,2.0);
double _n_p_27316=d::at(_n_binding_27656,3.0);
{
double _n_v_27317=(_n_s_27315*(0.8+(0.2*std::sin(((((_n_t_27231/_n_p_27316)*ascii::PI)*2.0)+(_n_hash_26889(_n_x_27313,_n_r_27314)*6.28))))));
double _n_k_27318=((_n_r_27314*_n_W_26863)+_n_x_27313);
if((d::truth((d::at(this->_n_pa_26930,_n_k_27318)>0.0))||d::truth((d::at(this->_n_ra_26935,_n_k_27318)>0.0)))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_27657=this->_n_fr_26948;auto _n_index_27658=_n_k_27318;auto _n_value_27659=d::maximum({d::at(this->_n_fr_26948,_n_k_27318),(_n_v_27317*0.95)});d::put(_n_array_27657,_n_index_27658,_n_value_27659);return _n_value_27659;})(),([&](){auto&& _n_array_27660=this->_n_fg_26949;auto _n_index_27661=_n_k_27318;auto _n_value_27662=d::maximum({d::at(this->_n_fg_26949,_n_k_27318),(_n_v_27317*0.97)});d::put(_n_array_27660,_n_index_27661,_n_value_27662);return _n_value_27662;})()),([&](){auto&& _n_array_27663=this->_n_fb_26950;auto _n_index_27664=_n_k_27318;auto _n_value_27665=d::maximum({d::at(this->_n_fb_26950,_n_k_27318),_n_v_27317});d::put(_n_array_27663,_n_index_27664,_n_value_27665);return _n_value_27665;})()));
for(auto &&_n_item_27666:d::Array<double,false>{(-d::number(1.0)),1.0,(-d::number(_n_W_26863)),_n_W_26863}){d::check_cancel();double _n_o_27319=_n_item_27666;
(void)(((([&](){auto&& _n_array_27667=this->_n_fr_26948;auto _n_index_27668=(_n_k_27318+_n_o_27319);auto _n_value_27669=(d::at(_n_array_27667,_n_index_27668)+(_n_v_27317*0.16));d::put(_n_array_27667,_n_index_27668,_n_value_27669);return _n_value_27669;})(),([&](){auto&& _n_array_27670=this->_n_fg_26949;auto _n_index_27671=(_n_k_27318+_n_o_27319);auto _n_value_27672=(d::at(_n_array_27670,_n_index_27671)+(_n_v_27317*0.17));d::put(_n_array_27670,_n_index_27671,_n_value_27672);return _n_value_27672;})()),([&](){auto&& _n_array_27673=this->_n_fb_26950;auto _n_index_27674=(_n_k_27318+_n_o_27319);auto _n_value_27675=(d::at(_n_array_27673,_n_index_27674)+(_n_v_27317*0.2));d::put(_n_array_27673,_n_index_27674,_n_value_27675);return _n_value_27675;})()));
}

}
}
for(auto &&_n_item_27676:this->_n_cells_26946){d::check_cancel();double _n_k_27320=_n_item_27676;
(void)(this->_n_dot_26905(_n_k_27320,d::at(this->_n_fr_26948,_n_k_27320),d::at(this->_n_fg_26949,_n_k_27320),d::at(this->_n_fb_26950,_n_k_27320),d::at(this->_n_ff_26951,_n_k_27320),d::at(this->_n_fc_26952,_n_k_27320)));
}
{double _n_r_27321=0.0;
for(;d::truth((_n_r_27321<_n_H_26864));(void)((_n_r_27321++))){d::check_cancel();if(d::truth(d::at(this->_n_dirty_26947,_n_r_27321))){d::check_cancel();(void)(([&](){auto&& _n_array_27677=this->_n_lines_26953;auto _n_index_27678=_n_r_27321;auto _n_value_27679=d::join(this->_n_chars_26903.slice((_n_r_27321*_n_W_26863),((_n_r_27321+1.0)*_n_W_26863)),d::String(u""));d::put(_n_array_27677,_n_index_27678,_n_value_27679);return _n_value_27679;})());
}
}}
if(d::truth(_n_color_27232)){d::check_cancel();(void)(d::read(_n_color_27232).set(this->_n_cols_26904));
}
return d::join(this->_n_lines_26953,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("saturn-rise").cols)*ascii::catalog_meta("saturn-rise").rows);auto _env=std::make_shared<_n_Record_27322>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &saturn_rise_meta(){return catalog_meta("saturn-rise");}
std::unique_ptr<Piece> make_saturn_rise(const AsciiPieceOptions &o){return std::make_unique<Native_saturn_rise>(o);}
}
