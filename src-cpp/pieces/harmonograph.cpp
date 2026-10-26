// Direct, statically typed C++ from src/pieces/harmonograph.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13276;
struct _n_Record_13282;
struct _n_Record_13289;
struct _n_Record_13291;
struct _n_Record_13357;
struct _n_Record_13391;
struct _n_Record_13276{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13276> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13276>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13282{
double _p_fx{};
double _p_px{};
double _p_fy{};
double _p_py{};
double _p_lean{};
double _p_passes{};
double _p_end{};
static std::shared_ptr<_n_Record_13282> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13282>();out->_p_fx=d::decode<double>(j["fx"]);out->_p_px=d::decode<double>(j["px"]);out->_p_fy=d::decode<double>(j["fy"]);out->_p_py=d::decode<double>(j["py"]);out->_p_lean=d::decode<double>(j["lean"]);out->_p_passes=d::decode<double>(j["passes"]);out->_p_end=d::decode<double>(j["end"]);return out;}
};
struct _n_Record_13289{
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
static std::shared_ptr<_n_Record_13289> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13289>();out->_p_c=d::decode<double>(j["c"]);out->_p_t0=d::decode<double>(j["t0"]);out->_p_t1=d::decode<double>(j["t1"]);out->_p_ex=d::decode<double>(j["ex"]);out->_p_ey=d::decode<double>(j["ey"]);out->_p_lx=d::decode<double>(j["lx"]);out->_p_ly=d::decode<double>(j["ly"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_y1=d::decode<double>(j["y1"]);out->_p_sum=d::decode<double>(j["sum"]);out->_p_n=d::decode<double>(j["n"]);out->_p_len=d::decode<double>(j["len"]);out->_p_g=d::decode<std::optional<d::String>>(j["g"]);return out;}
};
struct _n_Record_13291{
double _p_end{};
d::Array<double,true> _p_xs{};
d::Array<double,true> _p_ys{};
d::Array<double,false> _p_cells{};
d::Array<double,false> _p_times{};
d::Array<d::String,false> _p_marks{};
d::Array<d::String,false> _p_ink{};
d::Array<double,true> _p_when{};
static std::shared_ptr<_n_Record_13291> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13291>();out->_p_end=d::decode<double>(j["end"]);out->_p_xs=d::decode<d::Array<double,true>>(j["xs"]);out->_p_ys=d::decode<d::Array<double,true>>(j["ys"]);out->_p_cells=d::decode<d::Array<double,false>>(j["cells"]);out->_p_times=d::decode<d::Array<double,false>>(j["times"]);out->_p_marks=d::decode<d::Array<d::String,false>>(j["marks"]);out->_p_ink=d::decode<d::Array<d::String,false>>(j["ink"]);out->_p_when=d::decode<d::Array<double,true>>(j["when"]);return out;}
};
struct _n_Record_13357{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13357> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13357>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_13391{
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
static std::shared_ptr<_n_Record_13391> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13391>();out->_p_c=d::decode<double>(j["c"]);out->_p_t0=d::decode<double>(j["t0"]);out->_p_t1=d::decode<double>(j["t1"]);out->_p_ex=d::decode<double>(j["ex"]);out->_p_ey=d::decode<double>(j["ey"]);out->_p_lx=d::decode<double>(j["lx"]);out->_p_ly=d::decode<double>(j["ly"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_x1=d::decode<double>(j["x1"]);out->_p_y0=d::decode<double>(j["y0"]);out->_p_y1=d::decode<double>(j["y1"]);out->_p_sum=d::decode<double>(j["sum"]);out->_p_n=d::decode<double>(j["n"]);out->_p_len=d::decode<double>(j["len"]);return out;}
};
d::String _n_glyph_13288(std::shared_ptr<_n_Record_13289> _a0);
std::shared_ptr<_n_Record_13291> _n_sheet_13290(std::shared_ptr<_n_Record_13282> _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_13276> _n_meta_13275=[](){return ([&](){auto _n_object_13360=std::make_shared<_n_Record_13276>();_n_object_13360->_p_name=d::String(u"harmonograph");_n_object_13360->_p_category=d::String(u"physics");_n_object_13360->_p_note=d::String(u"a pen on two decaying pendulums winding a figure inward");_n_object_13360->_p_cols=64.0;_n_object_13360->_p_rows=28.0;_n_object_13360->_p_fps=30.0;return _n_object_13360;})();}();
const double _n_W_13277=[](){return 0.6;}();
const double _n_H_13278=[](){return 1.2;}();
const double _n_STEP_13279=[](){return 0.0015;}();
const double _n_NEAR_13280=[](){return 0.25;}();
d::Array<std::shared_ptr<_n_Record_13282>,false> _n_FIGURES_13281=[](){return d::Array<std::shared_ptr<_n_Record_13282>,false>{([&](){auto _n_object_13363=std::make_shared<_n_Record_13282>();_n_object_13363->_p_fx=1.0;_n_object_13363->_p_px=(ascii::PI/2.0);_n_object_13363->_p_fy=1.02;_n_object_13363->_p_py=0.0;_n_object_13363->_p_lean=1.15;_n_object_13363->_p_passes=9.0;_n_object_13363->_p_end=0.12;return _n_object_13363;})(),([&](){auto _n_object_13365=std::make_shared<_n_Record_13282>();_n_object_13365->_p_fx=2.006;_n_object_13365->_p_px=0.0;_n_object_13365->_p_fy=1.0;_n_object_13365->_p_py=0.0;_n_object_13365->_p_lean=1.0;_n_object_13365->_p_passes=6.0;_n_object_13365->_p_end=0.15;return _n_object_13365;})(),([&](){auto _n_object_13367=std::make_shared<_n_Record_13282>();_n_object_13367->_p_fx=1.0;_n_object_13367->_p_px=(ascii::PI/4.0);_n_object_13367->_p_fy=0.985;_n_object_13367->_p_py=0.0;_n_object_13367->_p_lean=0.9;_n_object_13367->_p_passes=8.0;_n_object_13367->_p_end=0.15;return _n_object_13367;})()};}();
double _n_DRAW_13283{};
double _n_SHOW_13284{};
double _n_LIFT_13285{};
const bool _n_unpack_init_13368=[](){auto _n_binding_13369=d::Array<double,false>{10.0,2.5,3.0};
_n_DRAW_13283=d::at(_n_binding_13369,0.0);
_n_SHOW_13284=d::at(_n_binding_13369,1.0);
_n_LIFT_13285=d::at(_n_binding_13369,2.0);
return true;}();
const double _n_PERIOD_13286=[](){return (_n_DRAW_13283+_n_SHOW_13284);}();
const double _n_START_13287=[](){return 6.0;}();
d::String _n_glyph_13288(std::shared_ptr<_n_Record_13289> _a0){std::shared_ptr<_n_Record_13289> _n_s_13296=_a0;
{
double _n_m_13297=0.06;
bool _n_right_13298=((_n_s_13296->_p_x1-d::maximum({_n_s_13296->_p_ex,_n_s_13296->_p_lx}))>_n_m_13297);
bool _n_left_13299=((d::minimum({_n_s_13296->_p_ex,_n_s_13296->_p_lx})-_n_s_13296->_p_x0)>_n_m_13297);
bool _n_turnY_13300=([&]()->bool{auto _n_logical_13370=((_n_s_13296->_p_y1-d::maximum({_n_s_13296->_p_ey,_n_s_13296->_p_ly}))>_n_m_13297);return d::truth(_n_logical_13370)?_n_logical_13370:((d::minimum({_n_s_13296->_p_ey,_n_s_13296->_p_ly})-_n_s_13296->_p_y0)>_n_m_13297);})();
double _n_span_13301=(_n_s_13296->_p_y1-_n_s_13296->_p_y0);
double _n_mid_13302=(_n_s_13296->_p_sum/_n_s_13296->_p_n);
d::String _n_flat_13303=(d::truth((_n_mid_13302<0.3))?d::String(u"'"):(d::truth((_n_mid_13302<0.6))?d::String(u"-"):(d::truth((_n_mid_13302<0.82))?d::String(u"."):d::String(u"_"))));
if(((d::truth(([&]()->bool{auto _n_logical_13371=_n_right_13298;return d::truth(_n_logical_13371)?_n_logical_13371:_n_left_13299;})())&&d::truth((!d::truth(([&]()->bool{auto _n_logical_13372=_n_right_13298;return d::truth(_n_logical_13372)?_n_left_13299:_n_logical_13372;})()))))&&d::truth(((_n_span_13301*_n_H_13278)>((0.25*(_n_s_13296->_p_x1-_n_s_13296->_p_x0))*_n_W_13277))))){d::check_cancel();return (d::truth(_n_right_13298)?d::String(u")"):d::String(u"("));
}
if(d::truth(_n_turnY_13300)){d::check_cancel();return _n_flat_13303;
}
double _n_dx_13304=((_n_s_13296->_p_lx-_n_s_13296->_p_ex)*_n_W_13277);
double _n_dy_13305=((_n_s_13296->_p_ly-_n_s_13296->_p_ey)*_n_H_13278);
if(d::truth(([&](){auto _n_left_13373=std::fabs(_n_dx_13304);auto _n_right_13374=(0.35*std::fabs(_n_dy_13305));return (_n_left_13373<_n_right_13374);})())){d::check_cancel();return ((d::truth((_n_s_13296->_p_y0<0.5))&&d::truth((_n_s_13296->_p_y1>=0.5)))?d::String(u"|"):d::String(u""));
}
if(d::truth((_n_span_13301<0.45))){d::check_cancel();return _n_flat_13303;
}
return (d::truth(((_n_dx_13304*_n_dy_13305)>0.0))?d::String(u"\\"):d::String(u"/"));

}
}

std::shared_ptr<_n_Record_13291> _n_sheet_13290(std::shared_ptr<_n_Record_13282> _a0,double _a1,double _a2){std::shared_ptr<_n_Record_13282> _n_f_13306=_a0;
double _n_cols_13307=_a1;
double _n_rows_13308=_a2;
{
double _n_end_13309=((2.0*ascii::PI)*_n_f_13306->_p_passes);
double _n_n_13310=(std::floor((_n_end_13309/_n_STEP_13279))+1.0);
d::Array<double,true> _n_xs_13311=d::Array<double,true>(size_t(_n_n_13310));
d::Array<double,true> _n_ys_13312=d::Array<double,true>(size_t(_n_n_13310));
auto _n_binding_13375=d::Array<double,false>{0.0,0.0,0.0,0.0};
double _n_x0_13313=d::at(_n_binding_13375,0.0);
double _n_x1_13314=d::at(_n_binding_13375,1.0);
double _n_y0_13315=d::at(_n_binding_13375,2.0);
double _n_y1_13316=d::at(_n_binding_13375,3.0);
{double _n_i_13317=0.0;
for(;d::truth((_n_i_13317<_n_n_13310));(void)((_n_i_13317++))){d::check_cancel();double _n_t_13318=(_n_i_13317*_n_STEP_13279);
double _n_a_13319=(1.0-(((1.0-_n_f_13306->_p_end)*_n_t_13318)/_n_end_13309));
(void)(([&](){auto&& _n_array_13376=_n_xs_13311;auto _n_index_13377=_n_i_13317;auto _n_value_13378=(_n_a_13319*std::sin(((_n_f_13306->_p_fx*_n_t_13318)+_n_f_13306->_p_px)));d::put(_n_array_13376,_n_index_13377,_n_value_13378);return _n_value_13378;})());
(void)(([&](){auto&& _n_array_13379=_n_ys_13312;auto _n_index_13380=_n_i_13317;auto _n_value_13381=((-d::number(std::pow(_n_a_13319,_n_f_13306->_p_lean)))*std::sin(((_n_f_13306->_p_fy*_n_t_13318)+_n_f_13306->_p_py)));d::put(_n_array_13379,_n_index_13380,_n_value_13381);return _n_value_13381;})());
(void)(([&](){auto _n_unpack_13382=d::Array<double,false>{d::minimum({_n_x0_13313,d::at(_n_xs_13311,_n_i_13317)}),d::maximum({_n_x1_13314,d::at(_n_xs_13311,_n_i_13317)}),d::minimum({_n_y0_13315,d::at(_n_ys_13312,_n_i_13317)}),d::maximum({_n_y1_13316,d::at(_n_ys_13312,_n_i_13317)})};_n_x0_13313=d::at(_n_unpack_13382,0.0);_n_x1_13314=d::at(_n_unpack_13382,1.0);_n_y0_13315=d::at(_n_unpack_13382,2.0);_n_y1_13316=d::at(_n_unpack_13382,3.0);return _n_unpack_13382;})());
}}
double _n_sx_13320=(((0.8*_n_cols_13307)-1.0)/(_n_x1_13314-_n_x0_13313));
double _n_sy_13321=(((0.8*_n_rows_13308)-0.6)/(_n_y1_13316-_n_y0_13315));
{double _n_i_13322=0.0;
for(;d::truth((_n_i_13322<_n_n_13310));(void)((_n_i_13322++))){d::check_cancel();(void)((([&](){auto&& _n_array_13383=_n_xs_13311;auto _n_index_13384=_n_i_13322;auto _n_value_13385=((_n_cols_13307/2.0)+((d::at(_n_xs_13311,_n_i_13322)-((_n_x0_13313+_n_x1_13314)/2.0))*_n_sx_13320));d::put(_n_array_13383,_n_index_13384,_n_value_13385);return _n_value_13385;})(),([&](){auto&& _n_array_13386=_n_ys_13312;auto _n_index_13387=_n_i_13322;auto _n_value_13388=((_n_rows_13308/2.0)+((d::at(_n_ys_13312,_n_i_13322)-((_n_y0_13315+_n_y1_13316)/2.0))*_n_sy_13321));d::put(_n_array_13386,_n_index_13387,_n_value_13388);return _n_value_13388;})()));
}}
d::Array<std::shared_ptr<_n_Record_13289>,false> _n_strokes_13323=d::Array<std::shared_ptr<_n_Record_13289>,false>{};
d::Array<int32_t,true> _n_open_13324=d::Array<int32_t,true>(size_t((_n_cols_13307*_n_rows_13308))).fill((-d::number(1.0)));
double _n_px_13325=d::at(_n_xs_13311,0.0);
double _n_py_13326=d::at(_n_ys_13312,0.0);
{double _n_i_13327=0.0;
for(;d::truth((_n_i_13327<_n_n_13310));(void)((_n_i_13327++))){d::check_cancel();double _n_x_13328=d::at(_n_xs_13311,_n_i_13327);
double _n_y_13329=d::at(_n_ys_13312,_n_i_13327);
double _n_t_13330=(_n_i_13327*_n_STEP_13279);
double _n_c_13331=([&](){auto _n_left_13389=(std::floor(_n_y_13329)*_n_cols_13307);auto _n_right_13390=std::floor(_n_x_13328);return (_n_left_13389+_n_right_13390);})();
double _n_lx_13332=(_n_x_13328-std::floor(_n_x_13328));
double _n_ly_13333=(_n_y_13329-std::floor(_n_y_13329));
std::shared_ptr<_n_Record_13289> _n_s_13334=(d::truth((d::at(_n_open_13324,_n_c_13331)>=0.0))?d::at(_n_strokes_13323,d::at(_n_open_13324,_n_c_13331)):std::shared_ptr<_n_Record_13289>{});
if((d::truth((!d::truth(_n_s_13334)))||d::truth(((_n_t_13330-_n_s_13334->_p_t1)>_n_NEAR_13280)))){d::check_cancel();(void)((_n_s_13334=([&](){auto _n_object_13393=std::make_shared<_n_Record_13289>();_n_object_13393->_p_c=_n_c_13331;_n_object_13393->_p_t0=_n_t_13330;_n_object_13393->_p_t1=_n_t_13330;_n_object_13393->_p_ex=_n_lx_13332;_n_object_13393->_p_ey=_n_ly_13333;_n_object_13393->_p_lx=_n_lx_13332;_n_object_13393->_p_ly=_n_ly_13333;_n_object_13393->_p_x0=_n_lx_13332;_n_object_13393->_p_x1=_n_lx_13332;_n_object_13393->_p_y0=_n_ly_13333;_n_object_13393->_p_y1=_n_ly_13333;_n_object_13393->_p_sum=0.0;_n_object_13393->_p_n=0.0;_n_object_13393->_p_len=0.0;return _n_object_13393;})()));
(void)(([&](){auto&& _n_array_13394=_n_open_13324;auto _n_index_13395=_n_c_13331;auto _n_value_13396=(_n_strokes_13323.push(_n_s_13334)-1.0);d::put(_n_array_13394,_n_index_13395,_n_value_13396);return _n_value_13396;})());
}
(void)((_n_s_13334->_p_len=(_n_s_13334->_p_len+d::hypot(std::initializer_list<double>{((_n_x_13328-_n_px_13325)*_n_W_13277),((_n_y_13329-_n_py_13326)*_n_H_13278)}))));
(void)(([&](){auto _n_unpack_13397=d::Array<double,false>{_n_t_13330,_n_lx_13332,_n_ly_13333,(_n_s_13334->_p_sum+_n_ly_13333),(_n_s_13334->_p_n+1.0)};_n_s_13334->_p_t1=d::at(_n_unpack_13397,0.0);_n_s_13334->_p_lx=d::at(_n_unpack_13397,1.0);_n_s_13334->_p_ly=d::at(_n_unpack_13397,2.0);_n_s_13334->_p_sum=d::at(_n_unpack_13397,3.0);_n_s_13334->_p_n=d::at(_n_unpack_13397,4.0);return _n_unpack_13397;})());
(void)(([&](){auto _n_unpack_13398=d::Array<double,false>{d::minimum({_n_s_13334->_p_x0,_n_lx_13332}),d::maximum({_n_s_13334->_p_x1,_n_lx_13332}),d::minimum({_n_s_13334->_p_y0,_n_ly_13333}),d::maximum({_n_s_13334->_p_y1,_n_ly_13333})};_n_s_13334->_p_x0=d::at(_n_unpack_13398,0.0);_n_s_13334->_p_x1=d::at(_n_unpack_13398,1.0);_n_s_13334->_p_y0=d::at(_n_unpack_13398,2.0);_n_s_13334->_p_y1=d::at(_n_unpack_13398,3.0);return _n_unpack_13398;})());
(void)(((_n_px_13325=_n_x_13328),(_n_py_13326=_n_y_13329)));
}}
d::Array<std::shared_ptr<_n_Record_13289>,false> _n_keep_13335=d::filter(_n_strokes_13323,[&]( std::shared_ptr<_n_Record_13289> _a0) mutable ->std::variant<d::String,bool>{std::shared_ptr<_n_Record_13289> _n_s_13336=_a0;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_13399=(_n_s_13336->_p_len>0.12);return d::truth(_n_logical_13399)?std::variant<d::String,bool>(d::read((_n_s_13336->_p_g=std::optional<d::String>(_n_glyph_13288(_n_s_13336))))):std::variant<d::String,bool>(_n_logical_13399);})();});
d::Array<d::String,false> _n_ink_13337=d::Array<d::String,false>(size_t((_n_cols_13307*_n_rows_13308))).fill(d::String(u" "));
d::Array<double,true> _n_when_13338=d::Array<double,true>(size_t((_n_cols_13307*_n_rows_13308))).fill((-d::number(1.0)));
(void)(d::forEach(_n_keep_13335,[&]( std::shared_ptr<_n_Record_13289> _a0) mutable ->double{std::shared_ptr<_n_Record_13289> _n_s_13339=_a0;
return (([&](){auto&& _n_array_13400=_n_ink_13337;auto _n_index_13401=_n_s_13339->_p_c;auto _n_value_13402=d::read(_n_s_13339->_p_g);d::put(_n_array_13400,_n_index_13401,_n_value_13402);return _n_value_13402;})(),([&](){auto&& _n_array_13403=_n_when_13338;auto _n_index_13404=_n_s_13339->_p_c;auto _n_value_13405=_n_s_13339->_p_t0;d::put(_n_array_13403,_n_index_13404,_n_value_13405);return _n_value_13405;})());}));
return ([&](){auto _n_object_13407=std::make_shared<_n_Record_13291>();_n_object_13407->_p_end=_n_end_13309;_n_object_13407->_p_xs=_n_xs_13311;_n_object_13407->_p_ys=_n_ys_13312;_n_object_13407->_p_cells=d::map(_n_keep_13335,[&]( std::shared_ptr<_n_Record_13289> _a0) mutable ->double{std::shared_ptr<_n_Record_13289> _n_s_13340=_a0;
return _n_s_13340->_p_c;});_n_object_13407->_p_times=d::map(_n_keep_13335,[&]( std::shared_ptr<_n_Record_13289> _a0) mutable ->double{std::shared_ptr<_n_Record_13289> _n_s_13341=_a0;
return _n_s_13341->_p_t0;});_n_object_13407->_p_marks=d::map(_n_keep_13335,[&]( std::shared_ptr<_n_Record_13289> _a0) mutable ->d::String{std::shared_ptr<_n_Record_13289> _n_s_13342=_a0;
return d::read(_n_s_13342->_p_g);});_n_object_13407->_p_ink=_n_ink_13337;_n_object_13407->_p_when=_n_when_13338;return _n_object_13407;})();

}
}

struct Native_harmonograph final:ascii::Piece{
double _n_cols_13292{};
double _n_rows_13293{};
d::Array<d::String,false> _n_out_13294{};
d::Array<std::shared_ptr<_n_Record_13291>,false> _n_sheets_13295{};
std::function<d::String(double,std::shared_ptr<_n_Record_13357>)> _render;

explicit Native_harmonograph(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13408=_n_meta_13275;
this->_n_cols_13292=_n_binding_13408->_p_cols;
this->_n_rows_13293=_n_binding_13408->_p_rows;
this->_n_out_13294=d::Array<d::String,false>(size_t((this->_n_cols_13292*this->_n_rows_13293)));
this->_n_sheets_13295=d::map(_n_FIGURES_13281,[&]( std::shared_ptr<_n_Record_13282> _a0) mutable ->std::shared_ptr<_n_Record_13291>{std::shared_ptr<_n_Record_13282> _n_f_13343=_a0;
return _n_sheet_13290(_n_f_13343,this->_n_cols_13292,this->_n_rows_13293);});
_render=[=]( double _a0,std::shared_ptr<_n_Record_13357> _a1) mutable ->d::String{double _n_t_13344=_a0;
{
double _n_tt_13345=(_n_START_13287+_n_t_13344);
double _n_idx_13346=std::floor((_n_tt_13345/_n_PERIOD_13286));
double _n_local_13347=(_n_tt_13345-(_n_idx_13346*_n_PERIOD_13286));
std::shared_ptr<_n_Record_13291> _n_s_13348=d::at(this->_n_sheets_13295,d::mod(_n_idx_13346,double(this->_n_sheets_13295.size())));
(void)(this->_n_out_13294.fill(d::String(u" ")));
if(d::truth((_n_local_13347<_n_LIFT_13285))){d::check_cancel();std::shared_ptr<_n_Record_13291> _n_old_13349=d::at(this->_n_sheets_13295,d::mod(((_n_idx_13346+double(this->_n_sheets_13295.size()))-1.0),double(this->_n_sheets_13295.size())));
double _n_u_13350=((_n_local_13347/_n_LIFT_13285)*_n_old_13349->_p_end);
{double _n_c_13351=0.0;
for(;d::truth((_n_c_13351<(this->_n_cols_13292*this->_n_rows_13293)));(void)((_n_c_13351++))){d::check_cancel();if(d::truth((d::at(_n_old_13349->_p_when,_n_c_13351)>_n_u_13350))){d::check_cancel();(void)(([&](){auto&& _n_array_13409=this->_n_out_13294;auto _n_index_13410=_n_c_13351;auto _n_value_13411=d::at(_n_old_13349->_p_ink,_n_c_13351);d::put(_n_array_13409,_n_index_13410,_n_value_13411);return _n_value_13411;})());
}
}}
}
double _n_tau_13352=((d::minimum({_n_local_13347,_n_DRAW_13283})/_n_DRAW_13283)*_n_s_13348->_p_end);
{double _n_i_13353=0.0;
for(;(d::truth((_n_i_13353<double(_n_s_13348->_p_cells.size())))&&d::truth((d::at(_n_s_13348->_p_times,_n_i_13353)<=_n_tau_13352)));(void)((_n_i_13353++))){d::check_cancel();(void)(([&](){auto&& _n_array_13412=this->_n_out_13294;auto _n_index_13413=d::at(_n_s_13348->_p_cells,_n_i_13353);auto _n_value_13414=d::at(_n_s_13348->_p_marks,_n_i_13353);d::put(_n_array_13412,_n_index_13413,_n_value_13414);return _n_value_13414;})());
}}
if(d::truth((_n_local_13347<_n_DRAW_13283))){d::check_cancel();double _n_j_13354=([&](){auto _n_argument_13415=(double(_n_s_13348->_p_xs.size())-1.0);auto _n_argument_13416=std::floor((_n_tau_13352/_n_STEP_13279));return d::minimum({_n_argument_13415,_n_argument_13416});})();
(void)(([&](){auto&& _n_array_13417=this->_n_out_13294;auto _n_index_13418=([&](){auto _n_left_13420=(std::floor(d::at(_n_s_13348->_p_ys,_n_j_13354))*this->_n_cols_13292);auto _n_right_13421=std::floor(d::at(_n_s_13348->_p_xs,_n_j_13354));return (_n_left_13420+_n_right_13421);})();auto _n_value_13419=d::String(u"o");d::put(_n_array_13417,_n_index_13418,_n_value_13419);return _n_value_13419;})());
}
d::Array<d::String,false> _n_lines_13355=d::Array<d::String,false>{};
{double _n_r_13356=0.0;
for(;d::truth((_n_r_13356<this->_n_rows_13293));(void)((_n_r_13356++))){d::check_cancel();(void)(_n_lines_13355.push(d::join(this->_n_out_13294.slice((_n_r_13356*this->_n_cols_13292),((_n_r_13356+1.0)*this->_n_cols_13292)),d::String(u""))));
}}
return d::join(_n_lines_13355,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("harmonograph").cols)*ascii::catalog_meta("harmonograph").rows);auto _env=std::make_shared<_n_Record_13357>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &harmonograph_meta(){return catalog_meta("harmonograph");}
std::unique_ptr<Piece> make_harmonograph(const AsciiPieceOptions &o){return std::make_unique<Native_harmonograph>(o);}
}
