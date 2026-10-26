// Direct, statically typed C++ from src/pieces/pipeline.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24103;
struct _n_Record_24107;
struct _n_Record_24108;
struct _n_Record_24110;
struct _n_Record_24111;
struct _n_Record_24190;
struct _n_Record_24191;
struct _n_Record_24192;
struct _n_Record_24194;
struct _n_Record_24103{
d::String _p_branch{};
d::String _p_sha{};
double _p_speed{};
std::shared_ptr<std::tuple<d::String,double>> _p_fail{};
static std::shared_ptr<_n_Record_24103> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24103>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_sha=d::decode<d::String>(j["sha"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_fail=d::decode<std::shared_ptr<std::tuple<d::String,double>>>(j["fail"]);return out;}
};
struct _n_Record_24107{
d::Array<std::shared_ptr<_n_Record_24108>,false> _p_plan{};
double _p_total{};
static std::shared_ptr<_n_Record_24107> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24107>();out->_p_plan=d::decode<d::Array<std::shared_ptr<_n_Record_24108>,false>>(j["plan"]);out->_p_total=d::decode<double>(j["total"]);return out;}
};
struct _n_Record_24108{
std::shared_ptr<_n_Record_24103> _p_run{};
double _p_start{};
double _p_end{};
d::Array<std::optional<d::Array<double,false>>,false> _p_spans{};
double _p_fails{};
double _p_reach{};
static std::shared_ptr<_n_Record_24108> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24108>();out->_p_run=d::decode<std::shared_ptr<_n_Record_24103>>(j["run"]);out->_p_start=d::decode<double>(j["start"]);out->_p_end=d::decode<double>(j["end"]);out->_p_spans=d::decode<d::Array<std::optional<d::Array<double,false>>,false>>(j["spans"]);out->_p_fails=d::decode<double>(j["fails"]);out->_p_reach=d::decode<double>(j["reach"]);return out;}
};
struct _n_Record_24110{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_24111> _p_options{};
double _p_loop{};
static std::shared_ptr<_n_Record_24110> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24110>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_24111>>(j["options"]);out->_p_loop=d::decode<double>(j["loop"]);return out;}
};
struct _n_Record_24111{
d::Array<d::String,false> _p_stages{};
static std::shared_ptr<_n_Record_24111> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24111>();out->_p_stages=d::decode<d::Array<d::String,false>>(j["stages"]);return out;}
};
struct _n_Record_24190{
std::optional<d::Array<d::String,false>> _p_stages{};
static std::shared_ptr<_n_Record_24190> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24190>();out->_p_stages=d::decode<std::optional<d::Array<d::String,false>>>(j["stages"]);return out;}
};
struct _n_Record_24191{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24191> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24191>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_24192{
d::String _p_branch{};
d::String _p_sha{};
double _p_speed{};
static std::shared_ptr<_n_Record_24192> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24192>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_sha=d::decode<d::String>(j["sha"]);out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_24194{
d::String _p_branch{};
d::String _p_sha{};
double _p_speed{};
std::shared_ptr<std::tuple<d::String,double>> _p_fail{};
static std::shared_ptr<_n_Record_24194> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24194>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_sha=d::decode<d::String>(j["sha"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_fail=d::decode<std::shared_ptr<std::tuple<d::String,double>>>(j["fail"]);return out;}
};
std::shared_ptr<_n_Record_24107> _n_layout_24106(d::Array<d::String,false> _a0);
double _n_pace_24117(double _a0,double _a1);
d::String _n_output_24118(d::String _a0,double _a1,bool _a2,double _a3);
d::String _n_seconds_24119(double _a0);
d::String _n_clock_24120(double _a0);
d::Array<d::String,false> _n_STAGES_24099=[](){return d::Array<d::String,false>{d::String(u"install"),d::String(u"lint"),d::String(u"test"),d::String(u"build"),d::String(u"deploy")};}();
d::Map<d::String,double> _n_TAKES_24100=[](){return d::Map<d::String,double>(d::Array<std::shared_ptr<std::tuple<d::String,double>>,false>{std::make_shared<std::tuple<d::String,double>>(d::String(u"install"),2.4),std::make_shared<std::tuple<d::String,double>>(d::String(u"lint"),1.4),std::make_shared<std::tuple<d::String,double>>(d::String(u"test"),3.6),std::make_shared<std::tuple<d::String,double>>(d::String(u"build"),2.2),std::make_shared<std::tuple<d::String,double>>(d::String(u"deploy"),2.0)});}();
d::Map<d::String,d::String> _n_COMMANDS_24101=[](){return d::Map<d::String,d::String>(d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u"install"),d::String(u"npm ci")},d::Array<d::String,false>{d::String(u"lint"),d::String(u"npm run lint")},d::Array<d::String,false>{d::String(u"test"),d::String(u"npm test")},d::Array<d::String,false>{d::String(u"build"),d::String(u"npm run build")},d::Array<d::String,false>{d::String(u"deploy"),d::String(u"npx vercel deploy --prod")}});}();
d::Array<std::shared_ptr<_n_Record_24103>,false> _n_RUNS_24102=[](){return d::Array<std::shared_ptr<_n_Record_24103>,false>{([&](){auto _n_object_24196=std::make_shared<_n_Record_24103>();_n_object_24196->_p_branch=d::String(u"main");_n_object_24196->_p_sha=d::String(u"a3f9c21");_n_object_24196->_p_speed=1.0;return _n_object_24196;})(),([&](){auto _n_object_24198=std::make_shared<_n_Record_24103>();_n_object_24198->_p_branch=d::String(u"fix/nav");_n_object_24198->_p_sha=d::String(u"e81b4d0");_n_object_24198->_p_speed=0.94;_n_object_24198->_p_fail=std::make_shared<std::tuple<d::String,double>>(d::String(u"test"),0.62);return _n_object_24198;})(),([&](){auto _n_object_24200=std::make_shared<_n_Record_24103>();_n_object_24200->_p_branch=d::String(u"fix/nav");_n_object_24200->_p_sha=d::String(u"5c27f9a");_n_object_24200->_p_speed=0.97;return _n_object_24200;})()};}();
const double _n_QUEUED_24104=[](){return 0.8;}();
const double _n_HOLD_24105=[](){return 3.0;}();
std::shared_ptr<_n_Record_24110> _n_meta_24109=[](){return ([&](){auto _n_object_24205=std::make_shared<_n_Record_24110>();_n_object_24205->_p_name=d::String(u"pipeline");_n_object_24205->_p_category=d::String(u"ui");_n_object_24205->_p_note=d::String(u"a ci run going stage by stage, one run failing its tests, then green");_n_object_24205->_p_cols=56.0;_n_object_24205->_p_rows=13.0;_n_object_24205->_p_fps=12.0;_n_object_24205->_p_options=([&](){auto _n_object_24207=std::make_shared<_n_Record_24111>();_n_object_24207->_p_stages=_n_STAGES_24099;return _n_object_24207;})();_n_object_24205->_p_loop=_n_layout_24106(_n_STAGES_24099)->_p_total;return _n_object_24205;})();}();
const double _n_SCALE_24112=[](){return 3.7;}();
const double _n_BAR_24113=[](){return 18.0;}();
const d::String _n_SPIN_24114=[](){return d::String(u"|/-\\");}();
const double _n_TESTS_24115=[](){return 128.0;}();
d::Array<d::String,false> _n_LINTED_24116=[](){return d::Array<d::String,false>{d::String(u"src/app.ts"),d::String(u"src/nav.ts"),d::String(u"src/api/user.ts"),d::String(u"src/api/auth.ts"),d::String(u"src/lib/format.ts"),d::String(u"src/lib/fetch.ts")};}();
std::shared_ptr<_n_Record_24107> _n_layout_24106(d::Array<d::String,false> _a0){d::Array<d::String,false> _n_names_24131=_a0;
{
double _n_T_24132=0.0;
d::Array<std::shared_ptr<_n_Record_24108>,false> _n_plan_24133=d::map(_n_RUNS_24102,[&]( std::shared_ptr<_n_Record_24103> _a0) mutable ->std::shared_ptr<_n_Record_24108>{std::shared_ptr<_n_Record_24103> _n_run_24134=_a0;
{
double _n_fails_24135=(d::truth(_n_run_24134->_p_fail)?_n_names_24131.indexOf(std::get<0>(*_n_run_24134->_p_fail)):(-d::number(1.0)));
double _n_reach_24136=([&]()->double{auto _n_logical_24208=([&]()->std::optional<double>{auto _n_optional_24209=_n_run_24134->_p_fail;if(!d::present(_n_optional_24209))return {};return std::optional<double>(std::get<1>(*d::read(_n_optional_24209)));})();return d::present(_n_logical_24208)?d::read(_n_logical_24208):1.0;})();
double _n_start_24137=_n_T_24132;
double _n_at_24138=(_n_start_24137+_n_QUEUED_24104);
d::Array<std::optional<d::Array<double,false>>,false> _n_spans_24139=d::map(_n_names_24131,[&]( d::String _a0,double _a1) mutable ->std::optional<d::Array<double,false>>{d::String _n_name_24140=_a0;
double _n_i_24141=_a1;
{
if((d::truth((_n_fails_24135>=0.0))&&d::truth((_n_i_24141>_n_fails_24135)))){d::check_cancel();return std::optional<d::Array<double,false>>{};
}
double _n_take_24142=((([&]()->double{auto _n_logical_24210=_n_TAKES_24100.get(_n_name_24140);return d::present(_n_logical_24210)?d::read(_n_logical_24210):2.0;})()*_n_run_24134->_p_speed)*(d::truth((_n_i_24141==_n_fails_24135))?_n_reach_24136:1.0));
d::Array<double,false> _n_span_24143=d::Array<double,false>{_n_at_24138,(_n_at_24138+_n_take_24142)};
(void)((_n_at_24138=(_n_at_24138+_n_take_24142)));
return std::optional<d::Array<double,false>>(_n_span_24143);

}
});
(void)((_n_T_24132=(_n_at_24138+_n_HOLD_24105)));
return ([&](){auto _n_object_24212=std::make_shared<_n_Record_24108>();_n_object_24212->_p_run=_n_run_24134;_n_object_24212->_p_start=_n_start_24137;_n_object_24212->_p_end=_n_at_24138;_n_object_24212->_p_spans=_n_spans_24139;_n_object_24212->_p_fails=_n_fails_24135;_n_object_24212->_p_reach=_n_reach_24136;return _n_object_24212;})();

}
});
return ([&](){auto _n_object_24214=std::make_shared<_n_Record_24107>();_n_object_24214->_p_plan=_n_plan_24133;_n_object_24214->_p_total=_n_T_24132;return _n_object_24214;})();

}
}

double _n_pace_24117(double _a0,double _a1){double _n_f_24144=_a0;
double _n_seed_24145=_a1;
{
double _n_a_24146=(0.3+(0.25*d::mod((_n_seed_24145*0.618),1.0)));
return (d::truth((_n_f_24144<_n_a_24146))?((_n_f_24144/_n_a_24146)*0.55):(d::truth((_n_f_24144<(_n_a_24146+0.2)))?(0.55+(((_n_f_24144-_n_a_24146)/0.2)*0.05)):(0.6+((((_n_f_24144-_n_a_24146)-0.2)/(0.8-_n_a_24146))*0.4))));

}
}

d::String _n_output_24118(d::String _a0,double _a1,bool _a2,double _a3){d::String _n_stage_24147=_a0;
double _n_f_24148=_a1;
bool _n_failed_24149=_a2;
double _n_reach_24150=_a3;
{
bool _n_done_24151=(_n_f_24148>=1.0);
if(d::truth((_n_stage_24147==d::String(u"install")))){d::check_cancel();return (d::truth(_n_done_24151)?d::String(u"added 412 packages in 9s"):(d::String(u"fetching packages  ")+d::string(std::floor((_n_f_24148*412.0)))+d::String(u"/412")));
}
if(d::truth((_n_stage_24147==d::String(u"lint")))){d::check_cancel();return (d::truth(_n_done_24151)?d::String(u"0 problems"):(d::String(u"checking ")+d::string(d::at(_n_LINTED_24116,([&](){auto _n_argument_24215=(double(_n_LINTED_24116.size())-1.0);auto _n_argument_24216=std::floor((_n_f_24148*double(_n_LINTED_24116.size())));return d::minimum({_n_argument_24215,_n_argument_24216});})()))+d::String(u"")));
}
if(d::truth((_n_stage_24147==d::String(u"test")))){d::check_cancel();double _n_n_24152=std::floor(((_n_f_24148*_n_reach_24150)*_n_TESTS_24115));
if(d::truth(_n_failed_24149)){d::check_cancel();return (d::String(u"")+d::string((_n_n_24152-2.0))+d::String(u" passed, 2 failed: nav.test.ts"));
}
return (d::truth(_n_done_24151)?(d::String(u"")+d::string(_n_TESTS_24115)+d::String(u" passed")):(d::String(u"")+d::string(_n_n_24152)+d::String(u"/")+d::string(_n_TESTS_24115)+d::String(u" passed")));
}
if(d::truth((_n_stage_24147==d::String(u"build")))){d::check_cancel();return (d::truth(_n_done_24151)?d::String(u"dist/  built in 7.9s, 42 kB"):(d::String(u"bundling ")+d::string(std::floor((_n_f_24148*86.0)))+d::String(u" modules")));
}
if(d::truth((_n_stage_24147==d::String(u"deploy")))){d::check_cancel();return (d::truth(_n_done_24151)?d::String(u"ready  https://example.com"):(d::String(u"uploading ")+d::string(std::floor((_n_f_24148*100.0)))+d::String(u"%")));
}
return (d::truth(_n_done_24151)?d::String(u"done"):d::String(u""));

}
}

d::String _n_seconds_24119(double _a0){double _n_s_24153=_a0;
return (d::String(u"")+d::string(d::fixed((_n_s_24153*_n_SCALE_24112),1.0))+d::String(u"s"));}

d::String _n_clock_24120(double _a0){double _n_s_24154=_a0;
{
double _n_n_24155=std::floor((_n_s_24154*_n_SCALE_24112));
return (d::String(u"")+d::string(d::padStart(d::string(std::floor((_n_n_24155/60.0))),2.0,d::String(u"0")))+d::String(u":")+d::string(d::padStart(d::string(d::mod(_n_n_24155,60.0)),2.0,d::String(u"0")))+d::String(u""));

}
}

struct Native_pipeline final:ascii::Piece{
d::Array<d::String,false> _n_stages_24121{};
double _n_cols_24122{};
double _n_rows_24123{};
d::Array<d::String,false> _n_names_24124{};
d::Array<std::shared_ptr<_n_Record_24108>,false> _n_plan_24125{};
double _n_total_24126{};
double _n_begin_24127{};
d::Array<d::Array<d::String,false>,false> _n_grid_24128{};
std::function<d::String(double,std::shared_ptr<_n_Record_24191>)> _render;
void _n_text_24129(double _a0,double _a1,d::String _a2){double _n_r_24156=_a0;
double _n_c_24157=_a1;
d::String _n_s_24158=_a2;
{
{double _n_i_24159=0.0;
for(;(d::truth((_n_i_24159<double(_n_s_24158.size())))&&d::truth(((_n_c_24157+_n_i_24159)<(this->_n_cols_24122-1.0))));(void)((_n_i_24159++))){d::check_cancel();(void)(([&](){auto&& _n_array_24280=d::at(this->_n_grid_24128,_n_r_24156);auto _n_index_24281=(_n_c_24157+_n_i_24159);auto _n_value_24282=d::at(_n_s_24158,_n_i_24159);d::put(_n_array_24280,_n_index_24281,_n_value_24282);return _n_value_24282;})());
}}

}
}

explicit Native_pipeline(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24217=d::decode<std::shared_ptr<_n_Record_24190>>(_options.data);
this->_n_stages_24121=(d::present(_n_binding_24217->_p_stages)?d::read(_n_binding_24217->_p_stages):_n_meta_24109->_p_options->_p_stages);
auto _n_binding_24218=_n_meta_24109;
this->_n_cols_24122=_n_binding_24218->_p_cols;
this->_n_rows_24123=_n_binding_24218->_p_rows;
this->_n_names_24124=(d::truth(double(this->_n_stages_24121.size()))?this->_n_stages_24121:_n_STAGES_24099).slice(0.0,5.0);
auto _n_binding_24219=_n_layout_24106(this->_n_names_24124);
this->_n_plan_24125=_n_binding_24219->_p_plan;
this->_n_total_24126=_n_binding_24219->_p_total;
this->_n_begin_24127=(d::at(d::read(d::at(d::at(this->_n_plan_24125,0.0)->_p_spans,d::minimum({2.0,(double(this->_n_names_24124.size())-1.0)}))),0.0)+1.4);
this->_n_grid_24128=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_24123,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_24122));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24191> _a1) mutable ->d::String{double _n_t_24160=_a0;
{
double _n_p_24161=d::mod((_n_t_24160+this->_n_begin_24127),this->_n_total_24126);
std::shared_ptr<_n_Record_24108> _n_now_24162=d::at(this->_n_plan_24125,0.0);
for(auto &&_n_item_24220:this->_n_plan_24125){d::check_cancel();std::shared_ptr<_n_Record_24108> _n_x_24163=_n_item_24220;
if(d::truth((_n_x_24163->_p_start<=_n_p_24161))){d::check_cancel();(void)((_n_now_24162=_n_x_24163));
}
}
auto _n_binding_24221=_n_now_24162;
std::shared_ptr<_n_Record_24103> _n_run_24164=_n_binding_24221->_p_run;
double _n_start_24165=_n_binding_24221->_p_start;
double _n_end_24166=_n_binding_24221->_p_end;
d::Array<std::optional<d::Array<double,false>>,false> _n_spans_24167=_n_binding_24221->_p_spans;
double _n_fails_24168=_n_binding_24221->_p_fails;
double _n_reach_24169=_n_binding_24221->_p_reach;
for(auto &&_n_item_24222:this->_n_grid_24128){d::check_cancel();d::Array<d::String,false> _n_row_24170=_n_item_24222;
(void)(_n_row_24170.fill(d::String(u" ")));
}
{double _n_c_24171=1.0;
for(;d::truth((_n_c_24171<(this->_n_cols_24122-1.0)));(void)((_n_c_24171++))){d::check_cancel();(void)(([&](){auto&& _n_array_24223=d::at(this->_n_grid_24128,0.0);auto _n_index_24224=_n_c_24171;auto _n_value_24225=([&](){auto&& _n_array_24226=d::at(this->_n_grid_24128,(this->_n_rows_24123-1.0));auto _n_index_24227=_n_c_24171;auto _n_value_24228=d::String(u"─");d::put(_n_array_24226,_n_index_24227,_n_value_24228);return _n_value_24228;})();d::put(_n_array_24223,_n_index_24224,_n_value_24225);return _n_value_24225;})());
}}
{double _n_r_24172=1.0;
for(;d::truth((_n_r_24172<(this->_n_rows_24123-1.0)));(void)((_n_r_24172++))){d::check_cancel();(void)(([&](){auto&& _n_array_24229=d::at(this->_n_grid_24128,_n_r_24172);auto _n_index_24230=0.0;auto _n_value_24231=([&](){auto&& _n_array_24232=d::at(this->_n_grid_24128,_n_r_24172);auto _n_index_24233=(this->_n_cols_24122-1.0);auto _n_value_24234=d::String(u"│");d::put(_n_array_24232,_n_index_24233,_n_value_24234);return _n_value_24234;})();d::put(_n_array_24229,_n_index_24230,_n_value_24231);return _n_value_24231;})());
}}
(void)(([&](){auto&& _n_array_24235=d::at(this->_n_grid_24128,0.0);auto _n_index_24236=0.0;auto _n_value_24237=d::String(u"╭");d::put(_n_array_24235,_n_index_24236,_n_value_24237);return _n_value_24237;})());
(void)(([&](){auto&& _n_array_24238=d::at(this->_n_grid_24128,0.0);auto _n_index_24239=(this->_n_cols_24122-1.0);auto _n_value_24240=d::String(u"╮");d::put(_n_array_24238,_n_index_24239,_n_value_24240);return _n_value_24240;})());
(void)(([&](){auto&& _n_array_24241=d::at(this->_n_grid_24128,(this->_n_rows_24123-1.0));auto _n_index_24242=0.0;auto _n_value_24243=d::String(u"╰");d::put(_n_array_24241,_n_index_24242,_n_value_24243);return _n_value_24243;})());
(void)(([&](){auto&& _n_array_24244=d::at(this->_n_grid_24128,(this->_n_rows_24123-1.0));auto _n_index_24245=(this->_n_cols_24122-1.0);auto _n_value_24246=d::String(u"╯");d::put(_n_array_24244,_n_index_24245,_n_value_24246);return _n_value_24246;})());
(void)(this->_n_text_24129(0.0,2.0,(d::String(u" ci · ")+d::string(_n_run_24164->_p_branch)+d::String(u" · ")+d::string(_n_run_24164->_p_sha)+d::String(u" "))));
d::String _n_spin_24173=d::at(_n_SPIN_24114,d::mod(std::floor((_n_p_24161*8.0)),4.0));
double _n_live_24174=(-d::number(1.0));
double _n_last_24175=(-d::number(1.0));
(void)(d::forEach(this->_n_names_24124,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_name_24176=_a0;
double _n_i_24177=_a1;
{
double _n_r_24178=(2.0+_n_i_24177);
std::optional<d::Array<double,false>> _n_span_24179=d::at(_n_spans_24167,_n_i_24177);
bool _n_failed_24180=(_n_i_24177==_n_fails_24168);
(void)(([&](){auto _n_argument_24247=_n_r_24178;auto _n_argument_24248=5.0;auto _n_argument_24249=d::slice(_n_name_24176,0.0,9.0);return this->_n_text_24129(_n_argument_24247,_n_argument_24248,_n_argument_24249);})());
if(d::truth((!d::truth(_n_span_24179)))){d::check_cancel();(void)(this->_n_text_24129(_n_r_24178,3.0,(d::truth((_n_p_24161<_n_end_24166))?d::String(u"·"):d::String(u"-"))));
(void)(([&](){auto _n_argument_24250=_n_r_24178;auto _n_argument_24251=15.0;auto _n_argument_24252=d::repeat(d::String(u"·"),_n_BAR_24113);return this->_n_text_24129(_n_argument_24250,_n_argument_24251,_n_argument_24252);})());
(void)(this->_n_text_24129(_n_r_24178,44.0,(d::truth((_n_p_24161<_n_end_24166))?d::String(u"queued"):d::String(u"skipped"))));
return;
}
double _n_f_24181=([&](){auto _n_argument_24253=0.0;auto _n_argument_24254=d::minimum({1.0,((_n_p_24161-d::at(d::read(_n_span_24179),0.0))/(d::at(d::read(_n_span_24179),1.0)-d::at(d::read(_n_span_24179),0.0)))});return d::maximum({_n_argument_24253,_n_argument_24254});})();
if(d::truth((_n_p_24161<d::at(d::read(_n_span_24179),0.0)))){d::check_cancel();(void)(this->_n_text_24129(_n_r_24178,3.0,d::String(u"·")));
(void)(([&](){auto _n_argument_24255=_n_r_24178;auto _n_argument_24256=15.0;auto _n_argument_24257=d::repeat(d::String(u"·"),_n_BAR_24113);return this->_n_text_24129(_n_argument_24255,_n_argument_24256,_n_argument_24257);})());
(void)(this->_n_text_24129(_n_r_24178,44.0,d::String(u"queued")));
return;
}
double _n_shown_24182=(d::truth(_n_failed_24180)?(_n_reach_24169*_n_pace_24117(_n_f_24181,(_n_i_24177+1.0))):_n_pace_24117(_n_f_24181,(_n_i_24177+1.0)));
double _n_k_24183=d::round((_n_shown_24182*_n_BAR_24113));
(void)(([&](){auto _n_argument_24258=_n_r_24178;auto _n_argument_24259=15.0;auto _n_argument_24260=([&](){auto _n_left_24261=d::repeat(d::String(u"█"),_n_k_24183);auto _n_right_24262=d::repeat(d::String(u"░"),(_n_BAR_24113-_n_k_24183));return (d::string(_n_left_24261)+d::string(_n_right_24262));})();return this->_n_text_24129(_n_argument_24258,_n_argument_24259,_n_argument_24260);})());
(void)(([&](){auto _n_argument_24263=_n_r_24178;auto _n_argument_24264=35.0;auto _n_argument_24265=d::padStart(_n_seconds_24119((d::minimum({_n_p_24161,d::at(d::read(_n_span_24179),1.0)})-d::at(d::read(_n_span_24179),0.0))),7.0);return this->_n_text_24129(_n_argument_24263,_n_argument_24264,_n_argument_24265);})());
(void)((_n_last_24175=_n_i_24177));
if(d::truth((_n_f_24181<1.0))){d::check_cancel();(void)((_n_live_24174=_n_i_24177));
(void)(this->_n_text_24129(_n_r_24178,3.0,_n_spin_24173));
(void)(this->_n_text_24129(_n_r_24178,44.0,d::String(u"running")));
}else {d::check_cancel();(void)(this->_n_text_24129(_n_r_24178,3.0,(d::truth(_n_failed_24180)?d::String(u"x"):d::String(u"+"))));
(void)(this->_n_text_24129(_n_r_24178,44.0,(d::truth(_n_failed_24180)?d::String(u"failed"):d::String(u"passed"))));
}

}
}));
double _n_at_24184=(d::truth((_n_live_24174>=0.0))?_n_live_24174:_n_last_24175);
std::optional<d::Array<double,false>> _n_span_24185=d::at(_n_spans_24167,_n_at_24184);
if((d::truth((_n_at_24184>=0.0))&&d::truth(_n_span_24185))){d::check_cancel();double _n_f_24186=([&](){auto _n_argument_24266=0.0;auto _n_argument_24267=d::minimum({1.0,((_n_p_24161-d::at(d::read(_n_span_24185),0.0))/(d::at(d::read(_n_span_24185),1.0)-d::at(d::read(_n_span_24185),0.0)))});return d::maximum({_n_argument_24266,_n_argument_24267});})();
bool _n_failing_24187=(_n_at_24184==_n_fails_24168);
(void)(([&](){auto _n_argument_24268=8.0;auto _n_argument_24269=3.0;auto _n_argument_24270=(d::String(u"$ ")+d::string(([&]()->d::String{auto _n_logical_24271=_n_COMMANDS_24101.get(d::at(this->_n_names_24124,_n_at_24184));return d::present(_n_logical_24271)?d::read(_n_logical_24271):(d::String(u"npm run ")+d::string(d::at(this->_n_names_24124,_n_at_24184))+d::String(u""));})())+d::String(u""));return this->_n_text_24129(_n_argument_24268,_n_argument_24269,_n_argument_24270);})());
(void)(([&](){auto _n_argument_24272=9.0;auto _n_argument_24273=5.0;auto _n_argument_24274=([&](){auto _n_argument_24275=d::at(this->_n_names_24124,_n_at_24184);auto _n_argument_24276=(d::truth((_n_f_24186<1.0))?_n_pace_24117(_n_f_24186,(_n_at_24184+1.0)):1.0);auto _n_argument_24277=([&]()->bool{auto _n_logical_24278=_n_failing_24187;return d::truth(_n_logical_24278)?(_n_f_24186>=1.0):_n_logical_24278;})();auto _n_argument_24279=(d::truth(_n_failing_24187)?_n_reach_24169:1.0);return _n_output_24118(_n_argument_24275,_n_argument_24276,_n_argument_24277,_n_argument_24279);})();return this->_n_text_24129(_n_argument_24272,_n_argument_24273,_n_argument_24274);})());
}
d::String _n_status_24188{};
if(d::truth((_n_p_24161<(_n_start_24165+_n_QUEUED_24104)))){d::check_cancel();(void)((_n_status_24188=d::String(u"queued · waiting for a runner")));
}else {d::check_cancel();if(d::truth((_n_p_24161<_n_end_24166))){d::check_cancel();(void)((_n_status_24188=(d::String(u"running · stage ")+d::string((_n_live_24174+1.0))+d::String(u" of ")+d::string(double(this->_n_names_24124.size()))+d::String(u" · ")+d::string(_n_clock_24120(((_n_p_24161-_n_start_24165)-_n_QUEUED_24104)))+d::String(u""))));
}else {d::check_cancel();if(d::truth((_n_fails_24168>=0.0))){d::check_cancel();(void)((_n_status_24188=(d::String(u"failed at ")+d::string(d::at(this->_n_names_24124,_n_fails_24168))+d::String(u" · ")+d::string(_n_clock_24120(((_n_end_24166-_n_start_24165)-_n_QUEUED_24104)))+d::String(u""))));
}else {d::check_cancel();(void)((_n_status_24188=(d::String(u"passed · ")+d::string((d::truth(this->_n_names_24124.includes(d::String(u"deploy")))?d::String(u"deployed"):d::String(u"done")))+d::String(u" in ")+d::string(_n_clock_24120(((_n_end_24166-_n_start_24165)-_n_QUEUED_24104)))+d::String(u""))));
}
}
}
(void)(this->_n_text_24129(11.0,3.0,_n_status_24188));
return d::join(d::map(this->_n_grid_24128,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_24189=_a0;
return d::join(_n_row_24189,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("pipeline").cols)*ascii::catalog_meta("pipeline").rows);auto _env=std::make_shared<_n_Record_24191>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &pipeline_meta(){return catalog_meta("pipeline");}
std::unique_ptr<Piece> make_pipeline(const AsciiPieceOptions &o){return std::make_unique<Native_pipeline>(o);}
}
