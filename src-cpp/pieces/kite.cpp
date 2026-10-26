// Direct, statically typed C++ from src/pieces/kite.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_16253;
struct _n_Record_16304;
struct _n_Record_16253{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_16253> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16253>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_16304{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_16304> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16304>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::String _n_level_16259(double _a0);
std::shared_ptr<_n_Record_16253> _n_meta_16252=[](){return ([&](){auto _n_object_16307=std::make_shared<_n_Record_16253>();_n_object_16307->_p_name=d::String(u"kite");_n_object_16307->_p_category=d::String(u"objects");_n_object_16307->_p_note=d::String(u"a diamond kite riding the wind, its string sagging in lulls");_n_object_16307->_p_cols=64.0;_n_object_16307->_p_rows=24.0;_n_object_16307->_p_fps=15.0;return _n_object_16307;})();}();
const double _n_P_16254=[](){return 40.0;}();
const double _n_TAU_16255=[](){return (ascii::PI*2.0);}();
const double _n_B_16256=[](){return 8.0;}();
const double _n_TAIL_16257=[](){return 7.0;}();
const d::String _n_FILL_16258=[](){return d::String(u":");}();
d::String _n_level_16259(double _a0){double _n_f_16264=_a0;
return (d::truth((_n_f_16264<0.3))?d::String(u"'"):(d::truth((_n_f_16264<0.55))?d::String(u"-"):(d::truth((_n_f_16264<0.78))?d::String(u"."):d::String(u"_"))));}

struct Native_kite final:ascii::Piece{
double _n_cols_16260{};
double _n_rows_16261{};
d::Array<d::Array<d::String,false>,false> _n_g_16262{};
std::function<d::String(double,std::shared_ptr<_n_Record_16304>)> _render;
void _n_put_16263(double _a0,double _a1,d::String _a2){double _n_r_16265=_a0;
double _n_c_16266=_a1;
d::String _n_ch_16267=_a2;
{
if((((d::truth((_n_r_16265>=0.0))&&d::truth((_n_r_16265<this->_n_rows_16261)))&&d::truth((_n_c_16266>=0.0)))&&d::truth((_n_c_16266<this->_n_cols_16260)))){d::check_cancel();(void)(([&](){auto&& _n_array_16322=d::at(this->_n_g_16262,_n_r_16265);auto _n_index_16323=_n_c_16266;auto _n_value_16324=_n_ch_16267;d::put(_n_array_16322,_n_index_16323,_n_value_16324);return _n_value_16324;})());
}

}
}

explicit Native_kite(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_16308=_n_meta_16252;
this->_n_cols_16260=_n_binding_16308->_p_cols;
this->_n_rows_16261=_n_binding_16308->_p_rows;
_render=[=]( double _a0,std::shared_ptr<_n_Record_16304> _a1) mutable ->d::String{double _n_t_16268=_a0;
{
(void)((this->_n_g_16262=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_16261,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_16260)).fill(d::String(u" "));}))));
double _n_ph_16269=((_n_TAU_16255*_n_t_16268)/_n_P_16254);
double _n_wind_16270=([&](){auto _n_left_16309=(0.5+(0.3*std::sin((2.0*_n_ph_16269))));auto _n_right_16310=(0.2*std::sin(((5.0*_n_ph_16269)+1.3)));return (_n_left_16309+_n_right_16310);})();
double _n_mid_16271=std::floor((45.0+(0.7*std::sin((_n_ph_16269+0.4)))));
double _n_rs_16272=std::floor((6.5+(1.4*(0.5-_n_wind_16270))));
double _n_roll_16273=([&](){auto _n_left_16311=std::sin((5.0*_n_ph_16269));auto _n_right_16312=(0.35*std::sin(((13.0*_n_ph_16269)+1.0)));return (_n_left_16311+_n_right_16312);})();
double _n_up_16274=_n_mid_16271;
double _n_lo_16275=(_n_mid_16271+(d::truth((_n_roll_16273>0.55))?(-d::number(1.0)):(d::truth((_n_roll_16273<(-d::number(0.55))))?1.0:0.0)));
{double _n_k_16276=1.0;
for(;d::truth((_n_k_16276<(_n_B_16256/2.0)));(void)((_n_k_16276++))){d::check_cancel();double _n_r_16277=(_n_rs_16272-_n_k_16276);
double _n_e_16278=(_n_B_16256-(2.0*_n_k_16276));
(void)((this->_n_put_16263(_n_r_16277,((_n_up_16274-_n_e_16278)-1.0),d::String(u",")),this->_n_put_16263(_n_r_16277,(_n_up_16274-_n_e_16278),d::String(u"'"))));
(void)((this->_n_put_16263(_n_r_16277,(_n_up_16274+_n_e_16278),d::String(u"`")),this->_n_put_16263(_n_r_16277,((_n_up_16274+_n_e_16278)+1.0),d::String(u"."))));
{double _n_c_16279=((_n_up_16274-_n_e_16278)+1.0);
for(;d::truth((_n_c_16279<_n_up_16274));(void)((_n_c_16279++))){d::check_cancel();(void)(this->_n_put_16263(_n_r_16277,_n_c_16279,_n_FILL_16258));
}}
(void)(this->_n_put_16263(_n_r_16277,_n_up_16274,d::String(u"|")));
}}
(void)(((this->_n_put_16263((_n_rs_16272-(_n_B_16256/2.0)),(_n_up_16274-1.0),d::String(u".")),this->_n_put_16263((_n_rs_16272-(_n_B_16256/2.0)),_n_up_16274,d::String(u"^"))),this->_n_put_16263((_n_rs_16272-(_n_B_16256/2.0)),(_n_up_16274+1.0),d::String(u"."))));
double _n_a0_16280=(d::minimum({_n_up_16274,_n_lo_16275})-_n_B_16256);
double _n_b0_16281=(d::maximum({_n_up_16274,_n_lo_16275})+_n_B_16256);
{double _n_c_16282=(_n_a0_16280+1.0);
for(;d::truth((_n_c_16282<_n_b0_16281));(void)((_n_c_16282++))){d::check_cancel();(void)(this->_n_put_16263(_n_rs_16272,_n_c_16282,d::String(u"-")));
}}
(void)(((this->_n_put_16263(_n_rs_16272,_n_a0_16280,d::String(u"<")),this->_n_put_16263(_n_rs_16272,_n_b0_16281,d::String(u">"))),this->_n_put_16263(_n_rs_16272,_n_up_16274,d::String(u"+"))));
{double _n_j_16283=1.0;
for(;d::truth((_n_j_16283<_n_B_16256));(void)((_n_j_16283++))){d::check_cancel();double _n_r_16284=(_n_rs_16272+_n_j_16283);
double _n_e_16285=(_n_B_16256-_n_j_16283);
(void)((this->_n_put_16263(_n_r_16284,(_n_lo_16275-_n_e_16285),d::String(u"\\")),this->_n_put_16263(_n_r_16284,(_n_lo_16275+_n_e_16285),d::String(u"/"))));
{double _n_c_16286=(_n_lo_16275+1.0);
for(;d::truth((_n_c_16286<(_n_lo_16275+_n_e_16285)));(void)((_n_c_16286++))){d::check_cancel();(void)(this->_n_put_16263(_n_r_16284,_n_c_16286,_n_FILL_16258));
}}
(void)(this->_n_put_16263(_n_r_16284,_n_lo_16275,d::String(u"|")));
}}
double _n_vr_16287=((_n_rs_16272+_n_B_16256)-1.0);
double _n_lean_16288=(0.15+(0.35*_n_wind_16270));
double _n_amp_16289=((0.35+(0.3*_n_wind_16270))/3.5);
auto _n_tx_16290=[&]( double _a0) mutable ->double{double _n_s_16291=_a0;
return (((_n_lo_16275+0.5)+(_n_lean_16288*_n_s_16291))+((_n_amp_16289*_n_s_16291)*std::sin(((2.2*_n_s_16291)-(15.0*_n_ph_16269)))));};
{double _n_r_16292=(_n_vr_16287+1.0);
for(;d::truth((_n_r_16292<d::minimum({this->_n_rows_16261,((_n_vr_16287+1.0)+_n_TAIL_16257)})));(void)((_n_r_16292++))){d::check_cancel();double _n_s_16293=((_n_r_16292-_n_vr_16287)-0.5);
double _n_slope_16294=([&](){auto _n_left_16313=_n_tx_16290((_n_s_16293+0.5));auto _n_right_16314=_n_tx_16290((_n_s_16293-0.5));return (_n_left_16313-_n_right_16314);})();
double _n_bend_16295=([&](){auto _n_left_16315=([&](){auto _n_left_16317=_n_tx_16290((_n_s_16293+0.5));auto _n_right_16318=(2.0*_n_tx_16290(_n_s_16293));return (_n_left_16317-_n_right_16318);})();auto _n_right_16316=_n_tx_16290((_n_s_16293-0.5));return (_n_left_16315+_n_right_16316);})();
double _n_c_16296=std::floor(_n_tx_16290(_n_s_16293));
(void)(this->_n_put_16263(_n_r_16292,_n_c_16296,(d::truth((_n_slope_16294>0.6))?d::String(u"\\"):(d::truth((_n_slope_16294<(-d::number(0.6))))?d::String(u"/"):(d::truth((_n_bend_16295>0.0))?d::String(u"("):d::String(u")"))))));
if(d::truth((d::mod((_n_r_16292-_n_vr_16287),3.0)==2.0))){d::check_cancel();(void)((this->_n_put_16263(_n_r_16292,(_n_c_16296-1.0),d::String(u">")),this->_n_put_16263(_n_r_16292,(_n_c_16296+1.0),d::String(u"<"))));
}
}}
d::Array<double,false> _n_hand_16297=d::Array<double,false>{(-d::number(20.0)),(this->_n_rows_16261+3.0)};
d::Array<double,false> _n_knot_16298=d::Array<double,false>{_n_a0_16280,(_n_rs_16272+0.5)};
double _n_sag_16299=(1.7-(1.1*_n_wind_16270));
{double _n_c_16300=0.0;
for(;d::truth((_n_c_16300<_n_a0_16280));(void)((_n_c_16300++))){d::check_cancel();double _n_u_16301=(((_n_c_16300+0.5)-d::at(_n_hand_16297,0.0))/(d::at(_n_knot_16298,0.0)-d::at(_n_hand_16297,0.0)));
double _n_y_16302=((d::at(_n_hand_16297,1.0)+((d::at(_n_knot_16298,1.0)-d::at(_n_hand_16297,1.0))*_n_u_16301))+(((4.0*_n_sag_16299)*_n_u_16301)*(1.0-_n_u_16301)));
(void)(([&](){auto _n_argument_16319=std::floor(_n_y_16302);auto _n_argument_16320=_n_c_16300;auto _n_argument_16321=_n_level_16259(d::mod(_n_y_16302,1.0));return this->_n_put_16263(_n_argument_16319,_n_argument_16320,_n_argument_16321);})());
}}
return d::join(d::map(this->_n_g_16262,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_16303=_a0;
return d::join(_n_row_16303,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("kite").cols)*ascii::catalog_meta("kite").rows);auto _env=std::make_shared<_n_Record_16304>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &kite_meta(){return catalog_meta("kite");}
std::unique_ptr<Piece> make_kite(const AsciiPieceOptions &o){return std::make_unique<Native_kite>(o);}
}
