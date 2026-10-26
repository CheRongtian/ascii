// Direct, statically typed C++ from src/pieces/green-storm.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12681;
struct _n_Record_12720;
struct _n_Record_12722;
struct _n_Record_12970;
struct _n_Record_12681{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_12681> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12681>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_12720{
d::Array<float,true> _p_mask{};
d::Array<float,true> _p_inner{};
d::Array<float,true> _p_outer{};
d::Array<float,true> _p_leader{};
double _p_tip{};
static std::shared_ptr<_n_Record_12720> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12720>();out->_p_mask=d::decode<d::Array<float,true>>(j["mask"]);out->_p_inner=d::decode<d::Array<float,true>>(j["inner"]);out->_p_outer=d::decode<d::Array<float,true>>(j["outer"]);out->_p_leader=d::decode<d::Array<float,true>>(j["leader"]);out->_p_tip=d::decode<double>(j["tip"]);return out;}
};
struct _n_Record_12722{
d::Array<int32_t,true> _p_cells{};
d::Array<float,true> _p_vals{};
double _p_x{};
double _p_y{};
static std::shared_ptr<_n_Record_12722> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12722>();out->_p_cells=d::decode<d::Array<int32_t,true>>(j["cells"]);out->_p_vals=d::decode<d::Array<float,true>>(j["vals"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);return out;}
};
struct _n_Record_12970{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12970> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12970>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_12697(double _a0,double _a1);
double _n_noise_12698(double _a0,double _a1,double _a2);
double _n_fbm_12699(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_12700(double _a0);
double _n_smooth_12701(double _a0,double _a1,double _a2);
double _n_mix_12702(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_12703(d::String _a0);
d::Array<float,true> _n_chamfer_12704(d::Array<uint8_t,true> _a0);
double _n_flashAt_12705(double _a0);
double _n_afterAt_12706(double _a0);
std::shared_ptr<_n_Record_12681> _n_meta_12680=[](){return ([&](){auto _n_object_12973=std::make_shared<_n_Record_12681>();_n_object_12973->_p_name=d::String(u"green storm");_n_object_12973->_p_category=d::String(u"scenes");_n_object_12973->_p_note=d::String(u"a thunderstorm at sea, the lightning striking in the supabase bolt");_n_object_12973->_p_cols=200.0;_n_object_12973->_p_rows=100.0;_n_object_12973->_p_cell=1.0;_n_object_12973->_p_fps=15.0;_n_object_12973->_p_ground=d::String(u"#0e0e0e");_n_object_12973->_p_palette=d::Array<d::String,false>{d::String(u"#1c1c1c"),d::String(u"#242424"),d::String(u"#2e2e2e"),d::String(u"#3a3a3a"),d::String(u"#4a4a4a"),d::String(u"#5e5e5e"),d::String(u"#777777"),d::String(u"#939393"),d::String(u"#b4b4b4"),d::String(u"#d6d6d6"),d::String(u"#1d2a24"),d::String(u"#243a30"),d::String(u"#2d4d3e"),d::String(u"#3a6450"),d::String(u"#4d8066"),d::String(u"#67a084"),d::String(u"#0f3324"),d::String(u"#14472f"),d::String(u"#1a5e3e"),d::String(u"#22784f"),d::String(u"#2c9663"),d::String(u"#36b578"),d::String(u"#3ecf8e"),d::String(u"#65dba5"),d::String(u"#8fe6be"),d::String(u"#bdf2d8"),d::String(u"#e6fbf1"),d::String(u"#ffffff")};return _n_object_12973;})();}();
const d::String _n_INK_12682=[](){return d::String(u"\n                      000000\n                     0000000\n                   000000000\n                 00000000000\n                000000000000\n              00000000000000\n             000000000000000\n           00000000000000000\n         0000000000000000000\n        00000000000000000000000000000000000000000000\n      00000000000000000000000000000000000000000000000\n     000000000000000000000000000000000000000000000000\n   00000000000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000000000000\n  000000000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000000000\n   00000000000000000000000000000000000000000000\n                           000000000000000000\n                           00000000000000000\n                           000000000000000\n                           00000000000000\n                           000000000000\n                           0000000000\n                           000000000\n                           0000000\n                           000000\n");}();
const double _n_W_12683=[](){return 200.0;}();
const double _n_H_12684=[](){return 100.0;}();
const double _n_HORIZON_12685=[](){return 76.0;}();
const double _n_BOLT_TOP_12686=[](){return 28.0;}();
const double _n_LOOP_12687=[](){return 10.8;}();
d::Array<std::array<double,2>,false> _n_STRIKES_12688=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{0.0,100.0},std::array<double,2>{3.6,74.0},std::array<double,2>{7.2,126.0}};}();
d::Array<std::array<double,2>,false> _n_FORKS_12689=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{1.5,1.0},std::array<double,2>{2.95,2.0},std::array<double,2>{5.1,3.0},std::array<double,2>{6.0,4.0},std::array<double,2>{8.8,5.0},std::array<double,2>{9.9,6.0}};}();
const d::String _n_DOTS_12690=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_12691=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_12692=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_12736=_a0;
return ((_n_v_12736/16.0)-0.47);});}();
d::Array<double,false> _n_EM_12693=[](){return d::Array<double,false>{0.243,0.812,0.557};}();
const double _n_AIR_12694=[](){return 0.0;}();
const double _n_HILL_12695=[](){return 1.0;}();
const double _n_SEA_12696=[](){return 2.0;}();
double _n_hash_12697(double _a0,double _a1){double _n_x_12737=_a0;
double _n_y_12738=_a1;
{
double _n_h_12739=([&](){auto _n_left_12974=d::imul(double(d::i32(_n_x_12737)|d::i32(0.0)),374761393.0);auto _n_right_12975=d::imul(double(d::i32(_n_y_12738)|d::i32(0.0)),668265263.0);return (_n_left_12974+_n_right_12975);})();
(void)((_n_h_12739=d::imul(double(d::i32(_n_h_12739)^d::i32(double(d::u32(_n_h_12739)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_12739)^d::i32(double(d::u32(_n_h_12739)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_12698(double _a0,double _a1,double _a2){double _n_x_12740=_a0;
double _n_y_12741=_a1;
double _n_period_12742=_a2;
{
double _n_xi_12743=std::floor(_n_x_12740);
double _n_yi_12744=std::floor(_n_y_12741);
double _n_fx_12745=(_n_x_12740-_n_xi_12743);
double _n_fy_12746=(_n_y_12741-_n_yi_12744);
double _n_u_12747=((_n_fx_12745*_n_fx_12745)*(3.0-(2.0*_n_fx_12745)));
double _n_v_12748=((_n_fy_12746*_n_fy_12746)*(3.0-(2.0*_n_fy_12746)));
double _n_x0_12749=_n_xi_12743;
double _n_x1_12750=(_n_xi_12743+1.0);
if(d::truth(_n_period_12742)){d::check_cancel();(void)((_n_x0_12749=d::mod((d::mod(_n_xi_12743,_n_period_12742)+_n_period_12742),_n_period_12742)));
(void)((_n_x1_12750=d::mod((_n_x0_12749+1.0),_n_period_12742)));
}
double _n_a_12751=_n_hash_12697(_n_x0_12749,_n_yi_12744);
double _n_b_12752=_n_hash_12697(_n_x1_12750,_n_yi_12744);
double _n_c_12753=_n_hash_12697(_n_x0_12749,(_n_yi_12744+1.0));
double _n_d_12754=_n_hash_12697(_n_x1_12750,(_n_yi_12744+1.0));
return (((_n_a_12751+((_n_b_12752-_n_a_12751)*_n_u_12747))+((_n_c_12753-_n_a_12751)*_n_v_12748))+(((((_n_a_12751-_n_b_12752)-_n_c_12753)+_n_d_12754)*_n_u_12747)*_n_v_12748));

}
}

double _n_fbm_12699(double _a0,double _a1,double _a2,double _a3){double _n_x_12755=_a0;
double _n_y_12756=_a1;
double _n_octaves_12757=_a2;
double _n_period_12758=_a3;
{
double _n_s_12759=0.0;
double _n_n_12760=0.0;
double _n_amp_12761=0.5;
double _n_f_12762=1.0;
{double _n_i_12763=0.0;
for(;d::truth((_n_i_12763<_n_octaves_12757));(void)((_n_i_12763++))){d::check_cancel();(void)((_n_s_12759=(_n_s_12759+(_n_amp_12761*_n_noise_12698((_n_x_12755*_n_f_12762),(_n_y_12756*_n_f_12762),(_n_period_12758*_n_f_12762))))));
(void)((_n_n_12760=(_n_n_12760+_n_amp_12761)));
(void)((_n_amp_12761=(_n_amp_12761*0.5)));
(void)((_n_f_12762=(_n_f_12762*2.0)));
}}
return (_n_s_12759/_n_n_12760);

}
}

double _n_clamp_12700(double _a0){double _n_v_12764=_a0;
return (d::truth((_n_v_12764<0.0))?0.0:(d::truth((_n_v_12764>1.0))?1.0:_n_v_12764));}

double _n_smooth_12701(double _a0,double _a1,double _a2){double _n_a_12765=_a0;
double _n_b_12766=_a1;
double _n_v_12767=_a2;
{
double _n_k_12768=_n_clamp_12700(((_n_v_12767-_n_a_12765)/(_n_b_12766-_n_a_12765)));
return ((_n_k_12768*_n_k_12768)*(3.0-(2.0*_n_k_12768)));

}
}

double _n_mix_12702(double _a0,double _a1,double _a2){double _n_a_12769=_a0;
double _n_b_12770=_a1;
double _n_k_12771=_a2;
return (_n_a_12769+((_n_b_12770-_n_a_12769)*_n_k_12771));}

d::Array<double,false> _n_hex_12703(d::String _a0){d::String _n_s_12772=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_12773=_a0;
return (([&](){auto _n_argument_12976=d::slice(_n_s_12772,_n_i_12773,(_n_i_12773+2.0));auto _n_argument_12977=16.0;return d::parseInt(_n_argument_12976,_n_argument_12977);})()/255.0);});}

d::Array<float,true> _n_chamfer_12704(d::Array<uint8_t,true> _a0){d::Array<uint8_t,true> _n_inside_12774=_a0;
{
d::Array<float,true> _n_d_12775=d::Array<float,true>(size_t((_n_W_12683*_n_H_12684)));
{double _n_k_12776=0.0;
for(;d::truth((_n_k_12776<(_n_W_12683*_n_H_12684)));(void)((_n_k_12776++))){d::check_cancel();(void)(([&](){auto&& _n_array_12978=_n_d_12775;auto _n_index_12979=_n_k_12776;auto _n_value_12980=(d::truth(d::at(_n_inside_12774,_n_k_12776))?10000.0:0.0);d::put(_n_array_12978,_n_index_12979,_n_value_12980);return _n_value_12980;})());
}}
double _n_A_12777=1.0;
double _n_B_12778=std::sqrt(2.);
{double _n_r_12779=0.0;
for(;d::truth((_n_r_12779<_n_H_12684));(void)((_n_r_12779++))){d::check_cancel();{double _n_x_12780=0.0;
for(;d::truth((_n_x_12780<_n_W_12683));(void)((_n_x_12780++))){d::check_cancel();double _n_k_12781=((_n_r_12779*_n_W_12683)+_n_x_12780);
if(d::truth((!d::truth(d::at(_n_d_12775,_n_k_12781))))){d::check_cancel();continue;
}
double _n_v_12782=d::at(_n_d_12775,_n_k_12781);
if(d::truth((_n_x_12780>0.0))){d::check_cancel();(void)((_n_v_12782=d::minimum({_n_v_12782,(d::at(_n_d_12775,(_n_k_12781-1.0))+_n_A_12777)})));
}
if(d::truth((_n_r_12779>0.0))){d::check_cancel();(void)((_n_v_12782=d::minimum({_n_v_12782,(d::at(_n_d_12775,(_n_k_12781-_n_W_12683))+_n_A_12777)})));
if(d::truth((_n_x_12780>0.0))){d::check_cancel();(void)((_n_v_12782=d::minimum({_n_v_12782,(d::at(_n_d_12775,((_n_k_12781-_n_W_12683)-1.0))+_n_B_12778)})));
}
if(d::truth((_n_x_12780<(_n_W_12683-1.0)))){d::check_cancel();(void)((_n_v_12782=d::minimum({_n_v_12782,(d::at(_n_d_12775,((_n_k_12781-_n_W_12683)+1.0))+_n_B_12778)})));
}
}
(void)(([&](){auto&& _n_array_12981=_n_d_12775;auto _n_index_12982=_n_k_12781;auto _n_value_12983=_n_v_12782;d::put(_n_array_12981,_n_index_12982,_n_value_12983);return _n_value_12983;})());
}}
}}
{double _n_r_12783=(_n_H_12684-1.0);
for(;d::truth((_n_r_12783>=0.0));(void)((_n_r_12783--))){d::check_cancel();{double _n_x_12784=(_n_W_12683-1.0);
for(;d::truth((_n_x_12784>=0.0));(void)((_n_x_12784--))){d::check_cancel();double _n_k_12785=((_n_r_12783*_n_W_12683)+_n_x_12784);
if(d::truth((!d::truth(d::at(_n_d_12775,_n_k_12785))))){d::check_cancel();continue;
}
double _n_v_12786=d::at(_n_d_12775,_n_k_12785);
if(d::truth((_n_x_12784<(_n_W_12683-1.0)))){d::check_cancel();(void)((_n_v_12786=d::minimum({_n_v_12786,(d::at(_n_d_12775,(_n_k_12785+1.0))+_n_A_12777)})));
}
if(d::truth((_n_r_12783<(_n_H_12684-1.0)))){d::check_cancel();(void)((_n_v_12786=d::minimum({_n_v_12786,(d::at(_n_d_12775,(_n_k_12785+_n_W_12683))+_n_A_12777)})));
if(d::truth((_n_x_12784<(_n_W_12683-1.0)))){d::check_cancel();(void)((_n_v_12786=d::minimum({_n_v_12786,(d::at(_n_d_12775,((_n_k_12785+_n_W_12683)+1.0))+_n_B_12778)})));
}
if(d::truth((_n_x_12784>0.0))){d::check_cancel();(void)((_n_v_12786=d::minimum({_n_v_12786,(d::at(_n_d_12775,((_n_k_12785+_n_W_12683)-1.0))+_n_B_12778)})));
}
}
(void)(([&](){auto&& _n_array_12984=_n_d_12775;auto _n_index_12985=_n_k_12785;auto _n_value_12986=_n_v_12786;d::put(_n_array_12984,_n_index_12985,_n_value_12986);return _n_value_12986;})());
}}
}}
return _n_d_12775;

}
}

double _n_flashAt_12705(double _a0){double _n_a_12787=_a0;
return (d::truth((_n_a_12787<0.0))?0.0:([&](){auto _n_left_12987=([&](){auto _n_left_12989=std::exp(((-d::number(_n_a_12787))/0.16));auto _n_right_12990=(0.75*std::exp((-d::number(std::pow(((_n_a_12787-0.33)/0.07),2.0)))));return (_n_left_12989+_n_right_12990);})();auto _n_right_12988=(0.5*std::exp((-d::number(std::pow(((_n_a_12787-0.6)/0.08),2.0)))));return (_n_left_12987+_n_right_12988);})());}

double _n_afterAt_12706(double _a0){double _n_a_12788=_a0;
return (d::truth((_n_a_12788<0.0))?0.0:std::exp(((-d::number(_n_a_12788))/1.8)));}

struct Native_green_storm final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_12707{};
double _n_N_12708{};
d::Array<d::String,false> _n_out_12709{};
d::Array<uint8_t,true> _n_lut_12710{};
d::Array<d::String,false> _n_grid_12712{};
double _n_GR_12713{};
double _n_GC_12714{};
double _n_scale_12716{};
double _n_tipCol_12717{};
double _n_topCol_12718{};
d::Array<std::shared_ptr<_n_Record_12720>,false> _n_bolts_12719{};
d::Array<std::shared_ptr<_n_Record_12722>,false> _n_forks_12721{};
d::Array<uint8_t,true> _n_mat_12723{};
d::Array<float,true> _n_slope_12724{};
d::Array<float,true> _n_rim_12725{};
double _n_CW_12727{};
double _n_CH_12728{};
d::Array<float,true> _n_cover_12729{};
d::Array<float,true> _n_tone_12730{};
d::Array<float,true> _n_under_12731{};
d::Array<float,true> _n_fork_12735{};
std::function<d::String(double,std::shared_ptr<_n_Record_12970>)> _render;
double _n_nearest_12711(double _a0,double _a1,double _a2){double _n_r_12789=_a0;
double _n_g_12790=_a1;
double _n_b_12791=_a2;
{
double _n_k_12792=([&](){auto _n_left_13094=([&](){auto _n_left_13096=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_12789*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_13097=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_12790*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_13096)|d::i32(_n_right_13097));})();auto _n_right_13095=d::minimum({31.0,double(d::i32((_n_b_12791*31.99))|d::i32(0.0))});return double(d::i32(_n_left_13094)|d::i32(_n_right_13095));})();
if(d::truth((d::at(this->_n_lut_12710,_n_k_12792)!=255.0))){d::check_cancel();return d::at(this->_n_lut_12710,_n_k_12792);
}
double _n_best_12793=0.0;
double _n_bd_12794=1000000000.0;
{double _n_i_12795=0.0;
for(;d::truth((_n_i_12795<double(this->_n_P_12707.size())));(void)((_n_i_12795++))){d::check_cancel();double _n_dr_12796=(d::at(d::at(this->_n_P_12707,_n_i_12795),0.0)-_n_r_12789);
double _n_dg_12797=(d::at(d::at(this->_n_P_12707,_n_i_12795),1.0)-_n_g_12790);
double _n_db_12798=(d::at(d::at(this->_n_P_12707,_n_i_12795),2.0)-_n_b_12791);
double _n_d_12799=((((0.3*_n_dr_12796)*_n_dr_12796)+((0.5*_n_dg_12797)*_n_dg_12797))+((0.2*_n_db_12798)*_n_db_12798));
if(d::truth((_n_d_12799<_n_bd_12794))){d::check_cancel();(void)(((_n_bd_12794=_n_d_12799),(_n_best_12793=_n_i_12795)));
}
}}
return ([&](){auto&& _n_array_13098=this->_n_lut_12710;auto _n_index_13099=_n_k_12792;auto _n_value_13100=_n_best_12793;d::put(_n_array_13098,_n_index_13099,_n_value_13100);return _n_value_13100;})();

}
}

double _n_ink_12715(double _a0,double _a1){double _n_c_12801=_a0;
double _n_r_12802=_a1;
return ((((((d::truth((_n_r_12802>=0.0))&&d::truth((_n_r_12802<this->_n_GR_12713)))&&d::truth((_n_c_12801>=0.0)))&&d::truth((_n_c_12801<this->_n_GC_12714)))&&d::truth(d::at(d::at(this->_n_grid_12712,_n_r_12802),_n_c_12801)))&&d::truth((d::at(d::at(this->_n_grid_12712,_n_r_12802),_n_c_12801)!=d::String(u" "))))?1.0:0.0);}

double _n_hill_12726(double _a0){double _n_x_12856=_a0;
return (([&](){auto _n_left_13101=([&](){auto _n_left_13103=(_n_HORIZON_12685-(12.0*_n_smooth_12701(66.0,8.0,_n_x_12856)));auto _n_right_13104=(7.0*_n_smooth_12701(136.0,192.0,_n_x_12856));return (_n_left_13103-_n_right_13104);})();auto _n_right_13102=([&](){auto _n_left_13105=(2.5*_n_fbm_12699((_n_x_12856*0.07),5.3,3.0,0.0));auto _n_right_13106=([&](){auto _n_left_13107=_n_smooth_12701(70.0,50.0,_n_x_12856);auto _n_right_13108=_n_smooth_12701(130.0,150.0,_n_x_12856);return (_n_left_13107+_n_right_13108);})();return (_n_left_13105*_n_right_13106);})();return (_n_left_13101-_n_right_13102);})()+1.2);}

double _n_baseAt_12732(double _a0){double _n_x_12862=_a0;
return (14.0+(20.0*_n_fbm_12699((_n_x_12862*0.028),7.7,4.0,(this->_n_CW_12727*0.028))));}

double _n_billow_12733(double _a0,double _a1){double _n_x_12863=_a0;
double _n_y_12864=_a1;
{
double _n_n_12865=_n_fbm_12699((_n_x_12863*0.032),(_n_y_12864*0.052),4.0,(this->_n_CW_12727*0.032));
return (1.0-std::fabs(((_n_n_12865*2.0)-1.0)));

}
}

double _n_density_12734(double _a0,double _a1){double _n_x_12866=_a0;
double _n_y_12867=_a1;
{
double _n_b_12868=this->_n_baseAt_12732(_n_x_12866);
return (([&](){auto _n_left_13109=(0.62*_n_smooth_12701((_n_b_12868+3.0),(_n_b_12868-3.0),_n_y_12867));auto _n_right_13110=(0.4*this->_n_billow_12733(_n_x_12866,_n_y_12867));return (_n_left_13109+_n_right_13110);})()-0.12);

}
}

explicit Native_green_storm(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_12707=d::map(_n_meta_12680->_p_palette,_n_hex_12703);
this->_n_N_12708=(_n_W_12683*_n_H_12684);
this->_n_out_12709=d::Array<d::String,false>(size_t(this->_n_N_12708));
this->_n_lut_12710=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_grid_12712=d::split(d::slice(_n_INK_12682,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_GR_12713=double(this->_n_grid_12712.size());
this->_n_GC_12714=([&](){d::Array<double> _n_numbers_12991;for(auto _x:d::map(this->_n_grid_12712,[&]( d::String _a0) mutable ->double{d::String _n_l_12800=_a0;
return double(_n_l_12800.size());}))_n_numbers_12991.push(_x);return d::maximum(_n_numbers_12991);})();
this->_n_scale_12716=((_n_HORIZON_12685-_n_BOLT_TOP_12686)/(this->_n_GR_12713*2.0));
this->_n_tipCol_12717=0.0;
{double _n_c_12803=0.0;
for(;d::truth((_n_c_12803<this->_n_GC_12714));(void)((_n_c_12803++))){d::check_cancel();if(d::truth(this->_n_ink_12715(_n_c_12803,(this->_n_GR_12713-1.0)))){d::check_cancel();(void)((this->_n_tipCol_12717=(this->_n_tipCol_12717+(_n_c_12803/double(d::trim(d::at(this->_n_grid_12712,(this->_n_GR_12713-1.0))).size())))));
}
}}
(void)((this->_n_tipCol_12717=(this->_n_tipCol_12717+0.5)));
this->_n_topCol_12718=0.0;
{double _n_c_12804=0.0;
for(;d::truth((_n_c_12804<this->_n_GC_12714));(void)((_n_c_12804++))){d::check_cancel();if(d::truth(this->_n_ink_12715(_n_c_12804,0.0))){d::check_cancel();(void)((this->_n_topCol_12718=(this->_n_topCol_12718+(_n_c_12804/double(d::trim(d::at(this->_n_grid_12712,0.0)).size())))));
}
}}
(void)((this->_n_topCol_12718=(this->_n_topCol_12718+0.5)));
this->_n_bolts_12719=d::map(_n_STRIKES_12688,[&]( std::array<double,2> _a0) mutable ->std::shared_ptr<_n_Record_12720>{auto _n_binding_12992=_a0;
double _n_cx_12805=d::at(_n_binding_12992,1.0);
{
double _n_x0_12806=(_n_cx_12805-((this->_n_GC_12714*this->_n_scale_12716)/2.0));
d::Array<float,true> _n_mask_12807=d::Array<float,true>(size_t(this->_n_N_12708));
d::Array<uint8_t,true> _n_solid_12808=d::Array<uint8_t,true>(size_t(this->_n_N_12708));
{double _n_r_12809=0.0;
for(;d::truth((_n_r_12809<_n_H_12684));(void)((_n_r_12809++))){d::check_cancel();{double _n_x_12810=0.0;
for(;d::truth((_n_x_12810<_n_W_12683));(void)((_n_x_12810++))){d::check_cancel();double _n_u_12811=((((_n_x_12810+0.5)-_n_x0_12806)/this->_n_scale_12716)-0.5);
double _n_v_12812=((((_n_r_12809+0.5)-_n_BOLT_TOP_12686)/(2.0*this->_n_scale_12716))-0.5);
double _n_ui_12813=std::floor(_n_u_12811);
double _n_vi_12814=std::floor(_n_v_12812);
double _n_fu_12815=(_n_u_12811-_n_ui_12813);
double _n_fv_12816=(_n_v_12812-_n_vi_12814);
double _n_a_12817=this->_n_ink_12715(_n_ui_12813,_n_vi_12814);
double _n_b_12818=this->_n_ink_12715((_n_ui_12813+1.0),_n_vi_12814);
double _n_c_12819=this->_n_ink_12715(_n_ui_12813,(_n_vi_12814+1.0));
double _n_d_12820=this->_n_ink_12715((_n_ui_12813+1.0),(_n_vi_12814+1.0));
double _n_s_12821=(((_n_a_12817+((_n_b_12818-_n_a_12817)*_n_fu_12815))+((_n_c_12819-_n_a_12817)*_n_fv_12816))+(((((_n_a_12817-_n_b_12818)-_n_c_12819)+_n_d_12820)*_n_fu_12815)*_n_fv_12816));
(void)(([&](){auto&& _n_array_12993=_n_mask_12807;auto _n_index_12994=((_n_r_12809*_n_W_12683)+_n_x_12810);auto _n_value_12995=_n_smooth_12701(0.45,0.55,_n_s_12821);d::put(_n_array_12993,_n_index_12994,_n_value_12995);return _n_value_12995;})());
(void)(([&](){auto&& _n_array_12996=_n_solid_12808;auto _n_index_12997=((_n_r_12809*_n_W_12683)+_n_x_12810);auto _n_value_12998=(d::truth((_n_s_12821>0.5))?1.0:0.0);d::put(_n_array_12996,_n_index_12997,_n_value_12998);return _n_value_12998;})());
}}
}}
d::Array<float,true> _n_inner_12822=_n_chamfer_12704(_n_solid_12808);
d::Array<uint8_t,true> _n_outside_12823=d::Array<uint8_t,true>(size_t(this->_n_N_12708));
{double _n_k_12824=0.0;
for(;d::truth((_n_k_12824<this->_n_N_12708));(void)((_n_k_12824++))){d::check_cancel();(void)(([&](){auto&& _n_array_12999=_n_outside_12823;auto _n_index_13000=_n_k_12824;auto _n_value_13001=(d::truth(d::at(_n_solid_12808,_n_k_12824))?0.0:1.0);d::put(_n_array_12999,_n_index_13000,_n_value_13001);return _n_value_13001;})());
}}
d::Array<float,true> _n_outer_12825=_n_chamfer_12704(_n_outside_12823);
d::Array<float,true> _n_leader_12826=d::Array<float,true>(size_t(this->_n_N_12708));
double _n_lx_12827=(_n_x0_12806+(this->_n_topCol_12718*this->_n_scale_12716));
double _n_ly_12828=(_n_BOLT_TOP_12686+1.0);
double _n_dir_12829=0.0;
{double _n_i_12830=0.0;
for(;d::truth((_n_ly_12828>6.0));(void)((_n_i_12830++))){d::check_cancel();if(d::truth((d::mod(_n_i_12830,4.0)==0.0))){d::check_cancel();(void)((_n_dir_12829=(([&](){auto _n_left_13002=(d::truth((_n_hash_12697(_n_cx_12805,_n_i_12830)>0.5))?1.0:(-d::number(1.0)));auto _n_right_13003=(0.6+(_n_hash_12697(_n_cx_12805,(_n_i_12830+50.0))*0.9));return (_n_left_13002*_n_right_13003);})()-((_n_lx_12827-(_n_x0_12806+(this->_n_topCol_12718*this->_n_scale_12716)))*0.08))));
}
(void)((_n_lx_12827=(_n_lx_12827+_n_dir_12829)));
(void)((_n_ly_12828=(_n_ly_12828-0.7)));
{double _n_dx_12831=(-d::number(1.0));
for(;d::truth((_n_dx_12831<=1.0));(void)((_n_dx_12831++))){d::check_cancel();double _n_k_12832=(([&](){auto _n_left_13004=(d::round(_n_ly_12828)*_n_W_12683);auto _n_right_13005=d::round(_n_lx_12827);return (_n_left_13004+_n_right_13005);})()+_n_dx_12831);
(void)(([&](){auto&& _n_array_13006=_n_leader_12826;auto _n_index_13007=_n_k_12832;auto _n_value_13008=d::maximum({d::at(_n_leader_12826,_n_k_12832),(d::truth(_n_dx_12831)?0.25:1.0)});d::put(_n_array_13006,_n_index_13007,_n_value_13008);return _n_value_13008;})());
}}
}}
return ([&](){auto _n_object_13010=std::make_shared<_n_Record_12720>();_n_object_13010->_p_mask=_n_mask_12807;_n_object_13010->_p_inner=_n_inner_12822;_n_object_13010->_p_outer=_n_outer_12825;_n_object_13010->_p_leader=_n_leader_12826;_n_object_13010->_p_tip=(_n_x0_12806+(this->_n_tipCol_12717*this->_n_scale_12716));return _n_object_13010;})();

}
});
this->_n_forks_12721=d::map(_n_FORKS_12689,[&]( std::array<double,2> _a0) mutable ->std::shared_ptr<_n_Record_12722>{auto _n_binding_13011=_a0;
double _n_seed_12833=d::at(_n_binding_13011,1.0);
{
d::Array<float,true> _n_glow_12834=d::Array<float,true>(size_t(this->_n_N_12708));
double _n_sx_12835=(20.0+(_n_hash_12697(_n_seed_12833,71.0)*160.0));
double _n_sy_12836=(24.0+(_n_hash_12697(_n_seed_12833,72.0)*10.0));
std::function<void(double,double,double,double,double,double)> _n_draw_12837=[&]( double _a0,double _a1,double _a2,double _a3,double _a4,double _a5) mutable ->void{double _n_x_12838=_a0;
double _n_y_12839=_a1;
double _n_len_12840=_a2;
double _n_w_12841=_a3;
double _n_depth_12842=_a4;
double _n_salt_12843=_a5;
{
double _n_dir_12844=((_n_hash_12697(_n_salt_12843,1.0)-0.5)*0.9);
{double _n_i_12845=0.0;
for(;d::truth((_n_i_12845<_n_len_12840));(void)((_n_i_12845++))){d::check_cancel();if(d::truth((d::mod(_n_i_12845,3.0)==0.0))){d::check_cancel();(void)((_n_dir_12844=([&](){auto _n_left_13012=((_n_hash_12697(_n_salt_12843,(_n_i_12845+7.0))-0.5)*2.2);auto _n_right_13013=((_n_hash_12697(_n_salt_12843,3.0)-0.5)*0.6);return (_n_left_13012+_n_right_13013);})()));
}
(void)((_n_x_12838=(_n_x_12838+_n_dir_12844)));
(void)((_n_y_12839=(_n_y_12839+(0.8+(_n_hash_12697(_n_salt_12843,(_n_i_12845+40.0))*0.5)))));
{double _n_dy_12846=(-d::number(2.0));
for(;d::truth((_n_dy_12846<=2.0));(void)((_n_dy_12846++))){d::check_cancel();{double _n_dx_12847=(-d::number(2.0));
for(;d::truth((_n_dx_12847<=2.0));(void)((_n_dx_12847++))){d::check_cancel();double _n_cx_12848=(d::round(_n_x_12838)+_n_dx_12847);
double _n_cy_12849=(d::round(_n_y_12839)+_n_dy_12846);
if((((d::truth((_n_cx_12848<0.0))||d::truth((_n_cx_12848>=_n_W_12683)))||d::truth((_n_cy_12849<0.0)))||d::truth((_n_cy_12849>=_n_HORIZON_12685)))){d::check_cancel();continue;
}
double _n_dd_12850=d::hypot(std::initializer_list<double>{((_n_cx_12848+0.5)-_n_x_12838),((_n_cy_12849+0.5)-_n_y_12839)});
double _n_v_12851=(_n_w_12841*(d::truth((_n_dd_12850<0.75))?1.0:(0.3*std::exp(((-d::number(_n_dd_12850))/1.1)))));
double _n_k_12852=((_n_cy_12849*_n_W_12683)+_n_cx_12848);
if(d::truth((_n_v_12851>d::at(_n_glow_12834,_n_k_12852)))){d::check_cancel();(void)(([&](){auto&& _n_array_13014=_n_glow_12834;auto _n_index_13015=_n_k_12852;auto _n_value_13016=_n_v_12851;d::put(_n_array_13014,_n_index_13015,_n_value_13016);return _n_value_13016;})());
}
}}
}}
if((d::truth((_n_depth_12842<2.0))&&d::truth((_n_hash_12697(_n_salt_12843,(_n_i_12845+90.0))>0.9)))){d::check_cancel();(void)(_n_draw_12837(_n_x_12838,_n_y_12839,(_n_len_12840*0.45),(_n_w_12841*0.7),(_n_depth_12842+1.0),((_n_salt_12843*7.0)+_n_i_12845)));
}
}}

}
};
(void)(([&](){auto _n_argument_13017=_n_sx_12835;auto _n_argument_13018=_n_sy_12836;auto _n_argument_13019=(22.0+(_n_hash_12697(_n_seed_12833,73.0)*22.0));auto _n_argument_13020=1.0;auto _n_argument_13021=0.0;auto _n_argument_13022=(_n_seed_12833*131.0);return _n_draw_12837(_n_argument_13017,_n_argument_13018,_n_argument_13019,_n_argument_13020,_n_argument_13021,_n_argument_13022);})());
d::Array<double,false> _n_cells_12853=d::Array<double,false>{};
d::Array<double,false> _n_vals_12854=d::Array<double,false>{};
{double _n_k_12855=0.0;
for(;d::truth((_n_k_12855<this->_n_N_12708));(void)((_n_k_12855++))){d::check_cancel();if(d::truth((d::at(_n_glow_12834,_n_k_12855)>0.02))){d::check_cancel();(void)((_n_cells_12853.push(_n_k_12855),_n_vals_12854.push(d::at(_n_glow_12834,_n_k_12855))));
}
}}
return ([&](){auto _n_object_13024=std::make_shared<_n_Record_12722>();_n_object_13024->_p_cells=d::Array<int32_t,true>(_n_cells_12853);_n_object_13024->_p_vals=d::Array<float,true>(_n_vals_12854);_n_object_13024->_p_x=_n_sx_12835;_n_object_13024->_p_y=(_n_sy_12836+14.0);return _n_object_13024;})();

}
});
this->_n_mat_12723=d::Array<uint8_t,true>(size_t(this->_n_N_12708));
this->_n_slope_12724=d::Array<float,true>(size_t(this->_n_N_12708));
this->_n_rim_12725=d::Array<float,true>(size_t(this->_n_N_12708));
{double _n_r_12857=0.0;
for(;d::truth((_n_r_12857<_n_H_12684));(void)((_n_r_12857++))){d::check_cancel();{double _n_x_12858=0.0;
for(;d::truth((_n_x_12858<_n_W_12683));(void)((_n_x_12858++))){d::check_cancel();double _n_k_12859=((_n_r_12857*_n_W_12683)+_n_x_12858);
double _n_y_12860=(_n_r_12857+0.5);
double _n_top_12861=this->_n_hill_12726(_n_x_12858);
if(d::truth((_n_y_12860>=_n_HORIZON_12685))){d::check_cancel();(void)(([&](){auto&& _n_array_13025=this->_n_mat_12723;auto _n_index_13026=_n_k_12859;auto _n_value_13027=_n_SEA_12696;d::put(_n_array_13025,_n_index_13026,_n_value_13027);return _n_value_13027;})());
}else {d::check_cancel();if((d::truth((_n_y_12860>=_n_top_12861))&&d::truth(([&]()->bool{auto _n_logical_13028=(_n_x_12858<76.0);return d::truth(_n_logical_13028)?_n_logical_13028:(_n_x_12858>128.0);})()))){d::check_cancel();(void)(([&](){auto&& _n_array_13029=this->_n_mat_12723;auto _n_index_13030=_n_k_12859;auto _n_value_13031=_n_HILL_12695;d::put(_n_array_13029,_n_index_13030,_n_value_13031);return _n_value_13031;})());
(void)(([&](){auto&& _n_array_13032=this->_n_slope_12724;auto _n_index_13033=_n_k_12859;auto _n_value_13034=([&](){auto _n_left_13035=(_n_clamp_12700((0.5+((([&](){auto _n_left_13037=this->_n_hill_12726((_n_x_12858-1.0));auto _n_right_13038=this->_n_hill_12726((_n_x_12858+1.0));return (_n_left_13037-_n_right_13038);})()*0.8)*(d::truth((_n_x_12858<100.0))?(-d::number(1.0)):1.0))))*0.6);auto _n_right_13036=(0.4*_n_smooth_12701((_n_top_12861+2.5),_n_top_12861,_n_y_12860));return (_n_left_13035+_n_right_13036);})();d::put(_n_array_13032,_n_index_13033,_n_value_13034);return _n_value_13034;})());
(void)(([&](){auto&& _n_array_13039=this->_n_rim_12725;auto _n_index_13040=_n_k_12859;auto _n_value_13041=_n_smooth_12701((_n_top_12861+1.6),_n_top_12861,_n_y_12860);d::put(_n_array_13039,_n_index_13040,_n_value_13041);return _n_value_13041;})());
}
}
}}
}}
this->_n_CW_12727=640.0;
this->_n_CH_12728=52.0;
this->_n_cover_12729=d::Array<float,true>(size_t((this->_n_CW_12727*this->_n_CH_12728)));
this->_n_tone_12730=d::Array<float,true>(size_t((this->_n_CW_12727*this->_n_CH_12728)));
this->_n_under_12731=d::Array<float,true>(size_t((this->_n_CW_12727*this->_n_CH_12728)));
{double _n_r_12869=0.0;
for(;d::truth((_n_r_12869<this->_n_CH_12728));(void)((_n_r_12869++))){d::check_cancel();{double _n_x_12870=0.0;
for(;d::truth((_n_x_12870<this->_n_CW_12727));(void)((_n_x_12870++))){d::check_cancel();double _n_y_12871=(_n_r_12869+0.5);
double _n_i_12872=((_n_r_12869*this->_n_CW_12727)+_n_x_12870);
double _n_d_12873=this->_n_density_12734(_n_x_12870,_n_y_12871);
double _n_b_12874=this->_n_baseAt_12732(_n_x_12870);
(void)(([&](){auto&& _n_array_13042=this->_n_cover_12729;auto _n_index_13043=_n_i_12872;auto _n_value_13044=_n_smooth_12701(0.42,0.55,_n_d_12873);d::put(_n_array_13042,_n_index_13043,_n_value_13044);return _n_value_13044;})());
double _n_bl_12875=this->_n_billow_12733(_n_x_12870,_n_y_12871);
double _n_shade_12876=(((_n_bl_12875-this->_n_billow_12733((_n_x_12870+1.0),(_n_y_12871-2.5)))*3.0)+((_n_bl_12875-0.6)*0.9));
(void)(([&](){auto&& _n_array_13045=this->_n_tone_12730;auto _n_index_13046=_n_i_12872;auto _n_value_13047=_n_clamp_12700(([&](){auto _n_left_13048=((0.25+_n_shade_12876)+(0.3*_n_smooth_12701((_n_b_12874-8.0),_n_b_12874,_n_y_12871)));auto _n_right_13049=(0.15*_n_smooth_12701(14.0,0.0,_n_y_12871));return (_n_left_13048-_n_right_13049);})());d::put(_n_array_13045,_n_index_13046,_n_value_13047);return _n_value_13047;})());
(void)(([&](){auto&& _n_array_13050=this->_n_under_12731;auto _n_index_13051=_n_i_12872;auto _n_value_13052=([&](){auto _n_left_13053=_n_clamp_12700(([&](){auto _n_left_13055=(0.25+(0.75*_n_smooth_12701((_n_b_12874-9.0),_n_b_12874,_n_y_12871)));auto _n_right_13056=((_n_bl_12875-this->_n_billow_12733(_n_x_12870,(_n_y_12871+2.5)))*2.0);return (_n_left_13055+_n_right_13056);})());auto _n_right_13054=_n_smooth_12701(4.0,14.0,_n_y_12871);return (_n_left_13053*_n_right_13054);})();d::put(_n_array_13050,_n_index_13051,_n_value_13052);return _n_value_13052;})());
}}
}}
this->_n_fork_12735=d::Array<float,true>(size_t(this->_n_N_12708));
_render=[=]( double _a0,std::shared_ptr<_n_Record_12970> _a1) mutable ->d::String{double _n_t_12877=_a0;
auto _n_binding_13059=(d::present(_a1)?_a1:([&](){auto _n_object_13058=std::make_shared<_n_Record_12970>();return _n_object_13058;})());
std::optional<d::Array<uint8_t,true>> _n_color_12878=_n_binding_13059->_p_color;
{
double _n_lt_12879=d::mod((d::mod(_n_t_12877,_n_LOOP_12687)+_n_LOOP_12687),_n_LOOP_12687);
double _n_drift_12880=(_n_t_12877*1.1);
double _n_fl_12881=0.0;
double _n_af_12882=0.0;
double _n_bi_12883=0.0;
{double _n_s_12884=0.0;
for(;d::truth((_n_s_12884<double(_n_STRIKES_12688.size())));(void)((_n_s_12884++))){d::check_cancel();double _n_a_12885=(_n_lt_12879-d::at(d::at(_n_STRIKES_12688,_n_s_12884),0.0));
if(d::truth((_n_a_12885<0.0))){d::check_cancel();(void)((_n_a_12885=(_n_a_12885+_n_LOOP_12687)));
}
double _n_f_12886=_n_flashAt_12705(_n_a_12885);
double _n_g_12887=_n_afterAt_12706(_n_a_12885);
if(d::truth(((_n_f_12886+_n_g_12887)>(_n_fl_12881+_n_af_12882)))){d::check_cancel();(void)((((_n_fl_12881=_n_f_12886),(_n_af_12882=_n_g_12887)),(_n_bi_12883=_n_s_12884)));
}
}}
std::shared_ptr<_n_Record_12720> _n_B_12888=d::at(this->_n_bolts_12719,_n_bi_12883);
double _n_fls_12889=d::minimum({1.4,_n_fl_12881});
double _n_forkLight_12890=0.0;
double _n_fx_12891=0.0;
double _n_fy_12892=0.0;
(void)(this->_n_fork_12735.fill(0.0));
{double _n_i_12893=0.0;
for(;d::truth((_n_i_12893<double(_n_FORKS_12689.size())));(void)((_n_i_12893++))){d::check_cancel();double _n_a_12894=(_n_lt_12879-d::at(d::at(_n_FORKS_12689,_n_i_12893),0.0));
if(d::truth((_n_a_12894<0.0))){d::check_cancel();(void)((_n_a_12894=(_n_a_12894+_n_LOOP_12687)));
}
if(d::truth((_n_a_12894>0.6))){d::check_cancel();continue;
}
double _n_e_12895=([&](){auto _n_left_13060=std::exp(((-d::number(_n_a_12894))/0.12));auto _n_right_13061=(0.6*std::exp((-d::number(std::pow(((_n_a_12894-0.22)/0.05),2.0)))));return (_n_left_13060+_n_right_13061);})();
std::shared_ptr<_n_Record_12722> _n_F_12896=d::at(this->_n_forks_12721,_n_i_12893);
{double _n_j_12897=0.0;
for(;d::truth((_n_j_12897<double(_n_F_12896->_p_cells.size())));(void)((_n_j_12897++))){d::check_cancel();(void)(([&](){auto&& _n_array_13062=this->_n_fork_12735;auto _n_index_13063=d::at(_n_F_12896->_p_cells,_n_j_12897);auto _n_value_13064=(d::at(_n_array_13062,_n_index_13063)+(d::at(_n_F_12896->_p_vals,_n_j_12897)*_n_e_12895));d::put(_n_array_13062,_n_index_13063,_n_value_13064);return _n_value_13064;})());
}}
if(d::truth((_n_e_12895>_n_forkLight_12890))){d::check_cancel();(void)((((_n_forkLight_12890=_n_e_12895),(_n_fx_12891=_n_F_12896->_p_x)),(_n_fy_12892=_n_F_12896->_p_y)));
}
}}
{double _n_r_12898=0.0;
for(;d::truth((_n_r_12898<_n_H_12684));(void)((_n_r_12898++))){d::check_cancel();{double _n_x_12899=0.0;
for(;d::truth((_n_x_12899<_n_W_12683));(void)((_n_x_12899++))){d::check_cancel();double _n_k_12900=((_n_r_12898*_n_W_12683)+_n_x_12899);
double _n_y_12901=(_n_r_12898+0.5);
double _n_m_12902=d::at(this->_n_mat_12723,_n_k_12900);
double _n_cr_12903=0.0;
double _n_cg_12904=0.0;
double _n_cbl_12905=0.0;
double _n_floor_12906=0.22;
double _n_fade_12907=1.0;
double _n_od_12908=d::at(_n_B_12888->_p_outer,_n_k_12900);
double _n_near_12909=std::exp(((-d::number(_n_od_12908))/26.0));
double _n_light_12910=((_n_fls_12889*(0.12+(0.88*_n_near_12909)))*(0.2+(0.8*_n_smooth_12701(1.0,10.0,_n_od_12908))));
double _n_fd_12911=(d::truth(_n_forkLight_12890)?d::hypot(std::initializer_list<double>{(_n_x_12899-_n_fx_12891),((_n_y_12901-_n_fy_12892)*1.4)}):1000.0);
double _n_flight_12912=((_n_forkLight_12890*std::exp(((-d::number(_n_fd_12911))/20.0)))*0.6);
if(d::truth((_n_m_12902==_n_AIR_12694))){d::check_cancel();double _n_v_12913=(_n_y_12901/_n_HORIZON_12685);
double _n_sky_12914=((0.025+((((0.1*_n_v_12913)*_n_v_12913)*_n_v_12913)*_n_v_12913))+(0.2*std::exp(((-d::number((_n_HORIZON_12685-_n_y_12901)))/6.0))));
(void)((((_n_cr_12903=_n_sky_12914),(_n_cg_12904=_n_sky_12914)),(_n_cbl_12905=_n_sky_12914)));
(void)((_n_floor_12906=0.12));
double _n_air_12915=((_n_light_12910*0.16)+(_n_flight_12912*0.2));
(void)((((_n_cr_12903=(_n_cr_12903+(_n_air_12915*d::at(_n_EM_12693,0.0)))),(_n_cg_12904=(_n_cg_12904+(_n_air_12915*d::at(_n_EM_12693,1.0))))),(_n_cbl_12905=(_n_cbl_12905+(_n_air_12915*d::at(_n_EM_12693,2.0))))));
if(d::truth((_n_r_12898<this->_n_CH_12728))){d::check_cancel();double _n_sx_12916=(_n_x_12899+_n_drift_12880);
double _n_ix_12917=std::floor(_n_sx_12916);
double _n_f_12918=(_n_sx_12916-_n_ix_12917);
double _n_i0_12919=((_n_r_12898*this->_n_CW_12727)+d::mod(_n_ix_12917,this->_n_CW_12727));
double _n_i1_12920=((_n_r_12898*this->_n_CW_12727)+d::mod((_n_ix_12917+1.0),this->_n_CW_12727));
double _n_c_12921=(d::at(this->_n_cover_12729,_n_i0_12919)+((d::at(this->_n_cover_12729,_n_i1_12920)-d::at(this->_n_cover_12729,_n_i0_12919))*_n_f_12918));
if(d::truth((_n_c_12921>0.01))){d::check_cancel();double _n_tn_12922=(d::at(this->_n_tone_12730,_n_i0_12919)+((d::at(this->_n_tone_12730,_n_i1_12920)-d::at(this->_n_tone_12730,_n_i0_12919))*_n_f_12918));
double _n_un_12923=(d::at(this->_n_under_12731,_n_i0_12919)+((d::at(this->_n_under_12731,_n_i1_12920)-d::at(this->_n_under_12731,_n_i0_12919))*_n_f_12918));
double _n_g_12924=(0.05+(0.4*std::pow(_n_tn_12922,1.4)));
double _n_lit_12925=(((_n_light_12910*(0.15+(1.1*_n_un_12923)))+(_n_flight_12912*(0.3+_n_un_12923)))*0.9);
double _n_hot_12926=(_n_smooth_12701(0.7,1.6,_n_lit_12925)*0.6);
double _n_amb_12927=(0.07*_n_un_12923);
double _n_kr_12928=((_n_g_12924+((_n_lit_12925*_n_mix_12702(d::at(_n_EM_12693,0.0),1.0,_n_hot_12926))*0.75))+(_n_amb_12927*d::at(_n_EM_12693,0.0)));
double _n_kg_12929=((_n_g_12924+((_n_lit_12925*_n_mix_12702(d::at(_n_EM_12693,1.0),1.0,_n_hot_12926))*0.75))+(_n_amb_12927*d::at(_n_EM_12693,1.0)));
double _n_kb_12930=((_n_g_12924+((_n_lit_12925*_n_mix_12702(d::at(_n_EM_12693,2.0),1.0,_n_hot_12926))*0.75))+(_n_amb_12927*d::at(_n_EM_12693,2.0)));
(void)((((_n_cr_12903=_n_mix_12702(_n_cr_12903,_n_kr_12928,_n_c_12921)),(_n_cg_12904=_n_mix_12702(_n_cg_12904,_n_kg_12929,_n_c_12921))),(_n_cbl_12905=_n_mix_12702(_n_cbl_12905,_n_kb_12930,_n_c_12921))));
(void)((_n_floor_12906=_n_mix_12702(0.12,0.2,_n_c_12921)));
}
}
}else {d::check_cancel();if(d::truth((_n_m_12902==_n_HILL_12695))){d::check_cancel();double _n_s_12931=d::at(this->_n_slope_12724,_n_k_12900);
double _n_g_12932=((0.008+(0.015*_n_s_12931))+(0.12*d::at(this->_n_rim_12725,_n_k_12900)));
double _n_lx_12933=std::exp(((-d::number(std::fabs((_n_x_12899-_n_B_12888->_p_tip))))/55.0));
double _n_lit_12934=((((_n_fls_12889*(0.15+(0.85*_n_lx_12933)))*(0.3+(0.9*_n_s_12931)))*0.7)+((_n_flight_12912*0.3)*_n_s_12931));
(void)((((_n_cr_12903=(_n_g_12932+(_n_lit_12934*d::at(_n_EM_12693,0.0)))),(_n_cg_12904=(_n_g_12932+(_n_lit_12934*d::at(_n_EM_12693,1.0))))),(_n_cbl_12905=(_n_g_12932+(_n_lit_12934*d::at(_n_EM_12693,2.0))))));
(void)((_n_floor_12906=0.06));
}else {d::check_cancel();double _n_v_12935=((_n_y_12901-_n_HORIZON_12685)/(_n_H_12684-_n_HORIZON_12685));
double _n_w_12936=([&](){auto _n_left_13065=(0.6*_n_noise_12698(((_n_x_12899*0.08)+(_n_t_12877*0.15)),((_n_y_12901*0.5)-(_n_t_12877*0.7)),0.0));auto _n_right_13066=(0.4*_n_noise_12698(((_n_x_12899*0.22)-(_n_t_12877*0.3)),((_n_y_12901*1.0)-(_n_t_12877*1.2)),0.0));return (_n_left_13065+_n_right_13066);})();
double _n_sw_12937=(0.5+(0.9*_n_w_12936));
double _n_g_12938=((0.075-(0.035*_n_v_12935))*_n_sw_12937);
(void)((((_n_cr_12903=_n_g_12938),(_n_cg_12904=_n_g_12938)),(_n_cbl_12905=_n_g_12938)));
double _n_ry_12939=d::round(((_n_HORIZON_12685-((_n_y_12901-_n_HORIZON_12685)*2.1))-1.0));
double _n_rx_12940=d::round((_n_x_12899+((_n_w_12936-0.5)*4.0)));
double _n_refl_12941=0.0;
if(((d::truth((_n_ry_12939>=0.0))&&d::truth((_n_rx_12940>=0.0)))&&d::truth((_n_rx_12940<_n_W_12683)))){d::check_cancel();double _n_j_12942=((_n_ry_12939*_n_W_12683)+_n_rx_12940);
(void)((_n_refl_12941=([&](){auto _n_left_13067=((d::at(_n_B_12888->_p_mask,_n_j_12942)*((_n_fl_12881*0.8)+(_n_af_12882*0.5)))+((std::exp(((-d::number(d::at(_n_B_12888->_p_outer,_n_j_12942)))/8.0))*_n_fls_12889)*0.2));auto _n_right_13068=(0.1+(0.9*_n_smooth_12701(0.45,0.8,_n_w_12936)));return (_n_left_13067*_n_right_13068);})()));
}
double _n_sheen_12943=([&](){auto _n_left_13069=(((_n_fls_12889*std::exp(((-d::number(std::fabs((_n_x_12899-_n_B_12888->_p_tip))))/40.0)))*0.4)+(_n_flight_12912*0.2));auto _n_right_13070=_n_smooth_12701(0.45,0.8,_n_w_12936);return (_n_left_13069*_n_right_13070);})();
double _n_hot_12944=([&](){auto _n_left_13071=_n_clamp_12700(((_n_fl_12881*0.5)-0.2));auto _n_right_13072=_n_smooth_12701(0.6,0.85,_n_w_12936);return (_n_left_13071*_n_right_13072);})();
(void)((_n_cr_12903=(_n_cr_12903+((_n_refl_12941+_n_sheen_12943)*_n_mix_12702(d::at(_n_EM_12693,0.0),1.0,_n_hot_12944)))));
(void)((_n_cg_12904=(_n_cg_12904+((_n_refl_12941+_n_sheen_12943)*_n_mix_12702(d::at(_n_EM_12693,1.0),1.0,_n_hot_12944)))));
(void)((_n_cbl_12905=(_n_cbl_12905+((_n_refl_12941+_n_sheen_12943)*_n_mix_12702(d::at(_n_EM_12693,2.0),1.0,_n_hot_12944)))));
(void)((_n_floor_12906=0.14));
(void)((_n_fade_12907=_n_smooth_12701(_n_H_12684,(_n_H_12684-22.0),_n_y_12901)));
}
}
if(d::truth((_n_m_12902!=_n_SEA_12696))){d::check_cancel();double _n_bm_12945=d::at(_n_B_12888->_p_mask,_n_k_12900);
double _n_halo_12946=([&](){auto _n_left_13073=(([&](){auto _n_left_13075=_n_smooth_12701(0.5,3.5,_n_od_12908);auto _n_right_13076=std::exp(((-d::number(_n_od_12908))/7.0));return (_n_left_13075*_n_right_13076);})()*((_n_fls_12889*0.2)+(_n_af_12882*0.1)));auto _n_right_13074=((std::exp(((-d::number(_n_od_12908))/20.0))*_n_fls_12889)*0.05);return (_n_left_13073+_n_right_13074);})();
(void)((((_n_cr_12903=(_n_cr_12903+(_n_halo_12946*d::at(_n_EM_12693,0.0)))),(_n_cg_12904=(_n_cg_12904+(_n_halo_12946*d::at(_n_EM_12693,1.0))))),(_n_cbl_12905=(_n_cbl_12905+(_n_halo_12946*d::at(_n_EM_12693,2.0))))));
if(d::truth((_n_bm_12945>0.0))){d::check_cancel();double _n_core_12947=([&](){auto _n_left_13077=_n_smooth_12701(1.2,2.8,d::at(_n_B_12888->_p_inner,_n_k_12900));auto _n_right_13078=_n_clamp_12700((_n_fl_12881*1.2));return (_n_left_13077*_n_right_13078);})();
double _n_lum_12948=d::minimum({1.0,((_n_fl_12881*1.3)+(_n_af_12882*0.9))});
double _n_br_12949=(_n_mix_12702(d::at(_n_EM_12693,0.0),1.0,_n_core_12947)*_n_lum_12948);
double _n_bg_12950=(_n_mix_12702(d::at(_n_EM_12693,1.0),1.0,_n_core_12947)*_n_lum_12948);
double _n_bb_12951=(_n_mix_12702(d::at(_n_EM_12693,2.0),1.0,_n_core_12947)*_n_lum_12948);
(void)((((_n_cr_12903=_n_mix_12702(_n_cr_12903,_n_br_12949,_n_bm_12945)),(_n_cg_12904=_n_mix_12702(_n_cg_12904,_n_bg_12950,_n_bm_12945))),(_n_cbl_12905=_n_mix_12702(_n_cbl_12905,_n_bb_12951,_n_bm_12945))));
}
double _n_dt_12952=d::hypot(std::initializer_list<double>{((_n_x_12899+0.5)-_n_B_12888->_p_tip),((_n_y_12901-_n_HORIZON_12685)*1.6)});
double _n_burst_12953=([&](){auto _n_left_13079=((std::exp(((-d::number(_n_dt_12952))/3.0))*_n_fls_12889)*0.9);auto _n_right_13080=(std::exp(((-d::number(_n_dt_12952))/10.0))*((_n_fls_12889*0.3)+(_n_af_12882*0.15)));return (_n_left_13079+_n_right_13080);})();
(void)((((_n_cr_12903=(_n_cr_12903+(_n_burst_12953*_n_mix_12702(d::at(_n_EM_12693,0.0),1.0,0.4)))),(_n_cg_12904=(_n_cg_12904+(_n_burst_12953*_n_mix_12702(d::at(_n_EM_12693,1.0),1.0,0.4))))),(_n_cbl_12905=(_n_cbl_12905+(_n_burst_12953*_n_mix_12702(d::at(_n_EM_12693,2.0),1.0,0.4))))));
}
double _n_fv_12954=(d::at(this->_n_fork_12735,_n_k_12900)+(d::at(_n_B_12888->_p_leader,_n_k_12900)*d::minimum({1.3,((_n_fl_12881*1.3)+(_n_af_12882*0.35))})));
if(d::truth((_n_fv_12954>0.0))){d::check_cancel();double _n_h_12955=_n_smooth_12701(0.6,1.2,_n_fv_12954);
(void)((((_n_cr_12903=(_n_cr_12903+(_n_fv_12954*_n_mix_12702(d::at(_n_EM_12693,0.0),1.0,_n_h_12955)))),(_n_cg_12904=(_n_cg_12904+(_n_fv_12954*_n_mix_12702(d::at(_n_EM_12693,1.0),1.0,_n_h_12955))))),(_n_cbl_12905=(_n_cbl_12905+(_n_fv_12954*_n_mix_12702(d::at(_n_EM_12693,2.0),1.0,_n_h_12955))))));
}
double _n_lane_12956=std::floor((_n_x_12899+(_n_y_12901*0.28)));
double _n_hr_12957=_n_hash_12697(_n_lane_12956,17.0);
if((((d::truth((_n_hr_12957>0.5))&&d::truth((_n_y_12901>12.0)))&&d::truth((_n_m_12902!=_n_HILL_12695)))&&d::truth((d::at(_n_B_12888->_p_mask,_n_k_12900)<0.5)))){d::check_cancel();double _n_len_12958=(10.0+(_n_hash_12697(_n_lane_12956,18.0)*12.0));
double _n_p_12959=(((_n_y_12901-(_n_t_12877*(55.0+(_n_hr_12957*25.0))))+(_n_hash_12697(_n_lane_12956,19.0)*400.0))/_n_len_12958);
double _n_seg_12960=(_n_p_12959-std::floor(_n_p_12959));
if(d::truth((_n_seg_12960<0.3))){d::check_cancel();double _n_d_12961=((0.13*(1.0-(_n_seg_12960/0.3)))*_n_smooth_12701(12.0,34.0,_n_y_12901));
double _n_gl_12962=((_n_light_12910*0.6)+(_n_flight_12912*0.4));
(void)((((_n_cr_12903=(_n_cr_12903+(_n_d_12961+(((_n_d_12961*_n_gl_12962)*d::at(_n_EM_12693,0.0))*3.0)))),(_n_cg_12904=(_n_cg_12904+(_n_d_12961+(((_n_d_12961*_n_gl_12962)*d::at(_n_EM_12693,1.0))*3.0))))),(_n_cbl_12905=(_n_cbl_12905+(_n_d_12961+(((_n_d_12961*_n_gl_12962)*d::at(_n_EM_12693,2.0))*3.0))))));
}
}
double _n_peak_12963=d::maximum({_n_cr_12903,_n_cg_12904,_n_cbl_12905,0.0001});
double _n_level_12964=(_n_clamp_12700((_n_floor_12906+(((1.0-_n_floor_12906)*std::pow(_n_peak_12963,0.85))*0.95)))*_n_fade_12907);
double _n_step_12965=([&](){auto _n_argument_13081=0.0;auto _n_argument_13082=([&](){auto _n_argument_13083=3.0;auto _n_argument_13084=d::round(((_n_level_12964*3.0)+d::at(_n_BAYER_12692,((double(d::i32(_n_r_12898)&d::i32(3.0))*4.0)+double(d::i32(_n_x_12899)&d::i32(3.0))))));return d::minimum({_n_argument_13083,_n_argument_13084});})();return d::maximum({_n_argument_13081,_n_argument_13082});})();
(void)(([&](){auto&& _n_array_13085=this->_n_out_12709;auto _n_index_13086=_n_k_12900;auto _n_value_13087=d::at(_n_DOTS_12690,_n_step_12965);d::put(_n_array_13085,_n_index_13086,_n_value_13087);return _n_value_13087;})());
if(d::truth(_n_color_12878)){d::check_cancel();double _n_want_12966=(d::truth(_n_step_12965)?d::minimum({1.0,((_n_level_12964+0.06)/d::at(_n_COVER_12691,_n_step_12965))}):0.0);
double _n_s_12967=((0.3+(0.7*_n_want_12966))/d::maximum({_n_peak_12963,0.8}));
(void)(([&](){auto&& _n_array_13088=d::read(_n_color_12878);auto _n_index_13089=_n_k_12900;auto _n_value_13090=([&](){auto _n_argument_13091=_n_clamp_12700((_n_cr_12903*_n_s_12967));auto _n_argument_13092=_n_clamp_12700((_n_cg_12904*_n_s_12967));auto _n_argument_13093=_n_clamp_12700((_n_cbl_12905*_n_s_12967));return this->_n_nearest_12711(_n_argument_13091,_n_argument_13092,_n_argument_13093);})();d::put(_n_array_13088,_n_index_13089,_n_value_13090);return _n_value_13090;})());
}
}}
}}
d::Array<d::String,false> _n_lines_12968=d::Array<d::String,false>{};
{double _n_r_12969=0.0;
for(;d::truth((_n_r_12969<_n_H_12684));(void)((_n_r_12969++))){d::check_cancel();(void)(_n_lines_12968.push(d::join(this->_n_out_12709.slice((_n_r_12969*_n_W_12683),((_n_r_12969+1.0)*_n_W_12683)),d::String(u""))));
}}
return d::join(_n_lines_12968,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("green-storm").cols)*ascii::catalog_meta("green-storm").rows);auto _env=std::make_shared<_n_Record_12970>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &green_storm_meta(){return catalog_meta("green-storm");}
std::unique_ptr<Piece> make_green_storm(const AsciiPieceOptions &o){return std::make_unique<Native_green_storm>(o);}
}
