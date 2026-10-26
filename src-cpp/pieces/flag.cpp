// Direct, statically typed C++ from src/pieces/flag.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10556;
struct _n_Record_10557;
struct _n_Record_10617;
struct _n_Record_10618;
struct _n_Record_10556{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_10557> _p_options{};
static std::shared_ptr<_n_Record_10556> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10556>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_10557>>(j["options"]);return out;}
};
struct _n_Record_10557{
double _p_stripes{};
static std::shared_ptr<_n_Record_10557> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10557>();out->_p_stripes=d::decode<double>(j["stripes"]);return out;}
};
struct _n_Record_10617{
std::optional<double> _p_stripes{};
static std::shared_ptr<_n_Record_10617> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10617>();out->_p_stripes=d::decode<std::optional<double>>(j["stripes"]);return out;}
};
struct _n_Record_10618{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10618> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10618>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_10556> _n_meta_10555=[](){return ([&](){auto _n_object_10623=std::make_shared<_n_Record_10556>();_n_object_10623->_p_name=d::String(u"flag");_n_object_10623->_p_category=d::String(u"physics");_n_object_10623->_p_note=d::String(u"a striped flag rippling on a pole, folds catching the light");_n_object_10623->_p_cols=62.0;_n_object_10623->_p_rows=21.0;_n_object_10623->_p_fps=30.0;_n_object_10623->_p_options=([&](){auto _n_object_10625=std::make_shared<_n_Record_10557>();_n_object_10625->_p_stripes=5.0;return _n_object_10625;})();return _n_object_10623;})();}();
const d::String _n_RAMP_10558=[](){return d::String(u" .:-=+*#%@");}();
const d::String _n_RISE_10559=[](){return d::String(u"▁▂▃▄▅▆▇");}();
const double _n_LOOP_10560=[](){return 12.0;}();
const double _n_WAVES_10561=[](){return 2.3;}();
const double _n_RATE_10562=[](){return (17.0/_n_LOOP_10560);}();
const double _n_SKEW_10563=[](){return 1.4;}();
const double _n_LONG_10564=[](){return 29.0;}();
const double _n_HIGH_10565=[](){return 13.0;}();
const double _n_SWING_10566=[](){return 4.0;}();
const double _n_STRIPS_10567=[](){return 300.0;}();

struct Native_flag final:ascii::Piece{
double _n_stripes_10568{};
double _n_cols_10569{};
double _n_rows_10570{};
double _n_POLE_10571{};
double _n_TOP_10572{};
double _n_bands_10573{};
d::Array<double,true> _n_xs_10574{};
d::Array<float,true> _n_lit_10575{};
d::Array<uint16_t,true> _n_hits_10576{};
d::Array<uint16_t,true> _n_odd_10577{};
d::Array<float,true> _n_cover_10578{};
d::Array<d::String,false> _n_out_10579{};
std::function<d::String(double,std::shared_ptr<_n_Record_10618>)> _render;

explicit Native_flag(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10626=d::decode<std::shared_ptr<_n_Record_10617>>(_options.data);
this->_n_stripes_10568=(d::present(_n_binding_10626->_p_stripes)?d::read(_n_binding_10626->_p_stripes):5.0);
auto _n_binding_10627=_n_meta_10555;
this->_n_cols_10569=_n_binding_10627->_p_cols;
this->_n_rows_10570=_n_binding_10627->_p_rows;
this->_n_POLE_10571=4.0;
this->_n_TOP_10572=2.5;
this->_n_bands_10573=([&](){auto _n_argument_10628=2.0;auto _n_argument_10629=d::round(this->_n_stripes_10568);return d::maximum({_n_argument_10628,_n_argument_10629});})();
this->_n_xs_10574=d::Array<double,true>(size_t(((_n_STRIPS_10567+1.0)*this->_n_rows_10570)));
this->_n_lit_10575=d::Array<float,true>(size_t((this->_n_cols_10569*this->_n_rows_10570)));
this->_n_hits_10576=d::Array<uint16_t,true>(size_t((this->_n_cols_10569*this->_n_rows_10570)));
this->_n_odd_10577=d::Array<uint16_t,true>(size_t((this->_n_cols_10569*this->_n_rows_10570)));
this->_n_cover_10578=d::Array<float,true>(size_t((this->_n_cols_10569*this->_n_rows_10570)));
this->_n_out_10579=d::Array<d::String,false>(size_t((this->_n_cols_10569*this->_n_rows_10570)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_10618> _a1) mutable ->d::String{double _n_t_10581=_a0;
auto _n_binding_10632=(d::present(_a1)?_a1:([&](){auto _n_object_10631=std::make_shared<_n_Record_10618>();return _n_object_10631;})());
bool _n_paper_10582=(d::present(_n_binding_10632->_p_paper)?d::read(_n_binding_10632->_p_paper):false);
{
double _n_gust_10583=(0.85+(0.15*std::sin((((2.0*ascii::PI)*_n_t_10581)/_n_LOOP_10560))));
auto _n_ph_10584=[&]( double _a0,double _a1) mutable ->double{double _n_u_10585=_a0;
double _n_v_10586=_a1;
return (((2.0*ascii::PI)*((_n_WAVES_10561*_n_u_10585)-(_n_RATE_10562*_n_t_10581)))-(_n_SKEW_10563*_n_v_10586));};
auto _n_z_10587=[&]( double _a0,double _a1) mutable ->double{double _n_u_10588=_a0;
double _n_v_10589=_a1;
return (((_n_gust_10583*_n_SWING_10566)*_n_u_10588)*std::sin(_n_ph_10584(_n_u_10588,_n_v_10589)));};
auto _n_dz_10590=[&]( double _a0,double _a1) mutable ->double{double _n_u_10591=_a0;
double _n_v_10592=_a1;
return (((_n_gust_10583*_n_SWING_10566)*([&](){auto _n_left_10633=std::sin(_n_ph_10584(_n_u_10591,_n_v_10592));auto _n_right_10634=((((_n_u_10591*2.0)*ascii::PI)*_n_WAVES_10561)*std::cos(_n_ph_10584(_n_u_10591,_n_v_10592)));return (_n_left_10633+_n_right_10634);})())/_n_LONG_10564);};
{double _n_r_10593=0.0;
for(;d::truth((_n_r_10593<this->_n_rows_10570));(void)((_n_r_10593++))){d::check_cancel();double _n_v_10594=([&](){auto _n_argument_10635=1.0;auto _n_argument_10636=d::maximum({0.0,(((_n_r_10593+0.5)-this->_n_TOP_10572)/_n_HIGH_10565)});return d::minimum({_n_argument_10635,_n_argument_10636});})();
(void)(([&](){auto&& _n_array_10637=this->_n_xs_10574;auto _n_index_10638=_n_r_10593;auto _n_value_10639=(this->_n_POLE_10571+1.0);d::put(_n_array_10637,_n_index_10638,_n_value_10639);return _n_value_10639;})());
{double _n_i_10595=1.0;
for(;d::truth((_n_i_10595<=_n_STRIPS_10567));(void)((_n_i_10595++))){d::check_cancel();double _n_w_10596=(((2.0*_n_LONG_10564)/_n_STRIPS_10567)/([&](){auto _n_argument_10640=1.0;auto _n_argument_10641=_n_dz_10590(((_n_i_10595-0.5)/_n_STRIPS_10567),_n_v_10594);return d::hypot(std::initializer_list<double>{_n_argument_10640,_n_argument_10641});})());
(void)(([&](){auto&& _n_array_10642=this->_n_xs_10574;auto _n_index_10643=((_n_i_10595*this->_n_rows_10570)+_n_r_10593);auto _n_value_10644=(d::at(this->_n_xs_10574,(((_n_i_10595-1.0)*this->_n_rows_10570)+_n_r_10593))+_n_w_10596);d::put(_n_array_10642,_n_index_10643,_n_value_10644);return _n_value_10644;})());
}}
}}
(void)((((this->_n_lit_10575.fill(0.0),this->_n_hits_10576.fill(0.0)),this->_n_odd_10577.fill(0.0)),this->_n_cover_10578.fill(0.0)));
{double _n_i_10597=0.0;
for(;d::truth((_n_i_10597<=_n_STRIPS_10567));(void)((_n_i_10597++))){d::check_cancel();double _n_u_10598=(_n_i_10597/_n_STRIPS_10567);
double _n_zm_10599=_n_z_10587(_n_u_10598,0.5);
double _n_h_10600=((_n_HIGH_10565*(1.0+(0.04*_n_zm_10599)))-(0.8*_n_u_10598));
double _n_top_10601=(((this->_n_TOP_10572+((1.2*_n_u_10598)*_n_u_10598))+(((0.8*_n_u_10598)*_n_gust_10583)*std::sin((_n_ph_10584(_n_u_10598,0.5)+0.8))))-((_n_h_10600-_n_HIGH_10565)/2.0));
{double _n_r_10602=([&](){auto _n_argument_10645=0.0;auto _n_argument_10646=std::floor(_n_top_10601);return d::maximum({_n_argument_10645,_n_argument_10646});})();
for(;d::truth((_n_r_10602<d::minimum({this->_n_rows_10570,(_n_top_10601+_n_h_10600)})));(void)((_n_r_10602++))){d::check_cancel();double _n_c_10603=std::floor(d::at(this->_n_xs_10574,((_n_i_10597*this->_n_rows_10570)+_n_r_10602)));
if(d::truth((_n_c_10603>=this->_n_cols_10569))){d::check_cancel();continue;
}
double _n_k_10604=((_n_r_10602*this->_n_cols_10569)+_n_c_10603);
double _n_v_10605=([&](){auto _n_argument_10647=1.0;auto _n_argument_10648=d::maximum({0.0,(((_n_r_10602+0.5)-_n_top_10601)/_n_h_10600)});return d::minimum({_n_argument_10647,_n_argument_10648});})();
double _n_s_10606=_n_dz_10590(_n_u_10598,_n_v_10605);
(void)(([&](){auto&& _n_array_10649=this->_n_lit_10575;auto _n_index_10650=_n_k_10604;auto _n_value_10651=(d::at(_n_array_10649,_n_index_10650)+([&](){auto _n_argument_10652=0.0;auto _n_argument_10653=([&](){auto _n_argument_10654=1.0;auto _n_argument_10655=((((0.95*_n_s_10606)+0.65)/d::hypot(std::initializer_list<double>{1.0,_n_s_10606}))+0.1);return d::minimum({_n_argument_10654,_n_argument_10655});})();return d::maximum({_n_argument_10652,_n_argument_10653});})());d::put(_n_array_10649,_n_index_10650,_n_value_10651);return _n_value_10651;})());
(void)(([&](){auto&& _n_array_10656=this->_n_hits_10576;auto _n_index_10657=_n_k_10604;double _n_old_10658=d::number(d::at(_n_array_10656,_n_index_10657));d::put(_n_array_10656,_n_index_10657,_n_old_10658+(1.0));return _n_old_10658;})());
(void)(([&](){auto&& _n_array_10659=this->_n_odd_10577;auto _n_index_10660=_n_k_10604;auto _n_value_10661=(d::at(_n_array_10659,_n_index_10660)+d::mod(std::floor(((_n_v_10605*this->_n_bands_10573)*0.9999)),2.0));d::put(_n_array_10659,_n_index_10660,_n_value_10661);return _n_value_10661;})());
(void)(([&](){auto&& _n_array_10662=this->_n_cover_10578;auto _n_index_10663=_n_k_10604;auto _n_value_10664=([&](){auto _n_argument_10665=d::at(this->_n_cover_10578,_n_k_10604);auto _n_argument_10666=([&](){auto _n_left_10667=d::minimum({(_n_r_10602+1.0),(_n_top_10601+_n_h_10600)});auto _n_right_10668=d::maximum({_n_r_10602,_n_top_10601});return (_n_left_10667-_n_right_10668);})();return d::maximum({_n_argument_10665,_n_argument_10666});})();d::put(_n_array_10662,_n_index_10663,_n_value_10664);return _n_value_10664;})());
}}
}}
(void)(this->_n_out_10579.fill(d::String(u" ")));
{double _n_k_10607=0.0;
for(;d::truth((_n_k_10607<(this->_n_cols_10569*this->_n_rows_10570)));(void)((_n_k_10607++))){d::check_cancel();if(d::truth((!d::truth(d::at(this->_n_hits_10576,_n_k_10607))))){d::check_cancel();continue;
}
double _n_f_10608=d::at(this->_n_cover_10578,_n_k_10607);
bool _n_below_10609=([&]()->bool{auto _n_logical_10669=((_n_k_10607+this->_n_cols_10569)<(this->_n_cols_10569*this->_n_rows_10570));return d::truth(_n_logical_10669)?(d::at(this->_n_cover_10578,(_n_k_10607+this->_n_cols_10569))>0.94):_n_logical_10669;})();
if((d::truth((_n_f_10608<0.8))&&d::truth(_n_below_10609))){d::check_cancel();(void)(([&](){auto&& _n_array_10670=this->_n_out_10579;auto _n_index_10671=_n_k_10607;auto _n_value_10672=d::at(_n_RISE_10559,([&](){auto _n_argument_10673=6.0;auto _n_argument_10674=std::floor((_n_f_10608*8.0));return d::minimum({_n_argument_10673,_n_argument_10674});})());d::put(_n_array_10670,_n_index_10671,_n_value_10672);return _n_value_10672;})());
continue;
}
if((d::truth((_n_f_10608<0.7))&&d::truth((!d::truth(_n_below_10609))))){d::check_cancel();(void)(([&](){auto&& _n_array_10675=this->_n_out_10579;auto _n_index_10676=_n_k_10607;auto _n_value_10677=(d::truth((_n_f_10608<0.3))?d::String(u"▔"):d::String(u"▀"));d::put(_n_array_10675,_n_index_10676,_n_value_10677);return _n_value_10677;})());
continue;
}
double _n_l_10610=(d::at(this->_n_lit_10575,_n_k_10607)/d::at(this->_n_hits_10576,_n_k_10607));
double _n_b_10611=(d::truth(((d::at(this->_n_odd_10577,_n_k_10607)*2.0)>d::at(this->_n_hits_10576,_n_k_10607)))?(0.1+(0.34*_n_l_10610)):(0.52+(0.48*_n_l_10610)));
double _n_g_10612=([&](){auto _n_argument_10678=1.0;auto _n_argument_10679=([&](){auto _n_argument_10680=9.0;auto _n_argument_10681=d::round((_n_b_10611*9.0));return d::minimum({_n_argument_10680,_n_argument_10681});})();return d::maximum({_n_argument_10678,_n_argument_10679});})();
(void)(([&](){auto&& _n_array_10682=this->_n_out_10579;auto _n_index_10683=_n_k_10607;auto _n_value_10684=d::at(_n_RAMP_10558,(d::truth(_n_paper_10582)?(10.0-_n_g_10612):_n_g_10612));d::put(_n_array_10682,_n_index_10683,_n_value_10684);return _n_value_10684;})());
}}
(void)(([&](){auto&& _n_array_10685=this->_n_out_10579;auto _n_index_10686=((std::floor((this->_n_TOP_10572-1.0))*this->_n_cols_10569)+this->_n_POLE_10571);auto _n_value_10687=d::String(u"o");d::put(_n_array_10685,_n_index_10686,_n_value_10687);return _n_value_10687;})());
{double _n_r_10613=std::floor(this->_n_TOP_10572);
for(;d::truth((_n_r_10613<(this->_n_rows_10570-1.0)));(void)((_n_r_10613++))){d::check_cancel();(void)(([&](){auto&& _n_array_10688=this->_n_out_10579;auto _n_index_10689=((_n_r_10613*this->_n_cols_10569)+this->_n_POLE_10571);auto _n_value_10690=d::String(u"┃");d::put(_n_array_10688,_n_index_10689,_n_value_10690);return _n_value_10690;})());
}}
{double _n_c_10614=(this->_n_POLE_10571-3.0);
for(;d::truth((_n_c_10614<=(this->_n_POLE_10571+3.0)));(void)((_n_c_10614++))){d::check_cancel();(void)(([&](){auto&& _n_array_10691=this->_n_out_10579;auto _n_index_10692=(((this->_n_rows_10570-1.0)*this->_n_cols_10569)+_n_c_10614);auto _n_value_10693=(d::truth((_n_c_10614==this->_n_POLE_10571))?d::String(u"┸"):d::String(u"▁"));d::put(_n_array_10691,_n_index_10692,_n_value_10693);return _n_value_10693;})());
}}
d::Array<d::String,false> _n_lines_10615=d::Array<d::String,false>{};
{double _n_r_10616=0.0;
for(;d::truth((_n_r_10616<this->_n_rows_10570));(void)((_n_r_10616++))){d::check_cancel();(void)(_n_lines_10615.push(d::join(this->_n_out_10579.slice((_n_r_10616*this->_n_cols_10569),((_n_r_10616+1.0)*this->_n_cols_10569)),d::String(u""))));
}}
return d::join(_n_lines_10615,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("flag").cols)*ascii::catalog_meta("flag").rows);auto _env=std::make_shared<_n_Record_10618>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &flag_meta(){return catalog_meta("flag");}
std::unique_ptr<Piece> make_flag(const AsciiPieceOptions &o){return std::make_unique<Native_flag>(o);}
}
