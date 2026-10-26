// Direct, statically typed C++ from src/pieces/eclipse.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_8549;
struct _n_Record_8652;
struct _n_Record_8549{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_8549> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8549>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_8652{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_8652> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8652>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_8560(double _a0);
double _n_smooth_8561(double _a0,double _a1,double _a2);
double _n_wrap_8562(double _a0);
std::shared_ptr<_n_Record_8549> _n_meta_8548=[](){return ([&](){auto _n_object_8655=std::make_shared<_n_Record_8549>();_n_object_8655->_p_name=d::String(u"eclipse");_n_object_8655->_p_category=d::String(u"space");_n_object_8655->_p_note=d::String(u"the moon slides over the sun; diamond ring, then corona");_n_object_8655->_p_cols=64.0;_n_object_8655->_p_rows=27.0;_n_object_8655->_p_fps=20.0;return _n_object_8655;})();}();
const d::String _n_RAMP_8550=[](){return d::String(u" .:-=+*#%@");}();
const double _n_R_8551=[](){return 6.0;}();
const double _n_MOON_8552=[](){return 1.06;}();
const double _n_LOOP_8553=[](){return 18.0;}();
const double _n_MID_8554=[](){return 5.3;}();
const double _n_TILT_8555=[](){return 0.2;}();
const double _n_MISS_8556=[](){return 0.005;}();
const double _n_SS_8557=[](){return 3.0;}();
d::Array<d::Array<double,false>,false> _n_STREAMERS_8558=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.1,0.42,0.44,0.85},d::Array<double,false>{3.28,0.45,0.44,0.8},d::Array<double,false>{0.85,0.15,0.5,0.6},d::Array<double,false>{2.35,0.16,0.48,0.6},d::Array<double,false>{(-d::number(0.6)),0.15,0.45,0.55},d::Array<double,false>{3.9,0.14,0.42,0.5}};}();
d::Array<d::Array<double,false>,false> _n_PROMS_8559=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.9,0.06},d::Array<double,false>{(-d::number(0.9)),0.05},d::Array<double,false>{0.5,0.04}};}();
std::function<double()> _n_mulberry32_8560(double _a0){double _n_a_8575=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_8575=double(d::i32((_n_a_8575+1831565813.0))|d::i32(0.0))));
double _n_t_8576=d::imul(double(d::i32(_n_a_8575)^d::i32(double(d::u32(_n_a_8575)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_8575)));
(void)((_n_t_8576=double(d::i32((_n_t_8576+d::imul(double(d::i32(_n_t_8576)^d::i32(double(d::u32(_n_t_8576)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_8576)))))^d::i32(_n_t_8576))));
return (double(d::u32(double(d::i32(_n_t_8576)^d::i32(double(d::u32(_n_t_8576)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_smooth_8561(double _a0,double _a1,double _a2){double _n_a_8577=_a0;
double _n_b_8578=_a1;
double _n_x_8579=_a2;
{
double _n_u_8580=([&](){auto _n_argument_8656=1.0;auto _n_argument_8657=d::maximum({0.0,((_n_x_8579-_n_a_8577)/(_n_b_8578-_n_a_8577))});return d::minimum({_n_argument_8656,_n_argument_8657});})();
return ((_n_u_8580*_n_u_8580)*(3.0-(2.0*_n_u_8580)));

}
}

double _n_wrap_8562(double _a0){double _n_a_8581=_a0;
return ([&](){auto _n_argument_8658=std::sin(_n_a_8581);auto _n_argument_8659=std::cos(_n_a_8581);return std::atan2(_n_argument_8658,_n_argument_8659);})();}

struct Native_eclipse final:ascii::Piece{
double _n_cols_8563{};
double _n_rows_8564{};
double _n_n_8565{};
std::function<double()> _n_rand_8566{};
d::Array<d::Array<double,false>,false> _n_limb_8569{};
d::Array<float,true> _n_corona_8571{};
d::Array<float,true> _n_ring_8572{};
d::Array<float,true> _n_angle_8573{};
d::Array<uint8_t,true> _n_stars_8574{};
std::function<d::String(double,std::shared_ptr<_n_Record_8652>)> _render;
double _n_X_8567(double _a0){double _n_c_8582=_a0;
return ((_n_c_8582-(this->_n_cols_8563/2.0))/(2.0*_n_R_8551));}

double _n_Y_8568(double _a0){double _n_r_8583=_a0;
return (((this->_n_rows_8564/2.0)-_n_r_8583)/_n_R_8551);}

double _n_moonR_8570(double _a0){double _n_a_8586=_a0;
return (_n_MOON_8552+d::reduce(this->_n_limb_8569,[&]( double _a0,d::Array<double,false> _a1) mutable ->double{double _n_s_8587=_a0;
auto _n_binding_8715=_a1;
double _n_k_8588=d::at(_n_binding_8715,0.0);
double _n_p_8589=d::at(_n_binding_8715,1.0);
double _n_h_8590=d::at(_n_binding_8715,2.0);
return (_n_s_8587+(_n_h_8590*std::sin(((_n_k_8588*_n_a_8586)+_n_p_8589))));},0.0));}

explicit Native_eclipse(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_8660=_n_meta_8548;
this->_n_cols_8563=_n_binding_8660->_p_cols;
this->_n_rows_8564=_n_binding_8660->_p_rows;
this->_n_n_8565=(double(_n_RAMP_8550.size())-1.0);
this->_n_rand_8566=_n_mulberry32_8560(11.0);
this->_n_limb_8569=d::Array<d::Array<double,false>,false>(d::from(5.0,[&]( d::Nil _a0,double _a1) mutable ->d::Array<double,false>{double _n_k_8585=_a1;
return d::Array<double,false>{((3.0+(4.0*_n_k_8585))+std::floor((this->_n_rand_8566()*3.0))),(this->_n_rand_8566()*6.283),(0.006/(1.0+(_n_k_8585*0.4)))};}));
this->_n_corona_8571=d::Array<float,true>(size_t((this->_n_cols_8563*this->_n_rows_8564)));
this->_n_ring_8572=d::Array<float,true>(size_t((this->_n_cols_8563*this->_n_rows_8564)));
this->_n_angle_8573=d::Array<float,true>(size_t((this->_n_cols_8563*this->_n_rows_8564)));
this->_n_stars_8574=d::Array<uint8_t,true>(size_t((this->_n_cols_8563*this->_n_rows_8564)));
{double _n_r_8591=0.0;
for(;d::truth((_n_r_8591<this->_n_rows_8564));(void)((_n_r_8591++))){d::check_cancel();{double _n_c_8592=0.0;
for(;d::truth((_n_c_8592<this->_n_cols_8563));(void)((_n_c_8592++))){d::check_cancel();double _n_k_8593=((_n_r_8591*this->_n_cols_8563)+_n_c_8592);
double _n_x_8594=this->_n_X_8567((_n_c_8592+0.5));
double _n_y_8595=this->_n_Y_8568((_n_r_8591+0.5));
double _n_d_8596=d::hypot(std::initializer_list<double>{_n_x_8594,_n_y_8595});
double _n_a_8597=std::atan2(_n_y_8595,_n_x_8594);
(void)(([&](){auto&& _n_array_8661=this->_n_angle_8573;auto _n_index_8662=_n_k_8593;auto _n_value_8663=_n_a_8597;d::put(_n_array_8661,_n_index_8662,_n_value_8663);return _n_value_8663;})());
if(d::truth((_n_d_8596<1.0))){d::check_cancel();continue;
}
double _n_s_8598=0.0;
for(auto &&_n_item_8664:_n_STREAMERS_8558){d::check_cancel();auto _n_binding_8665=_n_item_8664;
double _n_at_8599=d::at(_n_binding_8665,0.0);
double _n_w_8600=d::at(_n_binding_8665,1.0);
double _n_fall_8601=d::at(_n_binding_8665,2.0);
double _n_amp_8602=d::at(_n_binding_8665,3.0);
{
double _n_off_8603=(_n_wrap_8562((_n_a_8597-_n_at_8599))/(_n_w_8600/std::pow(_n_d_8596,1.7)));
(void)((_n_s_8598=(_n_s_8598+([&](){auto _n_left_8666=(_n_amp_8602*std::exp(((-d::number(_n_off_8603))*_n_off_8603)));auto _n_right_8667=std::exp(((-d::number((_n_d_8596-1.0)))/_n_fall_8601));return (_n_left_8666*_n_right_8667);})())));

}
}
double _n_pole_8604=([&](){auto _n_left_8668=std::exp((-d::number(std::pow(((std::fabs(_n_a_8597)-(ascii::PI/2.0))/0.4),2.0))));auto _n_right_8669=(0.5+(0.5*std::cos((26.0*_n_a_8597))));return (_n_left_8668*_n_right_8669);})();
(void)(([&](){auto&& _n_array_8670=this->_n_ring_8572;auto _n_index_8671=_n_k_8593;auto _n_value_8672=std::exp(((-d::number((_n_d_8596-1.0)))/0.07));d::put(_n_array_8670,_n_index_8671,_n_value_8672);return _n_value_8672;})());
for(auto &&_n_item_8673:_n_PROMS_8559){d::check_cancel();auto _n_binding_8674=_n_item_8673;
double _n_at_8605=d::at(_n_binding_8674,0.0);
double _n_size_8606=d::at(_n_binding_8674,1.0);
{
double _n_px_8607=(std::cos(_n_at_8605)*(1.0+_n_size_8606));
double _n_py_8608=(std::sin(_n_at_8605)*(1.0+_n_size_8606));
(void)(([&](){auto&& _n_array_8675=this->_n_ring_8572;auto _n_index_8676=_n_k_8593;auto _n_value_8677=(d::at(_n_array_8675,_n_index_8676)+(1.4*std::exp((-d::number((std::pow(((_n_x_8594-_n_px_8607)/_n_size_8606),2.0)+std::pow(((_n_y_8595-_n_py_8608)/(_n_size_8606*0.8)),2.0)))))));d::put(_n_array_8675,_n_index_8676,_n_value_8677);return _n_value_8677;})());

}
}
(void)(([&](){auto&& _n_array_8678=this->_n_corona_8571;auto _n_index_8679=_n_k_8593;auto _n_value_8680=([&](){auto _n_left_8681=((0.25*std::exp(((-d::number((_n_d_8596-1.0)))/0.16)))+_n_s_8598);auto _n_right_8682=((0.3*_n_pole_8604)*std::exp(((-d::number((_n_d_8596-1.0)))/0.2)));return (_n_left_8681+_n_right_8682);})();d::put(_n_array_8678,_n_index_8679,_n_value_8680);return _n_value_8680;})());
if(((d::truth((_n_d_8596>1.7))&&d::truth((d::at(this->_n_corona_8571,_n_k_8593)<0.02)))&&d::truth((this->_n_rand_8566()<0.014)))){d::check_cancel();(void)(([&](){auto&& _n_array_8683=this->_n_stars_8574;auto _n_index_8684=_n_k_8593;auto _n_value_8685=1.0;d::put(_n_array_8683,_n_index_8684,_n_value_8685);return _n_value_8685;})());
}
}}
}}
(void)(([&](){auto&& _n_array_8686=this->_n_stars_8574;auto _n_index_8687=((2.0*this->_n_cols_8563)+d::round(((this->_n_cols_8563/2.0)-((2.4*2.0)*_n_R_8551))));auto _n_value_8688=2.0;d::put(_n_array_8686,_n_index_8687,_n_value_8688);return _n_value_8688;})());
_render=[=]( double _a0,std::shared_ptr<_n_Record_8652> _a1) mutable ->d::String{double _n_t_8609=_a0;
{
double _n_tau_8610=(d::mod((d::mod(((_n_t_8609-_n_MID_8554)+(_n_LOOP_8553/2.0)),_n_LOOP_8553)+_n_LOOP_8553),_n_LOOP_8553)-(_n_LOOP_8553/2.0));
double _n_d_8611=((0.035*_n_tau_8610)+(0.00515*std::pow(_n_tau_8610,3.0)));
double _n_mx_8612=([&](){auto _n_left_8689=(_n_d_8611*std::cos(_n_TILT_8555));auto _n_right_8690=(_n_MISS_8556*std::sin(_n_TILT_8555));return (_n_left_8689+_n_right_8690);})();
double _n_my_8613=([&](){auto _n_left_8691=((-d::number(_n_d_8611))*std::sin(_n_TILT_8555));auto _n_right_8692=(_n_MISS_8556*std::cos(_n_TILT_8555));return (_n_left_8691+_n_right_8692);})();
double _n_off_8614=d::hypot(std::initializer_list<double>{_n_mx_8612,_n_my_8613});
double _n_gap_8615=((_n_off_8614+1.0)-_n_MOON_8552);
double _n_show_8616=(1.0-_n_smooth_8561(0.0,0.07,_n_gap_8615));
double _n_flare_8617=_n_smooth_8561(0.0,(-d::number(0.03)),_n_gap_8615);
double _n_bead_8618=([&](){auto _n_left_8693=_n_smooth_8561((-d::number(0.004)),0.01,_n_gap_8615);auto _n_right_8694=(1.0-_n_smooth_8561(0.04,0.09,_n_gap_8615));return (_n_left_8693*_n_right_8694);})();
double _n_glow_8619=(0.75+(0.45*_n_smooth_8561(0.0,(-d::number(0.055)),_n_gap_8615)));
d::Array<d::String,false> _n_out_8620=d::Array<d::String,false>(size_t((this->_n_cols_8563*this->_n_rows_8564)));
{double _n_r_8621=0.0;
for(;d::truth((_n_r_8621<this->_n_rows_8564));(void)((_n_r_8621++))){d::check_cancel();{double _n_c_8622=0.0;
for(;d::truth((_n_c_8622<this->_n_cols_8563));(void)((_n_c_8622++))){d::check_cancel();double _n_k_8623=((_n_r_8621*this->_n_cols_8563)+_n_c_8622);
double _n_lit_8624=0.0;
double _n_moon_8625=0.0;
{double _n_j_8626=0.0;
for(;d::truth((_n_j_8626<_n_SS_8557));(void)((_n_j_8626++))){d::check_cancel();{double _n_i_8627=0.0;
for(;d::truth((_n_i_8627<_n_SS_8557));(void)((_n_i_8627++))){d::check_cancel();double _n_x_8628=this->_n_X_8567((_n_c_8622+((_n_i_8627+0.5)/_n_SS_8557)));
double _n_y_8629=this->_n_Y_8568((_n_r_8621+((_n_j_8626+0.5)/_n_SS_8557)));
double _n_dx_8630=(_n_x_8628-_n_mx_8612);
double _n_dy_8631=(_n_y_8629-_n_my_8613);
double _n_dm_8632=d::hypot(std::initializer_list<double>{_n_dx_8630,_n_dy_8631});
bool _n_inMoon_8633=([&]()->bool{auto _n_logical_8695=(_n_dm_8632<(_n_MOON_8552+0.02));return d::truth(_n_logical_8695)?([&]()->bool{auto _n_logical_8696=(_n_dm_8632<(_n_MOON_8552-0.02));return d::truth(_n_logical_8696)?_n_logical_8696:(_n_dm_8632<this->_n_moonR_8570(std::atan2(_n_dy_8631,_n_dx_8630)));})():_n_logical_8695;})();
if(d::truth(_n_inMoon_8633)){d::check_cancel();(void)((_n_moon_8625++));
}else {d::check_cancel();double _n_q_8634=((1.0-(_n_x_8628*_n_x_8628))-(_n_y_8629*_n_y_8629));
if(d::truth((_n_q_8634>0.0))){d::check_cancel();(void)((_n_lit_8624=(_n_lit_8624+(0.72+(0.28*std::sqrt(_n_q_8634))))));
}
}
}}
}}
(void)((_n_lit_8624=(_n_lit_8624/(_n_SS_8557*_n_SS_8557))));
double _n_i_8635=(d::truth((_n_lit_8624>0.0))?d::round((d::maximum({std::pow(_n_lit_8624,0.7),0.2})*this->_n_n_8565)):0.0);
if((d::truth((_n_moon_8625<(_n_SS_8557*_n_SS_8557)))&&d::truth(((d::at(this->_n_corona_8571,_n_k_8623)+d::at(this->_n_ring_8572,_n_k_8623))>0.0)))){d::check_cancel();double _n_a_8636=d::at(this->_n_angle_8573,_n_k_8623);
double _n_shimmer_8637=(1.0+([&](){auto _n_left_8697=(0.25*std::sin(((9.0*_n_a_8636)+(1.9*_n_t_8609))));auto _n_right_8698=std::sin(((5.0*_n_a_8636)-(1.2*_n_t_8609)));return (_n_left_8697*_n_right_8698);})());
double _n_cv_8638=((d::at(this->_n_corona_8571,_n_k_8623)+((1.3*d::at(this->_n_ring_8572,_n_k_8623))*_n_shimmer_8637))*_n_glow_8619);
(void)((_n_i_8635=([&](){auto _n_argument_8699=_n_i_8635;auto _n_argument_8700=([&](){auto _n_argument_8701=this->_n_n_8565;auto _n_argument_8702=std::floor((((std::pow(d::minimum({1.0,(_n_cv_8638*_n_show_8616)}),0.8)*(1.0-(_n_moon_8625/(_n_SS_8557*_n_SS_8557))))*this->_n_n_8565)+0.1));return d::minimum({_n_argument_8701,_n_argument_8702});})();return d::maximum({_n_argument_8699,_n_argument_8700});})()));
}
if(((d::truth((_n_i_8635==0.0))&&d::truth(d::at(this->_n_stars_8574,_n_k_8623)))&&d::truth((_n_flare_8617>0.4)))){d::check_cancel();(void)(([&](){auto&& _n_array_8703=_n_out_8620;auto _n_index_8704=_n_k_8623;auto _n_value_8705=(d::truth((d::at(this->_n_stars_8574,_n_k_8623)==2.0))?d::String(u"*"):d::String(u"."));d::put(_n_array_8703,_n_index_8704,_n_value_8705);return _n_value_8705;})());
}else {d::check_cancel();if((((d::truth((_n_i_8635==0.0))&&d::truth((_n_moon_8625>0.0)))&&d::truth((_n_moon_8625<(_n_SS_8557*_n_SS_8557))))&&d::truth((_n_show_8616<0.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_8706=_n_out_8620;auto _n_index_8707=_n_k_8623;auto _n_value_8708=d::String(u".");d::put(_n_array_8706,_n_index_8707,_n_value_8708);return _n_value_8708;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_8709=_n_out_8620;auto _n_index_8710=_n_k_8623;auto _n_value_8711=d::at(_n_RAMP_8550,_n_i_8635);d::put(_n_array_8709,_n_index_8710,_n_value_8711);return _n_value_8711;})());
}
}
}}
}}
if(d::truth((_n_bead_8618>0.05))){d::check_cancel();double _n_bx_8639=((this->_n_cols_8563/2.0)-(((_n_mx_8612/_n_off_8614)*2.0)*_n_R_8551));
double _n_by_8640=((this->_n_rows_8564/2.0)+((_n_my_8613/_n_off_8614)*_n_R_8551));
auto _n_put_8641=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_dc_8642=_a0;
double _n_dr_8643=_a1;
d::String _n_ch_8644=_a2;
{
double _n_c_8645=std::floor((_n_bx_8639+_n_dc_8642));
double _n_r_8646=std::floor((_n_by_8640+_n_dr_8643));
if((((d::truth((_n_c_8645>=0.0))&&d::truth((_n_c_8645<this->_n_cols_8563)))&&d::truth((_n_r_8646>=0.0)))&&d::truth((_n_r_8646<this->_n_rows_8564)))){d::check_cancel();(void)(([&](){auto&& _n_array_8712=_n_out_8620;auto _n_index_8713=((_n_r_8646*this->_n_cols_8563)+_n_c_8645);auto _n_value_8714=_n_ch_8644;d::put(_n_array_8712,_n_index_8713,_n_value_8714);return _n_value_8714;})());
}

}
};
double _n_arm_8647=(d::truth((_n_bead_8618>0.5))?2.0:1.0);
{double _n_s_8648=1.0;
for(;d::truth((_n_s_8648<=_n_arm_8647));(void)((_n_s_8648++))){d::check_cancel();d::String _n_ch_8649=(d::truth((_n_s_8648==_n_arm_8647))?d::String(u"-"):d::String(u"="));
(void)(_n_put_8641(_n_s_8648,0.0,_n_ch_8649));
(void)(_n_put_8641((-d::number(_n_s_8648)),0.0,_n_ch_8649));
}}
if(d::truth((_n_bead_8618>0.4))){d::check_cancel();(void)(_n_put_8641(0.0,(-d::number(1.0)),(d::truth((_n_bead_8618>0.75))?d::String(u"|"):d::String(u":"))));
(void)(_n_put_8641(0.0,1.0,(d::truth((_n_bead_8618>0.75))?d::String(u"|"):d::String(u":"))));
}
(void)(_n_put_8641(0.0,0.0,d::String(u"@")));
}
d::Array<d::String,false> _n_lines_8650=d::Array<d::String,false>{};
{double _n_r_8651=0.0;
for(;d::truth((_n_r_8651<this->_n_rows_8564));(void)((_n_r_8651++))){d::check_cancel();(void)(_n_lines_8650.push(d::join(_n_out_8620.slice((_n_r_8651*this->_n_cols_8563),((_n_r_8651+1.0)*this->_n_cols_8563)),d::String(u""))));
}}
return d::join(_n_lines_8650,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("eclipse").cols)*ascii::catalog_meta("eclipse").rows);auto _env=std::make_shared<_n_Record_8652>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &eclipse_meta(){return catalog_meta("eclipse");}
std::unique_ptr<Piece> make_eclipse(const AsciiPieceOptions &o){return std::make_unique<Native_eclipse>(o);}
}
