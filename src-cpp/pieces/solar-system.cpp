// Direct, statically typed C++ from src/pieces/solar-system.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29296;
struct _n_Record_29297;
struct _n_Record_29300;
struct _n_Record_29354;
struct _n_Record_29355;
struct _n_Record_29363;
struct _n_Record_29364;
struct _n_Record_29365;
struct _n_Record_29296{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29297> _p_options{};
static std::shared_ptr<_n_Record_29296> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29296>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29297>>(j["options"]);return out;}
};
struct _n_Record_29297{
double _p_speed{};
static std::shared_ptr<_n_Record_29297> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29297>();out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_29300{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
std::optional<bool> _p_moon{};
static std::shared_ptr<_n_Record_29300> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29300>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);out->_p_moon=d::decode<std::optional<bool>>(j["moon"]);return out;}
};
struct _n_Record_29354{
std::optional<double> _p_speed{};
static std::shared_ptr<_n_Record_29354> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29354>();out->_p_speed=d::decode<std::optional<double>>(j["speed"]);return out;}
};
struct _n_Record_29355{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29355> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29355>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29363{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
static std::shared_ptr<_n_Record_29363> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29363>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);return out;}
};
struct _n_Record_29364{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
bool _p_moon{};
static std::shared_ptr<_n_Record_29364> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29364>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);out->_p_moon=d::decode<bool>(j["moon"]);return out;}
};
struct _n_Record_29365{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
std::optional<bool> _p_moon{};
static std::shared_ptr<_n_Record_29365> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29365>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);out->_p_moon=d::decode<std::optional<bool>>(j["moon"]);return out;}
};

std::shared_ptr<_n_Record_29296> _n_meta_29295=[](){return ([&](){auto _n_object_29360=std::make_shared<_n_Record_29296>();_n_object_29360->_p_name=d::String(u"solar system");_n_object_29360->_p_category=d::String(u"space");_n_object_29360->_p_note=d::String(u"four planets on dotted orbits, periods by kepler's third law");_n_object_29360->_p_cols=61.0;_n_object_29360->_p_rows=29.0;_n_object_29360->_p_fps=20.0;_n_object_29360->_p_options=([&](){auto _n_object_29362=std::make_shared<_n_Record_29297>();_n_object_29362->_p_speed=1.0;return _n_object_29362;})();return _n_object_29360;})();}();
const double _n_TAU_29298=[](){return (ascii::PI*2.0);}();
d::Array<std::shared_ptr<_n_Record_29300>,false> _n_PLANETS_29299=[](){return d::Array<std::shared_ptr<_n_Record_29300>,false>{([&](){auto _n_object_29367=std::make_shared<_n_Record_29300>();_n_object_29367->_p_a=9.6;_n_object_29367->_p_glyph=d::String(u"o");_n_object_29367->_p_at=0.5;return _n_object_29367;})(),([&](){auto _n_object_29369=std::make_shared<_n_Record_29300>();_n_object_29369->_p_a=14.5;_n_object_29369->_p_glyph=d::String(u"O");_n_object_29369->_p_at=2.3;_n_object_29369->_p_moon=std::optional<bool>(true);return _n_object_29369;})(),([&](){auto _n_object_29371=std::make_shared<_n_Record_29300>();_n_object_29371->_p_a=21.0;_n_object_29371->_p_glyph=d::String(u"(@)");_n_object_29371->_p_at=4.1;return _n_object_29371;})(),([&](){auto _n_object_29373=std::make_shared<_n_Record_29300>();_n_object_29373->_p_a=28.0;_n_object_29373->_p_glyph=d::String(u"-(O)-");_n_object_29373->_p_at=5.9;return _n_object_29373;})()};}();
const double _n_T1_29301=[](){return 3.0;}();
const double _n_TRAIL_29302=[](){return 3.2;}();

struct Native_solar_system final:ascii::Piece{
double _n_speed_29303{};
double _n_cols_29304{};
double _n_rows_29305{};
double _n_cx_29306{};
double _n_cy_29307{};
d::Array<d::String,false> _n_grid_29308{};
d::Set<double> _n_rings_29312{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_sun_29313{};
std::function<d::String(double,std::shared_ptr<_n_Record_29355>)> _render;
double _n_sym_29309(double _a0,double _a1){double _n_v_29315=_a0;
double _n_o_29316=_a1;
return (_n_o_29316+([&](){auto _n_left_29413=d::sign((_n_v_29315-_n_o_29316));auto _n_right_29414=d::round(std::fabs((_n_v_29315-_n_o_29316)));return (_n_left_29413*_n_right_29414);})());}

double _n_cell_29310(double _a0,double _a1){double _n_x_29317=_a0;
double _n_y_29318=_a1;
{
double _n_c_29319=this->_n_sym_29309(_n_x_29317,this->_n_cx_29306);
double _n_r_29320=this->_n_sym_29309(_n_y_29318,this->_n_cy_29307);
return ((((d::truth((_n_c_29319>=0.0))&&d::truth((_n_c_29319<this->_n_cols_29304)))&&d::truth((_n_r_29320>=0.0)))&&d::truth((_n_r_29320<this->_n_rows_29305)))?(_n_c_29319+(_n_r_29320*this->_n_cols_29304)):(-d::number(1.0)));

}
}

d::Array<double,false> _n_at_29311(std::shared_ptr<_n_Record_29300> _a0,double _a1){std::shared_ptr<_n_Record_29300> _n_p_29321=_a0;
double _n_th_29322=_a1;
return d::Array<double,false>{(this->_n_cx_29306+(_n_p_29321->_p_a*std::cos(_n_th_29322))),(this->_n_cy_29307-((_n_p_29321->_p_a/2.0)*std::sin(_n_th_29322)))};}

explicit Native_solar_system(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29374=d::decode<std::shared_ptr<_n_Record_29354>>(_options.data);
this->_n_speed_29303=(d::present(_n_binding_29374->_p_speed)?d::read(_n_binding_29374->_p_speed):1.0);
auto _n_binding_29375=_n_meta_29295;
this->_n_cols_29304=_n_binding_29375->_p_cols;
this->_n_rows_29305=_n_binding_29375->_p_rows;
this->_n_cx_29306=((this->_n_cols_29304-1.0)/2.0);
this->_n_cy_29307=((this->_n_rows_29305-1.0)/2.0);
this->_n_grid_29308=d::Array<d::String,false>(size_t((this->_n_cols_29304*this->_n_rows_29305)));
this->_n_rings_29312=d::Set<double>();
for(auto &&_n_item_29376:_n_PLANETS_29299){d::check_cancel();std::shared_ptr<_n_Record_29300> _n_p_29323=_n_item_29376;
{
double _n_n_29324=d::round(((_n_TAU_29298*_n_p_29323->_p_a)/2.0));
{double _n_k_29325=0.0;
for(;d::truth((_n_k_29325<_n_n_29324));(void)((_n_k_29325++))){d::check_cancel();(void)(this->_n_rings_29312.add(([&](){auto _n_arguments_29377=this->_n_at_29311(_n_p_29323,((_n_k_29325/_n_n_29324)*_n_TAU_29298));return this->_n_cell_29310(d::at(_n_arguments_29377,0.0),d::at(_n_arguments_29377,1.0));})()));
}}

}
}
this->_n_sun_29313=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
{double _n_r_29326=(-d::number(2.0));
for(;d::truth((_n_r_29326<=2.0));(void)((_n_r_29326++))){d::check_cancel();{double _n_c_29327=(-d::number(5.0));
for(;d::truth((_n_c_29327<=5.0));(void)((_n_c_29327++))){d::check_cancel();double _n_d_29328=(d::hypot(std::initializer_list<double>{_n_c_29327,(_n_r_29326*2.0)})/4.4);
if(d::truth((_n_d_29328<=1.0))){d::check_cancel();(void)(this->_n_sun_29313.push(std::make_shared<std::tuple<double,d::String>>(this->_n_cell_29310((this->_n_cx_29306+_n_c_29327),(this->_n_cy_29307+_n_r_29326)),(d::truth((_n_d_29328<0.35))?d::String(u"@"):(d::truth((_n_d_29328<0.6))?d::String(u"%"):(d::truth((_n_d_29328<0.82))?d::String(u"*"):d::String(u"+")))))));
}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_29355> _a1) mutable ->d::String{double _n_t_29329=_a0;
{
(void)(this->_n_grid_29308.fill(d::String(u" ")));
for(auto &&_n_item_29378:this->_n_rings_29312.values()){d::check_cancel();double _n_k_29330=_n_item_29378;
if(d::truth((_n_k_29330>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29379=this->_n_grid_29308;auto _n_index_29380=_n_k_29330;auto _n_value_29381=d::String(u".");d::put(_n_array_29379,_n_index_29380,_n_value_29381);return _n_value_29381;})());
}
}
for(auto &&_n_item_29382:this->_n_sun_29313){d::check_cancel();auto _n_binding_29383=_n_item_29382;
double _n_k_29331=std::get<0>(*_n_binding_29383);
d::String _n_ch_29332=std::get<1>(*_n_binding_29383);
(void)(([&](){auto&& _n_array_29384=this->_n_grid_29308;auto _n_index_29385=_n_k_29331;auto _n_value_29386=_n_ch_29332;d::put(_n_array_29384,_n_index_29385,_n_value_29386);return _n_value_29386;})());
}
for(auto &&_n_item_29387:_n_PLANETS_29299){d::check_cancel();std::shared_ptr<_n_Record_29300> _n_p_29333=_n_item_29387;
{
double _n_th_29334=(_n_p_29333->_p_at+(((_n_TAU_29298*_n_t_29329)*this->_n_speed_29303)/(_n_T1_29301*std::pow((_n_p_29333->_p_a/d::at(_n_PLANETS_29299,0.0)->_p_a),1.5))));
auto _n_binding_29388=this->_n_at_29311(_n_p_29333,_n_th_29334);
double _n_x_29335=d::at(_n_binding_29388,0.0);
double _n_y_29336=d::at(_n_binding_29388,1.0);
double _n_x0_29337=d::round((_n_x_29335-((double(_n_p_29333->_p_glyph.size())-1.0)/2.0)));
double _n_r0_29338=d::round(_n_y_29336);
auto _n_mine_29339=[&]( double _a0) mutable ->bool{double _n_k_29340=_a0;
return ([&]()->bool{auto _n_logical_29389=([&]()->bool{auto _n_logical_29390=([&]()->bool{auto _n_logical_29391=(_n_k_29340>=0.0);return d::truth(_n_logical_29391)?(std::floor((_n_k_29340/this->_n_cols_29304))==_n_r0_29338):_n_logical_29391;})();return d::truth(_n_logical_29390)?(d::mod(_n_k_29340,this->_n_cols_29304)>=_n_x0_29337):_n_logical_29390;})();return d::truth(_n_logical_29389)?(d::mod(_n_k_29340,this->_n_cols_29304)<(_n_x0_29337+double(_n_p_29333->_p_glyph.size()))):_n_logical_29389;})();};
double _n_len_29341=d::round((_n_TRAIL_29302*std::sqrt((d::at(_n_PLANETS_29299,0.0)->_p_a/_n_p_29333->_p_a))));
double _n_last_29342=this->_n_cell_29310(_n_x_29335,_n_y_29336);
double _n_drawn_29343=0.0;
{double _n_u_29344=_n_th_29334;
for(;(d::truth((_n_drawn_29343<_n_len_29341))&&d::truth((_n_u_29344>(_n_th_29334-1.0))));(void)((_n_u_29344=(_n_u_29344-0.01)))){d::check_cancel();double _n_k_29345=([&](){auto _n_arguments_29392=this->_n_at_29311(_n_p_29333,_n_u_29344);return this->_n_cell_29310(d::at(_n_arguments_29392,0.0),d::at(_n_arguments_29392,1.0));})();
if((d::truth((_n_k_29345==_n_last_29342))||d::truth(_n_mine_29339(_n_k_29345)))){d::check_cancel();continue;
}
(void)((_n_last_29342=_n_k_29345));
if(d::truth((_n_k_29345<0.0))){d::check_cancel();break;
}
double _n_s_29346=([&](){auto _n_left_29393=std::fabs(std::cos(_n_u_29344));auto _n_right_29394=([&](){auto _n_argument_29395=0.000001;auto _n_argument_29396=std::fabs(std::sin(_n_u_29344));return d::maximum({_n_argument_29395,_n_argument_29396});})();return (_n_left_29393/_n_right_29394);})();
d::String _n_g_29347=(d::truth((_n_s_29346<0.6))?d::String(u"-"):(d::truth((_n_s_29346>2.4))?d::String(u"|"):(d::truth((([&](){auto _n_left_29397=std::sin(_n_u_29344);auto _n_right_29398=std::cos(_n_u_29344);return (_n_left_29397*_n_right_29398);})()>0.0))?d::String(u"\\"):d::String(u"/"))));
(void)(([&](){auto&& _n_array_29399=this->_n_grid_29308;auto _n_index_29400=_n_k_29345;auto _n_value_29401=(d::truth((_n_drawn_29343<(_n_len_29341-1.0)))?_n_g_29347:d::String(u"·"));d::put(_n_array_29399,_n_index_29400,_n_value_29401);return _n_value_29401;})());
(void)((_n_drawn_29343++));
}}
{double _n_i_29348=(-d::number(1.0));
for(;d::truth((_n_i_29348<=double(_n_p_29333->_p_glyph.size())));(void)((_n_i_29348++))){d::check_cancel();double _n_k_29349=this->_n_cell_29310((_n_x0_29337+_n_i_29348),_n_r0_29338);
if(d::truth((_n_k_29349<0.0))){d::check_cancel();continue;
}
if(d::truth(d::at(_n_p_29333->_p_glyph,_n_i_29348))){d::check_cancel();(void)(([&](){auto&& _n_array_29402=this->_n_grid_29308;auto _n_index_29403=_n_k_29349;auto _n_value_29404=d::at(_n_p_29333->_p_glyph,_n_i_29348);d::put(_n_array_29402,_n_index_29403,_n_value_29404);return _n_value_29404;})());
}else {d::check_cancel();if(d::truth((d::at(this->_n_grid_29308,_n_k_29349)==d::String(u".")))){d::check_cancel();(void)(([&](){auto&& _n_array_29405=this->_n_grid_29308;auto _n_index_29406=_n_k_29349;auto _n_value_29407=d::String(u" ");d::put(_n_array_29405,_n_index_29406,_n_value_29407);return _n_value_29407;})());
}
}
}}
if(d::truth(_n_p_29333->_p_moon)){d::check_cancel();double _n_m_29350=(((_n_TAU_29298*_n_t_29329)*this->_n_speed_29303)/1.1);
double _n_k_29351=([&](){auto _n_argument_29408=(_n_x_29335+(2.4*std::cos(_n_m_29350)));auto _n_argument_29409=(_n_y_29336-(1.2*std::sin(_n_m_29350)));return this->_n_cell_29310(_n_argument_29408,_n_argument_29409);})();
if(d::truth((_n_k_29351>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29410=this->_n_grid_29308;auto _n_index_29411=_n_k_29351;auto _n_value_29412=d::String(u"°");d::put(_n_array_29410,_n_index_29411,_n_value_29412);return _n_value_29412;})());
}
}

}
}
d::Array<d::String,false> _n_lines_29352=d::Array<d::String,false>{};
{double _n_r_29353=0.0;
for(;d::truth((_n_r_29353<this->_n_rows_29305));(void)((_n_r_29353++))){d::check_cancel();(void)(_n_lines_29352.push(d::join(this->_n_grid_29308.slice((_n_r_29353*this->_n_cols_29304),((_n_r_29353+1.0)*this->_n_cols_29304)),d::String(u""))));
}}
return d::join(_n_lines_29352,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("solar-system").cols)*ascii::catalog_meta("solar-system").rows);auto _env=std::make_shared<_n_Record_29355>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &solar_system_meta(){return catalog_meta("solar-system");}
std::unique_ptr<Piece> make_solar_system(const AsciiPieceOptions &o){return std::make_unique<Native_solar_system>(o);}
}
