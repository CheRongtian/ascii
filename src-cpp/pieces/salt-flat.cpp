// Direct, statically typed C++ from src/pieces/salt-flat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26351;
struct _n_Record_26548;
struct _n_Record_26351{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_26351> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26351>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_26548{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26548> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26548>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_26369(double _a0,double _a1);
double _n_noise_26370(double _a0,double _a1);
double _n_clamp_26371(double _a0);
double _n_smooth_26372(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_26373(d::String _a0);
void _n_spectrum_26375(double _a0);
double _n_sideL_26376(double _a0,double _a1);
double _n_sideR_26377(double _a0,double _a1);
std::shared_ptr<_n_Record_26351> _n_meta_26350=[](){return ([&](){auto _n_object_26551=std::make_shared<_n_Record_26351>();_n_object_26551->_p_name=d::String(u"salt flat");_n_object_26551->_p_category=d::String(u"scenes");_n_object_26551->_p_note=d::String(u"the vercel triangle over a mirror of salt, the sun rising behind its tip");_n_object_26551->_p_cols=200.0;_n_object_26551->_p_rows=100.0;_n_object_26551->_p_cell=1.0;_n_object_26551->_p_fps=15.0;_n_object_26551->_p_ground=d::String(u"#000000");_n_object_26551->_p_palette=d::Array<d::String,false>{d::String(u"#0d0d0e"),d::String(u"#161617"),d::String(u"#1f1f21"),d::String(u"#2a2a2c"),d::String(u"#363638"),d::String(u"#444446"),d::String(u"#555557"),d::String(u"#69696b"),d::String(u"#808082"),d::String(u"#9a9a9c"),d::String(u"#b8b8ba"),d::String(u"#d8d8da"),d::String(u"#ffffff"),d::String(u"#50e3c2"),d::String(u"#0070f3"),d::String(u"#7928ca"),d::String(u"#ff0080"),d::String(u"#ff4d4d"),d::String(u"#f9cb28"),d::String(u"#b0f2e3"),d::String(u"#8cbcf9"),d::String(u"#bb94e4"),d::String(u"#ff8cc0"),d::String(u"#ffa6a6"),d::String(u"#fce59a"),d::String(u"#24665a"),d::String(u"#00326d"),d::String(u"#36125b"),d::String(u"#73003a"),d::String(u"#732323"),d::String(u"#705b12")};return _n_object_26551;})();}();
const double _n_W_26352=[](){return 200.0;}();
const double _n_H_26353=[](){return 100.0;}();
const double _n_CX_26354=[](){return 100.0;}();
const double _n_HW_26355=[](){return 22.0;}();
const double _n_PH_26356=[](){return (_n_HW_26355*std::sqrt(3.0));}();
const double _n_HORIZON_26357=[](){return 57.0;}();
const double _n_LIFT_26358=[](){return 1.7;}();
const double _n_BASE_26359=[](){return (_n_HORIZON_26357-_n_LIFT_26358);}();
const double _n_APEX_26360=[](){return (_n_BASE_26359-_n_PH_26356);}();
const double _n_SUNY_26361=[](){return (_n_APEX_26360+3.2);}();
const double _n_S3_26362=[](){return (std::sqrt(3.0)/2.0);}();
const double _n_LOOP_26363=[](){return 24.0;}();
const double _n_TAU_26364=[](){return (ascii::PI*2.0);}();
const d::String _n_DOTS_26365=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_26366=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_26367=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_26395=_a0;
return ((_n_v_26395/16.0)-0.47);});}();
d::Array<d::Array<double,false>,false> _n_SPECTRUM_26368=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.31,0.89,0.76},d::Array<double,false>{0.0,0.44,0.95},d::Array<double,false>{0.47,0.16,0.79},d::Array<double,false>{1.0,0.0,0.5},d::Array<double,false>{1.0,0.3,0.3},d::Array<double,false>{0.98,0.8,0.16}};}();
d::Array<double,false> _n_spec_26374=[](){return d::Array<double,false>{0.0,0.0,0.0};}();
double _n_hash_26369(double _a0,double _a1){double _n_x_26396=_a0;
double _n_y_26397=_a1;
{
double _n_h_26398=([&](){auto _n_left_26552=d::imul(double(d::i32(_n_x_26396)|d::i32(0.0)),374761393.0);auto _n_right_26553=d::imul(double(d::i32(_n_y_26397)|d::i32(0.0)),668265263.0);return (_n_left_26552+_n_right_26553);})();
(void)((_n_h_26398=d::imul(double(d::i32(_n_h_26398)^d::i32(double(d::u32(_n_h_26398)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_26398)^d::i32(double(d::u32(_n_h_26398)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_26370(double _a0,double _a1){double _n_x_26399=_a0;
double _n_y_26400=_a1;
{
double _n_xi_26401=std::floor(_n_x_26399);
double _n_yi_26402=std::floor(_n_y_26400);
double _n_fx_26403=(_n_x_26399-_n_xi_26401);
double _n_fy_26404=(_n_y_26400-_n_yi_26402);
double _n_u_26405=((_n_fx_26403*_n_fx_26403)*(3.0-(2.0*_n_fx_26403)));
double _n_v_26406=((_n_fy_26404*_n_fy_26404)*(3.0-(2.0*_n_fy_26404)));
double _n_a_26407=_n_hash_26369(_n_xi_26401,_n_yi_26402);
double _n_b_26408=_n_hash_26369((_n_xi_26401+1.0),_n_yi_26402);
double _n_c_26409=_n_hash_26369(_n_xi_26401,(_n_yi_26402+1.0));
double _n_d_26410=_n_hash_26369((_n_xi_26401+1.0),(_n_yi_26402+1.0));
return (((_n_a_26407+((_n_b_26408-_n_a_26407)*_n_u_26405))+((_n_c_26409-_n_a_26407)*_n_v_26406))+(((((_n_a_26407-_n_b_26408)-_n_c_26409)+_n_d_26410)*_n_u_26405)*_n_v_26406));

}
}

double _n_clamp_26371(double _a0){double _n_v_26411=_a0;
return (d::truth((_n_v_26411<0.0))?0.0:(d::truth((_n_v_26411>1.0))?1.0:_n_v_26411));}

double _n_smooth_26372(double _a0,double _a1,double _a2){double _n_a_26412=_a0;
double _n_b_26413=_a1;
double _n_v_26414=_a2;
{
double _n_k_26415=_n_clamp_26371(((_n_v_26414-_n_a_26412)/(_n_b_26413-_n_a_26412)));
return ((_n_k_26415*_n_k_26415)*(3.0-(2.0*_n_k_26415)));

}
}

d::Array<double,false> _n_hex_26373(d::String _a0){d::String _n_s_26416=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_26417=_a0;
return (([&](){auto _n_argument_26554=d::slice(_n_s_26416,_n_i_26417,(_n_i_26417+2.0));auto _n_argument_26555=16.0;return d::parseInt(_n_argument_26554,_n_argument_26555);})()/255.0);});}

void _n_spectrum_26375(double _a0){double _n_h_26418=_a0;
{
double _n_p_26419=(d::mod((d::mod(_n_h_26418,1.0)+1.0),1.0)*6.0);
double _n_i_26420=std::floor(_n_p_26419);
double _n_f_26421=(_n_p_26419-_n_i_26420);
d::Array<double,false> _n_a_26422=d::at(_n_SPECTRUM_26368,_n_i_26420);
d::Array<double,false> _n_b_26423=d::at(_n_SPECTRUM_26368,d::mod((_n_i_26420+1.0),6.0));
{double _n_c_26424=0.0;
for(;d::truth((_n_c_26424<3.0));(void)((_n_c_26424++))){d::check_cancel();(void)(([&](){auto&& _n_array_26556=_n_spec_26374;auto _n_index_26557=_n_c_26424;auto _n_value_26558=(d::at(_n_a_26422,_n_c_26424)+((d::at(_n_b_26423,_n_c_26424)-d::at(_n_a_26422,_n_c_26424))*_n_f_26421));d::put(_n_array_26556,_n_index_26557,_n_value_26558);return _n_value_26558;})());
}}

}
}

double _n_sideL_26376(double _a0,double _a1){double _n_x_26425=_a0;
double _n_y_26426=_a1;
{
return (((-d::number((_n_x_26425-(_n_CX_26354-_n_HW_26355))))*_n_S3_26362)-((_n_y_26426-_n_BASE_26359)*0.5));

}
}

double _n_sideR_26377(double _a0,double _a1){double _n_x_26427=_a0;
double _n_y_26428=_a1;
{
return (((_n_x_26427-(_n_CX_26354+_n_HW_26355))*_n_S3_26362)-((_n_y_26428-_n_BASE_26359)*0.5));

}
}

struct Native_salt_flat final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_26378{};
double _n_N_26379{};
d::Array<d::String,false> _n_out_26380{};
d::Array<uint8_t,true> _n_lut_26381{};
double _n_CAM_26383{};
double _n_F_26384{};
double _n_SIZE_26385{};
d::Array<float,true> _n_ridge_26386{};
d::Array<float,true> _n_stars_26387{};
double _n_FANS_26388{};
d::Array<float,true> _n_fans_26389{};
d::Array<float,true> _n_still_26390{};
d::Array<float,true> _n_corona_26391{};
d::Array<float,true> _n_fall_26392{};
d::Array<uint16_t,true> _n_angle_26393{};
d::Array<float,true> _n_shine_26394{};
std::function<d::String(double,std::shared_ptr<_n_Record_26548>)> _render;
double _n_nearest_26382(double _a0,double _a1,double _a2){double _n_r_26429=_a0;
double _n_g_26430=_a1;
double _n_b_26431=_a2;
{
double _n_k_26432=([&](){auto _n_left_26640=([&](){auto _n_left_26642=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_26429*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_26643=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_26430*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_26642)|d::i32(_n_right_26643));})();auto _n_right_26641=d::minimum({31.0,double(d::i32((_n_b_26431*31.99))|d::i32(0.0))});return double(d::i32(_n_left_26640)|d::i32(_n_right_26641));})();
if(d::truth((d::at(this->_n_lut_26381,_n_k_26432)!=255.0))){d::check_cancel();return d::at(this->_n_lut_26381,_n_k_26432);
}
double _n_best_26433=0.0;
double _n_bd_26434=1000000000.0;
{double _n_i_26435=0.0;
for(;d::truth((_n_i_26435<double(this->_n_P_26378.size())));(void)((_n_i_26435++))){d::check_cancel();double _n_dr_26436=(d::at(d::at(this->_n_P_26378,_n_i_26435),0.0)-_n_r_26429);
double _n_dg_26437=(d::at(d::at(this->_n_P_26378,_n_i_26435),1.0)-_n_g_26430);
double _n_db_26438=(d::at(d::at(this->_n_P_26378,_n_i_26435),2.0)-_n_b_26431);
double _n_d_26439=((((0.3*_n_dr_26436)*_n_dr_26436)+((0.5*_n_dg_26437)*_n_dg_26437))+((0.2*_n_db_26438)*_n_db_26438));
if(d::truth((_n_d_26439<_n_bd_26434))){d::check_cancel();(void)(((_n_bd_26434=_n_d_26439),(_n_best_26433=_n_i_26435)));
}
}}
return ([&](){auto&& _n_array_26644=this->_n_lut_26381;auto _n_index_26645=_n_k_26432;auto _n_value_26646=_n_best_26433;d::put(_n_array_26644,_n_index_26645,_n_value_26646);return _n_value_26646;})();

}
}

explicit Native_salt_flat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_26378=d::map(_n_meta_26350->_p_palette,_n_hex_26373);
this->_n_N_26379=(_n_W_26352*_n_H_26353);
this->_n_out_26380=d::Array<d::String,false>(size_t(this->_n_N_26379));
this->_n_lut_26381=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_CAM_26383=250.0;
this->_n_F_26384=64.0;
this->_n_SIZE_26385=2.0;
this->_n_ridge_26386=d::Array<float,true>(size_t(this->_n_N_26379));
this->_n_stars_26387=d::Array<float,true>(size_t(this->_n_N_26379));
{double _n_r_26440=0.0;
for(;d::truth((_n_r_26440<_n_H_26353));(void)((_n_r_26440++))){d::check_cancel();{double _n_x_26441=0.0;
for(;d::truth((_n_x_26441<_n_W_26352));(void)((_n_x_26441++))){d::check_cancel();double _n_k_26442=((_n_r_26440*_n_W_26352)+_n_x_26441);
double _n_y_26443=(_n_r_26440+0.5);
if(d::truth((_n_y_26443<_n_HORIZON_26357))){d::check_cancel();if((d::truth((_n_y_26443<(_n_HORIZON_26357-14.0)))&&d::truth((_n_hash_26369(_n_x_26441,((_n_r_26440*5.0)+3.0))>0.988)))){d::check_cancel();(void)(([&](){auto&& _n_array_26559=this->_n_stars_26387;auto _n_index_26560=_n_k_26442;auto _n_value_26561=(0.4+(0.6*_n_hash_26369(_n_r_26440,_n_x_26441)));d::put(_n_array_26559,_n_index_26560,_n_value_26561);return _n_value_26561;})());
}
continue;
}
double _n_d_26444=(_n_y_26443-_n_HORIZON_26357);
double _n_Z_26445=(this->_n_CAM_26383/_n_d_26444);
double _n_X_26446=((((_n_x_26441+0.5)-_n_CX_26354)*_n_Z_26445)/this->_n_F_26384);
double _n_wx_26447=(_n_X_26446+(0.16*(_n_noise_26370((_n_X_26446*0.5),(_n_Z_26445*0.5))-0.5)));
double _n_wz_26448=(_n_Z_26445+(0.16*(_n_noise_26370(((_n_X_26446*0.5)+7.3),((_n_Z_26445*0.5)+1.9))-0.5)));
double _n_q_26449=(((2.0/3.0)*_n_wx_26447)/this->_n_SIZE_26385);
double _n_rr_26450=(((((-d::number(1.0))/3.0)*_n_wx_26447)+((std::sqrt(3.0)/3.0)*_n_wz_26448))/this->_n_SIZE_26385);
double _n_cx_26451=d::round(_n_q_26449);
double _n_cz_26452=d::round(_n_rr_26450);
double _n_cy_26453=d::round(((-d::number(_n_q_26449))-_n_rr_26450));
double _n_dx_26454=std::fabs((_n_cx_26451-_n_q_26449));
double _n_dz_26455=std::fabs((_n_cz_26452-_n_rr_26450));
double _n_dy_26456=std::fabs(((_n_cy_26453+_n_q_26449)+_n_rr_26450));
if((d::truth((_n_dx_26454>_n_dz_26455))&&d::truth((_n_dx_26454>_n_dy_26456)))){d::check_cancel();(void)((_n_cx_26451=((-d::number(_n_cz_26452))-_n_cy_26453)));
}else {d::check_cancel();if(d::truth((_n_dz_26455>_n_dy_26456))){d::check_cancel();(void)((_n_cz_26452=((-d::number(_n_cx_26451))-_n_cy_26453)));
}
}
double _n_vx_26457=(_n_wx_26447-((this->_n_SIZE_26385*1.5)*_n_cx_26451));
double _n_vz_26458=(_n_wz_26448-((this->_n_SIZE_26385*std::sqrt(3.0))*(_n_cz_26452+(_n_cx_26451/2.0))));
double _n_a0_26459=std::fabs(_n_vz_26458);
double _n_a1_26460=std::fabs(((_n_S3_26362*_n_vx_26457)+(0.5*_n_vz_26458)));
double _n_a2_26461=std::fabs(((_n_S3_26362*_n_vx_26457)-(0.5*_n_vz_26458)));
double _n_nx_26462=0.0;
double _n_nz_26463=d::sign(_n_vz_26458);
double _n_h_26464=_n_a0_26459;
if(d::truth((_n_a1_26460>_n_h_26464))){d::check_cancel();(void)((((_n_h_26464=_n_a1_26460),(_n_nx_26462=(_n_S3_26362*d::sign(((_n_S3_26362*_n_vx_26457)+(0.5*_n_vz_26458)))))),(_n_nz_26463=(0.5*d::sign(((_n_S3_26362*_n_vx_26457)+(0.5*_n_vz_26458)))))));
}
if(d::truth((_n_a2_26461>_n_h_26464))){d::check_cancel();(void)((((_n_h_26464=_n_a2_26461),(_n_nx_26462=(_n_S3_26362*d::sign(((_n_S3_26362*_n_vx_26457)-(0.5*_n_vz_26458)))))),(_n_nz_26463=((-d::number(0.5))*d::sign(((_n_S3_26362*_n_vx_26457)-(0.5*_n_vz_26458)))))));
}
double _n_e_26465=((this->_n_SIZE_26385*_n_S3_26362)-_n_h_26464);
double _n_dZy_26466=((-d::number((_n_Z_26445*_n_Z_26445)))/this->_n_CAM_26383);
double _n_dXx_26467=(_n_Z_26445/this->_n_F_26384);
double _n_dXy_26468=((((_n_x_26441+0.5)-_n_CX_26354)/this->_n_F_26384)*_n_dZy_26466);
double _n_gx_26469=(_n_nx_26462*_n_dXx_26467);
double _n_gy_26470=((_n_nx_26462*_n_dXy_26468)+(_n_nz_26463*_n_dZy_26466));
double _n_px_26471=(_n_e_26465/std::sqrt((((_n_gx_26469*_n_gx_26469)+(_n_gy_26470*_n_gy_26470))+1e-9)));
double _n_tall_26472=(((this->_n_SIZE_26385*2.0)*_n_S3_26362)/std::fabs(_n_dZy_26466));
(void)(([&](){auto&& _n_array_26562=this->_n_ridge_26386;auto _n_index_26563=_n_k_26442;auto _n_value_26564=([&](){auto _n_left_26565=_n_smooth_26372(0.95,0.25,_n_px_26471);auto _n_right_26566=_n_smooth_26372(5.0,15.0,_n_tall_26472);return (_n_left_26565*_n_right_26566);})();d::put(_n_array_26562,_n_index_26563,_n_value_26564);return _n_value_26564;})());
}}
}}
this->_n_FANS_26388=1024.0;
this->_n_fans_26389=d::Array<float,true>(size_t(this->_n_FANS_26388));
this->_n_still_26390=d::Array<float,true>(size_t(this->_n_N_26379));
this->_n_corona_26391=d::Array<float,true>(size_t(this->_n_N_26379));
this->_n_fall_26392=d::Array<float,true>(size_t(this->_n_N_26379));
this->_n_angle_26393=d::Array<uint16_t,true>(size_t(this->_n_N_26379));
this->_n_shine_26394=d::Array<float,true>(size_t(this->_n_N_26379));
{double _n_r_26473=0.0;
for(;d::truth((_n_r_26473<_n_H_26353));(void)((_n_r_26473++))){d::check_cancel();{double _n_x_26474=0.0;
for(;d::truth((_n_x_26474<_n_W_26352));(void)((_n_x_26474++))){d::check_cancel();double _n_k_26475=((_n_r_26473*_n_W_26352)+_n_x_26474);
double _n_xc_26476=(_n_x_26474+0.5);
double _n_y_26477=(d::truth(((_n_r_26473+0.5)<_n_HORIZON_26357))?(_n_r_26473+0.5):(((2.0*_n_HORIZON_26357)-_n_r_26473)-0.5));
double _n_dx_26478=(_n_xc_26476-_n_CX_26354);
double _n_ds_26479=(_n_y_26477-_n_SUNY_26361);
double _n_dist_26480=std::sqrt(((_n_dx_26478*_n_dx_26478)+(_n_ds_26479*_n_ds_26479)));
double _n_up_26481=(_n_HORIZON_26357-_n_y_26477);
(void)(([&](){auto&& _n_array_26567=this->_n_still_26390;auto _n_index_26568=_n_k_26475;auto _n_value_26569=(([&](){auto _n_left_26570=([&](){auto _n_left_26572=([&](){auto _n_left_26574=(0.22*std::exp(((-d::number(_n_up_26481))/3.0)));auto _n_right_26575=(0.025*std::exp(((-d::number(_n_up_26481))/10.0)));return (_n_left_26574+_n_right_26575);})();auto _n_right_26573=(0.8*std::exp(((-d::number((_n_up_26481*_n_up_26481)))/0.7)));return (_n_left_26572+_n_right_26573);})();auto _n_right_26571=([&](){auto _n_left_26576=(0.35*std::exp(((-d::number((_n_ds_26479*_n_ds_26479)))/0.5)));auto _n_right_26577=std::exp(((-d::number(std::fabs(_n_dx_26478)))/32.0));return (_n_left_26576*_n_right_26577);})();return (_n_left_26570+_n_right_26571);})()+(d::truth((_n_dist_26480<4.5))?1.0:0.0));d::put(_n_array_26567,_n_index_26568,_n_value_26569);return _n_value_26569;})());
(void)(([&](){auto&& _n_array_26578=this->_n_corona_26391;auto _n_index_26579=_n_k_26475;auto _n_value_26580=([&](){auto _n_left_26581=(0.9*std::exp(((-d::number(_n_dist_26480))/2.5)));auto _n_right_26582=(0.25*std::exp(((-d::number(_n_dist_26480))/8.0)));return (_n_left_26581+_n_right_26582);})();d::put(_n_array_26578,_n_index_26579,_n_value_26580);return _n_value_26580;})());
double _n_th_26482=std::atan2(_n_dx_26478,(-d::number(_n_ds_26479)));
(void)(([&](){auto&& _n_array_26583=this->_n_fall_26392;auto _n_index_26584=_n_k_26475;auto _n_value_26585=([&](){auto _n_left_26586=([&](){auto _n_left_26588=_n_smooth_26372(4.0,12.0,_n_dist_26480);auto _n_right_26589=std::exp(((-d::number(_n_dist_26480))/50.0));return (_n_left_26588*_n_right_26589);})();auto _n_right_26587=([&](){auto _n_argument_26590=2.35;auto _n_argument_26591=1.75;auto _n_argument_26592=std::fabs(_n_th_26482);return _n_smooth_26372(_n_argument_26590,_n_argument_26591,_n_argument_26592);})();return (_n_left_26586*_n_right_26587);})();d::put(_n_array_26583,_n_index_26584,_n_value_26585);return _n_value_26585;})());
(void)(([&](){auto&& _n_array_26593=this->_n_angle_26393;auto _n_index_26594=_n_k_26475;auto _n_value_26595=([&](){auto _n_argument_26596=(this->_n_FANS_26388-1.0);auto _n_argument_26597=std::floor((((_n_th_26482+ascii::PI)/_n_TAU_26364)*this->_n_FANS_26388));return d::minimum({_n_argument_26596,_n_argument_26597});})();d::put(_n_array_26593,_n_index_26594,_n_value_26595);return _n_value_26595;})());
(void)(([&](){auto&& _n_array_26598=this->_n_shine_26394;auto _n_index_26599=_n_k_26475;auto _n_value_26600=([&](){auto _n_left_26601=(0.3+(0.25*std::exp(((-d::number((_n_dx_26478*_n_dx_26478)))/2500.0))));auto _n_right_26602=_n_smooth_26372((_n_HORIZON_26357+2.0),(_n_HORIZON_26357+12.0),(_n_r_26473+0.5));return (_n_left_26601*_n_right_26602);})();d::put(_n_array_26598,_n_index_26599,_n_value_26600);return _n_value_26600;})());
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_26548> _a1) mutable ->d::String{double _n_t_26483=_a0;
auto _n_binding_26605=(d::present(_a1)?_a1:([&](){auto _n_object_26604=std::make_shared<_n_Record_26548>();return _n_object_26604;})());
std::optional<d::Array<uint8_t,true>> _n_color_26484=_n_binding_26605->_p_color;
{
double _n_w_26485=(_n_TAU_26364/_n_LOOP_26363);
double _n_breathe_26486=(0.92+(0.08*std::sin(((_n_t_26483*_n_w_26485)*2.0))));
double _n_spin_26487=(_n_t_26483*_n_w_26485);
double _n_gp_26488=(d::mod(_n_t_26483,6.0)/1.4);
double _n_ge_26489=d::minimum({1.0,_n_gp_26488});
double _n_gI_26490=(d::truth((_n_gp_26488<1.0))?(0.5+(0.5*_n_gp_26488)):(d::truth((_n_gp_26488<1.5))?(1.0-((_n_gp_26488-1.0)*2.0)):0.0));
double _n_gy_26491=(_n_BASE_26359-((_n_PH_26356*_n_ge_26489)*_n_ge_26489));
double _n_flare_26492=((d::truth((_n_gp_26488>0.8))&&d::truth((_n_gp_26488<1.5)))?std::sin((((_n_gp_26488-0.8)/0.7)*ascii::PI)):0.0);
{double _n_i_26493=0.0;
for(;d::truth((_n_i_26493<this->_n_FANS_26388));(void)((_n_i_26493++))){d::check_cancel();double _n_th_26494=(((_n_i_26493/this->_n_FANS_26388)*_n_TAU_26364)-ascii::PI);
double _n_a_26495=(0.5+(0.5*std::cos((((14.0*_n_th_26494)+_n_spin_26487)+(1.4*std::sin(((5.0*_n_th_26494)-(_n_spin_26487*2.0))))))));
double _n_b_26496=(0.5+(0.5*std::cos((((23.0*_n_th_26494)-(_n_spin_26487*3.0))+(0.9*std::sin(((3.0*_n_th_26494)+_n_spin_26487)))))));
(void)((((_n_a_26495=(_n_a_26495*_n_a_26495)),(_n_a_26495=(_n_a_26495*_n_a_26495))),(_n_a_26495=(_n_a_26495*_n_a_26495))));
(void)(((((_n_b_26496=(_n_b_26496*_n_b_26496)),(_n_b_26496=(_n_b_26496*_n_b_26496))),(_n_b_26496=(_n_b_26496*_n_b_26496))),(_n_b_26496=(_n_b_26496*_n_b_26496))));
(void)(([&](){auto&& _n_array_26606=this->_n_fans_26389;auto _n_index_26607=_n_i_26493;auto _n_value_26608=(((_n_a_26495*0.55)+(_n_b_26496*0.18))*_n_breathe_26486);d::put(_n_array_26606,_n_index_26607,_n_value_26608);return _n_value_26608;})());
}}
double _n_R_26497=0.0;
double _n_G_26498=0.0;
double _n_B_26499=0.0;
double _n_COV_26500=0.0;
auto _n_world_26501=[&]( double _a0,double _a1,double _a2,bool _a3) mutable ->void{double _n_x_26502=_a0;
double _n_y_26503=_a1;
double _n_k_26504=_a2;
bool _n_near_26505=_a3;
{
double _n_dx_26506=(_n_x_26502-_n_CX_26354);
double _n_l_26507=((d::at(this->_n_still_26390,_n_k_26504)+(d::at(this->_n_corona_26391,_n_k_26504)*_n_breathe_26486))+(d::at(this->_n_fall_26392,_n_k_26504)*d::at(this->_n_fans_26389,d::at(this->_n_angle_26393,_n_k_26504))));
if(d::truth((_n_gI_26490>0.0))){d::check_cancel();double _n_gh_26508=(_n_HW_26355*(1.0-((_n_BASE_26359-_n_gy_26491)/_n_PH_26356)));
double _n_gdy_26509=(_n_y_26503-_n_gy_26491);
double _n_gl_26510=(d::minimum({std::pow(((_n_x_26502-_n_CX_26354)+_n_gh_26508),2.0),std::pow(((_n_x_26502-_n_CX_26354)-_n_gh_26508),2.0)})+(_n_gdy_26509*_n_gdy_26509));
(void)((_n_l_26507=(_n_l_26507+((std::exp(((-d::number(_n_gl_26510))/5.0))*_n_gI_26490)*0.7))));
}
if(d::truth((_n_flare_26492>0.0))){d::check_cancel();double _n_da_26511=(_n_y_26503-_n_APEX_26360);
(void)((_n_l_26507=(_n_l_26507+((_n_flare_26492*([&](){auto _n_left_26609=([&](){auto _n_left_26611=std::exp(((-d::number((_n_da_26511*_n_da_26511)))/0.35));auto _n_right_26612=std::exp(((-d::number(std::fabs(_n_dx_26506)))/16.0));return (_n_left_26611*_n_right_26612);})();auto _n_right_26610=([&](){auto _n_left_26613=std::exp(((-d::number((_n_dx_26506*_n_dx_26506)))/0.35));auto _n_right_26614=std::exp(((-d::number(std::fabs(_n_da_26511)))/12.0));return (_n_left_26613*_n_right_26614);})();return (_n_left_26609+_n_right_26610);})())*0.9))));
}
if(d::truth(_n_near_26505)){d::check_cancel();double _n_s_26512=d::at(this->_n_stars_26387,([&](){auto _n_left_26615=(std::floor(_n_y_26503)*_n_W_26352);auto _n_right_26616=std::floor(_n_x_26502);return (_n_left_26615+_n_right_26616);})());
if(d::truth(_n_s_26512)){d::check_cancel();(void)((_n_l_26507=([&](){auto _n_argument_26617=_n_l_26507;auto _n_argument_26618=([&](){auto _n_left_26619=(_n_s_26512*(0.65+(0.35*std::sin((((_n_t_26483*_n_w_26485)*(2.0+double(d::i32((_n_s_26512*10.0))|d::i32(0.0))))+(_n_s_26512*40.0))))));auto _n_right_26620=_n_smooth_26372(0.25,0.04,_n_l_26507);return (_n_left_26619*_n_right_26620);})();return d::maximum({_n_argument_26617,_n_argument_26618});})()));
}
}
(void)((((_n_R_26497=_n_l_26507),(_n_G_26498=_n_l_26507)),(_n_B_26499=_n_l_26507)));
(void)((_n_COV_26500=0.0));
double _n_sl_26513=_n_sideL_26376(_n_x_26502,_n_y_26503);
double _n_sr_26514=_n_sideR_26377(_n_x_26502,_n_y_26503);
double _n_sb_26515=(_n_y_26503-_n_BASE_26359);
double _n_edge_26516=d::maximum({_n_sl_26513,_n_sr_26514});
double _n_sd_26517=d::maximum({_n_edge_26516,_n_sb_26515});
if(d::truth((_n_sd_26517>4.0))){d::check_cancel();return;
}
double _n_cov_26518=_n_clamp_26371((0.5-(_n_sd_26517*1.4)));
(void)((_n_COV_26500=_n_clamp_26371((0.5-(_n_sd_26517*0.5)))));
(void)((((_n_R_26497=(_n_R_26497*(1.0-_n_cov_26518))),(_n_G_26498=(_n_G_26498*(1.0-_n_cov_26518)))),(_n_B_26499=(_n_B_26499*(1.0-_n_cov_26518)))));
double _n_hgt_26519=_n_clamp_26371(((_n_BASE_26359-_n_y_26503)/_n_PH_26356));
if(d::truth((_n_sb_26515<0.4))){d::check_cancel();double _n_rim_26520=(std::exp(((-d::number(((_n_edge_26516+0.55)*(_n_edge_26516+0.55))))/0.3))*(0.8+(0.4*_n_hgt_26519)));
if(d::truth((_n_gI_26490>0.0))){d::check_cancel();(void)((_n_rim_26520=(_n_rim_26520+(([&](){auto _n_left_26621=(std::exp(((-d::number(((_n_y_26503-_n_gy_26491)*(_n_y_26503-_n_gy_26491))))/3.0))*_n_gI_26490);auto _n_right_26622=std::exp(((-d::number(((_n_edge_26516+0.5)*(_n_edge_26516+0.5))))/0.6));return (_n_left_26621*_n_right_26622);})()*1.2))));
}
(void)((_n_rim_26520=(_n_rim_26520*_n_smooth_26372(0.4,(-d::number(0.6)),_n_sb_26515))));
(void)((((_n_R_26497=(_n_R_26497+_n_rim_26520)),(_n_G_26498=(_n_G_26498+_n_rim_26520))),(_n_B_26499=(_n_B_26499+_n_rim_26520))));
if(d::truth((_n_edge_26516>(-d::number(0.5))))){d::check_cancel();double _n_fr_26521=([&](){auto _n_left_26623=(std::exp(((-d::number(((_n_edge_26516-0.7)*(_n_edge_26516-0.7))))/0.5))*(0.45+(0.3*_n_hgt_26519)));auto _n_right_26624=_n_smooth_26372(0.4,(-d::number(1.2)),_n_sb_26515);return (_n_left_26623*_n_right_26624);})();
(void)(_n_spectrum_26375(((((_n_edge_26516*0.18)+(_n_hgt_26519*0.9))-(_n_t_26483/6.0))+(d::truth((_n_sl_26513>_n_sr_26514))?0.0:0.5))));
(void)((((_n_R_26497=(_n_R_26497+(_n_fr_26521*d::at(_n_spec_26374,0.0)))),(_n_G_26498=(_n_G_26498+(_n_fr_26521*d::at(_n_spec_26374,1.0))))),(_n_B_26499=(_n_B_26499+(_n_fr_26521*d::at(_n_spec_26374,2.0))))));
}
}
double _n_under_26522=((std::exp(((-d::number(((_n_sb_26515+0.5)*(_n_sb_26515+0.5))))/0.2))*(d::truth((_n_edge_26516<0.0))?1.0:0.0))*0.32);
(void)((((_n_R_26497=(_n_R_26497+_n_under_26522)),(_n_G_26498=(_n_G_26498+_n_under_26522))),(_n_B_26499=(_n_B_26499+_n_under_26522))));

}
};
{double _n_r_26523=0.0;
for(;d::truth((_n_r_26523<_n_H_26353));(void)((_n_r_26523++))){d::check_cancel();{double _n_x_26524=0.0;
for(;d::truth((_n_x_26524<_n_W_26352));(void)((_n_x_26524++))){d::check_cancel();double _n_k_26525=((_n_r_26523*_n_W_26352)+_n_x_26524);
double _n_y_26526=(_n_r_26523+0.5);
double _n_xc_26527=(_n_x_26524+0.5);
double _n_floor_26528=0.0;
if(d::truth((_n_y_26526<_n_HORIZON_26357))){d::check_cancel();(void)(_n_world_26501(_n_xc_26527,_n_y_26526,_n_k_26525,true));
(void)((_n_floor_26528=(0.05*_n_smooth_26372(10.0,_n_HORIZON_26357,_n_y_26526))));
}else {d::check_cancel();double _n_d_26529=(_n_y_26526-_n_HORIZON_26357);
double _n_amp_26530=(0.06+(_n_d_26529*0.011));
double _n_ph_26531=(_n_t_26483*_n_w_26485);
double _n_sx_26532=(_n_xc_26527+(_n_amp_26530*([&](){auto _n_left_26625=(std::sin((((_n_y_26526*0.8)-(_n_ph_26531*6.0))+(std::sin((_n_xc_26527*0.05))*2.0)))*0.7);auto _n_right_26626=(std::sin((((_n_xc_26527*0.11)+(_n_y_26526*1.3))-(_n_ph_26531*4.0)))*0.35);return (_n_left_26625+_n_right_26626);})()));
double _n_sy_26533=(((2.0*_n_HORIZON_26357)-_n_y_26526)+((_n_amp_26530*0.4)*std::sin((((_n_xc_26527*0.07)-(_n_ph_26531*3.0))+(_n_y_26526*0.6)))));
(void)(_n_world_26501(_n_sx_26532,_n_sy_26533,_n_k_26525,false));
double _n_film_26534=(0.8-(0.5*_n_smooth_26372(_n_HORIZON_26357,_n_H_26353,_n_y_26526)));
(void)((((_n_R_26497=(_n_R_26497*_n_film_26534)),(_n_G_26498=(_n_G_26498*_n_film_26534))),(_n_B_26499=(_n_B_26499*_n_film_26534))));
double _n_rg_26535=(d::at(this->_n_ridge_26386,_n_k_26525)*(1.0-(0.85*_n_COV_26500)));
if(d::truth((_n_rg_26535>0.0))){d::check_cancel();double _n_lit_26536=d::at(this->_n_shine_26394,_n_k_26525);
double _n_sh_26537=(1.0-(0.55*_n_rg_26535));
(void)((((_n_R_26497=((_n_R_26497*_n_sh_26537)+(_n_rg_26535*_n_lit_26536))),(_n_G_26498=((_n_G_26498*_n_sh_26537)+(_n_rg_26535*_n_lit_26536)))),(_n_B_26499=((_n_B_26499*_n_sh_26537)+(_n_rg_26535*_n_lit_26536)))));
}
(void)((_n_floor_26528=0.02));
}
double _n_cr_26538=_n_R_26497;
double _n_cg_26539=_n_G_26498;
double _n_cbl_26540=_n_B_26499;
double _n_peak_26541=d::maximum({_n_cr_26538,_n_cg_26539,_n_cbl_26540,0.0001});
double _n_level_26542=(d::truth((_n_peak_26541<0.008))?0.0:_n_clamp_26371((_n_floor_26528+(((1.0-_n_floor_26528)*std::pow(_n_peak_26541,0.85))*0.95))));
double _n_step_26543=([&](){auto _n_argument_26627=0.0;auto _n_argument_26628=([&](){auto _n_argument_26629=3.0;auto _n_argument_26630=d::round(((_n_level_26542*3.0)+d::at(_n_BAYER_26367,((double(d::i32(_n_r_26523)&d::i32(3.0))*4.0)+double(d::i32(_n_x_26524)&d::i32(3.0))))));return d::minimum({_n_argument_26629,_n_argument_26630});})();return d::maximum({_n_argument_26627,_n_argument_26628});})();
(void)(([&](){auto&& _n_array_26631=this->_n_out_26380;auto _n_index_26632=_n_k_26525;auto _n_value_26633=d::at(_n_DOTS_26365,_n_step_26543);d::put(_n_array_26631,_n_index_26632,_n_value_26633);return _n_value_26633;})());
if(d::truth(_n_color_26484)){d::check_cancel();double _n_want_26544=(d::truth(_n_step_26543)?d::minimum({1.0,((_n_level_26542+0.06)/d::at(_n_COVER_26366,_n_step_26543))}):0.0);
double _n_s_26545=((0.3+(0.7*_n_want_26544))/_n_peak_26541);
(void)(([&](){auto&& _n_array_26634=d::read(_n_color_26484);auto _n_index_26635=_n_k_26525;auto _n_value_26636=([&](){auto _n_argument_26637=_n_clamp_26371((_n_cr_26538*_n_s_26545));auto _n_argument_26638=_n_clamp_26371((_n_cg_26539*_n_s_26545));auto _n_argument_26639=_n_clamp_26371((_n_cbl_26540*_n_s_26545));return this->_n_nearest_26382(_n_argument_26637,_n_argument_26638,_n_argument_26639);})();d::put(_n_array_26634,_n_index_26635,_n_value_26636);return _n_value_26636;})());
}
}}
}}
d::Array<d::String,false> _n_lines_26546=d::Array<d::String,false>{};
{double _n_r_26547=0.0;
for(;d::truth((_n_r_26547<_n_H_26353));(void)((_n_r_26547++))){d::check_cancel();(void)(_n_lines_26546.push(d::join(this->_n_out_26380.slice((_n_r_26547*_n_W_26352),((_n_r_26547+1.0)*_n_W_26352)),d::String(u""))));
}}
return d::join(_n_lines_26546,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("salt-flat").cols)*ascii::catalog_meta("salt-flat").rows);auto _env=std::make_shared<_n_Record_26548>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &salt_flat_meta(){return catalog_meta("salt-flat");}
std::unique_ptr<Piece> make_salt_flat(const AsciiPieceOptions &o){return std::make_unique<Native_salt_flat>(o);}
}
