// Direct, statically typed C++ from src/pieces/skyline.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_28036;
struct _n_Record_28042;
struct _n_Record_28154;
struct _n_Record_28036{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_28036> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28036>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_28042{
d::Array<d::String,false> _p_tank{};
d::Array<d::String,false> _p_mast{};
d::Array<d::String,false> _p_spire{};
d::Array<d::String,false> _p_crown{};
static std::shared_ptr<_n_Record_28042> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28042>();out->_p_tank=d::decode<d::Array<d::String,false>>(j["tank"]);out->_p_mast=d::decode<d::Array<d::String,false>>(j["mast"]);out->_p_spire=d::decode<d::Array<d::String,false>>(j["spire"]);out->_p_crown=d::decode<d::Array<d::String,false>>(j["crown"]);return out;}
};
struct _n_Record_28154{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_28154> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_28154>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_28045(double _a0);
std::shared_ptr<_n_Record_28036> _n_meta_28035=[](){return ([&](){auto _n_object_28157=std::make_shared<_n_Record_28036>();_n_object_28157->_p_name=d::String(u"skyline");_n_object_28157->_p_category=d::String(u"objects");_n_object_28157->_p_note=d::String(u"a city at night, windows going on and off, a blinking mast");_n_object_28157->_p_cols=64.0;_n_object_28157->_p_rows=23.0;_n_object_28157->_p_fps=10.0;return _n_object_28157;})();}();
const double _n_BASE_28037=[](){return 18.0;}();
const double _n_SHARE_28038=[](){return 0.4;}();
d::Array<std::array<double,3>,false> _n_FAR_28039=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{3.0,6.0,9.0},std::array<double,3>{14.0,6.0,12.0},std::array<double,3>{25.0,5.0,9.0},std::array<double,3>{36.0,6.0,12.0},std::array<double,3>{48.0,7.0,10.0},std::array<double,3>{57.0,6.0,12.0}};}();
d::Array<std::shared_ptr<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>,false> _n_NEAR_28040=[](){return d::Array<std::shared_ptr<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>,false>{std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>((-d::number(3.0)),8.0,5.0,d::Array<std::array<double,2>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(6.0,7.0,8.0,d::Array<std::array<double,2>,false>{},std::optional<d::String>(d::String(u"tank"))),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(13.0,5.0,6.0,d::Array<std::array<double,2>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(19.0,9.0,10.0,d::Array<std::array<double,2>,false>{std::array<double,2>{1.0,1.0},std::array<double,2>{1.0,1.0},std::array<double,2>{1.0,1.0}},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(29.0,7.0,13.0,d::Array<std::array<double,2>,false>{std::array<double,2>{1.0,1.0}},std::optional<d::String>(d::String(u"mast"))),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(37.0,5.0,7.0,d::Array<std::array<double,2>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(42.0,7.0,10.0,d::Array<std::array<double,2>,false>{},std::optional<d::String>(d::String(u"spire"))),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(50.0,5.0,5.0,d::Array<std::array<double,2>,false>{},std::optional<d::String>{}),std::make_shared<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>>(55.0,11.0,8.0,d::Array<std::array<double,2>,false>{std::array<double,2>{1.0,2.0}},std::optional<d::String>(d::String(u"crown")))};}();
std::shared_ptr<_n_Record_28042> _n_TOPS_28041=[](){return ([&](){auto _n_object_28159=std::make_shared<_n_Record_28042>();_n_object_28159->_p_tank=d::Array<d::String,false>{d::String(u"╨ ╨"),d::String(u"▄▄▄")};_n_object_28159->_p_mast=d::Array<d::String,false>{d::String(u"╱│╲"),d::String(u" │ "),d::String(u" │ ")};_n_object_28159->_p_spire=d::Array<d::String,false>{d::String(u"╱   ╲"),d::String(u" ╱ ╲ "),d::String(u"  ╿  ")};_n_object_28159->_p_crown=d::Array<d::String,false>{d::String(u"╭───╮"),d::String(u" ╭─╮ ")};return _n_object_28159;})();}();
d::Array<std::array<double,2>,false> _n_STARS_28043=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{1.0,18.0},std::array<double,2>{4.0,23.0},std::array<double,2>{2.0,27.0},std::array<double,2>{6.0,40.0},std::array<double,2>{1.0,45.0},std::array<double,2>{7.0,61.0},std::array<double,2>{3.0,56.0},std::array<double,2>{5.0,50.0},std::array<double,2>{0.0,36.0},std::array<double,2>{3.0,38.0},std::array<double,2>{8.0,1.0},std::array<double,2>{0.0,59.0}};}();
std::array<double,3> _n_MOON_28044=[](){return std::array<double,3>{9.0,3.5,1.9};}();
std::function<double()> _n_mulberry32_28045(double _a0){double _n_seed_28069=_a0;
{
double _n_s_28070=double(d::i32(_n_seed_28069)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_28070=double(d::i32((_n_s_28070+1831565813.0))|d::i32(0.0))));
double _n_t_28071=d::imul(double(d::i32(_n_s_28070)^d::i32(double(d::u32(_n_s_28070)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_28070)));
(void)((_n_t_28071=double(d::i32((_n_t_28071+d::imul(double(d::i32(_n_t_28071)^d::i32(double(d::u32(_n_t_28071)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_28071)))))^d::i32(_n_t_28071))));
return (double(d::u32(double(d::i32(_n_t_28071)^d::i32(double(d::u32(_n_t_28071)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_skyline final:ascii::Piece{
double _n_cols_28046{};
double _n_rows_28047{};
std::function<double()> _n_rand_28048{};
d::Array<d::Array<d::String,false>,false> _n_grid_28049{};
d::Array<d::Array<d::String,false>,false> _n_city_28051{};
d::Array<std::shared_ptr<std::tuple<double,double,bool,double>>,false> _n_panes_28054{};
d::Array<std::shared_ptr<std::tuple<double,double,bool,double>>,false> _n_shown_28055{};
std::shared_ptr<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>> _n_mast_28056{};
d::Array<double,false> _n_light_28057{};
d::String _n_QUAD_28058{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_moon_28059{};
double _n_mx_28060{};
double _n_my_28061{};
double _n_mr_28062{};
d::Array<bool,false> _n_lit_28063{};
double _n_next_28064{};
double _n_floor_28065{};
double _n_clock_28066{};
std::function<d::String(double,std::shared_ptr<_n_Record_28154>)> _render;
void _n_put_28050(double _a0,double _a1,d::String _a2){double _n_c_28072=_a0;
double _n_r_28073=_a1;
d::String _n_g_28074=_a2;
{
if((((d::truth((_n_c_28072>=0.0))&&d::truth((_n_c_28072<this->_n_cols_28046)))&&d::truth((_n_r_28073>=0.0)))&&d::truth((_n_r_28073<this->_n_rows_28047)))){d::check_cancel();(void)(([&](){auto&& _n_array_28202=d::at(this->_n_grid_28049,_n_r_28073);auto _n_index_28203=_n_c_28072;auto _n_value_28204=_n_g_28074;d::put(_n_array_28202,_n_index_28203,_n_value_28204);return _n_value_28204;})());
}

}
}

std::variant<d::String,bool> _n_set_28052(double _a0,double _a1,d::String _a2){double _n_c_28075=_a0;
double _n_r_28076=_a1;
d::String _n_g_28077=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_28205=([&]()->bool{auto _n_logical_28209=([&]()->bool{auto _n_logical_28210=(_n_c_28075>=0.0);return d::truth(_n_logical_28210)?(_n_c_28075<this->_n_cols_28046):_n_logical_28210;})();return d::truth(_n_logical_28209)?(_n_r_28076>=0.0):_n_logical_28209;})();return d::truth(_n_logical_28205)?std::variant<d::String,bool>(([&](){auto&& _n_array_28206=d::at(this->_n_city_28051,_n_r_28076);auto _n_index_28207=_n_c_28075;auto _n_value_28208=_n_g_28077;d::put(_n_array_28206,_n_index_28207,_n_value_28208);return _n_value_28208;})()):std::variant<d::String,bool>(_n_logical_28205);})();}

std::variant<d::String,bool> _n_draw_28053(double _a0,double _a1,d::String _a2){double _n_c_28078=_a0;
double _n_r_28079=_a1;
d::String _n_g_28080=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_28211=(_n_g_28080!=d::String(u" "));return d::truth(_n_logical_28211)?this->_n_set_28052(_n_c_28078,_n_r_28079,_n_g_28080):std::variant<d::String,bool>(_n_logical_28211);})();}

double _n_pick_28067(bool _a0,bool _a1){bool _n_on_28123=_a0;
bool _n_near_28124=_a1;
{
double _n_w_28125=double(d::i32((this->_n_rand_28048()*double(this->_n_lit_28063.size())))|d::i32(0.0));
{double _n_n_28126=0.0;
for(;(d::truth((_n_n_28126<double(this->_n_lit_28063.size())))&&d::truth(([&]()->bool{auto _n_logical_28212=(d::at(this->_n_lit_28063,_n_w_28125)==_n_on_28123);return d::truth(_n_logical_28212)?_n_logical_28212:([&]()->bool{auto _n_logical_28213=_n_near_28124;return d::truth(_n_logical_28213)?std::get<2>(*d::at(this->_n_shown_28055,_n_w_28125)):_n_logical_28213;})();})()));(void)((_n_n_28126++))){d::check_cancel();(void)((_n_w_28125=d::mod((_n_w_28125+1.0),double(this->_n_lit_28063.size()))));
}}
return _n_w_28125;

}
}

void _n_advance_28068(double _a0){double _n_t_28127=_a0;
{
while(d::truth((d::minimum({this->_n_next_28064,this->_n_floor_28065})<=_n_t_28127))){d::check_cancel();bool _n_on_28128=([&](){auto _n_left_28214=this->_n_rand_28048();auto _n_right_28215=(0.5+((_n_SHARE_28038-(double(d::filter(this->_n_lit_28063,d::ToBoolean{}).size())/double(this->_n_lit_28063.size())))*4.0));return (_n_left_28214<_n_right_28215);})();
if(d::truth((this->_n_floor_28065<this->_n_next_28064))){d::check_cancel();auto _n_binding_28217=d::at(this->_n_shown_28055,this->_n_pick_28067(_n_on_28128,true));
double _n_r_28129=std::get<0>(*_n_binding_28217);
double _n_n_28130=std::get<3>(*_n_binding_28217);
(void)(d::forEach(this->_n_shown_28055,[&]( std::shared_ptr<std::tuple<double,double,bool,double>> _a0,double _a1) mutable ->bool{auto _n_binding_28218=_a0;
double _n_r2_28131=std::get<0>(*_n_binding_28218);
double _n_n2_28132=std::get<3>(*_n_binding_28218);
double _n_i_28133=_a1;
return ([&]()->bool{auto _n_logical_28219=([&]()->bool{auto _n_logical_28223=(_n_r2_28131==_n_r_28129);return d::truth(_n_logical_28223)?(_n_n2_28132==_n_n_28130):_n_logical_28223;})();return d::truth(_n_logical_28219)?([&](){auto&& _n_array_28220=this->_n_lit_28063;auto _n_index_28221=_n_i_28133;auto _n_value_28222=_n_on_28128;d::put(_n_array_28220,_n_index_28221,_n_value_28222);return _n_value_28222;})():_n_logical_28219;})();}));
(void)((this->_n_floor_28065=(this->_n_floor_28065+(1.6+(this->_n_rand_28048()*1.2)))));
}else {d::check_cancel();(void)(([&](){auto&& _n_array_28224=this->_n_lit_28063;auto _n_index_28225=this->_n_pick_28067(_n_on_28128,false);auto _n_value_28226=_n_on_28128;d::put(_n_array_28224,_n_index_28225,_n_value_28226);return _n_value_28226;})());
(void)((this->_n_next_28064=(this->_n_next_28064+(0.12+(this->_n_rand_28048()*0.3)))));
}
}

}
}

explicit Native_skyline(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_28160=_n_meta_28035;
this->_n_cols_28046=_n_binding_28160->_p_cols;
this->_n_rows_28047=_n_binding_28160->_p_rows;
this->_n_rand_28048=_n_mulberry32_28045(19.0);
this->_n_grid_28049=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_28047,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_28046)).fill(d::String(u" "));}));
this->_n_city_28051=d::Array<d::Array<d::String,false>,false>(d::from(_n_BASE_28037,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_28046)).fill(d::String(u" "));}));
this->_n_panes_28054=d::Array<std::shared_ptr<std::tuple<double,double,bool,double>>,false>{};
for(auto &&_n_item_28161:_n_FAR_28039){d::check_cancel();auto _n_binding_28162=_n_item_28161;
double _n_x_28081=d::at(_n_binding_28162,0.0);
double _n_w_28082=d::at(_n_binding_28162,1.0);
double _n_h_28083=d::at(_n_binding_28162,2.0);
{
{double _n_r_28084=(_n_BASE_28037-_n_h_28083);
for(;d::truth((_n_r_28084<_n_BASE_28037));(void)((_n_r_28084++))){d::check_cancel();{double _n_c_28085=_n_x_28081;
for(;d::truth((_n_c_28085<(_n_x_28081+_n_w_28082)));(void)((_n_c_28085++))){d::check_cancel();(void)(this->_n_set_28052(_n_c_28085,_n_r_28084,d::String(u"░")));
}}
}}
{double _n_r_28086=((_n_BASE_28037-_n_h_28083)+1.0);
for(;d::truth((_n_r_28086<_n_BASE_28037));(void)((_n_r_28086=(_n_r_28086+2.0)))){d::check_cancel();{double _n_c_28087=(_n_x_28081+1.0);
for(;d::truth((_n_c_28087<((_n_x_28081+_n_w_28082)-1.0)));(void)((_n_c_28087=(_n_c_28087+2.0)))){d::check_cancel();(void)(this->_n_panes_28054.push(std::make_shared<std::tuple<double,double,bool,double>>(_n_r_28086,_n_c_28087,true,(-d::number(1.0)))));
}}
}}

}
}
(void)(d::forEach(_n_NEAR_28040,[&]( std::shared_ptr<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>> _a0,double _a1) mutable ->void{auto _n_binding_28163=_a0;
double _n_x_28088=std::get<0>(*_n_binding_28163);
double _n_w_28089=std::get<1>(*_n_binding_28163);
double _n_h_28090=std::get<2>(*_n_binding_28163);
d::Array<std::array<double,2>,false> _n_steps_28091=std::get<3>(*_n_binding_28163);
std::optional<d::String> _n_top_28092=std::get<4>(*_n_binding_28163);
double _n_n_28093=_a1;
{
auto _n_binding_28164=std::array<double,3>{_n_x_28088,((_n_x_28088+_n_w_28089)-1.0),(_n_BASE_28037-_n_h_28090)};
double _n_l_28094=d::at(_n_binding_28164,0.0);
double _n_rgt_28095=d::at(_n_binding_28164,1.0);
double _n_t_28096=d::at(_n_binding_28164,2.0);
auto _n_tier_28097=[&]( double _a0) mutable ->void{double _n_r_28098=_a0;
{
{double _n_c_28099=_n_l_28094;
for(;d::truth((_n_c_28099<=_n_rgt_28095));(void)((_n_c_28099++))){d::check_cancel();(void)(this->_n_set_28052(_n_c_28099,_n_r_28098,((d::truth((_n_c_28099==_n_l_28094))||d::truth((_n_c_28099==_n_rgt_28095)))?d::String(u"│"):d::String(u" "))));
}}
{double _n_c_28100=(_n_l_28094+2.0);
for(;d::truth((_n_c_28100<_n_rgt_28095));(void)((_n_c_28100=(_n_c_28100+2.0)))){d::check_cancel();(void)(this->_n_panes_28054.push(std::make_shared<std::tuple<double,double,bool,double>>(_n_r_28098,_n_c_28100,false,_n_n_28093)));
}}

}
};
{double _n_r_28101=(_n_t_28096+1.0);
for(;d::truth((_n_r_28101<_n_BASE_28037));(void)((_n_r_28101++))){d::check_cancel();(void)(_n_tier_28097(_n_r_28101));
}}
{double _n_c_28102=_n_l_28094;
for(;d::truth((_n_c_28102<=_n_rgt_28095));(void)((_n_c_28102++))){d::check_cancel();(void)(this->_n_set_28052(_n_c_28102,_n_t_28096,(d::truth((_n_c_28102==_n_l_28094))?d::String(u"┌"):(d::truth((_n_c_28102==_n_rgt_28095))?d::String(u"┐"):d::String(u"─")))));
}}
for(auto &&_n_item_28165:_n_steps_28091){d::check_cancel();auto _n_binding_28166=_n_item_28165;
double _n_inset_28103=d::at(_n_binding_28166,0.0);
double _n_tall_28104=d::at(_n_binding_28166,1.0);
{
(void)(((_n_l_28094=(_n_l_28094+_n_inset_28103)),(_n_rgt_28095=(_n_rgt_28095-_n_inset_28103))));
(void)((this->_n_set_28052(_n_l_28094,_n_t_28096,d::String(u"┴")),this->_n_set_28052(_n_rgt_28095,_n_t_28096,d::String(u"┴"))));
{double _n_r_28105=((_n_t_28096-_n_tall_28104)+1.0);
for(;d::truth((_n_r_28105<_n_t_28096));(void)((_n_r_28105++))){d::check_cancel();(void)(_n_tier_28097(_n_r_28105));
}}
(void)((_n_t_28096=(_n_t_28096-_n_tall_28104)));
{double _n_c_28106=_n_l_28094;
for(;d::truth((_n_c_28106<=_n_rgt_28095));(void)((_n_c_28106++))){d::check_cancel();(void)(this->_n_set_28052(_n_c_28106,_n_t_28096,(d::truth((_n_c_28106==_n_l_28094))?d::String(u"┌"):(d::truth((_n_c_28106==_n_rgt_28095))?d::String(u"┐"):d::String(u"─")))));
}}

}
}
(void)(d::forEach(([&]()->d::Array<d::String,false>{auto _n_logical_28167=([&]()->d::Array<d::String,false>{auto _n_record_28168=_n_TOPS_28041;auto _n_key_28169=d::read(_n_top_28092);if(_n_key_28169==u"tank")return _n_record_28168->_p_tank;if(_n_key_28169==u"mast")return _n_record_28168->_p_mast;if(_n_key_28169==u"spire")return _n_record_28168->_p_spire;if(_n_key_28169==u"crown")return _n_record_28168->_p_crown;return {};})();return d::truth(_n_logical_28167)?_n_logical_28167:d::Array<d::String,false>{};})(),[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_28107=_a0;
double _n_i_28108=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_28170;for(const auto &_v:_n_s_28107)_n_array_28170.push(_v);return _n_array_28170;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_g_28109=_a0;
double _n_j_28110=_a1;
return ([&](){auto _n_argument_28171=(std::floor(((((_n_l_28094+_n_rgt_28095)+1.0)-double(_n_s_28107.size()))/2.0))+_n_j_28110);auto _n_argument_28172=((_n_t_28096-1.0)-_n_i_28108);auto _n_argument_28173=_n_g_28109;return this->_n_draw_28053(_n_argument_28171,_n_argument_28172,_n_argument_28173);})();});}));

}
}));
this->_n_shown_28055=d::filter(this->_n_panes_28054,[&]( std::shared_ptr<std::tuple<double,double,bool,double>> _a0) mutable ->bool{auto _n_binding_28174=_a0;
double _n_r_28111=std::get<0>(*_n_binding_28174);
double _n_c_28112=std::get<1>(*_n_binding_28174);
bool _n_far_28113=std::get<2>(*_n_binding_28174);
return ([&]()->bool{auto _n_logical_28175=([&]()->bool{auto _n_logical_28177=(_n_c_28112>=0.0);return d::truth(_n_logical_28177)?(_n_c_28112<this->_n_cols_28046):_n_logical_28177;})();return d::truth(_n_logical_28175)?([&]()->bool{auto _n_logical_28176=(!d::truth(_n_far_28113));return d::truth(_n_logical_28176)?_n_logical_28176:(d::at(d::at(this->_n_city_28051,_n_r_28111),_n_c_28112)==d::String(u"░"));})():_n_logical_28175;})();});
this->_n_mast_28056=d::read(d::find(_n_NEAR_28040,[&]( std::shared_ptr<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>> _a0) mutable ->bool{std::shared_ptr<std::tuple<double,double,double,d::Array<std::array<double,2>,false>,std::optional<d::String>>> _n_b_28114=_a0;
return (d::equal(std::get<4>(*_n_b_28114),d::String(u"mast")));}));
this->_n_light_28057=d::Array<double,false>{((_n_BASE_28037-std::get<2>(*this->_n_mast_28056))-5.0),(std::get<0>(*this->_n_mast_28056)+double(d::i32(std::get<1>(*this->_n_mast_28056))>>(d::u32(1.0)&31)))};
this->_n_QUAD_28058=d::String(u" ▗▖▄▝▐▞▟▘▚▌▙▀▜▛█");
this->_n_moon_28059=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
auto _n_binding_28178=_n_MOON_28044;
this->_n_mx_28060=d::at(_n_binding_28178,0.0);
this->_n_my_28061=d::at(_n_binding_28178,1.0);
this->_n_mr_28062=d::at(_n_binding_28178,2.0);
{double _n_r_28115=std::floor((this->_n_my_28061-this->_n_mr_28062));
for(;d::truth((_n_r_28115<=(this->_n_my_28061+this->_n_mr_28062)));(void)((_n_r_28115++))){d::check_cancel();{double _n_c_28116=std::floor((this->_n_mx_28060-(2.0*this->_n_mr_28062)));
for(;d::truth((_n_c_28116<=(this->_n_mx_28060+(2.0*this->_n_mr_28062))));(void)((_n_c_28116++))){d::check_cancel();double _n_q_28117=0.0;
for(auto &&_n_item_28179:d::Array<d::Array<double,false>,false>{d::Array<double,false>{8.0,0.25,0.25},d::Array<double,false>{4.0,0.75,0.25},d::Array<double,false>{2.0,0.25,0.75},d::Array<double,false>{1.0,0.75,0.75}}){d::check_cancel();auto _n_binding_28180=_n_item_28179;
double _n_b_28118=d::at(_n_binding_28180,0.0);
double _n_dx_28119=d::at(_n_binding_28180,1.0);
double _n_dy_28120=d::at(_n_binding_28180,2.0);
{
double _n_x_28121=(((_n_c_28116+_n_dx_28119)-this->_n_mx_28060)/2.0);
double _n_y_28122=((_n_r_28115+_n_dy_28120)-this->_n_my_28061);
if((d::truth((d::hypot(std::initializer_list<double>{_n_x_28121,_n_y_28122})<this->_n_mr_28062))&&d::truth((d::hypot(std::initializer_list<double>{(_n_x_28121-1.1),_n_y_28122})>(this->_n_mr_28062*0.95))))){d::check_cancel();(void)((_n_q_28117=double(d::i32(_n_q_28117)|d::i32(_n_b_28118))));
}

}
}
if(d::truth(_n_q_28117)){d::check_cancel();(void)(this->_n_moon_28059.push(std::make_shared<std::tuple<double,double,d::String>>(_n_r_28115,_n_c_28116,d::at(this->_n_QUAD_28058,_n_q_28117))));
}
}}
}}
this->_n_lit_28063=d::map(this->_n_shown_28055,[&]( ) mutable ->bool{return (this->_n_rand_28048()<_n_SHARE_28038);});
this->_n_next_28064=0.2;
this->_n_floor_28065=0.9;
this->_n_clock_28066=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_28154> _a1) mutable ->d::String{double _n_t_28134=_a0;
{
(void)((this->_n_clock_28066=(this->_n_clock_28066+([&](){auto _n_argument_28181=d::maximum({(_n_t_28134-this->_n_clock_28066),0.0});auto _n_argument_28182=1.0;return d::minimum({_n_argument_28181,_n_argument_28182});})())));
(void)(this->_n_advance_28068(this->_n_clock_28066));
{double _n_r_28135=0.0;
for(;d::truth((_n_r_28135<this->_n_rows_28047));(void)((_n_r_28135++))){d::check_cancel();(void)(d::at(this->_n_grid_28049,_n_r_28135).fill(d::String(u" ")));
}}
{double _n_r_28136=0.0;
for(;d::truth((_n_r_28136<_n_BASE_28037));(void)((_n_r_28136++))){d::check_cancel();{double _n_c_28137=0.0;
for(;d::truth((_n_c_28137<this->_n_cols_28046));(void)((_n_c_28137++))){d::check_cancel();(void)(([&](){auto&& _n_array_28183=d::at(this->_n_grid_28049,_n_r_28136);auto _n_index_28184=_n_c_28137;auto _n_value_28185=d::at(d::at(this->_n_city_28051,_n_r_28136),_n_c_28137);d::put(_n_array_28183,_n_index_28184,_n_value_28185);return _n_value_28185;})());
}}
}}
d::Array<double,false> _n_glow_28138=d::Array<double,false>(size_t(this->_n_cols_28046)).fill(0.0);
(void)(d::forEach(this->_n_shown_28055,[&]( std::shared_ptr<std::tuple<double,double,bool,double>> _a0,double _a1) mutable ->void{auto _n_binding_28186=_a0;
double _n_r_28139=std::get<0>(*_n_binding_28186);
double _n_c_28140=std::get<1>(*_n_binding_28186);
bool _n_far_28141=std::get<2>(*_n_binding_28186);
double _n_i_28142=_a1;
{
(void)(([&](){auto&& _n_array_28187=d::at(this->_n_grid_28049,_n_r_28139);auto _n_index_28188=_n_c_28140;auto _n_value_28189=(d::truth(_n_far_28141)?(d::truth(d::at(this->_n_lit_28063,_n_i_28142))?d::String(u"▓"):d::String(u"░")):(d::truth(d::at(this->_n_lit_28063,_n_i_28142))?d::String(u"▀"):d::String(u"·")));d::put(_n_array_28187,_n_index_28188,_n_value_28189);return _n_value_28189;})());
if(((d::truth(d::at(this->_n_lit_28063,_n_i_28142))&&d::truth((!d::truth(_n_far_28141))))&&d::truth((_n_r_28139>(_n_BASE_28037-4.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_28190=_n_glow_28138;auto _n_index_28191=_n_c_28140;auto _n_value_28192=d::maximum({d::at(_n_glow_28138,_n_c_28140),(_n_r_28139-(_n_BASE_28037-4.0))});d::put(_n_array_28190,_n_index_28191,_n_value_28192);return _n_value_28192;})());
}

}
}));
for(auto &&_n_item_28193:_n_STARS_28043){d::check_cancel();auto _n_binding_28194=_n_item_28193;
double _n_r_28143=d::at(_n_binding_28194,0.0);
double _n_c_28144=d::at(_n_binding_28194,1.0);
if(d::truth((d::at(d::at(this->_n_grid_28049,_n_r_28143),_n_c_28144)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto _n_argument_28195=_n_c_28144;auto _n_argument_28196=_n_r_28143;auto _n_argument_28197=(d::truth((std::sin(((this->_n_clock_28066*1.3)+(_n_c_28144*2.0)))>0.7))?d::String(u"+"):d::String(u"·"));return this->_n_put_28050(_n_argument_28195,_n_argument_28196,_n_argument_28197);})());
}
}
for(auto &&_n_item_28198:this->_n_moon_28059){d::check_cancel();auto _n_binding_28199=_n_item_28198;
double _n_r_28145=std::get<0>(*_n_binding_28199);
double _n_c_28146=std::get<1>(*_n_binding_28199);
d::String _n_g_28147=std::get<2>(*_n_binding_28199);
(void)(this->_n_put_28050(_n_c_28146,_n_r_28145,_n_g_28147));
}
(void)(this->_n_put_28050(d::at(this->_n_light_28057,1.0),d::at(this->_n_light_28057,0.0),(d::truth((d::mod(this->_n_clock_28066,1.6)<0.4))?d::String(u"*"):d::String(u"·"))));
{double _n_c_28148=0.0;
for(;d::truth((_n_c_28148<this->_n_cols_28046));(void)((_n_c_28148++))){d::check_cancel();(void)(this->_n_put_28050(_n_c_28148,_n_BASE_28037,d::String(u"▀")));
}}
{double _n_k_28149=1.0;
for(;d::truth((_n_k_28149<(this->_n_rows_28047-_n_BASE_28037)));(void)((_n_k_28149++))){d::check_cancel();{double _n_c_28150=0.0;
for(;d::truth((_n_c_28150<this->_n_cols_28046));(void)((_n_c_28150++))){d::check_cancel();double _n_ripple_28151=([&](){auto _n_left_28200=std::sin((((_n_c_28150*1.7)+(_n_k_28149*2.3))-(this->_n_clock_28066*3.1)));auto _n_right_28201=(0.6*std::sin((((_n_c_28150*0.53)-(_n_k_28149*1.3))+(this->_n_clock_28066*1.9))));return (_n_left_28200+_n_right_28201);})();
bool _n_m_28152=(std::fabs(((_n_c_28150+0.5)-(this->_n_mx_28060-1.0)))<(2.8-(_n_k_28149*0.45)));
if((d::truth(_n_m_28152)&&d::truth((_n_ripple_28151>((-d::number(1.1))+(_n_k_28149*0.35)))))){d::check_cancel();(void)(this->_n_put_28050(_n_c_28150,(_n_BASE_28037+_n_k_28149),(d::truth((_n_k_28149<2.0))?d::String(u"═"):(d::truth((_n_k_28149<3.0))?d::String(u"="):d::String(u"-")))));
}else {d::check_cancel();if((d::truth(d::at(_n_glow_28138,_n_c_28150))&&d::truth((_n_ripple_28151>(((-d::number(0.9))+(_n_k_28149*0.45))-(d::at(_n_glow_28138,_n_c_28150)*0.2)))))){d::check_cancel();(void)(this->_n_put_28050(_n_c_28150,(_n_BASE_28037+_n_k_28149),d::at(d::String(u"╎╎┊·"),(_n_k_28149-1.0))));
}
}
}}
}}
return d::join(d::map(this->_n_grid_28049,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_l_28153=_a0;
return d::join(_n_l_28153,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("skyline").cols)*ascii::catalog_meta("skyline").rows);auto _env=std::make_shared<_n_Record_28154>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &skyline_meta(){return catalog_meta("skyline");}
std::unique_ptr<Piece> make_skyline(const AsciiPieceOptions &o){return std::make_unique<Native_skyline>(o);}
}
