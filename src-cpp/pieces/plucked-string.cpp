// Direct, statically typed C++ from src/pieces/plucked-string.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24783;
struct _n_Record_24801;
struct _n_Record_24864;
struct _n_Record_24783{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24783> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24783>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24801{
double _p_p{};
double _p_h{};
d::Array<double,true> _p_b{};
double _p_col{};
static std::shared_ptr<_n_Record_24801> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24801>();out->_p_p=d::decode<double>(j["p"]);out->_p_h=d::decode<double>(j["h"]);out->_p_b=d::decode<d::Array<double,true>>(j["b"]);out->_p_col=d::decode<double>(j["col"]);return out;}
};
struct _n_Record_24864{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24864> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24864>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_24794(double _a0,double _a1);
double _n_ease_24795(double _a0);
std::shared_ptr<_n_Record_24783> _n_meta_24782=[](){return ([&](){auto _n_object_24867=std::make_shared<_n_Record_24783>();_n_object_24867->_p_name=d::String(u"plucked string");_n_object_24867->_p_category=d::String(u"physics");_n_object_24867->_p_note=d::String(u"a plucked string, slowed down, its harmonics fading");_n_object_24867->_p_cols=64.0;_n_object_24867->_p_rows=14.0;_n_object_24867->_p_fps=30.0;return _n_object_24867;})();}();
const double _n_R0_24784=[](){return 6.5;}();
const double _n_A_24785=[](){return 9.0;}();
const double _n_B_24786=[](){return 55.0;}();
const double _n_N_24787=[](){return 32.0;}();
const double _n_PERIOD_24788=[](){return 1.6;}();
const double _n_CYCLE_24789=[](){return 6.0;}();
const double _n_DOWN_24790=[](){return 0.55;}();
const double _n_PULL_24791=[](){return 0.6;}();
const double _n_T0_24792=[](){return 1.05;}();
const d::String _n_LINE_24793=[](){return d::String(u"▔─▁");}();
double _n_hash_24794(double _a0,double _a1){double _n_i_24807=_a0;
double _n_s_24808=_a1;
{
double _n_h_24809=([&](){auto _n_left_24868=d::imul(double(d::i32(_n_i_24807)^d::i32(2654435769.0)),2246822507.0);auto _n_right_24869=d::imul((_n_s_24808+1.0),3266489909.0);return double(d::i32(_n_left_24868)^d::i32(_n_right_24869));})();
(void)((_n_h_24809=d::imul(double(d::i32(_n_h_24809)^d::i32(double(d::u32(_n_h_24809)>>(d::u32(15.0)&31)))),739982445.0)));
return (double(d::u32(double(d::i32(_n_h_24809)^d::i32(double(d::u32(_n_h_24809)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_24795(double _a0){double _n_u_24810=_a0;
return (d::truth((_n_u_24810<=0.0))?0.0:(d::truth((_n_u_24810>=1.0))?1.0:((_n_u_24810*_n_u_24810)*(3.0-(2.0*_n_u_24810)))));}

struct Native_plucked_string final:ascii::Piece{
double _n_cols_24796{};
double _n_rows_24797{};
double _n_L_24798{};
d::Array<d::Array<double,true>,false> _n_shape_24799{};
std::function<std::shared_ptr<_n_Record_24801>(double)> _n_pluck_24800{};
d::Array<d::Array<d::String,false>,false> _n_base_24804{};
double _n_r0_24805{};
d::Array<double,true> _n_y_24806{};
std::function<d::String(double,std::shared_ptr<_n_Record_24864>)> _render;
void _n_ring_24802(d::Array<double,true> _a0,std::shared_ptr<_n_Record_24801> _a1,double _a2){d::Array<double,true> _n_y_24823=_a0;
std::shared_ptr<_n_Record_24801> _n_pk_24824=_a1;
double _n_s_24825=_a2;
{
(void)(_n_y_24823.fill(0.0));
{double _n_n_24826=0.0;
for(;d::truth((_n_n_24826<_n_N_24787));(void)((_n_n_24826++))){d::check_cancel();double _n_m_24827=(_n_n_24826+1.0);
double _n_a_24828=([&](){auto _n_left_24937=(d::at(_n_pk_24824->_p_b,_n_n_24826)*std::cos(((((2.0*ascii::PI)*_n_m_24827)*_n_s_24825)/_n_PERIOD_24788)));auto _n_right_24938=std::exp(((-d::number((0.2+((0.0022*_n_m_24827)*_n_m_24827))))*_n_s_24825));return (_n_left_24937*_n_right_24938);})();
if(d::truth((std::fabs(_n_a_24828)<0.0001))){d::check_cancel();continue;
}
{double _n_c_24829=0.0;
for(;d::truth((_n_c_24829<this->_n_cols_24796));(void)((_n_c_24829++))){d::check_cancel();(void)(([&](){auto&& _n_array_24939=_n_y_24823;auto _n_index_24940=_n_c_24829;auto _n_value_24941=(d::at(_n_array_24939,_n_index_24940)+(_n_a_24828*d::at(d::at(this->_n_shape_24799,_n_c_24829),_n_n_24826)));d::put(_n_array_24939,_n_index_24940,_n_value_24941);return _n_value_24941;})());
}}
}}

}
}

double _n_tri_24803(double _a0,std::shared_ptr<_n_Record_24801> _a1){double _n_c_24830=_a0;
std::shared_ptr<_n_Record_24801> _n_pk_24831=_a1;
{
double _n_u_24832=(((_n_c_24830+0.5)-_n_A_24785)/this->_n_L_24798);
return ((d::truth((_n_u_24832<=0.0))||d::truth((_n_u_24832>=1.0)))?0.0:(_n_pk_24831->_p_h*(d::truth((_n_u_24832<_n_pk_24831->_p_p))?(_n_u_24832/_n_pk_24831->_p_p):((1.0-_n_u_24832)/(1.0-_n_pk_24831->_p_p)))));

}
}

explicit Native_plucked_string(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24870=_n_meta_24782;
this->_n_cols_24796=_n_binding_24870->_p_cols;
this->_n_rows_24797=_n_binding_24870->_p_rows;
this->_n_L_24798=(_n_B_24786-_n_A_24785);
this->_n_shape_24799=d::Array<d::Array<double,true>,false>{};
{double _n_c_24811=0.0;
for(;d::truth((_n_c_24811<this->_n_cols_24796));(void)((_n_c_24811++))){d::check_cancel();double _n_u_24812=(((_n_c_24811+0.5)-_n_A_24785)/this->_n_L_24798);
(void)(this->_n_shape_24799.push(d::Array<double,true>(d::from(_n_N_24787,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_n_24814=_a1;
return ((d::truth((_n_u_24812>0.0))&&d::truth((_n_u_24812<1.0)))?std::sin((((_n_n_24814+1.0)*ascii::PI)*_n_u_24812)):0.0);}))));
}}
this->_n_pluck_24800=[=]( double _a0) mutable ->std::shared_ptr<_n_Record_24801>{double _n_k_24815=_a0;
{
bool _n_near_24816=(_n_hash_24794(_n_k_24815,1.0)<0.5);
double _n_p_24817=(d::truth(_n_near_24816)?(0.2+(0.18*_n_hash_24794(_n_k_24815,2.0))):(0.62+(0.18*_n_hash_24794(_n_k_24815,2.0))));
double _n_h_24818=((d::truth(d::mod(_n_k_24815,2.0))?(-d::number(1.0)):1.0)*(3.3+(0.5*_n_hash_24794(_n_k_24815,3.0))));
d::Array<double,true> _n_b_24819=d::Array<double,true>(d::from(_n_N_24787,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_n_24821=_a1;
{
double _n_m_24822=(_n_n_24821+1.0);
return (((2.0*_n_h_24818)*std::sin(((_n_m_24822*ascii::PI)*_n_p_24817)))/(((((_n_m_24822*_n_m_24822)*ascii::PI)*ascii::PI)*_n_p_24817)*(1.0-_n_p_24817)));

}
}));
return ([&](){auto _n_object_24872=std::make_shared<_n_Record_24801>();_n_object_24872->_p_p=_n_p_24817;_n_object_24872->_p_h=_n_h_24818;_n_object_24872->_p_b=_n_b_24819;_n_object_24872->_p_col=std::floor((_n_A_24785+(_n_p_24817*this->_n_L_24798)));return _n_object_24872;})();

}
};
this->_n_base_24804=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_24797,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_24796)).fill(d::String(u" "));}));
this->_n_r0_24805=std::floor(_n_R0_24784);
for(auto &&_n_item_24873:d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,_n_A_24785},d::Array<double,false>{(this->_n_cols_24796-2.0),_n_B_24786}}){d::check_cancel();auto _n_binding_24874=_n_item_24873;
double _n_pin_24833=d::at(_n_binding_24874,0.0);
double _n_edge_24834=d::at(_n_binding_24874,1.0);
{
(void)(([&](){auto&& _n_array_24875=d::at(this->_n_base_24804,this->_n_r0_24805);auto _n_index_24876=_n_pin_24833;auto _n_value_24877=d::String(u"o");d::put(_n_array_24875,_n_index_24876,_n_value_24877);return _n_value_24877;})());
{double _n_r_24835=(this->_n_r0_24805+1.0);
for(;d::truth((_n_r_24835<12.0));(void)((_n_r_24835++))){d::check_cancel();(void)(((([&](){auto&& _n_array_24878=d::at(this->_n_base_24804,_n_r_24835);auto _n_index_24879=(_n_pin_24833-1.0);auto _n_value_24880=d::String(u"▐");d::put(_n_array_24878,_n_index_24879,_n_value_24880);return _n_value_24880;})(),([&](){auto&& _n_array_24881=d::at(this->_n_base_24804,_n_r_24835);auto _n_index_24882=_n_pin_24833;auto _n_value_24883=d::String(u"█");d::put(_n_array_24881,_n_index_24882,_n_value_24883);return _n_value_24883;})()),([&](){auto&& _n_array_24884=d::at(this->_n_base_24804,_n_r_24835);auto _n_index_24885=(_n_pin_24833+1.0);auto _n_value_24886=d::String(u"▌");d::put(_n_array_24884,_n_index_24885,_n_value_24886);return _n_value_24886;})()));
}}
{double _n_d_24836=1.0;
for(;d::truth((_n_d_24836<=5.0));(void)((_n_d_24836++))){d::check_cancel();double _n_rr_24837=(this->_n_r0_24805+_n_d_24836);
(void)(([&](){auto&& _n_array_24887=d::at(this->_n_base_24804,_n_rr_24837);auto _n_index_24888=(_n_edge_24834-_n_d_24836);auto _n_value_24889=d::String(u"/");d::put(_n_array_24887,_n_index_24888,_n_value_24889);return _n_value_24889;})());
(void)(([&](){auto&& _n_array_24890=d::at(this->_n_base_24804,_n_rr_24837);auto _n_index_24891=((_n_edge_24834+_n_d_24836)-1.0);auto _n_value_24892=d::String(u"\\");d::put(_n_array_24890,_n_index_24891,_n_value_24892);return _n_value_24892;})());
if(d::truth((_n_d_24836==5.0))){d::check_cancel();{double _n_c_24838=((_n_edge_24834-_n_d_24836)+1.0);
for(;d::truth((_n_c_24838<((_n_edge_24834+_n_d_24836)-1.0)));(void)((_n_c_24838++))){d::check_cancel();(void)(([&](){auto&& _n_array_24893=d::at(this->_n_base_24804,_n_rr_24837);auto _n_index_24894=_n_c_24838;auto _n_value_24895=d::String(u"_");d::put(_n_array_24893,_n_index_24894,_n_value_24895);return _n_value_24895;})());
}}
}
}}

}
}
{double _n_c_24839=2.0;
for(;d::truth((_n_c_24839<_n_A_24785));(void)((_n_c_24839++))){d::check_cancel();(void)(([&](){auto&& _n_array_24896=d::at(this->_n_base_24804,this->_n_r0_24805);auto _n_index_24897=_n_c_24839;auto _n_value_24898=d::String(u"─");d::put(_n_array_24896,_n_index_24897,_n_value_24898);return _n_value_24898;})());
}}
{double _n_c_24840=_n_B_24786;
for(;d::truth((_n_c_24840<(this->_n_cols_24796-2.0)));(void)((_n_c_24840++))){d::check_cancel();(void)(([&](){auto&& _n_array_24899=d::at(this->_n_base_24804,this->_n_r0_24805);auto _n_index_24900=_n_c_24840;auto _n_value_24901=d::String(u"─");d::put(_n_array_24899,_n_index_24900,_n_value_24901);return _n_value_24901;})());
}}
(void)(d::at(this->_n_base_24804,12.0).fill(d::String(u"▀")));
{double _n_c_24841=2.0;
for(;d::truth((_n_c_24841<(this->_n_cols_24796-2.0)));(void)((_n_c_24841++))){d::check_cancel();(void)(([&](){auto&& _n_array_24902=d::at(this->_n_base_24804,13.0);auto _n_index_24903=_n_c_24841;auto _n_value_24904=(d::truth((_n_c_24841==2.0))?d::String(u"\\"):(d::truth((_n_c_24841==(this->_n_cols_24796-3.0)))?d::String(u"/"):d::String(u"_")));d::put(_n_array_24902,_n_index_24903,_n_value_24904);return _n_value_24904;})());
}}
this->_n_y_24806=d::Array<double,true>(size_t(this->_n_cols_24796));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24864> _a1) mutable ->d::String{double _n_time_24842=_a0;
{
double _n_t_24843=(_n_T0_24792+_n_time_24842);
double _n_k_24844=std::floor((_n_t_24843/_n_CYCLE_24789));
double _n_s_24845=(_n_t_24843-(_n_k_24844*_n_CYCLE_24789));
std::shared_ptr<_n_Record_24801> _n_pk_24846=this->_n_pluck_24800(_n_k_24844);
std::shared_ptr<_n_Record_24801> _n_prev_24847=this->_n_pluck_24800((_n_k_24844-1.0));
bool _n_up_24848=(_n_pk_24846->_p_h>0.0);
double _n_held_24849=(_n_DOWN_24790+_n_PULL_24791);
(void)(this->_n_ring_24802(this->_n_y_24806,(d::truth((_n_s_24845<_n_held_24849))?_n_prev_24847:_n_pk_24846),(d::truth((_n_s_24845<_n_held_24849))?((_n_s_24845+_n_CYCLE_24789)-_n_held_24849):(_n_s_24845-_n_held_24849))));
double _n_fc_24850=_n_pk_24846->_p_col;
double _n_under_24851=(d::truth(_n_up_24848)?1.0:0.0);
double _n_tip_24852=(-d::number(1.0));
if(d::truth((_n_s_24845<_n_DOWN_24790))){d::check_cancel();(void)((_n_tip_24852=([&](){auto _n_left_24905=(std::floor((_n_R0_24784-d::at(this->_n_y_24806,_n_fc_24850)))+_n_under_24851);auto _n_right_24906=d::round((10.0*(1.0-_n_ease_24795((_n_s_24845/_n_DOWN_24790)))));return (_n_left_24905-_n_right_24906);})()));
}else {d::check_cancel();if(d::truth((_n_s_24845<_n_held_24849))){d::check_cancel();double _n_w_24853=_n_ease_24795(((_n_s_24845-_n_DOWN_24790)/_n_PULL_24791));
{double _n_c_24854=0.0;
for(;d::truth((_n_c_24854<this->_n_cols_24796));(void)((_n_c_24854++))){d::check_cancel();(void)(([&](){auto&& _n_array_24907=this->_n_y_24806;auto _n_index_24908=_n_c_24854;auto _n_value_24909=(((1.0-_n_w_24853)*d::at(this->_n_y_24806,_n_c_24854))+(_n_w_24853*this->_n_tri_24803(_n_c_24854,_n_pk_24846)));d::put(_n_array_24907,_n_index_24908,_n_value_24909);return _n_value_24909;})());
}}
(void)((_n_tip_24852=(std::floor((_n_R0_24784-d::at(this->_n_y_24806,_n_fc_24850)))+_n_under_24851)));
}else {d::check_cancel();if(d::truth((_n_s_24845<(_n_held_24849+0.4)))){d::check_cancel();double _n_d_24855=(_n_s_24845-_n_held_24849);
(void)((_n_tip_24852=([&](){auto _n_left_24910=(std::floor((_n_R0_24784-_n_pk_24846->_p_h))+_n_under_24851);auto _n_right_24911=d::round(((25.0*_n_d_24855)+((40.0*_n_d_24855)*_n_d_24855)));return (_n_left_24910-_n_right_24911);})()));
}
}
}
d::Array<d::Array<d::String,false>,false> _n_g_24856=d::map(this->_n_base_24804,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_24857=_a0;
return _n_row_24857.slice();});
{double _n_c_24858=_n_A_24785;
for(;d::truth((_n_c_24858<_n_B_24786));(void)((_n_c_24858++))){d::check_cancel();double _n_row_24859=(_n_R0_24784-d::at(this->_n_y_24806,_n_c_24858));
double _n_r_24860=std::floor(_n_row_24859);
double _n_slope_24861=(([&](){auto _n_left_24912=d::at(this->_n_y_24806,d::minimum({(this->_n_cols_24796-1.0),(_n_c_24858+1.0)}));auto _n_right_24913=d::at(this->_n_y_24806,d::maximum({0.0,(_n_c_24858-1.0)}));return (_n_left_24912-_n_right_24913);})()/2.0);
(void)(([&](){auto&& _n_array_24914=d::at(_n_g_24856,_n_r_24860);auto _n_index_24915=_n_c_24858;auto _n_value_24916=(d::truth((std::fabs(_n_slope_24861)>0.55))?(d::truth((_n_slope_24861>0.0))?d::String(u"/"):d::String(u"\\")):d::at(_n_LINE_24793,([&](){auto _n_argument_24917=2.0;auto _n_argument_24918=std::floor(((_n_row_24859-_n_r_24860)*3.0));return d::minimum({_n_argument_24917,_n_argument_24918});})()));d::put(_n_array_24914,_n_index_24915,_n_value_24916);return _n_value_24916;})());
}}
if(d::truth((_n_tip_24852>=0.0))){d::check_cancel();{double _n_r_24862=0.0;
for(;d::truth((_n_r_24862<_n_tip_24852));(void)((_n_r_24862++))){d::check_cancel();(void)(((([&](){auto&& _n_array_24919=d::at(_n_g_24856,_n_r_24862);auto _n_index_24920=(_n_fc_24850-1.0);auto _n_value_24921=d::String(u"│");d::put(_n_array_24919,_n_index_24920,_n_value_24921);return _n_value_24921;})(),([&](){auto&& _n_array_24922=d::at(_n_g_24856,_n_r_24862);auto _n_index_24923=_n_fc_24850;auto _n_value_24924=d::String(u" ");d::put(_n_array_24922,_n_index_24923,_n_value_24924);return _n_value_24924;})()),([&](){auto&& _n_array_24925=d::at(_n_g_24856,_n_r_24862);auto _n_index_24926=(_n_fc_24850+1.0);auto _n_value_24927=d::String(u"│");d::put(_n_array_24925,_n_index_24926,_n_value_24927);return _n_value_24927;})()));
}}
(void)(([&](){auto&& _n_array_24928=d::at(_n_g_24856,_n_tip_24852);auto _n_index_24929=(_n_fc_24850-1.0);auto _n_value_24930=d::String(u"╰");d::put(_n_array_24928,_n_index_24929,_n_value_24930);return _n_value_24930;})());
(void)(([&](){auto&& _n_array_24931=d::at(_n_g_24856,_n_tip_24852);auto _n_index_24932=_n_fc_24850;auto _n_value_24933=d::String(u"─");d::put(_n_array_24931,_n_index_24932,_n_value_24933);return _n_value_24933;})());
(void)(([&](){auto&& _n_array_24934=d::at(_n_g_24856,_n_tip_24852);auto _n_index_24935=(_n_fc_24850+1.0);auto _n_value_24936=d::String(u"╯");d::put(_n_array_24934,_n_index_24935,_n_value_24936);return _n_value_24936;})());
}
return d::join(d::map(_n_g_24856,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_24863=_a0;
return d::join(_n_row_24863,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("plucked-string").cols)*ascii::catalog_meta("plucked-string").rows);auto _env=std::make_shared<_n_Record_24864>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &plucked_string_meta(){return catalog_meta("plucked-string");}
std::unique_ptr<Piece> make_plucked_string(const AsciiPieceOptions &o){return std::make_unique<Native_plucked_string>(o);}
}
