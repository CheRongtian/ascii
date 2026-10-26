// Direct, statically typed C++ from src/pieces/salt-flat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26350;
struct _n_Record_26547;
struct _n_Record_26350{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_26350> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26350>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_26547{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26547> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26547>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_26368(double _a0,double _a1);
double _n_noise_26369(double _a0,double _a1);
double _n_clamp_26370(double _a0);
double _n_smooth_26371(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_26372(d::String _a0);
void _n_spectrum_26374(double _a0);
double _n_sideL_26375(double _a0,double _a1);
double _n_sideR_26376(double _a0,double _a1);
std::shared_ptr<_n_Record_26350> _n_meta_26349=[](){return ([&](){auto _n_object_26550=std::make_shared<_n_Record_26350>();_n_object_26550->_p_name=d::String(u"salt flat");_n_object_26550->_p_category=d::String(u"scenes");_n_object_26550->_p_note=d::String(u"the vercel triangle over a mirror of salt, the sun rising behind its tip");_n_object_26550->_p_cols=200.0;_n_object_26550->_p_rows=100.0;_n_object_26550->_p_cell=1.0;_n_object_26550->_p_fps=15.0;_n_object_26550->_p_ground=d::String(u"#000000");_n_object_26550->_p_palette=d::Array<d::String,false>{d::String(u"#0d0d0e"),d::String(u"#161617"),d::String(u"#1f1f21"),d::String(u"#2a2a2c"),d::String(u"#363638"),d::String(u"#444446"),d::String(u"#555557"),d::String(u"#69696b"),d::String(u"#808082"),d::String(u"#9a9a9c"),d::String(u"#b8b8ba"),d::String(u"#d8d8da"),d::String(u"#ffffff"),d::String(u"#50e3c2"),d::String(u"#0070f3"),d::String(u"#7928ca"),d::String(u"#ff0080"),d::String(u"#ff4d4d"),d::String(u"#f9cb28"),d::String(u"#b0f2e3"),d::String(u"#8cbcf9"),d::String(u"#bb94e4"),d::String(u"#ff8cc0"),d::String(u"#ffa6a6"),d::String(u"#fce59a"),d::String(u"#24665a"),d::String(u"#00326d"),d::String(u"#36125b"),d::String(u"#73003a"),d::String(u"#732323"),d::String(u"#705b12")};return _n_object_26550;})();}();
const double _n_W_26351=[](){return 200.0;}();
const double _n_H_26352=[](){return 100.0;}();
const double _n_CX_26353=[](){return 100.0;}();
const double _n_HW_26354=[](){return 22.0;}();
const double _n_PH_26355=[](){return (_n_HW_26354*std::sqrt(3.0));}();
const double _n_HORIZON_26356=[](){return 57.0;}();
const double _n_LIFT_26357=[](){return 1.7;}();
const double _n_BASE_26358=[](){return (_n_HORIZON_26356-_n_LIFT_26357);}();
const double _n_APEX_26359=[](){return (_n_BASE_26358-_n_PH_26355);}();
const double _n_SUNY_26360=[](){return (_n_APEX_26359+3.2);}();
const double _n_S3_26361=[](){return (std::sqrt(3.0)/2.0);}();
const double _n_LOOP_26362=[](){return 24.0;}();
const double _n_TAU_26363=[](){return (ascii::PI*2.0);}();
const d::String _n_DOTS_26364=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_26365=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_26366=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_26394=_a0;
return ((_n_v_26394/16.0)-0.47);});}();
d::Array<d::Array<double,false>,false> _n_SPECTRUM_26367=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.31,0.89,0.76},d::Array<double,false>{0.0,0.44,0.95},d::Array<double,false>{0.47,0.16,0.79},d::Array<double,false>{1.0,0.0,0.5},d::Array<double,false>{1.0,0.3,0.3},d::Array<double,false>{0.98,0.8,0.16}};}();
d::Array<double,false> _n_spec_26373=[](){return d::Array<double,false>{0.0,0.0,0.0};}();
double _n_hash_26368(double _a0,double _a1){double _n_x_26395=_a0;
double _n_y_26396=_a1;
{
double _n_h_26397=([&](){auto _n_left_26551=d::imul(double(d::i32(_n_x_26395)|d::i32(0.0)),374761393.0);auto _n_right_26552=d::imul(double(d::i32(_n_y_26396)|d::i32(0.0)),668265263.0);return (_n_left_26551+_n_right_26552);})();
(void)((_n_h_26397=d::imul(double(d::i32(_n_h_26397)^d::i32(double(d::u32(_n_h_26397)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_26397)^d::i32(double(d::u32(_n_h_26397)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_26369(double _a0,double _a1){double _n_x_26398=_a0;
double _n_y_26399=_a1;
{
double _n_xi_26400=std::floor(_n_x_26398);
double _n_yi_26401=std::floor(_n_y_26399);
double _n_fx_26402=(_n_x_26398-_n_xi_26400);
double _n_fy_26403=(_n_y_26399-_n_yi_26401);
double _n_u_26404=((_n_fx_26402*_n_fx_26402)*(3.0-(2.0*_n_fx_26402)));
double _n_v_26405=((_n_fy_26403*_n_fy_26403)*(3.0-(2.0*_n_fy_26403)));
double _n_a_26406=_n_hash_26368(_n_xi_26400,_n_yi_26401);
double _n_b_26407=_n_hash_26368((_n_xi_26400+1.0),_n_yi_26401);
double _n_c_26408=_n_hash_26368(_n_xi_26400,(_n_yi_26401+1.0));
double _n_d_26409=_n_hash_26368((_n_xi_26400+1.0),(_n_yi_26401+1.0));
return (((_n_a_26406+((_n_b_26407-_n_a_26406)*_n_u_26404))+((_n_c_26408-_n_a_26406)*_n_v_26405))+(((((_n_a_26406-_n_b_26407)-_n_c_26408)+_n_d_26409)*_n_u_26404)*_n_v_26405));

}
}

double _n_clamp_26370(double _a0){double _n_v_26410=_a0;
return (d::truth((_n_v_26410<0.0))?0.0:(d::truth((_n_v_26410>1.0))?1.0:_n_v_26410));}

double _n_smooth_26371(double _a0,double _a1,double _a2){double _n_a_26411=_a0;
double _n_b_26412=_a1;
double _n_v_26413=_a2;
{
double _n_k_26414=_n_clamp_26370(((_n_v_26413-_n_a_26411)/(_n_b_26412-_n_a_26411)));
return ((_n_k_26414*_n_k_26414)*(3.0-(2.0*_n_k_26414)));

}
}

d::Array<double,false> _n_hex_26372(d::String _a0){d::String _n_s_26415=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_26416=_a0;
return (([&](){auto _n_argument_26553=d::slice(_n_s_26415,_n_i_26416,(_n_i_26416+2.0));auto _n_argument_26554=16.0;return d::parseInt(_n_argument_26553,_n_argument_26554);})()/255.0);});}

void _n_spectrum_26374(double _a0){double _n_h_26417=_a0;
{
double _n_p_26418=(d::mod((d::mod(_n_h_26417,1.0)+1.0),1.0)*6.0);
double _n_i_26419=std::floor(_n_p_26418);
double _n_f_26420=(_n_p_26418-_n_i_26419);
d::Array<double,false> _n_a_26421=d::at(_n_SPECTRUM_26367,_n_i_26419);
d::Array<double,false> _n_b_26422=d::at(_n_SPECTRUM_26367,d::mod((_n_i_26419+1.0),6.0));
{double _n_c_26423=0.0;
for(;d::truth((_n_c_26423<3.0));(void)((_n_c_26423++))){d::check_cancel();(void)(([&](){auto&& _n_array_26555=_n_spec_26373;auto _n_index_26556=_n_c_26423;auto _n_value_26557=(d::at(_n_a_26421,_n_c_26423)+((d::at(_n_b_26422,_n_c_26423)-d::at(_n_a_26421,_n_c_26423))*_n_f_26420));d::put(_n_array_26555,_n_index_26556,_n_value_26557);return _n_value_26557;})());
}}

}
}

double _n_sideL_26375(double _a0,double _a1){double _n_x_26424=_a0;
double _n_y_26425=_a1;
{
return (((-d::number((_n_x_26424-(_n_CX_26353-_n_HW_26354))))*_n_S3_26361)-((_n_y_26425-_n_BASE_26358)*0.5));

}
}

double _n_sideR_26376(double _a0,double _a1){double _n_x_26426=_a0;
double _n_y_26427=_a1;
{
return (((_n_x_26426-(_n_CX_26353+_n_HW_26354))*_n_S3_26361)-((_n_y_26427-_n_BASE_26358)*0.5));

}
}

struct Native_salt_flat final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_26377{};
double _n_N_26378{};
d::Array<d::String,false> _n_out_26379{};
d::Array<uint8_t,true> _n_lut_26380{};
double _n_CAM_26382{};
double _n_F_26383{};
double _n_SIZE_26384{};
d::Array<float,true> _n_ridge_26385{};
d::Array<float,true> _n_stars_26386{};
double _n_FANS_26387{};
d::Array<float,true> _n_fans_26388{};
d::Array<float,true> _n_still_26389{};
d::Array<float,true> _n_corona_26390{};
d::Array<float,true> _n_fall_26391{};
d::Array<uint16_t,true> _n_angle_26392{};
d::Array<float,true> _n_shine_26393{};
std::function<d::String(double,std::shared_ptr<_n_Record_26547>)> _render;
double _n_nearest_26381(double _a0,double _a1,double _a2){double _n_r_26428=_a0;
double _n_g_26429=_a1;
double _n_b_26430=_a2;
{
double _n_k_26431=([&](){auto _n_left_26639=([&](){auto _n_left_26641=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_26428*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_26642=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_26429*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_26641)|d::i32(_n_right_26642));})();auto _n_right_26640=d::minimum({31.0,double(d::i32((_n_b_26430*31.99))|d::i32(0.0))});return double(d::i32(_n_left_26639)|d::i32(_n_right_26640));})();
if(d::truth((d::at(this->_n_lut_26380,_n_k_26431)!=255.0))){d::check_cancel();return d::at(this->_n_lut_26380,_n_k_26431);
}
double _n_best_26432=0.0;
double _n_bd_26433=1000000000.0;
{double _n_i_26434=0.0;
for(;d::truth((_n_i_26434<double(this->_n_P_26377.size())));(void)((_n_i_26434++))){d::check_cancel();double _n_dr_26435=(d::at(d::at(this->_n_P_26377,_n_i_26434),0.0)-_n_r_26428);
double _n_dg_26436=(d::at(d::at(this->_n_P_26377,_n_i_26434),1.0)-_n_g_26429);
double _n_db_26437=(d::at(d::at(this->_n_P_26377,_n_i_26434),2.0)-_n_b_26430);
double _n_d_26438=((((0.3*_n_dr_26435)*_n_dr_26435)+((0.5*_n_dg_26436)*_n_dg_26436))+((0.2*_n_db_26437)*_n_db_26437));
if(d::truth((_n_d_26438<_n_bd_26433))){d::check_cancel();(void)(((_n_bd_26433=_n_d_26438),(_n_best_26432=_n_i_26434)));
}
}}
return ([&](){auto&& _n_array_26643=this->_n_lut_26380;auto _n_index_26644=_n_k_26431;auto _n_value_26645=_n_best_26432;d::put(_n_array_26643,_n_index_26644,_n_value_26645);return _n_value_26645;})();

}
}

explicit Native_salt_flat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_26377=d::map(_n_meta_26349->_p_palette,_n_hex_26372);
this->_n_N_26378=(_n_W_26351*_n_H_26352);
this->_n_out_26379=d::Array<d::String,false>(size_t(this->_n_N_26378));
this->_n_lut_26380=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_CAM_26382=250.0;
this->_n_F_26383=64.0;
this->_n_SIZE_26384=2.0;
this->_n_ridge_26385=d::Array<float,true>(size_t(this->_n_N_26378));
this->_n_stars_26386=d::Array<float,true>(size_t(this->_n_N_26378));
{double _n_r_26439=0.0;
for(;d::truth((_n_r_26439<_n_H_26352));(void)((_n_r_26439++))){d::check_cancel();{double _n_x_26440=0.0;
for(;d::truth((_n_x_26440<_n_W_26351));(void)((_n_x_26440++))){d::check_cancel();double _n_k_26441=((_n_r_26439*_n_W_26351)+_n_x_26440);
double _n_y_26442=(_n_r_26439+0.5);
if(d::truth((_n_y_26442<_n_HORIZON_26356))){d::check_cancel();if((d::truth((_n_y_26442<(_n_HORIZON_26356-14.0)))&&d::truth((_n_hash_26368(_n_x_26440,((_n_r_26439*5.0)+3.0))>0.988)))){d::check_cancel();(void)(([&](){auto&& _n_array_26558=this->_n_stars_26386;auto _n_index_26559=_n_k_26441;auto _n_value_26560=(0.4+(0.6*_n_hash_26368(_n_r_26439,_n_x_26440)));d::put(_n_array_26558,_n_index_26559,_n_value_26560);return _n_value_26560;})());
}
continue;
}
double _n_d_26443=(_n_y_26442-_n_HORIZON_26356);
double _n_Z_26444=(this->_n_CAM_26382/_n_d_26443);
double _n_X_26445=((((_n_x_26440+0.5)-_n_CX_26353)*_n_Z_26444)/this->_n_F_26383);
double _n_wx_26446=(_n_X_26445+(0.16*(_n_noise_26369((_n_X_26445*0.5),(_n_Z_26444*0.5))-0.5)));
double _n_wz_26447=(_n_Z_26444+(0.16*(_n_noise_26369(((_n_X_26445*0.5)+7.3),((_n_Z_26444*0.5)+1.9))-0.5)));
double _n_q_26448=(((2.0/3.0)*_n_wx_26446)/this->_n_SIZE_26384);
double _n_rr_26449=(((((-d::number(1.0))/3.0)*_n_wx_26446)+((std::sqrt(3.0)/3.0)*_n_wz_26447))/this->_n_SIZE_26384);
double _n_cx_26450=d::round(_n_q_26448);
double _n_cz_26451=d::round(_n_rr_26449);
double _n_cy_26452=d::round(((-d::number(_n_q_26448))-_n_rr_26449));
double _n_dx_26453=std::fabs((_n_cx_26450-_n_q_26448));
double _n_dz_26454=std::fabs((_n_cz_26451-_n_rr_26449));
double _n_dy_26455=std::fabs(((_n_cy_26452+_n_q_26448)+_n_rr_26449));
if((d::truth((_n_dx_26453>_n_dz_26454))&&d::truth((_n_dx_26453>_n_dy_26455)))){d::check_cancel();(void)((_n_cx_26450=((-d::number(_n_cz_26451))-_n_cy_26452)));
}else {d::check_cancel();if(d::truth((_n_dz_26454>_n_dy_26455))){d::check_cancel();(void)((_n_cz_26451=((-d::number(_n_cx_26450))-_n_cy_26452)));
}
}
double _n_vx_26456=(_n_wx_26446-((this->_n_SIZE_26384*1.5)*_n_cx_26450));
double _n_vz_26457=(_n_wz_26447-((this->_n_SIZE_26384*std::sqrt(3.0))*(_n_cz_26451+(_n_cx_26450/2.0))));
double _n_a0_26458=std::fabs(_n_vz_26457);
double _n_a1_26459=std::fabs(((_n_S3_26361*_n_vx_26456)+(0.5*_n_vz_26457)));
double _n_a2_26460=std::fabs(((_n_S3_26361*_n_vx_26456)-(0.5*_n_vz_26457)));
double _n_nx_26461=0.0;
double _n_nz_26462=d::sign(_n_vz_26457);
double _n_h_26463=_n_a0_26458;
if(d::truth((_n_a1_26459>_n_h_26463))){d::check_cancel();(void)((((_n_h_26463=_n_a1_26459),(_n_nx_26461=(_n_S3_26361*d::sign(((_n_S3_26361*_n_vx_26456)+(0.5*_n_vz_26457)))))),(_n_nz_26462=(0.5*d::sign(((_n_S3_26361*_n_vx_26456)+(0.5*_n_vz_26457)))))));
}
if(d::truth((_n_a2_26460>_n_h_26463))){d::check_cancel();(void)((((_n_h_26463=_n_a2_26460),(_n_nx_26461=(_n_S3_26361*d::sign(((_n_S3_26361*_n_vx_26456)-(0.5*_n_vz_26457)))))),(_n_nz_26462=((-d::number(0.5))*d::sign(((_n_S3_26361*_n_vx_26456)-(0.5*_n_vz_26457)))))));
}
double _n_e_26464=((this->_n_SIZE_26384*_n_S3_26361)-_n_h_26463);
double _n_dZy_26465=((-d::number((_n_Z_26444*_n_Z_26444)))/this->_n_CAM_26382);
double _n_dXx_26466=(_n_Z_26444/this->_n_F_26383);
double _n_dXy_26467=((((_n_x_26440+0.5)-_n_CX_26353)/this->_n_F_26383)*_n_dZy_26465);
double _n_gx_26468=(_n_nx_26461*_n_dXx_26466);
double _n_gy_26469=((_n_nx_26461*_n_dXy_26467)+(_n_nz_26462*_n_dZy_26465));
double _n_px_26470=(_n_e_26464/std::sqrt((((_n_gx_26468*_n_gx_26468)+(_n_gy_26469*_n_gy_26469))+1e-9)));
double _n_tall_26471=(((this->_n_SIZE_26384*2.0)*_n_S3_26361)/std::fabs(_n_dZy_26465));
(void)(([&](){auto&& _n_array_26561=this->_n_ridge_26385;auto _n_index_26562=_n_k_26441;auto _n_value_26563=([&](){auto _n_left_26564=_n_smooth_26371(0.95,0.25,_n_px_26470);auto _n_right_26565=_n_smooth_26371(5.0,15.0,_n_tall_26471);return (_n_left_26564*_n_right_26565);})();d::put(_n_array_26561,_n_index_26562,_n_value_26563);return _n_value_26563;})());
}}
}}
this->_n_FANS_26387=1024.0;
this->_n_fans_26388=d::Array<float,true>(size_t(this->_n_FANS_26387));
this->_n_still_26389=d::Array<float,true>(size_t(this->_n_N_26378));
this->_n_corona_26390=d::Array<float,true>(size_t(this->_n_N_26378));
this->_n_fall_26391=d::Array<float,true>(size_t(this->_n_N_26378));
this->_n_angle_26392=d::Array<uint16_t,true>(size_t(this->_n_N_26378));
this->_n_shine_26393=d::Array<float,true>(size_t(this->_n_N_26378));
{double _n_r_26472=0.0;
for(;d::truth((_n_r_26472<_n_H_26352));(void)((_n_r_26472++))){d::check_cancel();{double _n_x_26473=0.0;
for(;d::truth((_n_x_26473<_n_W_26351));(void)((_n_x_26473++))){d::check_cancel();double _n_k_26474=((_n_r_26472*_n_W_26351)+_n_x_26473);
double _n_xc_26475=(_n_x_26473+0.5);
double _n_y_26476=(d::truth(((_n_r_26472+0.5)<_n_HORIZON_26356))?(_n_r_26472+0.5):(((2.0*_n_HORIZON_26356)-_n_r_26472)-0.5));
double _n_dx_26477=(_n_xc_26475-_n_CX_26353);
double _n_ds_26478=(_n_y_26476-_n_SUNY_26360);
double _n_dist_26479=std::sqrt(((_n_dx_26477*_n_dx_26477)+(_n_ds_26478*_n_ds_26478)));
double _n_up_26480=(_n_HORIZON_26356-_n_y_26476);
(void)(([&](){auto&& _n_array_26566=this->_n_still_26389;auto _n_index_26567=_n_k_26474;auto _n_value_26568=(([&](){auto _n_left_26569=([&](){auto _n_left_26571=([&](){auto _n_left_26573=(0.22*std::exp(((-d::number(_n_up_26480))/3.0)));auto _n_right_26574=(0.025*std::exp(((-d::number(_n_up_26480))/10.0)));return (_n_left_26573+_n_right_26574);})();auto _n_right_26572=(0.8*std::exp(((-d::number((_n_up_26480*_n_up_26480)))/0.7)));return (_n_left_26571+_n_right_26572);})();auto _n_right_26570=([&](){auto _n_left_26575=(0.35*std::exp(((-d::number((_n_ds_26478*_n_ds_26478)))/0.5)));auto _n_right_26576=std::exp(((-d::number(std::fabs(_n_dx_26477)))/32.0));return (_n_left_26575*_n_right_26576);})();return (_n_left_26569+_n_right_26570);})()+(d::truth((_n_dist_26479<4.5))?1.0:0.0));d::put(_n_array_26566,_n_index_26567,_n_value_26568);return _n_value_26568;})());
(void)(([&](){auto&& _n_array_26577=this->_n_corona_26390;auto _n_index_26578=_n_k_26474;auto _n_value_26579=([&](){auto _n_left_26580=(0.9*std::exp(((-d::number(_n_dist_26479))/2.5)));auto _n_right_26581=(0.25*std::exp(((-d::number(_n_dist_26479))/8.0)));return (_n_left_26580+_n_right_26581);})();d::put(_n_array_26577,_n_index_26578,_n_value_26579);return _n_value_26579;})());
double _n_th_26481=std::atan2(_n_dx_26477,(-d::number(_n_ds_26478)));
(void)(([&](){auto&& _n_array_26582=this->_n_fall_26391;auto _n_index_26583=_n_k_26474;auto _n_value_26584=([&](){auto _n_left_26585=([&](){auto _n_left_26587=_n_smooth_26371(4.0,12.0,_n_dist_26479);auto _n_right_26588=std::exp(((-d::number(_n_dist_26479))/50.0));return (_n_left_26587*_n_right_26588);})();auto _n_right_26586=([&](){auto _n_argument_26589=2.35;auto _n_argument_26590=1.75;auto _n_argument_26591=std::fabs(_n_th_26481);return _n_smooth_26371(_n_argument_26589,_n_argument_26590,_n_argument_26591);})();return (_n_left_26585*_n_right_26586);})();d::put(_n_array_26582,_n_index_26583,_n_value_26584);return _n_value_26584;})());
(void)(([&](){auto&& _n_array_26592=this->_n_angle_26392;auto _n_index_26593=_n_k_26474;auto _n_value_26594=([&](){auto _n_argument_26595=(this->_n_FANS_26387-1.0);auto _n_argument_26596=std::floor((((_n_th_26481+ascii::PI)/_n_TAU_26363)*this->_n_FANS_26387));return d::minimum({_n_argument_26595,_n_argument_26596});})();d::put(_n_array_26592,_n_index_26593,_n_value_26594);return _n_value_26594;})());
(void)(([&](){auto&& _n_array_26597=this->_n_shine_26393;auto _n_index_26598=_n_k_26474;auto _n_value_26599=([&](){auto _n_left_26600=(0.3+(0.25*std::exp(((-d::number((_n_dx_26477*_n_dx_26477)))/2500.0))));auto _n_right_26601=_n_smooth_26371((_n_HORIZON_26356+2.0),(_n_HORIZON_26356+12.0),(_n_r_26472+0.5));return (_n_left_26600*_n_right_26601);})();d::put(_n_array_26597,_n_index_26598,_n_value_26599);return _n_value_26599;})());
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_26547> _a1) mutable ->d::String{double _n_t_26482=_a0;
auto _n_binding_26604=(d::present(_a1)?_a1:([&](){auto _n_object_26603=std::make_shared<_n_Record_26547>();return _n_object_26603;})());
std::optional<d::Array<uint8_t,true>> _n_color_26483=_n_binding_26604->_p_color;
{
double _n_w_26484=(_n_TAU_26363/_n_LOOP_26362);
double _n_breathe_26485=(0.92+(0.08*std::sin(((_n_t_26482*_n_w_26484)*2.0))));
double _n_spin_26486=(_n_t_26482*_n_w_26484);
double _n_gp_26487=(d::mod(_n_t_26482,6.0)/1.4);
double _n_ge_26488=d::minimum({1.0,_n_gp_26487});
double _n_gI_26489=(d::truth((_n_gp_26487<1.0))?(0.5+(0.5*_n_gp_26487)):(d::truth((_n_gp_26487<1.5))?(1.0-((_n_gp_26487-1.0)*2.0)):0.0));
double _n_gy_26490=(_n_BASE_26358-((_n_PH_26355*_n_ge_26488)*_n_ge_26488));
double _n_flare_26491=((d::truth((_n_gp_26487>0.8))&&d::truth((_n_gp_26487<1.5)))?std::sin((((_n_gp_26487-0.8)/0.7)*ascii::PI)):0.0);
{double _n_i_26492=0.0;
for(;d::truth((_n_i_26492<this->_n_FANS_26387));(void)((_n_i_26492++))){d::check_cancel();double _n_th_26493=(((_n_i_26492/this->_n_FANS_26387)*_n_TAU_26363)-ascii::PI);
double _n_a_26494=(0.5+(0.5*std::cos((((14.0*_n_th_26493)+_n_spin_26486)+(1.4*std::sin(((5.0*_n_th_26493)-(_n_spin_26486*2.0))))))));
double _n_b_26495=(0.5+(0.5*std::cos((((23.0*_n_th_26493)-(_n_spin_26486*3.0))+(0.9*std::sin(((3.0*_n_th_26493)+_n_spin_26486)))))));
(void)((((_n_a_26494=(_n_a_26494*_n_a_26494)),(_n_a_26494=(_n_a_26494*_n_a_26494))),(_n_a_26494=(_n_a_26494*_n_a_26494))));
(void)(((((_n_b_26495=(_n_b_26495*_n_b_26495)),(_n_b_26495=(_n_b_26495*_n_b_26495))),(_n_b_26495=(_n_b_26495*_n_b_26495))),(_n_b_26495=(_n_b_26495*_n_b_26495))));
(void)(([&](){auto&& _n_array_26605=this->_n_fans_26388;auto _n_index_26606=_n_i_26492;auto _n_value_26607=(((_n_a_26494*0.55)+(_n_b_26495*0.18))*_n_breathe_26485);d::put(_n_array_26605,_n_index_26606,_n_value_26607);return _n_value_26607;})());
}}
double _n_R_26496=0.0;
double _n_G_26497=0.0;
double _n_B_26498=0.0;
double _n_COV_26499=0.0;
auto _n_world_26500=[&]( double _a0,double _a1,double _a2,bool _a3) mutable ->void{double _n_x_26501=_a0;
double _n_y_26502=_a1;
double _n_k_26503=_a2;
bool _n_near_26504=_a3;
{
double _n_dx_26505=(_n_x_26501-_n_CX_26353);
double _n_l_26506=((d::at(this->_n_still_26389,_n_k_26503)+(d::at(this->_n_corona_26390,_n_k_26503)*_n_breathe_26485))+(d::at(this->_n_fall_26391,_n_k_26503)*d::at(this->_n_fans_26388,d::at(this->_n_angle_26392,_n_k_26503))));
if(d::truth((_n_gI_26489>0.0))){d::check_cancel();double _n_gh_26507=(_n_HW_26354*(1.0-((_n_BASE_26358-_n_gy_26490)/_n_PH_26355)));
double _n_gdy_26508=(_n_y_26502-_n_gy_26490);
double _n_gl_26509=(d::minimum({std::pow(((_n_x_26501-_n_CX_26353)+_n_gh_26507),2.0),std::pow(((_n_x_26501-_n_CX_26353)-_n_gh_26507),2.0)})+(_n_gdy_26508*_n_gdy_26508));
(void)((_n_l_26506=(_n_l_26506+((std::exp(((-d::number(_n_gl_26509))/5.0))*_n_gI_26489)*0.7))));
}
if(d::truth((_n_flare_26491>0.0))){d::check_cancel();double _n_da_26510=(_n_y_26502-_n_APEX_26359);
(void)((_n_l_26506=(_n_l_26506+((_n_flare_26491*([&](){auto _n_left_26608=([&](){auto _n_left_26610=std::exp(((-d::number((_n_da_26510*_n_da_26510)))/0.35));auto _n_right_26611=std::exp(((-d::number(std::fabs(_n_dx_26505)))/16.0));return (_n_left_26610*_n_right_26611);})();auto _n_right_26609=([&](){auto _n_left_26612=std::exp(((-d::number((_n_dx_26505*_n_dx_26505)))/0.35));auto _n_right_26613=std::exp(((-d::number(std::fabs(_n_da_26510)))/12.0));return (_n_left_26612*_n_right_26613);})();return (_n_left_26608+_n_right_26609);})())*0.9))));
}
if(d::truth(_n_near_26504)){d::check_cancel();double _n_s_26511=d::at(this->_n_stars_26386,([&](){auto _n_left_26614=(std::floor(_n_y_26502)*_n_W_26351);auto _n_right_26615=std::floor(_n_x_26501);return (_n_left_26614+_n_right_26615);})());
if(d::truth(_n_s_26511)){d::check_cancel();(void)((_n_l_26506=([&](){auto _n_argument_26616=_n_l_26506;auto _n_argument_26617=([&](){auto _n_left_26618=(_n_s_26511*(0.65+(0.35*std::sin((((_n_t_26482*_n_w_26484)*(2.0+double(d::i32((_n_s_26511*10.0))|d::i32(0.0))))+(_n_s_26511*40.0))))));auto _n_right_26619=_n_smooth_26371(0.25,0.04,_n_l_26506);return (_n_left_26618*_n_right_26619);})();return d::maximum({_n_argument_26616,_n_argument_26617});})()));
}
}
(void)((((_n_R_26496=_n_l_26506),(_n_G_26497=_n_l_26506)),(_n_B_26498=_n_l_26506)));
(void)((_n_COV_26499=0.0));
double _n_sl_26512=_n_sideL_26375(_n_x_26501,_n_y_26502);
double _n_sr_26513=_n_sideR_26376(_n_x_26501,_n_y_26502);
double _n_sb_26514=(_n_y_26502-_n_BASE_26358);
double _n_edge_26515=d::maximum({_n_sl_26512,_n_sr_26513});
double _n_sd_26516=d::maximum({_n_edge_26515,_n_sb_26514});
if(d::truth((_n_sd_26516>4.0))){d::check_cancel();return;
}
double _n_cov_26517=_n_clamp_26370((0.5-(_n_sd_26516*1.4)));
(void)((_n_COV_26499=_n_clamp_26370((0.5-(_n_sd_26516*0.5)))));
(void)((((_n_R_26496=(_n_R_26496*(1.0-_n_cov_26517))),(_n_G_26497=(_n_G_26497*(1.0-_n_cov_26517)))),(_n_B_26498=(_n_B_26498*(1.0-_n_cov_26517)))));
double _n_hgt_26518=_n_clamp_26370(((_n_BASE_26358-_n_y_26502)/_n_PH_26355));
if(d::truth((_n_sb_26514<0.4))){d::check_cancel();double _n_rim_26519=(std::exp(((-d::number(((_n_edge_26515+0.55)*(_n_edge_26515+0.55))))/0.3))*(0.8+(0.4*_n_hgt_26518)));
if(d::truth((_n_gI_26489>0.0))){d::check_cancel();(void)((_n_rim_26519=(_n_rim_26519+(([&](){auto _n_left_26620=(std::exp(((-d::number(((_n_y_26502-_n_gy_26490)*(_n_y_26502-_n_gy_26490))))/3.0))*_n_gI_26489);auto _n_right_26621=std::exp(((-d::number(((_n_edge_26515+0.5)*(_n_edge_26515+0.5))))/0.6));return (_n_left_26620*_n_right_26621);})()*1.2))));
}
(void)((_n_rim_26519=(_n_rim_26519*_n_smooth_26371(0.4,(-d::number(0.6)),_n_sb_26514))));
(void)((((_n_R_26496=(_n_R_26496+_n_rim_26519)),(_n_G_26497=(_n_G_26497+_n_rim_26519))),(_n_B_26498=(_n_B_26498+_n_rim_26519))));
if(d::truth((_n_edge_26515>(-d::number(0.5))))){d::check_cancel();double _n_fr_26520=([&](){auto _n_left_26622=(std::exp(((-d::number(((_n_edge_26515-0.7)*(_n_edge_26515-0.7))))/0.5))*(0.45+(0.3*_n_hgt_26518)));auto _n_right_26623=_n_smooth_26371(0.4,(-d::number(1.2)),_n_sb_26514);return (_n_left_26622*_n_right_26623);})();
(void)(_n_spectrum_26374(((((_n_edge_26515*0.18)+(_n_hgt_26518*0.9))-(_n_t_26482/6.0))+(d::truth((_n_sl_26512>_n_sr_26513))?0.0:0.5))));
(void)((((_n_R_26496=(_n_R_26496+(_n_fr_26520*d::at(_n_spec_26373,0.0)))),(_n_G_26497=(_n_G_26497+(_n_fr_26520*d::at(_n_spec_26373,1.0))))),(_n_B_26498=(_n_B_26498+(_n_fr_26520*d::at(_n_spec_26373,2.0))))));
}
}
double _n_under_26521=((std::exp(((-d::number(((_n_sb_26514+0.5)*(_n_sb_26514+0.5))))/0.2))*(d::truth((_n_edge_26515<0.0))?1.0:0.0))*0.32);
(void)((((_n_R_26496=(_n_R_26496+_n_under_26521)),(_n_G_26497=(_n_G_26497+_n_under_26521))),(_n_B_26498=(_n_B_26498+_n_under_26521))));

}
};
{double _n_r_26522=0.0;
for(;d::truth((_n_r_26522<_n_H_26352));(void)((_n_r_26522++))){d::check_cancel();{double _n_x_26523=0.0;
for(;d::truth((_n_x_26523<_n_W_26351));(void)((_n_x_26523++))){d::check_cancel();double _n_k_26524=((_n_r_26522*_n_W_26351)+_n_x_26523);
double _n_y_26525=(_n_r_26522+0.5);
double _n_xc_26526=(_n_x_26523+0.5);
double _n_floor_26527=0.0;
if(d::truth((_n_y_26525<_n_HORIZON_26356))){d::check_cancel();(void)(_n_world_26500(_n_xc_26526,_n_y_26525,_n_k_26524,true));
(void)((_n_floor_26527=(0.05*_n_smooth_26371(10.0,_n_HORIZON_26356,_n_y_26525))));
}else {d::check_cancel();double _n_d_26528=(_n_y_26525-_n_HORIZON_26356);
double _n_amp_26529=(0.06+(_n_d_26528*0.011));
double _n_ph_26530=(_n_t_26482*_n_w_26484);
double _n_sx_26531=(_n_xc_26526+(_n_amp_26529*([&](){auto _n_left_26624=(std::sin((((_n_y_26525*0.8)-(_n_ph_26530*6.0))+(std::sin((_n_xc_26526*0.05))*2.0)))*0.7);auto _n_right_26625=(std::sin((((_n_xc_26526*0.11)+(_n_y_26525*1.3))-(_n_ph_26530*4.0)))*0.35);return (_n_left_26624+_n_right_26625);})()));
double _n_sy_26532=(((2.0*_n_HORIZON_26356)-_n_y_26525)+((_n_amp_26529*0.4)*std::sin((((_n_xc_26526*0.07)-(_n_ph_26530*3.0))+(_n_y_26525*0.6)))));
(void)(_n_world_26500(_n_sx_26531,_n_sy_26532,_n_k_26524,false));
double _n_film_26533=(0.8-(0.5*_n_smooth_26371(_n_HORIZON_26356,_n_H_26352,_n_y_26525)));
(void)((((_n_R_26496=(_n_R_26496*_n_film_26533)),(_n_G_26497=(_n_G_26497*_n_film_26533))),(_n_B_26498=(_n_B_26498*_n_film_26533))));
double _n_rg_26534=(d::at(this->_n_ridge_26385,_n_k_26524)*(1.0-(0.85*_n_COV_26499)));
if(d::truth((_n_rg_26534>0.0))){d::check_cancel();double _n_lit_26535=d::at(this->_n_shine_26393,_n_k_26524);
double _n_sh_26536=(1.0-(0.55*_n_rg_26534));
(void)((((_n_R_26496=((_n_R_26496*_n_sh_26536)+(_n_rg_26534*_n_lit_26535))),(_n_G_26497=((_n_G_26497*_n_sh_26536)+(_n_rg_26534*_n_lit_26535)))),(_n_B_26498=((_n_B_26498*_n_sh_26536)+(_n_rg_26534*_n_lit_26535)))));
}
(void)((_n_floor_26527=0.02));
}
double _n_cr_26537=_n_R_26496;
double _n_cg_26538=_n_G_26497;
double _n_cbl_26539=_n_B_26498;
double _n_peak_26540=d::maximum({_n_cr_26537,_n_cg_26538,_n_cbl_26539,0.0001});
double _n_level_26541=(d::truth((_n_peak_26540<0.008))?0.0:_n_clamp_26370((_n_floor_26527+(((1.0-_n_floor_26527)*std::pow(_n_peak_26540,0.85))*0.95))));
double _n_step_26542=([&](){auto _n_argument_26626=0.0;auto _n_argument_26627=([&](){auto _n_argument_26628=3.0;auto _n_argument_26629=d::round(((_n_level_26541*3.0)+d::at(_n_BAYER_26366,((double(d::i32(_n_r_26522)&d::i32(3.0))*4.0)+double(d::i32(_n_x_26523)&d::i32(3.0))))));return d::minimum({_n_argument_26628,_n_argument_26629});})();return d::maximum({_n_argument_26626,_n_argument_26627});})();
(void)(([&](){auto&& _n_array_26630=this->_n_out_26379;auto _n_index_26631=_n_k_26524;auto _n_value_26632=d::at(_n_DOTS_26364,_n_step_26542);d::put(_n_array_26630,_n_index_26631,_n_value_26632);return _n_value_26632;})());
if(d::truth(_n_color_26483)){d::check_cancel();double _n_want_26543=(d::truth(_n_step_26542)?d::minimum({1.0,((_n_level_26541+0.06)/d::at(_n_COVER_26365,_n_step_26542))}):0.0);
double _n_s_26544=((0.3+(0.7*_n_want_26543))/_n_peak_26540);
(void)(([&](){auto&& _n_array_26633=d::read(_n_color_26483);auto _n_index_26634=_n_k_26524;auto _n_value_26635=([&](){auto _n_argument_26636=_n_clamp_26370((_n_cr_26537*_n_s_26544));auto _n_argument_26637=_n_clamp_26370((_n_cg_26538*_n_s_26544));auto _n_argument_26638=_n_clamp_26370((_n_cbl_26539*_n_s_26544));return this->_n_nearest_26381(_n_argument_26636,_n_argument_26637,_n_argument_26638);})();d::put(_n_array_26633,_n_index_26634,_n_value_26635);return _n_value_26635;})());
}
}}
}}
d::Array<d::String,false> _n_lines_26545=d::Array<d::String,false>{};
{double _n_r_26546=0.0;
for(;d::truth((_n_r_26546<_n_H_26352));(void)((_n_r_26546++))){d::check_cancel();(void)(_n_lines_26545.push(d::join(this->_n_out_26379.slice((_n_r_26546*_n_W_26351),((_n_r_26546+1.0)*_n_W_26351)),d::String(u""))));
}}
return d::join(_n_lines_26545,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("salt-flat").cols)*ascii::catalog_meta("salt-flat").rows);auto _env=std::make_shared<_n_Record_26547>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &salt_flat_meta(){return catalog_meta("salt-flat");}
std::unique_ptr<Piece> make_salt_flat(const AsciiPieceOptions &o){return std::make_unique<Native_salt_flat>(o);}
}
