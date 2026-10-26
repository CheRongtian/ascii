// Direct, statically typed C++ from src/pieces/lorenz.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19885;
struct _n_Record_19962;
struct _n_Record_19885{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19885> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19885>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_19962{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_19962> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19962>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_19885> _n_meta_19884=[](){return ([&](){auto _n_object_19965=std::make_shared<_n_Record_19885>();_n_object_19965->_p_name=d::String(u"lorenz attractor");_n_object_19965->_p_category=d::String(u"physics");_n_object_19965->_p_note=d::String(u"one lorenz trajectory looping both wings, older loops fading");_n_object_19965->_p_cols=60.0;_n_object_19965->_p_rows=22.0;_n_object_19965->_p_fps=30.0;return _n_object_19965;})();}();
const d::String _n_RAMP_19886=[](){return d::String(u" .:-=+*");}();
const double _n_DT_19887=[](){return 0.004;}();
const double _n_RATE_19888=[](){return 125.0;}();
const double _n_TRAIL_19889=[](){return 2400.0;}();
const double _n_LEAD_19890=[](){return 26.0;}();
const double _n_TILT_19891=[](){return 0.3;}();
const double _n_FACE_19892=[](){return 2.36;}();
const double _n_SWAY_19893=[](){return 0.6;}();
const double _n_SWAY_T_19894=[](){return 48.0;}();
const double _n_KNEE_19895=[](){return 0.8;}();
const double _n_AGE_19896=[](){return 1.5;}();
const double _n_FAR_19897=[](){return 0.3;}();
const double _n_PASS_19898=[](){return 0.06;}();

struct Native_lorenz final:ascii::Piece{
double _n_cols_19899{};
double _n_rows_19900{};
d::Array<float,true> _n_pts_19901{};
double _n_x_19902{};
double _n_y_19903{};
double _n_z_19904{};
double _n_head_19905{};
double _n_ct_19908{};
double _n_st_19909{};
double _n_halfH_19910{};
double _n_halfW_19911{};
double _n_k_19912{};
double _n_mid_19913{};
d::Array<float,true> _n_ink_19915{};
d::Array<uint8_t,true> _n_tip_19916{};
double _n_last_19917{};
double _n_owed_19918{};
std::function<d::String(double,std::shared_ptr<_n_Record_19962>)> _render;
std::array<double,3> _n_f_19906(double _a0,double _a1,double _a2){double _n_x_19919=_a0;
double _n_y_19920=_a1;
double _n_z_19921=_a2;
return std::array<double,3>{(10.0*(_n_y_19920-_n_x_19919)),((_n_x_19919*(28.0-_n_z_19921))-_n_y_19920),((_n_x_19919*_n_y_19920)-((8.0/3.0)*_n_z_19921))};}

void _n_step_19907(){{
auto _n_binding_19979=this->_n_f_19906(this->_n_x_19902,this->_n_y_19903,this->_n_z_19904);
double _n_a1_19922=d::at(_n_binding_19979,0.0);
double _n_b1_19923=d::at(_n_binding_19979,1.0);
double _n_c1_19924=d::at(_n_binding_19979,2.0);
auto _n_binding_19980=this->_n_f_19906((this->_n_x_19902+((_n_DT_19887/2.0)*_n_a1_19922)),(this->_n_y_19903+((_n_DT_19887/2.0)*_n_b1_19923)),(this->_n_z_19904+((_n_DT_19887/2.0)*_n_c1_19924)));
double _n_a2_19925=d::at(_n_binding_19980,0.0);
double _n_b2_19926=d::at(_n_binding_19980,1.0);
double _n_c2_19927=d::at(_n_binding_19980,2.0);
auto _n_binding_19981=this->_n_f_19906((this->_n_x_19902+((_n_DT_19887/2.0)*_n_a2_19925)),(this->_n_y_19903+((_n_DT_19887/2.0)*_n_b2_19926)),(this->_n_z_19904+((_n_DT_19887/2.0)*_n_c2_19927)));
double _n_a3_19928=d::at(_n_binding_19981,0.0);
double _n_b3_19929=d::at(_n_binding_19981,1.0);
double _n_c3_19930=d::at(_n_binding_19981,2.0);
auto _n_binding_19982=this->_n_f_19906((this->_n_x_19902+(_n_DT_19887*_n_a3_19928)),(this->_n_y_19903+(_n_DT_19887*_n_b3_19929)),(this->_n_z_19904+(_n_DT_19887*_n_c3_19930)));
double _n_a4_19931=d::at(_n_binding_19982,0.0);
double _n_b4_19932=d::at(_n_binding_19982,1.0);
double _n_c4_19933=d::at(_n_binding_19982,2.0);
(void)((this->_n_x_19902=(this->_n_x_19902+((_n_DT_19887/6.0)*(((_n_a1_19922+(2.0*_n_a2_19925))+(2.0*_n_a3_19928))+_n_a4_19931)))));
(void)((this->_n_y_19903=(this->_n_y_19903+((_n_DT_19887/6.0)*(((_n_b1_19923+(2.0*_n_b2_19926))+(2.0*_n_b3_19929))+_n_b4_19932)))));
(void)((this->_n_z_19904=(this->_n_z_19904+((_n_DT_19887/6.0)*(((_n_c1_19924+(2.0*_n_c2_19927))+(2.0*_n_c3_19930))+_n_c4_19933)))));
(void)(([&](){auto&& _n_array_19983=this->_n_pts_19901;auto _n_index_19984=(this->_n_head_19905*3.0);auto _n_value_19985=this->_n_x_19902;d::put(_n_array_19983,_n_index_19984,_n_value_19985);return _n_value_19985;})());
(void)(([&](){auto&& _n_array_19986=this->_n_pts_19901;auto _n_index_19987=((this->_n_head_19905*3.0)+1.0);auto _n_value_19988=this->_n_y_19903;d::put(_n_array_19986,_n_index_19987,_n_value_19988);return _n_value_19988;})());
(void)(([&](){auto&& _n_array_19989=this->_n_pts_19901;auto _n_index_19990=((this->_n_head_19905*3.0)+2.0);auto _n_value_19991=this->_n_z_19904;d::put(_n_array_19989,_n_index_19990,_n_value_19991);return _n_value_19991;})());
(void)((this->_n_head_19905=d::mod((this->_n_head_19905+1.0),_n_TRAIL_19889)));

}
}

double _n_ease_19914(double _a0){double _n_a_19935=_a0;
{
double _n_m_19936=std::fabs(_n_a_19935);
return (d::truth((_n_m_19936<=_n_KNEE_19895))?_n_a_19935:([&](){auto _n_left_19992=d::sign(_n_a_19935);auto _n_right_19993=(_n_KNEE_19895+((1.0-_n_KNEE_19895)*std::tanh(((_n_m_19936-_n_KNEE_19895)/(1.0-_n_KNEE_19895)))));return (_n_left_19992*_n_right_19993);})());

}
}

explicit Native_lorenz(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_19966=_n_meta_19884;
this->_n_cols_19899=_n_binding_19966->_p_cols;
this->_n_rows_19900=_n_binding_19966->_p_rows;
this->_n_pts_19901=d::Array<float,true>(size_t((_n_TRAIL_19889*3.0)));
this->_n_x_19902=1.0;
this->_n_y_19903=1.0;
this->_n_z_19904=1.0;
this->_n_head_19905=0.0;
{double _n_i_19934=0.0;
for(;d::truth((_n_i_19934<24000.0));(void)((_n_i_19934++))){d::check_cancel();(void)(this->_n_step_19907());
}}
this->_n_ct_19908=std::cos(_n_TILT_19891);
this->_n_st_19909=std::sin(_n_TILT_19891);
this->_n_halfH_19910=((this->_n_rows_19900-3.0)/2.0);
this->_n_halfW_19911=((this->_n_cols_19899/2.0)-2.5);
this->_n_k_19912=((4.0*this->_n_halfH_19910)/33.5);
this->_n_mid_19913=1.3;
this->_n_ink_19915=d::Array<float,true>(size_t((this->_n_cols_19899*this->_n_rows_19900)));
this->_n_tip_19916=d::Array<uint8_t,true>(size_t((this->_n_cols_19899*this->_n_rows_19900)));
this->_n_last_19917=0.0;
this->_n_owed_19918=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_19962> _a1) mutable ->d::String{double _n_t_19937=_a0;
{
(void)((this->_n_owed_19918=(this->_n_owed_19918+(([&](){auto _n_argument_19967=d::maximum({(_n_t_19937-this->_n_last_19917),0.0});auto _n_argument_19968=0.1;return d::minimum({_n_argument_19967,_n_argument_19968});})()*_n_RATE_19888))));
(void)((this->_n_last_19917=_n_t_19937));
{for(;d::truth((this->_n_owed_19918>=1.0));(void)((this->_n_owed_19918--))){d::check_cancel();(void)(this->_n_step_19907());
}}
double _n_turn_19938=(_n_FACE_19892+(_n_SWAY_19893*std::sin((((2.0*ascii::PI)*_n_t_19937)/_n_SWAY_T_19894))));
double _n_c_19939=std::cos(_n_turn_19938);
double _n_s_19940=std::sin(_n_turn_19938);
(void)(this->_n_ink_19915.fill(0.0));
(void)(this->_n_tip_19916.fill(0.0));
double _n_sum_19941=0.0;
{double _n_n_19942=0.0;
for(;d::truth((_n_n_19942<_n_TRAIL_19889));(void)((_n_n_19942++))){d::check_cancel();double _n_v_19943=((d::at(this->_n_pts_19901,(_n_n_19942*3.0))*_n_s_19940)+(d::at(this->_n_pts_19901,((_n_n_19942*3.0)+1.0))*_n_c_19939));
(void)((_n_sum_19941=(_n_sum_19941+(_n_v_19943*_n_v_19943))));
}}
double _n_deep_19944=(1.0/(3.0*std::sqrt((_n_sum_19941/_n_TRAIL_19889))));
double _n_hc_19945=0.0;
double _n_prev_19946=(-d::number(1.0));
{double _n_n_19947=0.0;
for(;d::truth((_n_n_19947<_n_TRAIL_19889));(void)((_n_n_19947++))){d::check_cancel();double _n_i_19948=(d::mod((this->_n_head_19905+_n_n_19947),_n_TRAIL_19889)*3.0);
double _n_u_19949=((d::at(this->_n_pts_19901,_n_i_19948)*_n_c_19939)-(d::at(this->_n_pts_19901,(_n_i_19948+1.0))*_n_s_19940));
double _n_v_19950=((d::at(this->_n_pts_19901,_n_i_19948)*_n_s_19940)+(d::at(this->_n_pts_19901,(_n_i_19948+1.0))*_n_c_19939));
double _n_h_19951=(((d::at(this->_n_pts_19901,(_n_i_19948+2.0))-25.0)*this->_n_ct_19908)-(_n_v_19950*this->_n_st_19909));
double _n_col_19952=d::round((((this->_n_cols_19899/2.0)-0.5)+(this->_n_ease_19914(((_n_u_19949*this->_n_k_19912)/this->_n_halfW_19911))*this->_n_halfW_19911)));
double _n_row_19953=d::round((((this->_n_rows_19900/2.0)-0.5)-(this->_n_ease_19914(((((_n_h_19951-this->_n_mid_19913)*this->_n_k_19912)*0.5)/this->_n_halfH_19910))*this->_n_halfH_19910)));
if((((d::truth((_n_col_19952<0.0))||d::truth((_n_col_19952>=this->_n_cols_19899)))||d::truth((_n_row_19953<0.0)))||d::truth((_n_row_19953>=this->_n_rows_19900)))){d::check_cancel();continue;
}
double _n_q_19954=((_n_row_19953*this->_n_cols_19899)+_n_col_19952);
double _n_age_19955=(_n_n_19947/_n_TRAIL_19889);
double _n_near_19956=([&](){auto _n_argument_19969=1.0;auto _n_argument_19970=d::maximum({0.0,(0.5-(_n_v_19950*_n_deep_19944))});return d::minimum({_n_argument_19969,_n_argument_19970});})();
double _n_w_19957=(std::pow(_n_age_19955,_n_AGE_19896)*(_n_FAR_19897+(((1.0-_n_FAR_19897)*_n_near_19956)*_n_near_19956)));
if(d::truth((_n_q_19954!=_n_prev_19946))){d::check_cancel();(void)(([&](){auto&& _n_array_19971=this->_n_ink_19915;auto _n_index_19972=_n_q_19954;auto _n_value_19973=(d::maximum({d::at(this->_n_ink_19915,_n_q_19954),_n_w_19957})+(d::truth((d::at(this->_n_ink_19915,_n_q_19954)>0.0))?_n_PASS_19898:0.0));d::put(_n_array_19971,_n_index_19972,_n_value_19973);return _n_value_19973;})());
}
(void)((_n_prev_19946=_n_q_19954));
if(d::truth((_n_n_19947>=(_n_TRAIL_19889-_n_LEAD_19890)))){d::check_cancel();(void)(([&](){auto&& _n_array_19974=this->_n_tip_19916;auto _n_index_19975=_n_q_19954;auto _n_value_19976=1.0;d::put(_n_array_19974,_n_index_19975,_n_value_19976);return _n_value_19976;})());
}
(void)((_n_hc_19945=_n_q_19954));
}}
d::String _n_out_19958=d::String(u"");
{double _n_r_19959=0.0;
for(;d::truth((_n_r_19959<this->_n_rows_19900));(void)((_n_r_19959++))){d::check_cancel();if(d::truth(_n_r_19959)){d::check_cancel();(void)((_n_out_19958=(d::string(_n_out_19958)+d::string(d::String(u"\n")))));
}
{double _n_q_19960=0.0;
for(;d::truth((_n_q_19960<this->_n_cols_19899));(void)((_n_q_19960++))){d::check_cancel();double _n_i_19961=((_n_r_19959*this->_n_cols_19899)+_n_q_19960);
if(d::truth((_n_i_19961==_n_hc_19945))){d::check_cancel();(void)((_n_out_19958=(d::string(_n_out_19958)+d::string(d::String(u"@")))));
}else {d::check_cancel();if(d::truth(d::at(this->_n_tip_19916,_n_i_19961))){d::check_cancel();(void)((_n_out_19958=(d::string(_n_out_19958)+d::string(d::String(u"#")))));
}else {d::check_cancel();(void)((_n_out_19958=(d::string(_n_out_19958)+d::string(d::at(_n_RAMP_19886,([&](){auto _n_argument_19977=(double(_n_RAMP_19886.size())-1.0);auto _n_argument_19978=std::floor((d::at(this->_n_ink_19915,_n_i_19961)*double(_n_RAMP_19886.size())));return d::minimum({_n_argument_19977,_n_argument_19978});})())))));
}
}
}}
}}
return _n_out_19958;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lorenz").cols)*ascii::catalog_meta("lorenz").rows);auto _env=std::make_shared<_n_Record_19962>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lorenz_meta(){return catalog_meta("lorenz");}
std::unique_ptr<Piece> make_lorenz(const AsciiPieceOptions &o){return std::make_unique<Native_lorenz>(o);}
}
