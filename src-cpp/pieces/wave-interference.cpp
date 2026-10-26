// Direct, statically typed C++ from src/pieces/wave-interference.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36817;
struct _n_Record_36818;
struct _n_Record_36858;
struct _n_Record_36859;
struct _n_Record_36817{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_36818> _p_options{};
static std::shared_ptr<_n_Record_36817> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36817>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_36818>>(j["options"]);return out;}
};
struct _n_Record_36818{
double _p_wavelength{};
double _p_separation{};
static std::shared_ptr<_n_Record_36818> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36818>();out->_p_wavelength=d::decode<double>(j["wavelength"]);out->_p_separation=d::decode<double>(j["separation"]);return out;}
};
struct _n_Record_36858{
std::optional<double> _p_wavelength{};
std::optional<double> _p_separation{};
static std::shared_ptr<_n_Record_36858> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36858>();out->_p_wavelength=d::decode<std::optional<double>>(j["wavelength"]);out->_p_separation=d::decode<std::optional<double>>(j["separation"]);return out;}
};
struct _n_Record_36859{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36859> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36859>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_36817> _n_meta_36816=[](){return ([&](){auto _n_object_36864=std::make_shared<_n_Record_36817>();_n_object_36864->_p_name=d::String(u"wave interference");_n_object_36864->_p_category=d::String(u"physics");_n_object_36864->_p_note=d::String(u"two sources in a ripple tank, still lines fanning out");_n_object_36864->_p_cols=72.0;_n_object_36864->_p_rows=26.0;_n_object_36864->_p_fps=24.0;_n_object_36864->_p_options=([&](){auto _n_object_36866=std::make_shared<_n_Record_36818>();_n_object_36866->_p_wavelength=5.0;_n_object_36866->_p_separation=2.2;return _n_object_36866;})();return _n_object_36864;})();}();
const d::String _n_RAMP_36819=[](){return d::String(u" .:=*#");}();
const double _n_CALM_36820=[](){return 2.0;}();
const double _n_PERIOD_36821=[](){return 1.0;}();

struct Native_wave_interference final:ascii::Piece{
double _n_wavelength_36822{};
double _n_separation_36823{};
double _n_cols_36824{};
double _n_rows_36825{};
double _n_lam_36826{};
double _n_k_36827{};
double _n_cx_36828{};
double _n_cy_36829{};
double _n_A_36830{};
double _n_B_36831{};
d::Array<d::String,false> _n_out_36832{};
std::function<d::String(double,std::shared_ptr<_n_Record_36859>)> _render;

explicit Native_wave_interference(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36867=d::decode<std::shared_ptr<_n_Record_36858>>(_options.data);
this->_n_wavelength_36822=(d::present(_n_binding_36867->_p_wavelength)?d::read(_n_binding_36867->_p_wavelength):5.0);
this->_n_separation_36823=(d::present(_n_binding_36867->_p_separation)?d::read(_n_binding_36867->_p_separation):2.2);
auto _n_binding_36868=_n_meta_36816;
this->_n_cols_36824=_n_binding_36868->_p_cols;
this->_n_rows_36825=_n_binding_36868->_p_rows;
this->_n_lam_36826=d::maximum({3.0,this->_n_wavelength_36822});
this->_n_k_36827=((2.0*ascii::PI)/this->_n_lam_36826);
this->_n_cx_36828=(this->_n_cols_36824/4.0);
this->_n_cy_36829=(this->_n_rows_36825/2.0);
this->_n_A_36830=(this->_n_cx_36828-0.6);
this->_n_B_36831=(this->_n_cy_36829-0.4);
this->_n_out_36832=d::Array<d::String,false>(size_t((this->_n_cols_36824*this->_n_rows_36825)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36859> _a1) mutable ->d::String{double _n_t_36834=_a0;
auto _n_binding_36871=(d::present(_a1)?_a1:([&](){auto _n_object_36870=std::make_shared<_n_Record_36859>();return _n_object_36870;})());
bool _n_paper_36835=(d::present(_n_binding_36871->_p_paper)?d::read(_n_binding_36871->_p_paper):false);
{
double _n_w_36836=(((2.0*ascii::PI)*_n_t_36834)/_n_PERIOD_36821);
double _n_half_36837=([&](){auto _n_argument_36872=(this->_n_B_36831-1.5);auto _n_argument_36873=(([&](){auto _n_left_36874=(this->_n_lam_36826*std::fabs(this->_n_separation_36823));auto _n_right_36875=(1.0+(0.2*std::sin((((2.0*ascii::PI)*_n_t_36834)/30.0))));return (_n_left_36874*_n_right_36875);})()/2.0);return d::minimum({_n_argument_36872,_n_argument_36873});})();
double _n_tilt_36838=(0.25*std::sin((((2.0*ascii::PI)*_n_t_36834)/45.0)));
d::Array<double,false> _n_sx_36839=d::Array<double,false>{(this->_n_cx_36828-(_n_half_36837*std::sin(_n_tilt_36838))),(this->_n_cx_36828+(_n_half_36837*std::sin(_n_tilt_36838)))};
d::Array<double,false> _n_sy_36840=d::Array<double,false>{(this->_n_cy_36829-(_n_half_36837*std::cos(_n_tilt_36838))),(this->_n_cy_36829+(_n_half_36837*std::cos(_n_tilt_36838)))};
{double _n_r_36841=0.0;
for(;d::truth((_n_r_36841<this->_n_rows_36825));(void)((_n_r_36841++))){d::check_cancel();{double _n_c_36842=0.0;
for(;d::truth((_n_c_36842<this->_n_cols_36824));(void)((_n_c_36842++))){d::check_cancel();double _n_x_36843=((_n_c_36842+0.5)/2.0);
double _n_y_36844=(_n_r_36841+0.5);
double _n_q_36845=d::hypot(std::initializer_list<double>{((_n_x_36843-this->_n_cx_36828)/this->_n_A_36830),((_n_y_36844-this->_n_cy_36829)/this->_n_B_36831)});
if(d::truth((_n_q_36845>=1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_36876=this->_n_out_36832;auto _n_index_36877=((_n_r_36841*this->_n_cols_36824)+_n_c_36842);auto _n_value_36878=d::String(u" ");d::put(_n_array_36876,_n_index_36877,_n_value_36878);return _n_value_36878;})());
continue;
}
double _n_d1_36846=d::hypot(std::initializer_list<double>{(_n_x_36843-d::at(_n_sx_36839,0.0)),(_n_y_36844-d::at(_n_sy_36840,0.0))});
double _n_d2_36847=d::hypot(std::initializer_list<double>{(_n_x_36843-d::at(_n_sx_36839,1.0)),(_n_y_36844-d::at(_n_sy_36840,1.0))});
double _n_a1_36848=(1.0/std::sqrt((1.0+(_n_d1_36846*0.1))));
double _n_a2_36849=(1.0/std::sqrt((1.0+(_n_d2_36847*0.1))));
double _n_calm_36850=d::minimum({1.0,((1.0-_n_q_36845)/0.2)});
double _n_h_36851=((((([&](){auto _n_left_36879=(_n_a1_36848*std::cos(((this->_n_k_36827*_n_d1_36846)-_n_w_36836)));auto _n_right_36880=(_n_a2_36849*std::cos(((this->_n_k_36827*_n_d2_36847)-_n_w_36836)));return (_n_left_36879+_n_right_36880);})()/(_n_a1_36848+_n_a2_36849))*_n_calm_36850)*_n_calm_36850)*(3.0-(2.0*_n_calm_36850)));
if(d::truth(_n_paper_36835)){d::check_cancel();(void)((_n_h_36851=(-d::number(_n_h_36851))));
}
double _n_i_36852=(d::truth((_n_h_36851<0.0))?d::round((_n_CALM_36820*(1.0+_n_h_36851))):d::round((_n_CALM_36820+(((double(_n_RAMP_36819.size())-1.0)-_n_CALM_36820)*_n_h_36851))));
(void)(([&](){auto&& _n_array_36881=this->_n_out_36832;auto _n_index_36882=((_n_r_36841*this->_n_cols_36824)+_n_c_36842);auto _n_value_36883=d::at(_n_RAMP_36819,_n_i_36852);d::put(_n_array_36881,_n_index_36882,_n_value_36883);return _n_value_36883;})());
}}
}}
{double _n_i_36853=0.0;
for(;d::truth((_n_i_36853<2.0));(void)((_n_i_36853++))){d::check_cancel();double _n_c_36854=std::floor((d::at(_n_sx_36839,_n_i_36853)*2.0));
double _n_r_36855=std::floor(d::at(_n_sy_36840,_n_i_36853));
(void)(([&](){auto&& _n_array_36884=this->_n_out_36832;auto _n_index_36885=(((_n_r_36855*this->_n_cols_36824)+_n_c_36854)-1.0);auto _n_value_36886=([&](){auto&& _n_array_36887=this->_n_out_36832;auto _n_index_36888=(((_n_r_36855*this->_n_cols_36824)+_n_c_36854)+1.0);auto _n_value_36889=d::String(u" ");d::put(_n_array_36887,_n_index_36888,_n_value_36889);return _n_value_36889;})();d::put(_n_array_36884,_n_index_36885,_n_value_36886);return _n_value_36886;})());
(void)(([&](){auto&& _n_array_36890=this->_n_out_36832;auto _n_index_36891=((_n_r_36855*this->_n_cols_36824)+_n_c_36854);auto _n_value_36892=d::String(u"O");d::put(_n_array_36890,_n_index_36891,_n_value_36892);return _n_value_36892;})());
}}
d::Array<d::String,false> _n_lines_36856=d::Array<d::String,false>{};
{double _n_r_36857=0.0;
for(;d::truth((_n_r_36857<this->_n_rows_36825));(void)((_n_r_36857++))){d::check_cancel();(void)(_n_lines_36856.push(d::join(this->_n_out_36832.slice((_n_r_36857*this->_n_cols_36824),((_n_r_36857+1.0)*this->_n_cols_36824)),d::String(u""))));
}}
return d::join(_n_lines_36856,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("wave-interference").cols)*ascii::catalog_meta("wave-interference").rows);auto _env=std::make_shared<_n_Record_36859>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &wave_interference_meta(){return catalog_meta("wave-interference");}
std::unique_ptr<Piece> make_wave_interference(const AsciiPieceOptions &o){return std::make_unique<Native_wave_interference>(o);}
}
