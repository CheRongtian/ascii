// Direct, statically typed C++ from src/pieces/marine-drive.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20057;
struct _n_Record_20105;
struct _n_Record_20475;
struct _n_Record_20057{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_20057> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20057>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_20105{
double _p_u0{};
double _p_u1{};
double _p_floors{};
double _p_tone{};
bool _p_crown{};
static std::shared_ptr<_n_Record_20105> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20105>();out->_p_u0=d::decode<double>(j["u0"]);out->_p_u1=d::decode<double>(j["u1"]);out->_p_floors=d::decode<double>(j["floors"]);out->_p_tone=d::decode<double>(j["tone"]);out->_p_crown=d::decode<bool>(j["crown"]);return out;}
};
struct _n_Record_20475{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20475> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20475>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_20078(double _a0,double _a1);
double _n_noise_20079(double _a0,double _a1,double _a2);
double _n_fbm_20080(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_20081(double _a0);
double _n_smooth_20082(double _a0,double _a1,double _a2);
double _n_mix_20083(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_20084(d::String _a0);
double _n_shoreF_20085(double _a0);
double _n_scF_20086(double _a0);
double _n_seaTop_20087(double _a0);
double _n_wallTopF_20088(double _a0);
double _n_roadTopF_20089(double _a0);
double _n_glowF_20090(double _a0,double _a1);
std::shared_ptr<_n_Record_20057> _n_meta_20056=[](){return ([&](){auto _n_object_20478=std::make_shared<_n_Record_20057>();_n_object_20478->_p_name=d::String(u"marine drive");_n_object_20478->_p_category=d::String(u"scenes");_n_object_20478->_p_note=d::String(u"mumbai's queen's necklace at night, lamps curving round the bay");_n_object_20478->_p_cols=200.0;_n_object_20478->_p_rows=100.0;_n_object_20478->_p_cell=1.0;_n_object_20478->_p_fps=15.0;_n_object_20478->_p_ground=d::String(u"#07080f");_n_object_20478->_p_palette=d::Array<d::String,false>{d::String(u"#18213f"),d::String(u"#202c55"),d::String(u"#2a396d"),d::String(u"#374a88"),d::String(u"#4a60a2"),d::String(u"#6880bc"),d::String(u"#2c2140"),d::String(u"#3f2d58"),d::String(u"#56396b"),d::String(u"#6e4a7a"),d::String(u"#8a5f88"),d::String(u"#5a2e3c"),d::String(u"#7b404c"),d::String(u"#9e5858"),d::String(u"#55300f"),d::String(u"#7d4515"),d::String(u"#a95c1b"),d::String(u"#d27a24"),d::String(u"#ee9631"),d::String(u"#ffb246"),d::String(u"#ffcd6a"),d::String(u"#ffe39c"),d::String(u"#fff2cf"),d::String(u"#ffffff"),d::String(u"#dce6ff"),d::String(u"#a9bde8"),d::String(u"#6a181b"),d::String(u"#b22a28"),d::String(u"#ff4b3e"),d::String(u"#132c38"),d::String(u"#1c3f4f"),d::String(u"#2a5868"),d::String(u"#29283a"),d::String(u"#3c3a4c"),d::String(u"#565266"),d::String(u"#79738a")};return _n_object_20478;})();}();
const double _n_W_20058=[](){return 200.0;}();
const double _n_H_20059=[](){return 100.0;}();
const double _n_HZ_20060=[](){return 40.0;}();
const double _n_TIP_20061=[](){return 176.0;}();
d::Array<double,false> _n_MOON_20062=[](){return d::Array<double,false>{189.0,13.0};}();
const double _n_MOON_R_20063=[](){return 4.5;}();
d::Array<d::Array<double,false>,false> _n_MARIA_20064=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.4)),(-d::number(1.2)),1.6},d::Array<double,false>{1.3,0.8,1.4},d::Array<double,false>{(-d::number(0.6)),2.0,1.1}};}();
const d::String _n_DOTS_20065=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_20066=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_20067=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_20142=_a0;
return ((_n_v_20142/16.0)-0.47);});}();
d::Array<double,false> _n_SODIUM_20068=[](){return d::Array<double,false>{1.0,0.56,0.18};}();
const double _n_SKY_20069=[](){return 0.0;}();
const double _n_WATER_20070=[](){return 1.0;}();
const double _n_FAR_20071=[](){return 2.0;}();
const double _n_TOWER_20072=[](){return 3.0;}();
const double _n_FRONT_20073=[](){return 4.0;}();
const double _n_ROAD_20074=[](){return 5.0;}();
const double _n_WALL_20075=[](){return 6.0;}();
const double _n_POLE_20076=[](){return 7.0;}();
const double _n_SHIP_20077=[](){return 8.0;}();
double _n_hash_20078(double _a0,double _a1){double _n_x_20143=_a0;
double _n_y_20144=_a1;
{
double _n_h_20145=([&](){auto _n_left_20479=d::imul(double(d::i32(_n_x_20143)|d::i32(0.0)),374761393.0);auto _n_right_20480=d::imul(double(d::i32(_n_y_20144)|d::i32(0.0)),668265263.0);return (_n_left_20479+_n_right_20480);})();
(void)((_n_h_20145=d::imul(double(d::i32(_n_h_20145)^d::i32(double(d::u32(_n_h_20145)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_20145)^d::i32(double(d::u32(_n_h_20145)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_20079(double _a0,double _a1,double _a2){double _n_x_20146=_a0;
double _n_y_20147=_a1;
double _n_period_20148=_a2;
{
double _n_xi_20149=std::floor(_n_x_20146);
double _n_yi_20150=std::floor(_n_y_20147);
double _n_fx_20151=(_n_x_20146-_n_xi_20149);
double _n_fy_20152=(_n_y_20147-_n_yi_20150);
double _n_u_20153=((_n_fx_20151*_n_fx_20151)*(3.0-(2.0*_n_fx_20151)));
double _n_v_20154=((_n_fy_20152*_n_fy_20152)*(3.0-(2.0*_n_fy_20152)));
double _n_x0_20155=_n_xi_20149;
double _n_x1_20156=(_n_xi_20149+1.0);
if(d::truth(_n_period_20148)){d::check_cancel();(void)((_n_x0_20155=d::mod((d::mod(_n_xi_20149,_n_period_20148)+_n_period_20148),_n_period_20148)));
(void)((_n_x1_20156=d::mod((_n_x0_20155+1.0),_n_period_20148)));
}
double _n_a_20157=_n_hash_20078(_n_x0_20155,_n_yi_20150);
double _n_b_20158=_n_hash_20078(_n_x1_20156,_n_yi_20150);
double _n_c_20159=_n_hash_20078(_n_x0_20155,(_n_yi_20150+1.0));
double _n_d_20160=_n_hash_20078(_n_x1_20156,(_n_yi_20150+1.0));
return (((_n_a_20157+((_n_b_20158-_n_a_20157)*_n_u_20153))+((_n_c_20159-_n_a_20157)*_n_v_20154))+(((((_n_a_20157-_n_b_20158)-_n_c_20159)+_n_d_20160)*_n_u_20153)*_n_v_20154));

}
}

double _n_fbm_20080(double _a0,double _a1,double _a2,double _a3){double _n_x_20161=_a0;
double _n_y_20162=_a1;
double _n_octaves_20163=_a2;
double _n_period_20164=_a3;
{
double _n_s_20165=0.0;
double _n_n_20166=0.0;
double _n_amp_20167=0.5;
double _n_f_20168=1.0;
{double _n_i_20169=0.0;
for(;d::truth((_n_i_20169<_n_octaves_20163));(void)((_n_i_20169++))){d::check_cancel();(void)((_n_s_20165=(_n_s_20165+(_n_amp_20167*_n_noise_20079((_n_x_20161*_n_f_20168),(_n_y_20162*_n_f_20168),(_n_period_20164*_n_f_20168))))));
(void)((_n_n_20166=(_n_n_20166+_n_amp_20167)));
(void)((_n_amp_20167=(_n_amp_20167*0.5)));
(void)((_n_f_20168=(_n_f_20168*2.0)));
}}
return (_n_s_20165/_n_n_20166);

}
}

double _n_clamp_20081(double _a0){double _n_v_20170=_a0;
return (d::truth((_n_v_20170<0.0))?0.0:(d::truth((_n_v_20170>1.0))?1.0:_n_v_20170));}

double _n_smooth_20082(double _a0,double _a1,double _a2){double _n_a_20171=_a0;
double _n_b_20172=_a1;
double _n_v_20173=_a2;
{
double _n_k_20174=_n_clamp_20081(((_n_v_20173-_n_a_20171)/(_n_b_20172-_n_a_20171)));
return ((_n_k_20174*_n_k_20174)*(3.0-(2.0*_n_k_20174)));

}
}

double _n_mix_20083(double _a0,double _a1,double _a2){double _n_a_20175=_a0;
double _n_b_20176=_a1;
double _n_k_20177=_a2;
return (_n_a_20175+((_n_b_20176-_n_a_20175)*_n_k_20177));}

d::Array<double,false> _n_hex_20084(d::String _a0){d::String _n_s_20178=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_20179=_a0;
return (([&](){auto _n_argument_20481=d::slice(_n_s_20178,_n_i_20179,(_n_i_20179+2.0));auto _n_argument_20482=16.0;return d::parseInt(_n_argument_20481,_n_argument_20482);})()/255.0);});}

double _n_shoreF_20085(double _a0){double _n_x_20180=_a0;
return (50.0+(34.0*([&](){auto _n_argument_20483=d::maximum({0.0,(1.0-(_n_x_20180/_n_TIP_20061))});auto _n_argument_20484=2.2;return std::pow(_n_argument_20483,_n_argument_20484);})()));}

double _n_scF_20086(double _a0){double _n_x_20181=_a0;
return (0.5+(1.9*([&](){auto _n_argument_20485=d::maximum({0.0,(1.0-(_n_x_20181/_n_TIP_20061))});auto _n_argument_20486=1.5;return std::pow(_n_argument_20485,_n_argument_20486);})()));}

double _n_seaTop_20087(double _a0){double _n_x_20182=_a0;
return (d::truth((_n_x_20182<=_n_TIP_20061))?_n_shoreF_20085(_n_x_20182):d::maximum({_n_HZ_20060,(50.0-((_n_x_20182-_n_TIP_20061)*1.6))}));}

double _n_wallTopF_20088(double _a0){double _n_x_20183=_a0;
return ([&](){auto _n_left_20487=_n_shoreF_20085(_n_x_20183);auto _n_right_20488=([&](){auto _n_argument_20489=1.0;auto _n_argument_20490=_n_scF_20086(_n_x_20183);return d::maximum({_n_argument_20489,_n_argument_20490});})();return (_n_left_20487-_n_right_20488);})();}

double _n_roadTopF_20089(double _a0){double _n_x_20184=_a0;
return ([&](){auto _n_left_20491=_n_wallTopF_20088(_n_x_20184);auto _n_right_20492=([&](){auto _n_argument_20493=1.0;auto _n_argument_20494=(1.5*_n_scF_20086(_n_x_20184));return d::maximum({_n_argument_20493,_n_argument_20494});})();return (_n_left_20491-_n_right_20492);})();}

double _n_glowF_20090(double _a0,double _a1){double _n_x_20185=_a0;
double _n_y_20186=_a1;
{
double _n_over_20187=(0.5+(0.5*_n_smooth_20082((_n_TIP_20061+24.0),(_n_TIP_20061-16.0),_n_x_20185)));
double _n_h_20188=d::maximum({0.0,(_n_HZ_20060-_n_y_20186)});
return (_n_over_20187*([&](){auto _n_left_20495=(std::exp(((-d::number(_n_h_20188))/4.0))*0.5);auto _n_right_20496=(std::exp(((-d::number(_n_h_20188))/12.0))*0.12);return (_n_left_20495+_n_right_20496);})());

}
}

struct Native_marine_drive final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_20091{};
double _n_N_20092{};
d::Array<d::String,false> _n_out_20093{};
d::Array<uint8_t,true> _n_lut_20094{};
double _n_STEP_20096{};
double _n_nU_20097{};
d::Array<float,true> _n_Utab_20098{};
double _n_UEND_20101{};
d::Array<std::array<double,3>,false> _n_lamps_20102{};
double _n_FLICK_20103{};
d::Array<std::shared_ptr<_n_Record_20105>,false> _n_blds_20104{};
d::Array<float,true> _n_colU_20106{};
d::Array<int16_t,true> _n_bldAt_20107{};
d::Array<std::array<double,4>,false> _n_towers_20108{};
d::Array<uint8_t,true> _n_mat_20109{};
d::Array<float,true> _n_sR_20110{};
d::Array<float,true> _n_sG_20111{};
d::Array<float,true> _n_sB_20112{};
d::Array<float,true> _n_flo_20113{};
d::Array<uint8_t,true> _n_lane_20114{};
d::Array<float,true> _n_skyGlow_20115{};
d::Array<std::array<double,7>,false> _n_flick_20116{};
d::Array<std::array<double,2>,false> _n_beacons_20117{};
d::Array<std::array<double,5>,false> _n_shipLights_20118{};
d::Array<float,true> _n_lampI_20120{};
d::Array<float,true> _n_lampW_20121{};
d::Array<float,true> _n_flickI_20122{};
d::Array<float,true> _n_flickW_20123{};
d::Array<d::Array<float,true>,false> _n_refl_20124{};
d::Array<float,true> _n_reflFl_20125{};
double _n_CW_20126{};
d::Array<float,true> _n_cover_20127{};
d::Array<float,true> _n_clit_20128{};
d::Array<float,true> _n_clear_20130{};
double _n_BIN_20131{};
double _n_U0_20132{};
double _n_NB_20133{};
d::Array<float,true> _n_laneA_20134{};
d::Array<float,true> _n_laneB_20135{};
d::Array<std::array<double,3>,false> _n_cars_20136{};
d::Array<int32_t,true> _n_binLo_20137{};
d::Array<int32_t,true> _n_binHi_20138{};
d::Array<float,true> _n_colA_20139{};
d::Array<float,true> _n_colB_20140{};
std::function<d::String(double,std::shared_ptr<_n_Record_20475>)> _render;
double _n_nearest_20095(double _a0,double _a1,double _a2){double _n_r_20189=_a0;
double _n_g_20190=_a1;
double _n_b_20191=_a2;
{
double _n_k_20192=([&](){auto _n_left_20747=([&](){auto _n_left_20749=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_20189*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_20750=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_20190*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_20749)|d::i32(_n_right_20750));})();auto _n_right_20748=d::minimum({31.0,double(d::i32((_n_b_20191*31.99))|d::i32(0.0))});return double(d::i32(_n_left_20747)|d::i32(_n_right_20748));})();
if(d::truth((d::at(this->_n_lut_20094,_n_k_20192)!=255.0))){d::check_cancel();return d::at(this->_n_lut_20094,_n_k_20192);
}
double _n_best_20193=0.0;
double _n_bd_20194=1000000000.0;
{double _n_i_20195=0.0;
for(;d::truth((_n_i_20195<double(this->_n_P_20091.size())));(void)((_n_i_20195++))){d::check_cancel();double _n_dr_20196=(d::at(d::at(this->_n_P_20091,_n_i_20195),0.0)-_n_r_20189);
double _n_dg_20197=(d::at(d::at(this->_n_P_20091,_n_i_20195),1.0)-_n_g_20190);
double _n_db_20198=(d::at(d::at(this->_n_P_20091,_n_i_20195),2.0)-_n_b_20191);
double _n_d_20199=((((0.3*_n_dr_20196)*_n_dr_20196)+((0.5*_n_dg_20197)*_n_dg_20197))+((0.2*_n_db_20198)*_n_db_20198));
if(d::truth((_n_d_20199<_n_bd_20194))){d::check_cancel();(void)(((_n_bd_20194=_n_d_20199),(_n_best_20193=_n_i_20195)));
}
}}
return ([&](){auto&& _n_array_20751=this->_n_lut_20094;auto _n_index_20752=_n_k_20192;auto _n_value_20753=_n_best_20193;d::put(_n_array_20751,_n_index_20752,_n_value_20753);return _n_value_20753;})();

}
}

double _n_Uof_20099(double _a0){double _n_x_20203=_a0;
{
double _n_f_20204=([&](){auto _n_argument_20754=0.0;auto _n_argument_20755=d::minimum({(this->_n_nU_20097-1.001),(_n_x_20203/this->_n_STEP_20096)});return d::maximum({_n_argument_20754,_n_argument_20755});})();
double _n_i_20205=double(d::i32(_n_f_20204)|d::i32(0.0));
return (d::at(this->_n_Utab_20098,_n_i_20205)+((d::at(this->_n_Utab_20098,(_n_i_20205+1.0))-d::at(this->_n_Utab_20098,_n_i_20205))*(_n_f_20204-_n_i_20205)));

}
}

double _n_xOfU_20100(double _a0){double _n_u_20206=_a0;
{
double _n_lo_20207=0.0;
double _n_hi_20208=_n_TIP_20061;
{double _n_i_20209=0.0;
for(;d::truth((_n_i_20209<30.0));(void)((_n_i_20209++))){d::check_cancel();double _n_m_20210=((_n_lo_20207+_n_hi_20208)/2.0);
if(d::truth((this->_n_Uof_20099(_n_m_20210)<_n_u_20206))){d::check_cancel();(void)((_n_lo_20207=_n_m_20210));
}else {d::check_cancel();(void)((_n_hi_20208=_n_m_20210));
}
}}
return ((_n_lo_20207+_n_hi_20208)/2.0);

}
}

bool _n_hull_20119(double _a0,double _a1){double _n_x_20295=_a0;
double _n_r_20296=_a1;
return ([&]()->bool{auto _n_logical_20756=([&]()->bool{auto _n_logical_20759=([&]()->bool{auto _n_logical_20762=([&]()->bool{auto _n_logical_20765=([&]()->bool{auto _n_logical_20769=([&]()->bool{auto _n_logical_20772=([&]()->bool{auto _n_logical_20773=(_n_r_20296>=38.0);return d::truth(_n_logical_20773)?(_n_x_20295>=182.0):_n_logical_20773;})();return d::truth(_n_logical_20772)?(_n_x_20295<=192.0):_n_logical_20772;})();return d::truth(_n_logical_20769)?_n_logical_20769:([&]()->bool{auto _n_logical_20770=([&]()->bool{auto _n_logical_20771=(_n_r_20296==37.0);return d::truth(_n_logical_20771)?(_n_x_20295>=183.0):_n_logical_20771;})();return d::truth(_n_logical_20770)?(_n_x_20295<=192.0):_n_logical_20770;})();})();return d::truth(_n_logical_20765)?_n_logical_20765:([&]()->bool{auto _n_logical_20766=([&]()->bool{auto _n_logical_20767=([&]()->bool{auto _n_logical_20768=(_n_r_20296>=35.0);return d::truth(_n_logical_20768)?(_n_r_20296<=36.0):_n_logical_20768;})();return d::truth(_n_logical_20767)?(_n_x_20295>=189.0):_n_logical_20767;})();return d::truth(_n_logical_20766)?(_n_x_20295<=191.0):_n_logical_20766;})();})();return d::truth(_n_logical_20762)?_n_logical_20762:([&]()->bool{auto _n_logical_20763=([&]()->bool{auto _n_logical_20764=(_n_r_20296>=35.0);return d::truth(_n_logical_20764)?(_n_r_20296<=36.0):_n_logical_20764;})();return d::truth(_n_logical_20763)?(_n_x_20295==184.0):_n_logical_20763;})();})();return d::truth(_n_logical_20759)?_n_logical_20759:([&]()->bool{auto _n_logical_20760=([&]()->bool{auto _n_logical_20761=(_n_r_20296>=38.0);return d::truth(_n_logical_20761)?(_n_x_20295>=195.0):_n_logical_20761;})();return d::truth(_n_logical_20760)?(_n_x_20295<=199.0):_n_logical_20760;})();})();return d::truth(_n_logical_20756)?_n_logical_20756:([&]()->bool{auto _n_logical_20757=([&]()->bool{auto _n_logical_20758=(_n_r_20296==37.0);return d::truth(_n_logical_20758)?(_n_x_20295>=196.0):_n_logical_20758;})();return d::truth(_n_logical_20757)?(_n_x_20295<=197.0):_n_logical_20757;})();})();}

double _n_density_20129(double _a0,double _a1){double _n_x_20357=_a0;
double _n_y_20358=_a1;
{
double _n_q_20359=_n_fbm_20080((_n_x_20357*0.01),(_n_y_20358*0.05),3.0,8.0);
double _n_d_20360=_n_fbm_20080(((_n_x_20357*0.025)+(_n_q_20359*2.6)),((_n_y_20358*0.07)+(_n_q_20359*1.3)),5.0,20.0);
double _n_yb_20361=(_n_y_20358+(14.0*(_n_fbm_20080(((_n_x_20357*0.005)+3.0),7.0,2.0,4.0)-0.5)));
return ([&](){auto _n_left_20774=([&](){auto _n_left_20776=(_n_d_20360+(0.05*_n_smooth_20082(2.0,14.0,_n_yb_20361)));auto _n_right_20777=(0.1*_n_smooth_20082(6.0,0.0,_n_y_20358));return (_n_left_20776-_n_right_20777);})();auto _n_right_20775=(0.1*_n_smooth_20082(22.0,(_n_HZ_20060-4.0),_n_yb_20361));return (_n_left_20774-_n_right_20775);})();

}
}

void _n_paint_20141(double _a0,double _a1,double _a2,double _a3,double _a4,std::optional<d::Array<uint8_t,true>> _a5){double _n_k_20462=_a0;
double _n_cr_20463=_a1;
double _n_cg_20464=_a2;
double _n_cb_20465=_a3;
double _n_floor_20466=_a4;
std::optional<d::Array<uint8_t,true>> _n_color_20467=_a5;
{
(void)((((_n_cr_20463=d::maximum({0.0,_n_cr_20463})),(_n_cg_20464=d::maximum({0.0,_n_cg_20464}))),(_n_cb_20465=d::maximum({0.0,_n_cb_20465}))));
double _n_r_20468=double(d::i32((_n_k_20462/_n_W_20058))|d::i32(0.0));
double _n_x_20469=d::mod(_n_k_20462,_n_W_20058);
double _n_peak_20470=d::maximum({_n_cr_20463,_n_cg_20464,_n_cb_20465,0.0001});
double _n_level_20471=_n_clamp_20081((_n_floor_20466+(((1.0-_n_floor_20466)*std::pow(_n_peak_20470,0.85))*0.95)));
double _n_step_20472=([&](){auto _n_argument_20778=0.0;auto _n_argument_20779=([&](){auto _n_argument_20780=3.0;auto _n_argument_20781=d::round(((_n_level_20471*3.0)+d::at(_n_BAYER_20067,((double(d::i32(_n_r_20468)&d::i32(3.0))*4.0)+double(d::i32(_n_x_20469)&d::i32(3.0))))));return d::minimum({_n_argument_20780,_n_argument_20781});})();return d::maximum({_n_argument_20778,_n_argument_20779});})();
(void)(([&](){auto&& _n_array_20782=this->_n_out_20093;auto _n_index_20783=_n_k_20462;auto _n_value_20784=d::at(_n_DOTS_20065,_n_step_20472);d::put(_n_array_20782,_n_index_20783,_n_value_20784);return _n_value_20784;})());
if(d::truth(_n_color_20467)){d::check_cancel();double _n_want_20473=(d::truth(_n_step_20472)?d::minimum({1.0,((_n_level_20471+0.06)/d::at(_n_COVER_20066,_n_step_20472))}):0.0);
double _n_s_20474=((0.3+(0.7*_n_want_20473))/_n_peak_20470);
(void)(([&](){auto&& _n_array_20785=d::read(_n_color_20467);auto _n_index_20786=_n_k_20462;auto _n_value_20787=([&](){auto _n_argument_20788=_n_clamp_20081((_n_cr_20463*_n_s_20474));auto _n_argument_20789=_n_clamp_20081((_n_cg_20464*_n_s_20474));auto _n_argument_20790=_n_clamp_20081((_n_cb_20465*_n_s_20474));return this->_n_nearest_20095(_n_argument_20788,_n_argument_20789,_n_argument_20790);})();d::put(_n_array_20785,_n_index_20786,_n_value_20787);return _n_value_20787;})());
}

}
}

explicit Native_marine_drive(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_20091=d::map(_n_meta_20056->_p_palette,_n_hex_20084);
this->_n_N_20092=(_n_W_20058*_n_H_20059);
this->_n_out_20093=d::Array<d::String,false>(size_t(this->_n_N_20092));
this->_n_lut_20094=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_STEP_20096=0.25;
this->_n_nU_20097=(std::ceil(((_n_TIP_20061+4.0)/this->_n_STEP_20096))+2.0);
this->_n_Utab_20098=d::Array<float,true>(size_t(this->_n_nU_20097));
{double _n_i_20200=1.0;
for(;d::truth((_n_i_20200<this->_n_nU_20097));(void)((_n_i_20200++))){d::check_cancel();double _n_x_20201=((_n_i_20200-0.5)*this->_n_STEP_20096);
double _n_sl_20202=(([&](){auto _n_left_20497=_n_shoreF_20085((_n_x_20201+0.05));auto _n_right_20498=_n_shoreF_20085((_n_x_20201-0.05));return (_n_left_20497-_n_right_20498);})()/0.1);
(void)(([&](){auto&& _n_array_20499=this->_n_Utab_20098;auto _n_index_20500=_n_i_20200;auto _n_value_20501=(d::at(this->_n_Utab_20098,(_n_i_20200-1.0))+([&](){auto _n_left_20502=(std::sqrt((1.0+(_n_sl_20202*_n_sl_20202)))*this->_n_STEP_20096);auto _n_right_20503=_n_scF_20086(_n_x_20201);return (_n_left_20502/_n_right_20503);})());d::put(_n_array_20499,_n_index_20500,_n_value_20501);return _n_value_20501;})());
}}
this->_n_UEND_20101=this->_n_Uof_20099(_n_TIP_20061);
this->_n_lamps_20102=d::Array<std::array<double,3>,false>{};
{double _n_u_20211=0.6;
for(;d::truth((_n_u_20211<(this->_n_UEND_20101-0.4)));(void)((_n_u_20211=(_n_u_20211+3.75)))){d::check_cancel();double _n_lx_20212=this->_n_xOfU_20100(_n_u_20211);
double _n_s_20213=_n_scF_20086(_n_lx_20212);
(void)(this->_n_lamps_20102.push(std::array<double,3>{_n_lx_20212,(_n_wallTopF_20088(_n_lx_20212)-(2.4*_n_s_20213)),_n_s_20213}));
}}
this->_n_FLICK_20103=6.0;
this->_n_blds_20104=d::Array<std::shared_ptr<_n_Record_20105>,false>{};
{double _n_u_20214=(-d::number(4.0));
for(;d::truth((_n_u_20214<this->_n_UEND_20101));){d::check_cancel();double _n_i_20215=double(this->_n_blds_20104.size());
double _n_w_20216=(7.0+(7.0*_n_hash_20078(_n_i_20215,21.0)));
double _n_tall_20217=d::round(([&](){auto _n_left_20504=(7.0*_n_smooth_20082(26.0,2.0,_n_u_20214));auto _n_right_20505=(0.6+(0.4*_n_hash_20078(_n_i_20215,26.0)));return (_n_left_20504*_n_right_20505);})());
(void)(this->_n_blds_20104.push(([&](){auto _n_object_20507=std::make_shared<_n_Record_20105>();_n_object_20507->_p_u0=_n_u_20214;_n_object_20507->_p_u1=(_n_u_20214+_n_w_20216);_n_object_20507->_p_floors=((5.0+std::floor((_n_hash_20078(_n_i_20215,22.0)*4.0)))+_n_tall_20217);_n_object_20507->_p_tone=(0.75+(0.5*_n_hash_20078(_n_i_20215,23.0)));_n_object_20507->_p_crown=(_n_hash_20078(_n_i_20215,24.0)>0.45);return _n_object_20507;})()));
(void)((_n_u_20214=(_n_u_20214+((_n_w_20216+0.4)+(1.8*_n_hash_20078(_n_i_20215,25.0))))));
}}
this->_n_colU_20106=d::Array<float,true>(size_t(_n_W_20058));
this->_n_bldAt_20107=d::Array<int16_t,true>(size_t(_n_W_20058)).fill((-d::number(1.0)));
{double _n_x_20218=0.0;
for(;d::truth((_n_x_20218<_n_W_20058));(void)((_n_x_20218++))){d::check_cancel();(void)(([&](){auto&& _n_array_20508=this->_n_colU_20106;auto _n_index_20509=_n_x_20218;auto _n_value_20510=this->_n_Uof_20099((_n_x_20218+0.5));d::put(_n_array_20508,_n_index_20509,_n_value_20510);return _n_value_20510;})());
if(d::truth(((_n_x_20218+0.5)>_n_TIP_20061))){d::check_cancel();continue;
}
{double _n_i_20219=0.0;
for(;d::truth((_n_i_20219<double(this->_n_blds_20104.size())));(void)((_n_i_20219++))){d::check_cancel();if((d::truth((d::at(this->_n_colU_20106,_n_x_20218)>=d::at(this->_n_blds_20104,_n_i_20219)->_p_u0))&&d::truth((d::at(this->_n_colU_20106,_n_x_20218)<d::at(this->_n_blds_20104,_n_i_20219)->_p_u1)))){d::check_cancel();(void)(([&](){auto&& _n_array_20511=this->_n_bldAt_20107;auto _n_index_20512=_n_x_20218;auto _n_value_20513=_n_i_20219;d::put(_n_array_20511,_n_index_20512,_n_value_20513);return _n_value_20513;})());
}
}}
}}
this->_n_towers_20108=d::Array<std::array<double,4>,false>{std::array<double,4>{24.0,4.5,21.0,0.0},std::array<double,4>{97.0,2.5,27.0,1.0},std::array<double,4>{107.0,2.0,22.0,0.0},std::array<double,4>{118.0,3.0,30.0,0.0},std::array<double,4>{126.0,2.0,25.0,1.0},std::array<double,4>{136.0,3.0,23.0,0.0},std::array<double,4>{142.5,2.0,15.0,1.0},std::array<double,4>{149.0,3.5,27.0,0.0},std::array<double,4>{156.0,2.5,19.0,0.0},std::array<double,4>{162.0,3.0,12.0,1.0},std::array<double,4>{168.5,2.5,21.0,0.0},std::array<double,4>{173.0,2.0,28.0,1.0}};
this->_n_mat_20109=d::Array<uint8_t,true>(size_t(this->_n_N_20092));
this->_n_sR_20110=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_sG_20111=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_sB_20112=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_flo_20113=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_lane_20114=d::Array<uint8_t,true>(size_t(this->_n_N_20092));
this->_n_skyGlow_20115=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_flick_20116=d::Array<std::array<double,7>,false>{};
this->_n_beacons_20117=d::Array<std::array<double,2>,false>{};
{double _n_r_20220=0.0;
for(;d::truth((_n_r_20220<_n_H_20059));(void)((_n_r_20220++))){d::check_cancel();{double _n_x_20221=0.0;
for(;d::truth((_n_x_20221<_n_W_20058));(void)((_n_x_20221++))){d::check_cancel();double _n_k_20222=((_n_r_20220*_n_W_20058)+_n_x_20221);
double _n_xc_20223=(_n_x_20221+0.5);
double _n_y_20224=(_n_r_20220+0.5);
if(d::truth((_n_y_20224>=_n_seaTop_20087(_n_xc_20223)))){d::check_cancel();(void)(([&](){auto&& _n_array_20514=this->_n_mat_20109;auto _n_index_20515=_n_k_20222;auto _n_value_20516=_n_WATER_20070;d::put(_n_array_20514,_n_index_20515,_n_value_20516);return _n_value_20516;})());
continue;
}
double _n_m_20225=_n_SKY_20069;
double _n_cr_20226=0.0;
double _n_cg_20227=0.0;
double _n_cb_20228=0.0;
double _n_fl_20229=0.15;
double _n_blk_20230=std::floor(((_n_x_20221+(40.0*_n_fbm_20080((_n_x_20221*0.02),5.0,2.0,0.0)))/3.0));
double _n_farTop_20231=((_n_HZ_20060-0.4)-([&](){auto _n_left_20517=(0.4+(5.0*std::pow(_n_hash_20078(_n_blk_20230,7.0),3.0)));auto _n_right_20518=(0.5+(0.5*_n_fbm_20080((_n_x_20221*0.05),2.0,2.0,0.0)));return (_n_left_20517*_n_right_20518);})());
if((d::truth((_n_xc_20223<(_n_TIP_20061+7.0)))&&d::truth((_n_y_20224>=_n_farTop_20231)))){d::check_cancel();(void)((_n_m_20225=_n_FAR_20071));
double _n_g_20232=_n_glowF_20090(_n_xc_20223,(_n_HZ_20060-2.0));
(void)((((_n_cr_20226=(0.03+(0.05*_n_g_20232))),(_n_cg_20227=(0.04+(0.03*_n_g_20232)))),(_n_cb_20228=(0.08+(0.02*_n_g_20232)))));
double _n_hl_20233=_n_hash_20078(((_n_x_20221*3.0)+1.0),((_n_r_20220*7.0)+2.0));
if(d::truth((_n_hl_20233<0.035))){d::check_cancel();double _n_v_20234=(0.25+(0.45*_n_hash_20078(_n_x_20221,((_n_r_20220*5.0)+9.0))));
bool _n_cool_20235=(_n_hash_20078((_n_x_20221*5.0),_n_r_20220)<0.3);
(void)((((_n_cr_20226=(_n_cr_20226+(_n_v_20234*(d::truth(_n_cool_20235)?0.8:1.0)))),(_n_cg_20227=(_n_cg_20227+(_n_v_20234*(d::truth(_n_cool_20235)?0.85:0.7))))),(_n_cb_20228=(_n_cb_20228+(_n_v_20234*(d::truth(_n_cool_20235)?1.0:0.4))))));
}
(void)((_n_fl_20229=0.08));
}
{double _n_ti_20236=0.0;
for(;d::truth((_n_ti_20236<double(this->_n_towers_20108.size())));(void)((_n_ti_20236++))){d::check_cancel();auto _n_binding_20519=d::at(this->_n_towers_20108,_n_ti_20236);
double _n_tx_20237=d::at(_n_binding_20519,0.0);
double _n_hw_20238=d::at(_n_binding_20519,1.0);
double _n_top_20239=d::at(_n_binding_20519,2.0);
double _n_warm_20240=d::at(_n_binding_20519,3.0);
double _n_dx_20241=(_n_xc_20223-_n_tx_20237);
if((d::truth((std::fabs(_n_dx_20241)>_n_hw_20238))||d::truth((_n_y_20224<_n_top_20239)))){d::check_cancel();continue;
}
(void)((_n_m_20225=_n_TOWER_20072));
(void)((((_n_cr_20226=0.015),(_n_cg_20227=0.018)),(_n_cb_20228=0.035)));
if(d::truth((_n_dx_20241>(_n_hw_20238-1.0)))){d::check_cancel();(void)((((_n_cr_20226=(_n_cr_20226+0.04)),(_n_cg_20227=(_n_cg_20227+0.055))),(_n_cb_20228=(_n_cb_20228+0.1))));
}
double _n_g_20242=(_n_glowF_20090(_n_xc_20223,_n_y_20224)*0.2);
(void)((((_n_cr_20226=(_n_cr_20226+(_n_g_20242*0.42))),(_n_cg_20227=(_n_cg_20227+(_n_g_20242*0.21)))),(_n_cb_20228=(_n_cb_20228+(_n_g_20242*0.1)))));
double _n_fr_20243=(_n_r_20220-_n_top_20239);
if(d::truth((_n_fr_20243==0.0))){d::check_cancel();(void)((((_n_cr_20226=(_n_cr_20226+0.08)),(_n_cg_20227=(_n_cg_20227+0.1))),(_n_cb_20228=(_n_cb_20228+0.16))));
}else {d::check_cancel();if(((d::truth((_n_fr_20243>0.0))&&d::truth((d::mod(_n_fr_20243,2.0)==1.0)))&&d::truth((std::fabs(_n_dx_20241)<(_n_hw_20238-0.5))))){d::check_cancel();double _n_seg_20244=std::floor((((_n_xc_20223-_n_tx_20237)+_n_hw_20238)/3.0));
double _n_h_20245=_n_hash_20078(((_n_ti_20236*17.0)+_n_seg_20244),((_n_r_20220*13.0)+3.0));
if(d::truth((_n_h_20245<0.5))){d::check_cancel();double _n_v_20246=(0.4+(0.3*_n_hash_20078(((_n_ti_20236*7.0)+_n_seg_20244),_n_r_20220)));
bool _n_cool_20247=(d::truth(_n_warm_20240)?(_n_h_20245<0.1):(_n_h_20245>0.1));
(void)((((_n_cr_20226=(_n_cr_20226+(_n_v_20246*(d::truth(_n_cool_20247)?0.72:1.0)))),(_n_cg_20227=(_n_cg_20227+(_n_v_20246*(d::truth(_n_cool_20247)?0.84:0.72))))),(_n_cb_20228=(_n_cb_20228+(_n_v_20246*(d::truth(_n_cool_20247)?1.0:0.42))))));
}
}
}
if(((d::truth((_n_fr_20243==0.0))&&d::truth((std::fabs(_n_dx_20241)<0.6)))&&d::truth((_n_top_20239<20.0)))){d::check_cancel();(void)(this->_n_beacons_20117.push(std::array<double,2>{(_n_k_20222-_n_W_20058),(_n_ti_20236*1.7)}));
}
(void)((_n_fl_20229=0.03));
}}
if(d::truth((_n_xc_20223<=_n_TIP_20061))){d::check_cancel();double _n_s_20248=_n_scF_20086(_n_xc_20223);
double _n_wt_20249=_n_wallTopF_20088(_n_xc_20223);
double _n_rt_20250=_n_roadTopF_20089(_n_xc_20223);
double _n_bi_20251=d::at(this->_n_bldAt_20107,_n_x_20221);
if((d::truth((_n_bi_20251>=0.0))&&d::truth((_n_y_20224<_n_rt_20250)))){d::check_cancel();std::shared_ptr<_n_Record_20105> _n_b_20252=d::at(this->_n_blds_20104,_n_bi_20251);
double _n_uu_20253=(d::at(this->_n_colU_20106,_n_x_20221)-_n_b_20252->_p_u0);
double _n_bw_20254=(_n_b_20252->_p_u1-_n_b_20252->_p_u0);
double _n_f_20255=((_n_rt_20250-_n_y_20224)/_n_s_20248);
double _n_hgt_20256=((_n_b_20252->_p_floors*1.7)+1.1);
if(((d::truth(_n_b_20252->_p_crown)&&d::truth((_n_uu_20253>(_n_bw_20254*0.32))))&&d::truth((_n_uu_20253<(_n_bw_20254*0.68))))){d::check_cancel();(void)((_n_hgt_20256=(_n_hgt_20256+1.6)));
}
if(d::truth((_n_f_20255<_n_hgt_20256))){d::check_cancel();(void)((_n_m_20225=_n_FRONT_20073));
bool _n_edge_20257=([&]()->bool{auto _n_logical_20520=(_n_uu_20253<0.5);return d::truth(_n_logical_20520)?_n_logical_20520:(_n_uu_20253>(_n_bw_20254-0.5));})();
double _n_t0_20258=(_n_b_20252->_p_tone*(d::truth(_n_edge_20257)?1.35:1.0));
(void)((((_n_cr_20226=(0.03*_n_t0_20258)),(_n_cg_20227=(0.035*_n_t0_20258))),(_n_cb_20228=(0.06*_n_t0_20258))));
double _n_up_20259=(std::exp(((-d::number(_n_f_20255))/2.0))*0.16);
(void)((((_n_cr_20226=(_n_cr_20226+(_n_up_20259*d::at(_n_SODIUM_20068,0.0)))),(_n_cg_20227=(_n_cg_20227+(_n_up_20259*d::at(_n_SODIUM_20068,1.0))))),(_n_cb_20228=(_n_cb_20228+(_n_up_20259*d::at(_n_SODIUM_20068,2.0))))));
if((d::truth((_n_f_20255>(_n_hgt_20256-(0.6/_n_s_20248))))||d::truth(([&]()->bool{auto _n_logical_20521=(_n_f_20255>((_n_b_20252->_p_floors*1.7)+0.6));return d::truth(_n_logical_20521)?(_n_f_20255<(((_n_b_20252->_p_floors*1.7)+0.6)+(0.5/_n_s_20248))):_n_logical_20521;})()))){d::check_cancel();(void)((((_n_cr_20226=(_n_cr_20226+0.1)),(_n_cg_20227=(_n_cg_20227+0.13))),(_n_cb_20228=(_n_cb_20228+0.22))));
}
if(d::truth((_n_uu_20253>((_n_bw_20254-(0.7/_n_s_20248))-0.2)))){d::check_cancel();(void)((((_n_cr_20226=(_n_cr_20226+0.04)),(_n_cg_20227=(_n_cg_20227+0.06))),(_n_cb_20228=(_n_cb_20228+0.12))));
}
double _n_fi_20260=std::floor(((_n_f_20255-0.9)/1.7));
double _n_ff_20261=((_n_f_20255-0.9)-(_n_fi_20260*1.7));
double _n_col_20262=std::floor(((_n_uu_20253-0.3)/1.5));
double _n_cu_20263=((_n_uu_20253-0.3)-(_n_col_20262*1.5));
bool _n_fine_20264=((_n_s_20248*1.7)>=2.6);
bool _n_inWin_20265=([&]()->bool{auto _n_logical_20522=([&]()->bool{auto _n_logical_20526=([&]()->bool{auto _n_logical_20527=([&]()->bool{auto _n_logical_20528=(_n_fi_20260>=0.0);return d::truth(_n_logical_20528)?(_n_fi_20260<_n_b_20252->_p_floors):_n_logical_20528;})();return d::truth(_n_logical_20527)?(_n_uu_20253>0.7):_n_logical_20527;})();return d::truth(_n_logical_20526)?(_n_uu_20253<(_n_bw_20254-0.7)):_n_logical_20526;})();return d::truth(_n_logical_20522)?(d::truth(_n_fine_20264)?([&]()->bool{auto _n_logical_20523=([&]()->bool{auto _n_logical_20524=([&]()->bool{auto _n_logical_20525=(_n_ff_20261>0.45);return d::truth(_n_logical_20525)?(_n_ff_20261<1.35):_n_logical_20525;})();return d::truth(_n_logical_20524)?(_n_cu_20263>0.35):_n_logical_20524;})();return d::truth(_n_logical_20523)?(_n_cu_20263<1.15):_n_logical_20523;})():true):_n_logical_20522;})();
if((d::truth(_n_inWin_20265)&&d::truth((!d::truth(_n_fine_20264))))){d::check_cancel();double _n_v_20266=(0.04+(0.26*std::pow(([&](){auto _n_argument_20529=((_n_bi_20251*13.0)+std::floor((_n_uu_20253/3.2)));auto _n_argument_20530=((_n_fi_20260*7.0)+1.0);return _n_hash_20078(_n_argument_20529,_n_argument_20530);})(),2.0)));
(void)((((_n_cr_20226=(_n_cr_20226+_n_v_20266)),(_n_cg_20227=(_n_cg_20227+(_n_v_20266*0.8)))),(_n_cb_20228=(_n_cb_20228+(_n_v_20266*0.55)))));
if(d::truth((_n_hash_20078(((_n_x_20221*7.0)+3.0),(_n_r_20220*11.0))<0.035))){d::check_cancel();(void)((((_n_cr_20226=(_n_cr_20226+0.4)),(_n_cg_20227=(_n_cg_20227+0.36))),(_n_cb_20228=(_n_cb_20228+0.28))));
}
}else {d::check_cancel();if(d::truth(_n_inWin_20265)){d::check_cancel();double _n_h_20267=_n_hash_20078(((_n_bi_20251*97.0)+_n_col_20262),((_n_fi_20260*31.0)+5.0));
bool _n_lit_20268=(_n_h_20267<(d::truth(_n_fine_20264)?0.3:0.2));
if(d::truth(_n_lit_20268)){d::check_cancel();double _n_v_20269=((0.35+(0.3*_n_hash_20078(((_n_bi_20251*13.0)+_n_col_20262),_n_fi_20260)))*(d::truth(_n_fine_20264)?1.0:0.7));
double _n_kind_20270=_n_hash_20078(((_n_bi_20251*7.0)+_n_col_20262),((_n_fi_20260*3.0)+1.0));
double _n_wr_20271=1.0;
double _n_wg_20272=0.84;
double _n_wb_20273=0.58;
if(d::truth((_n_kind_20270<0.25))){d::check_cancel();(void)((((_n_wr_20271=0.82),(_n_wg_20272=0.9)),(_n_wb_20273=1.0)));
}
(void)((((_n_cr_20226=(_n_cr_20226+(_n_v_20269*_n_wr_20271))),(_n_cg_20227=(_n_cg_20227+(_n_v_20269*_n_wg_20272)))),(_n_cb_20228=(_n_cb_20228+(_n_v_20269*_n_wb_20273)))));
double _n_fk_20274=_n_hash_20078(((_n_bi_20251*5.0)+_n_col_20262),((_n_fi_20260*11.0)+7.0));
if(d::truth((_n_fk_20274<0.07))){d::check_cancel();(void)(this->_n_flick_20116.push(std::array<double,7>{_n_k_20222,(_n_v_20269*_n_wr_20271),(_n_v_20269*_n_wg_20272),(_n_v_20269*_n_wb_20273),(d::truth((_n_fk_20274<0.025))?1.0:0.0),(0.3+(_n_fk_20274*9.0)),(_n_fk_20274*400.0)}));
}
}else {d::check_cancel();if(d::truth(_n_fine_20264)){d::check_cancel();(void)((((_n_cr_20226=(_n_cr_20226*0.7)),(_n_cg_20227=(_n_cg_20227*0.7))),(_n_cb_20228=(_n_cb_20228*0.8))));
}
}
}
}
(void)((_n_fl_20229=0.03));
}
}
if((d::truth((_n_y_20224>=_n_rt_20250))&&d::truth((_n_y_20224<_n_wt_20249)))){d::check_cancel();(void)((_n_m_20225=_n_ROAD_20074));
(void)((((_n_cr_20226=0.07),(_n_cg_20227=0.05)),(_n_cb_20228=0.05)));
(void)((_n_fl_20229=0.1));
double _n_lf_20275=((_n_y_20224-_n_rt_20250)/(_n_wt_20249-_n_rt_20250));
(void)(([&](){auto&& _n_array_20531=this->_n_lane_20114;auto _n_index_20532=_n_k_20222;auto _n_value_20533=(d::truth(((_n_wt_20249-_n_rt_20250)<1.8))?3.0:(d::truth((_n_lf_20275<0.5))?1.0:2.0));d::put(_n_array_20531,_n_index_20532,_n_value_20533);return _n_value_20533;})());
}else {d::check_cancel();if(d::truth((_n_y_20224>=_n_wt_20249))){d::check_cancel();(void)((_n_m_20225=_n_WALL_20075));
(void)((((_n_cr_20226=0.1),(_n_cg_20227=0.09)),(_n_cb_20228=0.1)));
(void)((_n_fl_20229=0.1));
}
}
for(auto &&_n_item_20534:this->_n_lamps_20102){d::check_cancel();auto _n_binding_20535=_n_item_20534;
double _n_lx_20276=d::at(_n_binding_20535,0.0);
double _n_ly_20277=d::at(_n_binding_20535,1.0);
double _n_ls_20278=d::at(_n_binding_20535,2.0);
{
if((((d::truth((_n_ls_20278>1.15))&&d::truth((std::fabs((_n_xc_20223-_n_lx_20276))<0.5)))&&d::truth((_n_y_20224>_n_ly_20277)))&&d::truth((_n_y_20224<_n_wt_20249)))){d::check_cancel();(void)((((((_n_m_20225=_n_POLE_20076),(_n_cr_20226=0.09)),(_n_cg_20227=0.08)),(_n_cb_20228=0.09)),(_n_fl_20229=0.1)));
}

}
}
}
if(d::truth((_n_m_20225==_n_SKY_20069))){d::check_cancel();double _n_v_20279=(_n_y_20224/_n_HZ_20060);
double _n_g_20280=([&](){auto _n_left_20536=([&](){auto _n_left_20538=_n_glowF_20090(_n_xc_20223,_n_y_20224);auto _n_right_20539=(1.0+([&](){auto _n_left_20540=(0.6*_n_smooth_20082(84.0,98.0,_n_xc_20223));auto _n_right_20541=_n_smooth_20082(186.0,174.0,_n_xc_20223);return (_n_left_20540*_n_right_20541);})());return (_n_left_20538*_n_right_20539);})();auto _n_right_20537=([&](){auto _n_left_20542=([&](){auto _n_left_20544=(0.2*std::exp(((-d::number(d::maximum({0.0,(_n_HZ_20060-_n_y_20224)})))/14.0)));auto _n_right_20545=_n_smooth_20082(84.0,104.0,_n_xc_20223);return (_n_left_20544*_n_right_20545);})();auto _n_right_20543=_n_smooth_20082(188.0,172.0,_n_xc_20223);return (_n_left_20542*_n_right_20543);})();return (_n_left_20536+_n_right_20537);})();
double _n_veil_20281=(0.88+(0.24*_n_fbm_20080((_n_x_20221*0.05),(_n_r_20220*0.08),3.0,0.0)));
double _n_vv_20282=std::pow(_n_v_20279,1.4);
(void)((_n_cr_20226=(((0.03+(0.07*_n_vv_20282))*_n_veil_20281)+(_n_g_20280*0.42))));
(void)((_n_cg_20227=(((0.05+(0.12*_n_vv_20282))*_n_veil_20281)+(_n_g_20280*0.22))));
(void)((_n_cb_20228=(((0.15+(0.24*_n_vv_20282))*_n_veil_20281)+(_n_g_20280*0.1))));
double _n_hzn_20283=(([&](){auto _n_left_20546=std::exp(((-d::number(d::maximum({0.0,(_n_HZ_20060-_n_y_20224)})))/3.5));auto _n_right_20547=_n_smooth_20082(172.0,186.0,_n_xc_20223);return (_n_left_20546*_n_right_20547);})()*0.16);
(void)((((_n_cr_20226=(_n_cr_20226+(_n_hzn_20283*0.6))),(_n_cg_20227=(_n_cg_20227+(_n_hzn_20283*0.7)))),(_n_cb_20228=(_n_cb_20228+(_n_hzn_20283*0.95)))));
double _n_dmx_20284=(_n_xc_20223-d::at(_n_MOON_20062,0.0));
double _n_dmy_20285=(_n_y_20224-d::at(_n_MOON_20062,1.0));
double _n_dm_20286=std::sqrt(((_n_dmx_20284*_n_dmx_20284)+(_n_dmy_20285*_n_dmy_20285)));
double _n_halo_20287=([&](){auto _n_left_20548=(std::exp(((-d::number(_n_dm_20286))/22.0))*0.13);auto _n_right_20549=(std::exp(((-d::number(_n_dm_20286))/6.0))*0.26);return (_n_left_20548+_n_right_20549);})();
(void)((((_n_cr_20226=(_n_cr_20226+(_n_halo_20287*0.9))),(_n_cg_20227=(_n_cg_20227+(_n_halo_20287*0.86)))),(_n_cb_20228=(_n_cb_20228+(_n_halo_20287*0.8)))));
double _n_ring_20288=([&](){auto _n_left_20550=(0.03*_n_smooth_20082(4.6,5.6,_n_dm_20286));auto _n_right_20551=_n_smooth_20082(8.5,6.5,_n_dm_20286);return (_n_left_20550*_n_right_20551);})();
(void)((((_n_cr_20226=(_n_cr_20226-_n_ring_20288)),(_n_cg_20227=(_n_cg_20227-_n_ring_20288))),(_n_cb_20228=(_n_cb_20228-(_n_ring_20288*0.8)))));
if(d::truth((_n_dm_20286<_n_MOON_R_20063))){d::check_cancel();double _n_face_20289=(0.9+(0.1*_n_fbm_20080((_n_x_20221*0.6),(_n_r_20220*0.6),2.0,0.0)));
for(auto &&_n_item_20552:_n_MARIA_20064){d::check_cancel();auto _n_binding_20553=_n_item_20552;
double _n_mx_20290=d::at(_n_binding_20553,0.0);
double _n_my_20291=d::at(_n_binding_20553,1.0);
double _n_mr_20292=d::at(_n_binding_20553,2.0);
{
double _n_d2_20293=((std::pow((_n_dmx_20284-_n_mx_20290),2.0)+std::pow((_n_dmy_20285-_n_my_20291),2.0))/(_n_mr_20292*_n_mr_20292));
if(d::truth((_n_d2_20293<1.0))){d::check_cancel();(void)((_n_face_20289=(_n_face_20289-(0.14*(1.0-_n_d2_20293)))));
}

}
}
double _n_a_20294=_n_smooth_20082(_n_MOON_R_20063,(_n_MOON_R_20063-0.8),_n_dm_20286);
(void)((((_n_cr_20226=_n_mix_20083(_n_cr_20226,_n_face_20289,_n_a_20294)),(_n_cg_20227=_n_mix_20083(_n_cg_20227,(_n_face_20289*0.95),_n_a_20294))),(_n_cb_20228=_n_mix_20083(_n_cb_20228,(_n_face_20289*0.86),_n_a_20294))));
}
(void)(([&](){auto&& _n_array_20554=this->_n_skyGlow_20115;auto _n_index_20555=_n_k_20222;auto _n_value_20556=_n_g_20280;d::put(_n_array_20554,_n_index_20555,_n_value_20556);return _n_value_20556;})());
}
(void)(([&](){auto&& _n_array_20557=this->_n_mat_20109;auto _n_index_20558=_n_k_20222;auto _n_value_20559=_n_m_20225;d::put(_n_array_20557,_n_index_20558,_n_value_20559);return _n_value_20559;})());
(void)((((([&](){auto&& _n_array_20560=this->_n_sR_20110;auto _n_index_20561=_n_k_20222;auto _n_value_20562=_n_cr_20226;d::put(_n_array_20560,_n_index_20561,_n_value_20562);return _n_value_20562;})(),([&](){auto&& _n_array_20563=this->_n_sG_20111;auto _n_index_20564=_n_k_20222;auto _n_value_20565=_n_cg_20227;d::put(_n_array_20563,_n_index_20564,_n_value_20565);return _n_value_20565;})()),([&](){auto&& _n_array_20566=this->_n_sB_20112;auto _n_index_20567=_n_k_20222;auto _n_value_20568=_n_cb_20228;d::put(_n_array_20566,_n_index_20567,_n_value_20568);return _n_value_20568;})()),([&](){auto&& _n_array_20569=this->_n_flo_20113;auto _n_index_20570=_n_k_20222;auto _n_value_20571=_n_fl_20229;d::put(_n_array_20569,_n_index_20570,_n_value_20571);return _n_value_20571;})()));
}}
}}
this->_n_shipLights_20118=d::Array<std::array<double,5>,false>{std::array<double,5>{184.0,35.0,1.0,1.0,1.0},std::array<double,5>{190.0,34.0,1.0,1.0,1.0},std::array<double,5>{185.0,37.0,1.0,0.78,0.45},std::array<double,5>{187.0,37.0,1.0,0.8,0.5},std::array<double,5>{189.0,36.0,1.0,0.82,0.5},std::array<double,5>{191.0,36.0,1.0,0.8,0.5},std::array<double,5>{197.0,36.0,1.0,1.0,1.0},std::array<double,5>{196.0,38.0,1.0,0.78,0.45},std::array<double,5>{199.0,38.0,0.95,0.22,0.18}};
{double _n_r_20297=34.0;
for(;d::truth((_n_r_20297<40.0));(void)((_n_r_20297++))){d::check_cancel();{double _n_x_20298=180.0;
for(;d::truth((_n_x_20298<_n_W_20058));(void)((_n_x_20298++))){d::check_cancel();if(d::truth((!d::truth(this->_n_hull_20119(_n_x_20298,_n_r_20297))))){d::check_cancel();continue;
}
double _n_k_20299=((_n_r_20297*_n_W_20058)+_n_x_20298);
(void)(((((([&](){auto&& _n_array_20572=this->_n_mat_20109;auto _n_index_20573=_n_k_20299;auto _n_value_20574=_n_SHIP_20077;d::put(_n_array_20572,_n_index_20573,_n_value_20574);return _n_value_20574;})(),([&](){auto&& _n_array_20575=this->_n_sR_20110;auto _n_index_20576=_n_k_20299;auto _n_value_20577=0.002;d::put(_n_array_20575,_n_index_20576,_n_value_20577);return _n_value_20577;})()),([&](){auto&& _n_array_20578=this->_n_sG_20111;auto _n_index_20579=_n_k_20299;auto _n_value_20580=0.002;d::put(_n_array_20578,_n_index_20579,_n_value_20580);return _n_value_20580;})()),([&](){auto&& _n_array_20581=this->_n_sB_20112;auto _n_index_20582=_n_k_20299;auto _n_value_20583=0.004;d::put(_n_array_20581,_n_index_20582,_n_value_20583);return _n_value_20583;})()),([&](){auto&& _n_array_20584=this->_n_flo_20113;auto _n_index_20585=_n_k_20299;auto _n_value_20586=0.0;d::put(_n_array_20584,_n_index_20585,_n_value_20586);return _n_value_20586;})()));
}}
}}
for(auto &&_n_item_20587:this->_n_shipLights_20118){d::check_cancel();auto _n_binding_20588=_n_item_20587;
double _n_x_20300=d::at(_n_binding_20588,0.0);
double _n_r_20301=d::at(_n_binding_20588,1.0);
double _n_cr_20302=d::at(_n_binding_20588,2.0);
double _n_cg_20303=d::at(_n_binding_20588,3.0);
double _n_cb_20304=d::at(_n_binding_20588,4.0);
{
double _n_k_20305=((_n_r_20301*_n_W_20058)+_n_x_20300);
(void)(((((([&](){auto&& _n_array_20589=this->_n_mat_20109;auto _n_index_20590=_n_k_20305;auto _n_value_20591=_n_SHIP_20077;d::put(_n_array_20589,_n_index_20590,_n_value_20591);return _n_value_20591;})(),([&](){auto&& _n_array_20592=this->_n_sR_20110;auto _n_index_20593=_n_k_20305;auto _n_value_20594=_n_cr_20302;d::put(_n_array_20592,_n_index_20593,_n_value_20594);return _n_value_20594;})()),([&](){auto&& _n_array_20595=this->_n_sG_20111;auto _n_index_20596=_n_k_20305;auto _n_value_20597=_n_cg_20303;d::put(_n_array_20595,_n_index_20596,_n_value_20597);return _n_value_20597;})()),([&](){auto&& _n_array_20598=this->_n_sB_20112;auto _n_index_20599=_n_k_20305;auto _n_value_20600=_n_cb_20304;d::put(_n_array_20598,_n_index_20599,_n_value_20600);return _n_value_20600;})()),([&](){auto&& _n_array_20601=this->_n_flo_20113;auto _n_index_20602=_n_k_20305;auto _n_value_20603=0.1;d::put(_n_array_20601,_n_index_20602,_n_value_20603);return _n_value_20603;})()));

}
}
this->_n_lampI_20120=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_lampW_20121=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_flickI_20122=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_flickW_20123=d::Array<float,true>(size_t(this->_n_N_20092));
this->_n_refl_20124=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_20092)),d::Array<float,true>(size_t(this->_n_N_20092)),d::Array<float,true>(size_t(this->_n_N_20092))};
this->_n_reflFl_20125=d::Array<float,true>(size_t(this->_n_N_20092));
(void)(d::forEach(this->_n_lamps_20102,[&]( std::array<double,3> _a0,double _a1) mutable ->void{auto _n_binding_20604=_a0;
double _n_lx_20306=d::at(_n_binding_20604,0.0);
double _n_ly_20307=d::at(_n_binding_20604,1.0);
double _n_s_20308=d::at(_n_binding_20604,2.0);
double _n_j_20309=_a1;
{
double _n_core_20310=(0.34+(0.3*_n_s_20308));
double _n_halo_20311=(0.4+(0.4*_n_s_20308));
double _n_spill_20312=(1.2+(1.5*_n_s_20308));
double _n_R_20313=std::ceil((_n_spill_20312*3.2));
d::Array<float,true> _n_into_20314=(d::truth((_n_j_20309==this->_n_FLICK_20103))?this->_n_flickI_20122:this->_n_lampI_20120);
d::Array<float,true> _n_hot_20315=(d::truth((_n_j_20309==this->_n_FLICK_20103))?this->_n_flickW_20123:this->_n_lampW_20121);
{double _n_r_20316=([&](){auto _n_argument_20605=0.0;auto _n_argument_20606=std::floor((_n_ly_20307-_n_R_20313));return d::maximum({_n_argument_20605,_n_argument_20606});})();
for(;d::truth((_n_r_20316<d::minimum({_n_H_20059,(_n_ly_20307+_n_R_20313)})));(void)((_n_r_20316++))){d::check_cancel();{double _n_x_20317=([&](){auto _n_argument_20607=0.0;auto _n_argument_20608=std::floor((_n_lx_20306-_n_R_20313));return d::maximum({_n_argument_20607,_n_argument_20608});})();
for(;d::truth((_n_x_20317<d::minimum({_n_W_20058,(_n_lx_20306+_n_R_20313)})));(void)((_n_x_20317++))){d::check_cancel();double _n_k_20318=((_n_r_20316*_n_W_20058)+_n_x_20317);
if(d::truth((d::at(this->_n_mat_20109,_n_k_20318)==_n_WATER_20070))){d::check_cancel();continue;
}
double _n_dx_20319=((_n_x_20317+0.5)-_n_lx_20306);
double _n_dy_20320=((_n_r_20316+0.5)-_n_ly_20307);
double _n_d_20321=std::sqrt(((_n_dx_20319*_n_dx_20319)+(_n_dy_20320*_n_dy_20320)));
double _n_c_20322=(std::exp((-d::number(std::pow((_n_d_20321/_n_core_20310),2.0))))*2.2);
(void)(([&](){auto&& _n_array_20609=_n_into_20314;auto _n_index_20610=_n_k_20318;auto _n_value_20611=(d::at(_n_array_20609,_n_index_20610)+([&](){auto _n_left_20612=((_n_c_20322*0.7)+(std::exp(((-d::number(_n_d_20321))/_n_halo_20311))*0.24));auto _n_right_20613=(std::exp(((-d::number(_n_d_20321))/_n_spill_20312))*0.02);return (_n_left_20612+_n_right_20613);})());d::put(_n_array_20609,_n_index_20610,_n_value_20611);return _n_value_20611;})());
(void)(([&](){auto&& _n_array_20614=_n_hot_20315;auto _n_index_20615=_n_k_20318;auto _n_value_20616=(d::at(_n_array_20614,_n_index_20615)+(_n_c_20322*0.3));d::put(_n_array_20614,_n_index_20615,_n_value_20616);return _n_value_20616;})());
}}
}}
double _n_sy_20323=_n_shoreF_20085(_n_lx_20306);
double _n_wj_20324=(0.4+(0.7*_n_s_20308));
double _n_len_20325=(2.0+(8.0*_n_s_20308));
{double _n_r_20326=std::floor(_n_sy_20323);
for(;d::truth((_n_r_20326<_n_H_20059));(void)((_n_r_20326++))){d::check_cancel();double _n_dy_20327=((_n_r_20326+0.5)-_n_sy_20323);
if(d::truth((_n_dy_20327<0.0))){d::check_cancel();continue;
}
double _n_a_20328=([&](){auto _n_left_20617=(std::exp(((-d::number(_n_dy_20327))/(_n_len_20325*1.7)))*(0.3+(0.15*_n_s_20308)));auto _n_right_20618=_n_smooth_20082((-d::number(0.5)),1.5,_n_dy_20327);return (_n_left_20617*_n_right_20618);})();
if(d::truth((_n_a_20328<0.004))){d::check_cancel();break;
}
{double _n_x_20329=([&](){auto _n_argument_20619=0.0;auto _n_argument_20620=std::floor(((_n_lx_20306-(3.0*_n_wj_20324))-1.0));return d::maximum({_n_argument_20619,_n_argument_20620});})();
for(;d::truth((_n_x_20329<d::minimum({_n_W_20058,((_n_lx_20306+(3.0*_n_wj_20324))+1.0)})));(void)((_n_x_20329++))){d::check_cancel();double _n_k_20330=((_n_r_20326*_n_W_20058)+_n_x_20329);
if(d::truth((d::at(this->_n_mat_20109,_n_k_20330)!=_n_WATER_20070))){d::check_cancel();continue;
}
double _n_g_20331=(_n_a_20328*std::exp((-d::number(std::pow((((_n_x_20329+0.5)-_n_lx_20306)/_n_wj_20324),2.0)))));
if(d::truth((_n_j_20309==this->_n_FLICK_20103))){d::check_cancel();(void)(([&](){auto&& _n_array_20621=this->_n_reflFl_20125;auto _n_index_20622=_n_k_20330;auto _n_value_20623=(d::at(_n_array_20621,_n_index_20622)+_n_g_20331);d::put(_n_array_20621,_n_index_20622,_n_value_20623);return _n_value_20623;})());
}else {d::check_cancel();(void)(((([&](){auto&& _n_array_20624=d::at(this->_n_refl_20124,0.0);auto _n_index_20625=_n_k_20330;auto _n_value_20626=(d::at(_n_array_20624,_n_index_20625)+(_n_g_20331*d::at(_n_SODIUM_20068,0.0)));d::put(_n_array_20624,_n_index_20625,_n_value_20626);return _n_value_20626;})(),([&](){auto&& _n_array_20627=d::at(this->_n_refl_20124,1.0);auto _n_index_20628=_n_k_20330;auto _n_value_20629=(d::at(_n_array_20627,_n_index_20628)+(_n_g_20331*d::at(_n_SODIUM_20068,1.0)));d::put(_n_array_20627,_n_index_20628,_n_value_20629);return _n_value_20629;})()),([&](){auto&& _n_array_20630=d::at(this->_n_refl_20124,2.0);auto _n_index_20631=_n_k_20330;auto _n_value_20632=(d::at(_n_array_20630,_n_index_20631)+(_n_g_20331*d::at(_n_SODIUM_20068,2.0)));d::put(_n_array_20630,_n_index_20631,_n_value_20632);return _n_value_20632;})()));
}
}}
}}

}
}));
{double _n_k_20332=0.0;
for(;d::truth((_n_k_20332<this->_n_N_20092));(void)((_n_k_20332++))){d::check_cancel();double _n_m_20333=d::at(this->_n_mat_20109,_n_k_20332);
if((d::truth((_n_m_20333==_n_WATER_20070))||d::truth((_n_m_20333==_n_SKY_20069)))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_20633=this->_n_sR_20110;auto _n_index_20634=_n_k_20332;auto _n_value_20635=(d::at(_n_array_20633,_n_index_20634)+((d::at(this->_n_lampI_20120,_n_k_20332)*d::at(_n_SODIUM_20068,0.0))+d::at(this->_n_lampW_20121,_n_k_20332)));d::put(_n_array_20633,_n_index_20634,_n_value_20635);return _n_value_20635;})(),([&](){auto&& _n_array_20636=this->_n_sG_20111;auto _n_index_20637=_n_k_20332;auto _n_value_20638=(d::at(_n_array_20636,_n_index_20637)+((d::at(this->_n_lampI_20120,_n_k_20332)*d::at(_n_SODIUM_20068,1.0))+(d::at(this->_n_lampW_20121,_n_k_20332)*0.95)));d::put(_n_array_20636,_n_index_20637,_n_value_20638);return _n_value_20638;})()),([&](){auto&& _n_array_20639=this->_n_sB_20112;auto _n_index_20640=_n_k_20332;auto _n_value_20641=(d::at(_n_array_20639,_n_index_20640)+((d::at(this->_n_lampI_20120,_n_k_20332)*d::at(_n_SODIUM_20068,2.0))+(d::at(this->_n_lampW_20121,_n_k_20332)*0.8)));d::put(_n_array_20639,_n_index_20640,_n_value_20641);return _n_value_20641;})()));
}}
for(auto &&_n_item_20642:this->_n_shipLights_20118){d::check_cancel();auto _n_binding_20643=_n_item_20642;
double _n_x_20334=d::at(_n_binding_20643,0.0);
double _n_cr_20335=d::at(_n_binding_20643,2.0);
double _n_cg_20336=d::at(_n_binding_20643,3.0);
double _n_cb_20337=d::at(_n_binding_20643,4.0);
{
{double _n_r_20338=_n_HZ_20060;
for(;d::truth((_n_r_20338<(_n_HZ_20060+14.0)));(void)((_n_r_20338++))){d::check_cancel();double _n_a_20339=(std::exp(((-d::number((_n_r_20338-_n_HZ_20060)))/5.0))*0.35);
{double _n_dx_20340=(-d::number(1.0));
for(;d::truth((_n_dx_20340<=1.0));(void)((_n_dx_20340++))){d::check_cancel();double _n_k_20341=(((_n_r_20338*_n_W_20058)+_n_x_20334)+_n_dx_20340);
if((d::truth(((_n_x_20334+_n_dx_20340)>=_n_W_20058))||d::truth((d::at(this->_n_mat_20109,_n_k_20341)!=_n_WATER_20070)))){d::check_cancel();continue;
}
double _n_g_20342=(_n_a_20339*std::exp((((-d::number(_n_dx_20340))*_n_dx_20340)*2.5)));
(void)(((([&](){auto&& _n_array_20644=d::at(this->_n_refl_20124,0.0);auto _n_index_20645=_n_k_20341;auto _n_value_20646=(d::at(_n_array_20644,_n_index_20645)+(_n_g_20342*_n_cr_20335));d::put(_n_array_20644,_n_index_20645,_n_value_20646);return _n_value_20646;})(),([&](){auto&& _n_array_20647=d::at(this->_n_refl_20124,1.0);auto _n_index_20648=_n_k_20341;auto _n_value_20649=(d::at(_n_array_20647,_n_index_20648)+(_n_g_20342*_n_cg_20336));d::put(_n_array_20647,_n_index_20648,_n_value_20649);return _n_value_20649;})()),([&](){auto&& _n_array_20650=d::at(this->_n_refl_20124,2.0);auto _n_index_20651=_n_k_20341;auto _n_value_20652=(d::at(_n_array_20650,_n_index_20651)+(_n_g_20342*_n_cb_20337));d::put(_n_array_20650,_n_index_20651,_n_value_20652);return _n_value_20652;})()));
}}
}}

}
}
{double _n_r_20343=0.0;
for(;d::truth((_n_r_20343<_n_H_20059));(void)((_n_r_20343++))){d::check_cancel();{double _n_x_20344=0.0;
for(;d::truth((_n_x_20344<_n_W_20058));(void)((_n_x_20344++))){d::check_cancel();double _n_k_20345=((_n_r_20343*_n_W_20058)+_n_x_20344);
if(d::truth((d::at(this->_n_mat_20109,_n_k_20345)!=_n_WATER_20070))){d::check_cancel();continue;
}
double _n_sy_20346=_n_seaTop_20087((_n_x_20344+0.5));
double _n_d_20347=((_n_r_20343+0.5)-_n_sy_20346);
double _n_ar_20348=0.0;
double _n_ag_20349=0.0;
double _n_ab_20350=0.0;
double _n_n_20351=0.0;
{double _n_o_20352=0.0;
for(;d::truth((_n_o_20352<3.0));(void)((_n_o_20352++))){d::check_cancel();double _n_ym_20353=std::floor((((_n_sy_20346-(_n_d_20347*0.55))-0.3)-(_n_o_20352*0.7)));
if(d::truth((_n_ym_20353<0.0))){d::check_cancel();continue;
}
double _n_q_20354=((_n_ym_20353*_n_W_20058)+_n_x_20344);
if(d::truth((d::at(this->_n_mat_20109,_n_q_20354)==_n_WATER_20070))){d::check_cancel();continue;
}
(void)((_n_n_20351++));
if(d::truth((d::at(this->_n_mat_20109,_n_q_20354)==_n_SKY_20069))){d::check_cancel();(void)((((_n_ar_20348=(_n_ar_20348+d::at(this->_n_sR_20110,_n_q_20354))),(_n_ag_20349=(_n_ag_20349+d::at(this->_n_sG_20111,_n_q_20354)))),(_n_ab_20350=(_n_ab_20350+d::at(this->_n_sB_20112,_n_q_20354)))));
}else {d::check_cancel();if((d::truth((d::at(this->_n_mat_20109,_n_q_20354)==_n_TOWER_20072))||d::truth((d::at(this->_n_mat_20109,_n_q_20354)==_n_SHIP_20077)))){d::check_cancel();(void)((((_n_ar_20348=(_n_ar_20348+(d::maximum({0.0,(d::at(this->_n_sR_20110,_n_q_20354)-0.25)})*0.6))),(_n_ag_20349=(_n_ag_20349+(d::maximum({0.0,(d::at(this->_n_sG_20111,_n_q_20354)-0.25)})*0.6)))),(_n_ab_20350=(_n_ab_20350+(d::maximum({0.0,(d::at(this->_n_sB_20112,_n_q_20354)-0.25)})*0.6)))));
}
}
}}
double _n_a_20355=(0.32*std::exp(((-d::number(_n_d_20347))/30.0)));
if(d::truth(_n_n_20351)){d::check_cancel();(void)(((([&](){auto&& _n_array_20653=d::at(this->_n_refl_20124,0.0);auto _n_index_20654=_n_k_20345;auto _n_value_20655=(d::at(_n_array_20653,_n_index_20654)+((_n_ar_20348/_n_n_20351)*_n_a_20355));d::put(_n_array_20653,_n_index_20654,_n_value_20655);return _n_value_20655;})(),([&](){auto&& _n_array_20656=d::at(this->_n_refl_20124,1.0);auto _n_index_20657=_n_k_20345;auto _n_value_20658=(d::at(_n_array_20656,_n_index_20657)+((_n_ag_20349/_n_n_20351)*_n_a_20355));d::put(_n_array_20656,_n_index_20657,_n_value_20658);return _n_value_20658;})()),([&](){auto&& _n_array_20659=d::at(this->_n_refl_20124,2.0);auto _n_index_20660=_n_k_20345;auto _n_value_20661=(d::at(_n_array_20659,_n_index_20660)+((_n_ab_20350/_n_n_20351)*_n_a_20355));d::put(_n_array_20659,_n_index_20660,_n_value_20661);return _n_value_20661;})()));
}
if(d::truth(((_n_x_20344+0.5)<=(_n_TIP_20061+4.0)))){d::check_cancel();double _n_sh_20356=([&](){auto _n_left_20662=(0.025*std::exp(((-d::number(_n_d_20347))/5.0)));auto _n_right_20663=_n_smooth_20082((_n_TIP_20061+4.0),(_n_TIP_20061-6.0),(_n_x_20344+0.5));return (_n_left_20662*_n_right_20663);})();
(void)(((([&](){auto&& _n_array_20664=d::at(this->_n_refl_20124,0.0);auto _n_index_20665=_n_k_20345;auto _n_value_20666=(d::at(_n_array_20664,_n_index_20665)+(_n_sh_20356*d::at(_n_SODIUM_20068,0.0)));d::put(_n_array_20664,_n_index_20665,_n_value_20666);return _n_value_20666;})(),([&](){auto&& _n_array_20667=d::at(this->_n_refl_20124,1.0);auto _n_index_20668=_n_k_20345;auto _n_value_20669=(d::at(_n_array_20667,_n_index_20668)+(_n_sh_20356*d::at(_n_SODIUM_20068,1.0)));d::put(_n_array_20667,_n_index_20668,_n_value_20669);return _n_value_20669;})()),([&](){auto&& _n_array_20670=d::at(this->_n_refl_20124,2.0);auto _n_index_20671=_n_k_20345;auto _n_value_20672=(d::at(_n_array_20670,_n_index_20671)+(_n_sh_20356*d::at(_n_SODIUM_20068,2.0)));d::put(_n_array_20670,_n_index_20671,_n_value_20672);return _n_value_20672;})()));
}
}}
}}
this->_n_CW_20126=800.0;
this->_n_cover_20127=d::Array<float,true>(size_t((this->_n_CW_20126*_n_HZ_20060)));
this->_n_clit_20128=d::Array<float,true>(size_t((this->_n_CW_20126*_n_HZ_20060)));
{double _n_r_20362=0.0;
for(;d::truth((_n_r_20362<_n_HZ_20060));(void)((_n_r_20362++))){d::check_cancel();{double _n_x_20363=0.0;
for(;d::truth((_n_x_20363<this->_n_CW_20126));(void)((_n_x_20363++))){d::check_cancel();double _n_y_20364=(_n_r_20362+0.5);
double _n_d_20365=this->_n_density_20129(_n_x_20363,_n_y_20364);
(void)(([&](){auto&& _n_array_20673=this->_n_cover_20127;auto _n_index_20674=((_n_r_20362*this->_n_CW_20126)+_n_x_20363);auto _n_value_20675=(_n_smooth_20082(0.47,0.62,_n_d_20365)*0.9);d::put(_n_array_20673,_n_index_20674,_n_value_20675);return _n_value_20675;})());
(void)(([&](){auto&& _n_array_20676=this->_n_clit_20128;auto _n_index_20677=((_n_r_20362*this->_n_CW_20126)+_n_x_20363);auto _n_value_20678=_n_clamp_20081(((0.5+((_n_d_20365-this->_n_density_20129((_n_x_20363-1.0),(_n_y_20364+2.5)))*9.0))-((_n_d_20365-0.6)*1.4)));d::put(_n_array_20676,_n_index_20677,_n_value_20678);return _n_value_20678;})());
}}
}}
this->_n_clear_20130=d::Array<float,true>(size_t(this->_n_N_20092));
{double _n_k_20366=0.0;
for(;d::truth((_n_k_20366<this->_n_N_20092));(void)((_n_k_20366++))){d::check_cancel();double _n_x_20367=(d::mod(_n_k_20366,_n_W_20058)+0.5);
double _n_y_20368=(std::floor((_n_k_20366/_n_W_20058))+0.5);
(void)(([&](){auto&& _n_array_20679=this->_n_clear_20130;auto _n_index_20680=_n_k_20366;auto _n_value_20681=(1.0-([&](){auto _n_left_20682=([&](){auto _n_left_20684=(0.9*_n_smooth_20082(84.0,96.0,_n_x_20367));auto _n_right_20685=_n_smooth_20082(186.0,176.0,_n_x_20367);return (_n_left_20684*_n_right_20685);})();auto _n_right_20683=_n_smooth_20082(20.0,28.0,_n_y_20368);return (_n_left_20682*_n_right_20683);})());d::put(_n_array_20679,_n_index_20680,_n_value_20681);return _n_value_20681;})());
}}
this->_n_BIN_20131=0.2;
this->_n_U0_20132=(-d::number(6.0));
this->_n_NB_20133=std::ceil(((this->_n_UEND_20101+12.0)/this->_n_BIN_20131));
this->_n_laneA_20134=d::Array<float,true>(size_t(this->_n_NB_20133));
this->_n_laneB_20135=d::Array<float,true>(size_t(this->_n_NB_20133));
this->_n_cars_20136=d::Array<std::array<double,3>,false>{};
{double _n_i_20369=0.0;
for(;d::truth((_n_i_20369<26.0));(void)((_n_i_20369++))){d::check_cancel();(void)(this->_n_cars_20136.push(std::array<double,3>{(_n_hash_20078(_n_i_20369,51.0)*(this->_n_UEND_20101+12.0)),(4.2+(1.6*_n_hash_20078(_n_i_20369,52.0))),double(d::i32(_n_i_20369)&d::i32(1.0))}));
}}
this->_n_binLo_20137=d::Array<int32_t,true>(size_t(_n_W_20058));
this->_n_binHi_20138=d::Array<int32_t,true>(size_t(_n_W_20058));
{double _n_x_20370=0.0;
for(;d::truth((_n_x_20370<_n_W_20058));(void)((_n_x_20370++))){d::check_cancel();(void)(([&](){auto&& _n_array_20686=this->_n_binLo_20137;auto _n_index_20687=_n_x_20370;auto _n_value_20688=([&](){auto _n_argument_20689=0.0;auto _n_argument_20690=std::floor(((this->_n_Uof_20099(_n_x_20370)-this->_n_U0_20132)/this->_n_BIN_20131));return d::maximum({_n_argument_20689,_n_argument_20690});})();d::put(_n_array_20686,_n_index_20687,_n_value_20688);return _n_value_20688;})());
(void)(([&](){auto&& _n_array_20691=this->_n_binHi_20138;auto _n_index_20692=_n_x_20370;auto _n_value_20693=([&](){auto _n_argument_20694=(this->_n_NB_20133-1.0);auto _n_argument_20695=([&](){auto _n_argument_20696=d::at(this->_n_binLo_20137,_n_x_20370);auto _n_argument_20697=std::floor(((this->_n_Uof_20099((_n_x_20370+1.0))-this->_n_U0_20132)/this->_n_BIN_20131));return d::maximum({_n_argument_20696,_n_argument_20697});})();return d::minimum({_n_argument_20694,_n_argument_20695});})();d::put(_n_array_20691,_n_index_20692,_n_value_20693);return _n_value_20693;})());
}}
this->_n_colA_20139=d::Array<float,true>(size_t(_n_W_20058));
this->_n_colB_20140=d::Array<float,true>(size_t(_n_W_20058));
_render=[=]( double _a0,std::shared_ptr<_n_Record_20475> _a1) mutable ->d::String{double _n_t_20371=_a0;
auto _n_binding_20700=(d::present(_a1)?_a1:([&](){auto _n_object_20699=std::make_shared<_n_Record_20475>();return _n_object_20699;})());
std::optional<d::Array<uint8_t,true>> _n_color_20372=_n_binding_20700->_p_color;
{
double _n_drift_20373=(_n_t_20371*1.3);
(void)((this->_n_laneA_20134.fill(0.0),this->_n_laneB_20135.fill(0.0)));
double _n_span_20374=(this->_n_UEND_20101+12.0);
for(auto &&_n_item_20701:this->_n_cars_20136){d::check_cancel();auto _n_binding_20702=_n_item_20701;
double _n_p0_20375=d::at(_n_binding_20702,0.0);
double _n_v_20376=d::at(_n_binding_20702,1.0);
double _n_dir_20377=d::at(_n_binding_20702,2.0);
{
double _n_p_20378=d::mod((d::mod((_n_p0_20375+((d::truth(_n_dir_20377)?(-d::number(_n_v_20376)):_n_v_20376)*_n_t_20371)),_n_span_20374)+_n_span_20374),_n_span_20374);
d::Array<float,true> _n_into_20379=(d::truth(_n_dir_20377)?this->_n_laneB_20135:this->_n_laneA_20134);
double _n_head_20380=std::floor((_n_p_20378/this->_n_BIN_20131));
{double _n_i_20381=0.0;
for(;d::truth((_n_i_20381<26.0));(void)((_n_i_20381++))){d::check_cancel();double _n_b_20382=(d::truth(_n_dir_20377)?(_n_head_20380+_n_i_20381):(_n_head_20380-_n_i_20381));
if((d::truth((_n_b_20382<0.0))||d::truth((_n_b_20382>=this->_n_NB_20133)))){d::check_cancel();continue;
}
double _n_e_20383=(std::exp(((-d::number(_n_i_20381))/7.0))*(d::truth((_n_i_20381<2.0))?1.3:0.85));
if(d::truth((_n_e_20383>d::at(_n_into_20379,_n_b_20382)))){d::check_cancel();(void)(([&](){auto&& _n_array_20703=_n_into_20379;auto _n_index_20704=_n_b_20382;auto _n_value_20705=_n_e_20383;d::put(_n_array_20703,_n_index_20704,_n_value_20705);return _n_value_20705;})());
}
}}

}
}
{double _n_x_20384=0.0;
for(;d::truth((_n_x_20384<_n_W_20058));(void)((_n_x_20384++))){d::check_cancel();double _n_a_20385=0.0;
double _n_b_20386=0.0;
{double _n_i_20387=d::at(this->_n_binLo_20137,_n_x_20384);
for(;d::truth((_n_i_20387<=d::at(this->_n_binHi_20138,_n_x_20384)));(void)((_n_i_20387++))){d::check_cancel();(void)(((_n_a_20385=d::maximum({_n_a_20385,d::at(this->_n_laneA_20134,_n_i_20387)})),(_n_b_20386=d::maximum({_n_b_20386,d::at(this->_n_laneB_20135,_n_i_20387)}))));
}}
(void)((([&](){auto&& _n_array_20706=this->_n_colA_20139;auto _n_index_20707=_n_x_20384;auto _n_value_20708=_n_a_20385;d::put(_n_array_20706,_n_index_20707,_n_value_20708);return _n_value_20708;})(),([&](){auto&& _n_array_20709=this->_n_colB_20140;auto _n_index_20710=_n_x_20384;auto _n_value_20711=_n_b_20386;d::put(_n_array_20709,_n_index_20710,_n_value_20711);return _n_value_20711;})()));
}}
bool _n_sputter_20388=(std::sin((_n_t_20371*0.7))>0.45);
double _n_lampOn_20389=(d::truth(_n_sputter_20388)?(d::truth((([&](){auto _n_argument_20712=std::floor((_n_t_20371*9.0));auto _n_argument_20713=77.0;return _n_hash_20078(_n_argument_20712,_n_argument_20713);})()>0.45))?1.0:0.15):1.0);
{double _n_r_20390=0.0;
for(;d::truth((_n_r_20390<_n_H_20059));(void)((_n_r_20390++))){d::check_cancel();double _n_y_20391=(_n_r_20390+0.5);
{double _n_x_20392=0.0;
for(;d::truth((_n_x_20392<_n_W_20058));(void)((_n_x_20392++))){d::check_cancel();double _n_k_20393=((_n_r_20390*_n_W_20058)+_n_x_20392);
double _n_m_20394=d::at(this->_n_mat_20109,_n_k_20393);
double _n_cr_20395=d::at(this->_n_sR_20110,_n_k_20393);
double _n_cg_20396=d::at(this->_n_sG_20111,_n_k_20393);
double _n_cb_20397=d::at(this->_n_sB_20112,_n_k_20393);
double _n_floor_20398=d::at(this->_n_flo_20113,_n_k_20393);
double _n_fade_20399=1.0;
if(d::truth((_n_m_20394==_n_SKY_20069))){d::check_cancel();double _n_sx_20400=(_n_x_20392+_n_drift_20373);
double _n_ix_20401=std::floor(_n_sx_20400);
double _n_fx_20402=(_n_sx_20400-_n_ix_20401);
double _n_i0_20403=((_n_r_20390*this->_n_CW_20126)+d::mod(_n_ix_20401,this->_n_CW_20126));
double _n_i1_20404=((_n_r_20390*this->_n_CW_20126)+d::mod((_n_ix_20401+1.0),this->_n_CW_20126));
double _n_c_20405=((d::at(this->_n_cover_20127,_n_i0_20403)+((d::at(this->_n_cover_20127,_n_i1_20404)-d::at(this->_n_cover_20127,_n_i0_20403))*_n_fx_20402))*d::at(this->_n_clear_20130,_n_k_20393));
if(d::truth((_n_c_20405>0.01))){d::check_cancel();double _n_l_20406=(d::at(this->_n_clit_20128,_n_i0_20403)+((d::at(this->_n_clit_20128,_n_i1_20404)-d::at(this->_n_clit_20128,_n_i0_20403))*_n_fx_20402));
double _n_g_20407=d::at(this->_n_skyGlow_20115,_n_k_20393);
double _n_dmx_20408=((_n_x_20392+0.5)-d::at(_n_MOON_20062,0.0));
double _n_dmy_20409=(_n_y_20391-d::at(_n_MOON_20062,1.0));
double _n_dm_20410=std::sqrt(((_n_dmx_20408*_n_dmx_20408)+(_n_dmy_20409*_n_dmy_20409)));
double _n_near_20411=std::exp(((-d::number(_n_dm_20410))/16.0));
double _n_b_20412=_n_clamp_20081((0.1+(_n_l_20406*((0.42+(0.9*_n_g_20407))+(0.5*_n_near_20411)))));
double _n_kr_20413=(d::truth((_n_b_20412<0.5))?_n_mix_20083(0.05,0.22,(_n_b_20412*2.0)):_n_mix_20083(0.22,0.9,((_n_b_20412*2.0)-1.0)));
double _n_kg_20414=(d::truth((_n_b_20412<0.5))?_n_mix_20083(0.06,0.26,(_n_b_20412*2.0)):_n_mix_20083(0.26,0.88,((_n_b_20412*2.0)-1.0)));
double _n_kb_20415=(d::truth((_n_b_20412<0.5))?_n_mix_20083(0.15,0.44,(_n_b_20412*2.0)):_n_mix_20083(0.44,0.92,((_n_b_20412*2.0)-1.0)));
double _n_a_20416=([&](){auto _n_left_20714=([&](){auto _n_left_20716=d::minimum({1.0,(_n_c_20405*1.1)});auto _n_right_20717=_n_smooth_20082(_n_MOON_R_20063,(_n_MOON_R_20063+4.0),_n_dm_20410);return (_n_left_20716*_n_right_20717);})();auto _n_right_20715=(1.0-(0.8*_n_smooth_20082(27.0,37.0,_n_y_20391)));return (_n_left_20714*_n_right_20715);})();
(void)((((_n_cr_20395=_n_mix_20083(_n_cr_20395,_n_kr_20413,_n_a_20416)),(_n_cg_20396=_n_mix_20083(_n_cg_20396,_n_kg_20414,_n_a_20416))),(_n_cb_20397=_n_mix_20083(_n_cb_20397,_n_kb_20415,_n_a_20416))));
}else {d::check_cancel();if((d::truth((_n_y_20391<(_n_HZ_20060-14.0)))&&d::truth((_n_hash_20078(_n_x_20392,((_n_r_20390*3.0)+11.0))>0.993)))){d::check_cancel();double _n_tw_20417=(0.3+(0.2*std::sin(([&](){auto _n_left_20718=(_n_t_20371*(1.3+(_n_hash_20078(_n_x_20392,_n_r_20390)*2.5)));auto _n_right_20719=(_n_hash_20078(_n_r_20390,_n_x_20392)*6.28);return (_n_left_20718+_n_right_20719);})())));
(void)((((_n_cr_20395=d::maximum({_n_cr_20395,(_n_tw_20417*0.9)})),(_n_cg_20396=d::maximum({_n_cg_20396,(_n_tw_20417*0.9)}))),(_n_cb_20397=d::maximum({_n_cb_20397,_n_tw_20417}))));
}
}
double _n_li_20418=d::at(this->_n_lampI_20120,_n_k_20393);
double _n_lw_20419=d::at(this->_n_lampW_20121,_n_k_20393);
(void)((((_n_cr_20395=(_n_cr_20395+((_n_li_20418*d::at(_n_SODIUM_20068,0.0))+_n_lw_20419))),(_n_cg_20396=(_n_cg_20396+((_n_li_20418*d::at(_n_SODIUM_20068,1.0))+(_n_lw_20419*0.95))))),(_n_cb_20397=(_n_cb_20397+((_n_li_20418*d::at(_n_SODIUM_20068,2.0))+(_n_lw_20419*0.8))))));
(void)((_n_floor_20398=0.14));
}else {d::check_cancel();if(d::truth((_n_m_20394==_n_WATER_20070))){d::check_cancel();double _n_v_20420=((_n_y_20391-_n_HZ_20060)/(_n_H_20059-_n_HZ_20060));
double _n_w_20421=([&](){auto _n_left_20720=(0.6*_n_noise_20079(((_n_x_20392*0.06)+(_n_t_20371*0.1)),((_n_y_20391*0.5)-(_n_t_20371*0.5)),0.0));auto _n_right_20721=(0.4*_n_noise_20079(((_n_x_20392*0.18)-(_n_t_20371*0.2)),((_n_y_20391*1.0)-(_n_t_20371*1.0)),0.0));return (_n_left_20720+_n_right_20721);})();
double _n_swell_20422=(0.45+(0.95*_n_w_20421));
double _n_open_20423=(0.85+(0.3*(_n_x_20392/_n_W_20058)));
(void)((((_n_cr_20395=(((0.05-(0.01*_n_v_20420))*_n_swell_20422)*_n_open_20423)),(_n_cg_20396=(((0.095-(0.015*_n_v_20420))*_n_swell_20422)*_n_open_20423))),(_n_cb_20397=(((0.23-(0.03*_n_v_20420))*_n_swell_20422)*_n_open_20423))));
{
double _n_road_20424=std::exp((-d::number(std::pow((((_n_x_20392+0.5)-d::at(_n_MOON_20062,0.0))/(0.8+((_n_y_20391-_n_HZ_20060)*0.12))),2.0))));
double _n_glint_20425=(([&](){auto _n_argument_20722=0.52;auto _n_argument_20723=0.8;auto _n_argument_20724=((0.45*_n_w_20421)+(0.55*_n_noise_20079(((_n_x_20392*0.3)+(_n_t_20371*0.3)),((_n_y_20391*1.4)-(_n_t_20371*1.4)),0.0)));return _n_smooth_20082(_n_argument_20722,_n_argument_20723,_n_argument_20724);})()*_n_road_20424);
(void)((((_n_cr_20395=(_n_cr_20395+((0.9*_n_glint_20425)+(0.03*_n_road_20424)))),(_n_cg_20396=(_n_cg_20396+((0.88*_n_glint_20425)+(0.035*_n_road_20424))))),(_n_cb_20397=(_n_cb_20397+((0.8*_n_glint_20425)+(0.05*_n_road_20424))))));

}
double _n_wob_20426=((_n_noise_20079(((_n_x_20392*0.05)+7.0),((_n_y_20391*0.32)-(_n_t_20371*0.7)),0.0)-0.5)*(1.4+(4.5*_n_v_20420)));
double _n_sx_20427=(_n_x_20392+_n_wob_20426);
if(d::truth((_n_sx_20427<0.0))){d::check_cancel();(void)((_n_sx_20427=0.0));
}
if(d::truth((_n_sx_20427>(_n_W_20058-1.001)))){d::check_cancel();(void)((_n_sx_20427=(_n_W_20058-1.001)));
}
double _n_i0_20428=((_n_r_20390*_n_W_20058)+double(d::i32(_n_sx_20427)|d::i32(0.0)));
double _n_fx_20429=(_n_sx_20427-double(d::i32(_n_sx_20427)|d::i32(0.0)));
double _n_dash_20430=(0.45+(0.9*([&](){auto _n_argument_20725=0.2;auto _n_argument_20726=0.55;auto _n_argument_20727=_n_noise_20079(((_n_x_20392*0.16)+3.0),((_n_y_20391*0.85)-(_n_t_20371*1.3)),0.0);return _n_smooth_20082(_n_argument_20725,_n_argument_20726,_n_argument_20727);})()));
auto _n_ref_20431=[&]( d::Array<float,true> _a0) mutable ->double{d::Array<float,true> _n_a_20432=_a0;
return ((d::at(_n_a_20432,_n_i0_20428)+((d::at(_n_a_20432,(_n_i0_20428+1.0))-d::at(_n_a_20432,_n_i0_20428))*_n_fx_20429))*_n_dash_20430);};
double _n_fl_20433=(_n_ref_20431(this->_n_reflFl_20125)*_n_lampOn_20389);
double _n_rr_20434=(_n_ref_20431(d::at(this->_n_refl_20124,0.0))+(_n_fl_20433*d::at(_n_SODIUM_20068,0.0)));
double _n_rg_20435=(_n_ref_20431(d::at(this->_n_refl_20124,1.0))+(_n_fl_20433*d::at(_n_SODIUM_20068,1.0)));
double _n_rb_20436=(_n_ref_20431(d::at(this->_n_refl_20124,2.0))+(_n_fl_20433*d::at(_n_SODIUM_20068,2.0)));
double _n_kill_20437=(1.0-(0.9*_n_clamp_20081(((_n_rr_20434-_n_rb_20436)*3.0))));
(void)((((_n_cr_20395=((_n_cr_20395*_n_kill_20437)+_n_rr_20434)),(_n_cg_20396=((_n_cg_20396*_n_kill_20437)+_n_rg_20435))),(_n_cb_20397=((_n_cb_20397*_n_kill_20437)+_n_rb_20436))));
(void)((_n_floor_20398=0.16));
(void)((_n_fade_20399=_n_smooth_20082((_n_H_20059+6.0),(_n_H_20059-8.0),_n_y_20391)));
}else {d::check_cancel();if(d::truth((_n_m_20394==_n_ROAD_20074))){d::check_cancel();double _n_L_20438=d::at(this->_n_lane_20114,_n_k_20393);
double _n_a_20439=(d::truth(double(d::i32(_n_L_20438)&d::i32(1.0)))?d::at(this->_n_colA_20139,_n_x_20392):0.0);
double _n_b_20440=(d::truth(double(d::i32(_n_L_20438)&d::i32(2.0)))?d::at(this->_n_colB_20140,_n_x_20392):0.0);
(void)((((_n_cr_20395=(_n_cr_20395+((_n_a_20439*0.8)+(_n_b_20440*1.0)))),(_n_cg_20396=(_n_cg_20396+((_n_a_20439*0.1)+(_n_b_20440*0.9))))),(_n_cb_20397=(_n_cb_20397+((_n_a_20439*0.08)+(_n_b_20440*0.72))))));
}
}
}
if(d::truth((_n_m_20394!=_n_WATER_20070))){d::check_cancel();double _n_f_20441=(d::at(this->_n_flickI_20122,_n_k_20393)*_n_lampOn_20389);
double _n_fw_20442=(d::at(this->_n_flickW_20123,_n_k_20393)*_n_lampOn_20389);
if(d::truth(_n_f_20441)){d::check_cancel();(void)((((_n_cr_20395=(_n_cr_20395+((_n_f_20441*d::at(_n_SODIUM_20068,0.0))+_n_fw_20442))),(_n_cg_20396=(_n_cg_20396+((_n_f_20441*d::at(_n_SODIUM_20068,1.0))+(_n_fw_20442*0.95))))),(_n_cb_20397=(_n_cb_20397+((_n_f_20441*d::at(_n_SODIUM_20068,2.0))+(_n_fw_20442*0.8))))));
}
}
double _n_peak_20443=d::maximum({_n_cr_20395,_n_cg_20396,_n_cb_20397,0.0001});
double _n_level_20444=(_n_clamp_20081((_n_floor_20398+(((1.0-_n_floor_20398)*std::pow(_n_peak_20443,0.85))*0.95)))*_n_fade_20399);
double _n_step_20445=([&](){auto _n_argument_20728=0.0;auto _n_argument_20729=([&](){auto _n_argument_20730=3.0;auto _n_argument_20731=d::round(((_n_level_20444*3.0)+d::at(_n_BAYER_20067,((double(d::i32(_n_r_20390)&d::i32(3.0))*4.0)+double(d::i32(_n_x_20392)&d::i32(3.0))))));return d::minimum({_n_argument_20730,_n_argument_20731});})();return d::maximum({_n_argument_20728,_n_argument_20729});})();
(void)(([&](){auto&& _n_array_20732=this->_n_out_20093;auto _n_index_20733=_n_k_20393;auto _n_value_20734=d::at(_n_DOTS_20065,_n_step_20445);d::put(_n_array_20732,_n_index_20733,_n_value_20734);return _n_value_20734;})());
if(d::truth(_n_color_20372)){d::check_cancel();double _n_want_20446=(d::truth(_n_step_20445)?d::minimum({1.0,((_n_level_20444+0.06)/d::at(_n_COVER_20066,_n_step_20445))}):0.0);
double _n_s_20447=((0.3+(0.7*_n_want_20446))/_n_peak_20443);
(void)(([&](){auto&& _n_array_20735=d::read(_n_color_20372);auto _n_index_20736=_n_k_20393;auto _n_value_20737=([&](){auto _n_argument_20738=_n_clamp_20081((_n_cr_20395*_n_s_20447));auto _n_argument_20739=_n_clamp_20081((_n_cg_20396*_n_s_20447));auto _n_argument_20740=_n_clamp_20081((_n_cb_20397*_n_s_20447));return this->_n_nearest_20095(_n_argument_20738,_n_argument_20739,_n_argument_20740);})();d::put(_n_array_20735,_n_index_20736,_n_value_20737);return _n_value_20737;})());
}
}}
}}
for(auto &&_n_item_20741:this->_n_flick_20116){d::check_cancel();auto _n_binding_20742=_n_item_20741;
double _n_k_20448=d::at(_n_binding_20742,0.0);
double _n_wr_20449=d::at(_n_binding_20742,1.0);
double _n_wg_20450=d::at(_n_binding_20742,2.0);
double _n_wb_20451=d::at(_n_binding_20742,3.0);
double _n_kind_20452=d::at(_n_binding_20742,4.0);
double _n_rate_20453=d::at(_n_binding_20742,5.0);
double _n_ph_20454=d::at(_n_binding_20742,6.0);
{
if(d::truth(_n_kind_20452)){d::check_cancel();double _n_f_20455=(0.5+([&](){auto _n_left_20743=(0.5*std::sin(((_n_t_20371*11.0)+_n_ph_20454)));auto _n_right_20744=std::sin(((_n_t_20371*4.3)+(_n_ph_20454*2.0)));return (_n_left_20743*_n_right_20744);})());
(void)(this->_n_paint_20141(_n_k_20448,((d::at(this->_n_sR_20110,_n_k_20448)-_n_wr_20449)+((_n_f_20455*_n_wr_20449)*0.45)),((d::at(this->_n_sG_20111,_n_k_20448)-_n_wg_20450)+((_n_f_20455*_n_wr_20449)*0.6)),((d::at(this->_n_sB_20112,_n_k_20448)-_n_wb_20451)+(_n_f_20455*_n_wr_20449)),0.08,_n_color_20372));
}else {d::check_cancel();double _n_f_20456=(d::truth((std::sin((((_n_t_20371*_n_rate_20453)*0.5)+_n_ph_20454))>(-d::number(0.6))))?1.0:0.0);
(void)(this->_n_paint_20141(_n_k_20448,(d::at(this->_n_sR_20110,_n_k_20448)-(_n_wr_20449*(1.0-_n_f_20456))),(d::at(this->_n_sG_20111,_n_k_20448)-(_n_wg_20450*(1.0-_n_f_20456))),(d::at(this->_n_sB_20112,_n_k_20448)-(_n_wb_20451*(1.0-_n_f_20456))),0.08,_n_color_20372));
}

}
}
for(auto &&_n_item_20745:this->_n_beacons_20117){d::check_cancel();auto _n_binding_20746=_n_item_20745;
double _n_k_20457=d::at(_n_binding_20746,0.0);
double _n_ph_20458=d::at(_n_binding_20746,1.0);
{
if(d::truth((_n_k_20457<0.0))){d::check_cancel();continue;
}
bool _n_on_20459=(std::sin(((_n_t_20371*2.4)+_n_ph_20458))>0.3);
(void)(this->_n_paint_20141(_n_k_20457,(d::truth(_n_on_20459)?1.0:0.3),(d::truth(_n_on_20459)?0.2:0.06),(d::truth(_n_on_20459)?0.15:0.05),0.1,_n_color_20372));

}
}
d::Array<d::String,false> _n_lines_20460=d::Array<d::String,false>{};
{double _n_r_20461=0.0;
for(;d::truth((_n_r_20461<_n_H_20059));(void)((_n_r_20461++))){d::check_cancel();(void)(_n_lines_20460.push(d::join(this->_n_out_20093.slice((_n_r_20461*_n_W_20058),((_n_r_20461+1.0)*_n_W_20058)),d::String(u""))));
}}
return d::join(_n_lines_20460,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("marine-drive").cols)*ascii::catalog_meta("marine-drive").rows);auto _env=std::make_shared<_n_Record_20475>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &marine_drive_meta(){return catalog_meta("marine-drive");}
std::unique_ptr<Piece> make_marine_drive(const AsciiPieceOptions &o){return std::make_unique<Native_marine_drive>(o);}
}
