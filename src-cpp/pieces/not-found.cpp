// Direct, statically typed C++ from src/pieces/not-found.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_23224;
struct _n_Record_23225;
struct _n_Record_23293;
struct _n_Record_23294;
struct _n_Record_23302;
struct _n_Record_23224{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_23225> _p_options{};
static std::shared_ptr<_n_Record_23224> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23224>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_23225>>(j["options"]);return out;}
};
struct _n_Record_23225{
d::String _p_code{};
d::String _p_title{};
d::String _p_message{};
static std::shared_ptr<_n_Record_23225> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23225>();out->_p_code=d::decode<d::String>(j["code"]);out->_p_title=d::decode<d::String>(j["title"]);out->_p_message=d::decode<d::String>(j["message"]);return out;}
};
struct _n_Record_23293{
std::optional<d::String> _p_code{};
std::optional<d::String> _p_title{};
std::optional<d::String> _p_message{};
static std::shared_ptr<_n_Record_23293> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23293>();out->_p_code=d::decode<std::optional<d::String>>(j["code"]);out->_p_title=d::decode<std::optional<d::String>>(j["title"]);out->_p_message=d::decode<std::optional<d::String>>(j["message"]);return out;}
};
struct _n_Record_23294{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_23294> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23294>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_23302{
d::String _p_0{};
d::String _p_1{};
d::String _p_2{};
d::String _p_3{};
d::String _p_4{};
d::String _p_5{};
d::String _p_6{};
d::String _p_7{};
d::String _p_8{};
d::String _p_9{};
static std::shared_ptr<_n_Record_23302> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23302>();out->_p_0=d::decode<d::String>(j["0"]);out->_p_1=d::decode<d::String>(j["1"]);out->_p_2=d::decode<d::String>(j["2"]);out->_p_3=d::decode<d::String>(j["3"]);out->_p_4=d::decode<d::String>(j["4"]);out->_p_5=d::decode<d::String>(j["5"]);out->_p_6=d::decode<d::String>(j["6"]);out->_p_7=d::decode<d::String>(j["7"]);out->_p_8=d::decode<d::String>(j["8"]);out->_p_9=d::decode<d::String>(j["9"]);return out;}
};

std::shared_ptr<_n_Record_23224> _n_meta_23223=[](){return ([&](){auto _n_object_23299=std::make_shared<_n_Record_23224>();_n_object_23299->_p_name=d::String(u"not found");_n_object_23299->_p_category=d::String(u"ui");_n_object_23299->_p_note=d::String(u"a block-letter 404 with a small ghost drifting beneath it");_n_object_23299->_p_cols=60.0;_n_object_23299->_p_rows=21.0;_n_object_23299->_p_fps=15.0;_n_object_23299->_p_options=([&](){auto _n_object_23301=std::make_shared<_n_Record_23225>();_n_object_23301->_p_code=d::String(u"404");_n_object_23301->_p_title=d::String(u"page not found");_n_object_23301->_p_message=d::String(u"the page you asked for has moved or never existed");return _n_object_23301;})();return _n_object_23299;})();}();
d::Dict<d::String,d::String> _n_FONT_23226=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_23303;_n_dictionary_23303.set(d::String(u"0"),d::String(u"###,#.#,#.#,#.#,###"));_n_dictionary_23303.set(d::String(u"1"),d::String(u"##.,.#.,.#.,.#.,###"));_n_dictionary_23303.set(d::String(u"2"),d::String(u"###,..#,###,#..,###"));_n_dictionary_23303.set(d::String(u"3"),d::String(u"###,..#,###,..#,###"));_n_dictionary_23303.set(d::String(u"4"),d::String(u"#.#,#.#,###,..#,..#"));_n_dictionary_23303.set(d::String(u"5"),d::String(u"###,#..,###,..#,###"));_n_dictionary_23303.set(d::String(u"6"),d::String(u"###,#..,###,#.#,###"));_n_dictionary_23303.set(d::String(u"7"),d::String(u"###,..#,..#,..#,..#"));_n_dictionary_23303.set(d::String(u"8"),d::String(u"###,#.#,###,#.#,###"));_n_dictionary_23303.set(d::String(u"9"),d::String(u"###,#.#,###,..#,###"));return _n_dictionary_23303;})();}();
d::Array<double,false> _n_RH_23227=[](){return d::Array<double,false>{2.0,1.0,2.0,1.0,2.0};}();
const double _n_DW_23228=[](){return 12.0;}();
const double _n_DH_23229=[](){return 8.0;}();
const double _n_GAP_23230=[](){return 4.0;}();
const double _n_TOP_23231=[](){return 1.0;}();
d::Array<d::String,false> _n_BODY_23232=[](){return d::Array<d::String,false>{d::String(u"..####.."),d::String(u".######."),d::String(u"########"),d::String(u"########"),d::String(u"########"),d::String(u"########"),d::String(u"########"),d::String(u"########"),d::String(u"########")};}();
d::Array<d::String,false> _n_HEMS_23233=[](){return d::Array<d::String,false>{d::String(u".##..##."),d::String(u"#..##..#")};}();
const double _n_GW_23234=[](){return 8.0;}();
d::Array<double,false> _n_EYES_23235=[](){return d::Array<double,false>{1.0,5.0};}();
const double _n_PERIOD_23236=[](){return 9.0;}();

struct Native_not_found final:ascii::Piece{
d::String _n_code_23237{};
d::String _n_title_23238{};
d::String _n_message_23239{};
double _n_cols_23240{};
double _n_rows_23241{};
d::Array<d::String,false> _n_base_23242{};
d::Array<uint8_t,true> _n_face_23243{};
d::Array<d::String,false> _n_digits_23244{};
double _n_width_23245{};
double _n_x0_23246{};
double _n_BAND_23249{};
d::Array<uint8_t,true> _n_px_23250{};
d::Array<d::String,false> _n_out_23251{};
std::function<d::String(double,std::shared_ptr<_n_Record_23294>)> _render;
bool _n_at_23247(double _a0,double _a1){double _n_r_23262=_a0;
double _n_c_23263=_a1;
return ([&]()->bool{auto _n_logical_23332=([&]()->bool{auto _n_logical_23333=([&]()->bool{auto _n_logical_23334=([&]()->bool{auto _n_logical_23335=(_n_r_23262>=0.0);return d::truth(_n_logical_23335)?(_n_c_23263>=0.0):_n_logical_23335;})();return d::truth(_n_logical_23334)?(_n_r_23262<this->_n_rows_23241):_n_logical_23334;})();return d::truth(_n_logical_23333)?(_n_c_23263<this->_n_cols_23240):_n_logical_23333;})();return d::truth(_n_logical_23332)?(d::at(this->_n_face_23243,((_n_r_23262*this->_n_cols_23240)+_n_c_23263))==1.0):_n_logical_23332;})();}

void _n_put_23248(double _a0,d::String _a1){double _n_r_23269=_a0;
d::String _n_s_23270=_a1;
{
(void)((_n_s_23270=d::slice(d::string(_n_s_23270),0.0,this->_n_cols_23240)));
double _n_c0_23271=std::floor(((this->_n_cols_23240-double(_n_s_23270.size()))/2.0));
{double _n_i_23272=0.0;
for(;d::truth((_n_i_23272<double(_n_s_23270.size())));(void)((_n_i_23272++))){d::check_cancel();(void)(([&](){auto&& _n_array_23336=this->_n_base_23242;auto _n_index_23337=(((_n_r_23269*this->_n_cols_23240)+_n_c0_23271)+_n_i_23272);auto _n_value_23338=d::at(_n_s_23270,_n_i_23272);d::put(_n_array_23336,_n_index_23337,_n_value_23338);return _n_value_23338;})());
}}

}
}

explicit Native_not_found(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_23304=d::decode<std::shared_ptr<_n_Record_23293>>(_options.data);
this->_n_code_23237=(d::present(_n_binding_23304->_p_code)?d::read(_n_binding_23304->_p_code):_n_meta_23223->_p_options->_p_code);
this->_n_title_23238=(d::present(_n_binding_23304->_p_title)?d::read(_n_binding_23304->_p_title):_n_meta_23223->_p_options->_p_title);
this->_n_message_23239=(d::present(_n_binding_23304->_p_message)?d::read(_n_binding_23304->_p_message):_n_meta_23223->_p_options->_p_message);
auto _n_binding_23305=_n_meta_23223;
this->_n_cols_23240=_n_binding_23305->_p_cols;
this->_n_rows_23241=_n_binding_23305->_p_rows;
this->_n_base_23242=d::Array<d::String,false>(size_t((this->_n_cols_23240*this->_n_rows_23241))).fill(d::String(u" "));
this->_n_face_23243=d::Array<uint8_t,true>(size_t((this->_n_cols_23240*this->_n_rows_23241)));
this->_n_digits_23244=d::split(d::slice(d::replace(d::string(([&]()->d::String{auto _n_logical_23306=this->_n_code_23237;return d::present(_n_logical_23306)?_n_logical_23306:d::String(u"");})()),d::Regex(u"[^0-9]",u"g"),d::String(u"")),0.0,3.0),d::String(u""));
if(d::truth((!d::truth(double(this->_n_digits_23244.size()))))){d::check_cancel();(void)((this->_n_digits_23244=d::Array<d::String,false>{d::String(u"4"),d::String(u"0"),d::String(u"4")}));
}
this->_n_width_23245=(((double(this->_n_digits_23244.size())*_n_DW_23228)+((double(this->_n_digits_23244.size())-1.0)*_n_GAP_23230))+1.0);
this->_n_x0_23246=std::floor(((this->_n_cols_23240-this->_n_width_23245)/2.0));
(void)(d::forEach(this->_n_digits_23244,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_d_23253=_a0;
double _n_i_23254=_a1;
{
d::Array<d::String,false> _n_rowsOf_23255=d::split(_n_FONT_23226.get(_n_d_23253),d::String(u","));
double _n_r_23256=_n_TOP_23231;
(void)(d::forEach(_n_rowsOf_23255,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_bits_23257=_a0;
double _n_fr_23258=_a1;
{
{double _n_k_23259=0.0;
for(;d::truth((_n_k_23259<d::at(_n_RH_23227,_n_fr_23258)));(void)(((_n_k_23259++),(_n_r_23256++)))){d::check_cancel();{double _n_fc_23260=0.0;
for(;d::truth((_n_fc_23260<3.0));(void)((_n_fc_23260++))){d::check_cancel();if(d::truth((d::at(_n_bits_23257,_n_fc_23260)==d::String(u"#")))){d::check_cancel();{double _n_c_23261=0.0;
for(;d::truth((_n_c_23261<4.0));(void)((_n_c_23261++))){d::check_cancel();(void)(([&](){auto&& _n_array_23307=this->_n_face_23243;auto _n_index_23308=(((((_n_r_23256*this->_n_cols_23240)+this->_n_x0_23246)+(_n_i_23254*(_n_DW_23228+_n_GAP_23230)))+(_n_fc_23260*4.0))+_n_c_23261);auto _n_value_23309=1.0;d::put(_n_array_23307,_n_index_23308,_n_value_23309);return _n_value_23309;})());
}}
}
}}
}}

}
}));

}
}));
{double _n_r_23264=0.0;
for(;d::truth((_n_r_23264<this->_n_rows_23241));(void)((_n_r_23264++))){d::check_cancel();{double _n_c_23265=0.0;
for(;d::truth((_n_c_23265<this->_n_cols_23240));(void)((_n_c_23265++))){d::check_cancel();if(d::truth(this->_n_at_23247(_n_r_23264,_n_c_23265))){d::check_cancel();(void)(([&](){auto&& _n_array_23310=this->_n_base_23242;auto _n_index_23311=((_n_r_23264*this->_n_cols_23240)+_n_c_23265);auto _n_value_23312=d::String(u"█");d::put(_n_array_23310,_n_index_23311,_n_value_23312);return _n_value_23312;})());
continue;
}
bool _n_L_23266=this->_n_at_23247(_n_r_23264,(_n_c_23265-1.0));
bool _n_U_23267=this->_n_at_23247((_n_r_23264-1.0),_n_c_23265);
bool _n_UL_23268=this->_n_at_23247((_n_r_23264-1.0),(_n_c_23265-1.0));
(void)(([&](){auto&& _n_array_23313=this->_n_base_23242;auto _n_index_23314=((_n_r_23264*this->_n_cols_23240)+_n_c_23265);auto _n_value_23315=((d::truth(_n_L_23266)&&d::truth(_n_U_23267))?d::String(u"╔"):(d::truth(_n_L_23266)?(d::truth(_n_UL_23268)?d::String(u"║"):d::String(u"╗")):(d::truth(_n_U_23267)?(d::truth(_n_UL_23268)?d::String(u"═"):d::String(u"╚")):(d::truth(_n_UL_23268)?d::String(u"╝"):d::String(u" ")))));d::put(_n_array_23313,_n_index_23314,_n_value_23315);return _n_value_23315;})());
}}
}}
(void)(this->_n_put_23248(((_n_TOP_23231+_n_DH_23229)+9.0),this->_n_title_23238));
(void)(this->_n_put_23248(((_n_TOP_23231+_n_DH_23229)+10.0),this->_n_message_23239));
this->_n_BAND_23249=((((_n_TOP_23231+_n_DH_23229)+2.0)*2.0)+1.0);
this->_n_px_23250=d::Array<uint8_t,true>(size_t(((this->_n_cols_23240*this->_n_rows_23241)*2.0)));
this->_n_out_23251=d::Array<d::String,false>(size_t((this->_n_cols_23240*this->_n_rows_23241)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_23294> _a1) mutable ->d::String{double _n_t_23273=_a0;
{
double _n_ph_23274=(((_n_t_23273/_n_PERIOD_23236)*ascii::PI)*2.0);
double _n_gx_23275=d::round((((this->_n_cols_23240/2.0)-(_n_GW_23234/2.0))+(18.0*std::sin(_n_ph_23274))));
double _n_gy_23276=(this->_n_BAND_23249+d::round(std::sin((((_n_t_23273/1.5)*ascii::PI)*2.0))));
double _n_look_23277=(d::truth((std::cos(_n_ph_23274)>=0.0))?1.0:0.0);
(void)(this->_n_px_23250.fill(0.0));
d::Array<d::String,false> _n_shape_23278=_n_BODY_23232.concat(d::at(_n_HEMS_23233,d::mod(std::floor((_n_t_23273*4.0)),2.0)));
(void)(d::forEach(_n_shape_23278,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_23279=_a0;
double _n_y_23280=_a1;
{
{double _n_x_23281=0.0;
for(;d::truth((_n_x_23281<_n_GW_23234));(void)((_n_x_23281++))){d::check_cancel();if(d::truth((d::at(_n_line_23279,_n_x_23281)==d::String(u"#")))){d::check_cancel();(void)(([&](){auto&& _n_array_23316=this->_n_px_23250;auto _n_index_23317=((((_n_gy_23276+_n_y_23280)*this->_n_cols_23240)+_n_gx_23275)+_n_x_23281);auto _n_value_23318=1.0;d::put(_n_array_23316,_n_index_23317,_n_value_23318);return _n_value_23318;})());
}
}}

}
}));
double _n_ey_23282=double(int32_t(d::u32(double(d::i32((_n_gy_23276+3.0))>>(d::u32(1.0)&31)))<<(d::u32(1.0)&31)));
for(auto &&_n_item_23319:_n_EYES_23235){d::check_cancel();double _n_ex_23283=_n_item_23319;
{
double _n_e_23284=(_n_gx_23275+_n_ex_23283);
{double _n_y_23285=0.0;
for(;d::truth((_n_y_23285<4.0));(void)((_n_y_23285++))){d::check_cancel();(void)(([&](){auto&& _n_array_23320=this->_n_px_23250;auto _n_index_23321=(((_n_ey_23282+_n_y_23285)*this->_n_cols_23240)+_n_e_23284);auto _n_value_23322=([&](){auto&& _n_array_23323=this->_n_px_23250;auto _n_index_23324=((((_n_ey_23282+_n_y_23285)*this->_n_cols_23240)+_n_e_23284)+1.0);auto _n_value_23325=0.0;d::put(_n_array_23323,_n_index_23324,_n_value_23325);return _n_value_23325;})();d::put(_n_array_23320,_n_index_23321,_n_value_23322);return _n_value_23322;})());
}}
(void)(([&](){auto&& _n_array_23326=this->_n_px_23250;auto _n_index_23327=((((_n_ey_23282+3.0)*this->_n_cols_23240)+_n_e_23284)+_n_look_23277);auto _n_value_23328=1.0;d::put(_n_array_23326,_n_index_23327,_n_value_23328);return _n_value_23328;})());

}
}
{double _n_k_23286=0.0;
for(;d::truth((_n_k_23286<(this->_n_cols_23240*this->_n_rows_23241)));(void)((_n_k_23286++))){d::check_cancel();double _n_r_23287=double(d::i32((_n_k_23286/this->_n_cols_23240))|d::i32(0.0));
double _n_c_23288=d::mod(_n_k_23286,this->_n_cols_23240);
double _n_a_23289=d::at(this->_n_px_23250,(((2.0*_n_r_23287)*this->_n_cols_23240)+_n_c_23288));
double _n_b_23290=d::at(this->_n_px_23250,((((2.0*_n_r_23287)+1.0)*this->_n_cols_23240)+_n_c_23288));
(void)(([&](){auto&& _n_array_23329=this->_n_out_23251;auto _n_index_23330=_n_k_23286;auto _n_value_23331=((d::truth(_n_a_23289)&&d::truth(_n_b_23290))?d::String(u"█"):(d::truth(_n_a_23289)?d::String(u"▀"):(d::truth(_n_b_23290)?d::String(u"▄"):d::at(this->_n_base_23242,_n_k_23286))));d::put(_n_array_23329,_n_index_23330,_n_value_23331);return _n_value_23331;})());
}}
d::Array<d::String,false> _n_lines_23291=d::Array<d::String,false>{};
{double _n_r_23292=0.0;
for(;d::truth((_n_r_23292<this->_n_rows_23241));(void)((_n_r_23292++))){d::check_cancel();(void)(_n_lines_23291.push(d::join(this->_n_out_23251.slice((_n_r_23292*this->_n_cols_23240),((_n_r_23292+1.0)*this->_n_cols_23240)),d::String(u""))));
}}
return d::join(_n_lines_23291,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("not-found").cols)*ascii::catalog_meta("not-found").rows);auto _env=std::make_shared<_n_Record_23294>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &not_found_meta(){return catalog_meta("not-found");}
std::unique_ptr<Piece> make_not_found(const AsciiPieceOptions &o){return std::make_unique<Native_not_found>(o);}
}
