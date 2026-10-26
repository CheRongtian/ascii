// Direct, statically typed C++ from src/pieces/harmonograph.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13275;
struct _n_Record_13281;
struct _n_Record_13288;
struct _n_Record_13290;
struct _n_Record_13356;
struct _n_Record_13390;
struct _n_Record_13275{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13275> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13275>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13281{
double _p_fx{};
double _p_px{};
double _p_fy{};
double _p_py{};
double _p_lean{};
double _p_passes{};
double _p_end{};
static std::shared_ptr<_n_Record_13281> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13281>();out->_p_fx=d::decode<double>(j["fx"]);out->_p_px=d::decode<double>(j["px"]);out->_p_fy=d::decode<double>(j["fy"]);out->_p_py=d::decode<double>(j["py"]);out->_p_lean=d::decode<double>(j["lean"]);out->_p_passes=d::decode<double>(j["passes"]);out->_p_end=d::decode<double>(j["end"]);return out;}
};
struct _n_Record_13288{
double _p_c{};
double _p_t0{};
double _p_t1{};
double _p_ex{};
double _p_ey{};
double _p_lx{};
double _p_ly{};
double _p_x0{};
double _p_x1{};
double _p_y0{};
double _p_y1{};
double _p_sum{};
double _p_n{};
double _p_len{};
std::optional<d::String> _p_g{};
static std::shared_ptr<_n_Record_13288> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13288>();out->_p_c=d::decode<double>(j["c"]);out->_p_t0=d::decode<double>(j["t0"]);out->_p_t1=d::decode<double>(j["t1"]);out->_p_ex=d::decode<double>(j["ex"]);out->_p_ey=d::decode<double>(j["ey"]);out->_p_lx=d::decode<double>(j["lx"]);out->_p_ly=d::decode<double>(j["ly"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_y1=d::decode<double>(j["y1"]);out->_p_sum=d::decode<double>(j["sum"]);out->_p_n=d::decode<double>(j["n"]);out->_p_len=d::decode<double>(j["len"]);out->_p_g=d::decode<std::optional<d::String>>(j["g"]);return out;}
};
struct _n_Record_13290{
double _p_end{};
d::Array<double,true> _p_xs{};
d::Array<double,true> _p_ys{};
d::Array<double,false> _p_cells{};
d::Array<double,false> _p_times{};
d::Array<d::String,false> _p_marks{};
d::Array<d::String,false> _p_ink{};
d::Array<double,true> _p_when{};
static std::shared_ptr<_n_Record_13290> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13290>();out->_p_end=d::decode<double>(j["end"]);out->_p_xs=d::decode<d::Array<double,true>>(j["xs"]);out->_p_ys=d::decode<d::Array<double,true>>(j["ys"]);out->_p_cells=d::decode<d::Array<double,false>>(j["cells"]);out->_p_times=d::decode<d::Array<double,false>>(j["times"]);out->_p_marks=d::decode<d::Array<d::String,false>>(j["marks"]);out->_p_ink=d::decode<d::Array<d::String,false>>(j["ink"]);out->_p_when=d::decode<d::Array<double,true>>(j["when"]);return out;}
};
struct _n_Record_13356{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13356> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13356>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_13390{
double _p_c{};
double _p_t0{};
double _p_t1{};
double _p_ex{};
double _p_ey{};
double _p_lx{};
double _p_ly{};
double _p_x0{};
double _p_x1{};
double _p_y0{};
double _p_y1{};
double _p_sum{};
double _p_n{};
double _p_len{};
static std::shared_ptr<_n_Record_13390> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13390>();out->_p_c=d::decode<double>(j["c"]);out->_p_t0=d::decode<double>(j["t0"]);out->_p_t1=d::decode<double>(j["t1"]);out->_p_ex=d::decode<double>(j["ex"]);out->_p_ey=d::decode<double>(j["ey"]);out->_p_lx=d::decode<double>(j["lx"]);out->_p_ly=d::decode<double>(j["ly"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_y1=d::decode<double>(j["y1"]);out->_p_sum=d::decode<double>(j["sum"]);out->_p_n=d::decode<double>(j["n"]);out->_p_len=d::decode<double>(j["len"]);return out;}
};
d::String _n_glyph_13287(std::shared_ptr<_n_Record_13288> _a0);
std::shared_ptr<_n_Record_13290> _n_sheet_13289(std::shared_ptr<_n_Record_13281> _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_13275> _n_meta_13274=[](){return ([&](){auto _n_object_13359=std::make_shared<_n_Record_13275>();_n_object_13359->_p_name=d::String(u"harmonograph");_n_object_13359->_p_category=d::String(u"physics");_n_object_13359->_p_note=d::String(u"a pen on two decaying pendulums winding a figure inward");_n_object_13359->_p_cols=64.0;_n_object_13359->_p_rows=28.0;_n_object_13359->_p_fps=30.0;return _n_object_13359;})();}();
const double _n_W_13276=[](){return 0.6;}();
const double _n_H_13277=[](){return 1.2;}();
const double _n_STEP_13278=[](){return 0.0015;}();
const double _n_NEAR_13279=[](){return 0.25;}();
d::Array<std::shared_ptr<_n_Record_13281>,false> _n_FIGURES_13280=[](){return d::Array<std::shared_ptr<_n_Record_13281>,false>{([&](){auto _n_object_13362=std::make_shared<_n_Record_13281>();_n_object_13362->_p_fx=1.0;_n_object_13362->_p_px=(ascii::PI/2.0);_n_object_13362->_p_fy=1.02;_n_object_13362->_p_py=0.0;_n_object_13362->_p_lean=1.15;_n_object_13362->_p_passes=9.0;_n_object_13362->_p_end=0.12;return _n_object_13362;})(),([&](){auto _n_object_13364=std::make_shared<_n_Record_13281>();_n_object_13364->_p_fx=2.006;_n_object_13364->_p_px=0.0;_n_object_13364->_p_fy=1.0;_n_object_13364->_p_py=0.0;_n_object_13364->_p_lean=1.0;_n_object_13364->_p_passes=6.0;_n_object_13364->_p_end=0.15;return _n_object_13364;})(),([&](){auto _n_object_13366=std::make_shared<_n_Record_13281>();_n_object_13366->_p_fx=1.0;_n_object_13366->_p_px=(ascii::PI/4.0);_n_object_13366->_p_fy=0.985;_n_object_13366->_p_py=0.0;_n_object_13366->_p_lean=0.9;_n_object_13366->_p_passes=8.0;_n_object_13366->_p_end=0.15;return _n_object_13366;})()};}();
double _n_DRAW_13282{};
double _n_SHOW_13283{};
double _n_LIFT_13284{};
const bool _n_unpack_init_13367=[](){auto _n_binding_13368=std::array<double,3>{10.0,2.5,3.0};
_n_DRAW_13282=d::at(_n_binding_13368,0.0);
_n_SHOW_13283=d::at(_n_binding_13368,1.0);
_n_LIFT_13284=d::at(_n_binding_13368,2.0);
return true;}();
const double _n_PERIOD_13285=[](){return (_n_DRAW_13282+_n_SHOW_13283);}();
const double _n_START_13286=[](){return 6.0;}();
d::String _n_glyph_13287(std::shared_ptr<_n_Record_13288> _a0){std::shared_ptr<_n_Record_13288> _n_s_13295=_a0;
{
double _n_m_13296=0.06;
bool _n_right_13297=((_n_s_13295->_p_x1-d::maximum({_n_s_13295->_p_ex,_n_s_13295->_p_lx}))>_n_m_13296);
bool _n_left_13298=((d::minimum({_n_s_13295->_p_ex,_n_s_13295->_p_lx})-_n_s_13295->_p_x0)>_n_m_13296);
bool _n_turnY_13299=([&]()->bool{auto _n_logical_13369=((_n_s_13295->_p_y1-d::maximum({_n_s_13295->_p_ey,_n_s_13295->_p_ly}))>_n_m_13296);return d::truth(_n_logical_13369)?_n_logical_13369:((d::minimum({_n_s_13295->_p_ey,_n_s_13295->_p_ly})-_n_s_13295->_p_y0)>_n_m_13296);})();
double _n_span_13300=(_n_s_13295->_p_y1-_n_s_13295->_p_y0);
double _n_mid_13301=(_n_s_13295->_p_sum/_n_s_13295->_p_n);
d::String _n_flat_13302=(d::truth((_n_mid_13301<0.3))?d::String(u"'"):(d::truth((_n_mid_13301<0.6))?d::String(u"-"):(d::truth((_n_mid_13301<0.82))?d::String(u"."):d::String(u"_"))));
if(((d::truth(([&]()->bool{auto _n_logical_13370=_n_right_13297;return d::truth(_n_logical_13370)?_n_logical_13370:_n_left_13298;})())&&d::truth((!d::truth(([&]()->bool{auto _n_logical_13371=_n_right_13297;return d::truth(_n_logical_13371)?_n_left_13298:_n_logical_13371;})()))))&&d::truth(((_n_span_13300*_n_H_13277)>((0.25*(_n_s_13295->_p_x1-_n_s_13295->_p_x0))*_n_W_13276))))){d::check_cancel();return (d::truth(_n_right_13297)?d::String(u")"):d::String(u"("));
}
if(d::truth(_n_turnY_13299)){d::check_cancel();return _n_flat_13302;
}
double _n_dx_13303=((_n_s_13295->_p_lx-_n_s_13295->_p_ex)*_n_W_13276);
double _n_dy_13304=((_n_s_13295->_p_ly-_n_s_13295->_p_ey)*_n_H_13277);
if(d::truth(([&](){auto _n_left_13372=std::fabs(_n_dx_13303);auto _n_right_13373=(0.35*std::fabs(_n_dy_13304));return (_n_left_13372<_n_right_13373);})())){d::check_cancel();return ((d::truth((_n_s_13295->_p_y0<0.5))&&d::truth((_n_s_13295->_p_y1>=0.5)))?d::String(u"|"):d::String(u""));
}
if(d::truth((_n_span_13300<0.45))){d::check_cancel();return _n_flat_13302;
}
return (d::truth(((_n_dx_13303*_n_dy_13304)>0.0))?d::String(u"\\"):d::String(u"/"));

}
}

std::shared_ptr<_n_Record_13290> _n_sheet_13289(std::shared_ptr<_n_Record_13281> _a0,double _a1,double _a2){std::shared_ptr<_n_Record_13281> _n_f_13305=_a0;
double _n_cols_13306=_a1;
double _n_rows_13307=_a2;
{
double _n_end_13308=((2.0*ascii::PI)*_n_f_13305->_p_passes);
double _n_n_13309=(std::floor((_n_end_13308/_n_STEP_13278))+1.0);
d::Array<double,true> _n_xs_13310=d::Array<double,true>(size_t(_n_n_13309));
d::Array<double,true> _n_ys_13311=d::Array<double,true>(size_t(_n_n_13309));
auto _n_binding_13374=std::array<double,4>{0.0,0.0,0.0,0.0};
double _n_x0_13312=d::at(_n_binding_13374,0.0);
double _n_x1_13313=d::at(_n_binding_13374,1.0);
double _n_y0_13314=d::at(_n_binding_13374,2.0);
double _n_y1_13315=d::at(_n_binding_13374,3.0);
{double _n_i_13316=0.0;
for(;d::truth((_n_i_13316<_n_n_13309));(void)((_n_i_13316++))){d::check_cancel();double _n_t_13317=(_n_i_13316*_n_STEP_13278);
double _n_a_13318=(1.0-(((1.0-_n_f_13305->_p_end)*_n_t_13317)/_n_end_13308));
(void)(([&](){auto&& _n_array_13375=_n_xs_13310;auto _n_index_13376=_n_i_13316;auto _n_value_13377=(_n_a_13318*std::sin(((_n_f_13305->_p_fx*_n_t_13317)+_n_f_13305->_p_px)));d::put(_n_array_13375,_n_index_13376,_n_value_13377);return _n_value_13377;})());
(void)(([&](){auto&& _n_array_13378=_n_ys_13311;auto _n_index_13379=_n_i_13316;auto _n_value_13380=((-d::number(std::pow(_n_a_13318,_n_f_13305->_p_lean)))*std::sin(((_n_f_13305->_p_fy*_n_t_13317)+_n_f_13305->_p_py)));d::put(_n_array_13378,_n_index_13379,_n_value_13380);return _n_value_13380;})());
(void)(([&](){auto _n_unpack_13381=std::array<double,4>{d::minimum({_n_x0_13312,d::at(_n_xs_13310,_n_i_13316)}),d::maximum({_n_x1_13313,d::at(_n_xs_13310,_n_i_13316)}),d::minimum({_n_y0_13314,d::at(_n_ys_13311,_n_i_13316)}),d::maximum({_n_y1_13315,d::at(_n_ys_13311,_n_i_13316)})};_n_x0_13312=d::at(_n_unpack_13381,0.0);_n_x1_13313=d::at(_n_unpack_13381,1.0);_n_y0_13314=d::at(_n_unpack_13381,2.0);_n_y1_13315=d::at(_n_unpack_13381,3.0);return _n_unpack_13381;})());
}}
double _n_sx_13319=(((0.8*_n_cols_13306)-1.0)/(_n_x1_13313-_n_x0_13312));
double _n_sy_13320=(((0.8*_n_rows_13307)-0.6)/(_n_y1_13315-_n_y0_13314));
{double _n_i_13321=0.0;
for(;d::truth((_n_i_13321<_n_n_13309));(void)((_n_i_13321++))){d::check_cancel();(void)((([&](){auto&& _n_array_13382=_n_xs_13310;auto _n_index_13383=_n_i_13321;auto _n_value_13384=((_n_cols_13306/2.0)+((d::at(_n_xs_13310,_n_i_13321)-((_n_x0_13312+_n_x1_13313)/2.0))*_n_sx_13319));d::put(_n_array_13382,_n_index_13383,_n_value_13384);return _n_value_13384;})(),([&](){auto&& _n_array_13385=_n_ys_13311;auto _n_index_13386=_n_i_13321;auto _n_value_13387=((_n_rows_13307/2.0)+((d::at(_n_ys_13311,_n_i_13321)-((_n_y0_13314+_n_y1_13315)/2.0))*_n_sy_13320));d::put(_n_array_13385,_n_index_13386,_n_value_13387);return _n_value_13387;})()));
}}
d::Array<std::shared_ptr<_n_Record_13288>,false> _n_strokes_13322=d::Array<std::shared_ptr<_n_Record_13288>,false>{};
d::Array<int32_t,true> _n_open_13323=d::Array<int32_t,true>(size_t((_n_cols_13306*_n_rows_13307))).fill((-d::number(1.0)));
double _n_px_13324=d::at(_n_xs_13310,0.0);
double _n_py_13325=d::at(_n_ys_13311,0.0);
{double _n_i_13326=0.0;
for(;d::truth((_n_i_13326<_n_n_13309));(void)((_n_i_13326++))){d::check_cancel();double _n_x_13327=d::at(_n_xs_13310,_n_i_13326);
double _n_y_13328=d::at(_n_ys_13311,_n_i_13326);
double _n_t_13329=(_n_i_13326*_n_STEP_13278);
double _n_c_13330=([&](){auto _n_left_13388=(std::floor(_n_y_13328)*_n_cols_13306);auto _n_right_13389=std::floor(_n_x_13327);return (_n_left_13388+_n_right_13389);})();
double _n_lx_13331=(_n_x_13327-std::floor(_n_x_13327));
double _n_ly_13332=(_n_y_13328-std::floor(_n_y_13328));
std::shared_ptr<_n_Record_13288> _n_s_13333=(d::truth((d::at(_n_open_13323,_n_c_13330)>=0.0))?d::at(_n_strokes_13322,d::at(_n_open_13323,_n_c_13330)):std::shared_ptr<_n_Record_13288>{});
if((d::truth((!d::truth(_n_s_13333)))||d::truth(((_n_t_13329-_n_s_13333->_p_t1)>_n_NEAR_13279)))){d::check_cancel();(void)((_n_s_13333=([&](){auto _n_object_13392=std::make_shared<_n_Record_13288>();_n_object_13392->_p_c=_n_c_13330;_n_object_13392->_p_t0=_n_t_13329;_n_object_13392->_p_t1=_n_t_13329;_n_object_13392->_p_ex=_n_lx_13331;_n_object_13392->_p_ey=_n_ly_13332;_n_object_13392->_p_lx=_n_lx_13331;_n_object_13392->_p_ly=_n_ly_13332;_n_object_13392->_p_x0=_n_lx_13331;_n_object_13392->_p_x1=_n_lx_13331;_n_object_13392->_p_y0=_n_ly_13332;_n_object_13392->_p_y1=_n_ly_13332;_n_object_13392->_p_sum=0.0;_n_object_13392->_p_n=0.0;_n_object_13392->_p_len=0.0;return _n_object_13392;})()));
(void)(([&](){auto&& _n_array_13393=_n_open_13323;auto _n_index_13394=_n_c_13330;auto _n_value_13395=(_n_strokes_13322.push(_n_s_13333)-1.0);d::put(_n_array_13393,_n_index_13394,_n_value_13395);return _n_value_13395;})());
}
(void)((_n_s_13333->_p_len=(_n_s_13333->_p_len+d::hypot(std::initializer_list<double>{((_n_x_13327-_n_px_13324)*_n_W_13276),((_n_y_13328-_n_py_13325)*_n_H_13277)}))));
(void)(([&](){auto _n_unpack_13396=std::array<double,5>{_n_t_13329,_n_lx_13331,_n_ly_13332,(_n_s_13333->_p_sum+_n_ly_13332),(_n_s_13333->_p_n+1.0)};_n_s_13333->_p_t1=d::at(_n_unpack_13396,0.0);_n_s_13333->_p_lx=d::at(_n_unpack_13396,1.0);_n_s_13333->_p_ly=d::at(_n_unpack_13396,2.0);_n_s_13333->_p_sum=d::at(_n_unpack_13396,3.0);_n_s_13333->_p_n=d::at(_n_unpack_13396,4.0);return _n_unpack_13396;})());
(void)(([&](){auto _n_unpack_13397=std::array<double,4>{d::minimum({_n_s_13333->_p_x0,_n_lx_13331}),d::maximum({_n_s_13333->_p_x1,_n_lx_13331}),d::minimum({_n_s_13333->_p_y0,_n_ly_13332}),d::maximum({_n_s_13333->_p_y1,_n_ly_13332})};_n_s_13333->_p_x0=d::at(_n_unpack_13397,0.0);_n_s_13333->_p_x1=d::at(_n_unpack_13397,1.0);_n_s_13333->_p_y0=d::at(_n_unpack_13397,2.0);_n_s_13333->_p_y1=d::at(_n_unpack_13397,3.0);return _n_unpack_13397;})());
(void)(((_n_px_13324=_n_x_13327),(_n_py_13325=_n_y_13328)));
}}
d::Array<std::shared_ptr<_n_Record_13288>,false> _n_keep_13334=d::filter(_n_strokes_13322,[&]( std::shared_ptr<_n_Record_13288> _a0) mutable ->std::variant<d::String,bool>{std::shared_ptr<_n_Record_13288> _n_s_13335=_a0;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_13398=(_n_s_13335->_p_len>0.12);return d::truth(_n_logical_13398)?std::variant<d::String,bool>(d::read((_n_s_13335->_p_g=std::optional<d::String>(_n_glyph_13287(_n_s_13335))))):std::variant<d::String,bool>(_n_logical_13398);})();});
d::Array<d::String,false> _n_ink_13336=d::Array<d::String,false>(size_t((_n_cols_13306*_n_rows_13307))).fill(d::String(u" "));
d::Array<double,true> _n_when_13337=d::Array<double,true>(size_t((_n_cols_13306*_n_rows_13307))).fill((-d::number(1.0)));
(void)(d::forEach(_n_keep_13334,[&]( std::shared_ptr<_n_Record_13288> _a0) mutable ->double{std::shared_ptr<_n_Record_13288> _n_s_13338=_a0;
return (([&](){auto&& _n_array_13399=_n_ink_13336;auto _n_index_13400=_n_s_13338->_p_c;auto _n_value_13401=d::read(_n_s_13338->_p_g);d::put(_n_array_13399,_n_index_13400,_n_value_13401);return _n_value_13401;})(),([&](){auto&& _n_array_13402=_n_when_13337;auto _n_index_13403=_n_s_13338->_p_c;auto _n_value_13404=_n_s_13338->_p_t0;d::put(_n_array_13402,_n_index_13403,_n_value_13404);return _n_value_13404;})());}));
return ([&](){auto _n_object_13406=std::make_shared<_n_Record_13290>();_n_object_13406->_p_end=_n_end_13308;_n_object_13406->_p_xs=_n_xs_13310;_n_object_13406->_p_ys=_n_ys_13311;_n_object_13406->_p_cells=d::map(_n_keep_13334,[&]( std::shared_ptr<_n_Record_13288> _a0) mutable ->double{std::shared_ptr<_n_Record_13288> _n_s_13339=_a0;
return _n_s_13339->_p_c;});_n_object_13406->_p_times=d::map(_n_keep_13334,[&]( std::shared_ptr<_n_Record_13288> _a0) mutable ->double{std::shared_ptr<_n_Record_13288> _n_s_13340=_a0;
return _n_s_13340->_p_t0;});_n_object_13406->_p_marks=d::map(_n_keep_13334,[&]( std::shared_ptr<_n_Record_13288> _a0) mutable ->d::String{std::shared_ptr<_n_Record_13288> _n_s_13341=_a0;
return d::read(_n_s_13341->_p_g);});_n_object_13406->_p_ink=_n_ink_13336;_n_object_13406->_p_when=_n_when_13337;return _n_object_13406;})();

}
}

struct Native_harmonograph final:ascii::Piece{
double _n_cols_13291{};
double _n_rows_13292{};
d::Array<d::String,false> _n_out_13293{};
d::Array<std::shared_ptr<_n_Record_13290>,false> _n_sheets_13294{};
std::function<d::String(double,std::shared_ptr<_n_Record_13356>)> _render;

explicit Native_harmonograph(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13407=_n_meta_13274;
this->_n_cols_13291=_n_binding_13407->_p_cols;
this->_n_rows_13292=_n_binding_13407->_p_rows;
this->_n_out_13293=d::Array<d::String,false>(size_t((this->_n_cols_13291*this->_n_rows_13292)));
this->_n_sheets_13294=d::map(_n_FIGURES_13280,[&]( std::shared_ptr<_n_Record_13281> _a0) mutable ->std::shared_ptr<_n_Record_13290>{std::shared_ptr<_n_Record_13281> _n_f_13342=_a0;
return _n_sheet_13289(_n_f_13342,this->_n_cols_13291,this->_n_rows_13292);});
_render=[=]( double _a0,std::shared_ptr<_n_Record_13356> _a1) mutable ->d::String{double _n_t_13343=_a0;
{
double _n_tt_13344=(_n_START_13286+_n_t_13343);
double _n_idx_13345=std::floor((_n_tt_13344/_n_PERIOD_13285));
double _n_local_13346=(_n_tt_13344-(_n_idx_13345*_n_PERIOD_13285));
std::shared_ptr<_n_Record_13290> _n_s_13347=d::at(this->_n_sheets_13294,d::mod(_n_idx_13345,double(this->_n_sheets_13294.size())));
(void)(this->_n_out_13293.fill(d::String(u" ")));
if(d::truth((_n_local_13346<_n_LIFT_13284))){d::check_cancel();std::shared_ptr<_n_Record_13290> _n_old_13348=d::at(this->_n_sheets_13294,d::mod(((_n_idx_13345+double(this->_n_sheets_13294.size()))-1.0),double(this->_n_sheets_13294.size())));
double _n_u_13349=((_n_local_13346/_n_LIFT_13284)*_n_old_13348->_p_end);
{double _n_c_13350=0.0;
for(;d::truth((_n_c_13350<(this->_n_cols_13291*this->_n_rows_13292)));(void)((_n_c_13350++))){d::check_cancel();if(d::truth((d::at(_n_old_13348->_p_when,_n_c_13350)>_n_u_13349))){d::check_cancel();(void)(([&](){auto&& _n_array_13408=this->_n_out_13293;auto _n_index_13409=_n_c_13350;auto _n_value_13410=d::at(_n_old_13348->_p_ink,_n_c_13350);d::put(_n_array_13408,_n_index_13409,_n_value_13410);return _n_value_13410;})());
}
}}
}
double _n_tau_13351=((d::minimum({_n_local_13346,_n_DRAW_13282})/_n_DRAW_13282)*_n_s_13347->_p_end);
{double _n_i_13352=0.0;
for(;(d::truth((_n_i_13352<double(_n_s_13347->_p_cells.size())))&&d::truth((d::at(_n_s_13347->_p_times,_n_i_13352)<=_n_tau_13351)));(void)((_n_i_13352++))){d::check_cancel();(void)(([&](){auto&& _n_array_13411=this->_n_out_13293;auto _n_index_13412=d::at(_n_s_13347->_p_cells,_n_i_13352);auto _n_value_13413=d::at(_n_s_13347->_p_marks,_n_i_13352);d::put(_n_array_13411,_n_index_13412,_n_value_13413);return _n_value_13413;})());
}}
if(d::truth((_n_local_13346<_n_DRAW_13282))){d::check_cancel();double _n_j_13353=([&](){auto _n_argument_13414=(double(_n_s_13347->_p_xs.size())-1.0);auto _n_argument_13415=std::floor((_n_tau_13351/_n_STEP_13278));return d::minimum({_n_argument_13414,_n_argument_13415});})();
(void)(([&](){auto&& _n_array_13416=this->_n_out_13293;auto _n_index_13417=([&](){auto _n_left_13419=(std::floor(d::at(_n_s_13347->_p_ys,_n_j_13353))*this->_n_cols_13291);auto _n_right_13420=std::floor(d::at(_n_s_13347->_p_xs,_n_j_13353));return (_n_left_13419+_n_right_13420);})();auto _n_value_13418=d::String(u"o");d::put(_n_array_13416,_n_index_13417,_n_value_13418);return _n_value_13418;})());
}
d::Array<d::String,false> _n_lines_13354=d::Array<d::String,false>{};
{double _n_r_13355=0.0;
for(;d::truth((_n_r_13355<this->_n_rows_13292));(void)((_n_r_13355++))){d::check_cancel();(void)(_n_lines_13354.push(d::join(this->_n_out_13293.slice((_n_r_13355*this->_n_cols_13291),((_n_r_13355+1.0)*this->_n_cols_13291)),d::String(u""))));
}}
return d::join(_n_lines_13354,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("harmonograph").cols)*ascii::catalog_meta("harmonograph").rows);auto _env=std::make_shared<_n_Record_13356>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &harmonograph_meta(){return catalog_meta("harmonograph");}
std::unique_ptr<Piece> make_harmonograph(const AsciiPieceOptions &o){return std::make_unique<Native_harmonograph>(o);}
}
