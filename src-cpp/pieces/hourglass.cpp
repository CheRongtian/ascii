// Direct, statically typed C++ from src/pieces/hourglass.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13989;
struct _n_Record_14174;
struct _n_Record_13989{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13989> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13989>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_14174{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14174> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14174>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_w_14006(double _a0);
double _n_hash_14007(double _a0);
double _n_clamp_14008(double _a0);
double _n_solve_14009(std::function<double(double)> _a0,double _a1,double _a2,double _a3);
double _n_area_14011(std::function<double(double,double,double)> _a0);
std::function<bool(double,double)> _n_topAt_14012(double _a0);
std::function<bool(double,double)> _n_heapAt_14013(double _a0);
double _n_topArea_14014(double _a0);
double _n_heapArea_14015(double _a0);
double _n_table_14019(d::Array<double,false> _a0,double _a1);
void _n_trace_14021(d::Array<std::array<double,2>,false> _a0,std::function<void(double,double,d::String)> _a1);
std::shared_ptr<_n_Record_13989> _n_meta_13988=[](){return ([&](){auto _n_object_14177=std::make_shared<_n_Record_13989>();_n_object_14177->_p_name=d::String(u"hourglass");_n_object_14177->_p_category=d::String(u"objects");_n_object_14177->_p_note=d::String(u"sand running through the neck, then turned over");_n_object_14177->_p_cols=43.0;_n_object_14177->_p_rows=21.0;_n_object_14177->_p_fps=30.0;return _n_object_14177;})();}();
const double _n_W_13990=[](){return 0.6;}();
const double _n_H_13991=[](){return 1.2;}();
const double _n_L_13992=[](){return 9.0;}();
const double _n_RN_13993=[](){return 0.36;}();
const double _n_RM_13994=[](){return 5.0;}();
const double _n_RC_13995=[](){return 4.3;}();
const double _n_PX_13996=[](){return 6.0;}();
const double _n_K_13997=[](){return 0.6;}();
const double _n_LT_13998=[](){return 6.2;}();
double _n_RUN_13999{};
double _n_HOLD_14000{};
const bool _n_unpack_init_14178=[](){auto _n_binding_14179=std::array<double,2>{10.5,1.2};
_n_RUN_13999=d::at(_n_binding_14179,0.0);
_n_HOLD_14000=d::at(_n_binding_14179,1.0);
return true;}();
d::Array<double,false> _n_TURN_14001=[](){return d::Array<double,false>{0.2,0.45,0.2};}();
const double _n_CYCLE_14002=[](){return ((((_n_RUN_13999+_n_HOLD_14000)+d::at(_n_TURN_14001,0.0))+d::at(_n_TURN_14001,1.0))+d::at(_n_TURN_14001,2.0));}();
const double _n_START_14003=[](){return 3.5;}();
const double _n_DT_14004=[](){return 0.045;}();
d::Array<std::array<double,2>,false> _n_LOOKS_14005=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{0.3,0.12},std::array<double,2>{0.7,0.12},std::array<double,2>{0.3,0.38},std::array<double,2>{0.7,0.38},std::array<double,2>{0.3,0.62},std::array<double,2>{0.7,0.62},std::array<double,2>{0.3,0.88},std::array<double,2>{0.7,0.88}};}();
d::Array<std::array<double,3>,false> _n_BULB_14010=[](){return d::Array<std::array<double,3>,false>{};}();
const double _n_ALL_14016=[](){return _n_topArea_14014(_n_LT_13998);}();
d::Array<double,false> _n_CRATER_14017=[](){return d::Array<double,false>{};}();
d::Array<double,false> _n_HEAP_14018=[](){return d::Array<double,false>{};}();
const double _n_SIDE_14020=[](){return _n_solve_14009([=]( double _a0) mutable ->double{double _n_lv_14073=_a0;
return _n_area_14011([=]( double _a0,double _a1,double _a2) mutable ->double{double _n_v_14074=_a0;
double _n_lo_14075=_a1;
double _n_hi_14076=_a2;
return (d::truth((_n_v_14074>_n_lv_14073))?(_n_hi_14076-_n_lo_14075):0.0);});},_n_ALL_14016,_n_RM_13994,(-d::number(_n_RM_13994)));}();
const bool _n_init_14180=[](){{double _n_v_14042=((-d::number(_n_RM_13994))+0.05);
for(;d::truth((_n_v_14042<_n_RM_13994));(void)((_n_v_14042=(_n_v_14042+0.1)))){d::check_cancel();auto _n_binding_14181=std::array<double,2>{_n_L_13992,0.0};
double _n_lo_14043=d::at(_n_binding_14181,0.0);
double _n_hi_14044=d::at(_n_binding_14181,1.0);
{double _n_u_14045=0.0;
for(;d::truth((_n_u_14045<=_n_L_13992));(void)((_n_u_14045=(_n_u_14045+0.02)))){d::check_cancel();if(d::truth(([&](){auto _n_left_14182=std::fabs(_n_v_14042);auto _n_right_14183=(_n_w_14006(_n_u_14045)-0.15);return (_n_left_14182<_n_right_14183);})())){d::check_cancel();(void)(([&](){auto _n_unpack_14184=std::array<double,2>{d::minimum({_n_lo_14043,_n_u_14045}),_n_u_14045};_n_lo_14043=d::at(_n_unpack_14184,0.0);_n_hi_14044=d::at(_n_unpack_14184,1.0);return _n_unpack_14184;})());
}
}}
if(d::truth((_n_hi_14044>_n_lo_14043))){d::check_cancel();(void)(_n_BULB_14010.push(std::array<double,3>{_n_v_14042,_n_lo_14043,_n_hi_14044}));
}
}}
{double _n_i_14068=0.0;
for(;d::truth((_n_i_14068<=50.0));(void)((_n_i_14068++))){d::check_cancel();(void)(_n_CRATER_14017.push(_n_solve_14009(_n_topArea_14014,((_n_i_14068/50.0)*_n_ALL_14016),(((-d::number(_n_K_13997))*_n_RM_13994)-1.0),_n_LT_13998)));
(void)(_n_HEAP_14018.push(_n_solve_14009(_n_heapArea_14015,((_n_i_14068/50.0)*_n_ALL_14016),0.0,(_n_L_13992+(_n_K_13997*_n_RM_13994)))));
}}
return true;}();
double _n_w_14006(double _a0){double _n_u_14031=_a0;
{
double _n_s_14032=([&](){auto _n_argument_14185=1.0;auto _n_argument_14186=(std::fabs(_n_u_14031)/_n_L_13992);return d::minimum({_n_argument_14185,_n_argument_14186});})();
if(d::truth((_n_s_14032<0.76))){d::check_cancel();return (_n_RN_13993+((_n_RM_13994-_n_RN_13993)*std::pow(std::sin(((ascii::PI/2.0)*(_n_s_14032/0.76))),1.5)));
}
return (_n_RM_13994-((_n_RM_13994-_n_RC_13995)*std::pow(((_n_s_14032-0.76)/0.24),2.0)));

}
}

double _n_hash_14007(double _a0){double _n_n_14033=_a0;
{
double _n_h_14034=d::imul(double(d::i32(_n_n_14033)^d::i32(739982445.0)),695872825.0);
(void)((_n_h_14034=d::imul(double(d::i32(_n_h_14034)^d::i32(double(d::u32(_n_h_14034)>>(d::u32(15.0)&31)))),2246822519.0)));
return (double(d::u32(double(d::i32(_n_h_14034)^d::i32(double(d::u32(_n_h_14034)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_clamp_14008(double _a0){double _n_v_14035=_a0;
return ([&](){auto _n_argument_14187=1.0;auto _n_argument_14188=d::maximum({0.0,_n_v_14035});return d::minimum({_n_argument_14187,_n_argument_14188});})();}

double _n_solve_14009(std::function<double(double)> _a0,double _a1,double _a2,double _a3){std::function<double(double)> _n_fn_14036=_a0;
double _n_want_14038=_a1;
double _n_a_14039=_a2;
double _n_b_14040=_a3;
{
{double _n_i_14041=0.0;
for(;d::truth((_n_i_14041<30.0));(void)((_n_i_14041++))){d::check_cancel();(void)((d::truth((_n_fn_14036(((_n_a_14039+_n_b_14040)/2.0))<_n_want_14038))?(_n_a_14039=((_n_a_14039+_n_b_14040)/2.0)):(_n_b_14040=((_n_a_14039+_n_b_14040)/2.0))));
}}
return ((_n_a_14039+_n_b_14040)/2.0);

}
}

double _n_area_14011(std::function<double(double,double,double)> _a0){std::function<double(double,double,double)> _n_fn_14046=_a0;
return d::reduce(_n_BULB_14010,[&]( double _a0,std::array<double,3> _a1) mutable ->double{double _n_a_14050=_a0;
auto _n_binding_14189=_a1;
double _n_v_14051=d::at(_n_binding_14189,0.0);
double _n_lo_14052=d::at(_n_binding_14189,1.0);
double _n_hi_14053=d::at(_n_binding_14189,2.0);
return (_n_a_14050+_n_fn_14046(_n_v_14051,_n_lo_14052,_n_hi_14053));},0.0);}

std::function<bool(double,double)> _n_topAt_14012(double _a0){double _n_c_14054=_a0;
return [=]( double _a0,double _a1) mutable ->bool{double _n_u_14055=_a0;
double _n_v_14056=_a1;
return (_n_u_14055<([&](){auto _n_argument_14190=_n_LT_13998;auto _n_argument_14191=(_n_c_14054+(_n_K_13997*std::fabs(_n_v_14056)));return d::minimum({_n_argument_14190,_n_argument_14191});})());};}

std::function<bool(double,double)> _n_heapAt_14013(double _a0){double _n_p_14057=_a0;
return [=]( double _a0,double _a1) mutable ->bool{double _n_u_14058=_a0;
double _n_v_14059=_a1;
return ((_n_L_13992-_n_u_14058)<(_n_p_14057-(_n_K_13997*std::fabs(_n_v_14059))));};}

double _n_topArea_14014(double _a0){double _n_c_14060=_a0;
return _n_area_14011([=]( double _a0,double _a1,double _a2) mutable ->double{double _n_v_14061=_a0;
double _n_lo_14062=_a1;
double _n_hi_14063=_a2;
return ([&](){auto _n_argument_14192=0.0;auto _n_argument_14193=(([&](){auto _n_argument_14194=_n_hi_14063;auto _n_argument_14195=_n_LT_13998;auto _n_argument_14196=(_n_c_14060+(_n_K_13997*std::fabs(_n_v_14061)));return d::minimum({_n_argument_14194,_n_argument_14195,_n_argument_14196});})()-_n_lo_14062);return d::maximum({_n_argument_14192,_n_argument_14193});})();});}

double _n_heapArea_14015(double _a0){double _n_p_14064=_a0;
return _n_area_14011([=]( double _a0,double _a1,double _a2) mutable ->double{double _n_v_14065=_a0;
double _n_lo_14066=_a1;
double _n_hi_14067=_a2;
return ([&](){auto _n_argument_14197=0.0;auto _n_argument_14198=(_n_hi_14067-([&](){auto _n_argument_14199=_n_lo_14066;auto _n_argument_14200=((_n_L_13992-_n_p_14064)+(_n_K_13997*std::fabs(_n_v_14065)));return d::maximum({_n_argument_14199,_n_argument_14200});})());return d::maximum({_n_argument_14197,_n_argument_14198});})();});}

double _n_table_14019(d::Array<double,false> _a0,double _a1){d::Array<double,false> _n_tab_14069=_a0;
double _n_x_14070=_a1;
{
double _n_f_14071=(_n_clamp_14008(_n_x_14070)*50.0);
double _n_i_14072=([&](){auto _n_argument_14201=49.0;auto _n_argument_14202=std::floor(_n_f_14071);return d::minimum({_n_argument_14201,_n_argument_14202});})();
return (d::at(_n_tab_14069,_n_i_14072)+((d::at(_n_tab_14069,(_n_i_14072+1.0))-d::at(_n_tab_14069,_n_i_14072))*(_n_f_14071-_n_i_14072)));

}
}

void _n_trace_14021(d::Array<std::array<double,2>,false> _a0,std::function<void(double,double,d::String)> _a1){d::Array<std::array<double,2>,false> _n_pts_14077=_a0;
std::function<void(double,double,d::String)> _n_put_14078=_a1;
{
d::Array<std::array<double,3>,false> _n_steep_14082=d::Array<std::array<double,3>,false>{};
{double _n_k_14083=1.0;
for(;d::truth((_n_k_14083<double(_n_pts_14077.size())));(void)((_n_k_14083++))){d::check_cancel();auto _n_binding_14203=d::at(_n_pts_14077,(_n_k_14083-1.0));
double _n_x0_14084=d::at(_n_binding_14203,0.0);
double _n_y0_14085=d::at(_n_binding_14203,1.0);
auto _n_binding_14204=d::at(_n_pts_14077,_n_k_14083);
double _n_x1_14086=d::at(_n_binding_14204,0.0);
double _n_y1_14087=d::at(_n_binding_14204,1.0);
double _n_dx_14088=(_n_x1_14086-_n_x0_14084);
double _n_dy_14089=(_n_y1_14087-_n_y0_14085);
if(d::truth(([&](){auto _n_left_14205=std::fabs(_n_dy_14089);auto _n_right_14206=(1.4*std::fabs(_n_dx_14088));return (_n_left_14205<=_n_right_14206);})())){d::check_cancel();{double _n_c_14090=(std::floor(((d::minimum({_n_x0_14084,_n_x1_14086})/_n_W_13990)-0.5))+1.0);
for(;d::truth((_n_c_14090<=std::floor(((d::maximum({_n_x0_14084,_n_x1_14086})/_n_W_13990)-0.5))));(void)((_n_c_14090++))){d::check_cancel();double _n_y_14091=((_n_y0_14085+((_n_dy_14089*(((_n_c_14090+0.5)*_n_W_13990)-_n_x0_14084))/_n_dx_14088))/_n_H_13991);
double _n_r_14092=std::floor(_n_y_14091);
double _n_f_14093=(_n_y_14091-_n_r_14092);
(void)(_n_put_14078(_n_r_14092,_n_c_14090,(d::truth((_n_f_14093<0.3))?d::String(u"'"):(d::truth((_n_f_14093<0.6))?d::String(u"-"):(d::truth((_n_f_14093<0.85))?d::String(u"."):d::String(u"_"))))));
}}
}
if(d::truth(([&](){auto _n_left_14207=std::fabs(_n_dy_14089);auto _n_right_14208=(0.8*std::fabs(_n_dx_14088));return (_n_left_14207>=_n_right_14208);})())){d::check_cancel();{double _n_r_14094=(std::floor(((d::minimum({_n_y0_14085,_n_y1_14087})/_n_H_13991)-0.5))+1.0);
for(;d::truth((_n_r_14094<=std::floor(((d::maximum({_n_y0_14085,_n_y1_14087})/_n_H_13991)-0.5))));(void)((_n_r_14094++))){d::check_cancel();(void)(_n_steep_14082.push(std::array<double,3>{_n_r_14094,(_n_x0_14084+((_n_dx_14088*(((_n_r_14094+0.5)*_n_H_13991)-_n_y0_14085))/_n_dy_14089)),(_n_dx_14088/_n_dy_14089)}));
}}
}
}}
(void)(d::forEach(_n_steep_14082,[&]( std::array<double,3> _a0,double _a1) mutable ->void{auto _n_binding_14209=_a0;
double _n_r_14095=d::at(_n_binding_14209,0.0);
double _n_x_14096=d::at(_n_binding_14209,1.0);
double _n_s_14097=d::at(_n_binding_14209,2.0);
double _n_i_14098=_a1;
{
d::String _n_m_14099=(d::truth((std::fabs(_n_s_14097)>0.3))?(d::truth((_n_s_14097>0.0))?d::String(u"\\"):d::String(u"/")):d::String(u"|"));
std::optional<std::array<double,3>> _n_a_14100=std::optional<std::array<double,3>>(d::at(_n_steep_14082,(_n_i_14098-1.0)));
std::optional<std::array<double,3>> _n_b_14101=std::optional<std::array<double,3>>(d::at(_n_steep_14082,(_n_i_14098+1.0)));
if(((((d::truth((_n_m_14099==d::String(u"|")))&&d::truth(d::read(_n_a_14100)))&&d::truth(d::read(_n_b_14101)))&&d::truth((std::fabs((d::at(d::read(_n_a_14100),0.0)-_n_r_14095))==1.0)))&&d::truth((std::fabs((d::at(d::read(_n_b_14101),0.0)-_n_r_14095))==1.0)))){d::check_cancel();double _n_bow_14102=(_n_x_14096-((d::at(d::read(_n_a_14100),1.0)+d::at(d::read(_n_b_14101),1.0))/2.0));
if(d::truth((_n_bow_14102>0.1))){d::check_cancel();(void)((_n_m_14099=d::String(u")")));
}else {d::check_cancel();if(d::truth((_n_bow_14102<(-d::number(0.1))))){d::check_cancel();(void)((_n_m_14099=d::String(u"(")));
}
}
}
(void)(([&](){auto _n_argument_14210=_n_r_14095;auto _n_argument_14211=std::floor((_n_x_14096/_n_W_13990));auto _n_argument_14212=_n_m_14099;return _n_put_14078(_n_argument_14210,_n_argument_14211,_n_argument_14212);})());

}
}));

}
}

struct Native_hourglass final:ascii::Piece{
double _n_cols_14022{};
double _n_rows_14023{};
double _n_N_14024{};
double _n_CX_14025{};
double _n_CY_14026{};
double _n_pc_14027{};
double _n_mid_14028{};
d::Array<d::Array<d::String,false>,false> _n_still_14030{};
std::function<d::String(double,std::shared_ptr<_n_Record_14174>)> _render;
d::Array<d::String,false> _n_shell_14029(bool _a0,double _a1){bool _n_side_14103=_a0;
double _n_lift_14104=_a1;
{
d::Array<d::String,false> _n_g_14105=d::Array<d::String,false>(size_t(this->_n_N_14024)).fill(d::String(u""));
d::Array<int8_t,true> _n_by_14106=d::Array<int8_t,true>(size_t(this->_n_N_14024));
auto _n_put_14107=[&]( double _a0,double _a1,d::String _a2) mutable ->std::variant<d::String,bool>{double _n_r_14108=_a0;
double _n_c_14109=_a1;
d::String _n_m_14110=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_14228=([&]()->bool{auto _n_logical_14232=([&]()->bool{auto _n_logical_14233=([&]()->bool{auto _n_logical_14234=(_n_r_14108>=0.0);return d::truth(_n_logical_14234)?(_n_r_14108<this->_n_rows_14023):_n_logical_14234;})();return d::truth(_n_logical_14233)?(_n_c_14109>=0.0):_n_logical_14233;})();return d::truth(_n_logical_14232)?(_n_c_14109<this->_n_cols_14022):_n_logical_14232;})();return d::truth(_n_logical_14228)?std::variant<d::String,bool>(([&](){auto&& _n_array_14229=_n_g_14105;auto _n_index_14230=((_n_r_14108*this->_n_cols_14022)+_n_c_14109);auto _n_value_14231=_n_m_14110;d::put(_n_array_14229,_n_index_14230,_n_value_14231);return _n_value_14231;})()):std::variant<d::String,bool>(_n_logical_14228);})();};
auto _n_at_14111=[&]( double _a0,double _a1) mutable ->std::array<double,2>{double _n_u_14112=_a0;
double _n_v_14113=_a1;
return (d::truth(_n_side_14103)?std::array<double,2>{(this->_n_CX_14025+_n_u_14112),(this->_n_CY_14026+_n_v_14113)}:std::array<double,2>{(this->_n_CX_14025+_n_v_14113),((this->_n_CY_14026-(_n_lift_14104*_n_H_13991))-_n_u_14112)});};
for(auto &&_n_item_14235:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_sv_14114=_n_item_14235;
{
d::Array<std::array<double,2>,false> _n_pts_14115=d::Array<std::array<double,2>,false>{};
{double _n_u_14116=(-d::number(_n_L_13992));
for(;d::truth((_n_u_14116<=(_n_L_13992+1e-9)));(void)((_n_u_14116=(_n_u_14116+0.04)))){d::check_cancel();(void)(_n_pts_14115.push(([&](){auto _n_argument_14236=_n_u_14116;auto _n_argument_14237=(_n_sv_14114*_n_w_14006(_n_u_14116));return _n_at_14111(_n_argument_14236,_n_argument_14237);})()));
}}
(void)(_n_trace_14021(_n_pts_14115,[=]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_14117=_a0;
double _n_c_14118=_a1;
d::String _n_m_14119=_a2;
{
double _n_i_14120=((_n_r_14117*this->_n_cols_14022)+_n_c_14118);
bool _n_flat_14121=d::includes(d::String(u"'-._"),_n_m_14119);
(void)(_n_put_14107(_n_r_14117,_n_c_14118,((d::truth(_n_flat_14121)&&d::truth((d::at(_n_by_14106,_n_i_14120)==(-d::number(_n_sv_14114)))))?d::String(u"="):_n_m_14119)));
if(((d::truth(_n_flat_14121)&&d::truth((_n_i_14120>=0.0)))&&d::truth((_n_i_14120<this->_n_N_14024)))){d::check_cancel();(void)(([&](){auto&& _n_array_14238=_n_by_14106;auto _n_index_14239=_n_i_14120;auto _n_value_14240=(d::truth((d::at(_n_by_14106,_n_i_14120)==(-d::number(_n_sv_14114))))?2.0:_n_sv_14114);d::put(_n_array_14238,_n_index_14239,_n_value_14240);return _n_value_14240;})());
}

}
}));

}
}
double _n_n0_14122=d::round(((this->_n_CY_14026/_n_H_13991)-0.5));
if(d::truth((!d::truth(_n_side_14103)))){d::check_cancel();double _n_top_14123=((_n_n0_14122-_n_lift_14104)-8.0);
double _n_bot_14124=((_n_n0_14122-_n_lift_14104)+8.0);
double _n_hw_14125=(this->_n_pc_14027+2.0);
{double _n_c_14126=(this->_n_mid_14028-_n_hw_14125);
for(;d::truth((_n_c_14126<=(this->_n_mid_14028+_n_hw_14125)));(void)((_n_c_14126++))){d::check_cancel();double _n_end_14127=(d::truth((_n_c_14126==(this->_n_mid_14028-_n_hw_14125)))?0.0:(d::truth((_n_c_14126==(this->_n_mid_14028+_n_hw_14125)))?1.0:(-d::number(1.0))));
bool _n_post_14128=(std::fabs((_n_c_14126-this->_n_mid_14028))==this->_n_pc_14027);
(void)(_n_put_14107((_n_top_14123-1.0),_n_c_14126,(d::truth((_n_end_14127<0.0))?d::String(u"═"):d::at(d::String(u"╒╕"),_n_end_14127))));
(void)(_n_put_14107(_n_top_14123,_n_c_14126,(d::truth((_n_end_14127<0.0))?(d::truth(_n_post_14128)?d::String(u"╤"):d::String(u"═")):d::at(d::String(u"╘╛"),_n_end_14127))));
(void)(_n_put_14107(_n_bot_14124,_n_c_14126,(d::truth((_n_end_14127<0.0))?(d::truth(_n_post_14128)?d::String(u"╧"):d::String(u"═")):d::at(d::String(u"╒╕"),_n_end_14127))));
(void)(_n_put_14107((_n_bot_14124+1.0),_n_c_14126,(d::truth((_n_end_14127<0.0))?d::String(u"═"):d::at(d::String(u"╘╛"),_n_end_14127))));
}}
{double _n_r_14129=(_n_top_14123+1.0);
for(;d::truth((_n_r_14129<_n_bot_14124));(void)((_n_r_14129++))){d::check_cancel();(void)((_n_put_14107(_n_r_14129,(this->_n_mid_14028-this->_n_pc_14027),d::String(u"│")),_n_put_14107(_n_r_14129,(this->_n_mid_14028+this->_n_pc_14027),d::String(u"│"))));
}}
}else {d::check_cancel();double _n_hr_14130=d::round((_n_PX_13996/_n_H_13991));
d::Array<double,false> _n_ends_14131=d::Array<double,false>{(this->_n_mid_14028-16.0),(this->_n_mid_14028+16.0)};
for(auto &&_n_item_14241:d::entries(_n_ends_14131)){d::check_cancel();auto _n_binding_14242=_n_item_14241;
double _n_k_14132=d::at(_n_binding_14242,0.0);
double _n_c_14133=d::at(_n_binding_14242,1.0);
{
{double _n_r_14134=((_n_n0_14122-_n_hr_14130)-1.0);
for(;d::truth((_n_r_14134<=((_n_n0_14122+_n_hr_14130)+1.0)));(void)((_n_r_14134++))){d::check_cancel();double _n_edge_14135=(d::truth((_n_r_14134==((_n_n0_14122-_n_hr_14130)-1.0)))?0.0:(d::truth((_n_r_14134==((_n_n0_14122+_n_hr_14130)+1.0)))?1.0:(-d::number(1.0))));
bool _n_post_14136=(std::fabs((_n_r_14134-_n_n0_14122))==_n_hr_14130);
(void)(_n_put_14107(_n_r_14134,(_n_c_14133-1.0),(d::truth((_n_edge_14135<0.0))?((d::truth(_n_post_14136)&&d::truth(_n_k_14132))?d::String(u"╢"):d::String(u"║")):d::at(d::String(u"╓╙"),_n_edge_14135))));
(void)(_n_put_14107(_n_r_14134,_n_c_14133,(d::truth((_n_edge_14135<0.0))?d::String(u" "):d::String(u"─"))));
(void)(_n_put_14107(_n_r_14134,(_n_c_14133+1.0),(d::truth((_n_edge_14135<0.0))?((d::truth(_n_post_14136)&&d::truth((!d::truth(_n_k_14132))))?d::String(u"╟"):d::String(u"║")):d::at(d::String(u"╖╜"),_n_edge_14135))));
}}

}
}
{double _n_c_14137=(d::at(_n_ends_14131,0.0)+2.0);
for(;d::truth((_n_c_14137<(d::at(_n_ends_14131,1.0)-1.0)));(void)((_n_c_14137++))){d::check_cancel();(void)((_n_put_14107((_n_n0_14122-_n_hr_14130),_n_c_14137,d::String(u"─")),_n_put_14107((_n_n0_14122+_n_hr_14130),_n_c_14137,d::String(u"─"))));
}}
}
return _n_g_14105;

}
}

explicit Native_hourglass(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_14213=_n_meta_13988;
this->_n_cols_14022=_n_binding_14213->_p_cols;
this->_n_rows_14023=_n_binding_14213->_p_rows;
this->_n_N_14024=(this->_n_cols_14022*this->_n_rows_14023);
this->_n_CX_14025=((this->_n_cols_14022/2.0)*_n_W_13990);
this->_n_CY_14026=((this->_n_rows_14023/2.0)*_n_H_13991);
this->_n_pc_14027=d::round((_n_PX_13996/_n_W_13990));
this->_n_mid_14028=std::floor((this->_n_cols_14022/2.0));
this->_n_still_14030=d::Array<d::Array<d::String,false>,false>{this->_n_shell_14029(false,0.0),this->_n_shell_14029(false,1.0),this->_n_shell_14029(true,0.0)};
_render=[=]( double _a0,std::shared_ptr<_n_Record_14174> _a1) mutable ->d::String{double _n_t_14138=_a0;
{
double _n_k_14139=d::mod((d::mod((_n_START_14003+_n_t_14138),_n_CYCLE_14002)+_n_CYCLE_14002),_n_CYCLE_14002);
double _n_turn_14140=((_n_k_14139-_n_RUN_13999)-_n_HOLD_14000);
double _n_phase_14141=(d::truth((_n_turn_14140<0.0))?(-d::number(1.0)):(d::truth((_n_turn_14140<d::at(_n_TURN_14001,0.0)))?0.0:(d::truth((_n_turn_14140<(d::at(_n_TURN_14001,0.0)+d::at(_n_TURN_14001,1.0))))?1.0:2.0)));
bool _n_side_14142=(_n_phase_14141==1.0);
double _n_lift_14143=((d::truth((_n_phase_14141==0.0))||d::truth((_n_phase_14141==2.0)))?1.0:0.0);
double _n_left_14144=(d::truth((_n_phase_14141==2.0))?1.0:_n_clamp_14008((1.0-(_n_k_14139/_n_RUN_13999))));
std::function<bool(double,double)> _n_sand_14145{};
if(d::truth(_n_side_14142)){d::check_cancel();(void)((_n_sand_14145=[=]( double _a0,double _a1) mutable ->bool{double _n_u_14148=_a0;
double _n_v_14149=_a1;
return ([&]()->bool{auto _n_logical_14214=(_n_u_14148<0.0);return d::truth(_n_logical_14214)?(_n_v_14149>_n_SIDE_14020):_n_logical_14214;})();}));
}else {d::check_cancel();std::function<bool(double,double)> _n_top_14150=_n_topAt_14012(_n_table_14019(_n_CRATER_14017,_n_left_14144));
std::function<bool(double,double)> _n_heap_14151=_n_heapAt_14013(_n_table_14019(_n_HEAP_14018,(1.0-_n_left_14144)));
(void)((_n_sand_14145=[=]( double _a0,double _a1) mutable ->bool{double _n_u_14152=_a0;
double _n_v_14153=_a1;
return (d::truth((_n_u_14152>0.0))?_n_top_14150(_n_u_14152,_n_v_14153):_n_heap_14151((-d::number(_n_u_14152)),_n_v_14153));}));
}
d::Array<uint8_t,true> _n_bits_14154=d::Array<uint8_t,true>(size_t(this->_n_N_14024));
{double _n_i_14155=0.0;
for(;d::truth((_n_i_14155<this->_n_N_14024));(void)((_n_i_14155++))){d::check_cancel();double _n_hi_14156=0.0;
double _n_lo_14157=0.0;
for(auto &&_n_item_14215:_n_LOOKS_14005){d::check_cancel();auto _n_binding_14216=_n_item_14215;
double _n_a_14158=d::at(_n_binding_14216,0.0);
double _n_b_14159=d::at(_n_binding_14216,1.0);
{
double _n_x_14160=(((d::mod(_n_i_14155,this->_n_cols_14022)+_n_a_14158)*_n_W_13990)-this->_n_CX_14025);
double _n_y_14161=((this->_n_CY_14026-(_n_lift_14143*_n_H_13991))-((std::floor((_n_i_14155/this->_n_cols_14022))+_n_b_14159)*_n_H_13991));
double _n_u_14162=(d::truth(_n_side_14142)?_n_x_14160:_n_y_14161);
double _n_v_14163=(d::truth(_n_side_14142)?(-d::number(_n_y_14161)):_n_x_14160);
if(((d::truth((std::fabs(_n_u_14162)<_n_L_13992))&&d::truth(([&](){auto _n_left_14217=std::fabs(_n_v_14163);auto _n_right_14218=(_n_w_14006(_n_u_14162)-0.15);return (_n_left_14217<_n_right_14218);})()))&&d::truth(_n_sand_14145(_n_u_14162,_n_v_14163)))){d::check_cancel();(void)((d::truth((_n_b_14159<0.5))?(_n_hi_14156++):(_n_lo_14157++)));
}

}
}
(void)(([&](){auto&& _n_array_14219=_n_bits_14154;auto _n_index_14220=_n_i_14155;auto _n_value_14221=double(d::i32((d::truth((_n_hi_14156>2.0))?1.0:0.0))|d::i32((d::truth((_n_lo_14157>2.0))?2.0:0.0)));d::put(_n_array_14219,_n_index_14220,_n_value_14221);return _n_value_14221;})());
}}
if(d::truth((_n_phase_14141<0.0))){d::check_cancel();double _n_peak_14164=((-d::number(_n_L_13992))+_n_table_14019(_n_HEAP_14018,(1.0-_n_left_14144)));
{double _n_i_14165=([&](){auto _n_argument_14222=0.0;auto _n_argument_14223=std::floor(((_n_k_14139-0.8)/_n_DT_14004));return d::maximum({_n_argument_14222,_n_argument_14223});})();
for(;d::truth(((_n_i_14165*_n_DT_14004)<=d::minimum({_n_k_14139,_n_RUN_13999})));(void)((_n_i_14165++))){d::check_cancel();double _n_a_14166=((_n_k_14139-(_n_i_14165*_n_DT_14004))-((_n_hash_14007((_n_i_14165+7919.0))*_n_DT_14004)*0.7));
double _n_u_14167=((0.1-(3.0*_n_a_14166))-((18.0*_n_a_14166)*_n_a_14166));
if(((d::truth((_n_hash_14007(_n_i_14165)<0.18))||d::truth((_n_a_14166<0.0)))||d::truth((_n_u_14167<_n_peak_14164)))){d::check_cancel();continue;
}
double _n_y_14168=((this->_n_CY_14026-_n_u_14167)/_n_H_13991);
(void)(([&](){auto&& _n_array_14224=_n_bits_14154;auto _n_index_14225=((std::floor(_n_y_14168)*this->_n_cols_14022)+this->_n_mid_14028);auto _n_value_14226=double(d::i32(d::at(_n_array_14224,_n_index_14225))|d::i32((d::truth((d::mod(_n_y_14168,1.0)<0.5))?1.0:2.0)));d::put(_n_array_14224,_n_index_14225,_n_value_14226);return _n_value_14226;})());
}}
}
d::Array<d::String,false> _n_glass_14169=d::at(this->_n_still_14030,(d::truth(_n_side_14142)?2.0:_n_lift_14143));
d::Array<d::String,false> _n_lines_14170=d::Array<d::String,false>{};
{double _n_r_14171=0.0;
for(;d::truth((_n_r_14171<this->_n_rows_14023));(void)((_n_r_14171++))){d::check_cancel();d::String _n_line_14172=d::String(u"");
{double _n_c_14173=0.0;
for(;d::truth((_n_c_14173<this->_n_cols_14022));(void)((_n_c_14173++))){d::check_cancel();(void)((_n_line_14172=(d::string(_n_line_14172)+d::string(([&]()->d::String{auto _n_logical_14227=d::at(_n_glass_14169,((_n_r_14171*this->_n_cols_14022)+_n_c_14173));return d::truth(_n_logical_14227)?_n_logical_14227:d::at(d::String(u" '.:"),d::at(_n_bits_14154,((_n_r_14171*this->_n_cols_14022)+_n_c_14173)));})()))));
}}
(void)(_n_lines_14170.push(_n_line_14172));
}}
return d::join(_n_lines_14170,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("hourglass").cols)*ascii::catalog_meta("hourglass").rows);auto _env=std::make_shared<_n_Record_14174>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &hourglass_meta(){return catalog_meta("hourglass");}
std::unique_ptr<Piece> make_hourglass(const AsciiPieceOptions &o){return std::make_unique<Native_hourglass>(o);}
}
