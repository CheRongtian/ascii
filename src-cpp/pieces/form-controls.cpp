// Direct, statically typed C++ from src/pieces/form-controls.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10841;
struct _n_Record_10842;
struct _n_Record_10853;
struct _n_Record_10854;
struct _n_Record_10931;
struct _n_Record_10932;
struct _n_Record_10841{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_10842> _p_options{};
static std::shared_ptr<_n_Record_10841> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10841>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_10842>>(j["options"]);return out;}
};
struct _n_Record_10842{
d::String _p_title{};
static std::shared_ptr<_n_Record_10842> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10842>();out->_p_title=d::decode<d::String>(j["title"]);return out;}
};
struct _n_Record_10853{
d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10854>)>>>,false> _p_ev{};
double _p_total{};
double _p_start{};
static std::shared_ptr<_n_Record_10853> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10853>();out->_p_ev=d::decode<d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10854>)>>>,false>>(j["ev"]);out->_p_total=d::decode<double>(j["total"]);out->_p_start=d::decode<double>(j["start"]);return out;}
};
struct _n_Record_10854{
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
static std::shared_ptr<_n_Record_10854> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10854>();out->_p_focus=d::decode<double>(j["focus"]);out->_p_email=d::decode<d::String>(j["email"]);out->_p_typed=d::decode<double>(j["typed"]);out->_p_unit=d::decode<double>(j["unit"]);out->_p_open=d::decode<bool>(j["open"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_theme=d::decode<double>(j["theme"]);out->_p_mentions=d::decode<bool>(j["mentions"]);out->_p_knob=d::decode<double>(j["knob"]);out->_p_volume=d::decode<double>(j["volume"]);out->_p_pressed=d::decode<bool>(j["pressed"]);out->_p_saved=d::decode<bool>(j["saved"]);return out;}
};
struct _n_Record_10931{
std::optional<d::String> _p_title{};
static std::shared_ptr<_n_Record_10931> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10931>();out->_p_title=d::decode<std::optional<d::String>>(j["title"]);return out;}
};
struct _n_Record_10932{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10932> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10932>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::shared_ptr<_n_Record_10853> _n_script_10852();
std::shared_ptr<_n_Record_10841> _n_meta_10840=[](){return ([&](){auto _n_object_10937=std::make_shared<_n_Record_10841>();_n_object_10937->_p_name=d::String(u"form controls");_n_object_10937->_p_category=d::String(u"ui");_n_object_10937->_p_note=d::String(u"a terminal style form being filled in, field by field");_n_object_10937->_p_cols=54.0;_n_object_10937->_p_rows=16.0;_n_object_10937->_p_fps=15.0;_n_object_10937->_p_options=([&](){auto _n_object_10939=std::make_shared<_n_Record_10842>();_n_object_10939->_p_title=d::String(u"preferences");return _n_object_10939;})();return _n_object_10937;})();}();
d::Array<d::String,false> _n_EMAILS_10843=[](){return d::Array<d::String,false>{d::String(u"you@example.com"),d::String(u"team@example.com")};}();
d::Array<d::String,false> _n_UNITS_10844=[](){return d::Array<d::String,false>{d::String(u"metric"),d::String(u"imperial")};}();
d::Array<d::String,false> _n_THEMES_10845=[](){return d::Array<d::String,false>{d::String(u"light"),d::String(u"dark"),d::String(u"system")};}();
d::Array<double,false> _n_VOLUME_10846=[](){return d::Array<double,false>{40.0,75.0};}();
const double _n_LABEL_10847=[](){return 4.0;}();
const double _n_FIELD_10848=[](){return 14.0;}();
const double _n_WIDE_10849=[](){return 32.0;}();
const double _n_RIGHT_10850=[](){return ((_n_FIELD_10848+_n_WIDE_10849)+4.0);}();
const double _n_TRACK_10851=[](){return 30.0;}();
std::shared_ptr<_n_Record_10853> _n_script_10852(){{
d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10854>)>>>,false> _n_ev_10864=d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10854>)>>>,false>{};
double _n_T_10866=0.0;
double _n_start_10867=0.0;
auto _n_at_10868=[&]( double _a0,std::function<void(std::shared_ptr<_n_Record_10854>)> _a1) mutable ->double{double _n_dt_10869=_a0;
std::function<void(std::shared_ptr<_n_Record_10854>)> _n_fn_10870=_a1;
return _n_ev_10864.push(std::make_shared<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10854>)>>>((_n_T_10866=(_n_T_10866+_n_dt_10869)),_n_fn_10870));};
for(auto &&_n_item_10940:d::Array<double,false>{1.0,0.0}){d::check_cancel();double _n_b_10872=_n_item_10940;
{
double _n_a_10873=(1.0-_n_b_10872);
(void)(_n_at_10868(0.35,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10874=_a0;
([&](){(void)((_n_s_10874->_p_focus=0.0));})();}));
(void)(_n_at_10868(0.3,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10875=_a0;
((_n_s_10875->_p_email=d::String(u"")),([&](){(void)((_n_s_10875->_p_typed=_n_T_10866));})());}));
{double _n_i_10876=1.0;
for(;d::truth((_n_i_10876<=double(d::at(_n_EMAILS_10843,_n_b_10872).size())));(void)((_n_i_10876++))){d::check_cancel();d::String _n_text_10877=d::slice(d::at(_n_EMAILS_10843,_n_b_10872),0.0,_n_i_10876);
double _n_when_10878=(_n_T_10866+0.07);
(void)(_n_at_10868(0.07,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10879=_a0;
((_n_s_10879->_p_email=_n_text_10877),([&](){(void)((_n_s_10879->_p_typed=_n_when_10878));})());}));
}}
if(d::truth(_n_b_10872)){d::check_cancel();(void)((_n_start_10867=(_n_T_10866+0.2)));
}
(void)(_n_at_10868(0.9,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10880=_a0;
([&](){(void)((_n_s_10880->_p_focus=1.0));})();}));
(void)(_n_at_10868(0.3,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10881=_a0;
((_n_s_10881->_p_open=true),([&](){(void)((_n_s_10881->_p_hi=_n_a_10873));})());}));
(void)(_n_at_10868(0.4,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10882=_a0;
([&](){(void)((_n_s_10882->_p_hi=_n_b_10872));})();}));
(void)(_n_at_10868(0.35,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10883=_a0;
((_n_s_10883->_p_unit=_n_b_10872),([&](){(void)((_n_s_10883->_p_open=false));})());}));
(void)(_n_at_10868(0.45,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10884=_a0;
([&](){(void)((_n_s_10884->_p_focus=2.0));})();}));
(void)(_n_at_10868(0.35,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10885=_a0;
([&](){(void)((_n_s_10885->_p_theme=(d::truth(_n_b_10872)?1.0:0.0)));})();}));
(void)(_n_at_10868(0.45,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10886=_a0;
([&](){(void)((_n_s_10886->_p_focus=3.0));})();}));
(void)(_n_at_10868(0.35,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10887=_a0;
([&](){(void)((_n_s_10887->_p_mentions=(!d::truth((!d::truth(_n_b_10872))))));})();}));
(void)(_n_at_10868(0.45,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10888=_a0;
([&](){(void)((_n_s_10888->_p_focus=4.0));})();}));
{double _n_k_10889=1.0;
for(;d::truth((_n_k_10889<=4.0));(void)((_n_k_10889++))){d::check_cancel();(void)(_n_at_10868((d::truth((_n_k_10889==1.0))?0.35:0.07),[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10890=_a0;
([&](){(void)((_n_s_10890->_p_knob=(d::truth(_n_b_10872)?_n_k_10889:(4.0-_n_k_10889))));})();}));
}}
(void)(_n_at_10868(0.45,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10891=_a0;
([&](){(void)((_n_s_10891->_p_focus=5.0));})();}));
{double _n_k_10892=1.0;
for(;d::truth((_n_k_10892<=7.0));(void)((_n_k_10892++))){d::check_cancel();double _n_v_10893=(d::at(_n_VOLUME_10846,_n_a_10873)+(((d::at(_n_VOLUME_10846,_n_b_10872)-d::at(_n_VOLUME_10846,_n_a_10873))*_n_k_10892)/7.0));
(void)(_n_at_10868((d::truth((_n_k_10892==1.0))?0.35:0.07),[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10894=_a0;
([&](){(void)((_n_s_10894->_p_volume=_n_v_10893));})();}));
}}
(void)(_n_at_10868(0.45,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10895=_a0;
([&](){(void)((_n_s_10895->_p_focus=6.0));})();}));
(void)(_n_at_10868(0.4,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10896=_a0;
([&](){(void)((_n_s_10896->_p_pressed=true));})();}));
(void)(_n_at_10868(0.18,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10897=_a0;
((_n_s_10897->_p_pressed=false),([&](){(void)((_n_s_10897->_p_saved=true));})());}));
(void)(_n_at_10868(1.3,[=]( std::shared_ptr<_n_Record_10854> _a0) mutable ->void{std::shared_ptr<_n_Record_10854> _n_s_10898=_a0;
([&](){(void)((_n_s_10898->_p_saved=false));})();}));

}
}
return ([&](){auto _n_object_10942=std::make_shared<_n_Record_10853>();_n_object_10942->_p_ev=_n_ev_10864;_n_object_10942->_p_total=(_n_T_10866+0.4);_n_object_10942->_p_start=_n_start_10867;return _n_object_10942;})();

}
}

struct Native_form_controls final:ascii::Piece{
d::String _n_title_10855{};
double _n_cols_10856{};
double _n_rows_10857{};
d::Array<std::shared_ptr<std::tuple<double,std::function<void(std::shared_ptr<_n_Record_10854>)>>>,false> _n_ev_10858{};
double _n_total_10859{};
double _n_start_10860{};
d::Array<d::Array<d::String,false>,false> _n_grid_10861{};
std::function<d::String(double,std::shared_ptr<_n_Record_10932>)> _render;
void _n_text_10862(double _a0,double _a1,d::String _a2){double _n_r_10899=_a0;
double _n_c_10900=_a1;
d::String _n_s_10901=_a2;
{
{double _n_i_10902=0.0;
for(;(d::truth((_n_i_10902<double(_n_s_10901.size())))&&d::truth(((_n_c_10900+_n_i_10902)<(this->_n_cols_10856-1.0))));(void)((_n_i_10902++))){d::check_cancel();(void)(([&](){auto&& _n_array_10997=d::at(this->_n_grid_10861,_n_r_10899);auto _n_index_10998=(_n_c_10900+_n_i_10902);auto _n_value_10999=d::at(_n_s_10901,_n_i_10902);d::put(_n_array_10997,_n_index_10998,_n_value_10999);return _n_value_10999;})());
}}

}
}

explicit Native_form_controls(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10943=d::decode<std::shared_ptr<_n_Record_10931>>(_options.data);
this->_n_title_10855=(d::present(_n_binding_10943->_p_title)?d::read(_n_binding_10943->_p_title):d::String(u"preferences"));
auto _n_binding_10944=_n_meta_10840;
this->_n_cols_10856=_n_binding_10944->_p_cols;
this->_n_rows_10857=_n_binding_10944->_p_rows;
auto _n_binding_10945=_n_script_10852();
this->_n_ev_10858=_n_binding_10945->_p_ev;
this->_n_total_10859=_n_binding_10945->_p_total;
this->_n_start_10860=_n_binding_10945->_p_start;
this->_n_grid_10861=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_10857,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_10856));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_10932> _a1) mutable ->d::String{double _n_t_10903=_a0;
{
double _n_p_10904=d::mod((_n_t_10903+this->_n_start_10860),this->_n_total_10859);
std::shared_ptr<_n_Record_10854> _n_s_10905=([&](){auto _n_object_10947=std::make_shared<_n_Record_10854>();_n_object_10947->_p_focus=6.0;_n_object_10947->_p_email=d::at(_n_EMAILS_10843,0.0);_n_object_10947->_p_typed=(-d::number(9.0));_n_object_10947->_p_unit=0.0;_n_object_10947->_p_open=false;_n_object_10947->_p_hi=0.0;_n_object_10947->_p_theme=0.0;_n_object_10947->_p_mentions=false;_n_object_10947->_p_knob=0.0;_n_object_10947->_p_volume=d::at(_n_VOLUME_10846,0.0);_n_object_10947->_p_pressed=false;_n_object_10947->_p_saved=false;return _n_object_10947;})();
for(auto &&_n_item_10948:this->_n_ev_10858){d::check_cancel();auto _n_binding_10949=_n_item_10948;
double _n_when_10906=std::get<0>(*_n_binding_10949);
std::function<void(std::shared_ptr<_n_Record_10854>)> _n_fn_10907=std::get<1>(*_n_binding_10949);
{
if(d::truth((_n_when_10906>_n_p_10904))){d::check_cancel();break;
}
(void)(_n_fn_10907(_n_s_10905));

}
}
for(auto &&_n_item_10950:this->_n_grid_10861){d::check_cancel();d::Array<d::String,false> _n_row_10908=_n_item_10950;
(void)(_n_row_10908.fill(d::String(u" ")));
}
d::String _n_name_10909=(d::String(u" ")+d::string(this->_n_title_10855)+d::String(u" "));
{double _n_c_10910=1.0;
for(;d::truth((_n_c_10910<(this->_n_cols_10856-1.0)));(void)((_n_c_10910++))){d::check_cancel();(void)(([&](){auto&& _n_array_10951=d::at(this->_n_grid_10861,0.0);auto _n_index_10952=_n_c_10910;auto _n_value_10953=([&](){auto&& _n_array_10954=d::at(this->_n_grid_10861,(this->_n_rows_10857-1.0));auto _n_index_10955=_n_c_10910;auto _n_value_10956=d::String(u"─");d::put(_n_array_10954,_n_index_10955,_n_value_10956);return _n_value_10956;})();d::put(_n_array_10951,_n_index_10952,_n_value_10953);return _n_value_10953;})());
}}
{double _n_r_10911=1.0;
for(;d::truth((_n_r_10911<(this->_n_rows_10857-1.0)));(void)((_n_r_10911++))){d::check_cancel();(void)(([&](){auto&& _n_array_10957=d::at(this->_n_grid_10861,_n_r_10911);auto _n_index_10958=0.0;auto _n_value_10959=([&](){auto&& _n_array_10960=d::at(this->_n_grid_10861,_n_r_10911);auto _n_index_10961=(this->_n_cols_10856-1.0);auto _n_value_10962=d::String(u"│");d::put(_n_array_10960,_n_index_10961,_n_value_10962);return _n_value_10962;})();d::put(_n_array_10957,_n_index_10958,_n_value_10959);return _n_value_10959;})());
}}
(void)(([&](){auto&& _n_array_10963=d::at(this->_n_grid_10861,0.0);auto _n_index_10964=0.0;auto _n_value_10965=d::String(u"╭");d::put(_n_array_10963,_n_index_10964,_n_value_10965);return _n_value_10965;})());
(void)(([&](){auto&& _n_array_10966=d::at(this->_n_grid_10861,0.0);auto _n_index_10967=(this->_n_cols_10856-1.0);auto _n_value_10968=d::String(u"╮");d::put(_n_array_10966,_n_index_10967,_n_value_10968);return _n_value_10968;})());
(void)(([&](){auto&& _n_array_10969=d::at(this->_n_grid_10861,(this->_n_rows_10857-1.0));auto _n_index_10970=0.0;auto _n_value_10971=d::String(u"╰");d::put(_n_array_10969,_n_index_10970,_n_value_10971);return _n_value_10971;})());
(void)(([&](){auto&& _n_array_10972=d::at(this->_n_grid_10861,(this->_n_rows_10857-1.0));auto _n_index_10973=(this->_n_cols_10856-1.0);auto _n_value_10974=d::String(u"╯");d::put(_n_array_10972,_n_index_10973,_n_value_10974);return _n_value_10974;})());
(void)(this->_n_text_10862(0.0,2.0,_n_name_10909));
d::String _n_keys_10912=d::String(u" tab next · space change · enter save ");
(void)(this->_n_text_10862((this->_n_rows_10857-1.0),((this->_n_cols_10856-2.0)-double(_n_keys_10912.size())),_n_keys_10912));
d::Array<d::String,false> _n_fields_10913=d::Array<d::String,false>{d::String(u"email"),d::String(u"units"),d::String(u"theme"),d::String(u"notify"),d::String(u"sync"),d::String(u"volume")};
(void)(d::forEach(_n_fields_10913,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_f_10914=_a0;
double _n_i_10915=_a1;
{
(void)(this->_n_text_10862((2.0+(2.0*_n_i_10915)),_n_LABEL_10847,_n_f_10914));
if(d::truth((_n_s_10905->_p_focus==_n_i_10915))){d::check_cancel();(void)(this->_n_text_10862((2.0+(2.0*_n_i_10915)),(_n_LABEL_10847-2.0),d::String(u">")));
}

}
}));
double _n_since_10916=(_n_p_10904-_n_s_10905->_p_typed);
d::String _n_caret_10917=((d::truth((_n_s_10905->_p_focus==0.0))&&d::truth(([&]()->bool{auto _n_logical_10975=(_n_since_10916<0.4);return d::truth(_n_logical_10975)?_n_logical_10975:(d::mod(std::floor(((_n_since_10916-0.4)/0.5)),2.0)==1.0);})()))?d::String(u"█"):d::String(u" "));
(void)(([&](){auto _n_argument_10976=2.0;auto _n_argument_10977=_n_FIELD_10848;auto _n_argument_10978=(d::string((d::string(d::String(u"[ "))+d::string(d::padEnd((d::string(_n_s_10905->_p_email)+d::string(_n_caret_10917)),_n_WIDE_10849))))+d::string(d::String(u" ]")));return this->_n_text_10862(_n_argument_10976,_n_argument_10977,_n_argument_10978);})());
(void)(([&](){auto _n_argument_10979=4.0;auto _n_argument_10980=_n_FIELD_10848;auto _n_argument_10981=(d::string((d::string((d::string(d::String(u"[ "))+d::string(d::padEnd(d::at(_n_UNITS_10844,_n_s_10905->_p_unit),(_n_WIDE_10849-1.0)))))+d::string((d::truth(_n_s_10905->_p_open)?d::String(u"^"):d::String(u"v")))))+d::string(d::String(u" ]")));return this->_n_text_10862(_n_argument_10979,_n_argument_10980,_n_argument_10981);})());
(void)(([&](){auto _n_argument_10982=6.0;auto _n_argument_10983=_n_FIELD_10848;auto _n_argument_10984=d::join(d::map(_n_THEMES_10845,[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_th_10918=_a0;
double _n_i_10919=_a1;
return (d::string((d::truth((_n_s_10905->_p_theme==_n_i_10919))?d::String(u"(*) "):d::String(u"( ) ")))+d::string(_n_th_10918));}),d::String(u"   "));return this->_n_text_10862(_n_argument_10982,_n_argument_10983,_n_argument_10984);})());
(void)(this->_n_text_10862(8.0,_n_FIELD_10848,(d::string((d::string(d::String(u"[x] replies   "))+d::string((d::truth(_n_s_10905->_p_mentions)?d::String(u"[x]"):d::String(u"[ ]")))))+d::string(d::String(u" mentions")))));
d::String _n_sw_10920=d::String(u"▕");
{double _n_i_10921=0.0;
for(;d::truth((_n_i_10921<6.0));(void)((_n_i_10921++))){d::check_cancel();(void)((_n_sw_10920=(d::string(_n_sw_10920)+d::string((d::truth((_n_i_10921<_n_s_10905->_p_knob))?d::String(u"▒"):(d::truth((_n_i_10921<(_n_s_10905->_p_knob+2.0)))?d::String(u"█"):d::String(u"░")))))));
}}
(void)(this->_n_text_10862(10.0,_n_FIELD_10848,(d::string((d::string(_n_sw_10920)+d::string(d::String(u"▏ "))))+d::string((d::truth((_n_s_10905->_p_knob==4.0))?d::String(u"on"):d::String(u"off"))))));
double _n_k_10922=d::round(((_n_s_10905->_p_volume/100.0)*(_n_TRACK_10851-1.0)));
d::String _n_track_10923=d::String(u"");
{double _n_i_10924=0.0;
for(;d::truth((_n_i_10924<_n_TRACK_10851));(void)((_n_i_10924++))){d::check_cancel();(void)((_n_track_10923=(d::string(_n_track_10923)+d::string((d::truth((_n_i_10924<_n_k_10922))?d::String(u"━"):(d::truth((_n_i_10924==_n_k_10922))?d::String(u"█"):d::String(u"─")))))));
}}
(void)(([&](){auto _n_argument_10985=12.0;auto _n_argument_10986=_n_FIELD_10848;auto _n_argument_10987=(d::string((d::string(_n_track_10923)+d::string(d::padStart(d::string(d::round(_n_s_10905->_p_volume)),5.0))))+d::string(d::String(u"%")));return this->_n_text_10862(_n_argument_10985,_n_argument_10986,_n_argument_10987);})());
d::String _n_save_10925=(d::truth(_n_s_10905->_p_pressed)?d::String(u"[▒▒save▒▒]"):d::String(u"[  save  ]"));
double _n_bc_10926=(_n_RIGHT_10850-10.0);
(void)(this->_n_text_10862(14.0,(_n_bc_10926-13.0),d::String(u"[ cancel ]")));
(void)(this->_n_text_10862(14.0,_n_bc_10926,_n_save_10925));
if(d::truth((_n_s_10905->_p_focus==6.0))){d::check_cancel();(void)(this->_n_text_10862(14.0,(_n_bc_10926-1.0),d::String(u">")));
}
if(d::truth(_n_s_10905->_p_saved)){d::check_cancel();(void)(this->_n_text_10862(14.0,_n_LABEL_10847,d::String(u"saved")));
}
if(d::truth(_n_s_10905->_p_open)){d::check_cancel();double _n_w_10927=(_n_RIGHT_10850-_n_FIELD_10848);
(void)(([&](){auto _n_argument_10988=5.0;auto _n_argument_10989=_n_FIELD_10848;auto _n_argument_10990=(d::string((d::string(d::String(u"┌"))+d::string(d::repeat(d::String(u"─"),(_n_w_10927-2.0)))))+d::string(d::String(u"┐")));return this->_n_text_10862(_n_argument_10988,_n_argument_10989,_n_argument_10990);})());
(void)(d::forEach(_n_UNITS_10844,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_u_10928=_a0;
double _n_i_10929=_a1;
([&](){auto _n_argument_10991=(6.0+_n_i_10929);auto _n_argument_10992=_n_FIELD_10848;auto _n_argument_10993=(d::string((d::string(d::String(u"│"))+d::string(d::padEnd((d::string((d::truth((_n_s_10905->_p_hi==_n_i_10929))?d::String(u" > "):d::String(u"   ")))+d::string(_n_u_10928)),(_n_w_10927-2.0)))))+d::string(d::String(u"│")));return this->_n_text_10862(_n_argument_10991,_n_argument_10992,_n_argument_10993);})();}));
(void)(([&](){auto _n_argument_10994=8.0;auto _n_argument_10995=_n_FIELD_10848;auto _n_argument_10996=(d::string((d::string(d::String(u"└"))+d::string(d::repeat(d::String(u"─"),(_n_w_10927-2.0)))))+d::string(d::String(u"┘")));return this->_n_text_10862(_n_argument_10994,_n_argument_10995,_n_argument_10996);})());
}
return d::join(d::map(this->_n_grid_10861,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_10930=_a0;
return d::join(_n_row_10930,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("form-controls").cols)*ascii::catalog_meta("form-controls").rows);auto _env=std::make_shared<_n_Record_10932>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &form_controls_meta(){return catalog_meta("form-controls");}
std::unique_ptr<Piece> make_form_controls(const AsciiPieceOptions &o){return std::make_unique<Native_form_controls>(o);}
}
