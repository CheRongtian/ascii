// Direct, statically typed C++ from src/pieces/night-coast.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22311;
struct _n_Record_22502;
struct _n_Record_22311{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_22311> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22311>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_22502{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22502> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22502>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_22330(double _a0,double _a1);
double _n_noise_22331(double _a0,double _a1,double _a2);
double _n_fbm_22332(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_22333(double _a0);
double _n_smooth_22334(double _a0,double _a1,double _a2);
double _n_mix_22335(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_22336(d::String _a0);
std::shared_ptr<_n_Record_22311> _n_meta_22310=[](){return ([&](){auto _n_object_22505=std::make_shared<_n_Record_22311>();_n_object_22505->_p_name=d::String(u"night coast");_n_object_22505->_p_category=d::String(u"scenes");_n_object_22505->_p_note=d::String(u"a lighthouse turning its beam under moonlit clouds over a dark sea");_n_object_22505->_p_cols=200.0;_n_object_22505->_p_rows=100.0;_n_object_22505->_p_cell=1.0;_n_object_22505->_p_fps=15.0;_n_object_22505->_p_ground=d::String(u"#080b12");_n_object_22505->_p_palette=d::Array<d::String,false>{d::String(u"#15203d"),d::String(u"#1b2a50"),d::String(u"#223463"),d::String(u"#2b4077"),d::String(u"#364e8b"),d::String(u"#445f9f"),d::String(u"#5874b2"),d::String(u"#7089c0"),d::String(u"#8a9cc4"),d::String(u"#a3b1cf"),d::String(u"#bec9dc"),d::String(u"#d8dfea"),d::String(u"#eef1f6"),d::String(u"#f7f8fc"),d::String(u"#ffe9ae"),d::String(u"#ffd27c"),d::String(u"#f3a64a"),d::String(u"#c46c2d"),d::String(u"#121c1b"),d::String(u"#182724"),d::String(u"#203530"),d::String(u"#2c473d"),d::String(u"#3c5c4c"),d::String(u"#232a36"),d::String(u"#363e4c"),d::String(u"#555d6c"),d::String(u"#2a3550"),d::String(u"#3a4868"),d::String(u"#9c4136"),d::String(u"#ff5d4d")};return _n_object_22505;})();}();
const double _n_W_22312=[](){return 200.0;}();
const double _n_H_22313=[](){return 100.0;}();
const double _n_HORIZON_22314=[](){return 60.0;}();
d::Array<double,false> _n_MOON_22315=[](){return d::Array<double,false>{150.0,19.0};}();
const double _n_LAMP_X_22316=[](){return 30.0;}();
const d::String _n_DOTS_22317=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_22318=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_22319=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_22354=_a0;
return ((_n_v_22354/16.0)-0.47);});}();
const double _n_AIR_22320=[](){return 0.0;}();
const double _n_LAND_22321=[](){return 1.0;}();
const double _n_TREE_22322=[](){return 2.0;}();
const double _n_TOWER_22323=[](){return 3.0;}();
const double _n_LANTERN_22324=[](){return 4.0;}();
const double _n_CAP_22325=[](){return 5.0;}();
const double _n_WALL_22326=[](){return 6.0;}();
const double _n_PANE_22327=[](){return 7.0;}();
const double _n_ROOF_22328=[](){return 8.0;}();
const double _n_ISLE_22329=[](){return 9.0;}();
double _n_hash_22330(double _a0,double _a1){double _n_x_22355=_a0;
double _n_y_22356=_a1;
{
double _n_h_22357=([&](){auto _n_left_22506=d::imul(double(d::i32(_n_x_22355)|d::i32(0.0)),374761393.0);auto _n_right_22507=d::imul(double(d::i32(_n_y_22356)|d::i32(0.0)),668265263.0);return (_n_left_22506+_n_right_22507);})();
(void)((_n_h_22357=d::imul(double(d::i32(_n_h_22357)^d::i32(double(d::u32(_n_h_22357)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_22357)^d::i32(double(d::u32(_n_h_22357)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_22331(double _a0,double _a1,double _a2){double _n_x_22358=_a0;
double _n_y_22359=_a1;
double _n_period_22360=_a2;
{
double _n_xi_22361=std::floor(_n_x_22358);
double _n_yi_22362=std::floor(_n_y_22359);
double _n_fx_22363=(_n_x_22358-_n_xi_22361);
double _n_fy_22364=(_n_y_22359-_n_yi_22362);
double _n_u_22365=((_n_fx_22363*_n_fx_22363)*(3.0-(2.0*_n_fx_22363)));
double _n_v_22366=((_n_fy_22364*_n_fy_22364)*(3.0-(2.0*_n_fy_22364)));
double _n_x0_22367=_n_xi_22361;
double _n_x1_22368=(_n_xi_22361+1.0);
if(d::truth(_n_period_22360)){d::check_cancel();(void)((_n_x0_22367=d::mod((d::mod(_n_xi_22361,_n_period_22360)+_n_period_22360),_n_period_22360)));
(void)((_n_x1_22368=d::mod((_n_x0_22367+1.0),_n_period_22360)));
}
double _n_a_22369=_n_hash_22330(_n_x0_22367,_n_yi_22362);
double _n_b_22370=_n_hash_22330(_n_x1_22368,_n_yi_22362);
double _n_c_22371=_n_hash_22330(_n_x0_22367,(_n_yi_22362+1.0));
double _n_d_22372=_n_hash_22330(_n_x1_22368,(_n_yi_22362+1.0));
return (((_n_a_22369+((_n_b_22370-_n_a_22369)*_n_u_22365))+((_n_c_22371-_n_a_22369)*_n_v_22366))+(((((_n_a_22369-_n_b_22370)-_n_c_22371)+_n_d_22372)*_n_u_22365)*_n_v_22366));

}
}

double _n_fbm_22332(double _a0,double _a1,double _a2,double _a3){double _n_x_22373=_a0;
double _n_y_22374=_a1;
double _n_octaves_22375=_a2;
double _n_period_22376=_a3;
{
double _n_s_22377=0.0;
double _n_n_22378=0.0;
double _n_amp_22379=0.5;
double _n_f_22380=1.0;
{double _n_i_22381=0.0;
for(;d::truth((_n_i_22381<_n_octaves_22375));(void)((_n_i_22381++))){d::check_cancel();(void)((_n_s_22377=(_n_s_22377+(_n_amp_22379*_n_noise_22331((_n_x_22373*_n_f_22380),(_n_y_22374*_n_f_22380),(_n_period_22376*_n_f_22380))))));
(void)((_n_n_22378=(_n_n_22378+_n_amp_22379)));
(void)((_n_amp_22379=(_n_amp_22379*0.5)));
(void)((_n_f_22380=(_n_f_22380*2.0)));
}}
return (_n_s_22377/_n_n_22378);

}
}

double _n_clamp_22333(double _a0){double _n_v_22382=_a0;
return (d::truth((_n_v_22382<0.0))?0.0:(d::truth((_n_v_22382>1.0))?1.0:_n_v_22382));}

double _n_smooth_22334(double _a0,double _a1,double _a2){double _n_a_22383=_a0;
double _n_b_22384=_a1;
double _n_v_22385=_a2;
{
double _n_k_22386=_n_clamp_22333(((_n_v_22385-_n_a_22383)/(_n_b_22384-_n_a_22383)));
return ((_n_k_22386*_n_k_22386)*(3.0-(2.0*_n_k_22386)));

}
}

double _n_mix_22335(double _a0,double _a1,double _a2){double _n_a_22387=_a0;
double _n_b_22388=_a1;
double _n_k_22389=_a2;
return (_n_a_22387+((_n_b_22388-_n_a_22387)*_n_k_22389));}

d::Array<double,false> _n_hex_22336(d::String _a0){d::String _n_s_22390=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_22391=_a0;
return (([&](){auto _n_argument_22508=d::slice(_n_s_22390,_n_i_22391,(_n_i_22391+2.0));auto _n_argument_22509=16.0;return d::parseInt(_n_argument_22508,_n_argument_22509);})()/255.0);});}

struct Native_night_coast final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_22337{};
double _n_N_22338{};
d::Array<d::String,false> _n_out_22339{};
d::Array<uint8_t,true> _n_lut_22340{};
d::Array<uint8_t,true> _n_mat_22343{};
d::Array<float,true> _n_shade_22344{};
double _n_base_22345{};
double _n_towerTop_22346{};
d::Array<d::Array<double,false>,false> _n_trees_22347{};
double _n_cottage_22348{};
d::Array<float,true> _n_haze_22349{};
double _n_CW_22350{};
d::Array<float,true> _n_cover_22351{};
d::Array<float,true> _n_lit_22352{};
std::function<d::String(double,std::shared_ptr<_n_Record_22502>)> _render;
double _n_nearest_22341(double _a0,double _a1,double _a2){double _n_r_22392=_a0;
double _n_g_22393=_a1;
double _n_b_22394=_a2;
{
double _n_k_22395=([&](){auto _n_left_22621=([&](){auto _n_left_22623=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_22392*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_22624=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_22393*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_22623)|d::i32(_n_right_22624));})();auto _n_right_22622=d::minimum({31.0,double(d::i32((_n_b_22394*31.99))|d::i32(0.0))});return double(d::i32(_n_left_22621)|d::i32(_n_right_22622));})();
if(d::truth((d::at(this->_n_lut_22340,_n_k_22395)!=255.0))){d::check_cancel();return d::at(this->_n_lut_22340,_n_k_22395);
}
double _n_best_22396=0.0;
double _n_bd_22397=1000000000.0;
{double _n_i_22398=0.0;
for(;d::truth((_n_i_22398<double(this->_n_P_22337.size())));(void)((_n_i_22398++))){d::check_cancel();double _n_dr_22399=(d::at(d::at(this->_n_P_22337,_n_i_22398),0.0)-_n_r_22392);
double _n_dg_22400=(d::at(d::at(this->_n_P_22337,_n_i_22398),1.0)-_n_g_22393);
double _n_db_22401=(d::at(d::at(this->_n_P_22337,_n_i_22398),2.0)-_n_b_22394);
double _n_d_22402=((((0.3*_n_dr_22399)*_n_dr_22399)+((0.5*_n_dg_22400)*_n_dg_22400))+((0.2*_n_db_22401)*_n_db_22401));
if(d::truth((_n_d_22402<_n_bd_22397))){d::check_cancel();(void)(((_n_bd_22397=_n_d_22402),(_n_best_22396=_n_i_22398)));
}
}}
return ([&](){auto&& _n_array_22625=this->_n_lut_22340;auto _n_index_22626=_n_k_22395;auto _n_value_22627=_n_best_22396;d::put(_n_array_22625,_n_index_22626,_n_value_22627);return _n_value_22627;})();

}
}

double _n_top_22342(double _a0){double _n_x_22403=_a0;
return ([&](){auto _n_left_22628=(_n_HORIZON_22314-([&](){auto _n_left_22630=(15.0*_n_smooth_22334(86.0,50.0,_n_x_22403));auto _n_right_22631=(1.0-(0.12*_n_smooth_22334(24.0,0.0,_n_x_22403)));return (_n_left_22630*_n_right_22631);})());auto _n_right_22629=(1.6*_n_fbm_22332((_n_x_22403*0.15),3.7,3.0,0.0));return (_n_left_22628-_n_right_22629);})();}

double _n_density_22353(double _a0,double _a1){double _n_x_22419=_a0;
double _n_y_22420=_a1;
{
double _n_q_22421=_n_fbm_22332((_n_x_22419*0.008),(_n_y_22420*0.02),3.0,(this->_n_CW_22350*0.008));
double _n_d_22422=_n_fbm_22332(((_n_x_22419*0.018)+(_n_q_22421*2.4)),((_n_y_22420*0.036)+(_n_q_22421*1.1)),5.0,(this->_n_CW_22350*0.018));
return ([&](){auto _n_left_22632=([&](){auto _n_left_22634=(_n_d_22422+(0.05*_n_smooth_22334(8.0,22.0,_n_y_22420)));auto _n_right_22635=(0.04*_n_smooth_22334(10.0,0.0,_n_y_22420));return (_n_left_22634-_n_right_22635);})();auto _n_right_22633=(0.16*_n_smooth_22334(36.0,(_n_HORIZON_22314-4.0),_n_y_22420));return (_n_left_22632-_n_right_22633);})();

}
}

explicit Native_night_coast(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_22337=d::map(_n_meta_22310->_p_palette,_n_hex_22336);
this->_n_N_22338=(_n_W_22312*_n_H_22313);
this->_n_out_22339=d::Array<d::String,false>(size_t(this->_n_N_22338));
this->_n_lut_22340=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_22343=d::Array<uint8_t,true>(size_t(this->_n_N_22338));
this->_n_shade_22344=d::Array<float,true>(size_t(this->_n_N_22338));
this->_n_base_22345=this->_n_top_22342(_n_LAMP_X_22316);
this->_n_towerTop_22346=(this->_n_base_22345-15.0);
this->_n_trees_22347=d::Array<d::Array<double,false>,false>{};
{double _n_x_22404=1.0;
for(;d::truth((_n_x_22404<76.0));(void)((_n_x_22404=(_n_x_22404+(2.6+(_n_hash_22330((_n_x_22404*7.0),1.0)*2.6)))))){d::check_cancel();if((d::truth((_n_x_22404>22.0))&&d::truth((_n_x_22404<49.0)))){d::check_cancel();continue;
}
(void)(this->_n_trees_22347.push(d::Array<double,false>{(_n_x_22404+(_n_hash_22330(_n_x_22404,2.0)*1.2)),([&](){auto _n_left_22510=(4.0+(_n_hash_22330(_n_x_22404,3.0)*7.0));auto _n_right_22511=_n_smooth_22334(78.0,56.0,_n_x_22404);return (_n_left_22510*_n_right_22511);})(),(2.0+(_n_hash_22330(_n_x_22404,4.0)*1.6))}));
}}
this->_n_cottage_22348=this->_n_top_22342(41.0);
{double _n_r_22405=0.0;
for(;d::truth((_n_r_22405<_n_H_22313));(void)((_n_r_22405++))){d::check_cancel();{double _n_x_22406=0.0;
for(;d::truth((_n_x_22406<_n_W_22312));(void)((_n_x_22406++))){d::check_cancel();double _n_k_22407=((_n_r_22405*_n_W_22312)+_n_x_22406);
double _n_y_22408=(_n_r_22405+0.5);
double _n_t0_22409=this->_n_top_22342(_n_x_22406);
double _n_isle_22410=([&](){auto _n_left_22512=(_n_HORIZON_22314-(4.5*d::maximum({0.0,(1.0-std::pow(((_n_x_22406-180.0)/26.0),2.0))})));auto _n_right_22513=(1.4*_n_fbm_22332((_n_x_22406*0.2),9.0,2.0,0.0));return (_n_left_22512-_n_right_22513);})();
if(((d::truth((_n_y_22408>=_n_t0_22409))&&d::truth((_n_y_22408<(_n_HORIZON_22314+4.0))))&&d::truth((_n_x_22406<90.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_22514=this->_n_mat_22343;auto _n_index_22515=_n_k_22407;auto _n_value_22516=_n_LAND_22321;d::put(_n_array_22514,_n_index_22515,_n_value_22516);return _n_value_22516;})());
(void)(([&](){auto&& _n_array_22517=this->_n_shade_22344;auto _n_index_22518=_n_k_22407;auto _n_value_22519=([&](){auto _n_left_22520=([&](){auto _n_left_22522=(0.2+(0.45*_n_fbm_22332((_n_x_22406*0.35),(_n_y_22408*0.35),3.0,0.0)));auto _n_right_22523=(0.5*_n_smooth_22334((_n_t0_22409+3.0),_n_t0_22409,_n_y_22408));return (_n_left_22522+_n_right_22523);})();auto _n_right_22521=(0.2*_n_smooth_22334((_n_HORIZON_22314-4.0),(_n_HORIZON_22314+4.0),_n_y_22408));return (_n_left_22520-_n_right_22521);})();d::put(_n_array_22517,_n_index_22518,_n_value_22519);return _n_value_22519;})());
}else {d::check_cancel();if(((d::truth((_n_x_22406>148.0))&&d::truth((_n_y_22408>=_n_isle_22410)))&&d::truth((_n_y_22408<_n_HORIZON_22314)))){d::check_cancel();(void)(([&](){auto&& _n_array_22524=this->_n_mat_22343;auto _n_index_22525=_n_k_22407;auto _n_value_22526=_n_ISLE_22329;d::put(_n_array_22524,_n_index_22525,_n_value_22526);return _n_value_22526;})());
}
}
for(auto &&_n_item_22527:this->_n_trees_22347){d::check_cancel();auto _n_binding_22528=_n_item_22527;
double _n_tx_22411=d::at(_n_binding_22528,0.0);
double _n_th_22412=d::at(_n_binding_22528,1.0);
double _n_tw_22413=d::at(_n_binding_22528,2.0);
{
if(d::truth((_n_th_22412<1.0))){d::check_cancel();continue;
}
double _n_tb_22414=this->_n_top_22342(_n_tx_22411);
double _n_dy_22415=(_n_y_22408-(_n_tb_22414-_n_th_22412));
if(((d::truth((_n_dy_22415>=0.0))&&d::truth((_n_y_22408<(_n_tb_22414+2.0))))&&d::truth((std::fabs(((_n_x_22406+0.5)-_n_tx_22411))<=(((_n_dy_22415/_n_th_22412)*_n_tw_22413)+0.4))))){d::check_cancel();(void)(([&](){auto&& _n_array_22529=this->_n_mat_22343;auto _n_index_22530=_n_k_22407;auto _n_value_22531=_n_TREE_22322;d::put(_n_array_22529,_n_index_22530,_n_value_22531);return _n_value_22531;})());
(void)(([&](){auto&& _n_array_22532=this->_n_shade_22344;auto _n_index_22533=_n_k_22407;auto _n_value_22534=((0.1+(0.35*_n_hash_22330(((_n_x_22406*13.0)+_n_r_22405),5.0)))+(d::truth(((_n_x_22406+0.5)>_n_tx_22411))?0.35:0.0));d::put(_n_array_22532,_n_index_22533,_n_value_22534);return _n_value_22534;})());
}

}
}
double _n_dx_22416=((_n_x_22406+0.5)-_n_LAMP_X_22316);
if((d::truth((_n_y_22408>=this->_n_towerTop_22346))&&d::truth((_n_y_22408<(this->_n_base_22345+2.0))))){d::check_cancel();double _n_hw_22417=(3.0-(1.1*_n_smooth_22334(this->_n_base_22345,this->_n_towerTop_22346,_n_y_22408)));
if(d::truth((std::fabs(_n_dx_22416)<=_n_hw_22417))){d::check_cancel();(void)(([&](){auto&& _n_array_22535=this->_n_mat_22343;auto _n_index_22536=_n_k_22407;auto _n_value_22537=_n_TOWER_22323;d::put(_n_array_22535,_n_index_22536,_n_value_22537);return _n_value_22537;})());
(void)(([&](){auto&& _n_array_22538=this->_n_shade_22344;auto _n_index_22539=_n_k_22407;auto _n_value_22540=(0.45+(0.5*(_n_dx_22416/_n_hw_22417)));d::put(_n_array_22538,_n_index_22539,_n_value_22540);return _n_value_22540;})());
}
}
if(((d::truth((_n_y_22408>=(this->_n_towerTop_22346-1.0)))&&d::truth((_n_y_22408<(this->_n_towerTop_22346+1.0))))&&d::truth((std::fabs(_n_dx_22416)<=3.6)))){d::check_cancel();(void)((([&](){auto&& _n_array_22541=this->_n_mat_22343;auto _n_index_22542=_n_k_22407;auto _n_value_22543=_n_CAP_22325;d::put(_n_array_22541,_n_index_22542,_n_value_22543);return _n_value_22543;})(),([&](){auto&& _n_array_22544=this->_n_shade_22344;auto _n_index_22545=_n_k_22407;auto _n_value_22546=0.55;d::put(_n_array_22544,_n_index_22545,_n_value_22546);return _n_value_22546;})()));
}
if(((d::truth((_n_y_22408>=(this->_n_towerTop_22346-7.0)))&&d::truth((_n_y_22408<(this->_n_towerTop_22346-1.0))))&&d::truth((std::fabs(_n_dx_22416)<=2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_22547=this->_n_mat_22343;auto _n_index_22548=_n_k_22407;auto _n_value_22549=_n_LANTERN_22324;d::put(_n_array_22547,_n_index_22548,_n_value_22549);return _n_value_22549;})());
}
if(((d::truth((_n_y_22408>=(this->_n_towerTop_22346-10.0)))&&d::truth((_n_y_22408<(this->_n_towerTop_22346-7.0))))&&d::truth((std::fabs(_n_dx_22416)<=(2.8-(((this->_n_towerTop_22346-7.0)-_n_y_22408)*0.8)))))){d::check_cancel();(void)((([&](){auto&& _n_array_22550=this->_n_mat_22343;auto _n_index_22551=_n_k_22407;auto _n_value_22552=_n_CAP_22325;d::put(_n_array_22550,_n_index_22551,_n_value_22552);return _n_value_22552;})(),([&](){auto&& _n_array_22553=this->_n_shade_22344;auto _n_index_22554=_n_k_22407;auto _n_value_22555=0.4;d::put(_n_array_22553,_n_index_22554,_n_value_22555);return _n_value_22555;})()));
}
if((((d::truth((_n_x_22406>=36.0))&&d::truth((_n_x_22406<=47.0)))&&d::truth((_n_y_22408>=(this->_n_cottage_22348-5.0))))&&d::truth((_n_y_22408<(this->_n_cottage_22348+1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_22556=this->_n_mat_22343;auto _n_index_22557=_n_k_22407;auto _n_value_22558=_n_WALL_22326;d::put(_n_array_22556,_n_index_22557,_n_value_22558);return _n_value_22558;})());
(void)(([&](){auto&& _n_array_22559=this->_n_shade_22344;auto _n_index_22560=_n_k_22407;auto _n_value_22561=(0.3+((0.4*(_n_x_22406-36.0))/11.0));d::put(_n_array_22559,_n_index_22560,_n_value_22561);return _n_value_22561;})());
if(((d::truth(([&]()->bool{auto _n_logical_22562=(_n_x_22406==39.0);return d::truth(_n_logical_22562)?_n_logical_22562:(_n_x_22406==44.0);})())&&d::truth((_n_y_22408>=(this->_n_cottage_22348-4.0))))&&d::truth((_n_y_22408<(this->_n_cottage_22348-1.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_22563=this->_n_mat_22343;auto _n_index_22564=_n_k_22407;auto _n_value_22565=_n_PANE_22327;d::put(_n_array_22563,_n_index_22564,_n_value_22565);return _n_value_22565;})());
}
}
if(((d::truth((_n_y_22408>=(this->_n_cottage_22348-10.0)))&&d::truth((_n_y_22408<(this->_n_cottage_22348-5.0))))&&d::truth((std::fabs(((_n_x_22406+0.5)-42.0))<=(7.5-(((this->_n_cottage_22348-5.0)-_n_y_22408)*1.2)))))){d::check_cancel();(void)(([&](){auto&& _n_array_22566=this->_n_mat_22343;auto _n_index_22567=_n_k_22407;auto _n_value_22568=_n_ROOF_22328;d::put(_n_array_22566,_n_index_22567,_n_value_22568);return _n_value_22568;})());
}
}}
}}
this->_n_haze_22349=d::Array<float,true>(size_t(this->_n_N_22338));
{double _n_k_22418=0.0;
for(;d::truth((_n_k_22418<this->_n_N_22338));(void)((_n_k_22418++))){d::check_cancel();(void)(([&](){auto&& _n_array_22569=this->_n_haze_22349;auto _n_index_22570=_n_k_22418;auto _n_value_22571=([&](){auto _n_argument_22572=(d::mod(_n_k_22418,_n_W_22312)*0.05);auto _n_argument_22573=(std::floor((_n_k_22418/_n_W_22312))*0.08);auto _n_argument_22574=3.0;auto _n_argument_22575=0.0;return _n_fbm_22332(_n_argument_22572,_n_argument_22573,_n_argument_22574,_n_argument_22575);})();d::put(_n_array_22569,_n_index_22570,_n_value_22571);return _n_value_22571;})());
}}
this->_n_CW_22350=640.0;
this->_n_cover_22351=d::Array<float,true>(size_t((this->_n_CW_22350*_n_HORIZON_22314)));
this->_n_lit_22352=d::Array<float,true>(size_t((this->_n_CW_22350*_n_HORIZON_22314)));
{double _n_r_22423=0.0;
for(;d::truth((_n_r_22423<_n_HORIZON_22314));(void)((_n_r_22423++))){d::check_cancel();{double _n_x_22424=0.0;
for(;d::truth((_n_x_22424<this->_n_CW_22350));(void)((_n_x_22424++))){d::check_cancel();double _n_y_22425=(_n_r_22423+0.5);
double _n_d_22426=this->_n_density_22353(_n_x_22424,_n_y_22425);
(void)(([&](){auto&& _n_array_22576=this->_n_cover_22351;auto _n_index_22577=((_n_r_22423*this->_n_CW_22350)+_n_x_22424);auto _n_value_22578=_n_smooth_22334(0.52,0.63,_n_d_22426);d::put(_n_array_22576,_n_index_22577,_n_value_22578);return _n_value_22578;})());
double _n_toward_22427=this->_n_density_22353((_n_x_22424+2.5),(_n_y_22425-3.0));
(void)(([&](){auto&& _n_array_22579=this->_n_lit_22352;auto _n_index_22580=((_n_r_22423*this->_n_CW_22350)+_n_x_22424);auto _n_value_22581=_n_clamp_22333(((0.5+((_n_d_22426-_n_toward_22427)*11.0))-((_n_d_22426-0.6)*1.2)));d::put(_n_array_22579,_n_index_22580,_n_value_22581);return _n_value_22581;})());
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_22502> _a1) mutable ->d::String{double _n_t_22428=_a0;
auto _n_binding_22584=(d::present(_a1)?_a1:([&](){auto _n_object_22583=std::make_shared<_n_Record_22502>();return _n_object_22583;})());
std::optional<d::Array<uint8_t,true>> _n_color_22429=_n_binding_22584->_p_color;
{
double _n_beam_22430=((((_n_t_22428/8.0)*ascii::PI)*2.0)-0.75);
double _n_cb_22431=std::cos(_n_beam_22430);
double _n_sb_22432=std::sin(_n_beam_22430);
double _n_flash_22433=(([&](){auto _n_argument_22585=d::maximum({0.0,_n_sb_22432});auto _n_argument_22586=14.0;return std::pow(_n_argument_22585,_n_argument_22586);})()*2.2);
double _n_lampY_22434=(this->_n_towerTop_22346-4.0);
double _n_drift_22435=(_n_t_22428*1.4);
{double _n_r_22436=0.0;
for(;d::truth((_n_r_22436<_n_H_22313));(void)((_n_r_22436++))){d::check_cancel();{double _n_x_22437=0.0;
for(;d::truth((_n_x_22437<_n_W_22312));(void)((_n_x_22437++))){d::check_cancel();double _n_k_22438=((_n_r_22436*_n_W_22312)+_n_x_22437);
double _n_y_22439=(_n_r_22436+0.5);
double _n_m_22440=d::at(this->_n_mat_22343,_n_k_22438);
double _n_cr_22441=0.0;
double _n_cg_22442=0.0;
double _n_cbl_22443=0.0;
double _n_floor_22444=0.3;
double _n_fade_22445=1.0;
double _n_dmx_22446=((_n_x_22437+0.5)-d::at(_n_MOON_22315,0.0));
double _n_dmy_22447=(_n_y_22439-d::at(_n_MOON_22315,1.0));
double _n_dm_22448=std::sqrt(((_n_dmx_22446*_n_dmx_22446)+(_n_dmy_22447*_n_dmy_22447)));
if((d::truth((_n_y_22439<_n_HORIZON_22314))&&d::truth((_n_m_22440==_n_AIR_22320)))){d::check_cancel();double _n_v_22449=(_n_y_22439/_n_HORIZON_22314);
double _n_halo_22450=([&](){auto _n_left_22587=(std::exp(((-d::number(_n_dm_22448))/24.0))*0.35);auto _n_right_22588=(std::exp(((-d::number(_n_dm_22448))/9.0))*0.45);return (_n_left_22587+_n_right_22588);})();
double _n_glowH_22451=(std::pow(_n_v_22449,3.0)*0.24);
double _n_veil_22452=(0.85+(0.3*d::at(this->_n_haze_22349,((_n_r_22436*_n_W_22312)+_n_x_22437))));
(void)((_n_cr_22441=((((0.04+((0.1*_n_v_22449)*_n_v_22449))+(_n_glowH_22451*0.9))*_n_veil_22452)+(0.3*_n_halo_22450))));
(void)((_n_cg_22442=((((0.07+((0.13*_n_v_22449)*_n_v_22449))+_n_glowH_22451)*_n_veil_22452)+(0.35*_n_halo_22450))));
(void)((_n_cbl_22443=((((0.17+((0.2*_n_v_22449)*_n_v_22449))+(_n_glowH_22451*1.1))*_n_veil_22452)+(0.42*_n_halo_22450))));
(void)((_n_floor_22444=0.15));
double _n_sx_22453=(_n_x_22437+_n_drift_22435);
double _n_ix_22454=std::floor(_n_sx_22453);
double _n_fx_22455=(_n_sx_22453-_n_ix_22454);
double _n_i0_22456=((_n_r_22436*this->_n_CW_22350)+d::mod(_n_ix_22454,this->_n_CW_22350));
double _n_i1_22457=((_n_r_22436*this->_n_CW_22350)+d::mod((_n_ix_22454+1.0),this->_n_CW_22350));
double _n_c_22458=((d::at(this->_n_cover_22351,_n_i0_22456)+((d::at(this->_n_cover_22351,_n_i1_22457)-d::at(this->_n_cover_22351,_n_i0_22456))*_n_fx_22455))*(0.15+(0.85*_n_smooth_22334(7.0,24.0,_n_dm_22448))));
double _n_l_22459=(d::at(this->_n_lit_22352,_n_i0_22456)+((d::at(this->_n_lit_22352,_n_i1_22457)-d::at(this->_n_lit_22352,_n_i0_22456))*_n_fx_22455));
if(d::truth((_n_dm_22448<6.0))){d::check_cancel();double _n_face_22460=(0.86+(0.14*_n_fbm_22332((_n_x_22437*0.5),(_n_y_22439*0.5),2.0,0.0)));
double _n_a_22461=((1.0-(_n_c_22458*0.8))*_n_smooth_22334(6.0,5.0,_n_dm_22448));
(void)((_n_cr_22441=_n_mix_22335(_n_cr_22441,(0.96*_n_face_22460),_n_a_22461)));
(void)((_n_cg_22442=_n_mix_22335(_n_cg_22442,(0.97*_n_face_22460),_n_a_22461)));
(void)((_n_cbl_22443=_n_mix_22335(_n_cbl_22443,(1.0*_n_face_22460),_n_a_22461)));
}else {d::check_cancel();if((d::truth((_n_c_22458<0.05))&&d::truth((_n_hash_22330(_n_x_22437,((_n_r_22436*3.0)+11.0))>0.982)))){d::check_cancel();double _n_tw_22462=(0.6+(0.4*std::sin(([&](){auto _n_left_22589=(_n_t_22428*(1.5+(_n_hash_22330(_n_x_22437,_n_r_22436)*3.0)));auto _n_right_22590=(_n_hash_22330(_n_r_22436,_n_x_22437)*6.28);return (_n_left_22589+_n_right_22590);})())));
double _n_s_22463=(((0.5+(0.5*_n_tw_22462))*(1.0-_n_halo_22450))*_n_smooth_22334(_n_HORIZON_22314,20.0,_n_y_22439));
(void)((((_n_cr_22441=d::maximum({_n_cr_22441,(_n_s_22463*0.92)})),(_n_cg_22442=d::maximum({_n_cg_22442,(_n_s_22463*0.94)}))),(_n_cbl_22443=d::maximum({_n_cbl_22443,_n_s_22463}))));
}
}
if(d::truth((_n_c_22458>0.01))){d::check_cancel();double _n_near_22464=std::exp(((-d::number(_n_dm_22448))/30.0));
double _n_b_22465=_n_clamp_22333(((_n_l_22459*(0.5+(0.6*_n_near_22464)))+(0.25*_n_smooth_22334(30.0,_n_HORIZON_22314,_n_y_22439))));
double _n_kr_22466=(d::truth((_n_b_22465<0.5))?_n_mix_22335(0.1,0.36,(_n_b_22465*2.0)):_n_mix_22335(0.36,0.95,((_n_b_22465-0.5)*2.0)));
double _n_kg_22467=(d::truth((_n_b_22465<0.5))?_n_mix_22335(0.13,0.42,(_n_b_22465*2.0)):_n_mix_22335(0.42,0.96,((_n_b_22465-0.5)*2.0)));
double _n_kb_22468=(d::truth((_n_b_22465<0.5))?_n_mix_22335(0.25,0.58,(_n_b_22465*2.0)):_n_mix_22335(0.58,1.0,((_n_b_22465-0.5)*2.0)));
double _n_a_22469=d::minimum({1.0,(_n_c_22458*1.1)});
(void)((_n_cr_22441=_n_mix_22335(_n_cr_22441,_n_kr_22466,_n_a_22469)));
(void)((_n_cg_22442=_n_mix_22335(_n_cg_22442,_n_kg_22467,_n_a_22469)));
(void)((_n_cbl_22443=_n_mix_22335(_n_cbl_22443,_n_kb_22468,_n_a_22469)));
}
}else {d::check_cancel();if(((d::truth((_n_y_22439>=_n_HORIZON_22314))&&d::truth(([&]()->bool{auto _n_logical_22591=(_n_m_22440==_n_AIR_22320);return d::truth(_n_logical_22591)?_n_logical_22591:(_n_m_22440==_n_LAND_22321);})()))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_22592=(_n_m_22440==_n_LAND_22321);return d::truth(_n_logical_22592)?(_n_y_22439<(_n_HORIZON_22314+4.0)):_n_logical_22592;})()))))){d::check_cancel();double _n_v_22470=((_n_y_22439-_n_HORIZON_22314)/(_n_H_22313-_n_HORIZON_22314));
double _n_w_22471=([&](){auto _n_left_22593=(0.6*_n_noise_22331(((_n_x_22437*0.07)+(_n_t_22428*0.12)),((_n_y_22439*0.45)-(_n_t_22428*0.6)),0.0));auto _n_right_22594=(0.4*_n_noise_22331(((_n_x_22437*0.2)-(_n_t_22428*0.25)),((_n_y_22439*0.9)-(_n_t_22428*1.1)),0.0));return (_n_left_22593+_n_right_22594);})();
double _n_swell_22472=(0.45+(0.95*_n_w_22471));
(void)((_n_cr_22441=((0.08-(0.04*_n_v_22470))*_n_swell_22472)));
(void)((_n_cg_22442=((0.13-(0.06*_n_v_22470))*_n_swell_22472)));
(void)((_n_cbl_22443=((0.28-(0.12*_n_v_22470))*_n_swell_22472)));
double _n_roadW_22473=(3.0+((_n_y_22439-_n_HORIZON_22314)*0.55));
double _n_road_22474=std::exp((-d::number(std::pow((((_n_x_22437+0.5)-d::at(_n_MOON_22315,0.0))/_n_roadW_22473),2.0))));
double _n_glint_22475=(_n_smooth_22334(0.5,0.8,_n_w_22471)*_n_road_22474);
(void)((_n_cr_22441=(_n_cr_22441+((0.95*_n_glint_22475)+(0.07*_n_road_22474)))));
(void)((_n_cg_22442=(_n_cg_22442+((0.95*_n_glint_22475)+(0.09*_n_road_22474)))));
(void)((_n_cbl_22443=(_n_cbl_22443+((0.95*_n_glint_22475)+(0.15*_n_road_22474)))));
double _n_lw_22476=(1.3+((_n_y_22439-_n_HORIZON_22314)*0.22));
double _n_refl_22477=(([&](){auto _n_left_22595=std::exp((-d::number(std::pow((((_n_x_22437+0.5)-_n_LAMP_X_22316)/_n_lw_22476),2.0))));auto _n_right_22596=_n_smooth_22334(0.45,0.8,_n_w_22471);return (_n_left_22595*_n_right_22596);})()*(0.75+(0.6*_n_flash_22433)));
(void)((_n_cr_22441=(_n_cr_22441+_n_refl_22477)));
(void)((_n_cg_22442=(_n_cg_22442+(0.72*_n_refl_22477))));
(void)((_n_cbl_22443=(_n_cbl_22443+(0.32*_n_refl_22477))));
if((d::truth((_n_y_22439<(_n_HORIZON_22314+8.0)))&&d::truth((_n_x_22437<90.0)))){d::check_cancel();double _n_edge_22478=([&](){auto _n_left_22597=_n_smooth_22334(90.0,74.0,_n_x_22437);auto _n_right_22598=_n_smooth_22334((_n_HORIZON_22314+8.0),(_n_HORIZON_22314+3.0),_n_y_22439);return (_n_left_22597*_n_right_22598);})();
double _n_foam_22479=(([&](){auto _n_argument_22599=0.5;auto _n_argument_22600=0.85;auto _n_argument_22601=_n_noise_22331(((_n_x_22437*0.45)-(_n_t_22428*0.6)),((_n_y_22439*0.8)+(_n_t_22428*0.4)),0.0);return _n_smooth_22334(_n_argument_22599,_n_argument_22600,_n_argument_22601);})()*_n_edge_22478);
(void)((((_n_cr_22441=(_n_cr_22441+(0.65*_n_foam_22479))),(_n_cg_22442=(_n_cg_22442+(0.7*_n_foam_22479)))),(_n_cbl_22443=(_n_cbl_22443+(0.75*_n_foam_22479)))));
}
double _n_haze_22480=(std::exp(((-d::number((_n_y_22439-_n_HORIZON_22314)))/2.5))*0.16);
(void)((((_n_cr_22441=(_n_cr_22441+(_n_haze_22480*0.8))),(_n_cg_22442=(_n_cg_22442+(_n_haze_22480*0.9)))),(_n_cbl_22443=(_n_cbl_22443+_n_haze_22480))));
(void)((_n_floor_22444=0.18));
(void)((_n_fade_22445=_n_smooth_22334(_n_H_22313,(_n_H_22313-26.0),_n_y_22439)));
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_LAND_22321))){d::check_cancel();double _n_s_22481=d::at(this->_n_shade_22344,_n_k_22438);
(void)((((_n_cr_22441=(0.05+(0.14*_n_s_22481))),(_n_cg_22442=(0.09+(0.2*_n_s_22481)))),(_n_cbl_22443=(0.1+(0.18*_n_s_22481)))));
(void)((_n_floor_22444=0.1));
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_TREE_22322))){d::check_cancel();double _n_s_22482=d::at(this->_n_shade_22344,_n_k_22438);
(void)((((_n_cr_22441=(0.03+(0.07*_n_s_22482))),(_n_cg_22442=(0.07+(0.14*_n_s_22482)))),(_n_cbl_22443=(0.07+(0.1*_n_s_22482)))));
(void)((_n_floor_22444=0.06));
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_ISLE_22329))){d::check_cancel();(void)((((_n_cr_22441=0.06),(_n_cg_22442=0.08)),(_n_cbl_22443=0.15)));
(void)((_n_floor_22444=0.1));
if((d::truth((_n_x_22437==184.0))&&d::truth((_n_r_22436==55.0)))){d::check_cancel();bool _n_on_22483=(std::sin((_n_t_22428*2.2))>0.55);
(void)((((_n_cr_22441=(d::truth(_n_on_22483)?1.0:0.35)),(_n_cg_22442=(d::truth(_n_on_22483)?0.36:0.12))),(_n_cbl_22443=(d::truth(_n_on_22483)?0.3:0.1))));
}
}else {d::check_cancel();if((d::truth((_n_m_22440==_n_TOWER_22323))||d::truth((_n_m_22440==_n_CAP_22325)))){d::check_cancel();double _n_s_22484=d::at(this->_n_shade_22344,_n_k_22438);
(void)((((_n_cr_22441=(0.4+(0.58*_n_s_22484))),(_n_cg_22442=(0.42+(0.56*_n_s_22484)))),(_n_cbl_22443=(0.48+(0.52*_n_s_22484)))));
if(d::truth((_n_m_22440==_n_CAP_22325))){d::check_cancel();(void)((((_n_cr_22441=(_n_cr_22441*0.7)),(_n_cg_22442=(_n_cg_22442*0.66))),(_n_cbl_22443=(_n_cbl_22443*0.68))));
}
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_LANTERN_22324))){d::check_cancel();double _n_g_22485=(0.85+(0.15*d::minimum({1.0,_n_flash_22433})));
(void)((((_n_cr_22441=_n_g_22485),(_n_cg_22442=(0.84*_n_g_22485))),(_n_cbl_22443=(0.5*_n_g_22485))));
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_WALL_22326))){d::check_cancel();double _n_s_22486=d::at(this->_n_shade_22344,_n_k_22438);
(void)((((_n_cr_22441=(0.3+(0.4*_n_s_22486))),(_n_cg_22442=(0.32+(0.4*_n_s_22486)))),(_n_cbl_22443=(0.38+(0.4*_n_s_22486)))));
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_PANE_22327))){d::check_cancel();double _n_g_22487=(0.85+(0.15*std::sin(((_n_t_22428*3.0)+_n_x_22437))));
(void)((((_n_cr_22441=_n_g_22487),(_n_cg_22442=(0.72*_n_g_22487))),(_n_cbl_22443=(0.32*_n_g_22487))));
}else {d::check_cancel();if(d::truth((_n_m_22440==_n_ROOF_22328))){d::check_cancel();(void)((((_n_cr_22441=0.4),(_n_cg_22442=0.17)),(_n_cbl_22443=0.14)));
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
double _n_bx_22488=((_n_x_22437+0.5)-_n_LAMP_X_22316);
double _n_by_22489=(_n_y_22439-_n_lampY_22434);
if(((d::truth((_n_m_22440!=_n_TOWER_22323))&&d::truth((_n_m_22440!=_n_CAP_22325)))&&d::truth((_n_m_22440!=_n_LANTERN_22324)))){d::check_cancel();if(d::truth(((_n_bx_22488*_n_cb_22431)>0.0))){d::check_cancel();double _n_along_22490=([&](){auto _n_left_22602=std::fabs(_n_bx_22488);auto _n_right_22603=((std::fabs(_n_cb_22431)*115.0)+1.0);return (_n_left_22602/_n_right_22603);})();
if(d::truth((_n_along_22490<1.0))){d::check_cancel();double _n_spread_22491=(1.4+(std::fabs(_n_bx_22488)*0.11));
double _n_b_22492=(([&](){auto _n_left_22604=std::pow((1.0-_n_along_22490),1.8);auto _n_right_22605=std::exp((-d::number(std::pow((_n_by_22489/_n_spread_22491),2.0))));return (_n_left_22604*_n_right_22605);})()*0.85);
(void)((((_n_cr_22441=(_n_cr_22441+_n_b_22492)),(_n_cg_22442=(_n_cg_22442+(_n_b_22492*0.84)))),(_n_cbl_22443=(_n_cbl_22443+(_n_b_22492*0.5)))));
}
}
double _n_dl_22493=std::sqrt(((_n_bx_22488*_n_bx_22488)+(_n_by_22489*_n_by_22489)));
double _n_glow_22494=([&](){auto _n_left_22606=(std::exp(((-d::number(_n_dl_22493))/(3.5+(3.0*_n_flash_22433))))*(0.5+(0.6*_n_flash_22433)));auto _n_right_22607=(std::exp(((-d::number(_n_dl_22493))/14.0))*0.12);return (_n_left_22606+_n_right_22607);})();
(void)((((_n_cr_22441=(_n_cr_22441+_n_glow_22494)),(_n_cg_22442=(_n_cg_22442+(_n_glow_22494*0.82)))),(_n_cbl_22443=(_n_cbl_22443+(_n_glow_22494*0.5)))));
}
double _n_peak_22495=d::maximum({_n_cr_22441,_n_cg_22442,_n_cbl_22443,0.0001});
double _n_level_22496=(_n_clamp_22333((_n_floor_22444+(((1.0-_n_floor_22444)*std::pow(_n_peak_22495,0.85))*0.95)))*_n_fade_22445);
double _n_step_22497=([&](){auto _n_argument_22608=0.0;auto _n_argument_22609=([&](){auto _n_argument_22610=3.0;auto _n_argument_22611=d::round(((_n_level_22496*3.0)+d::at(_n_BAYER_22319,((double(d::i32(_n_r_22436)&d::i32(3.0))*4.0)+double(d::i32(_n_x_22437)&d::i32(3.0))))));return d::minimum({_n_argument_22610,_n_argument_22611});})();return d::maximum({_n_argument_22608,_n_argument_22609});})();
(void)(([&](){auto&& _n_array_22612=this->_n_out_22339;auto _n_index_22613=_n_k_22438;auto _n_value_22614=d::at(_n_DOTS_22317,_n_step_22497);d::put(_n_array_22612,_n_index_22613,_n_value_22614);return _n_value_22614;})());
if(d::truth(_n_color_22429)){d::check_cancel();double _n_want_22498=(d::truth(_n_step_22497)?d::minimum({1.0,((_n_level_22496+0.06)/d::at(_n_COVER_22318,_n_step_22497))}):0.0);
double _n_s_22499=((0.3+(0.7*_n_want_22498))/_n_peak_22495);
(void)(([&](){auto&& _n_array_22615=d::read(_n_color_22429);auto _n_index_22616=_n_k_22438;auto _n_value_22617=([&](){auto _n_argument_22618=_n_clamp_22333((_n_cr_22441*_n_s_22499));auto _n_argument_22619=_n_clamp_22333((_n_cg_22442*_n_s_22499));auto _n_argument_22620=_n_clamp_22333((_n_cbl_22443*_n_s_22499));return this->_n_nearest_22341(_n_argument_22618,_n_argument_22619,_n_argument_22620);})();d::put(_n_array_22615,_n_index_22616,_n_value_22617);return _n_value_22617;})());
}
}}
}}
d::Array<d::String,false> _n_lines_22500=d::Array<d::String,false>{};
{double _n_r_22501=0.0;
for(;d::truth((_n_r_22501<_n_H_22313));(void)((_n_r_22501++))){d::check_cancel();(void)(_n_lines_22500.push(d::join(this->_n_out_22339.slice((_n_r_22501*_n_W_22312),((_n_r_22501+1.0)*_n_W_22312)),d::String(u""))));
}}
return d::join(_n_lines_22500,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("night-coast").cols)*ascii::catalog_meta("night-coast").rows);auto _env=std::make_shared<_n_Record_22502>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &night_coast_meta(){return catalog_meta("night-coast");}
std::unique_ptr<Piece> make_night_coast(const AsciiPieceOptions &o){return std::make_unique<Native_night_coast>(o);}
}
