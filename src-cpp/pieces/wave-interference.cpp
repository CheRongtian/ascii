// Direct, statically typed C++ from src/pieces/wave-interference.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36818;
struct _n_Record_36819;
struct _n_Record_36859;
struct _n_Record_36860;
struct _n_Record_36818{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_36819> _p_options{};
static std::shared_ptr<_n_Record_36818> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36818>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_36819>>(j["options"]);return out;}
};
struct _n_Record_36819{
double _p_wavelength{};
double _p_separation{};
static std::shared_ptr<_n_Record_36819> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36819>();out->_p_wavelength=d::decode<double>(j["wavelength"]);out->_p_separation=d::decode<double>(j["separation"]);return out;}
};
struct _n_Record_36859{
std::optional<double> _p_wavelength{};
std::optional<double> _p_separation{};
static std::shared_ptr<_n_Record_36859> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36859>();out->_p_wavelength=d::decode<std::optional<double>>(j["wavelength"]);out->_p_separation=d::decode<std::optional<double>>(j["separation"]);return out;}
};
struct _n_Record_36860{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36860> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36860>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_36818> _n_meta_36817=[](){return ([&](){auto _n_object_36865=std::make_shared<_n_Record_36818>();_n_object_36865->_p_name=d::String(u"wave interference");_n_object_36865->_p_category=d::String(u"physics");_n_object_36865->_p_note=d::String(u"two sources in a ripple tank, still lines fanning out");_n_object_36865->_p_cols=72.0;_n_object_36865->_p_rows=26.0;_n_object_36865->_p_fps=24.0;_n_object_36865->_p_options=([&](){auto _n_object_36867=std::make_shared<_n_Record_36819>();_n_object_36867->_p_wavelength=5.0;_n_object_36867->_p_separation=2.2;return _n_object_36867;})();return _n_object_36865;})();}();
const d::String _n_RAMP_36820=[](){return d::String(u" .:=*#");}();
const double _n_CALM_36821=[](){return 2.0;}();
const double _n_PERIOD_36822=[](){return 1.0;}();

struct Native_wave_interference final:ascii::Piece{
double _n_wavelength_36823{};
double _n_separation_36824{};
double _n_cols_36825{};
double _n_rows_36826{};
double _n_lam_36827{};
double _n_k_36828{};
double _n_cx_36829{};
double _n_cy_36830{};
double _n_A_36831{};
double _n_B_36832{};
d::Array<d::String,false> _n_out_36833{};
std::function<d::String(double,std::shared_ptr<_n_Record_36860>)> _render;

explicit Native_wave_interference(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36868=d::decode<std::shared_ptr<_n_Record_36859>>(_options.data);
this->_n_wavelength_36823=(d::present(_n_binding_36868->_p_wavelength)?d::read(_n_binding_36868->_p_wavelength):5.0);
this->_n_separation_36824=(d::present(_n_binding_36868->_p_separation)?d::read(_n_binding_36868->_p_separation):2.2);
auto _n_binding_36869=_n_meta_36817;
this->_n_cols_36825=_n_binding_36869->_p_cols;
this->_n_rows_36826=_n_binding_36869->_p_rows;
this->_n_lam_36827=d::maximum({3.0,this->_n_wavelength_36823});
this->_n_k_36828=((2.0*ascii::PI)/this->_n_lam_36827);
this->_n_cx_36829=(this->_n_cols_36825/4.0);
this->_n_cy_36830=(this->_n_rows_36826/2.0);
this->_n_A_36831=(this->_n_cx_36829-0.6);
this->_n_B_36832=(this->_n_cy_36830-0.4);
this->_n_out_36833=d::Array<d::String,false>(size_t((this->_n_cols_36825*this->_n_rows_36826)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36860> _a1) mutable ->d::String{double _n_t_36835=_a0;
auto _n_binding_36872=(d::present(_a1)?_a1:([&](){auto _n_object_36871=std::make_shared<_n_Record_36860>();return _n_object_36871;})());
bool _n_paper_36836=(d::present(_n_binding_36872->_p_paper)?d::read(_n_binding_36872->_p_paper):false);
{
double _n_w_36837=(((2.0*ascii::PI)*_n_t_36835)/_n_PERIOD_36822);
double _n_half_36838=([&](){auto _n_argument_36873=(this->_n_B_36832-1.5);auto _n_argument_36874=(([&](){auto _n_left_36875=(this->_n_lam_36827*std::fabs(this->_n_separation_36824));auto _n_right_36876=(1.0+(0.2*std::sin((((2.0*ascii::PI)*_n_t_36835)/30.0))));return (_n_left_36875*_n_right_36876);})()/2.0);return d::minimum({_n_argument_36873,_n_argument_36874});})();
double _n_tilt_36839=(0.25*std::sin((((2.0*ascii::PI)*_n_t_36835)/45.0)));
d::Array<double,false> _n_sx_36840=d::Array<double,false>{(this->_n_cx_36829-(_n_half_36838*std::sin(_n_tilt_36839))),(this->_n_cx_36829+(_n_half_36838*std::sin(_n_tilt_36839)))};
d::Array<double,false> _n_sy_36841=d::Array<double,false>{(this->_n_cy_36830-(_n_half_36838*std::cos(_n_tilt_36839))),(this->_n_cy_36830+(_n_half_36838*std::cos(_n_tilt_36839)))};
{double _n_r_36842=0.0;
for(;d::truth((_n_r_36842<this->_n_rows_36826));(void)((_n_r_36842++))){d::check_cancel();{double _n_c_36843=0.0;
for(;d::truth((_n_c_36843<this->_n_cols_36825));(void)((_n_c_36843++))){d::check_cancel();double _n_x_36844=((_n_c_36843+0.5)/2.0);
double _n_y_36845=(_n_r_36842+0.5);
double _n_q_36846=d::hypot(std::initializer_list<double>{((_n_x_36844-this->_n_cx_36829)/this->_n_A_36831),((_n_y_36845-this->_n_cy_36830)/this->_n_B_36832)});
if(d::truth((_n_q_36846>=1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_36877=this->_n_out_36833;auto _n_index_36878=((_n_r_36842*this->_n_cols_36825)+_n_c_36843);auto _n_value_36879=d::String(u" ");d::put(_n_array_36877,_n_index_36878,_n_value_36879);return _n_value_36879;})());
continue;
}
double _n_d1_36847=d::hypot(std::initializer_list<double>{(_n_x_36844-d::at(_n_sx_36840,0.0)),(_n_y_36845-d::at(_n_sy_36841,0.0))});
double _n_d2_36848=d::hypot(std::initializer_list<double>{(_n_x_36844-d::at(_n_sx_36840,1.0)),(_n_y_36845-d::at(_n_sy_36841,1.0))});
double _n_a1_36849=(1.0/std::sqrt((1.0+(_n_d1_36847*0.1))));
double _n_a2_36850=(1.0/std::sqrt((1.0+(_n_d2_36848*0.1))));
double _n_calm_36851=d::minimum({1.0,((1.0-_n_q_36846)/0.2)});
double _n_h_36852=((((([&](){auto _n_left_36880=(_n_a1_36849*std::cos(((this->_n_k_36828*_n_d1_36847)-_n_w_36837)));auto _n_right_36881=(_n_a2_36850*std::cos(((this->_n_k_36828*_n_d2_36848)-_n_w_36837)));return (_n_left_36880+_n_right_36881);})()/(_n_a1_36849+_n_a2_36850))*_n_calm_36851)*_n_calm_36851)*(3.0-(2.0*_n_calm_36851)));
if(d::truth(_n_paper_36836)){d::check_cancel();(void)((_n_h_36852=(-d::number(_n_h_36852))));
}
double _n_i_36853=(d::truth((_n_h_36852<0.0))?d::round((_n_CALM_36821*(1.0+_n_h_36852))):d::round((_n_CALM_36821+(((double(_n_RAMP_36820.size())-1.0)-_n_CALM_36821)*_n_h_36852))));
(void)(([&](){auto&& _n_array_36882=this->_n_out_36833;auto _n_index_36883=((_n_r_36842*this->_n_cols_36825)+_n_c_36843);auto _n_value_36884=d::at(_n_RAMP_36820,_n_i_36853);d::put(_n_array_36882,_n_index_36883,_n_value_36884);return _n_value_36884;})());
}}
}}
{double _n_i_36854=0.0;
for(;d::truth((_n_i_36854<2.0));(void)((_n_i_36854++))){d::check_cancel();double _n_c_36855=std::floor((d::at(_n_sx_36840,_n_i_36854)*2.0));
double _n_r_36856=std::floor(d::at(_n_sy_36841,_n_i_36854));
(void)(([&](){auto&& _n_array_36885=this->_n_out_36833;auto _n_index_36886=(((_n_r_36856*this->_n_cols_36825)+_n_c_36855)-1.0);auto _n_value_36887=([&](){auto&& _n_array_36888=this->_n_out_36833;auto _n_index_36889=(((_n_r_36856*this->_n_cols_36825)+_n_c_36855)+1.0);auto _n_value_36890=d::String(u" ");d::put(_n_array_36888,_n_index_36889,_n_value_36890);return _n_value_36890;})();d::put(_n_array_36885,_n_index_36886,_n_value_36887);return _n_value_36887;})());
(void)(([&](){auto&& _n_array_36891=this->_n_out_36833;auto _n_index_36892=((_n_r_36856*this->_n_cols_36825)+_n_c_36855);auto _n_value_36893=d::String(u"O");d::put(_n_array_36891,_n_index_36892,_n_value_36893);return _n_value_36893;})());
}}
d::Array<d::String,false> _n_lines_36857=d::Array<d::String,false>{};
{double _n_r_36858=0.0;
for(;d::truth((_n_r_36858<this->_n_rows_36826));(void)((_n_r_36858++))){d::check_cancel();(void)(_n_lines_36857.push(d::join(this->_n_out_36833.slice((_n_r_36858*this->_n_cols_36825),((_n_r_36858+1.0)*this->_n_cols_36825)),d::String(u""))));
}}
return d::join(_n_lines_36857,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("wave-interference").cols)*ascii::catalog_meta("wave-interference").rows);auto _env=std::make_shared<_n_Record_36860>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &wave_interference_meta(){return catalog_meta("wave-interference");}
std::unique_ptr<Piece> make_wave_interference(const AsciiPieceOptions &o){return std::make_unique<Native_wave_interference>(o);}
}
