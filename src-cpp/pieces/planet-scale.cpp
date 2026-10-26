// Direct, statically typed C++ from src/pieces/planet-scale.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24285;
struct _n_Record_24507;
struct _n_Record_24285{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_24285> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24285>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_24507{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24507> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24507>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_24298(double _a0,double _a1);
double _n_noise_24299(double _a0,double _a1,double _a2);
double _n_fbm_24300(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_24301(double _a0);
double _n_smooth_24302(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_24303(d::String _a0);
void _n_blur_24304(d::Array<float,true> _a0,double _a1);
std::shared_ptr<_n_Record_24285> _n_meta_24284=[](){return ([&](){auto _n_object_24510=std::make_shared<_n_Record_24285>();_n_object_24510->_p_name=d::String(u"planet scale");_n_object_24510->_p_category=d::String(u"scenes");_n_object_24510->_p_note=d::String(u"a dark planet cut into the planetscale mark, backlit, a moon circling");_n_object_24510->_p_cols=200.0;_n_object_24510->_p_rows=100.0;_n_object_24510->_p_cell=1.0;_n_object_24510->_p_fps=15.0;_n_object_24510->_p_ground=d::String(u"#050505");_n_object_24510->_p_palette=d::Array<d::String,false>{d::String(u"#101010"),d::String(u"#181818"),d::String(u"#202020"),d::String(u"#282828"),d::String(u"#303030"),d::String(u"#3a3a3a"),d::String(u"#444444"),d::String(u"#4e4e4e"),d::String(u"#585858"),d::String(u"#636363"),d::String(u"#6e6e6e"),d::String(u"#797979"),d::String(u"#858585"),d::String(u"#919191"),d::String(u"#9d9d9d"),d::String(u"#a9a9a9"),d::String(u"#b5b5b5"),d::String(u"#c1c1c1"),d::String(u"#cccccc"),d::String(u"#d7d7d7"),d::String(u"#e1e1e1"),d::String(u"#eaeaea"),d::String(u"#f3f3f3"),d::String(u"#ffffff")};return _n_object_24510;})();}();
const d::String _n_INK_24286=[](){return d::String(u"\n\n                  00000000000000000000\n              0000000000000000000000000000\n           0000000000000000000000000000000000\n         00000000000000000000000000000000000000\n       000000000000000000000000000000000000000000\n      00000000000000000000000000000000000000000000\n     0000000000000000000000000000000000000000000000\n    000000000000000000000000000000000000000000000000\n   000000000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000000000\n  000000000000000000000000000000000000000000000\n  0000000000000000000000000000000000000000000\n  00000000000000000000000000000000000000000\n  00000000000000000000000000    000000000           00\n  000000000000000000000000    000000000           0000\n  0000000000000000000000    000000000           000000\n  00000000000000000000    000000000           00000000\n   00000000000000000    000000000           000000000\n    00000000000000    000000000           0000000000\n     00000000000    000000000           00000000000\n      00000000    000000000           000000000000\n       00000    000000000           0000000000000\n         0    000000000           0000000000000\n             00000000           0000000000000\n              00000           000000000000\n                            0000000000\n\n");}();
const double _n_W_24287=[](){return 200.0;}();
const double _n_H_24288=[](){return 100.0;}();
const double _n_CX_24289=[](){return 100.0;}();
const double _n_CY_24290=[](){return 50.0;}();
const double _n_R_24291=[](){return 41.0;}();
d::Array<double,false> _n_SUN_24292=[](){return d::Array<double,false>{(-d::number(0.68)),(-d::number(0.68)),0.2};}();
const double _n_MOON_R_24293=[](){return 7.0;}();
const double _n_ORBIT_24294=[](){return 16.0;}();
const d::String _n_DOTS_24295=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_24296=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_24297=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_24338=_a0;
return ((_n_v_24338/16.0)-0.47);});}();
double _n_hash_24298(double _a0,double _a1){double _n_x_24339=_a0;
double _n_y_24340=_a1;
{
double _n_h_24341=([&](){auto _n_left_24511=d::imul(double(d::i32(_n_x_24339)|d::i32(0.0)),374761393.0);auto _n_right_24512=d::imul(double(d::i32(_n_y_24340)|d::i32(0.0)),668265263.0);return (_n_left_24511+_n_right_24512);})();
(void)((_n_h_24341=d::imul(double(d::i32(_n_h_24341)^d::i32(double(d::u32(_n_h_24341)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_24341)^d::i32(double(d::u32(_n_h_24341)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_24299(double _a0,double _a1,double _a2){double _n_x_24342=_a0;
double _n_y_24343=_a1;
double _n_period_24344=_a2;
{
double _n_xi_24345=std::floor(_n_x_24342);
double _n_yi_24346=std::floor(_n_y_24343);
double _n_fx_24347=(_n_x_24342-_n_xi_24345);
double _n_fy_24348=(_n_y_24343-_n_yi_24346);
double _n_u_24349=((_n_fx_24347*_n_fx_24347)*(3.0-(2.0*_n_fx_24347)));
double _n_v_24350=((_n_fy_24348*_n_fy_24348)*(3.0-(2.0*_n_fy_24348)));
double _n_x0_24351=_n_xi_24345;
double _n_x1_24352=(_n_xi_24345+1.0);
if(d::truth(_n_period_24344)){d::check_cancel();(void)((_n_x0_24351=d::mod((d::mod(_n_xi_24345,_n_period_24344)+_n_period_24344),_n_period_24344)));
(void)((_n_x1_24352=d::mod((_n_x0_24351+1.0),_n_period_24344)));
}
double _n_a_24353=_n_hash_24298(_n_x0_24351,_n_yi_24346);
double _n_b_24354=_n_hash_24298(_n_x1_24352,_n_yi_24346);
double _n_c_24355=_n_hash_24298(_n_x0_24351,(_n_yi_24346+1.0));
double _n_d_24356=_n_hash_24298(_n_x1_24352,(_n_yi_24346+1.0));
return (((_n_a_24353+((_n_b_24354-_n_a_24353)*_n_u_24349))+((_n_c_24355-_n_a_24353)*_n_v_24350))+(((((_n_a_24353-_n_b_24354)-_n_c_24355)+_n_d_24356)*_n_u_24349)*_n_v_24350));

}
}

double _n_fbm_24300(double _a0,double _a1,double _a2,double _a3){double _n_x_24357=_a0;
double _n_y_24358=_a1;
double _n_octaves_24359=_a2;
double _n_period_24360=_a3;
{
double _n_s_24361=0.0;
double _n_n_24362=0.0;
double _n_amp_24363=0.5;
double _n_f_24364=1.0;
{double _n_i_24365=0.0;
for(;d::truth((_n_i_24365<_n_octaves_24359));(void)((_n_i_24365++))){d::check_cancel();(void)((_n_s_24361=(_n_s_24361+(_n_amp_24363*_n_noise_24299((_n_x_24357*_n_f_24364),(_n_y_24358*_n_f_24364),(_n_period_24360*_n_f_24364))))));
(void)((_n_n_24362=(_n_n_24362+_n_amp_24363)));
(void)((_n_amp_24363=(_n_amp_24363*0.5)));
(void)((_n_f_24364=(_n_f_24364*2.0)));
}}
return (_n_s_24361/_n_n_24362);

}
}

double _n_clamp_24301(double _a0){double _n_v_24366=_a0;
return (d::truth((_n_v_24366<0.0))?0.0:(d::truth((_n_v_24366>1.0))?1.0:_n_v_24366));}

double _n_smooth_24302(double _a0,double _a1,double _a2){double _n_a_24367=_a0;
double _n_b_24368=_a1;
double _n_v_24369=_a2;
{
double _n_k_24370=_n_clamp_24301(((_n_v_24369-_n_a_24367)/(_n_b_24368-_n_a_24367)));
return ((_n_k_24370*_n_k_24370)*(3.0-(2.0*_n_k_24370)));

}
}

d::Array<double,false> _n_hex_24303(d::String _a0){d::String _n_s_24371=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_24372=_a0;
return (([&](){auto _n_argument_24513=d::slice(_n_s_24371,_n_i_24372,(_n_i_24372+2.0));auto _n_argument_24514=16.0;return d::parseInt(_n_argument_24513,_n_argument_24514);})()/255.0);});}

void _n_blur_24304(d::Array<float,true> _a0,double _a1){d::Array<float,true> _n_a_24373=_a0;
double _n_passes_24374=_a1;
{
d::Array<float,true> _n_b_24375=d::Array<float,true>(size_t(double(_n_a_24373.size())));
{double _n_p_24376=0.0;
for(;d::truth((_n_p_24376<_n_passes_24374));(void)((_n_p_24376++))){d::check_cancel();{double _n_r_24377=0.0;
for(;d::truth((_n_r_24377<_n_H_24288));(void)((_n_r_24377++))){d::check_cancel();{double _n_x_24378=0.0;
for(;d::truth((_n_x_24378<_n_W_24287));(void)((_n_x_24378++))){d::check_cancel();double _n_s_24379=0.0;
{double _n_i_24380=(-d::number(1.0));
for(;d::truth((_n_i_24380<=1.0));(void)((_n_i_24380++))){d::check_cancel();(void)((_n_s_24379=(_n_s_24379+d::at(_n_a_24373,((_n_r_24377*_n_W_24287)+([&](){auto _n_argument_24515=(_n_W_24287-1.0);auto _n_argument_24516=d::maximum({0.0,(_n_x_24378+_n_i_24380)});return d::minimum({_n_argument_24515,_n_argument_24516});})())))));
}}
(void)(([&](){auto&& _n_array_24517=_n_b_24375;auto _n_index_24518=((_n_r_24377*_n_W_24287)+_n_x_24378);auto _n_value_24519=(_n_s_24379/3.0);d::put(_n_array_24517,_n_index_24518,_n_value_24519);return _n_value_24519;})());
}}
}}
{double _n_r_24381=0.0;
for(;d::truth((_n_r_24381<_n_H_24288));(void)((_n_r_24381++))){d::check_cancel();{double _n_x_24382=0.0;
for(;d::truth((_n_x_24382<_n_W_24287));(void)((_n_x_24382++))){d::check_cancel();double _n_s_24383=0.0;
{double _n_i_24384=(-d::number(1.0));
for(;d::truth((_n_i_24384<=1.0));(void)((_n_i_24384++))){d::check_cancel();(void)((_n_s_24383=(_n_s_24383+d::at(_n_b_24375,((([&](){auto _n_argument_24520=(_n_H_24288-1.0);auto _n_argument_24521=d::maximum({0.0,(_n_r_24381+_n_i_24384)});return d::minimum({_n_argument_24520,_n_argument_24521});})()*_n_W_24287)+_n_x_24382)))));
}}
(void)(([&](){auto&& _n_array_24522=_n_a_24373;auto _n_index_24523=((_n_r_24381*_n_W_24287)+_n_x_24382);auto _n_value_24524=(_n_s_24383/3.0);d::put(_n_array_24522,_n_index_24523,_n_value_24524);return _n_value_24524;})());
}}
}}
}}

}
}

struct Native_planet_scale final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_24305{};
double _n_N_24306{};
d::Array<d::String,false> _n_out_24307{};
d::Array<uint8_t,true> _n_lut_24308{};
d::Array<d::String,false> _n_ink_24310{};
double _n_GW_24311{};
double _n_GH_24312{};
double _n_c0_24314{};
double _n_c1_24315{};
double _n_r0_24316{};
double _n_r1_24317{};
d::Array<float,true> _n_body_24319{};
d::Array<float,true> _n_solid_24320{};
d::Array<float,true> _n_cut_24321{};
d::Array<float,true> _n_glow_24322{};
double _n_s2_24323{};
d::Array<float,true> _n_nx_24324{};
d::Array<float,true> _n_ny_24325{};
d::Array<float,true> _n_nz_24326{};
d::Array<float,true> _n_lat_24327{};
d::Array<float,true> _n_lon_24328{};
double _n_LA_24329{};
double _n_LO_24330{};
d::Array<float,true> _n_bands_24331{};
d::Array<float,true> _n_star_24332{};
d::Array<double,false> _n_L_24333{};
double _n_LH_24334{};
d::Array<double,false> _n_BACK_24335{};
d::Array<float,true> _n_back_24336{};
d::Array<float,true> _n_facing_24337{};
std::function<d::String(double,std::shared_ptr<_n_Record_24507>)> _render;
double _n_nearest_24309(double _a0,double _a1,double _a2){double _n_r_24385=_a0;
double _n_g_24386=_a1;
double _n_b_24387=_a2;
{
double _n_k_24388=([&](){auto _n_left_24610=([&](){auto _n_left_24612=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_24385*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_24613=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_24386*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_24612)|d::i32(_n_right_24613));})();auto _n_right_24611=d::minimum({31.0,double(d::i32((_n_b_24387*31.99))|d::i32(0.0))});return double(d::i32(_n_left_24610)|d::i32(_n_right_24611));})();
if(d::truth((d::at(this->_n_lut_24308,_n_k_24388)!=255.0))){d::check_cancel();return d::at(this->_n_lut_24308,_n_k_24388);
}
double _n_best_24389=0.0;
double _n_bd_24390=1000000000.0;
{double _n_i_24391=0.0;
for(;d::truth((_n_i_24391<double(this->_n_P_24305.size())));(void)((_n_i_24391++))){d::check_cancel();double _n_dr_24392=(d::at(d::at(this->_n_P_24305,_n_i_24391),0.0)-_n_r_24385);
double _n_dg_24393=(d::at(d::at(this->_n_P_24305,_n_i_24391),1.0)-_n_g_24386);
double _n_db_24394=(d::at(d::at(this->_n_P_24305,_n_i_24391),2.0)-_n_b_24387);
double _n_d_24395=((((0.3*_n_dr_24392)*_n_dr_24392)+((0.5*_n_dg_24393)*_n_dg_24393))+((0.2*_n_db_24394)*_n_db_24394));
if(d::truth((_n_d_24395<_n_bd_24390))){d::check_cancel();(void)(((_n_bd_24390=_n_d_24395),(_n_best_24389=_n_i_24391)));
}
}}
return ([&](){auto&& _n_array_24614=this->_n_lut_24308;auto _n_index_24615=_n_k_24388;auto _n_value_24616=_n_best_24389;d::put(_n_array_24614,_n_index_24615,_n_value_24616);return _n_value_24616;})();

}
}

double _n_at_24313(double _a0,double _a1){double _n_c_24397=_a0;
double _n_r_24398=_a1;
return ((((((d::truth((_n_r_24398>=0.0))&&d::truth((_n_r_24398<this->_n_GH_24312)))&&d::truth((_n_c_24397>=0.0)))&&d::truth((_n_c_24397<this->_n_GW_24311)))&&d::truth(d::at(d::at(this->_n_ink_24310,_n_r_24398),_n_c_24397)))&&d::truth((d::at(d::at(this->_n_ink_24310,_n_r_24398),_n_c_24397)!=d::String(u" "))))?1.0:0.0);}

double _n_cov_24318(double _a0,double _a1){double _n_u_24401=_a0;
double _n_v_24402=_a1;
{
double _n_x_24403=(_n_u_24401-0.5);
double _n_y_24404=(_n_v_24402-0.5);
double _n_xi_24405=std::floor(_n_x_24403);
double _n_yi_24406=std::floor(_n_y_24404);
double _n_fx_24407=(_n_x_24403-_n_xi_24405);
double _n_fy_24408=(_n_y_24404-_n_yi_24406);
double _n_a_24409=this->_n_at_24313(_n_xi_24405,_n_yi_24406);
double _n_b_24410=this->_n_at_24313((_n_xi_24405+1.0),_n_yi_24406);
double _n_c_24411=this->_n_at_24313(_n_xi_24405,(_n_yi_24406+1.0));
double _n_d_24412=this->_n_at_24313((_n_xi_24405+1.0),(_n_yi_24406+1.0));
return (((_n_a_24409+((_n_b_24410-_n_a_24409)*_n_fx_24407))+((_n_c_24411-_n_a_24409)*_n_fy_24408))+(((((_n_a_24409-_n_b_24410)-_n_c_24411)+_n_d_24412)*_n_fx_24407)*_n_fy_24408));

}
}

explicit Native_planet_scale(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_24305=d::map(_n_meta_24284->_p_palette,_n_hex_24303);
this->_n_N_24306=(_n_W_24287*_n_H_24288);
this->_n_out_24307=d::Array<d::String,false>(size_t(this->_n_N_24306));
this->_n_lut_24308=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_ink_24310=d::split(d::slice(_n_INK_24286,1.0,(-d::number(1.0))),d::String(u"\n"));
this->_n_GW_24311=([&](){d::Array<double> _n_numbers_24525;for(auto _x:d::map(this->_n_ink_24310,[&]( d::String _a0) mutable ->double{d::String _n_l_24396=_a0;
return double(_n_l_24396.size());}))_n_numbers_24525.push(_x);return d::maximum(_n_numbers_24525);})();
this->_n_GH_24312=double(this->_n_ink_24310.size());
this->_n_c0_24314=this->_n_GW_24311;
this->_n_c1_24315=0.0;
this->_n_r0_24316=this->_n_GH_24312;
this->_n_r1_24317=0.0;
{double _n_r_24399=0.0;
for(;d::truth((_n_r_24399<this->_n_GH_24312));(void)((_n_r_24399++))){d::check_cancel();{double _n_c_24400=0.0;
for(;d::truth((_n_c_24400<this->_n_GW_24311));(void)((_n_c_24400++))){d::check_cancel();if(d::truth(this->_n_at_24313(_n_c_24400,_n_r_24399))){d::check_cancel();(void)(((((this->_n_c0_24314=d::minimum({this->_n_c0_24314,_n_c_24400})),(this->_n_c1_24315=d::maximum({this->_n_c1_24315,(_n_c_24400+1.0)}))),(this->_n_r0_24316=d::minimum({this->_n_r0_24316,_n_r_24399}))),(this->_n_r1_24317=d::maximum({this->_n_r1_24317,(_n_r_24399+1.0)}))));
}
}}
}}
this->_n_body_24319=d::Array<float,true>(size_t(this->_n_N_24306));
{double _n_r_24413=0.0;
for(;d::truth((_n_r_24413<_n_H_24288));(void)((_n_r_24413++))){d::check_cancel();{double _n_x_24414=0.0;
for(;d::truth((_n_x_24414<_n_W_24287));(void)((_n_x_24414++))){d::check_cancel();double _n_dx_24415=(((_n_x_24414+0.5)-_n_CX_24289)/_n_R_24291);
double _n_dy_24416=(((_n_r_24413+0.5)-_n_CY_24290)/_n_R_24291);
double _n_u_24417=(this->_n_c0_24314+(((_n_dx_24415+1.0)/2.0)*(this->_n_c1_24315-this->_n_c0_24314)));
double _n_v_24418=(this->_n_r0_24316+(((_n_dy_24416+1.0)/2.0)*(this->_n_r1_24317-this->_n_r0_24316)));
(void)(([&](){auto&& _n_array_24526=this->_n_body_24319;auto _n_index_24527=((_n_r_24413*_n_W_24287)+_n_x_24414);auto _n_value_24528=this->_n_cov_24318(_n_u_24417,_n_v_24418);d::put(_n_array_24526,_n_index_24527,_n_value_24528);return _n_value_24528;})());
}}
}}
(void)(_n_blur_24304(this->_n_body_24319,2.0));
this->_n_solid_24320=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_cut_24321=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_glow_24322=d::Array<float,true>(size_t(this->_n_N_24306));
{double _n_k_24419=0.0;
for(;d::truth((_n_k_24419<this->_n_N_24306));(void)((_n_k_24419++))){d::check_cancel();double _n_x_24420=d::mod(_n_k_24419,_n_W_24287);
double _n_r_24421=double(d::i32((_n_k_24419/_n_W_24287))|d::i32(0.0));
double _n_d_24422=d::hypot(std::initializer_list<double>{((_n_x_24420+0.5)-_n_CX_24289),((_n_r_24421+0.5)-_n_CY_24290)});
double _n_disc_24423=_n_smooth_24302((_n_R_24291+0.6),(_n_R_24291-0.6),_n_d_24422);
double _n_m_24424=_n_smooth_24302(0.38,0.62,d::at(this->_n_body_24319,_n_k_24419));
(void)(([&](){auto&& _n_array_24529=this->_n_solid_24320;auto _n_index_24530=_n_k_24419;auto _n_value_24531=(_n_disc_24423*_n_m_24424);d::put(_n_array_24529,_n_index_24530,_n_value_24531);return _n_value_24531;})());
(void)(([&](){auto&& _n_array_24532=this->_n_cut_24321;auto _n_index_24533=_n_k_24419;auto _n_value_24534=(_n_disc_24423*(1.0-_n_m_24424));d::put(_n_array_24532,_n_index_24533,_n_value_24534);return _n_value_24534;})());
(void)(([&](){auto&& _n_array_24535=this->_n_glow_24322;auto _n_index_24536=_n_k_24419;auto _n_value_24537=d::at(this->_n_cut_24321,_n_k_24419);d::put(_n_array_24535,_n_index_24536,_n_value_24537);return _n_value_24537;})());
}}
(void)(_n_blur_24304(this->_n_glow_24322,1.0));
this->_n_s2_24323=std::sqrt(.5);
this->_n_nx_24324=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_ny_24325=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_nz_24326=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_lat_24327=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_lon_24328=d::Array<float,true>(size_t(this->_n_N_24306));
{double _n_k_24425=0.0;
for(;d::truth((_n_k_24425<this->_n_N_24306));(void)((_n_k_24425++))){d::check_cancel();double _n_x_24426=d::mod(_n_k_24425,_n_W_24287);
double _n_r_24427=double(d::i32((_n_k_24425/_n_W_24287))|d::i32(0.0));
double _n_a_24428=(((_n_x_24426+0.5)-_n_CX_24289)/_n_R_24291);
double _n_b_24429=(((_n_r_24427+0.5)-_n_CY_24290)/_n_R_24291);
double _n_q_24430=((_n_a_24428*_n_a_24428)+(_n_b_24429*_n_b_24429));
if(d::truth((_n_q_24430>=1.02))){d::check_cancel();continue;
}
double _n_z_24431=std::sqrt(d::maximum({0.0,(1.0-_n_q_24430)}));
(void)(((([&](){auto&& _n_array_24538=this->_n_nx_24324;auto _n_index_24539=_n_k_24425;auto _n_value_24540=_n_a_24428;d::put(_n_array_24538,_n_index_24539,_n_value_24540);return _n_value_24540;})(),([&](){auto&& _n_array_24541=this->_n_ny_24325;auto _n_index_24542=_n_k_24425;auto _n_value_24543=_n_b_24429;d::put(_n_array_24541,_n_index_24542,_n_value_24543);return _n_value_24543;})()),([&](){auto&& _n_array_24544=this->_n_nz_24326;auto _n_index_24545=_n_k_24425;auto _n_value_24546=_n_z_24431;d::put(_n_array_24544,_n_index_24545,_n_value_24546);return _n_value_24546;})()));
(void)(([&](){auto&& _n_array_24547=this->_n_lat_24327;auto _n_index_24548=_n_k_24425;auto _n_value_24549=std::asin(([&](){auto _n_argument_24550=(-d::number(1.0));auto _n_argument_24551=d::minimum({1.0,((_n_a_24428+_n_b_24429)*this->_n_s2_24323)});return d::maximum({_n_argument_24550,_n_argument_24551});})());d::put(_n_array_24547,_n_index_24548,_n_value_24549);return _n_value_24549;})());
(void)(([&](){auto&& _n_array_24552=this->_n_lon_24328;auto _n_index_24553=_n_k_24425;auto _n_value_24554=std::atan2(((_n_a_24428-_n_b_24429)*this->_n_s2_24323),_n_z_24431);d::put(_n_array_24552,_n_index_24553,_n_value_24554);return _n_value_24554;})());
}}
this->_n_LA_24329=96.0;
this->_n_LO_24330=256.0;
this->_n_bands_24331=d::Array<float,true>(size_t((this->_n_LA_24329*this->_n_LO_24330)));
{double _n_i_24432=0.0;
for(;d::truth((_n_i_24432<this->_n_LA_24329));(void)((_n_i_24432++))){d::check_cancel();{double _n_j_24433=0.0;
for(;d::truth((_n_j_24433<this->_n_LO_24330));(void)((_n_j_24433++))){d::check_cancel();double _n_la_24434=(_n_i_24432/this->_n_LA_24329);
double _n_lo_24435=(_n_j_24433/this->_n_LO_24330);
double _n_warp_24436=(_n_fbm_24300((_n_lo_24435*12.0),(_n_la_24434*6.0),3.0,12.0)*0.08);
double _n_stripe_24437=(0.5+(0.5*std::sin((((_n_la_24434+_n_warp_24436)*38.0)+(1.6*std::sin((_n_la_24434*17.0)))))));
(void)(([&](){auto&& _n_array_24555=this->_n_bands_24331;auto _n_index_24556=((_n_i_24432*this->_n_LO_24330)+_n_j_24433);auto _n_value_24557=((0.75*_n_stripe_24437)+(0.25*_n_fbm_24300((_n_lo_24435*16.0),(_n_la_24434*30.0),3.0,16.0)));d::put(_n_array_24555,_n_index_24556,_n_value_24557);return _n_value_24557;})());
}}
}}
this->_n_star_24332=d::Array<float,true>(size_t(this->_n_N_24306));
{double _n_k_24438=0.0;
for(;d::truth((_n_k_24438<this->_n_N_24306));(void)((_n_k_24438++))){d::check_cancel();double _n_x_24439=d::mod(_n_k_24438,_n_W_24287);
double _n_r_24440=double(d::i32((_n_k_24438/_n_W_24287))|d::i32(0.0));
double _n_h_24441=_n_hash_24298(((_n_x_24439*3.0)+7.0),((_n_r_24440*5.0)+1.0));
if(d::truth((_n_h_24441>0.986))){d::check_cancel();(void)(([&](){auto&& _n_array_24558=this->_n_star_24332;auto _n_index_24559=_n_k_24438;auto _n_value_24560=(0.35+(0.65*_n_hash_24298(_n_x_24439,(_n_r_24440+99.0))));d::put(_n_array_24558,_n_index_24559,_n_value_24560);return _n_value_24560;})());
}
}}
this->_n_L_24333=d::map(_n_SUN_24292,[&]( double _a0) mutable ->double{double _n_v_24442=_a0;
return (_n_v_24442/d::hypot(_n_SUN_24292));});
this->_n_LH_24334=d::hypot(std::initializer_list<double>{d::at(this->_n_L_24333,0.0),d::at(this->_n_L_24333,1.0)});
this->_n_BACK_24335=d::Array<double,false>{(_n_CX_24289+18.0),(_n_CY_24290+18.0)};
this->_n_back_24336=d::Array<float,true>(size_t(this->_n_N_24306));
this->_n_facing_24337=d::Array<float,true>(size_t(this->_n_N_24306));
{double _n_k_24443=0.0;
for(;d::truth((_n_k_24443<this->_n_N_24306));(void)((_n_k_24443++))){d::check_cancel();double _n_x_24444=d::mod(_n_k_24443,_n_W_24287);
double _n_r_24445=double(d::i32((_n_k_24443/_n_W_24287))|d::i32(0.0));
(void)(([&](){auto&& _n_array_24561=this->_n_back_24336;auto _n_index_24562=_n_k_24443;auto _n_value_24563=d::hypot(std::initializer_list<double>{((_n_x_24444+0.5)-d::at(this->_n_BACK_24335,0.0)),((_n_r_24445+0.5)-d::at(this->_n_BACK_24335,1.0))});d::put(_n_array_24561,_n_index_24562,_n_value_24563);return _n_value_24563;})());
(void)(([&](){auto&& _n_array_24564=this->_n_facing_24337;auto _n_index_24565=_n_k_24443;auto _n_value_24566=((((d::at(this->_n_nx_24324,_n_k_24443)*d::at(this->_n_L_24333,0.0))+(d::at(this->_n_ny_24325,_n_k_24443)*d::at(this->_n_L_24333,1.0)))/([&](){auto _n_argument_24567=0.001;auto _n_argument_24568=d::hypot(std::initializer_list<double>{d::at(this->_n_nx_24324,_n_k_24443),d::at(this->_n_ny_24325,_n_k_24443)});return d::maximum({_n_argument_24567,_n_argument_24568});})())/this->_n_LH_24334);d::put(_n_array_24564,_n_index_24565,_n_value_24566);return _n_value_24566;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_24507> _a1) mutable ->d::String{double _n_t_24446=_a0;
auto _n_binding_24571=(d::present(_a1)?_a1:([&](){auto _n_object_24570=std::make_shared<_n_Record_24507>();return _n_object_24570;})());
std::optional<d::Array<uint8_t,true>> _n_color_24447=_n_binding_24571->_p_color;
{
double _n_spin_24448=((_n_t_24446/120.0)*this->_n_LO_24330);
double _n_a_24449=((((_n_t_24446/_n_ORBIT_24294)*ascii::PI)*2.0)+2.2);
double _n_ex_24450=(std::cos(_n_a_24449)*66.0);
double _n_ey_24451=(std::sin(_n_a_24449)*11.0);
double _n_tilt_24452=(-d::number(0.32));
double _n_mx_24453=([&](){auto _n_left_24572=(_n_CX_24289+(_n_ex_24450*std::cos(_n_tilt_24452)));auto _n_right_24573=(_n_ey_24451*std::sin(_n_tilt_24452));return (_n_left_24572-_n_right_24573);})();
double _n_my_24454=([&](){auto _n_left_24574=(_n_CY_24290+(_n_ex_24450*std::sin(_n_tilt_24452)));auto _n_right_24575=(_n_ey_24451*std::cos(_n_tilt_24452));return (_n_left_24574+_n_right_24575);})();
bool _n_front_24455=(std::sin(_n_a_24449)>0.0);
double _n_mr_24456=(_n_MOON_R_24293*(1.0+(0.08*std::sin(_n_a_24449))));
{double _n_r_24457=0.0;
for(;d::truth((_n_r_24457<_n_H_24288));(void)((_n_r_24457++))){d::check_cancel();{double _n_x_24458=0.0;
for(;d::truth((_n_x_24458<_n_W_24287));(void)((_n_x_24458++))){d::check_cancel();double _n_k_24459=((_n_r_24457*_n_W_24287)+_n_x_24458);
double _n_y_24460=(_n_r_24457+0.5);
double _n_v_24461=0.0;
double _n_floor_24462=0.0;
double _n_fade_24463=1.0;
double _n_px_24464=((_n_x_24458+0.5)-_n_CX_24289);
double _n_py_24465=(_n_y_24460-_n_CY_24290);
double _n_d_24466=std::sqrt(((_n_px_24464*_n_px_24464)+(_n_py_24465*_n_py_24465)));
double _n_sp_24467=d::at(this->_n_solid_24320,_n_k_24459);
double _n_db_24468=d::at(this->_n_back_24336,_n_k_24459);
double _n_toward_24469=(0.15+(0.85*_n_smooth_24302(80.0,25.0,_n_db_24468)));
double _n_corona_24470=([&](){auto _n_left_24576=(std::exp(((-d::number(d::maximum({0.0,(_n_d_24466-_n_R_24291)})))/1.6))*0.55);auto _n_right_24577=((std::exp(((-d::number(d::maximum({0.0,(_n_d_24466-_n_R_24291)})))/6.0))*0.14)*_n_toward_24469);return (_n_left_24576+_n_right_24577);})();
double _n_bg_24471=((_n_corona_24470*_n_toward_24469)*_n_smooth_24302((_n_R_24291-2.0),(_n_R_24291+0.5),_n_d_24466));
if(d::truth(d::at(this->_n_star_24332,_n_k_24459))){d::check_cancel();double _n_tw_24472=(0.65+(0.35*std::sin(([&](){auto _n_left_24578=(_n_t_24446*(1.3+(_n_hash_24298(_n_x_24458,_n_r_24457)*2.5)));auto _n_right_24579=(_n_hash_24298(_n_r_24457,_n_x_24458)*6.28);return (_n_left_24578+_n_right_24579);})())));
(void)((_n_bg_24471=([&](){auto _n_argument_24580=_n_bg_24471;auto _n_argument_24581=((d::at(this->_n_star_24332,_n_k_24459)*_n_tw_24472)*_n_smooth_24302((_n_R_24291+3.0),(_n_R_24291+14.0),_n_d_24466));return d::maximum({_n_argument_24580,_n_argument_24581});})()));
}
double _n_c_24473=d::at(this->_n_cut_24321,_n_k_24459);
if(d::truth((_n_c_24473>0.0))){d::check_cancel();(void)((_n_bg_24471=([&](){auto _n_argument_24582=_n_bg_24471;auto _n_argument_24583=(_n_c_24473*(0.72+(0.45*std::exp(((-d::number(_n_db_24468))/30.0)))));return d::maximum({_n_argument_24582,_n_argument_24583});})()));
}
(void)((_n_v_24461=_n_bg_24471));
if(d::truth((_n_sp_24467>0.001))){d::check_cancel();double _n_n0_24474=d::at(this->_n_nx_24324,_n_k_24459);
double _n_n1_24475=d::at(this->_n_ny_24325,_n_k_24459);
double _n_n2_24476=d::at(this->_n_nz_24326,_n_k_24459);
double _n_day_24477=(((_n_n0_24474*d::at(this->_n_L_24333,0.0))+(_n_n1_24475*d::at(this->_n_L_24333,1.0)))+(_n_n2_24476*d::at(this->_n_L_24333,2.0)));
double _n_li_24478=(((d::at(this->_n_lat_24327,_n_k_24459)/ascii::PI)+0.5)*(this->_n_LA_24329-1.0));
double _n_lj_24479=d::mod(((((d::at(this->_n_lon_24328,_n_k_24459)/(ascii::PI*2.0))+0.5)*this->_n_LO_24330)+_n_spin_24448),this->_n_LO_24330);
if(d::truth((_n_lj_24479<0.0))){d::check_cancel();(void)((_n_lj_24479=(_n_lj_24479+this->_n_LO_24330)));
}
double _n_tex_24480=d::at(this->_n_bands_24331,((double(d::i32(_n_li_24478)|d::i32(0.0))*this->_n_LO_24330)+double(d::i32(_n_lj_24479)|d::i32(0.0))));
double _n_lit_24481=([&](){auto _n_left_24584=_n_smooth_24302((-d::number(0.04)),0.2,_n_day_24477);auto _n_right_24585=(0.03+(0.7*([&](){auto _n_argument_24586=d::maximum({0.0,_n_day_24477});auto _n_argument_24587=1.5;return std::pow(_n_argument_24586,_n_argument_24587);})()));return (_n_left_24584*_n_right_24585);})();
double _n_s_24482=(_n_lit_24481*(0.6+(0.65*_n_tex_24480)));
double _n_limb_24483=_n_smooth_24302(0.9,0.995,(_n_d_24466/_n_R_24291));
double _n_fc_24484=d::at(this->_n_facing_24337,_n_k_24459);
(void)((_n_s_24482=(_n_s_24482+((_n_limb_24483*_n_smooth_24302(0.1,0.8,_n_fc_24484))*0.9))));
(void)((_n_s_24482=(_n_s_24482+(d::at(this->_n_glow_24322,_n_k_24459)*0.3))));
(void)((_n_s_24482=(_n_s_24482+([&](){auto _n_left_24588=((_n_smooth_24302(0.86,0.985,(_n_d_24466/_n_R_24291))*0.95)*_n_toward_24469);auto _n_right_24589=(1.0-_n_smooth_24302((-d::number(0.3)),0.3,_n_fc_24484));return (_n_left_24588*_n_right_24589);})())));
double _n_night_24485=(1.0-_n_smooth_24302((-d::number(0.12)),0.06,_n_day_24477));
if((d::truth((_n_night_24485>0.0))&&d::truth((_n_n2_24476>0.15)))){d::check_cancel();double _n_row_24486=((((_n_n0_24474+_n_n1_24475)*this->_n_s2_24323)*_n_R_24291)/4.0);
double _n_ri_24487=d::round(_n_row_24486);
if(d::truth((std::fabs((_n_row_24486-_n_ri_24487))<0.14))){d::check_cancel();double _n_seg_24488=std::floor(((d::at(this->_n_lon_24328,_n_k_24459)+(((_n_spin_24448/this->_n_LO_24330)*ascii::PI)*2.0))*26.0));
if(d::truth((_n_hash_24298(_n_seg_24488,(_n_ri_24487+40.0))>0.5))){d::check_cancel();double _n_pulse_24489=([&](){auto _n_argument_24590=(0.5+(0.5*std::sin((((_n_seg_24488*0.5)-((_n_t_24446*2.4)*(0.6+_n_hash_24298(_n_ri_24487,3.0))))+(_n_ri_24487*2.0)))));auto _n_argument_24591=8.0;return std::pow(_n_argument_24590,_n_argument_24591);})();
(void)((_n_s_24482=(_n_s_24482+((_n_night_24485*(0.3+(0.7*_n_pulse_24489)))*(0.3+(0.7*_n_n2_24476))))));
}
}
}
(void)((_n_v_24461=((_n_v_24461*(1.0-_n_sp_24467))+(_n_s_24482*_n_sp_24467))));
(void)((_n_floor_24462=(0.07*_n_sp_24467)));
}
double _n_dmx_24490=((_n_x_24458+0.5)-_n_mx_24453);
double _n_dmy_24491=(_n_y_24460-_n_my_24454);
double _n_dm_24492=std::sqrt(((_n_dmx_24490*_n_dmx_24490)+(_n_dmy_24491*_n_dmy_24491)));
if((d::truth((_n_dm_24492<(_n_mr_24456+0.6)))&&d::truth(([&]()->bool{auto _n_logical_24592=_n_front_24455;return d::truth(_n_logical_24592)?_n_logical_24592:(_n_sp_24467<0.5);})()))){d::check_cancel();double _n_a0_24493=(_n_dmx_24490/_n_mr_24456);
double _n_a1_24494=(_n_dmy_24491/_n_mr_24456);
double _n_z_24495=std::sqrt(d::maximum({0.0,((1.0-(_n_a0_24493*_n_a0_24493))-(_n_a1_24494*_n_a1_24494))}));
double _n_day_24496=(((_n_a0_24493*d::at(this->_n_L_24333,0.0))+(_n_a1_24494*d::at(this->_n_L_24333,1.0)))+(_n_z_24495*d::at(this->_n_L_24333,2.0)));
double _n_crater_24497=(0.75+(0.25*_n_fbm_24300(((_n_dmx_24490*0.6)+40.0),(_n_dmy_24491*0.6),2.0,0.0)));
double _n_s_24498=(([&](){auto _n_left_24593=_n_smooth_24302((-d::number(0.05)),0.25,_n_day_24496);auto _n_right_24594=(0.3+(0.8*d::maximum({0.0,_n_day_24496})));return (_n_left_24593*_n_right_24594);})()*_n_crater_24497);
(void)((_n_s_24498=(_n_s_24498+(([&](){auto _n_left_24595=_n_smooth_24302(0.75,1.0,(_n_dm_24492/_n_mr_24456));auto _n_right_24596=([&](){auto _n_argument_24597=0.2;auto _n_argument_24598=0.9;auto _n_argument_24599=((((_n_a0_24493*d::at(this->_n_L_24333,0.0))+(_n_a1_24494*d::at(this->_n_L_24333,1.0)))/d::maximum({0.001,(_n_dm_24492/_n_mr_24456)}))/this->_n_LH_24334);return _n_smooth_24302(_n_argument_24597,_n_argument_24598,_n_argument_24599);})();return (_n_left_24595*_n_right_24596);})()*0.7))));
(void)((_n_s_24498=d::maximum({_n_s_24498,0.05})));
double _n_edge_24499=_n_smooth_24302((_n_mr_24456+0.6),(_n_mr_24456-0.6),_n_dm_24492);
(void)((_n_v_24461=((_n_v_24461*(1.0-_n_edge_24499))+(_n_s_24498*_n_edge_24499))));
(void)((_n_floor_24462=d::maximum({(_n_floor_24462*(1.0-_n_edge_24499)),(0.22*_n_edge_24499)})));
}
double _n_peak_24500=d::maximum({_n_v_24461,0.0001});
double _n_level_24501=(_n_clamp_24301((_n_floor_24462+(((1.0-_n_floor_24462)*std::pow(_n_peak_24500,0.85))*0.95)))*_n_fade_24463);
double _n_step_24502=([&](){auto _n_argument_24600=0.0;auto _n_argument_24601=([&](){auto _n_argument_24602=3.0;auto _n_argument_24603=d::round(((_n_level_24501*3.0)+d::at(_n_BAYER_24297,((double(d::i32(_n_r_24457)&d::i32(3.0))*4.0)+double(d::i32(_n_x_24458)&d::i32(3.0))))));return d::minimum({_n_argument_24602,_n_argument_24603});})();return d::maximum({_n_argument_24600,_n_argument_24601});})();
(void)(([&](){auto&& _n_array_24604=this->_n_out_24307;auto _n_index_24605=_n_k_24459;auto _n_value_24606=d::at(_n_DOTS_24295,_n_step_24502);d::put(_n_array_24604,_n_index_24605,_n_value_24606);return _n_value_24606;})());
if(d::truth(_n_color_24447)){d::check_cancel();double _n_want_24503=(d::truth(_n_step_24502)?d::minimum({1.0,((_n_level_24501+0.06)/d::at(_n_COVER_24296,_n_step_24502))}):0.0);
double _n_g_24504=_n_clamp_24301(((0.3+(0.7*_n_want_24503))*(0.22+(0.78*_n_smooth_24302(0.0,0.6,_n_peak_24500)))));
(void)(([&](){auto&& _n_array_24607=d::read(_n_color_24447);auto _n_index_24608=_n_k_24459;auto _n_value_24609=this->_n_nearest_24309(_n_g_24504,_n_g_24504,_n_g_24504);d::put(_n_array_24607,_n_index_24608,_n_value_24609);return _n_value_24609;})());
}
}}
}}
d::Array<d::String,false> _n_lines_24505=d::Array<d::String,false>{};
{double _n_r_24506=0.0;
for(;d::truth((_n_r_24506<_n_H_24288));(void)((_n_r_24506++))){d::check_cancel();(void)(_n_lines_24505.push(d::join(this->_n_out_24307.slice((_n_r_24506*_n_W_24287),((_n_r_24506+1.0)*_n_W_24287)),d::String(u""))));
}}
return d::join(_n_lines_24505,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("planet-scale").cols)*ascii::catalog_meta("planet-scale").rows);auto _env=std::make_shared<_n_Record_24507>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &planet_scale_meta(){return catalog_meta("planet-scale");}
std::unique_ptr<Piece> make_planet_scale(const AsciiPieceOptions &o){return std::make_unique<Native_planet_scale>(o);}
}
