// Direct, statically typed C++ from src/pieces/night-coast.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22310;
struct _n_Record_22501;
struct _n_Record_22310{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_22310> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22310>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_22501{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22501> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22501>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_22329(double _a0,double _a1);
double _n_noise_22330(double _a0,double _a1,double _a2);
double _n_fbm_22331(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_22332(double _a0);
double _n_smooth_22333(double _a0,double _a1,double _a2);
double _n_mix_22334(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_22335(d::String _a0);
std::shared_ptr<_n_Record_22310> _n_meta_22309=[](){return ([&](){auto _n_object_22504=std::make_shared<_n_Record_22310>();_n_object_22504->_p_name=d::String(u"night coast");_n_object_22504->_p_category=d::String(u"scenes");_n_object_22504->_p_note=d::String(u"a lighthouse turning its beam under moonlit clouds over a dark sea");_n_object_22504->_p_cols=200.0;_n_object_22504->_p_rows=100.0;_n_object_22504->_p_cell=1.0;_n_object_22504->_p_fps=15.0;_n_object_22504->_p_ground=d::String(u"#080b12");_n_object_22504->_p_palette=d::Array<d::String,false>{d::String(u"#15203d"),d::String(u"#1b2a50"),d::String(u"#223463"),d::String(u"#2b4077"),d::String(u"#364e8b"),d::String(u"#445f9f"),d::String(u"#5874b2"),d::String(u"#7089c0"),d::String(u"#8a9cc4"),d::String(u"#a3b1cf"),d::String(u"#bec9dc"),d::String(u"#d8dfea"),d::String(u"#eef1f6"),d::String(u"#f7f8fc"),d::String(u"#ffe9ae"),d::String(u"#ffd27c"),d::String(u"#f3a64a"),d::String(u"#c46c2d"),d::String(u"#121c1b"),d::String(u"#182724"),d::String(u"#203530"),d::String(u"#2c473d"),d::String(u"#3c5c4c"),d::String(u"#232a36"),d::String(u"#363e4c"),d::String(u"#555d6c"),d::String(u"#2a3550"),d::String(u"#3a4868"),d::String(u"#9c4136"),d::String(u"#ff5d4d")};return _n_object_22504;})();}();
const double _n_W_22311=[](){return 200.0;}();
const double _n_H_22312=[](){return 100.0;}();
const double _n_HORIZON_22313=[](){return 60.0;}();
d::Array<double,false> _n_MOON_22314=[](){return d::Array<double,false>{150.0,19.0};}();
const double _n_LAMP_X_22315=[](){return 30.0;}();
const d::String _n_DOTS_22316=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_22317=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_22318=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_22353=_a0;
return ((_n_v_22353/16.0)-0.47);});}();
const double _n_AIR_22319=[](){return 0.0;}();
const double _n_LAND_22320=[](){return 1.0;}();
const double _n_TREE_22321=[](){return 2.0;}();
const double _n_TOWER_22322=[](){return 3.0;}();
const double _n_LANTERN_22323=[](){return 4.0;}();
const double _n_CAP_22324=[](){return 5.0;}();
const double _n_WALL_22325=[](){return 6.0;}();
const double _n_PANE_22326=[](){return 7.0;}();
const double _n_ROOF_22327=[](){return 8.0;}();
const double _n_ISLE_22328=[](){return 9.0;}();
double _n_hash_22329(double _a0,double _a1){double _n_x_22354=_a0;
double _n_y_22355=_a1;
{
double _n_h_22356=([&](){auto _n_left_22505=d::imul(double(d::i32(_n_x_22354)|d::i32(0.0)),374761393.0);auto _n_right_22506=d::imul(double(d::i32(_n_y_22355)|d::i32(0.0)),668265263.0);return (_n_left_22505+_n_right_22506);})();
(void)((_n_h_22356=d::imul(double(d::i32(_n_h_22356)^d::i32(double(d::u32(_n_h_22356)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_22356)^d::i32(double(d::u32(_n_h_22356)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_22330(double _a0,double _a1,double _a2){double _n_x_22357=_a0;
double _n_y_22358=_a1;
double _n_period_22359=_a2;
{
double _n_xi_22360=std::floor(_n_x_22357);
double _n_yi_22361=std::floor(_n_y_22358);
double _n_fx_22362=(_n_x_22357-_n_xi_22360);
double _n_fy_22363=(_n_y_22358-_n_yi_22361);
double _n_u_22364=((_n_fx_22362*_n_fx_22362)*(3.0-(2.0*_n_fx_22362)));
double _n_v_22365=((_n_fy_22363*_n_fy_22363)*(3.0-(2.0*_n_fy_22363)));
double _n_x0_22366=_n_xi_22360;
double _n_x1_22367=(_n_xi_22360+1.0);
if(d::truth(_n_period_22359)){d::check_cancel();(void)((_n_x0_22366=d::mod((d::mod(_n_xi_22360,_n_period_22359)+_n_period_22359),_n_period_22359)));
(void)((_n_x1_22367=d::mod((_n_x0_22366+1.0),_n_period_22359)));
}
double _n_a_22368=_n_hash_22329(_n_x0_22366,_n_yi_22361);
double _n_b_22369=_n_hash_22329(_n_x1_22367,_n_yi_22361);
double _n_c_22370=_n_hash_22329(_n_x0_22366,(_n_yi_22361+1.0));
double _n_d_22371=_n_hash_22329(_n_x1_22367,(_n_yi_22361+1.0));
return (((_n_a_22368+((_n_b_22369-_n_a_22368)*_n_u_22364))+((_n_c_22370-_n_a_22368)*_n_v_22365))+(((((_n_a_22368-_n_b_22369)-_n_c_22370)+_n_d_22371)*_n_u_22364)*_n_v_22365));

}
}

double _n_fbm_22331(double _a0,double _a1,double _a2,double _a3){double _n_x_22372=_a0;
double _n_y_22373=_a1;
double _n_octaves_22374=_a2;
double _n_period_22375=_a3;
{
double _n_s_22376=0.0;
double _n_n_22377=0.0;
double _n_amp_22378=0.5;
double _n_f_22379=1.0;
{double _n_i_22380=0.0;
for(;d::truth((_n_i_22380<_n_octaves_22374));(void)((_n_i_22380++))){d::check_cancel();(void)((_n_s_22376=(_n_s_22376+(_n_amp_22378*_n_noise_22330((_n_x_22372*_n_f_22379),(_n_y_22373*_n_f_22379),(_n_period_22375*_n_f_22379))))));
(void)((_n_n_22377=(_n_n_22377+_n_amp_22378)));
(void)((_n_amp_22378=(_n_amp_22378*0.5)));
(void)((_n_f_22379=(_n_f_22379*2.0)));
}}
return (_n_s_22376/_n_n_22377);

}
}

double _n_clamp_22332(double _a0){double _n_v_22381=_a0;
return (d::truth((_n_v_22381<0.0))?0.0:(d::truth((_n_v_22381>1.0))?1.0:_n_v_22381));}

double _n_smooth_22333(double _a0,double _a1,double _a2){double _n_a_22382=_a0;
double _n_b_22383=_a1;
double _n_v_22384=_a2;
{
double _n_k_22385=_n_clamp_22332(((_n_v_22384-_n_a_22382)/(_n_b_22383-_n_a_22382)));
return ((_n_k_22385*_n_k_22385)*(3.0-(2.0*_n_k_22385)));

}
}

double _n_mix_22334(double _a0,double _a1,double _a2){double _n_a_22386=_a0;
double _n_b_22387=_a1;
double _n_k_22388=_a2;
return (_n_a_22386+((_n_b_22387-_n_a_22386)*_n_k_22388));}

d::Array<double,false> _n_hex_22335(d::String _a0){d::String _n_s_22389=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_22390=_a0;
return (([&](){auto _n_argument_22507=d::slice(_n_s_22389,_n_i_22390,(_n_i_22390+2.0));auto _n_argument_22508=16.0;return d::parseInt(_n_argument_22507,_n_argument_22508);})()/255.0);});}

struct Native_night_coast final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_22336{};
double _n_N_22337{};
d::Array<d::String,false> _n_out_22338{};
d::Array<uint8_t,true> _n_lut_22339{};
d::Array<uint8_t,true> _n_mat_22342{};
d::Array<float,true> _n_shade_22343{};
double _n_base_22344{};
double _n_towerTop_22345{};
d::Array<std::array<double,3>,false> _n_trees_22346{};
double _n_cottage_22347{};
d::Array<float,true> _n_haze_22348{};
double _n_CW_22349{};
d::Array<float,true> _n_cover_22350{};
d::Array<float,true> _n_lit_22351{};
std::function<d::String(double,std::shared_ptr<_n_Record_22501>)> _render;
double _n_nearest_22340(double _a0,double _a1,double _a2){double _n_r_22391=_a0;
double _n_g_22392=_a1;
double _n_b_22393=_a2;
{
double _n_k_22394=([&](){auto _n_left_22620=([&](){auto _n_left_22622=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_22391*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_22623=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_22392*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_22622)|d::i32(_n_right_22623));})();auto _n_right_22621=d::minimum({31.0,double(d::i32((_n_b_22393*31.99))|d::i32(0.0))});return double(d::i32(_n_left_22620)|d::i32(_n_right_22621));})();
if(d::truth((d::at(this->_n_lut_22339,_n_k_22394)!=255.0))){d::check_cancel();return d::at(this->_n_lut_22339,_n_k_22394);
}
double _n_best_22395=0.0;
double _n_bd_22396=1000000000.0;
{double _n_i_22397=0.0;
for(;d::truth((_n_i_22397<double(this->_n_P_22336.size())));(void)((_n_i_22397++))){d::check_cancel();double _n_dr_22398=(d::at(d::at(this->_n_P_22336,_n_i_22397),0.0)-_n_r_22391);
double _n_dg_22399=(d::at(d::at(this->_n_P_22336,_n_i_22397),1.0)-_n_g_22392);
double _n_db_22400=(d::at(d::at(this->_n_P_22336,_n_i_22397),2.0)-_n_b_22393);
double _n_d_22401=((((0.3*_n_dr_22398)*_n_dr_22398)+((0.5*_n_dg_22399)*_n_dg_22399))+((0.2*_n_db_22400)*_n_db_22400));
if(d::truth((_n_d_22401<_n_bd_22396))){d::check_cancel();(void)(((_n_bd_22396=_n_d_22401),(_n_best_22395=_n_i_22397)));
}
}}
return ([&](){auto&& _n_array_22624=this->_n_lut_22339;auto _n_index_22625=_n_k_22394;auto _n_value_22626=_n_best_22395;d::put(_n_array_22624,_n_index_22625,_n_value_22626);return _n_value_22626;})();

}
}

double _n_top_22341(double _a0){double _n_x_22402=_a0;
return ([&](){auto _n_left_22627=(_n_HORIZON_22313-([&](){auto _n_left_22629=(15.0*_n_smooth_22333(86.0,50.0,_n_x_22402));auto _n_right_22630=(1.0-(0.12*_n_smooth_22333(24.0,0.0,_n_x_22402)));return (_n_left_22629*_n_right_22630);})());auto _n_right_22628=(1.6*_n_fbm_22331((_n_x_22402*0.15),3.7,3.0,0.0));return (_n_left_22627-_n_right_22628);})();}

double _n_density_22352(double _a0,double _a1){double _n_x_22418=_a0;
double _n_y_22419=_a1;
{
double _n_q_22420=_n_fbm_22331((_n_x_22418*0.008),(_n_y_22419*0.02),3.0,(this->_n_CW_22349*0.008));
double _n_d_22421=_n_fbm_22331(((_n_x_22418*0.018)+(_n_q_22420*2.4)),((_n_y_22419*0.036)+(_n_q_22420*1.1)),5.0,(this->_n_CW_22349*0.018));
return ([&](){auto _n_left_22631=([&](){auto _n_left_22633=(_n_d_22421+(0.05*_n_smooth_22333(8.0,22.0,_n_y_22419)));auto _n_right_22634=(0.04*_n_smooth_22333(10.0,0.0,_n_y_22419));return (_n_left_22633-_n_right_22634);})();auto _n_right_22632=(0.16*_n_smooth_22333(36.0,(_n_HORIZON_22313-4.0),_n_y_22419));return (_n_left_22631-_n_right_22632);})();

}
}

explicit Native_night_coast(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_22336=d::map(_n_meta_22309->_p_palette,_n_hex_22335);
this->_n_N_22337=(_n_W_22311*_n_H_22312);
this->_n_out_22338=d::Array<d::String,false>(size_t(this->_n_N_22337));
this->_n_lut_22339=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_22342=d::Array<uint8_t,true>(size_t(this->_n_N_22337));
this->_n_shade_22343=d::Array<float,true>(size_t(this->_n_N_22337));
this->_n_base_22344=this->_n_top_22341(_n_LAMP_X_22315);
this->_n_towerTop_22345=(this->_n_base_22344-15.0);
this->_n_trees_22346=d::Array<std::array<double,3>,false>{};
{double _n_x_22403=1.0;
for(;d::truth((_n_x_22403<76.0));(void)((_n_x_22403=(_n_x_22403+(2.6+(_n_hash_22329((_n_x_22403*7.0),1.0)*2.6)))))){d::check_cancel();if((d::truth((_n_x_22403>22.0))&&d::truth((_n_x_22403<49.0)))){d::check_cancel();continue;
}
(void)(this->_n_trees_22346.push(std::array<double,3>{(_n_x_22403+(_n_hash_22329(_n_x_22403,2.0)*1.2)),([&](){auto _n_left_22509=(4.0+(_n_hash_22329(_n_x_22403,3.0)*7.0));auto _n_right_22510=_n_smooth_22333(78.0,56.0,_n_x_22403);return (_n_left_22509*_n_right_22510);})(),(2.0+(_n_hash_22329(_n_x_22403,4.0)*1.6))}));
}}
this->_n_cottage_22347=this->_n_top_22341(41.0);
{double _n_r_22404=0.0;
for(;d::truth((_n_r_22404<_n_H_22312));(void)((_n_r_22404++))){d::check_cancel();{double _n_x_22405=0.0;
for(;d::truth((_n_x_22405<_n_W_22311));(void)((_n_x_22405++))){d::check_cancel();double _n_k_22406=((_n_r_22404*_n_W_22311)+_n_x_22405);
double _n_y_22407=(_n_r_22404+0.5);
double _n_t0_22408=this->_n_top_22341(_n_x_22405);
double _n_isle_22409=([&](){auto _n_left_22511=(_n_HORIZON_22313-(4.5*d::maximum({0.0,(1.0-std::pow(((_n_x_22405-180.0)/26.0),2.0))})));auto _n_right_22512=(1.4*_n_fbm_22331((_n_x_22405*0.2),9.0,2.0,0.0));return (_n_left_22511-_n_right_22512);})();
if(((d::truth((_n_y_22407>=_n_t0_22408))&&d::truth((_n_y_22407<(_n_HORIZON_22313+4.0))))&&d::truth((_n_x_22405<90.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_22513=this->_n_mat_22342;auto _n_index_22514=_n_k_22406;auto _n_value_22515=_n_LAND_22320;d::put(_n_array_22513,_n_index_22514,_n_value_22515);return _n_value_22515;})());
(void)(([&](){auto&& _n_array_22516=this->_n_shade_22343;auto _n_index_22517=_n_k_22406;auto _n_value_22518=([&](){auto _n_left_22519=([&](){auto _n_left_22521=(0.2+(0.45*_n_fbm_22331((_n_x_22405*0.35),(_n_y_22407*0.35),3.0,0.0)));auto _n_right_22522=(0.5*_n_smooth_22333((_n_t0_22408+3.0),_n_t0_22408,_n_y_22407));return (_n_left_22521+_n_right_22522);})();auto _n_right_22520=(0.2*_n_smooth_22333((_n_HORIZON_22313-4.0),(_n_HORIZON_22313+4.0),_n_y_22407));return (_n_left_22519-_n_right_22520);})();d::put(_n_array_22516,_n_index_22517,_n_value_22518);return _n_value_22518;})());
}else {d::check_cancel();if(((d::truth((_n_x_22405>148.0))&&d::truth((_n_y_22407>=_n_isle_22409)))&&d::truth((_n_y_22407<_n_HORIZON_22313)))){d::check_cancel();(void)(([&](){auto&& _n_array_22523=this->_n_mat_22342;auto _n_index_22524=_n_k_22406;auto _n_value_22525=_n_ISLE_22328;d::put(_n_array_22523,_n_index_22524,_n_value_22525);return _n_value_22525;})());
}
}
for(auto &&_n_item_22526:this->_n_trees_22346){d::check_cancel();auto _n_binding_22527=_n_item_22526;
double _n_tx_22410=d::at(_n_binding_22527,0.0);
double _n_th_22411=d::at(_n_binding_22527,1.0);
double _n_tw_22412=d::at(_n_binding_22527,2.0);
{
if(d::truth((_n_th_22411<1.0))){d::check_cancel();continue;
}
double _n_tb_22413=this->_n_top_22341(_n_tx_22410);
double _n_dy_22414=(_n_y_22407-(_n_tb_22413-_n_th_22411));
if(((d::truth((_n_dy_22414>=0.0))&&d::truth((_n_y_22407<(_n_tb_22413+2.0))))&&d::truth((std::fabs(((_n_x_22405+0.5)-_n_tx_22410))<=(((_n_dy_22414/_n_th_22411)*_n_tw_22412)+0.4))))){d::check_cancel();(void)(([&](){auto&& _n_array_22528=this->_n_mat_22342;auto _n_index_22529=_n_k_22406;auto _n_value_22530=_n_TREE_22321;d::put(_n_array_22528,_n_index_22529,_n_value_22530);return _n_value_22530;})());
(void)(([&](){auto&& _n_array_22531=this->_n_shade_22343;auto _n_index_22532=_n_k_22406;auto _n_value_22533=((0.1+(0.35*_n_hash_22329(((_n_x_22405*13.0)+_n_r_22404),5.0)))+(d::truth(((_n_x_22405+0.5)>_n_tx_22410))?0.35:0.0));d::put(_n_array_22531,_n_index_22532,_n_value_22533);return _n_value_22533;})());
}

}
}
double _n_dx_22415=((_n_x_22405+0.5)-_n_LAMP_X_22315);
if((d::truth((_n_y_22407>=this->_n_towerTop_22345))&&d::truth((_n_y_22407<(this->_n_base_22344+2.0))))){d::check_cancel();double _n_hw_22416=(3.0-(1.1*_n_smooth_22333(this->_n_base_22344,this->_n_towerTop_22345,_n_y_22407)));
if(d::truth((std::fabs(_n_dx_22415)<=_n_hw_22416))){d::check_cancel();(void)(([&](){auto&& _n_array_22534=this->_n_mat_22342;auto _n_index_22535=_n_k_22406;auto _n_value_22536=_n_TOWER_22322;d::put(_n_array_22534,_n_index_22535,_n_value_22536);return _n_value_22536;})());
(void)(([&](){auto&& _n_array_22537=this->_n_shade_22343;auto _n_index_22538=_n_k_22406;auto _n_value_22539=(0.45+(0.5*(_n_dx_22415/_n_hw_22416)));d::put(_n_array_22537,_n_index_22538,_n_value_22539);return _n_value_22539;})());
}
}
if(((d::truth((_n_y_22407>=(this->_n_towerTop_22345-1.0)))&&d::truth((_n_y_22407<(this->_n_towerTop_22345+1.0))))&&d::truth((std::fabs(_n_dx_22415)<=3.6)))){d::check_cancel();(void)((([&](){auto&& _n_array_22540=this->_n_mat_22342;auto _n_index_22541=_n_k_22406;auto _n_value_22542=_n_CAP_22324;d::put(_n_array_22540,_n_index_22541,_n_value_22542);return _n_value_22542;})(),([&](){auto&& _n_array_22543=this->_n_shade_22343;auto _n_index_22544=_n_k_22406;auto _n_value_22545=0.55;d::put(_n_array_22543,_n_index_22544,_n_value_22545);return _n_value_22545;})()));
}
if(((d::truth((_n_y_22407>=(this->_n_towerTop_22345-7.0)))&&d::truth((_n_y_22407<(this->_n_towerTop_22345-1.0))))&&d::truth((std::fabs(_n_dx_22415)<=2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_22546=this->_n_mat_22342;auto _n_index_22547=_n_k_22406;auto _n_value_22548=_n_LANTERN_22323;d::put(_n_array_22546,_n_index_22547,_n_value_22548);return _n_value_22548;})());
}
if(((d::truth((_n_y_22407>=(this->_n_towerTop_22345-10.0)))&&d::truth((_n_y_22407<(this->_n_towerTop_22345-7.0))))&&d::truth((std::fabs(_n_dx_22415)<=(2.8-(((this->_n_towerTop_22345-7.0)-_n_y_22407)*0.8)))))){d::check_cancel();(void)((([&](){auto&& _n_array_22549=this->_n_mat_22342;auto _n_index_22550=_n_k_22406;auto _n_value_22551=_n_CAP_22324;d::put(_n_array_22549,_n_index_22550,_n_value_22551);return _n_value_22551;})(),([&](){auto&& _n_array_22552=this->_n_shade_22343;auto _n_index_22553=_n_k_22406;auto _n_value_22554=0.4;d::put(_n_array_22552,_n_index_22553,_n_value_22554);return _n_value_22554;})()));
}
if((((d::truth((_n_x_22405>=36.0))&&d::truth((_n_x_22405<=47.0)))&&d::truth((_n_y_22407>=(this->_n_cottage_22347-5.0))))&&d::truth((_n_y_22407<(this->_n_cottage_22347+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_22555=this->_n_mat_22342;auto _n_index_22556=_n_k_22406;auto _n_value_22557=_n_WALL_22325;d::put(_n_array_22555,_n_index_22556,_n_value_22557);return _n_value_22557;})());
(void)(([&](){auto&& _n_array_22558=this->_n_shade_22343;auto _n_index_22559=_n_k_22406;auto _n_value_22560=(0.3+((0.4*(_n_x_22405-36.0))/11.0));d::put(_n_array_22558,_n_index_22559,_n_value_22560);return _n_value_22560;})());
if(((d::truth(([&]()->bool{auto _n_logical_22561=(_n_x_22405==39.0);return d::truth(_n_logical_22561)?_n_logical_22561:(_n_x_22405==44.0);})())&&d::truth((_n_y_22407>=(this->_n_cottage_22347-4.0))))&&d::truth((_n_y_22407<(this->_n_cottage_22347-1.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_22562=this->_n_mat_22342;auto _n_index_22563=_n_k_22406;auto _n_value_22564=_n_PANE_22326;d::put(_n_array_22562,_n_index_22563,_n_value_22564);return _n_value_22564;})());
}
}
if(((d::truth((_n_y_22407>=(this->_n_cottage_22347-10.0)))&&d::truth((_n_y_22407<(this->_n_cottage_22347-5.0))))&&d::truth((std::fabs(((_n_x_22405+0.5)-42.0))<=(7.5-(((this->_n_cottage_22347-5.0)-_n_y_22407)*1.2)))))){d::check_cancel();(void)(([&](){auto&& _n_array_22565=this->_n_mat_22342;auto _n_index_22566=_n_k_22406;auto _n_value_22567=_n_ROOF_22327;d::put(_n_array_22565,_n_index_22566,_n_value_22567);return _n_value_22567;})());
}
}}
}}
this->_n_haze_22348=d::Array<float,true>(size_t(this->_n_N_22337));
{double _n_k_22417=0.0;
for(;d::truth((_n_k_22417<this->_n_N_22337));(void)((_n_k_22417++))){d::check_cancel();(void)(([&](){auto&& _n_array_22568=this->_n_haze_22348;auto _n_index_22569=_n_k_22417;auto _n_value_22570=([&](){auto _n_argument_22571=(d::mod(_n_k_22417,_n_W_22311)*0.05);auto _n_argument_22572=(std::floor((_n_k_22417/_n_W_22311))*0.08);auto _n_argument_22573=3.0;auto _n_argument_22574=0.0;return _n_fbm_22331(_n_argument_22571,_n_argument_22572,_n_argument_22573,_n_argument_22574);})();d::put(_n_array_22568,_n_index_22569,_n_value_22570);return _n_value_22570;})());
}}
this->_n_CW_22349=640.0;
this->_n_cover_22350=d::Array<float,true>(size_t((this->_n_CW_22349*_n_HORIZON_22313)));
this->_n_lit_22351=d::Array<float,true>(size_t((this->_n_CW_22349*_n_HORIZON_22313)));
{double _n_r_22422=0.0;
for(;d::truth((_n_r_22422<_n_HORIZON_22313));(void)((_n_r_22422++))){d::check_cancel();{double _n_x_22423=0.0;
for(;d::truth((_n_x_22423<this->_n_CW_22349));(void)((_n_x_22423++))){d::check_cancel();double _n_y_22424=(_n_r_22422+0.5);
double _n_d_22425=this->_n_density_22352(_n_x_22423,_n_y_22424);
(void)(([&](){auto&& _n_array_22575=this->_n_cover_22350;auto _n_index_22576=((_n_r_22422*this->_n_CW_22349)+_n_x_22423);auto _n_value_22577=_n_smooth_22333(0.52,0.63,_n_d_22425);d::put(_n_array_22575,_n_index_22576,_n_value_22577);return _n_value_22577;})());
double _n_toward_22426=this->_n_density_22352((_n_x_22423+2.5),(_n_y_22424-3.0));
(void)(([&](){auto&& _n_array_22578=this->_n_lit_22351;auto _n_index_22579=((_n_r_22422*this->_n_CW_22349)+_n_x_22423);auto _n_value_22580=_n_clamp_22332(((0.5+((_n_d_22425-_n_toward_22426)*11.0))-((_n_d_22425-0.6)*1.2)));d::put(_n_array_22578,_n_index_22579,_n_value_22580);return _n_value_22580;})());
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_22501> _a1) mutable ->d::String{double _n_t_22427=_a0;
auto _n_binding_22583=(d::present(_a1)?_a1:([&](){auto _n_object_22582=std::make_shared<_n_Record_22501>();return _n_object_22582;})());
std::optional<d::Array<uint8_t,true>> _n_color_22428=_n_binding_22583->_p_color;
{
double _n_beam_22429=((((_n_t_22427/8.0)*ascii::PI)*2.0)-0.75);
double _n_cb_22430=std::cos(_n_beam_22429);
double _n_sb_22431=std::sin(_n_beam_22429);
double _n_flash_22432=(([&](){auto _n_argument_22584=d::maximum({0.0,_n_sb_22431});auto _n_argument_22585=14.0;return std::pow(_n_argument_22584,_n_argument_22585);})()*2.2);
double _n_lampY_22433=(this->_n_towerTop_22345-4.0);
double _n_drift_22434=(_n_t_22427*1.4);
{double _n_r_22435=0.0;
for(;d::truth((_n_r_22435<_n_H_22312));(void)((_n_r_22435++))){d::check_cancel();{double _n_x_22436=0.0;
for(;d::truth((_n_x_22436<_n_W_22311));(void)((_n_x_22436++))){d::check_cancel();double _n_k_22437=((_n_r_22435*_n_W_22311)+_n_x_22436);
double _n_y_22438=(_n_r_22435+0.5);
double _n_m_22439=d::at(this->_n_mat_22342,_n_k_22437);
double _n_cr_22440=0.0;
double _n_cg_22441=0.0;
double _n_cbl_22442=0.0;
double _n_floor_22443=0.3;
double _n_fade_22444=1.0;
double _n_dmx_22445=((_n_x_22436+0.5)-d::at(_n_MOON_22314,0.0));
double _n_dmy_22446=(_n_y_22438-d::at(_n_MOON_22314,1.0));
double _n_dm_22447=std::sqrt(((_n_dmx_22445*_n_dmx_22445)+(_n_dmy_22446*_n_dmy_22446)));
if((d::truth((_n_y_22438<_n_HORIZON_22313))&&d::truth((_n_m_22439==_n_AIR_22319)))){d::check_cancel();double _n_v_22448=(_n_y_22438/_n_HORIZON_22313);
double _n_halo_22449=([&](){auto _n_left_22586=(std::exp(((-d::number(_n_dm_22447))/24.0))*0.35);auto _n_right_22587=(std::exp(((-d::number(_n_dm_22447))/9.0))*0.45);return (_n_left_22586+_n_right_22587);})();
double _n_glowH_22450=(std::pow(_n_v_22448,3.0)*0.24);
double _n_veil_22451=(0.85+(0.3*d::at(this->_n_haze_22348,((_n_r_22435*_n_W_22311)+_n_x_22436))));
(void)((_n_cr_22440=((((0.04+((0.1*_n_v_22448)*_n_v_22448))+(_n_glowH_22450*0.9))*_n_veil_22451)+(0.3*_n_halo_22449))));
(void)((_n_cg_22441=((((0.07+((0.13*_n_v_22448)*_n_v_22448))+_n_glowH_22450)*_n_veil_22451)+(0.35*_n_halo_22449))));
(void)((_n_cbl_22442=((((0.17+((0.2*_n_v_22448)*_n_v_22448))+(_n_glowH_22450*1.1))*_n_veil_22451)+(0.42*_n_halo_22449))));
(void)((_n_floor_22443=0.15));
double _n_sx_22452=(_n_x_22436+_n_drift_22434);
double _n_ix_22453=std::floor(_n_sx_22452);
double _n_fx_22454=(_n_sx_22452-_n_ix_22453);
double _n_i0_22455=((_n_r_22435*this->_n_CW_22349)+d::mod(_n_ix_22453,this->_n_CW_22349));
double _n_i1_22456=((_n_r_22435*this->_n_CW_22349)+d::mod((_n_ix_22453+1.0),this->_n_CW_22349));
double _n_c_22457=((d::at(this->_n_cover_22350,_n_i0_22455)+((d::at(this->_n_cover_22350,_n_i1_22456)-d::at(this->_n_cover_22350,_n_i0_22455))*_n_fx_22454))*(0.15+(0.85*_n_smooth_22333(7.0,24.0,_n_dm_22447))));
double _n_l_22458=(d::at(this->_n_lit_22351,_n_i0_22455)+((d::at(this->_n_lit_22351,_n_i1_22456)-d::at(this->_n_lit_22351,_n_i0_22455))*_n_fx_22454));
if(d::truth((_n_dm_22447<6.0))){d::check_cancel();double _n_face_22459=(0.86+(0.14*_n_fbm_22331((_n_x_22436*0.5),(_n_y_22438*0.5),2.0,0.0)));
double _n_a_22460=((1.0-(_n_c_22457*0.8))*_n_smooth_22333(6.0,5.0,_n_dm_22447));
(void)((_n_cr_22440=_n_mix_22334(_n_cr_22440,(0.96*_n_face_22459),_n_a_22460)));
(void)((_n_cg_22441=_n_mix_22334(_n_cg_22441,(0.97*_n_face_22459),_n_a_22460)));
(void)((_n_cbl_22442=_n_mix_22334(_n_cbl_22442,(1.0*_n_face_22459),_n_a_22460)));
}else {d::check_cancel();if((d::truth((_n_c_22457<0.05))&&d::truth((_n_hash_22329(_n_x_22436,((_n_r_22435*3.0)+11.0))>0.982)))){d::check_cancel();double _n_tw_22461=(0.6+(0.4*std::sin(([&](){auto _n_left_22588=(_n_t_22427*(1.5+(_n_hash_22329(_n_x_22436,_n_r_22435)*3.0)));auto _n_right_22589=(_n_hash_22329(_n_r_22435,_n_x_22436)*6.28);return (_n_left_22588+_n_right_22589);})())));
double _n_s_22462=(((0.5+(0.5*_n_tw_22461))*(1.0-_n_halo_22449))*_n_smooth_22333(_n_HORIZON_22313,20.0,_n_y_22438));
(void)((((_n_cr_22440=d::maximum({_n_cr_22440,(_n_s_22462*0.92)})),(_n_cg_22441=d::maximum({_n_cg_22441,(_n_s_22462*0.94)}))),(_n_cbl_22442=d::maximum({_n_cbl_22442,_n_s_22462}))));
}
}
if(d::truth((_n_c_22457>0.01))){d::check_cancel();double _n_near_22463=std::exp(((-d::number(_n_dm_22447))/30.0));
double _n_b_22464=_n_clamp_22332(((_n_l_22458*(0.5+(0.6*_n_near_22463)))+(0.25*_n_smooth_22333(30.0,_n_HORIZON_22313,_n_y_22438))));
double _n_kr_22465=(d::truth((_n_b_22464<0.5))?_n_mix_22334(0.1,0.36,(_n_b_22464*2.0)):_n_mix_22334(0.36,0.95,((_n_b_22464-0.5)*2.0)));
double _n_kg_22466=(d::truth((_n_b_22464<0.5))?_n_mix_22334(0.13,0.42,(_n_b_22464*2.0)):_n_mix_22334(0.42,0.96,((_n_b_22464-0.5)*2.0)));
double _n_kb_22467=(d::truth((_n_b_22464<0.5))?_n_mix_22334(0.25,0.58,(_n_b_22464*2.0)):_n_mix_22334(0.58,1.0,((_n_b_22464-0.5)*2.0)));
double _n_a_22468=d::minimum({1.0,(_n_c_22457*1.1)});
(void)((_n_cr_22440=_n_mix_22334(_n_cr_22440,_n_kr_22465,_n_a_22468)));
(void)((_n_cg_22441=_n_mix_22334(_n_cg_22441,_n_kg_22466,_n_a_22468)));
(void)((_n_cbl_22442=_n_mix_22334(_n_cbl_22442,_n_kb_22467,_n_a_22468)));
}
}else {d::check_cancel();if(((d::truth((_n_y_22438>=_n_HORIZON_22313))&&d::truth(([&]()->bool{auto _n_logical_22590=(_n_m_22439==_n_AIR_22319);return d::truth(_n_logical_22590)?_n_logical_22590:(_n_m_22439==_n_LAND_22320);})()))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_22591=(_n_m_22439==_n_LAND_22320);return d::truth(_n_logical_22591)?(_n_y_22438<(_n_HORIZON_22313+4.0)):_n_logical_22591;})()))))){d::check_cancel();double _n_v_22469=((_n_y_22438-_n_HORIZON_22313)/(_n_H_22312-_n_HORIZON_22313));
double _n_w_22470=([&](){auto _n_left_22592=(0.6*_n_noise_22330(((_n_x_22436*0.07)+(_n_t_22427*0.12)),((_n_y_22438*0.45)-(_n_t_22427*0.6)),0.0));auto _n_right_22593=(0.4*_n_noise_22330(((_n_x_22436*0.2)-(_n_t_22427*0.25)),((_n_y_22438*0.9)-(_n_t_22427*1.1)),0.0));return (_n_left_22592+_n_right_22593);})();
double _n_swell_22471=(0.45+(0.95*_n_w_22470));
(void)((_n_cr_22440=((0.08-(0.04*_n_v_22469))*_n_swell_22471)));
(void)((_n_cg_22441=((0.13-(0.06*_n_v_22469))*_n_swell_22471)));
(void)((_n_cbl_22442=((0.28-(0.12*_n_v_22469))*_n_swell_22471)));
double _n_roadW_22472=(3.0+((_n_y_22438-_n_HORIZON_22313)*0.55));
double _n_road_22473=std::exp((-d::number(std::pow((((_n_x_22436+0.5)-d::at(_n_MOON_22314,0.0))/_n_roadW_22472),2.0))));
double _n_glint_22474=(_n_smooth_22333(0.5,0.8,_n_w_22470)*_n_road_22473);
(void)((_n_cr_22440=(_n_cr_22440+((0.95*_n_glint_22474)+(0.07*_n_road_22473)))));
(void)((_n_cg_22441=(_n_cg_22441+((0.95*_n_glint_22474)+(0.09*_n_road_22473)))));
(void)((_n_cbl_22442=(_n_cbl_22442+((0.95*_n_glint_22474)+(0.15*_n_road_22473)))));
double _n_lw_22475=(1.3+((_n_y_22438-_n_HORIZON_22313)*0.22));
double _n_refl_22476=(([&](){auto _n_left_22594=std::exp((-d::number(std::pow((((_n_x_22436+0.5)-_n_LAMP_X_22315)/_n_lw_22475),2.0))));auto _n_right_22595=_n_smooth_22333(0.45,0.8,_n_w_22470);return (_n_left_22594*_n_right_22595);})()*(0.75+(0.6*_n_flash_22432)));
(void)((_n_cr_22440=(_n_cr_22440+_n_refl_22476)));
(void)((_n_cg_22441=(_n_cg_22441+(0.72*_n_refl_22476))));
(void)((_n_cbl_22442=(_n_cbl_22442+(0.32*_n_refl_22476))));
if((d::truth((_n_y_22438<(_n_HORIZON_22313+8.0)))&&d::truth((_n_x_22436<90.0)))){d::check_cancel();double _n_edge_22477=([&](){auto _n_left_22596=_n_smooth_22333(90.0,74.0,_n_x_22436);auto _n_right_22597=_n_smooth_22333((_n_HORIZON_22313+8.0),(_n_HORIZON_22313+3.0),_n_y_22438);return (_n_left_22596*_n_right_22597);})();
double _n_foam_22478=(([&](){auto _n_argument_22598=0.5;auto _n_argument_22599=0.85;auto _n_argument_22600=_n_noise_22330(((_n_x_22436*0.45)-(_n_t_22427*0.6)),((_n_y_22438*0.8)+(_n_t_22427*0.4)),0.0);return _n_smooth_22333(_n_argument_22598,_n_argument_22599,_n_argument_22600);})()*_n_edge_22477);
(void)((((_n_cr_22440=(_n_cr_22440+(0.65*_n_foam_22478))),(_n_cg_22441=(_n_cg_22441+(0.7*_n_foam_22478)))),(_n_cbl_22442=(_n_cbl_22442+(0.75*_n_foam_22478)))));
}
double _n_haze_22479=(std::exp(((-d::number((_n_y_22438-_n_HORIZON_22313)))/2.5))*0.16);
(void)((((_n_cr_22440=(_n_cr_22440+(_n_haze_22479*0.8))),(_n_cg_22441=(_n_cg_22441+(_n_haze_22479*0.9)))),(_n_cbl_22442=(_n_cbl_22442+_n_haze_22479))));
(void)((_n_floor_22443=0.18));
(void)((_n_fade_22444=_n_smooth_22333(_n_H_22312,(_n_H_22312-26.0),_n_y_22438)));
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_LAND_22320))){d::check_cancel();double _n_s_22480=d::at(this->_n_shade_22343,_n_k_22437);
(void)((((_n_cr_22440=(0.05+(0.14*_n_s_22480))),(_n_cg_22441=(0.09+(0.2*_n_s_22480)))),(_n_cbl_22442=(0.1+(0.18*_n_s_22480)))));
(void)((_n_floor_22443=0.1));
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_TREE_22321))){d::check_cancel();double _n_s_22481=d::at(this->_n_shade_22343,_n_k_22437);
(void)((((_n_cr_22440=(0.03+(0.07*_n_s_22481))),(_n_cg_22441=(0.07+(0.14*_n_s_22481)))),(_n_cbl_22442=(0.07+(0.1*_n_s_22481)))));
(void)((_n_floor_22443=0.06));
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_ISLE_22328))){d::check_cancel();(void)((((_n_cr_22440=0.06),(_n_cg_22441=0.08)),(_n_cbl_22442=0.15)));
(void)((_n_floor_22443=0.1));
if((d::truth((_n_x_22436==184.0))&&d::truth((_n_r_22435==55.0)))){d::check_cancel();bool _n_on_22482=(std::sin((_n_t_22427*2.2))>0.55);
(void)((((_n_cr_22440=(d::truth(_n_on_22482)?1.0:0.35)),(_n_cg_22441=(d::truth(_n_on_22482)?0.36:0.12))),(_n_cbl_22442=(d::truth(_n_on_22482)?0.3:0.1))));
}
}else {d::check_cancel();if((d::truth((_n_m_22439==_n_TOWER_22322))||d::truth((_n_m_22439==_n_CAP_22324)))){d::check_cancel();double _n_s_22483=d::at(this->_n_shade_22343,_n_k_22437);
(void)((((_n_cr_22440=(0.4+(0.58*_n_s_22483))),(_n_cg_22441=(0.42+(0.56*_n_s_22483)))),(_n_cbl_22442=(0.48+(0.52*_n_s_22483)))));
if(d::truth((_n_m_22439==_n_CAP_22324))){d::check_cancel();(void)((((_n_cr_22440=(_n_cr_22440*0.7)),(_n_cg_22441=(_n_cg_22441*0.66))),(_n_cbl_22442=(_n_cbl_22442*0.68))));
}
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_LANTERN_22323))){d::check_cancel();double _n_g_22484=(0.85+(0.15*d::minimum({1.0,_n_flash_22432})));
(void)((((_n_cr_22440=_n_g_22484),(_n_cg_22441=(0.84*_n_g_22484))),(_n_cbl_22442=(0.5*_n_g_22484))));
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_WALL_22325))){d::check_cancel();double _n_s_22485=d::at(this->_n_shade_22343,_n_k_22437);
(void)((((_n_cr_22440=(0.3+(0.4*_n_s_22485))),(_n_cg_22441=(0.32+(0.4*_n_s_22485)))),(_n_cbl_22442=(0.38+(0.4*_n_s_22485)))));
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_PANE_22326))){d::check_cancel();double _n_g_22486=(0.85+(0.15*std::sin(((_n_t_22427*3.0)+_n_x_22436))));
(void)((((_n_cr_22440=_n_g_22486),(_n_cg_22441=(0.72*_n_g_22486))),(_n_cbl_22442=(0.32*_n_g_22486))));
}else {d::check_cancel();if(d::truth((_n_m_22439==_n_ROOF_22327))){d::check_cancel();(void)((((_n_cr_22440=0.4),(_n_cg_22441=0.17)),(_n_cbl_22442=0.14)));
}
}
}
}
}
}
}
}
}
}
double _n_bx_22487=((_n_x_22436+0.5)-_n_LAMP_X_22315);
double _n_by_22488=(_n_y_22438-_n_lampY_22433);
if(((d::truth((_n_m_22439!=_n_TOWER_22322))&&d::truth((_n_m_22439!=_n_CAP_22324)))&&d::truth((_n_m_22439!=_n_LANTERN_22323)))){d::check_cancel();if(d::truth(((_n_bx_22487*_n_cb_22430)>0.0))){d::check_cancel();double _n_along_22489=([&](){auto _n_left_22601=std::fabs(_n_bx_22487);auto _n_right_22602=((std::fabs(_n_cb_22430)*115.0)+1.0);return (_n_left_22601/_n_right_22602);})();
if(d::truth((_n_along_22489<1.0))){d::check_cancel();double _n_spread_22490=(1.4+(std::fabs(_n_bx_22487)*0.11));
double _n_b_22491=(([&](){auto _n_left_22603=std::pow((1.0-_n_along_22489),1.8);auto _n_right_22604=std::exp((-d::number(std::pow((_n_by_22488/_n_spread_22490),2.0))));return (_n_left_22603*_n_right_22604);})()*0.85);
(void)((((_n_cr_22440=(_n_cr_22440+_n_b_22491)),(_n_cg_22441=(_n_cg_22441+(_n_b_22491*0.84)))),(_n_cbl_22442=(_n_cbl_22442+(_n_b_22491*0.5)))));
}
}
double _n_dl_22492=std::sqrt(((_n_bx_22487*_n_bx_22487)+(_n_by_22488*_n_by_22488)));
double _n_glow_22493=([&](){auto _n_left_22605=(std::exp(((-d::number(_n_dl_22492))/(3.5+(3.0*_n_flash_22432))))*(0.5+(0.6*_n_flash_22432)));auto _n_right_22606=(std::exp(((-d::number(_n_dl_22492))/14.0))*0.12);return (_n_left_22605+_n_right_22606);})();
(void)((((_n_cr_22440=(_n_cr_22440+_n_glow_22493)),(_n_cg_22441=(_n_cg_22441+(_n_glow_22493*0.82)))),(_n_cbl_22442=(_n_cbl_22442+(_n_glow_22493*0.5)))));
}
double _n_peak_22494=d::maximum({_n_cr_22440,_n_cg_22441,_n_cbl_22442,0.0001});
double _n_level_22495=(_n_clamp_22332((_n_floor_22443+(((1.0-_n_floor_22443)*std::pow(_n_peak_22494,0.85))*0.95)))*_n_fade_22444);
double _n_step_22496=([&](){auto _n_argument_22607=0.0;auto _n_argument_22608=([&](){auto _n_argument_22609=3.0;auto _n_argument_22610=d::round(((_n_level_22495*3.0)+d::at(_n_BAYER_22318,((double(d::i32(_n_r_22435)&d::i32(3.0))*4.0)+double(d::i32(_n_x_22436)&d::i32(3.0))))));return d::minimum({_n_argument_22609,_n_argument_22610});})();return d::maximum({_n_argument_22607,_n_argument_22608});})();
(void)(([&](){auto&& _n_array_22611=this->_n_out_22338;auto _n_index_22612=_n_k_22437;auto _n_value_22613=d::at(_n_DOTS_22316,_n_step_22496);d::put(_n_array_22611,_n_index_22612,_n_value_22613);return _n_value_22613;})());
if(d::truth(_n_color_22428)){d::check_cancel();double _n_want_22497=(d::truth(_n_step_22496)?d::minimum({1.0,((_n_level_22495+0.06)/d::at(_n_COVER_22317,_n_step_22496))}):0.0);
double _n_s_22498=((0.3+(0.7*_n_want_22497))/_n_peak_22494);
(void)(([&](){auto&& _n_array_22614=d::read(_n_color_22428);auto _n_index_22615=_n_k_22437;auto _n_value_22616=([&](){auto _n_argument_22617=_n_clamp_22332((_n_cr_22440*_n_s_22498));auto _n_argument_22618=_n_clamp_22332((_n_cg_22441*_n_s_22498));auto _n_argument_22619=_n_clamp_22332((_n_cbl_22442*_n_s_22498));return this->_n_nearest_22340(_n_argument_22617,_n_argument_22618,_n_argument_22619);})();d::put(_n_array_22614,_n_index_22615,_n_value_22616);return _n_value_22616;})());
}
}}
}}
d::Array<d::String,false> _n_lines_22499=d::Array<d::String,false>{};
{double _n_r_22500=0.0;
for(;d::truth((_n_r_22500<_n_H_22312));(void)((_n_r_22500++))){d::check_cancel();(void)(_n_lines_22499.push(d::join(this->_n_out_22338.slice((_n_r_22500*_n_W_22311),((_n_r_22500+1.0)*_n_W_22311)),d::String(u""))));
}}
return d::join(_n_lines_22499,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("night-coast").cols)*ascii::catalog_meta("night-coast").rows);auto _env=std::make_shared<_n_Record_22501>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &night_coast_meta(){return catalog_meta("night-coast");}
std::unique_ptr<Piece> make_night_coast(const AsciiPieceOptions &o){return std::make_unique<Native_night_coast>(o);}
}
