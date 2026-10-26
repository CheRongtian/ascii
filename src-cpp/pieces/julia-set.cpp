// Direct, statically typed C++ from src/pieces/julia-set.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_15011;
struct _n_Record_15049;
struct _n_Record_15011{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_15011> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15011>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_15049{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_15049> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15049>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_15011> _n_meta_15010=[](){return ([&](){auto _n_object_15052=std::make_shared<_n_Record_15011>();_n_object_15052->_p_name=d::String(u"julia set");_n_object_15052->_p_category=d::String(u"generative");_n_object_15052->_p_note=d::String(u"a julia set changing shape as its constant c goes round");_n_object_15052->_p_cols=66.0;_n_object_15052->_p_rows=24.0;_n_object_15052->_p_fps=20.0;return _n_object_15052;})();}();
const d::String _n_RAMP_15012=[](){return d::String(u" .:-=+*#%@");}();
const double _n_P_15013=[](){return 40.0;}();
const double _n_CX_15014=[](){return (-d::number(0.4));}();
const double _n_R_15015=[](){return 0.68;}();
const double _n_A0_15016=[](){return (ascii::PI/2.0);}();
const double _n_MAX_15017=[](){return 120.0;}();
const double _n_SPAN_15018=[](){return 3.7;}();
const double _n_REACH_15019=[](){return 4.0;}();

struct Native_julia_set final:ascii::Piece{
double _n_cols_15020{};
double _n_rows_15021{};
double _n_N_15022{};
double _n_dx_15023{};
double _n_dy_15024{};
double _n_half_15025{};
d::Array<d::Array<d::String,false>,false> _n_grid_15026{};
std::function<d::String(double,std::shared_ptr<_n_Record_15049>)> _render;

explicit Native_julia_set(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_15053=_n_meta_15010;
this->_n_cols_15020=_n_binding_15053->_p_cols;
this->_n_rows_15021=_n_binding_15053->_p_rows;
this->_n_N_15022=double(_n_RAMP_15012.size());
this->_n_dx_15023=(_n_SPAN_15018/this->_n_cols_15020);
this->_n_dy_15024=(this->_n_dx_15023*2.0);
this->_n_half_15025=(this->_n_rows_15021/2.0);
this->_n_grid_15026=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_half_15025,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_15020));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_15049> _a1) mutable ->d::String{double _n_t_15027=_a0;
{
double _n_a_15028=(_n_A0_15016+(((2.0*ascii::PI)*_n_t_15027)/_n_P_15013));
double _n_cr_15029=(_n_CX_15014+(_n_R_15015*std::cos(_n_a_15028)));
double _n_ci_15030=(_n_R_15015*std::sin(_n_a_15028));
{double _n_r_15031=0.0;
for(;d::truth((_n_r_15031<this->_n_half_15025));(void)((_n_r_15031++))){d::check_cancel();double _n_y0_15032=(((_n_r_15031+0.5)-this->_n_half_15025)*this->_n_dy_15024);
{double _n_c_15033=0.0;
for(;d::truth((_n_c_15033<this->_n_cols_15020));(void)((_n_c_15033++))){d::check_cancel();double _n_x_15034=(((_n_c_15033+0.5)-(this->_n_cols_15020/2.0))*this->_n_dx_15023);
double _n_y_15035=_n_y0_15032;
double _n_n_15036=0.0;
double _n_m_15037=0.0;
double _n_ex_15038=1.0;
double _n_ey_15039=0.0;
{for(;d::truth((_n_n_15036<_n_MAX_15017));(void)((_n_n_15036++))){d::check_cancel();double _n_xx_15040=(_n_x_15034*_n_x_15034);
double _n_yy_15041=(_n_y_15035*_n_y_15035);
(void)((_n_m_15037=(_n_xx_15040+_n_yy_15041)));
if(d::truth((_n_m_15037>10000.0))){d::check_cancel();break;
}
double _n_t2_15042=(2.0*((_n_x_15034*_n_ex_15038)-(_n_y_15035*_n_ey_15039)));
(void)((_n_ey_15039=(2.0*((_n_x_15034*_n_ey_15039)+(_n_y_15035*_n_ex_15038)))));
(void)((_n_ex_15038=_n_t2_15042));
(void)((_n_y_15035=(((2.0*_n_x_15034)*_n_y_15035)+_n_ci_15030)));
(void)((_n_x_15034=((_n_xx_15040-_n_yy_15041)+_n_cr_15029)));
}}
if(d::truth((_n_n_15036==_n_MAX_15017))){d::check_cancel();(void)(([&](){auto&& _n_array_15054=d::at(this->_n_grid_15026,_n_r_15031);auto _n_index_15055=_n_c_15033;auto _n_value_15056=d::String(u" ");d::put(_n_array_15054,_n_index_15055,_n_value_15056);return _n_value_15056;})());
continue;
}
double _n_z_15043=std::sqrt(_n_m_15037);
double _n_d_15044=(([&](){auto _n_left_15057=((0.5*_n_z_15043)*std::log(_n_z_15043));auto _n_right_15058=d::hypot(std::initializer_list<double>{_n_ex_15038,_n_ey_15039});return (_n_left_15057/_n_right_15058);})()/this->_n_dx_15023);
double _n_k_15045=([&](){auto _n_argument_15059=0.0;auto _n_argument_15060=(1.0-std::pow((_n_d_15044/_n_REACH_15019),0.6));return d::maximum({_n_argument_15059,_n_argument_15060});})();
(void)(([&](){auto&& _n_array_15061=d::at(this->_n_grid_15026,_n_r_15031);auto _n_index_15062=_n_c_15033;auto _n_value_15063=d::at(_n_RAMP_15012,([&](){auto _n_argument_15064=(this->_n_N_15022-1.0);auto _n_argument_15065=std::floor((_n_k_15045*this->_n_N_15022));return d::minimum({_n_argument_15064,_n_argument_15065});})());d::put(_n_array_15061,_n_index_15062,_n_value_15063);return _n_value_15063;})());
}}
}}
d::Array<d::String,false> _n_lines_15046=d::map(this->_n_grid_15026,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_15047=_a0;
return d::join(_n_row_15047,d::String(u""));});
{double _n_r_15048=(this->_n_half_15025-1.0);
for(;d::truth((_n_r_15048>=0.0));(void)((_n_r_15048--))){d::check_cancel();(void)(_n_lines_15046.push(d::join(d::at(this->_n_grid_15026,_n_r_15048).slice().reverse(),d::String(u""))));
}}
return d::join(_n_lines_15046,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("julia-set").cols)*ascii::catalog_meta("julia-set").rows);auto _env=std::make_shared<_n_Record_15049>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &julia_set_meta(){return catalog_meta("julia-set");}
std::unique_ptr<Piece> make_julia_set(const AsciiPieceOptions &o){return std::make_unique<Native_julia_set>(o);}
}
