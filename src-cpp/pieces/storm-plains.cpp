// Direct, statically typed C++ from src/pieces/storm-plains.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30604;
struct _n_Record_30697;
struct _n_Record_30699;
struct _n_Record_30702;
struct _n_Record_31060;
struct _n_Record_30604{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_30604> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30604>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_30697{
double _p_x{};
d::Array<float,true> _p_field{};
static std::shared_ptr<_n_Record_30697> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30697>();out->_p_x=d::decode<double>(j["x"]);out->_p_field=d::decode<d::Array<float,true>>(j["field"]);return out;}
};
struct _n_Record_30699{
double _p_I{};
std::shared_ptr<_n_Record_30697> _p_bolt{};
double _p_cx{};
double _p_cy{};
double _p_boltOn{};
double _p_inside{};
static std::shared_ptr<_n_Record_30699> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30699>();out->_p_I=d::decode<double>(j["I"]);out->_p_bolt=d::decode<std::shared_ptr<_n_Record_30697>>(j["bolt"]);out->_p_cx=d::decode<double>(j["cx"]);out->_p_cy=d::decode<double>(j["cy"]);out->_p_boltOn=d::decode<double>(j["boltOn"]);out->_p_inside=d::decode<double>(j["inside"]);return out;}
};
struct _n_Record_30702{
double _p_I{};
d::Nil _p_bolt{};
double _p_cx{};
double _p_cy{};
double _p_boltOn{};
double _p_inside{};
static std::shared_ptr<_n_Record_30702> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30702>();out->_p_I=d::decode<double>(j["I"]);out->_p_bolt=d::decode<d::Nil>(j["bolt"]);out->_p_cx=d::decode<double>(j["cx"]);out->_p_cy=d::decode<double>(j["cy"]);out->_p_boltOn=d::decode<double>(j["boltOn"]);out->_p_inside=d::decode<double>(j["inside"]);return out;}
};
struct _n_Record_31060{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31060> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31060>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_30623(double _a0,double _a1);
double _n_noise_30624(double _a0,double _a1,double _a2);
double _n_fbm_30625(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_30626(double _a0);
double _n_smooth_30627(double _a0,double _a1,double _a2);
double _n_mix_30628(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_30629(d::String _a0);
double _n_dome_30630(double _a0,double _a1,double _a2);
double _n_segDist_30631(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
std::shared_ptr<_n_Record_30604> _n_meta_30603=[](){return ([&](){auto _n_object_31063=std::make_shared<_n_Record_30604>();_n_object_31063->_p_name=d::String(u"storm plains");_n_object_31063->_p_category=d::String(u"scenes");_n_object_31063->_p_note=d::String(u"an anvil thunderhead at dusk flickering over a wheat field");_n_object_31063->_p_cols=200.0;_n_object_31063->_p_rows=100.0;_n_object_31063->_p_cell=1.0;_n_object_31063->_p_fps=15.0;_n_object_31063->_p_ground=d::String(u"#0b0912");_n_object_31063->_p_palette=d::Array<d::String,false>{d::String(u"#0f0c20"),d::String(u"#141029"),d::String(u"#1c1638"),d::String(u"#261c4a"),d::String(u"#32235a"),d::String(u"#40306c"),d::String(u"#53407e"),d::String(u"#6a5590"),d::String(u"#8670a6"),d::String(u"#7a6288"),d::String(u"#9a7890"),d::String(u"#b98e94"),d::String(u"#e6a890"),d::String(u"#f2bca8"),d::String(u"#f7d6a8"),d::String(u"#fbe8c6"),d::String(u"#f8b070"),d::String(u"#e88a4c"),d::String(u"#c8643a"),d::String(u"#9a4630"),d::String(u"#6a3226"),d::String(u"#f0c868"),d::String(u"#d8a447"),d::String(u"#b7843a"),d::String(u"#8c6230"),d::String(u"#5e4226"),d::String(u"#3a2a1c"),d::String(u"#261c14"),d::String(u"#181a2c"),d::String(u"#2a3048"),d::String(u"#3a4260"),d::String(u"#4f5878"),d::String(u"#6a7392"),d::String(u"#8890ae"),d::String(u"#a2aabd"),d::String(u"#5d5878"),d::String(u"#7c7598"),d::String(u"#a6a2c8"),d::String(u"#d6d2fa"),d::String(u"#f4f2ff"),d::String(u"#ffe08a"),d::String(u"#ffb84a")};return _n_object_31063;})();}();
const double _n_W_30605=[](){return 200.0;}();
const double _n_H_30606=[](){return 100.0;}();
const double _n_HZ_30607=[](){return 64.0;}();
d::Array<double,false> _n_SUN_30608=[](){return d::Array<double,false>{30.0,70.0};}();
const double _n_BASE_30609=[](){return 45.0;}();
const d::String _n_DOTS_30610=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_30611=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_30612=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_30703=_a0;
return ((_n_v_30703/16.0)-0.47);});}();
const double _n_SKY_30613=[](){return 0.0;}();
const double _n_PLAIN_30614=[](){return 1.0;}();
const double _n_FIELD_30615=[](){return 2.0;}();
const double _n_ROAD_30616=[](){return 3.0;}();
const double _n_HOUSE_30617=[](){return 4.0;}();
const double _n_ROOF_30618=[](){return 5.0;}();
const double _n_PANE_30619=[](){return 6.0;}();
const double _n_TREE_30620=[](){return 7.0;}();
const double _n_PUMP_30621=[](){return 8.0;}();
const double _n_BELT_30622=[](){return 9.0;}();
double _n_hash_30623(double _a0,double _a1){double _n_x_30704=_a0;
double _n_y_30705=_a1;
{
double _n_h_30706=([&](){auto _n_left_31064=d::imul(double(d::i32(_n_x_30704)|d::i32(0.0)),374761393.0);auto _n_right_31065=d::imul(double(d::i32(_n_y_30705)|d::i32(0.0)),668265263.0);return (_n_left_31064+_n_right_31065);})();
(void)((_n_h_30706=d::imul(double(d::i32(_n_h_30706)^d::i32(double(d::u32(_n_h_30706)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_30706)^d::i32(double(d::u32(_n_h_30706)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_30624(double _a0,double _a1,double _a2){double _n_x_30707=_a0;
double _n_y_30708=_a1;
double _n_period_30709=_a2;
{
double _n_xi_30710=std::floor(_n_x_30707);
double _n_yi_30711=std::floor(_n_y_30708);
double _n_fx_30712=(_n_x_30707-_n_xi_30710);
double _n_fy_30713=(_n_y_30708-_n_yi_30711);
double _n_u_30714=((_n_fx_30712*_n_fx_30712)*(3.0-(2.0*_n_fx_30712)));
double _n_v_30715=((_n_fy_30713*_n_fy_30713)*(3.0-(2.0*_n_fy_30713)));
double _n_x0_30716=_n_xi_30710;
double _n_x1_30717=(_n_xi_30710+1.0);
if(d::truth(_n_period_30709)){d::check_cancel();(void)((_n_x0_30716=d::mod((d::mod(_n_xi_30710,_n_period_30709)+_n_period_30709),_n_period_30709)));
(void)((_n_x1_30717=d::mod((_n_x0_30716+1.0),_n_period_30709)));
}
double _n_a_30718=_n_hash_30623(_n_x0_30716,_n_yi_30711);
double _n_b_30719=_n_hash_30623(_n_x1_30717,_n_yi_30711);
double _n_c_30720=_n_hash_30623(_n_x0_30716,(_n_yi_30711+1.0));
double _n_d_30721=_n_hash_30623(_n_x1_30717,(_n_yi_30711+1.0));
return (((_n_a_30718+((_n_b_30719-_n_a_30718)*_n_u_30714))+((_n_c_30720-_n_a_30718)*_n_v_30715))+(((((_n_a_30718-_n_b_30719)-_n_c_30720)+_n_d_30721)*_n_u_30714)*_n_v_30715));

}
}

double _n_fbm_30625(double _a0,double _a1,double _a2,double _a3){double _n_x_30722=_a0;
double _n_y_30723=_a1;
double _n_octaves_30724=_a2;
double _n_period_30725=_a3;
{
double _n_s_30726=0.0;
double _n_n_30727=0.0;
double _n_amp_30728=0.5;
double _n_f_30729=1.0;
{double _n_i_30730=0.0;
for(;d::truth((_n_i_30730<_n_octaves_30724));(void)((_n_i_30730++))){d::check_cancel();(void)((_n_s_30726=(_n_s_30726+(_n_amp_30728*_n_noise_30624((_n_x_30722*_n_f_30729),(_n_y_30723*_n_f_30729),(_n_period_30725*_n_f_30729))))));
(void)((_n_n_30727=(_n_n_30727+_n_amp_30728)));
(void)((_n_amp_30728=(_n_amp_30728*0.5)));
(void)((_n_f_30729=(_n_f_30729*2.0)));
}}
return (_n_s_30726/_n_n_30727);

}
}

double _n_clamp_30626(double _a0){double _n_v_30731=_a0;
return (d::truth((_n_v_30731<0.0))?0.0:(d::truth((_n_v_30731>1.0))?1.0:_n_v_30731));}

double _n_smooth_30627(double _a0,double _a1,double _a2){double _n_a_30732=_a0;
double _n_b_30733=_a1;
double _n_v_30734=_a2;
{
double _n_k_30735=_n_clamp_30626(((_n_v_30734-_n_a_30732)/(_n_b_30733-_n_a_30732)));
return ((_n_k_30735*_n_k_30735)*(3.0-(2.0*_n_k_30735)));

}
}

double _n_mix_30628(double _a0,double _a1,double _a2){double _n_a_30736=_a0;
double _n_b_30737=_a1;
double _n_k_30738=_a2;
return (_n_a_30736+((_n_b_30737-_n_a_30736)*_n_k_30738));}

d::Array<double,false> _n_hex_30629(d::String _a0){d::String _n_s_30739=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_30740=_a0;
return (([&](){auto _n_argument_31066=d::slice(_n_s_30739,_n_i_30740,(_n_i_30740+2.0));auto _n_argument_31067=16.0;return d::parseInt(_n_argument_31066,_n_argument_31067);})()/255.0);});}

double _n_dome_30630(double _a0,double _a1,double _a2){double _n_dx_30741=_a0;
double _n_dy_30742=_a1;
double _n_r_30743=_a2;
{
double _n_q_30744=((1.0-(_n_dx_30741*_n_dx_30741))-(_n_dy_30742*_n_dy_30742));
return (d::truth((_n_q_30744>0.0))?(_n_r_30743*std::sqrt(_n_q_30744)):0.0);

}
}

double _n_segDist_30631(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_30745=_a0;
double _n_py_30746=_a1;
double _n_ax_30747=_a2;
double _n_ay_30748=_a3;
double _n_bx_30749=_a4;
double _n_by_30750=_a5;
{
double _n_dx_30751=(_n_bx_30749-_n_ax_30747);
double _n_dy_30752=(_n_by_30750-_n_ay_30748);
double _n_k_30753=_n_clamp_30626(((((_n_px_30745-_n_ax_30747)*_n_dx_30751)+((_n_py_30746-_n_ay_30748)*_n_dy_30752))/([&]()->double{auto _n_logical_31068=((_n_dx_30751*_n_dx_30751)+(_n_dy_30752*_n_dy_30752));return d::truth(_n_logical_31068)?_n_logical_31068:1.0;})()));
double _n_ex_30754=((_n_px_30745-_n_ax_30747)-(_n_dx_30751*_n_k_30753));
double _n_ey_30755=((_n_py_30746-_n_ay_30748)-(_n_dy_30752*_n_k_30753));
return std::sqrt(((_n_ex_30754*_n_ex_30754)+(_n_ey_30755*_n_ey_30755)));

}
}

struct Native_storm_plains final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_30632{};
double _n_STALK_30633{};
double _n_N_30634{};
d::Array<d::String,false> _n_out_30635{};
d::Array<uint8_t,true> _n_lut_30636{};
d::Array<std::array<double,5>,false> _n_puffs_30642{};
double _n_seed_30643{};
double _n_SX_30645{};
double _n_SY_30646{};
d::Array<float,true> _n_sh_30647{};
d::Array<float,true> _n_anv_30648{};
d::Array<float,true> _n_lip_30649{};
d::Array<float,true> _n_sr_30650{};
d::Array<float,true> _n_sg_30651{};
d::Array<float,true> _n_sb_30652{};
d::Array<uint8_t,true> _n_mat_30653{};
d::Array<float,true> _n_cloud_30654{};
d::Array<float,true> _n_dark_30655{};
d::Array<float,true> _n_darkSky_30656{};
d::Array<float,true> _n_floorOf_30657{};
d::Array<float,true> _n_jit_30658{};
double _n_LX_30660{};
double _n_LY_30661{};
double _n_LZ_30662{};
double _n_HX0_30664{};
double _n_HX1_30665{};
double _n_HW0_30666{};
double _n_hb_30667{};
double _n_PUMP_X_30668{};
double _n_PUMP_Y_30669{};
double _n_VX_30675{};
double _n_TW_30676{};
d::Array<float,true> _n_wheat_30677{};
d::Array<float,true> _n_persp_30678{};
d::Array<float,true> _n_fieldLight_30679{};
double _n_GW_30680{};
d::Array<float,true> _n_gust_30681{};
double _n_CW_30682{};
d::Array<float,true> _n_streak_30683{};
d::Array<d::Array<double,false>,false> _n_stars_30684{};
d::Array<float,true> _n_star_30685{};
d::Array<std::array<double,5>,false> _n_ears_30686{};
d::Array<float,true> _n_ear_30687{};
d::Array<double,false> _n_touched_30688{};
double _n_RW_30689{};
d::Array<float,true> _n_shafts_30690{};
d::Array<float,true> _n_colPhase_30691{};
d::Array<float,true> _n_colSpeed_30692{};
d::Array<float,true> _n_rainTop_30693{};
d::Array<float,true> _n_rainOn_30694{};
double _n_PERIOD_30695{};
d::Array<std::shared_ptr<_n_Record_30697>,false> _n_bolts_30696{};
double _n_FL_30700{};
std::function<d::String(double,std::shared_ptr<_n_Record_31060>)> _render;
double _n_nearest_30637(double _a0,double _a1,double _a2){double _n_r_30756=_a0;
double _n_g_30757=_a1;
double _n_b_30758=_a2;
{
double _n_k_30759=([&](){auto _n_left_31360=([&](){auto _n_left_31362=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_30756*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_31363=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_30757*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_31362)|d::i32(_n_right_31363));})();auto _n_right_31361=d::minimum({31.0,double(d::i32((_n_b_30758*31.99))|d::i32(0.0))});return double(d::i32(_n_left_31360)|d::i32(_n_right_31361));})();
if(d::truth((d::at(this->_n_lut_30636,_n_k_30759)!=255.0))){d::check_cancel();return d::at(this->_n_lut_30636,_n_k_30759);
}
double _n_best_30760=0.0;
double _n_bd_30761=1000000000.0;
{double _n_i_30762=0.0;
for(;d::truth((_n_i_30762<double(this->_n_P_30632.size())));(void)((_n_i_30762++))){d::check_cancel();double _n_dr_30763=(d::at(d::at(this->_n_P_30632,_n_i_30762),0.0)-_n_r_30756);
double _n_dg_30764=(d::at(d::at(this->_n_P_30632,_n_i_30762),1.0)-_n_g_30757);
double _n_db_30765=(d::at(d::at(this->_n_P_30632,_n_i_30762),2.0)-_n_b_30758);
double _n_d_30766=((((0.3*_n_dr_30763)*_n_dr_30763)+((0.5*_n_dg_30764)*_n_dg_30764))+((0.2*_n_db_30765)*_n_db_30765));
if(d::truth((_n_d_30766<_n_bd_30761))){d::check_cancel();(void)(((_n_bd_30761=_n_d_30766),(_n_best_30760=_n_i_30762)));
}
}}
return ([&](){auto&& _n_array_31364=this->_n_lut_30636;auto _n_index_31365=_n_k_30759;auto _n_value_31366=_n_best_30760;d::put(_n_array_31364,_n_index_31365,_n_value_31366);return _n_value_31366;})();

}
}

double _n_towerC_30638(double _a0){double _n_y_30767=_a0;
return (138.0+((_n_BASE_30609-_n_y_30767)*0.14));}

double _n_towerHW_30639(double _a0){double _n_y_30768=_a0;
return (23.0-((_n_BASE_30609-_n_y_30768)*0.08));}

double _n_anvilTop_30640(double _a0){double _n_x_30769=_a0;
return ([&](){auto _n_left_31367=(7.5+(2.5*_n_smooth_30627(150.0,210.0,_n_x_30769)));auto _n_right_31368=(3.0*_n_smooth_30627(112.0,58.0,_n_x_30769));return (_n_left_31367+_n_right_31368);})();}

double _n_anvilBot_30641(double _a0){double _n_x_30770=_a0;
return ([&](){auto _n_left_31369=(21.0-(9.0*_n_smooth_30627(124.0,62.0,_n_x_30770)));auto _n_right_31370=(7.0*_n_smooth_30627(152.0,210.0,_n_x_30770));return (_n_left_31369-_n_right_31370);})();}

double _n_rnd_30644(){return ([&](){auto _n_argument_31371=(this->_n_seed_30643++);auto _n_argument_31372=911.0;return _n_hash_30623(_n_argument_31371,_n_argument_31372);})();}

double _n_glowSun_30659(double _a0,double _a1){double _n_x_30814=_a0;
double _n_y_30815=_a1;
{
double _n_dx_30816=(_n_x_30814-d::at(_n_SUN_30608,0.0));
double _n_dy_30817=(_n_y_30815-d::at(_n_SUN_30608,1.0));
return ([&](){auto _n_left_31373=(std::exp(((-d::number(std::pow((_n_dx_30816/48.0),2.0)))-std::pow((_n_dy_30817/10.0),2.0)))*0.9);auto _n_right_31374=(std::exp(((-d::number(std::pow((_n_dx_30816/95.0),2.0)))-std::pow((_n_dy_30817/20.0),2.0)))*0.26);return (_n_left_31373+_n_right_31374);})();

}
}

double _n_ground_30663(double _a0){double _n_x_30818=_a0;
return ((_n_HZ_30607+3.0)-([&](){auto _n_left_31375=(1.2*_n_smooth_30627(20.0,70.0,_n_x_30818));auto _n_right_31376=_n_smooth_30627(110.0,70.0,_n_x_30818);return (_n_left_31375*_n_right_31376);})());}

double _n_shelfTop_30670(double _a0){double _n_x_30819=_a0;
return ((_n_BASE_30609-2.4)+(1.2*(_n_noise_30624((_n_x_30819*0.2),8.1,0.0)-0.5)));}

double _n_shelfBot_30671(double _a0){double _n_x_30820=_a0;
return ([&](){auto _n_left_31377=([&](){auto _n_left_31379=((_n_BASE_30609+2.4)+(1.8*(_n_fbm_30625((_n_x_30820*0.12),8.7,2.0,0.0)-0.5)));auto _n_right_31380=(2.0*_n_smooth_30627(184.0,199.0,_n_x_30820));return (_n_left_31379-_n_right_31380);})();auto _n_right_31378=(2.0*_n_smooth_30627(114.0,104.0,_n_x_30820));return (_n_left_31377-_n_right_31378);})();}

double _n_shelfOn_30672(double _a0){double _n_x_30821=_a0;
return ([&](){auto _n_left_31381=_n_smooth_30627(103.0,112.0,_n_x_30821);auto _n_right_31382=_n_smooth_30627(199.0,190.0,_n_x_30821);return (_n_left_31381*_n_right_31382);})();}

double _n_roadC_30673(double _a0){double _n_p_30887=_a0;
return (57.0+(62.0*std::pow(_n_p_30887,1.25)));}

double _n_roadW_30674(double _a0){double _n_p_30888=_a0;
return (0.6+(12.0*_n_p_30888));}

std::shared_ptr<_n_Record_30699> _n_flashAt_30698(double _a0){double _n_t_30936=_a0;
{
double _n_n_30937=std::floor((_n_t_30936/this->_n_PERIOD_30695));
if((d::truth((_n_n_30937>0.0))&&d::truth((_n_hash_30623(_n_n_30937,50.0)<0.25)))){d::check_cancel();return std::shared_ptr<_n_Record_30699>{};
}
double _n_start_30938=(d::truth((_n_n_30937==0.0))?(-d::number(0.08)):(((_n_n_30937*this->_n_PERIOD_30695)+0.2)+(_n_hash_30623(_n_n_30937,51.0)*1.6)));
double _n_l_30939=(_n_t_30936-_n_start_30938);
if((d::truth((_n_l_30939<0.0))||d::truth((_n_l_30939>0.9)))){d::check_cancel();return std::shared_ptr<_n_Record_30699>{};
}
double _n_I_30940=0.0;
d::Array<double,false> _n_strikes_30941=d::Array<double,false>{0.0,(0.09+(_n_hash_30623(_n_n_30937,52.0)*0.06)),(0.32+(_n_hash_30623(_n_n_30937,53.0)*0.2))};
{double _n_j_30942=0.0;
for(;d::truth((_n_j_30942<3.0));(void)((_n_j_30942++))){d::check_cancel();if(d::truth((_n_l_30939>=d::at(_n_strikes_30941,_n_j_30942)))){d::check_cancel();(void)((_n_I_30940=(_n_I_30940+(std::exp(((-d::number((_n_l_30939-d::at(_n_strikes_30941,_n_j_30942))))/(d::truth((_n_j_30942==0.0))?0.09:0.06)))*(d::truth((_n_j_30942==0.0))?1.0:(0.7-(_n_j_30942*0.15)))))));
}
}}
std::shared_ptr<_n_Record_30697> _n_bolt_30943=((d::truth((_n_n_30937==0.0))||d::truth((_n_hash_30623(_n_n_30937,54.0)>0.55)))?d::at(this->_n_bolts_30696,d::mod(_n_n_30937,4.0)):std::shared_ptr<_n_Record_30697>{});
double _n_cx_30944=(d::truth(_n_bolt_30943)?_n_bolt_30943->_p_x:(115.0+(_n_hash_30623(_n_n_30937,55.0)*45.0)));
double _n_cy_30945=(d::truth(_n_bolt_30943)?(_n_BASE_30609-8.0):(14.0+(_n_hash_30623(_n_n_30937,56.0)*24.0)));
return ([&](){auto _n_object_31384=std::make_shared<_n_Record_30699>();_n_object_31384->_p_I=d::minimum({1.3,_n_I_30940});_n_object_31384->_p_bolt=_n_bolt_30943;_n_object_31384->_p_cx=_n_cx_30944;_n_object_31384->_p_cy=_n_cy_30945;_n_object_31384->_p_boltOn=((d::truth(_n_bolt_30943)&&d::truth((_n_l_30939<0.5)))?d::minimum({1.0,(_n_I_30940*1.4)}):0.0);_n_object_31384->_p_inside=0.0;return _n_object_31384;})();

}
}

std::shared_ptr<_n_Record_30702> _n_flickerAt_30701(double _a0){double _n_t_30946=_a0;
{
double _n_n0_30947=std::floor((_n_t_30946/this->_n_FL_30700));
{double _n_n_30948=_n_n0_30947;
for(;(d::truth((_n_n_30948>=(_n_n0_30947-1.0)))&&d::truth((_n_n_30948>=0.0)));(void)((_n_n_30948--))){d::check_cancel();double _n_l_30949=(_n_t_30946-(((_n_n_30948*this->_n_FL_30700)+0.35)+(_n_hash_30623(_n_n_30948,70.0)*0.75)));
if((d::truth((_n_l_30949<0.0))||d::truth((_n_l_30949>0.6)))){d::check_cancel();continue;
}
double _n_I_30950=0.0;
d::Array<double,false> _n_pulses_30951=d::Array<double,false>{0.0,(0.08+(_n_hash_30623(_n_n_30948,71.0)*0.1)),(0.26+(_n_hash_30623(_n_n_30948,72.0)*0.18))};
{double _n_j_30952=0.0;
for(;d::truth((_n_j_30952<3.0));(void)((_n_j_30952++))){d::check_cancel();if(d::truth((_n_l_30949>=d::at(_n_pulses_30951,_n_j_30952)))){d::check_cancel();(void)((_n_I_30950=(_n_I_30950+(std::exp(((-d::number((_n_l_30949-d::at(_n_pulses_30951,_n_j_30952))))/0.07))*(d::truth((_n_j_30952==1.0))?0.7:(d::truth((_n_j_30952==2.0))?0.45:1.0))))));
}
}}
return ([&](){auto _n_object_31386=std::make_shared<_n_Record_30702>();_n_object_31386->_p_I=([&](){auto _n_left_31387=d::minimum({1.0,_n_I_30950});auto _n_right_31388=(0.25+(0.2*_n_hash_30623(_n_n_30948,73.0)));return (_n_left_31387*_n_right_31388);})();_n_object_31386->_p_bolt=d::Nil{};_n_object_31386->_p_cx=(120.0+(_n_hash_30623(_n_n_30948,74.0)*38.0));_n_object_31386->_p_cy=(15.0+(_n_hash_30623(_n_n_30948,75.0)*25.0));_n_object_31386->_p_boltOn=0.0;_n_object_31386->_p_inside=1.0;return _n_object_31386;})();
}}
return std::shared_ptr<_n_Record_30702>{};

}
}

explicit Native_storm_plains(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_30632=d::map(_n_meta_30603->_p_palette,_n_hex_30629);
this->_n_STALK_30633=_n_meta_30603->_p_palette.indexOf(d::String(u"#8c6230"));
this->_n_N_30634=(_n_W_30605*_n_H_30606);
this->_n_out_30635=d::Array<d::String,false>(size_t(this->_n_N_30634));
this->_n_lut_30636=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_puffs_30642=d::Array<std::array<double,5>,false>{};
this->_n_seed_30643=1.0;
{double _n_y_30771=(_n_BASE_30609-4.5);
for(;d::truth((_n_y_30771>14.0));(void)((_n_y_30771=(_n_y_30771-4.4)))){d::check_cancel();double _n_cx_30772=this->_n_towerC_30638(_n_y_30771);
double _n_hw_30773=this->_n_towerHW_30639(_n_y_30771);
double _n_n_30774=([&](){auto _n_argument_31069=2.0;auto _n_argument_31070=d::round(((_n_hw_30773*2.0)/11.0));return d::maximum({_n_argument_31069,_n_argument_31070});})();
{double _n_i_30775=0.0;
for(;d::truth((_n_i_30775<_n_n_30774));(void)((_n_i_30775++))){d::check_cancel();double _n_u_30776=((((_n_i_30775+0.5)/_n_n_30774)*2.0)-1.0);
double _n_rr_30777=(7.0+(this->_n_rnd_30644()*4.0));
(void)(this->_n_puffs_30642.push(std::array<double,5>{((_n_cx_30772+(_n_u_30776*(_n_hw_30773-(_n_rr_30777*0.55))))+((this->_n_rnd_30644()-0.5)*3.0)),(_n_y_30771+((this->_n_rnd_30644()-0.5)*2.0)),_n_rr_30777,(4.0*std::sqrt((1.0-((_n_u_30776*_n_u_30776)*0.85)))),1.0}));
}}
}}
(void)(this->_n_puffs_30642.push(std::array<double,5>{141.0,8.5,9.0,2.0,0.0},std::array<double,5>{133.0,9.5,6.0,1.0,0.0},std::array<double,5>{149.0,10.0,6.0,1.0,0.0}));
for(auto &&_n_item_31071:d::Array<d::Array<double,false>,false>{d::Array<double,false>{104.0,27.0,9.0},d::Array<double,false>{89.0,34.0,6.5},d::Array<double,false>{77.0,40.5,3.8}}){d::check_cancel();auto _n_binding_31072=_n_item_31071;
double _n_cx_30778=d::at(_n_binding_31072,0.0);
double _n_top_30779=d::at(_n_binding_31072,1.0);
double _n_w_30780=d::at(_n_binding_31072,2.0);
{
{double _n_y_30781=(_n_BASE_30609-(_n_w_30780*0.4));
for(;d::truth((_n_y_30781>(_n_top_30779+(_n_w_30780*0.6))));(void)((_n_y_30781=(_n_y_30781-(_n_w_30780*0.75))))){d::check_cancel();(void)(this->_n_puffs_30642.push(std::array<double,5>{(_n_cx_30778+(((this->_n_rnd_30644()-0.5)*_n_w_30780)*0.6)),_n_y_30781,(_n_w_30780*(0.75+(this->_n_rnd_30644()*0.2))),1.0,1.0}));
}}
(void)(this->_n_puffs_30642.push(std::array<double,5>{(_n_cx_30778-(_n_w_30780*0.35)),(_n_top_30779+(_n_w_30780*0.75)),(_n_w_30780*0.62),1.0,1.0},std::array<double,5>{(_n_cx_30778+(_n_w_30780*0.3)),(_n_top_30779+(_n_w_30780*0.6)),(_n_w_30780*0.7),1.5,1.0},std::array<double,5>{_n_cx_30778,(_n_top_30779+(_n_w_30780*0.45)),(_n_w_30780*0.55),2.0,1.0}));

}
}
{double _n_x_30782=66.0;
for(;d::truth((_n_x_30782<126.0));(void)((_n_x_30782=(_n_x_30782+(3.2+(this->_n_rnd_30644()*1.6)))))){d::check_cancel();(void)(this->_n_puffs_30642.push(std::array<double,5>{_n_x_30782,((_n_BASE_30609-1.8)-(this->_n_rnd_30644()*1.2)),([&](){auto _n_left_31073=(3.0+(this->_n_rnd_30644()*1.6));auto _n_right_31074=(1.6*_n_smooth_30627(70.0,110.0,_n_x_30782));return (_n_left_31073+_n_right_31074);})(),0.4,1.0}));
}}
this->_n_SX_30645=(_n_W_30605+4.0);
this->_n_SY_30646=(_n_BASE_30609+8.0);
this->_n_sh_30647=d::Array<float,true>(size_t((this->_n_SX_30645*this->_n_SY_30646)));
this->_n_anv_30648=d::Array<float,true>(size_t((this->_n_SX_30645*this->_n_SY_30646)));
this->_n_lip_30649=d::Array<float,true>(size_t((this->_n_SX_30645*this->_n_SY_30646)));
{double _n_r_30783=0.0;
for(;d::truth((_n_r_30783<this->_n_SY_30646));(void)((_n_r_30783++))){d::check_cancel();{double _n_i_30784=0.0;
for(;d::truth((_n_i_30784<this->_n_SX_30645));(void)((_n_i_30784++))){d::check_cancel();double _n_x_30785=((_n_i_30784-2.0)+0.5);
double _n_y_30786=(_n_r_30783+0.5);
double _n_tower_30787=0.0;
double _n_cut_30788=([&](){auto _n_argument_31075=(_n_BASE_30609+1.0);auto _n_argument_31076=(_n_BASE_30609-1.5);auto _n_argument_31077=(_n_y_30786+(1.2*(_n_noise_30624((_n_x_30785*0.15),3.3,0.0)-0.5)));return _n_smooth_30627(_n_argument_31075,_n_argument_31076,_n_argument_31077);})();
for(auto &&_n_item_31078:this->_n_puffs_30642){d::check_cancel();auto _n_binding_31079=_n_item_31078;
double _n_px_30789=d::at(_n_binding_31079,0.0);
double _n_py_30790=d::at(_n_binding_31079,1.0);
double _n_pr_30791=d::at(_n_binding_31079,2.0);
double _n_pz_30792=d::at(_n_binding_31079,3.0);
double _n_flat_30793=d::at(_n_binding_31079,4.0);
{
double _n_dx_30794=((_n_x_30785-_n_px_30789)/_n_pr_30791);
double _n_dy_30795=((_n_y_30786-_n_py_30790)/_n_pr_30791);
if(d::truth((((_n_dx_30794*_n_dx_30794)+(_n_dy_30795*_n_dy_30795))>=1.0))){d::check_cancel();continue;
}
double _n_v_30796=((((_n_pr_30791*0.6)+_n_pz_30792)*std::sqrt(((1.0-(_n_dx_30794*_n_dx_30794))-(_n_dy_30795*_n_dy_30795))))*(d::truth(_n_flat_30793)?_n_cut_30788:1.0));
if(d::truth((_n_v_30796>_n_tower_30787))){d::check_cancel();(void)((_n_tower_30787=_n_v_30796));
}

}
}
double _n_fib_30797=(_n_fbm_30625((_n_x_30785*0.035),(_n_y_30786*0.2),3.0,0.0)-0.5);
double _n_top_30798=(this->_n_anvilTop_30640(_n_x_30785)+(2.2*_n_fib_30797));
double _n_bot_30799=([&](){auto _n_left_31080=(this->_n_anvilBot_30641(_n_x_30785)-(1.5*_n_fib_30797));auto _n_right_31081=(3.0*(_n_fbm_30625((_n_x_30785*0.2),7.0,2.0,0.0)-0.5));return (_n_left_31080-_n_right_31081);})();
double _n_mid_30800=((_n_top_30798+_n_bot_30799)/2.0);
double _n_half_30801=d::maximum({0.5,((_n_bot_30799-_n_top_30798)/2.0)});
double _n_anvil_30802=([&](){auto _n_left_31082=([&](){auto _n_argument_31084=0.0;auto _n_argument_31085=((_n_y_30786-_n_mid_30800)/_n_half_30801);auto _n_argument_31086=d::minimum({5.0,(_n_half_30801*0.9)});return _n_dome_30630(_n_argument_31084,_n_argument_31085,_n_argument_31086);})();auto _n_right_31083=_n_smooth_30627(58.0,72.0,(_n_x_30785+(6.0*_n_fib_30797)));return (_n_left_31082*_n_right_31083);})();
double _n_onTop_30803=(d::truth((_n_anvil_30802>0.0))?_n_smooth_30627((_n_top_30798+3.2),(_n_top_30798+0.6),_n_y_30786):0.0);
if((((d::truth((_n_x_30785>66.0))&&d::truth((_n_x_30785<128.0)))&&d::truth((_n_y_30786>(_n_bot_30799-2.0))))&&d::truth((_n_y_30786<(_n_bot_30799+5.0))))){d::check_cancel();double _n_row_30804=std::floor(((_n_x_30785-66.0)/5.2));
double _n_off_30805=((((_n_row_30804*5.2)+66.0)+2.6)+((_n_hash_30623(_n_row_30804,3.0)-0.5)*1.2));
double _n_py_30806=((_n_bot_30799+0.6)+(_n_hash_30623(_n_row_30804,4.0)*1.2));
(void)((_n_anvil_30802=([&](){auto _n_argument_31087=_n_anvil_30802;auto _n_argument_31088=([&](){auto _n_left_31089=([&](){auto _n_left_31091=_n_dome_30630(((_n_x_30785-_n_off_30805)/2.7),((_n_y_30786-_n_py_30806)/2.3),2.2);auto _n_right_31092=_n_smooth_30627(64.0,76.0,_n_x_30785);return (_n_left_31091*_n_right_31092);})();auto _n_right_31090=_n_smooth_30627(130.0,116.0,_n_x_30785);return (_n_left_31089*_n_right_31090);})();return d::maximum({_n_argument_31087,_n_argument_31088});})()));
}
double _n_solid_30807=_n_tower_30787;
double _n_h_30808=d::maximum({_n_solid_30807,_n_anvil_30802});
double _n_a_30809=(d::truth((_n_anvil_30802>_n_solid_30807))?_n_smooth_30627(0.0,2.0,(_n_anvil_30802-_n_solid_30807)):0.0);
double _n_billow_30810=(_n_fbm_30625((_n_x_30785*0.22),(_n_y_30786*0.24),3.0,0.0)-0.5);
double _n_sy_30811=(((_n_y_30786*0.18)+(0.9*(_n_noise_30624((_n_x_30785*0.04),5.5,0.0)-0.5)))+(_n_x_30785*0.012));
double _n_streaky_30812=(([&](){auto _n_argument_31093=((_n_x_30785*0.03)+(0.6*_n_noise_30624((_n_x_30785*0.08),(_n_y_30786*0.1),0.0)));auto _n_argument_31094=_n_sy_30811;auto _n_argument_31095=3.0;auto _n_argument_31096=0.0;return _n_fbm_30625(_n_argument_31093,_n_argument_31094,_n_argument_31095,_n_argument_31096);})()-0.5);
(void)((_n_h_30808=(_n_h_30808+([&](){auto _n_left_31097=d::minimum({1.0,(_n_h_30808/2.5)});auto _n_right_31098=_n_mix_30628((3.0*_n_billow_30810),(2.2*_n_streaky_30812),_n_a_30809);return (_n_left_31097*_n_right_31098);})())));
(void)(([&](){auto&& _n_array_31099=this->_n_sh_30647;auto _n_index_31100=((_n_r_30783*this->_n_SX_30645)+_n_i_30784);auto _n_value_31101=d::maximum({0.0,_n_h_30808});d::put(_n_array_31099,_n_index_31100,_n_value_31101);return _n_value_31101;})());
(void)(([&](){auto&& _n_array_31102=this->_n_anv_30648;auto _n_index_31103=((_n_r_30783*this->_n_SX_30645)+_n_i_30784);auto _n_value_31104=_n_a_30809;d::put(_n_array_31102,_n_index_31103,_n_value_31104);return _n_value_31104;})());
(void)(([&](){auto&& _n_array_31105=this->_n_lip_30649;auto _n_index_31106=((_n_r_30783*this->_n_SX_30645)+_n_i_30784);auto _n_value_31107=(_n_onTop_30803*_n_a_30809);d::put(_n_array_31105,_n_index_31106,_n_value_31107);return _n_value_31107;})());
}}
}}
this->_n_sr_30650=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_sg_30651=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_sb_30652=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_mat_30653=d::Array<uint8_t,true>(size_t(this->_n_N_30634));
this->_n_cloud_30654=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_dark_30655=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_darkSky_30656=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_floorOf_30657=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_jit_30658=d::Array<float,true>(size_t(this->_n_N_30634));
{double _n_k_30813=0.0;
for(;d::truth((_n_k_30813<this->_n_N_30634));(void)((_n_k_30813++))){d::check_cancel();(void)(([&](){auto&& _n_array_31108=this->_n_jit_30658;auto _n_index_31109=_n_k_30813;auto _n_value_31110=((_n_hash_30623(d::mod(_n_k_30813,_n_W_30605),(double(d::i32((_n_k_30813/_n_W_30605))|d::i32(0.0))+517.0))-0.5)*(d::truth((double(d::i32((_n_k_30813/_n_W_30605))|d::i32(0.0))<_n_HZ_30607))?0.16:0.06));d::put(_n_array_31108,_n_index_31109,_n_value_31110);return _n_value_31110;})());
}}
this->_n_LX_30660=(-d::number(0.72));
this->_n_LY_30661=(-d::number(0.3));
this->_n_LZ_30662=0.62;
this->_n_HX0_30664=40.0;
this->_n_HX1_30665=54.0;
this->_n_HW0_30666=58.0;
this->_n_hb_30667=this->_n_ground_30663(47.0);
this->_n_PUMP_X_30668=66.0;
this->_n_PUMP_Y_30669=(this->_n_hb_30667-15.0);
{double _n_r_30822=0.0;
for(;d::truth((_n_r_30822<_n_H_30606));(void)((_n_r_30822++))){d::check_cancel();{double _n_x_30823=0.0;
for(;d::truth((_n_x_30823<_n_W_30605));(void)((_n_x_30823++))){d::check_cancel();double _n_k_30824=((_n_r_30822*_n_W_30605)+_n_x_30823);
double _n_y_30825=(_n_r_30822+0.5);
if(d::truth((_n_y_30825<this->_n_ground_30663(_n_x_30823)))){d::check_cancel();double _n_v_30826=(_n_y_30825/_n_HZ_30607);
double _n_g_30827=this->_n_glowSun_30659(_n_x_30823,_n_y_30825);
double _n_east_30828=_n_smooth_30627(60.0,190.0,_n_x_30823);
double _n_v2_30829=std::pow(_n_v_30826,2.2);
double _n_veil_30830=(0.9+(0.2*_n_fbm_30625((_n_x_30823*0.05),(_n_y_30825*0.09),3.0,0.0)));
double _n_cr_30831=(((0.045+((0.2*_n_v2_30829)*(1.0-(0.6*_n_east_30828))))*_n_veil_30830)+(1.0*_n_g_30827));
double _n_cg_30832=(((0.045+((0.09*_n_v2_30829)*(1.0-(0.5*_n_east_30828))))*_n_veil_30830)+(0.56*_n_g_30827));
double _n_cb_30833=(((0.16+((0.13*_n_v2_30829)*(1.0-(0.35*_n_east_30828))))*_n_veil_30830)+(0.22*_n_g_30827));
double _n_be_30834=_n_smooth_30627(45.0,118.0,_n_x_30823);
double _n_band_30835=((std::exp(((-d::number(((_n_HZ_30607+2.0)-_n_y_30825)))/11.0))*(1.0-(0.85*_n_be_30834)))*(1.0-(0.6*_n_g_30827)));
(void)((((_n_cr_30831=(_n_cr_30831+(_n_band_30835*_n_mix_30628(0.5,0.34,_n_be_30834)))),(_n_cg_30832=(_n_cg_30832+(_n_band_30835*_n_mix_30628(0.26,0.21,_n_be_30834))))),(_n_cb_30833=(_n_cb_30833+(_n_band_30835*_n_mix_30628(0.26,0.3,_n_be_30834))))));
double _n_under_30836=([&](){auto _n_left_31111=([&](){auto _n_argument_31113=98.0;auto _n_argument_31114=128.0;auto _n_argument_31115=(_n_x_30823+(8.0*(_n_noise_30624((_n_y_30825*0.15),4.4,0.0)-0.5)));return _n_smooth_30627(_n_argument_31113,_n_argument_31114,_n_argument_31115);})();auto _n_right_31112=_n_smooth_30627((_n_BASE_30609-14.0),(_n_BASE_30609-1.0),_n_y_30825);return (_n_left_31111*_n_right_31112);})();
double _n_slot_30837=([&](){auto _n_left_31116=([&](){auto _n_argument_31118=_n_smooth_30627((_n_BASE_30609+1.5),(_n_HZ_30607-6.0),_n_y_30825);auto _n_argument_31119=0.5;return std::pow(_n_argument_31118,_n_argument_31119);})();auto _n_right_31117=(0.85+(0.3*_n_noise_30624((_n_x_30823*0.06),6.6,0.0)));return (_n_left_31116*_n_right_31117);})();
(void)((_n_cr_30831=([&](){auto _n_argument_31120=_n_cr_30831;auto _n_argument_31121=(_n_mix_30628(0.035,0.38,_n_slot_30837)*_n_veil_30830);auto _n_argument_31122=(_n_under_30836*0.92);return _n_mix_30628(_n_argument_31120,_n_argument_31121,_n_argument_31122);})()));
(void)((_n_cg_30832=([&](){auto _n_argument_31123=_n_cg_30832;auto _n_argument_31124=(_n_mix_30628(0.032,0.3,_n_slot_30837)*_n_veil_30830);auto _n_argument_31125=(_n_under_30836*0.92);return _n_mix_30628(_n_argument_31123,_n_argument_31124,_n_argument_31125);})()));
(void)((_n_cb_30833=([&](){auto _n_argument_31126=_n_cb_30833;auto _n_argument_31127=(_n_mix_30628(0.075,0.56,_n_slot_30837)*_n_veil_30830);auto _n_argument_31128=(_n_under_30836*0.92);return _n_mix_30628(_n_argument_31126,_n_argument_31127,_n_argument_31128);})()));
(void)(([&](){auto&& _n_array_31129=this->_n_darkSky_30656;auto _n_index_31130=_n_k_30824;auto _n_value_31131=_n_under_30836;d::put(_n_array_31129,_n_index_31130,_n_value_31131);return _n_value_31131;})());
if(d::truth((_n_r_30822<(this->_n_SY_30646-1.0)))){d::check_cancel();double _n_i_30838=(_n_x_30823+2.0);
double _n_j_30839=((_n_r_30822*this->_n_SX_30645)+_n_i_30838);
double _n_h_30840=d::at(this->_n_sh_30647,_n_j_30839);
double _n_c_30841=_n_smooth_30627(0.15,1.6,_n_h_30840);
if(d::truth((_n_c_30841>0.0))){d::check_cancel();double _n_up_30842=(d::truth((_n_r_30822>0.0))?d::at(this->_n_sh_30647,(_n_j_30839-this->_n_SX_30645)):0.0);
double _n_dn_30843=d::at(this->_n_sh_30647,(_n_j_30839+this->_n_SX_30645));
double _n_gx_30844=((d::at(this->_n_sh_30647,(_n_j_30839+1.0))-d::at(this->_n_sh_30647,(_n_j_30839-1.0)))/2.0);
double _n_gy_30845=((_n_dn_30843-_n_up_30842)/2.0);
double _n_nl_30846=std::sqrt((((_n_gx_30844*_n_gx_30844)+(_n_gy_30845*_n_gy_30845))+1.0));
double _n_nx_30847=((-d::number(_n_gx_30844))/_n_nl_30846);
double _n_ny_30848=((-d::number(_n_gy_30845))/_n_nl_30846);
double _n_nz_30849=(1.0/_n_nl_30846);
double _n_an_30850=d::at(this->_n_anv_30648,_n_j_30839);
double _n_lam_30851=([&](){auto _n_argument_31132=_n_clamp_30626((((_n_nx_30847*this->_n_LX_30660)+(_n_ny_30848*this->_n_LY_30661))+(_n_nz_30849*this->_n_LZ_30662)));auto _n_argument_31133=1.5;return std::pow(_n_argument_31132,_n_argument_31133);})();
double _n_vis_30852=(1.0-(0.4*([&](){auto _n_argument_31134=22.0;auto _n_argument_31135=(_n_BASE_30609-4.0);auto _n_argument_31136=(_n_y_30825+(5.0*(_n_noise_30624((_n_x_30823*0.12),2.2,0.0)-0.5)));return _n_smooth_30627(_n_argument_31134,_n_argument_31135,_n_argument_31136);})()));
double _n_a_30853=_n_smooth_30627(8.0,_n_BASE_30609,_n_y_30825);
double _n_near_30854=std::exp((-d::number(std::pow(((_n_x_30823-d::at(_n_SUN_30608,0.0))/110.0),2.0))));
double _n_flank_30855=(_n_smooth_30627(122.0,108.0,_n_x_30823)*(1.0-_n_an_30850));
double _n_sR_30856=1.0;
double _n_sG_30857=_n_mix_30628(0.84,0.58,_n_a_30853);
double _n_sB_30858=_n_mix_30628(0.58,0.45,_n_a_30853);
double _n_ej_30859=(8.0*(_n_fbm_30625(((_n_y_30825*0.14)+(_n_x_30823*0.02)),21.3,3.0,0.0)-0.5));
double _n_lee_30860=(1.0-(([&](){auto _n_left_31137=((0.65*([&](){auto _n_argument_31139=((this->_n_towerC_30638(_n_y_30825)-14.0)+_n_ej_30859);auto _n_argument_31140=((([&](){auto _n_left_31141=this->_n_towerC_30638(_n_y_30825);auto _n_right_31142=this->_n_towerHW_30639(_n_y_30825);return (_n_left_31141+_n_right_31142);})()+16.0)+_n_ej_30859);auto _n_argument_31143=_n_x_30823;return _n_smooth_30627(_n_argument_31139,_n_argument_31140,_n_argument_31143);})())*(1.0-_n_an_30850));auto _n_right_31138=([&](){auto _n_argument_31144=(this->_n_anvilBot_30641(_n_x_30823)-3.0);auto _n_argument_31145=(this->_n_anvilBot_30641(_n_x_30823)+9.0);auto _n_argument_31146=(_n_y_30825+(5.0*(_n_noise_30624((_n_x_30823*0.15),21.0,0.0)-0.5)));return _n_smooth_30627(_n_argument_31144,_n_argument_31145,_n_argument_31146);})();return (_n_left_31137*_n_right_31138);})()*(d::truth((_n_y_30825<_n_BASE_30609))?1.0:0.0)));
double _n_sun_30861=(((((_n_lam_30851*_n_vis_30852)*_n_lee_30860)*(0.95+(0.4*_n_near_30854)))*(1.0-(0.3*_n_flank_30855)))*(1.0-(0.2*_n_an_30850)));
double _n_sky_30862=(0.55+(0.45*d::maximum({0.0,(-d::number(_n_ny_30848))})));
double _n_bounce_30863=(((d::maximum({0.0,_n_ny_30848})*(0.2+(0.45*_n_near_30854)))*(1.0-(0.6*_n_flank_30855)))*(1.0-(0.5*_n_an_30850)));
double _n_occ_30864=(1.0-((0.35*_n_smooth_30627(4.0,22.0,_n_h_30840))*(1.0-_n_lam_30851)));
double _n_kr_30865=((((0.27*_n_sky_30862)+(_n_sR_30856*_n_sun_30861))+(0.36*_n_bounce_30863))*_n_occ_30864);
double _n_kg_30866=((((0.2*_n_sky_30862)+(_n_sG_30857*_n_sun_30861))+(0.16*_n_bounce_30863))*_n_occ_30864);
double _n_kb_30867=((((0.45*_n_sky_30862)+(_n_sB_30858*_n_sun_30861))+(0.16*_n_bounce_30863))*_n_occ_30864);
double _n_below_30868=(_n_clamp_30626((_n_ny_30848*2.2))*_n_an_30850);
(void)((((_n_kr_30865=(_n_kr_30865*(1.0-(0.42*_n_below_30868)))),(_n_kg_30866=(_n_kg_30866*(1.0-(0.46*_n_below_30868))))),(_n_kb_30867=(_n_kb_30867*(1.0-(0.3*_n_below_30868))))));
double _n_rim_30869=((d::at(this->_n_lip_30649,_n_j_30839)*_n_smooth_30627(196.0,120.0,_n_x_30823))*(0.6+(0.4*_n_lam_30851)));
(void)((((_n_kr_30865=_n_mix_30628(_n_kr_30865,0.98,(_n_rim_30869*0.75))),(_n_kg_30866=_n_mix_30628(_n_kg_30866,0.86,(_n_rim_30869*0.75)))),(_n_kb_30867=_n_mix_30628(_n_kb_30867,0.64,(_n_rim_30869*0.75)))));
double _n_low_30870=(_n_clamp_30626(((_n_ny_30848*1.6)+0.2))*_n_flank_30855);
(void)((((_n_kr_30865=_n_mix_30628(_n_kr_30865,0.14,(_n_low_30870*0.65))),(_n_kg_30866=_n_mix_30628(_n_kg_30866,0.11,(_n_low_30870*0.65)))),(_n_kb_30867=_n_mix_30628(_n_kb_30867,0.24,(_n_low_30870*0.65)))));
double _n_base_30871=((_n_smooth_30627((_n_BASE_30609-4.5),(_n_BASE_30609-0.5),_n_y_30825)*(1.0-_n_an_30850))*(1.0-(0.3*_n_near_30854)));
(void)((((_n_kr_30865=_n_mix_30628(_n_kr_30865,0.03,(_n_base_30871*0.9))),(_n_kg_30866=_n_mix_30628(_n_kg_30866,0.026,(_n_base_30871*0.9)))),(_n_kb_30867=_n_mix_30628(_n_kb_30867,0.06,(_n_base_30871*0.9)))));
(void)((((_n_cr_30831=_n_mix_30628(_n_cr_30831,_n_kr_30865,_n_c_30841)),(_n_cg_30832=_n_mix_30628(_n_cg_30832,_n_kg_30866,_n_c_30841))),(_n_cb_30833=_n_mix_30628(_n_cb_30833,_n_kb_30867,_n_c_30841))));
(void)(([&](){auto&& _n_array_31147=this->_n_cloud_30654;auto _n_index_31148=_n_k_30824;auto _n_value_31149=_n_c_30841;d::put(_n_array_31147,_n_index_31148,_n_value_31149);return _n_value_31149;})());
(void)(([&](){auto&& _n_array_31150=this->_n_dark_30655;auto _n_index_31151=_n_k_30824;auto _n_value_31152=(_n_base_30871*_n_c_30841);d::put(_n_array_31150,_n_index_31151,_n_value_31152);return _n_value_31152;})());
}
}
double _n_on_30872=this->_n_shelfOn_30672(_n_x_30823);
if(((d::truth((_n_on_30872>0.0))&&d::truth((_n_y_30825>(_n_BASE_30609-5.0))))&&d::truth((_n_y_30825<(_n_BASE_30609+5.0))))){d::check_cancel();double _n_st_30873=this->_n_shelfTop_30670(_n_x_30823);
double _n_sbt_30874=this->_n_shelfBot_30671(_n_x_30823);
double _n_s_30875=(([&](){auto _n_left_31153=_n_smooth_30627((_n_st_30873-1.0),(_n_st_30873+0.6),_n_y_30825);auto _n_right_31154=_n_smooth_30627((_n_sbt_30874+0.6),(_n_sbt_30874-0.8),_n_y_30825);return (_n_left_31153*_n_right_31154);})()*_n_on_30872);
if(d::truth((_n_s_30875>0.0))){d::check_cancel();double _n_n_30876=_n_fbm_30625((_n_x_30823*0.15),(_n_y_30825*0.5),2.0,0.0);
double _n_lit_30877=([&](){auto _n_left_31155=(0.55+((0.9*_n_n_30876)*(0.7+(0.6*_n_noise_30624((_n_x_30823*0.05),(_n_y_30825*1.3),0.0)))));auto _n_right_31156=(0.9*_n_smooth_30627((_n_sbt_30874-1.6),(_n_sbt_30874-0.2),_n_y_30825));return (_n_left_31155+_n_right_31156);})();
(void)((((_n_cr_30831=_n_mix_30628(_n_cr_30831,(0.06*_n_lit_30877),_n_s_30875)),(_n_cg_30832=_n_mix_30628(_n_cg_30832,(0.056*_n_lit_30877),_n_s_30875))),(_n_cb_30833=_n_mix_30628(_n_cb_30833,(0.12*_n_lit_30877),_n_s_30875))));
(void)(([&](){auto&& _n_array_31157=this->_n_cloud_30654;auto _n_index_31158=_n_k_30824;auto _n_value_31159=d::maximum({d::at(this->_n_cloud_30654,_n_k_30824),_n_s_30875});d::put(_n_array_31157,_n_index_31158,_n_value_31159);return _n_value_31159;})());
(void)(([&](){auto&& _n_array_31160=this->_n_dark_30655;auto _n_index_31161=_n_k_30824;auto _n_value_31162=d::maximum({d::at(this->_n_dark_30655,_n_k_30824),_n_s_30875});d::put(_n_array_31160,_n_index_31161,_n_value_31162);return _n_value_31162;})());
}
}
(void)(((([&](){auto&& _n_array_31163=this->_n_sr_30650;auto _n_index_31164=_n_k_30824;auto _n_value_31165=_n_cr_30831;d::put(_n_array_31163,_n_index_31164,_n_value_31165);return _n_value_31165;})(),([&](){auto&& _n_array_31166=this->_n_sg_30651;auto _n_index_31167=_n_k_30824;auto _n_value_31168=_n_cg_30832;d::put(_n_array_31166,_n_index_31167,_n_value_31168);return _n_value_31168;})()),([&](){auto&& _n_array_31169=this->_n_sb_30652;auto _n_index_31170=_n_k_30824;auto _n_value_31171=_n_cb_30833;d::put(_n_array_31169,_n_index_31170,_n_value_31171);return _n_value_31171;})()));
(void)(([&](){auto&& _n_array_31172=this->_n_mat_30653;auto _n_index_31173=_n_k_30824;auto _n_value_31174=_n_SKY_30613;d::put(_n_array_31172,_n_index_31173,_n_value_31174);return _n_value_31174;})());
(void)(([&](){auto&& _n_array_31175=this->_n_floorOf_30657;auto _n_index_31176=_n_k_30824;auto _n_value_31177=(0.06-(0.06*d::maximum({d::at(this->_n_darkSky_30656,_n_k_30824),d::at(this->_n_dark_30655,_n_k_30824)})));d::put(_n_array_31175,_n_index_31176,_n_value_31177);return _n_value_31177;})());
}else {d::check_cancel();double _n_g_30878=([&](){auto _n_left_31178=this->_n_glowSun_30659(_n_x_30823,(_n_HZ_30607+1.0));auto _n_right_31179=std::exp(((-d::number((_n_y_30825-_n_HZ_30607)))/3.2));return (_n_left_31178*_n_right_31179);})();
(void)(([&](){auto&& _n_array_31180=this->_n_mat_30653;auto _n_index_31181=_n_k_30824;auto _n_value_31182=(d::truth((_n_y_30825<(_n_HZ_30607+4.0)))?_n_PLAIN_30614:_n_FIELD_30615);d::put(_n_array_31180,_n_index_31181,_n_value_31182);return _n_value_31182;})());
(void)(((([&](){auto&& _n_array_31183=this->_n_sr_30650;auto _n_index_31184=_n_k_30824;auto _n_value_31185=(0.06+(0.55*_n_g_30878));d::put(_n_array_31183,_n_index_31184,_n_value_31185);return _n_value_31185;})(),([&](){auto&& _n_array_31186=this->_n_sg_30651;auto _n_index_31187=_n_k_30824;auto _n_value_31188=(0.045+(0.3*_n_g_30878));d::put(_n_array_31186,_n_index_31187,_n_value_31188);return _n_value_31188;})()),([&](){auto&& _n_array_31189=this->_n_sb_30652;auto _n_index_31190=_n_k_30824;auto _n_value_31191=(0.08+(0.1*_n_g_30878));d::put(_n_array_31189,_n_index_31190,_n_value_31191);return _n_value_31191;})()));
(void)(([&](){auto&& _n_array_31192=this->_n_floorOf_30657;auto _n_index_31193=_n_k_30824;auto _n_value_31194=0.06;d::put(_n_array_31192,_n_index_31193,_n_value_31194);return _n_value_31194;})());
}
double _n_belt_30879=((_n_HZ_30607+2.0)-([&](){auto _n_left_31195=([&](){auto _n_left_31197=(1.5+(2.2*_n_fbm_30625((_n_x_30823*0.3),2.0,2.0,0.0)));auto _n_right_31198=_n_smooth_30627(140.0,150.0,_n_x_30823);return (_n_left_31197*_n_right_31198);})();auto _n_right_31196=_n_smooth_30627(196.0,186.0,_n_x_30823);return (_n_left_31195*_n_right_31196);})());
double _n_belt2_30880=((_n_HZ_30607+2.0)-([&](){auto _n_left_31199=([&](){auto _n_left_31201=(1.0+(1.8*_n_fbm_30625((_n_x_30823*0.35),9.0,2.0,0.0)));auto _n_right_31202=_n_smooth_30627(0.0,4.0,_n_x_30823);return (_n_left_31201*_n_right_31202);})();auto _n_right_31200=_n_smooth_30627(18.0,10.0,_n_x_30823);return (_n_left_31199*_n_right_31200);})());
if((d::truth((_n_y_30825>=d::minimum({_n_belt_30879,_n_belt2_30880})))&&d::truth((_n_y_30825<(_n_HZ_30607+3.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31203=this->_n_mat_30653;auto _n_index_31204=_n_k_30824;auto _n_value_31205=_n_BELT_30622;d::put(_n_array_31203,_n_index_31204,_n_value_31205);return _n_value_31205;})());
}
double _n_tx_30881=(((_n_x_30823+0.5)-31.0)/8.5);
double _n_ty_30882=((_n_y_30825-(this->_n_hb_30667-10.0))/7.0);
bool _n_crown_30883=(((_n_tx_30881*_n_tx_30881)+(_n_ty_30882*_n_ty_30882))<(1.0+(0.35*(_n_fbm_30625((_n_x_30823*0.4),(_n_y_30825*0.4),2.0,0.0)-0.5))));
if((d::truth(_n_crown_30883)||d::truth(([&]()->bool{auto _n_logical_31206=([&]()->bool{auto _n_logical_31207=(std::fabs(((_n_x_30823+0.5)-31.5))<1.0);return d::truth(_n_logical_31207)?(_n_y_30825>(this->_n_hb_30667-6.0)):_n_logical_31207;})();return d::truth(_n_logical_31206)?(_n_y_30825<(this->_n_hb_30667+1.0)):_n_logical_31206;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_31208=this->_n_mat_30653;auto _n_index_31209=_n_k_30824;auto _n_value_31210=_n_TREE_30620;d::put(_n_array_31208,_n_index_31209,_n_value_31210);return _n_value_31210;})());
}
if((((d::truth((_n_x_30823>=this->_n_HX0_30664))&&d::truth((_n_x_30823<=this->_n_HX1_30665)))&&d::truth((_n_y_30825>=this->_n_HW0_30666)))&&d::truth((_n_y_30825<(this->_n_hb_30667+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31211=this->_n_mat_30653;auto _n_index_31212=_n_k_30824;auto _n_value_31213=_n_HOUSE_30617;d::put(_n_array_31211,_n_index_31212,_n_value_31213);return _n_value_31213;})());
}
if(((d::truth((_n_y_30825>=(this->_n_HW0_30666-7.0)))&&d::truth((_n_y_30825<this->_n_HW0_30666)))&&d::truth((std::fabs(((_n_x_30823+0.5)-47.5))<=(8.6-((this->_n_HW0_30666-_n_y_30825)*1.15)))))){d::check_cancel();(void)(([&](){auto&& _n_array_31214=this->_n_mat_30653;auto _n_index_31215=_n_k_30824;auto _n_value_31216=_n_ROOF_30618;d::put(_n_array_31214,_n_index_31215,_n_value_31216);return _n_value_31216;})());
}
if((((d::truth((_n_x_30823>=50.0))&&d::truth((_n_x_30823<=51.0)))&&d::truth((_n_y_30825>=(this->_n_HW0_30666-8.0))))&&d::truth((_n_y_30825<(this->_n_HW0_30666-3.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31217=this->_n_mat_30653;auto _n_index_31218=_n_k_30824;auto _n_value_31219=_n_ROOF_30618;d::put(_n_array_31217,_n_index_31218,_n_value_31219);return _n_value_31219;})());
}
if((((d::truth((_n_x_30823>=36.0))&&d::truth((_n_x_30823<this->_n_HX0_30664)))&&d::truth((_n_y_30825>=(this->_n_hb_30667-4.0))))&&d::truth((_n_y_30825<(this->_n_hb_30667-3.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31220=this->_n_mat_30653;auto _n_index_31221=_n_k_30824;auto _n_value_31222=_n_ROOF_30618;d::put(_n_array_31220,_n_index_31221,_n_value_31222);return _n_value_31222;})());
}
if(((d::truth((_n_x_30823==36.0))&&d::truth((_n_y_30825>=(this->_n_hb_30667-3.0))))&&d::truth((_n_y_30825<this->_n_hb_30667)))){d::check_cancel();(void)(([&](){auto&& _n_array_31223=this->_n_mat_30653;auto _n_index_31224=_n_k_30824;auto _n_value_31225=_n_HOUSE_30617;d::put(_n_array_31223,_n_index_31224,_n_value_31225);return _n_value_31225;})());
}
if((((d::truth((_n_x_30823>=49.0))&&d::truth((_n_x_30823<=51.0)))&&d::truth((_n_y_30825>=(this->_n_HW0_30666+2.0))))&&d::truth((_n_y_30825<(this->_n_HW0_30666+5.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31226=this->_n_mat_30653;auto _n_index_31227=_n_k_30824;auto _n_value_31228=_n_PANE_30619;d::put(_n_array_31226,_n_index_31227,_n_value_31228);return _n_value_31228;})());
}
if((((d::truth((_n_x_30823>=43.0))&&d::truth((_n_x_30823<=44.0)))&&d::truth((_n_y_30825>=(this->_n_HW0_30666+2.0))))&&d::truth((_n_y_30825<(this->_n_HW0_30666+4.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31229=this->_n_mat_30653;auto _n_index_31230=_n_k_30824;auto _n_value_31231=_n_PANE_30619;d::put(_n_array_31229,_n_index_31230,_n_value_31231);return _n_value_31231;})());
}
double _n_py_30884=(_n_y_30825-this->_n_PUMP_Y_30669);
if((d::truth((_n_py_30884>2.0))&&d::truth((_n_y_30825<(this->_n_hb_30667+0.5))))){d::check_cancel();double _n_half_30885=(0.4+(_n_py_30884*0.11));
double _n_dx_30886=((_n_x_30823+0.5)-this->_n_PUMP_X_30668);
if(d::truth((std::fabs((std::fabs(_n_dx_30886)-_n_half_30885))<0.55))){d::check_cancel();(void)(([&](){auto&& _n_array_31232=this->_n_mat_30653;auto _n_index_31233=_n_k_30824;auto _n_value_31234=_n_PUMP_30621;d::put(_n_array_31232,_n_index_31233,_n_value_31234);return _n_value_31234;})());
}
if((d::truth((std::fabs(_n_dx_30886)<_n_half_30885))&&d::truth((d::mod(double(d::i32(_n_py_30884)|d::i32(0.0)),4.0)==0.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_31235=this->_n_mat_30653;auto _n_index_31236=_n_k_30824;auto _n_value_31237=_n_PUMP_30621;d::put(_n_array_31235,_n_index_31236,_n_value_31237);return _n_value_31237;})());
}
}
}}
}}
{double _n_r_30889=(_n_HZ_30607+3.0);
for(;d::truth((_n_r_30889<_n_H_30606));(void)((_n_r_30889++))){d::check_cancel();double _n_p_30890=(((_n_r_30889+0.5)-_n_HZ_30607)/(_n_H_30606-_n_HZ_30607));
{double _n_x_30891=0.0;
for(;d::truth((_n_x_30891<_n_W_30605));(void)((_n_x_30891++))){d::check_cancel();double _n_k_30892=((_n_r_30889*_n_W_30605)+_n_x_30891);
if(d::truth((d::at(this->_n_mat_30653,_n_k_30892)!=_n_FIELD_30615))){d::check_cancel();continue;
}
if(d::truth(([&](){auto _n_left_31238=std::fabs(((_n_x_30891+0.5)-this->_n_roadC_30673(_n_p_30890)));auto _n_right_31239=([&](){auto _n_left_31240=this->_n_roadW_30674(_n_p_30890);auto _n_right_31241=(0.6*(_n_noise_30624((_n_x_30891*0.3),(_n_r_30889*0.3),0.0)-0.5));return (_n_left_31240+_n_right_31241);})();return (_n_left_31238<_n_right_31239);})())){d::check_cancel();(void)(([&](){auto&& _n_array_31242=this->_n_mat_30653;auto _n_index_31243=_n_k_30892;auto _n_value_31244=_n_ROAD_30616;d::put(_n_array_31242,_n_index_31243,_n_value_31244);return _n_value_31244;})());
}
}}
}}
this->_n_VX_30675=57.0;
this->_n_TW_30676=512.0;
this->_n_wheat_30677=d::Array<float,true>(size_t((_n_H_30606*this->_n_TW_30676)));
this->_n_persp_30678=d::Array<float,true>(size_t(this->_n_N_30634));
{double _n_r_30893=_n_HZ_30607;
for(;d::truth((_n_r_30893<_n_H_30606));(void)((_n_r_30893++))){d::check_cancel();double _n_p_30894=(((_n_r_30893+0.5)-_n_HZ_30607)/(_n_H_30606-_n_HZ_30607));
{double _n_u_30895=0.0;
for(;d::truth((_n_u_30895<this->_n_TW_30676));(void)((_n_u_30895++))){d::check_cancel();(void)(([&](){auto&& _n_array_31245=this->_n_wheat_30677;auto _n_index_31246=((_n_r_30893*this->_n_TW_30676)+_n_u_30895);auto _n_value_31247=_n_fbm_30625((_n_u_30895*0.55),(_n_r_30893*(0.5-(0.42*_n_p_30894))),3.0,(this->_n_TW_30676*0.55));d::put(_n_array_31245,_n_index_31246,_n_value_31247);return _n_value_31247;})());
}}
{double _n_x_30896=0.0;
for(;d::truth((_n_x_30896<_n_W_30605));(void)((_n_x_30896++))){d::check_cancel();(void)(([&](){auto&& _n_array_31248=this->_n_persp_30678;auto _n_index_31249=((_n_r_30893*_n_W_30605)+_n_x_30896);auto _n_value_31250=(((((_n_x_30896+0.5)-this->_n_VX_30675)*24.0)/((_n_r_30893+2.0)-_n_HZ_30607))+256.0);d::put(_n_array_31248,_n_index_31249,_n_value_31250);return _n_value_31250;})());
}}
}}
this->_n_fieldLight_30679=d::Array<float,true>(size_t(this->_n_N_30634));
{double _n_r_30897=_n_HZ_30607;
for(;d::truth((_n_r_30897<_n_H_30606));(void)((_n_r_30897++))){d::check_cancel();double _n_y_30898=(_n_r_30897+0.5);
double _n_p_30899=((_n_y_30898-_n_HZ_30607)/(_n_H_30606-_n_HZ_30607));
{double _n_x_30900=0.0;
for(;d::truth((_n_x_30900<_n_W_30605));(void)((_n_x_30900++))){d::check_cancel();double _n_sunW_30901=std::exp((-d::number(std::pow(((_n_x_30900-d::at(_n_SUN_30608,0.0))/100.0),2.0))));
double _n_east_30902=_n_smooth_30627(80.0,130.0,(_n_x_30900+(10.0*_n_p_30899)));
double _n_fore_30903=(1.0-(0.6*_n_smooth_30627((_n_H_30606-22.0),(_n_H_30606-2.0),_n_y_30898)));
(void)(([&](){auto&& _n_array_31251=this->_n_fieldLight_30679;auto _n_index_31252=((_n_r_30897*_n_W_30605)+_n_x_30900);auto _n_value_31253=(((0.72+(0.45*_n_sunW_30901))*(1.0-(0.35*_n_east_30902)))*_n_fore_30903);d::put(_n_array_31251,_n_index_31252,_n_value_31253);return _n_value_31253;})());
}}
}}
this->_n_GW_30680=512.0;
this->_n_gust_30681=d::Array<float,true>(size_t((this->_n_GW_30680*(_n_H_30606-_n_HZ_30607))));
{double _n_r_30904=_n_HZ_30607;
for(;d::truth((_n_r_30904<_n_H_30606));(void)((_n_r_30904++))){d::check_cancel();{double _n_u_30905=0.0;
for(;d::truth((_n_u_30905<this->_n_GW_30680));(void)((_n_u_30905++))){d::check_cancel();(void)(([&](){auto&& _n_array_31254=this->_n_gust_30681;auto _n_index_31255=(((_n_r_30904-_n_HZ_30607)*this->_n_GW_30680)+_n_u_30905);auto _n_value_31256=([&](){auto _n_argument_31257=0.4;auto _n_argument_31258=0.7;auto _n_argument_31259=_n_fbm_30625((_n_u_30905*0.025),(_n_r_30904*0.16),3.0,(this->_n_GW_30680*0.025));return _n_smooth_30627(_n_argument_31257,_n_argument_31258,_n_argument_31259);})();d::put(_n_array_31254,_n_index_31255,_n_value_31256);return _n_value_31256;})());
}}
}}
this->_n_CW_30682=400.0;
this->_n_streak_30683=d::Array<float,true>(size_t((this->_n_CW_30682*_n_HZ_30607)));
{double _n_r_30906=0.0;
for(;d::truth((_n_r_30906<_n_HZ_30607));(void)((_n_r_30906++))){d::check_cancel();{double _n_u_30907=0.0;
for(;d::truth((_n_u_30907<this->_n_CW_30682));(void)((_n_u_30907++))){d::check_cancel();double _n_n_30908=_n_fbm_30625((_n_u_30907*0.02),(_n_r_30906*0.2),4.0,(this->_n_CW_30682*0.02));
(void)(([&](){auto&& _n_array_31260=this->_n_streak_30683;auto _n_index_31261=((_n_r_30906*this->_n_CW_30682)+_n_u_30907);auto _n_value_31262=([&](){auto _n_left_31263=([&](){auto _n_left_31265=_n_smooth_30627(0.64,0.8,_n_n_30908);auto _n_right_31266=_n_smooth_30627(40.0,46.0,_n_r_30906);return (_n_left_31265*_n_right_31266);})();auto _n_right_31264=_n_smooth_30627((_n_HZ_30607-3.0),52.0,_n_r_30906);return (_n_left_31263*_n_right_31264);})();d::put(_n_array_31260,_n_index_31261,_n_value_31262);return _n_value_31262;})());
}}
}}
this->_n_stars_30684=d::Array<d::Array<double,false>,false>{};
{double _n_r_30909=0.0;
for(;d::truth((_n_r_30909<28.0));(void)((_n_r_30909++))){d::check_cancel();{double _n_x_30910=0.0;
for(;d::truth((_n_x_30910<100.0));(void)((_n_x_30910++))){d::check_cancel();if((d::truth((_n_hash_30623(_n_x_30910,((_n_r_30909*5.0)+3.0))>0.986))&&d::truth((d::at(this->_n_cloud_30654,((_n_r_30909*_n_W_30605)+_n_x_30910))<0.05)))){d::check_cancel();(void)(this->_n_stars_30684.push(d::Array<double,false>{((_n_r_30909*_n_W_30605)+_n_x_30910),(_n_hash_30623(_n_x_30910,_n_r_30909)*6.28),(1.0+(_n_hash_30623(_n_r_30909,_n_x_30910)*2.5)),((0.85*(1.0-(_n_r_30909/28.0)))*(1.0-(_n_x_30910/130.0)))}));
}
}}
}}
this->_n_star_30685=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_ears_30686=d::Array<std::array<double,5>,false>{};
{double _n_x_30911=2.0;
for(;d::truth((_n_x_30911<_n_W_30605));(void)((_n_x_30911=(_n_x_30911+(5.0+(_n_hash_30623(double(d::i32(_n_x_30911)|d::i32(0.0)),60.0)*4.0)))))){d::check_cancel();(void)(this->_n_ears_30686.push(std::array<double,5>{_n_x_30911,(8.0+(_n_hash_30623((_n_x_30911*3.0),61.0)*12.0)),(_n_hash_30623((_n_x_30911*7.0),62.0)*6.28),(_n_hash_30623((_n_x_30911*5.0),63.0)*6.0),(5.0+(d::truth((_n_hash_30623(_n_x_30911,64.0)>0.5))?1.0:0.0))}));
}}
this->_n_ear_30687=d::Array<float,true>(size_t(this->_n_N_30634));
this->_n_touched_30688=d::Array<double,false>{};
this->_n_RW_30689=256.0;
this->_n_shafts_30690=d::Array<float,true>(size_t(this->_n_RW_30689));
{double _n_u_30912=0.0;
for(;d::truth((_n_u_30912<this->_n_RW_30689));(void)((_n_u_30912++))){d::check_cancel();(void)(([&](){auto&& _n_array_31267=this->_n_shafts_30690;auto _n_index_31268=_n_u_30912;auto _n_value_31269=([&](){auto _n_argument_31270=0.47;auto _n_argument_31271=0.57;auto _n_argument_31272=_n_fbm_30625((_n_u_30912*0.09375),0.5,2.0,24.0);return _n_smooth_30627(_n_argument_31270,_n_argument_31271,_n_argument_31272);})();d::put(_n_array_31267,_n_index_31268,_n_value_31269);return _n_value_31269;})());
}}
this->_n_colPhase_30691=d::Array<float,true>(size_t(_n_W_30605));
this->_n_colSpeed_30692=d::Array<float,true>(size_t(_n_W_30605));
{double _n_x_30913=0.0;
for(;d::truth((_n_x_30913<_n_W_30605));(void)((_n_x_30913++))){d::check_cancel();(void)((([&](){auto&& _n_array_31273=this->_n_colPhase_30691;auto _n_index_31274=_n_x_30913;auto _n_value_31275=(_n_hash_30623(_n_x_30913,77.0)*40.0);d::put(_n_array_31273,_n_index_31274,_n_value_31275);return _n_value_31275;})(),([&](){auto&& _n_array_31276=this->_n_colSpeed_30692;auto _n_index_31277=_n_x_30913;auto _n_value_31278=(22.0+(_n_hash_30623(_n_x_30913,78.0)*14.0));d::put(_n_array_31276,_n_index_31277,_n_value_31278);return _n_value_31278;})()));
}}
this->_n_rainTop_30693=d::Array<float,true>(size_t(_n_W_30605));
this->_n_rainOn_30694=d::Array<float,true>(size_t(_n_W_30605));
{double _n_x_30914=0.0;
for(;d::truth((_n_x_30914<_n_W_30605));(void)((_n_x_30914++))){d::check_cancel();(void)((([&](){auto&& _n_array_31279=this->_n_rainTop_30693;auto _n_index_31280=_n_x_30914;auto _n_value_31281=(this->_n_shelfBot_30671(_n_x_30914)-1.5);d::put(_n_array_31279,_n_index_31280,_n_value_31281);return _n_value_31281;})(),([&](){auto&& _n_array_31282=this->_n_rainOn_30694;auto _n_index_31283=_n_x_30914;auto _n_value_31284=([&](){auto _n_left_31285=_n_smooth_30627(106.0,118.0,_n_x_30914);auto _n_right_31286=_n_smooth_30627(198.0,186.0,_n_x_30914);return (_n_left_31285*_n_right_31286);})();d::put(_n_array_31282,_n_index_31283,_n_value_31284);return _n_value_31284;})()));
}}
this->_n_PERIOD_30695=3.1;
this->_n_bolts_30696=d::Array<std::shared_ptr<_n_Record_30697>,false>{};
{double _n_i_30915=0.0;
for(;d::truth((_n_i_30915<4.0));(void)((_n_i_30915++))){d::check_cancel();d::Array<std::array<double,5>,false> _n_segs_30916=d::Array<std::array<double,5>,false>{};
std::function<void(double,double,double,double,double)> _n_walk_30917=[&]( double _a0,double _a1,double _a2,double _a3,double _a4) mutable ->void{double _n_x_30918=_a0;
double _n_y_30919=_a1;
double _n_len_30920=_a2;
double _n_lean_30921=_a3;
double _n_depth_30922=_a4;
{
{double _n_s_30923=0.0;
for(;(d::truth((_n_s_30923<_n_len_30920))&&d::truth((_n_y_30919<(_n_HZ_30607+2.0))));(void)((_n_s_30923++))){d::check_cancel();double _n_nx_30924=((_n_x_30918+((_n_hash_30623(((_n_i_30915*97.0)+_n_s_30923),((_n_depth_30922*13.0)+41.0))-0.5)*3.2))+_n_lean_30921);
double _n_ny_30925=((_n_y_30919+0.9)+(_n_hash_30623(((_n_i_30915*31.0)+_n_s_30923),(_n_depth_30922+42.0))*1.3));
(void)(_n_segs_30916.push(std::array<double,5>{_n_x_30918,_n_y_30919,_n_nx_30924,_n_ny_30925,_n_depth_30922}));
if((d::truth((_n_depth_30922==0.0))&&d::truth((_n_hash_30623(((_n_i_30915*7.0)+_n_s_30923),43.0)>0.84)))){d::check_cancel();(void)(([&](){auto _n_argument_31287=_n_nx_30924;auto _n_argument_31288=_n_ny_30925;auto _n_argument_31289=(3.0+(_n_hash_30623(_n_s_30923,_n_i_30915)*5.0));auto _n_argument_31290=((_n_hash_30623(_n_s_30923,(_n_i_30915+9.0))-0.5)*2.4);auto _n_argument_31291=1.0;return _n_walk_30917(_n_argument_31287,_n_argument_31288,_n_argument_31289,_n_argument_31290,_n_argument_31291);})());
}
(void)(((_n_x_30918=_n_nx_30924),(_n_y_30919=_n_ny_30925)));
}}

}
};
(void)(([&](){auto _n_argument_31292=(122.0+(_n_hash_30623(_n_i_30915,40.0)*34.0));auto _n_argument_31293=(_n_BASE_30609-4.0);auto _n_argument_31294=40.0;auto _n_argument_31295=((_n_hash_30623(_n_i_30915,44.0)-0.5)*0.8);auto _n_argument_31296=0.0;return _n_walk_30917(_n_argument_31292,_n_argument_31293,_n_argument_31294,_n_argument_31295,_n_argument_31296);})());
d::Array<float,true> _n_field_30926=d::Array<float,true>(size_t(this->_n_N_30634)).fill(99.0);
{double _n_r_30927=25.0;
for(;d::truth((_n_r_30927<(_n_HZ_30607+4.0)));(void)((_n_r_30927++))){d::check_cancel();{double _n_x2_30928=80.0;
for(;d::truth((_n_x2_30928<_n_W_30605));(void)((_n_x2_30928++))){d::check_cancel();double _n_m_30929=99.0;
for(auto &&_n_item_31297:_n_segs_30916){d::check_cancel();auto _n_binding_31298=_n_item_31297;
double _n_ax_30930=d::at(_n_binding_31298,0.0);
double _n_ay_30931=d::at(_n_binding_31298,1.0);
double _n_bx_30932=d::at(_n_binding_31298,2.0);
double _n_by_30933=d::at(_n_binding_31298,3.0);
double _n_dep_30934=d::at(_n_binding_31298,4.0);
{
if((d::truth((std::fabs((_n_x2_30928-_n_ax_30930))>14.0))&&d::truth((std::fabs((_n_x2_30928-_n_bx_30932))>14.0)))){d::check_cancel();continue;
}
double _n_d_30935=(_n_segDist_30631((_n_x2_30928+0.5),(_n_r_30927+0.5),_n_ax_30930,_n_ay_30931,_n_bx_30932,_n_by_30933)+(_n_dep_30934*0.5));
if(d::truth((_n_d_30935<_n_m_30929))){d::check_cancel();(void)((_n_m_30929=_n_d_30935));
}

}
}
(void)(([&](){auto&& _n_array_31299=_n_field_30926;auto _n_index_31300=((_n_r_30927*_n_W_30605)+_n_x2_30928);auto _n_value_31301=_n_m_30929;d::put(_n_array_31299,_n_index_31300,_n_value_31301);return _n_value_31301;})());
}}
}}
(void)(this->_n_bolts_30696.push(([&](){auto _n_object_31303=std::make_shared<_n_Record_30697>();_n_object_31303->_p_x=d::at(d::at(_n_segs_30916,0.0),0.0);_n_object_31303->_p_field=_n_field_30926;return _n_object_31303;})()));
}}
this->_n_FL_30700=1.6;
_render=[=]( double _a0,std::shared_ptr<_n_Record_31060> _a1) mutable ->d::String{double _n_t_30953=_a0;
auto _n_binding_31306=(d::present(_a1)?_a1:([&](){auto _n_object_31305=std::make_shared<_n_Record_31060>();return _n_object_31305;})());
std::optional<d::Array<uint8_t,true>> _n_color_30954=_n_binding_31306->_p_color;
{
std::shared_ptr<_n_Record_30699> _n_f_30955=this->_n_flashAt_30698(_n_t_30953);
std::shared_ptr<_n_Record_30702> _n_fl_30956=this->_n_flickerAt_30701(_n_t_30953);
if((d::truth(_n_fl_30956)&&d::truth(([&]()->bool{auto _n_logical_31307=(!d::truth(_n_f_30955));return d::truth(_n_logical_31307)?_n_logical_31307:(_n_f_30955->_p_I<_n_fl_30956->_p_I);})()))){d::check_cancel();(void)((_n_f_30955=std::shared_ptr<_n_Record_30699>(([&](){auto _n_record_31308=_n_fl_30956;auto _n_record_31309=std::make_shared<_n_Record_30699>();_n_record_31309->_p_I=_n_record_31308->_p_I;_n_record_31309->_p_bolt=std::shared_ptr<_n_Record_30697>{};_n_record_31309->_p_cx=_n_record_31308->_p_cx;_n_record_31309->_p_cy=_n_record_31308->_p_cy;_n_record_31309->_p_boltOn=_n_record_31308->_p_boltOn;_n_record_31309->_p_inside=_n_record_31308->_p_inside;return _n_record_31309;})())));
}
double _n_I_30957=(d::truth(_n_f_30955)?_n_f_30955->_p_I:0.0);
double _n_inside_30958=(d::truth(_n_f_30955)?_n_f_30955->_p_inside:0.0);
double _n_drift_30959=(_n_t_30953*1.2);
double _n_shaftOff_30960=(_n_t_30953*0.9);
double _n_gOff_30961=(_n_t_30953*9.0);
for(auto &&_n_item_31310:this->_n_stars_30684){d::check_cancel();auto _n_binding_31311=_n_item_31310;
double _n_k_30962=d::at(_n_binding_31311,0.0);
double _n_ph_30963=d::at(_n_binding_31311,1.0);
double _n_sp_30964=d::at(_n_binding_31311,2.0);
double _n_a_30965=d::at(_n_binding_31311,3.0);
(void)(([&](){auto&& _n_array_31312=this->_n_star_30685;auto _n_index_31313=_n_k_30962;auto _n_value_31314=(_n_a_30965*(0.55+(0.45*std::sin(((_n_t_30953*_n_sp_30964)+_n_ph_30963)))));d::put(_n_array_31312,_n_index_31313,_n_value_31314);return _n_value_31314;})());
}
for(auto &&_n_item_31315:this->_n_touched_30688){d::check_cancel();double _n_k_30966=_n_item_31315;
(void)(([&](){auto&& _n_array_31316=this->_n_ear_30687;auto _n_index_31317=_n_k_30966;auto _n_value_31318=0.0;d::put(_n_array_31316,_n_index_31317,_n_value_31318);return _n_value_31318;})());
}
(void)((this->_n_touched_30688.resize(size_t(0.0)),0.0));
for(auto &&_n_item_31319:this->_n_ears_30686){d::check_cancel();auto _n_binding_31320=_n_item_31319;
double _n_ex_30967=d::at(_n_binding_31320,0.0);
double _n_eh_30968=d::at(_n_binding_31320,1.0);
double _n_ph_30969=d::at(_n_binding_31320,2.0);
double _n_foot_30970=d::at(_n_binding_31320,3.0);
double _n_hl_30971=d::at(_n_binding_31320,4.0);
{
double _n_gu_30972=d::at(this->_n_gust_30681,((((_n_H_30606-1.0)-_n_HZ_30607)*this->_n_GW_30680)+d::mod((d::mod((double(d::i32(_n_ex_30967)|d::i32(0.0))-std::floor((_n_gOff_30961*1.5))),this->_n_GW_30680)+this->_n_GW_30680),this->_n_GW_30680)));
double _n_lean_30973=((0.7+(0.7*std::sin(((_n_t_30953*1.7)+_n_ph_30969))))+(1.8*_n_gu_30972));
double _n_tall_30974=(_n_eh_30968+_n_hl_30971);
{double _n_i_30975=0.0;
for(;d::truth((_n_i_30975<_n_tall_30974));(void)((_n_i_30975++))){d::check_cancel();double _n_y_30976=d::round(((_n_H_30606+_n_foot_30970)-_n_i_30975));
if(d::truth((_n_y_30976>=_n_H_30606))){d::check_cancel();continue;
}
double _n_q_30977=(_n_i_30975/_n_tall_30974);
double _n_x_30978=d::round((_n_ex_30967+((_n_lean_30973*_n_q_30977)*_n_q_30977)));
if((d::truth((_n_x_30978<0.0))||d::truth(((_n_x_30978+1.0)>=_n_W_30605)))){d::check_cancel();continue;
}
double _n_k_30979=((_n_y_30976*_n_W_30605)+_n_x_30978);
if(d::truth((_n_i_30975<_n_eh_30968))){d::check_cancel();if(d::truth((d::at(this->_n_ear_30687,_n_k_30979)==0.0))){d::check_cancel();(void)((([&](){auto&& _n_array_31321=this->_n_ear_30687;auto _n_index_31322=_n_k_30979;auto _n_value_31323=(-d::number(1.0));d::put(_n_array_31321,_n_index_31322,_n_value_31323);return _n_value_31323;})(),this->_n_touched_30688.push(_n_k_30979)));
}
}else {d::check_cancel();double _n_j_30980=(_n_i_30975-_n_eh_30968);
bool _n_tip_30981=(_n_j_30980==(_n_hl_30971-1.0));
double _n_v_30982=(d::truth(_n_tip_30981)?0.55:(d::truth((_n_j_30980==0.0))?0.7:(1.0-(0.18*double(d::i32(_n_j_30980)&d::i32(1.0))))));
if(d::truth((_n_v_30982>d::at(this->_n_ear_30687,_n_k_30979)))){d::check_cancel();(void)((([&](){auto&& _n_array_31324=this->_n_ear_30687;auto _n_index_31325=_n_k_30979;auto _n_value_31326=_n_v_30982;d::put(_n_array_31324,_n_index_31325,_n_value_31326);return _n_value_31326;})(),this->_n_touched_30688.push(_n_k_30979)));
}
if(((d::truth((!d::truth(_n_tip_30981)))&&d::truth((_n_j_30980>0.0)))&&d::truth(((_n_v_30982*0.82)>d::at(this->_n_ear_30687,(_n_k_30979+1.0)))))){d::check_cancel();(void)((([&](){auto&& _n_array_31327=this->_n_ear_30687;auto _n_index_31328=(_n_k_30979+1.0);auto _n_value_31329=(_n_v_30982*0.82);d::put(_n_array_31327,_n_index_31328,_n_value_31329);return _n_value_31329;})(),this->_n_touched_30688.push((_n_k_30979+1.0))));
}
if((d::truth(_n_tip_30981)&&d::truth((_n_y_30976>0.0)))){d::check_cancel();double _n_a_30983=((_n_k_30979-_n_W_30605)+(d::truth((_n_lean_30973>0.5))?1.0:0.0));
if(d::truth((d::at(this->_n_ear_30687,_n_a_30983)<0.3))){d::check_cancel();(void)((([&](){auto&& _n_array_31330=this->_n_ear_30687;auto _n_index_31331=_n_a_30983;auto _n_value_31332=0.3;d::put(_n_array_31330,_n_index_31331,_n_value_31332);return _n_value_31332;})(),this->_n_touched_30688.push(_n_a_30983)));
}
}
}
}}

}
}
{double _n_r_30984=0.0;
for(;d::truth((_n_r_30984<_n_H_30606));(void)((_n_r_30984++))){d::check_cancel();double _n_y_30985=(_n_r_30984+0.5);
double _n_p_30986=((_n_y_30985-_n_HZ_30607)/(_n_H_30606-_n_HZ_30607));
{double _n_x_30987=0.0;
for(;d::truth((_n_x_30987<_n_W_30605));(void)((_n_x_30987++))){d::check_cancel();double _n_k_30988=((_n_r_30984*_n_W_30605)+_n_x_30987);
double _n_m_30989=d::at(this->_n_mat_30653,_n_k_30988);
double _n_cr_30990=d::at(this->_n_sr_30650,_n_k_30988);
double _n_cg_30991=d::at(this->_n_sg_30651,_n_k_30988);
double _n_cb_30992=d::at(this->_n_sb_30652,_n_k_30988);
double _n_floor_30993=d::at(this->_n_floorOf_30657,_n_k_30988);
double _n_fade_30994=1.0;
double _n_rain_30995=0.0;
if(d::truth((_n_m_30989==_n_SKY_30613))){d::check_cancel();double _n_c_30996=d::at(this->_n_cloud_30654,_n_k_30988);
if((d::truth((_n_c_30996<0.98))&&d::truth((_n_r_30984<_n_HZ_30607)))){d::check_cancel();double _n_sx_30997=(_n_x_30987+_n_drift_30959);
double _n_ix_30998=std::floor(_n_sx_30997);
double _n_fx_30999=(_n_sx_30997-_n_ix_30998);
double _n_s0_31000=d::at(this->_n_streak_30683,((_n_r_30984*this->_n_CW_30682)+d::mod(_n_ix_30998,this->_n_CW_30682)));
double _n_s1_31001=d::at(this->_n_streak_30683,((_n_r_30984*this->_n_CW_30682)+d::mod((_n_ix_30998+1.0),this->_n_CW_30682)));
double _n_s_31002=((((_n_s0_31000+((_n_s1_31001-_n_s0_31000)*_n_fx_30999))*(1.0-_n_c_30996))*_n_smooth_30627(105.0,55.0,_n_x_30987))*0.75);
if(d::truth((_n_s_31002>0.005))){d::check_cancel();double _n_sun_31003=std::exp((-d::number(std::pow(((_n_x_30987-d::at(_n_SUN_30608,0.0))/80.0),2.0))));
(void)((_n_cr_30990=_n_mix_30628(_n_cr_30990,(0.5+(0.5*_n_sun_31003)),_n_s_31002)));
(void)((_n_cg_30991=_n_mix_30628(_n_cg_30991,(0.24+(0.36*_n_sun_31003)),_n_s_31002)));
(void)((_n_cb_30992=_n_mix_30628(_n_cb_30992,(0.34+(0.06*_n_sun_31003)),_n_s_31002)));
}
if(d::truth(d::at(this->_n_star_30685,_n_k_30988))){d::check_cancel();double _n_v_31004=(d::at(this->_n_star_30685,_n_k_30988)*(1.0-_n_c_30996));
(void)((((_n_cr_30990=d::maximum({_n_cr_30990,(_n_v_31004*0.9)})),(_n_cg_30991=d::maximum({_n_cg_30991,(_n_v_31004*0.88)}))),(_n_cb_30992=d::maximum({_n_cb_30992,_n_v_31004}))));
}
}
double _n_on_31005=d::at(this->_n_rainOn_30694,_n_x_30987);
if((d::truth((_n_on_31005>0.0))&&d::truth((_n_y_30985>d::at(this->_n_rainTop_30693,_n_x_30987))))){d::check_cancel();double _n_u_31006=((_n_x_30987+((_n_y_30985-_n_BASE_30609)*0.42))-_n_shaftOff_30960);
double _n_ui_31007=d::mod((d::mod(std::floor(_n_u_31006),this->_n_RW_30689)+this->_n_RW_30689),this->_n_RW_30689);
double _n_env_31008=(((d::at(this->_n_shafts_30690,_n_ui_31007)*_n_on_31005)*_n_smooth_30627(d::at(this->_n_rainTop_30693,_n_x_30987),(d::at(this->_n_rainTop_30693,_n_x_30987)+3.0),_n_y_30985))*(1.0-(_n_c_30996*0.7)));
if(d::truth((_n_env_31008>0.01))){d::check_cancel();double _n_col_31009=d::mod(std::floor((_n_x_30987+((_n_y_30985-_n_BASE_30609)*0.42))),_n_W_30605);
double _n_fall_31010=d::mod(((((_n_y_30985*0.4)-((_n_t_30953*d::at(this->_n_colSpeed_30692,_n_col_31009))*0.1))+d::at(this->_n_colPhase_30691,_n_col_31009))+1000.0),4.0);
double _n_lit_31011=(d::truth((_n_fall_31010<1.4))?1.0:0.0);
(void)((_n_rain_30995=_n_env_31008));
(void)((_n_cr_30990=_n_mix_30628(_n_cr_30990,(0.06+(0.07*_n_lit_31011)),(_n_env_31008*0.88))));
(void)((_n_cg_30991=_n_mix_30628(_n_cg_30991,(0.065+(0.075*_n_lit_31011)),(_n_env_31008*0.88))));
(void)((_n_cb_30992=_n_mix_30628(_n_cb_30992,(0.12+(0.1*_n_lit_31011)),(_n_env_31008*0.88))));
}
}
}else {d::check_cancel();if((d::truth((_n_m_30989==_n_FIELD_30615))||d::truth((_n_m_30989==_n_PLAIN_30614)))){d::check_cancel();double _n_gi_31012=(((_n_r_30984-_n_HZ_30607)*this->_n_GW_30680)+d::mod((d::mod((_n_x_30987-std::floor((_n_gOff_30961*(0.5+_n_p_30986)))),this->_n_GW_30680)+this->_n_GW_30680),this->_n_GW_30680));
double _n_gu_31013=d::at(this->_n_gust_30681,_n_gi_31012);
double _n_g_31014=(d::at(this->_n_sr_30650,_n_k_30988)-0.06);
if(d::truth((_n_m_30989==_n_FIELD_30615))){d::check_cancel();double _n_sway_31015=((0.5*std::sin((((_n_t_30953*2.1)+(_n_x_30987*0.05))+(_n_r_30984*0.17))))+(2.2*_n_gu_31013));
double _n_u_31016=(d::at(this->_n_persp_30678,_n_k_30988)+_n_sway_31015);
double _n_ui_31017=std::floor(_n_u_31016);
double _n_uf_31018=(_n_u_31016-_n_ui_31017);
double _n_a0_31019=d::at(this->_n_wheat_30677,((_n_r_30984*this->_n_TW_30676)+double(d::i32(_n_ui_31017)&d::i32(511.0))));
double _n_a1_31020=d::at(this->_n_wheat_30677,((_n_r_30984*this->_n_TW_30676)+double(d::i32((_n_ui_31017+1.0))&d::i32(511.0))));
double _n_tex_31021=(_n_a0_31019+((_n_a1_31020-_n_a0_31019)*_n_uf_31018));
double _n_v_31022=_n_clamp_30626((0.55+((_n_tex_31021-0.5)*(0.9+(1.4*_n_p_30986)))));
double _n_L_31023=(((_n_v_31022*0.7)+(0.4*_n_gu_31013))*d::at(this->_n_fieldLight_30679,_n_k_30988));
(void)((_n_cr_30990=((0.04+(0.7*_n_L_31023))+(0.9*_n_g_31014))));
(void)((_n_cg_30991=((0.03+(0.48*_n_L_31023))+(0.48*_n_g_31014))));
(void)((_n_cb_30992=((0.035+(0.18*_n_L_31023))+(0.12*_n_g_31014))));
(void)((_n_fade_30994=_n_smooth_30627((_n_H_30606+10.0),(_n_H_30606-8.0),_n_y_30985)));
}else {d::check_cancel();double _n_v_31024=(0.75+(0.45*_n_gu_31013));
(void)((((_n_cr_30990=(_n_cr_30990*_n_v_31024)),(_n_cg_30991=(_n_cg_30991*_n_v_31024))),(_n_cb_30992=(_n_cb_30992*_n_v_31024))));
}
(void)((_n_floor_30993=0.05));
}else {d::check_cancel();if(d::truth((_n_m_30989==_n_ROAD_30616))){d::check_cancel();double _n_sun_31025=(0.5+(0.5*std::exp((-d::number(std::pow(((_n_x_30987-d::at(_n_SUN_30608,0.0))/110.0),2.0))))));
double _n_rut_31026=(d::truth((std::fabs(([&](){auto _n_left_31333=std::fabs(((_n_x_30987+0.5)-this->_n_roadC_30673(_n_p_30986)));auto _n_right_31334=(this->_n_roadW_30674(_n_p_30986)*0.45);return (_n_left_31333-_n_right_31334);})())<(0.4+(_n_p_30986*0.8))))?0.6:1.0);
double _n_L_31027=((((0.6+(0.3*_n_noise_30624((_n_x_30987*0.5),(_n_r_30984*0.5),0.0)))*_n_sun_31025)*_n_rut_31026)*(1.0-(0.65*_n_p_30986)));
(void)((((_n_cr_30990=(0.08+(0.42*_n_L_31027))),(_n_cg_30991=(0.06+(0.3*_n_L_31027)))),(_n_cb_30992=(0.07+(0.26*_n_L_31027)))));
(void)((_n_fade_30994=_n_smooth_30627((_n_H_30606+10.0),(_n_H_30606-8.0),_n_y_30985)));
(void)((_n_floor_30993=0.05));
}else {d::check_cancel();if(d::truth((_n_m_30989==_n_BELT_30622))){d::check_cancel();double _n_h_31028=_n_smooth_30627(130.0,190.0,_n_x_30987);
(void)((((_n_cr_30990=_n_mix_30628(0.07,0.1,_n_h_31028)),(_n_cg_30991=_n_mix_30628(0.05,0.1,_n_h_31028))),(_n_cb_30992=_n_mix_30628(0.1,0.17,_n_h_31028))));
(void)((_n_floor_30993=0.06));
}else {d::check_cancel();if(d::truth((_n_m_30989==_n_TREE_30620))){d::check_cancel();double _n_rim_31029=_n_noise_30624((_n_x_30987*0.6),(_n_y_30985*0.6),0.0);
(void)((((_n_cr_30990=(0.06+(0.06*_n_rim_31029))),(_n_cg_30991=(0.04+(0.03*_n_rim_31029)))),(_n_cb_30992=(0.07+(0.04*_n_rim_31029)))));
(void)((_n_floor_30993=0.03));
}else {d::check_cancel();if((d::truth((_n_m_30989==_n_HOUSE_30617))||d::truth((_n_m_30989==_n_PUMP_30621)))){d::check_cancel();double _n_rim_31030=((d::truth((_n_m_30989==_n_HOUSE_30617))&&d::truth((_n_x_30987==this->_n_HX0_30664)))?0.18:0.0);
(void)((((_n_cr_30990=(0.07+_n_rim_31030)),(_n_cg_30991=(0.05+(_n_rim_31030*0.55)))),(_n_cb_30992=(0.09+(_n_rim_31030*0.3)))));
(void)((_n_floor_30993=0.03));
}else {d::check_cancel();if(d::truth((_n_m_30989==_n_ROOF_30618))){d::check_cancel();(void)((((_n_cr_30990=0.1),(_n_cg_30991=0.06)),(_n_cb_30992=0.1)));
(void)((_n_floor_30993=0.03));
}else {d::check_cancel();if(d::truth((_n_m_30989==_n_PANE_30619))){d::check_cancel();double _n_g_31031=(0.88+([&](){auto _n_left_31335=(0.12*std::sin(((_n_t_30953*2.3)+_n_x_30987)));auto _n_right_31336=std::sin((_n_t_30953*3.7));return (_n_left_31335*_n_right_31336);})());
double _n_small_31032=(d::truth((_n_x_30987<46.0))?0.6:1.0);
(void)((((_n_cr_30990=(_n_g_31031*_n_small_31032)),(_n_cg_30991=((0.72*_n_g_31031)*_n_small_31032))),(_n_cb_30992=((0.3*_n_g_31031)*_n_small_31032))));
(void)((_n_floor_30993=0.3));
}
}
}
}
}
}
}
}
double _n_e_31033=d::at(this->_n_ear_30687,_n_k_30988);
if(d::truth((_n_e_31033>0.0))){d::check_cancel();double _n_sunW_31034=std::exp((-d::number(std::pow(((_n_x_30987-d::at(_n_SUN_30608,0.0))/120.0),2.0))));
double _n_L_31035=(_n_e_31033*(0.5+(0.5*_n_sunW_31034)));
(void)((((((_n_cr_30990=(0.95*_n_L_31035)),(_n_cg_30991=(0.68*_n_L_31035))),(_n_cb_30992=(0.3*_n_L_31035))),(_n_fade_30994=1.0)),(_n_floor_30993=0.1)));
}
double _n_wx_31036=((_n_x_30987+0.5)-this->_n_PUMP_X_30668);
double _n_wy_31037=(_n_y_30985-this->_n_PUMP_Y_30669);
if((((d::truth((_n_wx_31036>(-d::number(4.0))))&&d::truth((_n_wx_31036<7.0)))&&d::truth((_n_wy_31037>(-d::number(4.0)))))&&d::truth((_n_wy_31037<4.0)))){d::check_cancel();double _n_wd_31038=std::sqrt(((_n_wx_31036*_n_wx_31036)+(_n_wy_31037*_n_wy_31037)));
if(((d::truth((_n_wd_31038<3.6))&&d::truth((_n_wd_31038>0.4)))&&d::truth(([&]()->bool{auto _n_logical_31337=(std::cos(((std::atan2(_n_wy_31037,_n_wx_31036)-(_n_t_30953*1.6))*8.0))>0.2);return d::truth(_n_logical_31337)?_n_logical_31337:(_n_wd_31038<1.0);})()))){d::check_cancel();(void)(((((_n_cr_30990=0.07),(_n_cg_30991=0.05)),(_n_cb_30992=0.09)),(_n_floor_30993=0.03)));
}
if(((d::truth((_n_wy_31037>(-d::number(1.0))))&&d::truth((_n_wy_31037<0.6)))&&d::truth((_n_wx_31036>2.0)))){d::check_cancel();(void)(((((_n_cr_30990=0.07),(_n_cg_30991=0.05)),(_n_cb_30992=0.09)),(_n_floor_30993=0.03)));
}
}
double _n_lx_31039=((_n_x_30987+0.5)-50.5);
double _n_ly_31040=(_n_y_30985-(this->_n_HW0_30666+3.5));
if((d::truth((_n_m_30989!=_n_PANE_30619))&&d::truth((((_n_lx_31039*_n_lx_31039)+(_n_ly_31040*_n_ly_31040))<200.0)))){d::check_cancel();double _n_lg_31041=(std::exp(((-d::number(std::sqrt(((_n_lx_31039*_n_lx_31039)+((_n_ly_31040*_n_ly_31040)*2.0)))))/3.0))*0.5);
(void)((((_n_cr_30990=(_n_cr_30990+_n_lg_31041)),(_n_cg_30991=(_n_cg_30991+(_n_lg_31041*0.66)))),(_n_cb_30992=(_n_cb_30992+(_n_lg_31041*0.25)))));
}
if(d::truth((_n_I_30957>0.01))){d::check_cancel();double _n_dx_31042=(_n_x_30987-_n_f_30955->_p_cx);
double _n_dy_31043=((_n_y_30985-_n_f_30955->_p_cy)*1.3);
double _n_dist_31044=std::sqrt(((_n_dx_31042*_n_dx_31042)+(_n_dy_31043*_n_dy_31043)));
double _n_c_31045=(d::truth((_n_m_30989==_n_SKY_30613))?d::at(this->_n_cloud_30654,_n_k_30988):0.0);
double _n_inner_31046=(d::truth(_n_inside_30958)?(((std::exp(((-d::number(_n_dist_31044))/14.0))*_n_c_31045)*_n_I_30957)*2.0):(((std::exp(((-d::number(_n_dist_31044))/16.0))*(0.3+(0.7*_n_c_31045)))*_n_I_30957)*1.3));
double _n_back_31047=(d::truth((_n_m_30989==_n_SKY_30613))?(((((d::at(this->_n_dark_30655,_n_k_30988)*0.5)+(_n_rain_30995*0.8))*std::exp(((-d::number(std::fabs(_n_dx_31042)))/34.0)))*_n_I_30957)*(d::truth(_n_inside_30958)?0.5:1.0)):0.0);
double _n_amb_31048=(d::truth(_n_inside_30958)?0.0:(_n_I_30957*(d::truth((_n_m_30989==_n_SKY_30613))?0.08:0.05)));
double _n_lw_31049=(_n_inner_31046+_n_back_31047);
(void)((((_n_cr_30990=(_n_cr_30990+((0.75*_n_lw_31049)+(_n_amb_31048*0.8)))),(_n_cg_30991=(_n_cg_30991+((0.72*_n_lw_31049)+(_n_amb_31048*0.8))))),(_n_cb_30992=(_n_cb_30992+((1.0*_n_lw_31049)+_n_amb_31048)))));
if(d::truth(_n_f_30955->_p_boltOn)){d::check_cancel();double _n_d_31050=d::at(_n_f_30955->_p_bolt->_p_field,_n_k_30988);
if((d::truth((_n_d_31050<12.0))&&d::truth(([&]()->bool{auto _n_logical_31338=(_n_c_31045<0.6);return d::truth(_n_logical_31338)?_n_logical_31338:(_n_y_30985>(_n_BASE_30609-1.0));})()))){d::check_cancel();double _n_core_31051=(_n_smooth_30627(1.1,0.35,_n_d_31050)*_n_f_30955->_p_boltOn);
double _n_glow_31052=(([&](){auto _n_left_31339=(std::exp(((-d::number(_n_d_31050))/2.0))*0.55);auto _n_right_31340=(std::exp(((-d::number(_n_d_31050))/7.0))*0.2);return (_n_left_31339+_n_right_31340);})()*_n_f_30955->_p_boltOn);
(void)((((_n_cr_30990=(_n_cr_30990+(_n_core_31051+(_n_glow_31052*0.75)))),(_n_cg_30991=(_n_cg_30991+(_n_core_31051+(_n_glow_31052*0.72))))),(_n_cb_30992=(_n_cb_30992+(_n_core_31051+_n_glow_31052)))));
}
}
}
if(d::truth((_n_e_31033<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_31341=this->_n_out_30635;auto _n_index_31342=_n_k_30988;auto _n_value_31343=d::at(_n_DOTS_30610,1.0);d::put(_n_array_31341,_n_index_31342,_n_value_31343);return _n_value_31343;})());
if(d::truth(_n_color_30954)){d::check_cancel();(void)(([&](){auto&& _n_array_31344=d::read(_n_color_30954);auto _n_index_31345=_n_k_30988;auto _n_value_31346=this->_n_STALK_30633;d::put(_n_array_31344,_n_index_31345,_n_value_31346);return _n_value_31346;})());
}
continue;
}
double _n_peak_31053=d::maximum({_n_cr_30990,_n_cg_30991,_n_cb_30992,0.0001});
double _n_level_31054=(_n_clamp_30626(((_n_floor_30993+(((1.0-_n_floor_30993)*_n_peak_31053)*0.97))+d::at(this->_n_jit_30658,_n_k_30988)))*_n_fade_30994);
double _n_step_31055=([&](){auto _n_argument_31347=0.0;auto _n_argument_31348=([&](){auto _n_argument_31349=3.0;auto _n_argument_31350=d::round(((_n_level_31054*3.0)+d::at(_n_BAYER_30612,((double(d::i32(_n_r_30984)&d::i32(3.0))*4.0)+double(d::i32(_n_x_30987)&d::i32(3.0))))));return d::minimum({_n_argument_31349,_n_argument_31350});})();return d::maximum({_n_argument_31347,_n_argument_31348});})();
(void)(([&](){auto&& _n_array_31351=this->_n_out_30635;auto _n_index_31352=_n_k_30988;auto _n_value_31353=d::at(_n_DOTS_30610,_n_step_31055);d::put(_n_array_31351,_n_index_31352,_n_value_31353);return _n_value_31353;})());
if(d::truth(_n_color_30954)){d::check_cancel();double _n_want_31056=(d::truth(_n_step_31055)?d::minimum({1.0,((_n_level_31054+0.04)/d::at(_n_COVER_30611,_n_step_31055))}):0.0);
double _n_s_31057=(d::minimum({(0.14+(0.86*_n_want_31056)),(0.45+(0.8*_n_level_31054))})/_n_peak_31053);
(void)(([&](){auto&& _n_array_31354=d::read(_n_color_30954);auto _n_index_31355=_n_k_30988;auto _n_value_31356=([&](){auto _n_argument_31357=_n_clamp_30626((_n_cr_30990*_n_s_31057));auto _n_argument_31358=_n_clamp_30626((_n_cg_30991*_n_s_31057));auto _n_argument_31359=_n_clamp_30626((_n_cb_30992*_n_s_31057));return this->_n_nearest_30637(_n_argument_31357,_n_argument_31358,_n_argument_31359);})();d::put(_n_array_31354,_n_index_31355,_n_value_31356);return _n_value_31356;})());
}
}}
}}
d::Array<d::String,false> _n_lines_31058=d::Array<d::String,false>{};
{double _n_r_31059=0.0;
for(;d::truth((_n_r_31059<_n_H_30606));(void)((_n_r_31059++))){d::check_cancel();(void)(_n_lines_31058.push(d::join(this->_n_out_30635.slice((_n_r_31059*_n_W_30605),((_n_r_31059+1.0)*_n_W_30605)),d::String(u""))));
}}
return d::join(_n_lines_31058,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("storm-plains").cols)*ascii::catalog_meta("storm-plains").rows);auto _env=std::make_shared<_n_Record_31060>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &storm_plains_meta(){return catalog_meta("storm-plains");}
std::unique_ptr<Piece> make_storm_plains(const AsciiPieceOptions &o){return std::make_unique<Native_storm_plains>(o);}
}
