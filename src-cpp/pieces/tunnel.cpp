// Direct, statically typed C++ from src/pieces/tunnel.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34577;
struct _n_Record_34644;
struct _n_Record_34577{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34577> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34577>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_34644{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34644> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34644>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_wrap_34591(double _a0);
double _n_wave_34592(double _a0,double _a1);
double _n_ridge_34593(double _a0,double _a1);
double _n_pulse_34594(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_34577> _n_meta_34576=[](){return ([&](){auto _n_object_34647=std::make_shared<_n_Record_34577>();_n_object_34647->_p_name=d::String(u"tunnel");_n_object_34647->_p_category=d::String(u"effects");_n_object_34647->_p_note=d::String(u"flying down a tiled tube that bends and twists");_n_object_34647->_p_cols=64.0;_n_object_34647->_p_rows=24.0;_n_object_34647->_p_fps=30.0;return _n_object_34647;})();}();
const d::String _n_RAMP_34578=[](){return d::String(u" .,:;-=+*#%@");}();
const double _n_F_34579=[](){return 18.0;}();
const double _n_AROUND_34580=[](){return 10.0;}();
const double _n_ALONG_34581=[](){return 0.55;}();
const double _n_DIM_34582=[](){return 0.35;}();
const double _n_MORTAR_34583=[](){return 0.1;}();
const double _n_GAP_34584=[](){return 0.07;}();
const double _n_SPEED_34585=[](){return 2.4;}();
const double _n_TWIST_34586=[](){return 0.06;}();
const double _n_FOG_34587=[](){return 2.8;}();
const double _n_BEND_34588=[](){return 3.0;}();
const double _n_KEY_34589=[](){return 0.12;}();
const double _n_SHARP_34590=[](){return 0.7;}();
double _n_wrap_34591(double _a0){double _n_x_34606=_a0;
return (_n_x_34606-std::floor(_n_x_34606));}

double _n_wave_34592(double _a0,double _a1){double _n_x_34607=_a0;
double _n_w_34608=_a1;
return ((2.0*([&](){auto _n_left_34648=std::fabs((_n_wrap_34591(((_n_x_34607-(_n_w_34608/2.0))/2.0))-0.5));auto _n_right_34649=std::fabs((_n_wrap_34591(((_n_x_34607+(_n_w_34608/2.0))/2.0))-0.5));return (_n_left_34648-_n_right_34649);})())/_n_w_34608);}

double _n_ridge_34593(double _a0,double _a1){double _n_x_34609=_a0;
double _n_g_34610=_a1;
return ([&](){auto _n_left_34650=((std::floor((_n_x_34609+_n_g_34610))*2.0)*_n_g_34610);auto _n_right_34651=([&](){auto _n_argument_34652=_n_wrap_34591((_n_x_34609+_n_g_34610));auto _n_argument_34653=(2.0*_n_g_34610);return d::minimum({_n_argument_34652,_n_argument_34653});})();return (_n_left_34650+_n_right_34651);})();}

double _n_pulse_34594(double _a0,double _a1,double _a2){double _n_x_34611=_a0;
double _n_w_34612=_a1;
double _n_g_34613=_a2;
return (([&](){auto _n_left_34654=_n_ridge_34593((_n_x_34611+(_n_w_34612/2.0)),_n_g_34613);auto _n_right_34655=_n_ridge_34593((_n_x_34611-(_n_w_34612/2.0)),_n_g_34613);return (_n_left_34654-_n_right_34655);})()/_n_w_34612);}

struct Native_tunnel final:ascii::Piece{
double _n_cols_34595{};
double _n_rows_34596{};
d::Array<d::String,false> _n_out_34597{};
double _n_W_34598{};
double _n_H_34599{};
d::Array<double,true> _n_U_34600{};
d::Array<double,true> _n_V_34601{};
d::Array<double,true> _n_Z_34602{};
d::Array<double,true> _n_L_34603{};
double _n_TAU_34604{};
std::function<d::String(double,std::shared_ptr<_n_Record_34644>)> _render;
double _n_turn_34605(double _a0){double _n_d_34614=_a0;
return (_n_d_34614-(_n_AROUND_34580*d::round((_n_d_34614/_n_AROUND_34580))));}

explicit Native_tunnel(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34656=_n_meta_34576;
this->_n_cols_34595=_n_binding_34656->_p_cols;
this->_n_rows_34596=_n_binding_34656->_p_rows;
this->_n_out_34597=d::Array<d::String,false>(size_t((this->_n_cols_34595*this->_n_rows_34596)));
this->_n_W_34598=(this->_n_cols_34595+1.0);
this->_n_H_34599=(this->_n_rows_34596+1.0);
this->_n_U_34600=d::Array<double,true>(size_t((this->_n_W_34598*this->_n_H_34599)));
this->_n_V_34601=d::Array<double,true>(size_t((this->_n_W_34598*this->_n_H_34599)));
this->_n_Z_34602=d::Array<double,true>(size_t((this->_n_W_34598*this->_n_H_34599)));
this->_n_L_34603=d::Array<double,true>(size_t((this->_n_W_34598*this->_n_H_34599)));
this->_n_TAU_34604=(2.0*ascii::PI);
_render=[=]( double _a0,std::shared_ptr<_n_Record_34644> _a1) mutable ->d::String{double _n_t_34615=_a0;
auto _n_binding_34659=(d::present(_a1)?_a1:([&](){auto _n_object_34658=std::make_shared<_n_Record_34644>();return _n_object_34658;})());
bool _n_paper_34616=(d::present(_n_binding_34659->_p_paper)?d::read(_n_binding_34659->_p_paper):false);
{
double _n_ax_34617=(0.42*std::sin((_n_t_34615*0.55)));
double _n_ay_34618=(0.26*std::sin(((_n_t_34615*0.9)+1.0)));
double _n_spin_34619=(_n_t_34615*0.06);
{double _n_r_34620=0.0;
for(;d::truth((_n_r_34620<this->_n_H_34599));(void)((_n_r_34620++))){d::check_cancel();{double _n_c_34621=0.0;
for(;d::truth((_n_c_34621<this->_n_W_34598));(void)((_n_c_34621++))){d::check_cancel();double _n_sx_34622=(((_n_c_34621+0.5)-(this->_n_cols_34595/2.0))/_n_F_34579);
double _n_sy_34623=((-d::number((((_n_r_34620+0.5)-(this->_n_rows_34596/2.0))*2.0)))/_n_F_34579);
double _n_z_34624=(1.0/([&](){auto _n_argument_34660=0.001;auto _n_argument_34661=d::hypot(std::initializer_list<double>{_n_sx_34622,_n_sy_34623});return d::maximum({_n_argument_34660,_n_argument_34661});})());
double _n_dx_34625=_n_sx_34622;
double _n_dy_34626=_n_sy_34623;
{double _n_k_34627=0.0;
for(;d::truth((_n_k_34627<4.0));(void)((_n_k_34627++))){d::check_cancel();double _n_lean_34628=(1.0-std::exp(((-d::number(_n_z_34624))/_n_BEND_34588)));
(void)((_n_dx_34625=(_n_sx_34622-(_n_ax_34617*_n_lean_34628))));
(void)((_n_dy_34626=(_n_sy_34623-(_n_ay_34618*_n_lean_34628))));
(void)((_n_z_34624=([&](){auto _n_argument_34662=60.0;auto _n_argument_34663=(1.0/([&](){auto _n_argument_34664=0.001;auto _n_argument_34665=d::hypot(std::initializer_list<double>{_n_dx_34625,_n_dy_34626});return d::maximum({_n_argument_34664,_n_argument_34665});})());return d::minimum({_n_argument_34662,_n_argument_34663});})()));
}}
double _n_k_34629=(_n_c_34621+(_n_r_34620*this->_n_W_34598));
(void)(([&](){auto&& _n_array_34666=this->_n_U_34600;auto _n_index_34667=_n_k_34629;auto _n_value_34668=((((std::atan2(_n_dy_34626,_n_dx_34625)/this->_n_TAU_34604)+_n_spin_34619)+(_n_z_34624*_n_TWIST_34586))*_n_AROUND_34580);d::put(_n_array_34666,_n_index_34667,_n_value_34668);return _n_value_34668;})());
(void)(([&](){auto&& _n_array_34669=this->_n_V_34601;auto _n_index_34670=_n_k_34629;auto _n_value_34671=((_n_z_34624*_n_ALONG_34581)+((_n_t_34615*_n_SPEED_34585)*_n_ALONG_34581));d::put(_n_array_34669,_n_index_34670,_n_value_34671);return _n_value_34671;})());
(void)(([&](){auto&& _n_array_34672=this->_n_Z_34602;auto _n_index_34673=_n_k_34629;auto _n_value_34674=_n_z_34624;d::put(_n_array_34672,_n_index_34673,_n_value_34674);return _n_value_34674;})());
(void)(([&](){auto&& _n_array_34675=this->_n_L_34603;auto _n_index_34676=_n_k_34629;auto _n_value_34677=(std::exp(((-d::number(_n_z_34624))/_n_FOG_34587))*((1.0-_n_KEY_34589)+(((_n_KEY_34589*(_n_dx_34625-_n_dy_34626))*_n_z_34624)*std::sqrt(.5))));d::put(_n_array_34675,_n_index_34676,_n_value_34677);return _n_value_34677;})());
}}
}}
{double _n_r_34630=0.0;
for(;d::truth((_n_r_34630<this->_n_rows_34596));(void)((_n_r_34630++))){d::check_cancel();{double _n_c_34631=0.0;
for(;d::truth((_n_c_34631<this->_n_cols_34595));(void)((_n_c_34631++))){d::check_cancel();double _n_k_34632=(_n_c_34631+(_n_r_34630*this->_n_W_34598));
double _n_z_34633=d::at(this->_n_Z_34602,_n_k_34632);
double _n_wu_34634=(_n_SHARP_34590*([&](){auto _n_argument_34678=std::fabs(this->_n_turn_34605((d::at(this->_n_U_34600,(_n_k_34632+1.0))-d::at(this->_n_U_34600,_n_k_34632))));auto _n_argument_34679=std::fabs(this->_n_turn_34605((d::at(this->_n_U_34600,(_n_k_34632+this->_n_W_34598))-d::at(this->_n_U_34600,_n_k_34632))));auto _n_argument_34680=0.01;return d::maximum({_n_argument_34678,_n_argument_34679,_n_argument_34680});})());
double _n_wv_34635=(_n_SHARP_34590*([&](){auto _n_argument_34681=std::fabs((d::at(this->_n_V_34601,(_n_k_34632+1.0))-d::at(this->_n_V_34601,_n_k_34632)));auto _n_argument_34682=std::fabs((d::at(this->_n_V_34601,(_n_k_34632+this->_n_W_34598))-d::at(this->_n_V_34601,_n_k_34632)));auto _n_argument_34683=0.01;return d::maximum({_n_argument_34681,_n_argument_34682,_n_argument_34683});})());
double _n_light_34636=(0.5-([&](){auto _n_left_34684=(0.5*_n_wave_34592(d::at(this->_n_U_34600,_n_k_34632),_n_wu_34634));auto _n_right_34685=_n_wave_34592(d::at(this->_n_V_34601,_n_k_34632),_n_wv_34635);return (_n_left_34684*_n_right_34685);})());
double _n_gu_34637=d::minimum({_n_GAP_34584,((_n_z_34633*_n_AROUND_34580)/((4.0*ascii::PI)*_n_F_34579))});
double _n_gv_34638=d::minimum({_n_GAP_34584,(((_n_z_34633*_n_z_34633)*_n_ALONG_34581)/_n_F_34579)});
double _n_mortar_34639=(1.0-([&](){auto _n_left_34686=(1.0-_n_pulse_34594(d::at(this->_n_U_34600,_n_k_34632),_n_wu_34634,_n_gu_34637));auto _n_right_34687=(1.0-_n_pulse_34594(d::at(this->_n_V_34601,_n_k_34632),_n_wv_34635,_n_gv_34638));return (_n_left_34686*_n_right_34687);})());
double _n_b_34640=(((((_n_DIM_34582+((1.0-_n_DIM_34582)*_n_light_34636))*(1.0-_n_mortar_34639))+(_n_MORTAR_34583*_n_mortar_34639))*d::at(this->_n_L_34603,_n_k_34632))*1.25);
double _n_i_34641=([&](){auto _n_argument_34688=(double(_n_RAMP_34578.size())-1.0);auto _n_argument_34689=d::round((std::pow(d::maximum({0.0,_n_b_34640}),0.8)*(double(_n_RAMP_34578.size())-1.0)));return d::minimum({_n_argument_34688,_n_argument_34689});})();
(void)(([&](){auto&& _n_array_34690=this->_n_out_34597;auto _n_index_34691=(_n_c_34631+(_n_r_34630*this->_n_cols_34595));auto _n_value_34692=d::at(_n_RAMP_34578,(d::truth(_n_paper_34616)?((double(_n_RAMP_34578.size())-1.0)-_n_i_34641):_n_i_34641));d::put(_n_array_34690,_n_index_34691,_n_value_34692);return _n_value_34692;})());
}}
}}
d::Array<d::String,false> _n_lines_34642=d::Array<d::String,false>{};
{double _n_r_34643=0.0;
for(;d::truth((_n_r_34643<this->_n_rows_34596));(void)((_n_r_34643++))){d::check_cancel();(void)(_n_lines_34642.push(d::join(this->_n_out_34597.slice((_n_r_34643*this->_n_cols_34595),((_n_r_34643+1.0)*this->_n_cols_34595)),d::String(u""))));
}}
return d::join(_n_lines_34642,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tunnel").cols)*ascii::catalog_meta("tunnel").rows);auto _env=std::make_shared<_n_Record_34644>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tunnel_meta(){return catalog_meta("tunnel");}
std::unique_ptr<Piece> make_tunnel(const AsciiPieceOptions &o){return std::make_unique<Native_tunnel>(o);}
}
