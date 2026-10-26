// Direct, statically typed C++ from src/pieces/synthwave.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31759;
struct _n_Record_31841;
struct _n_Record_31759{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_31759> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31759>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_31841{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31841> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31841>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_31769(double _a0);
std::shared_ptr<_n_Record_31759> _n_meta_31758=[](){return ([&](){auto _n_object_31844=std::make_shared<_n_Record_31759>();_n_object_31844->_p_name=d::String(u"synthwave");_n_object_31844->_p_category=d::String(u"effects");_n_object_31844->_p_note=d::String(u"a grid rolling toward a striped sun behind a mountain ridge");_n_object_31844->_p_cols=65.0;_n_object_31844->_p_rows=28.0;_n_object_31844->_p_fps=20.0;return _n_object_31844;})();}();
const double _n_HZ_31760=[](){return 12.0;}();
const double _n_SUN_R_31761=[](){return 13.0;}();
const double _n_SUN_Y_31762=[](){return ((2.0*_n_HZ_31760)-6.0);}();
const double _n_K_31763=[](){return 24.0;}();
const double _n_FAR_31764=[](){return 5.0;}();
const double _n_S_31765=[](){return 0.7;}();
const double _n_RAILS_31766=[](){return 6.0;}();
const double _n_SPEED_31767=[](){return 0.9;}();
d::Array<d::String,false> _n_LEVEL_31768=[](){return d::Array<d::String,false>{d::String(u"▔"),d::String(u"─"),d::String(u"▁")};}();
std::function<double()> _n_mulberry32_31769(double _a0){double _n_a_31784=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_31784=double(d::i32((_n_a_31784+1831565813.0))|d::i32(0.0))));
double _n_t_31785=d::imul(double(d::i32(_n_a_31784)^d::i32(double(d::u32(_n_a_31784)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_31784)));
(void)((_n_t_31785=double(d::i32((_n_t_31785+d::imul(double(d::i32(_n_t_31785)^d::i32(double(d::u32(_n_t_31785)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_31785)))))^d::i32(_n_t_31785))));
return (double(d::u32(double(d::i32(_n_t_31785)^d::i32(double(d::u32(_n_t_31785)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

struct Native_synthwave final:ascii::Piece{
double _n_cols_31770{};
double _n_rows_31771{};
double _n_FR_31772{};
double _n_cx_31773{};
double _n_MID_31774{};
d::Array<d::Array<d::String,false>,false> _n_g_31775{};
std::function<double()> _n_rand_31776{};
d::Array<double,false> _n_H_31777{};
d::Array<d::Array<double,false>,false> _n_stars_31778{};
d::Array<double,false> _n_count_31781{};
d::Array<double,false> _n_level_31782{};
std::function<d::String(double,std::shared_ptr<_n_Record_31841>)> _render;
double _n_band_31779(double _a0){double _n_k_31793=_a0;
return ((0.2*_n_k_31793)+(((0.3*_n_k_31793)*_n_k_31793)/26.0));}

double _n_sun_31780(double _a0,double _a1,double _a2){double _n_c_31794=_a0;
double _n_p_31795=_a1;
double _n_s_31796=_a2;
{
double _n_dx_31797=((_n_c_31794+0.5)-this->_n_cx_31773);
double _n_dy_31798=((_n_p_31795+0.5)-_n_SUN_Y_31762);
if(d::truth((((_n_dx_31797*_n_dx_31797)+(_n_dy_31798*_n_dy_31798))>(_n_SUN_R_31761*_n_SUN_R_31761)))){d::check_cancel();return 0.0;
}
double _n_k_31799=(_n_p_31795-(_n_SUN_Y_31762-7.0));
if(d::truth((_n_k_31799<0.0))){d::check_cancel();return 1.0;
}
return (d::truth(([&](){auto _n_left_31871=std::floor((this->_n_band_31779((_n_k_31799+1.0))-_n_s_31796));auto _n_right_31872=std::floor((this->_n_band_31779(_n_k_31799)-_n_s_31796));return (_n_left_31871==_n_right_31872);})())?1.0:0.0);

}
}

void _n_both_31783(d::Array<d::String,false> _a0,double _a1,d::String _a2,d::String _a3){d::Array<d::String,false> _n_row_31800=_a0;
double _n_c_31801=_a1;
d::String _n_l_31802=_a2;
d::String _n_r_31803=_a3;
{
if((d::truth((_n_c_31801>=0.0))&&d::truth((_n_c_31801<this->_n_cols_31770)))){d::check_cancel();(void)(([&](){auto&& _n_array_31873=_n_row_31800;auto _n_index_31874=_n_c_31801;auto _n_value_31875=_n_l_31802;d::put(_n_array_31873,_n_index_31874,_n_value_31875);return _n_value_31875;})());
}
if((d::truth((((2.0*this->_n_MID_31774)-_n_c_31801)>=0.0))&&d::truth((((2.0*this->_n_MID_31774)-_n_c_31801)<this->_n_cols_31770)))){d::check_cancel();(void)(([&](){auto&& _n_array_31876=_n_row_31800;auto _n_index_31877=((2.0*this->_n_MID_31774)-_n_c_31801);auto _n_value_31878=_n_r_31803;d::put(_n_array_31876,_n_index_31877,_n_value_31878);return _n_value_31878;})());
}

}
}

explicit Native_synthwave(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_31845=_n_meta_31758;
this->_n_cols_31770=_n_binding_31845->_p_cols;
this->_n_rows_31771=_n_binding_31845->_p_rows;
this->_n_FR_31772=(this->_n_rows_31771-_n_HZ_31760);
this->_n_cx_31773=(this->_n_cols_31770/2.0);
this->_n_MID_31774=std::floor(this->_n_cx_31773);
this->_n_g_31775=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_31771,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_31770));}));
this->_n_rand_31776=_n_mulberry32_31769(5.0);
this->_n_H_31777=d::Array<double,false>{6.0};
{double _n_c_31786=1.0;
for(;d::truth((_n_c_31786<=this->_n_cols_31770));(void)((_n_c_31786++))){d::check_cancel();double _n_d_31787=(std::fabs((_n_c_31786-this->_n_cx_31773))/this->_n_cx_31773);
double _n_want_31788=((1.0+(6.0*(_n_d_31787-0.25)))+(1.5*std::sin((_n_c_31786*0.45))));
double _n_h_31789=d::at(this->_n_H_31777,(_n_c_31786-1.0));
double _n_r_31790=this->_n_rand_31776();
double _n_step_31791=(d::truth((_n_r_31790<0.6))?d::sign(d::round((_n_want_31788-_n_h_31789))):(d::truth((_n_r_31790<0.8))?1.0:(-d::number(1.0))));
if(d::truth((_n_d_31787<0.25))){d::check_cancel();(void)((_n_step_31791=(d::truth((_n_h_31789>0.0))?(-d::number(1.0)):0.0)));
}else {d::check_cancel();if((d::truth(((_n_h_31789+_n_step_31791)<0.0))||d::truth(((_n_h_31789+_n_step_31791)>7.0)))){d::check_cancel();(void)((_n_step_31791=0.0));
}
}
(void)(this->_n_H_31777.push((_n_h_31789+_n_step_31791)));
}}
this->_n_stars_31778=d::Array<d::Array<double,false>,false>{};
{double _n_i_31792=0.0;
for(;d::truth((_n_i_31792<24.0));(void)((_n_i_31792++))){d::check_cancel();(void)(this->_n_stars_31778.push(d::Array<double,false>{std::floor((this->_n_rand_31776()*this->_n_cols_31770)),std::floor((this->_n_rand_31776()*(_n_HZ_31760-3.0))),this->_n_rand_31776()}));
}}
this->_n_count_31781=d::Array<double,false>(size_t(this->_n_FR_31772));
this->_n_level_31782=d::Array<double,false>(size_t(this->_n_FR_31772));
_render=[=]( double _a0,std::shared_ptr<_n_Record_31841> _a1) mutable ->d::String{double _n_t_31804=_a0;
{
{double _n_r_31805=0.0;
for(;d::truth((_n_r_31805<this->_n_rows_31771));(void)((_n_r_31805++))){d::check_cancel();(void)(d::at(this->_n_g_31775,_n_r_31805).fill(d::String(u" ")));
}}
for(auto &&_n_item_31846:this->_n_stars_31778){d::check_cancel();auto _n_binding_31847=_n_item_31846;
double _n_c_31806=d::at(_n_binding_31847,0.0);
double _n_r_31807=d::at(_n_binding_31847,1.0);
double _n_p_31808=d::at(_n_binding_31847,2.0);
{
double _n_tw_31809=std::sin(((_n_t_31804*(0.8+_n_p_31808))+(_n_p_31808*30.0)));
(void)(([&](){auto&& _n_array_31848=d::at(this->_n_g_31775,_n_r_31807);auto _n_index_31849=_n_c_31806;auto _n_value_31850=(d::truth((_n_tw_31809>0.6))?(d::truth((_n_p_31808<0.3))?d::String(u"+"):d::String(u"·")):(d::truth((_n_tw_31809>(-d::number(0.4))))?d::String(u"."):d::String(u" ")));d::put(_n_array_31848,_n_index_31849,_n_value_31850);return _n_value_31850;})());

}
}
double _n_s_31810=(_n_t_31804*0.6);
{double _n_r_31811=0.0;
for(;d::truth((_n_r_31811<_n_HZ_31760));(void)((_n_r_31811++))){d::check_cancel();{double _n_c_31812=0.0;
for(;d::truth((_n_c_31812<this->_n_cols_31770));(void)((_n_c_31812++))){d::check_cancel();double _n_top_31813=this->_n_sun_31780(_n_c_31812,(2.0*_n_r_31811),_n_s_31810);
double _n_bot_31814=this->_n_sun_31780(_n_c_31812,((2.0*_n_r_31811)+1.0),_n_s_31810);
if((d::truth(_n_top_31813)||d::truth(_n_bot_31814))){d::check_cancel();(void)(([&](){auto&& _n_array_31851=d::at(this->_n_g_31775,_n_r_31811);auto _n_index_31852=_n_c_31812;auto _n_value_31853=d::at(d::String(u" ▀▄█"),(_n_top_31813+(2.0*_n_bot_31814)));d::put(_n_array_31851,_n_index_31852,_n_value_31853);return _n_value_31853;})());
}
}}
}}
{double _n_c_31815=0.0;
for(;d::truth((_n_c_31815<this->_n_cols_31770));(void)((_n_c_31815++))){d::check_cancel();double _n_a_31816=d::at(this->_n_H_31777,_n_c_31815);
double _n_b_31817=d::at(this->_n_H_31777,(_n_c_31815+1.0));
if((d::truth((!d::truth(_n_a_31816)))&&d::truth((!d::truth(_n_b_31817))))){d::check_cancel();continue;
}
double _n_top_31818=((_n_HZ_31760-1.0)-d::minimum({_n_a_31816,_n_b_31817}));
(void)(([&](){auto&& _n_array_31854=d::at(this->_n_g_31775,_n_top_31818);auto _n_index_31855=_n_c_31815;auto _n_value_31856=(d::truth((_n_b_31817>_n_a_31816))?d::String(u"/"):(d::truth((_n_b_31817<_n_a_31816))?d::String(u"\\"):d::String(u"_")));d::put(_n_array_31854,_n_index_31855,_n_value_31856);return _n_value_31856;})());
{double _n_r_31819=(_n_top_31818+1.0);
for(;d::truth((_n_r_31819<_n_HZ_31760));(void)((_n_r_31819++))){d::check_cancel();(void)(([&](){auto&& _n_array_31857=d::at(this->_n_g_31775,_n_r_31819);auto _n_index_31858=_n_c_31815;auto _n_value_31859=d::String(u" ");d::put(_n_array_31857,_n_index_31858,_n_value_31859);return _n_value_31859;})());
}}
}}
double _n_n0_31820=d::mod((_n_t_31804*_n_SPEED_31767),1.0);
(void)(this->_n_count_31781.fill(0.0));
{double _n_n_31821=1.0;
for(;d::truth((_n_n_31821<400.0));(void)((_n_n_31821++))){d::check_cancel();double _n_e_31822=(_n_K_31763/(_n_n_31821-_n_n0_31820));
if(d::truth((_n_e_31822>=this->_n_FR_31772))){d::check_cancel();continue;
}
if(d::truth((_n_e_31822<1.0))){d::check_cancel();break;
}
double _n_y_31823=std::floor(_n_e_31822);
(void)(([&](){auto&& _n_array_31860=this->_n_count_31781;auto _n_index_31861=_n_y_31823;double _n_old_31862=d::number(d::at(_n_array_31860,_n_index_31861));d::put(_n_array_31860,_n_index_31861,_n_old_31862+(1.0));return _n_old_31862;})());
(void)(([&](){auto&& _n_array_31863=this->_n_level_31782;auto _n_index_31864=_n_y_31823;auto _n_value_31865=([&](){auto _n_argument_31866=2.0;auto _n_argument_31867=std::floor((d::mod(_n_e_31822,1.0)*3.0));return d::minimum({_n_argument_31866,_n_argument_31867});})();d::put(_n_array_31863,_n_index_31864,_n_value_31865);return _n_value_31865;})());
}}
d::Array<d::String,false> _n_kind_31824=d::map(this->_n_count_31781,[&]( double _a0,double _a1) mutable ->d::String{double _n_k_31825=_a0;
double _n_y_31826=_a1;
return (d::truth((_n_y_31826==0.0))?d::String(u"░"):(d::truth((_n_y_31826==1.0))?d::String(u"═"):(d::truth((_n_y_31826<_n_FAR_31764))?d::String(u"─"):(d::truth((_n_k_31825>1.0))?d::String(u"═"):(d::truth(_n_k_31825)?d::at(_n_LEVEL_31768,d::at(this->_n_level_31782,_n_y_31826)):d::String(u" "))))));});
double _n_VX_31827=(this->_n_MID_31774+0.5);
{double _n_y_31828=0.0;
for(;d::truth((_n_y_31828<this->_n_FR_31772));(void)((_n_y_31828++))){d::check_cancel();d::Array<d::String,false> _n_row_31829=d::at(this->_n_g_31775,(_n_HZ_31760+_n_y_31828));
d::String _n_k_31830=d::at(_n_kind_31824,_n_y_31828);
(void)(_n_row_31829.fill(_n_k_31830));
if(d::truth((_n_y_31828==0.0))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_31868=_n_row_31829;auto _n_index_31869=this->_n_MID_31774;auto _n_value_31870=(d::truth((_n_k_31830==d::String(u"─")))?d::String(u"┼"):(d::truth((_n_k_31830==d::String(u"═")))?d::String(u"╪"):d::String(u"│")));d::put(_n_array_31868,_n_index_31869,_n_value_31870);return _n_value_31870;})());
double _n_every_31831=(d::truth(((_n_S_31765*(_n_y_31828+0.5))>=2.4))?1.0:(d::truth((((2.0*_n_S_31765)*(_n_y_31828+0.5))>=2.4))?2.0:4.0));
{double _n_m_31832=_n_every_31831;
for(;d::truth((_n_m_31832<=_n_RAILS_31766));(void)((_n_m_31832=(_n_m_31832+_n_every_31831)))){d::check_cancel();double _n_sl_31833=(_n_m_31832*_n_S_31765);
double _n_xt_31834=(_n_VX_31827-(_n_sl_31833*_n_y_31828));
double _n_xb_31835=(_n_VX_31827-(_n_sl_31833*(_n_y_31828+1.0)));
if(d::truth((_n_xt_31834<0.0))){d::check_cancel();break;
}
if(d::truth((_n_sl_31833<1.3))){d::check_cancel();double _n_c_31836=std::floor((_n_VX_31827-(_n_sl_31833*(_n_y_31828+0.5))));
(void)(this->_n_both_31783(_n_row_31829,_n_c_31836,d::String(u"/"),d::String(u"\\")));
continue;
}
double _n_hi_31837=std::floor((_n_xt_31834-0.000001));
double _n_lo_31838=std::floor(_n_xb_31835);
if((d::truth((_n_k_31830==d::String(u" ")))&&d::truth((_n_y_31828>=_n_m_31832)))){d::check_cancel();{double _n_c_31839=d::maximum({0.0,(_n_lo_31838+1.0)});
for(;d::truth((_n_c_31839<_n_hi_31837));(void)((_n_c_31839++))){d::check_cancel();(void)(this->_n_both_31783(_n_row_31829,_n_c_31839,d::String(u"_"),d::String(u"_")));
}}
}
(void)(this->_n_both_31783(_n_row_31829,_n_hi_31837,d::String(u"/"),d::String(u"\\")));
}}
}}
return d::join(d::map(this->_n_g_31775,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_31840=_a0;
return d::join(_n_row_31840,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("synthwave").cols)*ascii::catalog_meta("synthwave").rows);auto _env=std::make_shared<_n_Record_31841>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &synthwave_meta(){return catalog_meta("synthwave");}
std::unique_ptr<Piece> make_synthwave(const AsciiPieceOptions &o){return std::make_unique<Native_synthwave>(o);}
}
