// Direct, statically typed C++ from src/pieces/sparkline.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29416;
struct _n_Record_29417;
struct _n_Record_29418;
struct _n_Record_29419;
struct _n_Record_29420;
struct _n_Record_29428;
struct _n_Record_29430;
struct _n_Record_29496;
struct _n_Record_29497;
struct _n_Record_29498;
struct _n_Record_29499;
struct _n_Record_29500;
struct _n_Record_29502;
struct _n_Record_29503;
struct _n_Record_29504;
struct _n_Record_29507;
struct _n_Record_29509;
struct _n_Record_29512;
struct _n_Record_29516;
struct _n_Record_29416{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29417> _p_options{};
static std::shared_ptr<_n_Record_29416> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29416>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29417>>(j["options"]);return out;}
};
struct _n_Record_29417{
d::Array<std::shared_ptr<_n_Record_29420>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29417> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29417>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29420>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29418{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
d::Nil _p_digits{};
static std::shared_ptr<_n_Record_29418> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29418>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<d::Nil>(j["digits"]);return out;}
};
struct _n_Record_29419{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
double _p_digits{};
static std::shared_ptr<_n_Record_29419> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29419>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<double>(j["digits"]);return out;}
};
struct _n_Record_29420{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29420> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29420>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29428{
double _p_v{};
double _p_busy{};
double _p_cap{};
double _p_n{};
static std::shared_ptr<_n_Record_29428> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29428>();out->_p_v=d::decode<double>(j["v"]);out->_p_busy=d::decode<double>(j["busy"]);out->_p_cap=d::decode<double>(j["cap"]);out->_p_n=d::decode<double>(j["n"]);return out;}
};
struct _n_Record_29430{
std::optional<d::String> _p_label{};
std::optional<d::String> _p_unit{};
std::optional<double> _p_lo{};
std::optional<double> _p_hi{};
std::optional<double> _p_digits{};
std::function<d::Unknown(double)> _p_format{};
std::optional<d::Array<double,false>> _p_values{};
static std::shared_ptr<_n_Record_29430> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29430>();out->_p_label=d::decode<std::optional<d::String>>(j["label"]);out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);out->_p_lo=d::decode<std::optional<double>>(j["lo"]);out->_p_hi=d::decode<std::optional<double>>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);out->_p_format=d::decode<std::function<d::Unknown(double)>>(j["format"]);out->_p_values=d::decode<std::optional<d::Array<double,false>>>(j["values"]);return out;}
};
struct _n_Record_29496{
std::optional<d::Array<std::shared_ptr<_n_Record_29430>,false>> _p_series{};
std::optional<bool> _p_range{};
std::optional<double> _p_rate{};
static std::shared_ptr<_n_Record_29496> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29496>();out->_p_series=d::decode<std::optional<d::Array<std::shared_ptr<_n_Record_29430>,false>>>(j["series"]);out->_p_range=d::decode<std::optional<bool>>(j["range"]);out->_p_rate=d::decode<std::optional<double>>(j["rate"]);return out;}
};
struct _n_Record_29497{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29497> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29497>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29498{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29499> _p_options{};
static std::shared_ptr<_n_Record_29498> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29498>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29499>>(j["options"]);return out;}
};
struct _n_Record_29499{
d::Array<std::shared_ptr<_n_Record_29502>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29499> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29499>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29502>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29500{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
static std::shared_ptr<_n_Record_29500> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29500>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);return out;}
};
struct _n_Record_29502{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29502> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29502>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29503{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29504> _p_options{};
static std::shared_ptr<_n_Record_29503> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29503>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29504>>(j["options"]);return out;}
};
struct _n_Record_29504{
d::Array<std::shared_ptr<_n_Record_29507>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29504> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29504>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29507>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29507{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29507> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29507>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29509{
d::Array<std::shared_ptr<_n_Record_29512>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29509> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29509>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29512>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29512{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29512> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29512>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29516{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29516> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29516>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
std::function<double()> _n_mulberry32_29426(double _a0);
std::shared_ptr<_n_Record_29416> _n_meta_29415=[](){return ([&](){auto _n_object_29508=std::make_shared<_n_Record_29416>();_n_object_29508->_p_name=d::String(u"sparkline");_n_object_29508->_p_category=d::String(u"data");_n_object_29508->_p_note=d::String(u"three live block sparklines scrolling left, values at right");_n_object_29508->_p_cols=72.0;_n_object_29508->_p_rows=9.0;_n_object_29508->_p_fps=12.0;_n_object_29508->_p_options=([&](){auto _n_object_29513=std::make_shared<_n_Record_29417>();_n_object_29513->_p_series=d::Array<std::shared_ptr<_n_Record_29420>,false>{([&](){auto _n_object_29518=std::make_shared<_n_Record_29420>();_n_object_29518->_p_label=d::String(u"cpu");_n_object_29518->_p_unit=d::String(u"%");_n_object_29518->_p_lo=0.0;_n_object_29518->_p_hi=100.0;return _n_object_29518;})(),([&](){auto _n_object_29520=std::make_shared<_n_Record_29420>();_n_object_29520->_p_label=d::String(u"memory");_n_object_29520->_p_unit=d::String(u" gb");_n_object_29520->_p_lo=1.2;_n_object_29520->_p_hi=3.4;_n_object_29520->_p_digits=std::optional<double>(1.0);return _n_object_29520;})(),([&](){auto _n_object_29522=std::make_shared<_n_Record_29420>();_n_object_29522->_p_label=d::String(u"requests");_n_object_29522->_p_unit=d::String(u"/s");_n_object_29522->_p_lo=0.0;_n_object_29522->_p_hi=260.0;return _n_object_29522;})()};_n_object_29513->_p_range=true;_n_object_29513->_p_rate=4.0;return _n_object_29513;})();return _n_object_29508;})();}();
const d::String _n_BARS_29421=[](){return d::String(u"▁▂▃▄▅▆▇█");}();
const double _n_LW_29422=[](){return 10.0;}();
const double _n_VW_29423=[](){return 7.0;}();
const double _n_RW_29424=[](){return 5.0;}();
const double _n_SLOTS_29425=[](){return 5.0;}();
d::Array<std::function<double(std::shared_ptr<_n_Record_29428>,std::function<double()>)>,false> _n_SIGNALS_29427=[](){return d::Array<std::function<double(std::shared_ptr<_n_Record_29428>,std::function<double()>)>,false>{[=]( std::shared_ptr<_n_Record_29428> _a0,std::function<double()> _a1) mutable ->double{std::shared_ptr<_n_Record_29428> _n_s_29458=_a0;
std::function<double()> _n_rand_29459=_a1;
{
if(d::truth((_n_s_29458->_p_busy>0.0))){d::check_cancel();(void)((_n_s_29458->_p_busy--));
}else {d::check_cancel();if(d::truth((_n_rand_29459()<0.06))){d::check_cancel();(void)((_n_s_29458->_p_busy=(4.0+std::floor((_n_rand_29459()*9.0)))));
}
}
(void)((_n_s_29458->_p_v=(_n_s_29458->_p_v+((((d::truth(_n_s_29458->_p_busy)?0.78:0.22)-_n_s_29458->_p_v)*0.55)+((_n_rand_29459()-0.5)*0.3)))));
return (_n_s_29458->_p_v=([&](){auto _n_argument_29523=0.02;auto _n_argument_29524=d::minimum({0.99,_n_s_29458->_p_v});return d::maximum({_n_argument_29523,_n_argument_29524});})());

}
},[=]( std::shared_ptr<_n_Record_29428> _a0,std::function<double()> _a1) mutable ->double{std::shared_ptr<_n_Record_29428> _n_s_29460=_a0;
std::function<double()> _n_rand_29461=_a1;
{
(void)((_n_s_29460->_p_v=(_n_s_29460->_p_v+(0.01+(_n_rand_29461()*0.035)))));
if(d::truth((_n_s_29460->_p_v>_n_s_29460->_p_cap))){d::check_cancel();(void)((_n_s_29460->_p_v=(0.1+(_n_rand_29461()*0.14))));
(void)((_n_s_29460->_p_cap=(0.73+(_n_rand_29461()*0.22))));
}
return _n_s_29460->_p_v;

}
},[=]( std::shared_ptr<_n_Record_29428> _a0,std::function<double()> _a1) mutable ->double{std::shared_ptr<_n_Record_29428> _n_s_29462=_a0;
std::function<double()> _n_rand_29463=_a1;
{
double _n_base_29464=(0.48+(0.27*std::sin(((_n_s_29462->_p_n++)/14.0))));
(void)((_n_s_29462->_p_v=(_n_s_29462->_p_v+(((_n_base_29464-_n_s_29462->_p_v)*0.7)+((([&](){auto _n_left_29525=_n_rand_29463();auto _n_right_29526=_n_rand_29463();return (_n_left_29525+_n_right_29526);})()-1.0)*0.23)))));
return (_n_s_29462->_p_v=([&](){auto _n_argument_29527=0.015;auto _n_argument_29528=d::minimum({1.0,_n_s_29462->_p_v});return d::maximum({_n_argument_29527,_n_argument_29528});})());

}
}};}();
std::function<double()> _n_mulberry32_29426(double _a0){double _n_a_29454=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_29454=double(d::i32((_n_a_29454+1831565813.0))|d::i32(0.0))));
double _n_t_29455=d::imul(double(d::i32(_n_a_29454)^d::i32(double(d::u32(_n_a_29454)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_29454)));
(void)((_n_t_29455=double(d::i32((_n_t_29455+d::imul(double(d::i32(_n_t_29455)^d::i32(double(d::u32(_n_t_29455)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_29455)))))^d::i32(_n_t_29455))));
return (double(d::u32(double(d::i32(_n_t_29455)^d::i32(double(d::u32(_n_t_29455)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sparkline final:ascii::Piece{
d::Array<std::shared_ptr<_n_Record_29430>,false> _n_series_29429{};
bool _n_range_29431{};
double _n_rate_29432{};
double _n_cols_29433{};
double _n_rows_29434{};
double _n_x0_29435{};
double _n_W_29436{};
double _n_gap_29437{};
double _n_span_29438{};
double _n_top_29439{};
d::String _n_blank_29440{};
d::String _n_header_29442{};
d::String _n_axis_29443{};
double _n_made_29445{};
d::Array<d::Array<float,true>,false> _n_rings_29446{};
d::Array<std::shared_ptr<_n_Record_29428>,false> _n_states_29447{};
d::Array<std::function<double()>,false> _n_rands_29448{};
d::Array<double,false> _n_win_29451{};
std::function<d::String(double,std::shared_ptr<_n_Record_29497>)> _render;
d::String _n_fit_29441(d::String _a0){d::String _n_s_29465=_a0;
return d::padEnd(d::slice(_n_s_29465,0.0,this->_n_cols_29433),this->_n_cols_29433);}

d::String _n_fmt_29444(std::shared_ptr<_n_Record_29430> _a0,double _a1,bool _a2){std::shared_ptr<_n_Record_29430> _n_s_29466=_a0;
double _n_v_29467=_a1;
bool _n_unit_29468=_a2;
return (d::truth((d::typeOf(_n_s_29466->_p_format)==d::String(u"function")))?d::string(_n_s_29466->_p_format(_n_v_29467)):(d::string(d::fixed(_n_v_29467,([&]()->double{auto _n_logical_29569=_n_s_29466->_p_digits;return d::present(_n_logical_29569)?d::read(_n_logical_29569):0.0;})()))+d::string((d::truth(_n_unit_29468)?([&]()->d::String{auto _n_logical_29570=_n_s_29466->_p_unit;return d::present(_n_logical_29570)?d::read(_n_logical_29570):d::String(u"");})():d::String(u"")))));}

void _n_reset_29449(){{
(void)((this->_n_made_29445=0.0));
(void)((this->_n_rings_29446=d::map(this->_n_series_29429,[&]( ) mutable ->d::Array<float,true>{return d::Array<float,true>(size_t(this->_n_W_29436));})));
(void)((this->_n_rands_29448=d::map(this->_n_series_29429,[&]( std::shared_ptr<_n_Record_29430> _a0,double _a1) mutable ->std::function<double()>{std::shared_ptr<_n_Record_29430> _n___29469=_a0;
double _n_i_29470=_a1;
return _n_mulberry32_29426((911.0+(_n_i_29470*7919.0)));})));
(void)((this->_n_states_29447=d::map(this->_n_series_29429,[&]( ) mutable ->std::shared_ptr<_n_Record_29428>{return ([&](){auto _n_object_29574=std::make_shared<_n_Record_29428>();_n_object_29574->_p_v=0.4;_n_object_29574->_p_busy=0.0;_n_object_29574->_p_cap=0.82;_n_object_29574->_p_n=0.0;return _n_object_29574;})();})));

}
}

void _n_fill_29450(double _a0){double _n_need_29471=_a0;
{
if(d::truth((_n_need_29471<this->_n_made_29445))){d::check_cancel();(void)(this->_n_reset_29449());
}
{for(;d::truth((this->_n_made_29445<_n_need_29471));(void)((this->_n_made_29445++))){d::check_cancel();(void)(d::forEach(this->_n_series_29429,[&]( std::shared_ptr<_n_Record_29430> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_29430> _n_s_29472=_a0;
double _n_i_29473=_a1;
{
if(d::truth((!d::truth(_n_s_29472->_p_values)))){d::check_cancel();(void)(([&](){auto&& _n_array_29575=d::at(this->_n_rings_29446,_n_i_29473);auto _n_index_29576=d::mod(this->_n_made_29445,this->_n_W_29436);auto _n_value_29577=d::at(_n_SIGNALS_29427,d::mod(_n_i_29473,double(_n_SIGNALS_29427.size())))(d::at(this->_n_states_29447,_n_i_29473),d::at(this->_n_rands_29448,_n_i_29473));d::put(_n_array_29575,_n_index_29576,_n_value_29577);return _n_value_29577;})());
}

}
}));
}}

}
}

explicit Native_sparkline(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29529=d::decode<std::shared_ptr<_n_Record_29496>>(_options.data);
this->_n_series_29429=(d::present(_n_binding_29529->_p_series)?d::read(_n_binding_29529->_p_series):d::Array<std::shared_ptr<_n_Record_29430>,false>(d::map(_n_meta_29415->_p_options->_p_series,[&](const auto &_n_element_29530){return ([&](){auto _n_record_29531=_n_element_29530;auto _n_record_29532=std::make_shared<_n_Record_29430>();_n_record_29532->_p_label=std::optional<d::String>(_n_record_29531->_p_label);_n_record_29532->_p_unit=std::optional<d::String>(_n_record_29531->_p_unit);_n_record_29532->_p_lo=std::optional<double>(_n_record_29531->_p_lo);_n_record_29532->_p_hi=std::optional<double>(_n_record_29531->_p_hi);_n_record_29532->_p_digits=_n_record_29531->_p_digits;return _n_record_29532;})();})));
this->_n_range_29431=(d::present(_n_binding_29529->_p_range)?d::read(_n_binding_29529->_p_range):_n_meta_29415->_p_options->_p_range);
this->_n_rate_29432=(d::present(_n_binding_29529->_p_rate)?d::read(_n_binding_29529->_p_rate):_n_meta_29415->_p_options->_p_rate);
auto _n_binding_29533=_n_meta_29415;
this->_n_cols_29433=_n_binding_29533->_p_cols;
this->_n_rows_29434=_n_binding_29533->_p_rows;
(void)((this->_n_rate_29432=d::maximum({0.05,([&]()->double{auto _n_logical_29534=(+d::number(this->_n_rate_29432));return d::truth(_n_logical_29534)?_n_logical_29534:_n_meta_29415->_p_options->_p_rate;})()})));
this->_n_x0_29435=(2.0+_n_LW_29422);
this->_n_W_29436=(((((this->_n_cols_29433-this->_n_x0_29435)-2.0)-_n_VW_29423)-(d::truth(this->_n_range_29431)?(((2.0+_n_RW_29424)+1.0)+_n_RW_29424):0.0))-2.0);
(void)((this->_n_series_29429=([&]()->d::Array<std::shared_ptr<_n_Record_29430>,false>{auto _n_logical_29535=this->_n_series_29429;return d::truth(_n_logical_29535)?_n_logical_29535:d::Array<std::shared_ptr<_n_Record_29430>,false>{};})().slice(0.0,_n_SLOTS_29425)));
this->_n_gap_29437=(d::truth((double(this->_n_series_29429.size())<=3.0))?2.0:1.0);
this->_n_span_29438=(((d::maximum({1.0,double(this->_n_series_29429.size())})-1.0)*this->_n_gap_29437)+1.0);
this->_n_top_29439=(std::floor((((this->_n_rows_29434-this->_n_span_29438)-2.0)/2.0))+1.0);
this->_n_blank_29440=d::repeat(d::String(u" "),this->_n_cols_29433);
this->_n_header_29442=(d::truth(this->_n_range_29431)?this->_n_fit_29441(([&](){auto _n_left_29536=(d::string(([&](){auto _n_left_29538=d::repeat(d::String(u" "),((((this->_n_x0_29435+this->_n_W_29436)+2.0)+_n_VW_29423)+2.0));auto _n_right_29539=d::padStart(d::String(u"min"),_n_RW_29424);return (d::string(_n_left_29538)+d::string(_n_right_29539));})())+d::string(d::String(u" ")));auto _n_right_29537=d::padStart(d::String(u"max"),_n_RW_29424);return (d::string(_n_left_29536)+d::string(_n_right_29537));})()):this->_n_blank_29440);
this->_n_axis_29443=this->_n_fit_29441((d::string(([&](){auto _n_left_29540=d::repeat(d::String(u" "),this->_n_x0_29435);auto _n_right_29541=d::padEnd((d::string(d::round((this->_n_W_29436/this->_n_rate_29432)))+d::string(d::String(u"s ago"))),(this->_n_W_29436-2.0));return (d::string(_n_left_29540)+d::string(_n_right_29541));})())+d::string(d::String(u"now"))));
(void)(this->_n_reset_29449());
this->_n_win_29451=d::Array<double,false>(size_t(this->_n_W_29436));
_render=[=]( double _a0,std::shared_ptr<_n_Record_29497> _a1) mutable ->d::String{double _n_t_29474=_a0;
{
(void)(this->_n_fill_29450(((this->_n_W_29436*2.0)+std::floor((_n_t_29474*this->_n_rate_29432)))));
d::Array<d::String,false> _n_lines_29475=d::Array<d::String,false>(size_t(this->_n_rows_29434)).fill(this->_n_blank_29440);
(void)(([&](){auto&& _n_array_29542=_n_lines_29475;auto _n_index_29543=(this->_n_top_29439-1.0);auto _n_value_29544=this->_n_header_29442;d::put(_n_array_29542,_n_index_29543,_n_value_29544);return _n_value_29544;})());
(void)(([&](){auto&& _n_array_29545=_n_lines_29475;auto _n_index_29546=(this->_n_top_29439+this->_n_span_29438);auto _n_value_29547=this->_n_axis_29443;d::put(_n_array_29545,_n_index_29546,_n_value_29547);return _n_value_29547;})());
(void)(d::forEach(this->_n_series_29429,[&]( std::shared_ptr<_n_Record_29430> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_29430> _n_s_29476=_a0;
double _n_i_29477=_a1;
{
double _n_n_29478=0.0;
if(d::truth(_n_s_29476->_p_values)){d::check_cancel();d::Array<double,false> _n_v_29479=d::read(_n_s_29476->_p_values);
{double _n_j_29480=d::maximum({0.0,(double(_n_v_29479.size())-this->_n_W_29436)});
for(;d::truth((_n_j_29480<double(_n_v_29479.size())));(void)((_n_j_29480++))){d::check_cancel();(void)(([&](){auto&& _n_array_29548=this->_n_win_29451;auto _n_index_29549=(_n_n_29478++);auto _n_value_29550=(+d::number(d::at(_n_v_29479,_n_j_29480)));d::put(_n_array_29548,_n_index_29549,_n_value_29550);return _n_value_29550;})());
}}
}else {d::check_cancel();double _n_lo_29481=([&]()->double{auto _n_logical_29551=_n_s_29476->_p_lo;return d::present(_n_logical_29551)?d::read(_n_logical_29551):0.0;})();
double _n_hi_29482=([&]()->double{auto _n_logical_29552=_n_s_29476->_p_hi;return d::present(_n_logical_29552)?d::read(_n_logical_29552):100.0;})();
{double _n_j_29483=0.0;
for(;d::truth((_n_j_29483<this->_n_W_29436));(void)((_n_j_29483++))){d::check_cancel();(void)(([&](){auto&& _n_array_29553=this->_n_win_29451;auto _n_index_29554=(_n_n_29478++);auto _n_value_29555=(_n_lo_29481+(d::at(d::at(this->_n_rings_29446,_n_i_29477),d::mod((this->_n_made_29445+_n_j_29483),this->_n_W_29436))*(_n_hi_29482-_n_lo_29481)));d::put(_n_array_29553,_n_index_29554,_n_value_29555);return _n_value_29555;})());
}}
}
double _n_min_29484=INFINITY;
double _n_max_29485=(-d::number(INFINITY));
{double _n_j_29486=0.0;
for(;d::truth((_n_j_29486<_n_n_29478));(void)((_n_j_29486++))){d::check_cancel();if(d::truth(std::isfinite(d::at(this->_n_win_29451,_n_j_29486)))){d::check_cancel();(void)(((_n_min_29484=d::minimum({_n_min_29484,d::at(this->_n_win_29451,_n_j_29486)})),(_n_max_29485=d::maximum({_n_max_29485,d::at(this->_n_win_29451,_n_j_29486)}))));
}
}}
double _n_lo_29487=([&]()->double{auto _n_logical_29556=_n_s_29476->_p_lo;return d::present(_n_logical_29556)?d::read(_n_logical_29556):_n_min_29484;})();
double _n_hi_29488=([&]()->double{auto _n_logical_29557=_n_s_29476->_p_hi;return d::present(_n_logical_29557)?d::read(_n_logical_29557):(d::truth((_n_max_29485>_n_lo_29487))?_n_max_29485:(_n_lo_29487+1.0));})();
double _n_d_29489=([&]()->double{auto _n_logical_29558=(_n_hi_29488-_n_lo_29487);return d::truth(_n_logical_29558)?_n_logical_29558:1.0;})();
d::String _n_bars_29490=d::repeat(d::String(u" "),(this->_n_W_29436-_n_n_29478));
{double _n_j_29491=0.0;
for(;d::truth((_n_j_29491<_n_n_29478));(void)((_n_j_29491++))){d::check_cancel();if(d::truth((!d::truth(std::isfinite(d::at(this->_n_win_29451,_n_j_29491)))))){d::check_cancel();(void)((_n_bars_29490=(d::string(_n_bars_29490)+d::string(d::String(u" ")))));
}else {d::check_cancel();(void)((_n_bars_29490=(d::string(_n_bars_29490)+d::string(d::at(_n_BARS_29421,([&](){auto _n_argument_29559=0.0;auto _n_argument_29560=([&](){auto _n_argument_29561=7.0;auto _n_argument_29562=d::round((((d::at(this->_n_win_29451,_n_j_29491)-_n_lo_29487)/_n_d_29489)*7.0));return d::minimum({_n_argument_29561,_n_argument_29562});})();return d::maximum({_n_argument_29559,_n_argument_29560});})())))));
}
}}
double _n_last_29492=d::at(this->_n_win_29451,(_n_n_29478-1.0));
d::String _n_label_29493=d::padEnd(d::slice(d::string(([&]()->d::String{auto _n_logical_29563=_n_s_29476->_p_label;return d::present(_n_logical_29563)?d::read(_n_logical_29563):d::String(u"");})()),0.0,(_n_LW_29422-1.0)),_n_LW_29422);
d::String _n_value_29494=d::padStart(((d::truth(_n_n_29478)&&d::truth(std::isfinite(_n_last_29492)))?this->_n_fmt_29444(_n_s_29476,_n_last_29492,true):d::String(u"")),_n_VW_29423);
d::String _n_line_29495=(d::string((d::string((d::string((d::string(d::String(u"  "))+d::string(_n_label_29493)))+d::string(_n_bars_29490)))+d::string(d::String(u"▏ "))))+d::string(_n_value_29494));
if((d::truth(this->_n_range_29431)&&d::truth((_n_min_29484<=_n_max_29485)))){d::check_cancel();(void)((_n_line_29495=(d::string(_n_line_29495)+d::string(([&](){auto _n_left_29564=(d::string((d::string(d::String(u"  "))+d::string(d::padStart(this->_n_fmt_29444(_n_s_29476,_n_min_29484,false),_n_RW_29424))))+d::string(d::String(u" ")));auto _n_right_29565=d::padStart(this->_n_fmt_29444(_n_s_29476,_n_max_29485,false),_n_RW_29424);return (d::string(_n_left_29564)+d::string(_n_right_29565));})()))));
}
(void)(([&](){auto&& _n_array_29566=_n_lines_29475;auto _n_index_29567=(this->_n_top_29439+(_n_i_29477*this->_n_gap_29437));auto _n_value_29568=this->_n_fit_29441(_n_line_29495);d::put(_n_array_29566,_n_index_29567,_n_value_29568);return _n_value_29568;})());

}
}));
return d::join(_n_lines_29475,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sparkline").cols)*ascii::catalog_meta("sparkline").rows);auto _env=std::make_shared<_n_Record_29497>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sparkline_meta(){return catalog_meta("sparkline");}
std::unique_ptr<Piece> make_sparkline(const AsciiPieceOptions &o){return std::make_unique<Native_sparkline>(o);}
}
