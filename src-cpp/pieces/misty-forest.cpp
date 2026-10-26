// Direct, statically typed C++ from src/pieces/misty-forest.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_21163;
struct _n_Record_21448;
struct _n_Record_21163{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_21163> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21163>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_21448{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_21448> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21448>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_21174(double _a0,double _a1);
double _n_noise_21175(double _a0,double _a1,double _a2);
double _n_fbm_21176(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_21177(double _a0);
double _n_smooth_21178(double _a0,double _a1,double _a2);
double _n_mix_21179(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_21180(d::String _a0);
std::shared_ptr<_n_Record_21163> _n_meta_21162=[](){return ([&](){auto _n_object_21451=std::make_shared<_n_Record_21163>();_n_object_21451->_p_name=d::String(u"misty forest");_n_object_21451->_p_category=d::String(u"scenes");_n_object_21451->_p_note=d::String(u"pine ridges fading into morning fog, sunbeams slanting through");_n_object_21451->_p_cols=200.0;_n_object_21451->_p_rows=100.0;_n_object_21451->_p_cell=1.0;_n_object_21451->_p_fps=15.0;_n_object_21451->_p_ground=d::String(u"#090f0e");_n_object_21451->_p_palette=d::Array<d::String,false>{d::String(u"#fffbea"),d::String(u"#fff0c8"),d::String(u"#fbe2a6"),d::String(u"#f2c97e"),d::String(u"#e0a95e"),d::String(u"#b9834a"),d::String(u"#e4ebe6"),d::String(u"#cbe0dc"),d::String(u"#a8d2d0"),d::String(u"#86c0c2"),d::String(u"#68a7ac"),d::String(u"#4f8c93"),d::String(u"#3b7078"),d::String(u"#557570"),d::String(u"#456761"),d::String(u"#365952"),d::String(u"#2a4a44"),d::String(u"#1f3c37"),d::String(u"#172f2b"),d::String(u"#11231f"),d::String(u"#a4a35a"),d::String(u"#8a8f4c"),d::String(u"#6d7440"),d::String(u"#4d5530"),d::String(u"#7a5a3a"),d::String(u"#5b4532"),d::String(u"#a9c3cc"),d::String(u"#8eadb8"),d::String(u"#6f93a2"),d::String(u"#53798a"),d::String(u"#3d6172"),d::String(u"#2b4a5a")};return _n_object_21451;})();}();
const double _n_W_21164=[](){return 200.0;}();
const double _n_H_21165=[](){return 100.0;}();
std::array<double,2> _n_SUN_21166=[](){return std::array<double,2>{146.0,45.5};}();
const double _n_SUN_R_21167=[](){return 3.4;}();
const d::String _n_DOTS_21168=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_21169=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_21170=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_21220=_a0;
return ((_n_v_21220/16.0)-0.47);});}();
const double _n_SKY_21171=[](){return (-d::number(1.0));}();
const double _n_FLOOR_21172=[](){return 5.0;}();
const double _n_GIANT_21173=[](){return 6.0;}();
d::Array<d::Array<double,false>,false> _n_LAYERS_21181=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{50.0,6.0,1.6,1.0,2.5,0.48,0.8,1.0,0.14,0.6},d::Array<double,false>{59.0,6.0,2.0,3.0,5.5,0.3,1.3,0.8,0.16,0.8},d::Array<double,false>{69.0,7.0,2.6,4.0,7.0,0.13,2.0,0.66,0.18,0.9},d::Array<double,false>{80.0,6.0,3.4,5.0,9.0,0.03,2.8,0.44,0.14,1.0},d::Array<double,false>{90.0,1.5,10.0,9.0,24.0,0.03,3.4,0.0,0.08,0.6}};}();
const double _n_NEAR_21182=[](){return (double(_n_LAYERS_21181.size())-1.0);}();
double _n_hash_21174(double _a0,double _a1){double _n_x_21221=_a0;
double _n_y_21222=_a1;
{
double _n_h_21223=([&](){auto _n_left_21452=d::imul(double(d::i32(_n_x_21221)|d::i32(0.0)),374761393.0);auto _n_right_21453=d::imul(double(d::i32(_n_y_21222)|d::i32(0.0)),668265263.0);return (_n_left_21452+_n_right_21453);})();
(void)((_n_h_21223=d::imul(double(d::i32(_n_h_21223)^d::i32(double(d::u32(_n_h_21223)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_21223)^d::i32(double(d::u32(_n_h_21223)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_21175(double _a0,double _a1,double _a2){double _n_x_21224=_a0;
double _n_y_21225=_a1;
double _n_period_21226=_a2;
{
double _n_xi_21227=std::floor(_n_x_21224);
double _n_yi_21228=std::floor(_n_y_21225);
double _n_fx_21229=(_n_x_21224-_n_xi_21227);
double _n_fy_21230=(_n_y_21225-_n_yi_21228);
double _n_u_21231=((_n_fx_21229*_n_fx_21229)*(3.0-(2.0*_n_fx_21229)));
double _n_v_21232=((_n_fy_21230*_n_fy_21230)*(3.0-(2.0*_n_fy_21230)));
double _n_x0_21233=_n_xi_21227;
double _n_x1_21234=(_n_xi_21227+1.0);
if(d::truth(_n_period_21226)){d::check_cancel();(void)((_n_x0_21233=d::mod((d::mod(_n_xi_21227,_n_period_21226)+_n_period_21226),_n_period_21226)));
(void)((_n_x1_21234=d::mod((_n_x0_21233+1.0),_n_period_21226)));
}
double _n_a_21235=_n_hash_21174(_n_x0_21233,_n_yi_21228);
double _n_b_21236=_n_hash_21174(_n_x1_21234,_n_yi_21228);
double _n_c_21237=_n_hash_21174(_n_x0_21233,(_n_yi_21228+1.0));
double _n_d_21238=_n_hash_21174(_n_x1_21234,(_n_yi_21228+1.0));
return (((_n_a_21235+((_n_b_21236-_n_a_21235)*_n_u_21231))+((_n_c_21237-_n_a_21235)*_n_v_21232))+(((((_n_a_21235-_n_b_21236)-_n_c_21237)+_n_d_21238)*_n_u_21231)*_n_v_21232));

}
}

double _n_fbm_21176(double _a0,double _a1,double _a2,double _a3){double _n_x_21239=_a0;
double _n_y_21240=_a1;
double _n_octaves_21241=_a2;
double _n_period_21242=_a3;
{
double _n_s_21243=0.0;
double _n_n_21244=0.0;
double _n_amp_21245=0.5;
double _n_f_21246=1.0;
{double _n_i_21247=0.0;
for(;d::truth((_n_i_21247<_n_octaves_21241));(void)((_n_i_21247++))){d::check_cancel();(void)((_n_s_21243=(_n_s_21243+(_n_amp_21245*_n_noise_21175((_n_x_21239*_n_f_21246),(_n_y_21240*_n_f_21246),(_n_period_21242*_n_f_21246))))));
(void)((_n_n_21244=(_n_n_21244+_n_amp_21245)));
(void)((_n_amp_21245=(_n_amp_21245*0.5)));
(void)((_n_f_21246=(_n_f_21246*2.0)));
}}
return (_n_s_21243/_n_n_21244);

}
}

double _n_clamp_21177(double _a0){double _n_v_21248=_a0;
return (d::truth((_n_v_21248<0.0))?0.0:(d::truth((_n_v_21248>1.0))?1.0:_n_v_21248));}

double _n_smooth_21178(double _a0,double _a1,double _a2){double _n_a_21249=_a0;
double _n_b_21250=_a1;
double _n_v_21251=_a2;
{
double _n_k_21252=_n_clamp_21177(((_n_v_21251-_n_a_21249)/(_n_b_21250-_n_a_21249)));
return ((_n_k_21252*_n_k_21252)*(3.0-(2.0*_n_k_21252)));

}
}

double _n_mix_21179(double _a0,double _a1,double _a2){double _n_a_21253=_a0;
double _n_b_21254=_a1;
double _n_k_21255=_a2;
return (_n_a_21253+((_n_b_21254-_n_a_21253)*_n_k_21255));}

d::Array<double,false> _n_hex_21180(d::String _a0){d::String _n_s_21256=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_21257=_a0;
return (([&](){auto _n_argument_21454=d::slice(_n_s_21256,_n_i_21257,(_n_i_21257+2.0));auto _n_argument_21455=16.0;return d::parseInt(_n_argument_21454,_n_argument_21455);})()/255.0);});}

struct Native_misty_forest final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_21183{};
double _n_N_21184{};
d::Array<d::String,false> _n_out_21185{};
d::Array<uint8_t,true> _n_lut_21186{};
d::Array<int8_t,true> _n_layer_21191{};
d::Array<float,true> _n_edge_21192{};
d::Array<float,true> _n_below_21193{};
d::Array<float,true> _n_tex_21194{};
d::Array<float,true> _n_ground_21195{};
d::Array<uint8_t,true> _n_giant_21196{};
d::Array<float,true> _n_sr_21197{};
d::Array<float,true> _n_sg_21198{};
d::Array<float,true> _n_sb_21199{};
d::Array<float,true> _n_fogAmt_21200{};
d::Array<float,true> _n_fogSpeed_21201{};
d::Array<float,true> _n_rayAmt_21202{};
d::Array<float,true> _n_sunS_21203{};
d::Array<float,true> _n_floorLit_21204{};
d::Array<float,true> _n_lift_21205{};
d::Array<float,true> _n_cloudAmt_21206{};
d::Array<float,true> _n_abin_21207{};
d::Array<float,true> _n_dist_21208{};
double _n_RA_21209{};
double _n_FW_21210{};
d::Array<float,true> _n_fog_21211{};
double _n_CH_21212{};
d::Array<float,true> _n_cloud_21213{};
d::Array<d::Array<double,false>,false> _n_SHAFTS_21214{};
d::Array<float,true> _n_rayA_21215{};
d::Array<float,true> _n_rayB_21216{};
d::Array<std::array<double,5>,false> _n_motes_21217{};
d::Array<float,true> _n_mote_21218{};
d::Array<double,false> _n_moteCells_21219{};
std::function<d::String(double,std::shared_ptr<_n_Record_21448>)> _render;
double _n_nearest_21187(double _a0,double _a1,double _a2){double _n_r_21258=_a0;
double _n_g_21259=_a1;
double _n_b_21260=_a2;
{
double _n_k_21261=([&](){auto _n_left_21735=([&](){auto _n_left_21737=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_21258*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_21738=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_21259*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_21737)|d::i32(_n_right_21738));})();auto _n_right_21736=d::minimum({31.0,double(d::i32((_n_b_21260*31.99))|d::i32(0.0))});return double(d::i32(_n_left_21735)|d::i32(_n_right_21736));})();
if(d::truth((d::at(this->_n_lut_21186,_n_k_21261)!=255.0))){d::check_cancel();return d::at(this->_n_lut_21186,_n_k_21261);
}
double _n_best_21262=0.0;
double _n_bd_21263=1000000000.0;
{double _n_i_21264=0.0;
for(;d::truth((_n_i_21264<double(this->_n_P_21183.size())));(void)((_n_i_21264++))){d::check_cancel();double _n_dr_21265=(d::at(d::at(this->_n_P_21183,_n_i_21264),0.0)-_n_r_21258);
double _n_dg_21266=(d::at(d::at(this->_n_P_21183,_n_i_21264),1.0)-_n_g_21259);
double _n_db_21267=(d::at(d::at(this->_n_P_21183,_n_i_21264),2.0)-_n_b_21260);
double _n_d_21268=((((0.3*_n_dr_21265)*_n_dr_21265)+((0.5*_n_dg_21266)*_n_dg_21266))+((0.2*_n_db_21267)*_n_db_21267));
if(d::truth((_n_d_21268<_n_bd_21263))){d::check_cancel();(void)(((_n_bd_21263=_n_d_21268),(_n_best_21262=_n_i_21264)));
}
}}
return ([&](){auto&& _n_array_21739=this->_n_lut_21186;auto _n_index_21740=_n_k_21261;auto _n_value_21741=_n_best_21262;d::put(_n_array_21739,_n_index_21740,_n_value_21741);return _n_value_21741;})();

}
}

double _n_fogR_21188(double _a0){double _n_s_21269=_a0;
return _n_mix_21179(0.7,1.05,_n_s_21269);}

double _n_fogG_21189(double _a0){double _n_s_21270=_a0;
return _n_mix_21179(0.92,0.92,_n_s_21270);}

double _n_fogB_21190(double _a0){double _n_s_21271=_a0;
return _n_mix_21179(0.9,0.6,_n_s_21271);}

explicit Native_misty_forest(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_21183=d::map(_n_meta_21162->_p_palette,_n_hex_21180);
this->_n_N_21184=(_n_W_21164*_n_H_21165);
this->_n_out_21185=d::Array<d::String,false>(size_t(this->_n_N_21184));
this->_n_lut_21186=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_layer_21191=d::Array<int8_t,true>(size_t(this->_n_N_21184)).fill(_n_SKY_21171);
this->_n_edge_21192=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_below_21193=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_tex_21194=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_ground_21195=d::Array<float,true>(size_t(this->_n_N_21184));
(void)(d::forEach(_n_LAYERS_21181,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_21456=_a0;
double _n_Y_21272=d::at(_n_binding_21456,0.0);
double _n_amp_21273=d::at(_n_binding_21456,1.0);
double _n_gap_21274=d::at(_n_binding_21456,2.0);
double _n_h0_21275=d::at(_n_binding_21456,3.0);
double _n_h1_21276=d::at(_n_binding_21456,4.0);
double _n_i_21277=_a1;
{
auto _n_ridge_21278=[&]( double _a0) mutable ->double{double _n_x_21279=_a0;
return ([&](){auto _n_left_21457=(_n_Y_21272+((_n_amp_21273*(_n_fbm_21176((_n_x_21279*(0.018+(_n_i_21277*0.003))),((_n_i_21277*13.0)+2.0),3.0,0.0)-0.5))*(d::truth((_n_i_21277<3.0))?4.0:3.0)));auto _n_right_21458=((d::truth((_n_i_21277>0.0))&&d::truth((_n_i_21277<_n_NEAR_21182)))?((2.0+(_n_i_21277*2.0))*std::exp((-d::number(std::pow((((_n_x_21279-d::at(_n_SUN_21166,0.0))-4.0)/38.0),2.0))))):0.0);return (_n_left_21457+_n_right_21458);})();};
d::Array<float,true> _n_base_21280=d::Array<float,true>(d::from(_n_W_21164,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_x_21282=_a1;
return _n_ridge_21278(_n_x_21282);}));
d::Array<uint8_t,true> _n_fill_21283=d::Array<uint8_t,true>(size_t(this->_n_N_21184));
d::Array<uint8_t,true> _n_spire_21284=d::Array<uint8_t,true>(size_t(this->_n_N_21184));
{double _n_x_21285=0.0;
for(;d::truth((_n_x_21285<_n_W_21164));(void)((_n_x_21285++))){d::check_cancel();{double _n_r_21286=([&](){auto _n_argument_21459=0.0;auto _n_argument_21460=std::floor(_n_ridge_21278(_n_x_21285));return d::maximum({_n_argument_21459,_n_argument_21460});})();
for(;d::truth((_n_r_21286<_n_H_21165));(void)((_n_r_21286++))){d::check_cancel();(void)(([&](){auto&& _n_array_21461=_n_fill_21283;auto _n_index_21462=((_n_r_21286*_n_W_21164)+_n_x_21285);auto _n_value_21463=1.0;d::put(_n_array_21461,_n_index_21462,_n_value_21463);return _n_value_21463;})());
}}
}}
{double _n_tx_21287=((-d::number(2.0))+(_n_hash_21174(_n_i_21277,1.0)*_n_gap_21274));
for(;d::truth((_n_tx_21287<(_n_W_21164+2.0)));(void)((_n_tx_21287=(_n_tx_21287+(_n_gap_21274*(0.7+(_n_hash_21174(double(d::i32(_n_tx_21287)|d::i32(0.0)),(_n_i_21277+3.0))*0.7))))))){d::check_cancel();if(((d::truth((_n_i_21277==_n_NEAR_21182))&&d::truth((_n_tx_21287>92.0)))&&d::truth((_n_tx_21287<140.0)))){d::check_cancel();continue;
}
double _n_th_21288=(_n_h0_21275+((_n_h1_21276-_n_h0_21275)*_n_hash_21174(double(d::i32((_n_tx_21287*7.0))|d::i32(0.0)),(_n_i_21277+5.0))));
double _n_tip_21289=(_n_ridge_21278(_n_tx_21287)-_n_th_21288);
double _n_tier_21290=(2.0+(_n_th_21288*0.12));
{double _n_r_21291=([&](){auto _n_argument_21464=0.0;auto _n_argument_21465=std::floor(_n_tip_21289);return d::maximum({_n_argument_21464,_n_argument_21465});})();
for(;d::truth((_n_r_21291<([&](){auto _n_argument_21466=_n_H_21165;auto _n_argument_21467=(_n_ridge_21278(_n_tx_21287)+2.0);return d::minimum({_n_argument_21466,_n_argument_21467});})()));(void)((_n_r_21291++))){d::check_cancel();double _n_d_21292=((_n_r_21291+0.5)-_n_tip_21289);
if(d::truth((_n_d_21292<0.0))){d::check_cancel();continue;
}
double _n_saw_21293=(d::mod(_n_d_21292,_n_tier_21290)/_n_tier_21290);
double _n_half_21294=(((_n_d_21292*0.3)*(0.6+(0.5*_n_saw_21293)))+0.35);
{double _n_x_21295=([&](){auto _n_argument_21468=0.0;auto _n_argument_21469=std::floor((_n_tx_21287-_n_half_21294));return d::maximum({_n_argument_21468,_n_argument_21469});})();
for(;d::truth((_n_x_21295<=([&](){auto _n_argument_21470=(_n_W_21164-1.0);auto _n_argument_21471=std::ceil((_n_tx_21287+_n_half_21294));return d::minimum({_n_argument_21470,_n_argument_21471});})()));(void)((_n_x_21295++))){d::check_cancel();double _n_dx_21296=std::fabs(((_n_x_21295+0.5)-_n_tx_21287));
if(d::truth((_n_dx_21296>_n_half_21294))){d::check_cancel();continue;
}
double _n_k_21297=((_n_r_21291*_n_W_21164)+_n_x_21295);
(void)(([&](){auto&& _n_array_21472=_n_fill_21283;auto _n_index_21473=_n_k_21297;auto _n_value_21474=([&](){auto&& _n_array_21475=_n_spire_21284;auto _n_index_21476=_n_k_21297;auto _n_value_21477=1.0;d::put(_n_array_21475,_n_index_21476,_n_value_21477);return _n_value_21477;})();d::put(_n_array_21472,_n_index_21473,_n_value_21474);return _n_value_21474;})());
if(d::truth((_n_i_21277==_n_NEAR_21182))){d::check_cancel();(void)(([&](){auto&& _n_array_21478=this->_n_tex_21194;auto _n_index_21479=_n_k_21297;auto _n_value_21480=([&](){auto _n_left_21481=([&](){auto _n_left_21483=_n_smooth_21178(0.62,0.95,_n_saw_21293);auto _n_right_21484=_n_smooth_21178(0.3,0.85,(_n_dx_21296/_n_half_21294));return (_n_left_21483*_n_right_21484);})();auto _n_right_21482=(0.55+(0.45*_n_hash_21174(_n_x_21295,(_n_r_21291*5.0))));return (_n_left_21481*_n_right_21482);})();d::put(_n_array_21478,_n_index_21479,_n_value_21480);return _n_value_21480;})());
}
}}
}}
}}
d::Array<float,true> _n_top_21298=d::Array<float,true>(size_t(_n_W_21164)).fill(_n_H_21165);
{double _n_x_21299=0.0;
for(;d::truth((_n_x_21299<_n_W_21164));(void)((_n_x_21299++))){d::check_cancel();{double _n_r_21300=0.0;
for(;d::truth((_n_r_21300<_n_H_21165));(void)((_n_r_21300++))){d::check_cancel();if(d::truth(d::at(_n_fill_21283,((_n_r_21300*_n_W_21164)+_n_x_21299)))){d::check_cancel();(void)(([&](){auto&& _n_array_21485=_n_top_21298;auto _n_index_21486=_n_x_21299;auto _n_value_21487=_n_r_21300;d::put(_n_array_21485,_n_index_21486,_n_value_21487);return _n_value_21487;})());
break;
}
}}
}}
d::Array<float,true> _n_line_21301=d::map(_n_top_21298,[&]( double _a0,double _a1) mutable ->double{double _n___21302=_a0;
double _n_x_21303=_a1;
{
double _n_s_21304=0.0;
{double _n_d_21305=(-d::number(3.0));
for(;d::truth((_n_d_21305<=3.0));(void)((_n_d_21305++))){d::check_cancel();(void)((_n_s_21304=(_n_s_21304+d::at(_n_top_21298,([&](){auto _n_argument_21488=(_n_W_21164-1.0);auto _n_argument_21489=d::maximum({0.0,(_n_x_21303+_n_d_21305)});return d::minimum({_n_argument_21488,_n_argument_21489});})()))));
}}
return d::maximum({(_n_s_21304/7.0),d::at(_n_top_21298,_n_x_21303)});

}
});
auto _n_open_21306=[&]( double _a0,double _a1) mutable ->bool{double _n_xx_21307=_a0;
double _n_rr_21308=_a1;
return ([&]()->bool{auto _n_logical_21490=([&]()->bool{auto _n_logical_21492=(_n_xx_21307>=0.0);return d::truth(_n_logical_21492)?(_n_xx_21307<_n_W_21164):_n_logical_21492;})();return d::truth(_n_logical_21490)?([&]()->bool{auto _n_logical_21491=(_n_rr_21308<0.0);return d::truth(_n_logical_21491)?_n_logical_21491:(!d::truth(d::at(_n_fill_21283,((_n_rr_21308*_n_W_21164)+_n_xx_21307))));})():_n_logical_21490;})();};
{double _n_r_21309=0.0;
for(;d::truth((_n_r_21309<_n_H_21165));(void)((_n_r_21309++))){d::check_cancel();{double _n_x_21310=0.0;
for(;d::truth((_n_x_21310<_n_W_21164));(void)((_n_x_21310++))){d::check_cancel();double _n_k_21311=((_n_r_21309*_n_W_21164)+_n_x_21310);
if(d::truth((!d::truth(d::at(_n_fill_21283,_n_k_21311))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_21493=this->_n_layer_21191;auto _n_index_21494=_n_k_21311;auto _n_value_21495=((d::truth((_n_i_21277==_n_NEAR_21182))&&d::truth((!d::truth(d::at(_n_spire_21284,_n_k_21311)))))?_n_FLOOR_21172:_n_i_21277);d::put(_n_array_21493,_n_index_21494,_n_value_21495);return _n_value_21495;})());
if(d::truth((_n_i_21277!=_n_NEAR_21182))){d::check_cancel();(void)(([&](){auto&& _n_array_21496=this->_n_tex_21194;auto _n_index_21497=_n_k_21311;auto _n_value_21498=0.0;d::put(_n_array_21496,_n_index_21497,_n_value_21498);return _n_value_21498;})());
}
(void)(([&](){auto&& _n_array_21499=this->_n_below_21193;auto _n_index_21500=_n_k_21311;auto _n_value_21501=((_n_r_21309+0.5)-d::at(_n_line_21301,_n_x_21310));d::put(_n_array_21499,_n_index_21500,_n_value_21501);return _n_value_21501;})());
(void)(([&](){auto&& _n_array_21502=this->_n_ground_21195;auto _n_index_21503=_n_k_21311;auto _n_value_21504=d::at(_n_base_21280,_n_x_21310);d::put(_n_array_21502,_n_index_21503,_n_value_21504);return _n_value_21504;})());
double _n_toward_21312=(d::truth((_n_x_21310<d::at(_n_SUN_21166,0.0)))?1.0:(-d::number(1.0)));
(void)(([&](){auto&& _n_array_21505=this->_n_edge_21192;auto _n_index_21506=_n_k_21311;auto _n_value_21507=((d::truth(_n_open_21306((_n_x_21310+_n_toward_21312),_n_r_21309))||d::truth(_n_open_21306(_n_x_21310,(_n_r_21309-1.0))))?1.0:(d::truth(_n_open_21306((_n_x_21310+(2.0*_n_toward_21312)),_n_r_21309))?0.5:0.0));d::put(_n_array_21505,_n_index_21506,_n_value_21507);return _n_value_21507;})());
}}
}}

}
}));
this->_n_giant_21196=d::Array<uint8_t,true>(size_t(this->_n_N_21184));
for(auto &&_n_item_21508:d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,(-d::number(12.0)),15.0,7.0},d::Array<double,false>{192.0,12.0,7.0,5.0}}){d::check_cancel();auto _n_binding_21509=_n_item_21508;
double _n_gx_21313=d::at(_n_binding_21509,0.0);
double _n_tip_21314=d::at(_n_binding_21509,1.0);
double _n_spread_21315=d::at(_n_binding_21509,2.0);
double _n_tier_21316=d::at(_n_binding_21509,3.0);
{
{double _n_r_21317=([&](){auto _n_argument_21510=0.0;auto _n_argument_21511=std::floor(_n_tip_21314);return d::maximum({_n_argument_21510,_n_argument_21511});})();
for(;d::truth((_n_r_21317<_n_H_21165));(void)((_n_r_21317++))){d::check_cancel();double _n_d_21318=((_n_r_21317+0.5)-_n_tip_21314);
double _n_saw_21319=(d::mod(_n_d_21318,_n_tier_21316)/_n_tier_21316);
double _n_half_21320=d::minimum({(_n_spread_21315*(0.5+(0.5*_n_saw_21319))),(((_n_d_21318*0.34)*(0.45+(0.7*_n_saw_21319)))+0.5)});
{double _n_x_21321=([&](){auto _n_argument_21512=0.0;auto _n_argument_21513=std::floor((_n_gx_21313-_n_half_21320));return d::maximum({_n_argument_21512,_n_argument_21513});})();
for(;d::truth((_n_x_21321<=([&](){auto _n_argument_21514=(_n_W_21164-1.0);auto _n_argument_21515=std::ceil((_n_gx_21313+_n_half_21320));return d::minimum({_n_argument_21514,_n_argument_21515});})()));(void)((_n_x_21321++))){d::check_cancel();double _n_dx_21322=std::fabs(((_n_x_21321+0.5)-_n_gx_21313));
double _n_outer_21323=(d::truth(((((_n_x_21321+0.5)-_n_gx_21313)*(_n_gx_21313-(_n_W_21164/2.0)))>0.0))?1.6:1.0);
double _n_ragged_21324=((_n_half_21320*_n_outer_21323)*(0.82+(0.3*_n_noise_21175((_n_x_21321*0.5),(_n_r_21317*0.4),0.0))));
if((d::truth((_n_dx_21322<=_n_ragged_21324))||d::truth((_n_dx_21322<0.9)))){d::check_cancel();double _n_k_21325=((_n_r_21317*_n_W_21164)+_n_x_21321);
(void)(([&](){auto&& _n_array_21516=this->_n_giant_21196;auto _n_index_21517=_n_k_21325;auto _n_value_21518=1.0;d::put(_n_array_21516,_n_index_21517,_n_value_21518);return _n_value_21518;})());
(void)(([&](){auto&& _n_array_21519=this->_n_tex_21194;auto _n_index_21520=_n_k_21325;auto _n_value_21521=([&](){auto _n_left_21522=([&](){auto _n_left_21524=_n_smooth_21178(0.66,0.96,_n_saw_21319);auto _n_right_21525=_n_smooth_21178(0.25,0.8,(_n_dx_21322/_n_ragged_21324));return (_n_left_21524*_n_right_21525);})();auto _n_right_21523=(0.5+(0.5*_n_hash_21174((_n_x_21321*3.0),_n_r_21317)));return (_n_left_21522*_n_right_21523);})();d::put(_n_array_21519,_n_index_21520,_n_value_21521);return _n_value_21521;})());
}
}}
}}

}
}
{double _n_k_21326=0.0;
for(;d::truth((_n_k_21326<this->_n_N_21184));(void)((_n_k_21326++))){d::check_cancel();if(d::truth(d::at(this->_n_giant_21196,_n_k_21326))){d::check_cancel();(void)((([&](){auto&& _n_array_21526=this->_n_layer_21191;auto _n_index_21527=_n_k_21326;auto _n_value_21528=_n_GIANT_21173;d::put(_n_array_21526,_n_index_21527,_n_value_21528);return _n_value_21528;})(),([&](){auto&& _n_array_21529=this->_n_below_21193;auto _n_index_21530=_n_k_21326;auto _n_value_21531=0.0;d::put(_n_array_21529,_n_index_21530,_n_value_21531);return _n_value_21531;})()));
}
}}
{
auto _n_open_21327=[&]( double _a0,double _a1) mutable ->bool{double _n_x_21328=_a0;
double _n_r_21329=_a1;
return ([&]()->bool{auto _n_logical_21532=([&]()->bool{auto _n_logical_21534=(_n_x_21328>=0.0);return d::truth(_n_logical_21534)?(_n_x_21328<_n_W_21164):_n_logical_21534;})();return d::truth(_n_logical_21532)?([&]()->bool{auto _n_logical_21533=(_n_r_21329<0.0);return d::truth(_n_logical_21533)?_n_logical_21533:(!d::truth(d::at(this->_n_giant_21196,((_n_r_21329*_n_W_21164)+_n_x_21328))));})():_n_logical_21532;})();};
{double _n_r_21330=0.0;
for(;d::truth((_n_r_21330<_n_H_21165));(void)((_n_r_21330++))){d::check_cancel();{double _n_x_21331=0.0;
for(;d::truth((_n_x_21331<_n_W_21164));(void)((_n_x_21331++))){d::check_cancel();double _n_k_21332=((_n_r_21330*_n_W_21164)+_n_x_21331);
if(d::truth((!d::truth(d::at(this->_n_giant_21196,_n_k_21332))))){d::check_cancel();continue;
}
double _n_tx_21333=(d::truth((_n_x_21331<d::at(_n_SUN_21166,0.0)))?1.0:(-d::number(1.0)));
(void)(([&](){auto&& _n_array_21535=this->_n_edge_21192;auto _n_index_21536=_n_k_21332;auto _n_value_21537=((d::truth(_n_open_21327((_n_x_21331+_n_tx_21333),_n_r_21330))||d::truth(_n_open_21327(_n_x_21331,(_n_r_21330-1.0))))?1.0:(d::truth(_n_open_21327((_n_x_21331+(2.0*_n_tx_21333)),_n_r_21330))?0.6:0.0));d::put(_n_array_21535,_n_index_21536,_n_value_21537);return _n_value_21537;})());
}}
}}

}
this->_n_sr_21197=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_sg_21198=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_sb_21199=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_fogAmt_21200=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_fogSpeed_21201=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_rayAmt_21202=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_sunS_21203=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_floorLit_21204=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_lift_21205=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_cloudAmt_21206=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_abin_21207=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_dist_21208=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_RA_21209=720.0;
{double _n_r_21334=0.0;
for(;d::truth((_n_r_21334<_n_H_21165));(void)((_n_r_21334++))){d::check_cancel();{double _n_x_21335=0.0;
for(;d::truth((_n_x_21335<_n_W_21164));(void)((_n_x_21335++))){d::check_cancel();double _n_k_21336=((_n_r_21334*_n_W_21164)+_n_x_21335);
double _n_y_21337=(_n_r_21334+0.5);
double _n_L_21338=d::at(this->_n_layer_21191,_n_k_21336);
double _n_dx_21339=((_n_x_21335+0.5)-d::at(_n_SUN_21166,0.0));
double _n_dy_21340=(_n_y_21337-d::at(_n_SUN_21166,1.0));
double _n_ang_21341=std::atan2(_n_dy_21340,_n_dx_21339);
(void)(([&](){auto&& _n_array_21538=this->_n_abin_21207;auto _n_index_21539=_n_k_21336;auto _n_value_21540=d::mod((((_n_ang_21341/(ascii::PI*2.0))*this->_n_RA_21209)+this->_n_RA_21209),this->_n_RA_21209);d::put(_n_array_21538,_n_index_21539,_n_value_21540);return _n_value_21540;})());
double _n_d_21342=([&](){auto&& _n_array_21541=this->_n_dist_21208;auto _n_index_21542=_n_k_21336;auto _n_value_21543=std::sqrt(((_n_dx_21339*_n_dx_21339)+(_n_dy_21340*_n_dy_21340)));d::put(_n_array_21541,_n_index_21542,_n_value_21543);return _n_value_21543;})();
double _n_s_21343=([&](){auto&& _n_array_21544=this->_n_sunS_21203;auto _n_index_21545=_n_k_21336;auto _n_value_21546=std::exp(((-d::number(std::sqrt(((_n_dx_21339*_n_dx_21339)+((_n_dy_21340*_n_dy_21340)*1.96)))))/30.0));d::put(_n_array_21544,_n_index_21545,_n_value_21546);return _n_value_21546;})();
double _n_bloom_21344=([&](){auto _n_left_21547=(std::exp(((-d::number(_n_d_21342))/16.0))*0.25);auto _n_right_21548=(std::exp(((-d::number(_n_d_21342))/6.0))*0.1);return (_n_left_21547+_n_right_21548);})();
double _n_cr_21345{};
double _n_cg_21346{};
double _n_cb_21347{};
double _n_ray_21348{};
if(d::truth((_n_L_21338==_n_SKY_21171))){d::check_cancel();double _n_v_21349=_n_clamp_21177((_n_y_21337/52.0));
double _n_p_21350=std::pow(_n_v_21349,1.6);
double _n_veil_21351=(0.95+(0.1*_n_fbm_21176((_n_x_21335*0.04),(_n_y_21337*0.08),3.0,0.0)));
(void)((((_n_cr_21345=(_n_mix_21179(0.065,0.36,_n_p_21350)*_n_veil_21351)),(_n_cg_21346=(_n_mix_21179(0.14,0.58,_n_p_21350)*_n_veil_21351))),(_n_cb_21347=(_n_mix_21179(0.17,0.62,_n_p_21350)*_n_veil_21351))));
double _n_band_21352=([&](){auto _n_left_21549=(0.75*_n_smooth_21178(28.0,50.0,_n_y_21337));auto _n_right_21550=(0.55+(0.75*_n_fbm_21176((_n_x_21335*0.025),(_n_y_21337*0.16),3.0,0.0)));return (_n_left_21549*_n_right_21550);})();
(void)((((_n_cr_21345=([&](){auto _n_argument_21551=_n_cr_21345;auto _n_argument_21552=this->_n_fogR_21188(0.0);auto _n_argument_21553=_n_band_21352;return _n_mix_21179(_n_argument_21551,_n_argument_21552,_n_argument_21553);})()),(_n_cg_21346=([&](){auto _n_argument_21554=_n_cg_21346;auto _n_argument_21555=this->_n_fogG_21189(0.0);auto _n_argument_21556=_n_band_21352;return _n_mix_21179(_n_argument_21554,_n_argument_21555,_n_argument_21556);})())),(_n_cb_21347=([&](){auto _n_argument_21557=_n_cb_21347;auto _n_argument_21558=this->_n_fogB_21190(0.0);auto _n_argument_21559=_n_band_21352;return _n_mix_21179(_n_argument_21557,_n_argument_21558,_n_argument_21559);})())));
double _n_kw_21353=(_n_s_21343*0.55);
double _n_kb_21354=(0.5+(0.5*std::exp(((-d::number(_n_d_21342))/9.0))));
(void)((((_n_cr_21345=([&](){auto _n_argument_21560=_n_cr_21345;auto _n_argument_21561=(this->_n_fogR_21188(_n_s_21343)*_n_kb_21354);auto _n_argument_21562=_n_kw_21353;return _n_mix_21179(_n_argument_21560,_n_argument_21561,_n_argument_21562);})()),(_n_cg_21346=([&](){auto _n_argument_21563=_n_cg_21346;auto _n_argument_21564=(this->_n_fogG_21189(_n_s_21343)*_n_kb_21354);auto _n_argument_21565=_n_kw_21353;return _n_mix_21179(_n_argument_21563,_n_argument_21564,_n_argument_21565);})())),(_n_cb_21347=([&](){auto _n_argument_21566=_n_cb_21347;auto _n_argument_21567=(this->_n_fogB_21190(_n_s_21343)*_n_kb_21354);auto _n_argument_21568=_n_kw_21353;return _n_mix_21179(_n_argument_21566,_n_argument_21567,_n_argument_21568);})())));
double _n_glow_21355=([&](){auto _n_left_21569=(std::exp(((-d::number(_n_d_21342))/3.0))*0.3);auto _n_right_21570=(std::exp(((-d::number(_n_d_21342))/10.0))*0.18);return (_n_left_21569+_n_right_21570);})();
(void)((((_n_cr_21345=(_n_cr_21345+(_n_glow_21355+_n_bloom_21344))),(_n_cg_21346=(_n_cg_21346+((_n_glow_21355*0.9)+(_n_bloom_21344*0.78))))),(_n_cb_21347=(_n_cb_21347+((_n_glow_21355*0.66)+(_n_bloom_21344*0.45))))));
double _n_disc_21356=_n_smooth_21178((_n_SUN_R_21167+0.6),(_n_SUN_R_21167-0.4),_n_d_21342);
(void)((((_n_cr_21345=_n_mix_21179(_n_cr_21345,1.3,_n_disc_21356)),(_n_cg_21346=_n_mix_21179(_n_cg_21346,1.24,_n_disc_21356))),(_n_cb_21347=_n_mix_21179(_n_cb_21347,1.08,_n_disc_21356))));
(void)(([&](){auto&& _n_array_21571=this->_n_fogAmt_21200;auto _n_index_21572=_n_k_21336;auto _n_value_21573=(0.3*_n_smooth_21178(30.0,50.0,_n_y_21337));d::put(_n_array_21571,_n_index_21572,_n_value_21573);return _n_value_21573;})());
(void)(([&](){auto&& _n_array_21574=this->_n_fogSpeed_21201;auto _n_index_21575=_n_k_21336;auto _n_value_21576=0.4;d::put(_n_array_21574,_n_index_21575,_n_value_21576);return _n_value_21576;})());
(void)(([&](){auto&& _n_array_21577=this->_n_cloudAmt_21206;auto _n_index_21578=_n_k_21336;auto _n_value_21579=([&](){auto _n_left_21580=([&](){auto _n_left_21582=(0.75*_n_smooth_21178(5.0,15.0,_n_y_21337));auto _n_right_21583=_n_smooth_21178(44.0,28.0,_n_y_21337);return (_n_left_21582*_n_right_21583);})();auto _n_right_21581=_n_smooth_21178((_n_SUN_R_21167+2.0),(_n_SUN_R_21167+8.0),_n_d_21342);return (_n_left_21580*_n_right_21581);})();d::put(_n_array_21577,_n_index_21578,_n_value_21579);return _n_value_21579;})());
(void)((_n_ray_21348=(0.35*_n_smooth_21178(26.0,46.0,_n_y_21337))));
(void)(([&](){auto&& _n_array_21584=this->_n_lift_21205;auto _n_index_21585=_n_k_21336;auto _n_value_21586=0.04;d::put(_n_array_21584,_n_index_21585,_n_value_21586);return _n_value_21586;})());
}else {d::check_cancel();if(d::truth((_n_L_21338<=(_n_NEAR_21182-1.0)))){d::check_cancel();auto _n_binding_21587=d::at(_n_LAYERS_21181,_n_L_21338);
double _n_haze_21357=d::at(_n_binding_21587,5.0);
double _n_speed_21358=d::at(_n_binding_21587,6.0);
double _n_M_21359=d::at(_n_binding_21587,7.0);
double _n_drift_21360=d::at(_n_binding_21587,8.0);
double _n_beam_21361=d::at(_n_binding_21587,9.0);
double _n_pool_21362=([&](){auto _n_left_21588=_n_smooth_21178(2.5,(8.0+(_n_L_21338*1.5)),d::at(this->_n_below_21193,_n_k_21336));auto _n_right_21589=_n_smooth_21178(20.0,11.0,d::at(this->_n_below_21193,_n_k_21336));return (_n_left_21588*_n_right_21589);})();
double _n_sheet_21363=([&](){auto _n_left_21590=std::exp((-d::number(std::pow(((_n_y_21337-(d::at(this->_n_ground_21195,_n_k_21336)+5.0))/3.0),2.0))));auto _n_right_21591=(0.75+(0.5*_n_fbm_21176((_n_x_21335*0.035),(_n_L_21338*7.3),3.0,0.0)));return (_n_left_21590*_n_right_21591);})();
double _n_mist_21364=_n_clamp_21177((d::maximum({(_n_pool_21362*0.5),_n_sheet_21363})*_n_M_21359));
double _n_h_21365=_n_clamp_21177((_n_haze_21357+((1.0-_n_haze_21357)*_n_mist_21364)));
double _n_veil_21366=(0.9+(0.2*_n_fbm_21176((_n_x_21335*0.06),(_n_y_21337*0.12),3.0,0.0)));
double _n_pr_21367=0.02;
double _n_pg_21368=0.075;
double _n_pb_21369=0.07;
(void)((((_n_cr_21345=([&](){auto _n_argument_21592=_n_pr_21367;auto _n_argument_21593=(this->_n_fogR_21188(_n_s_21343)*_n_veil_21366);auto _n_argument_21594=_n_h_21365;return _n_mix_21179(_n_argument_21592,_n_argument_21593,_n_argument_21594);})()),(_n_cg_21346=([&](){auto _n_argument_21595=_n_pg_21368;auto _n_argument_21596=(this->_n_fogG_21189(_n_s_21343)*_n_veil_21366);auto _n_argument_21597=_n_h_21365;return _n_mix_21179(_n_argument_21595,_n_argument_21596,_n_argument_21597);})())),(_n_cb_21347=([&](){auto _n_argument_21598=_n_pb_21369;auto _n_argument_21599=(this->_n_fogB_21190(_n_s_21343)*_n_veil_21366);auto _n_argument_21600=_n_h_21365;return _n_mix_21179(_n_argument_21598,_n_argument_21599,_n_argument_21600);})())));
(void)((((_n_cr_21345=(_n_cr_21345+(_n_bloom_21344*_n_h_21365))),(_n_cg_21346=(_n_cg_21346+((_n_bloom_21344*0.78)*_n_h_21365)))),(_n_cb_21347=(_n_cb_21347+((_n_bloom_21344*0.45)*_n_h_21365)))));
double _n_rim_21370=((d::at(this->_n_edge_21192,_n_k_21336)*_n_s_21343)*(0.2+(0.6*(1.0-_n_haze_21357))));
(void)((((_n_cr_21345=(_n_cr_21345+(_n_rim_21370*0.95))),(_n_cg_21346=(_n_cg_21346+(_n_rim_21370*0.8)))),(_n_cb_21347=(_n_cb_21347+(_n_rim_21370*0.45)))));
(void)(([&](){auto&& _n_array_21601=this->_n_fogAmt_21200;auto _n_index_21602=_n_k_21336;auto _n_value_21603=_n_drift_21360;d::put(_n_array_21601,_n_index_21602,_n_value_21603);return _n_value_21603;})());
(void)(([&](){auto&& _n_array_21604=this->_n_fogSpeed_21201;auto _n_index_21605=_n_k_21336;auto _n_value_21606=_n_speed_21358;d::put(_n_array_21604,_n_index_21605,_n_value_21606);return _n_value_21606;})());
(void)((_n_ray_21348=(_n_beam_21361*(d::truth((_n_L_21338<3.0))?(0.45+(0.55*_n_clamp_21177((_n_mist_21364/_n_M_21359)))):(0.25+(0.75*_n_clamp_21177((_n_mist_21364/_n_M_21359))))))));
(void)(([&](){auto&& _n_array_21607=this->_n_lift_21205;auto _n_index_21608=_n_k_21336;auto _n_value_21609=0.03;d::put(_n_array_21607,_n_index_21608,_n_value_21609);return _n_value_21609;})());
}else {d::check_cancel();if(d::truth((_n_L_21338==_n_NEAR_21182))){d::check_cancel();double _n_g_21371=(d::at(this->_n_tex_21194,_n_k_21336)*0.12);
(void)((((_n_cr_21345=(0.001+(_n_g_21371*0.35))),(_n_cg_21346=(0.004+_n_g_21371))),(_n_cb_21347=(0.004+(_n_g_21371*0.9)))));
double _n_rim_21372=(d::at(this->_n_edge_21192,_n_k_21336)*(0.12+(0.6*_n_s_21343)));
(void)((((_n_cr_21345=(_n_cr_21345+(_n_rim_21372*0.9))),(_n_cg_21346=(_n_cg_21346+(_n_rim_21372*0.7)))),(_n_cb_21347=(_n_cb_21347+(_n_rim_21372*0.38)))));
(void)(([&](){auto&& _n_array_21610=this->_n_fogAmt_21200;auto _n_index_21611=_n_k_21336;auto _n_value_21612=d::at(d::at(_n_LAYERS_21181,_n_L_21338),8.0);d::put(_n_array_21610,_n_index_21611,_n_value_21612);return _n_value_21612;})());
(void)(([&](){auto&& _n_array_21613=this->_n_fogSpeed_21201;auto _n_index_21614=_n_k_21336;auto _n_value_21615=d::at(d::at(_n_LAYERS_21181,_n_L_21338),6.0);d::put(_n_array_21613,_n_index_21614,_n_value_21615);return _n_value_21615;})());
(void)((_n_ray_21348=0.12));
(void)(([&](){auto&& _n_array_21616=this->_n_lift_21205;auto _n_index_21617=_n_k_21336;auto _n_value_21618=0.0;d::put(_n_array_21616,_n_index_21617,_n_value_21618);return _n_value_21618;})());
}else {d::check_cancel();if(d::truth((_n_L_21338==_n_FLOOR_21172))){d::check_cancel();double _n_clump_21373=([&](){auto _n_argument_21619=0.42;auto _n_argument_21620=0.72;auto _n_argument_21621=_n_fbm_21176((_n_x_21335*0.09),(_n_y_21337*0.4),3.0,0.0);return _n_smooth_21178(_n_argument_21619,_n_argument_21620,_n_argument_21621);})();
double _n_speck_21374=(d::truth((_n_hash_21174((_n_x_21335*7.0),(_n_r_21334*11.0))>0.55))?1.0:0.35);
double _n_m_21375=(((0.06+(0.3*_n_clump_21373))*_n_speck_21374)*_n_smooth_21178((_n_H_21165+2.0),(_n_H_21165-8.0),_n_y_21337));
(void)((((_n_cr_21345=(0.02+(_n_m_21375*0.6))),(_n_cg_21346=(0.03+(_n_m_21375*0.62)))),(_n_cb_21347=(0.02+(_n_m_21375*0.3)))));
(void)(([&](){auto&& _n_array_21622=this->_n_fogAmt_21200;auto _n_index_21623=_n_k_21336;auto _n_value_21624=0.06;d::put(_n_array_21622,_n_index_21623,_n_value_21624);return _n_value_21624;})());
(void)(([&](){auto&& _n_array_21625=this->_n_fogSpeed_21201;auto _n_index_21626=_n_k_21336;auto _n_value_21627=3.4;d::put(_n_array_21625,_n_index_21626,_n_value_21627);return _n_value_21627;})());
(void)((_n_ray_21348=0.0));
(void)(([&](){auto&& _n_array_21628=this->_n_floorLit_21204;auto _n_index_21629=_n_k_21336;auto _n_value_21630=([&](){auto _n_left_21631=([&](){auto _n_argument_21633=0.32;auto _n_argument_21634=0.56;auto _n_argument_21635=_n_fbm_21176(((_n_x_21335*0.06)+3.0),(_n_y_21337*0.24),3.0,0.0);return _n_smooth_21178(_n_argument_21633,_n_argument_21634,_n_argument_21635);})();auto _n_right_21632=_n_smooth_21178((_n_H_21165+3.0),(_n_H_21165-6.0),_n_y_21337);return (_n_left_21631*_n_right_21632);})();d::put(_n_array_21628,_n_index_21629,_n_value_21630);return _n_value_21630;})());
(void)(([&](){auto&& _n_array_21636=this->_n_lift_21205;auto _n_index_21637=_n_k_21336;auto _n_value_21638=0.0;d::put(_n_array_21636,_n_index_21637,_n_value_21638);return _n_value_21638;})());
}else {d::check_cancel();double _n_g_21376=(d::at(this->_n_tex_21194,_n_k_21336)*0.15);
(void)((((_n_cr_21345=(0.001+(_n_g_21376*0.35))),(_n_cg_21346=(0.004+_n_g_21376))),(_n_cb_21347=(0.004+(_n_g_21376*0.9)))));
double _n_warm_21377=std::exp(((-d::number(_n_d_21342))/50.0));
double _n_rim_21378=(d::at(this->_n_edge_21192,_n_k_21336)*(0.13+(0.55*_n_warm_21377)));
(void)((((_n_cr_21345=(_n_cr_21345+(_n_rim_21378*_n_mix_21179(0.4,0.95,_n_warm_21377)))),(_n_cg_21346=(_n_cg_21346+(_n_rim_21378*_n_mix_21179(0.75,0.66,_n_warm_21377))))),(_n_cb_21347=(_n_cb_21347+(_n_rim_21378*_n_mix_21179(0.72,0.32,_n_warm_21377))))));
(void)(([&](){auto&& _n_array_21639=this->_n_fogAmt_21200;auto _n_index_21640=_n_k_21336;auto _n_value_21641=0.04;d::put(_n_array_21639,_n_index_21640,_n_value_21641);return _n_value_21641;})());
(void)(([&](){auto&& _n_array_21642=this->_n_fogSpeed_21201;auto _n_index_21643=_n_k_21336;auto _n_value_21644=4.0;d::put(_n_array_21642,_n_index_21643,_n_value_21644);return _n_value_21644;})());
(void)((_n_ray_21348=0.04));
(void)(([&](){auto&& _n_array_21645=this->_n_lift_21205;auto _n_index_21646=_n_k_21336;auto _n_value_21647=0.0;d::put(_n_array_21645,_n_index_21646,_n_value_21647);return _n_value_21647;})());
}
}
}
}
(void)((_n_ray_21348=(_n_ray_21348*(0.2+([&](){auto _n_left_21648=(0.8*_n_smooth_21178(1.25,1.75,_n_ang_21341));auto _n_right_21649=_n_smooth_21178(3.1,2.6,_n_ang_21341);return (_n_left_21648*_n_right_21649);})()))));
(void)(([&](){auto&& _n_array_21650=this->_n_rayAmt_21202;auto _n_index_21651=_n_k_21336;auto _n_value_21652=_n_ray_21348;d::put(_n_array_21650,_n_index_21651,_n_value_21652);return _n_value_21652;})());
(void)(((([&](){auto&& _n_array_21653=this->_n_sr_21197;auto _n_index_21654=_n_k_21336;auto _n_value_21655=_n_cr_21345;d::put(_n_array_21653,_n_index_21654,_n_value_21655);return _n_value_21655;})(),([&](){auto&& _n_array_21656=this->_n_sg_21198;auto _n_index_21657=_n_k_21336;auto _n_value_21658=_n_cg_21346;d::put(_n_array_21656,_n_index_21657,_n_value_21658);return _n_value_21658;})()),([&](){auto&& _n_array_21659=this->_n_sb_21199;auto _n_index_21660=_n_k_21336;auto _n_value_21661=_n_cb_21347;d::put(_n_array_21659,_n_index_21660,_n_value_21661);return _n_value_21661;})()));
}}
}}
this->_n_FW_21210=400.0;
this->_n_fog_21211=d::Array<float,true>(size_t((this->_n_FW_21210*_n_H_21165)));
{double _n_r_21379=0.0;
for(;d::truth((_n_r_21379<_n_H_21165));(void)((_n_r_21379++))){d::check_cancel();{double _n_u_21380=0.0;
for(;d::truth((_n_u_21380<this->_n_FW_21210));(void)((_n_u_21380++))){d::check_cancel();(void)(([&](){auto&& _n_array_21662=this->_n_fog_21211;auto _n_index_21663=((_n_r_21379*this->_n_FW_21210)+_n_u_21380);auto _n_value_21664=([&](){auto _n_argument_21665=0.42;auto _n_argument_21666=0.75;auto _n_argument_21667=_n_fbm_21176((_n_u_21380*0.022),(_n_r_21379*0.09),4.0,(this->_n_FW_21210*0.022));return _n_smooth_21178(_n_argument_21665,_n_argument_21666,_n_argument_21667);})();d::put(_n_array_21662,_n_index_21663,_n_value_21664);return _n_value_21664;})());
}}
}}
this->_n_CH_21212=46.0;
this->_n_cloud_21213=d::Array<float,true>(size_t((this->_n_FW_21210*this->_n_CH_21212)));
{double _n_r_21381=0.0;
for(;d::truth((_n_r_21381<this->_n_CH_21212));(void)((_n_r_21381++))){d::check_cancel();{double _n_u_21382=0.0;
for(;d::truth((_n_u_21382<this->_n_FW_21210));(void)((_n_u_21382++))){d::check_cancel();double _n_q_21383=_n_fbm_21176((_n_u_21382*0.01),(_n_r_21381*0.05),2.0,(this->_n_FW_21210*0.01));
(void)(([&](){auto&& _n_array_21668=this->_n_cloud_21213;auto _n_index_21669=((_n_r_21381*this->_n_FW_21210)+_n_u_21382);auto _n_value_21670=([&](){auto _n_argument_21671=0.44;auto _n_argument_21672=0.68;auto _n_argument_21673=_n_fbm_21176(((_n_u_21382*0.016)+(_n_q_21383*1.5)),(_n_r_21381*0.17),4.0,(this->_n_FW_21210*0.016));return _n_smooth_21178(_n_argument_21671,_n_argument_21672,_n_argument_21673);})();d::put(_n_array_21668,_n_index_21669,_n_value_21670);return _n_value_21670;})());
}}
}}
this->_n_SHAFTS_21214=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.42,0.05,0.7},d::Array<double,false>{1.66,0.07,1.0},d::Array<double,false>{1.93,0.05,0.8},d::Array<double,false>{2.18,0.08,1.0},d::Array<double,false>{2.45,0.05,0.75},d::Array<double,false>{2.7,0.06,0.9},d::Array<double,false>{2.95,0.04,0.6}};
this->_n_rayA_21215=d::Array<float,true>(size_t(this->_n_RA_21209));
this->_n_rayB_21216=d::Array<float,true>(size_t(this->_n_RA_21209));
{double _n_i_21384=0.0;
for(;d::truth((_n_i_21384<this->_n_RA_21209));(void)((_n_i_21384++))){d::check_cancel();double _n_a_21385=(((_n_i_21384/this->_n_RA_21209)*ascii::PI)*2.0);
double _n_v_21386=0.0;
for(auto &&_n_item_21674:this->_n_SHAFTS_21214){d::check_cancel();auto _n_binding_21675=_n_item_21674;
double _n_c_21387=d::at(_n_binding_21675,0.0);
double _n_w_21388=d::at(_n_binding_21675,1.0);
double _n_st_21389=d::at(_n_binding_21675,2.0);
(void)((_n_v_21386=([&](){auto _n_argument_21676=_n_v_21386;auto _n_argument_21677=(_n_st_21389*([&](){auto _n_argument_21678=_n_w_21388;auto _n_argument_21679=(_n_w_21388*0.35);auto _n_argument_21680=std::fabs((_n_a_21385-_n_c_21387));return _n_smooth_21178(_n_argument_21678,_n_argument_21679,_n_argument_21680);})());return d::maximum({_n_argument_21676,_n_argument_21677});})()));
}
(void)(([&](){auto&& _n_array_21681=this->_n_rayA_21215;auto _n_index_21682=_n_i_21384;auto _n_value_21683=(_n_v_21386*(0.8+(0.2*_n_fbm_21176((_n_i_21384*0.4),3.1,2.0,(this->_n_RA_21209*0.4)))));d::put(_n_array_21681,_n_index_21682,_n_value_21683);return _n_value_21683;})());
(void)(([&](){auto&& _n_array_21684=this->_n_rayB_21216;auto _n_index_21685=_n_i_21384;auto _n_value_21686=([&](){auto _n_argument_21687=0.4;auto _n_argument_21688=0.7;auto _n_argument_21689=_n_fbm_21176((_n_i_21384*0.03),8.7,2.0,(this->_n_RA_21209*0.03));return _n_smooth_21178(_n_argument_21687,_n_argument_21688,_n_argument_21689);})();d::put(_n_array_21684,_n_index_21685,_n_value_21686);return _n_value_21686;})());
}}
this->_n_motes_21217=d::Array<std::array<double,5>,false>{};
{double _n_i_21390=0.0;
for(;d::truth((_n_i_21390<110.0));(void)((_n_i_21390++))){d::check_cancel();(void)(this->_n_motes_21217.push(std::array<double,5>{(_n_hash_21174(_n_i_21390,1.0)*_n_W_21164),(50.0+(_n_hash_21174(_n_i_21390,2.0)*44.0)),(0.3+(_n_hash_21174(_n_i_21390,3.0)*0.8)),(_n_hash_21174(_n_i_21390,4.0)*6.28),_n_hash_21174(_n_i_21390,5.0)}));
}}
this->_n_mote_21218=d::Array<float,true>(size_t(this->_n_N_21184));
this->_n_moteCells_21219=d::Array<double,false>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_21448> _a1) mutable ->d::String{double _n_t_21391=_a0;
auto _n_binding_21692=(d::present(_a1)?_a1:([&](){auto _n_object_21691=std::make_shared<_n_Record_21448>();return _n_object_21691;})());
std::optional<d::Array<uint8_t,true>> _n_color_21392=_n_binding_21692->_p_color;
{
for(auto &&_n_item_21693:this->_n_moteCells_21219){d::check_cancel();double _n_k_21393=_n_item_21693;
(void)(([&](){auto&& _n_array_21694=this->_n_mote_21218;auto _n_index_21695=_n_k_21393;auto _n_value_21696=0.0;d::put(_n_array_21694,_n_index_21695,_n_value_21696);return _n_value_21696;})());
}
(void)((this->_n_moteCells_21219.resize(size_t(0.0)),0.0));
for(auto &&_n_item_21697:this->_n_motes_21217){d::check_cancel();auto _n_binding_21698=_n_item_21697;
double _n_mx_21394=d::at(_n_binding_21698,0.0);
double _n_my_21395=d::at(_n_binding_21698,1.0);
double _n_sp_21396=d::at(_n_binding_21698,2.0);
double _n_ph_21397=d::at(_n_binding_21698,3.0);
double _n_sz_21398=d::at(_n_binding_21698,4.0);
{
double _n_x_21399=std::floor(d::mod((d::mod(((_n_mx_21394+(_n_t_21391*_n_sp_21396))+(2.5*std::sin(((_n_t_21391*0.4)+_n_ph_21397)))),_n_W_21164)+_n_W_21164),_n_W_21164));
double _n_y_21400=std::floor(((_n_my_21395+(2.0*std::sin(((_n_t_21391*0.3)+(_n_ph_21397*1.7)))))-d::mod(((_n_t_21391*_n_sp_21396)*0.2),6.0)));
if((d::truth((_n_y_21400<0.0))||d::truth((_n_y_21400>=_n_H_21165)))){d::check_cancel();continue;
}
double _n_k_21401=((_n_y_21400*_n_W_21164)+_n_x_21399);
(void)(([&](){auto&& _n_array_21699=this->_n_mote_21218;auto _n_index_21700=_n_k_21401;auto _n_value_21701=(0.5+(0.5*_n_sz_21398));d::put(_n_array_21699,_n_index_21700,_n_value_21701);return _n_value_21701;})());
(void)(this->_n_moteCells_21219.push(_n_k_21401));

}
}
double _n_shiftA_21402=(2.0*std::sin((_n_t_21391*0.35)));
double _n_shiftB_21403=((-d::number(_n_t_21391))*1.6);
double _n_pulse_21404=(0.88+(0.12*std::sin((_n_t_21391*0.7))));
{double _n_r_21405=0.0;
for(;d::truth((_n_r_21405<_n_H_21165));(void)((_n_r_21405++))){d::check_cancel();{double _n_x_21406=0.0;
for(;d::truth((_n_x_21406<_n_W_21164));(void)((_n_x_21406++))){d::check_cancel();double _n_k_21407=((_n_r_21405*_n_W_21164)+_n_x_21406);
double _n_cr_21408=d::at(this->_n_sr_21197,_n_k_21407);
double _n_cg_21409=d::at(this->_n_sg_21198,_n_k_21407);
double _n_cb_21410=d::at(this->_n_sb_21199,_n_k_21407);
double _n_s_21411=d::at(this->_n_sunS_21203,_n_k_21407);
double _n_fa_21412=d::at(this->_n_fogAmt_21200,_n_k_21407);
if(d::truth((_n_fa_21412>0.01))){d::check_cancel();double _n_u_21413=(_n_x_21406+(_n_t_21391*d::at(this->_n_fogSpeed_21201,_n_k_21407)));
double _n_ui_21414=std::floor(_n_u_21413);
double _n_uf_21415=(_n_u_21413-_n_ui_21414);
double _n_f0_21416=d::at(this->_n_fog_21211,((_n_r_21405*this->_n_FW_21210)+d::mod(_n_ui_21414,this->_n_FW_21210)));
double _n_f1_21417=d::at(this->_n_fog_21211,((_n_r_21405*this->_n_FW_21210)+d::mod((_n_ui_21414+1.0),this->_n_FW_21210)));
double _n_a_21418=((_n_f0_21416+((_n_f1_21417-_n_f0_21416)*_n_uf_21415))*_n_fa_21412);
(void)((((_n_cr_21408=([&](){auto _n_argument_21702=_n_cr_21408;auto _n_argument_21703=this->_n_fogR_21188(_n_s_21411);auto _n_argument_21704=_n_a_21418;return _n_mix_21179(_n_argument_21702,_n_argument_21703,_n_argument_21704);})()),(_n_cg_21409=([&](){auto _n_argument_21705=_n_cg_21409;auto _n_argument_21706=this->_n_fogG_21189(_n_s_21411);auto _n_argument_21707=_n_a_21418;return _n_mix_21179(_n_argument_21705,_n_argument_21706,_n_argument_21707);})())),(_n_cb_21410=([&](){auto _n_argument_21708=_n_cb_21410;auto _n_argument_21709=this->_n_fogB_21190(_n_s_21411);auto _n_argument_21710=_n_a_21418;return _n_mix_21179(_n_argument_21708,_n_argument_21709,_n_argument_21710);})())));
}
double _n_ca_21419=d::at(this->_n_cloudAmt_21206,_n_k_21407);
if(d::truth((_n_ca_21419>0.01))){d::check_cancel();double _n_u_21420=(_n_x_21406+(_n_t_21391*0.6));
double _n_ui_21421=std::floor(_n_u_21420);
double _n_uf_21422=(_n_u_21420-_n_ui_21421);
double _n_c0_21423=d::at(this->_n_cloud_21213,((_n_r_21405*this->_n_FW_21210)+d::mod(_n_ui_21421,this->_n_FW_21210)));
double _n_c1_21424=d::at(this->_n_cloud_21213,((_n_r_21405*this->_n_FW_21210)+d::mod((_n_ui_21421+1.0),this->_n_FW_21210)));
double _n_a_21425=((_n_c0_21423+((_n_c1_21424-_n_c0_21423)*_n_uf_21422))*_n_ca_21419);
if(d::truth((_n_a_21425>0.005))){d::check_cancel();double _n_w_21426=std::exp(((-d::number(d::at(this->_n_dist_21208,_n_k_21407)))/40.0));
(void)((((_n_cr_21408=([&](){auto _n_argument_21711=_n_cr_21408;auto _n_argument_21712=_n_mix_21179(0.26,0.95,_n_w_21426);auto _n_argument_21713=_n_a_21425;return _n_mix_21179(_n_argument_21711,_n_argument_21712,_n_argument_21713);})()),(_n_cg_21409=([&](){auto _n_argument_21714=_n_cg_21409;auto _n_argument_21715=_n_mix_21179(0.38,0.72,_n_w_21426);auto _n_argument_21716=_n_a_21425;return _n_mix_21179(_n_argument_21714,_n_argument_21715,_n_argument_21716);})())),(_n_cb_21410=([&](){auto _n_argument_21717=_n_cb_21410;auto _n_argument_21718=_n_mix_21179(0.42,0.45,_n_w_21426);auto _n_argument_21719=_n_a_21425;return _n_mix_21179(_n_argument_21717,_n_argument_21718,_n_argument_21719);})())));
}
}
double _n_ra_21427=d::at(this->_n_rayAmt_21202,_n_k_21407);
double _n_fl_21428=d::at(this->_n_floorLit_21204,_n_k_21407);
double _n_beam_21429=0.0;
if((d::truth((_n_ra_21427>0.01))||d::truth((_n_fl_21428>0.01)))){d::check_cancel();double _n_ai_21430=d::at(this->_n_abin_21207,_n_k_21407);
double _n_ia_21431=std::floor((_n_ai_21430+_n_shiftA_21402));
double _n_ib_21432=std::floor((_n_ai_21430+_n_shiftB_21403));
(void)((_n_beam_21429=((d::at(this->_n_rayA_21215,d::mod((d::mod(_n_ia_21431,this->_n_RA_21209)+this->_n_RA_21209),this->_n_RA_21209))*(0.6+(0.4*d::at(this->_n_rayB_21216,d::mod((d::mod(_n_ib_21432,this->_n_RA_21209)+this->_n_RA_21209),this->_n_RA_21209)))))*_n_pulse_21404)));
}
if((d::truth((_n_ra_21427>0.01))&&d::truth((d::at(this->_n_dist_21208,_n_k_21407)>_n_SUN_R_21167)))){d::check_cancel();double _n_fall_21433=([&](){auto _n_left_21720=std::exp(((-d::number(d::at(this->_n_dist_21208,_n_k_21407)))/80.0));auto _n_right_21721=_n_smooth_21178(_n_SUN_R_21167,12.0,d::at(this->_n_dist_21208,_n_k_21407));return (_n_left_21720*_n_right_21721);})();
double _n_b_21434=((((_n_beam_21429-0.3)*_n_fall_21433)*_n_ra_21427)*2.2);
if(d::truth((_n_b_21434>0.0))){d::check_cancel();(void)((((_n_cr_21408=(_n_cr_21408+(_n_b_21434*1.05))),(_n_cg_21409=(_n_cg_21409+(_n_b_21434*0.8)))),(_n_cb_21410=(_n_cb_21410+(_n_b_21434*0.42)))));
}else {d::check_cancel();double _n_dim_21435=(1.0+_n_b_21434);
(void)((((_n_cr_21408=(_n_cr_21408*_n_dim_21435)),(_n_cg_21409=(_n_cg_21409*_n_dim_21435))),(_n_cb_21410=(_n_cb_21410*_n_dim_21435))));
}
}
if(d::truth((_n_fl_21428>0.01))){d::check_cancel();double _n_b_21436=((_n_beam_21429*_n_fl_21428)*1.1);
(void)((((_n_cr_21408=(_n_cr_21408+(_n_b_21436*1.0))),(_n_cg_21409=(_n_cg_21409+(_n_b_21436*0.78)))),(_n_cb_21410=(_n_cb_21410+(_n_b_21436*0.4)))));
}
double _n_floor_21437=d::at(this->_n_lift_21205,_n_k_21407);
if((d::truth(d::at(this->_n_mote_21218,_n_k_21407))&&d::truth((d::at(this->_n_dist_21208,_n_k_21407)>6.0)))){d::check_cancel();double _n_ia_21438=std::floor((d::at(this->_n_abin_21207,_n_k_21407)+_n_shiftA_21402));
double _n_lit_21439=(d::at(this->_n_rayA_21215,d::mod((d::mod(_n_ia_21438,this->_n_RA_21209)+this->_n_RA_21209),this->_n_RA_21209))*std::exp(((-d::number(d::at(this->_n_dist_21208,_n_k_21407)))/90.0)));
double _n_v_21440=((d::at(this->_n_mote_21218,_n_k_21407)*(0.1+(1.6*_n_lit_21439)))*d::minimum({1.0,(d::at(this->_n_rayAmt_21202,_n_k_21407)*2.0)}));
if(d::truth((_n_v_21440>0.18))){d::check_cancel();(void)((((_n_cr_21408=d::maximum({_n_cr_21408,(_n_v_21440*1.05)})),(_n_cg_21409=d::maximum({_n_cg_21409,(_n_v_21440*0.97)}))),(_n_cb_21410=d::maximum({_n_cb_21410,(_n_v_21440*0.7)}))));
(void)((_n_floor_21437=0.3));
}
}
double _n_peak_21441=d::maximum({_n_cr_21408,_n_cg_21409,_n_cb_21410,0.0001});
double _n_level_21442=_n_clamp_21177((_n_floor_21437+(((1.0-_n_floor_21437)*std::pow(_n_peak_21441,0.9))*0.95)));
double _n_step_21443=([&](){auto _n_argument_21722=0.0;auto _n_argument_21723=([&](){auto _n_argument_21724=3.0;auto _n_argument_21725=d::round(((_n_level_21442*3.0)+d::at(_n_BAYER_21170,((double(d::i32(_n_r_21405)&d::i32(3.0))*4.0)+double(d::i32(_n_x_21406)&d::i32(3.0))))));return d::minimum({_n_argument_21724,_n_argument_21725});})();return d::maximum({_n_argument_21722,_n_argument_21723});})();
(void)(([&](){auto&& _n_array_21726=this->_n_out_21185;auto _n_index_21727=_n_k_21407;auto _n_value_21728=d::at(_n_DOTS_21168,_n_step_21443);d::put(_n_array_21726,_n_index_21727,_n_value_21728);return _n_value_21728;})());
if(d::truth(_n_color_21392)){d::check_cancel();double _n_want_21444=(d::truth(_n_step_21443)?d::minimum({1.0,((_n_level_21442+0.06)/d::at(_n_COVER_21169,_n_step_21443))}):0.0);
double _n_sc_21445=((0.3+(0.7*_n_want_21444))/_n_peak_21441);
(void)(([&](){auto&& _n_array_21729=d::read(_n_color_21392);auto _n_index_21730=_n_k_21407;auto _n_value_21731=([&](){auto _n_argument_21732=_n_clamp_21177((_n_cr_21408*_n_sc_21445));auto _n_argument_21733=_n_clamp_21177((_n_cg_21409*_n_sc_21445));auto _n_argument_21734=_n_clamp_21177((_n_cb_21410*_n_sc_21445));return this->_n_nearest_21187(_n_argument_21732,_n_argument_21733,_n_argument_21734);})();d::put(_n_array_21729,_n_index_21730,_n_value_21731);return _n_value_21731;})());
}
}}
}}
d::Array<d::String,false> _n_lines_21446=d::Array<d::String,false>{};
{double _n_r_21447=0.0;
for(;d::truth((_n_r_21447<_n_H_21165));(void)((_n_r_21447++))){d::check_cancel();(void)(_n_lines_21446.push(d::join(this->_n_out_21185.slice((_n_r_21447*_n_W_21164),((_n_r_21447+1.0)*_n_W_21164)),d::String(u""))));
}}
return d::join(_n_lines_21446,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("misty-forest").cols)*ascii::catalog_meta("misty-forest").rows);auto _env=std::make_shared<_n_Record_21448>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &misty_forest_meta(){return catalog_meta("misty-forest");}
std::unique_ptr<Piece> make_misty_forest(const AsciiPieceOptions &o){return std::make_unique<Native_misty_forest>(o);}
}
