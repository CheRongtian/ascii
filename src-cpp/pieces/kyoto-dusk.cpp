// Direct, statically typed C++ from src/pieces/kyoto-dusk.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_16325;
struct _n_Record_16393;
struct _n_Record_16697;
struct _n_Record_16325{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_16325> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16325>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_16393{
double _p_x{};
double _p_y{};
double _p_vx{};
double _p_vy{};
double _p_sw{};
double _p_sf{};
double _p_ph{};
double _p_tum{};
static std::shared_ptr<_n_Record_16393> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16393>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_sw=d::decode<double>(j["sw"]);out->_p_sf=d::decode<double>(j["sf"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_tum=d::decode<double>(j["tum"]);return out;}
};
struct _n_Record_16697{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_16697> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16697>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_16348(double _a0,double _a1);
double _n_noise_16349(double _a0,double _a1,double _a2);
double _n_fbm_16350(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_16351(double _a0);
double _n_smooth_16352(double _a0,double _a1,double _a2);
double _n_mix_16353(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_16354(d::String _a0);
std::array<double,2> _n_seg_16355(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
double _n_pagoda_16359(double _a0,double _a1);
std::shared_ptr<_n_Record_16325> _n_meta_16324=[](){return ([&](){auto _n_object_16700=std::make_shared<_n_Record_16325>();_n_object_16700->_p_name=d::String(u"kyoto dusk");_n_object_16700->_p_category=d::String(u"scenes");_n_object_16700->_p_note=d::String(u"a pagoda at dusk behind a cherry tree lit by a stone lantern");_n_object_16700->_p_cols=200.0;_n_object_16700->_p_rows=100.0;_n_object_16700->_p_cell=1.0;_n_object_16700->_p_fps=15.0;_n_object_16700->_p_ground=d::String(u"#0b0a16");_n_object_16700->_p_palette=d::Array<d::String,false>{d::String(u"#1c1d4a"),d::String(u"#262759"),d::String(u"#33316b"),d::String(u"#433d7c"),d::String(u"#574a8c"),d::String(u"#6e5a9a"),d::String(u"#8a5a92"),d::String(u"#a8668f"),d::String(u"#c4748f"),d::String(u"#db8a95"),d::String(u"#ec9f9c"),d::String(u"#f6b8a8"),d::String(u"#fbd0b8"),d::String(u"#fff1d8"),d::String(u"#fffaf0"),d::String(u"#7e5f9e"),d::String(u"#f9d3dc"),d::String(u"#f2b2c4"),d::String(u"#e28fab"),d::String(u"#c66e92"),d::String(u"#9c5279"),d::String(u"#74405f"),d::String(u"#ffd9a0"),d::String(u"#ffbb6a"),d::String(u"#f29a4a"),d::String(u"#d0763a"),d::String(u"#a35a35"),d::String(u"#2a2240"),d::String(u"#3a2c50"),d::String(u"#4a3860"),d::String(u"#5b4f86"),d::String(u"#7a6aa0"),d::String(u"#2c3a3a"),d::String(u"#3d4c46"),d::String(u"#56604f"),d::String(u"#9a6aa0"),d::String(u"#b47ea6"),d::String(u"#4a3038"),d::String(u"#6a4448"),d::String(u"#2b3a6a"),d::String(u"#3e4f86")};return _n_object_16700;})();}();
const double _n_W_16326=[](){return 200.0;}();
const double _n_H_16327=[](){return 100.0;}();
const double _n_SHORE_16328=[](){return 80.0;}();
const double _n_PX_16329=[](){return 141.0;}();
d::Array<double,false> _n_MOON_16330=[](){return d::Array<double,false>{176.0,17.0};}();
const double _n_LX_16331=[](){return 53.0;}();
const double _n_LB_16332=[](){return 98.0;}();
const double _n_LS_16333=[](){return 1.8;}();
d::Array<double,false> _n_LAMP_16334=[](){return d::Array<double,false>{_n_LX_16331,(_n_LB_16332-((_n_LB_16332-83.0)*_n_LS_16333))};}();
const d::String _n_DOTS_16335=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_16336=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_16337=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_16401=_a0;
return ((_n_v_16401/16.0)-0.47);});}();
const double _n_SKY_16338=[](){return 0.0;}();
const double _n_HILL_16339=[](){return 1.0;}();
const double _n_TOWN_16340=[](){return 2.0;}();
const double _n_PAGODA_16341=[](){return 3.0;}();
const double _n_POND_16342=[](){return 4.0;}();
const double _n_BANK_16343=[](){return 5.0;}();
const double _n_TREE_16344=[](){return 6.0;}();
const double _n_BLOOM_16345=[](){return 7.0;}();
const double _n_STONE_16346=[](){return 8.0;}();
const double _n_FLAME_16347=[](){return 9.0;}();
d::Array<double,false> _n_EAVE_16356=[](){return d::Array<double,false>{68.5,58.0,48.5,40.0,32.5};}();
d::Array<double,false> _n_ROOF_16357=[](){return d::Array<double,false>{14.5,13.4,12.3,11.2,10.1};}();
d::Array<double,false> _n_BODY_16358=[](){return d::Array<double,false>{6.4,5.9,5.4,4.9,4.4};}();
double _n_hash_16348(double _a0,double _a1){double _n_x_16402=_a0;
double _n_y_16403=_a1;
{
double _n_h_16404=([&](){auto _n_left_16701=d::imul(double(d::i32(_n_x_16402)|d::i32(0.0)),374761393.0);auto _n_right_16702=d::imul(double(d::i32(_n_y_16403)|d::i32(0.0)),668265263.0);return (_n_left_16701+_n_right_16702);})();
(void)((_n_h_16404=d::imul(double(d::i32(_n_h_16404)^d::i32(double(d::u32(_n_h_16404)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_16404)^d::i32(double(d::u32(_n_h_16404)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_16349(double _a0,double _a1,double _a2){double _n_x_16405=_a0;
double _n_y_16406=_a1;
double _n_period_16407=_a2;
{
double _n_xi_16408=std::floor(_n_x_16405);
double _n_yi_16409=std::floor(_n_y_16406);
double _n_fx_16410=(_n_x_16405-_n_xi_16408);
double _n_fy_16411=(_n_y_16406-_n_yi_16409);
double _n_u_16412=((_n_fx_16410*_n_fx_16410)*(3.0-(2.0*_n_fx_16410)));
double _n_v_16413=((_n_fy_16411*_n_fy_16411)*(3.0-(2.0*_n_fy_16411)));
double _n_x0_16414=_n_xi_16408;
double _n_x1_16415=(_n_xi_16408+1.0);
if(d::truth(_n_period_16407)){d::check_cancel();(void)((_n_x0_16414=d::mod((d::mod(_n_xi_16408,_n_period_16407)+_n_period_16407),_n_period_16407)));
(void)((_n_x1_16415=d::mod((_n_x0_16414+1.0),_n_period_16407)));
}
double _n_a_16416=_n_hash_16348(_n_x0_16414,_n_yi_16409);
double _n_b_16417=_n_hash_16348(_n_x1_16415,_n_yi_16409);
double _n_c_16418=_n_hash_16348(_n_x0_16414,(_n_yi_16409+1.0));
double _n_d_16419=_n_hash_16348(_n_x1_16415,(_n_yi_16409+1.0));
return (((_n_a_16416+((_n_b_16417-_n_a_16416)*_n_u_16412))+((_n_c_16418-_n_a_16416)*_n_v_16413))+(((((_n_a_16416-_n_b_16417)-_n_c_16418)+_n_d_16419)*_n_u_16412)*_n_v_16413));

}
}

double _n_fbm_16350(double _a0,double _a1,double _a2,double _a3){double _n_x_16420=_a0;
double _n_y_16421=_a1;
double _n_octaves_16422=_a2;
double _n_period_16423=_a3;
{
double _n_s_16424=0.0;
double _n_n_16425=0.0;
double _n_amp_16426=0.5;
double _n_f_16427=1.0;
{double _n_i_16428=0.0;
for(;d::truth((_n_i_16428<_n_octaves_16422));(void)((_n_i_16428++))){d::check_cancel();(void)((_n_s_16424=(_n_s_16424+(_n_amp_16426*_n_noise_16349((_n_x_16420*_n_f_16427),(_n_y_16421*_n_f_16427),(_n_period_16423*_n_f_16427))))));
(void)((_n_n_16425=(_n_n_16425+_n_amp_16426)));
(void)((_n_amp_16426=(_n_amp_16426*0.5)));
(void)((_n_f_16427=(_n_f_16427*2.0)));
}}
return (_n_s_16424/_n_n_16425);

}
}

double _n_clamp_16351(double _a0){double _n_v_16429=_a0;
return (d::truth((_n_v_16429<0.0))?0.0:(d::truth((_n_v_16429>1.0))?1.0:_n_v_16429));}

double _n_smooth_16352(double _a0,double _a1,double _a2){double _n_a_16430=_a0;
double _n_b_16431=_a1;
double _n_v_16432=_a2;
{
double _n_k_16433=_n_clamp_16351(((_n_v_16432-_n_a_16430)/(_n_b_16431-_n_a_16430)));
return ((_n_k_16433*_n_k_16433)*(3.0-(2.0*_n_k_16433)));

}
}

double _n_mix_16353(double _a0,double _a1,double _a2){double _n_a_16434=_a0;
double _n_b_16435=_a1;
double _n_k_16436=_a2;
return (_n_a_16434+((_n_b_16435-_n_a_16434)*_n_k_16436));}

d::Array<double,false> _n_hex_16354(d::String _a0){d::String _n_s_16437=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_16438=_a0;
return (([&](){auto _n_argument_16703=d::slice(_n_s_16437,_n_i_16438,(_n_i_16438+2.0));auto _n_argument_16704=16.0;return d::parseInt(_n_argument_16703,_n_argument_16704);})()/255.0);});}

std::array<double,2> _n_seg_16355(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_16439=_a0;
double _n_py_16440=_a1;
double _n_ax_16441=_a2;
double _n_ay_16442=_a3;
double _n_bx_16443=_a4;
double _n_by_16444=_a5;
{
double _n_dx_16445=(_n_bx_16443-_n_ax_16441);
double _n_dy_16446=(_n_by_16444-_n_ay_16442);
double _n_k_16447=_n_clamp_16351(((((_n_px_16439-_n_ax_16441)*_n_dx_16445)+((_n_py_16440-_n_ay_16442)*_n_dy_16446))/((_n_dx_16445*_n_dx_16445)+(_n_dy_16446*_n_dy_16446))));
double _n_ex_16448=((_n_ax_16441+(_n_dx_16445*_n_k_16447))-_n_px_16439);
double _n_ey_16449=((_n_ay_16442+(_n_dy_16446*_n_k_16447))-_n_py_16440);
return std::array<double,2>{std::sqrt(((_n_ex_16448*_n_ex_16448)+(_n_ey_16449*_n_ey_16449))),_n_k_16447};

}
}

double _n_pagoda_16359(double _a0,double _a1){double _n_dx_16450=_a0;
double _n_y_16451=_a1;
{
double _n_ax_16452=std::fabs(_n_dx_16450);
if((d::truth((_n_y_16451>=76.0))&&d::truth((_n_y_16451<(_n_SHORE_16328+0.5))))){d::check_cancel();return (d::truth((_n_ax_16452<=(9.5-(d::truth((_n_y_16451<77.0))?1.0:0.0))))?1.0:0.0);
}
{double _n_i_16453=0.0;
for(;d::truth((_n_i_16453<5.0));(void)((_n_i_16453++))){d::check_cancel();double _n_e_16454=d::at(_n_EAVE_16356,_n_i_16453);
double _n_R_16455=d::at(_n_ROOF_16357,_n_i_16453);
double _n_u_16456=(_n_ax_16452/_n_R_16455);
if(d::truth((_n_u_16456<=1.0))){d::check_cancel();double _n_lift_16457=((((3.5*_n_u_16456)*_n_u_16456)*_n_u_16456)*_n_u_16456);
double _n_bottom_16458=((_n_e_16454-_n_lift_16457)+0.6);
double _n_top_16459=(((_n_e_16454-_n_lift_16457)-1.2)-(3.6*std::pow((1.0-_n_u_16456),1.7)));
if((d::truth((_n_y_16451>=_n_top_16459))&&d::truth((_n_y_16451<_n_bottom_16458)))){d::check_cancel();if(d::truth((_n_y_16451<(_n_top_16459+0.9)))){d::check_cancel();return 4.0;
}
if(d::truth((_n_y_16451>(_n_bottom_16458-1.0)))){d::check_cancel();return 3.0;
}
return 2.0;
}
}
double _n_floor_16460=(d::truth((_n_i_16453==0.0))?76.0:(d::at(_n_EAVE_16356,(_n_i_16453-1.0))-3.6));
if(((d::truth((_n_y_16451>=(_n_e_16454+0.6)))&&d::truth((_n_y_16451<_n_floor_16460)))&&d::truth((_n_ax_16452<=d::at(_n_BODY_16358,_n_i_16453))))){d::check_cancel();if((((d::truth((_n_i_16453==0.0))&&d::truth((_n_ax_16452<=1.0)))&&d::truth((_n_y_16451>72.0)))&&d::truth((_n_y_16451<75.5)))){d::check_cancel();return 6.0;
}
if((d::truth((_n_y_16451<(_n_e_16454+2.0)))&&d::truth((_n_ax_16452<=(d::at(_n_BODY_16358,_n_i_16453)+1.2))))){d::check_cancel();return 3.0;
}
return 1.0;
}
if((((d::truth((_n_i_16453>0.0))&&d::truth((_n_y_16451>=(_n_e_16454+0.6))))&&d::truth((_n_y_16451<(_n_e_16454+2.0))))&&d::truth((_n_ax_16452<=(d::at(_n_BODY_16358,_n_i_16453)+1.2))))){d::check_cancel();return 3.0;
}
}}
double _n_top_16461=(((d::at(_n_EAVE_16356,4.0)-1.2)-3.6)-0.2);
if((d::truth((_n_y_16451<_n_top_16461))&&d::truth((_n_y_16451>=9.0)))){d::check_cancel();if(d::truth((_n_y_16451>=(_n_top_16461-1.5)))){d::check_cancel();return (d::truth((_n_ax_16452<=2.4))?3.0:0.0);
}
if((d::truth((_n_y_16451>=15.0))&&d::truth((_n_y_16451<(_n_top_16461-1.5))))){d::check_cancel();double _n_ring_16462=double(d::i32(std::floor(((_n_y_16451-15.0)/1.2)))&d::i32(1.0));
return (d::truth((_n_ax_16452<=(d::truth(_n_ring_16462)?1.4:0.55)))?5.0:0.0);
}
if(d::truth((_n_y_16451>=12.0))){d::check_cancel();return (d::truth((_n_ax_16452<=(1.3-((_n_y_16451-12.0)*0.2))))?5.0:0.0);
}
return (d::truth((_n_ax_16452<=0.6))?5.0:0.0);
}
return 0.0;

}
}

struct Native_kyoto_dusk final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_16360{};
double _n_N_16361{};
d::Array<d::String,false> _n_out_16362{};
d::Array<uint8_t,true> _n_lut_16363{};
d::Array<uint8_t,true> _n_mat_16365{};
d::Array<float,true> _n_R_16366{};
d::Array<float,true> _n_G_16367{};
d::Array<float,true> _n_B_16368{};
d::Array<float,true> _n_floorA_16369{};
d::Array<float,true> _n_warmth_16370{};
d::Array<d::Array<double,false>,false> _n_branches_16375{};
double _n_limbs_16376{};
d::Array<std::array<double,3>,false> _n_clusters_16377{};
d::Array<float,true> _n_RR_16379{};
d::Array<float,true> _n_RG_16380{};
d::Array<float,true> _n_RB_16381{};
d::Array<float,true> _n_glow_16384{};
d::Array<std::array<double,3>,false> _n_stars_16385{};
double _n_CW_16386{};
double _n_C0_16387{};
double _n_C1_16388{};
d::Array<float,true> _n_ccov_16390{};
d::Array<float,true> _n_clit_16391{};
d::Array<std::shared_ptr<_n_Record_16393>,false> _n_petals_16392{};
d::Array<std::array<double,3>,false> _n_floaters_16394{};
d::Array<float,true> _n_dith_16395{};
d::Array<float,true> _n_tone_16396{};
d::Array<float,true> _n_pr_16397{};
d::Array<float,true> _n_pg_16398{};
d::Array<float,true> _n_pb_16399{};
d::Array<uint8_t,true> _n_pmask_16400{};
std::function<d::String(double,std::shared_ptr<_n_Record_16697>)> _render;
double _n_nearest_16364(double _a0,double _a1,double _a2){double _n_r_16463=_a0;
double _n_g_16464=_a1;
double _n_b_16465=_a2;
{
double _n_k_16466=([&](){auto _n_left_16937=([&](){auto _n_left_16939=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_16463*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_16940=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_16464*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_16939)|d::i32(_n_right_16940));})();auto _n_right_16938=d::minimum({31.0,double(d::i32((_n_b_16465*31.99))|d::i32(0.0))});return double(d::i32(_n_left_16937)|d::i32(_n_right_16938));})();
if(d::truth((d::at(this->_n_lut_16363,_n_k_16466)!=255.0))){d::check_cancel();return d::at(this->_n_lut_16363,_n_k_16466);
}
double _n_best_16467=0.0;
double _n_bd_16468=1000000000.0;
{double _n_i_16469=0.0;
for(;d::truth((_n_i_16469<double(this->_n_P_16360.size())));(void)((_n_i_16469++))){d::check_cancel();double _n_dr_16470=(d::at(d::at(this->_n_P_16360,_n_i_16469),0.0)-_n_r_16463);
double _n_dg_16471=(d::at(d::at(this->_n_P_16360,_n_i_16469),1.0)-_n_g_16464);
double _n_db_16472=(d::at(d::at(this->_n_P_16360,_n_i_16469),2.0)-_n_b_16465);
double _n_d_16473=((((0.3*_n_dr_16470)*_n_dr_16470)+((0.5*_n_dg_16471)*_n_dg_16471))+((0.2*_n_db_16472)*_n_db_16472));
if(d::truth((_n_d_16473<_n_bd_16468))){d::check_cancel();(void)(((_n_bd_16468=_n_d_16473),(_n_best_16467=_n_i_16469)));
}
}}
return ([&](){auto&& _n_array_16941=this->_n_lut_16363;auto _n_index_16942=_n_k_16466;auto _n_value_16943=_n_best_16467;d::put(_n_array_16941,_n_index_16942,_n_value_16943);return _n_value_16943;})();

}
}

std::array<double,3> _n_skyAt_16371(double _a0,double _a1){double _n_x_16474=_a0;
double _n_y_16475=_a1;
{
double _n_v_16476=_n_clamp_16351((_n_y_16475/_n_SHORE_16328));
double _n_west_16477=std::exp(((-d::number(std::fabs((_n_x_16474-80.0))))/120.0));
double _n_a_16478=_n_smooth_16352(0.0,0.5,_n_v_16476);
double _n_r_16479=_n_mix_16353(0.07,0.22,_n_a_16478);
double _n_g_16480=_n_mix_16353(0.07,0.14,_n_a_16478);
double _n_b_16481=_n_mix_16353(0.25,0.38,_n_a_16478);
(void)((_n_a_16478=_n_smooth_16352(0.42,0.86,_n_v_16476)));
(void)((((_n_r_16479=_n_mix_16353(_n_r_16479,0.52,_n_a_16478)),(_n_g_16480=_n_mix_16353(_n_g_16480,0.32,_n_a_16478))),(_n_b_16481=_n_mix_16353(_n_b_16481,0.58,_n_a_16478))));
(void)((_n_a_16478=(_n_smooth_16352(0.78,0.98,_n_v_16476)*(0.55+(0.45*_n_west_16477)))));
(void)((((_n_r_16479=_n_mix_16353(_n_r_16479,1.0,_n_a_16478)),(_n_g_16480=_n_mix_16353(_n_g_16480,0.62,_n_a_16478))),(_n_b_16481=_n_mix_16353(_n_b_16481,0.48,_n_a_16478))));
double _n_band_16482=((std::exp(((-d::number(std::fabs((_n_y_16475-74.0))))/4.0))*_n_west_16477)*0.18);
(void)((((_n_r_16479=(_n_r_16479+_n_band_16482)),(_n_g_16480=(_n_g_16480+(_n_band_16482*0.66)))),(_n_b_16481=(_n_b_16481+(_n_band_16482*0.45)))));
double _n_veil_16483=(0.86+(0.28*_n_fbm_16350((_n_x_16474*0.035),(_n_y_16475*0.09),3.0,0.0)));
(void)((((_n_r_16479=(_n_r_16479*_n_veil_16483)),(_n_g_16480=(_n_g_16480*_n_veil_16483))),(_n_b_16481=(_n_b_16481*_n_veil_16483))));
double _n_dx_16484=(_n_x_16474-d::at(_n_MOON_16330,0.0));
double _n_dy_16485=(_n_y_16475-d::at(_n_MOON_16330,1.0));
double _n_d_16486=std::sqrt(((_n_dx_16484*_n_dx_16484)+(_n_dy_16485*_n_dy_16485)));
double _n_halo_16487=([&](){auto _n_left_16944=(std::exp(((-d::number(_n_d_16486))/5.0))*0.24);auto _n_right_16945=(std::exp(((-d::number(_n_d_16486))/16.0))*0.07);return (_n_left_16944+_n_right_16945);})();
(void)((((_n_r_16479=(_n_r_16479+(_n_halo_16487*0.75))),(_n_g_16480=(_n_g_16480+(_n_halo_16487*0.72)))),(_n_b_16481=(_n_b_16481+_n_halo_16487))));
return std::array<double,3>{_n_r_16479,_n_g_16480,_n_b_16481};

}
}

double _n_hillA_16372(double _a0){double _n_x_16488=_a0;
return (77.5-([&](){auto _n_left_16946=(3.0+(13.0*_n_smooth_16352(70.0,175.0,_n_x_16488)));auto _n_right_16947=(0.3+(1.1*_n_fbm_16350(((_n_x_16488*0.022)+3.0),1.0,4.0,0.0)));return (_n_left_16946*_n_right_16947);})());}

double _n_hillB_16373(double _a0){double _n_x_16489=_a0;
return (77.0-(2.5*_n_fbm_16350(((_n_x_16489*0.04)+9.0),2.0,4.0,0.0)));}

double _n_town_16374(double _a0){double _n_x_16490=_a0;
{
double _n_i_16491=std::floor(((_n_x_16490+3.0)/11.0));
double _n_f_16492=(((_n_x_16490+3.0)/11.0)-_n_i_16491);
double _n_h_16493=(2.0+(_n_hash_16348(_n_i_16491,5.0)*2.5));
double _n_e_16494=(std::fabs((_n_f_16492-0.5))*2.0);
return (d::truth((_n_e_16494>0.86))?_n_SHORE_16328:(((_n_SHORE_16328-1.0)-_n_h_16493)+(d::maximum({0.0,(_n_e_16494-0.35)})*6.0)));

}
}

double _n_bankX_16378(double _a0){double _n_y_16527=_a0;
return ((38.0+((_n_y_16527-_n_SHORE_16328)*2.3))+(4.0*_n_fbm_16350((_n_y_16527*0.2),4.0,2.0,0.0)));}

double _n_lantern_16382(double _a0,double _a1){double _n_dx_16553=_a0;
double _n_y_16554=_a1;
{
double _n_ax_16555=std::fabs(_n_dx_16553);
if((d::truth((_n_y_16554>=93.5))&&d::truth((_n_y_16554<_n_LB_16332)))){d::check_cancel();return (d::truth((_n_ax_16555<=(4.2-(d::truth((_n_y_16554<94.5))?0.8:0.0))))?1.0:0.0);
}
if((d::truth((_n_y_16554>=87.0))&&d::truth((_n_y_16554<93.5)))){d::check_cancel();return (d::truth((_n_ax_16555<=1.4))?1.0:0.0);
}
if((d::truth((_n_y_16554>=85.5))&&d::truth((_n_y_16554<87.0)))){d::check_cancel();return (d::truth((_n_ax_16555<=(3.6-(d::truth((_n_y_16554<86.2))?0.6:0.0))))?1.0:0.0);
}
if((d::truth((_n_y_16554>=80.0))&&d::truth((_n_y_16554<85.5)))){d::check_cancel();if(((d::truth((_n_ax_16555<=1.7))&&d::truth((_n_y_16554>=80.8)))&&d::truth((_n_y_16554<84.8)))){d::check_cancel();return 2.0;
}
return (d::truth((_n_ax_16555<=2.9))?1.0:0.0);
}
if((d::truth((_n_y_16554>=76.5))&&d::truth((_n_y_16554<80.0)))){d::check_cancel();double _n_u_16556=((80.0-_n_y_16554)/3.5);
double _n_hw_16557=((5.6-(4.1*std::pow(_n_u_16556,0.8)))+(d::truth((_n_y_16554>79.2))?0.6:0.0));
return (d::truth((_n_ax_16555<=_n_hw_16557))?3.0:0.0);
}
if((d::truth((_n_y_16554>=73.5))&&d::truth((_n_y_16554<76.5)))){d::check_cancel();return (d::truth((_n_ax_16555<=(1.3-(std::fabs((_n_y_16554-75.0))*0.25))))?3.0:(d::truth((_n_ax_16555<=0.5))?3.0:0.0));
}
return 0.0;

}
}

double _n_at_16383(double _a0,double _a1){double _n_xc_16558=_a0;
double _n_y_16559=_a1;
return this->_n_lantern_16382(((_n_xc_16558-_n_LX_16331)/_n_LS_16333),(_n_LB_16332-((_n_LB_16332-_n_y_16559)/_n_LS_16333)));}

double _n_cdens_16389(double _a0,double _a1){double _n_x_16617=_a0;
double _n_y_16618=_a1;
return ([&](){auto _n_left_16948=_n_fbm_16350((_n_x_16617*0.014),(_n_y_16618*0.13),4.0,(this->_n_CW_16386*0.014));auto _n_right_16949=(0.3*(1.0-([&](){auto _n_left_16950=_n_smooth_16352(this->_n_C0_16387,(this->_n_C0_16387+10.0),_n_y_16618);auto _n_right_16951=_n_smooth_16352(this->_n_C1_16388,(this->_n_C1_16388-8.0),_n_y_16618);return (_n_left_16950*_n_right_16951);})()));return (_n_left_16948-_n_right_16949);})();}

explicit Native_kyoto_dusk(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_16360=d::map(_n_meta_16324->_p_palette,_n_hex_16354);
this->_n_N_16361=(_n_W_16326*_n_H_16327);
this->_n_out_16362=d::Array<d::String,false>(size_t(this->_n_N_16361));
this->_n_lut_16363=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_16365=d::Array<uint8_t,true>(size_t(this->_n_N_16361));
this->_n_R_16366=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_G_16367=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_B_16368=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_floorA_16369=d::Array<float,true>(size_t(this->_n_N_16361)).fill(0.12);
this->_n_warmth_16370=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_branches_16375=d::Array<d::Array<double,false>,false>{d::Array<double,false>{16.0,101.0,20.0,86.0,5.2,4.4},d::Array<double,false>{20.0,86.0,27.0,70.0,4.4,3.6},d::Array<double,false>{27.0,70.0,31.0,58.0,3.6,3.0},d::Array<double,false>{31.0,58.0,50.0,46.0,3.0,2.1},d::Array<double,false>{50.0,46.0,74.0,37.0,2.1,1.4},d::Array<double,false>{74.0,37.0,98.0,31.0,1.4,0.9},d::Array<double,false>{98.0,31.0,116.0,30.0,0.9,0.5},d::Array<double,false>{31.0,58.0,24.0,40.0,2.6,1.8},d::Array<double,false>{24.0,40.0,12.0,26.0,1.8,1.1},d::Array<double,false>{12.0,26.0,0.0,18.0,1.1,0.7},d::Array<double,false>{29.0,50.0,42.0,30.0,2.0,1.3},d::Array<double,false>{42.0,30.0,52.0,19.0,1.3,0.8},d::Array<double,false>{52.0,19.0,70.0,13.0,0.8,0.5},d::Array<double,false>{50.0,46.0,60.0,52.0,1.2,0.7},d::Array<double,false>{74.0,37.0,86.0,44.0,1.0,0.5},d::Array<double,false>{42.0,30.0,66.0,24.0,1.0,0.6},d::Array<double,false>{66.0,24.0,90.0,21.0,0.6,0.4},d::Array<double,false>{24.0,40.0,34.0,25.0,1.0,0.6},d::Array<double,false>{12.0,26.0,6.0,16.0,0.7,0.4},d::Array<double,false>{98.0,31.0,104.0,40.0,0.6,0.35},d::Array<double,false>{40.0,51.0,44.0,58.0,1.1,0.4},d::Array<double,false>{58.0,43.0,62.0,55.0,0.9,0.35},d::Array<double,false>{70.0,38.0,76.0,47.0,0.7,0.3}};
this->_n_limbs_16376=double(this->_n_branches_16375.size());
{double _n_b_16495=3.0;
for(;d::truth((_n_b_16495<this->_n_limbs_16376));(void)((_n_b_16495++))){d::check_cancel();auto _n_binding_16705=d::at(this->_n_branches_16375,_n_b_16495);
double _n_ax_16496=d::at(_n_binding_16705,0.0);
double _n_ay_16497=d::at(_n_binding_16705,1.0);
double _n_bx_16498=d::at(_n_binding_16705,2.0);
double _n_by_16499=d::at(_n_binding_16705,3.0);
double _n_w0_16500=d::at(_n_binding_16705,4.0);
double _n_w1_16501=d::at(_n_binding_16705,5.0);
double _n_ang_16502=std::atan2((_n_by_16499-_n_ay_16497),(_n_bx_16498-_n_ax_16496));
{double _n_j_16503=0.0;
for(;d::truth((_n_j_16503<3.0));(void)((_n_j_16503++))){d::check_cancel();double _n_k_16504=(0.25+(0.65*_n_hash_16348(((_n_b_16495*7.0)+_n_j_16503),31.0)));
double _n_sx_16505=_n_mix_16353(_n_ax_16496,_n_bx_16498,_n_k_16504);
double _n_sy_16506=_n_mix_16353(_n_ay_16497,_n_by_16499,_n_k_16504);
double _n_turn_16507=((d::truth(double(d::i32(_n_j_16503)&d::i32(1.0)))?1.0:(-d::number(1.0)))*(0.5+(0.6*_n_hash_16348(_n_b_16495,(_n_j_16503+40.0)))));
double _n_len_16508=(4.0+(7.0*_n_hash_16348((_n_b_16495+_n_j_16503),41.0)));
double _n_a2_16509=((_n_ang_16502+_n_turn_16507)-0.25);
(void)(this->_n_branches_16375.push(d::Array<double,false>{_n_sx_16505,_n_sy_16506,(_n_sx_16505+(std::cos(_n_a2_16509)*_n_len_16508)),(_n_sy_16506+(std::sin(_n_a2_16509)*_n_len_16508)),(_n_mix_16353(_n_w0_16500,_n_w1_16501,_n_k_16504)*0.55),0.3}));
}}
}}
this->_n_clusters_16377=d::Array<std::array<double,3>,false>{};
{double _n_b_16510=3.0;
for(;d::truth((_n_b_16510<double(this->_n_branches_16375.size())));(void)((_n_b_16510++))){d::check_cancel();auto _n_binding_16706=d::at(this->_n_branches_16375,_n_b_16510);
double _n_ax_16511=d::at(_n_binding_16706,0.0);
double _n_ay_16512=d::at(_n_binding_16706,1.0);
double _n_bx_16513=d::at(_n_binding_16706,2.0);
double _n_by_16514=d::at(_n_binding_16706,3.0);
double _n_w0_16515=d::at(_n_binding_16706,4.0);
double _n_len_16516=d::hypot(std::initializer_list<double>{(_n_bx_16513-_n_ax_16511),(_n_by_16514-_n_ay_16512)});
double _n_n_16517=(1.0+d::round((_n_len_16516/1.7)));
{double _n_i_16518=0.0;
for(;d::truth((_n_i_16518<=_n_n_16517));(void)((_n_i_16518++))){d::check_cancel();double _n_k_16519=(_n_i_16518/_n_n_16517);
if((d::truth((_n_k_16519<0.3))&&d::truth((_n_w0_16515>2.0)))){d::check_cancel();continue;
}
double _n_h1_16520=_n_hash_16348(((_n_b_16510*13.0)+_n_i_16518),7.0);
double _n_h2_16521=_n_hash_16348(((_n_b_16510*5.0)+_n_i_16518),11.0);
double _n_h3_16522=_n_hash_16348(((_n_b_16510*3.0)+_n_i_16518),17.0);
double _n_cx_16523=(_n_mix_16353(_n_ax_16511,_n_bx_16513,_n_k_16519)+((_n_h1_16520-0.5)*6.0));
double _n_cy_16524=((_n_mix_16353(_n_ay_16512,_n_by_16514,_n_k_16519)+((_n_h2_16521-0.5)*4.5))-1.0);
bool _n_spray_16525=([&]()->bool{auto _n_logical_16707=([&]()->bool{auto _n_logical_16708=(_n_b_16510>=(this->_n_limbs_16376-3.0));return d::truth(_n_logical_16708)?(_n_b_16510<this->_n_limbs_16376):_n_logical_16708;})();return d::truth(_n_logical_16707)?_n_logical_16707:(_n_b_16510>=(this->_n_limbs_16376+(3.0*(this->_n_limbs_16376-6.0))));})();
double _n_dome_16526=(9.0+(10.0*([&](){auto _n_argument_16709=_n_clamp_16351((std::fabs((_n_cx_16523-52.0))/70.0));auto _n_argument_16710=1.6;return std::pow(_n_argument_16709,_n_argument_16710);})()));
if(((d::truth((_n_cx_16523>122.0))||d::truth((_n_cy_16524<_n_dome_16526)))||d::truth((_n_cy_16524>(d::truth(_n_spray_16525)?55.0:47.0))))){d::check_cancel();continue;
}
(void)(this->_n_clusters_16377.push(std::array<double,3>{_n_cx_16523,_n_cy_16524,((1.4+(1.6*_n_h3_16522))+(0.8*_n_k_16519))}));
}}
}}
{double _n_r_16528=0.0;
for(;d::truth((_n_r_16528<_n_H_16327));(void)((_n_r_16528++))){d::check_cancel();{double _n_x_16529=0.0;
for(;d::truth((_n_x_16529<_n_W_16326));(void)((_n_x_16529++))){d::check_cancel();double _n_k_16530=((_n_r_16528*_n_W_16326)+_n_x_16529);
double _n_y_16531=(_n_r_16528+0.5);
double _n_xc_16532=(_n_x_16529+0.5);
double _n_m_16533=_n_SKY_16338;
std::optional<double> _n_cr_16534{};
std::optional<double> _n_cg_16535{};
std::optional<double> _n_cb_16536{};
double _n_fl_16537=0.12;
double _n_warm_16538=0.0;
if(d::truth((_n_y_16531<_n_SHORE_16328))){d::check_cancel();(void)(([&](){auto _n_unpack_16711=this->_n_skyAt_16371(_n_xc_16532,_n_y_16531);_n_cr_16534=std::optional<double>(d::at(_n_unpack_16711,0.0));_n_cg_16535=std::optional<double>(d::at(_n_unpack_16711,1.0));_n_cb_16536=std::optional<double>(d::at(_n_unpack_16711,2.0));return _n_unpack_16711;})());
(void)((_n_fl_16537=0.04));
if(d::truth((_n_y_16531>=this->_n_hillA_16372(_n_xc_16532)))){d::check_cancel();(void)((_n_m_16533=_n_HILL_16339));
auto&& _n_s_16539=([&](){auto _n_argument_16712=_n_xc_16532;auto _n_argument_16713=this->_n_hillA_16372(_n_xc_16532);return this->_n_skyAt_16371(_n_argument_16712,_n_argument_16713);})();
double _n_d_16540=([&](){auto _n_argument_16714=this->_n_hillA_16372(_n_xc_16532);auto _n_argument_16715=(this->_n_hillA_16372(_n_xc_16532)+8.0);auto _n_argument_16716=_n_y_16531;return _n_smooth_16352(_n_argument_16714,_n_argument_16715,_n_argument_16716);})();
double _n_tex_16541=_n_fbm_16350((_n_xc_16532*0.3),(_n_y_16531*0.45),3.0,0.0);
double _n_a_16542=((0.6+(0.2*_n_d_16540))+(0.25*(_n_tex_16541-0.5)));
(void)(((d::read((_n_cr_16534=std::optional<double>(_n_mix_16353(d::at(_n_s_16539,0.0),0.14,_n_a_16542)))),d::read((_n_cg_16535=std::optional<double>(_n_mix_16353(d::at(_n_s_16539,1.0),0.08,_n_a_16542))))),d::read((_n_cb_16536=std::optional<double>(_n_mix_16353(d::at(_n_s_16539,2.0),0.24,_n_a_16542))))));
double _n_lip_16543=(([&](){auto _n_argument_16717=(this->_n_hillA_16372(_n_xc_16532)+1.4);auto _n_argument_16718=this->_n_hillA_16372(_n_xc_16532);auto _n_argument_16719=_n_y_16531;return _n_smooth_16352(_n_argument_16717,_n_argument_16718,_n_argument_16719);})()*0.3);
(void)(((d::read((_n_cr_16534=std::optional<double>(_n_mix_16353(d::read(_n_cr_16534),(d::at(_n_s_16539,0.0)*1.1),_n_lip_16543)))),d::read((_n_cg_16535=std::optional<double>(_n_mix_16353(d::read(_n_cg_16535),(d::at(_n_s_16539,1.0)*1.05),_n_lip_16543))))),d::read((_n_cb_16536=std::optional<double>(_n_mix_16353(d::read(_n_cb_16536),d::at(_n_s_16539,2.0),_n_lip_16543))))));
}
if(d::truth((_n_y_16531>=this->_n_hillB_16373(_n_xc_16532)))){d::check_cancel();(void)((_n_m_16533=_n_HILL_16339));
double _n_tex_16544=_n_fbm_16350((_n_xc_16532*0.3),(_n_y_16531*0.3),3.0,0.0);
(void)(((d::read((_n_cr_16534=std::optional<double>((0.1+(0.05*_n_tex_16544))))),d::read((_n_cg_16535=std::optional<double>((0.07+(0.03*_n_tex_16544)))))),d::read((_n_cb_16536=std::optional<double>((0.17+(0.05*_n_tex_16544)))))));
double _n_mist_16545=(([&](){auto _n_argument_16720=(this->_n_hillB_16373(_n_xc_16532)+1.0);auto _n_argument_16721=_n_SHORE_16328;auto _n_argument_16722=_n_y_16531;return _n_smooth_16352(_n_argument_16720,_n_argument_16721,_n_argument_16722);})()*0.5);
(void)(((d::read((_n_cr_16534=std::optional<double>(_n_mix_16353(d::read(_n_cr_16534),0.7,_n_mist_16545)))),d::read((_n_cg_16535=std::optional<double>(_n_mix_16353(d::read(_n_cg_16535),0.44,_n_mist_16545))))),d::read((_n_cb_16536=std::optional<double>(_n_mix_16353(d::read(_n_cb_16536),0.58,_n_mist_16545))))));
}
if((d::truth((_n_y_16531>=this->_n_town_16374(_n_xc_16532)))&&d::truth((_n_xc_16532>70.0)))){d::check_cancel();(void)((_n_m_16533=_n_TOWN_16340));
(void)(((d::read((_n_cr_16534=std::optional<double>(0.08))),d::read((_n_cg_16535=std::optional<double>(0.06)))),d::read((_n_cb_16536=std::optional<double>(0.14)))));
double _n_tf_16546=(std::fabs((d::mod(((_n_xc_16532+3.0)/11.0),1.0)-0.5))*2.0);
if((d::truth((_n_y_16531<(this->_n_town_16374(_n_xc_16532)+0.9)))&&d::truth((_n_tf_16546<0.45)))){d::check_cancel();(void)((((d::read((_n_cr_16534=std::optional<double>(0.5))),d::read((_n_cg_16535=std::optional<double>(0.31)))),d::read((_n_cb_16536=std::optional<double>(0.44)))),(_n_fl_16537=0.06)));
}
double _n_wi_16547=std::floor((_n_xc_16532/4.0));
if((((d::truth((_n_y_16531>(_n_SHORE_16328-1.6)))&&d::truth((_n_y_16531<(_n_SHORE_16328-0.5))))&&d::truth((d::mod(_n_xc_16532,4.0)<1.2)))&&d::truth((_n_hash_16348(_n_wi_16547,7.0)>0.74)))){d::check_cancel();(void)(((d::read((_n_cr_16534=std::optional<double>(1.0))),d::read((_n_cg_16535=std::optional<double>(0.66)))),d::read((_n_cb_16536=std::optional<double>(0.32)))));
(void)((_n_fl_16537=0.3));
}
}
double _n_p_16548=_n_pagoda_16359((_n_xc_16532-_n_PX_16329),_n_y_16531);
if(d::truth(_n_p_16548)){d::check_cancel();(void)((_n_m_16533=_n_PAGODA_16341));
double _n_dx_16549=(_n_xc_16532-_n_PX_16329);
double _n_rim_16550=std::exp(((-d::number(std::fabs((_n_dx_16549+4.0))))/30.0));
if(d::truth((_n_p_16548==1.0))){d::check_cancel();(void)(((d::read((_n_cr_16534=std::optional<double>(0.07))),d::read((_n_cg_16535=std::optional<double>(0.05)))),d::read((_n_cb_16536=std::optional<double>(0.12)))));
}else {d::check_cancel();if(d::truth((_n_p_16548==2.0))){d::check_cancel();(void)(((d::read((_n_cr_16534=std::optional<double>((0.2+(0.08*_n_rim_16550))))),d::read((_n_cg_16535=std::optional<double>((0.13+(0.03*_n_rim_16550)))))),d::read((_n_cb_16536=std::optional<double>((0.27+(0.04*_n_rim_16550)))))));
}else {d::check_cancel();if(d::truth((_n_p_16548==3.0))){d::check_cancel();(void)(((d::read((_n_cr_16534=std::optional<double>(0.05))),d::read((_n_cg_16535=std::optional<double>(0.04)))),d::read((_n_cb_16536=std::optional<double>(0.1)))));
}else {d::check_cancel();if(d::truth((_n_p_16548==4.0))){d::check_cancel();(void)(((d::read((_n_cr_16534=std::optional<double>(((0.9*_n_rim_16550)+0.25)))),d::read((_n_cg_16535=std::optional<double>(((0.5*_n_rim_16550)+0.15))))),d::read((_n_cb_16536=std::optional<double>(((0.5*_n_rim_16550)+0.3))))));
}else {d::check_cancel();if(d::truth((_n_p_16548==5.0))){d::check_cancel();(void)(((d::read((_n_cr_16534=std::optional<double>((0.3+(0.2*(d::truth((_n_dx_16549<0.0))?1.0:0.0)))))),d::read((_n_cg_16535=std::optional<double>(0.22)))),d::read((_n_cb_16536=std::optional<double>(0.32)))));
}else {d::check_cancel();if(d::truth((_n_p_16548==6.0))){d::check_cancel();(void)((((d::read((_n_cr_16534=std::optional<double>(0.7))),d::read((_n_cg_16535=std::optional<double>(0.42)))),d::read((_n_cb_16536=std::optional<double>(0.24)))),(_n_fl_16537=0.2)));
}
}
}
}
}
}
}
}else {d::check_cancel();if(d::truth((_n_xc_16532<this->_n_bankX_16378(_n_y_16531)))){d::check_cancel();(void)((_n_m_16533=_n_BANK_16343));
double _n_tex_16551=_n_fbm_16350((_n_xc_16532*0.3),(_n_y_16531*0.5),3.0,0.0);
(void)(((d::read((_n_cr_16534=std::optional<double>((0.08+(0.05*_n_tex_16551))))),d::read((_n_cg_16535=std::optional<double>((0.08+(0.05*_n_tex_16551)))))),d::read((_n_cb_16536=std::optional<double>((0.1+(0.05*_n_tex_16551)))))));
if(d::truth(([&](){auto _n_left_16723=_n_hash_16348((_n_x_16529*7.0),(_n_r_16528*3.0));auto _n_right_16724=(0.975-(0.015*_n_smooth_16352((_n_SHORE_16328+4.0),_n_H_16327,_n_y_16531)));return (_n_left_16723>_n_right_16724);})())){d::check_cancel();(void)((((d::read((_n_cr_16534=std::optional<double>(0.42))),d::read((_n_cg_16535=std::optional<double>(0.22)))),d::read((_n_cb_16536=std::optional<double>(0.3)))),(_n_fl_16537=0.06)));
}
if(d::truth((_n_xc_16532>(this->_n_bankX_16378(_n_y_16531)-2.6)))){d::check_cancel();double _n_s_16552=(0.85+(0.3*_n_hash_16348((_n_x_16529*3.0),(_n_r_16528*5.0))));
(void)((((d::read((_n_cr_16534=std::optional<double>((0.45*_n_s_16552)))),d::read((_n_cg_16535=std::optional<double>((0.38*_n_s_16552))))),d::read((_n_cb_16536=std::optional<double>((0.46*_n_s_16552))))),(_n_fl_16537=0.1)));
}
(void)((_n_warm_16538=1.0));
}else {d::check_cancel();(void)((_n_m_16533=_n_POND_16342));
}
}
(void)(([&](){auto&& _n_array_16725=this->_n_mat_16365;auto _n_index_16726=_n_k_16530;auto _n_value_16727=_n_m_16533;d::put(_n_array_16725,_n_index_16726,_n_value_16727);return _n_value_16727;})());
(void)(((([&](){auto&& _n_array_16728=this->_n_R_16366;auto _n_index_16729=_n_k_16530;auto _n_value_16730=([&]()->double{auto _n_logical_16731=_n_cr_16534;return d::truth(_n_logical_16731)?d::read(_n_logical_16731):0.0;})();d::put(_n_array_16728,_n_index_16729,_n_value_16730);return _n_value_16730;})(),([&](){auto&& _n_array_16732=this->_n_G_16367;auto _n_index_16733=_n_k_16530;auto _n_value_16734=([&]()->double{auto _n_logical_16735=_n_cg_16535;return d::truth(_n_logical_16735)?d::read(_n_logical_16735):0.0;})();d::put(_n_array_16732,_n_index_16733,_n_value_16734);return _n_value_16734;})()),([&](){auto&& _n_array_16736=this->_n_B_16368;auto _n_index_16737=_n_k_16530;auto _n_value_16738=([&]()->double{auto _n_logical_16739=_n_cb_16536;return d::truth(_n_logical_16739)?d::read(_n_logical_16739):0.0;})();d::put(_n_array_16736,_n_index_16737,_n_value_16738);return _n_value_16738;})()));
(void)(([&](){auto&& _n_array_16740=this->_n_floorA_16369;auto _n_index_16741=_n_k_16530;auto _n_value_16742=_n_fl_16537;d::put(_n_array_16740,_n_index_16741,_n_value_16742);return _n_value_16742;})());
(void)(([&](){auto&& _n_array_16743=this->_n_warmth_16370;auto _n_index_16744=_n_k_16530;auto _n_value_16745=_n_warm_16538;d::put(_n_array_16743,_n_index_16744,_n_value_16745);return _n_value_16745;})());
}}
}}
this->_n_RR_16379=this->_n_R_16366.slice();
this->_n_RG_16380=this->_n_G_16367.slice();
this->_n_RB_16381=this->_n_B_16368.slice();
{double _n_r_16560=45.0;
for(;d::truth((_n_r_16560<_n_H_16327));(void)((_n_r_16560++))){d::check_cancel();{double _n_x_16561=(_n_LX_16331-14.0);
for(;d::truth((_n_x_16561<=(_n_LX_16331+14.0)));(void)((_n_x_16561++))){d::check_cancel();double _n_y_16562=(_n_r_16560+0.5);
double _n_xc_16563=(_n_x_16561+0.5);
double _n_l_16564=this->_n_at_16383(_n_xc_16563,_n_y_16562);
if(d::truth((!d::truth(_n_l_16564)))){d::check_cancel();continue;
}
double _n_k_16565=((_n_r_16560*_n_W_16326)+_n_x_16561);
double _n_py_16566=(_n_LB_16332-((_n_LB_16332-_n_y_16562)/_n_LS_16333));
double _n_pdx_16567=((_n_xc_16563-_n_LX_16331)/_n_LS_16333);
if(d::truth((_n_l_16564==2.0))){d::check_cancel();(void)(([&](){auto&& _n_array_16746=this->_n_mat_16365;auto _n_index_16747=_n_k_16565;auto _n_value_16748=_n_FLAME_16347;d::put(_n_array_16746,_n_index_16747,_n_value_16748);return _n_value_16748;})());
double _n_c_16568=std::exp((-d::number((((_n_pdx_16567*_n_pdx_16567)*0.5)+(((_n_py_16566-82.8)*(_n_py_16566-82.8))*0.35)))));
(void)((((([&](){auto&& _n_array_16749=this->_n_R_16366;auto _n_index_16750=_n_k_16565;auto _n_value_16751=(0.85+(0.15*_n_c_16568));d::put(_n_array_16749,_n_index_16750,_n_value_16751);return _n_value_16751;})(),([&](){auto&& _n_array_16752=this->_n_G_16367;auto _n_index_16753=_n_k_16565;auto _n_value_16754=(0.5+(0.38*_n_c_16568));d::put(_n_array_16752,_n_index_16753,_n_value_16754);return _n_value_16754;})()),([&](){auto&& _n_array_16755=this->_n_B_16368;auto _n_index_16756=_n_k_16565;auto _n_value_16757=(0.2+((0.4*_n_c_16568)*_n_c_16568));d::put(_n_array_16755,_n_index_16756,_n_value_16757);return _n_value_16757;})()),([&](){auto&& _n_array_16758=this->_n_floorA_16369;auto _n_index_16759=_n_k_16565;auto _n_value_16760=0.35;d::put(_n_array_16758,_n_index_16759,_n_value_16760);return _n_value_16760;})()));
}else {d::check_cancel();(void)(([&](){auto&& _n_array_16761=this->_n_mat_16365;auto _n_index_16762=_n_k_16565;auto _n_value_16763=_n_STONE_16346;d::put(_n_array_16761,_n_index_16762,_n_value_16763);return _n_value_16763;})());
double _n_g_16569=(0.8+(0.4*_n_hash_16348((_n_x_16561*5.0),(_n_r_16560*3.0))));
double _n_edge_16570=(d::truth((!d::truth(this->_n_at_16383(_n_xc_16563,(_n_y_16562-1.0)))))?1.0:0.0);
(void)(((([&](){auto&& _n_array_16764=this->_n_R_16366;auto _n_index_16765=_n_k_16565;auto _n_value_16766=((0.05+(0.22*_n_edge_16570))*_n_g_16569);d::put(_n_array_16764,_n_index_16765,_n_value_16766);return _n_value_16766;})(),([&](){auto&& _n_array_16767=this->_n_G_16367;auto _n_index_16768=_n_k_16565;auto _n_value_16769=((0.04+(0.14*_n_edge_16570))*_n_g_16569);d::put(_n_array_16767,_n_index_16768,_n_value_16769);return _n_value_16769;})()),([&](){auto&& _n_array_16770=this->_n_B_16368;auto _n_index_16771=_n_k_16565;auto _n_value_16772=((0.08+(0.2*_n_edge_16570))*_n_g_16569);d::put(_n_array_16770,_n_index_16771,_n_value_16772);return _n_value_16772;})()));
bool _n_under_16571=([&]()->bool{auto _n_logical_16773=([&]()->bool{auto _n_logical_16775=(_n_l_16564==3.0);return d::truth(_n_logical_16775)?(_n_py_16566>78.6):_n_logical_16775;})();return d::truth(_n_logical_16773)?_n_logical_16773:([&]()->bool{auto _n_logical_16774=(_n_py_16566>=85.5);return d::truth(_n_logical_16774)?(_n_py_16566<86.4):_n_logical_16774;})();})();
if(d::truth(_n_under_16571)){d::check_cancel();double _n_f_16572=(std::exp(((-d::number(std::fabs((_n_py_16566-82.8))))/3.0))*0.75);
(void)(((([&](){auto&& _n_array_16776=this->_n_R_16366;auto _n_index_16777=_n_k_16565;auto _n_value_16778=(d::at(_n_array_16776,_n_index_16777)+_n_f_16572);d::put(_n_array_16776,_n_index_16777,_n_value_16778);return _n_value_16778;})(),([&](){auto&& _n_array_16779=this->_n_G_16367;auto _n_index_16780=_n_k_16565;auto _n_value_16781=(d::at(_n_array_16779,_n_index_16780)+(_n_f_16572*0.5));d::put(_n_array_16779,_n_index_16780,_n_value_16781);return _n_value_16781;})()),([&](){auto&& _n_array_16782=this->_n_B_16368;auto _n_index_16783=_n_k_16565;auto _n_value_16784=(d::at(_n_array_16782,_n_index_16783)+(_n_f_16572*0.18));d::put(_n_array_16782,_n_index_16783,_n_value_16784);return _n_value_16784;})()));
}
(void)(([&](){auto&& _n_array_16785=this->_n_floorA_16369;auto _n_index_16786=_n_k_16565;auto _n_value_16787=0.02;d::put(_n_array_16785,_n_index_16786,_n_value_16787);return _n_value_16787;})());
}
(void)(([&](){auto&& _n_array_16788=this->_n_warmth_16370;auto _n_index_16789=_n_k_16565;auto _n_value_16790=(d::truth((_n_l_16564==2.0))?0.0:0.75);d::put(_n_array_16788,_n_index_16789,_n_value_16790);return _n_value_16790;})());
}}
}}
{double _n_r_16573=0.0;
for(;d::truth((_n_r_16573<_n_H_16327));(void)((_n_r_16573++))){d::check_cancel();{double _n_x_16574=0.0;
for(;d::truth((_n_x_16574<130.0));(void)((_n_x_16574++))){d::check_cancel();double _n_k_16575=((_n_r_16573*_n_W_16326)+_n_x_16574);
double _n_y_16576=(_n_r_16573+0.5);
double _n_xc_16577=(_n_x_16574+0.5);
double _n_d_16578=0.0;
double _n_best_16579=0.0;
double _n_up_16580=0.0;
for(auto &&_n_item_16791:this->_n_clusters_16377){d::check_cancel();auto _n_binding_16792=_n_item_16791;
double _n_cx_16581=d::at(_n_binding_16792,0.0);
double _n_cy_16582=d::at(_n_binding_16792,1.0);
double _n_rad_16583=d::at(_n_binding_16792,2.0);
{
double _n_dx_16584=(_n_xc_16577-_n_cx_16581);
double _n_dy_16585=((_n_y_16576-_n_cy_16582)*1.15);
double _n_q_16586=(((_n_dx_16584*_n_dx_16584)+(_n_dy_16585*_n_dy_16585))/(_n_rad_16583*_n_rad_16583));
if(d::truth((_n_q_16586<3.0))){d::check_cancel();double _n_c_16587=std::exp(((-d::number(_n_q_16586))*1.4));
(void)((_n_d_16578=(_n_d_16578+_n_c_16587)));
if(d::truth((_n_c_16587>_n_best_16579))){d::check_cancel();(void)(((_n_best_16579=_n_c_16587),(_n_up_16580=((_n_dy_16585+(_n_dx_16584*0.4))/_n_rad_16583))));
}
}

}
}
double _n_n_16588=_n_fbm_16350((_n_xc_16577*0.11),(_n_y_16576*0.15),3.0,0.0);
double _n_n2_16589=_n_noise_16349((_n_xc_16577*0.5),(_n_y_16576*0.6),0.0);
double _n_bloom_16590=(((1.0-std::exp(((-d::number(_n_d_16578))*1.5)))*(0.15+(1.35*_n_n_16588)))*(0.75+(0.5*_n_n2_16589)));
bool _n_onBranch_16591=false;
double _n_bw_16592=0.0;
for(auto &&_n_item_16793:this->_n_branches_16375){d::check_cancel();auto _n_binding_16794=_n_item_16793;
double _n_ax_16593=d::at(_n_binding_16794,0.0);
double _n_ay_16594=d::at(_n_binding_16794,1.0);
double _n_bx_16595=d::at(_n_binding_16794,2.0);
double _n_by_16596=d::at(_n_binding_16794,3.0);
double _n_w0_16597=d::at(_n_binding_16794,4.0);
double _n_w1_16598=d::at(_n_binding_16794,5.0);
{
auto _n_binding_16795=_n_seg_16355(_n_xc_16577,_n_y_16576,_n_ax_16593,_n_ay_16594,_n_bx_16595,_n_by_16596);
double _n_dist_16599=d::at(_n_binding_16795,0.0);
double _n_kk_16600=d::at(_n_binding_16795,1.0);
double _n_w_16601=((_n_mix_16353(_n_w0_16597,_n_w1_16598,_n_kk_16600)*0.5)+0.15);
if(d::truth((_n_dist_16599<_n_w_16601))){d::check_cancel();(void)((_n_onBranch_16591=true));
(void)((_n_bw_16592=d::maximum({_n_bw_16592,((_n_dist_16599/_n_w_16601)*(d::truth((_n_xc_16577<(_n_ax_16593+((_n_bx_16595-_n_ax_16593)*_n_kk_16600))))?(-d::number(1.0)):1.0))})));
}

}
}
if((d::truth(_n_onBranch_16591)&&d::truth((_n_bloom_16590<0.85)))){d::check_cancel();(void)(([&](){auto&& _n_array_16796=this->_n_mat_16365;auto _n_index_16797=_n_k_16575;auto _n_value_16798=_n_TREE_16344;d::put(_n_array_16796,_n_index_16797,_n_value_16798);return _n_value_16798;})());
double _n_lit_16602=_n_smooth_16352(0.35,1.0,_n_bw_16592);
(void)(((([&](){auto&& _n_array_16799=this->_n_R_16366;auto _n_index_16800=_n_k_16575;auto _n_value_16801=(0.05+(0.03*_n_lit_16602));d::put(_n_array_16799,_n_index_16800,_n_value_16801);return _n_value_16801;})(),([&](){auto&& _n_array_16802=this->_n_G_16367;auto _n_index_16803=_n_k_16575;auto _n_value_16804=(0.035+(0.01*_n_lit_16602));d::put(_n_array_16802,_n_index_16803,_n_value_16804);return _n_value_16804;})()),([&](){auto&& _n_array_16805=this->_n_B_16368;auto _n_index_16806=_n_k_16575;auto _n_value_16807=0.07;d::put(_n_array_16805,_n_index_16806,_n_value_16807);return _n_value_16807;})()));
(void)(([&](){auto&& _n_array_16808=this->_n_floorA_16369;auto _n_index_16809=_n_k_16575;auto _n_value_16810=0.0;d::put(_n_array_16808,_n_index_16809,_n_value_16810);return _n_value_16810;})());
(void)(([&](){auto&& _n_array_16811=this->_n_warmth_16370;auto _n_index_16812=_n_k_16575;auto _n_value_16813=0.8;d::put(_n_array_16811,_n_index_16812,_n_value_16813);return _n_value_16813;})());
}else {d::check_cancel();if(d::truth((_n_bloom_16590>0.5))){d::check_cancel();(void)(([&](){auto&& _n_array_16814=this->_n_mat_16365;auto _n_index_16815=_n_k_16575;auto _n_value_16816=_n_BLOOM_16345;d::put(_n_array_16814,_n_index_16815,_n_value_16816);return _n_value_16816;})());
double _n_inner_16603=_n_hash_16348((_n_x_16574*3.0),(_n_r_16573*7.0));
double _n_b_16604=_n_clamp_16351((((0.62-(0.6*_n_up_16580))+(0.26*(_n_inner_16603-0.5)))-(0.3*_n_smooth_16352(0.75,0.5,_n_bloom_16590))));
(void)((_n_b_16604=([&](){auto _n_argument_16817=_n_b_16604;auto _n_argument_16818=0.12;auto _n_argument_16819=_n_smooth_16352(0.3,1.1,_n_up_16580);return _n_mix_16353(_n_argument_16817,_n_argument_16818,_n_argument_16819);})()));
(void)((_n_b_16604=(_n_b_16604*(1.0-(0.3*_n_smooth_16352(28.0,48.0,_n_y_16576))))));
(void)(((([&](){auto&& _n_array_16820=this->_n_R_16366;auto _n_index_16821=_n_k_16575;auto _n_value_16822=(0.34+(0.64*_n_b_16604));d::put(_n_array_16820,_n_index_16821,_n_value_16822);return _n_value_16822;})(),([&](){auto&& _n_array_16823=this->_n_G_16367;auto _n_index_16824=_n_k_16575;auto _n_value_16825=(0.08+((0.62*_n_b_16604)*_n_b_16604));d::put(_n_array_16823,_n_index_16824,_n_value_16825);return _n_value_16825;})()),([&](){auto&& _n_array_16826=this->_n_B_16368;auto _n_index_16827=_n_k_16575;auto _n_value_16828=(0.2+(0.5*_n_b_16604));d::put(_n_array_16826,_n_index_16827,_n_value_16828);return _n_value_16828;})()));
(void)(([&](){auto&& _n_array_16829=this->_n_floorA_16369;auto _n_index_16830=_n_k_16575;auto _n_value_16831=0.1;d::put(_n_array_16829,_n_index_16830,_n_value_16831);return _n_value_16831;})());
(void)(([&](){auto&& _n_array_16832=this->_n_warmth_16370;auto _n_index_16833=_n_k_16575;auto _n_value_16834=1.0;d::put(_n_array_16832,_n_index_16833,_n_value_16834);return _n_value_16834;})());
}
}
}}
}}
this->_n_glow_16384=d::Array<float,true>(size_t(this->_n_N_16361));
{double _n_r_16605=0.0;
for(;d::truth((_n_r_16605<_n_H_16327));(void)((_n_r_16605++))){d::check_cancel();{double _n_x_16606=0.0;
for(;d::truth((_n_x_16606<_n_W_16326));(void)((_n_x_16606++))){d::check_cancel();double _n_dx_16607=((_n_x_16606+0.5)-d::at(_n_LAMP_16334,0.0));
double _n_dy_16608=(((_n_r_16605+0.5)-d::at(_n_LAMP_16334,1.0))*1.1);
double _n_d_16609=std::sqrt(((_n_dx_16607*_n_dx_16607)+(_n_dy_16608*_n_dy_16608)));
(void)(([&](){auto&& _n_array_16835=this->_n_glow_16384;auto _n_index_16836=((_n_r_16605*_n_W_16326)+_n_x_16606);auto _n_value_16837=([&](){auto _n_left_16838=([&](){auto _n_left_16840=(std::exp(((-d::number(_n_d_16609))/4.0))*0.6);auto _n_right_16841=(std::exp(((-d::number(_n_d_16609))/11.0))*0.32);return (_n_left_16840+_n_right_16841);})();auto _n_right_16839=(std::exp(((-d::number(_n_d_16609))/32.0))*0.1);return (_n_left_16838+_n_right_16839);})();d::put(_n_array_16835,_n_index_16836,_n_value_16837);return _n_value_16837;})());
double _n_m_16610=d::at(this->_n_mat_16365,((_n_r_16605*_n_W_16326)+_n_x_16606));
if((d::truth((_n_m_16610==_n_BLOOM_16345))||d::truth((_n_m_16610==_n_TREE_16344)))){d::check_cancel();(void)(([&](){auto&& _n_array_16842=this->_n_glow_16384;auto _n_index_16843=((_n_r_16605*_n_W_16326)+_n_x_16606);auto _n_value_16844=(d::at(_n_array_16842,_n_index_16843)+(std::exp(((-d::number(_n_d_16609))/11.0))*1.6));d::put(_n_array_16842,_n_index_16843,_n_value_16844);return _n_value_16844;})());
}
if(d::truth((_n_m_16610==_n_BANK_16343))){d::check_cancel();double _n_px_16611=(((_n_x_16606+0.5)-_n_LX_16331)/20.0);
double _n_py_16612=((((_n_r_16605+0.5)-_n_LB_16332)+3.0)/8.0);
(void)(([&](){auto&& _n_array_16845=this->_n_glow_16384;auto _n_index_16846=((_n_r_16605*_n_W_16326)+_n_x_16606);auto _n_value_16847=(d::at(_n_array_16845,_n_index_16846)+(std::exp((-d::number(((_n_px_16611*_n_px_16611)+(_n_py_16612*_n_py_16612)))))*0.6));d::put(_n_array_16845,_n_index_16846,_n_value_16847);return _n_value_16847;})());
}
}}
}}
this->_n_stars_16385=d::Array<std::array<double,3>,false>{};
{double _n_i_16613=0.0;
for(;d::truth((_n_i_16613<400.0));(void)((_n_i_16613++))){d::check_cancel();double _n_x_16614=std::floor((_n_hash_16348(_n_i_16613,91.0)*_n_W_16326));
double _n_r_16615=std::floor((_n_hash_16348(_n_i_16613,92.0)*40.0));
double _n_k_16616=((_n_r_16615*_n_W_16326)+_n_x_16614);
if((d::truth((d::at(this->_n_mat_16365,_n_k_16616)==_n_SKY_16338))&&d::truth((_n_hash_16348(_n_i_16613,93.0)>0.72)))){d::check_cancel();(void)(this->_n_stars_16385.push(std::array<double,3>{_n_k_16616,(_n_hash_16348(_n_i_16613,94.0)*6.28),(0.6+(_n_hash_16348(_n_i_16613,95.0)*1.6))}));
}
}}
this->_n_CW_16386=500.0;
this->_n_C0_16387=34.0;
this->_n_C1_16388=68.0;
this->_n_ccov_16390=d::Array<float,true>(size_t((this->_n_CW_16386*(this->_n_C1_16388-this->_n_C0_16387))));
this->_n_clit_16391=d::Array<float,true>(size_t((this->_n_CW_16386*(this->_n_C1_16388-this->_n_C0_16387))));
{double _n_r_16619=this->_n_C0_16387;
for(;d::truth((_n_r_16619<this->_n_C1_16388));(void)((_n_r_16619++))){d::check_cancel();{double _n_x_16620=0.0;
for(;d::truth((_n_x_16620<this->_n_CW_16386));(void)((_n_x_16620++))){d::check_cancel();double _n_y_16621=(_n_r_16619+0.5);
double _n_d_16622=this->_n_cdens_16389(_n_x_16620,_n_y_16621);
(void)(([&](){auto&& _n_array_16848=this->_n_ccov_16390;auto _n_index_16849=(((_n_r_16619-this->_n_C0_16387)*this->_n_CW_16386)+_n_x_16620);auto _n_value_16850=_n_smooth_16352(0.56,0.7,_n_d_16622);d::put(_n_array_16848,_n_index_16849,_n_value_16850);return _n_value_16850;})());
(void)(([&](){auto&& _n_array_16851=this->_n_clit_16391;auto _n_index_16852=(((_n_r_16619-this->_n_C0_16387)*this->_n_CW_16386)+_n_x_16620);auto _n_value_16853=_n_clamp_16351((0.5+((_n_d_16622-this->_n_cdens_16389((_n_x_16620-1.0),(_n_y_16621+2.2)))*7.0)));d::put(_n_array_16851,_n_index_16852,_n_value_16853);return _n_value_16853;})());
}}
}}
this->_n_petals_16392=d::Array<std::shared_ptr<_n_Record_16393>,false>{};
{double _n_i_16623=0.0;
for(;d::truth((_n_i_16623<50.0));(void)((_n_i_16623++))){d::check_cancel();(void)(this->_n_petals_16392.push(([&](){auto _n_object_16855=std::make_shared<_n_Record_16393>();_n_object_16855->_p_x=(([&](){auto _n_argument_16856=_n_hash_16348(_n_i_16623,101.0);auto _n_argument_16857=2.2;return std::pow(_n_argument_16856,_n_argument_16857);})()*140.0);_n_object_16855->_p_y=(_n_hash_16348(_n_i_16623,102.0)*(_n_H_16327+20.0));_n_object_16855->_p_vx=(3.0+(_n_hash_16348(_n_i_16623,103.0)*4.0));_n_object_16855->_p_vy=(1.6+(_n_hash_16348(_n_i_16623,104.0)*2.2));_n_object_16855->_p_sw=(1.0+(_n_hash_16348(_n_i_16623,105.0)*2.0));_n_object_16855->_p_sf=(0.6+(_n_hash_16348(_n_i_16623,106.0)*1.2));_n_object_16855->_p_ph=(_n_hash_16348(_n_i_16623,107.0)*6.28);_n_object_16855->_p_tum=(2.0+(_n_hash_16348(_n_i_16623,108.0)*4.0));return _n_object_16855;})()));
}}
this->_n_floaters_16394=d::Array<std::array<double,3>,false>{};
{double _n_i_16624=0.0;
for(;d::truth((_n_i_16624<26.0));(void)((_n_i_16624++))){d::check_cancel();(void)(this->_n_floaters_16394.push(std::array<double,3>{(_n_hash_16348(_n_i_16624,111.0)*_n_W_16326),((_n_SHORE_16328+3.0)+(_n_hash_16348(_n_i_16624,112.0)*20.0)),(0.3+(_n_hash_16348(_n_i_16624,113.0)*0.5))}));
}}
this->_n_dith_16395=d::Array<float,true>(size_t(this->_n_N_16361));
{double _n_k_16625=0.0;
for(;d::truth((_n_k_16625<this->_n_N_16361));(void)((_n_k_16625++))){d::check_cancel();(void)(([&](){auto&& _n_array_16858=this->_n_dith_16395;auto _n_index_16859=_n_k_16625;auto _n_value_16860=([&](){auto _n_left_16861=(d::at(_n_BAYER_16337,((double(d::i32(std::floor((_n_k_16625/_n_W_16326)))&d::i32(3.0))*4.0)+double(d::i32(d::mod(_n_k_16625,_n_W_16326))&d::i32(3.0))))*0.4);auto _n_right_16862=((_n_hash_16348(_n_k_16625,77.0)-0.5)*0.5);return (_n_left_16861+_n_right_16862);})();d::put(_n_array_16858,_n_index_16859,_n_value_16860);return _n_value_16860;})());
}}
this->_n_tone_16396=d::Array<float,true>(size_t(1025.0));
{double _n_i_16626=0.0;
for(;d::truth((_n_i_16626<=1024.0));(void)((_n_i_16626++))){d::check_cancel();double _n_v_16627=(_n_i_16626/256.0);
(void)(([&](){auto&& _n_array_16863=this->_n_tone_16396;auto _n_index_16864=_n_i_16626;auto _n_value_16865=(d::truth((_n_v_16627<0.75))?_n_v_16627:(0.75+(0.25*(1.0-std::exp(((-d::number((_n_v_16627-0.75)))*4.0))))));d::put(_n_array_16863,_n_index_16864,_n_value_16865);return _n_value_16865;})());
}}
this->_n_pr_16397=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_pg_16398=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_pb_16399=d::Array<float,true>(size_t(this->_n_N_16361));
this->_n_pmask_16400=d::Array<uint8_t,true>(size_t(this->_n_N_16361));
_render=[=]( double _a0,std::shared_ptr<_n_Record_16697> _a1) mutable ->d::String{double _n_t_16628=_a0;
auto _n_binding_16868=(d::present(_a1)?_a1:([&](){auto _n_object_16867=std::make_shared<_n_Record_16697>();return _n_object_16867;})());
std::optional<d::Array<uint8_t,true>> _n_color_16629=_n_binding_16868->_p_color;
{
double _n_flick_16630=([&](){auto _n_left_16869=(0.82+([&](){auto _n_left_16871=(0.1*std::sin((_n_t_16628*7.3)));auto _n_right_16872=std::sin(((_n_t_16628*3.1)+1.0));return (_n_left_16871*_n_right_16872);})());auto _n_right_16870=((0.12*(_n_noise_16349((_n_t_16628*4.0),3.3,0.0)-0.5))*2.0);return (_n_left_16869+_n_right_16870);})();
double _n_cdrift_16631=d::mod((d::mod((_n_t_16628*0.8),this->_n_CW_16386)+this->_n_CW_16386),this->_n_CW_16386);
(void)(this->_n_pmask_16400.fill(0.0));
for(auto &&_n_item_16873:this->_n_petals_16392){d::check_cancel();std::shared_ptr<_n_Record_16393> _n_p_16632=_n_item_16873;
{
double _n_xx_16633=(d::mod(((d::mod(((_n_p_16632->_p_x+(_n_p_16632->_p_vx*_n_t_16628))+(_n_p_16632->_p_sw*std::sin(((_n_t_16628*_n_p_16632->_p_sf)+_n_p_16632->_p_ph)))),(_n_W_16326+40.0))+_n_W_16326)+40.0),(_n_W_16326+40.0))-20.0);
double _n_yy_16634=(d::mod(((d::mod(((_n_p_16632->_p_y+(_n_p_16632->_p_vy*_n_t_16628))+(0.6*std::sin((((_n_t_16628*_n_p_16632->_p_sf)*1.7)+_n_p_16632->_p_ph)))),(_n_H_16327+20.0))+_n_H_16327)+20.0),(_n_H_16327+20.0))-10.0);
double _n_x_16635=d::round(_n_xx_16633);
double _n_r_16636=d::round(_n_yy_16634);
if((((d::truth((_n_x_16635<0.0))||d::truth((_n_x_16635>=_n_W_16326)))||d::truth((_n_r_16636<0.0)))||d::truth((_n_r_16636>=_n_H_16327)))){d::check_cancel();continue;
}
double _n_k_16637=((_n_r_16636*_n_W_16326)+_n_x_16635);
double _n_face_16638=((0.55+(0.45*std::fabs(std::sin(((_n_t_16628*_n_p_16632->_p_tum)+_n_p_16632->_p_ph)))))*((d::truth((d::at(this->_n_mat_16365,_n_k_16637)==_n_POND_16342))||d::truth((d::at(this->_n_mat_16365,_n_k_16637)==_n_BANK_16343)))?0.6:1.0));
double _n_lg_16639=((d::at(this->_n_glow_16384,_n_k_16637)*_n_flick_16630)*1.6);
(void)(((([&](){auto&& _n_array_16874=this->_n_pr_16397;auto _n_index_16875=_n_k_16637;auto _n_value_16876=((1.0*_n_face_16638)+(_n_lg_16639*0.6));d::put(_n_array_16874,_n_index_16875,_n_value_16876);return _n_value_16876;})(),([&](){auto&& _n_array_16877=this->_n_pg_16398;auto _n_index_16878=_n_k_16637;auto _n_value_16879=((0.76*_n_face_16638)+(_n_lg_16639*0.35));d::put(_n_array_16877,_n_index_16878,_n_value_16879);return _n_value_16879;})()),([&](){auto&& _n_array_16880=this->_n_pb_16399;auto _n_index_16881=_n_k_16637;auto _n_value_16882=((0.84*_n_face_16638)+(_n_lg_16639*0.1));d::put(_n_array_16880,_n_index_16881,_n_value_16882);return _n_value_16882;})()));
(void)(([&](){auto&& _n_array_16883=this->_n_pmask_16400;auto _n_index_16884=_n_k_16637;auto _n_value_16885=1.0;d::put(_n_array_16883,_n_index_16884,_n_value_16885);return _n_value_16885;})());

}
}
{double _n_r_16640=0.0;
for(;d::truth((_n_r_16640<_n_H_16327));(void)((_n_r_16640++))){d::check_cancel();double _n_y_16641=(_n_r_16640+0.5);
{double _n_x_16642=0.0;
for(;d::truth((_n_x_16642<_n_W_16326));(void)((_n_x_16642++))){d::check_cancel();double _n_k_16643=((_n_r_16640*_n_W_16326)+_n_x_16642);
double _n_m_16644=d::at(this->_n_mat_16365,_n_k_16643);
double _n_cr_16645{};
double _n_cg_16646{};
double _n_cb_16647{};
double _n_fl_16648=d::at(this->_n_floorA_16369,_n_k_16643);
double _n_fade_16649=1.0;
if(d::truth((_n_m_16644==_n_POND_16342))){d::check_cancel();double _n_depth_16650=((_n_y_16641-_n_SHORE_16328)/(_n_H_16327-_n_SHORE_16328));
double _n_wob_16651=(std::sin((((_n_y_16641*1.7)-(_n_t_16628*2.0))+(std::sin(((_n_x_16642*0.13)+(_n_t_16628*0.6)))*1.4)))*(0.05+(0.8*_n_depth_16650)));
double _n_sx_16652=d::round((_n_x_16642+_n_wob_16651));
(void)((_n_sx_16652=(d::truth((_n_sx_16652<0.0))?0.0:(d::truth((_n_sx_16652>(_n_W_16326-1.0)))?(_n_W_16326-1.0):_n_sx_16652))));
double _n_w_16653=_n_noise_16349(((_n_x_16642*0.14)+(_n_t_16628*0.2)),((_n_y_16641*1.1)-(_n_t_16628*0.8)),0.0);
double _n_sr_16654=d::round((((_n_SHORE_16328-1.0)-((_n_r_16640-_n_SHORE_16328)*1.35))+(((_n_w_16653-0.5)*3.0)*_n_depth_16650)));
(void)((_n_sr_16654=(d::truth((_n_sr_16654<0.0))?0.0:(d::truth((_n_sr_16654>(_n_SHORE_16328-1.0)))?(_n_SHORE_16328-1.0):_n_sr_16654))));
double _n_j_16655=((_n_sr_16654*_n_W_16326)+_n_sx_16652);
double _n_lit_16656=(([&](){auto _n_argument_16886=0.95;auto _n_argument_16887=0.6;auto _n_argument_16888=_n_smooth_16352((_n_SHORE_16328+1.0),(_n_SHORE_16328+6.0),_n_y_16641);return _n_mix_16353(_n_argument_16886,_n_argument_16887,_n_argument_16888);})()*(0.8+(0.4*_n_w_16653)));
(void)((((_n_cr_16645=((d::at(this->_n_RR_16379,_n_j_16655)*_n_lit_16656)*0.9)),(_n_cg_16646=((d::at(this->_n_RG_16380,_n_j_16655)*_n_lit_16656)*0.92))),(_n_cb_16647=((d::at(this->_n_RB_16381,_n_j_16655)*_n_lit_16656)+0.03))));
double _n_glint_16657=(_n_smooth_16352(0.74,0.95,_n_w_16653)*0.06);
(void)((((_n_cr_16645=(_n_cr_16645+_n_glint_16657)),(_n_cg_16646=(_n_cg_16646+(_n_glint_16657*0.8)))),(_n_cb_16647=(_n_cb_16647+_n_glint_16657))));
double _n_sl_16658=((([&](){auto _n_left_16889=std::exp(((-d::number(std::fabs(((((_n_x_16642+0.5)-_n_LX_16331)-9.0)-((_n_y_16641-_n_SHORE_16328)*0.25)))))/(3.5+(_n_depth_16650*3.0))));auto _n_right_16890=_n_smooth_16352(0.45,0.8,_n_w_16653);return (_n_left_16889*_n_right_16890);})()*1.0)*_n_flick_16630);
(void)((((_n_cr_16645=(_n_cr_16645+_n_sl_16658)),(_n_cg_16646=(_n_cg_16646+(_n_sl_16658*0.62)))),(_n_cb_16647=(_n_cb_16647+(_n_sl_16658*0.25)))));
(void)((_n_fade_16649=_n_smooth_16352((_n_H_16327+2.0),(_n_H_16327-9.0),_n_y_16641)));
}else {d::check_cancel();(void)((((_n_cr_16645=d::at(this->_n_R_16366,_n_k_16643)),(_n_cg_16646=d::at(this->_n_G_16367,_n_k_16643))),(_n_cb_16647=d::at(this->_n_B_16368,_n_k_16643))));
if(((d::truth((_n_m_16644==_n_SKY_16338))&&d::truth((_n_r_16640>=this->_n_C0_16387)))&&d::truth((_n_r_16640<this->_n_C1_16388)))){d::check_cancel();double _n_sx_16659=(_n_x_16642+_n_cdrift_16631);
double _n_ix_16660=std::floor(_n_sx_16659);
double _n_fx_16661=(_n_sx_16659-_n_ix_16660);
double _n_i0_16662=(((_n_r_16640-this->_n_C0_16387)*this->_n_CW_16386)+d::mod(_n_ix_16660,this->_n_CW_16386));
double _n_i1_16663=(((_n_r_16640-this->_n_C0_16387)*this->_n_CW_16386)+d::mod((_n_ix_16660+1.0),this->_n_CW_16386));
double _n_c_16664=(d::at(this->_n_ccov_16390,_n_i0_16662)+((d::at(this->_n_ccov_16390,_n_i1_16663)-d::at(this->_n_ccov_16390,_n_i0_16662))*_n_fx_16661));
if(d::truth((_n_c_16664>0.01))){d::check_cancel();double _n_l_16665=(d::at(this->_n_clit_16391,_n_i0_16662)+((d::at(this->_n_clit_16391,_n_i1_16663)-d::at(this->_n_clit_16391,_n_i0_16662))*_n_fx_16661));
double _n_sun_16666=([&](){auto _n_left_16891=(_n_l_16665*(0.45+(0.55*_n_smooth_16352(this->_n_C0_16387,this->_n_C1_16388,_n_y_16641))));auto _n_right_16892=(0.6+(0.4*std::exp(((-d::number(std::fabs((_n_x_16642-80.0))))/90.0))));return (_n_left_16891*_n_right_16892);})();
double _n_a_16667=(_n_c_16664*0.85);
(void)((((_n_cr_16645=([&](){auto _n_argument_16893=_n_cr_16645;auto _n_argument_16894=_n_mix_16353(0.2,1.0,_n_sun_16666);auto _n_argument_16895=_n_a_16667;return _n_mix_16353(_n_argument_16893,_n_argument_16894,_n_argument_16895);})()),(_n_cg_16646=([&](){auto _n_argument_16896=_n_cg_16646;auto _n_argument_16897=_n_mix_16353(0.12,0.58,_n_sun_16666);auto _n_argument_16898=_n_a_16667;return _n_mix_16353(_n_argument_16896,_n_argument_16897,_n_argument_16898);})())),(_n_cb_16647=([&](){auto _n_argument_16899=_n_cb_16647;auto _n_argument_16900=_n_mix_16353(0.27,0.5,_n_sun_16666);auto _n_argument_16901=_n_a_16667;return _n_mix_16353(_n_argument_16899,_n_argument_16900,_n_argument_16901);})())));
}
}
}
double _n_wm_16668=d::at(this->_n_warmth_16370,_n_k_16643);
if(d::truth((_n_wm_16668>0.0))){d::check_cancel();double _n_g_16669=((d::at(this->_n_glow_16384,_n_k_16643)*_n_flick_16630)*_n_wm_16668);
(void)((((_n_cr_16645=(_n_cr_16645+(_n_g_16669*1.0))),(_n_cg_16646=(_n_cg_16646+(_n_g_16669*0.58)))),(_n_cb_16647=(_n_cb_16647+(_n_g_16669*0.22)))));
}else {d::check_cancel();if((d::truth((_n_m_16644==_n_SKY_16338))||d::truth((_n_m_16644==_n_POND_16342)))){d::check_cancel();double _n_g_16670=((d::at(this->_n_glow_16384,_n_k_16643)*_n_flick_16630)*0.6);
(void)((((_n_cr_16645=(_n_cr_16645+_n_g_16670)),(_n_cg_16646=(_n_cg_16646+(_n_g_16670*0.6)))),(_n_cb_16647=(_n_cb_16647+(_n_g_16670*0.3)))));
}
}
if(d::truth((_n_m_16644==_n_FLAME_16347))){d::check_cancel();double _n_f_16671=(0.85+(0.25*_n_flick_16630));
(void)((((_n_cr_16645=_n_f_16671),(_n_cg_16646=(0.72*_n_f_16671))),(_n_cb_16647=(0.38*_n_f_16671))));
}
if((d::truth(d::at(this->_n_pmask_16400,_n_k_16643))&&d::truth((_n_m_16644!=_n_FLAME_16347)))){d::check_cancel();(void)(((((_n_cr_16645=d::at(this->_n_pr_16397,_n_k_16643)),(_n_cg_16646=d::at(this->_n_pg_16398,_n_k_16643))),(_n_cb_16647=d::at(this->_n_pb_16399,_n_k_16643))),(_n_fl_16648=0.3)));
}
(void)((((_n_cr_16645=d::at(this->_n_tone_16396,d::minimum({1024.0,double(d::i32((_n_cr_16645*256.0))|d::i32(0.0))}))),(_n_cg_16646=d::at(this->_n_tone_16396,d::minimum({1024.0,double(d::i32((_n_cg_16646*256.0))|d::i32(0.0))})))),(_n_cb_16647=d::at(this->_n_tone_16396,d::minimum({1024.0,double(d::i32((_n_cb_16647*256.0))|d::i32(0.0))})))));
double _n_peak_16672=d::maximum({_n_cr_16645,_n_cg_16646,_n_cb_16647,0.0001});
double _n_level_16673=(_n_clamp_16351((_n_fl_16648+(((1.0-_n_fl_16648)*std::pow(_n_peak_16672,1.1))*1.02)))*_n_fade_16649);
double _n_step_16674=([&](){auto _n_argument_16902=0.0;auto _n_argument_16903=([&](){auto _n_argument_16904=3.0;auto _n_argument_16905=d::round(((_n_level_16673*3.0)+d::at(this->_n_dith_16395,_n_k_16643)));return d::minimum({_n_argument_16904,_n_argument_16905});})();return d::maximum({_n_argument_16902,_n_argument_16903});})();
(void)(([&](){auto&& _n_array_16906=this->_n_out_16362;auto _n_index_16907=_n_k_16643;auto _n_value_16908=d::at(_n_DOTS_16335,_n_step_16674);d::put(_n_array_16906,_n_index_16907,_n_value_16908);return _n_value_16908;})());
if(d::truth(_n_color_16629)){d::check_cancel();double _n_want_16675=(d::truth(_n_step_16674)?d::minimum({1.0,((_n_level_16673+0.06)/d::at(_n_COVER_16336,_n_step_16674))}):0.0);
double _n_s_16676=((0.3+(0.7*_n_want_16675))/_n_peak_16672);
(void)(([&](){auto&& _n_array_16909=d::read(_n_color_16629);auto _n_index_16910=_n_k_16643;auto _n_value_16911=([&](){auto _n_argument_16912=_n_clamp_16351((_n_cr_16645*_n_s_16676));auto _n_argument_16913=_n_clamp_16351((_n_cg_16646*_n_s_16676));auto _n_argument_16914=_n_clamp_16351((_n_cb_16647*_n_s_16676));return this->_n_nearest_16364(_n_argument_16912,_n_argument_16913,_n_argument_16914);})();d::put(_n_array_16909,_n_index_16910,_n_value_16911);return _n_value_16911;})());
}
}}
}}
{double _n_r_16677=(d::at(_n_MOON_16330,1.0)-6.0);
for(;d::truth((_n_r_16677<=(d::at(_n_MOON_16330,1.0)+6.0)));(void)((_n_r_16677++))){d::check_cancel();{double _n_x_16678=(d::at(_n_MOON_16330,0.0)-6.0);
for(;d::truth((_n_x_16678<=(d::at(_n_MOON_16330,0.0)+6.0)));(void)((_n_x_16678++))){d::check_cancel();double _n_dx_16679=((_n_x_16678+0.5)-d::at(_n_MOON_16330,0.0));
double _n_dy_16680=((_n_r_16677+0.5)-d::at(_n_MOON_16330,1.0));
bool _n_inside_16681=(((_n_dx_16679*_n_dx_16679)+(_n_dy_16680*_n_dy_16680))<(5.2*5.2));
double _n_ex_16682=(_n_dx_16679-2.2);
double _n_ey_16683=(_n_dy_16680+1.6);
if((d::truth(_n_inside_16681)&&d::truth((((_n_ex_16682*_n_ex_16682)+(_n_ey_16683*_n_ey_16683))>(4.9*4.9))))){d::check_cancel();double _n_k_16684=((_n_r_16677*_n_W_16326)+_n_x_16678);
(void)(([&](){auto&& _n_array_16915=this->_n_out_16362;auto _n_index_16916=_n_k_16684;auto _n_value_16917=d::String(u"●");d::put(_n_array_16915,_n_index_16916,_n_value_16917);return _n_value_16917;})());
if(d::truth(_n_color_16629)){d::check_cancel();(void)(([&](){auto&& _n_array_16918=d::read(_n_color_16629);auto _n_index_16919=_n_k_16684;auto _n_value_16920=this->_n_nearest_16364(1.0,0.96,0.86);d::put(_n_array_16918,_n_index_16919,_n_value_16920);return _n_value_16920;})());
}
}
}}
}}
for(auto &&_n_item_16921:this->_n_stars_16385){d::check_cancel();auto _n_binding_16922=_n_item_16921;
double _n_k_16685=d::at(_n_binding_16922,0.0);
double _n_ph_16686=d::at(_n_binding_16922,1.0);
double _n_sp_16687=d::at(_n_binding_16922,2.0);
{
double _n_s_16688=std::sin(((_n_t_16628*_n_sp_16687)+_n_ph_16686));
if(d::truth((_n_s_16688>(-d::number(0.3))))){d::check_cancel();(void)(([&](){auto&& _n_array_16923=this->_n_out_16362;auto _n_index_16924=_n_k_16685;auto _n_value_16925=(d::truth((_n_s_16688>0.7))?d::String(u"•"):d::String(u"·"));d::put(_n_array_16923,_n_index_16924,_n_value_16925);return _n_value_16925;})());
if(d::truth(_n_color_16629)){d::check_cancel();(void)(([&](){auto&& _n_array_16926=d::read(_n_color_16629);auto _n_index_16927=_n_k_16685;auto _n_value_16928=this->_n_nearest_16364(0.9,0.88,1.0);d::put(_n_array_16926,_n_index_16927,_n_value_16928);return _n_value_16928;})());
}
}

}
}
for(auto &&_n_item_16929:this->_n_floaters_16394){d::check_cancel();auto _n_binding_16930=_n_item_16929;
double _n_fx_16689=d::at(_n_binding_16930,0.0);
double _n_fy_16690=d::at(_n_binding_16930,1.0);
double _n_sp_16691=d::at(_n_binding_16930,2.0);
{
double _n_x_16692=d::round(d::mod((_n_fx_16689+(_n_t_16628*_n_sp_16691)),_n_W_16326));
double _n_r_16693=d::round((_n_fy_16690+(0.3*std::sin(((_n_t_16628*0.8)+_n_fx_16689)))));
if(d::truth((_n_r_16693>=_n_H_16327))){d::check_cancel();continue;
}
double _n_k_16694=((_n_r_16693*_n_W_16326)+_n_x_16692);
if(d::truth((d::at(this->_n_mat_16365,_n_k_16694)!=_n_POND_16342))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_16931=this->_n_out_16362;auto _n_index_16932=_n_k_16694;auto _n_value_16933=d::String(u"•");d::put(_n_array_16931,_n_index_16932,_n_value_16933);return _n_value_16933;})());
if(d::truth(_n_color_16629)){d::check_cancel();(void)(([&](){auto&& _n_array_16934=d::read(_n_color_16629);auto _n_index_16935=_n_k_16694;auto _n_value_16936=this->_n_nearest_16364(0.95,0.72,0.8);d::put(_n_array_16934,_n_index_16935,_n_value_16936);return _n_value_16936;})());
}

}
}
d::Array<d::String,false> _n_lines_16695=d::Array<d::String,false>{};
{double _n_r_16696=0.0;
for(;d::truth((_n_r_16696<_n_H_16327));(void)((_n_r_16696++))){d::check_cancel();(void)(_n_lines_16695.push(d::join(this->_n_out_16362.slice((_n_r_16696*_n_W_16326),((_n_r_16696+1.0)*_n_W_16326)),d::String(u""))));
}}
return d::join(_n_lines_16695,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("kyoto-dusk").cols)*ascii::catalog_meta("kyoto-dusk").rows);auto _env=std::make_shared<_n_Record_16697>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &kyoto_dusk_meta(){return catalog_meta("kyoto-dusk");}
std::unique_ptr<Piece> make_kyoto_dusk(const AsciiPieceOptions &o){return std::make_unique<Native_kyoto_dusk>(o);}
}
