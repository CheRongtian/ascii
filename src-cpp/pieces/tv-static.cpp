// Direct, statically typed C++ from src/pieces/tv-static.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34693;
struct _n_Record_34694;
struct _n_Record_34814;
struct _n_Record_34815;
struct _n_Record_34693{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_34694> _p_options{};
static std::shared_ptr<_n_Record_34693> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34693>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_34694>>(j["options"]);return out;}
};
struct _n_Record_34694{
bool _p_set{};
static std::shared_ptr<_n_Record_34694> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34694>();out->_p_set=d::decode<bool>(j["set"]);return out;}
};
struct _n_Record_34814{
std::optional<bool> _p_set{};
static std::shared_ptr<_n_Record_34814> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34814>();out->_p_set=d::decode<std::optional<bool>>(j["set"]);return out;}
};
struct _n_Record_34815{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34815> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34815>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_34701(double _a0,double _a1,double _a2);
double _n_smooth_34702(double _a0,double _a1,double _a2);
d::Array<d::Array<d::String,false>,false> _n_drawSet_34703(double _a0,double _a1);
d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_drawCard_34704(double _a0,double _a1);
std::shared_ptr<_n_Record_34693> _n_meta_34692=[](){return ([&](){auto _n_object_34820=std::make_shared<_n_Record_34693>();_n_object_34820->_p_name=d::String(u"tv static");_n_object_34820->_p_category=d::String(u"effects");_n_object_34820->_p_note=d::String(u"snow on an old set that tunes into a test card and loses it");_n_object_34820->_p_cols=58.0;_n_object_34820->_p_rows=26.0;_n_object_34820->_p_fps=20.0;_n_object_34820->_p_options=([&](){auto _n_object_34822=std::make_shared<_n_Record_34694>();_n_object_34822->_p_set=true;return _n_object_34822;})();return _n_object_34820;})();}();
const d::String _n_RAMP_34695=[](){return d::String(u" .:+░▒▓█");}();
const double _n_LOOP_34696=[](){return 10.0;}();
d::Array<double,false> _n_BARS_34697=[](){return d::Array<double,false>{7.0,6.0,5.0,4.0,3.0,2.0,1.0};}();
d::Array<double,false> _n_CASTLE_34698=[](){return d::Array<double,false>{1.0,0.0,3.0,0.0,5.0,0.0,7.0};}();
d::Array<d::Array<double,false>,false> _n_BOTTOM_34699=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.17,5.0},d::Array<double,false>{0.34,7.0},d::Array<double,false>{0.51,3.0},d::Array<double,false>{0.68,0.0},d::Array<double,false>{0.73,1.0},d::Array<double,false>{0.78,0.0},d::Array<double,false>{0.83,2.0},d::Array<double,false>{1.0,0.0}};}();
d::Array<double,false> _n_SNOW_34700=[](){return d::Array<double,false>{0.36,0.48,0.6,0.7,0.8,0.9,0.98};}();
double _n_hash_34701(double _a0,double _a1,double _a2){double _n_a_34720=_a0;
double _n_b_34721=_a1;
double _n_c_34722=_a2;
{
double _n_h_34723=([&](){auto _n_left_34823=([&](){auto _n_left_34825=d::imul(_n_a_34720,668265261.0);auto _n_right_34826=d::imul(_n_b_34721,374761393.0);return double(d::i32(_n_left_34825)^d::i32(_n_right_34826));})();auto _n_right_34824=d::imul(_n_c_34722,625341585.0);return double(d::i32(_n_left_34823)^d::i32(_n_right_34824));})();
(void)((_n_h_34723=d::imul(double(d::i32(_n_h_34723)^d::i32(double(d::u32(_n_h_34723)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_34723=d::imul(double(d::i32(_n_h_34723)^d::i32(double(d::u32(_n_h_34723)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_34723)^d::i32(double(d::u32(_n_h_34723)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_smooth_34702(double _a0,double _a1,double _a2){double _n_a_34724=_a0;
double _n_b_34725=_a1;
double _n_v_34726=_a2;
{
double _n_x_34727=([&](){auto _n_argument_34827=0.0;auto _n_argument_34828=d::minimum({1.0,((_n_v_34726-_n_a_34724)/(_n_b_34725-_n_a_34724))});return d::maximum({_n_argument_34827,_n_argument_34828});})();
return ((_n_x_34727*_n_x_34727)*(3.0-(2.0*_n_x_34727)));

}
}

d::Array<d::Array<d::String,false>,false> _n_drawSet_34703(double _a0,double _a1){double _n_cols_34728=_a0;
double _n_rows_34729=_a1;
{
d::Array<d::Array<d::String,false>,false> _n_g_34730=d::Array<d::Array<d::String,false>,false>(d::from(_n_rows_34729,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(_n_cols_34728)).fill(d::String(u" "));}));
auto _n_box_34731=[&]( double _a0,double _a1,double _a2,double _a3,std::optional<d::String> _a4) mutable ->void{double _n_x0_34732=_a0;
double _n_y0_34733=_a1;
double _n_x1_34734=_a2;
double _n_y1_34735=_a3;
d::String _n_c_34736=(d::present(_a4)?d::read(_a4):d::String(u"╭╮╰╯─│"));
{
{double _n_x_34737=(_n_x0_34732+1.0);
for(;d::truth((_n_x_34737<_n_x1_34734));(void)((_n_x_34737++))){d::check_cancel();(void)(([&](){auto&& _n_array_34829=d::at(_n_g_34730,_n_y0_34733);auto _n_index_34830=_n_x_34737;auto _n_value_34831=([&](){auto&& _n_array_34832=d::at(_n_g_34730,_n_y1_34735);auto _n_index_34833=_n_x_34737;auto _n_value_34834=d::at(_n_c_34736,4.0);d::put(_n_array_34832,_n_index_34833,_n_value_34834);return _n_value_34834;})();d::put(_n_array_34829,_n_index_34830,_n_value_34831);return _n_value_34831;})());
}}
{double _n_y_34738=(_n_y0_34733+1.0);
for(;d::truth((_n_y_34738<_n_y1_34735));(void)((_n_y_34738++))){d::check_cancel();(void)(([&](){auto&& _n_array_34835=d::at(_n_g_34730,_n_y_34738);auto _n_index_34836=_n_x0_34732;auto _n_value_34837=([&](){auto&& _n_array_34838=d::at(_n_g_34730,_n_y_34738);auto _n_index_34839=_n_x1_34734;auto _n_value_34840=d::at(_n_c_34736,5.0);d::put(_n_array_34838,_n_index_34839,_n_value_34840);return _n_value_34840;})();d::put(_n_array_34835,_n_index_34836,_n_value_34837);return _n_value_34837;})());
}}
(void)(([&](){auto _n_unpack_34841=d::Array<d::String,false>{d::at(_n_c_34736,0.0),d::at(_n_c_34736,1.0),d::at(_n_c_34736,2.0),d::at(_n_c_34736,3.0)};d::put(d::at(_n_g_34730,_n_y0_34733),_n_x0_34732,d::at(_n_unpack_34841,0.0));d::put(d::at(_n_g_34730,_n_y0_34733),_n_x1_34734,d::at(_n_unpack_34841,1.0));d::put(d::at(_n_g_34730,_n_y1_34735),_n_x0_34732,d::at(_n_unpack_34841,2.0));d::put(d::at(_n_g_34730,_n_y1_34735),_n_x1_34734,d::at(_n_unpack_34841,3.0));return _n_unpack_34841;})());

}
};
(void)(_n_box_34731(1.0,5.0,56.0,23.0,std::optional<d::String>{}));
(void)(_n_box_34731(3.0,6.0,43.0,22.0,std::optional<d::String>{}));
(void)(_n_box_34731(46.0,8.0,52.0,10.0,std::optional<d::String>{}));
(void)(_n_box_34731(46.0,12.0,52.0,14.0,std::optional<d::String>{}));
(void)(_n_box_34731(45.0,16.0,53.0,21.0,std::optional<d::String>(d::String(u"┌┐└┘─│"))));
{double _n_y_34739=17.0;
for(;d::truth((_n_y_34739<=20.0));(void)((_n_y_34739++))){d::check_cancel();{double _n_x_34740=46.0;
for(;d::truth((_n_x_34740<=52.0));(void)((_n_x_34740++))){d::check_cancel();(void)(([&](){auto&& _n_array_34842=d::at(_n_g_34730,_n_y_34739);auto _n_index_34843=_n_x_34740;auto _n_value_34844=d::String(u"═");d::put(_n_array_34842,_n_index_34843,_n_value_34844);return _n_value_34844;})());
}}
}}
(void)(([&](){auto&& _n_array_34845=d::at(_n_g_34730,13.0);auto _n_index_34846=49.0;auto _n_value_34847=d::String(u"╲");d::put(_n_array_34845,_n_index_34846,_n_value_34847);return _n_value_34847;})());
auto _n_put_34741=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_x_34742=_a0;
double _n_y_34743=_a1;
d::String _n_s_34744=_a2;
d::forEach(([&](){d::Array<d::String,false> _n_array_34848;for(const auto &_v:_n_s_34744)_n_array_34848.push(_v);return _n_array_34848;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_34745=_a0;
double _n_i_34746=_a1;
return ([&](){auto&& _n_array_34849=d::at(_n_g_34730,_n_y_34743);auto _n_index_34850=(_n_x_34742+_n_i_34746);auto _n_value_34851=_n_ch_34745;d::put(_n_array_34849,_n_index_34850,_n_value_34851);return _n_value_34851;})();});};
(void)(_n_put_34741(25.0,4.0,d::String(u"▄▄███▄▄")));
{double _n_k_34747=1.0;
for(;d::truth((_n_k_34747<=4.0));(void)((_n_k_34747++))){d::check_cancel();(void)(([&](){auto&& _n_array_34852=d::at(_n_g_34730,(4.0-_n_k_34747));auto _n_index_34853=(25.0-_n_k_34747);auto _n_value_34854=d::String(u"╲");d::put(_n_array_34852,_n_index_34853,_n_value_34854);return _n_value_34854;})());
(void)(([&](){auto&& _n_array_34855=d::at(_n_g_34730,(4.0-_n_k_34747));auto _n_index_34856=(31.0+_n_k_34747);auto _n_value_34857=d::String(u"╱");d::put(_n_array_34855,_n_index_34856,_n_value_34857);return _n_value_34857;})());
}}
(void)(([&](){auto&& _n_array_34858=d::at(_n_g_34730,0.0);auto _n_index_34859=21.0;auto _n_value_34860=([&](){auto&& _n_array_34861=d::at(_n_g_34730,0.0);auto _n_index_34862=35.0;auto _n_value_34863=d::String(u"o");d::put(_n_array_34861,_n_index_34862,_n_value_34863);return _n_value_34863;})();d::put(_n_array_34858,_n_index_34859,_n_value_34860);return _n_value_34860;})());
(void)(_n_put_34741(5.0,24.0,d::String(u"╱")));
(void)(_n_put_34741(4.0,25.0,d::String(u"╱")));
(void)(_n_put_34741(52.0,24.0,d::String(u"╲")));
(void)(_n_put_34741(53.0,25.0,d::String(u"╲")));
return _n_g_34730;

}
}

d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_drawCard_34704(double _a0,double _a1){double _n_SW_34748=_a0;
double _n_SH_34749=_a1;
{
d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_card_34750=d::Array<d::Array<std::variant<d::String,double>,false>,false>(d::map(d::Array<d::Array<double,false>,false>(d::from(_n_SH_34749,[&]( d::Nil _a0,double _a1) mutable ->d::Array<double,false>{double _n_r_34752=_a1;
return d::Array<double,false>(d::from(_n_SW_34748,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_34754=_a1;
{
double _n_u_34755=((_n_c_34754+0.5)/_n_SW_34748);
double _n_v_34756=((_n_r_34752+0.5)/_n_SH_34749);
double _n_bar_34757=([&](){auto _n_argument_34864=6.0;auto _n_argument_34865=std::floor((_n_u_34755*7.0));return d::minimum({_n_argument_34864,_n_argument_34865});})();
if(d::truth((_n_v_34756<0.67))){d::check_cancel();return d::at(_n_BARS_34697,_n_bar_34757);
}
if(d::truth((_n_v_34756<0.75))){d::check_cancel();return d::at(_n_CASTLE_34698,_n_bar_34757);
}
return d::at(d::read(d::find(_n_BOTTOM_34699,[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_34866=_a0;
double _n_end_34758=d::at(_n_binding_34866,0.0);
return (_n_u_34755<_n_end_34758);})),1.0);

}
}));})),[&](const auto &_n_element_34867){return d::Array<std::variant<d::String,double>,false>(d::map(_n_element_34867,[&](const auto &_n_element_34868){return std::variant<d::String,double>(_n_element_34868);}));}));
double _n_R_34759=(d::minimum({(_n_SH_34749*0.43),(_n_SW_34748*0.22)})*2.0);
double _n_cx_34760=(_n_SW_34748/2.0);
double _n_cy_34761=(_n_SH_34749/2.0);
d::Array<std::optional<d::Array<double,false>>,false> _n_span_34762=d::Array<std::optional<d::Array<double,false>>,false>{};
{double _n_r_34763=0.0;
for(;d::truth((_n_r_34763<_n_SH_34749));(void)((_n_r_34763++))){d::check_cancel();double _n_y_34764=(((_n_r_34763+0.5)-_n_cy_34761)*2.0);
double _n_w_34765=((_n_R_34759*_n_R_34759)-(_n_y_34764*_n_y_34764));
(void)(_n_span_34762.push((d::truth((_n_w_34765<0.0))?std::optional<d::Array<double,false>>{}:d::Array<double,false>{std::ceil(((_n_cx_34760-std::sqrt(_n_w_34765))-0.5)),std::floor(((_n_cx_34760+std::sqrt(_n_w_34765))-0.5))})));
}}
double _n_mid_34766=std::floor((_n_SH_34749/2.0));
double _n_mc_34767=std::floor((_n_SW_34748/2.0));
{double _n_r_34768=0.0;
for(;d::truth((_n_r_34768<_n_SH_34749));(void)((_n_r_34768++))){d::check_cancel();if(d::truth((!d::truth(d::at(_n_span_34762,_n_r_34768))))){d::check_cancel();continue;
}
auto _n_binding_34869=d::read(d::at(_n_span_34762,_n_r_34768));
double _n_a_34769=d::at(_n_binding_34869,0.0);
double _n_b_34770=d::at(_n_binding_34869,1.0);
bool _n_up_34771=(_n_r_34768<_n_mid_34766);
std::optional<d::Array<double,false>> _n_near_34772=(d::truth(_n_up_34771)?d::at(_n_span_34762,(_n_r_34768-1.0)):d::at(_n_span_34762,(_n_r_34768+1.0)));
auto _n_binding_34871=([&]()->d::Array<double,false>{auto _n_logical_34870=_n_near_34772;return d::truth(_n_logical_34870)?d::read(_n_logical_34870):d::Array<double,false>{(_n_mc_34767+1.0),(_n_mc_34767-1.0)};})();
double _n_na_34773=d::at(_n_binding_34871,0.0);
double _n_nb_34774=d::at(_n_binding_34871,1.0);
{double _n_c_34775=_n_a_34769;
for(;d::truth((_n_c_34775<=_n_b_34770));(void)((_n_c_34775++))){d::check_cancel();if(((d::truth((_n_c_34775>_n_a_34769))&&d::truth((_n_c_34775<_n_na_34773)))&&d::truth((_n_c_34775<_n_nb_34774)))){d::check_cancel();(void)(([&](){auto&& _n_array_34872=d::at(_n_card_34750,_n_r_34768);auto _n_index_34873=_n_c_34775;auto _n_value_34874=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34872,_n_index_34873,_n_value_34874);return _n_value_34874;})());
}else {d::check_cancel();if(((d::truth((_n_c_34775<_n_b_34770))&&d::truth((_n_c_34775>_n_nb_34774)))&&d::truth((_n_c_34775>_n_na_34773)))){d::check_cancel();(void)(([&](){auto&& _n_array_34875=d::at(_n_card_34750,_n_r_34768);auto _n_index_34876=_n_c_34775;auto _n_value_34877=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34875,_n_index_34876,_n_value_34877);return _n_value_34877;})());
}
}
}}
if(d::truth((_n_a_34769<_n_na_34773))){d::check_cancel();(void)(([&](){auto&& _n_array_34878=d::at(_n_card_34750,_n_r_34768);auto _n_index_34879=_n_a_34769;auto _n_value_34880=(d::truth(_n_up_34771)?std::variant<d::String,double>(d::String(u"╭")):std::variant<d::String,double>(d::String(u"╰")));d::put(_n_array_34878,_n_index_34879,_n_value_34880);return _n_value_34880;})());
(void)(([&](){auto&& _n_array_34881=d::at(_n_card_34750,_n_r_34768);auto _n_index_34882=_n_na_34773;auto _n_value_34883=(d::truth(_n_up_34771)?std::variant<d::String,double>(d::String(u"╯")):std::variant<d::String,double>(d::String(u"╮")));d::put(_n_array_34881,_n_index_34882,_n_value_34883);return _n_value_34883;})());
(void)(([&](){auto&& _n_array_34884=d::at(_n_card_34750,_n_r_34768);auto _n_index_34885=_n_b_34770;auto _n_value_34886=(d::truth(_n_up_34771)?std::variant<d::String,double>(d::String(u"╮")):std::variant<d::String,double>(d::String(u"╯")));d::put(_n_array_34884,_n_index_34885,_n_value_34886);return _n_value_34886;})());
(void)(([&](){auto&& _n_array_34887=d::at(_n_card_34750,_n_r_34768);auto _n_index_34888=_n_nb_34774;auto _n_value_34889=(d::truth(_n_up_34771)?std::variant<d::String,double>(d::String(u"╰")):std::variant<d::String,double>(d::String(u"╭")));d::put(_n_array_34887,_n_index_34888,_n_value_34889);return _n_value_34889;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_34890=d::at(_n_card_34750,_n_r_34768);auto _n_index_34891=_n_a_34769;auto _n_value_34892=std::variant<d::String,double>(([&](){auto&& _n_array_34893=d::at(_n_card_34750,_n_r_34768);auto _n_index_34894=_n_b_34770;auto _n_value_34895=std::variant<d::String,double>(d::String(u"│"));d::put(_n_array_34893,_n_index_34894,_n_value_34895);return std::get<d::String>(_n_value_34895);})());d::put(_n_array_34890,_n_index_34891,_n_value_34892);return _n_value_34892;})());
}
if(d::truth((!d::truth(_n_near_34772)))){d::check_cancel();{double _n_c_34776=(_n_a_34769+1.0);
for(;d::truth((_n_c_34776<_n_b_34770));(void)((_n_c_34776++))){d::check_cancel();(void)(([&](){auto&& _n_array_34896=d::at(_n_card_34750,_n_r_34768);auto _n_index_34897=_n_c_34776;auto _n_value_34898=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34896,_n_index_34897,_n_value_34898);return _n_value_34898;})());
}}
}
}}
auto _n_binding_34899=d::read(d::at(_n_span_34762,_n_mid_34766));
double _n_a_34777=d::at(_n_binding_34899,0.0);
double _n_b_34778=d::at(_n_binding_34899,1.0);
{double _n_c_34779=(_n_a_34777+1.0);
for(;d::truth((_n_c_34779<_n_b_34778));(void)((_n_c_34779++))){d::check_cancel();(void)(([&](){auto&& _n_array_34900=d::at(_n_card_34750,_n_mid_34766);auto _n_index_34901=_n_c_34779;auto _n_value_34902=std::variant<d::String,double>(d::String(u"─"));d::put(_n_array_34900,_n_index_34901,_n_value_34902);return _n_value_34902;})());
}}
{double _n_r_34780=0.0;
for(;d::truth((_n_r_34780<_n_SH_34749));(void)((_n_r_34780++))){d::check_cancel();if(d::truth(d::at(_n_span_34762,_n_r_34780))){d::check_cancel();(void)(([&](){auto&& _n_array_34903=d::at(_n_card_34750,_n_r_34780);auto _n_index_34904=_n_mc_34767;auto _n_value_34905=std::variant<d::String,double>(d::String(u"│"));d::put(_n_array_34903,_n_index_34904,_n_value_34905);return _n_value_34905;})());
}
}}
(void)(([&](){auto&& _n_array_34906=d::at(_n_card_34750,_n_mid_34766);auto _n_index_34907=_n_a_34777;auto _n_value_34908=std::variant<d::String,double>(d::String(u"├"));d::put(_n_array_34906,_n_index_34907,_n_value_34908);return _n_value_34908;})());
(void)(([&](){auto&& _n_array_34909=d::at(_n_card_34750,_n_mid_34766);auto _n_index_34910=_n_b_34778;auto _n_value_34911=std::variant<d::String,double>(d::String(u"┤"));d::put(_n_array_34909,_n_index_34910,_n_value_34911);return _n_value_34911;})());
(void)(([&](){auto&& _n_array_34912=d::at(_n_card_34750,_n_mid_34766);auto _n_index_34913=_n_mc_34767;auto _n_value_34914=std::variant<d::String,double>(d::String(u"┼"));d::put(_n_array_34912,_n_index_34913,_n_value_34914);return _n_value_34914;})());
(void)(([&](){auto&& _n_array_34915=d::at(_n_card_34750,d::findIndex(_n_span_34762,d::ToBoolean{}));auto _n_index_34916=_n_mc_34767;auto _n_value_34917=std::variant<d::String,double>(d::String(u"┬"));d::put(_n_array_34915,_n_index_34916,_n_value_34917);return _n_value_34917;})());
(void)(([&](){auto&& _n_array_34919=d::at(_n_card_34750,((_n_SH_34749-1.0)-d::findIndex(([&](){d::Array<std::optional<d::Array<double,false>>,false> _n_array_34922;for(const auto &_v:_n_span_34762)_n_array_34922.push(_v);return _n_array_34922;})().reverse(),d::ToBoolean{})));auto _n_index_34920=_n_mc_34767;auto _n_value_34921=std::variant<d::String,double>(d::String(u"┴"));d::put(_n_array_34919,_n_index_34920,_n_value_34921);return _n_value_34921;})());
return _n_card_34750;

}
}

struct Native_tv_static final:ascii::Piece{
bool _n_set_34705{};
double _n_cols_34706{};
double _n_rows_34707{};
double _n_fps_34708{};
std::optional<d::Array<d::Array<d::String,false>,false>> _n_frame_34709{};
double _n_X0_34710{};
double _n_Y0_34711{};
double _n_SW_34712{};
double _n_SH_34713{};
d::Array<d::Array<std::variant<d::String,double>,false>,false> _n_card_34715{};
d::Array<d::Array<d::String,false>,false> _n_g_34716{};
double _n_N_34717{};
std::function<d::String(double,std::shared_ptr<_n_Record_34815>)> _render;
bool _n_inside_34714(double _a0,double _a1){double _n_c_34781=_a0;
double _n_r_34782=_a1;
{
if(d::truth((!d::truth(this->_n_set_34705)))){d::check_cancel();return true;
}
double _n_x_34783=(((_n_c_34781+0.5)-(this->_n_SW_34712/2.0))/(this->_n_SW_34712/2.0));
double _n_y_34784=(((_n_r_34782+0.5)-(this->_n_SH_34713/2.0))/(this->_n_SH_34713/2.0));
return ((std::pow(_n_x_34783,6.0)+std::pow(_n_y_34784,6.0))<=1.02);

}
}

d::String _n_ink_34718(double _a0,bool _a1){double _n_level_34785=_a0;
bool _n_paper_34786=_a1;
return d::at(_n_RAMP_34695,(d::truth(_n_paper_34786)?(this->_n_N_34717-_n_level_34785):_n_level_34785));}

explicit Native_tv_static(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34923=d::decode<std::shared_ptr<_n_Record_34814>>(_options.data);
this->_n_set_34705=(d::present(_n_binding_34923->_p_set)?d::read(_n_binding_34923->_p_set):true);
auto _n_binding_34924=_n_meta_34692;
this->_n_cols_34706=_n_binding_34924->_p_cols;
this->_n_rows_34707=_n_binding_34924->_p_rows;
this->_n_fps_34708=_n_binding_34924->_p_fps;
this->_n_frame_34709=(d::truth(this->_n_set_34705)?std::optional<d::Array<d::Array<d::String,false>,false>>(_n_drawSet_34703(this->_n_cols_34706,this->_n_rows_34707)):std::optional<d::Array<d::Array<d::String,false>,false>>{});
auto _n_binding_34925=(d::truth(this->_n_set_34705)?d::Array<double,false>{4.0,7.0,39.0,15.0}:d::Array<double,false>{0.0,0.0,this->_n_cols_34706,this->_n_rows_34707});
this->_n_X0_34710=d::at(_n_binding_34925,0.0);
this->_n_Y0_34711=d::at(_n_binding_34925,1.0);
this->_n_SW_34712=d::at(_n_binding_34925,2.0);
this->_n_SH_34713=d::at(_n_binding_34925,3.0);
this->_n_card_34715=_n_drawCard_34704(this->_n_SW_34712,this->_n_SH_34713);
this->_n_g_34716=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_34707,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_34706));}));
this->_n_N_34717=(double(_n_RAMP_34695.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_34815> _a1) mutable ->d::String{double _n_t_34787=_a0;
auto _n_binding_34928=(d::present(_a1)?_a1:([&](){auto _n_object_34927=std::make_shared<_n_Record_34815>();return _n_object_34927;})());
bool _n_paper_34788=(d::present(_n_binding_34928->_p_paper)?d::read(_n_binding_34928->_p_paper):false);
{
double _n_u_34789=d::mod((d::mod(_n_t_34787,_n_LOOP_34696)+_n_LOOP_34696),_n_LOOP_34696);
double _n_k_34790=std::floor((_n_t_34787*this->_n_fps_34708));
double _n_lock_34791=([&](){auto _n_left_34929=_n_smooth_34702(1.6,3.4,_n_u_34789);auto _n_right_34930=(1.0-_n_smooth_34702(6.6,7.8,_n_u_34789));return (_n_left_34929*_n_right_34930);})();
double _n_dial_34792=([&](){auto _n_argument_34931=0.0;auto _n_argument_34932=([&](){auto _n_argument_34933=3.0;auto _n_argument_34934=std::floor(((_n_u_34789-1.1)*8.0));auto _n_argument_34935=(3.0-std::floor(((_n_u_34789-6.4)*8.0)));return d::minimum({_n_argument_34933,_n_argument_34934,_n_argument_34935});})();return d::maximum({_n_argument_34931,_n_argument_34932});})();
double _n_snow_34793=(1.0-(0.97*_n_lock_34791));
double _n_roll_34794=((std::pow((1.0-_n_lock_34791),2.0)*(this->_n_SH_34713+2.0))*2.5);
double _n_tear_34795=((1.0-_n_lock_34791)*9.0);
double _n_hum_34796=((d::mod(((_n_u_34789/_n_LOOP_34696)+0.45),1.0)*(this->_n_SH_34713+6.0))-3.0);
{double _n_r_34797=0.0;
for(;d::truth((_n_r_34797<this->_n_rows_34707));(void)((_n_r_34797++))){d::check_cancel();{double _n_c_34798=0.0;
for(;d::truth((_n_c_34798<this->_n_cols_34706));(void)((_n_c_34798++))){d::check_cancel();(void)(([&](){auto&& _n_array_34936=d::at(this->_n_g_34716,_n_r_34797);auto _n_index_34937=_n_c_34798;auto _n_value_34938=(d::truth(this->_n_frame_34709)?d::at(d::at(d::read(this->_n_frame_34709),_n_r_34797),_n_c_34798):d::String(u" "));d::put(_n_array_34936,_n_index_34937,_n_value_34938);return _n_value_34938;})());
}}
}}
if(d::truth(this->_n_frame_34709)){d::check_cancel();(void)(([&](){auto&& _n_array_34939=d::at(this->_n_g_34716,9.0);auto _n_index_34940=49.0;auto _n_value_34941=d::at(d::String(u"╱─╲│"),_n_dial_34792);d::put(_n_array_34939,_n_index_34940,_n_value_34941);return _n_value_34941;})());
}
{double _n_r_34799=0.0;
for(;d::truth((_n_r_34799<this->_n_SH_34713));(void)((_n_r_34799++))){d::check_cancel();double _n_dim_34800=(1.0-(0.45*std::exp((-d::number(std::pow(((_n_r_34799-_n_hum_34796)/2.2),2.0))))));
double _n_line_34801=(0.9+(0.2*_n_hash_34701(_n_k_34790,_n_r_34799,9.0)));
double _n_shift_34802=d::round(([&](){auto _n_left_34942=(_n_tear_34795*std::sin(((_n_r_34799*0.8)+(_n_u_34789*9.0))));auto _n_right_34943=_n_hash_34701(double(d::i32(_n_k_34790)>>(d::u32(2.0)&31)),_n_r_34799,3.0);return (_n_left_34942*_n_right_34943);})());
double _n_pr_34803=std::floor(d::mod((_n_r_34799+_n_roll_34794),(this->_n_SH_34713+2.0)));
double _n_prev_34804=_n_hash_34701(_n_k_34790,_n_r_34799,1.0);
{double _n_c_34805=0.0;
for(;d::truth((_n_c_34805<this->_n_SW_34712));(void)((_n_c_34805++))){d::check_cancel();if(d::truth((!d::truth(this->_n_inside_34714(_n_c_34805,_n_r_34799))))){d::check_cancel();(void)(([&](){auto&& _n_array_34944=d::at(this->_n_g_34716,(this->_n_Y0_34711+_n_r_34799));auto _n_index_34945=(this->_n_X0_34710+_n_c_34805);auto _n_value_34946=d::String(u" ");d::put(_n_array_34944,_n_index_34945,_n_value_34946);return _n_value_34946;})());
continue;
}
double _n_n_34806=_n_hash_34701(_n_k_34790,((_n_r_34799*97.0)+_n_c_34805),2.0);
(void)((_n_prev_34804=((0.6*_n_n_34806)+(0.4*_n_prev_34804))));
d::String _n_ch_34807{};
bool _n_noisy_34808=(_n_hash_34701(_n_k_34790,((_n_r_34799*97.0)+_n_c_34805),5.0)<_n_snow_34793);
if((d::truth(_n_noisy_34808)&&d::truth((_n_hash_34701(_n_k_34790,((_n_r_34799*97.0)+_n_c_34805),6.0)>=std::pow(_n_lock_34791,6.0))))){d::check_cancel();double _n_v_34809=((_n_prev_34804*_n_line_34801)*_n_dim_34800);
double _n_level_34810=0.0;
while((d::truth((_n_level_34810<double(_n_SNOW_34700.size())))&&d::truth((_n_v_34809>d::at(_n_SNOW_34700,_n_level_34810))))){d::check_cancel();(void)((_n_level_34810++));
}
(void)((_n_ch_34807=this->_n_ink_34718(_n_level_34810,_n_paper_34788)));
}else {d::check_cancel();double _n_pc_34811=d::mod((d::mod((_n_c_34805+_n_shift_34802),this->_n_SW_34712)+this->_n_SW_34712),this->_n_SW_34712);
std::variant<d::String,double> _n_x_34812=(d::truth((_n_pr_34803<this->_n_SH_34713))?d::at(d::at(this->_n_card_34715,_n_pr_34803),_n_pc_34811):std::variant<d::String,double>(0.0));
if((d::truth(_n_noisy_34808)&&d::truth((d::typeOf(_n_x_34812)==d::String(u"number"))))){d::check_cancel();(void)((_n_x_34812=std::variant<d::String,double>(([&](){auto _n_argument_34947=0.0;auto _n_argument_34948=d::minimum({this->_n_N_34717,(std::get<double>(_n_x_34812)+(d::truth((_n_n_34806<0.5))?(-d::number(1.0)):1.0))});return d::maximum({_n_argument_34947,_n_argument_34948});})())));
}
(void)((_n_ch_34807=(d::truth((d::typeOf(_n_x_34812)==d::String(u"number")))?this->_n_ink_34718(std::get<double>(_n_x_34812),_n_paper_34788):std::get<d::String>(_n_x_34812))));
}
(void)(([&](){auto&& _n_array_34949=d::at(this->_n_g_34716,(this->_n_Y0_34711+_n_r_34799));auto _n_index_34950=(this->_n_X0_34710+_n_c_34805);auto _n_value_34951=_n_ch_34807;d::put(_n_array_34949,_n_index_34950,_n_value_34951);return _n_value_34951;})());
}}
}}
return d::join(d::map(this->_n_g_34716,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_34813=_a0;
return d::join(_n_row_34813,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tv-static").cols)*ascii::catalog_meta("tv-static").rows);auto _env=std::make_shared<_n_Record_34815>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tv_static_meta(){return catalog_meta("tv-static");}
std::unique_ptr<Piece> make_tv_static(const AsciiPieceOptions &o){return std::make_unique<Native_tv_static>(o);}
}
