// Direct, statically typed C++ from src/pieces/varanasi-ghats.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35293;
struct _n_Record_35714;
struct _n_Record_35293{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_35293> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35293>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_35714{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35714> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35714>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_35315(double _a0,double _a1);
double _n_noise_35316(double _a0,double _a1,double _a2);
double _n_fbm_35317(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_35318(double _a0);
double _n_smooth_35319(double _a0,double _a1,double _a2);
double _n_mix_35320(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_35321(d::String _a0);
double _n_rampAt_35324(double _a0);
double _n_wlF_35325(double _a0);
double _n_scF_35326(double _a0);
double _n_stepTopF_35327(double _a0);
double _n_skyHeat_35328(double _a0,double _a1);
std::shared_ptr<_n_Record_35293> _n_meta_35292=[](){return ([&](){auto _n_object_35717=std::make_shared<_n_Record_35293>();_n_object_35717->_p_name=d::String(u"varanasi ghats");_n_object_35717->_p_category=d::String(u"scenes");_n_object_35717->_p_note=d::String(u"dusk aarti on the ganga, lamps on the steps and diyas on the water");_n_object_35717->_p_cols=200.0;_n_object_35717->_p_rows=100.0;_n_object_35717->_p_cell=1.0;_n_object_35717->_p_fps=15.0;_n_object_35717->_p_ground=d::String(u"#0b0812");_n_object_35717->_p_palette=d::Array<d::String,false>{d::String(u"#141230"),d::String(u"#1d1a42"),d::String(u"#272257"),d::String(u"#332b6a"),d::String(u"#45357a"),d::String(u"#5a4388"),d::String(u"#7259a8"),d::String(u"#6d3a73"),d::String(u"#8a4677"),d::String(u"#a8527a"),d::String(u"#c4607a"),d::String(u"#d97a92"),d::String(u"#b866a0"),d::String(u"#9a68c8"),d::String(u"#c868b0"),d::String(u"#e8707a"),d::String(u"#d9705f"),d::String(u"#e88552"),d::String(u"#f29f4a"),d::String(u"#f8b85a"),d::String(u"#fcd07a"),d::String(u"#ffe3a6"),d::String(u"#fff2d2"),d::String(u"#1a1220"),d::String(u"#24182a"),d::String(u"#301f33"),d::String(u"#3f2838"),d::String(u"#523340"),d::String(u"#3a2c4c"),d::String(u"#4d3a64"),d::String(u"#5e3524"),d::String(u"#7d4527"),d::String(u"#a0582a"),d::String(u"#c06e2e"),d::String(u"#d98a46"),d::String(u"#ffffff"),d::String(u"#fff6d8"),d::String(u"#ffd860"),d::String(u"#ff9f2a"),d::String(u"#f06a1e"),d::String(u"#c8401a"),d::String(u"#8a2a16"),d::String(u"#0f1a2c"),d::String(u"#162540"),d::String(u"#20325a"),d::String(u"#d6d4ee")};return _n_object_35717;})();}();
const double _n_W_35294=[](){return 200.0;}();
const double _n_H_35295=[](){return 100.0;}();
const double _n_HZ_35296=[](){return 60.0;}();
const double _n_END_35297=[](){return 150.0;}();
d::Array<double,false> _n_GLOW_35298=[](){return d::Array<double,false>{156.0,(_n_HZ_35296-1.5)};}();
const d::String _n_DOTS_35299=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_35300=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_LIFT_35301=[](){return d::Array<double,false>{0.0,2.5,1.7,1.35};}();
d::Array<double,false> _n_BAYER_35302=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_35369=_a0;
return ((_n_v_35369/16.0)-0.47);});}();
d::Array<double,false> _n_FLAME_35303=[](){return d::Array<double,false>{1.0,0.62,0.22};}();
d::Array<double,false> _n_WASH_35304=[](){return d::Array<double,false>{1.0,0.5,0.2};}();
const double _n_SKY_35305=[](){return 0.0;}();
const double _n_WATER_35306=[](){return 1.0;}();
const double _n_BANK_35307=[](){return 2.0;}();
const double _n_STEPS_35308=[](){return 3.0;}();
const double _n_BLD_35309=[](){return 4.0;}();
const double _n_SPIRE_35310=[](){return 5.0;}();
const double _n_UMB_35311=[](){return 6.0;}();
const double _n_FIG_35312=[](){return 7.0;}();
const double _n_PLAT_35313=[](){return 8.0;}();
d::Array<d::Array<double,false>,false> _n_RAMP_35314=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.085,0.07,0.24},d::Array<double,false>{0.14,0.13,0.1,0.34},d::Array<double,false>{0.28,0.22,0.14,0.44},d::Array<double,false>{0.42,0.34,0.17,0.48},d::Array<double,false>{0.52,0.47,0.21,0.47},d::Array<double,false>{0.62,0.6,0.26,0.42},d::Array<double,false>{0.7,0.7,0.31,0.36},d::Array<double,false>{0.78,0.8,0.39,0.3},d::Array<double,false>{0.86,0.88,0.5,0.26},d::Array<double,false>{0.92,0.95,0.65,0.32},d::Array<double,false>{0.97,1.0,0.8,0.48},d::Array<double,false>{1.0,1.0,0.92,0.7}};}();
const double _n_RL_35322=[](){return 256.0;}();
d::Array<float,true> _n_RT_35323=[](){return d::Array<float,true>(size_t(((_n_RL_35322+1.0)*3.0)));}();
const bool _n_init_35718=[](){{double _n_i_35407=0.0;
for(;d::truth((_n_i_35407<=_n_RL_35322));(void)((_n_i_35407++))){d::check_cancel();double _n_h_35408=(_n_i_35407/_n_RL_35322);
double _n_j_35409=0.0;
while((d::truth((_n_j_35409<(double(_n_RAMP_35314.size())-2.0)))&&d::truth((_n_h_35408>d::at(d::at(_n_RAMP_35314,(_n_j_35409+1.0)),0.0))))){d::check_cancel();(void)((_n_j_35409++));
}
auto _n_binding_35719=d::at(_n_RAMP_35314,_n_j_35409);
double _n_h0_35410=d::at(_n_binding_35719,0.0);
double _n_r0_35411=d::at(_n_binding_35719,1.0);
double _n_g0_35412=d::at(_n_binding_35719,2.0);
double _n_b0_35413=d::at(_n_binding_35719,3.0);
auto _n_binding_35720=d::at(_n_RAMP_35314,(_n_j_35409+1.0));
double _n_h1_35414=d::at(_n_binding_35720,0.0);
double _n_r1_35415=d::at(_n_binding_35720,1.0);
double _n_g1_35416=d::at(_n_binding_35720,2.0);
double _n_b1_35417=d::at(_n_binding_35720,3.0);
double _n_k_35418=_n_clamp_35318(((_n_h_35408-_n_h0_35410)/(_n_h1_35414-_n_h0_35410)));
(void)(((([&](){auto&& _n_array_35721=_n_RT_35323;auto _n_index_35722=(_n_i_35407*3.0);auto _n_value_35723=_n_mix_35320(_n_r0_35411,_n_r1_35415,_n_k_35418);d::put(_n_array_35721,_n_index_35722,_n_value_35723);return _n_value_35723;})(),([&](){auto&& _n_array_35724=_n_RT_35323;auto _n_index_35725=((_n_i_35407*3.0)+1.0);auto _n_value_35726=_n_mix_35320(_n_g0_35412,_n_g1_35416,_n_k_35418);d::put(_n_array_35724,_n_index_35725,_n_value_35726);return _n_value_35726;})()),([&](){auto&& _n_array_35727=_n_RT_35323;auto _n_index_35728=((_n_i_35407*3.0)+2.0);auto _n_value_35729=_n_mix_35320(_n_b0_35413,_n_b1_35417,_n_k_35418);d::put(_n_array_35727,_n_index_35728,_n_value_35729);return _n_value_35729;})()));
}}
return true;}();
double _n_hash_35315(double _a0,double _a1){double _n_x_35370=_a0;
double _n_y_35371=_a1;
{
double _n_h_35372=([&](){auto _n_left_35730=d::imul(double(d::i32(_n_x_35370)|d::i32(0.0)),374761393.0);auto _n_right_35731=d::imul(double(d::i32(_n_y_35371)|d::i32(0.0)),668265263.0);return (_n_left_35730+_n_right_35731);})();
(void)((_n_h_35372=d::imul(double(d::i32(_n_h_35372)^d::i32(double(d::u32(_n_h_35372)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_35372)^d::i32(double(d::u32(_n_h_35372)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_35316(double _a0,double _a1,double _a2){double _n_x_35373=_a0;
double _n_y_35374=_a1;
double _n_period_35375=_a2;
{
double _n_xi_35376=std::floor(_n_x_35373);
double _n_yi_35377=std::floor(_n_y_35374);
double _n_fx_35378=(_n_x_35373-_n_xi_35376);
double _n_fy_35379=(_n_y_35374-_n_yi_35377);
double _n_u_35380=((_n_fx_35378*_n_fx_35378)*(3.0-(2.0*_n_fx_35378)));
double _n_v_35381=((_n_fy_35379*_n_fy_35379)*(3.0-(2.0*_n_fy_35379)));
double _n_x0_35382=_n_xi_35376;
double _n_x1_35383=(_n_xi_35376+1.0);
if(d::truth(_n_period_35375)){d::check_cancel();(void)((_n_x0_35382=d::mod((d::mod(_n_xi_35376,_n_period_35375)+_n_period_35375),_n_period_35375)));
(void)((_n_x1_35383=d::mod((_n_x0_35382+1.0),_n_period_35375)));
}
double _n_a_35384=_n_hash_35315(_n_x0_35382,_n_yi_35377);
double _n_b_35385=_n_hash_35315(_n_x1_35383,_n_yi_35377);
double _n_c_35386=_n_hash_35315(_n_x0_35382,(_n_yi_35377+1.0));
double _n_d_35387=_n_hash_35315(_n_x1_35383,(_n_yi_35377+1.0));
return (((_n_a_35384+((_n_b_35385-_n_a_35384)*_n_u_35380))+((_n_c_35386-_n_a_35384)*_n_v_35381))+(((((_n_a_35384-_n_b_35385)-_n_c_35386)+_n_d_35387)*_n_u_35380)*_n_v_35381));

}
}

double _n_fbm_35317(double _a0,double _a1,double _a2,double _a3){double _n_x_35388=_a0;
double _n_y_35389=_a1;
double _n_octaves_35390=_a2;
double _n_period_35391=_a3;
{
double _n_s_35392=0.0;
double _n_n_35393=0.0;
double _n_amp_35394=0.5;
double _n_f_35395=1.0;
{double _n_i_35396=0.0;
for(;d::truth((_n_i_35396<_n_octaves_35390));(void)((_n_i_35396++))){d::check_cancel();(void)((_n_s_35392=(_n_s_35392+(_n_amp_35394*_n_noise_35316((_n_x_35388*_n_f_35395),(_n_y_35389*_n_f_35395),(_n_period_35391*_n_f_35395))))));
(void)((_n_n_35393=(_n_n_35393+_n_amp_35394)));
(void)((_n_amp_35394=(_n_amp_35394*0.5)));
(void)((_n_f_35395=(_n_f_35395*2.0)));
}}
return (_n_s_35392/_n_n_35393);

}
}

double _n_clamp_35318(double _a0){double _n_v_35397=_a0;
return (d::truth((_n_v_35397<0.0))?0.0:(d::truth((_n_v_35397>1.0))?1.0:_n_v_35397));}

double _n_smooth_35319(double _a0,double _a1,double _a2){double _n_a_35398=_a0;
double _n_b_35399=_a1;
double _n_v_35400=_a2;
{
double _n_k_35401=_n_clamp_35318(((_n_v_35400-_n_a_35398)/(_n_b_35399-_n_a_35398)));
return ((_n_k_35401*_n_k_35401)*(3.0-(2.0*_n_k_35401)));

}
}

double _n_mix_35320(double _a0,double _a1,double _a2){double _n_a_35402=_a0;
double _n_b_35403=_a1;
double _n_k_35404=_a2;
return (_n_a_35402+((_n_b_35403-_n_a_35402)*_n_k_35404));}

d::Array<double,false> _n_hex_35321(d::String _a0){d::String _n_s_35405=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_35406=_a0;
return (([&](){auto _n_argument_35732=d::slice(_n_s_35405,_n_i_35406,(_n_i_35406+2.0));auto _n_argument_35733=16.0;return d::parseInt(_n_argument_35732,_n_argument_35733);})()/255.0);});}

double _n_rampAt_35324(double _a0){double _n_h_35419=_a0;
return double(d::i32((((d::truth((_n_h_35419<0.0))?0.0:(d::truth((_n_h_35419>1.0))?1.0:_n_h_35419))*_n_RL_35322)+0.5))|d::i32(0.0));}

double _n_wlF_35325(double _a0){double _n_x_35420=_a0;
return (d::truth((_n_x_35420<_n_END_35297))?((_n_HZ_35296+0.5)+(20.0*std::pow((1.0-(_n_x_35420/_n_END_35297)),1.6))):(_n_HZ_35296+0.5));}

double _n_scF_35326(double _a0){double _n_x_35421=_a0;
return (0.45+(1.75*([&](){auto _n_argument_35734=d::maximum({0.0,(1.0-(_n_x_35421/_n_END_35297))});auto _n_argument_35735=1.3;return std::pow(_n_argument_35734,_n_argument_35735);})()));}

double _n_stepTopF_35327(double _a0){double _n_x_35422=_a0;
return ([&](){auto _n_left_35736=_n_wlF_35325(_n_x_35422);auto _n_right_35737=([&](){auto _n_left_35738=(9.5*_n_scF_35326(_n_x_35422));auto _n_right_35739=(0.3+(0.7*_n_smooth_35319(_n_END_35297,(_n_END_35297-16.0),_n_x_35422)));return (_n_left_35738*_n_right_35739);})();return (_n_left_35736-_n_right_35737);})();}

double _n_skyHeat_35328(double _a0,double _a1){double _n_x_35423=_a0;
double _n_y_35424=_a1;
{
double _n_v_35425=_n_clamp_35318((_n_y_35424/_n_HZ_35296));
double _n_dx_35426=std::fabs((_n_x_35423-d::at(_n_GLOW_35298,0.0)));
double _n_dy_35427=std::fabs((d::at(_n_GLOW_35298,1.0)-_n_y_35424));
double _n_wide_35428=(0.46*std::exp((((-d::number(_n_dx_35426))/55.0)-(_n_dy_35427/23.0))));
double _n_core_35429=(0.24*std::exp((-d::number(std::sqrt((std::pow((_n_dx_35426/13.0),2.0)+std::pow((_n_dy_35427/4.5),2.0)))))));
return (((0.06+((0.42*_n_v_35425)*_n_v_35425))+_n_wide_35428)+_n_core_35429);

}
}

struct Native_varanasi_ghats final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_35329{};
double _n_STAR_35330{};
double _n_N_35331{};
d::Array<d::String,false> _n_out_35332{};
d::Array<uint8_t,true> _n_lut_35333{};
d::Array<d::Array<double,false>,false> _n_blds_35335{};
d::Array<d::Array<double,false>,false> _n_spires_35336{};
d::Array<d::Array<double,false>,false> _n_aarti_35337{};
d::Array<double,false> _n_umbs_35338{};
d::Array<uint8_t,true> _n_mat_35339{};
d::Array<float,true> _n_sR_35340{};
d::Array<float,true> _n_sG_35341{};
d::Array<float,true> _n_sB_35342{};
d::Array<float,true> _n_flo_35343{};
d::Array<float,true> _n_alb_35344{};
d::Array<float,true> _n_skyH_35345{};
d::Array<float,true> _n_warm_35346{};
d::Array<float,true> _n_rimR_35348{};
d::Array<float,true> _n_rimG_35349{};
d::Array<float,true> _n_rimB_35350{};
d::Array<d::Array<double,false>,false> _n_stepLamps_35351{};
d::Array<float,true> _n_sref_35352{};
d::Array<d::Array<float,true>,false> _n_refl_35353{};
d::Array<int32_t,true> _n_mirK_35354{};
double _n_CW_35355{};
double _n_CH_35356{};
d::Array<float,true> _n_cover_35357{};
d::Array<float,true> _n_clit_35358{};
d::Array<d::Array<double,false>,false> _n_diyas_35360{};
d::Array<d::Array<float,true>,false> _n_dyn_35361{};
d::Array<float,true> _n_dref_35362{};
d::Array<uint8_t,true> _n_arm_35363{};
double _n_BS_35367{};
std::function<d::String(double,std::shared_ptr<_n_Record_35714>)> _render;
double _n_nearest_35334(double _a0,double _a1,double _a2){double _n_r_35430=_a0;
double _n_g_35431=_a1;
double _n_b_35432=_a2;
{
double _n_k_35433=([&](){auto _n_left_35926=([&](){auto _n_left_35928=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_35430*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_35929=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_35431*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_35928)|d::i32(_n_right_35929));})();auto _n_right_35927=d::minimum({31.0,double(d::i32((_n_b_35432*31.99))|d::i32(0.0))});return double(d::i32(_n_left_35926)|d::i32(_n_right_35927));})();
if(d::truth((d::at(this->_n_lut_35333,_n_k_35433)!=255.0))){d::check_cancel();return d::at(this->_n_lut_35333,_n_k_35433);
}
double _n_best_35434=0.0;
double _n_bd_35435=1000000000.0;
{double _n_i_35436=0.0;
for(;d::truth((_n_i_35436<this->_n_STAR_35330));(void)((_n_i_35436++))){d::check_cancel();double _n_dr_35437=(d::at(d::at(this->_n_P_35329,_n_i_35436),0.0)-_n_r_35430);
double _n_dg_35438=(d::at(d::at(this->_n_P_35329,_n_i_35436),1.0)-_n_g_35431);
double _n_db_35439=(d::at(d::at(this->_n_P_35329,_n_i_35436),2.0)-_n_b_35432);
double _n_d_35440=((((0.3*_n_dr_35437)*_n_dr_35437)+((0.5*_n_dg_35438)*_n_dg_35438))+((0.2*_n_db_35439)*_n_db_35439));
if(d::truth((_n_d_35440<_n_bd_35435))){d::check_cancel();(void)(((_n_bd_35435=_n_d_35440),(_n_best_35434=_n_i_35436)));
}
}}
return ([&](){auto&& _n_array_35930=this->_n_lut_35333;auto _n_index_35931=_n_k_35433;auto _n_value_35932=_n_best_35434;d::put(_n_array_35930,_n_index_35931,_n_value_35932);return _n_value_35932;})();

}
}

double _n_roofOf_35347(double _a0){double _n_x_35445=_a0;
{
for(auto &&_n_item_35933:this->_n_blds_35335){d::check_cancel();auto _n_binding_35934=_n_item_35933;
double _n_x0_35446=d::at(_n_binding_35934,0.0);
double _n_x1_35447=d::at(_n_binding_35934,1.0);
double _n_h_35448=d::at(_n_binding_35934,2.0);
if((d::truth((_n_x_35445>=_n_x0_35446))&&d::truth((_n_x_35445<_n_x1_35447)))){d::check_cancel();return ([&](){auto _n_left_35935=_n_stepTopF_35327(_n_x_35445);auto _n_right_35936=(_n_h_35448*_n_scF_35326(_n_x_35445));return (_n_left_35935-_n_right_35936);})();
}
}
return _n_stepTopF_35327(_n_x_35445);

}
}

double _n_density_35359(double _a0,double _a1){double _n_x_35560=_a0;
double _n_y_35561=_a1;
{
double _n_q_35562=_n_fbm_35317((_n_x_35560*0.005),(_n_y_35561*0.03),3.0,4.0);
double _n_d_35563=_n_fbm_35317(((_n_x_35560*0.0125)+(_n_q_35562*1.8)),((_n_y_35561*0.09)+(_n_q_35562*0.9)),5.0,10.0);
double _n_env_35564=([&](){auto _n_left_35937=(0.03*std::exp((-d::number(std::pow(((_n_y_35561-13.0)/4.0),2.0)))));auto _n_right_35938=(0.1*std::exp((-d::number(std::pow(((_n_y_35561-29.0)/5.5),2.0)))));return (_n_left_35937+_n_right_35938);})();
double _n_c_35565=(46.5+(3.0*(_n_fbm_35317((_n_x_35560*0.01),9.5,2.0,8.0)-0.5)));
double _n_th_35566=(1.0+(0.9*_n_fbm_35317((_n_x_35560*0.05),3.5,2.0,40.0)));
double _n_streak_35567=([&](){auto _n_left_35939=([&](){auto _n_left_35941=std::exp((-d::number(std::pow(((_n_y_35561-_n_c_35565)/_n_th_35566),2.0))));auto _n_right_35942=([&](){auto _n_argument_35943=0.42;auto _n_argument_35944=0.6;auto _n_argument_35945=_n_fbm_35317((_n_x_35560*0.0125),21.5,3.0,10.0);return _n_smooth_35319(_n_argument_35943,_n_argument_35944,_n_argument_35945);})();return (_n_left_35941*_n_right_35942);})();auto _n_right_35940=(0.75+(0.5*_n_fbm_35317((_n_x_35560*0.05),(_n_y_35561*0.3),3.0,40.0)));return (_n_left_35939*_n_right_35940);})();
return d::maximum({((_n_d_35563+_n_env_35564)-0.08),(0.36+(0.3*_n_streak_35567))});

}
}

void _n_addGlow_35364(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_35575=_a0;
double _n_fy_35576=_a1;
double _n_core_35577=_a2;
double _n_halo_35578=_a3;
double _n_amp_35579=_a4;
{
double _n_R_35580=std::ceil((_n_halo_35578*3.2));
{double _n_r_35581=([&](){auto _n_argument_35946=0.0;auto _n_argument_35947=std::floor((_n_fy_35576-_n_R_35580));return d::maximum({_n_argument_35946,_n_argument_35947});})();
for(;d::truth((_n_r_35581<d::minimum({_n_H_35295,(_n_fy_35576+_n_R_35580)})));(void)((_n_r_35581++))){d::check_cancel();{double _n_x_35582=([&](){auto _n_argument_35948=0.0;auto _n_argument_35949=std::floor((_n_fx_35575-_n_R_35580));return d::maximum({_n_argument_35948,_n_argument_35949});})();
for(;d::truth((_n_x_35582<d::minimum({_n_W_35294,(_n_fx_35575+_n_R_35580)})));(void)((_n_x_35582++))){d::check_cancel();double _n_k_35583=((_n_r_35581*_n_W_35294)+_n_x_35582);
double _n_dx_35584=((_n_x_35582+0.5)-_n_fx_35575);
double _n_dy_35585=(((_n_r_35581+0.5)-_n_fy_35576)*0.85);
double _n_d_35586=std::sqrt(((_n_dx_35584*_n_dx_35584)+(_n_dy_35585*_n_dy_35585)));
double _n_am_35587=(d::truth((d::at(this->_n_mat_35339,_n_k_35583)==_n_FIG_35312))?(_n_amp_35579*0.15):_n_amp_35579);
double _n_c_35588=((std::exp((-d::number(std::pow((_n_d_35586/_n_core_35577),2.0))))*1.6)*_n_am_35587);
double _n_v_35589=((std::exp(((-d::number(_n_d_35586))/_n_halo_35578))*0.35)*_n_am_35587);
(void)(((([&](){auto&& _n_array_35950=d::at(this->_n_dyn_35361,0.0);auto _n_index_35951=_n_k_35583;auto _n_value_35952=(d::at(_n_array_35950,_n_index_35951)+(_n_c_35588+(_n_v_35589*d::at(_n_FLAME_35303,0.0))));d::put(_n_array_35950,_n_index_35951,_n_value_35952);return _n_value_35952;})(),([&](){auto&& _n_array_35953=d::at(this->_n_dyn_35361,1.0);auto _n_index_35954=_n_k_35583;auto _n_value_35955=(d::at(_n_array_35953,_n_index_35954)+((_n_c_35588*0.86)+(_n_v_35589*d::at(_n_FLAME_35303,1.0))));d::put(_n_array_35953,_n_index_35954,_n_value_35955);return _n_value_35955;})()),([&](){auto&& _n_array_35956=d::at(this->_n_dyn_35361,2.0);auto _n_index_35957=_n_k_35583;auto _n_value_35958=(d::at(_n_array_35956,_n_index_35957)+((_n_c_35588*0.55)+(_n_v_35589*d::at(_n_FLAME_35303,2.0))));d::put(_n_array_35956,_n_index_35957,_n_value_35958);return _n_value_35958;})()));
}}
}}

}
}

void _n_addWash_35365(double _a0,double _a1,double _a2,double _a3){double _n_fx_35590=_a0;
double _n_fy_35591=_a1;
double _n_halo_35592=_a2;
double _n_amp_35593=_a3;
{
double _n_R_35594=std::ceil((_n_halo_35592*2.6));
{double _n_r_35595=([&](){auto _n_argument_35959=0.0;auto _n_argument_35960=std::floor((_n_fy_35591-_n_R_35594));return d::maximum({_n_argument_35959,_n_argument_35960});})();
for(;d::truth((_n_r_35595<d::minimum({_n_H_35295,(_n_fy_35591+_n_R_35594)})));(void)((_n_r_35595++))){d::check_cancel();{double _n_x_35596=([&](){auto _n_argument_35961=0.0;auto _n_argument_35962=std::floor((_n_fx_35590-_n_R_35594));return d::maximum({_n_argument_35961,_n_argument_35962});})();
for(;d::truth((_n_x_35596<d::minimum({_n_W_35294,(_n_fx_35590+_n_R_35594)})));(void)((_n_x_35596++))){d::check_cancel();double _n_k_35597=((_n_r_35595*_n_W_35294)+_n_x_35596);
double _n_a_35598=d::at(this->_n_alb_35344,_n_k_35597);
if(d::truth((!d::truth(_n_a_35598)))){d::check_cancel();continue;
}
double _n_dx_35599=((_n_x_35596+0.5)-_n_fx_35590);
double _n_dy_35600=((_n_r_35595+0.5)-_n_fy_35591);
double _n_v_35601=((std::exp(((-d::number(std::sqrt(((_n_dx_35599*_n_dx_35599)+(_n_dy_35600*_n_dy_35600)))))/_n_halo_35592))*_n_amp_35593)*_n_a_35598);
(void)(((([&](){auto&& _n_array_35963=d::at(this->_n_dyn_35361,0.0);auto _n_index_35964=_n_k_35597;auto _n_value_35965=(d::at(_n_array_35963,_n_index_35964)+(_n_v_35601*d::at(_n_WASH_35304,0.0)));d::put(_n_array_35963,_n_index_35964,_n_value_35965);return _n_value_35965;})(),([&](){auto&& _n_array_35966=d::at(this->_n_dyn_35361,1.0);auto _n_index_35967=_n_k_35597;auto _n_value_35968=(d::at(_n_array_35966,_n_index_35967)+(_n_v_35601*d::at(_n_WASH_35304,1.0)));d::put(_n_array_35966,_n_index_35967,_n_value_35968);return _n_value_35968;})()),([&](){auto&& _n_array_35969=d::at(this->_n_dyn_35361,2.0);auto _n_index_35970=_n_k_35597;auto _n_value_35971=(d::at(_n_array_35969,_n_index_35970)+(_n_v_35601*d::at(_n_WASH_35304,2.0)));d::put(_n_array_35969,_n_index_35970,_n_value_35971);return _n_value_35971;})()));
}}
}}

}
}

void _n_addStreak_35366(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_35602=_a0;
double _n_wl_35603=_a1;
double _n_width_35604=_a2;
double _n_len_35605=_a3;
double _n_amp_35606=_a4;
{
{double _n_r_35607=([&](){auto _n_argument_35972=0.0;auto _n_argument_35973=std::floor(_n_wl_35603);return d::maximum({_n_argument_35972,_n_argument_35973});})();
for(;d::truth((_n_r_35607<_n_H_35295));(void)((_n_r_35607++))){d::check_cancel();double _n_dy_35608=((_n_r_35607+0.5)-_n_wl_35603);
double _n_a_35609=([&](){auto _n_left_35974=(std::exp(((-d::number(_n_dy_35608))/_n_len_35605))*_n_amp_35606);auto _n_right_35975=_n_smooth_35319((-d::number(0.5)),1.0,_n_dy_35608);return (_n_left_35974*_n_right_35975);})();
if(d::truth((_n_a_35609<0.01))){d::check_cancel();break;
}
{double _n_x_35610=([&](){auto _n_argument_35976=0.0;auto _n_argument_35977=std::floor(((_n_fx_35602-(3.0*_n_width_35604))-1.0));return d::maximum({_n_argument_35976,_n_argument_35977});})();
for(;d::truth((_n_x_35610<d::minimum({_n_W_35294,((_n_fx_35602+(3.0*_n_width_35604))+1.0)})));(void)((_n_x_35610++))){d::check_cancel();double _n_k_35611=((_n_r_35607*_n_W_35294)+_n_x_35610);
if(d::truth((d::at(this->_n_mat_35339,_n_k_35611)==_n_WATER_35306))){d::check_cancel();(void)(([&](){auto&& _n_array_35978=this->_n_dref_35362;auto _n_index_35979=_n_k_35611;auto _n_value_35980=(d::at(_n_array_35978,_n_index_35979)+(_n_a_35609*std::exp((-d::number(std::pow((((_n_x_35610+0.5)-_n_fx_35602)/_n_width_35604),2.0))))));d::put(_n_array_35978,_n_index_35979,_n_value_35980);return _n_value_35980;})());
}
}}
}}

}
}

double _n_boatAt_35368(double _a0,double _a1){double _n_lx_35612=_a0;
double _n_ly_35613=_a1;
{
double _n_L_35614=9.0;
if(((d::truth((std::fabs(_n_lx_35612)<_n_L_35614))&&d::truth((_n_ly_35613>(-d::number(0.6)))))&&d::truth((_n_ly_35613<(1.2+(1.4*([&](){auto _n_argument_35981=(std::fabs(_n_lx_35612)/_n_L_35614);auto _n_argument_35982=3.0;return std::pow(_n_argument_35981,_n_argument_35982);})())))))){d::check_cancel();return 1.0;
}
if((((d::truth((_n_lx_35612>4.6))&&d::truth((_n_lx_35612<5.8)))&&d::truth((_n_ly_35613>0.0)))&&d::truth((_n_ly_35613<6.6)))){d::check_cancel();return 1.0;
}
if((d::truth((std::fabs((_n_lx_35612-5.2))<0.7))&&d::truth((std::fabs((_n_ly_35613-7.2))<0.7)))){d::check_cancel();return 1.0;
}
double _n_ox_35615=(_n_lx_35612-5.6);
double _n_oy_35616=(_n_ly_35613-5.4);
double _n_along_35617=((_n_ox_35615*0.42)-(_n_oy_35616*0.91));
if(((d::truth((_n_along_35617>0.0))&&d::truth((_n_along_35617<8.0)))&&d::truth((std::fabs(((_n_ox_35615*0.91)+(_n_oy_35616*0.42)))<0.32)))){d::check_cancel();return 1.0;
}
if((((d::truth((_n_lx_35612>(-d::number(4.0))))&&d::truth((_n_lx_35612<(-d::number(0.5)))))&&d::truth((_n_ly_35613>0.0)))&&d::truth((_n_ly_35613<(2.6-(0.25*std::fabs((_n_lx_35612+2.2)))))))){d::check_cancel();return 1.0;
}
return 0.0;

}
}

explicit Native_varanasi_ghats(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_35329=d::map(_n_meta_35292->_p_palette,_n_hex_35321);
this->_n_STAR_35330=(double(this->_n_P_35329.size())-1.0);
this->_n_N_35331=(_n_W_35294*_n_H_35295);
this->_n_out_35332=d::Array<d::String,false>(size_t(this->_n_N_35331));
this->_n_lut_35333=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_blds_35335=d::Array<d::Array<double,false>,false>{};
{double _n_x_35441=(-d::number(6.0));
for(;d::truth((_n_x_35441<(_n_END_35297-10.0)));){d::check_cancel();double _n_s_35442=_n_scF_35326(d::maximum({0.0,_n_x_35441}));
double _n_w_35443=((8.0+(10.0*_n_hash_35315(double(d::i32(_n_x_35441)|d::i32(0.0)),3.0)))*_n_s_35442);
double _n_low_35444=((d::truth((_n_x_35441>110.0))?0.8:1.0)*(0.45+(0.55*_n_smooth_35319((_n_END_35297-8.0),(_n_END_35297-34.0),_n_x_35441))));
(void)(this->_n_blds_35335.push(d::Array<double,false>{_n_x_35441,(_n_x_35441+_n_w_35443),((7.0+(9.0*_n_hash_35315(double(d::i32(_n_x_35441)|d::i32(0.0)),4.0)))*_n_low_35444),_n_hash_35315(double(d::i32(_n_x_35441)|d::i32(0.0)),5.0)}));
(void)((_n_x_35441=(_n_x_35441+_n_w_35443)));
}}
this->_n_spires_35336=d::Array<d::Array<double,false>,false>{d::Array<double,false>{118.0,33.0,5.2},d::Array<double,false>{64.0,19.0,4.0},d::Array<double,false>{31.0,15.0,3.6},d::Array<double,false>{139.0,8.0,1.6},d::Array<double,false>{90.0,11.0,2.4},d::Array<double,false>{129.0,10.0,2.0}};
this->_n_aarti_35337=d::Array<d::Array<double,false>,false>{d::Array<double,false>{11.0,1.15,1.25},d::Array<double,false>{24.0,0.8,0.85},d::Array<double,false>{39.0,1.25,1.1},d::Array<double,false>{54.0,0.75,0.75}};
this->_n_umbs_35338=d::Array<double,false>{70.0,83.0,98.0,109.0};
this->_n_mat_35339=d::Array<uint8_t,true>(size_t(this->_n_N_35331));
this->_n_sR_35340=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_sG_35341=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_sB_35342=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_flo_35343=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_alb_35344=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_skyH_35345=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_warm_35346=d::Array<float,true>(size_t(this->_n_N_35331));
{double _n_r_35449=0.0;
for(;d::truth((_n_r_35449<_n_H_35295));(void)((_n_r_35449++))){d::check_cancel();{double _n_x_35450=0.0;
for(;d::truth((_n_x_35450<_n_W_35294));(void)((_n_x_35450++))){d::check_cancel();double _n_k_35451=((_n_r_35449*_n_W_35294)+_n_x_35450);
double _n_xc_35452=(_n_x_35450+0.5);
double _n_y_35453=(_n_r_35449+0.5);
double _n_wl_35454=_n_wlF_35325(_n_xc_35452);
if(d::truth((_n_y_35453>=_n_wl_35454))){d::check_cancel();(void)(([&](){auto&& _n_array_35740=this->_n_mat_35339;auto _n_index_35741=_n_k_35451;auto _n_value_35742=_n_WATER_35306;d::put(_n_array_35740,_n_index_35741,_n_value_35742);return _n_value_35742;})());
(void)(([&](){auto&& _n_array_35743=this->_n_alb_35344;auto _n_index_35744=_n_k_35451;auto _n_value_35745=0.25;d::put(_n_array_35743,_n_index_35744,_n_value_35745);return _n_value_35745;})());
continue;
}
double _n_m_35455=_n_SKY_35305;
double _n_cr_35456=0.0;
double _n_cg_35457=0.0;
double _n_cb_35458=0.0;
double _n_fl_35459=0.06;
double _n_al_35460=0.0;
double _n_s_35461=_n_scF_35326(_n_xc_35452);
double _n_clump_35462=([&](){auto _n_left_35746=([&](){auto _n_argument_35748=0.42;auto _n_argument_35749=0.72;auto _n_argument_35750=_n_fbm_35317((_n_xc_35452*0.11),3.0,3.0,0.0);return _n_smooth_35319(_n_argument_35748,_n_argument_35749,_n_argument_35750);})();auto _n_right_35747=_n_smooth_35319(160.0,172.0,_n_xc_35452);return (_n_left_35746*_n_right_35747);})();
double _n_bankTop_35463=(((_n_HZ_35296-2.2)-(0.6*_n_fbm_35317((_n_xc_35452*0.4),7.0,2.0,0.0)))-(4.0*_n_clump_35462));
if((d::truth((_n_xc_35452>=(_n_END_35297-4.0)))&&d::truth((_n_y_35453>=_n_bankTop_35463)))){d::check_cancel();(void)((((((_n_m_35455=_n_BANK_35307),(_n_cr_35456=0.1)),(_n_cg_35457=0.07)),(_n_cb_35458=0.125)),(_n_fl_35459=0.03)));
}
if(d::truth((_n_xc_35452<_n_END_35297))){d::check_cancel();double _n_st_35464=_n_stepTopF_35327(_n_xc_35452);
double _n_roof_35465=_n_st_35464;
double _n_bi_35466=(-d::number(1.0));
{double _n_i_35467=0.0;
for(;d::truth((_n_i_35467<double(this->_n_blds_35335.size())));(void)((_n_i_35467++))){d::check_cancel();if((d::truth((_n_xc_35452>=d::at(d::at(this->_n_blds_35335,_n_i_35467),0.0)))&&d::truth((_n_xc_35452<d::at(d::at(this->_n_blds_35335,_n_i_35467),1.0))))){d::check_cancel();(void)(((_n_roof_35465=(_n_st_35464-(d::at(d::at(this->_n_blds_35335,_n_i_35467),2.0)*_n_s_35461))),(_n_bi_35466=_n_i_35467)));
}
}}
double _n_top_35468=_n_roof_35465;
if(d::truth((_n_bi_35466>=0.0))){d::check_cancel();auto _n_binding_35751=d::at(this->_n_blds_35335,_n_bi_35466);
double _n_x0_35469=d::at(_n_binding_35751,0.0);
double _n_x1_35470=d::at(_n_binding_35751,1.0);
double _n_hb_35471=d::at(_n_binding_35751,3.0);
double _n_mid_35472=((_n_x0_35469+_n_x1_35470)/2.0);
double _n_half_35473=((_n_x1_35470-_n_x0_35469)/2.0);
if(d::truth((_n_hb_35471>0.45))){d::check_cancel();double _n_cx_35474=(d::truth((_n_hb_35471>0.75))?(_n_x0_35469+(_n_half_35473*0.4)):_n_mid_35472);
double _n_dx_35475=(std::fabs((_n_xc_35452-_n_cx_35474))/(1.6*_n_s_35461));
if(d::truth((_n_dx_35475<1.0))){d::check_cancel();(void)((_n_top_35468=([&](){auto _n_argument_35752=_n_top_35468;auto _n_argument_35753=((_n_roof_35465-(1.4*_n_s_35461))-((1.5*_n_s_35461)*std::sqrt((1.0-(_n_dx_35475*_n_dx_35475)))));return d::minimum({_n_argument_35752,_n_argument_35753});})()));
}
if((d::truth((_n_dx_35475<1.1))&&d::truth((_n_dx_35475>0.7)))){d::check_cancel();(void)((_n_top_35468=d::minimum({_n_top_35468,(_n_roof_35465-(1.4*_n_s_35461))})));
}
}
if((d::truth((std::fabs((_n_xc_35452-_n_x0_35469))<(0.6*_n_s_35461)))||d::truth((std::fabs((_n_xc_35452-_n_x1_35470))<(0.6*_n_s_35461))))){d::check_cancel();(void)((_n_top_35468=d::minimum({_n_top_35468,(_n_roof_35465-(0.6*_n_s_35461))})));
}
}
if((d::truth((_n_y_35453>=_n_top_35468))&&d::truth((_n_y_35453<_n_st_35464)))){d::check_cancel();(void)((_n_m_35455=_n_BLD_35309));
(void)((((_n_cr_35456=0.075),(_n_cg_35457=0.05)),(_n_cb_35458=0.09)));
double _n_fy_35476=((_n_y_35453-_n_top_35468)/d::maximum({1.0,(_n_st_35464-_n_top_35468)}));
(void)((((_n_cr_35456=(_n_cr_35456*(1.1-(0.4*_n_fy_35476)))),(_n_cg_35457=(_n_cg_35457*(1.1-(0.4*_n_fy_35476))))),(_n_cb_35458=(_n_cb_35458*(1.1-(0.3*_n_fy_35476))))));
(void)((_n_al_35460=0.5));
if((d::truth((_n_bi_35466>=0.0))&&d::truth((_n_s_35461>0.6)))){d::check_cancel();double _n_fx_35477=((_n_xc_35452-d::at(d::at(this->_n_blds_35335,_n_bi_35466),0.0))/(2.4*_n_s_35461));
double _n_fz_35478=((_n_st_35464-_n_y_35453)/(3.0*_n_s_35461));
double _n_ix_35479=std::floor(_n_fx_35477);
double _n_iz_35480=std::floor(_n_fz_35478);
if((((((d::truth(((_n_fx_35477-_n_ix_35479)>0.35))&&d::truth(((_n_fx_35477-_n_ix_35479)<0.7)))&&d::truth(((_n_fz_35478-_n_iz_35480)>0.25)))&&d::truth(((_n_fz_35478-_n_iz_35480)<0.75)))&&d::truth((_n_iz_35480>=1.0)))&&d::truth(((_n_st_35464-_n_y_35453)<((d::at(d::at(this->_n_blds_35335,_n_bi_35466),2.0)*_n_s_35461)-(1.5*_n_s_35461)))))){d::check_cancel();bool _n_lit_35481=(_n_hash_35315(((_n_bi_35466*31.0)+_n_ix_35479),(_n_iz_35480*7.0))<(d::truth((_n_s_35461>1.2))?0.28:0.2));
if(d::truth(_n_lit_35481)){d::check_cancel();(void)((((_n_cr_35456=(_n_cr_35456+0.5)),(_n_cg_35457=(_n_cg_35457+0.28))),(_n_cb_35458=(_n_cb_35458+0.08))));
}else {d::check_cancel();(void)(((((_n_cr_35456=(_n_cr_35456*0.55)),(_n_cg_35457=(_n_cg_35457*0.55))),(_n_cb_35458=(_n_cb_35458*0.65))),(_n_al_35460=0.2)));
}
}
}
(void)((_n_fl_35459=0.14));
}
if(d::truth((_n_y_35453>=_n_st_35464))){d::check_cancel();(void)((_n_m_35455=_n_STEPS_35308));
double _n_sp_35482=(1.6*_n_s_35461);
double _n_near_35483=((_n_wl_35454-_n_y_35453)/(_n_wl_35454-_n_st_35464));
if(d::truth((_n_sp_35482<2.2))){d::check_cancel();double _n_odd_35484=double(d::i32(std::floor((_n_wl_35454-_n_y_35453)))&d::i32(1.0));
(void)((((_n_cr_35456=0.19),(_n_cg_35457=0.13)),(_n_cb_35458=0.25)));
if(d::truth(_n_odd_35484)){d::check_cancel();(void)((((_n_cr_35456=(_n_cr_35456*0.55)),(_n_cg_35457=(_n_cg_35457*0.55))),(_n_cb_35458=(_n_cb_35458*0.58))));
}
(void)((_n_al_35460=(d::truth(_n_odd_35484)?0.4:0.75)));
}else {d::check_cancel();double _n_ph_35485=d::mod(((_n_wl_35454-_n_y_35453)/_n_sp_35482),1.0);
if(d::truth((_n_ph_35485<0.6))){d::check_cancel();(void)(((((_n_cr_35456=(0.24+(0.05*(1.0-_n_near_35483)))),(_n_cg_35457=0.15)),(_n_cb_35458=0.2)),(_n_al_35460=1.0)));
}else {d::check_cancel();(void)(((((_n_cr_35456=0.05),(_n_cg_35457=0.035)),(_n_cb_35458=0.06)),(_n_al_35460=0.3)));
}
}
if(d::truth(((_n_wl_35454-_n_y_35453)<(1.2*_n_s_35461)))){d::check_cancel();(void)(((((_n_cr_35456=(_n_cr_35456*0.6)),(_n_cg_35457=(_n_cg_35457*0.6))),(_n_cb_35458=(_n_cb_35458*0.75))),(_n_al_35460=(_n_al_35460*0.6))));
}
(void)((_n_fl_35459=0.12));
}
}
for(auto &&_n_item_35754:this->_n_spires_35336){d::check_cancel();auto _n_binding_35755=_n_item_35754;
double _n_sx_35486=d::at(_n_binding_35755,0.0);
double _n_sh_35487=d::at(_n_binding_35755,1.0);
double _n_sw_35488=d::at(_n_binding_35755,2.0);
{
double _n_base_35489=(this->_n_roofOf_35347(_n_sx_35486)+1.0);
double _n_h_35490=(_n_base_35489-_n_y_35453);
if((d::truth((_n_h_35490<(-d::number(1.0))))||d::truth((_n_h_35490>(_n_sh_35487+2.5))))){d::check_cancel();continue;
}
double _n_dx_35491=std::fabs((_n_xc_35452-_n_sx_35486));
double _n_f_35492=(_n_h_35490/_n_sh_35487);
double _n_hw_35493=(d::truth((_n_f_35492<=1.0))?(_n_sw_35488*([&](){auto _n_argument_35756=([&](){auto _n_argument_35757=0.0;auto _n_argument_35758=(1.0-std::pow(_n_f_35492,1.8));return d::maximum({_n_argument_35757,_n_argument_35758});})();auto _n_argument_35759=0.6;return std::pow(_n_argument_35756,_n_argument_35759);})()):0.0);
if((d::truth((_n_f_35492>0.92))&&d::truth((_n_f_35492<1.02)))){d::check_cancel();(void)((_n_hw_35493=d::maximum({_n_hw_35493,(_n_sw_35488*0.32)})));
}
if((d::truth((_n_f_35492>=1.02))&&d::truth((_n_h_35490<(_n_sh_35487+2.2))))){d::check_cancel();(void)((_n_hw_35493=([&](){auto _n_argument_35760=_n_hw_35493;auto _n_argument_35761=(0.35+(0.2*std::sin((((_n_h_35490-_n_sh_35487)/2.2)*ascii::PI))));return d::maximum({_n_argument_35760,_n_argument_35761});})()));
}
if((d::truth((_n_h_35490>=(-d::number(1.0))))&&d::truth((_n_h_35490<0.5)))){d::check_cancel();(void)((_n_hw_35493=(_n_sw_35488*1.15)));
}
if(d::truth((_n_dx_35491<=_n_hw_35493))){d::check_cancel();(void)((_n_m_35455=_n_SPIRE_35310));
double _n_band_35494=(d::truth(d::mod(std::floor((_n_h_35490/1.6)),2.0))?0.8:1.0);
(void)((((_n_cr_35456=(0.085*_n_band_35494)),(_n_cg_35457=(0.055*_n_band_35494))),(_n_cb_35458=(0.095*_n_band_35494))));
(void)(((_n_fl_35459=0.12),(_n_al_35460=0.35)));
}

}
}
for(auto &&_n_item_35762:this->_n_umbs_35338){d::check_cancel();double _n_ux_35495=_n_item_35762;
{
double _n_s2_35496=_n_scF_35326(_n_ux_35495);
double _n_wl2_35497=_n_wlF_35325(_n_ux_35495);
double _n_cy_35498=(_n_wl2_35497-((_n_wl2_35497-_n_stepTopF_35327(_n_ux_35495))*0.55));
double _n_dx_35499=((_n_xc_35452-_n_ux_35495)/(3.0*_n_s2_35496));
double _n_dy_35500=((_n_cy_35498-_n_y_35453)/(1.4*_n_s2_35496));
if(((d::truth((_n_dy_35500>0.0))&&d::truth((_n_dy_35500<1.0)))&&d::truth(([&](){auto _n_left_35763=std::fabs(_n_dx_35499);auto _n_right_35764=std::sqrt((1.0-(_n_dy_35500*_n_dy_35500)));return (_n_left_35763<_n_right_35764);})()))){d::check_cancel();(void)((((((_n_m_35455=_n_UMB_35311),(_n_cr_35456=0.07)),(_n_cg_35457=0.045)),(_n_cb_35458=0.075)),(_n_al_35460=0.4)));
}
if(((d::truth((_n_dy_35500<=0.0))&&d::truth((_n_dy_35500>(-d::number(0.25)))))&&d::truth((std::fabs(_n_dx_35499)<1.0)))){d::check_cancel();(void)((((((_n_m_35455=_n_UMB_35311),(_n_cr_35456=0.05)),(_n_cg_35457=0.03)),(_n_cb_35458=0.05)),(_n_al_35460=0.2)));
}
if(((d::truth((std::fabs((_n_xc_35452-_n_ux_35495))<0.5))&&d::truth((_n_y_35453>_n_cy_35498)))&&d::truth((_n_y_35453<(_n_cy_35498+(2.2*_n_s2_35496)))))){d::check_cancel();(void)((((((_n_m_35455=_n_UMB_35311),(_n_cr_35456=0.04)),(_n_cg_35457=0.03)),(_n_cb_35458=0.04)),(_n_al_35460=0.1)));
}

}
}
for(auto &&_n_item_35765:this->_n_aarti_35337){d::check_cancel();auto _n_binding_35766=_n_item_35765;
double _n_ax_35501=d::at(_n_binding_35766,0.0);
{
double _n_s2_35502=_n_scF_35326(_n_ax_35501);
double _n_u_35503=(1.3*_n_s2_35502);
double _n_base_35504=(_n_wlF_35325(_n_ax_35501)-(2.6*_n_s2_35502));
double _n_dx_35505=((_n_xc_35452-_n_ax_35501)/_n_u_35503);
double _n_fy_35506=((_n_base_35504-_n_y_35453)/_n_u_35503);
double _n_bw_35507=(d::truth((_n_fy_35506<0.0))?(-d::number(1.0)):(d::truth((_n_fy_35506<2.2))?(0.66-(0.04*_n_fy_35506)):(d::truth((_n_fy_35506<4.1))?(0.58+(0.32*_n_smooth_35319(2.2,3.7,_n_fy_35506))):(d::truth((_n_fy_35506<4.5))?0.28:(-d::number(1.0))))));
bool _n_head_35508=(d::hypot(std::initializer_list<double>{(_n_dx_35505*1.05),(_n_fy_35506-5.05)})<0.62);
if((d::truth((std::fabs(_n_dx_35505)<_n_bw_35507))||d::truth(_n_head_35508))){d::check_cancel();(void)(((((((_n_m_35455=_n_FIG_35312),(_n_cr_35456=0.035)),(_n_cg_35457=0.022)),(_n_cb_35458=0.035)),(_n_fl_35459=0.02)),(_n_al_35460=0.04)));
}
if(((d::truth((_n_y_35453>=_n_base_35504))&&d::truth((_n_y_35453<(_n_base_35504+(0.7*_n_s2_35502)))))&&d::truth((std::fabs((_n_xc_35452-_n_ax_35501))<(2.3*_n_u_35503))))){d::check_cancel();(void)(((((((_n_m_35455=_n_PLAT_35313),(_n_cr_35456=0.12)),(_n_cg_35457=0.07)),(_n_cb_35458=0.06)),(_n_fl_35459=0.04)),(_n_al_35460=0.8)));
}

}
}
if(d::truth((_n_m_35455==_n_SKY_35305))){d::check_cancel();double _n_veil_35509=(0.92+(0.16*_n_fbm_35317((_n_x_35450*0.05),(_n_r_35449*0.1),3.0,0.0)));
double _n_hh_35510=([&](){auto _n_left_35767=([&](){auto _n_left_35769=_n_skyHeat_35328(_n_xc_35452,_n_y_35453);auto _n_right_35770=(0.05*(_n_fbm_35317(((_n_x_35450*0.07)+11.0),(_n_r_35449*0.16),2.0,0.0)-0.5));return (_n_left_35769+_n_right_35770);})();auto _n_right_35768=(0.1*(_n_fbm_35317(((_n_x_35450*0.025)+3.0),((_n_r_35449*0.09)+5.0),3.0,0.0)-0.5));return (_n_left_35767+_n_right_35768);})();
(void)(([&](){auto&& _n_array_35771=this->_n_skyH_35345;auto _n_index_35772=_n_k_35451;auto _n_value_35773=_n_hh_35510;d::put(_n_array_35771,_n_index_35772,_n_value_35773);return _n_value_35773;})());
(void)(([&](){auto&& _n_array_35774=this->_n_warm_35346;auto _n_index_35775=_n_k_35451;auto _n_value_35776=_n_smooth_35319(0.3,0.9,_n_hh_35510);d::put(_n_array_35774,_n_index_35775,_n_value_35776);return _n_value_35776;})());
double _n_i_35511=(_n_rampAt_35324(_n_hh_35510)*3.0);
(void)((((_n_cr_35456=(d::at(_n_RT_35323,_n_i_35511)*_n_veil_35509)),(_n_cg_35457=(d::at(_n_RT_35323,(_n_i_35511+1.0))*_n_veil_35509))),(_n_cb_35458=(d::at(_n_RT_35323,(_n_i_35511+2.0))*_n_veil_35509))));
(void)((_n_fl_35459=0.2));
}
(void)(([&](){auto&& _n_array_35777=this->_n_mat_35339;auto _n_index_35778=_n_k_35451;auto _n_value_35779=_n_m_35455;d::put(_n_array_35777,_n_index_35778,_n_value_35779);return _n_value_35779;})());
(void)(((((([&](){auto&& _n_array_35780=this->_n_sR_35340;auto _n_index_35781=_n_k_35451;auto _n_value_35782=_n_cr_35456;d::put(_n_array_35780,_n_index_35781,_n_value_35782);return _n_value_35782;})(),([&](){auto&& _n_array_35783=this->_n_sG_35341;auto _n_index_35784=_n_k_35451;auto _n_value_35785=_n_cg_35457;d::put(_n_array_35783,_n_index_35784,_n_value_35785);return _n_value_35785;})()),([&](){auto&& _n_array_35786=this->_n_sB_35342;auto _n_index_35787=_n_k_35451;auto _n_value_35788=_n_cb_35458;d::put(_n_array_35786,_n_index_35787,_n_value_35788);return _n_value_35788;})()),([&](){auto&& _n_array_35789=this->_n_flo_35343;auto _n_index_35790=_n_k_35451;auto _n_value_35791=_n_fl_35459;d::put(_n_array_35789,_n_index_35790,_n_value_35791);return _n_value_35791;})()),([&](){auto&& _n_array_35792=this->_n_alb_35344;auto _n_index_35793=_n_k_35451;auto _n_value_35794=_n_al_35460;d::put(_n_array_35792,_n_index_35793,_n_value_35794);return _n_value_35794;})()));
}}
}}
this->_n_rimR_35348=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_rimG_35349=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_rimB_35350=d::Array<float,true>(size_t(this->_n_N_35331));
{double _n_r_35512=1.0;
for(;d::truth((_n_r_35512<(_n_H_35295-1.0)));(void)((_n_r_35512++))){d::check_cancel();{double _n_x_35513=2.0;
for(;d::truth((_n_x_35513<(_n_W_35294-2.0)));(void)((_n_x_35513++))){d::check_cancel();double _n_k_35514=((_n_r_35512*_n_W_35294)+_n_x_35513);
double _n_m_35515=d::at(this->_n_mat_35339,_n_k_35514);
if((d::truth((_n_m_35515==_n_SKY_35305))||d::truth((_n_m_35515==_n_WATER_35306)))){d::check_cancel();continue;
}
double _n_toward_35516=(d::truth((_n_x_35513<d::at(_n_GLOW_35298,0.0)))?1.0:(-d::number(1.0)));
double _n_strong_35517=(0.75*std::exp(((-d::number(std::fabs((_n_x_35513-d::at(_n_GLOW_35298,0.0)))))/42.0)));
double _n_a_35518=0.0;
if(d::truth((d::at(this->_n_mat_35339,(_n_k_35514+_n_toward_35516))==_n_SKY_35305))){d::check_cancel();(void)((_n_a_35518=_n_strong_35517));
}else {d::check_cancel();if(d::truth((d::at(this->_n_mat_35339,(_n_k_35514+(2.0*_n_toward_35516)))==_n_SKY_35305))){d::check_cancel();(void)((_n_a_35518=(_n_strong_35517*0.4)));
}
}
if(d::truth((_n_a_35518>0.0))){d::check_cancel();(void)(((([&](){auto&& _n_array_35795=this->_n_rimR_35348;auto _n_index_35796=_n_k_35514;auto _n_value_35797=(0.85*_n_a_35518);d::put(_n_array_35795,_n_index_35796,_n_value_35797);return _n_value_35797;})(),([&](){auto&& _n_array_35798=this->_n_rimG_35349;auto _n_index_35799=_n_k_35514;auto _n_value_35800=(0.45*_n_a_35518);d::put(_n_array_35798,_n_index_35799,_n_value_35800);return _n_value_35800;})()),([&](){auto&& _n_array_35801=this->_n_rimB_35350;auto _n_index_35802=_n_k_35514;auto _n_value_35803=(0.26*_n_a_35518);d::put(_n_array_35801,_n_index_35802,_n_value_35803);return _n_value_35803;})()));
}
if(d::truth((d::at(this->_n_mat_35339,(_n_k_35514-_n_W_35294))==_n_SKY_35305))){d::check_cancel();(void)(((([&](){auto&& _n_array_35804=this->_n_rimR_35348;auto _n_index_35805=_n_k_35514;auto _n_value_35806=(d::at(_n_array_35804,_n_index_35805)+(d::at(this->_n_sR_35340,(_n_k_35514-_n_W_35294))*0.3));d::put(_n_array_35804,_n_index_35805,_n_value_35806);return _n_value_35806;})(),([&](){auto&& _n_array_35807=this->_n_rimG_35349;auto _n_index_35808=_n_k_35514;auto _n_value_35809=(d::at(_n_array_35807,_n_index_35808)+(d::at(this->_n_sG_35341,(_n_k_35514-_n_W_35294))*0.3));d::put(_n_array_35807,_n_index_35808,_n_value_35809);return _n_value_35809;})()),([&](){auto&& _n_array_35810=this->_n_rimB_35350;auto _n_index_35811=_n_k_35514;auto _n_value_35812=(d::at(_n_array_35810,_n_index_35811)+(d::at(this->_n_sB_35342,(_n_k_35514-_n_W_35294))*0.3));d::put(_n_array_35810,_n_index_35811,_n_value_35812);return _n_value_35812;})()));
}
}}
}}
{double _n_k_35519=0.0;
for(;d::truth((_n_k_35519<this->_n_N_35331));(void)((_n_k_35519++))){d::check_cancel();(void)(((([&](){auto&& _n_array_35813=this->_n_sR_35340;auto _n_index_35814=_n_k_35519;auto _n_value_35815=(d::at(_n_array_35813,_n_index_35814)+d::at(this->_n_rimR_35348,_n_k_35519));d::put(_n_array_35813,_n_index_35814,_n_value_35815);return _n_value_35815;})(),([&](){auto&& _n_array_35816=this->_n_sG_35341;auto _n_index_35817=_n_k_35519;auto _n_value_35818=(d::at(_n_array_35816,_n_index_35817)+d::at(this->_n_rimG_35349,_n_k_35519));d::put(_n_array_35816,_n_index_35817,_n_value_35818);return _n_value_35818;})()),([&](){auto&& _n_array_35819=this->_n_sB_35342;auto _n_index_35820=_n_k_35519;auto _n_value_35821=(d::at(_n_array_35819,_n_index_35820)+d::at(this->_n_rimB_35350,_n_k_35519));d::put(_n_array_35819,_n_index_35820,_n_value_35821);return _n_value_35821;})()));
}}
this->_n_stepLamps_35351=d::Array<d::Array<double,false>,false>{};
{double _n_x_35520=2.0;
for(;d::truth((_n_x_35520<118.0));(void)((_n_x_35520++))){d::check_cancel();double _n_s_35521=_n_scF_35326((_n_x_35520+0.5));
{double _n_r_35522=std::floor(_n_stepTopF_35327((_n_x_35520+0.5)));
for(;d::truth((_n_r_35522<(_n_wlF_35325((_n_x_35520+0.5))-1.0)));(void)((_n_r_35522++))){d::check_cancel();double _n_k_35523=((_n_r_35522*_n_W_35294)+_n_x_35520);
if(d::truth((d::at(this->_n_mat_35339,_n_k_35523)!=_n_STEPS_35308))){d::check_cancel();continue;
}
double _n_near_35524=std::exp((-d::number(std::pow(((_n_x_35520-33.0)/36.0),2.0))));
if((d::truth((_n_hash_35315(((_n_x_35520*3.0)+7.0),(_n_r_35522*5.0))<((0.035*_n_near_35524)+0.006)))&&d::truth((d::mod((((_n_wlF_35325((_n_x_35520+0.5))-_n_r_35522)-0.5)/(1.6*_n_s_35521)),1.0)<0.3)))){d::check_cancel();(void)(this->_n_stepLamps_35351.push(d::Array<double,false>{_n_k_35523,(_n_hash_35315(_n_x_35520,_n_r_35522)*40.0)}));
}
}}
}}
this->_n_sref_35352=d::Array<float,true>(size_t(this->_n_N_35331));
{double _n_x_35525=58.0;
for(;d::truth((_n_x_35525<(_n_END_35297-3.0)));){d::check_cancel();double _n_s_35526=_n_scF_35326(_n_x_35525);
double _n_ly_35527=([&](){auto _n_left_35822=(_n_stepTopF_35327(_n_x_35525)-(0.4*_n_s_35526));auto _n_right_35823=([&](){auto _n_left_35824=(([&](){auto _n_left_35826=_n_wlF_35325(_n_x_35525);auto _n_right_35827=_n_stepTopF_35327(_n_x_35525);return (_n_left_35826-_n_right_35827);})()*0.55);auto _n_right_35825=std::pow(_n_hash_35315(double(d::i32(_n_x_35525)|d::i32(0.0)),78.0),2.0);return (_n_left_35824*_n_right_35825);})();return (_n_left_35822+_n_right_35823);})();
double _n_halo_35528=(1.0+(3.2*_n_s_35526));
double _n_R_35529=std::ceil((_n_halo_35528*3.0));
{double _n_r_35530=([&](){auto _n_argument_35828=0.0;auto _n_argument_35829=std::floor((_n_ly_35527-_n_R_35529));return d::maximum({_n_argument_35828,_n_argument_35829});})();
for(;d::truth((_n_r_35530<d::minimum({_n_H_35295,(_n_ly_35527+_n_R_35529)})));(void)((_n_r_35530++))){d::check_cancel();{double _n_xx_35531=([&](){auto _n_argument_35830=0.0;auto _n_argument_35831=std::floor((_n_x_35525-_n_R_35529));return d::maximum({_n_argument_35830,_n_argument_35831});})();
for(;d::truth((_n_xx_35531<d::minimum({_n_W_35294,(_n_x_35525+_n_R_35529)})));(void)((_n_xx_35531++))){d::check_cancel();double _n_k_35532=((_n_r_35530*_n_W_35294)+_n_xx_35531);
if((d::truth((d::at(this->_n_mat_35339,_n_k_35532)==_n_WATER_35306))||d::truth((d::at(this->_n_mat_35339,_n_k_35532)==_n_SKY_35305)))){d::check_cancel();continue;
}
double _n_dx_35533=((_n_xx_35531+0.5)-_n_x_35525);
double _n_dy_35534=((_n_r_35530+0.5)-_n_ly_35527);
double _n_d_35535=std::sqrt(((_n_dx_35533*_n_dx_35533)+(_n_dy_35534*_n_dy_35534)));
double _n_v_35536=([&](){auto _n_left_35832=(std::exp((-d::number(std::pow((_n_d_35535/0.6),2.0))))*1.3);auto _n_right_35833=(std::exp(((-d::number(_n_d_35535))/1.4))*0.12);return (_n_left_35832+_n_right_35833);})();
double _n_p_35537=((std::exp(((-d::number(_n_d_35535))/_n_halo_35528))*0.3)*d::at(this->_n_alb_35344,_n_k_35532));
(void)(((([&](){auto&& _n_array_35834=this->_n_sR_35340;auto _n_index_35835=_n_k_35532;auto _n_value_35836=(d::at(_n_array_35834,_n_index_35835)+(_n_v_35536+(_n_p_35537*d::at(_n_WASH_35304,0.0))));d::put(_n_array_35834,_n_index_35835,_n_value_35836);return _n_value_35836;})(),([&](){auto&& _n_array_35837=this->_n_sG_35341;auto _n_index_35838=_n_k_35532;auto _n_value_35839=(d::at(_n_array_35837,_n_index_35838)+((_n_v_35536*0.76)+(_n_p_35537*d::at(_n_WASH_35304,1.0))));d::put(_n_array_35837,_n_index_35838,_n_value_35839);return _n_value_35839;})()),([&](){auto&& _n_array_35840=this->_n_sB_35342;auto _n_index_35841=_n_k_35532;auto _n_value_35842=(d::at(_n_array_35840,_n_index_35841)+((_n_v_35536*0.42)+(_n_p_35537*d::at(_n_WASH_35304,2.0))));d::put(_n_array_35840,_n_index_35841,_n_value_35842);return _n_value_35842;})()));
}}
}}
double _n_wl_35538=_n_wlF_35325(_n_x_35525);
double _n_width_35539=(0.35+(0.35*_n_s_35526));
double _n_len_35540=(9.0*_n_s_35526);
{double _n_r_35541=std::floor(_n_wl_35538);
for(;d::truth((_n_r_35541<_n_H_35295));(void)((_n_r_35541++))){d::check_cancel();double _n_a_35542=(std::exp(((-d::number(((_n_r_35541+0.5)-_n_wl_35538)))/_n_len_35540))*0.5);
if(d::truth((_n_a_35542<0.01))){d::check_cancel();break;
}
{double _n_xx_35543=std::floor((_n_x_35525-3.0));
for(;d::truth((_n_xx_35543<(_n_x_35525+3.0)));(void)((_n_xx_35543++))){d::check_cancel();(void)(([&](){auto&& _n_array_35843=this->_n_sref_35352;auto _n_index_35844=((_n_r_35541*_n_W_35294)+_n_xx_35543);auto _n_value_35845=(d::at(_n_array_35843,_n_index_35844)+(_n_a_35542*std::exp((-d::number(std::pow((((_n_xx_35543+0.5)-_n_x_35525)/_n_width_35539),2.0))))));d::put(_n_array_35843,_n_index_35844,_n_value_35845);return _n_value_35845;})());
}}
}}
(void)((_n_x_35525=(_n_x_35525+([&](){auto _n_left_35846=(5.0+(10.0*_n_hash_35315(double(d::i32(_n_x_35525)|d::i32(0.0)),77.0)));auto _n_right_35847=d::maximum({0.8,_n_s_35526});return (_n_left_35846*_n_right_35847);})())));
}}
this->_n_refl_35353=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_35331)),d::Array<float,true>(size_t(this->_n_N_35331)),d::Array<float,true>(size_t(this->_n_N_35331))};
this->_n_mirK_35354=d::Array<int32_t,true>(size_t(this->_n_N_35331)).fill((-d::number(1.0)));
{double _n_r_35544=0.0;
for(;d::truth((_n_r_35544<_n_H_35295));(void)((_n_r_35544++))){d::check_cancel();{double _n_x_35545=0.0;
for(;d::truth((_n_x_35545<_n_W_35294));(void)((_n_x_35545++))){d::check_cancel();double _n_k_35546=((_n_r_35544*_n_W_35294)+_n_x_35545);
if(d::truth((d::at(this->_n_mat_35339,_n_k_35546)!=_n_WATER_35306))){d::check_cancel();continue;
}
double _n_wl_35547=_n_wlF_35325((_n_x_35545+0.5));
double _n_d_35548=((_n_r_35544+0.5)-_n_wl_35547);
double _n_ar_35549=0.0;
double _n_ag_35550=0.0;
double _n_ab_35551=0.0;
{double _n_o_35552=0.0;
for(;d::truth((_n_o_35552<2.0));(void)((_n_o_35552++))){d::check_cancel();double _n_ym_35553=(((_n_wl_35547-(_n_d_35548*0.85))-0.4)-(_n_o_35552*0.8));
double _n_cr_35554{};
double _n_cg_35555{};
double _n_cb_35556{};
double _n_q_35557=(d::truth((_n_ym_35553<0.0))?(-d::number(1.0)):((std::floor(_n_ym_35553)*_n_W_35294)+_n_x_35545));
double _n_i_35558=(_n_rampAt_35324(([&](){auto _n_argument_35848=(_n_x_35545+0.5);auto _n_argument_35849=d::maximum({0.0,(((_n_wl_35547-(_n_d_35548*0.36))-1.0)-(_n_o_35552*0.6))});return _n_skyHeat_35328(_n_argument_35848,_n_argument_35849);})())*3.0);
if(((d::truth((_n_q_35557<0.0))||d::truth((d::at(this->_n_mat_35339,_n_q_35557)==_n_WATER_35306)))||d::truth((d::at(this->_n_mat_35339,_n_q_35557)==_n_SKY_35305)))){d::check_cancel();(void)((((_n_cr_35554=d::at(_n_RT_35323,_n_i_35558)),(_n_cg_35555=d::at(_n_RT_35323,(_n_i_35558+1.0)))),(_n_cb_35556=d::at(_n_RT_35323,(_n_i_35558+2.0)))));
}else {d::check_cancel();(void)((((_n_cr_35554=(d::at(this->_n_sR_35340,_n_q_35557)+(d::at(_n_RT_35323,_n_i_35558)*0.22))),(_n_cg_35555=(d::at(this->_n_sG_35341,_n_q_35557)+(d::at(_n_RT_35323,(_n_i_35558+1.0))*0.22)))),(_n_cb_35556=(d::at(this->_n_sB_35342,_n_q_35557)+(d::at(_n_RT_35323,(_n_i_35558+2.0))*0.22)))));
if(d::truth((_n_o_35552==0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_35850=this->_n_mirK_35354;auto _n_index_35851=_n_k_35546;auto _n_value_35852=_n_q_35557;d::put(_n_array_35850,_n_index_35851,_n_value_35852);return _n_value_35852;})());
}
}
(void)((((_n_ar_35549=(_n_ar_35549+_n_cr_35554)),(_n_ag_35550=(_n_ag_35550+_n_cg_35555))),(_n_ab_35551=(_n_ab_35551+_n_cb_35556))));
}}
double _n_a_35559=(0.8-(0.4*_n_smooth_35319(_n_HZ_35296,_n_H_35295,_n_r_35544)));
(void)(((([&](){auto&& _n_array_35853=d::at(this->_n_refl_35353,0.0);auto _n_index_35854=_n_k_35546;auto _n_value_35855=((_n_ar_35549/2.0)*_n_a_35559);d::put(_n_array_35853,_n_index_35854,_n_value_35855);return _n_value_35855;})(),([&](){auto&& _n_array_35856=d::at(this->_n_refl_35353,1.0);auto _n_index_35857=_n_k_35546;auto _n_value_35858=((_n_ag_35550/2.0)*_n_a_35559);d::put(_n_array_35856,_n_index_35857,_n_value_35858);return _n_value_35858;})()),([&](){auto&& _n_array_35859=d::at(this->_n_refl_35353,2.0);auto _n_index_35860=_n_k_35546;auto _n_value_35861=((_n_ab_35551/2.0)*_n_a_35559);d::put(_n_array_35859,_n_index_35860,_n_value_35861);return _n_value_35861;})()));
}}
}}
this->_n_CW_35355=800.0;
this->_n_CH_35356=(_n_HZ_35296-6.0);
this->_n_cover_35357=d::Array<float,true>(size_t((this->_n_CW_35355*this->_n_CH_35356)));
this->_n_clit_35358=d::Array<float,true>(size_t((this->_n_CW_35355*this->_n_CH_35356)));
{double _n_r_35568=0.0;
for(;d::truth((_n_r_35568<this->_n_CH_35356));(void)((_n_r_35568++))){d::check_cancel();{double _n_x_35569=0.0;
for(;d::truth((_n_x_35569<this->_n_CW_35355));(void)((_n_x_35569++))){d::check_cancel();double _n_y_35570=(_n_r_35568+0.5);
double _n_d_35571=this->_n_density_35359(_n_x_35569,_n_y_35570);
(void)(([&](){auto&& _n_array_35862=this->_n_cover_35357;auto _n_index_35863=((_n_r_35568*this->_n_CW_35355)+_n_x_35569);auto _n_value_35864=_n_smooth_35319(0.47,0.62,_n_d_35571);d::put(_n_array_35862,_n_index_35863,_n_value_35864);return _n_value_35864;})());
(void)(([&](){auto&& _n_array_35865=this->_n_clit_35358;auto _n_index_35866=((_n_r_35568*this->_n_CW_35355)+_n_x_35569);auto _n_value_35867=_n_clamp_35318(([&](){auto _n_left_35868=(0.4+((_n_d_35571-this->_n_density_35359(_n_x_35569,(_n_y_35570+2.0)))*5.5));auto _n_right_35869=((this->_n_density_35359(_n_x_35569,(_n_y_35570-2.5))-_n_d_35571)*1.5);return (_n_left_35868+_n_right_35869);})());d::put(_n_array_35865,_n_index_35866,_n_value_35867);return _n_value_35867;})());
}}
}}
this->_n_diyas_35360=d::Array<d::Array<double,false>,false>{};
{double _n_i_35572=0.0;
for(;d::truth((_n_i_35572<34.0));(void)((_n_i_35572++))){d::check_cancel();double _n_q_35573=_n_hash_35315(_n_i_35572,61.0);
double _n_y_35574=((_n_HZ_35296+5.0)+(34.0*std::pow(_n_q_35573,1.3)));
(void)(this->_n_diyas_35360.push(d::Array<double,false>{((_n_hash_35315(_n_i_35572,62.0)*260.0)-30.0),_n_y_35574,(_n_hash_35315(_n_i_35572,63.0)*50.0),(0.6+(0.6*_n_hash_35315(_n_i_35572,64.0)))}));
}}
this->_n_dyn_35361=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_35331)),d::Array<float,true>(size_t(this->_n_N_35331)),d::Array<float,true>(size_t(this->_n_N_35331))};
this->_n_dref_35362=d::Array<float,true>(size_t(this->_n_N_35331));
this->_n_arm_35363=d::Array<uint8_t,true>(size_t(this->_n_N_35331));
this->_n_BS_35367=0.85;
_render=[=]( double _a0,std::shared_ptr<_n_Record_35714> _a1) mutable ->d::String{double _n_t_35618=_a0;
auto _n_binding_35872=(d::present(_a1)?_a1:([&](){auto _n_object_35871=std::make_shared<_n_Record_35714>();return _n_object_35871;})());
std::optional<d::Array<uint8_t,true>> _n_color_35619=_n_binding_35872->_p_color;
{
{double _n_c_35620=0.0;
for(;d::truth((_n_c_35620<3.0));(void)((_n_c_35620++))){d::check_cancel();(void)(d::at(this->_n_dyn_35361,_n_c_35620).fill(0.0));
}}
(void)(this->_n_dref_35362.fill(0.0));
(void)(this->_n_arm_35363.fill(0.0));
(void)(d::forEach(this->_n_aarti_35337,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_35873=_a0;
double _n_ax_35621=d::at(_n_binding_35873,0.0);
double _n_sw_35622=d::at(_n_binding_35873,1.0);
double _n_sl_35623=d::at(_n_binding_35873,2.0);
double _n_i_35624=_a1;
{
double _n_s_35625=_n_scF_35326(_n_ax_35621);
double _n_u_35626=(1.3*_n_s_35625);
double _n_base_35627=(_n_wlF_35325(_n_ax_35621)-(2.6*_n_s_35625));
double _n_ph_35628=((_n_t_35618*1.1)+(_n_i_35624*1.3));
double _n_fx_35629=((_n_ax_35621+(0.9*_n_u_35626))+((std::cos(_n_ph_35628)*1.1)*_n_u_35626));
double _n_fy_35630=((_n_base_35627-(7.2*_n_u_35626))+((std::sin(_n_ph_35628)*0.6)*_n_u_35626));
double _n_sx0_35631=(_n_ax_35621+(0.62*_n_u_35626));
double _n_sy0_35632=(_n_base_35627-(3.8*_n_u_35626));
double _n_ex_35633=(_n_fx_35629-_n_sx0_35631);
double _n_ey_35634=((_n_fy_35630+(0.6*_n_u_35626))-_n_sy0_35632);
double _n_el_35635=((_n_ex_35633*_n_ex_35633)+(_n_ey_35634*_n_ey_35634));
{double _n_r_35636=std::floor((d::minimum({_n_sy0_35632,_n_fy_35630})-1.0));
for(;d::truth((_n_r_35636<=(d::maximum({_n_sy0_35632,_n_fy_35630})+1.0)));(void)((_n_r_35636++))){d::check_cancel();{double _n_x_35637=std::floor((d::minimum({_n_sx0_35631,_n_fx_35629})-1.0));
for(;d::truth((_n_x_35637<=(d::maximum({_n_sx0_35631,_n_fx_35629})+1.0)));(void)((_n_x_35637++))){d::check_cancel();if((((d::truth((_n_x_35637<0.0))||d::truth((_n_x_35637>=_n_W_35294)))||d::truth((_n_r_35636<0.0)))||d::truth((_n_r_35636>=_n_H_35295)))){d::check_cancel();continue;
}
double _n_px_35638=((_n_x_35637+0.5)-_n_sx0_35631);
double _n_py_35639=((_n_r_35636+0.5)-_n_sy0_35632);
double _n_q_35640=_n_clamp_35318((((_n_px_35638*_n_ex_35633)+(_n_py_35639*_n_ey_35634))/_n_el_35635));
if(d::truth((d::hypot(std::initializer_list<double>{(_n_px_35638-(_n_q_35640*_n_ex_35633)),(_n_py_35639-(_n_q_35640*_n_ey_35634))})<(0.28*_n_u_35626)))){d::check_cancel();(void)(([&](){auto&& _n_array_35874=this->_n_arm_35363;auto _n_index_35875=((_n_r_35636*_n_W_35294)+_n_x_35637);auto _n_value_35876=1.0;d::put(_n_array_35874,_n_index_35875,_n_value_35876);return _n_value_35876;})());
}
}}
}}
double _n_fl_35641=(0.85+([&](){auto _n_left_35877=(0.15*std::sin(((_n_t_35618*13.0)+(_n_i_35624*5.0))));auto _n_right_35878=std::sin(((_n_t_35618*7.3)+_n_i_35624));return (_n_left_35877*_n_right_35878);})());
(void)(this->_n_addGlow_35364(_n_fx_35629,_n_fy_35630,(0.6*_n_u_35626),(1.7*_n_u_35626),_n_fl_35641));
(void)(this->_n_addWash_35365(_n_fx_35629,(_n_fy_35630+(2.0*_n_u_35626)),(7.5*_n_s_35625),(0.34*_n_fl_35641)));
(void)(([&](){auto _n_argument_35879=_n_fx_35629;auto _n_argument_35880=_n_wlF_35325(_n_fx_35629);auto _n_argument_35881=((0.8*_n_s_35625)*_n_sw_35622);auto _n_argument_35882=((15.0*_n_s_35625)*_n_sl_35623);auto _n_argument_35883=(0.75*_n_fl_35641);return this->_n_addStreak_35366(_n_argument_35879,_n_argument_35880,_n_argument_35881,_n_argument_35882,_n_argument_35883);})());

}
}));
for(auto &&_n_item_35884:this->_n_stepLamps_35351){d::check_cancel();auto _n_binding_35885=_n_item_35884;
double _n_k_35642=d::at(_n_binding_35885,0.0);
double _n_ph_35643=d::at(_n_binding_35885,1.0);
{
double _n_v_35644=(0.7+(0.3*std::sin(((_n_t_35618*5.0)+_n_ph_35643))));
(void)(((([&](){auto&& _n_array_35886=d::at(this->_n_dyn_35361,0.0);auto _n_index_35887=_n_k_35642;auto _n_value_35888=(d::at(_n_array_35886,_n_index_35887)+(_n_v_35644*d::at(_n_FLAME_35303,0.0)));d::put(_n_array_35886,_n_index_35887,_n_value_35888);return _n_value_35888;})(),([&](){auto&& _n_array_35889=d::at(this->_n_dyn_35361,1.0);auto _n_index_35890=_n_k_35642;auto _n_value_35891=(d::at(_n_array_35889,_n_index_35890)+((_n_v_35644*d::at(_n_FLAME_35303,1.0))*0.95));d::put(_n_array_35889,_n_index_35890,_n_value_35891);return _n_value_35891;})()),([&](){auto&& _n_array_35892=d::at(this->_n_dyn_35361,2.0);auto _n_index_35893=_n_k_35642;auto _n_value_35894=(d::at(_n_array_35892,_n_index_35893)+(_n_v_35644*d::at(_n_FLAME_35303,2.0)));d::put(_n_array_35892,_n_index_35893,_n_value_35894);return _n_value_35894;})()));

}
}
for(auto &&_n_item_35895:this->_n_diyas_35360){d::check_cancel();auto _n_binding_35896=_n_item_35895;
double _n_x0_35645=d::at(_n_binding_35896,0.0);
double _n_y_35646=d::at(_n_binding_35896,1.0);
double _n_ph_35647=d::at(_n_binding_35896,2.0);
double _n_sz_35648=d::at(_n_binding_35896,3.0);
{
double _n_near_35649=((_n_y_35646-_n_HZ_35296)/(_n_H_35295-_n_HZ_35296));
double _n_x_35650=(d::mod((d::mod((_n_x0_35645+(_n_t_35618*(0.25+(0.9*_n_near_35649)))),260.0)+260.0),260.0)-30.0);
if(((d::truth((_n_x_35650<(-d::number(3.0))))||d::truth((_n_x_35650>(_n_W_35294+3.0))))||d::truth((_n_y_35646<(_n_wlF_35325(_n_x_35650)+0.8))))){d::check_cancel();continue;
}
double _n_fl_35651=(0.8+(0.2*std::sin(((_n_t_35618*9.0)+_n_ph_35647))));
double _n_s_35652=((0.35+(0.9*_n_near_35649))*_n_sz_35648);
(void)(this->_n_addGlow_35364(_n_x_35650,(_n_y_35646-0.3),(0.45+(0.3*_n_s_35652)),(0.6+(1.2*_n_s_35652)),(_n_fl_35651*0.8)));
(void)(this->_n_addStreak_35366(_n_x_35650,(_n_y_35646+0.2),(0.3+(0.35*_n_s_35652)),(2.0+(5.0*_n_s_35652)),(0.6*_n_fl_35651)));

}
}
double _n_drift_35653=((_n_t_35618*0.9)+720.0);
double _n_bx_35654=(d::mod((d::mod(((159.0-(_n_t_35618*0.1))+24.0),250.0)+250.0),250.0)-24.0);
double _n_by_35655=(71.0+(std::sin((_n_t_35618*0.9))*0.15));
{double _n_r_35656=0.0;
for(;d::truth((_n_r_35656<_n_H_35295));(void)((_n_r_35656++))){d::check_cancel();double _n_y_35657=(_n_r_35656+0.5);
{double _n_x_35658=0.0;
for(;d::truth((_n_x_35658<_n_W_35294));(void)((_n_x_35658++))){d::check_cancel();double _n_k_35659=((_n_r_35656*_n_W_35294)+_n_x_35658);
double _n_m_35660=d::at(this->_n_mat_35339,_n_k_35659);
double _n_cr_35661=d::at(this->_n_sR_35340,_n_k_35659);
double _n_cg_35662=d::at(this->_n_sG_35341,_n_k_35659);
double _n_cb_35663=d::at(this->_n_sB_35342,_n_k_35659);
double _n_floor_35664=d::at(this->_n_flo_35343,_n_k_35659);
double _n_fade_35665=1.0;
bool _n_star_35666=false;
if(d::truth((_n_m_35660==_n_SKY_35305))){d::check_cancel();if(d::truth((_n_r_35656<this->_n_CH_35356))){d::check_cancel();double _n_sx_35667=(_n_x_35658+_n_drift_35653);
double _n_ix_35668=std::floor(_n_sx_35667);
double _n_fx_35669=(_n_sx_35667-_n_ix_35668);
double _n_i0_35670=((_n_r_35656*this->_n_CW_35355)+d::mod(_n_ix_35668,this->_n_CW_35355));
double _n_i1_35671=((_n_r_35656*this->_n_CW_35355)+d::mod((_n_ix_35668+1.0),this->_n_CW_35355));
double _n_c_35672=(d::at(this->_n_cover_35357,_n_i0_35670)+((d::at(this->_n_cover_35357,_n_i1_35671)-d::at(this->_n_cover_35357,_n_i0_35670))*_n_fx_35669));
if(d::truth((_n_c_35672>0.01))){d::check_cancel();double _n_l_35673=(d::at(this->_n_clit_35358,_n_i0_35670)+((d::at(this->_n_clit_35358,_n_i1_35671)-d::at(this->_n_clit_35358,_n_i0_35670))*_n_fx_35669));
double _n_lo_35674=_n_smooth_35319(12.0,30.0,_n_y_35657);
double _n_lit_35675=_n_mix_35320((0.3+(0.7*_n_l_35673)),((0.9*_n_l_35673)*_n_l_35673),_n_lo_35674);
double _n_i_35676=(_n_rampAt_35324(((0.56+(0.38*d::at(this->_n_warm_35346,_n_k_35659)))+(0.08*_n_l_35673)))*3.0);
double _n_kr_35677=_n_mix_35320(0.075,d::at(_n_RT_35323,_n_i_35676),_n_lit_35675);
double _n_kg_35678=_n_mix_35320(0.05,d::at(_n_RT_35323,(_n_i_35676+1.0)),_n_lit_35675);
double _n_kb_35679=_n_mix_35320(0.15,d::at(_n_RT_35323,(_n_i_35676+2.0)),_n_lit_35675);
(void)((((_n_cr_35661=_n_mix_35320(_n_cr_35661,_n_kr_35677,_n_c_35672)),(_n_cg_35662=_n_mix_35320(_n_cg_35662,_n_kg_35678,_n_c_35672))),(_n_cb_35663=_n_mix_35320(_n_cb_35663,_n_kb_35679,_n_c_35672))));
(void)((_n_floor_35664=_n_mix_35320(_n_floor_35664,0.06,(_n_c_35672*(1.0-_n_lit_35675)))));
}else {d::check_cancel();if((d::truth((_n_y_35657<24.0))&&d::truth((_n_hash_35315(_n_x_35658,((_n_r_35656*3.0)+11.0))>0.993)))){d::check_cancel();double _n_tw_35680=(0.4+(0.25*std::sin(([&](){auto _n_left_35897=(_n_t_35618*(1.3+(_n_hash_35315(_n_x_35658,_n_r_35656)*2.0)));auto _n_right_35898=(_n_hash_35315(_n_r_35656,_n_x_35658)*6.28);return (_n_left_35897+_n_right_35898);})())));
(void)((((_n_cr_35661=d::maximum({_n_cr_35661,(_n_tw_35680*0.9)})),(_n_cg_35662=d::maximum({_n_cg_35662,(_n_tw_35680*0.88)}))),(_n_cb_35663=d::maximum({_n_cb_35663,_n_tw_35680}))));
(void)((_n_star_35666=true));
}
}
}
}else {d::check_cancel();if(d::truth((_n_m_35660==_n_WATER_35306))){d::check_cancel();double _n_v_35681=((_n_y_35657-_n_HZ_35296)/(_n_H_35295-_n_HZ_35296));
double _n_w_35682=([&](){auto _n_left_35899=(0.6*_n_noise_35316(((_n_x_35658*0.05)+(_n_t_35618*0.08)),((_n_y_35657*0.45)-(_n_t_35618*0.45)),0.0));auto _n_right_35900=(0.4*_n_noise_35316(((_n_x_35658*0.16)-(_n_t_35618*0.15)),((_n_y_35657*0.95)-(_n_t_35618*0.9)),0.0));return (_n_left_35899+_n_right_35900);})();
double _n_swell_35683=(0.55+(0.9*_n_w_35682));
(void)((((_n_cr_35661=(0.035*_n_swell_35683)),(_n_cg_35662=(0.045*_n_swell_35683))),(_n_cb_35663=(0.12*_n_swell_35683))));
double _n_wob_35684=((_n_noise_35316(((_n_x_35658*0.04)+7.0),((_n_y_35657*0.3)-(_n_t_35618*0.6)),0.0)-0.5)*(1.2+(4.0*_n_v_35681)));
double _n_sx_35685=(_n_x_35658+_n_wob_35684);
if(d::truth((_n_sx_35685<0.0))){d::check_cancel();(void)((_n_sx_35685=0.0));
}
if(d::truth((_n_sx_35685>(_n_W_35294-1.001)))){d::check_cancel();(void)((_n_sx_35685=(_n_W_35294-1.001)));
}
double _n_i0_35686=((_n_r_35656*_n_W_35294)+double(d::i32(_n_sx_35685)|d::i32(0.0)));
double _n_fx_35687=(_n_sx_35685-double(d::i32(_n_sx_35685)|d::i32(0.0)));
double _n_dash_35688=([&](){auto _n_argument_35901=0.25;auto _n_argument_35902=0.75;auto _n_argument_35903=_n_noise_35316(((_n_x_35658*0.12)+3.0),((_n_y_35657*0.8)-(_n_t_35618*1.1)),0.0);return _n_smooth_35319(_n_argument_35901,_n_argument_35902,_n_argument_35903);})();
auto _n_ref_35689=[&]( d::Array<float,true> _a0) mutable ->double{d::Array<float,true> _n_a_35690=_a0;
return (d::at(_n_a_35690,_n_i0_35686)+((d::at(_n_a_35690,(_n_i0_35686+1.0))-d::at(_n_a_35690,_n_i0_35686))*_n_fx_35687));};
double _n_reach_35691=([&](){auto _n_left_35904=std::exp((-d::number(std::pow((((_n_x_35658+0.5)-d::at(_n_GLOW_35298,0.0))/15.0),2.0))));auto _n_right_35905=_n_smooth_35319((_n_HZ_35296+2.5),(_n_HZ_35296+5.5),_n_y_35657);return (_n_left_35904*_n_right_35905);})();
double _n_da_35692=_n_mix_35320((0.15+(1.1*_n_dash_35688)),(0.7+(0.5*_n_dash_35688)),_n_reach_35691);
(void)((((_n_cr_35661=(_n_cr_35661+(_n_ref_35689(d::at(this->_n_refl_35353,0.0))*_n_da_35692))),(_n_cg_35662=(_n_cg_35662+(_n_ref_35689(d::at(this->_n_refl_35353,1.0))*_n_da_35692)))),(_n_cb_35663=(_n_cb_35663+(_n_ref_35689(d::at(this->_n_refl_35353,2.0))*_n_da_35692)))));
double _n_q_35693=d::at(this->_n_mirK_35354,_n_k_35659);
if(d::truth((_n_q_35693>=0.0))){d::check_cancel();(void)((((_n_cr_35661=(_n_cr_35661+((d::at(d::at(this->_n_dyn_35361,0.0),_n_q_35693)*0.4)*_n_da_35692))),(_n_cg_35662=(_n_cg_35662+((d::at(d::at(this->_n_dyn_35361,1.0),_n_q_35693)*0.4)*_n_da_35692)))),(_n_cb_35663=(_n_cb_35663+((d::at(d::at(this->_n_dyn_35361,2.0),_n_q_35693)*0.4)*_n_da_35692)))));
}
double _n_fl_35694=(([&](){auto _n_left_35906=_n_ref_35689(this->_n_dref_35362);auto _n_right_35907=_n_ref_35689(this->_n_sref_35352);return (_n_left_35906+_n_right_35907);})()*(0.2+(1.1*_n_dash_35688)));
(void)((((_n_cr_35661=(_n_cr_35661+(_n_fl_35694*d::at(_n_FLAME_35303,0.0)))),(_n_cg_35662=(_n_cg_35662+(_n_fl_35694*d::at(_n_FLAME_35303,1.0))))),(_n_cb_35663=(_n_cb_35663+(_n_fl_35694*d::at(_n_FLAME_35303,2.0))))));
double _n_gw_35695=(1.3+((_n_y_35657-_n_HZ_35296)*0.15));
double _n_gx_35696=(((_n_x_35658+0.5)-d::at(_n_GLOW_35298,0.0))/_n_gw_35695);
if((d::truth((_n_gx_35696>(-d::number(3.0))))&&d::truth((_n_gx_35696<3.0)))){d::check_cancel();double _n_road_35697=([&](){auto _n_left_35908=std::exp(((-d::number(_n_gx_35696))*_n_gx_35696));auto _n_right_35909=std::exp(((-d::number((_n_y_35657-_n_HZ_35296)))/24.0));return (_n_left_35908*_n_right_35909);})();
double _n_rip_35698=_n_noise_35316((((_n_x_35658*0.45)+(_n_y_35657*0.1))-(_n_t_35618*0.3)),((_n_y_35657*1.3)-(_n_t_35618*1.6)),0.0);
double _n_glint_35699=(_n_smooth_35319(0.42,0.78,((0.45*_n_w_35682)+(0.55*_n_rip_35698)))*_n_road_35697);
(void)((((_n_cr_35661=(_n_cr_35661+((1.0*_n_glint_35699)+(0.12*_n_road_35697)))),(_n_cg_35662=(_n_cg_35662+((0.78*_n_glint_35699)+(0.07*_n_road_35697))))),(_n_cb_35663=(_n_cb_35663+((0.42*_n_glint_35699)+(0.04*_n_road_35697))))));
}
(void)((_n_floor_35664=0.12));
(void)((_n_fade_35665=_n_smooth_35319((_n_H_35295+4.0),(_n_H_35295-16.0),_n_y_35657)));
}
}
double _n_lx_35700=((_n_x_35658+0.5)-_n_bx_35654);
if((((d::truth((_n_lx_35700>(-d::number(14.0))))&&d::truth((_n_lx_35700<15.0)))&&d::truth((_n_r_35656>(_n_by_35655-11.0))))&&d::truth((_n_r_35656<(_n_by_35655+11.0))))){d::check_cancel();double _n_cov_35701=0.0;
double _n_rc_35702=0.0;
{double _n_sy2_35703=0.0;
for(;d::truth((_n_sy2_35703<2.0));(void)((_n_sy2_35703++))){d::check_cancel();{double _n_sx2_35704=0.0;
for(;d::truth((_n_sx2_35704<2.0));(void)((_n_sx2_35704++))){d::check_cancel();double _n_px_35705=(((_n_lx_35700-0.25)+(_n_sx2_35704*0.5))/this->_n_BS_35367);
double _n_py_35706=((_n_by_35655-((_n_r_35656+0.25)+(_n_sy2_35703*0.5)))/this->_n_BS_35367);
(void)((_n_cov_35701=(_n_cov_35701+this->_n_boatAt_35368(_n_px_35705,_n_py_35706))));
if(d::truth((_n_m_35660==_n_WATER_35306))){d::check_cancel();(void)((_n_rc_35702=(_n_rc_35702+this->_n_boatAt_35368(_n_px_35705,((-d::number(_n_py_35706))*0.9)))));
}
}}
}}
(void)(((_n_cov_35701=(_n_cov_35701/4.0)),(_n_rc_35702=(_n_rc_35702/4.0))));
if(d::truth((_n_cov_35701>0.0))){d::check_cancel();(void)((((_n_cr_35661=_n_mix_35320(_n_cr_35661,0.035,_n_cov_35701)),(_n_cg_35662=_n_mix_35320(_n_cg_35662,0.022,_n_cov_35701))),(_n_cb_35663=_n_mix_35320(_n_cb_35663,0.035,_n_cov_35701))));
(void)(((_n_floor_35664=_n_mix_35320(_n_floor_35664,0.02,_n_cov_35701)),(_n_star_35666=false)));
}else {d::check_cancel();if(d::truth((_n_rc_35702>0.0))){d::check_cancel();(void)((((_n_cr_35661=(_n_cr_35661*(1.0-(0.8*_n_rc_35702)))),(_n_cg_35662=(_n_cg_35662*(1.0-(0.8*_n_rc_35702))))),(_n_cb_35663=(_n_cb_35663*(1.0-(0.75*_n_rc_35702))))));
}
}
}
if(d::truth(d::at(this->_n_arm_35363,_n_k_35659))){d::check_cancel();(void)(((((_n_cr_35661=(0.035+(d::at(d::at(this->_n_dyn_35361,0.0),_n_k_35659)*0.12))),(_n_cg_35662=(0.022+(d::at(d::at(this->_n_dyn_35361,1.0),_n_k_35659)*0.12)))),(_n_cb_35663=(0.035+(d::at(d::at(this->_n_dyn_35361,2.0),_n_k_35659)*0.12)))),(_n_floor_35664=0.02)));
}else {d::check_cancel();(void)((((_n_cr_35661=(_n_cr_35661+d::at(d::at(this->_n_dyn_35361,0.0),_n_k_35659))),(_n_cg_35662=(_n_cg_35662+d::at(d::at(this->_n_dyn_35361,1.0),_n_k_35659)))),(_n_cb_35663=(_n_cb_35663+d::at(d::at(this->_n_dyn_35361,2.0),_n_k_35659)))));
}
double _n_peak_35707=d::maximum({_n_cr_35661,_n_cg_35662,_n_cb_35663,0.0001});
double _n_level_35708=(_n_clamp_35318((_n_floor_35664+(((1.0-_n_floor_35664)*std::pow(_n_peak_35707,0.72))*0.95)))*_n_fade_35665);
double _n_step_35709=([&](){auto _n_argument_35910=0.0;auto _n_argument_35911=([&](){auto _n_argument_35912=3.0;auto _n_argument_35913=d::round(((_n_level_35708*3.0)+d::at(_n_BAYER_35302,((double(d::i32(_n_r_35656)&d::i32(3.0))*4.0)+double(d::i32(_n_x_35658)&d::i32(3.0))))));return d::minimum({_n_argument_35912,_n_argument_35913});})();return d::maximum({_n_argument_35910,_n_argument_35911});})();
(void)(([&](){auto&& _n_array_35914=this->_n_out_35332;auto _n_index_35915=_n_k_35659;auto _n_value_35916=d::at(_n_DOTS_35299,_n_step_35709);d::put(_n_array_35914,_n_index_35915,_n_value_35916);return _n_value_35916;})());
if(d::truth(_n_color_35619)){d::check_cancel();if(d::truth(_n_star_35666)){d::check_cancel();(void)(([&](){auto&& _n_array_35917=d::read(_n_color_35619);auto _n_index_35918=_n_k_35659;auto _n_value_35919=this->_n_STAR_35330;d::put(_n_array_35917,_n_index_35918,_n_value_35919);return _n_value_35919;})());
}else {d::check_cancel();double _n_want_35710=(d::truth(_n_step_35709)?d::minimum({1.0,((_n_level_35708+0.06)/d::at(_n_COVER_35300,_n_step_35709))}):0.0);
double _n_s_35711=d::minimum({d::at(_n_LIFT_35301,_n_step_35709),((0.3+(0.7*_n_want_35710))/_n_peak_35707)});
(void)(([&](){auto&& _n_array_35920=d::read(_n_color_35619);auto _n_index_35921=_n_k_35659;auto _n_value_35922=([&](){auto _n_argument_35923=_n_clamp_35318((_n_cr_35661*_n_s_35711));auto _n_argument_35924=_n_clamp_35318((_n_cg_35662*_n_s_35711));auto _n_argument_35925=_n_clamp_35318((_n_cb_35663*_n_s_35711));return this->_n_nearest_35334(_n_argument_35923,_n_argument_35924,_n_argument_35925);})();d::put(_n_array_35920,_n_index_35921,_n_value_35922);return _n_value_35922;})());
}
}
}}
}}
d::Array<d::String,false> _n_lines_35712=d::Array<d::String,false>{};
{double _n_r_35713=0.0;
for(;d::truth((_n_r_35713<_n_H_35295));(void)((_n_r_35713++))){d::check_cancel();(void)(_n_lines_35712.push(d::join(this->_n_out_35332.slice((_n_r_35713*_n_W_35294),((_n_r_35713+1.0)*_n_W_35294)),d::String(u""))));
}}
return d::join(_n_lines_35712,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("varanasi-ghats").cols)*ascii::catalog_meta("varanasi-ghats").rows);auto _env=std::make_shared<_n_Record_35714>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &varanasi_ghats_meta(){return catalog_meta("varanasi-ghats");}
std::unique_ptr<Piece> make_varanasi_ghats(const AsciiPieceOptions &o){return std::make_unique<Native_varanasi_ghats>(o);}
}
