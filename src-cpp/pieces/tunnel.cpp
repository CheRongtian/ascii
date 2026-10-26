// Direct, statically typed C++ from src/pieces/tunnel.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34576;
struct _n_Record_34643;
struct _n_Record_34576{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34576> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34576>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_34643{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34643> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34643>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_wrap_34590(double _a0);
double _n_wave_34591(double _a0,double _a1);
double _n_ridge_34592(double _a0,double _a1);
double _n_pulse_34593(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_34576> _n_meta_34575=[](){return ([&](){auto _n_object_34646=std::make_shared<_n_Record_34576>();_n_object_34646->_p_name=d::String(u"tunnel");_n_object_34646->_p_category=d::String(u"effects");_n_object_34646->_p_note=d::String(u"flying down a tiled tube that bends and twists");_n_object_34646->_p_cols=64.0;_n_object_34646->_p_rows=24.0;_n_object_34646->_p_fps=30.0;return _n_object_34646;})();}();
const d::String _n_RAMP_34577=[](){return d::String(u" .,:;-=+*#%@");}();
const double _n_F_34578=[](){return 18.0;}();
const double _n_AROUND_34579=[](){return 10.0;}();
const double _n_ALONG_34580=[](){return 0.55;}();
const double _n_DIM_34581=[](){return 0.35;}();
const double _n_MORTAR_34582=[](){return 0.1;}();
const double _n_GAP_34583=[](){return 0.07;}();
const double _n_SPEED_34584=[](){return 2.4;}();
const double _n_TWIST_34585=[](){return 0.06;}();
const double _n_FOG_34586=[](){return 2.8;}();
const double _n_BEND_34587=[](){return 3.0;}();
const double _n_KEY_34588=[](){return 0.12;}();
const double _n_SHARP_34589=[](){return 0.7;}();
double _n_wrap_34590(double _a0){double _n_x_34605=_a0;
return (_n_x_34605-std::floor(_n_x_34605));}

double _n_wave_34591(double _a0,double _a1){double _n_x_34606=_a0;
double _n_w_34607=_a1;
return ((2.0*([&](){auto _n_left_34647=std::fabs((_n_wrap_34590(((_n_x_34606-(_n_w_34607/2.0))/2.0))-0.5));auto _n_right_34648=std::fabs((_n_wrap_34590(((_n_x_34606+(_n_w_34607/2.0))/2.0))-0.5));return (_n_left_34647-_n_right_34648);})())/_n_w_34607);}

double _n_ridge_34592(double _a0,double _a1){double _n_x_34608=_a0;
double _n_g_34609=_a1;
return ([&](){auto _n_left_34649=((std::floor((_n_x_34608+_n_g_34609))*2.0)*_n_g_34609);auto _n_right_34650=([&](){auto _n_argument_34651=_n_wrap_34590((_n_x_34608+_n_g_34609));auto _n_argument_34652=(2.0*_n_g_34609);return d::minimum({_n_argument_34651,_n_argument_34652});})();return (_n_left_34649+_n_right_34650);})();}

double _n_pulse_34593(double _a0,double _a1,double _a2){double _n_x_34610=_a0;
double _n_w_34611=_a1;
double _n_g_34612=_a2;
return (([&](){auto _n_left_34653=_n_ridge_34592((_n_x_34610+(_n_w_34611/2.0)),_n_g_34612);auto _n_right_34654=_n_ridge_34592((_n_x_34610-(_n_w_34611/2.0)),_n_g_34612);return (_n_left_34653-_n_right_34654);})()/_n_w_34611);}

struct Native_tunnel final:ascii::Piece{
double _n_cols_34594{};
double _n_rows_34595{};
d::Array<d::String,false> _n_out_34596{};
double _n_W_34597{};
double _n_H_34598{};
d::Array<double,true> _n_U_34599{};
d::Array<double,true> _n_V_34600{};
d::Array<double,true> _n_Z_34601{};
d::Array<double,true> _n_L_34602{};
double _n_TAU_34603{};
std::function<d::String(double,std::shared_ptr<_n_Record_34643>)> _render;
double _n_turn_34604(double _a0){double _n_d_34613=_a0;
return (_n_d_34613-(_n_AROUND_34579*d::round((_n_d_34613/_n_AROUND_34579))));}

explicit Native_tunnel(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34655=_n_meta_34575;
this->_n_cols_34594=_n_binding_34655->_p_cols;
this->_n_rows_34595=_n_binding_34655->_p_rows;
this->_n_out_34596=d::Array<d::String,false>(size_t((this->_n_cols_34594*this->_n_rows_34595)));
this->_n_W_34597=(this->_n_cols_34594+1.0);
this->_n_H_34598=(this->_n_rows_34595+1.0);
this->_n_U_34599=d::Array<double,true>(size_t((this->_n_W_34597*this->_n_H_34598)));
this->_n_V_34600=d::Array<double,true>(size_t((this->_n_W_34597*this->_n_H_34598)));
this->_n_Z_34601=d::Array<double,true>(size_t((this->_n_W_34597*this->_n_H_34598)));
this->_n_L_34602=d::Array<double,true>(size_t((this->_n_W_34597*this->_n_H_34598)));
this->_n_TAU_34603=(2.0*ascii::PI);
_render=[=]( double _a0,std::shared_ptr<_n_Record_34643> _a1) mutable ->d::String{double _n_t_34614=_a0;
auto _n_binding_34658=(d::present(_a1)?_a1:([&](){auto _n_object_34657=std::make_shared<_n_Record_34643>();return _n_object_34657;})());
bool _n_paper_34615=(d::present(_n_binding_34658->_p_paper)?d::read(_n_binding_34658->_p_paper):false);
{
double _n_ax_34616=(0.42*std::sin((_n_t_34614*0.55)));
double _n_ay_34617=(0.26*std::sin(((_n_t_34614*0.9)+1.0)));
double _n_spin_34618=(_n_t_34614*0.06);
{double _n_r_34619=0.0;
for(;d::truth((_n_r_34619<this->_n_H_34598));(void)((_n_r_34619++))){d::check_cancel();{double _n_c_34620=0.0;
for(;d::truth((_n_c_34620<this->_n_W_34597));(void)((_n_c_34620++))){d::check_cancel();double _n_sx_34621=(((_n_c_34620+0.5)-(this->_n_cols_34594/2.0))/_n_F_34578);
double _n_sy_34622=((-d::number((((_n_r_34619+0.5)-(this->_n_rows_34595/2.0))*2.0)))/_n_F_34578);
double _n_z_34623=(1.0/([&](){auto _n_argument_34659=0.001;auto _n_argument_34660=d::hypot(std::initializer_list<double>{_n_sx_34621,_n_sy_34622});return d::maximum({_n_argument_34659,_n_argument_34660});})());
double _n_dx_34624=_n_sx_34621;
double _n_dy_34625=_n_sy_34622;
{double _n_k_34626=0.0;
for(;d::truth((_n_k_34626<4.0));(void)((_n_k_34626++))){d::check_cancel();double _n_lean_34627=(1.0-std::exp(((-d::number(_n_z_34623))/_n_BEND_34587)));
(void)((_n_dx_34624=(_n_sx_34621-(_n_ax_34616*_n_lean_34627))));
(void)((_n_dy_34625=(_n_sy_34622-(_n_ay_34617*_n_lean_34627))));
(void)((_n_z_34623=([&](){auto _n_argument_34661=60.0;auto _n_argument_34662=(1.0/([&](){auto _n_argument_34663=0.001;auto _n_argument_34664=d::hypot(std::initializer_list<double>{_n_dx_34624,_n_dy_34625});return d::maximum({_n_argument_34663,_n_argument_34664});})());return d::minimum({_n_argument_34661,_n_argument_34662});})()));
}}
double _n_k_34628=(_n_c_34620+(_n_r_34619*this->_n_W_34597));
(void)(([&](){auto&& _n_array_34665=this->_n_U_34599;auto _n_index_34666=_n_k_34628;auto _n_value_34667=((((std::atan2(_n_dy_34625,_n_dx_34624)/this->_n_TAU_34603)+_n_spin_34618)+(_n_z_34623*_n_TWIST_34585))*_n_AROUND_34579);d::put(_n_array_34665,_n_index_34666,_n_value_34667);return _n_value_34667;})());
(void)(([&](){auto&& _n_array_34668=this->_n_V_34600;auto _n_index_34669=_n_k_34628;auto _n_value_34670=((_n_z_34623*_n_ALONG_34580)+((_n_t_34614*_n_SPEED_34584)*_n_ALONG_34580));d::put(_n_array_34668,_n_index_34669,_n_value_34670);return _n_value_34670;})());
(void)(([&](){auto&& _n_array_34671=this->_n_Z_34601;auto _n_index_34672=_n_k_34628;auto _n_value_34673=_n_z_34623;d::put(_n_array_34671,_n_index_34672,_n_value_34673);return _n_value_34673;})());
(void)(([&](){auto&& _n_array_34674=this->_n_L_34602;auto _n_index_34675=_n_k_34628;auto _n_value_34676=(std::exp(((-d::number(_n_z_34623))/_n_FOG_34586))*((1.0-_n_KEY_34588)+(((_n_KEY_34588*(_n_dx_34624-_n_dy_34625))*_n_z_34623)*std::sqrt(.5))));d::put(_n_array_34674,_n_index_34675,_n_value_34676);return _n_value_34676;})());
}}
}}
{double _n_r_34629=0.0;
for(;d::truth((_n_r_34629<this->_n_rows_34595));(void)((_n_r_34629++))){d::check_cancel();{double _n_c_34630=0.0;
for(;d::truth((_n_c_34630<this->_n_cols_34594));(void)((_n_c_34630++))){d::check_cancel();double _n_k_34631=(_n_c_34630+(_n_r_34629*this->_n_W_34597));
double _n_z_34632=d::at(this->_n_Z_34601,_n_k_34631);
double _n_wu_34633=(_n_SHARP_34589*([&](){auto _n_argument_34677=std::fabs(this->_n_turn_34604((d::at(this->_n_U_34599,(_n_k_34631+1.0))-d::at(this->_n_U_34599,_n_k_34631))));auto _n_argument_34678=std::fabs(this->_n_turn_34604((d::at(this->_n_U_34599,(_n_k_34631+this->_n_W_34597))-d::at(this->_n_U_34599,_n_k_34631))));auto _n_argument_34679=0.01;return d::maximum({_n_argument_34677,_n_argument_34678,_n_argument_34679});})());
double _n_wv_34634=(_n_SHARP_34589*([&](){auto _n_argument_34680=std::fabs((d::at(this->_n_V_34600,(_n_k_34631+1.0))-d::at(this->_n_V_34600,_n_k_34631)));auto _n_argument_34681=std::fabs((d::at(this->_n_V_34600,(_n_k_34631+this->_n_W_34597))-d::at(this->_n_V_34600,_n_k_34631)));auto _n_argument_34682=0.01;return d::maximum({_n_argument_34680,_n_argument_34681,_n_argument_34682});})());
double _n_light_34635=(0.5-([&](){auto _n_left_34683=(0.5*_n_wave_34591(d::at(this->_n_U_34599,_n_k_34631),_n_wu_34633));auto _n_right_34684=_n_wave_34591(d::at(this->_n_V_34600,_n_k_34631),_n_wv_34634);return (_n_left_34683*_n_right_34684);})());
double _n_gu_34636=d::minimum({_n_GAP_34583,((_n_z_34632*_n_AROUND_34579)/((4.0*ascii::PI)*_n_F_34578))});
double _n_gv_34637=d::minimum({_n_GAP_34583,(((_n_z_34632*_n_z_34632)*_n_ALONG_34580)/_n_F_34578)});
double _n_mortar_34638=(1.0-([&](){auto _n_left_34685=(1.0-_n_pulse_34593(d::at(this->_n_U_34599,_n_k_34631),_n_wu_34633,_n_gu_34636));auto _n_right_34686=(1.0-_n_pulse_34593(d::at(this->_n_V_34600,_n_k_34631),_n_wv_34634,_n_gv_34637));return (_n_left_34685*_n_right_34686);})());
double _n_b_34639=(((((_n_DIM_34581+((1.0-_n_DIM_34581)*_n_light_34635))*(1.0-_n_mortar_34638))+(_n_MORTAR_34582*_n_mortar_34638))*d::at(this->_n_L_34602,_n_k_34631))*1.25);
double _n_i_34640=([&](){auto _n_argument_34687=(double(_n_RAMP_34577.size())-1.0);auto _n_argument_34688=d::round((std::pow(d::maximum({0.0,_n_b_34639}),0.8)*(double(_n_RAMP_34577.size())-1.0)));return d::minimum({_n_argument_34687,_n_argument_34688});})();
(void)(([&](){auto&& _n_array_34689=this->_n_out_34596;auto _n_index_34690=(_n_c_34630+(_n_r_34629*this->_n_cols_34594));auto _n_value_34691=d::at(_n_RAMP_34577,(d::truth(_n_paper_34615)?((double(_n_RAMP_34577.size())-1.0)-_n_i_34640):_n_i_34640));d::put(_n_array_34689,_n_index_34690,_n_value_34691);return _n_value_34691;})());
}}
}}
d::Array<d::String,false> _n_lines_34641=d::Array<d::String,false>{};
{double _n_r_34642=0.0;
for(;d::truth((_n_r_34642<this->_n_rows_34595));(void)((_n_r_34642++))){d::check_cancel();(void)(_n_lines_34641.push(d::join(this->_n_out_34596.slice((_n_r_34642*this->_n_cols_34594),((_n_r_34642+1.0)*this->_n_cols_34594)),d::String(u""))));
}}
return d::join(_n_lines_34641,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("tunnel").cols)*ascii::catalog_meta("tunnel").rows);auto _env=std::make_shared<_n_Record_34643>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &tunnel_meta(){return catalog_meta("tunnel");}
std::unique_ptr<Piece> make_tunnel(const AsciiPieceOptions &o){return std::make_unique<Native_tunnel>(o);}
}
