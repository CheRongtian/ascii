// Direct, statically typed C++ from src/pieces/synthwave.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_31760;
struct _n_Record_31842;
struct _n_Record_31760{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_31760> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31760>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_31842{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_31842> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_31842>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_31770(double _a0);
std::shared_ptr<_n_Record_31760> _n_meta_31759=[](){return ([&](){auto _n_object_31845=std::make_shared<_n_Record_31760>();_n_object_31845->_p_name=d::String(u"synthwave");_n_object_31845->_p_category=d::String(u"effects");_n_object_31845->_p_note=d::String(u"a grid rolling toward a striped sun behind a mountain ridge");_n_object_31845->_p_cols=65.0;_n_object_31845->_p_rows=28.0;_n_object_31845->_p_fps=20.0;return _n_object_31845;})();}();
const double _n_HZ_31761=[](){return 12.0;}();
const double _n_SUN_R_31762=[](){return 13.0;}();
const double _n_SUN_Y_31763=[](){return ((2.0*_n_HZ_31761)-6.0);}();
const double _n_K_31764=[](){return 24.0;}();
const double _n_FAR_31765=[](){return 5.0;}();
const double _n_S_31766=[](){return 0.7;}();
const double _n_RAILS_31767=[](){return 6.0;}();
const double _n_SPEED_31768=[](){return 0.9;}();
d::Array<d::String,false> _n_LEVEL_31769=[](){return d::Array<d::String,false>{d::String(u"▔"),d::String(u"─"),d::String(u"▁")};}();
std::function<double()> _n_mulberry32_31770(double _a0){double _n_a_31785=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_31785=double(d::i32((_n_a_31785+1831565813.0))|d::i32(0.0))));
double _n_t_31786=d::imul(double(d::i32(_n_a_31785)^d::i32(double(d::u32(_n_a_31785)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_31785)));
(void)((_n_t_31786=double(d::i32((_n_t_31786+d::imul(double(d::i32(_n_t_31786)^d::i32(double(d::u32(_n_t_31786)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_31786)))))^d::i32(_n_t_31786))));
return (double(d::u32(double(d::i32(_n_t_31786)^d::i32(double(d::u32(_n_t_31786)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

struct Native_synthwave final:ascii::Piece{
double _n_cols_31771{};
double _n_rows_31772{};
double _n_FR_31773{};
double _n_cx_31774{};
double _n_MID_31775{};
d::Array<d::Array<d::String,false>,false> _n_g_31776{};
std::function<double()> _n_rand_31777{};
d::Array<double,false> _n_H_31778{};
d::Array<std::array<double,3>,false> _n_stars_31779{};
d::Array<double,false> _n_count_31782{};
d::Array<double,false> _n_level_31783{};
std::function<d::String(double,std::shared_ptr<_n_Record_31842>)> _render;
double _n_band_31780(double _a0){double _n_k_31794=_a0;
return ((0.2*_n_k_31794)+(((0.3*_n_k_31794)*_n_k_31794)/26.0));}

double _n_sun_31781(double _a0,double _a1,double _a2){double _n_c_31795=_a0;
double _n_p_31796=_a1;
double _n_s_31797=_a2;
{
double _n_dx_31798=((_n_c_31795+0.5)-this->_n_cx_31774);
double _n_dy_31799=((_n_p_31796+0.5)-_n_SUN_Y_31763);
if(d::truth((((_n_dx_31798*_n_dx_31798)+(_n_dy_31799*_n_dy_31799))>(_n_SUN_R_31762*_n_SUN_R_31762)))){d::check_cancel();return 0.0;
}
double _n_k_31800=(_n_p_31796-(_n_SUN_Y_31763-7.0));
if(d::truth((_n_k_31800<0.0))){d::check_cancel();return 1.0;
}
return (d::truth(([&](){auto _n_left_31872=std::floor((this->_n_band_31780((_n_k_31800+1.0))-_n_s_31797));auto _n_right_31873=std::floor((this->_n_band_31780(_n_k_31800)-_n_s_31797));return (_n_left_31872==_n_right_31873);})())?1.0:0.0);

}
}

void _n_both_31784(d::Array<d::String,false> _a0,double _a1,d::String _a2,d::String _a3){d::Array<d::String,false> _n_row_31801=_a0;
double _n_c_31802=_a1;
d::String _n_l_31803=_a2;
d::String _n_r_31804=_a3;
{
if((d::truth((_n_c_31802>=0.0))&&d::truth((_n_c_31802<this->_n_cols_31771)))){d::check_cancel();(void)(([&](){auto&& _n_array_31874=_n_row_31801;auto _n_index_31875=_n_c_31802;auto _n_value_31876=_n_l_31803;d::put(_n_array_31874,_n_index_31875,_n_value_31876);return _n_value_31876;})());
}
if((d::truth((((2.0*this->_n_MID_31775)-_n_c_31802)>=0.0))&&d::truth((((2.0*this->_n_MID_31775)-_n_c_31802)<this->_n_cols_31771)))){d::check_cancel();(void)(([&](){auto&& _n_array_31877=_n_row_31801;auto _n_index_31878=((2.0*this->_n_MID_31775)-_n_c_31802);auto _n_value_31879=_n_r_31804;d::put(_n_array_31877,_n_index_31878,_n_value_31879);return _n_value_31879;})());
}

}
}

explicit Native_synthwave(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_31846=_n_meta_31759;
this->_n_cols_31771=_n_binding_31846->_p_cols;
this->_n_rows_31772=_n_binding_31846->_p_rows;
this->_n_FR_31773=(this->_n_rows_31772-_n_HZ_31761);
this->_n_cx_31774=(this->_n_cols_31771/2.0);
this->_n_MID_31775=std::floor(this->_n_cx_31774);
this->_n_g_31776=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_31772,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_31771));}));
this->_n_rand_31777=_n_mulberry32_31770(5.0);
this->_n_H_31778=d::Array<double,false>{6.0};
{double _n_c_31787=1.0;
for(;d::truth((_n_c_31787<=this->_n_cols_31771));(void)((_n_c_31787++))){d::check_cancel();double _n_d_31788=(std::fabs((_n_c_31787-this->_n_cx_31774))/this->_n_cx_31774);
double _n_want_31789=((1.0+(6.0*(_n_d_31788-0.25)))+(1.5*std::sin((_n_c_31787*0.45))));
double _n_h_31790=d::at(this->_n_H_31778,(_n_c_31787-1.0));
double _n_r_31791=this->_n_rand_31777();
double _n_step_31792=(d::truth((_n_r_31791<0.6))?d::sign(d::round((_n_want_31789-_n_h_31790))):(d::truth((_n_r_31791<0.8))?1.0:(-d::number(1.0))));
if(d::truth((_n_d_31788<0.25))){d::check_cancel();(void)((_n_step_31792=(d::truth((_n_h_31790>0.0))?(-d::number(1.0)):0.0)));
}else {d::check_cancel();if((d::truth(((_n_h_31790+_n_step_31792)<0.0))||d::truth(((_n_h_31790+_n_step_31792)>7.0)))){d::check_cancel();(void)((_n_step_31792=0.0));
}
}
(void)(this->_n_H_31778.push((_n_h_31790+_n_step_31792)));
}}
this->_n_stars_31779=d::Array<std::array<double,3>,false>{};
{double _n_i_31793=0.0;
for(;d::truth((_n_i_31793<24.0));(void)((_n_i_31793++))){d::check_cancel();(void)(this->_n_stars_31779.push(std::array<double,3>{std::floor((this->_n_rand_31777()*this->_n_cols_31771)),std::floor((this->_n_rand_31777()*(_n_HZ_31761-3.0))),this->_n_rand_31777()}));
}}
this->_n_count_31782=d::Array<double,false>(size_t(this->_n_FR_31773));
this->_n_level_31783=d::Array<double,false>(size_t(this->_n_FR_31773));
_render=[=]( double _a0,std::shared_ptr<_n_Record_31842> _a1) mutable ->d::String{double _n_t_31805=_a0;
{
{double _n_r_31806=0.0;
for(;d::truth((_n_r_31806<this->_n_rows_31772));(void)((_n_r_31806++))){d::check_cancel();(void)(d::at(this->_n_g_31776,_n_r_31806).fill(d::String(u" ")));
}}
for(auto &&_n_item_31847:this->_n_stars_31779){d::check_cancel();auto _n_binding_31848=_n_item_31847;
double _n_c_31807=d::at(_n_binding_31848,0.0);
double _n_r_31808=d::at(_n_binding_31848,1.0);
double _n_p_31809=d::at(_n_binding_31848,2.0);
{
double _n_tw_31810=std::sin(((_n_t_31805*(0.8+_n_p_31809))+(_n_p_31809*30.0)));
(void)(([&](){auto&& _n_array_31849=d::at(this->_n_g_31776,_n_r_31808);auto _n_index_31850=_n_c_31807;auto _n_value_31851=(d::truth((_n_tw_31810>0.6))?(d::truth((_n_p_31809<0.3))?d::String(u"+"):d::String(u"·")):(d::truth((_n_tw_31810>(-d::number(0.4))))?d::String(u"."):d::String(u" ")));d::put(_n_array_31849,_n_index_31850,_n_value_31851);return _n_value_31851;})());

}
}
double _n_s_31811=(_n_t_31805*0.6);
{double _n_r_31812=0.0;
for(;d::truth((_n_r_31812<_n_HZ_31761));(void)((_n_r_31812++))){d::check_cancel();{double _n_c_31813=0.0;
for(;d::truth((_n_c_31813<this->_n_cols_31771));(void)((_n_c_31813++))){d::check_cancel();double _n_top_31814=this->_n_sun_31781(_n_c_31813,(2.0*_n_r_31812),_n_s_31811);
double _n_bot_31815=this->_n_sun_31781(_n_c_31813,((2.0*_n_r_31812)+1.0),_n_s_31811);
if((d::truth(_n_top_31814)||d::truth(_n_bot_31815))){d::check_cancel();(void)(([&](){auto&& _n_array_31852=d::at(this->_n_g_31776,_n_r_31812);auto _n_index_31853=_n_c_31813;auto _n_value_31854=d::at(d::String(u" ▀▄█"),(_n_top_31814+(2.0*_n_bot_31815)));d::put(_n_array_31852,_n_index_31853,_n_value_31854);return _n_value_31854;})());
}
}}
}}
{double _n_c_31816=0.0;
for(;d::truth((_n_c_31816<this->_n_cols_31771));(void)((_n_c_31816++))){d::check_cancel();double _n_a_31817=d::at(this->_n_H_31778,_n_c_31816);
double _n_b_31818=d::at(this->_n_H_31778,(_n_c_31816+1.0));
if((d::truth((!d::truth(_n_a_31817)))&&d::truth((!d::truth(_n_b_31818))))){d::check_cancel();continue;
}
double _n_top_31819=((_n_HZ_31761-1.0)-d::minimum({_n_a_31817,_n_b_31818}));
(void)(([&](){auto&& _n_array_31855=d::at(this->_n_g_31776,_n_top_31819);auto _n_index_31856=_n_c_31816;auto _n_value_31857=(d::truth((_n_b_31818>_n_a_31817))?d::String(u"/"):(d::truth((_n_b_31818<_n_a_31817))?d::String(u"\\"):d::String(u"_")));d::put(_n_array_31855,_n_index_31856,_n_value_31857);return _n_value_31857;})());
{double _n_r_31820=(_n_top_31819+1.0);
for(;d::truth((_n_r_31820<_n_HZ_31761));(void)((_n_r_31820++))){d::check_cancel();(void)(([&](){auto&& _n_array_31858=d::at(this->_n_g_31776,_n_r_31820);auto _n_index_31859=_n_c_31816;auto _n_value_31860=d::String(u" ");d::put(_n_array_31858,_n_index_31859,_n_value_31860);return _n_value_31860;})());
}}
}}
double _n_n0_31821=d::mod((_n_t_31805*_n_SPEED_31768),1.0);
(void)(this->_n_count_31782.fill(0.0));
{double _n_n_31822=1.0;
for(;d::truth((_n_n_31822<400.0));(void)((_n_n_31822++))){d::check_cancel();double _n_e_31823=(_n_K_31764/(_n_n_31822-_n_n0_31821));
if(d::truth((_n_e_31823>=this->_n_FR_31773))){d::check_cancel();continue;
}
if(d::truth((_n_e_31823<1.0))){d::check_cancel();break;
}
double _n_y_31824=std::floor(_n_e_31823);
(void)(([&](){auto&& _n_array_31861=this->_n_count_31782;auto _n_index_31862=_n_y_31824;double _n_old_31863=d::number(d::at(_n_array_31861,_n_index_31862));d::put(_n_array_31861,_n_index_31862,_n_old_31863+(1.0));return _n_old_31863;})());
(void)(([&](){auto&& _n_array_31864=this->_n_level_31783;auto _n_index_31865=_n_y_31824;auto _n_value_31866=([&](){auto _n_argument_31867=2.0;auto _n_argument_31868=std::floor((d::mod(_n_e_31823,1.0)*3.0));return d::minimum({_n_argument_31867,_n_argument_31868});})();d::put(_n_array_31864,_n_index_31865,_n_value_31866);return _n_value_31866;})());
}}
d::Array<d::String,false> _n_kind_31825=d::map(this->_n_count_31782,[&]( double _a0,double _a1) mutable ->d::String{double _n_k_31826=_a0;
double _n_y_31827=_a1;
return (d::truth((_n_y_31827==0.0))?d::String(u"░"):(d::truth((_n_y_31827==1.0))?d::String(u"═"):(d::truth((_n_y_31827<_n_FAR_31765))?d::String(u"─"):(d::truth((_n_k_31826>1.0))?d::String(u"═"):(d::truth(_n_k_31826)?d::at(_n_LEVEL_31769,d::at(this->_n_level_31783,_n_y_31827)):d::String(u" "))))));});
double _n_VX_31828=(this->_n_MID_31775+0.5);
{double _n_y_31829=0.0;
for(;d::truth((_n_y_31829<this->_n_FR_31773));(void)((_n_y_31829++))){d::check_cancel();d::Array<d::String,false> _n_row_31830=d::at(this->_n_g_31776,(_n_HZ_31761+_n_y_31829));
d::String _n_k_31831=d::at(_n_kind_31825,_n_y_31829);
(void)(_n_row_31830.fill(_n_k_31831));
if(d::truth((_n_y_31829==0.0))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_31869=_n_row_31830;auto _n_index_31870=this->_n_MID_31775;auto _n_value_31871=(d::truth((_n_k_31831==d::String(u"─")))?d::String(u"┼"):(d::truth((_n_k_31831==d::String(u"═")))?d::String(u"╪"):d::String(u"│")));d::put(_n_array_31869,_n_index_31870,_n_value_31871);return _n_value_31871;})());
double _n_every_31832=(d::truth(((_n_S_31766*(_n_y_31829+0.5))>=2.4))?1.0:(d::truth((((2.0*_n_S_31766)*(_n_y_31829+0.5))>=2.4))?2.0:4.0));
{double _n_m_31833=_n_every_31832;
for(;d::truth((_n_m_31833<=_n_RAILS_31767));(void)((_n_m_31833=(_n_m_31833+_n_every_31832)))){d::check_cancel();double _n_sl_31834=(_n_m_31833*_n_S_31766);
double _n_xt_31835=(_n_VX_31828-(_n_sl_31834*_n_y_31829));
double _n_xb_31836=(_n_VX_31828-(_n_sl_31834*(_n_y_31829+1.0)));
if(d::truth((_n_xt_31835<0.0))){d::check_cancel();break;
}
if(d::truth((_n_sl_31834<1.3))){d::check_cancel();double _n_c_31837=std::floor((_n_VX_31828-(_n_sl_31834*(_n_y_31829+0.5))));
(void)(this->_n_both_31784(_n_row_31830,_n_c_31837,d::String(u"/"),d::String(u"\\")));
continue;
}
double _n_hi_31838=std::floor((_n_xt_31835-0.000001));
double _n_lo_31839=std::floor(_n_xb_31836);
if((d::truth((_n_k_31831==d::String(u" ")))&&d::truth((_n_y_31829>=_n_m_31833)))){d::check_cancel();{double _n_c_31840=d::maximum({0.0,(_n_lo_31839+1.0)});
for(;d::truth((_n_c_31840<_n_hi_31838));(void)((_n_c_31840++))){d::check_cancel();(void)(this->_n_both_31784(_n_row_31830,_n_c_31840,d::String(u"_"),d::String(u"_")));
}}
}
(void)(this->_n_both_31784(_n_row_31830,_n_hi_31838,d::String(u"/"),d::String(u"\\")));
}}
}}
return d::join(d::map(this->_n_g_31776,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_31841=_a0;
return d::join(_n_row_31841,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("synthwave").cols)*ascii::catalog_meta("synthwave").rows);auto _env=std::make_shared<_n_Record_31842>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &synthwave_meta(){return catalog_meta("synthwave");}
std::unique_ptr<Piece> make_synthwave(const AsciiPieceOptions &o){return std::make_unique<Native_synthwave>(o);}
}
