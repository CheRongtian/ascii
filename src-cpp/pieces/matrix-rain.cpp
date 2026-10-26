// Direct, statically typed C++ from src/pieces/matrix-rain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_20901;
struct _n_Record_20908;
struct _n_Record_20915;
struct _n_Record_20953;
struct _n_Record_20901{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_20901> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20901>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_20908{
d::Array<double,false> _p_speed{};
d::Array<double,false> _p_len{};
d::Array<double,false> _p_gap{};
static std::shared_ptr<_n_Record_20908> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20908>();out->_p_speed=d::decode<d::Array<double,false>>(j["speed"]);out->_p_len=d::decode<d::Array<double,false>>(j["len"]);out->_p_gap=d::decode<d::Array<double,false>>(j["gap"]);return out;}
};
struct _n_Record_20915{
std::shared_ptr<_n_Record_20908> _p_kind{};
double _p_speed{};
double _p_phase{};
double _p_k{};
double _p_from{};
static std::shared_ptr<_n_Record_20915> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20915>();out->_p_kind=d::decode<std::shared_ptr<_n_Record_20908>>(j["kind"]);out->_p_speed=d::decode<double>(j["speed"]);out->_p_phase=d::decode<double>(j["phase"]);out->_p_k=d::decode<double>(j["k"]);out->_p_from=d::decode<double>(j["from"]);return out;}
};
struct _n_Record_20953{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20953> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20953>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_20911(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_20901> _n_meta_20900=[](){return ([&](){auto _n_object_20956=std::make_shared<_n_Record_20901>();_n_object_20956->_p_name=d::String(u"matrix rain");_n_object_20956->_p_category=d::String(u"effects");_n_object_20956->_p_note=d::String(u"streams of glyphs falling, heavy at the head, thin behind");_n_object_20956->_p_cols=63.0;_n_object_20956->_p_rows=24.0;_n_object_20956->_p_fps=20.0;return _n_object_20956;})();}();
const d::String _n_HEAD_20902=[](){return d::String(u"@#%&$");}();
const d::String _n_COLLAR_20903=[](){return d::String(u"acdeghkmnorsuvxz");}();
const d::String _n_BODY_20904=[](){return d::String(u"0123456789ABCDEFHKMNPRSTXZ");}();
d::Array<d::String,false> _n_THIN_20905=[](){return d::Array<d::String,false>{d::String(u"acdeghkmnorsuvxz=+*<>"),d::String(u":;!|il^~"),d::String(u".,'`")};}();
d::Array<d::String,false> _n_FAR_SETS_20906=[](){return d::Array<d::String,false>{d::String(u"=+*<>|"),d::String(u":;!|il"),d::String(u":;!|il^~"),d::String(u".,'`")};}();
std::shared_ptr<_n_Record_20908> _n_NEAR_20907=[](){return ([&](){auto _n_object_20958=std::make_shared<_n_Record_20908>();_n_object_20958->_p_speed=d::Array<double,false>{9.0,9.0};_n_object_20958->_p_len=d::Array<double,false>{12.0,10.0};_n_object_20958->_p_gap=d::Array<double,false>{0.15,0.45};return _n_object_20958;})();}();
std::shared_ptr<_n_Record_20908> _n_FAR_20909=[](){return ([&](){auto _n_object_20960=std::make_shared<_n_Record_20908>();_n_object_20960->_p_speed=d::Array<double,false>{4.0,2.5};_n_object_20960->_p_len=d::Array<double,false>{10.0,6.0};_n_object_20960->_p_gap=d::Array<double,false>{1.1,1.4};return _n_object_20960;})();}();
double _n_hash_20911(double _a0,double _a1,double _a2){double _n_a_20919=_a0;
double _n_b_20920=_a1;
double _n_c_20921=_a2;
{
double _n_h_20922=([&](){auto _n_left_20961=([&](){auto _n_left_20963=d::imul(_n_a_20919,374761393.0);auto _n_right_20964=d::imul(_n_b_20920,668265263.0);return (_n_left_20963+_n_right_20964);})();auto _n_right_20962=d::imul(_n_c_20921,2246822519.0);return (_n_left_20961+_n_right_20962);})();
(void)((_n_h_20922=d::imul(double(d::i32(_n_h_20922)^d::i32(double(d::u32(_n_h_20922)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_20922)^d::i32(double(d::u32(_n_h_20922)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_matrix_rain final:ascii::Piece{
double _n_cols_20912{};
double _n_rows_20913{};
d::Array<std::shared_ptr<_n_Record_20915>,false> _n_lanes_20914{};
d::Array<d::String,false> _n_grid_20918{};
std::function<d::String(double,std::shared_ptr<_n_Record_20953>)> _render;
double _n_span_20916(double _a0,double _a1,std::shared_ptr<_n_Record_20908> _a2){double _n_c_20928=_a0;
double _n_k_20929=_a1;
std::shared_ptr<_n_Record_20908> _n_kind_20930=_a2;
return ([&](){auto _n_left_20974=(this->_n_rows_20913+this->_n_length_20917(_n_c_20928,_n_k_20929,_n_kind_20930));auto _n_right_20975=(this->_n_rows_20913*(d::at(_n_kind_20930->_p_gap,0.0)+(_n_hash_20911(_n_c_20928,_n_k_20929,2.0)*d::at(_n_kind_20930->_p_gap,1.0))));return (_n_left_20974+_n_right_20975);})();}

double _n_length_20917(double _a0,double _a1,std::shared_ptr<_n_Record_20908> _a2){double _n_c_20931=_a0;
double _n_k_20932=_a1;
std::shared_ptr<_n_Record_20908> _n_kind_20933=_a2;
return (d::at(_n_kind_20933->_p_len,0.0)+std::floor((_n_hash_20911(_n_c_20931,_n_k_20932,4.0)*d::at(_n_kind_20933->_p_len,1.0))));}

explicit Native_matrix_rain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_20965=_n_meta_20900;
this->_n_cols_20912=_n_binding_20965->_p_cols;
this->_n_rows_20913=_n_binding_20965->_p_rows;
this->_n_lanes_20914=d::Array<std::shared_ptr<_n_Record_20915>,false>(d::from(this->_n_cols_20912,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_20915>{double _n_c_20924=_a1;
{
std::shared_ptr<_n_Record_20908> _n_kind_20925=(d::truth(d::mod(_n_c_20924,2.0))?_n_FAR_20909:_n_NEAR_20907);
double _n_speed_20926=(d::at(_n_kind_20925->_p_speed,0.0)+(_n_hash_20911(_n_c_20924,1.0,0.0)*d::at(_n_kind_20925->_p_speed,1.0)));
double _n_cycle_20927=(((this->_n_rows_20913*((1.0+d::at(_n_kind_20925->_p_gap,0.0))+(d::at(_n_kind_20925->_p_gap,1.0)/2.0)))+d::at(_n_kind_20925->_p_len,0.0))+(d::at(_n_kind_20925->_p_len,1.0)/2.0));
return ([&](){auto _n_object_20967=std::make_shared<_n_Record_20915>();_n_object_20967->_p_kind=_n_kind_20925;_n_object_20967->_p_speed=_n_speed_20926;_n_object_20967->_p_phase=(d::mod(((_n_c_20924*0.618034)+(_n_hash_20911(_n_c_20924,3.0,0.0)*0.2)),1.0)*_n_cycle_20927);_n_object_20967->_p_k=0.0;_n_object_20967->_p_from=0.0;return _n_object_20967;})();

}
}));
this->_n_grid_20918=d::Array<d::String,false>(size_t((this->_n_cols_20912*this->_n_rows_20913)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_20953> _a1) mutable ->d::String{double _n_t_20934=_a0;
{
(void)(this->_n_grid_20918.fill(d::String(u" ")));
double _n_tick_20935=std::floor((_n_t_20934*20.0));
{double _n_c_20936=0.0;
for(;d::truth((_n_c_20936<this->_n_cols_20912));(void)((_n_c_20936++))){d::check_cancel();std::shared_ptr<_n_Record_20915> _n_lane_20937=d::at(this->_n_lanes_20914,_n_c_20936);
auto _n_binding_20968=_n_lane_20937;
std::shared_ptr<_n_Record_20908> _n_kind_20938=_n_binding_20968->_p_kind;
double _n_speed_20939=_n_binding_20968->_p_speed;
double _n_phase_20940=_n_binding_20968->_p_phase;
double _n_u_20941=(_n_phase_20940+(_n_t_20934*_n_speed_20939));
if(d::truth((_n_u_20941<_n_lane_20937->_p_from))){d::check_cancel();(void)(((_n_lane_20937->_p_k=0.0),(_n_lane_20937->_p_from=0.0)));
}
{double _n_s_20942{};
for(;d::truth(((_n_u_20941-_n_lane_20937->_p_from)>=(_n_s_20942=this->_n_span_20916(_n_c_20936,_n_lane_20937->_p_k,_n_kind_20938))));(void)((_n_lane_20937->_p_k++))){d::check_cancel();(void)((_n_lane_20937->_p_from=(_n_lane_20937->_p_from+_n_s_20942)));
}}
double _n_k_20943=_n_lane_20937->_p_k;
double _n_head_20944=std::floor((_n_u_20941-_n_lane_20937->_p_from));
double _n_len_20945=this->_n_length_20917(_n_c_20936,_n_k_20943,_n_kind_20938);
{double _n_d_20946=0.0;
for(;d::truth((_n_d_20946<_n_len_20945));(void)((_n_d_20946++))){d::check_cancel();double _n_r_20947=(_n_head_20944-_n_d_20946);
if(d::truth((_n_r_20947<0.0))){d::check_cancel();break;
}
if(d::truth((_n_r_20947>=this->_n_rows_20913))){d::check_cancel();continue;
}
double _n_f_20948=(_n_d_20946/_n_len_20945);
d::String _n_glyphs_20949{};
if(d::truth((_n_kind_20938==_n_NEAR_20907))){d::check_cancel();if((d::truth((_n_f_20948>0.5))&&d::truth((_n_hash_20911(_n_c_20936,_n_r_20947,((_n_k_20943*31.0)+7.0))<(std::pow(((_n_f_20948-0.5)/0.5),2.0)*0.8))))){d::check_cancel();continue;
}
(void)((_n_glyphs_20949=(d::truth((_n_d_20946==0.0))?_n_HEAD_20902:(d::truth((_n_d_20946<3.0))?_n_COLLAR_20903:(d::truth((_n_f_20948<0.5))?_n_BODY_20904:d::at(_n_THIN_20905,(d::truth((_n_f_20948<0.7))?0.0:(d::truth((_n_f_20948<0.86))?1.0:2.0))))))));
}else {d::check_cancel();if((d::truth((_n_f_20948>0.7))&&d::truth((_n_hash_20911(_n_c_20936,_n_r_20947,((_n_k_20943*31.0)+7.0))<((_n_f_20948-0.7)*2.0))))){d::check_cancel();continue;
}
(void)((_n_glyphs_20949=d::at(_n_FAR_SETS_20906,(d::truth((_n_d_20946==0.0))?0.0:(d::truth((_n_f_20948<0.45))?1.0:(d::truth((_n_f_20948<0.8))?2.0:3.0))))));
}
double _n_when_20950=(d::truth((_n_d_20946==0.0))?_n_tick_20935:std::floor(([&](){auto _n_left_20969=(_n_t_20934+(_n_hash_20911(_n_c_20936,_n_r_20947,5.0)*9.0));auto _n_right_20970=(0.4+(_n_hash_20911(_n_c_20936,_n_r_20947,6.0)*1.6));return (_n_left_20969*_n_right_20970);})()));
(void)(([&](){auto&& _n_array_20971=this->_n_grid_20918;auto _n_index_20972=(_n_c_20936+(_n_r_20947*this->_n_cols_20912));auto _n_value_20973=d::at(_n_glyphs_20949,std::floor((_n_hash_20911(_n_c_20936,_n_r_20947,_n_when_20950)*double(_n_glyphs_20949.size()))));d::put(_n_array_20971,_n_index_20972,_n_value_20973);return _n_value_20973;})());
}}
}}
d::Array<d::String,false> _n_lines_20951=d::Array<d::String,false>{};
{double _n_r_20952=0.0;
for(;d::truth((_n_r_20952<this->_n_rows_20913));(void)((_n_r_20952++))){d::check_cancel();(void)(_n_lines_20951.push(d::join(this->_n_grid_20918.slice((_n_r_20952*this->_n_cols_20912),((_n_r_20952+1.0)*this->_n_cols_20912)),d::String(u""))));
}}
return d::join(_n_lines_20951,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("matrix-rain").cols)*ascii::catalog_meta("matrix-rain").rows);auto _env=std::make_shared<_n_Record_20953>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &matrix_rain_meta(){return catalog_meta("matrix-rain");}
std::unique_ptr<Piece> make_matrix_rain(const AsciiPieceOptions &o){return std::make_unique<Native_matrix_rain>(o);}
}
