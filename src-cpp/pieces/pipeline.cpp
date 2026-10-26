// Direct, statically typed C++ from src/pieces/pipeline.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24104;
struct _n_Record_24108;
struct _n_Record_24109;
struct _n_Record_24111;
struct _n_Record_24112;
struct _n_Record_24191;
struct _n_Record_24192;
struct _n_Record_24193;
struct _n_Record_24195;
struct _n_Record_24104{
d::String _p_branch{};
d::String _p_sha{};
double _p_speed{};
std::shared_ptr<std::tuple<d::String,double>> _p_fail{};
static std::shared_ptr<_n_Record_24104> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24104>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_sha=d::decode<d::String>(j["sha"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_fail=d::decode<std::shared_ptr<std::tuple<d::String,double>>>(j["fail"]);return out;}
};
struct _n_Record_24108{
d::Array<std::shared_ptr<_n_Record_24109>,false> _p_plan{};
double _p_total{};
static std::shared_ptr<_n_Record_24108> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24108>();out->_p_plan=d::decode<d::Array<std::shared_ptr<_n_Record_24109>,false>>(j["plan"]);out->_p_total=d::decode<double>(j["total"]);return out;}
};
struct _n_Record_24109{
std::shared_ptr<_n_Record_24104> _p_run{};
double _p_start{};
double _p_end{};
d::Array<std::optional<d::Array<double,false>>,false> _p_spans{};
double _p_fails{};
double _p_reach{};
static std::shared_ptr<_n_Record_24109> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24109>();out->_p_run=d::decode<std::shared_ptr<_n_Record_24104>>(j["run"]);out->_p_start=d::decode<double>(j["start"]);out->_p_end=d::decode<double>(j["end"]);out->_p_spans=d::decode<d::Array<std::optional<d::Array<double,false>>,false>>(j["spans"]);out->_p_fails=d::decode<double>(j["fails"]);out->_p_reach=d::decode<double>(j["reach"]);return out;}
};
struct _n_Record_24111{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_24112> _p_options{};
double _p_loop{};
static std::shared_ptr<_n_Record_24111> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24111>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_24112>>(j["options"]);out->_p_loop=d::decode<double>(j["loop"]);return out;}
};
struct _n_Record_24112{
d::Array<d::String,false> _p_stages{};
static std::shared_ptr<_n_Record_24112> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24112>();out->_p_stages=d::decode<d::Array<d::String,false>>(j["stages"]);return out;}
};
struct _n_Record_24191{
std::optional<d::Array<d::String,false>> _p_stages{};
static std::shared_ptr<_n_Record_24191> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24191>();out->_p_stages=d::decode<std::optional<d::Array<d::String,false>>>(j["stages"]);return out;}
};
struct _n_Record_24192{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24192> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24192>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_24193{
d::String _p_branch{};
d::String _p_sha{};
double _p_speed{};
static std::shared_ptr<_n_Record_24193> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24193>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_sha=d::decode<d::String>(j["sha"]);out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_24195{
d::String _p_branch{};
d::String _p_sha{};
double _p_speed{};
std::shared_ptr<std::tuple<d::String,double>> _p_fail{};
static std::shared_ptr<_n_Record_24195> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24195>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_sha=d::decode<d::String>(j["sha"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_fail=d::decode<std::shared_ptr<std::tuple<d::String,double>>>(j["fail"]);return out;}
};
std::shared_ptr<_n_Record_24108> _n_layout_24107(d::Array<d::String,false> _a0);
double _n_pace_24118(double _a0,double _a1);
d::String _n_output_24119(d::String _a0,double _a1,bool _a2,double _a3);
d::String _n_seconds_24120(double _a0);
d::String _n_clock_24121(double _a0);
d::Array<d::String,false> _n_STAGES_24100=[](){return d::Array<d::String,false>{d::String(u"install"),d::String(u"lint"),d::String(u"test"),d::String(u"build"),d::String(u"deploy")};}();
d::Map<d::String,double> _n_TAKES_24101=[](){return d::Map<d::String,double>(d::Array<std::shared_ptr<std::tuple<d::String,double>>,false>{std::make_shared<std::tuple<d::String,double>>(d::String(u"install"),2.4),std::make_shared<std::tuple<d::String,double>>(d::String(u"lint"),1.4),std::make_shared<std::tuple<d::String,double>>(d::String(u"test"),3.6),std::make_shared<std::tuple<d::String,double>>(d::String(u"build"),2.2),std::make_shared<std::tuple<d::String,double>>(d::String(u"deploy"),2.0)});}();
d::Map<d::String,d::String> _n_COMMANDS_24102=[](){return d::Map<d::String,d::String>(d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"install"),d::String(u"npm ci")},d::Array<d::String,false>{d::String(u"lint"),d::String(u"npm run lint")},d::Array<d::String,false>{d::String(u"test"),d::String(u"npm test")},d::Array<d::String,false>{d::String(u"build"),d::String(u"npm run build")},d::Array<d::String,false>{d::String(u"deploy"),d::String(u"npx vercel deploy --prod")}});}();
d::Array<std::shared_ptr<_n_Record_24104>,false> _n_RUNS_24103=[](){return d::Array<std::shared_ptr<_n_Record_24104>,false>{([&](){auto _n_object_24197=std::make_shared<_n_Record_24104>();_n_object_24197->_p_branch=d::String(u"main");_n_object_24197->_p_sha=d::String(u"a3f9c21");_n_object_24197->_p_speed=1.0;return _n_object_24197;})(),([&](){auto _n_object_24199=std::make_shared<_n_Record_24104>();_n_object_24199->_p_branch=d::String(u"fix/nav");_n_object_24199->_p_sha=d::String(u"e81b4d0");_n_object_24199->_p_speed=0.94;_n_object_24199->_p_fail=std::make_shared<std::tuple<d::String,double>>(d::String(u"test"),0.62);return _n_object_24199;})(),([&](){auto _n_object_24201=std::make_shared<_n_Record_24104>();_n_object_24201->_p_branch=d::String(u"fix/nav");_n_object_24201->_p_sha=d::String(u"5c27f9a");_n_object_24201->_p_speed=0.97;return _n_object_24201;})()};}();
const double _n_QUEUED_24105=[](){return 0.8;}();
const double _n_HOLD_24106=[](){return 3.0;}();
std::shared_ptr<_n_Record_24111> _n_meta_24110=[](){return ([&](){auto _n_object_24206=std::make_shared<_n_Record_24111>();_n_object_24206->_p_name=d::String(u"pipeline");_n_object_24206->_p_category=d::String(u"ui");_n_object_24206->_p_note=d::String(u"a ci run going stage by stage, one run failing its tests, then green");_n_object_24206->_p_cols=56.0;_n_object_24206->_p_rows=13.0;_n_object_24206->_p_fps=12.0;_n_object_24206->_p_options=([&](){auto _n_object_24208=std::make_shared<_n_Record_24112>();_n_object_24208->_p_stages=_n_STAGES_24100;return _n_object_24208;})();_n_object_24206->_p_loop=_n_layout_24107(_n_STAGES_24100)->_p_total;return _n_object_24206;})();}();
const double _n_SCALE_24113=[](){return 3.7;}();
const double _n_BAR_24114=[](){return 18.0;}();
const d::String _n_SPIN_24115=[](){return d::String(u"|/-\\");}();
const double _n_TESTS_24116=[](){return 128.0;}();
d::Array<d::String,false> _n_LINTED_24117=[](){return d::Array<d::String,false>{d::String(u"src/app.ts"),d::String(u"src/nav.ts"),d::String(u"src/api/user.ts"),d::String(u"src/api/auth.ts"),d::String(u"src/lib/format.ts"),d::String(u"src/lib/fetch.ts")};}();
std::shared_ptr<_n_Record_24108> _n_layout_24107(d::Array<d::String,false> _a0){d::Array<d::String,false> _n_names_24132=_a0;
{
double _n_T_24133=0.0;
d::Array<std::shared_ptr<_n_Record_24109>,false> _n_plan_24134=d::map(_n_RUNS_24103,[&]( std::shared_ptr<_n_Record_24104> _a0) mutable ->std::shared_ptr<_n_Record_24109>{std::shared_ptr<_n_Record_24104> _n_run_24135=_a0;
{
double _n_fails_24136=(d::truth(_n_run_24135->_p_fail)?_n_names_24132.indexOf(std::get<0>(*_n_run_24135->_p_fail)):(-d::number(1.0)));
double _n_reach_24137=([&]()->double{auto _n_logical_24209=([&]()->std::optional<double>{auto _n_optional_24210=_n_run_24135->_p_fail;if(!d::present(_n_optional_24210))return {};return std::optional<double>(std::get<1>(*d::read(_n_optional_24210)));})();return d::present(_n_logical_24209)?d::read(_n_logical_24209):1.0;})();
double _n_start_24138=_n_T_24133;
double _n_at_24139=(_n_start_24138+_n_QUEUED_24105);
d::Array<std::optional<d::Array<double,false>>,false> _n_spans_24140=d::map(_n_names_24132,[&]( d::String _a0,double _a1) mutable ->std::optional<d::Array<double,false>>{d::String _n_name_24141=_a0;
double _n_i_24142=_a1;
{
if((d::truth((_n_fails_24136>=0.0))&&d::truth((_n_i_24142>_n_fails_24136)))){d::check_cancel();return std::optional<d::Array<double,false>>{};
}
double _n_take_24143=((([&]()->double{auto _n_logical_24211=_n_TAKES_24101.get(_n_name_24141);return d::present(_n_logical_24211)?d::read(_n_logical_24211):2.0;})()*_n_run_24135->_p_speed)*(d::truth((_n_i_24142==_n_fails_24136))?_n_reach_24137:1.0));
d::Array<double,false> _n_span_24144=d::Array<double,false>{_n_at_24139,(_n_at_24139+_n_take_24143)};
(void)((_n_at_24139=(_n_at_24139+_n_take_24143)));
return std::optional<d::Array<double,false>>(_n_span_24144);

}
});
(void)((_n_T_24133=(_n_at_24139+_n_HOLD_24106)));
return ([&](){auto _n_object_24213=std::make_shared<_n_Record_24109>();_n_object_24213->_p_run=_n_run_24135;_n_object_24213->_p_start=_n_start_24138;_n_object_24213->_p_end=_n_at_24139;_n_object_24213->_p_spans=_n_spans_24140;_n_object_24213->_p_fails=_n_fails_24136;_n_object_24213->_p_reach=_n_reach_24137;return _n_object_24213;})();

}
});
return ([&](){auto _n_object_24215=std::make_shared<_n_Record_24108>();_n_object_24215->_p_plan=_n_plan_24134;_n_object_24215->_p_total=_n_T_24133;return _n_object_24215;})();

}
}

double _n_pace_24118(double _a0,double _a1){double _n_f_24145=_a0;
double _n_seed_24146=_a1;
{
double _n_a_24147=(0.3+(0.25*d::mod((_n_seed_24146*0.618),1.0)));
return (d::truth((_n_f_24145<_n_a_24147))?((_n_f_24145/_n_a_24147)*0.55):(d::truth((_n_f_24145<(_n_a_24147+0.2)))?(0.55+(((_n_f_24145-_n_a_24147)/0.2)*0.05)):(0.6+((((_n_f_24145-_n_a_24147)-0.2)/(0.8-_n_a_24147))*0.4))));

}
}

d::String _n_output_24119(d::String _a0,double _a1,bool _a2,double _a3){d::String _n_stage_24148=_a0;
double _n_f_24149=_a1;
bool _n_failed_24150=_a2;
double _n_reach_24151=_a3;
{
bool _n_done_24152=(_n_f_24149>=1.0);
if(d::truth((_n_stage_24148==d::String(u"install")))){d::check_cancel();return (d::truth(_n_done_24152)?d::String(u"added 412 packages in 9s"):(d::String(u"fetching packages  ")+d::string(std::floor((_n_f_24149*412.0)))+d::String(u"/412")));
}
if(d::truth((_n_stage_24148==d::String(u"lint")))){d::check_cancel();return (d::truth(_n_done_24152)?d::String(u"0 problems"):(d::String(u"checking ")+d::string(d::at(_n_LINTED_24117,([&](){auto _n_argument_24216=(double(_n_LINTED_24117.size())-1.0);auto _n_argument_24217=std::floor((_n_f_24149*double(_n_LINTED_24117.size())));return d::minimum({_n_argument_24216,_n_argument_24217});})()))+d::String(u"")));
}
if(d::truth((_n_stage_24148==d::String(u"test")))){d::check_cancel();double _n_n_24153=std::floor(((_n_f_24149*_n_reach_24151)*_n_TESTS_24116));
if(d::truth(_n_failed_24150)){d::check_cancel();return (d::String(u"")+d::string((_n_n_24153-2.0))+d::String(u" passed, 2 failed: nav.test.ts"));
}
return (d::truth(_n_done_24152)?(d::String(u"")+d::string(_n_TESTS_24116)+d::String(u" passed")):(d::String(u"")+d::string(_n_n_24153)+d::String(u"/")+d::string(_n_TESTS_24116)+d::String(u" passed")));
}
if(d::truth((_n_stage_24148==d::String(u"build")))){d::check_cancel();return (d::truth(_n_done_24152)?d::String(u"dist/  built in 7.9s, 42 kB"):(d::String(u"bundling ")+d::string(std::floor((_n_f_24149*86.0)))+d::String(u" modules")));
}
if(d::truth((_n_stage_24148==d::String(u"deploy")))){d::check_cancel();return (d::truth(_n_done_24152)?d::String(u"ready  https://example.com"):(d::String(u"uploading ")+d::string(std::floor((_n_f_24149*100.0)))+d::String(u"%")));
}
return (d::truth(_n_done_24152)?d::String(u"done"):d::String(u""));

}
}

d::String _n_seconds_24120(double _a0){double _n_s_24154=_a0;
return (d::String(u"")+d::string(d::fixed((_n_s_24154*_n_SCALE_24113),1.0))+d::String(u"s"));}

d::String _n_clock_24121(double _a0){double _n_s_24155=_a0;
{
double _n_n_24156=std::floor((_n_s_24155*_n_SCALE_24113));
return (d::String(u"")+d::string(d::padStart(d::string(std::floor((_n_n_24156/60.0))),2.0,d::String(u"0")))+d::String(u":")+d::string(d::padStart(d::string(d::mod(_n_n_24156,60.0)),2.0,d::String(u"0")))+d::String(u""));

}
}

struct Native_pipeline final:ascii::Piece{
d::Array<d::String,false> _n_stages_24122{};
double _n_cols_24123{};
double _n_rows_24124{};
d::Array<d::String,false> _n_names_24125{};
d::Array<std::shared_ptr<_n_Record_24109>,false> _n_plan_24126{};
double _n_total_24127{};
double _n_begin_24128{};
d::Array<d::Array<d::String,false>,false> _n_grid_24129{};
std::function<d::String(double,std::shared_ptr<_n_Record_24192>)> _render;
void _n_text_24130(double _a0,double _a1,d::String _a2){double _n_r_24157=_a0;
double _n_c_24158=_a1;
d::String _n_s_24159=_a2;
{
{double _n_i_24160=0.0;
for(;(d::truth((_n_i_24160<double(_n_s_24159.size())))&&d::truth(((_n_c_24158+_n_i_24160)<(this->_n_cols_24123-1.0))));(void)((_n_i_24160++))){d::check_cancel();(void)(([&](){auto&& _n_array_24281=d::at(this->_n_grid_24129,_n_r_24157);auto _n_index_24282=(_n_c_24158+_n_i_24160);auto _n_value_24283=d::at(_n_s_24159,_n_i_24160);d::put(_n_array_24281,_n_index_24282,_n_value_24283);return _n_value_24283;})());
}}

}
}

explicit Native_pipeline(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24218=d::decode<std::shared_ptr<_n_Record_24191>>(_options.data);
this->_n_stages_24122=(d::present(_n_binding_24218->_p_stages)?d::read(_n_binding_24218->_p_stages):_n_meta_24110->_p_options->_p_stages);
auto _n_binding_24219=_n_meta_24110;
this->_n_cols_24123=_n_binding_24219->_p_cols;
this->_n_rows_24124=_n_binding_24219->_p_rows;
this->_n_names_24125=(d::truth(double(this->_n_stages_24122.size()))?this->_n_stages_24122:_n_STAGES_24100).slice(0.0,5.0);
auto _n_binding_24220=_n_layout_24107(this->_n_names_24125);
this->_n_plan_24126=_n_binding_24220->_p_plan;
this->_n_total_24127=_n_binding_24220->_p_total;
this->_n_begin_24128=(d::at(d::read(d::at(d::at(this->_n_plan_24126,0.0)->_p_spans,d::minimum({2.0,(double(this->_n_names_24125.size())-1.0)}))),0.0)+1.4);
this->_n_grid_24129=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_24124,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_24123));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24192> _a1) mutable ->d::String{double _n_t_24161=_a0;
{
double _n_p_24162=d::mod((_n_t_24161+this->_n_begin_24128),this->_n_total_24127);
std::shared_ptr<_n_Record_24109> _n_now_24163=d::at(this->_n_plan_24126,0.0);
for(auto &&_n_item_24221:this->_n_plan_24126){d::check_cancel();std::shared_ptr<_n_Record_24109> _n_x_24164=_n_item_24221;
if(d::truth((_n_x_24164->_p_start<=_n_p_24162))){d::check_cancel();(void)((_n_now_24163=_n_x_24164));
}
}
auto _n_binding_24222=_n_now_24163;
std::shared_ptr<_n_Record_24104> _n_run_24165=_n_binding_24222->_p_run;
double _n_start_24166=_n_binding_24222->_p_start;
double _n_end_24167=_n_binding_24222->_p_end;
d::Array<std::optional<d::Array<double,false>>,false> _n_spans_24168=_n_binding_24222->_p_spans;
double _n_fails_24169=_n_binding_24222->_p_fails;
double _n_reach_24170=_n_binding_24222->_p_reach;
for(auto &&_n_item_24223:this->_n_grid_24129){d::check_cancel();d::Array<d::String,false> _n_row_24171=_n_item_24223;
(void)(_n_row_24171.fill(d::String(u" ")));
}
{double _n_c_24172=1.0;
for(;d::truth((_n_c_24172<(this->_n_cols_24123-1.0)));(void)((_n_c_24172++))){d::check_cancel();(void)(([&](){auto&& _n_array_24224=d::at(this->_n_grid_24129,0.0);auto _n_index_24225=_n_c_24172;auto _n_value_24226=([&](){auto&& _n_array_24227=d::at(this->_n_grid_24129,(this->_n_rows_24124-1.0));auto _n_index_24228=_n_c_24172;auto _n_value_24229=d::String(u"─");d::put(_n_array_24227,_n_index_24228,_n_value_24229);return _n_value_24229;})();d::put(_n_array_24224,_n_index_24225,_n_value_24226);return _n_value_24226;})());
}}
{double _n_r_24173=1.0;
for(;d::truth((_n_r_24173<(this->_n_rows_24124-1.0)));(void)((_n_r_24173++))){d::check_cancel();(void)(([&](){auto&& _n_array_24230=d::at(this->_n_grid_24129,_n_r_24173);auto _n_index_24231=0.0;auto _n_value_24232=([&](){auto&& _n_array_24233=d::at(this->_n_grid_24129,_n_r_24173);auto _n_index_24234=(this->_n_cols_24123-1.0);auto _n_value_24235=d::String(u"│");d::put(_n_array_24233,_n_index_24234,_n_value_24235);return _n_value_24235;})();d::put(_n_array_24230,_n_index_24231,_n_value_24232);return _n_value_24232;})());
}}
(void)(([&](){auto&& _n_array_24236=d::at(this->_n_grid_24129,0.0);auto _n_index_24237=0.0;auto _n_value_24238=d::String(u"╭");d::put(_n_array_24236,_n_index_24237,_n_value_24238);return _n_value_24238;})());
(void)(([&](){auto&& _n_array_24239=d::at(this->_n_grid_24129,0.0);auto _n_index_24240=(this->_n_cols_24123-1.0);auto _n_value_24241=d::String(u"╮");d::put(_n_array_24239,_n_index_24240,_n_value_24241);return _n_value_24241;})());
(void)(([&](){auto&& _n_array_24242=d::at(this->_n_grid_24129,(this->_n_rows_24124-1.0));auto _n_index_24243=0.0;auto _n_value_24244=d::String(u"╰");d::put(_n_array_24242,_n_index_24243,_n_value_24244);return _n_value_24244;})());
(void)(([&](){auto&& _n_array_24245=d::at(this->_n_grid_24129,(this->_n_rows_24124-1.0));auto _n_index_24246=(this->_n_cols_24123-1.0);auto _n_value_24247=d::String(u"╯");d::put(_n_array_24245,_n_index_24246,_n_value_24247);return _n_value_24247;})());
(void)(this->_n_text_24130(0.0,2.0,(d::String(u" ci · ")+d::string(_n_run_24165->_p_branch)+d::String(u" · ")+d::string(_n_run_24165->_p_sha)+d::String(u" "))));
d::String _n_spin_24174=d::at(_n_SPIN_24115,d::mod(std::floor((_n_p_24162*8.0)),4.0));
double _n_live_24175=(-d::number(1.0));
double _n_last_24176=(-d::number(1.0));
(void)(d::forEach(this->_n_names_24125,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_name_24177=_a0;
double _n_i_24178=_a1;
{
double _n_r_24179=(2.0+_n_i_24178);
std::optional<d::Array<double,false>> _n_span_24180=d::at(_n_spans_24168,_n_i_24178);
bool _n_failed_24181=(_n_i_24178==_n_fails_24169);
(void)(([&](){auto _n_argument_24248=_n_r_24179;auto _n_argument_24249=5.0;auto _n_argument_24250=d::slice(_n_name_24177,0.0,9.0);return this->_n_text_24130(_n_argument_24248,_n_argument_24249,_n_argument_24250);})());
if(d::truth((!d::truth(_n_span_24180)))){d::check_cancel();(void)(this->_n_text_24130(_n_r_24179,3.0,(d::truth((_n_p_24162<_n_end_24167))?d::String(u"·"):d::String(u"-"))));
(void)(([&](){auto _n_argument_24251=_n_r_24179;auto _n_argument_24252=15.0;auto _n_argument_24253=d::repeat(d::String(u"·"),_n_BAR_24114);return this->_n_text_24130(_n_argument_24251,_n_argument_24252,_n_argument_24253);})());
(void)(this->_n_text_24130(_n_r_24179,44.0,(d::truth((_n_p_24162<_n_end_24167))?d::String(u"queued"):d::String(u"skipped"))));
return;
}
double _n_f_24182=([&](){auto _n_argument_24254=0.0;auto _n_argument_24255=d::minimum({1.0,((_n_p_24162-d::at(d::read(_n_span_24180),0.0))/(d::at(d::read(_n_span_24180),1.0)-d::at(d::read(_n_span_24180),0.0)))});return d::maximum({_n_argument_24254,_n_argument_24255});})();
if(d::truth((_n_p_24162<d::at(d::read(_n_span_24180),0.0)))){d::check_cancel();(void)(this->_n_text_24130(_n_r_24179,3.0,d::String(u"·")));
(void)(([&](){auto _n_argument_24256=_n_r_24179;auto _n_argument_24257=15.0;auto _n_argument_24258=d::repeat(d::String(u"·"),_n_BAR_24114);return this->_n_text_24130(_n_argument_24256,_n_argument_24257,_n_argument_24258);})());
(void)(this->_n_text_24130(_n_r_24179,44.0,d::String(u"queued")));
return;
}
double _n_shown_24183=(d::truth(_n_failed_24181)?(_n_reach_24170*_n_pace_24118(_n_f_24182,(_n_i_24178+1.0))):_n_pace_24118(_n_f_24182,(_n_i_24178+1.0)));
double _n_k_24184=d::round((_n_shown_24183*_n_BAR_24114));
(void)(([&](){auto _n_argument_24259=_n_r_24179;auto _n_argument_24260=15.0;auto _n_argument_24261=([&](){auto _n_left_24262=d::repeat(d::String(u"█"),_n_k_24184);auto _n_right_24263=d::repeat(d::String(u"░"),(_n_BAR_24114-_n_k_24184));return (d::string(_n_left_24262)+d::string(_n_right_24263));})();return this->_n_text_24130(_n_argument_24259,_n_argument_24260,_n_argument_24261);})());
(void)(([&](){auto _n_argument_24264=_n_r_24179;auto _n_argument_24265=35.0;auto _n_argument_24266=d::padStart(_n_seconds_24120((d::minimum({_n_p_24162,d::at(d::read(_n_span_24180),1.0)})-d::at(d::read(_n_span_24180),0.0))),7.0);return this->_n_text_24130(_n_argument_24264,_n_argument_24265,_n_argument_24266);})());
(void)((_n_last_24176=_n_i_24178));
if(d::truth((_n_f_24182<1.0))){d::check_cancel();(void)((_n_live_24175=_n_i_24178));
(void)(this->_n_text_24130(_n_r_24179,3.0,_n_spin_24174));
(void)(this->_n_text_24130(_n_r_24179,44.0,d::String(u"running")));
}else {d::check_cancel();(void)(this->_n_text_24130(_n_r_24179,3.0,(d::truth(_n_failed_24181)?d::String(u"x"):d::String(u"+"))));
(void)(this->_n_text_24130(_n_r_24179,44.0,(d::truth(_n_failed_24181)?d::String(u"failed"):d::String(u"passed"))));
}

}
}));
double _n_at_24185=(d::truth((_n_live_24175>=0.0))?_n_live_24175:_n_last_24176);
std::optional<d::Array<double,false>> _n_span_24186=d::at(_n_spans_24168,_n_at_24185);
if((d::truth((_n_at_24185>=0.0))&&d::truth(_n_span_24186))){d::check_cancel();double _n_f_24187=([&](){auto _n_argument_24267=0.0;auto _n_argument_24268=d::minimum({1.0,((_n_p_24162-d::at(d::read(_n_span_24186),0.0))/(d::at(d::read(_n_span_24186),1.0)-d::at(d::read(_n_span_24186),0.0)))});return d::maximum({_n_argument_24267,_n_argument_24268});})();
bool _n_failing_24188=(_n_at_24185==_n_fails_24169);
(void)(([&](){auto _n_argument_24269=8.0;auto _n_argument_24270=3.0;auto _n_argument_24271=(d::String(u"$ ")+d::string(([&]()->d::String{auto _n_logical_24272=_n_COMMANDS_24102.get(d::at(this->_n_names_24125,_n_at_24185));return d::present(_n_logical_24272)?d::read(_n_logical_24272):(d::String(u"npm run ")+d::string(d::at(this->_n_names_24125,_n_at_24185))+d::String(u""));})())+d::String(u""));return this->_n_text_24130(_n_argument_24269,_n_argument_24270,_n_argument_24271);})());
(void)(([&](){auto _n_argument_24273=9.0;auto _n_argument_24274=5.0;auto _n_argument_24275=([&](){auto _n_argument_24276=d::at(this->_n_names_24125,_n_at_24185);auto _n_argument_24277=(d::truth((_n_f_24187<1.0))?_n_pace_24118(_n_f_24187,(_n_at_24185+1.0)):1.0);auto _n_argument_24278=([&]()->bool{auto _n_logical_24279=_n_failing_24188;return d::truth(_n_logical_24279)?(_n_f_24187>=1.0):_n_logical_24279;})();auto _n_argument_24280=(d::truth(_n_failing_24188)?_n_reach_24170:1.0);return _n_output_24119(_n_argument_24276,_n_argument_24277,_n_argument_24278,_n_argument_24280);})();return this->_n_text_24130(_n_argument_24273,_n_argument_24274,_n_argument_24275);})());
}
d::String _n_status_24189{};
if(d::truth((_n_p_24162<(_n_start_24166+_n_QUEUED_24105)))){d::check_cancel();(void)((_n_status_24189=d::String(u"queued · waiting for a runner")));
}else {d::check_cancel();if(d::truth((_n_p_24162<_n_end_24167))){d::check_cancel();(void)((_n_status_24189=(d::String(u"running · stage ")+d::string((_n_live_24175+1.0))+d::String(u" of ")+d::string(double(this->_n_names_24125.size()))+d::String(u" · ")+d::string(_n_clock_24121(((_n_p_24162-_n_start_24166)-_n_QUEUED_24105)))+d::String(u""))));
}else {d::check_cancel();if(d::truth((_n_fails_24169>=0.0))){d::check_cancel();(void)((_n_status_24189=(d::String(u"failed at ")+d::string(d::at(this->_n_names_24125,_n_fails_24169))+d::String(u" · ")+d::string(_n_clock_24121(((_n_end_24167-_n_start_24166)-_n_QUEUED_24105)))+d::String(u""))));
}else {d::check_cancel();(void)((_n_status_24189=(d::String(u"passed · ")+d::string((d::truth(this->_n_names_24125.includes(d::String(u"deploy")))?d::String(u"deployed"):d::String(u"done")))+d::String(u" in ")+d::string(_n_clock_24121(((_n_end_24167-_n_start_24166)-_n_QUEUED_24105)))+d::String(u""))));
}
}
}
(void)(this->_n_text_24130(11.0,3.0,_n_status_24189));
return d::join(d::map(this->_n_grid_24129,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_24190=_a0;
return d::join(_n_row_24190,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("pipeline").cols)*ascii::catalog_meta("pipeline").rows);auto _env=std::make_shared<_n_Record_24192>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &pipeline_meta(){return catalog_meta("pipeline");}
std::unique_ptr<Piece> make_pipeline(const AsciiPieceOptions &o){return std::make_unique<Native_pipeline>(o);}
}
