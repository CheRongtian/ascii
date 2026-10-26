// Direct, statically typed C++ from src/pieces/wave-text.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36894;
struct _n_Record_36895;
struct _n_Record_36932;
struct _n_Record_36933;
struct _n_Record_36894{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_36895> _p_options{};
static std::shared_ptr<_n_Record_36894> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36894>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_36895>>(j["options"]);return out;}
};
struct _n_Record_36895{
d::String _p_text{};
double _p_amp{};
double _p_wavelength{};
double _p_speed{};
double _p_spacing{};
bool _p_settle{};
static std::shared_ptr<_n_Record_36895> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36895>();out->_p_text=d::decode<d::String>(j["text"]);out->_p_amp=d::decode<double>(j["amp"]);out->_p_wavelength=d::decode<double>(j["wavelength"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_spacing=d::decode<double>(j["spacing"]);out->_p_settle=d::decode<bool>(j["settle"]);return out;}
};
struct _n_Record_36932{
std::optional<d::String> _p_text{};
std::optional<double> _p_amp{};
std::optional<double> _p_wavelength{};
std::optional<double> _p_speed{};
std::optional<double> _p_spacing{};
std::optional<bool> _p_settle{};
static std::shared_ptr<_n_Record_36932> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36932>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_amp=d::decode<std::optional<double>>(j["amp"]);out->_p_wavelength=d::decode<std::optional<double>>(j["wavelength"]);out->_p_speed=d::decode<std::optional<double>>(j["speed"]);out->_p_spacing=d::decode<std::optional<double>>(j["spacing"]);out->_p_settle=d::decode<std::optional<bool>>(j["settle"]);return out;}
};
struct _n_Record_36933{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36933> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36933>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_36894> _n_meta_36893=[](){return ([&](){auto _n_object_36938=std::make_shared<_n_Record_36894>();_n_object_36938->_p_name=d::String(u"wave text");_n_object_36938->_p_category=d::String(u"type");_n_object_36938->_p_note=d::String(u"a swell running through a line of text, left to right");_n_object_36938->_p_cols=36.0;_n_object_36938->_p_rows=5.0;_n_object_36938->_p_fps=15.0;_n_object_36938->_p_options=([&](){auto _n_object_36940=std::make_shared<_n_Record_36895>();_n_object_36940->_p_text=d::String(u"making waves");_n_object_36940->_p_amp=1.25;_n_object_36940->_p_wavelength=18.0;_n_object_36940->_p_speed=8.0;_n_object_36940->_p_spacing=0.0;_n_object_36940->_p_settle=true;return _n_object_36940;})();return _n_object_36938;})();}();

struct Native_wave_text final:ascii::Piece{
d::String _n_text_36896{};
double _n_amp_36897{};
double _n_wavelength_36898{};
double _n_speed_36899{};
double _n_spacing_36900{};
bool _n_settle_36901{};
double _n_cols_36902{};
double _n_rows_36903{};
double _n_base_36904{};
double _n_A_36905{};
double _n_W_36906{};
double _n_v_36907{};
double _n_step_36908{};
d::Array<d::String,false> _n_chars_36909{};
double _n_n_36910{};
double _n_x0_36911{};
double _n_rise_36912{};
double _n_top_36913{};
double _n_pass_36914{};
double _n_L_36915{};
double _n_start_36916{};
std::function<d::String(double,std::shared_ptr<_n_Record_36933>)> _render;
double _n_envelope_36917(double _a0){double _n_u_36920=_a0;
{
if(d::truth((!d::truth(this->_n_settle_36901)))){d::check_cancel();return 1.0;
}
if(d::truth((_n_u_36920<this->_n_rise_36912))){d::check_cancel();return std::pow(std::sin(((ascii::PI/2.0)*(_n_u_36920/this->_n_rise_36912))),2.0);
}
if(d::truth((_n_u_36920<(this->_n_rise_36912+this->_n_top_36913)))){d::check_cancel();return 1.0;
}
if(d::truth((_n_u_36920<this->_n_pass_36914))){d::check_cancel();return std::pow(std::cos(((ascii::PI/2.0)*(((_n_u_36920-this->_n_rise_36912)-this->_n_top_36913)/this->_n_rise_36912))),2.0);
}
return 0.0;

}
}

double _n_height_36918(double _a0){double _n_u_36921=_a0;
{
double _n_w_36922=(d::truth(this->_n_settle_36901)?d::mod((d::mod(_n_u_36921,this->_n_L_36915)+this->_n_L_36915),this->_n_L_36915):_n_u_36921);
return ([&](){auto _n_left_36966=(this->_n_A_36905*this->_n_envelope_36917(_n_w_36922));auto _n_right_36967=std::sin((((2.0*ascii::PI)*_n_w_36922)/this->_n_W_36906));return (_n_left_36966*_n_right_36967);})();

}
}

explicit Native_wave_text(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36941=d::decode<std::shared_ptr<_n_Record_36932>>(_options.data);
this->_n_text_36896=(d::present(_n_binding_36941->_p_text)?d::read(_n_binding_36941->_p_text):_n_meta_36893->_p_options->_p_text);
this->_n_amp_36897=(d::present(_n_binding_36941->_p_amp)?d::read(_n_binding_36941->_p_amp):_n_meta_36893->_p_options->_p_amp);
this->_n_wavelength_36898=(d::present(_n_binding_36941->_p_wavelength)?d::read(_n_binding_36941->_p_wavelength):_n_meta_36893->_p_options->_p_wavelength);
this->_n_speed_36899=(d::present(_n_binding_36941->_p_speed)?d::read(_n_binding_36941->_p_speed):_n_meta_36893->_p_options->_p_speed);
this->_n_spacing_36900=(d::present(_n_binding_36941->_p_spacing)?d::read(_n_binding_36941->_p_spacing):_n_meta_36893->_p_options->_p_spacing);
this->_n_settle_36901=(d::present(_n_binding_36941->_p_settle)?d::read(_n_binding_36941->_p_settle):_n_meta_36893->_p_options->_p_settle);
auto _n_binding_36942=_n_meta_36893;
this->_n_cols_36902=_n_binding_36942->_p_cols;
this->_n_rows_36903=_n_binding_36942->_p_rows;
this->_n_base_36904=((this->_n_rows_36903-1.0)/2.0);
this->_n_A_36905=([&](){auto _n_argument_36943=([&](){auto _n_argument_36944=([&]()->double{auto _n_logical_36945=d::number(this->_n_amp_36897);return d::truth(_n_logical_36945)?_n_logical_36945:0.0;})();auto _n_argument_36946=0.0;return d::maximum({_n_argument_36944,_n_argument_36946});})();auto _n_argument_36947=(this->_n_base_36904+0.45);return d::minimum({_n_argument_36943,_n_argument_36947});})();
this->_n_W_36906=([&](){auto _n_argument_36948=([&]()->double{auto _n_logical_36949=d::number(this->_n_wavelength_36898);return d::truth(_n_logical_36949)?_n_logical_36949:18.0;})();auto _n_argument_36950=4.0;return d::maximum({_n_argument_36948,_n_argument_36950});})();
this->_n_v_36907=([&](){auto _n_argument_36951=([&]()->double{auto _n_logical_36952=d::number(this->_n_speed_36899);return d::truth(_n_logical_36952)?_n_logical_36952:8.0;})();auto _n_argument_36953=0.5;return d::maximum({_n_argument_36951,_n_argument_36953});})();
this->_n_step_36908=(1.0+([&](){auto _n_argument_36954=0.0;auto _n_argument_36955=std::floor(([&]()->double{auto _n_logical_36956=d::number(this->_n_spacing_36900);return d::truth(_n_logical_36956)?_n_logical_36956:0.0;})());return d::maximum({_n_argument_36954,_n_argument_36955});})());
this->_n_chars_36909=([&](){auto _n_argument_36957=0.0;auto _n_argument_36958=(std::floor(((this->_n_cols_36902-1.0)/this->_n_step_36908))+1.0);return ([&](){d::Array<d::String,false> _n_array_36959;for(const auto &_v:d::string(this->_n_text_36896))_n_array_36959.push(_v);return _n_array_36959;})().slice(_n_argument_36957,_n_argument_36958);})();
this->_n_n_36910=double(this->_n_chars_36909.size());
this->_n_x0_36911=std::floor((((this->_n_cols_36902-((this->_n_n_36910-1.0)*this->_n_step_36908))-1.0)/2.0));
this->_n_rise_36912=(this->_n_W_36906/2.0);
this->_n_top_36913=(1.5*this->_n_W_36906);
this->_n_pass_36914=((2.0*this->_n_rise_36912)+this->_n_top_36913);
this->_n_L_36915=(this->_n_pass_36914+this->_n_n_36910);
this->_n_start_36916=(d::truth(this->_n_settle_36901)?0.0:((this->_n_W_36906/4.0)+((this->_n_n_36910-1.0)/2.0)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36933> _a1) mutable ->d::String{double _n_t_36923=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_grid_36924=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_36903,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_36902)).fill(d::String(u" "));}));
double _n_s_36925=(this->_n_start_36916+(_n_t_36923*this->_n_v_36907));
{double _n_i_36926=0.0;
for(;d::truth((_n_i_36926<this->_n_n_36910));(void)((_n_i_36926++))){d::check_cancel();if(d::truth((d::at(this->_n_chars_36909,_n_i_36926)==d::String(u" ")))){d::check_cancel();continue;
}
double _n_u_36927=(_n_s_36925-_n_i_36926);
double _n_h_36928=this->_n_height_36918(_n_u_36927);
double _n_lift_36929=d::round(_n_h_36928);
double _n_x_36930=(this->_n_x0_36911+(_n_i_36926*this->_n_step_36908));
(void)(([&](){auto&& _n_array_36960=d::at(_n_grid_36924,(this->_n_base_36904-_n_lift_36929));auto _n_index_36961=_n_x_36930;auto _n_value_36962=d::at(this->_n_chars_36909,_n_i_36926);d::put(_n_array_36960,_n_index_36961,_n_value_36962);return _n_value_36962;})());
if(((d::truth((_n_lift_36929>0.0))&&d::truth((_n_h_36928<0.7)))&&d::truth((this->_n_height_36918((_n_u_36927+0.5))>_n_h_36928)))){d::check_cancel();(void)(([&](){auto&& _n_array_36963=d::at(_n_grid_36924,this->_n_base_36904);auto _n_index_36964=_n_x_36930;auto _n_value_36965=d::String(u"·");d::put(_n_array_36963,_n_index_36964,_n_value_36965);return _n_value_36965;})());
}
}}
return d::join(d::map(_n_grid_36924,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_r_36931=_a0;
return d::join(_n_r_36931,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("wave-text").cols)*ascii::catalog_meta("wave-text").rows);auto _env=std::make_shared<_n_Record_36933>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &wave_text_meta(){return catalog_meta("wave-text");}
std::unique_ptr<Piece> make_wave_text(const AsciiPieceOptions &o){return std::make_unique<Native_wave_text>(o);}
}
