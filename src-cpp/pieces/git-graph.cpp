// Direct, statically typed C++ from src/pieces/git-graph.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_12228;
struct _n_Record_12230;
struct _n_Record_12232;
struct _n_Record_12270;
struct _n_Record_12271;
struct _n_Record_12272;
struct _n_Record_12286;
struct _n_Record_12288;
struct _n_Record_12290;
struct _n_Record_12295;
struct _n_Record_12228{
d::String _p_branch{};
d::Array<d::String,false> _p_on{};
std::optional<d::String> _p_main{};
static std::shared_ptr<_n_Record_12228> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12228>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_on=d::decode<d::Array<d::String,false>>(j["on"]);out->_p_main=d::decode<std::optional<d::String>>(j["main"]);return out;}
};
struct _n_Record_12230{
d::String _p_graph{};
std::optional<d::String> _p_message{};
std::optional<d::String> _p_tag{};
std::optional<d::String> _p_branch{};
static std::shared_ptr<_n_Record_12230> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12230>();out->_p_graph=d::decode<d::String>(j["graph"]);out->_p_message=d::decode<std::optional<d::String>>(j["message"]);out->_p_tag=d::decode<std::optional<d::String>>(j["tag"]);out->_p_branch=d::decode<std::optional<d::String>>(j["branch"]);return out;}
};
struct _n_Record_12232{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
double _p_loop{};
static std::shared_ptr<_n_Record_12232> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12232>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_loop=d::decode<double>(j["loop"]);return out;}
};
struct _n_Record_12270{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_12270> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12270>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_12271{
d::String _p_branch{};
d::Array<d::String,false> _p_on{};
d::String _p_main{};
static std::shared_ptr<_n_Record_12271> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12271>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_on=d::decode<d::Array<d::String,false>>(j["on"]);out->_p_main=d::decode<d::String>(j["main"]);return out;}
};
struct _n_Record_12272{
d::String _p_branch{};
d::Array<d::String,false> _p_on{};
static std::shared_ptr<_n_Record_12272> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12272>();out->_p_branch=d::decode<d::String>(j["branch"]);out->_p_on=d::decode<d::Array<d::String,false>>(j["on"]);return out;}
};
struct _n_Record_12286{
d::String _p_graph{};
d::String _p_message{};
std::optional<d::String> _p_tag{};
static std::shared_ptr<_n_Record_12286> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12286>();out->_p_graph=d::decode<d::String>(j["graph"]);out->_p_message=d::decode<d::String>(j["message"]);out->_p_tag=d::decode<std::optional<d::String>>(j["tag"]);return out;}
};
struct _n_Record_12288{
d::String _p_graph{};
d::String _p_message{};
d::String _p_branch{};
static std::shared_ptr<_n_Record_12288> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12288>();out->_p_graph=d::decode<d::String>(j["graph"]);out->_p_message=d::decode<d::String>(j["message"]);out->_p_branch=d::decode<d::String>(j["branch"]);return out;}
};
struct _n_Record_12290{
d::String _p_graph{};
static std::shared_ptr<_n_Record_12290> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12290>();out->_p_graph=d::decode<d::String>(j["graph"]);return out;}
};
struct _n_Record_12295{
d::String _p_graph{};
d::String _p_message{};
static std::shared_ptr<_n_Record_12295> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_12295>();out->_p_graph=d::decode<d::String>(j["graph"]);out->_p_message=d::decode<d::String>(j["message"]);return out;}
};
d::Array<std::shared_ptr<_n_Record_12230>,false> _n_lines_12229();
d::String _n_sha_12233(double _a0);
const double _n_EVERY_12225=[](){return 1.1;}();
const double _n_TYPE_12226=[](){return 0.55;}();
d::Array<std::variant<d::Array<d::String,false>,std::shared_ptr<_n_Record_12228>>,false> _n_HISTORY_12227=[](){return d::Array<std::variant<d::Array<d::String,false>,std::shared_ptr<_n_Record_12228>>,false>{([&](){auto _n_object_12274=std::make_shared<_n_Record_12228>();_n_object_12274->_p_branch=d::String(u"feat/search");_n_object_12274->_p_on=d::Array<d::String,false>{d::String(u"search: rank names before notes"),d::String(u"search: / focuses the field")};_n_object_12274->_p_main=std::optional<d::String>(d::String(u"docs: the install page"));return _n_object_12274;})(),d::Array<d::String,false>{d::String(u"fix: keep the sidebar's scroll")},([&](){auto _n_object_12276=std::make_shared<_n_Record_12228>();_n_object_12276->_p_branch=d::String(u"feat/stars");_n_object_12276->_p_on=d::Array<d::String,false>{d::String(u"header: show the repo's stars"),d::String(u"header: wait before asking again")};return _n_object_12276;})(),d::Array<d::String,false>{d::String(u"release 0.4.0"),d::String(u"readme: a banner in both themes")},([&](){auto _n_object_12278=std::make_shared<_n_Record_12228>();_n_object_12278->_p_branch=d::String(u"fix/safari");_n_object_12278->_p_on=d::Array<d::String,false>{d::String(u"mount: reload on a failed import")};_n_object_12278->_p_main=std::optional<d::String>(d::String(u"ci: node 24"));return _n_object_12278;})(),d::Array<d::String,false>{d::String(u"pieces: add pipeline"),d::String(u"pieces: add sparkline")},([&](){auto _n_object_12280=std::make_shared<_n_Record_12228>();_n_object_12280->_p_branch=d::String(u"feat/kit");_n_object_12280->_p_on=d::Array<d::String,false>{d::String(u"kit: particles"),d::String(u"kit: fields and looks"),d::String(u"kit: a frame contract")};_n_object_12280->_p_main=std::optional<d::String>(d::String(u"site: dark theme"));return _n_object_12280;})(),d::Array<d::String,false>{d::String(u"chore: bump typescript")}};}();
std::shared_ptr<_n_Record_12232> _n_meta_12231=[](){return ([&](){auto _n_object_12283=std::make_shared<_n_Record_12232>();_n_object_12283->_p_name=d::String(u"git graph");_n_object_12283->_p_category=d::String(u"ui");_n_object_12283->_p_note=d::String(u"git log --graph scrolling, branches forking off main and merging back");_n_object_12283->_p_cols=60.0;_n_object_12283->_p_rows=16.0;_n_object_12283->_p_fps=15.0;_n_object_12283->_p_loop=(_n_EVERY_12225*double(d::filter(_n_lines_12229(),[&]( std::shared_ptr<_n_Record_12230> _a0) mutable ->std::optional<d::String>{std::shared_ptr<_n_Record_12230> _n_line_12245=_a0;
return _n_line_12245->_p_message;}).size()));return _n_object_12283;})();}();
d::Array<std::shared_ptr<_n_Record_12230>,false> _n_lines_12229(){{
d::Array<std::shared_ptr<_n_Record_12230>,false> _n_out_12241=d::Array<std::shared_ptr<_n_Record_12230>,false>{};
for(auto &&_n_item_12284:_n_HISTORY_12227){d::check_cancel();std::variant<d::Array<d::String,false>,std::shared_ptr<_n_Record_12228>> _n_part_12242=_n_item_12284;
{
if(d::truth(d::isArray(_n_part_12242))){d::check_cancel();for(auto &&_n_item_12285:std::get<d::Array<d::String,false>>(_n_part_12242)){d::check_cancel();d::String _n_message_12243=_n_item_12285;
(void)(_n_out_12241.push(([&](){auto _n_object_12287=std::make_shared<_n_Record_12230>();_n_object_12287->_p_graph=d::String(u"*");_n_object_12287->_p_message=std::optional<d::String>(_n_message_12243);_n_object_12287->_p_tag=(d::truth(d::startsWith(_n_message_12243,d::String(u"release ")))?(d::String(u"tag: v")+d::string(d::slice(_n_message_12243,8.0))+d::String(u"")):std::optional<d::String>{});return _n_object_12287;})()));
}
continue;
}
(void)(_n_out_12241.push(([&](){auto _n_object_12289=std::make_shared<_n_Record_12230>();_n_object_12289->_p_graph=d::String(u"*   ");_n_object_12289->_p_message=(d::String(u"merge ")+d::string(std::get<std::shared_ptr<_n_Record_12228>>(_n_part_12242)->_p_branch)+d::String(u""));_n_object_12289->_p_branch=std::optional<d::String>(std::get<std::shared_ptr<_n_Record_12228>>(_n_part_12242)->_p_branch);return _n_object_12289;})()));
(void)(_n_out_12241.push(([&](){auto _n_object_12291=std::make_shared<_n_Record_12230>();_n_object_12291->_p_graph=d::String(u"|\\  ");return _n_object_12291;})()));
for(auto &&_n_item_12292:std::get<std::shared_ptr<_n_Record_12228>>(_n_part_12242)->_p_on){d::check_cancel();d::String _n_message_12244=_n_item_12292;
(void)(_n_out_12241.push(([&](){auto _n_object_12294=std::make_shared<_n_Record_12230>();_n_object_12294->_p_graph=d::String(u"| * ");_n_object_12294->_p_message=std::optional<d::String>(_n_message_12244);_n_object_12294->_p_branch=std::optional<d::String>(std::get<std::shared_ptr<_n_Record_12228>>(_n_part_12242)->_p_branch);return _n_object_12294;})()));
}
if(d::truth(std::get<std::shared_ptr<_n_Record_12228>>(_n_part_12242)->_p_main)){d::check_cancel();(void)(_n_out_12241.push(([&](){auto _n_object_12296=std::make_shared<_n_Record_12230>();_n_object_12296->_p_graph=d::String(u"* | ");_n_object_12296->_p_message=std::optional<d::String>(d::read(std::get<std::shared_ptr<_n_Record_12228>>(_n_part_12242)->_p_main));return _n_object_12296;})()));
}
(void)(_n_out_12241.push(([&](){auto _n_object_12298=std::make_shared<_n_Record_12230>();_n_object_12298->_p_graph=d::String(u"|/  ");return _n_object_12298;})()));

}
}
return _n_out_12241;

}
}

d::String _n_sha_12233(double _a0){double _n_i_12246=_a0;
{
double _n_h_12247=double(d::u32(d::imul((_n_i_12246+1.0),2654435761.0))>>(d::u32(0.0)&31));
(void)((_n_h_12247=double(d::u32(d::imul(double(d::i32(_n_h_12247)^d::i32(double(d::u32(_n_h_12247)>>(d::u32(15.0)&31)))),2246822507.0))>>(d::u32(0.0)&31))));
(void)((_n_h_12247=double(d::u32(d::imul(double(d::i32(_n_h_12247)^d::i32(double(d::u32(_n_h_12247)>>(d::u32(13.0)&31)))),3266489909.0))>>(d::u32(0.0)&31))));
return d::slice(d::padStart(d::radix(double(d::u32(double(d::i32(_n_h_12247)^d::i32(double(d::u32(_n_h_12247)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31)),16.0),8.0,d::String(u"0")),0.0,7.0);

}
}

struct Native_git_graph final:ascii::Piece{
double _n_cols_12234{};
double _n_rows_12235{};
d::Array<std::shared_ptr<_n_Record_12230>,false> _n_log_12236{};
double _n_n_12237{};
d::Array<d::String,false> _n_shas_12238{};
double _n_view_12239{};
d::Array<double,false> _n_tops_12240{};
std::function<d::String(double,std::shared_ptr<_n_Record_12270>)> _render;

explicit Native_git_graph(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_12299=_n_meta_12231;
this->_n_cols_12234=_n_binding_12299->_p_cols;
this->_n_rows_12235=_n_binding_12299->_p_rows;
this->_n_log_12236=_n_lines_12229();
this->_n_n_12237=double(this->_n_log_12236.size());
this->_n_shas_12238=d::map(this->_n_log_12236,[&]( std::shared_ptr<_n_Record_12230> _a0,double _a1) mutable ->d::String{std::shared_ptr<_n_Record_12230> _n___12248=_a0;
double _n_i_12249=_a1;
return _n_sha_12233(_n_i_12249);});
this->_n_view_12239=(this->_n_rows_12235-2.0);
this->_n_tops_12240=d::flatMap(this->_n_log_12236,[&]( std::shared_ptr<_n_Record_12230> _a0,double _a1) mutable ->d::Array<double,false>{std::shared_ptr<_n_Record_12230> _n_line_12250=_a0;
double _n_i_12251=_a1;
return (d::truth(_n_line_12250->_p_message)?d::Array<double,false>{_n_i_12251}:d::Array<double,false>{});});
_render=[=]( double _a0,std::shared_ptr<_n_Record_12270> _a1) mutable ->d::String{double _n_t_12252=_a0;
{
double _n_at_12253=((_n_t_12252/_n_EVERY_12225)+0.6);
double _n_step_12254=std::floor(_n_at_12253);
double _n_into_12255=(_n_at_12253-_n_step_12254);
double _n_top_12256=d::at(this->_n_tops_12240,d::mod((d::mod((-d::number(_n_step_12254)),double(this->_n_tops_12240.size()))+double(this->_n_tops_12240.size())),double(this->_n_tops_12240.size())));
d::Array<d::String,false> _n_out_12257=d::Array<d::String,false>{d::padEnd(d::String(u"$ git log --graph --oneline"),this->_n_cols_12234),d::repeat(d::String(u" "),this->_n_cols_12234)};
bool _n_head_12258=true;
d::Set<d::String> _n_merged_12259=d::Set<d::String>();
bool _n_tip_12260=true;
{double _n_r_12261=0.0;
for(;d::truth((_n_r_12261<this->_n_view_12239));(void)((_n_r_12261++))){d::check_cancel();double _n_i_12262=d::mod((_n_top_12256+_n_r_12261),this->_n_n_12237);
std::shared_ptr<_n_Record_12230> _n_line_12263=d::at(this->_n_log_12236,_n_i_12262);
d::String _n_s_12264=d::padEnd(_n_line_12263->_p_graph,5.0);
if(d::truth(_n_line_12263->_p_message)){d::check_cancel();bool _n_onMain_12265=d::startsWith(_n_line_12263->_p_graph,d::String(u"*"));
d::String _n_named_12266=((((d::truth((!d::truth(_n_onMain_12265)))&&d::truth(_n_tip_12260))&&d::truth(_n_line_12263->_p_branch))&&d::truth((!d::truth(_n_merged_12259.has(d::read(_n_line_12263->_p_branch))))))?d::read(_n_line_12263->_p_branch):d::String(u""));
d::String _n_marks_12267=d::join(d::filter(d::Array<d::String,false>{((d::truth(_n_onMain_12265)&&d::truth(_n_head_12258))?d::String(u"HEAD -> main"):d::String(u"")),_n_named_12266,([&]()->d::String{auto _n_logical_12300=_n_line_12263->_p_tag;return d::present(_n_logical_12300)?d::read(_n_logical_12300):d::String(u"");})()},d::ToBoolean{}),d::String(u", "));
d::String _n_typed_12268=(d::truth((_n_r_12261==0.0))?([&](){auto _n_argument_12302=0.0;auto _n_argument_12303=std::ceil((double(d::read(_n_line_12263->_p_message).size())*d::minimum({1.0,(_n_into_12255/_n_TYPE_12226)})));return d::slice(d::read(_n_line_12263->_p_message),_n_argument_12302,_n_argument_12303);})():d::read(_n_line_12263->_p_message));
d::String _n_message_12269=(d::string((d::truth(_n_marks_12267)?(d::String(u"(")+d::string(_n_marks_12267)+d::String(u") ")):d::String(u"")))+d::string(_n_typed_12268));
if(d::truth(_n_onMain_12265)){d::check_cancel();(void)((_n_head_12258=false));
}else {d::check_cancel();(void)((_n_tip_12260=false));
}
if((d::truth(_n_onMain_12265)&&d::truth(_n_line_12263->_p_branch))){d::check_cancel();(void)(_n_merged_12259.add(d::read(_n_line_12263->_p_branch)));
}
(void)((_n_s_12264=(d::string(_n_s_12264)+d::string((d::String(u"")+d::string(d::at(this->_n_shas_12238,_n_i_12262))+d::String(u" ")+d::string(_n_message_12269)+d::String(u""))))));
}
(void)(_n_out_12257.push(d::padEnd(d::slice(_n_s_12264,0.0,this->_n_cols_12234),this->_n_cols_12234)));
}}
return d::join(_n_out_12257,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("git-graph").cols)*ascii::catalog_meta("git-graph").rows);auto _env=std::make_shared<_n_Record_12270>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &git_graph_meta(){return catalog_meta("git-graph");}
std::unique_ptr<Piece> make_git_graph(const AsciiPieceOptions &o){return std::make_unique<Native_git_graph>(o);}
}
