// Direct, statically typed C++ from src/pieces/coffee.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_5017;
struct _n_Record_5199;
struct _n_Record_5017{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_5017> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5017>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_5199{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_5199> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5199>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_cupR_5026(double _a0);
double _n_smooth_5027(double _a0,double _a1,double _a2);
std::array<double,3> _n_norm_5028(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_5017> _n_meta_5016=[](){return ([&](){auto _n_object_5202=std::make_shared<_n_Record_5017>();_n_object_5202->_p_name=d::String(u"coffee");_n_object_5202->_p_category=d::String(u"objects");_n_object_5202->_p_note=d::String(u"steam curling up from a cup of coffee on its saucer");_n_object_5202->_p_cols=52.0;_n_object_5202->_p_rows=24.0;_n_object_5202->_p_fps=20.0;return _n_object_5202;})();}();
const d::String _n_RAMP_5018=[](){return d::String(u" .:-=+*#%@");}();
const double _n_TILT_5019=[](){return 0.34;}();
const double _n_H_5020=[](){return 7.6;}();
const double _n_RT_5021=[](){return 6.2;}();
const double _n_HC_5022=[](){return (_n_H_5020-0.55);}();
const double _n_PERIOD_5023=[](){return 6.0;}();
d::Array<std::array<double,5>,false> _n_WISPS_5024=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{(-d::number(2.4)),0.6,11.0,0.0,(-d::number(0.12))},std::array<double,5>{0.3,(-d::number(1.4)),14.0,2.2,0.05},std::array<double,5>{2.9,0.5,10.0,4.1,0.15}};}();
d::Array<d::Array<double,false>,false> _n_SAUCER_5025=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{4.4,0.0},d::Array<double,false>{6.5,0.12},d::Array<double,false>{8.7,0.45},d::Array<double,false>{9.9,0.78},d::Array<double,false>{10.4,0.92},d::Array<double,false>{10.6,0.8},d::Array<double,false>{10.55,0.55},d::Array<double,false>{10.2,0.4}};}();
double _n_cupR_5026(double _a0){double _n_h_5066=_a0;
return (_n_RT_5021*(0.62+(0.38*std::sin(((ascii::PI/2.0)*([&](){auto _n_argument_5203=1.0;auto _n_argument_5204=(d::maximum({0.0,_n_h_5066})/_n_H_5020);return d::minimum({_n_argument_5203,_n_argument_5204});})())))));}

double _n_smooth_5027(double _a0,double _a1,double _a2){double _n_a_5067=_a0;
double _n_b_5068=_a1;
double _n_x_5069=_a2;
{
double _n_u_5070=([&](){auto _n_argument_5205=1.0;auto _n_argument_5206=d::maximum({0.0,((_n_x_5069-_n_a_5067)/(_n_b_5068-_n_a_5067))});return d::minimum({_n_argument_5205,_n_argument_5206});})();
return ((_n_u_5070*_n_u_5070)*(3.0-(2.0*_n_u_5070)));

}
}

std::array<double,3> _n_norm_5028(double _a0,double _a1,double _a2){double _n_x_5071=_a0;
double _n_y_5072=_a1;
double _n_z_5073=_a2;
{
double _n_m_5074=d::hypot(std::initializer_list<double>{_n_x_5071,_n_y_5072,_n_z_5073});
return std::array<double,3>{(_n_x_5071/_n_m_5074),(_n_y_5072/_n_m_5074),(_n_z_5073/_n_m_5074)};

}
}

struct Native_coffee final:ascii::Piece{
double _n_cols_5029{};
double _n_rows_5030{};
double _n_SX_5031{};
double _n_SY_5032{};
double _n_W_5033{};
double _n_HH_5034{};
double _n_N_5035{};
d::Array<float,true> _n_depth_5036{};
d::Array<float,true> _n_lum_5037{};
d::Array<uint8_t,true> _n_part_5038{};
double _n_cs_5039{};
double _n_sn_5040{};
double _n_CX_5041{};
double _n_BASE_5042{};
std::array<double,3> _n_L_5043{};
double _n_id_5045{};
std::array<double,3> _n_HV_5047{};
double _n_R_5050{};
double _n_RC_5051{};
double _n_HY_5052{};
double _n_AX_5053{};
double _n_AY_5054{};
double _n_TUBE_5055{};
double _n_X0_5056{};
d::Array<std::optional<std::variant<d::String,double>>,false> _n_still_5058{};
d::Array<double,false> _n_kind_5059{};
double _n_foot_5060{};
d::Array<double,false> _n_was_5061{};
d::Array<d::Array<double,false>,false> _n_ring_5062{};
double _n_top_5063{};
d::Array<d::Array<double,false>,false> _n_W0_5064{};
std::function<d::String(double,std::shared_ptr<_n_Record_5199>)> _render;
d::Array<double,false> _n_toCell_5044(double _a0,double _a1,double _a2){double _n_x_5075=_a0;
double _n_y_5076=_a1;
double _n_z_5077=_a2;
return d::Array<double,false>{(this->_n_CX_5041+(2.0*_n_x_5075)),(this->_n_BASE_5042-((_n_y_5076*this->_n_cs_5039)-(_n_z_5077*this->_n_sn_5040)))};}

void _n_plot_5046(double _a0,double _a1,double _a2,std::array<double,3> _a3,double _a4,std::optional<double> _a5){double _n_x_5078=_a0;
double _n_y_5079=_a1;
double _n_z_5080=_a2;
auto&& _n_n_5081=_a3;
double _n_albedo_5082=_a4;
double _n_extra_5083=(d::present(_a5)?d::read(_a5):0.0);
{
auto _n_binding_5289=this->_n_toCell_5044(_n_x_5078,_n_y_5079,_n_z_5080);
double _n_c_5084=d::at(_n_binding_5289,0.0);
double _n_r_5085=d::at(_n_binding_5289,1.0);
double _n_px_5086=std::floor((_n_c_5084*this->_n_SX_5031));
double _n_py_5087=std::floor((_n_r_5085*this->_n_SY_5032));
if((((d::truth((_n_px_5086<0.0))||d::truth((_n_px_5086>=this->_n_W_5033)))||d::truth((_n_py_5087<0.0)))||d::truth((_n_py_5087>=this->_n_HH_5034)))){d::check_cancel();return;
}
double _n_k_5088=((_n_py_5087*this->_n_W_5033)+_n_px_5086);
double _n_d_5089=((_n_z_5080*this->_n_cs_5039)+(_n_y_5079*this->_n_sn_5040));
if(d::truth((_n_d_5089<=d::at(this->_n_depth_5036,_n_k_5088)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_5290=this->_n_depth_5036;auto _n_index_5291=_n_k_5088;auto _n_value_5292=_n_d_5089;d::put(_n_array_5290,_n_index_5291,_n_value_5292);return _n_value_5292;})());
(void)(([&](){auto&& _n_array_5293=this->_n_part_5038;auto _n_index_5294=_n_k_5088;auto _n_value_5295=this->_n_id_5045;d::put(_n_array_5293,_n_index_5294,_n_value_5295);return _n_value_5295;})());
double _n_diff_5090=d::maximum({0.0,(((d::at(_n_n_5081,0.0)*d::at(this->_n_L_5043,0.0))+(d::at(_n_n_5081,1.0)*d::at(this->_n_L_5043,1.0)))+(d::at(_n_n_5081,2.0)*d::at(this->_n_L_5043,2.0)))});
(void)(([&](){auto&& _n_array_5296=this->_n_lum_5037;auto _n_index_5297=_n_k_5088;auto _n_value_5298=((_n_albedo_5082*(0.1+(0.9*_n_diff_5090)))+_n_extra_5083);d::put(_n_array_5296,_n_index_5297,_n_value_5298);return _n_value_5298;})());

}
}

double _n_glint_5048(std::array<double,3> _a0,double _a1){auto&& _n_n_5091=_a0;
double _n_p_5092=_a1;
return std::pow(d::maximum({0.0,(((d::at(_n_n_5091,0.0)*d::at(this->_n_HV_5047,0.0))+(d::at(_n_n_5091,1.0)*d::at(this->_n_HV_5047,1.0)))+(d::at(_n_n_5091,2.0)*d::at(this->_n_HV_5047,2.0)))}),_n_p_5092);}

bool _n_shadowed_5049(double _a0,double _a1,double _a2){double _n_x_5093=_a0;
double _n_y_5094=_a1;
double _n_z_5095=_a2;
{
{double _n_s_5096=0.3;
for(;d::truth((_n_s_5096<16.0));(void)((_n_s_5096=(_n_s_5096+0.25)))){d::check_cancel();double _n_yy_5097=(_n_y_5094+(d::at(this->_n_L_5043,1.0)*_n_s_5096));
if(d::truth((_n_yy_5097>_n_H_5020))){d::check_cancel();return false;
}
if((d::truth((_n_yy_5097>0.0))&&d::truth(([&](){auto _n_left_5299=d::hypot(std::initializer_list<double>{(_n_x_5093+(d::at(this->_n_L_5043,0.0)*_n_s_5096)),(_n_z_5095+(d::at(this->_n_L_5043,2.0)*_n_s_5096))});auto _n_right_5300=_n_cupR_5026(_n_yy_5097);return (_n_left_5299<_n_right_5300);})()))){d::check_cancel();return true;
}
}}
return false;

}
}

d::Array<double,false> _n_loop_5057(double _a0){double _n_u_5133=_a0;
return d::Array<double,false>{(this->_n_X0_5056+(this->_n_AX_5053*std::cos(_n_u_5133))),(this->_n_HY_5052+(this->_n_AY_5054*std::sin(_n_u_5133)))};}

double _n_colAt_5065(double _a0,double _a1,double _a2){double _n_i_5164=_a0;
double _n_s_5165=_a1;
double _n_t_5166=_a2;
{
auto _n_binding_5301=d::at(_n_WISPS_5024,_n_i_5164);
double _n_len_5167=d::at(_n_binding_5301,2.0);
double _n_ph_5168=d::at(_n_binding_5301,3.0);
double _n_lean_5169=d::at(_n_binding_5301,4.0);
double _n_f_5170=(_n_s_5165/_n_len_5167);
double _n_w_5171=(((2.0*ascii::PI)*_n_t_5166)/_n_PERIOD_5023);
return (d::at(d::at(this->_n_W0_5064,_n_i_5164),0.0)+(2.0*([&](){auto _n_left_5302=((_n_lean_5169*_n_s_5165)+((0.2+(1.7*std::pow(_n_f_5170,1.5)))*std::sin((((0.75*_n_s_5165)-(2.0*_n_w_5171))+_n_ph_5168))));auto _n_right_5303=((0.3*_n_f_5170)*std::sin((_n_w_5171+_n_ph_5168)));return (_n_left_5302+_n_right_5303);})()));

}
}

explicit Native_coffee(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_5207=_n_meta_5016;
this->_n_cols_5029=_n_binding_5207->_p_cols;
this->_n_rows_5030=_n_binding_5207->_p_rows;
this->_n_SX_5031=2.0;
this->_n_SY_5032=4.0;
this->_n_W_5033=(this->_n_cols_5029*this->_n_SX_5031);
this->_n_HH_5034=(this->_n_rows_5030*this->_n_SY_5032);
this->_n_N_5035=(this->_n_cols_5029*this->_n_rows_5030);
this->_n_depth_5036=d::Array<float,true>(size_t((this->_n_W_5033*this->_n_HH_5034))).fill((-d::number(1000000000.0)));
this->_n_lum_5037=d::Array<float,true>(size_t((this->_n_W_5033*this->_n_HH_5034))).fill((-d::number(1.0)));
this->_n_part_5038=d::Array<uint8_t,true>(size_t((this->_n_W_5033*this->_n_HH_5034)));
this->_n_cs_5039=std::sqrt((1.0-(_n_TILT_5019*_n_TILT_5019)));
this->_n_sn_5040=_n_TILT_5019;
this->_n_CX_5041=((this->_n_cols_5029/2.0)-1.5);
this->_n_BASE_5042=(this->_n_rows_5030-4.4);
this->_n_L_5043=_n_norm_5028((-d::number(0.62)),0.62,0.48);
this->_n_id_5045=1.0;
this->_n_HV_5047=_n_norm_5028(d::at(this->_n_L_5043,0.0),(d::at(this->_n_L_5043,1.0)+this->_n_sn_5040),(d::at(this->_n_L_5043,2.0)+this->_n_cs_5039));
{double _n_s_5098=0.0;
for(;d::truth((_n_s_5098<(double(_n_SAUCER_5025.size())-1.0)));(void)((_n_s_5098++))){d::check_cancel();auto _n_binding_5208=d::at(_n_SAUCER_5025,_n_s_5098);
double _n_r1_5099=d::at(_n_binding_5208,0.0);
double _n_y1_5100=d::at(_n_binding_5208,1.0);
auto _n_binding_5209=d::at(_n_SAUCER_5025,(_n_s_5098+1.0));
double _n_r2_5101=d::at(_n_binding_5209,0.0);
double _n_y2_5102=d::at(_n_binding_5209,1.0);
double _n_len_5103=d::hypot(std::initializer_list<double>{(_n_r2_5101-_n_r1_5099),(_n_y2_5102-_n_y1_5100)});
double _n_nr_5104=((-d::number((_n_y2_5102-_n_y1_5100)))/_n_len_5103);
double _n_ny_5105=((_n_r2_5101-_n_r1_5099)/_n_len_5103);
{double _n_f_5106=0.0;
for(;d::truth((_n_f_5106<=1.0));(void)((_n_f_5106=(_n_f_5106+(0.04/_n_len_5103))))){d::check_cancel();double _n_p_5107=(_n_r1_5099+((_n_r2_5101-_n_r1_5099)*_n_f_5106));
double _n_y_5108=(_n_y1_5100+((_n_y2_5102-_n_y1_5100)*_n_f_5106));
{double _n_a_5109=0.0;
for(;d::truth((_n_a_5109<(2.0*ascii::PI)));(void)((_n_a_5109=(_n_a_5109+(0.09/d::maximum({_n_p_5107,0.5})))))){d::check_cancel();double _n_x_5110=(_n_p_5107*std::cos(_n_a_5109));
double _n_z_5111=(_n_p_5107*std::sin(_n_a_5109));
auto&& _n_n_5112=([&](){auto _n_argument_5210=(_n_nr_5104*std::cos(_n_a_5109));auto _n_argument_5211=_n_ny_5105;auto _n_argument_5212=(_n_nr_5104*std::sin(_n_a_5109));return _n_norm_5028(_n_argument_5210,_n_argument_5211,_n_argument_5212);})();
double _n_side_5113=(0.78-(0.22*(_n_x_5110/10.6)));
double _n_ao_5114=(0.35+(0.65*([&](){auto _n_argument_5213=(_n_cupR_5026(0.0)-0.1);auto _n_argument_5214=(_n_cupR_5026(0.0)+1.4);auto _n_argument_5215=_n_p_5107;return _n_smooth_5027(_n_argument_5213,_n_argument_5214,_n_argument_5215);})()));
(void)(([&](){auto _n_argument_5216=_n_x_5110;auto _n_argument_5217=_n_y_5108;auto _n_argument_5218=_n_z_5111;auto _n_argument_5219=_n_n_5112;auto _n_argument_5220=(((0.78*_n_side_5113)*_n_ao_5114)*(d::truth(this->_n_shadowed_5049(_n_x_5110,_n_y_5108,_n_z_5111))?0.35:1.0));auto _n_argument_5221=(0.25*this->_n_glint_5048(_n_n_5112,12.0));return this->_n_plot_5046(_n_argument_5216,_n_argument_5217,_n_argument_5218,_n_argument_5219,_n_argument_5220,std::optional<double>(_n_argument_5221));})());
}}
}}
}}
(void)((this->_n_id_5045=2.0));
{double _n_h_5115=0.0;
for(;d::truth((_n_h_5115<=_n_H_5020));(void)((_n_h_5115=(_n_h_5115+0.05)))){d::check_cancel();double _n_r_5116=_n_cupR_5026(_n_h_5115);
double _n_dr_5117=(([&](){auto _n_left_5222=_n_cupR_5026((_n_h_5115+0.05));auto _n_right_5223=_n_cupR_5026((_n_h_5115-0.05));return (_n_left_5222-_n_right_5223);})()/0.1);
{double _n_a_5118=0.0;
for(;d::truth((_n_a_5118<(2.0*ascii::PI)));(void)((_n_a_5118=(_n_a_5118+(0.1/_n_r_5116))))){d::check_cancel();double _n_ca_5119=std::cos(_n_a_5118);
double _n_sa_5120=std::sin(_n_a_5118);
if(d::truth((_n_sa_5120>(-d::number(0.3))))){d::check_cancel();auto&& _n_n_5121=_n_norm_5028(_n_ca_5119,(-d::number(_n_dr_5117)),_n_sa_5120);
(void)(([&](){auto _n_argument_5224=(_n_r_5116*_n_ca_5119);auto _n_argument_5225=_n_h_5115;auto _n_argument_5226=(_n_r_5116*_n_sa_5120);auto _n_argument_5227=_n_n_5121;auto _n_argument_5228=0.95;auto _n_argument_5229=(0.35*this->_n_glint_5048(_n_n_5121,10.0));return this->_n_plot_5046(_n_argument_5224,_n_argument_5225,_n_argument_5226,_n_argument_5227,_n_argument_5228,std::optional<double>(_n_argument_5229));})());
}
if((d::truth((_n_h_5115>_n_HC_5022))&&d::truth((_n_sa_5120<0.3)))){d::check_cancel();(void)(([&](){auto _n_argument_5230=((_n_r_5116-0.4)*_n_ca_5119);auto _n_argument_5231=_n_h_5115;auto _n_argument_5232=((_n_r_5116-0.4)*_n_sa_5120);auto _n_argument_5233=_n_norm_5028((-d::number(_n_ca_5119)),_n_dr_5117,(-d::number(_n_sa_5120)));auto _n_argument_5234=0.75;return this->_n_plot_5046(_n_argument_5230,_n_argument_5231,_n_argument_5232,_n_argument_5233,_n_argument_5234,std::optional<double>{});})());
}
}}
}}
(void)((this->_n_id_5045=3.0));
this->_n_R_5050=_n_cupR_5026(_n_H_5020);
{double _n_v_5122=0.0;
for(;d::truth((_n_v_5122<=ascii::PI));(void)((_n_v_5122=(_n_v_5122+0.12)))){d::check_cancel();{double _n_a_5123=0.0;
for(;d::truth((_n_a_5123<(2.0*ascii::PI)));(void)((_n_a_5123=(_n_a_5123+(0.06/this->_n_R_5050))))){d::check_cancel();double _n_p_5124=((this->_n_R_5050-0.2)-(0.2*std::cos(_n_v_5122)));
double _n_y_5125=(_n_H_5020+(0.12*std::sin(_n_v_5122)));
double _n_ca_5126=std::cos(_n_a_5123);
double _n_sa_5127=std::sin(_n_a_5123);
(void)(([&](){auto _n_argument_5235=(_n_p_5124*_n_ca_5126);auto _n_argument_5236=_n_y_5125;auto _n_argument_5237=(_n_p_5124*_n_sa_5127);auto _n_argument_5238=_n_norm_5028((0.6*_n_ca_5126),0.8,(0.6*_n_sa_5127));auto _n_argument_5239=0.95;auto _n_argument_5240=0.12;return this->_n_plot_5046(_n_argument_5235,_n_argument_5236,_n_argument_5237,_n_argument_5238,_n_argument_5239,std::optional<double>(_n_argument_5240));})());
}}
}}
(void)((this->_n_id_5045=4.0));
this->_n_RC_5051=(_n_cupR_5026(_n_HC_5022)-0.4);
{double _n_p_5128=0.0;
for(;d::truth((_n_p_5128<this->_n_RC_5051));(void)((_n_p_5128=(_n_p_5128+0.08)))){d::check_cancel();{double _n_a_5129=0.0;
for(;d::truth((_n_a_5129<(2.0*ascii::PI)));(void)((_n_a_5129=(_n_a_5129+(0.08/d::maximum({_n_p_5128,0.5})))))){d::check_cancel();double _n_x_5130=(_n_p_5128*std::cos(_n_a_5129));
double _n_z_5131=(_n_p_5128*std::sin(_n_a_5129));
double _n_shine_5132=std::exp((-d::number((std::pow(((_n_x_5130+2.4)/1.1),2.0)+std::pow(((_n_z_5131+1.4)/0.8),2.0)))));
(void)(([&](){auto _n_argument_5241=_n_x_5130;auto _n_argument_5242=_n_HC_5022;auto _n_argument_5243=_n_z_5131;auto _n_argument_5244=d::Array<double,false>{0.0,1.0,0.0};auto _n_argument_5245=(0.04+(0.16*_n_smooth_5027((0.82*this->_n_RC_5051),this->_n_RC_5051,_n_p_5128)));auto _n_argument_5246=(0.85*_n_shine_5132);return this->_n_plot_5046(_n_argument_5241,_n_argument_5242,_n_argument_5243,d::fixedArray<double,3>(_n_argument_5244),_n_argument_5245,std::optional<double>(_n_argument_5246));})());
}}
}}
this->_n_HY_5052=4.1;
this->_n_AX_5053=3.9;
this->_n_AY_5054=2.6;
this->_n_TUBE_5055=0.42;
this->_n_X0_5056=(_n_cupR_5026(this->_n_HY_5052)-1.3);
this->_n_still_5058=d::Array<std::optional<std::variant<d::String,double>>,false>{};
this->_n_kind_5059=d::Array<double,false>{};
{double _n_k_5134=0.0;
for(;d::truth((_n_k_5134<this->_n_N_5035));(void)((_n_k_5134++))){d::check_cancel();double _n_c_5135=d::mod(_n_k_5134,this->_n_cols_5029);
double _n_r_5136=std::floor((_n_k_5134/this->_n_cols_5029));
double _n_n_5137=0.0;
double _n_sum_5138=0.0;
double _n_low_5139=0.0;
double _n_lip_5140=0.0;
double _n_lipSum_5141=0.0;
double _n_owner_5142=0.0;
{double _n_j_5143=0.0;
for(;d::truth((_n_j_5143<this->_n_SY_5032));(void)((_n_j_5143++))){d::check_cancel();{double _n_i_5144=0.0;
for(;d::truth((_n_i_5144<this->_n_SX_5031));(void)((_n_i_5144++))){d::check_cancel();double _n_q_5145=(((((_n_r_5136*this->_n_SY_5032)+_n_j_5143)*this->_n_W_5033)+(_n_c_5135*this->_n_SX_5031))+_n_i_5144);
double _n_v_5146=d::at(this->_n_lum_5037,_n_q_5145);
if(d::truth((_n_v_5146<0.0))){d::check_cancel();continue;
}
(void)((_n_n_5137++));
(void)((_n_sum_5138=(_n_sum_5138+_n_v_5146)));
if(d::truth((_n_j_5143>=(this->_n_SY_5032/2.0)))){d::check_cancel();(void)((_n_low_5139++));
}
if(d::truth((d::at(this->_n_part_5038,_n_q_5145)==3.0))){d::check_cancel();(void)(((_n_lip_5140++),(_n_lipSum_5141=(_n_lipSum_5141+_n_v_5146))));
}
(void)((_n_owner_5142=d::maximum({_n_owner_5142,(d::truth((d::at(this->_n_part_5038,_n_q_5145)==1.0))?1.0:2.0)})));
}}
}}
(void)(this->_n_kind_5059.push(_n_owner_5142));
(void)(this->_n_still_5058.push((d::truth((_n_lip_5140>=2.0))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::minimum({1.0,(_n_lipSum_5141/_n_lip_5140)}))):(d::truth((_n_n_5137==0.0))?std::optional<std::variant<d::String,double>>{}:(d::truth((_n_n_5137<3.0))?(d::truth(((_n_low_5139*2.0)>_n_n_5137))?std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"_"))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::String(u"'")))):std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::minimum({1.0,(_n_sum_5138/_n_n_5137)}))))))));
}}
this->_n_foot_5060=d::at(this->_n_toCell_5044(0.0,0.0,0.0),1.0);
this->_n_was_5061=this->_n_kind_5059.slice();
{double _n_k_5147=this->_n_cols_5029;
for(;d::truth((_n_k_5147<(this->_n_N_5035-1.0)));(void)((_n_k_5147++))){d::check_cancel();if((d::truth((d::at(this->_n_was_5061,_n_k_5147)!=1.0))||d::truth((d::typeOf(d::at(this->_n_still_5058,_n_k_5147))!=d::String(u"number"))))){d::check_cancel();continue;
}
if((d::truth((d::at(this->_n_was_5061,(_n_k_5147-this->_n_cols_5029))==2.0))&&d::truth(((_n_k_5147/this->_n_cols_5029)>(this->_n_foot_5060-0.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_5247=this->_n_still_5058;auto _n_index_5248=_n_k_5147;auto _n_value_5249=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(d::minimum({std::get<double>(d::read(d::at(this->_n_still_5058,_n_k_5147))),0.06})));d::put(_n_array_5247,_n_index_5248,_n_value_5249);return _n_value_5249;})());
}else {d::check_cancel();if((d::truth((d::at(this->_n_was_5061,(_n_k_5147-1.0))==2.0))||d::truth((d::at(this->_n_was_5061,(_n_k_5147+1.0))==2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_5250=this->_n_still_5058;auto _n_index_5251=_n_k_5147;auto _n_value_5252=(std::get<double>(d::read(d::at(_n_array_5250,_n_index_5251)))*0.4);d::put(_n_array_5250,_n_index_5251,_n_value_5252);return _n_value_5252;})());
}
}
}}
this->_n_ring_5062=d::Array<d::Array<double,false>,false>{};
{double _n_u_5148=(-d::number(2.1));
for(;d::truth((_n_u_5148<=2.1));(void)((_n_u_5148=(_n_u_5148+0.02)))){d::check_cancel();(void)(this->_n_ring_5062.push(this->_n_loop_5057(_n_u_5148)));
}}
{double _n_k_5149=0.0;
for(;d::truth((_n_k_5149<this->_n_N_5035));(void)((_n_k_5149++))){d::check_cancel();double _n_c_5150=d::mod(_n_k_5149,this->_n_cols_5029);
double _n_r_5151=std::floor((_n_k_5149/this->_n_cols_5029));
double _n_x_5152=(((_n_c_5150+0.5)-this->_n_CX_5041)/2.0);
double _n_y_5153=((this->_n_BASE_5042-(_n_r_5151+0.5))/this->_n_cs_5039);
if((d::truth((_n_x_5152<(_n_cupR_5026(_n_y_5153)-0.1)))||d::truth((_n_x_5152>((this->_n_X0_5056+this->_n_AX_5053)+1.0))))){d::check_cancel();continue;
}
double _n_best_5154=9.0;
double _n_ox_5155=0.0;
double _n_oy_5156=0.0;
for(auto &&_n_item_5253:this->_n_ring_5062){d::check_cancel();auto _n_binding_5254=_n_item_5253;
double _n_lx_5157=d::at(_n_binding_5254,0.0);
double _n_ly_5158=d::at(_n_binding_5254,1.0);
{
double _n_d_5159=d::hypot(std::initializer_list<double>{(_n_x_5152-_n_lx_5157),(_n_y_5153-_n_ly_5158)});
if(d::truth((_n_d_5159<_n_best_5154))){d::check_cancel();(void)((((_n_best_5154=_n_d_5159),(_n_ox_5155=((_n_x_5152-_n_lx_5157)/this->_n_TUBE_5055))),(_n_oy_5156=((_n_y_5153-_n_ly_5158)/this->_n_TUBE_5055))));
}

}
}
if(d::truth((_n_best_5154<(this->_n_TUBE_5055+0.12)))){d::check_cancel();auto&& _n_n_5160=([&](){auto _n_argument_5255=_n_ox_5155;auto _n_argument_5256=_n_oy_5156;auto _n_argument_5257=std::sqrt(d::maximum({0.05,((1.0-(_n_ox_5155*_n_ox_5155))-(_n_oy_5156*_n_oy_5156))}));return _n_norm_5028(_n_argument_5255,_n_argument_5256,_n_argument_5257);})();
(void)(([&](){auto&& _n_array_5258=this->_n_still_5058;auto _n_index_5259=_n_k_5149;auto _n_value_5260=std::optional<std::variant<d::String,double>>(std::variant<d::String,double>(([&](){auto _n_argument_5261=1.0;auto _n_argument_5262=([&](){auto _n_left_5263=(0.1+(0.85*d::maximum({0.0,(((d::at(_n_n_5160,0.0)*d::at(this->_n_L_5043,0.0))+(d::at(_n_n_5160,1.0)*d::at(this->_n_L_5043,1.0)))+(d::at(_n_n_5160,2.0)*d::at(this->_n_L_5043,2.0)))})));auto _n_right_5264=(0.3*this->_n_glint_5048(_n_n_5160,10.0));return (_n_left_5263+_n_right_5264);})();return d::minimum({_n_argument_5261,_n_argument_5262});})()));d::put(_n_array_5258,_n_index_5259,_n_value_5260);return _n_value_5260;})());
continue;
}
bool _n_inside_5161=(((std::pow((_n_x_5152-this->_n_X0_5056),2.0)/std::pow(this->_n_AX_5053,2.0))+(std::pow((_n_y_5153-this->_n_HY_5052),2.0)/std::pow(this->_n_AY_5054,2.0)))<1.0);
if((d::truth(_n_inside_5161)&&d::truth((d::at(this->_n_kind_5059,_n_k_5149)!=2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_5265=this->_n_still_5058;auto _n_index_5266=_n_k_5149;auto _n_value_5267=std::optional<std::variant<d::String,double>>{};d::put(_n_array_5265,_n_index_5266,_n_value_5267);return _n_value_5267;})());
}
}}
this->_n_top_5063=std::floor(d::at(this->_n_toCell_5044(0.0,_n_HC_5022,0.0),1.0));
this->_n_W0_5064=d::map(_n_WISPS_5024,[&]( std::array<double,5> _a0) mutable ->d::Array<double,false>{auto _n_binding_5268=_a0;
double _n_x_5162=d::at(_n_binding_5268,0.0);
double _n_z_5163=d::at(_n_binding_5268,1.0);
return this->_n_toCell_5044(_n_x_5162,_n_HC_5022,_n_z_5163);});
_render=[=]( double _a0,std::shared_ptr<_n_Record_5199> _a1) mutable ->d::String{double _n_t_5172=_a0;
auto _n_binding_5271=(d::present(_a1)?_a1:([&](){auto _n_object_5270=std::make_shared<_n_Record_5199>();return _n_object_5270;})());
bool _n_paper_5173=(d::present(_n_binding_5271->_p_paper)?d::read(_n_binding_5271->_p_paper):false);
{
d::Array<d::String,false> _n_out_5174=d::map(this->_n_still_5058,[&]( std::optional<std::variant<d::String,double>> _a0) mutable ->d::String{std::optional<std::variant<d::String,double>> _n_v_5175=_a0;
return (d::truth((!d::present(_n_v_5175)))?d::String(u" "):(d::truth((d::typeOf(d::read(_n_v_5175))==d::String(u"string")))?std::get<d::String>(d::read(_n_v_5175)):d::at(_n_RAMP_5018,([&](){auto _n_argument_5272=1.0;auto _n_argument_5273=d::round(((d::truth(_n_paper_5173)?(1.0-std::get<double>(d::read(_n_v_5175))):std::get<double>(d::read(_n_v_5175)))*9.0));return d::maximum({_n_argument_5272,_n_argument_5273});})())));});
auto _n_free_5176=[&]( double _a0,double _a1) mutable ->bool{double _n_k_5177=_a0;
double _n_r_5178=_a1;
return ([&]()->bool{auto _n_logical_5274=(!d::present(d::at(this->_n_still_5058,_n_k_5177)));return d::truth(_n_logical_5274)?_n_logical_5274:([&]()->bool{auto _n_logical_5275=([&]()->bool{auto _n_logical_5276=(_n_r_5178>=this->_n_top_5063);return d::truth(_n_logical_5276)?(d::typeOf(d::read(d::at(this->_n_still_5058,_n_k_5177)))==d::String(u"number")):_n_logical_5276;})();return d::truth(_n_logical_5275)?(std::get<double>(d::read(d::at(this->_n_still_5058,_n_k_5177)))<0.3):_n_logical_5275;})();})();};
(void)(d::forEach(_n_WISPS_5024,[&]( std::array<double,5> _a0,double _a1) mutable ->void{auto _n_binding_5277=_a0;
double _n_len_5179=d::at(_n_binding_5277,2.0);
double _n_ph_5180=d::at(_n_binding_5277,3.0);
double _n_i_5181=_a1;
{
{double _n_r_5182=std::floor((d::at(d::at(this->_n_W0_5064,_n_i_5181),1.0)-0.5));
for(;d::truth((_n_r_5182>=0.0));(void)((_n_r_5182--))){d::check_cancel();double _n_s_5183=(d::at(d::at(this->_n_W0_5064,_n_i_5181),1.0)-(_n_r_5182+0.5));
if(d::truth((_n_s_5183>_n_len_5179))){d::check_cancel();break;
}
double _n_c_5184=this->_n_colAt_5065(_n_i_5181,_n_s_5183,_n_t_5172);
double _n_cc_5185=std::floor(_n_c_5184);
double _n_k_5186=((_n_r_5182*this->_n_cols_5029)+_n_cc_5185);
if(((d::truth((_n_cc_5185<0.0))||d::truth((_n_cc_5185>=this->_n_cols_5029)))||d::truth((!d::truth(_n_free_5176(_n_k_5186,_n_r_5182)))))){d::check_cancel();continue;
}
double _n_thin_5187=(0.5+(0.5*std::sin((((0.55*_n_s_5183)-(((2.0*ascii::PI)*_n_t_5172)/_n_PERIOD_5023))+(_n_ph_5180*2.0)))));
double _n_a_5188=(([&](){auto _n_left_5278=_n_smooth_5027(0.3,1.8,_n_s_5183);auto _n_right_5279=(1.0-_n_smooth_5027((0.6*_n_len_5179),_n_len_5179,_n_s_5183));return (_n_left_5278*_n_right_5279);})()*(0.3+(0.7*_n_thin_5187)));
if(d::truth((_n_a_5188<0.2))){d::check_cancel();continue;
}
double _n_up_5189=this->_n_colAt_5065(_n_i_5181,(_n_s_5183+1.0),_n_t_5172);
double _n_dn_5190=this->_n_colAt_5065(_n_i_5181,(_n_s_5183-1.0),_n_t_5172);
double _n_lean_5191=((_n_up_5189-_n_dn_5190)/2.0);
double _n_bow_5192=(_n_c_5184-((_n_up_5189+_n_dn_5190)/2.0));
(void)(([&](){auto&& _n_array_5280=_n_out_5174;auto _n_index_5281=_n_k_5186;auto _n_value_5282=(d::truth((_n_a_5188<0.32))?d::String(u"."):(d::truth((std::fabs(_n_lean_5191)>0.7))?(d::truth((_n_lean_5191>0.0))?d::String(u"/"):d::String(u"\\")):(d::truth((_n_bow_5192>0.15))?d::String(u")"):(d::truth((_n_bow_5192<(-d::number(0.15))))?d::String(u"("):d::String(u"|")))));d::put(_n_array_5280,_n_index_5281,_n_value_5282);return _n_value_5282;})());
double _n_run_5193=d::round((_n_up_5189-_n_c_5184));
double _n_n_5194=std::fabs(_n_run_5193);
double _n_dir_5195=d::sign(_n_run_5193);
if((d::truth((_n_a_5188<0.32))||d::truth((_n_n_5194<2.0)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_5283=_n_out_5174;auto _n_index_5284=_n_k_5186;auto _n_value_5285=d::String(u"_");d::put(_n_array_5283,_n_index_5284,_n_value_5285);return _n_value_5285;})());
{double _n_j_5196=1.0;
for(;d::truth((_n_j_5196<_n_n_5194));(void)((_n_j_5196++))){d::check_cancel();if(((d::truth(((_n_cc_5185+(_n_dir_5195*_n_j_5196))>=0.0))&&d::truth(((_n_cc_5185+(_n_dir_5195*_n_j_5196))<this->_n_cols_5029)))&&d::truth(_n_free_5176((_n_k_5186+(_n_dir_5195*_n_j_5196)),_n_r_5182)))){d::check_cancel();(void)(([&](){auto&& _n_array_5286=_n_out_5174;auto _n_index_5287=(_n_k_5186+(_n_dir_5195*_n_j_5196));auto _n_value_5288=(d::truth((_n_j_5196<(_n_n_5194-1.0)))?d::String(u"_"):(d::truth((_n_dir_5195>0.0))?d::String(u"/"):d::String(u"\\")));d::put(_n_array_5286,_n_index_5287,_n_value_5288);return _n_value_5288;})());
}
}}
}}

}
}));
d::Array<d::String,false> _n_lines_5197=d::Array<d::String,false>{};
{double _n_r_5198=0.0;
for(;d::truth((_n_r_5198<this->_n_rows_5030));(void)((_n_r_5198++))){d::check_cancel();(void)(_n_lines_5197.push(d::join(_n_out_5174.slice((_n_r_5198*this->_n_cols_5029),((_n_r_5198+1.0)*this->_n_cols_5029)),d::String(u""))));
}}
return d::join(_n_lines_5197,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("coffee").cols)*ascii::catalog_meta("coffee").rows);auto _env=std::make_shared<_n_Record_5199>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &coffee_meta(){return catalog_meta("coffee");}
std::unique_ptr<Piece> make_coffee(const AsciiPieceOptions &o){return std::make_unique<Native_coffee>(o);}
}
