// Direct, statically typed C++ from src/pieces/sparkline.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29415;
struct _n_Record_29416;
struct _n_Record_29417;
struct _n_Record_29418;
struct _n_Record_29419;
struct _n_Record_29427;
struct _n_Record_29429;
struct _n_Record_29495;
struct _n_Record_29496;
struct _n_Record_29497;
struct _n_Record_29498;
struct _n_Record_29499;
struct _n_Record_29501;
struct _n_Record_29502;
struct _n_Record_29503;
struct _n_Record_29506;
struct _n_Record_29508;
struct _n_Record_29511;
struct _n_Record_29515;
struct _n_Record_29415{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29416> _p_options{};
static std::shared_ptr<_n_Record_29415> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29415>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29416>>(j["options"]);return out;}
};
struct _n_Record_29416{
d::Array<std::shared_ptr<_n_Record_29419>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29416> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29416>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29419>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29417{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
d::Nil _p_digits{};
static std::shared_ptr<_n_Record_29417> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29417>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<d::Nil>(j["digits"]);return out;}
};
struct _n_Record_29418{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
double _p_digits{};
static std::shared_ptr<_n_Record_29418> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29418>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<double>(j["digits"]);return out;}
};
struct _n_Record_29419{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29419> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29419>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29427{
double _p_v{};
double _p_busy{};
double _p_cap{};
double _p_n{};
static std::shared_ptr<_n_Record_29427> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29427>();out->_p_v=d::decode<double>(j["v"]);out->_p_busy=d::decode<double>(j["busy"]);out->_p_cap=d::decode<double>(j["cap"]);out->_p_n=d::decode<double>(j["n"]);return out;}
};
struct _n_Record_29429{
std::optional<d::String> _p_label{};
std::optional<d::String> _p_unit{};
std::optional<double> _p_lo{};
std::optional<double> _p_hi{};
std::optional<double> _p_digits{};
std::function<d::Unknown(double)> _p_format{};
std::optional<d::Array<double,false>> _p_values{};
static std::shared_ptr<_n_Record_29429> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29429>();out->_p_label=d::decode<std::optional<d::String>>(j["label"]);out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);out->_p_lo=d::decode<std::optional<double>>(j["lo"]);out->_p_hi=d::decode<std::optional<double>>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);out->_p_format=d::decode<std::function<d::Unknown(double)>>(j["format"]);out->_p_values=d::decode<std::optional<d::Array<double,false>>>(j["values"]);return out;}
};
struct _n_Record_29495{
std::optional<d::Array<std::shared_ptr<_n_Record_29429>,false>> _p_series{};
std::optional<bool> _p_range{};
std::optional<double> _p_rate{};
static std::shared_ptr<_n_Record_29495> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29495>();out->_p_series=d::decode<std::optional<d::Array<std::shared_ptr<_n_Record_29429>,false>>>(j["series"]);out->_p_range=d::decode<std::optional<bool>>(j["range"]);out->_p_rate=d::decode<std::optional<double>>(j["rate"]);return out;}
};
struct _n_Record_29496{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29496> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29496>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29497{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29498> _p_options{};
static std::shared_ptr<_n_Record_29497> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29497>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29498>>(j["options"]);return out;}
};
struct _n_Record_29498{
d::Array<std::shared_ptr<_n_Record_29501>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29498> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29498>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29501>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29499{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
static std::shared_ptr<_n_Record_29499> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29499>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);return out;}
};
struct _n_Record_29501{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29501> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29501>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29502{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_29503> _p_options{};
static std::shared_ptr<_n_Record_29502> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29502>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_29503>>(j["options"]);return out;}
};
struct _n_Record_29503{
d::Array<std::shared_ptr<_n_Record_29506>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29503> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29503>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29506>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29506{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29506> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29506>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29508{
d::Array<std::shared_ptr<_n_Record_29511>,false> _p_series{};
bool _p_range{};
double _p_rate{};
static std::shared_ptr<_n_Record_29508> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29508>();out->_p_series=d::decode<d::Array<std::shared_ptr<_n_Record_29511>,false>>(j["series"]);out->_p_range=d::decode<bool>(j["range"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_29511{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29511> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29511>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
struct _n_Record_29515{
d::String _p_label{};
d::String _p_unit{};
double _p_lo{};
double _p_hi{};
std::optional<double> _p_digits{};
static std::shared_ptr<_n_Record_29515> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29515>();out->_p_label=d::decode<d::String>(j["label"]);out->_p_unit=d::decode<d::String>(j["unit"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_digits=d::decode<std::optional<double>>(j["digits"]);return out;}
};
std::function<double()> _n_mulberry32_29425(double _a0);
std::shared_ptr<_n_Record_29415> _n_meta_29414=[](){return ([&](){auto _n_object_29507=std::make_shared<_n_Record_29415>();_n_object_29507->_p_name=d::String(u"sparkline");_n_object_29507->_p_category=d::String(u"data");_n_object_29507->_p_note=d::String(u"three live block sparklines scrolling left, values at right");_n_object_29507->_p_cols=72.0;_n_object_29507->_p_rows=9.0;_n_object_29507->_p_fps=12.0;_n_object_29507->_p_options=([&](){auto _n_object_29512=std::make_shared<_n_Record_29416>();_n_object_29512->_p_series=d::Array<std::shared_ptr<_n_Record_29419>,false>{([&](){auto _n_object_29517=std::make_shared<_n_Record_29419>();_n_object_29517->_p_label=d::String(u"cpu");_n_object_29517->_p_unit=d::String(u"%");_n_object_29517->_p_lo=0.0;_n_object_29517->_p_hi=100.0;return _n_object_29517;})(),([&](){auto _n_object_29519=std::make_shared<_n_Record_29419>();_n_object_29519->_p_label=d::String(u"memory");_n_object_29519->_p_unit=d::String(u" gb");_n_object_29519->_p_lo=1.2;_n_object_29519->_p_hi=3.4;_n_object_29519->_p_digits=std::optional<double>(1.0);return _n_object_29519;})(),([&](){auto _n_object_29521=std::make_shared<_n_Record_29419>();_n_object_29521->_p_label=d::String(u"requests");_n_object_29521->_p_unit=d::String(u"/s");_n_object_29521->_p_lo=0.0;_n_object_29521->_p_hi=260.0;return _n_object_29521;})()};_n_object_29512->_p_range=true;_n_object_29512->_p_rate=4.0;return _n_object_29512;})();return _n_object_29507;})();}();
const d::String _n_BARS_29420=[](){return d::String(u"▁▂▃▄▅▆▇█");}();
const double _n_LW_29421=[](){return 10.0;}();
const double _n_VW_29422=[](){return 7.0;}();
const double _n_RW_29423=[](){return 5.0;}();
const double _n_SLOTS_29424=[](){return 5.0;}();
d::Array<std::function<double(std::shared_ptr<_n_Record_29427>,std::function<double()>)>,false> _n_SIGNALS_29426=[](){return d::Array<std::function<double(std::shared_ptr<_n_Record_29427>,std::function<double()>)>,false>{[=]( std::shared_ptr<_n_Record_29427> _a0,std::function<double()> _a1) mutable ->double{std::shared_ptr<_n_Record_29427> _n_s_29457=_a0;
std::function<double()> _n_rand_29458=_a1;
{
if(d::truth((_n_s_29457->_p_busy>0.0))){d::check_cancel();(void)((_n_s_29457->_p_busy--));
}else {d::check_cancel();if(d::truth((_n_rand_29458()<0.06))){d::check_cancel();(void)((_n_s_29457->_p_busy=(4.0+std::floor((_n_rand_29458()*9.0)))));
}
}
(void)((_n_s_29457->_p_v=(_n_s_29457->_p_v+((((d::truth(_n_s_29457->_p_busy)?0.78:0.22)-_n_s_29457->_p_v)*0.55)+((_n_rand_29458()-0.5)*0.3)))));
return (_n_s_29457->_p_v=([&](){auto _n_argument_29522=0.02;auto _n_argument_29523=d::minimum({0.99,_n_s_29457->_p_v});return d::maximum({_n_argument_29522,_n_argument_29523});})());

}
},[=]( std::shared_ptr<_n_Record_29427> _a0,std::function<double()> _a1) mutable ->double{std::shared_ptr<_n_Record_29427> _n_s_29459=_a0;
std::function<double()> _n_rand_29460=_a1;
{
(void)((_n_s_29459->_p_v=(_n_s_29459->_p_v+(0.01+(_n_rand_29460()*0.035)))));
if(d::truth((_n_s_29459->_p_v>_n_s_29459->_p_cap))){d::check_cancel();(void)((_n_s_29459->_p_v=(0.1+(_n_rand_29460()*0.14))));
(void)((_n_s_29459->_p_cap=(0.73+(_n_rand_29460()*0.22))));
}
return _n_s_29459->_p_v;

}
},[=]( std::shared_ptr<_n_Record_29427> _a0,std::function<double()> _a1) mutable ->double{std::shared_ptr<_n_Record_29427> _n_s_29461=_a0;
std::function<double()> _n_rand_29462=_a1;
{
double _n_base_29463=(0.48+(0.27*std::sin(((_n_s_29461->_p_n++)/14.0))));
(void)((_n_s_29461->_p_v=(_n_s_29461->_p_v+(((_n_base_29463-_n_s_29461->_p_v)*0.7)+((([&](){auto _n_left_29524=_n_rand_29462();auto _n_right_29525=_n_rand_29462();return (_n_left_29524+_n_right_29525);})()-1.0)*0.23)))));
return (_n_s_29461->_p_v=([&](){auto _n_argument_29526=0.015;auto _n_argument_29527=d::minimum({1.0,_n_s_29461->_p_v});return d::maximum({_n_argument_29526,_n_argument_29527});})());

}
}};}();
std::function<double()> _n_mulberry32_29425(double _a0){double _n_a_29453=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_29453=double(d::i32((_n_a_29453+1831565813.0))|d::i32(0.0))));
double _n_t_29454=d::imul(double(d::i32(_n_a_29453)^d::i32(double(d::u32(_n_a_29453)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_29453)));
(void)((_n_t_29454=double(d::i32((_n_t_29454+d::imul(double(d::i32(_n_t_29454)^d::i32(double(d::u32(_n_t_29454)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_29454)))))^d::i32(_n_t_29454))));
return (double(d::u32(double(d::i32(_n_t_29454)^d::i32(double(d::u32(_n_t_29454)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_sparkline final:ascii::Piece{
d::Array<std::shared_ptr<_n_Record_29429>,false> _n_series_29428{};
bool _n_range_29430{};
double _n_rate_29431{};
double _n_cols_29432{};
double _n_rows_29433{};
double _n_x0_29434{};
double _n_W_29435{};
double _n_gap_29436{};
double _n_span_29437{};
double _n_top_29438{};
d::String _n_blank_29439{};
d::String _n_header_29441{};
d::String _n_axis_29442{};
double _n_made_29444{};
d::Array<d::Array<float,true>,false> _n_rings_29445{};
d::Array<std::shared_ptr<_n_Record_29427>,false> _n_states_29446{};
d::Array<std::function<double()>,false> _n_rands_29447{};
d::Array<double,false> _n_win_29450{};
std::function<d::String(double,std::shared_ptr<_n_Record_29496>)> _render;
d::String _n_fit_29440(d::String _a0){d::String _n_s_29464=_a0;
return d::padEnd(d::slice(_n_s_29464,0.0,this->_n_cols_29432),this->_n_cols_29432);}

d::String _n_fmt_29443(std::shared_ptr<_n_Record_29429> _a0,double _a1,bool _a2){std::shared_ptr<_n_Record_29429> _n_s_29465=_a0;
double _n_v_29466=_a1;
bool _n_unit_29467=_a2;
return (d::truth((d::typeOf(_n_s_29465->_p_format)==d::String(u"function")))?d::string(_n_s_29465->_p_format(_n_v_29466)):(d::string(d::fixed(_n_v_29466,([&]()->double{auto _n_logical_29568=_n_s_29465->_p_digits;return d::present(_n_logical_29568)?d::read(_n_logical_29568):0.0;})()))+d::string((d::truth(_n_unit_29467)?([&]()->d::String{auto _n_logical_29569=_n_s_29465->_p_unit;return d::present(_n_logical_29569)?d::read(_n_logical_29569):d::String(u"");})():d::String(u"")))));}

void _n_reset_29448(){{
(void)((this->_n_made_29444=0.0));
(void)((this->_n_rings_29445=d::map(this->_n_series_29428,[&]( ) mutable ->d::Array<float,true>{return d::Array<float,true>(size_t(this->_n_W_29435));})));
(void)((this->_n_rands_29447=d::map(this->_n_series_29428,[&]( std::shared_ptr<_n_Record_29429> _a0,double _a1) mutable ->std::function<double()>{std::shared_ptr<_n_Record_29429> _n___29468=_a0;
double _n_i_29469=_a1;
return _n_mulberry32_29425((911.0+(_n_i_29469*7919.0)));})));
(void)((this->_n_states_29446=d::map(this->_n_series_29428,[&]( ) mutable ->std::shared_ptr<_n_Record_29427>{return ([&](){auto _n_object_29573=std::make_shared<_n_Record_29427>();_n_object_29573->_p_v=0.4;_n_object_29573->_p_busy=0.0;_n_object_29573->_p_cap=0.82;_n_object_29573->_p_n=0.0;return _n_object_29573;})();})));

}
}

void _n_fill_29449(double _a0){double _n_need_29470=_a0;
{
if(d::truth((_n_need_29470<this->_n_made_29444))){d::check_cancel();(void)(this->_n_reset_29448());
}
{for(;d::truth((this->_n_made_29444<_n_need_29470));(void)((this->_n_made_29444++))){d::check_cancel();(void)(d::forEach(this->_n_series_29428,[&]( std::shared_ptr<_n_Record_29429> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_29429> _n_s_29471=_a0;
double _n_i_29472=_a1;
{
if(d::truth((!d::truth(_n_s_29471->_p_values)))){d::check_cancel();(void)(([&](){auto&& _n_array_29574=d::at(this->_n_rings_29445,_n_i_29472);auto _n_index_29575=d::mod(this->_n_made_29444,this->_n_W_29435);auto _n_value_29576=d::at(_n_SIGNALS_29426,d::mod(_n_i_29472,double(_n_SIGNALS_29426.size())))(d::at(this->_n_states_29446,_n_i_29472),d::at(this->_n_rands_29447,_n_i_29472));d::put(_n_array_29574,_n_index_29575,_n_value_29576);return _n_value_29576;})());
}

}
}));
}}

}
}

explicit Native_sparkline(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29528=d::decode<std::shared_ptr<_n_Record_29495>>(_options.data);
this->_n_series_29428=(d::present(_n_binding_29528->_p_series)?d::read(_n_binding_29528->_p_series):d::Array<std::shared_ptr<_n_Record_29429>,false>(d::map(_n_meta_29414->_p_options->_p_series,[&](const auto &_n_element_29529){return ([&](){auto _n_record_29530=_n_element_29529;auto _n_record_29531=std::make_shared<_n_Record_29429>();_n_record_29531->_p_label=std::optional<d::String>(_n_record_29530->_p_label);_n_record_29531->_p_unit=std::optional<d::String>(_n_record_29530->_p_unit);_n_record_29531->_p_lo=std::optional<double>(_n_record_29530->_p_lo);_n_record_29531->_p_hi=std::optional<double>(_n_record_29530->_p_hi);_n_record_29531->_p_digits=_n_record_29530->_p_digits;return _n_record_29531;})();})));
this->_n_range_29430=(d::present(_n_binding_29528->_p_range)?d::read(_n_binding_29528->_p_range):_n_meta_29414->_p_options->_p_range);
this->_n_rate_29431=(d::present(_n_binding_29528->_p_rate)?d::read(_n_binding_29528->_p_rate):_n_meta_29414->_p_options->_p_rate);
auto _n_binding_29532=_n_meta_29414;
this->_n_cols_29432=_n_binding_29532->_p_cols;
this->_n_rows_29433=_n_binding_29532->_p_rows;
(void)((this->_n_rate_29431=d::maximum({0.05,([&]()->double{auto _n_logical_29533=(+d::number(this->_n_rate_29431));return d::truth(_n_logical_29533)?_n_logical_29533:_n_meta_29414->_p_options->_p_rate;})()})));
this->_n_x0_29434=(2.0+_n_LW_29421);
this->_n_W_29435=(((((this->_n_cols_29432-this->_n_x0_29434)-2.0)-_n_VW_29422)-(d::truth(this->_n_range_29430)?(((2.0+_n_RW_29423)+1.0)+_n_RW_29423):0.0))-2.0);
(void)((this->_n_series_29428=([&]()->d::Array<std::shared_ptr<_n_Record_29429>,false>{auto _n_logical_29534=this->_n_series_29428;return d::truth(_n_logical_29534)?_n_logical_29534:d::Array<std::shared_ptr<_n_Record_29429>,false>{};})().slice(0.0,_n_SLOTS_29424)));
this->_n_gap_29436=(d::truth((double(this->_n_series_29428.size())<=3.0))?2.0:1.0);
this->_n_span_29437=(((d::maximum({1.0,double(this->_n_series_29428.size())})-1.0)*this->_n_gap_29436)+1.0);
this->_n_top_29438=(std::floor((((this->_n_rows_29433-this->_n_span_29437)-2.0)/2.0))+1.0);
this->_n_blank_29439=d::repeat(d::String(u" "),this->_n_cols_29432);
this->_n_header_29441=(d::truth(this->_n_range_29430)?this->_n_fit_29440(([&](){auto _n_left_29535=(d::string(([&](){auto _n_left_29537=d::repeat(d::String(u" "),((((this->_n_x0_29434+this->_n_W_29435)+2.0)+_n_VW_29422)+2.0));auto _n_right_29538=d::padStart(d::String(u"min"),_n_RW_29423);return (d::string(_n_left_29537)+d::string(_n_right_29538));})())+d::string(d::String(u" ")));auto _n_right_29536=d::padStart(d::String(u"max"),_n_RW_29423);return (d::string(_n_left_29535)+d::string(_n_right_29536));})()):this->_n_blank_29439);
this->_n_axis_29442=this->_n_fit_29440((d::string(([&](){auto _n_left_29539=d::repeat(d::String(u" "),this->_n_x0_29434);auto _n_right_29540=d::padEnd((d::string(d::round((this->_n_W_29435/this->_n_rate_29431)))+d::string(d::String(u"s ago"))),(this->_n_W_29435-2.0));return (d::string(_n_left_29539)+d::string(_n_right_29540));})())+d::string(d::String(u"now"))));
(void)(this->_n_reset_29448());
this->_n_win_29450=d::Array<double,false>(size_t(this->_n_W_29435));
_render=[=]( double _a0,std::shared_ptr<_n_Record_29496> _a1) mutable ->d::String{double _n_t_29473=_a0;
{
(void)(this->_n_fill_29449(((this->_n_W_29435*2.0)+std::floor((_n_t_29473*this->_n_rate_29431)))));
d::Array<d::String,false> _n_lines_29474=d::Array<d::String,false>(size_t(this->_n_rows_29433)).fill(this->_n_blank_29439);
(void)(([&](){auto&& _n_array_29541=_n_lines_29474;auto _n_index_29542=(this->_n_top_29438-1.0);auto _n_value_29543=this->_n_header_29441;d::put(_n_array_29541,_n_index_29542,_n_value_29543);return _n_value_29543;})());
(void)(([&](){auto&& _n_array_29544=_n_lines_29474;auto _n_index_29545=(this->_n_top_29438+this->_n_span_29437);auto _n_value_29546=this->_n_axis_29442;d::put(_n_array_29544,_n_index_29545,_n_value_29546);return _n_value_29546;})());
(void)(d::forEach(this->_n_series_29428,[&]( std::shared_ptr<_n_Record_29429> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_29429> _n_s_29475=_a0;
double _n_i_29476=_a1;
{
double _n_n_29477=0.0;
if(d::truth(_n_s_29475->_p_values)){d::check_cancel();d::Array<double,false> _n_v_29478=d::read(_n_s_29475->_p_values);
{double _n_j_29479=d::maximum({0.0,(double(_n_v_29478.size())-this->_n_W_29435)});
for(;d::truth((_n_j_29479<double(_n_v_29478.size())));(void)((_n_j_29479++))){d::check_cancel();(void)(([&](){auto&& _n_array_29547=this->_n_win_29450;auto _n_index_29548=(_n_n_29477++);auto _n_value_29549=(+d::number(d::at(_n_v_29478,_n_j_29479)));d::put(_n_array_29547,_n_index_29548,_n_value_29549);return _n_value_29549;})());
}}
}else {d::check_cancel();double _n_lo_29480=([&]()->double{auto _n_logical_29550=_n_s_29475->_p_lo;return d::present(_n_logical_29550)?d::read(_n_logical_29550):0.0;})();
double _n_hi_29481=([&]()->double{auto _n_logical_29551=_n_s_29475->_p_hi;return d::present(_n_logical_29551)?d::read(_n_logical_29551):100.0;})();
{double _n_j_29482=0.0;
for(;d::truth((_n_j_29482<this->_n_W_29435));(void)((_n_j_29482++))){d::check_cancel();(void)(([&](){auto&& _n_array_29552=this->_n_win_29450;auto _n_index_29553=(_n_n_29477++);auto _n_value_29554=(_n_lo_29480+(d::at(d::at(this->_n_rings_29445,_n_i_29476),d::mod((this->_n_made_29444+_n_j_29482),this->_n_W_29435))*(_n_hi_29481-_n_lo_29480)));d::put(_n_array_29552,_n_index_29553,_n_value_29554);return _n_value_29554;})());
}}
}
double _n_min_29483=INFINITY;
double _n_max_29484=(-d::number(INFINITY));
{double _n_j_29485=0.0;
for(;d::truth((_n_j_29485<_n_n_29477));(void)((_n_j_29485++))){d::check_cancel();if(d::truth(std::isfinite(d::at(this->_n_win_29450,_n_j_29485)))){d::check_cancel();(void)(((_n_min_29483=d::minimum({_n_min_29483,d::at(this->_n_win_29450,_n_j_29485)})),(_n_max_29484=d::maximum({_n_max_29484,d::at(this->_n_win_29450,_n_j_29485)}))));
}
}}
double _n_lo_29486=([&]()->double{auto _n_logical_29555=_n_s_29475->_p_lo;return d::present(_n_logical_29555)?d::read(_n_logical_29555):_n_min_29483;})();
double _n_hi_29487=([&]()->double{auto _n_logical_29556=_n_s_29475->_p_hi;return d::present(_n_logical_29556)?d::read(_n_logical_29556):(d::truth((_n_max_29484>_n_lo_29486))?_n_max_29484:(_n_lo_29486+1.0));})();
double _n_d_29488=([&]()->double{auto _n_logical_29557=(_n_hi_29487-_n_lo_29486);return d::truth(_n_logical_29557)?_n_logical_29557:1.0;})();
d::String _n_bars_29489=d::repeat(d::String(u" "),(this->_n_W_29435-_n_n_29477));
{double _n_j_29490=0.0;
for(;d::truth((_n_j_29490<_n_n_29477));(void)((_n_j_29490++))){d::check_cancel();if(d::truth((!d::truth(std::isfinite(d::at(this->_n_win_29450,_n_j_29490)))))){d::check_cancel();(void)((_n_bars_29489=(d::string(_n_bars_29489)+d::string(d::String(u" ")))));
}else {d::check_cancel();(void)((_n_bars_29489=(d::string(_n_bars_29489)+d::string(d::at(_n_BARS_29420,([&](){auto _n_argument_29558=0.0;auto _n_argument_29559=([&](){auto _n_argument_29560=7.0;auto _n_argument_29561=d::round((((d::at(this->_n_win_29450,_n_j_29490)-_n_lo_29486)/_n_d_29488)*7.0));return d::minimum({_n_argument_29560,_n_argument_29561});})();return d::maximum({_n_argument_29558,_n_argument_29559});})())))));
}
}}
double _n_last_29491=d::at(this->_n_win_29450,(_n_n_29477-1.0));
d::String _n_label_29492=d::padEnd(d::slice(d::string(([&]()->d::String{auto _n_logical_29562=_n_s_29475->_p_label;return d::present(_n_logical_29562)?d::read(_n_logical_29562):d::String(u"");})()),0.0,(_n_LW_29421-1.0)),_n_LW_29421);
d::String _n_value_29493=d::padStart(((d::truth(_n_n_29477)&&d::truth(std::isfinite(_n_last_29491)))?this->_n_fmt_29443(_n_s_29475,_n_last_29491,true):d::String(u"")),_n_VW_29422);
d::String _n_line_29494=(d::string((d::string((d::string((d::string(d::String(u"  "))+d::string(_n_label_29492)))+d::string(_n_bars_29489)))+d::string(d::String(u"▏ "))))+d::string(_n_value_29493));
if((d::truth(this->_n_range_29430)&&d::truth((_n_min_29483<=_n_max_29484)))){d::check_cancel();(void)((_n_line_29494=(d::string(_n_line_29494)+d::string(([&](){auto _n_left_29563=(d::string((d::string(d::String(u"  "))+d::string(d::padStart(this->_n_fmt_29443(_n_s_29475,_n_min_29483,false),_n_RW_29423))))+d::string(d::String(u" ")));auto _n_right_29564=d::padStart(this->_n_fmt_29443(_n_s_29475,_n_max_29484,false),_n_RW_29423);return (d::string(_n_left_29563)+d::string(_n_right_29564));})()))));
}
(void)(([&](){auto&& _n_array_29565=_n_lines_29474;auto _n_index_29566=(this->_n_top_29438+(_n_i_29476*this->_n_gap_29436));auto _n_value_29567=this->_n_fit_29440(_n_line_29494);d::put(_n_array_29565,_n_index_29566,_n_value_29567);return _n_value_29567;})());

}
}));
return d::join(_n_lines_29474,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sparkline").cols)*ascii::catalog_meta("sparkline").rows);auto _env=std::make_shared<_n_Record_29496>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sparkline_meta(){return catalog_meta("sparkline");}
std::unique_ptr<Piece> make_sparkline(const AsciiPieceOptions &o){return std::make_unique<Native_sparkline>(o);}
}
