// Direct, statically typed C++ from src/pieces/prism-city.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25083;
struct _n_Record_25122;
struct _n_Record_25361;
struct _n_Record_25083{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_25083> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25083>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_25122{
double _p_x0{};
double _p_x1{};
double _p_top{};
double _p_kind{};
static std::shared_ptr<_n_Record_25122> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25122>();out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_top=d::decode<double>(j["top"]);out->_p_kind=d::decode<double>(j["kind"]);return out;}
};
struct _n_Record_25361{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25361> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25361>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_25108(double _a0,double _a1);
double _n_noise_25109(double _a0,double _a1);
double _n_fbm_25110(double _a0,double _a1,double _a2);
double _n_clamp_25111(double _a0);
double _n_smooth_25112(double _a0,double _a1,double _a2);
double _n_mix_25113(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_25114(d::String _a0);
double _n_cloudDist_25115(double _a0,double _a1);
std::shared_ptr<_n_Record_25083> _n_meta_25082=[](){return ([&](){auto _n_object_25364=std::make_shared<_n_Record_25083>();_n_object_25364->_p_name=d::String(u"prism city");_n_object_25364->_p_category=d::String(u"scenes");_n_object_25364->_p_note=d::String(u"a black spire and an orange cloud over a blue hour city and its river");_n_object_25364->_p_cols=200.0;_n_object_25364->_p_rows=100.0;_n_object_25364->_p_cell=1.0;_n_object_25364->_p_fps=15.0;_n_object_25364->_p_ground=d::String(u"#06080f");_n_object_25364->_p_palette=d::Array<d::String,false>{d::String(u"#111a33"),d::String(u"#16213f"),d::String(u"#1c2a50"),d::String(u"#233463"),d::String(u"#2b4077"),d::String(u"#364e8b"),d::String(u"#445f9f"),d::String(u"#5874b2"),d::String(u"#7089c0"),d::String(u"#8a9cc4"),d::String(u"#a3b1cf"),d::String(u"#c8d2e4"),d::String(u"#eef1f6"),d::String(u"#ffffff"),d::String(u"#ffe9ae"),d::String(u"#ffd27c"),d::String(u"#4a2a2a"),d::String(u"#6e3a24"),d::String(u"#9a4a1c"),d::String(u"#c85f17"),d::String(u"#f38020"),d::String(u"#f8a040"),d::String(u"#fbc06e"),d::String(u"#ffdca6"),d::String(u"#3a3352"),d::String(u"#544766"),d::String(u"#0e1220"),d::String(u"#1a2030"),d::String(u"#283044"),d::String(u"#9c2a26"),d::String(u"#ff4b3e")};return _n_object_25364;})();}();
const double _n_W_25084=[](){return 200.0;}();
const double _n_H_25085=[](){return 100.0;}();
const double _n_LOOP_25086=[](){return 12.0;}();
const double _n_TAU_25087=[](){return (ascii::PI*2.0);}();
const double _n_BANK_25088=[](){return 64.0;}();
const double _n_WL_25089=[](){return 70.0;}();
const double _n_TX_25090=[](){return 100.5;}();
const double _n_SHAFT_HALF_25091=[](){return 7.0;}();
const double _n_HALF_25092=[](){return 10.0;}();
const double _n_SHOULDER_25093=[](){return 37.0;}();
const double _n_APEX_25094=[](){return (_n_SHOULDER_25093-(_n_HALF_25092*std::sqrt(3.0)));}();
const double _n_CLOUD_BASE_25095=[](){return 42.0;}();
const d::String _n_DOTS_25096=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_25097=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_25098=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_25152=_a0;
return ((_n_v_25152/16.0)-0.47);});}();
const double _n_SKY_25099=[](){return 0.0;}();
const double _n_CLOUD_25100=[](){return 1.0;}();
const double _n_BACK_25101=[](){return 2.0;}();
const double _n_FRONT_25102=[](){return 3.0;}();
const double _n_TOWER_25103=[](){return 4.0;}();
const double _n_SPIRE_25104=[](){return 5.0;}();
const double _n_DECK_25105=[](){return 6.0;}();
const double _n_ARCH_25106=[](){return 7.0;}();
const double _n_WATER_25107=[](){return 8.0;}();
double _n_hash_25108(double _a0,double _a1){double _n_x_25153=_a0;
double _n_y_25154=_a1;
{
double _n_h_25155=([&](){auto _n_left_25365=d::imul(double(d::i32(_n_x_25153)|d::i32(0.0)),374761393.0);auto _n_right_25366=d::imul(double(d::i32(_n_y_25154)|d::i32(0.0)),668265263.0);return (_n_left_25365+_n_right_25366);})();
(void)((_n_h_25155=d::imul(double(d::i32(_n_h_25155)^d::i32(double(d::u32(_n_h_25155)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_25155)^d::i32(double(d::u32(_n_h_25155)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_25109(double _a0,double _a1){double _n_x_25156=_a0;
double _n_y_25157=_a1;
{
double _n_xi_25158=std::floor(_n_x_25156);
double _n_yi_25159=std::floor(_n_y_25157);
double _n_fx_25160=(_n_x_25156-_n_xi_25158);
double _n_fy_25161=(_n_y_25157-_n_yi_25159);
double _n_u_25162=((_n_fx_25160*_n_fx_25160)*(3.0-(2.0*_n_fx_25160)));
double _n_v_25163=((_n_fy_25161*_n_fy_25161)*(3.0-(2.0*_n_fy_25161)));
double _n_a_25164=_n_hash_25108(_n_xi_25158,_n_yi_25159);
double _n_b_25165=_n_hash_25108((_n_xi_25158+1.0),_n_yi_25159);
double _n_c_25166=_n_hash_25108(_n_xi_25158,(_n_yi_25159+1.0));
double _n_d_25167=_n_hash_25108((_n_xi_25158+1.0),(_n_yi_25159+1.0));
return (((_n_a_25164+((_n_b_25165-_n_a_25164)*_n_u_25162))+((_n_c_25166-_n_a_25164)*_n_v_25163))+(((((_n_a_25164-_n_b_25165)-_n_c_25166)+_n_d_25167)*_n_u_25162)*_n_v_25163));

}
}

double _n_fbm_25110(double _a0,double _a1,double _a2){double _n_x_25168=_a0;
double _n_y_25169=_a1;
double _n_octaves_25170=_a2;
{
double _n_s_25171=0.0;
double _n_n_25172=0.0;
double _n_amp_25173=0.5;
double _n_f_25174=1.0;
{double _n_i_25175=0.0;
for(;d::truth((_n_i_25175<_n_octaves_25170));(void)((_n_i_25175++))){d::check_cancel();(void)((_n_s_25171=(_n_s_25171+(_n_amp_25173*_n_noise_25109((_n_x_25168*_n_f_25174),(_n_y_25169*_n_f_25174))))));
(void)((_n_n_25172=(_n_n_25172+_n_amp_25173)));
(void)((_n_amp_25173=(_n_amp_25173*0.5)));
(void)((_n_f_25174=(_n_f_25174*2.0)));
}}
return (_n_s_25171/_n_n_25172);

}
}

double _n_clamp_25111(double _a0){double _n_v_25176=_a0;
return (d::truth((_n_v_25176<0.0))?0.0:(d::truth((_n_v_25176>1.0))?1.0:_n_v_25176));}

double _n_smooth_25112(double _a0,double _a1,double _a2){double _n_a_25177=_a0;
double _n_b_25178=_a1;
double _n_v_25179=_a2;
{
double _n_k_25180=_n_clamp_25111(((_n_v_25179-_n_a_25177)/(_n_b_25178-_n_a_25177)));
return ((_n_k_25180*_n_k_25180)*(3.0-(2.0*_n_k_25180)));

}
}

double _n_mix_25113(double _a0,double _a1,double _a2){double _n_a_25181=_a0;
double _n_b_25182=_a1;
double _n_k_25183=_a2;
return (_n_a_25181+((_n_b_25182-_n_a_25181)*_n_k_25183));}

d::Array<double,false> _n_hex_25114(d::String _a0){d::String _n_s_25184=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_25185=_a0;
return (([&](){auto _n_argument_25367=d::slice(_n_s_25184,_n_i_25185,(_n_i_25185+2.0));auto _n_argument_25368=16.0;return d::parseInt(_n_argument_25367,_n_argument_25368);})()/255.0);});}

double _n_cloudDist_25115(double _a0,double _a1){double _n_x_25186=_a0;
double _n_y_25187=_a1;
{
auto _n_circ_25188=[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_cx_25189=_a0;
double _n_cy_25190=_a1;
double _n_r_25191=_a2;
return (d::hypot(std::initializer_list<double>{(_n_x_25186-_n_cx_25189),(_n_y_25187-_n_cy_25190)})-_n_r_25191);};
double _n_bx_25192=d::maximum({(62.0-_n_x_25186),(_n_x_25186-128.0),0.0});
double _n_by_25193=d::maximum({(32.0-_n_y_25187),0.0});
double _n_d_25194=([&](){auto _n_argument_25369=_n_circ_25188(84.0,25.0,17.0);auto _n_argument_25370=_n_circ_25188(114.0,30.0,11.0);auto _n_argument_25371=_n_circ_25188(64.0,35.0,7.0);auto _n_argument_25372=_n_circ_25188(126.0,36.0,6.0);auto _n_argument_25373=(d::hypot(std::initializer_list<double>{_n_bx_25192,_n_by_25193})-0.01);return d::minimum({_n_argument_25369,_n_argument_25370,_n_argument_25371,_n_argument_25372,_n_argument_25373});})();
(void)((_n_d_25194=(_n_d_25194+([&](){auto _n_left_25374=((_n_fbm_25110((_n_x_25186*0.13),(_n_y_25187*0.13),3.0)-0.5)*3.2);auto _n_right_25375=_n_smooth_25112(_n_CLOUD_BASE_25095,(_n_CLOUD_BASE_25095-6.0),_n_y_25187);return (_n_left_25374*_n_right_25375);})())));
return d::maximum({_n_d_25194,(_n_y_25187-_n_CLOUD_BASE_25095)});

}
}

struct Native_prism_city final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_25116{};
double _n_N_25117{};
d::Array<d::String,false> _n_out_25118{};
d::Array<uint8_t,true> _n_lut_25119{};
d::Array<std::shared_ptr<_n_Record_25122>,false> _n_back_25121{};
d::Array<std::shared_ptr<_n_Record_25122>,false> _n_front_25123{};
d::Array<uint8_t,true> _n_mat_25124{};
d::Array<float,true> _n_sR_25125{};
d::Array<float,true> _n_sG_25126{};
d::Array<float,true> _n_sB_25127{};
d::Array<float,true> _n_flo_25128{};
d::Array<float,true> _n_win_25129{};
d::Array<float,true> _n_edge_25130{};
d::Array<d::Array<double,false>,false> _n_stars_25131{};
d::Array<d::Array<double,false>,false> _n_reds_25132{};
double _n_SHAFT_25133{};
double _n_SIDE_25134{};
double _n_PATH_25135{};
d::Array<float,true> _n_ph1_25136{};
d::Array<float,true> _n_ph2_25137{};
d::Array<float,true> _n_fR_25138{};
d::Array<float,true> _n_fG_25139{};
d::Array<float,true> _n_fB_25140{};
d::Array<float,true> _n_fF_25141{};
double _n_w1_25142{};
double _n_w2_25143{};
double _n_TRAIN_25144{};
d::Array<uint8_t,true> _n_lc_25145{};
d::Array<float,true> _n_lRow_25146{};
d::Array<float,true> _n_lA_25147{};
d::Array<float,true> _n_lR_25148{};
d::Array<float,true> _n_lG_25149{};
d::Array<float,true> _n_lB_25150{};
std::function<d::String(double,std::shared_ptr<_n_Record_25361>)> _render;
double _n_nearest_25120(double _a0,double _a1,double _a2){double _n_r_25195=_a0;
double _n_g_25196=_a1;
double _n_b_25197=_a2;
{
double _n_k_25198=([&](){auto _n_left_25591=([&](){auto _n_left_25593=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_25195*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_25594=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_25196*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_25593)|d::i32(_n_right_25594));})();auto _n_right_25592=d::minimum({31.0,double(d::i32((_n_b_25197*31.99))|d::i32(0.0))});return double(d::i32(_n_left_25591)|d::i32(_n_right_25592));})();
if(d::truth((d::at(this->_n_lut_25119,_n_k_25198)!=255.0))){d::check_cancel();return d::at(this->_n_lut_25119,_n_k_25198);
}
double _n_best_25199=0.0;
double _n_bd_25200=1000000000.0;
{double _n_i_25201=0.0;
for(;d::truth((_n_i_25201<double(this->_n_P_25116.size())));(void)((_n_i_25201++))){d::check_cancel();double _n_dr_25202=(d::at(d::at(this->_n_P_25116,_n_i_25201),0.0)-_n_r_25195);
double _n_dg_25203=(d::at(d::at(this->_n_P_25116,_n_i_25201),1.0)-_n_g_25196);
double _n_db_25204=(d::at(d::at(this->_n_P_25116,_n_i_25201),2.0)-_n_b_25197);
double _n_d_25205=((((0.3*_n_dr_25202)*_n_dr_25202)+((0.5*_n_dg_25203)*_n_dg_25203))+((0.2*_n_db_25204)*_n_db_25204));
if(d::truth((_n_d_25205<_n_bd_25200))){d::check_cancel();(void)(((_n_bd_25200=_n_d_25205),(_n_best_25199=_n_i_25201)));
}
}}
return ([&](){auto&& _n_array_25595=this->_n_lut_25119;auto _n_index_25596=_n_k_25198;auto _n_value_25597=_n_best_25199;d::put(_n_array_25595,_n_index_25596,_n_value_25597);return _n_value_25597;})();

}
}

void _n_glow_25151(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,bool _a7){double _n_lx_25258=_a0;
double _n_ly_25259=_a1;
double _n_rad_25260=_a2;
double _n_a_25261=_a3;
double _n_gr_25262=_a4;
double _n_gg_25263=_a5;
double _n_gb_25264=_a6;
bool _n_skipTower_25265=_a7;
{
double _n_n_25266=std::ceil((_n_rad_25260*3.0));
{double _n_r_25267=([&](){auto _n_argument_25598=0.0;auto _n_argument_25599=std::floor((_n_ly_25259-_n_n_25266));return d::maximum({_n_argument_25598,_n_argument_25599});})();
for(;d::truth((_n_r_25267<d::minimum({_n_WL_25089,(_n_ly_25259+_n_n_25266)})));(void)((_n_r_25267++))){d::check_cancel();{double _n_x_25268=([&](){auto _n_argument_25600=0.0;auto _n_argument_25601=std::floor((_n_lx_25258-_n_n_25266));return d::maximum({_n_argument_25600,_n_argument_25601});})();
for(;d::truth((_n_x_25268<d::minimum({_n_W_25084,(_n_lx_25258+_n_n_25266)})));(void)((_n_x_25268++))){d::check_cancel();double _n_k_25269=((_n_r_25267*_n_W_25084)+_n_x_25268);
if((d::truth(_n_skipTower_25265)&&d::truth(([&]()->bool{auto _n_logical_25602=(d::at(this->_n_mat_25124,_n_k_25269)==_n_TOWER_25103);return d::truth(_n_logical_25602)?_n_logical_25602:(d::at(this->_n_mat_25124,_n_k_25269)==_n_SPIRE_25104);})()))){d::check_cancel();continue;
}
double _n_dd_25270=d::hypot(std::initializer_list<double>{((_n_x_25268+0.5)-_n_lx_25258),((_n_r_25267+0.5)-_n_ly_25259)});
double _n_g_25271=(_n_a_25261*std::exp(((-d::number(_n_dd_25270))/_n_rad_25260)));
(void)(((([&](){auto&& _n_array_25603=this->_n_fR_25138;auto _n_index_25604=_n_k_25269;auto _n_value_25605=(d::at(_n_array_25603,_n_index_25604)+(_n_g_25271*_n_gr_25262));d::put(_n_array_25603,_n_index_25604,_n_value_25605);return _n_value_25605;})(),([&](){auto&& _n_array_25606=this->_n_fG_25139;auto _n_index_25607=_n_k_25269;auto _n_value_25608=(d::at(_n_array_25606,_n_index_25607)+(_n_g_25271*_n_gg_25263));d::put(_n_array_25606,_n_index_25607,_n_value_25608);return _n_value_25608;})()),([&](){auto&& _n_array_25609=this->_n_fB_25140;auto _n_index_25610=_n_k_25269;auto _n_value_25611=(d::at(_n_array_25609,_n_index_25610)+(_n_g_25271*_n_gb_25264));d::put(_n_array_25609,_n_index_25610,_n_value_25611);return _n_value_25611;})()));
}}
}}

}
}

explicit Native_prism_city(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_25116=d::map(_n_meta_25082->_p_palette,_n_hex_25114);
this->_n_N_25117=(_n_W_25084*_n_H_25085);
this->_n_out_25118=d::Array<d::String,false>(size_t(this->_n_N_25117));
this->_n_lut_25119=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_back_25121=d::Array<std::shared_ptr<_n_Record_25122>,false>{};
{double _n_x_25206=(-d::number(2.0));
double _n_i_25207=0.0;
for(;d::truth((_n_x_25206<_n_W_25084));(void)((_n_i_25207++))){d::check_cancel();double _n_w_25208=(5.0+std::floor((_n_hash_25108(_n_i_25207,1.0)*7.0)));
double _n_top_25209=([&](){auto _n_left_25376=(55.0+std::floor((_n_hash_25108(_n_i_25207,2.0)*6.0)));auto _n_right_25377=d::round((7.0*std::exp((-d::number(std::pow(((_n_x_25206-100.0)/45.0),2.0))))));return (_n_left_25376-_n_right_25377);})();
(void)(this->_n_back_25121.push(([&](){auto _n_object_25379=std::make_shared<_n_Record_25122>();_n_object_25379->_p_x0=_n_x_25206;_n_object_25379->_p_x1=(_n_x_25206+_n_w_25208);_n_object_25379->_p_top=_n_top_25209;_n_object_25379->_p_kind=(d::truth((_n_hash_25108(_n_i_25207,3.0)<0.5))?2.0:0.0);return _n_object_25379;})()));
(void)((_n_x_25206=(_n_x_25206+_n_w_25208)));
}}
this->_n_front_25123=d::Array<std::shared_ptr<_n_Record_25122>,false>{([&](){auto _n_object_25382=std::make_shared<_n_Record_25122>();_n_object_25382->_p_x0=28.0;_n_object_25382->_p_x1=37.0;_n_object_25382->_p_top=41.0;_n_object_25382->_p_kind=0.0;return _n_object_25382;})(),([&](){auto _n_object_25384=std::make_shared<_n_Record_25122>();_n_object_25384->_p_x0=59.0;_n_object_25384->_p_x1=67.0;_n_object_25384->_p_top=46.0;_n_object_25384->_p_kind=1.0;return _n_object_25384;})(),([&](){auto _n_object_25386=std::make_shared<_n_Record_25122>();_n_object_25386->_p_x0=141.0;_n_object_25386->_p_x1=150.0;_n_object_25386->_p_top=44.0;_n_object_25386->_p_kind=0.0;return _n_object_25386;})(),([&](){auto _n_object_25388=std::make_shared<_n_Record_25122>();_n_object_25388->_p_x0=166.0;_n_object_25388->_p_x1=173.0;_n_object_25388->_p_top=39.0;_n_object_25388->_p_kind=1.0;return _n_object_25388;})()};
{double _n_x_25210=(-d::number(3.0));
double _n_i_25211=0.0;
for(;d::truth((_n_x_25210<_n_W_25084));(void)((_n_i_25211++))){d::check_cancel();double _n_w_25212=(6.0+std::floor((_n_hash_25108(_n_i_25211,11.0)*9.0)));
double _n_top_25213=(52.0+std::floor((_n_hash_25108(_n_i_25211,12.0)*10.0)));
if((d::truth(((_n_x_25210+_n_w_25212)>86.0))&&d::truth((_n_x_25210<115.0)))){d::check_cancel();(void)((_n_top_25213=d::maximum({_n_top_25213,58.0})));
}
(void)(this->_n_front_25123.push(([&](){auto _n_object_25390=std::make_shared<_n_Record_25122>();_n_object_25390->_p_x0=_n_x_25210;_n_object_25390->_p_x1=(_n_x_25210+_n_w_25212);_n_object_25390->_p_top=_n_top_25213;_n_object_25390->_p_kind=std::floor((_n_hash_25108(_n_i_25211,13.0)*3.0));return _n_object_25390;})()));
(void)((_n_x_25210=(_n_x_25210+(_n_w_25212+std::floor((_n_hash_25108(_n_i_25211,14.0)*2.0))))));
}}
this->_n_mat_25124=d::Array<uint8_t,true>(size_t(this->_n_N_25117));
this->_n_sR_25125=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_sG_25126=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_sB_25127=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_flo_25128=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_win_25129=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_edge_25130=d::Array<float,true>(size_t(this->_n_N_25117)).fill((-d::number(1.0)));
this->_n_stars_25131=d::Array<d::Array<double,false>,false>{};
this->_n_reds_25132=d::Array<d::Array<double,false>,false>{};
this->_n_SHAFT_25133=(_n_BANK_25088-_n_SHOULDER_25093);
this->_n_SIDE_25134=(2.0*_n_HALF_25092);
this->_n_PATH_25135=(this->_n_SHAFT_25133+this->_n_SIDE_25134);
{double _n_r_25214=0.0;
for(;d::truth((_n_r_25214<_n_WL_25089));(void)((_n_r_25214++))){d::check_cancel();{double _n_x_25215=0.0;
for(;d::truth((_n_x_25215<_n_W_25084));(void)((_n_x_25215++))){d::check_cancel();double _n_k_25216=((_n_r_25214*_n_W_25084)+_n_x_25215);
double _n_xc_25217=(_n_x_25215+0.5);
double _n_y_25218=(_n_r_25214+0.5);
double _n_v_25219=(_n_y_25218/_n_BANK_25088);
double _n_veil_25220=(0.9+(0.2*_n_fbm_25110((_n_x_25215*0.04),(_n_y_25218*0.07),3.0)));
double _n_low_25221=(std::exp(((-d::number((_n_BANK_25088-_n_y_25218)))/7.0))*0.2);
double _n_cr_25222=(((0.025+((0.2*_n_v_25219)*_n_v_25219))*_n_veil_25220)+(_n_low_25221*0.75));
double _n_cg_25223=(((0.045+((0.29*_n_v_25219)*_n_v_25219))*_n_veil_25220)+(_n_low_25221*0.55));
double _n_cb_25224=(((0.12+(0.48*std::pow(_n_v_25219,1.5)))*_n_veil_25220)+(_n_low_25221*0.5));
double _n_m_25225=_n_SKY_25099;
double _n_fl_25226=0.15;
double _n_d_25227=_n_cloudDist_25115(_n_xc_25217,_n_y_25218);
if(d::truth((_n_d_25227<1.2))){d::check_cancel();double _n_c_25228=_n_smooth_25112(1.2,(-d::number(1.2)),_n_d_25227);
double _n_lb_25229=([&](){auto _n_argument_25391=_n_smooth_25112(6.0,_n_CLOUD_BASE_25095,_n_y_25218);auto _n_argument_25392=1.6;return std::pow(_n_argument_25391,_n_argument_25392);})();
double _n_hb_25230=std::exp((-d::number(std::pow(((_n_xc_25217-98.0)/40.0),2.0))));
double _n_puff_25231=([&](){auto _n_left_25393=_n_fbm_25110((_n_x_25215*0.09),(_n_y_25218*0.12),4.0);auto _n_right_25394=_n_fbm_25110((_n_x_25215*0.09),((_n_y_25218+2.5)*0.12),4.0);return (_n_left_25393-_n_right_25394);})();
double _n_belly_25232=(_n_smooth_25112((_n_CLOUD_BASE_25095-7.0),(_n_CLOUD_BASE_25095-1.0),_n_y_25218)*0.25);
double _n_b_25233=_n_clamp_25111((((0.1+((0.8*_n_lb_25229)*(0.55+(0.45*_n_hb_25230))))+(1.0*_n_puff_25231))+_n_belly_25232));
double _n_kr_25234{};
double _n_kg_25235{};
double _n_kb_25236{};
if(d::truth((_n_b_25233<0.35))){d::check_cancel();(void)((((_n_kr_25234=_n_mix_25113(0.28,0.6,(_n_b_25233/0.35))),(_n_kg_25235=_n_mix_25113(0.14,0.27,(_n_b_25233/0.35)))),(_n_kb_25236=_n_mix_25113(0.16,0.12,(_n_b_25233/0.35)))));
}else {d::check_cancel();if(d::truth((_n_b_25233<0.72))){d::check_cancel();(void)((((_n_kr_25234=_n_mix_25113(0.6,0.95,((_n_b_25233-0.35)/0.37))),(_n_kg_25235=_n_mix_25113(0.27,0.5,((_n_b_25233-0.35)/0.37)))),(_n_kb_25236=_n_mix_25113(0.12,0.12,((_n_b_25233-0.35)/0.37)))));
}else {d::check_cancel();(void)((((_n_kr_25234=_n_mix_25113(0.95,1.0,((_n_b_25233-0.72)/0.28))),(_n_kg_25235=_n_mix_25113(0.5,0.85,((_n_b_25233-0.72)/0.28)))),(_n_kb_25236=_n_mix_25113(0.12,0.6,((_n_b_25233-0.72)/0.28)))));
}
}
double _n_s_25237=(0.35+(0.65*_n_b_25233));
(void)((((_n_cr_25222=_n_mix_25113(_n_cr_25222,(_n_kr_25234*_n_s_25237),_n_c_25228)),(_n_cg_25223=_n_mix_25113(_n_cg_25223,(_n_kg_25235*_n_s_25237),_n_c_25228))),(_n_cb_25224=_n_mix_25113(_n_cb_25224,(_n_kb_25236*_n_s_25237),_n_c_25228))));
if(d::truth((_n_c_25228>0.5))){d::check_cancel();(void)((_n_m_25225=_n_CLOUD_25100));
}
}
if(d::truth((_n_m_25225==_n_SKY_25099))){d::check_cancel();double _n_halo_25238=([&](){auto _n_left_25395=([&](){auto _n_left_25397=std::exp(((-d::number(d::maximum({0.0,_n_d_25227})))/4.5));auto _n_right_25398=(0.08+(0.22*_n_smooth_25112(20.0,(_n_CLOUD_BASE_25095+4.0),_n_y_25218)));return (_n_left_25397*_n_right_25398);})();auto _n_right_25396=std::exp((-d::number(std::pow(((_n_xc_25217-96.0)/50.0),2.0))));return (_n_left_25395*_n_right_25396);})();
(void)((((_n_cr_25222=(_n_cr_25222+_n_halo_25238)),(_n_cg_25223=(_n_cg_25223+(_n_halo_25238*0.45)))),(_n_cb_25224=(_n_cb_25224+(_n_halo_25238*0.12)))));
if(((d::truth((_n_y_25218<26.0))&&d::truth((_n_d_25227>3.0)))&&d::truth((_n_hash_25108(_n_x_25215,((_n_r_25214*3.0)+11.0))>0.99)))){d::check_cancel();(void)(this->_n_stars_25131.push(d::Array<double,false>{_n_k_25216,(1.0+std::floor((_n_hash_25108(_n_x_25215,_n_r_25214)*3.0))),(_n_hash_25108(_n_r_25214,_n_x_25215)*_n_TAU_25087)}));
}
}
for(auto &&_n_item_25399:this->_n_back_25121){d::check_cancel();std::shared_ptr<_n_Record_25122> _n_b_25239=_n_item_25399;
{
if((((d::truth((_n_xc_25217<_n_b_25239->_p_x0))||d::truth((_n_xc_25217>=_n_b_25239->_p_x1)))||d::truth((_n_y_25218<_n_b_25239->_p_top)))||d::truth((_n_y_25218>=_n_BANK_25088)))){d::check_cancel();continue;
}
(void)((_n_m_25225=_n_BACK_25101));
double _n_lx_25240=(_n_x_25215-std::floor(_n_b_25239->_p_x0));
double _n_ry_25241=(_n_r_25214-_n_b_25239->_p_top);
(void)((((_n_cr_25222=0.06),(_n_cg_25223=0.085)),(_n_cb_25224=0.16)));
if(d::truth((_n_ry_25241==0.0))){d::check_cancel();(void)((((_n_cr_25222=(_n_cr_25222+0.04)),(_n_cg_25223=(_n_cg_25223+0.05))),(_n_cb_25224=(_n_cb_25224+0.08))));
}
if(d::truth((_n_lx_25240==0.0))){d::check_cancel();(void)((((_n_cr_25222=(_n_cr_25222-0.02)),(_n_cg_25223=(_n_cg_25223-0.025))),(_n_cb_25224=(_n_cb_25224-0.04))));
}
double _n_hz_25242=(_n_smooth_25112((_n_BANK_25088-14.0),_n_BANK_25088,_n_y_25218)*0.04);
(void)((((_n_cr_25222=(_n_cr_25222+_n_hz_25242)),(_n_cg_25223=(_n_cg_25223+(_n_hz_25242*1.1)))),(_n_cb_25224=(_n_cb_25224+(_n_hz_25242*1.4)))));
(void)((_n_fl_25226=0.05));
if(((((d::truth((_n_ry_25241>=2.0))&&d::truth((d::mod(_n_ry_25241,2.0)==0.0)))&&d::truth((d::mod(_n_lx_25240,2.0)==1.0)))&&d::truth((_n_xc_25217<(_n_b_25239->_p_x1-1.0))))&&d::truth((_n_hash_25108(_n_k_25216,4.0)<(d::truth((_n_b_25239->_p_kind==2.0))?0.18:0.3))))){d::check_cancel();(void)(([&](){auto&& _n_array_25400=this->_n_win_25129;auto _n_index_25401=_n_k_25216;auto _n_value_25402=([&](){auto _n_left_25403=(d::truth((_n_hash_25108(_n_k_25216,5.0)<0.3))?(-d::number(1.0)):1.0);auto _n_right_25404=(0.35+(0.2*_n_hash_25108(_n_k_25216,6.0)));return (_n_left_25403*_n_right_25404);})();d::put(_n_array_25400,_n_index_25401,_n_value_25402);return _n_value_25402;})());
}

}
}
{double _n_bi_25243=0.0;
for(;d::truth((_n_bi_25243<double(this->_n_front_25123.size())));(void)((_n_bi_25243++))){d::check_cancel();std::shared_ptr<_n_Record_25122> _n_b_25244=d::at(this->_n_front_25123,_n_bi_25243);
if((((d::truth((_n_xc_25217<_n_b_25244->_p_x0))||d::truth((_n_xc_25217>=_n_b_25244->_p_x1)))||d::truth((_n_y_25218<_n_b_25244->_p_top)))||d::truth((_n_y_25218>=_n_BANK_25088)))){d::check_cancel();continue;
}
(void)((_n_m_25225=_n_FRONT_25102));
double _n_lx_25245=(_n_x_25215-std::floor(_n_b_25244->_p_x0));
double _n_ry_25246=(_n_r_25214-_n_b_25244->_p_top);
double _n_bw_25247=(_n_b_25244->_p_x1-_n_b_25244->_p_x0);
double _n_tone_25248=(0.85+(0.3*_n_hash_25108(_n_bi_25243,31.0)));
(void)((((_n_cr_25222=(0.025*_n_tone_25248)),(_n_cg_25223=(0.033*_n_tone_25248))),(_n_cb_25224=(0.065*_n_tone_25248))));
if(d::truth((_n_ry_25246==0.0))){d::check_cancel();(void)((((_n_cr_25222=(_n_cr_25222+0.07)),(_n_cg_25223=(_n_cg_25223+0.09))),(_n_cb_25224=(_n_cb_25224+0.14))));
}
if(d::truth((_n_lx_25245==(_n_bw_25247-1.0)))){d::check_cancel();(void)((((_n_cr_25222=(_n_cr_25222+0.03)),(_n_cg_25223=(_n_cg_25223+0.04))),(_n_cb_25224=(_n_cb_25224+0.07))));
}
(void)((_n_fl_25226=0.02));
(void)(([&](){auto&& _n_array_25405=this->_n_win_25129;auto _n_index_25406=_n_k_25216;auto _n_value_25407=0.0;d::put(_n_array_25405,_n_index_25406,_n_value_25407);return _n_value_25407;})());
if(((d::truth((_n_ry_25246>=2.0))&&d::truth((_n_lx_25245>=1.0)))&&d::truth((_n_lx_25245<(_n_bw_25247-1.0))))){d::check_cancel();double _n_lit_25249=0.0;
if(d::truth((_n_b_25244->_p_kind==0.0))){d::check_cancel();(void)((_n_lit_25249=(((d::truth((d::mod(_n_ry_25246,2.0)==0.0))&&d::truth((d::mod(_n_lx_25245,2.0)==1.0)))&&d::truth((_n_hash_25108(_n_k_25216,7.0)<0.4)))?1.0:0.0)));
}else {d::check_cancel();if(d::truth((_n_b_25244->_p_kind==1.0))){d::check_cancel();(void)((_n_lit_25249=(((d::truth((d::mod(_n_ry_25246,3.0)==0.0))&&d::truth((_n_hash_25108(((_n_bi_25243*64.0)+_n_ry_25246),8.0)<0.4)))&&d::truth((_n_hash_25108(_n_k_25216,8.0)<0.75)))?1.0:0.0)));
}else {d::check_cancel();(void)((_n_lit_25249=(((d::truth((d::mod(_n_ry_25246,2.0)==0.0))&&d::truth((d::mod(_n_lx_25245,3.0)==1.0)))&&d::truth((_n_hash_25108(_n_k_25216,9.0)<0.3)))?1.0:0.0)));
}
}
if(d::truth(_n_lit_25249)){d::check_cancel();(void)(([&](){auto&& _n_array_25408=this->_n_win_25129;auto _n_index_25409=_n_k_25216;auto _n_value_25410=([&](){auto _n_left_25411=(d::truth((_n_hash_25108(_n_bi_25243,10.0)<0.35))?(-d::number(1.0)):1.0);auto _n_right_25412=(0.6+(0.35*_n_hash_25108(_n_k_25216,11.0)));return (_n_left_25411*_n_right_25412);})();d::put(_n_array_25408,_n_index_25409,_n_value_25410);return _n_value_25410;})());
}
}
if(((d::truth((_n_b_25244->_p_top<50.0))&&d::truth((_n_ry_25246==0.0)))&&d::truth((_n_lx_25245==std::floor((_n_bw_25247/2.0)))))){d::check_cancel();(void)(this->_n_reds_25132.push(d::Array<double,false>{_n_x_25215,(_n_r_25214-1.0),(_n_hash_25108(_n_bi_25243,12.0)*2.0)}));
}
}}
double _n_dx_25250=std::fabs((_n_xc_25217-_n_TX_25090));
if(((d::truth((_n_y_25218>=_n_SHOULDER_25093))&&d::truth((_n_y_25218<_n_BANK_25088)))&&d::truth((_n_dx_25250<=_n_SHAFT_HALF_25091)))){d::check_cancel();(void)((_n_m_25225=_n_TOWER_25103));
(void)(([&](){auto&& _n_array_25413=this->_n_win_25129;auto _n_index_25414=_n_k_25216;auto _n_value_25415=0.0;d::put(_n_array_25413,_n_index_25414,_n_value_25415);return _n_value_25415;})());
(void)((((_n_cr_25222=0.01),(_n_cg_25223=0.012)),(_n_cb_25224=0.022)));
if(d::truth(((_n_xc_25217-_n_TX_25090)>(_n_SHAFT_HALF_25091-1.0)))){d::check_cancel();(void)((((_n_cr_25222=(_n_cr_25222+0.05)),(_n_cg_25223=(_n_cg_25223+0.07))),(_n_cb_25224=(_n_cb_25224+0.11))));
}
if(d::truth((d::mod(_n_r_25214,4.0)==0.0))){d::check_cancel();(void)((((_n_cr_25222=(_n_cr_25222+0.008)),(_n_cg_25223=(_n_cg_25223+0.01))),(_n_cb_25224=(_n_cb_25224+0.016))));
}
(void)((_n_fl_25226=0.0));
if(d::truth((_n_dx_25250>(_n_SHAFT_HALF_25091-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_25416=this->_n_edge_25130;auto _n_index_25417=_n_k_25216;auto _n_value_25418=((_n_BANK_25088-_n_y_25218)/this->_n_PATH_25135);d::put(_n_array_25416,_n_index_25417,_n_value_25418);return _n_value_25418;})());
}
}
if((d::truth((_n_y_25218>=_n_APEX_25094))&&d::truth((_n_y_25218<_n_SHOULDER_25093)))){d::check_cancel();double _n_hw_25251=(((_n_y_25218-_n_APEX_25094)/(_n_SHOULDER_25093-_n_APEX_25094))*_n_HALF_25092);
if(d::truth((_n_dx_25250<=(_n_hw_25251+0.25)))){d::check_cancel();(void)((_n_m_25225=_n_SPIRE_25104));
(void)(([&](){auto&& _n_array_25419=this->_n_win_25129;auto _n_index_25420=_n_k_25216;auto _n_value_25421=0.0;d::put(_n_array_25419,_n_index_25420,_n_value_25421);return _n_value_25421;})());
(void)((((_n_cr_25222=0.012),(_n_cg_25223=0.012)),(_n_cb_25224=0.02)));
(void)((_n_fl_25226=0.0));
if(d::truth((_n_dx_25250>(_n_hw_25251-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_25422=this->_n_edge_25130;auto _n_index_25423=_n_k_25216;auto _n_value_25424=((this->_n_SHAFT_25133+(((_n_SHOULDER_25093-_n_y_25218)/(_n_SHOULDER_25093-_n_APEX_25094))*this->_n_SIDE_25134))/this->_n_PATH_25135);d::put(_n_array_25422,_n_index_25423,_n_value_25424);return _n_value_25424;})());
(void)((((_n_cr_25222=(_n_cr_25222+0.05)),(_n_cg_25223=(_n_cg_25223+0.05))),(_n_cb_25224=(_n_cb_25224+0.065))));
}
}
}
if(d::truth((_n_y_25218>=_n_BANK_25088))){d::check_cancel();double _n_ax_25252=d::mod(_n_x_25215,16.0);
double _n_crown_25253=((_n_BANK_25088+2.2)+(2.6*std::pow(((_n_ax_25252-8.5)/6.5),2.0)));
if(((d::truth((_n_y_25218<(_n_BANK_25088+2.0)))||d::truth((_n_ax_25252<2.0)))||d::truth((_n_y_25218<_n_crown_25253)))){d::check_cancel();(void)((_n_m_25225=_n_DECK_25105));
double _n_s_25254=(d::truth((_n_r_25214==_n_BANK_25088))?0.1:(0.03+(0.015*_n_fbm_25110((_n_x_25215*0.4),(_n_y_25218*0.4),2.0))));
(void)((((_n_cr_25222=(_n_s_25254*0.9)),(_n_cg_25223=_n_s_25254)),(_n_cb_25224=(_n_s_25254*1.5))));
(void)((_n_fl_25226=0.02));
if((d::truth((_n_ax_25252==0.0))&&d::truth((_n_r_25214==(_n_BANK_25088+2.0))))){d::check_cancel();(void)(((((_n_cr_25222=0.95),(_n_cg_25223=0.72)),(_n_cb_25224=0.4)),(_n_fl_25226=0.3)));
}
}else {d::check_cancel();(void)((_n_m_25225=_n_ARCH_25106));
(void)((((_n_cr_25222=0.012),(_n_cg_25223=0.016)),(_n_cb_25224=0.03)));
(void)((_n_fl_25226=0.02));
}
}
(void)(([&](){auto&& _n_array_25425=this->_n_mat_25124;auto _n_index_25426=_n_k_25216;auto _n_value_25427=_n_m_25225;d::put(_n_array_25425,_n_index_25426,_n_value_25427);return _n_value_25427;})());
(void)((((([&](){auto&& _n_array_25428=this->_n_sR_25125;auto _n_index_25429=_n_k_25216;auto _n_value_25430=_n_cr_25222;d::put(_n_array_25428,_n_index_25429,_n_value_25430);return _n_value_25430;})(),([&](){auto&& _n_array_25431=this->_n_sG_25126;auto _n_index_25432=_n_k_25216;auto _n_value_25433=_n_cg_25223;d::put(_n_array_25431,_n_index_25432,_n_value_25433);return _n_value_25433;})()),([&](){auto&& _n_array_25434=this->_n_sB_25127;auto _n_index_25435=_n_k_25216;auto _n_value_25436=_n_cb_25224;d::put(_n_array_25434,_n_index_25435,_n_value_25436);return _n_value_25436;})()),([&](){auto&& _n_array_25437=this->_n_flo_25128;auto _n_index_25438=_n_k_25216;auto _n_value_25439=_n_fl_25226;d::put(_n_array_25437,_n_index_25438,_n_value_25439);return _n_value_25439;})()));
}}
}}
this->_n_ph1_25136=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_ph2_25137=d::Array<float,true>(size_t(this->_n_N_25117));
{double _n_r_25255=_n_WL_25089;
for(;d::truth((_n_r_25255<_n_H_25085));(void)((_n_r_25255++))){d::check_cancel();{double _n_x_25256=0.0;
for(;d::truth((_n_x_25256<_n_W_25084));(void)((_n_x_25256++))){d::check_cancel();double _n_k_25257=((_n_r_25255*_n_W_25084)+_n_x_25256);
(void)(([&](){auto&& _n_array_25440=this->_n_mat_25124;auto _n_index_25441=_n_k_25257;auto _n_value_25442=_n_WATER_25107;d::put(_n_array_25440,_n_index_25441,_n_value_25442);return _n_value_25442;})());
(void)(([&](){auto&& _n_array_25443=this->_n_ph1_25136;auto _n_index_25444=_n_k_25257;auto _n_value_25445=(_n_fbm_25110((_n_x_25256*0.05),(_n_r_25255*0.4),3.0)*9.0);d::put(_n_array_25443,_n_index_25444,_n_value_25445);return _n_value_25445;})());
(void)(([&](){auto&& _n_array_25446=this->_n_ph2_25137;auto _n_index_25447=_n_k_25257;auto _n_value_25448=(_n_fbm_25110(((_n_x_25256*0.03)+40.0),(_n_r_25255*0.25),3.0)*7.0);d::put(_n_array_25446,_n_index_25447,_n_value_25448);return _n_value_25448;})());
}}
}}
this->_n_fR_25138=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_fG_25139=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_fB_25140=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_fF_25141=d::Array<float,true>(size_t(this->_n_N_25117));
this->_n_w1_25142=((_n_TAU_25087*3.0)/_n_LOOP_25086);
this->_n_w2_25143=((_n_TAU_25087*2.0)/_n_LOOP_25086);
this->_n_TRAIN_25144=((4.0*13.0)-1.0);
this->_n_lc_25145=d::Array<uint8_t,true>(size_t(_n_W_25084));
this->_n_lRow_25146=d::Array<float,true>(size_t((_n_W_25084*8.0)));
this->_n_lA_25147=d::Array<float,true>(size_t((_n_W_25084*8.0)));
this->_n_lR_25148=d::Array<float,true>(size_t((_n_W_25084*8.0)));
this->_n_lG_25149=d::Array<float,true>(size_t((_n_W_25084*8.0)));
this->_n_lB_25150=d::Array<float,true>(size_t((_n_W_25084*8.0)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_25361> _a1) mutable ->d::String{double _n_t_25272=_a0;
auto _n_binding_25451=(d::present(_a1)?_a1:([&](){auto _n_object_25450=std::make_shared<_n_Record_25361>();return _n_object_25450;})());
std::optional<d::Array<uint8_t,true>> _n_color_25273=_n_binding_25451->_p_color;
{
double _n_tl_25274=d::mod((d::mod(_n_t_25272,_n_LOOP_25086)+_n_LOOP_25086),_n_LOOP_25086);
double _n_run_25275=(d::mod(_n_tl_25274,4.0)/1.6);
double _n_flare_25276=std::exp((-d::number(std::pow(((d::mod(_n_tl_25274,4.0)-1.75)/0.35),2.0))));
double _n_blink_25277=(d::truth((d::mod(_n_tl_25274,1.5)<0.3))?1.0:0.15);
double _n_head_25278=(d::mod((((_n_tl_25274/_n_LOOP_25086)*300.0)+130.0),300.0)-10.0);
(void)(this->_n_fF_25141.set(this->_n_flo_25128));
{double _n_r_25279=0.0;
for(;d::truth((_n_r_25279<_n_WL_25089));(void)((_n_r_25279++))){d::check_cancel();{double _n_x_25280=0.0;
for(;d::truth((_n_x_25280<_n_W_25084));(void)((_n_x_25280++))){d::check_cancel();double _n_k_25281=((_n_r_25279*_n_W_25084)+_n_x_25280);
double _n_cr_25282=d::at(this->_n_sR_25125,_n_k_25281);
double _n_cg_25283=d::at(this->_n_sG_25126,_n_k_25281);
double _n_cb_25284=d::at(this->_n_sB_25127,_n_k_25281);
double _n_wv_25285=d::at(this->_n_win_25129,_n_k_25281);
if(d::truth((_n_wv_25285!=0.0))){d::check_cancel();double _n_ph_25286=(_n_hash_25108(_n_k_25281,21.0)*_n_LOOP_25086);
bool _n_on_25287=(d::truth((_n_hash_25108(_n_k_25281,22.0)<0.7))?true:(([&](){auto _n_argument_25452=_n_k_25281;auto _n_argument_25453=(23.0+d::mod(std::floor(((_n_tl_25274+_n_ph_25286)/3.0)),4.0));return _n_hash_25108(_n_argument_25452,_n_argument_25453);})()<0.55));
if(d::truth(_n_on_25287)){d::check_cancel();double _n_s_25288=std::fabs(_n_wv_25285);
if(d::truth((_n_wv_25285>0.0))){d::check_cancel();(void)((((_n_cr_25282=(_n_cr_25282+_n_s_25288)),(_n_cg_25283=(_n_cg_25283+(_n_s_25288*0.78)))),(_n_cb_25284=(_n_cb_25284+(_n_s_25288*0.42)))));
}else {d::check_cancel();(void)((((_n_cr_25282=(_n_cr_25282+(_n_s_25288*0.82))),(_n_cg_25283=(_n_cg_25283+(_n_s_25288*0.88)))),(_n_cb_25284=(_n_cb_25284+_n_s_25288))));
}
}
}
double _n_e_25289=d::at(this->_n_edge_25130,_n_k_25281);
if((d::truth((_n_e_25289>=0.0))&&d::truth((_n_run_25275<1.5)))){d::check_cancel();double _n_hold_25290=(d::truth((_n_run_25275<=1.0))?1.0:_n_smooth_25112(1.5,1.0,_n_run_25275));
double _n_g_25291=((d::truth((_n_e_25289<=_n_run_25275))?(0.3+(0.7*std::exp(((-d::number((_n_run_25275-_n_e_25289)))*10.0)))):std::exp((-d::number(std::pow(((_n_e_25289-_n_run_25275)*40.0),2.0)))))*_n_hold_25290);
(void)((((_n_cr_25282=(_n_cr_25282+_n_g_25291)),(_n_cg_25283=(_n_cg_25283+_n_g_25291))),(_n_cb_25284=(_n_cb_25284+_n_g_25291))));
}
(void)(((([&](){auto&& _n_array_25454=this->_n_fR_25138;auto _n_index_25455=_n_k_25281;auto _n_value_25456=_n_cr_25282;d::put(_n_array_25454,_n_index_25455,_n_value_25456);return _n_value_25456;})(),([&](){auto&& _n_array_25457=this->_n_fG_25139;auto _n_index_25458=_n_k_25281;auto _n_value_25459=_n_cg_25283;d::put(_n_array_25457,_n_index_25458,_n_value_25459);return _n_value_25459;})()),([&](){auto&& _n_array_25460=this->_n_fB_25140;auto _n_index_25461=_n_k_25281;auto _n_value_25462=_n_cb_25284;d::put(_n_array_25460,_n_index_25461,_n_value_25462);return _n_value_25462;})()));
}}
}}
for(auto &&_n_item_25463:this->_n_stars_25131){d::check_cancel();auto _n_binding_25464=_n_item_25463;
double _n_k_25292=d::at(_n_binding_25464,0.0);
double _n_rate_25293=d::at(_n_binding_25464,1.0);
double _n_ph_25294=d::at(_n_binding_25464,2.0);
{
double _n_s_25295=(0.35+(0.3*std::sin((((((_n_TAU_25087*_n_rate_25293)*_n_tl_25274)/_n_LOOP_25086)*3.0)+_n_ph_25294))));
(void)(((([&](){auto&& _n_array_25465=this->_n_fR_25138;auto _n_index_25466=_n_k_25292;auto _n_value_25467=d::maximum({d::at(this->_n_fR_25138,_n_k_25292),(_n_s_25295*0.9)});d::put(_n_array_25465,_n_index_25466,_n_value_25467);return _n_value_25467;})(),([&](){auto&& _n_array_25468=this->_n_fG_25139;auto _n_index_25469=_n_k_25292;auto _n_value_25470=d::maximum({d::at(this->_n_fG_25139,_n_k_25292),(_n_s_25295*0.93)});d::put(_n_array_25468,_n_index_25469,_n_value_25470);return _n_value_25470;})()),([&](){auto&& _n_array_25471=this->_n_fB_25140;auto _n_index_25472=_n_k_25292;auto _n_value_25473=d::maximum({d::at(this->_n_fB_25140,_n_k_25292),_n_s_25295});d::put(_n_array_25471,_n_index_25472,_n_value_25473);return _n_value_25473;})()));

}
}
for(auto &&_n_item_25474:this->_n_reds_25132){d::check_cancel();auto _n_binding_25475=_n_item_25474;
double _n_x_25296=d::at(_n_binding_25475,0.0);
double _n_r_25297=d::at(_n_binding_25475,1.0);
double _n_ph_25298=d::at(_n_binding_25475,2.0);
{
double _n_on_25299=(d::truth((d::mod((_n_tl_25274+_n_ph_25298),2.0)<0.45))?1.0:0.0);
if(d::truth((!d::truth(_n_on_25299)))){d::check_cancel();continue;
}
double _n_k_25300=((_n_r_25297*_n_W_25084)+_n_x_25296);
(void)(((([&](){auto&& _n_array_25476=this->_n_fR_25138;auto _n_index_25477=_n_k_25300;auto _n_value_25478=1.0;d::put(_n_array_25476,_n_index_25477,_n_value_25478);return _n_value_25478;})(),([&](){auto&& _n_array_25479=this->_n_fG_25139;auto _n_index_25480=_n_k_25300;auto _n_value_25481=0.3;d::put(_n_array_25479,_n_index_25480,_n_value_25481);return _n_value_25481;})()),([&](){auto&& _n_array_25482=this->_n_fB_25140;auto _n_index_25483=_n_k_25300;auto _n_value_25484=0.25;d::put(_n_array_25482,_n_index_25483,_n_value_25484);return _n_value_25484;})()));
(void)(this->_n_glow_25151((_n_x_25296+0.5),(_n_r_25297+0.5),1.2,0.35,1.0,0.25,0.2,false));

}
}
{double _n_x_25301=([&](){auto _n_argument_25485=0.0;auto _n_argument_25486=std::floor((_n_head_25278-this->_n_TRAIN_25144));return d::maximum({_n_argument_25485,_n_argument_25486});})();
for(;d::truth((_n_x_25301<d::minimum({_n_W_25084,(_n_head_25278+1.0)})));(void)((_n_x_25301++))){d::check_cancel();double _n_u_25302=std::floor((_n_head_25278-_n_x_25301));
if(((d::truth((_n_u_25302<0.0))||d::truth((_n_u_25302>=this->_n_TRAIN_25144)))||d::truth((d::mod(_n_u_25302,13.0)==12.0)))){d::check_cancel();continue;
}
double _n_c_25303=d::mod(_n_u_25302,13.0);
{double _n_r_25304=(_n_BANK_25088-4.0);
for(;d::truth((_n_r_25304<_n_BANK_25088));(void)((_n_r_25304++))){d::check_cancel();double _n_k_25305=((_n_r_25304*_n_W_25084)+_n_x_25301);
double _n_cr_25306=0.12;
double _n_cg_25307=0.14;
double _n_cb_25308=0.2;
double _n_row_25309=(_n_r_25304-(_n_BANK_25088-4.0));
if(d::truth((_n_row_25309==0.0))){d::check_cancel();(void)((((_n_cr_25306=0.2),(_n_cg_25307=0.23)),(_n_cb_25308=0.3)));
}else {d::check_cancel();if(d::truth((_n_row_25309==3.0))){d::check_cancel();(void)((((_n_cr_25306=0.04),(_n_cg_25307=0.05)),(_n_cb_25308=0.08)));
}else {d::check_cancel();if(((d::truth((_n_c_25303>0.0))&&d::truth((_n_c_25303<11.0)))&&d::truth((d::mod(_n_c_25303,3.0)!=0.0)))){d::check_cancel();(void)((((_n_cr_25306=0.8),(_n_cg_25307=0.68)),(_n_cb_25308=0.45)));
}
}
}
if((d::truth((_n_u_25302==0.0))&&d::truth((_n_row_25309==2.0)))){d::check_cancel();(void)((((_n_cr_25306=1.0),(_n_cg_25307=1.0)),(_n_cb_25308=1.0)));
}
(void)(((([&](){auto&& _n_array_25487=this->_n_fR_25138;auto _n_index_25488=_n_k_25305;auto _n_value_25489=_n_cr_25306;d::put(_n_array_25487,_n_index_25488,_n_value_25489);return _n_value_25489;})(),([&](){auto&& _n_array_25490=this->_n_fG_25139;auto _n_index_25491=_n_k_25305;auto _n_value_25492=_n_cg_25307;d::put(_n_array_25490,_n_index_25491,_n_value_25492);return _n_value_25492;})()),([&](){auto&& _n_array_25493=this->_n_fB_25140;auto _n_index_25494=_n_k_25305;auto _n_value_25495=_n_cb_25308;d::put(_n_array_25493,_n_index_25494,_n_value_25495);return _n_value_25495;})()));
(void)(([&](){auto&& _n_array_25496=this->_n_fF_25141;auto _n_index_25497=_n_k_25305;auto _n_value_25498=0.1;d::put(_n_array_25496,_n_index_25497,_n_value_25498);return _n_value_25498;})());
}}
}}
if((d::truth((_n_head_25278>=0.0))&&d::truth((_n_head_25278<(_n_W_25084+6.0))))){d::check_cancel();(void)(this->_n_glow_25151((_n_head_25278+1.0),(_n_BANK_25088-1.5),2.2,0.45,1.0,0.95,0.85,false));
}
double _n_bk_25310=([&](){auto _n_left_25499=(std::floor((_n_APEX_25094-1.0))*_n_W_25084);auto _n_right_25500=std::floor(_n_TX_25090);return (_n_left_25499+_n_right_25500);})();
double _n_bv_25311=d::maximum({_n_blink_25277,_n_flare_25276});
(void)(((([&](){auto&& _n_array_25501=this->_n_fR_25138;auto _n_index_25502=_n_bk_25310;auto _n_value_25503=(d::at(_n_array_25501,_n_index_25502)+_n_bv_25311);d::put(_n_array_25501,_n_index_25502,_n_value_25503);return _n_value_25503;})(),([&](){auto&& _n_array_25504=this->_n_fG_25139;auto _n_index_25505=_n_bk_25310;auto _n_value_25506=(d::at(_n_array_25504,_n_index_25505)+_n_bv_25311);d::put(_n_array_25504,_n_index_25505,_n_value_25506);return _n_value_25506;})()),([&](){auto&& _n_array_25507=this->_n_fB_25140;auto _n_index_25508=_n_bk_25310;auto _n_value_25509=(d::at(_n_array_25507,_n_index_25508)+_n_bv_25311);d::put(_n_array_25507,_n_index_25508,_n_value_25509);return _n_value_25509;})()));
(void)(this->_n_glow_25151(_n_TX_25090,(_n_APEX_25094-0.5),(1.4+(2.2*_n_flare_25276)),((0.3*_n_blink_25277)+(0.75*_n_flare_25276)),1.0,0.98,0.95,true));
(void)(this->_n_lc_25145.fill(0.0));
{double _n_x_25312=0.0;
for(;d::truth((_n_x_25312<_n_W_25084));(void)((_n_x_25312++))){d::check_cancel();{double _n_r_25313=(_n_WL_25089-1.0);
for(;(d::truth((_n_r_25313>_n_CLOUD_BASE_25095))&&d::truth((d::at(this->_n_lc_25145,_n_x_25312)<8.0)));(void)((_n_r_25313--))){d::check_cancel();double _n_k_25314=((_n_r_25313*_n_W_25084)+_n_x_25312);
bool _n_train_25315=([&]()->bool{auto _n_logical_25510=([&]()->bool{auto _n_logical_25511=(_n_r_25313>=(_n_BANK_25088-4.0));return d::truth(_n_logical_25511)?((_n_head_25278-_n_x_25312)>=0.0):_n_logical_25511;})();return d::truth(_n_logical_25510)?((_n_head_25278-_n_x_25312)<this->_n_TRAIN_25144):_n_logical_25510;})();
if((d::truth(([&]()->bool{auto _n_logical_25512=(d::at(this->_n_mat_25124,_n_k_25314)==_n_SKY_25099);return d::truth(_n_logical_25512)?_n_logical_25512:(d::at(this->_n_mat_25124,_n_k_25314)==_n_CLOUD_25100);})())&&d::truth((!d::truth(_n_train_25315))))){d::check_cancel();continue;
}
double _n_pk_25316=d::maximum({d::at(this->_n_fR_25138,_n_k_25314),d::at(this->_n_fG_25139,_n_k_25314),d::at(this->_n_fB_25140,_n_k_25314)});
if(d::truth((_n_pk_25316<0.45))){d::check_cancel();continue;
}
double _n_i_25317=((_n_x_25312*8.0)+([&](){auto&& _n_array_25513=this->_n_lc_25145;auto _n_index_25514=_n_x_25312;double _n_old_25515=d::number(d::at(_n_array_25513,_n_index_25514));d::put(_n_array_25513,_n_index_25514,_n_old_25515+(1.0));return _n_old_25515;})());
(void)((([&](){auto&& _n_array_25516=this->_n_lRow_25146;auto _n_index_25517=_n_i_25317;auto _n_value_25518=_n_r_25313;d::put(_n_array_25516,_n_index_25517,_n_value_25518);return _n_value_25518;})(),([&](){auto&& _n_array_25519=this->_n_lA_25147;auto _n_index_25520=_n_i_25317;auto _n_value_25521=((0.55*d::minimum({0.8,(_n_pk_25316-0.3)}))/_n_pk_25316);d::put(_n_array_25519,_n_index_25520,_n_value_25521);return _n_value_25521;})()));
(void)(((([&](){auto&& _n_array_25522=this->_n_lR_25148;auto _n_index_25523=_n_i_25317;auto _n_value_25524=d::at(this->_n_fR_25138,_n_k_25314);d::put(_n_array_25522,_n_index_25523,_n_value_25524);return _n_value_25524;})(),([&](){auto&& _n_array_25525=this->_n_lG_25149;auto _n_index_25526=_n_i_25317;auto _n_value_25527=d::at(this->_n_fG_25139,_n_k_25314);d::put(_n_array_25525,_n_index_25526,_n_value_25527);return _n_value_25527;})()),([&](){auto&& _n_array_25528=this->_n_lB_25150;auto _n_index_25529=_n_i_25317;auto _n_value_25530=d::at(this->_n_fB_25140,_n_k_25314);d::put(_n_array_25528,_n_index_25529,_n_value_25530);return _n_value_25530;})()));
}}
}}
{
double _n_x_25318=std::floor(_n_TX_25090);
double _n_i_25319=((_n_x_25318*8.0)+d::minimum({7.0,d::at(this->_n_lc_25145,_n_x_25318)}));
(void)(([&](){auto&& _n_array_25531=this->_n_lc_25145;auto _n_index_25532=_n_x_25318;auto _n_value_25533=d::minimum({8.0,(d::at(this->_n_lc_25145,_n_x_25318)+1.0)});d::put(_n_array_25531,_n_index_25532,_n_value_25533);return _n_value_25533;})());
(void)((([&](){auto&& _n_array_25534=this->_n_lRow_25146;auto _n_index_25535=_n_i_25319;auto _n_value_25536=(_n_APEX_25094-1.0);d::put(_n_array_25534,_n_index_25535,_n_value_25536);return _n_value_25536;})(),([&](){auto&& _n_array_25537=this->_n_lA_25147;auto _n_index_25538=_n_i_25319;auto _n_value_25539=((0.5*_n_bv_25311)+0.2);d::put(_n_array_25537,_n_index_25538,_n_value_25539);return _n_value_25539;})()));
(void)(((([&](){auto&& _n_array_25540=this->_n_lR_25148;auto _n_index_25541=_n_i_25319;auto _n_value_25542=1.0;d::put(_n_array_25540,_n_index_25541,_n_value_25542);return _n_value_25542;})(),([&](){auto&& _n_array_25543=this->_n_lG_25149;auto _n_index_25544=_n_i_25319;auto _n_value_25545=1.0;d::put(_n_array_25543,_n_index_25544,_n_value_25545);return _n_value_25545;})()),([&](){auto&& _n_array_25546=this->_n_lB_25150;auto _n_index_25547=_n_i_25319;auto _n_value_25548=1.0;d::put(_n_array_25546,_n_index_25547,_n_value_25548);return _n_value_25548;})()));

}
{double _n_r_25320=_n_WL_25089;
for(;d::truth((_n_r_25320<_n_H_25085));(void)((_n_r_25320++))){d::check_cancel();double _n_d_25321=((_n_r_25320-_n_WL_25089)+0.5);
double _n_src_25322=(((_n_WL_25089-0.5)-(_n_d_25321*2.1))-((_n_d_25321*_n_d_25321)*0.015));
double _n_near_25323=(_n_d_25321/(_n_H_25085-_n_WL_25089));
{double _n_x_25324=0.0;
for(;d::truth((_n_x_25324<_n_W_25084));(void)((_n_x_25324++))){d::check_cancel();double _n_k_25325=((_n_r_25320*_n_W_25084)+_n_x_25324);
double _n_w_25326=([&](){auto _n_left_25549=(0.55*std::sin(((((_n_x_25324*0.09)+(_n_r_25320*1.3))+d::at(this->_n_ph1_25136,_n_k_25325))-(this->_n_w1_25142*_n_tl_25274))));auto _n_right_25550=(0.45*std::sin(((((_n_x_25324*0.04)-(_n_r_25320*0.7))+d::at(this->_n_ph2_25137,_n_k_25325))+(this->_n_w2_25143*_n_tl_25274))));return (_n_left_25549+_n_right_25550);})();
double _n_swell_25327=(0.5+(0.45*_n_w_25326));
double _n_cr_25328=((0.045-(0.015*_n_near_25323))*_n_swell_25327);
double _n_cg_25329=((0.085-(0.025*_n_near_25323))*_n_swell_25327);
double _n_cb_25330=((0.2-(0.06*_n_near_25323))*_n_swell_25327);
double _n_wob_25331=(([&](){auto _n_left_25551=(0.55*std::sin((((_n_r_25320*0.8)+(1.7*std::sin((_n_x_25324*0.05))))-((this->_n_w1_25142*2.0)*_n_tl_25274))));auto _n_right_25552=(0.45*std::sin((((_n_r_25320*0.37)+(_n_x_25324*0.03))+(this->_n_w2_25143*_n_tl_25274))));return (_n_left_25551+_n_right_25552);})()*(0.6+(2.6*_n_near_25323)));
double _n_sx_25332=([&](){auto _n_argument_25553=(_n_W_25084-1.0);auto _n_argument_25554=([&](){auto _n_argument_25555=0.0;auto _n_argument_25556=d::round((_n_x_25324+_n_wob_25331));return d::maximum({_n_argument_25555,_n_argument_25556});})();return d::minimum({_n_argument_25553,_n_argument_25554});})();
double _n_rr_25333=0.0;
double _n_gg_25334=0.0;
double _n_bb_25335=0.0;
{double _n_i_25336=0.0;
for(;d::truth((_n_i_25336<3.0));(void)((_n_i_25336++))){d::check_cancel();double _n_j_25337=((([&](){auto _n_argument_25557=0.0;auto _n_argument_25558=([&](){auto _n_argument_25559=(_n_WL_25089-1.0);auto _n_argument_25560=d::round((_n_src_25322-(_n_i_25336*1.2)));return d::minimum({_n_argument_25559,_n_argument_25560});})();return d::maximum({_n_argument_25557,_n_argument_25558});})()*_n_W_25084)+_n_sx_25332);
(void)((((_n_rr_25333=(_n_rr_25333+d::at(this->_n_fR_25138,_n_j_25337))),(_n_gg_25334=(_n_gg_25334+d::at(this->_n_fG_25139,_n_j_25337)))),(_n_bb_25335=(_n_bb_25335+d::at(this->_n_fB_25140,_n_j_25337)))));
}}
double _n_dash_25338=(0.3+(0.9*([&](){auto _n_argument_25561=(-d::number(0.2));auto _n_argument_25562=0.6;auto _n_argument_25563=std::sin((((_n_r_25320*1.1)+d::at(this->_n_ph2_25137,_n_k_25325))-((this->_n_w1_25142*2.0)*_n_tl_25274)));return _n_smooth_25112(_n_argument_25561,_n_argument_25562,_n_argument_25563);})()));
double _n_ma_25339=(0.16*((0.5+(0.5*_n_swell_25327))+(0.3*_n_dash_25338)));
(void)((((_n_rr_25333=(_n_rr_25333*_n_ma_25339)),(_n_gg_25334=(_n_gg_25334*_n_ma_25339))),(_n_bb_25335=(_n_bb_25335*_n_ma_25339))));
{double _n_i_25340=(_n_sx_25332*8.0);
double _n_e_25341=(_n_i_25340+d::at(this->_n_lc_25145,_n_sx_25332));
for(;d::truth((_n_i_25340<_n_e_25341));(void)((_n_i_25340++))){d::check_cancel();double _n_dm_25342=((_n_WL_25089-d::at(this->_n_lRow_25146,_n_i_25340))/2.1);
double _n_g_25343=(([&](){auto _n_left_25564=((d::at(this->_n_lA_25147,_n_i_25340)*_n_dash_25338)*_n_smooth_25112((-d::number(1.5)),((_n_dm_25342*0.4)+0.5),_n_d_25321));auto _n_right_25565=std::exp(((-d::number(d::maximum({0.0,(_n_d_25321-_n_dm_25342)})))/9.0));return (_n_left_25564*_n_right_25565);})()*(0.85-(0.3*_n_near_25323)));
(void)((((_n_rr_25333=(_n_rr_25333+(d::at(this->_n_lR_25148,_n_i_25340)*_n_g_25343))),(_n_gg_25334=(_n_gg_25334+(d::at(this->_n_lG_25149,_n_i_25340)*_n_g_25343)))),(_n_bb_25335=(_n_bb_25335+(d::at(this->_n_lB_25150,_n_i_25340)*_n_g_25343)))));
}}
double _n_kill_25344=(1.0-(0.85*_n_clamp_25111(((_n_rr_25333-_n_bb_25335)*3.0))));
(void)((((_n_cr_25328=((_n_cr_25328*_n_kill_25344)+_n_rr_25333)),(_n_cg_25329=((_n_cg_25329*_n_kill_25344)+_n_gg_25334))),(_n_cb_25330=((_n_cb_25330*_n_kill_25344)+_n_bb_25335))));
double _n_haze_25345=(std::exp(((-d::number(_n_d_25321))/2.2))*0.06);
(void)((((_n_cr_25328=(_n_cr_25328+(_n_haze_25345*0.7))),(_n_cg_25329=(_n_cg_25329+(_n_haze_25345*0.85)))),(_n_cb_25330=(_n_cb_25330+_n_haze_25345))));
(void)(((([&](){auto&& _n_array_25566=this->_n_fR_25138;auto _n_index_25567=_n_k_25325;auto _n_value_25568=_n_cr_25328;d::put(_n_array_25566,_n_index_25567,_n_value_25568);return _n_value_25568;})(),([&](){auto&& _n_array_25569=this->_n_fG_25139;auto _n_index_25570=_n_k_25325;auto _n_value_25571=_n_cg_25329;d::put(_n_array_25569,_n_index_25570,_n_value_25571);return _n_value_25571;})()),([&](){auto&& _n_array_25572=this->_n_fB_25140;auto _n_index_25573=_n_k_25325;auto _n_value_25574=_n_cb_25330;d::put(_n_array_25572,_n_index_25573,_n_value_25574);return _n_value_25574;})()));
(void)(([&](){auto&& _n_array_25575=this->_n_fF_25141;auto _n_index_25576=_n_k_25325;auto _n_value_25577=0.14;d::put(_n_array_25575,_n_index_25576,_n_value_25577);return _n_value_25577;})());
}}
}}
{double _n_r_25346=0.0;
for(;d::truth((_n_r_25346<_n_H_25085));(void)((_n_r_25346++))){d::check_cancel();double _n_fade_25347=(d::truth((_n_r_25346>=_n_WL_25089))?_n_smooth_25112(_n_H_25085,(_n_H_25085-16.0),(_n_r_25346+0.5)):1.0);
{double _n_x_25348=0.0;
for(;d::truth((_n_x_25348<_n_W_25084));(void)((_n_x_25348++))){d::check_cancel();double _n_k_25349=((_n_r_25346*_n_W_25084)+_n_x_25348);
double _n_cr_25350=d::at(this->_n_fR_25138,_n_k_25349);
double _n_cg_25351=d::at(this->_n_fG_25139,_n_k_25349);
double _n_cbl_25352=d::at(this->_n_fB_25140,_n_k_25349);
double _n_floor_25353=d::at(this->_n_fF_25141,_n_k_25349);
double _n_peak_25354=d::maximum({_n_cr_25350,_n_cg_25351,_n_cbl_25352,0.0001});
double _n_level_25355=(_n_clamp_25111((_n_floor_25353+(((1.0-_n_floor_25353)*std::pow(_n_peak_25354,0.85))*0.95)))*_n_fade_25347);
double _n_step_25356=([&](){auto _n_argument_25578=0.0;auto _n_argument_25579=([&](){auto _n_argument_25580=3.0;auto _n_argument_25581=d::round(((_n_level_25355*3.0)+d::at(_n_BAYER_25098,((double(d::i32(_n_r_25346)&d::i32(3.0))*4.0)+double(d::i32(_n_x_25348)&d::i32(3.0))))));return d::minimum({_n_argument_25580,_n_argument_25581});})();return d::maximum({_n_argument_25578,_n_argument_25579});})();
(void)(([&](){auto&& _n_array_25582=this->_n_out_25118;auto _n_index_25583=_n_k_25349;auto _n_value_25584=d::at(_n_DOTS_25096,_n_step_25356);d::put(_n_array_25582,_n_index_25583,_n_value_25584);return _n_value_25584;})());
if(d::truth(_n_color_25273)){d::check_cancel();double _n_want_25357=(d::truth(_n_step_25356)?d::minimum({1.0,((_n_level_25355+0.06)/d::at(_n_COVER_25097,_n_step_25356))}):0.0);
double _n_s_25358=((0.3+(0.7*_n_want_25357))/_n_peak_25354);
(void)(([&](){auto&& _n_array_25585=d::read(_n_color_25273);auto _n_index_25586=_n_k_25349;auto _n_value_25587=([&](){auto _n_argument_25588=_n_clamp_25111((_n_cr_25350*_n_s_25358));auto _n_argument_25589=_n_clamp_25111((_n_cg_25351*_n_s_25358));auto _n_argument_25590=_n_clamp_25111((_n_cbl_25352*_n_s_25358));return this->_n_nearest_25120(_n_argument_25588,_n_argument_25589,_n_argument_25590);})();d::put(_n_array_25585,_n_index_25586,_n_value_25587);return _n_value_25587;})());
}
}}
}}
d::Array<d::String,false> _n_lines_25359=d::Array<d::String,false>{};
{double _n_r_25360=0.0;
for(;d::truth((_n_r_25360<_n_H_25085));(void)((_n_r_25360++))){d::check_cancel();(void)(_n_lines_25359.push(d::join(this->_n_out_25118.slice((_n_r_25360*_n_W_25084),((_n_r_25360+1.0)*_n_W_25084)),d::String(u""))));
}}
return d::join(_n_lines_25359,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("prism-city").cols)*ascii::catalog_meta("prism-city").rows);auto _env=std::make_shared<_n_Record_25361>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &prism_city_meta(){return catalog_meta("prism-city");}
std::unique_ptr<Piece> make_prism_city(const AsciiPieceOptions &o){return std::make_unique<Native_prism_city>(o);}
}
