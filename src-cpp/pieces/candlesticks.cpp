// Direct, statically typed C++ from src/pieces/candlesticks.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_3945;
struct _n_Record_3946;
struct _n_Record_3965;
struct _n_Record_4040;
struct _n_Record_4041;
struct _n_Record_3945{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_3946> _p_options{};
static std::shared_ptr<_n_Record_3945> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3945>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_3946>>(j["options"]);return out;}
};
struct _n_Record_3946{
double _p_start{};
double _p_seed{};
static std::shared_ptr<_n_Record_3946> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3946>();out->_p_start=d::decode<double>(j["start"]);out->_p_seed=d::decode<double>(j["seed"]);return out;}
};
struct _n_Record_3965{
double _p_o{};
double _p_c{};
double _p_h{};
double _p_l{};
static std::shared_ptr<_n_Record_3965> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3965>();out->_p_o=d::decode<double>(j["o"]);out->_p_c=d::decode<double>(j["c"]);out->_p_h=d::decode<double>(j["h"]);out->_p_l=d::decode<double>(j["l"]);return out;}
};
struct _n_Record_4040{
std::optional<double> _p_start{};
std::optional<double> _p_seed{};
static std::shared_ptr<_n_Record_4040> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4040>();out->_p_start=d::decode<std::optional<double>>(j["start"]);out->_p_seed=d::decode<std::optional<double>>(j["seed"]);return out;}
};
struct _n_Record_4041{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_4041> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4041>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_3953(double _a0);
std::shared_ptr<_n_Record_3945> _n_meta_3944=[](){return ([&](){auto _n_object_4046=std::make_shared<_n_Record_3945>();_n_object_4046->_p_name=d::String(u"candlesticks");_n_object_4046->_p_category=d::String(u"data");_n_object_4046->_p_note=d::String(u"hollow up candles, solid down ones, the last one forming live");_n_object_4046->_p_cols=70.0;_n_object_4046->_p_rows=22.0;_n_object_4046->_p_fps=15.0;_n_object_4046->_p_options=([&](){auto _n_object_4048=std::make_shared<_n_Record_3946>();_n_object_4048->_p_start=100.0;_n_object_4048->_p_seed=3.0;return _n_object_4048;})();return _n_object_4046;})();}();
const double _n_SLOTS_3947=[](){return 15.0;}();
const double _n_PERIOD_3948=[](){return 1.4;}();
const double _n_TICKS_3949=[](){return 10.0;}();
const double _n_TOP_3950=[](){return 2.0;}();
const double _n_H_3951=[](){return 17.0;}();
d::Array<double,false> _n_STEPS_3952=[](){return d::Array<double,false>{0.05,0.1,0.2,0.25,0.5,1.0,2.0,2.5,5.0,10.0,20.0,25.0,50.0};}();
std::function<double()> _n_mulberry32_3953(double _a0){double _n_a_3969=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_3969=double(d::i32((_n_a_3969+1831565813.0))|d::i32(0.0))));
double _n_t_3970=d::imul(double(d::i32(_n_a_3969)^d::i32(double(d::u32(_n_a_3969)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_3969)));
(void)((_n_t_3970=double(d::i32((_n_t_3970+d::imul(double(d::i32(_n_t_3970)^d::i32(double(d::u32(_n_t_3970)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_3970)))))^d::i32(_n_t_3970))));
return (double(d::u32(double(d::i32(_n_t_3970)^d::i32(double(d::u32(_n_t_3970)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_candlesticks final:ascii::Piece{
double _n_start_3954{};
double _n_seed_3955{};
double _n_cols_3956{};
double _n_rows_3957{};
double _n_K0_3958{};
double _n_vol_3959{};
d::Array<d::Array<double,false>,false> _n_paths_3962{};
std::function<std::shared_ptr<_n_Record_3965>(double,std::optional<double>)> _n_candle_3964{};
std::function<d::String(double,std::shared_ptr<_n_Record_4041>)> _render;
double _n_hash_3960(double _a0){double _n_k_3971=_a0;
return _n_mulberry32_3953(((this->_n_seed_3955*7919.0)+(_n_k_3971*104729.0)))();}

double _n_trend_3961(double _a0){double _n_k_3972=_a0;
{
double _n_u_3973=(_n_k_3972/9.0);
double _n_i_3974=std::floor(_n_u_3973);
double _n_f_3975=(_n_u_3973-_n_i_3974);
double _n_e_3976=((_n_f_3975*_n_f_3975)*(3.0-(2.0*_n_f_3975)));
return (((([&](){auto _n_left_4086=(this->_n_hash_3960(_n_i_3974)*(1.0-_n_e_3976));auto _n_right_4087=(this->_n_hash_3960((_n_i_3974+1.0))*_n_e_3976);return (_n_left_4086+_n_right_4087);})()-0.5)*this->_n_vol_3959)*0.55);

}
}

d::Array<double,false> _n_path_3963(double _a0){double _n_k_3977=_a0;
{
while(d::truth((double(this->_n_paths_3962.size())<=_n_k_3977))){d::check_cancel();double _n_n_3978=double(this->_n_paths_3962.size());
std::function<double()> _n_rand_3979=_n_mulberry32_3953(((this->_n_seed_3955*15485863.0)+(_n_n_3978*2654435761.0)));
double _n_p_3980=(d::truth(_n_n_3978)?d::at(d::at(this->_n_paths_3962,(_n_n_3978-1.0)),_n_TICKS_3949):this->_n_start_3954);
d::Array<double,false> _n_out_3981=d::Array<double,false>{_n_p_3980};
{double _n_j_3982=0.0;
for(;d::truth((_n_j_3982<_n_TICKS_3949));(void)((_n_j_3982++))){d::check_cancel();double _n_g_3983=([&](){auto _n_left_4088=std::sqrt(((-d::number(2.0))*std::log((1.0-_n_rand_3979()))));auto _n_right_4089=std::cos(((2.0*ascii::PI)*_n_rand_3979()));return (_n_left_4088*_n_right_4089);})();
(void)((_n_p_3980=(_n_p_3980+(((_n_g_3983*this->_n_vol_3959)+this->_n_trend_3961(_n_n_3978))-((_n_p_3980-this->_n_start_3954)*0.006)))));
(void)(_n_out_3981.push(_n_p_3980));
}}
(void)(this->_n_paths_3962.push(_n_out_3981));
}
return d::at(this->_n_paths_3962,_n_k_3977);

}
}

d::String _n_fmt_3966(double _a0){double _n_p_3987=_a0;
return d::fixed(_n_p_3987,2.0);}

d::String _n_clock_3967(double _a0){double _n_k_3988=_a0;
{
double _n_m_3989=d::mod((((9.0*60.0)+30.0)+(_n_k_3988*5.0)),1440.0);
return ([&](){auto _n_left_4090=(d::string(d::padStart(d::string(std::floor((_n_m_3989/60.0))),2.0,d::String(u"0")))+d::string(d::String(u":")));auto _n_right_4091=d::padStart(d::string(d::mod(_n_m_3989,60.0)),2.0,d::String(u"0"));return (d::string(_n_left_4090)+d::string(_n_right_4091));})();

}
}

explicit Native_candlesticks(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_4049=d::decode<std::shared_ptr<_n_Record_4040>>(_options.data);
this->_n_start_3954=(d::present(_n_binding_4049->_p_start)?d::read(_n_binding_4049->_p_start):100.0);
this->_n_seed_3955=(d::present(_n_binding_4049->_p_seed)?d::read(_n_binding_4049->_p_seed):3.0);
auto _n_binding_4050=_n_meta_3944;
this->_n_cols_3956=_n_binding_4050->_p_cols;
this->_n_rows_3957=_n_binding_4050->_p_rows;
this->_n_K0_3958=50.0;
this->_n_vol_3959=(this->_n_start_3954*0.0017);
this->_n_paths_3962=d::Array<d::Array<double,false>,false>{};
this->_n_candle_3964=[=]( double _a0,std::optional<double> _a1) mutable ->std::shared_ptr<_n_Record_3965>{double _n_k_3984=_a0;
double _n_upto_3985=(d::present(_a1)?d::read(_a1):_n_TICKS_3949);
{
d::Array<double,false> _n_p_3986=this->_n_path_3963(_n_k_3984).slice(0.0,(_n_upto_3985+1.0));
return ([&](){auto _n_object_4052=std::make_shared<_n_Record_3965>();_n_object_4052->_p_o=d::at(_n_p_3986,0.0);_n_object_4052->_p_c=d::at(_n_p_3986,_n_upto_3985);_n_object_4052->_p_h=([&](){d::Array<double> _n_numbers_4053;for(auto _x:_n_p_3986)_n_numbers_4053.push(_x);return d::maximum(_n_numbers_4053);})();_n_object_4052->_p_l=([&](){d::Array<double> _n_numbers_4054;for(auto _x:_n_p_3986)_n_numbers_4054.push(_x);return d::minimum(_n_numbers_4054);})();return _n_object_4052;})();

}
};
_render=[=]( double _a0,std::shared_ptr<_n_Record_4041> _a1) mutable ->d::String{double _n_t_3990=_a0;
{
double _n_live_3991=(this->_n_K0_3958+std::floor((_n_t_3990/_n_PERIOD_3948)));
double _n_ticks_3992=(1.0+std::floor(((d::mod(_n_t_3990,_n_PERIOD_3948)/_n_PERIOD_3948)*_n_TICKS_3949)));
d::Array<std::shared_ptr<_n_Record_3965>,false> _n_cs_3993=d::Array<std::shared_ptr<_n_Record_3965>,false>{};
{double _n_s_3994=0.0;
for(;d::truth((_n_s_3994<_n_SLOTS_3947));(void)((_n_s_3994++))){d::check_cancel();double _n_k_3995=(((_n_live_3991-_n_SLOTS_3947)+1.0)+_n_s_3994);
(void)(_n_cs_3993.push((d::truth((_n_k_3995==_n_live_3991))?this->_n_candle_3964(_n_k_3995,std::optional<double>(_n_ticks_3992)):this->_n_candle_3964(_n_k_3995,std::optional<double>{}))));
}}
d::Array<std::shared_ptr<_n_Record_3965>,false> _n_done_3996=_n_cs_3993.slice(0.0,(-d::number(1.0)));
double _n_hi_3997=([&](){d::Array<double> _n_numbers_4055;for(auto _x:d::map(_n_cs_3993,[&]( std::shared_ptr<_n_Record_3965> _a0) mutable ->double{std::shared_ptr<_n_Record_3965> _n_c_3998=_a0;
return _n_c_3998->_p_h;}))_n_numbers_4055.push(_x);return d::maximum(_n_numbers_4055);})();
double _n_lo_3999=([&](){d::Array<double> _n_numbers_4056;for(auto _x:d::map(_n_cs_3993,[&]( std::shared_ptr<_n_Record_3965> _a0) mutable ->double{std::shared_ptr<_n_Record_3965> _n_c_4000=_a0;
return _n_c_4000->_p_l;}))_n_numbers_4056.push(_x);return d::minimum(_n_numbers_4056);})();
double _n_step_4001=([&]()->double{auto _n_logical_4057=d::find(_n_STEPS_3952,[&]( double _a0) mutable ->bool{double _n_s_4002=_a0;
return (((_n_hi_3997-_n_lo_3999)/_n_s_4002)<=(_n_H_3951-2.0));});return d::present(_n_logical_4057)?d::read(_n_logical_4057):100.0;})();
double _n_mid_4003=(([&](){auto _n_left_4058=([&](){d::Array<double> _n_numbers_4060;for(auto _x:d::map(_n_done_3996,[&]( std::shared_ptr<_n_Record_3965> _a0) mutable ->double{std::shared_ptr<_n_Record_3965> _n_c_4004=_a0;
return _n_c_4004->_p_h;}))_n_numbers_4060.push(_x);return d::maximum(_n_numbers_4060);})();auto _n_right_4059=([&](){d::Array<double> _n_numbers_4061;for(auto _x:d::map(_n_done_3996,[&]( std::shared_ptr<_n_Record_3965> _a0) mutable ->double{std::shared_ptr<_n_Record_3965> _n_c_4005=_a0;
return _n_c_4005->_p_l;}))_n_numbers_4061.push(_x);return d::minimum(_n_numbers_4061);})();return (_n_left_4058+_n_right_4059);})()/2.0);
double _n_top_4006=(d::round(((_n_mid_4003/_n_step_4001)+((_n_H_3951-1.0)/2.0)))*_n_step_4001);
(void)((_n_top_4006=([&](){auto _n_argument_4062=([&](){auto _n_argument_4063=_n_top_4006;auto _n_argument_4064=(std::ceil((_n_hi_3997/_n_step_4001))*_n_step_4001);return d::maximum({_n_argument_4063,_n_argument_4064});})();auto _n_argument_4065=((std::floor((_n_lo_3999/_n_step_4001))*_n_step_4001)+((_n_H_3951-1.0)*_n_step_4001));return d::minimum({_n_argument_4062,_n_argument_4065});})()));
auto _n_row_4007=[&]( double _a0) mutable ->double{double _n_p_4008=_a0;
return (_n_TOP_3950+d::round(((_n_top_4006-_n_p_4008)/_n_step_4001)));};
d::Array<d::Array<d::String,false>,false> _n_g_4009=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_3957,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_3956)).fill(d::String(u" "));}));
auto _n_put_4010=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_4011=_a0;
double _n_c_4012=_a1;
d::String _n_s_4013=_a2;
{
{double _n_i_4014=0.0;
for(;d::truth((_n_i_4014<double(_n_s_4013.size())));(void)((_n_i_4014++))){d::check_cancel();if((((d::truth((_n_r_4011>=0.0))&&d::truth((_n_r_4011<this->_n_rows_3957)))&&d::truth(((_n_c_4012+_n_i_4014)>=0.0)))&&d::truth(((_n_c_4012+_n_i_4014)<this->_n_cols_3956)))){d::check_cancel();(void)(([&](){auto&& _n_array_4066=d::at(_n_g_4009,_n_r_4011);auto _n_index_4067=(_n_c_4012+_n_i_4014);auto _n_value_4068=d::at(_n_s_4013,_n_i_4014);d::put(_n_array_4066,_n_index_4067,_n_value_4068);return _n_value_4068;})());
}
}}

}
};
double _n_axis_4015=((_n_SLOTS_3947*4.0)+1.0);
double _n_every_4016=([&]()->double{auto _n_logical_4069=d::find(_n_STEPS_3952,[&]( double _a0) mutable ->bool{double _n_s_4017=_a0;
return ([&]()->bool{auto _n_logical_4070=(_n_s_4017>=((_n_step_4001*3.0)-1e-9));return d::truth(_n_logical_4070)?(std::fabs(((_n_s_4017/_n_step_4001)-d::round((_n_s_4017/_n_step_4001))))<0.000001):_n_logical_4070;})();});return d::present(_n_logical_4069)?d::read(_n_logical_4069):(_n_step_4001*4.0);})();
{double _n_r_4018=_n_TOP_3950;
for(;d::truth((_n_r_4018<(_n_TOP_3950+_n_H_3951)));(void)((_n_r_4018++))){d::check_cancel();double _n_p_4019=(_n_top_4006-((_n_r_4018-_n_TOP_3950)*_n_step_4001));
bool _n_major_4020=(std::fabs(((_n_p_4019/_n_every_4016)-d::round((_n_p_4019/_n_every_4016))))<0.000001);
(void)(([&](){auto _n_argument_4071=_n_r_4018;auto _n_argument_4072=_n_axis_4015;auto _n_argument_4073=(d::truth(_n_major_4020)?(d::string(d::String(u"┤ "))+d::string(this->_n_fmt_3966(_n_p_4019))):d::String(u"│"));return _n_put_4010(_n_argument_4071,_n_argument_4072,_n_argument_4073);})());
}}
std::shared_ptr<_n_Record_3965> _n_last_4021=d::at(_n_cs_3993,(_n_SLOTS_3947-1.0));
double _n_lr_4022=_n_row_4007(_n_last_4021->_p_c);
{double _n_c_4023=((_n_SLOTS_3947*4.0)-1.0);
for(;d::truth((_n_c_4023<_n_axis_4015));(void)((_n_c_4023++))){d::check_cancel();(void)(_n_put_4010(_n_lr_4022,_n_c_4023,d::String(u"┄")));
}}
(void)(([&](){auto _n_argument_4074=_n_lr_4022;auto _n_argument_4075=_n_axis_4015;auto _n_argument_4076=(d::string(d::String(u"├ "))+d::string(this->_n_fmt_3966(_n_last_4021->_p_c)));return _n_put_4010(_n_argument_4074,_n_argument_4075,_n_argument_4076);})());
(void)(d::forEach(_n_cs_3993,[&]( std::shared_ptr<_n_Record_3965> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_3965> _n_c_4024=_a0;
double _n_s_4025=_a1;
{
double _n_x_4026=(_n_s_4025*4.0);
bool _n_up_4027=(_n_c_4024->_p_c>=_n_c_4024->_p_o);
double _n_rh_4028=_n_row_4007(_n_c_4024->_p_h);
double _n_rl_4029=_n_row_4007(_n_c_4024->_p_l);
double _n_rt_4030=_n_row_4007(d::maximum({_n_c_4024->_p_o,_n_c_4024->_p_c}));
double _n_rb_4031=_n_row_4007(d::minimum({_n_c_4024->_p_o,_n_c_4024->_p_c}));
{double _n_r_4032=_n_rh_4028;
for(;d::truth((_n_r_4032<=_n_rl_4029));(void)((_n_r_4032++))){d::check_cancel();(void)(_n_put_4010(_n_r_4032,(_n_x_4026+1.0),d::String(u"│")));
}}
if(d::truth((!d::truth(_n_up_4027)))){d::check_cancel();{double _n_r_4033=_n_rt_4030;
for(;d::truth((_n_r_4033<=_n_rb_4031));(void)((_n_r_4033++))){d::check_cancel();(void)(_n_put_4010(_n_r_4033,_n_x_4026,d::String(u"███")));
}}
}else {d::check_cancel();if(d::truth((_n_rt_4030==_n_rb_4031))){d::check_cancel();(void)(_n_put_4010(_n_rt_4030,_n_x_4026,(d::string((d::string(d::String(u"├"))+d::string((d::truth((_n_rh_4028<_n_rt_4030))?(d::truth((_n_rl_4029>_n_rb_4031))?d::String(u"┼"):d::String(u"┴")):(d::truth((_n_rl_4029>_n_rb_4031))?d::String(u"┬"):d::String(u"─"))))))+d::string(d::String(u"┤")))));
}else {d::check_cancel();(void)(_n_put_4010(_n_rt_4030,_n_x_4026,(d::string((d::string(d::String(u"┌"))+d::string((d::truth((_n_rh_4028<_n_rt_4030))?d::String(u"┴"):d::String(u"─")))))+d::string(d::String(u"┐")))));
{double _n_r_4034=(_n_rt_4030+1.0);
for(;d::truth((_n_r_4034<_n_rb_4031));(void)((_n_r_4034++))){d::check_cancel();(void)(_n_put_4010(_n_r_4034,_n_x_4026,d::String(u"│ │")));
}}
(void)(_n_put_4010(_n_rb_4031,_n_x_4026,(d::string((d::string(d::String(u"└"))+d::string((d::truth((_n_rl_4029>_n_rb_4031))?d::String(u"┬"):d::String(u"─")))))+d::string(d::String(u"┘")))));
}
}

}
}));
double _n_base_4035=(_n_TOP_3950+_n_H_3951);
(void)(([&](){auto _n_argument_4077=_n_base_4035;auto _n_argument_4078=0.0;auto _n_argument_4079=d::repeat(d::String(u"─"),_n_axis_4015);return _n_put_4010(_n_argument_4077,_n_argument_4078,_n_argument_4079);})());
(void)(_n_put_4010(_n_base_4035,_n_axis_4015,d::String(u"┘")));
{double _n_s_4036=0.0;
for(;d::truth((_n_s_4036<_n_SLOTS_3947));(void)((_n_s_4036++))){d::check_cancel();double _n_k_4037=(((_n_live_3991-_n_SLOTS_3947)+1.0)+_n_s_4036);
if(d::truth(d::mod(_n_k_4037,4.0))){d::check_cancel();continue;
}
(void)(_n_put_4010(_n_base_4035,((_n_s_4036*4.0)+1.0),d::String(u"┴")));
if(d::truth(_n_s_4036)){d::check_cancel();(void)(([&](){auto _n_argument_4080=(_n_base_4035+1.0);auto _n_argument_4081=((_n_s_4036*4.0)-1.0);auto _n_argument_4082=this->_n_clock_3967(_n_k_4037);return _n_put_4010(_n_argument_4080,_n_argument_4081,_n_argument_4082);})());
}
}}
double _n_chg_4038=(((_n_last_4021->_p_c-_n_last_4021->_p_o)/_n_last_4021->_p_o)*100.0);
(void)(([&](){auto _n_argument_4083=0.0;auto _n_argument_4084=0.0;auto _n_argument_4085=(d::String(u"o ")+d::string(this->_n_fmt_3966(_n_last_4021->_p_o))+d::String(u"   h ")+d::string(this->_n_fmt_3966(_n_last_4021->_p_h))+d::String(u"   l ")+d::string(this->_n_fmt_3966(_n_last_4021->_p_l))+d::String(u"   c ")+d::string(this->_n_fmt_3966(_n_last_4021->_p_c))+d::String(u"   ")+d::string((d::truth((_n_chg_4038>=0.0))?d::String(u"+"):d::String(u"")))+d::String(u"")+d::string(d::fixed(_n_chg_4038,2.0))+d::String(u"%"));return _n_put_4010(_n_argument_4083,_n_argument_4084,_n_argument_4085);})());
return d::join(d::map(_n_g_4009,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_l_4039=_a0;
return d::join(_n_l_4039,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("candlesticks").cols)*ascii::catalog_meta("candlesticks").rows);auto _env=std::make_shared<_n_Record_4041>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &candlesticks_meta(){return catalog_meta("candlesticks");}
std::unique_ptr<Piece> make_candlesticks(const AsciiPieceOptions &o){return std::make_unique<Native_candlesticks>(o);}
}
