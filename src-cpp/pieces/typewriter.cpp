// Direct, statically typed C++ from src/pieces/typewriter.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_35109;
struct _n_Record_35110;
struct _n_Record_35167;
struct _n_Record_35168;
struct _n_Record_35109{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_35110> _p_options{};
static std::shared_ptr<_n_Record_35109> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35109>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_35110>>(j["options"]);return out;}
};
struct _n_Record_35110{
d::String _p_prefix{};
d::Array<d::String,false> _p_phrases{};
static std::shared_ptr<_n_Record_35110> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35110>();out->_p_prefix=d::decode<d::String>(j["prefix"]);out->_p_phrases=d::decode<d::Array<d::String,false>>(j["phrases"]);return out;}
};
struct _n_Record_35167{
std::optional<d::String> _p_prefix{};
std::optional<d::Array<d::String,false>> _p_phrases{};
static std::shared_ptr<_n_Record_35167> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35167>();out->_p_prefix=d::decode<std::optional<d::String>>(j["prefix"]);out->_p_phrases=d::decode<std::optional<d::Array<d::String,false>>>(j["phrases"]);return out;}
};
struct _n_Record_35168{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_35168> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_35168>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_35115(double _a0);
std::optional<d::String> _n_slip_35116(d::String _a0,std::function<double()> _a1);
std::shared_ptr<_n_Record_35109> _n_meta_35108=[](){return ([&](){auto _n_object_35173=std::make_shared<_n_Record_35109>();_n_object_35173->_p_name=d::String(u"typewriter");_n_object_35173->_p_category=d::String(u"type");_n_object_35173->_p_note=d::String(u"phrases typed and deleted in turn behind a blinking cursor");_n_object_35173->_p_cols=44.0;_n_object_35173->_p_rows=3.0;_n_object_35173->_p_fps=20.0;_n_object_35173->_p_options=([&](){auto _n_object_35175=std::make_shared<_n_Record_35110>();_n_object_35175->_p_prefix=d::String(u"i make ");_n_object_35175->_p_phrases=d::Array<d::String,false>{d::String(u"small tools."),d::String(u"quiet websites."),d::String(u"things that last."),d::String(u"notes for later.")};return _n_object_35175;})();return _n_object_35173;})();}();
const d::String _n_CURSOR_35111=[](){return d::String(u"▌");}();
const double _n_HOLD_35112=[](){return 2.2;}();
const double _n_EMPTY_35113=[](){return 0.5;}();
d::Array<d::String,false> _n_ROWS_35114=[](){return d::Array<d::String,false>{d::String(u"qwertyuiop"),d::String(u"asdfghjkl"),d::String(u"zxcvbnm")};}();
std::function<double()> _n_mulberry32_35115(double _a0){double _n_a_35136=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_35136=double(d::i32((_n_a_35136+1831565813.0))|d::i32(0.0))));
double _n_t_35137=d::imul(double(d::i32(_n_a_35136)^d::i32(double(d::u32(_n_a_35136)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_35136)));
(void)((_n_t_35137=double(d::i32((_n_t_35137+d::imul(double(d::i32(_n_t_35137)^d::i32(double(d::u32(_n_t_35137)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_35137)))))^d::i32(_n_t_35137))));
return (double(d::u32(double(d::i32(_n_t_35137)^d::i32(double(d::u32(_n_t_35137)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

std::optional<d::String> _n_slip_35116(d::String _a0,std::function<double()> _a1){d::String _n_ch_35138=_a0;
std::function<double()> _n_rand_35139=_a1;
{
for(auto &&_n_item_35176:_n_ROWS_35114){d::check_cancel();d::String _n_row_35140=_n_item_35176;
{
double _n_i_35141=d::indexOf(_n_row_35140,_n_ch_35138);
if(d::truth((_n_i_35141>=0.0))){d::check_cancel();return std::optional<d::String>(d::at(_n_row_35140,(d::truth((_n_i_35141==0.0))?1.0:(d::truth((_n_i_35141==(double(_n_row_35140.size())-1.0)))?(_n_i_35141-1.0):(_n_i_35141+(d::truth((_n_rand_35139()<0.5))?(-d::number(1.0)):1.0))))));
}

}
}
return std::optional<d::String>{};

}
}

struct Native_typewriter final:ascii::Piece{
d::String _n_prefix_35117{};
d::Array<d::String,false> _n_phrases_35118{};
double _n_cols_35119{};
double _n_rows_35120{};
d::String _n_head_35121{};
d::Array<d::String,false> _n_list_35122{};
std::function<double()> _n_rand_35123{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_events_35124{};
double _n_at_35125{};
d::String _n_text_35126{};
d::Array<double,false> _n_done_35129{};
double _n_period_35130{};
double _n_offset_35131{};
double _n_width_35132{};
double _n_x_35133{};
d::String _n_blank_35134{};
std::function<d::String(double,std::shared_ptr<_n_Record_35168>)> _render;
void _n_key_35127(d::String _a0,double _a1){d::String _n_next_35143=_a0;
double _n_wait_35144=_a1;
{
(void)((this->_n_at_35125=(this->_n_at_35125+_n_wait_35144)));
(void)((this->_n_text_35126=_n_next_35143));
(void)(this->_n_events_35124.push(std::make_shared<std::tuple<double,d::String>>(this->_n_at_35125,this->_n_text_35126)));

}
}

double _n_typeDelay_35128(d::String _a0){d::String _n_ch_35145=_a0;
return ([&](){auto _n_left_35202=([&](){auto _n_left_35204=(0.06+(this->_n_rand_35123()*0.09));auto _n_right_35205=(d::truth((_n_ch_35145==d::String(u" ")))?(0.05+(this->_n_rand_35123()*0.08)):0.0);return (_n_left_35204+_n_right_35205);})();auto _n_right_35203=(d::truth((this->_n_rand_35123()<0.05))?0.3:0.0);return (_n_left_35202+_n_right_35203);})();}

explicit Native_typewriter(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_35177=d::decode<std::shared_ptr<_n_Record_35167>>(_options.data);
this->_n_prefix_35117=(d::present(_n_binding_35177->_p_prefix)?d::read(_n_binding_35177->_p_prefix):_n_meta_35108->_p_options->_p_prefix);
this->_n_phrases_35118=(d::present(_n_binding_35177->_p_phrases)?d::read(_n_binding_35177->_p_phrases):_n_meta_35108->_p_options->_p_phrases);
auto _n_binding_35178=_n_meta_35108;
this->_n_cols_35119=_n_binding_35178->_p_cols;
this->_n_rows_35120=_n_binding_35178->_p_rows;
this->_n_head_35121=d::string(this->_n_prefix_35117);
this->_n_list_35122=d::map((d::truth(double(this->_n_phrases_35118.size()))?this->_n_phrases_35118:d::Array<d::String,false>{d::String(u"")}),[&]( d::String _a0) mutable ->d::String{d::String _n_p_35142=_a0;
return ([&](){auto _n_argument_35179=0.0;auto _n_argument_35180=d::maximum({0.0,((this->_n_cols_35119-4.0)-double(this->_n_head_35121.size()))});return d::slice(d::string(_n_p_35142),_n_argument_35179,_n_argument_35180);})();});
this->_n_rand_35123=_n_mulberry32_35115(31.0);
this->_n_events_35124=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
this->_n_at_35125=0.0;
this->_n_text_35126=d::String(u"");
this->_n_done_35129=d::Array<double,false>{};
for(auto &&_n_item_35181:this->_n_list_35122){d::check_cancel();d::String _n_phrase_35146=_n_item_35181;
{
double _n_typo_35147=((d::truth((this->_n_rand_35123()<0.5))&&d::truth((double(_n_phrase_35146.size())>5.0)))?(3.0+std::floor((this->_n_rand_35123()*(double(_n_phrase_35146.size())-4.0)))):(-d::number(1.0)));
{double _n_i_35148=0.0;
for(;d::truth((_n_i_35148<double(_n_phrase_35146.size())));(void)((_n_i_35148++))){d::check_cancel();std::optional<d::String> _n_wrong_35149=(d::truth((_n_i_35148==_n_typo_35147))?_n_slip_35116(d::at(_n_phrase_35146,_n_i_35148),this->_n_rand_35123):std::optional<d::String>{});
if(d::truth(_n_wrong_35149)){d::check_cancel();double _n_more_35150=([&](){auto _n_argument_35182=std::floor((this->_n_rand_35123()*3.0));auto _n_argument_35183=((double(_n_phrase_35146.size())-_n_i_35148)-1.0);return d::minimum({_n_argument_35182,_n_argument_35183});})();
(void)(([&](){auto _n_argument_35184=(d::string(this->_n_text_35126)+d::string(d::read(_n_wrong_35149)));auto _n_argument_35185=this->_n_typeDelay_35128(d::at(_n_phrase_35146,_n_i_35148));return this->_n_key_35127(_n_argument_35184,_n_argument_35185);})());
{double _n_k_35151=1.0;
for(;d::truth((_n_k_35151<=_n_more_35150));(void)((_n_k_35151++))){d::check_cancel();(void)(([&](){auto _n_argument_35186=(d::string(this->_n_text_35126)+d::string(d::at(_n_phrase_35146,(_n_i_35148+_n_k_35151))));auto _n_argument_35187=this->_n_typeDelay_35128(d::at(_n_phrase_35146,(_n_i_35148+_n_k_35151)));return this->_n_key_35127(_n_argument_35186,_n_argument_35187);})());
}}
(void)((this->_n_at_35125=(this->_n_at_35125+(0.25+(this->_n_rand_35123()*0.2)))));
{double _n_k_35152=0.0;
for(;d::truth((_n_k_35152<=_n_more_35150));(void)((_n_k_35152++))){d::check_cancel();(void)(([&](){auto _n_argument_35188=d::slice(this->_n_text_35126,0.0,(-d::number(1.0)));auto _n_argument_35189=(d::truth(_n_k_35152)?0.07:0.1);return this->_n_key_35127(_n_argument_35188,_n_argument_35189);})());
}}
}
(void)(([&](){auto _n_argument_35190=(d::string(this->_n_text_35126)+d::string(d::at(_n_phrase_35146,_n_i_35148)));auto _n_argument_35191=([&](){auto _n_left_35192=this->_n_typeDelay_35128(d::at(_n_phrase_35146,_n_i_35148));auto _n_right_35193=((d::truth(_n_i_35148)&&d::truth(d::includes(d::String(u".,!?"),d::at(_n_phrase_35146,(_n_i_35148-1.0)))))?0.15:0.0);return (_n_left_35192+_n_right_35193);})();return this->_n_key_35127(_n_argument_35190,_n_argument_35191);})());
}}
(void)(this->_n_done_35129.push(this->_n_at_35125));
(void)((this->_n_at_35125=(this->_n_at_35125+_n_HOLD_35112)));
{double _n_k_35153=0.0;
for(;d::truth((_n_k_35153<double(_n_phrase_35146.size())));(void)((_n_k_35153++))){d::check_cancel();(void)(([&](){auto _n_argument_35194=d::slice(this->_n_text_35126,0.0,(-d::number(1.0)));auto _n_argument_35195=(d::truth((_n_k_35153==0.0))?0.0:(d::truth((_n_k_35153==1.0))?0.18:0.045));return this->_n_key_35127(_n_argument_35194,_n_argument_35195);})());
}}
(void)((this->_n_at_35125=(this->_n_at_35125+_n_EMPTY_35113)));

}
}
this->_n_period_35130=this->_n_at_35125;
this->_n_offset_35131=((d::at(this->_n_done_35129,0.0)+_n_HOLD_35112)-0.75);
this->_n_width_35132=((double(this->_n_head_35121.size())+([&](){d::Array<double> _n_numbers_35196;for(auto _x:d::map(this->_n_list_35122,[&]( d::String _a0) mutable ->double{d::String _n_p_35154=_a0;
return double(_n_p_35154.size());}))_n_numbers_35196.push(_x);return d::maximum(_n_numbers_35196);})())+1.0);
this->_n_x_35133=([&](){auto _n_argument_35197=0.0;auto _n_argument_35198=std::floor(((this->_n_cols_35119-this->_n_width_35132)/2.0));return d::maximum({_n_argument_35197,_n_argument_35198});})();
this->_n_blank_35134=d::repeat(d::String(u" "),this->_n_cols_35119);
_render=[=]( double _a0,std::shared_ptr<_n_Record_35168> _a1) mutable ->d::String{double _n_t_35155=_a0;
{
double _n_now_35156=d::mod((d::mod((_n_t_35155+this->_n_offset_35131),this->_n_period_35130)+this->_n_period_35130),this->_n_period_35130);
d::String _n_line_35157=d::String(u"");
double _n_last_35158=0.0;
for(auto &&_n_item_35199:this->_n_events_35124){d::check_cancel();auto _n_binding_35200=_n_item_35199;
double _n_when_35159=std::get<0>(*_n_binding_35200);
d::String _n_s_35160=std::get<1>(*_n_binding_35200);
{
if(d::truth((_n_when_35159>_n_now_35156))){d::check_cancel();break;
}
(void)((_n_line_35157=_n_s_35160));
(void)((_n_last_35158=_n_when_35159));

}
}
double _n_idle_35161=(_n_now_35156-_n_last_35158);
bool _n_lit_35162=([&]()->bool{auto _n_logical_35201=(_n_idle_35161<0.45);return d::truth(_n_logical_35201)?_n_logical_35201:(d::mod((_n_idle_35161-0.45),1.06)>0.53);})();
d::String _n_body_35163=(d::string((d::string(this->_n_head_35121)+d::string(_n_line_35157)))+d::string((d::truth(_n_lit_35162)?_n_CURSOR_35111:d::String(u""))));
d::String _n_out_35164=d::padEnd(d::slice((d::string(d::repeat(d::String(u" "),this->_n_x_35133))+d::string(_n_body_35163)),0.0,this->_n_cols_35119),this->_n_cols_35119);
return d::join(d::Array<d::String,false>(d::from(this->_n_rows_35120,[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_r_35166=_a1;
return (d::truth((_n_r_35166==double(d::i32(this->_n_rows_35120)>>(d::u32(1.0)&31))))?_n_out_35164:this->_n_blank_35134);})),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("typewriter").cols)*ascii::catalog_meta("typewriter").rows);auto _env=std::make_shared<_n_Record_35168>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &typewriter_meta(){return catalog_meta("typewriter");}
std::unique_ptr<Piece> make_typewriter(const AsciiPieceOptions &o){return std::make_unique<Native_typewriter>(o);}
}
