// Direct, statically typed C++ from src/pieces/marine-drive.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20058;
struct _n_Record_20106;
struct _n_Record_20476;
struct _n_Record_20058{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_20058> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20058>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_20106{
double _p_u0{};
double _p_u1{};
double _p_floors{};
double _p_tone{};
bool _p_crown{};
static std::shared_ptr<_n_Record_20106> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20106>();out->_p_u0=d::decode<double>(j["u0"]);out->_p_u1=d::decode<double>(j["u1"]);out->_p_floors=d::decode<double>(j["floors"]);out->_p_tone=d::decode<double>(j["tone"]);out->_p_crown=d::decode<bool>(j["crown"]);return out;}
};
struct _n_Record_20476{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20476> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20476>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_20079(double _a0,double _a1);
double _n_noise_20080(double _a0,double _a1,double _a2);
double _n_fbm_20081(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_20082(double _a0);
double _n_smooth_20083(double _a0,double _a1,double _a2);
double _n_mix_20084(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_20085(d::String _a0);
double _n_shoreF_20086(double _a0);
double _n_scF_20087(double _a0);
double _n_seaTop_20088(double _a0);
double _n_wallTopF_20089(double _a0);
double _n_roadTopF_20090(double _a0);
double _n_glowF_20091(double _a0,double _a1);
std::shared_ptr<_n_Record_20058> _n_meta_20057=[](){return ([&](){auto _n_object_20479=std::make_shared<_n_Record_20058>();_n_object_20479->_p_name=d::String(u"marine drive");_n_object_20479->_p_category=d::String(u"scenes");_n_object_20479->_p_note=d::String(u"mumbai's queen's necklace at night, lamps curving round the bay");_n_object_20479->_p_cols=200.0;_n_object_20479->_p_rows=100.0;_n_object_20479->_p_cell=1.0;_n_object_20479->_p_fps=15.0;_n_object_20479->_p_ground=d::String(u"#07080f");_n_object_20479->_p_palette=d::Array<d::String,false>{d::String(u"#18213f"),d::String(u"#202c55"),d::String(u"#2a396d"),d::String(u"#374a88"),d::String(u"#4a60a2"),d::String(u"#6880bc"),d::String(u"#2c2140"),d::String(u"#3f2d58"),d::String(u"#56396b"),d::String(u"#6e4a7a"),d::String(u"#8a5f88"),d::String(u"#5a2e3c"),d::String(u"#7b404c"),d::String(u"#9e5858"),d::String(u"#55300f"),d::String(u"#7d4515"),d::String(u"#a95c1b"),d::String(u"#d27a24"),d::String(u"#ee9631"),d::String(u"#ffb246"),d::String(u"#ffcd6a"),d::String(u"#ffe39c"),d::String(u"#fff2cf"),d::String(u"#ffffff"),d::String(u"#dce6ff"),d::String(u"#a9bde8"),d::String(u"#6a181b"),d::String(u"#b22a28"),d::String(u"#ff4b3e"),d::String(u"#132c38"),d::String(u"#1c3f4f"),d::String(u"#2a5868"),d::String(u"#29283a"),d::String(u"#3c3a4c"),d::String(u"#565266"),d::String(u"#79738a")};return _n_object_20479;})();}();
const double _n_W_20059=[](){return 200.0;}();
const double _n_H_20060=[](){return 100.0;}();
const double _n_HZ_20061=[](){return 40.0;}();
const double _n_TIP_20062=[](){return 176.0;}();
d::Array<double,false> _n_MOON_20063=[](){return d::Array<double,false>{189.0,13.0};}();
const double _n_MOON_R_20064=[](){return 4.5;}();
d::Array<d::Array<double,false>,false> _n_MARIA_20065=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.4)),(-d::number(1.2)),1.6},d::Array<double,false>{1.3,0.8,1.4},d::Array<double,false>{(-d::number(0.6)),2.0,1.1}};}();
const d::String _n_DOTS_20066=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_20067=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_20068=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_20143=_a0;
return ((_n_v_20143/16.0)-0.47);});}();
d::Array<double,false> _n_SODIUM_20069=[](){return d::Array<double,false>{1.0,0.56,0.18};}();
const double _n_SKY_20070=[](){return 0.0;}();
const double _n_WATER_20071=[](){return 1.0;}();
const double _n_FAR_20072=[](){return 2.0;}();
const double _n_TOWER_20073=[](){return 3.0;}();
const double _n_FRONT_20074=[](){return 4.0;}();
const double _n_ROAD_20075=[](){return 5.0;}();
const double _n_WALL_20076=[](){return 6.0;}();
const double _n_POLE_20077=[](){return 7.0;}();
const double _n_SHIP_20078=[](){return 8.0;}();
double _n_hash_20079(double _a0,double _a1){double _n_x_20144=_a0;
double _n_y_20145=_a1;
{
double _n_h_20146=([&](){auto _n_left_20480=d::imul(double(d::i32(_n_x_20144)|d::i32(0.0)),374761393.0);auto _n_right_20481=d::imul(double(d::i32(_n_y_20145)|d::i32(0.0)),668265263.0);return (_n_left_20480+_n_right_20481);})();
(void)((_n_h_20146=d::imul(double(d::i32(_n_h_20146)^d::i32(double(d::u32(_n_h_20146)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_20146)^d::i32(double(d::u32(_n_h_20146)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_20080(double _a0,double _a1,double _a2){double _n_x_20147=_a0;
double _n_y_20148=_a1;
double _n_period_20149=_a2;
{
double _n_xi_20150=std::floor(_n_x_20147);
double _n_yi_20151=std::floor(_n_y_20148);
double _n_fx_20152=(_n_x_20147-_n_xi_20150);
double _n_fy_20153=(_n_y_20148-_n_yi_20151);
double _n_u_20154=((_n_fx_20152*_n_fx_20152)*(3.0-(2.0*_n_fx_20152)));
double _n_v_20155=((_n_fy_20153*_n_fy_20153)*(3.0-(2.0*_n_fy_20153)));
double _n_x0_20156=_n_xi_20150;
double _n_x1_20157=(_n_xi_20150+1.0);
if(d::truth(_n_period_20149)){d::check_cancel();(void)((_n_x0_20156=d::mod((d::mod(_n_xi_20150,_n_period_20149)+_n_period_20149),_n_period_20149)));
(void)((_n_x1_20157=d::mod((_n_x0_20156+1.0),_n_period_20149)));
}
double _n_a_20158=_n_hash_20079(_n_x0_20156,_n_yi_20151);
double _n_b_20159=_n_hash_20079(_n_x1_20157,_n_yi_20151);
double _n_c_20160=_n_hash_20079(_n_x0_20156,(_n_yi_20151+1.0));
double _n_d_20161=_n_hash_20079(_n_x1_20157,(_n_yi_20151+1.0));
return (((_n_a_20158+((_n_b_20159-_n_a_20158)*_n_u_20154))+((_n_c_20160-_n_a_20158)*_n_v_20155))+(((((_n_a_20158-_n_b_20159)-_n_c_20160)+_n_d_20161)*_n_u_20154)*_n_v_20155));

}
}

double _n_fbm_20081(double _a0,double _a1,double _a2,double _a3){double _n_x_20162=_a0;
double _n_y_20163=_a1;
double _n_octaves_20164=_a2;
double _n_period_20165=_a3;
{
double _n_s_20166=0.0;
double _n_n_20167=0.0;
double _n_amp_20168=0.5;
double _n_f_20169=1.0;
{double _n_i_20170=0.0;
for(;d::truth((_n_i_20170<_n_octaves_20164));(void)((_n_i_20170++))){d::check_cancel();(void)((_n_s_20166=(_n_s_20166+(_n_amp_20168*_n_noise_20080((_n_x_20162*_n_f_20169),(_n_y_20163*_n_f_20169),(_n_period_20165*_n_f_20169))))));
(void)((_n_n_20167=(_n_n_20167+_n_amp_20168)));
(void)((_n_amp_20168=(_n_amp_20168*0.5)));
(void)((_n_f_20169=(_n_f_20169*2.0)));
}}
return (_n_s_20166/_n_n_20167);

}
}

double _n_clamp_20082(double _a0){double _n_v_20171=_a0;
return (d::truth((_n_v_20171<0.0))?0.0:(d::truth((_n_v_20171>1.0))?1.0:_n_v_20171));}

double _n_smooth_20083(double _a0,double _a1,double _a2){double _n_a_20172=_a0;
double _n_b_20173=_a1;
double _n_v_20174=_a2;
{
double _n_k_20175=_n_clamp_20082(((_n_v_20174-_n_a_20172)/(_n_b_20173-_n_a_20172)));
return ((_n_k_20175*_n_k_20175)*(3.0-(2.0*_n_k_20175)));

}
}

double _n_mix_20084(double _a0,double _a1,double _a2){double _n_a_20176=_a0;
double _n_b_20177=_a1;
double _n_k_20178=_a2;
return (_n_a_20176+((_n_b_20177-_n_a_20176)*_n_k_20178));}

d::Array<double,false> _n_hex_20085(d::String _a0){d::String _n_s_20179=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_20180=_a0;
return (([&](){auto _n_argument_20482=d::slice(_n_s_20179,_n_i_20180,(_n_i_20180+2.0));auto _n_argument_20483=16.0;return d::parseInt(_n_argument_20482,_n_argument_20483);})()/255.0);});}

double _n_shoreF_20086(double _a0){double _n_x_20181=_a0;
return (50.0+(34.0*([&](){auto _n_argument_20484=d::maximum({0.0,(1.0-(_n_x_20181/_n_TIP_20062))});auto _n_argument_20485=2.2;return std::pow(_n_argument_20484,_n_argument_20485);})()));}

double _n_scF_20087(double _a0){double _n_x_20182=_a0;
return (0.5+(1.9*([&](){auto _n_argument_20486=d::maximum({0.0,(1.0-(_n_x_20182/_n_TIP_20062))});auto _n_argument_20487=1.5;return std::pow(_n_argument_20486,_n_argument_20487);})()));}

double _n_seaTop_20088(double _a0){double _n_x_20183=_a0;
return (d::truth((_n_x_20183<=_n_TIP_20062))?_n_shoreF_20086(_n_x_20183):d::maximum({_n_HZ_20061,(50.0-((_n_x_20183-_n_TIP_20062)*1.6))}));}

double _n_wallTopF_20089(double _a0){double _n_x_20184=_a0;
return ([&](){auto _n_left_20488=_n_shoreF_20086(_n_x_20184);auto _n_right_20489=([&](){auto _n_argument_20490=1.0;auto _n_argument_20491=_n_scF_20087(_n_x_20184);return d::maximum({_n_argument_20490,_n_argument_20491});})();return (_n_left_20488-_n_right_20489);})();}

double _n_roadTopF_20090(double _a0){double _n_x_20185=_a0;
return ([&](){auto _n_left_20492=_n_wallTopF_20089(_n_x_20185);auto _n_right_20493=([&](){auto _n_argument_20494=1.0;auto _n_argument_20495=(1.5*_n_scF_20087(_n_x_20185));return d::maximum({_n_argument_20494,_n_argument_20495});})();return (_n_left_20492-_n_right_20493);})();}

double _n_glowF_20091(double _a0,double _a1){double _n_x_20186=_a0;
double _n_y_20187=_a1;
{
double _n_over_20188=(0.5+(0.5*_n_smooth_20083((_n_TIP_20062+24.0),(_n_TIP_20062-16.0),_n_x_20186)));
double _n_h_20189=d::maximum({0.0,(_n_HZ_20061-_n_y_20187)});
return (_n_over_20188*([&](){auto _n_left_20496=(std::exp(((-d::number(_n_h_20189))/4.0))*0.5);auto _n_right_20497=(std::exp(((-d::number(_n_h_20189))/12.0))*0.12);return (_n_left_20496+_n_right_20497);})());

}
}

struct Native_marine_drive final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_20092{};
double _n_N_20093{};
d::Array<d::String,false> _n_out_20094{};
d::Array<uint8_t,true> _n_lut_20095{};
double _n_STEP_20097{};
double _n_nU_20098{};
d::Array<float,true> _n_Utab_20099{};
double _n_UEND_20102{};
d::Array<d::Array<double,false>,false> _n_lamps_20103{};
double _n_FLICK_20104{};
d::Array<std::shared_ptr<_n_Record_20106>,false> _n_blds_20105{};
d::Array<float,true> _n_colU_20107{};
d::Array<int16_t,true> _n_bldAt_20108{};
d::Array<d::Array<double,false>,false> _n_towers_20109{};
d::Array<uint8_t,true> _n_mat_20110{};
d::Array<float,true> _n_sR_20111{};
d::Array<float,true> _n_sG_20112{};
d::Array<float,true> _n_sB_20113{};
d::Array<float,true> _n_flo_20114{};
d::Array<uint8_t,true> _n_lane_20115{};
d::Array<float,true> _n_skyGlow_20116{};
d::Array<std::array<double,7>,false> _n_flick_20117{};
d::Array<d::Array<double,false>,false> _n_beacons_20118{};
d::Array<std::array<double,5>,false> _n_shipLights_20119{};
d::Array<float,true> _n_lampI_20121{};
d::Array<float,true> _n_lampW_20122{};
d::Array<float,true> _n_flickI_20123{};
d::Array<float,true> _n_flickW_20124{};
d::Array<d::Array<float,true>,false> _n_refl_20125{};
d::Array<float,true> _n_reflFl_20126{};
double _n_CW_20127{};
d::Array<float,true> _n_cover_20128{};
d::Array<float,true> _n_clit_20129{};
d::Array<float,true> _n_clear_20131{};
double _n_BIN_20132{};
double _n_U0_20133{};
double _n_NB_20134{};
d::Array<float,true> _n_laneA_20135{};
d::Array<float,true> _n_laneB_20136{};
d::Array<d::Array<double,false>,false> _n_cars_20137{};
d::Array<int32_t,true> _n_binLo_20138{};
d::Array<int32_t,true> _n_binHi_20139{};
d::Array<float,true> _n_colA_20140{};
d::Array<float,true> _n_colB_20141{};
std::function<d::String(double,std::shared_ptr<_n_Record_20476>)> _render;
double _n_nearest_20096(double _a0,double _a1,double _a2){double _n_r_20190=_a0;
double _n_g_20191=_a1;
double _n_b_20192=_a2;
{
double _n_k_20193=([&](){auto _n_left_20748=([&](){auto _n_left_20750=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_20190*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_20751=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_20191*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_20750)|d::i32(_n_right_20751));})();auto _n_right_20749=d::minimum({31.0,double(d::i32((_n_b_20192*31.99))|d::i32(0.0))});return double(d::i32(_n_left_20748)|d::i32(_n_right_20749));})();
if(d::truth((d::at(this->_n_lut_20095,_n_k_20193)!=255.0))){d::check_cancel();return d::at(this->_n_lut_20095,_n_k_20193);
}
double _n_best_20194=0.0;
double _n_bd_20195=1000000000.0;
{double _n_i_20196=0.0;
for(;d::truth((_n_i_20196<double(this->_n_P_20092.size())));(void)((_n_i_20196++))){d::check_cancel();double _n_dr_20197=(d::at(d::at(this->_n_P_20092,_n_i_20196),0.0)-_n_r_20190);
double _n_dg_20198=(d::at(d::at(this->_n_P_20092,_n_i_20196),1.0)-_n_g_20191);
double _n_db_20199=(d::at(d::at(this->_n_P_20092,_n_i_20196),2.0)-_n_b_20192);
double _n_d_20200=((((0.3*_n_dr_20197)*_n_dr_20197)+((0.5*_n_dg_20198)*_n_dg_20198))+((0.2*_n_db_20199)*_n_db_20199));
if(d::truth((_n_d_20200<_n_bd_20195))){d::check_cancel();(void)(((_n_bd_20195=_n_d_20200),(_n_best_20194=_n_i_20196)));
}
}}
return ([&](){auto&& _n_array_20752=this->_n_lut_20095;auto _n_index_20753=_n_k_20193;auto _n_value_20754=_n_best_20194;d::put(_n_array_20752,_n_index_20753,_n_value_20754);return _n_value_20754;})();

}
}

double _n_Uof_20100(double _a0){double _n_x_20204=_a0;
{
double _n_f_20205=([&](){auto _n_argument_20755=0.0;auto _n_argument_20756=d::minimum({(this->_n_nU_20098-1.001),(_n_x_20204/this->_n_STEP_20097)});return d::maximum({_n_argument_20755,_n_argument_20756});})();
double _n_i_20206=double(d::i32(_n_f_20205)|d::i32(0.0));
return (d::at(this->_n_Utab_20099,_n_i_20206)+((d::at(this->_n_Utab_20099,(_n_i_20206+1.0))-d::at(this->_n_Utab_20099,_n_i_20206))*(_n_f_20205-_n_i_20206)));

}
}

double _n_xOfU_20101(double _a0){double _n_u_20207=_a0;
{
double _n_lo_20208=0.0;
double _n_hi_20209=_n_TIP_20062;
{double _n_i_20210=0.0;
for(;d::truth((_n_i_20210<30.0));(void)((_n_i_20210++))){d::check_cancel();double _n_m_20211=((_n_lo_20208+_n_hi_20209)/2.0);
if(d::truth((this->_n_Uof_20100(_n_m_20211)<_n_u_20207))){d::check_cancel();(void)((_n_lo_20208=_n_m_20211));
}else {d::check_cancel();(void)((_n_hi_20209=_n_m_20211));
}
}}
return ((_n_lo_20208+_n_hi_20209)/2.0);

}
}

bool _n_hull_20120(double _a0,double _a1){double _n_x_20296=_a0;
double _n_r_20297=_a1;
return ([&]()->bool{auto _n_logical_20757=([&]()->bool{auto _n_logical_20760=([&]()->bool{auto _n_logical_20763=([&]()->bool{auto _n_logical_20766=([&]()->bool{auto _n_logical_20770=([&]()->bool{auto _n_logical_20773=([&]()->bool{auto _n_logical_20774=(_n_r_20297>=38.0);return d::truth(_n_logical_20774)?(_n_x_20296>=182.0):_n_logical_20774;})();return d::truth(_n_logical_20773)?(_n_x_20296<=192.0):_n_logical_20773;})();return d::truth(_n_logical_20770)?_n_logical_20770:([&]()->bool{auto _n_logical_20771=([&]()->bool{auto _n_logical_20772=(_n_r_20297==37.0);return d::truth(_n_logical_20772)?(_n_x_20296>=183.0):_n_logical_20772;})();return d::truth(_n_logical_20771)?(_n_x_20296<=192.0):_n_logical_20771;})();})();return d::truth(_n_logical_20766)?_n_logical_20766:([&]()->bool{auto _n_logical_20767=([&]()->bool{auto _n_logical_20768=([&]()->bool{auto _n_logical_20769=(_n_r_20297>=35.0);return d::truth(_n_logical_20769)?(_n_r_20297<=36.0):_n_logical_20769;})();return d::truth(_n_logical_20768)?(_n_x_20296>=189.0):_n_logical_20768;})();return d::truth(_n_logical_20767)?(_n_x_20296<=191.0):_n_logical_20767;})();})();return d::truth(_n_logical_20763)?_n_logical_20763:([&]()->bool{auto _n_logical_20764=([&]()->bool{auto _n_logical_20765=(_n_r_20297>=35.0);return d::truth(_n_logical_20765)?(_n_r_20297<=36.0):_n_logical_20765;})();return d::truth(_n_logical_20764)?(_n_x_20296==184.0):_n_logical_20764;})();})();return d::truth(_n_logical_20760)?_n_logical_20760:([&]()->bool{auto _n_logical_20761=([&]()->bool{auto _n_logical_20762=(_n_r_20297>=38.0);return d::truth(_n_logical_20762)?(_n_x_20296>=195.0):_n_logical_20762;})();return d::truth(_n_logical_20761)?(_n_x_20296<=199.0):_n_logical_20761;})();})();return d::truth(_n_logical_20757)?_n_logical_20757:([&]()->bool{auto _n_logical_20758=([&]()->bool{auto _n_logical_20759=(_n_r_20297==37.0);return d::truth(_n_logical_20759)?(_n_x_20296>=196.0):_n_logical_20759;})();return d::truth(_n_logical_20758)?(_n_x_20296<=197.0):_n_logical_20758;})();})();}

double _n_density_20130(double _a0,double _a1){double _n_x_20358=_a0;
double _n_y_20359=_a1;
{
double _n_q_20360=_n_fbm_20081((_n_x_20358*0.01),(_n_y_20359*0.05),3.0,8.0);
double _n_d_20361=_n_fbm_20081(((_n_x_20358*0.025)+(_n_q_20360*2.6)),((_n_y_20359*0.07)+(_n_q_20360*1.3)),5.0,20.0);
double _n_yb_20362=(_n_y_20359+(14.0*(_n_fbm_20081(((_n_x_20358*0.005)+3.0),7.0,2.0,4.0)-0.5)));
return ([&](){auto _n_left_20775=([&](){auto _n_left_20777=(_n_d_20361+(0.05*_n_smooth_20083(2.0,14.0,_n_yb_20362)));auto _n_right_20778=(0.1*_n_smooth_20083(6.0,0.0,_n_y_20359));return (_n_left_20777-_n_right_20778);})();auto _n_right_20776=(0.1*_n_smooth_20083(22.0,(_n_HZ_20061-4.0),_n_yb_20362));return (_n_left_20775-_n_right_20776);})();

}
}

void _n_paint_20142(double _a0,double _a1,double _a2,double _a3,double _a4,std::optional<d::Array<uint8_t,true>> _a5){double _n_k_20463=_a0;
double _n_cr_20464=_a1;
double _n_cg_20465=_a2;
double _n_cb_20466=_a3;
double _n_floor_20467=_a4;
std::optional<d::Array<uint8_t,true>> _n_color_20468=_a5;
{
(void)((((_n_cr_20464=d::maximum({0.0,_n_cr_20464})),(_n_cg_20465=d::maximum({0.0,_n_cg_20465}))),(_n_cb_20466=d::maximum({0.0,_n_cb_20466}))));
double _n_r_20469=double(d::i32((_n_k_20463/_n_W_20059))|d::i32(0.0));
double _n_x_20470=d::mod(_n_k_20463,_n_W_20059);
double _n_peak_20471=d::maximum({_n_cr_20464,_n_cg_20465,_n_cb_20466,0.0001});
double _n_level_20472=_n_clamp_20082((_n_floor_20467+(((1.0-_n_floor_20467)*std::pow(_n_peak_20471,0.85))*0.95)));
double _n_step_20473=([&](){auto _n_argument_20779=0.0;auto _n_argument_20780=([&](){auto _n_argument_20781=3.0;auto _n_argument_20782=d::round(((_n_level_20472*3.0)+d::at(_n_BAYER_20068,((double(d::i32(_n_r_20469)&d::i32(3.0))*4.0)+double(d::i32(_n_x_20470)&d::i32(3.0))))));return d::minimum({_n_argument_20781,_n_argument_20782});})();return d::maximum({_n_argument_20779,_n_argument_20780});})();
(void)(([&](){auto&& _n_array_20783=this->_n_out_20094;auto _n_index_20784=_n_k_20463;auto _n_value_20785=d::at(_n_DOTS_20066,_n_step_20473);d::put(_n_array_20783,_n_index_20784,_n_value_20785);return _n_value_20785;})());
if(d::truth(_n_color_20468)){d::check_cancel();double _n_want_20474=(d::truth(_n_step_20473)?d::minimum({1.0,((_n_level_20472+0.06)/d::at(_n_COVER_20067,_n_step_20473))}):0.0);
double _n_s_20475=((0.3+(0.7*_n_want_20474))/_n_peak_20471);
(void)(([&](){auto&& _n_array_20786=d::read(_n_color_20468);auto _n_index_20787=_n_k_20463;auto _n_value_20788=([&](){auto _n_argument_20789=_n_clamp_20082((_n_cr_20464*_n_s_20475));auto _n_argument_20790=_n_clamp_20082((_n_cg_20465*_n_s_20475));auto _n_argument_20791=_n_clamp_20082((_n_cb_20466*_n_s_20475));return this->_n_nearest_20096(_n_argument_20789,_n_argument_20790,_n_argument_20791);})();d::put(_n_array_20786,_n_index_20787,_n_value_20788);return _n_value_20788;})());
}

}
}

explicit Native_marine_drive(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_20092=d::map(_n_meta_20057->_p_palette,_n_hex_20085);
this->_n_N_20093=(_n_W_20059*_n_H_20060);
this->_n_out_20094=d::Array<d::String,false>(size_t(this->_n_N_20093));
this->_n_lut_20095=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_STEP_20097=0.25;
this->_n_nU_20098=(std::ceil(((_n_TIP_20062+4.0)/this->_n_STEP_20097))+2.0);
this->_n_Utab_20099=d::Array<float,true>(size_t(this->_n_nU_20098));
{double _n_i_20201=1.0;
for(;d::truth((_n_i_20201<this->_n_nU_20098));(void)((_n_i_20201++))){d::check_cancel();double _n_x_20202=((_n_i_20201-0.5)*this->_n_STEP_20097);
double _n_sl_20203=(([&](){auto _n_left_20498=_n_shoreF_20086((_n_x_20202+0.05));auto _n_right_20499=_n_shoreF_20086((_n_x_20202-0.05));return (_n_left_20498-_n_right_20499);})()/0.1);
(void)(([&](){auto&& _n_array_20500=this->_n_Utab_20099;auto _n_index_20501=_n_i_20201;auto _n_value_20502=(d::at(this->_n_Utab_20099,(_n_i_20201-1.0))+([&](){auto _n_left_20503=(std::sqrt((1.0+(_n_sl_20203*_n_sl_20203)))*this->_n_STEP_20097);auto _n_right_20504=_n_scF_20087(_n_x_20202);return (_n_left_20503/_n_right_20504);})());d::put(_n_array_20500,_n_index_20501,_n_value_20502);return _n_value_20502;})());
}}
this->_n_UEND_20102=this->_n_Uof_20100(_n_TIP_20062);
this->_n_lamps_20103=d::Array<d::Array<double,false>,false>{};
{double _n_u_20212=0.6;
for(;d::truth((_n_u_20212<(this->_n_UEND_20102-0.4)));(void)((_n_u_20212=(_n_u_20212+3.75)))){d::check_cancel();double _n_lx_20213=this->_n_xOfU_20101(_n_u_20212);
double _n_s_20214=_n_scF_20087(_n_lx_20213);
(void)(this->_n_lamps_20103.push(d::Array<double,false>{_n_lx_20213,(_n_wallTopF_20089(_n_lx_20213)-(2.4*_n_s_20214)),_n_s_20214}));
}}
this->_n_FLICK_20104=6.0;
this->_n_blds_20105=d::Array<std::shared_ptr<_n_Record_20106>,false>{};
{double _n_u_20215=(-d::number(4.0));
for(;d::truth((_n_u_20215<this->_n_UEND_20102));){d::check_cancel();double _n_i_20216=double(this->_n_blds_20105.size());
double _n_w_20217=(7.0+(7.0*_n_hash_20079(_n_i_20216,21.0)));
double _n_tall_20218=d::round(([&](){auto _n_left_20505=(7.0*_n_smooth_20083(26.0,2.0,_n_u_20215));auto _n_right_20506=(0.6+(0.4*_n_hash_20079(_n_i_20216,26.0)));return (_n_left_20505*_n_right_20506);})());
(void)(this->_n_blds_20105.push(([&](){auto _n_object_20508=std::make_shared<_n_Record_20106>();_n_object_20508->_p_u0=_n_u_20215;_n_object_20508->_p_u1=(_n_u_20215+_n_w_20217);_n_object_20508->_p_floors=((5.0+std::floor((_n_hash_20079(_n_i_20216,22.0)*4.0)))+_n_tall_20218);_n_object_20508->_p_tone=(0.75+(0.5*_n_hash_20079(_n_i_20216,23.0)));_n_object_20508->_p_crown=(_n_hash_20079(_n_i_20216,24.0)>0.45);return _n_object_20508;})()));
(void)((_n_u_20215=(_n_u_20215+((_n_w_20217+0.4)+(1.8*_n_hash_20079(_n_i_20216,25.0))))));
}}
this->_n_colU_20107=d::Array<float,true>(size_t(_n_W_20059));
this->_n_bldAt_20108=d::Array<int16_t,true>(size_t(_n_W_20059)).fill((-d::number(1.0)));
{double _n_x_20219=0.0;
for(;d::truth((_n_x_20219<_n_W_20059));(void)((_n_x_20219++))){d::check_cancel();(void)(([&](){auto&& _n_array_20509=this->_n_colU_20107;auto _n_index_20510=_n_x_20219;auto _n_value_20511=this->_n_Uof_20100((_n_x_20219+0.5));d::put(_n_array_20509,_n_index_20510,_n_value_20511);return _n_value_20511;})());
if(d::truth(((_n_x_20219+0.5)>_n_TIP_20062))){d::check_cancel();continue;
}
{double _n_i_20220=0.0;
for(;d::truth((_n_i_20220<double(this->_n_blds_20105.size())));(void)((_n_i_20220++))){d::check_cancel();if((d::truth((d::at(this->_n_colU_20107,_n_x_20219)>=d::at(this->_n_blds_20105,_n_i_20220)->_p_u0))&&d::truth((d::at(this->_n_colU_20107,_n_x_20219)<d::at(this->_n_blds_20105,_n_i_20220)->_p_u1)))){d::check_cancel();(void)(([&](){auto&& _n_array_20512=this->_n_bldAt_20108;auto _n_index_20513=_n_x_20219;auto _n_value_20514=_n_i_20220;d::put(_n_array_20512,_n_index_20513,_n_value_20514);return _n_value_20514;})());
}
}}
}}
this->_n_towers_20109=d::Array<d::Array<double,false>,false>{d::Array<double,false>{24.0,4.5,21.0,0.0},d::Array<double,false>{97.0,2.5,27.0,1.0},d::Array<double,false>{107.0,2.0,22.0,0.0},d::Array<double,false>{118.0,3.0,30.0,0.0},d::Array<double,false>{126.0,2.0,25.0,1.0},d::Array<double,false>{136.0,3.0,23.0,0.0},d::Array<double,false>{142.5,2.0,15.0,1.0},d::Array<double,false>{149.0,3.5,27.0,0.0},d::Array<double,false>{156.0,2.5,19.0,0.0},d::Array<double,false>{162.0,3.0,12.0,1.0},d::Array<double,false>{168.5,2.5,21.0,0.0},d::Array<double,false>{173.0,2.0,28.0,1.0}};
this->_n_mat_20110=d::Array<uint8_t,true>(size_t(this->_n_N_20093));
this->_n_sR_20111=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_sG_20112=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_sB_20113=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_flo_20114=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_lane_20115=d::Array<uint8_t,true>(size_t(this->_n_N_20093));
this->_n_skyGlow_20116=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_flick_20117=d::Array<std::array<double,7>,false>{};
this->_n_beacons_20118=d::Array<d::Array<double,false>,false>{};
{double _n_r_20221=0.0;
for(;d::truth((_n_r_20221<_n_H_20060));(void)((_n_r_20221++))){d::check_cancel();{double _n_x_20222=0.0;
for(;d::truth((_n_x_20222<_n_W_20059));(void)((_n_x_20222++))){d::check_cancel();double _n_k_20223=((_n_r_20221*_n_W_20059)+_n_x_20222);
double _n_xc_20224=(_n_x_20222+0.5);
double _n_y_20225=(_n_r_20221+0.5);
if(d::truth((_n_y_20225>=_n_seaTop_20088(_n_xc_20224)))){d::check_cancel();(void)(([&](){auto&& _n_array_20515=this->_n_mat_20110;auto _n_index_20516=_n_k_20223;auto _n_value_20517=_n_WATER_20071;d::put(_n_array_20515,_n_index_20516,_n_value_20517);return _n_value_20517;})());
continue;
}
double _n_m_20226=_n_SKY_20070;
double _n_cr_20227=0.0;
double _n_cg_20228=0.0;
double _n_cb_20229=0.0;
double _n_fl_20230=0.15;
double _n_blk_20231=std::floor(((_n_x_20222+(40.0*_n_fbm_20081((_n_x_20222*0.02),5.0,2.0,0.0)))/3.0));
double _n_farTop_20232=((_n_HZ_20061-0.4)-([&](){auto _n_left_20518=(0.4+(5.0*std::pow(_n_hash_20079(_n_blk_20231,7.0),3.0)));auto _n_right_20519=(0.5+(0.5*_n_fbm_20081((_n_x_20222*0.05),2.0,2.0,0.0)));return (_n_left_20518*_n_right_20519);})());
if((d::truth((_n_xc_20224<(_n_TIP_20062+7.0)))&&d::truth((_n_y_20225>=_n_farTop_20232)))){d::check_cancel();(void)((_n_m_20226=_n_FAR_20072));
double _n_g_20233=_n_glowF_20091(_n_xc_20224,(_n_HZ_20061-2.0));
(void)((((_n_cr_20227=(0.03+(0.05*_n_g_20233))),(_n_cg_20228=(0.04+(0.03*_n_g_20233)))),(_n_cb_20229=(0.08+(0.02*_n_g_20233)))));
double _n_hl_20234=_n_hash_20079(((_n_x_20222*3.0)+1.0),((_n_r_20221*7.0)+2.0));
if(d::truth((_n_hl_20234<0.035))){d::check_cancel();double _n_v_20235=(0.25+(0.45*_n_hash_20079(_n_x_20222,((_n_r_20221*5.0)+9.0))));
bool _n_cool_20236=(_n_hash_20079((_n_x_20222*5.0),_n_r_20221)<0.3);
(void)((((_n_cr_20227=(_n_cr_20227+(_n_v_20235*(d::truth(_n_cool_20236)?0.8:1.0)))),(_n_cg_20228=(_n_cg_20228+(_n_v_20235*(d::truth(_n_cool_20236)?0.85:0.7))))),(_n_cb_20229=(_n_cb_20229+(_n_v_20235*(d::truth(_n_cool_20236)?1.0:0.4))))));
}
(void)((_n_fl_20230=0.08));
}
{double _n_ti_20237=0.0;
for(;d::truth((_n_ti_20237<double(this->_n_towers_20109.size())));(void)((_n_ti_20237++))){d::check_cancel();auto _n_binding_20520=d::at(this->_n_towers_20109,_n_ti_20237);
double _n_tx_20238=d::at(_n_binding_20520,0.0);
double _n_hw_20239=d::at(_n_binding_20520,1.0);
double _n_top_20240=d::at(_n_binding_20520,2.0);
double _n_warm_20241=d::at(_n_binding_20520,3.0);
double _n_dx_20242=(_n_xc_20224-_n_tx_20238);
if((d::truth((std::fabs(_n_dx_20242)>_n_hw_20239))||d::truth((_n_y_20225<_n_top_20240)))){d::check_cancel();continue;
}
(void)((_n_m_20226=_n_TOWER_20073));
(void)((((_n_cr_20227=0.015),(_n_cg_20228=0.018)),(_n_cb_20229=0.035)));
if(d::truth((_n_dx_20242>(_n_hw_20239-1.0)))){d::check_cancel();(void)((((_n_cr_20227=(_n_cr_20227+0.04)),(_n_cg_20228=(_n_cg_20228+0.055))),(_n_cb_20229=(_n_cb_20229+0.1))));
}
double _n_g_20243=(_n_glowF_20091(_n_xc_20224,_n_y_20225)*0.2);
(void)((((_n_cr_20227=(_n_cr_20227+(_n_g_20243*0.42))),(_n_cg_20228=(_n_cg_20228+(_n_g_20243*0.21)))),(_n_cb_20229=(_n_cb_20229+(_n_g_20243*0.1)))));
double _n_fr_20244=(_n_r_20221-_n_top_20240);
if(d::truth((_n_fr_20244==0.0))){d::check_cancel();(void)((((_n_cr_20227=(_n_cr_20227+0.08)),(_n_cg_20228=(_n_cg_20228+0.1))),(_n_cb_20229=(_n_cb_20229+0.16))));
}else {d::check_cancel();if(((d::truth((_n_fr_20244>0.0))&&d::truth((d::mod(_n_fr_20244,2.0)==1.0)))&&d::truth((std::fabs(_n_dx_20242)<(_n_hw_20239-0.5))))){d::check_cancel();double _n_seg_20245=std::floor((((_n_xc_20224-_n_tx_20238)+_n_hw_20239)/3.0));
double _n_h_20246=_n_hash_20079(((_n_ti_20237*17.0)+_n_seg_20245),((_n_r_20221*13.0)+3.0));
if(d::truth((_n_h_20246<0.5))){d::check_cancel();double _n_v_20247=(0.4+(0.3*_n_hash_20079(((_n_ti_20237*7.0)+_n_seg_20245),_n_r_20221)));
bool _n_cool_20248=(d::truth(_n_warm_20241)?(_n_h_20246<0.1):(_n_h_20246>0.1));
(void)((((_n_cr_20227=(_n_cr_20227+(_n_v_20247*(d::truth(_n_cool_20248)?0.72:1.0)))),(_n_cg_20228=(_n_cg_20228+(_n_v_20247*(d::truth(_n_cool_20248)?0.84:0.72))))),(_n_cb_20229=(_n_cb_20229+(_n_v_20247*(d::truth(_n_cool_20248)?1.0:0.42))))));
}
}
}
if(((d::truth((_n_fr_20244==0.0))&&d::truth((std::fabs(_n_dx_20242)<0.6)))&&d::truth((_n_top_20240<20.0)))){d::check_cancel();(void)(this->_n_beacons_20118.push(d::Array<double,false>{(_n_k_20223-_n_W_20059),(_n_ti_20237*1.7)}));
}
(void)((_n_fl_20230=0.03));
}}
if(d::truth((_n_xc_20224<=_n_TIP_20062))){d::check_cancel();double _n_s_20249=_n_scF_20087(_n_xc_20224);
double _n_wt_20250=_n_wallTopF_20089(_n_xc_20224);
double _n_rt_20251=_n_roadTopF_20090(_n_xc_20224);
double _n_bi_20252=d::at(this->_n_bldAt_20108,_n_x_20222);
if((d::truth((_n_bi_20252>=0.0))&&d::truth((_n_y_20225<_n_rt_20251)))){d::check_cancel();std::shared_ptr<_n_Record_20106> _n_b_20253=d::at(this->_n_blds_20105,_n_bi_20252);
double _n_uu_20254=(d::at(this->_n_colU_20107,_n_x_20222)-_n_b_20253->_p_u0);
double _n_bw_20255=(_n_b_20253->_p_u1-_n_b_20253->_p_u0);
double _n_f_20256=((_n_rt_20251-_n_y_20225)/_n_s_20249);
double _n_hgt_20257=((_n_b_20253->_p_floors*1.7)+1.1);
if(((d::truth(_n_b_20253->_p_crown)&&d::truth((_n_uu_20254>(_n_bw_20255*0.32))))&&d::truth((_n_uu_20254<(_n_bw_20255*0.68))))){d::check_cancel();(void)((_n_hgt_20257=(_n_hgt_20257+1.6)));
}
if(d::truth((_n_f_20256<_n_hgt_20257))){d::check_cancel();(void)((_n_m_20226=_n_FRONT_20074));
bool _n_edge_20258=([&]()->bool{auto _n_logical_20521=(_n_uu_20254<0.5);return d::truth(_n_logical_20521)?_n_logical_20521:(_n_uu_20254>(_n_bw_20255-0.5));})();
double _n_t0_20259=(_n_b_20253->_p_tone*(d::truth(_n_edge_20258)?1.35:1.0));
(void)((((_n_cr_20227=(0.03*_n_t0_20259)),(_n_cg_20228=(0.035*_n_t0_20259))),(_n_cb_20229=(0.06*_n_t0_20259))));
double _n_up_20260=(std::exp(((-d::number(_n_f_20256))/2.0))*0.16);
(void)((((_n_cr_20227=(_n_cr_20227+(_n_up_20260*d::at(_n_SODIUM_20069,0.0)))),(_n_cg_20228=(_n_cg_20228+(_n_up_20260*d::at(_n_SODIUM_20069,1.0))))),(_n_cb_20229=(_n_cb_20229+(_n_up_20260*d::at(_n_SODIUM_20069,2.0))))));
if((d::truth((_n_f_20256>(_n_hgt_20257-(0.6/_n_s_20249))))||d::truth(([&]()->bool{auto _n_logical_20522=(_n_f_20256>((_n_b_20253->_p_floors*1.7)+0.6));return d::truth(_n_logical_20522)?(_n_f_20256<(((_n_b_20253->_p_floors*1.7)+0.6)+(0.5/_n_s_20249))):_n_logical_20522;})()))){d::check_cancel();(void)((((_n_cr_20227=(_n_cr_20227+0.1)),(_n_cg_20228=(_n_cg_20228+0.13))),(_n_cb_20229=(_n_cb_20229+0.22))));
}
if(d::truth((_n_uu_20254>((_n_bw_20255-(0.7/_n_s_20249))-0.2)))){d::check_cancel();(void)((((_n_cr_20227=(_n_cr_20227+0.04)),(_n_cg_20228=(_n_cg_20228+0.06))),(_n_cb_20229=(_n_cb_20229+0.12))));
}
double _n_fi_20261=std::floor(((_n_f_20256-0.9)/1.7));
double _n_ff_20262=((_n_f_20256-0.9)-(_n_fi_20261*1.7));
double _n_col_20263=std::floor(((_n_uu_20254-0.3)/1.5));
double _n_cu_20264=((_n_uu_20254-0.3)-(_n_col_20263*1.5));
bool _n_fine_20265=((_n_s_20249*1.7)>=2.6);
bool _n_inWin_20266=([&]()->bool{auto _n_logical_20523=([&]()->bool{auto _n_logical_20527=([&]()->bool{auto _n_logical_20528=([&]()->bool{auto _n_logical_20529=(_n_fi_20261>=0.0);return d::truth(_n_logical_20529)?(_n_fi_20261<_n_b_20253->_p_floors):_n_logical_20529;})();return d::truth(_n_logical_20528)?(_n_uu_20254>0.7):_n_logical_20528;})();return d::truth(_n_logical_20527)?(_n_uu_20254<(_n_bw_20255-0.7)):_n_logical_20527;})();return d::truth(_n_logical_20523)?(d::truth(_n_fine_20265)?([&]()->bool{auto _n_logical_20524=([&]()->bool{auto _n_logical_20525=([&]()->bool{auto _n_logical_20526=(_n_ff_20262>0.45);return d::truth(_n_logical_20526)?(_n_ff_20262<1.35):_n_logical_20526;})();return d::truth(_n_logical_20525)?(_n_cu_20264>0.35):_n_logical_20525;})();return d::truth(_n_logical_20524)?(_n_cu_20264<1.15):_n_logical_20524;})():true):_n_logical_20523;})();
if((d::truth(_n_inWin_20266)&&d::truth((!d::truth(_n_fine_20265))))){d::check_cancel();double _n_v_20267=(0.04+(0.26*std::pow(([&](){auto _n_argument_20530=((_n_bi_20252*13.0)+std::floor((_n_uu_20254/3.2)));auto _n_argument_20531=((_n_fi_20261*7.0)+1.0);return _n_hash_20079(_n_argument_20530,_n_argument_20531);})(),2.0)));
(void)((((_n_cr_20227=(_n_cr_20227+_n_v_20267)),(_n_cg_20228=(_n_cg_20228+(_n_v_20267*0.8)))),(_n_cb_20229=(_n_cb_20229+(_n_v_20267*0.55)))));
if(d::truth((_n_hash_20079(((_n_x_20222*7.0)+3.0),(_n_r_20221*11.0))<0.035))){d::check_cancel();(void)((((_n_cr_20227=(_n_cr_20227+0.4)),(_n_cg_20228=(_n_cg_20228+0.36))),(_n_cb_20229=(_n_cb_20229+0.28))));
}
}else {d::check_cancel();if(d::truth(_n_inWin_20266)){d::check_cancel();double _n_h_20268=_n_hash_20079(((_n_bi_20252*97.0)+_n_col_20263),((_n_fi_20261*31.0)+5.0));
bool _n_lit_20269=(_n_h_20268<(d::truth(_n_fine_20265)?0.3:0.2));
if(d::truth(_n_lit_20269)){d::check_cancel();double _n_v_20270=((0.35+(0.3*_n_hash_20079(((_n_bi_20252*13.0)+_n_col_20263),_n_fi_20261)))*(d::truth(_n_fine_20265)?1.0:0.7));
double _n_kind_20271=_n_hash_20079(((_n_bi_20252*7.0)+_n_col_20263),((_n_fi_20261*3.0)+1.0));
double _n_wr_20272=1.0;
double _n_wg_20273=0.84;
double _n_wb_20274=0.58;
if(d::truth((_n_kind_20271<0.25))){d::check_cancel();(void)((((_n_wr_20272=0.82),(_n_wg_20273=0.9)),(_n_wb_20274=1.0)));
}
(void)((((_n_cr_20227=(_n_cr_20227+(_n_v_20270*_n_wr_20272))),(_n_cg_20228=(_n_cg_20228+(_n_v_20270*_n_wg_20273)))),(_n_cb_20229=(_n_cb_20229+(_n_v_20270*_n_wb_20274)))));
double _n_fk_20275=_n_hash_20079(((_n_bi_20252*5.0)+_n_col_20263),((_n_fi_20261*11.0)+7.0));
if(d::truth((_n_fk_20275<0.07))){d::check_cancel();(void)(this->_n_flick_20117.push(std::array<double,7>{_n_k_20223,(_n_v_20270*_n_wr_20272),(_n_v_20270*_n_wg_20273),(_n_v_20270*_n_wb_20274),(d::truth((_n_fk_20275<0.025))?1.0:0.0),(0.3+(_n_fk_20275*9.0)),(_n_fk_20275*400.0)}));
}
}else {d::check_cancel();if(d::truth(_n_fine_20265)){d::check_cancel();(void)((((_n_cr_20227=(_n_cr_20227*0.7)),(_n_cg_20228=(_n_cg_20228*0.7))),(_n_cb_20229=(_n_cb_20229*0.8))));
}
}
}
}
(void)((_n_fl_20230=0.03));
}
}
if((d::truth((_n_y_20225>=_n_rt_20251))&&d::truth((_n_y_20225<_n_wt_20250)))){d::check_cancel();(void)((_n_m_20226=_n_ROAD_20075));
(void)((((_n_cr_20227=0.07),(_n_cg_20228=0.05)),(_n_cb_20229=0.05)));
(void)((_n_fl_20230=0.1));
double _n_lf_20276=((_n_y_20225-_n_rt_20251)/(_n_wt_20250-_n_rt_20251));
(void)(([&](){auto&& _n_array_20532=this->_n_lane_20115;auto _n_index_20533=_n_k_20223;auto _n_value_20534=(d::truth(((_n_wt_20250-_n_rt_20251)<1.8))?3.0:(d::truth((_n_lf_20276<0.5))?1.0:2.0));d::put(_n_array_20532,_n_index_20533,_n_value_20534);return _n_value_20534;})());
}else {d::check_cancel();if(d::truth((_n_y_20225>=_n_wt_20250))){d::check_cancel();(void)((_n_m_20226=_n_WALL_20076));
(void)((((_n_cr_20227=0.1),(_n_cg_20228=0.09)),(_n_cb_20229=0.1)));
(void)((_n_fl_20230=0.1));
}
}
for(auto &&_n_item_20535:this->_n_lamps_20103){d::check_cancel();auto _n_binding_20536=_n_item_20535;
double _n_lx_20277=d::at(_n_binding_20536,0.0);
double _n_ly_20278=d::at(_n_binding_20536,1.0);
double _n_ls_20279=d::at(_n_binding_20536,2.0);
{
if((((d::truth((_n_ls_20279>1.15))&&d::truth((std::fabs((_n_xc_20224-_n_lx_20277))<0.5)))&&d::truth((_n_y_20225>_n_ly_20278)))&&d::truth((_n_y_20225<_n_wt_20250)))){d::check_cancel();(void)((((((_n_m_20226=_n_POLE_20077),(_n_cr_20227=0.09)),(_n_cg_20228=0.08)),(_n_cb_20229=0.09)),(_n_fl_20230=0.1)));
}

}
}
}
if(d::truth((_n_m_20226==_n_SKY_20070))){d::check_cancel();double _n_v_20280=(_n_y_20225/_n_HZ_20061);
double _n_g_20281=([&](){auto _n_left_20537=([&](){auto _n_left_20539=_n_glowF_20091(_n_xc_20224,_n_y_20225);auto _n_right_20540=(1.0+([&](){auto _n_left_20541=(0.6*_n_smooth_20083(84.0,98.0,_n_xc_20224));auto _n_right_20542=_n_smooth_20083(186.0,174.0,_n_xc_20224);return (_n_left_20541*_n_right_20542);})());return (_n_left_20539*_n_right_20540);})();auto _n_right_20538=([&](){auto _n_left_20543=([&](){auto _n_left_20545=(0.2*std::exp(((-d::number(d::maximum({0.0,(_n_HZ_20061-_n_y_20225)})))/14.0)));auto _n_right_20546=_n_smooth_20083(84.0,104.0,_n_xc_20224);return (_n_left_20545*_n_right_20546);})();auto _n_right_20544=_n_smooth_20083(188.0,172.0,_n_xc_20224);return (_n_left_20543*_n_right_20544);})();return (_n_left_20537+_n_right_20538);})();
double _n_veil_20282=(0.88+(0.24*_n_fbm_20081((_n_x_20222*0.05),(_n_r_20221*0.08),3.0,0.0)));
double _n_vv_20283=std::pow(_n_v_20280,1.4);
(void)((_n_cr_20227=(((0.03+(0.07*_n_vv_20283))*_n_veil_20282)+(_n_g_20281*0.42))));
(void)((_n_cg_20228=(((0.05+(0.12*_n_vv_20283))*_n_veil_20282)+(_n_g_20281*0.22))));
(void)((_n_cb_20229=(((0.15+(0.24*_n_vv_20283))*_n_veil_20282)+(_n_g_20281*0.1))));
double _n_hzn_20284=(([&](){auto _n_left_20547=std::exp(((-d::number(d::maximum({0.0,(_n_HZ_20061-_n_y_20225)})))/3.5));auto _n_right_20548=_n_smooth_20083(172.0,186.0,_n_xc_20224);return (_n_left_20547*_n_right_20548);})()*0.16);
(void)((((_n_cr_20227=(_n_cr_20227+(_n_hzn_20284*0.6))),(_n_cg_20228=(_n_cg_20228+(_n_hzn_20284*0.7)))),(_n_cb_20229=(_n_cb_20229+(_n_hzn_20284*0.95)))));
double _n_dmx_20285=(_n_xc_20224-d::at(_n_MOON_20063,0.0));
double _n_dmy_20286=(_n_y_20225-d::at(_n_MOON_20063,1.0));
double _n_dm_20287=std::sqrt(((_n_dmx_20285*_n_dmx_20285)+(_n_dmy_20286*_n_dmy_20286)));
double _n_halo_20288=([&](){auto _n_left_20549=(std::exp(((-d::number(_n_dm_20287))/22.0))*0.13);auto _n_right_20550=(std::exp(((-d::number(_n_dm_20287))/6.0))*0.26);return (_n_left_20549+_n_right_20550);})();
(void)((((_n_cr_20227=(_n_cr_20227+(_n_halo_20288*0.9))),(_n_cg_20228=(_n_cg_20228+(_n_halo_20288*0.86)))),(_n_cb_20229=(_n_cb_20229+(_n_halo_20288*0.8)))));
double _n_ring_20289=([&](){auto _n_left_20551=(0.03*_n_smooth_20083(4.6,5.6,_n_dm_20287));auto _n_right_20552=_n_smooth_20083(8.5,6.5,_n_dm_20287);return (_n_left_20551*_n_right_20552);})();
(void)((((_n_cr_20227=(_n_cr_20227-_n_ring_20289)),(_n_cg_20228=(_n_cg_20228-_n_ring_20289))),(_n_cb_20229=(_n_cb_20229-(_n_ring_20289*0.8)))));
if(d::truth((_n_dm_20287<_n_MOON_R_20064))){d::check_cancel();double _n_face_20290=(0.9+(0.1*_n_fbm_20081((_n_x_20222*0.6),(_n_r_20221*0.6),2.0,0.0)));
for(auto &&_n_item_20553:_n_MARIA_20065){d::check_cancel();auto _n_binding_20554=_n_item_20553;
double _n_mx_20291=d::at(_n_binding_20554,0.0);
double _n_my_20292=d::at(_n_binding_20554,1.0);
double _n_mr_20293=d::at(_n_binding_20554,2.0);
{
double _n_d2_20294=((std::pow((_n_dmx_20285-_n_mx_20291),2.0)+std::pow((_n_dmy_20286-_n_my_20292),2.0))/(_n_mr_20293*_n_mr_20293));
if(d::truth((_n_d2_20294<1.0))){d::check_cancel();(void)((_n_face_20290=(_n_face_20290-(0.14*(1.0-_n_d2_20294)))));
}

}
}
double _n_a_20295=_n_smooth_20083(_n_MOON_R_20064,(_n_MOON_R_20064-0.8),_n_dm_20287);
(void)((((_n_cr_20227=_n_mix_20084(_n_cr_20227,_n_face_20290,_n_a_20295)),(_n_cg_20228=_n_mix_20084(_n_cg_20228,(_n_face_20290*0.95),_n_a_20295))),(_n_cb_20229=_n_mix_20084(_n_cb_20229,(_n_face_20290*0.86),_n_a_20295))));
}
(void)(([&](){auto&& _n_array_20555=this->_n_skyGlow_20116;auto _n_index_20556=_n_k_20223;auto _n_value_20557=_n_g_20281;d::put(_n_array_20555,_n_index_20556,_n_value_20557);return _n_value_20557;})());
}
(void)(([&](){auto&& _n_array_20558=this->_n_mat_20110;auto _n_index_20559=_n_k_20223;auto _n_value_20560=_n_m_20226;d::put(_n_array_20558,_n_index_20559,_n_value_20560);return _n_value_20560;})());
(void)((((([&](){auto&& _n_array_20561=this->_n_sR_20111;auto _n_index_20562=_n_k_20223;auto _n_value_20563=_n_cr_20227;d::put(_n_array_20561,_n_index_20562,_n_value_20563);return _n_value_20563;})(),([&](){auto&& _n_array_20564=this->_n_sG_20112;auto _n_index_20565=_n_k_20223;auto _n_value_20566=_n_cg_20228;d::put(_n_array_20564,_n_index_20565,_n_value_20566);return _n_value_20566;})()),([&](){auto&& _n_array_20567=this->_n_sB_20113;auto _n_index_20568=_n_k_20223;auto _n_value_20569=_n_cb_20229;d::put(_n_array_20567,_n_index_20568,_n_value_20569);return _n_value_20569;})()),([&](){auto&& _n_array_20570=this->_n_flo_20114;auto _n_index_20571=_n_k_20223;auto _n_value_20572=_n_fl_20230;d::put(_n_array_20570,_n_index_20571,_n_value_20572);return _n_value_20572;})()));
}}
}}
this->_n_shipLights_20119=d::Array<std::array<double,5>,false>{std::array<double,5>{184.0,35.0,1.0,1.0,1.0},std::array<double,5>{190.0,34.0,1.0,1.0,1.0},std::array<double,5>{185.0,37.0,1.0,0.78,0.45},std::array<double,5>{187.0,37.0,1.0,0.8,0.5},std::array<double,5>{189.0,36.0,1.0,0.82,0.5},std::array<double,5>{191.0,36.0,1.0,0.8,0.5},std::array<double,5>{197.0,36.0,1.0,1.0,1.0},std::array<double,5>{196.0,38.0,1.0,0.78,0.45},std::array<double,5>{199.0,38.0,0.95,0.22,0.18}};
{double _n_r_20298=34.0;
for(;d::truth((_n_r_20298<40.0));(void)((_n_r_20298++))){d::check_cancel();{double _n_x_20299=180.0;
for(;d::truth((_n_x_20299<_n_W_20059));(void)((_n_x_20299++))){d::check_cancel();if(d::truth((!d::truth(this->_n_hull_20120(_n_x_20299,_n_r_20298))))){d::check_cancel();continue;
}
double _n_k_20300=((_n_r_20298*_n_W_20059)+_n_x_20299);
(void)(((((([&](){auto&& _n_array_20573=this->_n_mat_20110;auto _n_index_20574=_n_k_20300;auto _n_value_20575=_n_SHIP_20078;d::put(_n_array_20573,_n_index_20574,_n_value_20575);return _n_value_20575;})(),([&](){auto&& _n_array_20576=this->_n_sR_20111;auto _n_index_20577=_n_k_20300;auto _n_value_20578=0.002;d::put(_n_array_20576,_n_index_20577,_n_value_20578);return _n_value_20578;})()),([&](){auto&& _n_array_20579=this->_n_sG_20112;auto _n_index_20580=_n_k_20300;auto _n_value_20581=0.002;d::put(_n_array_20579,_n_index_20580,_n_value_20581);return _n_value_20581;})()),([&](){auto&& _n_array_20582=this->_n_sB_20113;auto _n_index_20583=_n_k_20300;auto _n_value_20584=0.004;d::put(_n_array_20582,_n_index_20583,_n_value_20584);return _n_value_20584;})()),([&](){auto&& _n_array_20585=this->_n_flo_20114;auto _n_index_20586=_n_k_20300;auto _n_value_20587=0.0;d::put(_n_array_20585,_n_index_20586,_n_value_20587);return _n_value_20587;})()));
}}
}}
for(auto &&_n_item_20588:this->_n_shipLights_20119){d::check_cancel();auto _n_binding_20589=_n_item_20588;
double _n_x_20301=d::at(_n_binding_20589,0.0);
double _n_r_20302=d::at(_n_binding_20589,1.0);
double _n_cr_20303=d::at(_n_binding_20589,2.0);
double _n_cg_20304=d::at(_n_binding_20589,3.0);
double _n_cb_20305=d::at(_n_binding_20589,4.0);
{
double _n_k_20306=((_n_r_20302*_n_W_20059)+_n_x_20301);
(void)(((((([&](){auto&& _n_array_20590=this->_n_mat_20110;auto _n_index_20591=_n_k_20306;auto _n_value_20592=_n_SHIP_20078;d::put(_n_array_20590,_n_index_20591,_n_value_20592);return _n_value_20592;})(),([&](){auto&& _n_array_20593=this->_n_sR_20111;auto _n_index_20594=_n_k_20306;auto _n_value_20595=_n_cr_20303;d::put(_n_array_20593,_n_index_20594,_n_value_20595);return _n_value_20595;})()),([&](){auto&& _n_array_20596=this->_n_sG_20112;auto _n_index_20597=_n_k_20306;auto _n_value_20598=_n_cg_20304;d::put(_n_array_20596,_n_index_20597,_n_value_20598);return _n_value_20598;})()),([&](){auto&& _n_array_20599=this->_n_sB_20113;auto _n_index_20600=_n_k_20306;auto _n_value_20601=_n_cb_20305;d::put(_n_array_20599,_n_index_20600,_n_value_20601);return _n_value_20601;})()),([&](){auto&& _n_array_20602=this->_n_flo_20114;auto _n_index_20603=_n_k_20306;auto _n_value_20604=0.1;d::put(_n_array_20602,_n_index_20603,_n_value_20604);return _n_value_20604;})()));

}
}
this->_n_lampI_20121=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_lampW_20122=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_flickI_20123=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_flickW_20124=d::Array<float,true>(size_t(this->_n_N_20093));
this->_n_refl_20125=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_20093)),d::Array<float,true>(size_t(this->_n_N_20093)),d::Array<float,true>(size_t(this->_n_N_20093))};
this->_n_reflFl_20126=d::Array<float,true>(size_t(this->_n_N_20093));
(void)(d::forEach(this->_n_lamps_20103,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_20605=_a0;
double _n_lx_20307=d::at(_n_binding_20605,0.0);
double _n_ly_20308=d::at(_n_binding_20605,1.0);
double _n_s_20309=d::at(_n_binding_20605,2.0);
double _n_j_20310=_a1;
{
double _n_core_20311=(0.34+(0.3*_n_s_20309));
double _n_halo_20312=(0.4+(0.4*_n_s_20309));
double _n_spill_20313=(1.2+(1.5*_n_s_20309));
double _n_R_20314=std::ceil((_n_spill_20313*3.2));
d::Array<float,true> _n_into_20315=(d::truth((_n_j_20310==this->_n_FLICK_20104))?this->_n_flickI_20123:this->_n_lampI_20121);
d::Array<float,true> _n_hot_20316=(d::truth((_n_j_20310==this->_n_FLICK_20104))?this->_n_flickW_20124:this->_n_lampW_20122);
{double _n_r_20317=([&](){auto _n_argument_20606=0.0;auto _n_argument_20607=std::floor((_n_ly_20308-_n_R_20314));return d::maximum({_n_argument_20606,_n_argument_20607});})();
for(;d::truth((_n_r_20317<d::minimum({_n_H_20060,(_n_ly_20308+_n_R_20314)})));(void)((_n_r_20317++))){d::check_cancel();{double _n_x_20318=([&](){auto _n_argument_20608=0.0;auto _n_argument_20609=std::floor((_n_lx_20307-_n_R_20314));return d::maximum({_n_argument_20608,_n_argument_20609});})();
for(;d::truth((_n_x_20318<d::minimum({_n_W_20059,(_n_lx_20307+_n_R_20314)})));(void)((_n_x_20318++))){d::check_cancel();double _n_k_20319=((_n_r_20317*_n_W_20059)+_n_x_20318);
if(d::truth((d::at(this->_n_mat_20110,_n_k_20319)==_n_WATER_20071))){d::check_cancel();continue;
}
double _n_dx_20320=((_n_x_20318+0.5)-_n_lx_20307);
double _n_dy_20321=((_n_r_20317+0.5)-_n_ly_20308);
double _n_d_20322=std::sqrt(((_n_dx_20320*_n_dx_20320)+(_n_dy_20321*_n_dy_20321)));
double _n_c_20323=(std::exp((-d::number(std::pow((_n_d_20322/_n_core_20311),2.0))))*2.2);
(void)(([&](){auto&& _n_array_20610=_n_into_20315;auto _n_index_20611=_n_k_20319;auto _n_value_20612=(d::at(_n_array_20610,_n_index_20611)+([&](){auto _n_left_20613=((_n_c_20323*0.7)+(std::exp(((-d::number(_n_d_20322))/_n_halo_20312))*0.24));auto _n_right_20614=(std::exp(((-d::number(_n_d_20322))/_n_spill_20313))*0.02);return (_n_left_20613+_n_right_20614);})());d::put(_n_array_20610,_n_index_20611,_n_value_20612);return _n_value_20612;})());
(void)(([&](){auto&& _n_array_20615=_n_hot_20316;auto _n_index_20616=_n_k_20319;auto _n_value_20617=(d::at(_n_array_20615,_n_index_20616)+(_n_c_20323*0.3));d::put(_n_array_20615,_n_index_20616,_n_value_20617);return _n_value_20617;})());
}}
}}
double _n_sy_20324=_n_shoreF_20086(_n_lx_20307);
double _n_wj_20325=(0.4+(0.7*_n_s_20309));
double _n_len_20326=(2.0+(8.0*_n_s_20309));
{double _n_r_20327=std::floor(_n_sy_20324);
for(;d::truth((_n_r_20327<_n_H_20060));(void)((_n_r_20327++))){d::check_cancel();double _n_dy_20328=((_n_r_20327+0.5)-_n_sy_20324);
if(d::truth((_n_dy_20328<0.0))){d::check_cancel();continue;
}
double _n_a_20329=([&](){auto _n_left_20618=(std::exp(((-d::number(_n_dy_20328))/(_n_len_20326*1.7)))*(0.3+(0.15*_n_s_20309)));auto _n_right_20619=_n_smooth_20083((-d::number(0.5)),1.5,_n_dy_20328);return (_n_left_20618*_n_right_20619);})();
if(d::truth((_n_a_20329<0.004))){d::check_cancel();break;
}
{double _n_x_20330=([&](){auto _n_argument_20620=0.0;auto _n_argument_20621=std::floor(((_n_lx_20307-(3.0*_n_wj_20325))-1.0));return d::maximum({_n_argument_20620,_n_argument_20621});})();
for(;d::truth((_n_x_20330<d::minimum({_n_W_20059,((_n_lx_20307+(3.0*_n_wj_20325))+1.0)})));(void)((_n_x_20330++))){d::check_cancel();double _n_k_20331=((_n_r_20327*_n_W_20059)+_n_x_20330);
if(d::truth((d::at(this->_n_mat_20110,_n_k_20331)!=_n_WATER_20071))){d::check_cancel();continue;
}
double _n_g_20332=(_n_a_20329*std::exp((-d::number(std::pow((((_n_x_20330+0.5)-_n_lx_20307)/_n_wj_20325),2.0)))));
if(d::truth((_n_j_20310==this->_n_FLICK_20104))){d::check_cancel();(void)(([&](){auto&& _n_array_20622=this->_n_reflFl_20126;auto _n_index_20623=_n_k_20331;auto _n_value_20624=(d::at(_n_array_20622,_n_index_20623)+_n_g_20332);d::put(_n_array_20622,_n_index_20623,_n_value_20624);return _n_value_20624;})());
}else {d::check_cancel();(void)(((([&](){auto&& _n_array_20625=d::at(this->_n_refl_20125,0.0);auto _n_index_20626=_n_k_20331;auto _n_value_20627=(d::at(_n_array_20625,_n_index_20626)+(_n_g_20332*d::at(_n_SODIUM_20069,0.0)));d::put(_n_array_20625,_n_index_20626,_n_value_20627);return _n_value_20627;})(),([&](){auto&& _n_array_20628=d::at(this->_n_refl_20125,1.0);auto _n_index_20629=_n_k_20331;auto _n_value_20630=(d::at(_n_array_20628,_n_index_20629)+(_n_g_20332*d::at(_n_SODIUM_20069,1.0)));d::put(_n_array_20628,_n_index_20629,_n_value_20630);return _n_value_20630;})()),([&](){auto&& _n_array_20631=d::at(this->_n_refl_20125,2.0);auto _n_index_20632=_n_k_20331;auto _n_value_20633=(d::at(_n_array_20631,_n_index_20632)+(_n_g_20332*d::at(_n_SODIUM_20069,2.0)));d::put(_n_array_20631,_n_index_20632,_n_value_20633);return _n_value_20633;})()));
}
}}
}}

}
}));
{double _n_k_20333=0.0;
for(;d::truth((_n_k_20333<this->_n_N_20093));(void)((_n_k_20333++))){d::check_cancel();double _n_m_20334=d::at(this->_n_mat_20110,_n_k_20333);
if((d::truth((_n_m_20334==_n_WATER_20071))||d::truth((_n_m_20334==_n_SKY_20070)))){d::check_cancel();continue;
}
(void)(((([&](){auto&& _n_array_20634=this->_n_sR_20111;auto _n_index_20635=_n_k_20333;auto _n_value_20636=(d::at(_n_array_20634,_n_index_20635)+((d::at(this->_n_lampI_20121,_n_k_20333)*d::at(_n_SODIUM_20069,0.0))+d::at(this->_n_lampW_20122,_n_k_20333)));d::put(_n_array_20634,_n_index_20635,_n_value_20636);return _n_value_20636;})(),([&](){auto&& _n_array_20637=this->_n_sG_20112;auto _n_index_20638=_n_k_20333;auto _n_value_20639=(d::at(_n_array_20637,_n_index_20638)+((d::at(this->_n_lampI_20121,_n_k_20333)*d::at(_n_SODIUM_20069,1.0))+(d::at(this->_n_lampW_20122,_n_k_20333)*0.95)));d::put(_n_array_20637,_n_index_20638,_n_value_20639);return _n_value_20639;})()),([&](){auto&& _n_array_20640=this->_n_sB_20113;auto _n_index_20641=_n_k_20333;auto _n_value_20642=(d::at(_n_array_20640,_n_index_20641)+((d::at(this->_n_lampI_20121,_n_k_20333)*d::at(_n_SODIUM_20069,2.0))+(d::at(this->_n_lampW_20122,_n_k_20333)*0.8)));d::put(_n_array_20640,_n_index_20641,_n_value_20642);return _n_value_20642;})()));
}}
for(auto &&_n_item_20643:this->_n_shipLights_20119){d::check_cancel();auto _n_binding_20644=_n_item_20643;
double _n_x_20335=d::at(_n_binding_20644,0.0);
double _n_cr_20336=d::at(_n_binding_20644,2.0);
double _n_cg_20337=d::at(_n_binding_20644,3.0);
double _n_cb_20338=d::at(_n_binding_20644,4.0);
{
{double _n_r_20339=_n_HZ_20061;
for(;d::truth((_n_r_20339<(_n_HZ_20061+14.0)));(void)((_n_r_20339++))){d::check_cancel();double _n_a_20340=(std::exp(((-d::number((_n_r_20339-_n_HZ_20061)))/5.0))*0.35);
{double _n_dx_20341=(-d::number(1.0));
for(;d::truth((_n_dx_20341<=1.0));(void)((_n_dx_20341++))){d::check_cancel();double _n_k_20342=(((_n_r_20339*_n_W_20059)+_n_x_20335)+_n_dx_20341);
if((d::truth(((_n_x_20335+_n_dx_20341)>=_n_W_20059))||d::truth((d::at(this->_n_mat_20110,_n_k_20342)!=_n_WATER_20071)))){d::check_cancel();continue;
}
double _n_g_20343=(_n_a_20340*std::exp((((-d::number(_n_dx_20341))*_n_dx_20341)*2.5)));
(void)(((([&](){auto&& _n_array_20645=d::at(this->_n_refl_20125,0.0);auto _n_index_20646=_n_k_20342;auto _n_value_20647=(d::at(_n_array_20645,_n_index_20646)+(_n_g_20343*_n_cr_20336));d::put(_n_array_20645,_n_index_20646,_n_value_20647);return _n_value_20647;})(),([&](){auto&& _n_array_20648=d::at(this->_n_refl_20125,1.0);auto _n_index_20649=_n_k_20342;auto _n_value_20650=(d::at(_n_array_20648,_n_index_20649)+(_n_g_20343*_n_cg_20337));d::put(_n_array_20648,_n_index_20649,_n_value_20650);return _n_value_20650;})()),([&](){auto&& _n_array_20651=d::at(this->_n_refl_20125,2.0);auto _n_index_20652=_n_k_20342;auto _n_value_20653=(d::at(_n_array_20651,_n_index_20652)+(_n_g_20343*_n_cb_20338));d::put(_n_array_20651,_n_index_20652,_n_value_20653);return _n_value_20653;})()));
}}
}}

}
}
{double _n_r_20344=0.0;
for(;d::truth((_n_r_20344<_n_H_20060));(void)((_n_r_20344++))){d::check_cancel();{double _n_x_20345=0.0;
for(;d::truth((_n_x_20345<_n_W_20059));(void)((_n_x_20345++))){d::check_cancel();double _n_k_20346=((_n_r_20344*_n_W_20059)+_n_x_20345);
if(d::truth((d::at(this->_n_mat_20110,_n_k_20346)!=_n_WATER_20071))){d::check_cancel();continue;
}
double _n_sy_20347=_n_seaTop_20088((_n_x_20345+0.5));
double _n_d_20348=((_n_r_20344+0.5)-_n_sy_20347);
double _n_ar_20349=0.0;
double _n_ag_20350=0.0;
double _n_ab_20351=0.0;
double _n_n_20352=0.0;
{double _n_o_20353=0.0;
for(;d::truth((_n_o_20353<3.0));(void)((_n_o_20353++))){d::check_cancel();double _n_ym_20354=std::floor((((_n_sy_20347-(_n_d_20348*0.55))-0.3)-(_n_o_20353*0.7)));
if(d::truth((_n_ym_20354<0.0))){d::check_cancel();continue;
}
double _n_q_20355=((_n_ym_20354*_n_W_20059)+_n_x_20345);
if(d::truth((d::at(this->_n_mat_20110,_n_q_20355)==_n_WATER_20071))){d::check_cancel();continue;
}
(void)((_n_n_20352++));
if(d::truth((d::at(this->_n_mat_20110,_n_q_20355)==_n_SKY_20070))){d::check_cancel();(void)((((_n_ar_20349=(_n_ar_20349+d::at(this->_n_sR_20111,_n_q_20355))),(_n_ag_20350=(_n_ag_20350+d::at(this->_n_sG_20112,_n_q_20355)))),(_n_ab_20351=(_n_ab_20351+d::at(this->_n_sB_20113,_n_q_20355)))));
}else {d::check_cancel();if((d::truth((d::at(this->_n_mat_20110,_n_q_20355)==_n_TOWER_20073))||d::truth((d::at(this->_n_mat_20110,_n_q_20355)==_n_SHIP_20078)))){d::check_cancel();(void)((((_n_ar_20349=(_n_ar_20349+(d::maximum({0.0,(d::at(this->_n_sR_20111,_n_q_20355)-0.25)})*0.6))),(_n_ag_20350=(_n_ag_20350+(d::maximum({0.0,(d::at(this->_n_sG_20112,_n_q_20355)-0.25)})*0.6)))),(_n_ab_20351=(_n_ab_20351+(d::maximum({0.0,(d::at(this->_n_sB_20113,_n_q_20355)-0.25)})*0.6)))));
}
}
}}
double _n_a_20356=(0.32*std::exp(((-d::number(_n_d_20348))/30.0)));
if(d::truth(_n_n_20352)){d::check_cancel();(void)(((([&](){auto&& _n_array_20654=d::at(this->_n_refl_20125,0.0);auto _n_index_20655=_n_k_20346;auto _n_value_20656=(d::at(_n_array_20654,_n_index_20655)+((_n_ar_20349/_n_n_20352)*_n_a_20356));d::put(_n_array_20654,_n_index_20655,_n_value_20656);return _n_value_20656;})(),([&](){auto&& _n_array_20657=d::at(this->_n_refl_20125,1.0);auto _n_index_20658=_n_k_20346;auto _n_value_20659=(d::at(_n_array_20657,_n_index_20658)+((_n_ag_20350/_n_n_20352)*_n_a_20356));d::put(_n_array_20657,_n_index_20658,_n_value_20659);return _n_value_20659;})()),([&](){auto&& _n_array_20660=d::at(this->_n_refl_20125,2.0);auto _n_index_20661=_n_k_20346;auto _n_value_20662=(d::at(_n_array_20660,_n_index_20661)+((_n_ab_20351/_n_n_20352)*_n_a_20356));d::put(_n_array_20660,_n_index_20661,_n_value_20662);return _n_value_20662;})()));
}
if(d::truth(((_n_x_20345+0.5)<=(_n_TIP_20062+4.0)))){d::check_cancel();double _n_sh_20357=([&](){auto _n_left_20663=(0.025*std::exp(((-d::number(_n_d_20348))/5.0)));auto _n_right_20664=_n_smooth_20083((_n_TIP_20062+4.0),(_n_TIP_20062-6.0),(_n_x_20345+0.5));return (_n_left_20663*_n_right_20664);})();
(void)(((([&](){auto&& _n_array_20665=d::at(this->_n_refl_20125,0.0);auto _n_index_20666=_n_k_20346;auto _n_value_20667=(d::at(_n_array_20665,_n_index_20666)+(_n_sh_20357*d::at(_n_SODIUM_20069,0.0)));d::put(_n_array_20665,_n_index_20666,_n_value_20667);return _n_value_20667;})(),([&](){auto&& _n_array_20668=d::at(this->_n_refl_20125,1.0);auto _n_index_20669=_n_k_20346;auto _n_value_20670=(d::at(_n_array_20668,_n_index_20669)+(_n_sh_20357*d::at(_n_SODIUM_20069,1.0)));d::put(_n_array_20668,_n_index_20669,_n_value_20670);return _n_value_20670;})()),([&](){auto&& _n_array_20671=d::at(this->_n_refl_20125,2.0);auto _n_index_20672=_n_k_20346;auto _n_value_20673=(d::at(_n_array_20671,_n_index_20672)+(_n_sh_20357*d::at(_n_SODIUM_20069,2.0)));d::put(_n_array_20671,_n_index_20672,_n_value_20673);return _n_value_20673;})()));
}
}}
}}
this->_n_CW_20127=800.0;
this->_n_cover_20128=d::Array<float,true>(size_t((this->_n_CW_20127*_n_HZ_20061)));
this->_n_clit_20129=d::Array<float,true>(size_t((this->_n_CW_20127*_n_HZ_20061)));
{double _n_r_20363=0.0;
for(;d::truth((_n_r_20363<_n_HZ_20061));(void)((_n_r_20363++))){d::check_cancel();{double _n_x_20364=0.0;
for(;d::truth((_n_x_20364<this->_n_CW_20127));(void)((_n_x_20364++))){d::check_cancel();double _n_y_20365=(_n_r_20363+0.5);
double _n_d_20366=this->_n_density_20130(_n_x_20364,_n_y_20365);
(void)(([&](){auto&& _n_array_20674=this->_n_cover_20128;auto _n_index_20675=((_n_r_20363*this->_n_CW_20127)+_n_x_20364);auto _n_value_20676=(_n_smooth_20083(0.47,0.62,_n_d_20366)*0.9);d::put(_n_array_20674,_n_index_20675,_n_value_20676);return _n_value_20676;})());
(void)(([&](){auto&& _n_array_20677=this->_n_clit_20129;auto _n_index_20678=((_n_r_20363*this->_n_CW_20127)+_n_x_20364);auto _n_value_20679=_n_clamp_20082(((0.5+((_n_d_20366-this->_n_density_20130((_n_x_20364-1.0),(_n_y_20365+2.5)))*9.0))-((_n_d_20366-0.6)*1.4)));d::put(_n_array_20677,_n_index_20678,_n_value_20679);return _n_value_20679;})());
}}
}}
this->_n_clear_20131=d::Array<float,true>(size_t(this->_n_N_20093));
{double _n_k_20367=0.0;
for(;d::truth((_n_k_20367<this->_n_N_20093));(void)((_n_k_20367++))){d::check_cancel();double _n_x_20368=(d::mod(_n_k_20367,_n_W_20059)+0.5);
double _n_y_20369=(std::floor((_n_k_20367/_n_W_20059))+0.5);
(void)(([&](){auto&& _n_array_20680=this->_n_clear_20131;auto _n_index_20681=_n_k_20367;auto _n_value_20682=(1.0-([&](){auto _n_left_20683=([&](){auto _n_left_20685=(0.9*_n_smooth_20083(84.0,96.0,_n_x_20368));auto _n_right_20686=_n_smooth_20083(186.0,176.0,_n_x_20368);return (_n_left_20685*_n_right_20686);})();auto _n_right_20684=_n_smooth_20083(20.0,28.0,_n_y_20369);return (_n_left_20683*_n_right_20684);})());d::put(_n_array_20680,_n_index_20681,_n_value_20682);return _n_value_20682;})());
}}
this->_n_BIN_20132=0.2;
this->_n_U0_20133=(-d::number(6.0));
this->_n_NB_20134=std::ceil(((this->_n_UEND_20102+12.0)/this->_n_BIN_20132));
this->_n_laneA_20135=d::Array<float,true>(size_t(this->_n_NB_20134));
this->_n_laneB_20136=d::Array<float,true>(size_t(this->_n_NB_20134));
this->_n_cars_20137=d::Array<d::Array<double,false>,false>{};
{double _n_i_20370=0.0;
for(;d::truth((_n_i_20370<26.0));(void)((_n_i_20370++))){d::check_cancel();(void)(this->_n_cars_20137.push(d::Array<double,false>{(_n_hash_20079(_n_i_20370,51.0)*(this->_n_UEND_20102+12.0)),(4.2+(1.6*_n_hash_20079(_n_i_20370,52.0))),double(d::i32(_n_i_20370)&d::i32(1.0))}));
}}
this->_n_binLo_20138=d::Array<int32_t,true>(size_t(_n_W_20059));
this->_n_binHi_20139=d::Array<int32_t,true>(size_t(_n_W_20059));
{double _n_x_20371=0.0;
for(;d::truth((_n_x_20371<_n_W_20059));(void)((_n_x_20371++))){d::check_cancel();(void)(([&](){auto&& _n_array_20687=this->_n_binLo_20138;auto _n_index_20688=_n_x_20371;auto _n_value_20689=([&](){auto _n_argument_20690=0.0;auto _n_argument_20691=std::floor(((this->_n_Uof_20100(_n_x_20371)-this->_n_U0_20133)/this->_n_BIN_20132));return d::maximum({_n_argument_20690,_n_argument_20691});})();d::put(_n_array_20687,_n_index_20688,_n_value_20689);return _n_value_20689;})());
(void)(([&](){auto&& _n_array_20692=this->_n_binHi_20139;auto _n_index_20693=_n_x_20371;auto _n_value_20694=([&](){auto _n_argument_20695=(this->_n_NB_20134-1.0);auto _n_argument_20696=([&](){auto _n_argument_20697=d::at(this->_n_binLo_20138,_n_x_20371);auto _n_argument_20698=std::floor(((this->_n_Uof_20100((_n_x_20371+1.0))-this->_n_U0_20133)/this->_n_BIN_20132));return d::maximum({_n_argument_20697,_n_argument_20698});})();return d::minimum({_n_argument_20695,_n_argument_20696});})();d::put(_n_array_20692,_n_index_20693,_n_value_20694);return _n_value_20694;})());
}}
this->_n_colA_20140=d::Array<float,true>(size_t(_n_W_20059));
this->_n_colB_20141=d::Array<float,true>(size_t(_n_W_20059));
_render=[=]( double _a0,std::shared_ptr<_n_Record_20476> _a1) mutable ->d::String{double _n_t_20372=_a0;
auto _n_binding_20701=(d::present(_a1)?_a1:([&](){auto _n_object_20700=std::make_shared<_n_Record_20476>();return _n_object_20700;})());
std::optional<d::Array<uint8_t,true>> _n_color_20373=_n_binding_20701->_p_color;
{
double _n_drift_20374=(_n_t_20372*1.3);
(void)((this->_n_laneA_20135.fill(0.0),this->_n_laneB_20136.fill(0.0)));
double _n_span_20375=(this->_n_UEND_20102+12.0);
for(auto &&_n_item_20702:this->_n_cars_20137){d::check_cancel();auto _n_binding_20703=_n_item_20702;
double _n_p0_20376=d::at(_n_binding_20703,0.0);
double _n_v_20377=d::at(_n_binding_20703,1.0);
double _n_dir_20378=d::at(_n_binding_20703,2.0);
{
double _n_p_20379=d::mod((d::mod((_n_p0_20376+((d::truth(_n_dir_20378)?(-d::number(_n_v_20377)):_n_v_20377)*_n_t_20372)),_n_span_20375)+_n_span_20375),_n_span_20375);
d::Array<float,true> _n_into_20380=(d::truth(_n_dir_20378)?this->_n_laneB_20136:this->_n_laneA_20135);
double _n_head_20381=std::floor((_n_p_20379/this->_n_BIN_20132));
{double _n_i_20382=0.0;
for(;d::truth((_n_i_20382<26.0));(void)((_n_i_20382++))){d::check_cancel();double _n_b_20383=(d::truth(_n_dir_20378)?(_n_head_20381+_n_i_20382):(_n_head_20381-_n_i_20382));
if((d::truth((_n_b_20383<0.0))||d::truth((_n_b_20383>=this->_n_NB_20134)))){d::check_cancel();continue;
}
double _n_e_20384=(std::exp(((-d::number(_n_i_20382))/7.0))*(d::truth((_n_i_20382<2.0))?1.3:0.85));
if(d::truth((_n_e_20384>d::at(_n_into_20380,_n_b_20383)))){d::check_cancel();(void)(([&](){auto&& _n_array_20704=_n_into_20380;auto _n_index_20705=_n_b_20383;auto _n_value_20706=_n_e_20384;d::put(_n_array_20704,_n_index_20705,_n_value_20706);return _n_value_20706;})());
}
}}

}
}
{double _n_x_20385=0.0;
for(;d::truth((_n_x_20385<_n_W_20059));(void)((_n_x_20385++))){d::check_cancel();double _n_a_20386=0.0;
double _n_b_20387=0.0;
{double _n_i_20388=d::at(this->_n_binLo_20138,_n_x_20385);
for(;d::truth((_n_i_20388<=d::at(this->_n_binHi_20139,_n_x_20385)));(void)((_n_i_20388++))){d::check_cancel();(void)(((_n_a_20386=d::maximum({_n_a_20386,d::at(this->_n_laneA_20135,_n_i_20388)})),(_n_b_20387=d::maximum({_n_b_20387,d::at(this->_n_laneB_20136,_n_i_20388)}))));
}}
(void)((([&](){auto&& _n_array_20707=this->_n_colA_20140;auto _n_index_20708=_n_x_20385;auto _n_value_20709=_n_a_20386;d::put(_n_array_20707,_n_index_20708,_n_value_20709);return _n_value_20709;})(),([&](){auto&& _n_array_20710=this->_n_colB_20141;auto _n_index_20711=_n_x_20385;auto _n_value_20712=_n_b_20387;d::put(_n_array_20710,_n_index_20711,_n_value_20712);return _n_value_20712;})()));
}}
bool _n_sputter_20389=(std::sin((_n_t_20372*0.7))>0.45);
double _n_lampOn_20390=(d::truth(_n_sputter_20389)?(d::truth((([&](){auto _n_argument_20713=std::floor((_n_t_20372*9.0));auto _n_argument_20714=77.0;return _n_hash_20079(_n_argument_20713,_n_argument_20714);})()>0.45))?1.0:0.15):1.0);
{double _n_r_20391=0.0;
for(;d::truth((_n_r_20391<_n_H_20060));(void)((_n_r_20391++))){d::check_cancel();double _n_y_20392=(_n_r_20391+0.5);
{double _n_x_20393=0.0;
for(;d::truth((_n_x_20393<_n_W_20059));(void)((_n_x_20393++))){d::check_cancel();double _n_k_20394=((_n_r_20391*_n_W_20059)+_n_x_20393);
double _n_m_20395=d::at(this->_n_mat_20110,_n_k_20394);
double _n_cr_20396=d::at(this->_n_sR_20111,_n_k_20394);
double _n_cg_20397=d::at(this->_n_sG_20112,_n_k_20394);
double _n_cb_20398=d::at(this->_n_sB_20113,_n_k_20394);
double _n_floor_20399=d::at(this->_n_flo_20114,_n_k_20394);
double _n_fade_20400=1.0;
if(d::truth((_n_m_20395==_n_SKY_20070))){d::check_cancel();double _n_sx_20401=(_n_x_20393+_n_drift_20374);
double _n_ix_20402=std::floor(_n_sx_20401);
double _n_fx_20403=(_n_sx_20401-_n_ix_20402);
double _n_i0_20404=((_n_r_20391*this->_n_CW_20127)+d::mod(_n_ix_20402,this->_n_CW_20127));
double _n_i1_20405=((_n_r_20391*this->_n_CW_20127)+d::mod((_n_ix_20402+1.0),this->_n_CW_20127));
double _n_c_20406=((d::at(this->_n_cover_20128,_n_i0_20404)+((d::at(this->_n_cover_20128,_n_i1_20405)-d::at(this->_n_cover_20128,_n_i0_20404))*_n_fx_20403))*d::at(this->_n_clear_20131,_n_k_20394));
if(d::truth((_n_c_20406>0.01))){d::check_cancel();double _n_l_20407=(d::at(this->_n_clit_20129,_n_i0_20404)+((d::at(this->_n_clit_20129,_n_i1_20405)-d::at(this->_n_clit_20129,_n_i0_20404))*_n_fx_20403));
double _n_g_20408=d::at(this->_n_skyGlow_20116,_n_k_20394);
double _n_dmx_20409=((_n_x_20393+0.5)-d::at(_n_MOON_20063,0.0));
double _n_dmy_20410=(_n_y_20392-d::at(_n_MOON_20063,1.0));
double _n_dm_20411=std::sqrt(((_n_dmx_20409*_n_dmx_20409)+(_n_dmy_20410*_n_dmy_20410)));
double _n_near_20412=std::exp(((-d::number(_n_dm_20411))/16.0));
double _n_b_20413=_n_clamp_20082((0.1+(_n_l_20407*((0.42+(0.9*_n_g_20408))+(0.5*_n_near_20412)))));
double _n_kr_20414=(d::truth((_n_b_20413<0.5))?_n_mix_20084(0.05,0.22,(_n_b_20413*2.0)):_n_mix_20084(0.22,0.9,((_n_b_20413*2.0)-1.0)));
double _n_kg_20415=(d::truth((_n_b_20413<0.5))?_n_mix_20084(0.06,0.26,(_n_b_20413*2.0)):_n_mix_20084(0.26,0.88,((_n_b_20413*2.0)-1.0)));
double _n_kb_20416=(d::truth((_n_b_20413<0.5))?_n_mix_20084(0.15,0.44,(_n_b_20413*2.0)):_n_mix_20084(0.44,0.92,((_n_b_20413*2.0)-1.0)));
double _n_a_20417=([&](){auto _n_left_20715=([&](){auto _n_left_20717=d::minimum({1.0,(_n_c_20406*1.1)});auto _n_right_20718=_n_smooth_20083(_n_MOON_R_20064,(_n_MOON_R_20064+4.0),_n_dm_20411);return (_n_left_20717*_n_right_20718);})();auto _n_right_20716=(1.0-(0.8*_n_smooth_20083(27.0,37.0,_n_y_20392)));return (_n_left_20715*_n_right_20716);})();
(void)((((_n_cr_20396=_n_mix_20084(_n_cr_20396,_n_kr_20414,_n_a_20417)),(_n_cg_20397=_n_mix_20084(_n_cg_20397,_n_kg_20415,_n_a_20417))),(_n_cb_20398=_n_mix_20084(_n_cb_20398,_n_kb_20416,_n_a_20417))));
}else {d::check_cancel();if((d::truth((_n_y_20392<(_n_HZ_20061-14.0)))&&d::truth((_n_hash_20079(_n_x_20393,((_n_r_20391*3.0)+11.0))>0.993)))){d::check_cancel();double _n_tw_20418=(0.3+(0.2*std::sin(([&](){auto _n_left_20719=(_n_t_20372*(1.3+(_n_hash_20079(_n_x_20393,_n_r_20391)*2.5)));auto _n_right_20720=(_n_hash_20079(_n_r_20391,_n_x_20393)*6.28);return (_n_left_20719+_n_right_20720);})())));
(void)((((_n_cr_20396=d::maximum({_n_cr_20396,(_n_tw_20418*0.9)})),(_n_cg_20397=d::maximum({_n_cg_20397,(_n_tw_20418*0.9)}))),(_n_cb_20398=d::maximum({_n_cb_20398,_n_tw_20418}))));
}
}
double _n_li_20419=d::at(this->_n_lampI_20121,_n_k_20394);
double _n_lw_20420=d::at(this->_n_lampW_20122,_n_k_20394);
(void)((((_n_cr_20396=(_n_cr_20396+((_n_li_20419*d::at(_n_SODIUM_20069,0.0))+_n_lw_20420))),(_n_cg_20397=(_n_cg_20397+((_n_li_20419*d::at(_n_SODIUM_20069,1.0))+(_n_lw_20420*0.95))))),(_n_cb_20398=(_n_cb_20398+((_n_li_20419*d::at(_n_SODIUM_20069,2.0))+(_n_lw_20420*0.8))))));
(void)((_n_floor_20399=0.14));
}else {d::check_cancel();if(d::truth((_n_m_20395==_n_WATER_20071))){d::check_cancel();double _n_v_20421=((_n_y_20392-_n_HZ_20061)/(_n_H_20060-_n_HZ_20061));
double _n_w_20422=([&](){auto _n_left_20721=(0.6*_n_noise_20080(((_n_x_20393*0.06)+(_n_t_20372*0.1)),((_n_y_20392*0.5)-(_n_t_20372*0.5)),0.0));auto _n_right_20722=(0.4*_n_noise_20080(((_n_x_20393*0.18)-(_n_t_20372*0.2)),((_n_y_20392*1.0)-(_n_t_20372*1.0)),0.0));return (_n_left_20721+_n_right_20722);})();
double _n_swell_20423=(0.45+(0.95*_n_w_20422));
double _n_open_20424=(0.85+(0.3*(_n_x_20393/_n_W_20059)));
(void)((((_n_cr_20396=(((0.05-(0.01*_n_v_20421))*_n_swell_20423)*_n_open_20424)),(_n_cg_20397=(((0.095-(0.015*_n_v_20421))*_n_swell_20423)*_n_open_20424))),(_n_cb_20398=(((0.23-(0.03*_n_v_20421))*_n_swell_20423)*_n_open_20424))));
{
double _n_road_20425=std::exp((-d::number(std::pow((((_n_x_20393+0.5)-d::at(_n_MOON_20063,0.0))/(0.8+((_n_y_20392-_n_HZ_20061)*0.12))),2.0))));
double _n_glint_20426=(([&](){auto _n_argument_20723=0.52;auto _n_argument_20724=0.8;auto _n_argument_20725=((0.45*_n_w_20422)+(0.55*_n_noise_20080(((_n_x_20393*0.3)+(_n_t_20372*0.3)),((_n_y_20392*1.4)-(_n_t_20372*1.4)),0.0)));return _n_smooth_20083(_n_argument_20723,_n_argument_20724,_n_argument_20725);})()*_n_road_20425);
(void)((((_n_cr_20396=(_n_cr_20396+((0.9*_n_glint_20426)+(0.03*_n_road_20425)))),(_n_cg_20397=(_n_cg_20397+((0.88*_n_glint_20426)+(0.035*_n_road_20425))))),(_n_cb_20398=(_n_cb_20398+((0.8*_n_glint_20426)+(0.05*_n_road_20425))))));

}
double _n_wob_20427=((_n_noise_20080(((_n_x_20393*0.05)+7.0),((_n_y_20392*0.32)-(_n_t_20372*0.7)),0.0)-0.5)*(1.4+(4.5*_n_v_20421)));
double _n_sx_20428=(_n_x_20393+_n_wob_20427);
if(d::truth((_n_sx_20428<0.0))){d::check_cancel();(void)((_n_sx_20428=0.0));
}
if(d::truth((_n_sx_20428>(_n_W_20059-1.001)))){d::check_cancel();(void)((_n_sx_20428=(_n_W_20059-1.001)));
}
double _n_i0_20429=((_n_r_20391*_n_W_20059)+double(d::i32(_n_sx_20428)|d::i32(0.0)));
double _n_fx_20430=(_n_sx_20428-double(d::i32(_n_sx_20428)|d::i32(0.0)));
double _n_dash_20431=(0.45+(0.9*([&](){auto _n_argument_20726=0.2;auto _n_argument_20727=0.55;auto _n_argument_20728=_n_noise_20080(((_n_x_20393*0.16)+3.0),((_n_y_20392*0.85)-(_n_t_20372*1.3)),0.0);return _n_smooth_20083(_n_argument_20726,_n_argument_20727,_n_argument_20728);})()));
auto _n_ref_20432=[&]( d::Array<float,true> _a0) mutable ->double{d::Array<float,true> _n_a_20433=_a0;
return ((d::at(_n_a_20433,_n_i0_20429)+((d::at(_n_a_20433,(_n_i0_20429+1.0))-d::at(_n_a_20433,_n_i0_20429))*_n_fx_20430))*_n_dash_20431);};
double _n_fl_20434=(_n_ref_20432(this->_n_reflFl_20126)*_n_lampOn_20390);
double _n_rr_20435=(_n_ref_20432(d::at(this->_n_refl_20125,0.0))+(_n_fl_20434*d::at(_n_SODIUM_20069,0.0)));
double _n_rg_20436=(_n_ref_20432(d::at(this->_n_refl_20125,1.0))+(_n_fl_20434*d::at(_n_SODIUM_20069,1.0)));
double _n_rb_20437=(_n_ref_20432(d::at(this->_n_refl_20125,2.0))+(_n_fl_20434*d::at(_n_SODIUM_20069,2.0)));
double _n_kill_20438=(1.0-(0.9*_n_clamp_20082(((_n_rr_20435-_n_rb_20437)*3.0))));
(void)((((_n_cr_20396=((_n_cr_20396*_n_kill_20438)+_n_rr_20435)),(_n_cg_20397=((_n_cg_20397*_n_kill_20438)+_n_rg_20436))),(_n_cb_20398=((_n_cb_20398*_n_kill_20438)+_n_rb_20437))));
(void)((_n_floor_20399=0.16));
(void)((_n_fade_20400=_n_smooth_20083((_n_H_20060+6.0),(_n_H_20060-8.0),_n_y_20392)));
}else {d::check_cancel();if(d::truth((_n_m_20395==_n_ROAD_20075))){d::check_cancel();double _n_L_20439=d::at(this->_n_lane_20115,_n_k_20394);
double _n_a_20440=(d::truth(double(d::i32(_n_L_20439)&d::i32(1.0)))?d::at(this->_n_colA_20140,_n_x_20393):0.0);
double _n_b_20441=(d::truth(double(d::i32(_n_L_20439)&d::i32(2.0)))?d::at(this->_n_colB_20141,_n_x_20393):0.0);
(void)((((_n_cr_20396=(_n_cr_20396+((_n_a_20440*0.8)+(_n_b_20441*1.0)))),(_n_cg_20397=(_n_cg_20397+((_n_a_20440*0.1)+(_n_b_20441*0.9))))),(_n_cb_20398=(_n_cb_20398+((_n_a_20440*0.08)+(_n_b_20441*0.72))))));
}
}
}
if(d::truth((_n_m_20395!=_n_WATER_20071))){d::check_cancel();double _n_f_20442=(d::at(this->_n_flickI_20123,_n_k_20394)*_n_lampOn_20390);
double _n_fw_20443=(d::at(this->_n_flickW_20124,_n_k_20394)*_n_lampOn_20390);
if(d::truth(_n_f_20442)){d::check_cancel();(void)((((_n_cr_20396=(_n_cr_20396+((_n_f_20442*d::at(_n_SODIUM_20069,0.0))+_n_fw_20443))),(_n_cg_20397=(_n_cg_20397+((_n_f_20442*d::at(_n_SODIUM_20069,1.0))+(_n_fw_20443*0.95))))),(_n_cb_20398=(_n_cb_20398+((_n_f_20442*d::at(_n_SODIUM_20069,2.0))+(_n_fw_20443*0.8))))));
}
}
double _n_peak_20444=d::maximum({_n_cr_20396,_n_cg_20397,_n_cb_20398,0.0001});
double _n_level_20445=(_n_clamp_20082((_n_floor_20399+(((1.0-_n_floor_20399)*std::pow(_n_peak_20444,0.85))*0.95)))*_n_fade_20400);
double _n_step_20446=([&](){auto _n_argument_20729=0.0;auto _n_argument_20730=([&](){auto _n_argument_20731=3.0;auto _n_argument_20732=d::round(((_n_level_20445*3.0)+d::at(_n_BAYER_20068,((double(d::i32(_n_r_20391)&d::i32(3.0))*4.0)+double(d::i32(_n_x_20393)&d::i32(3.0))))));return d::minimum({_n_argument_20731,_n_argument_20732});})();return d::maximum({_n_argument_20729,_n_argument_20730});})();
(void)(([&](){auto&& _n_array_20733=this->_n_out_20094;auto _n_index_20734=_n_k_20394;auto _n_value_20735=d::at(_n_DOTS_20066,_n_step_20446);d::put(_n_array_20733,_n_index_20734,_n_value_20735);return _n_value_20735;})());
if(d::truth(_n_color_20373)){d::check_cancel();double _n_want_20447=(d::truth(_n_step_20446)?d::minimum({1.0,((_n_level_20445+0.06)/d::at(_n_COVER_20067,_n_step_20446))}):0.0);
double _n_s_20448=((0.3+(0.7*_n_want_20447))/_n_peak_20444);
(void)(([&](){auto&& _n_array_20736=d::read(_n_color_20373);auto _n_index_20737=_n_k_20394;auto _n_value_20738=([&](){auto _n_argument_20739=_n_clamp_20082((_n_cr_20396*_n_s_20448));auto _n_argument_20740=_n_clamp_20082((_n_cg_20397*_n_s_20448));auto _n_argument_20741=_n_clamp_20082((_n_cb_20398*_n_s_20448));return this->_n_nearest_20096(_n_argument_20739,_n_argument_20740,_n_argument_20741);})();d::put(_n_array_20736,_n_index_20737,_n_value_20738);return _n_value_20738;})());
}
}}
}}
for(auto &&_n_item_20742:this->_n_flick_20117){d::check_cancel();auto _n_binding_20743=_n_item_20742;
double _n_k_20449=d::at(_n_binding_20743,0.0);
double _n_wr_20450=d::at(_n_binding_20743,1.0);
double _n_wg_20451=d::at(_n_binding_20743,2.0);
double _n_wb_20452=d::at(_n_binding_20743,3.0);
double _n_kind_20453=d::at(_n_binding_20743,4.0);
double _n_rate_20454=d::at(_n_binding_20743,5.0);
double _n_ph_20455=d::at(_n_binding_20743,6.0);
{
if(d::truth(_n_kind_20453)){d::check_cancel();double _n_f_20456=(0.5+([&](){auto _n_left_20744=(0.5*std::sin(((_n_t_20372*11.0)+_n_ph_20455)));auto _n_right_20745=std::sin(((_n_t_20372*4.3)+(_n_ph_20455*2.0)));return (_n_left_20744*_n_right_20745);})());
(void)(this->_n_paint_20142(_n_k_20449,((d::at(this->_n_sR_20111,_n_k_20449)-_n_wr_20450)+((_n_f_20456*_n_wr_20450)*0.45)),((d::at(this->_n_sG_20112,_n_k_20449)-_n_wg_20451)+((_n_f_20456*_n_wr_20450)*0.6)),((d::at(this->_n_sB_20113,_n_k_20449)-_n_wb_20452)+(_n_f_20456*_n_wr_20450)),0.08,_n_color_20373));
}else {d::check_cancel();double _n_f_20457=(d::truth((std::sin((((_n_t_20372*_n_rate_20454)*0.5)+_n_ph_20455))>(-d::number(0.6))))?1.0:0.0);
(void)(this->_n_paint_20142(_n_k_20449,(d::at(this->_n_sR_20111,_n_k_20449)-(_n_wr_20450*(1.0-_n_f_20457))),(d::at(this->_n_sG_20112,_n_k_20449)-(_n_wg_20451*(1.0-_n_f_20457))),(d::at(this->_n_sB_20113,_n_k_20449)-(_n_wb_20452*(1.0-_n_f_20457))),0.08,_n_color_20373));
}

}
}
for(auto &&_n_item_20746:this->_n_beacons_20118){d::check_cancel();auto _n_binding_20747=_n_item_20746;
double _n_k_20458=d::at(_n_binding_20747,0.0);
double _n_ph_20459=d::at(_n_binding_20747,1.0);
{
if(d::truth((_n_k_20458<0.0))){d::check_cancel();continue;
}
bool _n_on_20460=(std::sin(((_n_t_20372*2.4)+_n_ph_20459))>0.3);
(void)(this->_n_paint_20142(_n_k_20458,(d::truth(_n_on_20460)?1.0:0.3),(d::truth(_n_on_20460)?0.2:0.06),(d::truth(_n_on_20460)?0.15:0.05),0.1,_n_color_20373));

}
}
d::Array<d::String,false> _n_lines_20461=d::Array<d::String,false>{};
{double _n_r_20462=0.0;
for(;d::truth((_n_r_20462<_n_H_20060));(void)((_n_r_20462++))){d::check_cancel();(void)(_n_lines_20461.push(d::join(this->_n_out_20094.slice((_n_r_20462*_n_W_20059),((_n_r_20462+1.0)*_n_W_20059)),d::String(u""))));
}}
return d::join(_n_lines_20461,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("marine-drive").cols)*ascii::catalog_meta("marine-drive").rows);auto _env=std::make_shared<_n_Record_20476>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &marine_drive_meta(){return catalog_meta("marine-drive");}
std::unique_ptr<Piece> make_marine_drive(const AsciiPieceOptions &o){return std::make_unique<Native_marine_drive>(o);}
}
