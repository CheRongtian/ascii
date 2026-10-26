// Direct, statically typed C++ from src/pieces/marquee.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20793;
struct _n_Record_20794;
struct _n_Record_20845;
struct _n_Record_20846;
struct _n_Record_20793{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_20794> _p_options{};
static std::shared_ptr<_n_Record_20793> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20793>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_20794>>(j["options"]);return out;}
};
struct _n_Record_20794{
d::String _p_text{};
double _p_speed{};
static std::shared_ptr<_n_Record_20794> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20794>();out->_p_text=d::decode<d::String>(j["text"]);out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_20845{
std::optional<d::String> _p_text{};
std::optional<double> _p_speed{};
static std::shared_ptr<_n_Record_20845> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20845>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_speed=d::decode<std::optional<double>>(j["speed"]);return out;}
};
struct _n_Record_20846{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20846> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20846>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_strip_20797(d::String _a0);
std::shared_ptr<_n_Record_20793> _n_meta_20792=[](){return ([&](){auto _n_object_20851=std::make_shared<_n_Record_20793>();_n_object_20851->_p_name=d::String(u"marquee");_n_object_20851->_p_category=d::String(u"type");_n_object_20851->_p_note=d::String(u"a scrolling led sign framed by chasing bulbs");_n_object_20851->_p_cols=61.0;_n_object_20851->_p_rows=10.0;_n_object_20851->_p_fps=24.0;_n_object_20851->_p_options=([&](){auto _n_object_20853=std::make_shared<_n_Record_20794>();_n_object_20853->_p_text=d::String(u"now showing · doors open at 7:30 ·");_n_object_20853->_p_speed=12.0;return _n_object_20853;})();return _n_object_20851;})();}();
const d::String _n_PACKED_20795=[](){return (d::string((d::string((d::string((d::string((d::string(d::String(u"0ehjlphe14c4444e2eh1248v3v2421he426aiv225vgu11he668guhhe7v1248888ehhehhe9ehhf12c"))+d::string(d::String(u"AehhvhhhBuhhuhhuCehgggheDuhhhhhuEvgguggvFvggugggGehgnhhfHhhhvhhhIe44444eJ72222ic"))))+d::string(d::String(u"KhikokihLggggggvMhrllhhhNhhpljhhOehhhhhePuhhugggQehhhlidRuhhukihSfgge11uTv444444"))))+d::string(d::String(u"UhhhhhheVhhhhha4WhhhlllaXhha4ahhYhha4444Zv1248gv.0000004,0000048:0040040!4444404"))))+d::string(d::String(u"?eh12404-000e000'4400000\"aa00000/11248gg&cik8lid+044v440·0004000*04lel40#aavavaa"))))+d::string(d::String(u"(2488842)8422248@ehnlngf%op248j3=00v0v00_000000v 0000000")));}();
d::Dict<d::String,d::Array<double,false>> _n_FONT_20796=[](){return ([&](){d::Dict<d::String,d::Array<double,false>> _n_dictionary_20855;return _n_dictionary_20855;})();}();
const bool _n_init_20856=[](){{double _n_i_20811=0.0;
for(;d::truth((_n_i_20811<double(_n_PACKED_20795.size())));(void)((_n_i_20811=(_n_i_20811+8.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_20857=_n_FONT_20796;auto _n_index_20858=d::at(_n_PACKED_20795,_n_i_20811);auto _n_value_20859=d::map(([&](){d::Array<d::String,false> _n_array_20860;for(const auto &_v:d::slice(_n_PACKED_20795,(_n_i_20811+1.0),(_n_i_20811+8.0)))_n_array_20860.push(_v);return _n_array_20860;})(),[&]( d::String _a0) mutable ->double{d::String _n_d_20812=_a0;
return d::parseInt(_n_d_20812,32.0);});_n_array_20857.set(_n_index_20858,_n_value_20859);return _n_value_20859;})());
}}
return true;}();
d::Array<double,false> _n_strip_20797(d::String _a0){d::String _n_text_20813=_a0;
{
d::Array<double,false> _n_out_20814=d::Array<double,false>{};
for(auto &&_n_item_20861:d::chars(d::upper(_n_text_20813))){d::check_cancel();d::String _n_ch_20815=_n_item_20861;
{
d::Array<double,false> _n_g_20816=([&]()->d::Array<double,false>{auto _n_logical_20862=_n_FONT_20796.get(_n_ch_20815);return d::truth(_n_logical_20862)?_n_logical_20862:_n_FONT_20796.get(d::String(u"?"));})();
auto _n_col_20817=[&]( double _a0) mutable ->double{double _n_x_20818=_a0;
return d::reduce(_n_g_20816,[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_m_20819=_a0;
double _n_b_20820=_a1;
double _n_y_20821=_a2;
return double(d::i32(_n_m_20819)|d::i32((d::truth(double(d::i32(_n_b_20820)&d::i32(double(d::i32(16.0)>>(d::u32(_n_x_20818)&31)))))?double(int32_t(d::u32(1.0)<<(d::u32(_n_y_20821)&31))):0.0)));},0.0);};
d::Array<double,false> _n_cs_20822=(d::truth((_n_ch_20815==d::String(u" ")))?d::Array<double,false>{0.0,0.0,0.0}:d::filter(d::map(d::Array<double,false>{0.0,1.0,2.0,3.0,4.0},_n_col_20817),[&]( double _a0,double _a1,d::Array<double,false> _a2) mutable ->std::variant<double,bool>{double _n_m_20823=_a0;
double _n_x_20824=_a1;
d::Array<double,false> _n_a_20825=_a2;
return ([&]()->std::variant<double,bool>{auto _n_logical_20863=_n_m_20823;return d::truth(_n_logical_20863)?std::variant<double,bool>(_n_logical_20863):([&]()->std::variant<double,bool>{auto _n_logical_20864=d::some(_n_a_20825.slice(0.0,_n_x_20824),d::ToBoolean{});return d::truth(_n_logical_20864)?std::variant<double,bool>(d::some(_n_a_20825.slice(_n_x_20824),d::ToBoolean{})):std::variant<double,bool>(_n_logical_20864);})();})();}));
(void)(([&](){auto _n_append_20866=_n_out_20814;for(const auto &_v:_n_cs_20822)_n_append_20866.push(_v);_n_append_20866.push(0.0);return double(_n_append_20866.size());})());

}
}
return _n_out_20814;

}
}

struct Native_marquee final:ascii::Piece{
d::String _n_text_20798{};
double _n_speed_20799{};
double _n_cols_20800{};
double _n_rows_20801{};
double _n_left_20802{};
double _n_width_20803{};
double _n_band_20804{};
d::Array<double,false> _n_unit_20805{};
d::Array<double,false> _n_loop_20806{};
double _n_L_20807{};
d::Array<d::Array<double,false>,false> _n_bulbs_20808{};
d::Array<d::Array<d::String,false>,false> _n_grid_20809{};
std::function<d::String(double,std::shared_ptr<_n_Record_20846>)> _render;

explicit Native_marquee(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_20867=d::decode<std::shared_ptr<_n_Record_20845>>(_options.data);
this->_n_text_20798=(d::present(_n_binding_20867->_p_text)?d::read(_n_binding_20867->_p_text):_n_meta_20792->_p_options->_p_text);
this->_n_speed_20799=(d::present(_n_binding_20867->_p_speed)?d::read(_n_binding_20867->_p_speed):_n_meta_20792->_p_options->_p_speed);
auto _n_binding_20868=_n_meta_20792;
this->_n_cols_20800=_n_binding_20868->_p_cols;
this->_n_rows_20801=_n_binding_20868->_p_rows;
this->_n_left_20802=4.0;
this->_n_width_20803=(this->_n_cols_20800-8.0);
this->_n_band_20804=3.0;
this->_n_unit_20805=_n_strip_20797(d::trim(d::string(this->_n_text_20798)));
(void)(([&](){auto _n_append_20869=this->_n_unit_20805;for(const auto &_v:d::Array<double,false>(size_t(12.0)).fill(0.0))_n_append_20869.push(_v);return double(_n_append_20869.size());})());
this->_n_loop_20806=this->_n_unit_20805.slice();
while(d::truth((double(this->_n_loop_20806.size())<(this->_n_width_20803+1.0)))){d::check_cancel();(void)((this->_n_loop_20806=this->_n_loop_20806.concat(this->_n_unit_20805)));
}
this->_n_L_20807=double(this->_n_loop_20806.size());
this->_n_bulbs_20808=d::Array<d::Array<double,false>,false>{};
{double _n_c_20826=0.0;
for(;d::truth((_n_c_20826<this->_n_cols_20800));(void)((_n_c_20826=(_n_c_20826+2.0)))){d::check_cancel();(void)(this->_n_bulbs_20808.push(d::Array<double,false>{0.0,_n_c_20826}));
}}
{double _n_r_20827=1.0;
for(;d::truth((_n_r_20827<(this->_n_rows_20801-1.0)));(void)((_n_r_20827++))){d::check_cancel();(void)(this->_n_bulbs_20808.push(d::Array<double,false>{_n_r_20827,(this->_n_cols_20800-1.0)}));
}}
{double _n_c_20828=(this->_n_cols_20800-1.0);
for(;d::truth((_n_c_20828>=0.0));(void)((_n_c_20828=(_n_c_20828-2.0)))){d::check_cancel();(void)(this->_n_bulbs_20808.push(d::Array<double,false>{(this->_n_rows_20801-1.0),_n_c_20828}));
}}
{double _n_r_20829=(this->_n_rows_20801-2.0);
for(;d::truth((_n_r_20829>0.0));(void)((_n_r_20829--))){d::check_cancel();(void)(this->_n_bulbs_20808.push(d::Array<double,false>{_n_r_20829,0.0}));
}}
this->_n_grid_20809=d::Array<d::Array<d::String,false>,false>{};
{double _n_r_20830=0.0;
for(;d::truth((_n_r_20830<this->_n_rows_20801));(void)((_n_r_20830++))){d::check_cancel();(void)(this->_n_grid_20809.push(d::Array<d::String,false>(size_t(this->_n_cols_20800)).fill(d::String(u" "))));
}}
(void)(([&](){auto&& _n_array_20870=d::at(this->_n_grid_20809,1.0);auto _n_index_20871=2.0;auto _n_value_20872=d::String(u"╔");d::put(_n_array_20870,_n_index_20871,_n_value_20872);return _n_value_20872;})());
(void)(([&](){auto&& _n_array_20873=d::at(this->_n_grid_20809,1.0);auto _n_index_20874=(this->_n_cols_20800-3.0);auto _n_value_20875=d::String(u"╗");d::put(_n_array_20873,_n_index_20874,_n_value_20875);return _n_value_20875;})());
(void)(([&](){auto&& _n_array_20876=d::at(this->_n_grid_20809,(this->_n_rows_20801-2.0));auto _n_index_20877=2.0;auto _n_value_20878=d::String(u"╚");d::put(_n_array_20876,_n_index_20877,_n_value_20878);return _n_value_20878;})());
(void)(([&](){auto&& _n_array_20879=d::at(this->_n_grid_20809,(this->_n_rows_20801-2.0));auto _n_index_20880=(this->_n_cols_20800-3.0);auto _n_value_20881=d::String(u"╝");d::put(_n_array_20879,_n_index_20880,_n_value_20881);return _n_value_20881;})());
{double _n_c_20831=3.0;
for(;d::truth((_n_c_20831<(this->_n_cols_20800-3.0)));(void)((_n_c_20831++))){d::check_cancel();(void)(([&](){auto&& _n_array_20882=d::at(this->_n_grid_20809,1.0);auto _n_index_20883=_n_c_20831;auto _n_value_20884=([&](){auto&& _n_array_20885=d::at(this->_n_grid_20809,(this->_n_rows_20801-2.0));auto _n_index_20886=_n_c_20831;auto _n_value_20887=d::String(u"═");d::put(_n_array_20885,_n_index_20886,_n_value_20887);return _n_value_20887;})();d::put(_n_array_20882,_n_index_20883,_n_value_20884);return _n_value_20884;})());
}}
{double _n_r_20832=2.0;
for(;d::truth((_n_r_20832<(this->_n_rows_20801-2.0)));(void)((_n_r_20832++))){d::check_cancel();(void)(([&](){auto&& _n_array_20888=d::at(this->_n_grid_20809,_n_r_20832);auto _n_index_20889=2.0;auto _n_value_20890=([&](){auto&& _n_array_20891=d::at(this->_n_grid_20809,_n_r_20832);auto _n_index_20892=(this->_n_cols_20800-3.0);auto _n_value_20893=d::String(u"║");d::put(_n_array_20891,_n_index_20892,_n_value_20893);return _n_value_20893;})();d::put(_n_array_20888,_n_index_20889,_n_value_20890);return _n_value_20890;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_20846> _a1) mutable ->d::String{double _n_t_20833=_a0;
{
double _n_off_20834=d::mod(std::floor((_n_t_20833*this->_n_speed_20799)),this->_n_L_20807);
{double _n_j_20835=0.0;
for(;d::truth((_n_j_20835<this->_n_width_20803));(void)((_n_j_20835++))){d::check_cancel();double _n_m_20836=d::at(this->_n_loop_20806,d::mod((_n_off_20834+_n_j_20835),this->_n_L_20807));
{double _n_i_20837=0.0;
for(;d::truth((_n_i_20837<4.0));(void)((_n_i_20837++))){d::check_cancel();double _n_top_20838=double(d::i32(double(d::i32(_n_m_20836)>>(d::u32(((2.0*_n_i_20837)-1.0))&31)))&d::i32((d::truth(_n_i_20837)?1.0:0.0)));
double _n_bot_20839=double(d::i32(double(d::i32(_n_m_20836)>>(d::u32((2.0*_n_i_20837))&31)))&d::i32(1.0));
(void)(([&](){auto&& _n_array_20894=d::at(this->_n_grid_20809,(this->_n_band_20804+_n_i_20837));auto _n_index_20895=(this->_n_left_20802+_n_j_20835);auto _n_value_20896=((d::truth(_n_top_20838)&&d::truth(_n_bot_20839))?d::String(u"█"):(d::truth(_n_top_20838)?d::String(u"▀"):(d::truth(_n_bot_20839)?d::String(u"▄"):d::String(u" "))));d::put(_n_array_20894,_n_index_20895,_n_value_20896);return _n_value_20896;})());
}}
}}
double _n_step_20840=std::floor((_n_t_20833*7.0));
(void)(d::forEach(this->_n_bulbs_20808,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::String{auto _n_binding_20897=_a0;
double _n_r_20841=d::at(_n_binding_20897,0.0);
double _n_c_20842=d::at(_n_binding_20897,1.0);
double _n_i_20843=_a1;
return ([&](){auto&& _n_array_20898=d::at(this->_n_grid_20809,_n_r_20841);auto _n_index_20899=_n_c_20842;auto _n_value_20900=(d::truth((d::mod((d::mod((_n_i_20843-_n_step_20840),3.0)+3.0),3.0)==0.0))?d::String(u"·"):d::String(u"o"));d::put(_n_array_20898,_n_index_20899,_n_value_20900);return _n_value_20900;})();}));
return d::join(d::map(this->_n_grid_20809,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_20844=_a0;
return d::join(_n_row_20844,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("marquee").cols)*ascii::catalog_meta("marquee").rows);auto _env=std::make_shared<_n_Record_20846>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &marquee_meta(){return catalog_meta("marquee");}
std::unique_ptr<Piece> make_marquee(const AsciiPieceOptions &o){return std::make_unique<Native_marquee>(o);}
}
