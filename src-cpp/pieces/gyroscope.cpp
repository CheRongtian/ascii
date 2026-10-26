// Direct, statically typed C++ from src/pieces/gyroscope.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13113;
struct _n_Record_13224;
struct _n_Record_13113{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13113> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13113>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13224{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13224> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13224>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_rx_13116(double _a0);
d::Array<double,false> _n_ry_13117(double _a0);
d::Array<double,false> _n_mul_13118(d::Array<double,false> _a0,d::Array<double,false> _a1);
d::Array<double,false> _n_unit_13119(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_13113> _n_meta_13112=[](){return ([&](){auto _n_object_13245=std::make_shared<_n_Record_13113>();_n_object_13245->_p_name=d::String(u"gyroscope");_n_object_13245->_p_category=d::String(u"shapes");_n_object_13245->_p_note=d::String(u"gimbals swing round a spinning rotor whose axle holds still");_n_object_13245->_p_cols=60.0;_n_object_13245->_p_rows=32.0;_n_object_13245->_p_fps=30.0;return _n_object_13245;})();}();
const d::String _n_RAMP_13114=[](){return d::String(u".,-:;=+*#%@");}();
const double _n_TAU_13115=[](){return (ascii::PI*2.0);}();
d::Array<double,false> _n_rx_13116(double _a0){double _n_a_13151=_a0;
{
double _n_c_13152=std::cos(_n_a_13151);
double _n_s_13153=std::sin(_n_a_13151);
return d::Array<double,false>{1.0,0.0,0.0,0.0,_n_c_13152,(-d::number(_n_s_13153)),0.0,_n_s_13153,_n_c_13152};

}
}

d::Array<double,false> _n_ry_13117(double _a0){double _n_a_13154=_a0;
{
double _n_c_13155=std::cos(_n_a_13154);
double _n_s_13156=std::sin(_n_a_13154);
return d::Array<double,false>{_n_c_13155,0.0,_n_s_13156,0.0,1.0,0.0,(-d::number(_n_s_13156)),0.0,_n_c_13155};

}
}

d::Array<double,false> _n_mul_13118(d::Array<double,false> _a0,d::Array<double,false> _a1){d::Array<double,false> _n_A_13157=_a0;
d::Array<double,false> _n_B_13158=_a1;
{
d::Array<double,false> _n_M_13159=d::Array<double,false>{};
{double _n_i_13160=0.0;
for(;d::truth((_n_i_13160<3.0));(void)((_n_i_13160++))){d::check_cancel();{double _n_j_13161=0.0;
for(;d::truth((_n_j_13161<3.0));(void)((_n_j_13161++))){d::check_cancel();(void)(_n_M_13159.push((((d::at(_n_A_13157,(_n_i_13160*3.0))*d::at(_n_B_13158,_n_j_13161))+(d::at(_n_A_13157,((_n_i_13160*3.0)+1.0))*d::at(_n_B_13158,(3.0+_n_j_13161))))+(d::at(_n_A_13157,((_n_i_13160*3.0)+2.0))*d::at(_n_B_13158,(6.0+_n_j_13161))))));
}}
}}
return _n_M_13159;

}
}

d::Array<double,false> _n_unit_13119(double _a0,double _a1,double _a2){double _n_x_13162=_a0;
double _n_y_13163=_a1;
double _n_z_13164=_a2;
{
double _n_m_13165=d::hypot(std::initializer_list<double>{_n_x_13162,_n_y_13163,_n_z_13164});
return d::Array<double,false>{(_n_x_13162/_n_m_13165),(_n_y_13163/_n_m_13165),(_n_z_13164/_n_m_13165)};

}
}

struct Native_gyroscope final:ascii::Piece{
double _n_cols_13120{};
double _n_rows_13121{};
double _n_K2_13122{};
double _n_K1_13123{};
double _n_RO_13124{};
double _n_RM_13125{};
double _n_RI_13126{};
double _n_TUBE_13127{};
double _n_ROTOR_13128{};
double _n_HALF_13129{};
double _n_RIM_13130{};
d::Array<double,false> _n_axle_13131{};
d::Array<double,false> _n_view_13132{};
d::Array<double,false> _n_L_13133{};
d::Array<double,false> _n_H_13134{};
d::Array<d::String,false> _n_out_13135{};
d::Array<float,true> _n_depth_13136{};
d::Array<uint8_t,true> _n_part_13137{};
d::Array<double,false> _n_gap_13138{};
double _n_N_13139{};
d::Array<double,false> _n_CV_13140{};
d::Array<double,false> _n_SV_13141{};
d::Array<double,false> _n_W_13142{};
double _n_id_13143{};
double _n_gain_13144{};
bool _n_paper_13145{};
std::function<d::String(double,std::shared_ptr<_n_Record_13224>)> _render;
void _n_plot_13146(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::optional<double> _a6){double _n_x_13167=_a0;
double _n_y_13168=_a1;
double _n_z_13169=_a2;
double _n_nx_13170=_a3;
double _n_ny_13171=_a4;
double _n_nz_13172=_a5;
double _n_k_13173=(d::present(_a6)?d::read(_a6):1.0);
{
double _n_X_13174=(((d::at(this->_n_W_13142,0.0)*_n_x_13167)+(d::at(this->_n_W_13142,1.0)*_n_y_13168))+(d::at(this->_n_W_13142,2.0)*_n_z_13169));
double _n_Y_13175=(((d::at(this->_n_W_13142,3.0)*_n_x_13167)+(d::at(this->_n_W_13142,4.0)*_n_y_13168))+(d::at(this->_n_W_13142,5.0)*_n_z_13169));
double _n_Z_13176=(((d::at(this->_n_W_13142,6.0)*_n_x_13167)+(d::at(this->_n_W_13142,7.0)*_n_y_13168))+(d::at(this->_n_W_13142,8.0)*_n_z_13169));
double _n_ooz_13177=(1.0/(this->_n_K2_13122+_n_Z_13176));
double _n_col_13178=std::floor(((this->_n_cols_13120/2.0)+((this->_n_K1_13123*_n_ooz_13177)*_n_X_13174)));
double _n_row_13179=std::floor((((this->_n_rows_13121/2.0)-2.0)-(((this->_n_K1_13123*0.5)*_n_ooz_13177)*_n_Y_13175)));
if((((d::truth((_n_col_13178<0.0))||d::truth((_n_col_13178>=this->_n_cols_13120)))||d::truth((_n_row_13179<0.0)))||d::truth((_n_row_13179>=this->_n_rows_13121)))){d::check_cancel();return;
}
double _n_c_13180=(_n_col_13178+(_n_row_13179*this->_n_cols_13120));
if(d::truth((_n_ooz_13177<=d::at(this->_n_depth_13136,_n_c_13180)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_13264=this->_n_depth_13136;auto _n_index_13265=_n_c_13180;auto _n_value_13266=_n_ooz_13177;d::put(_n_array_13264,_n_index_13265,_n_value_13266);return _n_value_13266;})());
(void)(([&](){auto&& _n_array_13267=this->_n_part_13137;auto _n_index_13268=_n_c_13180;auto _n_value_13269=this->_n_id_13143;d::put(_n_array_13267,_n_index_13268,_n_value_13269);return _n_value_13269;})());
double _n_NX_13181=(((d::at(this->_n_W_13142,0.0)*_n_nx_13170)+(d::at(this->_n_W_13142,1.0)*_n_ny_13171))+(d::at(this->_n_W_13142,2.0)*_n_nz_13172));
double _n_NY_13182=(((d::at(this->_n_W_13142,3.0)*_n_nx_13170)+(d::at(this->_n_W_13142,4.0)*_n_ny_13171))+(d::at(this->_n_W_13142,5.0)*_n_nz_13172));
double _n_NZ_13183=(((d::at(this->_n_W_13142,6.0)*_n_nx_13170)+(d::at(this->_n_W_13142,7.0)*_n_ny_13171))+(d::at(this->_n_W_13142,8.0)*_n_nz_13172));
double _n_m_13184=((d::truth((_n_NZ_13183>0.0))?(-d::number(1.0)):1.0)/d::hypot(std::initializer_list<double>{_n_NX_13181,_n_NY_13182,_n_NZ_13183}));
(void)((((_n_NX_13181=(_n_NX_13181*_n_m_13184)),(_n_NY_13182=(_n_NY_13182*_n_m_13184))),(_n_NZ_13183=(_n_NZ_13183*_n_m_13184))));
double _n_diff_13185=std::pow((((((_n_NX_13181*d::at(this->_n_L_13133,0.0))+(_n_NY_13182*d::at(this->_n_L_13133,1.0)))+(_n_NZ_13183*d::at(this->_n_L_13133,2.0)))+1.0)/2.0),2.0);
double _n_spec_13186=std::pow(d::maximum({0.0,(((_n_NX_13181*d::at(this->_n_H_13134,0.0))+(_n_NY_13182*d::at(this->_n_H_13134,1.0)))+(_n_NZ_13183*d::at(this->_n_H_13134,2.0)))}),24.0);
double _n_near_13187=(0.55+(0.45*([&](){auto _n_argument_13270=1.0;auto _n_argument_13271=d::maximum({0.0,(0.5-(0.6*_n_Z_13176))});return d::minimum({_n_argument_13270,_n_argument_13271});})()));
double _n_i_13188=d::round((d::minimum({1.0,(((((0.08+(0.7*_n_diff_13185))+(0.45*_n_spec_13186))*_n_near_13187)*_n_k_13173)*this->_n_gain_13144)})*(double(_n_RAMP_13114.size())-1.0)));
(void)(([&](){auto&& _n_array_13272=this->_n_out_13135;auto _n_index_13273=_n_c_13180;auto _n_value_13274=d::at(_n_RAMP_13114,(d::truth(this->_n_paper_13145)?((double(_n_RAMP_13114.size())-1.0)-_n_i_13188):_n_i_13188));d::put(_n_array_13272,_n_index_13273,_n_value_13274);return _n_value_13274;})());

}
}

void _n_ring_13147(double _a0,double _a1){double _n_R_13189=_a0;
double _n_steps_13190=_a1;
{
{double _n_i_13191=0.0;
for(;d::truth((_n_i_13191<_n_steps_13190));(void)((_n_i_13191++))){d::check_cancel();double _n_cu_13192=std::cos(((_n_i_13191/_n_steps_13190)*_n_TAU_13115));
double _n_su_13193=std::sin(((_n_i_13191/_n_steps_13190)*_n_TAU_13115));
{double _n_j_13194=0.0;
for(;d::truth((_n_j_13194<this->_n_N_13139));(void)((_n_j_13194++))){d::check_cancel();double _n_h_13195=(_n_R_13189+(this->_n_TUBE_13127*d::at(this->_n_CV_13140,_n_j_13194)));
(void)(this->_n_plot_13146((_n_h_13195*_n_cu_13192),(_n_h_13195*_n_su_13193),(this->_n_TUBE_13127*d::at(this->_n_SV_13141,_n_j_13194)),(d::at(this->_n_CV_13140,_n_j_13194)*_n_cu_13192),(d::at(this->_n_CV_13140,_n_j_13194)*_n_su_13193),d::at(this->_n_SV_13141,_n_j_13194),std::optional<double>{}));
}}
}}

}
}

void _n_pin_13148(double _a0,double _a1,double _a2,double _a3){double _n_ax_13196=_a0;
double _n_a_13197=_a1;
double _n_b_13198=_a2;
double _n_r_13199=_a3;
{
(void)((this->_n_gain_13144=1.5));
double _n_n_13200=std::ceil((std::fabs((_n_b_13198-_n_a_13197))/0.02));
{double _n_i_13201=0.0;
for(;d::truth((_n_i_13201<=_n_n_13200));(void)((_n_i_13201++))){d::check_cancel();double _n_s_13202=(_n_a_13197+(((_n_b_13198-_n_a_13197)*_n_i_13201)/_n_n_13200));
{double _n_j_13203=0.0;
for(;d::truth((_n_j_13203<this->_n_N_13139));(void)((_n_j_13203++))){d::check_cancel();if(d::truth((_n_ax_13196==0.0))){d::check_cancel();(void)(this->_n_plot_13146(_n_s_13202,(_n_r_13199*d::at(this->_n_CV_13140,_n_j_13203)),(_n_r_13199*d::at(this->_n_SV_13141,_n_j_13203)),0.0,d::at(this->_n_CV_13140,_n_j_13203),d::at(this->_n_SV_13141,_n_j_13203),std::optional<double>{}));
}else {d::check_cancel();(void)(this->_n_plot_13146((_n_r_13199*d::at(this->_n_CV_13140,_n_j_13203)),_n_s_13202,(_n_r_13199*d::at(this->_n_SV_13141,_n_j_13203)),d::at(this->_n_CV_13140,_n_j_13203),0.0,d::at(this->_n_SV_13141,_n_j_13203),std::optional<double>{}));
}
}}
}}
(void)((this->_n_gain_13144=1.0));

}
}

void _n_disc_13149(double _a0,double _a1,double _a2){double _n_y_13204=_a0;
double _n_r_13205=_a1;
double _n_h_13206=_a2;
{
{double _n_k_13207=0.0;
for(;d::truth((_n_k_13207<120.0));(void)((_n_k_13207++))){d::check_cancel();double _n_ca_13208=std::cos(((_n_k_13207/120.0)*_n_TAU_13115));
double _n_sa_13209=std::sin(((_n_k_13207/120.0)*_n_TAU_13115));
{double _n_p_13210=0.0;
for(;d::truth((_n_p_13210<=_n_r_13205));(void)((_n_p_13210=(_n_p_13210+0.02)))){d::check_cancel();(void)(this->_n_plot_13146((_n_p_13210*_n_ca_13208),(_n_y_13204+_n_h_13206),(_n_p_13210*_n_sa_13209),((0.12*_n_ca_13208)*(_n_p_13210/_n_r_13205)),1.0,((0.12*_n_sa_13209)*(_n_p_13210/_n_r_13205)),std::optional<double>{}));
}}
{double _n_s_13211=(-d::number(_n_h_13206));
for(;d::truth((_n_s_13211<=_n_h_13206));(void)((_n_s_13211=(_n_s_13211+0.02)))){d::check_cancel();(void)(this->_n_plot_13146((_n_r_13205*_n_ca_13208),(_n_y_13204+_n_s_13211),(_n_r_13205*_n_sa_13209),_n_ca_13208,0.0,_n_sa_13209,std::optional<double>{}));
}}
}}

}
}

void _n_rotor_13150(){{
{double _n_k_13212=0.0;
for(;d::truth((_n_k_13212<160.0));(void)((_n_k_13212++))){d::check_cancel();double _n_th_13213=((_n_k_13212/160.0)*_n_TAU_13115);
double _n_ca_13214=std::cos(_n_th_13213);
double _n_sa_13215=std::sin(_n_th_13213);
bool _n_spoke_13216=(d::minimum({_n_th_13213,(_n_TAU_13115-_n_th_13213)})<0.22);
{double _n_p_13217=0.0;
for(;d::truth((_n_p_13217<=(this->_n_ROTOR_13128+1e-9)));(void)((_n_p_13217=(_n_p_13217+0.012)))){d::check_cancel();double _n_f_13218=(_n_p_13217/this->_n_ROTOR_13128);
double _n_bev_13219=(d::truth((_n_f_13218>(1.0-this->_n_RIM_13130)))?((0.9*((_n_f_13218-1.0)+this->_n_RIM_13130))/this->_n_RIM_13130):0.0);
double _n_shade_13220=(((d::truth(_n_spoke_13216)&&d::truth((_n_f_13218>0.3)))&&d::truth((_n_f_13218<0.95)))?0.35:1.35);
(void)(this->_n_plot_13146(this->_n_HALF_13129,(_n_p_13217*_n_ca_13214),(_n_p_13217*_n_sa_13215),1.0,(_n_bev_13219*_n_ca_13214),(_n_bev_13219*_n_sa_13215),std::optional<double>(_n_shade_13220)));
(void)(this->_n_plot_13146((-d::number(this->_n_HALF_13129)),(_n_p_13217*_n_ca_13214),(_n_p_13217*_n_sa_13215),(-d::number(1.0)),(_n_bev_13219*_n_ca_13214),(_n_bev_13219*_n_sa_13215),std::optional<double>(_n_shade_13220)));
}}
{double _n_x_13221=(-d::number(this->_n_HALF_13129));
for(;d::truth((_n_x_13221<=(this->_n_HALF_13129+1e-9)));(void)((_n_x_13221=(_n_x_13221+0.02)))){d::check_cancel();(void)(this->_n_plot_13146(_n_x_13221,(this->_n_ROTOR_13128*_n_ca_13214),(this->_n_ROTOR_13128*_n_sa_13215),0.0,_n_ca_13214,_n_sa_13215,std::optional<double>{}));
}}
}}
(void)((this->_n_id_13143=0.0));
(void)(this->_n_pin_13148(0.0,((-d::number(this->_n_HALF_13129))-0.05),(this->_n_HALF_13129+0.05),0.065));
(void)(this->_n_pin_13148(0.0,((-d::number(this->_n_RI_13126))-0.1),(this->_n_RI_13126+0.1),0.05));
(void)(this->_n_pin_13148(0.0,(this->_n_RI_13126-0.06),(this->_n_RI_13126+0.04),0.07));
(void)(this->_n_pin_13148(0.0,((-d::number(this->_n_RI_13126))-0.04),((-d::number(this->_n_RI_13126))+0.06),0.07));

}
}

explicit Native_gyroscope(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13246=_n_meta_13112;
this->_n_cols_13120=_n_binding_13246->_p_cols;
this->_n_rows_13121=_n_binding_13246->_p_rows;
this->_n_K2_13122=8.0;
this->_n_K1_13123=(22.0*this->_n_K2_13122);
this->_n_RO_13124=1.0;
this->_n_RM_13125=0.74;
this->_n_RI_13126=0.5;
this->_n_TUBE_13127=0.065;
this->_n_ROTOR_13128=0.35;
this->_n_HALF_13129=0.07;
this->_n_RIM_13130=0.26;
this->_n_axle_13131=_n_unit_13119((-d::number(0.55)),0.42,(-d::number(0.72)));
this->_n_view_13132=_n_rx_13116((-d::number(0.3)));
this->_n_L_13133=_n_unit_13119((-d::number(0.5)),0.8,(-d::number(0.6)));
this->_n_H_13134=_n_unit_13119(d::at(this->_n_L_13133,0.0),d::at(this->_n_L_13133,1.0),(d::at(this->_n_L_13133,2.0)-1.0));
this->_n_out_13135=d::Array<d::String,false>(size_t((this->_n_cols_13120*this->_n_rows_13121)));
this->_n_depth_13136=d::Array<float,true>(size_t((this->_n_cols_13120*this->_n_rows_13121)));
this->_n_part_13137=d::Array<uint8_t,true>(size_t((this->_n_cols_13120*this->_n_rows_13121)));
this->_n_gap_13138=d::Array<double,false>{};
this->_n_N_13139=14.0;
this->_n_CV_13140=d::Array<double,false>{};
this->_n_SV_13141=d::Array<double,false>{};
{double _n_j_13166=0.0;
for(;d::truth((_n_j_13166<this->_n_N_13139));(void)((_n_j_13166++))){d::check_cancel();(void)((this->_n_CV_13140.push(std::cos(((_n_j_13166/this->_n_N_13139)*_n_TAU_13115))),this->_n_SV_13141.push(std::sin(((_n_j_13166/this->_n_N_13139)*_n_TAU_13115)))));
}}
this->_n_W_13142=this->_n_view_13132;
this->_n_id_13143=0.0;
this->_n_gain_13144=1.0;
this->_n_paper_13145=false;
_render=[=]( double _a0,std::shared_ptr<_n_Record_13224> _a1) mutable ->d::String{double _n_t_13222=_a0;
std::shared_ptr<_n_Record_13224> _n_env_13223=(d::present(_a1)?_a1:([&](){auto _n_object_13248=std::make_shared<_n_Record_13224>();return _n_object_13248;})());
{
(void)((this->_n_paper_13145=(!d::truth((!d::truth(_n_env_13223->_p_paper))))));
(void)(this->_n_out_13135.fill(d::String(u" ")));
(void)(this->_n_depth_13136.fill(0.0));
(void)(this->_n_part_13137.fill(0.0));
double _n_a_13225=(0.9*std::sin((((_n_t_13222/8.0)-(1.0/12.0))*_n_TAU_13115)));
double _n_ca_13226=std::cos(_n_a_13225);
double _n_sa_13227=std::sin(_n_a_13225);
double _n_wx_13228=((_n_ca_13226*d::at(this->_n_axle_13131,0.0))-(_n_sa_13227*d::at(this->_n_axle_13131,2.0)));
double _n_wy_13229=d::at(this->_n_axle_13131,1.0);
double _n_wz_13230=((_n_sa_13227*d::at(this->_n_axle_13131,0.0))+(_n_ca_13226*d::at(this->_n_axle_13131,2.0)));
double _n_c_13231=std::acos(([&](){auto _n_argument_13249=(-d::number(1.0));auto _n_argument_13250=d::minimum({1.0,_n_wx_13228});return d::maximum({_n_argument_13249,_n_argument_13250});})());
double _n_b_13232=std::atan2(_n_wy_13229,(-d::number(_n_wz_13230)));
d::Array<double,false> _n_Mo_13233=([&](){auto _n_argument_13251=this->_n_view_13132;auto _n_argument_13252=_n_ry_13117(_n_a_13225);return _n_mul_13118(_n_argument_13251,_n_argument_13252);})();
d::Array<double,false> _n_Mm_13234=([&](){auto _n_argument_13253=_n_Mo_13233;auto _n_argument_13254=_n_rx_13116(_n_b_13232);return _n_mul_13118(_n_argument_13253,_n_argument_13254);})();
d::Array<double,false> _n_Mi_13235=([&](){auto _n_argument_13255=_n_Mm_13234;auto _n_argument_13256=_n_ry_13117(_n_c_13231);return _n_mul_13118(_n_argument_13255,_n_argument_13256);})();
d::Array<double,false> _n_Mr_13236=([&](){auto _n_argument_13257=_n_Mi_13235;auto _n_argument_13258=_n_rx_13116(((_n_t_13222*1.25)*_n_TAU_13115));return _n_mul_13118(_n_argument_13257,_n_argument_13258);})();
(void)((this->_n_W_13142=this->_n_view_13132));
(void)((this->_n_id_13143=0.0));
(void)(this->_n_pin_13148(1.0,this->_n_RO_13124,(this->_n_RO_13124+0.13),0.04));
(void)(this->_n_pin_13148(1.0,(this->_n_RO_13124+0.13),(this->_n_RO_13124+0.2),0.07));
(void)(this->_n_pin_13148(1.0,((-d::number(this->_n_RO_13124))-0.13),(-d::number(this->_n_RO_13124)),0.04));
(void)(this->_n_pin_13148(1.0,(-d::number(1.4)),((-d::number(this->_n_RO_13124))-0.1),0.055));
(void)(this->_n_disc_13149((-d::number(1.42)),0.12,0.02));
(void)(this->_n_disc_13149((-d::number(1.46)),0.38,0.025));
(void)((this->_n_W_13142=_n_Mo_13233));
(void)(this->_n_pin_13148(0.0,this->_n_RM_13125,this->_n_RO_13124,0.032));
(void)(this->_n_pin_13148(0.0,(-d::number(this->_n_RO_13124)),(-d::number(this->_n_RM_13125)),0.032));
(void)((this->_n_id_13143=1.0));
(void)(this->_n_ring_13147(this->_n_RO_13124,400.0));
(void)((this->_n_W_13142=_n_Mm_13234));
(void)((this->_n_id_13143=0.0));
(void)(this->_n_pin_13148(1.0,this->_n_RI_13126,this->_n_RM_13125,0.032));
(void)(this->_n_pin_13148(1.0,(-d::number(this->_n_RM_13125)),(-d::number(this->_n_RI_13126)),0.032));
(void)((this->_n_id_13143=2.0));
(void)(this->_n_ring_13147(this->_n_RM_13125,320.0));
(void)((this->_n_W_13142=_n_Mi_13235));
(void)((this->_n_id_13143=3.0));
(void)(this->_n_ring_13147(this->_n_RI_13126,240.0));
(void)((this->_n_W_13142=_n_Mr_13236));
(void)((this->_n_id_13143=4.0));
(void)(this->_n_rotor_13150());
(void)((this->_n_gap_13138.resize(size_t(0.0)),0.0));
{double _n_k_13237=0.0;
for(;d::truth((_n_k_13237<(this->_n_cols_13120*this->_n_rows_13121)));(void)((_n_k_13237++))){d::check_cancel();if(d::truth((!d::truth(d::at(this->_n_part_13137,_n_k_13237))))){d::check_cancel();continue;
}
double _n_x_13238=d::mod(_n_k_13237,this->_n_cols_13120);
for(auto &&_n_item_13259:d::Array<double,false>{(d::truth((_n_x_13238>0.0))?(_n_k_13237-1.0):(-d::number(1.0))),(d::truth((_n_x_13238<(this->_n_cols_13120-1.0)))?(_n_k_13237+1.0):(-d::number(1.0)))}){d::check_cancel();double _n_n_13239=_n_item_13259;
if(((((d::truth((_n_n_13239>=0.0))&&d::truth((_n_n_13239<(this->_n_cols_13120*this->_n_rows_13121))))&&d::truth(d::at(this->_n_part_13137,_n_n_13239)))&&d::truth((d::at(this->_n_part_13137,_n_n_13239)!=d::at(this->_n_part_13137,_n_k_13237))))&&d::truth((d::at(this->_n_depth_13136,_n_n_13239)>(d::at(this->_n_depth_13136,_n_k_13237)+0.0008))))){d::check_cancel();(void)(this->_n_gap_13138.push(_n_k_13237));
}
}
}}
for(auto &&_n_item_13260:this->_n_gap_13138){d::check_cancel();double _n_k_13240=_n_item_13260;
(void)(([&](){auto&& _n_array_13261=this->_n_out_13135;auto _n_index_13262=_n_k_13240;auto _n_value_13263=d::String(u" ");d::put(_n_array_13261,_n_index_13262,_n_value_13263);return _n_value_13263;})());
}
d::Array<d::String,false> _n_lines_13241=d::Array<d::String,false>{};
{double _n_r_13242=0.0;
for(;d::truth((_n_r_13242<this->_n_rows_13121));(void)((_n_r_13242++))){d::check_cancel();(void)(_n_lines_13241.push(d::join(this->_n_out_13135.slice((_n_r_13242*this->_n_cols_13120),((_n_r_13242+1.0)*this->_n_cols_13120)),d::String(u""))));
}}
return d::join(_n_lines_13241,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("gyroscope").cols)*ascii::catalog_meta("gyroscope").rows);auto _env=std::make_shared<_n_Record_13224>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &gyroscope_meta(){return catalog_meta("gyroscope");}
std::unique_ptr<Piece> make_gyroscope(const AsciiPieceOptions &o){return std::make_unique<Native_gyroscope>(o);}
}
