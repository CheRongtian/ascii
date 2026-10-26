// Direct, statically typed C++ from src/pieces/lorenz.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19886;
struct _n_Record_19963;
struct _n_Record_19886{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19886> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19886>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_19963{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19963> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19963>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_19886> _n_meta_19885=[](){return ([&](){auto _n_object_19966=std::make_shared<_n_Record_19886>();_n_object_19966->_p_name=d::String(u"lorenz attractor");_n_object_19966->_p_category=d::String(u"physics");_n_object_19966->_p_note=d::String(u"one lorenz trajectory looping both wings, older loops fading");_n_object_19966->_p_cols=60.0;_n_object_19966->_p_rows=22.0;_n_object_19966->_p_fps=30.0;return _n_object_19966;})();}();
const d::String _n_RAMP_19887=[](){return d::String(u" .:-=+*");}();
const double _n_DT_19888=[](){return 0.004;}();
const double _n_RATE_19889=[](){return 125.0;}();
const double _n_TRAIL_19890=[](){return 2400.0;}();
const double _n_LEAD_19891=[](){return 26.0;}();
const double _n_TILT_19892=[](){return 0.3;}();
const double _n_FACE_19893=[](){return 2.36;}();
const double _n_SWAY_19894=[](){return 0.6;}();
const double _n_SWAY_T_19895=[](){return 48.0;}();
const double _n_KNEE_19896=[](){return 0.8;}();
const double _n_AGE_19897=[](){return 1.5;}();
const double _n_FAR_19898=[](){return 0.3;}();
const double _n_PASS_19899=[](){return 0.06;}();

struct Native_lorenz final:ascii::Piece{
double _n_cols_19900{};
double _n_rows_19901{};
d::Array<float,true> _n_pts_19902{};
double _n_x_19903{};
double _n_y_19904{};
double _n_z_19905{};
double _n_head_19906{};
double _n_ct_19909{};
double _n_st_19910{};
double _n_halfH_19911{};
double _n_halfW_19912{};
double _n_k_19913{};
double _n_mid_19914{};
d::Array<float,true> _n_ink_19916{};
d::Array<uint8_t,true> _n_tip_19917{};
double _n_last_19918{};
double _n_owed_19919{};
std::function<d::String(double,std::shared_ptr<_n_Record_19963>)> _render;
d::Array<double,false> _n_f_19907(double _a0,double _a1,double _a2){double _n_x_19920=_a0;
double _n_y_19921=_a1;
double _n_z_19922=_a2;
return d::Array<double,false>{(10.0*(_n_y_19921-_n_x_19920)),((_n_x_19920*(28.0-_n_z_19922))-_n_y_19921),((_n_x_19920*_n_y_19921)-((8.0/3.0)*_n_z_19922))};}

void _n_step_19908(){{
auto _n_binding_19980=this->_n_f_19907(this->_n_x_19903,this->_n_y_19904,this->_n_z_19905);
double _n_a1_19923=d::at(_n_binding_19980,0.0);
double _n_b1_19924=d::at(_n_binding_19980,1.0);
double _n_c1_19925=d::at(_n_binding_19980,2.0);
auto _n_binding_19981=this->_n_f_19907((this->_n_x_19903+((_n_DT_19888/2.0)*_n_a1_19923)),(this->_n_y_19904+((_n_DT_19888/2.0)*_n_b1_19924)),(this->_n_z_19905+((_n_DT_19888/2.0)*_n_c1_19925)));
double _n_a2_19926=d::at(_n_binding_19981,0.0);
double _n_b2_19927=d::at(_n_binding_19981,1.0);
double _n_c2_19928=d::at(_n_binding_19981,2.0);
auto _n_binding_19982=this->_n_f_19907((this->_n_x_19903+((_n_DT_19888/2.0)*_n_a2_19926)),(this->_n_y_19904+((_n_DT_19888/2.0)*_n_b2_19927)),(this->_n_z_19905+((_n_DT_19888/2.0)*_n_c2_19928)));
double _n_a3_19929=d::at(_n_binding_19982,0.0);
double _n_b3_19930=d::at(_n_binding_19982,1.0);
double _n_c3_19931=d::at(_n_binding_19982,2.0);
auto _n_binding_19983=this->_n_f_19907((this->_n_x_19903+(_n_DT_19888*_n_a3_19929)),(this->_n_y_19904+(_n_DT_19888*_n_b3_19930)),(this->_n_z_19905+(_n_DT_19888*_n_c3_19931)));
double _n_a4_19932=d::at(_n_binding_19983,0.0);
double _n_b4_19933=d::at(_n_binding_19983,1.0);
double _n_c4_19934=d::at(_n_binding_19983,2.0);
(void)((this->_n_x_19903=(this->_n_x_19903+((_n_DT_19888/6.0)*(((_n_a1_19923+(2.0*_n_a2_19926))+(2.0*_n_a3_19929))+_n_a4_19932)))));
(void)((this->_n_y_19904=(this->_n_y_19904+((_n_DT_19888/6.0)*(((_n_b1_19924+(2.0*_n_b2_19927))+(2.0*_n_b3_19930))+_n_b4_19933)))));
(void)((this->_n_z_19905=(this->_n_z_19905+((_n_DT_19888/6.0)*(((_n_c1_19925+(2.0*_n_c2_19928))+(2.0*_n_c3_19931))+_n_c4_19934)))));
(void)(([&](){auto&& _n_array_19984=this->_n_pts_19902;auto _n_index_19985=(this->_n_head_19906*3.0);auto _n_value_19986=this->_n_x_19903;d::put(_n_array_19984,_n_index_19985,_n_value_19986);return _n_value_19986;})());
(void)(([&](){auto&& _n_array_19987=this->_n_pts_19902;auto _n_index_19988=((this->_n_head_19906*3.0)+1.0);auto _n_value_19989=this->_n_y_19904;d::put(_n_array_19987,_n_index_19988,_n_value_19989);return _n_value_19989;})());
(void)(([&](){auto&& _n_array_19990=this->_n_pts_19902;auto _n_index_19991=((this->_n_head_19906*3.0)+2.0);auto _n_value_19992=this->_n_z_19905;d::put(_n_array_19990,_n_index_19991,_n_value_19992);return _n_value_19992;})());
(void)((this->_n_head_19906=d::mod((this->_n_head_19906+1.0),_n_TRAIL_19890)));

}
}

double _n_ease_19915(double _a0){double _n_a_19936=_a0;
{
double _n_m_19937=std::fabs(_n_a_19936);
return (d::truth((_n_m_19937<=_n_KNEE_19896))?_n_a_19936:([&](){auto _n_left_19993=d::sign(_n_a_19936);auto _n_right_19994=(_n_KNEE_19896+((1.0-_n_KNEE_19896)*std::tanh(((_n_m_19937-_n_KNEE_19896)/(1.0-_n_KNEE_19896)))));return (_n_left_19993*_n_right_19994);})());

}
}

explicit Native_lorenz(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_19967=_n_meta_19885;
this->_n_cols_19900=_n_binding_19967->_p_cols;
this->_n_rows_19901=_n_binding_19967->_p_rows;
this->_n_pts_19902=d::Array<float,true>(size_t((_n_TRAIL_19890*3.0)));
this->_n_x_19903=1.0;
this->_n_y_19904=1.0;
this->_n_z_19905=1.0;
this->_n_head_19906=0.0;
{double _n_i_19935=0.0;
for(;d::truth((_n_i_19935<24000.0));(void)((_n_i_19935++))){d::check_cancel();(void)(this->_n_step_19908());
}}
this->_n_ct_19909=std::cos(_n_TILT_19892);
this->_n_st_19910=std::sin(_n_TILT_19892);
this->_n_halfH_19911=((this->_n_rows_19901-3.0)/2.0);
this->_n_halfW_19912=((this->_n_cols_19900/2.0)-2.5);
this->_n_k_19913=((4.0*this->_n_halfH_19911)/33.5);
this->_n_mid_19914=1.3;
this->_n_ink_19916=d::Array<float,true>(size_t((this->_n_cols_19900*this->_n_rows_19901)));
this->_n_tip_19917=d::Array<uint8_t,true>(size_t((this->_n_cols_19900*this->_n_rows_19901)));
this->_n_last_19918=0.0;
this->_n_owed_19919=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_19963> _a1) mutable ->d::String{double _n_t_19938=_a0;
{
(void)((this->_n_owed_19919=(this->_n_owed_19919+(([&](){auto _n_argument_19968=d::maximum({(_n_t_19938-this->_n_last_19918),0.0});auto _n_argument_19969=0.1;return d::minimum({_n_argument_19968,_n_argument_19969});})()*_n_RATE_19889))));
(void)((this->_n_last_19918=_n_t_19938));
{for(;d::truth((this->_n_owed_19919>=1.0));(void)((this->_n_owed_19919--))){d::check_cancel();(void)(this->_n_step_19908());
}}
double _n_turn_19939=(_n_FACE_19893+(_n_SWAY_19894*std::sin((((2.0*ascii::PI)*_n_t_19938)/_n_SWAY_T_19895))));
double _n_c_19940=std::cos(_n_turn_19939);
double _n_s_19941=std::sin(_n_turn_19939);
(void)(this->_n_ink_19916.fill(0.0));
(void)(this->_n_tip_19917.fill(0.0));
double _n_sum_19942=0.0;
{double _n_n_19943=0.0;
for(;d::truth((_n_n_19943<_n_TRAIL_19890));(void)((_n_n_19943++))){d::check_cancel();double _n_v_19944=((d::at(this->_n_pts_19902,(_n_n_19943*3.0))*_n_s_19941)+(d::at(this->_n_pts_19902,((_n_n_19943*3.0)+1.0))*_n_c_19940));
(void)((_n_sum_19942=(_n_sum_19942+(_n_v_19944*_n_v_19944))));
}}
double _n_deep_19945=(1.0/(3.0*std::sqrt((_n_sum_19942/_n_TRAIL_19890))));
double _n_hc_19946=0.0;
double _n_prev_19947=(-d::number(1.0));
{double _n_n_19948=0.0;
for(;d::truth((_n_n_19948<_n_TRAIL_19890));(void)((_n_n_19948++))){d::check_cancel();double _n_i_19949=(d::mod((this->_n_head_19906+_n_n_19948),_n_TRAIL_19890)*3.0);
double _n_u_19950=((d::at(this->_n_pts_19902,_n_i_19949)*_n_c_19940)-(d::at(this->_n_pts_19902,(_n_i_19949+1.0))*_n_s_19941));
double _n_v_19951=((d::at(this->_n_pts_19902,_n_i_19949)*_n_s_19941)+(d::at(this->_n_pts_19902,(_n_i_19949+1.0))*_n_c_19940));
double _n_h_19952=(((d::at(this->_n_pts_19902,(_n_i_19949+2.0))-25.0)*this->_n_ct_19909)-(_n_v_19951*this->_n_st_19910));
double _n_col_19953=d::round((((this->_n_cols_19900/2.0)-0.5)+(this->_n_ease_19915(((_n_u_19950*this->_n_k_19913)/this->_n_halfW_19912))*this->_n_halfW_19912)));
double _n_row_19954=d::round((((this->_n_rows_19901/2.0)-0.5)-(this->_n_ease_19915(((((_n_h_19952-this->_n_mid_19914)*this->_n_k_19913)*0.5)/this->_n_halfH_19911))*this->_n_halfH_19911)));
if((((d::truth((_n_col_19953<0.0))||d::truth((_n_col_19953>=this->_n_cols_19900)))||d::truth((_n_row_19954<0.0)))||d::truth((_n_row_19954>=this->_n_rows_19901)))){d::check_cancel();continue;
}
double _n_q_19955=((_n_row_19954*this->_n_cols_19900)+_n_col_19953);
double _n_age_19956=(_n_n_19948/_n_TRAIL_19890);
double _n_near_19957=([&](){auto _n_argument_19970=1.0;auto _n_argument_19971=d::maximum({0.0,(0.5-(_n_v_19951*_n_deep_19945))});return d::minimum({_n_argument_19970,_n_argument_19971});})();
double _n_w_19958=(std::pow(_n_age_19956,_n_AGE_19897)*(_n_FAR_19898+(((1.0-_n_FAR_19898)*_n_near_19957)*_n_near_19957)));
if(d::truth((_n_q_19955!=_n_prev_19947))){d::check_cancel();(void)(([&](){auto&& _n_array_19972=this->_n_ink_19916;auto _n_index_19973=_n_q_19955;auto _n_value_19974=(d::maximum({d::at(this->_n_ink_19916,_n_q_19955),_n_w_19958})+(d::truth((d::at(this->_n_ink_19916,_n_q_19955)>0.0))?_n_PASS_19899:0.0));d::put(_n_array_19972,_n_index_19973,_n_value_19974);return _n_value_19974;})());
}
(void)((_n_prev_19947=_n_q_19955));
if(d::truth((_n_n_19948>=(_n_TRAIL_19890-_n_LEAD_19891)))){d::check_cancel();(void)(([&](){auto&& _n_array_19975=this->_n_tip_19917;auto _n_index_19976=_n_q_19955;auto _n_value_19977=1.0;d::put(_n_array_19975,_n_index_19976,_n_value_19977);return _n_value_19977;})());
}
(void)((_n_hc_19946=_n_q_19955));
}}
d::String _n_out_19959=d::String(u"");
{double _n_r_19960=0.0;
for(;d::truth((_n_r_19960<this->_n_rows_19901));(void)((_n_r_19960++))){d::check_cancel();if(d::truth(_n_r_19960)){d::check_cancel();(void)((_n_out_19959=(d::string(_n_out_19959)+d::string(d::String(u"\n")))));
}
{double _n_q_19961=0.0;
for(;d::truth((_n_q_19961<this->_n_cols_19900));(void)((_n_q_19961++))){d::check_cancel();double _n_i_19962=((_n_r_19960*this->_n_cols_19900)+_n_q_19961);
if(d::truth((_n_i_19962==_n_hc_19946))){d::check_cancel();(void)((_n_out_19959=(d::string(_n_out_19959)+d::string(d::String(u"@")))));
}else {d::check_cancel();if(d::truth(d::at(this->_n_tip_19917,_n_i_19962))){d::check_cancel();(void)((_n_out_19959=(d::string(_n_out_19959)+d::string(d::String(u"#")))));
}else {d::check_cancel();(void)((_n_out_19959=(d::string(_n_out_19959)+d::string(d::at(_n_RAMP_19887,([&](){auto _n_argument_19978=(double(_n_RAMP_19887.size())-1.0);auto _n_argument_19979=std::floor((d::at(this->_n_ink_19916,_n_i_19962)*double(_n_RAMP_19887.size())));return d::minimum({_n_argument_19978,_n_argument_19979});})())))));
}
}
}}
}}
return _n_out_19959;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lorenz").cols)*ascii::catalog_meta("lorenz").rows);auto _env=std::make_shared<_n_Record_19963>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lorenz_meta(){return catalog_meta("lorenz");}
std::unique_ptr<Piece> make_lorenz(const AsciiPieceOptions &o){return std::make_unique<Native_lorenz>(o);}
}
