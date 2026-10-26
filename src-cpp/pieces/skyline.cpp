// Direct, statically typed C++ from src/pieces/skyline.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28037;
struct _n_Record_28043;
struct _n_Record_28155;
struct _n_Record_28037{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_28037> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28037>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28043{
d::Array<d::String,false> _p_tank{};
d::Array<d::String,false> _p_mast{};
d::Array<d::String,false> _p_spire{};
d::Array<d::String,false> _p_crown{};
static std::shared_ptr<_n_Record_28043> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28043>();out->_p_tank=d::decode<d::Array<d::String,false>>(j["tank"]);out->_p_mast=d::decode<d::Array<d::String,false>>(j["mast"]);out->_p_spire=d::decode<d::Array<d::String,false>>(j["spire"]);out->_p_crown=d::decode<d::Array<d::String,false>>(j["crown"]);return out;}
};
struct _n_Record_28155{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28155> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28155>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_28046(double _a0);
std::shared_ptr<_n_Record_28037> _n_meta_28036=[](){return ([&](){auto _n_object_28158=std::make_shared<_n_Record_28037>();_n_object_28158->_p_name=d::String(u"skyline");_n_object_28158->_p_category=d::String(u"objects");_n_object_28158->_p_note=d::String(u"a city at night, windows going on and off, a blinking mast");_n_object_28158->_p_cols=64.0;_n_object_28158->_p_rows=23.0;_n_object_28158->_p_fps=10.0;return _n_object_28158;})();}();
const double _n_BASE_28038=[](){return 18.0;}();
const double _n_SHARE_28039=[](){return 0.4;}();
d::Array<d::Array<double,false>,false> _n_FAR_28040=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{3.0,6.0,9.0},d::Array<double,false>{14.0,6.0,12.0},d::Array<double,false>{25.0,5.0,9.0},d::Array<double,false>{36.0,6.0,12.0},d::Array<double,false>{48.0,7.0,10.0},d::Array<double,false>{57.0,6.0,12.0}};}();
d::Array<std::shared_ptr<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>,false> _n_NEAR_28041=[](){return d::Array<std::shared_ptr<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>,false>{std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>((-d::number(3.0)),8.0,5.0,d::Array<d::Array<double,false>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(6.0,7.0,8.0,d::Array<d::Array<double,false>,false>{},std::optional<d::String>(d::String(u"tank"))),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(13.0,5.0,6.0,d::Array<d::Array<double,false>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(19.0,9.0,10.0,d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,1.0},d::Array<double,false>{1.0,1.0},d::Array<double,false>{1.0,1.0}},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(29.0,7.0,13.0,d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,1.0}},std::optional<d::String>(d::String(u"mast"))),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(37.0,5.0,7.0,d::Array<d::Array<double,false>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(42.0,7.0,10.0,d::Array<d::Array<double,false>,false>{},std::optional<d::String>(d::String(u"spire"))),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(50.0,5.0,5.0,d::Array<d::Array<double,false>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>>(55.0,11.0,8.0,d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,2.0}},std::optional<d::String>(d::String(u"crown")))};}();
std::shared_ptr<_n_Record_28043> _n_TOPS_28042=[](){return ([&](){auto _n_object_28160=std::make_shared<_n_Record_28043>();_n_object_28160->_p_tank=d::Array<d::String,false>{d::String(u"╨ ╨"),d::String(u"▄▄▄")};_n_object_28160->_p_mast=d::Array<d::String,false>{d::String(u"╱│╲"),d::String(u" │ "),d::String(u" │ ")};_n_object_28160->_p_spire=d::Array<d::String,false>{d::String(u"╱   ╲"),d::String(u" ╱ ╲ "),d::String(u"  ╿  ")};_n_object_28160->_p_crown=d::Array<d::String,false>{d::String(u"╭───╮"),d::String(u" ╭─╮ ")};return _n_object_28160;})();}();
d::Array<d::Array<double,false>,false> _n_STARS_28044=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,18.0},d::Array<double,false>{4.0,23.0},d::Array<double,false>{2.0,27.0},d::Array<double,false>{6.0,40.0},d::Array<double,false>{1.0,45.0},d::Array<double,false>{7.0,61.0},d::Array<double,false>{3.0,56.0},d::Array<double,false>{5.0,50.0},d::Array<double,false>{0.0,36.0},d::Array<double,false>{3.0,38.0},d::Array<double,false>{8.0,1.0},d::Array<double,false>{0.0,59.0}};}();
d::Array<double,false> _n_MOON_28045=[](){return d::Array<double,false>{9.0,3.5,1.9};}();
std::function<double()> _n_mulberry32_28046(double _a0){double _n_seed_28070=_a0;
{
double _n_s_28071=double(d::i32(_n_seed_28070)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_28071=double(d::i32((_n_s_28071+1831565813.0))|d::i32(0.0))));
double _n_t_28072=d::imul(double(d::i32(_n_s_28071)^d::i32(double(d::u32(_n_s_28071)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_28071)));
(void)((_n_t_28072=double(d::i32((_n_t_28072+d::imul(double(d::i32(_n_t_28072)^d::i32(double(d::u32(_n_t_28072)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_28072)))))^d::i32(_n_t_28072))));
return (double(d::u32(double(d::i32(_n_t_28072)^d::i32(double(d::u32(_n_t_28072)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_skyline final:ascii::Piece{
double _n_cols_28047{};
double _n_rows_28048{};
std::function<double()> _n_rand_28049{};
d::Array<d::Array<d::String,false>,false> _n_grid_28050{};
d::Array<d::Array<d::String,false>,false> _n_city_28052{};
d::Array<std::shared_ptr<std::tuple<double,double,bool,double>>,false> _n_panes_28055{};
d::Array<std::shared_ptr<std::tuple<double,double,bool,double>>,false> _n_shown_28056{};
std::shared_ptr<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>> _n_mast_28057{};
d::Array<double,false> _n_light_28058{};
d::String _n_QUAD_28059{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_moon_28060{};
double _n_mx_28061{};
double _n_my_28062{};
double _n_mr_28063{};
d::Array<bool,false> _n_lit_28064{};
double _n_next_28065{};
double _n_floor_28066{};
double _n_clock_28067{};
std::function<d::String(double,std::shared_ptr<_n_Record_28155>)> _render;
void _n_put_28051(double _a0,double _a1,d::String _a2){double _n_c_28073=_a0;
double _n_r_28074=_a1;
d::String _n_g_28075=_a2;
{
if((((d::truth((_n_c_28073>=0.0))&&d::truth((_n_c_28073<this->_n_cols_28047)))&&d::truth((_n_r_28074>=0.0)))&&d::truth((_n_r_28074<this->_n_rows_28048)))){d::check_cancel();(void)(([&](){auto&& _n_array_28203=d::at(this->_n_grid_28050,_n_r_28074);auto _n_index_28204=_n_c_28073;auto _n_value_28205=_n_g_28075;d::put(_n_array_28203,_n_index_28204,_n_value_28205);return _n_value_28205;})());
}

}
}

std::variant<d::String,bool> _n_set_28053(double _a0,double _a1,d::String _a2){double _n_c_28076=_a0;
double _n_r_28077=_a1;
d::String _n_g_28078=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_28206=([&]()->bool{auto _n_logical_28210=([&]()->bool{auto _n_logical_28211=(_n_c_28076>=0.0);return d::truth(_n_logical_28211)?(_n_c_28076<this->_n_cols_28047):_n_logical_28211;})();return d::truth(_n_logical_28210)?(_n_r_28077>=0.0):_n_logical_28210;})();return d::truth(_n_logical_28206)?std::variant<d::String,bool>(([&](){auto&& _n_array_28207=d::at(this->_n_city_28052,_n_r_28077);auto _n_index_28208=_n_c_28076;auto _n_value_28209=_n_g_28078;d::put(_n_array_28207,_n_index_28208,_n_value_28209);return _n_value_28209;})()):std::variant<d::String,bool>(_n_logical_28206);})();}

std::variant<d::String,bool> _n_draw_28054(double _a0,double _a1,d::String _a2){double _n_c_28079=_a0;
double _n_r_28080=_a1;
d::String _n_g_28081=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_28212=(_n_g_28081!=d::String(u" "));return d::truth(_n_logical_28212)?this->_n_set_28053(_n_c_28079,_n_r_28080,_n_g_28081):std::variant<d::String,bool>(_n_logical_28212);})();}

double _n_pick_28068(bool _a0,bool _a1){bool _n_on_28124=_a0;
bool _n_near_28125=_a1;
{
double _n_w_28126=double(d::i32((this->_n_rand_28049()*double(this->_n_lit_28064.size())))|d::i32(0.0));
{double _n_n_28127=0.0;
for(;(d::truth((_n_n_28127<double(this->_n_lit_28064.size())))&&d::truth(([&]()->bool{auto _n_logical_28213=(d::at(this->_n_lit_28064,_n_w_28126)==_n_on_28124);return d::truth(_n_logical_28213)?_n_logical_28213:([&]()->bool{auto _n_logical_28214=_n_near_28125;return d::truth(_n_logical_28214)?std::get<2>(*d::at(this->_n_shown_28056,_n_w_28126)):_n_logical_28214;})();})()));(void)((_n_n_28127++))){d::check_cancel();(void)((_n_w_28126=d::mod((_n_w_28126+1.0),double(this->_n_lit_28064.size()))));
}}
return _n_w_28126;

}
}

void _n_advance_28069(double _a0){double _n_t_28128=_a0;
{
while(d::truth((d::minimum({this->_n_next_28065,this->_n_floor_28066})<=_n_t_28128))){d::check_cancel();bool _n_on_28129=([&](){auto _n_left_28215=this->_n_rand_28049();auto _n_right_28216=(0.5+((_n_SHARE_28039-(double(d::filter(this->_n_lit_28064,d::ToBoolean{}).size())/double(this->_n_lit_28064.size())))*4.0));return (_n_left_28215<_n_right_28216);})();
if(d::truth((this->_n_floor_28066<this->_n_next_28065))){d::check_cancel();auto _n_binding_28218=d::at(this->_n_shown_28056,this->_n_pick_28068(_n_on_28129,true));
double _n_r_28130=std::get<0>(*_n_binding_28218);
double _n_n_28131=std::get<3>(*_n_binding_28218);
(void)(d::forEach(this->_n_shown_28056,[&]( std::shared_ptr<std::tuple<double,double,bool,double>> _a0,double _a1) mutable ->bool{auto _n_binding_28219=_a0;
double _n_r2_28132=std::get<0>(*_n_binding_28219);
double _n_n2_28133=std::get<3>(*_n_binding_28219);
double _n_i_28134=_a1;
return ([&]()->bool{auto _n_logical_28220=([&]()->bool{auto _n_logical_28224=(_n_r2_28132==_n_r_28130);return d::truth(_n_logical_28224)?(_n_n2_28133==_n_n_28131):_n_logical_28224;})();return d::truth(_n_logical_28220)?([&](){auto&& _n_array_28221=this->_n_lit_28064;auto _n_index_28222=_n_i_28134;auto _n_value_28223=_n_on_28129;d::put(_n_array_28221,_n_index_28222,_n_value_28223);return _n_value_28223;})():_n_logical_28220;})();}));
(void)((this->_n_floor_28066=(this->_n_floor_28066+(1.6+(this->_n_rand_28049()*1.2)))));
}else {d::check_cancel();(void)(([&](){auto&& _n_array_28225=this->_n_lit_28064;auto _n_index_28226=this->_n_pick_28068(_n_on_28129,false);auto _n_value_28227=_n_on_28129;d::put(_n_array_28225,_n_index_28226,_n_value_28227);return _n_value_28227;})());
(void)((this->_n_next_28065=(this->_n_next_28065+(0.12+(this->_n_rand_28049()*0.3)))));
}
}

}
}

explicit Native_skyline(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28161=_n_meta_28036;
this->_n_cols_28047=_n_binding_28161->_p_cols;
this->_n_rows_28048=_n_binding_28161->_p_rows;
this->_n_rand_28049=_n_mulberry32_28046(19.0);
this->_n_grid_28050=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_28048,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_28047)).fill(d::String(u" "));}));
this->_n_city_28052=d::Array<d::Array<d::String,false>,false>(d::from(_n_BASE_28038,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_28047)).fill(d::String(u" "));}));
this->_n_panes_28055=d::Array<std::shared_ptr<std::tuple<double,double,bool,double>>,false>{};
for(auto &&_n_item_28162:_n_FAR_28040){d::check_cancel();auto _n_binding_28163=_n_item_28162;
double _n_x_28082=d::at(_n_binding_28163,0.0);
double _n_w_28083=d::at(_n_binding_28163,1.0);
double _n_h_28084=d::at(_n_binding_28163,2.0);
{
{double _n_r_28085=(_n_BASE_28038-_n_h_28084);
for(;d::truth((_n_r_28085<_n_BASE_28038));(void)((_n_r_28085++))){d::check_cancel();{double _n_c_28086=_n_x_28082;
for(;d::truth((_n_c_28086<(_n_x_28082+_n_w_28083)));(void)((_n_c_28086++))){d::check_cancel();(void)(this->_n_set_28053(_n_c_28086,_n_r_28085,d::String(u"░")));
}}
}}
{double _n_r_28087=((_n_BASE_28038-_n_h_28084)+1.0);
for(;d::truth((_n_r_28087<_n_BASE_28038));(void)((_n_r_28087=(_n_r_28087+2.0)))){d::check_cancel();{double _n_c_28088=(_n_x_28082+1.0);
for(;d::truth((_n_c_28088<((_n_x_28082+_n_w_28083)-1.0)));(void)((_n_c_28088=(_n_c_28088+2.0)))){d::check_cancel();(void)(this->_n_panes_28055.push(std::make_shared<std::tuple<double,double,bool,double>>(_n_r_28087,_n_c_28088,true,(-d::number(1.0)))));
}}
}}

}
}
(void)(d::forEach(_n_NEAR_28041,[&]( std::shared_ptr<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>> _a0,double _a1) mutable ->void{auto _n_binding_28164=_a0;
double _n_x_28089=std::get<0>(*_n_binding_28164);
double _n_w_28090=std::get<1>(*_n_binding_28164);
double _n_h_28091=std::get<2>(*_n_binding_28164);
d::Array<d::Array<double,false>,false> _n_steps_28092=std::get<3>(*_n_binding_28164);
std::optional<d::String> _n_top_28093=std::get<4>(*_n_binding_28164);
double _n_n_28094=_a1;
{
auto _n_binding_28165=d::Array<double,false>{_n_x_28089,((_n_x_28089+_n_w_28090)-1.0),(_n_BASE_28038-_n_h_28091)};
double _n_l_28095=d::at(_n_binding_28165,0.0);
double _n_rgt_28096=d::at(_n_binding_28165,1.0);
double _n_t_28097=d::at(_n_binding_28165,2.0);
auto _n_tier_28098=[&]( double _a0) mutable ->void{double _n_r_28099=_a0;
{
{double _n_c_28100=_n_l_28095;
for(;d::truth((_n_c_28100<=_n_rgt_28096));(void)((_n_c_28100++))){d::check_cancel();(void)(this->_n_set_28053(_n_c_28100,_n_r_28099,((d::truth((_n_c_28100==_n_l_28095))||d::truth((_n_c_28100==_n_rgt_28096)))?d::String(u"│"):d::String(u" "))));
}}
{double _n_c_28101=(_n_l_28095+2.0);
for(;d::truth((_n_c_28101<_n_rgt_28096));(void)((_n_c_28101=(_n_c_28101+2.0)))){d::check_cancel();(void)(this->_n_panes_28055.push(std::make_shared<std::tuple<double,double,bool,double>>(_n_r_28099,_n_c_28101,false,_n_n_28094)));
}}

}
};
{double _n_r_28102=(_n_t_28097+1.0);
for(;d::truth((_n_r_28102<_n_BASE_28038));(void)((_n_r_28102++))){d::check_cancel();(void)(_n_tier_28098(_n_r_28102));
}}
{double _n_c_28103=_n_l_28095;
for(;d::truth((_n_c_28103<=_n_rgt_28096));(void)((_n_c_28103++))){d::check_cancel();(void)(this->_n_set_28053(_n_c_28103,_n_t_28097,(d::truth((_n_c_28103==_n_l_28095))?d::String(u"┌"):(d::truth((_n_c_28103==_n_rgt_28096))?d::String(u"┐"):d::String(u"─")))));
}}
for(auto &&_n_item_28166:_n_steps_28092){d::check_cancel();auto _n_binding_28167=_n_item_28166;
double _n_inset_28104=d::at(_n_binding_28167,0.0);
double _n_tall_28105=d::at(_n_binding_28167,1.0);
{
(void)(((_n_l_28095=(_n_l_28095+_n_inset_28104)),(_n_rgt_28096=(_n_rgt_28096-_n_inset_28104))));
(void)((this->_n_set_28053(_n_l_28095,_n_t_28097,d::String(u"┴")),this->_n_set_28053(_n_rgt_28096,_n_t_28097,d::String(u"┴"))));
{double _n_r_28106=((_n_t_28097-_n_tall_28105)+1.0);
for(;d::truth((_n_r_28106<_n_t_28097));(void)((_n_r_28106++))){d::check_cancel();(void)(_n_tier_28098(_n_r_28106));
}}
(void)((_n_t_28097=(_n_t_28097-_n_tall_28105)));
{double _n_c_28107=_n_l_28095;
for(;d::truth((_n_c_28107<=_n_rgt_28096));(void)((_n_c_28107++))){d::check_cancel();(void)(this->_n_set_28053(_n_c_28107,_n_t_28097,(d::truth((_n_c_28107==_n_l_28095))?d::String(u"┌"):(d::truth((_n_c_28107==_n_rgt_28096))?d::String(u"┐"):d::String(u"─")))));
}}

}
}
(void)(d::forEach(([&]()->d::Array<d::String,false>{auto _n_logical_28168=([&]()->d::Array<d::String,false>{auto _n_record_28169=_n_TOPS_28042;auto _n_key_28170=d::read(_n_top_28093);if(_n_key_28170==u"tank")return _n_record_28169->_p_tank;if(_n_key_28170==u"mast")return _n_record_28169->_p_mast;if(_n_key_28170==u"spire")return _n_record_28169->_p_spire;if(_n_key_28170==u"crown")return _n_record_28169->_p_crown;return {};})();return d::truth(_n_logical_28168)?_n_logical_28168:d::Array<d::String,false>{};})(),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_28108=_a0;
double _n_i_28109=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_28171;for(const auto &_v:_n_s_28108)_n_array_28171.push(_v);return _n_array_28171;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_g_28110=_a0;
double _n_j_28111=_a1;
return ([&](){auto _n_argument_28172=(std::floor(((((_n_l_28095+_n_rgt_28096)+1.0)-double(_n_s_28108.size()))/2.0))+_n_j_28111);auto _n_argument_28173=((_n_t_28097-1.0)-_n_i_28109);auto _n_argument_28174=_n_g_28110;return this->_n_draw_28054(_n_argument_28172,_n_argument_28173,_n_argument_28174);})();});}));

}
}));
this->_n_shown_28056=d::filter(this->_n_panes_28055,[&]( std::shared_ptr<std::tuple<double,double,bool,double>> _a0) mutable ->bool{auto _n_binding_28175=_a0;
double _n_r_28112=std::get<0>(*_n_binding_28175);
double _n_c_28113=std::get<1>(*_n_binding_28175);
bool _n_far_28114=std::get<2>(*_n_binding_28175);
return ([&]()->bool{auto _n_logical_28176=([&]()->bool{auto _n_logical_28178=(_n_c_28113>=0.0);return d::truth(_n_logical_28178)?(_n_c_28113<this->_n_cols_28047):_n_logical_28178;})();return d::truth(_n_logical_28176)?([&]()->bool{auto _n_logical_28177=(!d::truth(_n_far_28114));return d::truth(_n_logical_28177)?_n_logical_28177:(d::at(d::at(this->_n_city_28052,_n_r_28112),_n_c_28113)==d::String(u"░"));})():_n_logical_28176;})();});
this->_n_mast_28057=d::read(d::find(_n_NEAR_28041,[&]( std::shared_ptr<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>> _a0) mutable ->bool{std::shared_ptr<std::tuple<double,double,double,d::Array<d::Array<double,false>,false>,std::optional<d::String>>> _n_b_28115=_a0;
return (d::equal(std::get<4>(*_n_b_28115),d::String(u"mast")));}));
this->_n_light_28058=d::Array<double,false>{((_n_BASE_28038-std::get<2>(*this->_n_mast_28057))-5.0),(std::get<0>(*this->_n_mast_28057)+double(d::i32(std::get<1>(*this->_n_mast_28057))>>(d::u32(1.0)&31)))};
this->_n_QUAD_28059=d::String(u" ▗▖▄▝▐▞▟▘▚▌▙▀▜▛█");
this->_n_moon_28060=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
auto _n_binding_28179=_n_MOON_28045;
this->_n_mx_28061=d::at(_n_binding_28179,0.0);
this->_n_my_28062=d::at(_n_binding_28179,1.0);
this->_n_mr_28063=d::at(_n_binding_28179,2.0);
{double _n_r_28116=std::floor((this->_n_my_28062-this->_n_mr_28063));
for(;d::truth((_n_r_28116<=(this->_n_my_28062+this->_n_mr_28063)));(void)((_n_r_28116++))){d::check_cancel();{double _n_c_28117=std::floor((this->_n_mx_28061-(2.0*this->_n_mr_28063)));
for(;d::truth((_n_c_28117<=(this->_n_mx_28061+(2.0*this->_n_mr_28063))));(void)((_n_c_28117++))){d::check_cancel();double _n_q_28118=0.0;
for(auto &&_n_item_28180:d::Array<d::Array<double,false>,false>{d::Array<double,false>{8.0,0.25,0.25},d::Array<double,false>{4.0,0.75,0.25},d::Array<double,false>{2.0,0.25,0.75},d::Array<double,false>{1.0,0.75,0.75}}){d::check_cancel();auto _n_binding_28181=_n_item_28180;
double _n_b_28119=d::at(_n_binding_28181,0.0);
double _n_dx_28120=d::at(_n_binding_28181,1.0);
double _n_dy_28121=d::at(_n_binding_28181,2.0);
{
double _n_x_28122=(((_n_c_28117+_n_dx_28120)-this->_n_mx_28061)/2.0);
double _n_y_28123=((_n_r_28116+_n_dy_28121)-this->_n_my_28062);
if((d::truth((d::hypot(std::initializer_list<double>{_n_x_28122,_n_y_28123})<this->_n_mr_28063))&&d::truth((d::hypot(std::initializer_list<double>{(_n_x_28122-1.1),_n_y_28123})>(this->_n_mr_28063*0.95))))){d::check_cancel();(void)((_n_q_28118=double(d::i32(_n_q_28118)|d::i32(_n_b_28119))));
}

}
}
if(d::truth(_n_q_28118)){d::check_cancel();(void)(this->_n_moon_28060.push(std::make_shared<std::tuple<double,double,d::String>>(_n_r_28116,_n_c_28117,d::at(this->_n_QUAD_28059,_n_q_28118))));
}
}}
}}
this->_n_lit_28064=d::map(this->_n_shown_28056,[&]( ) mutable ->bool{return (this->_n_rand_28049()<_n_SHARE_28039);});
this->_n_next_28065=0.2;
this->_n_floor_28066=0.9;
this->_n_clock_28067=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_28155> _a1) mutable ->d::String{double _n_t_28135=_a0;
{
(void)((this->_n_clock_28067=(this->_n_clock_28067+([&](){auto _n_argument_28182=d::maximum({(_n_t_28135-this->_n_clock_28067),0.0});auto _n_argument_28183=1.0;return d::minimum({_n_argument_28182,_n_argument_28183});})())));
(void)(this->_n_advance_28069(this->_n_clock_28067));
{double _n_r_28136=0.0;
for(;d::truth((_n_r_28136<this->_n_rows_28048));(void)((_n_r_28136++))){d::check_cancel();(void)(d::at(this->_n_grid_28050,_n_r_28136).fill(d::String(u" ")));
}}
{double _n_r_28137=0.0;
for(;d::truth((_n_r_28137<_n_BASE_28038));(void)((_n_r_28137++))){d::check_cancel();{double _n_c_28138=0.0;
for(;d::truth((_n_c_28138<this->_n_cols_28047));(void)((_n_c_28138++))){d::check_cancel();(void)(([&](){auto&& _n_array_28184=d::at(this->_n_grid_28050,_n_r_28137);auto _n_index_28185=_n_c_28138;auto _n_value_28186=d::at(d::at(this->_n_city_28052,_n_r_28137),_n_c_28138);d::put(_n_array_28184,_n_index_28185,_n_value_28186);return _n_value_28186;})());
}}
}}
d::Array<double,false> _n_glow_28139=d::Array<double,false>(size_t(this->_n_cols_28047)).fill(0.0);
(void)(d::forEach(this->_n_shown_28056,[&]( std::shared_ptr<std::tuple<double,double,bool,double>> _a0,double _a1) mutable ->void{auto _n_binding_28187=_a0;
double _n_r_28140=std::get<0>(*_n_binding_28187);
double _n_c_28141=std::get<1>(*_n_binding_28187);
bool _n_far_28142=std::get<2>(*_n_binding_28187);
double _n_i_28143=_a1;
{
(void)(([&](){auto&& _n_array_28188=d::at(this->_n_grid_28050,_n_r_28140);auto _n_index_28189=_n_c_28141;auto _n_value_28190=(d::truth(_n_far_28142)?(d::truth(d::at(this->_n_lit_28064,_n_i_28143))?d::String(u"▓"):d::String(u"░")):(d::truth(d::at(this->_n_lit_28064,_n_i_28143))?d::String(u"▀"):d::String(u"·")));d::put(_n_array_28188,_n_index_28189,_n_value_28190);return _n_value_28190;})());
if(((d::truth(d::at(this->_n_lit_28064,_n_i_28143))&&d::truth((!d::truth(_n_far_28142))))&&d::truth((_n_r_28140>(_n_BASE_28038-4.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_28191=_n_glow_28139;auto _n_index_28192=_n_c_28141;auto _n_value_28193=d::maximum({d::at(_n_glow_28139,_n_c_28141),(_n_r_28140-(_n_BASE_28038-4.0))});d::put(_n_array_28191,_n_index_28192,_n_value_28193);return _n_value_28193;})());
}

}
}));
for(auto &&_n_item_28194:_n_STARS_28044){d::check_cancel();auto _n_binding_28195=_n_item_28194;
double _n_r_28144=d::at(_n_binding_28195,0.0);
double _n_c_28145=d::at(_n_binding_28195,1.0);
if(d::truth((d::at(d::at(this->_n_grid_28050,_n_r_28144),_n_c_28145)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto _n_argument_28196=_n_c_28145;auto _n_argument_28197=_n_r_28144;auto _n_argument_28198=(d::truth((std::sin(((this->_n_clock_28067*1.3)+(_n_c_28145*2.0)))>0.7))?d::String(u"+"):d::String(u"·"));return this->_n_put_28051(_n_argument_28196,_n_argument_28197,_n_argument_28198);})());
}
}
for(auto &&_n_item_28199:this->_n_moon_28060){d::check_cancel();auto _n_binding_28200=_n_item_28199;
double _n_r_28146=std::get<0>(*_n_binding_28200);
double _n_c_28147=std::get<1>(*_n_binding_28200);
d::String _n_g_28148=std::get<2>(*_n_binding_28200);
(void)(this->_n_put_28051(_n_c_28147,_n_r_28146,_n_g_28148));
}
(void)(this->_n_put_28051(d::at(this->_n_light_28058,1.0),d::at(this->_n_light_28058,0.0),(d::truth((d::mod(this->_n_clock_28067,1.6)<0.4))?d::String(u"*"):d::String(u"·"))));
{double _n_c_28149=0.0;
for(;d::truth((_n_c_28149<this->_n_cols_28047));(void)((_n_c_28149++))){d::check_cancel();(void)(this->_n_put_28051(_n_c_28149,_n_BASE_28038,d::String(u"▀")));
}}
{double _n_k_28150=1.0;
for(;d::truth((_n_k_28150<(this->_n_rows_28048-_n_BASE_28038)));(void)((_n_k_28150++))){d::check_cancel();{double _n_c_28151=0.0;
for(;d::truth((_n_c_28151<this->_n_cols_28047));(void)((_n_c_28151++))){d::check_cancel();double _n_ripple_28152=([&](){auto _n_left_28201=std::sin((((_n_c_28151*1.7)+(_n_k_28150*2.3))-(this->_n_clock_28067*3.1)));auto _n_right_28202=(0.6*std::sin((((_n_c_28151*0.53)-(_n_k_28150*1.3))+(this->_n_clock_28067*1.9))));return (_n_left_28201+_n_right_28202);})();
bool _n_m_28153=(std::fabs(((_n_c_28151+0.5)-(this->_n_mx_28061-1.0)))<(2.8-(_n_k_28150*0.45)));
if((d::truth(_n_m_28153)&&d::truth((_n_ripple_28152>((-d::number(1.1))+(_n_k_28150*0.35)))))){d::check_cancel();(void)(this->_n_put_28051(_n_c_28151,(_n_BASE_28038+_n_k_28150),(d::truth((_n_k_28150<2.0))?d::String(u"═"):(d::truth((_n_k_28150<3.0))?d::String(u"="):d::String(u"-")))));
}else {d::check_cancel();if((d::truth(d::at(_n_glow_28139,_n_c_28151))&&d::truth((_n_ripple_28152>(((-d::number(0.9))+(_n_k_28150*0.45))-(d::at(_n_glow_28139,_n_c_28151)*0.2)))))){d::check_cancel();(void)(this->_n_put_28051(_n_c_28151,(_n_BASE_28038+_n_k_28150),d::at(d::String(u"╎╎┊·"),(_n_k_28150-1.0))));
}
}
}}
}}
return d::join(d::map(this->_n_grid_28050,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_l_28154=_a0;
return d::join(_n_l_28154,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("skyline").cols)*ascii::catalog_meta("skyline").rows);auto _env=std::make_shared<_n_Record_28155>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &skyline_meta(){return catalog_meta("skyline");}
std::unique_ptr<Piece> make_skyline(const AsciiPieceOptions &o){return std::make_unique<Native_skyline>(o);}
}
