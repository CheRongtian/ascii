// Direct, statically typed C++ from src/pieces/volcano-night.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36146;
struct _n_Record_36200;
struct _n_Record_36473;
struct _n_Record_36146{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_36146> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36146>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_36200{
double _p_vx{};
double _p_vy{};
double _p_period{};
double _p_off{};
double _p_x0{};
static std::shared_ptr<_n_Record_36200> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36200>();out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_period=d::decode<double>(j["period"]);out->_p_off=d::decode<double>(j["off"]);out->_p_x0=d::decode<double>(j["x0"]);return out;}
};
struct _n_Record_36473{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36473> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36473>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_36162(double _a0,double _a1);
double _n_noise_36163(double _a0,double _a1,std::optional<double> _a2,std::optional<double> _a3);
double _n_fbm_36164(double _a0,double _a1,double _a2,std::optional<double> _a3);
double _n_clamp_36165(double _a0);
double _n_smooth_36166(double _a0,double _a1,double _a2);
double _n_mix_36167(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_36168(d::String _a0);
double _n_coneY_36169(double _a0);
double _n_reach_36170(double _a0);
double _n_plumeX_36171(double _a0);
double _n_plumeW_36172(double _a0);
std::shared_ptr<_n_Record_36146> _n_meta_36145=[](){return ([&](){auto _n_object_36476=std::make_shared<_n_Record_36146>();_n_object_36476->_p_name=d::String(u"volcano night");_n_object_36476->_p_category=d::String(u"scenes");_n_object_36476->_p_note=d::String(u"a volcano erupting at night, lava rivers, an ash plume full of lightning");_n_object_36476->_p_cols=200.0;_n_object_36476->_p_rows=100.0;_n_object_36476->_p_cell=1.0;_n_object_36476->_p_fps=15.0;_n_object_36476->_p_ground=d::String(u"#070405");_n_object_36476->_p_palette=d::Array<d::String,false>{d::String(u"#5a1a10"),d::String(u"#7a2410"),d::String(u"#982e0e"),d::String(u"#b8380b"),d::String(u"#d4480b"),d::String(u"#ea5e10"),d::String(u"#f77a18"),d::String(u"#ff9628"),d::String(u"#ffb244"),d::String(u"#ffcc63"),d::String(u"#ffe28c"),d::String(u"#fff3c0"),d::String(u"#fffcec"),d::String(u"#4a3a37"),d::String(u"#63504b"),d::String(u"#7d6863"),d::String(u"#98827b"),d::String(u"#b39d94"),d::String(u"#cdb9af"),d::String(u"#8a4a3a"),d::String(u"#a85a40"),d::String(u"#c87048"),d::String(u"#3c4258"),d::String(u"#5d6280"),d::String(u"#8a90b4"),d::String(u"#b4b9dc"),d::String(u"#dfe2f7"),d::String(u"#b9a8ff"),d::String(u"#f4f0ff"),d::String(u"#1a1012"),d::String(u"#2c1a18")};return _n_object_36476;})();}();
const double _n_W_36147=[](){return 200.0;}();
const double _n_H_36148=[](){return 100.0;}();
const double _n_CX_36149=[](){return 100.0;}();
const double _n_RIM_36150=[](){return 40.0;}();
const double _n_BASE_36151=[](){return 86.0;}();
const double _n_HIGH_36152=[](){return (_n_BASE_36151-_n_RIM_36150);}();
const double _n_SPAN_36153=[](){return 32.0;}();
const double _n_PLAIN_36154=[](){return 76.0;}();
const double _n_SHORE_36155=[](){return 81.0;}();
const d::String _n_DOTS_36156=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_36157=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_36158=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_36210=_a0;
return ((_n_v_36210/16.0)-0.47);});}();
const double _n_SKY_36159=[](){return 0.0;}();
const double _n_ROCK_36160=[](){return 1.0;}();
const double _n_LAKE_36161=[](){return 2.0;}();
double _n_hash_36162(double _a0,double _a1){double _n_x_36211=_a0;
double _n_y_36212=_a1;
{
double _n_h_36213=([&](){auto _n_left_36477=d::imul(double(d::i32(_n_x_36211)|d::i32(0.0)),374761393.0);auto _n_right_36478=d::imul(double(d::i32(_n_y_36212)|d::i32(0.0)),668265263.0);return (_n_left_36477+_n_right_36478);})();
(void)((_n_h_36213=d::imul(double(d::i32(_n_h_36213)^d::i32(double(d::u32(_n_h_36213)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_36213)^d::i32(double(d::u32(_n_h_36213)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_36163(double _a0,double _a1,std::optional<double> _a2,std::optional<double> _a3){double _n_x_36214=_a0;
double _n_y_36215=_a1;
double _n_px_36216=(d::present(_a2)?d::read(_a2):0.0);
double _n_py_36217=(d::present(_a3)?d::read(_a3):0.0);
{
double _n_xi_36218=std::floor(_n_x_36214);
double _n_yi_36219=std::floor(_n_y_36215);
double _n_fx_36220=(_n_x_36214-_n_xi_36218);
double _n_fy_36221=(_n_y_36215-_n_yi_36219);
double _n_u_36222=((_n_fx_36220*_n_fx_36220)*(3.0-(2.0*_n_fx_36220)));
double _n_v_36223=((_n_fy_36221*_n_fy_36221)*(3.0-(2.0*_n_fy_36221)));
double _n_x0_36224=_n_xi_36218;
double _n_x1_36225=(_n_xi_36218+1.0);
double _n_y0_36226=_n_yi_36219;
double _n_y1_36227=(_n_yi_36219+1.0);
if(d::truth(_n_px_36216)){d::check_cancel();(void)(((_n_x0_36224=d::mod((d::mod(_n_xi_36218,_n_px_36216)+_n_px_36216),_n_px_36216)),(_n_x1_36225=d::mod((_n_x0_36224+1.0),_n_px_36216))));
}
if(d::truth(_n_py_36217)){d::check_cancel();(void)(((_n_y0_36226=d::mod((d::mod(_n_yi_36219,_n_py_36217)+_n_py_36217),_n_py_36217)),(_n_y1_36227=d::mod((_n_y0_36226+1.0),_n_py_36217))));
}
double _n_a_36228=_n_hash_36162(_n_x0_36224,_n_y0_36226);
double _n_b_36229=_n_hash_36162(_n_x1_36225,_n_y0_36226);
double _n_c_36230=_n_hash_36162(_n_x0_36224,_n_y1_36227);
double _n_d_36231=_n_hash_36162(_n_x1_36225,_n_y1_36227);
return (((_n_a_36228+((_n_b_36229-_n_a_36228)*_n_u_36222))+((_n_c_36230-_n_a_36228)*_n_v_36223))+(((((_n_a_36228-_n_b_36229)-_n_c_36230)+_n_d_36231)*_n_u_36222)*_n_v_36223));

}
}

double _n_fbm_36164(double _a0,double _a1,double _a2,std::optional<double> _a3){double _n_x_36232=_a0;
double _n_y_36233=_a1;
double _n_octaves_36234=_a2;
double _n_py_36235=(d::present(_a3)?d::read(_a3):0.0);
{
double _n_s_36236=0.0;
double _n_n_36237=0.0;
double _n_amp_36238=0.5;
double _n_f_36239=1.0;
{double _n_i_36240=0.0;
for(;d::truth((_n_i_36240<_n_octaves_36234));(void)((_n_i_36240++))){d::check_cancel();(void)((_n_s_36236=(_n_s_36236+(_n_amp_36238*_n_noise_36163((_n_x_36232*_n_f_36239),(_n_y_36233*_n_f_36239),std::optional<double>(0.0),std::optional<double>((_n_py_36235*_n_f_36239)))))));
(void)((_n_n_36237=(_n_n_36237+_n_amp_36238)));
(void)((_n_amp_36238=(_n_amp_36238*0.5)));
(void)((_n_f_36239=(_n_f_36239*2.0)));
}}
return (_n_s_36236/_n_n_36237);

}
}

double _n_clamp_36165(double _a0){double _n_v_36241=_a0;
return (d::truth((_n_v_36241<0.0))?0.0:(d::truth((_n_v_36241>1.0))?1.0:_n_v_36241));}

double _n_smooth_36166(double _a0,double _a1,double _a2){double _n_a_36242=_a0;
double _n_b_36243=_a1;
double _n_v_36244=_a2;
{
double _n_k_36245=_n_clamp_36165(((_n_v_36244-_n_a_36242)/(_n_b_36243-_n_a_36242)));
return ((_n_k_36245*_n_k_36245)*(3.0-(2.0*_n_k_36245)));

}
}

double _n_mix_36167(double _a0,double _a1,double _a2){double _n_a_36246=_a0;
double _n_b_36247=_a1;
double _n_k_36248=_a2;
return (_n_a_36246+((_n_b_36247-_n_a_36246)*_n_k_36248));}

d::Array<double,false> _n_hex_36168(d::String _a0){d::String _n_s_36249=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_36250=_a0;
return (([&](){auto _n_argument_36479=d::slice(_n_s_36249,_n_i_36250,(_n_i_36250+2.0));auto _n_argument_36480=16.0;return d::parseInt(_n_argument_36479,_n_argument_36480);})()/255.0);});}

double _n_coneY_36169(double _a0){double _n_x_36251=_a0;
{
double _n_d_36252=std::fabs((_n_x_36251-_n_CX_36149));
if(d::truth((_n_d_36252<6.0))){d::check_cancel();return ((_n_RIM_36150+(0.9*(1.0-std::pow((_n_d_36252/6.0),2.0))))-0.6);
}
return ((_n_BASE_36151-(_n_HIGH_36152/(1.0+std::pow(((_n_d_36252-6.0)/_n_SPAN_36153),1.6))))+([&](){auto _n_left_36481=(1.4*(_n_fbm_36164((_n_x_36251*0.13),1.3,3.0,std::optional<double>{})-0.5));auto _n_right_36482=_n_smooth_36166(6.0,20.0,_n_d_36252);return (_n_left_36481*_n_right_36482);})());

}
}

double _n_reach_36170(double _a0){double _n_y_36253=_a0;
{
double _n_f_36254=((_n_BASE_36151-_n_y_36253)/_n_HIGH_36152);
if(d::truth((_n_f_36254>=1.0))){d::check_cancel();return 6.0;
}
if(d::truth((_n_f_36254<=0.05))){d::check_cancel();return 95.0;
}
return ([&](){auto _n_argument_36483=95.0;auto _n_argument_36484=(6.0+(_n_SPAN_36153*std::pow(((1.0/_n_f_36254)-1.0),(1.0/1.6))));return d::minimum({_n_argument_36483,_n_argument_36484});})();

}
}

double _n_plumeX_36171(double _a0){double _n_y_36255=_a0;
return (_n_CX_36149+(0.01*std::pow((_n_RIM_36150-_n_y_36255),2.0)));}

double _n_plumeW_36172(double _a0){double _n_y_36256=_a0;
return ([&](){auto _n_left_36485=(8.0+(27.0*([&](){auto _n_argument_36487=(d::maximum({0.0,(_n_RIM_36150-_n_y_36256)})/_n_RIM_36150);auto _n_argument_36488=0.55;return std::pow(_n_argument_36487,_n_argument_36488);})()));auto _n_right_36486=(16.0*_n_smooth_36166(14.0,(-d::number(3.0)),_n_y_36256));return (_n_left_36485+_n_right_36486);})();}

struct Native_volcano_night final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_36173{};
double _n_N_36174{};
d::Array<d::String,false> _n_out_36175{};
d::Array<uint8_t,true> _n_lut_36176{};
d::Array<uint8_t,true> _n_mat_36178{};
d::Array<float,true> _n_rock_36179{};
d::Array<float,true> _n_crack_36180{};
d::Array<float,true> _n_phase_36181{};
d::Array<float,true> _n_shoreAt_36182{};
d::Array<float,true> _n_topAt_36183{};
d::Array<d::Array<double,false>,false> _n_RIVERS_36185{};
d::Array<uint8_t,true> _n_rivId_36186{};
d::Array<float,true> _n_rivS_36187{};
d::Array<float,true> _n_rivA_36188{};
d::Array<float,true> _n_rivK_36189{};
d::Array<float,true> _n_rivGlow_36190{};
double _n_PH_36191{};
d::Array<float,true> _n_texA_36192{};
d::Array<float,true> _n_texB_36193{};
d::Array<float,true> _n_haze_36195{};
double _n_ARCS_36196{};
double _n_SPARKS_36197{};
double _n_G_36198{};
d::Array<std::shared_ptr<_n_Record_36200>,false> _n_sp_36199{};
d::Array<float,true> _n_R_36201{};
d::Array<float,true> _n_Gc_36202{};
d::Array<float,true> _n_B_36203{};
d::Array<float,true> _n_floorAt_36204{};
d::Array<float,true> _n_fadeAt_36205{};
d::Array<float,true> _n_addR_36206{};
d::Array<float,true> _n_addG_36207{};
d::Array<float,true> _n_addB_36208{};
std::function<d::String(double,std::shared_ptr<_n_Record_36473>)> _render;
double _n_nearest_36177(double _a0,double _a1,double _a2){double _n_r_36257=_a0;
double _n_g_36258=_a1;
double _n_b_36259=_a2;
{
double _n_k_36260=([&](){auto _n_left_36664=([&](){auto _n_left_36666=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_36257*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_36667=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_36258*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_36666)|d::i32(_n_right_36667));})();auto _n_right_36665=d::minimum({31.0,double(d::i32((_n_b_36259*31.99))|d::i32(0.0))});return double(d::i32(_n_left_36664)|d::i32(_n_right_36665));})();
if(d::truth((d::at(this->_n_lut_36176,_n_k_36260)!=255.0))){d::check_cancel();return d::at(this->_n_lut_36176,_n_k_36260);
}
double _n_best_36261=0.0;
double _n_bd_36262=1000000000.0;
{double _n_i_36263=0.0;
for(;d::truth((_n_i_36263<double(this->_n_P_36173.size())));(void)((_n_i_36263++))){d::check_cancel();double _n_dr_36264=(d::at(d::at(this->_n_P_36173,_n_i_36263),0.0)-_n_r_36257);
double _n_dg_36265=(d::at(d::at(this->_n_P_36173,_n_i_36263),1.0)-_n_g_36258);
double _n_db_36266=(d::at(d::at(this->_n_P_36173,_n_i_36263),2.0)-_n_b_36259);
double _n_d_36267=((((0.3*_n_dr_36264)*_n_dr_36264)+((0.5*_n_dg_36265)*_n_dg_36265))+((0.2*_n_db_36266)*_n_db_36266));
if(d::truth((_n_d_36267<_n_bd_36262))){d::check_cancel();(void)(((_n_bd_36262=_n_d_36267),(_n_best_36261=_n_i_36263)));
}
}}
return ([&](){auto&& _n_array_36668=this->_n_lut_36176;auto _n_index_36669=_n_k_36260;auto _n_value_36670=_n_best_36261;d::put(_n_array_36668,_n_index_36669,_n_value_36670);return _n_value_36670;})();

}
}

std::array<double,2> _n_cellPt_36184(double _a0,double _a1){double _n_i_36269=_a0;
double _n_j_36270=_a1;
return std::array<double,2>{(_n_i_36269+_n_hash_36162(_n_i_36269,((_n_j_36270*7.0)+1.0))),(_n_j_36270+_n_hash_36162(((_n_i_36269*3.0)+5.0),_n_j_36270))};}

double _n_sample_36194(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_tex_36321=_a0;
double _n_x_36322=_a1;
double _n_y_36323=_a2;
{
double _n_yi_36324=std::floor(_n_y_36323);
double _n_fy_36325=(_n_y_36323-_n_yi_36324);
double _n_r0_36326=d::mod((d::mod(_n_yi_36324,this->_n_PH_36191)+this->_n_PH_36191),this->_n_PH_36191);
double _n_r1_36327=d::mod((_n_r0_36326+1.0),this->_n_PH_36191);
double _n_xi_36328=([&](){auto _n_argument_36671=0.0;auto _n_argument_36672=d::minimum({(_n_W_36147-1.0),double(d::i32(_n_x_36322)|d::i32(0.0))});return d::maximum({_n_argument_36671,_n_argument_36672});})();
return (d::at(_n_tex_36321,((_n_r0_36326*_n_W_36147)+_n_xi_36328))+((d::at(_n_tex_36321,((_n_r1_36327*_n_W_36147)+_n_xi_36328))-d::at(_n_tex_36321,((_n_r0_36326*_n_W_36147)+_n_xi_36328)))*_n_fy_36325));

}
}

void _n_splat_36209(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_36334=_a0;
double _n_y_36335=_a1;
double _n_a_36336=_a2;
double _n_cr_36337=_a3;
double _n_cg_36338=_a4;
double _n_cb_36339=_a5;
{
double _n_xi_36340=d::round(_n_x_36334);
double _n_yi_36341=d::round(_n_y_36335);
if((((d::truth((_n_xi_36340<0.0))||d::truth((_n_xi_36340>=_n_W_36147)))||d::truth((_n_yi_36341<0.0)))||d::truth((_n_yi_36341>=_n_H_36148)))){d::check_cancel();return;
}
double _n_k_36342=((_n_yi_36341*_n_W_36147)+_n_xi_36340);
if(d::truth((d::at(this->_n_mat_36178,_n_k_36342)==_n_LAKE_36161))){d::check_cancel();return;
}
if(d::truth(((_n_cr_36337*_n_a_36336)>d::at(this->_n_addR_36206,_n_k_36342)))){d::check_cancel();(void)(((([&](){auto&& _n_array_36673=this->_n_addR_36206;auto _n_index_36674=_n_k_36342;auto _n_value_36675=(_n_cr_36337*_n_a_36336);d::put(_n_array_36673,_n_index_36674,_n_value_36675);return _n_value_36675;})(),([&](){auto&& _n_array_36676=this->_n_addG_36207;auto _n_index_36677=_n_k_36342;auto _n_value_36678=(_n_cg_36338*_n_a_36336);d::put(_n_array_36676,_n_index_36677,_n_value_36678);return _n_value_36678;})()),([&](){auto&& _n_array_36679=this->_n_addB_36208;auto _n_index_36680=_n_k_36342;auto _n_value_36681=(_n_cb_36339*_n_a_36336);d::put(_n_array_36679,_n_index_36680,_n_value_36681);return _n_value_36681;})()));
}

}
}

explicit Native_volcano_night(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_36173=d::map(_n_meta_36145->_p_palette,_n_hex_36168);
this->_n_N_36174=(_n_W_36147*_n_H_36148);
this->_n_out_36175=d::Array<d::String,false>(size_t(this->_n_N_36174));
this->_n_lut_36176=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_36178=d::Array<uint8_t,true>(size_t(this->_n_N_36174));
this->_n_rock_36179=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_crack_36180=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_phase_36181=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_shoreAt_36182=d::Array<float,true>(size_t(_n_W_36147));
this->_n_topAt_36183=d::Array<float,true>(size_t(_n_W_36147));
{double _n_x_36268=0.0;
for(;d::truth((_n_x_36268<_n_W_36147));(void)((_n_x_36268++))){d::check_cancel();(void)(([&](){auto&& _n_array_36489=this->_n_shoreAt_36182;auto _n_index_36490=_n_x_36268;auto _n_value_36491=([&](){auto _n_left_36492=(_n_SHORE_36155+((2.0*(_n_fbm_36164((_n_x_36268*0.045),9.0,3.0,std::optional<double>{})-0.5))*2.0));auto _n_right_36493=(0.7*_n_noise_36163((_n_x_36268*0.3),2.0,std::optional<double>{},std::optional<double>{}));return (_n_left_36492+_n_right_36493);})();d::put(_n_array_36489,_n_index_36490,_n_value_36491);return _n_value_36491;})());
(void)(([&](){auto&& _n_array_36494=this->_n_topAt_36183;auto _n_index_36495=_n_x_36268;auto _n_value_36496=([&](){auto _n_argument_36497=_n_coneY_36169((_n_x_36268+0.5));auto _n_argument_36498=(_n_PLAIN_36154+(1.6*(_n_fbm_36164((_n_x_36268*0.06),5.0,3.0,std::optional<double>{})-0.5)));return d::minimum({_n_argument_36497,_n_argument_36498});})();d::put(_n_array_36494,_n_index_36495,_n_value_36496);return _n_value_36496;})());
}}
{double _n_r_36271=0.0;
for(;d::truth((_n_r_36271<_n_H_36148));(void)((_n_r_36271++))){d::check_cancel();{double _n_x_36272=0.0;
for(;d::truth((_n_x_36272<_n_W_36147));(void)((_n_x_36272++))){d::check_cancel();double _n_k_36273=((_n_r_36271*_n_W_36147)+_n_x_36272);
double _n_y_36274=(_n_r_36271+0.5);
if(d::truth((_n_y_36274>=d::at(this->_n_shoreAt_36182,_n_x_36272)))){d::check_cancel();(void)(([&](){auto&& _n_array_36499=this->_n_mat_36178;auto _n_index_36500=_n_k_36273;auto _n_value_36501=_n_LAKE_36161;d::put(_n_array_36499,_n_index_36500,_n_value_36501);return _n_value_36501;})());
}else {d::check_cancel();if(d::truth((_n_y_36274>=d::at(this->_n_topAt_36183,_n_x_36272)))){d::check_cancel();(void)(([&](){auto&& _n_array_36502=this->_n_mat_36178;auto _n_index_36503=_n_k_36273;auto _n_value_36504=_n_ROCK_36160;d::put(_n_array_36502,_n_index_36503,_n_value_36504);return _n_value_36504;})());
(void)(([&](){auto&& _n_array_36505=this->_n_rock_36179;auto _n_index_36506=_n_k_36273;auto _n_value_36507=([&](){auto _n_left_36508=(0.55*_n_fbm_36164(((_n_x_36272*0.3)+(((_n_y_36274*0.04)*(d::truth((_n_x_36272<_n_CX_36149))?(-d::number(1.0)):1.0))*3.0)),(_n_y_36274*0.07),3.0,std::optional<double>{}));auto _n_right_36509=(0.45*_n_fbm_36164((_n_x_36272*0.5),(_n_y_36274*0.5),2.0,std::optional<double>{}));return (_n_left_36508+_n_right_36509);})();d::put(_n_array_36505,_n_index_36506,_n_value_36507);return _n_value_36507;})());
if(d::truth((_n_y_36274>(_n_PLAIN_36154-3.0)))){d::check_cancel();double _n_sx_36275=(_n_x_36272/7.0);
double _n_sy_36276=(((_n_y_36274-_n_PLAIN_36154)/2.6)+40.0);
double _n_ix_36277=std::floor(_n_sx_36275);
double _n_iy_36278=std::floor(_n_sy_36276);
double _n_f1_36279=9.0;
double _n_f2_36280=9.0;
{double _n_j_36281=(_n_iy_36278-1.0);
for(;d::truth((_n_j_36281<=(_n_iy_36278+1.0)));(void)((_n_j_36281++))){d::check_cancel();{double _n_i_36282=(_n_ix_36277-1.0);
for(;d::truth((_n_i_36282<=(_n_ix_36277+1.0)));(void)((_n_i_36282++))){d::check_cancel();auto _n_binding_36510=this->_n_cellPt_36184(_n_i_36282,_n_j_36281);
double _n_px_36283=d::at(_n_binding_36510,0.0);
double _n_py_36284=d::at(_n_binding_36510,1.0);
double _n_d_36285=d::hypot(std::initializer_list<double>{(_n_px_36283-_n_sx_36275),(_n_py_36284-_n_sy_36276)});
if(d::truth((_n_d_36285<_n_f1_36279))){d::check_cancel();(void)(((_n_f2_36280=_n_f1_36279),(_n_f1_36279=_n_d_36285)));
}else {d::check_cancel();if(d::truth((_n_d_36285<_n_f2_36280))){d::check_cancel();(void)((_n_f2_36280=_n_d_36285));
}
}
}}
}}
double _n_near_36286=_n_smooth_36166((_n_PLAIN_36154-3.0),(_n_PLAIN_36154+3.0),_n_y_36274);
(void)(([&](){auto&& _n_array_36511=this->_n_crack_36180;auto _n_index_36512=_n_k_36273;auto _n_value_36513=([&](){auto _n_left_36514=(_n_smooth_36166(0.16,0.02,(_n_f2_36280-_n_f1_36279))*_n_near_36286);auto _n_right_36515=(0.4+(0.6*_n_fbm_36164((_n_x_36272*0.08),(_n_y_36274*0.2),2.0,std::optional<double>{})));return (_n_left_36514*_n_right_36515);})();d::put(_n_array_36511,_n_index_36512,_n_value_36513);return _n_value_36513;})());
(void)(([&](){auto&& _n_array_36516=this->_n_phase_36181;auto _n_index_36517=_n_k_36273;auto _n_value_36518=(_n_fbm_36164((_n_x_36272*0.05),(_n_y_36274*0.1),2.0,std::optional<double>{})*12.0);d::put(_n_array_36516,_n_index_36517,_n_value_36518);return _n_value_36518;})());
}
}
}
}}
}}
this->_n_RIVERS_36185=d::Array<d::Array<double,false>,false>{d::Array<double,false>{41.5,75.0,(-d::number(0.55)),(-d::number(0.5)),1.0,0.09,0.3},d::Array<double,false>{41.5,77.0,0.45,0.32,1.0,0.08,2.1},d::Array<double,false>{42.0,80.0,(-d::number(0.08)),(-d::number(0.22)),1.3,0.06,4.0},d::Array<double,false>{43.0,70.0,0.15,0.7,0.8,0.07,5.2},d::Array<double,false>{45.0,73.0,(-d::number(0.3)),(-d::number(0.85)),0.75,0.05,1.4}};
this->_n_rivId_36186=d::Array<uint8_t,true>(size_t(this->_n_N_36174)).fill(255.0);
this->_n_rivS_36187=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_rivA_36188=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_rivK_36189=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_rivGlow_36190=d::Array<float,true>(size_t(this->_n_N_36174));
(void)(d::forEach(this->_n_RIVERS_36185,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_36519=_a0;
double _n_y0_36287=d::at(_n_binding_36519,0.0);
double _n_y1_36288=d::at(_n_binding_36519,1.0);
double _n_f0_36289=d::at(_n_binding_36519,2.0);
double _n_f1_36290=d::at(_n_binding_36519,3.0);
double _n_wm_36291=d::at(_n_binding_36519,4.0);
double _n_amp_36292=d::at(_n_binding_36519,5.0);
double _n_ph_36293=d::at(_n_binding_36519,6.0);
double _n_id_36294=_a1;
{
d::Array<d::Array<double,false>,false> _n_pts_36295=d::Array<d::Array<double,false>,false>{};
double _n_s_36296=0.0;
double _n_lx_36297=0.0;
double _n_ly_36298=0.0;
{double _n_y_36299=_n_y0_36287;
for(;d::truth((_n_y_36299<=_n_y1_36288));(void)((_n_y_36299=(_n_y_36299+0.25)))){d::check_cancel();double _n_k_36300=((_n_y_36299-_n_y0_36287)/(_n_y1_36288-_n_y0_36287));
double _n_f_36301=([&](){auto _n_left_36520=([&](){auto _n_left_36522=(_n_f0_36289+((_n_f1_36290-_n_f0_36289)*_n_smooth_36166(0.0,1.0,_n_k_36300)));auto _n_right_36523=(_n_amp_36292*std::sin((((_n_k_36300*ascii::PI)*4.0)+_n_ph_36293)));return (_n_left_36522+_n_right_36523);})();auto _n_right_36521=(0.05*(_n_noise_36163((_n_k_36300*7.0),(_n_id_36294*7.0),std::optional<double>{},std::optional<double>{})-0.5));return (_n_left_36520+_n_right_36521);})();
double _n_x_36302=(_n_CX_36149+(_n_f_36301*_n_reach_36170(_n_y_36299)));
if(d::truth(double(_n_pts_36295.size()))){d::check_cancel();(void)((_n_s_36296=(_n_s_36296+d::hypot(std::initializer_list<double>{(_n_x_36302-_n_lx_36297),(_n_y_36299-_n_ly_36298)}))));
}
(void)(_n_pts_36295.push(d::Array<double,false>{_n_x_36302,_n_y_36299,_n_s_36296,_n_k_36300}));
(void)(((_n_lx_36297=_n_x_36302),(_n_ly_36298=_n_y_36299)));
}}
{double _n_r_36303=(std::floor(_n_y0_36287)-3.0);
for(;d::truth((_n_r_36303<d::minimum({_n_H_36148,(_n_y1_36288+5.0)})));(void)((_n_r_36303++))){d::check_cancel();{double _n_x_36304=0.0;
for(;d::truth((_n_x_36304<_n_W_36147));(void)((_n_x_36304++))){d::check_cancel();double _n_k_36305=((_n_r_36303*_n_W_36147)+_n_x_36304);
if(d::truth((d::at(this->_n_mat_36178,_n_k_36305)!=_n_ROCK_36160))){d::check_cancel();continue;
}
double _n_y_36306=(_n_r_36303+0.5);
double _n_bd_36307=1000000000.0;
double _n_bi_36308=0.0;
{double _n_i_36309=0.0;
for(;d::truth((_n_i_36309<double(_n_pts_36295.size())));(void)((_n_i_36309++))){d::check_cancel();d::Array<double,false> _n_p_36310=d::at(_n_pts_36295,_n_i_36309);
if(d::truth((std::fabs((d::at(_n_p_36310,1.0)-_n_y_36306))>7.0))){d::check_cancel();continue;
}
double _n_d_36311=(std::pow(((d::at(_n_p_36310,0.0)-_n_x_36304)-0.5),2.0)+std::pow((d::at(_n_p_36310,1.0)-_n_y_36306),2.0));
if(d::truth((_n_d_36311<_n_bd_36307))){d::check_cancel();(void)(((_n_bd_36307=_n_d_36311),(_n_bi_36308=_n_i_36309)));
}
}}
if(d::truth((_n_bd_36307>100000000.0))){d::check_cancel();continue;
}
auto _n_binding_36524=d::at(_n_pts_36295,_n_bi_36308);
double _n_px_36312=d::at(_n_binding_36524,0.0);
double _n_ps_36313=d::at(_n_binding_36524,2.0);
double _n_pk_36314=d::at(_n_binding_36524,3.0);
double _n_d_36315=std::sqrt(_n_bd_36307);
double _n_hw_36316=(((0.55+(1.3*_n_pk_36314))+(1.4*_n_smooth_36166(0.85,1.0,_n_pk_36314)))*_n_wm_36291);
double _n_heat_36317=(1.0-(0.55*_n_pk_36314));
(void)(([&](){auto&& _n_array_36525=this->_n_rivGlow_36190;auto _n_index_36526=_n_k_36305;auto _n_value_36527=([&](){auto _n_argument_36528=d::at(this->_n_rivGlow_36190,_n_k_36305);auto _n_argument_36529=(std::exp(((-d::number(d::maximum({0.0,(_n_d_36315-_n_hw_36316)})))/2.2))*_n_heat_36317);return d::maximum({_n_argument_36528,_n_argument_36529});})();d::put(_n_array_36525,_n_index_36526,_n_value_36527);return _n_value_36527;})());
if((d::truth((_n_d_36315<_n_hw_36316))&&d::truth(([&]()->bool{auto _n_logical_36530=(d::at(this->_n_rivId_36186,_n_k_36305)==255.0);return d::truth(_n_logical_36530)?_n_logical_36530:((_n_d_36315/_n_hw_36316)<std::fabs(d::at(this->_n_rivA_36188,_n_k_36305)));})()))){d::check_cancel();(void)(([&](){auto&& _n_array_36531=this->_n_rivId_36186;auto _n_index_36532=_n_k_36305;auto _n_value_36533=_n_id_36294;d::put(_n_array_36531,_n_index_36532,_n_value_36533);return _n_value_36533;})());
(void)(([&](){auto&& _n_array_36534=this->_n_rivS_36187;auto _n_index_36535=_n_k_36305;auto _n_value_36536=_n_ps_36313;d::put(_n_array_36534,_n_index_36535,_n_value_36536);return _n_value_36536;})());
(void)(([&](){auto&& _n_array_36537=this->_n_rivA_36188;auto _n_index_36538=_n_k_36305;auto _n_value_36539=((d::truth(((_n_x_36304+0.5)<_n_px_36312))?(-d::number(1.0)):1.0)*(_n_d_36315/_n_hw_36316));d::put(_n_array_36537,_n_index_36538,_n_value_36539);return _n_value_36539;})());
(void)(([&](){auto&& _n_array_36540=this->_n_rivK_36189;auto _n_index_36541=_n_k_36305;auto _n_value_36542=_n_pk_36314;d::put(_n_array_36540,_n_index_36541,_n_value_36542);return _n_value_36542;})());
}
}}
}}

}
}));
this->_n_PH_36191=160.0;
this->_n_texA_36192=d::Array<float,true>(size_t((_n_W_36147*this->_n_PH_36191)));
this->_n_texB_36193=d::Array<float,true>(size_t((_n_W_36147*this->_n_PH_36191)));
{double _n_r_36318=0.0;
for(;d::truth((_n_r_36318<this->_n_PH_36191));(void)((_n_r_36318++))){d::check_cancel();{double _n_x_36319=0.0;
for(;d::truth((_n_x_36319<_n_W_36147));(void)((_n_x_36319++))){d::check_cancel();double _n_q_36320=_n_fbm_36164((_n_x_36319*0.03),(_n_r_36318*0.03),3.0,std::optional<double>((this->_n_PH_36191*0.03)));
(void)(([&](){auto&& _n_array_36543=this->_n_texA_36192;auto _n_index_36544=((_n_r_36318*_n_W_36147)+_n_x_36319);auto _n_value_36545=_n_fbm_36164(((_n_x_36319*0.07)+(_n_q_36320*1.5)),(_n_r_36318*0.07),4.0,std::optional<double>((this->_n_PH_36191*0.07)));d::put(_n_array_36543,_n_index_36544,_n_value_36545);return _n_value_36545;})());
(void)(([&](){auto&& _n_array_36546=this->_n_texB_36193;auto _n_index_36547=((_n_r_36318*_n_W_36147)+_n_x_36319);auto _n_value_36548=_n_fbm_36164(((_n_x_36319*0.12)+40.0),(_n_r_36318*0.12),3.0,std::optional<double>((this->_n_PH_36191*0.12)));d::put(_n_array_36546,_n_index_36547,_n_value_36548);return _n_value_36548;})());
}}
}}
this->_n_haze_36195=d::Array<float,true>(size_t(this->_n_N_36174));
{double _n_k_36329=0.0;
for(;d::truth((_n_k_36329<this->_n_N_36174));(void)((_n_k_36329++))){d::check_cancel();(void)(([&](){auto&& _n_array_36549=this->_n_haze_36195;auto _n_index_36550=_n_k_36329;auto _n_value_36551=([&](){auto _n_argument_36552=(d::mod(_n_k_36329,_n_W_36147)*0.04);auto _n_argument_36553=(std::floor((_n_k_36329/_n_W_36147))*0.07);auto _n_argument_36554=3.0;return _n_fbm_36164(_n_argument_36552,_n_argument_36553,_n_argument_36554,std::optional<double>{});})();d::put(_n_array_36549,_n_index_36550,_n_value_36551);return _n_value_36551;})());
}}
this->_n_ARCS_36196=34.0;
this->_n_SPARKS_36197=110.0;
this->_n_G_36198=50.0;
this->_n_sp_36199=d::Array<std::shared_ptr<_n_Record_36200>,false>(d::from((this->_n_ARCS_36196+this->_n_SPARKS_36197),[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_36200>{double _n_i_36331=_a1;
return ([&](){auto _n_object_36557=std::make_shared<_n_Record_36200>();_n_object_36557->_p_vx=((_n_hash_36162(_n_i_36331,1.0)-0.5)*2.0);_n_object_36557->_p_vy=_n_hash_36162(_n_i_36331,2.0);_n_object_36557->_p_period=(2.6+(1.4*_n_hash_36162(_n_i_36331,3.0)));_n_object_36557->_p_off=(_n_hash_36162(_n_i_36331,4.0)*10.0);_n_object_36557->_p_x0=((_n_hash_36162(_n_i_36331,5.0)-0.5)*4.0);return _n_object_36557;})();}));
this->_n_R_36201=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_Gc_36202=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_B_36203=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_floorAt_36204=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_fadeAt_36205=d::Array<float,true>(size_t(this->_n_N_36174)).fill(1.0);
{double _n_k_36332=0.0;
for(;d::truth((_n_k_36332<this->_n_N_36174));(void)((_n_k_36332++))){d::check_cancel();double _n_r_36333=std::floor((_n_k_36332/_n_W_36147));
(void)(([&](){auto&& _n_array_36558=this->_n_floorAt_36204;auto _n_index_36559=_n_k_36332;auto _n_value_36560=0.0;d::put(_n_array_36558,_n_index_36559,_n_value_36560);return _n_value_36560;})());
if(d::truth((d::at(this->_n_mat_36178,_n_k_36332)==_n_LAKE_36161))){d::check_cancel();(void)(([&](){auto&& _n_array_36561=this->_n_fadeAt_36205;auto _n_index_36562=_n_k_36332;auto _n_value_36563=_n_smooth_36166((_n_H_36148+6.0),(_n_H_36148-6.0),(_n_r_36333+0.5));d::put(_n_array_36561,_n_index_36562,_n_value_36563);return _n_value_36563;})());
}
}}
this->_n_addR_36206=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_addG_36207=d::Array<float,true>(size_t(this->_n_N_36174));
this->_n_addB_36208=d::Array<float,true>(size_t(this->_n_N_36174));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36473> _a1) mutable ->d::String{double _n_t_36343=_a0;
auto _n_binding_36566=(d::present(_a1)?_a1:([&](){auto _n_object_36565=std::make_shared<_n_Record_36473>();return _n_object_36565;})());
std::optional<d::Array<uint8_t,true>> _n_color_36344=_n_binding_36566->_p_color;
{
(void)(((this->_n_addR_36206.fill(0.0),this->_n_addG_36207.fill(0.0)),this->_n_addB_36208.fill(0.0)));
double _n_surge_36345=(0.65+([&](){auto _n_left_36567=(0.35*std::sin((_n_t_36343*1.3)));auto _n_right_36568=std::sin(((_n_t_36343*0.47)+1.0));return (_n_left_36567*_n_right_36568);})());
{double _n_i_36346=0.0;
for(;d::truth((_n_i_36346<(this->_n_ARCS_36196+this->_n_SPARKS_36197)));(void)((_n_i_36346++))){d::check_cancel();std::shared_ptr<_n_Record_36200> _n_s_36347=d::at(this->_n_sp_36199,_n_i_36346);
double _n_tt_36348=(_n_t_36343+_n_s_36347->_p_off);
double _n_n_36349=std::floor((_n_tt_36348/_n_s_36347->_p_period));
double _n_tau_36350=(_n_tt_36348-(_n_n_36349*_n_s_36347->_p_period));
bool _n_arc_36351=(_n_i_36346<this->_n_ARCS_36196);
double _n_kick_36352=((0.82+(0.3*_n_hash_36162(_n_i_36346,(_n_n_36349+99.0))))*(0.8+(0.25*_n_surge_36345)));
double _n_vy_36353=((d::truth(_n_arc_36351)?(30.0+(18.0*_n_s_36347->_p_vy)):(18.0+(24.0*_n_s_36347->_p_vy)))*_n_kick_36352);
double _n_vx_36354=(((d::truth(_n_arc_36351)?(([&](){auto _n_left_36569=(0.35+(0.65*std::fabs(_n_s_36347->_p_vx)));auto _n_right_36570=d::sign(_n_s_36347->_p_vx);return (_n_left_36569*_n_right_36570);})()*20.0):(_n_s_36347->_p_vx*11.0))*_n_kick_36352)+1.0);
double _n_life_36355=(((2.0*_n_vy_36353)/this->_n_G_36198)+0.7);
if(d::truth((_n_tau_36350>_n_life_36355))){d::check_cancel();continue;
}
double _n_tail_36356=(d::truth(_n_arc_36351)?0.34:0.04);
double _n_steps_36357=(d::truth(_n_arc_36351)?26.0:2.0);
{double _n_j_36358=0.0;
for(;d::truth((_n_j_36358<=_n_steps_36357));(void)((_n_j_36358++))){d::check_cancel();double _n_u_36359=(_n_tau_36350-((_n_j_36358/_n_steps_36357)*_n_tail_36356));
if(d::truth((_n_u_36359<0.0))){d::check_cancel();break;
}
double _n_x_36360=((_n_CX_36149+_n_s_36347->_p_x0)+(_n_vx_36354*_n_u_36359));
double _n_y_36361=(((_n_RIM_36150-0.8)-(_n_vy_36353*_n_u_36359))+(((0.5*this->_n_G_36198)*_n_u_36359)*_n_u_36359));
if(d::truth((_n_y_36361>(_n_coneY_36169(_n_x_36360)+1.5)))){d::check_cancel();continue;
}
double _n_age_36362=(_n_u_36359/_n_life_36355);
double _n_f_36363=(_n_j_36358/_n_steps_36357);
double _n_a_36364=(((1.0-(0.75*_n_f_36363))*(1.0-(0.5*_n_age_36362)))*(d::truth(_n_arc_36351)?1.1:0.75));
(void)(([&](){auto _n_argument_36571=_n_x_36360;auto _n_argument_36572=_n_y_36361;auto _n_argument_36573=_n_a_36364;auto _n_argument_36574=1.0;auto _n_argument_36575=([&](){auto _n_argument_36576=0.95;auto _n_argument_36577=0.35;auto _n_argument_36578=d::minimum({1.0,(_n_age_36362+(_n_f_36363*0.6))});return _n_mix_36167(_n_argument_36576,_n_argument_36577,_n_argument_36578);})();auto _n_argument_36579=([&](){auto _n_argument_36580=0.65;auto _n_argument_36581=0.04;auto _n_argument_36582=d::minimum({1.0,((_n_age_36362*1.4)+_n_f_36363)});return _n_mix_36167(_n_argument_36580,_n_argument_36581,_n_argument_36582);})();return this->_n_splat_36209(_n_argument_36571,_n_argument_36572,_n_argument_36573,_n_argument_36574,_n_argument_36575,_n_argument_36579);})());
}}
}}
double _n_slot_36365=std::floor((_n_t_36343/0.3));
double _n_sf_36366=((_n_t_36343/0.3)-_n_slot_36365);
double _n_bolt_36367=0.0;
double _n_bx_36368=0.0;
double _n_by_36369=0.0;
d::Array<double,false> _n_boltCells_36370=d::Array<double,false>{};
if(d::truth((_n_hash_36162(_n_slot_36365,77.0)>0.8))){d::check_cancel();(void)((_n_bolt_36367=(d::truth((_n_sf_36366<0.15))?1.0:(d::truth((_n_sf_36366<0.3))?0.25:(d::truth((_n_sf_36366<0.5))?0.85:d::maximum({0.0,(0.85-((_n_sf_36366-0.5)*2.0))}))))));
double _n_y_36371=(4.0+(_n_hash_36162(_n_slot_36365,3.0)*8.0));
double _n_x_36372=([&](){auto _n_left_36583=_n_plumeX_36171(_n_y_36371);auto _n_right_36584=(([&](){auto _n_left_36585=(_n_hash_36162(_n_slot_36365,4.0)-0.5);auto _n_right_36586=_n_plumeW_36172(_n_y_36371);return (_n_left_36585*_n_right_36586);})()*1.1);return (_n_left_36583+_n_right_36584);})();
double _n_len_36373=(10.0+(_n_hash_36162(_n_slot_36365,5.0)*12.0));
(void)(((_n_bx_36368=_n_x_36372),(_n_by_36369=(_n_y_36371+(_n_len_36373/2.0)))));
double _n_branchAt_36374=(3.0+std::floor((_n_hash_36162(_n_slot_36365,6.0)*5.0)));
double _n_brx_36375=0.0;
double _n_bry_36376=0.0;
{double _n_i_36377=0.0;
for(;d::truth((_n_i_36377<_n_len_36373));(void)((_n_i_36377++))){d::check_cancel();double _n_nx_36378=(_n_x_36372+((_n_hash_36162(((_n_slot_36365*31.0)+_n_i_36377),8.0)-0.5)*3.2));
double _n_ny_36379=(_n_y_36371+1.0);
{double _n_q_36380=0.0;
for(;d::truth((_n_q_36380<=2.0));(void)((_n_q_36380++))){d::check_cancel();(void)(_n_boltCells_36370.push(([&](){auto _n_left_36587=d::round(_n_mix_36167(_n_x_36372,_n_nx_36378,(_n_q_36380/2.0)));auto _n_right_36588=(d::round(_n_mix_36167(_n_y_36371,_n_ny_36379,(_n_q_36380/2.0)))*_n_W_36147);return (_n_left_36587+_n_right_36588);})()));
}}
(void)(((_n_x_36372=_n_nx_36378),(_n_y_36371=_n_ny_36379)));
if(d::truth((_n_i_36377==_n_branchAt_36374))){d::check_cancel();(void)(((_n_brx_36375=_n_x_36372),(_n_bry_36376=_n_y_36371)));
}
}}
{double _n_i_36381=0.0;
for(;(d::truth((_n_i_36381<6.0))&&d::truth(_n_brx_36375));(void)((_n_i_36381++))){d::check_cancel();(void)((_n_brx_36375=(_n_brx_36375+(d::truth((_n_hash_36162(_n_slot_36365,(40.0+_n_i_36381))<0.5))?1.3:(-d::number(1.3))))));
(void)((_n_bry_36376=(_n_bry_36376+0.8)));
(void)(_n_boltCells_36370.push(([&](){auto _n_left_36589=d::round(_n_brx_36375);auto _n_right_36590=(d::round(_n_bry_36376)*_n_W_36147);return (_n_left_36589+_n_right_36590);})()));
}}
}
double _n_rise_36382=(_n_t_36343*3.2);
{double _n_r_36383=0.0;
for(;d::truth((_n_r_36383<_n_H_36148));(void)((_n_r_36383++))){d::check_cancel();double _n_y_36384=(_n_r_36383+0.5);
{double _n_x_36385=0.0;
for(;d::truth((_n_x_36385<_n_W_36147));(void)((_n_x_36385++))){d::check_cancel();double _n_k_36386=((_n_r_36383*_n_W_36147)+_n_x_36385);
double _n_m_36387=d::at(this->_n_mat_36178,_n_k_36386);
double _n_cr_36388=0.0;
double _n_cg_36389=0.0;
double _n_cb_36390=0.0;
double _n_dcx_36391=((_n_x_36385+0.5)-_n_CX_36149);
double _n_dcy_36392=(((_n_y_36384-_n_RIM_36150)+1.0)*1.4);
double _n_dc_36393=std::sqrt(((_n_dcx_36391*_n_dcx_36391)+(_n_dcy_36392*_n_dcy_36392)));
if(d::truth((_n_m_36387==_n_SKY_36159))){d::check_cancel();double _n_v_36394=(_n_y_36384/_n_PLAIN_36154);
double _n_veil_36395=(0.85+(0.3*d::at(this->_n_haze_36195,_n_k_36386)));
double _n_gx_36396=(_n_dcx_36391/66.0);
double _n_gy_36397=(((_n_y_36384-_n_RIM_36150)-12.0)/38.0);
double _n_glow_36398=([&](){auto _n_left_36591=([&](){auto _n_left_36593=(0.5*std::exp(((-d::number(((_n_gx_36396*_n_gx_36396)+(_n_gy_36397*_n_gy_36397))))*2.2)));auto _n_right_36594=(0.16*std::exp(((-d::number(_n_dc_36393))/14.0)));return (_n_left_36593+_n_right_36594);})();auto _n_right_36592=(0.2*std::pow(_n_v_36394,6.0));return (_n_left_36591+_n_right_36592);})();
double _n_warm_36399=_n_smooth_36166(0.0,(_n_RIM_36150+20.0),_n_y_36384);
(void)((_n_cr_36388=((0.005+_n_glow_36398)*_n_veil_36395)));
(void)((_n_cg_36389=((0.005+(_n_glow_36398*(0.1+(0.22*_n_warm_36399))))*_n_veil_36395)));
(void)((_n_cb_36390=((0.012+(_n_glow_36398*0.05))*_n_veil_36395)));
double _n_c_36400=0.0;
if(d::truth((_n_y_36384<(_n_RIM_36150+1.0)))){d::check_cancel();double _n_px_36401=_n_plumeX_36171(_n_y_36384);
double _n_pw_36402=([&](){auto _n_left_36595=_n_plumeW_36172(_n_y_36384);auto _n_right_36596=([&](){auto _n_left_36597=(1.0+(0.13*std::sin(((_n_y_36384+_n_rise_36382)*0.42))));auto _n_right_36598=(0.07*std::sin((((_n_y_36384+_n_rise_36382)*0.9)+2.0)));return (_n_left_36597+_n_right_36598);})();return (_n_left_36595*_n_right_36596);})();
double _n_e_36403=(1.0-(std::fabs(((_n_x_36385+0.5)-_n_px_36401))/_n_pw_36402));
if(d::truth((_n_e_36403>(-d::number(0.5))))){d::check_cancel();double _n_a_36404=this->_n_sample_36194(this->_n_texA_36192,_n_x_36385,(_n_y_36384+_n_rise_36382));
double _n_b_36405=this->_n_sample_36194(this->_n_texB_36193,(_n_x_36385-(_n_t_36343*1.5)),(_n_y_36384+(_n_rise_36382*1.6)));
double _n_d_36406=((0.65*_n_a_36404)+(0.35*_n_b_36405));
(void)((_n_c_36400=([&](){auto _n_left_36599=_n_smooth_36166(0.0,0.2,((_n_e_36403+((_n_a_36404-0.5)*2.5))+((_n_b_36405-0.5)*0.7)));auto _n_right_36600=_n_smooth_36166((-d::number(1.0)),3.0,_n_y_36384);return (_n_left_36599*_n_right_36600);})()));
if(d::truth((_n_c_36400>0.01))){d::check_cancel();double _n_below_36407=([&](){auto _n_left_36601=(0.65*this->_n_sample_36194(this->_n_texA_36192,_n_x_36385,((_n_y_36384+3.5)+_n_rise_36382)));auto _n_right_36602=(0.35*this->_n_sample_36194(this->_n_texB_36193,(_n_x_36385-(_n_t_36343*1.5)),((_n_y_36384+3.5)+(_n_rise_36382*1.6))));return (_n_left_36601+_n_right_36602);})();
double _n_lb_36408=_n_clamp_36165((0.45+((_n_d_36406-_n_below_36407)*13.0)));
double _n_up_36409=(_n_RIM_36150-_n_y_36384);
double _n_heat_36410=([&](){auto _n_left_36603=(std::exp(((-d::number(_n_up_36409))/10.0))*0.6);auto _n_right_36604=(0.16*std::exp(((-d::number(_n_up_36409))/30.0)));return (_n_left_36603+_n_right_36604);})();
double _n_young_36411=(0.3+(0.7*_n_smooth_36166((_n_RIM_36150-4.0),(_n_RIM_36150-20.0),_n_y_36384)));
double _n_l2_36412=(_n_lb_36408*_n_lb_36408);
double _n_body_36413=(((0.15+(0.5*_n_l2_36412))*(0.7+(0.3*_n_clamp_36165((_n_e_36403*2.0)))))*_n_young_36411);
double _n_fire_36414=((_n_heat_36410*(0.2+(1.1*_n_l2_36412)))*(0.45+(0.55*_n_smooth_36166((_n_RIM_36150-2.0),(_n_RIM_36150-12.0),_n_y_36384))));
double _n_pr_36415=(_n_body_36413+(_n_fire_36414*0.95));
double _n_pg_36416=((_n_body_36413*0.86)+(_n_fire_36414*(0.18+(0.25*std::exp(((-d::number(_n_up_36409))/6.0))))));
double _n_pb_36417=((_n_body_36413*0.8)+(_n_fire_36414*0.05));
if(d::truth(_n_bolt_36367)){d::check_cancel();double _n_dl_36418=d::hypot(std::initializer_list<double>{((_n_x_36385+0.5)-_n_bx_36368),((_n_y_36384-_n_by_36369)*0.8)});
double _n_L_36419=((_n_bolt_36367*([&](){auto _n_left_36605=(std::exp(((-d::number(_n_dl_36418))/5.0))*0.6);auto _n_right_36606=(std::exp(((-d::number(_n_dl_36418))/16.0))*0.22);return (_n_left_36605+_n_right_36606);})())*(0.3+(0.9*_n_lb_36408)));
(void)((((_n_pr_36415=(_n_pr_36415+(0.7*_n_L_36419))),(_n_pg_36416=(_n_pg_36416+(0.66*_n_L_36419)))),(_n_pb_36417=(_n_pb_36417+(0.95*_n_L_36419)))));
}
double _n_al_36420=d::minimum({1.0,(_n_c_36400*1.15)});
(void)((_n_cr_36388=_n_mix_36167(_n_cr_36388,_n_pr_36415,_n_al_36420)));
(void)((_n_cg_36389=_n_mix_36167(_n_cg_36389,_n_pg_36416,_n_al_36420)));
(void)((_n_cb_36390=_n_mix_36167(_n_cb_36390,_n_pb_36417,_n_al_36420)));
}
}
}
if((d::truth((_n_c_36400<0.05))&&d::truth((_n_hash_36162(_n_x_36385,((_n_r_36383*3.0)+11.0))>0.982)))){d::check_cancel();double _n_tw_36421=(0.6+(0.4*std::sin(([&](){auto _n_left_36607=(_n_t_36343*(1.5+(_n_hash_36162(_n_x_36385,_n_r_36383)*3.0)));auto _n_right_36608=(_n_hash_36162(_n_r_36383,_n_x_36385)*6.28);return (_n_left_36607+_n_right_36608);})())));
double _n_s_36422=([&](){auto _n_left_36609=((0.35+(0.5*_n_tw_36421))*_n_smooth_36166(0.25,0.04,_n_glow_36398));auto _n_right_36610=_n_smooth_36166((_n_PLAIN_36154-4.0),20.0,_n_y_36384);return (_n_left_36609*_n_right_36610);})();
(void)((((_n_cr_36388=d::maximum({_n_cr_36388,(_n_s_36422*0.85)})),(_n_cg_36389=d::maximum({_n_cg_36389,(_n_s_36422*0.87)}))),(_n_cb_36390=d::maximum({_n_cb_36390,_n_s_36422}))));
}
}else {d::check_cancel();if(d::truth((_n_m_36387==_n_ROCK_36160))){d::check_cancel();double _n_s_36423=d::at(this->_n_rock_36179,_n_k_36386);
(void)((_n_cr_36388=(0.012+(0.04*_n_s_36423))));
(void)((_n_cg_36389=(0.01+(0.024*_n_s_36423))));
(void)((_n_cb_36390=(0.012+(0.024*_n_s_36423))));
double _n_rg_36424=d::at(this->_n_rivGlow_36190,_n_k_36386);
double _n_up_36425=([&](){auto _n_left_36611=(std::exp(((-d::number(_n_dc_36393))/6.0))*0.9);auto _n_right_36612=(std::exp(((-d::number(_n_dc_36393))/22.0))*0.06);return (_n_left_36611+_n_right_36612);})();
double _n_brow_36426=([&](){auto _n_left_36613=(_n_smooth_36166((d::at(this->_n_topAt_36183,_n_x_36385)+1.4),d::at(this->_n_topAt_36183,_n_x_36385),_n_y_36384)*0.55);auto _n_right_36614=std::exp(((-d::number(_n_dc_36393))/90.0));return (_n_left_36613*_n_right_36614);})();
double _n_lit_36427=(((((_n_rg_36424*0.22)+((_n_rg_36424*_n_rg_36424)*0.3))+_n_up_36425)+_n_brow_36426)*(0.4+(0.9*_n_s_36423)));
(void)((_n_cr_36388=(_n_cr_36388+(_n_lit_36427*0.9))));
(void)((_n_cg_36389=(_n_cg_36389+(_n_lit_36427*0.22))));
(void)((_n_cb_36390=(_n_cb_36390+(_n_lit_36427*0.05))));
double _n_id_36428=d::at(this->_n_rivId_36186,_n_k_36386);
if(d::truth((_n_id_36428!=255.0))){d::check_cancel();double _n_a_36429=d::at(this->_n_rivA_36188,_n_k_36386);
double _n_kk_36430=d::at(this->_n_rivK_36189,_n_k_36386);
double _n_sv_36431=d::at(this->_n_rivS_36187,_n_k_36386);
double _n_heat_36432=_n_clamp_36165((((1.0-((0.75*_n_a_36429)*_n_a_36429))*(1.0-(0.5*_n_kk_36430)))+(0.2*(_n_noise_36163(((_n_sv_36431*0.9)-(_n_t_36343*4.5)),((_n_a_36429*2.0)+(_n_id_36428*9.0)),std::optional<double>{},std::optional<double>{})-0.5))));
double _n_lr_36433=(0.75+(0.3*_n_heat_36432));
double _n_lg_36434=(0.12+((0.75*_n_heat_36432)*_n_heat_36432));
double _n_lb_36435=(0.02+(0.35*std::pow(_n_heat_36432,4.0)));
double _n_pn_36436=([&](){auto _n_left_36615=(_n_noise_36163(((_n_sv_36431*0.32)-(_n_t_36343*0.95)),((_n_a_36429*1.3)+(_n_id_36428*13.0)),std::optional<double>{},std::optional<double>{})*0.7);auto _n_right_36616=(_n_noise_36163(((_n_sv_36431*0.8)-(_n_t_36343*2.4)),((_n_a_36429*2.6)+(_n_id_36428*5.0)),std::optional<double>{},std::optional<double>{})*0.3);return (_n_left_36615+_n_right_36616);})();
double _n_th_36437=((0.6-(0.22*_n_kk_36430))+((0.12*_n_a_36429)*_n_a_36429));
double _n_plate_36438=_n_smooth_36166(_n_th_36437,(_n_th_36437+0.05),_n_pn_36436);
double _n_seam_36439=(_n_smooth_36166((_n_th_36437-0.05),_n_th_36437,_n_pn_36436)*(1.0-_n_plate_36438));
double _n_dark_36440=(0.13+(0.12*_n_noise_36163(((_n_sv_36431*1.5)-((_n_t_36343*0.95)*4.7)),(_n_a_36429*4.0),std::optional<double>{},std::optional<double>{})));
(void)((_n_lr_36433=(_n_mix_36167(_n_lr_36433,_n_dark_36440,_n_plate_36438)+(_n_seam_36439*0.3))));
(void)((_n_lg_36434=(_n_mix_36167(_n_lg_36434,(_n_dark_36440*0.3),_n_plate_36438)+(_n_seam_36439*0.15))));
(void)((_n_lb_36435=_n_mix_36167(_n_lb_36435,(_n_dark_36440*0.2),_n_plate_36438)));
double _n_edge_36441=([&](){auto _n_argument_36617=1.0;auto _n_argument_36618=0.75;auto _n_argument_36619=std::fabs(_n_a_36429);return _n_smooth_36166(_n_argument_36617,_n_argument_36618,_n_argument_36619);})();
(void)((_n_cr_36388=_n_mix_36167(_n_cr_36388,_n_lr_36433,_n_edge_36441)));
(void)((_n_cg_36389=_n_mix_36167(_n_cg_36389,_n_lg_36434,_n_edge_36441)));
(void)((_n_cb_36390=_n_mix_36167(_n_cb_36390,_n_lb_36435,_n_edge_36441)));
}else {d::check_cancel();if(d::truth((d::at(this->_n_crack_36180,_n_k_36386)>0.01))){d::check_cancel();double _n_pulse_36442=(0.55+(0.45*std::sin(((_n_t_36343*0.9)+d::at(this->_n_phase_36181,_n_k_36386)))));
double _n_g_36443=((d::at(this->_n_crack_36180,_n_k_36386)*_n_pulse_36442)*(0.5+_n_rg_36424));
(void)((_n_cr_36388=(_n_cr_36388+(0.75*_n_g_36443))));
(void)((_n_cg_36389=(_n_cg_36389+(0.18*_n_g_36443))));
(void)((_n_cb_36390=(_n_cb_36390+(0.03*_n_g_36443))));
}
}
}else {d::check_cancel();double _n_sh_36444=d::at(this->_n_shoreAt_36182,_n_x_36385);
double _n_depth_36445=(_n_y_36384-_n_sh_36444);
double _n_w_36446=([&](){auto _n_left_36620=(_n_noise_36163(((_n_x_36385*0.05)+(_n_t_36343*0.15)),((_n_y_36384*0.9)-(_n_t_36343*0.9)),std::optional<double>{},std::optional<double>{})*0.6);auto _n_right_36621=(_n_noise_36163(((_n_x_36385*0.15)-(_n_t_36343*0.3)),((_n_y_36384*1.6)-(_n_t_36343*1.6)),std::optional<double>{},std::optional<double>{})*0.4);return (_n_left_36620+_n_right_36621);})();
double _n_sx_36447=([&](){auto _n_argument_36622=1.0;auto _n_argument_36623=([&](){auto _n_argument_36624=(_n_W_36147-2.0);auto _n_argument_36625=d::round((_n_x_36385+((_n_w_36446-0.5)*4.0)));return d::minimum({_n_argument_36624,_n_argument_36625});})();return d::maximum({_n_argument_36622,_n_argument_36623});})();
double _n_sy_36448=([&](){auto _n_argument_36626=0.0;auto _n_argument_36627=([&](){auto _n_argument_36628=(std::floor(d::at(this->_n_shoreAt_36182,_n_sx_36447))-1.0);auto _n_argument_36629=d::round((((_n_sh_36444-(_n_depth_36445*3.0))-1.0)-((_n_w_36446-0.5)*4.0)));return d::minimum({_n_argument_36628,_n_argument_36629});})();return d::maximum({_n_argument_36626,_n_argument_36627});})();
double _n_sk_36449=((_n_sy_36448*_n_W_36147)+_n_sx_36447);
double _n_band_36450=(0.3+(1.1*_n_smooth_36166(0.35,0.7,_n_w_36446)));
double _n_dim_36451=(1.05*(1.0-(_n_depth_36445/45.0)));
double _n_rr_36452=((0.5*d::at(this->_n_R_36201,_n_sk_36449))+(0.25*(d::at(this->_n_R_36201,(_n_sk_36449-1.0))+d::at(this->_n_R_36201,(_n_sk_36449+1.0)))));
double _n_rg_36453=((0.5*d::at(this->_n_Gc_36202,_n_sk_36449))+(0.25*(d::at(this->_n_Gc_36202,(_n_sk_36449-1.0))+d::at(this->_n_Gc_36202,(_n_sk_36449+1.0)))));
double _n_rb_36454=((0.5*d::at(this->_n_B_36203,_n_sk_36449))+(0.25*(d::at(this->_n_B_36203,(_n_sk_36449-1.0))+d::at(this->_n_B_36203,(_n_sk_36449+1.0)))));
(void)((_n_cr_36388=(0.01+((_n_rr_36452*_n_band_36450)*_n_dim_36451))));
(void)((_n_cg_36389=(0.01+(((_n_rg_36453*_n_band_36450)*_n_dim_36451)*0.9))));
(void)((_n_cb_36390=(0.02+(((_n_rb_36454*_n_band_36450)*_n_dim_36451)*0.9))));
double _n_lip_36455=_n_smooth_36166(1.5,0.0,_n_depth_36445);
(void)((((_n_cr_36388=(_n_cr_36388*(1.0-(0.7*_n_lip_36455)))),(_n_cg_36389=(_n_cg_36389*(1.0-(0.7*_n_lip_36455))))),(_n_cb_36390=(_n_cb_36390*(1.0-(0.7*_n_lip_36455))))));
}
}
if(d::truth((_n_m_36387!=_n_LAKE_36161))){d::check_cancel();double _n_vg_36456=([&](){auto _n_left_36630=(std::exp(((-d::number(_n_dc_36393))/1.4))*1.3);auto _n_right_36631=(std::exp(((-d::number(_n_dc_36393))/5.0))*0.2);return (_n_left_36630+_n_right_36631);})();
(void)((_n_cr_36388=(_n_cr_36388+(_n_vg_36456+d::at(this->_n_addR_36206,_n_k_36386)))));
(void)((_n_cg_36389=(_n_cg_36389+((_n_vg_36456*0.55)+d::at(this->_n_addG_36207,_n_k_36386)))));
(void)((_n_cb_36390=(_n_cb_36390+((_n_vg_36456*0.18)+d::at(this->_n_addB_36208,_n_k_36386)))));
}
(void)(((([&](){auto&& _n_array_36632=this->_n_R_36201;auto _n_index_36633=_n_k_36386;auto _n_value_36634=_n_cr_36388;d::put(_n_array_36632,_n_index_36633,_n_value_36634);return _n_value_36634;})(),([&](){auto&& _n_array_36635=this->_n_Gc_36202;auto _n_index_36636=_n_k_36386;auto _n_value_36637=_n_cg_36389;d::put(_n_array_36635,_n_index_36636,_n_value_36637);return _n_value_36637;})()),([&](){auto&& _n_array_36638=this->_n_B_36203;auto _n_index_36639=_n_k_36386;auto _n_value_36640=_n_cb_36390;d::put(_n_array_36638,_n_index_36639,_n_value_36640);return _n_value_36640;})()));
}}
}}
for(auto &&_n_item_36641:_n_boltCells_36370){d::check_cancel();double _n_c_36457=_n_item_36641;
{
if(((d::truth((_n_c_36457<0.0))||d::truth((_n_c_36457>=this->_n_N_36174)))||d::truth((d::at(this->_n_mat_36178,_n_c_36457)!=_n_SKY_36159)))){d::check_cancel();continue;
}
double _n_v_36458=d::minimum({1.0,(_n_bolt_36367*1.4)});
(void)(((([&](){auto&& _n_array_36642=this->_n_R_36201;auto _n_index_36643=_n_c_36457;auto _n_value_36644=_n_mix_36167(d::at(this->_n_R_36201,_n_c_36457),0.92,_n_v_36458);d::put(_n_array_36642,_n_index_36643,_n_value_36644);return _n_value_36644;})(),([&](){auto&& _n_array_36645=this->_n_Gc_36202;auto _n_index_36646=_n_c_36457;auto _n_value_36647=_n_mix_36167(d::at(this->_n_Gc_36202,_n_c_36457),0.9,_n_v_36458);d::put(_n_array_36645,_n_index_36646,_n_value_36647);return _n_value_36647;})()),([&](){auto&& _n_array_36648=this->_n_B_36203;auto _n_index_36649=_n_c_36457;auto _n_value_36650=_n_mix_36167(d::at(this->_n_B_36203,_n_c_36457),1.0,_n_v_36458);d::put(_n_array_36648,_n_index_36649,_n_value_36650);return _n_value_36650;})()));

}
}
{double _n_r_36459=0.0;
for(;d::truth((_n_r_36459<_n_H_36148));(void)((_n_r_36459++))){d::check_cancel();{double _n_x_36460=0.0;
for(;d::truth((_n_x_36460<_n_W_36147));(void)((_n_x_36460++))){d::check_cancel();double _n_k_36461=((_n_r_36459*_n_W_36147)+_n_x_36460);
double _n_cr_36462=d::maximum({0.0,(d::at(this->_n_R_36201,_n_k_36461)-0.025)});
double _n_cg_36463=d::maximum({0.0,(d::at(this->_n_Gc_36202,_n_k_36461)-0.025)});
double _n_cbl_36464=d::maximum({0.0,(d::at(this->_n_B_36203,_n_k_36461)-0.025)});
double _n_floor_36465=d::at(this->_n_floorAt_36204,_n_k_36461);
double _n_peak_36466=d::maximum({_n_cr_36462,_n_cg_36463,_n_cbl_36464,0.0001});
double _n_level_36467=(_n_clamp_36165((_n_floor_36465+(((1.0-_n_floor_36465)*std::pow(_n_peak_36466,0.85))*0.95)))*d::at(this->_n_fadeAt_36205,_n_k_36461));
double _n_step_36468=([&](){auto _n_argument_36651=0.0;auto _n_argument_36652=([&](){auto _n_argument_36653=3.0;auto _n_argument_36654=d::round(((_n_level_36467*3.0)+d::at(_n_BAYER_36158,((double(d::i32(_n_r_36459)&d::i32(3.0))*4.0)+double(d::i32(_n_x_36460)&d::i32(3.0))))));return d::minimum({_n_argument_36653,_n_argument_36654});})();return d::maximum({_n_argument_36651,_n_argument_36652});})();
(void)(([&](){auto&& _n_array_36655=this->_n_out_36175;auto _n_index_36656=_n_k_36461;auto _n_value_36657=d::at(_n_DOTS_36156,_n_step_36468);d::put(_n_array_36655,_n_index_36656,_n_value_36657);return _n_value_36657;})());
if(d::truth(_n_color_36344)){d::check_cancel();double _n_want_36469=(d::truth(_n_step_36468)?d::minimum({1.0,((_n_level_36467+0.06)/d::at(_n_COVER_36157,_n_step_36468))}):0.0);
double _n_s_36470=((0.3+(0.7*_n_want_36469))/_n_peak_36466);
(void)(([&](){auto&& _n_array_36658=d::read(_n_color_36344);auto _n_index_36659=_n_k_36461;auto _n_value_36660=([&](){auto _n_argument_36661=_n_clamp_36165((_n_cr_36462*_n_s_36470));auto _n_argument_36662=_n_clamp_36165((_n_cg_36463*_n_s_36470));auto _n_argument_36663=_n_clamp_36165((_n_cbl_36464*_n_s_36470));return this->_n_nearest_36177(_n_argument_36661,_n_argument_36662,_n_argument_36663);})();d::put(_n_array_36658,_n_index_36659,_n_value_36660);return _n_value_36660;})());
}
}}
}}
d::Array<d::String,false> _n_lines_36471=d::Array<d::String,false>{};
{double _n_r_36472=0.0;
for(;d::truth((_n_r_36472<_n_H_36148));(void)((_n_r_36472++))){d::check_cancel();(void)(_n_lines_36471.push(d::join(this->_n_out_36175.slice((_n_r_36472*_n_W_36147),((_n_r_36472+1.0)*_n_W_36147)),d::String(u""))));
}}
return d::join(_n_lines_36471,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("volcano-night").cols)*ascii::catalog_meta("volcano-night").rows);auto _env=std::make_shared<_n_Record_36473>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &volcano_night_meta(){return catalog_meta("volcano-night");}
std::unique_ptr<Piece> make_volcano_night(const AsciiPieceOptions &o){return std::make_unique<Native_volcano_night>(o);}
}
