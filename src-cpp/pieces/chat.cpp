// Direct, statically typed C++ from src/pieces/chat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_4177;
struct _n_Record_4178;
struct _n_Record_4180;
struct _n_Record_4181;
struct _n_Record_4241;
struct _n_Record_4242;
struct _n_Record_4177{
d::Array<std::shared_ptr<_n_Record_4178>,false> _p_plan{};
double _p_total{};
static std::shared_ptr<_n_Record_4177> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4177>();out->_p_plan=d::decode<d::Array<std::shared_ptr<_n_Record_4178>,false>>(j["plan"]);out->_p_total=d::decode<double>(j["total"]);return out;}
};
struct _n_Record_4178{
double _p_typed{};
double _p_shows{};
double _p_done{};
static std::shared_ptr<_n_Record_4178> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4178>();out->_p_typed=d::decode<double>(j["typed"]);out->_p_shows=d::decode<double>(j["shows"]);out->_p_done=d::decode<double>(j["done"]);return out;}
};
struct _n_Record_4180{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_4181> _p_options{};
double _p_loop{};
static std::shared_ptr<_n_Record_4180> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4180>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_4181>>(j["options"]);out->_p_loop=d::decode<double>(j["loop"]);return out;}
};
struct _n_Record_4181{
d::Array<d::String,false> _p_messages{};
static std::shared_ptr<_n_Record_4181> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4181>();out->_p_messages=d::decode<d::Array<d::String,false>>(j["messages"]);return out;}
};
struct _n_Record_4241{
std::optional<d::Array<d::String,false>> _p_messages{};
static std::shared_ptr<_n_Record_4241> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4241>();out->_p_messages=d::decode<std::optional<d::Array<d::String,false>>>(j["messages"]);return out;}
};
struct _n_Record_4242{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_4242> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4242>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::shared_ptr<_n_Record_4177> _n_timing_4176(d::Array<d::String,false> _a0);
d::Array<d::String,false> _n_wrap_4182(d::String _a0);
d::Array<d::String,false> _n_bubble_4183(d::Array<d::String,false> _a0,bool _a1,double _a2,std::optional<double> _a3);
const double _n_WIDE_4171=[](){return 26.0;}();
const double _n_KEY_4172=[](){return 0.055;}();
const double _n_STREAM_4173=[](){return 0.025;}();
const double _n_VIEW_4174=[](){return 14.0;}();
d::Array<d::String,false> _n_MESSAGES_4175=[](){return d::Array<d::String,false>{d::String(u"can you help me name my cli?"),d::String(u"sure. what does it do?"),d::String(u"it turns images into ascii art"),d::String(u"how about glyph, inkdrop or asciify?"),d::String(u"glyph. that's the one"),d::String(u"nice pick. want a logo to go with it?")};}();
std::shared_ptr<_n_Record_4180> _n_meta_4179=[](){return ([&](){auto _n_object_4247=std::make_shared<_n_Record_4180>();_n_object_4247->_p_name=d::String(u"chat");_n_object_4247->_p_category=d::String(u"ui");_n_object_4247->_p_note=d::String(u"a chat in bubbles: typed, sent, three dots, then the reply streaming");_n_object_4247->_p_cols=48.0;_n_object_4247->_p_rows=18.0;_n_object_4247->_p_fps=20.0;_n_object_4247->_p_options=([&](){auto _n_object_4249=std::make_shared<_n_Record_4181>();_n_object_4249->_p_messages=_n_MESSAGES_4175;return _n_object_4249;})();_n_object_4247->_p_loop=_n_timing_4176(_n_MESSAGES_4175)->_p_total;return _n_object_4247;})();}();
std::shared_ptr<_n_Record_4177> _n_timing_4176(d::Array<d::String,false> _a0){d::Array<d::String,false> _n_talk_4195=_a0;
{
double _n_T_4196=0.6;
d::Array<std::shared_ptr<_n_Record_4178>,false> _n_plan_4197=d::map(_n_talk_4195,[&]( d::String _a0,double _a1) mutable ->std::shared_ptr<_n_Record_4178>{d::String _n_text_4198=_a0;
double _n_i_4199=_a1;
{
if(d::truth((d::mod(_n_i_4199,2.0)==0.0))){d::check_cancel();double _n_typed_4200=_n_T_4196;
(void)((_n_T_4196=(_n_T_4196+((double(_n_text_4198.size())*_n_KEY_4172)+0.35))));
return ([&](){auto _n_object_4251=std::make_shared<_n_Record_4178>();_n_object_4251->_p_typed=_n_typed_4200;_n_object_4251->_p_shows=_n_T_4196;_n_object_4251->_p_done=_n_T_4196;return _n_object_4251;})();
}
double _n_dots_4201=(_n_T_4196+0.5);
double _n_shows_4202=(_n_dots_4201+1.3);
(void)((_n_T_4196=(_n_shows_4202+(double(_n_text_4198.size())*_n_STREAM_4173))));
double _n_done_4203=_n_T_4196;
(void)((_n_T_4196=(_n_T_4196+1.0)));
return ([&](){auto _n_object_4253=std::make_shared<_n_Record_4178>();_n_object_4253->_p_typed=_n_dots_4201;_n_object_4253->_p_shows=_n_shows_4202;_n_object_4253->_p_done=_n_done_4203;return _n_object_4253;})();

}
});
return ([&](){auto _n_object_4255=std::make_shared<_n_Record_4177>();_n_object_4255->_p_plan=_n_plan_4197;_n_object_4255->_p_total=(_n_T_4196+2.0);return _n_object_4255;})();

}
}

d::Array<d::String,false> _n_wrap_4182(d::String _a0){d::String _n_text_4204=_a0;
{
d::Array<d::String,false> _n_lines_4205=d::Array<d::String,false>{};
d::String _n_line_4206=d::String(u"");
for(auto &&_n_item_4256:d::filter(d::split(_n_text_4204,d::Regex(u"\\s+",u"")),d::ToBoolean{})){d::check_cancel();d::String _n_word_4207=_n_item_4256;
{
while(d::truth((double(_n_word_4207.size())>_n_WIDE_4171))){d::check_cancel();if(d::truth(_n_line_4206)){d::check_cancel();(void)((_n_lines_4205.push(_n_line_4206),(_n_line_4206=d::String(u""))));
}
(void)(_n_lines_4205.push(d::slice(_n_word_4207,0.0,_n_WIDE_4171)));
(void)((_n_word_4207=d::slice(_n_word_4207,_n_WIDE_4171)));
}
if((d::truth(_n_line_4206)&&d::truth((((double(_n_line_4206.size())+1.0)+double(_n_word_4207.size()))>_n_WIDE_4171)))){d::check_cancel();(void)((_n_lines_4205.push(_n_line_4206),(_n_line_4206=d::String(u""))));
}
(void)((_n_line_4206=(d::truth(_n_line_4206)?(d::String(u"")+d::string(_n_line_4206)+d::String(u" ")+d::string(_n_word_4207)+d::String(u"")):_n_word_4207)));

}
}
if((d::truth(_n_line_4206)||d::truth((!d::truth(double(_n_lines_4205.size())))))){d::check_cancel();(void)(_n_lines_4205.push(_n_line_4206));
}
return _n_lines_4205;

}
}

d::Array<d::String,false> _n_bubble_4183(d::Array<d::String,false> _a0,bool _a1,double _a2,std::optional<double> _a3){d::Array<d::String,false> _n_lines_4208=_a0;
bool _n_mine_4209=_a1;
double _n_cols_4210=_a2;
double _n_shown_4211=(d::present(_a3)?d::read(_a3):INFINITY);
{
double _n_w_4212=([&](){d::Array<double> _n_numbers_4258;for(auto _x:d::map(_n_lines_4208,[&]( d::String _a0) mutable ->double{d::String _n_l_4213=_a0;
return double(_n_l_4213.size());}))_n_numbers_4258.push(_x);return d::maximum(_n_numbers_4258);})();
auto _n_binding_4259=(d::truth(_n_mine_4209)?d::String(u"┌┐└┘"):d::String(u"╭╮╰╯"));
d::String _n_tl_4214=d::at(_n_binding_4259,0.0);
d::String _n_tr_4215=d::at(_n_binding_4259,1.0);
d::String _n_bl_4216=d::at(_n_binding_4259,2.0);
d::String _n_br_4217=d::at(_n_binding_4259,3.0);
d::Array<d::String,false> _n_out_4218=d::Array<d::String,false>{(d::string((d::string(_n_tl_4214)+d::string(d::repeat(d::String(u"─"),(_n_w_4212+2.0)))))+d::string(_n_tr_4215))};
double _n_left_4219=_n_shown_4211;
for(auto &&_n_item_4260:_n_lines_4208){d::check_cancel();d::String _n_line_4220=_n_item_4260;
{
if((d::truth((_n_left_4219<=0.0))&&d::truth((double(_n_out_4218.size())>1.0)))){d::check_cancel();break;
}
(void)(_n_out_4218.push((d::string((d::string(d::String(u"│ "))+d::string(d::padEnd(([&](){auto _n_argument_4261=0.0;auto _n_argument_4262=d::maximum({0.0,_n_left_4219});return d::slice(_n_line_4220,_n_argument_4261,_n_argument_4262);})(),_n_w_4212))))+d::string(d::String(u" │")))));
(void)((_n_left_4219=(_n_left_4219-(double(_n_line_4220.size())+1.0))));

}
}
(void)(_n_out_4218.push((d::string((d::string(_n_bl_4216)+d::string(d::repeat(d::String(u"─"),(_n_w_4212+2.0)))))+d::string(_n_br_4217))));
double _n_pad_4221=(d::truth(_n_mine_4209)?((_n_cols_4210-1.0)-(_n_w_4212+4.0)):1.0);
return d::map(_n_out_4218,[&]( d::String _a0) mutable ->d::String{d::String _n_s_4222=_a0;
return d::padEnd((d::string(d::repeat(d::String(u" "),_n_pad_4221))+d::string(_n_s_4222)),_n_cols_4210);});

}
}

struct Native_chat final:ascii::Piece{
d::Array<d::String,false> _n_messages_4184{};
double _n_cols_4185{};
double _n_rows_4186{};
d::Array<d::String,false> _n_talk_4187{};
d::Array<d::Array<d::String,false>,false> _n_wrapped_4188{};
d::Array<d::Array<d::String,false>,false> _n_full_4189{};
d::String _n_blank_4190{};
d::Array<std::shared_ptr<_n_Record_4178>,false> _n_plan_4191{};
double _n_total_4192{};
d::Array<d::String,false> _n_before_4193{};
std::function<d::String(double,std::shared_ptr<_n_Record_4242>)> _render;

explicit Native_chat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_4263=d::decode<std::shared_ptr<_n_Record_4241>>(_options.data);
this->_n_messages_4184=(d::present(_n_binding_4263->_p_messages)?d::read(_n_binding_4263->_p_messages):_n_meta_4179->_p_options->_p_messages);
auto _n_binding_4264=_n_meta_4179;
this->_n_cols_4185=_n_binding_4264->_p_cols;
this->_n_rows_4186=_n_binding_4264->_p_rows;
this->_n_talk_4187=d::map((d::truth(double(this->_n_messages_4184.size()))?this->_n_messages_4184:_n_MESSAGES_4175),[&]( d::String _a0) mutable ->d::String{d::String _n_m_4223=_a0;
return d::trim(d::replace(_n_m_4223,d::Regex(u"\\s+",u"g"),d::String(u" ")));});
this->_n_wrapped_4188=d::map(this->_n_talk_4187,_n_wrap_4182);
this->_n_full_4189=d::map(this->_n_wrapped_4188,[&]( d::Array<d::String,false> _a0,double _a1) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_lines_4224=_a0;
double _n_i_4225=_a1;
return _n_bubble_4183(_n_lines_4224,(d::mod(_n_i_4225,2.0)==0.0),this->_n_cols_4185,std::optional<double>{});});
this->_n_blank_4190=d::repeat(d::String(u" "),this->_n_cols_4185);
auto _n_binding_4265=_n_timing_4176(this->_n_talk_4187);
this->_n_plan_4191=_n_binding_4265->_p_plan;
this->_n_total_4192=_n_binding_4265->_p_total;
this->_n_before_4193=d::flatMap(this->_n_full_4189,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_b_4226=_a0;
return ([&](){d::Array<d::String,false> _n_array_4266;_n_array_4266.push(this->_n_blank_4190);for(const auto &_v:_n_b_4226)_n_array_4266.push(_v);return _n_array_4266;})();});
_render=[=]( double _a0,std::shared_ptr<_n_Record_4242> _a1) mutable ->d::String{double _n_t_4227=_a0;
{
double _n_p_4228=d::mod(_n_t_4227,this->_n_total_4192);
d::Array<d::String,false> _n_lines_4229=([&](){d::Array<d::String,false> _n_array_4267;for(const auto &_v:this->_n_before_4193)_n_array_4267.push(_v);return _n_array_4267;})();
d::String _n_input_4230=d::String(u"");
double _n_typing_4231=(-d::number(1.0));
(void)(d::forEach(this->_n_talk_4187,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_text_4232=_a0;
double _n_i_4233=_a1;
{
auto _n_binding_4268=d::at(this->_n_plan_4191,_n_i_4233);
double _n_typed_4234=_n_binding_4268->_p_typed;
double _n_shows_4235=_n_binding_4268->_p_shows;
double _n_done_4236=_n_binding_4268->_p_done;
if(d::truth((_n_p_4228<_n_typed_4234))){d::check_cancel();return;
}
if(d::truth((d::mod(_n_i_4233,2.0)==0.0))){d::check_cancel();if(d::truth((_n_p_4228<_n_shows_4235))){d::check_cancel();(void)((_n_input_4230=([&](){auto _n_argument_4269=0.0;auto _n_argument_4270=([&](){auto _n_argument_4271=double(_n_text_4232.size());auto _n_argument_4272=(std::floor(((_n_p_4228-_n_typed_4234)/_n_KEY_4172))+1.0);return d::minimum({_n_argument_4271,_n_argument_4272});})();return d::slice(_n_text_4232,_n_argument_4269,_n_argument_4270);})()));
(void)((_n_typing_4231=_n_typed_4234));
}else {d::check_cancel();(void)(([&](){auto _n_append_4273=_n_lines_4229;_n_append_4273.push(this->_n_blank_4190);for(const auto &_v:d::at(this->_n_full_4189,_n_i_4233))_n_append_4273.push(_v);return double(_n_append_4273.size());})());
}
return;
}
(void)(_n_lines_4229.push(this->_n_blank_4190));
if(d::truth((_n_p_4228>=_n_done_4236))){d::check_cancel();(void)(([&](){auto _n_append_4274=_n_lines_4229;for(const auto &_v:d::at(this->_n_full_4189,_n_i_4233))_n_append_4274.push(_v);return double(_n_append_4274.size());})());
}else {d::check_cancel();if(d::truth((_n_p_4228>=_n_shows_4235))){d::check_cancel();(void)(([&](){auto _n_append_4275=_n_lines_4229;for(const auto &_v:([&](){auto _n_argument_4276=d::at(this->_n_wrapped_4188,_n_i_4233);auto _n_argument_4277=false;auto _n_argument_4278=this->_n_cols_4185;auto _n_argument_4279=(std::floor(((_n_p_4228-_n_shows_4235)/_n_STREAM_4173))+1.0);return _n_bubble_4183(_n_argument_4276,_n_argument_4277,_n_argument_4278,std::optional<double>(_n_argument_4279));})())_n_append_4275.push(_v);return double(_n_append_4275.size());})());
}else {d::check_cancel();(void)(([&](){auto _n_append_4280=_n_lines_4229;for(const auto &_v:([&](){auto _n_argument_4281=d::Array<d::String,false>{d::padEnd(d::repeat(d::String(u"·"),(1.0+d::mod(std::floor(((_n_p_4228-_n_typed_4234)/0.3)),3.0))),3.0)};auto _n_argument_4282=false;auto _n_argument_4283=this->_n_cols_4185;return _n_bubble_4183(_n_argument_4281,_n_argument_4282,_n_argument_4283,std::optional<double>{});})())_n_append_4280.push(_v);return double(_n_append_4280.size());})());
}
}

}
}));
d::Array<d::String,false> _n_out_4237=_n_lines_4229.slice((-d::number(_n_VIEW_4174)));
while(d::truth((double(_n_out_4237.size())<_n_VIEW_4174))){d::check_cancel();(void)(_n_out_4237.unshift(this->_n_blank_4190));
}
(void)(_n_out_4237.push(this->_n_blank_4190));
d::String _n_caret_4238=((d::truth((_n_typing_4231>=0.0))||d::truth((d::mod(std::floor((_n_p_4228/0.5)),2.0)==0.0)))?d::String(u"█"):d::String(u" "));
double _n_inner_4239=(this->_n_cols_4185-4.0);
d::String _n_field_4240=(d::string(d::slice((d::truth(_n_input_4230)?(d::String(u"> ")+d::string(_n_input_4230)+d::String(u"")):d::String(u"> ")),(-d::number((_n_inner_4239-6.0)))))+d::string(_n_caret_4238));
(void)(_n_out_4237.push((d::string((d::string(d::String(u"╭"))+d::string(d::repeat(d::String(u"─"),(this->_n_cols_4185-2.0)))))+d::string(d::String(u"╮")))));
(void)(_n_out_4237.push((d::string((d::string(d::String(u"│ "))+d::string(d::padEnd(_n_field_4240,(_n_inner_4239-4.0)))))+d::string(d::String(u"send │")))));
(void)(_n_out_4237.push((d::string((d::string(d::String(u"╰"))+d::string(d::repeat(d::String(u"─"),(this->_n_cols_4185-2.0)))))+d::string(d::String(u"╯")))));
return d::join(_n_out_4237.slice(0.0,this->_n_rows_4186),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("chat").cols)*ascii::catalog_meta("chat").rows);auto _env=std::make_shared<_n_Record_4242>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &chat_meta(){return catalog_meta("chat");}
std::unique_ptr<Piece> make_chat(const AsciiPieceOptions &o){return std::make_unique<Native_chat>(o);}
}
