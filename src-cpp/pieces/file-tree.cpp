// Direct, statically typed C++ from src/pieces/file-tree.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10037;
struct _n_Record_10038;
struct _n_Record_10045;
struct _n_Record_10046;
struct _n_Record_10060;
struct _n_Record_10065;
struct _n_Record_10116;
struct _n_Record_10117;
struct _n_Record_10125;
struct _n_Record_10128;
struct _n_Record_10037{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_10038> _p_options{};
static std::shared_ptr<_n_Record_10037> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10037>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_10038>>(j["options"]);return out;}
};
struct _n_Record_10038{
d::String _p_root{};
d::String _p_entries{};
static std::shared_ptr<_n_Record_10038> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10038>();out->_p_root=d::decode<d::String>(j["root"]);out->_p_entries=d::decode<d::String>(j["entries"]);return out;}
};
struct _n_Record_10045{
d::Array<std::shared_ptr<_n_Record_10046>,false> _p_kids{};
static std::shared_ptr<_n_Record_10045> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10045>();out->_p_kids=d::decode<d::Array<std::shared_ptr<_n_Record_10046>,false>>(j["kids"]);return out;}
};
struct _n_Record_10046:public _n_Record_10045{
d::String _p_name{};
bool _p_dir{};
static std::shared_ptr<_n_Record_10046> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10046>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_dir=d::decode<bool>(j["dir"]);out->_p_kids=d::decode<d::Array<std::shared_ptr<_n_Record_10046>,false>>(j["kids"]);return out;}
};
struct _n_Record_10060{
std::shared_ptr<_n_Record_10046> _p_node{};
d::String _p_text{};
static std::shared_ptr<_n_Record_10060> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10060>();out->_p_node=d::decode<std::shared_ptr<_n_Record_10046>>(j["node"]);out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_10065{
double _p_at{};
d::String _p_text{};
static std::shared_ptr<_n_Record_10065> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10065>();out->_p_at=d::decode<double>(j["at"]);out->_p_text=d::decode<d::String>(j["text"]);return out;}
};
struct _n_Record_10116{
std::optional<d::String> _p_root{};
std::optional<d::String> _p_entries{};
static std::shared_ptr<_n_Record_10116> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10116>();out->_p_root=d::decode<std::optional<d::String>>(j["root"]);out->_p_entries=d::decode<std::optional<d::String>>(j["entries"]);return out;}
};
struct _n_Record_10117{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10117> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10117>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_10125{
d::Array<d::Nil,false> _p_kids{};
static std::shared_ptr<_n_Record_10125> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10125>();out->_p_kids=d::decode<d::Array<d::Nil,false>>(j["kids"]);return out;}
};
struct _n_Record_10128{
d::String _p_name{};
bool _p_dir{};
d::Array<d::Nil,false> _p_kids{};
static std::shared_ptr<_n_Record_10128> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10128>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_dir=d::decode<bool>(j["dir"]);out->_p_kids=d::decode<d::Array<d::Nil,false>>(j["kids"]);return out;}
};
std::shared_ptr<_n_Record_10045> _n_parse_10044(d::String _a0);
const d::String _n_ENTRIES_10035=[](){return d::join(d::Array<d::String,false>{d::String(u"docs/"),d::String(u"  guide.md"),d::String(u"  notes.md"),d::String(u"public/"),d::String(u"  favicon.ico"),d::String(u"  robots.txt"),d::String(u"src/"),d::String(u"  components/"),d::String(u"    button.ts"),d::String(u"    card.ts"),d::String(u"    menu.ts"),d::String(u"  lib/"),d::String(u"    fetch.ts"),d::String(u"    format.ts"),d::String(u"  index.ts"),d::String(u"  styles.css"),d::String(u"tests/"),d::String(u"  format.test.ts"),d::String(u"package.json"),d::String(u"README.md")},d::String(u"\n"));}();
std::shared_ptr<_n_Record_10037> _n_meta_10036=[](){return ([&](){auto _n_object_10122=std::make_shared<_n_Record_10037>();_n_object_10122->_p_name=d::String(u"file tree");_n_object_10122->_p_category=d::String(u"ui");_n_object_10122->_p_note=d::String(u"a tree listing opened folder by folder, then closed again");_n_object_10122->_p_cols=36.0;_n_object_10122->_p_rows=23.0;_n_object_10122->_p_fps=15.0;_n_object_10122->_p_options=([&](){auto _n_object_10124=std::make_shared<_n_Record_10038>();_n_object_10124->_p_root=d::String(u".");_n_object_10124->_p_entries=_n_ENTRIES_10035;return _n_object_10124;})();return _n_object_10122;})();}();
const double _n_MOVE_10039=[](){return 0.13;}();
const double _n_PAUSE_10040=[](){return 0.3;}();
const double _n_REVEAL_10041=[](){return 0.07;}();
const double _n_HOLD_10042=[](){return 1.8;}();
const double _n_REST_10043=[](){return 0.7;}();
std::shared_ptr<_n_Record_10045> _n_parse_10044(d::String _a0){d::String _n_text_10072=_a0;
{
std::shared_ptr<_n_Record_10045> _n_root_10073=([&](){auto _n_object_10126=std::make_shared<_n_Record_10045>();_n_object_10126->_p_kids=d::Array<std::shared_ptr<_n_Record_10046>,false>{};return _n_object_10126;})();
d::Array<std::shared_ptr<_n_Record_10045>,false> _n_stack_10074=d::Array<std::shared_ptr<_n_Record_10045>,false>{_n_root_10073};
for(auto &&_n_item_10127:d::split(d::string(_n_text_10072),d::String(u"\n"))){d::check_cancel();d::String _n_raw_10075=_n_item_10127;
{
d::String _n_name_10076=d::trim(_n_raw_10075);
if(d::truth((!d::truth(_n_name_10076)))){d::check_cancel();continue;
}
double _n_depth_10077=std::floor(((double(_n_raw_10075.size())-double(d::trim(_n_raw_10075,true,false).size()))/2.0));
std::shared_ptr<_n_Record_10046> _n_node_10078=([&](){auto _n_object_10129=std::make_shared<_n_Record_10046>();_n_object_10129->_p_name=_n_name_10076;_n_object_10129->_p_dir=d::endsWith(_n_name_10076,d::String(u"/"));_n_object_10129->_p_kids=d::Array<std::shared_ptr<_n_Record_10046>,false>{};return _n_object_10129;})();
(void)((_n_stack_10074.resize(size_t(d::minimum({double(_n_stack_10074.size()),(_n_depth_10077+1.0)}))),d::minimum({double(_n_stack_10074.size()),(_n_depth_10077+1.0)})));
(void)(d::at(_n_stack_10074,(double(_n_stack_10074.size())-1.0))->_p_kids.push(_n_node_10078));
if(d::truth(_n_node_10078->_p_dir)){d::check_cancel();(void)(_n_stack_10074.push(std::static_pointer_cast<_n_Record_10045>(_n_node_10078)));
}

}
}
return _n_root_10073;

}
}

struct Native_file_tree final:ascii::Piece{
d::String _n_label_10047{};
d::String _n_entries_10048{};
double _n_cols_10049{};
double _n_rows_10050{};
std::shared_ptr<_n_Record_10045> _n_root_10051{};
d::Array<std::shared_ptr<_n_Record_10046>,false> _n_dirs_10052{};
double _n_nd_10053{};
double _n_nf_10054{};
d::String _n_summary_10056{};
d::Map<std::shared_ptr<_n_Record_10045>,double> _n_shown_10057{};
std::shared_ptr<_n_Record_10046> _n_cursor_10058{};
double _n_width_10061{};
d::String _n_pad_10062{};
d::Array<std::shared_ptr<_n_Record_10065>,false> _n_snaps_10064{};
double _n_total_10066{};
double _n_start_10067{};
std::function<d::String(double,std::shared_ptr<_n_Record_10117>)> _render;
void _n_collect_10055(std::shared_ptr<_n_Record_10045> _a0){std::shared_ptr<_n_Record_10045> _n_n_10079=_a0;
return d::forEach(_n_n_10079->_p_kids,[&]( std::shared_ptr<_n_Record_10046> _a0) mutable ->void{std::shared_ptr<_n_Record_10046> _n_k_10080=_a0;
{
(void)((d::truth(_n_k_10080->_p_dir)?(this->_n_nd_10053++):(this->_n_nf_10054++)));
if((d::truth(_n_k_10080->_p_dir)&&d::truth(double(_n_k_10080->_p_kids.size())))){d::check_cancel();(void)(this->_n_dirs_10052.push(_n_k_10080));
}
(void)(this->_n_collect_10055(std::static_pointer_cast<_n_Record_10045>(_n_k_10080)));

}
});}

d::Array<std::shared_ptr<_n_Record_10060>,false> _n_listing_10059(){{
d::Array<std::shared_ptr<_n_Record_10060>,false> _n_out_10081=d::Array<std::shared_ptr<_n_Record_10060>,false>{};
std::function<void(std::shared_ptr<_n_Record_10045>,d::String)> _n_walk_10082=[&]( std::shared_ptr<_n_Record_10045> _a0,d::String _a1) mutable ->void{std::shared_ptr<_n_Record_10045> _n_node_10083=_a0;
d::String _n_prefix_10084=_a1;
{
double _n_n_10085=([&]()->double{auto _n_logical_10136=this->_n_shown_10057.get(_n_node_10083);return d::truth(_n_logical_10136)?d::read(_n_logical_10136):0.0;})();
{double _n_i_10086=0.0;
for(;d::truth((_n_i_10086<_n_n_10085));(void)((_n_i_10086++))){d::check_cancel();std::shared_ptr<_n_Record_10046> _n_kid_10087=d::at(_n_node_10083->_p_kids,_n_i_10086);
bool _n_last_10088=(_n_i_10086==(double(_n_node_10083->_p_kids.size())-1.0));
d::String _n_branch_10089=(d::string((d::truth(_n_last_10088)?d::String(u"└─"):d::String(u"├─")))+d::string((d::truth((_n_kid_10087==this->_n_cursor_10058))?d::String(u"> "):d::String(u"─ "))));
std::variant<bool,double> _n_closed_10090=([&]()->std::variant<bool,double>{auto _n_logical_10137=([&]()->std::variant<double,bool>{auto _n_logical_10138=_n_kid_10087->_p_dir;return d::truth(_n_logical_10138)?double(_n_kid_10087->_p_kids.size()):std::variant<double,bool>(_n_logical_10138);})();return d::truth(_n_logical_10137)?(!d::truth(this->_n_shown_10057.get(std::static_pointer_cast<_n_Record_10045>(_n_kid_10087)))):std::visit([&](const auto &_v)->std::variant<bool,double>{return std::variant<bool,double>(_v);},_n_logical_10137);})();
(void)(_n_out_10081.push(([&](){auto _n_object_10140=std::make_shared<_n_Record_10060>();_n_object_10140->_p_node=_n_kid_10087;_n_object_10140->_p_text=(d::string((d::string((d::string(_n_prefix_10084)+d::string(_n_branch_10089)))+d::string(_n_kid_10087->_p_name)))+d::string((d::truth(_n_closed_10090)?d::String(u" +"):d::String(u""))));return _n_object_10140;})()));
if(d::truth(_n_kid_10087->_p_dir)){d::check_cancel();(void)(_n_walk_10082(std::static_pointer_cast<_n_Record_10045>(_n_kid_10087),(d::string(_n_prefix_10084)+d::string((d::truth(_n_last_10088)?d::String(u"    "):d::String(u"│   "))))));
}
}}

}
};
(void)(_n_walk_10082(this->_n_root_10051,d::String(u"")));
return _n_out_10081;

}
}

d::String _n_render_10063(){{
d::Array<d::String,false> _n_lines_10094=([&](){d::Array<d::String,false> _n_array_10141;_n_array_10141.push(this->_n_label_10047);for(const auto &_v:d::map(this->_n_listing_10059(),[&]( std::shared_ptr<_n_Record_10060> _a0) mutable ->d::String{std::shared_ptr<_n_Record_10060> _n_v_10095=_a0;
return _n_v_10095->_p_text;}))_n_array_10141.push(_v);return _n_array_10141;})().slice(0.0,(this->_n_rows_10050-2.0));
while(d::truth((double(_n_lines_10094.size())<(this->_n_rows_10050-1.0)))){d::check_cancel();(void)(_n_lines_10094.push(d::String(u"")));
}
(void)(_n_lines_10094.push(this->_n_summary_10056));
return d::join(d::map(_n_lines_10094,[&]( d::String _a0) mutable ->d::String{d::String _n_s_10096=_a0;
return d::slice(d::padEnd((d::string(this->_n_pad_10062)+d::string(_n_s_10096)),this->_n_cols_10049),0.0,this->_n_cols_10049);}),d::String(u"\n"));

}
}

void _n_snap_10068(double _a0){double _n_dur_10097=_a0;
{
(void)(this->_n_snaps_10064.push(([&](){auto _n_object_10143=std::make_shared<_n_Record_10065>();_n_object_10143->_p_at=this->_n_total_10066;_n_object_10143->_p_text=this->_n_render_10063();return _n_object_10143;})()));
(void)((this->_n_total_10066=(this->_n_total_10066+_n_dur_10097)));

}
}

void _n_step_10069(double _a0){double _n_dir_10098=_a0;
{
d::Array<std::shared_ptr<_n_Record_10060>,false> _n_vis_10099=this->_n_listing_10059();
double _n_i_10100=d::findIndex(_n_vis_10099,[&]( std::shared_ptr<_n_Record_10060> _a0) mutable ->bool{std::shared_ptr<_n_Record_10060> _n_v_10101=_a0;
return (_n_v_10101->_p_node==this->_n_cursor_10058);});
(void)((this->_n_cursor_10058=d::at(_n_vis_10099,(_n_i_10100+_n_dir_10098))->_p_node));
(void)(this->_n_snap_10068(_n_MOVE_10039));

}
}

void _n_walkTo_10070(std::shared_ptr<_n_Record_10046> _a0){std::shared_ptr<_n_Record_10046> _n_node_10102=_a0;
{
d::Array<std::shared_ptr<_n_Record_10060>,false> _n_vis_10103=this->_n_listing_10059();
double _n_dir_10104=(d::truth(([&](){auto _n_left_10144=d::findIndex(_n_vis_10103,[&]( std::shared_ptr<_n_Record_10060> _a0) mutable ->bool{std::shared_ptr<_n_Record_10060> _n_v_10105=_a0;
return (_n_v_10105->_p_node==_n_node_10102);});auto _n_right_10145=d::findIndex(_n_vis_10103,[&]( std::shared_ptr<_n_Record_10060> _a0) mutable ->bool{std::shared_ptr<_n_Record_10060> _n_v_10106=_a0;
return (_n_v_10106->_p_node==this->_n_cursor_10058);});return (_n_left_10144>_n_right_10145);})())?1.0:(-d::number(1.0)));
while(d::truth((this->_n_cursor_10058!=_n_node_10102))){d::check_cancel();(void)(this->_n_step_10069(_n_dir_10104));
}

}
}

explicit Native_file_tree(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10130=d::decode<std::shared_ptr<_n_Record_10116>>(_options.data);
this->_n_label_10047=(d::present(_n_binding_10130->_p_root)?d::read(_n_binding_10130->_p_root):d::String(u"."));
this->_n_entries_10048=(d::present(_n_binding_10130->_p_entries)?d::read(_n_binding_10130->_p_entries):_n_ENTRIES_10035);
auto _n_binding_10131=_n_meta_10036;
this->_n_cols_10049=_n_binding_10131->_p_cols;
this->_n_rows_10050=_n_binding_10131->_p_rows;
this->_n_root_10051=_n_parse_10044(this->_n_entries_10048);
this->_n_dirs_10052=d::Array<std::shared_ptr<_n_Record_10046>,false>{};
this->_n_nd_10053=0.0;
this->_n_nf_10054=0.0;
(void)(this->_n_collect_10055(this->_n_root_10051));
this->_n_summary_10056=(d::String(u"")+d::string(this->_n_nd_10053)+d::String(u" director")+d::string((d::truth((this->_n_nd_10053==1.0))?d::String(u"y"):d::String(u"ies")))+d::String(u", ")+d::string(this->_n_nf_10054)+d::String(u" file")+d::string((d::truth((this->_n_nf_10054==1.0))?d::String(u""):d::String(u"s")))+d::String(u""));
this->_n_shown_10057=d::Map<std::shared_ptr<_n_Record_10045>,double>();
(void)(this->_n_shown_10057.set(this->_n_root_10051,double(this->_n_root_10051->_p_kids.size())));
this->_n_cursor_10058=([&]()->std::shared_ptr<_n_Record_10046>{auto _n_logical_10132=d::at(this->_n_dirs_10052,0.0);return d::truth(_n_logical_10132)?_n_logical_10132:d::at(this->_n_root_10051->_p_kids,0.0);})();
(void)(d::forEach(this->_n_dirs_10052,[&]( std::shared_ptr<_n_Record_10046> _a0) mutable ->d::Map<std::shared_ptr<_n_Record_10045>,double>{std::shared_ptr<_n_Record_10046> _n_d_10091=_a0;
return this->_n_shown_10057.set(std::static_pointer_cast<_n_Record_10045>(_n_d_10091),double(_n_d_10091->_p_kids.size()));}));
this->_n_width_10061=([&](){d::Array<double> _n_numbers_10133;_n_numbers_10133.push(double(this->_n_label_10047.size()));_n_numbers_10133.push(double(this->_n_summary_10056.size()));for(auto _x:d::map(this->_n_listing_10059(),[&]( std::shared_ptr<_n_Record_10060> _a0) mutable ->double{std::shared_ptr<_n_Record_10060> _n_l_10092=_a0;
return (double(_n_l_10092->_p_text.size())+2.0);}))_n_numbers_10133.push(_x);return d::maximum(_n_numbers_10133);})();
(void)(d::forEach(this->_n_dirs_10052,[&]( std::shared_ptr<_n_Record_10046> _a0) mutable ->d::Map<std::shared_ptr<_n_Record_10045>,double>{std::shared_ptr<_n_Record_10046> _n_d_10093=_a0;
return this->_n_shown_10057.set(std::static_pointer_cast<_n_Record_10045>(_n_d_10093),0.0);}));
this->_n_pad_10062=d::repeat(d::String(u" "),([&](){auto _n_argument_10134=0.0;auto _n_argument_10135=std::floor(((this->_n_cols_10049-this->_n_width_10061)/2.0));return d::maximum({_n_argument_10134,_n_argument_10135});})());
this->_n_snaps_10064=d::Array<std::shared_ptr<_n_Record_10065>,false>{};
this->_n_total_10066=0.0;
this->_n_start_10067=0.0;
(void)(this->_n_snap_10068(_n_REST_10043));
(void)(d::forEach(this->_n_dirs_10052,[&]( std::shared_ptr<_n_Record_10046> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_10046> _n_node_10107=_a0;
double _n_i_10108=_a1;
{
(void)(this->_n_walkTo_10070(_n_node_10107));
(void)(this->_n_snap_10068(_n_PAUSE_10040));
{double _n_k_10109=1.0;
for(;d::truth((_n_k_10109<=double(_n_node_10107->_p_kids.size())));(void)((_n_k_10109++))){d::check_cancel();(void)((this->_n_shown_10057.set(std::static_pointer_cast<_n_Record_10045>(_n_node_10107),_n_k_10109),this->_n_snap_10068(_n_REVEAL_10041)));
}}
if(d::truth(((_n_i_10108+1.0)==std::ceil((double(this->_n_dirs_10052.size())*0.6))))){d::check_cancel();(void)((this->_n_start_10067=this->_n_total_10066));
}

}
}));
(void)(this->_n_snap_10068(_n_HOLD_10042));
{double _n_i_10110=(double(this->_n_dirs_10052.size())-1.0);
for(;d::truth((_n_i_10110>=0.0));(void)((_n_i_10110--))){d::check_cancel();std::shared_ptr<_n_Record_10046> _n_node_10111=d::at(this->_n_dirs_10052,_n_i_10110);
(void)(this->_n_walkTo_10070(_n_node_10111));
(void)(this->_n_snap_10068(_n_PAUSE_10040));
{double _n_k_10112=(double(_n_node_10111->_p_kids.size())-1.0);
for(;d::truth((_n_k_10112>=0.0));(void)((_n_k_10112--))){d::check_cancel();(void)((this->_n_shown_10057.set(std::static_pointer_cast<_n_Record_10045>(_n_node_10111),_n_k_10112),this->_n_snap_10068(_n_REVEAL_10041)));
}}
}}
(void)((this->_n_total_10066=(this->_n_total_10066+_n_REST_10043)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_10117> _a1) mutable ->d::String{double _n_t_10113=_a0;
{
double _n_p_10114=d::mod((_n_t_10113+this->_n_start_10067),this->_n_total_10066);
double _n_i_10115=0.0;
while((d::truth(((_n_i_10115+1.0)<double(this->_n_snaps_10064.size())))&&d::truth((d::at(this->_n_snaps_10064,(_n_i_10115+1.0))->_p_at<=_n_p_10114)))){d::check_cancel();(void)((_n_i_10115++));
}
return d::at(this->_n_snaps_10064,_n_i_10115)->_p_text;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("file-tree").cols)*ascii::catalog_meta("file-tree").rows);auto _env=std::make_shared<_n_Record_10117>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &file_tree_meta(){return catalog_meta("file-tree");}
std::unique_ptr<Piece> make_file_tree(const AsciiPieceOptions &o){return std::make_unique<Native_file_tree>(o);}
}
