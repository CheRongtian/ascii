// Direct, statically typed C++ from src/pieces/rule-30.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26196;
struct _n_Record_26224;
struct _n_Record_26196{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_26196> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26196>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_26224{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26224> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26224>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_26196> _n_meta_26195=[](){return ([&](){auto _n_object_26227=std::make_shared<_n_Record_26196>();_n_object_26227->_p_name=d::String(u"rule 30");_n_object_26227->_p_category=d::String(u"generative");_n_object_26227->_p_note=d::String(u"one cell grows a row at a time under rules 30, 90 and 110");_n_object_26227->_p_cols=64.0;_n_object_26227->_p_rows=20.0;_n_object_26227->_p_fps=8.0;return _n_object_26227;})();}();
d::Array<std::array<double,3>,false> _n_RULES_26197=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{30.0,31.0,32.0},std::array<double,3>{90.0,31.0,32.0},std::array<double,3>{110.0,51.0,40.0}};}();
const double _n_GAP_26198=[](){return 12.0;}();
const double _n_SPEED_26199=[](){return 8.0;}();

struct Native_rule_30 final:ascii::Piece{
double _n_cols_26200{};
double _n_rows_26201{};
double _n_EXTRA_26202{};
double _n_W_26203{};
d::Array<d::Array<uint8_t,true>,false> _n_tape_26204{};
double _n_LOOP_26205{};
d::Array<d::String,false> _n_GLYPH_26206{};
std::function<d::String(double,std::shared_ptr<_n_Record_26224>)> _render;

explicit Native_rule_30(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26228=_n_meta_26195;
this->_n_cols_26200=_n_binding_26228->_p_cols;
this->_n_rows_26201=_n_binding_26228->_p_rows;
this->_n_EXTRA_26202=48.0;
this->_n_W_26203=(this->_n_cols_26200+(2.0*this->_n_EXTRA_26202));
this->_n_tape_26204=d::Array<d::Array<uint8_t,true>,false>{};
for(auto &&_n_item_26229:_n_RULES_26197){d::check_cancel();auto _n_binding_26230=_n_item_26229;
double _n_rule_26207=d::at(_n_binding_26230,0.0);
double _n_at_26208=d::at(_n_binding_26230,1.0);
double _n_gens_26209=d::at(_n_binding_26230,2.0);
{
d::Array<uint8_t,true> _n_cur_26210=d::Array<uint8_t,true>(size_t(this->_n_W_26203));
d::Array<uint8_t,true> _n_nxt_26211=d::Array<uint8_t,true>(size_t(this->_n_W_26203));
(void)(([&](){auto&& _n_array_26231=_n_cur_26210;auto _n_index_26232=(this->_n_EXTRA_26202+_n_at_26208);auto _n_value_26233=1.0;d::put(_n_array_26231,_n_index_26232,_n_value_26233);return _n_value_26233;})());
{double _n_g_26212=0.0;
for(;d::truth((_n_g_26212<_n_gens_26209));(void)((_n_g_26212++))){d::check_cancel();(void)(this->_n_tape_26204.push(_n_cur_26210.slice(this->_n_EXTRA_26202,(this->_n_EXTRA_26202+this->_n_cols_26200))));
{double _n_i_26213=1.0;
for(;d::truth((_n_i_26213<(this->_n_W_26203-1.0)));(void)((_n_i_26213++))){d::check_cancel();(void)(([&](){auto&& _n_array_26234=_n_nxt_26211;auto _n_index_26235=_n_i_26213;auto _n_value_26236=double(d::i32(double(d::i32(_n_rule_26207)>>(d::u32(double(d::i32(double(d::i32(double(int32_t(d::u32(d::at(_n_cur_26210,(_n_i_26213-1.0)))<<(d::u32(2.0)&31))))|d::i32(double(int32_t(d::u32(d::at(_n_cur_26210,_n_i_26213))<<(d::u32(1.0)&31))))))|d::i32(d::at(_n_cur_26210,(_n_i_26213+1.0)))))&31)))&d::i32(1.0));d::put(_n_array_26234,_n_index_26235,_n_value_26236);return _n_value_26236;})());
}}
(void)(([&](){auto _n_unpack_26237=d::Array<d::Array<uint8_t,true>,false>{_n_nxt_26211,_n_cur_26210};_n_cur_26210=d::at(_n_unpack_26237,0.0);_n_nxt_26211=d::at(_n_unpack_26237,1.0);return _n_unpack_26237;})());
}}
{double _n_g_26214=0.0;
for(;d::truth((_n_g_26214<_n_GAP_26198));(void)((_n_g_26214++))){d::check_cancel();(void)(this->_n_tape_26204.push(d::Array<uint8_t,true>(size_t(this->_n_cols_26200))));
}}

}
}
this->_n_LOOP_26205=(double(this->_n_tape_26204.size())/2.0);
this->_n_GLYPH_26206=d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};
_render=[=]( double _a0,std::shared_ptr<_n_Record_26224> _a1) mutable ->d::String{double _n_t_26215=_a0;
{
double _n_top_26216=(std::floor((_n_t_26215*_n_SPEED_26199))-2.0);
d::Array<d::String,false> _n_lines_26217=d::Array<d::String,false>{};
{double _n_r_26218=0.0;
for(;d::truth((_n_r_26218<this->_n_rows_26201));(void)((_n_r_26218++))){d::check_cancel();double _n_k_26219=d::mod((d::mod((_n_top_26216+_n_r_26218),this->_n_LOOP_26205)+this->_n_LOOP_26205),this->_n_LOOP_26205);
d::Array<uint8_t,true> _n_a_26220=d::at(this->_n_tape_26204,(2.0*_n_k_26219));
d::Array<uint8_t,true> _n_b_26221=d::at(this->_n_tape_26204,((2.0*_n_k_26219)+1.0));
d::String _n_line_26222=d::String(u"");
{double _n_c_26223=0.0;
for(;d::truth((_n_c_26223<this->_n_cols_26200));(void)((_n_c_26223++))){d::check_cancel();(void)((_n_line_26222=(d::string(_n_line_26222)+d::string(d::at(this->_n_GLYPH_26206,(d::at(_n_a_26220,_n_c_26223)+(2.0*d::at(_n_b_26221,_n_c_26223))))))));
}}
(void)(_n_lines_26217.push(_n_line_26222));
}}
return d::join(_n_lines_26217,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rule-30").cols)*ascii::catalog_meta("rule-30").rows);auto _env=std::make_shared<_n_Record_26224>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rule_30_meta(){return catalog_meta("rule-30");}
std::unique_ptr<Piece> make_rule_30(const AsciiPieceOptions &o){return std::make_unique<Native_rule_30>(o);}
}
