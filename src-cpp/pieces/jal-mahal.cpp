// Direct, statically typed C++ from src/pieces/jal-mahal.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_14403;
struct _n_Record_14430;
struct _n_Record_14445;
struct _n_Record_14652;
struct _n_Record_14403{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_14403> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14403>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_14430{
std::function<double(double)> _p_top{};
d::Array<double,false> _p_tone{};
static std::shared_ptr<_n_Record_14430> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14430>();out->_p_top=d::decode<std::function<double(double)>>(j["top"]);out->_p_tone=d::decode<d::Array<double,false>>(j["tone"]);return out;}
};
struct _n_Record_14445{
double _p_x0{};
double _p_y0{};
double _p_v{};
double _p_ph{};
double _p_span{};
bool _p_low{};
static std::shared_ptr<_n_Record_14445> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14445>();out->_p_x0=d::decode<double>(j["x0"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_v=d::decode<double>(j["v"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_span=d::decode<double>(j["span"]);out->_p_low=d::decode<bool>(j["low"]);return out;}
};
struct _n_Record_14652{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14652> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14652>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_14411(double _a0,double _a1);
double _n_noise_14412(double _a0,double _a1,double _a2);
double _n_fbm_14413(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_14414(double _a0);
double _n_smooth_14415(double _a0,double _a1,double _a2);
double _n_mix_14416(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_14417(d::String _a0);
std::array<double,3> _n_skyAt_14418(double _a0);
std::shared_ptr<_n_Record_14403> _n_meta_14402=[](){return ([&](){auto _n_object_14655=std::make_shared<_n_Record_14403>();_n_object_14655->_p_name=d::String(u"jal mahal");_n_object_14655->_p_category=d::String(u"scenes");_n_object_14655->_p_note=d::String(u"the jaipur water palace floating on a misty lake at sunrise");_n_object_14655->_p_cols=200.0;_n_object_14655->_p_rows=100.0;_n_object_14655->_p_cell=1.0;_n_object_14655->_p_fps=15.0;_n_object_14655->_p_ground=d::String(u"#16141f");_n_object_14655->_p_palette=d::Array<d::String,false>{d::String(u"#3e4a6b"),d::String(u"#56628a"),d::String(u"#7180a6"),d::String(u"#8e9cc0"),d::String(u"#aab6d4"),d::String(u"#c6cfe3"),d::String(u"#e2e7f1"),d::String(u"#6b4a66"),d::String(u"#8a5f7c"),d::String(u"#a87891"),d::String(u"#c895a6"),d::String(u"#e2b4bd"),d::String(u"#f2d0d0"),d::String(u"#fff3d6"),d::String(u"#ffe3a6"),d::String(u"#f6c87a"),d::String(u"#e8a865"),d::String(u"#c98552"),d::String(u"#5a3e3a"),d::String(u"#7d5848"),d::String(u"#a47a5e"),d::String(u"#c99d78"),d::String(u"#e4c29c"),d::String(u"#2a2f45"),d::String(u"#3a3550"),d::String(u"#4d4660"),d::String(u"#4a3226"),d::String(u"#6e4a32"),d::String(u"#fbfaf7")};return _n_object_14655;})();}();
const double _n_W_14404=[](){return 200.0;}();
const double _n_H_14405=[](){return 100.0;}();
const double _n_WATER_14406=[](){return 62.0;}();
d::Array<double,false> _n_SUN_14407=[](){return d::Array<double,false>{148.0,30.0};}();
const d::String _n_DOTS_14408=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_14409=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_14410=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_14450=_a0;
return ((_n_v_14450/16.0)-0.47);});}();
double _n_hash_14411(double _a0,double _a1){double _n_x_14451=_a0;
double _n_y_14452=_a1;
{
double _n_h_14453=([&](){auto _n_left_14656=d::imul(double(d::i32(_n_x_14451)|d::i32(0.0)),374761393.0);auto _n_right_14657=d::imul(double(d::i32(_n_y_14452)|d::i32(0.0)),668265263.0);return (_n_left_14656+_n_right_14657);})();
(void)((_n_h_14453=d::imul(double(d::i32(_n_h_14453)^d::i32(double(d::u32(_n_h_14453)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_14453)^d::i32(double(d::u32(_n_h_14453)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_14412(double _a0,double _a1,double _a2){double _n_x_14454=_a0;
double _n_y_14455=_a1;
double _n_period_14456=_a2;
{
double _n_xi_14457=std::floor(_n_x_14454);
double _n_yi_14458=std::floor(_n_y_14455);
double _n_fx_14459=(_n_x_14454-_n_xi_14457);
double _n_fy_14460=(_n_y_14455-_n_yi_14458);
double _n_u_14461=((_n_fx_14459*_n_fx_14459)*(3.0-(2.0*_n_fx_14459)));
double _n_v_14462=((_n_fy_14460*_n_fy_14460)*(3.0-(2.0*_n_fy_14460)));
double _n_x0_14463=_n_xi_14457;
double _n_x1_14464=(_n_xi_14457+1.0);
if(d::truth(_n_period_14456)){d::check_cancel();(void)((_n_x0_14463=d::mod((d::mod(_n_xi_14457,_n_period_14456)+_n_period_14456),_n_period_14456)));
(void)((_n_x1_14464=d::mod((_n_x0_14463+1.0),_n_period_14456)));
}
double _n_a_14465=_n_hash_14411(_n_x0_14463,_n_yi_14458);
double _n_b_14466=_n_hash_14411(_n_x1_14464,_n_yi_14458);
double _n_c_14467=_n_hash_14411(_n_x0_14463,(_n_yi_14458+1.0));
double _n_d_14468=_n_hash_14411(_n_x1_14464,(_n_yi_14458+1.0));
return (((_n_a_14465+((_n_b_14466-_n_a_14465)*_n_u_14461))+((_n_c_14467-_n_a_14465)*_n_v_14462))+(((((_n_a_14465-_n_b_14466)-_n_c_14467)+_n_d_14468)*_n_u_14461)*_n_v_14462));

}
}

double _n_fbm_14413(double _a0,double _a1,double _a2,double _a3){double _n_x_14469=_a0;
double _n_y_14470=_a1;
double _n_octaves_14471=_a2;
double _n_period_14472=_a3;
{
double _n_s_14473=0.0;
double _n_n_14474=0.0;
double _n_amp_14475=0.5;
double _n_f_14476=1.0;
{double _n_i_14477=0.0;
for(;d::truth((_n_i_14477<_n_octaves_14471));(void)((_n_i_14477++))){d::check_cancel();(void)((_n_s_14473=(_n_s_14473+(_n_amp_14475*_n_noise_14412((_n_x_14469*_n_f_14476),(_n_y_14470*_n_f_14476),(_n_period_14472*_n_f_14476))))));
(void)((_n_n_14474=(_n_n_14474+_n_amp_14475)));
(void)((_n_amp_14475=(_n_amp_14475*0.5)));
(void)((_n_f_14476=(_n_f_14476*2.0)));
}}
return (_n_s_14473/_n_n_14474);

}
}

double _n_clamp_14414(double _a0){double _n_v_14478=_a0;
return (d::truth((_n_v_14478<0.0))?0.0:(d::truth((_n_v_14478>1.0))?1.0:_n_v_14478));}

double _n_smooth_14415(double _a0,double _a1,double _a2){double _n_a_14479=_a0;
double _n_b_14480=_a1;
double _n_v_14481=_a2;
{
double _n_k_14482=_n_clamp_14414(((_n_v_14481-_n_a_14479)/(_n_b_14480-_n_a_14479)));
return ((_n_k_14482*_n_k_14482)*(3.0-(2.0*_n_k_14482)));

}
}

double _n_mix_14416(double _a0,double _a1,double _a2){double _n_a_14483=_a0;
double _n_b_14484=_a1;
double _n_k_14485=_a2;
return (_n_a_14483+((_n_b_14484-_n_a_14483)*_n_k_14485));}

d::Array<double,false> _n_hex_14417(d::String _a0){d::String _n_s_14486=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_14487=_a0;
return (([&](){auto _n_argument_14658=d::slice(_n_s_14486,_n_i_14487,(_n_i_14487+2.0));auto _n_argument_14659=16.0;return d::parseInt(_n_argument_14658,_n_argument_14659);})()/255.0);});}

std::array<double,3> _n_skyAt_14418(double _a0){double _n_y_14488=_a0;
{
double _n_v_14489=_n_clamp_14414((_n_y_14488/_n_WATER_14406));
if(d::truth((_n_v_14489<0.45))){d::check_cancel();double _n_k_14490=_n_smooth_14415(0.0,0.45,_n_v_14489);
return std::array<double,3>{_n_mix_14416(0.4,0.86,_n_k_14490),_n_mix_14416(0.47,0.62,_n_k_14490),_n_mix_14416(0.68,0.68,_n_k_14490)};
}
double _n_k_14491=_n_smooth_14415(0.45,0.95,_n_v_14489);
return std::array<double,3>{_n_mix_14416(0.86,1.0,_n_k_14491),_n_mix_14416(0.62,0.84,_n_k_14491),_n_mix_14416(0.68,0.6,_n_k_14491)};

}
}

struct Native_jal_mahal final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_14419{};
double _n_N_14420{};
d::Array<d::String,false> _n_out_14421{};
d::Array<uint8_t,true> _n_lut_14422{};
d::Array<float,true> _n_SR_14424{};
d::Array<float,true> _n_SG_14425{};
d::Array<float,true> _n_SB_14426{};
d::Array<uint8_t,true> _n_solid_14427{};
d::Array<std::shared_ptr<_n_Record_14430>,false> _n_ridges_14429{};
d::Array<double,false> _n_STONE_14432{};
d::Array<double,false> _n_SHADE_14433{};
d::Array<double,false> _n_HOLE_14434{};
d::Array<double,false> _n_DOME_14435{};
double _n_L_14437{};
double _n_Rt_14438{};
double _n_ROOF_14439{};
double _n_MW_14441{};
d::Array<float,true> _n_mist_14442{};
d::Array<float,true> _n_band_14443{};
d::Array<std::shared_ptr<_n_Record_14445>,false> _n_birds_14444{};
d::Array<float,true> _n_FR_14446{};
d::Array<float,true> _n_FG_14447{};
d::Array<float,true> _n_FB_14448{};
std::function<d::String(double,std::shared_ptr<_n_Record_14652>)> _render;
double _n_nearest_14423(double _a0,double _a1,double _a2){double _n_r_14492=_a0;
double _n_g_14493=_a1;
double _n_b_14494=_a2;
{
double _n_k_14495=([&](){auto _n_left_14794=([&](){auto _n_left_14796=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_14492*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_14797=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_14493*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_14796)|d::i32(_n_right_14797));})();auto _n_right_14795=d::minimum({31.0,double(d::i32((_n_b_14494*31.99))|d::i32(0.0))});return double(d::i32(_n_left_14794)|d::i32(_n_right_14795));})();
if(d::truth((d::at(this->_n_lut_14422,_n_k_14495)!=255.0))){d::check_cancel();return d::at(this->_n_lut_14422,_n_k_14495);
}
double _n_best_14496=0.0;
double _n_bd_14497=1000000000.0;
{double _n_i_14498=0.0;
for(;d::truth((_n_i_14498<double(this->_n_P_14419.size())));(void)((_n_i_14498++))){d::check_cancel();double _n_dr_14499=(d::at(d::at(this->_n_P_14419,_n_i_14498),0.0)-_n_r_14492);
double _n_dg_14500=(d::at(d::at(this->_n_P_14419,_n_i_14498),1.0)-_n_g_14493);
double _n_db_14501=(d::at(d::at(this->_n_P_14419,_n_i_14498),2.0)-_n_b_14494);
double _n_d_14502=((((0.3*_n_dr_14499)*_n_dr_14499)+((0.5*_n_dg_14500)*_n_dg_14500))+((0.2*_n_db_14501)*_n_db_14501));
if(d::truth((_n_d_14502<_n_bd_14497))){d::check_cancel();(void)(((_n_bd_14497=_n_d_14502),(_n_best_14496=_n_i_14498)));
}
}}
return ([&](){auto&& _n_array_14798=this->_n_lut_14422;auto _n_index_14799=_n_k_14495;auto _n_value_14800=_n_best_14496;d::put(_n_array_14798,_n_index_14799,_n_value_14800);return _n_value_14800;})();

}
}

double _n_hump_14428(double _a0,double _a1,double _a2){double _n_x_14503=_a0;
double _n_c_14504=_a1;
double _n_w_14505=_a2;
return std::exp((-d::number(std::pow(((_n_x_14503-_n_c_14504)/_n_w_14505),2.0))));}

double _n_fortTop_14431(double _a0){double _n_x_14509=_a0;
{
if((d::truth((_n_x_14509<6.0))||d::truth((_n_x_14509>60.0)))){d::check_cancel();return 1000000000.0;
}
double _n_base_14510=d::at(this->_n_ridges_14429,0.0)->_p_top(_n_x_14509);
double _n_bastion_14511=(d::truth((std::fabs((d::mod((_n_x_14509-6.0),13.0)-6.5))>5.0))?3.0:1.6);
return (_n_base_14510-_n_bastion_14511);

}
}

void _n_paint_14436(double _a0,double _a1,d::Array<double,false> _a2,double _a3){double _n_x_14537=_a0;
double _n_r_14538=_a1;
d::Array<double,false> _n_c_14539=_a2;
double _n_s_14540=_a3;
{
if((((d::truth((_n_x_14537<0.0))||d::truth((_n_x_14537>=_n_W_14404)))||d::truth((_n_r_14538<0.0)))||d::truth((_n_r_14538>=_n_WATER_14406)))){d::check_cancel();return;
}
double _n_k_14541=((_n_r_14538*_n_W_14404)+_n_x_14537);
(void)(((([&](){auto&& _n_array_14801=this->_n_SR_14424;auto _n_index_14802=_n_k_14541;auto _n_value_14803=(d::at(_n_c_14539,0.0)*_n_s_14540);d::put(_n_array_14801,_n_index_14802,_n_value_14803);return _n_value_14803;})(),([&](){auto&& _n_array_14804=this->_n_SG_14425;auto _n_index_14805=_n_k_14541;auto _n_value_14806=(d::at(_n_c_14539,1.0)*_n_s_14540);d::put(_n_array_14804,_n_index_14805,_n_value_14806);return _n_value_14806;})()),([&](){auto&& _n_array_14807=this->_n_SB_14426;auto _n_index_14808=_n_k_14541;auto _n_value_14809=(d::at(_n_c_14539,2.0)*_n_s_14540);d::put(_n_array_14807,_n_index_14808,_n_value_14809);return _n_value_14809;})()));
(void)(([&](){auto&& _n_array_14810=this->_n_solid_14427;auto _n_index_14811=_n_k_14541;auto _n_value_14812=1.0;d::put(_n_array_14810,_n_index_14811,_n_value_14812);return _n_value_14812;})());

}
}

void _n_chhatri_14440(double _a0,double _a1,double _a2,double _a3){double _n_cx_14551=_a0;
double _n_base_14552=_a1;
double _n_sc_14553=_a2;
double _n_far_14554=_a3;
{
double _n_drumH_14555=(7.0*_n_sc_14553);
double _n_hw_14556=(3.6*_n_sc_14553);
double _n_eave_14557=(4.9*_n_sc_14553);
double _n_domeH_14558=(6.6*_n_sc_14553);
double _n_domeW_14559=(4.3*_n_sc_14553);
double _n_eaveY_14560=(_n_base_14552-_n_drumH_14555);
double _n_domeBase_14561=(_n_eaveY_14560-(1.2*_n_sc_14553));
{double _n_r_14562=std::floor(((_n_domeBase_14561-_n_domeH_14558)-(4.0*_n_sc_14553)));
for(;d::truth((_n_r_14562<std::ceil(_n_base_14552)));(void)((_n_r_14562++))){d::check_cancel();double _n_y_14563=(_n_r_14562+0.5);
{double _n_x_14564=std::floor(((_n_cx_14551-_n_eave_14557)-1.0));
for(;d::truth((_n_x_14564<=std::ceil(((_n_cx_14551+_n_eave_14557)+1.0))));(void)((_n_x_14564++))){d::check_cancel();double _n_dx_14565=((_n_x_14564+0.5)-_n_cx_14551);
std::optional<d::Array<double,false>> _n_c_14566=std::optional<d::Array<double,false>>{};
double _n_s_14567=1.0;
if(((d::truth((_n_y_14563>=_n_eaveY_14560))&&d::truth((_n_y_14563<_n_base_14552)))&&d::truth((std::fabs(_n_dx_14565)<=_n_hw_14556)))){d::check_cancel();double _n_face_14568=(d::truth((_n_dx_14565<((-d::number(_n_hw_14556))*0.45)))?0.72:(d::truth((_n_dx_14565>(_n_hw_14556*0.45)))?1.02:0.92));
(void)((d::read((_n_c_14566=std::optional<d::Array<double,false>>(this->_n_STONE_14432))),(_n_s_14567=_n_face_14568)));
bool _n_open_14569=([&]()->bool{auto _n_logical_14813=(std::fabs(_n_dx_14565)<((0.9*_n_sc_14553)+0.15));return d::truth(_n_logical_14813)?(_n_y_14563>((_n_eaveY_14560+(2.0*_n_sc_14553))+((_n_dx_14565*_n_dx_14565)*0.4))):_n_logical_14813;})();
if((d::truth(_n_open_14569)&&d::truth((_n_y_14563<(_n_base_14552-0.8))))){d::check_cancel();(void)((d::read((_n_c_14566=std::optional<d::Array<double,false>>(this->_n_HOLE_14434))),(_n_s_14567=1.0)));
}
if(d::truth((std::fabs((std::fabs(_n_dx_14565)-(_n_hw_14556*0.45)))<0.3))){d::check_cancel();(void)((_n_s_14567=(_n_s_14567*0.88)));
}
}else {d::check_cancel();if(((d::truth((_n_y_14563>=(_n_eaveY_14560-(1.2*_n_sc_14553))))&&d::truth((_n_y_14563<_n_eaveY_14560)))&&d::truth((std::fabs(_n_dx_14565)<=(_n_eave_14557-((_n_eaveY_14560-_n_y_14563)*0.6)))))){d::check_cancel();(void)((d::read((_n_c_14566=std::optional<d::Array<double,false>>(this->_n_DOME_14435))),(_n_s_14567=(0.9+(0.08*d::sign(_n_dx_14565))))));
}else {d::check_cancel();if((d::truth((_n_y_14563<_n_domeBase_14561))&&d::truth((_n_y_14563>=(_n_domeBase_14561-_n_domeH_14558))))){d::check_cancel();double _n_v_14570=((_n_domeBase_14561-_n_y_14563)/_n_domeH_14558);
double _n_w_14571=([&](){auto _n_left_14814=(_n_domeW_14559*std::sqrt(([&](){auto _n_argument_14816=0.0;auto _n_argument_14817=(1.0-std::pow(_n_v_14570,1.6));return d::maximum({_n_argument_14816,_n_argument_14817});})()));auto _n_right_14815=(0.88+(0.22*std::sin(((d::minimum({1.0,(_n_v_14570*2.2)})*ascii::PI)*0.5))));return (_n_left_14814*_n_right_14815);})();
if(d::truth((std::fabs(_n_dx_14565)<=_n_w_14571))){d::check_cancel();(void)((d::read((_n_c_14566=std::optional<d::Array<double,false>>(this->_n_DOME_14435))),(_n_s_14567=((0.78+((0.26*(_n_dx_14565/d::maximum({_n_w_14571,0.5})))*0.5))+(0.2*_n_v_14570)))));
}
}else {d::check_cancel();if(((d::truth((_n_y_14563<(_n_domeBase_14561-_n_domeH_14558)))&&d::truth((_n_y_14563>=((_n_domeBase_14561-_n_domeH_14558)-(3.4*_n_sc_14553)))))&&d::truth((std::fabs(_n_dx_14565)<0.55)))){d::check_cancel();(void)((d::read((_n_c_14566=d::Array<double,false>{0.98,0.82,0.5})),(_n_s_14567=1.0)));
}
}
}
}
if(d::truth((!d::truth(_n_c_14566)))){d::check_cancel();continue;
}
auto&& _n_sky_14572=_n_skyAt_14418(_n_y_14563);
(void)(([&](){auto _n_argument_14818=_n_x_14564;auto _n_argument_14819=_n_r_14562;auto _n_argument_14820=d::Array<double,false>{_n_mix_14416((d::at(d::read(_n_c_14566),0.0)*_n_s_14567),d::at(_n_sky_14572,0.0),_n_far_14554),_n_mix_14416((d::at(d::read(_n_c_14566),1.0)*_n_s_14567),d::at(_n_sky_14572,1.0),_n_far_14554),_n_mix_14416((d::at(d::read(_n_c_14566),2.0)*_n_s_14567),d::at(_n_sky_14572,2.0),_n_far_14554)};auto _n_argument_14821=1.0;return this->_n_paint_14436(_n_argument_14818,_n_argument_14819,_n_argument_14820,_n_argument_14821);})());
}}
}}

}
}

void _n_set_14449(double _a0,double _a1,d::Array<double,false> _a2,std::optional<double> _a3){double _n_x_14587=_a0;
double _n_r_14588=_a1;
d::Array<double,false> _n_c_14589=_a2;
double _n_a_14590=(d::present(_a3)?d::read(_a3):1.0);
{
(void)(((_n_x_14587=d::round(_n_x_14587)),(_n_r_14588=d::round(_n_r_14588))));
if((((d::truth((_n_x_14587<0.0))||d::truth((_n_x_14587>=_n_W_14404)))||d::truth((_n_r_14588<0.0)))||d::truth((_n_r_14588>=_n_H_14405)))){d::check_cancel();return;
}
double _n_k_14591=((_n_r_14588*_n_W_14404)+_n_x_14587);
(void)(((([&](){auto&& _n_array_14822=this->_n_FR_14446;auto _n_index_14823=_n_k_14591;auto _n_value_14824=_n_mix_14416(d::at(this->_n_FR_14446,_n_k_14591),d::at(_n_c_14589,0.0),_n_a_14590);d::put(_n_array_14822,_n_index_14823,_n_value_14824);return _n_value_14824;})(),([&](){auto&& _n_array_14825=this->_n_FG_14447;auto _n_index_14826=_n_k_14591;auto _n_value_14827=_n_mix_14416(d::at(this->_n_FG_14447,_n_k_14591),d::at(_n_c_14589,1.0),_n_a_14590);d::put(_n_array_14825,_n_index_14826,_n_value_14827);return _n_value_14827;})()),([&](){auto&& _n_array_14828=this->_n_FB_14448;auto _n_index_14829=_n_k_14591;auto _n_value_14830=_n_mix_14416(d::at(this->_n_FB_14448,_n_k_14591),d::at(_n_c_14589,2.0),_n_a_14590);d::put(_n_array_14828,_n_index_14829,_n_value_14830);return _n_value_14830;})()));

}
}

explicit Native_jal_mahal(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_14419=d::map(_n_meta_14402->_p_palette,_n_hex_14417);
this->_n_N_14420=(_n_W_14404*_n_H_14405);
this->_n_out_14421=d::Array<d::String,false>(size_t(this->_n_N_14420));
this->_n_lut_14422=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_SR_14424=d::Array<float,true>(size_t((_n_WATER_14406*_n_W_14404)));
this->_n_SG_14425=d::Array<float,true>(size_t((_n_WATER_14406*_n_W_14404)));
this->_n_SB_14426=d::Array<float,true>(size_t((_n_WATER_14406*_n_W_14404)));
this->_n_solid_14427=d::Array<uint8_t,true>(size_t((_n_WATER_14406*_n_W_14404)));
this->_n_ridges_14429=d::Array<std::shared_ptr<_n_Record_14430>,false>{([&](){auto _n_object_14662=std::make_shared<_n_Record_14430>();_n_object_14662->_p_top=[=]( double _a0) mutable ->double{double _n_x_14506=_a0;
return ([&](){auto _n_left_14663=([&](){auto _n_left_14665=([&](){auto _n_left_14667=([&](){auto _n_left_14669=(45.0-(15.0*this->_n_hump_14428(_n_x_14506,32.0,30.0)));auto _n_right_14670=(9.0*this->_n_hump_14428(_n_x_14506,98.0,22.0));return (_n_left_14669-_n_right_14670);})();auto _n_right_14668=(6.0*this->_n_hump_14428(_n_x_14506,188.0,18.0));return (_n_left_14667-_n_right_14668);})();auto _n_right_14666=(4.0*this->_n_hump_14428(_n_x_14506,138.0,12.0));return (_n_left_14665-_n_right_14666);})();auto _n_right_14664=(3.0*_n_fbm_14413((_n_x_14506*0.09),1.3,3.0,0.0));return (_n_left_14663-_n_right_14664);})();};_n_object_14662->_p_tone=d::Array<double,false>{0.5,0.5,0.68};return _n_object_14662;})(),([&](){auto _n_object_14672=std::make_shared<_n_Record_14430>();_n_object_14672->_p_top=[=]( double _a0) mutable ->double{double _n_x_14507=_a0;
return ([&](){auto _n_left_14673=([&](){auto _n_left_14675=([&](){auto _n_left_14677=(52.0-(9.0*this->_n_hump_14428(_n_x_14507,8.0,20.0)));auto _n_right_14678=(7.0*this->_n_hump_14428(_n_x_14507,62.0,16.0));return (_n_left_14677-_n_right_14678);})();auto _n_right_14676=(6.0*this->_n_hump_14428(_n_x_14507,172.0,15.0));return (_n_left_14675-_n_right_14676);})();auto _n_right_14674=(2.5*_n_fbm_14413((_n_x_14507*0.11),4.1,3.0,0.0));return (_n_left_14673-_n_right_14674);})();};_n_object_14672->_p_tone=d::Array<double,false>{0.36,0.34,0.52};return _n_object_14672;})(),([&](){auto _n_object_14680=std::make_shared<_n_Record_14430>();_n_object_14680->_p_top=[=]( double _a0) mutable ->double{double _n_x_14508=_a0;
return ([&](){auto _n_left_14681=([&](){auto _n_left_14683=(58.5-(3.0*this->_n_hump_14428(_n_x_14508,36.0,28.0)));auto _n_right_14684=(3.0*this->_n_hump_14428(_n_x_14508,152.0,24.0));return (_n_left_14683-_n_right_14684);})();auto _n_right_14682=(1.6*_n_fbm_14413((_n_x_14508*0.14),7.7,3.0,0.0));return (_n_left_14681-_n_right_14682);})();};_n_object_14680->_p_tone=d::Array<double,false>{0.24,0.2,0.3};return _n_object_14680;})()};
{double _n_r_14512=0.0;
for(;d::truth((_n_r_14512<_n_WATER_14406));(void)((_n_r_14512++))){d::check_cancel();double _n_y_14513=(_n_r_14512+0.5);
auto _n_binding_14685=_n_skyAt_14418(_n_y_14513);
double _n_sr_14514=d::at(_n_binding_14685,0.0);
double _n_sg_14515=d::at(_n_binding_14685,1.0);
double _n_sb_14516=d::at(_n_binding_14685,2.0);
{double _n_x_14517=0.0;
for(;d::truth((_n_x_14517<_n_W_14404));(void)((_n_x_14517++))){d::check_cancel();double _n_k_14518=((_n_r_14512*_n_W_14404)+_n_x_14517);
double _n_dx_14519=((_n_x_14517+0.5)-d::at(_n_SUN_14407,0.0));
double _n_dy_14520=(_n_y_14513-d::at(_n_SUN_14407,1.0));
double _n_ds_14521=std::sqrt(((_n_dx_14519*_n_dx_14519)+(_n_dy_14520*_n_dy_14520)));
double _n_glow_14522=([&](){auto _n_left_14686=(std::exp(((-d::number(_n_ds_14521))/34.0))*0.3);auto _n_right_14687=(std::exp(((-d::number(_n_ds_14521))/11.0))*0.45);return (_n_left_14686+_n_right_14687);})();
double _n_streak_14523=(0.08*(_n_fbm_14413((_n_x_14517*0.025),(_n_y_14513*0.3),3.0,0.0)-0.5));
double _n_cr_14524=((_n_sr_14514+(_n_glow_14522*0.6))+_n_streak_14523);
double _n_cg_14525=((_n_sg_14515+(_n_glow_14522*0.48))+(_n_streak_14523*0.9));
double _n_cb_14526=((_n_sb_14516+(_n_glow_14522*0.2))+_n_streak_14523);
double _n_cl_14527=([&](){auto _n_left_14688=([&](){auto _n_left_14690=([&](){auto _n_argument_14692=0.56;auto _n_argument_14693=0.74;auto _n_argument_14694=_n_fbm_14413((_n_x_14517*0.012),(_n_y_14513*0.32),4.0,0.0);return _n_smooth_14415(_n_argument_14692,_n_argument_14693,_n_argument_14694);})();auto _n_right_14691=_n_smooth_14415(8.0,16.0,_n_y_14513);return (_n_left_14690*_n_right_14691);})();auto _n_right_14689=_n_smooth_14415(38.0,28.0,_n_y_14513);return (_n_left_14688*_n_right_14689);})();
if(d::truth((_n_cl_14527>0.0))){d::check_cancel();double _n_warm_14528=std::exp(((-d::number(_n_ds_14521))/40.0));
(void)((((_n_cr_14524=_n_mix_14416(_n_cr_14524,1.0,(_n_cl_14527*0.55))),(_n_cg_14525=_n_mix_14416(_n_cg_14525,(0.76+(0.12*_n_warm_14528)),(_n_cl_14527*0.55)))),(_n_cb_14526=_n_mix_14416(_n_cb_14526,(0.74-(0.1*_n_warm_14528)),(_n_cl_14527*0.55)))));
}
if(d::truth((_n_ds_14521<7.5))){d::check_cancel();double _n_a_14529=_n_smooth_14415(7.5,6.2,_n_ds_14521);
(void)((((_n_cr_14524=_n_mix_14416(_n_cr_14524,1.0,_n_a_14529)),(_n_cg_14525=([&](){auto _n_argument_14695=_n_cg_14525;auto _n_argument_14696=(0.9+(0.08*_n_smooth_14415(7.0,0.0,_n_ds_14521)));auto _n_argument_14697=_n_a_14529;return _n_mix_14416(_n_argument_14695,_n_argument_14696,_n_argument_14697);})())),(_n_cb_14526=([&](){auto _n_argument_14698=_n_cb_14526;auto _n_argument_14699=(0.6+(0.3*_n_smooth_14415(7.0,0.0,_n_ds_14521)));auto _n_argument_14700=_n_a_14529;return _n_mix_14416(_n_argument_14698,_n_argument_14699,_n_argument_14700);})())));
}
{double _n_i_14530=(double(this->_n_ridges_14429.size())-1.0);
for(;d::truth((_n_i_14530>=0.0));(void)((_n_i_14530--))){d::check_cancel();std::shared_ptr<_n_Record_14430> _n_R_14531=d::at(this->_n_ridges_14429,_n_i_14530);
double _n_t0_14532=_n_R_14531->_p_top(_n_x_14517);
if(d::truth((_n_y_14513<_n_t0_14532))){d::check_cancel();continue;
}
double _n_lit_14533=([&](){auto _n_left_14701=(0.06*(_n_fbm_14413((_n_x_14517*0.12),(_n_y_14513*0.2),3.0,0.0)-0.5));auto _n_right_14702=(0.05*_n_smooth_14415((_n_t0_14532+2.5),_n_t0_14532,_n_y_14513));return (_n_left_14701+_n_right_14702);})();
double _n_pool_14534=(_n_smooth_14415((_n_t0_14532+2.0),(_n_t0_14532+12.0),_n_y_14513)*0.5);
double _n_h_14535=_n_pool_14534;
(void)((_n_cr_14524=_n_mix_14416((d::at(_n_R_14531->_p_tone,0.0)+_n_lit_14533),(_n_sr_14514+(_n_glow_14522*0.4)),_n_h_14535)));
(void)((_n_cg_14525=_n_mix_14416((d::at(_n_R_14531->_p_tone,1.0)+_n_lit_14533),(_n_sg_14515+(_n_glow_14522*0.32)),_n_h_14535)));
(void)((_n_cb_14526=_n_mix_14416((d::at(_n_R_14531->_p_tone,2.0)+_n_lit_14533),(_n_sb_14516+(_n_glow_14522*0.15)),_n_h_14535)));
break;
}}
double _n_ft_14536=this->_n_fortTop_14431(_n_x_14517);
if(((d::truth((_n_y_14513>=_n_ft_14536))&&d::truth((_n_y_14513<(d::at(this->_n_ridges_14429,0.0)->_p_top(_n_x_14517)+0.5))))&&d::truth((_n_y_14513<d::at(this->_n_ridges_14429,1.0)->_p_top(_n_x_14517))))){d::check_cancel();if(d::truth((!d::truth(([&]()->bool{auto _n_logical_14703=(_n_y_14513<(_n_ft_14536+0.8));return d::truth(_n_logical_14703)?(d::mod(_n_x_14517,3.0)==0.0):_n_logical_14703;})())))){d::check_cancel();(void)((((_n_cr_14524=0.72),(_n_cg_14525=0.56)),(_n_cb_14526=0.62)));
}
}
(void)(((([&](){auto&& _n_array_14704=this->_n_SR_14424;auto _n_index_14705=_n_k_14518;auto _n_value_14706=_n_cr_14524;d::put(_n_array_14704,_n_index_14705,_n_value_14706);return _n_value_14706;})(),([&](){auto&& _n_array_14707=this->_n_SG_14425;auto _n_index_14708=_n_k_14518;auto _n_value_14709=_n_cg_14525;d::put(_n_array_14707,_n_index_14708,_n_value_14709);return _n_value_14709;})()),([&](){auto&& _n_array_14710=this->_n_SB_14426;auto _n_index_14711=_n_k_14518;auto _n_value_14712=_n_cb_14526;d::put(_n_array_14710,_n_index_14711,_n_value_14712);return _n_value_14712;})()));
}}
}}
this->_n_STONE_14432=d::Array<double,false>{1.0,0.76,0.58};
this->_n_SHADE_14433=d::Array<double,false>{0.6,0.42,0.42};
this->_n_HOLE_14434=d::Array<double,false>{0.2,0.13,0.19};
this->_n_DOME_14435=d::Array<double,false>{1.0,0.9,0.74};
this->_n_L_14437=64.0;
this->_n_Rt_14438=136.0;
this->_n_ROOF_14439=47.0;
{double _n_r_14542=40.0;
for(;d::truth((_n_r_14542<_n_WATER_14406));(void)((_n_r_14542++))){d::check_cancel();double _n_y_14543=(_n_r_14542+0.5);
{double _n_x_14544=(this->_n_L_14437-2.0);
for(;d::truth((_n_x_14544<=(this->_n_Rt_14438+2.0)));(void)((_n_x_14544++))){d::check_cancel();double _n_fx_14545=(_n_x_14544+0.5);
double _n_grain_14546=(0.94+(0.08*_n_hash_14411((_n_x_14544*3.0),(_n_r_14542*7.0))));
if(((((d::truth((_n_y_14543>=(this->_n_ROOF_14439-2.0)))&&d::truth((_n_y_14543<(this->_n_ROOF_14439-0.5))))&&d::truth((_n_fx_14545>=this->_n_L_14437)))&&d::truth((_n_fx_14545<=this->_n_Rt_14438)))&&d::truth((d::mod(std::floor(_n_fx_14545),3.0)!=0.0)))){d::check_cancel();(void)(this->_n_paint_14436(_n_x_14544,_n_r_14542,this->_n_STONE_14432,(0.95*_n_grain_14546)));
}
if((((d::truth((_n_y_14543>=(this->_n_ROOF_14439-0.5)))&&d::truth((_n_y_14543<(this->_n_ROOF_14439+1.0))))&&d::truth((_n_fx_14545>=(this->_n_L_14437-1.5))))&&d::truth((_n_fx_14545<=(this->_n_Rt_14438+1.5))))){d::check_cancel();(void)(this->_n_paint_14436(_n_x_14544,_n_r_14542,this->_n_DOME_14435,0.98));
}
if(((d::truth((_n_y_14543<(this->_n_ROOF_14439+1.0)))||d::truth((_n_fx_14545<this->_n_L_14437)))||d::truth((_n_fx_14545>this->_n_Rt_14438)))){d::check_cancel();continue;
}
d::Array<double,false> _n_c_14547=this->_n_STONE_14432;
double _n_s_14548=(_n_grain_14546*(0.9+(0.1*_n_smooth_14415(this->_n_L_14437,this->_n_Rt_14438,_n_fx_14545))));
if(d::truth((_n_fx_14545<(this->_n_L_14437+4.0)))){d::check_cancel();(void)(((_n_c_14547=this->_n_SHADE_14433),(_n_s_14548=_n_grain_14546)));
}
if((d::truth((_n_y_14543>=53.0))&&d::truth((_n_y_14543<54.2)))){d::check_cancel();(void)(((_n_c_14547=this->_n_DOME_14435),(_n_s_14548=0.95)));
}
double _n_up_14549=(d::mod((d::mod(((_n_fx_14545-this->_n_L_14437)-6.0),4.5)+4.5),4.5)-2.25);
if((((((d::truth((_n_y_14543>=48.6))&&d::truth((_n_y_14543<52.6)))&&d::truth((_n_fx_14545>(this->_n_L_14437+5.0))))&&d::truth((_n_fx_14545<(this->_n_Rt_14438-4.0))))&&d::truth((std::fabs(_n_up_14549)<1.05)))&&d::truth((_n_y_14543>(49.4+((_n_up_14549*_n_up_14549)*0.5)))))){d::check_cancel();(void)(((_n_c_14547=this->_n_HOLE_14434),(_n_s_14548=1.0)));
}
double _n_lo_14550=(d::mod((d::mod(((_n_fx_14545-this->_n_L_14437)-7.0),6.0)+6.0),6.0)-3.0);
if(((((d::truth((_n_y_14543>=55.2))&&d::truth((_n_fx_14545>(this->_n_L_14437+5.0))))&&d::truth((_n_fx_14545<(this->_n_Rt_14438-4.0))))&&d::truth((std::fabs(_n_lo_14550)<1.5)))&&d::truth((_n_y_14543>(56.2+((_n_lo_14550*_n_lo_14550)*0.45)))))){d::check_cancel();(void)(((_n_c_14547=this->_n_HOLE_14434),(_n_s_14548=0.9)));
}
if(((d::truth((_n_y_14543>=54.2))&&d::truth((std::fabs(_n_lo_14550)>2.6)))&&d::truth((_n_fx_14545>(this->_n_L_14437+5.0))))){d::check_cancel();(void)((_n_s_14548=(_n_s_14548*1.06)));
}
if(d::truth((_n_y_14543>(_n_WATER_14406-2.0)))){d::check_cancel();(void)((_n_s_14548=(_n_s_14548*0.62)));
}
(void)(this->_n_paint_14436(_n_x_14544,_n_r_14542,_n_c_14547,_n_s_14548));
}}
}}
(void)(this->_n_chhatri_14440(83.0,(this->_n_ROOF_14439-1.5),0.85,0.22));
(void)(this->_n_chhatri_14440(117.0,(this->_n_ROOF_14439-1.5),0.85,0.22));
{double _n_r_14573=34.0;
for(;d::truth((_n_r_14573<this->_n_ROOF_14439));(void)((_n_r_14573++))){d::check_cancel();double _n_y_14574=(_n_r_14573+0.5);
{double _n_x_14575=88.0;
for(;d::truth((_n_x_14575<=112.0));(void)((_n_x_14575++))){d::check_cancel();double _n_dx_14576=((_n_x_14575+0.5)-100.0);
double _n_roofTop_14577=(37.0+(2.4*std::pow((_n_dx_14576/11.0),2.0)));
if(((d::truth((_n_y_14574>=41.0))&&d::truth((_n_y_14574<(this->_n_ROOF_14439-1.5))))&&d::truth((std::fabs(_n_dx_14576)<=9.0)))){d::check_cancel();double _n_bay_14578=(d::mod((d::mod((_n_dx_14576+9.0),6.0)+6.0),6.0)-3.0);
bool _n_open_14579=([&]()->bool{auto _n_logical_14713=(std::fabs(_n_bay_14578)<1.3);return d::truth(_n_logical_14713)?(_n_y_14574>(42.4+((_n_bay_14578*_n_bay_14578)*0.45))):_n_logical_14713;})();
(void)(this->_n_paint_14436(_n_x_14575,_n_r_14573,(d::truth(_n_open_14579)?this->_n_HOLE_14434:this->_n_STONE_14432),(d::truth(_n_open_14579)?1.0:(d::truth((_n_dx_14576<(-d::number(6.0))))?0.78:0.96))));
}else {d::check_cancel();if(((d::truth((_n_y_14574>=_n_roofTop_14577))&&d::truth((_n_y_14574<41.0)))&&d::truth((std::fabs(_n_dx_14576)<=11.0)))){d::check_cancel();(void)(this->_n_paint_14436(_n_x_14575,_n_r_14573,this->_n_DOME_14435,((0.86+(0.08*(_n_dx_14576/11.0)))+((0.08*(41.0-_n_y_14574))/4.0))));
}
}
}}
}}
(void)(this->_n_chhatri_14440(67.5,(this->_n_ROOF_14439-1.5),1.0,0.0));
(void)(this->_n_chhatri_14440(132.5,(this->_n_ROOF_14439-1.5),1.0,0.0));
this->_n_MW_14441=480.0;
this->_n_mist_14442=d::Array<float,true>(size_t((this->_n_MW_14441*_n_H_14405)));
{double _n_r_14580=0.0;
for(;d::truth((_n_r_14580<_n_H_14405));(void)((_n_r_14580++))){d::check_cancel();{double _n_x_14581=0.0;
for(;d::truth((_n_x_14581<this->_n_MW_14441));(void)((_n_x_14581++))){d::check_cancel();(void)(([&](){auto&& _n_array_14714=this->_n_mist_14442;auto _n_index_14715=((_n_r_14580*this->_n_MW_14441)+_n_x_14581);auto _n_value_14716=([&](){auto _n_argument_14717=0.44;auto _n_argument_14718=0.72;auto _n_argument_14719=_n_fbm_14413((_n_x_14581*0.02),(_n_r_14580*0.14),4.0,(this->_n_MW_14441*0.02));return _n_smooth_14415(_n_argument_14717,_n_argument_14718,_n_argument_14719);})();d::put(_n_array_14714,_n_index_14715,_n_value_14716);return _n_value_14716;})());
}}
}}
this->_n_band_14443=d::Array<float,true>(size_t(_n_H_14405));
{double _n_r_14582=0.0;
for(;d::truth((_n_r_14582<_n_H_14405));(void)((_n_r_14582++))){d::check_cancel();double _n_y_14583=(_n_r_14582+0.5);
(void)(([&](){auto&& _n_array_14720=this->_n_band_14443;auto _n_index_14721=_n_r_14582;auto _n_value_14722=([&](){auto _n_left_14723=([&](){auto _n_left_14725=(0.95*std::exp((-d::number(std::pow(((_n_y_14583-_n_WATER_14406)/4.5),2.0)))));auto _n_right_14726=(0.6*std::exp((-d::number(std::pow(((_n_y_14583-51.0)/3.0),2.0)))));return (_n_left_14725+_n_right_14726);})();auto _n_right_14724=(0.3*std::exp((-d::number(std::pow(((_n_y_14583-40.0)/3.5),2.0)))));return (_n_left_14723+_n_right_14724);})();d::put(_n_array_14720,_n_index_14721,_n_value_14722);return _n_value_14722;})());
}}
this->_n_birds_14444=d::Array<std::shared_ptr<_n_Record_14445>,false>{};
{double _n_i_14584=0.0;
for(;d::truth((_n_i_14584<9.0));(void)((_n_i_14584++))){d::check_cancel();(void)(this->_n_birds_14444.push(([&](){auto _n_object_14728=std::make_shared<_n_Record_14445>();_n_object_14728->_p_x0=((40.0+(_n_i_14584*6.0))+(_n_hash_14411(_n_i_14584,1.0)*4.0));_n_object_14728->_p_y0=([&](){auto _n_left_14729=(14.0+(std::fabs((_n_i_14584-4.0))*2.2));auto _n_right_14730=(_n_hash_14411(_n_i_14584,2.0)*1.5);return (_n_left_14729+_n_right_14730);})();_n_object_14728->_p_v=4.2;_n_object_14728->_p_ph=(_n_hash_14411(_n_i_14584,3.0)*6.28);_n_object_14728->_p_span=2.0;_n_object_14728->_p_low=false;return _n_object_14728;})()));
}}
{double _n_i_14585=0.0;
for(;d::truth((_n_i_14585<4.0));(void)((_n_i_14585++))){d::check_cancel();(void)(this->_n_birds_14444.push(([&](){auto _n_object_14732=std::make_shared<_n_Record_14445>();_n_object_14732->_p_x0=(160.0+(_n_i_14585*9.0));_n_object_14732->_p_y0=(22.0+(_n_hash_14411(_n_i_14585,4.0)*6.0));_n_object_14732->_p_v=3.1;_n_object_14732->_p_ph=(_n_hash_14411(_n_i_14585,5.0)*6.28);_n_object_14732->_p_span=2.0;_n_object_14732->_p_low=false;return _n_object_14732;})()));
}}
{double _n_i_14586=0.0;
for(;d::truth((_n_i_14586<5.0));(void)((_n_i_14586++))){d::check_cancel();(void)(this->_n_birds_14444.push(([&](){auto _n_object_14734=std::make_shared<_n_Record_14445>();_n_object_14734->_p_x0=((_n_i_14586*14.0)+(_n_hash_14411(_n_i_14586,6.0)*6.0));_n_object_14734->_p_y0=(67.0+(_n_hash_14411(_n_i_14586,7.0)*5.0));_n_object_14734->_p_v=6.5;_n_object_14734->_p_ph=(_n_hash_14411(_n_i_14586,8.0)*6.28);_n_object_14734->_p_span=3.0;_n_object_14734->_p_low=true;return _n_object_14734;})()));
}}
this->_n_FR_14446=d::Array<float,true>(size_t(this->_n_N_14420));
this->_n_FG_14447=d::Array<float,true>(size_t(this->_n_N_14420));
this->_n_FB_14448=d::Array<float,true>(size_t(this->_n_N_14420));
_render=[=]( double _a0,std::shared_ptr<_n_Record_14652> _a1) mutable ->d::String{double _n_t_14592=_a0;
auto _n_binding_14737=(d::present(_a1)?_a1:([&](){auto _n_object_14736=std::make_shared<_n_Record_14652>();return _n_object_14736;})());
std::optional<d::Array<uint8_t,true>> _n_color_14593=_n_binding_14737->_p_color;
{
double _n_drift_14594=(_n_t_14592*1.6);
{double _n_r_14595=0.0;
for(;d::truth((_n_r_14595<_n_H_14405));(void)((_n_r_14595++))){d::check_cancel();double _n_y_14596=(_n_r_14595+0.5);
double _n_mo_14597=std::floor((_n_drift_14594*(0.6+(0.4*d::at(this->_n_band_14443,_n_r_14595)))));
{double _n_x_14598=0.0;
for(;d::truth((_n_x_14598<_n_W_14404));(void)((_n_x_14598++))){d::check_cancel();double _n_k_14599=((_n_r_14595*_n_W_14404)+_n_x_14598);
double _n_cr_14600{};
double _n_cg_14601{};
double _n_cb_14602{};
if(d::truth((_n_r_14595<_n_WATER_14406))){d::check_cancel();(void)((((_n_cr_14600=d::at(this->_n_SR_14424,_n_k_14599)),(_n_cg_14601=d::at(this->_n_SG_14425,_n_k_14599))),(_n_cb_14602=d::at(this->_n_SB_14426,_n_k_14599))));
}else {d::check_cancel();double _n_d_14603=(_n_y_14596-_n_WATER_14406);
double _n_w_14604=([&](){auto _n_left_14738=(_n_noise_14412(((_n_x_14598*0.05)+(_n_t_14592*0.15)),((_n_d_14603*0.7)-(_n_t_14592*0.9)),0.0)-0.5);auto _n_right_14739=(0.5*(_n_noise_14412(((_n_x_14598*0.16)-(_n_t_14592*0.3)),((_n_d_14603*1.6)-(_n_t_14592*1.6)),0.0)-0.5));return (_n_left_14738+_n_right_14739);})();
double _n_amp_14605=(0.15+(_n_d_14603*0.07));
double _n_sx_14606=([&](){auto _n_argument_14740=0.0;auto _n_argument_14741=([&](){auto _n_argument_14742=(_n_W_14404-1.0);auto _n_argument_14743=d::round((_n_x_14598+((_n_w_14604*_n_amp_14605)*3.0)));return d::minimum({_n_argument_14742,_n_argument_14743});})();return d::maximum({_n_argument_14740,_n_argument_14741});})();
double _n_sr_14607=([&](){auto _n_argument_14744=0.0;auto _n_argument_14745=([&](){auto _n_argument_14746=(_n_WATER_14406-1.0);auto _n_argument_14747=d::round((((_n_WATER_14406-1.0)-_n_d_14603)+(_n_w_14604*(0.3+(_n_d_14603*0.05)))));return d::minimum({_n_argument_14746,_n_argument_14747});})();return d::maximum({_n_argument_14744,_n_argument_14745});})();
double _n_j_14608=((_n_sr_14607*_n_W_14404)+_n_sx_14606);
double _n_dim_14609=((0.86-(0.12*_n_smooth_14415(0.0,38.0,_n_d_14603)))*(d::truth(d::at(this->_n_solid_14427,_n_j_14608))?0.8:1.0));
double _n_edge_14610=(d::truth((_n_d_14603<1.0))?0.14:0.0);
(void)((((_n_cr_14600=(((d::at(this->_n_SR_14424,_n_j_14608)*_n_dim_14609)+0.07)+_n_edge_14610)),(_n_cg_14601=(((d::at(this->_n_SG_14425,_n_j_14608)*_n_dim_14609)+0.02)+_n_edge_14610))),(_n_cb_14602=(((d::at(this->_n_SB_14426,_n_j_14608)*_n_dim_14609)+0.02)+(_n_edge_14610*1.1)))));
double _n_line_14611=_n_noise_14412(((_n_x_14598*0.03)-(_n_t_14592*0.05)),((_n_d_14603*2.4)-(_n_t_14592*0.6)),0.0);
double _n_ln_14612=([&](){auto _n_left_14748=([&](){auto _n_left_14750=_n_smooth_14415(0.6,0.85,_n_line_14611);auto _n_right_14751=(_n_smooth_14415(0.4,0.15,_n_line_14611)*0.7);return (_n_left_14750-_n_right_14751);})();auto _n_right_14749=(0.04+(0.08*_n_smooth_14415(0.0,30.0,_n_d_14603)));return (_n_left_14748*_n_right_14749);})();
(void)((((_n_cr_14600=(_n_cr_14600+_n_ln_14612)),(_n_cg_14601=(_n_cg_14601+_n_ln_14612))),(_n_cb_14602=(_n_cb_14602+(_n_ln_14612*1.1)))));
double _n_pathW_14613=(4.0+(_n_d_14603*0.45));
double _n_path_14614=std::exp((-d::number(std::pow(((((_n_x_14598+0.5)-d::at(_n_SUN_14407,0.0))-(_n_w_14604*2.0))/_n_pathW_14613),2.0))));
double _n_glint_14615=(([&](){auto _n_argument_14752=0.55;auto _n_argument_14753=0.82;auto _n_argument_14754=_n_noise_14412(((_n_x_14598*0.3)+(_n_t_14592*0.4)),((_n_d_14603*1.4)-(_n_t_14592*1.2)),0.0);return _n_smooth_14415(_n_argument_14752,_n_argument_14753,_n_argument_14754);})()*_n_path_14614);
(void)((((_n_cr_14600=(_n_cr_14600+((0.55*_n_glint_14615)+(0.2*_n_path_14614)))),(_n_cg_14601=(_n_cg_14601+((0.45*_n_glint_14615)+(0.15*_n_path_14614))))),(_n_cb_14602=(_n_cb_14602+((0.22*_n_glint_14615)+(0.04*_n_path_14614))))));
}
double _n_mv_14616=(d::at(this->_n_mist_14442,((_n_r_14595*this->_n_MW_14441)+d::mod((d::mod((_n_x_14598-_n_mo_14597),this->_n_MW_14441)+this->_n_MW_14441),this->_n_MW_14441)))*d::at(this->_n_band_14443,_n_r_14595));
if(d::truth((_n_mv_14616>0.01))){d::check_cancel();double _n_a_14617=(_n_mv_14616*((d::truth((_n_r_14595<_n_WATER_14406))&&d::truth(d::at(this->_n_solid_14427,_n_k_14599)))?0.4:0.75));
(void)((((_n_cr_14600=_n_mix_14416(_n_cr_14600,0.98,_n_a_14617)),(_n_cg_14601=_n_mix_14416(_n_cg_14601,0.86,_n_a_14617))),(_n_cb_14602=_n_mix_14416(_n_cb_14602,0.86,_n_a_14617))));
}
(void)(((([&](){auto&& _n_array_14755=this->_n_FR_14446;auto _n_index_14756=_n_k_14599;auto _n_value_14757=_n_cr_14600;d::put(_n_array_14755,_n_index_14756,_n_value_14757);return _n_value_14757;})(),([&](){auto&& _n_array_14758=this->_n_FG_14447;auto _n_index_14759=_n_k_14599;auto _n_value_14760=_n_cg_14601;d::put(_n_array_14758,_n_index_14759,_n_value_14760);return _n_value_14760;})()),([&](){auto&& _n_array_14761=this->_n_FB_14448;auto _n_index_14762=_n_k_14599;auto _n_value_14763=_n_cb_14602;d::put(_n_array_14761,_n_index_14762,_n_value_14763);return _n_value_14763;})()));
}}
}}
double _n_bx_14618=(158.0+(4.0*std::sin((_n_t_14592*0.08))));
double _n_by_14619=(79.0+(0.4*std::sin((_n_t_14592*1.3))));
d::Array<double,false> _n_WOOD_14620=d::Array<double,false>{0.24,0.15,0.12};
d::Array<double,false> _n_WOOD2_14621=d::Array<double,false>{0.4,0.26,0.18};
d::Array<double,false> _n_MAN_14622=d::Array<double,false>{0.2,0.15,0.19};
{double _n_ring_14623=0.0;
for(;d::truth((_n_ring_14623<2.0));(void)((_n_ring_14623++))){d::check_cancel();double _n_rad_14624=(d::mod(((_n_t_14592*1.4)+(_n_ring_14623*4.5)),9.0)+1.0);
{double _n_a_14625=0.0;
for(;d::truth((_n_a_14625<60.0));(void)((_n_a_14625++))){d::check_cancel();double _n_ang_14626=(((_n_a_14625/60.0)*ascii::PI)*2.0);
(void)(([&](){auto _n_argument_14764=((_n_bx_14618-9.0)+((std::cos(_n_ang_14626)*_n_rad_14624)*2.0));auto _n_argument_14765=((_n_by_14619+5.0)+((std::sin(_n_ang_14626)*_n_rad_14624)*0.4));auto _n_argument_14766=d::Array<double,false>{0.98,0.9,0.86};auto _n_argument_14767=(0.6*(1.0-(_n_rad_14624/10.0)));return this->_n_set_14449(_n_argument_14764,_n_argument_14765,_n_argument_14766,std::optional<double>(_n_argument_14767));})());
}}
}}
{double _n_i_14627=(-d::number(12.0));
for(;d::truth((_n_i_14627<=12.0));(void)((_n_i_14627++))){d::check_cancel();double _n_rise_14628=(([&](){auto _n_argument_14768=(std::fabs(_n_i_14627)/12.0);auto _n_argument_14769=3.0;return std::pow(_n_argument_14768,_n_argument_14769);})()*3.2);
(void)(this->_n_set_14449((_n_bx_14618+_n_i_14627),(_n_by_14619-_n_rise_14628),_n_WOOD2_14621,std::optional<double>{}));
if(d::truth((std::fabs(_n_i_14627)<11.5))){d::check_cancel();(void)(this->_n_set_14449((_n_bx_14618+_n_i_14627),((_n_by_14619+1.0)-(_n_rise_14628*0.3)),_n_WOOD_14620,std::optional<double>{}));
}
if(d::truth((std::fabs(_n_i_14627)<9.5))){d::check_cancel();(void)(this->_n_set_14449((_n_bx_14618+_n_i_14627),(_n_by_14619+2.0),_n_WOOD_14620,std::optional<double>{}));
}
if((d::truth((std::fabs(_n_i_14627)<10.0))&&d::truth((([&](){auto _n_argument_14770=(_n_i_14627+std::floor((_n_t_14592*4.0)));auto _n_argument_14771=9.0;return _n_hash_14411(_n_argument_14770,_n_argument_14771);})()>0.3)))){d::check_cancel();(void)(([&](){auto _n_argument_14772=((_n_bx_14618+_n_i_14627)+(std::sin(((_n_t_14592*2.0)+_n_i_14627))*0.6));auto _n_argument_14773=(_n_by_14619+4.0);auto _n_argument_14774=d::Array<double,false>{0.32,0.26,0.32};auto _n_argument_14775=0.7;return this->_n_set_14449(_n_argument_14772,_n_argument_14773,_n_argument_14774,std::optional<double>(_n_argument_14775));})());
}
}}
{double _n_j_14629=0.0;
for(;d::truth((_n_j_14629<9.0));(void)((_n_j_14629++))){d::check_cancel();(void)((this->_n_set_14449((_n_bx_14618+3.0),((_n_by_14619-1.0)-_n_j_14629),_n_MAN_14622,std::optional<double>{}),([&]()->std::optional<bool>{auto _n_logical_14776=([&]()->bool{auto _n_logical_14777=(_n_j_14629>1.0);return d::truth(_n_logical_14777)?(_n_j_14629<7.0):_n_logical_14777;})();return d::truth(_n_logical_14776)?(this->_n_set_14449((_n_bx_14618+4.0),((_n_by_14619-1.0)-_n_j_14629),_n_MAN_14622,std::optional<double>{}),std::optional<bool>{}):std::optional<bool>(_n_logical_14776);})()));
}}
(void)((this->_n_set_14449((_n_bx_14618+5.0),(_n_by_14619-6.0),_n_MAN_14622,std::optional<double>{}),this->_n_set_14449((_n_bx_14618+6.0),(_n_by_14619-7.0),_n_MAN_14622,std::optional<double>{})));
(void)((this->_n_set_14449((_n_bx_14618+3.0),(_n_by_14619-11.0),_n_MAN_14622,std::optional<double>{}),this->_n_set_14449((_n_bx_14618+4.0),(_n_by_14619-11.0),_n_MAN_14622,std::optional<double>{})));
(void)((this->_n_set_14449((_n_bx_14618+3.0),(_n_by_14619-12.0),d::Array<double,false>{0.9,0.3,0.28},std::optional<double>{}),this->_n_set_14449((_n_bx_14618+4.0),(_n_by_14619-12.0),d::Array<double,false>{0.9,0.3,0.28},std::optional<double>{})));
{double _n_j_14630=0.0;
for(;d::truth((_n_j_14630<24.0));(void)((_n_j_14630++))){d::check_cancel();(void)(this->_n_set_14449(((_n_bx_14618+8.0)-(_n_j_14630*0.7)),((_n_by_14619-13.0)+(_n_j_14630*0.85)),d::Array<double,false>{0.3,0.22,0.18},std::optional<double>{}));
}}
for(auto &&_n_item_14778:this->_n_birds_14444){d::check_cancel();std::shared_ptr<_n_Record_14445> _n_b_14631=_n_item_14778;
{
double _n_x_14632=(d::mod((d::mod((_n_b_14631->_p_x0+(_n_b_14631->_p_v*_n_t_14592)),260.0)+260.0),260.0)-30.0);
double _n_f_14633=std::sin(((_n_t_14592*(d::truth(_n_b_14631->_p_low)?7.0:5.0))+_n_b_14631->_p_ph));
double _n_y_14634=(_n_b_14631->_p_y0+(0.8*std::sin(((_n_t_14592*0.7)+_n_b_14631->_p_ph))));
d::Array<double,false> _n_ink_14635=(d::truth(_n_b_14631->_p_low)?d::Array<double,false>{1.0,0.99,0.96}:d::Array<double,false>{0.3,0.27,0.36});
(void)(this->_n_set_14449(_n_x_14632,_n_y_14634,_n_ink_14635,std::optional<double>{}));
{double _n_i_14636=1.0;
for(;d::truth((_n_i_14636<=_n_b_14631->_p_span));(void)((_n_i_14636++))){d::check_cancel();double _n_lift_14637=(((-d::number(_n_f_14633))*_n_i_14636)*0.7);
(void)(this->_n_set_14449((_n_x_14632-_n_i_14636),((_n_y_14634+_n_lift_14637)+(d::truth((_n_i_14636==_n_b_14631->_p_span))?0.3:0.0)),_n_ink_14635,std::optional<double>{}));
(void)(this->_n_set_14449((_n_x_14632+_n_i_14636),((_n_y_14634+_n_lift_14637)+(d::truth((_n_i_14636==_n_b_14631->_p_span))?0.3:0.0)),_n_ink_14635,std::optional<double>{}));
}}
if(d::truth(_n_b_14631->_p_low)){d::check_cancel();(void)((this->_n_set_14449((_n_x_14632+1.0),(_n_y_14634+0.6),_n_ink_14635,std::optional<double>{}),this->_n_set_14449((_n_x_14632+2.0),(_n_y_14634+0.4),d::Array<double,false>{0.95,0.75,0.3},std::optional<double>{})));
if(d::truth(((_n_y_14634+6.0)<_n_H_14405))){d::check_cancel();(void)(this->_n_set_14449(_n_x_14632,(_n_y_14634+5.0),d::Array<double,false>{0.9,0.88,0.88},std::optional<double>(0.45)));
}
}

}
}
{double _n_r_14638=0.0;
for(;d::truth((_n_r_14638<_n_H_14405));(void)((_n_r_14638++))){d::check_cancel();double _n_fade_14639=_n_smooth_14415(_n_H_14405,(_n_H_14405-22.0),(_n_r_14638+0.5));
{double _n_x_14640=0.0;
for(;d::truth((_n_x_14640<_n_W_14404));(void)((_n_x_14640++))){d::check_cancel();double _n_k_14641=((_n_r_14638*_n_W_14404)+_n_x_14640);
double _n_cr_14642=d::at(this->_n_FR_14446,_n_k_14641);
double _n_cg_14643=d::at(this->_n_FG_14447,_n_k_14641);
double _n_cbl_14644=d::at(this->_n_FB_14448,_n_k_14641);
double _n_peak_14645=d::maximum({_n_cr_14642,_n_cg_14643,_n_cbl_14644,0.0001});
double _n_level_14646=(([&](){auto _n_argument_14779=_n_clamp_14414(((_n_peak_14645-0.18)/0.78));auto _n_argument_14780=1.15;return std::pow(_n_argument_14779,_n_argument_14780);})()*_n_fade_14639);
double _n_step_14647=([&](){auto _n_argument_14781=0.0;auto _n_argument_14782=([&](){auto _n_argument_14783=3.0;auto _n_argument_14784=d::round(((_n_level_14646*3.0)+d::at(_n_BAYER_14410,((double(d::i32(_n_r_14638)&d::i32(3.0))*4.0)+double(d::i32(_n_x_14640)&d::i32(3.0))))));return d::minimum({_n_argument_14783,_n_argument_14784});})();return d::maximum({_n_argument_14781,_n_argument_14782});})();
(void)(([&](){auto&& _n_array_14785=this->_n_out_14421;auto _n_index_14786=_n_k_14641;auto _n_value_14787=d::at(_n_DOTS_14408,_n_step_14647);d::put(_n_array_14785,_n_index_14786,_n_value_14787);return _n_value_14787;})());
if(d::truth(_n_color_14593)){d::check_cancel();double _n_want_14648=(d::truth(_n_step_14647)?d::minimum({1.0,((_n_level_14646+0.06)/d::at(_n_COVER_14409,_n_step_14647))}):0.0);
double _n_s_14649=((0.3+(0.7*_n_want_14648))/_n_peak_14645);
(void)(([&](){auto&& _n_array_14788=d::read(_n_color_14593);auto _n_index_14789=_n_k_14641;auto _n_value_14790=([&](){auto _n_argument_14791=_n_clamp_14414((_n_cr_14642*_n_s_14649));auto _n_argument_14792=_n_clamp_14414((_n_cg_14643*_n_s_14649));auto _n_argument_14793=_n_clamp_14414((_n_cbl_14644*_n_s_14649));return this->_n_nearest_14423(_n_argument_14791,_n_argument_14792,_n_argument_14793);})();d::put(_n_array_14788,_n_index_14789,_n_value_14790);return _n_value_14790;})());
}
}}
}}
d::Array<d::String,false> _n_lines_14650=d::Array<d::String,false>{};
{double _n_r_14651=0.0;
for(;d::truth((_n_r_14651<_n_H_14405));(void)((_n_r_14651++))){d::check_cancel();(void)(_n_lines_14650.push(d::join(this->_n_out_14421.slice((_n_r_14651*_n_W_14404),((_n_r_14651+1.0)*_n_W_14404)),d::String(u""))));
}}
return d::join(_n_lines_14650,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("jal-mahal").cols)*ascii::catalog_meta("jal-mahal").rows);auto _env=std::make_shared<_n_Record_14652>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &jal_mahal_meta(){return catalog_meta("jal-mahal");}
std::unique_ptr<Piece> make_jal_mahal(const AsciiPieceOptions &o){return std::make_unique<Native_jal_mahal>(o);}
}
