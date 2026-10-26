// Direct, statically typed C++ from src/pieces/marquee.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20792;
struct _n_Record_20793;
struct _n_Record_20844;
struct _n_Record_20845;
struct _n_Record_20792{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_20793> _p_options{};
static std::shared_ptr<_n_Record_20792> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20792>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_20793>>(j["options"]);return out;}
};
struct _n_Record_20793{
d::String _p_text{};
double _p_speed{};
static std::shared_ptr<_n_Record_20793> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20793>();out->_p_text=d::decode<d::String>(j["text"]);out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_20844{
std::optional<d::String> _p_text{};
std::optional<double> _p_speed{};
static std::shared_ptr<_n_Record_20844> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20844>();out->_p_text=d::decode<std::optional<d::String>>(j["text"]);out->_p_speed=d::decode<std::optional<double>>(j["speed"]);return out;}
};
struct _n_Record_20845{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20845> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20845>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_strip_20796(d::String _a0);
std::shared_ptr<_n_Record_20792> _n_meta_20791=[](){return ([&](){auto _n_object_20850=std::make_shared<_n_Record_20792>();_n_object_20850->_p_name=d::String(u"marquee");_n_object_20850->_p_category=d::String(u"type");_n_object_20850->_p_note=d::String(u"a scrolling led sign framed by chasing bulbs");_n_object_20850->_p_cols=61.0;_n_object_20850->_p_rows=10.0;_n_object_20850->_p_fps=24.0;_n_object_20850->_p_options=([&](){auto _n_object_20852=std::make_shared<_n_Record_20793>();_n_object_20852->_p_text=d::String(u"now showing · doors open at 7:30 ·");_n_object_20852->_p_speed=12.0;return _n_object_20852;})();return _n_object_20850;})();}();
const d::String _n_PACKED_20794=[](){return (d::string((d::string((d::string((d::string((d::string(d::String(u"0ehjlphe14c4444e2eh1248v3v2421he426aiv225vgu11he668guhhe7v1248888ehhehhe9ehhf12c"))+d::string(d::String(u"AehhvhhhBuhhuhhuCehgggheDuhhhhhuEvgguggvFvggugggGehgnhhfHhhhvhhhIe44444eJ72222ic"))))+d::string(d::String(u"KhikokihLggggggvMhrllhhhNhhpljhhOehhhhhePuhhugggQehhhlidRuhhukihSfgge11uTv444444"))))+d::string(d::String(u"UhhhhhheVhhhhha4WhhhlllaXhha4ahhYhha4444Zv1248gv.0000004,0000048:0040040!4444404"))))+d::string(d::String(u"?eh12404-000e000'4400000\"aa00000/11248gg&cik8lid+044v440·0004000*04lel40#aavavaa"))))+d::string(d::String(u"(2488842)8422248@ehnlngf%op248j3=00v0v00_000000v 0000000")));}();
d::Dict<d::String,d::Array<double,false>> _n_FONT_20795=[](){return ([&](){d::Dict<d::String,d::Array<double,false>> _n_dictionary_20854;return _n_dictionary_20854;})();}();
const bool _n_init_20855=[](){{double _n_i_20810=0.0;
for(;d::truth((_n_i_20810<double(_n_PACKED_20794.size())));(void)((_n_i_20810=(_n_i_20810+8.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_20856=_n_FONT_20795;auto _n_index_20857=d::at(_n_PACKED_20794,_n_i_20810);auto _n_value_20858=d::map(([&](){d::Array<d::String,false> _n_array_20859;for(const auto &_v:d::slice(_n_PACKED_20794,(_n_i_20810+1.0),(_n_i_20810+8.0)))_n_array_20859.push(_v);return _n_array_20859;})(),[&]( d::String _a0) mutable ->double{d::String _n_d_20811=_a0;
return d::parseInt(_n_d_20811,32.0);});_n_array_20856.set(_n_index_20857,_n_value_20858);return _n_value_20858;})());
}}
return true;}();
d::Array<double,false> _n_strip_20796(d::String _a0){d::String _n_text_20812=_a0;
{
d::Array<double,false> _n_out_20813=d::Array<double,false>{};
for(auto &&_n_item_20860:d::chars(d::upper(_n_text_20812))){d::check_cancel();d::String _n_ch_20814=_n_item_20860;
{
d::Array<double,false> _n_g_20815=([&]()->d::Array<double,false>{auto _n_logical_20861=_n_FONT_20795.get(_n_ch_20814);return d::truth(_n_logical_20861)?_n_logical_20861:_n_FONT_20795.get(d::String(u"?"));})();
auto _n_col_20816=[&]( double _a0) mutable ->double{double _n_x_20817=_a0;
return d::reduce(_n_g_20815,[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_m_20818=_a0;
double _n_b_20819=_a1;
double _n_y_20820=_a2;
return double(d::i32(_n_m_20818)|d::i32((d::truth(double(d::i32(_n_b_20819)&d::i32(double(d::i32(16.0)>>(d::u32(_n_x_20817)&31)))))?double(int32_t(d::u32(1.0)<<(d::u32(_n_y_20820)&31))):0.0)));},0.0);};
d::Array<double,false> _n_cs_20821=(d::truth((_n_ch_20814==d::String(u" ")))?d::Array<double,false>{0.0,0.0,0.0}:d::filter(d::map(d::Array<double,false>{0.0,1.0,2.0,3.0,4.0},_n_col_20816),[&]( double _a0,double _a1,d::Array<double,false> _a2) mutable ->std::variant<double,bool>{double _n_m_20822=_a0;
double _n_x_20823=_a1;
d::Array<double,false> _n_a_20824=_a2;
return ([&]()->std::variant<double,bool>{auto _n_logical_20862=_n_m_20822;return d::truth(_n_logical_20862)?std::variant<double,bool>(_n_logical_20862):([&]()->std::variant<double,bool>{auto _n_logical_20863=d::some(_n_a_20824.slice(0.0,_n_x_20823),d::ToBoolean{});return d::truth(_n_logical_20863)?std::variant<double,bool>(d::some(_n_a_20824.slice(_n_x_20823),d::ToBoolean{})):std::variant<double,bool>(_n_logical_20863);})();})();}));
(void)(([&](){auto _n_append_20865=_n_out_20813;for(const auto &_v:_n_cs_20821)_n_append_20865.push(_v);_n_append_20865.push(0.0);return double(_n_append_20865.size());})());

}
}
return _n_out_20813;

}
}

struct Native_marquee final:ascii::Piece{
d::String _n_text_20797{};
double _n_speed_20798{};
double _n_cols_20799{};
double _n_rows_20800{};
double _n_left_20801{};
double _n_width_20802{};
double _n_band_20803{};
d::Array<double,false> _n_unit_20804{};
d::Array<double,false> _n_loop_20805{};
double _n_L_20806{};
d::Array<std::array<double,2>,false> _n_bulbs_20807{};
d::Array<d::Array<d::String,false>,false> _n_grid_20808{};
std::function<d::String(double,std::shared_ptr<_n_Record_20845>)> _render;

explicit Native_marquee(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_20866=d::decode<std::shared_ptr<_n_Record_20844>>(_options.data);
this->_n_text_20797=(d::present(_n_binding_20866->_p_text)?d::read(_n_binding_20866->_p_text):_n_meta_20791->_p_options->_p_text);
this->_n_speed_20798=(d::present(_n_binding_20866->_p_speed)?d::read(_n_binding_20866->_p_speed):_n_meta_20791->_p_options->_p_speed);
auto _n_binding_20867=_n_meta_20791;
this->_n_cols_20799=_n_binding_20867->_p_cols;
this->_n_rows_20800=_n_binding_20867->_p_rows;
this->_n_left_20801=4.0;
this->_n_width_20802=(this->_n_cols_20799-8.0);
this->_n_band_20803=3.0;
this->_n_unit_20804=_n_strip_20796(d::trim(d::string(this->_n_text_20797)));
(void)(([&](){auto _n_append_20868=this->_n_unit_20804;for(const auto &_v:d::Array<double,false>(size_t(12.0)).fill(0.0))_n_append_20868.push(_v);return double(_n_append_20868.size());})());
this->_n_loop_20805=this->_n_unit_20804.slice();
while(d::truth((double(this->_n_loop_20805.size())<(this->_n_width_20802+1.0)))){d::check_cancel();(void)((this->_n_loop_20805=this->_n_loop_20805.concat(this->_n_unit_20804)));
}
this->_n_L_20806=double(this->_n_loop_20805.size());
this->_n_bulbs_20807=d::Array<std::array<double,2>,false>{};
{double _n_c_20825=0.0;
for(;d::truth((_n_c_20825<this->_n_cols_20799));(void)((_n_c_20825=(_n_c_20825+2.0)))){d::check_cancel();(void)(this->_n_bulbs_20807.push(std::array<double,2>{0.0,_n_c_20825}));
}}
{double _n_r_20826=1.0;
for(;d::truth((_n_r_20826<(this->_n_rows_20800-1.0)));(void)((_n_r_20826++))){d::check_cancel();(void)(this->_n_bulbs_20807.push(std::array<double,2>{_n_r_20826,(this->_n_cols_20799-1.0)}));
}}
{double _n_c_20827=(this->_n_cols_20799-1.0);
for(;d::truth((_n_c_20827>=0.0));(void)((_n_c_20827=(_n_c_20827-2.0)))){d::check_cancel();(void)(this->_n_bulbs_20807.push(std::array<double,2>{(this->_n_rows_20800-1.0),_n_c_20827}));
}}
{double _n_r_20828=(this->_n_rows_20800-2.0);
for(;d::truth((_n_r_20828>0.0));(void)((_n_r_20828--))){d::check_cancel();(void)(this->_n_bulbs_20807.push(std::array<double,2>{_n_r_20828,0.0}));
}}
this->_n_grid_20808=d::Array<d::Array<d::String,false>,false>{};
{double _n_r_20829=0.0;
for(;d::truth((_n_r_20829<this->_n_rows_20800));(void)((_n_r_20829++))){d::check_cancel();(void)(this->_n_grid_20808.push(d::Array<d::String,false>(size_t(this->_n_cols_20799)).fill(d::String(u" "))));
}}
(void)(([&](){auto&& _n_array_20869=d::at(this->_n_grid_20808,1.0);auto _n_index_20870=2.0;auto _n_value_20871=d::String(u"╔");d::put(_n_array_20869,_n_index_20870,_n_value_20871);return _n_value_20871;})());
(void)(([&](){auto&& _n_array_20872=d::at(this->_n_grid_20808,1.0);auto _n_index_20873=(this->_n_cols_20799-3.0);auto _n_value_20874=d::String(u"╗");d::put(_n_array_20872,_n_index_20873,_n_value_20874);return _n_value_20874;})());
(void)(([&](){auto&& _n_array_20875=d::at(this->_n_grid_20808,(this->_n_rows_20800-2.0));auto _n_index_20876=2.0;auto _n_value_20877=d::String(u"╚");d::put(_n_array_20875,_n_index_20876,_n_value_20877);return _n_value_20877;})());
(void)(([&](){auto&& _n_array_20878=d::at(this->_n_grid_20808,(this->_n_rows_20800-2.0));auto _n_index_20879=(this->_n_cols_20799-3.0);auto _n_value_20880=d::String(u"╝");d::put(_n_array_20878,_n_index_20879,_n_value_20880);return _n_value_20880;})());
{double _n_c_20830=3.0;
for(;d::truth((_n_c_20830<(this->_n_cols_20799-3.0)));(void)((_n_c_20830++))){d::check_cancel();(void)(([&](){auto&& _n_array_20881=d::at(this->_n_grid_20808,1.0);auto _n_index_20882=_n_c_20830;auto _n_value_20883=([&](){auto&& _n_array_20884=d::at(this->_n_grid_20808,(this->_n_rows_20800-2.0));auto _n_index_20885=_n_c_20830;auto _n_value_20886=d::String(u"═");d::put(_n_array_20884,_n_index_20885,_n_value_20886);return _n_value_20886;})();d::put(_n_array_20881,_n_index_20882,_n_value_20883);return _n_value_20883;})());
}}
{double _n_r_20831=2.0;
for(;d::truth((_n_r_20831<(this->_n_rows_20800-2.0)));(void)((_n_r_20831++))){d::check_cancel();(void)(([&](){auto&& _n_array_20887=d::at(this->_n_grid_20808,_n_r_20831);auto _n_index_20888=2.0;auto _n_value_20889=([&](){auto&& _n_array_20890=d::at(this->_n_grid_20808,_n_r_20831);auto _n_index_20891=(this->_n_cols_20799-3.0);auto _n_value_20892=d::String(u"║");d::put(_n_array_20890,_n_index_20891,_n_value_20892);return _n_value_20892;})();d::put(_n_array_20887,_n_index_20888,_n_value_20889);return _n_value_20889;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_20845> _a1) mutable ->d::String{double _n_t_20832=_a0;
{
double _n_off_20833=d::mod(std::floor((_n_t_20832*this->_n_speed_20798)),this->_n_L_20806);
{double _n_j_20834=0.0;
for(;d::truth((_n_j_20834<this->_n_width_20802));(void)((_n_j_20834++))){d::check_cancel();double _n_m_20835=d::at(this->_n_loop_20805,d::mod((_n_off_20833+_n_j_20834),this->_n_L_20806));
{double _n_i_20836=0.0;
for(;d::truth((_n_i_20836<4.0));(void)((_n_i_20836++))){d::check_cancel();double _n_top_20837=double(d::i32(double(d::i32(_n_m_20835)>>(d::u32(((2.0*_n_i_20836)-1.0))&31)))&d::i32((d::truth(_n_i_20836)?1.0:0.0)));
double _n_bot_20838=double(d::i32(double(d::i32(_n_m_20835)>>(d::u32((2.0*_n_i_20836))&31)))&d::i32(1.0));
(void)(([&](){auto&& _n_array_20893=d::at(this->_n_grid_20808,(this->_n_band_20803+_n_i_20836));auto _n_index_20894=(this->_n_left_20801+_n_j_20834);auto _n_value_20895=((d::truth(_n_top_20837)&&d::truth(_n_bot_20838))?d::String(u"█"):(d::truth(_n_top_20837)?d::String(u"▀"):(d::truth(_n_bot_20838)?d::String(u"▄"):d::String(u" "))));d::put(_n_array_20893,_n_index_20894,_n_value_20895);return _n_value_20895;})());
}}
}}
double _n_step_20839=std::floor((_n_t_20832*7.0));
(void)(d::forEach(this->_n_bulbs_20807,[&]( std::array<double,2> _a0,double _a1) mutable ->d::String{auto _n_binding_20896=_a0;
double _n_r_20840=d::at(_n_binding_20896,0.0);
double _n_c_20841=d::at(_n_binding_20896,1.0);
double _n_i_20842=_a1;
return ([&](){auto&& _n_array_20897=d::at(this->_n_grid_20808,_n_r_20840);auto _n_index_20898=_n_c_20841;auto _n_value_20899=(d::truth((d::mod((d::mod((_n_i_20842-_n_step_20839),3.0)+3.0),3.0)==0.0))?d::String(u"·"):d::String(u"o"));d::put(_n_array_20897,_n_index_20898,_n_value_20899);return _n_value_20899;})();}));
return d::join(d::map(this->_n_grid_20808,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_20843=_a0;
return d::join(_n_row_20843,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("marquee").cols)*ascii::catalog_meta("marquee").rows);auto _env=std::make_shared<_n_Record_20845>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &marquee_meta(){return catalog_meta("marquee");}
std::unique_ptr<Piece> make_marquee(const AsciiPieceOptions &o){return std::make_unique<Native_marquee>(o);}
}
