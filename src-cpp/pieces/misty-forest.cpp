// Direct, statically typed C++ from src/pieces/misty-forest.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_21164;
struct _n_Record_21449;
struct _n_Record_21164{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_21164> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21164>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_21449{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_21449> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21449>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_21175(double _a0,double _a1);
double _n_noise_21176(double _a0,double _a1,double _a2);
double _n_fbm_21177(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_21178(double _a0);
double _n_smooth_21179(double _a0,double _a1,double _a2);
double _n_mix_21180(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_21181(d::String _a0);
std::shared_ptr<_n_Record_21164> _n_meta_21163=[](){return ([&](){auto _n_object_21452=std::make_shared<_n_Record_21164>();_n_object_21452->_p_name=d::String(u"misty forest");_n_object_21452->_p_category=d::String(u"scenes");_n_object_21452->_p_note=d::String(u"pine ridges fading into morning fog, sunbeams slanting through");_n_object_21452->_p_cols=200.0;_n_object_21452->_p_rows=100.0;_n_object_21452->_p_cell=1.0;_n_object_21452->_p_fps=15.0;_n_object_21452->_p_ground=d::String(u"#090f0e");_n_object_21452->_p_palette=d::Array<d::String,false>{d::String(u"#fffbea"),d::String(u"#fff0c8"),d::String(u"#fbe2a6"),d::String(u"#f2c97e"),d::String(u"#e0a95e"),d::String(u"#b9834a"),d::String(u"#e4ebe6"),d::String(u"#cbe0dc"),d::String(u"#a8d2d0"),d::String(u"#86c0c2"),d::String(u"#68a7ac"),d::String(u"#4f8c93"),d::String(u"#3b7078"),d::String(u"#557570"),d::String(u"#456761"),d::String(u"#365952"),d::String(u"#2a4a44"),d::String(u"#1f3c37"),d::String(u"#172f2b"),d::String(u"#11231f"),d::String(u"#a4a35a"),d::String(u"#8a8f4c"),d::String(u"#6d7440"),d::String(u"#4d5530"),d::String(u"#7a5a3a"),d::String(u"#5b4532"),d::String(u"#a9c3cc"),d::String(u"#8eadb8"),d::String(u"#6f93a2"),d::String(u"#53798a"),d::String(u"#3d6172"),d::String(u"#2b4a5a")};return _n_object_21452;})();}();
const double _n_W_21165=[](){return 200.0;}();
const double _n_H_21166=[](){return 100.0;}();
d::Array<double,false> _n_SUN_21167=[](){return d::Array<double,false>{146.0,45.5};}();
const double _n_SUN_R_21168=[](){return 3.4;}();
const d::String _n_DOTS_21169=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_21170=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_21171=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_21221=_a0;
return ((_n_v_21221/16.0)-0.47);});}();
const double _n_SKY_21172=[](){return (-d::number(1.0));}();
const double _n_FLOOR_21173=[](){return 5.0;}();
const double _n_GIANT_21174=[](){return 6.0;}();
d::Array<d::Array<double,false>,false> _n_LAYERS_21182=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{50.0,6.0,1.6,1.0,2.5,0.48,0.8,1.0,0.14,0.6},d::Array<double,false>{59.0,6.0,2.0,3.0,5.5,0.3,1.3,0.8,0.16,0.8},d::Array<double,false>{69.0,7.0,2.6,4.0,7.0,0.13,2.0,0.66,0.18,0.9},d::Array<double,false>{80.0,6.0,3.4,5.0,9.0,0.03,2.8,0.44,0.14,1.0},d::Array<double,false>{90.0,1.5,10.0,9.0,24.0,0.03,3.4,0.0,0.08,0.6}};}();
const double _n_NEAR_21183=[](){return (double(_n_LAYERS_21182.size())-1.0);}();
double _n_hash_21175(double _a0,double _a1){double _n_x_21222=_a0;
double _n_y_21223=_a1;
{
double _n_h_21224=([&](){auto _n_left_21453=d::imul(double(d::i32(_n_x_21222)|d::i32(0.0)),374761393.0);auto _n_right_21454=d::imul(double(d::i32(_n_y_21223)|d::i32(0.0)),668265263.0);return (_n_left_21453+_n_right_21454);})();
(void)((_n_h_21224=d::imul(double(d::i32(_n_h_21224)^d::i32(double(d::u32(_n_h_21224)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_21224)^d::i32(double(d::u32(_n_h_21224)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_21176(double _a0,double _a1,double _a2){double _n_x_21225=_a0;
double _n_y_21226=_a1;
double _n_period_21227=_a2;
{
double _n_xi_21228=std::floor(_n_x_21225);
double _n_yi_21229=std::floor(_n_y_21226);
double _n_fx_21230=(_n_x_21225-_n_xi_21228);
double _n_fy_21231=(_n_y_21226-_n_yi_21229);
double _n_u_21232=((_n_fx_21230*_n_fx_21230)*(3.0-(2.0*_n_fx_21230)));
double _n_v_21233=((_n_fy_21231*_n_fy_21231)*(3.0-(2.0*_n_fy_21231)));
double _n_x0_21234=_n_xi_21228;
double _n_x1_21235=(_n_xi_21228+1.0);
if(d::truth(_n_period_21227)){d::check_cancel();(void)((_n_x0_21234=d::mod((d::mod(_n_xi_21228,_n_period_21227)+_n_period_21227),_n_period_21227)));
(void)((_n_x1_21235=d::mod((_n_x0_21234+1.0),_n_period_21227)));
}
double _n_a_21236=_n_hash_21175(_n_x0_21234,_n_yi_21229);
double _n_b_21237=_n_hash_21175(_n_x1_21235,_n_yi_21229);
double _n_c_21238=_n_hash_21175(_n_x0_21234,(_n_yi_21229+1.0));
double _n_d_21239=_n_hash_21175(_n_x1_21235,(_n_yi_21229+1.0));
return (((_n_a_21236+((_n_b_21237-_n_a_21236)*_n_u_21232))+((_n_c_21238-_n_a_21236)*_n_v_21233))+(((((_n_a_21236-_n_b_21237)-_n_c_21238)+_n_d_21239)*_n_u_21232)*_n_v_21233));

}
}

double _n_fbm_21177(double _a0,double _a1,double _a2,double _a3){double _n_x_21240=_a0;
double _n_y_21241=_a1;
double _n_octaves_21242=_a2;
double _n_period_21243=_a3;
{
double _n_s_21244=0.0;
double _n_n_21245=0.0;
double _n_amp_21246=0.5;
double _n_f_21247=1.0;
{double _n_i_21248=0.0;
for(;d::truth((_n_i_21248<_n_octaves_21242));(void)((_n_i_21248++))){d::check_cancel();(void)((_n_s_21244=(_n_s_21244+(_n_amp_21246*_n_noise_21176((_n_x_21240*_n_f_21247),(_n_y_21241*_n_f_21247),(_n_period_21243*_n_f_21247))))));
(void)((_n_n_21245=(_n_n_21245+_n_amp_21246)));
(void)((_n_amp_21246=(_n_amp_21246*0.5)));
(void)((_n_f_21247=(_n_f_21247*2.0)));
}}
return (_n_s_21244/_n_n_21245);

}
}

double _n_clamp_21178(double _a0){double _n_v_21249=_a0;
return (d::truth((_n_v_21249<0.0))?0.0:(d::truth((_n_v_21249>1.0))?1.0:_n_v_21249));}

double _n_smooth_21179(double _a0,double _a1,double _a2){double _n_a_21250=_a0;
double _n_b_21251=_a1;
double _n_v_21252=_a2;
{
double _n_k_21253=_n_clamp_21178(((_n_v_21252-_n_a_21250)/(_n_b_21251-_n_a_21250)));
return ((_n_k_21253*_n_k_21253)*(3.0-(2.0*_n_k_21253)));

}
}

double _n_mix_21180(double _a0,double _a1,double _a2){double _n_a_21254=_a0;
double _n_b_21255=_a1;
double _n_k_21256=_a2;
return (_n_a_21254+((_n_b_21255-_n_a_21254)*_n_k_21256));}

d::Array<double,false> _n_hex_21181(d::String _a0){d::String _n_s_21257=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_21258=_a0;
return (([&](){auto _n_argument_21455=d::slice(_n_s_21257,_n_i_21258,(_n_i_21258+2.0));auto _n_argument_21456=16.0;return d::parseInt(_n_argument_21455,_n_argument_21456);})()/255.0);});}

struct Native_misty_forest final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_21184{};
double _n_N_21185{};
d::Array<d::String,false> _n_out_21186{};
d::Array<uint8_t,true> _n_lut_21187{};
d::Array<int8_t,true> _n_layer_21192{};
d::Array<float,true> _n_edge_21193{};
d::Array<float,true> _n_below_21194{};
d::Array<float,true> _n_tex_21195{};
d::Array<float,true> _n_ground_21196{};
d::Array<uint8_t,true> _n_giant_21197{};
d::Array<float,true> _n_sr_21198{};
d::Array<float,true> _n_sg_21199{};
d::Array<float,true> _n_sb_21200{};
d::Array<float,true> _n_fogAmt_21201{};
d::Array<float,true> _n_fogSpeed_21202{};
d::Array<float,true> _n_rayAmt_21203{};
d::Array<float,true> _n_sunS_21204{};
d::Array<float,true> _n_floorLit_21205{};
d::Array<float,true> _n_lift_21206{};
d::Array<float,true> _n_cloudAmt_21207{};
d::Array<float,true> _n_abin_21208{};
d::Array<float,true> _n_dist_21209{};
double _n_RA_21210{};
double _n_FW_21211{};
d::Array<float,true> _n_fog_21212{};
double _n_CH_21213{};
d::Array<float,true> _n_cloud_21214{};
d::Array<d::Array<double,false>,false> _n_SHAFTS_21215{};
d::Array<float,true> _n_rayA_21216{};
d::Array<float,true> _n_rayB_21217{};
d::Array<std::array<double,5>,false> _n_motes_21218{};
d::Array<float,true> _n_mote_21219{};
d::Array<double,false> _n_moteCells_21220{};
std::function<d::String(double,std::shared_ptr<_n_Record_21449>)> _render;
double _n_nearest_21188(double _a0,double _a1,double _a2){double _n_r_21259=_a0;
double _n_g_21260=_a1;
double _n_b_21261=_a2;
{
double _n_k_21262=([&](){auto _n_left_21736=([&](){auto _n_left_21738=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_21259*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_21739=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_21260*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_21738)|d::i32(_n_right_21739));})();auto _n_right_21737=d::minimum({31.0,double(d::i32((_n_b_21261*31.99))|d::i32(0.0))});return double(d::i32(_n_left_21736)|d::i32(_n_right_21737));})();
if(d::truth((d::at(this->_n_lut_21187,_n_k_21262)!=255.0))){d::check_cancel();return d::at(this->_n_lut_21187,_n_k_21262);
}
double _n_best_21263=0.0;
double _n_bd_21264=1000000000.0;
{double _n_i_21265=0.0;
for(;d::truth((_n_i_21265<double(this->_n_P_21184.size())));(void)((_n_i_21265++))){d::check_cancel();double _n_dr_21266=(d::at(d::at(this->_n_P_21184,_n_i_21265),0.0)-_n_r_21259);
double _n_dg_21267=(d::at(d::at(this->_n_P_21184,_n_i_21265),1.0)-_n_g_21260);
double _n_db_21268=(d::at(d::at(this->_n_P_21184,_n_i_21265),2.0)-_n_b_21261);
double _n_d_21269=((((0.3*_n_dr_21266)*_n_dr_21266)+((0.5*_n_dg_21267)*_n_dg_21267))+((0.2*_n_db_21268)*_n_db_21268));
if(d::truth((_n_d_21269<_n_bd_21264))){d::check_cancel();(void)(((_n_bd_21264=_n_d_21269),(_n_best_21263=_n_i_21265)));
}
}}
return ([&](){auto&& _n_array_21740=this->_n_lut_21187;auto _n_index_21741=_n_k_21262;auto _n_value_21742=_n_best_21263;d::put(_n_array_21740,_n_index_21741,_n_value_21742);return _n_value_21742;})();

}
}

double _n_fogR_21189(double _a0){double _n_s_21270=_a0;
return _n_mix_21180(0.7,1.05,_n_s_21270);}

double _n_fogG_21190(double _a0){double _n_s_21271=_a0;
return _n_mix_21180(0.92,0.92,_n_s_21271);}

double _n_fogB_21191(double _a0){double _n_s_21272=_a0;
return _n_mix_21180(0.9,0.6,_n_s_21272);}

explicit Native_misty_forest(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_21184=d::map(_n_meta_21163->_p_palette,_n_hex_21181);
this->_n_N_21185=(_n_W_21165*_n_H_21166);
this->_n_out_21186=d::Array<d::String,false>(size_t(this->_n_N_21185));
this->_n_lut_21187=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_layer_21192=d::Array<int8_t,true>(size_t(this->_n_N_21185)).fill(_n_SKY_21172);
this->_n_edge_21193=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_below_21194=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_tex_21195=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_ground_21196=d::Array<float,true>(size_t(this->_n_N_21185));
(void)(d::forEach(_n_LAYERS_21182,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_21457=_a0;
double _n_Y_21273=d::at(_n_binding_21457,0.0);
double _n_amp_21274=d::at(_n_binding_21457,1.0);
double _n_gap_21275=d::at(_n_binding_21457,2.0);
double _n_h0_21276=d::at(_n_binding_21457,3.0);
double _n_h1_21277=d::at(_n_binding_21457,4.0);
double _n_i_21278=_a1;
{
auto _n_ridge_21279=[&]( double _a0) mutable ->double{double _n_x_21280=_a0;
return ([&](){auto _n_left_21458=(_n_Y_21273+((_n_amp_21274*(_n_fbm_21177((_n_x_21280*(0.018+(_n_i_21278*0.003))),((_n_i_21278*13.0)+2.0),3.0,0.0)-0.5))*(d::truth((_n_i_21278<3.0))?4.0:3.0)));auto _n_right_21459=((d::truth((_n_i_21278>0.0))&&d::truth((_n_i_21278<_n_NEAR_21183)))?((2.0+(_n_i_21278*2.0))*std::exp((-d::number(std::pow((((_n_x_21280-d::at(_n_SUN_21167,0.0))-4.0)/38.0),2.0))))):0.0);return (_n_left_21458+_n_right_21459);})();};
d::Array<float,true> _n_base_21281=d::Array<float,true>(d::from(_n_W_21165,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_x_21283=_a1;
return _n_ridge_21279(_n_x_21283);}));
d::Array<uint8_t,true> _n_fill_21284=d::Array<uint8_t,true>(size_t(this->_n_N_21185));
d::Array<uint8_t,true> _n_spire_21285=d::Array<uint8_t,true>(size_t(this->_n_N_21185));
{double _n_x_21286=0.0;
for(;d::truth((_n_x_21286<_n_W_21165));(void)((_n_x_21286++))){d::check_cancel();{double _n_r_21287=([&](){auto _n_argument_21460=0.0;auto _n_argument_21461=std::floor(_n_ridge_21279(_n_x_21286));return d::maximum({_n_argument_21460,_n_argument_21461});})();
for(;d::truth((_n_r_21287<_n_H_21166));(void)((_n_r_21287++))){d::check_cancel();(void)(([&](){auto&& _n_array_21462=_n_fill_21284;auto _n_index_21463=((_n_r_21287*_n_W_21165)+_n_x_21286);auto _n_value_21464=1.0;d::put(_n_array_21462,_n_index_21463,_n_value_21464);return _n_value_21464;})());
}}
}}
{double _n_tx_21288=((-d::number(2.0))+(_n_hash_21175(_n_i_21278,1.0)*_n_gap_21275));
for(;d::truth((_n_tx_21288<(_n_W_21165+2.0)));(void)((_n_tx_21288=(_n_tx_21288+(_n_gap_21275*(0.7+(_n_hash_21175(double(d::i32(_n_tx_21288)|d::i32(0.0)),(_n_i_21278+3.0))*0.7))))))){d::check_cancel();if(((d::truth((_n_i_21278==_n_NEAR_21183))&&d::truth((_n_tx_21288>92.0)))&&d::truth((_n_tx_21288<140.0)))){d::check_cancel();continue;
}
double _n_th_21289=(_n_h0_21276+((_n_h1_21277-_n_h0_21276)*_n_hash_21175(double(d::i32((_n_tx_21288*7.0))|d::i32(0.0)),(_n_i_21278+5.0))));
double _n_tip_21290=(_n_ridge_21279(_n_tx_21288)-_n_th_21289);
double _n_tier_21291=(2.0+(_n_th_21289*0.12));
{double _n_r_21292=([&](){auto _n_argument_21465=0.0;auto _n_argument_21466=std::floor(_n_tip_21290);return d::maximum({_n_argument_21465,_n_argument_21466});})();
for(;d::truth((_n_r_21292<([&](){auto _n_argument_21467=_n_H_21166;auto _n_argument_21468=(_n_ridge_21279(_n_tx_21288)+2.0);return d::minimum({_n_argument_21467,_n_argument_21468});})()));(void)((_n_r_21292++))){d::check_cancel();double _n_d_21293=((_n_r_21292+0.5)-_n_tip_21290);
if(d::truth((_n_d_21293<0.0))){d::check_cancel();continue;
}
double _n_saw_21294=(d::mod(_n_d_21293,_n_tier_21291)/_n_tier_21291);
double _n_half_21295=(((_n_d_21293*0.3)*(0.6+(0.5*_n_saw_21294)))+0.35);
{double _n_x_21296=([&](){auto _n_argument_21469=0.0;auto _n_argument_21470=std::floor((_n_tx_21288-_n_half_21295));return d::maximum({_n_argument_21469,_n_argument_21470});})();
for(;d::truth((_n_x_21296<=([&](){auto _n_argument_21471=(_n_W_21165-1.0);auto _n_argument_21472=std::ceil((_n_tx_21288+_n_half_21295));return d::minimum({_n_argument_21471,_n_argument_21472});})()));(void)((_n_x_21296++))){d::check_cancel();double _n_dx_21297=std::fabs(((_n_x_21296+0.5)-_n_tx_21288));
if(d::truth((_n_dx_21297>_n_half_21295))){d::check_cancel();continue;
}
double _n_k_21298=((_n_r_21292*_n_W_21165)+_n_x_21296);
(void)(([&](){auto&& _n_array_21473=_n_fill_21284;auto _n_index_21474=_n_k_21298;auto _n_value_21475=([&](){auto&& _n_array_21476=_n_spire_21285;auto _n_index_21477=_n_k_21298;auto _n_value_21478=1.0;d::put(_n_array_21476,_n_index_21477,_n_value_21478);return _n_value_21478;})();d::put(_n_array_21473,_n_index_21474,_n_value_21475);return _n_value_21475;})());
if(d::truth((_n_i_21278==_n_NEAR_21183))){d::check_cancel();(void)(([&](){auto&& _n_array_21479=this->_n_tex_21195;auto _n_index_21480=_n_k_21298;auto _n_value_21481=([&](){auto _n_left_21482=([&](){auto _n_left_21484=_n_smooth_21179(0.62,0.95,_n_saw_21294);auto _n_right_21485=_n_smooth_21179(0.3,0.85,(_n_dx_21297/_n_half_21295));return (_n_left_21484*_n_right_21485);})();auto _n_right_21483=(0.55+(0.45*_n_hash_21175(_n_x_21296,(_n_r_21292*5.0))));return (_n_left_21482*_n_right_21483);})();d::put(_n_array_21479,_n_index_21480,_n_value_21481);return _n_value_21481;})());
}
}}
}}
}}
d::Array<float,true> _n_top_21299=d::Array<float,true>(size_t(_n_W_21165)).fill(_n_H_21166);
{double _n_x_21300=0.0;
for(;d::truth((_n_x_21300<_n_W_21165));(void)((_n_x_21300++))){d::check_cancel();{double _n_r_21301=0.0;
for(;d::truth((_n_r_21301<_n_H_21166));(void)((_n_r_21301++))){d::check_cancel();if(d::truth(d::at(_n_fill_21284,((_n_r_21301*_n_W_21165)+_n_x_21300)))){d::check_cancel();(void)(([&](){auto&& _n_array_21486=_n_top_21299;auto _n_index_21487=_n_x_21300;auto _n_value_21488=_n_r_21301;d::put(_n_array_21486,_n_index_21487,_n_value_21488);return _n_value_21488;})());
break;
}
}}
}}
d::Array<float,true> _n_line_21302=d::map(_n_top_21299,[&]( double _a0,double _a1) mutable ->double{double _n___21303=_a0;
double _n_x_21304=_a1;
{
double _n_s_21305=0.0;
{double _n_d_21306=(-d::number(3.0));
for(;d::truth((_n_d_21306<=3.0));(void)((_n_d_21306++))){d::check_cancel();(void)((_n_s_21305=(_n_s_21305+d::at(_n_top_21299,([&](){auto _n_argument_21489=(_n_W_21165-1.0);auto _n_argument_21490=d::maximum({0.0,(_n_x_21304+_n_d_21306)});return d::minimum({_n_argument_21489,_n_argument_21490});})()))));
}}
return d::maximum({(_n_s_21305/7.0),d::at(_n_top_21299,_n_x_21304)});

}
});
auto _n_open_21307=[&]( double _a0,double _a1) mutable ->bool{double _n_xx_21308=_a0;
double _n_rr_21309=_a1;
return ([&]()->bool{auto _n_logical_21491=([&]()->bool{auto _n_logical_21493=(_n_xx_21308>=0.0);return d::truth(_n_logical_21493)?(_n_xx_21308<_n_W_21165):_n_logical_21493;})();return d::truth(_n_logical_21491)?([&]()->bool{auto _n_logical_21492=(_n_rr_21309<0.0);return d::truth(_n_logical_21492)?_n_logical_21492:(!d::truth(d::at(_n_fill_21284,((_n_rr_21309*_n_W_21165)+_n_xx_21308))));})():_n_logical_21491;})();};
{double _n_r_21310=0.0;
for(;d::truth((_n_r_21310<_n_H_21166));(void)((_n_r_21310++))){d::check_cancel();{double _n_x_21311=0.0;
for(;d::truth((_n_x_21311<_n_W_21165));(void)((_n_x_21311++))){d::check_cancel();double _n_k_21312=((_n_r_21310*_n_W_21165)+_n_x_21311);
if(d::truth((!d::truth(d::at(_n_fill_21284,_n_k_21312))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_21494=this->_n_layer_21192;auto _n_index_21495=_n_k_21312;auto _n_value_21496=((d::truth((_n_i_21278==_n_NEAR_21183))&&d::truth((!d::truth(d::at(_n_spire_21285,_n_k_21312)))))?_n_FLOOR_21173:_n_i_21278);d::put(_n_array_21494,_n_index_21495,_n_value_21496);return _n_value_21496;})());
if(d::truth((_n_i_21278!=_n_NEAR_21183))){d::check_cancel();(void)(([&](){auto&& _n_array_21497=this->_n_tex_21195;auto _n_index_21498=_n_k_21312;auto _n_value_21499=0.0;d::put(_n_array_21497,_n_index_21498,_n_value_21499);return _n_value_21499;})());
}
(void)(([&](){auto&& _n_array_21500=this->_n_below_21194;auto _n_index_21501=_n_k_21312;auto _n_value_21502=((_n_r_21310+0.5)-d::at(_n_line_21302,_n_x_21311));d::put(_n_array_21500,_n_index_21501,_n_value_21502);return _n_value_21502;})());
(void)(([&](){auto&& _n_array_21503=this->_n_ground_21196;auto _n_index_21504=_n_k_21312;auto _n_value_21505=d::at(_n_base_21281,_n_x_21311);d::put(_n_array_21503,_n_index_21504,_n_value_21505);return _n_value_21505;})());
double _n_toward_21313=(d::truth((_n_x_21311<d::at(_n_SUN_21167,0.0)))?1.0:(-d::number(1.0)));
(void)(([&](){auto&& _n_array_21506=this->_n_edge_21193;auto _n_index_21507=_n_k_21312;auto _n_value_21508=((d::truth(_n_open_21307((_n_x_21311+_n_toward_21313),_n_r_21310))||d::truth(_n_open_21307(_n_x_21311,(_n_r_21310-1.0))))?1.0:(d::truth(_n_open_21307((_n_x_21311+(2.0*_n_toward_21313)),_n_r_21310))?0.5:0.0));d::put(_n_array_21506,_n_index_21507,_n_value_21508);return _n_value_21508;})());
}}
}}

}
}));
this->_n_giant_21197=d::Array<uint8_t,true>(size_t(this->_n_N_21185));
for(auto &&_n_item_21509:d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,(-d::number(12.0)),15.0,7.0},d::Array<double,false>{192.0,12.0,7.0,5.0}}){d::check_cancel();auto _n_binding_21510=_n_item_21509;
double _n_gx_21314=d::at(_n_binding_21510,0.0);
double _n_tip_21315=d::at(_n_binding_21510,1.0);
double _n_spread_21316=d::at(_n_binding_21510,2.0);
double _n_tier_21317=d::at(_n_binding_21510,3.0);
{
{double _n_r_21318=([&](){auto _n_argument_21511=0.0;auto _n_argument_21512=std::floor(_n_tip_21315);return d::maximum({_n_argument_21511,_n_argument_21512});})();
for(;d::truth((_n_r_21318<_n_H_21166));(void)((_n_r_21318++))){d::check_cancel();double _n_d_21319=((_n_r_21318+0.5)-_n_tip_21315);
double _n_saw_21320=(d::mod(_n_d_21319,_n_tier_21317)/_n_tier_21317);
double _n_half_21321=d::minimum({(_n_spread_21316*(0.5+(0.5*_n_saw_21320))),(((_n_d_21319*0.34)*(0.45+(0.7*_n_saw_21320)))+0.5)});
{double _n_x_21322=([&](){auto _n_argument_21513=0.0;auto _n_argument_21514=std::floor((_n_gx_21314-_n_half_21321));return d::maximum({_n_argument_21513,_n_argument_21514});})();
for(;d::truth((_n_x_21322<=([&](){auto _n_argument_21515=(_n_W_21165-1.0);auto _n_argument_21516=std::ceil((_n_gx_21314+_n_half_21321));return d::minimum({_n_argument_21515,_n_argument_21516});})()));(void)((_n_x_21322++))){d::check_cancel();double _n_dx_21323=std::fabs(((_n_x_21322+0.5)-_n_gx_21314));
double _n_outer_21324=(d::truth(((((_n_x_21322+0.5)-_n_gx_21314)*(_n_gx_21314-(_n_W_21165/2.0)))>0.0))?1.6:1.0);
double _n_ragged_21325=((_n_half_21321*_n_outer_21324)*(0.82+(0.3*_n_noise_21176((_n_x_21322*0.5),(_n_r_21318*0.4),0.0))));
if((d::truth((_n_dx_21323<=_n_ragged_21325))||d::truth((_n_dx_21323<0.9)))){d::check_cancel();double _n_k_21326=((_n_r_21318*_n_W_21165)+_n_x_21322);
(void)(([&](){auto&& _n_array_21517=this->_n_giant_21197;auto _n_index_21518=_n_k_21326;auto _n_value_21519=1.0;d::put(_n_array_21517,_n_index_21518,_n_value_21519);return _n_value_21519;})());
(void)(([&](){auto&& _n_array_21520=this->_n_tex_21195;auto _n_index_21521=_n_k_21326;auto _n_value_21522=([&](){auto _n_left_21523=([&](){auto _n_left_21525=_n_smooth_21179(0.66,0.96,_n_saw_21320);auto _n_right_21526=_n_smooth_21179(0.25,0.8,(_n_dx_21323/_n_ragged_21325));return (_n_left_21525*_n_right_21526);})();auto _n_right_21524=(0.5+(0.5*_n_hash_21175((_n_x_21322*3.0),_n_r_21318)));return (_n_left_21523*_n_right_21524);})();d::put(_n_array_21520,_n_index_21521,_n_value_21522);return _n_value_21522;})());
}
}}
}}

}
}
{double _n_k_21327=0.0;
for(;d::truth((_n_k_21327<this->_n_N_21185));(void)((_n_k_21327++))){d::check_cancel();if(d::truth(d::at(this->_n_giant_21197,_n_k_21327))){d::check_cancel();(void)((([&](){auto&& _n_array_21527=this->_n_layer_21192;auto _n_index_21528=_n_k_21327;auto _n_value_21529=_n_GIANT_21174;d::put(_n_array_21527,_n_index_21528,_n_value_21529);return _n_value_21529;})(),([&](){auto&& _n_array_21530=this->_n_below_21194;auto _n_index_21531=_n_k_21327;auto _n_value_21532=0.0;d::put(_n_array_21530,_n_index_21531,_n_value_21532);return _n_value_21532;})()));
}
}}
{
auto _n_open_21328=[&]( double _a0,double _a1) mutable ->bool{double _n_x_21329=_a0;
double _n_r_21330=_a1;
return ([&]()->bool{auto _n_logical_21533=([&]()->bool{auto _n_logical_21535=(_n_x_21329>=0.0);return d::truth(_n_logical_21535)?(_n_x_21329<_n_W_21165):_n_logical_21535;})();return d::truth(_n_logical_21533)?([&]()->bool{auto _n_logical_21534=(_n_r_21330<0.0);return d::truth(_n_logical_21534)?_n_logical_21534:(!d::truth(d::at(this->_n_giant_21197,((_n_r_21330*_n_W_21165)+_n_x_21329))));})():_n_logical_21533;})();};
{double _n_r_21331=0.0;
for(;d::truth((_n_r_21331<_n_H_21166));(void)((_n_r_21331++))){d::check_cancel();{double _n_x_21332=0.0;
for(;d::truth((_n_x_21332<_n_W_21165));(void)((_n_x_21332++))){d::check_cancel();double _n_k_21333=((_n_r_21331*_n_W_21165)+_n_x_21332);
if(d::truth((!d::truth(d::at(this->_n_giant_21197,_n_k_21333))))){d::check_cancel();continue;
}
double _n_tx_21334=(d::truth((_n_x_21332<d::at(_n_SUN_21167,0.0)))?1.0:(-d::number(1.0)));
(void)(([&](){auto&& _n_array_21536=this->_n_edge_21193;auto _n_index_21537=_n_k_21333;auto _n_value_21538=((d::truth(_n_open_21328((_n_x_21332+_n_tx_21334),_n_r_21331))||d::truth(_n_open_21328(_n_x_21332,(_n_r_21331-1.0))))?1.0:(d::truth(_n_open_21328((_n_x_21332+(2.0*_n_tx_21334)),_n_r_21331))?0.6:0.0));d::put(_n_array_21536,_n_index_21537,_n_value_21538);return _n_value_21538;})());
}}
}}

}
this->_n_sr_21198=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_sg_21199=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_sb_21200=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_fogAmt_21201=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_fogSpeed_21202=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_rayAmt_21203=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_sunS_21204=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_floorLit_21205=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_lift_21206=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_cloudAmt_21207=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_abin_21208=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_dist_21209=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_RA_21210=720.0;
{double _n_r_21335=0.0;
for(;d::truth((_n_r_21335<_n_H_21166));(void)((_n_r_21335++))){d::check_cancel();{double _n_x_21336=0.0;
for(;d::truth((_n_x_21336<_n_W_21165));(void)((_n_x_21336++))){d::check_cancel();double _n_k_21337=((_n_r_21335*_n_W_21165)+_n_x_21336);
double _n_y_21338=(_n_r_21335+0.5);
double _n_L_21339=d::at(this->_n_layer_21192,_n_k_21337);
double _n_dx_21340=((_n_x_21336+0.5)-d::at(_n_SUN_21167,0.0));
double _n_dy_21341=(_n_y_21338-d::at(_n_SUN_21167,1.0));
double _n_ang_21342=std::atan2(_n_dy_21341,_n_dx_21340);
(void)(([&](){auto&& _n_array_21539=this->_n_abin_21208;auto _n_index_21540=_n_k_21337;auto _n_value_21541=d::mod((((_n_ang_21342/(ascii::PI*2.0))*this->_n_RA_21210)+this->_n_RA_21210),this->_n_RA_21210);d::put(_n_array_21539,_n_index_21540,_n_value_21541);return _n_value_21541;})());
double _n_d_21343=([&](){auto&& _n_array_21542=this->_n_dist_21209;auto _n_index_21543=_n_k_21337;auto _n_value_21544=std::sqrt(((_n_dx_21340*_n_dx_21340)+(_n_dy_21341*_n_dy_21341)));d::put(_n_array_21542,_n_index_21543,_n_value_21544);return _n_value_21544;})();
double _n_s_21344=([&](){auto&& _n_array_21545=this->_n_sunS_21204;auto _n_index_21546=_n_k_21337;auto _n_value_21547=std::exp(((-d::number(std::sqrt(((_n_dx_21340*_n_dx_21340)+((_n_dy_21341*_n_dy_21341)*1.96)))))/30.0));d::put(_n_array_21545,_n_index_21546,_n_value_21547);return _n_value_21547;})();
double _n_bloom_21345=([&](){auto _n_left_21548=(std::exp(((-d::number(_n_d_21343))/16.0))*0.25);auto _n_right_21549=(std::exp(((-d::number(_n_d_21343))/6.0))*0.1);return (_n_left_21548+_n_right_21549);})();
double _n_cr_21346{};
double _n_cg_21347{};
double _n_cb_21348{};
double _n_ray_21349{};
if(d::truth((_n_L_21339==_n_SKY_21172))){d::check_cancel();double _n_v_21350=_n_clamp_21178((_n_y_21338/52.0));
double _n_p_21351=std::pow(_n_v_21350,1.6);
double _n_veil_21352=(0.95+(0.1*_n_fbm_21177((_n_x_21336*0.04),(_n_y_21338*0.08),3.0,0.0)));
(void)((((_n_cr_21346=(_n_mix_21180(0.065,0.36,_n_p_21351)*_n_veil_21352)),(_n_cg_21347=(_n_mix_21180(0.14,0.58,_n_p_21351)*_n_veil_21352))),(_n_cb_21348=(_n_mix_21180(0.17,0.62,_n_p_21351)*_n_veil_21352))));
double _n_band_21353=([&](){auto _n_left_21550=(0.75*_n_smooth_21179(28.0,50.0,_n_y_21338));auto _n_right_21551=(0.55+(0.75*_n_fbm_21177((_n_x_21336*0.025),(_n_y_21338*0.16),3.0,0.0)));return (_n_left_21550*_n_right_21551);})();
(void)((((_n_cr_21346=([&](){auto _n_argument_21552=_n_cr_21346;auto _n_argument_21553=this->_n_fogR_21189(0.0);auto _n_argument_21554=_n_band_21353;return _n_mix_21180(_n_argument_21552,_n_argument_21553,_n_argument_21554);})()),(_n_cg_21347=([&](){auto _n_argument_21555=_n_cg_21347;auto _n_argument_21556=this->_n_fogG_21190(0.0);auto _n_argument_21557=_n_band_21353;return _n_mix_21180(_n_argument_21555,_n_argument_21556,_n_argument_21557);})())),(_n_cb_21348=([&](){auto _n_argument_21558=_n_cb_21348;auto _n_argument_21559=this->_n_fogB_21191(0.0);auto _n_argument_21560=_n_band_21353;return _n_mix_21180(_n_argument_21558,_n_argument_21559,_n_argument_21560);})())));
double _n_kw_21354=(_n_s_21344*0.55);
double _n_kb_21355=(0.5+(0.5*std::exp(((-d::number(_n_d_21343))/9.0))));
(void)((((_n_cr_21346=([&](){auto _n_argument_21561=_n_cr_21346;auto _n_argument_21562=(this->_n_fogR_21189(_n_s_21344)*_n_kb_21355);auto _n_argument_21563=_n_kw_21354;return _n_mix_21180(_n_argument_21561,_n_argument_21562,_n_argument_21563);})()),(_n_cg_21347=([&](){auto _n_argument_21564=_n_cg_21347;auto _n_argument_21565=(this->_n_fogG_21190(_n_s_21344)*_n_kb_21355);auto _n_argument_21566=_n_kw_21354;return _n_mix_21180(_n_argument_21564,_n_argument_21565,_n_argument_21566);})())),(_n_cb_21348=([&](){auto _n_argument_21567=_n_cb_21348;auto _n_argument_21568=(this->_n_fogB_21191(_n_s_21344)*_n_kb_21355);auto _n_argument_21569=_n_kw_21354;return _n_mix_21180(_n_argument_21567,_n_argument_21568,_n_argument_21569);})())));
double _n_glow_21356=([&](){auto _n_left_21570=(std::exp(((-d::number(_n_d_21343))/3.0))*0.3);auto _n_right_21571=(std::exp(((-d::number(_n_d_21343))/10.0))*0.18);return (_n_left_21570+_n_right_21571);})();
(void)((((_n_cr_21346=(_n_cr_21346+(_n_glow_21356+_n_bloom_21345))),(_n_cg_21347=(_n_cg_21347+((_n_glow_21356*0.9)+(_n_bloom_21345*0.78))))),(_n_cb_21348=(_n_cb_21348+((_n_glow_21356*0.66)+(_n_bloom_21345*0.45))))));
double _n_disc_21357=_n_smooth_21179((_n_SUN_R_21168+0.6),(_n_SUN_R_21168-0.4),_n_d_21343);
(void)((((_n_cr_21346=_n_mix_21180(_n_cr_21346,1.3,_n_disc_21357)),(_n_cg_21347=_n_mix_21180(_n_cg_21347,1.24,_n_disc_21357))),(_n_cb_21348=_n_mix_21180(_n_cb_21348,1.08,_n_disc_21357))));
(void)(([&](){auto&& _n_array_21572=this->_n_fogAmt_21201;auto _n_index_21573=_n_k_21337;auto _n_value_21574=(0.3*_n_smooth_21179(30.0,50.0,_n_y_21338));d::put(_n_array_21572,_n_index_21573,_n_value_21574);return _n_value_21574;})());
(void)(([&](){auto&& _n_array_21575=this->_n_fogSpeed_21202;auto _n_index_21576=_n_k_21337;auto _n_value_21577=0.4;d::put(_n_array_21575,_n_index_21576,_n_value_21577);return _n_value_21577;})());
(void)(([&](){auto&& _n_array_21578=this->_n_cloudAmt_21207;auto _n_index_21579=_n_k_21337;auto _n_value_21580=([&](){auto _n_left_21581=([&](){auto _n_left_21583=(0.75*_n_smooth_21179(5.0,15.0,_n_y_21338));auto _n_right_21584=_n_smooth_21179(44.0,28.0,_n_y_21338);return (_n_left_21583*_n_right_21584);})();auto _n_right_21582=_n_smooth_21179((_n_SUN_R_21168+2.0),(_n_SUN_R_21168+8.0),_n_d_21343);return (_n_left_21581*_n_right_21582);})();d::put(_n_array_21578,_n_index_21579,_n_value_21580);return _n_value_21580;})());
(void)((_n_ray_21349=(0.35*_n_smooth_21179(26.0,46.0,_n_y_21338))));
(void)(([&](){auto&& _n_array_21585=this->_n_lift_21206;auto _n_index_21586=_n_k_21337;auto _n_value_21587=0.04;d::put(_n_array_21585,_n_index_21586,_n_value_21587);return _n_value_21587;})());
}else {d::check_cancel();if(d::truth((_n_L_21339<=(_n_NEAR_21183-1.0)))){d::check_cancel();auto _n_binding_21588=d::at(_n_LAYERS_21182,_n_L_21339);
double _n_haze_21358=d::at(_n_binding_21588,5.0);
double _n_speed_21359=d::at(_n_binding_21588,6.0);
double _n_M_21360=d::at(_n_binding_21588,7.0);
double _n_drift_21361=d::at(_n_binding_21588,8.0);
double _n_beam_21362=d::at(_n_binding_21588,9.0);
double _n_pool_21363=([&](){auto _n_left_21589=_n_smooth_21179(2.5,(8.0+(_n_L_21339*1.5)),d::at(this->_n_below_21194,_n_k_21337));auto _n_right_21590=_n_smooth_21179(20.0,11.0,d::at(this->_n_below_21194,_n_k_21337));return (_n_left_21589*_n_right_21590);})();
double _n_sheet_21364=([&](){auto _n_left_21591=std::exp((-d::number(std::pow(((_n_y_21338-(d::at(this->_n_ground_21196,_n_k_21337)+5.0))/3.0),2.0))));auto _n_right_21592=(0.75+(0.5*_n_fbm_21177((_n_x_21336*0.035),(_n_L_21339*7.3),3.0,0.0)));return (_n_left_21591*_n_right_21592);})();
double _n_mist_21365=_n_clamp_21178((d::maximum({(_n_pool_21363*0.5),_n_sheet_21364})*_n_M_21360));
double _n_h_21366=_n_clamp_21178((_n_haze_21358+((1.0-_n_haze_21358)*_n_mist_21365)));
double _n_veil_21367=(0.9+(0.2*_n_fbm_21177((_n_x_21336*0.06),(_n_y_21338*0.12),3.0,0.0)));
double _n_pr_21368=0.02;
double _n_pg_21369=0.075;
double _n_pb_21370=0.07;
(void)((((_n_cr_21346=([&](){auto _n_argument_21593=_n_pr_21368;auto _n_argument_21594=(this->_n_fogR_21189(_n_s_21344)*_n_veil_21367);auto _n_argument_21595=_n_h_21366;return _n_mix_21180(_n_argument_21593,_n_argument_21594,_n_argument_21595);})()),(_n_cg_21347=([&](){auto _n_argument_21596=_n_pg_21369;auto _n_argument_21597=(this->_n_fogG_21190(_n_s_21344)*_n_veil_21367);auto _n_argument_21598=_n_h_21366;return _n_mix_21180(_n_argument_21596,_n_argument_21597,_n_argument_21598);})())),(_n_cb_21348=([&](){auto _n_argument_21599=_n_pb_21370;auto _n_argument_21600=(this->_n_fogB_21191(_n_s_21344)*_n_veil_21367);auto _n_argument_21601=_n_h_21366;return _n_mix_21180(_n_argument_21599,_n_argument_21600,_n_argument_21601);})())));
(void)((((_n_cr_21346=(_n_cr_21346+(_n_bloom_21345*_n_h_21366))),(_n_cg_21347=(_n_cg_21347+((_n_bloom_21345*0.78)*_n_h_21366)))),(_n_cb_21348=(_n_cb_21348+((_n_bloom_21345*0.45)*_n_h_21366)))));
double _n_rim_21371=((d::at(this->_n_edge_21193,_n_k_21337)*_n_s_21344)*(0.2+(0.6*(1.0-_n_haze_21358))));
(void)((((_n_cr_21346=(_n_cr_21346+(_n_rim_21371*0.95))),(_n_cg_21347=(_n_cg_21347+(_n_rim_21371*0.8)))),(_n_cb_21348=(_n_cb_21348+(_n_rim_21371*0.45)))));
(void)(([&](){auto&& _n_array_21602=this->_n_fogAmt_21201;auto _n_index_21603=_n_k_21337;auto _n_value_21604=_n_drift_21361;d::put(_n_array_21602,_n_index_21603,_n_value_21604);return _n_value_21604;})());
(void)(([&](){auto&& _n_array_21605=this->_n_fogSpeed_21202;auto _n_index_21606=_n_k_21337;auto _n_value_21607=_n_speed_21359;d::put(_n_array_21605,_n_index_21606,_n_value_21607);return _n_value_21607;})());
(void)((_n_ray_21349=(_n_beam_21362*(d::truth((_n_L_21339<3.0))?(0.45+(0.55*_n_clamp_21178((_n_mist_21365/_n_M_21360)))):(0.25+(0.75*_n_clamp_21178((_n_mist_21365/_n_M_21360))))))));
(void)(([&](){auto&& _n_array_21608=this->_n_lift_21206;auto _n_index_21609=_n_k_21337;auto _n_value_21610=0.03;d::put(_n_array_21608,_n_index_21609,_n_value_21610);return _n_value_21610;})());
}else {d::check_cancel();if(d::truth((_n_L_21339==_n_NEAR_21183))){d::check_cancel();double _n_g_21372=(d::at(this->_n_tex_21195,_n_k_21337)*0.12);
(void)((((_n_cr_21346=(0.001+(_n_g_21372*0.35))),(_n_cg_21347=(0.004+_n_g_21372))),(_n_cb_21348=(0.004+(_n_g_21372*0.9)))));
double _n_rim_21373=(d::at(this->_n_edge_21193,_n_k_21337)*(0.12+(0.6*_n_s_21344)));
(void)((((_n_cr_21346=(_n_cr_21346+(_n_rim_21373*0.9))),(_n_cg_21347=(_n_cg_21347+(_n_rim_21373*0.7)))),(_n_cb_21348=(_n_cb_21348+(_n_rim_21373*0.38)))));
(void)(([&](){auto&& _n_array_21611=this->_n_fogAmt_21201;auto _n_index_21612=_n_k_21337;auto _n_value_21613=d::at(d::at(_n_LAYERS_21182,_n_L_21339),8.0);d::put(_n_array_21611,_n_index_21612,_n_value_21613);return _n_value_21613;})());
(void)(([&](){auto&& _n_array_21614=this->_n_fogSpeed_21202;auto _n_index_21615=_n_k_21337;auto _n_value_21616=d::at(d::at(_n_LAYERS_21182,_n_L_21339),6.0);d::put(_n_array_21614,_n_index_21615,_n_value_21616);return _n_value_21616;})());
(void)((_n_ray_21349=0.12));
(void)(([&](){auto&& _n_array_21617=this->_n_lift_21206;auto _n_index_21618=_n_k_21337;auto _n_value_21619=0.0;d::put(_n_array_21617,_n_index_21618,_n_value_21619);return _n_value_21619;})());
}else {d::check_cancel();if(d::truth((_n_L_21339==_n_FLOOR_21173))){d::check_cancel();double _n_clump_21374=([&](){auto _n_argument_21620=0.42;auto _n_argument_21621=0.72;auto _n_argument_21622=_n_fbm_21177((_n_x_21336*0.09),(_n_y_21338*0.4),3.0,0.0);return _n_smooth_21179(_n_argument_21620,_n_argument_21621,_n_argument_21622);})();
double _n_speck_21375=(d::truth((_n_hash_21175((_n_x_21336*7.0),(_n_r_21335*11.0))>0.55))?1.0:0.35);
double _n_m_21376=(((0.06+(0.3*_n_clump_21374))*_n_speck_21375)*_n_smooth_21179((_n_H_21166+2.0),(_n_H_21166-8.0),_n_y_21338));
(void)((((_n_cr_21346=(0.02+(_n_m_21376*0.6))),(_n_cg_21347=(0.03+(_n_m_21376*0.62)))),(_n_cb_21348=(0.02+(_n_m_21376*0.3)))));
(void)(([&](){auto&& _n_array_21623=this->_n_fogAmt_21201;auto _n_index_21624=_n_k_21337;auto _n_value_21625=0.06;d::put(_n_array_21623,_n_index_21624,_n_value_21625);return _n_value_21625;})());
(void)(([&](){auto&& _n_array_21626=this->_n_fogSpeed_21202;auto _n_index_21627=_n_k_21337;auto _n_value_21628=3.4;d::put(_n_array_21626,_n_index_21627,_n_value_21628);return _n_value_21628;})());
(void)((_n_ray_21349=0.0));
(void)(([&](){auto&& _n_array_21629=this->_n_floorLit_21205;auto _n_index_21630=_n_k_21337;auto _n_value_21631=([&](){auto _n_left_21632=([&](){auto _n_argument_21634=0.32;auto _n_argument_21635=0.56;auto _n_argument_21636=_n_fbm_21177(((_n_x_21336*0.06)+3.0),(_n_y_21338*0.24),3.0,0.0);return _n_smooth_21179(_n_argument_21634,_n_argument_21635,_n_argument_21636);})();auto _n_right_21633=_n_smooth_21179((_n_H_21166+3.0),(_n_H_21166-6.0),_n_y_21338);return (_n_left_21632*_n_right_21633);})();d::put(_n_array_21629,_n_index_21630,_n_value_21631);return _n_value_21631;})());
(void)(([&](){auto&& _n_array_21637=this->_n_lift_21206;auto _n_index_21638=_n_k_21337;auto _n_value_21639=0.0;d::put(_n_array_21637,_n_index_21638,_n_value_21639);return _n_value_21639;})());
}else {d::check_cancel();double _n_g_21377=(d::at(this->_n_tex_21195,_n_k_21337)*0.15);
(void)((((_n_cr_21346=(0.001+(_n_g_21377*0.35))),(_n_cg_21347=(0.004+_n_g_21377))),(_n_cb_21348=(0.004+(_n_g_21377*0.9)))));
double _n_warm_21378=std::exp(((-d::number(_n_d_21343))/50.0));
double _n_rim_21379=(d::at(this->_n_edge_21193,_n_k_21337)*(0.13+(0.55*_n_warm_21378)));
(void)((((_n_cr_21346=(_n_cr_21346+(_n_rim_21379*_n_mix_21180(0.4,0.95,_n_warm_21378)))),(_n_cg_21347=(_n_cg_21347+(_n_rim_21379*_n_mix_21180(0.75,0.66,_n_warm_21378))))),(_n_cb_21348=(_n_cb_21348+(_n_rim_21379*_n_mix_21180(0.72,0.32,_n_warm_21378))))));
(void)(([&](){auto&& _n_array_21640=this->_n_fogAmt_21201;auto _n_index_21641=_n_k_21337;auto _n_value_21642=0.04;d::put(_n_array_21640,_n_index_21641,_n_value_21642);return _n_value_21642;})());
(void)(([&](){auto&& _n_array_21643=this->_n_fogSpeed_21202;auto _n_index_21644=_n_k_21337;auto _n_value_21645=4.0;d::put(_n_array_21643,_n_index_21644,_n_value_21645);return _n_value_21645;})());
(void)((_n_ray_21349=0.04));
(void)(([&](){auto&& _n_array_21646=this->_n_lift_21206;auto _n_index_21647=_n_k_21337;auto _n_value_21648=0.0;d::put(_n_array_21646,_n_index_21647,_n_value_21648);return _n_value_21648;})());
}
}
}
}
(void)((_n_ray_21349=(_n_ray_21349*(0.2+([&](){auto _n_left_21649=(0.8*_n_smooth_21179(1.25,1.75,_n_ang_21342));auto _n_right_21650=_n_smooth_21179(3.1,2.6,_n_ang_21342);return (_n_left_21649*_n_right_21650);})()))));
(void)(([&](){auto&& _n_array_21651=this->_n_rayAmt_21203;auto _n_index_21652=_n_k_21337;auto _n_value_21653=_n_ray_21349;d::put(_n_array_21651,_n_index_21652,_n_value_21653);return _n_value_21653;})());
(void)(((([&](){auto&& _n_array_21654=this->_n_sr_21198;auto _n_index_21655=_n_k_21337;auto _n_value_21656=_n_cr_21346;d::put(_n_array_21654,_n_index_21655,_n_value_21656);return _n_value_21656;})(),([&](){auto&& _n_array_21657=this->_n_sg_21199;auto _n_index_21658=_n_k_21337;auto _n_value_21659=_n_cg_21347;d::put(_n_array_21657,_n_index_21658,_n_value_21659);return _n_value_21659;})()),([&](){auto&& _n_array_21660=this->_n_sb_21200;auto _n_index_21661=_n_k_21337;auto _n_value_21662=_n_cb_21348;d::put(_n_array_21660,_n_index_21661,_n_value_21662);return _n_value_21662;})()));
}}
}}
this->_n_FW_21211=400.0;
this->_n_fog_21212=d::Array<float,true>(size_t((this->_n_FW_21211*_n_H_21166)));
{double _n_r_21380=0.0;
for(;d::truth((_n_r_21380<_n_H_21166));(void)((_n_r_21380++))){d::check_cancel();{double _n_u_21381=0.0;
for(;d::truth((_n_u_21381<this->_n_FW_21211));(void)((_n_u_21381++))){d::check_cancel();(void)(([&](){auto&& _n_array_21663=this->_n_fog_21212;auto _n_index_21664=((_n_r_21380*this->_n_FW_21211)+_n_u_21381);auto _n_value_21665=([&](){auto _n_argument_21666=0.42;auto _n_argument_21667=0.75;auto _n_argument_21668=_n_fbm_21177((_n_u_21381*0.022),(_n_r_21380*0.09),4.0,(this->_n_FW_21211*0.022));return _n_smooth_21179(_n_argument_21666,_n_argument_21667,_n_argument_21668);})();d::put(_n_array_21663,_n_index_21664,_n_value_21665);return _n_value_21665;})());
}}
}}
this->_n_CH_21213=46.0;
this->_n_cloud_21214=d::Array<float,true>(size_t((this->_n_FW_21211*this->_n_CH_21213)));
{double _n_r_21382=0.0;
for(;d::truth((_n_r_21382<this->_n_CH_21213));(void)((_n_r_21382++))){d::check_cancel();{double _n_u_21383=0.0;
for(;d::truth((_n_u_21383<this->_n_FW_21211));(void)((_n_u_21383++))){d::check_cancel();double _n_q_21384=_n_fbm_21177((_n_u_21383*0.01),(_n_r_21382*0.05),2.0,(this->_n_FW_21211*0.01));
(void)(([&](){auto&& _n_array_21669=this->_n_cloud_21214;auto _n_index_21670=((_n_r_21382*this->_n_FW_21211)+_n_u_21383);auto _n_value_21671=([&](){auto _n_argument_21672=0.44;auto _n_argument_21673=0.68;auto _n_argument_21674=_n_fbm_21177(((_n_u_21383*0.016)+(_n_q_21384*1.5)),(_n_r_21382*0.17),4.0,(this->_n_FW_21211*0.016));return _n_smooth_21179(_n_argument_21672,_n_argument_21673,_n_argument_21674);})();d::put(_n_array_21669,_n_index_21670,_n_value_21671);return _n_value_21671;})());
}}
}}
this->_n_SHAFTS_21215=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.42,0.05,0.7},d::Array<double,false>{1.66,0.07,1.0},d::Array<double,false>{1.93,0.05,0.8},d::Array<double,false>{2.18,0.08,1.0},d::Array<double,false>{2.45,0.05,0.75},d::Array<double,false>{2.7,0.06,0.9},d::Array<double,false>{2.95,0.04,0.6}};
this->_n_rayA_21216=d::Array<float,true>(size_t(this->_n_RA_21210));
this->_n_rayB_21217=d::Array<float,true>(size_t(this->_n_RA_21210));
{double _n_i_21385=0.0;
for(;d::truth((_n_i_21385<this->_n_RA_21210));(void)((_n_i_21385++))){d::check_cancel();double _n_a_21386=(((_n_i_21385/this->_n_RA_21210)*ascii::PI)*2.0);
double _n_v_21387=0.0;
for(auto &&_n_item_21675:this->_n_SHAFTS_21215){d::check_cancel();auto _n_binding_21676=_n_item_21675;
double _n_c_21388=d::at(_n_binding_21676,0.0);
double _n_w_21389=d::at(_n_binding_21676,1.0);
double _n_st_21390=d::at(_n_binding_21676,2.0);
(void)((_n_v_21387=([&](){auto _n_argument_21677=_n_v_21387;auto _n_argument_21678=(_n_st_21390*([&](){auto _n_argument_21679=_n_w_21389;auto _n_argument_21680=(_n_w_21389*0.35);auto _n_argument_21681=std::fabs((_n_a_21386-_n_c_21388));return _n_smooth_21179(_n_argument_21679,_n_argument_21680,_n_argument_21681);})());return d::maximum({_n_argument_21677,_n_argument_21678});})()));
}
(void)(([&](){auto&& _n_array_21682=this->_n_rayA_21216;auto _n_index_21683=_n_i_21385;auto _n_value_21684=(_n_v_21387*(0.8+(0.2*_n_fbm_21177((_n_i_21385*0.4),3.1,2.0,(this->_n_RA_21210*0.4)))));d::put(_n_array_21682,_n_index_21683,_n_value_21684);return _n_value_21684;})());
(void)(([&](){auto&& _n_array_21685=this->_n_rayB_21217;auto _n_index_21686=_n_i_21385;auto _n_value_21687=([&](){auto _n_argument_21688=0.4;auto _n_argument_21689=0.7;auto _n_argument_21690=_n_fbm_21177((_n_i_21385*0.03),8.7,2.0,(this->_n_RA_21210*0.03));return _n_smooth_21179(_n_argument_21688,_n_argument_21689,_n_argument_21690);})();d::put(_n_array_21685,_n_index_21686,_n_value_21687);return _n_value_21687;})());
}}
this->_n_motes_21218=d::Array<std::array<double,5>,false>{};
{double _n_i_21391=0.0;
for(;d::truth((_n_i_21391<110.0));(void)((_n_i_21391++))){d::check_cancel();(void)(this->_n_motes_21218.push(std::array<double,5>{(_n_hash_21175(_n_i_21391,1.0)*_n_W_21165),(50.0+(_n_hash_21175(_n_i_21391,2.0)*44.0)),(0.3+(_n_hash_21175(_n_i_21391,3.0)*0.8)),(_n_hash_21175(_n_i_21391,4.0)*6.28),_n_hash_21175(_n_i_21391,5.0)}));
}}
this->_n_mote_21219=d::Array<float,true>(size_t(this->_n_N_21185));
this->_n_moteCells_21220=d::Array<double,false>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_21449> _a1) mutable ->d::String{double _n_t_21392=_a0;
auto _n_binding_21693=(d::present(_a1)?_a1:([&](){auto _n_object_21692=std::make_shared<_n_Record_21449>();return _n_object_21692;})());
std::optional<d::Array<uint8_t,true>> _n_color_21393=_n_binding_21693->_p_color;
{
for(auto &&_n_item_21694:this->_n_moteCells_21220){d::check_cancel();double _n_k_21394=_n_item_21694;
(void)(([&](){auto&& _n_array_21695=this->_n_mote_21219;auto _n_index_21696=_n_k_21394;auto _n_value_21697=0.0;d::put(_n_array_21695,_n_index_21696,_n_value_21697);return _n_value_21697;})());
}
(void)((this->_n_moteCells_21220.resize(size_t(0.0)),0.0));
for(auto &&_n_item_21698:this->_n_motes_21218){d::check_cancel();auto _n_binding_21699=_n_item_21698;
double _n_mx_21395=d::at(_n_binding_21699,0.0);
double _n_my_21396=d::at(_n_binding_21699,1.0);
double _n_sp_21397=d::at(_n_binding_21699,2.0);
double _n_ph_21398=d::at(_n_binding_21699,3.0);
double _n_sz_21399=d::at(_n_binding_21699,4.0);
{
double _n_x_21400=std::floor(d::mod((d::mod(((_n_mx_21395+(_n_t_21392*_n_sp_21397))+(2.5*std::sin(((_n_t_21392*0.4)+_n_ph_21398)))),_n_W_21165)+_n_W_21165),_n_W_21165));
double _n_y_21401=std::floor(((_n_my_21396+(2.0*std::sin(((_n_t_21392*0.3)+(_n_ph_21398*1.7)))))-d::mod(((_n_t_21392*_n_sp_21397)*0.2),6.0)));
if((d::truth((_n_y_21401<0.0))||d::truth((_n_y_21401>=_n_H_21166)))){d::check_cancel();continue;
}
double _n_k_21402=((_n_y_21401*_n_W_21165)+_n_x_21400);
(void)(([&](){auto&& _n_array_21700=this->_n_mote_21219;auto _n_index_21701=_n_k_21402;auto _n_value_21702=(0.5+(0.5*_n_sz_21399));d::put(_n_array_21700,_n_index_21701,_n_value_21702);return _n_value_21702;})());
(void)(this->_n_moteCells_21220.push(_n_k_21402));

}
}
double _n_shiftA_21403=(2.0*std::sin((_n_t_21392*0.35)));
double _n_shiftB_21404=((-d::number(_n_t_21392))*1.6);
double _n_pulse_21405=(0.88+(0.12*std::sin((_n_t_21392*0.7))));
{double _n_r_21406=0.0;
for(;d::truth((_n_r_21406<_n_H_21166));(void)((_n_r_21406++))){d::check_cancel();{double _n_x_21407=0.0;
for(;d::truth((_n_x_21407<_n_W_21165));(void)((_n_x_21407++))){d::check_cancel();double _n_k_21408=((_n_r_21406*_n_W_21165)+_n_x_21407);
double _n_cr_21409=d::at(this->_n_sr_21198,_n_k_21408);
double _n_cg_21410=d::at(this->_n_sg_21199,_n_k_21408);
double _n_cb_21411=d::at(this->_n_sb_21200,_n_k_21408);
double _n_s_21412=d::at(this->_n_sunS_21204,_n_k_21408);
double _n_fa_21413=d::at(this->_n_fogAmt_21201,_n_k_21408);
if(d::truth((_n_fa_21413>0.01))){d::check_cancel();double _n_u_21414=(_n_x_21407+(_n_t_21392*d::at(this->_n_fogSpeed_21202,_n_k_21408)));
double _n_ui_21415=std::floor(_n_u_21414);
double _n_uf_21416=(_n_u_21414-_n_ui_21415);
double _n_f0_21417=d::at(this->_n_fog_21212,((_n_r_21406*this->_n_FW_21211)+d::mod(_n_ui_21415,this->_n_FW_21211)));
double _n_f1_21418=d::at(this->_n_fog_21212,((_n_r_21406*this->_n_FW_21211)+d::mod((_n_ui_21415+1.0),this->_n_FW_21211)));
double _n_a_21419=((_n_f0_21417+((_n_f1_21418-_n_f0_21417)*_n_uf_21416))*_n_fa_21413);
(void)((((_n_cr_21409=([&](){auto _n_argument_21703=_n_cr_21409;auto _n_argument_21704=this->_n_fogR_21189(_n_s_21412);auto _n_argument_21705=_n_a_21419;return _n_mix_21180(_n_argument_21703,_n_argument_21704,_n_argument_21705);})()),(_n_cg_21410=([&](){auto _n_argument_21706=_n_cg_21410;auto _n_argument_21707=this->_n_fogG_21190(_n_s_21412);auto _n_argument_21708=_n_a_21419;return _n_mix_21180(_n_argument_21706,_n_argument_21707,_n_argument_21708);})())),(_n_cb_21411=([&](){auto _n_argument_21709=_n_cb_21411;auto _n_argument_21710=this->_n_fogB_21191(_n_s_21412);auto _n_argument_21711=_n_a_21419;return _n_mix_21180(_n_argument_21709,_n_argument_21710,_n_argument_21711);})())));
}
double _n_ca_21420=d::at(this->_n_cloudAmt_21207,_n_k_21408);
if(d::truth((_n_ca_21420>0.01))){d::check_cancel();double _n_u_21421=(_n_x_21407+(_n_t_21392*0.6));
double _n_ui_21422=std::floor(_n_u_21421);
double _n_uf_21423=(_n_u_21421-_n_ui_21422);
double _n_c0_21424=d::at(this->_n_cloud_21214,((_n_r_21406*this->_n_FW_21211)+d::mod(_n_ui_21422,this->_n_FW_21211)));
double _n_c1_21425=d::at(this->_n_cloud_21214,((_n_r_21406*this->_n_FW_21211)+d::mod((_n_ui_21422+1.0),this->_n_FW_21211)));
double _n_a_21426=((_n_c0_21424+((_n_c1_21425-_n_c0_21424)*_n_uf_21423))*_n_ca_21420);
if(d::truth((_n_a_21426>0.005))){d::check_cancel();double _n_w_21427=std::exp(((-d::number(d::at(this->_n_dist_21209,_n_k_21408)))/40.0));
(void)((((_n_cr_21409=([&](){auto _n_argument_21712=_n_cr_21409;auto _n_argument_21713=_n_mix_21180(0.26,0.95,_n_w_21427);auto _n_argument_21714=_n_a_21426;return _n_mix_21180(_n_argument_21712,_n_argument_21713,_n_argument_21714);})()),(_n_cg_21410=([&](){auto _n_argument_21715=_n_cg_21410;auto _n_argument_21716=_n_mix_21180(0.38,0.72,_n_w_21427);auto _n_argument_21717=_n_a_21426;return _n_mix_21180(_n_argument_21715,_n_argument_21716,_n_argument_21717);})())),(_n_cb_21411=([&](){auto _n_argument_21718=_n_cb_21411;auto _n_argument_21719=_n_mix_21180(0.42,0.45,_n_w_21427);auto _n_argument_21720=_n_a_21426;return _n_mix_21180(_n_argument_21718,_n_argument_21719,_n_argument_21720);})())));
}
}
double _n_ra_21428=d::at(this->_n_rayAmt_21203,_n_k_21408);
double _n_fl_21429=d::at(this->_n_floorLit_21205,_n_k_21408);
double _n_beam_21430=0.0;
if((d::truth((_n_ra_21428>0.01))||d::truth((_n_fl_21429>0.01)))){d::check_cancel();double _n_ai_21431=d::at(this->_n_abin_21208,_n_k_21408);
double _n_ia_21432=std::floor((_n_ai_21431+_n_shiftA_21403));
double _n_ib_21433=std::floor((_n_ai_21431+_n_shiftB_21404));
(void)((_n_beam_21430=((d::at(this->_n_rayA_21216,d::mod((d::mod(_n_ia_21432,this->_n_RA_21210)+this->_n_RA_21210),this->_n_RA_21210))*(0.6+(0.4*d::at(this->_n_rayB_21217,d::mod((d::mod(_n_ib_21433,this->_n_RA_21210)+this->_n_RA_21210),this->_n_RA_21210)))))*_n_pulse_21405)));
}
if((d::truth((_n_ra_21428>0.01))&&d::truth((d::at(this->_n_dist_21209,_n_k_21408)>_n_SUN_R_21168)))){d::check_cancel();double _n_fall_21434=([&](){auto _n_left_21721=std::exp(((-d::number(d::at(this->_n_dist_21209,_n_k_21408)))/80.0));auto _n_right_21722=_n_smooth_21179(_n_SUN_R_21168,12.0,d::at(this->_n_dist_21209,_n_k_21408));return (_n_left_21721*_n_right_21722);})();
double _n_b_21435=((((_n_beam_21430-0.3)*_n_fall_21434)*_n_ra_21428)*2.2);
if(d::truth((_n_b_21435>0.0))){d::check_cancel();(void)((((_n_cr_21409=(_n_cr_21409+(_n_b_21435*1.05))),(_n_cg_21410=(_n_cg_21410+(_n_b_21435*0.8)))),(_n_cb_21411=(_n_cb_21411+(_n_b_21435*0.42)))));
}else {d::check_cancel();double _n_dim_21436=(1.0+_n_b_21435);
(void)((((_n_cr_21409=(_n_cr_21409*_n_dim_21436)),(_n_cg_21410=(_n_cg_21410*_n_dim_21436))),(_n_cb_21411=(_n_cb_21411*_n_dim_21436))));
}
}
if(d::truth((_n_fl_21429>0.01))){d::check_cancel();double _n_b_21437=((_n_beam_21430*_n_fl_21429)*1.1);
(void)((((_n_cr_21409=(_n_cr_21409+(_n_b_21437*1.0))),(_n_cg_21410=(_n_cg_21410+(_n_b_21437*0.78)))),(_n_cb_21411=(_n_cb_21411+(_n_b_21437*0.4)))));
}
double _n_floor_21438=d::at(this->_n_lift_21206,_n_k_21408);
if((d::truth(d::at(this->_n_mote_21219,_n_k_21408))&&d::truth((d::at(this->_n_dist_21209,_n_k_21408)>6.0)))){d::check_cancel();double _n_ia_21439=std::floor((d::at(this->_n_abin_21208,_n_k_21408)+_n_shiftA_21403));
double _n_lit_21440=(d::at(this->_n_rayA_21216,d::mod((d::mod(_n_ia_21439,this->_n_RA_21210)+this->_n_RA_21210),this->_n_RA_21210))*std::exp(((-d::number(d::at(this->_n_dist_21209,_n_k_21408)))/90.0)));
double _n_v_21441=((d::at(this->_n_mote_21219,_n_k_21408)*(0.1+(1.6*_n_lit_21440)))*d::minimum({1.0,(d::at(this->_n_rayAmt_21203,_n_k_21408)*2.0)}));
if(d::truth((_n_v_21441>0.18))){d::check_cancel();(void)((((_n_cr_21409=d::maximum({_n_cr_21409,(_n_v_21441*1.05)})),(_n_cg_21410=d::maximum({_n_cg_21410,(_n_v_21441*0.97)}))),(_n_cb_21411=d::maximum({_n_cb_21411,(_n_v_21441*0.7)}))));
(void)((_n_floor_21438=0.3));
}
}
double _n_peak_21442=d::maximum({_n_cr_21409,_n_cg_21410,_n_cb_21411,0.0001});
double _n_level_21443=_n_clamp_21178((_n_floor_21438+(((1.0-_n_floor_21438)*std::pow(_n_peak_21442,0.9))*0.95)));
double _n_step_21444=([&](){auto _n_argument_21723=0.0;auto _n_argument_21724=([&](){auto _n_argument_21725=3.0;auto _n_argument_21726=d::round(((_n_level_21443*3.0)+d::at(_n_BAYER_21171,((double(d::i32(_n_r_21406)&d::i32(3.0))*4.0)+double(d::i32(_n_x_21407)&d::i32(3.0))))));return d::minimum({_n_argument_21725,_n_argument_21726});})();return d::maximum({_n_argument_21723,_n_argument_21724});})();
(void)(([&](){auto&& _n_array_21727=this->_n_out_21186;auto _n_index_21728=_n_k_21408;auto _n_value_21729=d::at(_n_DOTS_21169,_n_step_21444);d::put(_n_array_21727,_n_index_21728,_n_value_21729);return _n_value_21729;})());
if(d::truth(_n_color_21393)){d::check_cancel();double _n_want_21445=(d::truth(_n_step_21444)?d::minimum({1.0,((_n_level_21443+0.06)/d::at(_n_COVER_21170,_n_step_21444))}):0.0);
double _n_sc_21446=((0.3+(0.7*_n_want_21445))/_n_peak_21442);
(void)(([&](){auto&& _n_array_21730=d::read(_n_color_21393);auto _n_index_21731=_n_k_21408;auto _n_value_21732=([&](){auto _n_argument_21733=_n_clamp_21178((_n_cr_21409*_n_sc_21446));auto _n_argument_21734=_n_clamp_21178((_n_cg_21410*_n_sc_21446));auto _n_argument_21735=_n_clamp_21178((_n_cb_21411*_n_sc_21446));return this->_n_nearest_21188(_n_argument_21733,_n_argument_21734,_n_argument_21735);})();d::put(_n_array_21730,_n_index_21731,_n_value_21732);return _n_value_21732;})());
}
}}
}}
d::Array<d::String,false> _n_lines_21447=d::Array<d::String,false>{};
{double _n_r_21448=0.0;
for(;d::truth((_n_r_21448<_n_H_21166));(void)((_n_r_21448++))){d::check_cancel();(void)(_n_lines_21447.push(d::join(this->_n_out_21186.slice((_n_r_21448*_n_W_21165),((_n_r_21448+1.0)*_n_W_21165)),d::String(u""))));
}}
return d::join(_n_lines_21447,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("misty-forest").cols)*ascii::catalog_meta("misty-forest").rows);auto _env=std::make_shared<_n_Record_21449>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &misty_forest_meta(){return catalog_meta("misty-forest");}
std::unique_ptr<Piece> make_misty_forest(const AsciiPieceOptions &o){return std::make_unique<Native_misty_forest>(o);}
}
