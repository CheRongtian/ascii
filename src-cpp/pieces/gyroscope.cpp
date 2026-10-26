// Direct, statically typed C++ from src/pieces/gyroscope.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13112;
struct _n_Record_13223;
struct _n_Record_13112{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13112> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13112>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13223{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13223> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13223>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::array<double,9> _n_rx_13115(double _a0);
std::array<double,9> _n_ry_13116(double _a0);
d::Array<double,false> _n_mul_13117(d::Array<double,false> _a0,d::Array<double,false> _a1);
std::array<double,3> _n_unit_13118(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_13112> _n_meta_13111=[](){return ([&](){auto _n_object_13244=std::make_shared<_n_Record_13112>();_n_object_13244->_p_name=d::String(u"gyroscope");_n_object_13244->_p_category=d::String(u"shapes");_n_object_13244->_p_note=d::String(u"gimbals swing round a spinning rotor whose axle holds still");_n_object_13244->_p_cols=60.0;_n_object_13244->_p_rows=32.0;_n_object_13244->_p_fps=30.0;return _n_object_13244;})();}();
const d::String _n_RAMP_13113=[](){return d::String(u".,-:;=+*#%@");}();
const double _n_TAU_13114=[](){return (ascii::PI*2.0);}();
std::array<double,9> _n_rx_13115(double _a0){double _n_a_13150=_a0;
{
double _n_c_13151=std::cos(_n_a_13150);
double _n_s_13152=std::sin(_n_a_13150);
return std::array<double,9>{1.0,0.0,0.0,0.0,_n_c_13151,(-d::number(_n_s_13152)),0.0,_n_s_13152,_n_c_13151};

}
}

std::array<double,9> _n_ry_13116(double _a0){double _n_a_13153=_a0;
{
double _n_c_13154=std::cos(_n_a_13153);
double _n_s_13155=std::sin(_n_a_13153);
return std::array<double,9>{_n_c_13154,0.0,_n_s_13155,0.0,1.0,0.0,(-d::number(_n_s_13155)),0.0,_n_c_13154};

}
}

d::Array<double,false> _n_mul_13117(d::Array<double,false> _a0,d::Array<double,false> _a1){d::Array<double,false> _n_A_13156=_a0;
d::Array<double,false> _n_B_13157=_a1;
{
d::Array<double,false> _n_M_13158=d::Array<double,false>{};
{double _n_i_13159=0.0;
for(;d::truth((_n_i_13159<3.0));(void)((_n_i_13159++))){d::check_cancel();{double _n_j_13160=0.0;
for(;d::truth((_n_j_13160<3.0));(void)((_n_j_13160++))){d::check_cancel();(void)(_n_M_13158.push((((d::at(_n_A_13156,(_n_i_13159*3.0))*d::at(_n_B_13157,_n_j_13160))+(d::at(_n_A_13156,((_n_i_13159*3.0)+1.0))*d::at(_n_B_13157,(3.0+_n_j_13160))))+(d::at(_n_A_13156,((_n_i_13159*3.0)+2.0))*d::at(_n_B_13157,(6.0+_n_j_13160))))));
}}
}}
return _n_M_13158;

}
}

std::array<double,3> _n_unit_13118(double _a0,double _a1,double _a2){double _n_x_13161=_a0;
double _n_y_13162=_a1;
double _n_z_13163=_a2;
{
double _n_m_13164=d::hypot(std::initializer_list<double>{_n_x_13161,_n_y_13162,_n_z_13163});
return std::array<double,3>{(_n_x_13161/_n_m_13164),(_n_y_13162/_n_m_13164),(_n_z_13163/_n_m_13164)};

}
}

struct Native_gyroscope final:ascii::Piece{
double _n_cols_13119{};
double _n_rows_13120{};
double _n_K2_13121{};
double _n_K1_13122{};
double _n_RO_13123{};
double _n_RM_13124{};
double _n_RI_13125{};
double _n_TUBE_13126{};
double _n_ROTOR_13127{};
double _n_HALF_13128{};
double _n_RIM_13129{};
std::array<double,3> _n_axle_13130{};
std::array<double,9> _n_view_13131{};
std::array<double,3> _n_L_13132{};
std::array<double,3> _n_H_13133{};
d::Array<d::String,false> _n_out_13134{};
d::Array<float,true> _n_depth_13135{};
d::Array<uint8_t,true> _n_part_13136{};
d::Array<double,false> _n_gap_13137{};
double _n_N_13138{};
d::Array<double,false> _n_CV_13139{};
d::Array<double,false> _n_SV_13140{};
std::array<double,9> _n_W_13141{};
double _n_id_13142{};
double _n_gain_13143{};
bool _n_paper_13144{};
std::function<d::String(double,std::shared_ptr<_n_Record_13223>)> _render;
void _n_plot_13145(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::optional<double> _a6){double _n_x_13166=_a0;
double _n_y_13167=_a1;
double _n_z_13168=_a2;
double _n_nx_13169=_a3;
double _n_ny_13170=_a4;
double _n_nz_13171=_a5;
double _n_k_13172=(d::present(_a6)?d::read(_a6):1.0);
{
double _n_X_13173=(((d::at(this->_n_W_13141,0.0)*_n_x_13166)+(d::at(this->_n_W_13141,1.0)*_n_y_13167))+(d::at(this->_n_W_13141,2.0)*_n_z_13168));
double _n_Y_13174=(((d::at(this->_n_W_13141,3.0)*_n_x_13166)+(d::at(this->_n_W_13141,4.0)*_n_y_13167))+(d::at(this->_n_W_13141,5.0)*_n_z_13168));
double _n_Z_13175=(((d::at(this->_n_W_13141,6.0)*_n_x_13166)+(d::at(this->_n_W_13141,7.0)*_n_y_13167))+(d::at(this->_n_W_13141,8.0)*_n_z_13168));
double _n_ooz_13176=(1.0/(this->_n_K2_13121+_n_Z_13175));
double _n_col_13177=std::floor(((this->_n_cols_13119/2.0)+((this->_n_K1_13122*_n_ooz_13176)*_n_X_13173)));
double _n_row_13178=std::floor((((this->_n_rows_13120/2.0)-2.0)-(((this->_n_K1_13122*0.5)*_n_ooz_13176)*_n_Y_13174)));
if((((d::truth((_n_col_13177<0.0))||d::truth((_n_col_13177>=this->_n_cols_13119)))||d::truth((_n_row_13178<0.0)))||d::truth((_n_row_13178>=this->_n_rows_13120)))){d::check_cancel();return;
}
double _n_c_13179=(_n_col_13177+(_n_row_13178*this->_n_cols_13119));
if(d::truth((_n_ooz_13176<=d::at(this->_n_depth_13135,_n_c_13179)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_13263=this->_n_depth_13135;auto _n_index_13264=_n_c_13179;auto _n_value_13265=_n_ooz_13176;d::put(_n_array_13263,_n_index_13264,_n_value_13265);return _n_value_13265;})());
(void)(([&](){auto&& _n_array_13266=this->_n_part_13136;auto _n_index_13267=_n_c_13179;auto _n_value_13268=this->_n_id_13142;d::put(_n_array_13266,_n_index_13267,_n_value_13268);return _n_value_13268;})());
double _n_NX_13180=(((d::at(this->_n_W_13141,0.0)*_n_nx_13169)+(d::at(this->_n_W_13141,1.0)*_n_ny_13170))+(d::at(this->_n_W_13141,2.0)*_n_nz_13171));
double _n_NY_13181=(((d::at(this->_n_W_13141,3.0)*_n_nx_13169)+(d::at(this->_n_W_13141,4.0)*_n_ny_13170))+(d::at(this->_n_W_13141,5.0)*_n_nz_13171));
double _n_NZ_13182=(((d::at(this->_n_W_13141,6.0)*_n_nx_13169)+(d::at(this->_n_W_13141,7.0)*_n_ny_13170))+(d::at(this->_n_W_13141,8.0)*_n_nz_13171));
double _n_m_13183=((d::truth((_n_NZ_13182>0.0))?(-d::number(1.0)):1.0)/d::hypot(std::initializer_list<double>{_n_NX_13180,_n_NY_13181,_n_NZ_13182}));
(void)((((_n_NX_13180=(_n_NX_13180*_n_m_13183)),(_n_NY_13181=(_n_NY_13181*_n_m_13183))),(_n_NZ_13182=(_n_NZ_13182*_n_m_13183))));
double _n_diff_13184=std::pow((((((_n_NX_13180*d::at(this->_n_L_13132,0.0))+(_n_NY_13181*d::at(this->_n_L_13132,1.0)))+(_n_NZ_13182*d::at(this->_n_L_13132,2.0)))+1.0)/2.0),2.0);
double _n_spec_13185=std::pow(d::maximum({0.0,(((_n_NX_13180*d::at(this->_n_H_13133,0.0))+(_n_NY_13181*d::at(this->_n_H_13133,1.0)))+(_n_NZ_13182*d::at(this->_n_H_13133,2.0)))}),24.0);
double _n_near_13186=(0.55+(0.45*([&](){auto _n_argument_13269=1.0;auto _n_argument_13270=d::maximum({0.0,(0.5-(0.6*_n_Z_13175))});return d::minimum({_n_argument_13269,_n_argument_13270});})()));
double _n_i_13187=d::round((d::minimum({1.0,(((((0.08+(0.7*_n_diff_13184))+(0.45*_n_spec_13185))*_n_near_13186)*_n_k_13172)*this->_n_gain_13143)})*(double(_n_RAMP_13113.size())-1.0)));
(void)(([&](){auto&& _n_array_13271=this->_n_out_13134;auto _n_index_13272=_n_c_13179;auto _n_value_13273=d::at(_n_RAMP_13113,(d::truth(this->_n_paper_13144)?((double(_n_RAMP_13113.size())-1.0)-_n_i_13187):_n_i_13187));d::put(_n_array_13271,_n_index_13272,_n_value_13273);return _n_value_13273;})());

}
}

void _n_ring_13146(double _a0,double _a1){double _n_R_13188=_a0;
double _n_steps_13189=_a1;
{
{double _n_i_13190=0.0;
for(;d::truth((_n_i_13190<_n_steps_13189));(void)((_n_i_13190++))){d::check_cancel();double _n_cu_13191=std::cos(((_n_i_13190/_n_steps_13189)*_n_TAU_13114));
double _n_su_13192=std::sin(((_n_i_13190/_n_steps_13189)*_n_TAU_13114));
{double _n_j_13193=0.0;
for(;d::truth((_n_j_13193<this->_n_N_13138));(void)((_n_j_13193++))){d::check_cancel();double _n_h_13194=(_n_R_13188+(this->_n_TUBE_13126*d::at(this->_n_CV_13139,_n_j_13193)));
(void)(this->_n_plot_13145((_n_h_13194*_n_cu_13191),(_n_h_13194*_n_su_13192),(this->_n_TUBE_13126*d::at(this->_n_SV_13140,_n_j_13193)),(d::at(this->_n_CV_13139,_n_j_13193)*_n_cu_13191),(d::at(this->_n_CV_13139,_n_j_13193)*_n_su_13192),d::at(this->_n_SV_13140,_n_j_13193),std::optional<double>{}));
}}
}}

}
}

void _n_pin_13147(double _a0,double _a1,double _a2,double _a3){double _n_ax_13195=_a0;
double _n_a_13196=_a1;
double _n_b_13197=_a2;
double _n_r_13198=_a3;
{
(void)((this->_n_gain_13143=1.5));
double _n_n_13199=std::ceil((std::fabs((_n_b_13197-_n_a_13196))/0.02));
{double _n_i_13200=0.0;
for(;d::truth((_n_i_13200<=_n_n_13199));(void)((_n_i_13200++))){d::check_cancel();double _n_s_13201=(_n_a_13196+(((_n_b_13197-_n_a_13196)*_n_i_13200)/_n_n_13199));
{double _n_j_13202=0.0;
for(;d::truth((_n_j_13202<this->_n_N_13138));(void)((_n_j_13202++))){d::check_cancel();if(d::truth((_n_ax_13195==0.0))){d::check_cancel();(void)(this->_n_plot_13145(_n_s_13201,(_n_r_13198*d::at(this->_n_CV_13139,_n_j_13202)),(_n_r_13198*d::at(this->_n_SV_13140,_n_j_13202)),0.0,d::at(this->_n_CV_13139,_n_j_13202),d::at(this->_n_SV_13140,_n_j_13202),std::optional<double>{}));
}else {d::check_cancel();(void)(this->_n_plot_13145((_n_r_13198*d::at(this->_n_CV_13139,_n_j_13202)),_n_s_13201,(_n_r_13198*d::at(this->_n_SV_13140,_n_j_13202)),d::at(this->_n_CV_13139,_n_j_13202),0.0,d::at(this->_n_SV_13140,_n_j_13202),std::optional<double>{}));
}
}}
}}
(void)((this->_n_gain_13143=1.0));

}
}

void _n_disc_13148(double _a0,double _a1,double _a2){double _n_y_13203=_a0;
double _n_r_13204=_a1;
double _n_h_13205=_a2;
{
{double _n_k_13206=0.0;
for(;d::truth((_n_k_13206<120.0));(void)((_n_k_13206++))){d::check_cancel();double _n_ca_13207=std::cos(((_n_k_13206/120.0)*_n_TAU_13114));
double _n_sa_13208=std::sin(((_n_k_13206/120.0)*_n_TAU_13114));
{double _n_p_13209=0.0;
for(;d::truth((_n_p_13209<=_n_r_13204));(void)((_n_p_13209=(_n_p_13209+0.02)))){d::check_cancel();(void)(this->_n_plot_13145((_n_p_13209*_n_ca_13207),(_n_y_13203+_n_h_13205),(_n_p_13209*_n_sa_13208),((0.12*_n_ca_13207)*(_n_p_13209/_n_r_13204)),1.0,((0.12*_n_sa_13208)*(_n_p_13209/_n_r_13204)),std::optional<double>{}));
}}
{double _n_s_13210=(-d::number(_n_h_13205));
for(;d::truth((_n_s_13210<=_n_h_13205));(void)((_n_s_13210=(_n_s_13210+0.02)))){d::check_cancel();(void)(this->_n_plot_13145((_n_r_13204*_n_ca_13207),(_n_y_13203+_n_s_13210),(_n_r_13204*_n_sa_13208),_n_ca_13207,0.0,_n_sa_13208,std::optional<double>{}));
}}
}}

}
}

void _n_rotor_13149(){{
{double _n_k_13211=0.0;
for(;d::truth((_n_k_13211<160.0));(void)((_n_k_13211++))){d::check_cancel();double _n_th_13212=((_n_k_13211/160.0)*_n_TAU_13114);
double _n_ca_13213=std::cos(_n_th_13212);
double _n_sa_13214=std::sin(_n_th_13212);
bool _n_spoke_13215=(d::minimum({_n_th_13212,(_n_TAU_13114-_n_th_13212)})<0.22);
{double _n_p_13216=0.0;
for(;d::truth((_n_p_13216<=(this->_n_ROTOR_13127+1e-9)));(void)((_n_p_13216=(_n_p_13216+0.012)))){d::check_cancel();double _n_f_13217=(_n_p_13216/this->_n_ROTOR_13127);
double _n_bev_13218=(d::truth((_n_f_13217>(1.0-this->_n_RIM_13129)))?((0.9*((_n_f_13217-1.0)+this->_n_RIM_13129))/this->_n_RIM_13129):0.0);
double _n_shade_13219=(((d::truth(_n_spoke_13215)&&d::truth((_n_f_13217>0.3)))&&d::truth((_n_f_13217<0.95)))?0.35:1.35);
(void)(this->_n_plot_13145(this->_n_HALF_13128,(_n_p_13216*_n_ca_13213),(_n_p_13216*_n_sa_13214),1.0,(_n_bev_13218*_n_ca_13213),(_n_bev_13218*_n_sa_13214),std::optional<double>(_n_shade_13219)));
(void)(this->_n_plot_13145((-d::number(this->_n_HALF_13128)),(_n_p_13216*_n_ca_13213),(_n_p_13216*_n_sa_13214),(-d::number(1.0)),(_n_bev_13218*_n_ca_13213),(_n_bev_13218*_n_sa_13214),std::optional<double>(_n_shade_13219)));
}}
{double _n_x_13220=(-d::number(this->_n_HALF_13128));
for(;d::truth((_n_x_13220<=(this->_n_HALF_13128+1e-9)));(void)((_n_x_13220=(_n_x_13220+0.02)))){d::check_cancel();(void)(this->_n_plot_13145(_n_x_13220,(this->_n_ROTOR_13127*_n_ca_13213),(this->_n_ROTOR_13127*_n_sa_13214),0.0,_n_ca_13213,_n_sa_13214,std::optional<double>{}));
}}
}}
(void)((this->_n_id_13142=0.0));
(void)(this->_n_pin_13147(0.0,((-d::number(this->_n_HALF_13128))-0.05),(this->_n_HALF_13128+0.05),0.065));
(void)(this->_n_pin_13147(0.0,((-d::number(this->_n_RI_13125))-0.1),(this->_n_RI_13125+0.1),0.05));
(void)(this->_n_pin_13147(0.0,(this->_n_RI_13125-0.06),(this->_n_RI_13125+0.04),0.07));
(void)(this->_n_pin_13147(0.0,((-d::number(this->_n_RI_13125))-0.04),((-d::number(this->_n_RI_13125))+0.06),0.07));

}
}

explicit Native_gyroscope(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13245=_n_meta_13111;
this->_n_cols_13119=_n_binding_13245->_p_cols;
this->_n_rows_13120=_n_binding_13245->_p_rows;
this->_n_K2_13121=8.0;
this->_n_K1_13122=(22.0*this->_n_K2_13121);
this->_n_RO_13123=1.0;
this->_n_RM_13124=0.74;
this->_n_RI_13125=0.5;
this->_n_TUBE_13126=0.065;
this->_n_ROTOR_13127=0.35;
this->_n_HALF_13128=0.07;
this->_n_RIM_13129=0.26;
this->_n_axle_13130=_n_unit_13118((-d::number(0.55)),0.42,(-d::number(0.72)));
this->_n_view_13131=_n_rx_13115((-d::number(0.3)));
this->_n_L_13132=_n_unit_13118((-d::number(0.5)),0.8,(-d::number(0.6)));
this->_n_H_13133=_n_unit_13118(d::at(this->_n_L_13132,0.0),d::at(this->_n_L_13132,1.0),(d::at(this->_n_L_13132,2.0)-1.0));
this->_n_out_13134=d::Array<d::String,false>(size_t((this->_n_cols_13119*this->_n_rows_13120)));
this->_n_depth_13135=d::Array<float,true>(size_t((this->_n_cols_13119*this->_n_rows_13120)));
this->_n_part_13136=d::Array<uint8_t,true>(size_t((this->_n_cols_13119*this->_n_rows_13120)));
this->_n_gap_13137=d::Array<double,false>{};
this->_n_N_13138=14.0;
this->_n_CV_13139=d::Array<double,false>{};
this->_n_SV_13140=d::Array<double,false>{};
{double _n_j_13165=0.0;
for(;d::truth((_n_j_13165<this->_n_N_13138));(void)((_n_j_13165++))){d::check_cancel();(void)((this->_n_CV_13139.push(std::cos(((_n_j_13165/this->_n_N_13138)*_n_TAU_13114))),this->_n_SV_13140.push(std::sin(((_n_j_13165/this->_n_N_13138)*_n_TAU_13114)))));
}}
this->_n_W_13141=this->_n_view_13131;
this->_n_id_13142=0.0;
this->_n_gain_13143=1.0;
this->_n_paper_13144=false;
_render=[=]( double _a0,std::shared_ptr<_n_Record_13223> _a1) mutable ->d::String{double _n_t_13221=_a0;
std::shared_ptr<_n_Record_13223> _n_env_13222=(d::present(_a1)?_a1:([&](){auto _n_object_13247=std::make_shared<_n_Record_13223>();return _n_object_13247;})());
{
(void)((this->_n_paper_13144=(!d::truth((!d::truth(_n_env_13222->_p_paper))))));
(void)(this->_n_out_13134.fill(d::String(u" ")));
(void)(this->_n_depth_13135.fill(0.0));
(void)(this->_n_part_13136.fill(0.0));
double _n_a_13224=(0.9*std::sin((((_n_t_13221/8.0)-(1.0/12.0))*_n_TAU_13114)));
double _n_ca_13225=std::cos(_n_a_13224);
double _n_sa_13226=std::sin(_n_a_13224);
double _n_wx_13227=((_n_ca_13225*d::at(this->_n_axle_13130,0.0))-(_n_sa_13226*d::at(this->_n_axle_13130,2.0)));
double _n_wy_13228=d::at(this->_n_axle_13130,1.0);
double _n_wz_13229=((_n_sa_13226*d::at(this->_n_axle_13130,0.0))+(_n_ca_13225*d::at(this->_n_axle_13130,2.0)));
double _n_c_13230=std::acos(([&](){auto _n_argument_13248=(-d::number(1.0));auto _n_argument_13249=d::minimum({1.0,_n_wx_13227});return d::maximum({_n_argument_13248,_n_argument_13249});})());
double _n_b_13231=std::atan2(_n_wy_13228,(-d::number(_n_wz_13229)));
d::Array<double,false> _n_Mo_13232=([&](){auto _n_argument_13250=this->_n_view_13131;auto _n_argument_13251=_n_ry_13116(_n_a_13224);return _n_mul_13117(d::Array<double,false>(_n_argument_13250),d::Array<double,false>(_n_argument_13251));})();
d::Array<double,false> _n_Mm_13233=([&](){auto _n_argument_13252=_n_Mo_13232;auto _n_argument_13253=_n_rx_13115(_n_b_13231);return _n_mul_13117(_n_argument_13252,d::Array<double,false>(_n_argument_13253));})();
d::Array<double,false> _n_Mi_13234=([&](){auto _n_argument_13254=_n_Mm_13233;auto _n_argument_13255=_n_ry_13116(_n_c_13230);return _n_mul_13117(_n_argument_13254,d::Array<double,false>(_n_argument_13255));})();
d::Array<double,false> _n_Mr_13235=([&](){auto _n_argument_13256=_n_Mi_13234;auto _n_argument_13257=_n_rx_13115(((_n_t_13221*1.25)*_n_TAU_13114));return _n_mul_13117(_n_argument_13256,d::Array<double,false>(_n_argument_13257));})();
(void)((this->_n_W_13141=this->_n_view_13131));
(void)((this->_n_id_13142=0.0));
(void)(this->_n_pin_13147(1.0,this->_n_RO_13123,(this->_n_RO_13123+0.13),0.04));
(void)(this->_n_pin_13147(1.0,(this->_n_RO_13123+0.13),(this->_n_RO_13123+0.2),0.07));
(void)(this->_n_pin_13147(1.0,((-d::number(this->_n_RO_13123))-0.13),(-d::number(this->_n_RO_13123)),0.04));
(void)(this->_n_pin_13147(1.0,(-d::number(1.4)),((-d::number(this->_n_RO_13123))-0.1),0.055));
(void)(this->_n_disc_13148((-d::number(1.42)),0.12,0.02));
(void)(this->_n_disc_13148((-d::number(1.46)),0.38,0.025));
(void)((this->_n_W_13141=d::fixedArray<double,9>(_n_Mo_13232)));
(void)(this->_n_pin_13147(0.0,this->_n_RM_13124,this->_n_RO_13123,0.032));
(void)(this->_n_pin_13147(0.0,(-d::number(this->_n_RO_13123)),(-d::number(this->_n_RM_13124)),0.032));
(void)((this->_n_id_13142=1.0));
(void)(this->_n_ring_13146(this->_n_RO_13123,400.0));
(void)((this->_n_W_13141=d::fixedArray<double,9>(_n_Mm_13233)));
(void)((this->_n_id_13142=0.0));
(void)(this->_n_pin_13147(1.0,this->_n_RI_13125,this->_n_RM_13124,0.032));
(void)(this->_n_pin_13147(1.0,(-d::number(this->_n_RM_13124)),(-d::number(this->_n_RI_13125)),0.032));
(void)((this->_n_id_13142=2.0));
(void)(this->_n_ring_13146(this->_n_RM_13124,320.0));
(void)((this->_n_W_13141=d::fixedArray<double,9>(_n_Mi_13234)));
(void)((this->_n_id_13142=3.0));
(void)(this->_n_ring_13146(this->_n_RI_13125,240.0));
(void)((this->_n_W_13141=d::fixedArray<double,9>(_n_Mr_13235)));
(void)((this->_n_id_13142=4.0));
(void)(this->_n_rotor_13149());
(void)((this->_n_gap_13137.resize(size_t(0.0)),0.0));
{double _n_k_13236=0.0;
for(;d::truth((_n_k_13236<(this->_n_cols_13119*this->_n_rows_13120)));(void)((_n_k_13236++))){d::check_cancel();if(d::truth((!d::truth(d::at(this->_n_part_13136,_n_k_13236))))){d::check_cancel();continue;
}
double _n_x_13237=d::mod(_n_k_13236,this->_n_cols_13119);
for(auto &&_n_item_13258:d::Array<double,false>{(d::truth((_n_x_13237>0.0))?(_n_k_13236-1.0):(-d::number(1.0))),(d::truth((_n_x_13237<(this->_n_cols_13119-1.0)))?(_n_k_13236+1.0):(-d::number(1.0)))}){d::check_cancel();double _n_n_13238=_n_item_13258;
if(((((d::truth((_n_n_13238>=0.0))&&d::truth((_n_n_13238<(this->_n_cols_13119*this->_n_rows_13120))))&&d::truth(d::at(this->_n_part_13136,_n_n_13238)))&&d::truth((d::at(this->_n_part_13136,_n_n_13238)!=d::at(this->_n_part_13136,_n_k_13236))))&&d::truth((d::at(this->_n_depth_13135,_n_n_13238)>(d::at(this->_n_depth_13135,_n_k_13236)+0.0008))))){d::check_cancel();(void)(this->_n_gap_13137.push(_n_k_13236));
}
}
}}
for(auto &&_n_item_13259:this->_n_gap_13137){d::check_cancel();double _n_k_13239=_n_item_13259;
(void)(([&](){auto&& _n_array_13260=this->_n_out_13134;auto _n_index_13261=_n_k_13239;auto _n_value_13262=d::String(u" ");d::put(_n_array_13260,_n_index_13261,_n_value_13262);return _n_value_13262;})());
}
d::Array<d::String,false> _n_lines_13240=d::Array<d::String,false>{};
{double _n_r_13241=0.0;
for(;d::truth((_n_r_13241<this->_n_rows_13120));(void)((_n_r_13241++))){d::check_cancel();(void)(_n_lines_13240.push(d::join(this->_n_out_13134.slice((_n_r_13241*this->_n_cols_13119),((_n_r_13241+1.0)*this->_n_cols_13119)),d::String(u""))));
}}
return d::join(_n_lines_13240,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("gyroscope").cols)*ascii::catalog_meta("gyroscope").rows);auto _env=std::make_shared<_n_Record_13223>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &gyroscope_meta(){return catalog_meta("gyroscope");}
std::unique_ptr<Piece> make_gyroscope(const AsciiPieceOptions &o){return std::make_unique<Native_gyroscope>(o);}
}
