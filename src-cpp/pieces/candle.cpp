// Direct, statically typed C++ from src/pieces/candle.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_3693;
struct _n_Record_3870;
struct _n_Record_3693{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_3693> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3693>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_3870{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_3870> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3870>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_3706(double _a0);
double _n_noise_3707(double _a0);
double _n_clamp_3708(double _a0);
double _n_ease_3709(double _a0);
std::shared_ptr<_n_Record_3693> _n_meta_3692=[](){return ([&](){auto _n_object_3873=std::make_shared<_n_Record_3693>();_n_object_3873->_p_name=d::String(u"candle");_n_object_3873->_p_category=d::String(u"objects");_n_object_3873->_p_note=d::String(u"a flickering candle burning down in its holder, then renewed");_n_object_3873->_p_cols=40.0;_n_object_3873->_p_rows=30.0;_n_object_3873->_p_fps=15.0;return _n_object_3873;})();}();
const d::String _n_RAMP_3694=[](){return d::String(u" .:-=+*#%@");}();
const double _n_SN_3695=[](){return 0.4;}();
const double _n_CS_3696=[](){return std::sqrt((1.0-(_n_SN_3695*_n_SN_3695)));}();
const double _n_R_3697=[](){return 2.1;}();
const double _n_FULL_3698=[](){return 9.6;}();
const double _n_STUB_3699=[](){return 1.2;}();
const double _n_SOCKET_3700=[](){return 11.0;}();
d::Array<double,false> _n_STEPS_3701=[](){return d::Array<double,false>{1.2,26.0,1.4,2.4,1.6,2.2,0.5};}();
const double _n_CYCLE_3702=[](){return d::reduce(_n_STEPS_3701,[&]( double _a0,double _a1) mutable ->double{double _n_a_3728=_a0;
double _n_b_3729=_a1;
return (_n_a_3728+_n_b_3729);},0.0);}();
const double _n_T0_3703=[](){return 4.6;}();
d::Array<d::Array<double,false>,false> _n_STICK_3704=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.4,0.0},d::Array<double,false>{4.6,0.3},d::Array<double,false>{4.4,0.65},d::Array<double,false>{3.6,0.95},d::Array<double,false>{2.4,1.25},d::Array<double,false>{1.35,1.6},d::Array<double,false>{0.82,2.1},d::Array<double,false>{0.66,3.0},d::Array<double,false>{0.7,4.1},d::Array<double,false>{1.05,4.45},d::Array<double,false>{1.5,4.9},d::Array<double,false>{1.6,5.4},d::Array<double,false>{1.45,5.9},d::Array<double,false>{1.0,6.2},d::Array<double,false>{0.66,6.5},d::Array<double,false>{0.6,7.6},d::Array<double,false>{0.6,8.7},d::Array<double,false>{1.0,9.1},d::Array<double,false>{2.4,9.55},d::Array<double,false>{3.8,9.75},d::Array<double,false>{4.3,10.0},d::Array<double,false>{4.35,10.3},d::Array<double,false>{4.1,10.35},d::Array<double,false>{3.5,10.1},d::Array<double,false>{2.7,10.05},d::Array<double,false>{2.45,10.1},d::Array<double,false>{2.45,11.15},d::Array<double,false>{2.25,11.3}};}();
d::Array<d::Array<double,false>,false> _n_DRIPS_3705=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.3)),4.5,0.5,0.42},d::Array<double,false>{0.45,3.0,2.0,0.34},d::Array<double,false>{1.32,5.0,3.5,0.42},d::Array<double,false>{(-d::number(0.5)),2.2,6.0,0.32},d::Array<double,false>{0.95,3.6,10.0,0.36},d::Array<double,false>{(-d::number(1.05)),4.0,14.0,0.38},d::Array<double,false>{0.15,2.6,18.0,0.3},d::Array<double,false>{1.25,3.0,21.0,0.38}};}();
double _n_hash_3706(double _a0){double _n_n_3730=_a0;
{
double _n_h_3731=d::imul(double(d::i32(_n_n_3730)^d::i32(1540483477.0)),668265261.0);
(void)((_n_h_3731=d::imul(double(d::i32(_n_h_3731)^d::i32(double(d::u32(_n_h_3731)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_3731)^d::i32(double(d::u32(_n_h_3731)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_3707(double _a0){double _n_x_3732=_a0;
{
double _n_i_3733=std::floor(_n_x_3732);
double _n_u_3734=(_n_x_3732-_n_i_3733);
double _n_e_3735=((_n_u_3734*_n_u_3734)*(3.0-(2.0*_n_u_3734)));
return ([&](){auto _n_left_3874=_n_hash_3706(_n_i_3733);auto _n_right_3875=(([&](){auto _n_left_3876=_n_hash_3706((_n_i_3733+1.0));auto _n_right_3877=_n_hash_3706(_n_i_3733);return (_n_left_3876-_n_right_3877);})()*_n_e_3735);return (_n_left_3874+_n_right_3875);})();

}
}

double _n_clamp_3708(double _a0){double _n_v_3736=_a0;
return ([&](){auto _n_argument_3878=1.0;auto _n_argument_3879=d::maximum({0.0,_n_v_3736});return d::minimum({_n_argument_3878,_n_argument_3879});})();}

double _n_ease_3709(double _a0){double _n_u_3737=_a0;
return ([&](){auto _n_left_3880=([&](){auto _n_left_3882=_n_clamp_3708(_n_u_3737);auto _n_right_3883=_n_clamp_3708(_n_u_3737);return (_n_left_3882*_n_right_3883);})();auto _n_right_3881=(3.0-(2.0*_n_clamp_3708(_n_u_3737)));return (_n_left_3880*_n_right_3881);})();}

struct Native_candle final:ascii::Piece{
double _n_cols_3710{};
double _n_rows_3711{};
double _n_SX_3712{};
double _n_SY_3713{};
double _n_W_3714{};
double _n_HH_3715{};
double _n_CX_3716{};
double _n_BASE_3717{};
d::Array<double,false> _n_KEY_3719{};
double _n_km_3720{};
d::Array<double,false> _n_KH_3721{};
d::Array<float,true> _n_depth_3722{};
d::Array<float,true> _n_geo_3723{};
d::Array<float,true> _n_lum_3724{};
d::Array<uint8_t,true> _n_kind_3725{};
d::Array<uint8_t,true> _n_solid_3726{};
d::Array<d::String,false> _n_out_3727{};
std::function<d::String(double,std::shared_ptr<_n_Record_3870>)> _render;
double _n_rowOf_3718(double _a0,double _a1){double _n_y_3738=_a0;
double _n_z_3739=_a1;
return (this->_n_BASE_3717-((_n_y_3738*_n_CS_3696)-(_n_z_3739*_n_SN_3695)));}

explicit Native_candle(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_3884=_n_meta_3692;
this->_n_cols_3710=_n_binding_3884->_p_cols;
this->_n_rows_3711=_n_binding_3884->_p_rows;
this->_n_SX_3712=2.0;
this->_n_SY_3713=4.0;
this->_n_W_3714=(this->_n_cols_3710*this->_n_SX_3712);
this->_n_HH_3715=(this->_n_rows_3711*this->_n_SY_3713);
this->_n_CX_3716=(this->_n_cols_3710/2.0);
this->_n_BASE_3717=(this->_n_rows_3711-2.4);
this->_n_KEY_3719=d::Array<double,false>{(-d::number(0.45)),0.35,0.82};
this->_n_km_3720=d::hypot(std::initializer_list<double>{d::at(this->_n_KEY_3719,0.0),(d::at(this->_n_KEY_3719,1.0)+_n_SN_3695),(d::at(this->_n_KEY_3719,2.0)+_n_CS_3696)});
this->_n_KH_3721=d::Array<double,false>{(d::at(this->_n_KEY_3719,0.0)/this->_n_km_3720),((d::at(this->_n_KEY_3719,1.0)+_n_SN_3695)/this->_n_km_3720),((d::at(this->_n_KEY_3719,2.0)+_n_CS_3696)/this->_n_km_3720)};
this->_n_depth_3722=d::Array<float,true>(size_t((this->_n_W_3714*this->_n_HH_3715))).fill((-d::number(1000000000.0)));
this->_n_geo_3723=d::Array<float,true>(size_t(((this->_n_W_3714*this->_n_HH_3715)*6.0)));
{double _n_s_3740=0.0;
for(;d::truth((_n_s_3740<(double(_n_STICK_3704.size())-1.0)));(void)((_n_s_3740++))){d::check_cancel();auto _n_binding_3885=d::at(_n_STICK_3704,_n_s_3740);
double _n_r1_3741=d::at(_n_binding_3885,0.0);
double _n_y1_3742=d::at(_n_binding_3885,1.0);
auto _n_binding_3886=d::at(_n_STICK_3704,(_n_s_3740+1.0));
double _n_r2_3743=d::at(_n_binding_3886,0.0);
double _n_y2_3744=d::at(_n_binding_3886,1.0);
double _n_len_3745=d::hypot(std::initializer_list<double>{(_n_r2_3743-_n_r1_3741),(_n_y2_3744-_n_y1_3742)});
double _n_nr_3746=((_n_y2_3744-_n_y1_3742)/_n_len_3745);
double _n_ny_3747=((-d::number((_n_r2_3743-_n_r1_3741)))/_n_len_3745);
{double _n_f_3748=0.0;
for(;d::truth((_n_f_3748<=1.0));(void)((_n_f_3748=(_n_f_3748+(0.03/_n_len_3745))))){d::check_cancel();double _n_r_3749=(_n_r1_3741+((_n_r2_3743-_n_r1_3741)*_n_f_3748));
double _n_y_3750=(_n_y1_3742+((_n_y2_3744-_n_y1_3742)*_n_f_3748));
{double _n_a_3751=0.0;
for(;d::truth((_n_a_3751<(2.0*ascii::PI)));(void)((_n_a_3751=(_n_a_3751+(0.08/d::maximum({_n_r_3749,0.5})))))){d::check_cancel();double _n_x_3752=(_n_r_3749*std::cos(_n_a_3751));
double _n_z_3753=(_n_r_3749*std::sin(_n_a_3751));
double _n_px_3754=std::floor(((this->_n_CX_3716+(2.0*_n_x_3752))*this->_n_SX_3712));
double _n_py_3755=std::floor((this->_n_rowOf_3718(_n_y_3750,_n_z_3753)*this->_n_SY_3713));
if((((d::truth((_n_px_3754<0.0))||d::truth((_n_px_3754>=this->_n_W_3714)))||d::truth((_n_py_3755<0.0)))||d::truth((_n_py_3755>=this->_n_HH_3715)))){d::check_cancel();continue;
}
double _n_k_3756=((_n_py_3755*this->_n_W_3714)+_n_px_3754);
double _n_d_3757=((_n_z_3753*_n_CS_3696)+(_n_y_3750*_n_SN_3695));
if(d::truth((_n_d_3757<=d::at(this->_n_depth_3722,_n_k_3756)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_3887=this->_n_depth_3722;auto _n_index_3888=_n_k_3756;auto _n_value_3889=_n_d_3757;d::put(_n_array_3887,_n_index_3888,_n_value_3889);return _n_value_3889;})());
(void)(([&](){auto _n_argument_3890=d::Array<double,false>{_n_x_3752,_n_y_3750,_n_z_3753,(_n_nr_3746*std::cos(_n_a_3751)),_n_ny_3747,(_n_nr_3746*std::sin(_n_a_3751))};auto _n_argument_3891=(_n_k_3756*6.0);return this->_n_geo_3723.set(_n_argument_3890,_n_argument_3891);})());
}}
}}
}}
this->_n_lum_3724=d::Array<float,true>(size_t((this->_n_W_3714*this->_n_HH_3715)));
this->_n_kind_3725=d::Array<uint8_t,true>(size_t((this->_n_W_3714*this->_n_HH_3715)));
this->_n_solid_3726=d::Array<uint8_t,true>(size_t((this->_n_cols_3710*this->_n_rows_3711)));
this->_n_out_3727=d::Array<d::String,false>(size_t((this->_n_cols_3710*this->_n_rows_3711)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_3870> _a1) mutable ->d::String{double _n_time_3758=_a0;
auto _n_binding_3894=(d::present(_a1)?_a1:([&](){auto _n_object_3893=std::make_shared<_n_Record_3870>();return _n_object_3893;})());
bool _n_paper_3759=(d::present(_n_binding_3894->_p_paper)?d::read(_n_binding_3894->_p_paper):false);
{
double _n_k0_3760=d::mod((d::mod((_n_T0_3703+_n_time_3758),_n_CYCLE_3702)+_n_CYCLE_3702),_n_CYCLE_3702);
double _n_step_3761=0.0;
while(d::truth((_n_k0_3760>d::at(_n_STEPS_3701,_n_step_3761)))){d::check_cancel();(void)((_n_k0_3760=(_n_k0_3760-d::at(_n_STEPS_3701,(_n_step_3761++)))));
}
double _n_u_3762=(_n_k0_3760/d::at(_n_STEPS_3701,_n_step_3761));
double _n_tb_3763=0.0;
double _n_flame_3764=1.0;
double _n_flare_3765=0.0;
double _n_smoke_3766=(-d::number(1.0));
double _n_lift_3767=0.0;
double _n_fade_3768=1.0;
if(d::truth((_n_step_3761==0.0))){d::check_cancel();(void)(((_n_flame_3764=_n_ease_3709((_n_u_3762*4.0))),(_n_flare_3765=(std::sin((ascii::PI*_n_clamp_3708((_n_u_3762*1.6))))*(1.0-_n_u_3762)))));
}else {d::check_cancel();if(d::truth((_n_step_3761==1.0))){d::check_cancel();(void)((_n_tb_3763=_n_k0_3760));
}else {d::check_cancel();(void)((_n_tb_3763=d::at(_n_STEPS_3701,1.0)));
(void)((_n_flame_3764=(d::truth((_n_step_3761==2.0))?((1.0-_n_u_3762)*(0.6+(0.4*_n_noise_3707((_n_time_3758*14.0))))):0.0)));
if(d::truth((_n_step_3761==3.0))){d::check_cancel();(void)((_n_smoke_3766=_n_k0_3760));
}
if(d::truth((_n_step_3761==4.0))){d::check_cancel();(void)((((_n_lift_3767=(4.5*_n_ease_3709(_n_u_3762))),(_n_fade_3768=(1.0-_n_ease_3709((_n_u_3762*1.15))))),(_n_smoke_3766=(d::at(_n_STEPS_3701,3.0)+_n_k0_3760))));
}
if(d::truth((_n_step_3761==5.0))){d::check_cancel();(void)((_n_lift_3767=(13.0*(1.0-std::sin(((ascii::PI/2.0)*_n_u_3762))))));
}
if(d::truth((_n_step_3761>=5.0))){d::check_cancel();(void)((_n_tb_3763=0.0));
}
}
}
double _n_h_3769=(_n_FULL_3698-((_n_FULL_3698-_n_STUB_3699)*(_n_tb_3763/d::at(_n_STEPS_3701,1.0))));
double _n_yTop_3770=((_n_SOCKET_3700+_n_h_3769)+_n_lift_3767);
double _n_ys_3771=((_n_SOCKET_3700-0.6)+_n_lift_3767);
double _n_gust_3772=_n_clamp_3708(((_n_noise_3707(((_n_time_3758*0.45)+3.0))-0.62)*3.0));
double _n_hf_3773=((_n_flame_3764*([&](){auto _n_left_3895=(4.3+(1.1*_n_noise_3707((_n_time_3758*2.3))));auto _n_right_3896=((1.3*_n_gust_3772)*_n_noise_3707(((_n_time_3758*9.0)+1.0)));return (_n_left_3895-_n_right_3896);})())*(1.0+(0.7*_n_flare_3765)));
double _n_sway_3774=([&](){auto _n_left_3897=(0.4*(_n_noise_3707(((_n_time_3758*1.2)+7.0))-0.5));auto _n_right_3898=((0.25*_n_gust_3772)*std::sin((_n_time_3758*11.0)));return (_n_left_3897+_n_right_3898);})();
double _n_bright_3775=([&](){auto _n_argument_3899=1.3;auto _n_argument_3900=((_n_flame_3764*(0.75+(0.25*_n_noise_3707(((_n_time_3758*3.1)+11.0)))))+(0.4*_n_flare_3765));return d::minimum({_n_argument_3899,_n_argument_3900});})();
double _n_fx_3776=(_n_sway_3774*0.3);
double _n_fy_3777=((_n_yTop_3770+0.4)+(_n_hf_3773*0.32));
auto _n_wax_3778=[&]( double _a0,double _a1,double _a2) mutable ->double{double _n_nx_3779=_a0;
double _n_nz_3780=_a1;
double _n_below_3781=_a2;
{
double _n_key_3782=d::maximum({0.0,((_n_nx_3779*d::at(this->_n_KEY_3719,0.0))+(_n_nz_3780*d::at(this->_n_KEY_3719,2.0)))});
double _n_glow_3783=(([&](){auto _n_left_3901=(0.55*std::exp(((-d::number(_n_below_3781))/2.2)));auto _n_right_3902=(0.25*std::exp(((-d::number(_n_below_3781))/0.6)));return (_n_left_3901+_n_right_3902);})()*_n_bright_3775);
return ((0.05+((0.7*_n_key_3782)*(0.55+(0.45*d::minimum({1.0,_n_bright_3775})))))+(_n_glow_3783*(0.5+(0.5*_n_nz_3780))));

}
};
d::Array<std::array<double,5>,false> _n_drips_3784=d::Array<std::array<double,5>,false>{};
for(auto &&_n_item_3903:_n_DRIPS_3705){d::check_cancel();auto _n_binding_3904=_n_item_3903;
double _n_da_3785=d::at(_n_binding_3904,0.0);
double _n_dl_3786=d::at(_n_binding_3904,1.0);
double _n_start_3787=d::at(_n_binding_3904,2.0);
double _n_fat_3788=d::at(_n_binding_3904,3.0);
{
double _n_y0_3789=((((_n_SOCKET_3700+_n_FULL_3698)-((_n_FULL_3698-_n_STUB_3699)*(_n_start_3787/d::at(_n_STEPS_3701,1.0))))+_n_lift_3767)-0.3);
double _n_run_3790=d::minimum({_n_dl_3786,((_n_tb_3763-_n_start_3787)*0.8)});
if((d::truth((_n_run_3790<=0.0))||d::truth(((_n_y0_3789-_n_run_3790)>(_n_yTop_3770-0.2))))){d::check_cancel();continue;
}
(void)(_n_drips_3784.push(std::array<double,5>{((_n_R_3697+0.05)*std::sin(_n_da_3785)),((_n_R_3697+0.05)*std::cos(_n_da_3785)),d::maximum({_n_ys_3771,(_n_y0_3789-_n_run_3790)}),d::minimum({_n_y0_3789,(_n_yTop_3770-0.15)}),_n_fat_3788}));

}
}
{double _n_k_3791=0.0;
for(;d::truth((_n_k_3791<(this->_n_W_3714*this->_n_HH_3715)));(void)((_n_k_3791++))){d::check_cancel();double _n_sx_3792=((d::mod(_n_k_3791,this->_n_W_3714)+0.5)/this->_n_SX_3712);
double _n_sy_3793=((std::floor((_n_k_3791/this->_n_W_3714))+0.5)/this->_n_SY_3713);
double _n_x_3794=((_n_sx_3792-this->_n_CX_3716)/2.0);
double _n_v_3795=(-d::number(1.0));
double _n_d_3796=d::at(this->_n_depth_3722,_n_k_3791);
double _n_kd_3797=0.0;
if(d::truth((_n_d_3796>(-d::number(100000000.0))))){d::check_cancel();double _n_o_3798=(_n_k_3791*6.0);
double _n_gx_3799=d::at(this->_n_geo_3723,_n_o_3798);
double _n_gy_3800=d::at(this->_n_geo_3723,(_n_o_3798+1.0));
double _n_gz_3801=d::at(this->_n_geo_3723,(_n_o_3798+2.0));
double _n_nx_3802=d::at(this->_n_geo_3723,(_n_o_3798+3.0));
double _n_ny_3803=d::at(this->_n_geo_3723,(_n_o_3798+4.0));
double _n_nz_3804=d::at(this->_n_geo_3723,(_n_o_3798+5.0));
double _n_lx_3805=(_n_fx_3776-_n_gx_3799);
double _n_ly_3806=(_n_fy_3777-_n_gy_3800);
double _n_lz_3807=(-d::number(_n_gz_3801));
double _n_ld_3808=d::hypot(std::initializer_list<double>{_n_lx_3805,_n_ly_3806,_n_lz_3807});
double _n_diff_3809=d::maximum({0.0,((((_n_nx_3802*_n_lx_3805)+(_n_ny_3803*_n_ly_3806))+(_n_nz_3804*_n_lz_3807))/_n_ld_3808)});
double _n_hx_3810=(_n_lx_3805/_n_ld_3808);
double _n_hy_3811=((_n_ly_3806/_n_ld_3808)+_n_SN_3695);
double _n_hz_3812=((_n_lz_3807/_n_ld_3808)+_n_CS_3696);
double _n_hm_3813=d::hypot(std::initializer_list<double>{_n_hx_3810,_n_hy_3811,_n_hz_3812});
double _n_spec_3814=std::pow(d::maximum({0.0,((((_n_nx_3802*_n_hx_3810)+(_n_ny_3803*_n_hy_3811))+(_n_nz_3804*_n_hz_3812))/_n_hm_3813)}),6.0);
double _n_key_3815=d::maximum({0.0,(((_n_nx_3802*d::at(this->_n_KEY_3719,0.0))+(_n_ny_3803*d::at(this->_n_KEY_3719,1.0)))+(_n_nz_3804*d::at(this->_n_KEY_3719,2.0)))});
double _n_kspec_3816=std::pow(d::maximum({0.0,(((_n_nx_3802*d::at(this->_n_KH_3721,0.0))+(_n_ny_3803*d::at(this->_n_KH_3721,1.0)))+(_n_nz_3804*d::at(this->_n_KH_3721,2.0)))}),6.0);
(void)((_n_v_3795=(((0.08+((((0.4*_n_diff_3809)+(0.7*_n_spec_3814))*_n_bright_3775)/(1.0+std::pow((_n_ld_3808/14.0),2.0))))+(0.16*_n_key_3815))+(0.85*_n_kspec_3816))));
(void)((_n_kd_3797=1.0));
}
if((d::truth((_n_fade_3768>0.02))&&d::truth((std::fabs(_n_x_3794)<(_n_R_3697+0.4))))){d::check_cancel();double _n_z_3817=std::sqrt(d::maximum({0.0,((_n_R_3697*_n_R_3697)-(_n_x_3794*_n_x_3794))}));
double _n_yb_3818=(((this->_n_BASE_3717-_n_sy_3793)+(_n_z_3817*_n_SN_3695))/_n_CS_3696);
double _n_zt_3819=(((_n_sy_3793-this->_n_BASE_3717)+(_n_yTop_3770*_n_CS_3696))/_n_SN_3695);
if((d::truth((((_n_x_3794*_n_x_3794)+(_n_zt_3819*_n_zt_3819))<(_n_R_3697*_n_R_3697)))&&d::truth((((_n_zt_3819*_n_CS_3696)+(_n_yTop_3770*_n_SN_3695))>_n_d_3796)))){d::check_cancel();double _n_rim_3820=(d::hypot(std::initializer_list<double>{_n_x_3794,_n_zt_3819})/_n_R_3697);
(void)((_n_v_3795=(((0.3+(0.35*_n_bright_3775))+((0.25*_n_bright_3775)*std::pow(_n_rim_3820,4.0)))*_n_fade_3768)));
(void)(((_n_kd_3797=2.0),(_n_d_3796=((_n_zt_3819*_n_CS_3696)+(_n_yTop_3770*_n_SN_3695)))));
}else {d::check_cancel();if((((d::truth((std::fabs(_n_x_3794)<_n_R_3697))&&d::truth((_n_yb_3818<_n_yTop_3770)))&&d::truth((_n_yb_3818>_n_ys_3771)))&&d::truth((((_n_z_3817*_n_CS_3696)+(_n_yb_3818*_n_SN_3695))>_n_d_3796)))){d::check_cancel();(void)((_n_v_3795=(_n_wax_3778((_n_x_3794/_n_R_3697),(_n_z_3817/_n_R_3697),(_n_yTop_3770-_n_yb_3818))*_n_fade_3768)));
(void)(((_n_kd_3797=2.0),(_n_d_3796=((_n_z_3817*_n_CS_3696)+(_n_yb_3818*_n_SN_3695)))));
for(auto &&_n_item_3905:_n_drips_3784){d::check_cancel();auto _n_binding_3906=_n_item_3905;
double _n_cx_3821=d::at(_n_binding_3906,0.0);
double _n_y1_3822=d::at(_n_binding_3906,2.0);
double _n_y0_3823=d::at(_n_binding_3906,3.0);
double _n_fat_3824=d::at(_n_binding_3906,4.0);
if((((d::truth((_n_x_3794>(_n_cx_3821+(_n_fat_3824*0.9))))&&d::truth((_n_x_3794<((_n_cx_3821+_n_fat_3824)+0.32))))&&d::truth((_n_yb_3818<_n_y0_3823)))&&d::truth((_n_yb_3818>(_n_y1_3822-0.2))))){d::check_cancel();(void)((_n_v_3795=(_n_v_3795*0.55)));
}
}
}
}
for(auto &&_n_item_3907:_n_drips_3784){d::check_cancel();auto _n_binding_3908=_n_item_3907;
double _n_cx_3825=d::at(_n_binding_3908,0.0);
double _n_cz_3826=d::at(_n_binding_3908,1.0);
double _n_y1_3827=d::at(_n_binding_3908,2.0);
double _n_y0_3828=d::at(_n_binding_3908,3.0);
double _n_fat_3829=d::at(_n_binding_3908,4.0);
{
double _n_dx_3830=(_n_x_3794-_n_cx_3825);
if(d::truth((std::fabs(_n_dx_3830)>=_n_fat_3829))){d::check_cancel();continue;
}
double _n_dz_3831=std::sqrt(((_n_fat_3829*_n_fat_3829)-(_n_dx_3830*_n_dx_3830)));
double _n_zz_3832=(_n_cz_3826+_n_dz_3831);
double _n_yy_3833=(((this->_n_BASE_3717-_n_sy_3793)+(_n_zz_3832*_n_SN_3695))/_n_CS_3696);
if((d::truth((_n_yy_3833<(_n_y1_3827+_n_fat_3829)))&&d::truth((((_n_dx_3830*_n_dx_3830)+std::pow(((_n_y1_3827+_n_fat_3829)-_n_yy_3833),2.0))>(_n_fat_3829*_n_fat_3829))))){d::check_cancel();continue;
}
if((d::truth((_n_yy_3833>_n_y0_3828))||d::truth((((_n_zz_3832*_n_CS_3696)+(_n_yy_3833*_n_SN_3695))<=(_n_d_3796-0.02))))){d::check_cancel();continue;
}
(void)((_n_v_3795=((_n_wax_3778((_n_dx_3830/_n_fat_3829),(_n_dz_3831/_n_fat_3829),(_n_yTop_3770-_n_yy_3833))+0.1)*_n_fade_3768)));
(void)(((_n_kd_3797=2.0),(_n_d_3796=((_n_zz_3832*_n_CS_3696)+(_n_yy_3833*_n_SN_3695)))));

}
}
}
(void)(([&](){auto&& _n_array_3909=this->_n_lum_3724;auto _n_index_3910=_n_k_3791;auto _n_value_3911=_n_v_3795;d::put(_n_array_3909,_n_index_3910,_n_value_3911);return _n_value_3911;})());
(void)(([&](){auto&& _n_array_3912=this->_n_kind_3725;auto _n_index_3913=_n_k_3791;auto _n_value_3914=_n_kd_3797;d::put(_n_array_3912,_n_index_3913,_n_value_3914);return _n_value_3914;})());
}}
(void)(this->_n_out_3727.fill(d::String(u" ")));
{double _n_r_3834=0.0;
for(;d::truth((_n_r_3834<this->_n_rows_3711));(void)((_n_r_3834++))){d::check_cancel();{double _n_c_3835=0.0;
for(;d::truth((_n_c_3835<this->_n_cols_3710));(void)((_n_c_3835++))){d::check_cancel();double _n_n_3836=0.0;
double _n_s_3837=0.0;
{double _n_q_3838=(((_n_r_3834*this->_n_SY_3713)*this->_n_W_3714)+(_n_c_3835*this->_n_SX_3712));
double _n_j_3839=0.0;
for(;d::truth((_n_j_3839<this->_n_SY_3713));(void)(((_n_j_3839++),(_n_q_3838=(_n_q_3838+this->_n_W_3714))))){d::check_cancel();{double _n_i_3840=0.0;
for(;d::truth((_n_i_3840<this->_n_SX_3712));(void)((_n_i_3840++))){d::check_cancel();if(d::truth(d::at(this->_n_kind_3725,(_n_q_3838+_n_i_3840)))){d::check_cancel();(void)(((_n_n_3836++),(_n_s_3837=(_n_s_3837+d::at(this->_n_lum_3724,(_n_q_3838+_n_i_3840))))));
}
}}
}}
(void)(([&](){auto&& _n_array_3915=this->_n_solid_3726;auto _n_index_3916=((_n_r_3834*this->_n_cols_3710)+_n_c_3835);auto _n_value_3917=(d::truth((_n_n_3836>0.0))?1.0:0.0);d::put(_n_array_3915,_n_index_3916,_n_value_3917);return _n_value_3917;})());
if(d::truth((_n_n_3836>=3.0))){d::check_cancel();double _n_i_3841=([&](){auto _n_argument_3918=1.0;auto _n_argument_3919=([&](){auto _n_argument_3920=9.0;auto _n_argument_3921=d::round((_n_clamp_3708((_n_s_3837/_n_n_3836))*9.0));return d::minimum({_n_argument_3920,_n_argument_3921});})();return d::maximum({_n_argument_3918,_n_argument_3919});})();
(void)(([&](){auto&& _n_array_3922=this->_n_out_3727;auto _n_index_3923=((_n_r_3834*this->_n_cols_3710)+_n_c_3835);auto _n_value_3924=d::at(_n_RAMP_3694,(d::truth(_n_paper_3759)?(10.0-_n_i_3841):_n_i_3841));d::put(_n_array_3922,_n_index_3923,_n_value_3924);return _n_value_3924;})());
}
}}
}}
double _n_fc_3842=(this->_n_CX_3716+(2.0*_n_fx_3776));
double _n_fr_3843=this->_n_rowOf_3718(_n_fy_3777,0.0);
if(d::truth((_n_bright_3775>0.05))){d::check_cancel();{double _n_r_3844=0.0;
for(;d::truth((_n_r_3844<this->_n_rows_3711));(void)((_n_r_3844++))){d::check_cancel();{double _n_c_3845=0.0;
for(;d::truth((_n_c_3845<this->_n_cols_3710));(void)((_n_c_3845++))){d::check_cancel();double _n_g_3846=([&](){auto _n_left_3925=d::hypot(std::initializer_list<double>{((((_n_c_3845+0.5)-_n_fc_3842)/2.0)/1.05),(((_n_r_3844+0.5)-_n_fr_3843)/1.35)});auto _n_right_3926=(2.4+(1.4*d::minimum({1.0,_n_bright_3775})));return (_n_left_3925/_n_right_3926);})();
if(((d::truth((_n_g_3846>1.0))||d::truth(([&]()->bool{auto _n_logical_3927=(_n_g_3846>0.66);return d::truth(_n_logical_3927)?(_n_g_3846<0.84):_n_logical_3927;})()))||d::truth((d::at(this->_n_out_3727,((_n_r_3844*this->_n_cols_3710)+_n_c_3845))!=d::String(u" "))))){d::check_cancel();continue;
}
bool _n_near_3847=d::some(d::Array<double,false>{(-d::number(1.0)),0.0,1.0},[&]( double _a0) mutable ->bool{double _n_j_3848=_a0;
return d::some(d::Array<double,false>{(-d::number(1.0)),0.0,1.0},[&]( double _a0) mutable ->double{double _n_i_3849=_a0;
return d::at(this->_n_solid_3726,((((_n_r_3844+_n_j_3848)*this->_n_cols_3710)+_n_c_3845)+_n_i_3849));});});
if(d::truth((!d::truth(_n_near_3847)))){d::check_cancel();(void)(([&](){auto&& _n_array_3928=this->_n_out_3727;auto _n_index_3929=((_n_r_3844*this->_n_cols_3710)+_n_c_3845);auto _n_value_3930=(d::truth((_n_g_3846<0.66))?d::String(u"·"):d::String(u"."));d::put(_n_array_3928,_n_index_3929,_n_value_3930);return _n_value_3930;})());
}
}}
}}
}
if(d::truth((_n_hf_3773>0.2))){d::check_cancel();double _n_y0_3850=(_n_yTop_3770+0.1);
{double _n_r_3851=std::floor(this->_n_rowOf_3718(((_n_y0_3850+_n_hf_3773)+0.5),0.0));
for(;d::truth((_n_r_3851<=std::ceil(this->_n_rowOf_3718((_n_y0_3850-0.5),0.0))));(void)((_n_r_3851++))){d::check_cancel();{double _n_c_3852=std::floor((_n_fc_3842-5.0));
for(;d::truth((_n_c_3852<=(_n_fc_3842+5.0)));(void)((_n_c_3852++))){d::check_cancel();if((((d::truth((_n_r_3851<0.0))||d::truth((_n_r_3851>=this->_n_rows_3711)))||d::truth((_n_c_3852<0.0)))||d::truth((_n_c_3852>=this->_n_cols_3710)))){d::check_cancel();continue;
}
double _n_s_3853=0.0;
{double _n_j_3854=0.0;
for(;d::truth((_n_j_3854<this->_n_SY_3713));(void)((_n_j_3854++))){d::check_cancel();{double _n_i_3855=0.0;
for(;d::truth((_n_i_3855<this->_n_SX_3712));(void)((_n_i_3855++))){d::check_cancel();double _n_y_3856=((((this->_n_BASE_3717-(_n_r_3851+((_n_j_3854+0.5)/this->_n_SY_3713)))/_n_CS_3696)-_n_y0_3850)+0.35);
double _n_uu_3857=(_n_y_3856/(_n_hf_3773+0.35));
if((d::truth((_n_uu_3857<=0.0))||d::truth((_n_uu_3857>=1.0)))){d::check_cancel();continue;
}
double _n_w_3858=(((1.2+(0.25*_n_flare_3765))*(std::sqrt(_n_uu_3857)*std::pow((1.0-_n_uu_3857),1.2)))/0.36);
double _n_q_3859=((((((_n_c_3852+((_n_i_3855+0.5)/this->_n_SX_3712))-this->_n_CX_3716)/2.0)-_n_fx_3776)-((_n_sway_3774*_n_uu_3857)*_n_uu_3857))/_n_w_3858);
if(d::truth((std::fabs(_n_q_3859)>=1.0))){d::check_cancel();continue;
}
(void)((_n_s_3853=(_n_s_3853+((1.0-(_n_q_3859*_n_q_3859))*(d::truth((_n_uu_3857<0.18))?0.4:((d::truth((_n_uu_3857<0.32))&&d::truth((std::fabs(_n_q_3859)<0.35)))?0.55:(0.8+(0.4*d::minimum({1.0,(_n_uu_3857*2.5)})))))))));
}}
}}
double _n_v_3860=(_n_s_3853/(this->_n_SX_3712*this->_n_SY_3713));
if(d::truth((_n_v_3860>0.06))){d::check_cancel();(void)(([&](){auto&& _n_array_3931=this->_n_out_3727;auto _n_index_3932=((_n_r_3851*this->_n_cols_3710)+_n_c_3852);auto _n_value_3933=d::at(_n_RAMP_3694,([&](){auto _n_argument_3934=1.0;auto _n_argument_3935=([&](){auto _n_argument_3936=9.0;auto _n_argument_3937=d::round(((_n_v_3860*9.0)+0.3));return d::minimum({_n_argument_3936,_n_argument_3937});})();return d::maximum({_n_argument_3934,_n_argument_3935});})());d::put(_n_array_3931,_n_index_3932,_n_value_3933);return _n_value_3933;})());
}
}}
}}
}
double _n_wr_3861=std::floor(this->_n_rowOf_3718((_n_yTop_3770+0.35),0.0));
double _n_wc_3862=std::floor(this->_n_CX_3716);
if((((d::truth((_n_hf_3773<=0.2))&&d::truth((_n_fade_3768>0.5)))&&d::truth((_n_wr_3861>=0.0)))&&d::truth((_n_wr_3861<this->_n_rows_3711)))){d::check_cancel();(void)(([&](){auto&& _n_array_3938=this->_n_out_3727;auto _n_index_3939=((_n_wr_3861*this->_n_cols_3710)+_n_wc_3862);auto _n_value_3940=d::String(u"'");d::put(_n_array_3938,_n_index_3939,_n_value_3940);return _n_value_3940;})());
}
if(d::truth((_n_smoke_3766>=0.0))){d::check_cancel();{double _n_s_3863=1.5;
for(;d::truth((_n_s_3863<11.0));(void)((_n_s_3863=(_n_s_3863+1.0)))){d::check_cancel();double _n_r_3864=std::floor((this->_n_rowOf_3718(((_n_yTop_3770-_n_lift_3767)+0.4),0.0)-_n_s_3863));
double _n_age_3865=(_n_smoke_3766-(_n_s_3863/4.0));
if(((d::truth((_n_r_3864<0.0))||d::truth((_n_age_3865<0.0)))||d::truth((_n_age_3865>2.0)))){d::check_cancel();continue;
}
double _n_x_3866=((this->_n_CX_3716+0.4)+((0.5*(_n_s_3863/3.0))*std::sin(((0.9*_n_s_3863)-(_n_smoke_3766*3.0)))));
double _n_lean_3867=std::cos(((0.9*_n_s_3863)-(_n_smoke_3766*3.0)));
(void)(([&](){auto&& _n_array_3941=this->_n_out_3727;auto _n_index_3942=((_n_r_3864*this->_n_cols_3710)+std::floor(_n_x_3866));auto _n_value_3943=(d::truth((_n_age_3865>1.4))?d::String(u"."):(d::truth((_n_lean_3867>0.5))?d::String(u")"):(d::truth((_n_lean_3867<(-d::number(0.5))))?d::String(u"("):d::String(u"|"))));d::put(_n_array_3941,_n_index_3942,_n_value_3943);return _n_value_3943;})());
}}
}
return d::join(d::Array<d::String,false>(d::from(this->_n_rows_3711,[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_r_3869=_a1;
return d::join(this->_n_out_3727.slice((_n_r_3869*this->_n_cols_3710),((_n_r_3869+1.0)*this->_n_cols_3710)),d::String(u""));})),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("candle").cols)*ascii::catalog_meta("candle").rows);auto _env=std::make_shared<_n_Record_3870>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &candle_meta(){return catalog_meta("candle");}
std::unique_ptr<Piece> make_candle(const AsciiPieceOptions &o){return std::make_unique<Native_candle>(o);}
}
