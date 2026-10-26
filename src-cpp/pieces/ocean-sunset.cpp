// Direct, statically typed C++ from src/pieces/ocean-sunset.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_23340;
struct _n_Record_23662;
struct _n_Record_23340{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_23340> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23340>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_23662{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_23662> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23662>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_23352(double _a0,double _a1);
double _n_noise_23353(double _a0,double _a1,double _a2);
double _n_fbm_23354(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_23355(double _a0);
double _n_smooth_23356(double _a0,double _a1,double _a2);
double _n_mix_23357(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_23358(d::String _a0);
void _n_gradient_23360(double _a0,d::Array<double,false> _a1);
double _n_ridge_23361(double _a0);
double _n_shore_23362(double _a0);
double _n_stack_23363(double _a0);
std::shared_ptr<_n_Record_23340> _n_meta_23339=[](){return ([&](){auto _n_object_23665=std::make_shared<_n_Record_23340>();_n_object_23665->_p_name=d::String(u"ocean sunset");_n_object_23665->_p_category=d::String(u"scenes");_n_object_23665->_p_note=d::String(u"the sun sets past a pine headland, lit cloud, glitter on rolling sea");_n_object_23665->_p_cols=200.0;_n_object_23665->_p_rows=100.0;_n_object_23665->_p_cell=1.0;_n_object_23665->_p_fps=15.0;_n_object_23665->_p_ground=d::String(u"#0b0817");_n_object_23665->_p_palette=d::Array<d::String,false>{d::String(u"#140f2c"),d::String(u"#1e1640"),d::String(u"#2b1c52"),d::String(u"#3d2266"),d::String(u"#552a74"),d::String(u"#6e2c78"),d::String(u"#90327c"),d::String(u"#b23c7c"),d::String(u"#d24f7a"),d::String(u"#ea6a78"),d::String(u"#c2306a"),d::String(u"#ff5d8f"),d::String(u"#ff8a9a"),d::String(u"#7a2456"),d::String(u"#f05d5e"),d::String(u"#f2804f"),d::String(u"#f99a43"),d::String(u"#ffb44a"),d::String(u"#ffcd62"),d::String(u"#ffe39a"),d::String(u"#fff5d8"),d::String(u"#a8323c"),d::String(u"#d2453c"),d::String(u"#e8603e"),d::String(u"#2f1a3e"),d::String(u"#47234f"),d::String(u"#63305c"),d::String(u"#874266"),d::String(u"#ac5b70"),d::String(u"#ff9e86"),d::String(u"#ffc4a2"),d::String(u"#ffdcc0"),d::String(u"#0e1230"),d::String(u"#171a46"),d::String(u"#232059"),d::String(u"#33286a"),d::String(u"#4a2f78"),d::String(u"#1c2a5c"),d::String(u"#2e4078"),d::String(u"#7d3f8f"),d::String(u"#a24f98"),d::String(u"#c8649e"),d::String(u"#de8bb5")};return _n_object_23665;})();}();
const double _n_W_23341=[](){return 200.0;}();
const double _n_H_23342=[](){return 100.0;}();
const double _n_HZ_23343=[](){return 56.0;}();
d::Array<double,false> _n_SUN_23344=[](){return d::Array<double,false>{134.0,(_n_HZ_23343-4.5)};}();
const double _n_SR_23345=[](){return 8.5;}();
const double _n_BOAT_23346=[](){return 112.0;}();
d::Array<d::Array<double,false>,false> _n_CHOP_23347=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(0.45)),0.89,22.0,0.07,2.1,0.4},d::Array<double,false>{0.5,0.87,37.0,0.06,2.9,2.1},d::Array<double,false>{(-d::number(0.15)),0.99,61.0,0.05,3.7,4.4},d::Array<double,false>{0.3,0.95,97.0,0.04,4.6,1.3}};}();
const d::String _n_DOTS_23348=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_23349=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_23350=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_23392=_a0;
return ((_n_v_23392/16.0)-0.47);});}();
d::Array<d::Array<double,false>,false> _n_PINES_23351=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.5,10.0,2.6},d::Array<double,false>{8.0,13.0,3.0},d::Array<double,false>{13.0,18.0,3.6},d::Array<double,false>{18.5,11.0,2.8},d::Array<double,false>{24.0,20.0,3.8},d::Array<double,false>{30.0,12.0,2.9},d::Array<double,false>{35.0,8.0,2.3},d::Array<double,false>{39.5,5.0,1.8}};}();
d::Array<d::Array<double,false>,false> _n_STOPS_23359=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.08,0.1,0.3},d::Array<double,false>{0.3,0.15,0.1,0.34},d::Array<double,false>{0.52,0.4,0.15,0.4},d::Array<double,false>{0.72,0.68,0.27,0.4},d::Array<double,false>{0.88,0.8,0.32,0.4},d::Array<double,false>{1.0,0.88,0.4,0.4}};}();
double _n_hash_23352(double _a0,double _a1){double _n_x_23393=_a0;
double _n_y_23394=_a1;
{
double _n_h_23395=([&](){auto _n_left_23666=d::imul(double(d::i32(_n_x_23393)|d::i32(0.0)),374761393.0);auto _n_right_23667=d::imul(double(d::i32(_n_y_23394)|d::i32(0.0)),668265263.0);return (_n_left_23666+_n_right_23667);})();
(void)((_n_h_23395=d::imul(double(d::i32(_n_h_23395)^d::i32(double(d::u32(_n_h_23395)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_23395)^d::i32(double(d::u32(_n_h_23395)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_23353(double _a0,double _a1,double _a2){double _n_x_23396=_a0;
double _n_y_23397=_a1;
double _n_period_23398=_a2;
{
double _n_xi_23399=std::floor(_n_x_23396);
double _n_yi_23400=std::floor(_n_y_23397);
double _n_fx_23401=(_n_x_23396-_n_xi_23399);
double _n_fy_23402=(_n_y_23397-_n_yi_23400);
double _n_u_23403=((_n_fx_23401*_n_fx_23401)*(3.0-(2.0*_n_fx_23401)));
double _n_v_23404=((_n_fy_23402*_n_fy_23402)*(3.0-(2.0*_n_fy_23402)));
double _n_x0_23405=_n_xi_23399;
double _n_x1_23406=(_n_xi_23399+1.0);
if(d::truth(_n_period_23398)){d::check_cancel();(void)((_n_x0_23405=d::mod((d::mod(_n_xi_23399,_n_period_23398)+_n_period_23398),_n_period_23398)));
(void)((_n_x1_23406=d::mod((_n_x0_23405+1.0),_n_period_23398)));
}
double _n_a_23407=_n_hash_23352(_n_x0_23405,_n_yi_23400);
double _n_b_23408=_n_hash_23352(_n_x1_23406,_n_yi_23400);
double _n_c_23409=_n_hash_23352(_n_x0_23405,(_n_yi_23400+1.0));
double _n_d_23410=_n_hash_23352(_n_x1_23406,(_n_yi_23400+1.0));
return (((_n_a_23407+((_n_b_23408-_n_a_23407)*_n_u_23403))+((_n_c_23409-_n_a_23407)*_n_v_23404))+(((((_n_a_23407-_n_b_23408)-_n_c_23409)+_n_d_23410)*_n_u_23403)*_n_v_23404));

}
}

double _n_fbm_23354(double _a0,double _a1,double _a2,double _a3){double _n_x_23411=_a0;
double _n_y_23412=_a1;
double _n_octaves_23413=_a2;
double _n_period_23414=_a3;
{
double _n_s_23415=0.0;
double _n_n_23416=0.0;
double _n_amp_23417=0.5;
double _n_f_23418=1.0;
{double _n_i_23419=0.0;
for(;d::truth((_n_i_23419<_n_octaves_23413));(void)((_n_i_23419++))){d::check_cancel();(void)((_n_s_23415=(_n_s_23415+(_n_amp_23417*_n_noise_23353((_n_x_23411*_n_f_23418),(_n_y_23412*_n_f_23418),(_n_period_23414*_n_f_23418))))));
(void)((_n_n_23416=(_n_n_23416+_n_amp_23417)));
(void)((_n_amp_23417=(_n_amp_23417*0.5)));
(void)((_n_f_23418=(_n_f_23418*2.0)));
}}
return (_n_s_23415/_n_n_23416);

}
}

double _n_clamp_23355(double _a0){double _n_v_23420=_a0;
return (d::truth((_n_v_23420<0.0))?0.0:(d::truth((_n_v_23420>1.0))?1.0:_n_v_23420));}

double _n_smooth_23356(double _a0,double _a1,double _a2){double _n_a_23421=_a0;
double _n_b_23422=_a1;
double _n_v_23423=_a2;
{
double _n_k_23424=_n_clamp_23355(((_n_v_23423-_n_a_23421)/(_n_b_23422-_n_a_23421)));
return ((_n_k_23424*_n_k_23424)*(3.0-(2.0*_n_k_23424)));

}
}

double _n_mix_23357(double _a0,double _a1,double _a2){double _n_a_23425=_a0;
double _n_b_23426=_a1;
double _n_k_23427=_a2;
return (_n_a_23425+((_n_b_23426-_n_a_23425)*_n_k_23427));}

d::Array<double,false> _n_hex_23358(d::String _a0){d::String _n_s_23428=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_23429=_a0;
return (([&](){auto _n_argument_23668=d::slice(_n_s_23428,_n_i_23429,(_n_i_23429+2.0));auto _n_argument_23669=16.0;return d::parseInt(_n_argument_23668,_n_argument_23669);})()/255.0);});}

void _n_gradient_23360(double _a0,d::Array<double,false> _a1){double _n_v_23430=_a0;
d::Array<double,false> _n_out_23431=_a1;
{
double _n_i_23432=1.0;
while((d::truth((_n_i_23432<(double(_n_STOPS_23359.size())-1.0)))&&d::truth((_n_v_23430>d::at(d::at(_n_STOPS_23359,_n_i_23432),0.0))))){d::check_cancel();(void)((_n_i_23432++));
}
d::Array<double,false> _n_a_23433=d::at(_n_STOPS_23359,(_n_i_23432-1.0));
d::Array<double,false> _n_b_23434=d::at(_n_STOPS_23359,_n_i_23432);
double _n_k_23435=_n_clamp_23355(((_n_v_23430-d::at(_n_a_23433,0.0))/(d::at(_n_b_23434,0.0)-d::at(_n_a_23433,0.0))));
(void)(((([&](){auto&& _n_array_23670=_n_out_23431;auto _n_index_23671=0.0;auto _n_value_23672=_n_mix_23357(d::at(_n_a_23433,1.0),d::at(_n_b_23434,1.0),_n_k_23435);d::put(_n_array_23670,_n_index_23671,_n_value_23672);return _n_value_23672;})(),([&](){auto&& _n_array_23673=_n_out_23431;auto _n_index_23674=1.0;auto _n_value_23675=_n_mix_23357(d::at(_n_a_23433,2.0),d::at(_n_b_23434,2.0),_n_k_23435);d::put(_n_array_23673,_n_index_23674,_n_value_23675);return _n_value_23675;})()),([&](){auto&& _n_array_23676=_n_out_23431;auto _n_index_23677=2.0;auto _n_value_23678=_n_mix_23357(d::at(_n_a_23433,3.0),d::at(_n_b_23434,3.0),_n_k_23435);d::put(_n_array_23676,_n_index_23677,_n_value_23678);return _n_value_23678;})()));

}
}

double _n_ridge_23361(double _a0){double _n_x_23436=_a0;
return ([&](){auto _n_left_23679=([&](){auto _n_left_23681=((_n_HZ_23343+2.5)-(11.0*([&](){auto _n_argument_23683=_n_smooth_23356(54.0,32.0,_n_x_23436);auto _n_argument_23684=0.7;return std::pow(_n_argument_23683,_n_argument_23684);})()));auto _n_right_23682=(2.4*std::exp((-d::number(std::pow(((_n_x_23436-19.0)/9.0),2.0)))));return (_n_left_23681-_n_right_23682);})();auto _n_right_23680=(2.0*_n_fbm_23354((_n_x_23436*0.21),3.3,3.0,0.0));return (_n_left_23679-_n_right_23680);})();}

double _n_shore_23362(double _a0){double _n_x_23437=_a0;
return ((_n_HZ_23343+1.5)+(5.0*_n_smooth_23356(54.0,4.0,_n_x_23437)));}

double _n_stack_23363(double _a0){double _n_x_23438=_a0;
return ((d::truth((_n_x_23438>52.0))&&d::truth((_n_x_23438<58.0)))?(((_n_HZ_23343-3.5)-(1.6*_n_fbm_23354((_n_x_23438*0.6),8.1,2.0,0.0)))+(2.5*std::pow(((_n_x_23438-55.0)/3.0),4.0))):1000000000.0);}

struct Native_ocean_sunset final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_23364{};
double _n_N_23365{};
d::Array<d::String,false> _n_out_23366{};
d::Array<uint8_t,true> _n_lut_23367{};
d::Array<float,true> _n_sky_23370{};
d::Array<double,false> _n_g_23371{};
double _n_LANDW_23372{};
double _n_LANDH_23373{};
d::Array<uint8_t,true> _n_land_23374{};
d::Array<float,true> _n_LR_23375{};
d::Array<float,true> _n_LG_23376{};
d::Array<float,true> _n_LB_23377{};
d::Array<float,true> _n_edge_23378{};
double _n_U_23379{};
double _n_V_23380{};
d::Array<float,true> _n_deck_23381{};
d::Array<float,true> _n_deckLit_23382{};
d::Array<float,true> _n_thinTop_23384{};
double _n_CW_23385{};
d::Array<float,true> _n_loCover_23386{};
d::Array<float,true> _n_loLit_23387{};
d::Array<float,true> _n_SKR_23389{};
d::Array<float,true> _n_SKG_23390{};
d::Array<float,true> _n_SKB_23391{};
std::function<d::String(double,std::shared_ptr<_n_Record_23662>)> _render;
double _n_nearest_23368(double _a0,double _a1,double _a2){double _n_r_23439=_a0;
double _n_g_23440=_a1;
double _n_b_23441=_a2;
{
double _n_k_23442=([&](){auto _n_left_23842=([&](){auto _n_left_23844=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_23439*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_23845=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_23440*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_23844)|d::i32(_n_right_23845));})();auto _n_right_23843=d::minimum({31.0,double(d::i32((_n_b_23441*31.99))|d::i32(0.0))});return double(d::i32(_n_left_23842)|d::i32(_n_right_23843));})();
if(d::truth((d::at(this->_n_lut_23367,_n_k_23442)!=255.0))){d::check_cancel();return d::at(this->_n_lut_23367,_n_k_23442);
}
double _n_best_23443=0.0;
double _n_bd_23444=1000000000.0;
{double _n_i_23445=0.0;
for(;d::truth((_n_i_23445<double(this->_n_P_23364.size())));(void)((_n_i_23445++))){d::check_cancel();double _n_dr_23446=(d::at(d::at(this->_n_P_23364,_n_i_23445),0.0)-_n_r_23439);
double _n_dg_23447=(d::at(d::at(this->_n_P_23364,_n_i_23445),1.0)-_n_g_23440);
double _n_db_23448=(d::at(d::at(this->_n_P_23364,_n_i_23445),2.0)-_n_b_23441);
double _n_d_23449=((((0.3*_n_dr_23446)*_n_dr_23446)+((0.5*_n_dg_23447)*_n_dg_23447))+((0.2*_n_db_23448)*_n_db_23448));
if(d::truth((_n_d_23449<_n_bd_23444))){d::check_cancel();(void)(((_n_bd_23444=_n_d_23449),(_n_best_23443=_n_i_23445)));
}
}}
return ([&](){auto&& _n_array_23846=this->_n_lut_23367;auto _n_index_23847=_n_k_23442;auto _n_value_23848=_n_best_23443;d::put(_n_array_23846,_n_index_23847,_n_value_23848);return _n_value_23848;})();

}
}

void _n_halftone_23369(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,std::optional<d::Array<uint8_t,true>> _a8){double _n_k_23450=_a0;
double _n_r_23451=_a1;
double _n_x_23452=_a2;
double _n_cr_23453=_a3;
double _n_cg_23454=_a4;
double _n_cb_23455=_a5;
double _n_floor_23456=_a6;
double _n_fade_23457=_a7;
std::optional<d::Array<uint8_t,true>> _n_color_23458=_a8;
{
double _n_peak_23459=d::maximum({_n_cr_23453,_n_cg_23454,_n_cb_23455,0.0001});
double _n_level_23460=(_n_clamp_23355((_n_floor_23456+(((1.0-_n_floor_23456)*std::pow(_n_peak_23459,0.85))*0.95)))*_n_fade_23457);
double _n_step_23461=([&](){auto _n_argument_23849=0.0;auto _n_argument_23850=([&](){auto _n_argument_23851=3.0;auto _n_argument_23852=d::round(((_n_level_23460*3.0)+d::at(_n_BAYER_23350,((double(d::i32(_n_r_23451)&d::i32(3.0))*4.0)+double(d::i32(_n_x_23452)&d::i32(3.0))))));return d::minimum({_n_argument_23851,_n_argument_23852});})();return d::maximum({_n_argument_23849,_n_argument_23850});})();
(void)(([&](){auto&& _n_array_23853=this->_n_out_23366;auto _n_index_23854=_n_k_23450;auto _n_value_23855=d::at(_n_DOTS_23348,_n_step_23461);d::put(_n_array_23853,_n_index_23854,_n_value_23855);return _n_value_23855;})());
if(d::truth(_n_color_23458)){d::check_cancel();double _n_want_23462=(d::truth(_n_step_23461)?d::minimum({1.0,((_n_level_23460+0.06)/d::at(_n_COVER_23349,_n_step_23461))}):0.0);
double _n_s_23463=(((0.3+(0.7*_n_want_23462))*(0.4+(0.6*_n_smooth_23356(0.14,0.5,_n_level_23460))))/_n_peak_23459);
(void)(([&](){auto&& _n_array_23856=d::read(_n_color_23458);auto _n_index_23857=_n_k_23450;auto _n_value_23858=([&](){auto _n_argument_23859=_n_clamp_23355((_n_cr_23453*_n_s_23463));auto _n_argument_23860=_n_clamp_23355((_n_cg_23454*_n_s_23463));auto _n_argument_23861=_n_clamp_23355((_n_cb_23455*_n_s_23463));return this->_n_nearest_23368(_n_argument_23859,_n_argument_23860,_n_argument_23861);})();d::put(_n_array_23856,_n_index_23857,_n_value_23858);return _n_value_23858;})());
}

}
}

double _n_deckAt_23383(double _a0,double _a1){double _n_u_23519=_a0;
double _n_v_23520=_a1;
{
double _n_q_23521=_n_fbm_23354((_n_u_23519*0.0125),(_n_v_23520*0.06),2.0,8.0);
double _n_patch_23522=_n_fbm_23354((_n_u_23519*0.00625),((_n_v_23520*0.03)+7.0),2.0,4.0);
return (_n_fbm_23354(((_n_u_23519*0.040625)+(_n_q_23521*1.6)),(_n_v_23520*0.3),5.0,26.0)+(0.25*(_n_patch_23522-0.5)));

}
}

double _n_lower_23388(double _a0,double _a1){double _n_x_23528=_a0;
double _n_y_23529=_a1;
{
double _n_b_23530=_n_fbm_23354((_n_x_23528/40.0),(_n_y_23529*0.3),4.0,(this->_n_CW_23385/40.0));
double _n_gaps_23531=_n_fbm_23354((_n_x_23528/120.0),5.0,2.0,(this->_n_CW_23385/120.0));
return ([&](){auto _n_left_23862=(((_n_b_23530+0.01)+(0.5*(_n_gaps_23531-0.5)))-(0.35*_n_smooth_23356((_n_HZ_23343-14.0),(_n_HZ_23343-20.0),_n_y_23529)));auto _n_right_23863=(0.25*_n_smooth_23356((_n_HZ_23343-4.0),(_n_HZ_23343-1.0),_n_y_23529));return (_n_left_23862-_n_right_23863);})();

}
}

explicit Native_ocean_sunset(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_23364=d::map(_n_meta_23339->_p_palette,_n_hex_23358);
this->_n_N_23365=(_n_W_23341*_n_H_23342);
this->_n_out_23366=d::Array<d::String,false>(size_t(this->_n_N_23365));
this->_n_lut_23367=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_sky_23370=d::Array<float,true>(size_t(((_n_HZ_23343*_n_W_23341)*3.0)));
this->_n_g_23371=d::Array<double,false>{0.0,0.0,0.0};
{double _n_r_23464=0.0;
for(;d::truth((_n_r_23464<_n_HZ_23343));(void)((_n_r_23464++))){d::check_cancel();{double _n_x_23465=0.0;
for(;d::truth((_n_x_23465<_n_W_23341));(void)((_n_x_23465++))){d::check_cancel();double _n_y_23466=(_n_r_23464+0.5);
double _n_dx_23467=((_n_x_23465+0.5)-d::at(_n_SUN_23344,0.0));
double _n_dy_23468=((_n_y_23466-d::at(_n_SUN_23344,1.0))*1.6);
double _n_d_23469=std::sqrt(((_n_dx_23467*_n_dx_23467)+(_n_dy_23468*_n_dy_23468)));
double _n_near_23470=std::exp(((-d::number(std::fabs(_n_dx_23467)))/62.0));
double _n_v_23471=(_n_y_23466/_n_HZ_23343);
(void)(([&](){auto _n_argument_23685=std::pow(_n_v_23471,(1.0+(0.12*(1.0-_n_near_23470))));auto _n_argument_23686=this->_n_g_23371;return _n_gradient_23360(_n_argument_23685,_n_argument_23686);})());
double _n_warm_23472=(([&](){auto _n_left_23687=std::exp(((-d::number(std::fabs(_n_dx_23467)))/36.0));auto _n_right_23688=_n_smooth_23356(0.45,1.0,_n_v_23471);return (_n_left_23687*_n_right_23688);})()*0.9);
(void)(((([&](){auto&& _n_array_23689=this->_n_g_23371;auto _n_index_23690=0.0;auto _n_value_23691=([&](){auto _n_argument_23692=d::at(this->_n_g_23371,0.0);auto _n_argument_23693=(1.0*_n_mix_23357(0.6,1.0,_n_v_23471));auto _n_argument_23694=_n_warm_23472;return _n_mix_23357(_n_argument_23692,_n_argument_23693,_n_argument_23694);})();d::put(_n_array_23689,_n_index_23690,_n_value_23691);return _n_value_23691;})(),([&](){auto&& _n_array_23695=this->_n_g_23371;auto _n_index_23696=1.0;auto _n_value_23697=([&](){auto _n_argument_23698=d::at(this->_n_g_23371,1.0);auto _n_argument_23699=(0.64*_n_mix_23357(0.6,1.0,_n_v_23471));auto _n_argument_23700=_n_warm_23472;return _n_mix_23357(_n_argument_23698,_n_argument_23699,_n_argument_23700);})();d::put(_n_array_23695,_n_index_23696,_n_value_23697);return _n_value_23697;})()),([&](){auto&& _n_array_23701=this->_n_g_23371;auto _n_index_23702=2.0;auto _n_value_23703=_n_mix_23357(d::at(this->_n_g_23371,2.0),0.3,_n_warm_23472);d::put(_n_array_23701,_n_index_23702,_n_value_23703);return _n_value_23703;})()));
double _n_fall_23473=([&](){auto _n_argument_23704=1.0;auto _n_argument_23705=(0.86+(0.14*_n_near_23470));auto _n_argument_23706=_n_smooth_23356(0.6,1.0,_n_v_23471);return _n_mix_23357(_n_argument_23704,_n_argument_23705,_n_argument_23706);})();
double _n_glow_23474=([&](){auto _n_left_23707=(std::exp(((-d::number(_n_d_23469))/40.0))*0.15);auto _n_right_23708=(std::exp(((-d::number(_n_d_23469))/9.0))*0.1);return (_n_left_23707+_n_right_23708);})();
double _n_haze_23475=(0.82+(0.36*_n_fbm_23354((_n_x_23465*0.03),(_n_y_23466*0.12),3.0,0.0)));
double _n_k_23476=(((_n_r_23464*_n_W_23341)+_n_x_23465)*3.0);
double _n_vig_23477=(((1.0-(0.08*([&](){auto _n_argument_23709=(std::fabs(((_n_x_23465+0.5)-100.0))/100.0);auto _n_argument_23710=2.0;return std::pow(_n_argument_23709,_n_argument_23710);})()))*_n_haze_23475)*_n_fall_23473);
(void)(([&](){auto&& _n_array_23711=this->_n_sky_23370;auto _n_index_23712=_n_k_23476;auto _n_value_23713=(((d::at(this->_n_g_23371,0.0)*(0.85+(0.15*_n_near_23470)))*_n_vig_23477)+_n_glow_23474);d::put(_n_array_23711,_n_index_23712,_n_value_23713);return _n_value_23713;})());
(void)(([&](){auto&& _n_array_23714=this->_n_sky_23370;auto _n_index_23715=(_n_k_23476+1.0);auto _n_value_23716=(((d::at(this->_n_g_23371,1.0)*(0.65+(0.35*_n_near_23470)))*_n_vig_23477)+(_n_glow_23474*0.7));d::put(_n_array_23714,_n_index_23715,_n_value_23716);return _n_value_23716;})());
(void)(([&](){auto&& _n_array_23717=this->_n_sky_23370;auto _n_index_23718=(_n_k_23476+2.0);auto _n_value_23719=(((d::at(this->_n_g_23371,2.0)*(1.1-(0.2*_n_near_23470)))*_n_vig_23477)+(_n_glow_23474*0.3));d::put(_n_array_23717,_n_index_23718,_n_value_23719);return _n_value_23719;})());
}}
}}
this->_n_LANDW_23372=60.0;
this->_n_LANDH_23373=(_n_HZ_23343+10.0);
this->_n_land_23374=d::Array<uint8_t,true>(size_t(this->_n_N_23365));
this->_n_LR_23375=d::Array<float,true>(size_t(this->_n_N_23365));
this->_n_LG_23376=d::Array<float,true>(size_t(this->_n_N_23365));
this->_n_LB_23377=d::Array<float,true>(size_t(this->_n_N_23365));
this->_n_edge_23378=d::Array<float,true>(size_t(this->_n_LANDH_23373)).fill((-d::number(1.0)));
{double _n_r_23478=0.0;
for(;d::truth((_n_r_23478<this->_n_LANDH_23373));(void)((_n_r_23478++))){d::check_cancel();double _n_y_23479=(_n_r_23478+0.5);
{double _n_x_23480=0.0;
for(;d::truth((_n_x_23480<this->_n_LANDW_23372));(void)((_n_x_23480++))){d::check_cancel();if((d::truth((_n_y_23479>=_n_ridge_23361((_n_x_23480+0.5))))&&d::truth((_n_y_23479<_n_shore_23362((_n_x_23480+0.5)))))){d::check_cancel();(void)(([&](){auto&& _n_array_23720=this->_n_edge_23378;auto _n_index_23721=_n_r_23478;auto _n_value_23722=_n_x_23480;d::put(_n_array_23720,_n_index_23721,_n_value_23722);return _n_value_23722;})());
}
}}
}}
{double _n_r_23481=0.0;
for(;d::truth((_n_r_23481<this->_n_LANDH_23373));(void)((_n_r_23481++))){d::check_cancel();double _n_y_23482=(_n_r_23481+0.5);
{double _n_x_23483=0.0;
for(;d::truth((_n_x_23483<this->_n_LANDW_23372));(void)((_n_x_23483++))){d::check_cancel();double _n_k_23484=((_n_r_23481*_n_W_23341)+_n_x_23483);
double _n_xc_23485=(_n_x_23483+0.5);
double _n_t0_23486=_n_ridge_23361(_n_xc_23485);
double _n_st_23487=_n_stack_23363(_n_xc_23485);
double _n_cr_23488{};
double _n_cg_23489{};
double _n_cb_23490{};
if((d::truth(([&]()->bool{auto _n_logical_23723=(_n_y_23482>=_n_t0_23486);return d::truth(_n_logical_23723)?(_n_y_23482<_n_shore_23362(_n_xc_23485)):_n_logical_23723;})())||d::truth(([&]()->bool{auto _n_logical_23724=(_n_y_23482>=_n_st_23487);return d::truth(_n_logical_23724)?(_n_y_23482<(_n_HZ_23343+1.2)):_n_logical_23724;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_23725=this->_n_land_23374;auto _n_index_23726=_n_k_23484;auto _n_value_23727=1.0;d::put(_n_array_23725,_n_index_23726,_n_value_23727);return _n_value_23727;})());
bool _n_isStack_23491=(!d::truth(([&]()->bool{auto _n_logical_23728=(_n_y_23482>=_n_t0_23486);return d::truth(_n_logical_23728)?(_n_y_23482<_n_shore_23362(_n_xc_23485)):_n_logical_23728;})()));
double _n_top_23492=(d::truth(_n_isStack_23491)?_n_st_23487:_n_t0_23486);
double _n_s_23493=(0.6+(0.8*_n_fbm_23354((_n_x_23483*0.22),(_n_y_23482*0.7),3.0,0.0)));
(void)((((_n_cr_23488=(0.06*_n_s_23493)),(_n_cg_23489=(0.042*_n_s_23493))),(_n_cb_23490=(0.15*_n_s_23493))));
double _n_facing_23494=_n_clamp_23355((0.4+(d::truth(_n_isStack_23491)?0.5:(([&](){auto _n_left_23729=_n_ridge_23361((_n_xc_23485+1.2));auto _n_right_23730=_n_ridge_23361((_n_xc_23485-1.2));return (_n_left_23729-_n_right_23730);})()*0.45))));
double _n_rim_23495=(_n_smooth_23356((_n_top_23492+2.4),(_n_top_23492+0.4),_n_y_23482)*_n_facing_23494);
double _n_crag_23496=([&](){auto _n_argument_23731=0.35;auto _n_argument_23732=0.75;auto _n_argument_23733=_n_fbm_23354(((_n_x_23483*0.4)+3.0),(_n_y_23482*0.5),3.0,0.0);return _n_smooth_23356(_n_argument_23731,_n_argument_23732,_n_argument_23733);})();
double _n_face_23497=(d::truth(_n_isStack_23491)?(_n_smooth_23356(53.5,57.5,_n_xc_23485)*0.7):(d::truth((d::at(this->_n_edge_23378,_n_r_23481)>30.0))?([&](){auto _n_left_23734=std::exp(((-d::number((d::at(this->_n_edge_23378,_n_r_23481)-_n_x_23483)))/4.0));auto _n_right_23735=_n_smooth_23356((_n_HZ_23343+5.0),(_n_HZ_23343-4.0),_n_y_23482);return (_n_left_23734*_n_right_23735);})():0.0));
double _n_lit_23498=_n_clamp_23355(d::maximum({(_n_rim_23495*0.9),((_n_face_23497*(0.3+(0.7*_n_crag_23496)))*0.75)}));
(void)((((_n_cr_23488=_n_mix_23357(_n_cr_23488,0.95,_n_lit_23498)),(_n_cg_23489=_n_mix_23357(_n_cg_23489,0.38,(_n_lit_23498*0.95)))),(_n_cb_23490=_n_mix_23357(_n_cb_23490,0.3,(_n_lit_23498*0.9)))));
}
for(auto &&_n_item_23736:_n_PINES_23351){d::check_cancel();auto _n_binding_23737=_n_item_23736;
double _n_tx_23499=d::at(_n_binding_23737,0.0);
double _n_th_23500=d::at(_n_binding_23737,1.0);
double _n_tw_23501=d::at(_n_binding_23737,2.0);
{
double _n_tb_23502=_n_ridge_23361(_n_tx_23499);
double _n_dy_23503=(_n_y_23482-(_n_tb_23502-_n_th_23500));
double _n_tier_23504=((_n_dy_23503+(_n_th_23500*0.3))/2.4);
double _n_half_23505=((((_n_dy_23503/_n_th_23500)*_n_tw_23501)*(0.5+(0.75*(_n_tier_23504-std::floor(_n_tier_23504)))))+0.35);
double _n_ex_23506=(_n_xc_23485-_n_tx_23499);
if(((d::truth((_n_dy_23503>=0.0))&&d::truth((_n_y_23482<(_n_tb_23502+1.5))))&&d::truth((std::fabs(_n_ex_23506)<=_n_half_23505)))){d::check_cancel();(void)(([&](){auto&& _n_array_23738=this->_n_land_23374;auto _n_index_23739=_n_k_23484;auto _n_value_23740=2.0;d::put(_n_array_23738,_n_index_23739,_n_value_23740);return _n_value_23740;})());
double _n_s_23507=(0.7+(0.6*_n_hash_23352(((_n_x_23483*13.0)+_n_r_23481),5.0)));
(void)((((_n_cr_23488=(0.045*_n_s_23507)),(_n_cg_23489=(0.03*_n_s_23507))),(_n_cb_23490=(0.1*_n_s_23507))));
double _n_e_23508=((d::truth((_n_ex_23506>0.0))&&d::truth((_n_ex_23506>(_n_half_23505-1.1))))?(0.3+(0.3*_n_smooth_23356(_n_th_23500,0.0,_n_dy_23503))):0.0);
(void)((((_n_cr_23488=_n_mix_23357(_n_cr_23488,0.85,_n_e_23508)),(_n_cg_23489=_n_mix_23357(_n_cg_23489,0.3,_n_e_23508))),(_n_cb_23490=_n_mix_23357(_n_cb_23490,0.3,_n_e_23508))));
}

}
}
if(d::truth(d::at(this->_n_land_23374,_n_k_23484))){d::check_cancel();(void)(((([&](){auto&& _n_array_23741=this->_n_LR_23375;auto _n_index_23742=_n_k_23484;auto _n_value_23743=_n_cr_23488;d::put(_n_array_23741,_n_index_23742,_n_value_23743);return _n_value_23743;})(),([&](){auto&& _n_array_23744=this->_n_LG_23376;auto _n_index_23745=_n_k_23484;auto _n_value_23746=_n_cg_23489;d::put(_n_array_23744,_n_index_23745,_n_value_23746);return _n_value_23746;})()),([&](){auto&& _n_array_23747=this->_n_LB_23377;auto _n_index_23748=_n_k_23484;auto _n_value_23749=_n_cb_23490;d::put(_n_array_23747,_n_index_23748,_n_value_23749);return _n_value_23749;})()));
}
}}
}}
{double _n_r_23509=(_n_HZ_23343-10.0);
for(;d::truth((_n_r_23509<(_n_HZ_23343+4.0)));(void)((_n_r_23509++))){d::check_cancel();double _n_y_23510=(_n_r_23509+0.5);
{double _n_x_23511=(_n_BOAT_23346-6.0);
for(;d::truth((_n_x_23511<=(_n_BOAT_23346+6.0)));(void)((_n_x_23511++))){d::check_cancel();double _n_k_23512=((_n_r_23509*_n_W_23341)+_n_x_23511);
double _n_ex_23513=((_n_x_23511+0.5)-_n_BOAT_23346);
bool _n_hull_23514=([&]()->bool{auto _n_logical_23750=([&]()->bool{auto _n_logical_23751=(_n_y_23510>=(_n_HZ_23343+1.0));return d::truth(_n_logical_23751)?(_n_y_23510<(_n_HZ_23343+3.0)):_n_logical_23751;})();return d::truth(_n_logical_23750)?(std::fabs((_n_ex_23513-0.3))<(4.6-(((_n_y_23510-_n_HZ_23343)-1.0)*1.3))):_n_logical_23750;})();
bool _n_mast_23515=([&]()->bool{auto _n_logical_23752=([&]()->bool{auto _n_logical_23753=(std::fabs(_n_ex_23513)<0.5);return d::truth(_n_logical_23753)?(_n_y_23510>=(_n_HZ_23343-9.0)):_n_logical_23753;})();return d::truth(_n_logical_23752)?(_n_y_23510<(_n_HZ_23343+1.0)):_n_logical_23752;})();
bool _n_main_23516=([&]()->bool{auto _n_logical_23754=([&]()->bool{auto _n_logical_23755=([&]()->bool{auto _n_logical_23756=(_n_ex_23513>0.0);return d::truth(_n_logical_23756)?(_n_y_23510>=(_n_HZ_23343-8.5)):_n_logical_23756;})();return d::truth(_n_logical_23755)?(_n_y_23510<(_n_HZ_23343+0.5)):_n_logical_23755;})();return d::truth(_n_logical_23754)?(_n_ex_23513<(0.6+((_n_y_23510-(_n_HZ_23343-8.5))*0.42))):_n_logical_23754;})();
bool _n_jib_23517=([&]()->bool{auto _n_logical_23757=([&]()->bool{auto _n_logical_23758=([&]()->bool{auto _n_logical_23759=(_n_ex_23513<0.0);return d::truth(_n_logical_23759)?(_n_y_23510>=(_n_HZ_23343-7.0)):_n_logical_23759;})();return d::truth(_n_logical_23758)?(_n_y_23510<(_n_HZ_23343+0.5)):_n_logical_23758;})();return d::truth(_n_logical_23757)?((-d::number(_n_ex_23513))<((_n_y_23510-(_n_HZ_23343-7.0))*0.36)):_n_logical_23757;})();
if((((d::truth(_n_hull_23514)||d::truth(_n_mast_23515))||d::truth(_n_main_23516))||d::truth(_n_jib_23517))){d::check_cancel();(void)(([&](){auto&& _n_array_23760=this->_n_land_23374;auto _n_index_23761=_n_k_23512;auto _n_value_23762=3.0;d::put(_n_array_23760,_n_index_23761,_n_value_23762);return _n_value_23762;})());
double _n_glow_23518=(d::truth(_n_main_23516)?(0.12+(0.18*_n_smooth_23356(0.0,3.5,_n_ex_23513))):0.0);
(void)(((([&](){auto&& _n_array_23763=this->_n_LR_23375;auto _n_index_23764=_n_k_23512;auto _n_value_23765=(0.05+_n_glow_23518);d::put(_n_array_23763,_n_index_23764,_n_value_23765);return _n_value_23765;})(),([&](){auto&& _n_array_23766=this->_n_LG_23376;auto _n_index_23767=_n_k_23512;auto _n_value_23768=(0.03+(_n_glow_23518*0.45));d::put(_n_array_23766,_n_index_23767,_n_value_23768);return _n_value_23768;})()),([&](){auto&& _n_array_23769=this->_n_LB_23377;auto _n_index_23770=_n_k_23512;auto _n_value_23771=(0.09+(_n_glow_23518*0.35));d::put(_n_array_23769,_n_index_23770,_n_value_23771);return _n_value_23771;})()));
}
}}
}}
this->_n_U_23379=640.0;
this->_n_V_23380=128.0;
this->_n_deck_23381=d::Array<float,true>(size_t((this->_n_U_23379*this->_n_V_23380)));
this->_n_deckLit_23382=d::Array<float,true>(size_t((this->_n_U_23379*this->_n_V_23380)));
{double _n_v_23523=0.0;
for(;d::truth((_n_v_23523<this->_n_V_23380));(void)((_n_v_23523++))){d::check_cancel();{double _n_u_23524=0.0;
for(;d::truth((_n_u_23524<this->_n_U_23379));(void)((_n_u_23524++))){d::check_cancel();double _n_d_23525=this->_n_deckAt_23383(_n_u_23524,_n_v_23523);
(void)(([&](){auto&& _n_array_23772=this->_n_deck_23381;auto _n_index_23773=((_n_v_23523*this->_n_U_23379)+_n_u_23524);auto _n_value_23774=_n_d_23525;d::put(_n_array_23772,_n_index_23773,_n_value_23774);return _n_value_23774;})());
(void)(([&](){auto&& _n_array_23775=this->_n_deckLit_23382;auto _n_index_23776=((_n_v_23523*this->_n_U_23379)+_n_u_23524);auto _n_value_23777=_n_clamp_23355((0.5+((_n_d_23525-this->_n_deckAt_23383(_n_u_23524,(_n_v_23523+2.5)))*9.0)));d::put(_n_array_23775,_n_index_23776,_n_value_23777);return _n_value_23777;})());
}}
}}
this->_n_thinTop_23384=d::Array<float,true>(size_t((_n_W_23341*_n_HZ_23343)));
{double _n_r_23526=0.0;
for(;d::truth((_n_r_23526<_n_HZ_23343));(void)((_n_r_23526++))){d::check_cancel();{double _n_x_23527=0.0;
for(;d::truth((_n_x_23527<_n_W_23341));(void)((_n_x_23527++))){d::check_cancel();(void)(([&](){auto&& _n_array_23778=this->_n_thinTop_23384;auto _n_index_23779=((_n_r_23526*_n_W_23341)+_n_x_23527);auto _n_value_23780=_n_fbm_23354(((_n_x_23527*0.05)+11.0),(_n_r_23526*0.15),2.0,0.0);d::put(_n_array_23778,_n_index_23779,_n_value_23780);return _n_value_23780;})());
}}
}}
this->_n_CW_23385=720.0;
this->_n_loCover_23386=d::Array<float,true>(size_t((this->_n_CW_23385*_n_HZ_23343)));
this->_n_loLit_23387=d::Array<float,true>(size_t((this->_n_CW_23385*_n_HZ_23343)));
{double _n_r_23532=0.0;
for(;d::truth((_n_r_23532<_n_HZ_23343));(void)((_n_r_23532++))){d::check_cancel();{double _n_x_23533=0.0;
for(;d::truth((_n_x_23533<this->_n_CW_23385));(void)((_n_x_23533++))){d::check_cancel();double _n_y_23534=(_n_r_23532+0.5);
double _n_k_23535=((_n_r_23532*this->_n_CW_23385)+_n_x_23533);
double _n_dl_23536=this->_n_lower_23388(_n_x_23533,_n_y_23534);
(void)(([&](){auto&& _n_array_23781=this->_n_loCover_23386;auto _n_index_23782=_n_k_23535;auto _n_value_23783=_n_smooth_23356(0.58,0.66,_n_dl_23536);d::put(_n_array_23781,_n_index_23782,_n_value_23783);return _n_value_23783;})());
(void)(([&](){auto&& _n_array_23784=this->_n_loLit_23387;auto _n_index_23785=_n_k_23535;auto _n_value_23786=_n_clamp_23355((0.5+((_n_dl_23536-this->_n_lower_23388(_n_x_23533,(_n_y_23534+1.2)))*6.0)));d::put(_n_array_23784,_n_index_23785,_n_value_23786);return _n_value_23786;})());
}}
}}
this->_n_SKR_23389=d::Array<float,true>(size_t((_n_HZ_23343*_n_W_23341)));
this->_n_SKG_23390=d::Array<float,true>(size_t((_n_HZ_23343*_n_W_23341)));
this->_n_SKB_23391=d::Array<float,true>(size_t((_n_HZ_23343*_n_W_23341)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_23662> _a1) mutable ->d::String{double _n_t_23537=_a0;
auto _n_binding_23789=(d::present(_a1)?_a1:([&](){auto _n_object_23788=std::make_shared<_n_Record_23662>();return _n_object_23788;})());
std::optional<d::Array<uint8_t,true>> _n_color_23538=_n_binding_23789->_p_color;
{
double _n_dUp_23539=(_n_t_23537*0.9);
double _n_dLo_23540=(_n_t_23537*1.7);
{double _n_r_23541=0.0;
for(;d::truth((_n_r_23541<_n_HZ_23343));(void)((_n_r_23541++))){d::check_cancel();double _n_y_23542=(_n_r_23541+0.5);
{double _n_x_23543=0.0;
for(;d::truth((_n_x_23543<_n_W_23341));(void)((_n_x_23543++))){d::check_cancel();double _n_k_23544=((_n_r_23541*_n_W_23341)+_n_x_23543);
double _n_s_23545=(_n_k_23544*3.0);
double _n_cr_23546=d::at(this->_n_sky_23370,_n_s_23545);
double _n_cg_23547=d::at(this->_n_sky_23370,(_n_s_23545+1.0));
double _n_cb_23548=d::at(this->_n_sky_23370,(_n_s_23545+2.0));
double _n_dx_23549=((_n_x_23543+0.5)-d::at(_n_SUN_23344,0.0));
double _n_dy_23550=(_n_y_23542-d::at(_n_SUN_23344,1.0));
double _n_disc_23551=0.0;
double _n_ds_23552=std::sqrt(((_n_dx_23549*_n_dx_23549)+std::pow((_n_dy_23550/0.9),2.0)));
if(d::truth((_n_ds_23552<(_n_SR_23345+0.6)))){d::check_cancel();double _n_e_23553=(_n_ds_23552/_n_SR_23345);
(void)((_n_disc_23551=_n_smooth_23356((_n_SR_23345+0.45),(_n_SR_23345-0.45),_n_ds_23552)));
double _n_e4_23554=(((_n_e_23553*_n_e_23553)*_n_e_23553)*_n_e_23553);
(void)((_n_cr_23546=_n_mix_23357(_n_cr_23546,1.0,_n_disc_23551)));
(void)((_n_cg_23547=_n_mix_23357(_n_cg_23547,(0.95-(0.2*_n_e4_23554)),_n_disc_23551)));
(void)((_n_cb_23548=_n_mix_23357(_n_cb_23548,(0.78-(0.38*_n_e4_23554)),_n_disc_23551)));
}
double _n_near_23555=std::exp(((-d::number(std::sqrt(((_n_dx_23549*_n_dx_23549)+((_n_dy_23550*_n_dy_23550)*2.5)))))/45.0));
double _n_v_23556=(_n_y_23542/_n_HZ_23343);
double _n_D_23557=(58.0/((_n_HZ_23343-_n_y_23542)+2.5));
double _n_far_23558=([&](){auto _n_left_23790=_n_smooth_23356(4.8,2.7,_n_D_23557);auto _n_right_23791=_n_smooth_23356(1.08,1.7,_n_D_23557);return (_n_left_23790*_n_right_23791);})();
double _n_cloud_23559=0.0;
if(d::truth((_n_far_23558>0.0))){d::check_cancel();double _n_su_23560=(((_n_dx_23549*_n_D_23557)+_n_dUp_23539)+64200.0);
double _n_sv_23561=((_n_D_23557-0.9)*10.0);
double _n_iu_23562=std::floor(_n_su_23560);
double _n_fu_23563=(_n_su_23560-_n_iu_23562);
double _n_iv_23564=std::floor(_n_sv_23561);
double _n_fv_23565=(_n_sv_23561-_n_iv_23564);
(void)((_n_iu_23562=d::mod(_n_iu_23562,this->_n_U_23379)));
double _n_iu1_23566=d::mod((_n_iu_23562+1.0),this->_n_U_23379);
double _n_a0_23567=(_n_iv_23564*this->_n_U_23379);
double _n_a1_23568=(_n_a0_23567+this->_n_U_23379);
double _n_d0_23569=(d::at(this->_n_deck_23381,(_n_a0_23567+_n_iu_23562))+((d::at(this->_n_deck_23381,(_n_a0_23567+_n_iu1_23566))-d::at(this->_n_deck_23381,(_n_a0_23567+_n_iu_23562)))*_n_fu_23563));
double _n_d1_23570=(d::at(this->_n_deck_23381,(_n_a1_23568+_n_iu_23562))+((d::at(this->_n_deck_23381,(_n_a1_23568+_n_iu1_23566))-d::at(this->_n_deck_23381,(_n_a1_23568+_n_iu_23562)))*_n_fu_23563));
double _n_dd_23571=((_n_d0_23569+((_n_d1_23570-_n_d0_23569)*_n_fv_23565))-((0.22*(1.0-_n_far_23558))*d::at(this->_n_thinTop_23384,_n_k_23544)));
double _n_c_23572=([&](){auto _n_left_23792=_n_smooth_23356(0.56,0.68,_n_dd_23571);auto _n_right_23793=std::sqrt(_n_far_23558);return (_n_left_23792*_n_right_23793);})();
if(d::truth((_n_c_23572>0.01))){d::check_cancel();(void)((_n_cloud_23559=_n_c_23572));
double _n_l0_23573=(d::at(this->_n_deckLit_23382,(_n_a0_23567+_n_iu_23562))+((d::at(this->_n_deckLit_23382,(_n_a0_23567+_n_iu1_23566))-d::at(this->_n_deckLit_23382,(_n_a0_23567+_n_iu_23562)))*_n_fu_23563));
double _n_l1_23574=(d::at(this->_n_deckLit_23382,(_n_a1_23568+_n_iu_23562))+((d::at(this->_n_deckLit_23382,(_n_a1_23568+_n_iu1_23566))-d::at(this->_n_deckLit_23382,(_n_a1_23568+_n_iu_23562)))*_n_fu_23563));
double _n_l_23575=(_n_l0_23573+((_n_l1_23574-_n_l0_23573)*_n_fv_23565));
double _n_az_23576=std::exp(((-d::number(std::fabs(_n_dx_23549)))/60.0));
double _n_low_23577=(_n_v_23556*_n_v_23556);
double _n_thin_23578=(1.0-_n_smooth_23356(0.6,0.76,_n_dd_23571));
double _n_b_23579=_n_clamp_23355(((([&](){auto _n_argument_23794=_n_smooth_23356(0.45,0.85,_n_l_23575);auto _n_argument_23795=1.5;return std::pow(_n_argument_23794,_n_argument_23795);})()*((0.55+(0.25*_n_low_23577))+(0.35*_n_az_23576)))+(((0.3*_n_thin_23578)*_n_az_23576)*_n_low_23577)));
double _n_warm_23580=_n_clamp_23355((_n_az_23576*(0.1+(1.2*_n_low_23577))));
double _n_hr_23581=1.0;
double _n_hg_23582=_n_mix_23357(0.45,0.72,_n_warm_23580);
double _n_hb_23583=_n_mix_23357(0.52,0.38,_n_warm_23580);
double _n_sr_23584=_n_mix_23357(0.1,0.2,_n_v_23556);
double _n_sg_23585=_n_mix_23357(0.065,0.07,_n_v_23556);
double _n_sb_23586=_n_mix_23357(0.23,0.27,_n_v_23556);
(void)((_n_cr_23546=([&](){auto _n_argument_23796=_n_cr_23546;auto _n_argument_23797=_n_mix_23357(_n_sr_23584,_n_hr_23581,_n_b_23579);auto _n_argument_23798=_n_c_23572;return _n_mix_23357(_n_argument_23796,_n_argument_23797,_n_argument_23798);})()));
(void)((_n_cg_23547=([&](){auto _n_argument_23799=_n_cg_23547;auto _n_argument_23800=_n_mix_23357(_n_sg_23585,_n_hg_23582,_n_b_23579);auto _n_argument_23801=_n_c_23572;return _n_mix_23357(_n_argument_23799,_n_argument_23800,_n_argument_23801);})()));
(void)((_n_cb_23548=([&](){auto _n_argument_23802=_n_cb_23548;auto _n_argument_23803=_n_mix_23357(_n_sb_23586,_n_hb_23583,_n_b_23579);auto _n_argument_23804=_n_c_23572;return _n_mix_23357(_n_argument_23802,_n_argument_23803,_n_argument_23804);})()));
}
}
double _n_sx_23587=(_n_x_23543+_n_dLo_23540);
double _n_ix_23588=std::floor(_n_sx_23587);
double _n_fx_23589=(_n_sx_23587-_n_ix_23588);
double _n_i0_23590=((_n_r_23541*this->_n_CW_23385)+d::mod(_n_ix_23588,this->_n_CW_23385));
double _n_i1_23591=((_n_r_23541*this->_n_CW_23385)+d::mod((_n_ix_23588+1.0),this->_n_CW_23385));
double _n_c_23592=([&](){auto _n_left_23805=((d::at(this->_n_loCover_23386,_n_i0_23590)+((d::at(this->_n_loCover_23386,_n_i1_23591)-d::at(this->_n_loCover_23386,_n_i0_23590))*_n_fx_23589))*(1.0-(0.75*std::exp((-d::number(std::pow((_n_dx_23549/13.0),2.0)))))));auto _n_right_23806=(1.0-(0.85*_n_smooth_23356(76.0,50.0,_n_x_23543)));return (_n_left_23805*_n_right_23806);})();
if(d::truth((_n_c_23592>0.01))){d::check_cancel();(void)((_n_cloud_23559=d::maximum({_n_cloud_23559,_n_c_23592})));
double _n_l_23593=(d::at(this->_n_loLit_23387,_n_i0_23590)+((d::at(this->_n_loLit_23387,_n_i1_23591)-d::at(this->_n_loLit_23387,_n_i0_23590))*_n_fx_23589));
double _n_rim_23594=(std::pow(_n_l_23593,2.0)*(0.35+(0.9*_n_near_23555)));
double _n_a_23595=(d::minimum({1.0,(_n_c_23592*1.2)})*0.92);
(void)((_n_cr_23546=_n_mix_23357(_n_cr_23546,(0.3+(0.7*_n_rim_23594)),_n_a_23595)));
(void)((_n_cg_23547=_n_mix_23357(_n_cg_23547,(0.09+(0.55*_n_rim_23594)),_n_a_23595)));
(void)((_n_cb_23548=_n_mix_23357(_n_cb_23548,(0.24+(0.18*_n_rim_23594)),_n_a_23595)));
}
if(((d::truth((_n_r_23541<22.0))&&d::truth((_n_cloud_23559<0.05)))&&d::truth((_n_hash_23352(_n_x_23543,((_n_r_23541*5.0)+3.0))>0.993)))){d::check_cancel();double _n_tw_23596=(0.55+(0.45*std::sin(([&](){auto _n_left_23807=(_n_t_23537*(0.8+(_n_hash_23352(_n_r_23541,_n_x_23543)*1.6)));auto _n_right_23808=(_n_hash_23352(_n_x_23543,_n_r_23541)*6.28);return (_n_left_23807+_n_right_23808);})())));
double _n_st_23597=((_n_tw_23596*_n_smooth_23356(22.0,4.0,_n_r_23541))*0.75);
(void)((((_n_cr_23546=d::maximum({_n_cr_23546,(_n_st_23597*0.95)})),(_n_cg_23547=d::maximum({_n_cg_23547,(_n_st_23597*0.85)}))),(_n_cb_23548=d::maximum({_n_cb_23548,_n_st_23597}))));
}
double _n_keep_23598=(1.0-(0.75*_n_disc_23551));
(void)(((([&](){auto&& _n_array_23809=this->_n_SKR_23389;auto _n_index_23810=_n_k_23544;auto _n_value_23811=(_n_cr_23546*_n_keep_23598);d::put(_n_array_23809,_n_index_23810,_n_value_23811);return _n_value_23811;})(),([&](){auto&& _n_array_23812=this->_n_SKG_23390;auto _n_index_23813=_n_k_23544;auto _n_value_23814=(_n_cg_23547*_n_keep_23598);d::put(_n_array_23812,_n_index_23813,_n_value_23814);return _n_value_23814;})()),([&](){auto&& _n_array_23815=this->_n_SKB_23391;auto _n_index_23816=_n_k_23544;auto _n_value_23817=(_n_cb_23548*_n_keep_23598);d::put(_n_array_23815,_n_index_23816,_n_value_23817);return _n_value_23817;})()));
if(d::truth(d::at(this->_n_land_23374,_n_k_23544))){d::check_cancel();(void)((((_n_cr_23546=d::at(this->_n_LR_23375,_n_k_23544)),(_n_cg_23547=d::at(this->_n_LG_23376,_n_k_23544))),(_n_cb_23548=d::at(this->_n_LB_23377,_n_k_23544))));
(void)(this->_n_halftone_23369(_n_k_23544,_n_r_23541,_n_x_23543,_n_cr_23546,_n_cg_23547,_n_cb_23548,0.02,1.0,_n_color_23538));
}else {d::check_cancel();(void)(this->_n_halftone_23369(_n_k_23544,_n_r_23541,_n_x_23543,_n_cr_23546,_n_cg_23547,_n_cb_23548,0.05,1.0,_n_color_23538));
}
}}
}}
{double _n_r_23599=_n_HZ_23343;
for(;d::truth((_n_r_23599<_n_H_23342));(void)((_n_r_23599++))){d::check_cancel();double _n_y_23600=(_n_r_23599+0.5);
double _n_dz_23601=(_n_y_23600-_n_HZ_23343);
double _n_Z_23602=(36.0/_n_dz_23601);
double _n_rows_23603=(36.0/(_n_dz_23601*_n_dz_23601));
double _n_swellAmt_23604=_n_smooth_23356(8.0,26.0,_n_dz_23601);
double _n_hot_23605=std::exp(((-d::number(_n_dz_23601))/9.0));
double _n_pw_23606=(3.0+(_n_dz_23601*0.8));
double _n_fx_23607=((0.9/(1.0+(_n_dz_23601*0.06)))*0.35);
double _n_fy_23608=(1.6/(1.0+(_n_dz_23601*0.05)));
double _n_fres_23609=(0.24+(0.46*std::exp(((-d::number(_n_dz_23601))/8.0))));
double _n_depth_23610=_n_smooth_23356(_n_HZ_23343,_n_H_23342,_n_y_23600);
double _n_fade_23611=_n_smooth_23356((_n_H_23342+6.0),(_n_H_23342-4.0),_n_y_23600);
{double _n_x_23612=0.0;
for(;d::truth((_n_x_23612<_n_W_23341));(void)((_n_x_23612++))){d::check_cancel();double _n_k_23613=((_n_r_23599*_n_W_23341)+_n_x_23612);
if(d::truth(d::at(this->_n_land_23374,_n_k_23613))){d::check_cancel();(void)(this->_n_halftone_23369(_n_k_23613,_n_r_23599,_n_x_23612,d::at(this->_n_LR_23375,_n_k_23613),d::at(this->_n_LG_23376,_n_k_23613),d::at(this->_n_LB_23377,_n_k_23613),0.02,1.0,_n_color_23538));
continue;
}
double _n_dx_23614=((_n_x_23612+0.5)-d::at(_n_SUN_23344,0.0));
double _n_X_23615=(((_n_x_23612+0.5)-100.0)/_n_dz_23601);
double _n_p_23616=(((13.0*(_n_Z_23602+(0.05*_n_X_23615)))+(2.2*_n_fbm_23354(((_n_X_23615*0.35)+3.0),(_n_Z_23602*0.4),2.0,0.0)))+(_n_t_23537*0.8));
double _n_wv_23617=std::sin(_n_p_23616);
double _n_slope_23618=std::cos(_n_p_23616);
double _n_sz_23619=((0.11*_n_slope_23618)*_n_clamp_23355((1.4/(13.0*_n_rows_23603))));
double _n_sxl_23620=(0.015*_n_slope_23618);
{double _n_i_23621=0.0;
for(;d::truth((_n_i_23621<double(_n_CHOP_23347.size())));(void)((_n_i_23621++))){d::check_cancel();auto _n_binding_23818=d::at(_n_CHOP_23347,_n_i_23621);
double _n_kx_23622=d::at(_n_binding_23818,0.0);
double _n_kz_23623=d::at(_n_binding_23818,1.0);
double _n_kk_23624=d::at(_n_binding_23818,2.0);
double _n_a_23625=d::at(_n_binding_23818,3.0);
double _n_w_23626=d::at(_n_binding_23818,4.0);
double _n_f_23627=d::at(_n_binding_23818,5.0);
double _n_ph_23628=(((_n_kk_23624*((_n_kx_23622*_n_X_23615)+(_n_kz_23623*_n_Z_23602)))-(_n_w_23626*_n_t_23537))+_n_f_23627);
double _n_c_23629=([&](){auto _n_left_23819=(std::cos(_n_ph_23628)*_n_a_23625);auto _n_right_23820=_n_clamp_23355((1.6/(_n_kk_23624*_n_rows_23603)));return (_n_left_23819*_n_right_23820);})();
(void)(((_n_sz_23619=(_n_sz_23619+(_n_c_23629*_n_kz_23623))),(_n_sxl_23620=(_n_sxl_23620+(_n_c_23629*_n_kx_23622)))));
}}
double _n_ry_23630=d::round((((_n_HZ_23343-1.0)-(_n_dz_23601*0.85))-(70.0*_n_sz_23619)));
(void)((_n_ry_23630=(d::truth((_n_ry_23630<0.0))?0.0:(d::truth((_n_ry_23630>(_n_HZ_23343-1.0)))?(_n_HZ_23343-1.0):_n_ry_23630))));
double _n_rx_23631=d::round((_n_x_23612-(60.0*_n_sxl_23620)));
(void)((_n_rx_23631=(d::truth((_n_rx_23631<0.0))?0.0:(d::truth((_n_rx_23631>(_n_W_23341-1.0)))?(_n_W_23341-1.0):_n_rx_23631))));
double _n_q_23632=((_n_ry_23630*_n_W_23341)+_n_rx_23631);
double _n_rip_23633=_n_noise_23353(((((_n_x_23612*_n_fx_23607)*1.4)+13.0)-(_n_t_23537*0.15)),(((_n_y_23600*_n_fy_23608)*1.1)+(_n_t_23537*0.25)),0.0);
double _n_rf_23634=(_n_fres_23609*(0.5+((1.1*_n_rip_23633)*_n_rip_23633)));
double _n_cr_23635=((((d::at(this->_n_SKR_23389,_n_q_23632)*_n_rf_23634)*0.8)+0.03)-(0.01*_n_depth_23610));
double _n_cg_23636=(((d::at(this->_n_SKG_23390,_n_q_23632)*_n_rf_23634)*0.75)+0.022);
double _n_cb_23637=(((d::at(this->_n_SKB_23391,_n_q_23632)*_n_rf_23634)+0.095)+(0.03*_n_depth_23610));
double _n_n_23638=([&](){auto _n_left_23821=(0.55*_n_noise_23353(((_n_x_23612*_n_fx_23607)+(_n_t_23537*0.3)),(((_n_y_23600*_n_fy_23608)*1.3)-(_n_t_23537*0.4)),0.0));auto _n_right_23822=(0.45*_n_noise_23353((((_n_x_23612*_n_fx_23607)*1.7)-(_n_t_23537*0.4)),((((_n_y_23600*_n_fy_23608)*2.0)+(_n_t_23537*0.3))+40.0),0.0));return (_n_left_23821+_n_right_23822);})();
double _n_wave_23639=std::floor((_n_p_23616/(2.0*ascii::PI)));
double _n_crest_23640=([&](){auto _n_left_23823=(std::pow((0.5+(0.5*_n_wv_23617)),7.0)*_n_swellAmt_23604);auto _n_right_23824=([&](){auto _n_argument_23825=0.4;auto _n_argument_23826=0.65;auto _n_argument_23827=_n_noise_23353(((_n_X_23615*2.5)+7.0),(_n_wave_23639*3.7),0.0);return _n_smooth_23356(_n_argument_23825,_n_argument_23826,_n_argument_23827);})();return (_n_left_23823*_n_right_23824);})();
double _n_path_23641=std::exp((-d::number(std::pow((_n_dx_23614/_n_pw_23606),2.0))));
double _n_soft_23642=std::exp((-d::number(std::pow((_n_dx_23614/(_n_pw_23606*1.6)),2.0))));
if(d::truth((_n_slope_23618>0.0))){d::check_cancel();double _n_d_23643=(1.0-((0.7*_n_swellAmt_23604)*_n_slope_23618));
(void)((((_n_cr_23635=(_n_cr_23635*_n_d_23643)),(_n_cg_23636=(_n_cg_23636*_n_d_23643))),(_n_cb_23637=(_n_cb_23637*_n_d_23643))));
}
double _n_th_23644=(0.84-((0.3*_n_path_23641)*(0.45+(0.55*_n_hot_23605))));
double _n_glint_23645=((_n_smooth_23356(_n_th_23644,(_n_th_23644+0.08),_n_n_23638)*(0.25+(0.75*_n_path_23641)))*_n_soft_23642);
double _n_white_23646=((_n_path_23641*_n_path_23641)*_n_smooth_23356((_n_th_23644+0.04),(_n_th_23644+0.2),_n_n_23638));
(void)((_n_cr_23635=(_n_cr_23635+(((0.2*_n_soft_23642)*(0.4+_n_hot_23605))+(_n_glint_23645*1.1)))));
(void)((_n_cg_23636=(_n_cg_23636+(((0.1*_n_soft_23642)*(0.4+_n_hot_23605))+(_n_glint_23645*((0.55+(0.3*_n_hot_23605))+(0.35*_n_white_23646)))))));
(void)((_n_cb_23637=(_n_cb_23637+((0.04*_n_soft_23642)+(_n_glint_23645*((0.2+(0.25*_n_hot_23605))+(0.45*_n_white_23646)))))));
double _n_catchL_23647=((_n_crest_23640*(0.15+(0.85*_n_soft_23642)))*(0.6+(0.6*_n_n_23638)));
(void)((((_n_cr_23635=(_n_cr_23635+(_n_catchL_23647*0.95))),(_n_cg_23636=(_n_cg_23636+(_n_catchL_23647*_n_mix_23357(0.3,0.7,_n_soft_23642))))),(_n_cb_23637=(_n_cb_23637+(_n_catchL_23647*_n_mix_23357(0.5,0.3,_n_soft_23642))))));
double _n_dash_23648=([&](){auto _n_argument_23828=0.4;auto _n_argument_23829=0.7;auto _n_argument_23830=_n_noise_23353(((_n_x_23612*0.18)+(_n_t_23537*0.25)),((_n_y_23600*0.9)-(_n_t_23537*0.5)),0.0);return _n_smooth_23356(_n_argument_23828,_n_argument_23829,_n_argument_23830);})();
double _n_col_23649=(([&](){auto _n_left_23831=(([&](){auto _n_left_23833=std::exp((-d::number(std::pow((_n_dx_23614/(1.0+(_n_dz_23601*0.22))),2.0))));auto _n_right_23834=std::exp(((-d::number(_n_dz_23601))/5.0));return (_n_left_23833*_n_right_23834);})()*(0.6+(0.4*_n_n_23638)));auto _n_right_23832=_n_smooth_23356(0.0,3.0,_n_dz_23601);return (_n_left_23831*_n_right_23832);})()*_n_dash_23648);
(void)((((_n_cr_23635=(_n_cr_23635+_n_col_23649)),(_n_cg_23636=(_n_cg_23636+(_n_col_23649*0.8)))),(_n_cb_23637=(_n_cb_23637+(_n_col_23649*0.45)))));
if((d::truth((_n_x_23612<(this->_n_LANDW_23372+4.0)))&&d::truth((_n_dz_23601<26.0)))){d::check_cancel();double _n_xs_23650=((_n_x_23612+0.5)+(1.3*std::sin((((_n_y_23600*1.1)+(_n_t_23537*1.2))+(_n_x_23612*0.05)))));
double _n_ix_23651=([&](){auto _n_argument_23835=0.0;auto _n_argument_23836=d::minimum({(this->_n_LANDW_23372-1.0),double(d::i32(_n_xs_23650)|d::i32(0.0))});return d::maximum({_n_argument_23835,_n_argument_23836});})();
double _n_ft_23652=_n_shore_23362((_n_ix_23651+0.5));
if(d::truth((_n_y_23600>_n_ft_23652))){d::check_cancel();double _n_my_23653=std::floor(((2.0*_n_ft_23652)-_n_y_23600));
if((d::truth((_n_my_23653>=0.0))&&d::truth((_n_my_23653<this->_n_LANDH_23373)))){d::check_cancel();double _n_m_23654=((_n_my_23653*_n_W_23341)+_n_ix_23651);
if(d::truth(d::at(this->_n_land_23374,_n_m_23654))){d::check_cancel();double _n_a_23655=(0.8*_n_smooth_23356((_n_ft_23652+24.0),(_n_ft_23652+4.0),_n_y_23600));
(void)((((_n_cr_23635=_n_mix_23357(_n_cr_23635,((d::at(this->_n_LR_23375,_n_m_23654)*0.8)+0.02),_n_a_23655)),(_n_cg_23636=_n_mix_23357(_n_cg_23636,((d::at(this->_n_LG_23376,_n_m_23654)*0.7)+0.015),_n_a_23655))),(_n_cb_23637=_n_mix_23357(_n_cb_23637,((d::at(this->_n_LB_23377,_n_m_23654)*0.85)+0.05),_n_a_23655))));
}
}
double _n_foam_23656=([&](){auto _n_left_23837=_n_smooth_23356((_n_ft_23652+1.6),(_n_ft_23652+0.3),_n_y_23600);auto _n_right_23838=([&](){auto _n_argument_23839=0.45;auto _n_argument_23840=0.8;auto _n_argument_23841=_n_noise_23353(((_n_x_23612*0.5)-(_n_t_23537*0.4)),(_n_t_23537*0.3),0.0);return _n_smooth_23356(_n_argument_23839,_n_argument_23840,_n_argument_23841);})();return (_n_left_23837*_n_right_23838);})();
(void)((((_n_cr_23635=(_n_cr_23635+(0.5*_n_foam_23656))),(_n_cg_23636=(_n_cg_23636+(0.3*_n_foam_23656)))),(_n_cb_23637=(_n_cb_23637+(0.35*_n_foam_23656)))));
}
}
if((((d::truth((_n_dz_23601>2.5))&&d::truth((_n_dz_23601<14.0)))&&d::truth((_n_x_23612>(_n_BOAT_23346-8.0))))&&d::truth((_n_x_23612<(_n_BOAT_23346+8.0))))){d::check_cancel();double _n_ix_23657=double(d::i32(((_n_x_23612+0.5)+(0.9*std::sin(((_n_y_23600*1.3)+(_n_t_23537*1.6))))))|d::i32(0.0));
double _n_m_23658=((std::floor(((2.0*(_n_HZ_23343+3.0))-_n_y_23600))*_n_W_23341)+_n_ix_23657);
if(d::truth((d::at(this->_n_land_23374,_n_m_23658)==3.0))){d::check_cancel();double _n_a_23659=((0.7*_n_smooth_23356((_n_HZ_23343+14.0),(_n_HZ_23343+4.0),_n_y_23600))*(0.6+(0.4*_n_rip_23633)));
(void)((((_n_cr_23635=_n_mix_23357(_n_cr_23635,0.04,_n_a_23659)),(_n_cg_23636=_n_mix_23357(_n_cg_23636,0.03,_n_a_23659))),(_n_cb_23637=_n_mix_23357(_n_cb_23637,0.1,_n_a_23659))));
}
}
if(d::truth((_n_dz_23601<1.5))){d::check_cancel();(void)((((_n_cr_23635=(_n_cr_23635*0.55)),(_n_cg_23636=(_n_cg_23636*0.55))),(_n_cb_23637=(_n_cb_23637*0.55))));
}
(void)(this->_n_halftone_23369(_n_k_23613,_n_r_23599,_n_x_23612,_n_cr_23635,_n_cg_23636,_n_cb_23637,0.18,_n_fade_23611,_n_color_23538));
}}
}}
d::Array<d::String,false> _n_lines_23660=d::Array<d::String,false>{};
{double _n_r_23661=0.0;
for(;d::truth((_n_r_23661<_n_H_23342));(void)((_n_r_23661++))){d::check_cancel();(void)(_n_lines_23660.push(d::join(this->_n_out_23366.slice((_n_r_23661*_n_W_23341),((_n_r_23661+1.0)*_n_W_23341)),d::String(u""))));
}}
return d::join(_n_lines_23660,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("ocean-sunset").cols)*ascii::catalog_meta("ocean-sunset").rows);auto _env=std::make_shared<_n_Record_23662>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &ocean_sunset_meta(){return catalog_meta("ocean-sunset");}
std::unique_ptr<Piece> make_ocean_sunset(const AsciiPieceOptions &o){return std::make_unique<Native_ocean_sunset>(o);}
}
