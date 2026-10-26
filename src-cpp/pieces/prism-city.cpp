// Direct, statically typed C++ from src/pieces/prism-city.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25082;
struct _n_Record_25121;
struct _n_Record_25360;
struct _n_Record_25082{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_25082> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25082>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_25121{
double _p_x0{};
double _p_x1{};
double _p_top{};
double _p_kind{};
static std::shared_ptr<_n_Record_25121> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25121>();out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_top=d::decode<double>(j["top"]);out->_p_kind=d::decode<double>(j["kind"]);return out;}
};
struct _n_Record_25360{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25360> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25360>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_25107(double _a0,double _a1);
double _n_noise_25108(double _a0,double _a1);
double _n_fbm_25109(double _a0,double _a1,double _a2);
double _n_clamp_25110(double _a0);
double _n_smooth_25111(double _a0,double _a1,double _a2);
double _n_mix_25112(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_25113(d::String _a0);
double _n_cloudDist_25114(double _a0,double _a1);
std::shared_ptr<_n_Record_25082> _n_meta_25081=[](){return ([&](){auto _n_object_25363=std::make_shared<_n_Record_25082>();_n_object_25363->_p_name=d::String(u"prism city");_n_object_25363->_p_category=d::String(u"scenes");_n_object_25363->_p_note=d::String(u"a black spire and an orange cloud over a blue hour city and its river");_n_object_25363->_p_cols=200.0;_n_object_25363->_p_rows=100.0;_n_object_25363->_p_cell=1.0;_n_object_25363->_p_fps=15.0;_n_object_25363->_p_ground=d::String(u"#06080f");_n_object_25363->_p_palette=d::Array<d::String,false>{d::String(u"#111a33"),d::String(u"#16213f"),d::String(u"#1c2a50"),d::String(u"#233463"),d::String(u"#2b4077"),d::String(u"#364e8b"),d::String(u"#445f9f"),d::String(u"#5874b2"),d::String(u"#7089c0"),d::String(u"#8a9cc4"),d::String(u"#a3b1cf"),d::String(u"#c8d2e4"),d::String(u"#eef1f6"),d::String(u"#ffffff"),d::String(u"#ffe9ae"),d::String(u"#ffd27c"),d::String(u"#4a2a2a"),d::String(u"#6e3a24"),d::String(u"#9a4a1c"),d::String(u"#c85f17"),d::String(u"#f38020"),d::String(u"#f8a040"),d::String(u"#fbc06e"),d::String(u"#ffdca6"),d::String(u"#3a3352"),d::String(u"#544766"),d::String(u"#0e1220"),d::String(u"#1a2030"),d::String(u"#283044"),d::String(u"#9c2a26"),d::String(u"#ff4b3e")};return _n_object_25363;})();}();
const double _n_W_25083=[](){return 200.0;}();
const double _n_H_25084=[](){return 100.0;}();
const double _n_LOOP_25085=[](){return 12.0;}();
const double _n_TAU_25086=[](){return (ascii::PI*2.0);}();
const double _n_BANK_25087=[](){return 64.0;}();
const double _n_WL_25088=[](){return 70.0;}();
const double _n_TX_25089=[](){return 100.5;}();
const double _n_SHAFT_HALF_25090=[](){return 7.0;}();
const double _n_HALF_25091=[](){return 10.0;}();
const double _n_SHOULDER_25092=[](){return 37.0;}();
const double _n_APEX_25093=[](){return (_n_SHOULDER_25092-(_n_HALF_25091*std::sqrt(3.0)));}();
const double _n_CLOUD_BASE_25094=[](){return 42.0;}();
const d::String _n_DOTS_25095=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_25096=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_25097=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_25151=_a0;
return ((_n_v_25151/16.0)-0.47);});}();
const double _n_SKY_25098=[](){return 0.0;}();
const double _n_CLOUD_25099=[](){return 1.0;}();
const double _n_BACK_25100=[](){return 2.0;}();
const double _n_FRONT_25101=[](){return 3.0;}();
const double _n_TOWER_25102=[](){return 4.0;}();
const double _n_SPIRE_25103=[](){return 5.0;}();
const double _n_DECK_25104=[](){return 6.0;}();
const double _n_ARCH_25105=[](){return 7.0;}();
const double _n_WATER_25106=[](){return 8.0;}();
double _n_hash_25107(double _a0,double _a1){double _n_x_25152=_a0;
double _n_y_25153=_a1;
{
double _n_h_25154=([&](){auto _n_left_25364=d::imul(double(d::i32(_n_x_25152)|d::i32(0.0)),374761393.0);auto _n_right_25365=d::imul(double(d::i32(_n_y_25153)|d::i32(0.0)),668265263.0);return (_n_left_25364+_n_right_25365);})();
(void)((_n_h_25154=d::imul(double(d::i32(_n_h_25154)^d::i32(double(d::u32(_n_h_25154)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_25154)^d::i32(double(d::u32(_n_h_25154)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_25108(double _a0,double _a1){double _n_x_25155=_a0;
double _n_y_25156=_a1;
{
double _n_xi_25157=std::floor(_n_x_25155);
double _n_yi_25158=std::floor(_n_y_25156);
double _n_fx_25159=(_n_x_25155-_n_xi_25157);
double _n_fy_25160=(_n_y_25156-_n_yi_25158);
double _n_u_25161=((_n_fx_25159*_n_fx_25159)*(3.0-(2.0*_n_fx_25159)));
double _n_v_25162=((_n_fy_25160*_n_fy_25160)*(3.0-(2.0*_n_fy_25160)));
double _n_a_25163=_n_hash_25107(_n_xi_25157,_n_yi_25158);
double _n_b_25164=_n_hash_25107((_n_xi_25157+1.0),_n_yi_25158);
double _n_c_25165=_n_hash_25107(_n_xi_25157,(_n_yi_25158+1.0));
double _n_d_25166=_n_hash_25107((_n_xi_25157+1.0),(_n_yi_25158+1.0));
return (((_n_a_25163+((_n_b_25164-_n_a_25163)*_n_u_25161))+((_n_c_25165-_n_a_25163)*_n_v_25162))+(((((_n_a_25163-_n_b_25164)-_n_c_25165)+_n_d_25166)*_n_u_25161)*_n_v_25162));

}
}

double _n_fbm_25109(double _a0,double _a1,double _a2){double _n_x_25167=_a0;
double _n_y_25168=_a1;
double _n_octaves_25169=_a2;
{
double _n_s_25170=0.0;
double _n_n_25171=0.0;
double _n_amp_25172=0.5;
double _n_f_25173=1.0;
{double _n_i_25174=0.0;
for(;d::truth((_n_i_25174<_n_octaves_25169));(void)((_n_i_25174++))){d::check_cancel();(void)((_n_s_25170=(_n_s_25170+(_n_amp_25172*_n_noise_25108((_n_x_25167*_n_f_25173),(_n_y_25168*_n_f_25173))))));
(void)((_n_n_25171=(_n_n_25171+_n_amp_25172)));
(void)((_n_amp_25172=(_n_amp_25172*0.5)));
(void)((_n_f_25173=(_n_f_25173*2.0)));
}}
return (_n_s_25170/_n_n_25171);

}
}

double _n_clamp_25110(double _a0){double _n_v_25175=_a0;
return (d::truth((_n_v_25175<0.0))?0.0:(d::truth((_n_v_25175>1.0))?1.0:_n_v_25175));}

double _n_smooth_25111(double _a0,double _a1,double _a2){double _n_a_25176=_a0;
double _n_b_25177=_a1;
double _n_v_25178=_a2;
{
double _n_k_25179=_n_clamp_25110(((_n_v_25178-_n_a_25176)/(_n_b_25177-_n_a_25176)));
return ((_n_k_25179*_n_k_25179)*(3.0-(2.0*_n_k_25179)));

}
}

double _n_mix_25112(double _a0,double _a1,double _a2){double _n_a_25180=_a0;
double _n_b_25181=_a1;
double _n_k_25182=_a2;
return (_n_a_25180+((_n_b_25181-_n_a_25180)*_n_k_25182));}

d::Array<double,false> _n_hex_25113(d::String _a0){d::String _n_s_25183=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_25184=_a0;
return (([&](){auto _n_argument_25366=d::slice(_n_s_25183,_n_i_25184,(_n_i_25184+2.0));auto _n_argument_25367=16.0;return d::parseInt(_n_argument_25366,_n_argument_25367);})()/255.0);});}

double _n_cloudDist_25114(double _a0,double _a1){double _n_x_25185=_a0;
double _n_y_25186=_a1;
{
auto _n_circ_25187=[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_cx_25188=_a0;
double _n_cy_25189=_a1;
double _n_r_25190=_a2;
return (d::hypot(std::initializer_list<double>{(_n_x_25185-_n_cx_25188),(_n_y_25186-_n_cy_25189)})-_n_r_25190);};
double _n_bx_25191=d::maximum({(62.0-_n_x_25185),(_n_x_25185-128.0),0.0});
double _n_by_25192=d::maximum({(32.0-_n_y_25186),0.0});
double _n_d_25193=([&](){auto _n_argument_25368=_n_circ_25187(84.0,25.0,17.0);auto _n_argument_25369=_n_circ_25187(114.0,30.0,11.0);auto _n_argument_25370=_n_circ_25187(64.0,35.0,7.0);auto _n_argument_25371=_n_circ_25187(126.0,36.0,6.0);auto _n_argument_25372=(d::hypot(std::initializer_list<double>{_n_bx_25191,_n_by_25192})-0.01);return d::minimum({_n_argument_25368,_n_argument_25369,_n_argument_25370,_n_argument_25371,_n_argument_25372});})();
(void)((_n_d_25193=(_n_d_25193+([&](){auto _n_left_25373=((_n_fbm_25109((_n_x_25185*0.13),(_n_y_25186*0.13),3.0)-0.5)*3.2);auto _n_right_25374=_n_smooth_25111(_n_CLOUD_BASE_25094,(_n_CLOUD_BASE_25094-6.0),_n_y_25186);return (_n_left_25373*_n_right_25374);})())));
return d::maximum({_n_d_25193,(_n_y_25186-_n_CLOUD_BASE_25094)});

}
}

struct Native_prism_city final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_25115{};
double _n_N_25116{};
d::Array<d::String,false> _n_out_25117{};
d::Array<uint8_t,true> _n_lut_25118{};
d::Array<std::shared_ptr<_n_Record_25121>,false> _n_back_25120{};
d::Array<std::shared_ptr<_n_Record_25121>,false> _n_front_25122{};
d::Array<uint8_t,true> _n_mat_25123{};
d::Array<float,true> _n_sR_25124{};
d::Array<float,true> _n_sG_25125{};
d::Array<float,true> _n_sB_25126{};
d::Array<float,true> _n_flo_25127{};
d::Array<float,true> _n_win_25128{};
d::Array<float,true> _n_edge_25129{};
d::Array<std::array<double,3>,false> _n_stars_25130{};
d::Array<std::array<double,3>,false> _n_reds_25131{};
double _n_SHAFT_25132{};
double _n_SIDE_25133{};
double _n_PATH_25134{};
d::Array<float,true> _n_ph1_25135{};
d::Array<float,true> _n_ph2_25136{};
d::Array<float,true> _n_fR_25137{};
d::Array<float,true> _n_fG_25138{};
d::Array<float,true> _n_fB_25139{};
d::Array<float,true> _n_fF_25140{};
double _n_w1_25141{};
double _n_w2_25142{};
double _n_TRAIN_25143{};
d::Array<uint8_t,true> _n_lc_25144{};
d::Array<float,true> _n_lRow_25145{};
d::Array<float,true> _n_lA_25146{};
d::Array<float,true> _n_lR_25147{};
d::Array<float,true> _n_lG_25148{};
d::Array<float,true> _n_lB_25149{};
std::function<d::String(double,std::shared_ptr<_n_Record_25360>)> _render;
double _n_nearest_25119(double _a0,double _a1,double _a2){double _n_r_25194=_a0;
double _n_g_25195=_a1;
double _n_b_25196=_a2;
{
double _n_k_25197=([&](){auto _n_left_25590=([&](){auto _n_left_25592=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_25194*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_25593=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_25195*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_25592)|d::i32(_n_right_25593));})();auto _n_right_25591=d::minimum({31.0,double(d::i32((_n_b_25196*31.99))|d::i32(0.0))});return double(d::i32(_n_left_25590)|d::i32(_n_right_25591));})();
if(d::truth((d::at(this->_n_lut_25118,_n_k_25197)!=255.0))){d::check_cancel();return d::at(this->_n_lut_25118,_n_k_25197);
}
double _n_best_25198=0.0;
double _n_bd_25199=1000000000.0;
{double _n_i_25200=0.0;
for(;d::truth((_n_i_25200<double(this->_n_P_25115.size())));(void)((_n_i_25200++))){d::check_cancel();double _n_dr_25201=(d::at(d::at(this->_n_P_25115,_n_i_25200),0.0)-_n_r_25194);
double _n_dg_25202=(d::at(d::at(this->_n_P_25115,_n_i_25200),1.0)-_n_g_25195);
double _n_db_25203=(d::at(d::at(this->_n_P_25115,_n_i_25200),2.0)-_n_b_25196);
double _n_d_25204=((((0.3*_n_dr_25201)*_n_dr_25201)+((0.5*_n_dg_25202)*_n_dg_25202))+((0.2*_n_db_25203)*_n_db_25203));
if(d::truth((_n_d_25204<_n_bd_25199))){d::check_cancel();(void)(((_n_bd_25199=_n_d_25204),(_n_best_25198=_n_i_25200)));
}
}}
return ([&](){auto&& _n_array_25594=this->_n_lut_25118;auto _n_index_25595=_n_k_25197;auto _n_value_25596=_n_best_25198;d::put(_n_array_25594,_n_index_25595,_n_value_25596);return _n_value_25596;})();

}
}

void _n_glow_25150(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,bool _a7){double _n_lx_25257=_a0;
double _n_ly_25258=_a1;
double _n_rad_25259=_a2;
double _n_a_25260=_a3;
double _n_gr_25261=_a4;
double _n_gg_25262=_a5;
double _n_gb_25263=_a6;
bool _n_skipTower_25264=_a7;
{
double _n_n_25265=std::ceil((_n_rad_25259*3.0));
{double _n_r_25266=([&](){auto _n_argument_25597=0.0;auto _n_argument_25598=std::floor((_n_ly_25258-_n_n_25265));return d::maximum({_n_argument_25597,_n_argument_25598});})();
for(;d::truth((_n_r_25266<d::minimum({_n_WL_25088,(_n_ly_25258+_n_n_25265)})));(void)((_n_r_25266++))){d::check_cancel();{double _n_x_25267=([&](){auto _n_argument_25599=0.0;auto _n_argument_25600=std::floor((_n_lx_25257-_n_n_25265));return d::maximum({_n_argument_25599,_n_argument_25600});})();
for(;d::truth((_n_x_25267<d::minimum({_n_W_25083,(_n_lx_25257+_n_n_25265)})));(void)((_n_x_25267++))){d::check_cancel();double _n_k_25268=((_n_r_25266*_n_W_25083)+_n_x_25267);
if((d::truth(_n_skipTower_25264)&&d::truth(([&]()->bool{auto _n_logical_25601=(d::at(this->_n_mat_25123,_n_k_25268)==_n_TOWER_25102);return d::truth(_n_logical_25601)?_n_logical_25601:(d::at(this->_n_mat_25123,_n_k_25268)==_n_SPIRE_25103);})()))){d::check_cancel();continue;
}
double _n_dd_25269=d::hypot(std::initializer_list<double>{((_n_x_25267+0.5)-_n_lx_25257),((_n_r_25266+0.5)-_n_ly_25258)});
double _n_g_25270=(_n_a_25260*std::exp(((-d::number(_n_dd_25269))/_n_rad_25259)));
(void)(((([&](){auto&& _n_array_25602=this->_n_fR_25137;auto _n_index_25603=_n_k_25268;auto _n_value_25604=(d::at(_n_array_25602,_n_index_25603)+(_n_g_25270*_n_gr_25261));d::put(_n_array_25602,_n_index_25603,_n_value_25604);return _n_value_25604;})(),([&](){auto&& _n_array_25605=this->_n_fG_25138;auto _n_index_25606=_n_k_25268;auto _n_value_25607=(d::at(_n_array_25605,_n_index_25606)+(_n_g_25270*_n_gg_25262));d::put(_n_array_25605,_n_index_25606,_n_value_25607);return _n_value_25607;})()),([&](){auto&& _n_array_25608=this->_n_fB_25139;auto _n_index_25609=_n_k_25268;auto _n_value_25610=(d::at(_n_array_25608,_n_index_25609)+(_n_g_25270*_n_gb_25263));d::put(_n_array_25608,_n_index_25609,_n_value_25610);return _n_value_25610;})()));
}}
}}

}
}

explicit Native_prism_city(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_25115=d::map(_n_meta_25081->_p_palette,_n_hex_25113);
this->_n_N_25116=(_n_W_25083*_n_H_25084);
this->_n_out_25117=d::Array<d::String,false>(size_t(this->_n_N_25116));
this->_n_lut_25118=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_back_25120=d::Array<std::shared_ptr<_n_Record_25121>,false>{};
{double _n_x_25205=(-d::number(2.0));
double _n_i_25206=0.0;
for(;d::truth((_n_x_25205<_n_W_25083));(void)((_n_i_25206++))){d::check_cancel();double _n_w_25207=(5.0+std::floor((_n_hash_25107(_n_i_25206,1.0)*7.0)));
double _n_top_25208=([&](){auto _n_left_25375=(55.0+std::floor((_n_hash_25107(_n_i_25206,2.0)*6.0)));auto _n_right_25376=d::round((7.0*std::exp((-d::number(std::pow(((_n_x_25205-100.0)/45.0),2.0))))));return (_n_left_25375-_n_right_25376);})();
(void)(this->_n_back_25120.push(([&](){auto _n_object_25378=std::make_shared<_n_Record_25121>();_n_object_25378->_p_x0=_n_x_25205;_n_object_25378->_p_x1=(_n_x_25205+_n_w_25207);_n_object_25378->_p_top=_n_top_25208;_n_object_25378->_p_kind=(d::truth((_n_hash_25107(_n_i_25206,3.0)<0.5))?2.0:0.0);return _n_object_25378;})()));
(void)((_n_x_25205=(_n_x_25205+_n_w_25207)));
}}
this->_n_front_25122=d::Array<std::shared_ptr<_n_Record_25121>,false>{([&](){auto _n_object_25381=std::make_shared<_n_Record_25121>();_n_object_25381->_p_x0=28.0;_n_object_25381->_p_x1=37.0;_n_object_25381->_p_top=41.0;_n_object_25381->_p_kind=0.0;return _n_object_25381;})(),([&](){auto _n_object_25383=std::make_shared<_n_Record_25121>();_n_object_25383->_p_x0=59.0;_n_object_25383->_p_x1=67.0;_n_object_25383->_p_top=46.0;_n_object_25383->_p_kind=1.0;return _n_object_25383;})(),([&](){auto _n_object_25385=std::make_shared<_n_Record_25121>();_n_object_25385->_p_x0=141.0;_n_object_25385->_p_x1=150.0;_n_object_25385->_p_top=44.0;_n_object_25385->_p_kind=0.0;return _n_object_25385;})(),([&](){auto _n_object_25387=std::make_shared<_n_Record_25121>();_n_object_25387->_p_x0=166.0;_n_object_25387->_p_x1=173.0;_n_object_25387->_p_top=39.0;_n_object_25387->_p_kind=1.0;return _n_object_25387;})()};
{double _n_x_25209=(-d::number(3.0));
double _n_i_25210=0.0;
for(;d::truth((_n_x_25209<_n_W_25083));(void)((_n_i_25210++))){d::check_cancel();double _n_w_25211=(6.0+std::floor((_n_hash_25107(_n_i_25210,11.0)*9.0)));
double _n_top_25212=(52.0+std::floor((_n_hash_25107(_n_i_25210,12.0)*10.0)));
if((d::truth(((_n_x_25209+_n_w_25211)>86.0))&&d::truth((_n_x_25209<115.0)))){d::check_cancel();(void)((_n_top_25212=d::maximum({_n_top_25212,58.0})));
}
(void)(this->_n_front_25122.push(([&](){auto _n_object_25389=std::make_shared<_n_Record_25121>();_n_object_25389->_p_x0=_n_x_25209;_n_object_25389->_p_x1=(_n_x_25209+_n_w_25211);_n_object_25389->_p_top=_n_top_25212;_n_object_25389->_p_kind=std::floor((_n_hash_25107(_n_i_25210,13.0)*3.0));return _n_object_25389;})()));
(void)((_n_x_25209=(_n_x_25209+(_n_w_25211+std::floor((_n_hash_25107(_n_i_25210,14.0)*2.0))))));
}}
this->_n_mat_25123=d::Array<uint8_t,true>(size_t(this->_n_N_25116));
this->_n_sR_25124=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_sG_25125=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_sB_25126=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_flo_25127=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_win_25128=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_edge_25129=d::Array<float,true>(size_t(this->_n_N_25116)).fill((-d::number(1.0)));
this->_n_stars_25130=d::Array<std::array<double,3>,false>{};
this->_n_reds_25131=d::Array<std::array<double,3>,false>{};
this->_n_SHAFT_25132=(_n_BANK_25087-_n_SHOULDER_25092);
this->_n_SIDE_25133=(2.0*_n_HALF_25091);
this->_n_PATH_25134=(this->_n_SHAFT_25132+this->_n_SIDE_25133);
{double _n_r_25213=0.0;
for(;d::truth((_n_r_25213<_n_WL_25088));(void)((_n_r_25213++))){d::check_cancel();{double _n_x_25214=0.0;
for(;d::truth((_n_x_25214<_n_W_25083));(void)((_n_x_25214++))){d::check_cancel();double _n_k_25215=((_n_r_25213*_n_W_25083)+_n_x_25214);
double _n_xc_25216=(_n_x_25214+0.5);
double _n_y_25217=(_n_r_25213+0.5);
double _n_v_25218=(_n_y_25217/_n_BANK_25087);
double _n_veil_25219=(0.9+(0.2*_n_fbm_25109((_n_x_25214*0.04),(_n_y_25217*0.07),3.0)));
double _n_low_25220=(std::exp(((-d::number((_n_BANK_25087-_n_y_25217)))/7.0))*0.2);
double _n_cr_25221=(((0.025+((0.2*_n_v_25218)*_n_v_25218))*_n_veil_25219)+(_n_low_25220*0.75));
double _n_cg_25222=(((0.045+((0.29*_n_v_25218)*_n_v_25218))*_n_veil_25219)+(_n_low_25220*0.55));
double _n_cb_25223=(((0.12+(0.48*std::pow(_n_v_25218,1.5)))*_n_veil_25219)+(_n_low_25220*0.5));
double _n_m_25224=_n_SKY_25098;
double _n_fl_25225=0.15;
double _n_d_25226=_n_cloudDist_25114(_n_xc_25216,_n_y_25217);
if(d::truth((_n_d_25226<1.2))){d::check_cancel();double _n_c_25227=_n_smooth_25111(1.2,(-d::number(1.2)),_n_d_25226);
double _n_lb_25228=([&](){auto _n_argument_25390=_n_smooth_25111(6.0,_n_CLOUD_BASE_25094,_n_y_25217);auto _n_argument_25391=1.6;return std::pow(_n_argument_25390,_n_argument_25391);})();
double _n_hb_25229=std::exp((-d::number(std::pow(((_n_xc_25216-98.0)/40.0),2.0))));
double _n_puff_25230=([&](){auto _n_left_25392=_n_fbm_25109((_n_x_25214*0.09),(_n_y_25217*0.12),4.0);auto _n_right_25393=_n_fbm_25109((_n_x_25214*0.09),((_n_y_25217+2.5)*0.12),4.0);return (_n_left_25392-_n_right_25393);})();
double _n_belly_25231=(_n_smooth_25111((_n_CLOUD_BASE_25094-7.0),(_n_CLOUD_BASE_25094-1.0),_n_y_25217)*0.25);
double _n_b_25232=_n_clamp_25110((((0.1+((0.8*_n_lb_25228)*(0.55+(0.45*_n_hb_25229))))+(1.0*_n_puff_25230))+_n_belly_25231));
double _n_kr_25233{};
double _n_kg_25234{};
double _n_kb_25235{};
if(d::truth((_n_b_25232<0.35))){d::check_cancel();(void)((((_n_kr_25233=_n_mix_25112(0.28,0.6,(_n_b_25232/0.35))),(_n_kg_25234=_n_mix_25112(0.14,0.27,(_n_b_25232/0.35)))),(_n_kb_25235=_n_mix_25112(0.16,0.12,(_n_b_25232/0.35)))));
}else {d::check_cancel();if(d::truth((_n_b_25232<0.72))){d::check_cancel();(void)((((_n_kr_25233=_n_mix_25112(0.6,0.95,((_n_b_25232-0.35)/0.37))),(_n_kg_25234=_n_mix_25112(0.27,0.5,((_n_b_25232-0.35)/0.37)))),(_n_kb_25235=_n_mix_25112(0.12,0.12,((_n_b_25232-0.35)/0.37)))));
}else {d::check_cancel();(void)((((_n_kr_25233=_n_mix_25112(0.95,1.0,((_n_b_25232-0.72)/0.28))),(_n_kg_25234=_n_mix_25112(0.5,0.85,((_n_b_25232-0.72)/0.28)))),(_n_kb_25235=_n_mix_25112(0.12,0.6,((_n_b_25232-0.72)/0.28)))));
}
}
double _n_s_25236=(0.35+(0.65*_n_b_25232));
(void)((((_n_cr_25221=_n_mix_25112(_n_cr_25221,(_n_kr_25233*_n_s_25236),_n_c_25227)),(_n_cg_25222=_n_mix_25112(_n_cg_25222,(_n_kg_25234*_n_s_25236),_n_c_25227))),(_n_cb_25223=_n_mix_25112(_n_cb_25223,(_n_kb_25235*_n_s_25236),_n_c_25227))));
if(d::truth((_n_c_25227>0.5))){d::check_cancel();(void)((_n_m_25224=_n_CLOUD_25099));
}
}
if(d::truth((_n_m_25224==_n_SKY_25098))){d::check_cancel();double _n_halo_25237=([&](){auto _n_left_25394=([&](){auto _n_left_25396=std::exp(((-d::number(d::maximum({0.0,_n_d_25226})))/4.5));auto _n_right_25397=(0.08+(0.22*_n_smooth_25111(20.0,(_n_CLOUD_BASE_25094+4.0),_n_y_25217)));return (_n_left_25396*_n_right_25397);})();auto _n_right_25395=std::exp((-d::number(std::pow(((_n_xc_25216-96.0)/50.0),2.0))));return (_n_left_25394*_n_right_25395);})();
(void)((((_n_cr_25221=(_n_cr_25221+_n_halo_25237)),(_n_cg_25222=(_n_cg_25222+(_n_halo_25237*0.45)))),(_n_cb_25223=(_n_cb_25223+(_n_halo_25237*0.12)))));
if(((d::truth((_n_y_25217<26.0))&&d::truth((_n_d_25226>3.0)))&&d::truth((_n_hash_25107(_n_x_25214,((_n_r_25213*3.0)+11.0))>0.99)))){d::check_cancel();(void)(this->_n_stars_25130.push(std::array<double,3>{_n_k_25215,(1.0+std::floor((_n_hash_25107(_n_x_25214,_n_r_25213)*3.0))),(_n_hash_25107(_n_r_25213,_n_x_25214)*_n_TAU_25086)}));
}
}
for(auto &&_n_item_25398:this->_n_back_25120){d::check_cancel();std::shared_ptr<_n_Record_25121> _n_b_25238=_n_item_25398;
{
if((((d::truth((_n_xc_25216<_n_b_25238->_p_x0))||d::truth((_n_xc_25216>=_n_b_25238->_p_x1)))||d::truth((_n_y_25217<_n_b_25238->_p_top)))||d::truth((_n_y_25217>=_n_BANK_25087)))){d::check_cancel();continue;
}
(void)((_n_m_25224=_n_BACK_25100));
double _n_lx_25239=(_n_x_25214-std::floor(_n_b_25238->_p_x0));
double _n_ry_25240=(_n_r_25213-_n_b_25238->_p_top);
(void)((((_n_cr_25221=0.06),(_n_cg_25222=0.085)),(_n_cb_25223=0.16)));
if(d::truth((_n_ry_25240==0.0))){d::check_cancel();(void)((((_n_cr_25221=(_n_cr_25221+0.04)),(_n_cg_25222=(_n_cg_25222+0.05))),(_n_cb_25223=(_n_cb_25223+0.08))));
}
if(d::truth((_n_lx_25239==0.0))){d::check_cancel();(void)((((_n_cr_25221=(_n_cr_25221-0.02)),(_n_cg_25222=(_n_cg_25222-0.025))),(_n_cb_25223=(_n_cb_25223-0.04))));
}
double _n_hz_25241=(_n_smooth_25111((_n_BANK_25087-14.0),_n_BANK_25087,_n_y_25217)*0.04);
(void)((((_n_cr_25221=(_n_cr_25221+_n_hz_25241)),(_n_cg_25222=(_n_cg_25222+(_n_hz_25241*1.1)))),(_n_cb_25223=(_n_cb_25223+(_n_hz_25241*1.4)))));
(void)((_n_fl_25225=0.05));
if(((((d::truth((_n_ry_25240>=2.0))&&d::truth((d::mod(_n_ry_25240,2.0)==0.0)))&&d::truth((d::mod(_n_lx_25239,2.0)==1.0)))&&d::truth((_n_xc_25216<(_n_b_25238->_p_x1-1.0))))&&d::truth((_n_hash_25107(_n_k_25215,4.0)<(d::truth((_n_b_25238->_p_kind==2.0))?0.18:0.3))))){d::check_cancel();(void)(([&](){auto&& _n_array_25399=this->_n_win_25128;auto _n_index_25400=_n_k_25215;auto _n_value_25401=([&](){auto _n_left_25402=(d::truth((_n_hash_25107(_n_k_25215,5.0)<0.3))?(-d::number(1.0)):1.0);auto _n_right_25403=(0.35+(0.2*_n_hash_25107(_n_k_25215,6.0)));return (_n_left_25402*_n_right_25403);})();d::put(_n_array_25399,_n_index_25400,_n_value_25401);return _n_value_25401;})());
}

}
}
{double _n_bi_25242=0.0;
for(;d::truth((_n_bi_25242<double(this->_n_front_25122.size())));(void)((_n_bi_25242++))){d::check_cancel();std::shared_ptr<_n_Record_25121> _n_b_25243=d::at(this->_n_front_25122,_n_bi_25242);
if((((d::truth((_n_xc_25216<_n_b_25243->_p_x0))||d::truth((_n_xc_25216>=_n_b_25243->_p_x1)))||d::truth((_n_y_25217<_n_b_25243->_p_top)))||d::truth((_n_y_25217>=_n_BANK_25087)))){d::check_cancel();continue;
}
(void)((_n_m_25224=_n_FRONT_25101));
double _n_lx_25244=(_n_x_25214-std::floor(_n_b_25243->_p_x0));
double _n_ry_25245=(_n_r_25213-_n_b_25243->_p_top);
double _n_bw_25246=(_n_b_25243->_p_x1-_n_b_25243->_p_x0);
double _n_tone_25247=(0.85+(0.3*_n_hash_25107(_n_bi_25242,31.0)));
(void)((((_n_cr_25221=(0.025*_n_tone_25247)),(_n_cg_25222=(0.033*_n_tone_25247))),(_n_cb_25223=(0.065*_n_tone_25247))));
if(d::truth((_n_ry_25245==0.0))){d::check_cancel();(void)((((_n_cr_25221=(_n_cr_25221+0.07)),(_n_cg_25222=(_n_cg_25222+0.09))),(_n_cb_25223=(_n_cb_25223+0.14))));
}
if(d::truth((_n_lx_25244==(_n_bw_25246-1.0)))){d::check_cancel();(void)((((_n_cr_25221=(_n_cr_25221+0.03)),(_n_cg_25222=(_n_cg_25222+0.04))),(_n_cb_25223=(_n_cb_25223+0.07))));
}
(void)((_n_fl_25225=0.02));
(void)(([&](){auto&& _n_array_25404=this->_n_win_25128;auto _n_index_25405=_n_k_25215;auto _n_value_25406=0.0;d::put(_n_array_25404,_n_index_25405,_n_value_25406);return _n_value_25406;})());
if(((d::truth((_n_ry_25245>=2.0))&&d::truth((_n_lx_25244>=1.0)))&&d::truth((_n_lx_25244<(_n_bw_25246-1.0))))){d::check_cancel();double _n_lit_25248=0.0;
if(d::truth((_n_b_25243->_p_kind==0.0))){d::check_cancel();(void)((_n_lit_25248=(((d::truth((d::mod(_n_ry_25245,2.0)==0.0))&&d::truth((d::mod(_n_lx_25244,2.0)==1.0)))&&d::truth((_n_hash_25107(_n_k_25215,7.0)<0.4)))?1.0:0.0)));
}else {d::check_cancel();if(d::truth((_n_b_25243->_p_kind==1.0))){d::check_cancel();(void)((_n_lit_25248=(((d::truth((d::mod(_n_ry_25245,3.0)==0.0))&&d::truth((_n_hash_25107(((_n_bi_25242*64.0)+_n_ry_25245),8.0)<0.4)))&&d::truth((_n_hash_25107(_n_k_25215,8.0)<0.75)))?1.0:0.0)));
}else {d::check_cancel();(void)((_n_lit_25248=(((d::truth((d::mod(_n_ry_25245,2.0)==0.0))&&d::truth((d::mod(_n_lx_25244,3.0)==1.0)))&&d::truth((_n_hash_25107(_n_k_25215,9.0)<0.3)))?1.0:0.0)));
}
}
if(d::truth(_n_lit_25248)){d::check_cancel();(void)(([&](){auto&& _n_array_25407=this->_n_win_25128;auto _n_index_25408=_n_k_25215;auto _n_value_25409=([&](){auto _n_left_25410=(d::truth((_n_hash_25107(_n_bi_25242,10.0)<0.35))?(-d::number(1.0)):1.0);auto _n_right_25411=(0.6+(0.35*_n_hash_25107(_n_k_25215,11.0)));return (_n_left_25410*_n_right_25411);})();d::put(_n_array_25407,_n_index_25408,_n_value_25409);return _n_value_25409;})());
}
}
if(((d::truth((_n_b_25243->_p_top<50.0))&&d::truth((_n_ry_25245==0.0)))&&d::truth((_n_lx_25244==std::floor((_n_bw_25246/2.0)))))){d::check_cancel();(void)(this->_n_reds_25131.push(std::array<double,3>{_n_x_25214,(_n_r_25213-1.0),(_n_hash_25107(_n_bi_25242,12.0)*2.0)}));
}
}}
double _n_dx_25249=std::fabs((_n_xc_25216-_n_TX_25089));
if(((d::truth((_n_y_25217>=_n_SHOULDER_25092))&&d::truth((_n_y_25217<_n_BANK_25087)))&&d::truth((_n_dx_25249<=_n_SHAFT_HALF_25090)))){d::check_cancel();(void)((_n_m_25224=_n_TOWER_25102));
(void)(([&](){auto&& _n_array_25412=this->_n_win_25128;auto _n_index_25413=_n_k_25215;auto _n_value_25414=0.0;d::put(_n_array_25412,_n_index_25413,_n_value_25414);return _n_value_25414;})());
(void)((((_n_cr_25221=0.01),(_n_cg_25222=0.012)),(_n_cb_25223=0.022)));
if(d::truth(((_n_xc_25216-_n_TX_25089)>(_n_SHAFT_HALF_25090-1.0)))){d::check_cancel();(void)((((_n_cr_25221=(_n_cr_25221+0.05)),(_n_cg_25222=(_n_cg_25222+0.07))),(_n_cb_25223=(_n_cb_25223+0.11))));
}
if(d::truth((d::mod(_n_r_25213,4.0)==0.0))){d::check_cancel();(void)((((_n_cr_25221=(_n_cr_25221+0.008)),(_n_cg_25222=(_n_cg_25222+0.01))),(_n_cb_25223=(_n_cb_25223+0.016))));
}
(void)((_n_fl_25225=0.0));
if(d::truth((_n_dx_25249>(_n_SHAFT_HALF_25090-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_25415=this->_n_edge_25129;auto _n_index_25416=_n_k_25215;auto _n_value_25417=((_n_BANK_25087-_n_y_25217)/this->_n_PATH_25134);d::put(_n_array_25415,_n_index_25416,_n_value_25417);return _n_value_25417;})());
}
}
if((d::truth((_n_y_25217>=_n_APEX_25093))&&d::truth((_n_y_25217<_n_SHOULDER_25092)))){d::check_cancel();double _n_hw_25250=(((_n_y_25217-_n_APEX_25093)/(_n_SHOULDER_25092-_n_APEX_25093))*_n_HALF_25091);
if(d::truth((_n_dx_25249<=(_n_hw_25250+0.25)))){d::check_cancel();(void)((_n_m_25224=_n_SPIRE_25103));
(void)(([&](){auto&& _n_array_25418=this->_n_win_25128;auto _n_index_25419=_n_k_25215;auto _n_value_25420=0.0;d::put(_n_array_25418,_n_index_25419,_n_value_25420);return _n_value_25420;})());
(void)((((_n_cr_25221=0.012),(_n_cg_25222=0.012)),(_n_cb_25223=0.02)));
(void)((_n_fl_25225=0.0));
if(d::truth((_n_dx_25249>(_n_hw_25250-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_25421=this->_n_edge_25129;auto _n_index_25422=_n_k_25215;auto _n_value_25423=((this->_n_SHAFT_25132+(((_n_SHOULDER_25092-_n_y_25217)/(_n_SHOULDER_25092-_n_APEX_25093))*this->_n_SIDE_25133))/this->_n_PATH_25134);d::put(_n_array_25421,_n_index_25422,_n_value_25423);return _n_value_25423;})());
(void)((((_n_cr_25221=(_n_cr_25221+0.05)),(_n_cg_25222=(_n_cg_25222+0.05))),(_n_cb_25223=(_n_cb_25223+0.065))));
}
}
}
if(d::truth((_n_y_25217>=_n_BANK_25087))){d::check_cancel();double _n_ax_25251=d::mod(_n_x_25214,16.0);
double _n_crown_25252=((_n_BANK_25087+2.2)+(2.6*std::pow(((_n_ax_25251-8.5)/6.5),2.0)));
if(((d::truth((_n_y_25217<(_n_BANK_25087+2.0)))||d::truth((_n_ax_25251<2.0)))||d::truth((_n_y_25217<_n_crown_25252)))){d::check_cancel();(void)((_n_m_25224=_n_DECK_25104));
double _n_s_25253=(d::truth((_n_r_25213==_n_BANK_25087))?0.1:(0.03+(0.015*_n_fbm_25109((_n_x_25214*0.4),(_n_y_25217*0.4),2.0))));
(void)((((_n_cr_25221=(_n_s_25253*0.9)),(_n_cg_25222=_n_s_25253)),(_n_cb_25223=(_n_s_25253*1.5))));
(void)((_n_fl_25225=0.02));
if((d::truth((_n_ax_25251==0.0))&&d::truth((_n_r_25213==(_n_BANK_25087+2.0))))){d::check_cancel();(void)(((((_n_cr_25221=0.95),(_n_cg_25222=0.72)),(_n_cb_25223=0.4)),(_n_fl_25225=0.3)));
}
}else {d::check_cancel();(void)((_n_m_25224=_n_ARCH_25105));
(void)((((_n_cr_25221=0.012),(_n_cg_25222=0.016)),(_n_cb_25223=0.03)));
(void)((_n_fl_25225=0.02));
}
}
(void)(([&](){auto&& _n_array_25424=this->_n_mat_25123;auto _n_index_25425=_n_k_25215;auto _n_value_25426=_n_m_25224;d::put(_n_array_25424,_n_index_25425,_n_value_25426);return _n_value_25426;})());
(void)((((([&](){auto&& _n_array_25427=this->_n_sR_25124;auto _n_index_25428=_n_k_25215;auto _n_value_25429=_n_cr_25221;d::put(_n_array_25427,_n_index_25428,_n_value_25429);return _n_value_25429;})(),([&](){auto&& _n_array_25430=this->_n_sG_25125;auto _n_index_25431=_n_k_25215;auto _n_value_25432=_n_cg_25222;d::put(_n_array_25430,_n_index_25431,_n_value_25432);return _n_value_25432;})()),([&](){auto&& _n_array_25433=this->_n_sB_25126;auto _n_index_25434=_n_k_25215;auto _n_value_25435=_n_cb_25223;d::put(_n_array_25433,_n_index_25434,_n_value_25435);return _n_value_25435;})()),([&](){auto&& _n_array_25436=this->_n_flo_25127;auto _n_index_25437=_n_k_25215;auto _n_value_25438=_n_fl_25225;d::put(_n_array_25436,_n_index_25437,_n_value_25438);return _n_value_25438;})()));
}}
}}
this->_n_ph1_25135=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_ph2_25136=d::Array<float,true>(size_t(this->_n_N_25116));
{double _n_r_25254=_n_WL_25088;
for(;d::truth((_n_r_25254<_n_H_25084));(void)((_n_r_25254++))){d::check_cancel();{double _n_x_25255=0.0;
for(;d::truth((_n_x_25255<_n_W_25083));(void)((_n_x_25255++))){d::check_cancel();double _n_k_25256=((_n_r_25254*_n_W_25083)+_n_x_25255);
(void)(([&](){auto&& _n_array_25439=this->_n_mat_25123;auto _n_index_25440=_n_k_25256;auto _n_value_25441=_n_WATER_25106;d::put(_n_array_25439,_n_index_25440,_n_value_25441);return _n_value_25441;})());
(void)(([&](){auto&& _n_array_25442=this->_n_ph1_25135;auto _n_index_25443=_n_k_25256;auto _n_value_25444=(_n_fbm_25109((_n_x_25255*0.05),(_n_r_25254*0.4),3.0)*9.0);d::put(_n_array_25442,_n_index_25443,_n_value_25444);return _n_value_25444;})());
(void)(([&](){auto&& _n_array_25445=this->_n_ph2_25136;auto _n_index_25446=_n_k_25256;auto _n_value_25447=(_n_fbm_25109(((_n_x_25255*0.03)+40.0),(_n_r_25254*0.25),3.0)*7.0);d::put(_n_array_25445,_n_index_25446,_n_value_25447);return _n_value_25447;})());
}}
}}
this->_n_fR_25137=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_fG_25138=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_fB_25139=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_fF_25140=d::Array<float,true>(size_t(this->_n_N_25116));
this->_n_w1_25141=((_n_TAU_25086*3.0)/_n_LOOP_25085);
this->_n_w2_25142=((_n_TAU_25086*2.0)/_n_LOOP_25085);
this->_n_TRAIN_25143=((4.0*13.0)-1.0);
this->_n_lc_25144=d::Array<uint8_t,true>(size_t(_n_W_25083));
this->_n_lRow_25145=d::Array<float,true>(size_t((_n_W_25083*8.0)));
this->_n_lA_25146=d::Array<float,true>(size_t((_n_W_25083*8.0)));
this->_n_lR_25147=d::Array<float,true>(size_t((_n_W_25083*8.0)));
this->_n_lG_25148=d::Array<float,true>(size_t((_n_W_25083*8.0)));
this->_n_lB_25149=d::Array<float,true>(size_t((_n_W_25083*8.0)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_25360> _a1) mutable ->d::String{double _n_t_25271=_a0;
auto _n_binding_25450=(d::present(_a1)?_a1:([&](){auto _n_object_25449=std::make_shared<_n_Record_25360>();return _n_object_25449;})());
std::optional<d::Array<uint8_t,true>> _n_color_25272=_n_binding_25450->_p_color;
{
double _n_tl_25273=d::mod((d::mod(_n_t_25271,_n_LOOP_25085)+_n_LOOP_25085),_n_LOOP_25085);
double _n_run_25274=(d::mod(_n_tl_25273,4.0)/1.6);
double _n_flare_25275=std::exp((-d::number(std::pow(((d::mod(_n_tl_25273,4.0)-1.75)/0.35),2.0))));
double _n_blink_25276=(d::truth((d::mod(_n_tl_25273,1.5)<0.3))?1.0:0.15);
double _n_head_25277=(d::mod((((_n_tl_25273/_n_LOOP_25085)*300.0)+130.0),300.0)-10.0);
(void)(this->_n_fF_25140.set(this->_n_flo_25127));
{double _n_r_25278=0.0;
for(;d::truth((_n_r_25278<_n_WL_25088));(void)((_n_r_25278++))){d::check_cancel();{double _n_x_25279=0.0;
for(;d::truth((_n_x_25279<_n_W_25083));(void)((_n_x_25279++))){d::check_cancel();double _n_k_25280=((_n_r_25278*_n_W_25083)+_n_x_25279);
double _n_cr_25281=d::at(this->_n_sR_25124,_n_k_25280);
double _n_cg_25282=d::at(this->_n_sG_25125,_n_k_25280);
double _n_cb_25283=d::at(this->_n_sB_25126,_n_k_25280);
double _n_wv_25284=d::at(this->_n_win_25128,_n_k_25280);
if(d::truth((_n_wv_25284!=0.0))){d::check_cancel();double _n_ph_25285=(_n_hash_25107(_n_k_25280,21.0)*_n_LOOP_25085);
bool _n_on_25286=(d::truth((_n_hash_25107(_n_k_25280,22.0)<0.7))?true:(([&](){auto _n_argument_25451=_n_k_25280;auto _n_argument_25452=(23.0+d::mod(std::floor(((_n_tl_25273+_n_ph_25285)/3.0)),4.0));return _n_hash_25107(_n_argument_25451,_n_argument_25452);})()<0.55));
if(d::truth(_n_on_25286)){d::check_cancel();double _n_s_25287=std::fabs(_n_wv_25284);
if(d::truth((_n_wv_25284>0.0))){d::check_cancel();(void)((((_n_cr_25281=(_n_cr_25281+_n_s_25287)),(_n_cg_25282=(_n_cg_25282+(_n_s_25287*0.78)))),(_n_cb_25283=(_n_cb_25283+(_n_s_25287*0.42)))));
}else {d::check_cancel();(void)((((_n_cr_25281=(_n_cr_25281+(_n_s_25287*0.82))),(_n_cg_25282=(_n_cg_25282+(_n_s_25287*0.88)))),(_n_cb_25283=(_n_cb_25283+_n_s_25287))));
}
}
}
double _n_e_25288=d::at(this->_n_edge_25129,_n_k_25280);
if((d::truth((_n_e_25288>=0.0))&&d::truth((_n_run_25274<1.5)))){d::check_cancel();double _n_hold_25289=(d::truth((_n_run_25274<=1.0))?1.0:_n_smooth_25111(1.5,1.0,_n_run_25274));
double _n_g_25290=((d::truth((_n_e_25288<=_n_run_25274))?(0.3+(0.7*std::exp(((-d::number((_n_run_25274-_n_e_25288)))*10.0)))):std::exp((-d::number(std::pow(((_n_e_25288-_n_run_25274)*40.0),2.0)))))*_n_hold_25289);
(void)((((_n_cr_25281=(_n_cr_25281+_n_g_25290)),(_n_cg_25282=(_n_cg_25282+_n_g_25290))),(_n_cb_25283=(_n_cb_25283+_n_g_25290))));
}
(void)(((([&](){auto&& _n_array_25453=this->_n_fR_25137;auto _n_index_25454=_n_k_25280;auto _n_value_25455=_n_cr_25281;d::put(_n_array_25453,_n_index_25454,_n_value_25455);return _n_value_25455;})(),([&](){auto&& _n_array_25456=this->_n_fG_25138;auto _n_index_25457=_n_k_25280;auto _n_value_25458=_n_cg_25282;d::put(_n_array_25456,_n_index_25457,_n_value_25458);return _n_value_25458;})()),([&](){auto&& _n_array_25459=this->_n_fB_25139;auto _n_index_25460=_n_k_25280;auto _n_value_25461=_n_cb_25283;d::put(_n_array_25459,_n_index_25460,_n_value_25461);return _n_value_25461;})()));
}}
}}
for(auto &&_n_item_25462:this->_n_stars_25130){d::check_cancel();auto _n_binding_25463=_n_item_25462;
double _n_k_25291=d::at(_n_binding_25463,0.0);
double _n_rate_25292=d::at(_n_binding_25463,1.0);
double _n_ph_25293=d::at(_n_binding_25463,2.0);
{
double _n_s_25294=(0.35+(0.3*std::sin((((((_n_TAU_25086*_n_rate_25292)*_n_tl_25273)/_n_LOOP_25085)*3.0)+_n_ph_25293))));
(void)(((([&](){auto&& _n_array_25464=this->_n_fR_25137;auto _n_index_25465=_n_k_25291;auto _n_value_25466=d::maximum({d::at(this->_n_fR_25137,_n_k_25291),(_n_s_25294*0.9)});d::put(_n_array_25464,_n_index_25465,_n_value_25466);return _n_value_25466;})(),([&](){auto&& _n_array_25467=this->_n_fG_25138;auto _n_index_25468=_n_k_25291;auto _n_value_25469=d::maximum({d::at(this->_n_fG_25138,_n_k_25291),(_n_s_25294*0.93)});d::put(_n_array_25467,_n_index_25468,_n_value_25469);return _n_value_25469;})()),([&](){auto&& _n_array_25470=this->_n_fB_25139;auto _n_index_25471=_n_k_25291;auto _n_value_25472=d::maximum({d::at(this->_n_fB_25139,_n_k_25291),_n_s_25294});d::put(_n_array_25470,_n_index_25471,_n_value_25472);return _n_value_25472;})()));

}
}
for(auto &&_n_item_25473:this->_n_reds_25131){d::check_cancel();auto _n_binding_25474=_n_item_25473;
double _n_x_25295=d::at(_n_binding_25474,0.0);
double _n_r_25296=d::at(_n_binding_25474,1.0);
double _n_ph_25297=d::at(_n_binding_25474,2.0);
{
double _n_on_25298=(d::truth((d::mod((_n_tl_25273+_n_ph_25297),2.0)<0.45))?1.0:0.0);
if(d::truth((!d::truth(_n_on_25298)))){d::check_cancel();continue;
}
double _n_k_25299=((_n_r_25296*_n_W_25083)+_n_x_25295);
(void)(((([&](){auto&& _n_array_25475=this->_n_fR_25137;auto _n_index_25476=_n_k_25299;auto _n_value_25477=1.0;d::put(_n_array_25475,_n_index_25476,_n_value_25477);return _n_value_25477;})(),([&](){auto&& _n_array_25478=this->_n_fG_25138;auto _n_index_25479=_n_k_25299;auto _n_value_25480=0.3;d::put(_n_array_25478,_n_index_25479,_n_value_25480);return _n_value_25480;})()),([&](){auto&& _n_array_25481=this->_n_fB_25139;auto _n_index_25482=_n_k_25299;auto _n_value_25483=0.25;d::put(_n_array_25481,_n_index_25482,_n_value_25483);return _n_value_25483;})()));
(void)(this->_n_glow_25150((_n_x_25295+0.5),(_n_r_25296+0.5),1.2,0.35,1.0,0.25,0.2,false));

}
}
{double _n_x_25300=([&](){auto _n_argument_25484=0.0;auto _n_argument_25485=std::floor((_n_head_25277-this->_n_TRAIN_25143));return d::maximum({_n_argument_25484,_n_argument_25485});})();
for(;d::truth((_n_x_25300<d::minimum({_n_W_25083,(_n_head_25277+1.0)})));(void)((_n_x_25300++))){d::check_cancel();double _n_u_25301=std::floor((_n_head_25277-_n_x_25300));
if(((d::truth((_n_u_25301<0.0))||d::truth((_n_u_25301>=this->_n_TRAIN_25143)))||d::truth((d::mod(_n_u_25301,13.0)==12.0)))){d::check_cancel();continue;
}
double _n_c_25302=d::mod(_n_u_25301,13.0);
{double _n_r_25303=(_n_BANK_25087-4.0);
for(;d::truth((_n_r_25303<_n_BANK_25087));(void)((_n_r_25303++))){d::check_cancel();double _n_k_25304=((_n_r_25303*_n_W_25083)+_n_x_25300);
double _n_cr_25305=0.12;
double _n_cg_25306=0.14;
double _n_cb_25307=0.2;
double _n_row_25308=(_n_r_25303-(_n_BANK_25087-4.0));
if(d::truth((_n_row_25308==0.0))){d::check_cancel();(void)((((_n_cr_25305=0.2),(_n_cg_25306=0.23)),(_n_cb_25307=0.3)));
}else {d::check_cancel();if(d::truth((_n_row_25308==3.0))){d::check_cancel();(void)((((_n_cr_25305=0.04),(_n_cg_25306=0.05)),(_n_cb_25307=0.08)));
}else {d::check_cancel();if(((d::truth((_n_c_25302>0.0))&&d::truth((_n_c_25302<11.0)))&&d::truth((d::mod(_n_c_25302,3.0)!=0.0)))){d::check_cancel();(void)((((_n_cr_25305=0.8),(_n_cg_25306=0.68)),(_n_cb_25307=0.45)));
}
}
}
if((d::truth((_n_u_25301==0.0))&&d::truth((_n_row_25308==2.0)))){d::check_cancel();(void)((((_n_cr_25305=1.0),(_n_cg_25306=1.0)),(_n_cb_25307=1.0)));
}
(void)(((([&](){auto&& _n_array_25486=this->_n_fR_25137;auto _n_index_25487=_n_k_25304;auto _n_value_25488=_n_cr_25305;d::put(_n_array_25486,_n_index_25487,_n_value_25488);return _n_value_25488;})(),([&](){auto&& _n_array_25489=this->_n_fG_25138;auto _n_index_25490=_n_k_25304;auto _n_value_25491=_n_cg_25306;d::put(_n_array_25489,_n_index_25490,_n_value_25491);return _n_value_25491;})()),([&](){auto&& _n_array_25492=this->_n_fB_25139;auto _n_index_25493=_n_k_25304;auto _n_value_25494=_n_cb_25307;d::put(_n_array_25492,_n_index_25493,_n_value_25494);return _n_value_25494;})()));
(void)(([&](){auto&& _n_array_25495=this->_n_fF_25140;auto _n_index_25496=_n_k_25304;auto _n_value_25497=0.1;d::put(_n_array_25495,_n_index_25496,_n_value_25497);return _n_value_25497;})());
}}
}}
if((d::truth((_n_head_25277>=0.0))&&d::truth((_n_head_25277<(_n_W_25083+6.0))))){d::check_cancel();(void)(this->_n_glow_25150((_n_head_25277+1.0),(_n_BANK_25087-1.5),2.2,0.45,1.0,0.95,0.85,false));
}
double _n_bk_25309=([&](){auto _n_left_25498=(std::floor((_n_APEX_25093-1.0))*_n_W_25083);auto _n_right_25499=std::floor(_n_TX_25089);return (_n_left_25498+_n_right_25499);})();
double _n_bv_25310=d::maximum({_n_blink_25276,_n_flare_25275});
(void)(((([&](){auto&& _n_array_25500=this->_n_fR_25137;auto _n_index_25501=_n_bk_25309;auto _n_value_25502=(d::at(_n_array_25500,_n_index_25501)+_n_bv_25310);d::put(_n_array_25500,_n_index_25501,_n_value_25502);return _n_value_25502;})(),([&](){auto&& _n_array_25503=this->_n_fG_25138;auto _n_index_25504=_n_bk_25309;auto _n_value_25505=(d::at(_n_array_25503,_n_index_25504)+_n_bv_25310);d::put(_n_array_25503,_n_index_25504,_n_value_25505);return _n_value_25505;})()),([&](){auto&& _n_array_25506=this->_n_fB_25139;auto _n_index_25507=_n_bk_25309;auto _n_value_25508=(d::at(_n_array_25506,_n_index_25507)+_n_bv_25310);d::put(_n_array_25506,_n_index_25507,_n_value_25508);return _n_value_25508;})()));
(void)(this->_n_glow_25150(_n_TX_25089,(_n_APEX_25093-0.5),(1.4+(2.2*_n_flare_25275)),((0.3*_n_blink_25276)+(0.75*_n_flare_25275)),1.0,0.98,0.95,true));
(void)(this->_n_lc_25144.fill(0.0));
{double _n_x_25311=0.0;
for(;d::truth((_n_x_25311<_n_W_25083));(void)((_n_x_25311++))){d::check_cancel();{double _n_r_25312=(_n_WL_25088-1.0);
for(;(d::truth((_n_r_25312>_n_CLOUD_BASE_25094))&&d::truth((d::at(this->_n_lc_25144,_n_x_25311)<8.0)));(void)((_n_r_25312--))){d::check_cancel();double _n_k_25313=((_n_r_25312*_n_W_25083)+_n_x_25311);
bool _n_train_25314=([&]()->bool{auto _n_logical_25509=([&]()->bool{auto _n_logical_25510=(_n_r_25312>=(_n_BANK_25087-4.0));return d::truth(_n_logical_25510)?((_n_head_25277-_n_x_25311)>=0.0):_n_logical_25510;})();return d::truth(_n_logical_25509)?((_n_head_25277-_n_x_25311)<this->_n_TRAIN_25143):_n_logical_25509;})();
if((d::truth(([&]()->bool{auto _n_logical_25511=(d::at(this->_n_mat_25123,_n_k_25313)==_n_SKY_25098);return d::truth(_n_logical_25511)?_n_logical_25511:(d::at(this->_n_mat_25123,_n_k_25313)==_n_CLOUD_25099);})())&&d::truth((!d::truth(_n_train_25314))))){d::check_cancel();continue;
}
double _n_pk_25315=d::maximum({d::at(this->_n_fR_25137,_n_k_25313),d::at(this->_n_fG_25138,_n_k_25313),d::at(this->_n_fB_25139,_n_k_25313)});
if(d::truth((_n_pk_25315<0.45))){d::check_cancel();continue;
}
double _n_i_25316=((_n_x_25311*8.0)+([&](){auto&& _n_array_25512=this->_n_lc_25144;auto _n_index_25513=_n_x_25311;double _n_old_25514=d::number(d::at(_n_array_25512,_n_index_25513));d::put(_n_array_25512,_n_index_25513,_n_old_25514+(1.0));return _n_old_25514;})());
(void)((([&](){auto&& _n_array_25515=this->_n_lRow_25145;auto _n_index_25516=_n_i_25316;auto _n_value_25517=_n_r_25312;d::put(_n_array_25515,_n_index_25516,_n_value_25517);return _n_value_25517;})(),([&](){auto&& _n_array_25518=this->_n_lA_25146;auto _n_index_25519=_n_i_25316;auto _n_value_25520=((0.55*d::minimum({0.8,(_n_pk_25315-0.3)}))/_n_pk_25315);d::put(_n_array_25518,_n_index_25519,_n_value_25520);return _n_value_25520;})()));
(void)(((([&](){auto&& _n_array_25521=this->_n_lR_25147;auto _n_index_25522=_n_i_25316;auto _n_value_25523=d::at(this->_n_fR_25137,_n_k_25313);d::put(_n_array_25521,_n_index_25522,_n_value_25523);return _n_value_25523;})(),([&](){auto&& _n_array_25524=this->_n_lG_25148;auto _n_index_25525=_n_i_25316;auto _n_value_25526=d::at(this->_n_fG_25138,_n_k_25313);d::put(_n_array_25524,_n_index_25525,_n_value_25526);return _n_value_25526;})()),([&](){auto&& _n_array_25527=this->_n_lB_25149;auto _n_index_25528=_n_i_25316;auto _n_value_25529=d::at(this->_n_fB_25139,_n_k_25313);d::put(_n_array_25527,_n_index_25528,_n_value_25529);return _n_value_25529;})()));
}}
}}
{
double _n_x_25317=std::floor(_n_TX_25089);
double _n_i_25318=((_n_x_25317*8.0)+d::minimum({7.0,d::at(this->_n_lc_25144,_n_x_25317)}));
(void)(([&](){auto&& _n_array_25530=this->_n_lc_25144;auto _n_index_25531=_n_x_25317;auto _n_value_25532=d::minimum({8.0,(d::at(this->_n_lc_25144,_n_x_25317)+1.0)});d::put(_n_array_25530,_n_index_25531,_n_value_25532);return _n_value_25532;})());
(void)((([&](){auto&& _n_array_25533=this->_n_lRow_25145;auto _n_index_25534=_n_i_25318;auto _n_value_25535=(_n_APEX_25093-1.0);d::put(_n_array_25533,_n_index_25534,_n_value_25535);return _n_value_25535;})(),([&](){auto&& _n_array_25536=this->_n_lA_25146;auto _n_index_25537=_n_i_25318;auto _n_value_25538=((0.5*_n_bv_25310)+0.2);d::put(_n_array_25536,_n_index_25537,_n_value_25538);return _n_value_25538;})()));
(void)(((([&](){auto&& _n_array_25539=this->_n_lR_25147;auto _n_index_25540=_n_i_25318;auto _n_value_25541=1.0;d::put(_n_array_25539,_n_index_25540,_n_value_25541);return _n_value_25541;})(),([&](){auto&& _n_array_25542=this->_n_lG_25148;auto _n_index_25543=_n_i_25318;auto _n_value_25544=1.0;d::put(_n_array_25542,_n_index_25543,_n_value_25544);return _n_value_25544;})()),([&](){auto&& _n_array_25545=this->_n_lB_25149;auto _n_index_25546=_n_i_25318;auto _n_value_25547=1.0;d::put(_n_array_25545,_n_index_25546,_n_value_25547);return _n_value_25547;})()));

}
{double _n_r_25319=_n_WL_25088;
for(;d::truth((_n_r_25319<_n_H_25084));(void)((_n_r_25319++))){d::check_cancel();double _n_d_25320=((_n_r_25319-_n_WL_25088)+0.5);
double _n_src_25321=(((_n_WL_25088-0.5)-(_n_d_25320*2.1))-((_n_d_25320*_n_d_25320)*0.015));
double _n_near_25322=(_n_d_25320/(_n_H_25084-_n_WL_25088));
{double _n_x_25323=0.0;
for(;d::truth((_n_x_25323<_n_W_25083));(void)((_n_x_25323++))){d::check_cancel();double _n_k_25324=((_n_r_25319*_n_W_25083)+_n_x_25323);
double _n_w_25325=([&](){auto _n_left_25548=(0.55*std::sin(((((_n_x_25323*0.09)+(_n_r_25319*1.3))+d::at(this->_n_ph1_25135,_n_k_25324))-(this->_n_w1_25141*_n_tl_25273))));auto _n_right_25549=(0.45*std::sin(((((_n_x_25323*0.04)-(_n_r_25319*0.7))+d::at(this->_n_ph2_25136,_n_k_25324))+(this->_n_w2_25142*_n_tl_25273))));return (_n_left_25548+_n_right_25549);})();
double _n_swell_25326=(0.5+(0.45*_n_w_25325));
double _n_cr_25327=((0.045-(0.015*_n_near_25322))*_n_swell_25326);
double _n_cg_25328=((0.085-(0.025*_n_near_25322))*_n_swell_25326);
double _n_cb_25329=((0.2-(0.06*_n_near_25322))*_n_swell_25326);
double _n_wob_25330=(([&](){auto _n_left_25550=(0.55*std::sin((((_n_r_25319*0.8)+(1.7*std::sin((_n_x_25323*0.05))))-((this->_n_w1_25141*2.0)*_n_tl_25273))));auto _n_right_25551=(0.45*std::sin((((_n_r_25319*0.37)+(_n_x_25323*0.03))+(this->_n_w2_25142*_n_tl_25273))));return (_n_left_25550+_n_right_25551);})()*(0.6+(2.6*_n_near_25322)));
double _n_sx_25331=([&](){auto _n_argument_25552=(_n_W_25083-1.0);auto _n_argument_25553=([&](){auto _n_argument_25554=0.0;auto _n_argument_25555=d::round((_n_x_25323+_n_wob_25330));return d::maximum({_n_argument_25554,_n_argument_25555});})();return d::minimum({_n_argument_25552,_n_argument_25553});})();
double _n_rr_25332=0.0;
double _n_gg_25333=0.0;
double _n_bb_25334=0.0;
{double _n_i_25335=0.0;
for(;d::truth((_n_i_25335<3.0));(void)((_n_i_25335++))){d::check_cancel();double _n_j_25336=((([&](){auto _n_argument_25556=0.0;auto _n_argument_25557=([&](){auto _n_argument_25558=(_n_WL_25088-1.0);auto _n_argument_25559=d::round((_n_src_25321-(_n_i_25335*1.2)));return d::minimum({_n_argument_25558,_n_argument_25559});})();return d::maximum({_n_argument_25556,_n_argument_25557});})()*_n_W_25083)+_n_sx_25331);
(void)((((_n_rr_25332=(_n_rr_25332+d::at(this->_n_fR_25137,_n_j_25336))),(_n_gg_25333=(_n_gg_25333+d::at(this->_n_fG_25138,_n_j_25336)))),(_n_bb_25334=(_n_bb_25334+d::at(this->_n_fB_25139,_n_j_25336)))));
}}
double _n_dash_25337=(0.3+(0.9*([&](){auto _n_argument_25560=(-d::number(0.2));auto _n_argument_25561=0.6;auto _n_argument_25562=std::sin((((_n_r_25319*1.1)+d::at(this->_n_ph2_25136,_n_k_25324))-((this->_n_w1_25141*2.0)*_n_tl_25273)));return _n_smooth_25111(_n_argument_25560,_n_argument_25561,_n_argument_25562);})()));
double _n_ma_25338=(0.16*((0.5+(0.5*_n_swell_25326))+(0.3*_n_dash_25337)));
(void)((((_n_rr_25332=(_n_rr_25332*_n_ma_25338)),(_n_gg_25333=(_n_gg_25333*_n_ma_25338))),(_n_bb_25334=(_n_bb_25334*_n_ma_25338))));
{double _n_i_25339=(_n_sx_25331*8.0);
double _n_e_25340=(_n_i_25339+d::at(this->_n_lc_25144,_n_sx_25331));
for(;d::truth((_n_i_25339<_n_e_25340));(void)((_n_i_25339++))){d::check_cancel();double _n_dm_25341=((_n_WL_25088-d::at(this->_n_lRow_25145,_n_i_25339))/2.1);
double _n_g_25342=(([&](){auto _n_left_25563=((d::at(this->_n_lA_25146,_n_i_25339)*_n_dash_25337)*_n_smooth_25111((-d::number(1.5)),((_n_dm_25341*0.4)+0.5),_n_d_25320));auto _n_right_25564=std::exp(((-d::number(d::maximum({0.0,(_n_d_25320-_n_dm_25341)})))/9.0));return (_n_left_25563*_n_right_25564);})()*(0.85-(0.3*_n_near_25322)));
(void)((((_n_rr_25332=(_n_rr_25332+(d::at(this->_n_lR_25147,_n_i_25339)*_n_g_25342))),(_n_gg_25333=(_n_gg_25333+(d::at(this->_n_lG_25148,_n_i_25339)*_n_g_25342)))),(_n_bb_25334=(_n_bb_25334+(d::at(this->_n_lB_25149,_n_i_25339)*_n_g_25342)))));
}}
double _n_kill_25343=(1.0-(0.85*_n_clamp_25110(((_n_rr_25332-_n_bb_25334)*3.0))));
(void)((((_n_cr_25327=((_n_cr_25327*_n_kill_25343)+_n_rr_25332)),(_n_cg_25328=((_n_cg_25328*_n_kill_25343)+_n_gg_25333))),(_n_cb_25329=((_n_cb_25329*_n_kill_25343)+_n_bb_25334))));
double _n_haze_25344=(std::exp(((-d::number(_n_d_25320))/2.2))*0.06);
(void)((((_n_cr_25327=(_n_cr_25327+(_n_haze_25344*0.7))),(_n_cg_25328=(_n_cg_25328+(_n_haze_25344*0.85)))),(_n_cb_25329=(_n_cb_25329+_n_haze_25344))));
(void)(((([&](){auto&& _n_array_25565=this->_n_fR_25137;auto _n_index_25566=_n_k_25324;auto _n_value_25567=_n_cr_25327;d::put(_n_array_25565,_n_index_25566,_n_value_25567);return _n_value_25567;})(),([&](){auto&& _n_array_25568=this->_n_fG_25138;auto _n_index_25569=_n_k_25324;auto _n_value_25570=_n_cg_25328;d::put(_n_array_25568,_n_index_25569,_n_value_25570);return _n_value_25570;})()),([&](){auto&& _n_array_25571=this->_n_fB_25139;auto _n_index_25572=_n_k_25324;auto _n_value_25573=_n_cb_25329;d::put(_n_array_25571,_n_index_25572,_n_value_25573);return _n_value_25573;})()));
(void)(([&](){auto&& _n_array_25574=this->_n_fF_25140;auto _n_index_25575=_n_k_25324;auto _n_value_25576=0.14;d::put(_n_array_25574,_n_index_25575,_n_value_25576);return _n_value_25576;})());
}}
}}
{double _n_r_25345=0.0;
for(;d::truth((_n_r_25345<_n_H_25084));(void)((_n_r_25345++))){d::check_cancel();double _n_fade_25346=(d::truth((_n_r_25345>=_n_WL_25088))?_n_smooth_25111(_n_H_25084,(_n_H_25084-16.0),(_n_r_25345+0.5)):1.0);
{double _n_x_25347=0.0;
for(;d::truth((_n_x_25347<_n_W_25083));(void)((_n_x_25347++))){d::check_cancel();double _n_k_25348=((_n_r_25345*_n_W_25083)+_n_x_25347);
double _n_cr_25349=d::at(this->_n_fR_25137,_n_k_25348);
double _n_cg_25350=d::at(this->_n_fG_25138,_n_k_25348);
double _n_cbl_25351=d::at(this->_n_fB_25139,_n_k_25348);
double _n_floor_25352=d::at(this->_n_fF_25140,_n_k_25348);
double _n_peak_25353=d::maximum({_n_cr_25349,_n_cg_25350,_n_cbl_25351,0.0001});
double _n_level_25354=(_n_clamp_25110((_n_floor_25352+(((1.0-_n_floor_25352)*std::pow(_n_peak_25353,0.85))*0.95)))*_n_fade_25346);
double _n_step_25355=([&](){auto _n_argument_25577=0.0;auto _n_argument_25578=([&](){auto _n_argument_25579=3.0;auto _n_argument_25580=d::round(((_n_level_25354*3.0)+d::at(_n_BAYER_25097,((double(d::i32(_n_r_25345)&d::i32(3.0))*4.0)+double(d::i32(_n_x_25347)&d::i32(3.0))))));return d::minimum({_n_argument_25579,_n_argument_25580});})();return d::maximum({_n_argument_25577,_n_argument_25578});})();
(void)(([&](){auto&& _n_array_25581=this->_n_out_25117;auto _n_index_25582=_n_k_25348;auto _n_value_25583=d::at(_n_DOTS_25095,_n_step_25355);d::put(_n_array_25581,_n_index_25582,_n_value_25583);return _n_value_25583;})());
if(d::truth(_n_color_25272)){d::check_cancel();double _n_want_25356=(d::truth(_n_step_25355)?d::minimum({1.0,((_n_level_25354+0.06)/d::at(_n_COVER_25096,_n_step_25355))}):0.0);
double _n_s_25357=((0.3+(0.7*_n_want_25356))/_n_peak_25353);
(void)(([&](){auto&& _n_array_25584=d::read(_n_color_25272);auto _n_index_25585=_n_k_25348;auto _n_value_25586=([&](){auto _n_argument_25587=_n_clamp_25110((_n_cr_25349*_n_s_25357));auto _n_argument_25588=_n_clamp_25110((_n_cg_25350*_n_s_25357));auto _n_argument_25589=_n_clamp_25110((_n_cbl_25351*_n_s_25357));return this->_n_nearest_25119(_n_argument_25587,_n_argument_25588,_n_argument_25589);})();d::put(_n_array_25584,_n_index_25585,_n_value_25586);return _n_value_25586;})());
}
}}
}}
d::Array<d::String,false> _n_lines_25358=d::Array<d::String,false>{};
{double _n_r_25359=0.0;
for(;d::truth((_n_r_25359<_n_H_25084));(void)((_n_r_25359++))){d::check_cancel();(void)(_n_lines_25358.push(d::join(this->_n_out_25117.slice((_n_r_25359*_n_W_25083),((_n_r_25359+1.0)*_n_W_25083)),d::String(u""))));
}}
return d::join(_n_lines_25358,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("prism-city").cols)*ascii::catalog_meta("prism-city").rows);auto _env=std::make_shared<_n_Record_25360>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &prism_city_meta(){return catalog_meta("prism-city");}
std::unique_ptr<Piece> make_prism_city(const AsciiPieceOptions &o){return std::make_unique<Native_prism_city>(o);}
}
