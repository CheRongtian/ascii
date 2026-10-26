// Direct, statically typed C++ from src/pieces/varanasi-ghats.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35294;
struct _n_Record_35715;
struct _n_Record_35294{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_35294> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35294>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_35715{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35715> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35715>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_35316(double _a0,double _a1);
double _n_noise_35317(double _a0,double _a1,double _a2);
double _n_fbm_35318(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_35319(double _a0);
double _n_smooth_35320(double _a0,double _a1,double _a2);
double _n_mix_35321(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_35322(d::String _a0);
double _n_rampAt_35325(double _a0);
double _n_wlF_35326(double _a0);
double _n_scF_35327(double _a0);
double _n_stepTopF_35328(double _a0);
double _n_skyHeat_35329(double _a0,double _a1);
std::shared_ptr<_n_Record_35294> _n_meta_35293=[](){return ([&](){auto _n_object_35718=std::make_shared<_n_Record_35294>();_n_object_35718->_p_name=d::String(u"varanasi ghats");_n_object_35718->_p_category=d::String(u"scenes");_n_object_35718->_p_note=d::String(u"dusk aarti on the ganga, lamps on the steps and diyas on the water");_n_object_35718->_p_cols=200.0;_n_object_35718->_p_rows=100.0;_n_object_35718->_p_cell=1.0;_n_object_35718->_p_fps=15.0;_n_object_35718->_p_ground=d::String(u"#0b0812");_n_object_35718->_p_palette=d::Array<d::String,false>{d::String(u"#141230"),d::String(u"#1d1a42"),d::String(u"#272257"),d::String(u"#332b6a"),d::String(u"#45357a"),d::String(u"#5a4388"),d::String(u"#7259a8"),d::String(u"#6d3a73"),d::String(u"#8a4677"),d::String(u"#a8527a"),d::String(u"#c4607a"),d::String(u"#d97a92"),d::String(u"#b866a0"),d::String(u"#9a68c8"),d::String(u"#c868b0"),d::String(u"#e8707a"),d::String(u"#d9705f"),d::String(u"#e88552"),d::String(u"#f29f4a"),d::String(u"#f8b85a"),d::String(u"#fcd07a"),d::String(u"#ffe3a6"),d::String(u"#fff2d2"),d::String(u"#1a1220"),d::String(u"#24182a"),d::String(u"#301f33"),d::String(u"#3f2838"),d::String(u"#523340"),d::String(u"#3a2c4c"),d::String(u"#4d3a64"),d::String(u"#5e3524"),d::String(u"#7d4527"),d::String(u"#a0582a"),d::String(u"#c06e2e"),d::String(u"#d98a46"),d::String(u"#ffffff"),d::String(u"#fff6d8"),d::String(u"#ffd860"),d::String(u"#ff9f2a"),d::String(u"#f06a1e"),d::String(u"#c8401a"),d::String(u"#8a2a16"),d::String(u"#0f1a2c"),d::String(u"#162540"),d::String(u"#20325a"),d::String(u"#d6d4ee")};return _n_object_35718;})();}();
const double _n_W_35295=[](){return 200.0;}();
const double _n_H_35296=[](){return 100.0;}();
const double _n_HZ_35297=[](){return 60.0;}();
const double _n_END_35298=[](){return 150.0;}();
d::Array<double,false> _n_GLOW_35299=[](){return d::Array<double,false>{156.0,(_n_HZ_35297-1.5)};}();
const d::String _n_DOTS_35300=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_35301=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_LIFT_35302=[](){return d::Array<double,false>{0.0,2.5,1.7,1.35};}();
d::Array<double,false> _n_BAYER_35303=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_35370=_a0;
return ((_n_v_35370/16.0)-0.47);});}();
d::Array<double,false> _n_FLAME_35304=[](){return d::Array<double,false>{1.0,0.62,0.22};}();
d::Array<double,false> _n_WASH_35305=[](){return d::Array<double,false>{1.0,0.5,0.2};}();
const double _n_SKY_35306=[](){return 0.0;}();
const double _n_WATER_35307=[](){return 1.0;}();
const double _n_BANK_35308=[](){return 2.0;}();
const double _n_STEPS_35309=[](){return 3.0;}();
const double _n_BLD_35310=[](){return 4.0;}();
const double _n_SPIRE_35311=[](){return 5.0;}();
const double _n_UMB_35312=[](){return 6.0;}();
const double _n_FIG_35313=[](){return 7.0;}();
const double _n_PLAT_35314=[](){return 8.0;}();
d::Array<std::array<double,4>,false> _n_RAMP_35315=[](){return d::Array<std::array<double,4>,false>{std::array<double,4>{0.0,0.085,0.07,0.24},std::array<double,4>{0.14,0.13,0.1,0.34},std::array<double,4>{0.28,0.22,0.14,0.44},std::array<double,4>{0.42,0.34,0.17,0.48},std::array<double,4>{0.52,0.47,0.21,0.47},std::array<double,4>{0.62,0.6,0.26,0.42},std::array<double,4>{0.7,0.7,0.31,0.36},std::array<double,4>{0.78,0.8,0.39,0.3},std::array<double,4>{0.86,0.88,0.5,0.26},std::array<double,4>{0.92,0.95,0.65,0.32},std::array<double,4>{0.97,1.0,0.8,0.48},std::array<double,4>{1.0,1.0,0.92,0.7}};}();
const double _n_RL_35323=[](){return 256.0;}();
d::Array<float,true> _n_RT_35324=[](){return d::Array<float,true>(size_t(((_n_RL_35323+1.0)*3.0)));}();
const bool _n_init_35719=[](){{double _n_i_35408=0.0;
for(;d::truth((_n_i_35408<=_n_RL_35323));(void)((_n_i_35408++))){d::check_cancel();double _n_h_35409=(_n_i_35408/_n_RL_35323);
double _n_j_35410=0.0;
while((d::truth((_n_j_35410<(double(_n_RAMP_35315.size())-2.0)))&&d::truth((_n_h_35409>d::at(d::at(_n_RAMP_35315,(_n_j_35410+1.0)),0.0))))){d::check_cancel();(void)((_n_j_35410++));
}
auto _n_binding_35720=d::at(_n_RAMP_35315,_n_j_35410);
double _n_h0_35411=d::at(_n_binding_35720,0.0);
double _n_r0_35412=d::at(_n_binding_35720,1.0);
double _n_g0_35413=d::at(_n_binding_35720,2.0);
double _n_b0_35414=d::at(_n_binding_35720,3.0);
auto _n_binding_35721=d::at(_n_RAMP_35315,(_n_j_35410+1.0));
double _n_h1_35415=d::at(_n_binding_35721,0.0);
double _n_r1_35416=d::at(_n_binding_35721,1.0);
double _n_g1_35417=d::at(_n_binding_35721,2.0);
double _n_b1_35418=d::at(_n_binding_35721,3.0);
double _n_k_35419=_n_clamp_35319(((_n_h_35409-_n_h0_35411)/(_n_h1_35415-_n_h0_35411)));
(void)(((([&](){auto&& _n_array_35722=_n_RT_35324;auto _n_index_35723=(_n_i_35408*3.0);auto _n_value_35724=_n_mix_35321(_n_r0_35412,_n_r1_35416,_n_k_35419);d::put(_n_array_35722,_n_index_35723,_n_value_35724);return _n_value_35724;})(),([&](){auto&& _n_array_35725=_n_RT_35324;auto _n_index_35726=((_n_i_35408*3.0)+1.0);auto _n_value_35727=_n_mix_35321(_n_g0_35413,_n_g1_35417,_n_k_35419);d::put(_n_array_35725,_n_index_35726,_n_value_35727);return _n_value_35727;})()),([&](){auto&& _n_array_35728=_n_RT_35324;auto _n_index_35729=((_n_i_35408*3.0)+2.0);auto _n_value_35730=_n_mix_35321(_n_b0_35414,_n_b1_35418,_n_k_35419);d::put(_n_array_35728,_n_index_35729,_n_value_35730);return _n_value_35730;})()));
}}
return true;}();
double _n_hash_35316(double _a0,double _a1){double _n_x_35371=_a0;
double _n_y_35372=_a1;
{
double _n_h_35373=([&](){auto _n_left_35731=d::imul(double(d::i32(_n_x_35371)|d::i32(0.0)),374761393.0);auto _n_right_35732=d::imul(double(d::i32(_n_y_35372)|d::i32(0.0)),668265263.0);return (_n_left_35731+_n_right_35732);})();
(void)((_n_h_35373=d::imul(double(d::i32(_n_h_35373)^d::i32(double(d::u32(_n_h_35373)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_35373)^d::i32(double(d::u32(_n_h_35373)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_35317(double _a0,double _a1,double _a2){double _n_x_35374=_a0;
double _n_y_35375=_a1;
double _n_period_35376=_a2;
{
double _n_xi_35377=std::floor(_n_x_35374);
double _n_yi_35378=std::floor(_n_y_35375);
double _n_fx_35379=(_n_x_35374-_n_xi_35377);
double _n_fy_35380=(_n_y_35375-_n_yi_35378);
double _n_u_35381=((_n_fx_35379*_n_fx_35379)*(3.0-(2.0*_n_fx_35379)));
double _n_v_35382=((_n_fy_35380*_n_fy_35380)*(3.0-(2.0*_n_fy_35380)));
double _n_x0_35383=_n_xi_35377;
double _n_x1_35384=(_n_xi_35377+1.0);
if(d::truth(_n_period_35376)){d::check_cancel();(void)((_n_x0_35383=d::mod((d::mod(_n_xi_35377,_n_period_35376)+_n_period_35376),_n_period_35376)));
(void)((_n_x1_35384=d::mod((_n_x0_35383+1.0),_n_period_35376)));
}
double _n_a_35385=_n_hash_35316(_n_x0_35383,_n_yi_35378);
double _n_b_35386=_n_hash_35316(_n_x1_35384,_n_yi_35378);
double _n_c_35387=_n_hash_35316(_n_x0_35383,(_n_yi_35378+1.0));
double _n_d_35388=_n_hash_35316(_n_x1_35384,(_n_yi_35378+1.0));
return (((_n_a_35385+((_n_b_35386-_n_a_35385)*_n_u_35381))+((_n_c_35387-_n_a_35385)*_n_v_35382))+(((((_n_a_35385-_n_b_35386)-_n_c_35387)+_n_d_35388)*_n_u_35381)*_n_v_35382));

}
}

double _n_fbm_35318(double _a0,double _a1,double _a2,double _a3){double _n_x_35389=_a0;
double _n_y_35390=_a1;
double _n_octaves_35391=_a2;
double _n_period_35392=_a3;
{
double _n_s_35393=0.0;
double _n_n_35394=0.0;
double _n_amp_35395=0.5;
double _n_f_35396=1.0;
{double _n_i_35397=0.0;
for(;d::truth((_n_i_35397<_n_octaves_35391));(void)((_n_i_35397++))){d::check_cancel();(void)((_n_s_35393=(_n_s_35393+(_n_amp_35395*_n_noise_35317((_n_x_35389*_n_f_35396),(_n_y_35390*_n_f_35396),(_n_period_35392*_n_f_35396))))));
(void)((_n_n_35394=(_n_n_35394+_n_amp_35395)));
(void)((_n_amp_35395=(_n_amp_35395*0.5)));
(void)((_n_f_35396=(_n_f_35396*2.0)));
}}
return (_n_s_35393/_n_n_35394);

}
}

double _n_clamp_35319(double _a0){double _n_v_35398=_a0;
return (d::truth((_n_v_35398<0.0))?0.0:(d::truth((_n_v_35398>1.0))?1.0:_n_v_35398));}

double _n_smooth_35320(double _a0,double _a1,double _a2){double _n_a_35399=_a0;
double _n_b_35400=_a1;
double _n_v_35401=_a2;
{
double _n_k_35402=_n_clamp_35319(((_n_v_35401-_n_a_35399)/(_n_b_35400-_n_a_35399)));
return ((_n_k_35402*_n_k_35402)*(3.0-(2.0*_n_k_35402)));

}
}

double _n_mix_35321(double _a0,double _a1,double _a2){double _n_a_35403=_a0;
double _n_b_35404=_a1;
double _n_k_35405=_a2;
return (_n_a_35403+((_n_b_35404-_n_a_35403)*_n_k_35405));}

d::Array<double,false> _n_hex_35322(d::String _a0){d::String _n_s_35406=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_35407=_a0;
return (([&](){auto _n_argument_35733=d::slice(_n_s_35406,_n_i_35407,(_n_i_35407+2.0));auto _n_argument_35734=16.0;return d::parseInt(_n_argument_35733,_n_argument_35734);})()/255.0);});}

double _n_rampAt_35325(double _a0){double _n_h_35420=_a0;
return double(d::i32((((d::truth((_n_h_35420<0.0))?0.0:(d::truth((_n_h_35420>1.0))?1.0:_n_h_35420))*_n_RL_35323)+0.5))|d::i32(0.0));}

double _n_wlF_35326(double _a0){double _n_x_35421=_a0;
return (d::truth((_n_x_35421<_n_END_35298))?((_n_HZ_35297+0.5)+(20.0*std::pow((1.0-(_n_x_35421/_n_END_35298)),1.6))):(_n_HZ_35297+0.5));}

double _n_scF_35327(double _a0){double _n_x_35422=_a0;
return (0.45+(1.75*([&](){auto _n_argument_35735=d::maximum({0.0,(1.0-(_n_x_35422/_n_END_35298))});auto _n_argument_35736=1.3;return std::pow(_n_argument_35735,_n_argument_35736);})()));}

double _n_stepTopF_35328(double _a0){double _n_x_35423=_a0;
return ([&](){auto _n_left_35737=_n_wlF_35326(_n_x_35423);auto _n_right_35738=([&](){auto _n_left_35739=(9.5*_n_scF_35327(_n_x_35423));auto _n_right_35740=(0.3+(0.7*_n_smooth_35320(_n_END_35298,(_n_END_35298-16.0),_n_x_35423)));return (_n_left_35739*_n_right_35740);})();return (_n_left_35737-_n_right_35738);})();}

double _n_skyHeat_35329(double _a0,double _a1){double _n_x_35424=_a0;
double _n_y_35425=_a1;
{
double _n_v_35426=_n_clamp_35319((_n_y_35425/_n_HZ_35297));
double _n_dx_35427=std::fabs((_n_x_35424-d::at(_n_GLOW_35299,0.0)));
double _n_dy_35428=std::fabs((d::at(_n_GLOW_35299,1.0)-_n_y_35425));
double _n_wide_35429=(0.46*std::exp((((-d::number(_n_dx_35427))/55.0)-(_n_dy_35428/23.0))));
double _n_core_35430=(0.24*std::exp((-d::number(std::sqrt((std::pow((_n_dx_35427/13.0),2.0)+std::pow((_n_dy_35428/4.5),2.0)))))));
return (((0.06+((0.42*_n_v_35426)*_n_v_35426))+_n_wide_35429)+_n_core_35430);

}
}

struct Native_varanasi_ghats final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_35330{};
double _n_STAR_35331{};
double _n_N_35332{};
d::Array<d::String,false> _n_out_35333{};
d::Array<uint8_t,true> _n_lut_35334{};
d::Array<std::array<double,4>,false> _n_blds_35336{};
d::Array<std::array<double,3>,false> _n_spires_35337{};
d::Array<std::array<double,3>,false> _n_aarti_35338{};
d::Array<double,false> _n_umbs_35339{};
d::Array<uint8_t,true> _n_mat_35340{};
d::Array<float,true> _n_sR_35341{};
d::Array<float,true> _n_sG_35342{};
d::Array<float,true> _n_sB_35343{};
d::Array<float,true> _n_flo_35344{};
d::Array<float,true> _n_alb_35345{};
d::Array<float,true> _n_skyH_35346{};
d::Array<float,true> _n_warm_35347{};
d::Array<float,true> _n_rimR_35349{};
d::Array<float,true> _n_rimG_35350{};
d::Array<float,true> _n_rimB_35351{};
d::Array<std::array<double,2>,false> _n_stepLamps_35352{};
d::Array<float,true> _n_sref_35353{};
d::Array<d::Array<float,true>,false> _n_refl_35354{};
d::Array<int32_t,true> _n_mirK_35355{};
double _n_CW_35356{};
double _n_CH_35357{};
d::Array<float,true> _n_cover_35358{};
d::Array<float,true> _n_clit_35359{};
d::Array<std::array<double,4>,false> _n_diyas_35361{};
d::Array<d::Array<float,true>,false> _n_dyn_35362{};
d::Array<float,true> _n_dref_35363{};
d::Array<uint8_t,true> _n_arm_35364{};
double _n_BS_35368{};
std::function<d::String(double,std::shared_ptr<_n_Record_35715>)> _render;
double _n_nearest_35335(double _a0,double _a1,double _a2){double _n_r_35431=_a0;
double _n_g_35432=_a1;
double _n_b_35433=_a2;
{
double _n_k_35434=([&](){auto _n_left_35927=([&](){auto _n_left_35929=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_35431*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_35930=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_35432*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_35929)|d::i32(_n_right_35930));})();auto _n_right_35928=d::minimum({31.0,double(d::i32((_n_b_35433*31.99))|d::i32(0.0))});return double(d::i32(_n_left_35927)|d::i32(_n_right_35928));})();
if(d::truth((d::at(this->_n_lut_35334,_n_k_35434)!=255.0))){d::check_cancel();return d::at(this->_n_lut_35334,_n_k_35434);
}
double _n_best_35435=0.0;
double _n_bd_35436=1000000000.0;
{double _n_i_35437=0.0;
for(;d::truth((_n_i_35437<this->_n_STAR_35331));(void)((_n_i_35437++))){d::check_cancel();double _n_dr_35438=(d::at(d::at(this->_n_P_35330,_n_i_35437),0.0)-_n_r_35431);
double _n_dg_35439=(d::at(d::at(this->_n_P_35330,_n_i_35437),1.0)-_n_g_35432);
double _n_db_35440=(d::at(d::at(this->_n_P_35330,_n_i_35437),2.0)-_n_b_35433);
double _n_d_35441=((((0.3*_n_dr_35438)*_n_dr_35438)+((0.5*_n_dg_35439)*_n_dg_35439))+((0.2*_n_db_35440)*_n_db_35440));
if(d::truth((_n_d_35441<_n_bd_35436))){d::check_cancel();(void)(((_n_bd_35436=_n_d_35441),(_n_best_35435=_n_i_35437)));
}
}}
return ([&](){auto&& _n_array_35931=this->_n_lut_35334;auto _n_index_35932=_n_k_35434;auto _n_value_35933=_n_best_35435;d::put(_n_array_35931,_n_index_35932,_n_value_35933);return _n_value_35933;})();

}
}

double _n_roofOf_35348(double _a0){double _n_x_35446=_a0;
{
for(auto &&_n_item_35934:this->_n_blds_35336){d::check_cancel();auto _n_binding_35935=_n_item_35934;
double _n_x0_35447=d::at(_n_binding_35935,0.0);
double _n_x1_35448=d::at(_n_binding_35935,1.0);
double _n_h_35449=d::at(_n_binding_35935,2.0);
if((d::truth((_n_x_35446>=_n_x0_35447))&&d::truth((_n_x_35446<_n_x1_35448)))){d::check_cancel();return ([&](){auto _n_left_35936=_n_stepTopF_35328(_n_x_35446);auto _n_right_35937=(_n_h_35449*_n_scF_35327(_n_x_35446));return (_n_left_35936-_n_right_35937);})();
}
}
return _n_stepTopF_35328(_n_x_35446);

}
}

double _n_density_35360(double _a0,double _a1){double _n_x_35561=_a0;
double _n_y_35562=_a1;
{
double _n_q_35563=_n_fbm_35318((_n_x_35561*0.005),(_n_y_35562*0.03),3.0,4.0);
double _n_d_35564=_n_fbm_35318(((_n_x_35561*0.0125)+(_n_q_35563*1.8)),((_n_y_35562*0.09)+(_n_q_35563*0.9)),5.0,10.0);
double _n_env_35565=([&](){auto _n_left_35938=(0.03*std::exp((-d::number(std::pow(((_n_y_35562-13.0)/4.0),2.0)))));auto _n_right_35939=(0.1*std::exp((-d::number(std::pow(((_n_y_35562-29.0)/5.5),2.0)))));return (_n_left_35938+_n_right_35939);})();
double _n_c_35566=(46.5+(3.0*(_n_fbm_35318((_n_x_35561*0.01),9.5,2.0,8.0)-0.5)));
double _n_th_35567=(1.0+(0.9*_n_fbm_35318((_n_x_35561*0.05),3.5,2.0,40.0)));
double _n_streak_35568=([&](){auto _n_left_35940=([&](){auto _n_left_35942=std::exp((-d::number(std::pow(((_n_y_35562-_n_c_35566)/_n_th_35567),2.0))));auto _n_right_35943=([&](){auto _n_argument_35944=0.42;auto _n_argument_35945=0.6;auto _n_argument_35946=_n_fbm_35318((_n_x_35561*0.0125),21.5,3.0,10.0);return _n_smooth_35320(_n_argument_35944,_n_argument_35945,_n_argument_35946);})();return (_n_left_35942*_n_right_35943);})();auto _n_right_35941=(0.75+(0.5*_n_fbm_35318((_n_x_35561*0.05),(_n_y_35562*0.3),3.0,40.0)));return (_n_left_35940*_n_right_35941);})();
return d::maximum({((_n_d_35564+_n_env_35565)-0.08),(0.36+(0.3*_n_streak_35568))});

}
}

void _n_addGlow_35365(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_35576=_a0;
double _n_fy_35577=_a1;
double _n_core_35578=_a2;
double _n_halo_35579=_a3;
double _n_amp_35580=_a4;
{
double _n_R_35581=std::ceil((_n_halo_35579*3.2));
{double _n_r_35582=([&](){auto _n_argument_35947=0.0;auto _n_argument_35948=std::floor((_n_fy_35577-_n_R_35581));return d::maximum({_n_argument_35947,_n_argument_35948});})();
for(;d::truth((_n_r_35582<d::minimum({_n_H_35296,(_n_fy_35577+_n_R_35581)})));(void)((_n_r_35582++))){d::check_cancel();{double _n_x_35583=([&](){auto _n_argument_35949=0.0;auto _n_argument_35950=std::floor((_n_fx_35576-_n_R_35581));return d::maximum({_n_argument_35949,_n_argument_35950});})();
for(;d::truth((_n_x_35583<d::minimum({_n_W_35295,(_n_fx_35576+_n_R_35581)})));(void)((_n_x_35583++))){d::check_cancel();double _n_k_35584=((_n_r_35582*_n_W_35295)+_n_x_35583);
double _n_dx_35585=((_n_x_35583+0.5)-_n_fx_35576);
double _n_dy_35586=(((_n_r_35582+0.5)-_n_fy_35577)*0.85);
double _n_d_35587=std::sqrt(((_n_dx_35585*_n_dx_35585)+(_n_dy_35586*_n_dy_35586)));
double _n_am_35588=(d::truth((d::at(this->_n_mat_35340,_n_k_35584)==_n_FIG_35313))?(_n_amp_35580*0.15):_n_amp_35580);
double _n_c_35589=((std::exp((-d::number(std::pow((_n_d_35587/_n_core_35578),2.0))))*1.6)*_n_am_35588);
double _n_v_35590=((std::exp(((-d::number(_n_d_35587))/_n_halo_35579))*0.35)*_n_am_35588);
(void)(((([&](){auto&& _n_array_35951=d::at(this->_n_dyn_35362,0.0);auto _n_index_35952=_n_k_35584;auto _n_value_35953=(d::at(_n_array_35951,_n_index_35952)+(_n_c_35589+(_n_v_35590*d::at(_n_FLAME_35304,0.0))));d::put(_n_array_35951,_n_index_35952,_n_value_35953);return _n_value_35953;})(),([&](){auto&& _n_array_35954=d::at(this->_n_dyn_35362,1.0);auto _n_index_35955=_n_k_35584;auto _n_value_35956=(d::at(_n_array_35954,_n_index_35955)+((_n_c_35589*0.86)+(_n_v_35590*d::at(_n_FLAME_35304,1.0))));d::put(_n_array_35954,_n_index_35955,_n_value_35956);return _n_value_35956;})()),([&](){auto&& _n_array_35957=d::at(this->_n_dyn_35362,2.0);auto _n_index_35958=_n_k_35584;auto _n_value_35959=(d::at(_n_array_35957,_n_index_35958)+((_n_c_35589*0.55)+(_n_v_35590*d::at(_n_FLAME_35304,2.0))));d::put(_n_array_35957,_n_index_35958,_n_value_35959);return _n_value_35959;})()));
}}
}}

}
}

void _n_addWash_35366(double _a0,double _a1,double _a2,double _a3){double _n_fx_35591=_a0;
double _n_fy_35592=_a1;
double _n_halo_35593=_a2;
double _n_amp_35594=_a3;
{
double _n_R_35595=std::ceil((_n_halo_35593*2.6));
{double _n_r_35596=([&](){auto _n_argument_35960=0.0;auto _n_argument_35961=std::floor((_n_fy_35592-_n_R_35595));return d::maximum({_n_argument_35960,_n_argument_35961});})();
for(;d::truth((_n_r_35596<d::minimum({_n_H_35296,(_n_fy_35592+_n_R_35595)})));(void)((_n_r_35596++))){d::check_cancel();{double _n_x_35597=([&](){auto _n_argument_35962=0.0;auto _n_argument_35963=std::floor((_n_fx_35591-_n_R_35595));return d::maximum({_n_argument_35962,_n_argument_35963});})();
for(;d::truth((_n_x_35597<d::minimum({_n_W_35295,(_n_fx_35591+_n_R_35595)})));(void)((_n_x_35597++))){d::check_cancel();double _n_k_35598=((_n_r_35596*_n_W_35295)+_n_x_35597);
double _n_a_35599=d::at(this->_n_alb_35345,_n_k_35598);
if(d::truth((!d::truth(_n_a_35599)))){d::check_cancel();continue;
}
double _n_dx_35600=((_n_x_35597+0.5)-_n_fx_35591);
double _n_dy_35601=((_n_r_35596+0.5)-_n_fy_35592);
double _n_v_35602=((std::exp(((-d::number(std::sqrt(((_n_dx_35600*_n_dx_35600)+(_n_dy_35601*_n_dy_35601)))))/_n_halo_35593))*_n_amp_35594)*_n_a_35599);
(void)(((([&](){auto&& _n_array_35964=d::at(this->_n_dyn_35362,0.0);auto _n_index_35965=_n_k_35598;auto _n_value_35966=(d::at(_n_array_35964,_n_index_35965)+(_n_v_35602*d::at(_n_WASH_35305,0.0)));d::put(_n_array_35964,_n_index_35965,_n_value_35966);return _n_value_35966;})(),([&](){auto&& _n_array_35967=d::at(this->_n_dyn_35362,1.0);auto _n_index_35968=_n_k_35598;auto _n_value_35969=(d::at(_n_array_35967,_n_index_35968)+(_n_v_35602*d::at(_n_WASH_35305,1.0)));d::put(_n_array_35967,_n_index_35968,_n_value_35969);return _n_value_35969;})()),([&](){auto&& _n_array_35970=d::at(this->_n_dyn_35362,2.0);auto _n_index_35971=_n_k_35598;auto _n_value_35972=(d::at(_n_array_35970,_n_index_35971)+(_n_v_35602*d::at(_n_WASH_35305,2.0)));d::put(_n_array_35970,_n_index_35971,_n_value_35972);return _n_value_35972;})()));
}}
}}

}
}

void _n_addStreak_35367(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_35603=_a0;
double _n_wl_35604=_a1;
double _n_width_35605=_a2;
double _n_len_35606=_a3;
double _n_amp_35607=_a4;
{
{double _n_r_35608=([&](){auto _n_argument_35973=0.0;auto _n_argument_35974=std::floor(_n_wl_35604);return d::maximum({_n_argument_35973,_n_argument_35974});})();
for(;d::truth((_n_r_35608<_n_H_35296));(void)((_n_r_35608++))){d::check_cancel();double _n_dy_35609=((_n_r_35608+0.5)-_n_wl_35604);
double _n_a_35610=([&](){auto _n_left_35975=(std::exp(((-d::number(_n_dy_35609))/_n_len_35606))*_n_amp_35607);auto _n_right_35976=_n_smooth_35320((-d::number(0.5)),1.0,_n_dy_35609);return (_n_left_35975*_n_right_35976);})();
if(d::truth((_n_a_35610<0.01))){d::check_cancel();break;
}
{double _n_x_35611=([&](){auto _n_argument_35977=0.0;auto _n_argument_35978=std::floor(((_n_fx_35603-(3.0*_n_width_35605))-1.0));return d::maximum({_n_argument_35977,_n_argument_35978});})();
for(;d::truth((_n_x_35611<d::minimum({_n_W_35295,((_n_fx_35603+(3.0*_n_width_35605))+1.0)})));(void)((_n_x_35611++))){d::check_cancel();double _n_k_35612=((_n_r_35608*_n_W_35295)+_n_x_35611);
if(d::truth((d::at(this->_n_mat_35340,_n_k_35612)==_n_WATER_35307))){d::check_cancel();(void)(([&](){auto&& _n_array_35979=this->_n_dref_35363;auto _n_index_35980=_n_k_35612;auto _n_value_35981=(d::at(_n_array_35979,_n_index_35980)+(_n_a_35610*std::exp((-d::number(std::pow((((_n_x_35611+0.5)-_n_fx_35603)/_n_width_35605),2.0))))));d::put(_n_array_35979,_n_index_35980,_n_value_35981);return _n_value_35981;})());
}
}}
}}

}
}

double _n_boatAt_35369(double _a0,double _a1){double _n_lx_35613=_a0;
double _n_ly_35614=_a1;
{
double _n_L_35615=9.0;
if(((d::truth((std::fabs(_n_lx_35613)<_n_L_35615))&&d::truth((_n_ly_35614>(-d::number(0.6)))))&&d::truth((_n_ly_35614<(1.2+(1.4*([&](){auto _n_argument_35982=(std::fabs(_n_lx_35613)/_n_L_35615);auto _n_argument_35983=3.0;return std::pow(_n_argument_35982,_n_argument_35983);})())))))){d::check_cancel();return 1.0;
}
if((((d::truth((_n_lx_35613>4.6))&&d::truth((_n_lx_35613<5.8)))&&d::truth((_n_ly_35614>0.0)))&&d::truth((_n_ly_35614<6.6)))){d::check_cancel();return 1.0;
}
if((d::truth((std::fabs((_n_lx_35613-5.2))<0.7))&&d::truth((std::fabs((_n_ly_35614-7.2))<0.7)))){d::check_cancel();return 1.0;
}
double _n_ox_35616=(_n_lx_35613-5.6);
double _n_oy_35617=(_n_ly_35614-5.4);
double _n_along_35618=((_n_ox_35616*0.42)-(_n_oy_35617*0.91));
if(((d::truth((_n_along_35618>0.0))&&d::truth((_n_along_35618<8.0)))&&d::truth((std::fabs(((_n_ox_35616*0.91)+(_n_oy_35617*0.42)))<0.32)))){d::check_cancel();return 1.0;
}
if((((d::truth((_n_lx_35613>(-d::number(4.0))))&&d::truth((_n_lx_35613<(-d::number(0.5)))))&&d::truth((_n_ly_35614>0.0)))&&d::truth((_n_ly_35614<(2.6-(0.25*std::fabs((_n_lx_35613+2.2)))))))){d::check_cancel();return 1.0;
}
return 0.0;

}
}

explicit Native_varanasi_ghats(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_35330=d::map(_n_meta_35293->_p_palette,_n_hex_35322);
this->_n_STAR_35331=(double(this->_n_P_35330.size())-1.0);
this->_n_N_35332=(_n_W_35295*_n_H_35296);
this->_n_out_35333=d::Array<d::String,false>(size_t(this->_n_N_35332));
this->_n_lut_35334=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_blds_35336=d::Array<std::array<double,4>,false>{};
{double _n_x_35442=(-d::number(6.0));
for(;d::truth((_n_x_35442<(_n_END_35298-10.0)));){d::check_cancel();double _n_s_35443=_n_scF_35327(d::maximum({0.0,_n_x_35442}));
double _n_w_35444=((8.0+(10.0*_n_hash_35316(double(d::i32(_n_x_35442)|d::i32(0.0)),3.0)))*_n_s_35443);
double _n_low_35445=((d::truth((_n_x_35442>110.0))?0.8:1.0)*(0.45+(0.55*_n_smooth_35320((_n_END_35298-8.0),(_n_END_35298-34.0),_n_x_35442))));
(void)(this->_n_blds_35336.push(std::array<double,4>{_n_x_35442,(_n_x_35442+_n_w_35444),((7.0+(9.0*_n_hash_35316(double(d::i32(_n_x_35442)|d::i32(0.0)),4.0)))*_n_low_35445),_n_hash_35316(double(d::i32(_n_x_35442)|d::i32(0.0)),5.0)}));
(void)((_n_x_35442=(_n_x_35442+_n_w_35444)));
}}
this->_n_spires_35337=d::Array<std::array<double,3>,false>{std::array<double,3>{118.0,33.0,5.2},std::array<double,3>{64.0,19.0,4.0},std::array<double,3>{31.0,15.0,3.6},std::array<double,3>{139.0,8.0,1.6},std::array<double,3>{90.0,11.0,2.4},std::array<double,3>{129.0,10.0,2.0}};
this->_n_aarti_35338=d::Array<std::array<double,3>,false>{std::array<double,3>{11.0,1.15,1.25},std::array<double,3>{24.0,0.8,0.85},std::array<double,3>{39.0,1.25,1.1},std::array<double,3>{54.0,0.75,0.75}};
this->_n_umbs_35339=d::Array<double,false>{70.0,83.0,98.0,109.0};
this->_n_mat_35340=d::Array<uint8_t,true>(size_t(this->_n_N_35332));
this->_n_sR_35341=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_sG_35342=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_sB_35343=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_flo_35344=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_alb_35345=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_skyH_35346=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_warm_35347=d::Array<float,true>(size_t(this->_n_N_35332));
{double _n_r_35450=0.0;
for(;d::truth((_n_r_35450<_n_H_35296));(void)((_n_r_35450++))){d::check_cancel();{double _n_x_35451=0.0;
for(;d::truth((_n_x_35451<_n_W_35295));(void)((_n_x_35451++))){d::check_cancel();double _n_k_35452=((_n_r_35450*_n_W_35295)+_n_x_35451);
double _n_xc_35453=(_n_x_35451+0.5);
double _n_y_35454=(_n_r_35450+0.5);
double _n_wl_35455=_n_wlF_35326(_n_xc_35453);
if(d::truth((_n_y_35454>=_n_wl_35455))){d::check_cancel();(void)(([&](){auto&& _n_array_35741=this->_n_mat_35340;auto _n_index_35742=_n_k_35452;auto _n_value_35743=_n_WATER_35307;d::put(_n_array_35741,_n_index_35742,_n_value_35743);return _n_value_35743;})());
(void)(([&](){auto&& _n_array_35744=this->_n_alb_35345;auto _n_index_35745=_n_k_35452;auto _n_value_35746=0.25;d::put(_n_array_35744,_n_index_35745,_n_value_35746);return _n_value_35746;})());
continue;
}
double _n_m_35456=_n_SKY_35306;
double _n_cr_35457=0.0;
double _n_cg_35458=0.0;
double _n_cb_35459=0.0;
double _n_fl_35460=0.06;
double _n_al_35461=0.0;
double _n_s_35462=_n_scF_35327(_n_xc_35453);
double _n_clump_35463=([&](){auto _n_left_35747=([&](){auto _n_argument_35749=0.42;auto _n_argument_35750=0.72;auto _n_argument_35751=_n_fbm_35318((_n_xc_35453*0.11),3.0,3.0,0.0);return _n_smooth_35320(_n_argument_35749,_n_argument_35750,_n_argument_35751);})();auto _n_right_35748=_n_smooth_35320(160.0,172.0,_n_xc_35453);return (_n_left_35747*_n_right_35748);})();
double _n_bankTop_35464=(((_n_HZ_35297-2.2)-(0.6*_n_fbm_35318((_n_xc_35453*0.4),7.0,2.0,0.0)))-(4.0*_n_clump_35463));
if((d::truth((_n_xc_35453>=(_n_END_35298-4.0)))&&d::truth((_n_y_35454>=_n_bankTop_35464)))){d::check_cancel();(void)((((((_n_m_35456=_n_BANK_35308),(_n_cr_35457=0.1)),(_n_cg_35458=0.07)),(_n_cb_35459=0.125)),(_n_fl_35460=0.03)));
}
if(d::truth((_n_xc_35453<_n_END_35298))){d::check_cancel();double _n_st_35465=_n_stepTopF_35328(_n_xc_35453);
double _n_roof_35466=_n_st_35465;
double _n_bi_35467=(-d::number(1.0));
{double _n_i_35468=0.0;
for(;d::truth((_n_i_35468<double(this->_n_blds_35336.size())));(void)((_n_i_35468++))){d::check_cancel();if((d::truth((_n_xc_35453>=d::at(d::at(this->_n_blds_35336,_n_i_35468),0.0)))&&d::truth((_n_xc_35453<d::at(d::at(this->_n_blds_35336,_n_i_35468),1.0))))){d::check_cancel();(void)(((_n_roof_35466=(_n_st_35465-(d::at(d::at(this->_n_blds_35336,_n_i_35468),2.0)*_n_s_35462))),(_n_bi_35467=_n_i_35468)));
}
}}
double _n_top_35469=_n_roof_35466;
if(d::truth((_n_bi_35467>=0.0))){d::check_cancel();auto _n_binding_35752=d::at(this->_n_blds_35336,_n_bi_35467);
double _n_x0_35470=d::at(_n_binding_35752,0.0);
double _n_x1_35471=d::at(_n_binding_35752,1.0);
double _n_hb_35472=d::at(_n_binding_35752,3.0);
double _n_mid_35473=((_n_x0_35470+_n_x1_35471)/2.0);
double _n_half_35474=((_n_x1_35471-_n_x0_35470)/2.0);
if(d::truth((_n_hb_35472>0.45))){d::check_cancel();double _n_cx_35475=(d::truth((_n_hb_35472>0.75))?(_n_x0_35470+(_n_half_35474*0.4)):_n_mid_35473);
double _n_dx_35476=(std::fabs((_n_xc_35453-_n_cx_35475))/(1.6*_n_s_35462));
if(d::truth((_n_dx_35476<1.0))){d::check_cancel();(void)((_n_top_35469=([&](){auto _n_argument_35753=_n_top_35469;auto _n_argument_35754=((_n_roof_35466-(1.4*_n_s_35462))-((1.5*_n_s_35462)*std::sqrt((1.0-(_n_dx_35476*_n_dx_35476)))));return d::minimum({_n_argument_35753,_n_argument_35754});})()));
}
if((d::truth((_n_dx_35476<1.1))&&d::truth((_n_dx_35476>0.7)))){d::check_cancel();(void)((_n_top_35469=d::minimum({_n_top_35469,(_n_roof_35466-(1.4*_n_s_35462))})));
}
}
if((d::truth((std::fabs((_n_xc_35453-_n_x0_35470))<(0.6*_n_s_35462)))||d::truth((std::fabs((_n_xc_35453-_n_x1_35471))<(0.6*_n_s_35462))))){d::check_cancel();(void)((_n_top_35469=d::minimum({_n_top_35469,(_n_roof_35466-(0.6*_n_s_35462))})));
}
}
if((d::truth((_n_y_35454>=_n_top_35469))&&d::truth((_n_y_35454<_n_st_35465)))){d::check_cancel();(void)((_n_m_35456=_n_BLD_35310));
(void)((((_n_cr_35457=0.075),(_n_cg_35458=0.05)),(_n_cb_35459=0.09)));
double _n_fy_35477=((_n_y_35454-_n_top_35469)/d::maximum({1.0,(_n_st_35465-_n_top_35469)}));
(void)((((_n_cr_35457=(_n_cr_35457*(1.1-(0.4*_n_fy_35477)))),(_n_cg_35458=(_n_cg_35458*(1.1-(0.4*_n_fy_35477))))),(_n_cb_35459=(_n_cb_35459*(1.1-(0.3*_n_fy_35477))))));
(void)((_n_al_35461=0.5));
if((d::truth((_n_bi_35467>=0.0))&&d::truth((_n_s_35462>0.6)))){d::check_cancel();double _n_fx_35478=((_n_xc_35453-d::at(d::at(this->_n_blds_35336,_n_bi_35467),0.0))/(2.4*_n_s_35462));
double _n_fz_35479=((_n_st_35465-_n_y_35454)/(3.0*_n_s_35462));
double _n_ix_35480=std::floor(_n_fx_35478);
double _n_iz_35481=std::floor(_n_fz_35479);
if((((((d::truth(((_n_fx_35478-_n_ix_35480)>0.35))&&d::truth(((_n_fx_35478-_n_ix_35480)<0.7)))&&d::truth(((_n_fz_35479-_n_iz_35481)>0.25)))&&d::truth(((_n_fz_35479-_n_iz_35481)<0.75)))&&d::truth((_n_iz_35481>=1.0)))&&d::truth(((_n_st_35465-_n_y_35454)<((d::at(d::at(this->_n_blds_35336,_n_bi_35467),2.0)*_n_s_35462)-(1.5*_n_s_35462)))))){d::check_cancel();bool _n_lit_35482=(_n_hash_35316(((_n_bi_35467*31.0)+_n_ix_35480),(_n_iz_35481*7.0))<(d::truth((_n_s_35462>1.2))?0.28:0.2));
if(d::truth(_n_lit_35482)){d::check_cancel();(void)((((_n_cr_35457=(_n_cr_35457+0.5)),(_n_cg_35458=(_n_cg_35458+0.28))),(_n_cb_35459=(_n_cb_35459+0.08))));
}else {d::check_cancel();(void)(((((_n_cr_35457=(_n_cr_35457*0.55)),(_n_cg_35458=(_n_cg_35458*0.55))),(_n_cb_35459=(_n_cb_35459*0.65))),(_n_al_35461=0.2)));
}
}
}
(void)((_n_fl_35460=0.14));
}
if(d::truth((_n_y_35454>=_n_st_35465))){d::check_cancel();(void)((_n_m_35456=_n_STEPS_35309));
double _n_sp_35483=(1.6*_n_s_35462);
double _n_near_35484=((_n_wl_35455-_n_y_35454)/(_n_wl_35455-_n_st_35465));
if(d::truth((_n_sp_35483<2.2))){d::check_cancel();double _n_odd_35485=double(d::i32(std::floor((_n_wl_35455-_n_y_35454)))&d::i32(1.0));
(void)((((_n_cr_35457=0.19),(_n_cg_35458=0.13)),(_n_cb_35459=0.25)));
if(d::truth(_n_odd_35485)){d::check_cancel();(void)((((_n_cr_35457=(_n_cr_35457*0.55)),(_n_cg_35458=(_n_cg_35458*0.55))),(_n_cb_35459=(_n_cb_35459*0.58))));
}
(void)((_n_al_35461=(d::truth(_n_odd_35485)?0.4:0.75)));
}else {d::check_cancel();double _n_ph_35486=d::mod(((_n_wl_35455-_n_y_35454)/_n_sp_35483),1.0);
if(d::truth((_n_ph_35486<0.6))){d::check_cancel();(void)(((((_n_cr_35457=(0.24+(0.05*(1.0-_n_near_35484)))),(_n_cg_35458=0.15)),(_n_cb_35459=0.2)),(_n_al_35461=1.0)));
}else {d::check_cancel();(void)(((((_n_cr_35457=0.05),(_n_cg_35458=0.035)),(_n_cb_35459=0.06)),(_n_al_35461=0.3)));
}
}
if(d::truth(((_n_wl_35455-_n_y_35454)<(1.2*_n_s_35462)))){d::check_cancel();(void)(((((_n_cr_35457=(_n_cr_35457*0.6)),(_n_cg_35458=(_n_cg_35458*0.6))),(_n_cb_35459=(_n_cb_35459*0.75))),(_n_al_35461=(_n_al_35461*0.6))));
}
(void)((_n_fl_35460=0.12));
}
}
for(auto &&_n_item_35755:this->_n_spires_35337){d::check_cancel();auto _n_binding_35756=_n_item_35755;
double _n_sx_35487=d::at(_n_binding_35756,0.0);
double _n_sh_35488=d::at(_n_binding_35756,1.0);
double _n_sw_35489=d::at(_n_binding_35756,2.0);
{
double _n_base_35490=(this->_n_roofOf_35348(_n_sx_35487)+1.0);
double _n_h_35491=(_n_base_35490-_n_y_35454);
if((d::truth((_n_h_35491<(-d::number(1.0))))||d::truth((_n_h_35491>(_n_sh_35488+2.5))))){d::check_cancel();continue;
}
double _n_dx_35492=std::fabs((_n_xc_35453-_n_sx_35487));
double _n_f_35493=(_n_h_35491/_n_sh_35488);
double _n_hw_35494=(d::truth((_n_f_35493<=1.0))?(_n_sw_35489*([&](){auto _n_argument_35757=([&](){auto _n_argument_35758=0.0;auto _n_argument_35759=(1.0-std::pow(_n_f_35493,1.8));return d::maximum({_n_argument_35758,_n_argument_35759});})();auto _n_argument_35760=0.6;return std::pow(_n_argument_35757,_n_argument_35760);})()):0.0);
if((d::truth((_n_f_35493>0.92))&&d::truth((_n_f_35493<1.02)))){d::check_cancel();(void)((_n_hw_35494=d::maximum({_n_hw_35494,(_n_sw_35489*0.32)})));
}
if((d::truth((_n_f_35493>=1.02))&&d::truth((_n_h_35491<(_n_sh_35488+2.2))))){d::check_cancel();(void)((_n_hw_35494=([&](){auto _n_argument_35761=_n_hw_35494;auto _n_argument_35762=(0.35+(0.2*std::sin((((_n_h_35491-_n_sh_35488)/2.2)*ascii::PI))));return d::maximum({_n_argument_35761,_n_argument_35762});})()));
}
if((d::truth((_n_h_35491>=(-d::number(1.0))))&&d::truth((_n_h_35491<0.5)))){d::check_cancel();(void)((_n_hw_35494=(_n_sw_35489*1.15)));
}
if(d::truth((_n_dx_35492<=_n_hw_35494))){d::check_cancel();(void)((_n_m_35456=_n_SPIRE_35311));
double _n_band_35495=(d::truth(d::mod(std::floor((_n_h_35491/1.6)),2.0))?0.8:1.0);
(void)((((_n_cr_35457=(0.085*_n_band_35495)),(_n_cg_35458=(0.055*_n_band_35495))),(_n_cb_35459=(0.095*_n_band_35495))));
(void)(((_n_fl_35460=0.12),(_n_al_35461=0.35)));
}

}
}
for(auto &&_n_item_35763:this->_n_umbs_35339){d::check_cancel();double _n_ux_35496=_n_item_35763;
{
double _n_s2_35497=_n_scF_35327(_n_ux_35496);
double _n_wl2_35498=_n_wlF_35326(_n_ux_35496);
double _n_cy_35499=(_n_wl2_35498-((_n_wl2_35498-_n_stepTopF_35328(_n_ux_35496))*0.55));
double _n_dx_35500=((_n_xc_35453-_n_ux_35496)/(3.0*_n_s2_35497));
double _n_dy_35501=((_n_cy_35499-_n_y_35454)/(1.4*_n_s2_35497));
if(((d::truth((_n_dy_35501>0.0))&&d::truth((_n_dy_35501<1.0)))&&d::truth(([&](){auto _n_left_35764=std::fabs(_n_dx_35500);auto _n_right_35765=std::sqrt((1.0-(_n_dy_35501*_n_dy_35501)));return (_n_left_35764<_n_right_35765);})()))){d::check_cancel();(void)((((((_n_m_35456=_n_UMB_35312),(_n_cr_35457=0.07)),(_n_cg_35458=0.045)),(_n_cb_35459=0.075)),(_n_al_35461=0.4)));
}
if(((d::truth((_n_dy_35501<=0.0))&&d::truth((_n_dy_35501>(-d::number(0.25)))))&&d::truth((std::fabs(_n_dx_35500)<1.0)))){d::check_cancel();(void)((((((_n_m_35456=_n_UMB_35312),(_n_cr_35457=0.05)),(_n_cg_35458=0.03)),(_n_cb_35459=0.05)),(_n_al_35461=0.2)));
}
if(((d::truth((std::fabs((_n_xc_35453-_n_ux_35496))<0.5))&&d::truth((_n_y_35454>_n_cy_35499)))&&d::truth((_n_y_35454<(_n_cy_35499+(2.2*_n_s2_35497)))))){d::check_cancel();(void)((((((_n_m_35456=_n_UMB_35312),(_n_cr_35457=0.04)),(_n_cg_35458=0.03)),(_n_cb_35459=0.04)),(_n_al_35461=0.1)));
}

}
}
for(auto &&_n_item_35766:this->_n_aarti_35338){d::check_cancel();auto _n_binding_35767=_n_item_35766;
double _n_ax_35502=d::at(_n_binding_35767,0.0);
{
double _n_s2_35503=_n_scF_35327(_n_ax_35502);
double _n_u_35504=(1.3*_n_s2_35503);
double _n_base_35505=(_n_wlF_35326(_n_ax_35502)-(2.6*_n_s2_35503));
double _n_dx_35506=((_n_xc_35453-_n_ax_35502)/_n_u_35504);
double _n_fy_35507=((_n_base_35505-_n_y_35454)/_n_u_35504);
double _n_bw_35508=(d::truth((_n_fy_35507<0.0))?(-d::number(1.0)):(d::truth((_n_fy_35507<2.2))?(0.66-(0.04*_n_fy_35507)):(d::truth((_n_fy_35507<4.1))?(0.58+(0.32*_n_smooth_35320(2.2,3.7,_n_fy_35507))):(d::truth((_n_fy_35507<4.5))?0.28:(-d::number(1.0))))));
bool _n_head_35509=(d::hypot(std::initializer_list<double>{(_n_dx_35506*1.05),(_n_fy_35507-5.05)})<0.62);
if((d::truth((std::fabs(_n_dx_35506)<_n_bw_35508))||d::truth(_n_head_35509))){d::check_cancel();(void)(((((((_n_m_35456=_n_FIG_35313),(_n_cr_35457=0.035)),(_n_cg_35458=0.022)),(_n_cb_35459=0.035)),(_n_fl_35460=0.02)),(_n_al_35461=0.04)));
}
if(((d::truth((_n_y_35454>=_n_base_35505))&&d::truth((_n_y_35454<(_n_base_35505+(0.7*_n_s2_35503)))))&&d::truth((std::fabs((_n_xc_35453-_n_ax_35502))<(2.3*_n_u_35504))))){d::check_cancel();(void)(((((((_n_m_35456=_n_PLAT_35314),(_n_cr_35457=0.12)),(_n_cg_35458=0.07)),(_n_cb_35459=0.06)),(_n_fl_35460=0.04)),(_n_al_35461=0.8)));
}

}
}
if(d::truth((_n_m_35456==_n_SKY_35306))){d::check_cancel();double _n_veil_35510=(0.92+(0.16*_n_fbm_35318((_n_x_35451*0.05),(_n_r_35450*0.1),3.0,0.0)));
double _n_hh_35511=([&](){auto _n_left_35768=([&](){auto _n_left_35770=_n_skyHeat_35329(_n_xc_35453,_n_y_35454);auto _n_right_35771=(0.05*(_n_fbm_35318(((_n_x_35451*0.07)+11.0),(_n_r_35450*0.16),2.0,0.0)-0.5));return (_n_left_35770+_n_right_35771);})();auto _n_right_35769=(0.1*(_n_fbm_35318(((_n_x_35451*0.025)+3.0),((_n_r_35450*0.09)+5.0),3.0,0.0)-0.5));return (_n_left_35768+_n_right_35769);})();
(void)(([&](){auto&& _n_array_35772=this->_n_skyH_35346;auto _n_index_35773=_n_k_35452;auto _n_value_35774=_n_hh_35511;d::put(_n_array_35772,_n_index_35773,_n_value_35774);return _n_value_35774;})());
(void)(([&](){auto&& _n_array_35775=this->_n_warm_35347;auto _n_index_35776=_n_k_35452;auto _n_value_35777=_n_smooth_35320(0.3,0.9,_n_hh_35511);d::put(_n_array_35775,_n_index_35776,_n_value_35777);return _n_value_35777;})());
double _n_i_35512=(_n_rampAt_35325(_n_hh_35511)*3.0);
(void)((((_n_cr_35457=(d::at(_n_RT_35324,_n_i_35512)*_n_veil_35510)),(_n_cg_35458=(d::at(_n_RT_35324,(_n_i_35512+1.0))*_n_veil_35510))),(_n_cb_35459=(d::at(_n_RT_35324,(_n_i_35512+2.0))*_n_veil_35510))));
(void)((_n_fl_35460=0.2));
}
(void)(([&](){auto&& _n_array_35778=this->_n_mat_35340;auto _n_index_35779=_n_k_35452;auto _n_value_35780=_n_m_35456;d::put(_n_array_35778,_n_index_35779,_n_value_35780);return _n_value_35780;})());
(void)(((((([&](){auto&& _n_array_35781=this->_n_sR_35341;auto _n_index_35782=_n_k_35452;auto _n_value_35783=_n_cr_35457;d::put(_n_array_35781,_n_index_35782,_n_value_35783);return _n_value_35783;})(),([&](){auto&& _n_array_35784=this->_n_sG_35342;auto _n_index_35785=_n_k_35452;auto _n_value_35786=_n_cg_35458;d::put(_n_array_35784,_n_index_35785,_n_value_35786);return _n_value_35786;})()),([&](){auto&& _n_array_35787=this->_n_sB_35343;auto _n_index_35788=_n_k_35452;auto _n_value_35789=_n_cb_35459;d::put(_n_array_35787,_n_index_35788,_n_value_35789);return _n_value_35789;})()),([&](){auto&& _n_array_35790=this->_n_flo_35344;auto _n_index_35791=_n_k_35452;auto _n_value_35792=_n_fl_35460;d::put(_n_array_35790,_n_index_35791,_n_value_35792);return _n_value_35792;})()),([&](){auto&& _n_array_35793=this->_n_alb_35345;auto _n_index_35794=_n_k_35452;auto _n_value_35795=_n_al_35461;d::put(_n_array_35793,_n_index_35794,_n_value_35795);return _n_value_35795;})()));
}}
}}
this->_n_rimR_35349=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_rimG_35350=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_rimB_35351=d::Array<float,true>(size_t(this->_n_N_35332));
{double _n_r_35513=1.0;
for(;d::truth((_n_r_35513<(_n_H_35296-1.0)));(void)((_n_r_35513++))){d::check_cancel();{double _n_x_35514=2.0;
for(;d::truth((_n_x_35514<(_n_W_35295-2.0)));(void)((_n_x_35514++))){d::check_cancel();double _n_k_35515=((_n_r_35513*_n_W_35295)+_n_x_35514);
double _n_m_35516=d::at(this->_n_mat_35340,_n_k_35515);
if((d::truth((_n_m_35516==_n_SKY_35306))||d::truth((_n_m_35516==_n_WATER_35307)))){d::check_cancel();continue;
}
double _n_toward_35517=(d::truth((_n_x_35514<d::at(_n_GLOW_35299,0.0)))?1.0:(-d::number(1.0)));
double _n_strong_35518=(0.75*std::exp(((-d::number(std::fabs((_n_x_35514-d::at(_n_GLOW_35299,0.0)))))/42.0)));
double _n_a_35519=0.0;
if(d::truth((d::at(this->_n_mat_35340,(_n_k_35515+_n_toward_35517))==_n_SKY_35306))){d::check_cancel();(void)((_n_a_35519=_n_strong_35518));
}else {d::check_cancel();if(d::truth((d::at(this->_n_mat_35340,(_n_k_35515+(2.0*_n_toward_35517)))==_n_SKY_35306))){d::check_cancel();(void)((_n_a_35519=(_n_strong_35518*0.4)));
}
}
if(d::truth((_n_a_35519>0.0))){d::check_cancel();(void)(((([&](){auto&& _n_array_35796=this->_n_rimR_35349;auto _n_index_35797=_n_k_35515;auto _n_value_35798=(0.85*_n_a_35519);d::put(_n_array_35796,_n_index_35797,_n_value_35798);return _n_value_35798;})(),([&](){auto&& _n_array_35799=this->_n_rimG_35350;auto _n_index_35800=_n_k_35515;auto _n_value_35801=(0.45*_n_a_35519);d::put(_n_array_35799,_n_index_35800,_n_value_35801);return _n_value_35801;})()),([&](){auto&& _n_array_35802=this->_n_rimB_35351;auto _n_index_35803=_n_k_35515;auto _n_value_35804=(0.26*_n_a_35519);d::put(_n_array_35802,_n_index_35803,_n_value_35804);return _n_value_35804;})()));
}
if(d::truth((d::at(this->_n_mat_35340,(_n_k_35515-_n_W_35295))==_n_SKY_35306))){d::check_cancel();(void)(((([&](){auto&& _n_array_35805=this->_n_rimR_35349;auto _n_index_35806=_n_k_35515;auto _n_value_35807=(d::at(_n_array_35805,_n_index_35806)+(d::at(this->_n_sR_35341,(_n_k_35515-_n_W_35295))*0.3));d::put(_n_array_35805,_n_index_35806,_n_value_35807);return _n_value_35807;})(),([&](){auto&& _n_array_35808=this->_n_rimG_35350;auto _n_index_35809=_n_k_35515;auto _n_value_35810=(d::at(_n_array_35808,_n_index_35809)+(d::at(this->_n_sG_35342,(_n_k_35515-_n_W_35295))*0.3));d::put(_n_array_35808,_n_index_35809,_n_value_35810);return _n_value_35810;})()),([&](){auto&& _n_array_35811=this->_n_rimB_35351;auto _n_index_35812=_n_k_35515;auto _n_value_35813=(d::at(_n_array_35811,_n_index_35812)+(d::at(this->_n_sB_35343,(_n_k_35515-_n_W_35295))*0.3));d::put(_n_array_35811,_n_index_35812,_n_value_35813);return _n_value_35813;})()));
}
}}
}}
{double _n_k_35520=0.0;
for(;d::truth((_n_k_35520<this->_n_N_35332));(void)((_n_k_35520++))){d::check_cancel();(void)(((([&](){auto&& _n_array_35814=this->_n_sR_35341;auto _n_index_35815=_n_k_35520;auto _n_value_35816=(d::at(_n_array_35814,_n_index_35815)+d::at(this->_n_rimR_35349,_n_k_35520));d::put(_n_array_35814,_n_index_35815,_n_value_35816);return _n_value_35816;})(),([&](){auto&& _n_array_35817=this->_n_sG_35342;auto _n_index_35818=_n_k_35520;auto _n_value_35819=(d::at(_n_array_35817,_n_index_35818)+d::at(this->_n_rimG_35350,_n_k_35520));d::put(_n_array_35817,_n_index_35818,_n_value_35819);return _n_value_35819;})()),([&](){auto&& _n_array_35820=this->_n_sB_35343;auto _n_index_35821=_n_k_35520;auto _n_value_35822=(d::at(_n_array_35820,_n_index_35821)+d::at(this->_n_rimB_35351,_n_k_35520));d::put(_n_array_35820,_n_index_35821,_n_value_35822);return _n_value_35822;})()));
}}
this->_n_stepLamps_35352=d::Array<std::array<double,2>,false>{};
{double _n_x_35521=2.0;
for(;d::truth((_n_x_35521<118.0));(void)((_n_x_35521++))){d::check_cancel();double _n_s_35522=_n_scF_35327((_n_x_35521+0.5));
{double _n_r_35523=std::floor(_n_stepTopF_35328((_n_x_35521+0.5)));
for(;d::truth((_n_r_35523<(_n_wlF_35326((_n_x_35521+0.5))-1.0)));(void)((_n_r_35523++))){d::check_cancel();double _n_k_35524=((_n_r_35523*_n_W_35295)+_n_x_35521);
if(d::truth((d::at(this->_n_mat_35340,_n_k_35524)!=_n_STEPS_35309))){d::check_cancel();continue;
}
double _n_near_35525=std::exp((-d::number(std::pow(((_n_x_35521-33.0)/36.0),2.0))));
if((d::truth((_n_hash_35316(((_n_x_35521*3.0)+7.0),(_n_r_35523*5.0))<((0.035*_n_near_35525)+0.006)))&&d::truth((d::mod((((_n_wlF_35326((_n_x_35521+0.5))-_n_r_35523)-0.5)/(1.6*_n_s_35522)),1.0)<0.3)))){d::check_cancel();(void)(this->_n_stepLamps_35352.push(std::array<double,2>{_n_k_35524,(_n_hash_35316(_n_x_35521,_n_r_35523)*40.0)}));
}
}}
}}
this->_n_sref_35353=d::Array<float,true>(size_t(this->_n_N_35332));
{double _n_x_35526=58.0;
for(;d::truth((_n_x_35526<(_n_END_35298-3.0)));){d::check_cancel();double _n_s_35527=_n_scF_35327(_n_x_35526);
double _n_ly_35528=([&](){auto _n_left_35823=(_n_stepTopF_35328(_n_x_35526)-(0.4*_n_s_35527));auto _n_right_35824=([&](){auto _n_left_35825=(([&](){auto _n_left_35827=_n_wlF_35326(_n_x_35526);auto _n_right_35828=_n_stepTopF_35328(_n_x_35526);return (_n_left_35827-_n_right_35828);})()*0.55);auto _n_right_35826=std::pow(_n_hash_35316(double(d::i32(_n_x_35526)|d::i32(0.0)),78.0),2.0);return (_n_left_35825*_n_right_35826);})();return (_n_left_35823+_n_right_35824);})();
double _n_halo_35529=(1.0+(3.2*_n_s_35527));
double _n_R_35530=std::ceil((_n_halo_35529*3.0));
{double _n_r_35531=([&](){auto _n_argument_35829=0.0;auto _n_argument_35830=std::floor((_n_ly_35528-_n_R_35530));return d::maximum({_n_argument_35829,_n_argument_35830});})();
for(;d::truth((_n_r_35531<d::minimum({_n_H_35296,(_n_ly_35528+_n_R_35530)})));(void)((_n_r_35531++))){d::check_cancel();{double _n_xx_35532=([&](){auto _n_argument_35831=0.0;auto _n_argument_35832=std::floor((_n_x_35526-_n_R_35530));return d::maximum({_n_argument_35831,_n_argument_35832});})();
for(;d::truth((_n_xx_35532<d::minimum({_n_W_35295,(_n_x_35526+_n_R_35530)})));(void)((_n_xx_35532++))){d::check_cancel();double _n_k_35533=((_n_r_35531*_n_W_35295)+_n_xx_35532);
if((d::truth((d::at(this->_n_mat_35340,_n_k_35533)==_n_WATER_35307))||d::truth((d::at(this->_n_mat_35340,_n_k_35533)==_n_SKY_35306)))){d::check_cancel();continue;
}
double _n_dx_35534=((_n_xx_35532+0.5)-_n_x_35526);
double _n_dy_35535=((_n_r_35531+0.5)-_n_ly_35528);
double _n_d_35536=std::sqrt(((_n_dx_35534*_n_dx_35534)+(_n_dy_35535*_n_dy_35535)));
double _n_v_35537=([&](){auto _n_left_35833=(std::exp((-d::number(std::pow((_n_d_35536/0.6),2.0))))*1.3);auto _n_right_35834=(std::exp(((-d::number(_n_d_35536))/1.4))*0.12);return (_n_left_35833+_n_right_35834);})();
double _n_p_35538=((std::exp(((-d::number(_n_d_35536))/_n_halo_35529))*0.3)*d::at(this->_n_alb_35345,_n_k_35533));
(void)(((([&](){auto&& _n_array_35835=this->_n_sR_35341;auto _n_index_35836=_n_k_35533;auto _n_value_35837=(d::at(_n_array_35835,_n_index_35836)+(_n_v_35537+(_n_p_35538*d::at(_n_WASH_35305,0.0))));d::put(_n_array_35835,_n_index_35836,_n_value_35837);return _n_value_35837;})(),([&](){auto&& _n_array_35838=this->_n_sG_35342;auto _n_index_35839=_n_k_35533;auto _n_value_35840=(d::at(_n_array_35838,_n_index_35839)+((_n_v_35537*0.76)+(_n_p_35538*d::at(_n_WASH_35305,1.0))));d::put(_n_array_35838,_n_index_35839,_n_value_35840);return _n_value_35840;})()),([&](){auto&& _n_array_35841=this->_n_sB_35343;auto _n_index_35842=_n_k_35533;auto _n_value_35843=(d::at(_n_array_35841,_n_index_35842)+((_n_v_35537*0.42)+(_n_p_35538*d::at(_n_WASH_35305,2.0))));d::put(_n_array_35841,_n_index_35842,_n_value_35843);return _n_value_35843;})()));
}}
}}
double _n_wl_35539=_n_wlF_35326(_n_x_35526);
double _n_width_35540=(0.35+(0.35*_n_s_35527));
double _n_len_35541=(9.0*_n_s_35527);
{double _n_r_35542=std::floor(_n_wl_35539);
for(;d::truth((_n_r_35542<_n_H_35296));(void)((_n_r_35542++))){d::check_cancel();double _n_a_35543=(std::exp(((-d::number(((_n_r_35542+0.5)-_n_wl_35539)))/_n_len_35541))*0.5);
if(d::truth((_n_a_35543<0.01))){d::check_cancel();break;
}
{double _n_xx_35544=std::floor((_n_x_35526-3.0));
for(;d::truth((_n_xx_35544<(_n_x_35526+3.0)));(void)((_n_xx_35544++))){d::check_cancel();(void)(([&](){auto&& _n_array_35844=this->_n_sref_35353;auto _n_index_35845=((_n_r_35542*_n_W_35295)+_n_xx_35544);auto _n_value_35846=(d::at(_n_array_35844,_n_index_35845)+(_n_a_35543*std::exp((-d::number(std::pow((((_n_xx_35544+0.5)-_n_x_35526)/_n_width_35540),2.0))))));d::put(_n_array_35844,_n_index_35845,_n_value_35846);return _n_value_35846;})());
}}
}}
(void)((_n_x_35526=(_n_x_35526+([&](){auto _n_left_35847=(5.0+(10.0*_n_hash_35316(double(d::i32(_n_x_35526)|d::i32(0.0)),77.0)));auto _n_right_35848=d::maximum({0.8,_n_s_35527});return (_n_left_35847*_n_right_35848);})())));
}}
this->_n_refl_35354=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_35332)),d::Array<float,true>(size_t(this->_n_N_35332)),d::Array<float,true>(size_t(this->_n_N_35332))};
this->_n_mirK_35355=d::Array<int32_t,true>(size_t(this->_n_N_35332)).fill((-d::number(1.0)));
{double _n_r_35545=0.0;
for(;d::truth((_n_r_35545<_n_H_35296));(void)((_n_r_35545++))){d::check_cancel();{double _n_x_35546=0.0;
for(;d::truth((_n_x_35546<_n_W_35295));(void)((_n_x_35546++))){d::check_cancel();double _n_k_35547=((_n_r_35545*_n_W_35295)+_n_x_35546);
if(d::truth((d::at(this->_n_mat_35340,_n_k_35547)!=_n_WATER_35307))){d::check_cancel();continue;
}
double _n_wl_35548=_n_wlF_35326((_n_x_35546+0.5));
double _n_d_35549=((_n_r_35545+0.5)-_n_wl_35548);
double _n_ar_35550=0.0;
double _n_ag_35551=0.0;
double _n_ab_35552=0.0;
{double _n_o_35553=0.0;
for(;d::truth((_n_o_35553<2.0));(void)((_n_o_35553++))){d::check_cancel();double _n_ym_35554=(((_n_wl_35548-(_n_d_35549*0.85))-0.4)-(_n_o_35553*0.8));
double _n_cr_35555{};
double _n_cg_35556{};
double _n_cb_35557{};
double _n_q_35558=(d::truth((_n_ym_35554<0.0))?(-d::number(1.0)):((std::floor(_n_ym_35554)*_n_W_35295)+_n_x_35546));
double _n_i_35559=(_n_rampAt_35325(([&](){auto _n_argument_35849=(_n_x_35546+0.5);auto _n_argument_35850=d::maximum({0.0,(((_n_wl_35548-(_n_d_35549*0.36))-1.0)-(_n_o_35553*0.6))});return _n_skyHeat_35329(_n_argument_35849,_n_argument_35850);})())*3.0);
if(((d::truth((_n_q_35558<0.0))||d::truth((d::at(this->_n_mat_35340,_n_q_35558)==_n_WATER_35307)))||d::truth((d::at(this->_n_mat_35340,_n_q_35558)==_n_SKY_35306)))){d::check_cancel();(void)((((_n_cr_35555=d::at(_n_RT_35324,_n_i_35559)),(_n_cg_35556=d::at(_n_RT_35324,(_n_i_35559+1.0)))),(_n_cb_35557=d::at(_n_RT_35324,(_n_i_35559+2.0)))));
}else {d::check_cancel();(void)((((_n_cr_35555=(d::at(this->_n_sR_35341,_n_q_35558)+(d::at(_n_RT_35324,_n_i_35559)*0.22))),(_n_cg_35556=(d::at(this->_n_sG_35342,_n_q_35558)+(d::at(_n_RT_35324,(_n_i_35559+1.0))*0.22)))),(_n_cb_35557=(d::at(this->_n_sB_35343,_n_q_35558)+(d::at(_n_RT_35324,(_n_i_35559+2.0))*0.22)))));
if(d::truth((_n_o_35553==0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_35851=this->_n_mirK_35355;auto _n_index_35852=_n_k_35547;auto _n_value_35853=_n_q_35558;d::put(_n_array_35851,_n_index_35852,_n_value_35853);return _n_value_35853;})());
}
}
(void)((((_n_ar_35550=(_n_ar_35550+_n_cr_35555)),(_n_ag_35551=(_n_ag_35551+_n_cg_35556))),(_n_ab_35552=(_n_ab_35552+_n_cb_35557))));
}}
double _n_a_35560=(0.8-(0.4*_n_smooth_35320(_n_HZ_35297,_n_H_35296,_n_r_35545)));
(void)(((([&](){auto&& _n_array_35854=d::at(this->_n_refl_35354,0.0);auto _n_index_35855=_n_k_35547;auto _n_value_35856=((_n_ar_35550/2.0)*_n_a_35560);d::put(_n_array_35854,_n_index_35855,_n_value_35856);return _n_value_35856;})(),([&](){auto&& _n_array_35857=d::at(this->_n_refl_35354,1.0);auto _n_index_35858=_n_k_35547;auto _n_value_35859=((_n_ag_35551/2.0)*_n_a_35560);d::put(_n_array_35857,_n_index_35858,_n_value_35859);return _n_value_35859;})()),([&](){auto&& _n_array_35860=d::at(this->_n_refl_35354,2.0);auto _n_index_35861=_n_k_35547;auto _n_value_35862=((_n_ab_35552/2.0)*_n_a_35560);d::put(_n_array_35860,_n_index_35861,_n_value_35862);return _n_value_35862;})()));
}}
}}
this->_n_CW_35356=800.0;
this->_n_CH_35357=(_n_HZ_35297-6.0);
this->_n_cover_35358=d::Array<float,true>(size_t((this->_n_CW_35356*this->_n_CH_35357)));
this->_n_clit_35359=d::Array<float,true>(size_t((this->_n_CW_35356*this->_n_CH_35357)));
{double _n_r_35569=0.0;
for(;d::truth((_n_r_35569<this->_n_CH_35357));(void)((_n_r_35569++))){d::check_cancel();{double _n_x_35570=0.0;
for(;d::truth((_n_x_35570<this->_n_CW_35356));(void)((_n_x_35570++))){d::check_cancel();double _n_y_35571=(_n_r_35569+0.5);
double _n_d_35572=this->_n_density_35360(_n_x_35570,_n_y_35571);
(void)(([&](){auto&& _n_array_35863=this->_n_cover_35358;auto _n_index_35864=((_n_r_35569*this->_n_CW_35356)+_n_x_35570);auto _n_value_35865=_n_smooth_35320(0.47,0.62,_n_d_35572);d::put(_n_array_35863,_n_index_35864,_n_value_35865);return _n_value_35865;})());
(void)(([&](){auto&& _n_array_35866=this->_n_clit_35359;auto _n_index_35867=((_n_r_35569*this->_n_CW_35356)+_n_x_35570);auto _n_value_35868=_n_clamp_35319(([&](){auto _n_left_35869=(0.4+((_n_d_35572-this->_n_density_35360(_n_x_35570,(_n_y_35571+2.0)))*5.5));auto _n_right_35870=((this->_n_density_35360(_n_x_35570,(_n_y_35571-2.5))-_n_d_35572)*1.5);return (_n_left_35869+_n_right_35870);})());d::put(_n_array_35866,_n_index_35867,_n_value_35868);return _n_value_35868;})());
}}
}}
this->_n_diyas_35361=d::Array<std::array<double,4>,false>{};
{double _n_i_35573=0.0;
for(;d::truth((_n_i_35573<34.0));(void)((_n_i_35573++))){d::check_cancel();double _n_q_35574=_n_hash_35316(_n_i_35573,61.0);
double _n_y_35575=((_n_HZ_35297+5.0)+(34.0*std::pow(_n_q_35574,1.3)));
(void)(this->_n_diyas_35361.push(std::array<double,4>{((_n_hash_35316(_n_i_35573,62.0)*260.0)-30.0),_n_y_35575,(_n_hash_35316(_n_i_35573,63.0)*50.0),(0.6+(0.6*_n_hash_35316(_n_i_35573,64.0)))}));
}}
this->_n_dyn_35362=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_35332)),d::Array<float,true>(size_t(this->_n_N_35332)),d::Array<float,true>(size_t(this->_n_N_35332))};
this->_n_dref_35363=d::Array<float,true>(size_t(this->_n_N_35332));
this->_n_arm_35364=d::Array<uint8_t,true>(size_t(this->_n_N_35332));
this->_n_BS_35368=0.85;
_render=[=]( double _a0,std::shared_ptr<_n_Record_35715> _a1) mutable ->d::String{double _n_t_35619=_a0;
auto _n_binding_35873=(d::present(_a1)?_a1:([&](){auto _n_object_35872=std::make_shared<_n_Record_35715>();return _n_object_35872;})());
std::optional<d::Array<uint8_t,true>> _n_color_35620=_n_binding_35873->_p_color;
{
{double _n_c_35621=0.0;
for(;d::truth((_n_c_35621<3.0));(void)((_n_c_35621++))){d::check_cancel();(void)(d::at(this->_n_dyn_35362,_n_c_35621).fill(0.0));
}}
(void)(this->_n_dref_35363.fill(0.0));
(void)(this->_n_arm_35364.fill(0.0));
(void)(d::forEach(this->_n_aarti_35338,[&]( std::array<double,3> _a0,double _a1) mutable ->void{auto _n_binding_35874=_a0;
double _n_ax_35622=d::at(_n_binding_35874,0.0);
double _n_sw_35623=d::at(_n_binding_35874,1.0);
double _n_sl_35624=d::at(_n_binding_35874,2.0);
double _n_i_35625=_a1;
{
double _n_s_35626=_n_scF_35327(_n_ax_35622);
double _n_u_35627=(1.3*_n_s_35626);
double _n_base_35628=(_n_wlF_35326(_n_ax_35622)-(2.6*_n_s_35626));
double _n_ph_35629=((_n_t_35619*1.1)+(_n_i_35625*1.3));
double _n_fx_35630=((_n_ax_35622+(0.9*_n_u_35627))+((std::cos(_n_ph_35629)*1.1)*_n_u_35627));
double _n_fy_35631=((_n_base_35628-(7.2*_n_u_35627))+((std::sin(_n_ph_35629)*0.6)*_n_u_35627));
double _n_sx0_35632=(_n_ax_35622+(0.62*_n_u_35627));
double _n_sy0_35633=(_n_base_35628-(3.8*_n_u_35627));
double _n_ex_35634=(_n_fx_35630-_n_sx0_35632);
double _n_ey_35635=((_n_fy_35631+(0.6*_n_u_35627))-_n_sy0_35633);
double _n_el_35636=((_n_ex_35634*_n_ex_35634)+(_n_ey_35635*_n_ey_35635));
{double _n_r_35637=std::floor((d::minimum({_n_sy0_35633,_n_fy_35631})-1.0));
for(;d::truth((_n_r_35637<=(d::maximum({_n_sy0_35633,_n_fy_35631})+1.0)));(void)((_n_r_35637++))){d::check_cancel();{double _n_x_35638=std::floor((d::minimum({_n_sx0_35632,_n_fx_35630})-1.0));
for(;d::truth((_n_x_35638<=(d::maximum({_n_sx0_35632,_n_fx_35630})+1.0)));(void)((_n_x_35638++))){d::check_cancel();if((((d::truth((_n_x_35638<0.0))||d::truth((_n_x_35638>=_n_W_35295)))||d::truth((_n_r_35637<0.0)))||d::truth((_n_r_35637>=_n_H_35296)))){d::check_cancel();continue;
}
double _n_px_35639=((_n_x_35638+0.5)-_n_sx0_35632);
double _n_py_35640=((_n_r_35637+0.5)-_n_sy0_35633);
double _n_q_35641=_n_clamp_35319((((_n_px_35639*_n_ex_35634)+(_n_py_35640*_n_ey_35635))/_n_el_35636));
if(d::truth((d::hypot(std::initializer_list<double>{(_n_px_35639-(_n_q_35641*_n_ex_35634)),(_n_py_35640-(_n_q_35641*_n_ey_35635))})<(0.28*_n_u_35627)))){d::check_cancel();(void)(([&](){auto&& _n_array_35875=this->_n_arm_35364;auto _n_index_35876=((_n_r_35637*_n_W_35295)+_n_x_35638);auto _n_value_35877=1.0;d::put(_n_array_35875,_n_index_35876,_n_value_35877);return _n_value_35877;})());
}
}}
}}
double _n_fl_35642=(0.85+([&](){auto _n_left_35878=(0.15*std::sin(((_n_t_35619*13.0)+(_n_i_35625*5.0))));auto _n_right_35879=std::sin(((_n_t_35619*7.3)+_n_i_35625));return (_n_left_35878*_n_right_35879);})());
(void)(this->_n_addGlow_35365(_n_fx_35630,_n_fy_35631,(0.6*_n_u_35627),(1.7*_n_u_35627),_n_fl_35642));
(void)(this->_n_addWash_35366(_n_fx_35630,(_n_fy_35631+(2.0*_n_u_35627)),(7.5*_n_s_35626),(0.34*_n_fl_35642)));
(void)(([&](){auto _n_argument_35880=_n_fx_35630;auto _n_argument_35881=_n_wlF_35326(_n_fx_35630);auto _n_argument_35882=((0.8*_n_s_35626)*_n_sw_35623);auto _n_argument_35883=((15.0*_n_s_35626)*_n_sl_35624);auto _n_argument_35884=(0.75*_n_fl_35642);return this->_n_addStreak_35367(_n_argument_35880,_n_argument_35881,_n_argument_35882,_n_argument_35883,_n_argument_35884);})());

}
}));
for(auto &&_n_item_35885:this->_n_stepLamps_35352){d::check_cancel();auto _n_binding_35886=_n_item_35885;
double _n_k_35643=d::at(_n_binding_35886,0.0);
double _n_ph_35644=d::at(_n_binding_35886,1.0);
{
double _n_v_35645=(0.7+(0.3*std::sin(((_n_t_35619*5.0)+_n_ph_35644))));
(void)(((([&](){auto&& _n_array_35887=d::at(this->_n_dyn_35362,0.0);auto _n_index_35888=_n_k_35643;auto _n_value_35889=(d::at(_n_array_35887,_n_index_35888)+(_n_v_35645*d::at(_n_FLAME_35304,0.0)));d::put(_n_array_35887,_n_index_35888,_n_value_35889);return _n_value_35889;})(),([&](){auto&& _n_array_35890=d::at(this->_n_dyn_35362,1.0);auto _n_index_35891=_n_k_35643;auto _n_value_35892=(d::at(_n_array_35890,_n_index_35891)+((_n_v_35645*d::at(_n_FLAME_35304,1.0))*0.95));d::put(_n_array_35890,_n_index_35891,_n_value_35892);return _n_value_35892;})()),([&](){auto&& _n_array_35893=d::at(this->_n_dyn_35362,2.0);auto _n_index_35894=_n_k_35643;auto _n_value_35895=(d::at(_n_array_35893,_n_index_35894)+(_n_v_35645*d::at(_n_FLAME_35304,2.0)));d::put(_n_array_35893,_n_index_35894,_n_value_35895);return _n_value_35895;})()));

}
}
for(auto &&_n_item_35896:this->_n_diyas_35361){d::check_cancel();auto _n_binding_35897=_n_item_35896;
double _n_x0_35646=d::at(_n_binding_35897,0.0);
double _n_y_35647=d::at(_n_binding_35897,1.0);
double _n_ph_35648=d::at(_n_binding_35897,2.0);
double _n_sz_35649=d::at(_n_binding_35897,3.0);
{
double _n_near_35650=((_n_y_35647-_n_HZ_35297)/(_n_H_35296-_n_HZ_35297));
double _n_x_35651=(d::mod((d::mod((_n_x0_35646+(_n_t_35619*(0.25+(0.9*_n_near_35650)))),260.0)+260.0),260.0)-30.0);
if(((d::truth((_n_x_35651<(-d::number(3.0))))||d::truth((_n_x_35651>(_n_W_35295+3.0))))||d::truth((_n_y_35647<(_n_wlF_35326(_n_x_35651)+0.8))))){d::check_cancel();continue;
}
double _n_fl_35652=(0.8+(0.2*std::sin(((_n_t_35619*9.0)+_n_ph_35648))));
double _n_s_35653=((0.35+(0.9*_n_near_35650))*_n_sz_35649);
(void)(this->_n_addGlow_35365(_n_x_35651,(_n_y_35647-0.3),(0.45+(0.3*_n_s_35653)),(0.6+(1.2*_n_s_35653)),(_n_fl_35652*0.8)));
(void)(this->_n_addStreak_35367(_n_x_35651,(_n_y_35647+0.2),(0.3+(0.35*_n_s_35653)),(2.0+(5.0*_n_s_35653)),(0.6*_n_fl_35652)));

}
}
double _n_drift_35654=((_n_t_35619*0.9)+720.0);
double _n_bx_35655=(d::mod((d::mod(((159.0-(_n_t_35619*0.1))+24.0),250.0)+250.0),250.0)-24.0);
double _n_by_35656=(71.0+(std::sin((_n_t_35619*0.9))*0.15));
{double _n_r_35657=0.0;
for(;d::truth((_n_r_35657<_n_H_35296));(void)((_n_r_35657++))){d::check_cancel();double _n_y_35658=(_n_r_35657+0.5);
{double _n_x_35659=0.0;
for(;d::truth((_n_x_35659<_n_W_35295));(void)((_n_x_35659++))){d::check_cancel();double _n_k_35660=((_n_r_35657*_n_W_35295)+_n_x_35659);
double _n_m_35661=d::at(this->_n_mat_35340,_n_k_35660);
double _n_cr_35662=d::at(this->_n_sR_35341,_n_k_35660);
double _n_cg_35663=d::at(this->_n_sG_35342,_n_k_35660);
double _n_cb_35664=d::at(this->_n_sB_35343,_n_k_35660);
double _n_floor_35665=d::at(this->_n_flo_35344,_n_k_35660);
double _n_fade_35666=1.0;
bool _n_star_35667=false;
if(d::truth((_n_m_35661==_n_SKY_35306))){d::check_cancel();if(d::truth((_n_r_35657<this->_n_CH_35357))){d::check_cancel();double _n_sx_35668=(_n_x_35659+_n_drift_35654);
double _n_ix_35669=std::floor(_n_sx_35668);
double _n_fx_35670=(_n_sx_35668-_n_ix_35669);
double _n_i0_35671=((_n_r_35657*this->_n_CW_35356)+d::mod(_n_ix_35669,this->_n_CW_35356));
double _n_i1_35672=((_n_r_35657*this->_n_CW_35356)+d::mod((_n_ix_35669+1.0),this->_n_CW_35356));
double _n_c_35673=(d::at(this->_n_cover_35358,_n_i0_35671)+((d::at(this->_n_cover_35358,_n_i1_35672)-d::at(this->_n_cover_35358,_n_i0_35671))*_n_fx_35670));
if(d::truth((_n_c_35673>0.01))){d::check_cancel();double _n_l_35674=(d::at(this->_n_clit_35359,_n_i0_35671)+((d::at(this->_n_clit_35359,_n_i1_35672)-d::at(this->_n_clit_35359,_n_i0_35671))*_n_fx_35670));
double _n_lo_35675=_n_smooth_35320(12.0,30.0,_n_y_35658);
double _n_lit_35676=_n_mix_35321((0.3+(0.7*_n_l_35674)),((0.9*_n_l_35674)*_n_l_35674),_n_lo_35675);
double _n_i_35677=(_n_rampAt_35325(((0.56+(0.38*d::at(this->_n_warm_35347,_n_k_35660)))+(0.08*_n_l_35674)))*3.0);
double _n_kr_35678=_n_mix_35321(0.075,d::at(_n_RT_35324,_n_i_35677),_n_lit_35676);
double _n_kg_35679=_n_mix_35321(0.05,d::at(_n_RT_35324,(_n_i_35677+1.0)),_n_lit_35676);
double _n_kb_35680=_n_mix_35321(0.15,d::at(_n_RT_35324,(_n_i_35677+2.0)),_n_lit_35676);
(void)((((_n_cr_35662=_n_mix_35321(_n_cr_35662,_n_kr_35678,_n_c_35673)),(_n_cg_35663=_n_mix_35321(_n_cg_35663,_n_kg_35679,_n_c_35673))),(_n_cb_35664=_n_mix_35321(_n_cb_35664,_n_kb_35680,_n_c_35673))));
(void)((_n_floor_35665=_n_mix_35321(_n_floor_35665,0.06,(_n_c_35673*(1.0-_n_lit_35676)))));
}else {d::check_cancel();if((d::truth((_n_y_35658<24.0))&&d::truth((_n_hash_35316(_n_x_35659,((_n_r_35657*3.0)+11.0))>0.993)))){d::check_cancel();double _n_tw_35681=(0.4+(0.25*std::sin(([&](){auto _n_left_35898=(_n_t_35619*(1.3+(_n_hash_35316(_n_x_35659,_n_r_35657)*2.0)));auto _n_right_35899=(_n_hash_35316(_n_r_35657,_n_x_35659)*6.28);return (_n_left_35898+_n_right_35899);})())));
(void)((((_n_cr_35662=d::maximum({_n_cr_35662,(_n_tw_35681*0.9)})),(_n_cg_35663=d::maximum({_n_cg_35663,(_n_tw_35681*0.88)}))),(_n_cb_35664=d::maximum({_n_cb_35664,_n_tw_35681}))));
(void)((_n_star_35667=true));
}
}
}
}else {d::check_cancel();if(d::truth((_n_m_35661==_n_WATER_35307))){d::check_cancel();double _n_v_35682=((_n_y_35658-_n_HZ_35297)/(_n_H_35296-_n_HZ_35297));
double _n_w_35683=([&](){auto _n_left_35900=(0.6*_n_noise_35317(((_n_x_35659*0.05)+(_n_t_35619*0.08)),((_n_y_35658*0.45)-(_n_t_35619*0.45)),0.0));auto _n_right_35901=(0.4*_n_noise_35317(((_n_x_35659*0.16)-(_n_t_35619*0.15)),((_n_y_35658*0.95)-(_n_t_35619*0.9)),0.0));return (_n_left_35900+_n_right_35901);})();
double _n_swell_35684=(0.55+(0.9*_n_w_35683));
(void)((((_n_cr_35662=(0.035*_n_swell_35684)),(_n_cg_35663=(0.045*_n_swell_35684))),(_n_cb_35664=(0.12*_n_swell_35684))));
double _n_wob_35685=((_n_noise_35317(((_n_x_35659*0.04)+7.0),((_n_y_35658*0.3)-(_n_t_35619*0.6)),0.0)-0.5)*(1.2+(4.0*_n_v_35682)));
double _n_sx_35686=(_n_x_35659+_n_wob_35685);
if(d::truth((_n_sx_35686<0.0))){d::check_cancel();(void)((_n_sx_35686=0.0));
}
if(d::truth((_n_sx_35686>(_n_W_35295-1.001)))){d::check_cancel();(void)((_n_sx_35686=(_n_W_35295-1.001)));
}
double _n_i0_35687=((_n_r_35657*_n_W_35295)+double(d::i32(_n_sx_35686)|d::i32(0.0)));
double _n_fx_35688=(_n_sx_35686-double(d::i32(_n_sx_35686)|d::i32(0.0)));
double _n_dash_35689=([&](){auto _n_argument_35902=0.25;auto _n_argument_35903=0.75;auto _n_argument_35904=_n_noise_35317(((_n_x_35659*0.12)+3.0),((_n_y_35658*0.8)-(_n_t_35619*1.1)),0.0);return _n_smooth_35320(_n_argument_35902,_n_argument_35903,_n_argument_35904);})();
auto _n_ref_35690=[&]( d::Array<float,true> _a0) mutable ->double{d::Array<float,true> _n_a_35691=_a0;
return (d::at(_n_a_35691,_n_i0_35687)+((d::at(_n_a_35691,(_n_i0_35687+1.0))-d::at(_n_a_35691,_n_i0_35687))*_n_fx_35688));};
double _n_reach_35692=([&](){auto _n_left_35905=std::exp((-d::number(std::pow((((_n_x_35659+0.5)-d::at(_n_GLOW_35299,0.0))/15.0),2.0))));auto _n_right_35906=_n_smooth_35320((_n_HZ_35297+2.5),(_n_HZ_35297+5.5),_n_y_35658);return (_n_left_35905*_n_right_35906);})();
double _n_da_35693=_n_mix_35321((0.15+(1.1*_n_dash_35689)),(0.7+(0.5*_n_dash_35689)),_n_reach_35692);
(void)((((_n_cr_35662=(_n_cr_35662+(_n_ref_35690(d::at(this->_n_refl_35354,0.0))*_n_da_35693))),(_n_cg_35663=(_n_cg_35663+(_n_ref_35690(d::at(this->_n_refl_35354,1.0))*_n_da_35693)))),(_n_cb_35664=(_n_cb_35664+(_n_ref_35690(d::at(this->_n_refl_35354,2.0))*_n_da_35693)))));
double _n_q_35694=d::at(this->_n_mirK_35355,_n_k_35660);
if(d::truth((_n_q_35694>=0.0))){d::check_cancel();(void)((((_n_cr_35662=(_n_cr_35662+((d::at(d::at(this->_n_dyn_35362,0.0),_n_q_35694)*0.4)*_n_da_35693))),(_n_cg_35663=(_n_cg_35663+((d::at(d::at(this->_n_dyn_35362,1.0),_n_q_35694)*0.4)*_n_da_35693)))),(_n_cb_35664=(_n_cb_35664+((d::at(d::at(this->_n_dyn_35362,2.0),_n_q_35694)*0.4)*_n_da_35693)))));
}
double _n_fl_35695=(([&](){auto _n_left_35907=_n_ref_35690(this->_n_dref_35363);auto _n_right_35908=_n_ref_35690(this->_n_sref_35353);return (_n_left_35907+_n_right_35908);})()*(0.2+(1.1*_n_dash_35689)));
(void)((((_n_cr_35662=(_n_cr_35662+(_n_fl_35695*d::at(_n_FLAME_35304,0.0)))),(_n_cg_35663=(_n_cg_35663+(_n_fl_35695*d::at(_n_FLAME_35304,1.0))))),(_n_cb_35664=(_n_cb_35664+(_n_fl_35695*d::at(_n_FLAME_35304,2.0))))));
double _n_gw_35696=(1.3+((_n_y_35658-_n_HZ_35297)*0.15));
double _n_gx_35697=(((_n_x_35659+0.5)-d::at(_n_GLOW_35299,0.0))/_n_gw_35696);
if((d::truth((_n_gx_35697>(-d::number(3.0))))&&d::truth((_n_gx_35697<3.0)))){d::check_cancel();double _n_road_35698=([&](){auto _n_left_35909=std::exp(((-d::number(_n_gx_35697))*_n_gx_35697));auto _n_right_35910=std::exp(((-d::number((_n_y_35658-_n_HZ_35297)))/24.0));return (_n_left_35909*_n_right_35910);})();
double _n_rip_35699=_n_noise_35317((((_n_x_35659*0.45)+(_n_y_35658*0.1))-(_n_t_35619*0.3)),((_n_y_35658*1.3)-(_n_t_35619*1.6)),0.0);
double _n_glint_35700=(_n_smooth_35320(0.42,0.78,((0.45*_n_w_35683)+(0.55*_n_rip_35699)))*_n_road_35698);
(void)((((_n_cr_35662=(_n_cr_35662+((1.0*_n_glint_35700)+(0.12*_n_road_35698)))),(_n_cg_35663=(_n_cg_35663+((0.78*_n_glint_35700)+(0.07*_n_road_35698))))),(_n_cb_35664=(_n_cb_35664+((0.42*_n_glint_35700)+(0.04*_n_road_35698))))));
}
(void)((_n_floor_35665=0.12));
(void)((_n_fade_35666=_n_smooth_35320((_n_H_35296+4.0),(_n_H_35296-16.0),_n_y_35658)));
}
}
double _n_lx_35701=((_n_x_35659+0.5)-_n_bx_35655);
if((((d::truth((_n_lx_35701>(-d::number(14.0))))&&d::truth((_n_lx_35701<15.0)))&&d::truth((_n_r_35657>(_n_by_35656-11.0))))&&d::truth((_n_r_35657<(_n_by_35656+11.0))))){d::check_cancel();double _n_cov_35702=0.0;
double _n_rc_35703=0.0;
{double _n_sy2_35704=0.0;
for(;d::truth((_n_sy2_35704<2.0));(void)((_n_sy2_35704++))){d::check_cancel();{double _n_sx2_35705=0.0;
for(;d::truth((_n_sx2_35705<2.0));(void)((_n_sx2_35705++))){d::check_cancel();double _n_px_35706=(((_n_lx_35701-0.25)+(_n_sx2_35705*0.5))/this->_n_BS_35368);
double _n_py_35707=((_n_by_35656-((_n_r_35657+0.25)+(_n_sy2_35704*0.5)))/this->_n_BS_35368);
(void)((_n_cov_35702=(_n_cov_35702+this->_n_boatAt_35369(_n_px_35706,_n_py_35707))));
if(d::truth((_n_m_35661==_n_WATER_35307))){d::check_cancel();(void)((_n_rc_35703=(_n_rc_35703+this->_n_boatAt_35369(_n_px_35706,((-d::number(_n_py_35707))*0.9)))));
}
}}
}}
(void)(((_n_cov_35702=(_n_cov_35702/4.0)),(_n_rc_35703=(_n_rc_35703/4.0))));
if(d::truth((_n_cov_35702>0.0))){d::check_cancel();(void)((((_n_cr_35662=_n_mix_35321(_n_cr_35662,0.035,_n_cov_35702)),(_n_cg_35663=_n_mix_35321(_n_cg_35663,0.022,_n_cov_35702))),(_n_cb_35664=_n_mix_35321(_n_cb_35664,0.035,_n_cov_35702))));
(void)(((_n_floor_35665=_n_mix_35321(_n_floor_35665,0.02,_n_cov_35702)),(_n_star_35667=false)));
}else {d::check_cancel();if(d::truth((_n_rc_35703>0.0))){d::check_cancel();(void)((((_n_cr_35662=(_n_cr_35662*(1.0-(0.8*_n_rc_35703)))),(_n_cg_35663=(_n_cg_35663*(1.0-(0.8*_n_rc_35703))))),(_n_cb_35664=(_n_cb_35664*(1.0-(0.75*_n_rc_35703))))));
}
}
}
if(d::truth(d::at(this->_n_arm_35364,_n_k_35660))){d::check_cancel();(void)(((((_n_cr_35662=(0.035+(d::at(d::at(this->_n_dyn_35362,0.0),_n_k_35660)*0.12))),(_n_cg_35663=(0.022+(d::at(d::at(this->_n_dyn_35362,1.0),_n_k_35660)*0.12)))),(_n_cb_35664=(0.035+(d::at(d::at(this->_n_dyn_35362,2.0),_n_k_35660)*0.12)))),(_n_floor_35665=0.02)));
}else {d::check_cancel();(void)((((_n_cr_35662=(_n_cr_35662+d::at(d::at(this->_n_dyn_35362,0.0),_n_k_35660))),(_n_cg_35663=(_n_cg_35663+d::at(d::at(this->_n_dyn_35362,1.0),_n_k_35660)))),(_n_cb_35664=(_n_cb_35664+d::at(d::at(this->_n_dyn_35362,2.0),_n_k_35660)))));
}
double _n_peak_35708=d::maximum({_n_cr_35662,_n_cg_35663,_n_cb_35664,0.0001});
double _n_level_35709=(_n_clamp_35319((_n_floor_35665+(((1.0-_n_floor_35665)*std::pow(_n_peak_35708,0.72))*0.95)))*_n_fade_35666);
double _n_step_35710=([&](){auto _n_argument_35911=0.0;auto _n_argument_35912=([&](){auto _n_argument_35913=3.0;auto _n_argument_35914=d::round(((_n_level_35709*3.0)+d::at(_n_BAYER_35303,((double(d::i32(_n_r_35657)&d::i32(3.0))*4.0)+double(d::i32(_n_x_35659)&d::i32(3.0))))));return d::minimum({_n_argument_35913,_n_argument_35914});})();return d::maximum({_n_argument_35911,_n_argument_35912});})();
(void)(([&](){auto&& _n_array_35915=this->_n_out_35333;auto _n_index_35916=_n_k_35660;auto _n_value_35917=d::at(_n_DOTS_35300,_n_step_35710);d::put(_n_array_35915,_n_index_35916,_n_value_35917);return _n_value_35917;})());
if(d::truth(_n_color_35620)){d::check_cancel();if(d::truth(_n_star_35667)){d::check_cancel();(void)(([&](){auto&& _n_array_35918=d::read(_n_color_35620);auto _n_index_35919=_n_k_35660;auto _n_value_35920=this->_n_STAR_35331;d::put(_n_array_35918,_n_index_35919,_n_value_35920);return _n_value_35920;})());
}else {d::check_cancel();double _n_want_35711=(d::truth(_n_step_35710)?d::minimum({1.0,((_n_level_35709+0.06)/d::at(_n_COVER_35301,_n_step_35710))}):0.0);
double _n_s_35712=d::minimum({d::at(_n_LIFT_35302,_n_step_35710),((0.3+(0.7*_n_want_35711))/_n_peak_35708)});
(void)(([&](){auto&& _n_array_35921=d::read(_n_color_35620);auto _n_index_35922=_n_k_35660;auto _n_value_35923=([&](){auto _n_argument_35924=_n_clamp_35319((_n_cr_35662*_n_s_35712));auto _n_argument_35925=_n_clamp_35319((_n_cg_35663*_n_s_35712));auto _n_argument_35926=_n_clamp_35319((_n_cb_35664*_n_s_35712));return this->_n_nearest_35335(_n_argument_35924,_n_argument_35925,_n_argument_35926);})();d::put(_n_array_35921,_n_index_35922,_n_value_35923);return _n_value_35923;})());
}
}
}}
}}
d::Array<d::String,false> _n_lines_35713=d::Array<d::String,false>{};
{double _n_r_35714=0.0;
for(;d::truth((_n_r_35714<_n_H_35296));(void)((_n_r_35714++))){d::check_cancel();(void)(_n_lines_35713.push(d::join(this->_n_out_35333.slice((_n_r_35714*_n_W_35295),((_n_r_35714+1.0)*_n_W_35295)),d::String(u""))));
}}
return d::join(_n_lines_35713,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("varanasi-ghats").cols)*ascii::catalog_meta("varanasi-ghats").rows);auto _env=std::make_shared<_n_Record_35715>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &varanasi_ghats_meta(){return catalog_meta("varanasi-ghats");}
std::unique_ptr<Piece> make_varanasi_ghats(const AsciiPieceOptions &o){return std::make_unique<Native_varanasi_ghats>(o);}
}
