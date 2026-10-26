// Direct, statically typed C++ from src/pieces/lava-lamp.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_18787;
struct _n_Record_18826;
struct _n_Record_18877;
struct _n_Record_18883;
struct _n_Record_18787{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_18787> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18787>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_18826{
double _p_x{};
double _p_y{};
double _p_r2{};
double _p_sx{};
double _p_sy{};
static std::shared_ptr<_n_Record_18826> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18826>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_r2=d::decode<double>(j["r2"]);out->_p_sx=d::decode<double>(j["sx"]);out->_p_sy=d::decode<double>(j["sy"]);return out;}
};
struct _n_Record_18877{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_18877> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18877>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_18883{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_258f{};
d::String _p_symbol_2595{};
d::String _p_symbol_2502{};
d::String _p__{};
static std::shared_ptr<_n_Record_18883> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18883>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_258f=d::decode<d::String>(j["▏"]);out->_p_symbol_2595=d::decode<d::String>(j["▕"]);out->_p_symbol_2502=d::decode<d::String>(j["│"]);out->_p__=d::decode<d::String>(j["_"]);return out;}
};
double _n_half_18797(double _a0);
double _n_fall_18798(double _a0);
double _n_smooth_18799(double _a0);
std::shared_ptr<_n_Record_18787> _n_meta_18786=[](){return ([&](){auto _n_object_18880=std::make_shared<_n_Record_18787>();_n_object_18880->_p_name=d::String(u"lava lamp");_n_object_18880->_p_category=d::String(u"objects");_n_object_18880->_p_note=d::String(u"wax blobs rising, merging and sinking in a lit glass");_n_object_18880->_p_cols=30.0;_n_object_18880->_p_rows=27.0;_n_object_18880->_p_fps=15.0;return _n_object_18880;})();}();
const d::String _n_RAMP_18788=[](){return d::String(u".:-=+*#%@");}();
const double _n_CW_18789=[](){return 0.6;}();
const double _n_CH_18790=[](){return 1.2;}();
const double _n_T0_18791=[](){return 9.0;}();
const double _n_THRESH_18792=[](){return 0.3;}();
const double _n_TOP_18793=[](){return 8.6;}();
const double _n_FLOOR_18794=[](){return 24.4;}();
d::Array<std::array<double,5>,false> _n_BLOBS_18795=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{24.0,0.42,(-d::number(0.5)),0.7,3.0},std::array<double,5>{27.0,0.08,0.6,0.6,2.7},std::array<double,5>{31.0,0.74,0.1,0.8,3.3}};}();
d::Array<double,false> _n_GLASS_18796=[](){return d::Array<double,false>{4.0,21.0};}();
double _n_half_18797(double _a0){double _n_r_18809=_a0;
return (d::truth((_n_r_18809<1.0))?1.9:(d::truth((_n_r_18809<4.0))?(0.9+_n_r_18809):(d::truth((_n_r_18809<20.0))?(4.1+(0.26*(_n_r_18809-4.0))):(d::truth((_n_r_18809<21.0))?7.6:(6.8+(_n_r_18809-21.0))))));}

double _n_fall_18798(double _a0){double _n_q_18810=_a0;
return (d::truth((_n_q_18810<1.0))?((1.0-_n_q_18810)*(1.0-_n_q_18810)):0.0);}

double _n_smooth_18799(double _a0){double _n_e_18811=_a0;
return (d::truth((_n_e_18811<=0.0))?0.0:(d::truth((_n_e_18811>=1.0))?1.0:((_n_e_18811*_n_e_18811)*(3.0-(2.0*_n_e_18811)))));}

struct Native_lava_lamp final:ascii::Piece{
double _n_cols_18800{};
double _n_rows_18801{};
double _n_mid_18802{};
double _n_m_18803{};
double _n_ly_18804{};
double _n_lz_18805{};
d::Array<d::Array<d::String,false>,false> _n_shell_18806{};
d::Dict<d::String,d::String> _n_flip_18807{};
std::function<d::String(double,std::shared_ptr<_n_Record_18877>)> _render;
double _n_room_18808(double _a0){double _n_r_18821=_a0;
return ((_n_half_18797(([&](){auto _n_argument_18938=(d::at(_n_GLASS_18796,1.0)-1.0);auto _n_argument_18939=d::maximum({d::at(_n_GLASS_18796,0.0),_n_r_18821});return d::minimum({_n_argument_18938,_n_argument_18939});})())-1.1)*_n_CW_18789);}

explicit Native_lava_lamp(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_18881=_n_meta_18786;
this->_n_cols_18800=_n_binding_18881->_p_cols;
this->_n_rows_18801=_n_binding_18881->_p_rows;
this->_n_mid_18802=(this->_n_cols_18800/2.0);
this->_n_m_18803=d::hypot(std::initializer_list<double>{0.0,0.5,0.85});
auto _n_binding_18882=std::array<double,2>{(0.5/this->_n_m_18803),(0.85/this->_n_m_18803)};
this->_n_ly_18804=d::at(_n_binding_18882,0.0);
this->_n_lz_18805=d::at(_n_binding_18882,1.0);
this->_n_shell_18806=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_18801,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_18800)).fill(d::String(u" "));}));
this->_n_flip_18807=([&](){d::Dict<d::String,d::String> _n_dictionary_18884;_n_dictionary_18884.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_18884.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_18884.set(d::String(u"▏"),d::String(u"▕"));_n_dictionary_18884.set(d::String(u"▕"),d::String(u"▏"));_n_dictionary_18884.set(d::String(u"│"),d::String(u"│"));_n_dictionary_18884.set(d::String(u"_"),d::String(u"_"));return _n_dictionary_18884;})();
{double _n_r_18812=0.0;
for(;d::truth((_n_r_18812<this->_n_rows_18801));(void)((_n_r_18812++))){d::check_cancel();double _n_x_18813=(this->_n_mid_18802-_n_half_18797(_n_r_18812));
double _n_lean_18814=([&](){auto _n_left_18885=_n_half_18797((_n_r_18812+0.5));auto _n_right_18886=_n_half_18797((_n_r_18812-0.5));return (_n_left_18885-_n_right_18886);})();
double _n_c_18815=std::floor(_n_x_18813);
d::String _n_g_18816{};
if(d::truth((_n_r_18812==0.0))){d::check_cancel();(void)((_n_g_18816=d::String(u"_")));
}else {d::check_cancel();if((d::truth((_n_r_18812<d::at(_n_GLASS_18796,0.0)))||d::truth((_n_r_18812>=(d::at(_n_GLASS_18796,1.0)-1.0))))){d::check_cancel();(void)((_n_g_18816=((d::truth((_n_lean_18814>0.0))||d::truth((_n_r_18812<d::at(_n_GLASS_18796,0.0))))?d::String(u"/"):d::String(u"\\"))));
}else {d::check_cancel();double _n_f_18817=(_n_x_18813-_n_c_18815);
(void)((_n_g_18816=(d::truth((_n_f_18817<0.34))?d::String(u"▏"):(d::truth((_n_f_18817<0.67))?d::String(u"│"):d::String(u"▕")))));
}
}
if(d::truth((_n_r_18812==0.0))){d::check_cancel();{double _n_k_18818=_n_c_18815;
for(;d::truth((_n_k_18818<(this->_n_cols_18800-_n_c_18815)));(void)((_n_k_18818++))){d::check_cancel();(void)(([&](){auto&& _n_array_18887=d::at(this->_n_shell_18806,_n_r_18812);auto _n_index_18888=_n_k_18818;auto _n_value_18889=d::String(u"_");d::put(_n_array_18887,_n_index_18888,_n_value_18889);return _n_value_18889;})());
}}
}
(void)(([&](){auto&& _n_array_18890=d::at(this->_n_shell_18806,_n_r_18812);auto _n_index_18891=_n_c_18815;auto _n_value_18892=_n_g_18816;d::put(_n_array_18890,_n_index_18891,_n_value_18892);return _n_value_18892;})());
(void)(([&](){auto&& _n_array_18893=d::at(this->_n_shell_18806,_n_r_18812);auto _n_index_18894=((this->_n_cols_18800-1.0)-_n_c_18815);auto _n_value_18895=this->_n_flip_18807.get(_n_g_18816);d::put(_n_array_18893,_n_index_18894,_n_value_18895);return _n_value_18895;})());
if(((d::truth((_n_r_18812==3.0))||d::truth((_n_r_18812==21.0)))||d::truth((_n_r_18812==(this->_n_rows_18801-1.0))))){d::check_cancel();{double _n_k_18819=(_n_c_18815+1.0);
for(;d::truth((_n_k_18819<((this->_n_cols_18800-1.0)-_n_c_18815)));(void)((_n_k_18819++))){d::check_cancel();(void)(([&](){auto&& _n_array_18896=d::at(this->_n_shell_18806,_n_r_18812);auto _n_index_18897=_n_k_18819;auto _n_value_18898=d::String(u"_");d::put(_n_array_18896,_n_index_18897,_n_value_18898);return _n_value_18898;})());
}}
}
if((d::truth((_n_r_18812>=d::at(_n_GLASS_18796,0.0)))&&d::truth((_n_r_18812<d::at(_n_GLASS_18796,1.0))))){d::check_cancel();{double _n_k_18820=(_n_c_18815+1.0);
for(;d::truth((_n_k_18820<((this->_n_cols_18800-1.0)-_n_c_18815)));(void)((_n_k_18820++))){d::check_cancel();(void)(([&](){auto&& _n_array_18899=d::at(this->_n_shell_18806,_n_r_18812);auto _n_index_18900=_n_k_18820;auto _n_value_18901=d::String(u"~");d::put(_n_array_18899,_n_index_18900,_n_value_18901);return _n_value_18901;})());
}}
}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_18877> _a1) mutable ->d::String{double _n_t_18822=_a0;
auto _n_binding_18904=(d::present(_a1)?_a1:([&](){auto _n_object_18903=std::make_shared<_n_Record_18877>();return _n_object_18903;})());
bool _n_paper_18823=(d::present(_n_binding_18904->_p_paper)?d::read(_n_binding_18904->_p_paper):false);
{
double _n_tt_18824=(_n_T0_18791+_n_t_18822);
d::Array<std::shared_ptr<_n_Record_18826>,false> _n_balls_18825=d::map(_n_BLOBS_18795,[&]( std::array<double,5> _a0) mutable ->std::shared_ptr<_n_Record_18826>{auto _n_binding_18905=_a0;
double _n_period_18827=d::at(_n_binding_18905,0.0);
double _n_phase_18828=d::at(_n_binding_18905,1.0);
double _n_side_18829=d::at(_n_binding_18905,2.0);
double _n_sway_18830=d::at(_n_binding_18905,3.0);
double _n_rad_18831=d::at(_n_binding_18905,4.0);
{
double _n_a_18832=((2.0*ascii::PI)*((_n_tt_18824/_n_period_18827)+_n_phase_18828));
double _n_y_18833=(_n_TOP_18793+(((_n_FLOOR_18794-_n_TOP_18793)*(1.0+std::cos(_n_a_18832)))/2.0));
double _n_stretch_18834=(1.0+(0.3*std::fabs(std::sin(_n_a_18832))));
double _n_sx_18835=_n_stretch_18834;
double _n_sy_18836=(1.0/(_n_stretch_18834*_n_stretch_18834));
double _n_top_18837=std::floor(((_n_y_18833-((0.67*_n_rad_18831)/std::sqrt(_n_sy_18836)))/_n_CH_18790));
double _n_fit_18838=this->_n_room_18808(_n_top_18837);
double _n_r_18839=([&](){auto _n_argument_18906=_n_rad_18831;auto _n_argument_18907=((_n_fit_18838*std::sqrt(_n_sx_18835))/0.85);return d::minimum({_n_argument_18906,_n_argument_18907});})();
double _n_reach_18840=((0.8*_n_r_18839)/std::sqrt(_n_sx_18835));
double _n_x_18841=(_n_side_18829+(_n_sway_18830*std::sin(((_n_a_18832*0.5)+(_n_phase_18828*9.0)))));
return ([&](){auto _n_object_18909=std::make_shared<_n_Record_18826>();_n_object_18909->_p_x=([&](){auto _n_argument_18910=(_n_reach_18840-_n_fit_18838);auto _n_argument_18911=d::minimum({(_n_fit_18838-_n_reach_18840),_n_x_18841});return d::maximum({_n_argument_18910,_n_argument_18911});})();_n_object_18909->_p_y=_n_y_18833;_n_object_18909->_p_r2=(_n_r_18839*_n_r_18839);_n_object_18909->_p_sx=_n_sx_18835;_n_object_18909->_p_sy=_n_sy_18836;return _n_object_18909;})();

}
});
{double _n_j_18842=(-d::number(1.0));
for(;d::truth((_n_j_18842<=1.0));(void)((_n_j_18842++))){d::check_cancel();double _n_x_18843=((_n_j_18842*2.5)+(0.35*std::sin(((_n_tt_18824*0.31)+(_n_j_18842*2.1)))));
(void)(_n_balls_18825.push(([&](){auto _n_object_18913=std::make_shared<_n_Record_18826>();_n_object_18913->_p_x=_n_x_18843;_n_object_18913->_p_y=((_n_FLOOR_18794+0.6)+(0.3*std::sin(((_n_tt_18824*0.43)+(_n_j_18842*1.3)))));_n_object_18913->_p_r2=(2.6*2.6);_n_object_18913->_p_sx=0.3;_n_object_18913->_p_sy=1.0;return _n_object_18913;})()));
}}
auto _n_field_18844=[&]( double _a0,double _a1) mutable ->double{double _n_x_18845=_a0;
double _n_y_18846=_a1;
{
double _n_f_18847=0.0;
for(auto &&_n_item_18914:_n_balls_18825){d::check_cancel();std::shared_ptr<_n_Record_18826> _n_b_18848=_n_item_18914;
{
double _n_dx_18849=(_n_x_18845-_n_b_18848->_p_x);
double _n_dy_18850=(_n_y_18846-_n_b_18848->_p_y);
(void)((_n_f_18847=(_n_f_18847+_n_fall_18798(((((_n_dx_18849*_n_dx_18849)*_n_b_18848->_p_sx)+((_n_dy_18850*_n_dy_18850)*_n_b_18848->_p_sy))/_n_b_18848->_p_r2)))));

}
}
double _n_edge_18851=([&](){auto _n_argument_18915=1.0;auto _n_argument_18916=([&](){auto _n_left_18917=std::fabs(_n_x_18845);auto _n_right_18918=this->_n_room_18808((d::at(_n_GLASS_18796,1.0)-1.0));return (_n_left_18917/_n_right_18918);})();return d::minimum({_n_argument_18915,_n_argument_18916});})();
return (_n_f_18847+(0.55*_n_smooth_18799(((((_n_y_18846-_n_FLOOR_18794)+0.9)+(2.0*std::pow(_n_edge_18851,4.0)))/1.1))));

}
};
d::Array<double,true> _n_F_18852=d::Array<double,true>(size_t((this->_n_rows_18801*this->_n_cols_18800)));
{double _n_r_18853=d::at(_n_GLASS_18796,0.0);
for(;d::truth((_n_r_18853<d::at(_n_GLASS_18796,1.0)));(void)((_n_r_18853++))){d::check_cancel();{double _n_c_18854=0.0;
for(;d::truth((_n_c_18854<this->_n_cols_18800));(void)((_n_c_18854++))){d::check_cancel();if(d::truth((d::at(d::at(this->_n_shell_18806,_n_r_18853),_n_c_18854)==d::String(u"~")))){d::check_cancel();(void)(([&](){auto&& _n_array_18919=_n_F_18852;auto _n_index_18920=((_n_r_18853*this->_n_cols_18800)+_n_c_18854);auto _n_value_18921=_n_field_18844((((_n_c_18854+0.5)-this->_n_mid_18802)*_n_CW_18789),((_n_r_18853+0.5)*_n_CH_18790));d::put(_n_array_18919,_n_index_18920,_n_value_18921);return _n_value_18921;})());
}
}}
}}
auto _n_wax_18855=[&]( double _a0,double _a1) mutable ->bool{double _n_r_18856=_a0;
double _n_c_18857=_a1;
return ([&]()->bool{auto _n_logical_18922=(d::at(d::at(this->_n_shell_18806,_n_r_18856),_n_c_18857)!=d::String(u"~"));return d::truth(_n_logical_18922)?_n_logical_18922:(d::at(_n_F_18852,((_n_r_18856*this->_n_cols_18800)+_n_c_18857))>=_n_THRESH_18792);})();};
d::Array<d::String,false> _n_lines_18858=d::Array<d::String,false>{};
{double _n_r_18859=0.0;
for(;d::truth((_n_r_18859<this->_n_rows_18801));(void)((_n_r_18859++))){d::check_cancel();d::Array<d::String,false> _n_row_18860=d::at(this->_n_shell_18806,_n_r_18859).slice();
{double _n_c_18861=0.0;
for(;d::truth((_n_c_18861<this->_n_cols_18800));(void)((_n_c_18861++))){d::check_cancel();if(d::truth((d::at(_n_row_18860,_n_c_18861)!=d::String(u"~")))){d::check_cancel();continue;
}
double _n_x_18862=(((_n_c_18861+0.5)-this->_n_mid_18802)*_n_CW_18789);
double _n_y_18863=((_n_r_18859+0.5)*_n_CH_18790);
double _n_f_18864=d::at(_n_F_18852,((_n_r_18859*this->_n_cols_18800)+_n_c_18861));
if(d::truth((_n_f_18864<_n_THRESH_18792))){d::check_cancel();(void)(([&](){auto&& _n_array_18923=_n_row_18860;auto _n_index_18924=_n_c_18861;auto _n_value_18925=d::String(u" ");d::put(_n_array_18923,_n_index_18924,_n_value_18925);return _n_value_18925;})());
continue;
}
double _n_gx_18865=(([&](){auto _n_left_18926=_n_field_18844((_n_x_18862+0.3),_n_y_18863);auto _n_right_18927=_n_field_18844((_n_x_18862-0.3),_n_y_18863);return (_n_left_18926-_n_right_18927);})()/0.6);
double _n_gy_18866=(([&](){auto _n_left_18928=_n_field_18844(_n_x_18862,(_n_y_18863+0.3));auto _n_right_18929=_n_field_18844(_n_x_18862,(_n_y_18863-0.3));return (_n_left_18928-_n_right_18929);})()/0.6);
double _n_k_18867=(0.8/std::sqrt(((_n_f_18864-_n_THRESH_18792)+0.04)));
double _n_nx_18868=((-d::number(_n_gx_18865))*_n_k_18867);
double _n_ny_18869=((-d::number(_n_gy_18866))*_n_k_18867);
double _n_lit_18870=([&](){auto _n_argument_18930=0.0;auto _n_argument_18931=(((_n_ny_18869*this->_n_ly_18804)+this->_n_lz_18805)/d::hypot(std::initializer_list<double>{_n_nx_18868,_n_ny_18869,1.0}));return d::maximum({_n_argument_18930,_n_argument_18931});})();
double _n_warm_18871=_n_smooth_18799(((_n_y_18863-_n_TOP_18793)/(_n_FLOOR_18794-_n_TOP_18793)));
bool _n_up_18872=(!d::truth(_n_wax_18855((_n_r_18859-1.0),_n_c_18861)));
bool _n_dn_18873=(!d::truth(_n_wax_18855((_n_r_18859+1.0),_n_c_18861)));
bool _n_lf_18874=(!d::truth(_n_wax_18855(_n_r_18859,(_n_c_18861-1.0))));
bool _n_rt_18875=(!d::truth(_n_wax_18855(_n_r_18859,(_n_c_18861+1.0))));
if((((d::truth(_n_up_18872)||d::truth(_n_dn_18873))||d::truth(_n_lf_18874))||d::truth(_n_rt_18875))){d::check_cancel();(void)(([&](){auto&& _n_array_18932=_n_row_18860;auto _n_index_18933=_n_c_18861;auto _n_value_18934=((d::truth(_n_up_18872)&&d::truth(_n_dn_18873))?(d::truth(_n_lf_18874)?d::String(u"("):(d::truth(_n_rt_18875)?d::String(u")"):d::String(u"-"))):(d::truth(_n_up_18872)?((d::truth(_n_lf_18874)||d::truth(_n_rt_18875))?d::String(u"."):d::String(u"-")):(d::truth(_n_dn_18873)?((d::truth(_n_lf_18874)||d::truth(_n_rt_18875))?d::String(u"'"):d::String(u"-")):((d::truth(_n_lf_18874)&&d::truth(_n_rt_18875))?d::String(u"|"):(d::truth(_n_lf_18874)?d::String(u"("):d::String(u")"))))));d::put(_n_array_18932,_n_index_18933,_n_value_18934);return _n_value_18934;})());
continue;
}
double _n_i_18876=(1.0+d::round((d::minimum({1.0,((0.05+(0.75*_n_lit_18870))+(0.2*_n_warm_18871))})*(double(_n_RAMP_18788.size())-2.0))));
(void)(([&](){auto&& _n_array_18935=_n_row_18860;auto _n_index_18936=_n_c_18861;auto _n_value_18937=d::at(_n_RAMP_18788,(d::truth(_n_paper_18823)?((double(_n_RAMP_18788.size())-1.0)-_n_i_18876):_n_i_18876));d::put(_n_array_18935,_n_index_18936,_n_value_18937);return _n_value_18937;})());
}}
(void)(_n_lines_18858.push(d::join(_n_row_18860,d::String(u""))));
}}
return d::join(_n_lines_18858,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lava-lamp").cols)*ascii::catalog_meta("lava-lamp").rows);auto _env=std::make_shared<_n_Record_18877>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lava_lamp_meta(){return catalog_meta("lava-lamp");}
std::unique_ptr<Piece> make_lava_lamp(const AsciiPieceOptions &o){return std::make_unique<Native_lava_lamp>(o);}
}
