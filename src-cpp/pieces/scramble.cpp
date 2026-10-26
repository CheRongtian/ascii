// Direct, statically typed C++ from src/pieces/scramble.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_27704;
struct _n_Record_27705;
struct _n_Record_27718;
struct _n_Record_27721;
struct _n_Record_27754;
struct _n_Record_27755;
struct _n_Record_27769;
struct _n_Record_27704{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_27705> _p_options{};
static std::shared_ptr<_n_Record_27704> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27704>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_27705>>(j["options"]);return out;}
};
struct _n_Record_27705{
d::Array<d::String,false> _p_phrases{};
static std::shared_ptr<_n_Record_27705> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27705>();out->_p_phrases=d::decode<d::Array<d::String,false>>(j["phrases"]);return out;}
};
struct _n_Record_27718{
d::String _p_text{};
double _p_x{};
static std::shared_ptr<_n_Record_27718> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27718>();out->_p_text=d::decode<d::String>(j["text"]);out->_p_x=d::decode<double>(j["x"]);return out;}
};
struct _n_Record_27721{
std::shared_ptr<_n_Record_27718> _p_from{};
std::shared_ptr<_n_Record_27718> _p_to{};
double _p_lo{};
double _p_hi{};
d::Array<double,false> _p_out{};
d::Array<double,false> _p_settle{};
double _p_start{};
double _p_end{};
static std::shared_ptr<_n_Record_27721> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27721>();out->_p_from=d::decode<std::shared_ptr<_n_Record_27718>>(j["from"]);out->_p_to=d::decode<std::shared_ptr<_n_Record_27718>>(j["to"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_out=d::decode<d::Array<double,false>>(j["out"]);out->_p_settle=d::decode<d::Array<double,false>>(j["settle"]);out->_p_start=d::decode<double>(j["start"]);out->_p_end=d::decode<double>(j["end"]);return out;}
};
struct _n_Record_27754{
std::optional<d::Array<d::String,false>> _p_phrases{};
static std::shared_ptr<_n_Record_27754> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27754>();out->_p_phrases=d::decode<std::optional<d::Array<d::String,false>>>(j["phrases"]);return out;}
};
struct _n_Record_27755{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_27755> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27755>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_27769{
std::shared_ptr<_n_Record_27718> _p_from{};
std::shared_ptr<_n_Record_27718> _p_to{};
double _p_lo{};
double _p_hi{};
d::Array<double,false> _p_out{};
d::Array<double,false> _p_settle{};
double _p_start{};
static std::shared_ptr<_n_Record_27769> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27769>();out->_p_from=d::decode<std::shared_ptr<_n_Record_27718>>(j["from"]);out->_p_to=d::decode<std::shared_ptr<_n_Record_27718>>(j["to"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_out=d::decode<d::Array<double,false>>(j["out"]);out->_p_settle=d::decode<d::Array<double,false>>(j["settle"]);out->_p_start=d::decode<double>(j["start"]);return out;}
};
std::function<double()> _n_mulberry32_27711(double _a0);
std::shared_ptr<_n_Record_27704> _n_meta_27703=[](){return ([&](){auto _n_object_27760=std::make_shared<_n_Record_27704>();_n_object_27760->_p_name=d::String(u"scramble");_n_object_27760->_p_category=d::String(u"type");_n_object_27760->_p_note=d::String(u"phrases decoding left to right out of flickering glyphs");_n_object_27760->_p_cols=44.0;_n_object_27760->_p_rows=3.0;_n_object_27760->_p_fps=20.0;_n_object_27760->_p_options=([&](){auto _n_object_27762=std::make_shared<_n_Record_27705>();_n_object_27762->_p_phrases=d::Array<d::String,false>{d::String(u"hello, world"),d::String(u"decoding the signal"),d::String(u"nothing is lost"),d::String(u"see you on the other side")};return _n_object_27762;})();return _n_object_27760;})();}();
const d::String _n_GLYPHS_27706=[](){return d::String(u"!<>-_\\/[]{}=+*^?#%&$@0123456789abcdefxyz");}();
const double _n_OUT_27707=[](){return 0.022;}();
const double _n_IN_27708=[](){return 0.05;}();
const double _n_LEAD_27709=[](){return 0.32;}();
const double _n_HOLD_27710=[](){return 1.9;}();
std::function<double()> _n_mulberry32_27711(double _a0){double _n_a_27726=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_27726=double(d::i32((_n_a_27726+1831565813.0))|d::i32(0.0))));
double _n_t_27727=d::imul(double(d::i32(_n_a_27726)^d::i32(double(d::u32(_n_a_27726)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_27726)));
(void)((_n_t_27727=double(d::i32((_n_t_27727+d::imul(double(d::i32(_n_t_27727)^d::i32(double(d::u32(_n_t_27727)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_27727)))))^d::i32(_n_t_27727))));
return (double(d::u32(double(d::i32(_n_t_27727)^d::i32(double(d::u32(_n_t_27727)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_scramble final:ascii::Piece{
d::Array<d::String,false> _n_phrases_27712{};
double _n_cols_27713{};
double _n_rows_27714{};
d::Array<d::String,false> _n_list_27715{};
std::function<double()> _n_rand_27716{};
d::Array<std::shared_ptr<_n_Record_27718>,false> _n_placed_27717{};
double _n_at_27719{};
d::Array<std::shared_ptr<_n_Record_27721>,false> _n_steps_27720{};
double _n_period_27722{};
double _n_offset_27723{};
std::function<d::String(double,std::shared_ptr<_n_Record_27755>)> _render;
d::String _n_charAt_27724(std::shared_ptr<_n_Record_27718> _a0,double _a1){std::shared_ptr<_n_Record_27718> _n_p_27739=_a0;
double _n_c_27740=_a1;
return ((d::truth((_n_c_27740>=_n_p_27739->_p_x))&&d::truth((_n_c_27740<(_n_p_27739->_p_x+double(_n_p_27739->_p_text.size())))))?d::at(_n_p_27739->_p_text,(_n_c_27740-_n_p_27739->_p_x)):d::String(u" "));}

explicit Native_scramble(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_27763=d::decode<std::shared_ptr<_n_Record_27754>>(_options.data);
this->_n_phrases_27712=(d::present(_n_binding_27763->_p_phrases)?d::read(_n_binding_27763->_p_phrases):_n_meta_27703->_p_options->_p_phrases);
auto _n_binding_27764=_n_meta_27703;
this->_n_cols_27713=_n_binding_27764->_p_cols;
this->_n_rows_27714=_n_binding_27764->_p_rows;
this->_n_list_27715=d::map((d::truth(double(this->_n_phrases_27712.size()))?this->_n_phrases_27712:d::Array<d::String,false>{d::String(u"")}),[&]( d::String _a0) mutable ->d::String{d::String _n_p_27728=_a0;
return d::slice(d::string(_n_p_27728),0.0,(this->_n_cols_27713-4.0));});
this->_n_rand_27716=_n_mulberry32_27711(77.0);
this->_n_placed_27717=d::map(this->_n_list_27715,[&]( d::String _a0) mutable ->std::shared_ptr<_n_Record_27718>{d::String _n_p_27729=_a0;
return ([&](){auto _n_object_27768=std::make_shared<_n_Record_27718>();_n_object_27768->_p_text=_n_p_27729;_n_object_27768->_p_x=std::floor(((this->_n_cols_27713-double(_n_p_27729.size()))/2.0));return _n_object_27768;})();});
this->_n_at_27719=0.0;
this->_n_steps_27720=d::map(this->_n_placed_27717,[&]( std::shared_ptr<_n_Record_27718> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_27721>{std::shared_ptr<_n_Record_27718> _n_to_27730=_a0;
double _n_i_27731=_a1;
{
std::shared_ptr<_n_Record_27718> _n_from_27732=d::at(this->_n_placed_27717,d::mod(((_n_i_27731+double(this->_n_placed_27717.size()))-1.0),double(this->_n_placed_27717.size())));
double _n_lo_27733=d::minimum({_n_from_27732->_p_x,_n_to_27730->_p_x});
double _n_hi_27734=d::maximum({(_n_from_27732->_p_x+double(_n_from_27732->_p_text.size())),(_n_to_27730->_p_x+double(_n_to_27730->_p_text.size()))});
d::Array<double,false> _n_out_27735=d::Array<double,false>{};
d::Array<double,false> _n_settle_27736=d::Array<double,false>{};
{double _n_c_27737=_n_lo_27733;
for(;d::truth((_n_c_27737<_n_hi_27734));(void)((_n_c_27737++))){d::check_cancel();(void)(_n_out_27735.push(((this->_n_at_27719+((_n_c_27737-_n_lo_27733)*_n_OUT_27707))+(this->_n_rand_27716()*0.06))));
(void)(_n_settle_27736.push((((this->_n_at_27719+_n_LEAD_27709)+((_n_c_27737-_n_lo_27733)*_n_IN_27708))+(this->_n_rand_27716()*0.14))));
}}
std::shared_ptr<_n_Record_27721> _n_s_27738=([&](){auto _n_object_27770=std::make_shared<_n_Record_27721>();_n_object_27770->_p_from=_n_from_27732;_n_object_27770->_p_to=_n_to_27730;_n_object_27770->_p_lo=_n_lo_27733;_n_object_27770->_p_hi=_n_hi_27734;_n_object_27770->_p_out=_n_out_27735;_n_object_27770->_p_settle=_n_settle_27736;_n_object_27770->_p_start=this->_n_at_27719;return _n_object_27770;})();
(void)((this->_n_at_27719=(([&](){d::Array<double> _n_numbers_27771;_n_numbers_27771.push((this->_n_at_27719+_n_LEAD_27709));for(auto _x:_n_settle_27736)_n_numbers_27771.push(_x);return d::maximum(_n_numbers_27771);})()+_n_HOLD_27710)));
(void)((_n_s_27738->_p_end=this->_n_at_27719));
return _n_s_27738;

}
});
this->_n_period_27722=this->_n_at_27719;
this->_n_offset_27723=(d::at(this->_n_steps_27720,0.0)->_p_end-0.7);
_render=[=]( double _a0,std::shared_ptr<_n_Record_27755> _a1) mutable ->d::String{double _n_t_27741=_a0;
{
double _n_now_27742=d::mod((d::mod((_n_t_27741+this->_n_offset_27723),this->_n_period_27722)+this->_n_period_27722),this->_n_period_27722);
std::shared_ptr<_n_Record_27721> _n_s_27743=([&]()->std::shared_ptr<_n_Record_27721>{auto _n_logical_27772=d::read(d::find(this->_n_steps_27720,[&]( std::shared_ptr<_n_Record_27721> _a0) mutable ->bool{std::shared_ptr<_n_Record_27721> _n_st_27744=_a0;
return (_n_now_27742<_n_st_27744->_p_end);}));return d::truth(_n_logical_27772)?_n_logical_27772:d::at(this->_n_steps_27720,0.0);})();
double _n_tick_27745=std::floor((_n_now_27742*20.0));
d::Array<d::String,false> _n_line_27746=d::Array<d::String,false>(size_t(this->_n_cols_27713)).fill(d::String(u" "));
{double _n_c_27747=0.0;
for(;d::truth((_n_c_27747<this->_n_cols_27713));(void)((_n_c_27747++))){d::check_cancel();if((d::truth((_n_c_27747<_n_s_27743->_p_lo))||d::truth((_n_c_27747>=_n_s_27743->_p_hi)))){d::check_cancel();continue;
}
double _n_k_27748=(_n_c_27747-_n_s_27743->_p_lo);
d::String _n_a_27749=this->_n_charAt_27724(_n_s_27743->_p_from,_n_c_27747);
d::String _n_b_27750=this->_n_charAt_27724(_n_s_27743->_p_to,_n_c_27747);
if(d::truth((_n_now_27742<d::at(_n_s_27743->_p_out,_n_k_27748)))){d::check_cancel();(void)(([&](){auto&& _n_array_27773=_n_line_27746;auto _n_index_27774=_n_c_27747;auto _n_value_27775=_n_a_27749;d::put(_n_array_27773,_n_index_27774,_n_value_27775);return _n_value_27775;})());
}else {d::check_cancel();if(d::truth((_n_now_27742>=d::at(_n_s_27743->_p_settle,_n_k_27748)))){d::check_cancel();(void)(([&](){auto&& _n_array_27776=_n_line_27746;auto _n_index_27777=_n_c_27747;auto _n_value_27778=_n_b_27750;d::put(_n_array_27776,_n_index_27777,_n_value_27778);return _n_value_27778;})());
}else {d::check_cancel();if(((d::truth((_n_a_27749==d::String(u" ")))&&d::truth((_n_b_27750==d::String(u" "))))&&d::truth((_n_now_27742<(d::at(_n_s_27743->_p_out,_n_k_27748)+0.12))))){d::check_cancel();(void)(([&](){auto&& _n_array_27779=_n_line_27746;auto _n_index_27780=_n_c_27747;auto _n_value_27781=d::String(u" ");d::put(_n_array_27779,_n_index_27780,_n_value_27781);return _n_value_27781;})());
}else {d::check_cancel();double _n_h_27751=([&](){auto _n_argument_27782=double(d::i32(_n_c_27747)^d::i32(d::imul(_n_tick_27745,668265261.0)));auto _n_argument_27783=2654435761.0;return d::imul(_n_argument_27782,_n_argument_27783);})();
(void)((_n_h_27751=d::imul(double(d::i32(_n_h_27751)^d::i32(double(d::u32(_n_h_27751)>>(d::u32(15.0)&31)))),2246822519.0)));
(void)(([&](){auto&& _n_array_27784=_n_line_27746;auto _n_index_27785=_n_c_27747;auto _n_value_27786=d::at(_n_GLYPHS_27706,d::mod(double(d::u32(double(d::i32(_n_h_27751)^d::i32(double(d::u32(_n_h_27751)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31)),double(_n_GLYPHS_27706.size())));d::put(_n_array_27784,_n_index_27785,_n_value_27786);return _n_value_27786;})());
}
}
}
}}
d::Array<d::String,false> _n_lines_27752=d::Array<d::String,false>{};
{double _n_r_27753=0.0;
for(;d::truth((_n_r_27753<this->_n_rows_27714));(void)((_n_r_27753++))){d::check_cancel();(void)(_n_lines_27752.push((d::truth((_n_r_27753==double(d::i32(this->_n_rows_27714)>>(d::u32(1.0)&31))))?d::join(_n_line_27746,d::String(u"")):d::repeat(d::String(u" "),this->_n_cols_27713))));
}}
return d::join(_n_lines_27752,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("scramble").cols)*ascii::catalog_meta("scramble").rows);auto _env=std::make_shared<_n_Record_27755>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &scramble_meta(){return catalog_meta("scramble");}
std::unique_ptr<Piece> make_scramble(const AsciiPieceOptions &o){return std::make_unique<Native_scramble>(o);}
}
