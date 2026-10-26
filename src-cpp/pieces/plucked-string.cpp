// Direct, statically typed C++ from src/pieces/plucked-string.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24784;
struct _n_Record_24802;
struct _n_Record_24865;
struct _n_Record_24784{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24784> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24784>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24802{
double _p_p{};
double _p_h{};
d::Array<double,true> _p_b{};
double _p_col{};
static std::shared_ptr<_n_Record_24802> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24802>();out->_p_p=d::decode<double>(j["p"]);out->_p_h=d::decode<double>(j["h"]);out->_p_b=d::decode<d::Array<double,true>>(j["b"]);out->_p_col=d::decode<double>(j["col"]);return out;}
};
struct _n_Record_24865{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24865> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24865>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_24795(double _a0,double _a1);
double _n_ease_24796(double _a0);
std::shared_ptr<_n_Record_24784> _n_meta_24783=[](){return ([&](){auto _n_object_24868=std::make_shared<_n_Record_24784>();_n_object_24868->_p_name=d::String(u"plucked string");_n_object_24868->_p_category=d::String(u"physics");_n_object_24868->_p_note=d::String(u"a plucked string, slowed down, its harmonics fading");_n_object_24868->_p_cols=64.0;_n_object_24868->_p_rows=14.0;_n_object_24868->_p_fps=30.0;return _n_object_24868;})();}();
const double _n_R0_24785=[](){return 6.5;}();
const double _n_A_24786=[](){return 9.0;}();
const double _n_B_24787=[](){return 55.0;}();
const double _n_N_24788=[](){return 32.0;}();
const double _n_PERIOD_24789=[](){return 1.6;}();
const double _n_CYCLE_24790=[](){return 6.0;}();
const double _n_DOWN_24791=[](){return 0.55;}();
const double _n_PULL_24792=[](){return 0.6;}();
const double _n_T0_24793=[](){return 1.05;}();
const d::String _n_LINE_24794=[](){return d::String(u"▔─▁");}();
double _n_hash_24795(double _a0,double _a1){double _n_i_24808=_a0;
double _n_s_24809=_a1;
{
double _n_h_24810=([&](){auto _n_left_24869=d::imul(double(d::i32(_n_i_24808)^d::i32(2654435769.0)),2246822507.0);auto _n_right_24870=d::imul((_n_s_24809+1.0),3266489909.0);return double(d::i32(_n_left_24869)^d::i32(_n_right_24870));})();
(void)((_n_h_24810=d::imul(double(d::i32(_n_h_24810)^d::i32(double(d::u32(_n_h_24810)>>(d::u32(15.0)&31)))),739982445.0)));
return (double(d::u32(double(d::i32(_n_h_24810)^d::i32(double(d::u32(_n_h_24810)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_24796(double _a0){double _n_u_24811=_a0;
return (d::truth((_n_u_24811<=0.0))?0.0:(d::truth((_n_u_24811>=1.0))?1.0:((_n_u_24811*_n_u_24811)*(3.0-(2.0*_n_u_24811)))));}

struct Native_plucked_string final:ascii::Piece{
double _n_cols_24797{};
double _n_rows_24798{};
double _n_L_24799{};
d::Array<d::Array<double,true>,false> _n_shape_24800{};
std::function<std::shared_ptr<_n_Record_24802>(double)> _n_pluck_24801{};
d::Array<d::Array<d::String,false>,false> _n_base_24805{};
double _n_r0_24806{};
d::Array<double,true> _n_y_24807{};
std::function<d::String(double,std::shared_ptr<_n_Record_24865>)> _render;
void _n_ring_24803(d::Array<double,true> _a0,std::shared_ptr<_n_Record_24802> _a1,double _a2){d::Array<double,true> _n_y_24824=_a0;
std::shared_ptr<_n_Record_24802> _n_pk_24825=_a1;
double _n_s_24826=_a2;
{
(void)(_n_y_24824.fill(0.0));
{double _n_n_24827=0.0;
for(;d::truth((_n_n_24827<_n_N_24788));(void)((_n_n_24827++))){d::check_cancel();double _n_m_24828=(_n_n_24827+1.0);
double _n_a_24829=([&](){auto _n_left_24938=(d::at(_n_pk_24825->_p_b,_n_n_24827)*std::cos(((((2.0*ascii::PI)*_n_m_24828)*_n_s_24826)/_n_PERIOD_24789)));auto _n_right_24939=std::exp(((-d::number((0.2+((0.0022*_n_m_24828)*_n_m_24828))))*_n_s_24826));return (_n_left_24938*_n_right_24939);})();
if(d::truth((std::fabs(_n_a_24829)<0.0001))){d::check_cancel();continue;
}
{double _n_c_24830=0.0;
for(;d::truth((_n_c_24830<this->_n_cols_24797));(void)((_n_c_24830++))){d::check_cancel();(void)(([&](){auto&& _n_array_24940=_n_y_24824;auto _n_index_24941=_n_c_24830;auto _n_value_24942=(d::at(_n_array_24940,_n_index_24941)+(_n_a_24829*d::at(d::at(this->_n_shape_24800,_n_c_24830),_n_n_24827)));d::put(_n_array_24940,_n_index_24941,_n_value_24942);return _n_value_24942;})());
}}
}}

}
}

double _n_tri_24804(double _a0,std::shared_ptr<_n_Record_24802> _a1){double _n_c_24831=_a0;
std::shared_ptr<_n_Record_24802> _n_pk_24832=_a1;
{
double _n_u_24833=(((_n_c_24831+0.5)-_n_A_24786)/this->_n_L_24799);
return ((d::truth((_n_u_24833<=0.0))||d::truth((_n_u_24833>=1.0)))?0.0:(_n_pk_24832->_p_h*(d::truth((_n_u_24833<_n_pk_24832->_p_p))?(_n_u_24833/_n_pk_24832->_p_p):((1.0-_n_u_24833)/(1.0-_n_pk_24832->_p_p)))));

}
}

explicit Native_plucked_string(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24871=_n_meta_24783;
this->_n_cols_24797=_n_binding_24871->_p_cols;
this->_n_rows_24798=_n_binding_24871->_p_rows;
this->_n_L_24799=(_n_B_24787-_n_A_24786);
this->_n_shape_24800=d::Array<d::Array<double,true>,false>{};
{double _n_c_24812=0.0;
for(;d::truth((_n_c_24812<this->_n_cols_24797));(void)((_n_c_24812++))){d::check_cancel();double _n_u_24813=(((_n_c_24812+0.5)-_n_A_24786)/this->_n_L_24799);
(void)(this->_n_shape_24800.push(d::Array<double,true>(d::from(_n_N_24788,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_n_24815=_a1;
return ((d::truth((_n_u_24813>0.0))&&d::truth((_n_u_24813<1.0)))?std::sin((((_n_n_24815+1.0)*ascii::PI)*_n_u_24813)):0.0);}))));
}}
this->_n_pluck_24801=[=]( double _a0) mutable ->std::shared_ptr<_n_Record_24802>{double _n_k_24816=_a0;
{
bool _n_near_24817=(_n_hash_24795(_n_k_24816,1.0)<0.5);
double _n_p_24818=(d::truth(_n_near_24817)?(0.2+(0.18*_n_hash_24795(_n_k_24816,2.0))):(0.62+(0.18*_n_hash_24795(_n_k_24816,2.0))));
double _n_h_24819=((d::truth(d::mod(_n_k_24816,2.0))?(-d::number(1.0)):1.0)*(3.3+(0.5*_n_hash_24795(_n_k_24816,3.0))));
d::Array<double,true> _n_b_24820=d::Array<double,true>(d::from(_n_N_24788,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_n_24822=_a1;
{
double _n_m_24823=(_n_n_24822+1.0);
return (((2.0*_n_h_24819)*std::sin(((_n_m_24823*ascii::PI)*_n_p_24818)))/(((((_n_m_24823*_n_m_24823)*ascii::PI)*ascii::PI)*_n_p_24818)*(1.0-_n_p_24818)));

}
}));
return ([&](){auto _n_object_24873=std::make_shared<_n_Record_24802>();_n_object_24873->_p_p=_n_p_24818;_n_object_24873->_p_h=_n_h_24819;_n_object_24873->_p_b=_n_b_24820;_n_object_24873->_p_col=std::floor((_n_A_24786+(_n_p_24818*this->_n_L_24799)));return _n_object_24873;})();

}
};
this->_n_base_24805=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_24798,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_24797)).fill(d::String(u" "));}));
this->_n_r0_24806=std::floor(_n_R0_24785);
for(auto &&_n_item_24874:d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,_n_A_24786},d::Array<double,false>{(this->_n_cols_24797-2.0),_n_B_24787}}){d::check_cancel();auto _n_binding_24875=_n_item_24874;
double _n_pin_24834=d::at(_n_binding_24875,0.0);
double _n_edge_24835=d::at(_n_binding_24875,1.0);
{
(void)(([&](){auto&& _n_array_24876=d::at(this->_n_base_24805,this->_n_r0_24806);auto _n_index_24877=_n_pin_24834;auto _n_value_24878=d::String(u"o");d::put(_n_array_24876,_n_index_24877,_n_value_24878);return _n_value_24878;})());
{double _n_r_24836=(this->_n_r0_24806+1.0);
for(;d::truth((_n_r_24836<12.0));(void)((_n_r_24836++))){d::check_cancel();(void)(((([&](){auto&& _n_array_24879=d::at(this->_n_base_24805,_n_r_24836);auto _n_index_24880=(_n_pin_24834-1.0);auto _n_value_24881=d::String(u"▐");d::put(_n_array_24879,_n_index_24880,_n_value_24881);return _n_value_24881;})(),([&](){auto&& _n_array_24882=d::at(this->_n_base_24805,_n_r_24836);auto _n_index_24883=_n_pin_24834;auto _n_value_24884=d::String(u"█");d::put(_n_array_24882,_n_index_24883,_n_value_24884);return _n_value_24884;})()),([&](){auto&& _n_array_24885=d::at(this->_n_base_24805,_n_r_24836);auto _n_index_24886=(_n_pin_24834+1.0);auto _n_value_24887=d::String(u"▌");d::put(_n_array_24885,_n_index_24886,_n_value_24887);return _n_value_24887;})()));
}}
{double _n_d_24837=1.0;
for(;d::truth((_n_d_24837<=5.0));(void)((_n_d_24837++))){d::check_cancel();double _n_rr_24838=(this->_n_r0_24806+_n_d_24837);
(void)(([&](){auto&& _n_array_24888=d::at(this->_n_base_24805,_n_rr_24838);auto _n_index_24889=(_n_edge_24835-_n_d_24837);auto _n_value_24890=d::String(u"/");d::put(_n_array_24888,_n_index_24889,_n_value_24890);return _n_value_24890;})());
(void)(([&](){auto&& _n_array_24891=d::at(this->_n_base_24805,_n_rr_24838);auto _n_index_24892=((_n_edge_24835+_n_d_24837)-1.0);auto _n_value_24893=d::String(u"\\");d::put(_n_array_24891,_n_index_24892,_n_value_24893);return _n_value_24893;})());
if(d::truth((_n_d_24837==5.0))){d::check_cancel();{double _n_c_24839=((_n_edge_24835-_n_d_24837)+1.0);
for(;d::truth((_n_c_24839<((_n_edge_24835+_n_d_24837)-1.0)));(void)((_n_c_24839++))){d::check_cancel();(void)(([&](){auto&& _n_array_24894=d::at(this->_n_base_24805,_n_rr_24838);auto _n_index_24895=_n_c_24839;auto _n_value_24896=d::String(u"_");d::put(_n_array_24894,_n_index_24895,_n_value_24896);return _n_value_24896;})());
}}
}
}}

}
}
{double _n_c_24840=2.0;
for(;d::truth((_n_c_24840<_n_A_24786));(void)((_n_c_24840++))){d::check_cancel();(void)(([&](){auto&& _n_array_24897=d::at(this->_n_base_24805,this->_n_r0_24806);auto _n_index_24898=_n_c_24840;auto _n_value_24899=d::String(u"─");d::put(_n_array_24897,_n_index_24898,_n_value_24899);return _n_value_24899;})());
}}
{double _n_c_24841=_n_B_24787;
for(;d::truth((_n_c_24841<(this->_n_cols_24797-2.0)));(void)((_n_c_24841++))){d::check_cancel();(void)(([&](){auto&& _n_array_24900=d::at(this->_n_base_24805,this->_n_r0_24806);auto _n_index_24901=_n_c_24841;auto _n_value_24902=d::String(u"─");d::put(_n_array_24900,_n_index_24901,_n_value_24902);return _n_value_24902;})());
}}
(void)(d::at(this->_n_base_24805,12.0).fill(d::String(u"▀")));
{double _n_c_24842=2.0;
for(;d::truth((_n_c_24842<(this->_n_cols_24797-2.0)));(void)((_n_c_24842++))){d::check_cancel();(void)(([&](){auto&& _n_array_24903=d::at(this->_n_base_24805,13.0);auto _n_index_24904=_n_c_24842;auto _n_value_24905=(d::truth((_n_c_24842==2.0))?d::String(u"\\"):(d::truth((_n_c_24842==(this->_n_cols_24797-3.0)))?d::String(u"/"):d::String(u"_")));d::put(_n_array_24903,_n_index_24904,_n_value_24905);return _n_value_24905;})());
}}
this->_n_y_24807=d::Array<double,true>(size_t(this->_n_cols_24797));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24865> _a1) mutable ->d::String{double _n_time_24843=_a0;
{
double _n_t_24844=(_n_T0_24793+_n_time_24843);
double _n_k_24845=std::floor((_n_t_24844/_n_CYCLE_24790));
double _n_s_24846=(_n_t_24844-(_n_k_24845*_n_CYCLE_24790));
std::shared_ptr<_n_Record_24802> _n_pk_24847=this->_n_pluck_24801(_n_k_24845);
std::shared_ptr<_n_Record_24802> _n_prev_24848=this->_n_pluck_24801((_n_k_24845-1.0));
bool _n_up_24849=(_n_pk_24847->_p_h>0.0);
double _n_held_24850=(_n_DOWN_24791+_n_PULL_24792);
(void)(this->_n_ring_24803(this->_n_y_24807,(d::truth((_n_s_24846<_n_held_24850))?_n_prev_24848:_n_pk_24847),(d::truth((_n_s_24846<_n_held_24850))?((_n_s_24846+_n_CYCLE_24790)-_n_held_24850):(_n_s_24846-_n_held_24850))));
double _n_fc_24851=_n_pk_24847->_p_col;
double _n_under_24852=(d::truth(_n_up_24849)?1.0:0.0);
double _n_tip_24853=(-d::number(1.0));
if(d::truth((_n_s_24846<_n_DOWN_24791))){d::check_cancel();(void)((_n_tip_24853=([&](){auto _n_left_24906=(std::floor((_n_R0_24785-d::at(this->_n_y_24807,_n_fc_24851)))+_n_under_24852);auto _n_right_24907=d::round((10.0*(1.0-_n_ease_24796((_n_s_24846/_n_DOWN_24791)))));return (_n_left_24906-_n_right_24907);})()));
}else {d::check_cancel();if(d::truth((_n_s_24846<_n_held_24850))){d::check_cancel();double _n_w_24854=_n_ease_24796(((_n_s_24846-_n_DOWN_24791)/_n_PULL_24792));
{double _n_c_24855=0.0;
for(;d::truth((_n_c_24855<this->_n_cols_24797));(void)((_n_c_24855++))){d::check_cancel();(void)(([&](){auto&& _n_array_24908=this->_n_y_24807;auto _n_index_24909=_n_c_24855;auto _n_value_24910=(((1.0-_n_w_24854)*d::at(this->_n_y_24807,_n_c_24855))+(_n_w_24854*this->_n_tri_24804(_n_c_24855,_n_pk_24847)));d::put(_n_array_24908,_n_index_24909,_n_value_24910);return _n_value_24910;})());
}}
(void)((_n_tip_24853=(std::floor((_n_R0_24785-d::at(this->_n_y_24807,_n_fc_24851)))+_n_under_24852)));
}else {d::check_cancel();if(d::truth((_n_s_24846<(_n_held_24850+0.4)))){d::check_cancel();double _n_d_24856=(_n_s_24846-_n_held_24850);
(void)((_n_tip_24853=([&](){auto _n_left_24911=(std::floor((_n_R0_24785-_n_pk_24847->_p_h))+_n_under_24852);auto _n_right_24912=d::round(((25.0*_n_d_24856)+((40.0*_n_d_24856)*_n_d_24856)));return (_n_left_24911-_n_right_24912);})()));
}
}
}
d::Array<d::Array<d::String,false>,false> _n_g_24857=d::map(this->_n_base_24805,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_24858=_a0;
return _n_row_24858.slice();});
{double _n_c_24859=_n_A_24786;
for(;d::truth((_n_c_24859<_n_B_24787));(void)((_n_c_24859++))){d::check_cancel();double _n_row_24860=(_n_R0_24785-d::at(this->_n_y_24807,_n_c_24859));
double _n_r_24861=std::floor(_n_row_24860);
double _n_slope_24862=(([&](){auto _n_left_24913=d::at(this->_n_y_24807,d::minimum({(this->_n_cols_24797-1.0),(_n_c_24859+1.0)}));auto _n_right_24914=d::at(this->_n_y_24807,d::maximum({0.0,(_n_c_24859-1.0)}));return (_n_left_24913-_n_right_24914);})()/2.0);
(void)(([&](){auto&& _n_array_24915=d::at(_n_g_24857,_n_r_24861);auto _n_index_24916=_n_c_24859;auto _n_value_24917=(d::truth((std::fabs(_n_slope_24862)>0.55))?(d::truth((_n_slope_24862>0.0))?d::String(u"/"):d::String(u"\\")):d::at(_n_LINE_24794,([&](){auto _n_argument_24918=2.0;auto _n_argument_24919=std::floor(((_n_row_24860-_n_r_24861)*3.0));return d::minimum({_n_argument_24918,_n_argument_24919});})()));d::put(_n_array_24915,_n_index_24916,_n_value_24917);return _n_value_24917;})());
}}
if(d::truth((_n_tip_24853>=0.0))){d::check_cancel();{double _n_r_24863=0.0;
for(;d::truth((_n_r_24863<_n_tip_24853));(void)((_n_r_24863++))){d::check_cancel();(void)(((([&](){auto&& _n_array_24920=d::at(_n_g_24857,_n_r_24863);auto _n_index_24921=(_n_fc_24851-1.0);auto _n_value_24922=d::String(u"│");d::put(_n_array_24920,_n_index_24921,_n_value_24922);return _n_value_24922;})(),([&](){auto&& _n_array_24923=d::at(_n_g_24857,_n_r_24863);auto _n_index_24924=_n_fc_24851;auto _n_value_24925=d::String(u" ");d::put(_n_array_24923,_n_index_24924,_n_value_24925);return _n_value_24925;})()),([&](){auto&& _n_array_24926=d::at(_n_g_24857,_n_r_24863);auto _n_index_24927=(_n_fc_24851+1.0);auto _n_value_24928=d::String(u"│");d::put(_n_array_24926,_n_index_24927,_n_value_24928);return _n_value_24928;})()));
}}
(void)(([&](){auto&& _n_array_24929=d::at(_n_g_24857,_n_tip_24853);auto _n_index_24930=(_n_fc_24851-1.0);auto _n_value_24931=d::String(u"╰");d::put(_n_array_24929,_n_index_24930,_n_value_24931);return _n_value_24931;})());
(void)(([&](){auto&& _n_array_24932=d::at(_n_g_24857,_n_tip_24853);auto _n_index_24933=_n_fc_24851;auto _n_value_24934=d::String(u"─");d::put(_n_array_24932,_n_index_24933,_n_value_24934);return _n_value_24934;})());
(void)(([&](){auto&& _n_array_24935=d::at(_n_g_24857,_n_tip_24853);auto _n_index_24936=(_n_fc_24851+1.0);auto _n_value_24937=d::String(u"╯");d::put(_n_array_24935,_n_index_24936,_n_value_24937);return _n_value_24937;})());
}
return d::join(d::map(_n_g_24857,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_24864=_a0;
return d::join(_n_row_24864,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("plucked-string").cols)*ascii::catalog_meta("plucked-string").rows);auto _env=std::make_shared<_n_Record_24865>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &plucked_string_meta(){return catalog_meta("plucked-string");}
std::unique_ptr<Piece> make_plucked_string(const AsciiPieceOptions &o){return std::make_unique<Native_plucked_string>(o);}
}
