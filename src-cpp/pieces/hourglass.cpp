// Direct, statically typed C++ from src/pieces/hourglass.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13990;
struct _n_Record_14175;
struct _n_Record_13990{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13990> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13990>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_14175{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14175> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14175>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_w_14007(double _a0);
double _n_hash_14008(double _a0);
double _n_clamp_14009(double _a0);
double _n_solve_14010(std::function<double(double)> _a0,double _a1,double _a2,double _a3);
double _n_area_14012(std::function<double(double,double,double)> _a0);
std::function<bool(double,double)> _n_topAt_14013(double _a0);
std::function<bool(double,double)> _n_heapAt_14014(double _a0);
double _n_topArea_14015(double _a0);
double _n_heapArea_14016(double _a0);
double _n_table_14020(d::Array<double,false> _a0,double _a1);
void _n_trace_14022(d::Array<d::Array<double,false>,false> _a0,std::function<void(double,double,d::String)> _a1);
std::shared_ptr<_n_Record_13990> _n_meta_13989=[](){return ([&](){auto _n_object_14178=std::make_shared<_n_Record_13990>();_n_object_14178->_p_name=d::String(u"hourglass");_n_object_14178->_p_category=d::String(u"objects");_n_object_14178->_p_note=d::String(u"sand running through the neck, then turned over");_n_object_14178->_p_cols=43.0;_n_object_14178->_p_rows=21.0;_n_object_14178->_p_fps=30.0;return _n_object_14178;})();}();
const double _n_W_13991=[](){return 0.6;}();
const double _n_H_13992=[](){return 1.2;}();
const double _n_L_13993=[](){return 9.0;}();
const double _n_RN_13994=[](){return 0.36;}();
const double _n_RM_13995=[](){return 5.0;}();
const double _n_RC_13996=[](){return 4.3;}();
const double _n_PX_13997=[](){return 6.0;}();
const double _n_K_13998=[](){return 0.6;}();
const double _n_LT_13999=[](){return 6.2;}();
double _n_RUN_14000{};
double _n_HOLD_14001{};
const bool _n_unpack_init_14179=[](){auto _n_binding_14180=d::Array<double,false>{10.5,1.2};
_n_RUN_14000=d::at(_n_binding_14180,0.0);
_n_HOLD_14001=d::at(_n_binding_14180,1.0);
return true;}();
d::Array<double,false> _n_TURN_14002=[](){return d::Array<double,false>{0.2,0.45,0.2};}();
const double _n_CYCLE_14003=[](){return ((((_n_RUN_14000+_n_HOLD_14001)+d::at(_n_TURN_14002,0.0))+d::at(_n_TURN_14002,1.0))+d::at(_n_TURN_14002,2.0));}();
const double _n_START_14004=[](){return 3.5;}();
const double _n_DT_14005=[](){return 0.045;}();
d::Array<d::Array<double,false>,false> _n_LOOKS_14006=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.3,0.12},d::Array<double,false>{0.7,0.12},d::Array<double,false>{0.3,0.38},d::Array<double,false>{0.7,0.38},d::Array<double,false>{0.3,0.62},d::Array<double,false>{0.7,0.62},d::Array<double,false>{0.3,0.88},d::Array<double,false>{0.7,0.88}};}();
d::Array<d::Array<double,false>,false> _n_BULB_14011=[](){return d::Array<d::Array<double,false>,false>{};}();
const double _n_ALL_14017=[](){return _n_topArea_14015(_n_LT_13999);}();
d::Array<double,false> _n_CRATER_14018=[](){return d::Array<double,false>{};}();
d::Array<double,false> _n_HEAP_14019=[](){return d::Array<double,false>{};}();
const double _n_SIDE_14021=[](){return _n_solve_14010([=]( double _a0) mutable ->double{double _n_lv_14074=_a0;
return _n_area_14012([=]( double _a0,double _a1,double _a2) mutable ->double{double _n_v_14075=_a0;
double _n_lo_14076=_a1;
double _n_hi_14077=_a2;
return (d::truth((_n_v_14075>_n_lv_14074))?(_n_hi_14077-_n_lo_14076):0.0);});},_n_ALL_14017,_n_RM_13995,(-d::number(_n_RM_13995)));}();
const bool _n_init_14181=[](){{double _n_v_14043=((-d::number(_n_RM_13995))+0.05);
for(;d::truth((_n_v_14043<_n_RM_13995));(void)((_n_v_14043=(_n_v_14043+0.1)))){d::check_cancel();auto _n_binding_14182=d::Array<double,false>{_n_L_13993,0.0};
double _n_lo_14044=d::at(_n_binding_14182,0.0);
double _n_hi_14045=d::at(_n_binding_14182,1.0);
{double _n_u_14046=0.0;
for(;d::truth((_n_u_14046<=_n_L_13993));(void)((_n_u_14046=(_n_u_14046+0.02)))){d::check_cancel();if(d::truth(([&](){auto _n_left_14183=std::fabs(_n_v_14043);auto _n_right_14184=(_n_w_14007(_n_u_14046)-0.15);return (_n_left_14183<_n_right_14184);})())){d::check_cancel();(void)(([&](){auto _n_unpack_14185=d::Array<double,false>{d::minimum({_n_lo_14044,_n_u_14046}),_n_u_14046};_n_lo_14044=d::at(_n_unpack_14185,0.0);_n_hi_14045=d::at(_n_unpack_14185,1.0);return _n_unpack_14185;})());
}
}}
if(d::truth((_n_hi_14045>_n_lo_14044))){d::check_cancel();(void)(_n_BULB_14011.push(d::Array<double,false>{_n_v_14043,_n_lo_14044,_n_hi_14045}));
}
}}
{double _n_i_14069=0.0;
for(;d::truth((_n_i_14069<=50.0));(void)((_n_i_14069++))){d::check_cancel();(void)(_n_CRATER_14018.push(_n_solve_14010(_n_topArea_14015,((_n_i_14069/50.0)*_n_ALL_14017),(((-d::number(_n_K_13998))*_n_RM_13995)-1.0),_n_LT_13999)));
(void)(_n_HEAP_14019.push(_n_solve_14010(_n_heapArea_14016,((_n_i_14069/50.0)*_n_ALL_14017),0.0,(_n_L_13993+(_n_K_13998*_n_RM_13995)))));
}}
return true;}();
double _n_w_14007(double _a0){double _n_u_14032=_a0;
{
double _n_s_14033=([&](){auto _n_argument_14186=1.0;auto _n_argument_14187=(std::fabs(_n_u_14032)/_n_L_13993);return d::minimum({_n_argument_14186,_n_argument_14187});})();
if(d::truth((_n_s_14033<0.76))){d::check_cancel();return (_n_RN_13994+((_n_RM_13995-_n_RN_13994)*std::pow(std::sin(((ascii::PI/2.0)*(_n_s_14033/0.76))),1.5)));
}
return (_n_RM_13995-((_n_RM_13995-_n_RC_13996)*std::pow(((_n_s_14033-0.76)/0.24),2.0)));

}
}

double _n_hash_14008(double _a0){double _n_n_14034=_a0;
{
double _n_h_14035=d::imul(double(d::i32(_n_n_14034)^d::i32(739982445.0)),695872825.0);
(void)((_n_h_14035=d::imul(double(d::i32(_n_h_14035)^d::i32(double(d::u32(_n_h_14035)>>(d::u32(15.0)&31)))),2246822519.0)));
return (double(d::u32(double(d::i32(_n_h_14035)^d::i32(double(d::u32(_n_h_14035)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_clamp_14009(double _a0){double _n_v_14036=_a0;
return ([&](){auto _n_argument_14188=1.0;auto _n_argument_14189=d::maximum({0.0,_n_v_14036});return d::minimum({_n_argument_14188,_n_argument_14189});})();}

double _n_solve_14010(std::function<double(double)> _a0,double _a1,double _a2,double _a3){std::function<double(double)> _n_fn_14037=_a0;
double _n_want_14039=_a1;
double _n_a_14040=_a2;
double _n_b_14041=_a3;
{
{double _n_i_14042=0.0;
for(;d::truth((_n_i_14042<30.0));(void)((_n_i_14042++))){d::check_cancel();(void)((d::truth((_n_fn_14037(((_n_a_14040+_n_b_14041)/2.0))<_n_want_14039))?(_n_a_14040=((_n_a_14040+_n_b_14041)/2.0)):(_n_b_14041=((_n_a_14040+_n_b_14041)/2.0))));
}}
return ((_n_a_14040+_n_b_14041)/2.0);

}
}

double _n_area_14012(std::function<double(double,double,double)> _a0){std::function<double(double,double,double)> _n_fn_14047=_a0;
return d::reduce(_n_BULB_14011,[&]( double _a0,d::Array<double,false> _a1) mutable ->double{double _n_a_14051=_a0;
auto _n_binding_14190=_a1;
double _n_v_14052=d::at(_n_binding_14190,0.0);
double _n_lo_14053=d::at(_n_binding_14190,1.0);
double _n_hi_14054=d::at(_n_binding_14190,2.0);
return (_n_a_14051+_n_fn_14047(_n_v_14052,_n_lo_14053,_n_hi_14054));},0.0);}

std::function<bool(double,double)> _n_topAt_14013(double _a0){double _n_c_14055=_a0;
return [=]( double _a0,double _a1) mutable ->bool{double _n_u_14056=_a0;
double _n_v_14057=_a1;
return (_n_u_14056<([&](){auto _n_argument_14191=_n_LT_13999;auto _n_argument_14192=(_n_c_14055+(_n_K_13998*std::fabs(_n_v_14057)));return d::minimum({_n_argument_14191,_n_argument_14192});})());};}

std::function<bool(double,double)> _n_heapAt_14014(double _a0){double _n_p_14058=_a0;
return [=]( double _a0,double _a1) mutable ->bool{double _n_u_14059=_a0;
double _n_v_14060=_a1;
return ((_n_L_13993-_n_u_14059)<(_n_p_14058-(_n_K_13998*std::fabs(_n_v_14060))));};}

double _n_topArea_14015(double _a0){double _n_c_14061=_a0;
return _n_area_14012([=]( double _a0,double _a1,double _a2) mutable ->double{double _n_v_14062=_a0;
double _n_lo_14063=_a1;
double _n_hi_14064=_a2;
return ([&](){auto _n_argument_14193=0.0;auto _n_argument_14194=(([&](){auto _n_argument_14195=_n_hi_14064;auto _n_argument_14196=_n_LT_13999;auto _n_argument_14197=(_n_c_14061+(_n_K_13998*std::fabs(_n_v_14062)));return d::minimum({_n_argument_14195,_n_argument_14196,_n_argument_14197});})()-_n_lo_14063);return d::maximum({_n_argument_14193,_n_argument_14194});})();});}

double _n_heapArea_14016(double _a0){double _n_p_14065=_a0;
return _n_area_14012([=]( double _a0,double _a1,double _a2) mutable ->double{double _n_v_14066=_a0;
double _n_lo_14067=_a1;
double _n_hi_14068=_a2;
return ([&](){auto _n_argument_14198=0.0;auto _n_argument_14199=(_n_hi_14068-([&](){auto _n_argument_14200=_n_lo_14067;auto _n_argument_14201=((_n_L_13993-_n_p_14065)+(_n_K_13998*std::fabs(_n_v_14066)));return d::maximum({_n_argument_14200,_n_argument_14201});})());return d::maximum({_n_argument_14198,_n_argument_14199});})();});}

double _n_table_14020(d::Array<double,false> _a0,double _a1){d::Array<double,false> _n_tab_14070=_a0;
double _n_x_14071=_a1;
{
double _n_f_14072=(_n_clamp_14009(_n_x_14071)*50.0);
double _n_i_14073=([&](){auto _n_argument_14202=49.0;auto _n_argument_14203=std::floor(_n_f_14072);return d::minimum({_n_argument_14202,_n_argument_14203});})();
return (d::at(_n_tab_14070,_n_i_14073)+((d::at(_n_tab_14070,(_n_i_14073+1.0))-d::at(_n_tab_14070,_n_i_14073))*(_n_f_14072-_n_i_14073)));

}
}

void _n_trace_14022(d::Array<d::Array<double,false>,false> _a0,std::function<void(double,double,d::String)> _a1){d::Array<d::Array<double,false>,false> _n_pts_14078=_a0;
std::function<void(double,double,d::String)> _n_put_14079=_a1;
{
d::Array<d::Array<double,false>,false> _n_steep_14083=d::Array<d::Array<double,false>,false>{};
{double _n_k_14084=1.0;
for(;d::truth((_n_k_14084<double(_n_pts_14078.size())));(void)((_n_k_14084++))){d::check_cancel();auto _n_binding_14204=d::at(_n_pts_14078,(_n_k_14084-1.0));
double _n_x0_14085=d::at(_n_binding_14204,0.0);
double _n_y0_14086=d::at(_n_binding_14204,1.0);
auto _n_binding_14205=d::at(_n_pts_14078,_n_k_14084);
double _n_x1_14087=d::at(_n_binding_14205,0.0);
double _n_y1_14088=d::at(_n_binding_14205,1.0);
double _n_dx_14089=(_n_x1_14087-_n_x0_14085);
double _n_dy_14090=(_n_y1_14088-_n_y0_14086);
if(d::truth(([&](){auto _n_left_14206=std::fabs(_n_dy_14090);auto _n_right_14207=(1.4*std::fabs(_n_dx_14089));return (_n_left_14206<=_n_right_14207);})())){d::check_cancel();{double _n_c_14091=(std::floor(((d::minimum({_n_x0_14085,_n_x1_14087})/_n_W_13991)-0.5))+1.0);
for(;d::truth((_n_c_14091<=std::floor(((d::maximum({_n_x0_14085,_n_x1_14087})/_n_W_13991)-0.5))));(void)((_n_c_14091++))){d::check_cancel();double _n_y_14092=((_n_y0_14086+((_n_dy_14090*(((_n_c_14091+0.5)*_n_W_13991)-_n_x0_14085))/_n_dx_14089))/_n_H_13992);
double _n_r_14093=std::floor(_n_y_14092);
double _n_f_14094=(_n_y_14092-_n_r_14093);
(void)(_n_put_14079(_n_r_14093,_n_c_14091,(d::truth((_n_f_14094<0.3))?d::String(u"'"):(d::truth((_n_f_14094<0.6))?d::String(u"-"):(d::truth((_n_f_14094<0.85))?d::String(u"."):d::String(u"_"))))));
}}
}
if(d::truth(([&](){auto _n_left_14208=std::fabs(_n_dy_14090);auto _n_right_14209=(0.8*std::fabs(_n_dx_14089));return (_n_left_14208>=_n_right_14209);})())){d::check_cancel();{double _n_r_14095=(std::floor(((d::minimum({_n_y0_14086,_n_y1_14088})/_n_H_13992)-0.5))+1.0);
for(;d::truth((_n_r_14095<=std::floor(((d::maximum({_n_y0_14086,_n_y1_14088})/_n_H_13992)-0.5))));(void)((_n_r_14095++))){d::check_cancel();(void)(_n_steep_14083.push(d::Array<double,false>{_n_r_14095,(_n_x0_14085+((_n_dx_14089*(((_n_r_14095+0.5)*_n_H_13992)-_n_y0_14086))/_n_dy_14090)),(_n_dx_14089/_n_dy_14090)}));
}}
}
}}
(void)(d::forEach(_n_steep_14083,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_14210=_a0;
double _n_r_14096=d::at(_n_binding_14210,0.0);
double _n_x_14097=d::at(_n_binding_14210,1.0);
double _n_s_14098=d::at(_n_binding_14210,2.0);
double _n_i_14099=_a1;
{
d::String _n_m_14100=(d::truth((std::fabs(_n_s_14098)>0.3))?(d::truth((_n_s_14098>0.0))?d::String(u"\\"):d::String(u"/")):d::String(u"|"));
std::optional<d::Array<double,false>> _n_a_14101=std::optional<d::Array<double,false>>(d::at(_n_steep_14083,(_n_i_14099-1.0)));
std::optional<d::Array<double,false>> _n_b_14102=std::optional<d::Array<double,false>>(d::at(_n_steep_14083,(_n_i_14099+1.0)));
if(((((d::truth((_n_m_14100==d::String(u"|")))&&d::truth(d::read(_n_a_14101)))&&d::truth(d::read(_n_b_14102)))&&d::truth((std::fabs((d::at(d::read(_n_a_14101),0.0)-_n_r_14096))==1.0)))&&d::truth((std::fabs((d::at(d::read(_n_b_14102),0.0)-_n_r_14096))==1.0)))){d::check_cancel();double _n_bow_14103=(_n_x_14097-((d::at(d::read(_n_a_14101),1.0)+d::at(d::read(_n_b_14102),1.0))/2.0));
if(d::truth((_n_bow_14103>0.1))){d::check_cancel();(void)((_n_m_14100=d::String(u")")));
}else {d::check_cancel();if(d::truth((_n_bow_14103<(-d::number(0.1))))){d::check_cancel();(void)((_n_m_14100=d::String(u"(")));
}
}
}
(void)(([&](){auto _n_argument_14211=_n_r_14096;auto _n_argument_14212=std::floor((_n_x_14097/_n_W_13991));auto _n_argument_14213=_n_m_14100;return _n_put_14079(_n_argument_14211,_n_argument_14212,_n_argument_14213);})());

}
}));

}
}

struct Native_hourglass final:ascii::Piece{
double _n_cols_14023{};
double _n_rows_14024{};
double _n_N_14025{};
double _n_CX_14026{};
double _n_CY_14027{};
double _n_pc_14028{};
double _n_mid_14029{};
d::Array<d::Array<d::String,false>,false> _n_still_14031{};
std::function<d::String(double,std::shared_ptr<_n_Record_14175>)> _render;
d::Array<d::String,false> _n_shell_14030(bool _a0,double _a1){bool _n_side_14104=_a0;
double _n_lift_14105=_a1;
{
d::Array<d::String,false> _n_g_14106=d::Array<d::String,false>(size_t(this->_n_N_14025)).fill(d::String(u""));
d::Array<int8_t,true> _n_by_14107=d::Array<int8_t,true>(size_t(this->_n_N_14025));
auto _n_put_14108=[=]( double _a0,double _a1,d::String _a2) mutable ->std::variant<d::String,bool>{double _n_r_14109=_a0;
double _n_c_14110=_a1;
d::String _n_m_14111=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_14229=([&]()->bool{auto _n_logical_14233=([&]()->bool{auto _n_logical_14234=([&]()->bool{auto _n_logical_14235=(_n_r_14109>=0.0);return d::truth(_n_logical_14235)?(_n_r_14109<this->_n_rows_14024):_n_logical_14235;})();return d::truth(_n_logical_14234)?(_n_c_14110>=0.0):_n_logical_14234;})();return d::truth(_n_logical_14233)?(_n_c_14110<this->_n_cols_14023):_n_logical_14233;})();return d::truth(_n_logical_14229)?std::variant<d::String,bool>(([&](){auto&& _n_array_14230=_n_g_14106;auto _n_index_14231=((_n_r_14109*this->_n_cols_14023)+_n_c_14110);auto _n_value_14232=_n_m_14111;d::put(_n_array_14230,_n_index_14231,_n_value_14232);return _n_value_14232;})()):std::variant<d::String,bool>(_n_logical_14229);})();};
auto _n_at_14112=[&]( double _a0,double _a1) mutable ->d::Array<double,false>{double _n_u_14113=_a0;
double _n_v_14114=_a1;
return (d::truth(_n_side_14104)?d::Array<double,false>{(this->_n_CX_14026+_n_u_14113),(this->_n_CY_14027+_n_v_14114)}:d::Array<double,false>{(this->_n_CX_14026+_n_v_14114),((this->_n_CY_14027-(_n_lift_14105*_n_H_13992))-_n_u_14113)});};
for(auto &&_n_item_14236:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_sv_14115=_n_item_14236;
{
d::Array<d::Array<double,false>,false> _n_pts_14116=d::Array<d::Array<double,false>,false>{};
{double _n_u_14117=(-d::number(_n_L_13993));
for(;d::truth((_n_u_14117<=(_n_L_13993+1e-9)));(void)((_n_u_14117=(_n_u_14117+0.04)))){d::check_cancel();(void)(_n_pts_14116.push(([&](){auto _n_argument_14237=_n_u_14117;auto _n_argument_14238=(_n_sv_14115*_n_w_14007(_n_u_14117));return _n_at_14112(_n_argument_14237,_n_argument_14238);})()));
}}
(void)(_n_trace_14022(_n_pts_14116,[=]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_14118=_a0;
double _n_c_14119=_a1;
d::String _n_m_14120=_a2;
{
double _n_i_14121=((_n_r_14118*this->_n_cols_14023)+_n_c_14119);
bool _n_flat_14122=d::includes(d::String(u"'-._"),_n_m_14120);
(void)(_n_put_14108(_n_r_14118,_n_c_14119,((d::truth(_n_flat_14122)&&d::truth((d::at(_n_by_14107,_n_i_14121)==(-d::number(_n_sv_14115)))))?d::String(u"="):_n_m_14120)));
if(((d::truth(_n_flat_14122)&&d::truth((_n_i_14121>=0.0)))&&d::truth((_n_i_14121<this->_n_N_14025)))){d::check_cancel();(void)(([&](){auto&& _n_array_14239=_n_by_14107;auto _n_index_14240=_n_i_14121;auto _n_value_14241=(d::truth((d::at(_n_by_14107,_n_i_14121)==(-d::number(_n_sv_14115))))?2.0:_n_sv_14115);d::put(_n_array_14239,_n_index_14240,_n_value_14241);return _n_value_14241;})());
}

}
}));

}
}
double _n_n0_14123=d::round(((this->_n_CY_14027/_n_H_13992)-0.5));
if(d::truth((!d::truth(_n_side_14104)))){d::check_cancel();double _n_top_14124=((_n_n0_14123-_n_lift_14105)-8.0);
double _n_bot_14125=((_n_n0_14123-_n_lift_14105)+8.0);
double _n_hw_14126=(this->_n_pc_14028+2.0);
{double _n_c_14127=(this->_n_mid_14029-_n_hw_14126);
for(;d::truth((_n_c_14127<=(this->_n_mid_14029+_n_hw_14126)));(void)((_n_c_14127++))){d::check_cancel();double _n_end_14128=(d::truth((_n_c_14127==(this->_n_mid_14029-_n_hw_14126)))?0.0:(d::truth((_n_c_14127==(this->_n_mid_14029+_n_hw_14126)))?1.0:(-d::number(1.0))));
bool _n_post_14129=(std::fabs((_n_c_14127-this->_n_mid_14029))==this->_n_pc_14028);
(void)(_n_put_14108((_n_top_14124-1.0),_n_c_14127,(d::truth((_n_end_14128<0.0))?d::String(u"═"):d::at(d::String(u"╒╕"),_n_end_14128))));
(void)(_n_put_14108(_n_top_14124,_n_c_14127,(d::truth((_n_end_14128<0.0))?(d::truth(_n_post_14129)?d::String(u"╤"):d::String(u"═")):d::at(d::String(u"╘╛"),_n_end_14128))));
(void)(_n_put_14108(_n_bot_14125,_n_c_14127,(d::truth((_n_end_14128<0.0))?(d::truth(_n_post_14129)?d::String(u"╧"):d::String(u"═")):d::at(d::String(u"╒╕"),_n_end_14128))));
(void)(_n_put_14108((_n_bot_14125+1.0),_n_c_14127,(d::truth((_n_end_14128<0.0))?d::String(u"═"):d::at(d::String(u"╘╛"),_n_end_14128))));
}}
{double _n_r_14130=(_n_top_14124+1.0);
for(;d::truth((_n_r_14130<_n_bot_14125));(void)((_n_r_14130++))){d::check_cancel();(void)((_n_put_14108(_n_r_14130,(this->_n_mid_14029-this->_n_pc_14028),d::String(u"│")),_n_put_14108(_n_r_14130,(this->_n_mid_14029+this->_n_pc_14028),d::String(u"│"))));
}}
}else {d::check_cancel();double _n_hr_14131=d::round((_n_PX_13997/_n_H_13992));
d::Array<double,false> _n_ends_14132=d::Array<double,false>{(this->_n_mid_14029-16.0),(this->_n_mid_14029+16.0)};
for(auto &&_n_item_14242:d::entries(_n_ends_14132)){d::check_cancel();auto _n_binding_14243=_n_item_14242;
double _n_k_14133=d::at(_n_binding_14243,0.0);
double _n_c_14134=d::at(_n_binding_14243,1.0);
{
{double _n_r_14135=((_n_n0_14123-_n_hr_14131)-1.0);
for(;d::truth((_n_r_14135<=((_n_n0_14123+_n_hr_14131)+1.0)));(void)((_n_r_14135++))){d::check_cancel();double _n_edge_14136=(d::truth((_n_r_14135==((_n_n0_14123-_n_hr_14131)-1.0)))?0.0:(d::truth((_n_r_14135==((_n_n0_14123+_n_hr_14131)+1.0)))?1.0:(-d::number(1.0))));
bool _n_post_14137=(std::fabs((_n_r_14135-_n_n0_14123))==_n_hr_14131);
(void)(_n_put_14108(_n_r_14135,(_n_c_14134-1.0),(d::truth((_n_edge_14136<0.0))?((d::truth(_n_post_14137)&&d::truth(_n_k_14133))?d::String(u"╢"):d::String(u"║")):d::at(d::String(u"╓╙"),_n_edge_14136))));
(void)(_n_put_14108(_n_r_14135,_n_c_14134,(d::truth((_n_edge_14136<0.0))?d::String(u" "):d::String(u"─"))));
(void)(_n_put_14108(_n_r_14135,(_n_c_14134+1.0),(d::truth((_n_edge_14136<0.0))?((d::truth(_n_post_14137)&&d::truth((!d::truth(_n_k_14133))))?d::String(u"╟"):d::String(u"║")):d::at(d::String(u"╖╜"),_n_edge_14136))));
}}

}
}
{double _n_c_14138=(d::at(_n_ends_14132,0.0)+2.0);
for(;d::truth((_n_c_14138<(d::at(_n_ends_14132,1.0)-1.0)));(void)((_n_c_14138++))){d::check_cancel();(void)((_n_put_14108((_n_n0_14123-_n_hr_14131),_n_c_14138,d::String(u"─")),_n_put_14108((_n_n0_14123+_n_hr_14131),_n_c_14138,d::String(u"─"))));
}}
}
return _n_g_14106;

}
}

explicit Native_hourglass(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_14214=_n_meta_13989;
this->_n_cols_14023=_n_binding_14214->_p_cols;
this->_n_rows_14024=_n_binding_14214->_p_rows;
this->_n_N_14025=(this->_n_cols_14023*this->_n_rows_14024);
this->_n_CX_14026=((this->_n_cols_14023/2.0)*_n_W_13991);
this->_n_CY_14027=((this->_n_rows_14024/2.0)*_n_H_13992);
this->_n_pc_14028=d::round((_n_PX_13997/_n_W_13991));
this->_n_mid_14029=std::floor((this->_n_cols_14023/2.0));
this->_n_still_14031=d::Array<d::Array<d::String,false>,false>{this->_n_shell_14030(false,0.0),this->_n_shell_14030(false,1.0),this->_n_shell_14030(true,0.0)};
_render=[=]( double _a0,std::shared_ptr<_n_Record_14175> _a1) mutable ->d::String{double _n_t_14139=_a0;
{
double _n_k_14140=d::mod((d::mod((_n_START_14004+_n_t_14139),_n_CYCLE_14003)+_n_CYCLE_14003),_n_CYCLE_14003);
double _n_turn_14141=((_n_k_14140-_n_RUN_14000)-_n_HOLD_14001);
double _n_phase_14142=(d::truth((_n_turn_14141<0.0))?(-d::number(1.0)):(d::truth((_n_turn_14141<d::at(_n_TURN_14002,0.0)))?0.0:(d::truth((_n_turn_14141<(d::at(_n_TURN_14002,0.0)+d::at(_n_TURN_14002,1.0))))?1.0:2.0)));
bool _n_side_14143=(_n_phase_14142==1.0);
double _n_lift_14144=((d::truth((_n_phase_14142==0.0))||d::truth((_n_phase_14142==2.0)))?1.0:0.0);
double _n_left_14145=(d::truth((_n_phase_14142==2.0))?1.0:_n_clamp_14009((1.0-(_n_k_14140/_n_RUN_14000))));
std::function<bool(double,double)> _n_sand_14146{};
if(d::truth(_n_side_14143)){d::check_cancel();(void)((_n_sand_14146=[=]( double _a0,double _a1) mutable ->bool{double _n_u_14149=_a0;
double _n_v_14150=_a1;
return ([&]()->bool{auto _n_logical_14215=(_n_u_14149<0.0);return d::truth(_n_logical_14215)?(_n_v_14150>_n_SIDE_14021):_n_logical_14215;})();}));
}else {d::check_cancel();std::function<bool(double,double)> _n_top_14151=_n_topAt_14013(_n_table_14020(_n_CRATER_14018,_n_left_14145));
std::function<bool(double,double)> _n_heap_14152=_n_heapAt_14014(_n_table_14020(_n_HEAP_14019,(1.0-_n_left_14145)));
(void)((_n_sand_14146=[=]( double _a0,double _a1) mutable ->bool{double _n_u_14153=_a0;
double _n_v_14154=_a1;
return (d::truth((_n_u_14153>0.0))?_n_top_14151(_n_u_14153,_n_v_14154):_n_heap_14152((-d::number(_n_u_14153)),_n_v_14154));}));
}
d::Array<uint8_t,true> _n_bits_14155=d::Array<uint8_t,true>(size_t(this->_n_N_14025));
{double _n_i_14156=0.0;
for(;d::truth((_n_i_14156<this->_n_N_14025));(void)((_n_i_14156++))){d::check_cancel();double _n_hi_14157=0.0;
double _n_lo_14158=0.0;
for(auto &&_n_item_14216:_n_LOOKS_14006){d::check_cancel();auto _n_binding_14217=_n_item_14216;
double _n_a_14159=d::at(_n_binding_14217,0.0);
double _n_b_14160=d::at(_n_binding_14217,1.0);
{
double _n_x_14161=(((d::mod(_n_i_14156,this->_n_cols_14023)+_n_a_14159)*_n_W_13991)-this->_n_CX_14026);
double _n_y_14162=((this->_n_CY_14027-(_n_lift_14144*_n_H_13992))-((std::floor((_n_i_14156/this->_n_cols_14023))+_n_b_14160)*_n_H_13992));
double _n_u_14163=(d::truth(_n_side_14143)?_n_x_14161:_n_y_14162);
double _n_v_14164=(d::truth(_n_side_14143)?(-d::number(_n_y_14162)):_n_x_14161);
if(((d::truth((std::fabs(_n_u_14163)<_n_L_13993))&&d::truth(([&](){auto _n_left_14218=std::fabs(_n_v_14164);auto _n_right_14219=(_n_w_14007(_n_u_14163)-0.15);return (_n_left_14218<_n_right_14219);})()))&&d::truth(_n_sand_14146(_n_u_14163,_n_v_14164)))){d::check_cancel();(void)((d::truth((_n_b_14160<0.5))?(_n_hi_14157++):(_n_lo_14158++)));
}

}
}
(void)(([&](){auto&& _n_array_14220=_n_bits_14155;auto _n_index_14221=_n_i_14156;auto _n_value_14222=double(d::i32((d::truth((_n_hi_14157>2.0))?1.0:0.0))|d::i32((d::truth((_n_lo_14158>2.0))?2.0:0.0)));d::put(_n_array_14220,_n_index_14221,_n_value_14222);return _n_value_14222;})());
}}
if(d::truth((_n_phase_14142<0.0))){d::check_cancel();double _n_peak_14165=((-d::number(_n_L_13993))+_n_table_14020(_n_HEAP_14019,(1.0-_n_left_14145)));
{double _n_i_14166=([&](){auto _n_argument_14223=0.0;auto _n_argument_14224=std::floor(((_n_k_14140-0.8)/_n_DT_14005));return d::maximum({_n_argument_14223,_n_argument_14224});})();
for(;d::truth(((_n_i_14166*_n_DT_14005)<=d::minimum({_n_k_14140,_n_RUN_14000})));(void)((_n_i_14166++))){d::check_cancel();double _n_a_14167=((_n_k_14140-(_n_i_14166*_n_DT_14005))-((_n_hash_14008((_n_i_14166+7919.0))*_n_DT_14005)*0.7));
double _n_u_14168=((0.1-(3.0*_n_a_14167))-((18.0*_n_a_14167)*_n_a_14167));
if(((d::truth((_n_hash_14008(_n_i_14166)<0.18))||d::truth((_n_a_14167<0.0)))||d::truth((_n_u_14168<_n_peak_14165)))){d::check_cancel();continue;
}
double _n_y_14169=((this->_n_CY_14027-_n_u_14168)/_n_H_13992);
(void)(([&](){auto&& _n_array_14225=_n_bits_14155;auto _n_index_14226=((std::floor(_n_y_14169)*this->_n_cols_14023)+this->_n_mid_14029);auto _n_value_14227=double(d::i32(d::at(_n_array_14225,_n_index_14226))|d::i32((d::truth((d::mod(_n_y_14169,1.0)<0.5))?1.0:2.0)));d::put(_n_array_14225,_n_index_14226,_n_value_14227);return _n_value_14227;})());
}}
}
d::Array<d::String,false> _n_glass_14170=d::at(this->_n_still_14031,(d::truth(_n_side_14143)?2.0:_n_lift_14144));
d::Array<d::String,false> _n_lines_14171=d::Array<d::String,false>{};
{double _n_r_14172=0.0;
for(;d::truth((_n_r_14172<this->_n_rows_14024));(void)((_n_r_14172++))){d::check_cancel();d::String _n_line_14173=d::String(u"");
{double _n_c_14174=0.0;
for(;d::truth((_n_c_14174<this->_n_cols_14023));(void)((_n_c_14174++))){d::check_cancel();(void)((_n_line_14173=(d::string(_n_line_14173)+d::string(([&]()->d::String{auto _n_logical_14228=d::at(_n_glass_14170,((_n_r_14172*this->_n_cols_14023)+_n_c_14174));return d::truth(_n_logical_14228)?_n_logical_14228:d::at(d::String(u" '.:"),d::at(_n_bits_14155,((_n_r_14172*this->_n_cols_14023)+_n_c_14174)));})()))));
}}
(void)(_n_lines_14171.push(_n_line_14173));
}}
return d::join(_n_lines_14171,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("hourglass").cols)*ascii::catalog_meta("hourglass").rows);auto _env=std::make_shared<_n_Record_14175>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &hourglass_meta(){return catalog_meta("hourglass");}
std::unique_ptr<Piece> make_hourglass(const AsciiPieceOptions &o){return std::make_unique<Native_hourglass>(o);}
}
