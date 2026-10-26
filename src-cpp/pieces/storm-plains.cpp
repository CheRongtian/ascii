// Direct, statically typed C++ from src/pieces/storm-plains.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30605;
struct _n_Record_30698;
struct _n_Record_30700;
struct _n_Record_30703;
struct _n_Record_31061;
struct _n_Record_30605{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_30605> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30605>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_30698{
double _p_x{};
d::Array<float,true> _p_field{};
static std::shared_ptr<_n_Record_30698> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30698>();out->_p_x=d::decode<double>(j["x"]);out->_p_field=d::decode<d::Array<float,true>>(j["field"]);return out;}
};
struct _n_Record_30700{
double _p_I{};
std::shared_ptr<_n_Record_30698> _p_bolt{};
double _p_cx{};
double _p_cy{};
double _p_boltOn{};
double _p_inside{};
static std::shared_ptr<_n_Record_30700> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30700>();out->_p_I=d::decode<double>(j["I"]);out->_p_bolt=d::decode<std::shared_ptr<_n_Record_30698>>(j["bolt"]);out->_p_cx=d::decode<double>(j["cx"]);out->_p_cy=d::decode<double>(j["cy"]);out->_p_boltOn=d::decode<double>(j["boltOn"]);out->_p_inside=d::decode<double>(j["inside"]);return out;}
};
struct _n_Record_30703{
double _p_I{};
d::Nil _p_bolt{};
double _p_cx{};
double _p_cy{};
double _p_boltOn{};
double _p_inside{};
static std::shared_ptr<_n_Record_30703> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30703>();out->_p_I=d::decode<double>(j["I"]);out->_p_bolt=d::decode<d::Nil>(j["bolt"]);out->_p_cx=d::decode<double>(j["cx"]);out->_p_cy=d::decode<double>(j["cy"]);out->_p_boltOn=d::decode<double>(j["boltOn"]);out->_p_inside=d::decode<double>(j["inside"]);return out;}
};
struct _n_Record_31061{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31061> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31061>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_30624(double _a0,double _a1);
double _n_noise_30625(double _a0,double _a1,double _a2);
double _n_fbm_30626(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_30627(double _a0);
double _n_smooth_30628(double _a0,double _a1,double _a2);
double _n_mix_30629(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_30630(d::String _a0);
double _n_dome_30631(double _a0,double _a1,double _a2);
double _n_segDist_30632(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
std::shared_ptr<_n_Record_30605> _n_meta_30604=[](){return ([&](){auto _n_object_31064=std::make_shared<_n_Record_30605>();_n_object_31064->_p_name=d::String(u"storm plains");_n_object_31064->_p_category=d::String(u"scenes");_n_object_31064->_p_note=d::String(u"an anvil thunderhead at dusk flickering over a wheat field");_n_object_31064->_p_cols=200.0;_n_object_31064->_p_rows=100.0;_n_object_31064->_p_cell=1.0;_n_object_31064->_p_fps=15.0;_n_object_31064->_p_ground=d::String(u"#0b0912");_n_object_31064->_p_palette=d::Array<d::String,false>{d::String(u"#0f0c20"),d::String(u"#141029"),d::String(u"#1c1638"),d::String(u"#261c4a"),d::String(u"#32235a"),d::String(u"#40306c"),d::String(u"#53407e"),d::String(u"#6a5590"),d::String(u"#8670a6"),d::String(u"#7a6288"),d::String(u"#9a7890"),d::String(u"#b98e94"),d::String(u"#e6a890"),d::String(u"#f2bca8"),d::String(u"#f7d6a8"),d::String(u"#fbe8c6"),d::String(u"#f8b070"),d::String(u"#e88a4c"),d::String(u"#c8643a"),d::String(u"#9a4630"),d::String(u"#6a3226"),d::String(u"#f0c868"),d::String(u"#d8a447"),d::String(u"#b7843a"),d::String(u"#8c6230"),d::String(u"#5e4226"),d::String(u"#3a2a1c"),d::String(u"#261c14"),d::String(u"#181a2c"),d::String(u"#2a3048"),d::String(u"#3a4260"),d::String(u"#4f5878"),d::String(u"#6a7392"),d::String(u"#8890ae"),d::String(u"#a2aabd"),d::String(u"#5d5878"),d::String(u"#7c7598"),d::String(u"#a6a2c8"),d::String(u"#d6d2fa"),d::String(u"#f4f2ff"),d::String(u"#ffe08a"),d::String(u"#ffb84a")};return _n_object_31064;})();}();
const double _n_W_30606=[](){return 200.0;}();
const double _n_H_30607=[](){return 100.0;}();
const double _n_HZ_30608=[](){return 64.0;}();
d::Array<double,false> _n_SUN_30609=[](){return d::Array<double,false>{30.0,70.0};}();
const double _n_BASE_30610=[](){return 45.0;}();
const d::String _n_DOTS_30611=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_30612=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_30613=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_30704=_a0;
return ((_n_v_30704/16.0)-0.47);});}();
const double _n_SKY_30614=[](){return 0.0;}();
const double _n_PLAIN_30615=[](){return 1.0;}();
const double _n_FIELD_30616=[](){return 2.0;}();
const double _n_ROAD_30617=[](){return 3.0;}();
const double _n_HOUSE_30618=[](){return 4.0;}();
const double _n_ROOF_30619=[](){return 5.0;}();
const double _n_PANE_30620=[](){return 6.0;}();
const double _n_TREE_30621=[](){return 7.0;}();
const double _n_PUMP_30622=[](){return 8.0;}();
const double _n_BELT_30623=[](){return 9.0;}();
double _n_hash_30624(double _a0,double _a1){double _n_x_30705=_a0;
double _n_y_30706=_a1;
{
double _n_h_30707=([&](){auto _n_left_31065=d::imul(double(d::i32(_n_x_30705)|d::i32(0.0)),374761393.0);auto _n_right_31066=d::imul(double(d::i32(_n_y_30706)|d::i32(0.0)),668265263.0);return (_n_left_31065+_n_right_31066);})();
(void)((_n_h_30707=d::imul(double(d::i32(_n_h_30707)^d::i32(double(d::u32(_n_h_30707)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_30707)^d::i32(double(d::u32(_n_h_30707)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_30625(double _a0,double _a1,double _a2){double _n_x_30708=_a0;
double _n_y_30709=_a1;
double _n_period_30710=_a2;
{
double _n_xi_30711=std::floor(_n_x_30708);
double _n_yi_30712=std::floor(_n_y_30709);
double _n_fx_30713=(_n_x_30708-_n_xi_30711);
double _n_fy_30714=(_n_y_30709-_n_yi_30712);
double _n_u_30715=((_n_fx_30713*_n_fx_30713)*(3.0-(2.0*_n_fx_30713)));
double _n_v_30716=((_n_fy_30714*_n_fy_30714)*(3.0-(2.0*_n_fy_30714)));
double _n_x0_30717=_n_xi_30711;
double _n_x1_30718=(_n_xi_30711+1.0);
if(d::truth(_n_period_30710)){d::check_cancel();(void)((_n_x0_30717=d::mod((d::mod(_n_xi_30711,_n_period_30710)+_n_period_30710),_n_period_30710)));
(void)((_n_x1_30718=d::mod((_n_x0_30717+1.0),_n_period_30710)));
}
double _n_a_30719=_n_hash_30624(_n_x0_30717,_n_yi_30712);
double _n_b_30720=_n_hash_30624(_n_x1_30718,_n_yi_30712);
double _n_c_30721=_n_hash_30624(_n_x0_30717,(_n_yi_30712+1.0));
double _n_d_30722=_n_hash_30624(_n_x1_30718,(_n_yi_30712+1.0));
return (((_n_a_30719+((_n_b_30720-_n_a_30719)*_n_u_30715))+((_n_c_30721-_n_a_30719)*_n_v_30716))+(((((_n_a_30719-_n_b_30720)-_n_c_30721)+_n_d_30722)*_n_u_30715)*_n_v_30716));

}
}

double _n_fbm_30626(double _a0,double _a1,double _a2,double _a3){double _n_x_30723=_a0;
double _n_y_30724=_a1;
double _n_octaves_30725=_a2;
double _n_period_30726=_a3;
{
double _n_s_30727=0.0;
double _n_n_30728=0.0;
double _n_amp_30729=0.5;
double _n_f_30730=1.0;
{double _n_i_30731=0.0;
for(;d::truth((_n_i_30731<_n_octaves_30725));(void)((_n_i_30731++))){d::check_cancel();(void)((_n_s_30727=(_n_s_30727+(_n_amp_30729*_n_noise_30625((_n_x_30723*_n_f_30730),(_n_y_30724*_n_f_30730),(_n_period_30726*_n_f_30730))))));
(void)((_n_n_30728=(_n_n_30728+_n_amp_30729)));
(void)((_n_amp_30729=(_n_amp_30729*0.5)));
(void)((_n_f_30730=(_n_f_30730*2.0)));
}}
return (_n_s_30727/_n_n_30728);

}
}

double _n_clamp_30627(double _a0){double _n_v_30732=_a0;
return (d::truth((_n_v_30732<0.0))?0.0:(d::truth((_n_v_30732>1.0))?1.0:_n_v_30732));}

double _n_smooth_30628(double _a0,double _a1,double _a2){double _n_a_30733=_a0;
double _n_b_30734=_a1;
double _n_v_30735=_a2;
{
double _n_k_30736=_n_clamp_30627(((_n_v_30735-_n_a_30733)/(_n_b_30734-_n_a_30733)));
return ((_n_k_30736*_n_k_30736)*(3.0-(2.0*_n_k_30736)));

}
}

double _n_mix_30629(double _a0,double _a1,double _a2){double _n_a_30737=_a0;
double _n_b_30738=_a1;
double _n_k_30739=_a2;
return (_n_a_30737+((_n_b_30738-_n_a_30737)*_n_k_30739));}

d::Array<double,false> _n_hex_30630(d::String _a0){d::String _n_s_30740=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_30741=_a0;
return (([&](){auto _n_argument_31067=d::slice(_n_s_30740,_n_i_30741,(_n_i_30741+2.0));auto _n_argument_31068=16.0;return d::parseInt(_n_argument_31067,_n_argument_31068);})()/255.0);});}

double _n_dome_30631(double _a0,double _a1,double _a2){double _n_dx_30742=_a0;
double _n_dy_30743=_a1;
double _n_r_30744=_a2;
{
double _n_q_30745=((1.0-(_n_dx_30742*_n_dx_30742))-(_n_dy_30743*_n_dy_30743));
return (d::truth((_n_q_30745>0.0))?(_n_r_30744*std::sqrt(_n_q_30745)):0.0);

}
}

double _n_segDist_30632(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_30746=_a0;
double _n_py_30747=_a1;
double _n_ax_30748=_a2;
double _n_ay_30749=_a3;
double _n_bx_30750=_a4;
double _n_by_30751=_a5;
{
double _n_dx_30752=(_n_bx_30750-_n_ax_30748);
double _n_dy_30753=(_n_by_30751-_n_ay_30749);
double _n_k_30754=_n_clamp_30627(((((_n_px_30746-_n_ax_30748)*_n_dx_30752)+((_n_py_30747-_n_ay_30749)*_n_dy_30753))/([&]()->double{auto _n_logical_31069=((_n_dx_30752*_n_dx_30752)+(_n_dy_30753*_n_dy_30753));return d::truth(_n_logical_31069)?_n_logical_31069:1.0;})()));
double _n_ex_30755=((_n_px_30746-_n_ax_30748)-(_n_dx_30752*_n_k_30754));
double _n_ey_30756=((_n_py_30747-_n_ay_30749)-(_n_dy_30753*_n_k_30754));
return std::sqrt(((_n_ex_30755*_n_ex_30755)+(_n_ey_30756*_n_ey_30756)));

}
}

struct Native_storm_plains final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_30633{};
double _n_STALK_30634{};
double _n_N_30635{};
d::Array<d::String,false> _n_out_30636{};
d::Array<uint8_t,true> _n_lut_30637{};
d::Array<std::array<double,5>,false> _n_puffs_30643{};
double _n_seed_30644{};
double _n_SX_30646{};
double _n_SY_30647{};
d::Array<float,true> _n_sh_30648{};
d::Array<float,true> _n_anv_30649{};
d::Array<float,true> _n_lip_30650{};
d::Array<float,true> _n_sr_30651{};
d::Array<float,true> _n_sg_30652{};
d::Array<float,true> _n_sb_30653{};
d::Array<uint8_t,true> _n_mat_30654{};
d::Array<float,true> _n_cloud_30655{};
d::Array<float,true> _n_dark_30656{};
d::Array<float,true> _n_darkSky_30657{};
d::Array<float,true> _n_floorOf_30658{};
d::Array<float,true> _n_jit_30659{};
double _n_LX_30661{};
double _n_LY_30662{};
double _n_LZ_30663{};
double _n_HX0_30665{};
double _n_HX1_30666{};
double _n_HW0_30667{};
double _n_hb_30668{};
double _n_PUMP_X_30669{};
double _n_PUMP_Y_30670{};
double _n_VX_30676{};
double _n_TW_30677{};
d::Array<float,true> _n_wheat_30678{};
d::Array<float,true> _n_persp_30679{};
d::Array<float,true> _n_fieldLight_30680{};
double _n_GW_30681{};
d::Array<float,true> _n_gust_30682{};
double _n_CW_30683{};
d::Array<float,true> _n_streak_30684{};
d::Array<std::array<double,4>,false> _n_stars_30685{};
d::Array<float,true> _n_star_30686{};
d::Array<std::array<double,5>,false> _n_ears_30687{};
d::Array<float,true> _n_ear_30688{};
d::Array<double,false> _n_touched_30689{};
double _n_RW_30690{};
d::Array<float,true> _n_shafts_30691{};
d::Array<float,true> _n_colPhase_30692{};
d::Array<float,true> _n_colSpeed_30693{};
d::Array<float,true> _n_rainTop_30694{};
d::Array<float,true> _n_rainOn_30695{};
double _n_PERIOD_30696{};
d::Array<std::shared_ptr<_n_Record_30698>,false> _n_bolts_30697{};
double _n_FL_30701{};
std::function<d::String(double,std::shared_ptr<_n_Record_31061>)> _render;
double _n_nearest_30638(double _a0,double _a1,double _a2){double _n_r_30757=_a0;
double _n_g_30758=_a1;
double _n_b_30759=_a2;
{
double _n_k_30760=([&](){auto _n_left_31361=([&](){auto _n_left_31363=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_30757*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_31364=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_30758*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_31363)|d::i32(_n_right_31364));})();auto _n_right_31362=d::minimum({31.0,double(d::i32((_n_b_30759*31.99))|d::i32(0.0))});return double(d::i32(_n_left_31361)|d::i32(_n_right_31362));})();
if(d::truth((d::at(this->_n_lut_30637,_n_k_30760)!=255.0))){d::check_cancel();return d::at(this->_n_lut_30637,_n_k_30760);
}
double _n_best_30761=0.0;
double _n_bd_30762=1000000000.0;
{double _n_i_30763=0.0;
for(;d::truth((_n_i_30763<double(this->_n_P_30633.size())));(void)((_n_i_30763++))){d::check_cancel();double _n_dr_30764=(d::at(d::at(this->_n_P_30633,_n_i_30763),0.0)-_n_r_30757);
double _n_dg_30765=(d::at(d::at(this->_n_P_30633,_n_i_30763),1.0)-_n_g_30758);
double _n_db_30766=(d::at(d::at(this->_n_P_30633,_n_i_30763),2.0)-_n_b_30759);
double _n_d_30767=((((0.3*_n_dr_30764)*_n_dr_30764)+((0.5*_n_dg_30765)*_n_dg_30765))+((0.2*_n_db_30766)*_n_db_30766));
if(d::truth((_n_d_30767<_n_bd_30762))){d::check_cancel();(void)(((_n_bd_30762=_n_d_30767),(_n_best_30761=_n_i_30763)));
}
}}
return ([&](){auto&& _n_array_31365=this->_n_lut_30637;auto _n_index_31366=_n_k_30760;auto _n_value_31367=_n_best_30761;d::put(_n_array_31365,_n_index_31366,_n_value_31367);return _n_value_31367;})();

}
}

double _n_towerC_30639(double _a0){double _n_y_30768=_a0;
return (138.0+((_n_BASE_30610-_n_y_30768)*0.14));}

double _n_towerHW_30640(double _a0){double _n_y_30769=_a0;
return (23.0-((_n_BASE_30610-_n_y_30769)*0.08));}

double _n_anvilTop_30641(double _a0){double _n_x_30770=_a0;
return ([&](){auto _n_left_31368=(7.5+(2.5*_n_smooth_30628(150.0,210.0,_n_x_30770)));auto _n_right_31369=(3.0*_n_smooth_30628(112.0,58.0,_n_x_30770));return (_n_left_31368+_n_right_31369);})();}

double _n_anvilBot_30642(double _a0){double _n_x_30771=_a0;
return ([&](){auto _n_left_31370=(21.0-(9.0*_n_smooth_30628(124.0,62.0,_n_x_30771)));auto _n_right_31371=(7.0*_n_smooth_30628(152.0,210.0,_n_x_30771));return (_n_left_31370-_n_right_31371);})();}

double _n_rnd_30645(){return ([&](){auto _n_argument_31372=(this->_n_seed_30644++);auto _n_argument_31373=911.0;return _n_hash_30624(_n_argument_31372,_n_argument_31373);})();}

double _n_glowSun_30660(double _a0,double _a1){double _n_x_30815=_a0;
double _n_y_30816=_a1;
{
double _n_dx_30817=(_n_x_30815-d::at(_n_SUN_30609,0.0));
double _n_dy_30818=(_n_y_30816-d::at(_n_SUN_30609,1.0));
return ([&](){auto _n_left_31374=(std::exp(((-d::number(std::pow((_n_dx_30817/48.0),2.0)))-std::pow((_n_dy_30818/10.0),2.0)))*0.9);auto _n_right_31375=(std::exp(((-d::number(std::pow((_n_dx_30817/95.0),2.0)))-std::pow((_n_dy_30818/20.0),2.0)))*0.26);return (_n_left_31374+_n_right_31375);})();

}
}

double _n_ground_30664(double _a0){double _n_x_30819=_a0;
return ((_n_HZ_30608+3.0)-([&](){auto _n_left_31376=(1.2*_n_smooth_30628(20.0,70.0,_n_x_30819));auto _n_right_31377=_n_smooth_30628(110.0,70.0,_n_x_30819);return (_n_left_31376*_n_right_31377);})());}

double _n_shelfTop_30671(double _a0){double _n_x_30820=_a0;
return ((_n_BASE_30610-2.4)+(1.2*(_n_noise_30625((_n_x_30820*0.2),8.1,0.0)-0.5)));}

double _n_shelfBot_30672(double _a0){double _n_x_30821=_a0;
return ([&](){auto _n_left_31378=([&](){auto _n_left_31380=((_n_BASE_30610+2.4)+(1.8*(_n_fbm_30626((_n_x_30821*0.12),8.7,2.0,0.0)-0.5)));auto _n_right_31381=(2.0*_n_smooth_30628(184.0,199.0,_n_x_30821));return (_n_left_31380-_n_right_31381);})();auto _n_right_31379=(2.0*_n_smooth_30628(114.0,104.0,_n_x_30821));return (_n_left_31378-_n_right_31379);})();}

double _n_shelfOn_30673(double _a0){double _n_x_30822=_a0;
return ([&](){auto _n_left_31382=_n_smooth_30628(103.0,112.0,_n_x_30822);auto _n_right_31383=_n_smooth_30628(199.0,190.0,_n_x_30822);return (_n_left_31382*_n_right_31383);})();}

double _n_roadC_30674(double _a0){double _n_p_30888=_a0;
return (57.0+(62.0*std::pow(_n_p_30888,1.25)));}

double _n_roadW_30675(double _a0){double _n_p_30889=_a0;
return (0.6+(12.0*_n_p_30889));}

std::shared_ptr<_n_Record_30700> _n_flashAt_30699(double _a0){double _n_t_30937=_a0;
{
double _n_n_30938=std::floor((_n_t_30937/this->_n_PERIOD_30696));
if((d::truth((_n_n_30938>0.0))&&d::truth((_n_hash_30624(_n_n_30938,50.0)<0.25)))){d::check_cancel();return std::shared_ptr<_n_Record_30700>{};
}
double _n_start_30939=(d::truth((_n_n_30938==0.0))?(-d::number(0.08)):(((_n_n_30938*this->_n_PERIOD_30696)+0.2)+(_n_hash_30624(_n_n_30938,51.0)*1.6)));
double _n_l_30940=(_n_t_30937-_n_start_30939);
if((d::truth((_n_l_30940<0.0))||d::truth((_n_l_30940>0.9)))){d::check_cancel();return std::shared_ptr<_n_Record_30700>{};
}
double _n_I_30941=0.0;
d::Array<double,false> _n_strikes_30942=d::Array<double,false>{0.0,(0.09+(_n_hash_30624(_n_n_30938,52.0)*0.06)),(0.32+(_n_hash_30624(_n_n_30938,53.0)*0.2))};
{double _n_j_30943=0.0;
for(;d::truth((_n_j_30943<3.0));(void)((_n_j_30943++))){d::check_cancel();if(d::truth((_n_l_30940>=d::at(_n_strikes_30942,_n_j_30943)))){d::check_cancel();(void)((_n_I_30941=(_n_I_30941+(std::exp(((-d::number((_n_l_30940-d::at(_n_strikes_30942,_n_j_30943))))/(d::truth((_n_j_30943==0.0))?0.09:0.06)))*(d::truth((_n_j_30943==0.0))?1.0:(0.7-(_n_j_30943*0.15)))))));
}
}}
std::shared_ptr<_n_Record_30698> _n_bolt_30944=((d::truth((_n_n_30938==0.0))||d::truth((_n_hash_30624(_n_n_30938,54.0)>0.55)))?d::at(this->_n_bolts_30697,d::mod(_n_n_30938,4.0)):std::shared_ptr<_n_Record_30698>{});
double _n_cx_30945=(d::truth(_n_bolt_30944)?_n_bolt_30944->_p_x:(115.0+(_n_hash_30624(_n_n_30938,55.0)*45.0)));
double _n_cy_30946=(d::truth(_n_bolt_30944)?(_n_BASE_30610-8.0):(14.0+(_n_hash_30624(_n_n_30938,56.0)*24.0)));
return ([&](){auto _n_object_31385=std::make_shared<_n_Record_30700>();_n_object_31385->_p_I=d::minimum({1.3,_n_I_30941});_n_object_31385->_p_bolt=_n_bolt_30944;_n_object_31385->_p_cx=_n_cx_30945;_n_object_31385->_p_cy=_n_cy_30946;_n_object_31385->_p_boltOn=((d::truth(_n_bolt_30944)&&d::truth((_n_l_30940<0.5)))?d::minimum({1.0,(_n_I_30941*1.4)}):0.0);_n_object_31385->_p_inside=0.0;return _n_object_31385;})();

}
}

std::shared_ptr<_n_Record_30703> _n_flickerAt_30702(double _a0){double _n_t_30947=_a0;
{
double _n_n0_30948=std::floor((_n_t_30947/this->_n_FL_30701));
{double _n_n_30949=_n_n0_30948;
for(;(d::truth((_n_n_30949>=(_n_n0_30948-1.0)))&&d::truth((_n_n_30949>=0.0)));(void)((_n_n_30949--))){d::check_cancel();double _n_l_30950=(_n_t_30947-(((_n_n_30949*this->_n_FL_30701)+0.35)+(_n_hash_30624(_n_n_30949,70.0)*0.75)));
if((d::truth((_n_l_30950<0.0))||d::truth((_n_l_30950>0.6)))){d::check_cancel();continue;
}
double _n_I_30951=0.0;
d::Array<double,false> _n_pulses_30952=d::Array<double,false>{0.0,(0.08+(_n_hash_30624(_n_n_30949,71.0)*0.1)),(0.26+(_n_hash_30624(_n_n_30949,72.0)*0.18))};
{double _n_j_30953=0.0;
for(;d::truth((_n_j_30953<3.0));(void)((_n_j_30953++))){d::check_cancel();if(d::truth((_n_l_30950>=d::at(_n_pulses_30952,_n_j_30953)))){d::check_cancel();(void)((_n_I_30951=(_n_I_30951+(std::exp(((-d::number((_n_l_30950-d::at(_n_pulses_30952,_n_j_30953))))/0.07))*(d::truth((_n_j_30953==1.0))?0.7:(d::truth((_n_j_30953==2.0))?0.45:1.0))))));
}
}}
return ([&](){auto _n_object_31387=std::make_shared<_n_Record_30703>();_n_object_31387->_p_I=([&](){auto _n_left_31388=d::minimum({1.0,_n_I_30951});auto _n_right_31389=(0.25+(0.2*_n_hash_30624(_n_n_30949,73.0)));return (_n_left_31388*_n_right_31389);})();_n_object_31387->_p_bolt=d::Nil{};_n_object_31387->_p_cx=(120.0+(_n_hash_30624(_n_n_30949,74.0)*38.0));_n_object_31387->_p_cy=(15.0+(_n_hash_30624(_n_n_30949,75.0)*25.0));_n_object_31387->_p_boltOn=0.0;_n_object_31387->_p_inside=1.0;return _n_object_31387;})();
}}
return std::shared_ptr<_n_Record_30703>{};

}
}

explicit Native_storm_plains(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_30633=d::map(_n_meta_30604->_p_palette,_n_hex_30630);
this->_n_STALK_30634=_n_meta_30604->_p_palette.indexOf(d::String(u"#8c6230"));
this->_n_N_30635=(_n_W_30606*_n_H_30607);
this->_n_out_30636=d::Array<d::String,false>(size_t(this->_n_N_30635));
this->_n_lut_30637=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_puffs_30643=d::Array<std::array<double,5>,false>{};
this->_n_seed_30644=1.0;
{double _n_y_30772=(_n_BASE_30610-4.5);
for(;d::truth((_n_y_30772>14.0));(void)((_n_y_30772=(_n_y_30772-4.4)))){d::check_cancel();double _n_cx_30773=this->_n_towerC_30639(_n_y_30772);
double _n_hw_30774=this->_n_towerHW_30640(_n_y_30772);
double _n_n_30775=([&](){auto _n_argument_31070=2.0;auto _n_argument_31071=d::round(((_n_hw_30774*2.0)/11.0));return d::maximum({_n_argument_31070,_n_argument_31071});})();
{double _n_i_30776=0.0;
for(;d::truth((_n_i_30776<_n_n_30775));(void)((_n_i_30776++))){d::check_cancel();double _n_u_30777=((((_n_i_30776+0.5)/_n_n_30775)*2.0)-1.0);
double _n_rr_30778=(7.0+(this->_n_rnd_30645()*4.0));
(void)(this->_n_puffs_30643.push(std::array<double,5>{((_n_cx_30773+(_n_u_30777*(_n_hw_30774-(_n_rr_30778*0.55))))+((this->_n_rnd_30645()-0.5)*3.0)),(_n_y_30772+((this->_n_rnd_30645()-0.5)*2.0)),_n_rr_30778,(4.0*std::sqrt((1.0-((_n_u_30777*_n_u_30777)*0.85)))),1.0}));
}}
}}
(void)(this->_n_puffs_30643.push(std::array<double,5>{141.0,8.5,9.0,2.0,0.0},std::array<double,5>{133.0,9.5,6.0,1.0,0.0},std::array<double,5>{149.0,10.0,6.0,1.0,0.0}));
for(auto &&_n_item_31072:d::Array<d::Array<double,false>,false>{d::Array<double,false>{104.0,27.0,9.0},d::Array<double,false>{89.0,34.0,6.5},d::Array<double,false>{77.0,40.5,3.8}}){d::check_cancel();auto _n_binding_31073=_n_item_31072;
double _n_cx_30779=d::at(_n_binding_31073,0.0);
double _n_top_30780=d::at(_n_binding_31073,1.0);
double _n_w_30781=d::at(_n_binding_31073,2.0);
{
{double _n_y_30782=(_n_BASE_30610-(_n_w_30781*0.4));
for(;d::truth((_n_y_30782>(_n_top_30780+(_n_w_30781*0.6))));(void)((_n_y_30782=(_n_y_30782-(_n_w_30781*0.75))))){d::check_cancel();(void)(this->_n_puffs_30643.push(std::array<double,5>{(_n_cx_30779+(((this->_n_rnd_30645()-0.5)*_n_w_30781)*0.6)),_n_y_30782,(_n_w_30781*(0.75+(this->_n_rnd_30645()*0.2))),1.0,1.0}));
}}
(void)(this->_n_puffs_30643.push(std::array<double,5>{(_n_cx_30779-(_n_w_30781*0.35)),(_n_top_30780+(_n_w_30781*0.75)),(_n_w_30781*0.62),1.0,1.0},std::array<double,5>{(_n_cx_30779+(_n_w_30781*0.3)),(_n_top_30780+(_n_w_30781*0.6)),(_n_w_30781*0.7),1.5,1.0},std::array<double,5>{_n_cx_30779,(_n_top_30780+(_n_w_30781*0.45)),(_n_w_30781*0.55),2.0,1.0}));

}
}
{double _n_x_30783=66.0;
for(;d::truth((_n_x_30783<126.0));(void)((_n_x_30783=(_n_x_30783+(3.2+(this->_n_rnd_30645()*1.6)))))){d::check_cancel();(void)(this->_n_puffs_30643.push(std::array<double,5>{_n_x_30783,((_n_BASE_30610-1.8)-(this->_n_rnd_30645()*1.2)),([&](){auto _n_left_31074=(3.0+(this->_n_rnd_30645()*1.6));auto _n_right_31075=(1.6*_n_smooth_30628(70.0,110.0,_n_x_30783));return (_n_left_31074+_n_right_31075);})(),0.4,1.0}));
}}
this->_n_SX_30646=(_n_W_30606+4.0);
this->_n_SY_30647=(_n_BASE_30610+8.0);
this->_n_sh_30648=d::Array<float,true>(size_t((this->_n_SX_30646*this->_n_SY_30647)));
this->_n_anv_30649=d::Array<float,true>(size_t((this->_n_SX_30646*this->_n_SY_30647)));
this->_n_lip_30650=d::Array<float,true>(size_t((this->_n_SX_30646*this->_n_SY_30647)));
{double _n_r_30784=0.0;
for(;d::truth((_n_r_30784<this->_n_SY_30647));(void)((_n_r_30784++))){d::check_cancel();{double _n_i_30785=0.0;
for(;d::truth((_n_i_30785<this->_n_SX_30646));(void)((_n_i_30785++))){d::check_cancel();double _n_x_30786=((_n_i_30785-2.0)+0.5);
double _n_y_30787=(_n_r_30784+0.5);
double _n_tower_30788=0.0;
double _n_cut_30789=([&](){auto _n_argument_31076=(_n_BASE_30610+1.0);auto _n_argument_31077=(_n_BASE_30610-1.5);auto _n_argument_31078=(_n_y_30787+(1.2*(_n_noise_30625((_n_x_30786*0.15),3.3,0.0)-0.5)));return _n_smooth_30628(_n_argument_31076,_n_argument_31077,_n_argument_31078);})();
for(auto &&_n_item_31079:this->_n_puffs_30643){d::check_cancel();auto _n_binding_31080=_n_item_31079;
double _n_px_30790=d::at(_n_binding_31080,0.0);
double _n_py_30791=d::at(_n_binding_31080,1.0);
double _n_pr_30792=d::at(_n_binding_31080,2.0);
double _n_pz_30793=d::at(_n_binding_31080,3.0);
double _n_flat_30794=d::at(_n_binding_31080,4.0);
{
double _n_dx_30795=((_n_x_30786-_n_px_30790)/_n_pr_30792);
double _n_dy_30796=((_n_y_30787-_n_py_30791)/_n_pr_30792);
if(d::truth((((_n_dx_30795*_n_dx_30795)+(_n_dy_30796*_n_dy_30796))>=1.0))){d::check_cancel();continue;
}
double _n_v_30797=((((_n_pr_30792*0.6)+_n_pz_30793)*std::sqrt(((1.0-(_n_dx_30795*_n_dx_30795))-(_n_dy_30796*_n_dy_30796))))*(d::truth(_n_flat_30794)?_n_cut_30789:1.0));
if(d::truth((_n_v_30797>_n_tower_30788))){d::check_cancel();(void)((_n_tower_30788=_n_v_30797));
}

}
}
double _n_fib_30798=(_n_fbm_30626((_n_x_30786*0.035),(_n_y_30787*0.2),3.0,0.0)-0.5);
double _n_top_30799=(this->_n_anvilTop_30641(_n_x_30786)+(2.2*_n_fib_30798));
double _n_bot_30800=([&](){auto _n_left_31081=(this->_n_anvilBot_30642(_n_x_30786)-(1.5*_n_fib_30798));auto _n_right_31082=(3.0*(_n_fbm_30626((_n_x_30786*0.2),7.0,2.0,0.0)-0.5));return (_n_left_31081-_n_right_31082);})();
double _n_mid_30801=((_n_top_30799+_n_bot_30800)/2.0);
double _n_half_30802=d::maximum({0.5,((_n_bot_30800-_n_top_30799)/2.0)});
double _n_anvil_30803=([&](){auto _n_left_31083=([&](){auto _n_argument_31085=0.0;auto _n_argument_31086=((_n_y_30787-_n_mid_30801)/_n_half_30802);auto _n_argument_31087=d::minimum({5.0,(_n_half_30802*0.9)});return _n_dome_30631(_n_argument_31085,_n_argument_31086,_n_argument_31087);})();auto _n_right_31084=_n_smooth_30628(58.0,72.0,(_n_x_30786+(6.0*_n_fib_30798)));return (_n_left_31083*_n_right_31084);})();
double _n_onTop_30804=(d::truth((_n_anvil_30803>0.0))?_n_smooth_30628((_n_top_30799+3.2),(_n_top_30799+0.6),_n_y_30787):0.0);
if((((d::truth((_n_x_30786>66.0))&&d::truth((_n_x_30786<128.0)))&&d::truth((_n_y_30787>(_n_bot_30800-2.0))))&&d::truth((_n_y_30787<(_n_bot_30800+5.0))))){d::check_cancel();double _n_row_30805=std::floor(((_n_x_30786-66.0)/5.2));
double _n_off_30806=((((_n_row_30805*5.2)+66.0)+2.6)+((_n_hash_30624(_n_row_30805,3.0)-0.5)*1.2));
double _n_py_30807=((_n_bot_30800+0.6)+(_n_hash_30624(_n_row_30805,4.0)*1.2));
(void)((_n_anvil_30803=([&](){auto _n_argument_31088=_n_anvil_30803;auto _n_argument_31089=([&](){auto _n_left_31090=([&](){auto _n_left_31092=_n_dome_30631(((_n_x_30786-_n_off_30806)/2.7),((_n_y_30787-_n_py_30807)/2.3),2.2);auto _n_right_31093=_n_smooth_30628(64.0,76.0,_n_x_30786);return (_n_left_31092*_n_right_31093);})();auto _n_right_31091=_n_smooth_30628(130.0,116.0,_n_x_30786);return (_n_left_31090*_n_right_31091);})();return d::maximum({_n_argument_31088,_n_argument_31089});})()));
}
double _n_solid_30808=_n_tower_30788;
double _n_h_30809=d::maximum({_n_solid_30808,_n_anvil_30803});
double _n_a_30810=(d::truth((_n_anvil_30803>_n_solid_30808))?_n_smooth_30628(0.0,2.0,(_n_anvil_30803-_n_solid_30808)):0.0);
double _n_billow_30811=(_n_fbm_30626((_n_x_30786*0.22),(_n_y_30787*0.24),3.0,0.0)-0.5);
double _n_sy_30812=(((_n_y_30787*0.18)+(0.9*(_n_noise_30625((_n_x_30786*0.04),5.5,0.0)-0.5)))+(_n_x_30786*0.012));
double _n_streaky_30813=(([&](){auto _n_argument_31094=((_n_x_30786*0.03)+(0.6*_n_noise_30625((_n_x_30786*0.08),(_n_y_30787*0.1),0.0)));auto _n_argument_31095=_n_sy_30812;auto _n_argument_31096=3.0;auto _n_argument_31097=0.0;return _n_fbm_30626(_n_argument_31094,_n_argument_31095,_n_argument_31096,_n_argument_31097);})()-0.5);
(void)((_n_h_30809=(_n_h_30809+([&](){auto _n_left_31098=d::minimum({1.0,(_n_h_30809/2.5)});auto _n_right_31099=_n_mix_30629((3.0*_n_billow_30811),(2.2*_n_streaky_30813),_n_a_30810);return (_n_left_31098*_n_right_31099);})())));
(void)(([&](){auto&& _n_array_31100=this->_n_sh_30648;auto _n_index_31101=((_n_r_30784*this->_n_SX_30646)+_n_i_30785);auto _n_value_31102=d::maximum({0.0,_n_h_30809});d::put(_n_array_31100,_n_index_31101,_n_value_31102);return _n_value_31102;})());
(void)(([&](){auto&& _n_array_31103=this->_n_anv_30649;auto _n_index_31104=((_n_r_30784*this->_n_SX_30646)+_n_i_30785);auto _n_value_31105=_n_a_30810;d::put(_n_array_31103,_n_index_31104,_n_value_31105);return _n_value_31105;})());
(void)(([&](){auto&& _n_array_31106=this->_n_lip_30650;auto _n_index_31107=((_n_r_30784*this->_n_SX_30646)+_n_i_30785);auto _n_value_31108=(_n_onTop_30804*_n_a_30810);d::put(_n_array_31106,_n_index_31107,_n_value_31108);return _n_value_31108;})());
}}
}}
this->_n_sr_30651=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_sg_30652=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_sb_30653=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_mat_30654=d::Array<uint8_t,true>(size_t(this->_n_N_30635));
this->_n_cloud_30655=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_dark_30656=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_darkSky_30657=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_floorOf_30658=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_jit_30659=d::Array<float,true>(size_t(this->_n_N_30635));
{double _n_k_30814=0.0;
for(;d::truth((_n_k_30814<this->_n_N_30635));(void)((_n_k_30814++))){d::check_cancel();(void)(([&](){auto&& _n_array_31109=this->_n_jit_30659;auto _n_index_31110=_n_k_30814;auto _n_value_31111=((_n_hash_30624(d::mod(_n_k_30814,_n_W_30606),(double(d::i32((_n_k_30814/_n_W_30606))|d::i32(0.0))+517.0))-0.5)*(d::truth((double(d::i32((_n_k_30814/_n_W_30606))|d::i32(0.0))<_n_HZ_30608))?0.16:0.06));d::put(_n_array_31109,_n_index_31110,_n_value_31111);return _n_value_31111;})());
}}
this->_n_LX_30661=(-d::number(0.72));
this->_n_LY_30662=(-d::number(0.3));
this->_n_LZ_30663=0.62;
this->_n_HX0_30665=40.0;
this->_n_HX1_30666=54.0;
this->_n_HW0_30667=58.0;
this->_n_hb_30668=this->_n_ground_30664(47.0);
this->_n_PUMP_X_30669=66.0;
this->_n_PUMP_Y_30670=(this->_n_hb_30668-15.0);
{double _n_r_30823=0.0;
for(;d::truth((_n_r_30823<_n_H_30607));(void)((_n_r_30823++))){d::check_cancel();{double _n_x_30824=0.0;
for(;d::truth((_n_x_30824<_n_W_30606));(void)((_n_x_30824++))){d::check_cancel();double _n_k_30825=((_n_r_30823*_n_W_30606)+_n_x_30824);
double _n_y_30826=(_n_r_30823+0.5);
if(d::truth((_n_y_30826<this->_n_ground_30664(_n_x_30824)))){d::check_cancel();double _n_v_30827=(_n_y_30826/_n_HZ_30608);
double _n_g_30828=this->_n_glowSun_30660(_n_x_30824,_n_y_30826);
double _n_east_30829=_n_smooth_30628(60.0,190.0,_n_x_30824);
double _n_v2_30830=std::pow(_n_v_30827,2.2);
double _n_veil_30831=(0.9+(0.2*_n_fbm_30626((_n_x_30824*0.05),(_n_y_30826*0.09),3.0,0.0)));
double _n_cr_30832=(((0.045+((0.2*_n_v2_30830)*(1.0-(0.6*_n_east_30829))))*_n_veil_30831)+(1.0*_n_g_30828));
double _n_cg_30833=(((0.045+((0.09*_n_v2_30830)*(1.0-(0.5*_n_east_30829))))*_n_veil_30831)+(0.56*_n_g_30828));
double _n_cb_30834=(((0.16+((0.13*_n_v2_30830)*(1.0-(0.35*_n_east_30829))))*_n_veil_30831)+(0.22*_n_g_30828));
double _n_be_30835=_n_smooth_30628(45.0,118.0,_n_x_30824);
double _n_band_30836=((std::exp(((-d::number(((_n_HZ_30608+2.0)-_n_y_30826)))/11.0))*(1.0-(0.85*_n_be_30835)))*(1.0-(0.6*_n_g_30828)));
(void)((((_n_cr_30832=(_n_cr_30832+(_n_band_30836*_n_mix_30629(0.5,0.34,_n_be_30835)))),(_n_cg_30833=(_n_cg_30833+(_n_band_30836*_n_mix_30629(0.26,0.21,_n_be_30835))))),(_n_cb_30834=(_n_cb_30834+(_n_band_30836*_n_mix_30629(0.26,0.3,_n_be_30835))))));
double _n_under_30837=([&](){auto _n_left_31112=([&](){auto _n_argument_31114=98.0;auto _n_argument_31115=128.0;auto _n_argument_31116=(_n_x_30824+(8.0*(_n_noise_30625((_n_y_30826*0.15),4.4,0.0)-0.5)));return _n_smooth_30628(_n_argument_31114,_n_argument_31115,_n_argument_31116);})();auto _n_right_31113=_n_smooth_30628((_n_BASE_30610-14.0),(_n_BASE_30610-1.0),_n_y_30826);return (_n_left_31112*_n_right_31113);})();
double _n_slot_30838=([&](){auto _n_left_31117=([&](){auto _n_argument_31119=_n_smooth_30628((_n_BASE_30610+1.5),(_n_HZ_30608-6.0),_n_y_30826);auto _n_argument_31120=0.5;return std::pow(_n_argument_31119,_n_argument_31120);})();auto _n_right_31118=(0.85+(0.3*_n_noise_30625((_n_x_30824*0.06),6.6,0.0)));return (_n_left_31117*_n_right_31118);})();
(void)((_n_cr_30832=([&](){auto _n_argument_31121=_n_cr_30832;auto _n_argument_31122=(_n_mix_30629(0.035,0.38,_n_slot_30838)*_n_veil_30831);auto _n_argument_31123=(_n_under_30837*0.92);return _n_mix_30629(_n_argument_31121,_n_argument_31122,_n_argument_31123);})()));
(void)((_n_cg_30833=([&](){auto _n_argument_31124=_n_cg_30833;auto _n_argument_31125=(_n_mix_30629(0.032,0.3,_n_slot_30838)*_n_veil_30831);auto _n_argument_31126=(_n_under_30837*0.92);return _n_mix_30629(_n_argument_31124,_n_argument_31125,_n_argument_31126);})()));
(void)((_n_cb_30834=([&](){auto _n_argument_31127=_n_cb_30834;auto _n_argument_31128=(_n_mix_30629(0.075,0.56,_n_slot_30838)*_n_veil_30831);auto _n_argument_31129=(_n_under_30837*0.92);return _n_mix_30629(_n_argument_31127,_n_argument_31128,_n_argument_31129);})()));
(void)(([&](){auto&& _n_array_31130=this->_n_darkSky_30657;auto _n_index_31131=_n_k_30825;auto _n_value_31132=_n_under_30837;d::put(_n_array_31130,_n_index_31131,_n_value_31132);return _n_value_31132;})());
if(d::truth((_n_r_30823<(this->_n_SY_30647-1.0)))){d::check_cancel();double _n_i_30839=(_n_x_30824+2.0);
double _n_j_30840=((_n_r_30823*this->_n_SX_30646)+_n_i_30839);
double _n_h_30841=d::at(this->_n_sh_30648,_n_j_30840);
double _n_c_30842=_n_smooth_30628(0.15,1.6,_n_h_30841);
if(d::truth((_n_c_30842>0.0))){d::check_cancel();double _n_up_30843=(d::truth((_n_r_30823>0.0))?d::at(this->_n_sh_30648,(_n_j_30840-this->_n_SX_30646)):0.0);
double _n_dn_30844=d::at(this->_n_sh_30648,(_n_j_30840+this->_n_SX_30646));
double _n_gx_30845=((d::at(this->_n_sh_30648,(_n_j_30840+1.0))-d::at(this->_n_sh_30648,(_n_j_30840-1.0)))/2.0);
double _n_gy_30846=((_n_dn_30844-_n_up_30843)/2.0);
double _n_nl_30847=std::sqrt((((_n_gx_30845*_n_gx_30845)+(_n_gy_30846*_n_gy_30846))+1.0));
double _n_nx_30848=((-d::number(_n_gx_30845))/_n_nl_30847);
double _n_ny_30849=((-d::number(_n_gy_30846))/_n_nl_30847);
double _n_nz_30850=(1.0/_n_nl_30847);
double _n_an_30851=d::at(this->_n_anv_30649,_n_j_30840);
double _n_lam_30852=([&](){auto _n_argument_31133=_n_clamp_30627((((_n_nx_30848*this->_n_LX_30661)+(_n_ny_30849*this->_n_LY_30662))+(_n_nz_30850*this->_n_LZ_30663)));auto _n_argument_31134=1.5;return std::pow(_n_argument_31133,_n_argument_31134);})();
double _n_vis_30853=(1.0-(0.4*([&](){auto _n_argument_31135=22.0;auto _n_argument_31136=(_n_BASE_30610-4.0);auto _n_argument_31137=(_n_y_30826+(5.0*(_n_noise_30625((_n_x_30824*0.12),2.2,0.0)-0.5)));return _n_smooth_30628(_n_argument_31135,_n_argument_31136,_n_argument_31137);})()));
double _n_a_30854=_n_smooth_30628(8.0,_n_BASE_30610,_n_y_30826);
double _n_near_30855=std::exp((-d::number(std::pow(((_n_x_30824-d::at(_n_SUN_30609,0.0))/110.0),2.0))));
double _n_flank_30856=(_n_smooth_30628(122.0,108.0,_n_x_30824)*(1.0-_n_an_30851));
double _n_sR_30857=1.0;
double _n_sG_30858=_n_mix_30629(0.84,0.58,_n_a_30854);
double _n_sB_30859=_n_mix_30629(0.58,0.45,_n_a_30854);
double _n_ej_30860=(8.0*(_n_fbm_30626(((_n_y_30826*0.14)+(_n_x_30824*0.02)),21.3,3.0,0.0)-0.5));
double _n_lee_30861=(1.0-(([&](){auto _n_left_31138=((0.65*([&](){auto _n_argument_31140=((this->_n_towerC_30639(_n_y_30826)-14.0)+_n_ej_30860);auto _n_argument_31141=((([&](){auto _n_left_31142=this->_n_towerC_30639(_n_y_30826);auto _n_right_31143=this->_n_towerHW_30640(_n_y_30826);return (_n_left_31142+_n_right_31143);})()+16.0)+_n_ej_30860);auto _n_argument_31144=_n_x_30824;return _n_smooth_30628(_n_argument_31140,_n_argument_31141,_n_argument_31144);})())*(1.0-_n_an_30851));auto _n_right_31139=([&](){auto _n_argument_31145=(this->_n_anvilBot_30642(_n_x_30824)-3.0);auto _n_argument_31146=(this->_n_anvilBot_30642(_n_x_30824)+9.0);auto _n_argument_31147=(_n_y_30826+(5.0*(_n_noise_30625((_n_x_30824*0.15),21.0,0.0)-0.5)));return _n_smooth_30628(_n_argument_31145,_n_argument_31146,_n_argument_31147);})();return (_n_left_31138*_n_right_31139);})()*(d::truth((_n_y_30826<_n_BASE_30610))?1.0:0.0)));
double _n_sun_30862=(((((_n_lam_30852*_n_vis_30853)*_n_lee_30861)*(0.95+(0.4*_n_near_30855)))*(1.0-(0.3*_n_flank_30856)))*(1.0-(0.2*_n_an_30851)));
double _n_sky_30863=(0.55+(0.45*d::maximum({0.0,(-d::number(_n_ny_30849))})));
double _n_bounce_30864=(((d::maximum({0.0,_n_ny_30849})*(0.2+(0.45*_n_near_30855)))*(1.0-(0.6*_n_flank_30856)))*(1.0-(0.5*_n_an_30851)));
double _n_occ_30865=(1.0-((0.35*_n_smooth_30628(4.0,22.0,_n_h_30841))*(1.0-_n_lam_30852)));
double _n_kr_30866=((((0.27*_n_sky_30863)+(_n_sR_30857*_n_sun_30862))+(0.36*_n_bounce_30864))*_n_occ_30865);
double _n_kg_30867=((((0.2*_n_sky_30863)+(_n_sG_30858*_n_sun_30862))+(0.16*_n_bounce_30864))*_n_occ_30865);
double _n_kb_30868=((((0.45*_n_sky_30863)+(_n_sB_30859*_n_sun_30862))+(0.16*_n_bounce_30864))*_n_occ_30865);
double _n_below_30869=(_n_clamp_30627((_n_ny_30849*2.2))*_n_an_30851);
(void)((((_n_kr_30866=(_n_kr_30866*(1.0-(0.42*_n_below_30869)))),(_n_kg_30867=(_n_kg_30867*(1.0-(0.46*_n_below_30869))))),(_n_kb_30868=(_n_kb_30868*(1.0-(0.3*_n_below_30869))))));
double _n_rim_30870=((d::at(this->_n_lip_30650,_n_j_30840)*_n_smooth_30628(196.0,120.0,_n_x_30824))*(0.6+(0.4*_n_lam_30852)));
(void)((((_n_kr_30866=_n_mix_30629(_n_kr_30866,0.98,(_n_rim_30870*0.75))),(_n_kg_30867=_n_mix_30629(_n_kg_30867,0.86,(_n_rim_30870*0.75)))),(_n_kb_30868=_n_mix_30629(_n_kb_30868,0.64,(_n_rim_30870*0.75)))));
double _n_low_30871=(_n_clamp_30627(((_n_ny_30849*1.6)+0.2))*_n_flank_30856);
(void)((((_n_kr_30866=_n_mix_30629(_n_kr_30866,0.14,(_n_low_30871*0.65))),(_n_kg_30867=_n_mix_30629(_n_kg_30867,0.11,(_n_low_30871*0.65)))),(_n_kb_30868=_n_mix_30629(_n_kb_30868,0.24,(_n_low_30871*0.65)))));
double _n_base_30872=((_n_smooth_30628((_n_BASE_30610-4.5),(_n_BASE_30610-0.5),_n_y_30826)*(1.0-_n_an_30851))*(1.0-(0.3*_n_near_30855)));
(void)((((_n_kr_30866=_n_mix_30629(_n_kr_30866,0.03,(_n_base_30872*0.9))),(_n_kg_30867=_n_mix_30629(_n_kg_30867,0.026,(_n_base_30872*0.9)))),(_n_kb_30868=_n_mix_30629(_n_kb_30868,0.06,(_n_base_30872*0.9)))));
(void)((((_n_cr_30832=_n_mix_30629(_n_cr_30832,_n_kr_30866,_n_c_30842)),(_n_cg_30833=_n_mix_30629(_n_cg_30833,_n_kg_30867,_n_c_30842))),(_n_cb_30834=_n_mix_30629(_n_cb_30834,_n_kb_30868,_n_c_30842))));
(void)(([&](){auto&& _n_array_31148=this->_n_cloud_30655;auto _n_index_31149=_n_k_30825;auto _n_value_31150=_n_c_30842;d::put(_n_array_31148,_n_index_31149,_n_value_31150);return _n_value_31150;})());
(void)(([&](){auto&& _n_array_31151=this->_n_dark_30656;auto _n_index_31152=_n_k_30825;auto _n_value_31153=(_n_base_30872*_n_c_30842);d::put(_n_array_31151,_n_index_31152,_n_value_31153);return _n_value_31153;})());
}
}
double _n_on_30873=this->_n_shelfOn_30673(_n_x_30824);
if(((d::truth((_n_on_30873>0.0))&&d::truth((_n_y_30826>(_n_BASE_30610-5.0))))&&d::truth((_n_y_30826<(_n_BASE_30610+5.0))))){d::check_cancel();double _n_st_30874=this->_n_shelfTop_30671(_n_x_30824);
double _n_sbt_30875=this->_n_shelfBot_30672(_n_x_30824);
double _n_s_30876=(([&](){auto _n_left_31154=_n_smooth_30628((_n_st_30874-1.0),(_n_st_30874+0.6),_n_y_30826);auto _n_right_31155=_n_smooth_30628((_n_sbt_30875+0.6),(_n_sbt_30875-0.8),_n_y_30826);return (_n_left_31154*_n_right_31155);})()*_n_on_30873);
if(d::truth((_n_s_30876>0.0))){d::check_cancel();double _n_n_30877=_n_fbm_30626((_n_x_30824*0.15),(_n_y_30826*0.5),2.0,0.0);
double _n_lit_30878=([&](){auto _n_left_31156=(0.55+((0.9*_n_n_30877)*(0.7+(0.6*_n_noise_30625((_n_x_30824*0.05),(_n_y_30826*1.3),0.0)))));auto _n_right_31157=(0.9*_n_smooth_30628((_n_sbt_30875-1.6),(_n_sbt_30875-0.2),_n_y_30826));return (_n_left_31156+_n_right_31157);})();
(void)((((_n_cr_30832=_n_mix_30629(_n_cr_30832,(0.06*_n_lit_30878),_n_s_30876)),(_n_cg_30833=_n_mix_30629(_n_cg_30833,(0.056*_n_lit_30878),_n_s_30876))),(_n_cb_30834=_n_mix_30629(_n_cb_30834,(0.12*_n_lit_30878),_n_s_30876))));
(void)(([&](){auto&& _n_array_31158=this->_n_cloud_30655;auto _n_index_31159=_n_k_30825;auto _n_value_31160=d::maximum({d::at(this->_n_cloud_30655,_n_k_30825),_n_s_30876});d::put(_n_array_31158,_n_index_31159,_n_value_31160);return _n_value_31160;})());
(void)(([&](){auto&& _n_array_31161=this->_n_dark_30656;auto _n_index_31162=_n_k_30825;auto _n_value_31163=d::maximum({d::at(this->_n_dark_30656,_n_k_30825),_n_s_30876});d::put(_n_array_31161,_n_index_31162,_n_value_31163);return _n_value_31163;})());
}
}
(void)(((([&](){auto&& _n_array_31164=this->_n_sr_30651;auto _n_index_31165=_n_k_30825;auto _n_value_31166=_n_cr_30832;d::put(_n_array_31164,_n_index_31165,_n_value_31166);return _n_value_31166;})(),([&](){auto&& _n_array_31167=this->_n_sg_30652;auto _n_index_31168=_n_k_30825;auto _n_value_31169=_n_cg_30833;d::put(_n_array_31167,_n_index_31168,_n_value_31169);return _n_value_31169;})()),([&](){auto&& _n_array_31170=this->_n_sb_30653;auto _n_index_31171=_n_k_30825;auto _n_value_31172=_n_cb_30834;d::put(_n_array_31170,_n_index_31171,_n_value_31172);return _n_value_31172;})()));
(void)(([&](){auto&& _n_array_31173=this->_n_mat_30654;auto _n_index_31174=_n_k_30825;auto _n_value_31175=_n_SKY_30614;d::put(_n_array_31173,_n_index_31174,_n_value_31175);return _n_value_31175;})());
(void)(([&](){auto&& _n_array_31176=this->_n_floorOf_30658;auto _n_index_31177=_n_k_30825;auto _n_value_31178=(0.06-(0.06*d::maximum({d::at(this->_n_darkSky_30657,_n_k_30825),d::at(this->_n_dark_30656,_n_k_30825)})));d::put(_n_array_31176,_n_index_31177,_n_value_31178);return _n_value_31178;})());
}else {d::check_cancel();double _n_g_30879=([&](){auto _n_left_31179=this->_n_glowSun_30660(_n_x_30824,(_n_HZ_30608+1.0));auto _n_right_31180=std::exp(((-d::number((_n_y_30826-_n_HZ_30608)))/3.2));return (_n_left_31179*_n_right_31180);})();
(void)(([&](){auto&& _n_array_31181=this->_n_mat_30654;auto _n_index_31182=_n_k_30825;auto _n_value_31183=(d::truth((_n_y_30826<(_n_HZ_30608+4.0)))?_n_PLAIN_30615:_n_FIELD_30616);d::put(_n_array_31181,_n_index_31182,_n_value_31183);return _n_value_31183;})());
(void)(((([&](){auto&& _n_array_31184=this->_n_sr_30651;auto _n_index_31185=_n_k_30825;auto _n_value_31186=(0.06+(0.55*_n_g_30879));d::put(_n_array_31184,_n_index_31185,_n_value_31186);return _n_value_31186;})(),([&](){auto&& _n_array_31187=this->_n_sg_30652;auto _n_index_31188=_n_k_30825;auto _n_value_31189=(0.045+(0.3*_n_g_30879));d::put(_n_array_31187,_n_index_31188,_n_value_31189);return _n_value_31189;})()),([&](){auto&& _n_array_31190=this->_n_sb_30653;auto _n_index_31191=_n_k_30825;auto _n_value_31192=(0.08+(0.1*_n_g_30879));d::put(_n_array_31190,_n_index_31191,_n_value_31192);return _n_value_31192;})()));
(void)(([&](){auto&& _n_array_31193=this->_n_floorOf_30658;auto _n_index_31194=_n_k_30825;auto _n_value_31195=0.06;d::put(_n_array_31193,_n_index_31194,_n_value_31195);return _n_value_31195;})());
}
double _n_belt_30880=((_n_HZ_30608+2.0)-([&](){auto _n_left_31196=([&](){auto _n_left_31198=(1.5+(2.2*_n_fbm_30626((_n_x_30824*0.3),2.0,2.0,0.0)));auto _n_right_31199=_n_smooth_30628(140.0,150.0,_n_x_30824);return (_n_left_31198*_n_right_31199);})();auto _n_right_31197=_n_smooth_30628(196.0,186.0,_n_x_30824);return (_n_left_31196*_n_right_31197);})());
double _n_belt2_30881=((_n_HZ_30608+2.0)-([&](){auto _n_left_31200=([&](){auto _n_left_31202=(1.0+(1.8*_n_fbm_30626((_n_x_30824*0.35),9.0,2.0,0.0)));auto _n_right_31203=_n_smooth_30628(0.0,4.0,_n_x_30824);return (_n_left_31202*_n_right_31203);})();auto _n_right_31201=_n_smooth_30628(18.0,10.0,_n_x_30824);return (_n_left_31200*_n_right_31201);})());
if((d::truth((_n_y_30826>=d::minimum({_n_belt_30880,_n_belt2_30881})))&&d::truth((_n_y_30826<(_n_HZ_30608+3.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31204=this->_n_mat_30654;auto _n_index_31205=_n_k_30825;auto _n_value_31206=_n_BELT_30623;d::put(_n_array_31204,_n_index_31205,_n_value_31206);return _n_value_31206;})());
}
double _n_tx_30882=(((_n_x_30824+0.5)-31.0)/8.5);
double _n_ty_30883=((_n_y_30826-(this->_n_hb_30668-10.0))/7.0);
bool _n_crown_30884=(((_n_tx_30882*_n_tx_30882)+(_n_ty_30883*_n_ty_30883))<(1.0+(0.35*(_n_fbm_30626((_n_x_30824*0.4),(_n_y_30826*0.4),2.0,0.0)-0.5))));
if((d::truth(_n_crown_30884)||d::truth(([&]()->bool{auto _n_logical_31207=([&]()->bool{auto _n_logical_31208=(std::fabs(((_n_x_30824+0.5)-31.5))<1.0);return d::truth(_n_logical_31208)?(_n_y_30826>(this->_n_hb_30668-6.0)):_n_logical_31208;})();return d::truth(_n_logical_31207)?(_n_y_30826<(this->_n_hb_30668+1.0)):_n_logical_31207;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_31209=this->_n_mat_30654;auto _n_index_31210=_n_k_30825;auto _n_value_31211=_n_TREE_30621;d::put(_n_array_31209,_n_index_31210,_n_value_31211);return _n_value_31211;})());
}
if((((d::truth((_n_x_30824>=this->_n_HX0_30665))&&d::truth((_n_x_30824<=this->_n_HX1_30666)))&&d::truth((_n_y_30826>=this->_n_HW0_30667)))&&d::truth((_n_y_30826<(this->_n_hb_30668+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31212=this->_n_mat_30654;auto _n_index_31213=_n_k_30825;auto _n_value_31214=_n_HOUSE_30618;d::put(_n_array_31212,_n_index_31213,_n_value_31214);return _n_value_31214;})());
}
if(((d::truth((_n_y_30826>=(this->_n_HW0_30667-7.0)))&&d::truth((_n_y_30826<this->_n_HW0_30667)))&&d::truth((std::fabs(((_n_x_30824+0.5)-47.5))<=(8.6-((this->_n_HW0_30667-_n_y_30826)*1.15)))))){d::check_cancel();(void)(([&](){auto&& _n_array_31215=this->_n_mat_30654;auto _n_index_31216=_n_k_30825;auto _n_value_31217=_n_ROOF_30619;d::put(_n_array_31215,_n_index_31216,_n_value_31217);return _n_value_31217;})());
}
if((((d::truth((_n_x_30824>=50.0))&&d::truth((_n_x_30824<=51.0)))&&d::truth((_n_y_30826>=(this->_n_HW0_30667-8.0))))&&d::truth((_n_y_30826<(this->_n_HW0_30667-3.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31218=this->_n_mat_30654;auto _n_index_31219=_n_k_30825;auto _n_value_31220=_n_ROOF_30619;d::put(_n_array_31218,_n_index_31219,_n_value_31220);return _n_value_31220;})());
}
if((((d::truth((_n_x_30824>=36.0))&&d::truth((_n_x_30824<this->_n_HX0_30665)))&&d::truth((_n_y_30826>=(this->_n_hb_30668-4.0))))&&d::truth((_n_y_30826<(this->_n_hb_30668-3.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31221=this->_n_mat_30654;auto _n_index_31222=_n_k_30825;auto _n_value_31223=_n_ROOF_30619;d::put(_n_array_31221,_n_index_31222,_n_value_31223);return _n_value_31223;})());
}
if(((d::truth((_n_x_30824==36.0))&&d::truth((_n_y_30826>=(this->_n_hb_30668-3.0))))&&d::truth((_n_y_30826<this->_n_hb_30668)))){d::check_cancel();(void)(([&](){auto&& _n_array_31224=this->_n_mat_30654;auto _n_index_31225=_n_k_30825;auto _n_value_31226=_n_HOUSE_30618;d::put(_n_array_31224,_n_index_31225,_n_value_31226);return _n_value_31226;})());
}
if((((d::truth((_n_x_30824>=49.0))&&d::truth((_n_x_30824<=51.0)))&&d::truth((_n_y_30826>=(this->_n_HW0_30667+2.0))))&&d::truth((_n_y_30826<(this->_n_HW0_30667+5.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31227=this->_n_mat_30654;auto _n_index_31228=_n_k_30825;auto _n_value_31229=_n_PANE_30620;d::put(_n_array_31227,_n_index_31228,_n_value_31229);return _n_value_31229;})());
}
if((((d::truth((_n_x_30824>=43.0))&&d::truth((_n_x_30824<=44.0)))&&d::truth((_n_y_30826>=(this->_n_HW0_30667+2.0))))&&d::truth((_n_y_30826<(this->_n_HW0_30667+4.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_31230=this->_n_mat_30654;auto _n_index_31231=_n_k_30825;auto _n_value_31232=_n_PANE_30620;d::put(_n_array_31230,_n_index_31231,_n_value_31232);return _n_value_31232;})());
}
double _n_py_30885=(_n_y_30826-this->_n_PUMP_Y_30670);
if((d::truth((_n_py_30885>2.0))&&d::truth((_n_y_30826<(this->_n_hb_30668+0.5))))){d::check_cancel();double _n_half_30886=(0.4+(_n_py_30885*0.11));
double _n_dx_30887=((_n_x_30824+0.5)-this->_n_PUMP_X_30669);
if(d::truth((std::fabs((std::fabs(_n_dx_30887)-_n_half_30886))<0.55))){d::check_cancel();(void)(([&](){auto&& _n_array_31233=this->_n_mat_30654;auto _n_index_31234=_n_k_30825;auto _n_value_31235=_n_PUMP_30622;d::put(_n_array_31233,_n_index_31234,_n_value_31235);return _n_value_31235;})());
}
if((d::truth((std::fabs(_n_dx_30887)<_n_half_30886))&&d::truth((d::mod(double(d::i32(_n_py_30885)|d::i32(0.0)),4.0)==0.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_31236=this->_n_mat_30654;auto _n_index_31237=_n_k_30825;auto _n_value_31238=_n_PUMP_30622;d::put(_n_array_31236,_n_index_31237,_n_value_31238);return _n_value_31238;})());
}
}
}}
}}
{double _n_r_30890=(_n_HZ_30608+3.0);
for(;d::truth((_n_r_30890<_n_H_30607));(void)((_n_r_30890++))){d::check_cancel();double _n_p_30891=(((_n_r_30890+0.5)-_n_HZ_30608)/(_n_H_30607-_n_HZ_30608));
{double _n_x_30892=0.0;
for(;d::truth((_n_x_30892<_n_W_30606));(void)((_n_x_30892++))){d::check_cancel();double _n_k_30893=((_n_r_30890*_n_W_30606)+_n_x_30892);
if(d::truth((d::at(this->_n_mat_30654,_n_k_30893)!=_n_FIELD_30616))){d::check_cancel();continue;
}
if(d::truth(([&](){auto _n_left_31239=std::fabs(((_n_x_30892+0.5)-this->_n_roadC_30674(_n_p_30891)));auto _n_right_31240=([&](){auto _n_left_31241=this->_n_roadW_30675(_n_p_30891);auto _n_right_31242=(0.6*(_n_noise_30625((_n_x_30892*0.3),(_n_r_30890*0.3),0.0)-0.5));return (_n_left_31241+_n_right_31242);})();return (_n_left_31239<_n_right_31240);})())){d::check_cancel();(void)(([&](){auto&& _n_array_31243=this->_n_mat_30654;auto _n_index_31244=_n_k_30893;auto _n_value_31245=_n_ROAD_30617;d::put(_n_array_31243,_n_index_31244,_n_value_31245);return _n_value_31245;})());
}
}}
}}
this->_n_VX_30676=57.0;
this->_n_TW_30677=512.0;
this->_n_wheat_30678=d::Array<float,true>(size_t((_n_H_30607*this->_n_TW_30677)));
this->_n_persp_30679=d::Array<float,true>(size_t(this->_n_N_30635));
{double _n_r_30894=_n_HZ_30608;
for(;d::truth((_n_r_30894<_n_H_30607));(void)((_n_r_30894++))){d::check_cancel();double _n_p_30895=(((_n_r_30894+0.5)-_n_HZ_30608)/(_n_H_30607-_n_HZ_30608));
{double _n_u_30896=0.0;
for(;d::truth((_n_u_30896<this->_n_TW_30677));(void)((_n_u_30896++))){d::check_cancel();(void)(([&](){auto&& _n_array_31246=this->_n_wheat_30678;auto _n_index_31247=((_n_r_30894*this->_n_TW_30677)+_n_u_30896);auto _n_value_31248=_n_fbm_30626((_n_u_30896*0.55),(_n_r_30894*(0.5-(0.42*_n_p_30895))),3.0,(this->_n_TW_30677*0.55));d::put(_n_array_31246,_n_index_31247,_n_value_31248);return _n_value_31248;})());
}}
{double _n_x_30897=0.0;
for(;d::truth((_n_x_30897<_n_W_30606));(void)((_n_x_30897++))){d::check_cancel();(void)(([&](){auto&& _n_array_31249=this->_n_persp_30679;auto _n_index_31250=((_n_r_30894*_n_W_30606)+_n_x_30897);auto _n_value_31251=(((((_n_x_30897+0.5)-this->_n_VX_30676)*24.0)/((_n_r_30894+2.0)-_n_HZ_30608))+256.0);d::put(_n_array_31249,_n_index_31250,_n_value_31251);return _n_value_31251;})());
}}
}}
this->_n_fieldLight_30680=d::Array<float,true>(size_t(this->_n_N_30635));
{double _n_r_30898=_n_HZ_30608;
for(;d::truth((_n_r_30898<_n_H_30607));(void)((_n_r_30898++))){d::check_cancel();double _n_y_30899=(_n_r_30898+0.5);
double _n_p_30900=((_n_y_30899-_n_HZ_30608)/(_n_H_30607-_n_HZ_30608));
{double _n_x_30901=0.0;
for(;d::truth((_n_x_30901<_n_W_30606));(void)((_n_x_30901++))){d::check_cancel();double _n_sunW_30902=std::exp((-d::number(std::pow(((_n_x_30901-d::at(_n_SUN_30609,0.0))/100.0),2.0))));
double _n_east_30903=_n_smooth_30628(80.0,130.0,(_n_x_30901+(10.0*_n_p_30900)));
double _n_fore_30904=(1.0-(0.6*_n_smooth_30628((_n_H_30607-22.0),(_n_H_30607-2.0),_n_y_30899)));
(void)(([&](){auto&& _n_array_31252=this->_n_fieldLight_30680;auto _n_index_31253=((_n_r_30898*_n_W_30606)+_n_x_30901);auto _n_value_31254=(((0.72+(0.45*_n_sunW_30902))*(1.0-(0.35*_n_east_30903)))*_n_fore_30904);d::put(_n_array_31252,_n_index_31253,_n_value_31254);return _n_value_31254;})());
}}
}}
this->_n_GW_30681=512.0;
this->_n_gust_30682=d::Array<float,true>(size_t((this->_n_GW_30681*(_n_H_30607-_n_HZ_30608))));
{double _n_r_30905=_n_HZ_30608;
for(;d::truth((_n_r_30905<_n_H_30607));(void)((_n_r_30905++))){d::check_cancel();{double _n_u_30906=0.0;
for(;d::truth((_n_u_30906<this->_n_GW_30681));(void)((_n_u_30906++))){d::check_cancel();(void)(([&](){auto&& _n_array_31255=this->_n_gust_30682;auto _n_index_31256=(((_n_r_30905-_n_HZ_30608)*this->_n_GW_30681)+_n_u_30906);auto _n_value_31257=([&](){auto _n_argument_31258=0.4;auto _n_argument_31259=0.7;auto _n_argument_31260=_n_fbm_30626((_n_u_30906*0.025),(_n_r_30905*0.16),3.0,(this->_n_GW_30681*0.025));return _n_smooth_30628(_n_argument_31258,_n_argument_31259,_n_argument_31260);})();d::put(_n_array_31255,_n_index_31256,_n_value_31257);return _n_value_31257;})());
}}
}}
this->_n_CW_30683=400.0;
this->_n_streak_30684=d::Array<float,true>(size_t((this->_n_CW_30683*_n_HZ_30608)));
{double _n_r_30907=0.0;
for(;d::truth((_n_r_30907<_n_HZ_30608));(void)((_n_r_30907++))){d::check_cancel();{double _n_u_30908=0.0;
for(;d::truth((_n_u_30908<this->_n_CW_30683));(void)((_n_u_30908++))){d::check_cancel();double _n_n_30909=_n_fbm_30626((_n_u_30908*0.02),(_n_r_30907*0.2),4.0,(this->_n_CW_30683*0.02));
(void)(([&](){auto&& _n_array_31261=this->_n_streak_30684;auto _n_index_31262=((_n_r_30907*this->_n_CW_30683)+_n_u_30908);auto _n_value_31263=([&](){auto _n_left_31264=([&](){auto _n_left_31266=_n_smooth_30628(0.64,0.8,_n_n_30909);auto _n_right_31267=_n_smooth_30628(40.0,46.0,_n_r_30907);return (_n_left_31266*_n_right_31267);})();auto _n_right_31265=_n_smooth_30628((_n_HZ_30608-3.0),52.0,_n_r_30907);return (_n_left_31264*_n_right_31265);})();d::put(_n_array_31261,_n_index_31262,_n_value_31263);return _n_value_31263;})());
}}
}}
this->_n_stars_30685=d::Array<std::array<double,4>,false>{};
{double _n_r_30910=0.0;
for(;d::truth((_n_r_30910<28.0));(void)((_n_r_30910++))){d::check_cancel();{double _n_x_30911=0.0;
for(;d::truth((_n_x_30911<100.0));(void)((_n_x_30911++))){d::check_cancel();if((d::truth((_n_hash_30624(_n_x_30911,((_n_r_30910*5.0)+3.0))>0.986))&&d::truth((d::at(this->_n_cloud_30655,((_n_r_30910*_n_W_30606)+_n_x_30911))<0.05)))){d::check_cancel();(void)(this->_n_stars_30685.push(std::array<double,4>{((_n_r_30910*_n_W_30606)+_n_x_30911),(_n_hash_30624(_n_x_30911,_n_r_30910)*6.28),(1.0+(_n_hash_30624(_n_r_30910,_n_x_30911)*2.5)),((0.85*(1.0-(_n_r_30910/28.0)))*(1.0-(_n_x_30911/130.0)))}));
}
}}
}}
this->_n_star_30686=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_ears_30687=d::Array<std::array<double,5>,false>{};
{double _n_x_30912=2.0;
for(;d::truth((_n_x_30912<_n_W_30606));(void)((_n_x_30912=(_n_x_30912+(5.0+(_n_hash_30624(double(d::i32(_n_x_30912)|d::i32(0.0)),60.0)*4.0)))))){d::check_cancel();(void)(this->_n_ears_30687.push(std::array<double,5>{_n_x_30912,(8.0+(_n_hash_30624((_n_x_30912*3.0),61.0)*12.0)),(_n_hash_30624((_n_x_30912*7.0),62.0)*6.28),(_n_hash_30624((_n_x_30912*5.0),63.0)*6.0),(5.0+(d::truth((_n_hash_30624(_n_x_30912,64.0)>0.5))?1.0:0.0))}));
}}
this->_n_ear_30688=d::Array<float,true>(size_t(this->_n_N_30635));
this->_n_touched_30689=d::Array<double,false>{};
this->_n_RW_30690=256.0;
this->_n_shafts_30691=d::Array<float,true>(size_t(this->_n_RW_30690));
{double _n_u_30913=0.0;
for(;d::truth((_n_u_30913<this->_n_RW_30690));(void)((_n_u_30913++))){d::check_cancel();(void)(([&](){auto&& _n_array_31268=this->_n_shafts_30691;auto _n_index_31269=_n_u_30913;auto _n_value_31270=([&](){auto _n_argument_31271=0.47;auto _n_argument_31272=0.57;auto _n_argument_31273=_n_fbm_30626((_n_u_30913*0.09375),0.5,2.0,24.0);return _n_smooth_30628(_n_argument_31271,_n_argument_31272,_n_argument_31273);})();d::put(_n_array_31268,_n_index_31269,_n_value_31270);return _n_value_31270;})());
}}
this->_n_colPhase_30692=d::Array<float,true>(size_t(_n_W_30606));
this->_n_colSpeed_30693=d::Array<float,true>(size_t(_n_W_30606));
{double _n_x_30914=0.0;
for(;d::truth((_n_x_30914<_n_W_30606));(void)((_n_x_30914++))){d::check_cancel();(void)((([&](){auto&& _n_array_31274=this->_n_colPhase_30692;auto _n_index_31275=_n_x_30914;auto _n_value_31276=(_n_hash_30624(_n_x_30914,77.0)*40.0);d::put(_n_array_31274,_n_index_31275,_n_value_31276);return _n_value_31276;})(),([&](){auto&& _n_array_31277=this->_n_colSpeed_30693;auto _n_index_31278=_n_x_30914;auto _n_value_31279=(22.0+(_n_hash_30624(_n_x_30914,78.0)*14.0));d::put(_n_array_31277,_n_index_31278,_n_value_31279);return _n_value_31279;})()));
}}
this->_n_rainTop_30694=d::Array<float,true>(size_t(_n_W_30606));
this->_n_rainOn_30695=d::Array<float,true>(size_t(_n_W_30606));
{double _n_x_30915=0.0;
for(;d::truth((_n_x_30915<_n_W_30606));(void)((_n_x_30915++))){d::check_cancel();(void)((([&](){auto&& _n_array_31280=this->_n_rainTop_30694;auto _n_index_31281=_n_x_30915;auto _n_value_31282=(this->_n_shelfBot_30672(_n_x_30915)-1.5);d::put(_n_array_31280,_n_index_31281,_n_value_31282);return _n_value_31282;})(),([&](){auto&& _n_array_31283=this->_n_rainOn_30695;auto _n_index_31284=_n_x_30915;auto _n_value_31285=([&](){auto _n_left_31286=_n_smooth_30628(106.0,118.0,_n_x_30915);auto _n_right_31287=_n_smooth_30628(198.0,186.0,_n_x_30915);return (_n_left_31286*_n_right_31287);})();d::put(_n_array_31283,_n_index_31284,_n_value_31285);return _n_value_31285;})()));
}}
this->_n_PERIOD_30696=3.1;
this->_n_bolts_30697=d::Array<std::shared_ptr<_n_Record_30698>,false>{};
{double _n_i_30916=0.0;
for(;d::truth((_n_i_30916<4.0));(void)((_n_i_30916++))){d::check_cancel();d::Array<std::array<double,5>,false> _n_segs_30917=d::Array<std::array<double,5>,false>{};
std::function<void(double,double,double,double,double)> _n_walk_30918=[&]( double _a0,double _a1,double _a2,double _a3,double _a4) mutable ->void{double _n_x_30919=_a0;
double _n_y_30920=_a1;
double _n_len_30921=_a2;
double _n_lean_30922=_a3;
double _n_depth_30923=_a4;
{
{double _n_s_30924=0.0;
for(;(d::truth((_n_s_30924<_n_len_30921))&&d::truth((_n_y_30920<(_n_HZ_30608+2.0))));(void)((_n_s_30924++))){d::check_cancel();double _n_nx_30925=((_n_x_30919+((_n_hash_30624(((_n_i_30916*97.0)+_n_s_30924),((_n_depth_30923*13.0)+41.0))-0.5)*3.2))+_n_lean_30922);
double _n_ny_30926=((_n_y_30920+0.9)+(_n_hash_30624(((_n_i_30916*31.0)+_n_s_30924),(_n_depth_30923+42.0))*1.3));
(void)(_n_segs_30917.push(std::array<double,5>{_n_x_30919,_n_y_30920,_n_nx_30925,_n_ny_30926,_n_depth_30923}));
if((d::truth((_n_depth_30923==0.0))&&d::truth((_n_hash_30624(((_n_i_30916*7.0)+_n_s_30924),43.0)>0.84)))){d::check_cancel();(void)(([&](){auto _n_argument_31288=_n_nx_30925;auto _n_argument_31289=_n_ny_30926;auto _n_argument_31290=(3.0+(_n_hash_30624(_n_s_30924,_n_i_30916)*5.0));auto _n_argument_31291=((_n_hash_30624(_n_s_30924,(_n_i_30916+9.0))-0.5)*2.4);auto _n_argument_31292=1.0;return _n_walk_30918(_n_argument_31288,_n_argument_31289,_n_argument_31290,_n_argument_31291,_n_argument_31292);})());
}
(void)(((_n_x_30919=_n_nx_30925),(_n_y_30920=_n_ny_30926)));
}}

}
};
(void)(([&](){auto _n_argument_31293=(122.0+(_n_hash_30624(_n_i_30916,40.0)*34.0));auto _n_argument_31294=(_n_BASE_30610-4.0);auto _n_argument_31295=40.0;auto _n_argument_31296=((_n_hash_30624(_n_i_30916,44.0)-0.5)*0.8);auto _n_argument_31297=0.0;return _n_walk_30918(_n_argument_31293,_n_argument_31294,_n_argument_31295,_n_argument_31296,_n_argument_31297);})());
d::Array<float,true> _n_field_30927=d::Array<float,true>(size_t(this->_n_N_30635)).fill(99.0);
{double _n_r_30928=25.0;
for(;d::truth((_n_r_30928<(_n_HZ_30608+4.0)));(void)((_n_r_30928++))){d::check_cancel();{double _n_x2_30929=80.0;
for(;d::truth((_n_x2_30929<_n_W_30606));(void)((_n_x2_30929++))){d::check_cancel();double _n_m_30930=99.0;
for(auto &&_n_item_31298:_n_segs_30917){d::check_cancel();auto _n_binding_31299=_n_item_31298;
double _n_ax_30931=d::at(_n_binding_31299,0.0);
double _n_ay_30932=d::at(_n_binding_31299,1.0);
double _n_bx_30933=d::at(_n_binding_31299,2.0);
double _n_by_30934=d::at(_n_binding_31299,3.0);
double _n_dep_30935=d::at(_n_binding_31299,4.0);
{
if((d::truth((std::fabs((_n_x2_30929-_n_ax_30931))>14.0))&&d::truth((std::fabs((_n_x2_30929-_n_bx_30933))>14.0)))){d::check_cancel();continue;
}
double _n_d_30936=(_n_segDist_30632((_n_x2_30929+0.5),(_n_r_30928+0.5),_n_ax_30931,_n_ay_30932,_n_bx_30933,_n_by_30934)+(_n_dep_30935*0.5));
if(d::truth((_n_d_30936<_n_m_30930))){d::check_cancel();(void)((_n_m_30930=_n_d_30936));
}

}
}
(void)(([&](){auto&& _n_array_31300=_n_field_30927;auto _n_index_31301=((_n_r_30928*_n_W_30606)+_n_x2_30929);auto _n_value_31302=_n_m_30930;d::put(_n_array_31300,_n_index_31301,_n_value_31302);return _n_value_31302;})());
}}
}}
(void)(this->_n_bolts_30697.push(([&](){auto _n_object_31304=std::make_shared<_n_Record_30698>();_n_object_31304->_p_x=d::at(d::at(_n_segs_30917,0.0),0.0);_n_object_31304->_p_field=_n_field_30927;return _n_object_31304;})()));
}}
this->_n_FL_30701=1.6;
_render=[=]( double _a0,std::shared_ptr<_n_Record_31061> _a1) mutable ->d::String{double _n_t_30954=_a0;
auto _n_binding_31307=(d::present(_a1)?_a1:([&](){auto _n_object_31306=std::make_shared<_n_Record_31061>();return _n_object_31306;})());
std::optional<d::Array<uint8_t,true>> _n_color_30955=_n_binding_31307->_p_color;
{
std::shared_ptr<_n_Record_30700> _n_f_30956=this->_n_flashAt_30699(_n_t_30954);
std::shared_ptr<_n_Record_30703> _n_fl_30957=this->_n_flickerAt_30702(_n_t_30954);
if((d::truth(_n_fl_30957)&&d::truth(([&]()->bool{auto _n_logical_31308=(!d::truth(_n_f_30956));return d::truth(_n_logical_31308)?_n_logical_31308:(_n_f_30956->_p_I<_n_fl_30957->_p_I);})()))){d::check_cancel();(void)((_n_f_30956=std::shared_ptr<_n_Record_30700>(([&](){auto _n_record_31309=_n_fl_30957;auto _n_record_31310=std::make_shared<_n_Record_30700>();_n_record_31310->_p_I=_n_record_31309->_p_I;_n_record_31310->_p_bolt=std::shared_ptr<_n_Record_30698>{};_n_record_31310->_p_cx=_n_record_31309->_p_cx;_n_record_31310->_p_cy=_n_record_31309->_p_cy;_n_record_31310->_p_boltOn=_n_record_31309->_p_boltOn;_n_record_31310->_p_inside=_n_record_31309->_p_inside;return _n_record_31310;})())));
}
double _n_I_30958=(d::truth(_n_f_30956)?_n_f_30956->_p_I:0.0);
double _n_inside_30959=(d::truth(_n_f_30956)?_n_f_30956->_p_inside:0.0);
double _n_drift_30960=(_n_t_30954*1.2);
double _n_shaftOff_30961=(_n_t_30954*0.9);
double _n_gOff_30962=(_n_t_30954*9.0);
for(auto &&_n_item_31311:this->_n_stars_30685){d::check_cancel();auto _n_binding_31312=_n_item_31311;
double _n_k_30963=d::at(_n_binding_31312,0.0);
double _n_ph_30964=d::at(_n_binding_31312,1.0);
double _n_sp_30965=d::at(_n_binding_31312,2.0);
double _n_a_30966=d::at(_n_binding_31312,3.0);
(void)(([&](){auto&& _n_array_31313=this->_n_star_30686;auto _n_index_31314=_n_k_30963;auto _n_value_31315=(_n_a_30966*(0.55+(0.45*std::sin(((_n_t_30954*_n_sp_30965)+_n_ph_30964)))));d::put(_n_array_31313,_n_index_31314,_n_value_31315);return _n_value_31315;})());
}
for(auto &&_n_item_31316:this->_n_touched_30689){d::check_cancel();double _n_k_30967=_n_item_31316;
(void)(([&](){auto&& _n_array_31317=this->_n_ear_30688;auto _n_index_31318=_n_k_30967;auto _n_value_31319=0.0;d::put(_n_array_31317,_n_index_31318,_n_value_31319);return _n_value_31319;})());
}
(void)((this->_n_touched_30689.resize(size_t(0.0)),0.0));
for(auto &&_n_item_31320:this->_n_ears_30687){d::check_cancel();auto _n_binding_31321=_n_item_31320;
double _n_ex_30968=d::at(_n_binding_31321,0.0);
double _n_eh_30969=d::at(_n_binding_31321,1.0);
double _n_ph_30970=d::at(_n_binding_31321,2.0);
double _n_foot_30971=d::at(_n_binding_31321,3.0);
double _n_hl_30972=d::at(_n_binding_31321,4.0);
{
double _n_gu_30973=d::at(this->_n_gust_30682,((((_n_H_30607-1.0)-_n_HZ_30608)*this->_n_GW_30681)+d::mod((d::mod((double(d::i32(_n_ex_30968)|d::i32(0.0))-std::floor((_n_gOff_30962*1.5))),this->_n_GW_30681)+this->_n_GW_30681),this->_n_GW_30681)));
double _n_lean_30974=((0.7+(0.7*std::sin(((_n_t_30954*1.7)+_n_ph_30970))))+(1.8*_n_gu_30973));
double _n_tall_30975=(_n_eh_30969+_n_hl_30972);
{double _n_i_30976=0.0;
for(;d::truth((_n_i_30976<_n_tall_30975));(void)((_n_i_30976++))){d::check_cancel();double _n_y_30977=d::round(((_n_H_30607+_n_foot_30971)-_n_i_30976));
if(d::truth((_n_y_30977>=_n_H_30607))){d::check_cancel();continue;
}
double _n_q_30978=(_n_i_30976/_n_tall_30975);
double _n_x_30979=d::round((_n_ex_30968+((_n_lean_30974*_n_q_30978)*_n_q_30978)));
if((d::truth((_n_x_30979<0.0))||d::truth(((_n_x_30979+1.0)>=_n_W_30606)))){d::check_cancel();continue;
}
double _n_k_30980=((_n_y_30977*_n_W_30606)+_n_x_30979);
if(d::truth((_n_i_30976<_n_eh_30969))){d::check_cancel();if(d::truth((d::at(this->_n_ear_30688,_n_k_30980)==0.0))){d::check_cancel();(void)((([&](){auto&& _n_array_31322=this->_n_ear_30688;auto _n_index_31323=_n_k_30980;auto _n_value_31324=(-d::number(1.0));d::put(_n_array_31322,_n_index_31323,_n_value_31324);return _n_value_31324;})(),this->_n_touched_30689.push(_n_k_30980)));
}
}else {d::check_cancel();double _n_j_30981=(_n_i_30976-_n_eh_30969);
bool _n_tip_30982=(_n_j_30981==(_n_hl_30972-1.0));
double _n_v_30983=(d::truth(_n_tip_30982)?0.55:(d::truth((_n_j_30981==0.0))?0.7:(1.0-(0.18*double(d::i32(_n_j_30981)&d::i32(1.0))))));
if(d::truth((_n_v_30983>d::at(this->_n_ear_30688,_n_k_30980)))){d::check_cancel();(void)((([&](){auto&& _n_array_31325=this->_n_ear_30688;auto _n_index_31326=_n_k_30980;auto _n_value_31327=_n_v_30983;d::put(_n_array_31325,_n_index_31326,_n_value_31327);return _n_value_31327;})(),this->_n_touched_30689.push(_n_k_30980)));
}
if(((d::truth((!d::truth(_n_tip_30982)))&&d::truth((_n_j_30981>0.0)))&&d::truth(((_n_v_30983*0.82)>d::at(this->_n_ear_30688,(_n_k_30980+1.0)))))){d::check_cancel();(void)((([&](){auto&& _n_array_31328=this->_n_ear_30688;auto _n_index_31329=(_n_k_30980+1.0);auto _n_value_31330=(_n_v_30983*0.82);d::put(_n_array_31328,_n_index_31329,_n_value_31330);return _n_value_31330;})(),this->_n_touched_30689.push((_n_k_30980+1.0))));
}
if((d::truth(_n_tip_30982)&&d::truth((_n_y_30977>0.0)))){d::check_cancel();double _n_a_30984=((_n_k_30980-_n_W_30606)+(d::truth((_n_lean_30974>0.5))?1.0:0.0));
if(d::truth((d::at(this->_n_ear_30688,_n_a_30984)<0.3))){d::check_cancel();(void)((([&](){auto&& _n_array_31331=this->_n_ear_30688;auto _n_index_31332=_n_a_30984;auto _n_value_31333=0.3;d::put(_n_array_31331,_n_index_31332,_n_value_31333);return _n_value_31333;})(),this->_n_touched_30689.push(_n_a_30984)));
}
}
}
}}

}
}
{double _n_r_30985=0.0;
for(;d::truth((_n_r_30985<_n_H_30607));(void)((_n_r_30985++))){d::check_cancel();double _n_y_30986=(_n_r_30985+0.5);
double _n_p_30987=((_n_y_30986-_n_HZ_30608)/(_n_H_30607-_n_HZ_30608));
{double _n_x_30988=0.0;
for(;d::truth((_n_x_30988<_n_W_30606));(void)((_n_x_30988++))){d::check_cancel();double _n_k_30989=((_n_r_30985*_n_W_30606)+_n_x_30988);
double _n_m_30990=d::at(this->_n_mat_30654,_n_k_30989);
double _n_cr_30991=d::at(this->_n_sr_30651,_n_k_30989);
double _n_cg_30992=d::at(this->_n_sg_30652,_n_k_30989);
double _n_cb_30993=d::at(this->_n_sb_30653,_n_k_30989);
double _n_floor_30994=d::at(this->_n_floorOf_30658,_n_k_30989);
double _n_fade_30995=1.0;
double _n_rain_30996=0.0;
if(d::truth((_n_m_30990==_n_SKY_30614))){d::check_cancel();double _n_c_30997=d::at(this->_n_cloud_30655,_n_k_30989);
if((d::truth((_n_c_30997<0.98))&&d::truth((_n_r_30985<_n_HZ_30608)))){d::check_cancel();double _n_sx_30998=(_n_x_30988+_n_drift_30960);
double _n_ix_30999=std::floor(_n_sx_30998);
double _n_fx_31000=(_n_sx_30998-_n_ix_30999);
double _n_s0_31001=d::at(this->_n_streak_30684,((_n_r_30985*this->_n_CW_30683)+d::mod(_n_ix_30999,this->_n_CW_30683)));
double _n_s1_31002=d::at(this->_n_streak_30684,((_n_r_30985*this->_n_CW_30683)+d::mod((_n_ix_30999+1.0),this->_n_CW_30683)));
double _n_s_31003=((((_n_s0_31001+((_n_s1_31002-_n_s0_31001)*_n_fx_31000))*(1.0-_n_c_30997))*_n_smooth_30628(105.0,55.0,_n_x_30988))*0.75);
if(d::truth((_n_s_31003>0.005))){d::check_cancel();double _n_sun_31004=std::exp((-d::number(std::pow(((_n_x_30988-d::at(_n_SUN_30609,0.0))/80.0),2.0))));
(void)((_n_cr_30991=_n_mix_30629(_n_cr_30991,(0.5+(0.5*_n_sun_31004)),_n_s_31003)));
(void)((_n_cg_30992=_n_mix_30629(_n_cg_30992,(0.24+(0.36*_n_sun_31004)),_n_s_31003)));
(void)((_n_cb_30993=_n_mix_30629(_n_cb_30993,(0.34+(0.06*_n_sun_31004)),_n_s_31003)));
}
if(d::truth(d::at(this->_n_star_30686,_n_k_30989))){d::check_cancel();double _n_v_31005=(d::at(this->_n_star_30686,_n_k_30989)*(1.0-_n_c_30997));
(void)((((_n_cr_30991=d::maximum({_n_cr_30991,(_n_v_31005*0.9)})),(_n_cg_30992=d::maximum({_n_cg_30992,(_n_v_31005*0.88)}))),(_n_cb_30993=d::maximum({_n_cb_30993,_n_v_31005}))));
}
}
double _n_on_31006=d::at(this->_n_rainOn_30695,_n_x_30988);
if((d::truth((_n_on_31006>0.0))&&d::truth((_n_y_30986>d::at(this->_n_rainTop_30694,_n_x_30988))))){d::check_cancel();double _n_u_31007=((_n_x_30988+((_n_y_30986-_n_BASE_30610)*0.42))-_n_shaftOff_30961);
double _n_ui_31008=d::mod((d::mod(std::floor(_n_u_31007),this->_n_RW_30690)+this->_n_RW_30690),this->_n_RW_30690);
double _n_env_31009=(((d::at(this->_n_shafts_30691,_n_ui_31008)*_n_on_31006)*_n_smooth_30628(d::at(this->_n_rainTop_30694,_n_x_30988),(d::at(this->_n_rainTop_30694,_n_x_30988)+3.0),_n_y_30986))*(1.0-(_n_c_30997*0.7)));
if(d::truth((_n_env_31009>0.01))){d::check_cancel();double _n_col_31010=d::mod(std::floor((_n_x_30988+((_n_y_30986-_n_BASE_30610)*0.42))),_n_W_30606);
double _n_fall_31011=d::mod(((((_n_y_30986*0.4)-((_n_t_30954*d::at(this->_n_colSpeed_30693,_n_col_31010))*0.1))+d::at(this->_n_colPhase_30692,_n_col_31010))+1000.0),4.0);
double _n_lit_31012=(d::truth((_n_fall_31011<1.4))?1.0:0.0);
(void)((_n_rain_30996=_n_env_31009));
(void)((_n_cr_30991=_n_mix_30629(_n_cr_30991,(0.06+(0.07*_n_lit_31012)),(_n_env_31009*0.88))));
(void)((_n_cg_30992=_n_mix_30629(_n_cg_30992,(0.065+(0.075*_n_lit_31012)),(_n_env_31009*0.88))));
(void)((_n_cb_30993=_n_mix_30629(_n_cb_30993,(0.12+(0.1*_n_lit_31012)),(_n_env_31009*0.88))));
}
}
}else {d::check_cancel();if((d::truth((_n_m_30990==_n_FIELD_30616))||d::truth((_n_m_30990==_n_PLAIN_30615)))){d::check_cancel();double _n_gi_31013=(((_n_r_30985-_n_HZ_30608)*this->_n_GW_30681)+d::mod((d::mod((_n_x_30988-std::floor((_n_gOff_30962*(0.5+_n_p_30987)))),this->_n_GW_30681)+this->_n_GW_30681),this->_n_GW_30681));
double _n_gu_31014=d::at(this->_n_gust_30682,_n_gi_31013);
double _n_g_31015=(d::at(this->_n_sr_30651,_n_k_30989)-0.06);
if(d::truth((_n_m_30990==_n_FIELD_30616))){d::check_cancel();double _n_sway_31016=((0.5*std::sin((((_n_t_30954*2.1)+(_n_x_30988*0.05))+(_n_r_30985*0.17))))+(2.2*_n_gu_31014));
double _n_u_31017=(d::at(this->_n_persp_30679,_n_k_30989)+_n_sway_31016);
double _n_ui_31018=std::floor(_n_u_31017);
double _n_uf_31019=(_n_u_31017-_n_ui_31018);
double _n_a0_31020=d::at(this->_n_wheat_30678,((_n_r_30985*this->_n_TW_30677)+double(d::i32(_n_ui_31018)&d::i32(511.0))));
double _n_a1_31021=d::at(this->_n_wheat_30678,((_n_r_30985*this->_n_TW_30677)+double(d::i32((_n_ui_31018+1.0))&d::i32(511.0))));
double _n_tex_31022=(_n_a0_31020+((_n_a1_31021-_n_a0_31020)*_n_uf_31019));
double _n_v_31023=_n_clamp_30627((0.55+((_n_tex_31022-0.5)*(0.9+(1.4*_n_p_30987)))));
double _n_L_31024=(((_n_v_31023*0.7)+(0.4*_n_gu_31014))*d::at(this->_n_fieldLight_30680,_n_k_30989));
(void)((_n_cr_30991=((0.04+(0.7*_n_L_31024))+(0.9*_n_g_31015))));
(void)((_n_cg_30992=((0.03+(0.48*_n_L_31024))+(0.48*_n_g_31015))));
(void)((_n_cb_30993=((0.035+(0.18*_n_L_31024))+(0.12*_n_g_31015))));
(void)((_n_fade_30995=_n_smooth_30628((_n_H_30607+10.0),(_n_H_30607-8.0),_n_y_30986)));
}else {d::check_cancel();double _n_v_31025=(0.75+(0.45*_n_gu_31014));
(void)((((_n_cr_30991=(_n_cr_30991*_n_v_31025)),(_n_cg_30992=(_n_cg_30992*_n_v_31025))),(_n_cb_30993=(_n_cb_30993*_n_v_31025))));
}
(void)((_n_floor_30994=0.05));
}else {d::check_cancel();if(d::truth((_n_m_30990==_n_ROAD_30617))){d::check_cancel();double _n_sun_31026=(0.5+(0.5*std::exp((-d::number(std::pow(((_n_x_30988-d::at(_n_SUN_30609,0.0))/110.0),2.0))))));
double _n_rut_31027=(d::truth((std::fabs(([&](){auto _n_left_31334=std::fabs(((_n_x_30988+0.5)-this->_n_roadC_30674(_n_p_30987)));auto _n_right_31335=(this->_n_roadW_30675(_n_p_30987)*0.45);return (_n_left_31334-_n_right_31335);})())<(0.4+(_n_p_30987*0.8))))?0.6:1.0);
double _n_L_31028=((((0.6+(0.3*_n_noise_30625((_n_x_30988*0.5),(_n_r_30985*0.5),0.0)))*_n_sun_31026)*_n_rut_31027)*(1.0-(0.65*_n_p_30987)));
(void)((((_n_cr_30991=(0.08+(0.42*_n_L_31028))),(_n_cg_30992=(0.06+(0.3*_n_L_31028)))),(_n_cb_30993=(0.07+(0.26*_n_L_31028)))));
(void)((_n_fade_30995=_n_smooth_30628((_n_H_30607+10.0),(_n_H_30607-8.0),_n_y_30986)));
(void)((_n_floor_30994=0.05));
}else {d::check_cancel();if(d::truth((_n_m_30990==_n_BELT_30623))){d::check_cancel();double _n_h_31029=_n_smooth_30628(130.0,190.0,_n_x_30988);
(void)((((_n_cr_30991=_n_mix_30629(0.07,0.1,_n_h_31029)),(_n_cg_30992=_n_mix_30629(0.05,0.1,_n_h_31029))),(_n_cb_30993=_n_mix_30629(0.1,0.17,_n_h_31029))));
(void)((_n_floor_30994=0.06));
}else {d::check_cancel();if(d::truth((_n_m_30990==_n_TREE_30621))){d::check_cancel();double _n_rim_31030=_n_noise_30625((_n_x_30988*0.6),(_n_y_30986*0.6),0.0);
(void)((((_n_cr_30991=(0.06+(0.06*_n_rim_31030))),(_n_cg_30992=(0.04+(0.03*_n_rim_31030)))),(_n_cb_30993=(0.07+(0.04*_n_rim_31030)))));
(void)((_n_floor_30994=0.03));
}else {d::check_cancel();if((d::truth((_n_m_30990==_n_HOUSE_30618))||d::truth((_n_m_30990==_n_PUMP_30622)))){d::check_cancel();double _n_rim_31031=((d::truth((_n_m_30990==_n_HOUSE_30618))&&d::truth((_n_x_30988==this->_n_HX0_30665)))?0.18:0.0);
(void)((((_n_cr_30991=(0.07+_n_rim_31031)),(_n_cg_30992=(0.05+(_n_rim_31031*0.55)))),(_n_cb_30993=(0.09+(_n_rim_31031*0.3)))));
(void)((_n_floor_30994=0.03));
}else {d::check_cancel();if(d::truth((_n_m_30990==_n_ROOF_30619))){d::check_cancel();(void)((((_n_cr_30991=0.1),(_n_cg_30992=0.06)),(_n_cb_30993=0.1)));
(void)((_n_floor_30994=0.03));
}else {d::check_cancel();if(d::truth((_n_m_30990==_n_PANE_30620))){d::check_cancel();double _n_g_31032=(0.88+([&](){auto _n_left_31336=(0.12*std::sin(((_n_t_30954*2.3)+_n_x_30988)));auto _n_right_31337=std::sin((_n_t_30954*3.7));return (_n_left_31336*_n_right_31337);})());
double _n_small_31033=(d::truth((_n_x_30988<46.0))?0.6:1.0);
(void)((((_n_cr_30991=(_n_g_31032*_n_small_31033)),(_n_cg_30992=((0.72*_n_g_31032)*_n_small_31033))),(_n_cb_30993=((0.3*_n_g_31032)*_n_small_31033))));
(void)((_n_floor_30994=0.3));
}
}
}
}
}
}
}
}
double _n_e_31034=d::at(this->_n_ear_30688,_n_k_30989);
if(d::truth((_n_e_31034>0.0))){d::check_cancel();double _n_sunW_31035=std::exp((-d::number(std::pow(((_n_x_30988-d::at(_n_SUN_30609,0.0))/120.0),2.0))));
double _n_L_31036=(_n_e_31034*(0.5+(0.5*_n_sunW_31035)));
(void)((((((_n_cr_30991=(0.95*_n_L_31036)),(_n_cg_30992=(0.68*_n_L_31036))),(_n_cb_30993=(0.3*_n_L_31036))),(_n_fade_30995=1.0)),(_n_floor_30994=0.1)));
}
double _n_wx_31037=((_n_x_30988+0.5)-this->_n_PUMP_X_30669);
double _n_wy_31038=(_n_y_30986-this->_n_PUMP_Y_30670);
if((((d::truth((_n_wx_31037>(-d::number(4.0))))&&d::truth((_n_wx_31037<7.0)))&&d::truth((_n_wy_31038>(-d::number(4.0)))))&&d::truth((_n_wy_31038<4.0)))){d::check_cancel();double _n_wd_31039=std::sqrt(((_n_wx_31037*_n_wx_31037)+(_n_wy_31038*_n_wy_31038)));
if(((d::truth((_n_wd_31039<3.6))&&d::truth((_n_wd_31039>0.4)))&&d::truth(([&]()->bool{auto _n_logical_31338=(std::cos(((std::atan2(_n_wy_31038,_n_wx_31037)-(_n_t_30954*1.6))*8.0))>0.2);return d::truth(_n_logical_31338)?_n_logical_31338:(_n_wd_31039<1.0);})()))){d::check_cancel();(void)(((((_n_cr_30991=0.07),(_n_cg_30992=0.05)),(_n_cb_30993=0.09)),(_n_floor_30994=0.03)));
}
if(((d::truth((_n_wy_31038>(-d::number(1.0))))&&d::truth((_n_wy_31038<0.6)))&&d::truth((_n_wx_31037>2.0)))){d::check_cancel();(void)(((((_n_cr_30991=0.07),(_n_cg_30992=0.05)),(_n_cb_30993=0.09)),(_n_floor_30994=0.03)));
}
}
double _n_lx_31040=((_n_x_30988+0.5)-50.5);
double _n_ly_31041=(_n_y_30986-(this->_n_HW0_30667+3.5));
if((d::truth((_n_m_30990!=_n_PANE_30620))&&d::truth((((_n_lx_31040*_n_lx_31040)+(_n_ly_31041*_n_ly_31041))<200.0)))){d::check_cancel();double _n_lg_31042=(std::exp(((-d::number(std::sqrt(((_n_lx_31040*_n_lx_31040)+((_n_ly_31041*_n_ly_31041)*2.0)))))/3.0))*0.5);
(void)((((_n_cr_30991=(_n_cr_30991+_n_lg_31042)),(_n_cg_30992=(_n_cg_30992+(_n_lg_31042*0.66)))),(_n_cb_30993=(_n_cb_30993+(_n_lg_31042*0.25)))));
}
if(d::truth((_n_I_30958>0.01))){d::check_cancel();double _n_dx_31043=(_n_x_30988-_n_f_30956->_p_cx);
double _n_dy_31044=((_n_y_30986-_n_f_30956->_p_cy)*1.3);
double _n_dist_31045=std::sqrt(((_n_dx_31043*_n_dx_31043)+(_n_dy_31044*_n_dy_31044)));
double _n_c_31046=(d::truth((_n_m_30990==_n_SKY_30614))?d::at(this->_n_cloud_30655,_n_k_30989):0.0);
double _n_inner_31047=(d::truth(_n_inside_30959)?(((std::exp(((-d::number(_n_dist_31045))/14.0))*_n_c_31046)*_n_I_30958)*2.0):(((std::exp(((-d::number(_n_dist_31045))/16.0))*(0.3+(0.7*_n_c_31046)))*_n_I_30958)*1.3));
double _n_back_31048=(d::truth((_n_m_30990==_n_SKY_30614))?(((((d::at(this->_n_dark_30656,_n_k_30989)*0.5)+(_n_rain_30996*0.8))*std::exp(((-d::number(std::fabs(_n_dx_31043)))/34.0)))*_n_I_30958)*(d::truth(_n_inside_30959)?0.5:1.0)):0.0);
double _n_amb_31049=(d::truth(_n_inside_30959)?0.0:(_n_I_30958*(d::truth((_n_m_30990==_n_SKY_30614))?0.08:0.05)));
double _n_lw_31050=(_n_inner_31047+_n_back_31048);
(void)((((_n_cr_30991=(_n_cr_30991+((0.75*_n_lw_31050)+(_n_amb_31049*0.8)))),(_n_cg_30992=(_n_cg_30992+((0.72*_n_lw_31050)+(_n_amb_31049*0.8))))),(_n_cb_30993=(_n_cb_30993+((1.0*_n_lw_31050)+_n_amb_31049)))));
if(d::truth(_n_f_30956->_p_boltOn)){d::check_cancel();double _n_d_31051=d::at(_n_f_30956->_p_bolt->_p_field,_n_k_30989);
if((d::truth((_n_d_31051<12.0))&&d::truth(([&]()->bool{auto _n_logical_31339=(_n_c_31046<0.6);return d::truth(_n_logical_31339)?_n_logical_31339:(_n_y_30986>(_n_BASE_30610-1.0));})()))){d::check_cancel();double _n_core_31052=(_n_smooth_30628(1.1,0.35,_n_d_31051)*_n_f_30956->_p_boltOn);
double _n_glow_31053=(([&](){auto _n_left_31340=(std::exp(((-d::number(_n_d_31051))/2.0))*0.55);auto _n_right_31341=(std::exp(((-d::number(_n_d_31051))/7.0))*0.2);return (_n_left_31340+_n_right_31341);})()*_n_f_30956->_p_boltOn);
(void)((((_n_cr_30991=(_n_cr_30991+(_n_core_31052+(_n_glow_31053*0.75)))),(_n_cg_30992=(_n_cg_30992+(_n_core_31052+(_n_glow_31053*0.72))))),(_n_cb_30993=(_n_cb_30993+(_n_core_31052+_n_glow_31053)))));
}
}
}
if(d::truth((_n_e_31034<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_31342=this->_n_out_30636;auto _n_index_31343=_n_k_30989;auto _n_value_31344=d::at(_n_DOTS_30611,1.0);d::put(_n_array_31342,_n_index_31343,_n_value_31344);return _n_value_31344;})());
if(d::truth(_n_color_30955)){d::check_cancel();(void)(([&](){auto&& _n_array_31345=d::read(_n_color_30955);auto _n_index_31346=_n_k_30989;auto _n_value_31347=this->_n_STALK_30634;d::put(_n_array_31345,_n_index_31346,_n_value_31347);return _n_value_31347;})());
}
continue;
}
double _n_peak_31054=d::maximum({_n_cr_30991,_n_cg_30992,_n_cb_30993,0.0001});
double _n_level_31055=(_n_clamp_30627(((_n_floor_30994+(((1.0-_n_floor_30994)*_n_peak_31054)*0.97))+d::at(this->_n_jit_30659,_n_k_30989)))*_n_fade_30995);
double _n_step_31056=([&](){auto _n_argument_31348=0.0;auto _n_argument_31349=([&](){auto _n_argument_31350=3.0;auto _n_argument_31351=d::round(((_n_level_31055*3.0)+d::at(_n_BAYER_30613,((double(d::i32(_n_r_30985)&d::i32(3.0))*4.0)+double(d::i32(_n_x_30988)&d::i32(3.0))))));return d::minimum({_n_argument_31350,_n_argument_31351});})();return d::maximum({_n_argument_31348,_n_argument_31349});})();
(void)(([&](){auto&& _n_array_31352=this->_n_out_30636;auto _n_index_31353=_n_k_30989;auto _n_value_31354=d::at(_n_DOTS_30611,_n_step_31056);d::put(_n_array_31352,_n_index_31353,_n_value_31354);return _n_value_31354;})());
if(d::truth(_n_color_30955)){d::check_cancel();double _n_want_31057=(d::truth(_n_step_31056)?d::minimum({1.0,((_n_level_31055+0.04)/d::at(_n_COVER_30612,_n_step_31056))}):0.0);
double _n_s_31058=(d::minimum({(0.14+(0.86*_n_want_31057)),(0.45+(0.8*_n_level_31055))})/_n_peak_31054);
(void)(([&](){auto&& _n_array_31355=d::read(_n_color_30955);auto _n_index_31356=_n_k_30989;auto _n_value_31357=([&](){auto _n_argument_31358=_n_clamp_30627((_n_cr_30991*_n_s_31058));auto _n_argument_31359=_n_clamp_30627((_n_cg_30992*_n_s_31058));auto _n_argument_31360=_n_clamp_30627((_n_cb_30993*_n_s_31058));return this->_n_nearest_30638(_n_argument_31358,_n_argument_31359,_n_argument_31360);})();d::put(_n_array_31355,_n_index_31356,_n_value_31357);return _n_value_31357;})());
}
}}
}}
d::Array<d::String,false> _n_lines_31059=d::Array<d::String,false>{};
{double _n_r_31060=0.0;
for(;d::truth((_n_r_31060<_n_H_30607));(void)((_n_r_31060++))){d::check_cancel();(void)(_n_lines_31059.push(d::join(this->_n_out_30636.slice((_n_r_31060*_n_W_30606),((_n_r_31060+1.0)*_n_W_30606)),d::String(u""))));
}}
return d::join(_n_lines_31059,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("storm-plains").cols)*ascii::catalog_meta("storm-plains").rows);auto _env=std::make_shared<_n_Record_31061>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &storm_plains_meta(){return catalog_meta("storm-plains");}
std::unique_ptr<Piece> make_storm_plains(const AsciiPieceOptions &o){return std::make_unique<Native_storm_plains>(o);}
}
