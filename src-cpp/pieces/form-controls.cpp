// Direct, statically typed C++ from src/pieces/form-controls.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10842;
struct _n_Record_10843;
struct _n_Record_10854;
struct _n_Record_10855;
struct _n_Record_10932;
struct _n_Record_10933;
struct _n_Record_10842{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_10843> _p_options{};
static std::shared_ptr<_n_Record_10842> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10842>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_10843>>(j["options"]);return out;}
};
struct _n_Record_10843{
d::String _p_title{};
static std::shared_ptr<_n_Record_10843> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10843>();out->_p_title=d::decode<d::String>(j["title"]);return out;}
};
struct _n_Record_10854{
d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10855>)>>>,false> _p_ev{};
double _p_total{};
double _p_start{};
static std::shared_ptr<_n_Record_10854> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10854>();out->_p_ev=d::decode<d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10855>)>>>,false>>(j["ev"]);out->_p_total=d::decode<double>(j["total"]);out->_p_start=d::decode<double>(j["start"]);return out;}
};
struct _n_Record_10855{
double _p_focus{};
d::String _p_email{};
double _p_typed{};
double _p_unit{};
bool _p_open{};
double _p_hi{};
double _p_theme{};
bool _p_mentions{};
double _p_knob{};
double _p_volume{};
bool _p_pressed{};
bool _p_saved{};
static std::shared_ptr<_n_Record_10855> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10855>();out->_p_focus=d::decode<double>(j["focus"]);out->_p_email=d::decode<d::String>(j["email"]);out->_p_typed=d::decode<double>(j["typed"]);out->_p_unit=d::decode<double>(j["unit"]);out->_p_open=d::decode<bool>(j["open"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_theme=d::decode<double>(j["theme"]);out->_p_mentions=d::decode<bool>(j["mentions"]);out->_p_knob=d::decode<double>(j["knob"]);out->_p_volume=d::decode<double>(j["volume"]);out->_p_pressed=d::decode<bool>(j["pressed"]);out->_p_saved=d::decode<bool>(j["saved"]);return out;}
};
struct _n_Record_10932{
std::optional<d::String> _p_title{};
static std::shared_ptr<_n_Record_10932> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10932>();out->_p_title=d::decode<std::optional<d::String>>(j["title"]);return out;}
};
struct _n_Record_10933{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10933> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10933>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::shared_ptr<_n_Record_10854> _n_script_10853();
std::shared_ptr<_n_Record_10842> _n_meta_10841=[](){return ([&](){auto _n_object_10938=std::make_shared<_n_Record_10842>();_n_object_10938->_p_name=d::String(u"form controls");_n_object_10938->_p_category=d::String(u"ui");_n_object_10938->_p_note=d::String(u"a terminal style form being filled in, field by field");_n_object_10938->_p_cols=54.0;_n_object_10938->_p_rows=16.0;_n_object_10938->_p_fps=15.0;_n_object_10938->_p_options=([&](){auto _n_object_10940=std::make_shared<_n_Record_10843>();_n_object_10940->_p_title=d::String(u"preferences");return _n_object_10940;})();return _n_object_10938;})();}();
d::Array<d::String,false> _n_EMAILS_10844=[](){return d::Array<d::String,false>{d::String(u"you@example.com"),d::String(u"team@example.com")};}();
d::Array<d::String,false> _n_UNITS_10845=[](){return d::Array<d::String,false>{d::String(u"metric"),d::String(u"imperial")};}();
d::Array<d::String,false> _n_THEMES_10846=[](){return d::Array<d::String,false>{d::String(u"light"),d::String(u"dark"),d::String(u"system")};}();
d::Array<double,false> _n_VOLUME_10847=[](){return d::Array<double,false>{40.0,75.0};}();
const double _n_LABEL_10848=[](){return 4.0;}();
const double _n_FIELD_10849=[](){return 14.0;}();
const double _n_WIDE_10850=[](){return 32.0;}();
const double _n_RIGHT_10851=[](){return ((_n_FIELD_10849+_n_WIDE_10850)+4.0);}();
const double _n_TRACK_10852=[](){return 30.0;}();
std::shared_ptr<_n_Record_10854> _n_script_10853(){{
d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10855>)>>>,false> _n_ev_10865=d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10855>)>>>,false>{};
double _n_T_10867=0.0;
double _n_start_10868=0.0;
auto _n_at_10869=[&]( double _a0,std::function<void(std::shared_ptr<_n_Record_10855>)> _a1) mutable ->double{double _n_dt_10870=_a0;
std::function<void(std::shared_ptr<_n_Record_10855>)> _n_fn_10871=_a1;
return _n_ev_10865.push(std::make_shared<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10855>)>>>((_n_T_10867=(_n_T_10867+_n_dt_10870)),_n_fn_10871));};
for(auto &&_n_item_10941:d::Array<double,false>{1.0,0.0}){d::check_cancel();double _n_b_10873=_n_item_10941;
{
double _n_a_10874=(1.0-_n_b_10873);
(void)(_n_at_10869(0.35,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10875=_a0;
([&](){(void)((_n_s_10875->_p_focus=0.0));})();}));
(void)(_n_at_10869(0.3,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10876=_a0;
((_n_s_10876->_p_email=d::String(u"")),([&](){(void)((_n_s_10876->_p_typed=_n_T_10867));})());}));
{double _n_i_10877=1.0;
for(;d::truth((_n_i_10877<=double(d::at(_n_EMAILS_10844,_n_b_10873).size())));(void)((_n_i_10877++))){d::check_cancel();d::String _n_text_10878=d::slice(d::at(_n_EMAILS_10844,_n_b_10873),0.0,_n_i_10877);
double _n_when_10879=(_n_T_10867+0.07);
(void)(_n_at_10869(0.07,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10880=_a0;
((_n_s_10880->_p_email=_n_text_10878),([&](){(void)((_n_s_10880->_p_typed=_n_when_10879));})());}));
}}
if(d::truth(_n_b_10873)){d::check_cancel();(void)((_n_start_10868=(_n_T_10867+0.2)));
}
(void)(_n_at_10869(0.9,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10881=_a0;
([&](){(void)((_n_s_10881->_p_focus=1.0));})();}));
(void)(_n_at_10869(0.3,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10882=_a0;
((_n_s_10882->_p_open=true),([&](){(void)((_n_s_10882->_p_hi=_n_a_10874));})());}));
(void)(_n_at_10869(0.4,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10883=_a0;
([&](){(void)((_n_s_10883->_p_hi=_n_b_10873));})();}));
(void)(_n_at_10869(0.35,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10884=_a0;
((_n_s_10884->_p_unit=_n_b_10873),([&](){(void)((_n_s_10884->_p_open=false));})());}));
(void)(_n_at_10869(0.45,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10885=_a0;
([&](){(void)((_n_s_10885->_p_focus=2.0));})();}));
(void)(_n_at_10869(0.35,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10886=_a0;
([&](){(void)((_n_s_10886->_p_theme=(d::truth(_n_b_10873)?1.0:0.0)));})();}));
(void)(_n_at_10869(0.45,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10887=_a0;
([&](){(void)((_n_s_10887->_p_focus=3.0));})();}));
(void)(_n_at_10869(0.35,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10888=_a0;
([&](){(void)((_n_s_10888->_p_mentions=(!d::truth((!d::truth(_n_b_10873))))));})();}));
(void)(_n_at_10869(0.45,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10889=_a0;
([&](){(void)((_n_s_10889->_p_focus=4.0));})();}));
{double _n_k_10890=1.0;
for(;d::truth((_n_k_10890<=4.0));(void)((_n_k_10890++))){d::check_cancel();(void)(_n_at_10869((d::truth((_n_k_10890==1.0))?0.35:0.07),[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10891=_a0;
([&](){(void)((_n_s_10891->_p_knob=(d::truth(_n_b_10873)?_n_k_10890:(4.0-_n_k_10890))));})();}));
}}
(void)(_n_at_10869(0.45,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10892=_a0;
([&](){(void)((_n_s_10892->_p_focus=5.0));})();}));
{double _n_k_10893=1.0;
for(;d::truth((_n_k_10893<=7.0));(void)((_n_k_10893++))){d::check_cancel();double _n_v_10894=(d::at(_n_VOLUME_10847,_n_a_10874)+(((d::at(_n_VOLUME_10847,_n_b_10873)-d::at(_n_VOLUME_10847,_n_a_10874))*_n_k_10893)/7.0));
(void)(_n_at_10869((d::truth((_n_k_10893==1.0))?0.35:0.07),[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10895=_a0;
([&](){(void)((_n_s_10895->_p_volume=_n_v_10894));})();}));
}}
(void)(_n_at_10869(0.45,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10896=_a0;
([&](){(void)((_n_s_10896->_p_focus=6.0));})();}));
(void)(_n_at_10869(0.4,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10897=_a0;
([&](){(void)((_n_s_10897->_p_pressed=true));})();}));
(void)(_n_at_10869(0.18,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10898=_a0;
((_n_s_10898->_p_pressed=false),([&](){(void)((_n_s_10898->_p_saved=true));})());}));
(void)(_n_at_10869(1.3,[=]( std::shared_ptr<_n_Record_10855> _a0) mutable ->void{std::shared_ptr<_n_Record_10855> _n_s_10899=_a0;
([&](){(void)((_n_s_10899->_p_saved=false));})();}));

}
}
return ([&](){auto _n_object_10943=std::make_shared<_n_Record_10854>();_n_object_10943->_p_ev=_n_ev_10865;_n_object_10943->_p_total=(_n_T_10867+0.4);_n_object_10943->_p_start=_n_start_10868;return _n_object_10943;})();

}
}

struct Native_form_controls final:ascii::Piece{
d::String _n_title_10856{};
double _n_cols_10857{};
double _n_rows_10858{};
d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10855>)>>>,false> _n_ev_10859{};
double _n_total_10860{};
double _n_start_10861{};
d::Array<d::Array<d::String,false>,false> _n_grid_10862{};
std::function<d::String(double,std::shared_ptr<_n_Record_10933>)> _render;
void _n_text_10863(double _a0,double _a1,d::String _a2){double _n_r_10900=_a0;
double _n_c_10901=_a1;
d::String _n_s_10902=_a2;
{
{double _n_i_10903=0.0;
for(;(d::truth((_n_i_10903<double(_n_s_10902.size())))&&d::truth(((_n_c_10901+_n_i_10903)<(this->_n_cols_10857-1.0))));(void)((_n_i_10903++))){d::check_cancel();(void)(([&](){auto&& _n_array_10998=d::at(this->_n_grid_10862,_n_r_10900);auto _n_index_10999=(_n_c_10901+_n_i_10903);auto _n_value_11000=d::at(_n_s_10902,_n_i_10903);d::put(_n_array_10998,_n_index_10999,_n_value_11000);return _n_value_11000;})());
}}

}
}

explicit Native_form_controls(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10944=d::decode<std::shared_ptr<_n_Record_10932>>(_options.data);
this->_n_title_10856=(d::present(_n_binding_10944->_p_title)?d::read(_n_binding_10944->_p_title):d::String(u"preferences"));
auto _n_binding_10945=_n_meta_10841;
this->_n_cols_10857=_n_binding_10945->_p_cols;
this->_n_rows_10858=_n_binding_10945->_p_rows;
auto _n_binding_10946=_n_script_10853();
this->_n_ev_10859=_n_binding_10946->_p_ev;
this->_n_total_10860=_n_binding_10946->_p_total;
this->_n_start_10861=_n_binding_10946->_p_start;
this->_n_grid_10862=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_10858,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_10857));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_10933> _a1) mutable ->d::String{double _n_t_10904=_a0;
{
double _n_p_10905=d::mod((_n_t_10904+this->_n_start_10861),this->_n_total_10860);
std::shared_ptr<_n_Record_10855> _n_s_10906=([&](){auto _n_object_10948=std::make_shared<_n_Record_10855>();_n_object_10948->_p_focus=6.0;_n_object_10948->_p_email=d::at(_n_EMAILS_10844,0.0);_n_object_10948->_p_typed=(-d::number(9.0));_n_object_10948->_p_unit=0.0;_n_object_10948->_p_open=false;_n_object_10948->_p_hi=0.0;_n_object_10948->_p_theme=0.0;_n_object_10948->_p_mentions=false;_n_object_10948->_p_knob=0.0;_n_object_10948->_p_volume=d::at(_n_VOLUME_10847,0.0);_n_object_10948->_p_pressed=false;_n_object_10948->_p_saved=false;return _n_object_10948;})();
for(auto &&_n_item_10949:this->_n_ev_10859){d::check_cancel();auto _n_binding_10950=_n_item_10949;
double _n_when_10907=std::get<0>(*_n_binding_10950);
std::function<void(std::shared_ptr<_n_Record_10855>)> _n_fn_10908=std::get<1>(*_n_binding_10950);
{
if(d::truth((_n_when_10907>_n_p_10905))){d::check_cancel();break;
}
(void)(_n_fn_10908(_n_s_10906));

}
}
for(auto &&_n_item_10951:this->_n_grid_10862){d::check_cancel();d::Array<d::String,false> _n_row_10909=_n_item_10951;
(void)(_n_row_10909.fill(d::String(u" ")));
}
d::String _n_name_10910=(d::String(u" ")+d::string(this->_n_title_10856)+d::String(u" "));
{double _n_c_10911=1.0;
for(;d::truth((_n_c_10911<(this->_n_cols_10857-1.0)));(void)((_n_c_10911++))){d::check_cancel();(void)(([&](){auto&& _n_array_10952=d::at(this->_n_grid_10862,0.0);auto _n_index_10953=_n_c_10911;auto _n_value_10954=([&](){auto&& _n_array_10955=d::at(this->_n_grid_10862,(this->_n_rows_10858-1.0));auto _n_index_10956=_n_c_10911;auto _n_value_10957=d::String(u"─");d::put(_n_array_10955,_n_index_10956,_n_value_10957);return _n_value_10957;})();d::put(_n_array_10952,_n_index_10953,_n_value_10954);return _n_value_10954;})());
}}
{double _n_r_10912=1.0;
for(;d::truth((_n_r_10912<(this->_n_rows_10858-1.0)));(void)((_n_r_10912++))){d::check_cancel();(void)(([&](){auto&& _n_array_10958=d::at(this->_n_grid_10862,_n_r_10912);auto _n_index_10959=0.0;auto _n_value_10960=([&](){auto&& _n_array_10961=d::at(this->_n_grid_10862,_n_r_10912);auto _n_index_10962=(this->_n_cols_10857-1.0);auto _n_value_10963=d::String(u"│");d::put(_n_array_10961,_n_index_10962,_n_value_10963);return _n_value_10963;})();d::put(_n_array_10958,_n_index_10959,_n_value_10960);return _n_value_10960;})());
}}
(void)(([&](){auto&& _n_array_10964=d::at(this->_n_grid_10862,0.0);auto _n_index_10965=0.0;auto _n_value_10966=d::String(u"╭");d::put(_n_array_10964,_n_index_10965,_n_value_10966);return _n_value_10966;})());
(void)(([&](){auto&& _n_array_10967=d::at(this->_n_grid_10862,0.0);auto _n_index_10968=(this->_n_cols_10857-1.0);auto _n_value_10969=d::String(u"╮");d::put(_n_array_10967,_n_index_10968,_n_value_10969);return _n_value_10969;})());
(void)(([&](){auto&& _n_array_10970=d::at(this->_n_grid_10862,(this->_n_rows_10858-1.0));auto _n_index_10971=0.0;auto _n_value_10972=d::String(u"╰");d::put(_n_array_10970,_n_index_10971,_n_value_10972);return _n_value_10972;})());
(void)(([&](){auto&& _n_array_10973=d::at(this->_n_grid_10862,(this->_n_rows_10858-1.0));auto _n_index_10974=(this->_n_cols_10857-1.0);auto _n_value_10975=d::String(u"╯");d::put(_n_array_10973,_n_index_10974,_n_value_10975);return _n_value_10975;})());
(void)(this->_n_text_10863(0.0,2.0,_n_name_10910));
d::String _n_keys_10913=d::String(u" tab next · space change · enter save ");
(void)(this->_n_text_10863((this->_n_rows_10858-1.0),((this->_n_cols_10857-2.0)-double(_n_keys_10913.size())),_n_keys_10913));
d::Array<d::String,false> _n_fields_10914=d::Array<d::String,false>{d::String(u"email"),d::String(u"units"),d::String(u"theme"),d::String(u"notify"),d::String(u"sync"),d::String(u"volume")};
(void)(d::forEach(_n_fields_10914,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_f_10915=_a0;
double _n_i_10916=_a1;
{
(void)(this->_n_text_10863((2.0+(2.0*_n_i_10916)),_n_LABEL_10848,_n_f_10915));
if(d::truth((_n_s_10906->_p_focus==_n_i_10916))){d::check_cancel();(void)(this->_n_text_10863((2.0+(2.0*_n_i_10916)),(_n_LABEL_10848-2.0),d::String(u">")));
}

}
}));
double _n_since_10917=(_n_p_10905-_n_s_10906->_p_typed);
d::String _n_caret_10918=((d::truth((_n_s_10906->_p_focus==0.0))&&d::truth(([&]()->bool{auto _n_logical_10976=(_n_since_10917<0.4);return d::truth(_n_logical_10976)?_n_logical_10976:(d::mod(std::floor(((_n_since_10917-0.4)/0.5)),2.0)==1.0);})()))?d::String(u"█"):d::String(u" "));
(void)(([&](){auto _n_argument_10977=2.0;auto _n_argument_10978=_n_FIELD_10849;auto _n_argument_10979=(d::string((d::string(d::String(u"[ "))+d::string(d::padEnd((d::string(_n_s_10906->_p_email)+d::string(_n_caret_10918)),_n_WIDE_10850))))+d::string(d::String(u" ]")));return this->_n_text_10863(_n_argument_10977,_n_argument_10978,_n_argument_10979);})());
(void)(([&](){auto _n_argument_10980=4.0;auto _n_argument_10981=_n_FIELD_10849;auto _n_argument_10982=(d::string((d::string((d::string(d::String(u"[ "))+d::string(d::padEnd(d::at(_n_UNITS_10845,_n_s_10906->_p_unit),(_n_WIDE_10850-1.0)))))+d::string((d::truth(_n_s_10906->_p_open)?d::String(u"^"):d::String(u"v")))))+d::string(d::String(u" ]")));return this->_n_text_10863(_n_argument_10980,_n_argument_10981,_n_argument_10982);})());
(void)(([&](){auto _n_argument_10983=6.0;auto _n_argument_10984=_n_FIELD_10849;auto _n_argument_10985=d::join(d::map(_n_THEMES_10846,[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_th_10919=_a0;
double _n_i_10920=_a1;
return (d::string((d::truth((_n_s_10906->_p_theme==_n_i_10920))?d::String(u"(*) "):d::String(u"( ) ")))+d::string(_n_th_10919));}),d::String(u"   "));return this->_n_text_10863(_n_argument_10983,_n_argument_10984,_n_argument_10985);})());
(void)(this->_n_text_10863(8.0,_n_FIELD_10849,(d::string((d::string(d::String(u"[x] replies   "))+d::string((d::truth(_n_s_10906->_p_mentions)?d::String(u"[x]"):d::String(u"[ ]")))))+d::string(d::String(u" mentions")))));
d::String _n_sw_10921=d::String(u"▕");
{double _n_i_10922=0.0;
for(;d::truth((_n_i_10922<6.0));(void)((_n_i_10922++))){d::check_cancel();(void)((_n_sw_10921=(d::string(_n_sw_10921)+d::string((d::truth((_n_i_10922<_n_s_10906->_p_knob))?d::String(u"▒"):(d::truth((_n_i_10922<(_n_s_10906->_p_knob+2.0)))?d::String(u"█"):d::String(u"░")))))));
}}
(void)(this->_n_text_10863(10.0,_n_FIELD_10849,(d::string((d::string(_n_sw_10921)+d::string(d::String(u"▏ "))))+d::string((d::truth((_n_s_10906->_p_knob==4.0))?d::String(u"on"):d::String(u"off"))))));
double _n_k_10923=d::round(((_n_s_10906->_p_volume/100.0)*(_n_TRACK_10852-1.0)));
d::String _n_track_10924=d::String(u"");
{double _n_i_10925=0.0;
for(;d::truth((_n_i_10925<_n_TRACK_10852));(void)((_n_i_10925++))){d::check_cancel();(void)((_n_track_10924=(d::string(_n_track_10924)+d::string((d::truth((_n_i_10925<_n_k_10923))?d::String(u"━"):(d::truth((_n_i_10925==_n_k_10923))?d::String(u"█"):d::String(u"─")))))));
}}
(void)(([&](){auto _n_argument_10986=12.0;auto _n_argument_10987=_n_FIELD_10849;auto _n_argument_10988=(d::string((d::string(_n_track_10924)+d::string(d::padStart(d::string(d::round(_n_s_10906->_p_volume)),5.0))))+d::string(d::String(u"%")));return this->_n_text_10863(_n_argument_10986,_n_argument_10987,_n_argument_10988);})());
d::String _n_save_10926=(d::truth(_n_s_10906->_p_pressed)?d::String(u"[▒▒save▒▒]"):d::String(u"[  save  ]"));
double _n_bc_10927=(_n_RIGHT_10851-10.0);
(void)(this->_n_text_10863(14.0,(_n_bc_10927-13.0),d::String(u"[ cancel ]")));
(void)(this->_n_text_10863(14.0,_n_bc_10927,_n_save_10926));
if(d::truth((_n_s_10906->_p_focus==6.0))){d::check_cancel();(void)(this->_n_text_10863(14.0,(_n_bc_10927-1.0),d::String(u">")));
}
if(d::truth(_n_s_10906->_p_saved)){d::check_cancel();(void)(this->_n_text_10863(14.0,_n_LABEL_10848,d::String(u"saved")));
}
if(d::truth(_n_s_10906->_p_open)){d::check_cancel();double _n_w_10928=(_n_RIGHT_10851-_n_FIELD_10849);
(void)(([&](){auto _n_argument_10989=5.0;auto _n_argument_10990=_n_FIELD_10849;auto _n_argument_10991=(d::string((d::string(d::String(u"┌"))+d::string(d::repeat(d::String(u"─"),(_n_w_10928-2.0)))))+d::string(d::String(u"┐")));return this->_n_text_10863(_n_argument_10989,_n_argument_10990,_n_argument_10991);})());
(void)(d::forEach(_n_UNITS_10845,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_u_10929=_a0;
double _n_i_10930=_a1;
([&](){auto _n_argument_10992=(6.0+_n_i_10930);auto _n_argument_10993=_n_FIELD_10849;auto _n_argument_10994=(d::string((d::string(d::String(u"│"))+d::string(d::padEnd((d::string((d::truth((_n_s_10906->_p_hi==_n_i_10930))?d::String(u" > "):d::String(u"   ")))+d::string(_n_u_10929)),(_n_w_10928-2.0)))))+d::string(d::String(u"│")));return this->_n_text_10863(_n_argument_10992,_n_argument_10993,_n_argument_10994);})();}));
(void)(([&](){auto _n_argument_10995=8.0;auto _n_argument_10996=_n_FIELD_10849;auto _n_argument_10997=(d::string((d::string(d::String(u"└"))+d::string(d::repeat(d::String(u"─"),(_n_w_10928-2.0)))))+d::string(d::String(u"┘")));return this->_n_text_10863(_n_argument_10995,_n_argument_10996,_n_argument_10997);})());
}
return d::join(d::map(this->_n_grid_10862,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_10931=_a0;
return d::join(_n_row_10931,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("form-controls").cols)*ascii::catalog_meta("form-controls").rows);auto _env=std::make_shared<_n_Record_10933>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &form_controls_meta(){return catalog_meta("form-controls");}
std::unique_ptr<Piece> make_form_controls(const AsciiPieceOptions &o){return std::make_unique<Native_form_controls>(o);}
}
