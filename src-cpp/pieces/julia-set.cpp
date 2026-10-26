// Direct, statically typed C++ from src/pieces/julia-set.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_15010;
struct _n_Record_15048;
struct _n_Record_15010{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_15010> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15010>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_15048{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_15048> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15048>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_15010> _n_meta_15009=[](){return ([&](){auto _n_object_15051=std::make_shared<_n_Record_15010>();_n_object_15051->_p_name=d::String(u"julia set");_n_object_15051->_p_category=d::String(u"generative");_n_object_15051->_p_note=d::String(u"a julia set changing shape as its constant c goes round");_n_object_15051->_p_cols=66.0;_n_object_15051->_p_rows=24.0;_n_object_15051->_p_fps=20.0;return _n_object_15051;})();}();
const d::String _n_RAMP_15011=[](){return d::String(u" .:-=+*#%@");}();
const double _n_P_15012=[](){return 40.0;}();
const double _n_CX_15013=[](){return (-d::number(0.4));}();
const double _n_R_15014=[](){return 0.68;}();
const double _n_A0_15015=[](){return (ascii::PI/2.0);}();
const double _n_MAX_15016=[](){return 120.0;}();
const double _n_SPAN_15017=[](){return 3.7;}();
const double _n_REACH_15018=[](){return 4.0;}();

struct Native_julia_set final:ascii::Piece{
double _n_cols_15019{};
double _n_rows_15020{};
double _n_N_15021{};
double _n_dx_15022{};
double _n_dy_15023{};
double _n_half_15024{};
d::Array<d::Array<d::String,false>,false> _n_grid_15025{};
std::function<d::String(double,std::shared_ptr<_n_Record_15048>)> _render;

explicit Native_julia_set(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_15052=_n_meta_15009;
this->_n_cols_15019=_n_binding_15052->_p_cols;
this->_n_rows_15020=_n_binding_15052->_p_rows;
this->_n_N_15021=double(_n_RAMP_15011.size());
this->_n_dx_15022=(_n_SPAN_15017/this->_n_cols_15019);
this->_n_dy_15023=(this->_n_dx_15022*2.0);
this->_n_half_15024=(this->_n_rows_15020/2.0);
this->_n_grid_15025=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_half_15024,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_15019));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_15048> _a1) mutable ->d::String{double _n_t_15026=_a0;
{
double _n_a_15027=(_n_A0_15015+(((2.0*ascii::PI)*_n_t_15026)/_n_P_15012));
double _n_cr_15028=(_n_CX_15013+(_n_R_15014*std::cos(_n_a_15027)));
double _n_ci_15029=(_n_R_15014*std::sin(_n_a_15027));
{double _n_r_15030=0.0;
for(;d::truth((_n_r_15030<this->_n_half_15024));(void)((_n_r_15030++))){d::check_cancel();double _n_y0_15031=(((_n_r_15030+0.5)-this->_n_half_15024)*this->_n_dy_15023);
{double _n_c_15032=0.0;
for(;d::truth((_n_c_15032<this->_n_cols_15019));(void)((_n_c_15032++))){d::check_cancel();double _n_x_15033=(((_n_c_15032+0.5)-(this->_n_cols_15019/2.0))*this->_n_dx_15022);
double _n_y_15034=_n_y0_15031;
double _n_n_15035=0.0;
double _n_m_15036=0.0;
double _n_ex_15037=1.0;
double _n_ey_15038=0.0;
{for(;d::truth((_n_n_15035<_n_MAX_15016));(void)((_n_n_15035++))){d::check_cancel();double _n_xx_15039=(_n_x_15033*_n_x_15033);
double _n_yy_15040=(_n_y_15034*_n_y_15034);
(void)((_n_m_15036=(_n_xx_15039+_n_yy_15040)));
if(d::truth((_n_m_15036>10000.0))){d::check_cancel();break;
}
double _n_t2_15041=(2.0*((_n_x_15033*_n_ex_15037)-(_n_y_15034*_n_ey_15038)));
(void)((_n_ey_15038=(2.0*((_n_x_15033*_n_ey_15038)+(_n_y_15034*_n_ex_15037)))));
(void)((_n_ex_15037=_n_t2_15041));
(void)((_n_y_15034=(((2.0*_n_x_15033)*_n_y_15034)+_n_ci_15029)));
(void)((_n_x_15033=((_n_xx_15039-_n_yy_15040)+_n_cr_15028)));
}}
if(d::truth((_n_n_15035==_n_MAX_15016))){d::check_cancel();(void)(([&](){auto&& _n_array_15053=d::at(this->_n_grid_15025,_n_r_15030);auto _n_index_15054=_n_c_15032;auto _n_value_15055=d::String(u" ");d::put(_n_array_15053,_n_index_15054,_n_value_15055);return _n_value_15055;})());
continue;
}
double _n_z_15042=std::sqrt(_n_m_15036);
double _n_d_15043=(([&](){auto _n_left_15056=((0.5*_n_z_15042)*std::log(_n_z_15042));auto _n_right_15057=d::hypot(std::initializer_list<double>{_n_ex_15037,_n_ey_15038});return (_n_left_15056/_n_right_15057);})()/this->_n_dx_15022);
double _n_k_15044=([&](){auto _n_argument_15058=0.0;auto _n_argument_15059=(1.0-std::pow((_n_d_15043/_n_REACH_15018),0.6));return d::maximum({_n_argument_15058,_n_argument_15059});})();
(void)(([&](){auto&& _n_array_15060=d::at(this->_n_grid_15025,_n_r_15030);auto _n_index_15061=_n_c_15032;auto _n_value_15062=d::at(_n_RAMP_15011,([&](){auto _n_argument_15063=(this->_n_N_15021-1.0);auto _n_argument_15064=std::floor((_n_k_15044*this->_n_N_15021));return d::minimum({_n_argument_15063,_n_argument_15064});})());d::put(_n_array_15060,_n_index_15061,_n_value_15062);return _n_value_15062;})());
}}
}}
d::Array<d::String,false> _n_lines_15045=d::map(this->_n_grid_15025,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_15046=_a0;
return d::join(_n_row_15046,d::String(u""));});
{double _n_r_15047=(this->_n_half_15024-1.0);
for(;d::truth((_n_r_15047>=0.0));(void)((_n_r_15047--))){d::check_cancel();(void)(_n_lines_15045.push(d::join(d::at(this->_n_grid_15025,_n_r_15047).slice().reverse(),d::String(u""))));
}}
return d::join(_n_lines_15045,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("julia-set").cols)*ascii::catalog_meta("julia-set").rows);auto _env=std::make_shared<_n_Record_15048>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &julia_set_meta(){return catalog_meta("julia-set");}
std::unique_ptr<Piece> make_julia_set(const AsciiPieceOptions &o){return std::make_unique<Native_julia_set>(o);}
}
