// Direct, statically typed C++ from src/pieces/kyoto-dusk.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_16326;
struct _n_Record_16394;
struct _n_Record_16698;
struct _n_Record_16326{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_16326> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16326>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_16394{
double _p_x{};
double _p_y{};
double _p_vx{};
double _p_vy{};
double _p_sw{};
double _p_sf{};
double _p_ph{};
double _p_tum{};
static std::shared_ptr<_n_Record_16394> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16394>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_sw=d::decode<double>(j["sw"]);out->_p_sf=d::decode<double>(j["sf"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_tum=d::decode<double>(j["tum"]);return out;}
};
struct _n_Record_16698{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_16698> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16698>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_16349(double _a0,double _a1);
double _n_noise_16350(double _a0,double _a1,double _a2);
double _n_fbm_16351(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_16352(double _a0);
double _n_smooth_16353(double _a0,double _a1,double _a2);
double _n_mix_16354(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_16355(d::String _a0);
d::Array<double,false> _n_seg_16356(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
double _n_pagoda_16360(double _a0,double _a1);
std::shared_ptr<_n_Record_16326> _n_meta_16325=[](){return ([&](){auto _n_object_16701=std::make_shared<_n_Record_16326>();_n_object_16701->_p_name=d::String(u"kyoto dusk");_n_object_16701->_p_category=d::String(u"scenes");_n_object_16701->_p_note=d::String(u"a pagoda at dusk behind a cherry tree lit by a stone lantern");_n_object_16701->_p_cols=200.0;_n_object_16701->_p_rows=100.0;_n_object_16701->_p_cell=1.0;_n_object_16701->_p_fps=15.0;_n_object_16701->_p_ground=d::String(u"#0b0a16");_n_object_16701->_p_palette=d::Array<d::String,false>{d::String(u"#1c1d4a"),d::String(u"#262759"),d::String(u"#33316b"),d::String(u"#433d7c"),d::String(u"#574a8c"),d::String(u"#6e5a9a"),d::String(u"#8a5a92"),d::String(u"#a8668f"),d::String(u"#c4748f"),d::String(u"#db8a95"),d::String(u"#ec9f9c"),d::String(u"#f6b8a8"),d::String(u"#fbd0b8"),d::String(u"#fff1d8"),d::String(u"#fffaf0"),d::String(u"#7e5f9e"),d::String(u"#f9d3dc"),d::String(u"#f2b2c4"),d::String(u"#e28fab"),d::String(u"#c66e92"),d::String(u"#9c5279"),d::String(u"#74405f"),d::String(u"#ffd9a0"),d::String(u"#ffbb6a"),d::String(u"#f29a4a"),d::String(u"#d0763a"),d::String(u"#a35a35"),d::String(u"#2a2240"),d::String(u"#3a2c50"),d::String(u"#4a3860"),d::String(u"#5b4f86"),d::String(u"#7a6aa0"),d::String(u"#2c3a3a"),d::String(u"#3d4c46"),d::String(u"#56604f"),d::String(u"#9a6aa0"),d::String(u"#b47ea6"),d::String(u"#4a3038"),d::String(u"#6a4448"),d::String(u"#2b3a6a"),d::String(u"#3e4f86")};return _n_object_16701;})();}();
const double _n_W_16327=[](){return 200.0;}();
const double _n_H_16328=[](){return 100.0;}();
const double _n_SHORE_16329=[](){return 80.0;}();
const double _n_PX_16330=[](){return 141.0;}();
d::Array<double,false> _n_MOON_16331=[](){return d::Array<double,false>{176.0,17.0};}();
const double _n_LX_16332=[](){return 53.0;}();
const double _n_LB_16333=[](){return 98.0;}();
const double _n_LS_16334=[](){return 1.8;}();
d::Array<double,false> _n_LAMP_16335=[](){return d::Array<double,false>{_n_LX_16332,(_n_LB_16333-((_n_LB_16333-83.0)*_n_LS_16334))};}();
const d::String _n_DOTS_16336=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_16337=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_16338=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_16402=_a0;
return ((_n_v_16402/16.0)-0.47);});}();
const double _n_SKY_16339=[](){return 0.0;}();
const double _n_HILL_16340=[](){return 1.0;}();
const double _n_TOWN_16341=[](){return 2.0;}();
const double _n_PAGODA_16342=[](){return 3.0;}();
const double _n_POND_16343=[](){return 4.0;}();
const double _n_BANK_16344=[](){return 5.0;}();
const double _n_TREE_16345=[](){return 6.0;}();
const double _n_BLOOM_16346=[](){return 7.0;}();
const double _n_STONE_16347=[](){return 8.0;}();
const double _n_FLAME_16348=[](){return 9.0;}();
d::Array<double,false> _n_EAVE_16357=[](){return d::Array<double,false>{68.5,58.0,48.5,40.0,32.5};}();
d::Array<double,false> _n_ROOF_16358=[](){return d::Array<double,false>{14.5,13.4,12.3,11.2,10.1};}();
d::Array<double,false> _n_BODY_16359=[](){return d::Array<double,false>{6.4,5.9,5.4,4.9,4.4};}();
double _n_hash_16349(double _a0,double _a1){double _n_x_16403=_a0;
double _n_y_16404=_a1;
{
double _n_h_16405=([&](){auto _n_left_16702=d::imul(double(d::i32(_n_x_16403)|d::i32(0.0)),374761393.0);auto _n_right_16703=d::imul(double(d::i32(_n_y_16404)|d::i32(0.0)),668265263.0);return (_n_left_16702+_n_right_16703);})();
(void)((_n_h_16405=d::imul(double(d::i32(_n_h_16405)^d::i32(double(d::u32(_n_h_16405)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_16405)^d::i32(double(d::u32(_n_h_16405)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_16350(double _a0,double _a1,double _a2){double _n_x_16406=_a0;
double _n_y_16407=_a1;
double _n_period_16408=_a2;
{
double _n_xi_16409=std::floor(_n_x_16406);
double _n_yi_16410=std::floor(_n_y_16407);
double _n_fx_16411=(_n_x_16406-_n_xi_16409);
double _n_fy_16412=(_n_y_16407-_n_yi_16410);
double _n_u_16413=((_n_fx_16411*_n_fx_16411)*(3.0-(2.0*_n_fx_16411)));
double _n_v_16414=((_n_fy_16412*_n_fy_16412)*(3.0-(2.0*_n_fy_16412)));
double _n_x0_16415=_n_xi_16409;
double _n_x1_16416=(_n_xi_16409+1.0);
if(d::truth(_n_period_16408)){d::check_cancel();(void)((_n_x0_16415=d::mod((d::mod(_n_xi_16409,_n_period_16408)+_n_period_16408),_n_period_16408)));
(void)((_n_x1_16416=d::mod((_n_x0_16415+1.0),_n_period_16408)));
}
double _n_a_16417=_n_hash_16349(_n_x0_16415,_n_yi_16410);
double _n_b_16418=_n_hash_16349(_n_x1_16416,_n_yi_16410);
double _n_c_16419=_n_hash_16349(_n_x0_16415,(_n_yi_16410+1.0));
double _n_d_16420=_n_hash_16349(_n_x1_16416,(_n_yi_16410+1.0));
return (((_n_a_16417+((_n_b_16418-_n_a_16417)*_n_u_16413))+((_n_c_16419-_n_a_16417)*_n_v_16414))+(((((_n_a_16417-_n_b_16418)-_n_c_16419)+_n_d_16420)*_n_u_16413)*_n_v_16414));

}
}

double _n_fbm_16351(double _a0,double _a1,double _a2,double _a3){double _n_x_16421=_a0;
double _n_y_16422=_a1;
double _n_octaves_16423=_a2;
double _n_period_16424=_a3;
{
double _n_s_16425=0.0;
double _n_n_16426=0.0;
double _n_amp_16427=0.5;
double _n_f_16428=1.0;
{double _n_i_16429=0.0;
for(;d::truth((_n_i_16429<_n_octaves_16423));(void)((_n_i_16429++))){d::check_cancel();(void)((_n_s_16425=(_n_s_16425+(_n_amp_16427*_n_noise_16350((_n_x_16421*_n_f_16428),(_n_y_16422*_n_f_16428),(_n_period_16424*_n_f_16428))))));
(void)((_n_n_16426=(_n_n_16426+_n_amp_16427)));
(void)((_n_amp_16427=(_n_amp_16427*0.5)));
(void)((_n_f_16428=(_n_f_16428*2.0)));
}}
return (_n_s_16425/_n_n_16426);

}
}

double _n_clamp_16352(double _a0){double _n_v_16430=_a0;
return (d::truth((_n_v_16430<0.0))?0.0:(d::truth((_n_v_16430>1.0))?1.0:_n_v_16430));}

double _n_smooth_16353(double _a0,double _a1,double _a2){double _n_a_16431=_a0;
double _n_b_16432=_a1;
double _n_v_16433=_a2;
{
double _n_k_16434=_n_clamp_16352(((_n_v_16433-_n_a_16431)/(_n_b_16432-_n_a_16431)));
return ((_n_k_16434*_n_k_16434)*(3.0-(2.0*_n_k_16434)));

}
}

double _n_mix_16354(double _a0,double _a1,double _a2){double _n_a_16435=_a0;
double _n_b_16436=_a1;
double _n_k_16437=_a2;
return (_n_a_16435+((_n_b_16436-_n_a_16435)*_n_k_16437));}

d::Array<double,false> _n_hex_16355(d::String _a0){d::String _n_s_16438=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_16439=_a0;
return (([&](){auto _n_argument_16704=d::slice(_n_s_16438,_n_i_16439,(_n_i_16439+2.0));auto _n_argument_16705=16.0;return d::parseInt(_n_argument_16704,_n_argument_16705);})()/255.0);});}

d::Array<double,false> _n_seg_16356(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_16440=_a0;
double _n_py_16441=_a1;
double _n_ax_16442=_a2;
double _n_ay_16443=_a3;
double _n_bx_16444=_a4;
double _n_by_16445=_a5;
{
double _n_dx_16446=(_n_bx_16444-_n_ax_16442);
double _n_dy_16447=(_n_by_16445-_n_ay_16443);
double _n_k_16448=_n_clamp_16352(((((_n_px_16440-_n_ax_16442)*_n_dx_16446)+((_n_py_16441-_n_ay_16443)*_n_dy_16447))/((_n_dx_16446*_n_dx_16446)+(_n_dy_16447*_n_dy_16447))));
double _n_ex_16449=((_n_ax_16442+(_n_dx_16446*_n_k_16448))-_n_px_16440);
double _n_ey_16450=((_n_ay_16443+(_n_dy_16447*_n_k_16448))-_n_py_16441);
return d::Array<double,false>{std::sqrt(((_n_ex_16449*_n_ex_16449)+(_n_ey_16450*_n_ey_16450))),_n_k_16448};

}
}

double _n_pagoda_16360(double _a0,double _a1){double _n_dx_16451=_a0;
double _n_y_16452=_a1;
{
double _n_ax_16453=std::fabs(_n_dx_16451);
if((d::truth((_n_y_16452>=76.0))&&d::truth((_n_y_16452<(_n_SHORE_16329+0.5))))){d::check_cancel();return (d::truth((_n_ax_16453<=(9.5-(d::truth((_n_y_16452<77.0))?1.0:0.0))))?1.0:0.0);
}
{double _n_i_16454=0.0;
for(;d::truth((_n_i_16454<5.0));(void)((_n_i_16454++))){d::check_cancel();double _n_e_16455=d::at(_n_EAVE_16357,_n_i_16454);
double _n_R_16456=d::at(_n_ROOF_16358,_n_i_16454);
double _n_u_16457=(_n_ax_16453/_n_R_16456);
if(d::truth((_n_u_16457<=1.0))){d::check_cancel();double _n_lift_16458=((((3.5*_n_u_16457)*_n_u_16457)*_n_u_16457)*_n_u_16457);
double _n_bottom_16459=((_n_e_16455-_n_lift_16458)+0.6);
double _n_top_16460=(((_n_e_16455-_n_lift_16458)-1.2)-(3.6*std::pow((1.0-_n_u_16457),1.7)));
if((d::truth((_n_y_16452>=_n_top_16460))&&d::truth((_n_y_16452<_n_bottom_16459)))){d::check_cancel();if(d::truth((_n_y_16452<(_n_top_16460+0.9)))){d::check_cancel();return 4.0;
}
if(d::truth((_n_y_16452>(_n_bottom_16459-1.0)))){d::check_cancel();return 3.0;
}
return 2.0;
}
}
double _n_floor_16461=(d::truth((_n_i_16454==0.0))?76.0:(d::at(_n_EAVE_16357,(_n_i_16454-1.0))-3.6));
if(((d::truth((_n_y_16452>=(_n_e_16455+0.6)))&&d::truth((_n_y_16452<_n_floor_16461)))&&d::truth((_n_ax_16453<=d::at(_n_BODY_16359,_n_i_16454))))){d::check_cancel();if((((d::truth((_n_i_16454==0.0))&&d::truth((_n_ax_16453<=1.0)))&&d::truth((_n_y_16452>72.0)))&&d::truth((_n_y_16452<75.5)))){d::check_cancel();return 6.0;
}
if((d::truth((_n_y_16452<(_n_e_16455+2.0)))&&d::truth((_n_ax_16453<=(d::at(_n_BODY_16359,_n_i_16454)+1.2))))){d::check_cancel();return 3.0;
}
return 1.0;
}
if((((d::truth((_n_i_16454>0.0))&&d::truth((_n_y_16452>=(_n_e_16455+0.6))))&&d::truth((_n_y_16452<(_n_e_16455+2.0))))&&d::truth((_n_ax_16453<=(d::at(_n_BODY_16359,_n_i_16454)+1.2))))){d::check_cancel();return 3.0;
}
}}
double _n_top_16462=(((d::at(_n_EAVE_16357,4.0)-1.2)-3.6)-0.2);
if((d::truth((_n_y_16452<_n_top_16462))&&d::truth((_n_y_16452>=9.0)))){d::check_cancel();if(d::truth((_n_y_16452>=(_n_top_16462-1.5)))){d::check_cancel();return (d::truth((_n_ax_16453<=2.4))?3.0:0.0);
}
if((d::truth((_n_y_16452>=15.0))&&d::truth((_n_y_16452<(_n_top_16462-1.5))))){d::check_cancel();double _n_ring_16463=double(d::i32(std::floor(((_n_y_16452-15.0)/1.2)))&d::i32(1.0));
return (d::truth((_n_ax_16453<=(d::truth(_n_ring_16463)?1.4:0.55)))?5.0:0.0);
}
if(d::truth((_n_y_16452>=12.0))){d::check_cancel();return (d::truth((_n_ax_16453<=(1.3-((_n_y_16452-12.0)*0.2))))?5.0:0.0);
}
return (d::truth((_n_ax_16453<=0.6))?5.0:0.0);
}
return 0.0;

}
}

struct Native_kyoto_dusk final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_16361{};
double _n_N_16362{};
d::Array<d::String,false> _n_out_16363{};
d::Array<uint8_t,true> _n_lut_16364{};
d::Array<uint8_t,true> _n_mat_16366{};
d::Array<float,true> _n_R_16367{};
d::Array<float,true> _n_G_16368{};
d::Array<float,true> _n_B_16369{};
d::Array<float,true> _n_floorA_16370{};
d::Array<float,true> _n_warmth_16371{};
d::Array<d::Array<double,false>,false> _n_branches_16376{};
double _n_limbs_16377{};
d::Array<d::Array<double,false>,false> _n_clusters_16378{};
d::Array<float,true> _n_RR_16380{};
d::Array<float,true> _n_RG_16381{};
d::Array<float,true> _n_RB_16382{};
d::Array<float,true> _n_glow_16385{};
d::Array<d::Array<double,false>,false> _n_stars_16386{};
double _n_CW_16387{};
double _n_C0_16388{};
double _n_C1_16389{};
d::Array<float,true> _n_ccov_16391{};
d::Array<float,true> _n_clit_16392{};
d::Array<std::shared_ptr<_n_Record_16394>,false> _n_petals_16393{};
d::Array<d::Array<double,false>,false> _n_floaters_16395{};
d::Array<float,true> _n_dith_16396{};
d::Array<float,true> _n_tone_16397{};
d::Array<float,true> _n_pr_16398{};
d::Array<float,true> _n_pg_16399{};
d::Array<float,true> _n_pb_16400{};
d::Array<uint8_t,true> _n_pmask_16401{};
std::function<d::String(double,std::shared_ptr<_n_Record_16698>)> _render;
double _n_nearest_16365(double _a0,double _a1,double _a2){double _n_r_16464=_a0;
double _n_g_16465=_a1;
double _n_b_16466=_a2;
{
double _n_k_16467=([&](){auto _n_left_16938=([&](){auto _n_left_16940=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_16464*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_16941=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_16465*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_16940)|d::i32(_n_right_16941));})();auto _n_right_16939=d::minimum({31.0,double(d::i32((_n_b_16466*31.99))|d::i32(0.0))});return double(d::i32(_n_left_16938)|d::i32(_n_right_16939));})();
if(d::truth((d::at(this->_n_lut_16364,_n_k_16467)!=255.0))){d::check_cancel();return d::at(this->_n_lut_16364,_n_k_16467);
}
double _n_best_16468=0.0;
double _n_bd_16469=1000000000.0;
{double _n_i_16470=0.0;
for(;d::truth((_n_i_16470<double(this->_n_P_16361.size())));(void)((_n_i_16470++))){d::check_cancel();double _n_dr_16471=(d::at(d::at(this->_n_P_16361,_n_i_16470),0.0)-_n_r_16464);
double _n_dg_16472=(d::at(d::at(this->_n_P_16361,_n_i_16470),1.0)-_n_g_16465);
double _n_db_16473=(d::at(d::at(this->_n_P_16361,_n_i_16470),2.0)-_n_b_16466);
double _n_d_16474=((((0.3*_n_dr_16471)*_n_dr_16471)+((0.5*_n_dg_16472)*_n_dg_16472))+((0.2*_n_db_16473)*_n_db_16473));
if(d::truth((_n_d_16474<_n_bd_16469))){d::check_cancel();(void)(((_n_bd_16469=_n_d_16474),(_n_best_16468=_n_i_16470)));
}
}}
return ([&](){auto&& _n_array_16942=this->_n_lut_16364;auto _n_index_16943=_n_k_16467;auto _n_value_16944=_n_best_16468;d::put(_n_array_16942,_n_index_16943,_n_value_16944);return _n_value_16944;})();

}
}

d::Array<double,false> _n_skyAt_16372(double _a0,double _a1){double _n_x_16475=_a0;
double _n_y_16476=_a1;
{
double _n_v_16477=_n_clamp_16352((_n_y_16476/_n_SHORE_16329));
double _n_west_16478=std::exp(((-d::number(std::fabs((_n_x_16475-80.0))))/120.0));
double _n_a_16479=_n_smooth_16353(0.0,0.5,_n_v_16477);
double _n_r_16480=_n_mix_16354(0.07,0.22,_n_a_16479);
double _n_g_16481=_n_mix_16354(0.07,0.14,_n_a_16479);
double _n_b_16482=_n_mix_16354(0.25,0.38,_n_a_16479);
(void)((_n_a_16479=_n_smooth_16353(0.42,0.86,_n_v_16477)));
(void)((((_n_r_16480=_n_mix_16354(_n_r_16480,0.52,_n_a_16479)),(_n_g_16481=_n_mix_16354(_n_g_16481,0.32,_n_a_16479))),(_n_b_16482=_n_mix_16354(_n_b_16482,0.58,_n_a_16479))));
(void)((_n_a_16479=(_n_smooth_16353(0.78,0.98,_n_v_16477)*(0.55+(0.45*_n_west_16478)))));
(void)((((_n_r_16480=_n_mix_16354(_n_r_16480,1.0,_n_a_16479)),(_n_g_16481=_n_mix_16354(_n_g_16481,0.62,_n_a_16479))),(_n_b_16482=_n_mix_16354(_n_b_16482,0.48,_n_a_16479))));
double _n_band_16483=((std::exp(((-d::number(std::fabs((_n_y_16476-74.0))))/4.0))*_n_west_16478)*0.18);
(void)((((_n_r_16480=(_n_r_16480+_n_band_16483)),(_n_g_16481=(_n_g_16481+(_n_band_16483*0.66)))),(_n_b_16482=(_n_b_16482+(_n_band_16483*0.45)))));
double _n_veil_16484=(0.86+(0.28*_n_fbm_16351((_n_x_16475*0.035),(_n_y_16476*0.09),3.0,0.0)));
(void)((((_n_r_16480=(_n_r_16480*_n_veil_16484)),(_n_g_16481=(_n_g_16481*_n_veil_16484))),(_n_b_16482=(_n_b_16482*_n_veil_16484))));
double _n_dx_16485=(_n_x_16475-d::at(_n_MOON_16331,0.0));
double _n_dy_16486=(_n_y_16476-d::at(_n_MOON_16331,1.0));
double _n_d_16487=std::sqrt(((_n_dx_16485*_n_dx_16485)+(_n_dy_16486*_n_dy_16486)));
double _n_halo_16488=([&](){auto _n_left_16945=(std::exp(((-d::number(_n_d_16487))/5.0))*0.24);auto _n_right_16946=(std::exp(((-d::number(_n_d_16487))/16.0))*0.07);return (_n_left_16945+_n_right_16946);})();
(void)((((_n_r_16480=(_n_r_16480+(_n_halo_16488*0.75))),(_n_g_16481=(_n_g_16481+(_n_halo_16488*0.72)))),(_n_b_16482=(_n_b_16482+_n_halo_16488))));
return d::Array<double,false>{_n_r_16480,_n_g_16481,_n_b_16482};

}
}

double _n_hillA_16373(double _a0){double _n_x_16489=_a0;
return (77.5-([&](){auto _n_left_16947=(3.0+(13.0*_n_smooth_16353(70.0,175.0,_n_x_16489)));auto _n_right_16948=(0.3+(1.1*_n_fbm_16351(((_n_x_16489*0.022)+3.0),1.0,4.0,0.0)));return (_n_left_16947*_n_right_16948);})());}

double _n_hillB_16374(double _a0){double _n_x_16490=_a0;
return (77.0-(2.5*_n_fbm_16351(((_n_x_16490*0.04)+9.0),2.0,4.0,0.0)));}

double _n_town_16375(double _a0){double _n_x_16491=_a0;
{
double _n_i_16492=std::floor(((_n_x_16491+3.0)/11.0));
double _n_f_16493=(((_n_x_16491+3.0)/11.0)-_n_i_16492);
double _n_h_16494=(2.0+(_n_hash_16349(_n_i_16492,5.0)*2.5));
double _n_e_16495=(std::fabs((_n_f_16493-0.5))*2.0);
return (d::truth((_n_e_16495>0.86))?_n_SHORE_16329:(((_n_SHORE_16329-1.0)-_n_h_16494)+(d::maximum({0.0,(_n_e_16495-0.35)})*6.0)));

}
}

double _n_bankX_16379(double _a0){double _n_y_16528=_a0;
return ((38.0+((_n_y_16528-_n_SHORE_16329)*2.3))+(4.0*_n_fbm_16351((_n_y_16528*0.2),4.0,2.0,0.0)));}

double _n_lantern_16383(double _a0,double _a1){double _n_dx_16554=_a0;
double _n_y_16555=_a1;
{
double _n_ax_16556=std::fabs(_n_dx_16554);
if((d::truth((_n_y_16555>=93.5))&&d::truth((_n_y_16555<_n_LB_16333)))){d::check_cancel();return (d::truth((_n_ax_16556<=(4.2-(d::truth((_n_y_16555<94.5))?0.8:0.0))))?1.0:0.0);
}
if((d::truth((_n_y_16555>=87.0))&&d::truth((_n_y_16555<93.5)))){d::check_cancel();return (d::truth((_n_ax_16556<=1.4))?1.0:0.0);
}
if((d::truth((_n_y_16555>=85.5))&&d::truth((_n_y_16555<87.0)))){d::check_cancel();return (d::truth((_n_ax_16556<=(3.6-(d::truth((_n_y_16555<86.2))?0.6:0.0))))?1.0:0.0);
}
if((d::truth((_n_y_16555>=80.0))&&d::truth((_n_y_16555<85.5)))){d::check_cancel();if(((d::truth((_n_ax_16556<=1.7))&&d::truth((_n_y_16555>=80.8)))&&d::truth((_n_y_16555<84.8)))){d::check_cancel();return 2.0;
}
return (d::truth((_n_ax_16556<=2.9))?1.0:0.0);
}
if((d::truth((_n_y_16555>=76.5))&&d::truth((_n_y_16555<80.0)))){d::check_cancel();double _n_u_16557=((80.0-_n_y_16555)/3.5);
double _n_hw_16558=((5.6-(4.1*std::pow(_n_u_16557,0.8)))+(d::truth((_n_y_16555>79.2))?0.6:0.0));
return (d::truth((_n_ax_16556<=_n_hw_16558))?3.0:0.0);
}
if((d::truth((_n_y_16555>=73.5))&&d::truth((_n_y_16555<76.5)))){d::check_cancel();return (d::truth((_n_ax_16556<=(1.3-(std::fabs((_n_y_16555-75.0))*0.25))))?3.0:(d::truth((_n_ax_16556<=0.5))?3.0:0.0));
}
return 0.0;

}
}

double _n_at_16384(double _a0,double _a1){double _n_xc_16559=_a0;
double _n_y_16560=_a1;
return this->_n_lantern_16383(((_n_xc_16559-_n_LX_16332)/_n_LS_16334),(_n_LB_16333-((_n_LB_16333-_n_y_16560)/_n_LS_16334)));}

double _n_cdens_16390(double _a0,double _a1){double _n_x_16618=_a0;
double _n_y_16619=_a1;
return ([&](){auto _n_left_16949=_n_fbm_16351((_n_x_16618*0.014),(_n_y_16619*0.13),4.0,(this->_n_CW_16387*0.014));auto _n_right_16950=(0.3*(1.0-([&](){auto _n_left_16951=_n_smooth_16353(this->_n_C0_16388,(this->_n_C0_16388+10.0),_n_y_16619);auto _n_right_16952=_n_smooth_16353(this->_n_C1_16389,(this->_n_C1_16389-8.0),_n_y_16619);return (_n_left_16951*_n_right_16952);})()));return (_n_left_16949-_n_right_16950);})();}

explicit Native_kyoto_dusk(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_16361=d::map(_n_meta_16325->_p_palette,_n_hex_16355);
this->_n_N_16362=(_n_W_16327*_n_H_16328);
this->_n_out_16363=d::Array<d::String,false>(size_t(this->_n_N_16362));
this->_n_lut_16364=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_16366=d::Array<uint8_t,true>(size_t(this->_n_N_16362));
this->_n_R_16367=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_G_16368=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_B_16369=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_floorA_16370=d::Array<float,true>(size_t(this->_n_N_16362)).fill(0.12);
this->_n_warmth_16371=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_branches_16376=d::Array<d::Array<double,false>,false>{d::Array<double,false>{16.0,101.0,20.0,86.0,5.2,4.4},d::Array<double,false>{20.0,86.0,27.0,70.0,4.4,3.6},d::Array<double,false>{27.0,70.0,31.0,58.0,3.6,3.0},d::Array<double,false>{31.0,58.0,50.0,46.0,3.0,2.1},d::Array<double,false>{50.0,46.0,74.0,37.0,2.1,1.4},d::Array<double,false>{74.0,37.0,98.0,31.0,1.4,0.9},d::Array<double,false>{98.0,31.0,116.0,30.0,0.9,0.5},d::Array<double,false>{31.0,58.0,24.0,40.0,2.6,1.8},d::Array<double,false>{24.0,40.0,12.0,26.0,1.8,1.1},d::Array<double,false>{12.0,26.0,0.0,18.0,1.1,0.7},d::Array<double,false>{29.0,50.0,42.0,30.0,2.0,1.3},d::Array<double,false>{42.0,30.0,52.0,19.0,1.3,0.8},d::Array<double,false>{52.0,19.0,70.0,13.0,0.8,0.5},d::Array<double,false>{50.0,46.0,60.0,52.0,1.2,0.7},d::Array<double,false>{74.0,37.0,86.0,44.0,1.0,0.5},d::Array<double,false>{42.0,30.0,66.0,24.0,1.0,0.6},d::Array<double,false>{66.0,24.0,90.0,21.0,0.6,0.4},d::Array<double,false>{24.0,40.0,34.0,25.0,1.0,0.6},d::Array<double,false>{12.0,26.0,6.0,16.0,0.7,0.4},d::Array<double,false>{98.0,31.0,104.0,40.0,0.6,0.35},d::Array<double,false>{40.0,51.0,44.0,58.0,1.1,0.4},d::Array<double,false>{58.0,43.0,62.0,55.0,0.9,0.35},d::Array<double,false>{70.0,38.0,76.0,47.0,0.7,0.3}};
this->_n_limbs_16377=double(this->_n_branches_16376.size());
{double _n_b_16496=3.0;
for(;d::truth((_n_b_16496<this->_n_limbs_16377));(void)((_n_b_16496++))){d::check_cancel();auto _n_binding_16706=d::at(this->_n_branches_16376,_n_b_16496);
double _n_ax_16497=d::at(_n_binding_16706,0.0);
double _n_ay_16498=d::at(_n_binding_16706,1.0);
double _n_bx_16499=d::at(_n_binding_16706,2.0);
double _n_by_16500=d::at(_n_binding_16706,3.0);
double _n_w0_16501=d::at(_n_binding_16706,4.0);
double _n_w1_16502=d::at(_n_binding_16706,5.0);
double _n_ang_16503=std::atan2((_n_by_16500-_n_ay_16498),(_n_bx_16499-_n_ax_16497));
{double _n_j_16504=0.0;
for(;d::truth((_n_j_16504<3.0));(void)((_n_j_16504++))){d::check_cancel();double _n_k_16505=(0.25+(0.65*_n_hash_16349(((_n_b_16496*7.0)+_n_j_16504),31.0)));
double _n_sx_16506=_n_mix_16354(_n_ax_16497,_n_bx_16499,_n_k_16505);
double _n_sy_16507=_n_mix_16354(_n_ay_16498,_n_by_16500,_n_k_16505);
double _n_turn_16508=((d::truth(double(d::i32(_n_j_16504)&d::i32(1.0)))?1.0:(-d::number(1.0)))*(0.5+(0.6*_n_hash_16349(_n_b_16496,(_n_j_16504+40.0)))));
double _n_len_16509=(4.0+(7.0*_n_hash_16349((_n_b_16496+_n_j_16504),41.0)));
double _n_a2_16510=((_n_ang_16503+_n_turn_16508)-0.25);
(void)(this->_n_branches_16376.push(d::Array<double,false>{_n_sx_16506,_n_sy_16507,(_n_sx_16506+(std::cos(_n_a2_16510)*_n_len_16509)),(_n_sy_16507+(std::sin(_n_a2_16510)*_n_len_16509)),(_n_mix_16354(_n_w0_16501,_n_w1_16502,_n_k_16505)*0.55),0.3}));
}}
}}
this->_n_clusters_16378=d::Array<d::Array<double,false>,false>{};
{double _n_b_16511=3.0;
for(;d::truth((_n_b_16511<double(this->_n_branches_16376.size())));(void)((_n_b_16511++))){d::check_cancel();auto _n_binding_16707=d::at(this->_n_branches_16376,_n_b_16511);
double _n_ax_16512=d::at(_n_binding_16707,0.0);
double _n_ay_16513=d::at(_n_binding_16707,1.0);
double _n_bx_16514=d::at(_n_binding_16707,2.0);
double _n_by_16515=d::at(_n_binding_16707,3.0);
double _n_w0_16516=d::at(_n_binding_16707,4.0);
double _n_len_16517=d::hypot(std::initializer_list<double>{(_n_bx_16514-_n_ax_16512),(_n_by_16515-_n_ay_16513)});
double _n_n_16518=(1.0+d::round((_n_len_16517/1.7)));
{double _n_i_16519=0.0;
for(;d::truth((_n_i_16519<=_n_n_16518));(void)((_n_i_16519++))){d::check_cancel();double _n_k_16520=(_n_i_16519/_n_n_16518);
if((d::truth((_n_k_16520<0.3))&&d::truth((_n_w0_16516>2.0)))){d::check_cancel();continue;
}
double _n_h1_16521=_n_hash_16349(((_n_b_16511*13.0)+_n_i_16519),7.0);
double _n_h2_16522=_n_hash_16349(((_n_b_16511*5.0)+_n_i_16519),11.0);
double _n_h3_16523=_n_hash_16349(((_n_b_16511*3.0)+_n_i_16519),17.0);
double _n_cx_16524=(_n_mix_16354(_n_ax_16512,_n_bx_16514,_n_k_16520)+((_n_h1_16521-0.5)*6.0));
double _n_cy_16525=((_n_mix_16354(_n_ay_16513,_n_by_16515,_n_k_16520)+((_n_h2_16522-0.5)*4.5))-1.0);
bool _n_spray_16526=([&]()->bool{auto _n_logical_16708=([&]()->bool{auto _n_logical_16709=(_n_b_16511>=(this->_n_limbs_16377-3.0));return d::truth(_n_logical_16709)?(_n_b_16511<this->_n_limbs_16377):_n_logical_16709;})();return d::truth(_n_logical_16708)?_n_logical_16708:(_n_b_16511>=(this->_n_limbs_16377+(3.0*(this->_n_limbs_16377-6.0))));})();
double _n_dome_16527=(9.0+(10.0*([&](){auto _n_argument_16710=_n_clamp_16352((std::fabs((_n_cx_16524-52.0))/70.0));auto _n_argument_16711=1.6;return std::pow(_n_argument_16710,_n_argument_16711);})()));
if(((d::truth((_n_cx_16524>122.0))||d::truth((_n_cy_16525<_n_dome_16527)))||d::truth((_n_cy_16525>(d::truth(_n_spray_16526)?55.0:47.0))))){d::check_cancel();continue;
}
(void)(this->_n_clusters_16378.push(d::Array<double,false>{_n_cx_16524,_n_cy_16525,((1.4+(1.6*_n_h3_16523))+(0.8*_n_k_16520))}));
}}
}}
{double _n_r_16529=0.0;
for(;d::truth((_n_r_16529<_n_H_16328));(void)((_n_r_16529++))){d::check_cancel();{double _n_x_16530=0.0;
for(;d::truth((_n_x_16530<_n_W_16327));(void)((_n_x_16530++))){d::check_cancel();double _n_k_16531=((_n_r_16529*_n_W_16327)+_n_x_16530);
double _n_y_16532=(_n_r_16529+0.5);
double _n_xc_16533=(_n_x_16530+0.5);
double _n_m_16534=_n_SKY_16339;
std::optional<double> _n_cr_16535{};
std::optional<double> _n_cg_16536{};
std::optional<double> _n_cb_16537{};
double _n_fl_16538=0.12;
double _n_warm_16539=0.0;
if(d::truth((_n_y_16532<_n_SHORE_16329))){d::check_cancel();(void)(([&](){auto _n_unpack_16712=this->_n_skyAt_16372(_n_xc_16533,_n_y_16532);_n_cr_16535=std::optional<double>(d::at(_n_unpack_16712,0.0));_n_cg_16536=std::optional<double>(d::at(_n_unpack_16712,1.0));_n_cb_16537=std::optional<double>(d::at(_n_unpack_16712,2.0));return _n_unpack_16712;})());
(void)((_n_fl_16538=0.04));
if(d::truth((_n_y_16532>=this->_n_hillA_16373(_n_xc_16533)))){d::check_cancel();(void)((_n_m_16534=_n_HILL_16340));
d::Array<double,false> _n_s_16540=([&](){auto _n_argument_16713=_n_xc_16533;auto _n_argument_16714=this->_n_hillA_16373(_n_xc_16533);return this->_n_skyAt_16372(_n_argument_16713,_n_argument_16714);})();
double _n_d_16541=([&](){auto _n_argument_16715=this->_n_hillA_16373(_n_xc_16533);auto _n_argument_16716=(this->_n_hillA_16373(_n_xc_16533)+8.0);auto _n_argument_16717=_n_y_16532;return _n_smooth_16353(_n_argument_16715,_n_argument_16716,_n_argument_16717);})();
double _n_tex_16542=_n_fbm_16351((_n_xc_16533*0.3),(_n_y_16532*0.45),3.0,0.0);
double _n_a_16543=((0.6+(0.2*_n_d_16541))+(0.25*(_n_tex_16542-0.5)));
(void)(((d::read((_n_cr_16535=std::optional<double>(_n_mix_16354(d::at(_n_s_16540,0.0),0.14,_n_a_16543)))),d::read((_n_cg_16536=std::optional<double>(_n_mix_16354(d::at(_n_s_16540,1.0),0.08,_n_a_16543))))),d::read((_n_cb_16537=std::optional<double>(_n_mix_16354(d::at(_n_s_16540,2.0),0.24,_n_a_16543))))));
double _n_lip_16544=(([&](){auto _n_argument_16718=(this->_n_hillA_16373(_n_xc_16533)+1.4);auto _n_argument_16719=this->_n_hillA_16373(_n_xc_16533);auto _n_argument_16720=_n_y_16532;return _n_smooth_16353(_n_argument_16718,_n_argument_16719,_n_argument_16720);})()*0.3);
(void)(((d::read((_n_cr_16535=std::optional<double>(_n_mix_16354(d::read(_n_cr_16535),(d::at(_n_s_16540,0.0)*1.1),_n_lip_16544)))),d::read((_n_cg_16536=std::optional<double>(_n_mix_16354(d::read(_n_cg_16536),(d::at(_n_s_16540,1.0)*1.05),_n_lip_16544))))),d::read((_n_cb_16537=std::optional<double>(_n_mix_16354(d::read(_n_cb_16537),d::at(_n_s_16540,2.0),_n_lip_16544))))));
}
if(d::truth((_n_y_16532>=this->_n_hillB_16374(_n_xc_16533)))){d::check_cancel();(void)((_n_m_16534=_n_HILL_16340));
double _n_tex_16545=_n_fbm_16351((_n_xc_16533*0.3),(_n_y_16532*0.3),3.0,0.0);
(void)(((d::read((_n_cr_16535=std::optional<double>((0.1+(0.05*_n_tex_16545))))),d::read((_n_cg_16536=std::optional<double>((0.07+(0.03*_n_tex_16545)))))),d::read((_n_cb_16537=std::optional<double>((0.17+(0.05*_n_tex_16545)))))));
double _n_mist_16546=(([&](){auto _n_argument_16721=(this->_n_hillB_16374(_n_xc_16533)+1.0);auto _n_argument_16722=_n_SHORE_16329;auto _n_argument_16723=_n_y_16532;return _n_smooth_16353(_n_argument_16721,_n_argument_16722,_n_argument_16723);})()*0.5);
(void)(((d::read((_n_cr_16535=std::optional<double>(_n_mix_16354(d::read(_n_cr_16535),0.7,_n_mist_16546)))),d::read((_n_cg_16536=std::optional<double>(_n_mix_16354(d::read(_n_cg_16536),0.44,_n_mist_16546))))),d::read((_n_cb_16537=std::optional<double>(_n_mix_16354(d::read(_n_cb_16537),0.58,_n_mist_16546))))));
}
if((d::truth((_n_y_16532>=this->_n_town_16375(_n_xc_16533)))&&d::truth((_n_xc_16533>70.0)))){d::check_cancel();(void)((_n_m_16534=_n_TOWN_16341));
(void)(((d::read((_n_cr_16535=std::optional<double>(0.08))),d::read((_n_cg_16536=std::optional<double>(0.06)))),d::read((_n_cb_16537=std::optional<double>(0.14)))));
double _n_tf_16547=(std::fabs((d::mod(((_n_xc_16533+3.0)/11.0),1.0)-0.5))*2.0);
if((d::truth((_n_y_16532<(this->_n_town_16375(_n_xc_16533)+0.9)))&&d::truth((_n_tf_16547<0.45)))){d::check_cancel();(void)((((d::read((_n_cr_16535=std::optional<double>(0.5))),d::read((_n_cg_16536=std::optional<double>(0.31)))),d::read((_n_cb_16537=std::optional<double>(0.44)))),(_n_fl_16538=0.06)));
}
double _n_wi_16548=std::floor((_n_xc_16533/4.0));
if((((d::truth((_n_y_16532>(_n_SHORE_16329-1.6)))&&d::truth((_n_y_16532<(_n_SHORE_16329-0.5))))&&d::truth((d::mod(_n_xc_16533,4.0)<1.2)))&&d::truth((_n_hash_16349(_n_wi_16548,7.0)>0.74)))){d::check_cancel();(void)(((d::read((_n_cr_16535=std::optional<double>(1.0))),d::read((_n_cg_16536=std::optional<double>(0.66)))),d::read((_n_cb_16537=std::optional<double>(0.32)))));
(void)((_n_fl_16538=0.3));
}
}
double _n_p_16549=_n_pagoda_16360((_n_xc_16533-_n_PX_16330),_n_y_16532);
if(d::truth(_n_p_16549)){d::check_cancel();(void)((_n_m_16534=_n_PAGODA_16342));
double _n_dx_16550=(_n_xc_16533-_n_PX_16330);
double _n_rim_16551=std::exp(((-d::number(std::fabs((_n_dx_16550+4.0))))/30.0));
if(d::truth((_n_p_16549==1.0))){d::check_cancel();(void)(((d::read((_n_cr_16535=std::optional<double>(0.07))),d::read((_n_cg_16536=std::optional<double>(0.05)))),d::read((_n_cb_16537=std::optional<double>(0.12)))));
}else {d::check_cancel();if(d::truth((_n_p_16549==2.0))){d::check_cancel();(void)(((d::read((_n_cr_16535=std::optional<double>((0.2+(0.08*_n_rim_16551))))),d::read((_n_cg_16536=std::optional<double>((0.13+(0.03*_n_rim_16551)))))),d::read((_n_cb_16537=std::optional<double>((0.27+(0.04*_n_rim_16551)))))));
}else {d::check_cancel();if(d::truth((_n_p_16549==3.0))){d::check_cancel();(void)(((d::read((_n_cr_16535=std::optional<double>(0.05))),d::read((_n_cg_16536=std::optional<double>(0.04)))),d::read((_n_cb_16537=std::optional<double>(0.1)))));
}else {d::check_cancel();if(d::truth((_n_p_16549==4.0))){d::check_cancel();(void)(((d::read((_n_cr_16535=std::optional<double>(((0.9*_n_rim_16551)+0.25)))),d::read((_n_cg_16536=std::optional<double>(((0.5*_n_rim_16551)+0.15))))),d::read((_n_cb_16537=std::optional<double>(((0.5*_n_rim_16551)+0.3))))));
}else {d::check_cancel();if(d::truth((_n_p_16549==5.0))){d::check_cancel();(void)(((d::read((_n_cr_16535=std::optional<double>((0.3+(0.2*(d::truth((_n_dx_16550<0.0))?1.0:0.0)))))),d::read((_n_cg_16536=std::optional<double>(0.22)))),d::read((_n_cb_16537=std::optional<double>(0.32)))));
}else {d::check_cancel();if(d::truth((_n_p_16549==6.0))){d::check_cancel();(void)((((d::read((_n_cr_16535=std::optional<double>(0.7))),d::read((_n_cg_16536=std::optional<double>(0.42)))),d::read((_n_cb_16537=std::optional<double>(0.24)))),(_n_fl_16538=0.2)));
}
}
}
}
}
}
}
}else {d::check_cancel();if(d::truth((_n_xc_16533<this->_n_bankX_16379(_n_y_16532)))){d::check_cancel();(void)((_n_m_16534=_n_BANK_16344));
double _n_tex_16552=_n_fbm_16351((_n_xc_16533*0.3),(_n_y_16532*0.5),3.0,0.0);
(void)(((d::read((_n_cr_16535=std::optional<double>((0.08+(0.05*_n_tex_16552))))),d::read((_n_cg_16536=std::optional<double>((0.08+(0.05*_n_tex_16552)))))),d::read((_n_cb_16537=std::optional<double>((0.1+(0.05*_n_tex_16552)))))));
if(d::truth(([&](){auto _n_left_16724=_n_hash_16349((_n_x_16530*7.0),(_n_r_16529*3.0));auto _n_right_16725=(0.975-(0.015*_n_smooth_16353((_n_SHORE_16329+4.0),_n_H_16328,_n_y_16532)));return (_n_left_16724>_n_right_16725);})())){d::check_cancel();(void)((((d::read((_n_cr_16535=std::optional<double>(0.42))),d::read((_n_cg_16536=std::optional<double>(0.22)))),d::read((_n_cb_16537=std::optional<double>(0.3)))),(_n_fl_16538=0.06)));
}
if(d::truth((_n_xc_16533>(this->_n_bankX_16379(_n_y_16532)-2.6)))){d::check_cancel();double _n_s_16553=(0.85+(0.3*_n_hash_16349((_n_x_16530*3.0),(_n_r_16529*5.0))));
(void)((((d::read((_n_cr_16535=std::optional<double>((0.45*_n_s_16553)))),d::read((_n_cg_16536=std::optional<double>((0.38*_n_s_16553))))),d::read((_n_cb_16537=std::optional<double>((0.46*_n_s_16553))))),(_n_fl_16538=0.1)));
}
(void)((_n_warm_16539=1.0));
}else {d::check_cancel();(void)((_n_m_16534=_n_POND_16343));
}
}
(void)(([&](){auto&& _n_array_16726=this->_n_mat_16366;auto _n_index_16727=_n_k_16531;auto _n_value_16728=_n_m_16534;d::put(_n_array_16726,_n_index_16727,_n_value_16728);return _n_value_16728;})());
(void)(((([&](){auto&& _n_array_16729=this->_n_R_16367;auto _n_index_16730=_n_k_16531;auto _n_value_16731=([&]()->double{auto _n_logical_16732=_n_cr_16535;return d::truth(_n_logical_16732)?d::read(_n_logical_16732):0.0;})();d::put(_n_array_16729,_n_index_16730,_n_value_16731);return _n_value_16731;})(),([&](){auto&& _n_array_16733=this->_n_G_16368;auto _n_index_16734=_n_k_16531;auto _n_value_16735=([&]()->double{auto _n_logical_16736=_n_cg_16536;return d::truth(_n_logical_16736)?d::read(_n_logical_16736):0.0;})();d::put(_n_array_16733,_n_index_16734,_n_value_16735);return _n_value_16735;})()),([&](){auto&& _n_array_16737=this->_n_B_16369;auto _n_index_16738=_n_k_16531;auto _n_value_16739=([&]()->double{auto _n_logical_16740=_n_cb_16537;return d::truth(_n_logical_16740)?d::read(_n_logical_16740):0.0;})();d::put(_n_array_16737,_n_index_16738,_n_value_16739);return _n_value_16739;})()));
(void)(([&](){auto&& _n_array_16741=this->_n_floorA_16370;auto _n_index_16742=_n_k_16531;auto _n_value_16743=_n_fl_16538;d::put(_n_array_16741,_n_index_16742,_n_value_16743);return _n_value_16743;})());
(void)(([&](){auto&& _n_array_16744=this->_n_warmth_16371;auto _n_index_16745=_n_k_16531;auto _n_value_16746=_n_warm_16539;d::put(_n_array_16744,_n_index_16745,_n_value_16746);return _n_value_16746;})());
}}
}}
this->_n_RR_16380=this->_n_R_16367.slice();
this->_n_RG_16381=this->_n_G_16368.slice();
this->_n_RB_16382=this->_n_B_16369.slice();
{double _n_r_16561=45.0;
for(;d::truth((_n_r_16561<_n_H_16328));(void)((_n_r_16561++))){d::check_cancel();{double _n_x_16562=(_n_LX_16332-14.0);
for(;d::truth((_n_x_16562<=(_n_LX_16332+14.0)));(void)((_n_x_16562++))){d::check_cancel();double _n_y_16563=(_n_r_16561+0.5);
double _n_xc_16564=(_n_x_16562+0.5);
double _n_l_16565=this->_n_at_16384(_n_xc_16564,_n_y_16563);
if(d::truth((!d::truth(_n_l_16565)))){d::check_cancel();continue;
}
double _n_k_16566=((_n_r_16561*_n_W_16327)+_n_x_16562);
double _n_py_16567=(_n_LB_16333-((_n_LB_16333-_n_y_16563)/_n_LS_16334));
double _n_pdx_16568=((_n_xc_16564-_n_LX_16332)/_n_LS_16334);
if(d::truth((_n_l_16565==2.0))){d::check_cancel();(void)(([&](){auto&& _n_array_16747=this->_n_mat_16366;auto _n_index_16748=_n_k_16566;auto _n_value_16749=_n_FLAME_16348;d::put(_n_array_16747,_n_index_16748,_n_value_16749);return _n_value_16749;})());
double _n_c_16569=std::exp((-d::number((((_n_pdx_16568*_n_pdx_16568)*0.5)+(((_n_py_16567-82.8)*(_n_py_16567-82.8))*0.35)))));
(void)((((([&](){auto&& _n_array_16750=this->_n_R_16367;auto _n_index_16751=_n_k_16566;auto _n_value_16752=(0.85+(0.15*_n_c_16569));d::put(_n_array_16750,_n_index_16751,_n_value_16752);return _n_value_16752;})(),([&](){auto&& _n_array_16753=this->_n_G_16368;auto _n_index_16754=_n_k_16566;auto _n_value_16755=(0.5+(0.38*_n_c_16569));d::put(_n_array_16753,_n_index_16754,_n_value_16755);return _n_value_16755;})()),([&](){auto&& _n_array_16756=this->_n_B_16369;auto _n_index_16757=_n_k_16566;auto _n_value_16758=(0.2+((0.4*_n_c_16569)*_n_c_16569));d::put(_n_array_16756,_n_index_16757,_n_value_16758);return _n_value_16758;})()),([&](){auto&& _n_array_16759=this->_n_floorA_16370;auto _n_index_16760=_n_k_16566;auto _n_value_16761=0.35;d::put(_n_array_16759,_n_index_16760,_n_value_16761);return _n_value_16761;})()));
}else {d::check_cancel();(void)(([&](){auto&& _n_array_16762=this->_n_mat_16366;auto _n_index_16763=_n_k_16566;auto _n_value_16764=_n_STONE_16347;d::put(_n_array_16762,_n_index_16763,_n_value_16764);return _n_value_16764;})());
double _n_g_16570=(0.8+(0.4*_n_hash_16349((_n_x_16562*5.0),(_n_r_16561*3.0))));
double _n_edge_16571=(d::truth((!d::truth(this->_n_at_16384(_n_xc_16564,(_n_y_16563-1.0)))))?1.0:0.0);
(void)(((([&](){auto&& _n_array_16765=this->_n_R_16367;auto _n_index_16766=_n_k_16566;auto _n_value_16767=((0.05+(0.22*_n_edge_16571))*_n_g_16570);d::put(_n_array_16765,_n_index_16766,_n_value_16767);return _n_value_16767;})(),([&](){auto&& _n_array_16768=this->_n_G_16368;auto _n_index_16769=_n_k_16566;auto _n_value_16770=((0.04+(0.14*_n_edge_16571))*_n_g_16570);d::put(_n_array_16768,_n_index_16769,_n_value_16770);return _n_value_16770;})()),([&](){auto&& _n_array_16771=this->_n_B_16369;auto _n_index_16772=_n_k_16566;auto _n_value_16773=((0.08+(0.2*_n_edge_16571))*_n_g_16570);d::put(_n_array_16771,_n_index_16772,_n_value_16773);return _n_value_16773;})()));
bool _n_under_16572=([&]()->bool{auto _n_logical_16774=([&]()->bool{auto _n_logical_16776=(_n_l_16565==3.0);return d::truth(_n_logical_16776)?(_n_py_16567>78.6):_n_logical_16776;})();return d::truth(_n_logical_16774)?_n_logical_16774:([&]()->bool{auto _n_logical_16775=(_n_py_16567>=85.5);return d::truth(_n_logical_16775)?(_n_py_16567<86.4):_n_logical_16775;})();})();
if(d::truth(_n_under_16572)){d::check_cancel();double _n_f_16573=(std::exp(((-d::number(std::fabs((_n_py_16567-82.8))))/3.0))*0.75);
(void)(((([&](){auto&& _n_array_16777=this->_n_R_16367;auto _n_index_16778=_n_k_16566;auto _n_value_16779=(d::at(_n_array_16777,_n_index_16778)+_n_f_16573);d::put(_n_array_16777,_n_index_16778,_n_value_16779);return _n_value_16779;})(),([&](){auto&& _n_array_16780=this->_n_G_16368;auto _n_index_16781=_n_k_16566;auto _n_value_16782=(d::at(_n_array_16780,_n_index_16781)+(_n_f_16573*0.5));d::put(_n_array_16780,_n_index_16781,_n_value_16782);return _n_value_16782;})()),([&](){auto&& _n_array_16783=this->_n_B_16369;auto _n_index_16784=_n_k_16566;auto _n_value_16785=(d::at(_n_array_16783,_n_index_16784)+(_n_f_16573*0.18));d::put(_n_array_16783,_n_index_16784,_n_value_16785);return _n_value_16785;})()));
}
(void)(([&](){auto&& _n_array_16786=this->_n_floorA_16370;auto _n_index_16787=_n_k_16566;auto _n_value_16788=0.02;d::put(_n_array_16786,_n_index_16787,_n_value_16788);return _n_value_16788;})());
}
(void)(([&](){auto&& _n_array_16789=this->_n_warmth_16371;auto _n_index_16790=_n_k_16566;auto _n_value_16791=(d::truth((_n_l_16565==2.0))?0.0:0.75);d::put(_n_array_16789,_n_index_16790,_n_value_16791);return _n_value_16791;})());
}}
}}
{double _n_r_16574=0.0;
for(;d::truth((_n_r_16574<_n_H_16328));(void)((_n_r_16574++))){d::check_cancel();{double _n_x_16575=0.0;
for(;d::truth((_n_x_16575<130.0));(void)((_n_x_16575++))){d::check_cancel();double _n_k_16576=((_n_r_16574*_n_W_16327)+_n_x_16575);
double _n_y_16577=(_n_r_16574+0.5);
double _n_xc_16578=(_n_x_16575+0.5);
double _n_d_16579=0.0;
double _n_best_16580=0.0;
double _n_up_16581=0.0;
for(auto &&_n_item_16792:this->_n_clusters_16378){d::check_cancel();auto _n_binding_16793=_n_item_16792;
double _n_cx_16582=d::at(_n_binding_16793,0.0);
double _n_cy_16583=d::at(_n_binding_16793,1.0);
double _n_rad_16584=d::at(_n_binding_16793,2.0);
{
double _n_dx_16585=(_n_xc_16578-_n_cx_16582);
double _n_dy_16586=((_n_y_16577-_n_cy_16583)*1.15);
double _n_q_16587=(((_n_dx_16585*_n_dx_16585)+(_n_dy_16586*_n_dy_16586))/(_n_rad_16584*_n_rad_16584));
if(d::truth((_n_q_16587<3.0))){d::check_cancel();double _n_c_16588=std::exp(((-d::number(_n_q_16587))*1.4));
(void)((_n_d_16579=(_n_d_16579+_n_c_16588)));
if(d::truth((_n_c_16588>_n_best_16580))){d::check_cancel();(void)(((_n_best_16580=_n_c_16588),(_n_up_16581=((_n_dy_16586+(_n_dx_16585*0.4))/_n_rad_16584))));
}
}

}
}
double _n_n_16589=_n_fbm_16351((_n_xc_16578*0.11),(_n_y_16577*0.15),3.0,0.0);
double _n_n2_16590=_n_noise_16350((_n_xc_16578*0.5),(_n_y_16577*0.6),0.0);
double _n_bloom_16591=(((1.0-std::exp(((-d::number(_n_d_16579))*1.5)))*(0.15+(1.35*_n_n_16589)))*(0.75+(0.5*_n_n2_16590)));
bool _n_onBranch_16592=false;
double _n_bw_16593=0.0;
for(auto &&_n_item_16794:this->_n_branches_16376){d::check_cancel();auto _n_binding_16795=_n_item_16794;
double _n_ax_16594=d::at(_n_binding_16795,0.0);
double _n_ay_16595=d::at(_n_binding_16795,1.0);
double _n_bx_16596=d::at(_n_binding_16795,2.0);
double _n_by_16597=d::at(_n_binding_16795,3.0);
double _n_w0_16598=d::at(_n_binding_16795,4.0);
double _n_w1_16599=d::at(_n_binding_16795,5.0);
{
auto _n_binding_16796=_n_seg_16356(_n_xc_16578,_n_y_16577,_n_ax_16594,_n_ay_16595,_n_bx_16596,_n_by_16597);
double _n_dist_16600=d::at(_n_binding_16796,0.0);
double _n_kk_16601=d::at(_n_binding_16796,1.0);
double _n_w_16602=((_n_mix_16354(_n_w0_16598,_n_w1_16599,_n_kk_16601)*0.5)+0.15);
if(d::truth((_n_dist_16600<_n_w_16602))){d::check_cancel();(void)((_n_onBranch_16592=true));
(void)((_n_bw_16593=d::maximum({_n_bw_16593,((_n_dist_16600/_n_w_16602)*(d::truth((_n_xc_16578<(_n_ax_16594+((_n_bx_16596-_n_ax_16594)*_n_kk_16601))))?(-d::number(1.0)):1.0))})));
}

}
}
if((d::truth(_n_onBranch_16592)&&d::truth((_n_bloom_16591<0.85)))){d::check_cancel();(void)(([&](){auto&& _n_array_16797=this->_n_mat_16366;auto _n_index_16798=_n_k_16576;auto _n_value_16799=_n_TREE_16345;d::put(_n_array_16797,_n_index_16798,_n_value_16799);return _n_value_16799;})());
double _n_lit_16603=_n_smooth_16353(0.35,1.0,_n_bw_16593);
(void)(((([&](){auto&& _n_array_16800=this->_n_R_16367;auto _n_index_16801=_n_k_16576;auto _n_value_16802=(0.05+(0.03*_n_lit_16603));d::put(_n_array_16800,_n_index_16801,_n_value_16802);return _n_value_16802;})(),([&](){auto&& _n_array_16803=this->_n_G_16368;auto _n_index_16804=_n_k_16576;auto _n_value_16805=(0.035+(0.01*_n_lit_16603));d::put(_n_array_16803,_n_index_16804,_n_value_16805);return _n_value_16805;})()),([&](){auto&& _n_array_16806=this->_n_B_16369;auto _n_index_16807=_n_k_16576;auto _n_value_16808=0.07;d::put(_n_array_16806,_n_index_16807,_n_value_16808);return _n_value_16808;})()));
(void)(([&](){auto&& _n_array_16809=this->_n_floorA_16370;auto _n_index_16810=_n_k_16576;auto _n_value_16811=0.0;d::put(_n_array_16809,_n_index_16810,_n_value_16811);return _n_value_16811;})());
(void)(([&](){auto&& _n_array_16812=this->_n_warmth_16371;auto _n_index_16813=_n_k_16576;auto _n_value_16814=0.8;d::put(_n_array_16812,_n_index_16813,_n_value_16814);return _n_value_16814;})());
}else {d::check_cancel();if(d::truth((_n_bloom_16591>0.5))){d::check_cancel();(void)(([&](){auto&& _n_array_16815=this->_n_mat_16366;auto _n_index_16816=_n_k_16576;auto _n_value_16817=_n_BLOOM_16346;d::put(_n_array_16815,_n_index_16816,_n_value_16817);return _n_value_16817;})());
double _n_inner_16604=_n_hash_16349((_n_x_16575*3.0),(_n_r_16574*7.0));
double _n_b_16605=_n_clamp_16352((((0.62-(0.6*_n_up_16581))+(0.26*(_n_inner_16604-0.5)))-(0.3*_n_smooth_16353(0.75,0.5,_n_bloom_16591))));
(void)((_n_b_16605=([&](){auto _n_argument_16818=_n_b_16605;auto _n_argument_16819=0.12;auto _n_argument_16820=_n_smooth_16353(0.3,1.1,_n_up_16581);return _n_mix_16354(_n_argument_16818,_n_argument_16819,_n_argument_16820);})()));
(void)((_n_b_16605=(_n_b_16605*(1.0-(0.3*_n_smooth_16353(28.0,48.0,_n_y_16577))))));
(void)(((([&](){auto&& _n_array_16821=this->_n_R_16367;auto _n_index_16822=_n_k_16576;auto _n_value_16823=(0.34+(0.64*_n_b_16605));d::put(_n_array_16821,_n_index_16822,_n_value_16823);return _n_value_16823;})(),([&](){auto&& _n_array_16824=this->_n_G_16368;auto _n_index_16825=_n_k_16576;auto _n_value_16826=(0.08+((0.62*_n_b_16605)*_n_b_16605));d::put(_n_array_16824,_n_index_16825,_n_value_16826);return _n_value_16826;})()),([&](){auto&& _n_array_16827=this->_n_B_16369;auto _n_index_16828=_n_k_16576;auto _n_value_16829=(0.2+(0.5*_n_b_16605));d::put(_n_array_16827,_n_index_16828,_n_value_16829);return _n_value_16829;})()));
(void)(([&](){auto&& _n_array_16830=this->_n_floorA_16370;auto _n_index_16831=_n_k_16576;auto _n_value_16832=0.1;d::put(_n_array_16830,_n_index_16831,_n_value_16832);return _n_value_16832;})());
(void)(([&](){auto&& _n_array_16833=this->_n_warmth_16371;auto _n_index_16834=_n_k_16576;auto _n_value_16835=1.0;d::put(_n_array_16833,_n_index_16834,_n_value_16835);return _n_value_16835;})());
}
}
}}
}}
this->_n_glow_16385=d::Array<float,true>(size_t(this->_n_N_16362));
{double _n_r_16606=0.0;
for(;d::truth((_n_r_16606<_n_H_16328));(void)((_n_r_16606++))){d::check_cancel();{double _n_x_16607=0.0;
for(;d::truth((_n_x_16607<_n_W_16327));(void)((_n_x_16607++))){d::check_cancel();double _n_dx_16608=((_n_x_16607+0.5)-d::at(_n_LAMP_16335,0.0));
double _n_dy_16609=(((_n_r_16606+0.5)-d::at(_n_LAMP_16335,1.0))*1.1);
double _n_d_16610=std::sqrt(((_n_dx_16608*_n_dx_16608)+(_n_dy_16609*_n_dy_16609)));
(void)(([&](){auto&& _n_array_16836=this->_n_glow_16385;auto _n_index_16837=((_n_r_16606*_n_W_16327)+_n_x_16607);auto _n_value_16838=([&](){auto _n_left_16839=([&](){auto _n_left_16841=(std::exp(((-d::number(_n_d_16610))/4.0))*0.6);auto _n_right_16842=(std::exp(((-d::number(_n_d_16610))/11.0))*0.32);return (_n_left_16841+_n_right_16842);})();auto _n_right_16840=(std::exp(((-d::number(_n_d_16610))/32.0))*0.1);return (_n_left_16839+_n_right_16840);})();d::put(_n_array_16836,_n_index_16837,_n_value_16838);return _n_value_16838;})());
double _n_m_16611=d::at(this->_n_mat_16366,((_n_r_16606*_n_W_16327)+_n_x_16607));
if((d::truth((_n_m_16611==_n_BLOOM_16346))||d::truth((_n_m_16611==_n_TREE_16345)))){d::check_cancel();(void)(([&](){auto&& _n_array_16843=this->_n_glow_16385;auto _n_index_16844=((_n_r_16606*_n_W_16327)+_n_x_16607);auto _n_value_16845=(d::at(_n_array_16843,_n_index_16844)+(std::exp(((-d::number(_n_d_16610))/11.0))*1.6));d::put(_n_array_16843,_n_index_16844,_n_value_16845);return _n_value_16845;})());
}
if(d::truth((_n_m_16611==_n_BANK_16344))){d::check_cancel();double _n_px_16612=(((_n_x_16607+0.5)-_n_LX_16332)/20.0);
double _n_py_16613=((((_n_r_16606+0.5)-_n_LB_16333)+3.0)/8.0);
(void)(([&](){auto&& _n_array_16846=this->_n_glow_16385;auto _n_index_16847=((_n_r_16606*_n_W_16327)+_n_x_16607);auto _n_value_16848=(d::at(_n_array_16846,_n_index_16847)+(std::exp((-d::number(((_n_px_16612*_n_px_16612)+(_n_py_16613*_n_py_16613)))))*0.6));d::put(_n_array_16846,_n_index_16847,_n_value_16848);return _n_value_16848;})());
}
}}
}}
this->_n_stars_16386=d::Array<d::Array<double,false>,false>{};
{double _n_i_16614=0.0;
for(;d::truth((_n_i_16614<400.0));(void)((_n_i_16614++))){d::check_cancel();double _n_x_16615=std::floor((_n_hash_16349(_n_i_16614,91.0)*_n_W_16327));
double _n_r_16616=std::floor((_n_hash_16349(_n_i_16614,92.0)*40.0));
double _n_k_16617=((_n_r_16616*_n_W_16327)+_n_x_16615);
if((d::truth((d::at(this->_n_mat_16366,_n_k_16617)==_n_SKY_16339))&&d::truth((_n_hash_16349(_n_i_16614,93.0)>0.72)))){d::check_cancel();(void)(this->_n_stars_16386.push(d::Array<double,false>{_n_k_16617,(_n_hash_16349(_n_i_16614,94.0)*6.28),(0.6+(_n_hash_16349(_n_i_16614,95.0)*1.6))}));
}
}}
this->_n_CW_16387=500.0;
this->_n_C0_16388=34.0;
this->_n_C1_16389=68.0;
this->_n_ccov_16391=d::Array<float,true>(size_t((this->_n_CW_16387*(this->_n_C1_16389-this->_n_C0_16388))));
this->_n_clit_16392=d::Array<float,true>(size_t((this->_n_CW_16387*(this->_n_C1_16389-this->_n_C0_16388))));
{double _n_r_16620=this->_n_C0_16388;
for(;d::truth((_n_r_16620<this->_n_C1_16389));(void)((_n_r_16620++))){d::check_cancel();{double _n_x_16621=0.0;
for(;d::truth((_n_x_16621<this->_n_CW_16387));(void)((_n_x_16621++))){d::check_cancel();double _n_y_16622=(_n_r_16620+0.5);
double _n_d_16623=this->_n_cdens_16390(_n_x_16621,_n_y_16622);
(void)(([&](){auto&& _n_array_16849=this->_n_ccov_16391;auto _n_index_16850=(((_n_r_16620-this->_n_C0_16388)*this->_n_CW_16387)+_n_x_16621);auto _n_value_16851=_n_smooth_16353(0.56,0.7,_n_d_16623);d::put(_n_array_16849,_n_index_16850,_n_value_16851);return _n_value_16851;})());
(void)(([&](){auto&& _n_array_16852=this->_n_clit_16392;auto _n_index_16853=(((_n_r_16620-this->_n_C0_16388)*this->_n_CW_16387)+_n_x_16621);auto _n_value_16854=_n_clamp_16352((0.5+((_n_d_16623-this->_n_cdens_16390((_n_x_16621-1.0),(_n_y_16622+2.2)))*7.0)));d::put(_n_array_16852,_n_index_16853,_n_value_16854);return _n_value_16854;})());
}}
}}
this->_n_petals_16393=d::Array<std::shared_ptr<_n_Record_16394>,false>{};
{double _n_i_16624=0.0;
for(;d::truth((_n_i_16624<50.0));(void)((_n_i_16624++))){d::check_cancel();(void)(this->_n_petals_16393.push(([&](){auto _n_object_16856=std::make_shared<_n_Record_16394>();_n_object_16856->_p_x=(([&](){auto _n_argument_16857=_n_hash_16349(_n_i_16624,101.0);auto _n_argument_16858=2.2;return std::pow(_n_argument_16857,_n_argument_16858);})()*140.0);_n_object_16856->_p_y=(_n_hash_16349(_n_i_16624,102.0)*(_n_H_16328+20.0));_n_object_16856->_p_vx=(3.0+(_n_hash_16349(_n_i_16624,103.0)*4.0));_n_object_16856->_p_vy=(1.6+(_n_hash_16349(_n_i_16624,104.0)*2.2));_n_object_16856->_p_sw=(1.0+(_n_hash_16349(_n_i_16624,105.0)*2.0));_n_object_16856->_p_sf=(0.6+(_n_hash_16349(_n_i_16624,106.0)*1.2));_n_object_16856->_p_ph=(_n_hash_16349(_n_i_16624,107.0)*6.28);_n_object_16856->_p_tum=(2.0+(_n_hash_16349(_n_i_16624,108.0)*4.0));return _n_object_16856;})()));
}}
this->_n_floaters_16395=d::Array<d::Array<double,false>,false>{};
{double _n_i_16625=0.0;
for(;d::truth((_n_i_16625<26.0));(void)((_n_i_16625++))){d::check_cancel();(void)(this->_n_floaters_16395.push(d::Array<double,false>{(_n_hash_16349(_n_i_16625,111.0)*_n_W_16327),((_n_SHORE_16329+3.0)+(_n_hash_16349(_n_i_16625,112.0)*20.0)),(0.3+(_n_hash_16349(_n_i_16625,113.0)*0.5))}));
}}
this->_n_dith_16396=d::Array<float,true>(size_t(this->_n_N_16362));
{double _n_k_16626=0.0;
for(;d::truth((_n_k_16626<this->_n_N_16362));(void)((_n_k_16626++))){d::check_cancel();(void)(([&](){auto&& _n_array_16859=this->_n_dith_16396;auto _n_index_16860=_n_k_16626;auto _n_value_16861=([&](){auto _n_left_16862=(d::at(_n_BAYER_16338,((double(d::i32(std::floor((_n_k_16626/_n_W_16327)))&d::i32(3.0))*4.0)+double(d::i32(d::mod(_n_k_16626,_n_W_16327))&d::i32(3.0))))*0.4);auto _n_right_16863=((_n_hash_16349(_n_k_16626,77.0)-0.5)*0.5);return (_n_left_16862+_n_right_16863);})();d::put(_n_array_16859,_n_index_16860,_n_value_16861);return _n_value_16861;})());
}}
this->_n_tone_16397=d::Array<float,true>(size_t(1025.0));
{double _n_i_16627=0.0;
for(;d::truth((_n_i_16627<=1024.0));(void)((_n_i_16627++))){d::check_cancel();double _n_v_16628=(_n_i_16627/256.0);
(void)(([&](){auto&& _n_array_16864=this->_n_tone_16397;auto _n_index_16865=_n_i_16627;auto _n_value_16866=(d::truth((_n_v_16628<0.75))?_n_v_16628:(0.75+(0.25*(1.0-std::exp(((-d::number((_n_v_16628-0.75)))*4.0))))));d::put(_n_array_16864,_n_index_16865,_n_value_16866);return _n_value_16866;})());
}}
this->_n_pr_16398=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_pg_16399=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_pb_16400=d::Array<float,true>(size_t(this->_n_N_16362));
this->_n_pmask_16401=d::Array<uint8_t,true>(size_t(this->_n_N_16362));
_render=[=]( double _a0,std::shared_ptr<_n_Record_16698> _a1) mutable ->d::String{double _n_t_16629=_a0;
auto _n_binding_16869=(d::present(_a1)?_a1:([&](){auto _n_object_16868=std::make_shared<_n_Record_16698>();return _n_object_16868;})());
std::optional<d::Array<uint8_t,true>> _n_color_16630=_n_binding_16869->_p_color;
{
double _n_flick_16631=([&](){auto _n_left_16870=(0.82+([&](){auto _n_left_16872=(0.1*std::sin((_n_t_16629*7.3)));auto _n_right_16873=std::sin(((_n_t_16629*3.1)+1.0));return (_n_left_16872*_n_right_16873);})());auto _n_right_16871=((0.12*(_n_noise_16350((_n_t_16629*4.0),3.3,0.0)-0.5))*2.0);return (_n_left_16870+_n_right_16871);})();
double _n_cdrift_16632=d::mod((d::mod((_n_t_16629*0.8),this->_n_CW_16387)+this->_n_CW_16387),this->_n_CW_16387);
(void)(this->_n_pmask_16401.fill(0.0));
for(auto &&_n_item_16874:this->_n_petals_16393){d::check_cancel();std::shared_ptr<_n_Record_16394> _n_p_16633=_n_item_16874;
{
double _n_xx_16634=(d::mod(((d::mod(((_n_p_16633->_p_x+(_n_p_16633->_p_vx*_n_t_16629))+(_n_p_16633->_p_sw*std::sin(((_n_t_16629*_n_p_16633->_p_sf)+_n_p_16633->_p_ph)))),(_n_W_16327+40.0))+_n_W_16327)+40.0),(_n_W_16327+40.0))-20.0);
double _n_yy_16635=(d::mod(((d::mod(((_n_p_16633->_p_y+(_n_p_16633->_p_vy*_n_t_16629))+(0.6*std::sin((((_n_t_16629*_n_p_16633->_p_sf)*1.7)+_n_p_16633->_p_ph)))),(_n_H_16328+20.0))+_n_H_16328)+20.0),(_n_H_16328+20.0))-10.0);
double _n_x_16636=d::round(_n_xx_16634);
double _n_r_16637=d::round(_n_yy_16635);
if((((d::truth((_n_x_16636<0.0))||d::truth((_n_x_16636>=_n_W_16327)))||d::truth((_n_r_16637<0.0)))||d::truth((_n_r_16637>=_n_H_16328)))){d::check_cancel();continue;
}
double _n_k_16638=((_n_r_16637*_n_W_16327)+_n_x_16636);
double _n_face_16639=((0.55+(0.45*std::fabs(std::sin(((_n_t_16629*_n_p_16633->_p_tum)+_n_p_16633->_p_ph)))))*((d::truth((d::at(this->_n_mat_16366,_n_k_16638)==_n_POND_16343))||d::truth((d::at(this->_n_mat_16366,_n_k_16638)==_n_BANK_16344)))?0.6:1.0));
double _n_lg_16640=((d::at(this->_n_glow_16385,_n_k_16638)*_n_flick_16631)*1.6);
(void)(((([&](){auto&& _n_array_16875=this->_n_pr_16398;auto _n_index_16876=_n_k_16638;auto _n_value_16877=((1.0*_n_face_16639)+(_n_lg_16640*0.6));d::put(_n_array_16875,_n_index_16876,_n_value_16877);return _n_value_16877;})(),([&](){auto&& _n_array_16878=this->_n_pg_16399;auto _n_index_16879=_n_k_16638;auto _n_value_16880=((0.76*_n_face_16639)+(_n_lg_16640*0.35));d::put(_n_array_16878,_n_index_16879,_n_value_16880);return _n_value_16880;})()),([&](){auto&& _n_array_16881=this->_n_pb_16400;auto _n_index_16882=_n_k_16638;auto _n_value_16883=((0.84*_n_face_16639)+(_n_lg_16640*0.1));d::put(_n_array_16881,_n_index_16882,_n_value_16883);return _n_value_16883;})()));
(void)(([&](){auto&& _n_array_16884=this->_n_pmask_16401;auto _n_index_16885=_n_k_16638;auto _n_value_16886=1.0;d::put(_n_array_16884,_n_index_16885,_n_value_16886);return _n_value_16886;})());

}
}
{double _n_r_16641=0.0;
for(;d::truth((_n_r_16641<_n_H_16328));(void)((_n_r_16641++))){d::check_cancel();double _n_y_16642=(_n_r_16641+0.5);
{double _n_x_16643=0.0;
for(;d::truth((_n_x_16643<_n_W_16327));(void)((_n_x_16643++))){d::check_cancel();double _n_k_16644=((_n_r_16641*_n_W_16327)+_n_x_16643);
double _n_m_16645=d::at(this->_n_mat_16366,_n_k_16644);
double _n_cr_16646{};
double _n_cg_16647{};
double _n_cb_16648{};
double _n_fl_16649=d::at(this->_n_floorA_16370,_n_k_16644);
double _n_fade_16650=1.0;
if(d::truth((_n_m_16645==_n_POND_16343))){d::check_cancel();double _n_depth_16651=((_n_y_16642-_n_SHORE_16329)/(_n_H_16328-_n_SHORE_16329));
double _n_wob_16652=(std::sin((((_n_y_16642*1.7)-(_n_t_16629*2.0))+(std::sin(((_n_x_16643*0.13)+(_n_t_16629*0.6)))*1.4)))*(0.05+(0.8*_n_depth_16651)));
double _n_sx_16653=d::round((_n_x_16643+_n_wob_16652));
(void)((_n_sx_16653=(d::truth((_n_sx_16653<0.0))?0.0:(d::truth((_n_sx_16653>(_n_W_16327-1.0)))?(_n_W_16327-1.0):_n_sx_16653))));
double _n_w_16654=_n_noise_16350(((_n_x_16643*0.14)+(_n_t_16629*0.2)),((_n_y_16642*1.1)-(_n_t_16629*0.8)),0.0);
double _n_sr_16655=d::round((((_n_SHORE_16329-1.0)-((_n_r_16641-_n_SHORE_16329)*1.35))+(((_n_w_16654-0.5)*3.0)*_n_depth_16651)));
(void)((_n_sr_16655=(d::truth((_n_sr_16655<0.0))?0.0:(d::truth((_n_sr_16655>(_n_SHORE_16329-1.0)))?(_n_SHORE_16329-1.0):_n_sr_16655))));
double _n_j_16656=((_n_sr_16655*_n_W_16327)+_n_sx_16653);
double _n_lit_16657=(([&](){auto _n_argument_16887=0.95;auto _n_argument_16888=0.6;auto _n_argument_16889=_n_smooth_16353((_n_SHORE_16329+1.0),(_n_SHORE_16329+6.0),_n_y_16642);return _n_mix_16354(_n_argument_16887,_n_argument_16888,_n_argument_16889);})()*(0.8+(0.4*_n_w_16654)));
(void)((((_n_cr_16646=((d::at(this->_n_RR_16380,_n_j_16656)*_n_lit_16657)*0.9)),(_n_cg_16647=((d::at(this->_n_RG_16381,_n_j_16656)*_n_lit_16657)*0.92))),(_n_cb_16648=((d::at(this->_n_RB_16382,_n_j_16656)*_n_lit_16657)+0.03))));
double _n_glint_16658=(_n_smooth_16353(0.74,0.95,_n_w_16654)*0.06);
(void)((((_n_cr_16646=(_n_cr_16646+_n_glint_16658)),(_n_cg_16647=(_n_cg_16647+(_n_glint_16658*0.8)))),(_n_cb_16648=(_n_cb_16648+_n_glint_16658))));
double _n_sl_16659=((([&](){auto _n_left_16890=std::exp(((-d::number(std::fabs(((((_n_x_16643+0.5)-_n_LX_16332)-9.0)-((_n_y_16642-_n_SHORE_16329)*0.25)))))/(3.5+(_n_depth_16651*3.0))));auto _n_right_16891=_n_smooth_16353(0.45,0.8,_n_w_16654);return (_n_left_16890*_n_right_16891);})()*1.0)*_n_flick_16631);
(void)((((_n_cr_16646=(_n_cr_16646+_n_sl_16659)),(_n_cg_16647=(_n_cg_16647+(_n_sl_16659*0.62)))),(_n_cb_16648=(_n_cb_16648+(_n_sl_16659*0.25)))));
(void)((_n_fade_16650=_n_smooth_16353((_n_H_16328+2.0),(_n_H_16328-9.0),_n_y_16642)));
}else {d::check_cancel();(void)((((_n_cr_16646=d::at(this->_n_R_16367,_n_k_16644)),(_n_cg_16647=d::at(this->_n_G_16368,_n_k_16644))),(_n_cb_16648=d::at(this->_n_B_16369,_n_k_16644))));
if(((d::truth((_n_m_16645==_n_SKY_16339))&&d::truth((_n_r_16641>=this->_n_C0_16388)))&&d::truth((_n_r_16641<this->_n_C1_16389)))){d::check_cancel();double _n_sx_16660=(_n_x_16643+_n_cdrift_16632);
double _n_ix_16661=std::floor(_n_sx_16660);
double _n_fx_16662=(_n_sx_16660-_n_ix_16661);
double _n_i0_16663=(((_n_r_16641-this->_n_C0_16388)*this->_n_CW_16387)+d::mod(_n_ix_16661,this->_n_CW_16387));
double _n_i1_16664=(((_n_r_16641-this->_n_C0_16388)*this->_n_CW_16387)+d::mod((_n_ix_16661+1.0),this->_n_CW_16387));
double _n_c_16665=(d::at(this->_n_ccov_16391,_n_i0_16663)+((d::at(this->_n_ccov_16391,_n_i1_16664)-d::at(this->_n_ccov_16391,_n_i0_16663))*_n_fx_16662));
if(d::truth((_n_c_16665>0.01))){d::check_cancel();double _n_l_16666=(d::at(this->_n_clit_16392,_n_i0_16663)+((d::at(this->_n_clit_16392,_n_i1_16664)-d::at(this->_n_clit_16392,_n_i0_16663))*_n_fx_16662));
double _n_sun_16667=([&](){auto _n_left_16892=(_n_l_16666*(0.45+(0.55*_n_smooth_16353(this->_n_C0_16388,this->_n_C1_16389,_n_y_16642))));auto _n_right_16893=(0.6+(0.4*std::exp(((-d::number(std::fabs((_n_x_16643-80.0))))/90.0))));return (_n_left_16892*_n_right_16893);})();
double _n_a_16668=(_n_c_16665*0.85);
(void)((((_n_cr_16646=([&](){auto _n_argument_16894=_n_cr_16646;auto _n_argument_16895=_n_mix_16354(0.2,1.0,_n_sun_16667);auto _n_argument_16896=_n_a_16668;return _n_mix_16354(_n_argument_16894,_n_argument_16895,_n_argument_16896);})()),(_n_cg_16647=([&](){auto _n_argument_16897=_n_cg_16647;auto _n_argument_16898=_n_mix_16354(0.12,0.58,_n_sun_16667);auto _n_argument_16899=_n_a_16668;return _n_mix_16354(_n_argument_16897,_n_argument_16898,_n_argument_16899);})())),(_n_cb_16648=([&](){auto _n_argument_16900=_n_cb_16648;auto _n_argument_16901=_n_mix_16354(0.27,0.5,_n_sun_16667);auto _n_argument_16902=_n_a_16668;return _n_mix_16354(_n_argument_16900,_n_argument_16901,_n_argument_16902);})())));
}
}
}
double _n_wm_16669=d::at(this->_n_warmth_16371,_n_k_16644);
if(d::truth((_n_wm_16669>0.0))){d::check_cancel();double _n_g_16670=((d::at(this->_n_glow_16385,_n_k_16644)*_n_flick_16631)*_n_wm_16669);
(void)((((_n_cr_16646=(_n_cr_16646+(_n_g_16670*1.0))),(_n_cg_16647=(_n_cg_16647+(_n_g_16670*0.58)))),(_n_cb_16648=(_n_cb_16648+(_n_g_16670*0.22)))));
}else {d::check_cancel();if((d::truth((_n_m_16645==_n_SKY_16339))||d::truth((_n_m_16645==_n_POND_16343)))){d::check_cancel();double _n_g_16671=((d::at(this->_n_glow_16385,_n_k_16644)*_n_flick_16631)*0.6);
(void)((((_n_cr_16646=(_n_cr_16646+_n_g_16671)),(_n_cg_16647=(_n_cg_16647+(_n_g_16671*0.6)))),(_n_cb_16648=(_n_cb_16648+(_n_g_16671*0.3)))));
}
}
if(d::truth((_n_m_16645==_n_FLAME_16348))){d::check_cancel();double _n_f_16672=(0.85+(0.25*_n_flick_16631));
(void)((((_n_cr_16646=_n_f_16672),(_n_cg_16647=(0.72*_n_f_16672))),(_n_cb_16648=(0.38*_n_f_16672))));
}
if((d::truth(d::at(this->_n_pmask_16401,_n_k_16644))&&d::truth((_n_m_16645!=_n_FLAME_16348)))){d::check_cancel();(void)(((((_n_cr_16646=d::at(this->_n_pr_16398,_n_k_16644)),(_n_cg_16647=d::at(this->_n_pg_16399,_n_k_16644))),(_n_cb_16648=d::at(this->_n_pb_16400,_n_k_16644))),(_n_fl_16649=0.3)));
}
(void)((((_n_cr_16646=d::at(this->_n_tone_16397,d::minimum({1024.0,double(d::i32((_n_cr_16646*256.0))|d::i32(0.0))}))),(_n_cg_16647=d::at(this->_n_tone_16397,d::minimum({1024.0,double(d::i32((_n_cg_16647*256.0))|d::i32(0.0))})))),(_n_cb_16648=d::at(this->_n_tone_16397,d::minimum({1024.0,double(d::i32((_n_cb_16648*256.0))|d::i32(0.0))})))));
double _n_peak_16673=d::maximum({_n_cr_16646,_n_cg_16647,_n_cb_16648,0.0001});
double _n_level_16674=(_n_clamp_16352((_n_fl_16649+(((1.0-_n_fl_16649)*std::pow(_n_peak_16673,1.1))*1.02)))*_n_fade_16650);
double _n_step_16675=([&](){auto _n_argument_16903=0.0;auto _n_argument_16904=([&](){auto _n_argument_16905=3.0;auto _n_argument_16906=d::round(((_n_level_16674*3.0)+d::at(this->_n_dith_16396,_n_k_16644)));return d::minimum({_n_argument_16905,_n_argument_16906});})();return d::maximum({_n_argument_16903,_n_argument_16904});})();
(void)(([&](){auto&& _n_array_16907=this->_n_out_16363;auto _n_index_16908=_n_k_16644;auto _n_value_16909=d::at(_n_DOTS_16336,_n_step_16675);d::put(_n_array_16907,_n_index_16908,_n_value_16909);return _n_value_16909;})());
if(d::truth(_n_color_16630)){d::check_cancel();double _n_want_16676=(d::truth(_n_step_16675)?d::minimum({1.0,((_n_level_16674+0.06)/d::at(_n_COVER_16337,_n_step_16675))}):0.0);
double _n_s_16677=((0.3+(0.7*_n_want_16676))/_n_peak_16673);
(void)(([&](){auto&& _n_array_16910=d::read(_n_color_16630);auto _n_index_16911=_n_k_16644;auto _n_value_16912=([&](){auto _n_argument_16913=_n_clamp_16352((_n_cr_16646*_n_s_16677));auto _n_argument_16914=_n_clamp_16352((_n_cg_16647*_n_s_16677));auto _n_argument_16915=_n_clamp_16352((_n_cb_16648*_n_s_16677));return this->_n_nearest_16365(_n_argument_16913,_n_argument_16914,_n_argument_16915);})();d::put(_n_array_16910,_n_index_16911,_n_value_16912);return _n_value_16912;})());
}
}}
}}
{double _n_r_16678=(d::at(_n_MOON_16331,1.0)-6.0);
for(;d::truth((_n_r_16678<=(d::at(_n_MOON_16331,1.0)+6.0)));(void)((_n_r_16678++))){d::check_cancel();{double _n_x_16679=(d::at(_n_MOON_16331,0.0)-6.0);
for(;d::truth((_n_x_16679<=(d::at(_n_MOON_16331,0.0)+6.0)));(void)((_n_x_16679++))){d::check_cancel();double _n_dx_16680=((_n_x_16679+0.5)-d::at(_n_MOON_16331,0.0));
double _n_dy_16681=((_n_r_16678+0.5)-d::at(_n_MOON_16331,1.0));
bool _n_inside_16682=(((_n_dx_16680*_n_dx_16680)+(_n_dy_16681*_n_dy_16681))<(5.2*5.2));
double _n_ex_16683=(_n_dx_16680-2.2);
double _n_ey_16684=(_n_dy_16681+1.6);
if((d::truth(_n_inside_16682)&&d::truth((((_n_ex_16683*_n_ex_16683)+(_n_ey_16684*_n_ey_16684))>(4.9*4.9))))){d::check_cancel();double _n_k_16685=((_n_r_16678*_n_W_16327)+_n_x_16679);
(void)(([&](){auto&& _n_array_16916=this->_n_out_16363;auto _n_index_16917=_n_k_16685;auto _n_value_16918=d::String(u"●");d::put(_n_array_16916,_n_index_16917,_n_value_16918);return _n_value_16918;})());
if(d::truth(_n_color_16630)){d::check_cancel();(void)(([&](){auto&& _n_array_16919=d::read(_n_color_16630);auto _n_index_16920=_n_k_16685;auto _n_value_16921=this->_n_nearest_16365(1.0,0.96,0.86);d::put(_n_array_16919,_n_index_16920,_n_value_16921);return _n_value_16921;})());
}
}
}}
}}
for(auto &&_n_item_16922:this->_n_stars_16386){d::check_cancel();auto _n_binding_16923=_n_item_16922;
double _n_k_16686=d::at(_n_binding_16923,0.0);
double _n_ph_16687=d::at(_n_binding_16923,1.0);
double _n_sp_16688=d::at(_n_binding_16923,2.0);
{
double _n_s_16689=std::sin(((_n_t_16629*_n_sp_16688)+_n_ph_16687));
if(d::truth((_n_s_16689>(-d::number(0.3))))){d::check_cancel();(void)(([&](){auto&& _n_array_16924=this->_n_out_16363;auto _n_index_16925=_n_k_16686;auto _n_value_16926=(d::truth((_n_s_16689>0.7))?d::String(u"•"):d::String(u"·"));d::put(_n_array_16924,_n_index_16925,_n_value_16926);return _n_value_16926;})());
if(d::truth(_n_color_16630)){d::check_cancel();(void)(([&](){auto&& _n_array_16927=d::read(_n_color_16630);auto _n_index_16928=_n_k_16686;auto _n_value_16929=this->_n_nearest_16365(0.9,0.88,1.0);d::put(_n_array_16927,_n_index_16928,_n_value_16929);return _n_value_16929;})());
}
}

}
}
for(auto &&_n_item_16930:this->_n_floaters_16395){d::check_cancel();auto _n_binding_16931=_n_item_16930;
double _n_fx_16690=d::at(_n_binding_16931,0.0);
double _n_fy_16691=d::at(_n_binding_16931,1.0);
double _n_sp_16692=d::at(_n_binding_16931,2.0);
{
double _n_x_16693=d::round(d::mod((_n_fx_16690+(_n_t_16629*_n_sp_16692)),_n_W_16327));
double _n_r_16694=d::round((_n_fy_16691+(0.3*std::sin(((_n_t_16629*0.8)+_n_fx_16690)))));
if(d::truth((_n_r_16694>=_n_H_16328))){d::check_cancel();continue;
}
double _n_k_16695=((_n_r_16694*_n_W_16327)+_n_x_16693);
if(d::truth((d::at(this->_n_mat_16366,_n_k_16695)!=_n_POND_16343))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_16932=this->_n_out_16363;auto _n_index_16933=_n_k_16695;auto _n_value_16934=d::String(u"•");d::put(_n_array_16932,_n_index_16933,_n_value_16934);return _n_value_16934;})());
if(d::truth(_n_color_16630)){d::check_cancel();(void)(([&](){auto&& _n_array_16935=d::read(_n_color_16630);auto _n_index_16936=_n_k_16695;auto _n_value_16937=this->_n_nearest_16365(0.95,0.72,0.8);d::put(_n_array_16935,_n_index_16936,_n_value_16937);return _n_value_16937;})());
}

}
}
d::Array<d::String,false> _n_lines_16696=d::Array<d::String,false>{};
{double _n_r_16697=0.0;
for(;d::truth((_n_r_16697<_n_H_16328));(void)((_n_r_16697++))){d::check_cancel();(void)(_n_lines_16696.push(d::join(this->_n_out_16363.slice((_n_r_16697*_n_W_16327),((_n_r_16697+1.0)*_n_W_16327)),d::String(u""))));
}}
return d::join(_n_lines_16696,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("kyoto-dusk").cols)*ascii::catalog_meta("kyoto-dusk").rows);auto _env=std::make_shared<_n_Record_16698>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &kyoto_dusk_meta(){return catalog_meta("kyoto-dusk");}
std::unique_ptr<Piece> make_kyoto_dusk(const AsciiPieceOptions &o){return std::make_unique<Native_kyoto_dusk>(o);}
}
