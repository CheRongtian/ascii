// Direct, statically typed C++ from src/pieces/flag.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10557;
struct _n_Record_10558;
struct _n_Record_10618;
struct _n_Record_10619;
struct _n_Record_10557{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_10558> _p_options{};
static std::shared_ptr<_n_Record_10557> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10557>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_10558>>(j["options"]);return out;}
};
struct _n_Record_10558{
double _p_stripes{};
static std::shared_ptr<_n_Record_10558> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10558>();out->_p_stripes=d::decode<double>(j["stripes"]);return out;}
};
struct _n_Record_10618{
std::optional<double> _p_stripes{};
static std::shared_ptr<_n_Record_10618> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10618>();out->_p_stripes=d::decode<std::optional<double>>(j["stripes"]);return out;}
};
struct _n_Record_10619{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10619> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10619>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_10557> _n_meta_10556=[](){return ([&](){auto _n_object_10624=std::make_shared<_n_Record_10557>();_n_object_10624->_p_name=d::String(u"flag");_n_object_10624->_p_category=d::String(u"physics");_n_object_10624->_p_note=d::String(u"a striped flag rippling on a pole, folds catching the light");_n_object_10624->_p_cols=62.0;_n_object_10624->_p_rows=21.0;_n_object_10624->_p_fps=30.0;_n_object_10624->_p_options=([&](){auto _n_object_10626=std::make_shared<_n_Record_10558>();_n_object_10626->_p_stripes=5.0;return _n_object_10626;})();return _n_object_10624;})();}();
const d::String _n_RAMP_10559=[](){return d::String(u" .:-=+*#%@");}();
const d::String _n_RISE_10560=[](){return d::String(u"▁▂▃▄▅▆▇");}();
const double _n_LOOP_10561=[](){return 12.0;}();
const double _n_WAVES_10562=[](){return 2.3;}();
const double _n_RATE_10563=[](){return (17.0/_n_LOOP_10561);}();
const double _n_SKEW_10564=[](){return 1.4;}();
const double _n_LONG_10565=[](){return 29.0;}();
const double _n_HIGH_10566=[](){return 13.0;}();
const double _n_SWING_10567=[](){return 4.0;}();
const double _n_STRIPS_10568=[](){return 300.0;}();

struct Native_flag final:ascii::Piece{
double _n_stripes_10569{};
double _n_cols_10570{};
double _n_rows_10571{};
double _n_POLE_10572{};
double _n_TOP_10573{};
double _n_bands_10574{};
d::Array<double,true> _n_xs_10575{};
d::Array<float,true> _n_lit_10576{};
d::Array<uint16_t,true> _n_hits_10577{};
d::Array<uint16_t,true> _n_odd_10578{};
d::Array<float,true> _n_cover_10579{};
d::Array<d::String,false> _n_out_10580{};
std::function<d::String(double,std::shared_ptr<_n_Record_10619>)> _render;

explicit Native_flag(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10627=d::decode<std::shared_ptr<_n_Record_10618>>(_options.data);
this->_n_stripes_10569=(d::present(_n_binding_10627->_p_stripes)?d::read(_n_binding_10627->_p_stripes):5.0);
auto _n_binding_10628=_n_meta_10556;
this->_n_cols_10570=_n_binding_10628->_p_cols;
this->_n_rows_10571=_n_binding_10628->_p_rows;
this->_n_POLE_10572=4.0;
this->_n_TOP_10573=2.5;
this->_n_bands_10574=([&](){auto _n_argument_10629=2.0;auto _n_argument_10630=d::round(this->_n_stripes_10569);return d::maximum({_n_argument_10629,_n_argument_10630});})();
this->_n_xs_10575=d::Array<double,true>(size_t(((_n_STRIPS_10568+1.0)*this->_n_rows_10571)));
this->_n_lit_10576=d::Array<float,true>(size_t((this->_n_cols_10570*this->_n_rows_10571)));
this->_n_hits_10577=d::Array<uint16_t,true>(size_t((this->_n_cols_10570*this->_n_rows_10571)));
this->_n_odd_10578=d::Array<uint16_t,true>(size_t((this->_n_cols_10570*this->_n_rows_10571)));
this->_n_cover_10579=d::Array<float,true>(size_t((this->_n_cols_10570*this->_n_rows_10571)));
this->_n_out_10580=d::Array<d::String,false>(size_t((this->_n_cols_10570*this->_n_rows_10571)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_10619> _a1) mutable ->d::String{double _n_t_10582=_a0;
auto _n_binding_10633=(d::present(_a1)?_a1:([&](){auto _n_object_10632=std::make_shared<_n_Record_10619>();return _n_object_10632;})());
bool _n_paper_10583=(d::present(_n_binding_10633->_p_paper)?d::read(_n_binding_10633->_p_paper):false);
{
double _n_gust_10584=(0.85+(0.15*std::sin((((2.0*ascii::PI)*_n_t_10582)/_n_LOOP_10561))));
auto _n_ph_10585=[&]( double _a0,double _a1) mutable ->double{double _n_u_10586=_a0;
double _n_v_10587=_a1;
return (((2.0*ascii::PI)*((_n_WAVES_10562*_n_u_10586)-(_n_RATE_10563*_n_t_10582)))-(_n_SKEW_10564*_n_v_10587));};
auto _n_z_10588=[&]( double _a0,double _a1) mutable ->double{double _n_u_10589=_a0;
double _n_v_10590=_a1;
return (((_n_gust_10584*_n_SWING_10567)*_n_u_10589)*std::sin(_n_ph_10585(_n_u_10589,_n_v_10590)));};
auto _n_dz_10591=[&]( double _a0,double _a1) mutable ->double{double _n_u_10592=_a0;
double _n_v_10593=_a1;
return (((_n_gust_10584*_n_SWING_10567)*([&](){auto _n_left_10634=std::sin(_n_ph_10585(_n_u_10592,_n_v_10593));auto _n_right_10635=((((_n_u_10592*2.0)*ascii::PI)*_n_WAVES_10562)*std::cos(_n_ph_10585(_n_u_10592,_n_v_10593)));return (_n_left_10634+_n_right_10635);})())/_n_LONG_10565);};
{double _n_r_10594=0.0;
for(;d::truth((_n_r_10594<this->_n_rows_10571));(void)((_n_r_10594++))){d::check_cancel();double _n_v_10595=([&](){auto _n_argument_10636=1.0;auto _n_argument_10637=d::maximum({0.0,(((_n_r_10594+0.5)-this->_n_TOP_10573)/_n_HIGH_10566)});return d::minimum({_n_argument_10636,_n_argument_10637});})();
(void)(([&](){auto&& _n_array_10638=this->_n_xs_10575;auto _n_index_10639=_n_r_10594;auto _n_value_10640=(this->_n_POLE_10572+1.0);d::put(_n_array_10638,_n_index_10639,_n_value_10640);return _n_value_10640;})());
{double _n_i_10596=1.0;
for(;d::truth((_n_i_10596<=_n_STRIPS_10568));(void)((_n_i_10596++))){d::check_cancel();double _n_w_10597=(((2.0*_n_LONG_10565)/_n_STRIPS_10568)/([&](){auto _n_argument_10641=1.0;auto _n_argument_10642=_n_dz_10591(((_n_i_10596-0.5)/_n_STRIPS_10568),_n_v_10595);return d::hypot(std::initializer_list<double>{_n_argument_10641,_n_argument_10642});})());
(void)(([&](){auto&& _n_array_10643=this->_n_xs_10575;auto _n_index_10644=((_n_i_10596*this->_n_rows_10571)+_n_r_10594);auto _n_value_10645=(d::at(this->_n_xs_10575,(((_n_i_10596-1.0)*this->_n_rows_10571)+_n_r_10594))+_n_w_10597);d::put(_n_array_10643,_n_index_10644,_n_value_10645);return _n_value_10645;})());
}}
}}
(void)((((this->_n_lit_10576.fill(0.0),this->_n_hits_10577.fill(0.0)),this->_n_odd_10578.fill(0.0)),this->_n_cover_10579.fill(0.0)));
{double _n_i_10598=0.0;
for(;d::truth((_n_i_10598<=_n_STRIPS_10568));(void)((_n_i_10598++))){d::check_cancel();double _n_u_10599=(_n_i_10598/_n_STRIPS_10568);
double _n_zm_10600=_n_z_10588(_n_u_10599,0.5);
double _n_h_10601=((_n_HIGH_10566*(1.0+(0.04*_n_zm_10600)))-(0.8*_n_u_10599));
double _n_top_10602=(((this->_n_TOP_10573+((1.2*_n_u_10599)*_n_u_10599))+(((0.8*_n_u_10599)*_n_gust_10584)*std::sin((_n_ph_10585(_n_u_10599,0.5)+0.8))))-((_n_h_10601-_n_HIGH_10566)/2.0));
{double _n_r_10603=([&](){auto _n_argument_10646=0.0;auto _n_argument_10647=std::floor(_n_top_10602);return d::maximum({_n_argument_10646,_n_argument_10647});})();
for(;d::truth((_n_r_10603<d::minimum({this->_n_rows_10571,(_n_top_10602+_n_h_10601)})));(void)((_n_r_10603++))){d::check_cancel();double _n_c_10604=std::floor(d::at(this->_n_xs_10575,((_n_i_10598*this->_n_rows_10571)+_n_r_10603)));
if(d::truth((_n_c_10604>=this->_n_cols_10570))){d::check_cancel();continue;
}
double _n_k_10605=((_n_r_10603*this->_n_cols_10570)+_n_c_10604);
double _n_v_10606=([&](){auto _n_argument_10648=1.0;auto _n_argument_10649=d::maximum({0.0,(((_n_r_10603+0.5)-_n_top_10602)/_n_h_10601)});return d::minimum({_n_argument_10648,_n_argument_10649});})();
double _n_s_10607=_n_dz_10591(_n_u_10599,_n_v_10606);
(void)(([&](){auto&& _n_array_10650=this->_n_lit_10576;auto _n_index_10651=_n_k_10605;auto _n_value_10652=(d::at(_n_array_10650,_n_index_10651)+([&](){auto _n_argument_10653=0.0;auto _n_argument_10654=([&](){auto _n_argument_10655=1.0;auto _n_argument_10656=((((0.95*_n_s_10607)+0.65)/d::hypot(std::initializer_list<double>{1.0,_n_s_10607}))+0.1);return d::minimum({_n_argument_10655,_n_argument_10656});})();return d::maximum({_n_argument_10653,_n_argument_10654});})());d::put(_n_array_10650,_n_index_10651,_n_value_10652);return _n_value_10652;})());
(void)(([&](){auto&& _n_array_10657=this->_n_hits_10577;auto _n_index_10658=_n_k_10605;double _n_old_10659=d::number(d::at(_n_array_10657,_n_index_10658));d::put(_n_array_10657,_n_index_10658,_n_old_10659+(1.0));return _n_old_10659;})());
(void)(([&](){auto&& _n_array_10660=this->_n_odd_10578;auto _n_index_10661=_n_k_10605;auto _n_value_10662=(d::at(_n_array_10660,_n_index_10661)+d::mod(std::floor(((_n_v_10606*this->_n_bands_10574)*0.9999)),2.0));d::put(_n_array_10660,_n_index_10661,_n_value_10662);return _n_value_10662;})());
(void)(([&](){auto&& _n_array_10663=this->_n_cover_10579;auto _n_index_10664=_n_k_10605;auto _n_value_10665=([&](){auto _n_argument_10666=d::at(this->_n_cover_10579,_n_k_10605);auto _n_argument_10667=([&](){auto _n_left_10668=d::minimum({(_n_r_10603+1.0),(_n_top_10602+_n_h_10601)});auto _n_right_10669=d::maximum({_n_r_10603,_n_top_10602});return (_n_left_10668-_n_right_10669);})();return d::maximum({_n_argument_10666,_n_argument_10667});})();d::put(_n_array_10663,_n_index_10664,_n_value_10665);return _n_value_10665;})());
}}
}}
(void)(this->_n_out_10580.fill(d::String(u" ")));
{double _n_k_10608=0.0;
for(;d::truth((_n_k_10608<(this->_n_cols_10570*this->_n_rows_10571)));(void)((_n_k_10608++))){d::check_cancel();if(d::truth((!d::truth(d::at(this->_n_hits_10577,_n_k_10608))))){d::check_cancel();continue;
}
double _n_f_10609=d::at(this->_n_cover_10579,_n_k_10608);
bool _n_below_10610=([&]()->bool{auto _n_logical_10670=((_n_k_10608+this->_n_cols_10570)<(this->_n_cols_10570*this->_n_rows_10571));return d::truth(_n_logical_10670)?(d::at(this->_n_cover_10579,(_n_k_10608+this->_n_cols_10570))>0.94):_n_logical_10670;})();
if((d::truth((_n_f_10609<0.8))&&d::truth(_n_below_10610))){d::check_cancel();(void)(([&](){auto&& _n_array_10671=this->_n_out_10580;auto _n_index_10672=_n_k_10608;auto _n_value_10673=d::at(_n_RISE_10560,([&](){auto _n_argument_10674=6.0;auto _n_argument_10675=std::floor((_n_f_10609*8.0));return d::minimum({_n_argument_10674,_n_argument_10675});})());d::put(_n_array_10671,_n_index_10672,_n_value_10673);return _n_value_10673;})());
continue;
}
if((d::truth((_n_f_10609<0.7))&&d::truth((!d::truth(_n_below_10610))))){d::check_cancel();(void)(([&](){auto&& _n_array_10676=this->_n_out_10580;auto _n_index_10677=_n_k_10608;auto _n_value_10678=(d::truth((_n_f_10609<0.3))?d::String(u"▔"):d::String(u"▀"));d::put(_n_array_10676,_n_index_10677,_n_value_10678);return _n_value_10678;})());
continue;
}
double _n_l_10611=(d::at(this->_n_lit_10576,_n_k_10608)/d::at(this->_n_hits_10577,_n_k_10608));
double _n_b_10612=(d::truth(((d::at(this->_n_odd_10578,_n_k_10608)*2.0)>d::at(this->_n_hits_10577,_n_k_10608)))?(0.1+(0.34*_n_l_10611)):(0.52+(0.48*_n_l_10611)));
double _n_g_10613=([&](){auto _n_argument_10679=1.0;auto _n_argument_10680=([&](){auto _n_argument_10681=9.0;auto _n_argument_10682=d::round((_n_b_10612*9.0));return d::minimum({_n_argument_10681,_n_argument_10682});})();return d::maximum({_n_argument_10679,_n_argument_10680});})();
(void)(([&](){auto&& _n_array_10683=this->_n_out_10580;auto _n_index_10684=_n_k_10608;auto _n_value_10685=d::at(_n_RAMP_10559,(d::truth(_n_paper_10583)?(10.0-_n_g_10613):_n_g_10613));d::put(_n_array_10683,_n_index_10684,_n_value_10685);return _n_value_10685;})());
}}
(void)(([&](){auto&& _n_array_10686=this->_n_out_10580;auto _n_index_10687=((std::floor((this->_n_TOP_10573-1.0))*this->_n_cols_10570)+this->_n_POLE_10572);auto _n_value_10688=d::String(u"o");d::put(_n_array_10686,_n_index_10687,_n_value_10688);return _n_value_10688;})());
{double _n_r_10614=std::floor(this->_n_TOP_10573);
for(;d::truth((_n_r_10614<(this->_n_rows_10571-1.0)));(void)((_n_r_10614++))){d::check_cancel();(void)(([&](){auto&& _n_array_10689=this->_n_out_10580;auto _n_index_10690=((_n_r_10614*this->_n_cols_10570)+this->_n_POLE_10572);auto _n_value_10691=d::String(u"┃");d::put(_n_array_10689,_n_index_10690,_n_value_10691);return _n_value_10691;})());
}}
{double _n_c_10615=(this->_n_POLE_10572-3.0);
for(;d::truth((_n_c_10615<=(this->_n_POLE_10572+3.0)));(void)((_n_c_10615++))){d::check_cancel();(void)(([&](){auto&& _n_array_10692=this->_n_out_10580;auto _n_index_10693=(((this->_n_rows_10571-1.0)*this->_n_cols_10570)+_n_c_10615);auto _n_value_10694=(d::truth((_n_c_10615==this->_n_POLE_10572))?d::String(u"┸"):d::String(u"▁"));d::put(_n_array_10692,_n_index_10693,_n_value_10694);return _n_value_10694;})());
}}
d::Array<d::String,false> _n_lines_10616=d::Array<d::String,false>{};
{double _n_r_10617=0.0;
for(;d::truth((_n_r_10617<this->_n_rows_10571));(void)((_n_r_10617++))){d::check_cancel();(void)(_n_lines_10616.push(d::join(this->_n_out_10580.slice((_n_r_10617*this->_n_cols_10570),((_n_r_10617+1.0)*this->_n_cols_10570)),d::String(u""))));
}}
return d::join(_n_lines_10616,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("flag").cols)*ascii::catalog_meta("flag").rows);auto _env=std::make_shared<_n_Record_10619>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &flag_meta(){return catalog_meta("flag");}
std::unique_ptr<Piece> make_flag(const AsciiPieceOptions &o){return std::make_unique<Native_flag>(o);}
}
