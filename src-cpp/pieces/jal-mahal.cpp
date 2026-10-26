// Direct, statically typed C++ from src/pieces/jal-mahal.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_14404;
struct _n_Record_14431;
struct _n_Record_14446;
struct _n_Record_14653;
struct _n_Record_14404{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_14404> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14404>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_14431{
std::function<double(double)> _p_top{};
d::Array<double,false> _p_tone{};
static std::shared_ptr<_n_Record_14431> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14431>();out->_p_top=d::decode<std::function<double(double)>>(j["top"]);out->_p_tone=d::decode<d::Array<double,false>>(j["tone"]);return out;}
};
struct _n_Record_14446{
double _p_x0{};
double _p_y0{};
double _p_v{};
double _p_ph{};
double _p_span{};
bool _p_low{};
static std::shared_ptr<_n_Record_14446> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14446>();out->_p_x0=d::decode<double>(j["x0"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_v=d::decode<double>(j["v"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_span=d::decode<double>(j["span"]);out->_p_low=d::decode<bool>(j["low"]);return out;}
};
struct _n_Record_14653{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14653> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14653>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_14412(double _a0,double _a1);
double _n_noise_14413(double _a0,double _a1,double _a2);
double _n_fbm_14414(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_14415(double _a0);
double _n_smooth_14416(double _a0,double _a1,double _a2);
double _n_mix_14417(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_14418(d::String _a0);
d::Array<double,false> _n_skyAt_14419(double _a0);
std::shared_ptr<_n_Record_14404> _n_meta_14403=[](){return ([&](){auto _n_object_14656=std::make_shared<_n_Record_14404>();_n_object_14656->_p_name=d::String(u"jal mahal");_n_object_14656->_p_category=d::String(u"scenes");_n_object_14656->_p_note=d::String(u"the jaipur water palace floating on a misty lake at sunrise");_n_object_14656->_p_cols=200.0;_n_object_14656->_p_rows=100.0;_n_object_14656->_p_cell=1.0;_n_object_14656->_p_fps=15.0;_n_object_14656->_p_ground=d::String(u"#16141f");_n_object_14656->_p_palette=d::Array<d::String,false>{d::String(u"#3e4a6b"),d::String(u"#56628a"),d::String(u"#7180a6"),d::String(u"#8e9cc0"),d::String(u"#aab6d4"),d::String(u"#c6cfe3"),d::String(u"#e2e7f1"),d::String(u"#6b4a66"),d::String(u"#8a5f7c"),d::String(u"#a87891"),d::String(u"#c895a6"),d::String(u"#e2b4bd"),d::String(u"#f2d0d0"),d::String(u"#fff3d6"),d::String(u"#ffe3a6"),d::String(u"#f6c87a"),d::String(u"#e8a865"),d::String(u"#c98552"),d::String(u"#5a3e3a"),d::String(u"#7d5848"),d::String(u"#a47a5e"),d::String(u"#c99d78"),d::String(u"#e4c29c"),d::String(u"#2a2f45"),d::String(u"#3a3550"),d::String(u"#4d4660"),d::String(u"#4a3226"),d::String(u"#6e4a32"),d::String(u"#fbfaf7")};return _n_object_14656;})();}();
const double _n_W_14405=[](){return 200.0;}();
const double _n_H_14406=[](){return 100.0;}();
const double _n_WATER_14407=[](){return 62.0;}();
d::Array<double,false> _n_SUN_14408=[](){return d::Array<double,false>{148.0,30.0};}();
const d::String _n_DOTS_14409=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_14410=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_14411=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_14451=_a0;
return ((_n_v_14451/16.0)-0.47);});}();
double _n_hash_14412(double _a0,double _a1){double _n_x_14452=_a0;
double _n_y_14453=_a1;
{
double _n_h_14454=([&](){auto _n_left_14657=d::imul(double(d::i32(_n_x_14452)|d::i32(0.0)),374761393.0);auto _n_right_14658=d::imul(double(d::i32(_n_y_14453)|d::i32(0.0)),668265263.0);return (_n_left_14657+_n_right_14658);})();
(void)((_n_h_14454=d::imul(double(d::i32(_n_h_14454)^d::i32(double(d::u32(_n_h_14454)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_14454)^d::i32(double(d::u32(_n_h_14454)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_14413(double _a0,double _a1,double _a2){double _n_x_14455=_a0;
double _n_y_14456=_a1;
double _n_period_14457=_a2;
{
double _n_xi_14458=std::floor(_n_x_14455);
double _n_yi_14459=std::floor(_n_y_14456);
double _n_fx_14460=(_n_x_14455-_n_xi_14458);
double _n_fy_14461=(_n_y_14456-_n_yi_14459);
double _n_u_14462=((_n_fx_14460*_n_fx_14460)*(3.0-(2.0*_n_fx_14460)));
double _n_v_14463=((_n_fy_14461*_n_fy_14461)*(3.0-(2.0*_n_fy_14461)));
double _n_x0_14464=_n_xi_14458;
double _n_x1_14465=(_n_xi_14458+1.0);
if(d::truth(_n_period_14457)){d::check_cancel();(void)((_n_x0_14464=d::mod((d::mod(_n_xi_14458,_n_period_14457)+_n_period_14457),_n_period_14457)));
(void)((_n_x1_14465=d::mod((_n_x0_14464+1.0),_n_period_14457)));
}
double _n_a_14466=_n_hash_14412(_n_x0_14464,_n_yi_14459);
double _n_b_14467=_n_hash_14412(_n_x1_14465,_n_yi_14459);
double _n_c_14468=_n_hash_14412(_n_x0_14464,(_n_yi_14459+1.0));
double _n_d_14469=_n_hash_14412(_n_x1_14465,(_n_yi_14459+1.0));
return (((_n_a_14466+((_n_b_14467-_n_a_14466)*_n_u_14462))+((_n_c_14468-_n_a_14466)*_n_v_14463))+(((((_n_a_14466-_n_b_14467)-_n_c_14468)+_n_d_14469)*_n_u_14462)*_n_v_14463));

}
}

double _n_fbm_14414(double _a0,double _a1,double _a2,double _a3){double _n_x_14470=_a0;
double _n_y_14471=_a1;
double _n_octaves_14472=_a2;
double _n_period_14473=_a3;
{
double _n_s_14474=0.0;
double _n_n_14475=0.0;
double _n_amp_14476=0.5;
double _n_f_14477=1.0;
{double _n_i_14478=0.0;
for(;d::truth((_n_i_14478<_n_octaves_14472));(void)((_n_i_14478++))){d::check_cancel();(void)((_n_s_14474=(_n_s_14474+(_n_amp_14476*_n_noise_14413((_n_x_14470*_n_f_14477),(_n_y_14471*_n_f_14477),(_n_period_14473*_n_f_14477))))));
(void)((_n_n_14475=(_n_n_14475+_n_amp_14476)));
(void)((_n_amp_14476=(_n_amp_14476*0.5)));
(void)((_n_f_14477=(_n_f_14477*2.0)));
}}
return (_n_s_14474/_n_n_14475);

}
}

double _n_clamp_14415(double _a0){double _n_v_14479=_a0;
return (d::truth((_n_v_14479<0.0))?0.0:(d::truth((_n_v_14479>1.0))?1.0:_n_v_14479));}

double _n_smooth_14416(double _a0,double _a1,double _a2){double _n_a_14480=_a0;
double _n_b_14481=_a1;
double _n_v_14482=_a2;
{
double _n_k_14483=_n_clamp_14415(((_n_v_14482-_n_a_14480)/(_n_b_14481-_n_a_14480)));
return ((_n_k_14483*_n_k_14483)*(3.0-(2.0*_n_k_14483)));

}
}

double _n_mix_14417(double _a0,double _a1,double _a2){double _n_a_14484=_a0;
double _n_b_14485=_a1;
double _n_k_14486=_a2;
return (_n_a_14484+((_n_b_14485-_n_a_14484)*_n_k_14486));}

d::Array<double,false> _n_hex_14418(d::String _a0){d::String _n_s_14487=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_14488=_a0;
return (([&](){auto _n_argument_14659=d::slice(_n_s_14487,_n_i_14488,(_n_i_14488+2.0));auto _n_argument_14660=16.0;return d::parseInt(_n_argument_14659,_n_argument_14660);})()/255.0);});}

d::Array<double,false> _n_skyAt_14419(double _a0){double _n_y_14489=_a0;
{
double _n_v_14490=_n_clamp_14415((_n_y_14489/_n_WATER_14407));
if(d::truth((_n_v_14490<0.45))){d::check_cancel();double _n_k_14491=_n_smooth_14416(0.0,0.45,_n_v_14490);
return d::Array<double,false>{_n_mix_14417(0.4,0.86,_n_k_14491),_n_mix_14417(0.47,0.62,_n_k_14491),_n_mix_14417(0.68,0.68,_n_k_14491)};
}
double _n_k_14492=_n_smooth_14416(0.45,0.95,_n_v_14490);
return d::Array<double,false>{_n_mix_14417(0.86,1.0,_n_k_14492),_n_mix_14417(0.62,0.84,_n_k_14492),_n_mix_14417(0.68,0.6,_n_k_14492)};

}
}

struct Native_jal_mahal final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_14420{};
double _n_N_14421{};
d::Array<d::String,false> _n_out_14422{};
d::Array<uint8_t,true> _n_lut_14423{};
d::Array<float,true> _n_SR_14425{};
d::Array<float,true> _n_SG_14426{};
d::Array<float,true> _n_SB_14427{};
d::Array<uint8_t,true> _n_solid_14428{};
d::Array<std::shared_ptr<_n_Record_14431>,false> _n_ridges_14430{};
d::Array<double,false> _n_STONE_14433{};
d::Array<double,false> _n_SHADE_14434{};
d::Array<double,false> _n_HOLE_14435{};
d::Array<double,false> _n_DOME_14436{};
double _n_L_14438{};
double _n_Rt_14439{};
double _n_ROOF_14440{};
double _n_MW_14442{};
d::Array<float,true> _n_mist_14443{};
d::Array<float,true> _n_band_14444{};
d::Array<std::shared_ptr<_n_Record_14446>,false> _n_birds_14445{};
d::Array<float,true> _n_FR_14447{};
d::Array<float,true> _n_FG_14448{};
d::Array<float,true> _n_FB_14449{};
std::function<d::String(double,std::shared_ptr<_n_Record_14653>)> _render;
double _n_nearest_14424(double _a0,double _a1,double _a2){double _n_r_14493=_a0;
double _n_g_14494=_a1;
double _n_b_14495=_a2;
{
double _n_k_14496=([&](){auto _n_left_14795=([&](){auto _n_left_14797=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_14493*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_14798=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_14494*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_14797)|d::i32(_n_right_14798));})();auto _n_right_14796=d::minimum({31.0,double(d::i32((_n_b_14495*31.99))|d::i32(0.0))});return double(d::i32(_n_left_14795)|d::i32(_n_right_14796));})();
if(d::truth((d::at(this->_n_lut_14423,_n_k_14496)!=255.0))){d::check_cancel();return d::at(this->_n_lut_14423,_n_k_14496);
}
double _n_best_14497=0.0;
double _n_bd_14498=1000000000.0;
{double _n_i_14499=0.0;
for(;d::truth((_n_i_14499<double(this->_n_P_14420.size())));(void)((_n_i_14499++))){d::check_cancel();double _n_dr_14500=(d::at(d::at(this->_n_P_14420,_n_i_14499),0.0)-_n_r_14493);
double _n_dg_14501=(d::at(d::at(this->_n_P_14420,_n_i_14499),1.0)-_n_g_14494);
double _n_db_14502=(d::at(d::at(this->_n_P_14420,_n_i_14499),2.0)-_n_b_14495);
double _n_d_14503=((((0.3*_n_dr_14500)*_n_dr_14500)+((0.5*_n_dg_14501)*_n_dg_14501))+((0.2*_n_db_14502)*_n_db_14502));
if(d::truth((_n_d_14503<_n_bd_14498))){d::check_cancel();(void)(((_n_bd_14498=_n_d_14503),(_n_best_14497=_n_i_14499)));
}
}}
return ([&](){auto&& _n_array_14799=this->_n_lut_14423;auto _n_index_14800=_n_k_14496;auto _n_value_14801=_n_best_14497;d::put(_n_array_14799,_n_index_14800,_n_value_14801);return _n_value_14801;})();

}
}

double _n_hump_14429(double _a0,double _a1,double _a2){double _n_x_14504=_a0;
double _n_c_14505=_a1;
double _n_w_14506=_a2;
return std::exp((-d::number(std::pow(((_n_x_14504-_n_c_14505)/_n_w_14506),2.0))));}

double _n_fortTop_14432(double _a0){double _n_x_14510=_a0;
{
if((d::truth((_n_x_14510<6.0))||d::truth((_n_x_14510>60.0)))){d::check_cancel();return 1000000000.0;
}
double _n_base_14511=d::at(this->_n_ridges_14430,0.0)->_p_top(_n_x_14510);
double _n_bastion_14512=(d::truth((std::fabs((d::mod((_n_x_14510-6.0),13.0)-6.5))>5.0))?3.0:1.6);
return (_n_base_14511-_n_bastion_14512);

}
}

void _n_paint_14437(double _a0,double _a1,d::Array<double,false> _a2,double _a3){double _n_x_14538=_a0;
double _n_r_14539=_a1;
d::Array<double,false> _n_c_14540=_a2;
double _n_s_14541=_a3;
{
if((((d::truth((_n_x_14538<0.0))||d::truth((_n_x_14538>=_n_W_14405)))||d::truth((_n_r_14539<0.0)))||d::truth((_n_r_14539>=_n_WATER_14407)))){d::check_cancel();return;
}
double _n_k_14542=((_n_r_14539*_n_W_14405)+_n_x_14538);
(void)(((([&](){auto&& _n_array_14802=this->_n_SR_14425;auto _n_index_14803=_n_k_14542;auto _n_value_14804=(d::at(_n_c_14540,0.0)*_n_s_14541);d::put(_n_array_14802,_n_index_14803,_n_value_14804);return _n_value_14804;})(),([&](){auto&& _n_array_14805=this->_n_SG_14426;auto _n_index_14806=_n_k_14542;auto _n_value_14807=(d::at(_n_c_14540,1.0)*_n_s_14541);d::put(_n_array_14805,_n_index_14806,_n_value_14807);return _n_value_14807;})()),([&](){auto&& _n_array_14808=this->_n_SB_14427;auto _n_index_14809=_n_k_14542;auto _n_value_14810=(d::at(_n_c_14540,2.0)*_n_s_14541);d::put(_n_array_14808,_n_index_14809,_n_value_14810);return _n_value_14810;})()));
(void)(([&](){auto&& _n_array_14811=this->_n_solid_14428;auto _n_index_14812=_n_k_14542;auto _n_value_14813=1.0;d::put(_n_array_14811,_n_index_14812,_n_value_14813);return _n_value_14813;})());

}
}

void _n_chhatri_14441(double _a0,double _a1,double _a2,double _a3){double _n_cx_14552=_a0;
double _n_base_14553=_a1;
double _n_sc_14554=_a2;
double _n_far_14555=_a3;
{
double _n_drumH_14556=(7.0*_n_sc_14554);
double _n_hw_14557=(3.6*_n_sc_14554);
double _n_eave_14558=(4.9*_n_sc_14554);
double _n_domeH_14559=(6.6*_n_sc_14554);
double _n_domeW_14560=(4.3*_n_sc_14554);
double _n_eaveY_14561=(_n_base_14553-_n_drumH_14556);
double _n_domeBase_14562=(_n_eaveY_14561-(1.2*_n_sc_14554));
{double _n_r_14563=std::floor(((_n_domeBase_14562-_n_domeH_14559)-(4.0*_n_sc_14554)));
for(;d::truth((_n_r_14563<std::ceil(_n_base_14553)));(void)((_n_r_14563++))){d::check_cancel();double _n_y_14564=(_n_r_14563+0.5);
{double _n_x_14565=std::floor(((_n_cx_14552-_n_eave_14558)-1.0));
for(;d::truth((_n_x_14565<=std::ceil(((_n_cx_14552+_n_eave_14558)+1.0))));(void)((_n_x_14565++))){d::check_cancel();double _n_dx_14566=((_n_x_14565+0.5)-_n_cx_14552);
std::optional<d::Array<double,false>> _n_c_14567=std::optional<d::Array<double,false>>{};
double _n_s_14568=1.0;
if(((d::truth((_n_y_14564>=_n_eaveY_14561))&&d::truth((_n_y_14564<_n_base_14553)))&&d::truth((std::fabs(_n_dx_14566)<=_n_hw_14557)))){d::check_cancel();double _n_face_14569=(d::truth((_n_dx_14566<((-d::number(_n_hw_14557))*0.45)))?0.72:(d::truth((_n_dx_14566>(_n_hw_14557*0.45)))?1.02:0.92));
(void)((d::read((_n_c_14567=std::optional<d::Array<double,false>>(this->_n_STONE_14433))),(_n_s_14568=_n_face_14569)));
bool _n_open_14570=([&]()->bool{auto _n_logical_14814=(std::fabs(_n_dx_14566)<((0.9*_n_sc_14554)+0.15));return d::truth(_n_logical_14814)?(_n_y_14564>((_n_eaveY_14561+(2.0*_n_sc_14554))+((_n_dx_14566*_n_dx_14566)*0.4))):_n_logical_14814;})();
if((d::truth(_n_open_14570)&&d::truth((_n_y_14564<(_n_base_14553-0.8))))){d::check_cancel();(void)((d::read((_n_c_14567=std::optional<d::Array<double,false>>(this->_n_HOLE_14435))),(_n_s_14568=1.0)));
}
if(d::truth((std::fabs((std::fabs(_n_dx_14566)-(_n_hw_14557*0.45)))<0.3))){d::check_cancel();(void)((_n_s_14568=(_n_s_14568*0.88)));
}
}else {d::check_cancel();if(((d::truth((_n_y_14564>=(_n_eaveY_14561-(1.2*_n_sc_14554))))&&d::truth((_n_y_14564<_n_eaveY_14561)))&&d::truth((std::fabs(_n_dx_14566)<=(_n_eave_14558-((_n_eaveY_14561-_n_y_14564)*0.6)))))){d::check_cancel();(void)((d::read((_n_c_14567=std::optional<d::Array<double,false>>(this->_n_DOME_14436))),(_n_s_14568=(0.9+(0.08*d::sign(_n_dx_14566))))));
}else {d::check_cancel();if((d::truth((_n_y_14564<_n_domeBase_14562))&&d::truth((_n_y_14564>=(_n_domeBase_14562-_n_domeH_14559))))){d::check_cancel();double _n_v_14571=((_n_domeBase_14562-_n_y_14564)/_n_domeH_14559);
double _n_w_14572=([&](){auto _n_left_14815=(_n_domeW_14560*std::sqrt(([&](){auto _n_argument_14817=0.0;auto _n_argument_14818=(1.0-std::pow(_n_v_14571,1.6));return d::maximum({_n_argument_14817,_n_argument_14818});})()));auto _n_right_14816=(0.88+(0.22*std::sin(((d::minimum({1.0,(_n_v_14571*2.2)})*ascii::PI)*0.5))));return (_n_left_14815*_n_right_14816);})();
if(d::truth((std::fabs(_n_dx_14566)<=_n_w_14572))){d::check_cancel();(void)((d::read((_n_c_14567=std::optional<d::Array<double,false>>(this->_n_DOME_14436))),(_n_s_14568=((0.78+((0.26*(_n_dx_14566/d::maximum({_n_w_14572,0.5})))*0.5))+(0.2*_n_v_14571)))));
}
}else {d::check_cancel();if(((d::truth((_n_y_14564<(_n_domeBase_14562-_n_domeH_14559)))&&d::truth((_n_y_14564>=((_n_domeBase_14562-_n_domeH_14559)-(3.4*_n_sc_14554)))))&&d::truth((std::fabs(_n_dx_14566)<0.55)))){d::check_cancel();(void)((d::read((_n_c_14567=d::Array<double,false>{0.98,0.82,0.5})),(_n_s_14568=1.0)));
}
}
}
}
if(d::truth((!d::truth(_n_c_14567)))){d::check_cancel();continue;
}
d::Array<double,false> _n_sky_14573=_n_skyAt_14419(_n_y_14564);
(void)(([&](){auto _n_argument_14819=_n_x_14565;auto _n_argument_14820=_n_r_14563;auto _n_argument_14821=d::Array<double,false>{_n_mix_14417((d::at(d::read(_n_c_14567),0.0)*_n_s_14568),d::at(_n_sky_14573,0.0),_n_far_14555),_n_mix_14417((d::at(d::read(_n_c_14567),1.0)*_n_s_14568),d::at(_n_sky_14573,1.0),_n_far_14555),_n_mix_14417((d::at(d::read(_n_c_14567),2.0)*_n_s_14568),d::at(_n_sky_14573,2.0),_n_far_14555)};auto _n_argument_14822=1.0;return this->_n_paint_14437(_n_argument_14819,_n_argument_14820,_n_argument_14821,_n_argument_14822);})());
}}
}}

}
}

void _n_set_14450(double _a0,double _a1,d::Array<double,false> _a2,std::optional<double> _a3){double _n_x_14588=_a0;
double _n_r_14589=_a1;
d::Array<double,false> _n_c_14590=_a2;
double _n_a_14591=(d::present(_a3)?d::read(_a3):1.0);
{
(void)(((_n_x_14588=d::round(_n_x_14588)),(_n_r_14589=d::round(_n_r_14589))));
if((((d::truth((_n_x_14588<0.0))||d::truth((_n_x_14588>=_n_W_14405)))||d::truth((_n_r_14589<0.0)))||d::truth((_n_r_14589>=_n_H_14406)))){d::check_cancel();return;
}
double _n_k_14592=((_n_r_14589*_n_W_14405)+_n_x_14588);
(void)(((([&](){auto&& _n_array_14823=this->_n_FR_14447;auto _n_index_14824=_n_k_14592;auto _n_value_14825=_n_mix_14417(d::at(this->_n_FR_14447,_n_k_14592),d::at(_n_c_14590,0.0),_n_a_14591);d::put(_n_array_14823,_n_index_14824,_n_value_14825);return _n_value_14825;})(),([&](){auto&& _n_array_14826=this->_n_FG_14448;auto _n_index_14827=_n_k_14592;auto _n_value_14828=_n_mix_14417(d::at(this->_n_FG_14448,_n_k_14592),d::at(_n_c_14590,1.0),_n_a_14591);d::put(_n_array_14826,_n_index_14827,_n_value_14828);return _n_value_14828;})()),([&](){auto&& _n_array_14829=this->_n_FB_14449;auto _n_index_14830=_n_k_14592;auto _n_value_14831=_n_mix_14417(d::at(this->_n_FB_14449,_n_k_14592),d::at(_n_c_14590,2.0),_n_a_14591);d::put(_n_array_14829,_n_index_14830,_n_value_14831);return _n_value_14831;})()));

}
}

explicit Native_jal_mahal(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_14420=d::map(_n_meta_14403->_p_palette,_n_hex_14418);
this->_n_N_14421=(_n_W_14405*_n_H_14406);
this->_n_out_14422=d::Array<d::String,false>(size_t(this->_n_N_14421));
this->_n_lut_14423=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_SR_14425=d::Array<float,true>(size_t((_n_WATER_14407*_n_W_14405)));
this->_n_SG_14426=d::Array<float,true>(size_t((_n_WATER_14407*_n_W_14405)));
this->_n_SB_14427=d::Array<float,true>(size_t((_n_WATER_14407*_n_W_14405)));
this->_n_solid_14428=d::Array<uint8_t,true>(size_t((_n_WATER_14407*_n_W_14405)));
this->_n_ridges_14430=d::Array<std::shared_ptr<_n_Record_14431>,false>{([&](){auto _n_object_14663=std::make_shared<_n_Record_14431>();_n_object_14663->_p_top=[=]( double _a0) mutable ->double{double _n_x_14507=_a0;
return ([&](){auto _n_left_14664=([&](){auto _n_left_14666=([&](){auto _n_left_14668=([&](){auto _n_left_14670=(45.0-(15.0*this->_n_hump_14429(_n_x_14507,32.0,30.0)));auto _n_right_14671=(9.0*this->_n_hump_14429(_n_x_14507,98.0,22.0));return (_n_left_14670-_n_right_14671);})();auto _n_right_14669=(6.0*this->_n_hump_14429(_n_x_14507,188.0,18.0));return (_n_left_14668-_n_right_14669);})();auto _n_right_14667=(4.0*this->_n_hump_14429(_n_x_14507,138.0,12.0));return (_n_left_14666-_n_right_14667);})();auto _n_right_14665=(3.0*_n_fbm_14414((_n_x_14507*0.09),1.3,3.0,0.0));return (_n_left_14664-_n_right_14665);})();};_n_object_14663->_p_tone=d::Array<double,false>{0.5,0.5,0.68};return _n_object_14663;})(),([&](){auto _n_object_14673=std::make_shared<_n_Record_14431>();_n_object_14673->_p_top=[=]( double _a0) mutable ->double{double _n_x_14508=_a0;
return ([&](){auto _n_left_14674=([&](){auto _n_left_14676=([&](){auto _n_left_14678=(52.0-(9.0*this->_n_hump_14429(_n_x_14508,8.0,20.0)));auto _n_right_14679=(7.0*this->_n_hump_14429(_n_x_14508,62.0,16.0));return (_n_left_14678-_n_right_14679);})();auto _n_right_14677=(6.0*this->_n_hump_14429(_n_x_14508,172.0,15.0));return (_n_left_14676-_n_right_14677);})();auto _n_right_14675=(2.5*_n_fbm_14414((_n_x_14508*0.11),4.1,3.0,0.0));return (_n_left_14674-_n_right_14675);})();};_n_object_14673->_p_tone=d::Array<double,false>{0.36,0.34,0.52};return _n_object_14673;})(),([&](){auto _n_object_14681=std::make_shared<_n_Record_14431>();_n_object_14681->_p_top=[=]( double _a0) mutable ->double{double _n_x_14509=_a0;
return ([&](){auto _n_left_14682=([&](){auto _n_left_14684=(58.5-(3.0*this->_n_hump_14429(_n_x_14509,36.0,28.0)));auto _n_right_14685=(3.0*this->_n_hump_14429(_n_x_14509,152.0,24.0));return (_n_left_14684-_n_right_14685);})();auto _n_right_14683=(1.6*_n_fbm_14414((_n_x_14509*0.14),7.7,3.0,0.0));return (_n_left_14682-_n_right_14683);})();};_n_object_14681->_p_tone=d::Array<double,false>{0.24,0.2,0.3};return _n_object_14681;})()};
{double _n_r_14513=0.0;
for(;d::truth((_n_r_14513<_n_WATER_14407));(void)((_n_r_14513++))){d::check_cancel();double _n_y_14514=(_n_r_14513+0.5);
auto _n_binding_14686=_n_skyAt_14419(_n_y_14514);
double _n_sr_14515=d::at(_n_binding_14686,0.0);
double _n_sg_14516=d::at(_n_binding_14686,1.0);
double _n_sb_14517=d::at(_n_binding_14686,2.0);
{double _n_x_14518=0.0;
for(;d::truth((_n_x_14518<_n_W_14405));(void)((_n_x_14518++))){d::check_cancel();double _n_k_14519=((_n_r_14513*_n_W_14405)+_n_x_14518);
double _n_dx_14520=((_n_x_14518+0.5)-d::at(_n_SUN_14408,0.0));
double _n_dy_14521=(_n_y_14514-d::at(_n_SUN_14408,1.0));
double _n_ds_14522=std::sqrt(((_n_dx_14520*_n_dx_14520)+(_n_dy_14521*_n_dy_14521)));
double _n_glow_14523=([&](){auto _n_left_14687=(std::exp(((-d::number(_n_ds_14522))/34.0))*0.3);auto _n_right_14688=(std::exp(((-d::number(_n_ds_14522))/11.0))*0.45);return (_n_left_14687+_n_right_14688);})();
double _n_streak_14524=(0.08*(_n_fbm_14414((_n_x_14518*0.025),(_n_y_14514*0.3),3.0,0.0)-0.5));
double _n_cr_14525=((_n_sr_14515+(_n_glow_14523*0.6))+_n_streak_14524);
double _n_cg_14526=((_n_sg_14516+(_n_glow_14523*0.48))+(_n_streak_14524*0.9));
double _n_cb_14527=((_n_sb_14517+(_n_glow_14523*0.2))+_n_streak_14524);
double _n_cl_14528=([&](){auto _n_left_14689=([&](){auto _n_left_14691=([&](){auto _n_argument_14693=0.56;auto _n_argument_14694=0.74;auto _n_argument_14695=_n_fbm_14414((_n_x_14518*0.012),(_n_y_14514*0.32),4.0,0.0);return _n_smooth_14416(_n_argument_14693,_n_argument_14694,_n_argument_14695);})();auto _n_right_14692=_n_smooth_14416(8.0,16.0,_n_y_14514);return (_n_left_14691*_n_right_14692);})();auto _n_right_14690=_n_smooth_14416(38.0,28.0,_n_y_14514);return (_n_left_14689*_n_right_14690);})();
if(d::truth((_n_cl_14528>0.0))){d::check_cancel();double _n_warm_14529=std::exp(((-d::number(_n_ds_14522))/40.0));
(void)((((_n_cr_14525=_n_mix_14417(_n_cr_14525,1.0,(_n_cl_14528*0.55))),(_n_cg_14526=_n_mix_14417(_n_cg_14526,(0.76+(0.12*_n_warm_14529)),(_n_cl_14528*0.55)))),(_n_cb_14527=_n_mix_14417(_n_cb_14527,(0.74-(0.1*_n_warm_14529)),(_n_cl_14528*0.55)))));
}
if(d::truth((_n_ds_14522<7.5))){d::check_cancel();double _n_a_14530=_n_smooth_14416(7.5,6.2,_n_ds_14522);
(void)((((_n_cr_14525=_n_mix_14417(_n_cr_14525,1.0,_n_a_14530)),(_n_cg_14526=([&](){auto _n_argument_14696=_n_cg_14526;auto _n_argument_14697=(0.9+(0.08*_n_smooth_14416(7.0,0.0,_n_ds_14522)));auto _n_argument_14698=_n_a_14530;return _n_mix_14417(_n_argument_14696,_n_argument_14697,_n_argument_14698);})())),(_n_cb_14527=([&](){auto _n_argument_14699=_n_cb_14527;auto _n_argument_14700=(0.6+(0.3*_n_smooth_14416(7.0,0.0,_n_ds_14522)));auto _n_argument_14701=_n_a_14530;return _n_mix_14417(_n_argument_14699,_n_argument_14700,_n_argument_14701);})())));
}
{double _n_i_14531=(double(this->_n_ridges_14430.size())-1.0);
for(;d::truth((_n_i_14531>=0.0));(void)((_n_i_14531--))){d::check_cancel();std::shared_ptr<_n_Record_14431> _n_R_14532=d::at(this->_n_ridges_14430,_n_i_14531);
double _n_t0_14533=_n_R_14532->_p_top(_n_x_14518);
if(d::truth((_n_y_14514<_n_t0_14533))){d::check_cancel();continue;
}
double _n_lit_14534=([&](){auto _n_left_14702=(0.06*(_n_fbm_14414((_n_x_14518*0.12),(_n_y_14514*0.2),3.0,0.0)-0.5));auto _n_right_14703=(0.05*_n_smooth_14416((_n_t0_14533+2.5),_n_t0_14533,_n_y_14514));return (_n_left_14702+_n_right_14703);})();
double _n_pool_14535=(_n_smooth_14416((_n_t0_14533+2.0),(_n_t0_14533+12.0),_n_y_14514)*0.5);
double _n_h_14536=_n_pool_14535;
(void)((_n_cr_14525=_n_mix_14417((d::at(_n_R_14532->_p_tone,0.0)+_n_lit_14534),(_n_sr_14515+(_n_glow_14523*0.4)),_n_h_14536)));
(void)((_n_cg_14526=_n_mix_14417((d::at(_n_R_14532->_p_tone,1.0)+_n_lit_14534),(_n_sg_14516+(_n_glow_14523*0.32)),_n_h_14536)));
(void)((_n_cb_14527=_n_mix_14417((d::at(_n_R_14532->_p_tone,2.0)+_n_lit_14534),(_n_sb_14517+(_n_glow_14523*0.15)),_n_h_14536)));
break;
}}
double _n_ft_14537=this->_n_fortTop_14432(_n_x_14518);
if(((d::truth((_n_y_14514>=_n_ft_14537))&&d::truth((_n_y_14514<(d::at(this->_n_ridges_14430,0.0)->_p_top(_n_x_14518)+0.5))))&&d::truth((_n_y_14514<d::at(this->_n_ridges_14430,1.0)->_p_top(_n_x_14518))))){d::check_cancel();if(d::truth((!d::truth(([&]()->bool{auto _n_logical_14704=(_n_y_14514<(_n_ft_14537+0.8));return d::truth(_n_logical_14704)?(d::mod(_n_x_14518,3.0)==0.0):_n_logical_14704;})())))){d::check_cancel();(void)((((_n_cr_14525=0.72),(_n_cg_14526=0.56)),(_n_cb_14527=0.62)));
}
}
(void)(((([&](){auto&& _n_array_14705=this->_n_SR_14425;auto _n_index_14706=_n_k_14519;auto _n_value_14707=_n_cr_14525;d::put(_n_array_14705,_n_index_14706,_n_value_14707);return _n_value_14707;})(),([&](){auto&& _n_array_14708=this->_n_SG_14426;auto _n_index_14709=_n_k_14519;auto _n_value_14710=_n_cg_14526;d::put(_n_array_14708,_n_index_14709,_n_value_14710);return _n_value_14710;})()),([&](){auto&& _n_array_14711=this->_n_SB_14427;auto _n_index_14712=_n_k_14519;auto _n_value_14713=_n_cb_14527;d::put(_n_array_14711,_n_index_14712,_n_value_14713);return _n_value_14713;})()));
}}
}}
this->_n_STONE_14433=d::Array<double,false>{1.0,0.76,0.58};
this->_n_SHADE_14434=d::Array<double,false>{0.6,0.42,0.42};
this->_n_HOLE_14435=d::Array<double,false>{0.2,0.13,0.19};
this->_n_DOME_14436=d::Array<double,false>{1.0,0.9,0.74};
this->_n_L_14438=64.0;
this->_n_Rt_14439=136.0;
this->_n_ROOF_14440=47.0;
{double _n_r_14543=40.0;
for(;d::truth((_n_r_14543<_n_WATER_14407));(void)((_n_r_14543++))){d::check_cancel();double _n_y_14544=(_n_r_14543+0.5);
{double _n_x_14545=(this->_n_L_14438-2.0);
for(;d::truth((_n_x_14545<=(this->_n_Rt_14439+2.0)));(void)((_n_x_14545++))){d::check_cancel();double _n_fx_14546=(_n_x_14545+0.5);
double _n_grain_14547=(0.94+(0.08*_n_hash_14412((_n_x_14545*3.0),(_n_r_14543*7.0))));
if(((((d::truth((_n_y_14544>=(this->_n_ROOF_14440-2.0)))&&d::truth((_n_y_14544<(this->_n_ROOF_14440-0.5))))&&d::truth((_n_fx_14546>=this->_n_L_14438)))&&d::truth((_n_fx_14546<=this->_n_Rt_14439)))&&d::truth((d::mod(std::floor(_n_fx_14546),3.0)!=0.0)))){d::check_cancel();(void)(this->_n_paint_14437(_n_x_14545,_n_r_14543,this->_n_STONE_14433,(0.95*_n_grain_14547)));
}
if((((d::truth((_n_y_14544>=(this->_n_ROOF_14440-0.5)))&&d::truth((_n_y_14544<(this->_n_ROOF_14440+1.0))))&&d::truth((_n_fx_14546>=(this->_n_L_14438-1.5))))&&d::truth((_n_fx_14546<=(this->_n_Rt_14439+1.5))))){d::check_cancel();(void)(this->_n_paint_14437(_n_x_14545,_n_r_14543,this->_n_DOME_14436,0.98));
}
if(((d::truth((_n_y_14544<(this->_n_ROOF_14440+1.0)))||d::truth((_n_fx_14546<this->_n_L_14438)))||d::truth((_n_fx_14546>this->_n_Rt_14439)))){d::check_cancel();continue;
}
d::Array<double,false> _n_c_14548=this->_n_STONE_14433;
double _n_s_14549=(_n_grain_14547*(0.9+(0.1*_n_smooth_14416(this->_n_L_14438,this->_n_Rt_14439,_n_fx_14546))));
if(d::truth((_n_fx_14546<(this->_n_L_14438+4.0)))){d::check_cancel();(void)(((_n_c_14548=this->_n_SHADE_14434),(_n_s_14549=_n_grain_14547)));
}
if((d::truth((_n_y_14544>=53.0))&&d::truth((_n_y_14544<54.2)))){d::check_cancel();(void)(((_n_c_14548=this->_n_DOME_14436),(_n_s_14549=0.95)));
}
double _n_up_14550=(d::mod((d::mod(((_n_fx_14546-this->_n_L_14438)-6.0),4.5)+4.5),4.5)-2.25);
if((((((d::truth((_n_y_14544>=48.6))&&d::truth((_n_y_14544<52.6)))&&d::truth((_n_fx_14546>(this->_n_L_14438+5.0))))&&d::truth((_n_fx_14546<(this->_n_Rt_14439-4.0))))&&d::truth((std::fabs(_n_up_14550)<1.05)))&&d::truth((_n_y_14544>(49.4+((_n_up_14550*_n_up_14550)*0.5)))))){d::check_cancel();(void)(((_n_c_14548=this->_n_HOLE_14435),(_n_s_14549=1.0)));
}
double _n_lo_14551=(d::mod((d::mod(((_n_fx_14546-this->_n_L_14438)-7.0),6.0)+6.0),6.0)-3.0);
if(((((d::truth((_n_y_14544>=55.2))&&d::truth((_n_fx_14546>(this->_n_L_14438+5.0))))&&d::truth((_n_fx_14546<(this->_n_Rt_14439-4.0))))&&d::truth((std::fabs(_n_lo_14551)<1.5)))&&d::truth((_n_y_14544>(56.2+((_n_lo_14551*_n_lo_14551)*0.45)))))){d::check_cancel();(void)(((_n_c_14548=this->_n_HOLE_14435),(_n_s_14549=0.9)));
}
if(((d::truth((_n_y_14544>=54.2))&&d::truth((std::fabs(_n_lo_14551)>2.6)))&&d::truth((_n_fx_14546>(this->_n_L_14438+5.0))))){d::check_cancel();(void)((_n_s_14549=(_n_s_14549*1.06)));
}
if(d::truth((_n_y_14544>(_n_WATER_14407-2.0)))){d::check_cancel();(void)((_n_s_14549=(_n_s_14549*0.62)));
}
(void)(this->_n_paint_14437(_n_x_14545,_n_r_14543,_n_c_14548,_n_s_14549));
}}
}}
(void)(this->_n_chhatri_14441(83.0,(this->_n_ROOF_14440-1.5),0.85,0.22));
(void)(this->_n_chhatri_14441(117.0,(this->_n_ROOF_14440-1.5),0.85,0.22));
{double _n_r_14574=34.0;
for(;d::truth((_n_r_14574<this->_n_ROOF_14440));(void)((_n_r_14574++))){d::check_cancel();double _n_y_14575=(_n_r_14574+0.5);
{double _n_x_14576=88.0;
for(;d::truth((_n_x_14576<=112.0));(void)((_n_x_14576++))){d::check_cancel();double _n_dx_14577=((_n_x_14576+0.5)-100.0);
double _n_roofTop_14578=(37.0+(2.4*std::pow((_n_dx_14577/11.0),2.0)));
if(((d::truth((_n_y_14575>=41.0))&&d::truth((_n_y_14575<(this->_n_ROOF_14440-1.5))))&&d::truth((std::fabs(_n_dx_14577)<=9.0)))){d::check_cancel();double _n_bay_14579=(d::mod((d::mod((_n_dx_14577+9.0),6.0)+6.0),6.0)-3.0);
bool _n_open_14580=([&]()->bool{auto _n_logical_14714=(std::fabs(_n_bay_14579)<1.3);return d::truth(_n_logical_14714)?(_n_y_14575>(42.4+((_n_bay_14579*_n_bay_14579)*0.45))):_n_logical_14714;})();
(void)(this->_n_paint_14437(_n_x_14576,_n_r_14574,(d::truth(_n_open_14580)?this->_n_HOLE_14435:this->_n_STONE_14433),(d::truth(_n_open_14580)?1.0:(d::truth((_n_dx_14577<(-d::number(6.0))))?0.78:0.96))));
}else {d::check_cancel();if(((d::truth((_n_y_14575>=_n_roofTop_14578))&&d::truth((_n_y_14575<41.0)))&&d::truth((std::fabs(_n_dx_14577)<=11.0)))){d::check_cancel();(void)(this->_n_paint_14437(_n_x_14576,_n_r_14574,this->_n_DOME_14436,((0.86+(0.08*(_n_dx_14577/11.0)))+((0.08*(41.0-_n_y_14575))/4.0))));
}
}
}}
}}
(void)(this->_n_chhatri_14441(67.5,(this->_n_ROOF_14440-1.5),1.0,0.0));
(void)(this->_n_chhatri_14441(132.5,(this->_n_ROOF_14440-1.5),1.0,0.0));
this->_n_MW_14442=480.0;
this->_n_mist_14443=d::Array<float,true>(size_t((this->_n_MW_14442*_n_H_14406)));
{double _n_r_14581=0.0;
for(;d::truth((_n_r_14581<_n_H_14406));(void)((_n_r_14581++))){d::check_cancel();{double _n_x_14582=0.0;
for(;d::truth((_n_x_14582<this->_n_MW_14442));(void)((_n_x_14582++))){d::check_cancel();(void)(([&](){auto&& _n_array_14715=this->_n_mist_14443;auto _n_index_14716=((_n_r_14581*this->_n_MW_14442)+_n_x_14582);auto _n_value_14717=([&](){auto _n_argument_14718=0.44;auto _n_argument_14719=0.72;auto _n_argument_14720=_n_fbm_14414((_n_x_14582*0.02),(_n_r_14581*0.14),4.0,(this->_n_MW_14442*0.02));return _n_smooth_14416(_n_argument_14718,_n_argument_14719,_n_argument_14720);})();d::put(_n_array_14715,_n_index_14716,_n_value_14717);return _n_value_14717;})());
}}
}}
this->_n_band_14444=d::Array<float,true>(size_t(_n_H_14406));
{double _n_r_14583=0.0;
for(;d::truth((_n_r_14583<_n_H_14406));(void)((_n_r_14583++))){d::check_cancel();double _n_y_14584=(_n_r_14583+0.5);
(void)(([&](){auto&& _n_array_14721=this->_n_band_14444;auto _n_index_14722=_n_r_14583;auto _n_value_14723=([&](){auto _n_left_14724=([&](){auto _n_left_14726=(0.95*std::exp((-d::number(std::pow(((_n_y_14584-_n_WATER_14407)/4.5),2.0)))));auto _n_right_14727=(0.6*std::exp((-d::number(std::pow(((_n_y_14584-51.0)/3.0),2.0)))));return (_n_left_14726+_n_right_14727);})();auto _n_right_14725=(0.3*std::exp((-d::number(std::pow(((_n_y_14584-40.0)/3.5),2.0)))));return (_n_left_14724+_n_right_14725);})();d::put(_n_array_14721,_n_index_14722,_n_value_14723);return _n_value_14723;})());
}}
this->_n_birds_14445=d::Array<std::shared_ptr<_n_Record_14446>,false>{};
{double _n_i_14585=0.0;
for(;d::truth((_n_i_14585<9.0));(void)((_n_i_14585++))){d::check_cancel();(void)(this->_n_birds_14445.push(([&](){auto _n_object_14729=std::make_shared<_n_Record_14446>();_n_object_14729->_p_x0=((40.0+(_n_i_14585*6.0))+(_n_hash_14412(_n_i_14585,1.0)*4.0));_n_object_14729->_p_y0=([&](){auto _n_left_14730=(14.0+(std::fabs((_n_i_14585-4.0))*2.2));auto _n_right_14731=(_n_hash_14412(_n_i_14585,2.0)*1.5);return (_n_left_14730+_n_right_14731);})();_n_object_14729->_p_v=4.2;_n_object_14729->_p_ph=(_n_hash_14412(_n_i_14585,3.0)*6.28);_n_object_14729->_p_span=2.0;_n_object_14729->_p_low=false;return _n_object_14729;})()));
}}
{double _n_i_14586=0.0;
for(;d::truth((_n_i_14586<4.0));(void)((_n_i_14586++))){d::check_cancel();(void)(this->_n_birds_14445.push(([&](){auto _n_object_14733=std::make_shared<_n_Record_14446>();_n_object_14733->_p_x0=(160.0+(_n_i_14586*9.0));_n_object_14733->_p_y0=(22.0+(_n_hash_14412(_n_i_14586,4.0)*6.0));_n_object_14733->_p_v=3.1;_n_object_14733->_p_ph=(_n_hash_14412(_n_i_14586,5.0)*6.28);_n_object_14733->_p_span=2.0;_n_object_14733->_p_low=false;return _n_object_14733;})()));
}}
{double _n_i_14587=0.0;
for(;d::truth((_n_i_14587<5.0));(void)((_n_i_14587++))){d::check_cancel();(void)(this->_n_birds_14445.push(([&](){auto _n_object_14735=std::make_shared<_n_Record_14446>();_n_object_14735->_p_x0=((_n_i_14587*14.0)+(_n_hash_14412(_n_i_14587,6.0)*6.0));_n_object_14735->_p_y0=(67.0+(_n_hash_14412(_n_i_14587,7.0)*5.0));_n_object_14735->_p_v=6.5;_n_object_14735->_p_ph=(_n_hash_14412(_n_i_14587,8.0)*6.28);_n_object_14735->_p_span=3.0;_n_object_14735->_p_low=true;return _n_object_14735;})()));
}}
this->_n_FR_14447=d::Array<float,true>(size_t(this->_n_N_14421));
this->_n_FG_14448=d::Array<float,true>(size_t(this->_n_N_14421));
this->_n_FB_14449=d::Array<float,true>(size_t(this->_n_N_14421));
_render=[=]( double _a0,std::shared_ptr<_n_Record_14653> _a1) mutable ->d::String{double _n_t_14593=_a0;
auto _n_binding_14738=(d::present(_a1)?_a1:([&](){auto _n_object_14737=std::make_shared<_n_Record_14653>();return _n_object_14737;})());
std::optional<d::Array<uint8_t,true>> _n_color_14594=_n_binding_14738->_p_color;
{
double _n_drift_14595=(_n_t_14593*1.6);
{double _n_r_14596=0.0;
for(;d::truth((_n_r_14596<_n_H_14406));(void)((_n_r_14596++))){d::check_cancel();double _n_y_14597=(_n_r_14596+0.5);
double _n_mo_14598=std::floor((_n_drift_14595*(0.6+(0.4*d::at(this->_n_band_14444,_n_r_14596)))));
{double _n_x_14599=0.0;
for(;d::truth((_n_x_14599<_n_W_14405));(void)((_n_x_14599++))){d::check_cancel();double _n_k_14600=((_n_r_14596*_n_W_14405)+_n_x_14599);
double _n_cr_14601{};
double _n_cg_14602{};
double _n_cb_14603{};
if(d::truth((_n_r_14596<_n_WATER_14407))){d::check_cancel();(void)((((_n_cr_14601=d::at(this->_n_SR_14425,_n_k_14600)),(_n_cg_14602=d::at(this->_n_SG_14426,_n_k_14600))),(_n_cb_14603=d::at(this->_n_SB_14427,_n_k_14600))));
}else {d::check_cancel();double _n_d_14604=(_n_y_14597-_n_WATER_14407);
double _n_w_14605=([&](){auto _n_left_14739=(_n_noise_14413(((_n_x_14599*0.05)+(_n_t_14593*0.15)),((_n_d_14604*0.7)-(_n_t_14593*0.9)),0.0)-0.5);auto _n_right_14740=(0.5*(_n_noise_14413(((_n_x_14599*0.16)-(_n_t_14593*0.3)),((_n_d_14604*1.6)-(_n_t_14593*1.6)),0.0)-0.5));return (_n_left_14739+_n_right_14740);})();
double _n_amp_14606=(0.15+(_n_d_14604*0.07));
double _n_sx_14607=([&](){auto _n_argument_14741=0.0;auto _n_argument_14742=([&](){auto _n_argument_14743=(_n_W_14405-1.0);auto _n_argument_14744=d::round((_n_x_14599+((_n_w_14605*_n_amp_14606)*3.0)));return d::minimum({_n_argument_14743,_n_argument_14744});})();return d::maximum({_n_argument_14741,_n_argument_14742});})();
double _n_sr_14608=([&](){auto _n_argument_14745=0.0;auto _n_argument_14746=([&](){auto _n_argument_14747=(_n_WATER_14407-1.0);auto _n_argument_14748=d::round((((_n_WATER_14407-1.0)-_n_d_14604)+(_n_w_14605*(0.3+(_n_d_14604*0.05)))));return d::minimum({_n_argument_14747,_n_argument_14748});})();return d::maximum({_n_argument_14745,_n_argument_14746});})();
double _n_j_14609=((_n_sr_14608*_n_W_14405)+_n_sx_14607);
double _n_dim_14610=((0.86-(0.12*_n_smooth_14416(0.0,38.0,_n_d_14604)))*(d::truth(d::at(this->_n_solid_14428,_n_j_14609))?0.8:1.0));
double _n_edge_14611=(d::truth((_n_d_14604<1.0))?0.14:0.0);
(void)((((_n_cr_14601=(((d::at(this->_n_SR_14425,_n_j_14609)*_n_dim_14610)+0.07)+_n_edge_14611)),(_n_cg_14602=(((d::at(this->_n_SG_14426,_n_j_14609)*_n_dim_14610)+0.02)+_n_edge_14611))),(_n_cb_14603=(((d::at(this->_n_SB_14427,_n_j_14609)*_n_dim_14610)+0.02)+(_n_edge_14611*1.1)))));
double _n_line_14612=_n_noise_14413(((_n_x_14599*0.03)-(_n_t_14593*0.05)),((_n_d_14604*2.4)-(_n_t_14593*0.6)),0.0);
double _n_ln_14613=([&](){auto _n_left_14749=([&](){auto _n_left_14751=_n_smooth_14416(0.6,0.85,_n_line_14612);auto _n_right_14752=(_n_smooth_14416(0.4,0.15,_n_line_14612)*0.7);return (_n_left_14751-_n_right_14752);})();auto _n_right_14750=(0.04+(0.08*_n_smooth_14416(0.0,30.0,_n_d_14604)));return (_n_left_14749*_n_right_14750);})();
(void)((((_n_cr_14601=(_n_cr_14601+_n_ln_14613)),(_n_cg_14602=(_n_cg_14602+_n_ln_14613))),(_n_cb_14603=(_n_cb_14603+(_n_ln_14613*1.1)))));
double _n_pathW_14614=(4.0+(_n_d_14604*0.45));
double _n_path_14615=std::exp((-d::number(std::pow(((((_n_x_14599+0.5)-d::at(_n_SUN_14408,0.0))-(_n_w_14605*2.0))/_n_pathW_14614),2.0))));
double _n_glint_14616=(([&](){auto _n_argument_14753=0.55;auto _n_argument_14754=0.82;auto _n_argument_14755=_n_noise_14413(((_n_x_14599*0.3)+(_n_t_14593*0.4)),((_n_d_14604*1.4)-(_n_t_14593*1.2)),0.0);return _n_smooth_14416(_n_argument_14753,_n_argument_14754,_n_argument_14755);})()*_n_path_14615);
(void)((((_n_cr_14601=(_n_cr_14601+((0.55*_n_glint_14616)+(0.2*_n_path_14615)))),(_n_cg_14602=(_n_cg_14602+((0.45*_n_glint_14616)+(0.15*_n_path_14615))))),(_n_cb_14603=(_n_cb_14603+((0.22*_n_glint_14616)+(0.04*_n_path_14615))))));
}
double _n_mv_14617=(d::at(this->_n_mist_14443,((_n_r_14596*this->_n_MW_14442)+d::mod((d::mod((_n_x_14599-_n_mo_14598),this->_n_MW_14442)+this->_n_MW_14442),this->_n_MW_14442)))*d::at(this->_n_band_14444,_n_r_14596));
if(d::truth((_n_mv_14617>0.01))){d::check_cancel();double _n_a_14618=(_n_mv_14617*((d::truth((_n_r_14596<_n_WATER_14407))&&d::truth(d::at(this->_n_solid_14428,_n_k_14600)))?0.4:0.75));
(void)((((_n_cr_14601=_n_mix_14417(_n_cr_14601,0.98,_n_a_14618)),(_n_cg_14602=_n_mix_14417(_n_cg_14602,0.86,_n_a_14618))),(_n_cb_14603=_n_mix_14417(_n_cb_14603,0.86,_n_a_14618))));
}
(void)(((([&](){auto&& _n_array_14756=this->_n_FR_14447;auto _n_index_14757=_n_k_14600;auto _n_value_14758=_n_cr_14601;d::put(_n_array_14756,_n_index_14757,_n_value_14758);return _n_value_14758;})(),([&](){auto&& _n_array_14759=this->_n_FG_14448;auto _n_index_14760=_n_k_14600;auto _n_value_14761=_n_cg_14602;d::put(_n_array_14759,_n_index_14760,_n_value_14761);return _n_value_14761;})()),([&](){auto&& _n_array_14762=this->_n_FB_14449;auto _n_index_14763=_n_k_14600;auto _n_value_14764=_n_cb_14603;d::put(_n_array_14762,_n_index_14763,_n_value_14764);return _n_value_14764;})()));
}}
}}
double _n_bx_14619=(158.0+(4.0*std::sin((_n_t_14593*0.08))));
double _n_by_14620=(79.0+(0.4*std::sin((_n_t_14593*1.3))));
d::Array<double,false> _n_WOOD_14621=d::Array<double,false>{0.24,0.15,0.12};
d::Array<double,false> _n_WOOD2_14622=d::Array<double,false>{0.4,0.26,0.18};
d::Array<double,false> _n_MAN_14623=d::Array<double,false>{0.2,0.15,0.19};
{double _n_ring_14624=0.0;
for(;d::truth((_n_ring_14624<2.0));(void)((_n_ring_14624++))){d::check_cancel();double _n_rad_14625=(d::mod(((_n_t_14593*1.4)+(_n_ring_14624*4.5)),9.0)+1.0);
{double _n_a_14626=0.0;
for(;d::truth((_n_a_14626<60.0));(void)((_n_a_14626++))){d::check_cancel();double _n_ang_14627=(((_n_a_14626/60.0)*ascii::PI)*2.0);
(void)(([&](){auto _n_argument_14765=((_n_bx_14619-9.0)+((std::cos(_n_ang_14627)*_n_rad_14625)*2.0));auto _n_argument_14766=((_n_by_14620+5.0)+((std::sin(_n_ang_14627)*_n_rad_14625)*0.4));auto _n_argument_14767=d::Array<double,false>{0.98,0.9,0.86};auto _n_argument_14768=(0.6*(1.0-(_n_rad_14625/10.0)));return this->_n_set_14450(_n_argument_14765,_n_argument_14766,_n_argument_14767,std::optional<double>(_n_argument_14768));})());
}}
}}
{double _n_i_14628=(-d::number(12.0));
for(;d::truth((_n_i_14628<=12.0));(void)((_n_i_14628++))){d::check_cancel();double _n_rise_14629=(([&](){auto _n_argument_14769=(std::fabs(_n_i_14628)/12.0);auto _n_argument_14770=3.0;return std::pow(_n_argument_14769,_n_argument_14770);})()*3.2);
(void)(this->_n_set_14450((_n_bx_14619+_n_i_14628),(_n_by_14620-_n_rise_14629),_n_WOOD2_14622,std::optional<double>{}));
if(d::truth((std::fabs(_n_i_14628)<11.5))){d::check_cancel();(void)(this->_n_set_14450((_n_bx_14619+_n_i_14628),((_n_by_14620+1.0)-(_n_rise_14629*0.3)),_n_WOOD_14621,std::optional<double>{}));
}
if(d::truth((std::fabs(_n_i_14628)<9.5))){d::check_cancel();(void)(this->_n_set_14450((_n_bx_14619+_n_i_14628),(_n_by_14620+2.0),_n_WOOD_14621,std::optional<double>{}));
}
if((d::truth((std::fabs(_n_i_14628)<10.0))&&d::truth((([&](){auto _n_argument_14771=(_n_i_14628+std::floor((_n_t_14593*4.0)));auto _n_argument_14772=9.0;return _n_hash_14412(_n_argument_14771,_n_argument_14772);})()>0.3)))){d::check_cancel();(void)(([&](){auto _n_argument_14773=((_n_bx_14619+_n_i_14628)+(std::sin(((_n_t_14593*2.0)+_n_i_14628))*0.6));auto _n_argument_14774=(_n_by_14620+4.0);auto _n_argument_14775=d::Array<double,false>{0.32,0.26,0.32};auto _n_argument_14776=0.7;return this->_n_set_14450(_n_argument_14773,_n_argument_14774,_n_argument_14775,std::optional<double>(_n_argument_14776));})());
}
}}
{double _n_j_14630=0.0;
for(;d::truth((_n_j_14630<9.0));(void)((_n_j_14630++))){d::check_cancel();(void)((this->_n_set_14450((_n_bx_14619+3.0),((_n_by_14620-1.0)-_n_j_14630),_n_MAN_14623,std::optional<double>{}),([&]()->std::optional<bool>{auto _n_logical_14777=([&]()->bool{auto _n_logical_14778=(_n_j_14630>1.0);return d::truth(_n_logical_14778)?(_n_j_14630<7.0):_n_logical_14778;})();return d::truth(_n_logical_14777)?(this->_n_set_14450((_n_bx_14619+4.0),((_n_by_14620-1.0)-_n_j_14630),_n_MAN_14623,std::optional<double>{}),std::optional<bool>{}):std::optional<bool>(_n_logical_14777);})()));
}}
(void)((this->_n_set_14450((_n_bx_14619+5.0),(_n_by_14620-6.0),_n_MAN_14623,std::optional<double>{}),this->_n_set_14450((_n_bx_14619+6.0),(_n_by_14620-7.0),_n_MAN_14623,std::optional<double>{})));
(void)((this->_n_set_14450((_n_bx_14619+3.0),(_n_by_14620-11.0),_n_MAN_14623,std::optional<double>{}),this->_n_set_14450((_n_bx_14619+4.0),(_n_by_14620-11.0),_n_MAN_14623,std::optional<double>{})));
(void)((this->_n_set_14450((_n_bx_14619+3.0),(_n_by_14620-12.0),d::Array<double,false>{0.9,0.3,0.28},std::optional<double>{}),this->_n_set_14450((_n_bx_14619+4.0),(_n_by_14620-12.0),d::Array<double,false>{0.9,0.3,0.28},std::optional<double>{})));
{double _n_j_14631=0.0;
for(;d::truth((_n_j_14631<24.0));(void)((_n_j_14631++))){d::check_cancel();(void)(this->_n_set_14450(((_n_bx_14619+8.0)-(_n_j_14631*0.7)),((_n_by_14620-13.0)+(_n_j_14631*0.85)),d::Array<double,false>{0.3,0.22,0.18},std::optional<double>{}));
}}
for(auto &&_n_item_14779:this->_n_birds_14445){d::check_cancel();std::shared_ptr<_n_Record_14446> _n_b_14632=_n_item_14779;
{
double _n_x_14633=(d::mod((d::mod((_n_b_14632->_p_x0+(_n_b_14632->_p_v*_n_t_14593)),260.0)+260.0),260.0)-30.0);
double _n_f_14634=std::sin(((_n_t_14593*(d::truth(_n_b_14632->_p_low)?7.0:5.0))+_n_b_14632->_p_ph));
double _n_y_14635=(_n_b_14632->_p_y0+(0.8*std::sin(((_n_t_14593*0.7)+_n_b_14632->_p_ph))));
d::Array<double,false> _n_ink_14636=(d::truth(_n_b_14632->_p_low)?d::Array<double,false>{1.0,0.99,0.96}:d::Array<double,false>{0.3,0.27,0.36});
(void)(this->_n_set_14450(_n_x_14633,_n_y_14635,_n_ink_14636,std::optional<double>{}));
{double _n_i_14637=1.0;
for(;d::truth((_n_i_14637<=_n_b_14632->_p_span));(void)((_n_i_14637++))){d::check_cancel();double _n_lift_14638=(((-d::number(_n_f_14634))*_n_i_14637)*0.7);
(void)(this->_n_set_14450((_n_x_14633-_n_i_14637),((_n_y_14635+_n_lift_14638)+(d::truth((_n_i_14637==_n_b_14632->_p_span))?0.3:0.0)),_n_ink_14636,std::optional<double>{}));
(void)(this->_n_set_14450((_n_x_14633+_n_i_14637),((_n_y_14635+_n_lift_14638)+(d::truth((_n_i_14637==_n_b_14632->_p_span))?0.3:0.0)),_n_ink_14636,std::optional<double>{}));
}}
if(d::truth(_n_b_14632->_p_low)){d::check_cancel();(void)((this->_n_set_14450((_n_x_14633+1.0),(_n_y_14635+0.6),_n_ink_14636,std::optional<double>{}),this->_n_set_14450((_n_x_14633+2.0),(_n_y_14635+0.4),d::Array<double,false>{0.95,0.75,0.3},std::optional<double>{})));
if(d::truth(((_n_y_14635+6.0)<_n_H_14406))){d::check_cancel();(void)(this->_n_set_14450(_n_x_14633,(_n_y_14635+5.0),d::Array<double,false>{0.9,0.88,0.88},std::optional<double>(0.45)));
}
}

}
}
{double _n_r_14639=0.0;
for(;d::truth((_n_r_14639<_n_H_14406));(void)((_n_r_14639++))){d::check_cancel();double _n_fade_14640=_n_smooth_14416(_n_H_14406,(_n_H_14406-22.0),(_n_r_14639+0.5));
{double _n_x_14641=0.0;
for(;d::truth((_n_x_14641<_n_W_14405));(void)((_n_x_14641++))){d::check_cancel();double _n_k_14642=((_n_r_14639*_n_W_14405)+_n_x_14641);
double _n_cr_14643=d::at(this->_n_FR_14447,_n_k_14642);
double _n_cg_14644=d::at(this->_n_FG_14448,_n_k_14642);
double _n_cbl_14645=d::at(this->_n_FB_14449,_n_k_14642);
double _n_peak_14646=d::maximum({_n_cr_14643,_n_cg_14644,_n_cbl_14645,0.0001});
double _n_level_14647=(([&](){auto _n_argument_14780=_n_clamp_14415(((_n_peak_14646-0.18)/0.78));auto _n_argument_14781=1.15;return std::pow(_n_argument_14780,_n_argument_14781);})()*_n_fade_14640);
double _n_step_14648=([&](){auto _n_argument_14782=0.0;auto _n_argument_14783=([&](){auto _n_argument_14784=3.0;auto _n_argument_14785=d::round(((_n_level_14647*3.0)+d::at(_n_BAYER_14411,((double(d::i32(_n_r_14639)&d::i32(3.0))*4.0)+double(d::i32(_n_x_14641)&d::i32(3.0))))));return d::minimum({_n_argument_14784,_n_argument_14785});})();return d::maximum({_n_argument_14782,_n_argument_14783});})();
(void)(([&](){auto&& _n_array_14786=this->_n_out_14422;auto _n_index_14787=_n_k_14642;auto _n_value_14788=d::at(_n_DOTS_14409,_n_step_14648);d::put(_n_array_14786,_n_index_14787,_n_value_14788);return _n_value_14788;})());
if(d::truth(_n_color_14594)){d::check_cancel();double _n_want_14649=(d::truth(_n_step_14648)?d::minimum({1.0,((_n_level_14647+0.06)/d::at(_n_COVER_14410,_n_step_14648))}):0.0);
double _n_s_14650=((0.3+(0.7*_n_want_14649))/_n_peak_14646);
(void)(([&](){auto&& _n_array_14789=d::read(_n_color_14594);auto _n_index_14790=_n_k_14642;auto _n_value_14791=([&](){auto _n_argument_14792=_n_clamp_14415((_n_cr_14643*_n_s_14650));auto _n_argument_14793=_n_clamp_14415((_n_cg_14644*_n_s_14650));auto _n_argument_14794=_n_clamp_14415((_n_cbl_14645*_n_s_14650));return this->_n_nearest_14424(_n_argument_14792,_n_argument_14793,_n_argument_14794);})();d::put(_n_array_14789,_n_index_14790,_n_value_14791);return _n_value_14791;})());
}
}}
}}
d::Array<d::String,false> _n_lines_14651=d::Array<d::String,false>{};
{double _n_r_14652=0.0;
for(;d::truth((_n_r_14652<_n_H_14406));(void)((_n_r_14652++))){d::check_cancel();(void)(_n_lines_14651.push(d::join(this->_n_out_14422.slice((_n_r_14652*_n_W_14405),((_n_r_14652+1.0)*_n_W_14405)),d::String(u""))));
}}
return d::join(_n_lines_14651,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("jal-mahal").cols)*ascii::catalog_meta("jal-mahal").rows);auto _env=std::make_shared<_n_Record_14653>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &jal_mahal_meta(){return catalog_meta("jal-mahal");}
std::unique_ptr<Piece> make_jal_mahal(const AsciiPieceOptions &o){return std::make_unique<Native_jal_mahal>(o);}
}
