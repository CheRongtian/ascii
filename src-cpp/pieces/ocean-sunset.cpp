// Direct, statically typed C++ from src/pieces/ocean-sunset.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_23341;
struct _n_Record_23663;
struct _n_Record_23341{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_23341> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23341>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_23663{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_23663> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23663>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_23353(double _a0,double _a1);
double _n_noise_23354(double _a0,double _a1,double _a2);
double _n_fbm_23355(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_23356(double _a0);
double _n_smooth_23357(double _a0,double _a1,double _a2);
double _n_mix_23358(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_23359(d::String _a0);
void _n_gradient_23361(double _a0,d::Array<double,false> _a1);
double _n_ridge_23362(double _a0);
double _n_shore_23363(double _a0);
double _n_stack_23364(double _a0);
std::shared_ptr<_n_Record_23341> _n_meta_23340=[](){return ([&](){auto _n_object_23666=std::make_shared<_n_Record_23341>();_n_object_23666->_p_name=d::String(u"ocean sunset");_n_object_23666->_p_category=d::String(u"scenes");_n_object_23666->_p_note=d::String(u"the sun sets past a pine headland, lit cloud, glitter on rolling sea");_n_object_23666->_p_cols=200.0;_n_object_23666->_p_rows=100.0;_n_object_23666->_p_cell=1.0;_n_object_23666->_p_fps=15.0;_n_object_23666->_p_ground=d::String(u"#0b0817");_n_object_23666->_p_palette=d::Array<d::String,false>{d::String(u"#140f2c"),d::String(u"#1e1640"),d::String(u"#2b1c52"),d::String(u"#3d2266"),d::String(u"#552a74"),d::String(u"#6e2c78"),d::String(u"#90327c"),d::String(u"#b23c7c"),d::String(u"#d24f7a"),d::String(u"#ea6a78"),d::String(u"#c2306a"),d::String(u"#ff5d8f"),d::String(u"#ff8a9a"),d::String(u"#7a2456"),d::String(u"#f05d5e"),d::String(u"#f2804f"),d::String(u"#f99a43"),d::String(u"#ffb44a"),d::String(u"#ffcd62"),d::String(u"#ffe39a"),d::String(u"#fff5d8"),d::String(u"#a8323c"),d::String(u"#d2453c"),d::String(u"#e8603e"),d::String(u"#2f1a3e"),d::String(u"#47234f"),d::String(u"#63305c"),d::String(u"#874266"),d::String(u"#ac5b70"),d::String(u"#ff9e86"),d::String(u"#ffc4a2"),d::String(u"#ffdcc0"),d::String(u"#0e1230"),d::String(u"#171a46"),d::String(u"#232059"),d::String(u"#33286a"),d::String(u"#4a2f78"),d::String(u"#1c2a5c"),d::String(u"#2e4078"),d::String(u"#7d3f8f"),d::String(u"#a24f98"),d::String(u"#c8649e"),d::String(u"#de8bb5")};return _n_object_23666;})();}();
const double _n_W_23342=[](){return 200.0;}();
const double _n_H_23343=[](){return 100.0;}();
const double _n_HZ_23344=[](){return 56.0;}();
d::Array<double,false> _n_SUN_23345=[](){return d::Array<double,false>{134.0,(_n_HZ_23344-4.5)};}();
const double _n_SR_23346=[](){return 8.5;}();
const double _n_BOAT_23347=[](){return 112.0;}();
d::Array<d::Array<double,false>,false> _n_CHOP_23348=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(0.45)),0.89,22.0,0.07,2.1,0.4},d::Array<double,false>{0.5,0.87,37.0,0.06,2.9,2.1},d::Array<double,false>{(-d::number(0.15)),0.99,61.0,0.05,3.7,4.4},d::Array<double,false>{0.3,0.95,97.0,0.04,4.6,1.3}};}();
const d::String _n_DOTS_23349=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_23350=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_23351=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_23393=_a0;
return ((_n_v_23393/16.0)-0.47);});}();
d::Array<d::Array<double,false>,false> _n_PINES_23352=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.5,10.0,2.6},d::Array<double,false>{8.0,13.0,3.0},d::Array<double,false>{13.0,18.0,3.6},d::Array<double,false>{18.5,11.0,2.8},d::Array<double,false>{24.0,20.0,3.8},d::Array<double,false>{30.0,12.0,2.9},d::Array<double,false>{35.0,8.0,2.3},d::Array<double,false>{39.5,5.0,1.8}};}();
d::Array<d::Array<double,false>,false> _n_STOPS_23360=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.08,0.1,0.3},d::Array<double,false>{0.3,0.15,0.1,0.34},d::Array<double,false>{0.52,0.4,0.15,0.4},d::Array<double,false>{0.72,0.68,0.27,0.4},d::Array<double,false>{0.88,0.8,0.32,0.4},d::Array<double,false>{1.0,0.88,0.4,0.4}};}();
double _n_hash_23353(double _a0,double _a1){double _n_x_23394=_a0;
double _n_y_23395=_a1;
{
double _n_h_23396=([&](){auto _n_left_23667=d::imul(double(d::i32(_n_x_23394)|d::i32(0.0)),374761393.0);auto _n_right_23668=d::imul(double(d::i32(_n_y_23395)|d::i32(0.0)),668265263.0);return (_n_left_23667+_n_right_23668);})();
(void)((_n_h_23396=d::imul(double(d::i32(_n_h_23396)^d::i32(double(d::u32(_n_h_23396)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_23396)^d::i32(double(d::u32(_n_h_23396)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_23354(double _a0,double _a1,double _a2){double _n_x_23397=_a0;
double _n_y_23398=_a1;
double _n_period_23399=_a2;
{
double _n_xi_23400=std::floor(_n_x_23397);
double _n_yi_23401=std::floor(_n_y_23398);
double _n_fx_23402=(_n_x_23397-_n_xi_23400);
double _n_fy_23403=(_n_y_23398-_n_yi_23401);
double _n_u_23404=((_n_fx_23402*_n_fx_23402)*(3.0-(2.0*_n_fx_23402)));
double _n_v_23405=((_n_fy_23403*_n_fy_23403)*(3.0-(2.0*_n_fy_23403)));
double _n_x0_23406=_n_xi_23400;
double _n_x1_23407=(_n_xi_23400+1.0);
if(d::truth(_n_period_23399)){d::check_cancel();(void)((_n_x0_23406=d::mod((d::mod(_n_xi_23400,_n_period_23399)+_n_period_23399),_n_period_23399)));
(void)((_n_x1_23407=d::mod((_n_x0_23406+1.0),_n_period_23399)));
}
double _n_a_23408=_n_hash_23353(_n_x0_23406,_n_yi_23401);
double _n_b_23409=_n_hash_23353(_n_x1_23407,_n_yi_23401);
double _n_c_23410=_n_hash_23353(_n_x0_23406,(_n_yi_23401+1.0));
double _n_d_23411=_n_hash_23353(_n_x1_23407,(_n_yi_23401+1.0));
return (((_n_a_23408+((_n_b_23409-_n_a_23408)*_n_u_23404))+((_n_c_23410-_n_a_23408)*_n_v_23405))+(((((_n_a_23408-_n_b_23409)-_n_c_23410)+_n_d_23411)*_n_u_23404)*_n_v_23405));

}
}

double _n_fbm_23355(double _a0,double _a1,double _a2,double _a3){double _n_x_23412=_a0;
double _n_y_23413=_a1;
double _n_octaves_23414=_a2;
double _n_period_23415=_a3;
{
double _n_s_23416=0.0;
double _n_n_23417=0.0;
double _n_amp_23418=0.5;
double _n_f_23419=1.0;
{double _n_i_23420=0.0;
for(;d::truth((_n_i_23420<_n_octaves_23414));(void)((_n_i_23420++))){d::check_cancel();(void)((_n_s_23416=(_n_s_23416+(_n_amp_23418*_n_noise_23354((_n_x_23412*_n_f_23419),(_n_y_23413*_n_f_23419),(_n_period_23415*_n_f_23419))))));
(void)((_n_n_23417=(_n_n_23417+_n_amp_23418)));
(void)((_n_amp_23418=(_n_amp_23418*0.5)));
(void)((_n_f_23419=(_n_f_23419*2.0)));
}}
return (_n_s_23416/_n_n_23417);

}
}

double _n_clamp_23356(double _a0){double _n_v_23421=_a0;
return (d::truth((_n_v_23421<0.0))?0.0:(d::truth((_n_v_23421>1.0))?1.0:_n_v_23421));}

double _n_smooth_23357(double _a0,double _a1,double _a2){double _n_a_23422=_a0;
double _n_b_23423=_a1;
double _n_v_23424=_a2;
{
double _n_k_23425=_n_clamp_23356(((_n_v_23424-_n_a_23422)/(_n_b_23423-_n_a_23422)));
return ((_n_k_23425*_n_k_23425)*(3.0-(2.0*_n_k_23425)));

}
}

double _n_mix_23358(double _a0,double _a1,double _a2){double _n_a_23426=_a0;
double _n_b_23427=_a1;
double _n_k_23428=_a2;
return (_n_a_23426+((_n_b_23427-_n_a_23426)*_n_k_23428));}

d::Array<double,false> _n_hex_23359(d::String _a0){d::String _n_s_23429=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_23430=_a0;
return (([&](){auto _n_argument_23669=d::slice(_n_s_23429,_n_i_23430,(_n_i_23430+2.0));auto _n_argument_23670=16.0;return d::parseInt(_n_argument_23669,_n_argument_23670);})()/255.0);});}

void _n_gradient_23361(double _a0,d::Array<double,false> _a1){double _n_v_23431=_a0;
d::Array<double,false> _n_out_23432=_a1;
{
double _n_i_23433=1.0;
while((d::truth((_n_i_23433<(double(_n_STOPS_23360.size())-1.0)))&&d::truth((_n_v_23431>d::at(d::at(_n_STOPS_23360,_n_i_23433),0.0))))){d::check_cancel();(void)((_n_i_23433++));
}
d::Array<double,false> _n_a_23434=d::at(_n_STOPS_23360,(_n_i_23433-1.0));
d::Array<double,false> _n_b_23435=d::at(_n_STOPS_23360,_n_i_23433);
double _n_k_23436=_n_clamp_23356(((_n_v_23431-d::at(_n_a_23434,0.0))/(d::at(_n_b_23435,0.0)-d::at(_n_a_23434,0.0))));
(void)(((([&](){auto&& _n_array_23671=_n_out_23432;auto _n_index_23672=0.0;auto _n_value_23673=_n_mix_23358(d::at(_n_a_23434,1.0),d::at(_n_b_23435,1.0),_n_k_23436);d::put(_n_array_23671,_n_index_23672,_n_value_23673);return _n_value_23673;})(),([&](){auto&& _n_array_23674=_n_out_23432;auto _n_index_23675=1.0;auto _n_value_23676=_n_mix_23358(d::at(_n_a_23434,2.0),d::at(_n_b_23435,2.0),_n_k_23436);d::put(_n_array_23674,_n_index_23675,_n_value_23676);return _n_value_23676;})()),([&](){auto&& _n_array_23677=_n_out_23432;auto _n_index_23678=2.0;auto _n_value_23679=_n_mix_23358(d::at(_n_a_23434,3.0),d::at(_n_b_23435,3.0),_n_k_23436);d::put(_n_array_23677,_n_index_23678,_n_value_23679);return _n_value_23679;})()));

}
}

double _n_ridge_23362(double _a0){double _n_x_23437=_a0;
return ([&](){auto _n_left_23680=([&](){auto _n_left_23682=((_n_HZ_23344+2.5)-(11.0*([&](){auto _n_argument_23684=_n_smooth_23357(54.0,32.0,_n_x_23437);auto _n_argument_23685=0.7;return std::pow(_n_argument_23684,_n_argument_23685);})()));auto _n_right_23683=(2.4*std::exp((-d::number(std::pow(((_n_x_23437-19.0)/9.0),2.0)))));return (_n_left_23682-_n_right_23683);})();auto _n_right_23681=(2.0*_n_fbm_23355((_n_x_23437*0.21),3.3,3.0,0.0));return (_n_left_23680-_n_right_23681);})();}

double _n_shore_23363(double _a0){double _n_x_23438=_a0;
return ((_n_HZ_23344+1.5)+(5.0*_n_smooth_23357(54.0,4.0,_n_x_23438)));}

double _n_stack_23364(double _a0){double _n_x_23439=_a0;
return ((d::truth((_n_x_23439>52.0))&&d::truth((_n_x_23439<58.0)))?(((_n_HZ_23344-3.5)-(1.6*_n_fbm_23355((_n_x_23439*0.6),8.1,2.0,0.0)))+(2.5*std::pow(((_n_x_23439-55.0)/3.0),4.0))):1000000000.0);}

struct Native_ocean_sunset final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_23365{};
double _n_N_23366{};
d::Array<d::String,false> _n_out_23367{};
d::Array<uint8_t,true> _n_lut_23368{};
d::Array<float,true> _n_sky_23371{};
d::Array<double,false> _n_g_23372{};
double _n_LANDW_23373{};
double _n_LANDH_23374{};
d::Array<uint8_t,true> _n_land_23375{};
d::Array<float,true> _n_LR_23376{};
d::Array<float,true> _n_LG_23377{};
d::Array<float,true> _n_LB_23378{};
d::Array<float,true> _n_edge_23379{};
double _n_U_23380{};
double _n_V_23381{};
d::Array<float,true> _n_deck_23382{};
d::Array<float,true> _n_deckLit_23383{};
d::Array<float,true> _n_thinTop_23385{};
double _n_CW_23386{};
d::Array<float,true> _n_loCover_23387{};
d::Array<float,true> _n_loLit_23388{};
d::Array<float,true> _n_SKR_23390{};
d::Array<float,true> _n_SKG_23391{};
d::Array<float,true> _n_SKB_23392{};
std::function<d::String(double,std::shared_ptr<_n_Record_23663>)> _render;
double _n_nearest_23369(double _a0,double _a1,double _a2){double _n_r_23440=_a0;
double _n_g_23441=_a1;
double _n_b_23442=_a2;
{
double _n_k_23443=([&](){auto _n_left_23843=([&](){auto _n_left_23845=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_23440*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_23846=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_23441*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_23845)|d::i32(_n_right_23846));})();auto _n_right_23844=d::minimum({31.0,double(d::i32((_n_b_23442*31.99))|d::i32(0.0))});return double(d::i32(_n_left_23843)|d::i32(_n_right_23844));})();
if(d::truth((d::at(this->_n_lut_23368,_n_k_23443)!=255.0))){d::check_cancel();return d::at(this->_n_lut_23368,_n_k_23443);
}
double _n_best_23444=0.0;
double _n_bd_23445=1000000000.0;
{double _n_i_23446=0.0;
for(;d::truth((_n_i_23446<double(this->_n_P_23365.size())));(void)((_n_i_23446++))){d::check_cancel();double _n_dr_23447=(d::at(d::at(this->_n_P_23365,_n_i_23446),0.0)-_n_r_23440);
double _n_dg_23448=(d::at(d::at(this->_n_P_23365,_n_i_23446),1.0)-_n_g_23441);
double _n_db_23449=(d::at(d::at(this->_n_P_23365,_n_i_23446),2.0)-_n_b_23442);
double _n_d_23450=((((0.3*_n_dr_23447)*_n_dr_23447)+((0.5*_n_dg_23448)*_n_dg_23448))+((0.2*_n_db_23449)*_n_db_23449));
if(d::truth((_n_d_23450<_n_bd_23445))){d::check_cancel();(void)(((_n_bd_23445=_n_d_23450),(_n_best_23444=_n_i_23446)));
}
}}
return ([&](){auto&& _n_array_23847=this->_n_lut_23368;auto _n_index_23848=_n_k_23443;auto _n_value_23849=_n_best_23444;d::put(_n_array_23847,_n_index_23848,_n_value_23849);return _n_value_23849;})();

}
}

void _n_halftone_23370(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,std::optional<d::Array<uint8_t,true>> _a8){double _n_k_23451=_a0;
double _n_r_23452=_a1;
double _n_x_23453=_a2;
double _n_cr_23454=_a3;
double _n_cg_23455=_a4;
double _n_cb_23456=_a5;
double _n_floor_23457=_a6;
double _n_fade_23458=_a7;
std::optional<d::Array<uint8_t,true>> _n_color_23459=_a8;
{
double _n_peak_23460=d::maximum({_n_cr_23454,_n_cg_23455,_n_cb_23456,0.0001});
double _n_level_23461=(_n_clamp_23356((_n_floor_23457+(((1.0-_n_floor_23457)*std::pow(_n_peak_23460,0.85))*0.95)))*_n_fade_23458);
double _n_step_23462=([&](){auto _n_argument_23850=0.0;auto _n_argument_23851=([&](){auto _n_argument_23852=3.0;auto _n_argument_23853=d::round(((_n_level_23461*3.0)+d::at(_n_BAYER_23351,((double(d::i32(_n_r_23452)&d::i32(3.0))*4.0)+double(d::i32(_n_x_23453)&d::i32(3.0))))));return d::minimum({_n_argument_23852,_n_argument_23853});})();return d::maximum({_n_argument_23850,_n_argument_23851});})();
(void)(([&](){auto&& _n_array_23854=this->_n_out_23367;auto _n_index_23855=_n_k_23451;auto _n_value_23856=d::at(_n_DOTS_23349,_n_step_23462);d::put(_n_array_23854,_n_index_23855,_n_value_23856);return _n_value_23856;})());
if(d::truth(_n_color_23459)){d::check_cancel();double _n_want_23463=(d::truth(_n_step_23462)?d::minimum({1.0,((_n_level_23461+0.06)/d::at(_n_COVER_23350,_n_step_23462))}):0.0);
double _n_s_23464=(((0.3+(0.7*_n_want_23463))*(0.4+(0.6*_n_smooth_23357(0.14,0.5,_n_level_23461))))/_n_peak_23460);
(void)(([&](){auto&& _n_array_23857=d::read(_n_color_23459);auto _n_index_23858=_n_k_23451;auto _n_value_23859=([&](){auto _n_argument_23860=_n_clamp_23356((_n_cr_23454*_n_s_23464));auto _n_argument_23861=_n_clamp_23356((_n_cg_23455*_n_s_23464));auto _n_argument_23862=_n_clamp_23356((_n_cb_23456*_n_s_23464));return this->_n_nearest_23369(_n_argument_23860,_n_argument_23861,_n_argument_23862);})();d::put(_n_array_23857,_n_index_23858,_n_value_23859);return _n_value_23859;})());
}

}
}

double _n_deckAt_23384(double _a0,double _a1){double _n_u_23520=_a0;
double _n_v_23521=_a1;
{
double _n_q_23522=_n_fbm_23355((_n_u_23520*0.0125),(_n_v_23521*0.06),2.0,8.0);
double _n_patch_23523=_n_fbm_23355((_n_u_23520*0.00625),((_n_v_23521*0.03)+7.0),2.0,4.0);
return (_n_fbm_23355(((_n_u_23520*0.040625)+(_n_q_23522*1.6)),(_n_v_23521*0.3),5.0,26.0)+(0.25*(_n_patch_23523-0.5)));

}
}

double _n_lower_23389(double _a0,double _a1){double _n_x_23529=_a0;
double _n_y_23530=_a1;
{
double _n_b_23531=_n_fbm_23355((_n_x_23529/40.0),(_n_y_23530*0.3),4.0,(this->_n_CW_23386/40.0));
double _n_gaps_23532=_n_fbm_23355((_n_x_23529/120.0),5.0,2.0,(this->_n_CW_23386/120.0));
return ([&](){auto _n_left_23863=(((_n_b_23531+0.01)+(0.5*(_n_gaps_23532-0.5)))-(0.35*_n_smooth_23357((_n_HZ_23344-14.0),(_n_HZ_23344-20.0),_n_y_23530)));auto _n_right_23864=(0.25*_n_smooth_23357((_n_HZ_23344-4.0),(_n_HZ_23344-1.0),_n_y_23530));return (_n_left_23863-_n_right_23864);})();

}
}

explicit Native_ocean_sunset(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_23365=d::map(_n_meta_23340->_p_palette,_n_hex_23359);
this->_n_N_23366=(_n_W_23342*_n_H_23343);
this->_n_out_23367=d::Array<d::String,false>(size_t(this->_n_N_23366));
this->_n_lut_23368=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_sky_23371=d::Array<float,true>(size_t(((_n_HZ_23344*_n_W_23342)*3.0)));
this->_n_g_23372=d::Array<double,false>{0.0,0.0,0.0};
{double _n_r_23465=0.0;
for(;d::truth((_n_r_23465<_n_HZ_23344));(void)((_n_r_23465++))){d::check_cancel();{double _n_x_23466=0.0;
for(;d::truth((_n_x_23466<_n_W_23342));(void)((_n_x_23466++))){d::check_cancel();double _n_y_23467=(_n_r_23465+0.5);
double _n_dx_23468=((_n_x_23466+0.5)-d::at(_n_SUN_23345,0.0));
double _n_dy_23469=((_n_y_23467-d::at(_n_SUN_23345,1.0))*1.6);
double _n_d_23470=std::sqrt(((_n_dx_23468*_n_dx_23468)+(_n_dy_23469*_n_dy_23469)));
double _n_near_23471=std::exp(((-d::number(std::fabs(_n_dx_23468)))/62.0));
double _n_v_23472=(_n_y_23467/_n_HZ_23344);
(void)(([&](){auto _n_argument_23686=std::pow(_n_v_23472,(1.0+(0.12*(1.0-_n_near_23471))));auto _n_argument_23687=this->_n_g_23372;return _n_gradient_23361(_n_argument_23686,_n_argument_23687);})());
double _n_warm_23473=(([&](){auto _n_left_23688=std::exp(((-d::number(std::fabs(_n_dx_23468)))/36.0));auto _n_right_23689=_n_smooth_23357(0.45,1.0,_n_v_23472);return (_n_left_23688*_n_right_23689);})()*0.9);
(void)(((([&](){auto&& _n_array_23690=this->_n_g_23372;auto _n_index_23691=0.0;auto _n_value_23692=([&](){auto _n_argument_23693=d::at(this->_n_g_23372,0.0);auto _n_argument_23694=(1.0*_n_mix_23358(0.6,1.0,_n_v_23472));auto _n_argument_23695=_n_warm_23473;return _n_mix_23358(_n_argument_23693,_n_argument_23694,_n_argument_23695);})();d::put(_n_array_23690,_n_index_23691,_n_value_23692);return _n_value_23692;})(),([&](){auto&& _n_array_23696=this->_n_g_23372;auto _n_index_23697=1.0;auto _n_value_23698=([&](){auto _n_argument_23699=d::at(this->_n_g_23372,1.0);auto _n_argument_23700=(0.64*_n_mix_23358(0.6,1.0,_n_v_23472));auto _n_argument_23701=_n_warm_23473;return _n_mix_23358(_n_argument_23699,_n_argument_23700,_n_argument_23701);})();d::put(_n_array_23696,_n_index_23697,_n_value_23698);return _n_value_23698;})()),([&](){auto&& _n_array_23702=this->_n_g_23372;auto _n_index_23703=2.0;auto _n_value_23704=_n_mix_23358(d::at(this->_n_g_23372,2.0),0.3,_n_warm_23473);d::put(_n_array_23702,_n_index_23703,_n_value_23704);return _n_value_23704;})()));
double _n_fall_23474=([&](){auto _n_argument_23705=1.0;auto _n_argument_23706=(0.86+(0.14*_n_near_23471));auto _n_argument_23707=_n_smooth_23357(0.6,1.0,_n_v_23472);return _n_mix_23358(_n_argument_23705,_n_argument_23706,_n_argument_23707);})();
double _n_glow_23475=([&](){auto _n_left_23708=(std::exp(((-d::number(_n_d_23470))/40.0))*0.15);auto _n_right_23709=(std::exp(((-d::number(_n_d_23470))/9.0))*0.1);return (_n_left_23708+_n_right_23709);})();
double _n_haze_23476=(0.82+(0.36*_n_fbm_23355((_n_x_23466*0.03),(_n_y_23467*0.12),3.0,0.0)));
double _n_k_23477=(((_n_r_23465*_n_W_23342)+_n_x_23466)*3.0);
double _n_vig_23478=(((1.0-(0.08*([&](){auto _n_argument_23710=(std::fabs(((_n_x_23466+0.5)-100.0))/100.0);auto _n_argument_23711=2.0;return std::pow(_n_argument_23710,_n_argument_23711);})()))*_n_haze_23476)*_n_fall_23474);
(void)(([&](){auto&& _n_array_23712=this->_n_sky_23371;auto _n_index_23713=_n_k_23477;auto _n_value_23714=(((d::at(this->_n_g_23372,0.0)*(0.85+(0.15*_n_near_23471)))*_n_vig_23478)+_n_glow_23475);d::put(_n_array_23712,_n_index_23713,_n_value_23714);return _n_value_23714;})());
(void)(([&](){auto&& _n_array_23715=this->_n_sky_23371;auto _n_index_23716=(_n_k_23477+1.0);auto _n_value_23717=(((d::at(this->_n_g_23372,1.0)*(0.65+(0.35*_n_near_23471)))*_n_vig_23478)+(_n_glow_23475*0.7));d::put(_n_array_23715,_n_index_23716,_n_value_23717);return _n_value_23717;})());
(void)(([&](){auto&& _n_array_23718=this->_n_sky_23371;auto _n_index_23719=(_n_k_23477+2.0);auto _n_value_23720=(((d::at(this->_n_g_23372,2.0)*(1.1-(0.2*_n_near_23471)))*_n_vig_23478)+(_n_glow_23475*0.3));d::put(_n_array_23718,_n_index_23719,_n_value_23720);return _n_value_23720;})());
}}
}}
this->_n_LANDW_23373=60.0;
this->_n_LANDH_23374=(_n_HZ_23344+10.0);
this->_n_land_23375=d::Array<uint8_t,true>(size_t(this->_n_N_23366));
this->_n_LR_23376=d::Array<float,true>(size_t(this->_n_N_23366));
this->_n_LG_23377=d::Array<float,true>(size_t(this->_n_N_23366));
this->_n_LB_23378=d::Array<float,true>(size_t(this->_n_N_23366));
this->_n_edge_23379=d::Array<float,true>(size_t(this->_n_LANDH_23374)).fill((-d::number(1.0)));
{double _n_r_23479=0.0;
for(;d::truth((_n_r_23479<this->_n_LANDH_23374));(void)((_n_r_23479++))){d::check_cancel();double _n_y_23480=(_n_r_23479+0.5);
{double _n_x_23481=0.0;
for(;d::truth((_n_x_23481<this->_n_LANDW_23373));(void)((_n_x_23481++))){d::check_cancel();if((d::truth((_n_y_23480>=_n_ridge_23362((_n_x_23481+0.5))))&&d::truth((_n_y_23480<_n_shore_23363((_n_x_23481+0.5)))))){d::check_cancel();(void)(([&](){auto&& _n_array_23721=this->_n_edge_23379;auto _n_index_23722=_n_r_23479;auto _n_value_23723=_n_x_23481;d::put(_n_array_23721,_n_index_23722,_n_value_23723);return _n_value_23723;})());
}
}}
}}
{double _n_r_23482=0.0;
for(;d::truth((_n_r_23482<this->_n_LANDH_23374));(void)((_n_r_23482++))){d::check_cancel();double _n_y_23483=(_n_r_23482+0.5);
{double _n_x_23484=0.0;
for(;d::truth((_n_x_23484<this->_n_LANDW_23373));(void)((_n_x_23484++))){d::check_cancel();double _n_k_23485=((_n_r_23482*_n_W_23342)+_n_x_23484);
double _n_xc_23486=(_n_x_23484+0.5);
double _n_t0_23487=_n_ridge_23362(_n_xc_23486);
double _n_st_23488=_n_stack_23364(_n_xc_23486);
double _n_cr_23489{};
double _n_cg_23490{};
double _n_cb_23491{};
if((d::truth(([&]()->bool{auto _n_logical_23724=(_n_y_23483>=_n_t0_23487);return d::truth(_n_logical_23724)?(_n_y_23483<_n_shore_23363(_n_xc_23486)):_n_logical_23724;})())||d::truth(([&]()->bool{auto _n_logical_23725=(_n_y_23483>=_n_st_23488);return d::truth(_n_logical_23725)?(_n_y_23483<(_n_HZ_23344+1.2)):_n_logical_23725;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_23726=this->_n_land_23375;auto _n_index_23727=_n_k_23485;auto _n_value_23728=1.0;d::put(_n_array_23726,_n_index_23727,_n_value_23728);return _n_value_23728;})());
bool _n_isStack_23492=(!d::truth(([&]()->bool{auto _n_logical_23729=(_n_y_23483>=_n_t0_23487);return d::truth(_n_logical_23729)?(_n_y_23483<_n_shore_23363(_n_xc_23486)):_n_logical_23729;})()));
double _n_top_23493=(d::truth(_n_isStack_23492)?_n_st_23488:_n_t0_23487);
double _n_s_23494=(0.6+(0.8*_n_fbm_23355((_n_x_23484*0.22),(_n_y_23483*0.7),3.0,0.0)));
(void)((((_n_cr_23489=(0.06*_n_s_23494)),(_n_cg_23490=(0.042*_n_s_23494))),(_n_cb_23491=(0.15*_n_s_23494))));
double _n_facing_23495=_n_clamp_23356((0.4+(d::truth(_n_isStack_23492)?0.5:(([&](){auto _n_left_23730=_n_ridge_23362((_n_xc_23486+1.2));auto _n_right_23731=_n_ridge_23362((_n_xc_23486-1.2));return (_n_left_23730-_n_right_23731);})()*0.45))));
double _n_rim_23496=(_n_smooth_23357((_n_top_23493+2.4),(_n_top_23493+0.4),_n_y_23483)*_n_facing_23495);
double _n_crag_23497=([&](){auto _n_argument_23732=0.35;auto _n_argument_23733=0.75;auto _n_argument_23734=_n_fbm_23355(((_n_x_23484*0.4)+3.0),(_n_y_23483*0.5),3.0,0.0);return _n_smooth_23357(_n_argument_23732,_n_argument_23733,_n_argument_23734);})();
double _n_face_23498=(d::truth(_n_isStack_23492)?(_n_smooth_23357(53.5,57.5,_n_xc_23486)*0.7):(d::truth((d::at(this->_n_edge_23379,_n_r_23482)>30.0))?([&](){auto _n_left_23735=std::exp(((-d::number((d::at(this->_n_edge_23379,_n_r_23482)-_n_x_23484)))/4.0));auto _n_right_23736=_n_smooth_23357((_n_HZ_23344+5.0),(_n_HZ_23344-4.0),_n_y_23483);return (_n_left_23735*_n_right_23736);})():0.0));
double _n_lit_23499=_n_clamp_23356(d::maximum({(_n_rim_23496*0.9),((_n_face_23498*(0.3+(0.7*_n_crag_23497)))*0.75)}));
(void)((((_n_cr_23489=_n_mix_23358(_n_cr_23489,0.95,_n_lit_23499)),(_n_cg_23490=_n_mix_23358(_n_cg_23490,0.38,(_n_lit_23499*0.95)))),(_n_cb_23491=_n_mix_23358(_n_cb_23491,0.3,(_n_lit_23499*0.9)))));
}
for(auto &&_n_item_23737:_n_PINES_23352){d::check_cancel();auto _n_binding_23738=_n_item_23737;
double _n_tx_23500=d::at(_n_binding_23738,0.0);
double _n_th_23501=d::at(_n_binding_23738,1.0);
double _n_tw_23502=d::at(_n_binding_23738,2.0);
{
double _n_tb_23503=_n_ridge_23362(_n_tx_23500);
double _n_dy_23504=(_n_y_23483-(_n_tb_23503-_n_th_23501));
double _n_tier_23505=((_n_dy_23504+(_n_th_23501*0.3))/2.4);
double _n_half_23506=((((_n_dy_23504/_n_th_23501)*_n_tw_23502)*(0.5+(0.75*(_n_tier_23505-std::floor(_n_tier_23505)))))+0.35);
double _n_ex_23507=(_n_xc_23486-_n_tx_23500);
if(((d::truth((_n_dy_23504>=0.0))&&d::truth((_n_y_23483<(_n_tb_23503+1.5))))&&d::truth((std::fabs(_n_ex_23507)<=_n_half_23506)))){d::check_cancel();(void)(([&](){auto&& _n_array_23739=this->_n_land_23375;auto _n_index_23740=_n_k_23485;auto _n_value_23741=2.0;d::put(_n_array_23739,_n_index_23740,_n_value_23741);return _n_value_23741;})());
double _n_s_23508=(0.7+(0.6*_n_hash_23353(((_n_x_23484*13.0)+_n_r_23482),5.0)));
(void)((((_n_cr_23489=(0.045*_n_s_23508)),(_n_cg_23490=(0.03*_n_s_23508))),(_n_cb_23491=(0.1*_n_s_23508))));
double _n_e_23509=((d::truth((_n_ex_23507>0.0))&&d::truth((_n_ex_23507>(_n_half_23506-1.1))))?(0.3+(0.3*_n_smooth_23357(_n_th_23501,0.0,_n_dy_23504))):0.0);
(void)((((_n_cr_23489=_n_mix_23358(_n_cr_23489,0.85,_n_e_23509)),(_n_cg_23490=_n_mix_23358(_n_cg_23490,0.3,_n_e_23509))),(_n_cb_23491=_n_mix_23358(_n_cb_23491,0.3,_n_e_23509))));
}

}
}
if(d::truth(d::at(this->_n_land_23375,_n_k_23485))){d::check_cancel();(void)(((([&](){auto&& _n_array_23742=this->_n_LR_23376;auto _n_index_23743=_n_k_23485;auto _n_value_23744=_n_cr_23489;d::put(_n_array_23742,_n_index_23743,_n_value_23744);return _n_value_23744;})(),([&](){auto&& _n_array_23745=this->_n_LG_23377;auto _n_index_23746=_n_k_23485;auto _n_value_23747=_n_cg_23490;d::put(_n_array_23745,_n_index_23746,_n_value_23747);return _n_value_23747;})()),([&](){auto&& _n_array_23748=this->_n_LB_23378;auto _n_index_23749=_n_k_23485;auto _n_value_23750=_n_cb_23491;d::put(_n_array_23748,_n_index_23749,_n_value_23750);return _n_value_23750;})()));
}
}}
}}
{double _n_r_23510=(_n_HZ_23344-10.0);
for(;d::truth((_n_r_23510<(_n_HZ_23344+4.0)));(void)((_n_r_23510++))){d::check_cancel();double _n_y_23511=(_n_r_23510+0.5);
{double _n_x_23512=(_n_BOAT_23347-6.0);
for(;d::truth((_n_x_23512<=(_n_BOAT_23347+6.0)));(void)((_n_x_23512++))){d::check_cancel();double _n_k_23513=((_n_r_23510*_n_W_23342)+_n_x_23512);
double _n_ex_23514=((_n_x_23512+0.5)-_n_BOAT_23347);
bool _n_hull_23515=([&]()->bool{auto _n_logical_23751=([&]()->bool{auto _n_logical_23752=(_n_y_23511>=(_n_HZ_23344+1.0));return d::truth(_n_logical_23752)?(_n_y_23511<(_n_HZ_23344+3.0)):_n_logical_23752;})();return d::truth(_n_logical_23751)?(std::fabs((_n_ex_23514-0.3))<(4.6-(((_n_y_23511-_n_HZ_23344)-1.0)*1.3))):_n_logical_23751;})();
bool _n_mast_23516=([&]()->bool{auto _n_logical_23753=([&]()->bool{auto _n_logical_23754=(std::fabs(_n_ex_23514)<0.5);return d::truth(_n_logical_23754)?(_n_y_23511>=(_n_HZ_23344-9.0)):_n_logical_23754;})();return d::truth(_n_logical_23753)?(_n_y_23511<(_n_HZ_23344+1.0)):_n_logical_23753;})();
bool _n_main_23517=([&]()->bool{auto _n_logical_23755=([&]()->bool{auto _n_logical_23756=([&]()->bool{auto _n_logical_23757=(_n_ex_23514>0.0);return d::truth(_n_logical_23757)?(_n_y_23511>=(_n_HZ_23344-8.5)):_n_logical_23757;})();return d::truth(_n_logical_23756)?(_n_y_23511<(_n_HZ_23344+0.5)):_n_logical_23756;})();return d::truth(_n_logical_23755)?(_n_ex_23514<(0.6+((_n_y_23511-(_n_HZ_23344-8.5))*0.42))):_n_logical_23755;})();
bool _n_jib_23518=([&]()->bool{auto _n_logical_23758=([&]()->bool{auto _n_logical_23759=([&]()->bool{auto _n_logical_23760=(_n_ex_23514<0.0);return d::truth(_n_logical_23760)?(_n_y_23511>=(_n_HZ_23344-7.0)):_n_logical_23760;})();return d::truth(_n_logical_23759)?(_n_y_23511<(_n_HZ_23344+0.5)):_n_logical_23759;})();return d::truth(_n_logical_23758)?((-d::number(_n_ex_23514))<((_n_y_23511-(_n_HZ_23344-7.0))*0.36)):_n_logical_23758;})();
if((((d::truth(_n_hull_23515)||d::truth(_n_mast_23516))||d::truth(_n_main_23517))||d::truth(_n_jib_23518))){d::check_cancel();(void)(([&](){auto&& _n_array_23761=this->_n_land_23375;auto _n_index_23762=_n_k_23513;auto _n_value_23763=3.0;d::put(_n_array_23761,_n_index_23762,_n_value_23763);return _n_value_23763;})());
double _n_glow_23519=(d::truth(_n_main_23517)?(0.12+(0.18*_n_smooth_23357(0.0,3.5,_n_ex_23514))):0.0);
(void)(((([&](){auto&& _n_array_23764=this->_n_LR_23376;auto _n_index_23765=_n_k_23513;auto _n_value_23766=(0.05+_n_glow_23519);d::put(_n_array_23764,_n_index_23765,_n_value_23766);return _n_value_23766;})(),([&](){auto&& _n_array_23767=this->_n_LG_23377;auto _n_index_23768=_n_k_23513;auto _n_value_23769=(0.03+(_n_glow_23519*0.45));d::put(_n_array_23767,_n_index_23768,_n_value_23769);return _n_value_23769;})()),([&](){auto&& _n_array_23770=this->_n_LB_23378;auto _n_index_23771=_n_k_23513;auto _n_value_23772=(0.09+(_n_glow_23519*0.35));d::put(_n_array_23770,_n_index_23771,_n_value_23772);return _n_value_23772;})()));
}
}}
}}
this->_n_U_23380=640.0;
this->_n_V_23381=128.0;
this->_n_deck_23382=d::Array<float,true>(size_t((this->_n_U_23380*this->_n_V_23381)));
this->_n_deckLit_23383=d::Array<float,true>(size_t((this->_n_U_23380*this->_n_V_23381)));
{double _n_v_23524=0.0;
for(;d::truth((_n_v_23524<this->_n_V_23381));(void)((_n_v_23524++))){d::check_cancel();{double _n_u_23525=0.0;
for(;d::truth((_n_u_23525<this->_n_U_23380));(void)((_n_u_23525++))){d::check_cancel();double _n_d_23526=this->_n_deckAt_23384(_n_u_23525,_n_v_23524);
(void)(([&](){auto&& _n_array_23773=this->_n_deck_23382;auto _n_index_23774=((_n_v_23524*this->_n_U_23380)+_n_u_23525);auto _n_value_23775=_n_d_23526;d::put(_n_array_23773,_n_index_23774,_n_value_23775);return _n_value_23775;})());
(void)(([&](){auto&& _n_array_23776=this->_n_deckLit_23383;auto _n_index_23777=((_n_v_23524*this->_n_U_23380)+_n_u_23525);auto _n_value_23778=_n_clamp_23356((0.5+((_n_d_23526-this->_n_deckAt_23384(_n_u_23525,(_n_v_23524+2.5)))*9.0)));d::put(_n_array_23776,_n_index_23777,_n_value_23778);return _n_value_23778;})());
}}
}}
this->_n_thinTop_23385=d::Array<float,true>(size_t((_n_W_23342*_n_HZ_23344)));
{double _n_r_23527=0.0;
for(;d::truth((_n_r_23527<_n_HZ_23344));(void)((_n_r_23527++))){d::check_cancel();{double _n_x_23528=0.0;
for(;d::truth((_n_x_23528<_n_W_23342));(void)((_n_x_23528++))){d::check_cancel();(void)(([&](){auto&& _n_array_23779=this->_n_thinTop_23385;auto _n_index_23780=((_n_r_23527*_n_W_23342)+_n_x_23528);auto _n_value_23781=_n_fbm_23355(((_n_x_23528*0.05)+11.0),(_n_r_23527*0.15),2.0,0.0);d::put(_n_array_23779,_n_index_23780,_n_value_23781);return _n_value_23781;})());
}}
}}
this->_n_CW_23386=720.0;
this->_n_loCover_23387=d::Array<float,true>(size_t((this->_n_CW_23386*_n_HZ_23344)));
this->_n_loLit_23388=d::Array<float,true>(size_t((this->_n_CW_23386*_n_HZ_23344)));
{double _n_r_23533=0.0;
for(;d::truth((_n_r_23533<_n_HZ_23344));(void)((_n_r_23533++))){d::check_cancel();{double _n_x_23534=0.0;
for(;d::truth((_n_x_23534<this->_n_CW_23386));(void)((_n_x_23534++))){d::check_cancel();double _n_y_23535=(_n_r_23533+0.5);
double _n_k_23536=((_n_r_23533*this->_n_CW_23386)+_n_x_23534);
double _n_dl_23537=this->_n_lower_23389(_n_x_23534,_n_y_23535);
(void)(([&](){auto&& _n_array_23782=this->_n_loCover_23387;auto _n_index_23783=_n_k_23536;auto _n_value_23784=_n_smooth_23357(0.58,0.66,_n_dl_23537);d::put(_n_array_23782,_n_index_23783,_n_value_23784);return _n_value_23784;})());
(void)(([&](){auto&& _n_array_23785=this->_n_loLit_23388;auto _n_index_23786=_n_k_23536;auto _n_value_23787=_n_clamp_23356((0.5+((_n_dl_23537-this->_n_lower_23389(_n_x_23534,(_n_y_23535+1.2)))*6.0)));d::put(_n_array_23785,_n_index_23786,_n_value_23787);return _n_value_23787;})());
}}
}}
this->_n_SKR_23390=d::Array<float,true>(size_t((_n_HZ_23344*_n_W_23342)));
this->_n_SKG_23391=d::Array<float,true>(size_t((_n_HZ_23344*_n_W_23342)));
this->_n_SKB_23392=d::Array<float,true>(size_t((_n_HZ_23344*_n_W_23342)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_23663> _a1) mutable ->d::String{double _n_t_23538=_a0;
auto _n_binding_23790=(d::present(_a1)?_a1:([&](){auto _n_object_23789=std::make_shared<_n_Record_23663>();return _n_object_23789;})());
std::optional<d::Array<uint8_t,true>> _n_color_23539=_n_binding_23790->_p_color;
{
double _n_dUp_23540=(_n_t_23538*0.9);
double _n_dLo_23541=(_n_t_23538*1.7);
{double _n_r_23542=0.0;
for(;d::truth((_n_r_23542<_n_HZ_23344));(void)((_n_r_23542++))){d::check_cancel();double _n_y_23543=(_n_r_23542+0.5);
{double _n_x_23544=0.0;
for(;d::truth((_n_x_23544<_n_W_23342));(void)((_n_x_23544++))){d::check_cancel();double _n_k_23545=((_n_r_23542*_n_W_23342)+_n_x_23544);
double _n_s_23546=(_n_k_23545*3.0);
double _n_cr_23547=d::at(this->_n_sky_23371,_n_s_23546);
double _n_cg_23548=d::at(this->_n_sky_23371,(_n_s_23546+1.0));
double _n_cb_23549=d::at(this->_n_sky_23371,(_n_s_23546+2.0));
double _n_dx_23550=((_n_x_23544+0.5)-d::at(_n_SUN_23345,0.0));
double _n_dy_23551=(_n_y_23543-d::at(_n_SUN_23345,1.0));
double _n_disc_23552=0.0;
double _n_ds_23553=std::sqrt(((_n_dx_23550*_n_dx_23550)+std::pow((_n_dy_23551/0.9),2.0)));
if(d::truth((_n_ds_23553<(_n_SR_23346+0.6)))){d::check_cancel();double _n_e_23554=(_n_ds_23553/_n_SR_23346);
(void)((_n_disc_23552=_n_smooth_23357((_n_SR_23346+0.45),(_n_SR_23346-0.45),_n_ds_23553)));
double _n_e4_23555=(((_n_e_23554*_n_e_23554)*_n_e_23554)*_n_e_23554);
(void)((_n_cr_23547=_n_mix_23358(_n_cr_23547,1.0,_n_disc_23552)));
(void)((_n_cg_23548=_n_mix_23358(_n_cg_23548,(0.95-(0.2*_n_e4_23555)),_n_disc_23552)));
(void)((_n_cb_23549=_n_mix_23358(_n_cb_23549,(0.78-(0.38*_n_e4_23555)),_n_disc_23552)));
}
double _n_near_23556=std::exp(((-d::number(std::sqrt(((_n_dx_23550*_n_dx_23550)+((_n_dy_23551*_n_dy_23551)*2.5)))))/45.0));
double _n_v_23557=(_n_y_23543/_n_HZ_23344);
double _n_D_23558=(58.0/((_n_HZ_23344-_n_y_23543)+2.5));
double _n_far_23559=([&](){auto _n_left_23791=_n_smooth_23357(4.8,2.7,_n_D_23558);auto _n_right_23792=_n_smooth_23357(1.08,1.7,_n_D_23558);return (_n_left_23791*_n_right_23792);})();
double _n_cloud_23560=0.0;
if(d::truth((_n_far_23559>0.0))){d::check_cancel();double _n_su_23561=(((_n_dx_23550*_n_D_23558)+_n_dUp_23540)+64200.0);
double _n_sv_23562=((_n_D_23558-0.9)*10.0);
double _n_iu_23563=std::floor(_n_su_23561);
double _n_fu_23564=(_n_su_23561-_n_iu_23563);
double _n_iv_23565=std::floor(_n_sv_23562);
double _n_fv_23566=(_n_sv_23562-_n_iv_23565);
(void)((_n_iu_23563=d::mod(_n_iu_23563,this->_n_U_23380)));
double _n_iu1_23567=d::mod((_n_iu_23563+1.0),this->_n_U_23380);
double _n_a0_23568=(_n_iv_23565*this->_n_U_23380);
double _n_a1_23569=(_n_a0_23568+this->_n_U_23380);
double _n_d0_23570=(d::at(this->_n_deck_23382,(_n_a0_23568+_n_iu_23563))+((d::at(this->_n_deck_23382,(_n_a0_23568+_n_iu1_23567))-d::at(this->_n_deck_23382,(_n_a0_23568+_n_iu_23563)))*_n_fu_23564));
double _n_d1_23571=(d::at(this->_n_deck_23382,(_n_a1_23569+_n_iu_23563))+((d::at(this->_n_deck_23382,(_n_a1_23569+_n_iu1_23567))-d::at(this->_n_deck_23382,(_n_a1_23569+_n_iu_23563)))*_n_fu_23564));
double _n_dd_23572=((_n_d0_23570+((_n_d1_23571-_n_d0_23570)*_n_fv_23566))-((0.22*(1.0-_n_far_23559))*d::at(this->_n_thinTop_23385,_n_k_23545)));
double _n_c_23573=([&](){auto _n_left_23793=_n_smooth_23357(0.56,0.68,_n_dd_23572);auto _n_right_23794=std::sqrt(_n_far_23559);return (_n_left_23793*_n_right_23794);})();
if(d::truth((_n_c_23573>0.01))){d::check_cancel();(void)((_n_cloud_23560=_n_c_23573));
double _n_l0_23574=(d::at(this->_n_deckLit_23383,(_n_a0_23568+_n_iu_23563))+((d::at(this->_n_deckLit_23383,(_n_a0_23568+_n_iu1_23567))-d::at(this->_n_deckLit_23383,(_n_a0_23568+_n_iu_23563)))*_n_fu_23564));
double _n_l1_23575=(d::at(this->_n_deckLit_23383,(_n_a1_23569+_n_iu_23563))+((d::at(this->_n_deckLit_23383,(_n_a1_23569+_n_iu1_23567))-d::at(this->_n_deckLit_23383,(_n_a1_23569+_n_iu_23563)))*_n_fu_23564));
double _n_l_23576=(_n_l0_23574+((_n_l1_23575-_n_l0_23574)*_n_fv_23566));
double _n_az_23577=std::exp(((-d::number(std::fabs(_n_dx_23550)))/60.0));
double _n_low_23578=(_n_v_23557*_n_v_23557);
double _n_thin_23579=(1.0-_n_smooth_23357(0.6,0.76,_n_dd_23572));
double _n_b_23580=_n_clamp_23356(((([&](){auto _n_argument_23795=_n_smooth_23357(0.45,0.85,_n_l_23576);auto _n_argument_23796=1.5;return std::pow(_n_argument_23795,_n_argument_23796);})()*((0.55+(0.25*_n_low_23578))+(0.35*_n_az_23577)))+(((0.3*_n_thin_23579)*_n_az_23577)*_n_low_23578)));
double _n_warm_23581=_n_clamp_23356((_n_az_23577*(0.1+(1.2*_n_low_23578))));
double _n_hr_23582=1.0;
double _n_hg_23583=_n_mix_23358(0.45,0.72,_n_warm_23581);
double _n_hb_23584=_n_mix_23358(0.52,0.38,_n_warm_23581);
double _n_sr_23585=_n_mix_23358(0.1,0.2,_n_v_23557);
double _n_sg_23586=_n_mix_23358(0.065,0.07,_n_v_23557);
double _n_sb_23587=_n_mix_23358(0.23,0.27,_n_v_23557);
(void)((_n_cr_23547=([&](){auto _n_argument_23797=_n_cr_23547;auto _n_argument_23798=_n_mix_23358(_n_sr_23585,_n_hr_23582,_n_b_23580);auto _n_argument_23799=_n_c_23573;return _n_mix_23358(_n_argument_23797,_n_argument_23798,_n_argument_23799);})()));
(void)((_n_cg_23548=([&](){auto _n_argument_23800=_n_cg_23548;auto _n_argument_23801=_n_mix_23358(_n_sg_23586,_n_hg_23583,_n_b_23580);auto _n_argument_23802=_n_c_23573;return _n_mix_23358(_n_argument_23800,_n_argument_23801,_n_argument_23802);})()));
(void)((_n_cb_23549=([&](){auto _n_argument_23803=_n_cb_23549;auto _n_argument_23804=_n_mix_23358(_n_sb_23587,_n_hb_23584,_n_b_23580);auto _n_argument_23805=_n_c_23573;return _n_mix_23358(_n_argument_23803,_n_argument_23804,_n_argument_23805);})()));
}
}
double _n_sx_23588=(_n_x_23544+_n_dLo_23541);
double _n_ix_23589=std::floor(_n_sx_23588);
double _n_fx_23590=(_n_sx_23588-_n_ix_23589);
double _n_i0_23591=((_n_r_23542*this->_n_CW_23386)+d::mod(_n_ix_23589,this->_n_CW_23386));
double _n_i1_23592=((_n_r_23542*this->_n_CW_23386)+d::mod((_n_ix_23589+1.0),this->_n_CW_23386));
double _n_c_23593=([&](){auto _n_left_23806=((d::at(this->_n_loCover_23387,_n_i0_23591)+((d::at(this->_n_loCover_23387,_n_i1_23592)-d::at(this->_n_loCover_23387,_n_i0_23591))*_n_fx_23590))*(1.0-(0.75*std::exp((-d::number(std::pow((_n_dx_23550/13.0),2.0)))))));auto _n_right_23807=(1.0-(0.85*_n_smooth_23357(76.0,50.0,_n_x_23544)));return (_n_left_23806*_n_right_23807);})();
if(d::truth((_n_c_23593>0.01))){d::check_cancel();(void)((_n_cloud_23560=d::maximum({_n_cloud_23560,_n_c_23593})));
double _n_l_23594=(d::at(this->_n_loLit_23388,_n_i0_23591)+((d::at(this->_n_loLit_23388,_n_i1_23592)-d::at(this->_n_loLit_23388,_n_i0_23591))*_n_fx_23590));
double _n_rim_23595=(std::pow(_n_l_23594,2.0)*(0.35+(0.9*_n_near_23556)));
double _n_a_23596=(d::minimum({1.0,(_n_c_23593*1.2)})*0.92);
(void)((_n_cr_23547=_n_mix_23358(_n_cr_23547,(0.3+(0.7*_n_rim_23595)),_n_a_23596)));
(void)((_n_cg_23548=_n_mix_23358(_n_cg_23548,(0.09+(0.55*_n_rim_23595)),_n_a_23596)));
(void)((_n_cb_23549=_n_mix_23358(_n_cb_23549,(0.24+(0.18*_n_rim_23595)),_n_a_23596)));
}
if(((d::truth((_n_r_23542<22.0))&&d::truth((_n_cloud_23560<0.05)))&&d::truth((_n_hash_23353(_n_x_23544,((_n_r_23542*5.0)+3.0))>0.993)))){d::check_cancel();double _n_tw_23597=(0.55+(0.45*std::sin(([&](){auto _n_left_23808=(_n_t_23538*(0.8+(_n_hash_23353(_n_r_23542,_n_x_23544)*1.6)));auto _n_right_23809=(_n_hash_23353(_n_x_23544,_n_r_23542)*6.28);return (_n_left_23808+_n_right_23809);})())));
double _n_st_23598=((_n_tw_23597*_n_smooth_23357(22.0,4.0,_n_r_23542))*0.75);
(void)((((_n_cr_23547=d::maximum({_n_cr_23547,(_n_st_23598*0.95)})),(_n_cg_23548=d::maximum({_n_cg_23548,(_n_st_23598*0.85)}))),(_n_cb_23549=d::maximum({_n_cb_23549,_n_st_23598}))));
}
double _n_keep_23599=(1.0-(0.75*_n_disc_23552));
(void)(((([&](){auto&& _n_array_23810=this->_n_SKR_23390;auto _n_index_23811=_n_k_23545;auto _n_value_23812=(_n_cr_23547*_n_keep_23599);d::put(_n_array_23810,_n_index_23811,_n_value_23812);return _n_value_23812;})(),([&](){auto&& _n_array_23813=this->_n_SKG_23391;auto _n_index_23814=_n_k_23545;auto _n_value_23815=(_n_cg_23548*_n_keep_23599);d::put(_n_array_23813,_n_index_23814,_n_value_23815);return _n_value_23815;})()),([&](){auto&& _n_array_23816=this->_n_SKB_23392;auto _n_index_23817=_n_k_23545;auto _n_value_23818=(_n_cb_23549*_n_keep_23599);d::put(_n_array_23816,_n_index_23817,_n_value_23818);return _n_value_23818;})()));
if(d::truth(d::at(this->_n_land_23375,_n_k_23545))){d::check_cancel();(void)((((_n_cr_23547=d::at(this->_n_LR_23376,_n_k_23545)),(_n_cg_23548=d::at(this->_n_LG_23377,_n_k_23545))),(_n_cb_23549=d::at(this->_n_LB_23378,_n_k_23545))));
(void)(this->_n_halftone_23370(_n_k_23545,_n_r_23542,_n_x_23544,_n_cr_23547,_n_cg_23548,_n_cb_23549,0.02,1.0,_n_color_23539));
}else {d::check_cancel();(void)(this->_n_halftone_23370(_n_k_23545,_n_r_23542,_n_x_23544,_n_cr_23547,_n_cg_23548,_n_cb_23549,0.05,1.0,_n_color_23539));
}
}}
}}
{double _n_r_23600=_n_HZ_23344;
for(;d::truth((_n_r_23600<_n_H_23343));(void)((_n_r_23600++))){d::check_cancel();double _n_y_23601=(_n_r_23600+0.5);
double _n_dz_23602=(_n_y_23601-_n_HZ_23344);
double _n_Z_23603=(36.0/_n_dz_23602);
double _n_rows_23604=(36.0/(_n_dz_23602*_n_dz_23602));
double _n_swellAmt_23605=_n_smooth_23357(8.0,26.0,_n_dz_23602);
double _n_hot_23606=std::exp(((-d::number(_n_dz_23602))/9.0));
double _n_pw_23607=(3.0+(_n_dz_23602*0.8));
double _n_fx_23608=((0.9/(1.0+(_n_dz_23602*0.06)))*0.35);
double _n_fy_23609=(1.6/(1.0+(_n_dz_23602*0.05)));
double _n_fres_23610=(0.24+(0.46*std::exp(((-d::number(_n_dz_23602))/8.0))));
double _n_depth_23611=_n_smooth_23357(_n_HZ_23344,_n_H_23343,_n_y_23601);
double _n_fade_23612=_n_smooth_23357((_n_H_23343+6.0),(_n_H_23343-4.0),_n_y_23601);
{double _n_x_23613=0.0;
for(;d::truth((_n_x_23613<_n_W_23342));(void)((_n_x_23613++))){d::check_cancel();double _n_k_23614=((_n_r_23600*_n_W_23342)+_n_x_23613);
if(d::truth(d::at(this->_n_land_23375,_n_k_23614))){d::check_cancel();(void)(this->_n_halftone_23370(_n_k_23614,_n_r_23600,_n_x_23613,d::at(this->_n_LR_23376,_n_k_23614),d::at(this->_n_LG_23377,_n_k_23614),d::at(this->_n_LB_23378,_n_k_23614),0.02,1.0,_n_color_23539));
continue;
}
double _n_dx_23615=((_n_x_23613+0.5)-d::at(_n_SUN_23345,0.0));
double _n_X_23616=(((_n_x_23613+0.5)-100.0)/_n_dz_23602);
double _n_p_23617=(((13.0*(_n_Z_23603+(0.05*_n_X_23616)))+(2.2*_n_fbm_23355(((_n_X_23616*0.35)+3.0),(_n_Z_23603*0.4),2.0,0.0)))+(_n_t_23538*0.8));
double _n_wv_23618=std::sin(_n_p_23617);
double _n_slope_23619=std::cos(_n_p_23617);
double _n_sz_23620=((0.11*_n_slope_23619)*_n_clamp_23356((1.4/(13.0*_n_rows_23604))));
double _n_sxl_23621=(0.015*_n_slope_23619);
{double _n_i_23622=0.0;
for(;d::truth((_n_i_23622<double(_n_CHOP_23348.size())));(void)((_n_i_23622++))){d::check_cancel();auto _n_binding_23819=d::at(_n_CHOP_23348,_n_i_23622);
double _n_kx_23623=d::at(_n_binding_23819,0.0);
double _n_kz_23624=d::at(_n_binding_23819,1.0);
double _n_kk_23625=d::at(_n_binding_23819,2.0);
double _n_a_23626=d::at(_n_binding_23819,3.0);
double _n_w_23627=d::at(_n_binding_23819,4.0);
double _n_f_23628=d::at(_n_binding_23819,5.0);
double _n_ph_23629=(((_n_kk_23625*((_n_kx_23623*_n_X_23616)+(_n_kz_23624*_n_Z_23603)))-(_n_w_23627*_n_t_23538))+_n_f_23628);
double _n_c_23630=([&](){auto _n_left_23820=(std::cos(_n_ph_23629)*_n_a_23626);auto _n_right_23821=_n_clamp_23356((1.6/(_n_kk_23625*_n_rows_23604)));return (_n_left_23820*_n_right_23821);})();
(void)(((_n_sz_23620=(_n_sz_23620+(_n_c_23630*_n_kz_23624))),(_n_sxl_23621=(_n_sxl_23621+(_n_c_23630*_n_kx_23623)))));
}}
double _n_ry_23631=d::round((((_n_HZ_23344-1.0)-(_n_dz_23602*0.85))-(70.0*_n_sz_23620)));
(void)((_n_ry_23631=(d::truth((_n_ry_23631<0.0))?0.0:(d::truth((_n_ry_23631>(_n_HZ_23344-1.0)))?(_n_HZ_23344-1.0):_n_ry_23631))));
double _n_rx_23632=d::round((_n_x_23613-(60.0*_n_sxl_23621)));
(void)((_n_rx_23632=(d::truth((_n_rx_23632<0.0))?0.0:(d::truth((_n_rx_23632>(_n_W_23342-1.0)))?(_n_W_23342-1.0):_n_rx_23632))));
double _n_q_23633=((_n_ry_23631*_n_W_23342)+_n_rx_23632);
double _n_rip_23634=_n_noise_23354(((((_n_x_23613*_n_fx_23608)*1.4)+13.0)-(_n_t_23538*0.15)),(((_n_y_23601*_n_fy_23609)*1.1)+(_n_t_23538*0.25)),0.0);
double _n_rf_23635=(_n_fres_23610*(0.5+((1.1*_n_rip_23634)*_n_rip_23634)));
double _n_cr_23636=((((d::at(this->_n_SKR_23390,_n_q_23633)*_n_rf_23635)*0.8)+0.03)-(0.01*_n_depth_23611));
double _n_cg_23637=(((d::at(this->_n_SKG_23391,_n_q_23633)*_n_rf_23635)*0.75)+0.022);
double _n_cb_23638=(((d::at(this->_n_SKB_23392,_n_q_23633)*_n_rf_23635)+0.095)+(0.03*_n_depth_23611));
double _n_n_23639=([&](){auto _n_left_23822=(0.55*_n_noise_23354(((_n_x_23613*_n_fx_23608)+(_n_t_23538*0.3)),(((_n_y_23601*_n_fy_23609)*1.3)-(_n_t_23538*0.4)),0.0));auto _n_right_23823=(0.45*_n_noise_23354((((_n_x_23613*_n_fx_23608)*1.7)-(_n_t_23538*0.4)),((((_n_y_23601*_n_fy_23609)*2.0)+(_n_t_23538*0.3))+40.0),0.0));return (_n_left_23822+_n_right_23823);})();
double _n_wave_23640=std::floor((_n_p_23617/(2.0*ascii::PI)));
double _n_crest_23641=([&](){auto _n_left_23824=(std::pow((0.5+(0.5*_n_wv_23618)),7.0)*_n_swellAmt_23605);auto _n_right_23825=([&](){auto _n_argument_23826=0.4;auto _n_argument_23827=0.65;auto _n_argument_23828=_n_noise_23354(((_n_X_23616*2.5)+7.0),(_n_wave_23640*3.7),0.0);return _n_smooth_23357(_n_argument_23826,_n_argument_23827,_n_argument_23828);})();return (_n_left_23824*_n_right_23825);})();
double _n_path_23642=std::exp((-d::number(std::pow((_n_dx_23615/_n_pw_23607),2.0))));
double _n_soft_23643=std::exp((-d::number(std::pow((_n_dx_23615/(_n_pw_23607*1.6)),2.0))));
if(d::truth((_n_slope_23619>0.0))){d::check_cancel();double _n_d_23644=(1.0-((0.7*_n_swellAmt_23605)*_n_slope_23619));
(void)((((_n_cr_23636=(_n_cr_23636*_n_d_23644)),(_n_cg_23637=(_n_cg_23637*_n_d_23644))),(_n_cb_23638=(_n_cb_23638*_n_d_23644))));
}
double _n_th_23645=(0.84-((0.3*_n_path_23642)*(0.45+(0.55*_n_hot_23606))));
double _n_glint_23646=((_n_smooth_23357(_n_th_23645,(_n_th_23645+0.08),_n_n_23639)*(0.25+(0.75*_n_path_23642)))*_n_soft_23643);
double _n_white_23647=((_n_path_23642*_n_path_23642)*_n_smooth_23357((_n_th_23645+0.04),(_n_th_23645+0.2),_n_n_23639));
(void)((_n_cr_23636=(_n_cr_23636+(((0.2*_n_soft_23643)*(0.4+_n_hot_23606))+(_n_glint_23646*1.1)))));
(void)((_n_cg_23637=(_n_cg_23637+(((0.1*_n_soft_23643)*(0.4+_n_hot_23606))+(_n_glint_23646*((0.55+(0.3*_n_hot_23606))+(0.35*_n_white_23647)))))));
(void)((_n_cb_23638=(_n_cb_23638+((0.04*_n_soft_23643)+(_n_glint_23646*((0.2+(0.25*_n_hot_23606))+(0.45*_n_white_23647)))))));
double _n_catchL_23648=((_n_crest_23641*(0.15+(0.85*_n_soft_23643)))*(0.6+(0.6*_n_n_23639)));
(void)((((_n_cr_23636=(_n_cr_23636+(_n_catchL_23648*0.95))),(_n_cg_23637=(_n_cg_23637+(_n_catchL_23648*_n_mix_23358(0.3,0.7,_n_soft_23643))))),(_n_cb_23638=(_n_cb_23638+(_n_catchL_23648*_n_mix_23358(0.5,0.3,_n_soft_23643))))));
double _n_dash_23649=([&](){auto _n_argument_23829=0.4;auto _n_argument_23830=0.7;auto _n_argument_23831=_n_noise_23354(((_n_x_23613*0.18)+(_n_t_23538*0.25)),((_n_y_23601*0.9)-(_n_t_23538*0.5)),0.0);return _n_smooth_23357(_n_argument_23829,_n_argument_23830,_n_argument_23831);})();
double _n_col_23650=(([&](){auto _n_left_23832=(([&](){auto _n_left_23834=std::exp((-d::number(std::pow((_n_dx_23615/(1.0+(_n_dz_23602*0.22))),2.0))));auto _n_right_23835=std::exp(((-d::number(_n_dz_23602))/5.0));return (_n_left_23834*_n_right_23835);})()*(0.6+(0.4*_n_n_23639)));auto _n_right_23833=_n_smooth_23357(0.0,3.0,_n_dz_23602);return (_n_left_23832*_n_right_23833);})()*_n_dash_23649);
(void)((((_n_cr_23636=(_n_cr_23636+_n_col_23650)),(_n_cg_23637=(_n_cg_23637+(_n_col_23650*0.8)))),(_n_cb_23638=(_n_cb_23638+(_n_col_23650*0.45)))));
if((d::truth((_n_x_23613<(this->_n_LANDW_23373+4.0)))&&d::truth((_n_dz_23602<26.0)))){d::check_cancel();double _n_xs_23651=((_n_x_23613+0.5)+(1.3*std::sin((((_n_y_23601*1.1)+(_n_t_23538*1.2))+(_n_x_23613*0.05)))));
double _n_ix_23652=([&](){auto _n_argument_23836=0.0;auto _n_argument_23837=d::minimum({(this->_n_LANDW_23373-1.0),double(d::i32(_n_xs_23651)|d::i32(0.0))});return d::maximum({_n_argument_23836,_n_argument_23837});})();
double _n_ft_23653=_n_shore_23363((_n_ix_23652+0.5));
if(d::truth((_n_y_23601>_n_ft_23653))){d::check_cancel();double _n_my_23654=std::floor(((2.0*_n_ft_23653)-_n_y_23601));
if((d::truth((_n_my_23654>=0.0))&&d::truth((_n_my_23654<this->_n_LANDH_23374)))){d::check_cancel();double _n_m_23655=((_n_my_23654*_n_W_23342)+_n_ix_23652);
if(d::truth(d::at(this->_n_land_23375,_n_m_23655))){d::check_cancel();double _n_a_23656=(0.8*_n_smooth_23357((_n_ft_23653+24.0),(_n_ft_23653+4.0),_n_y_23601));
(void)((((_n_cr_23636=_n_mix_23358(_n_cr_23636,((d::at(this->_n_LR_23376,_n_m_23655)*0.8)+0.02),_n_a_23656)),(_n_cg_23637=_n_mix_23358(_n_cg_23637,((d::at(this->_n_LG_23377,_n_m_23655)*0.7)+0.015),_n_a_23656))),(_n_cb_23638=_n_mix_23358(_n_cb_23638,((d::at(this->_n_LB_23378,_n_m_23655)*0.85)+0.05),_n_a_23656))));
}
}
double _n_foam_23657=([&](){auto _n_left_23838=_n_smooth_23357((_n_ft_23653+1.6),(_n_ft_23653+0.3),_n_y_23601);auto _n_right_23839=([&](){auto _n_argument_23840=0.45;auto _n_argument_23841=0.8;auto _n_argument_23842=_n_noise_23354(((_n_x_23613*0.5)-(_n_t_23538*0.4)),(_n_t_23538*0.3),0.0);return _n_smooth_23357(_n_argument_23840,_n_argument_23841,_n_argument_23842);})();return (_n_left_23838*_n_right_23839);})();
(void)((((_n_cr_23636=(_n_cr_23636+(0.5*_n_foam_23657))),(_n_cg_23637=(_n_cg_23637+(0.3*_n_foam_23657)))),(_n_cb_23638=(_n_cb_23638+(0.35*_n_foam_23657)))));
}
}
if((((d::truth((_n_dz_23602>2.5))&&d::truth((_n_dz_23602<14.0)))&&d::truth((_n_x_23613>(_n_BOAT_23347-8.0))))&&d::truth((_n_x_23613<(_n_BOAT_23347+8.0))))){d::check_cancel();double _n_ix_23658=double(d::i32(((_n_x_23613+0.5)+(0.9*std::sin(((_n_y_23601*1.3)+(_n_t_23538*1.6))))))|d::i32(0.0));
double _n_m_23659=((std::floor(((2.0*(_n_HZ_23344+3.0))-_n_y_23601))*_n_W_23342)+_n_ix_23658);
if(d::truth((d::at(this->_n_land_23375,_n_m_23659)==3.0))){d::check_cancel();double _n_a_23660=((0.7*_n_smooth_23357((_n_HZ_23344+14.0),(_n_HZ_23344+4.0),_n_y_23601))*(0.6+(0.4*_n_rip_23634)));
(void)((((_n_cr_23636=_n_mix_23358(_n_cr_23636,0.04,_n_a_23660)),(_n_cg_23637=_n_mix_23358(_n_cg_23637,0.03,_n_a_23660))),(_n_cb_23638=_n_mix_23358(_n_cb_23638,0.1,_n_a_23660))));
}
}
if(d::truth((_n_dz_23602<1.5))){d::check_cancel();(void)((((_n_cr_23636=(_n_cr_23636*0.55)),(_n_cg_23637=(_n_cg_23637*0.55))),(_n_cb_23638=(_n_cb_23638*0.55))));
}
(void)(this->_n_halftone_23370(_n_k_23614,_n_r_23600,_n_x_23613,_n_cr_23636,_n_cg_23637,_n_cb_23638,0.18,_n_fade_23612,_n_color_23539));
}}
}}
d::Array<d::String,false> _n_lines_23661=d::Array<d::String,false>{};
{double _n_r_23662=0.0;
for(;d::truth((_n_r_23662<_n_H_23343));(void)((_n_r_23662++))){d::check_cancel();(void)(_n_lines_23661.push(d::join(this->_n_out_23367.slice((_n_r_23662*_n_W_23342),((_n_r_23662+1.0)*_n_W_23342)),d::String(u""))));
}}
return d::join(_n_lines_23661,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("ocean-sunset").cols)*ascii::catalog_meta("ocean-sunset").rows);auto _env=std::make_shared<_n_Record_23663>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &ocean_sunset_meta(){return catalog_meta("ocean-sunset");}
std::unique_ptr<Piece> make_ocean_sunset(const AsciiPieceOptions &o){return std::make_unique<Native_ocean_sunset>(o);}
}
