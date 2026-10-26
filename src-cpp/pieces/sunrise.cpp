// Direct, statically typed C++ from src/pieces/sunrise.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31618;
struct _n_Record_31703;
struct _n_Record_31618{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_31618> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31618>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_31703{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31703> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31703>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_31629(double _a0,double _a1,double _a2);
double _n_clamp_31630(double _a0);
double _n_smooth_31631(double _a0,double _a1,double _a2);
double _n_noise_31632(double _a0,double _a1,double _a2);
d::Array<double,false> _n_sun_31633(double _a0);
std::shared_ptr<_n_Record_31618> _n_meta_31617=[](){return ([&](){auto _n_object_31706=std::make_shared<_n_Record_31618>();_n_object_31706->_p_name=d::String(u"sunrise");_n_object_31706->_p_category=d::String(u"nature");_n_object_31706->_p_note=d::String(u"the sun lifting off a sea horizon, its path glittering");_n_object_31706->_p_cols=60.0;_n_object_31706->_p_rows=20.0;_n_object_31706->_p_fps=15.0;return _n_object_31706;})();}();
const d::String _n_SKY_31619=[](){return d::String(u" .·:-=");}();
const double _n_LOOP_31620=[](){return 48.0;}();
const double _n_DAY_31621=[](){return 0.85;}();
const double _n_HZ_31622=[](){return 12.0;}();
const double _n_R_31623=[](){return 2.6;}();
const double _n_TOP_31624=[](){return 6.6;}();
const double _n_CX_31625=[](){return 30.0;}();
const double _n_WX_31626=[](){return 8.0;}();
const double _n_START_31627=[](){return 2.2;}();
const double _n_GAP_31628=[](){return 0.32;}();
double _n_hash_31629(double _a0,double _a1,double _a2){double _n_a_31638=_a0;
double _n_b_31639=_a1;
double _n_c_31640=_a2;
{
double _n_h_31641=([&](){auto _n_left_31707=([&](){auto _n_left_31709=d::imul(_n_a_31638,668265261.0);auto _n_right_31710=d::imul(_n_b_31639,374761393.0);return double(d::i32(_n_left_31709)^d::i32(_n_right_31710));})();auto _n_right_31708=d::imul(_n_c_31640,625341585.0);return double(d::i32(_n_left_31707)^d::i32(_n_right_31708));})();
(void)((_n_h_31641=d::imul(double(d::i32(_n_h_31641)^d::i32(double(d::u32(_n_h_31641)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_31641=d::imul(double(d::i32(_n_h_31641)^d::i32(double(d::u32(_n_h_31641)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_31641)^d::i32(double(d::u32(_n_h_31641)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_clamp_31630(double _a0){double _n_v_31642=_a0;
return ([&](){auto _n_argument_31711=0.0;auto _n_argument_31712=d::minimum({1.0,_n_v_31642});return d::maximum({_n_argument_31711,_n_argument_31712});})();}

double _n_smooth_31631(double _a0,double _a1,double _a2){double _n_a_31643=_a0;
double _n_b_31644=_a1;
double _n_v_31645=_a2;
{
double _n_x_31646=_n_clamp_31630(((_n_v_31645-_n_a_31643)/(_n_b_31644-_n_a_31643)));
return ((_n_x_31646*_n_x_31646)*(3.0-(2.0*_n_x_31646)));

}
}

double _n_noise_31632(double _a0,double _a1,double _a2){double _n_x_31647=_a0;
double _n_r_31648=_a1;
double _n_z_31649=_a2;
{
double _n_i_31650=std::floor(_n_x_31647);
double _n_j_31651=std::floor(_n_z_31649);
double _n_u_31652=_n_smooth_31631(0.0,1.0,(_n_x_31647-_n_i_31650));
double _n_v_31653=_n_smooth_31631(0.0,1.0,(_n_z_31649-_n_j_31651));
auto _n_n_31654=[&]( double _a0,double _a1) mutable ->double{double _n_a_31655=_a0;
double _n_b_31656=_a1;
return _n_hash_31629((_n_i_31650+_n_a_31655),_n_r_31648,(_n_j_31651+_n_b_31656));};
return ([&](){auto _n_left_31713=(([&](){auto _n_left_31715=(_n_n_31654(0.0,0.0)*(1.0-_n_u_31652));auto _n_right_31716=(_n_n_31654(1.0,0.0)*_n_u_31652);return (_n_left_31715+_n_right_31716);})()*(1.0-_n_v_31653));auto _n_right_31714=(([&](){auto _n_left_31717=(_n_n_31654(0.0,1.0)*(1.0-_n_u_31652));auto _n_right_31718=(_n_n_31654(1.0,1.0)*_n_u_31652);return (_n_left_31717+_n_right_31718);})()*_n_v_31653);return (_n_left_31713+_n_right_31714);})();

}
}

d::Array<double,false> _n_sun_31633(double _a0){double _n_s_31657=_a0;
{
if(d::truth((_n_s_31657<_n_DAY_31621))){d::check_cancel();double _n_p_31658=(ascii::PI*(_n_s_31657/_n_DAY_31621));
return d::Array<double,false>{(_n_CX_31625-(_n_WX_31626*std::cos(_n_p_31658))),((-d::number(_n_R_31623))+((_n_TOP_31624+_n_R_31623)*std::sin(_n_p_31658)))};
}
double _n_q_31659=(ascii::PI*((_n_s_31657-_n_DAY_31621)/(1.0-_n_DAY_31621)));
return d::Array<double,false>{(_n_CX_31625+(_n_WX_31626*std::cos(_n_q_31659))),((-d::number(_n_R_31623))-(((_n_TOP_31624+_n_R_31623)*((1.0-_n_DAY_31621)/_n_DAY_31621))*std::sin(_n_q_31659)))};

}
}

struct Native_sunrise final:ascii::Piece{
double _n_cols_31634{};
double _n_rows_31635{};
d::Array<d::Array<d::String,false>,false> _n_g_31636{};
d::Array<d::Array<double,false>,false> _n_stars_31637{};
std::function<d::String(double,std::shared_ptr<_n_Record_31703>)> _render;

explicit Native_sunrise(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_31719=_n_meta_31617;
this->_n_cols_31634=_n_binding_31719->_p_cols;
this->_n_rows_31635=_n_binding_31719->_p_rows;
this->_n_g_31636=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_31635,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_31634));}));
this->_n_stars_31637=d::Array<d::Array<double,false>,false>{};
{double _n_i_31660=0.0;
for(;d::truth((_n_i_31660<22.0));(void)((_n_i_31660++))){d::check_cancel();(void)(this->_n_stars_31637.push(d::Array<double,false>{std::floor((_n_hash_31629(_n_i_31660,1.0,7.0)*this->_n_cols_31634)),std::floor((_n_hash_31629(_n_i_31660,2.0,7.0)*7.0)),_n_hash_31629(_n_i_31660,3.0,7.0)}));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_31703> _a1) mutable ->d::String{double _n_t_31661=_a0;
{
double _n_u_31662=d::mod((d::mod((_n_t_31661+_n_START_31627),_n_LOOP_31620)+_n_LOOP_31620),_n_LOOP_31620);
auto _n_binding_31720=_n_sun_31633((_n_u_31662/_n_LOOP_31620));
double _n_sx_31663=d::at(_n_binding_31720,0.0);
double _n_h_31664=d::at(_n_binding_31720,1.0);
double _n_sy_31665=(_n_HZ_31622-_n_h_31664);
double _n_glow_31666=([&](){auto _n_left_31721=(0.72+(0.28*_n_smooth_31631((-d::number(4.0)),0.0,_n_h_31664)));auto _n_right_31722=(0.25*_n_smooth_31631(1.0,_n_TOP_31624,_n_h_31664));return (_n_left_31721-_n_right_31722);})();
double _n_height_31667=(3.8-(1.9*_n_smooth_31631(0.0,_n_TOP_31624,_n_h_31664)));
double _n_night_31668=(1.0-_n_smooth_31631((-d::number(3.0)),3.0,_n_h_31664));
double _n_lit_31669=_n_clamp_31630(((_n_h_31664+_n_R_31623)/(2.0*_n_R_31623)));
{double _n_r_31670=0.0;
for(;d::truth((_n_r_31670<this->_n_rows_31635));(void)((_n_r_31670++))){d::check_cancel();(void)(d::at(this->_n_g_31636,_n_r_31670).fill(d::String(u" ")));
}}
for(auto &&_n_item_31723:this->_n_stars_31637){d::check_cancel();auto _n_binding_31724=_n_item_31723;
double _n_c_31671=d::at(_n_binding_31724,0.0);
double _n_r_31672=d::at(_n_binding_31724,1.0);
double _n_p_31673=d::at(_n_binding_31724,2.0);
{
double _n_tw_31674=(0.5+(0.5*std::sin(((_n_t_31661*(1.1+_n_p_31673))+(_n_p_31673*40.0)))));
if(d::truth((((0.25+_n_night_31668)*_n_tw_31674)>(0.6+(_n_r_31672*0.04))))){d::check_cancel();(void)(([&](){auto&& _n_array_31725=d::at(this->_n_g_31636,_n_r_31672);auto _n_index_31726=_n_c_31671;auto _n_value_31727=(d::truth((_n_p_31673<0.15))?d::String(u"+"):(d::truth((_n_p_31673<0.55))?d::String(u"·"):d::String(u".")));d::put(_n_array_31725,_n_index_31726,_n_value_31727);return _n_value_31727;})());
}

}
}
{double _n_r_31675=0.0;
for(;d::truth((_n_r_31675<_n_HZ_31622));(void)((_n_r_31675++))){d::check_cancel();double _n_y_31676=(_n_r_31675+0.5);
{double _n_c_31677=0.0;
for(;d::truth((_n_c_31677<this->_n_cols_31634));(void)((_n_c_31677++))){d::check_cancel();double _n_x_31678=(_n_c_31677+0.5);
double _n_cov_31679=0.0;
double _n_near_31680=0.0;
{double _n_i_31681=0.0;
for(;d::truth((_n_i_31681<4.0));(void)((_n_i_31681++))){d::check_cancel();{double _n_j_31682=0.0;
for(;d::truth((_n_j_31682<3.0));(void)((_n_j_31682++))){d::check_cancel();double _n_yy_31683=(_n_r_31675+((_n_i_31681+0.5)/4.0));
double _n_e_31684=(d::hypot(std::initializer_list<double>{(((_n_c_31677+((_n_j_31682+0.5)/3.0))-_n_sx_31663)/2.0),(_n_yy_31683-_n_sy_31665)})-_n_R_31623);
if((d::truth((_n_yy_31683<_n_HZ_31622))&&d::truth((_n_e_31684<0.0)))){d::check_cancel();(void)((_n_cov_31679++));
}
if(d::truth((_n_e_31684<_n_GAP_31628))){d::check_cancel();(void)((_n_near_31680++));
}
}}
}}
if(d::truth((_n_cov_31679>=6.0))){d::check_cancel();(void)(([&](){auto&& _n_array_31728=d::at(this->_n_g_31636,_n_r_31675);auto _n_index_31729=_n_c_31677;auto _n_value_31730=d::String(u"@");d::put(_n_array_31728,_n_index_31729,_n_value_31730);return _n_value_31730;})());
}
if((d::truth((_n_cov_31679>=6.0))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_31731=_n_near_31680;return d::truth(_n_logical_31731)?std::variant<bool,double>((_n_lit_31669>0.0)):std::variant<bool,double>(_n_logical_31731);})()))){d::check_cancel();continue;
}
double _n_d_31685=(d::hypot(std::initializer_list<double>{((_n_x_31678-_n_sx_31663)/2.0),(_n_y_31676-_n_sy_31665)})-_n_R_31623);
double _n_bow_31686=(0.62+(0.38*std::exp((-d::number(std::pow(((_n_x_31678-_n_sx_31663)/17.0),2.0))))));
double _n_v_31687=([&](){auto _n_argument_31732=((_n_glow_31666*std::exp(((-d::number((_n_HZ_31622-_n_y_31676)))/_n_height_31667)))*_n_bow_31686);auto _n_argument_31733=((0.42*_n_lit_31669)*std::exp(((-d::number((_n_d_31685-_n_GAP_31628)))/1.5)));return d::maximum({_n_argument_31732,_n_argument_31733});})();
double _n_k_31688=([&](){auto _n_argument_31734=(double(_n_SKY_31619.size())-1.0);auto _n_argument_31735=std::floor((_n_v_31687*double(_n_SKY_31619.size())));return d::minimum({_n_argument_31734,_n_argument_31735});})();
if(d::truth((_n_k_31688>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_31736=d::at(this->_n_g_31636,_n_r_31675);auto _n_index_31737=_n_c_31677;auto _n_value_31738=d::at(_n_SKY_31619,_n_k_31688);d::put(_n_array_31736,_n_index_31737,_n_value_31738);return _n_value_31738;})());
}
}}
}}
(void)(d::at(this->_n_g_31636,_n_HZ_31622).fill(d::String(u"▔")));
{double _n_r_31689=(_n_HZ_31622+1.0);
for(;d::truth((_n_r_31689<this->_n_rows_31635));(void)((_n_r_31689++))){d::check_cancel();double _n_k_31690=(_n_r_31689-_n_HZ_31622);
double _n_scale_31691=(0.6*std::pow(_n_k_31690,1.2));
double _n_cut_31692=(0.43+(0.028*_n_k_31690));
double _n_drift_31693=(_n_t_31661*(0.15+(0.06*_n_k_31690)));
double _n_wide_31694=(2.4+(_n_k_31690*1.2));
double _n_bright_31695=(((0.25+(0.75*_n_lit_31669))*(1.05-(_n_k_31690*0.05)))*(0.4+(0.6*_n_glow_31666)));
double _n_run_31696=0.0;
{double _n_c_31697=0.0;
for(;d::truth((_n_c_31697<this->_n_cols_31634));(void)((_n_c_31697++))){d::check_cancel();double _n_x_31698=(_n_c_31697+0.5);
bool _n_wave_31699=(_n_noise_31632(((_n_x_31698+_n_drift_31693)/_n_scale_31691),_n_r_31689,((_n_t_31661*0.22)+(_n_k_31690*3.1)))>_n_cut_31692);
(void)((_n_run_31696=(d::truth(_n_wave_31699)?(_n_run_31696+1.0):0.0)));
if(d::truth((_n_run_31696>((1.4+(1.2*_n_k_31690))*(0.7+(0.6*([&](){auto _n_argument_31739=std::floor((_n_x_31698+_n_drift_31693));auto _n_argument_31740=_n_r_31689;auto _n_argument_31741=9.0;return _n_hash_31629(_n_argument_31739,_n_argument_31740,_n_argument_31741);})())))))){d::check_cancel();(void)(((_n_wave_31699=false),(_n_run_31696=0.0)));
}
double _n_path_31700=(std::exp((-d::number(std::pow(((_n_x_31698-_n_sx_31663)/_n_wide_31694),2.0))))*_n_bright_31695);
double _n_glint_31701=(([&](){auto _n_argument_31742=(_n_x_31698*(1.3/std::sqrt(_n_k_31690)));auto _n_argument_31743=(_n_r_31689+40.0);auto _n_argument_31744=((_n_t_31661*2.2)+_n_k_31690);return _n_noise_31632(_n_argument_31742,_n_argument_31743,_n_argument_31744);})()*_n_path_31700);
if(d::truth((_n_glint_31701>0.45))){d::check_cancel();(void)(([&](){auto&& _n_array_31745=d::at(this->_n_g_31636,_n_r_31689);auto _n_index_31746=_n_c_31697;auto _n_value_31747=d::String(u"=");d::put(_n_array_31745,_n_index_31746,_n_value_31747);return _n_value_31747;})());
}else {d::check_cancel();if((d::truth((_n_glint_31701>0.3))||d::truth(([&]()->bool{auto _n_logical_31748=_n_wave_31699;return d::truth(_n_logical_31748)?(_n_path_31700>0.3):_n_logical_31748;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_31749=d::at(this->_n_g_31636,_n_r_31689);auto _n_index_31750=_n_c_31697;auto _n_value_31751=d::String(u"-");d::put(_n_array_31749,_n_index_31750,_n_value_31751);return _n_value_31751;})());
}else {d::check_cancel();if(d::truth((_n_glint_31701>0.2))){d::check_cancel();(void)(([&](){auto&& _n_array_31752=d::at(this->_n_g_31636,_n_r_31689);auto _n_index_31753=_n_c_31697;auto _n_value_31754=d::String(u"·");d::put(_n_array_31752,_n_index_31753,_n_value_31754);return _n_value_31754;})());
}else {d::check_cancel();if(d::truth(_n_wave_31699)){d::check_cancel();(void)(([&](){auto&& _n_array_31755=d::at(this->_n_g_31636,_n_r_31689);auto _n_index_31756=_n_c_31697;auto _n_value_31757=(d::truth((_n_k_31690>3.0))?d::String(u"~"):d::String(u"-"));d::put(_n_array_31755,_n_index_31756,_n_value_31757);return _n_value_31757;})());
}
}
}
}
}}
}}
return d::join(d::map(this->_n_g_31636,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_31702=_a0;
return d::join(_n_row_31702,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("sunrise").cols)*ascii::catalog_meta("sunrise").rows);auto _env=std::make_shared<_n_Record_31703>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &sunrise_meta(){return catalog_meta("sunrise");}
std::unique_ptr<Piece> make_sunrise(const AsciiPieceOptions &o){return std::make_unique<Native_sunrise>(o);}
}
