// Direct, statically typed C++ from src/pieces/campfire.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_3501;
struct _n_Record_3520;
struct _n_Record_3616;
struct _n_Record_3501{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_3501> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3501>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_3520{
double _p_x{};
double _p_period{};
double _p_phase{};
double _p_rise{};
double _p_drift{};
static std::shared_ptr<_n_Record_3520> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3520>();out->_p_x=d::decode<double>(j["x"]);out->_p_period=d::decode<double>(j["period"]);out->_p_phase=d::decode<double>(j["phase"]);out->_p_rise=d::decode<double>(j["rise"]);out->_p_drift=d::decode<double>(j["drift"]);return out;}
};
struct _n_Record_3616{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_3616> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3616>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_3510(double _a0,double _a1);
double _n_ease_3511(double _a0);
double _n_noise_3512(double _a0,double _a1);
std::shared_ptr<_n_Record_3501> _n_meta_3500=[](){return ([&](){auto _n_object_3619=std::make_shared<_n_Record_3501>();_n_object_3619->_p_name=d::String(u"campfire");_n_object_3619->_p_category=d::String(u"nature");_n_object_3619->_p_note=d::String(u"a log fire flickering, sparks rising; denser ink is hotter");_n_object_3619->_p_cols=52.0;_n_object_3619->_p_rows=22.0;_n_object_3619->_p_fps=20.0;return _n_object_3619;})();}();
const d::String _n_FIRE_3502=[](){return d::String(u" .,:;=+*#%@");}();
const d::String _n_EMBER_3503=[](){return d::String(u":;+*#%");}();
const d::String _n_SURF_3504=[](){return d::String(u"_.-'");}();
const double _n_BED_3505=[](){return 18.4;}();
d::Array<std::array<double,4>,false> _n_TONGUES_3506=[](){return d::Array<std::array<double,4>,false>{std::array<double,4>{(-d::number(7.4)),9.5,3.4,2.4},std::array<double,4>{(-d::number(4.4)),12.5,3.5,0.0},std::array<double,4>{(-d::number(1.4)),15.0,3.5,1.7},std::array<double,4>{1.7,15.5,3.5,3.1},std::array<double,4>{4.7,12.5,3.5,4.4},std::array<double,4>{7.6,10.0,3.4,5.6}};}();
const double _n_MID_3507=[](){return 16.8;}();
d::Array<std::array<double,4>,false> _n_LOGS_3508=[](){return d::Array<std::array<double,4>,false>{std::array<double,4>{1.0,22.0,0.115,1.4},std::array<double,4>{(-d::number(1.0)),22.0,0.115,1.4}};}();
const double _n_SPARKS_3509=[](){return 9.0;}();
double _n_hash_3510(double _a0,double _a1){double _n_x_3524=_a0;
double _n_y_3525=_a1;
{
double _n_h_3526=([&](){auto _n_left_3620=d::imul(_n_x_3524,668265261.0);auto _n_right_3621=d::imul(_n_y_3525,374761393.0);return double(d::i32(_n_left_3620)^d::i32(_n_right_3621));})();
(void)((_n_h_3526=d::imul(double(d::i32(_n_h_3526)^d::i32(double(d::u32(_n_h_3526)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_3526=d::imul(double(d::i32(_n_h_3526)^d::i32(double(d::u32(_n_h_3526)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_3526)^d::i32(double(d::u32(_n_h_3526)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_3511(double _a0){double _n_t_3527=_a0;
return ((_n_t_3527*_n_t_3527)*(3.0-(2.0*_n_t_3527)));}

double _n_noise_3512(double _a0,double _a1){double _n_x_3528=_a0;
double _n_y_3529=_a1;
{
double _n_i_3530=std::floor(_n_x_3528);
double _n_j_3531=std::floor(_n_y_3529);
double _n_u_3532=_n_ease_3511((_n_x_3528-_n_i_3530));
double _n_v_3533=_n_ease_3511((_n_y_3529-_n_j_3531));
double _n_a_3534=_n_hash_3510(_n_i_3530,_n_j_3531);
double _n_b_3535=_n_hash_3510((_n_i_3530+1.0),_n_j_3531);
double _n_c_3536=_n_hash_3510(_n_i_3530,(_n_j_3531+1.0));
double _n_d_3537=_n_hash_3510((_n_i_3530+1.0),(_n_j_3531+1.0));
return (((_n_a_3534+((_n_b_3535-_n_a_3534)*_n_u_3532))+((_n_c_3536-_n_a_3534)*_n_v_3533))+(((((_n_a_3534-_n_b_3535)-_n_c_3536)+_n_d_3537)*_n_u_3532)*_n_v_3533));

}
}

struct Native_campfire final:ascii::Piece{
double _n_cols_3513{};
double _n_rows_3514{};
double _n_cx_3515{};
d::Array<std::optional<d::String>,false> _n_logs_3516{};
d::Array<float,true> _n_heat_3517{};
d::Array<uint8_t,true> _n_near_3518{};
d::Array<std::shared_ptr<_n_Record_3520>,false> _n_sparks_3519{};
d::Array<std::array<double,3>,false> _n_coals_3521{};
d::Array<float,true> _n_fire_3522{};
d::Array<d::String,false> _n_out_3523{};
std::function<d::String(double,std::shared_ptr<_n_Record_3616>)> _render;

explicit Native_campfire(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_3622=_n_meta_3500;
this->_n_cols_3513=_n_binding_3622->_p_cols;
this->_n_rows_3514=_n_binding_3622->_p_rows;
this->_n_cx_3515=(this->_n_cols_3513/2.0);
this->_n_logs_3516=d::Array<std::optional<d::String>,false>(size_t((this->_n_cols_3513*this->_n_rows_3514))).fill(std::optional<d::String>{});
this->_n_heat_3517=d::Array<float,true>(size_t((this->_n_cols_3513*this->_n_rows_3514)));
this->_n_near_3518=d::Array<uint8_t,true>(size_t((this->_n_cols_3513*this->_n_rows_3514)));
for(auto &&_n_item_3623:_n_LOGS_3508){d::check_cancel();auto _n_binding_3624=_n_item_3623;
double _n_side_3538=d::at(_n_binding_3624,0.0);
double _n_half_3539=d::at(_n_binding_3624,1.0);
double _n_k_3540=d::at(_n_binding_3624,2.0);
double _n_R_3541=d::at(_n_binding_3624,3.0);
{
double _n_seed_3542=(d::truth((_n_side_3538>0.0))?3.0:8.0);
{double _n_c_3543=std::floor((this->_n_cx_3515-_n_half_3539));
for(;d::truth((_n_c_3543<(this->_n_cx_3515+_n_half_3539)));(void)((_n_c_3543++))){d::check_cancel();double _n_x_3544=((_n_c_3543+0.5)-this->_n_cx_3515);
double _n_y_3545=(_n_MID_3507+((_n_k_3540*_n_x_3544)*_n_side_3538));
double _n_front_3546=(d::truth(((_n_x_3544*_n_side_3538)>0.0))?1.0:0.0);
double _n_r0_3547=std::floor((_n_y_3545-_n_R_3541));
double _n_r1_3548=std::floor((_n_y_3545+_n_R_3541));
double _n_warm_3549=std::exp((-d::number(std::pow((_n_x_3544/13.0),2.0))));
auto _n_set_3550=[&]( double _a0,d::String _a1,std::optional<double> _a2) mutable ->void{double _n_r_3551=_a0;
d::String _n_ch_3552=_a1;
double _n_h_3553=(d::present(_a2)?d::read(_a2):0.0);
{
double _n_i_3554=(_n_c_3543+(_n_r_3551*this->_n_cols_3513));
if(((d::truth((_n_r_3551<0.0))||d::truth((_n_r_3551>=this->_n_rows_3514)))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_3625=d::at(this->_n_near_3518,_n_i_3554);return d::truth(_n_logical_3625)?(!d::truth(_n_front_3546)):std::variant<bool,double>(_n_logical_3625);})()))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_3626=this->_n_logs_3516;auto _n_index_3627=_n_i_3554;auto _n_value_3628=std::optional<d::String>(_n_ch_3552);d::put(_n_array_3626,_n_index_3627,_n_value_3628);return _n_value_3628;})());
(void)(([&](){auto&& _n_array_3629=this->_n_heat_3517;auto _n_index_3630=_n_i_3554;auto _n_value_3631=_n_h_3553;d::put(_n_array_3629,_n_index_3630,_n_value_3631);return _n_value_3631;})());
(void)(([&](){auto&& _n_array_3632=this->_n_near_3518;auto _n_index_3633=_n_i_3554;auto _n_value_3634=_n_front_3546;d::put(_n_array_3632,_n_index_3633,_n_value_3634);return _n_value_3634;})());

}
};
double _n_e_3555=([&](){auto _n_argument_3635=(_n_c_3543-std::floor((this->_n_cx_3515-_n_half_3539)));auto _n_argument_3636=((std::ceil((this->_n_cx_3515+_n_half_3539))-1.0)-_n_c_3543);return d::minimum({_n_argument_3635,_n_argument_3636});})();
(void)(([&](){auto _n_argument_3637=_n_r0_3547;auto _n_argument_3638=((d::truth((_n_e_3555==0.0))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_3639=_n_front_3546;return d::truth(_n_logical_3639)?std::variant<bool,double>((_n_e_3555==1.0)):std::variant<bool,double>(_n_logical_3639);})()))?d::String(u" "):d::at(_n_SURF_3504,([&](){auto _n_argument_3640=3.0;auto _n_argument_3641=std::floor(((1.0-((_n_y_3545-_n_R_3541)-_n_r0_3547))*4.0));return d::minimum({_n_argument_3640,_n_argument_3641});})()));auto _n_argument_3642=_n_warm_3549;return _n_set_3550(_n_argument_3637,_n_argument_3638,std::optional<double>(_n_argument_3642));})());
(void)(([&](){auto _n_argument_3643=_n_r1_3548;auto _n_argument_3644=((d::truth((_n_e_3555==0.0))||d::truth(([&]()->std::variant<bool,double>{auto _n_logical_3645=_n_front_3546;return d::truth(_n_logical_3645)?std::variant<bool,double>((_n_e_3555<3.0)):std::variant<bool,double>(_n_logical_3645);})()))?d::String(u" "):d::at(_n_SURF_3504,([&](){auto _n_argument_3646=3.0;auto _n_argument_3647=std::floor(((1.0-((_n_y_3545+_n_R_3541)-_n_r1_3548))*4.0));return d::minimum({_n_argument_3646,_n_argument_3647});})()));return _n_set_3550(_n_argument_3643,_n_argument_3644,std::optional<double>{});})());
{double _n_r_3556=(_n_r0_3547+1.0);
for(;d::truth((_n_r_3556<_n_r1_3548));(void)((_n_r_3556++))){d::check_cancel();bool _n_upper_3557=(_n_r_3556==(_n_r0_3547+1.0));
double _n_u_3558=(((_n_x_3544*_n_side_3538)+(d::truth(_n_upper_3557)?0.0:1.7))+40.0);
double _n_run_3559=std::floor((_n_u_3558/2.6));
double _n_h_3560=_n_hash_3510(_n_run_3559,(_n_seed_3542+(d::truth(_n_upper_3557)?0.0:5.0)));
d::String _n_ch_3561=(d::truth(d::mod(_n_run_3559,2.0))?(d::truth(_n_upper_3557)?d::String(u"="):d::String(u"-")):(d::truth(_n_upper_3557)?(d::truth((_n_h_3560<0.6))?d::String(u"#"):d::String(u":")):(d::truth((_n_h_3560<0.6))?d::String(u"="):d::String(u"."))));
if(d::truth((_n_e_3555==0.0))){d::check_cancel();(void)((_n_ch_3561=(d::truth(_n_front_3546)?(d::truth((_n_upper_3557==(_n_x_3544<0.0)))?d::String(u"/"):d::String(u"\\")):(d::truth((_n_x_3544<0.0))?d::String(u"("):d::String(u")")))));
}else {d::check_cancel();if((d::truth(_n_front_3546)&&d::truth((_n_e_3555==1.0)))){d::check_cancel();(void)((_n_ch_3561=(d::truth(_n_upper_3557)?d::String(u"@"):d::String(u"_"))));
}else {d::check_cancel();if((d::truth(_n_front_3546)&&d::truth((_n_e_3555==2.0)))){d::check_cancel();(void)((_n_ch_3561=(d::truth((_n_upper_3557==(_n_x_3544<0.0)))?d::String(u"\\"):d::String(u"/"))));
}
}
}
(void)(_n_set_3550(_n_r_3556,_n_ch_3561,std::optional<double>((_n_warm_3549*(d::truth(_n_upper_3557)?0.7:0.3)))));
}}
}}

}
}
this->_n_sparks_3519=d::Array<std::shared_ptr<_n_Record_3520>,false>(d::from(_n_SPARKS_3509,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_3520>{double _n_i_3563=_a1;
return ([&](){auto _n_object_3650=std::make_shared<_n_Record_3520>();_n_object_3650->_p_x=((_n_hash_3510(_n_i_3563,1.0)-0.5)*12.0);_n_object_3650->_p_period=(2.6+(_n_hash_3510(_n_i_3563,2.0)*2.4));_n_object_3650->_p_phase=((_n_i_3563+(_n_hash_3510(_n_i_3563,3.0)*0.5))/_n_SPARKS_3509);_n_object_3650->_p_rise=(7.0+(_n_hash_3510(_n_i_3563,4.0)*6.0));_n_object_3650->_p_drift=((_n_hash_3510(_n_i_3563,5.0)-0.5)*8.0);return _n_object_3650;})();}));
this->_n_coals_3521=d::Array<std::array<double,3>,false>{};
{double _n_r_3564=(std::ceil(_n_BED_3505)-1.0);
for(;d::truth((_n_r_3564<this->_n_rows_3514));(void)((_n_r_3564++))){d::check_cancel();{double _n_c_3565=0.0;
for(;d::truth((_n_c_3565<this->_n_cols_3513));(void)((_n_c_3565++))){d::check_cancel();double _n_x_3566=((_n_c_3565+0.5)-this->_n_cx_3515);
double _n_k_3567=(_n_c_3565+(_n_r_3564*this->_n_cols_3513));
if((d::truth(d::at(this->_n_logs_3516,_n_k_3567))||d::truth((std::fabs(_n_x_3566)>10.0)))){d::check_cancel();continue;
}
(void)(this->_n_coals_3521.push(std::array<double,3>{_n_k_3567,(std::exp((-d::number(std::pow((_n_x_3566/6.0),2.0))))*(1.3-(((_n_r_3564+1.0)-_n_BED_3505)*0.35))),(_n_hash_3510(_n_c_3565,(_n_r_3564+60.0))*9.0)}));
}}
}}
this->_n_fire_3522=d::Array<float,true>(size_t((this->_n_cols_3513*this->_n_rows_3514)));
this->_n_out_3523=d::Array<d::String,false>(size_t((this->_n_cols_3513*this->_n_rows_3514)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_3616> _a1) mutable ->d::String{double _n_t_3568=_a0;
{
(void)(this->_n_out_3523.fill(d::String(u" ")));
auto _n_glow_3569=[&]( double _a0,d::String _a1) mutable ->d::String{double _n_k_3570=_a0;
d::String _n_ch_3571=_a1;
{
double _n_c_3572=d::mod(_n_k_3570,this->_n_cols_3513);
double _n_r_3573=((_n_k_3570-_n_c_3572)/this->_n_cols_3513);
double _n_g_3574=((d::at(this->_n_heat_3517,_n_k_3570)*(0.45+(0.75*_n_noise_3512(((_n_c_3572*0.7)+3.0),((_n_t_3568*2.2)+(_n_r_3573*3.0))))))-0.3);
return (d::truth((_n_g_3574>0.0))?d::at(_n_EMBER_3503,([&](){auto _n_argument_3651=(double(_n_EMBER_3503.size())-1.0);auto _n_argument_3652=std::floor(((_n_g_3574*1.6)*double(_n_EMBER_3503.size())));return d::minimum({_n_argument_3651,_n_argument_3652});})()):_n_ch_3571);

}
};
double _n_breath_3575=(0.85+(0.3*_n_noise_3512((_n_t_3568*3.0),7.5)));
(void)(this->_n_fire_3522.fill(0.0));
{double _n_r_3576=0.0;
for(;d::truth((_n_r_3576<std::ceil(_n_BED_3505)));(void)((_n_r_3576++))){d::check_cancel();{double _n_c_3577=0.0;
for(;d::truth((_n_c_3577<this->_n_cols_3513));(void)((_n_c_3577++))){d::check_cancel();double _n_x_3578=((_n_c_3577+0.5)-this->_n_cx_3515);
double _n_v_3579=0.0;
for(auto &&_n_item_3653:d::Array<double,false>{0.25,0.75}){d::check_cancel();double _n_sub_3580=_n_item_3653;
{
double _n_h_3581=(_n_BED_3505-(_n_r_3576+_n_sub_3580));
double _n_low_3582=(_n_h_3581/(5.5*_n_breath_3575));
double _n_m_3583=(d::truth((_n_low_3582<1.0))?((1.0-std::pow((_n_x_3578/((10.5*std::sqrt((1.0-_n_low_3582)))+0.5)),2.0))*(0.85-(_n_low_3582*0.5))):0.0);
double _n_top_3584=(d::truth((_n_low_3582<1.0))?(_n_low_3582*0.5):0.0);
for(auto &&_n_item_3654:_n_TONGUES_3506){d::check_cancel();auto _n_binding_3655=_n_item_3654;
double _n_x0_3585=d::at(_n_binding_3655,0.0);
double _n_h0_3586=d::at(_n_binding_3655,1.0);
double _n_w0_3587=d::at(_n_binding_3655,2.0);
double _n_ph_3588=d::at(_n_binding_3655,3.0);
{
double _n_lift_3589=(_n_h_3581/((_n_h0_3586*(0.72+(0.5*_n_noise_3512(((_n_t_3568*1.6)+(_n_ph_3588*3.0)),(_n_ph_3588*5.0)))))*_n_breath_3575));
if(d::truth((_n_lift_3589>=1.0))){d::check_cancel();continue;
}
double _n_sway_3590=([&](){auto _n_left_3656=((1.4*std::pow(_n_lift_3589,1.4))*std::sin((((_n_h_3581*0.55)-(_n_t_3568*5.5))+_n_ph_3588)));auto _n_right_3657=((0.5*_n_lift_3589)*std::sin(((_n_t_3568*8.3)+(_n_ph_3588*2.0))));return (_n_left_3656+_n_right_3657);})();
double _n_q_3591=(((_n_x_3578-(_n_x0_3585*(1.0-(0.45*_n_lift_3589))))-_n_sway_3590)/((_n_w0_3587*std::pow((1.0-_n_lift_3589),0.6))+0.5));
double _n_f_3592=((1.0-(_n_q_3591*_n_q_3591))*(1.0-(_n_lift_3589*0.6)));
if(d::truth((_n_f_3592>_n_m_3583))){d::check_cancel();(void)(([&](){auto _n_unpack_3658=d::Array<double,false>{_n_f_3592,_n_lift_3589};_n_m_3583=d::at(_n_unpack_3658,0.0);_n_top_3584=d::at(_n_unpack_3658,1.0);return _n_unpack_3658;})());
}

}
}
double _n_n_3593=([&](){auto _n_left_3659=(_n_noise_3512((_n_x_3578*0.45),((_n_h_3581-(_n_t_3568*6.0))*0.35))*0.6);auto _n_right_3660=(_n_noise_3512(((_n_x_3578*0.9)+9.0),((_n_h_3581-(_n_t_3568*8.0))*0.7))*0.4);return (_n_left_3659+_n_right_3660);})();
(void)((_n_v_3579=(_n_v_3579+(_n_m_3583-((0.55*_n_n_3593)*(0.35+(_n_top_3584*0.65)))))));

}
}
(void)(([&](){auto&& _n_array_3661=this->_n_fire_3522;auto _n_index_3662=(_n_c_3577+(_n_r_3576*this->_n_cols_3513));auto _n_value_3663=(_n_v_3579/2.0);d::put(_n_array_3661,_n_index_3662,_n_value_3663);return _n_value_3663;})());
}}
}}
d::Array<double,false> _n_stack_3594=d::Array<double,false>{};
{double _n_c_3595=0.0;
double _n_r_3596=(std::ceil(_n_BED_3505)-1.0);
for(;d::truth((_n_c_3595<this->_n_cols_3513));(void)((_n_c_3595++))){d::check_cancel();if(d::truth((d::at(this->_n_fire_3522,(_n_c_3595+(_n_r_3596*this->_n_cols_3513)))>0.03))){d::check_cancel();(void)((_n_stack_3594.push((_n_c_3595+(_n_r_3596*this->_n_cols_3513))),([&](){auto&& _n_array_3664=this->_n_fire_3522;auto _n_index_3665=(_n_c_3595+(_n_r_3596*this->_n_cols_3513));auto _n_value_3666=(d::at(_n_array_3664,_n_index_3665)+2.0);d::put(_n_array_3664,_n_index_3665,_n_value_3666);return _n_value_3666;})()));
}
}}
while(d::truth(double(_n_stack_3594.size()))){d::check_cancel();double _n_k_3597=d::read(_n_stack_3594.pop());
double _n_c_3598=d::mod(_n_k_3597,this->_n_cols_3513);
for(auto &&_n_item_3667:d::Array<double,false>{((-d::number(this->_n_cols_3513))-1.0),(-d::number(this->_n_cols_3513)),((-d::number(this->_n_cols_3513))+1.0),(-d::number(1.0)),1.0}){d::check_cancel();double _n_d_3599=_n_item_3667;
{
double _n_j_3600=(_n_k_3597+_n_d_3599);
if(((d::truth((_n_j_3600<0.0))||d::truth((std::fabs((d::mod(_n_j_3600,this->_n_cols_3513)-_n_c_3598))>1.0)))||d::truth((!d::truth(([&]()->bool{auto _n_logical_3668=(d::at(this->_n_fire_3522,_n_j_3600)>0.03);return d::truth(_n_logical_3668)?(d::at(this->_n_fire_3522,_n_j_3600)<2.0):_n_logical_3668;})()))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_3669=this->_n_fire_3522;auto _n_index_3670=_n_j_3600;auto _n_value_3671=(d::at(_n_array_3669,_n_index_3670)+2.0);d::put(_n_array_3669,_n_index_3670,_n_value_3671);return _n_value_3671;})());
(void)(_n_stack_3594.push(_n_j_3600));

}
}
}
{double _n_k_3601=0.0;
for(;d::truth((_n_k_3601<(this->_n_cols_3513*this->_n_rows_3514)));(void)((_n_k_3601++))){d::check_cancel();double _n_v_3602=(d::at(this->_n_fire_3522,_n_k_3601)-2.0);
if((d::truth((_n_v_3602>0.03))&&d::truth((!d::truth(([&]()->std::variant<bool,double>{auto _n_logical_3672=d::at(this->_n_near_3518,_n_k_3601);return d::truth(_n_logical_3672)?std::variant<bool,double>((_n_v_3602<0.6)):std::variant<bool,double>(_n_logical_3672);})()))))){d::check_cancel();(void)(([&](){auto&& _n_array_3673=this->_n_out_3523;auto _n_index_3674=_n_k_3601;auto _n_value_3675=d::at(_n_FIRE_3502,([&](){auto _n_argument_3676=(double(_n_FIRE_3502.size())-1.0);auto _n_argument_3677=(1.0+std::floor((((_n_v_3602-0.03)/0.85)*(double(_n_FIRE_3502.size())-1.0))));return d::minimum({_n_argument_3676,_n_argument_3677});})());d::put(_n_array_3673,_n_index_3674,_n_value_3675);return _n_value_3675;})());
}else {d::check_cancel();if(d::truth(d::at(this->_n_logs_3516,_n_k_3601))){d::check_cancel();(void)(([&](){auto&& _n_array_3678=this->_n_out_3523;auto _n_index_3679=_n_k_3601;auto _n_value_3680=_n_glow_3569(_n_k_3601,d::read(d::at(this->_n_logs_3516,_n_k_3601)));d::put(_n_array_3678,_n_index_3679,_n_value_3680);return _n_value_3680;})());
}
}
}}
for(auto &&_n_item_3681:this->_n_coals_3521){d::check_cancel();auto _n_binding_3682=_n_item_3681;
double _n_k_3603=d::at(_n_binding_3682,0.0);
double _n_w_3604=d::at(_n_binding_3682,1.0);
double _n_ph_3605=d::at(_n_binding_3682,2.0);
{
double _n_b_3606=((_n_w_3604*(0.35+(0.8*_n_noise_3512((_n_ph_3605+(_n_t_3568*1.3)),(_n_ph_3605*3.0)))))-0.2);
if((d::truth((_n_b_3606>0.0))&&d::truth((d::at(this->_n_out_3523,_n_k_3603)==d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_3683=this->_n_out_3523;auto _n_index_3684=_n_k_3603;auto _n_value_3685=d::at(_n_EMBER_3503,([&](){auto _n_argument_3686=(double(_n_EMBER_3503.size())-1.0);auto _n_argument_3687=std::floor((_n_b_3606*double(_n_EMBER_3503.size())));return d::minimum({_n_argument_3686,_n_argument_3687});})());d::put(_n_array_3683,_n_index_3684,_n_value_3685);return _n_value_3685;})());
}

}
}
for(auto &&_n_item_3688:this->_n_sparks_3519){d::check_cancel();std::shared_ptr<_n_Record_3520> _n_s_3607=_n_item_3688;
{
double _n_u_3608=d::mod(((_n_t_3568/_n_s_3607->_p_period)+_n_s_3607->_p_phase),1.0);
if(d::truth((_n_u_3608>0.8))){d::check_cancel();continue;
}
double _n_y_3609=((_n_BED_3505-8.0)-(_n_u_3608*_n_s_3607->_p_rise));
double _n_x_3610=(((this->_n_cx_3515+_n_s_3607->_p_x)+(_n_s_3607->_p_drift*_n_u_3608))+std::sin(((_n_u_3608*11.0)+(_n_s_3607->_p_phase*6.0))));
double _n_c_3611=std::floor(_n_x_3610);
double _n_r_3612=std::floor(_n_y_3609);
double _n_k_3613=(_n_c_3611+(_n_r_3612*this->_n_cols_3513));
if((((d::truth((_n_r_3612<0.0))||d::truth((_n_c_3611<0.0)))||d::truth((_n_c_3611>=this->_n_cols_3513)))||d::truth((d::at(this->_n_out_3523,_n_k_3613)!=d::String(u" "))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_3689=this->_n_out_3523;auto _n_index_3690=_n_k_3613;auto _n_value_3691=(d::truth((_n_u_3608<0.25))?d::String(u"*"):(d::truth((_n_u_3608<0.45))?d::String(u"+"):(d::truth((_n_u_3608<0.65))?d::String(u"'"):d::String(u"."))));d::put(_n_array_3689,_n_index_3690,_n_value_3691);return _n_value_3691;})());

}
}
d::Array<d::String,false> _n_lines_3614=d::Array<d::String,false>{};
{double _n_r_3615=0.0;
for(;d::truth((_n_r_3615<this->_n_rows_3514));(void)((_n_r_3615++))){d::check_cancel();(void)(_n_lines_3614.push(d::join(this->_n_out_3523.slice((_n_r_3615*this->_n_cols_3513),((_n_r_3615+1.0)*this->_n_cols_3513)),d::String(u""))));
}}
return d::join(_n_lines_3614,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("campfire").cols)*ascii::catalog_meta("campfire").rows);auto _env=std::make_shared<_n_Record_3616>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &campfire_meta(){return catalog_meta("campfire");}
std::unique_ptr<Piece> make_campfire(const AsciiPieceOptions &o){return std::make_unique<Native_campfire>(o);}
}
