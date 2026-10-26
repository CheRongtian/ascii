// Direct, statically typed C++ from src/pieces/fox.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11136;
struct _n_Record_11180;
struct _n_Record_11136{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_11136> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11136>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_11180{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11180> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11180>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_11136> _n_meta_11135=[](){return ([&](){auto _n_object_11183=std::make_shared<_n_Record_11136>();_n_object_11183->_p_name=d::String(u"fox");_n_object_11183->_p_category=d::String(u"creatures");_n_object_11183->_p_note=d::String(u"a fox asleep on its tail, breathing, peeking now and then");_n_object_11183->_p_cols=47.0;_n_object_11183->_p_rows=16.0;_n_object_11183->_p_fps=10.0;return _n_object_11183;})();}();
d::Array<d::String,false> _n_FOX_11137=[](){return d::Array<d::String,false>{d::String(u"           /\\          /\\"),d::String(u"          /  \\        /  \\"),d::String(u"         /    `.____.'    \\"),d::String(u"        /                  \\"),d::String(u"       ;    `-'      `-'    ;"),d::String(u"        `.     \\    /     .'`-.._"),d::String(u"     _.-' `-.   \\../   .-'       ``-._"),d::String(u"  .-'        `-. \\/ .-'               `."),d::String(u" /   _..--''``-.`--'.-''``--..__        \\"),d::String(u"|  .'   ,                       ``-.     |"),d::String(u"| (    (                            `.   |"),d::String(u"|  `.   `.                            \\  |"),d::String(u" \\   `-..__                            \\ |"),d::String(u"  `-..__   ``---...______________...----'")};}();
const double _n_OX_11138=[](){return 2.0;}();
const double _n_OY_11139=[](){return 1.0;}();
const double _n_LOOP_11140=[](){return 12.0;}();
const double _n_BREATH_11141=[](){return 4.0;}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_SWELL_11142=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(7.0,38.0,d::String(u"`-.")),std::make_shared<std::tuple<double,double,d::String>>(8.0,40.0,d::String(u" \\")),std::make_shared<std::tuple<double,double,d::String>>(9.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(10.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(11.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(12.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(13.0,40.0,d::String(u"-'"))};}();
std::array<double,2> _n_EYE_11143=[](){return std::array<double,2>{4.0,21.0};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false> _n_PEEK_11144=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false>{std::make_shared<std::tuple<double,double,d::String,double>>(2.2,2.5,d::String(u"`o'"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(2.5,3.0,d::String(u"(o)"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,3.5,d::String(u"(o)"),(-d::number(1.0))),std::make_shared<std::tuple<double,double,d::String,double>>(3.5,4.0,d::String(u"(o)"),1.0),std::make_shared<std::tuple<double,double,d::String,double>>(4.0,4.3,d::String(u"(o)"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(4.3,4.6,d::String(u"`o'"),0.0)};}();
d::Array<std::array<double,2>,false> _n_EAR_11145=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{7.0,7.2},std::array<double,2>{7.45,7.65}};}();
const double _n_Z_EVERY_11146=[](){return 2.0;}();
const double _n_Z_LIFE_11147=[](){return 4.0;}();
d::Array<std::array<double,2>,false> _n_Z_PATH_11148=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{4.0,31.0},std::array<double,2>{3.0,32.0},std::array<double,2>{3.0,33.0},std::array<double,2>{3.0,34.0},std::array<double,2>{2.0,35.0},std::array<double,2>{2.0,36.0},std::array<double,2>{2.0,37.0},std::array<double,2>{1.0,38.0},std::array<double,2>{1.0,39.0},std::array<double,2>{1.0,40.0}};}();

struct Native_fox final:ascii::Piece{
double _n_cols_11149{};
double _n_rows_11150{};
std::function<d::String(double,std::shared_ptr<_n_Record_11180>)> _render;
bool _n_awake_11151(double _a0){double _n_u_11152=_a0;
return ([&]()->bool{auto _n_logical_11202=(_n_u_11152>=(std::get<0>(*d::at(_n_PEEK_11144,0.0))-0.3));return d::truth(_n_logical_11202)?(_n_u_11152<(std::get<1>(*d::at(_n_PEEK_11144,(double(_n_PEEK_11144.size())-1.0)))+0.6)):_n_logical_11202;})();}

explicit Native_fox(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11184=_n_meta_11135;
this->_n_cols_11149=_n_binding_11184->_p_cols;
this->_n_rows_11150=_n_binding_11184->_p_rows;
_render=[=]( double _a0,std::shared_ptr<_n_Record_11180> _a1) mutable ->d::String{double _n_t_11153=_a0;
{
double _n_u_11154=d::mod((d::mod(_n_t_11153,_n_LOOP_11140)+_n_LOOP_11140),_n_LOOP_11140);
d::Array<d::Array<d::String,false>,false> _n_grid_11155=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_11150,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_11149)).fill(d::String(u" "));}));
auto _n_put_11156=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_11157=_a0;
double _n_c_11158=_a1;
d::String _n_s_11159=_a2;
d::forEach(([&](){d::Array<d::String,false> _n_array_11185;for(const auto &_v:_n_s_11159)_n_array_11185.push(_v);return _n_array_11185;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_11160=_a0;
double _n_i_11161=_a1;
return ([&](){auto&& _n_array_11186=d::at(_n_grid_11155,(_n_OY_11139+_n_r_11157));auto _n_index_11187=((_n_OX_11138+_n_c_11158)+_n_i_11161);auto _n_value_11188=_n_ch_11160;d::put(_n_array_11186,_n_index_11187,_n_value_11188);return _n_value_11188;})();});};
(void)(d::forEach(_n_FOX_11137,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_11162=_a0;
double _n_r_11163=_a1;
_n_put_11156(_n_r_11163,0.0,_n_line_11162);}));
double _n_b_11164=d::mod(_n_u_11154,_n_BREATH_11141);
if((d::truth((_n_b_11164>=0.6))&&d::truth((_n_b_11164<2.4)))){d::check_cancel();for(auto &&_n_item_11189:_n_SWELL_11142){d::check_cancel();auto _n_binding_11190=_n_item_11189;
double _n_r_11165=std::get<0>(*_n_binding_11190);
double _n_c_11166=std::get<1>(*_n_binding_11190);
d::String _n_s_11167=std::get<2>(*_n_binding_11190);
(void)(_n_put_11156(_n_r_11165,_n_c_11166,_n_s_11167));
}
}
std::shared_ptr<std::tuple<double,double,d::String,double>> _n_peek_11168=d::read(d::find(_n_PEEK_11144,[&]( std::shared_ptr<std::tuple<double,double,d::String,double>> _a0) mutable ->bool{auto _n_binding_11191=_a0;
double _n_a_11169=std::get<0>(*_n_binding_11191);
double _n_z_11170=std::get<1>(*_n_binding_11191);
return ([&]()->bool{auto _n_logical_11192=(_n_u_11154>=_n_a_11169);return d::truth(_n_logical_11192)?(_n_u_11154<_n_z_11170):_n_logical_11192;})();}));
if(d::truth(_n_peek_11168)){d::check_cancel();(void)((([&](){auto _n_argument_11193=d::at(_n_EYE_11143,0.0);auto _n_argument_11194=(d::at(_n_EYE_11143,1.0)-1.0);auto _n_argument_11195=d::repeat(d::String(u" "),5.0);return _n_put_11156(_n_argument_11193,_n_argument_11194,_n_argument_11195);})(),_n_put_11156(d::at(_n_EYE_11143,0.0),(d::at(_n_EYE_11143,1.0)+std::get<3>(*_n_peek_11168)),std::get<2>(*_n_peek_11168))));
}
if(d::truth(d::some(_n_EAR_11145,[&]( std::array<double,2> _a0) mutable ->bool{auto _n_binding_11196=_a0;
double _n_a_11171=d::at(_n_binding_11196,0.0);
double _n_z_11172=d::at(_n_binding_11196,1.0);
return ([&]()->bool{auto _n_logical_11197=(_n_u_11154>=_n_a_11171);return d::truth(_n_logical_11197)?(_n_u_11154<_n_z_11172):_n_logical_11197;})();}))){d::check_cancel();(void)(_n_put_11156(0.0,23.0,d::String(u"/-")));
}
{double _n_k_11173=(-d::number(2.0));
for(;d::truth((_n_k_11173<=std::ceil((_n_LOOP_11140/_n_Z_EVERY_11146))));(void)((_n_k_11173++))){d::check_cancel();double _n_born_11174=(_n_k_11173*_n_Z_EVERY_11146);
double _n_age_11175=(_n_u_11154-_n_born_11174);
if(((d::truth((_n_age_11175<0.0))||d::truth((_n_age_11175>=_n_Z_LIFE_11147)))||d::truth(this->_n_awake_11151(d::mod((d::mod(_n_born_11174,_n_LOOP_11140)+_n_LOOP_11140),_n_LOOP_11140))))){d::check_cancel();continue;
}
double _n_i_11176=std::floor(((_n_age_11175/_n_Z_LIFE_11147)*double(_n_Z_PATH_11148.size())));
auto _n_binding_11198=d::at(_n_Z_PATH_11148,_n_i_11176);
double _n_r_11177=d::at(_n_binding_11198,0.0);
double _n_c_11178=d::at(_n_binding_11198,1.0);
(void)(([&](){auto&& _n_array_11199=d::at(_n_grid_11155,_n_r_11177);auto _n_index_11200=_n_c_11178;auto _n_value_11201=(d::truth((_n_i_11176<6.0))?d::String(u"z"):d::String(u"Z"));d::put(_n_array_11199,_n_index_11200,_n_value_11201);return _n_value_11201;})());
}}
return d::join(d::map(_n_grid_11155,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_11179=_a0;
return d::join(_n_row_11179,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fox").cols)*ascii::catalog_meta("fox").rows);auto _env=std::make_shared<_n_Record_11180>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fox_meta(){return catalog_meta("fox");}
std::unique_ptr<Piece> make_fox(const AsciiPieceOptions &o){return std::make_unique<Native_fox>(o);}
}
