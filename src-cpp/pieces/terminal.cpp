// Direct, statically typed C++ from src/pieces/terminal.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_32493;
struct _n_Record_32494;
struct _n_Record_32506;
struct _n_Record_32538;
struct _n_Record_32539;
struct _n_Record_32551;
struct _n_Record_32493{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_32494> _p_options{};
static std::shared_ptr<_n_Record_32493> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32493>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_32494>>(j["options"]);return out;}
};
struct _n_Record_32494{
d::String _p_prompt{};
d::String _p_title{};
static std::shared_ptr<_n_Record_32494> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32494>();out->_p_prompt=d::decode<d::String>(j["prompt"]);out->_p_title=d::decode<d::String>(j["title"]);return out;}
};
struct _n_Record_32506{
d::String _p_cmd{};
double _p_shown{};
d::Array<double,false> _p_keys{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _p_lines{};
std::optional<double> _p_enter{};
static std::shared_ptr<_n_Record_32506> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32506>();out->_p_cmd=d::decode<d::String>(j["cmd"]);out->_p_shown=d::decode<double>(j["shown"]);out->_p_keys=d::decode<d::Array<double,false>>(j["keys"]);out->_p_lines=d::decode<d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>>(j["lines"]);out->_p_enter=d::decode<std::optional<double>>(j["enter"]);return out;}
};
struct _n_Record_32538{
std::optional<d::String> _p_prompt{};
std::optional<d::String> _p_title{};
static std::shared_ptr<_n_Record_32538> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32538>();out->_p_prompt=d::decode<std::optional<d::String>>(j["prompt"]);out->_p_title=d::decode<std::optional<d::String>>(j["title"]);return out;}
};
struct _n_Record_32539{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_32539> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32539>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_32551{
d::String _p_cmd{};
double _p_shown{};
d::Array<d::Nil,false> _p_keys{};
d::Array<d::Nil,false> _p_lines{};
static std::shared_ptr<_n_Record_32551> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_32551>();out->_p_cmd=d::decode<d::String>(j["cmd"]);out->_p_shown=d::decode<double>(j["shown"]);out->_p_keys=d::decode<d::Array<d::Nil,false>>(j["keys"]);out->_p_lines=d::decode<d::Array<d::Nil,false>>(j["lines"]);return out;}
};
std::function<double()> _n_mulberry32_32496(double _a0);
std::shared_ptr<_n_Record_32493> _n_meta_32492=[](){return ([&](){auto _n_object_32544=std::make_shared<_n_Record_32493>();_n_object_32544->_p_name=d::String(u"terminal");_n_object_32544->_p_category=d::String(u"ui");_n_object_32544->_p_note=d::String(u"a shell session: typed commands, output, scrolling, clear");_n_object_32544->_p_cols=62.0;_n_object_32544->_p_rows=18.0;_n_object_32544->_p_fps=20.0;_n_object_32544->_p_options=([&](){auto _n_object_32546=std::make_shared<_n_Record_32494>();_n_object_32546->_p_prompt=d::String(u"~/notes $");_n_object_32546->_p_title=d::String(u"~/notes");return _n_object_32546;})();return _n_object_32544;})();}();
d::Array<std::shared_ptr<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>,false> _n_SESSION_32495=[](){return d::Array<std::shared_ptr<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>,false>{std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"ls"),0.08,d::Array<std::variant<d::String,double>,false>{std::variant<d::String,double>(d::String(u"drafts   ideas.txt   photos   reading.txt   todo.txt"))}),std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"cat todo.txt"),0.06,d::Array<std::variant<d::String,double>,false>{std::variant<d::String,double>(d::String(u"[x] water the plants")),std::variant<d::String,double>(d::String(u"[x] back up the photos")),std::variant<d::String,double>(d::String(u"[ ] fix the bike light")),std::variant<d::String,double>(d::String(u"[ ] call home on sunday"))}),std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"echo \"[ ] buy stamps\" >> todo.txt"),0.05,d::Array<std::variant<d::String,double>,false>{}),std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"wc -l todo.txt"),0.08,d::Array<std::variant<d::String,double>,false>{std::variant<d::String,double>(d::String(u"5 todo.txt"))}),std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"du -sh photos"),0.7,d::Array<std::variant<d::String,double>,false>{std::variant<d::String,double>(d::String(u"2.4G    photos"))}),std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"ping -c 3 localhost"),0.15,d::Array<std::variant<d::String,double>,false>{std::variant<d::String,double>(d::String(u"PING localhost (127.0.0.1): 56 data bytes")),std::variant<d::String,double>(0.8),std::variant<d::String,double>(d::String(u"64 bytes from 127.0.0.1: icmp_seq=0 ttl=64 time=0.041 ms")),std::variant<d::String,double>(0.9),std::variant<d::String,double>(d::String(u"64 bytes from 127.0.0.1: icmp_seq=1 ttl=64 time=0.067 ms")),std::variant<d::String,double>(0.9),std::variant<d::String,double>(d::String(u"64 bytes from 127.0.0.1: icmp_seq=2 ttl=64 time=0.052 ms")),std::variant<d::String,double>(0.3),std::variant<d::String,double>(d::String(u"")),std::variant<d::String,double>(d::String(u"--- localhost ping statistics ---")),std::variant<d::String,double>(d::String(u"3 packets transmitted, 3 received, 0% packet loss")),std::variant<d::String,double>(d::String(u"round-trip min/avg/max = 0.041/0.053/0.067 ms"))}),std::make_shared<std::tuple<d::String,double,std::optional<d::Array<std::variant<d::String,double>,false>>>>(d::String(u"clear"),0.0,std::optional<d::Array<std::variant<d::String,double>,false>>{})};}();
std::function<double()> _n_mulberry32_32496(double _a0){double _n_a_32512=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_32512=double(d::i32((_n_a_32512+1831565813.0))|d::i32(0.0))));
double _n_t_32513=d::imul(double(d::i32(_n_a_32512)^d::i32(double(d::u32(_n_a_32512)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_32512)));
(void)((_n_t_32513=double(d::i32((_n_t_32513+d::imul(double(d::i32(_n_t_32513)^d::i32(double(d::u32(_n_t_32513)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_32513)))))^d::i32(_n_t_32513))));
return (double(d::u32(double(d::i32(_n_t_32513)^d::i32(double(d::u32(_n_t_32513)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_terminal final:ascii::Piece{
d::String _n_prompt_32497{};
d::String _n_title_32498{};
double _n_cols_32499{};
double _n_rows_32500{};
double _n_inner_32501{};
double _n_view_32502{};
std::function<double()> _n_rand_32503{};
d::String _n_head_32504{};
d::Array<std::shared_ptr<_n_Record_32506>,false> _n_steps_32505{};
double _n_at_32507{};
double _n_period_32508{};
double _n_start_32509{};
std::function<d::String(double,std::shared_ptr<_n_Record_32539>)> _render;
d::String _n_cell_32510(d::String _a0){d::String _n_s_32520=_a0;
return (d::truth((double(_n_s_32520.size())>this->_n_inner_32501))?d::slice(_n_s_32520,0.0,this->_n_inner_32501):d::padEnd(_n_s_32520,this->_n_inner_32501));}

explicit Native_terminal(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_32547=d::decode<std::shared_ptr<_n_Record_32538>>(_options.data);
this->_n_prompt_32497=(d::present(_n_binding_32547->_p_prompt)?d::read(_n_binding_32547->_p_prompt):_n_meta_32492->_p_options->_p_prompt);
this->_n_title_32498=(d::present(_n_binding_32547->_p_title)?d::read(_n_binding_32547->_p_title):_n_meta_32492->_p_options->_p_title);
auto _n_binding_32548=_n_meta_32492;
this->_n_cols_32499=_n_binding_32548->_p_cols;
this->_n_rows_32500=_n_binding_32548->_p_rows;
this->_n_inner_32501=(this->_n_cols_32499-4.0);
this->_n_view_32502=(this->_n_rows_32500-2.0);
this->_n_rand_32503=_n_mulberry32_32496(5.0);
this->_n_head_32504=(d::string(this->_n_prompt_32497)+d::string(d::String(u" ")));
this->_n_steps_32505=d::Array<std::shared_ptr<_n_Record_32506>,false>{};
this->_n_at_32507=0.0;
for(auto &&_n_item_32549:_n_SESSION_32495){d::check_cancel();auto _n_binding_32550=_n_item_32549;
d::String _n_cmd_32514=std::get<0>(*_n_binding_32550);
double _n_wait_32515=std::get<1>(*_n_binding_32550);
std::optional<d::Array<std::variant<d::String,double>,false>> _n_out_32516=std::get<2>(*_n_binding_32550);
{
std::shared_ptr<_n_Record_32506> _n_s_32517=([&](){auto _n_object_32552=std::make_shared<_n_Record_32506>();_n_object_32552->_p_cmd=_n_cmd_32514;_n_object_32552->_p_shown=this->_n_at_32507;_n_object_32552->_p_keys=d::Array<double,false>{};_n_object_32552->_p_lines=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};return _n_object_32552;})();
(void)((this->_n_at_32507=(this->_n_at_32507+(0.9+(this->_n_rand_32503()*0.6)))));
{double _n_i_32518=0.0;
for(;d::truth((_n_i_32518<double(_n_cmd_32514.size())));(void)((_n_i_32518++))){d::check_cancel();(void)(_n_s_32517->_p_keys.push(this->_n_at_32507));
(void)((this->_n_at_32507=(this->_n_at_32507+([&](){auto _n_left_32553=([&](){auto _n_left_32555=(0.06+(this->_n_rand_32503()*0.07));auto _n_right_32556=(d::truth((d::at(_n_cmd_32514,_n_i_32518)==d::String(u" ")))?(this->_n_rand_32503()*0.12):0.0);return (_n_left_32555+_n_right_32556);})();auto _n_right_32554=(d::truth((this->_n_rand_32503()<0.04))?0.35:0.0);return (_n_left_32553+_n_right_32554);})())));
}}
(void)((_n_s_32517->_p_enter=std::optional<double>((this->_n_at_32507+0.12))));
(void)((this->_n_at_32507=(d::read(_n_s_32517->_p_enter)+_n_wait_32515)));
for(auto &&_n_item_32557:([&]()->d::Array<std::variant<d::String,double>,false>{auto _n_logical_32558=_n_out_32516;return d::truth(_n_logical_32558)?d::read(_n_logical_32558):d::Array<std::variant<d::String,double>,false>{};})()){d::check_cancel();std::variant<d::String,double> _n_line_32519=_n_item_32557;
{
if(d::truth((d::typeOf(_n_line_32519)==d::String(u"number")))){d::check_cancel();(void)((this->_n_at_32507=(this->_n_at_32507+std::get<double>(_n_line_32519))));
}else {d::check_cancel();(void)(_n_s_32517->_p_lines.push(std::make_shared<std::tuple<double,d::String>>((this->_n_at_32507=(this->_n_at_32507+0.035)),std::get<d::String>(_n_line_32519))));
}

}
}
(void)((this->_n_at_32507=(this->_n_at_32507+0.05)));
(void)(this->_n_steps_32505.push(_n_s_32517));

}
}
this->_n_period_32508=(d::read(d::at(this->_n_steps_32505,(double(this->_n_steps_32505.size())-1.0))->_p_enter)+0.1);
this->_n_start_32509=d::at(d::at(this->_n_steps_32505,5.0)->_p_keys,9.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_32539> _a1) mutable ->d::String{double _n_t_32521=_a0;
{
double _n_now_32522=d::mod((d::mod((_n_t_32521+this->_n_start_32509),this->_n_period_32508)+this->_n_period_32508),this->_n_period_32508);
d::Array<d::String,false> _n_lines_32523=d::Array<d::String,false>{};
std::optional<std::array<double,2>> _n_cursor_32524=std::optional<std::array<double,2>>{};
double _n_ref_32525=0.0;
for(auto &&_n_item_32559:this->_n_steps_32505){d::check_cancel();std::shared_ptr<_n_Record_32506> _n_s_32526=_n_item_32559;
{
if(d::truth((_n_s_32526->_p_shown>_n_now_32522))){d::check_cancel();break;
}
double _n_typed_32527=double(d::filter(_n_s_32526->_p_keys,[&]( double _a0) mutable ->bool{double _n_k_32528=_a0;
return (_n_k_32528<=_n_now_32522);}).size());
(void)(_n_lines_32523.push((d::string(this->_n_head_32504)+d::string(d::slice(_n_s_32526->_p_cmd,0.0,_n_typed_32527)))));
(void)((_n_ref_32525=(d::truth(_n_typed_32527)?d::at(_n_s_32526->_p_keys,(_n_typed_32527-1.0)):_n_s_32526->_p_shown)));
if(d::truth((_n_now_32522<d::read(_n_s_32526->_p_enter)))){d::check_cancel();(void)((_n_cursor_32524=std::array<double,2>{(double(_n_lines_32523.size())-1.0),(double(this->_n_head_32504.size())+_n_typed_32527)}));
break;
}
(void)((_n_ref_32525=d::read(_n_s_32526->_p_enter)));
for(auto &&_n_item_32560:_n_s_32526->_p_lines){d::check_cancel();auto _n_binding_32561=_n_item_32560;
double _n_k_32529=std::get<0>(*_n_binding_32561);
d::String _n_line_32530=std::get<1>(*_n_binding_32561);
{
if(d::truth((_n_k_32529>_n_now_32522))){d::check_cancel();break;
}
(void)(_n_lines_32523.push(_n_line_32530));
(void)((_n_ref_32525=_n_k_32529));

}
}
(void)((_n_cursor_32524=std::array<double,2>{double(_n_lines_32523.size()),0.0}));

}
}
double _n_top_32531=d::maximum({0.0,((double(_n_lines_32523.size())+((d::truth(_n_cursor_32524)&&d::truth((d::at(d::read(_n_cursor_32524),0.0)==double(_n_lines_32523.size()))))?1.0:0.0))-this->_n_view_32502)});
bool _n_blink_32532=(d::mod((_n_now_32522-_n_ref_32525),1.0)<0.55);
d::Array<d::String,false> _n_body_32533=d::Array<d::String,false>{};
{double _n_r_32534=0.0;
for(;d::truth((_n_r_32534<this->_n_view_32502));(void)((_n_r_32534++))){d::check_cancel();double _n_i_32535=(_n_top_32531+_n_r_32534);
d::String _n_s_32536=this->_n_cell_32510(([&]()->d::String{auto _n_logical_32562=d::at(_n_lines_32523,_n_i_32535);return d::has(_n_lines_32523,_n_i_32535)?_n_logical_32562:d::String(u"");})());
if((((d::truth(_n_cursor_32524)&&d::truth((d::at(d::read(_n_cursor_32524),0.0)==_n_i_32535)))&&d::truth(_n_blink_32532))&&d::truth((d::at(d::read(_n_cursor_32524),1.0)<this->_n_inner_32501)))){d::check_cancel();(void)((_n_s_32536=([&](){auto _n_left_32563=(d::string(d::slice(_n_s_32536,0.0,d::at(d::read(_n_cursor_32524),1.0)))+d::string(d::String(u"█")));auto _n_right_32564=d::slice(_n_s_32536,(d::at(d::read(_n_cursor_32524),1.0)+1.0));return (d::string(_n_left_32563)+d::string(_n_right_32564));})()));
}
(void)(_n_body_32533.push((d::string((d::string(d::String(u"│ "))+d::string(_n_s_32536)))+d::string(d::String(u" │")))));
}}
d::String _n_name_32537=(d::truth(this->_n_title_32498)?(d::string((d::string(d::String(u"─ "))+d::string(d::slice(this->_n_title_32498,0.0,(this->_n_cols_32499-6.0)))))+d::string(d::String(u" "))):d::String(u""));
return d::join(([&](){d::Array<d::String,false> _n_array_32565;_n_array_32565.push((d::string((d::string(d::String(u"╭"))+d::string(d::slice((d::string(_n_name_32537)+d::string(d::repeat(d::String(u"─"),this->_n_cols_32499))),0.0,(this->_n_cols_32499-2.0)))))+d::string(d::String(u"╮"))));for(const auto &_v:_n_body_32533)_n_array_32565.push(_v);_n_array_32565.push((d::string((d::string(d::String(u"╰"))+d::string(d::repeat(d::String(u"─"),(this->_n_cols_32499-2.0)))))+d::string(d::String(u"╯"))));return _n_array_32565;})(),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("terminal").cols)*ascii::catalog_meta("terminal").rows);auto _env=std::make_shared<_n_Record_32539>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &terminal_meta(){return catalog_meta("terminal");}
std::unique_ptr<Piece> make_terminal(const AsciiPieceOptions &o){return std::make_unique<Native_terminal>(o);}
}
