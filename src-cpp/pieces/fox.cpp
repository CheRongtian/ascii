// Direct, statically typed C++ from src/pieces/fox.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11137;
struct _n_Record_11181;
struct _n_Record_11137{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_11137> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11137>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_11181{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11181> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11181>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_11137> _n_meta_11136=[](){return ([&](){auto _n_object_11184=std::make_shared<_n_Record_11137>();_n_object_11184->_p_name=d::String(u"fox");_n_object_11184->_p_category=d::String(u"creatures");_n_object_11184->_p_note=d::String(u"a fox asleep on its tail, breathing, peeking now and then");_n_object_11184->_p_cols=47.0;_n_object_11184->_p_rows=16.0;_n_object_11184->_p_fps=10.0;return _n_object_11184;})();}();
d::Array<d::String,false> _n_FOX_11138=[](){return d::Array<d::String,false>{d::String(u"           /\\          /\\"),d::String(u"          /  \\        /  \\"),d::String(u"         /    `.____.'    \\"),d::String(u"        /                  \\"),d::String(u"       ;    `-'      `-'    ;"),d::String(u"        `.     \\    /     .'`-.._"),d::String(u"     _.-' `-.   \\../   .-'       ``-._"),d::String(u"  .-'        `-. \\/ .-'               `."),d::String(u" /   _..--''``-.`--'.-''``--..__        \\"),d::String(u"|  .'   ,                       ``-.     |"),d::String(u"| (    (                            `.   |"),d::String(u"|  `.   `.                            \\  |"),d::String(u" \\   `-..__                            \\ |"),d::String(u"  `-..__   ``---...______________...----'")};}();
const double _n_OX_11139=[](){return 2.0;}();
const double _n_OY_11140=[](){return 1.0;}();
const double _n_LOOP_11141=[](){return 12.0;}();
const double _n_BREATH_11142=[](){return 4.0;}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_SWELL_11143=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(7.0,38.0,d::String(u"`-.")),std::make_shared<std::tuple<double,double,d::String>>(8.0,40.0,d::String(u" \\")),std::make_shared<std::tuple<double,double,d::String>>(9.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(10.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(11.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(12.0,41.0,d::String(u" |")),std::make_shared<std::tuple<double,double,d::String>>(13.0,40.0,d::String(u"-'"))};}();
d::Array<double,false> _n_EYE_11144=[](){return d::Array<double,false>{4.0,21.0};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false> _n_PEEK_11145=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false>{std::make_shared<std::tuple<double,double,d::String,double>>(2.2,2.5,d::String(u"`o'"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(2.5,3.0,d::String(u"(o)"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,3.5,d::String(u"(o)"),(-d::number(1.0))),std::make_shared<std::tuple<double,double,d::String,double>>(3.5,4.0,d::String(u"(o)"),1.0),std::make_shared<std::tuple<double,double,d::String,double>>(4.0,4.3,d::String(u"(o)"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(4.3,4.6,d::String(u"`o'"),0.0)};}();
d::Array<d::Array<double,false>,false> _n_EAR_11146=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{7.0,7.2},d::Array<double,false>{7.45,7.65}};}();
const double _n_Z_EVERY_11147=[](){return 2.0;}();
const double _n_Z_LIFE_11148=[](){return 4.0;}();
d::Array<d::Array<double,false>,false> _n_Z_PATH_11149=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,31.0},d::Array<double,false>{3.0,32.0},d::Array<double,false>{3.0,33.0},d::Array<double,false>{3.0,34.0},d::Array<double,false>{2.0,35.0},d::Array<double,false>{2.0,36.0},d::Array<double,false>{2.0,37.0},d::Array<double,false>{1.0,38.0},d::Array<double,false>{1.0,39.0},d::Array<double,false>{1.0,40.0}};}();

struct Native_fox final:ascii::Piece{
double _n_cols_11150{};
double _n_rows_11151{};
std::function<d::String(double,std::shared_ptr<_n_Record_11181>)> _render;
bool _n_awake_11152(double _a0){double _n_u_11153=_a0;
return ([&]()->bool{auto _n_logical_11203=(_n_u_11153>=(std::get<0>(*d::at(_n_PEEK_11145,0.0))-0.3));return d::truth(_n_logical_11203)?(_n_u_11153<(std::get<1>(*d::at(_n_PEEK_11145,(double(_n_PEEK_11145.size())-1.0)))+0.6)):_n_logical_11203;})();}

explicit Native_fox(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11185=_n_meta_11136;
this->_n_cols_11150=_n_binding_11185->_p_cols;
this->_n_rows_11151=_n_binding_11185->_p_rows;
_render=[=]( double _a0,std::shared_ptr<_n_Record_11181> _a1) mutable ->d::String{double _n_t_11154=_a0;
{
double _n_u_11155=d::mod((d::mod(_n_t_11154,_n_LOOP_11141)+_n_LOOP_11141),_n_LOOP_11141);
d::Array<d::Array<d::String,false>,false> _n_grid_11156=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_11151,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_11150)).fill(d::String(u" "));}));
auto _n_put_11157=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_11158=_a0;
double _n_c_11159=_a1;
d::String _n_s_11160=_a2;
d::forEach(([&](){d::Array<d::String,false> _n_array_11186;for(const auto &_v:_n_s_11160)_n_array_11186.push(_v);return _n_array_11186;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_11161=_a0;
double _n_i_11162=_a1;
return ([&](){auto&& _n_array_11187=d::at(_n_grid_11156,(_n_OY_11140+_n_r_11158));auto _n_index_11188=((_n_OX_11139+_n_c_11159)+_n_i_11162);auto _n_value_11189=_n_ch_11161;d::put(_n_array_11187,_n_index_11188,_n_value_11189);return _n_value_11189;})();});};
(void)(d::forEach(_n_FOX_11138,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_11163=_a0;
double _n_r_11164=_a1;
_n_put_11157(_n_r_11164,0.0,_n_line_11163);}));
double _n_b_11165=d::mod(_n_u_11155,_n_BREATH_11142);
if((d::truth((_n_b_11165>=0.6))&&d::truth((_n_b_11165<2.4)))){d::check_cancel();for(auto &&_n_item_11190:_n_SWELL_11143){d::check_cancel();auto _n_binding_11191=_n_item_11190;
double _n_r_11166=std::get<0>(*_n_binding_11191);
double _n_c_11167=std::get<1>(*_n_binding_11191);
d::String _n_s_11168=std::get<2>(*_n_binding_11191);
(void)(_n_put_11157(_n_r_11166,_n_c_11167,_n_s_11168));
}
}
std::shared_ptr<std::tuple<double,double,d::String,double>> _n_peek_11169=d::read(d::find(_n_PEEK_11145,[&]( std::shared_ptr<std::tuple<double,double,d::String,double>> _a0) mutable ->bool{auto _n_binding_11192=_a0;
double _n_a_11170=std::get<0>(*_n_binding_11192);
double _n_z_11171=std::get<1>(*_n_binding_11192);
return ([&]()->bool{auto _n_logical_11193=(_n_u_11155>=_n_a_11170);return d::truth(_n_logical_11193)?(_n_u_11155<_n_z_11171):_n_logical_11193;})();}));
if(d::truth(_n_peek_11169)){d::check_cancel();(void)((([&](){auto _n_argument_11194=d::at(_n_EYE_11144,0.0);auto _n_argument_11195=(d::at(_n_EYE_11144,1.0)-1.0);auto _n_argument_11196=d::repeat(d::String(u" "),5.0);return _n_put_11157(_n_argument_11194,_n_argument_11195,_n_argument_11196);})(),_n_put_11157(d::at(_n_EYE_11144,0.0),(d::at(_n_EYE_11144,1.0)+std::get<3>(*_n_peek_11169)),std::get<2>(*_n_peek_11169))));
}
if(d::truth(d::some(_n_EAR_11146,[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_11197=_a0;
double _n_a_11172=d::at(_n_binding_11197,0.0);
double _n_z_11173=d::at(_n_binding_11197,1.0);
return ([&]()->bool{auto _n_logical_11198=(_n_u_11155>=_n_a_11172);return d::truth(_n_logical_11198)?(_n_u_11155<_n_z_11173):_n_logical_11198;})();}))){d::check_cancel();(void)(_n_put_11157(0.0,23.0,d::String(u"/-")));
}
{double _n_k_11174=(-d::number(2.0));
for(;d::truth((_n_k_11174<=std::ceil((_n_LOOP_11141/_n_Z_EVERY_11147))));(void)((_n_k_11174++))){d::check_cancel();double _n_born_11175=(_n_k_11174*_n_Z_EVERY_11147);
double _n_age_11176=(_n_u_11155-_n_born_11175);
if(((d::truth((_n_age_11176<0.0))||d::truth((_n_age_11176>=_n_Z_LIFE_11148)))||d::truth(this->_n_awake_11152(d::mod((d::mod(_n_born_11175,_n_LOOP_11141)+_n_LOOP_11141),_n_LOOP_11141))))){d::check_cancel();continue;
}
double _n_i_11177=std::floor(((_n_age_11176/_n_Z_LIFE_11148)*double(_n_Z_PATH_11149.size())));
auto _n_binding_11199=d::at(_n_Z_PATH_11149,_n_i_11177);
double _n_r_11178=d::at(_n_binding_11199,0.0);
double _n_c_11179=d::at(_n_binding_11199,1.0);
(void)(([&](){auto&& _n_array_11200=d::at(_n_grid_11156,_n_r_11178);auto _n_index_11201=_n_c_11179;auto _n_value_11202=(d::truth((_n_i_11177<6.0))?d::String(u"z"):d::String(u"Z"));d::put(_n_array_11200,_n_index_11201,_n_value_11202);return _n_value_11202;})());
}}
return d::join(d::map(_n_grid_11156,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_11180=_a0;
return d::join(_n_row_11180,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fox").cols)*ascii::catalog_meta("fox").rows);auto _env=std::make_shared<_n_Record_11181>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fox_meta(){return catalog_meta("fox");}
std::unique_ptr<Piece> make_fox(const AsciiPieceOptions &o){return std::make_unique<Native_fox>(o);}
}
