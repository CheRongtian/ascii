// Direct, statically typed C++ from src/pieces/tv-static.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34694;
struct _n_Record_34695;
struct _n_Record_34815;
struct _n_Record_34816;
struct _n_Record_34694{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_34695> _p_options{};
static std::shared_ptr<_n_Record_34694> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34694>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_34695>>(j["options"]);return out;}
};
struct _n_Record_34695{
bool _p_set{};
static std::shared_ptr<_n_Record_34695> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34695>();out->_p_set=d::decode<bool>(j["set"]);return out;}
};
struct _n_Record_34815{
std::optional<bool> _p_set{};
static std::shared_ptr<_n_Record_34815> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34815>();out->_p_set=d::decode<std::optional<bool>>(j["set"]);return out;}
};
struct _n_Record_34816{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34816> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34816>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_34702(double _a0,double _a1,double _a2);
double _n_smooth_34703(double _a0,double _a1,double _a2);
d::Array<d::Array<d::String,false>,false> _n_drawSet_34704(double _a0,double _a1);
d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_drawCard_34705(double _a0,double _a1);
std::shared_ptr<_n_Record_34694> _n_meta_34693=[](){return ([&](){auto _n_object_34821=std::make_shared<_n_Record_34694>();_n_object_34821->_p_name=d::String(u"tv static");_n_object_34821->_p_category=d::String(u"effects");_n_object_34821->_p_note=d::String(u"snow on an old set that tunes into a test card and loses it");_n_object_34821->_p_cols=58.0;_n_object_34821->_p_rows=26.0;_n_object_34821->_p_fps=20.0;_n_object_34821->_p_options=([&](){auto _n_object_34823=std::make_shared<_n_Record_34695>();_n_object_34823->_p_set=true;return _n_object_34823;})();return _n_object_34821;})();}();
const d::String _n_RAMP_34696=[](){return d::String(u" .:+░▒▓█");}();
const double _n_LOOP_34697=[](){return 10.0;}();
d::Array<double,false> _n_BARS_34698=[](){return d::Array<double,false>{7.0,6.0,5.0,4.0,3.0,2.0,1.0};}();
d::Array<double,false> _n_CASTLE_34699=[](){return d::Array<double,false>{1.0,0.0,3.0,0.0,5.0,0.0,7.0};}();
d::Array<std::array<double,2>,false> _n_BOTTOM_34700=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{0.17,5.0},std::array<double,2>{0.34,7.0},std::array<double,2>{0.51,3.0},std::array<double,2>{0.68,0.0},std::array<double,2>{0.73,1.0},std::array<double,2>{0.78,0.0},std::array<double,2>{0.83,2.0},std::array<double,2>{1.0,0.0}};}();
d::Array<double,false> _n_SNOW_34701=[](){return d::Array<double,false>{0.36,0.48,0.6,0.7,0.8,0.9,0.98};}();
double _n_hash_34702(double _a0,double _a1,double _a2){double _n_a_34721=_a0;
double _n_b_34722=_a1;
double _n_c_34723=_a2;
{
double _n_h_34724=([&](){auto _n_left_34824=([&](){auto _n_left_34826=d::imul(_n_a_34721,668265261.0);auto _n_right_34827=d::imul(_n_b_34722,374761393.0);return double(d::i32(_n_left_34826)^d::i32(_n_right_34827));})();auto _n_right_34825=d::imul(_n_c_34723,625341585.0);return double(d::i32(_n_left_34824)^d::i32(_n_right_34825));})();
(void)((_n_h_34724=d::imul(double(d::i32(_n_h_34724)^d::i32(double(d::u32(_n_h_34724)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_34724=d::imul(double(d::i32(_n_h_34724)^d::i32(double(d::u32(_n_h_34724)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_34724)^d::i32(double(d::u32(_n_h_34724)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_smooth_34703(double _a0,double _a1,double _a2){double _n_a_34725=_a0;
double _n_b_34726=_a1;
double _n_v_34727=_a2;
{
double _n_x_34728=([&](){auto _n_argument_34828=0.0;auto _n_argument_34829=d::minimum({1.0,((_n_v_34727-_n_a_34725)/(_n_b_34726-_n_a_34725))});return d::maximum({_n_argument_34828,_n_argument_34829});})();
return ((_n_x_34728*_n_x_34728)*(3.0-(2.0*_n_x_34728)));

}
}

d::Array<d::Array<d::String,false>,false> _n_drawSet_34704(double _a0,double _a1){double _n_cols_34729=_a0;
double _n_rows_34730=_a1;
{
d::Array<d::Array<d::String,false>,false> _n_g_34731=d::Array<d::Array<d::String,false>,false>(d::from(_n_rows_34730,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(_n_cols_34729)).fill(d::String(u" "));}));
auto _n_box_34732=[&]( double _a0,double _a1,double _a2,double _a3,std::optional<d::String> _a4) mutable ->void{double _n_x0_34733=_a0;
double _n_y0_34734=_a1;
double _n_x1_34735=_a2;
double _n_y1_34736=_a3;
d::String _n_c_34737=(d::present(_a4)?d::read(_a4):d::String(u"╭╮╰╯─│"));
{
{double _n_x_34738=(_n_x0_34733+1.0);
for(;d::truth((_n_x_34738<_n_x1_34735));(void)((_n_x_34738++))){d::check_cancel();(void)(([&](){auto&& _n_array_34830=d::at(_n_g_34731,_n_y0_34734);auto _n_index_34831=_n_x_34738;auto _n_value_34832=([&](){auto&& _n_array_34833=d::at(_n_g_34731,_n_y1_34736);auto _n_index_34834=_n_x_34738;auto _n_value_34835=d::at(_n_c_34737,4.0);d::put(_n_array_34833,_n_index_34834,_n_value_34835);return _n_value_34835;})();d::put(_n_array_34830,_n_index_34831,_n_value_34832);return _n_value_34832;})());
}}
{double _n_y_34739=(_n_y0_34734+1.0);
for(;d::truth((_n_y_34739<_n_y1_34736));(void)((_n_y_34739++))){d::check_cancel();(void)(([&](){auto&& _n_array_34836=d::at(_n_g_34731,_n_y_34739);auto _n_index_34837=_n_x0_34733;auto _n_value_34838=([&](){auto&& _n_array_34839=d::at(_n_g_34731,_n_y_34739);auto _n_index_34840=_n_x1_34735;auto _n_value_34841=d::at(_n_c_34737,5.0);d::put(_n_array_34839,_n_index_34840,_n_value_34841);return _n_value_34841;})();d::put(_n_array_34836,_n_index_34837,_n_value_34838);return _n_value_34838;})());
}}
(void)(([&](){auto _n_unpack_34842=d::Array<d::String,false>{d::at(_n_c_34737,0.0),d::at(_n_c_34737,1.0),d::at(_n_c_34737,2.0),d::at(_n_c_34737,3.0)};d::put(d::at(_n_g_34731,_n_y0_34734),_n_x0_34733,d::at(_n_unpack_34842,0.0));d::put(d::at(_n_g_34731,_n_y0_34734),_n_x1_34735,d::at(_n_unpack_34842,1.0));d::put(d::at(_n_g_34731,_n_y1_34736),_n_x0_34733,d::at(_n_unpack_34842,2.0));d::put(d::at(_n_g_34731,_n_y1_34736),_n_x1_34735,d::at(_n_unpack_34842,3.0));return _n_unpack_34842;})());

}
};
(void)(_n_box_34732(1.0,5.0,56.0,23.0,std::optional<d::String>{}));
(void)(_n_box_34732(3.0,6.0,43.0,22.0,std::optional<d::String>{}));
(void)(_n_box_34732(46.0,8.0,52.0,10.0,std::optional<d::String>{}));
(void)(_n_box_34732(46.0,12.0,52.0,14.0,std::optional<d::String>{}));
(void)(_n_box_34732(45.0,16.0,53.0,21.0,std::optional<d::String>(d::String(u"┌┐└┘─│"))));
{double _n_y_34740=17.0;
for(;d::truth((_n_y_34740<=20.0));(void)((_n_y_34740++))){d::check_cancel();{double _n_x_34741=46.0;
for(;d::truth((_n_x_34741<=52.0));(void)((_n_x_34741++))){d::check_cancel();(void)(([&](){auto&& _n_array_34843=d::at(_n_g_34731,_n_y_34740);auto _n_index_34844=_n_x_34741;auto _n_value_34845=d::String(u"═");d::put(_n_array_34843,_n_index_34844,_n_value_34845);return _n_value_34845;})());
}}
}}
(void)(([&](){auto&& _n_array_34846=d::at(_n_g_34731,13.0);auto _n_index_34847=49.0;auto _n_value_34848=d::String(u"╲");d::put(_n_array_34846,_n_index_34847,_n_value_34848);return _n_value_34848;})());
auto _n_put_34742=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_x_34743=_a0;
double _n_y_34744=_a1;
d::String _n_s_34745=_a2;
d::forEach(([&](){d::Array<d::String,false> _n_array_34849;for(const auto &_v:_n_s_34745)_n_array_34849.push(_v);return _n_array_34849;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_34746=_a0;
double _n_i_34747=_a1;
return ([&](){auto&& _n_array_34850=d::at(_n_g_34731,_n_y_34744);auto _n_index_34851=(_n_x_34743+_n_i_34747);auto _n_value_34852=_n_ch_34746;d::put(_n_array_34850,_n_index_34851,_n_value_34852);return _n_value_34852;})();});};
(void)(_n_put_34742(25.0,4.0,d::String(u"▄▄███▄▄")));
{double _n_k_34748=1.0;
for(;d::truth((_n_k_34748<=4.0));(void)((_n_k_34748++))){d::check_cancel();(void)(([&](){auto&& _n_array_34853=d::at(_n_g_34731,(4.0-_n_k_34748));auto _n_index_34854=(25.0-_n_k_34748);auto _n_value_34855=d::String(u"╲");d::put(_n_array_34853,_n_index_34854,_n_value_34855);return _n_value_34855;})());
(void)(([&](){auto&& _n_array_34856=d::at(_n_g_34731,(4.0-_n_k_34748));auto _n_index_34857=(31.0+_n_k_34748);auto _n_value_34858=d::String(u"╱");d::put(_n_array_34856,_n_index_34857,_n_value_34858);return _n_value_34858;})());
}}
(void)(([&](){auto&& _n_array_34859=d::at(_n_g_34731,0.0);auto _n_index_34860=21.0;auto _n_value_34861=([&](){auto&& _n_array_34862=d::at(_n_g_34731,0.0);auto _n_index_34863=35.0;auto _n_value_34864=d::String(u"o");d::put(_n_array_34862,_n_index_34863,_n_value_34864);return _n_value_34864;})();d::put(_n_array_34859,_n_index_34860,_n_value_34861);return _n_value_34861;})());
(void)(_n_put_34742(5.0,24.0,d::String(u"╱")));
(void)(_n_put_34742(4.0,25.0,d::String(u"╱")));
(void)(_n_put_34742(52.0,24.0,d::String(u"╲")));
(void)(_n_put_34742(53.0,25.0,d::String(u"╲")));
return _n_g_34731;

}
}

d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_drawCard_34705(double _a0,double _a1){double _n_SW_34749=_a0;
double _n_SH_34750=_a1;
{
d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_card_34751=d::Array<d::Array<std::variant<d::String,double>,false>,false>(d::map(d::Array<d::Array<double,false>,false>(d::from(_n_SH_34750,[&]( d::Nil _a0,double _a1) mutable ->d::Array<double,false>{double _n_r_34753=_a1;
return d::Array<double,false>(d::from(_n_SW_34749,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_34755=_a1;
{
double _n_u_34756=((_n_c_34755+0.5)/_n_SW_34749);
double _n_v_34757=((_n_r_34753+0.5)/_n_SH_34750);
double _n_bar_34758=([&](){auto _n_argument_34865=6.0;auto _n_argument_34866=std::floor((_n_u_34756*7.0));return d::minimum({_n_argument_34865,_n_argument_34866});})();
if(d::truth((_n_v_34757<0.67))){d::check_cancel();return d::at(_n_BARS_34698,_n_bar_34758);
}
if(d::truth((_n_v_34757<0.75))){d::check_cancel();return d::at(_n_CASTLE_34699,_n_bar_34758);
}
return d::at(d::read(d::find(_n_BOTTOM_34700,[&]( std::array<double,2> _a0) mutable ->bool{auto _n_binding_34867=_a0;
double _n_end_34759=d::at(_n_binding_34867,0.0);
return (_n_u_34756<_n_end_34759);})),1.0);

}
}));})),[&](const auto &_n_element_34868){return d::Array<std::variant<d::String,double>,false>(d::map(_n_element_34868,[&](const auto &_n_element_34869){return std::variant<d::String,double>(_n_element_34869);}));}));
double _n_R_34760=(d::minimum({(_n_SH_34750*0.43),(_n_SW_34749*0.22)})*2.0);
double _n_cx_34761=(_n_SW_34749/2.0);
double _n_cy_34762=(_n_SH_34750/2.0);
d::Array<std::optional<std::array<double,2>>,false> _n_span_34763=d::Array<std::optional<std::array<double,2>>,false>{};
{double _n_r_34764=0.0;
for(;d::truth((_n_r_34764<_n_SH_34750));(void)((_n_r_34764++))){d::check_cancel();double _n_y_34765=(((_n_r_34764+0.5)-_n_cy_34762)*2.0);
double _n_w_34766=((_n_R_34760*_n_R_34760)-(_n_y_34765*_n_y_34765));
(void)(_n_span_34763.push((d::truth((_n_w_34766<0.0))?std::optional<std::array<double,2>>{}:std::array<double,2>{std::ceil(((_n_cx_34761-std::sqrt(_n_w_34766))-0.5)),std::floor(((_n_cx_34761+std::sqrt(_n_w_34766))-0.5))})));
}}
double _n_mid_34767=std::floor((_n_SH_34750/2.0));
double _n_mc_34768=std::floor((_n_SW_34749/2.0));
{double _n_r_34769=0.0;
for(;d::truth((_n_r_34769<_n_SH_34750));(void)((_n_r_34769++))){d::check_cancel();if(d::truth((!d::truth(d::at(_n_span_34763,_n_r_34769))))){d::check_cancel();continue;
}
auto _n_binding_34870=d::read(d::at(_n_span_34763,_n_r_34769));
double _n_a_34770=d::at(_n_binding_34870,0.0);
double _n_b_34771=d::at(_n_binding_34870,1.0);
bool _n_up_34772=(_n_r_34769<_n_mid_34767);
std::optional<std::array<double,2>> _n_near_34773=(d::truth(_n_up_34772)?d::at(_n_span_34763,(_n_r_34769-1.0)):d::at(_n_span_34763,(_n_r_34769+1.0)));
auto _n_binding_34872=([&]()->std::array<double,2>{auto _n_logical_34871=_n_near_34773;return d::truth(_n_logical_34871)?d::read(_n_logical_34871):std::array<double,2>{(_n_mc_34768+1.0),(_n_mc_34768-1.0)};})();
double _n_na_34774=d::at(_n_binding_34872,0.0);
double _n_nb_34775=d::at(_n_binding_34872,1.0);
{double _n_c_34776=_n_a_34770;
for(;d::truth((_n_c_34776<=_n_b_34771));(void)((_n_c_34776++))){d::check_cancel();if(((d::truth((_n_c_34776>_n_a_34770))&&d::truth((_n_c_34776<_n_na_34774)))&&d::truth((_n_c_34776<_n_nb_34775)))){d::check_cancel();(void)(([&](){auto&& _n_array_34873=d::at(_n_card_34751,_n_r_34769);auto _n_index_34874=_n_c_34776;auto _n_value_34875=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34873,_n_index_34874,_n_value_34875);return _n_value_34875;})());
}else {d::check_cancel();if(((d::truth((_n_c_34776<_n_b_34771))&&d::truth((_n_c_34776>_n_nb_34775)))&&d::truth((_n_c_34776>_n_na_34774)))){d::check_cancel();(void)(([&](){auto&& _n_array_34876=d::at(_n_card_34751,_n_r_34769);auto _n_index_34877=_n_c_34776;auto _n_value_34878=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34876,_n_index_34877,_n_value_34878);return _n_value_34878;})());
}
}
}}
if(d::truth((_n_a_34770<_n_na_34774))){d::check_cancel();(void)(([&](){auto&& _n_array_34879=d::at(_n_card_34751,_n_r_34769);auto _n_index_34880=_n_a_34770;auto _n_value_34881=(d::truth(_n_up_34772)?std::variant<d::String,double>(d::String(u"╭")):std::variant<d::String,double>(d::String(u"╰")));d::put(_n_array_34879,_n_index_34880,_n_value_34881);return _n_value_34881;})());
(void)(([&](){auto&& _n_array_34882=d::at(_n_card_34751,_n_r_34769);auto _n_index_34883=_n_na_34774;auto _n_value_34884=(d::truth(_n_up_34772)?std::variant<d::String,double>(d::String(u"╯")):std::variant<d::String,double>(d::String(u"╮")));d::put(_n_array_34882,_n_index_34883,_n_value_34884);return _n_value_34884;})());
(void)(([&](){auto&& _n_array_34885=d::at(_n_card_34751,_n_r_34769);auto _n_index_34886=_n_b_34771;auto _n_value_34887=(d::truth(_n_up_34772)?std::variant<d::String,double>(d::String(u"╮")):std::variant<d::String,double>(d::String(u"╯")));d::put(_n_array_34885,_n_index_34886,_n_value_34887);return _n_value_34887;})());
(void)(([&](){auto&& _n_array_34888=d::at(_n_card_34751,_n_r_34769);auto _n_index_34889=_n_nb_34775;auto _n_value_34890=(d::truth(_n_up_34772)?std::variant<d::String,double>(d::String(u"╰")):std::variant<d::String,double>(d::String(u"╭")));d::put(_n_array_34888,_n_index_34889,_n_value_34890);return _n_value_34890;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_34891=d::at(_n_card_34751,_n_r_34769);auto _n_index_34892=_n_a_34770;auto _n_value_34893=std::variant<d::String,double>(([&](){auto&& _n_array_34894=d::at(_n_card_34751,_n_r_34769);auto _n_index_34895=_n_b_34771;auto _n_value_34896=std::variant<d::String,double>(d::String(u"│"));d::put(_n_array_34894,_n_index_34895,_n_value_34896);return std::get<d::String>(_n_value_34896);})());d::put(_n_array_34891,_n_index_34892,_n_value_34893);return _n_value_34893;})());
}
if(d::truth((!d::truth(_n_near_34773)))){d::check_cancel();{double _n_c_34777=(_n_a_34770+1.0);
for(;d::truth((_n_c_34777<_n_b_34771));(void)((_n_c_34777++))){d::check_cancel();(void)(([&](){auto&& _n_array_34897=d::at(_n_card_34751,_n_r_34769);auto _n_index_34898=_n_c_34777;auto _n_value_34899=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34897,_n_index_34898,_n_value_34899);return _n_value_34899;})());
}}
}
}}
auto _n_binding_34900=d::read(d::at(_n_span_34763,_n_mid_34767));
double _n_a_34778=d::at(_n_binding_34900,0.0);
double _n_b_34779=d::at(_n_binding_34900,1.0);
{double _n_c_34780=(_n_a_34778+1.0);
for(;d::truth((_n_c_34780<_n_b_34779));(void)((_n_c_34780++))){d::check_cancel();(void)(([&](){auto&& _n_array_34901=d::at(_n_card_34751,_n_mid_34767);auto _n_index_34902=_n_c_34780;auto _n_value_34903=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34901,_n_index_34902,_n_value_34903);return _n_value_34903;})());
}}
{double _n_r_34781=0.0;
for(;d::truth((_n_r_34781<_n_SH_34750));(void)((_n_r_34781++))){d::check_cancel();if(d::truth(d::at(_n_span_34763,_n_r_34781))){d::check_cancel();(void)(([&](){auto&& _n_array_34904=d::at(_n_card_34751,_n_r_34781);auto _n_index_34905=_n_mc_34768;auto _n_value_34906=std::variant<d::String,double>(d::String(u"│"));d::put(_n_array_34904,_n_index_34905,_n_value_34906);return _n_value_34906;})());
}
}}
(void)(([&](){auto&& _n_array_34907=d::at(_n_card_34751,_n_mid_34767);auto _n_index_34908=_n_a_34778;auto _n_value_34909=std::variant<d::String,double>(d::String(u"├"));d::put(_n_array_34907,_n_index_34908,_n_value_34909);return _n_value_34909;})());
(void)(([&](){auto&& _n_array_34910=d::at(_n_card_34751,_n_mid_34767);auto _n_index_34911=_n_b_34779;auto _n_value_34912=std::variant<d::String,double>(d::String(u"┤"));d::put(_n_array_34910,_n_index_34911,_n_value_34912);return _n_value_34912;})());
(void)(([&](){auto&& _n_array_34913=d::at(_n_card_34751,_n_mid_34767);auto _n_index_34914=_n_mc_34768;auto _n_value_34915=std::variant<d::String,double>(d::String(u"┼"));d::put(_n_array_34913,_n_index_34914,_n_value_34915);return _n_value_34915;})());
(void)(([&](){auto&& _n_array_34916=d::at(_n_card_34751,d::findIndex(_n_span_34763,d::ToBoolean{}));auto _n_index_34917=_n_mc_34768;auto _n_value_34918=std::variant<d::String,double>(d::String(u"┬"));d::put(_n_array_34916,_n_index_34917,_n_value_34918);return _n_value_34918;})());
(void)(([&](){auto&& _n_array_34920=d::at(_n_card_34751,((_n_SH_34750-1.0)-d::findIndex(([&](){d::Array<std::optional<std::array<double,2>>,false> _n_array_34923;for(const auto &_v:_n_span_34763)_n_array_34923.push(_v);return _n_array_34923;})().reverse(),d::ToBoolean{})));auto _n_index_34921=_n_mc_34768;auto _n_value_34922=std::variant<d::String,double>(d::String(u"┴"));d::put(_n_array_34920,_n_index_34921,_n_value_34922);return _n_value_34922;})());
return _n_card_34751;

}
}

struct Native_tv_static final:ascii::Piece{
bool _n_set_34706{};
double _n_cols_34707{};
double _n_rows_34708{};
double _n_fps_34709{};
std::optional<d::Array<d::Array<d::String,false>,false>> _n_frame_34710{};
double _n_X0_34711{};
double _n_Y0_34712{};
double _n_SW_34713{};
double _n_SH_34714{};
d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_card_34716{};
d::Array<d::Array<d::String,false>,false> _n_g_34717{};
double _n_N_34718{};
std::function<d::String(double,std::shared_ptr<_n_Record_34816>)> _render;
bool _n_inside_34715(double _a0,double _a1){double _n_c_34782=_a0;
double _n_r_34783=_a1;
{
if(d::truth((!d::truth(this->_n_set_34706)))){d::check_cancel();return true;
}
double _n_x_34784=(((_n_c_34782+0.5)-(this->_n_SW_34713/2.0))/(this->_n_SW_34713/2.0));
double _n_y_34785=(((_n_r_34783+0.5)-(this->_n_SH_34714/2.0))/(this->_n_SH_34714/2.0));
return ((std::pow(_n_x_34784,6.0)+std::pow(_n_y_34785,6.0))<=1.02);

}
}

d::String _n_ink_34719(double _a0,bool _a1){double _n_level_34786=_a0;
bool _n_paper_34787=_a1;
return d::at(_n_RAMP_34696,(d::truth(_n_paper_34787)?(this->_n_N_34718-_n_level_34786):_n_level_34786));}

explicit Native_tv_static(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34924=d::decode<std::shared_ptr<_n_Record_34815>>(_options.data);
this->_n_set_34706=(d::present(_n_binding_34924->_p_set)?d::read(_n_binding_34924->_p_set):true);
auto _n_binding_34925=_n_meta_34693;
this->_n_cols_34707=_n_binding_34925->_p_cols;
this->_n_rows_34708=_n_binding_34925->_p_rows;
this->_n_fps_34709=_n_binding_34925->_p_fps;
this->_n_frame_34710=(d::truth(this->_n_set_34706)?std::optional<d::Array<d::Array<d::String,false>,false>>(_n_drawSet_34704(this->_n_cols_34707,this->_n_rows_34708)):std::optional<d::Array<d::Array<d::String,false>,false>>{});
auto _n_binding_34926=(d::truth(this->_n_set_34706)?std::array<double,4>{4.0,7.0,39.0,15.0}:std::array<double,4>{0.0,0.0,this->_n_cols_34707,this->_n_rows_34708});
this->_n_X0_34711=d::at(_n_binding_34926,0.0);
this->_n_Y0_34712=d::at(_n_binding_34926,1.0);
this->_n_SW_34713=d::at(_n_binding_34926,2.0);
this->_n_SH_34714=d::at(_n_binding_34926,3.0);
this->_n_card_34716=_n_drawCard_34705(this->_n_SW_34713,this->_n_SH_34714);
this->_n_g_34717=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_34708,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_34707));}));
this->_n_N_34718=(double(_n_RAMP_34696.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_34816> _a1) mutable ->d::String{double _n_t_34788=_a0;
auto _n_binding_34929=(d::present(_a1)?_a1:([&](){auto _n_object_34928=std::make_shared<_n_Record_34816>();return _n_object_34928;})());
bool _n_paper_34789=(d::present(_n_binding_34929->_p_paper)?d::read(_n_binding_34929->_p_paper):false);
{
double _n_u_34790=d::mod((d::mod(_n_t_34788,_n_LOOP_34697)+_n_LOOP_34697),_n_LOOP_34697);
double _n_k_34791=std::floor((_n_t_34788*this->_n_fps_34709));
double _n_lock_34792=([&](){auto _n_left_34930=_n_smooth_34703(1.6,3.4,_n_u_34790);auto _n_right_34931=(1.0-_n_smooth_34703(6.6,7.8,_n_u_34790));return (_n_left_34930*_n_right_34931);})();
double _n_dial_34793=([&](){auto _n_argument_34932=0.0;auto _n_argument_34933=([&](){auto _n_argument_34934=3.0;auto _n_argument_34935=std::floor(((_n_u_34790-1.1)*8.0));auto _n_argument_34936=(3.0-std::floor(((_n_u_34790-6.4)*8.0)));return d::minimum({_n_argument_34934,_n_argument_34935,_n_argument_34936});})();return d::maximum({_n_argument_34932,_n_argument_34933});})();
double _n_snow_34794=(1.0-(0.97*_n_lock_34792));
double _n_roll_34795=((std::pow((1.0-_n_lock_34792),2.0)*(this->_n_SH_34714+2.0))*2.5);
double _n_tear_34796=((1.0-_n_lock_34792)*9.0);
double _n_hum_34797=((d::mod(((_n_u_34790/_n_LOOP_34697)+0.45),1.0)*(this->_n_SH_34714+6.0))-3.0);
{double _n_r_34798=0.0;
for(;d::truth((_n_r_34798<this->_n_rows_34708));(void)((_n_r_34798++))){d::check_cancel();{double _n_c_34799=0.0;
for(;d::truth((_n_c_34799<this->_n_cols_34707));(void)((_n_c_34799++))){d::check_cancel();(void)(([&](){auto&& _n_array_34937=d::at(this->_n_g_34717,_n_r_34798);auto _n_index_34938=_n_c_34799;auto _n_value_34939=(d::truth(this->_n_frame_34710)?d::at(d::at(d::read(this->_n_frame_34710),_n_r_34798),_n_c_34799):d::String(u" "));d::put(_n_array_34937,_n_index_34938,_n_value_34939);return _n_value_34939;})());
}}
}}
if(d::truth(this->_n_frame_34710)){d::check_cancel();(void)(([&](){auto&& _n_array_34940=d::at(this->_n_g_34717,9.0);auto _n_index_34941=49.0;auto _n_value_34942=d::at(d::String(u"╱─╲│"),_n_dial_34793);d::put(_n_array_34940,_n_index_34941,_n_value_34942);return _n_value_34942;})());
}
{double _n_r_34800=0.0;
for(;d::truth((_n_r_34800<this->_n_SH_34714));(void)((_n_r_34800++))){d::check_cancel();double _n_dim_34801=(1.0-(0.45*std::exp((-d::number(std::pow(((_n_r_34800-_n_hum_34797)/2.2),2.0))))));
double _n_line_34802=(0.9+(0.2*_n_hash_34702(_n_k_34791,_n_r_34800,9.0)));
double _n_shift_34803=d::round(([&](){auto _n_left_34943=(_n_tear_34796*std::sin(((_n_r_34800*0.8)+(_n_u_34790*9.0))));auto _n_right_34944=_n_hash_34702(double(d::i32(_n_k_34791)>>(d::u32(2.0)&31)),_n_r_34800,3.0);return (_n_left_34943*_n_right_34944);})());
double _n_pr_34804=std::floor(d::mod((_n_r_34800+_n_roll_34795),(this->_n_SH_34714+2.0)));
double _n_prev_34805=_n_hash_34702(_n_k_34791,_n_r_34800,1.0);
{double _n_c_34806=0.0;
for(;d::truth((_n_c_34806<this->_n_SW_34713));(void)((_n_c_34806++))){d::check_cancel();if(d::truth((!d::truth(this->_n_inside_34715(_n_c_34806,_n_r_34800))))){d::check_cancel();(void)(([&](){auto&& _n_array_34945=d::at(this->_n_g_34717,(this->_n_Y0_34712+_n_r_34800));auto _n_index_34946=(this->_n_X0_34711+_n_c_34806);auto _n_value_34947=d::String(u" ");d::put(_n_array_34945,_n_index_34946,_n_value_34947);return _n_value_34947;})());
continue;
}
double _n_n_34807=_n_hash_34702(_n_k_34791,((_n_r_34800*97.0)+_n_c_34806),2.0);
(void)((_n_prev_34805=((0.6*_n_n_34807)+(0.4*_n_prev_34805))));
d::String _n_ch_34808{};
bool _n_noisy_34809=(_n_hash_34702(_n_k_34791,((_n_r_34800*97.0)+_n_c_34806),5.0)<_n_snow_34794);
if((d::truth(_n_noisy_34809)&&d::truth((_n_hash_34702(_n_k_34791,((_n_r_34800*97.0)+_n_c_34806),6.0)>=std::pow(_n_lock_34792,6.0))))){d::check_cancel();double _n_v_34810=((_n_prev_34805*_n_line_34802)*_n_dim_34801);
double _n_level_34811=0.0;
while((d::truth((_n_level_34811<double(_n_SNOW_34701.size())))&&d::truth((_n_v_34810>d::at(_n_SNOW_34701,_n_level_34811))))){d::check_cancel();(void)((_n_level_34811++));
}
(void)((_n_ch_34808=this->_n_ink_34719(_n_level_34811,_n_paper_34789)));
}else {d::check_cancel();double _n_pc_34812=d::mod((d::mod((_n_c_34806+_n_shift_34803),this->_n_SW_34713)+this->_n_SW_34713),this->_n_SW_34713);
std::variant<d::String,double> _n_x_34813=(d::truth((_n_pr_34804<this->_n_SH_34714))?d::at(d::at(this->_n_card_34716,_n_pr_34804),_n_pc_34812):std::variant<d::String,double>(0.0));
if((d::truth(_n_noisy_34809)&&d::truth((d::typeOf(_n_x_34813)==d::String(u"number"))))){d::check_cancel();(void)((_n_x_34813=std::variant<d::String,double>(([&](){auto _n_argument_34948=0.0;auto _n_argument_34949=d::minimum({this->_n_N_34718,(std::get<double>(_n_x_34813)+(d::truth((_n_n_34807<0.5))?(-d::number(1.0)):1.0))});return d::maximum({_n_argument_34948,_n_argument_34949});})())));
}
(void)((_n_ch_34808=(d::truth((d::typeOf(_n_x_34813)==d::String(u"number")))?this->_n_ink_34719(std::get<double>(_n_x_34813),_n_paper_34789):std::get<d::String>(_n_x_34813))));
}
(void)(([&](){auto&& _n_array_34950=d::at(this->_n_g_34717,(this->_n_Y0_34712+_n_r_34800));auto _n_index_34951=(this->_n_X0_34711+_n_c_34806);auto _n_value_34952=_n_ch_34808;d::put(_n_array_34950,_n_index_34951,_n_value_34952);return _n_value_34952;})());
}}
}}
return d::join(d::map(this->_n_g_34717,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_34814=_a0;
return d::join(_n_row_34814,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tv-static").cols)*ascii::catalog_meta("tv-static").rows);auto _env=std::make_shared<_n_Record_34816>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tv_static_meta(){return catalog_meta("tv-static");}
std::unique_ptr<Piece> make_tv_static(const AsciiPieceOptions &o){return std::make_unique<Native_tv_static>(o);}
}
