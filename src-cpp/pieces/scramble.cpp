// Direct, statically typed C++ from src/pieces/scramble.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_27705;
struct _n_Record_27706;
struct _n_Record_27719;
struct _n_Record_27722;
struct _n_Record_27755;
struct _n_Record_27756;
struct _n_Record_27770;
struct _n_Record_27705{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_27706> _p_options{};
static std::shared_ptr<_n_Record_27705> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27705>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_27706>>(j["options"]);return out;}
};
struct _n_Record_27706{
d::Array<d::String,false> _p_phrases{};
static std::shared_ptr<_n_Record_27706> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27706>();out->_p_phrases=d::decode<d::Array<d::String,false>>(j["phrases"]);return out;}
};
struct _n_Record_27719{
d::String _p_text{};
double _p_x{};
static std::shared_ptr<_n_Record_27719> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27719>();out->_p_text=d::decode<d::String>(j["text"]);out->_p_x=d::decode<double>(j["x"]);return out;}
};
struct _n_Record_27722{
std::shared_ptr<_n_Record_27719> _p_from{};
std::shared_ptr<_n_Record_27719> _p_to{};
double _p_lo{};
double _p_hi{};
d::Array<double,false> _p_out{};
d::Array<double,false> _p_settle{};
double _p_start{};
double _p_end{};
static std::shared_ptr<_n_Record_27722> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27722>();out->_p_from=d::decode<std::shared_ptr<_n_Record_27719>>(j["from"]);out->_p_to=d::decode<std::shared_ptr<_n_Record_27719>>(j["to"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_out=d::decode<d::Array<double,false>>(j["out"]);out->_p_settle=d::decode<d::Array<double,false>>(j["settle"]);out->_p_start=d::decode<double>(j["start"]);out->_p_end=d::decode<double>(j["end"]);return out;}
};
struct _n_Record_27755{
std::optional<d::Array<d::String,false>> _p_phrases{};
static std::shared_ptr<_n_Record_27755> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27755>();out->_p_phrases=d::decode<std::optional<d::Array<d::String,false>>>(j["phrases"]);return out;}
};
struct _n_Record_27756{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_27756> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27756>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_27770{
std::shared_ptr<_n_Record_27719> _p_from{};
std::shared_ptr<_n_Record_27719> _p_to{};
double _p_lo{};
double _p_hi{};
d::Array<double,false> _p_out{};
d::Array<double,false> _p_settle{};
double _p_start{};
static std::shared_ptr<_n_Record_27770> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_27770>();out->_p_from=d::decode<std::shared_ptr<_n_Record_27719>>(j["from"]);out->_p_to=d::decode<std::shared_ptr<_n_Record_27719>>(j["to"]);out->_p_lo=d::decode<double>(j["lo"]);out->_p_hi=d::decode<double>(j["hi"]);out->_p_out=d::decode<d::Array<double,false>>(j["out"]);out->_p_settle=d::decode<d::Array<double,false>>(j["settle"]);out->_p_start=d::decode<double>(j["start"]);return out;}
};
std::function<double()> _n_mulberry32_27712(double _a0);
std::shared_ptr<_n_Record_27705> _n_meta_27704=[](){return ([&](){auto _n_object_27761=std::make_shared<_n_Record_27705>();_n_object_27761->_p_name=d::String(u"scramble");_n_object_27761->_p_category=d::String(u"type");_n_object_27761->_p_note=d::String(u"phrases decoding left to right out of flickering glyphs");_n_object_27761->_p_cols=44.0;_n_object_27761->_p_rows=3.0;_n_object_27761->_p_fps=20.0;_n_object_27761->_p_options=([&](){auto _n_object_27763=std::make_shared<_n_Record_27706>();_n_object_27763->_p_phrases=d::Array<d::String,false>{d::String(u"hello, world"),d::String(u"decoding the signal"),d::String(u"nothing is lost"),d::String(u"see you on the other side")};return _n_object_27763;})();return _n_object_27761;})();}();
const d::String _n_GLYPHS_27707=[](){return d::String(u"!<>-_\\/[]{}=+*^?#%&$@0123456789abcdefxyz");}();
const double _n_OUT_27708=[](){return 0.022;}();
const double _n_IN_27709=[](){return 0.05;}();
const double _n_LEAD_27710=[](){return 0.32;}();
const double _n_HOLD_27711=[](){return 1.9;}();
std::function<double()> _n_mulberry32_27712(double _a0){double _n_a_27727=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_27727=double(d::i32((_n_a_27727+1831565813.0))|d::i32(0.0))));
double _n_t_27728=d::imul(double(d::i32(_n_a_27727)^d::i32(double(d::u32(_n_a_27727)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_27727)));
(void)((_n_t_27728=double(d::i32((_n_t_27728+d::imul(double(d::i32(_n_t_27728)^d::i32(double(d::u32(_n_t_27728)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_27728)))))^d::i32(_n_t_27728))));
return (double(d::u32(double(d::i32(_n_t_27728)^d::i32(double(d::u32(_n_t_27728)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_scramble final:ascii::Piece{
d::Array<d::String,false> _n_phrases_27713{};
double _n_cols_27714{};
double _n_rows_27715{};
d::Array<d::String,false> _n_list_27716{};
std::function<double()> _n_rand_27717{};
d::Array<std::shared_ptr<_n_Record_27719>,false> _n_placed_27718{};
double _n_at_27720{};
d::Array<std::shared_ptr<_n_Record_27722>,false> _n_steps_27721{};
double _n_period_27723{};
double _n_offset_27724{};
std::function<d::String(double,std::shared_ptr<_n_Record_27756>)> _render;
d::String _n_charAt_27725(std::shared_ptr<_n_Record_27719> _a0,double _a1){std::shared_ptr<_n_Record_27719> _n_p_27740=_a0;
double _n_c_27741=_a1;
return ((d::truth((_n_c_27741>=_n_p_27740->_p_x))&&d::truth((_n_c_27741<(_n_p_27740->_p_x+double(_n_p_27740->_p_text.size())))))?d::at(_n_p_27740->_p_text,(_n_c_27741-_n_p_27740->_p_x)):d::String(u" "));}

explicit Native_scramble(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_27764=d::decode<std::shared_ptr<_n_Record_27755>>(_options.data);
this->_n_phrases_27713=(d::present(_n_binding_27764->_p_phrases)?d::read(_n_binding_27764->_p_phrases):_n_meta_27704->_p_options->_p_phrases);
auto _n_binding_27765=_n_meta_27704;
this->_n_cols_27714=_n_binding_27765->_p_cols;
this->_n_rows_27715=_n_binding_27765->_p_rows;
this->_n_list_27716=d::map((d::truth(double(this->_n_phrases_27713.size()))?this->_n_phrases_27713:d::Array<d::String,false>{d::String(u"")}),[&]( d::String _a0) mutable ->d::String{d::String _n_p_27729=_a0;
return d::slice(d::string(_n_p_27729),0.0,(this->_n_cols_27714-4.0));});
this->_n_rand_27717=_n_mulberry32_27712(77.0);
this->_n_placed_27718=d::map(this->_n_list_27716,[&]( d::String _a0) mutable ->std::shared_ptr<_n_Record_27719>{d::String _n_p_27730=_a0;
return ([&](){auto _n_object_27769=std::make_shared<_n_Record_27719>();_n_object_27769->_p_text=_n_p_27730;_n_object_27769->_p_x=std::floor(((this->_n_cols_27714-double(_n_p_27730.size()))/2.0));return _n_object_27769;})();});
this->_n_at_27720=0.0;
this->_n_steps_27721=d::map(this->_n_placed_27718,[&]( std::shared_ptr<_n_Record_27719> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_27722>{std::shared_ptr<_n_Record_27719> _n_to_27731=_a0;
double _n_i_27732=_a1;
{
std::shared_ptr<_n_Record_27719> _n_from_27733=d::at(this->_n_placed_27718,d::mod(((_n_i_27732+double(this->_n_placed_27718.size()))-1.0),double(this->_n_placed_27718.size())));
double _n_lo_27734=d::minimum({_n_from_27733->_p_x,_n_to_27731->_p_x});
double _n_hi_27735=d::maximum({(_n_from_27733->_p_x+double(_n_from_27733->_p_text.size())),(_n_to_27731->_p_x+double(_n_to_27731->_p_text.size()))});
d::Array<double,false> _n_out_27736=d::Array<double,false>{};
d::Array<double,false> _n_settle_27737=d::Array<double,false>{};
{double _n_c_27738=_n_lo_27734;
for(;d::truth((_n_c_27738<_n_hi_27735));(void)((_n_c_27738++))){d::check_cancel();(void)(_n_out_27736.push(((this->_n_at_27720+((_n_c_27738-_n_lo_27734)*_n_OUT_27708))+(this->_n_rand_27717()*0.06))));
(void)(_n_settle_27737.push((((this->_n_at_27720+_n_LEAD_27710)+((_n_c_27738-_n_lo_27734)*_n_IN_27709))+(this->_n_rand_27717()*0.14))));
}}
std::shared_ptr<_n_Record_27722> _n_s_27739=([&](){auto _n_object_27771=std::make_shared<_n_Record_27722>();_n_object_27771->_p_from=_n_from_27733;_n_object_27771->_p_to=_n_to_27731;_n_object_27771->_p_lo=_n_lo_27734;_n_object_27771->_p_hi=_n_hi_27735;_n_object_27771->_p_out=_n_out_27736;_n_object_27771->_p_settle=_n_settle_27737;_n_object_27771->_p_start=this->_n_at_27720;return _n_object_27771;})();
(void)((this->_n_at_27720=(([&](){d::Array<double> _n_numbers_27772;_n_numbers_27772.push((this->_n_at_27720+_n_LEAD_27710));for(auto _x:_n_settle_27737)_n_numbers_27772.push(_x);return d::maximum(_n_numbers_27772);})()+_n_HOLD_27711)));
(void)((_n_s_27739->_p_end=this->_n_at_27720));
return _n_s_27739;

}
});
this->_n_period_27723=this->_n_at_27720;
this->_n_offset_27724=(d::at(this->_n_steps_27721,0.0)->_p_end-0.7);
_render=[=]( double _a0,std::shared_ptr<_n_Record_27756> _a1) mutable ->d::String{double _n_t_27742=_a0;
{
double _n_now_27743=d::mod((d::mod((_n_t_27742+this->_n_offset_27724),this->_n_period_27723)+this->_n_period_27723),this->_n_period_27723);
std::shared_ptr<_n_Record_27722> _n_s_27744=([&]()->std::shared_ptr<_n_Record_27722>{auto _n_logical_27773=d::read(d::find(this->_n_steps_27721,[&]( std::shared_ptr<_n_Record_27722> _a0) mutable ->bool{std::shared_ptr<_n_Record_27722> _n_st_27745=_a0;
return (_n_now_27743<_n_st_27745->_p_end);}));return d::truth(_n_logical_27773)?_n_logical_27773:d::at(this->_n_steps_27721,0.0);})();
double _n_tick_27746=std::floor((_n_now_27743*20.0));
d::Array<d::String,false> _n_line_27747=d::Array<d::String,false>(size_t(this->_n_cols_27714)).fill(d::String(u" "));
{double _n_c_27748=0.0;
for(;d::truth((_n_c_27748<this->_n_cols_27714));(void)((_n_c_27748++))){d::check_cancel();if((d::truth((_n_c_27748<_n_s_27744->_p_lo))||d::truth((_n_c_27748>=_n_s_27744->_p_hi)))){d::check_cancel();continue;
}
double _n_k_27749=(_n_c_27748-_n_s_27744->_p_lo);
d::String _n_a_27750=this->_n_charAt_27725(_n_s_27744->_p_from,_n_c_27748);
d::String _n_b_27751=this->_n_charAt_27725(_n_s_27744->_p_to,_n_c_27748);
if(d::truth((_n_now_27743<d::at(_n_s_27744->_p_out,_n_k_27749)))){d::check_cancel();(void)(([&](){auto&& _n_array_27774=_n_line_27747;auto _n_index_27775=_n_c_27748;auto _n_value_27776=_n_a_27750;d::put(_n_array_27774,_n_index_27775,_n_value_27776);return _n_value_27776;})());
}else {d::check_cancel();if(d::truth((_n_now_27743>=d::at(_n_s_27744->_p_settle,_n_k_27749)))){d::check_cancel();(void)(([&](){auto&& _n_array_27777=_n_line_27747;auto _n_index_27778=_n_c_27748;auto _n_value_27779=_n_b_27751;d::put(_n_array_27777,_n_index_27778,_n_value_27779);return _n_value_27779;})());
}else {d::check_cancel();if(((d::truth((_n_a_27750==d::String(u" ")))&&d::truth((_n_b_27751==d::String(u" "))))&&d::truth((_n_now_27743<(d::at(_n_s_27744->_p_out,_n_k_27749)+0.12))))){d::check_cancel();(void)(([&](){auto&& _n_array_27780=_n_line_27747;auto _n_index_27781=_n_c_27748;auto _n_value_27782=d::String(u" ");d::put(_n_array_27780,_n_index_27781,_n_value_27782);return _n_value_27782;})());
}else {d::check_cancel();double _n_h_27752=([&](){auto _n_argument_27783=double(d::i32(_n_c_27748)^d::i32(d::imul(_n_tick_27746,668265261.0)));auto _n_argument_27784=2654435761.0;return d::imul(_n_argument_27783,_n_argument_27784);})();
(void)((_n_h_27752=d::imul(double(d::i32(_n_h_27752)^d::i32(double(d::u32(_n_h_27752)>>(d::u32(15.0)&31)))),2246822519.0)));
(void)(([&](){auto&& _n_array_27785=_n_line_27747;auto _n_index_27786=_n_c_27748;auto _n_value_27787=d::at(_n_GLYPHS_27707,d::mod(double(d::u32(double(d::i32(_n_h_27752)^d::i32(double(d::u32(_n_h_27752)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31)),double(_n_GLYPHS_27707.size())));d::put(_n_array_27785,_n_index_27786,_n_value_27787);return _n_value_27787;})());
}
}
}
}}
d::Array<d::String,false> _n_lines_27753=d::Array<d::String,false>{};
{double _n_r_27754=0.0;
for(;d::truth((_n_r_27754<this->_n_rows_27715));(void)((_n_r_27754++))){d::check_cancel();(void)(_n_lines_27753.push((d::truth((_n_r_27754==double(d::i32(this->_n_rows_27715)>>(d::u32(1.0)&31))))?d::join(_n_line_27747,d::String(u"")):d::repeat(d::String(u" "),this->_n_cols_27714))));
}}
return d::join(_n_lines_27753,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("scramble").cols)*ascii::catalog_meta("scramble").rows);auto _env=std::make_shared<_n_Record_27756>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &scramble_meta(){return catalog_meta("scramble");}
std::unique_ptr<Piece> make_scramble(const AsciiPieceOptions &o){return std::make_unique<Native_scramble>(o);}
}
