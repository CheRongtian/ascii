// Direct, statically typed C++ from src/pieces/solar-system.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29295;
struct _n_Record_29296;
struct _n_Record_29299;
struct _n_Record_29353;
struct _n_Record_29354;
struct _n_Record_29362;
struct _n_Record_29363;
struct _n_Record_29364;
struct _n_Record_29295{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29296> _p_options{};
static std::shared_ptr<_n_Record_29295> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29295>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29296>>(j["options"]);return out;}
};
struct _n_Record_29296{
double _p_speed{};
static std::shared_ptr<_n_Record_29296> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29296>();out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_29299{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
std::optional<bool> _p_moon{};
static std::shared_ptr<_n_Record_29299> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29299>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);out->_p_moon=d::decode<std::optional<bool>>(j["moon"]);return out;}
};
struct _n_Record_29353{
std::optional<double> _p_speed{};
static std::shared_ptr<_n_Record_29353> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29353>();out->_p_speed=d::decode<std::optional<double>>(j["speed"]);return out;}
};
struct _n_Record_29354{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29354> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29354>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29362{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
static std::shared_ptr<_n_Record_29362> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29362>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);return out;}
};
struct _n_Record_29363{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
bool _p_moon{};
static std::shared_ptr<_n_Record_29363> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29363>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);out->_p_moon=d::decode<bool>(j["moon"]);return out;}
};
struct _n_Record_29364{
double _p_a{};
d::String _p_glyph{};
double _p_at{};
std::optional<bool> _p_moon{};
static std::shared_ptr<_n_Record_29364> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29364>();out->_p_a=d::decode<double>(j["a"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);out->_p_at=d::decode<double>(j["at"]);out->_p_moon=d::decode<std::optional<bool>>(j["moon"]);return out;}
};

std::shared_ptr<_n_Record_29295> _n_meta_29294=[](){return ([&](){auto _n_object_29359=std::make_shared<_n_Record_29295>();_n_object_29359->_p_name=d::String(u"solar system");_n_object_29359->_p_category=d::String(u"space");_n_object_29359->_p_note=d::String(u"four planets on dotted orbits, periods by kepler's third law");_n_object_29359->_p_cols=61.0;_n_object_29359->_p_rows=29.0;_n_object_29359->_p_fps=20.0;_n_object_29359->_p_options=([&](){auto _n_object_29361=std::make_shared<_n_Record_29296>();_n_object_29361->_p_speed=1.0;return _n_object_29361;})();return _n_object_29359;})();}();
const double _n_TAU_29297=[](){return (ascii::PI*2.0);}();
d::Array<std::shared_ptr<_n_Record_29299>,false> _n_PLANETS_29298=[](){return d::Array<std::shared_ptr<_n_Record_29299>,false>{([&](){auto _n_object_29366=std::make_shared<_n_Record_29299>();_n_object_29366->_p_a=9.6;_n_object_29366->_p_glyph=d::String(u"o");_n_object_29366->_p_at=0.5;return _n_object_29366;})(),([&](){auto _n_object_29368=std::make_shared<_n_Record_29299>();_n_object_29368->_p_a=14.5;_n_object_29368->_p_glyph=d::String(u"O");_n_object_29368->_p_at=2.3;_n_object_29368->_p_moon=std::optional<bool>(true);return _n_object_29368;})(),([&](){auto _n_object_29370=std::make_shared<_n_Record_29299>();_n_object_29370->_p_a=21.0;_n_object_29370->_p_glyph=d::String(u"(@)");_n_object_29370->_p_at=4.1;return _n_object_29370;})(),([&](){auto _n_object_29372=std::make_shared<_n_Record_29299>();_n_object_29372->_p_a=28.0;_n_object_29372->_p_glyph=d::String(u"-(O)-");_n_object_29372->_p_at=5.9;return _n_object_29372;})()};}();
const double _n_T1_29300=[](){return 3.0;}();
const double _n_TRAIL_29301=[](){return 3.2;}();

struct Native_solar_system final:ascii::Piece{
double _n_speed_29302{};
double _n_cols_29303{};
double _n_rows_29304{};
double _n_cx_29305{};
double _n_cy_29306{};
d::Array<d::String,false> _n_grid_29307{};
d::Set<double> _n_rings_29311{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_sun_29312{};
std::function<d::String(double,std::shared_ptr<_n_Record_29354>)> _render;
double _n_sym_29308(double _a0,double _a1){double _n_v_29314=_a0;
double _n_o_29315=_a1;
return (_n_o_29315+([&](){auto _n_left_29412=d::sign((_n_v_29314-_n_o_29315));auto _n_right_29413=d::round(std::fabs((_n_v_29314-_n_o_29315)));return (_n_left_29412*_n_right_29413);})());}

double _n_cell_29309(double _a0,double _a1){double _n_x_29316=_a0;
double _n_y_29317=_a1;
{
double _n_c_29318=this->_n_sym_29308(_n_x_29316,this->_n_cx_29305);
double _n_r_29319=this->_n_sym_29308(_n_y_29317,this->_n_cy_29306);
return ((((d::truth((_n_c_29318>=0.0))&&d::truth((_n_c_29318<this->_n_cols_29303)))&&d::truth((_n_r_29319>=0.0)))&&d::truth((_n_r_29319<this->_n_rows_29304)))?(_n_c_29318+(_n_r_29319*this->_n_cols_29303)):(-d::number(1.0)));

}
}

std::array<double,2> _n_at_29310(std::shared_ptr<_n_Record_29299> _a0,double _a1){std::shared_ptr<_n_Record_29299> _n_p_29320=_a0;
double _n_th_29321=_a1;
return std::array<double,2>{(this->_n_cx_29305+(_n_p_29320->_p_a*std::cos(_n_th_29321))),(this->_n_cy_29306-((_n_p_29320->_p_a/2.0)*std::sin(_n_th_29321)))};}

explicit Native_solar_system(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29373=d::decode<std::shared_ptr<_n_Record_29353>>(_options.data);
this->_n_speed_29302=(d::present(_n_binding_29373->_p_speed)?d::read(_n_binding_29373->_p_speed):1.0);
auto _n_binding_29374=_n_meta_29294;
this->_n_cols_29303=_n_binding_29374->_p_cols;
this->_n_rows_29304=_n_binding_29374->_p_rows;
this->_n_cx_29305=((this->_n_cols_29303-1.0)/2.0);
this->_n_cy_29306=((this->_n_rows_29304-1.0)/2.0);
this->_n_grid_29307=d::Array<d::String,false>(size_t((this->_n_cols_29303*this->_n_rows_29304)));
this->_n_rings_29311=d::Set<double>();
for(auto &&_n_item_29375:_n_PLANETS_29298){d::check_cancel();std::shared_ptr<_n_Record_29299> _n_p_29322=_n_item_29375;
{
double _n_n_29323=d::round(((_n_TAU_29297*_n_p_29322->_p_a)/2.0));
{double _n_k_29324=0.0;
for(;d::truth((_n_k_29324<_n_n_29323));(void)((_n_k_29324++))){d::check_cancel();(void)(this->_n_rings_29311.add(([&](){auto _n_arguments_29376=this->_n_at_29310(_n_p_29322,((_n_k_29324/_n_n_29323)*_n_TAU_29297));return this->_n_cell_29309(d::at(_n_arguments_29376,0.0),d::at(_n_arguments_29376,1.0));})()));
}}

}
}
this->_n_sun_29312=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
{double _n_r_29325=(-d::number(2.0));
for(;d::truth((_n_r_29325<=2.0));(void)((_n_r_29325++))){d::check_cancel();{double _n_c_29326=(-d::number(5.0));
for(;d::truth((_n_c_29326<=5.0));(void)((_n_c_29326++))){d::check_cancel();double _n_d_29327=(d::hypot(std::initializer_list<double>{_n_c_29326,(_n_r_29325*2.0)})/4.4);
if(d::truth((_n_d_29327<=1.0))){d::check_cancel();(void)(this->_n_sun_29312.push(std::make_shared<std::tuple<double,d::String>>(this->_n_cell_29309((this->_n_cx_29305+_n_c_29326),(this->_n_cy_29306+_n_r_29325)),(d::truth((_n_d_29327<0.35))?d::String(u"@"):(d::truth((_n_d_29327<0.6))?d::String(u"%"):(d::truth((_n_d_29327<0.82))?d::String(u"*"):d::String(u"+")))))));
}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_29354> _a1) mutable ->d::String{double _n_t_29328=_a0;
{
(void)(this->_n_grid_29307.fill(d::String(u" ")));
for(auto &&_n_item_29377:this->_n_rings_29311.values()){d::check_cancel();double _n_k_29329=_n_item_29377;
if(d::truth((_n_k_29329>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29378=this->_n_grid_29307;auto _n_index_29379=_n_k_29329;auto _n_value_29380=d::String(u".");d::put(_n_array_29378,_n_index_29379,_n_value_29380);return _n_value_29380;})());
}
}
for(auto &&_n_item_29381:this->_n_sun_29312){d::check_cancel();auto _n_binding_29382=_n_item_29381;
double _n_k_29330=std::get<0>(*_n_binding_29382);
d::String _n_ch_29331=std::get<1>(*_n_binding_29382);
(void)(([&](){auto&& _n_array_29383=this->_n_grid_29307;auto _n_index_29384=_n_k_29330;auto _n_value_29385=_n_ch_29331;d::put(_n_array_29383,_n_index_29384,_n_value_29385);return _n_value_29385;})());
}
for(auto &&_n_item_29386:_n_PLANETS_29298){d::check_cancel();std::shared_ptr<_n_Record_29299> _n_p_29332=_n_item_29386;
{
double _n_th_29333=(_n_p_29332->_p_at+(((_n_TAU_29297*_n_t_29328)*this->_n_speed_29302)/(_n_T1_29300*std::pow((_n_p_29332->_p_a/d::at(_n_PLANETS_29298,0.0)->_p_a),1.5))));
auto _n_binding_29387=this->_n_at_29310(_n_p_29332,_n_th_29333);
double _n_x_29334=d::at(_n_binding_29387,0.0);
double _n_y_29335=d::at(_n_binding_29387,1.0);
double _n_x0_29336=d::round((_n_x_29334-((double(_n_p_29332->_p_glyph.size())-1.0)/2.0)));
double _n_r0_29337=d::round(_n_y_29335);
auto _n_mine_29338=[&]( double _a0) mutable ->bool{double _n_k_29339=_a0;
return ([&]()->bool{auto _n_logical_29388=([&]()->bool{auto _n_logical_29389=([&]()->bool{auto _n_logical_29390=(_n_k_29339>=0.0);return d::truth(_n_logical_29390)?(std::floor((_n_k_29339/this->_n_cols_29303))==_n_r0_29337):_n_logical_29390;})();return d::truth(_n_logical_29389)?(d::mod(_n_k_29339,this->_n_cols_29303)>=_n_x0_29336):_n_logical_29389;})();return d::truth(_n_logical_29388)?(d::mod(_n_k_29339,this->_n_cols_29303)<(_n_x0_29336+double(_n_p_29332->_p_glyph.size()))):_n_logical_29388;})();};
double _n_len_29340=d::round((_n_TRAIL_29301*std::sqrt((d::at(_n_PLANETS_29298,0.0)->_p_a/_n_p_29332->_p_a))));
double _n_last_29341=this->_n_cell_29309(_n_x_29334,_n_y_29335);
double _n_drawn_29342=0.0;
{double _n_u_29343=_n_th_29333;
for(;(d::truth((_n_drawn_29342<_n_len_29340))&&d::truth((_n_u_29343>(_n_th_29333-1.0))));(void)((_n_u_29343=(_n_u_29343-0.01)))){d::check_cancel();double _n_k_29344=([&](){auto _n_arguments_29391=this->_n_at_29310(_n_p_29332,_n_u_29343);return this->_n_cell_29309(d::at(_n_arguments_29391,0.0),d::at(_n_arguments_29391,1.0));})();
if((d::truth((_n_k_29344==_n_last_29341))||d::truth(_n_mine_29338(_n_k_29344)))){d::check_cancel();continue;
}
(void)((_n_last_29341=_n_k_29344));
if(d::truth((_n_k_29344<0.0))){d::check_cancel();break;
}
double _n_s_29345=([&](){auto _n_left_29392=std::fabs(std::cos(_n_u_29343));auto _n_right_29393=([&](){auto _n_argument_29394=0.000001;auto _n_argument_29395=std::fabs(std::sin(_n_u_29343));return d::maximum({_n_argument_29394,_n_argument_29395});})();return (_n_left_29392/_n_right_29393);})();
d::String _n_g_29346=(d::truth((_n_s_29345<0.6))?d::String(u"-"):(d::truth((_n_s_29345>2.4))?d::String(u"|"):(d::truth((([&](){auto _n_left_29396=std::sin(_n_u_29343);auto _n_right_29397=std::cos(_n_u_29343);return (_n_left_29396*_n_right_29397);})()>0.0))?d::String(u"\\"):d::String(u"/"))));
(void)(([&](){auto&& _n_array_29398=this->_n_grid_29307;auto _n_index_29399=_n_k_29344;auto _n_value_29400=(d::truth((_n_drawn_29342<(_n_len_29340-1.0)))?_n_g_29346:d::String(u"·"));d::put(_n_array_29398,_n_index_29399,_n_value_29400);return _n_value_29400;})());
(void)((_n_drawn_29342++));
}}
{double _n_i_29347=(-d::number(1.0));
for(;d::truth((_n_i_29347<=double(_n_p_29332->_p_glyph.size())));(void)((_n_i_29347++))){d::check_cancel();double _n_k_29348=this->_n_cell_29309((_n_x0_29336+_n_i_29347),_n_r0_29337);
if(d::truth((_n_k_29348<0.0))){d::check_cancel();continue;
}
if(d::truth(d::at(_n_p_29332->_p_glyph,_n_i_29347))){d::check_cancel();(void)(([&](){auto&& _n_array_29401=this->_n_grid_29307;auto _n_index_29402=_n_k_29348;auto _n_value_29403=d::at(_n_p_29332->_p_glyph,_n_i_29347);d::put(_n_array_29401,_n_index_29402,_n_value_29403);return _n_value_29403;})());
}else {d::check_cancel();if(d::truth((d::at(this->_n_grid_29307,_n_k_29348)==d::String(u".")))){d::check_cancel();(void)(([&](){auto&& _n_array_29404=this->_n_grid_29307;auto _n_index_29405=_n_k_29348;auto _n_value_29406=d::String(u" ");d::put(_n_array_29404,_n_index_29405,_n_value_29406);return _n_value_29406;})());
}
}
}}
if(d::truth(_n_p_29332->_p_moon)){d::check_cancel();double _n_m_29349=(((_n_TAU_29297*_n_t_29328)*this->_n_speed_29302)/1.1);
double _n_k_29350=([&](){auto _n_argument_29407=(_n_x_29334+(2.4*std::cos(_n_m_29349)));auto _n_argument_29408=(_n_y_29335-(1.2*std::sin(_n_m_29349)));return this->_n_cell_29309(_n_argument_29407,_n_argument_29408);})();
if(d::truth((_n_k_29350>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29409=this->_n_grid_29307;auto _n_index_29410=_n_k_29350;auto _n_value_29411=d::String(u"°");d::put(_n_array_29409,_n_index_29410,_n_value_29411);return _n_value_29411;})());
}
}

}
}
d::Array<d::String,false> _n_lines_29351=d::Array<d::String,false>{};
{double _n_r_29352=0.0;
for(;d::truth((_n_r_29352<this->_n_rows_29304));(void)((_n_r_29352++))){d::check_cancel();(void)(_n_lines_29351.push(d::join(this->_n_grid_29307.slice((_n_r_29352*this->_n_cols_29303),((_n_r_29352+1.0)*this->_n_cols_29303)),d::String(u""))));
}}
return d::join(_n_lines_29351,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("solar-system").cols)*ascii::catalog_meta("solar-system").rows);auto _env=std::make_shared<_n_Record_29354>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &solar_system_meta(){return catalog_meta("solar-system");}
std::unique_ptr<Piece> make_solar_system(const AsciiPieceOptions &o){return std::make_unique<Native_solar_system>(o);}
}
