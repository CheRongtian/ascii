// Direct, statically typed C++ from src/pieces/split-flap.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30016;
struct _n_Record_30017;
struct _n_Record_30116;
struct _n_Record_30117;
struct _n_Record_30016{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_30017> _p_options{};
static std::shared_ptr<_n_Record_30016> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30016>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_30017>>(j["options"]);return out;}
};
struct _n_Record_30017{
d::String _p_title{};
d::String _p_start{};
d::Array<d::Array<d::String,false>,false> _p_flights{};
static std::shared_ptr<_n_Record_30017> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30017>();out->_p_title=d::decode<d::String>(j["title"]);out->_p_start=d::decode<d::String>(j["start"]);out->_p_flights=d::decode<d::Array<d::Array<d::String,false>,false>>(j["flights"]);return out;}
};
struct _n_Record_30116{
std::optional<d::String> _p_title{};
std::optional<d::String> _p_start{};
std::optional<d::Array<d::Array<d::String,false>,false>> _p_flights{};
static std::shared_ptr<_n_Record_30116> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30116>();out->_p_title=d::decode<std::optional<d::String>>(j["title"]);out->_p_start=d::decode<std::optional<d::String>>(j["start"]);out->_p_flights=d::decode<std::optional<d::Array<d::Array<d::String,false>,false>>>(j["flights"]);return out;}
};
struct _n_Record_30117{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_30117> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30117>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_30024(double _a0,double _a1,double _a2);
double _n_minutes_30025(d::String _a0);
d::String _n_hhmm_30026(double _a0);
std::shared_ptr<_n_Record_30016> _n_meta_30015=[](){return ([&](){auto _n_object_30122=std::make_shared<_n_Record_30016>();_n_object_30122->_p_name=d::String(u"split-flap");_n_object_30122->_p_category=d::String(u"type");_n_object_30122->_p_note=d::String(u"a departures board whose flaps riffle to each new line");_n_object_30122->_p_cols=61.0;_n_object_30122->_p_rows=18.0;_n_object_30122->_p_fps=15.0;_n_object_30122->_p_options=([&](){auto _n_object_30124=std::make_shared<_n_Record_30017>();_n_object_30124->_p_title=d::String(u"departures");_n_object_30124->_p_start=d::String(u"14:03");_n_object_30124->_p_flights=d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"14:05"),d::String(u"lisbon"),d::String(u"a4"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"14:15"),d::String(u"oslo"),d::String(u"b12"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"14:20"),d::String(u"nairobi"),d::String(u"c7"),d::String(u"delayed")},d::Array<d::String,false>{d::String(u"14:35"),d::String(u"lima"),d::String(u"a9"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"14:40"),d::String(u"reykjavik"),d::String(u"d21"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"14:50"),d::String(u"seoul"),d::String(u"b3"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"15:00"),d::String(u"marrakesh"),d::String(u"c14"),d::String(u"cancelled")},d::Array<d::String,false>{d::String(u"15:05"),d::String(u"helsinki"),d::String(u"a2"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"15:20"),d::String(u"auckland"),d::String(u"d8"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"15:25"),d::String(u"kyoto"),d::String(u"b16"),d::String(u"delayed")},d::Array<d::String,false>{d::String(u"15:35"),d::String(u"cape town"),d::String(u"c11"),d::String(u"on time")},d::Array<d::String,false>{d::String(u"15:45"),d::String(u"montreal"),d::String(u"a6"),d::String(u"on time")}};return _n_object_30124;})();return _n_object_30122;})();}();
const d::String _n_TEXT_30018=[](){return d::String(u" ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.-/'&");}();
const d::String _n_DIGITS_30019=[](){return d::String(u" 0123456789");}();
const double _n_STEP_30020=[](){return 3.0;}();
const double _n_LEAD_30021=[](){return 0.8;}();
const double _n_RATE_30022=[](){return 30.0;}();
const double _n_SHOWN_30023=[](){return 6.0;}();
double _n_hash_30024(double _a0,double _a1,double _a2){double _n_a_30047=_a0;
double _n_b_30048=_a1;
double _n_c_30049=_a2;
{
double _n_h_30050=([&](){auto _n_left_30125=([&](){auto _n_left_30127=d::imul(_n_a_30047,374761393.0);auto _n_right_30128=d::imul(_n_b_30048,668265263.0);return (_n_left_30127+_n_right_30128);})();auto _n_right_30126=d::imul(_n_c_30049,2246822519.0);return (_n_left_30125+_n_right_30126);})();
(void)((_n_h_30050=d::imul(double(d::i32(_n_h_30050)^d::i32(double(d::u32(_n_h_30050)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_30050)^d::i32(double(d::u32(_n_h_30050)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_minutes_30025(d::String _a0){d::String _n_s_30051=_a0;
{
std::shared_ptr<d::Match> _n_m_30052=d::Regex(u"^(\\d{1,2}):(\\d{2})$",u"").exec(d::trim(d::string(_n_s_30051)));
return (d::truth(_n_m_30052)?([&](){auto _n_left_30129=(d::number(d::at(_n_m_30052,1.0))*60.0);auto _n_right_30130=d::number(d::at(_n_m_30052,2.0));return (_n_left_30129+_n_right_30130);})():d::nan);

}
}

d::String _n_hhmm_30026(double _a0){double _n_m_30053=_a0;
{
(void)((_n_m_30053=d::mod((d::mod(_n_m_30053,1440.0)+1440.0),1440.0)));
return ([&](){auto _n_left_30131=d::padStart(d::string(std::floor((_n_m_30053/60.0))),2.0,d::String(u"0"));auto _n_right_30132=d::padStart(d::string(d::mod(_n_m_30053,60.0)),2.0,d::String(u"0"));return (d::string(_n_left_30131)+d::string(_n_right_30132));})();

}
}

struct Native_split_flap final:ascii::Piece{
d::String _n_title_30027{};
d::String _n_start_30028{};
d::Array<d::Array<d::String,false>,false> _n_flights_30029{};
double _n_cols_30030{};
double _n_rows_30031{};
d::Array<d::Array<d::String,false>,false> _n_list_30032{};
double _n_n_30033{};
d::Array<double,false> _n_at_30034{};
double _n_lap_30035{};
double _n_opening_30040{};
std::function<double(double)> _n_clock_30041{};
d::Array<std::shared_ptr<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>,false> _n_fields_30042{};
d::Array<d::Array<d::String,false>,false> _n_base_30044{};
std::function<d::String(double,std::shared_ptr<_n_Record_30117>)> _render;
double _n_minute_30036(double _a0){double _n_j_30057=_a0;
return (d::at(this->_n_at_30034,d::mod((d::mod(_n_j_30057,this->_n_n_30033)+this->_n_n_30033),this->_n_n_30033))+(std::floor((_n_j_30057/this->_n_n_30033))*this->_n_lap_30035));}

d::Array<d::String,false> _n_flight_30037(double _a0){double _n_j_30058=_a0;
return d::at(this->_n_list_30032,d::mod((d::mod(_n_j_30058,this->_n_n_30033)+this->_n_n_30033),this->_n_n_30033));}

d::String _n_up_30038(d::String _a0){d::String _n_s_30059=_a0;
return d::upper(d::string(([&]()->d::String{auto _n_logical_30171=_n_s_30059;return d::present(_n_logical_30171)?_n_logical_30171:d::String(u"");})()));}

double _n_first_30039(double _a0){double _n_s_30060=_a0;
return std::floor((_n_s_30060/2.0));}

double _n_time_30043(double _a0,double _a1,std::function<double(double)> _a2){double _n_r_30063=_a0;
double _n_c_30064=_a1;
std::function<double(double)> _n_m_30065=_a2;
return this->_n_fields_30042.push(std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30063,_n_c_30064,2.0,_n_DIGITS_30019,[=]( double _a0) mutable ->d::String{double _n_s_30067=_a0;
return d::slice(_n_hhmm_30026(_n_m_30065(_n_s_30067)),0.0,2.0);}),std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30063,(_n_c_30064+6.0),2.0,_n_DIGITS_30019,[=]( double _a0) mutable ->d::String{double _n_s_30068=_a0;
return d::slice(_n_hhmm_30026(_n_m_30065(_n_s_30068)),2.0);}));}

void _n_put_30045(double _a0,double _a1,d::String _a2){double _n_r_30084=_a0;
double _n_c_30085=_a1;
d::String _n_s_30086=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_30172;for(const auto &_v:_n_s_30086)_n_array_30172.push(_v);return _n_array_30172;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_30087=_a0;
double _n_i_30088=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_30173=((_n_c_30085+_n_i_30088)<(this->_n_cols_30030-1.0));return d::truth(_n_logical_30173)?std::variant<d::String,bool>(([&](){auto&& _n_array_30174=d::at(this->_n_base_30044,_n_r_30084);auto _n_index_30175=(_n_c_30085+_n_i_30088);auto _n_value_30176=_n_ch_30087;d::put(_n_array_30174,_n_index_30175,_n_value_30176);return _n_value_30176;})()):std::variant<d::String,bool>(_n_logical_30173);})();});}

explicit Native_split_flap(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30133=d::decode<std::shared_ptr<_n_Record_30116>>(_options.data);
this->_n_title_30027=(d::present(_n_binding_30133->_p_title)?d::read(_n_binding_30133->_p_title):_n_meta_30015->_p_options->_p_title);
this->_n_start_30028=(d::present(_n_binding_30133->_p_start)?d::read(_n_binding_30133->_p_start):_n_meta_30015->_p_options->_p_start);
this->_n_flights_30029=(d::present(_n_binding_30133->_p_flights)?d::read(_n_binding_30133->_p_flights):_n_meta_30015->_p_options->_p_flights);
auto _n_binding_30134=_n_meta_30015;
this->_n_cols_30030=_n_binding_30134->_p_cols;
this->_n_rows_30031=_n_binding_30134->_p_rows;
this->_n_list_30032=d::filter((d::truth(d::isArray(this->_n_flights_30029))?this->_n_flights_30029:d::Array<d::Array<d::String,false>,false>{}),[&]( d::Array<d::String,false> _a0) mutable ->bool{d::Array<d::String,false> _n_f_30054=_a0;
return ([&]()->bool{auto _n_logical_30135=d::isArray(_n_f_30054);return d::truth(_n_logical_30135)?(!d::truth(std::isnan(d::number(_n_minutes_30025(d::at(_n_f_30054,0.0)))))):_n_logical_30135;})();});
if(d::truth((!d::truth(double(this->_n_list_30032.size()))))){d::check_cancel();(void)((this->_n_list_30032=_n_meta_30015->_p_options->_p_flights));
}
this->_n_n_30033=double(this->_n_list_30032.size());
this->_n_at_30034=d::Array<double,false>{};
for(auto &&_n_item_30136:this->_n_list_30032){d::check_cancel();d::Array<d::String,false> _n_f_30055=_n_item_30136;
{
double _n_m_30056=_n_minutes_30025(d::at(_n_f_30055,0.0));
while((d::truth(double(this->_n_at_30034.size()))&&d::truth((_n_m_30056<d::at(this->_n_at_30034,(double(this->_n_at_30034.size())-1.0)))))){d::check_cancel();(void)((_n_m_30056=(_n_m_30056+1440.0)));
}
(void)(this->_n_at_30034.push(_n_m_30056));

}
}
this->_n_lap_30035=((d::at(this->_n_at_30034,(this->_n_n_30033-1.0))-d::at(this->_n_at_30034,0.0))+(d::truth((this->_n_n_30033>1.0))?([&](){auto _n_argument_30137=5.0;auto _n_argument_30138=d::round(((d::at(this->_n_at_30034,(this->_n_n_30033-1.0))-d::at(this->_n_at_30034,0.0))/(this->_n_n_30033-1.0)));return d::maximum({_n_argument_30137,_n_argument_30138});})():30.0));
this->_n_opening_30040=_n_minutes_30025(this->_n_start_30028);
this->_n_clock_30041=[=]( double _a0) mutable ->double{double _n_s_30061=_a0;
return ((d::truth((_n_s_30061==1.0))&&d::truth((!d::truth(std::isnan(d::number(this->_n_opening_30040))))))?this->_n_opening_30040:(d::truth(d::mod(_n_s_30061,2.0))?(this->_n_minute_30036(this->_n_first_30039(_n_s_30061))-2.0):(this->_n_minute_30036((this->_n_first_30039(_n_s_30061)-1.0))+1.0)));};
this->_n_fields_30042=d::Array<std::shared_ptr<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>,false>{};
(void)(this->_n_time_30043(1.0,(this->_n_cols_30030-11.0),this->_n_clock_30041));
{double _n_i_30069=0.0;
for(;d::truth((_n_i_30069<_n_SHOWN_30023));(void)((_n_i_30069++))){d::check_cancel();double _n_r_30070=(5.0+(_n_i_30069*2.0));
auto _n_live_30071=[&]( ) mutable ->bool{return (_n_i_30069<this->_n_n_30033);};
auto _n_f_30072=[&]( double _a0) mutable ->d::Array<d::String,false>{double _n_s_30073=_a0;
return this->_n_flight_30037((this->_n_first_30039(_n_s_30073)+_n_i_30069));};
auto _n_remark_30074=[&]( double _a0) mutable ->d::String{double _n_s_30075=_a0;
{
d::String _n_said_30076=d::trim(this->_n_up_30038(d::at(_n_f_30072(_n_s_30075),3.0)));
if((d::truth(_n_said_30076)&&d::truth((_n_said_30076!=d::String(u"ON TIME"))))){d::check_cancel();return _n_said_30076;
}
double _n_wait_30077=([&](){auto _n_left_30139=this->_n_minute_30036((this->_n_first_30039(_n_s_30075)+_n_i_30069));auto _n_right_30140=this->_n_clock_30041(_n_s_30075);return (_n_left_30139-_n_right_30140);})();
return (d::truth((_n_wait_30077<=3.0))?d::String(u"LAST CALL"):(d::truth((_n_wait_30077<=12.0))?d::String(u"BOARDING"):(d::truth((_n_wait_30077<=25.0))?d::String(u"GATE OPEN"):d::String(u"ON TIME"))));

}
};
(void)(this->_n_fields_30042.push(std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30070,2.0,2.0,_n_DIGITS_30019,[=]( double _a0) mutable ->d::String{double _n_s_30078=_a0;
return (d::truth(_n_live_30071())?d::slice(_n_hhmm_30026(this->_n_minute_30036((this->_n_first_30039(_n_s_30078)+_n_i_30069))),0.0,2.0):d::String(u""));}),std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30070,8.0,2.0,_n_DIGITS_30019,[=]( double _a0) mutable ->d::String{double _n_s_30079=_a0;
return (d::truth(_n_live_30071())?d::slice(_n_hhmm_30026(this->_n_minute_30036((this->_n_first_30039(_n_s_30079)+_n_i_30069))),2.0):d::String(u""));}),std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30070,14.0,9.0,_n_TEXT_30018,[=]( double _a0) mutable ->d::String{double _n_s_30080=_a0;
return (d::truth(_n_live_30071())?this->_n_up_30038(d::at(_n_f_30072(_n_s_30080),1.0)):d::String(u""));}),std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30070,34.0,3.0,_n_TEXT_30018,[=]( double _a0) mutable ->d::String{double _n_s_30081=_a0;
return (d::truth(_n_live_30071())?this->_n_up_30038(d::at(_n_f_30072(_n_s_30081),2.0)):d::String(u""));}),std::make_shared<std::tuple<double,double,double,d::String,std::function<d::String(double)>>>(_n_r_30070,42.0,9.0,_n_TEXT_30018,[=]( double _a0) mutable ->d::String{double _n_s_30082=_a0;
return (d::truth(_n_live_30071())?_n_remark_30074(_n_s_30082):d::String(u""));})));
}}
this->_n_base_30044=d::Array<d::Array<d::String,false>,false>{};
{double _n_r_30083=0.0;
for(;d::truth((_n_r_30083<this->_n_rows_30031));(void)((_n_r_30083++))){d::check_cancel();(void)(this->_n_base_30044.push(d::split((d::string((d::string(d::String(u"│"))+d::string(d::repeat(d::String(u" "),(this->_n_cols_30030-2.0)))))+d::string(d::String(u"│"))),d::String(u""))));
}}
(void)(([&](){auto&& _n_array_30141=this->_n_base_30044;auto _n_index_30142=0.0;auto _n_value_30143=d::split((d::string((d::string(d::String(u"╭"))+d::string(d::repeat(d::String(u"─"),(this->_n_cols_30030-2.0)))))+d::string(d::String(u"╮"))),d::String(u""));d::put(_n_array_30141,_n_index_30142,_n_value_30143);return _n_value_30143;})());
(void)(([&](){auto&& _n_array_30144=this->_n_base_30044;auto _n_index_30145=3.0;auto _n_value_30146=d::split((d::string((d::string(d::String(u"├"))+d::string(d::repeat(d::String(u"─"),(this->_n_cols_30030-2.0)))))+d::string(d::String(u"┤"))),d::String(u""));d::put(_n_array_30144,_n_index_30145,_n_value_30146);return _n_value_30146;})());
(void)(([&](){auto&& _n_array_30147=this->_n_base_30044;auto _n_index_30148=(this->_n_rows_30031-1.0);auto _n_value_30149=d::split((d::string((d::string(d::String(u"╰"))+d::string(d::repeat(d::String(u"─"),(this->_n_cols_30030-2.0)))))+d::string(d::String(u"╯"))),d::String(u""));d::put(_n_array_30147,_n_index_30148,_n_value_30149);return _n_value_30149;})());
(void)(([&](){auto _n_argument_30150=1.0;auto _n_argument_30151=2.0;auto _n_argument_30152=d::join(([&](){d::Array<d::String,false> _n_array_30153;for(const auto &_v:d::slice(this->_n_up_30038(this->_n_title_30027),0.0,18.0))_n_array_30153.push(_v);return _n_array_30153;})(),d::String(u" "));return this->_n_put_30045(_n_argument_30150,_n_argument_30151,_n_argument_30152);})());
(void)(this->_n_put_30045(4.0,2.0,d::String(u"time")));
(void)(this->_n_put_30045(4.0,14.0,d::String(u"destination")));
(void)(this->_n_put_30045(4.0,34.0,d::String(u"gate")));
(void)(this->_n_put_30045(4.0,42.0,d::String(u"remarks")));
for(auto &&_n_item_30154:this->_n_fields_30042){d::check_cancel();auto _n_binding_30155=_n_item_30154;
double _n_r_30089=std::get<0>(*_n_binding_30155);
double _n_c_30090=std::get<1>(*_n_binding_30155);
double _n_len_30091=std::get<2>(*_n_binding_30155);
{double _n_i_30092=0.0;
for(;d::truth((_n_i_30092<_n_len_30091));(void)((_n_i_30092++))){d::check_cancel();(void)(([&](){auto&& _n_array_30156=d::at(this->_n_base_30044,(_n_r_30089+1.0));auto _n_index_30157=(_n_c_30090+(2.0*_n_i_30092));auto _n_value_30158=d::String(u"▔");d::put(_n_array_30156,_n_index_30157,_n_value_30158);return _n_value_30158;})());
}}
}
{double _n_i_30093=(-d::number(1.0));
for(;d::truth((_n_i_30093<_n_SHOWN_30023));(void)((_n_i_30093++))){d::check_cancel();if(d::truth((_n_i_30093<this->_n_n_30033))){d::check_cancel();(void)(this->_n_put_30045((d::truth((_n_i_30093<0.0))?1.0:(5.0+(_n_i_30093*2.0))),(d::truth((_n_i_30093<0.0))?(this->_n_cols_30030-7.0):6.0),d::String(u":")));
}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_30117> _a1) mutable ->d::String{double _n_t_30094=_a0;
{
double _n_v_30095=((_n_t_30094-_n_LEAD_30021)+_n_STEP_30020);
double _n_k_30096=std::floor((_n_v_30095/_n_STEP_30020));
double _n_since_30097=(_n_v_30095-(_n_k_30096*_n_STEP_30020));
double _n_s_30098=(1.0+_n_k_30096);
d::Array<d::Array<d::String,false>,false> _n_grid_30099=d::map(this->_n_base_30044,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_30100=_a0;
return _n_row_30100.slice();});
for(auto &&_n_item_30159:this->_n_fields_30042){d::check_cancel();auto _n_binding_30160=_n_item_30159;
double _n_r_30101=std::get<0>(*_n_binding_30160);
double _n_c_30102=std::get<1>(*_n_binding_30160);
double _n_len_30103=std::get<2>(*_n_binding_30160);
d::String _n_drum_30104=std::get<3>(*_n_binding_30160);
std::function<d::String(double)> _n_text_30105=std::get<4>(*_n_binding_30160);
{
d::String _n_to_30106=d::slice(d::padEnd(_n_text_30105(_n_s_30098),_n_len_30103),0.0,_n_len_30103);
d::String _n_from_30107=d::slice(d::padEnd(_n_text_30105((_n_s_30098-1.0)),_n_len_30103),0.0,_n_len_30103);
{double _n_i_30108=0.0;
for(;d::truth((_n_i_30108<_n_len_30103));(void)((_n_i_30108++))){d::check_cancel();double _n_a_30109=([&](){auto _n_argument_30161=0.0;auto _n_argument_30162=d::indexOf(_n_drum_30104,d::at(_n_from_30107,_n_i_30108));return d::maximum({_n_argument_30161,_n_argument_30162});})();
double _n_b_30110=([&](){auto _n_argument_30163=0.0;auto _n_argument_30164=d::indexOf(_n_drum_30104,d::at(_n_to_30106,_n_i_30108));return d::maximum({_n_argument_30163,_n_argument_30164});})();
d::String _n_ch_30111=d::at(_n_drum_30104,_n_b_30110);
if(d::truth((_n_a_30109!=_n_b_30110))){d::check_cancel();double _n_begin_30112=(((_n_r_30101*0.02)+((_n_c_30102+(2.0*_n_i_30108))*0.004))+(_n_hash_30024(_n_r_30101,(_n_c_30102+_n_i_30108),_n_s_30098)*0.12));
double _n_flips_30113=std::floor((d::maximum({0.0,(_n_since_30097-_n_begin_30112)})*_n_RATE_30022));
double _n_need_30114=d::mod(((_n_b_30110-_n_a_30109)+double(_n_drum_30104.size())),double(_n_drum_30104.size()));
if(d::truth((_n_flips_30113<_n_need_30114))){d::check_cancel();(void)((_n_ch_30111=d::at(_n_drum_30104,d::mod((_n_a_30109+_n_flips_30113),double(_n_drum_30104.size())))));
if(d::truth((_n_since_30097>=_n_begin_30112))){d::check_cancel();(void)(([&](){auto&& _n_array_30165=d::at(_n_grid_30099,(_n_r_30101+1.0));auto _n_index_30166=(_n_c_30102+(2.0*_n_i_30108));auto _n_value_30167=d::String(u"▀");d::put(_n_array_30165,_n_index_30166,_n_value_30167);return _n_value_30167;})());
}
}
}
(void)(([&](){auto&& _n_array_30168=d::at(_n_grid_30099,_n_r_30101);auto _n_index_30169=(_n_c_30102+(2.0*_n_i_30108));auto _n_value_30170=_n_ch_30111;d::put(_n_array_30168,_n_index_30169,_n_value_30170);return _n_value_30170;})());
}}

}
}
return d::join(d::map(_n_grid_30099,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_30115=_a0;
return d::join(_n_row_30115,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("split-flap").cols)*ascii::catalog_meta("split-flap").rows);auto _env=std::make_shared<_n_Record_30117>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &split_flap_meta(){return catalog_meta("split-flap");}
std::unique_ptr<Piece> make_split_flap(const AsciiPieceOptions &o){return std::make_unique<Native_split_flap>(o);}
}
