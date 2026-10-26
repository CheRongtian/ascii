// Direct, statically typed C++ from src/pieces/rule-30.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26197;
struct _n_Record_26225;
struct _n_Record_26197{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_26197> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26197>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_26225{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26225> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26225>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_26197> _n_meta_26196=[](){return ([&](){auto _n_object_26228=std::make_shared<_n_Record_26197>();_n_object_26228->_p_name=d::String(u"rule 30");_n_object_26228->_p_category=d::String(u"generative");_n_object_26228->_p_note=d::String(u"one cell grows a row at a time under rules 30, 90 and 110");_n_object_26228->_p_cols=64.0;_n_object_26228->_p_rows=20.0;_n_object_26228->_p_fps=8.0;return _n_object_26228;})();}();
d::Array<d::Array<double,false>,false> _n_RULES_26198=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{30.0,31.0,32.0},d::Array<double,false>{90.0,31.0,32.0},d::Array<double,false>{110.0,51.0,40.0}};}();
const double _n_GAP_26199=[](){return 12.0;}();
const double _n_SPEED_26200=[](){return 8.0;}();

struct Native_rule_30 final:ascii::Piece{
double _n_cols_26201{};
double _n_rows_26202{};
double _n_EXTRA_26203{};
double _n_W_26204{};
d::Array<d::Array<uint8_t,true>,false> _n_tape_26205{};
double _n_LOOP_26206{};
d::Array<d::String,false> _n_GLYPH_26207{};
std::function<d::String(double,std::shared_ptr<_n_Record_26225>)> _render;

explicit Native_rule_30(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26229=_n_meta_26196;
this->_n_cols_26201=_n_binding_26229->_p_cols;
this->_n_rows_26202=_n_binding_26229->_p_rows;
this->_n_EXTRA_26203=48.0;
this->_n_W_26204=(this->_n_cols_26201+(2.0*this->_n_EXTRA_26203));
this->_n_tape_26205=d::Array<d::Array<uint8_t,true>,false>{};
for(auto &&_n_item_26230:_n_RULES_26198){d::check_cancel();auto _n_binding_26231=_n_item_26230;
double _n_rule_26208=d::at(_n_binding_26231,0.0);
double _n_at_26209=d::at(_n_binding_26231,1.0);
double _n_gens_26210=d::at(_n_binding_26231,2.0);
{
d::Array<uint8_t,true> _n_cur_26211=d::Array<uint8_t,true>(size_t(this->_n_W_26204));
d::Array<uint8_t,true> _n_nxt_26212=d::Array<uint8_t,true>(size_t(this->_n_W_26204));
(void)(([&](){auto&& _n_array_26232=_n_cur_26211;auto _n_index_26233=(this->_n_EXTRA_26203+_n_at_26209);auto _n_value_26234=1.0;d::put(_n_array_26232,_n_index_26233,_n_value_26234);return _n_value_26234;})());
{double _n_g_26213=0.0;
for(;d::truth((_n_g_26213<_n_gens_26210));(void)((_n_g_26213++))){d::check_cancel();(void)(this->_n_tape_26205.push(_n_cur_26211.slice(this->_n_EXTRA_26203,(this->_n_EXTRA_26203+this->_n_cols_26201))));
{double _n_i_26214=1.0;
for(;d::truth((_n_i_26214<(this->_n_W_26204-1.0)));(void)((_n_i_26214++))){d::check_cancel();(void)(([&](){auto&& _n_array_26235=_n_nxt_26212;auto _n_index_26236=_n_i_26214;auto _n_value_26237=double(d::i32(double(d::i32(_n_rule_26208)>>(d::u32(double(d::i32(double(d::i32(double(int32_t(d::u32(d::at(_n_cur_26211,(_n_i_26214-1.0)))<<(d::u32(2.0)&31))))|d::i32(double(int32_t(d::u32(d::at(_n_cur_26211,_n_i_26214))<<(d::u32(1.0)&31))))))|d::i32(d::at(_n_cur_26211,(_n_i_26214+1.0)))))&31)))&d::i32(1.0));d::put(_n_array_26235,_n_index_26236,_n_value_26237);return _n_value_26237;})());
}}
(void)(([&](){auto _n_unpack_26238=d::Array<d::Array<uint8_t,true>,false>{_n_nxt_26212,_n_cur_26211};_n_cur_26211=d::at(_n_unpack_26238,0.0);_n_nxt_26212=d::at(_n_unpack_26238,1.0);return _n_unpack_26238;})());
}}
{double _n_g_26215=0.0;
for(;d::truth((_n_g_26215<_n_GAP_26199));(void)((_n_g_26215++))){d::check_cancel();(void)(this->_n_tape_26205.push(d::Array<uint8_t,true>(size_t(this->_n_cols_26201))));
}}

}
}
this->_n_LOOP_26206=(double(this->_n_tape_26205.size())/2.0);
this->_n_GLYPH_26207=d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};
_render=[=]( double _a0,std::shared_ptr<_n_Record_26225> _a1) mutable ->d::String{double _n_t_26216=_a0;
{
double _n_top_26217=(std::floor((_n_t_26216*_n_SPEED_26200))-2.0);
d::Array<d::String,false> _n_lines_26218=d::Array<d::String,false>{};
{double _n_r_26219=0.0;
for(;d::truth((_n_r_26219<this->_n_rows_26202));(void)((_n_r_26219++))){d::check_cancel();double _n_k_26220=d::mod((d::mod((_n_top_26217+_n_r_26219),this->_n_LOOP_26206)+this->_n_LOOP_26206),this->_n_LOOP_26206);
d::Array<uint8_t,true> _n_a_26221=d::at(this->_n_tape_26205,(2.0*_n_k_26220));
d::Array<uint8_t,true> _n_b_26222=d::at(this->_n_tape_26205,((2.0*_n_k_26220)+1.0));
d::String _n_line_26223=d::String(u"");
{double _n_c_26224=0.0;
for(;d::truth((_n_c_26224<this->_n_cols_26201));(void)((_n_c_26224++))){d::check_cancel();(void)((_n_line_26223=(d::string(_n_line_26223)+d::string(d::at(this->_n_GLYPH_26207,(d::at(_n_a_26221,_n_c_26224)+(2.0*d::at(_n_b_26222,_n_c_26224))))))));
}}
(void)(_n_lines_26218.push(_n_line_26223));
}}
return d::join(_n_lines_26218,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rule-30").cols)*ascii::catalog_meta("rule-30").rows);auto _env=std::make_shared<_n_Record_26225>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rule_30_meta(){return catalog_meta("rule-30");}
std::unique_ptr<Piece> make_rule_30(const AsciiPieceOptions &o){return std::make_unique<Native_rule_30>(o);}
}
