// Direct, statically typed C++ from src/pieces/planet-scale.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24284;
struct _n_Record_24506;
struct _n_Record_24284{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_24284> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24284>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_24506{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24506> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24506>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_24297(double _a0,double _a1);
double _n_noise_24298(double _a0,double _a1,double _a2);
double _n_fbm_24299(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_24300(double _a0);
double _n_smooth_24301(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_24302(d::String _a0);
void _n_blur_24303(d::Array<float,true> _a0,double _a1);
std::shared_ptr<_n_Record_24284> _n_meta_24283=[](){return ([&](){auto _n_object_24509=std::make_shared<_n_Record_24284>();_n_object_24509->_p_name=d::String(u"planet scale");_n_object_24509->_p_category=d::String(u"scenes");_n_object_24509->_p_note=d::String(u"a dark planet cut into the planetscale mark, backlit, a moon circling");_n_object_24509->_p_cols=200.0;_n_object_24509->_p_rows=100.0;_n_object_24509->_p_cell=1.0;_n_object_24509->_p_fps=15.0;_n_object_24509->_p_ground=d::String(u"#050505");_n_object_24509->_p_palette=d::Array<d::String,false>{d::String(u"#101010"),d::String(u"#181818"),d::String(u"#202020"),d::String(u"#282828"),d::String(u"#303030"),d::String(u"#3a3a3a"),d::String(u"#444444"),d::String(u"#4e4e4e"),d::String(u"#585858"),d::String(u"#636363"),d::String(u"#6e6e6e"),d::String(u"#797979"),d::String(u"#858585"),d::String(u"#919191"),d::String(u"#9d9d9d"),d::String(u"#a9a9a9"),d::String(u"#b5b5b5"),d::String(u"#c1c1c1"),d::String(u"#cccccc"),d::String(u"#d7d7d7"),d::String(u"#e1e1e1"),d::String(u"#eaeaea"),d::String(u"#f3f3f3"),d::String(u"#ffffff")};return _n_object_24509;})();}();
const d::String _n_INK_24285=[](){return d::String(u"\n\n                  00000000000000000000\n              0000000000000000000000000000\n           0000000000000000000000000000000000\n         00000000000000000000000000000000000000\n       000000000000000000000000000000000000000000\n      00000000000000000000000000000000000000000000\n     0000000000000000000000000000000000000000000000\n    000000000000000000000000000000000000000000000000\n   000000000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000000000\n  000000000000000000000000000000000000000000000\n  0000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000\n  00000000000000000000000000    000000000           00\n  000000000000000000000000    000000000           0000\n  0000000000000000000000    000000000           000000\n  00000000000000000000    000000000           00000000\n   00000000000000000    000000000           000000000\n    00000000000000    000000000           0000000000\n     00000000000    000000000           00000000000\n      00000000    000000000           000000000000\n       00000    000000000           0000000000000\n         0    000000000           0000000000000\n             00000000           0000000000000\n              00000           000000000000\n                            0000000000\n\n");}();
const double _n_W_24286=[](){return 200.0;}();
const double _n_H_24287=[](){return 100.0;}();
const double _n_CX_24288=[](){return 100.0;}();
const double _n_CY_24289=[](){return 50.0;}();
const double _n_R_24290=[](){return 41.0;}();
d::Array<double,false> _n_SUN_24291=[](){return d::Array<double,false>{(-d::number(0.68)),(-d::number(0.68)),0.2};}();
const double _n_MOON_R_24292=[](){return 7.0;}();
const double _n_ORBIT_24293=[](){return 16.0;}();
const d::String _n_DOTS_24294=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_24295=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_24296=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_24337=_a0;
return ((_n_v_24337/16.0)-0.47);});}();
double _n_hash_24297(double _a0,double _a1){double _n_x_24338=_a0;
double _n_y_24339=_a1;
{
double _n_h_24340=([&](){auto _n_left_24510=d::imul(double(d::i32(_n_x_24338)|d::i32(0.0)),374761393.0);auto _n_right_24511=d::imul(double(d::i32(_n_y_24339)|d::i32(0.0)),668265263.0);return (_n_left_24510+_n_right_24511);})();
(void)((_n_h_24340=d::imul(double(d::i32(_n_h_24340)^d::i32(double(d::u32(_n_h_24340)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_24340)^d::i32(double(d::u32(_n_h_24340)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_24298(double _a0,double _a1,double _a2){double _n_x_24341=_a0;
double _n_y_24342=_a1;
double _n_period_24343=_a2;
{
double _n_xi_24344=std::floor(_n_x_24341);
double _n_yi_24345=std::floor(_n_y_24342);
double _n_fx_24346=(_n_x_24341-_n_xi_24344);
double _n_fy_24347=(_n_y_24342-_n_yi_24345);
double _n_u_24348=((_n_fx_24346*_n_fx_24346)*(3.0-(2.0*_n_fx_24346)));
double _n_v_24349=((_n_fy_24347*_n_fy_24347)*(3.0-(2.0*_n_fy_24347)));
double _n_x0_24350=_n_xi_24344;
double _n_x1_24351=(_n_xi_24344+1.0);
if(d::truth(_n_period_24343)){d::check_cancel();(void)((_n_x0_24350=d::mod((d::mod(_n_xi_24344,_n_period_24343)+_n_period_24343),_n_period_24343)));
(void)((_n_x1_24351=d::mod((_n_x0_24350+1.0),_n_period_24343)));
}
double _n_a_24352=_n_hash_24297(_n_x0_24350,_n_yi_24345);
double _n_b_24353=_n_hash_24297(_n_x1_24351,_n_yi_24345);
double _n_c_24354=_n_hash_24297(_n_x0_24350,(_n_yi_24345+1.0));
double _n_d_24355=_n_hash_24297(_n_x1_24351,(_n_yi_24345+1.0));
return (((_n_a_24352+((_n_b_24353-_n_a_24352)*_n_u_24348))+((_n_c_24354-_n_a_24352)*_n_v_24349))+(((((_n_a_24352-_n_b_24353)-_n_c_24354)+_n_d_24355)*_n_u_24348)*_n_v_24349));

}
}

double _n_fbm_24299(double _a0,double _a1,double _a2,double _a3){double _n_x_24356=_a0;
double _n_y_24357=_a1;
double _n_octaves_24358=_a2;
double _n_period_24359=_a3;
{
double _n_s_24360=0.0;
double _n_n_24361=0.0;
double _n_amp_24362=0.5;
double _n_f_24363=1.0;
{double _n_i_24364=0.0;
for(;d::truth((_n_i_24364<_n_octaves_24358));(void)((_n_i_24364++))){d::check_cancel();(void)((_n_s_24360=(_n_s_24360+(_n_amp_24362*_n_noise_24298((_n_x_24356*_n_f_24363),(_n_y_24357*_n_f_24363),(_n_period_24359*_n_f_24363))))));
(void)((_n_n_24361=(_n_n_24361+_n_amp_24362)));
(void)((_n_amp_24362=(_n_amp_24362*0.5)));
(void)((_n_f_24363=(_n_f_24363*2.0)));
}}
return (_n_s_24360/_n_n_24361);

}
}

double _n_clamp_24300(double _a0){double _n_v_24365=_a0;
return (d::truth((_n_v_24365<0.0))?0.0:(d::truth((_n_v_24365>1.0))?1.0:_n_v_24365));}

double _n_smooth_24301(double _a0,double _a1,double _a2){double _n_a_24366=_a0;
double _n_b_24367=_a1;
double _n_v_24368=_a2;
{
double _n_k_24369=_n_clamp_24300(((_n_v_24368-_n_a_24366)/(_n_b_24367-_n_a_24366)));
return ((_n_k_24369*_n_k_24369)*(3.0-(2.0*_n_k_24369)));

}
}

d::Array<double,false> _n_hex_24302(d::String _a0){d::String _n_s_24370=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_24371=_a0;
return (([&](){auto _n_argument_24512=d::slice(_n_s_24370,_n_i_24371,(_n_i_24371+2.0));auto _n_argument_24513=16.0;return d::parseInt(_n_argument_24512,_n_argument_24513);})()/255.0);});}

void _n_blur_24303(d::Array<float,true> _a0,double _a1){d::Array<float,true> _n_a_24372=_a0;
double _n_passes_24373=_a1;
{
d::Array<float,true> _n_b_24374=d::Array<float,true>(size_t(double(_n_a_24372.size())));
{double _n_p_24375=0.0;
for(;d::truth((_n_p_24375<_n_passes_24373));(void)((_n_p_24375++))){d::check_cancel();{double _n_r_24376=0.0;
for(;d::truth((_n_r_24376<_n_H_24287));(void)((_n_r_24376++))){d::check_cancel();{double _n_x_24377=0.0;
for(;d::truth((_n_x_24377<_n_W_24286));(void)((_n_x_24377++))){d::check_cancel();double _n_s_24378=0.0;
{double _n_i_24379=(-d::number(1.0));
for(;d::truth((_n_i_24379<=1.0));(void)((_n_i_24379++))){d::check_cancel();(void)((_n_s_24378=(_n_s_24378+d::at(_n_a_24372,((_n_r_24376*_n_W_24286)+([&](){auto _n_argument_24514=(_n_W_24286-1.0);auto _n_argument_24515=d::maximum({0.0,(_n_x_24377+_n_i_24379)});return d::minimum({_n_argument_24514,_n_argument_24515});})())))));
}}
(void)(([&](){auto&& _n_array_24516=_n_b_24374;auto _n_index_24517=((_n_r_24376*_n_W_24286)+_n_x_24377);auto _n_value_24518=(_n_s_24378/3.0);d::put(_n_array_24516,_n_index_24517,_n_value_24518);return _n_value_24518;})());
}}
}}
{double _n_r_24380=0.0;
for(;d::truth((_n_r_24380<_n_H_24287));(void)((_n_r_24380++))){d::check_cancel();{double _n_x_24381=0.0;
for(;d::truth((_n_x_24381<_n_W_24286));(void)((_n_x_24381++))){d::check_cancel();double _n_s_24382=0.0;
{double _n_i_24383=(-d::number(1.0));
for(;d::truth((_n_i_24383<=1.0));(void)((_n_i_24383++))){d::check_cancel();(void)((_n_s_24382=(_n_s_24382+d::at(_n_b_24374,((([&](){auto _n_argument_24519=(_n_H_24287-1.0);auto _n_argument_24520=d::maximum({0.0,(_n_r_24380+_n_i_24383)});return d::minimum({_n_argument_24519,_n_argument_24520});})()*_n_W_24286)+_n_x_24381)))));
}}
(void)(([&](){auto&& _n_array_24521=_n_a_24372;auto _n_index_24522=((_n_r_24380*_n_W_24286)+_n_x_24381);auto _n_value_24523=(_n_s_24382/3.0);d::put(_n_array_24521,_n_index_24522,_n_value_24523);return _n_value_24523;})());
}}
}}
}}

}
}

struct Native_planet_scale final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_24304{};
double _n_N_24305{};
d::Array<d::String,false> _n_out_24306{};
d::Array<uint8_t,true> _n_lut_24307{};
d::Array<d::String,false> _n_ink_24309{};
double _n_GW_24310{};
double _n_GH_24311{};
double _n_c0_24313{};
double _n_c1_24314{};
double _n_r0_24315{};
double _n_r1_24316{};
d::Array<float,true> _n_body_24318{};
d::Array<float,true> _n_solid_24319{};
d::Array<float,true> _n_cut_24320{};
d::Array<float,true> _n_glow_24321{};
double _n_s2_24322{};
d::Array<float,true> _n_nx_24323{};
d::Array<float,true> _n_ny_24324{};
d::Array<float,true> _n_nz_24325{};
d::Array<float,true> _n_lat_24326{};
d::Array<float,true> _n_lon_24327{};
double _n_LA_24328{};
double _n_LO_24329{};
d::Array<float,true> _n_bands_24330{};
d::Array<float,true> _n_star_24331{};
d::Array<double,false> _n_L_24332{};
double _n_LH_24333{};
d::Array<double,false> _n_BACK_24334{};
d::Array<float,true> _n_back_24335{};
d::Array<float,true> _n_facing_24336{};
std::function<d::String(double,std::shared_ptr<_n_Record_24506>)> _render;
double _n_nearest_24308(double _a0,double _a1,double _a2){double _n_r_24384=_a0;
double _n_g_24385=_a1;
double _n_b_24386=_a2;
{
double _n_k_24387=([&](){auto _n_left_24609=([&](){auto _n_left_24611=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_24384*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_24612=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_24385*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_24611)|d::i32(_n_right_24612));})();auto _n_right_24610=d::minimum({31.0,double(d::i32((_n_b_24386*31.99))|d::i32(0.0))});return double(d::i32(_n_left_24609)|d::i32(_n_right_24610));})();
if(d::truth((d::at(this->_n_lut_24307,_n_k_24387)!=255.0))){d::check_cancel();return d::at(this->_n_lut_24307,_n_k_24387);
}
double _n_best_24388=0.0;
double _n_bd_24389=1000000000.0;
{double _n_i_24390=0.0;
for(;d::truth((_n_i_24390<double(this->_n_P_24304.size())));(void)((_n_i_24390++))){d::check_cancel();double _n_dr_24391=(d::at(d::at(this->_n_P_24304,_n_i_24390),0.0)-_n_r_24384);
double _n_dg_24392=(d::at(d::at(this->_n_P_24304,_n_i_24390),1.0)-_n_g_24385);
double _n_db_24393=(d::at(d::at(this->_n_P_24304,_n_i_24390),2.0)-_n_b_24386);
double _n_d_24394=((((0.3*_n_dr_24391)*_n_dr_24391)+((0.5*_n_dg_24392)*_n_dg_24392))+((0.2*_n_db_24393)*_n_db_24393));
if(d::truth((_n_d_24394<_n_bd_24389))){d::check_cancel();(void)(((_n_bd_24389=_n_d_24394),(_n_best_24388=_n_i_24390)));
}
}}
return ([&](){auto&& _n_array_24613=this->_n_lut_24307;auto _n_index_24614=_n_k_24387;auto _n_value_24615=_n_best_24388;d::put(_n_array_24613,_n_index_24614,_n_value_24615);return _n_value_24615;})();

}
}

double _n_at_24312(double _a0,double _a1){double _n_c_24396=_a0;
double _n_r_24397=_a1;
return ((((((d::truth((_n_r_24397>=0.0))&&d::truth((_n_r_24397<this->_n_GH_24311)))&&d::truth((_n_c_24396>=0.0)))&&d::truth((_n_c_24396<this->_n_GW_24310)))&&d::truth(d::at(d::at(this->_n_ink_24309,_n_r_24397),_n_c_24396)))&&d::truth((d::at(d::at(this->_n_ink_24309,_n_r_24397),_n_c_24396)!=d::String(u" "))))?1.0:0.0);}

double _n_cov_24317(double _a0,double _a1){double _n_u_24400=_a0;
double _n_v_24401=_a1;
{
double _n_x_24402=(_n_u_24400-0.5);
double _n_y_24403=(_n_v_24401-0.5);
double _n_xi_24404=std::floor(_n_x_24402);
double _n_yi_24405=std::floor(_n_y_24403);
double _n_fx_24406=(_n_x_24402-_n_xi_24404);
double _n_fy_24407=(_n_y_24403-_n_yi_24405);
double _n_a_24408=this->_n_at_24312(_n_xi_24404,_n_yi_24405);
double _n_b_24409=this->_n_at_24312((_n_xi_24404+1.0),_n_yi_24405);
double _n_c_24410=this->_n_at_24312(_n_xi_24404,(_n_yi_24405+1.0));
double _n_d_24411=this->_n_at_24312((_n_xi_24404+1.0),(_n_yi_24405+1.0));
return (((_n_a_24408+((_n_b_24409-_n_a_24408)*_n_fx_24406))+((_n_c_24410-_n_a_24408)*_n_fy_24407))+(((((_n_a_24408-_n_b_24409)-_n_c_24410)+_n_d_24411)*_n_fx_24406)*_n_fy_24407));

}
}

explicit Native_planet_scale(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_24304=d::map(_n_meta_24283->_p_palette,_n_hex_24302);
this->_n_N_24305=(_n_W_24286*_n_H_24287);
this->_n_out_24306=d::Array<d::String,false>(size_t(this->_n_N_24305));
this->_n_lut_24307=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_ink_24309=d::split(d::slice(_n_INK_24285,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_GW_24310=([&](){d::Array<double> _n_numbers_24524;for(auto _x:d::map(this->_n_ink_24309,[&]( d::String _a0) mutable ->double{d::String _n_l_24395=_a0;
return double(_n_l_24395.size());}))_n_numbers_24524.push(_x);return d::maximum(_n_numbers_24524);})();
this->_n_GH_24311=double(this->_n_ink_24309.size());
this->_n_c0_24313=this->_n_GW_24310;
this->_n_c1_24314=0.0;
this->_n_r0_24315=this->_n_GH_24311;
this->_n_r1_24316=0.0;
{double _n_r_24398=0.0;
for(;d::truth((_n_r_24398<this->_n_GH_24311));(void)((_n_r_24398++))){d::check_cancel();{double _n_c_24399=0.0;
for(;d::truth((_n_c_24399<this->_n_GW_24310));(void)((_n_c_24399++))){d::check_cancel();if(d::truth(this->_n_at_24312(_n_c_24399,_n_r_24398))){d::check_cancel();(void)(((((this->_n_c0_24313=d::minimum({this->_n_c0_24313,_n_c_24399})),(this->_n_c1_24314=d::maximum({this->_n_c1_24314,(_n_c_24399+1.0)}))),(this->_n_r0_24315=d::minimum({this->_n_r0_24315,_n_r_24398}))),(this->_n_r1_24316=d::maximum({this->_n_r1_24316,(_n_r_24398+1.0)}))));
}
}}
}}
this->_n_body_24318=d::Array<float,true>(size_t(this->_n_N_24305));
{double _n_r_24412=0.0;
for(;d::truth((_n_r_24412<_n_H_24287));(void)((_n_r_24412++))){d::check_cancel();{double _n_x_24413=0.0;
for(;d::truth((_n_x_24413<_n_W_24286));(void)((_n_x_24413++))){d::check_cancel();double _n_dx_24414=(((_n_x_24413+0.5)-_n_CX_24288)/_n_R_24290);
double _n_dy_24415=(((_n_r_24412+0.5)-_n_CY_24289)/_n_R_24290);
double _n_u_24416=(this->_n_c0_24313+(((_n_dx_24414+1.0)/2.0)*(this->_n_c1_24314-this->_n_c0_24313)));
double _n_v_24417=(this->_n_r0_24315+(((_n_dy_24415+1.0)/2.0)*(this->_n_r1_24316-this->_n_r0_24315)));
(void)(([&](){auto&& _n_array_24525=this->_n_body_24318;auto _n_index_24526=((_n_r_24412*_n_W_24286)+_n_x_24413);auto _n_value_24527=this->_n_cov_24317(_n_u_24416,_n_v_24417);d::put(_n_array_24525,_n_index_24526,_n_value_24527);return _n_value_24527;})());
}}
}}
(void)(_n_blur_24303(this->_n_body_24318,2.0));
this->_n_solid_24319=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_cut_24320=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_glow_24321=d::Array<float,true>(size_t(this->_n_N_24305));
{double _n_k_24418=0.0;
for(;d::truth((_n_k_24418<this->_n_N_24305));(void)((_n_k_24418++))){d::check_cancel();double _n_x_24419=d::mod(_n_k_24418,_n_W_24286);
double _n_r_24420=double(d::i32((_n_k_24418/_n_W_24286))|d::i32(0.0));
double _n_d_24421=d::hypot(std::initializer_list<double>{((_n_x_24419+0.5)-_n_CX_24288),((_n_r_24420+0.5)-_n_CY_24289)});
double _n_disc_24422=_n_smooth_24301((_n_R_24290+0.6),(_n_R_24290-0.6),_n_d_24421);
double _n_m_24423=_n_smooth_24301(0.38,0.62,d::at(this->_n_body_24318,_n_k_24418));
(void)(([&](){auto&& _n_array_24528=this->_n_solid_24319;auto _n_index_24529=_n_k_24418;auto _n_value_24530=(_n_disc_24422*_n_m_24423);d::put(_n_array_24528,_n_index_24529,_n_value_24530);return _n_value_24530;})());
(void)(([&](){auto&& _n_array_24531=this->_n_cut_24320;auto _n_index_24532=_n_k_24418;auto _n_value_24533=(_n_disc_24422*(1.0-_n_m_24423));d::put(_n_array_24531,_n_index_24532,_n_value_24533);return _n_value_24533;})());
(void)(([&](){auto&& _n_array_24534=this->_n_glow_24321;auto _n_index_24535=_n_k_24418;auto _n_value_24536=d::at(this->_n_cut_24320,_n_k_24418);d::put(_n_array_24534,_n_index_24535,_n_value_24536);return _n_value_24536;})());
}}
(void)(_n_blur_24303(this->_n_glow_24321,1.0));
this->_n_s2_24322=std::sqrt(.5);
this->_n_nx_24323=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_ny_24324=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_nz_24325=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_lat_24326=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_lon_24327=d::Array<float,true>(size_t(this->_n_N_24305));
{double _n_k_24424=0.0;
for(;d::truth((_n_k_24424<this->_n_N_24305));(void)((_n_k_24424++))){d::check_cancel();double _n_x_24425=d::mod(_n_k_24424,_n_W_24286);
double _n_r_24426=double(d::i32((_n_k_24424/_n_W_24286))|d::i32(0.0));
double _n_a_24427=(((_n_x_24425+0.5)-_n_CX_24288)/_n_R_24290);
double _n_b_24428=(((_n_r_24426+0.5)-_n_CY_24289)/_n_R_24290);
double _n_q_24429=((_n_a_24427*_n_a_24427)+(_n_b_24428*_n_b_24428));
if(d::truth((_n_q_24429>=1.02))){d::check_cancel();continue;
}
double _n_z_24430=std::sqrt(d::maximum({0.0,(1.0-_n_q_24429)}));
(void)(((([&](){auto&& _n_array_24537=this->_n_nx_24323;auto _n_index_24538=_n_k_24424;auto _n_value_24539=_n_a_24427;d::put(_n_array_24537,_n_index_24538,_n_value_24539);return _n_value_24539;})(),([&](){auto&& _n_array_24540=this->_n_ny_24324;auto _n_index_24541=_n_k_24424;auto _n_value_24542=_n_b_24428;d::put(_n_array_24540,_n_index_24541,_n_value_24542);return _n_value_24542;})()),([&](){auto&& _n_array_24543=this->_n_nz_24325;auto _n_index_24544=_n_k_24424;auto _n_value_24545=_n_z_24430;d::put(_n_array_24543,_n_index_24544,_n_value_24545);return _n_value_24545;})()));
(void)(([&](){auto&& _n_array_24546=this->_n_lat_24326;auto _n_index_24547=_n_k_24424;auto _n_value_24548=std::asin(([&](){auto _n_argument_24549=(-d::number(1.0));auto _n_argument_24550=d::minimum({1.0,((_n_a_24427+_n_b_24428)*this->_n_s2_24322)});return d::maximum({_n_argument_24549,_n_argument_24550});})());d::put(_n_array_24546,_n_index_24547,_n_value_24548);return _n_value_24548;})());
(void)(([&](){auto&& _n_array_24551=this->_n_lon_24327;auto _n_index_24552=_n_k_24424;auto _n_value_24553=std::atan2(((_n_a_24427-_n_b_24428)*this->_n_s2_24322),_n_z_24430);d::put(_n_array_24551,_n_index_24552,_n_value_24553);return _n_value_24553;})());
}}
this->_n_LA_24328=96.0;
this->_n_LO_24329=256.0;
this->_n_bands_24330=d::Array<float,true>(size_t((this->_n_LA_24328*this->_n_LO_24329)));
{double _n_i_24431=0.0;
for(;d::truth((_n_i_24431<this->_n_LA_24328));(void)((_n_i_24431++))){d::check_cancel();{double _n_j_24432=0.0;
for(;d::truth((_n_j_24432<this->_n_LO_24329));(void)((_n_j_24432++))){d::check_cancel();double _n_la_24433=(_n_i_24431/this->_n_LA_24328);
double _n_lo_24434=(_n_j_24432/this->_n_LO_24329);
double _n_warp_24435=(_n_fbm_24299((_n_lo_24434*12.0),(_n_la_24433*6.0),3.0,12.0)*0.08);
double _n_stripe_24436=(0.5+(0.5*std::sin((((_n_la_24433+_n_warp_24435)*38.0)+(1.6*std::sin((_n_la_24433*17.0)))))));
(void)(([&](){auto&& _n_array_24554=this->_n_bands_24330;auto _n_index_24555=((_n_i_24431*this->_n_LO_24329)+_n_j_24432);auto _n_value_24556=((0.75*_n_stripe_24436)+(0.25*_n_fbm_24299((_n_lo_24434*16.0),(_n_la_24433*30.0),3.0,16.0)));d::put(_n_array_24554,_n_index_24555,_n_value_24556);return _n_value_24556;})());
}}
}}
this->_n_star_24331=d::Array<float,true>(size_t(this->_n_N_24305));
{double _n_k_24437=0.0;
for(;d::truth((_n_k_24437<this->_n_N_24305));(void)((_n_k_24437++))){d::check_cancel();double _n_x_24438=d::mod(_n_k_24437,_n_W_24286);
double _n_r_24439=double(d::i32((_n_k_24437/_n_W_24286))|d::i32(0.0));
double _n_h_24440=_n_hash_24297(((_n_x_24438*3.0)+7.0),((_n_r_24439*5.0)+1.0));
if(d::truth((_n_h_24440>0.986))){d::check_cancel();(void)(([&](){auto&& _n_array_24557=this->_n_star_24331;auto _n_index_24558=_n_k_24437;auto _n_value_24559=(0.35+(0.65*_n_hash_24297(_n_x_24438,(_n_r_24439+99.0))));d::put(_n_array_24557,_n_index_24558,_n_value_24559);return _n_value_24559;})());
}
}}
this->_n_L_24332=d::map(_n_SUN_24291,[&]( double _a0) mutable ->double{double _n_v_24441=_a0;
return (_n_v_24441/d::hypot(_n_SUN_24291));});
this->_n_LH_24333=d::hypot(std::initializer_list<double>{d::at(this->_n_L_24332,0.0),d::at(this->_n_L_24332,1.0)});
this->_n_BACK_24334=d::Array<double,false>{(_n_CX_24288+18.0),(_n_CY_24289+18.0)};
this->_n_back_24335=d::Array<float,true>(size_t(this->_n_N_24305));
this->_n_facing_24336=d::Array<float,true>(size_t(this->_n_N_24305));
{double _n_k_24442=0.0;
for(;d::truth((_n_k_24442<this->_n_N_24305));(void)((_n_k_24442++))){d::check_cancel();double _n_x_24443=d::mod(_n_k_24442,_n_W_24286);
double _n_r_24444=double(d::i32((_n_k_24442/_n_W_24286))|d::i32(0.0));
(void)(([&](){auto&& _n_array_24560=this->_n_back_24335;auto _n_index_24561=_n_k_24442;auto _n_value_24562=d::hypot(std::initializer_list<double>{((_n_x_24443+0.5)-d::at(this->_n_BACK_24334,0.0)),((_n_r_24444+0.5)-d::at(this->_n_BACK_24334,1.0))});d::put(_n_array_24560,_n_index_24561,_n_value_24562);return _n_value_24562;})());
(void)(([&](){auto&& _n_array_24563=this->_n_facing_24336;auto _n_index_24564=_n_k_24442;auto _n_value_24565=((((d::at(this->_n_nx_24323,_n_k_24442)*d::at(this->_n_L_24332,0.0))+(d::at(this->_n_ny_24324,_n_k_24442)*d::at(this->_n_L_24332,1.0)))/([&](){auto _n_argument_24566=0.001;auto _n_argument_24567=d::hypot(std::initializer_list<double>{d::at(this->_n_nx_24323,_n_k_24442),d::at(this->_n_ny_24324,_n_k_24442)});return d::maximum({_n_argument_24566,_n_argument_24567});})())/this->_n_LH_24333);d::put(_n_array_24563,_n_index_24564,_n_value_24565);return _n_value_24565;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_24506> _a1) mutable ->d::String{double _n_t_24445=_a0;
auto _n_binding_24570=(d::present(_a1)?_a1:([&](){auto _n_object_24569=std::make_shared<_n_Record_24506>();return _n_object_24569;})());
std::optional<d::Array<uint8_t,true>> _n_color_24446=_n_binding_24570->_p_color;
{
double _n_spin_24447=((_n_t_24445/120.0)*this->_n_LO_24329);
double _n_a_24448=((((_n_t_24445/_n_ORBIT_24293)*ascii::PI)*2.0)+2.2);
double _n_ex_24449=(std::cos(_n_a_24448)*66.0);
double _n_ey_24450=(std::sin(_n_a_24448)*11.0);
double _n_tilt_24451=(-d::number(0.32));
double _n_mx_24452=([&](){auto _n_left_24571=(_n_CX_24288+(_n_ex_24449*std::cos(_n_tilt_24451)));auto _n_right_24572=(_n_ey_24450*std::sin(_n_tilt_24451));return (_n_left_24571-_n_right_24572);})();
double _n_my_24453=([&](){auto _n_left_24573=(_n_CY_24289+(_n_ex_24449*std::sin(_n_tilt_24451)));auto _n_right_24574=(_n_ey_24450*std::cos(_n_tilt_24451));return (_n_left_24573+_n_right_24574);})();
bool _n_front_24454=(std::sin(_n_a_24448)>0.0);
double _n_mr_24455=(_n_MOON_R_24292*(1.0+(0.08*std::sin(_n_a_24448))));
{double _n_r_24456=0.0;
for(;d::truth((_n_r_24456<_n_H_24287));(void)((_n_r_24456++))){d::check_cancel();{double _n_x_24457=0.0;
for(;d::truth((_n_x_24457<_n_W_24286));(void)((_n_x_24457++))){d::check_cancel();double _n_k_24458=((_n_r_24456*_n_W_24286)+_n_x_24457);
double _n_y_24459=(_n_r_24456+0.5);
double _n_v_24460=0.0;
double _n_floor_24461=0.0;
double _n_fade_24462=1.0;
double _n_px_24463=((_n_x_24457+0.5)-_n_CX_24288);
double _n_py_24464=(_n_y_24459-_n_CY_24289);
double _n_d_24465=std::sqrt(((_n_px_24463*_n_px_24463)+(_n_py_24464*_n_py_24464)));
double _n_sp_24466=d::at(this->_n_solid_24319,_n_k_24458);
double _n_db_24467=d::at(this->_n_back_24335,_n_k_24458);
double _n_toward_24468=(0.15+(0.85*_n_smooth_24301(80.0,25.0,_n_db_24467)));
double _n_corona_24469=([&](){auto _n_left_24575=(std::exp(((-d::number(d::maximum({0.0,(_n_d_24465-_n_R_24290)})))/1.6))*0.55);auto _n_right_24576=((std::exp(((-d::number(d::maximum({0.0,(_n_d_24465-_n_R_24290)})))/6.0))*0.14)*_n_toward_24468);return (_n_left_24575+_n_right_24576);})();
double _n_bg_24470=((_n_corona_24469*_n_toward_24468)*_n_smooth_24301((_n_R_24290-2.0),(_n_R_24290+0.5),_n_d_24465));
if(d::truth(d::at(this->_n_star_24331,_n_k_24458))){d::check_cancel();double _n_tw_24471=(0.65+(0.35*std::sin(([&](){auto _n_left_24577=(_n_t_24445*(1.3+(_n_hash_24297(_n_x_24457,_n_r_24456)*2.5)));auto _n_right_24578=(_n_hash_24297(_n_r_24456,_n_x_24457)*6.28);return (_n_left_24577+_n_right_24578);})())));
(void)((_n_bg_24470=([&](){auto _n_argument_24579=_n_bg_24470;auto _n_argument_24580=((d::at(this->_n_star_24331,_n_k_24458)*_n_tw_24471)*_n_smooth_24301((_n_R_24290+3.0),(_n_R_24290+14.0),_n_d_24465));return d::maximum({_n_argument_24579,_n_argument_24580});})()));
}
double _n_c_24472=d::at(this->_n_cut_24320,_n_k_24458);
if(d::truth((_n_c_24472>0.0))){d::check_cancel();(void)((_n_bg_24470=([&](){auto _n_argument_24581=_n_bg_24470;auto _n_argument_24582=(_n_c_24472*(0.72+(0.45*std::exp(((-d::number(_n_db_24467))/30.0)))));return d::maximum({_n_argument_24581,_n_argument_24582});})()));
}
(void)((_n_v_24460=_n_bg_24470));
if(d::truth((_n_sp_24466>0.001))){d::check_cancel();double _n_n0_24473=d::at(this->_n_nx_24323,_n_k_24458);
double _n_n1_24474=d::at(this->_n_ny_24324,_n_k_24458);
double _n_n2_24475=d::at(this->_n_nz_24325,_n_k_24458);
double _n_day_24476=(((_n_n0_24473*d::at(this->_n_L_24332,0.0))+(_n_n1_24474*d::at(this->_n_L_24332,1.0)))+(_n_n2_24475*d::at(this->_n_L_24332,2.0)));
double _n_li_24477=(((d::at(this->_n_lat_24326,_n_k_24458)/ascii::PI)+0.5)*(this->_n_LA_24328-1.0));
double _n_lj_24478=d::mod(((((d::at(this->_n_lon_24327,_n_k_24458)/(ascii::PI*2.0))+0.5)*this->_n_LO_24329)+_n_spin_24447),this->_n_LO_24329);
if(d::truth((_n_lj_24478<0.0))){d::check_cancel();(void)((_n_lj_24478=(_n_lj_24478+this->_n_LO_24329)));
}
double _n_tex_24479=d::at(this->_n_bands_24330,((double(d::i32(_n_li_24477)|d::i32(0.0))*this->_n_LO_24329)+double(d::i32(_n_lj_24478)|d::i32(0.0))));
double _n_lit_24480=([&](){auto _n_left_24583=_n_smooth_24301((-d::number(0.04)),0.2,_n_day_24476);auto _n_right_24584=(0.03+(0.7*([&](){auto _n_argument_24585=d::maximum({0.0,_n_day_24476});auto _n_argument_24586=1.5;return std::pow(_n_argument_24585,_n_argument_24586);})()));return (_n_left_24583*_n_right_24584);})();
double _n_s_24481=(_n_lit_24480*(0.6+(0.65*_n_tex_24479)));
double _n_limb_24482=_n_smooth_24301(0.9,0.995,(_n_d_24465/_n_R_24290));
double _n_fc_24483=d::at(this->_n_facing_24336,_n_k_24458);
(void)((_n_s_24481=(_n_s_24481+((_n_limb_24482*_n_smooth_24301(0.1,0.8,_n_fc_24483))*0.9))));
(void)((_n_s_24481=(_n_s_24481+(d::at(this->_n_glow_24321,_n_k_24458)*0.3))));
(void)((_n_s_24481=(_n_s_24481+([&](){auto _n_left_24587=((_n_smooth_24301(0.86,0.985,(_n_d_24465/_n_R_24290))*0.95)*_n_toward_24468);auto _n_right_24588=(1.0-_n_smooth_24301((-d::number(0.3)),0.3,_n_fc_24483));return (_n_left_24587*_n_right_24588);})())));
double _n_night_24484=(1.0-_n_smooth_24301((-d::number(0.12)),0.06,_n_day_24476));
if((d::truth((_n_night_24484>0.0))&&d::truth((_n_n2_24475>0.15)))){d::check_cancel();double _n_row_24485=((((_n_n0_24473+_n_n1_24474)*this->_n_s2_24322)*_n_R_24290)/4.0);
double _n_ri_24486=d::round(_n_row_24485);
if(d::truth((std::fabs((_n_row_24485-_n_ri_24486))<0.14))){d::check_cancel();double _n_seg_24487=std::floor(((d::at(this->_n_lon_24327,_n_k_24458)+(((_n_spin_24447/this->_n_LO_24329)*ascii::PI)*2.0))*26.0));
if(d::truth((_n_hash_24297(_n_seg_24487,(_n_ri_24486+40.0))>0.5))){d::check_cancel();double _n_pulse_24488=([&](){auto _n_argument_24589=(0.5+(0.5*std::sin((((_n_seg_24487*0.5)-((_n_t_24445*2.4)*(0.6+_n_hash_24297(_n_ri_24486,3.0))))+(_n_ri_24486*2.0)))));auto _n_argument_24590=8.0;return std::pow(_n_argument_24589,_n_argument_24590);})();
(void)((_n_s_24481=(_n_s_24481+((_n_night_24484*(0.3+(0.7*_n_pulse_24488)))*(0.3+(0.7*_n_n2_24475))))));
}
}
}
(void)((_n_v_24460=((_n_v_24460*(1.0-_n_sp_24466))+(_n_s_24481*_n_sp_24466))));
(void)((_n_floor_24461=(0.07*_n_sp_24466)));
}
double _n_dmx_24489=((_n_x_24457+0.5)-_n_mx_24452);
double _n_dmy_24490=(_n_y_24459-_n_my_24453);
double _n_dm_24491=std::sqrt(((_n_dmx_24489*_n_dmx_24489)+(_n_dmy_24490*_n_dmy_24490)));
if((d::truth((_n_dm_24491<(_n_mr_24455+0.6)))&&d::truth(([&]()->bool{auto _n_logical_24591=_n_front_24454;return d::truth(_n_logical_24591)?_n_logical_24591:(_n_sp_24466<0.5);})()))){d::check_cancel();double _n_a0_24492=(_n_dmx_24489/_n_mr_24455);
double _n_a1_24493=(_n_dmy_24490/_n_mr_24455);
double _n_z_24494=std::sqrt(d::maximum({0.0,((1.0-(_n_a0_24492*_n_a0_24492))-(_n_a1_24493*_n_a1_24493))}));
double _n_day_24495=(((_n_a0_24492*d::at(this->_n_L_24332,0.0))+(_n_a1_24493*d::at(this->_n_L_24332,1.0)))+(_n_z_24494*d::at(this->_n_L_24332,2.0)));
double _n_crater_24496=(0.75+(0.25*_n_fbm_24299(((_n_dmx_24489*0.6)+40.0),(_n_dmy_24490*0.6),2.0,0.0)));
double _n_s_24497=(([&](){auto _n_left_24592=_n_smooth_24301((-d::number(0.05)),0.25,_n_day_24495);auto _n_right_24593=(0.3+(0.8*d::maximum({0.0,_n_day_24495})));return (_n_left_24592*_n_right_24593);})()*_n_crater_24496);
(void)((_n_s_24497=(_n_s_24497+(([&](){auto _n_left_24594=_n_smooth_24301(0.75,1.0,(_n_dm_24491/_n_mr_24455));auto _n_right_24595=([&](){auto _n_argument_24596=0.2;auto _n_argument_24597=0.9;auto _n_argument_24598=((((_n_a0_24492*d::at(this->_n_L_24332,0.0))+(_n_a1_24493*d::at(this->_n_L_24332,1.0)))/d::maximum({0.001,(_n_dm_24491/_n_mr_24455)}))/this->_n_LH_24333);return _n_smooth_24301(_n_argument_24596,_n_argument_24597,_n_argument_24598);})();return (_n_left_24594*_n_right_24595);})()*0.7))));
(void)((_n_s_24497=d::maximum({_n_s_24497,0.05})));
double _n_edge_24498=_n_smooth_24301((_n_mr_24455+0.6),(_n_mr_24455-0.6),_n_dm_24491);
(void)((_n_v_24460=((_n_v_24460*(1.0-_n_edge_24498))+(_n_s_24497*_n_edge_24498))));
(void)((_n_floor_24461=d::maximum({(_n_floor_24461*(1.0-_n_edge_24498)),(0.22*_n_edge_24498)})));
}
double _n_peak_24499=d::maximum({_n_v_24460,0.0001});
double _n_level_24500=(_n_clamp_24300((_n_floor_24461+(((1.0-_n_floor_24461)*std::pow(_n_peak_24499,0.85))*0.95)))*_n_fade_24462);
double _n_step_24501=([&](){auto _n_argument_24599=0.0;auto _n_argument_24600=([&](){auto _n_argument_24601=3.0;auto _n_argument_24602=d::round(((_n_level_24500*3.0)+d::at(_n_BAYER_24296,((double(d::i32(_n_r_24456)&d::i32(3.0))*4.0)+double(d::i32(_n_x_24457)&d::i32(3.0))))));return d::minimum({_n_argument_24601,_n_argument_24602});})();return d::maximum({_n_argument_24599,_n_argument_24600});})();
(void)(([&](){auto&& _n_array_24603=this->_n_out_24306;auto _n_index_24604=_n_k_24458;auto _n_value_24605=d::at(_n_DOTS_24294,_n_step_24501);d::put(_n_array_24603,_n_index_24604,_n_value_24605);return _n_value_24605;})());
if(d::truth(_n_color_24446)){d::check_cancel();double _n_want_24502=(d::truth(_n_step_24501)?d::minimum({1.0,((_n_level_24500+0.06)/d::at(_n_COVER_24295,_n_step_24501))}):0.0);
double _n_g_24503=_n_clamp_24300(((0.3+(0.7*_n_want_24502))*(0.22+(0.78*_n_smooth_24301(0.0,0.6,_n_peak_24499)))));
(void)(([&](){auto&& _n_array_24606=d::read(_n_color_24446);auto _n_index_24607=_n_k_24458;auto _n_value_24608=this->_n_nearest_24308(_n_g_24503,_n_g_24503,_n_g_24503);d::put(_n_array_24606,_n_index_24607,_n_value_24608);return _n_value_24608;})());
}
}}
}}
d::Array<d::String,false> _n_lines_24504=d::Array<d::String,false>{};
{double _n_r_24505=0.0;
for(;d::truth((_n_r_24505<_n_H_24287));(void)((_n_r_24505++))){d::check_cancel();(void)(_n_lines_24504.push(d::join(this->_n_out_24306.slice((_n_r_24505*_n_W_24286),((_n_r_24505+1.0)*_n_W_24286)),d::String(u""))));
}}
return d::join(_n_lines_24504,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("planet-scale").cols)*ascii::catalog_meta("planet-scale").rows);auto _env=std::make_shared<_n_Record_24506>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &planet_scale_meta(){return catalog_meta("planet-scale");}
std::unique_ptr<Piece> make_planet_scale(const AsciiPieceOptions &o){return std::make_unique<Native_planet_scale>(o);}
}
