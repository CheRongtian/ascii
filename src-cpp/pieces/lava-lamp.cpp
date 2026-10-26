// Direct, statically typed C++ from src/pieces/lava-lamp.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_18788;
struct _n_Record_18827;
struct _n_Record_18878;
struct _n_Record_18884;
struct _n_Record_18788{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_18788> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18788>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_18827{
double _p_x{};
double _p_y{};
double _p_r2{};
double _p_sx{};
double _p_sy{};
static std::shared_ptr<_n_Record_18827> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18827>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_r2=d::decode<double>(j["r2"]);out->_p_sx=d::decode<double>(j["sx"]);out->_p_sy=d::decode<double>(j["sy"]);return out;}
};
struct _n_Record_18878{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_18878> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18878>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_18884{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_258f{};
d::String _p_symbol_2595{};
d::String _p_symbol_2502{};
d::String _p__{};
static std::shared_ptr<_n_Record_18884> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18884>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_258f=d::decode<d::String>(j["▏"]);out->_p_symbol_2595=d::decode<d::String>(j["▕"]);out->_p_symbol_2502=d::decode<d::String>(j["│"]);out->_p__=d::decode<d::String>(j["_"]);return out;}
};
double _n_half_18798(double _a0);
double _n_fall_18799(double _a0);
double _n_smooth_18800(double _a0);
std::shared_ptr<_n_Record_18788> _n_meta_18787=[](){return ([&](){auto _n_object_18881=std::make_shared<_n_Record_18788>();_n_object_18881->_p_name=d::String(u"lava lamp");_n_object_18881->_p_category=d::String(u"objects");_n_object_18881->_p_note=d::String(u"wax blobs rising, merging and sinking in a lit glass");_n_object_18881->_p_cols=30.0;_n_object_18881->_p_rows=27.0;_n_object_18881->_p_fps=15.0;return _n_object_18881;})();}();
const d::String _n_RAMP_18789=[](){return d::String(u".:-=+*#%@");}();
const double _n_CW_18790=[](){return 0.6;}();
const double _n_CH_18791=[](){return 1.2;}();
const double _n_T0_18792=[](){return 9.0;}();
const double _n_THRESH_18793=[](){return 0.3;}();
const double _n_TOP_18794=[](){return 8.6;}();
const double _n_FLOOR_18795=[](){return 24.4;}();
d::Array<std::array<double,5>,false> _n_BLOBS_18796=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{24.0,0.42,(-d::number(0.5)),0.7,3.0},std::array<double,5>{27.0,0.08,0.6,0.6,2.7},std::array<double,5>{31.0,0.74,0.1,0.8,3.3}};}();
d::Array<double,false> _n_GLASS_18797=[](){return d::Array<double,false>{4.0,21.0};}();
double _n_half_18798(double _a0){double _n_r_18810=_a0;
return (d::truth((_n_r_18810<1.0))?1.9:(d::truth((_n_r_18810<4.0))?(0.9+_n_r_18810):(d::truth((_n_r_18810<20.0))?(4.1+(0.26*(_n_r_18810-4.0))):(d::truth((_n_r_18810<21.0))?7.6:(6.8+(_n_r_18810-21.0))))));}

double _n_fall_18799(double _a0){double _n_q_18811=_a0;
return (d::truth((_n_q_18811<1.0))?((1.0-_n_q_18811)*(1.0-_n_q_18811)):0.0);}

double _n_smooth_18800(double _a0){double _n_e_18812=_a0;
return (d::truth((_n_e_18812<=0.0))?0.0:(d::truth((_n_e_18812>=1.0))?1.0:((_n_e_18812*_n_e_18812)*(3.0-(2.0*_n_e_18812)))));}

struct Native_lava_lamp final:ascii::Piece{
double _n_cols_18801{};
double _n_rows_18802{};
double _n_mid_18803{};
double _n_m_18804{};
double _n_ly_18805{};
double _n_lz_18806{};
d::Array<d::Array<d::String,false>,false> _n_shell_18807{};
d::Dict<d::String,d::String> _n_flip_18808{};
std::function<d::String(double,std::shared_ptr<_n_Record_18878>)> _render;
double _n_room_18809(double _a0){double _n_r_18822=_a0;
return ((_n_half_18798(([&](){auto _n_argument_18939=(d::at(_n_GLASS_18797,1.0)-1.0);auto _n_argument_18940=d::maximum({d::at(_n_GLASS_18797,0.0),_n_r_18822});return d::minimum({_n_argument_18939,_n_argument_18940});})())-1.1)*_n_CW_18790);}

explicit Native_lava_lamp(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_18882=_n_meta_18787;
this->_n_cols_18801=_n_binding_18882->_p_cols;
this->_n_rows_18802=_n_binding_18882->_p_rows;
this->_n_mid_18803=(this->_n_cols_18801/2.0);
this->_n_m_18804=d::hypot(std::initializer_list<double>{0.0,0.5,0.85});
auto _n_binding_18883=d::Array<double,false>{(0.5/this->_n_m_18804),(0.85/this->_n_m_18804)};
this->_n_ly_18805=d::at(_n_binding_18883,0.0);
this->_n_lz_18806=d::at(_n_binding_18883,1.0);
this->_n_shell_18807=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_18802,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_18801)).fill(d::String(u" "));}));
this->_n_flip_18808=([&](){d::Dict<d::String,d::String> _n_dictionary_18885;_n_dictionary_18885.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_18885.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_18885.set(d::String(u"▏"),d::String(u"▕"));_n_dictionary_18885.set(d::String(u"▕"),d::String(u"▏"));_n_dictionary_18885.set(d::String(u"│"),d::String(u"│"));_n_dictionary_18885.set(d::String(u"_"),d::String(u"_"));return _n_dictionary_18885;})();
{double _n_r_18813=0.0;
for(;d::truth((_n_r_18813<this->_n_rows_18802));(void)((_n_r_18813++))){d::check_cancel();double _n_x_18814=(this->_n_mid_18803-_n_half_18798(_n_r_18813));
double _n_lean_18815=([&](){auto _n_left_18886=_n_half_18798((_n_r_18813+0.5));auto _n_right_18887=_n_half_18798((_n_r_18813-0.5));return (_n_left_18886-_n_right_18887);})();
double _n_c_18816=std::floor(_n_x_18814);
d::String _n_g_18817{};
if(d::truth((_n_r_18813==0.0))){d::check_cancel();(void)((_n_g_18817=d::String(u"_")));
}else {d::check_cancel();if((d::truth((_n_r_18813<d::at(_n_GLASS_18797,0.0)))||d::truth((_n_r_18813>=(d::at(_n_GLASS_18797,1.0)-1.0))))){d::check_cancel();(void)((_n_g_18817=((d::truth((_n_lean_18815>0.0))||d::truth((_n_r_18813<d::at(_n_GLASS_18797,0.0))))?d::String(u"/"):d::String(u"\\"))));
}else {d::check_cancel();double _n_f_18818=(_n_x_18814-_n_c_18816);
(void)((_n_g_18817=(d::truth((_n_f_18818<0.34))?d::String(u"▏"):(d::truth((_n_f_18818<0.67))?d::String(u"│"):d::String(u"▕")))));
}
}
if(d::truth((_n_r_18813==0.0))){d::check_cancel();{double _n_k_18819=_n_c_18816;
for(;d::truth((_n_k_18819<(this->_n_cols_18801-_n_c_18816)));(void)((_n_k_18819++))){d::check_cancel();(void)(([&](){auto&& _n_array_18888=d::at(this->_n_shell_18807,_n_r_18813);auto _n_index_18889=_n_k_18819;auto _n_value_18890=d::String(u"_");d::put(_n_array_18888,_n_index_18889,_n_value_18890);return _n_value_18890;})());
}}
}
(void)(([&](){auto&& _n_array_18891=d::at(this->_n_shell_18807,_n_r_18813);auto _n_index_18892=_n_c_18816;auto _n_value_18893=_n_g_18817;d::put(_n_array_18891,_n_index_18892,_n_value_18893);return _n_value_18893;})());
(void)(([&](){auto&& _n_array_18894=d::at(this->_n_shell_18807,_n_r_18813);auto _n_index_18895=((this->_n_cols_18801-1.0)-_n_c_18816);auto _n_value_18896=this->_n_flip_18808.get(_n_g_18817);d::put(_n_array_18894,_n_index_18895,_n_value_18896);return _n_value_18896;})());
if(((d::truth((_n_r_18813==3.0))||d::truth((_n_r_18813==21.0)))||d::truth((_n_r_18813==(this->_n_rows_18802-1.0))))){d::check_cancel();{double _n_k_18820=(_n_c_18816+1.0);
for(;d::truth((_n_k_18820<((this->_n_cols_18801-1.0)-_n_c_18816)));(void)((_n_k_18820++))){d::check_cancel();(void)(([&](){auto&& _n_array_18897=d::at(this->_n_shell_18807,_n_r_18813);auto _n_index_18898=_n_k_18820;auto _n_value_18899=d::String(u"_");d::put(_n_array_18897,_n_index_18898,_n_value_18899);return _n_value_18899;})());
}}
}
if((d::truth((_n_r_18813>=d::at(_n_GLASS_18797,0.0)))&&d::truth((_n_r_18813<d::at(_n_GLASS_18797,1.0))))){d::check_cancel();{double _n_k_18821=(_n_c_18816+1.0);
for(;d::truth((_n_k_18821<((this->_n_cols_18801-1.0)-_n_c_18816)));(void)((_n_k_18821++))){d::check_cancel();(void)(([&](){auto&& _n_array_18900=d::at(this->_n_shell_18807,_n_r_18813);auto _n_index_18901=_n_k_18821;auto _n_value_18902=d::String(u"~");d::put(_n_array_18900,_n_index_18901,_n_value_18902);return _n_value_18902;})());
}}
}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_18878> _a1) mutable ->d::String{double _n_t_18823=_a0;
auto _n_binding_18905=(d::present(_a1)?_a1:([&](){auto _n_object_18904=std::make_shared<_n_Record_18878>();return _n_object_18904;})());
bool _n_paper_18824=(d::present(_n_binding_18905->_p_paper)?d::read(_n_binding_18905->_p_paper):false);
{
double _n_tt_18825=(_n_T0_18792+_n_t_18823);
d::Array<std::shared_ptr<_n_Record_18827>,false> _n_balls_18826=d::map(_n_BLOBS_18796,[&]( std::array<double,5> _a0) mutable ->std::shared_ptr<_n_Record_18827>{auto _n_binding_18906=_a0;
double _n_period_18828=d::at(_n_binding_18906,0.0);
double _n_phase_18829=d::at(_n_binding_18906,1.0);
double _n_side_18830=d::at(_n_binding_18906,2.0);
double _n_sway_18831=d::at(_n_binding_18906,3.0);
double _n_rad_18832=d::at(_n_binding_18906,4.0);
{
double _n_a_18833=((2.0*ascii::PI)*((_n_tt_18825/_n_period_18828)+_n_phase_18829));
double _n_y_18834=(_n_TOP_18794+(((_n_FLOOR_18795-_n_TOP_18794)*(1.0+std::cos(_n_a_18833)))/2.0));
double _n_stretch_18835=(1.0+(0.3*std::fabs(std::sin(_n_a_18833))));
double _n_sx_18836=_n_stretch_18835;
double _n_sy_18837=(1.0/(_n_stretch_18835*_n_stretch_18835));
double _n_top_18838=std::floor(((_n_y_18834-((0.67*_n_rad_18832)/std::sqrt(_n_sy_18837)))/_n_CH_18791));
double _n_fit_18839=this->_n_room_18809(_n_top_18838);
double _n_r_18840=([&](){auto _n_argument_18907=_n_rad_18832;auto _n_argument_18908=((_n_fit_18839*std::sqrt(_n_sx_18836))/0.85);return d::minimum({_n_argument_18907,_n_argument_18908});})();
double _n_reach_18841=((0.8*_n_r_18840)/std::sqrt(_n_sx_18836));
double _n_x_18842=(_n_side_18830+(_n_sway_18831*std::sin(((_n_a_18833*0.5)+(_n_phase_18829*9.0)))));
return ([&](){auto _n_object_18910=std::make_shared<_n_Record_18827>();_n_object_18910->_p_x=([&](){auto _n_argument_18911=(_n_reach_18841-_n_fit_18839);auto _n_argument_18912=d::minimum({(_n_fit_18839-_n_reach_18841),_n_x_18842});return d::maximum({_n_argument_18911,_n_argument_18912});})();_n_object_18910->_p_y=_n_y_18834;_n_object_18910->_p_r2=(_n_r_18840*_n_r_18840);_n_object_18910->_p_sx=_n_sx_18836;_n_object_18910->_p_sy=_n_sy_18837;return _n_object_18910;})();

}
});
{double _n_j_18843=(-d::number(1.0));
for(;d::truth((_n_j_18843<=1.0));(void)((_n_j_18843++))){d::check_cancel();double _n_x_18844=((_n_j_18843*2.5)+(0.35*std::sin(((_n_tt_18825*0.31)+(_n_j_18843*2.1)))));
(void)(_n_balls_18826.push(([&](){auto _n_object_18914=std::make_shared<_n_Record_18827>();_n_object_18914->_p_x=_n_x_18844;_n_object_18914->_p_y=((_n_FLOOR_18795+0.6)+(0.3*std::sin(((_n_tt_18825*0.43)+(_n_j_18843*1.3)))));_n_object_18914->_p_r2=(2.6*2.6);_n_object_18914->_p_sx=0.3;_n_object_18914->_p_sy=1.0;return _n_object_18914;})()));
}}
auto _n_field_18845=[&]( double _a0,double _a1) mutable ->double{double _n_x_18846=_a0;
double _n_y_18847=_a1;
{
double _n_f_18848=0.0;
for(auto &&_n_item_18915:_n_balls_18826){d::check_cancel();std::shared_ptr<_n_Record_18827> _n_b_18849=_n_item_18915;
{
double _n_dx_18850=(_n_x_18846-_n_b_18849->_p_x);
double _n_dy_18851=(_n_y_18847-_n_b_18849->_p_y);
(void)((_n_f_18848=(_n_f_18848+_n_fall_18799(((((_n_dx_18850*_n_dx_18850)*_n_b_18849->_p_sx)+((_n_dy_18851*_n_dy_18851)*_n_b_18849->_p_sy))/_n_b_18849->_p_r2)))));

}
}
double _n_edge_18852=([&](){auto _n_argument_18916=1.0;auto _n_argument_18917=([&](){auto _n_left_18918=std::fabs(_n_x_18846);auto _n_right_18919=this->_n_room_18809((d::at(_n_GLASS_18797,1.0)-1.0));return (_n_left_18918/_n_right_18919);})();return d::minimum({_n_argument_18916,_n_argument_18917});})();
return (_n_f_18848+(0.55*_n_smooth_18800(((((_n_y_18847-_n_FLOOR_18795)+0.9)+(2.0*std::pow(_n_edge_18852,4.0)))/1.1))));

}
};
d::Array<double,true> _n_F_18853=d::Array<double,true>(size_t((this->_n_rows_18802*this->_n_cols_18801)));
{double _n_r_18854=d::at(_n_GLASS_18797,0.0);
for(;d::truth((_n_r_18854<d::at(_n_GLASS_18797,1.0)));(void)((_n_r_18854++))){d::check_cancel();{double _n_c_18855=0.0;
for(;d::truth((_n_c_18855<this->_n_cols_18801));(void)((_n_c_18855++))){d::check_cancel();if(d::truth((d::at(d::at(this->_n_shell_18807,_n_r_18854),_n_c_18855)==d::String(u"~")))){d::check_cancel();(void)(([&](){auto&& _n_array_18920=_n_F_18853;auto _n_index_18921=((_n_r_18854*this->_n_cols_18801)+_n_c_18855);auto _n_value_18922=_n_field_18845((((_n_c_18855+0.5)-this->_n_mid_18803)*_n_CW_18790),((_n_r_18854+0.5)*_n_CH_18791));d::put(_n_array_18920,_n_index_18921,_n_value_18922);return _n_value_18922;})());
}
}}
}}
auto _n_wax_18856=[&]( double _a0,double _a1) mutable ->bool{double _n_r_18857=_a0;
double _n_c_18858=_a1;
return ([&]()->bool{auto _n_logical_18923=(d::at(d::at(this->_n_shell_18807,_n_r_18857),_n_c_18858)!=d::String(u"~"));return d::truth(_n_logical_18923)?_n_logical_18923:(d::at(_n_F_18853,((_n_r_18857*this->_n_cols_18801)+_n_c_18858))>=_n_THRESH_18793);})();};
d::Array<d::String,false> _n_lines_18859=d::Array<d::String,false>{};
{double _n_r_18860=0.0;
for(;d::truth((_n_r_18860<this->_n_rows_18802));(void)((_n_r_18860++))){d::check_cancel();d::Array<d::String,false> _n_row_18861=d::at(this->_n_shell_18807,_n_r_18860).slice();
{double _n_c_18862=0.0;
for(;d::truth((_n_c_18862<this->_n_cols_18801));(void)((_n_c_18862++))){d::check_cancel();if(d::truth((d::at(_n_row_18861,_n_c_18862)!=d::String(u"~")))){d::check_cancel();continue;
}
double _n_x_18863=(((_n_c_18862+0.5)-this->_n_mid_18803)*_n_CW_18790);
double _n_y_18864=((_n_r_18860+0.5)*_n_CH_18791);
double _n_f_18865=d::at(_n_F_18853,((_n_r_18860*this->_n_cols_18801)+_n_c_18862));
if(d::truth((_n_f_18865<_n_THRESH_18793))){d::check_cancel();(void)(([&](){auto&& _n_array_18924=_n_row_18861;auto _n_index_18925=_n_c_18862;auto _n_value_18926=d::String(u" ");d::put(_n_array_18924,_n_index_18925,_n_value_18926);return _n_value_18926;})());
continue;
}
double _n_gx_18866=(([&](){auto _n_left_18927=_n_field_18845((_n_x_18863+0.3),_n_y_18864);auto _n_right_18928=_n_field_18845((_n_x_18863-0.3),_n_y_18864);return (_n_left_18927-_n_right_18928);})()/0.6);
double _n_gy_18867=(([&](){auto _n_left_18929=_n_field_18845(_n_x_18863,(_n_y_18864+0.3));auto _n_right_18930=_n_field_18845(_n_x_18863,(_n_y_18864-0.3));return (_n_left_18929-_n_right_18930);})()/0.6);
double _n_k_18868=(0.8/std::sqrt(((_n_f_18865-_n_THRESH_18793)+0.04)));
double _n_nx_18869=((-d::number(_n_gx_18866))*_n_k_18868);
double _n_ny_18870=((-d::number(_n_gy_18867))*_n_k_18868);
double _n_lit_18871=([&](){auto _n_argument_18931=0.0;auto _n_argument_18932=(((_n_ny_18870*this->_n_ly_18805)+this->_n_lz_18806)/d::hypot(std::initializer_list<double>{_n_nx_18869,_n_ny_18870,1.0}));return d::maximum({_n_argument_18931,_n_argument_18932});})();
double _n_warm_18872=_n_smooth_18800(((_n_y_18864-_n_TOP_18794)/(_n_FLOOR_18795-_n_TOP_18794)));
bool _n_up_18873=(!d::truth(_n_wax_18856((_n_r_18860-1.0),_n_c_18862)));
bool _n_dn_18874=(!d::truth(_n_wax_18856((_n_r_18860+1.0),_n_c_18862)));
bool _n_lf_18875=(!d::truth(_n_wax_18856(_n_r_18860,(_n_c_18862-1.0))));
bool _n_rt_18876=(!d::truth(_n_wax_18856(_n_r_18860,(_n_c_18862+1.0))));
if((((d::truth(_n_up_18873)||d::truth(_n_dn_18874))||d::truth(_n_lf_18875))||d::truth(_n_rt_18876))){d::check_cancel();(void)(([&](){auto&& _n_array_18933=_n_row_18861;auto _n_index_18934=_n_c_18862;auto _n_value_18935=((d::truth(_n_up_18873)&&d::truth(_n_dn_18874))?(d::truth(_n_lf_18875)?d::String(u"("):(d::truth(_n_rt_18876)?d::String(u")"):d::String(u"-"))):(d::truth(_n_up_18873)?((d::truth(_n_lf_18875)||d::truth(_n_rt_18876))?d::String(u"."):d::String(u"-")):(d::truth(_n_dn_18874)?((d::truth(_n_lf_18875)||d::truth(_n_rt_18876))?d::String(u"'"):d::String(u"-")):((d::truth(_n_lf_18875)&&d::truth(_n_rt_18876))?d::String(u"|"):(d::truth(_n_lf_18875)?d::String(u"("):d::String(u")"))))));d::put(_n_array_18933,_n_index_18934,_n_value_18935);return _n_value_18935;})());
continue;
}
double _n_i_18877=(1.0+d::round((d::minimum({1.0,((0.05+(0.75*_n_lit_18871))+(0.2*_n_warm_18872))})*(double(_n_RAMP_18789.size())-2.0))));
(void)(([&](){auto&& _n_array_18936=_n_row_18861;auto _n_index_18937=_n_c_18862;auto _n_value_18938=d::at(_n_RAMP_18789,(d::truth(_n_paper_18824)?((double(_n_RAMP_18789.size())-1.0)-_n_i_18877):_n_i_18877));d::put(_n_array_18936,_n_index_18937,_n_value_18938);return _n_value_18938;})());
}}
(void)(_n_lines_18859.push(d::join(_n_row_18861,d::String(u""))));
}}
return d::join(_n_lines_18859,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lava-lamp").cols)*ascii::catalog_meta("lava-lamp").rows);auto _env=std::make_shared<_n_Record_18878>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lava_lamp_meta(){return catalog_meta("lava-lamp");}
std::unique_ptr<Piece> make_lava_lamp(const AsciiPieceOptions &o){return std::make_unique<Native_lava_lamp>(o);}
}
