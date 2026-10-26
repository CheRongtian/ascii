// Direct, statically typed C++ from src/pieces/wave-text.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36895;
struct _n_Record_36896;
struct _n_Record_36933;
struct _n_Record_36934;
struct _n_Record_36895{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_36896> _p_options{};
static std::shared_ptr<_n_Record_36895> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36895>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_36896>>(j["options"]);return out;}
};
struct _n_Record_36896{
d::String _p_text{};
double _p_amp{};
double _p_wavelength{};
double _p_speed{};
double _p_spacing{};
bool _p_settle{};
static std::shared_ptr<_n_Record_36896> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36896>();out->_p_text=d::decode<d::String>(j["text"]);out->_p_amp=d::decode<double>(j["amp"]);out->_p_wavelength=d::decode<double>(j["wavelength"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_spacing=d::decode<double>(j["spacing"]);out->_p_settle=d::decode<bool>(j["settle"]);return out;}
};
struct _n_Record_36933{
std::optional<d::String> _p_text{};
std::optional<double> _p_amp{};
std::optional<double> _p_wavelength{};
std::optional<double> _p_speed{};
std::optional<double> _p_spacing{};
std::optional<bool> _p_settle{};
static std::shared_ptr<_n_Record_36933> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36933>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_amp=d::decode<std::optional<double>>(j["amp"]);out->_p_wavelength=d::decode<std::optional<double>>(j["wavelength"]);out->_p_speed=d::decode<std::optional<double>>(j["speed"]);out->_p_spacing=d::decode<std::optional<double>>(j["spacing"]);out->_p_settle=d::decode<std::optional<bool>>(j["settle"]);return out;}
};
struct _n_Record_36934{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_36934> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36934>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_36895> _n_meta_36894=[](){return ([&](){auto _n_object_36939=std::make_shared<_n_Record_36895>();_n_object_36939->_p_name=d::String(u"wave text");_n_object_36939->_p_category=d::String(u"type");_n_object_36939->_p_note=d::String(u"a swell running through a line of text, left to right");_n_object_36939->_p_cols=36.0;_n_object_36939->_p_rows=5.0;_n_object_36939->_p_fps=15.0;_n_object_36939->_p_options=([&](){auto _n_object_36941=std::make_shared<_n_Record_36896>();_n_object_36941->_p_text=d::String(u"making waves");_n_object_36941->_p_amp=1.25;_n_object_36941->_p_wavelength=18.0;_n_object_36941->_p_speed=8.0;_n_object_36941->_p_spacing=0.0;_n_object_36941->_p_settle=true;return _n_object_36941;})();return _n_object_36939;})();}();

struct Native_wave_text final:ascii::Piece{
d::String _n_text_36897{};
double _n_amp_36898{};
double _n_wavelength_36899{};
double _n_speed_36900{};
double _n_spacing_36901{};
bool _n_settle_36902{};
double _n_cols_36903{};
double _n_rows_36904{};
double _n_base_36905{};
double _n_A_36906{};
double _n_W_36907{};
double _n_v_36908{};
double _n_step_36909{};
d::Array<d::String,false> _n_chars_36910{};
double _n_n_36911{};
double _n_x0_36912{};
double _n_rise_36913{};
double _n_top_36914{};
double _n_pass_36915{};
double _n_L_36916{};
double _n_start_36917{};
std::function<d::String(double,std::shared_ptr<_n_Record_36934>)> _render;
double _n_envelope_36918(double _a0){double _n_u_36921=_a0;
{
if(d::truth((!d::truth(this->_n_settle_36902)))){d::check_cancel();return 1.0;
}
if(d::truth((_n_u_36921<this->_n_rise_36913))){d::check_cancel();return std::pow(std::sin(((ascii::PI/2.0)*(_n_u_36921/this->_n_rise_36913))),2.0);
}
if(d::truth((_n_u_36921<(this->_n_rise_36913+this->_n_top_36914)))){d::check_cancel();return 1.0;
}
if(d::truth((_n_u_36921<this->_n_pass_36915))){d::check_cancel();return std::pow(std::cos(((ascii::PI/2.0)*(((_n_u_36921-this->_n_rise_36913)-this->_n_top_36914)/this->_n_rise_36913))),2.0);
}
return 0.0;

}
}

double _n_height_36919(double _a0){double _n_u_36922=_a0;
{
double _n_w_36923=(d::truth(this->_n_settle_36902)?d::mod((d::mod(_n_u_36922,this->_n_L_36916)+this->_n_L_36916),this->_n_L_36916):_n_u_36922);
return ([&](){auto _n_left_36967=(this->_n_A_36906*this->_n_envelope_36918(_n_w_36923));auto _n_right_36968=std::sin((((2.0*ascii::PI)*_n_w_36923)/this->_n_W_36907));return (_n_left_36967*_n_right_36968);})();

}
}

explicit Native_wave_text(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_36942=d::decode<std::shared_ptr<_n_Record_36933>>(_options.data);
this->_n_text_36897=(d::present(_n_binding_36942->_p_text)?d::read(_n_binding_36942->_p_text):_n_meta_36894->_p_options->_p_text);
this->_n_amp_36898=(d::present(_n_binding_36942->_p_amp)?d::read(_n_binding_36942->_p_amp):_n_meta_36894->_p_options->_p_amp);
this->_n_wavelength_36899=(d::present(_n_binding_36942->_p_wavelength)?d::read(_n_binding_36942->_p_wavelength):_n_meta_36894->_p_options->_p_wavelength);
this->_n_speed_36900=(d::present(_n_binding_36942->_p_speed)?d::read(_n_binding_36942->_p_speed):_n_meta_36894->_p_options->_p_speed);
this->_n_spacing_36901=(d::present(_n_binding_36942->_p_spacing)?d::read(_n_binding_36942->_p_spacing):_n_meta_36894->_p_options->_p_spacing);
this->_n_settle_36902=(d::present(_n_binding_36942->_p_settle)?d::read(_n_binding_36942->_p_settle):_n_meta_36894->_p_options->_p_settle);
auto _n_binding_36943=_n_meta_36894;
this->_n_cols_36903=_n_binding_36943->_p_cols;
this->_n_rows_36904=_n_binding_36943->_p_rows;
this->_n_base_36905=((this->_n_rows_36904-1.0)/2.0);
this->_n_A_36906=([&](){auto _n_argument_36944=([&](){auto _n_argument_36945=([&]()->double{auto _n_logical_36946=d::number(this->_n_amp_36898);return d::truth(_n_logical_36946)?_n_logical_36946:0.0;})();auto _n_argument_36947=0.0;return d::maximum({_n_argument_36945,_n_argument_36947});})();auto _n_argument_36948=(this->_n_base_36905+0.45);return d::minimum({_n_argument_36944,_n_argument_36948});})();
this->_n_W_36907=([&](){auto _n_argument_36949=([&]()->double{auto _n_logical_36950=d::number(this->_n_wavelength_36899);return d::truth(_n_logical_36950)?_n_logical_36950:18.0;})();auto _n_argument_36951=4.0;return d::maximum({_n_argument_36949,_n_argument_36951});})();
this->_n_v_36908=([&](){auto _n_argument_36952=([&]()->double{auto _n_logical_36953=d::number(this->_n_speed_36900);return d::truth(_n_logical_36953)?_n_logical_36953:8.0;})();auto _n_argument_36954=0.5;return d::maximum({_n_argument_36952,_n_argument_36954});})();
this->_n_step_36909=(1.0+([&](){auto _n_argument_36955=0.0;auto _n_argument_36956=std::floor(([&]()->double{auto _n_logical_36957=d::number(this->_n_spacing_36901);return d::truth(_n_logical_36957)?_n_logical_36957:0.0;})());return d::maximum({_n_argument_36955,_n_argument_36956});})());
this->_n_chars_36910=([&](){auto _n_argument_36958=0.0;auto _n_argument_36959=(std::floor(((this->_n_cols_36903-1.0)/this->_n_step_36909))+1.0);return ([&](){d::Array<d::String,false> _n_array_36960;for(const auto &_v:d::string(this->_n_text_36897))_n_array_36960.push(_v);return _n_array_36960;})().slice(_n_argument_36958,_n_argument_36959);})();
this->_n_n_36911=double(this->_n_chars_36910.size());
this->_n_x0_36912=std::floor((((this->_n_cols_36903-((this->_n_n_36911-1.0)*this->_n_step_36909))-1.0)/2.0));
this->_n_rise_36913=(this->_n_W_36907/2.0);
this->_n_top_36914=(1.5*this->_n_W_36907);
this->_n_pass_36915=((2.0*this->_n_rise_36913)+this->_n_top_36914);
this->_n_L_36916=(this->_n_pass_36915+this->_n_n_36911);
this->_n_start_36917=(d::truth(this->_n_settle_36902)?0.0:((this->_n_W_36907/4.0)+((this->_n_n_36911-1.0)/2.0)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_36934> _a1) mutable ->d::String{double _n_t_36924=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_grid_36925=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_36904,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_36903)).fill(d::String(u" "));}));
double _n_s_36926=(this->_n_start_36917+(_n_t_36924*this->_n_v_36908));
{double _n_i_36927=0.0;
for(;d::truth((_n_i_36927<this->_n_n_36911));(void)((_n_i_36927++))){d::check_cancel();if(d::truth((d::at(this->_n_chars_36910,_n_i_36927)==d::String(u" ")))){d::check_cancel();continue;
}
double _n_u_36928=(_n_s_36926-_n_i_36927);
double _n_h_36929=this->_n_height_36919(_n_u_36928);
double _n_lift_36930=d::round(_n_h_36929);
double _n_x_36931=(this->_n_x0_36912+(_n_i_36927*this->_n_step_36909));
(void)(([&](){auto&& _n_array_36961=d::at(_n_grid_36925,(this->_n_base_36905-_n_lift_36930));auto _n_index_36962=_n_x_36931;auto _n_value_36963=d::at(this->_n_chars_36910,_n_i_36927);d::put(_n_array_36961,_n_index_36962,_n_value_36963);return _n_value_36963;})());
if(((d::truth((_n_lift_36930>0.0))&&d::truth((_n_h_36929<0.7)))&&d::truth((this->_n_height_36919((_n_u_36928+0.5))>_n_h_36929)))){d::check_cancel();(void)(([&](){auto&& _n_array_36964=d::at(_n_grid_36925,this->_n_base_36905);auto _n_index_36965=_n_x_36931;auto _n_value_36966=d::String(u"·");d::put(_n_array_36964,_n_index_36965,_n_value_36966);return _n_value_36966;})());
}
}}
return d::join(d::map(_n_grid_36925,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_r_36932=_a0;
return d::join(_n_r_36932,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("wave-text").cols)*ascii::catalog_meta("wave-text").rows);auto _env=std::make_shared<_n_Record_36934>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &wave_text_meta(){return catalog_meta("wave-text");}
std::unique_ptr<Piece> make_wave_text(const AsciiPieceOptions &o){return std::make_unique<Native_wave_text>(o);}
}
