// Direct, statically typed C++ from src/pieces/green-storm.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12682;
struct _n_Record_12721;
struct _n_Record_12723;
struct _n_Record_12971;
struct _n_Record_12682{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_12682> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12682>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_12721{
d::Array<float,true> _p_mask{};
d::Array<float,true> _p_inner{};
d::Array<float,true> _p_outer{};
d::Array<float,true> _p_leader{};
double _p_tip{};
static std::shared_ptr<_n_Record_12721> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12721>();out->_p_mask=d::decode<d::Array<float,true>>(j["mask"]);out->_p_inner=d::decode<d::Array<float,true>>(j["inner"]);out->_p_outer=d::decode<d::Array<float,true>>(j["outer"]);out->_p_leader=d::decode<d::Array<float,true>>(j["leader"]);out->_p_tip=d::decode<double>(j["tip"]);return out;}
};
struct _n_Record_12723{
d::Array<int32_t,true> _p_cells{};
d::Array<float,true> _p_vals{};
double _p_x{};
double _p_y{};
static std::shared_ptr<_n_Record_12723> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12723>();out->_p_cells=d::decode<d::Array<int32_t,true>>(j["cells"]);out->_p_vals=d::decode<d::Array<float,true>>(j["vals"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);return out;}
};
struct _n_Record_12971{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12971> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12971>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_12698(double _a0,double _a1);
double _n_noise_12699(double _a0,double _a1,double _a2);
double _n_fbm_12700(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_12701(double _a0);
double _n_smooth_12702(double _a0,double _a1,double _a2);
double _n_mix_12703(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_12704(d::String _a0);
d::Array<float,true> _n_chamfer_12705(d::Array<uint8_t,true> _a0);
double _n_flashAt_12706(double _a0);
double _n_afterAt_12707(double _a0);
std::shared_ptr<_n_Record_12682> _n_meta_12681=[](){return ([&](){auto _n_object_12974=std::make_shared<_n_Record_12682>();_n_object_12974->_p_name=d::String(u"green storm");_n_object_12974->_p_category=d::String(u"scenes");_n_object_12974->_p_note=d::String(u"a thunderstorm at sea, the lightning striking in the supabase bolt");_n_object_12974->_p_cols=200.0;_n_object_12974->_p_rows=100.0;_n_object_12974->_p_cell=1.0;_n_object_12974->_p_fps=15.0;_n_object_12974->_p_ground=d::String(u"#0e0e0e");_n_object_12974->_p_palette=d::Array<d::String,false>{d::String(u"#1c1c1c"),d::String(u"#242424"),d::String(u"#2e2e2e"),d::String(u"#3a3a3a"),d::String(u"#4a4a4a"),d::String(u"#5e5e5e"),d::String(u"#777777"),d::String(u"#939393"),d::String(u"#b4b4b4"),d::String(u"#d6d6d6"),d::String(u"#1d2a24"),d::String(u"#243a30"),d::String(u"#2d4d3e"),d::String(u"#3a6450"),d::String(u"#4d8066"),d::String(u"#67a084"),d::String(u"#0f3324"),d::String(u"#14472f"),d::String(u"#1a5e3e"),d::String(u"#22784f"),d::String(u"#2c9663"),d::String(u"#36b578"),d::String(u"#3ecf8e"),d::String(u"#65dba5"),d::String(u"#8fe6be"),d::String(u"#bdf2d8"),d::String(u"#e6fbf1"),d::String(u"#ffffff")};return _n_object_12974;})();}();
const d::String _n_INK_12683=[](){return d::String(u"\n                      000000\n                     0000000\n                   000000000\n                 00000000000\n                000000000000\n              00000000000000\n             000000000000000\n           00000000000000000\n         0000000000000000000\n        00000000000000000000000000000000000000000000\n      00000000000000000000000000000000000000000000000\n     000000000000000000000000000000000000000000000000\n   00000000000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000000000000\n  000000000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000000000\n   00000000000000000000000000000000000000000000\n                           000000000000000000\n                           00000000000000000\n                           000000000000000\n                           00000000000000\n                           000000000000\n                           0000000000\n                           000000000\n                           0000000\n                           000000\n");}();
const double _n_W_12684=[](){return 200.0;}();
const double _n_H_12685=[](){return 100.0;}();
const double _n_HORIZON_12686=[](){return 76.0;}();
const double _n_BOLT_TOP_12687=[](){return 28.0;}();
const double _n_LOOP_12688=[](){return 10.8;}();
d::Array<d::Array<double,false>,false> _n_STRIKES_12689=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,100.0},d::Array<double,false>{3.6,74.0},d::Array<double,false>{7.2,126.0}};}();
d::Array<d::Array<double,false>,false> _n_FORKS_12690=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.5,1.0},d::Array<double,false>{2.95,2.0},d::Array<double,false>{5.1,3.0},d::Array<double,false>{6.0,4.0},d::Array<double,false>{8.8,5.0},d::Array<double,false>{9.9,6.0}};}();
const d::String _n_DOTS_12691=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_12692=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_12693=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_12737=_a0;
return ((_n_v_12737/16.0)-0.47);});}();
d::Array<double,false> _n_EM_12694=[](){return d::Array<double,false>{0.243,0.812,0.557};}();
const double _n_AIR_12695=[](){return 0.0;}();
const double _n_HILL_12696=[](){return 1.0;}();
const double _n_SEA_12697=[](){return 2.0;}();
double _n_hash_12698(double _a0,double _a1){double _n_x_12738=_a0;
double _n_y_12739=_a1;
{
double _n_h_12740=([&](){auto _n_left_12975=d::imul(double(d::i32(_n_x_12738)|d::i32(0.0)),374761393.0);auto _n_right_12976=d::imul(double(d::i32(_n_y_12739)|d::i32(0.0)),668265263.0);return (_n_left_12975+_n_right_12976);})();
(void)((_n_h_12740=d::imul(double(d::i32(_n_h_12740)^d::i32(double(d::u32(_n_h_12740)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_12740)^d::i32(double(d::u32(_n_h_12740)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_12699(double _a0,double _a1,double _a2){double _n_x_12741=_a0;
double _n_y_12742=_a1;
double _n_period_12743=_a2;
{
double _n_xi_12744=std::floor(_n_x_12741);
double _n_yi_12745=std::floor(_n_y_12742);
double _n_fx_12746=(_n_x_12741-_n_xi_12744);
double _n_fy_12747=(_n_y_12742-_n_yi_12745);
double _n_u_12748=((_n_fx_12746*_n_fx_12746)*(3.0-(2.0*_n_fx_12746)));
double _n_v_12749=((_n_fy_12747*_n_fy_12747)*(3.0-(2.0*_n_fy_12747)));
double _n_x0_12750=_n_xi_12744;
double _n_x1_12751=(_n_xi_12744+1.0);
if(d::truth(_n_period_12743)){d::check_cancel();(void)((_n_x0_12750=d::mod((d::mod(_n_xi_12744,_n_period_12743)+_n_period_12743),_n_period_12743)));
(void)((_n_x1_12751=d::mod((_n_x0_12750+1.0),_n_period_12743)));
}
double _n_a_12752=_n_hash_12698(_n_x0_12750,_n_yi_12745);
double _n_b_12753=_n_hash_12698(_n_x1_12751,_n_yi_12745);
double _n_c_12754=_n_hash_12698(_n_x0_12750,(_n_yi_12745+1.0));
double _n_d_12755=_n_hash_12698(_n_x1_12751,(_n_yi_12745+1.0));
return (((_n_a_12752+((_n_b_12753-_n_a_12752)*_n_u_12748))+((_n_c_12754-_n_a_12752)*_n_v_12749))+(((((_n_a_12752-_n_b_12753)-_n_c_12754)+_n_d_12755)*_n_u_12748)*_n_v_12749));

}
}

double _n_fbm_12700(double _a0,double _a1,double _a2,double _a3){double _n_x_12756=_a0;
double _n_y_12757=_a1;
double _n_octaves_12758=_a2;
double _n_period_12759=_a3;
{
double _n_s_12760=0.0;
double _n_n_12761=0.0;
double _n_amp_12762=0.5;
double _n_f_12763=1.0;
{double _n_i_12764=0.0;
for(;d::truth((_n_i_12764<_n_octaves_12758));(void)((_n_i_12764++))){d::check_cancel();(void)((_n_s_12760=(_n_s_12760+(_n_amp_12762*_n_noise_12699((_n_x_12756*_n_f_12763),(_n_y_12757*_n_f_12763),(_n_period_12759*_n_f_12763))))));
(void)((_n_n_12761=(_n_n_12761+_n_amp_12762)));
(void)((_n_amp_12762=(_n_amp_12762*0.5)));
(void)((_n_f_12763=(_n_f_12763*2.0)));
}}
return (_n_s_12760/_n_n_12761);

}
}

double _n_clamp_12701(double _a0){double _n_v_12765=_a0;
return (d::truth((_n_v_12765<0.0))?0.0:(d::truth((_n_v_12765>1.0))?1.0:_n_v_12765));}

double _n_smooth_12702(double _a0,double _a1,double _a2){double _n_a_12766=_a0;
double _n_b_12767=_a1;
double _n_v_12768=_a2;
{
double _n_k_12769=_n_clamp_12701(((_n_v_12768-_n_a_12766)/(_n_b_12767-_n_a_12766)));
return ((_n_k_12769*_n_k_12769)*(3.0-(2.0*_n_k_12769)));

}
}

double _n_mix_12703(double _a0,double _a1,double _a2){double _n_a_12770=_a0;
double _n_b_12771=_a1;
double _n_k_12772=_a2;
return (_n_a_12770+((_n_b_12771-_n_a_12770)*_n_k_12772));}

d::Array<double,false> _n_hex_12704(d::String _a0){d::String _n_s_12773=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_12774=_a0;
return (([&](){auto _n_argument_12977=d::slice(_n_s_12773,_n_i_12774,(_n_i_12774+2.0));auto _n_argument_12978=16.0;return d::parseInt(_n_argument_12977,_n_argument_12978);})()/255.0);});}

d::Array<float,true> _n_chamfer_12705(d::Array<uint8_t,true> _a0){d::Array<uint8_t,true> _n_inside_12775=_a0;
{
d::Array<float,true> _n_d_12776=d::Array<float,true>(size_t((_n_W_12684*_n_H_12685)));
{double _n_k_12777=0.0;
for(;d::truth((_n_k_12777<(_n_W_12684*_n_H_12685)));(void)((_n_k_12777++))){d::check_cancel();(void)(([&](){auto&& _n_array_12979=_n_d_12776;auto _n_index_12980=_n_k_12777;auto _n_value_12981=(d::truth(d::at(_n_inside_12775,_n_k_12777))?10000.0:0.0);d::put(_n_array_12979,_n_index_12980,_n_value_12981);return _n_value_12981;})());
}}
double _n_A_12778=1.0;
double _n_B_12779=std::sqrt(2.);
{double _n_r_12780=0.0;
for(;d::truth((_n_r_12780<_n_H_12685));(void)((_n_r_12780++))){d::check_cancel();{double _n_x_12781=0.0;
for(;d::truth((_n_x_12781<_n_W_12684));(void)((_n_x_12781++))){d::check_cancel();double _n_k_12782=((_n_r_12780*_n_W_12684)+_n_x_12781);
if(d::truth((!d::truth(d::at(_n_d_12776,_n_k_12782))))){d::check_cancel();continue;
}
double _n_v_12783=d::at(_n_d_12776,_n_k_12782);
if(d::truth((_n_x_12781>0.0))){d::check_cancel();(void)((_n_v_12783=d::minimum({_n_v_12783,(d::at(_n_d_12776,(_n_k_12782-1.0))+_n_A_12778)})));
}
if(d::truth((_n_r_12780>0.0))){d::check_cancel();(void)((_n_v_12783=d::minimum({_n_v_12783,(d::at(_n_d_12776,(_n_k_12782-_n_W_12684))+_n_A_12778)})));
if(d::truth((_n_x_12781>0.0))){d::check_cancel();(void)((_n_v_12783=d::minimum({_n_v_12783,(d::at(_n_d_12776,((_n_k_12782-_n_W_12684)-1.0))+_n_B_12779)})));
}
if(d::truth((_n_x_12781<(_n_W_12684-1.0)))){d::check_cancel();(void)((_n_v_12783=d::minimum({_n_v_12783,(d::at(_n_d_12776,((_n_k_12782-_n_W_12684)+1.0))+_n_B_12779)})));
}
}
(void)(([&](){auto&& _n_array_12982=_n_d_12776;auto _n_index_12983=_n_k_12782;auto _n_value_12984=_n_v_12783;d::put(_n_array_12982,_n_index_12983,_n_value_12984);return _n_value_12984;})());
}}
}}
{double _n_r_12784=(_n_H_12685-1.0);
for(;d::truth((_n_r_12784>=0.0));(void)((_n_r_12784--))){d::check_cancel();{double _n_x_12785=(_n_W_12684-1.0);
for(;d::truth((_n_x_12785>=0.0));(void)((_n_x_12785--))){d::check_cancel();double _n_k_12786=((_n_r_12784*_n_W_12684)+_n_x_12785);
if(d::truth((!d::truth(d::at(_n_d_12776,_n_k_12786))))){d::check_cancel();continue;
}
double _n_v_12787=d::at(_n_d_12776,_n_k_12786);
if(d::truth((_n_x_12785<(_n_W_12684-1.0)))){d::check_cancel();(void)((_n_v_12787=d::minimum({_n_v_12787,(d::at(_n_d_12776,(_n_k_12786+1.0))+_n_A_12778)})));
}
if(d::truth((_n_r_12784<(_n_H_12685-1.0)))){d::check_cancel();(void)((_n_v_12787=d::minimum({_n_v_12787,(d::at(_n_d_12776,(_n_k_12786+_n_W_12684))+_n_A_12778)})));
if(d::truth((_n_x_12785<(_n_W_12684-1.0)))){d::check_cancel();(void)((_n_v_12787=d::minimum({_n_v_12787,(d::at(_n_d_12776,((_n_k_12786+_n_W_12684)+1.0))+_n_B_12779)})));
}
if(d::truth((_n_x_12785>0.0))){d::check_cancel();(void)((_n_v_12787=d::minimum({_n_v_12787,(d::at(_n_d_12776,((_n_k_12786+_n_W_12684)-1.0))+_n_B_12779)})));
}
}
(void)(([&](){auto&& _n_array_12985=_n_d_12776;auto _n_index_12986=_n_k_12786;auto _n_value_12987=_n_v_12787;d::put(_n_array_12985,_n_index_12986,_n_value_12987);return _n_value_12987;})());
}}
}}
return _n_d_12776;

}
}

double _n_flashAt_12706(double _a0){double _n_a_12788=_a0;
return (d::truth((_n_a_12788<0.0))?0.0:([&](){auto _n_left_12988=([&](){auto _n_left_12990=std::exp(((-d::number(_n_a_12788))/0.16));auto _n_right_12991=(0.75*std::exp((-d::number(std::pow(((_n_a_12788-0.33)/0.07),2.0)))));return (_n_left_12990+_n_right_12991);})();auto _n_right_12989=(0.5*std::exp((-d::number(std::pow(((_n_a_12788-0.6)/0.08),2.0)))));return (_n_left_12988+_n_right_12989);})());}

double _n_afterAt_12707(double _a0){double _n_a_12789=_a0;
return (d::truth((_n_a_12789<0.0))?0.0:std::exp(((-d::number(_n_a_12789))/1.8)));}

struct Native_green_storm final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_12708{};
double _n_N_12709{};
d::Array<d::String,false> _n_out_12710{};
d::Array<uint8_t,true> _n_lut_12711{};
d::Array<d::String,false> _n_grid_12713{};
double _n_GR_12714{};
double _n_GC_12715{};
double _n_scale_12717{};
double _n_tipCol_12718{};
double _n_topCol_12719{};
d::Array<std::shared_ptr<_n_Record_12721>,false> _n_bolts_12720{};
d::Array<std::shared_ptr<_n_Record_12723>,false> _n_forks_12722{};
d::Array<uint8_t,true> _n_mat_12724{};
d::Array<float,true> _n_slope_12725{};
d::Array<float,true> _n_rim_12726{};
double _n_CW_12728{};
double _n_CH_12729{};
d::Array<float,true> _n_cover_12730{};
d::Array<float,true> _n_tone_12731{};
d::Array<float,true> _n_under_12732{};
d::Array<float,true> _n_fork_12736{};
std::function<d::String(double,std::shared_ptr<_n_Record_12971>)> _render;
double _n_nearest_12712(double _a0,double _a1,double _a2){double _n_r_12790=_a0;
double _n_g_12791=_a1;
double _n_b_12792=_a2;
{
double _n_k_12793=([&](){auto _n_left_13095=([&](){auto _n_left_13097=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_12790*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_13098=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_12791*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_13097)|d::i32(_n_right_13098));})();auto _n_right_13096=d::minimum({31.0,double(d::i32((_n_b_12792*31.99))|d::i32(0.0))});return double(d::i32(_n_left_13095)|d::i32(_n_right_13096));})();
if(d::truth((d::at(this->_n_lut_12711,_n_k_12793)!=255.0))){d::check_cancel();return d::at(this->_n_lut_12711,_n_k_12793);
}
double _n_best_12794=0.0;
double _n_bd_12795=1000000000.0;
{double _n_i_12796=0.0;
for(;d::truth((_n_i_12796<double(this->_n_P_12708.size())));(void)((_n_i_12796++))){d::check_cancel();double _n_dr_12797=(d::at(d::at(this->_n_P_12708,_n_i_12796),0.0)-_n_r_12790);
double _n_dg_12798=(d::at(d::at(this->_n_P_12708,_n_i_12796),1.0)-_n_g_12791);
double _n_db_12799=(d::at(d::at(this->_n_P_12708,_n_i_12796),2.0)-_n_b_12792);
double _n_d_12800=((((0.3*_n_dr_12797)*_n_dr_12797)+((0.5*_n_dg_12798)*_n_dg_12798))+((0.2*_n_db_12799)*_n_db_12799));
if(d::truth((_n_d_12800<_n_bd_12795))){d::check_cancel();(void)(((_n_bd_12795=_n_d_12800),(_n_best_12794=_n_i_12796)));
}
}}
return ([&](){auto&& _n_array_13099=this->_n_lut_12711;auto _n_index_13100=_n_k_12793;auto _n_value_13101=_n_best_12794;d::put(_n_array_13099,_n_index_13100,_n_value_13101);return _n_value_13101;})();

}
}

double _n_ink_12716(double _a0,double _a1){double _n_c_12802=_a0;
double _n_r_12803=_a1;
return ((((((d::truth((_n_r_12803>=0.0))&&d::truth((_n_r_12803<this->_n_GR_12714)))&&d::truth((_n_c_12802>=0.0)))&&d::truth((_n_c_12802<this->_n_GC_12715)))&&d::truth(d::at(d::at(this->_n_grid_12713,_n_r_12803),_n_c_12802)))&&d::truth((d::at(d::at(this->_n_grid_12713,_n_r_12803),_n_c_12802)!=d::String(u" "))))?1.0:0.0);}

double _n_hill_12727(double _a0){double _n_x_12857=_a0;
return (([&](){auto _n_left_13102=([&](){auto _n_left_13104=(_n_HORIZON_12686-(12.0*_n_smooth_12702(66.0,8.0,_n_x_12857)));auto _n_right_13105=(7.0*_n_smooth_12702(136.0,192.0,_n_x_12857));return (_n_left_13104-_n_right_13105);})();auto _n_right_13103=([&](){auto _n_left_13106=(2.5*_n_fbm_12700((_n_x_12857*0.07),5.3,3.0,0.0));auto _n_right_13107=([&](){auto _n_left_13108=_n_smooth_12702(70.0,50.0,_n_x_12857);auto _n_right_13109=_n_smooth_12702(130.0,150.0,_n_x_12857);return (_n_left_13108+_n_right_13109);})();return (_n_left_13106*_n_right_13107);})();return (_n_left_13102-_n_right_13103);})()+1.2);}

double _n_baseAt_12733(double _a0){double _n_x_12863=_a0;
return (14.0+(20.0*_n_fbm_12700((_n_x_12863*0.028),7.7,4.0,(this->_n_CW_12728*0.028))));}

double _n_billow_12734(double _a0,double _a1){double _n_x_12864=_a0;
double _n_y_12865=_a1;
{
double _n_n_12866=_n_fbm_12700((_n_x_12864*0.032),(_n_y_12865*0.052),4.0,(this->_n_CW_12728*0.032));
return (1.0-std::fabs(((_n_n_12866*2.0)-1.0)));

}
}

double _n_density_12735(double _a0,double _a1){double _n_x_12867=_a0;
double _n_y_12868=_a1;
{
double _n_b_12869=this->_n_baseAt_12733(_n_x_12867);
return (([&](){auto _n_left_13110=(0.62*_n_smooth_12702((_n_b_12869+3.0),(_n_b_12869-3.0),_n_y_12868));auto _n_right_13111=(0.4*this->_n_billow_12734(_n_x_12867,_n_y_12868));return (_n_left_13110+_n_right_13111);})()-0.12);

}
}

explicit Native_green_storm(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_12708=d::map(_n_meta_12681->_p_palette,_n_hex_12704);
this->_n_N_12709=(_n_W_12684*_n_H_12685);
this->_n_out_12710=d::Array<d::String,false>(size_t(this->_n_N_12709));
this->_n_lut_12711=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_grid_12713=d::split(d::slice(_n_INK_12683,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_GR_12714=double(this->_n_grid_12713.size());
this->_n_GC_12715=([&](){d::Array<double> _n_numbers_12992;for(auto _x:d::map(this->_n_grid_12713,[&]( d::String _a0) mutable ->double{d::String _n_l_12801=_a0;
return double(_n_l_12801.size());}))_n_numbers_12992.push(_x);return d::maximum(_n_numbers_12992);})();
this->_n_scale_12717=((_n_HORIZON_12686-_n_BOLT_TOP_12687)/(this->_n_GR_12714*2.0));
this->_n_tipCol_12718=0.0;
{double _n_c_12804=0.0;
for(;d::truth((_n_c_12804<this->_n_GC_12715));(void)((_n_c_12804++))){d::check_cancel();if(d::truth(this->_n_ink_12716(_n_c_12804,(this->_n_GR_12714-1.0)))){d::check_cancel();(void)((this->_n_tipCol_12718=(this->_n_tipCol_12718+(_n_c_12804/double(d::trim(d::at(this->_n_grid_12713,(this->_n_GR_12714-1.0))).size())))));
}
}}
(void)((this->_n_tipCol_12718=(this->_n_tipCol_12718+0.5)));
this->_n_topCol_12719=0.0;
{double _n_c_12805=0.0;
for(;d::truth((_n_c_12805<this->_n_GC_12715));(void)((_n_c_12805++))){d::check_cancel();if(d::truth(this->_n_ink_12716(_n_c_12805,0.0))){d::check_cancel();(void)((this->_n_topCol_12719=(this->_n_topCol_12719+(_n_c_12805/double(d::trim(d::at(this->_n_grid_12713,0.0)).size())))));
}
}}
(void)((this->_n_topCol_12719=(this->_n_topCol_12719+0.5)));
this->_n_bolts_12720=d::map(_n_STRIKES_12689,[&]( d::Array<double,false> _a0) mutable ->std::shared_ptr<_n_Record_12721>{auto _n_binding_12993=_a0;
double _n_cx_12806=d::at(_n_binding_12993,1.0);
{
double _n_x0_12807=(_n_cx_12806-((this->_n_GC_12715*this->_n_scale_12717)/2.0));
d::Array<float,true> _n_mask_12808=d::Array<float,true>(size_t(this->_n_N_12709));
d::Array<uint8_t,true> _n_solid_12809=d::Array<uint8_t,true>(size_t(this->_n_N_12709));
{double _n_r_12810=0.0;
for(;d::truth((_n_r_12810<_n_H_12685));(void)((_n_r_12810++))){d::check_cancel();{double _n_x_12811=0.0;
for(;d::truth((_n_x_12811<_n_W_12684));(void)((_n_x_12811++))){d::check_cancel();double _n_u_12812=((((_n_x_12811+0.5)-_n_x0_12807)/this->_n_scale_12717)-0.5);
double _n_v_12813=((((_n_r_12810+0.5)-_n_BOLT_TOP_12687)/(2.0*this->_n_scale_12717))-0.5);
double _n_ui_12814=std::floor(_n_u_12812);
double _n_vi_12815=std::floor(_n_v_12813);
double _n_fu_12816=(_n_u_12812-_n_ui_12814);
double _n_fv_12817=(_n_v_12813-_n_vi_12815);
double _n_a_12818=this->_n_ink_12716(_n_ui_12814,_n_vi_12815);
double _n_b_12819=this->_n_ink_12716((_n_ui_12814+1.0),_n_vi_12815);
double _n_c_12820=this->_n_ink_12716(_n_ui_12814,(_n_vi_12815+1.0));
double _n_d_12821=this->_n_ink_12716((_n_ui_12814+1.0),(_n_vi_12815+1.0));
double _n_s_12822=(((_n_a_12818+((_n_b_12819-_n_a_12818)*_n_fu_12816))+((_n_c_12820-_n_a_12818)*_n_fv_12817))+(((((_n_a_12818-_n_b_12819)-_n_c_12820)+_n_d_12821)*_n_fu_12816)*_n_fv_12817));
(void)(([&](){auto&& _n_array_12994=_n_mask_12808;auto _n_index_12995=((_n_r_12810*_n_W_12684)+_n_x_12811);auto _n_value_12996=_n_smooth_12702(0.45,0.55,_n_s_12822);d::put(_n_array_12994,_n_index_12995,_n_value_12996);return _n_value_12996;})());
(void)(([&](){auto&& _n_array_12997=_n_solid_12809;auto _n_index_12998=((_n_r_12810*_n_W_12684)+_n_x_12811);auto _n_value_12999=(d::truth((_n_s_12822>0.5))?1.0:0.0);d::put(_n_array_12997,_n_index_12998,_n_value_12999);return _n_value_12999;})());
}}
}}
d::Array<float,true> _n_inner_12823=_n_chamfer_12705(_n_solid_12809);
d::Array<uint8_t,true> _n_outside_12824=d::Array<uint8_t,true>(size_t(this->_n_N_12709));
{double _n_k_12825=0.0;
for(;d::truth((_n_k_12825<this->_n_N_12709));(void)((_n_k_12825++))){d::check_cancel();(void)(([&](){auto&& _n_array_13000=_n_outside_12824;auto _n_index_13001=_n_k_12825;auto _n_value_13002=(d::truth(d::at(_n_solid_12809,_n_k_12825))?0.0:1.0);d::put(_n_array_13000,_n_index_13001,_n_value_13002);return _n_value_13002;})());
}}
d::Array<float,true> _n_outer_12826=_n_chamfer_12705(_n_outside_12824);
d::Array<float,true> _n_leader_12827=d::Array<float,true>(size_t(this->_n_N_12709));
double _n_lx_12828=(_n_x0_12807+(this->_n_topCol_12719*this->_n_scale_12717));
double _n_ly_12829=(_n_BOLT_TOP_12687+1.0);
double _n_dir_12830=0.0;
{double _n_i_12831=0.0;
for(;d::truth((_n_ly_12829>6.0));(void)((_n_i_12831++))){d::check_cancel();if(d::truth((d::mod(_n_i_12831,4.0)==0.0))){d::check_cancel();(void)((_n_dir_12830=(([&](){auto _n_left_13003=(d::truth((_n_hash_12698(_n_cx_12806,_n_i_12831)>0.5))?1.0:(-d::number(1.0)));auto _n_right_13004=(0.6+(_n_hash_12698(_n_cx_12806,(_n_i_12831+50.0))*0.9));return (_n_left_13003*_n_right_13004);})()-((_n_lx_12828-(_n_x0_12807+(this->_n_topCol_12719*this->_n_scale_12717)))*0.08))));
}
(void)((_n_lx_12828=(_n_lx_12828+_n_dir_12830)));
(void)((_n_ly_12829=(_n_ly_12829-0.7)));
{double _n_dx_12832=(-d::number(1.0));
for(;d::truth((_n_dx_12832<=1.0));(void)((_n_dx_12832++))){d::check_cancel();double _n_k_12833=(([&](){auto _n_left_13005=(d::round(_n_ly_12829)*_n_W_12684);auto _n_right_13006=d::round(_n_lx_12828);return (_n_left_13005+_n_right_13006);})()+_n_dx_12832);
(void)(([&](){auto&& _n_array_13007=_n_leader_12827;auto _n_index_13008=_n_k_12833;auto _n_value_13009=d::maximum({d::at(_n_leader_12827,_n_k_12833),(d::truth(_n_dx_12832)?0.25:1.0)});d::put(_n_array_13007,_n_index_13008,_n_value_13009);return _n_value_13009;})());
}}
}}
return ([&](){auto _n_object_13011=std::make_shared<_n_Record_12721>();_n_object_13011->_p_mask=_n_mask_12808;_n_object_13011->_p_inner=_n_inner_12823;_n_object_13011->_p_outer=_n_outer_12826;_n_object_13011->_p_leader=_n_leader_12827;_n_object_13011->_p_tip=(_n_x0_12807+(this->_n_tipCol_12718*this->_n_scale_12717));return _n_object_13011;})();

}
});
this->_n_forks_12722=d::map(_n_FORKS_12690,[&]( d::Array<double,false> _a0) mutable ->std::shared_ptr<_n_Record_12723>{auto _n_binding_13012=_a0;
double _n_seed_12834=d::at(_n_binding_13012,1.0);
{
d::Array<float,true> _n_glow_12835=d::Array<float,true>(size_t(this->_n_N_12709));
double _n_sx_12836=(20.0+(_n_hash_12698(_n_seed_12834,71.0)*160.0));
double _n_sy_12837=(24.0+(_n_hash_12698(_n_seed_12834,72.0)*10.0));
std::function<void(double,double,double,double,double,double)> _n_draw_12838=[&]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5) mutable ->void{double _n_x_12839=_a0;
double _n_y_12840=_a1;
double _n_len_12841=_a2;
double _n_w_12842=_a3;
double _n_depth_12843=_a4;
double _n_salt_12844=_a5;
{
double _n_dir_12845=((_n_hash_12698(_n_salt_12844,1.0)-0.5)*0.9);
{double _n_i_12846=0.0;
for(;d::truth((_n_i_12846<_n_len_12841));(void)((_n_i_12846++))){d::check_cancel();if(d::truth((d::mod(_n_i_12846,3.0)==0.0))){d::check_cancel();(void)((_n_dir_12845=([&](){auto _n_left_13013=((_n_hash_12698(_n_salt_12844,(_n_i_12846+7.0))-0.5)*2.2);auto _n_right_13014=((_n_hash_12698(_n_salt_12844,3.0)-0.5)*0.6);return (_n_left_13013+_n_right_13014);})()));
}
(void)((_n_x_12839=(_n_x_12839+_n_dir_12845)));
(void)((_n_y_12840=(_n_y_12840+(0.8+(_n_hash_12698(_n_salt_12844,(_n_i_12846+40.0))*0.5)))));
{double _n_dy_12847=(-d::number(2.0));
for(;d::truth((_n_dy_12847<=2.0));(void)((_n_dy_12847++))){d::check_cancel();{double _n_dx_12848=(-d::number(2.0));
for(;d::truth((_n_dx_12848<=2.0));(void)((_n_dx_12848++))){d::check_cancel();double _n_cx_12849=(d::round(_n_x_12839)+_n_dx_12848);
double _n_cy_12850=(d::round(_n_y_12840)+_n_dy_12847);
if((((d::truth((_n_cx_12849<0.0))||d::truth((_n_cx_12849>=_n_W_12684)))||d::truth((_n_cy_12850<0.0)))||d::truth((_n_cy_12850>=_n_HORIZON_12686)))){d::check_cancel();continue;
}
double _n_dd_12851=d::hypot(std::initializer_list<double>{((_n_cx_12849+0.5)-_n_x_12839),((_n_cy_12850+0.5)-_n_y_12840)});
double _n_v_12852=(_n_w_12842*(d::truth((_n_dd_12851<0.75))?1.0:(0.3*std::exp(((-d::number(_n_dd_12851))/1.1)))));
double _n_k_12853=((_n_cy_12850*_n_W_12684)+_n_cx_12849);
if(d::truth((_n_v_12852>d::at(_n_glow_12835,_n_k_12853)))){d::check_cancel();(void)(([&](){auto&& _n_array_13015=_n_glow_12835;auto _n_index_13016=_n_k_12853;auto _n_value_13017=_n_v_12852;d::put(_n_array_13015,_n_index_13016,_n_value_13017);return _n_value_13017;})());
}
}}
}}
if((d::truth((_n_depth_12843<2.0))&&d::truth((_n_hash_12698(_n_salt_12844,(_n_i_12846+90.0))>0.9)))){d::check_cancel();(void)(_n_draw_12838(_n_x_12839,_n_y_12840,(_n_len_12841*0.45),(_n_w_12842*0.7),(_n_depth_12843+1.0),((_n_salt_12844*7.0)+_n_i_12846)));
}
}}

}
};
(void)(([&](){auto _n_argument_13018=_n_sx_12836;auto _n_argument_13019=_n_sy_12837;auto _n_argument_13020=(22.0+(_n_hash_12698(_n_seed_12834,73.0)*22.0));auto _n_argument_13021=1.0;auto _n_argument_13022=0.0;auto _n_argument_13023=(_n_seed_12834*131.0);return _n_draw_12838(_n_argument_13018,_n_argument_13019,_n_argument_13020,_n_argument_13021,_n_argument_13022,_n_argument_13023);})());
d::Array<double,false> _n_cells_12854=d::Array<double,false>{};
d::Array<double,false> _n_vals_12855=d::Array<double,false>{};
{double _n_k_12856=0.0;
for(;d::truth((_n_k_12856<this->_n_N_12709));(void)((_n_k_12856++))){d::check_cancel();if(d::truth((d::at(_n_glow_12835,_n_k_12856)>0.02))){d::check_cancel();(void)((_n_cells_12854.push(_n_k_12856),_n_vals_12855.push(d::at(_n_glow_12835,_n_k_12856))));
}
}}
return ([&](){auto _n_object_13025=std::make_shared<_n_Record_12723>();_n_object_13025->_p_cells=d::Array<int32_t,true>(_n_cells_12854);_n_object_13025->_p_vals=d::Array<float,true>(_n_vals_12855);_n_object_13025->_p_x=_n_sx_12836;_n_object_13025->_p_y=(_n_sy_12837+14.0);return _n_object_13025;})();

}
});
this->_n_mat_12724=d::Array<uint8_t,true>(size_t(this->_n_N_12709));
this->_n_slope_12725=d::Array<float,true>(size_t(this->_n_N_12709));
this->_n_rim_12726=d::Array<float,true>(size_t(this->_n_N_12709));
{double _n_r_12858=0.0;
for(;d::truth((_n_r_12858<_n_H_12685));(void)((_n_r_12858++))){d::check_cancel();{double _n_x_12859=0.0;
for(;d::truth((_n_x_12859<_n_W_12684));(void)((_n_x_12859++))){d::check_cancel();double _n_k_12860=((_n_r_12858*_n_W_12684)+_n_x_12859);
double _n_y_12861=(_n_r_12858+0.5);
double _n_top_12862=this->_n_hill_12727(_n_x_12859);
if(d::truth((_n_y_12861>=_n_HORIZON_12686))){d::check_cancel();(void)(([&](){auto&& _n_array_13026=this->_n_mat_12724;auto _n_index_13027=_n_k_12860;auto _n_value_13028=_n_SEA_12697;d::put(_n_array_13026,_n_index_13027,_n_value_13028);return _n_value_13028;})());
}else {d::check_cancel();if((d::truth((_n_y_12861>=_n_top_12862))&&d::truth(([&]()->bool{auto _n_logical_13029=(_n_x_12859<76.0);return d::truth(_n_logical_13029)?_n_logical_13029:(_n_x_12859>128.0);})()))){d::check_cancel();(void)(([&](){auto&& _n_array_13030=this->_n_mat_12724;auto _n_index_13031=_n_k_12860;auto _n_value_13032=_n_HILL_12696;d::put(_n_array_13030,_n_index_13031,_n_value_13032);return _n_value_13032;})());
(void)(([&](){auto&& _n_array_13033=this->_n_slope_12725;auto _n_index_13034=_n_k_12860;auto _n_value_13035=([&](){auto _n_left_13036=(_n_clamp_12701((0.5+((([&](){auto _n_left_13038=this->_n_hill_12727((_n_x_12859-1.0));auto _n_right_13039=this->_n_hill_12727((_n_x_12859+1.0));return (_n_left_13038-_n_right_13039);})()*0.8)*(d::truth((_n_x_12859<100.0))?(-d::number(1.0)):1.0))))*0.6);auto _n_right_13037=(0.4*_n_smooth_12702((_n_top_12862+2.5),_n_top_12862,_n_y_12861));return (_n_left_13036+_n_right_13037);})();d::put(_n_array_13033,_n_index_13034,_n_value_13035);return _n_value_13035;})());
(void)(([&](){auto&& _n_array_13040=this->_n_rim_12726;auto _n_index_13041=_n_k_12860;auto _n_value_13042=_n_smooth_12702((_n_top_12862+1.6),_n_top_12862,_n_y_12861);d::put(_n_array_13040,_n_index_13041,_n_value_13042);return _n_value_13042;})());
}
}
}}
}}
this->_n_CW_12728=640.0;
this->_n_CH_12729=52.0;
this->_n_cover_12730=d::Array<float,true>(size_t((this->_n_CW_12728*this->_n_CH_12729)));
this->_n_tone_12731=d::Array<float,true>(size_t((this->_n_CW_12728*this->_n_CH_12729)));
this->_n_under_12732=d::Array<float,true>(size_t((this->_n_CW_12728*this->_n_CH_12729)));
{double _n_r_12870=0.0;
for(;d::truth((_n_r_12870<this->_n_CH_12729));(void)((_n_r_12870++))){d::check_cancel();{double _n_x_12871=0.0;
for(;d::truth((_n_x_12871<this->_n_CW_12728));(void)((_n_x_12871++))){d::check_cancel();double _n_y_12872=(_n_r_12870+0.5);
double _n_i_12873=((_n_r_12870*this->_n_CW_12728)+_n_x_12871);
double _n_d_12874=this->_n_density_12735(_n_x_12871,_n_y_12872);
double _n_b_12875=this->_n_baseAt_12733(_n_x_12871);
(void)(([&](){auto&& _n_array_13043=this->_n_cover_12730;auto _n_index_13044=_n_i_12873;auto _n_value_13045=_n_smooth_12702(0.42,0.55,_n_d_12874);d::put(_n_array_13043,_n_index_13044,_n_value_13045);return _n_value_13045;})());
double _n_bl_12876=this->_n_billow_12734(_n_x_12871,_n_y_12872);
double _n_shade_12877=(((_n_bl_12876-this->_n_billow_12734((_n_x_12871+1.0),(_n_y_12872-2.5)))*3.0)+((_n_bl_12876-0.6)*0.9));
(void)(([&](){auto&& _n_array_13046=this->_n_tone_12731;auto _n_index_13047=_n_i_12873;auto _n_value_13048=_n_clamp_12701(([&](){auto _n_left_13049=((0.25+_n_shade_12877)+(0.3*_n_smooth_12702((_n_b_12875-8.0),_n_b_12875,_n_y_12872)));auto _n_right_13050=(0.15*_n_smooth_12702(14.0,0.0,_n_y_12872));return (_n_left_13049-_n_right_13050);})());d::put(_n_array_13046,_n_index_13047,_n_value_13048);return _n_value_13048;})());
(void)(([&](){auto&& _n_array_13051=this->_n_under_12732;auto _n_index_13052=_n_i_12873;auto _n_value_13053=([&](){auto _n_left_13054=_n_clamp_12701(([&](){auto _n_left_13056=(0.25+(0.75*_n_smooth_12702((_n_b_12875-9.0),_n_b_12875,_n_y_12872)));auto _n_right_13057=((_n_bl_12876-this->_n_billow_12734(_n_x_12871,(_n_y_12872+2.5)))*2.0);return (_n_left_13056+_n_right_13057);})());auto _n_right_13055=_n_smooth_12702(4.0,14.0,_n_y_12872);return (_n_left_13054*_n_right_13055);})();d::put(_n_array_13051,_n_index_13052,_n_value_13053);return _n_value_13053;})());
}}
}}
this->_n_fork_12736=d::Array<float,true>(size_t(this->_n_N_12709));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12971> _a1) mutable ->d::String{double _n_t_12878=_a0;
auto _n_binding_13060=(d::present(_a1)?_a1:([&](){auto _n_object_13059=std::make_shared<_n_Record_12971>();return _n_object_13059;})());
std::optional<d::Array<uint8_t,true>> _n_color_12879=_n_binding_13060->_p_color;
{
double _n_lt_12880=d::mod((d::mod(_n_t_12878,_n_LOOP_12688)+_n_LOOP_12688),_n_LOOP_12688);
double _n_drift_12881=(_n_t_12878*1.1);
double _n_fl_12882=0.0;
double _n_af_12883=0.0;
double _n_bi_12884=0.0;
{double _n_s_12885=0.0;
for(;d::truth((_n_s_12885<double(_n_STRIKES_12689.size())));(void)((_n_s_12885++))){d::check_cancel();double _n_a_12886=(_n_lt_12880-d::at(d::at(_n_STRIKES_12689,_n_s_12885),0.0));
if(d::truth((_n_a_12886<0.0))){d::check_cancel();(void)((_n_a_12886=(_n_a_12886+_n_LOOP_12688)));
}
double _n_f_12887=_n_flashAt_12706(_n_a_12886);
double _n_g_12888=_n_afterAt_12707(_n_a_12886);
if(d::truth(((_n_f_12887+_n_g_12888)>(_n_fl_12882+_n_af_12883)))){d::check_cancel();(void)((((_n_fl_12882=_n_f_12887),(_n_af_12883=_n_g_12888)),(_n_bi_12884=_n_s_12885)));
}
}}
std::shared_ptr<_n_Record_12721> _n_B_12889=d::at(this->_n_bolts_12720,_n_bi_12884);
double _n_fls_12890=d::minimum({1.4,_n_fl_12882});
double _n_forkLight_12891=0.0;
double _n_fx_12892=0.0;
double _n_fy_12893=0.0;
(void)(this->_n_fork_12736.fill(0.0));
{double _n_i_12894=0.0;
for(;d::truth((_n_i_12894<double(_n_FORKS_12690.size())));(void)((_n_i_12894++))){d::check_cancel();double _n_a_12895=(_n_lt_12880-d::at(d::at(_n_FORKS_12690,_n_i_12894),0.0));
if(d::truth((_n_a_12895<0.0))){d::check_cancel();(void)((_n_a_12895=(_n_a_12895+_n_LOOP_12688)));
}
if(d::truth((_n_a_12895>0.6))){d::check_cancel();continue;
}
double _n_e_12896=([&](){auto _n_left_13061=std::exp(((-d::number(_n_a_12895))/0.12));auto _n_right_13062=(0.6*std::exp((-d::number(std::pow(((_n_a_12895-0.22)/0.05),2.0)))));return (_n_left_13061+_n_right_13062);})();
std::shared_ptr<_n_Record_12723> _n_F_12897=d::at(this->_n_forks_12722,_n_i_12894);
{double _n_j_12898=0.0;
for(;d::truth((_n_j_12898<double(_n_F_12897->_p_cells.size())));(void)((_n_j_12898++))){d::check_cancel();(void)(([&](){auto&& _n_array_13063=this->_n_fork_12736;auto _n_index_13064=d::at(_n_F_12897->_p_cells,_n_j_12898);auto _n_value_13065=(d::at(_n_array_13063,_n_index_13064)+(d::at(_n_F_12897->_p_vals,_n_j_12898)*_n_e_12896));d::put(_n_array_13063,_n_index_13064,_n_value_13065);return _n_value_13065;})());
}}
if(d::truth((_n_e_12896>_n_forkLight_12891))){d::check_cancel();(void)((((_n_forkLight_12891=_n_e_12896),(_n_fx_12892=_n_F_12897->_p_x)),(_n_fy_12893=_n_F_12897->_p_y)));
}
}}
{double _n_r_12899=0.0;
for(;d::truth((_n_r_12899<_n_H_12685));(void)((_n_r_12899++))){d::check_cancel();{double _n_x_12900=0.0;
for(;d::truth((_n_x_12900<_n_W_12684));(void)((_n_x_12900++))){d::check_cancel();double _n_k_12901=((_n_r_12899*_n_W_12684)+_n_x_12900);
double _n_y_12902=(_n_r_12899+0.5);
double _n_m_12903=d::at(this->_n_mat_12724,_n_k_12901);
double _n_cr_12904=0.0;
double _n_cg_12905=0.0;
double _n_cbl_12906=0.0;
double _n_floor_12907=0.22;
double _n_fade_12908=1.0;
double _n_od_12909=d::at(_n_B_12889->_p_outer,_n_k_12901);
double _n_near_12910=std::exp(((-d::number(_n_od_12909))/26.0));
double _n_light_12911=((_n_fls_12890*(0.12+(0.88*_n_near_12910)))*(0.2+(0.8*_n_smooth_12702(1.0,10.0,_n_od_12909))));
double _n_fd_12912=(d::truth(_n_forkLight_12891)?d::hypot(std::initializer_list<double>{(_n_x_12900-_n_fx_12892),((_n_y_12902-_n_fy_12893)*1.4)}):1000.0);
double _n_flight_12913=((_n_forkLight_12891*std::exp(((-d::number(_n_fd_12912))/20.0)))*0.6);
if(d::truth((_n_m_12903==_n_AIR_12695))){d::check_cancel();double _n_v_12914=(_n_y_12902/_n_HORIZON_12686);
double _n_sky_12915=((0.025+((((0.1*_n_v_12914)*_n_v_12914)*_n_v_12914)*_n_v_12914))+(0.2*std::exp(((-d::number((_n_HORIZON_12686-_n_y_12902)))/6.0))));
(void)((((_n_cr_12904=_n_sky_12915),(_n_cg_12905=_n_sky_12915)),(_n_cbl_12906=_n_sky_12915)));
(void)((_n_floor_12907=0.12));
double _n_air_12916=((_n_light_12911*0.16)+(_n_flight_12913*0.2));
(void)((((_n_cr_12904=(_n_cr_12904+(_n_air_12916*d::at(_n_EM_12694,0.0)))),(_n_cg_12905=(_n_cg_12905+(_n_air_12916*d::at(_n_EM_12694,1.0))))),(_n_cbl_12906=(_n_cbl_12906+(_n_air_12916*d::at(_n_EM_12694,2.0))))));
if(d::truth((_n_r_12899<this->_n_CH_12729))){d::check_cancel();double _n_sx_12917=(_n_x_12900+_n_drift_12881);
double _n_ix_12918=std::floor(_n_sx_12917);
double _n_f_12919=(_n_sx_12917-_n_ix_12918);
double _n_i0_12920=((_n_r_12899*this->_n_CW_12728)+d::mod(_n_ix_12918,this->_n_CW_12728));
double _n_i1_12921=((_n_r_12899*this->_n_CW_12728)+d::mod((_n_ix_12918+1.0),this->_n_CW_12728));
double _n_c_12922=(d::at(this->_n_cover_12730,_n_i0_12920)+((d::at(this->_n_cover_12730,_n_i1_12921)-d::at(this->_n_cover_12730,_n_i0_12920))*_n_f_12919));
if(d::truth((_n_c_12922>0.01))){d::check_cancel();double _n_tn_12923=(d::at(this->_n_tone_12731,_n_i0_12920)+((d::at(this->_n_tone_12731,_n_i1_12921)-d::at(this->_n_tone_12731,_n_i0_12920))*_n_f_12919));
double _n_un_12924=(d::at(this->_n_under_12732,_n_i0_12920)+((d::at(this->_n_under_12732,_n_i1_12921)-d::at(this->_n_under_12732,_n_i0_12920))*_n_f_12919));
double _n_g_12925=(0.05+(0.4*std::pow(_n_tn_12923,1.4)));
double _n_lit_12926=(((_n_light_12911*(0.15+(1.1*_n_un_12924)))+(_n_flight_12913*(0.3+_n_un_12924)))*0.9);
double _n_hot_12927=(_n_smooth_12702(0.7,1.6,_n_lit_12926)*0.6);
double _n_amb_12928=(0.07*_n_un_12924);
double _n_kr_12929=((_n_g_12925+((_n_lit_12926*_n_mix_12703(d::at(_n_EM_12694,0.0),1.0,_n_hot_12927))*0.75))+(_n_amb_12928*d::at(_n_EM_12694,0.0)));
double _n_kg_12930=((_n_g_12925+((_n_lit_12926*_n_mix_12703(d::at(_n_EM_12694,1.0),1.0,_n_hot_12927))*0.75))+(_n_amb_12928*d::at(_n_EM_12694,1.0)));
double _n_kb_12931=((_n_g_12925+((_n_lit_12926*_n_mix_12703(d::at(_n_EM_12694,2.0),1.0,_n_hot_12927))*0.75))+(_n_amb_12928*d::at(_n_EM_12694,2.0)));
(void)((((_n_cr_12904=_n_mix_12703(_n_cr_12904,_n_kr_12929,_n_c_12922)),(_n_cg_12905=_n_mix_12703(_n_cg_12905,_n_kg_12930,_n_c_12922))),(_n_cbl_12906=_n_mix_12703(_n_cbl_12906,_n_kb_12931,_n_c_12922))));
(void)((_n_floor_12907=_n_mix_12703(0.12,0.2,_n_c_12922)));
}
}
}else {d::check_cancel();if(d::truth((_n_m_12903==_n_HILL_12696))){d::check_cancel();double _n_s_12932=d::at(this->_n_slope_12725,_n_k_12901);
double _n_g_12933=((0.008+(0.015*_n_s_12932))+(0.12*d::at(this->_n_rim_12726,_n_k_12901)));
double _n_lx_12934=std::exp(((-d::number(std::fabs((_n_x_12900-_n_B_12889->_p_tip))))/55.0));
double _n_lit_12935=((((_n_fls_12890*(0.15+(0.85*_n_lx_12934)))*(0.3+(0.9*_n_s_12932)))*0.7)+((_n_flight_12913*0.3)*_n_s_12932));
(void)((((_n_cr_12904=(_n_g_12933+(_n_lit_12935*d::at(_n_EM_12694,0.0)))),(_n_cg_12905=(_n_g_12933+(_n_lit_12935*d::at(_n_EM_12694,1.0))))),(_n_cbl_12906=(_n_g_12933+(_n_lit_12935*d::at(_n_EM_12694,2.0))))));
(void)((_n_floor_12907=0.06));
}else {d::check_cancel();double _n_v_12936=((_n_y_12902-_n_HORIZON_12686)/(_n_H_12685-_n_HORIZON_12686));
double _n_w_12937=([&](){auto _n_left_13066=(0.6*_n_noise_12699(((_n_x_12900*0.08)+(_n_t_12878*0.15)),((_n_y_12902*0.5)-(_n_t_12878*0.7)),0.0));auto _n_right_13067=(0.4*_n_noise_12699(((_n_x_12900*0.22)-(_n_t_12878*0.3)),((_n_y_12902*1.0)-(_n_t_12878*1.2)),0.0));return (_n_left_13066+_n_right_13067);})();
double _n_sw_12938=(0.5+(0.9*_n_w_12937));
double _n_g_12939=((0.075-(0.035*_n_v_12936))*_n_sw_12938);
(void)((((_n_cr_12904=_n_g_12939),(_n_cg_12905=_n_g_12939)),(_n_cbl_12906=_n_g_12939)));
double _n_ry_12940=d::round(((_n_HORIZON_12686-((_n_y_12902-_n_HORIZON_12686)*2.1))-1.0));
double _n_rx_12941=d::round((_n_x_12900+((_n_w_12937-0.5)*4.0)));
double _n_refl_12942=0.0;
if(((d::truth((_n_ry_12940>=0.0))&&d::truth((_n_rx_12941>=0.0)))&&d::truth((_n_rx_12941<_n_W_12684)))){d::check_cancel();double _n_j_12943=((_n_ry_12940*_n_W_12684)+_n_rx_12941);
(void)((_n_refl_12942=([&](){auto _n_left_13068=((d::at(_n_B_12889->_p_mask,_n_j_12943)*((_n_fl_12882*0.8)+(_n_af_12883*0.5)))+((std::exp(((-d::number(d::at(_n_B_12889->_p_outer,_n_j_12943)))/8.0))*_n_fls_12890)*0.2));auto _n_right_13069=(0.1+(0.9*_n_smooth_12702(0.45,0.8,_n_w_12937)));return (_n_left_13068*_n_right_13069);})()));
}
double _n_sheen_12944=([&](){auto _n_left_13070=(((_n_fls_12890*std::exp(((-d::number(std::fabs((_n_x_12900-_n_B_12889->_p_tip))))/40.0)))*0.4)+(_n_flight_12913*0.2));auto _n_right_13071=_n_smooth_12702(0.45,0.8,_n_w_12937);return (_n_left_13070*_n_right_13071);})();
double _n_hot_12945=([&](){auto _n_left_13072=_n_clamp_12701(((_n_fl_12882*0.5)-0.2));auto _n_right_13073=_n_smooth_12702(0.6,0.85,_n_w_12937);return (_n_left_13072*_n_right_13073);})();
(void)((_n_cr_12904=(_n_cr_12904+((_n_refl_12942+_n_sheen_12944)*_n_mix_12703(d::at(_n_EM_12694,0.0),1.0,_n_hot_12945)))));
(void)((_n_cg_12905=(_n_cg_12905+((_n_refl_12942+_n_sheen_12944)*_n_mix_12703(d::at(_n_EM_12694,1.0),1.0,_n_hot_12945)))));
(void)((_n_cbl_12906=(_n_cbl_12906+((_n_refl_12942+_n_sheen_12944)*_n_mix_12703(d::at(_n_EM_12694,2.0),1.0,_n_hot_12945)))));
(void)((_n_floor_12907=0.14));
(void)((_n_fade_12908=_n_smooth_12702(_n_H_12685,(_n_H_12685-22.0),_n_y_12902)));
}
}
if(d::truth((_n_m_12903!=_n_SEA_12697))){d::check_cancel();double _n_bm_12946=d::at(_n_B_12889->_p_mask,_n_k_12901);
double _n_halo_12947=([&](){auto _n_left_13074=(([&](){auto _n_left_13076=_n_smooth_12702(0.5,3.5,_n_od_12909);auto _n_right_13077=std::exp(((-d::number(_n_od_12909))/7.0));return (_n_left_13076*_n_right_13077);})()*((_n_fls_12890*0.2)+(_n_af_12883*0.1)));auto _n_right_13075=((std::exp(((-d::number(_n_od_12909))/20.0))*_n_fls_12890)*0.05);return (_n_left_13074+_n_right_13075);})();
(void)((((_n_cr_12904=(_n_cr_12904+(_n_halo_12947*d::at(_n_EM_12694,0.0)))),(_n_cg_12905=(_n_cg_12905+(_n_halo_12947*d::at(_n_EM_12694,1.0))))),(_n_cbl_12906=(_n_cbl_12906+(_n_halo_12947*d::at(_n_EM_12694,2.0))))));
if(d::truth((_n_bm_12946>0.0))){d::check_cancel();double _n_core_12948=([&](){auto _n_left_13078=_n_smooth_12702(1.2,2.8,d::at(_n_B_12889->_p_inner,_n_k_12901));auto _n_right_13079=_n_clamp_12701((_n_fl_12882*1.2));return (_n_left_13078*_n_right_13079);})();
double _n_lum_12949=d::minimum({1.0,((_n_fl_12882*1.3)+(_n_af_12883*0.9))});
double _n_br_12950=(_n_mix_12703(d::at(_n_EM_12694,0.0),1.0,_n_core_12948)*_n_lum_12949);
double _n_bg_12951=(_n_mix_12703(d::at(_n_EM_12694,1.0),1.0,_n_core_12948)*_n_lum_12949);
double _n_bb_12952=(_n_mix_12703(d::at(_n_EM_12694,2.0),1.0,_n_core_12948)*_n_lum_12949);
(void)((((_n_cr_12904=_n_mix_12703(_n_cr_12904,_n_br_12950,_n_bm_12946)),(_n_cg_12905=_n_mix_12703(_n_cg_12905,_n_bg_12951,_n_bm_12946))),(_n_cbl_12906=_n_mix_12703(_n_cbl_12906,_n_bb_12952,_n_bm_12946))));
}
double _n_dt_12953=d::hypot(std::initializer_list<double>{((_n_x_12900+0.5)-_n_B_12889->_p_tip),((_n_y_12902-_n_HORIZON_12686)*1.6)});
double _n_burst_12954=([&](){auto _n_left_13080=((std::exp(((-d::number(_n_dt_12953))/3.0))*_n_fls_12890)*0.9);auto _n_right_13081=(std::exp(((-d::number(_n_dt_12953))/10.0))*((_n_fls_12890*0.3)+(_n_af_12883*0.15)));return (_n_left_13080+_n_right_13081);})();
(void)((((_n_cr_12904=(_n_cr_12904+(_n_burst_12954*_n_mix_12703(d::at(_n_EM_12694,0.0),1.0,0.4)))),(_n_cg_12905=(_n_cg_12905+(_n_burst_12954*_n_mix_12703(d::at(_n_EM_12694,1.0),1.0,0.4))))),(_n_cbl_12906=(_n_cbl_12906+(_n_burst_12954*_n_mix_12703(d::at(_n_EM_12694,2.0),1.0,0.4))))));
}
double _n_fv_12955=(d::at(this->_n_fork_12736,_n_k_12901)+(d::at(_n_B_12889->_p_leader,_n_k_12901)*d::minimum({1.3,((_n_fl_12882*1.3)+(_n_af_12883*0.35))})));
if(d::truth((_n_fv_12955>0.0))){d::check_cancel();double _n_h_12956=_n_smooth_12702(0.6,1.2,_n_fv_12955);
(void)((((_n_cr_12904=(_n_cr_12904+(_n_fv_12955*_n_mix_12703(d::at(_n_EM_12694,0.0),1.0,_n_h_12956)))),(_n_cg_12905=(_n_cg_12905+(_n_fv_12955*_n_mix_12703(d::at(_n_EM_12694,1.0),1.0,_n_h_12956))))),(_n_cbl_12906=(_n_cbl_12906+(_n_fv_12955*_n_mix_12703(d::at(_n_EM_12694,2.0),1.0,_n_h_12956))))));
}
double _n_lane_12957=std::floor((_n_x_12900+(_n_y_12902*0.28)));
double _n_hr_12958=_n_hash_12698(_n_lane_12957,17.0);
if((((d::truth((_n_hr_12958>0.5))&&d::truth((_n_y_12902>12.0)))&&d::truth((_n_m_12903!=_n_HILL_12696)))&&d::truth((d::at(_n_B_12889->_p_mask,_n_k_12901)<0.5)))){d::check_cancel();double _n_len_12959=(10.0+(_n_hash_12698(_n_lane_12957,18.0)*12.0));
double _n_p_12960=(((_n_y_12902-(_n_t_12878*(55.0+(_n_hr_12958*25.0))))+(_n_hash_12698(_n_lane_12957,19.0)*400.0))/_n_len_12959);
double _n_seg_12961=(_n_p_12960-std::floor(_n_p_12960));
if(d::truth((_n_seg_12961<0.3))){d::check_cancel();double _n_d_12962=((0.13*(1.0-(_n_seg_12961/0.3)))*_n_smooth_12702(12.0,34.0,_n_y_12902));
double _n_gl_12963=((_n_light_12911*0.6)+(_n_flight_12913*0.4));
(void)((((_n_cr_12904=(_n_cr_12904+(_n_d_12962+(((_n_d_12962*_n_gl_12963)*d::at(_n_EM_12694,0.0))*3.0)))),(_n_cg_12905=(_n_cg_12905+(_n_d_12962+(((_n_d_12962*_n_gl_12963)*d::at(_n_EM_12694,1.0))*3.0))))),(_n_cbl_12906=(_n_cbl_12906+(_n_d_12962+(((_n_d_12962*_n_gl_12963)*d::at(_n_EM_12694,2.0))*3.0))))));
}
}
double _n_peak_12964=d::maximum({_n_cr_12904,_n_cg_12905,_n_cbl_12906,0.0001});
double _n_level_12965=(_n_clamp_12701((_n_floor_12907+(((1.0-_n_floor_12907)*std::pow(_n_peak_12964,0.85))*0.95)))*_n_fade_12908);
double _n_step_12966=([&](){auto _n_argument_13082=0.0;auto _n_argument_13083=([&](){auto _n_argument_13084=3.0;auto _n_argument_13085=d::round(((_n_level_12965*3.0)+d::at(_n_BAYER_12693,((double(d::i32(_n_r_12899)&d::i32(3.0))*4.0)+double(d::i32(_n_x_12900)&d::i32(3.0))))));return d::minimum({_n_argument_13084,_n_argument_13085});})();return d::maximum({_n_argument_13082,_n_argument_13083});})();
(void)(([&](){auto&& _n_array_13086=this->_n_out_12710;auto _n_index_13087=_n_k_12901;auto _n_value_13088=d::at(_n_DOTS_12691,_n_step_12966);d::put(_n_array_13086,_n_index_13087,_n_value_13088);return _n_value_13088;})());
if(d::truth(_n_color_12879)){d::check_cancel();double _n_want_12967=(d::truth(_n_step_12966)?d::minimum({1.0,((_n_level_12965+0.06)/d::at(_n_COVER_12692,_n_step_12966))}):0.0);
double _n_s_12968=((0.3+(0.7*_n_want_12967))/d::maximum({_n_peak_12964,0.8}));
(void)(([&](){auto&& _n_array_13089=d::read(_n_color_12879);auto _n_index_13090=_n_k_12901;auto _n_value_13091=([&](){auto _n_argument_13092=_n_clamp_12701((_n_cr_12904*_n_s_12968));auto _n_argument_13093=_n_clamp_12701((_n_cg_12905*_n_s_12968));auto _n_argument_13094=_n_clamp_12701((_n_cbl_12906*_n_s_12968));return this->_n_nearest_12712(_n_argument_13092,_n_argument_13093,_n_argument_13094);})();d::put(_n_array_13089,_n_index_13090,_n_value_13091);return _n_value_13091;})());
}
}}
}}
d::Array<d::String,false> _n_lines_12969=d::Array<d::String,false>{};
{double _n_r_12970=0.0;
for(;d::truth((_n_r_12970<_n_H_12685));(void)((_n_r_12970++))){d::check_cancel();(void)(_n_lines_12969.push(d::join(this->_n_out_12710.slice((_n_r_12970*_n_W_12684),((_n_r_12970+1.0)*_n_W_12684)),d::String(u""))));
}}
return d::join(_n_lines_12969,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("green-storm").cols)*ascii::catalog_meta("green-storm").rows);auto _env=std::make_shared<_n_Record_12971>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &green_storm_meta(){return catalog_meta("green-storm");}
std::unique_ptr<Piece> make_green_storm(const AsciiPieceOptions &o){return std::make_unique<Native_green_storm>(o);}
}
