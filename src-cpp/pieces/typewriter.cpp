// Direct, statically typed C++ from src/pieces/typewriter.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35110;
struct _n_Record_35111;
struct _n_Record_35168;
struct _n_Record_35169;
struct _n_Record_35110{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_35111> _p_options{};
static std::shared_ptr<_n_Record_35110> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35110>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_35111>>(j["options"]);return out;}
};
struct _n_Record_35111{
d::String _p_prefix{};
d::Array<d::String,false> _p_phrases{};
static std::shared_ptr<_n_Record_35111> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35111>();out->_p_prefix=d::decode<d::String>(j["prefix"]);out->_p_phrases=d::decode<d::Array<d::String,false>>(j["phrases"]);return out;}
};
struct _n_Record_35168{
std::optional<d::String> _p_prefix{};
std::optional<d::Array<d::String,false>> _p_phrases{};
static std::shared_ptr<_n_Record_35168> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35168>();out->_p_prefix=d::decode<std::optional<d::String>>(j["prefix"]);out->_p_phrases=d::decode<std::optional<d::Array<d::String,false>>>(j["phrases"]);return out;}
};
struct _n_Record_35169{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35169> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35169>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_35116(double _a0);
std::optional<d::String> _n_slip_35117(d::String _a0,std::function<double()> _a1);
std::shared_ptr<_n_Record_35110> _n_meta_35109=[](){return ([&](){auto _n_object_35174=std::make_shared<_n_Record_35110>();_n_object_35174->_p_name=d::String(u"typewriter");_n_object_35174->_p_category=d::String(u"type");_n_object_35174->_p_note=d::String(u"phrases typed and deleted in turn behind a blinking cursor");_n_object_35174->_p_cols=44.0;_n_object_35174->_p_rows=3.0;_n_object_35174->_p_fps=20.0;_n_object_35174->_p_options=([&](){auto _n_object_35176=std::make_shared<_n_Record_35111>();_n_object_35176->_p_prefix=d::String(u"i make ");_n_object_35176->_p_phrases=d::Array<d::String,false>{d::String(u"small tools."),d::String(u"quiet websites."),d::String(u"things that last."),d::String(u"notes for later.")};return _n_object_35176;})();return _n_object_35174;})();}();
const d::String _n_CURSOR_35112=[](){return d::String(u"▌");}();
const double _n_HOLD_35113=[](){return 2.2;}();
const double _n_EMPTY_35114=[](){return 0.5;}();
d::Array<d::String,false> _n_ROWS_35115=[](){return d::Array<d::String,false>{d::String(u"qwertyuiop"),d::String(u"asdfghjkl"),d::String(u"zxcvbnm")};}();
std::function<double()> _n_mulberry32_35116(double _a0){double _n_a_35137=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_35137=double(d::i32((_n_a_35137+1831565813.0))|d::i32(0.0))));
double _n_t_35138=d::imul(double(d::i32(_n_a_35137)^d::i32(double(d::u32(_n_a_35137)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_35137)));
(void)((_n_t_35138=double(d::i32((_n_t_35138+d::imul(double(d::i32(_n_t_35138)^d::i32(double(d::u32(_n_t_35138)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_35138)))))^d::i32(_n_t_35138))));
return (double(d::u32(double(d::i32(_n_t_35138)^d::i32(double(d::u32(_n_t_35138)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

std::optional<d::String> _n_slip_35117(d::String _a0,std::function<double()> _a1){d::String _n_ch_35139=_a0;
std::function<double()> _n_rand_35140=_a1;
{
for(auto &&_n_item_35177:_n_ROWS_35115){d::check_cancel();d::String _n_row_35141=_n_item_35177;
{
double _n_i_35142=d::indexOf(_n_row_35141,_n_ch_35139);
if(d::truth((_n_i_35142>=0.0))){d::check_cancel();return std::optional<d::String>(d::at(_n_row_35141,(d::truth((_n_i_35142==0.0))?1.0:(d::truth((_n_i_35142==(double(_n_row_35141.size())-1.0)))?(_n_i_35142-1.0):(_n_i_35142+(d::truth((_n_rand_35140()<0.5))?(-d::number(1.0)):1.0))))));
}

}
}
return std::optional<d::String>{};

}
}

struct Native_typewriter final:ascii::Piece{
d::String _n_prefix_35118{};
d::Array<d::String,false> _n_phrases_35119{};
double _n_cols_35120{};
double _n_rows_35121{};
d::String _n_head_35122{};
d::Array<d::String,false> _n_list_35123{};
std::function<double()> _n_rand_35124{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_events_35125{};
double _n_at_35126{};
d::String _n_text_35127{};
d::Array<double,false> _n_done_35130{};
double _n_period_35131{};
double _n_offset_35132{};
double _n_width_35133{};
double _n_x_35134{};
d::String _n_blank_35135{};
std::function<d::String(double,std::shared_ptr<_n_Record_35169>)> _render;
void _n_key_35128(d::String _a0,double _a1){d::String _n_next_35144=_a0;
double _n_wait_35145=_a1;
{
(void)((this->_n_at_35126=(this->_n_at_35126+_n_wait_35145)));
(void)((this->_n_text_35127=_n_next_35144));
(void)(this->_n_events_35125.push(std::make_shared<std::tuple<double,d::String>>(this->_n_at_35126,this->_n_text_35127)));

}
}

double _n_typeDelay_35129(d::String _a0){d::String _n_ch_35146=_a0;
return ([&](){auto _n_left_35203=([&](){auto _n_left_35205=(0.06+(this->_n_rand_35124()*0.09));auto _n_right_35206=(d::truth((_n_ch_35146==d::String(u" ")))?(0.05+(this->_n_rand_35124()*0.08)):0.0);return (_n_left_35205+_n_right_35206);})();auto _n_right_35204=(d::truth((this->_n_rand_35124()<0.05))?0.3:0.0);return (_n_left_35203+_n_right_35204);})();}

explicit Native_typewriter(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_35178=d::decode<std::shared_ptr<_n_Record_35168>>(_options.data);
this->_n_prefix_35118=(d::present(_n_binding_35178->_p_prefix)?d::read(_n_binding_35178->_p_prefix):_n_meta_35109->_p_options->_p_prefix);
this->_n_phrases_35119=(d::present(_n_binding_35178->_p_phrases)?d::read(_n_binding_35178->_p_phrases):_n_meta_35109->_p_options->_p_phrases);
auto _n_binding_35179=_n_meta_35109;
this->_n_cols_35120=_n_binding_35179->_p_cols;
this->_n_rows_35121=_n_binding_35179->_p_rows;
this->_n_head_35122=d::string(this->_n_prefix_35118);
this->_n_list_35123=d::map((d::truth(double(this->_n_phrases_35119.size()))?this->_n_phrases_35119:d::Array<d::String,false>{d::String(u"")}),[&]( d::String _a0) mutable ->d::String{d::String _n_p_35143=_a0;
return ([&](){auto _n_argument_35180=0.0;auto _n_argument_35181=d::maximum({0.0,((this->_n_cols_35120-4.0)-double(this->_n_head_35122.size()))});return d::slice(d::string(_n_p_35143),_n_argument_35180,_n_argument_35181);})();});
this->_n_rand_35124=_n_mulberry32_35116(31.0);
this->_n_events_35125=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
this->_n_at_35126=0.0;
this->_n_text_35127=d::String(u"");
this->_n_done_35130=d::Array<double,false>{};
for(auto &&_n_item_35182:this->_n_list_35123){d::check_cancel();d::String _n_phrase_35147=_n_item_35182;
{
double _n_typo_35148=((d::truth((this->_n_rand_35124()<0.5))&&d::truth((double(_n_phrase_35147.size())>5.0)))?(3.0+std::floor((this->_n_rand_35124()*(double(_n_phrase_35147.size())-4.0)))):(-d::number(1.0)));
{double _n_i_35149=0.0;
for(;d::truth((_n_i_35149<double(_n_phrase_35147.size())));(void)((_n_i_35149++))){d::check_cancel();std::optional<d::String> _n_wrong_35150=(d::truth((_n_i_35149==_n_typo_35148))?_n_slip_35117(d::at(_n_phrase_35147,_n_i_35149),this->_n_rand_35124):std::optional<d::String>{});
if(d::truth(_n_wrong_35150)){d::check_cancel();double _n_more_35151=([&](){auto _n_argument_35183=std::floor((this->_n_rand_35124()*3.0));auto _n_argument_35184=((double(_n_phrase_35147.size())-_n_i_35149)-1.0);return d::minimum({_n_argument_35183,_n_argument_35184});})();
(void)(([&](){auto _n_argument_35185=(d::string(this->_n_text_35127)+d::string(d::read(_n_wrong_35150)));auto _n_argument_35186=this->_n_typeDelay_35129(d::at(_n_phrase_35147,_n_i_35149));return this->_n_key_35128(_n_argument_35185,_n_argument_35186);})());
{double _n_k_35152=1.0;
for(;d::truth((_n_k_35152<=_n_more_35151));(void)((_n_k_35152++))){d::check_cancel();(void)(([&](){auto _n_argument_35187=(d::string(this->_n_text_35127)+d::string(d::at(_n_phrase_35147,(_n_i_35149+_n_k_35152))));auto _n_argument_35188=this->_n_typeDelay_35129(d::at(_n_phrase_35147,(_n_i_35149+_n_k_35152)));return this->_n_key_35128(_n_argument_35187,_n_argument_35188);})());
}}
(void)((this->_n_at_35126=(this->_n_at_35126+(0.25+(this->_n_rand_35124()*0.2)))));
{double _n_k_35153=0.0;
for(;d::truth((_n_k_35153<=_n_more_35151));(void)((_n_k_35153++))){d::check_cancel();(void)(([&](){auto _n_argument_35189=d::slice(this->_n_text_35127,0.0,(-d::number(1.0)));auto _n_argument_35190=(d::truth(_n_k_35153)?0.07:0.1);return this->_n_key_35128(_n_argument_35189,_n_argument_35190);})());
}}
}
(void)(([&](){auto _n_argument_35191=(d::string(this->_n_text_35127)+d::string(d::at(_n_phrase_35147,_n_i_35149)));auto _n_argument_35192=([&](){auto _n_left_35193=this->_n_typeDelay_35129(d::at(_n_phrase_35147,_n_i_35149));auto _n_right_35194=((d::truth(_n_i_35149)&&d::truth(d::includes(d::String(u".,!?"),d::at(_n_phrase_35147,(_n_i_35149-1.0)))))?0.15:0.0);return (_n_left_35193+_n_right_35194);})();return this->_n_key_35128(_n_argument_35191,_n_argument_35192);})());
}}
(void)(this->_n_done_35130.push(this->_n_at_35126));
(void)((this->_n_at_35126=(this->_n_at_35126+_n_HOLD_35113)));
{double _n_k_35154=0.0;
for(;d::truth((_n_k_35154<double(_n_phrase_35147.size())));(void)((_n_k_35154++))){d::check_cancel();(void)(([&](){auto _n_argument_35195=d::slice(this->_n_text_35127,0.0,(-d::number(1.0)));auto _n_argument_35196=(d::truth((_n_k_35154==0.0))?0.0:(d::truth((_n_k_35154==1.0))?0.18:0.045));return this->_n_key_35128(_n_argument_35195,_n_argument_35196);})());
}}
(void)((this->_n_at_35126=(this->_n_at_35126+_n_EMPTY_35114)));

}
}
this->_n_period_35131=this->_n_at_35126;
this->_n_offset_35132=((d::at(this->_n_done_35130,0.0)+_n_HOLD_35113)-0.75);
this->_n_width_35133=((double(this->_n_head_35122.size())+([&](){d::Array<double> _n_numbers_35197;for(auto _x:d::map(this->_n_list_35123,[&]( d::String _a0) mutable ->double{d::String _n_p_35155=_a0;
return double(_n_p_35155.size());}))_n_numbers_35197.push(_x);return d::maximum(_n_numbers_35197);})())+1.0);
this->_n_x_35134=([&](){auto _n_argument_35198=0.0;auto _n_argument_35199=std::floor(((this->_n_cols_35120-this->_n_width_35133)/2.0));return d::maximum({_n_argument_35198,_n_argument_35199});})();
this->_n_blank_35135=d::repeat(d::String(u" "),this->_n_cols_35120);
_render=[=]( double _a0,std::shared_ptr<_n_Record_35169> _a1) mutable ->d::String{double _n_t_35156=_a0;
{
double _n_now_35157=d::mod((d::mod((_n_t_35156+this->_n_offset_35132),this->_n_period_35131)+this->_n_period_35131),this->_n_period_35131);
d::String _n_line_35158=d::String(u"");
double _n_last_35159=0.0;
for(auto &&_n_item_35200:this->_n_events_35125){d::check_cancel();auto _n_binding_35201=_n_item_35200;
double _n_when_35160=std::get<0>(*_n_binding_35201);
d::String _n_s_35161=std::get<1>(*_n_binding_35201);
{
if(d::truth((_n_when_35160>_n_now_35157))){d::check_cancel();break;
}
(void)((_n_line_35158=_n_s_35161));
(void)((_n_last_35159=_n_when_35160));

}
}
double _n_idle_35162=(_n_now_35157-_n_last_35159);
bool _n_lit_35163=([&]()->bool{auto _n_logical_35202=(_n_idle_35162<0.45);return d::truth(_n_logical_35202)?_n_logical_35202:(d::mod((_n_idle_35162-0.45),1.06)>0.53);})();
d::String _n_body_35164=(d::string((d::string(this->_n_head_35122)+d::string(_n_line_35158)))+d::string((d::truth(_n_lit_35163)?_n_CURSOR_35112:d::String(u""))));
d::String _n_out_35165=d::padEnd(d::slice((d::string(d::repeat(d::String(u" "),this->_n_x_35134))+d::string(_n_body_35164)),0.0,this->_n_cols_35120),this->_n_cols_35120);
return d::join(d::Array<d::String,false>(d::from(this->_n_rows_35121,[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_r_35167=_a1;
return (d::truth((_n_r_35167==double(d::i32(this->_n_rows_35121)>>(d::u32(1.0)&31))))?_n_out_35165:this->_n_blank_35135);})),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("typewriter").cols)*ascii::catalog_meta("typewriter").rows);auto _env=std::make_shared<_n_Record_35169>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &typewriter_meta(){return catalog_meta("typewriter");}
std::unique_ptr<Piece> make_typewriter(const AsciiPieceOptions &o){return std::make_unique<Native_typewriter>(o);}
}
