// Direct, statically typed C++ from src/pieces/sunrise.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31619;
struct _n_Record_31704;
struct _n_Record_31619{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_31619> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31619>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_31704{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31704> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31704>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_31630(double _a0,double _a1,double _a2);
double _n_clamp_31631(double _a0);
double _n_smooth_31632(double _a0,double _a1,double _a2);
double _n_noise_31633(double _a0,double _a1,double _a2);
std::array<double,2> _n_sun_31634(double _a0);
std::shared_ptr<_n_Record_31619> _n_meta_31618=[](){return ([&](){auto _n_object_31707=std::make_shared<_n_Record_31619>();_n_object_31707->_p_name=d::String(u"sunrise");_n_object_31707->_p_category=d::String(u"nature");_n_object_31707->_p_note=d::String(u"the sun lifting off a sea horizon, its path glittering");_n_object_31707->_p_cols=60.0;_n_object_31707->_p_rows=20.0;_n_object_31707->_p_fps=15.0;return _n_object_31707;})();}();
const d::String _n_SKY_31620=[](){return d::String(u" .·:-=");}();
const double _n_LOOP_31621=[](){return 48.0;}();
const double _n_DAY_31622=[](){return 0.85;}();
const double _n_HZ_31623=[](){return 12.0;}();
const double _n_R_31624=[](){return 2.6;}();
const double _n_TOP_31625=[](){return 6.6;}();
const double _n_CX_31626=[](){return 30.0;}();
const double _n_WX_31627=[](){return 8.0;}();
const double _n_START_31628=[](){return 2.2;}();
const double _n_GAP_31629=[](){return 0.32;}();
double _n_hash_31630(double _a0,double _a1,double _a2){double _n_a_31639=_a0;
double _n_b_31640=_a1;
double _n_c_31641=_a2;
{
double _n_h_31642=([&](){auto _n_left_31708=([&](){auto _n_left_31710=d::imul(_n_a_31639,668265261.0);auto _n_right_31711=d::imul(_n_b_31640,374761393.0);return double(d::i32(_n_left_31710)^d::i32(_n_right_31711));})();auto _n_right_31709=d::imul(_n_c_31641,625341585.0);return double(d::i32(_n_left_31708)^d::i32(_n_right_31709));})();
(void)((_n_h_31642=d::imul(double(d::i32(_n_h_31642)^d::i32(double(d::u32(_n_h_31642)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_31642=d::imul(double(d::i32(_n_h_31642)^d::i32(double(d::u32(_n_h_31642)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_31642)^d::i32(double(d::u32(_n_h_31642)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_clamp_31631(double _a0){double _n_v_31643=_a0;
return ([&](){auto _n_argument_31712=0.0;auto _n_argument_31713=d::minimum({1.0,_n_v_31643});return d::maximum({_n_argument_31712,_n_argument_31713});})();}

double _n_smooth_31632(double _a0,double _a1,double _a2){double _n_a_31644=_a0;
double _n_b_31645=_a1;
double _n_v_31646=_a2;
{
double _n_x_31647=_n_clamp_31631(((_n_v_31646-_n_a_31644)/(_n_b_31645-_n_a_31644)));
return ((_n_x_31647*_n_x_31647)*(3.0-(2.0*_n_x_31647)));

}
}

double _n_noise_31633(double _a0,double _a1,double _a2){double _n_x_31648=_a0;
double _n_r_31649=_a1;
double _n_z_31650=_a2;
{
double _n_i_31651=std::floor(_n_x_31648);
double _n_j_31652=std::floor(_n_z_31650);
double _n_u_31653=_n_smooth_31632(0.0,1.0,(_n_x_31648-_n_i_31651));
double _n_v_31654=_n_smooth_31632(0.0,1.0,(_n_z_31650-_n_j_31652));
auto _n_n_31655=[&]( double _a0,double _a1) mutable ->double{double _n_a_31656=_a0;
double _n_b_31657=_a1;
return _n_hash_31630((_n_i_31651+_n_a_31656),_n_r_31649,(_n_j_31652+_n_b_31657));};
return ([&](){auto _n_left_31714=(([&](){auto _n_left_31716=(_n_n_31655(0.0,0.0)*(1.0-_n_u_31653));auto _n_right_31717=(_n_n_31655(1.0,0.0)*_n_u_31653);return (_n_left_31716+_n_right_31717);})()*(1.0-_n_v_31654));auto _n_right_31715=(([&](){auto _n_left_31718=(_n_n_31655(0.0,1.0)*(1.0-_n_u_31653));auto _n_right_31719=(_n_n_31655(1.0,1.0)*_n_u_31653);return (_n_left_31718+_n_right_31719);})()*_n_v_31654);return (_n_left_31714+_n_right_31715);})();

}
}

std::array<double,2> _n_sun_31634(double _a0){double _n_s_31658=_a0;
{
if(d::truth((_n_s_31658<_n_DAY_31622))){d::check_cancel();double _n_p_31659=(ascii::PI*(_n_s_31658/_n_DAY_31622));
return std::array<double,2>{(_n_CX_31626-(_n_WX_31627*std::cos(_n_p_31659))),((-d::number(_n_R_31624))+((_n_TOP_31625+_n_R_31624)*std::sin(_n_p_31659)))};
}
double _n_q_31660=(ascii::PI*((_n_s_31658-_n_DAY_31622)/(1.0-_n_DAY_31622)));
return std::array<double,2>{(_n_CX_31626+(_n_WX_31627*std::cos(_n_q_31660))),((-d::number(_n_R_31624))-(((_n_TOP_31625+_n_R_31624)*((1.0-_n_DAY_31622)/_n_DAY_31622))*std::sin(_n_q_31660)))};

}
}

struct Native_sunrise final:ascii::Piece{
double _n_cols_31635{};
double _n_rows_31636{};
d::Array<d::Array<d::String,false>,false> _n_g_31637{};
d::Array<std::array<double,3>,false> _n_stars_31638{};
std::function<d::String(double,std::shared_ptr<_n_Record_31704>)> _render;

explicit Native_sunrise(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_31720=_n_meta_31618;
this->_n_cols_31635=_n_binding_31720->_p_cols;
this->_n_rows_31636=_n_binding_31720->_p_rows;
this->_n_g_31637=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_31636,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_31635));}));
this->_n_stars_31638=d::Array<std::array<double,3>,false>{};
{double _n_i_31661=0.0;
for(;d::truth((_n_i_31661<22.0));(void)((_n_i_31661++))){d::check_cancel();(void)(this->_n_stars_31638.push(std::array<double,3>{std::floor((_n_hash_31630(_n_i_31661,1.0,7.0)*this->_n_cols_31635)),std::floor((_n_hash_31630(_n_i_31661,2.0,7.0)*7.0)),_n_hash_31630(_n_i_31661,3.0,7.0)}));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_31704> _a1) mutable ->d::String{double _n_t_31662=_a0;
{
double _n_u_31663=d::mod((d::mod((_n_t_31662+_n_START_31628),_n_LOOP_31621)+_n_LOOP_31621),_n_LOOP_31621);
auto _n_binding_31721=_n_sun_31634((_n_u_31663/_n_LOOP_31621));
double _n_sx_31664=d::at(_n_binding_31721,0.0);
double _n_h_31665=d::at(_n_binding_31721,1.0);
double _n_sy_31666=(_n_HZ_31623-_n_h_31665);
double _n_glow_31667=([&](){auto _n_left_31722=(0.72+(0.28*_n_smooth_31632((-d::number(4.0)),0.0,_n_h_31665)));auto _n_right_31723=(0.25*_n_smooth_31632(1.0,_n_TOP_31625,_n_h_31665));return (_n_left_31722-_n_right_31723);})();
double _n_height_31668=(3.8-(1.9*_n_smooth_31632(0.0,_n_TOP_31625,_n_h_31665)));
double _n_night_31669=(1.0-_n_smooth_31632((-d::number(3.0)),3.0,_n_h_31665));
double _n_lit_31670=_n_clamp_31631(((_n_h_31665+_n_R_31624)/(2.0*_n_R_31624)));
{double _n_r_31671=0.0;
for(;d::truth((_n_r_31671<this->_n_rows_31636));(void)((_n_r_31671++))){d::check_cancel();(void)(d::at(this->_n_g_31637,_n_r_31671).fill(d::String(u" ")));
}}
for(auto &&_n_item_31724:this->_n_stars_31638){d::check_cancel();auto _n_binding_31725=_n_item_31724;
double _n_c_31672=d::at(_n_binding_31725,0.0);
double _n_r_31673=d::at(_n_binding_31725,1.0);
double _n_p_31674=d::at(_n_binding_31725,2.0);
{
double _n_tw_31675=(0.5+(0.5*std::sin(((_n_t_31662*(1.1+_n_p_31674))+(_n_p_31674*40.0)))));
if(d::truth((((0.25+_n_night_31669)*_n_tw_31675)>(0.6+(_n_r_31673*0.04))))){d::check_cancel();(void)(([&](){auto&& _n_array_31726=d::at(this->_n_g_31637,_n_r_31673);auto _n_index_31727=_n_c_31672;auto _n_value_31728=(d::truth((_n_p_31674<0.15))?d::String(u"+"):(d::truth((_n_p_31674<0.55))?d::String(u"·"):d::String(u".")));d::put(_n_array_31726,_n_index_31727,_n_value_31728);return _n_value_31728;})());
}

}
}
{double _n_r_31676=0.0;
for(;d::truth((_n_r_31676<_n_HZ_31623));(void)((_n_r_31676++))){d::check_cancel();double _n_y_31677=(_n_r_31676+0.5);
{double _n_c_31678=0.0;
for(;d::truth((_n_c_31678<this->_n_cols_31635));(void)((_n_c_31678++))){d::check_cancel();double _n_x_31679=(_n_c_31678+0.5);
double _n_cov_31680=0.0;
double _n_near_31681=0.0;
{double _n_i_31682=0.0;
for(;d::truth((_n_i_31682<4.0));(void)((_n_i_31682++))){d::check_cancel();{double _n_j_31683=0.0;
for(;d::truth((_n_j_31683<3.0));(void)((_n_j_31683++))){d::check_cancel();double _n_yy_31684=(_n_r_31676+((_n_i_31682+0.5)/4.0));
double _n_e_31685=(d::hypot(std::initializer_list<double>{(((_n_c_31678+((_n_j_31683+0.5)/3.0))-_n_sx_31664)/2.0),(_n_yy_31684-_n_sy_31666)})-_n_R_31624);
if((d::truth((_n_yy_31684<_n_HZ_31623))&&d::truth((_n_e_31685<0.0)))){d::check_cancel();(void)((_n_cov_31680++));
}
if(d::truth((_n_e_31685<_n_GAP_31629))){d::check_cancel();(void)((_n_near_31681++));
}
}}
}}
if(d::truth((_n_cov_31680>=6.0))){d::check_cancel();(void)(([&](){auto&& _n_array_31729=d::at(this->_n_g_31637,_n_r_31676);auto _n_index_31730=_n_c_31678;auto _n_value_31731=d::String(u"@");d::put(_n_array_31729,_n_index_31730,_n_value_31731);return _n_value_31731;})());
}
if((d::truth((_n_cov_31680>=6.0))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_31732=_n_near_31681;return d::truth(_n_logical_31732)?std::variant<bool,double>((_n_lit_31670>0.0)):std::variant<bool,double>(_n_logical_31732);})()))){d::check_cancel();continue;
}
double _n_d_31686=(d::hypot(std::initializer_list<double>{((_n_x_31679-_n_sx_31664)/2.0),(_n_y_31677-_n_sy_31666)})-_n_R_31624);
double _n_bow_31687=(0.62+(0.38*std::exp((-d::number(std::pow(((_n_x_31679-_n_sx_31664)/17.0),2.0))))));
double _n_v_31688=([&](){auto _n_argument_31733=((_n_glow_31667*std::exp(((-d::number((_n_HZ_31623-_n_y_31677)))/_n_height_31668)))*_n_bow_31687);auto _n_argument_31734=((0.42*_n_lit_31670)*std::exp(((-d::number((_n_d_31686-_n_GAP_31629)))/1.5)));return d::maximum({_n_argument_31733,_n_argument_31734});})();
double _n_k_31689=([&](){auto _n_argument_31735=(double(_n_SKY_31620.size())-1.0);auto _n_argument_31736=std::floor((_n_v_31688*double(_n_SKY_31620.size())));return d::minimum({_n_argument_31735,_n_argument_31736});})();
if(d::truth((_n_k_31689>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_31737=d::at(this->_n_g_31637,_n_r_31676);auto _n_index_31738=_n_c_31678;auto _n_value_31739=d::at(_n_SKY_31620,_n_k_31689);d::put(_n_array_31737,_n_index_31738,_n_value_31739);return _n_value_31739;})());
}
}}
}}
(void)(d::at(this->_n_g_31637,_n_HZ_31623).fill(d::String(u"▔")));
{double _n_r_31690=(_n_HZ_31623+1.0);
for(;d::truth((_n_r_31690<this->_n_rows_31636));(void)((_n_r_31690++))){d::check_cancel();double _n_k_31691=(_n_r_31690-_n_HZ_31623);
double _n_scale_31692=(0.6*std::pow(_n_k_31691,1.2));
double _n_cut_31693=(0.43+(0.028*_n_k_31691));
double _n_drift_31694=(_n_t_31662*(0.15+(0.06*_n_k_31691)));
double _n_wide_31695=(2.4+(_n_k_31691*1.2));
double _n_bright_31696=(((0.25+(0.75*_n_lit_31670))*(1.05-(_n_k_31691*0.05)))*(0.4+(0.6*_n_glow_31667)));
double _n_run_31697=0.0;
{double _n_c_31698=0.0;
for(;d::truth((_n_c_31698<this->_n_cols_31635));(void)((_n_c_31698++))){d::check_cancel();double _n_x_31699=(_n_c_31698+0.5);
bool _n_wave_31700=(_n_noise_31633(((_n_x_31699+_n_drift_31694)/_n_scale_31692),_n_r_31690,((_n_t_31662*0.22)+(_n_k_31691*3.1)))>_n_cut_31693);
(void)((_n_run_31697=(d::truth(_n_wave_31700)?(_n_run_31697+1.0):0.0)));
if(d::truth((_n_run_31697>((1.4+(1.2*_n_k_31691))*(0.7+(0.6*([&](){auto _n_argument_31740=std::floor((_n_x_31699+_n_drift_31694));auto _n_argument_31741=_n_r_31690;auto _n_argument_31742=9.0;return _n_hash_31630(_n_argument_31740,_n_argument_31741,_n_argument_31742);})())))))){d::check_cancel();(void)(((_n_wave_31700=false),(_n_run_31697=0.0)));
}
double _n_path_31701=(std::exp((-d::number(std::pow(((_n_x_31699-_n_sx_31664)/_n_wide_31695),2.0))))*_n_bright_31696);
double _n_glint_31702=(([&](){auto _n_argument_31743=(_n_x_31699*(1.3/std::sqrt(_n_k_31691)));auto _n_argument_31744=(_n_r_31690+40.0);auto _n_argument_31745=((_n_t_31662*2.2)+_n_k_31691);return _n_noise_31633(_n_argument_31743,_n_argument_31744,_n_argument_31745);})()*_n_path_31701);
if(d::truth((_n_glint_31702>0.45))){d::check_cancel();(void)(([&](){auto&& _n_array_31746=d::at(this->_n_g_31637,_n_r_31690);auto _n_index_31747=_n_c_31698;auto _n_value_31748=d::String(u"=");d::put(_n_array_31746,_n_index_31747,_n_value_31748);return _n_value_31748;})());
}else {d::check_cancel();if((d::truth((_n_glint_31702>0.3))||d::truth(([&]()->bool{auto _n_logical_31749=_n_wave_31700;return d::truth(_n_logical_31749)?(_n_path_31701>0.3):_n_logical_31749;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_31750=d::at(this->_n_g_31637,_n_r_31690);auto _n_index_31751=_n_c_31698;auto _n_value_31752=d::String(u"-");d::put(_n_array_31750,_n_index_31751,_n_value_31752);return _n_value_31752;})());
}else {d::check_cancel();if(d::truth((_n_glint_31702>0.2))){d::check_cancel();(void)(([&](){auto&& _n_array_31753=d::at(this->_n_g_31637,_n_r_31690);auto _n_index_31754=_n_c_31698;auto _n_value_31755=d::String(u"·");d::put(_n_array_31753,_n_index_31754,_n_value_31755);return _n_value_31755;})());
}else {d::check_cancel();if(d::truth(_n_wave_31700)){d::check_cancel();(void)(([&](){auto&& _n_array_31756=d::at(this->_n_g_31637,_n_r_31690);auto _n_index_31757=_n_c_31698;auto _n_value_31758=(d::truth((_n_k_31691>3.0))?d::String(u"~"):d::String(u"-"));d::put(_n_array_31756,_n_index_31757,_n_value_31758);return _n_value_31758;})());
}
}
}
}
}}
}}
return d::join(d::map(this->_n_g_31637,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_31703=_a0;
return d::join(_n_row_31703,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sunrise").cols)*ascii::catalog_meta("sunrise").rows);auto _env=std::make_shared<_n_Record_31704>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sunrise_meta(){return catalog_meta("sunrise");}
std::unique_ptr<Piece> make_sunrise(const AsciiPieceOptions &o){return std::make_unique<Native_sunrise>(o);}
}
