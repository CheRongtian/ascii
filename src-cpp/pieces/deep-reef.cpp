// Direct, statically typed C++ from src/pieces/deep-reef.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_6469;
struct _n_Record_6531;
struct _n_Record_6533;
struct _n_Record_6536;
struct _n_Record_6538;
struct _n_Record_6879;
struct _n_Record_6469{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_6469> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6469>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_6531{
double _p_a{};
double _p_b{};
double _p_ph{};
double _p_sp{};
static std::shared_ptr<_n_Record_6531> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6531>();out->_p_a=d::decode<double>(j["a"]);out->_p_b=d::decode<double>(j["b"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_sp=d::decode<double>(j["sp"]);return out;}
};
struct _n_Record_6533{
double _p_bx{};
double _p_base{};
double _p_len{};
double _p_sz{};
double _p_ph{};
double _p_haze{};
static std::shared_ptr<_n_Record_6533> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6533>();out->_p_bx=d::decode<double>(j["bx"]);out->_p_base=d::decode<double>(j["base"]);out->_p_len=d::decode<double>(j["len"]);out->_p_sz=d::decode<double>(j["sz"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_haze=d::decode<double>(j["haze"]);return out;}
};
struct _n_Record_6536{
double _p_x0{};
double _p_y0{};
double _p_ph{};
double _p_sp{};
double _p_w{};
static std::shared_ptr<_n_Record_6536> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6536>();out->_p_x0=d::decode<double>(j["x0"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_sp=d::decode<double>(j["sp"]);out->_p_w=d::decode<double>(j["w"]);return out;}
};
struct _n_Record_6538{
double _p_x{};
double _p_y{};
double _p_sp{};
double _p_ph{};
double _p_b{};
static std::shared_ptr<_n_Record_6538> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6538>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_sp=d::decode<double>(j["sp"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_b=d::decode<double>(j["b"]);return out;}
};
struct _n_Record_6879{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_6879> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6879>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_6483(double _a0,double _a1);
double _n_noise_6484(double _a0,double _a1);
double _n_fbm_6485(double _a0,double _a1,double _a2);
double _n_clamp_6486(double _a0);
double _n_smooth_6487(double _a0,double _a1,double _a2);
double _n_mix_6488(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_6489(d::String _a0);
std::function<double()> _n_prng_6490(double _a0);
std::shared_ptr<_n_Record_6469> _n_meta_6468=[](){return ([&](){auto _n_object_6882=std::make_shared<_n_Record_6469>();_n_object_6882->_p_name=d::String(u"deep reef");_n_object_6882->_p_category=d::String(u"scenes");_n_object_6882->_p_note=d::String(u"light shafts, swaying kelp and a turning school of fish over a reef");_n_object_6882->_p_cols=200.0;_n_object_6882->_p_rows=100.0;_n_object_6882->_p_cell=1.0;_n_object_6882->_p_fps=15.0;_n_object_6882->_p_ground=d::String(u"#03101a");_n_object_6882->_p_palette=d::Array<d::String,false>{d::String(u"#114a66"),d::String(u"#165c78"),d::String(u"#1d708a"),d::String(u"#27869b"),d::String(u"#3a9fae"),d::String(u"#58b9c0"),d::String(u"#80d2d2"),d::String(u"#b0e8e2"),d::String(u"#e2fbf5"),d::String(u"#5e6b62"),d::String(u"#87927f"),d::String(u"#aab39a"),d::String(u"#cfd2b4"),d::String(u"#38461a"),d::String(u"#5a6420"),d::String(u"#857f2a"),d::String(u"#b0a03c"),d::String(u"#d6c25a"),d::String(u"#efe08e"),d::String(u"#8e3355"),d::String(u"#c4506a"),d::String(u"#e0786e"),d::String(u"#f0a070"),d::String(u"#6a3a78"),d::String(u"#9a5aa8"),d::String(u"#c88ad0"),d::String(u"#6f8a98"),d::String(u"#9fb8c6"),d::String(u"#cfe3ea")};return _n_object_6882;})();}();
const double _n_W_6470=[](){return 200.0;}();
const double _n_H_6471=[](){return 100.0;}();
const double _n_SURF_6472=[](){return 15.0;}();
const double _n_HZ_6473=[](){return 61.0;}();
const double _n_SUNX_6474=[](){return 136.0;}();
const d::String _n_DOTS_6475=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_6476=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_6477=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_6547=_a0;
return ((_n_v_6547/16.0)-0.47);});}();
const double _n_NONE_6478=[](){return 0.0;}();
const double _n_SAND_6479=[](){return 1.0;}();
const double _n_REEF_6480=[](){return 2.0;}();
const double _n_FAR_6481=[](){return 3.0;}();
const double _n_FAN_6482=[](){return 4.0;}();
double _n_hash_6483(double _a0,double _a1){double _n_x_6548=_a0;
double _n_y_6549=_a1;
{
double _n_h_6550=([&](){auto _n_left_6883=d::imul(double(d::i32(_n_x_6548)|d::i32(0.0)),374761393.0);auto _n_right_6884=d::imul(double(d::i32(_n_y_6549)|d::i32(0.0)),668265263.0);return (_n_left_6883+_n_right_6884);})();
(void)((_n_h_6550=d::imul(double(d::i32(_n_h_6550)^d::i32(double(d::u32(_n_h_6550)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_6550)^d::i32(double(d::u32(_n_h_6550)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_6484(double _a0,double _a1){double _n_x_6551=_a0;
double _n_y_6552=_a1;
{
double _n_xi_6553=std::floor(_n_x_6551);
double _n_yi_6554=std::floor(_n_y_6552);
double _n_fx_6555=(_n_x_6551-_n_xi_6553);
double _n_fy_6556=(_n_y_6552-_n_yi_6554);
double _n_u_6557=((_n_fx_6555*_n_fx_6555)*(3.0-(2.0*_n_fx_6555)));
double _n_v_6558=((_n_fy_6556*_n_fy_6556)*(3.0-(2.0*_n_fy_6556)));
double _n_a_6559=_n_hash_6483(_n_xi_6553,_n_yi_6554);
double _n_b_6560=_n_hash_6483((_n_xi_6553+1.0),_n_yi_6554);
double _n_c_6561=_n_hash_6483(_n_xi_6553,(_n_yi_6554+1.0));
double _n_d_6562=_n_hash_6483((_n_xi_6553+1.0),(_n_yi_6554+1.0));
return (((_n_a_6559+((_n_b_6560-_n_a_6559)*_n_u_6557))+((_n_c_6561-_n_a_6559)*_n_v_6558))+(((((_n_a_6559-_n_b_6560)-_n_c_6561)+_n_d_6562)*_n_u_6557)*_n_v_6558));

}
}

double _n_fbm_6485(double _a0,double _a1,double _a2){double _n_x_6563=_a0;
double _n_y_6564=_a1;
double _n_octaves_6565=_a2;
{
double _n_s_6566=0.0;
double _n_n_6567=0.0;
double _n_amp_6568=0.5;
double _n_f_6569=1.0;
{double _n_i_6570=0.0;
for(;d::truth((_n_i_6570<_n_octaves_6565));(void)((_n_i_6570++))){d::check_cancel();(void)((_n_s_6566=(_n_s_6566+(_n_amp_6568*_n_noise_6484((_n_x_6563*_n_f_6569),(_n_y_6564*_n_f_6569))))));
(void)((_n_n_6567=(_n_n_6567+_n_amp_6568)));
(void)((_n_amp_6568=(_n_amp_6568*0.5)));
(void)((_n_f_6569=(_n_f_6569*2.0)));
}}
return (_n_s_6566/_n_n_6567);

}
}

double _n_clamp_6486(double _a0){double _n_v_6571=_a0;
return (d::truth((_n_v_6571<0.0))?0.0:(d::truth((_n_v_6571>1.0))?1.0:_n_v_6571));}

double _n_smooth_6487(double _a0,double _a1,double _a2){double _n_a_6572=_a0;
double _n_b_6573=_a1;
double _n_v_6574=_a2;
{
double _n_k_6575=_n_clamp_6486(((_n_v_6574-_n_a_6572)/(_n_b_6573-_n_a_6572)));
return ((_n_k_6575*_n_k_6575)*(3.0-(2.0*_n_k_6575)));

}
}

double _n_mix_6488(double _a0,double _a1,double _a2){double _n_a_6576=_a0;
double _n_b_6577=_a1;
double _n_k_6578=_a2;
return (_n_a_6576+((_n_b_6577-_n_a_6576)*_n_k_6578));}

d::Array<double,false> _n_hex_6489(d::String _a0){d::String _n_s_6579=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_6580=_a0;
return (([&](){auto _n_argument_6885=d::slice(_n_s_6579,_n_i_6580,(_n_i_6580+2.0));auto _n_argument_6886=16.0;return d::parseInt(_n_argument_6885,_n_argument_6886);})()/255.0);});}

std::function<double()> _n_prng_6490(double _a0){double _n_seed_6581=_a0;
{
double _n_s_6582=double(d::u32(_n_seed_6581)>>(d::u32(0.0)&31));
return [=]( ) mutable ->double{{
(void)((_n_s_6582=double(d::u32((_n_s_6582+1831565813.0))>>(d::u32(0.0)&31))));
double _n_t_6583=d::imul(double(d::i32(_n_s_6582)^d::i32(double(d::u32(_n_s_6582)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_6582)));
(void)((_n_t_6583=double(d::i32((_n_t_6583+d::imul(double(d::i32(_n_t_6583)^d::i32(double(d::u32(_n_t_6583)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_6583)))))^d::i32(_n_t_6583))));
return (double(d::u32(double(d::i32(_n_t_6583)^d::i32(double(d::u32(_n_t_6583)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_deep_reef final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_6491{};
double _n_N_6492{};
d::Array<uint8_t,true> _n_lut_6493{};
double _n_CT_6495{};
double _n_CC_6496{};
double _n_CS_6497{};
d::Array<float,true> _n_caus_6498{};
d::Array<float,true> _n_wr_6500{};
d::Array<float,true> _n_wg_6501{};
d::Array<float,true> _n_wb_6502{};
d::Array<uint16_t,true> _n_rayAt_6503{};
double _n_SUNY_6504{};
double _n_RAYS_6505{};
double _n_RAY0_6506{};
d::Array<uint8_t,true> _n_mat_6507{};
d::Array<float,true> _n_ar_6508{};
d::Array<float,true> _n_ag_6509{};
d::Array<float,true> _n_ab_6510{};
d::Array<float,true> _n_fog_6511{};
d::Array<float,true> _n_cu_6512{};
d::Array<float,true> _n_cv_6513{};
d::Array<float,true> _n_cw_6514{};
std::function<double(double)> _n_leftTop_6516{};
std::function<double(double)> _n_rightTop_6517{};
d::Array<std::array<double,4>,false> _n_domes_6519{};
d::Array<d::Array<double,false>,false> _n_coral_6520{};
d::Array<double,false> _n_rock_6521{};
d::Array<d::Array<double,false>,false> _n_BOMMIES_6522{};
d::Array<double,false> _n_FAN_C_6523{};
double _n_FAN_R_6524{};
d::Array<float,true> _n_br_6525{};
d::Array<float,true> _n_bg_6526{};
d::Array<float,true> _n_bb_6527{};
std::function<double()> _n_rnd_6528{};
d::Array<std::shared_ptr<_n_Record_6531>,false> _n_fish_6530{};
d::Array<std::shared_ptr<_n_Record_6533>,false> _n_kelp_6532{};
d::Array<d::Array<double,false>,false> _n_streams_6534{};
d::Array<std::shared_ptr<_n_Record_6536>,false> _n_bubbles_6535{};
d::Array<std::shared_ptr<_n_Record_6538>,false> _n_snow_6537{};
d::Array<float,true> _n_cr_6539{};
d::Array<float,true> _n_cg_6540{};
d::Array<float,true> _n_cb_6541{};
d::Array<float,true> _n_floor_6542{};
d::Array<float,true> _n_rays_6543{};
d::Array<d::String,false> _n_out_6544{};
std::function<d::String(double,std::shared_ptr<_n_Record_6879>)> _render;
double _n_nearest_6494(double _a0,double _a1,double _a2){double _n_r_6584=_a0;
double _n_g_6585=_a1;
double _n_b_6586=_a2;
{
double _n_k_6587=([&](){auto _n_left_7273=([&](){auto _n_left_7275=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_6584*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_7276=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_6585*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_7275)|d::i32(_n_right_7276));})();auto _n_right_7274=d::minimum({31.0,double(d::i32((_n_b_6586*31.99))|d::i32(0.0))});return double(d::i32(_n_left_7273)|d::i32(_n_right_7274));})();
if(d::truth((d::at(this->_n_lut_6493,_n_k_6587)!=255.0))){d::check_cancel();return d::at(this->_n_lut_6493,_n_k_6587);
}
double _n_best_6588=0.0;
double _n_bd_6589=1000000000.0;
{double _n_i_6590=0.0;
for(;d::truth((_n_i_6590<double(this->_n_P_6491.size())));(void)((_n_i_6590++))){d::check_cancel();double _n_dr_6591=(d::at(d::at(this->_n_P_6491,_n_i_6590),0.0)-_n_r_6584);
double _n_dg_6592=(d::at(d::at(this->_n_P_6491,_n_i_6590),1.0)-_n_g_6585);
double _n_db_6593=(d::at(d::at(this->_n_P_6491,_n_i_6590),2.0)-_n_b_6586);
double _n_d_6594=((((0.3*_n_dr_6591)*_n_dr_6591)+((0.5*_n_dg_6592)*_n_dg_6592))+((0.2*_n_db_6593)*_n_db_6593));
if(d::truth((_n_d_6594<_n_bd_6589))){d::check_cancel();(void)(((_n_bd_6589=_n_d_6594),(_n_best_6588=_n_i_6590)));
}
}}
return ([&](){auto&& _n_array_7277=this->_n_lut_6493;auto _n_index_7278=_n_k_6587;auto _n_value_7279=_n_best_6588;d::put(_n_array_7277,_n_index_7278,_n_value_7279);return _n_value_7279;})();

}
}

double _n_causAt_6499(double _a0,double _a1){double _n_u_6610=_a0;
double _n_v_6611=_a1;
{
(void)((_n_u_6610=d::mod((d::mod(_n_u_6610,this->_n_CT_6495)+this->_n_CT_6495),this->_n_CT_6495)));
(void)((_n_v_6611=d::mod((d::mod(_n_v_6611,this->_n_CT_6495)+this->_n_CT_6495),this->_n_CT_6495)));
double _n_x0_6612=double(d::i32(_n_u_6610)|d::i32(0.0));
double _n_y0_6613=double(d::i32(_n_v_6611)|d::i32(0.0));
double _n_ax_6614=(_n_u_6610-_n_x0_6612);
double _n_ay_6615=(_n_v_6611-_n_y0_6613);
double _n_x1_6616=d::mod((_n_x0_6612+1.0),this->_n_CT_6495);
double _n_y1_6617=d::mod((_n_y0_6613+1.0),this->_n_CT_6495);
double _n_a_6618=d::at(this->_n_caus_6498,((_n_y0_6613*this->_n_CT_6495)+_n_x0_6612));
double _n_b_6619=d::at(this->_n_caus_6498,((_n_y0_6613*this->_n_CT_6495)+_n_x1_6616));
double _n_c_6620=d::at(this->_n_caus_6498,((_n_y1_6617*this->_n_CT_6495)+_n_x0_6612));
double _n_d_6621=d::at(this->_n_caus_6498,((_n_y1_6617*this->_n_CT_6495)+_n_x1_6616));
return (((_n_a_6618+((_n_b_6619-_n_a_6618)*_n_ax_6614))+((_n_c_6620-_n_a_6618)*_n_ay_6615))+(((((_n_a_6618-_n_b_6619)-_n_c_6620)+_n_d_6621)*_n_ax_6614)*_n_ay_6615));

}
}

double _n_dome_6515(double _a0){double _n_u_6632=_a0;
return (1.0-std::sqrt(d::maximum({0.0,(1.0-(_n_u_6632*_n_u_6632))})));}

double _n_farTop_6518(double _a0){double _n_x_6635=_a0;
return ([&](){auto _n_left_7280=((_n_HZ_6473-1.0)-(6.0*_n_fbm_6485(((_n_x_6635*0.035)+2.0),1.7,3.0)));auto _n_right_7281=(3.0*std::exp((-d::number(std::pow(((_n_x_6635-120.0)/18.0),2.0)))));return (_n_left_7280-_n_right_7281);})();}

double _n_gauss_6529(){{
double _n_s_6740=0.0;
{double _n_i_6741=0.0;
for(;d::truth((_n_i_6741<4.0));(void)((_n_i_6741++))){d::check_cancel();(void)((_n_s_6740=(_n_s_6740+this->_n_rnd_6528())));
}}
return ((_n_s_6740-2.0)*1.7);

}
}

void _n_add_6545(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_x_6754=_a0;
double _n_r_6755=_a1;
double _n_R_6756=_a2;
double _n_G_6757=_a3;
double _n_B_6758=_a4;
{
if((((d::truth((_n_x_6754<0.0))||d::truth((_n_x_6754>=_n_W_6470)))||d::truth((_n_r_6755<0.0)))||d::truth((_n_r_6755>=_n_H_6471)))){d::check_cancel();return;
}
double _n_k_6759=((_n_r_6755*_n_W_6470)+_n_x_6754);
(void)(((([&](){auto&& _n_array_7282=this->_n_cr_6539;auto _n_index_7283=_n_k_6759;auto _n_value_7284=(d::at(_n_array_7282,_n_index_7283)+_n_R_6756);d::put(_n_array_7282,_n_index_7283,_n_value_7284);return _n_value_7284;})(),([&](){auto&& _n_array_7285=this->_n_cg_6540;auto _n_index_7286=_n_k_6759;auto _n_value_7287=(d::at(_n_array_7285,_n_index_7286)+_n_G_6757);d::put(_n_array_7285,_n_index_7286,_n_value_7287);return _n_value_7287;})()),([&](){auto&& _n_array_7288=this->_n_cb_6541;auto _n_index_7289=_n_k_6759;auto _n_value_7290=(d::at(_n_array_7288,_n_index_7289)+_n_B_6758);d::put(_n_array_7288,_n_index_7289,_n_value_7290);return _n_value_7290;})()));

}
}

void _n_put_6546(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_6760=_a0;
double _n_r_6761=_a1;
double _n_R_6762=_a2;
double _n_G_6763=_a3;
double _n_B_6764=_a4;
double _n_a_6765=_a5;
{
if((((d::truth((_n_x_6760<0.0))||d::truth((_n_x_6760>=_n_W_6470)))||d::truth((_n_r_6761<0.0)))||d::truth((_n_r_6761>=_n_H_6471)))){d::check_cancel();return;
}
double _n_k_6766=((_n_r_6761*_n_W_6470)+_n_x_6760);
(void)(((([&](){auto&& _n_array_7291=this->_n_cr_6539;auto _n_index_7292=_n_k_6766;auto _n_value_7293=_n_mix_6488(d::at(this->_n_cr_6539,_n_k_6766),_n_R_6762,_n_a_6765);d::put(_n_array_7291,_n_index_7292,_n_value_7293);return _n_value_7293;})(),([&](){auto&& _n_array_7294=this->_n_cg_6540;auto _n_index_7295=_n_k_6766;auto _n_value_7296=_n_mix_6488(d::at(this->_n_cg_6540,_n_k_6766),_n_G_6763,_n_a_6765);d::put(_n_array_7294,_n_index_7295,_n_value_7296);return _n_value_7296;})()),([&](){auto&& _n_array_7297=this->_n_cb_6541;auto _n_index_7298=_n_k_6766;auto _n_value_7299=_n_mix_6488(d::at(this->_n_cb_6541,_n_k_6766),_n_B_6764,_n_a_6765);d::put(_n_array_7297,_n_index_7298,_n_value_7299);return _n_value_7299;})()));

}
}

explicit Native_deep_reef(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_6491=d::map(_n_meta_6468->_p_palette,_n_hex_6489);
this->_n_N_6492=(_n_W_6470*_n_H_6471);
this->_n_lut_6493=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_CT_6495=64.0;
this->_n_CC_6496=6.0;
this->_n_CS_6497=(this->_n_CT_6495/this->_n_CC_6496);
this->_n_caus_6498=d::Array<float,true>(size_t((this->_n_CT_6495*this->_n_CT_6495)));
{
std::function<double()> _n_rnd_6595=_n_prng_6490(7.0);
d::Array<std::array<double,2>,false> _n_pts_6596=d::Array<std::array<double,2>,false>{};
{double _n_j_6597=0.0;
for(;d::truth((_n_j_6597<this->_n_CC_6496));(void)((_n_j_6597++))){d::check_cancel();{double _n_i_6598=0.0;
for(;d::truth((_n_i_6598<this->_n_CC_6496));(void)((_n_i_6598++))){d::check_cancel();(void)(_n_pts_6596.push(std::array<double,2>{(((_n_i_6598+0.15)+(0.7*_n_rnd_6595()))*this->_n_CS_6497),(((_n_j_6597+0.15)+(0.7*_n_rnd_6595()))*this->_n_CS_6497)}));
}}
}}
{double _n_y_6599=0.0;
for(;d::truth((_n_y_6599<this->_n_CT_6495));(void)((_n_y_6599++))){d::check_cancel();{double _n_x_6600=0.0;
for(;d::truth((_n_x_6600<this->_n_CT_6495));(void)((_n_x_6600++))){d::check_cancel();double _n_f1_6601=1000000000.0;
double _n_f2_6602=1000000000.0;
for(auto &&_n_item_6887:_n_pts_6596){d::check_cancel();auto _n_binding_6888=_n_item_6887;
double _n_px_6603=d::at(_n_binding_6888,0.0);
double _n_py_6604=d::at(_n_binding_6888,1.0);
{
{double _n_oy_6605=(-d::number(this->_n_CT_6495));
for(;d::truth((_n_oy_6605<=this->_n_CT_6495));(void)((_n_oy_6605=(_n_oy_6605+this->_n_CT_6495)))){d::check_cancel();{double _n_ox_6606=(-d::number(this->_n_CT_6495));
for(;d::truth((_n_ox_6606<=this->_n_CT_6495));(void)((_n_ox_6606=(_n_ox_6606+this->_n_CT_6495)))){d::check_cancel();double _n_dx_6607=(((_n_x_6600+0.5)-_n_px_6603)-_n_ox_6606);
double _n_dy_6608=(((_n_y_6599+0.5)-_n_py_6604)-_n_oy_6605);
double _n_d_6609=std::sqrt(((_n_dx_6607*_n_dx_6607)+(_n_dy_6608*_n_dy_6608)));
if(d::truth((_n_d_6609<_n_f1_6601))){d::check_cancel();(void)(((_n_f2_6602=_n_f1_6601),(_n_f1_6601=_n_d_6609)));
}else {d::check_cancel();if(d::truth((_n_d_6609<_n_f2_6602))){d::check_cancel();(void)((_n_f2_6602=_n_d_6609));
}
}
}}
}}

}
}
(void)(([&](){auto&& _n_array_6889=this->_n_caus_6498;auto _n_index_6890=((_n_y_6599*this->_n_CT_6495)+_n_x_6600);auto _n_value_6891=([&](){auto _n_argument_6892=(1.0-_n_smooth_6487(0.0,(0.42*this->_n_CS_6497),(_n_f2_6602-_n_f1_6601)));auto _n_argument_6893=2.2;return std::pow(_n_argument_6892,_n_argument_6893);})();d::put(_n_array_6889,_n_index_6890,_n_value_6891);return _n_value_6891;})());
}}
}}

}
this->_n_wr_6500=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_wg_6501=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_wb_6502=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_rayAt_6503=d::Array<uint16_t,true>(size_t(this->_n_N_6492));
this->_n_SUNY_6504=(-d::number(12.0));
this->_n_RAYS_6505=320.0;
{double _n_r_6622=0.0;
for(;d::truth((_n_r_6622<_n_H_6471));(void)((_n_r_6622++))){d::check_cancel();{double _n_x_6623=0.0;
for(;d::truth((_n_x_6623<_n_W_6470));(void)((_n_x_6623++))){d::check_cancel();double _n_k_6624=((_n_r_6622*_n_W_6470)+_n_x_6623);
double _n_v_6625=((_n_r_6622+0.5)/_n_H_6471);
double _n_up_6626=std::pow((1.0-_n_v_6625),2.2);
double _n_sun_6627=std::exp(((-d::number(std::pow(((_n_x_6623-_n_SUNX_6474)/52.0),2.0)))-std::pow(((_n_r_6622-4.0)/34.0),2.0)));
double _n_haze_6628=([&](){auto _n_left_6894=std::exp((-d::number(std::pow(((_n_r_6622-54.0)/15.0),2.0))));auto _n_right_6895=(1.0-(0.6*([&](){auto _n_argument_6896=30.0;auto _n_argument_6897=100.0;auto _n_argument_6898=std::fabs((_n_x_6623-112.0));return _n_smooth_6487(_n_argument_6896,_n_argument_6897,_n_argument_6898);})()));return (_n_left_6894*_n_right_6895);})();
double _n_edge_6629=([&](){auto _n_left_6899=(1.0-([&](){auto _n_left_6901=(0.4*([&](){auto _n_argument_6903=50.0;auto _n_argument_6904=104.0;auto _n_argument_6905=std::fabs((_n_x_6623-112.0));return _n_smooth_6487(_n_argument_6903,_n_argument_6904,_n_argument_6905);})());auto _n_right_6902=_n_smooth_6487(8.0,70.0,_n_r_6622);return (_n_left_6901*_n_right_6902);})());auto _n_right_6900=(0.3*_n_smooth_6487(66.0,100.0,_n_r_6622));return (_n_left_6899-_n_right_6900);})();
double _n_veil_6630=(0.78+(0.44*_n_fbm_6485(((_n_x_6623*0.022)+5.0),(_n_r_6622*0.04),4.0)));
(void)(([&](){auto&& _n_array_6906=this->_n_wr_6500;auto _n_index_6907=_n_k_6624;auto _n_value_6908=(((((0.012+(0.09*_n_up_6626))+(0.05*_n_sun_6627))+(0.04*_n_haze_6628))*_n_edge_6629)*_n_veil_6630);d::put(_n_array_6906,_n_index_6907,_n_value_6908);return _n_value_6908;})());
(void)(([&](){auto&& _n_array_6909=this->_n_wg_6501;auto _n_index_6910=_n_k_6624;auto _n_value_6911=(((((0.1+(0.32*_n_up_6626))+(0.14*_n_sun_6627))+(0.15*_n_haze_6628))*_n_edge_6629)*_n_veil_6630);d::put(_n_array_6909,_n_index_6910,_n_value_6911);return _n_value_6911;})());
(void)(([&](){auto&& _n_array_6912=this->_n_wb_6502;auto _n_index_6913=_n_k_6624;auto _n_value_6914=(((((0.15+(0.27*_n_up_6626))+(0.12*_n_sun_6627))+(0.17*_n_haze_6628))*_n_edge_6629)*_n_veil_6630);d::put(_n_array_6912,_n_index_6913,_n_value_6914);return _n_value_6914;})());
double _n_a_6631=std::atan2(((_n_x_6623+0.5)-_n_SUNX_6474),((_n_r_6622+0.5)-this->_n_SUNY_6504));
(void)(([&](){auto&& _n_array_6915=this->_n_rayAt_6503;auto _n_index_6916=_n_k_6624;auto _n_value_6917=([&](){auto _n_argument_6918=0.0;auto _n_argument_6919=([&](){auto _n_argument_6920=(this->_n_RAYS_6505-1.0);auto _n_argument_6921=d::round(((_n_a_6631+1.6)*100.0));return d::minimum({_n_argument_6920,_n_argument_6921});})();return d::maximum({_n_argument_6918,_n_argument_6919});})();d::put(_n_array_6915,_n_index_6916,_n_value_6917);return _n_value_6917;})());
}}
}}
this->_n_RAY0_6506=160.0;
this->_n_mat_6507=d::Array<uint8_t,true>(size_t(this->_n_N_6492));
this->_n_ar_6508=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_ag_6509=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_ab_6510=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_fog_6511=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_cu_6512=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_cv_6513=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_cw_6514=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_leftTop_6516=[=]( double _a0) mutable ->double{double _n_x_6633=_a0;
return ([&](){auto _n_left_6922=([&](){auto _n_left_6924=(47.0+(56.0*this->_n_dome_6515(d::minimum({1.0,(_n_x_6633/86.0)}))));auto _n_right_6925=(8.0*_n_fbm_6485((_n_x_6633*0.06),3.1,4.0));return (_n_left_6924-_n_right_6925);})();auto _n_right_6923=(3.0*d::maximum({0.0,((10.0-_n_x_6633)/10.0)}));return (_n_left_6922+_n_right_6923);})();};
this->_n_rightTop_6517=[=]( double _a0) mutable ->double{double _n_x_6634=_a0;
return ([&](){auto _n_left_6926=([&](){auto _n_left_6928=(69.0+(34.0*this->_n_dome_6515(d::minimum({1.0,((196.0-_n_x_6634)/48.0)}))));auto _n_right_6929=(5.0*_n_fbm_6485((_n_x_6634*0.08),8.3,3.0));return (_n_left_6928-_n_right_6929);})();auto _n_right_6927=(3.0*std::exp((-d::number(std::pow(((_n_x_6634-191.0)/6.0),2.0)))));return (_n_left_6926-_n_right_6927);})();};
this->_n_domes_6519=d::map(d::Array<d::Array<double,false>,false>{d::Array<double,false>{16.0,3.0,7.0,0.0},d::Array<double,false>{41.0,2.5,6.5,1.0},d::Array<double,false>{53.0,2.0,4.5,3.0},d::Array<double,false>{65.0,2.0,5.0,2.0},d::Array<double,false>{158.0,2.0,4.0,2.0},d::Array<double,false>{186.0,3.0,5.0,1.0},d::Array<double,false>{196.0,3.0,4.5,3.0}},[&]( d::Array<double,false> _a0) mutable ->std::array<double,4>{auto _n_binding_6930=_a0;
double _n_x_6636=d::at(_n_binding_6930,0.0);
double _n_d_6637=d::at(_n_binding_6930,1.0);
double _n_r_6638=d::at(_n_binding_6930,2.0);
double _n_kind_6639=d::at(_n_binding_6930,3.0);
return std::array<double,4>{_n_x_6636,((d::truth((_n_x_6636<100.0))?this->_n_leftTop_6516(_n_x_6636):this->_n_rightTop_6517(_n_x_6636))+_n_d_6637),_n_r_6638,_n_kind_6639};});
this->_n_coral_6520=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.86,0.36,0.44},d::Array<double,false>{0.93,0.55,0.3},d::Array<double,false>{0.6,0.36,0.72},d::Array<double,false>{0.78,0.7,0.35}};
this->_n_rock_6521=d::Array<double,false>{0.016,0.03,0.042};
this->_n_BOMMIES_6522=d::Array<d::Array<double,false>,false>{d::Array<double,false>{114.0,69.0,9.0,0.18,0.0},d::Array<double,false>{94.0,63.6,4.0,0.5,2.0},d::Array<double,false>{139.0,64.4,4.0,0.42,1.0}};
this->_n_FAN_C_6523=d::Array<double,false>{167.0,(this->_n_rightTop_6517(167.0)+1.5)};
this->_n_FAN_R_6524=27.0;
{double _n_r_6640=0.0;
for(;d::truth((_n_r_6640<_n_H_6471));(void)((_n_r_6640++))){d::check_cancel();{double _n_x_6641=0.0;
for(;d::truth((_n_x_6641<_n_W_6470));(void)((_n_x_6641++))){d::check_cancel();double _n_k_6642=((_n_r_6640*_n_W_6470)+_n_x_6641);
double _n_y_6643=(_n_r_6640+0.5);
if(d::truth((_n_r_6640>=(_n_HZ_6473+2.0)))){d::check_cancel();double _n_d_6644=(_n_y_6643-_n_HZ_6473);
double _n_z_6645=(300.0/_n_d_6644);
double _n_near_6646=(0.4+(0.6*(_n_d_6644/38.0)));
double _n_sx_6647=(((_n_x_6641+0.5)-100.0)/_n_near_6646);
double _n_sy_6648=(30.0*std::log(_n_d_6644));
double _n_aa_6649=_n_smooth_6487(2.2,1.4,(30.0/_n_d_6644));
double _n_ph_6650=((_n_sy_6648+(7.0*_n_fbm_6485((_n_sx_6647*0.07),(_n_sy_6648*0.06),2.0)))+(_n_sx_6647*0.05));
double _n_crest_6651=([&](){auto _n_left_6931=([&](){auto _n_argument_6933=(0.5+(0.5*std::sin(_n_ph_6650)));auto _n_argument_6934=3.0;return std::pow(_n_argument_6933,_n_argument_6934);})();auto _n_right_6932=([&](){auto _n_argument_6935=0.3;auto _n_argument_6936=0.6;auto _n_argument_6937=_n_fbm_6485(((_n_sx_6647*0.09)+7.0),(_n_sy_6648*0.12),2.0);return _n_smooth_6487(_n_argument_6935,_n_argument_6936,_n_argument_6937);})();return (_n_left_6931*_n_right_6932);})();
double _n_rip_6652=((0.74+(_n_aa_6649*((0.5*_n_crest_6651)-0.12)))+(0.12*(_n_fbm_6485((_n_sx_6647*0.08),(_n_sy_6648*0.15),3.0)-0.5)));
(void)(([&](){auto&& _n_array_6938=this->_n_mat_6507;auto _n_index_6939=_n_k_6642;auto _n_value_6940=_n_SAND_6479;d::put(_n_array_6938,_n_index_6939,_n_value_6940);return _n_value_6940;})());
double _n_lit_6653=([&](){auto _n_left_6941=(0.6+(0.15*_n_smooth_6487(100.0,130.0,_n_x_6641)));auto _n_right_6942=(0.3*_n_smooth_6487(84.0,100.0,_n_r_6640));return (_n_left_6941-_n_right_6942);})();
(void)(((([&](){auto&& _n_array_6943=this->_n_ar_6508;auto _n_index_6944=_n_k_6642;auto _n_value_6945=((0.38*_n_rip_6652)*_n_lit_6653);d::put(_n_array_6943,_n_index_6944,_n_value_6945);return _n_value_6945;})(),([&](){auto&& _n_array_6946=this->_n_ag_6509;auto _n_index_6947=_n_k_6642;auto _n_value_6948=((0.37*_n_rip_6652)*_n_lit_6653);d::put(_n_array_6946,_n_index_6947,_n_value_6948);return _n_value_6948;})()),([&](){auto&& _n_array_6949=this->_n_ab_6510;auto _n_index_6950=_n_k_6642;auto _n_value_6951=((0.3*_n_rip_6652)*_n_lit_6653);d::put(_n_array_6949,_n_index_6950,_n_value_6951);return _n_value_6951;})()));
(void)(([&](){auto&& _n_array_6952=this->_n_fog_6511;auto _n_index_6953=_n_k_6642;auto _n_value_6954=(1.0-std::exp(((-d::number(_n_z_6645))/40.0)));d::put(_n_array_6952,_n_index_6953,_n_value_6954);return _n_value_6954;})());
(void)(((([&](){auto&& _n_array_6955=this->_n_cu_6512;auto _n_index_6956=_n_k_6642;auto _n_value_6957=(_n_sx_6647*0.9);d::put(_n_array_6955,_n_index_6956,_n_value_6957);return _n_value_6957;})(),([&](){auto&& _n_array_6958=this->_n_cv_6513;auto _n_index_6959=_n_k_6642;auto _n_value_6960=(_n_sy_6648*2.3);d::put(_n_array_6958,_n_index_6959,_n_value_6960);return _n_value_6960;})()),([&](){auto&& _n_array_6961=this->_n_cw_6514;auto _n_index_6962=_n_k_6642;auto _n_value_6963=(0.5*_n_smooth_6487(14.0,26.0,_n_d_6644));d::put(_n_array_6961,_n_index_6962,_n_value_6963);return _n_value_6963;})()));
}
if((d::truth((_n_y_6643>=this->_n_farTop_6518(_n_x_6641)))&&d::truth((_n_r_6640<(_n_HZ_6473+6.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_6964=this->_n_mat_6507;auto _n_index_6965=_n_k_6642;auto _n_value_6966=_n_FAR_6481;d::put(_n_array_6964,_n_index_6965,_n_value_6966);return _n_value_6966;})());
double _n_s_6654=([&](){auto _n_left_6967=(0.45+(0.55*_n_fbm_6485((_n_x_6641*0.15),(_n_y_6643*0.15),2.0)));auto _n_right_6968=(0.5+(0.8*std::exp(((-d::number((_n_y_6643-this->_n_farTop_6518(_n_x_6641))))/2.0))));return (_n_left_6967*_n_right_6968);})();
(void)(((([&](){auto&& _n_array_6969=this->_n_ar_6508;auto _n_index_6970=_n_k_6642;auto _n_value_6971=(0.06*_n_s_6654);d::put(_n_array_6969,_n_index_6970,_n_value_6971);return _n_value_6971;})(),([&](){auto&& _n_array_6972=this->_n_ag_6509;auto _n_index_6973=_n_k_6642;auto _n_value_6974=(0.11*_n_s_6654);d::put(_n_array_6972,_n_index_6973,_n_value_6974);return _n_value_6974;})()),([&](){auto&& _n_array_6975=this->_n_ab_6510;auto _n_index_6976=_n_k_6642;auto _n_value_6977=(0.14*_n_s_6654);d::put(_n_array_6975,_n_index_6976,_n_value_6977);return _n_value_6977;})()));
(void)(([&](){auto&& _n_array_6978=this->_n_fog_6511;auto _n_index_6979=_n_k_6642;auto _n_value_6980=0.68;d::put(_n_array_6978,_n_index_6979,_n_value_6980);return _n_value_6980;})());
(void)(([&](){auto&& _n_array_6981=this->_n_cw_6514;auto _n_index_6982=_n_k_6642;auto _n_value_6983=0.0;d::put(_n_array_6981,_n_index_6982,_n_value_6983);return _n_value_6983;})());
}
{
double _n_dx_6655=((_n_x_6641+0.5)-d::at(this->_n_FAN_C_6523,0.0));
double _n_dy_6656=(d::at(this->_n_FAN_C_6523,1.0)-_n_y_6643);
double _n_d_6657=d::hypot(std::initializer_list<double>{_n_dx_6655,_n_dy_6656});
double _n_a_6658=std::atan2(_n_dx_6655,_n_dy_6656);
double _n_reach_6659=(this->_n_FAN_R_6524*(0.68+(0.36*_n_fbm_6485(((_n_a_6658*2.6)+5.0),1.0,3.0))));
if(((d::truth((_n_dy_6656>(-d::number(1.0))))&&d::truth((std::fabs(_n_a_6658)<1.2)))&&d::truth((_n_d_6657<_n_reach_6659)))){d::check_cancel();double _n_aw_6660=(_n_a_6658+((0.08*(_n_fbm_6485((_n_d_6657*0.2),(_n_a_6658*2.0),2.0)-0.5))*4.0));
double _n_ray_6661=std::fabs((d::mod((((_n_aw_6660*7.5)/ascii::PI)+100.0),1.0)-0.5));
double _n_ring_6662=std::fabs((d::mod(((_n_d_6657/3.2)+100.0),1.0)-0.5));
bool _n_mesh_6663=(_n_hash_6483((_n_x_6641*3.0),(_n_r_6640*5.0))<0.08);
bool _n_vein_6664=([&]()->bool{auto _n_logical_6984=([&]()->bool{auto _n_logical_6985=([&]()->bool{auto _n_logical_6987=([&]()->bool{auto _n_logical_6988=(_n_ray_6661>0.42);return d::truth(_n_logical_6988)?_n_logical_6988:([&]()->bool{auto _n_logical_6989=(_n_ring_6662>0.45);return d::truth(_n_logical_6989)?(_n_d_6657>5.0):_n_logical_6989;})();})();return d::truth(_n_logical_6987)?_n_logical_6987:_n_mesh_6663;})();return d::truth(_n_logical_6985)?_n_logical_6985:([&]()->bool{auto _n_logical_6986=(_n_d_6657<4.0);return d::truth(_n_logical_6986)?(std::fabs(_n_dx_6655)<1.2):_n_logical_6986;})();})();return d::truth(_n_logical_6984)?_n_logical_6984:(_n_d_6657>(_n_reach_6659-1.2));})();
(void)(([&](){auto&& _n_array_6990=this->_n_mat_6507;auto _n_index_6991=_n_k_6642;auto _n_value_6992=_n_FAN_6482;d::put(_n_array_6990,_n_index_6991,_n_value_6992);return _n_value_6992;})());
double _n_o_6665=_n_smooth_6487(2.0,_n_reach_6659,_n_d_6657);
double _n_s_6666=((0.35+(0.75*_n_o_6665))*(d::truth(_n_vein_6664)?1.0:0.22));
(void)(((([&](){auto&& _n_array_6993=this->_n_ar_6508;auto _n_index_6994=_n_k_6642;auto _n_value_6995=(_n_mix_6488(0.32,0.72,_n_o_6665)*_n_s_6666);d::put(_n_array_6993,_n_index_6994,_n_value_6995);return _n_value_6995;})(),([&](){auto&& _n_array_6996=this->_n_ag_6509;auto _n_index_6997=_n_k_6642;auto _n_value_6998=(_n_mix_6488(0.12,0.38,_n_o_6665)*_n_s_6666);d::put(_n_array_6996,_n_index_6997,_n_value_6998);return _n_value_6998;})()),([&](){auto&& _n_array_6999=this->_n_ab_6510;auto _n_index_7000=_n_k_6642;auto _n_value_7001=(_n_mix_6488(0.38,0.8,_n_o_6665)*_n_s_6666);d::put(_n_array_6999,_n_index_7000,_n_value_7001);return _n_value_7001;})()));
(void)(([&](){auto&& _n_array_7002=this->_n_fog_6511;auto _n_index_7003=_n_k_6642;auto _n_value_7004=(d::truth(_n_vein_6664)?0.2:0.4);d::put(_n_array_7002,_n_index_7003,_n_value_7004);return _n_value_7004;})());
(void)(([&](){auto&& _n_array_7005=this->_n_cw_6514;auto _n_index_7006=_n_k_6642;auto _n_value_7007=0.0;d::put(_n_array_7005,_n_index_7006,_n_value_7007);return _n_value_7007;})());
}

}
for(auto &&_n_item_7008:this->_n_BOMMIES_6522){d::check_cancel();auto _n_binding_7009=_n_item_7008;
double _n_bx_6667=d::at(_n_binding_7009,0.0);
double _n_crest_6668=d::at(_n_binding_7009,1.0);
double _n_hw_6669=d::at(_n_binding_7009,2.0);
double _n_f0_6670=d::at(_n_binding_7009,3.0);
double _n_kind_6671=d::at(_n_binding_7009,4.0);
{
double _n_u_6672=(((_n_x_6641+0.5)-_n_bx_6667)/_n_hw_6669);
double _n_top_6673=((_n_crest_6668+(((((_n_u_6672*_n_u_6672)*_n_u_6672)*_n_u_6672)*_n_hw_6669)*0.5))-(1.6*_n_fbm_6485((_n_x_6641*0.35),_n_crest_6668,2.0)));
if(((d::truth((std::fabs(_n_u_6672)<1.1))&&d::truth((_n_y_6643>=_n_top_6673)))&&d::truth((_n_y_6643<(((_n_crest_6668+(_n_hw_6669*0.5))+(1.5*_n_fbm_6485((_n_x_6641*0.3),(_n_crest_6668+5.0),2.0)))-((0.6*_n_u_6672)*_n_u_6672)))))){d::check_cancel();(void)(([&](){auto&& _n_array_7010=this->_n_mat_6507;auto _n_index_7011=_n_k_6642;auto _n_value_7012=_n_REEF_6480;d::put(_n_array_7010,_n_index_7011,_n_value_7012);return _n_value_7012;})());
double _n_below_6674=(_n_y_6643-_n_top_6673);
double _n_living_6675=([&](){auto _n_left_7013=_n_smooth_6487(2.2,0.6,_n_below_6674);auto _n_right_7014=([&](){auto _n_argument_7015=0.45;auto _n_argument_7016=0.6;auto _n_argument_7017=_n_fbm_6485(((_n_x_6641*0.25)+_n_bx_6667),(_n_y_6643*0.3),2.0);return _n_smooth_6487(_n_argument_7015,_n_argument_7016,_n_argument_7017);})();return (_n_left_7013*_n_right_7014);})();
double _n_lit_6676=(0.3+(0.6*std::exp(((-d::number(_n_below_6674))/1.5))));
auto _n_binding_7018=d::at(this->_n_coral_6520,_n_kind_6671);
double _n_cr0_6677=d::at(_n_binding_7018,0.0);
double _n_cg0_6678=d::at(_n_binding_7018,1.0);
double _n_cb0_6679=d::at(_n_binding_7018,2.0);
(void)(([&](){auto&& _n_array_7019=this->_n_ar_6508;auto _n_index_7020=_n_k_6642;auto _n_value_7021=(_n_mix_6488(d::at(this->_n_rock_6521,0.0),_n_cr0_6677,_n_living_6675)*_n_lit_6676);d::put(_n_array_7019,_n_index_7020,_n_value_7021);return _n_value_7021;})());
(void)(([&](){auto&& _n_array_7022=this->_n_ag_6509;auto _n_index_7023=_n_k_6642;auto _n_value_7024=(_n_mix_6488(d::at(this->_n_rock_6521,1.0),_n_cg0_6678,_n_living_6675)*_n_lit_6676);d::put(_n_array_7022,_n_index_7023,_n_value_7024);return _n_value_7024;})());
(void)(([&](){auto&& _n_array_7025=this->_n_ab_6510;auto _n_index_7026=_n_k_6642;auto _n_value_7027=(_n_mix_6488(d::at(this->_n_rock_6521,2.0),_n_cb0_6679,_n_living_6675)*_n_lit_6676);d::put(_n_array_7025,_n_index_7026,_n_value_7027);return _n_value_7027;})());
(void)(([&](){auto&& _n_array_7028=this->_n_fog_6511;auto _n_index_7029=_n_k_6642;auto _n_value_7030=_n_f0_6670;d::put(_n_array_7028,_n_index_7029,_n_value_7030);return _n_value_7030;})());
(void)(((([&](){auto&& _n_array_7031=this->_n_cu_6512;auto _n_index_7032=_n_k_6642;auto _n_value_7033=(_n_x_6641*0.5);d::put(_n_array_7031,_n_index_7032,_n_value_7033);return _n_value_7033;})(),([&](){auto&& _n_array_7034=this->_n_cv_6513;auto _n_index_7035=_n_k_6642;auto _n_value_7036=(_n_y_6643*0.9);d::put(_n_array_7034,_n_index_7035,_n_value_7036);return _n_value_7036;})()),([&](){auto&& _n_array_7037=this->_n_cw_6514;auto _n_index_7038=_n_k_6642;auto _n_value_7039=(0.5*std::exp(((-d::number(_n_below_6674))/1.5)));d::put(_n_array_7037,_n_index_7038,_n_value_7039);return _n_value_7039;})()));
}

}
}
double _n_tl_6680=this->_n_leftTop_6516(_n_x_6641);
double _n_tr_6681=this->_n_rightTop_6517(_n_x_6641);
double _n_top_6682=(d::truth((_n_x_6641<100.0))?_n_tl_6680:_n_tr_6681);
if((d::truth((_n_y_6643>=_n_top_6682))&&d::truth(([&]()->bool{auto _n_logical_7040=(_n_x_6641<87.0);return d::truth(_n_logical_7040)?_n_logical_7040:(_n_x_6641>147.0);})()))){d::check_cancel();(void)(([&](){auto&& _n_array_7041=this->_n_mat_6507;auto _n_index_7042=_n_k_6642;auto _n_value_7043=_n_REEF_6480;d::put(_n_array_7041,_n_index_7042,_n_value_7043);return _n_value_7043;})());
double _n_below_6683=(_n_y_6643-_n_top_6682);
double _n_n_6684=_n_fbm_6485((_n_x_6641*0.18),(_n_y_6643*0.22),4.0);
double _n_lump_6685=_n_fbm_6485((_n_x_6641*0.07),(_n_y_6643*0.1),3.0);
double _n_lumpUp_6686=_n_fbm_6485((_n_x_6641*0.07),((_n_y_6643-1.5)*0.1),3.0);
double _n_face_6687=_n_clamp_6486((0.5+((_n_lumpUp_6686-_n_lump_6685)*14.0)));
double _n_lit_6688=([&](){auto _n_left_7044=(((0.25+(0.5*_n_face_6687))+(0.6*std::exp(((-d::number(_n_below_6683))/5.0))))+(0.14*(_n_n_6684-0.5)));auto _n_right_7045=(0.55+(0.45*_n_smooth_6487(100.0,40.0,_n_r_6640)));return (_n_left_7044*_n_right_7045);})();
double _n_kind_6689=d::mod(std::floor((_n_fbm_6485(((_n_x_6641*0.06)+11.0),(_n_y_6643*0.09),3.0)*7.0)),4.0);
double _n_patch_6690=_n_fbm_6485(((_n_x_6641*0.12)+4.0),(_n_y_6643*0.12),3.0);
double _n_living_6691=([&](){auto _n_argument_7046=([&](){auto _n_left_7047=_n_smooth_6487(0.44,0.56,_n_patch_6690);auto _n_right_7048=_n_smooth_6487(7.0,1.5,_n_below_6683);return (_n_left_7047*_n_right_7048);})();auto _n_argument_7049=([&](){auto _n_left_7050=(_n_smooth_6487(0.66,0.72,_n_patch_6690)*0.35);auto _n_right_7051=_n_smooth_6487(24.0,6.0,_n_below_6683);return (_n_left_7050*_n_right_7051);})();return d::maximum({_n_argument_7046,_n_argument_7049});})();
auto _n_binding_7052=d::at(this->_n_coral_6520,_n_kind_6689);
double _n_cr0_6692=d::at(_n_binding_7052,0.0);
double _n_cg0_6693=d::at(_n_binding_7052,1.0);
double _n_cb0_6694=d::at(_n_binding_7052,2.0);
double _n_rim_6695=(_n_smooth_6487(2.4,0.3,_n_below_6683)*0.6);
double _n_ledge_6696=(([&](){auto _n_left_7053=_n_smooth_6487(0.66,0.9,_n_face_6687);auto _n_right_7054=_n_smooth_6487(3.0,8.0,_n_below_6683);return (_n_left_7053*_n_right_7054);})()*0.55);
double _n_rr_6697=([&](){auto _n_argument_7055=_n_mix_6488(d::at(this->_n_rock_6521,0.0),0.05,_n_ledge_6696);auto _n_argument_7056=0.12;auto _n_argument_7057=_n_rim_6695;return _n_mix_6488(_n_argument_7055,_n_argument_7056,_n_argument_7057);})();
double _n_rg_6698=([&](){auto _n_argument_7058=_n_mix_6488(d::at(this->_n_rock_6521,1.0),0.11,_n_ledge_6696);auto _n_argument_7059=0.24;auto _n_argument_7060=_n_rim_6695;return _n_mix_6488(_n_argument_7058,_n_argument_7059,_n_argument_7060);})();
double _n_rb_6699=([&](){auto _n_argument_7061=_n_mix_6488(d::at(this->_n_rock_6521,2.0),0.13,_n_ledge_6696);auto _n_argument_7062=0.25;auto _n_argument_7063=_n_rim_6695;return _n_mix_6488(_n_argument_7061,_n_argument_7062,_n_argument_7063);})();
(void)(([&](){auto&& _n_array_7064=this->_n_ar_6508;auto _n_index_7065=_n_k_6642;auto _n_value_7066=(_n_mix_6488(_n_rr_6697,_n_cr0_6692,_n_living_6691)*_n_lit_6688);d::put(_n_array_7064,_n_index_7065,_n_value_7066);return _n_value_7066;})());
(void)(([&](){auto&& _n_array_7067=this->_n_ag_6509;auto _n_index_7068=_n_k_6642;auto _n_value_7069=(_n_mix_6488(_n_rg_6698,_n_cg0_6693,_n_living_6691)*_n_lit_6688);d::put(_n_array_7067,_n_index_7068,_n_value_7069);return _n_value_7069;})());
(void)(([&](){auto&& _n_array_7070=this->_n_ab_6510;auto _n_index_7071=_n_k_6642;auto _n_value_7072=(_n_mix_6488(_n_rb_6699,_n_cb0_6694,_n_living_6691)*_n_lit_6688);d::put(_n_array_7070,_n_index_7071,_n_value_7072);return _n_value_7072;})());
(void)(([&](){auto&& _n_array_7073=this->_n_fog_6511;auto _n_index_7074=_n_k_6642;auto _n_value_7075=(d::truth((_n_x_6641<100.0))?(0.04+(0.04*_n_smooth_6487(0.0,80.0,_n_x_6641))):0.08);d::put(_n_array_7073,_n_index_7074,_n_value_7075);return _n_value_7075;})());
(void)(((([&](){auto&& _n_array_7076=this->_n_cu_6512;auto _n_index_7077=_n_k_6642;auto _n_value_7078=(_n_x_6641*0.5);d::put(_n_array_7076,_n_index_7077,_n_value_7078);return _n_value_7078;})(),([&](){auto&& _n_array_7079=this->_n_cv_6513;auto _n_index_7080=_n_k_6642;auto _n_value_7081=(_n_y_6643*0.9);d::put(_n_array_7079,_n_index_7080,_n_value_7081);return _n_value_7081;})()),([&](){auto&& _n_array_7082=this->_n_cw_6514;auto _n_index_7083=_n_k_6642;auto _n_value_7084=(0.8*std::exp(((-d::number(_n_below_6683))/1.5)));d::put(_n_array_7082,_n_index_7083,_n_value_7084);return _n_value_7084;})()));
}
for(auto &&_n_item_7085:this->_n_domes_6519){d::check_cancel();auto _n_binding_7086=_n_item_7085;
double _n_dx0_6700=d::at(_n_binding_7086,0.0);
double _n_dy0_6701=d::at(_n_binding_7086,1.0);
double _n_dr_6702=d::at(_n_binding_7086,2.0);
double _n_kind_6703=d::at(_n_binding_7086,3.0);
{
double _n_dx_6704=((_n_x_6641+0.5)-_n_dx0_6700);
double _n_dy_6705=(_n_y_6643-_n_dy0_6701);
double _n_d_6706=d::hypot(std::initializer_list<double>{_n_dx_6704,(_n_dy_6705*1.25)});
if((d::truth((_n_d_6706<_n_dr_6702))&&d::truth((_n_dy_6705<(_n_dr_6702*0.3))))){d::check_cancel();(void)(([&](){auto&& _n_array_7087=this->_n_mat_6507;auto _n_index_7088=_n_k_6642;auto _n_value_7089=_n_REEF_6480;d::put(_n_array_7087,_n_index_7088,_n_value_7089);return _n_value_7089;})());
double _n_nz_6707=std::sqrt(d::maximum({0.0,(1.0-std::pow((_n_d_6706/_n_dr_6702),2.0))}));
double _n_lamb_6708=_n_clamp_6486((0.15+(0.85*(((_n_nz_6707*0.6)-((_n_dy_6705/_n_dr_6702)*0.55))+((_n_dx_6704/_n_dr_6702)*0.25)))));
double _n_groove_6709=(0.75+(0.25*std::sin(((_n_d_6706*2.4)+((2.0*_n_fbm_6485((_n_x_6641*0.3),(_n_y_6643*0.3),2.0))*3.0)))));
auto _n_binding_7090=d::at(this->_n_coral_6520,d::mod((_n_kind_6703+1.0),4.0));
double _n_cr0_6710=d::at(_n_binding_7090,0.0);
double _n_cg0_6711=d::at(_n_binding_7090,1.0);
double _n_cb0_6712=d::at(_n_binding_7090,2.0);
double _n_s_6713=((0.15+(0.9*_n_lamb_6708))*_n_groove_6709);
(void)(((([&](){auto&& _n_array_7091=this->_n_ar_6508;auto _n_index_7092=_n_k_6642;auto _n_value_7093=(_n_cr0_6710*_n_s_6713);d::put(_n_array_7091,_n_index_7092,_n_value_7093);return _n_value_7093;})(),([&](){auto&& _n_array_7094=this->_n_ag_6509;auto _n_index_7095=_n_k_6642;auto _n_value_7096=(_n_cg0_6711*_n_s_6713);d::put(_n_array_7094,_n_index_7095,_n_value_7096);return _n_value_7096;})()),([&](){auto&& _n_array_7097=this->_n_ab_6510;auto _n_index_7098=_n_k_6642;auto _n_value_7099=(_n_cb0_6712*_n_s_6713);d::put(_n_array_7097,_n_index_7098,_n_value_7099);return _n_value_7099;})()));
(void)(([&](){auto&& _n_array_7100=this->_n_fog_6511;auto _n_index_7101=_n_k_6642;auto _n_value_7102=(d::truth((_n_dx0_6700<100.0))?(0.04+(0.04*_n_smooth_6487(0.0,80.0,_n_dx0_6700))):0.08);d::put(_n_array_7100,_n_index_7101,_n_value_7102);return _n_value_7102;})());
(void)(((([&](){auto&& _n_array_7103=this->_n_cu_6512;auto _n_index_7104=_n_k_6642;auto _n_value_7105=(_n_x_6641*0.5);d::put(_n_array_7103,_n_index_7104,_n_value_7105);return _n_value_7105;})(),([&](){auto&& _n_array_7106=this->_n_cv_6513;auto _n_index_7107=_n_k_6642;auto _n_value_7108=(_n_y_6643*0.9);d::put(_n_array_7106,_n_index_7107,_n_value_7108);return _n_value_7108;})()),([&](){auto&& _n_array_7109=this->_n_cw_6514;auto _n_index_7110=_n_k_6642;auto _n_value_7111=(0.5*_n_clamp_6486((((-d::number(_n_dy_6705))/_n_dr_6702)+0.6)));d::put(_n_array_7109,_n_index_7110,_n_value_7111);return _n_value_7111;})()));
}

}
}
}}
}}
for(auto &&_n_item_7112:d::Array<std::shared_ptr<std::tuple<double,double,double,double,std::function<double(double)>>>,false>{std::make_shared<std::tuple<double,double,double,double,std::function<double(double)>>>(31.0,10.0,3.0,60.0,this->_n_leftTop_6516),std::make_shared<std::tuple<double,double,double,double,std::function<double(double)>>>(53.0,3.0,178.0,20.0,this->_n_rightTop_6517)}){d::check_cancel();auto _n_binding_7113=_n_item_7112;
double _n_seed_6714=std::get<0>(*_n_binding_7113);
double _n_count_6715=std::get<1>(*_n_binding_7113);
double _n_x0_6716=std::get<2>(*_n_binding_7113);
double _n_span_6717=std::get<3>(*_n_binding_7113);
std::function<double(double)> _n_topAt_6718=std::get<4>(*_n_binding_7113);
{
std::function<double()> _n_rnd_6720=_n_prng_6490(_n_seed_6714);
{double _n_i_6721=0.0;
for(;d::truth((_n_i_6721<_n_count_6715));(void)((_n_i_6721++))){d::check_cancel();double _n_bx_6722=(_n_x0_6716+(_n_rnd_6720()*_n_span_6717));
if(d::truth((std::fabs((_n_bx_6722-d::at(this->_n_FAN_C_6523,0.0)))<3.0))){d::check_cancel();continue;
}
double _n_base_6723=_n_topAt_6718(_n_bx_6722);
double _n_h_6724=(2.0+(_n_rnd_6720()*3.5));
double _n_lean_6725=((_n_rnd_6720()-0.5)*0.5);
double _n_kind_6726=(d::truth((_n_rnd_6720()<0.5))?1.0:3.0);
{double _n_s_6727=0.0;
for(;d::truth((_n_s_6727<_n_h_6724));(void)((_n_s_6727=(_n_s_6727+0.5)))){d::check_cancel();double _n_x_6728=d::round(((_n_bx_6722+(_n_lean_6725*_n_s_6727))+(d::truth((_n_s_6727>(_n_h_6724*0.55)))?(((d::truth(d::mod(_n_i_6721,2.0))?1.0:(-d::number(1.0)))*(_n_s_6727-(_n_h_6724*0.55)))*0.6):0.0)));
double _n_r_6729=d::round((_n_base_6723-_n_s_6727));
if(((d::truth((_n_x_6728<0.0))||d::truth((_n_x_6728>=_n_W_6470)))||d::truth((_n_r_6729<0.0)))){d::check_cancel();continue;
}
double _n_k_6730=((_n_r_6729*_n_W_6470)+_n_x_6728);
(void)(([&](){auto&& _n_array_7114=this->_n_mat_6507;auto _n_index_7115=_n_k_6730;auto _n_value_7116=_n_REEF_6480;d::put(_n_array_7114,_n_index_7115,_n_value_7116);return _n_value_7116;})());
double _n_tip_6731=(_n_s_6727/_n_h_6724);
auto _n_binding_7117=d::at(this->_n_coral_6520,_n_kind_6726);
double _n_cr0_6732=d::at(_n_binding_7117,0.0);
double _n_cg0_6733=d::at(_n_binding_7117,1.0);
double _n_cb0_6734=d::at(_n_binding_7117,2.0);
double _n_sh_6735=(0.4+(0.6*_n_tip_6731));
(void)(((([&](){auto&& _n_array_7118=this->_n_ar_6508;auto _n_index_7119=_n_k_6730;auto _n_value_7120=(_n_cr0_6732*_n_sh_6735);d::put(_n_array_7118,_n_index_7119,_n_value_7120);return _n_value_7120;})(),([&](){auto&& _n_array_7121=this->_n_ag_6509;auto _n_index_7122=_n_k_6730;auto _n_value_7123=(_n_cg0_6733*_n_sh_6735);d::put(_n_array_7121,_n_index_7122,_n_value_7123);return _n_value_7123;})()),([&](){auto&& _n_array_7124=this->_n_ab_6510;auto _n_index_7125=_n_k_6730;auto _n_value_7126=(_n_cb0_6734*_n_sh_6735);d::put(_n_array_7124,_n_index_7125,_n_value_7126);return _n_value_7126;})()));
(void)(([&](){auto&& _n_array_7127=this->_n_fog_6511;auto _n_index_7128=_n_k_6730;auto _n_value_7129=0.06;d::put(_n_array_7127,_n_index_7128,_n_value_7129);return _n_value_7129;})());
(void)(((([&](){auto&& _n_array_7130=this->_n_cu_6512;auto _n_index_7131=_n_k_6730;auto _n_value_7132=(_n_x_6728*0.5);d::put(_n_array_7130,_n_index_7131,_n_value_7132);return _n_value_7132;})(),([&](){auto&& _n_array_7133=this->_n_cv_6513;auto _n_index_7134=_n_k_6730;auto _n_value_7135=(_n_r_6729*0.9);d::put(_n_array_7133,_n_index_7134,_n_value_7135);return _n_value_7135;})()),([&](){auto&& _n_array_7136=this->_n_cw_6514;auto _n_index_7137=_n_k_6730;auto _n_value_7138=0.4;d::put(_n_array_7136,_n_index_7137,_n_value_7138);return _n_value_7138;})()));
}}
}}

}
}
this->_n_br_6525=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_bg_6526=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_bb_6527=d::Array<float,true>(size_t(this->_n_N_6492));
{double _n_k_6736=0.0;
for(;d::truth((_n_k_6736<this->_n_N_6492));(void)((_n_k_6736++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_6507,_n_k_6736)==_n_NONE_6478))){d::check_cancel();(void)(((([&](){auto&& _n_array_7139=this->_n_br_6525;auto _n_index_7140=_n_k_6736;auto _n_value_7141=d::at(this->_n_wr_6500,_n_k_6736);d::put(_n_array_7139,_n_index_7140,_n_value_7141);return _n_value_7141;})(),([&](){auto&& _n_array_7142=this->_n_bg_6526;auto _n_index_7143=_n_k_6736;auto _n_value_7144=d::at(this->_n_wg_6501,_n_k_6736);d::put(_n_array_7142,_n_index_7143,_n_value_7144);return _n_value_7144;})()),([&](){auto&& _n_array_7145=this->_n_bb_6527;auto _n_index_7146=_n_k_6736;auto _n_value_7147=d::at(this->_n_wb_6502,_n_k_6736);d::put(_n_array_7145,_n_index_7146,_n_value_7147);return _n_value_7147;})()));
continue;
}
double _n_f_6737=d::at(this->_n_fog_6511,_n_k_6736);
double _n_tint_6738=(1.0-_n_f_6737);
double _n_ex_6739=1.9;
(void)(([&](){auto&& _n_array_7148=this->_n_br_6525;auto _n_index_7149=_n_k_6736;auto _n_value_7150=_n_mix_6488(((d::at(this->_n_ar_6508,_n_k_6736)*_n_ex_6739)*(0.55+(0.45*_n_tint_6738))),d::at(this->_n_wr_6500,_n_k_6736),_n_f_6737);d::put(_n_array_7148,_n_index_7149,_n_value_7150);return _n_value_7150;})());
(void)(([&](){auto&& _n_array_7151=this->_n_bg_6526;auto _n_index_7152=_n_k_6736;auto _n_value_7153=_n_mix_6488(((d::at(this->_n_ag_6509,_n_k_6736)*_n_ex_6739)*(0.85+(0.15*_n_tint_6738))),d::at(this->_n_wg_6501,_n_k_6736),_n_f_6737);d::put(_n_array_7151,_n_index_7152,_n_value_7153);return _n_value_7153;})());
(void)(([&](){auto&& _n_array_7154=this->_n_bb_6527;auto _n_index_7155=_n_k_6736;auto _n_value_7156=_n_mix_6488((d::at(this->_n_ab_6510,_n_k_6736)*_n_ex_6739),d::at(this->_n_wb_6502,_n_k_6736),_n_f_6737);d::put(_n_array_7154,_n_index_7155,_n_value_7156);return _n_value_7156;})());
}}
this->_n_rnd_6528=_n_prng_6490(1234.0);
this->_n_fish_6530=d::Array<std::shared_ptr<_n_Record_6531>,false>{};
{double _n_i_6742=0.0;
for(;d::truth((_n_i_6742<150.0));(void)((_n_i_6742++))){d::check_cancel();(void)(this->_n_fish_6530.push(([&](){auto _n_object_7158=std::make_shared<_n_Record_6531>();_n_object_7158->_p_a=(this->_n_gauss_6529()*10.0);_n_object_7158->_p_b=(this->_n_gauss_6529()*3.8);_n_object_7158->_p_ph=(this->_n_rnd_6528()*6.28);_n_object_7158->_p_sp=(0.8+(this->_n_rnd_6528()*0.6));return _n_object_7158;})()));
}}
this->_n_kelp_6532=d::Array<std::shared_ptr<_n_Record_6533>,false>{};
for(auto &&_n_item_7159:d::Array<d::Array<double,false>,false>{d::Array<double,false>{14.0,100.0,96.0,3.5,0.0,0.0},d::Array<double,false>{189.0,100.0,96.0,3.5,5.2,0.0}}){d::check_cancel();auto _n_binding_7160=_n_item_7159;
double _n_bx_6743=d::at(_n_binding_7160,0.0);
double _n_base_6744=d::at(_n_binding_7160,1.0);
double _n_len_6745=d::at(_n_binding_7160,2.0);
double _n_sz_6746=d::at(_n_binding_7160,3.0);
double _n_ph_6747=d::at(_n_binding_7160,4.0);
double _n_haze_6748=d::at(_n_binding_7160,5.0);
(void)(this->_n_kelp_6532.push(([&](){auto _n_object_7162=std::make_shared<_n_Record_6533>();_n_object_7162->_p_bx=_n_bx_6743;_n_object_7162->_p_base=_n_base_6744;_n_object_7162->_p_len=_n_len_6745;_n_object_7162->_p_sz=_n_sz_6746;_n_object_7162->_p_ph=_n_ph_6747;_n_object_7162->_p_haze=_n_haze_6748;return _n_object_7162;})()));
}
this->_n_streams_6534=d::Array<d::Array<double,false>,false>{d::Array<double,false>{44.0,52.0,8.0},d::Array<double,false>{168.0,66.0,7.0},d::Array<double,false>{116.0,96.0,6.0}};
this->_n_bubbles_6535=d::Array<std::shared_ptr<_n_Record_6536>,false>{};
for(auto &&_n_item_7163:this->_n_streams_6534){d::check_cancel();auto _n_binding_7164=_n_item_7163;
double _n_x0_6749=d::at(_n_binding_7164,0.0);
double _n_y0_6750=d::at(_n_binding_7164,1.0);
double _n_n_6751=d::at(_n_binding_7164,2.0);
{double _n_i_6752=0.0;
for(;d::truth((_n_i_6752<_n_n_6751));(void)((_n_i_6752++))){d::check_cancel();(void)(this->_n_bubbles_6535.push(([&](){auto _n_object_7166=std::make_shared<_n_Record_6536>();_n_object_7166->_p_x0=_n_x0_6749;_n_object_7166->_p_y0=_n_y0_6750;_n_object_7166->_p_ph=this->_n_rnd_6528();_n_object_7166->_p_sp=(4.0+(this->_n_rnd_6528()*3.0));_n_object_7166->_p_w=(this->_n_rnd_6528()*6.28);return _n_object_7166;})()));
}}
}
this->_n_snow_6537=d::Array<std::shared_ptr<_n_Record_6538>,false>{};
{double _n_i_6753=0.0;
for(;d::truth((_n_i_6753<90.0));(void)((_n_i_6753++))){d::check_cancel();(void)(this->_n_snow_6537.push(([&](){auto _n_object_7168=std::make_shared<_n_Record_6538>();_n_object_7168->_p_x=(this->_n_rnd_6528()*_n_W_6470);_n_object_7168->_p_y=(this->_n_rnd_6528()*_n_H_6471);_n_object_7168->_p_sp=(0.3+(this->_n_rnd_6528()*0.7));_n_object_7168->_p_ph=(this->_n_rnd_6528()*6.28);_n_object_7168->_p_b=(0.12+(this->_n_rnd_6528()*0.22));return _n_object_7168;})()));
}}
this->_n_cr_6539=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_cg_6540=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_cb_6541=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_floor_6542=d::Array<float,true>(size_t(this->_n_N_6492));
this->_n_rays_6543=d::Array<float,true>(size_t(this->_n_RAYS_6505));
this->_n_out_6544=d::Array<d::String,false>(size_t(this->_n_N_6492));
_render=[=]( double _a0,std::shared_ptr<_n_Record_6879> _a1) mutable ->d::String{double _n_t_6767=_a0;
auto _n_binding_7171=(d::present(_a1)?_a1:([&](){auto _n_object_7170=std::make_shared<_n_Record_6879>();return _n_object_7170;})());
std::optional<d::Array<uint8_t,true>> _n_color_6768=_n_binding_7171->_p_color;
{
{double _n_u_6769=0.0;
for(;d::truth((_n_u_6769<this->_n_RAYS_6505));(void)((_n_u_6769++))){d::check_cancel();double _n_s_6770=([&](){auto _n_argument_7172=([&](){auto _n_argument_7173=0.5;auto _n_argument_7174=0.62;auto _n_argument_7175=_n_fbm_6485(((_n_u_6769*0.06)+(_n_t_6767*0.025)),3.3,3.0);return _n_smooth_6487(_n_argument_7173,_n_argument_7174,_n_argument_7175);})();auto _n_argument_7176=1.2;return std::pow(_n_argument_7172,_n_argument_7176);})();
double _n_shimmer_6771=(0.6+(0.4*_n_noise_6484(((_n_u_6769*0.18)-(_n_t_6767*0.7)),(_n_t_6767*0.3))));
(void)(([&](){auto&& _n_array_7177=this->_n_rays_6543;auto _n_index_7178=_n_u_6769;auto _n_value_7179=((_n_s_6770*_n_shimmer_6771)*(0.35+(0.65*std::exp((-d::number(std::pow(((_n_u_6769-this->_n_RAY0_6506)/60.0),2.0)))))));d::put(_n_array_7177,_n_index_7178,_n_value_7179);return _n_value_7179;})());
}}
double _n_cx0_6772=(_n_t_6767*0.9);
double _n_cy0_6773=(_n_t_6767*0.35);
double _n_cx1_6774=(((-d::number(_n_t_6767))*0.6)+21.0);
double _n_cy1_6775=((_n_t_6767*0.5)+9.0);
double _n_hx_6776=([&](){auto _n_left_7180=(_n_SUNX_6474+(1.6*std::sin((_n_t_6767*0.6))));auto _n_right_7181=(0.8*std::sin(((_n_t_6767*1.7)+1.0)));return (_n_left_7180+_n_right_7181);})();
{double _n_r_6777=0.0;
for(;d::truth((_n_r_6777<_n_H_6471));(void)((_n_r_6777++))){d::check_cancel();double _n_y_6778=(_n_r_6777+0.5);
double _n_depthFade_6779=([&](){auto _n_left_7182=std::exp(((-d::number(_n_r_6777))/30.0));auto _n_right_7183=_n_smooth_6487(0.0,14.0,(_n_r_6777+6.0));return (_n_left_7182*_n_right_7183);})();
{double _n_x_6780=0.0;
for(;d::truth((_n_x_6780<_n_W_6470));(void)((_n_x_6780++))){d::check_cancel();double _n_k_6781=((_n_r_6777*_n_W_6470)+_n_x_6780);
double _n_R_6782=d::at(this->_n_br_6525,_n_k_6781);
double _n_G_6783=d::at(this->_n_bg_6526,_n_k_6781);
double _n_B_6784=d::at(this->_n_bb_6527,_n_k_6781);
double _n_m_6785=d::at(this->_n_mat_6507,_n_k_6781);
double _n_ray_6786=(d::at(this->_n_rays_6543,d::at(this->_n_rayAt_6503,_n_k_6781))*_n_depthFade_6779);
if(d::truth((_n_m_6785==_n_NONE_6478))){d::check_cancel();if(d::truth((_n_r_6777<(_n_SURF_6472+6.0)))){d::check_cancel();double _n_dist_6787=((_n_SURF_6472+7.0)-_n_y_6778);
double _n_q_6788=(30.0/_n_dist_6787);
double _n_a_6789=this->_n_causAt_6499(((((_n_x_6780-100.0)/_n_dist_6787)*1.6)+(_n_t_6767*1.6)),((_n_q_6788*6.0)+(_n_t_6767*0.8)));
double _n_b2_6790=this->_n_causAt_6499((((((_n_x_6780-100.0)/_n_dist_6787)*1.2)-(_n_t_6767*1.1))+31.0),(((_n_q_6788*4.5)-(_n_t_6767*0.6))+17.0));
double _n_lit_6791=([&](){auto _n_argument_7184=_n_smooth_6487((_n_SURF_6472+6.0),0.0,_n_y_6778);auto _n_argument_7185=1.3;return std::pow(_n_argument_7184,_n_argument_7185);})();
double _n_c_6792=([&](){auto _n_argument_7186=d::maximum({_n_a_6789,_n_b2_6790});auto _n_argument_7187=1.6;return std::pow(_n_argument_7186,_n_argument_7187);})();
double _n_near_6793=std::exp((-d::number(std::pow(((_n_x_6780-_n_hx_6776)/34.0),2.0))));
double _n_dim_6794=(1.0-((_n_lit_6791*0.7)*(1.0-_n_c_6792)));
(void)((((_n_R_6782=(_n_R_6782*_n_dim_6794)),(_n_G_6783=(_n_G_6783*_n_dim_6794))),(_n_B_6784=(_n_B_6784*_n_dim_6794))));
double _n_v_6795=((_n_lit_6791*_n_c_6792)*(0.1+(0.42*_n_near_6793)));
double _n_dx_6796=((_n_x_6780+0.5)-_n_hx_6776);
double _n_hot_6797=(std::exp(((-d::number(std::pow((_n_dx_6796/8.0),2.0)))-std::pow(((_n_y_6778-6.0)/3.6),2.0)))*(1.0+(0.3*_n_c_6792)));
double _n_halo_6798=((std::exp(((-d::number(std::pow((_n_dx_6796/15.0),2.0)))-std::pow(((_n_y_6778-6.0)/7.0),2.0)))*0.3)*(0.6+(0.6*_n_c_6792)));
(void)((_n_R_6782=(_n_R_6782+(((0.55*_n_v_6795)+(0.9*_n_hot_6797))+(0.35*_n_halo_6798)))));
(void)((_n_G_6783=(_n_G_6783+(((0.85*_n_v_6795)+(1.0*_n_hot_6797))+(0.6*_n_halo_6798)))));
(void)((_n_B_6784=(_n_B_6784+(((0.8*_n_v_6795)+(0.97*_n_hot_6797))+(0.58*_n_halo_6798)))));
}
(void)((((_n_R_6782=(_n_R_6782+(0.42*_n_ray_6786))),(_n_G_6783=(_n_G_6783+(0.86*_n_ray_6786)))),(_n_B_6784=(_n_B_6784+(0.78*_n_ray_6786)))));
(void)(([&](){auto&& _n_array_7188=this->_n_floor_6542;auto _n_index_7189=_n_k_6781;auto _n_value_7190=0.0;d::put(_n_array_7188,_n_index_7189,_n_value_7190);return _n_value_7190;})());
}else {d::check_cancel();double _n_f_6799=d::at(this->_n_fog_6511,_n_k_6781);
if(d::truth((d::at(this->_n_cw_6514,_n_k_6781)>0.0))){d::check_cancel();double _n_c_6800=([&](){auto _n_left_7191=(([&](){auto _n_argument_7193=this->_n_causAt_6499((d::at(this->_n_cu_6512,_n_k_6781)+_n_cx0_6772),(d::at(this->_n_cv_6513,_n_k_6781)+_n_cy0_6773));auto _n_argument_7194=1.0;return d::minimum({_n_argument_7193,_n_argument_7194});})()*0.6);auto _n_right_7192=(this->_n_causAt_6499(((d::at(this->_n_cu_6512,_n_k_6781)*0.8)+_n_cx1_6774),((d::at(this->_n_cv_6513,_n_k_6781)*0.8)+_n_cy1_6775))*0.6);return (_n_left_7191+_n_right_7192);})();
double _n_s_6801=((((d::at(this->_n_cw_6514,_n_k_6781)*_n_c_6800)*_n_c_6800)*(1.0-_n_f_6799))*((0.6+(0.6*_n_ray_6786))+(0.3*_n_depthFade_6779)));
if(d::truth((_n_m_6785==_n_SAND_6479))){d::check_cancel();(void)((((_n_R_6782=(_n_R_6782+(0.62*_n_s_6801))),(_n_G_6783=(_n_G_6783+(0.66*_n_s_6801)))),(_n_B_6784=(_n_B_6784+(0.5*_n_s_6801)))));
}else {d::check_cancel();(void)((((_n_R_6782=(_n_R_6782+(0.55*_n_s_6801))),(_n_G_6783=(_n_G_6783+(0.72*_n_s_6801)))),(_n_B_6784=(_n_B_6784+(0.62*_n_s_6801)))));
}
}
(void)((((_n_R_6782=(_n_R_6782+((0.16*_n_ray_6786)*_n_f_6799))),(_n_G_6783=(_n_G_6783+((0.3*_n_ray_6786)*_n_f_6799)))),(_n_B_6784=(_n_B_6784+((0.28*_n_ray_6786)*_n_f_6799)))));
(void)(([&](){auto&& _n_array_7195=this->_n_floor_6542;auto _n_index_7196=_n_k_6781;auto _n_value_7197=0.02;d::put(_n_array_7195,_n_index_7196,_n_value_7197);return _n_value_7197;})());
}
(void)(((([&](){auto&& _n_array_7198=this->_n_cr_6539;auto _n_index_7199=_n_k_6781;auto _n_value_7200=_n_R_6782;d::put(_n_array_7198,_n_index_7199,_n_value_7200);return _n_value_7200;})(),([&](){auto&& _n_array_7201=this->_n_cg_6540;auto _n_index_7202=_n_k_6781;auto _n_value_7203=_n_G_6783;d::put(_n_array_7201,_n_index_7202,_n_value_7203);return _n_value_7203;})()),([&](){auto&& _n_array_7204=this->_n_cb_6541;auto _n_index_7205=_n_k_6781;auto _n_value_7206=_n_B_6784;d::put(_n_array_7204,_n_index_7205,_n_value_7206);return _n_value_7206;})()));
}}
}}
auto _n_pathX_6802=[&]( double _a0) mutable ->double{double _n_s_6803=_a0;
return (95.0+(24.0*std::sin(((0.11*_n_s_6803)+0.4))));};
auto _n_pathY_6804=[&]( double _a0) mutable ->double{double _n_s_6805=_a0;
return (44.0+(8.0*std::sin(((0.17*_n_s_6805)+2.2))));};
for(auto &&_n_item_7207:this->_n_fish_6530){d::check_cancel();std::shared_ptr<_n_Record_6531> _n_f_6806=_n_item_7207;
{
double _n_s_6807=(_n_t_6767-(_n_f_6806->_p_a*0.08));
double _n_vx_6808=((24.0*0.11)*std::cos(((0.11*_n_s_6807)+0.4)));
double _n_vy_6809=((8.0*0.17)*std::cos(((0.17*_n_s_6807)+2.2)));
double _n_th_6810=std::atan2(_n_vy_6809,_n_vx_6808);
double _n_ct_6811=std::cos(_n_th_6810);
double _n_st_6812=std::sin(_n_th_6810);
double _n_wob_6813=std::sin((((_n_t_6767*1.3)*_n_f_6806->_p_sp)+_n_f_6806->_p_ph));
double _n_px_6814=(((_n_pathX_6802(_n_s_6807)+(_n_f_6806->_p_a*_n_ct_6811))-(_n_f_6806->_p_b*_n_st_6812))+(_n_wob_6813*0.6));
double _n_py_6815=([&](){auto _n_left_7208=((_n_pathY_6804(_n_s_6807)+(_n_f_6806->_p_a*_n_st_6812))+(_n_f_6806->_p_b*_n_ct_6811));auto _n_right_7209=(std::cos(((_n_t_6767*_n_f_6806->_p_sp)+_n_f_6806->_p_ph))*0.4);return (_n_left_7208+_n_right_7209);})();
double _n_h_6816=(_n_th_6810+(0.15*_n_wob_6813));
double _n_dx_6817=std::cos(_n_h_6816);
double _n_dy_6818=std::sin(_n_h_6816);
double _n_flash_6819=([&](){auto _n_argument_7210=0.72;auto _n_argument_7211=0.97;auto _n_argument_7212=std::fabs(std::sin((((((_n_th_6810*1.6)+(_n_f_6806->_p_a*0.35))+(_n_f_6806->_p_b*0.4))-(_n_t_6767*0.5))+0.6)));return _n_smooth_6487(_n_argument_7210,_n_argument_7211,_n_argument_7212);})();
double _n_R0_6820=_n_mix_6488(0.008,0.85,_n_flash_6819);
double _n_G0_6821=_n_mix_6488(0.018,0.97,_n_flash_6819);
double _n_B0_6822=_n_mix_6488(0.026,1.0,_n_flash_6819);
{double _n_j_6823=0.0;
for(;d::truth((_n_j_6823<2.0));(void)((_n_j_6823++))){d::check_cancel();double _n_gx_6824=d::round((_n_px_6814-((_n_dx_6817*_n_j_6823)*0.9)));
double _n_gy_6825=d::round((_n_py_6815-((_n_dy_6818*_n_j_6823)*0.9)));
(void)(this->_n_put_6546(_n_gx_6824,_n_gy_6825,_n_R0_6820,_n_G0_6821,_n_B0_6822,(d::truth((_n_j_6823==0.0))?1.0:0.85)));
}}

}
}
for(auto &&_n_item_7213:this->_n_kelp_6532){d::check_cancel();std::shared_ptr<_n_Record_6533> _n_kp_6826=_n_item_7213;
{
auto _n_binding_7214=_n_kp_6826;
double _n_bx_6827=_n_binding_7214->_p_bx;
double _n_base_6828=_n_binding_7214->_p_base;
double _n_len_6829=_n_binding_7214->_p_len;
double _n_sz_6830=_n_binding_7214->_p_sz;
double _n_ph_6831=_n_binding_7214->_p_ph;
double _n_haze_6832=_n_binding_7214->_p_haze;
double _n_side_6833=(d::truth((_n_bx_6827<100.0))?1.0:(-d::number(1.0)));
{double _n_r_6834=(_n_base_6828-1.0);
for(;d::truth((_n_r_6834>=(_n_base_6828-_n_len_6829)));(void)((_n_r_6834--))){d::check_cancel();if(d::truth((_n_r_6834<0.0))){d::check_cancel();break;
}
double _n_s01_6835=((_n_base_6828-_n_r_6834)/_n_len_6829);
double _n_lean_6836=((((_n_side_6833*2.5)*_n_sz_6830)*_n_s01_6835)*_n_s01_6835);
double _n_bend_6837=(([&](){auto _n_left_7215=([&](){auto _n_left_7217=((std::sin((((_n_t_6767*0.55)+_n_ph_6831)-(_n_s01_6835*4.2)))*2.2)*_n_sz_6830);auto _n_right_7218=std::pow(_n_s01_6835,1.2);return (_n_left_7217*_n_right_7218);})();auto _n_right_7216=((std::sin(((_n_t_6767*0.21)+_n_ph_6831))*1.5)*_n_s01_6835);return (_n_left_7215+_n_right_7216);})()+_n_lean_6836);
double _n_x_6838=(_n_bx_6827+_n_bend_6837);
double _n_stem_6839=(0.8+((0.4*_n_sz_6830)*(1.0-_n_s01_6835)));
double _n_beat_6840=(((_n_s01_6835*_n_len_6829)*0.32)+_n_ph_6831);
double _n_lobeL_6841=(((([&](){auto _n_argument_7219=([&](){auto _n_argument_7220=0.0;auto _n_argument_7221=std::sin(_n_beat_6840);return d::maximum({_n_argument_7220,_n_argument_7221});})();auto _n_argument_7222=1.2;return std::pow(_n_argument_7219,_n_argument_7222);})()*_n_sz_6830)*2.3)*(1.0-(0.35*_n_s01_6835)));
double _n_lobeR_6842=(((([&](){auto _n_argument_7223=([&](){auto _n_argument_7224=0.0;auto _n_argument_7225=(-d::number(std::sin(_n_beat_6840)));return d::maximum({_n_argument_7224,_n_argument_7225});})();auto _n_argument_7226=1.2;return std::pow(_n_argument_7223,_n_argument_7226);})()*_n_sz_6830)*2.3)*(1.0-(0.35*_n_s01_6835)));
double _n_drag_6843=((std::cos((((_n_t_6767*0.55)+_n_ph_6831)-(_n_s01_6835*4.2)))*0.8)*_n_sz_6830);
double _n_x0_6844=(((_n_x_6838-_n_stem_6839)-_n_lobeL_6841)+d::minimum({0.0,_n_drag_6843}));
double _n_x1_6845=(((_n_x_6838+_n_stem_6839)+_n_lobeR_6842)+d::maximum({0.0,_n_drag_6843}));
double _n_ray_6846=([&](){auto _n_left_7227=d::at(this->_n_rays_6543,d::at(this->_n_rayAt_6503,((_n_r_6834*_n_W_6470)+([&](){auto _n_argument_7229=0.0;auto _n_argument_7230=([&](){auto _n_argument_7231=(_n_W_6470-1.0);auto _n_argument_7232=d::round(_n_x_6838);return d::minimum({_n_argument_7231,_n_argument_7232});})();return d::maximum({_n_argument_7229,_n_argument_7230});})())));auto _n_right_7228=std::exp(((-d::number(_n_r_6834))/30.0));return (_n_left_7227*_n_right_7228);})();
double _n_lit_6847=_n_smooth_6487(0.3,0.6,_n_ray_6846);
double _n_xa_6848=d::round(_n_x0_6844);
double _n_xb_6849=d::round(_n_x1_6845);
{double _n_xx_6850=_n_xa_6848;
for(;d::truth((_n_xx_6850<=_n_xb_6849));(void)((_n_xx_6850++))){d::check_cancel();if((d::truth((_n_xx_6850<0.0))||d::truth((_n_xx_6850>=_n_W_6470)))){d::check_cancel();continue;
}
double _n_k_6851=((_n_r_6834*_n_W_6470)+_n_xx_6850);
bool _n_sun_6852=(d::truth((_n_side_6833>0.0))?(_n_xx_6850==_n_xb_6849):(_n_xx_6850==_n_xa_6848));
bool _n_rim_6853=([&]()->bool{auto _n_logical_7233=(_n_xx_6850==_n_xa_6848);return d::truth(_n_logical_7233)?_n_logical_7233:(_n_xx_6850==_n_xb_6849);})();
double _n_blade_6854=(d::truth((std::fabs((_n_xx_6850-_n_x_6838))>_n_stem_6839))?1.0:0.0);
double _n_through_6855=([&](){auto _n_left_7234=((_n_blade_6854*0.12)*([&](){auto _n_argument_7236=0.0;auto _n_argument_7237=1.0;auto _n_argument_7238=(std::fabs((_n_xx_6850-_n_x_6838))-_n_stem_6839);return _n_smooth_6487(_n_argument_7236,_n_argument_7237,_n_argument_7238);})());auto _n_right_7235=(0.5+(0.5*_n_hash_6483((_n_xx_6850*7.0),(_n_r_6834*3.0))));return (_n_left_7234*_n_right_7235);})();
double _n_g_6856=(((0.02+_n_through_6855)+(d::truth(_n_rim_6853)?0.16:0.0))+(d::truth(_n_sun_6852)?(0.34+((0.66*_n_lit_6847)*(0.4+(0.6*_n_blade_6854)))):0.0));
(void)(([&](){auto _n_argument_7239=_n_xx_6850;auto _n_argument_7240=_n_r_6834;auto _n_argument_7241=_n_mix_6488((0.62*_n_g_6856),d::at(this->_n_wr_6500,_n_k_6851),_n_haze_6832);auto _n_argument_7242=_n_mix_6488((0.58*_n_g_6856),d::at(this->_n_wg_6501,_n_k_6851),_n_haze_6832);auto _n_argument_7243=_n_mix_6488((0.18*_n_g_6856),d::at(this->_n_wb_6502,_n_k_6851),_n_haze_6832);auto _n_argument_7244=1.0;return this->_n_put_6546(_n_argument_7239,_n_argument_7240,_n_argument_7241,_n_argument_7242,_n_argument_7243,_n_argument_7244);})());
(void)(([&](){auto&& _n_array_7245=this->_n_floor_6542;auto _n_index_7246=_n_k_6851;auto _n_value_7247=0.02;d::put(_n_array_7245,_n_index_7246,_n_value_7247);return _n_value_7247;})());
}}
}}

}
}
for(auto &&_n_item_7248:this->_n_bubbles_6535){d::check_cancel();std::shared_ptr<_n_Record_6536> _n_b_6857=_n_item_7248;
{
double _n_span_6858=(_n_b_6857->_p_y0-_n_SURF_6472);
double _n_p_6859=d::mod((((_n_t_6767*_n_b_6857->_p_sp)/_n_span_6858)+_n_b_6857->_p_ph),1.0);
double _n_y_6860=(_n_b_6857->_p_y0-(_n_p_6859*_n_span_6858));
double _n_x_6861=((_n_b_6857->_p_x0+(std::sin(((_n_y_6860*0.35)+_n_b_6857->_p_w))*1.2))+(_n_p_6859*3.0));
double _n_v_6862=(0.55+(0.45*_n_p_6859));
(void)(([&](){auto _n_argument_7249=d::round(_n_x_6861);auto _n_argument_7250=d::round(_n_y_6860);auto _n_argument_7251=(0.7*_n_v_6862);auto _n_argument_7252=(0.95*_n_v_6862);auto _n_argument_7253=(1.0*_n_v_6862);return this->_n_add_6545(_n_argument_7249,_n_argument_7250,_n_argument_7251,_n_argument_7252,_n_argument_7253);})());

}
}
for(auto &&_n_item_7254:this->_n_snow_6537){d::check_cancel();std::shared_ptr<_n_Record_6538> _n_s_6863=_n_item_7254;
{
double _n_x_6864=d::mod((d::mod(((_n_s_6863->_p_x+(_n_t_6767*_n_s_6863->_p_sp))+(2.0*std::sin(((_n_t_6767*0.3)+_n_s_6863->_p_ph)))),_n_W_6470)+_n_W_6470),_n_W_6470);
double _n_y_6865=d::mod((d::mod((_n_s_6863->_p_y+((_n_t_6767*_n_s_6863->_p_sp)*0.4)),_n_H_6471)+_n_H_6471),_n_H_6471);
(void)(([&](){auto _n_argument_7255=std::floor(_n_x_6864);auto _n_argument_7256=std::floor(_n_y_6865);auto _n_argument_7257=(_n_s_6863->_p_b*0.7);auto _n_argument_7258=(_n_s_6863->_p_b*0.9);auto _n_argument_7259=_n_s_6863->_p_b;return this->_n_add_6545(_n_argument_7255,_n_argument_7256,_n_argument_7257,_n_argument_7258,_n_argument_7259);})());

}
}
{double _n_r_6866=0.0;
for(;d::truth((_n_r_6866<_n_H_6471));(void)((_n_r_6866++))){d::check_cancel();{double _n_x_6867=0.0;
for(;d::truth((_n_x_6867<_n_W_6470));(void)((_n_x_6867++))){d::check_cancel();double _n_k_6868=((_n_r_6866*_n_W_6470)+_n_x_6867);
double _n_R_6869=d::at(this->_n_cr_6539,_n_k_6868);
double _n_G_6870=d::at(this->_n_cg_6540,_n_k_6868);
double _n_B_6871=d::at(this->_n_cb_6541,_n_k_6868);
double _n_peak_6872=d::maximum({_n_R_6869,_n_G_6870,_n_B_6871,0.0001});
double _n_level_6873=_n_clamp_6486((d::at(this->_n_floor_6542,_n_k_6868)+(((1.0-d::at(this->_n_floor_6542,_n_k_6868))*std::pow(_n_peak_6872,0.85))*0.95)));
double _n_step_6874=([&](){auto _n_argument_7260=0.0;auto _n_argument_7261=([&](){auto _n_argument_7262=3.0;auto _n_argument_7263=d::round(((_n_level_6873*3.0)+d::at(_n_BAYER_6477,((double(d::i32(_n_r_6866)&d::i32(3.0))*4.0)+double(d::i32(_n_x_6867)&d::i32(3.0))))));return d::minimum({_n_argument_7262,_n_argument_7263});})();return d::maximum({_n_argument_7260,_n_argument_7261});})();
(void)(([&](){auto&& _n_array_7264=this->_n_out_6544;auto _n_index_7265=_n_k_6868;auto _n_value_7266=d::at(_n_DOTS_6475,_n_step_6874);d::put(_n_array_7264,_n_index_7265,_n_value_7266);return _n_value_7266;})());
if(d::truth(_n_color_6768)){d::check_cancel();double _n_want_6875=(d::truth(_n_step_6874)?d::minimum({1.0,((_n_level_6873+0.06)/d::at(_n_COVER_6476,_n_step_6874))}):0.0);
double _n_s_6876=((0.3+(0.7*_n_want_6875))/_n_peak_6872);
(void)(([&](){auto&& _n_array_7267=d::read(_n_color_6768);auto _n_index_7268=_n_k_6868;auto _n_value_7269=([&](){auto _n_argument_7270=_n_clamp_6486((_n_R_6869*_n_s_6876));auto _n_argument_7271=_n_clamp_6486((_n_G_6870*_n_s_6876));auto _n_argument_7272=_n_clamp_6486((_n_B_6871*_n_s_6876));return this->_n_nearest_6494(_n_argument_7270,_n_argument_7271,_n_argument_7272);})();d::put(_n_array_7267,_n_index_7268,_n_value_7269);return _n_value_7269;})());
}
}}
}}
d::Array<d::String,false> _n_lines_6877=d::Array<d::String,false>{};
{double _n_r_6878=0.0;
for(;d::truth((_n_r_6878<_n_H_6471));(void)((_n_r_6878++))){d::check_cancel();(void)(_n_lines_6877.push(d::join(this->_n_out_6544.slice((_n_r_6878*_n_W_6470),((_n_r_6878+1.0)*_n_W_6470)),d::String(u""))));
}}
return d::join(_n_lines_6877,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("deep-reef").cols)*ascii::catalog_meta("deep-reef").rows);auto _env=std::make_shared<_n_Record_6879>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &deep_reef_meta(){return catalog_meta("deep-reef");}
std::unique_ptr<Piece> make_deep_reef(const AsciiPieceOptions &o){return std::make_unique<Native_deep_reef>(o);}
}
