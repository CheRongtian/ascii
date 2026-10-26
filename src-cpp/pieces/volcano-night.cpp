// Direct, statically typed C++ from src/pieces/volcano-night.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36145;
struct _n_Record_36199;
struct _n_Record_36472;
struct _n_Record_36145{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_36145> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36145>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_36199{
double _p_vx{};
double _p_vy{};
double _p_period{};
double _p_off{};
double _p_x0{};
static std::shared_ptr<_n_Record_36199> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36199>();out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_period=d::decode<double>(j["period"]);out->_p_off=d::decode<double>(j["off"]);out->_p_x0=d::decode<double>(j["x0"]);return out;}
};
struct _n_Record_36472{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36472> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36472>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_36161(double _a0,double _a1);
double _n_noise_36162(double _a0,double _a1,std::optional<double> _a2,std::optional<double> _a3);
double _n_fbm_36163(double _a0,double _a1,double _a2,std::optional<double> _a3);
double _n_clamp_36164(double _a0);
double _n_smooth_36165(double _a0,double _a1,double _a2);
double _n_mix_36166(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_36167(d::String _a0);
double _n_coneY_36168(double _a0);
double _n_reach_36169(double _a0);
double _n_plumeX_36170(double _a0);
double _n_plumeW_36171(double _a0);
std::shared_ptr<_n_Record_36145> _n_meta_36144=[](){return ([&](){auto _n_object_36475=std::make_shared<_n_Record_36145>();_n_object_36475->_p_name=d::String(u"volcano night");_n_object_36475->_p_category=d::String(u"scenes");_n_object_36475->_p_note=d::String(u"a volcano erupting at night, lava rivers, an ash plume full of lightning");_n_object_36475->_p_cols=200.0;_n_object_36475->_p_rows=100.0;_n_object_36475->_p_cell=1.0;_n_object_36475->_p_fps=15.0;_n_object_36475->_p_ground=d::String(u"#070405");_n_object_36475->_p_palette=d::Array<d::String,false>{d::String(u"#5a1a10"),d::String(u"#7a2410"),d::String(u"#982e0e"),d::String(u"#b8380b"),d::String(u"#d4480b"),d::String(u"#ea5e10"),d::String(u"#f77a18"),d::String(u"#ff9628"),d::String(u"#ffb244"),d::String(u"#ffcc63"),d::String(u"#ffe28c"),d::String(u"#fff3c0"),d::String(u"#fffcec"),d::String(u"#4a3a37"),d::String(u"#63504b"),d::String(u"#7d6863"),d::String(u"#98827b"),d::String(u"#b39d94"),d::String(u"#cdb9af"),d::String(u"#8a4a3a"),d::String(u"#a85a40"),d::String(u"#c87048"),d::String(u"#3c4258"),d::String(u"#5d6280"),d::String(u"#8a90b4"),d::String(u"#b4b9dc"),d::String(u"#dfe2f7"),d::String(u"#b9a8ff"),d::String(u"#f4f0ff"),d::String(u"#1a1012"),d::String(u"#2c1a18")};return _n_object_36475;})();}();
const double _n_W_36146=[](){return 200.0;}();
const double _n_H_36147=[](){return 100.0;}();
const double _n_CX_36148=[](){return 100.0;}();
const double _n_RIM_36149=[](){return 40.0;}();
const double _n_BASE_36150=[](){return 86.0;}();
const double _n_HIGH_36151=[](){return (_n_BASE_36150-_n_RIM_36149);}();
const double _n_SPAN_36152=[](){return 32.0;}();
const double _n_PLAIN_36153=[](){return 76.0;}();
const double _n_SHORE_36154=[](){return 81.0;}();
const d::String _n_DOTS_36155=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_36156=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_36157=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_36209=_a0;
return ((_n_v_36209/16.0)-0.47);});}();
const double _n_SKY_36158=[](){return 0.0;}();
const double _n_ROCK_36159=[](){return 1.0;}();
const double _n_LAKE_36160=[](){return 2.0;}();
double _n_hash_36161(double _a0,double _a1){double _n_x_36210=_a0;
double _n_y_36211=_a1;
{
double _n_h_36212=([&](){auto _n_left_36476=d::imul(double(d::i32(_n_x_36210)|d::i32(0.0)),374761393.0);auto _n_right_36477=d::imul(double(d::i32(_n_y_36211)|d::i32(0.0)),668265263.0);return (_n_left_36476+_n_right_36477);})();
(void)((_n_h_36212=d::imul(double(d::i32(_n_h_36212)^d::i32(double(d::u32(_n_h_36212)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_36212)^d::i32(double(d::u32(_n_h_36212)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_36162(double _a0,double _a1,std::optional<double> _a2,std::optional<double> _a3){double _n_x_36213=_a0;
double _n_y_36214=_a1;
double _n_px_36215=(d::present(_a2)?d::read(_a2):0.0);
double _n_py_36216=(d::present(_a3)?d::read(_a3):0.0);
{
double _n_xi_36217=std::floor(_n_x_36213);
double _n_yi_36218=std::floor(_n_y_36214);
double _n_fx_36219=(_n_x_36213-_n_xi_36217);
double _n_fy_36220=(_n_y_36214-_n_yi_36218);
double _n_u_36221=((_n_fx_36219*_n_fx_36219)*(3.0-(2.0*_n_fx_36219)));
double _n_v_36222=((_n_fy_36220*_n_fy_36220)*(3.0-(2.0*_n_fy_36220)));
double _n_x0_36223=_n_xi_36217;
double _n_x1_36224=(_n_xi_36217+1.0);
double _n_y0_36225=_n_yi_36218;
double _n_y1_36226=(_n_yi_36218+1.0);
if(d::truth(_n_px_36215)){d::check_cancel();(void)(((_n_x0_36223=d::mod((d::mod(_n_xi_36217,_n_px_36215)+_n_px_36215),_n_px_36215)),(_n_x1_36224=d::mod((_n_x0_36223+1.0),_n_px_36215))));
}
if(d::truth(_n_py_36216)){d::check_cancel();(void)(((_n_y0_36225=d::mod((d::mod(_n_yi_36218,_n_py_36216)+_n_py_36216),_n_py_36216)),(_n_y1_36226=d::mod((_n_y0_36225+1.0),_n_py_36216))));
}
double _n_a_36227=_n_hash_36161(_n_x0_36223,_n_y0_36225);
double _n_b_36228=_n_hash_36161(_n_x1_36224,_n_y0_36225);
double _n_c_36229=_n_hash_36161(_n_x0_36223,_n_y1_36226);
double _n_d_36230=_n_hash_36161(_n_x1_36224,_n_y1_36226);
return (((_n_a_36227+((_n_b_36228-_n_a_36227)*_n_u_36221))+((_n_c_36229-_n_a_36227)*_n_v_36222))+(((((_n_a_36227-_n_b_36228)-_n_c_36229)+_n_d_36230)*_n_u_36221)*_n_v_36222));

}
}

double _n_fbm_36163(double _a0,double _a1,double _a2,std::optional<double> _a3){double _n_x_36231=_a0;
double _n_y_36232=_a1;
double _n_octaves_36233=_a2;
double _n_py_36234=(d::present(_a3)?d::read(_a3):0.0);
{
double _n_s_36235=0.0;
double _n_n_36236=0.0;
double _n_amp_36237=0.5;
double _n_f_36238=1.0;
{double _n_i_36239=0.0;
for(;d::truth((_n_i_36239<_n_octaves_36233));(void)((_n_i_36239++))){d::check_cancel();(void)((_n_s_36235=(_n_s_36235+(_n_amp_36237*_n_noise_36162((_n_x_36231*_n_f_36238),(_n_y_36232*_n_f_36238),std::optional<double>(0.0),std::optional<double>((_n_py_36234*_n_f_36238)))))));
(void)((_n_n_36236=(_n_n_36236+_n_amp_36237)));
(void)((_n_amp_36237=(_n_amp_36237*0.5)));
(void)((_n_f_36238=(_n_f_36238*2.0)));
}}
return (_n_s_36235/_n_n_36236);

}
}

double _n_clamp_36164(double _a0){double _n_v_36240=_a0;
return (d::truth((_n_v_36240<0.0))?0.0:(d::truth((_n_v_36240>1.0))?1.0:_n_v_36240));}

double _n_smooth_36165(double _a0,double _a1,double _a2){double _n_a_36241=_a0;
double _n_b_36242=_a1;
double _n_v_36243=_a2;
{
double _n_k_36244=_n_clamp_36164(((_n_v_36243-_n_a_36241)/(_n_b_36242-_n_a_36241)));
return ((_n_k_36244*_n_k_36244)*(3.0-(2.0*_n_k_36244)));

}
}

double _n_mix_36166(double _a0,double _a1,double _a2){double _n_a_36245=_a0;
double _n_b_36246=_a1;
double _n_k_36247=_a2;
return (_n_a_36245+((_n_b_36246-_n_a_36245)*_n_k_36247));}

d::Array<double,false> _n_hex_36167(d::String _a0){d::String _n_s_36248=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_36249=_a0;
return (([&](){auto _n_argument_36478=d::slice(_n_s_36248,_n_i_36249,(_n_i_36249+2.0));auto _n_argument_36479=16.0;return d::parseInt(_n_argument_36478,_n_argument_36479);})()/255.0);});}

double _n_coneY_36168(double _a0){double _n_x_36250=_a0;
{
double _n_d_36251=std::fabs((_n_x_36250-_n_CX_36148));
if(d::truth((_n_d_36251<6.0))){d::check_cancel();return ((_n_RIM_36149+(0.9*(1.0-std::pow((_n_d_36251/6.0),2.0))))-0.6);
}
return ((_n_BASE_36150-(_n_HIGH_36151/(1.0+std::pow(((_n_d_36251-6.0)/_n_SPAN_36152),1.6))))+([&](){auto _n_left_36480=(1.4*(_n_fbm_36163((_n_x_36250*0.13),1.3,3.0,std::optional<double>{})-0.5));auto _n_right_36481=_n_smooth_36165(6.0,20.0,_n_d_36251);return (_n_left_36480*_n_right_36481);})());

}
}

double _n_reach_36169(double _a0){double _n_y_36252=_a0;
{
double _n_f_36253=((_n_BASE_36150-_n_y_36252)/_n_HIGH_36151);
if(d::truth((_n_f_36253>=1.0))){d::check_cancel();return 6.0;
}
if(d::truth((_n_f_36253<=0.05))){d::check_cancel();return 95.0;
}
return ([&](){auto _n_argument_36482=95.0;auto _n_argument_36483=(6.0+(_n_SPAN_36152*std::pow(((1.0/_n_f_36253)-1.0),(1.0/1.6))));return d::minimum({_n_argument_36482,_n_argument_36483});})();

}
}

double _n_plumeX_36170(double _a0){double _n_y_36254=_a0;
return (_n_CX_36148+(0.01*std::pow((_n_RIM_36149-_n_y_36254),2.0)));}

double _n_plumeW_36171(double _a0){double _n_y_36255=_a0;
return ([&](){auto _n_left_36484=(8.0+(27.0*([&](){auto _n_argument_36486=(d::maximum({0.0,(_n_RIM_36149-_n_y_36255)})/_n_RIM_36149);auto _n_argument_36487=0.55;return std::pow(_n_argument_36486,_n_argument_36487);})()));auto _n_right_36485=(16.0*_n_smooth_36165(14.0,(-d::number(3.0)),_n_y_36255));return (_n_left_36484+_n_right_36485);})();}

struct Native_volcano_night final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_36172{};
double _n_N_36173{};
d::Array<d::String,false> _n_out_36174{};
d::Array<uint8_t,true> _n_lut_36175{};
d::Array<uint8_t,true> _n_mat_36177{};
d::Array<float,true> _n_rock_36178{};
d::Array<float,true> _n_crack_36179{};
d::Array<float,true> _n_phase_36180{};
d::Array<float,true> _n_shoreAt_36181{};
d::Array<float,true> _n_topAt_36182{};
d::Array<d::Array<double,false>,false> _n_RIVERS_36184{};
d::Array<uint8_t,true> _n_rivId_36185{};
d::Array<float,true> _n_rivS_36186{};
d::Array<float,true> _n_rivA_36187{};
d::Array<float,true> _n_rivK_36188{};
d::Array<float,true> _n_rivGlow_36189{};
double _n_PH_36190{};
d::Array<float,true> _n_texA_36191{};
d::Array<float,true> _n_texB_36192{};
d::Array<float,true> _n_haze_36194{};
double _n_ARCS_36195{};
double _n_SPARKS_36196{};
double _n_G_36197{};
d::Array<std::shared_ptr<_n_Record_36199>,false> _n_sp_36198{};
d::Array<float,true> _n_R_36200{};
d::Array<float,true> _n_Gc_36201{};
d::Array<float,true> _n_B_36202{};
d::Array<float,true> _n_floorAt_36203{};
d::Array<float,true> _n_fadeAt_36204{};
d::Array<float,true> _n_addR_36205{};
d::Array<float,true> _n_addG_36206{};
d::Array<float,true> _n_addB_36207{};
std::function<d::String(double,std::shared_ptr<_n_Record_36472>)> _render;
double _n_nearest_36176(double _a0,double _a1,double _a2){double _n_r_36256=_a0;
double _n_g_36257=_a1;
double _n_b_36258=_a2;
{
double _n_k_36259=([&](){auto _n_left_36663=([&](){auto _n_left_36665=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_36256*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_36666=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_36257*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_36665)|d::i32(_n_right_36666));})();auto _n_right_36664=d::minimum({31.0,double(d::i32((_n_b_36258*31.99))|d::i32(0.0))});return double(d::i32(_n_left_36663)|d::i32(_n_right_36664));})();
if(d::truth((d::at(this->_n_lut_36175,_n_k_36259)!=255.0))){d::check_cancel();return d::at(this->_n_lut_36175,_n_k_36259);
}
double _n_best_36260=0.0;
double _n_bd_36261=1000000000.0;
{double _n_i_36262=0.0;
for(;d::truth((_n_i_36262<double(this->_n_P_36172.size())));(void)((_n_i_36262++))){d::check_cancel();double _n_dr_36263=(d::at(d::at(this->_n_P_36172,_n_i_36262),0.0)-_n_r_36256);
double _n_dg_36264=(d::at(d::at(this->_n_P_36172,_n_i_36262),1.0)-_n_g_36257);
double _n_db_36265=(d::at(d::at(this->_n_P_36172,_n_i_36262),2.0)-_n_b_36258);
double _n_d_36266=((((0.3*_n_dr_36263)*_n_dr_36263)+((0.5*_n_dg_36264)*_n_dg_36264))+((0.2*_n_db_36265)*_n_db_36265));
if(d::truth((_n_d_36266<_n_bd_36261))){d::check_cancel();(void)(((_n_bd_36261=_n_d_36266),(_n_best_36260=_n_i_36262)));
}
}}
return ([&](){auto&& _n_array_36667=this->_n_lut_36175;auto _n_index_36668=_n_k_36259;auto _n_value_36669=_n_best_36260;d::put(_n_array_36667,_n_index_36668,_n_value_36669);return _n_value_36669;})();

}
}

d::Array<double,false> _n_cellPt_36183(double _a0,double _a1){double _n_i_36268=_a0;
double _n_j_36269=_a1;
return d::Array<double,false>{(_n_i_36268+_n_hash_36161(_n_i_36268,((_n_j_36269*7.0)+1.0))),(_n_j_36269+_n_hash_36161(((_n_i_36268*3.0)+5.0),_n_j_36269))};}

double _n_sample_36193(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_tex_36320=_a0;
double _n_x_36321=_a1;
double _n_y_36322=_a2;
{
double _n_yi_36323=std::floor(_n_y_36322);
double _n_fy_36324=(_n_y_36322-_n_yi_36323);
double _n_r0_36325=d::mod((d::mod(_n_yi_36323,this->_n_PH_36190)+this->_n_PH_36190),this->_n_PH_36190);
double _n_r1_36326=d::mod((_n_r0_36325+1.0),this->_n_PH_36190);
double _n_xi_36327=([&](){auto _n_argument_36670=0.0;auto _n_argument_36671=d::minimum({(_n_W_36146-1.0),double(d::i32(_n_x_36321)|d::i32(0.0))});return d::maximum({_n_argument_36670,_n_argument_36671});})();
return (d::at(_n_tex_36320,((_n_r0_36325*_n_W_36146)+_n_xi_36327))+((d::at(_n_tex_36320,((_n_r1_36326*_n_W_36146)+_n_xi_36327))-d::at(_n_tex_36320,((_n_r0_36325*_n_W_36146)+_n_xi_36327)))*_n_fy_36324));

}
}

void _n_splat_36208(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_36333=_a0;
double _n_y_36334=_a1;
double _n_a_36335=_a2;
double _n_cr_36336=_a3;
double _n_cg_36337=_a4;
double _n_cb_36338=_a5;
{
double _n_xi_36339=d::round(_n_x_36333);
double _n_yi_36340=d::round(_n_y_36334);
if((((d::truth((_n_xi_36339<0.0))||d::truth((_n_xi_36339>=_n_W_36146)))||d::truth((_n_yi_36340<0.0)))||d::truth((_n_yi_36340>=_n_H_36147)))){d::check_cancel();return;
}
double _n_k_36341=((_n_yi_36340*_n_W_36146)+_n_xi_36339);
if(d::truth((d::at(this->_n_mat_36177,_n_k_36341)==_n_LAKE_36160))){d::check_cancel();return;
}
if(d::truth(((_n_cr_36336*_n_a_36335)>d::at(this->_n_addR_36205,_n_k_36341)))){d::check_cancel();(void)(((([&](){auto&& _n_array_36672=this->_n_addR_36205;auto _n_index_36673=_n_k_36341;auto _n_value_36674=(_n_cr_36336*_n_a_36335);d::put(_n_array_36672,_n_index_36673,_n_value_36674);return _n_value_36674;})(),([&](){auto&& _n_array_36675=this->_n_addG_36206;auto _n_index_36676=_n_k_36341;auto _n_value_36677=(_n_cg_36337*_n_a_36335);d::put(_n_array_36675,_n_index_36676,_n_value_36677);return _n_value_36677;})()),([&](){auto&& _n_array_36678=this->_n_addB_36207;auto _n_index_36679=_n_k_36341;auto _n_value_36680=(_n_cb_36338*_n_a_36335);d::put(_n_array_36678,_n_index_36679,_n_value_36680);return _n_value_36680;})()));
}

}
}

explicit Native_volcano_night(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_36172=d::map(_n_meta_36144->_p_palette,_n_hex_36167);
this->_n_N_36173=(_n_W_36146*_n_H_36147);
this->_n_out_36174=d::Array<d::String,false>(size_t(this->_n_N_36173));
this->_n_lut_36175=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_36177=d::Array<uint8_t,true>(size_t(this->_n_N_36173));
this->_n_rock_36178=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_crack_36179=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_phase_36180=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_shoreAt_36181=d::Array<float,true>(size_t(_n_W_36146));
this->_n_topAt_36182=d::Array<float,true>(size_t(_n_W_36146));
{double _n_x_36267=0.0;
for(;d::truth((_n_x_36267<_n_W_36146));(void)((_n_x_36267++))){d::check_cancel();(void)(([&](){auto&& _n_array_36488=this->_n_shoreAt_36181;auto _n_index_36489=_n_x_36267;auto _n_value_36490=([&](){auto _n_left_36491=(_n_SHORE_36154+((2.0*(_n_fbm_36163((_n_x_36267*0.045),9.0,3.0,std::optional<double>{})-0.5))*2.0));auto _n_right_36492=(0.7*_n_noise_36162((_n_x_36267*0.3),2.0,std::optional<double>{},std::optional<double>{}));return (_n_left_36491+_n_right_36492);})();d::put(_n_array_36488,_n_index_36489,_n_value_36490);return _n_value_36490;})());
(void)(([&](){auto&& _n_array_36493=this->_n_topAt_36182;auto _n_index_36494=_n_x_36267;auto _n_value_36495=([&](){auto _n_argument_36496=_n_coneY_36168((_n_x_36267+0.5));auto _n_argument_36497=(_n_PLAIN_36153+(1.6*(_n_fbm_36163((_n_x_36267*0.06),5.0,3.0,std::optional<double>{})-0.5)));return d::minimum({_n_argument_36496,_n_argument_36497});})();d::put(_n_array_36493,_n_index_36494,_n_value_36495);return _n_value_36495;})());
}}
{double _n_r_36270=0.0;
for(;d::truth((_n_r_36270<_n_H_36147));(void)((_n_r_36270++))){d::check_cancel();{double _n_x_36271=0.0;
for(;d::truth((_n_x_36271<_n_W_36146));(void)((_n_x_36271++))){d::check_cancel();double _n_k_36272=((_n_r_36270*_n_W_36146)+_n_x_36271);
double _n_y_36273=(_n_r_36270+0.5);
if(d::truth((_n_y_36273>=d::at(this->_n_shoreAt_36181,_n_x_36271)))){d::check_cancel();(void)(([&](){auto&& _n_array_36498=this->_n_mat_36177;auto _n_index_36499=_n_k_36272;auto _n_value_36500=_n_LAKE_36160;d::put(_n_array_36498,_n_index_36499,_n_value_36500);return _n_value_36500;})());
}else {d::check_cancel();if(d::truth((_n_y_36273>=d::at(this->_n_topAt_36182,_n_x_36271)))){d::check_cancel();(void)(([&](){auto&& _n_array_36501=this->_n_mat_36177;auto _n_index_36502=_n_k_36272;auto _n_value_36503=_n_ROCK_36159;d::put(_n_array_36501,_n_index_36502,_n_value_36503);return _n_value_36503;})());
(void)(([&](){auto&& _n_array_36504=this->_n_rock_36178;auto _n_index_36505=_n_k_36272;auto _n_value_36506=([&](){auto _n_left_36507=(0.55*_n_fbm_36163(((_n_x_36271*0.3)+(((_n_y_36273*0.04)*(d::truth((_n_x_36271<_n_CX_36148))?(-d::number(1.0)):1.0))*3.0)),(_n_y_36273*0.07),3.0,std::optional<double>{}));auto _n_right_36508=(0.45*_n_fbm_36163((_n_x_36271*0.5),(_n_y_36273*0.5),2.0,std::optional<double>{}));return (_n_left_36507+_n_right_36508);})();d::put(_n_array_36504,_n_index_36505,_n_value_36506);return _n_value_36506;})());
if(d::truth((_n_y_36273>(_n_PLAIN_36153-3.0)))){d::check_cancel();double _n_sx_36274=(_n_x_36271/7.0);
double _n_sy_36275=(((_n_y_36273-_n_PLAIN_36153)/2.6)+40.0);
double _n_ix_36276=std::floor(_n_sx_36274);
double _n_iy_36277=std::floor(_n_sy_36275);
double _n_f1_36278=9.0;
double _n_f2_36279=9.0;
{double _n_j_36280=(_n_iy_36277-1.0);
for(;d::truth((_n_j_36280<=(_n_iy_36277+1.0)));(void)((_n_j_36280++))){d::check_cancel();{double _n_i_36281=(_n_ix_36276-1.0);
for(;d::truth((_n_i_36281<=(_n_ix_36276+1.0)));(void)((_n_i_36281++))){d::check_cancel();auto _n_binding_36509=this->_n_cellPt_36183(_n_i_36281,_n_j_36280);
double _n_px_36282=d::at(_n_binding_36509,0.0);
double _n_py_36283=d::at(_n_binding_36509,1.0);
double _n_d_36284=d::hypot(std::initializer_list<double>{(_n_px_36282-_n_sx_36274),(_n_py_36283-_n_sy_36275)});
if(d::truth((_n_d_36284<_n_f1_36278))){d::check_cancel();(void)(((_n_f2_36279=_n_f1_36278),(_n_f1_36278=_n_d_36284)));
}else {d::check_cancel();if(d::truth((_n_d_36284<_n_f2_36279))){d::check_cancel();(void)((_n_f2_36279=_n_d_36284));
}
}
}}
}}
double _n_near_36285=_n_smooth_36165((_n_PLAIN_36153-3.0),(_n_PLAIN_36153+3.0),_n_y_36273);
(void)(([&](){auto&& _n_array_36510=this->_n_crack_36179;auto _n_index_36511=_n_k_36272;auto _n_value_36512=([&](){auto _n_left_36513=(_n_smooth_36165(0.16,0.02,(_n_f2_36279-_n_f1_36278))*_n_near_36285);auto _n_right_36514=(0.4+(0.6*_n_fbm_36163((_n_x_36271*0.08),(_n_y_36273*0.2),2.0,std::optional<double>{})));return (_n_left_36513*_n_right_36514);})();d::put(_n_array_36510,_n_index_36511,_n_value_36512);return _n_value_36512;})());
(void)(([&](){auto&& _n_array_36515=this->_n_phase_36180;auto _n_index_36516=_n_k_36272;auto _n_value_36517=(_n_fbm_36163((_n_x_36271*0.05),(_n_y_36273*0.1),2.0,std::optional<double>{})*12.0);d::put(_n_array_36515,_n_index_36516,_n_value_36517);return _n_value_36517;})());
}
}
}
}}
}}
this->_n_RIVERS_36184=d::Array<d::Array<double,false>,false>{d::Array<double,false>{41.5,75.0,(-d::number(0.55)),(-d::number(0.5)),1.0,0.09,0.3},d::Array<double,false>{41.5,77.0,0.45,0.32,1.0,0.08,2.1},d::Array<double,false>{42.0,80.0,(-d::number(0.08)),(-d::number(0.22)),1.3,0.06,4.0},d::Array<double,false>{43.0,70.0,0.15,0.7,0.8,0.07,5.2},d::Array<double,false>{45.0,73.0,(-d::number(0.3)),(-d::number(0.85)),0.75,0.05,1.4}};
this->_n_rivId_36185=d::Array<uint8_t,true>(size_t(this->_n_N_36173)).fill(255.0);
this->_n_rivS_36186=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_rivA_36187=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_rivK_36188=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_rivGlow_36189=d::Array<float,true>(size_t(this->_n_N_36173));
(void)(d::forEach(this->_n_RIVERS_36184,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_36518=_a0;
double _n_y0_36286=d::at(_n_binding_36518,0.0);
double _n_y1_36287=d::at(_n_binding_36518,1.0);
double _n_f0_36288=d::at(_n_binding_36518,2.0);
double _n_f1_36289=d::at(_n_binding_36518,3.0);
double _n_wm_36290=d::at(_n_binding_36518,4.0);
double _n_amp_36291=d::at(_n_binding_36518,5.0);
double _n_ph_36292=d::at(_n_binding_36518,6.0);
double _n_id_36293=_a1;
{
d::Array<d::Array<double,false>,false> _n_pts_36294=d::Array<d::Array<double,false>,false>{};
double _n_s_36295=0.0;
double _n_lx_36296=0.0;
double _n_ly_36297=0.0;
{double _n_y_36298=_n_y0_36286;
for(;d::truth((_n_y_36298<=_n_y1_36287));(void)((_n_y_36298=(_n_y_36298+0.25)))){d::check_cancel();double _n_k_36299=((_n_y_36298-_n_y0_36286)/(_n_y1_36287-_n_y0_36286));
double _n_f_36300=([&](){auto _n_left_36519=([&](){auto _n_left_36521=(_n_f0_36288+((_n_f1_36289-_n_f0_36288)*_n_smooth_36165(0.0,1.0,_n_k_36299)));auto _n_right_36522=(_n_amp_36291*std::sin((((_n_k_36299*ascii::PI)*4.0)+_n_ph_36292)));return (_n_left_36521+_n_right_36522);})();auto _n_right_36520=(0.05*(_n_noise_36162((_n_k_36299*7.0),(_n_id_36293*7.0),std::optional<double>{},std::optional<double>{})-0.5));return (_n_left_36519+_n_right_36520);})();
double _n_x_36301=(_n_CX_36148+(_n_f_36300*_n_reach_36169(_n_y_36298)));
if(d::truth(double(_n_pts_36294.size()))){d::check_cancel();(void)((_n_s_36295=(_n_s_36295+d::hypot(std::initializer_list<double>{(_n_x_36301-_n_lx_36296),(_n_y_36298-_n_ly_36297)}))));
}
(void)(_n_pts_36294.push(d::Array<double,false>{_n_x_36301,_n_y_36298,_n_s_36295,_n_k_36299}));
(void)(((_n_lx_36296=_n_x_36301),(_n_ly_36297=_n_y_36298)));
}}
{double _n_r_36302=(std::floor(_n_y0_36286)-3.0);
for(;d::truth((_n_r_36302<d::minimum({_n_H_36147,(_n_y1_36287+5.0)})));(void)((_n_r_36302++))){d::check_cancel();{double _n_x_36303=0.0;
for(;d::truth((_n_x_36303<_n_W_36146));(void)((_n_x_36303++))){d::check_cancel();double _n_k_36304=((_n_r_36302*_n_W_36146)+_n_x_36303);
if(d::truth((d::at(this->_n_mat_36177,_n_k_36304)!=_n_ROCK_36159))){d::check_cancel();continue;
}
double _n_y_36305=(_n_r_36302+0.5);
double _n_bd_36306=1000000000.0;
double _n_bi_36307=0.0;
{double _n_i_36308=0.0;
for(;d::truth((_n_i_36308<double(_n_pts_36294.size())));(void)((_n_i_36308++))){d::check_cancel();d::Array<double,false> _n_p_36309=d::at(_n_pts_36294,_n_i_36308);
if(d::truth((std::fabs((d::at(_n_p_36309,1.0)-_n_y_36305))>7.0))){d::check_cancel();continue;
}
double _n_d_36310=(std::pow(((d::at(_n_p_36309,0.0)-_n_x_36303)-0.5),2.0)+std::pow((d::at(_n_p_36309,1.0)-_n_y_36305),2.0));
if(d::truth((_n_d_36310<_n_bd_36306))){d::check_cancel();(void)(((_n_bd_36306=_n_d_36310),(_n_bi_36307=_n_i_36308)));
}
}}
if(d::truth((_n_bd_36306>100000000.0))){d::check_cancel();continue;
}
auto _n_binding_36523=d::at(_n_pts_36294,_n_bi_36307);
double _n_px_36311=d::at(_n_binding_36523,0.0);
double _n_ps_36312=d::at(_n_binding_36523,2.0);
double _n_pk_36313=d::at(_n_binding_36523,3.0);
double _n_d_36314=std::sqrt(_n_bd_36306);
double _n_hw_36315=(((0.55+(1.3*_n_pk_36313))+(1.4*_n_smooth_36165(0.85,1.0,_n_pk_36313)))*_n_wm_36290);
double _n_heat_36316=(1.0-(0.55*_n_pk_36313));
(void)(([&](){auto&& _n_array_36524=this->_n_rivGlow_36189;auto _n_index_36525=_n_k_36304;auto _n_value_36526=([&](){auto _n_argument_36527=d::at(this->_n_rivGlow_36189,_n_k_36304);auto _n_argument_36528=(std::exp(((-d::number(d::maximum({0.0,(_n_d_36314-_n_hw_36315)})))/2.2))*_n_heat_36316);return d::maximum({_n_argument_36527,_n_argument_36528});})();d::put(_n_array_36524,_n_index_36525,_n_value_36526);return _n_value_36526;})());
if((d::truth((_n_d_36314<_n_hw_36315))&&d::truth(([&]()->bool{auto _n_logical_36529=(d::at(this->_n_rivId_36185,_n_k_36304)==255.0);return d::truth(_n_logical_36529)?_n_logical_36529:((_n_d_36314/_n_hw_36315)<std::fabs(d::at(this->_n_rivA_36187,_n_k_36304)));})()))){d::check_cancel();(void)(([&](){auto&& _n_array_36530=this->_n_rivId_36185;auto _n_index_36531=_n_k_36304;auto _n_value_36532=_n_id_36293;d::put(_n_array_36530,_n_index_36531,_n_value_36532);return _n_value_36532;})());
(void)(([&](){auto&& _n_array_36533=this->_n_rivS_36186;auto _n_index_36534=_n_k_36304;auto _n_value_36535=_n_ps_36312;d::put(_n_array_36533,_n_index_36534,_n_value_36535);return _n_value_36535;})());
(void)(([&](){auto&& _n_array_36536=this->_n_rivA_36187;auto _n_index_36537=_n_k_36304;auto _n_value_36538=((d::truth(((_n_x_36303+0.5)<_n_px_36311))?(-d::number(1.0)):1.0)*(_n_d_36314/_n_hw_36315));d::put(_n_array_36536,_n_index_36537,_n_value_36538);return _n_value_36538;})());
(void)(([&](){auto&& _n_array_36539=this->_n_rivK_36188;auto _n_index_36540=_n_k_36304;auto _n_value_36541=_n_pk_36313;d::put(_n_array_36539,_n_index_36540,_n_value_36541);return _n_value_36541;})());
}
}}
}}

}
}));
this->_n_PH_36190=160.0;
this->_n_texA_36191=d::Array<float,true>(size_t((_n_W_36146*this->_n_PH_36190)));
this->_n_texB_36192=d::Array<float,true>(size_t((_n_W_36146*this->_n_PH_36190)));
{double _n_r_36317=0.0;
for(;d::truth((_n_r_36317<this->_n_PH_36190));(void)((_n_r_36317++))){d::check_cancel();{double _n_x_36318=0.0;
for(;d::truth((_n_x_36318<_n_W_36146));(void)((_n_x_36318++))){d::check_cancel();double _n_q_36319=_n_fbm_36163((_n_x_36318*0.03),(_n_r_36317*0.03),3.0,std::optional<double>((this->_n_PH_36190*0.03)));
(void)(([&](){auto&& _n_array_36542=this->_n_texA_36191;auto _n_index_36543=((_n_r_36317*_n_W_36146)+_n_x_36318);auto _n_value_36544=_n_fbm_36163(((_n_x_36318*0.07)+(_n_q_36319*1.5)),(_n_r_36317*0.07),4.0,std::optional<double>((this->_n_PH_36190*0.07)));d::put(_n_array_36542,_n_index_36543,_n_value_36544);return _n_value_36544;})());
(void)(([&](){auto&& _n_array_36545=this->_n_texB_36192;auto _n_index_36546=((_n_r_36317*_n_W_36146)+_n_x_36318);auto _n_value_36547=_n_fbm_36163(((_n_x_36318*0.12)+40.0),(_n_r_36317*0.12),3.0,std::optional<double>((this->_n_PH_36190*0.12)));d::put(_n_array_36545,_n_index_36546,_n_value_36547);return _n_value_36547;})());
}}
}}
this->_n_haze_36194=d::Array<float,true>(size_t(this->_n_N_36173));
{double _n_k_36328=0.0;
for(;d::truth((_n_k_36328<this->_n_N_36173));(void)((_n_k_36328++))){d::check_cancel();(void)(([&](){auto&& _n_array_36548=this->_n_haze_36194;auto _n_index_36549=_n_k_36328;auto _n_value_36550=([&](){auto _n_argument_36551=(d::mod(_n_k_36328,_n_W_36146)*0.04);auto _n_argument_36552=(std::floor((_n_k_36328/_n_W_36146))*0.07);auto _n_argument_36553=3.0;return _n_fbm_36163(_n_argument_36551,_n_argument_36552,_n_argument_36553,std::optional<double>{});})();d::put(_n_array_36548,_n_index_36549,_n_value_36550);return _n_value_36550;})());
}}
this->_n_ARCS_36195=34.0;
this->_n_SPARKS_36196=110.0;
this->_n_G_36197=50.0;
this->_n_sp_36198=d::Array<std::shared_ptr<_n_Record_36199>,false>(d::from((this->_n_ARCS_36195+this->_n_SPARKS_36196),[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_36199>{double _n_i_36330=_a1;
return ([&](){auto _n_object_36556=std::make_shared<_n_Record_36199>();_n_object_36556->_p_vx=((_n_hash_36161(_n_i_36330,1.0)-0.5)*2.0);_n_object_36556->_p_vy=_n_hash_36161(_n_i_36330,2.0);_n_object_36556->_p_period=(2.6+(1.4*_n_hash_36161(_n_i_36330,3.0)));_n_object_36556->_p_off=(_n_hash_36161(_n_i_36330,4.0)*10.0);_n_object_36556->_p_x0=((_n_hash_36161(_n_i_36330,5.0)-0.5)*4.0);return _n_object_36556;})();}));
this->_n_R_36200=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_Gc_36201=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_B_36202=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_floorAt_36203=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_fadeAt_36204=d::Array<float,true>(size_t(this->_n_N_36173)).fill(1.0);
{double _n_k_36331=0.0;
for(;d::truth((_n_k_36331<this->_n_N_36173));(void)((_n_k_36331++))){d::check_cancel();double _n_r_36332=std::floor((_n_k_36331/_n_W_36146));
(void)(([&](){auto&& _n_array_36557=this->_n_floorAt_36203;auto _n_index_36558=_n_k_36331;auto _n_value_36559=0.0;d::put(_n_array_36557,_n_index_36558,_n_value_36559);return _n_value_36559;})());
if(d::truth((d::at(this->_n_mat_36177,_n_k_36331)==_n_LAKE_36160))){d::check_cancel();(void)(([&](){auto&& _n_array_36560=this->_n_fadeAt_36204;auto _n_index_36561=_n_k_36331;auto _n_value_36562=_n_smooth_36165((_n_H_36147+6.0),(_n_H_36147-6.0),(_n_r_36332+0.5));d::put(_n_array_36560,_n_index_36561,_n_value_36562);return _n_value_36562;})());
}
}}
this->_n_addR_36205=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_addG_36206=d::Array<float,true>(size_t(this->_n_N_36173));
this->_n_addB_36207=d::Array<float,true>(size_t(this->_n_N_36173));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36472> _a1) mutable ->d::String{double _n_t_36342=_a0;
auto _n_binding_36565=(d::present(_a1)?_a1:([&](){auto _n_object_36564=std::make_shared<_n_Record_36472>();return _n_object_36564;})());
std::optional<d::Array<uint8_t,true>> _n_color_36343=_n_binding_36565->_p_color;
{
(void)(((this->_n_addR_36205.fill(0.0),this->_n_addG_36206.fill(0.0)),this->_n_addB_36207.fill(0.0)));
double _n_surge_36344=(0.65+([&](){auto _n_left_36566=(0.35*std::sin((_n_t_36342*1.3)));auto _n_right_36567=std::sin(((_n_t_36342*0.47)+1.0));return (_n_left_36566*_n_right_36567);})());
{double _n_i_36345=0.0;
for(;d::truth((_n_i_36345<(this->_n_ARCS_36195+this->_n_SPARKS_36196)));(void)((_n_i_36345++))){d::check_cancel();std::shared_ptr<_n_Record_36199> _n_s_36346=d::at(this->_n_sp_36198,_n_i_36345);
double _n_tt_36347=(_n_t_36342+_n_s_36346->_p_off);
double _n_n_36348=std::floor((_n_tt_36347/_n_s_36346->_p_period));
double _n_tau_36349=(_n_tt_36347-(_n_n_36348*_n_s_36346->_p_period));
bool _n_arc_36350=(_n_i_36345<this->_n_ARCS_36195);
double _n_kick_36351=((0.82+(0.3*_n_hash_36161(_n_i_36345,(_n_n_36348+99.0))))*(0.8+(0.25*_n_surge_36344)));
double _n_vy_36352=((d::truth(_n_arc_36350)?(30.0+(18.0*_n_s_36346->_p_vy)):(18.0+(24.0*_n_s_36346->_p_vy)))*_n_kick_36351);
double _n_vx_36353=(((d::truth(_n_arc_36350)?(([&](){auto _n_left_36568=(0.35+(0.65*std::fabs(_n_s_36346->_p_vx)));auto _n_right_36569=d::sign(_n_s_36346->_p_vx);return (_n_left_36568*_n_right_36569);})()*20.0):(_n_s_36346->_p_vx*11.0))*_n_kick_36351)+1.0);
double _n_life_36354=(((2.0*_n_vy_36352)/this->_n_G_36197)+0.7);
if(d::truth((_n_tau_36349>_n_life_36354))){d::check_cancel();continue;
}
double _n_tail_36355=(d::truth(_n_arc_36350)?0.34:0.04);
double _n_steps_36356=(d::truth(_n_arc_36350)?26.0:2.0);
{double _n_j_36357=0.0;
for(;d::truth((_n_j_36357<=_n_steps_36356));(void)((_n_j_36357++))){d::check_cancel();double _n_u_36358=(_n_tau_36349-((_n_j_36357/_n_steps_36356)*_n_tail_36355));
if(d::truth((_n_u_36358<0.0))){d::check_cancel();break;
}
double _n_x_36359=((_n_CX_36148+_n_s_36346->_p_x0)+(_n_vx_36353*_n_u_36358));
double _n_y_36360=(((_n_RIM_36149-0.8)-(_n_vy_36352*_n_u_36358))+(((0.5*this->_n_G_36197)*_n_u_36358)*_n_u_36358));
if(d::truth((_n_y_36360>(_n_coneY_36168(_n_x_36359)+1.5)))){d::check_cancel();continue;
}
double _n_age_36361=(_n_u_36358/_n_life_36354);
double _n_f_36362=(_n_j_36357/_n_steps_36356);
double _n_a_36363=(((1.0-(0.75*_n_f_36362))*(1.0-(0.5*_n_age_36361)))*(d::truth(_n_arc_36350)?1.1:0.75));
(void)(([&](){auto _n_argument_36570=_n_x_36359;auto _n_argument_36571=_n_y_36360;auto _n_argument_36572=_n_a_36363;auto _n_argument_36573=1.0;auto _n_argument_36574=([&](){auto _n_argument_36575=0.95;auto _n_argument_36576=0.35;auto _n_argument_36577=d::minimum({1.0,(_n_age_36361+(_n_f_36362*0.6))});return _n_mix_36166(_n_argument_36575,_n_argument_36576,_n_argument_36577);})();auto _n_argument_36578=([&](){auto _n_argument_36579=0.65;auto _n_argument_36580=0.04;auto _n_argument_36581=d::minimum({1.0,((_n_age_36361*1.4)+_n_f_36362)});return _n_mix_36166(_n_argument_36579,_n_argument_36580,_n_argument_36581);})();return this->_n_splat_36208(_n_argument_36570,_n_argument_36571,_n_argument_36572,_n_argument_36573,_n_argument_36574,_n_argument_36578);})());
}}
}}
double _n_slot_36364=std::floor((_n_t_36342/0.3));
double _n_sf_36365=((_n_t_36342/0.3)-_n_slot_36364);
double _n_bolt_36366=0.0;
double _n_bx_36367=0.0;
double _n_by_36368=0.0;
d::Array<double,false> _n_boltCells_36369=d::Array<double,false>{};
if(d::truth((_n_hash_36161(_n_slot_36364,77.0)>0.8))){d::check_cancel();(void)((_n_bolt_36366=(d::truth((_n_sf_36365<0.15))?1.0:(d::truth((_n_sf_36365<0.3))?0.25:(d::truth((_n_sf_36365<0.5))?0.85:d::maximum({0.0,(0.85-((_n_sf_36365-0.5)*2.0))}))))));
double _n_y_36370=(4.0+(_n_hash_36161(_n_slot_36364,3.0)*8.0));
double _n_x_36371=([&](){auto _n_left_36582=_n_plumeX_36170(_n_y_36370);auto _n_right_36583=(([&](){auto _n_left_36584=(_n_hash_36161(_n_slot_36364,4.0)-0.5);auto _n_right_36585=_n_plumeW_36171(_n_y_36370);return (_n_left_36584*_n_right_36585);})()*1.1);return (_n_left_36582+_n_right_36583);})();
double _n_len_36372=(10.0+(_n_hash_36161(_n_slot_36364,5.0)*12.0));
(void)(((_n_bx_36367=_n_x_36371),(_n_by_36368=(_n_y_36370+(_n_len_36372/2.0)))));
double _n_branchAt_36373=(3.0+std::floor((_n_hash_36161(_n_slot_36364,6.0)*5.0)));
double _n_brx_36374=0.0;
double _n_bry_36375=0.0;
{double _n_i_36376=0.0;
for(;d::truth((_n_i_36376<_n_len_36372));(void)((_n_i_36376++))){d::check_cancel();double _n_nx_36377=(_n_x_36371+((_n_hash_36161(((_n_slot_36364*31.0)+_n_i_36376),8.0)-0.5)*3.2));
double _n_ny_36378=(_n_y_36370+1.0);
{double _n_q_36379=0.0;
for(;d::truth((_n_q_36379<=2.0));(void)((_n_q_36379++))){d::check_cancel();(void)(_n_boltCells_36369.push(([&](){auto _n_left_36586=d::round(_n_mix_36166(_n_x_36371,_n_nx_36377,(_n_q_36379/2.0)));auto _n_right_36587=(d::round(_n_mix_36166(_n_y_36370,_n_ny_36378,(_n_q_36379/2.0)))*_n_W_36146);return (_n_left_36586+_n_right_36587);})()));
}}
(void)(((_n_x_36371=_n_nx_36377),(_n_y_36370=_n_ny_36378)));
if(d::truth((_n_i_36376==_n_branchAt_36373))){d::check_cancel();(void)(((_n_brx_36374=_n_x_36371),(_n_bry_36375=_n_y_36370)));
}
}}
{double _n_i_36380=0.0;
for(;(d::truth((_n_i_36380<6.0))&&d::truth(_n_brx_36374));(void)((_n_i_36380++))){d::check_cancel();(void)((_n_brx_36374=(_n_brx_36374+(d::truth((_n_hash_36161(_n_slot_36364,(40.0+_n_i_36380))<0.5))?1.3:(-d::number(1.3))))));
(void)((_n_bry_36375=(_n_bry_36375+0.8)));
(void)(_n_boltCells_36369.push(([&](){auto _n_left_36588=d::round(_n_brx_36374);auto _n_right_36589=(d::round(_n_bry_36375)*_n_W_36146);return (_n_left_36588+_n_right_36589);})()));
}}
}
double _n_rise_36381=(_n_t_36342*3.2);
{double _n_r_36382=0.0;
for(;d::truth((_n_r_36382<_n_H_36147));(void)((_n_r_36382++))){d::check_cancel();double _n_y_36383=(_n_r_36382+0.5);
{double _n_x_36384=0.0;
for(;d::truth((_n_x_36384<_n_W_36146));(void)((_n_x_36384++))){d::check_cancel();double _n_k_36385=((_n_r_36382*_n_W_36146)+_n_x_36384);
double _n_m_36386=d::at(this->_n_mat_36177,_n_k_36385);
double _n_cr_36387=0.0;
double _n_cg_36388=0.0;
double _n_cb_36389=0.0;
double _n_dcx_36390=((_n_x_36384+0.5)-_n_CX_36148);
double _n_dcy_36391=(((_n_y_36383-_n_RIM_36149)+1.0)*1.4);
double _n_dc_36392=std::sqrt(((_n_dcx_36390*_n_dcx_36390)+(_n_dcy_36391*_n_dcy_36391)));
if(d::truth((_n_m_36386==_n_SKY_36158))){d::check_cancel();double _n_v_36393=(_n_y_36383/_n_PLAIN_36153);
double _n_veil_36394=(0.85+(0.3*d::at(this->_n_haze_36194,_n_k_36385)));
double _n_gx_36395=(_n_dcx_36390/66.0);
double _n_gy_36396=(((_n_y_36383-_n_RIM_36149)-12.0)/38.0);
double _n_glow_36397=([&](){auto _n_left_36590=([&](){auto _n_left_36592=(0.5*std::exp(((-d::number(((_n_gx_36395*_n_gx_36395)+(_n_gy_36396*_n_gy_36396))))*2.2)));auto _n_right_36593=(0.16*std::exp(((-d::number(_n_dc_36392))/14.0)));return (_n_left_36592+_n_right_36593);})();auto _n_right_36591=(0.2*std::pow(_n_v_36393,6.0));return (_n_left_36590+_n_right_36591);})();
double _n_warm_36398=_n_smooth_36165(0.0,(_n_RIM_36149+20.0),_n_y_36383);
(void)((_n_cr_36387=((0.005+_n_glow_36397)*_n_veil_36394)));
(void)((_n_cg_36388=((0.005+(_n_glow_36397*(0.1+(0.22*_n_warm_36398))))*_n_veil_36394)));
(void)((_n_cb_36389=((0.012+(_n_glow_36397*0.05))*_n_veil_36394)));
double _n_c_36399=0.0;
if(d::truth((_n_y_36383<(_n_RIM_36149+1.0)))){d::check_cancel();double _n_px_36400=_n_plumeX_36170(_n_y_36383);
double _n_pw_36401=([&](){auto _n_left_36594=_n_plumeW_36171(_n_y_36383);auto _n_right_36595=([&](){auto _n_left_36596=(1.0+(0.13*std::sin(((_n_y_36383+_n_rise_36381)*0.42))));auto _n_right_36597=(0.07*std::sin((((_n_y_36383+_n_rise_36381)*0.9)+2.0)));return (_n_left_36596+_n_right_36597);})();return (_n_left_36594*_n_right_36595);})();
double _n_e_36402=(1.0-(std::fabs(((_n_x_36384+0.5)-_n_px_36400))/_n_pw_36401));
if(d::truth((_n_e_36402>(-d::number(0.5))))){d::check_cancel();double _n_a_36403=this->_n_sample_36193(this->_n_texA_36191,_n_x_36384,(_n_y_36383+_n_rise_36381));
double _n_b_36404=this->_n_sample_36193(this->_n_texB_36192,(_n_x_36384-(_n_t_36342*1.5)),(_n_y_36383+(_n_rise_36381*1.6)));
double _n_d_36405=((0.65*_n_a_36403)+(0.35*_n_b_36404));
(void)((_n_c_36399=([&](){auto _n_left_36598=_n_smooth_36165(0.0,0.2,((_n_e_36402+((_n_a_36403-0.5)*2.5))+((_n_b_36404-0.5)*0.7)));auto _n_right_36599=_n_smooth_36165((-d::number(1.0)),3.0,_n_y_36383);return (_n_left_36598*_n_right_36599);})()));
if(d::truth((_n_c_36399>0.01))){d::check_cancel();double _n_below_36406=([&](){auto _n_left_36600=(0.65*this->_n_sample_36193(this->_n_texA_36191,_n_x_36384,((_n_y_36383+3.5)+_n_rise_36381)));auto _n_right_36601=(0.35*this->_n_sample_36193(this->_n_texB_36192,(_n_x_36384-(_n_t_36342*1.5)),((_n_y_36383+3.5)+(_n_rise_36381*1.6))));return (_n_left_36600+_n_right_36601);})();
double _n_lb_36407=_n_clamp_36164((0.45+((_n_d_36405-_n_below_36406)*13.0)));
double _n_up_36408=(_n_RIM_36149-_n_y_36383);
double _n_heat_36409=([&](){auto _n_left_36602=(std::exp(((-d::number(_n_up_36408))/10.0))*0.6);auto _n_right_36603=(0.16*std::exp(((-d::number(_n_up_36408))/30.0)));return (_n_left_36602+_n_right_36603);})();
double _n_young_36410=(0.3+(0.7*_n_smooth_36165((_n_RIM_36149-4.0),(_n_RIM_36149-20.0),_n_y_36383)));
double _n_l2_36411=(_n_lb_36407*_n_lb_36407);
double _n_body_36412=(((0.15+(0.5*_n_l2_36411))*(0.7+(0.3*_n_clamp_36164((_n_e_36402*2.0)))))*_n_young_36410);
double _n_fire_36413=((_n_heat_36409*(0.2+(1.1*_n_l2_36411)))*(0.45+(0.55*_n_smooth_36165((_n_RIM_36149-2.0),(_n_RIM_36149-12.0),_n_y_36383))));
double _n_pr_36414=(_n_body_36412+(_n_fire_36413*0.95));
double _n_pg_36415=((_n_body_36412*0.86)+(_n_fire_36413*(0.18+(0.25*std::exp(((-d::number(_n_up_36408))/6.0))))));
double _n_pb_36416=((_n_body_36412*0.8)+(_n_fire_36413*0.05));
if(d::truth(_n_bolt_36366)){d::check_cancel();double _n_dl_36417=d::hypot(std::initializer_list<double>{((_n_x_36384+0.5)-_n_bx_36367),((_n_y_36383-_n_by_36368)*0.8)});
double _n_L_36418=((_n_bolt_36366*([&](){auto _n_left_36604=(std::exp(((-d::number(_n_dl_36417))/5.0))*0.6);auto _n_right_36605=(std::exp(((-d::number(_n_dl_36417))/16.0))*0.22);return (_n_left_36604+_n_right_36605);})())*(0.3+(0.9*_n_lb_36407)));
(void)((((_n_pr_36414=(_n_pr_36414+(0.7*_n_L_36418))),(_n_pg_36415=(_n_pg_36415+(0.66*_n_L_36418)))),(_n_pb_36416=(_n_pb_36416+(0.95*_n_L_36418)))));
}
double _n_al_36419=d::minimum({1.0,(_n_c_36399*1.15)});
(void)((_n_cr_36387=_n_mix_36166(_n_cr_36387,_n_pr_36414,_n_al_36419)));
(void)((_n_cg_36388=_n_mix_36166(_n_cg_36388,_n_pg_36415,_n_al_36419)));
(void)((_n_cb_36389=_n_mix_36166(_n_cb_36389,_n_pb_36416,_n_al_36419)));
}
}
}
if((d::truth((_n_c_36399<0.05))&&d::truth((_n_hash_36161(_n_x_36384,((_n_r_36382*3.0)+11.0))>0.982)))){d::check_cancel();double _n_tw_36420=(0.6+(0.4*std::sin(([&](){auto _n_left_36606=(_n_t_36342*(1.5+(_n_hash_36161(_n_x_36384,_n_r_36382)*3.0)));auto _n_right_36607=(_n_hash_36161(_n_r_36382,_n_x_36384)*6.28);return (_n_left_36606+_n_right_36607);})())));
double _n_s_36421=([&](){auto _n_left_36608=((0.35+(0.5*_n_tw_36420))*_n_smooth_36165(0.25,0.04,_n_glow_36397));auto _n_right_36609=_n_smooth_36165((_n_PLAIN_36153-4.0),20.0,_n_y_36383);return (_n_left_36608*_n_right_36609);})();
(void)((((_n_cr_36387=d::maximum({_n_cr_36387,(_n_s_36421*0.85)})),(_n_cg_36388=d::maximum({_n_cg_36388,(_n_s_36421*0.87)}))),(_n_cb_36389=d::maximum({_n_cb_36389,_n_s_36421}))));
}
}else {d::check_cancel();if(d::truth((_n_m_36386==_n_ROCK_36159))){d::check_cancel();double _n_s_36422=d::at(this->_n_rock_36178,_n_k_36385);
(void)((_n_cr_36387=(0.012+(0.04*_n_s_36422))));
(void)((_n_cg_36388=(0.01+(0.024*_n_s_36422))));
(void)((_n_cb_36389=(0.012+(0.024*_n_s_36422))));
double _n_rg_36423=d::at(this->_n_rivGlow_36189,_n_k_36385);
double _n_up_36424=([&](){auto _n_left_36610=(std::exp(((-d::number(_n_dc_36392))/6.0))*0.9);auto _n_right_36611=(std::exp(((-d::number(_n_dc_36392))/22.0))*0.06);return (_n_left_36610+_n_right_36611);})();
double _n_brow_36425=([&](){auto _n_left_36612=(_n_smooth_36165((d::at(this->_n_topAt_36182,_n_x_36384)+1.4),d::at(this->_n_topAt_36182,_n_x_36384),_n_y_36383)*0.55);auto _n_right_36613=std::exp(((-d::number(_n_dc_36392))/90.0));return (_n_left_36612*_n_right_36613);})();
double _n_lit_36426=(((((_n_rg_36423*0.22)+((_n_rg_36423*_n_rg_36423)*0.3))+_n_up_36424)+_n_brow_36425)*(0.4+(0.9*_n_s_36422)));
(void)((_n_cr_36387=(_n_cr_36387+(_n_lit_36426*0.9))));
(void)((_n_cg_36388=(_n_cg_36388+(_n_lit_36426*0.22))));
(void)((_n_cb_36389=(_n_cb_36389+(_n_lit_36426*0.05))));
double _n_id_36427=d::at(this->_n_rivId_36185,_n_k_36385);
if(d::truth((_n_id_36427!=255.0))){d::check_cancel();double _n_a_36428=d::at(this->_n_rivA_36187,_n_k_36385);
double _n_kk_36429=d::at(this->_n_rivK_36188,_n_k_36385);
double _n_sv_36430=d::at(this->_n_rivS_36186,_n_k_36385);
double _n_heat_36431=_n_clamp_36164((((1.0-((0.75*_n_a_36428)*_n_a_36428))*(1.0-(0.5*_n_kk_36429)))+(0.2*(_n_noise_36162(((_n_sv_36430*0.9)-(_n_t_36342*4.5)),((_n_a_36428*2.0)+(_n_id_36427*9.0)),std::optional<double>{},std::optional<double>{})-0.5))));
double _n_lr_36432=(0.75+(0.3*_n_heat_36431));
double _n_lg_36433=(0.12+((0.75*_n_heat_36431)*_n_heat_36431));
double _n_lb_36434=(0.02+(0.35*std::pow(_n_heat_36431,4.0)));
double _n_pn_36435=([&](){auto _n_left_36614=(_n_noise_36162(((_n_sv_36430*0.32)-(_n_t_36342*0.95)),((_n_a_36428*1.3)+(_n_id_36427*13.0)),std::optional<double>{},std::optional<double>{})*0.7);auto _n_right_36615=(_n_noise_36162(((_n_sv_36430*0.8)-(_n_t_36342*2.4)),((_n_a_36428*2.6)+(_n_id_36427*5.0)),std::optional<double>{},std::optional<double>{})*0.3);return (_n_left_36614+_n_right_36615);})();
double _n_th_36436=((0.6-(0.22*_n_kk_36429))+((0.12*_n_a_36428)*_n_a_36428));
double _n_plate_36437=_n_smooth_36165(_n_th_36436,(_n_th_36436+0.05),_n_pn_36435);
double _n_seam_36438=(_n_smooth_36165((_n_th_36436-0.05),_n_th_36436,_n_pn_36435)*(1.0-_n_plate_36437));
double _n_dark_36439=(0.13+(0.12*_n_noise_36162(((_n_sv_36430*1.5)-((_n_t_36342*0.95)*4.7)),(_n_a_36428*4.0),std::optional<double>{},std::optional<double>{})));
(void)((_n_lr_36432=(_n_mix_36166(_n_lr_36432,_n_dark_36439,_n_plate_36437)+(_n_seam_36438*0.3))));
(void)((_n_lg_36433=(_n_mix_36166(_n_lg_36433,(_n_dark_36439*0.3),_n_plate_36437)+(_n_seam_36438*0.15))));
(void)((_n_lb_36434=_n_mix_36166(_n_lb_36434,(_n_dark_36439*0.2),_n_plate_36437)));
double _n_edge_36440=([&](){auto _n_argument_36616=1.0;auto _n_argument_36617=0.75;auto _n_argument_36618=std::fabs(_n_a_36428);return _n_smooth_36165(_n_argument_36616,_n_argument_36617,_n_argument_36618);})();
(void)((_n_cr_36387=_n_mix_36166(_n_cr_36387,_n_lr_36432,_n_edge_36440)));
(void)((_n_cg_36388=_n_mix_36166(_n_cg_36388,_n_lg_36433,_n_edge_36440)));
(void)((_n_cb_36389=_n_mix_36166(_n_cb_36389,_n_lb_36434,_n_edge_36440)));
}else {d::check_cancel();if(d::truth((d::at(this->_n_crack_36179,_n_k_36385)>0.01))){d::check_cancel();double _n_pulse_36441=(0.55+(0.45*std::sin(((_n_t_36342*0.9)+d::at(this->_n_phase_36180,_n_k_36385)))));
double _n_g_36442=((d::at(this->_n_crack_36179,_n_k_36385)*_n_pulse_36441)*(0.5+_n_rg_36423));
(void)((_n_cr_36387=(_n_cr_36387+(0.75*_n_g_36442))));
(void)((_n_cg_36388=(_n_cg_36388+(0.18*_n_g_36442))));
(void)((_n_cb_36389=(_n_cb_36389+(0.03*_n_g_36442))));
}
}
}else {d::check_cancel();double _n_sh_36443=d::at(this->_n_shoreAt_36181,_n_x_36384);
double _n_depth_36444=(_n_y_36383-_n_sh_36443);
double _n_w_36445=([&](){auto _n_left_36619=(_n_noise_36162(((_n_x_36384*0.05)+(_n_t_36342*0.15)),((_n_y_36383*0.9)-(_n_t_36342*0.9)),std::optional<double>{},std::optional<double>{})*0.6);auto _n_right_36620=(_n_noise_36162(((_n_x_36384*0.15)-(_n_t_36342*0.3)),((_n_y_36383*1.6)-(_n_t_36342*1.6)),std::optional<double>{},std::optional<double>{})*0.4);return (_n_left_36619+_n_right_36620);})();
double _n_sx_36446=([&](){auto _n_argument_36621=1.0;auto _n_argument_36622=([&](){auto _n_argument_36623=(_n_W_36146-2.0);auto _n_argument_36624=d::round((_n_x_36384+((_n_w_36445-0.5)*4.0)));return d::minimum({_n_argument_36623,_n_argument_36624});})();return d::maximum({_n_argument_36621,_n_argument_36622});})();
double _n_sy_36447=([&](){auto _n_argument_36625=0.0;auto _n_argument_36626=([&](){auto _n_argument_36627=(std::floor(d::at(this->_n_shoreAt_36181,_n_sx_36446))-1.0);auto _n_argument_36628=d::round((((_n_sh_36443-(_n_depth_36444*3.0))-1.0)-((_n_w_36445-0.5)*4.0)));return d::minimum({_n_argument_36627,_n_argument_36628});})();return d::maximum({_n_argument_36625,_n_argument_36626});})();
double _n_sk_36448=((_n_sy_36447*_n_W_36146)+_n_sx_36446);
double _n_band_36449=(0.3+(1.1*_n_smooth_36165(0.35,0.7,_n_w_36445)));
double _n_dim_36450=(1.05*(1.0-(_n_depth_36444/45.0)));
double _n_rr_36451=((0.5*d::at(this->_n_R_36200,_n_sk_36448))+(0.25*(d::at(this->_n_R_36200,(_n_sk_36448-1.0))+d::at(this->_n_R_36200,(_n_sk_36448+1.0)))));
double _n_rg_36452=((0.5*d::at(this->_n_Gc_36201,_n_sk_36448))+(0.25*(d::at(this->_n_Gc_36201,(_n_sk_36448-1.0))+d::at(this->_n_Gc_36201,(_n_sk_36448+1.0)))));
double _n_rb_36453=((0.5*d::at(this->_n_B_36202,_n_sk_36448))+(0.25*(d::at(this->_n_B_36202,(_n_sk_36448-1.0))+d::at(this->_n_B_36202,(_n_sk_36448+1.0)))));
(void)((_n_cr_36387=(0.01+((_n_rr_36451*_n_band_36449)*_n_dim_36450))));
(void)((_n_cg_36388=(0.01+(((_n_rg_36452*_n_band_36449)*_n_dim_36450)*0.9))));
(void)((_n_cb_36389=(0.02+(((_n_rb_36453*_n_band_36449)*_n_dim_36450)*0.9))));
double _n_lip_36454=_n_smooth_36165(1.5,0.0,_n_depth_36444);
(void)((((_n_cr_36387=(_n_cr_36387*(1.0-(0.7*_n_lip_36454)))),(_n_cg_36388=(_n_cg_36388*(1.0-(0.7*_n_lip_36454))))),(_n_cb_36389=(_n_cb_36389*(1.0-(0.7*_n_lip_36454))))));
}
}
if(d::truth((_n_m_36386!=_n_LAKE_36160))){d::check_cancel();double _n_vg_36455=([&](){auto _n_left_36629=(std::exp(((-d::number(_n_dc_36392))/1.4))*1.3);auto _n_right_36630=(std::exp(((-d::number(_n_dc_36392))/5.0))*0.2);return (_n_left_36629+_n_right_36630);})();
(void)((_n_cr_36387=(_n_cr_36387+(_n_vg_36455+d::at(this->_n_addR_36205,_n_k_36385)))));
(void)((_n_cg_36388=(_n_cg_36388+((_n_vg_36455*0.55)+d::at(this->_n_addG_36206,_n_k_36385)))));
(void)((_n_cb_36389=(_n_cb_36389+((_n_vg_36455*0.18)+d::at(this->_n_addB_36207,_n_k_36385)))));
}
(void)(((([&](){auto&& _n_array_36631=this->_n_R_36200;auto _n_index_36632=_n_k_36385;auto _n_value_36633=_n_cr_36387;d::put(_n_array_36631,_n_index_36632,_n_value_36633);return _n_value_36633;})(),([&](){auto&& _n_array_36634=this->_n_Gc_36201;auto _n_index_36635=_n_k_36385;auto _n_value_36636=_n_cg_36388;d::put(_n_array_36634,_n_index_36635,_n_value_36636);return _n_value_36636;})()),([&](){auto&& _n_array_36637=this->_n_B_36202;auto _n_index_36638=_n_k_36385;auto _n_value_36639=_n_cb_36389;d::put(_n_array_36637,_n_index_36638,_n_value_36639);return _n_value_36639;})()));
}}
}}
for(auto &&_n_item_36640:_n_boltCells_36369){d::check_cancel();double _n_c_36456=_n_item_36640;
{
if(((d::truth((_n_c_36456<0.0))||d::truth((_n_c_36456>=this->_n_N_36173)))||d::truth((d::at(this->_n_mat_36177,_n_c_36456)!=_n_SKY_36158)))){d::check_cancel();continue;
}
double _n_v_36457=d::minimum({1.0,(_n_bolt_36366*1.4)});
(void)(((([&](){auto&& _n_array_36641=this->_n_R_36200;auto _n_index_36642=_n_c_36456;auto _n_value_36643=_n_mix_36166(d::at(this->_n_R_36200,_n_c_36456),0.92,_n_v_36457);d::put(_n_array_36641,_n_index_36642,_n_value_36643);return _n_value_36643;})(),([&](){auto&& _n_array_36644=this->_n_Gc_36201;auto _n_index_36645=_n_c_36456;auto _n_value_36646=_n_mix_36166(d::at(this->_n_Gc_36201,_n_c_36456),0.9,_n_v_36457);d::put(_n_array_36644,_n_index_36645,_n_value_36646);return _n_value_36646;})()),([&](){auto&& _n_array_36647=this->_n_B_36202;auto _n_index_36648=_n_c_36456;auto _n_value_36649=_n_mix_36166(d::at(this->_n_B_36202,_n_c_36456),1.0,_n_v_36457);d::put(_n_array_36647,_n_index_36648,_n_value_36649);return _n_value_36649;})()));

}
}
{double _n_r_36458=0.0;
for(;d::truth((_n_r_36458<_n_H_36147));(void)((_n_r_36458++))){d::check_cancel();{double _n_x_36459=0.0;
for(;d::truth((_n_x_36459<_n_W_36146));(void)((_n_x_36459++))){d::check_cancel();double _n_k_36460=((_n_r_36458*_n_W_36146)+_n_x_36459);
double _n_cr_36461=d::maximum({0.0,(d::at(this->_n_R_36200,_n_k_36460)-0.025)});
double _n_cg_36462=d::maximum({0.0,(d::at(this->_n_Gc_36201,_n_k_36460)-0.025)});
double _n_cbl_36463=d::maximum({0.0,(d::at(this->_n_B_36202,_n_k_36460)-0.025)});
double _n_floor_36464=d::at(this->_n_floorAt_36203,_n_k_36460);
double _n_peak_36465=d::maximum({_n_cr_36461,_n_cg_36462,_n_cbl_36463,0.0001});
double _n_level_36466=(_n_clamp_36164((_n_floor_36464+(((1.0-_n_floor_36464)*std::pow(_n_peak_36465,0.85))*0.95)))*d::at(this->_n_fadeAt_36204,_n_k_36460));
double _n_step_36467=([&](){auto _n_argument_36650=0.0;auto _n_argument_36651=([&](){auto _n_argument_36652=3.0;auto _n_argument_36653=d::round(((_n_level_36466*3.0)+d::at(_n_BAYER_36157,((double(d::i32(_n_r_36458)&d::i32(3.0))*4.0)+double(d::i32(_n_x_36459)&d::i32(3.0))))));return d::minimum({_n_argument_36652,_n_argument_36653});})();return d::maximum({_n_argument_36650,_n_argument_36651});})();
(void)(([&](){auto&& _n_array_36654=this->_n_out_36174;auto _n_index_36655=_n_k_36460;auto _n_value_36656=d::at(_n_DOTS_36155,_n_step_36467);d::put(_n_array_36654,_n_index_36655,_n_value_36656);return _n_value_36656;})());
if(d::truth(_n_color_36343)){d::check_cancel();double _n_want_36468=(d::truth(_n_step_36467)?d::minimum({1.0,((_n_level_36466+0.06)/d::at(_n_COVER_36156,_n_step_36467))}):0.0);
double _n_s_36469=((0.3+(0.7*_n_want_36468))/_n_peak_36465);
(void)(([&](){auto&& _n_array_36657=d::read(_n_color_36343);auto _n_index_36658=_n_k_36460;auto _n_value_36659=([&](){auto _n_argument_36660=_n_clamp_36164((_n_cr_36461*_n_s_36469));auto _n_argument_36661=_n_clamp_36164((_n_cg_36462*_n_s_36469));auto _n_argument_36662=_n_clamp_36164((_n_cbl_36463*_n_s_36469));return this->_n_nearest_36176(_n_argument_36660,_n_argument_36661,_n_argument_36662);})();d::put(_n_array_36657,_n_index_36658,_n_value_36659);return _n_value_36659;})());
}
}}
}}
d::Array<d::String,false> _n_lines_36470=d::Array<d::String,false>{};
{double _n_r_36471=0.0;
for(;d::truth((_n_r_36471<_n_H_36147));(void)((_n_r_36471++))){d::check_cancel();(void)(_n_lines_36470.push(d::join(this->_n_out_36174.slice((_n_r_36471*_n_W_36146),((_n_r_36471+1.0)*_n_W_36146)),d::String(u""))));
}}
return d::join(_n_lines_36470,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("volcano-night").cols)*ascii::catalog_meta("volcano-night").rows);auto _env=std::make_shared<_n_Record_36472>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &volcano_night_meta(){return catalog_meta("volcano-night");}
std::unique_ptr<Piece> make_volcano_night(const AsciiPieceOptions &o){return std::make_unique<Native_volcano_night>(o);}
}
