// Direct, statically typed C++ from src/pieces/bouncing-balls.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_3199;
struct _n_Record_3200;
struct _n_Record_3227;
struct _n_Record_3312;
struct _n_Record_3313;
struct _n_Record_3329;
struct _n_Record_3199{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_3200> _p_options{};
static std::shared_ptr<_n_Record_3199> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3199>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_3200>>(j["options"]);return out;}
};
struct _n_Record_3200{
double _p_balls{};
static std::shared_ptr<_n_Record_3200> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3200>();out->_p_balls=d::decode<double>(j["balls"]);return out;}
};
struct _n_Record_3227{
double _p_r{};
double _p_k{};
double _p_c{};
double _p_x{};
double _p_y{};
double _p_vx{};
double _p_vy{};
double _p_rest{};
std::optional<double> _p_crouch{};
double _p_sq{};
static std::shared_ptr<_n_Record_3227> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3227>();out->_p_r=d::decode<double>(j["r"]);out->_p_k=d::decode<double>(j["k"]);out->_p_c=d::decode<double>(j["c"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_rest=d::decode<double>(j["rest"]);out->_p_crouch=d::decode<std::optional<double>>(j["crouch"]);out->_p_sq=d::decode<double>(j["sq"]);return out;}
};
struct _n_Record_3312{
std::optional<double> _p_balls{};
static std::shared_ptr<_n_Record_3312> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3312>();out->_p_balls=d::decode<std::optional<double>>(j["balls"]);return out;}
};
struct _n_Record_3313{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_3313> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3313>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_3329{
double _p_r{};
double _p_k{};
double _p_c{};
double _p_x{};
double _p_y{};
double _p_vx{};
double _p_vy{};
double _p_rest{};
double _p_crouch{};
double _p_sq{};
static std::shared_ptr<_n_Record_3329> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3329>();out->_p_r=d::decode<double>(j["r"]);out->_p_k=d::decode<double>(j["k"]);out->_p_c=d::decode<double>(j["c"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_rest=d::decode<double>(j["rest"]);out->_p_crouch=d::decode<double>(j["crouch"]);out->_p_sq=d::decode<double>(j["sq"]);return out;}
};
std::function<double()> _n_mulberry32_3210(double _a0);
std::shared_ptr<_n_Record_3199> _n_meta_3198=[](){return ([&](){auto _n_object_3318=std::make_shared<_n_Record_3199>();_n_object_3318->_p_name=d::String(u"bouncing balls");_n_object_3318->_p_category=d::String(u"physics");_n_object_3318->_p_note=d::String(u"rubber balls bouncing lower each time, squashing on landing");_n_object_3318->_p_cols=64.0;_n_object_3318->_p_rows=22.0;_n_object_3318->_p_fps=30.0;_n_object_3318->_p_options=([&](){auto _n_object_3320=std::make_shared<_n_Record_3200>();_n_object_3320->_p_balls=3.0;return _n_object_3320;})();return _n_object_3318;})();}();
const d::String _n_RAMP_3201=[](){return d::String(u" .:-=+*#%@");}();
const double _n_G_3202=[](){return 80.0;}();
const double _n_H_3203=[](){return (1.0/900.0);}();
const double _n_STIFF_3204=[](){return 120.0;}();
d::Array<double,false> _n_SIZES_3205=[](){return d::Array<double,false>{3.0,2.3,1.7,2.6,2.0};}();
d::Array<double,false> _n_BOUNCE_3206=[](){return d::Array<double,false>{0.84,0.82,0.8,0.83,0.81};}();
const double _n_SPREAD_3207=[](){return 2.1;}();
const double _n_WARM_3208=[](){return 9.1;}();
const d::String _n_SHADOW_3209=[](){return d::String(u"▀▒░");}();
std::function<double()> _n_mulberry32_3210(double _a0){double _n_seed_3236=_a0;
{
double _n_s_3237=double(d::i32(_n_seed_3236)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_3237=double(d::i32((_n_s_3237+1831565813.0))|d::i32(0.0))));
double _n_t_3238=d::imul(double(d::i32(_n_s_3237)^d::i32(double(d::u32(_n_s_3237)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_3237)));
(void)((_n_t_3238=double(d::i32((_n_t_3238+d::imul(double(d::i32(_n_t_3238)^d::i32(double(d::u32(_n_t_3238)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_3238)))))^d::i32(_n_t_3238))));
return (double(d::u32(double(d::i32(_n_t_3238)^d::i32(double(d::u32(_n_t_3238)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_bouncing_balls final:ascii::Piece{
double _n_balls_3211{};
double _n_cols_3212{};
double _n_rows_3213{};
double _n_W_3214{};
double _n_FLOOR_3215{};
double _n_m_3216{};
double _n_lx_3217{};
double _n_ly_3218{};
double _n_lz_3219{};
double _n_hm_3220{};
double _n_hx_3221{};
double _n_hy_3222{};
double _n_hz_3223{};
std::function<double()> _n_rand_3224{};
double _n_n_3225{};
d::Array<std::shared_ptr<_n_Record_3227>,false> _n_bs_3226{};
double _n_last_3231{};
d::Array<d::String,false> _n_out_3232{};
std::function<d::String(double,std::shared_ptr<_n_Record_3313>)> _render;
void _n_launch_3228(std::shared_ptr<_n_Record_3227> _a0){std::shared_ptr<_n_Record_3227> _n_b_3246=_a0;
{
(void)((_n_b_3246->_p_vy=std::sqrt((((2.0*_n_G_3202)*((this->_n_FLOOR_3215-1.5)-(2.0*_n_b_3246->_p_r)))*(0.75+(0.25*this->_n_rand_3224()))))));
(void)((_n_b_3246->_p_vx=((((this->_n_W_3214/2.0)-_n_b_3246->_p_x)*0.3)+((this->_n_rand_3224()-0.5)*10.0))));
(void)((_n_b_3246->_p_y=_n_b_3246->_p_r));
(void)((_n_b_3246->_p_crouch=std::optional<double>{}));
(void)((_n_b_3246->_p_rest=0.0));

}
}

void _n_step_3229(){{
for(auto &&_n_item_3355:this->_n_bs_3226){d::check_cancel();std::shared_ptr<_n_Record_3227> _n_b_3247=_n_item_3355;
{
if(d::truth((d::present(_n_b_3247->_p_crouch)))){d::check_cancel();(void)((_n_b_3247->_p_crouch=(d::read(_n_b_3247->_p_crouch)+_n_H_3203)));
double _n_u_3248=([&](){auto _n_argument_3356=0.0;auto _n_argument_3357=d::minimum({1.0,(d::read(_n_b_3247->_p_crouch)/0.45)});return d::maximum({_n_argument_3356,_n_argument_3357});})();
(void)((_n_b_3247->_p_sq=((((0.3*_n_b_3247->_p_r)*_n_u_3248)*_n_u_3248)*(3.0-(2.0*_n_u_3248)))));
(void)((_n_b_3247->_p_y=(_n_b_3247->_p_r-_n_b_3247->_p_sq)));
(void)((_n_b_3247->_p_vx=(_n_b_3247->_p_vx*(1.0-(6.0*_n_H_3203)))));
if(d::truth((_n_u_3248>=1.0))){d::check_cancel();(void)(this->_n_launch_3228(_n_b_3247));
}
continue;
}
(void)((_n_b_3247->_p_vy=(_n_b_3247->_p_vy-(_n_G_3202*_n_H_3203))));
double _n_d_3249=(_n_b_3247->_p_r-_n_b_3247->_p_y);
if(d::truth((_n_d_3249>0.0))){d::check_cancel();(void)((_n_b_3247->_p_vy=(_n_b_3247->_p_vy+(d::maximum({0.0,((_n_b_3247->_p_k*_n_d_3249)-(_n_b_3247->_p_c*_n_b_3247->_p_vy))})*_n_H_3203))));
(void)((_n_b_3247->_p_vx=(_n_b_3247->_p_vx*(1.0-(0.8*_n_H_3203)))));
(void)((_n_b_3247->_p_rest=(_n_b_3247->_p_rest+_n_H_3203)));
if((d::truth((_n_b_3247->_p_rest>0.3))&&d::truth((!d::present(d::Nil{}))))){d::check_cancel();(void)((_n_b_3247->_p_crouch=std::optional<double>(0.0)));
}
}else {d::check_cancel();(void)((_n_b_3247->_p_rest=0.0));
}
(void)((_n_b_3247->_p_sq=d::maximum({0.0,_n_d_3249})));
(void)((_n_b_3247->_p_vy=([&](){auto _n_argument_3358=_n_b_3247->_p_vy;auto _n_argument_3359=std::sqrt(((2.0*_n_G_3202)*d::maximum({0.0,(((this->_n_FLOOR_3215-1.2)-_n_b_3247->_p_r)-_n_b_3247->_p_y)})));return d::minimum({_n_argument_3358,_n_argument_3359});})()));
(void)((_n_b_3247->_p_x=(_n_b_3247->_p_x+(_n_b_3247->_p_vx*_n_H_3203))));
(void)((_n_b_3247->_p_y=(_n_b_3247->_p_y+(_n_b_3247->_p_vy*_n_H_3203))));
if(d::truth((_n_b_3247->_p_x<_n_b_3247->_p_r))){d::check_cancel();(void)(((_n_b_3247->_p_x=_n_b_3247->_p_r),(_n_b_3247->_p_vx=(std::fabs(_n_b_3247->_p_vx)*0.85))));
}
if(d::truth((_n_b_3247->_p_x>(this->_n_W_3214-_n_b_3247->_p_r)))){d::check_cancel();(void)(((_n_b_3247->_p_x=(this->_n_W_3214-_n_b_3247->_p_r)),(_n_b_3247->_p_vx=((-d::number(std::fabs(_n_b_3247->_p_vx)))*0.85))));
}

}
}
{double _n_i_3250=0.0;
for(;d::truth((_n_i_3250<this->_n_n_3225));(void)((_n_i_3250++))){d::check_cancel();{double _n_j_3251=(_n_i_3250+1.0);
for(;d::truth((_n_j_3251<this->_n_n_3225));(void)((_n_j_3251++))){d::check_cancel();std::shared_ptr<_n_Record_3227> _n_a_3252=d::at(this->_n_bs_3226,_n_i_3250);
std::shared_ptr<_n_Record_3227> _n_b_3253=d::at(this->_n_bs_3226,_n_j_3251);
double _n_dx_3254=(_n_b_3253->_p_x-_n_a_3252->_p_x);
double _n_dy_3255=(_n_b_3253->_p_y-_n_a_3252->_p_y);
double _n_dist_3256=d::hypot(std::initializer_list<double>{_n_dx_3254,_n_dy_3255});
double _n_gap_3257=((_n_a_3252->_p_r+_n_b_3253->_p_r)-_n_dist_3256);
if((d::truth((_n_gap_3257<=0.0))||d::truth((_n_dist_3256==0.0)))){d::check_cancel();continue;
}
double _n_nx_3258=(_n_dx_3254/_n_dist_3256);
double _n_ny_3259=(_n_dy_3255/_n_dist_3256);
double _n_ma_3260=(_n_a_3252->_p_r*_n_a_3252->_p_r);
double _n_mb_3261=(_n_b_3253->_p_r*_n_b_3253->_p_r);
double _n_vn_3262=(((_n_b_3253->_p_vx-_n_a_3252->_p_vx)*_n_nx_3258)+((_n_b_3253->_p_vy-_n_a_3252->_p_vy)*_n_ny_3259));
if(d::truth((_n_vn_3262<0.0))){d::check_cancel();double _n_jm_3263=(((-d::number(1.85))*_n_vn_3262)/((1.0/_n_ma_3260)+(1.0/_n_mb_3261)));
(void)(((((_n_a_3252->_p_vx=(_n_a_3252->_p_vx-((_n_jm_3263*_n_nx_3258)/_n_ma_3260))),(_n_a_3252->_p_vy=(_n_a_3252->_p_vy-((_n_jm_3263*_n_ny_3259)/_n_ma_3260)))),(_n_b_3253->_p_vx=(_n_b_3253->_p_vx+((_n_jm_3263*_n_nx_3258)/_n_mb_3261)))),(_n_b_3253->_p_vy=(_n_b_3253->_p_vy+((_n_jm_3263*_n_ny_3259)/_n_mb_3261)))));
}
double _n_pa_3264=(_n_mb_3261/(_n_ma_3260+_n_mb_3261));
double _n_pb_3265=(_n_ma_3260/(_n_ma_3260+_n_mb_3261));
(void)(((((_n_a_3252->_p_x=(_n_a_3252->_p_x-((_n_nx_3258*_n_gap_3257)*_n_pa_3264))),(_n_a_3252->_p_y=(_n_a_3252->_p_y-((_n_ny_3259*_n_gap_3257)*_n_pa_3264)))),(_n_b_3253->_p_x=(_n_b_3253->_p_x+((_n_nx_3258*_n_gap_3257)*_n_pb_3265)))),(_n_b_3253->_p_y=(_n_b_3253->_p_y+((_n_ny_3259*_n_gap_3257)*_n_pb_3265)))));
if((d::truth((d::present(_n_a_3252->_p_crouch)))&&d::truth((_n_ny_3259<0.0)))){d::check_cancel();(void)((_n_a_3252->_p_crouch=std::optional<double>{}));
}
if((d::truth((d::present(_n_b_3253->_p_crouch)))&&d::truth((_n_ny_3259>0.0)))){d::check_cancel();(void)((_n_b_3253->_p_crouch=std::optional<double>{}));
}
}}
}}

}
}

void _n_advance_3230(double _a0){double _n_dt_3266=_a0;
{
{double _n_i_3267=0.0;
for(;d::truth((_n_i_3267<d::round((_n_dt_3266/_n_H_3203))));(void)((_n_i_3267++))){d::check_cancel();(void)(this->_n_step_3229());
}}

}
}

double _n_shade_3233(double _a0,double _a1,double _a2){double _n_nx_3269=_a0;
double _n_ny_3270=_a1;
double _n_nz_3271=_a2;
{
double _n_d_3272=d::maximum({0.0,(((_n_nx_3269*this->_n_lx_3217)+(_n_ny_3270*this->_n_ly_3218))+(_n_nz_3271*this->_n_lz_3219))});
double _n_s_3273=std::pow(d::maximum({0.0,(((_n_nx_3269*this->_n_hx_3221)+(_n_ny_3270*this->_n_hy_3222))+(_n_nz_3271*this->_n_hz_3223))}),40.0);
return ([&](){auto _n_argument_3360=1.0;auto _n_argument_3361=(((0.14+(0.66*_n_d_3272))+(0.5*_n_s_3273))+(0.12*d::maximum({0.0,(-d::number(_n_ny_3270))})));return d::minimum({_n_argument_3360,_n_argument_3361});})();

}
}

void _n_draw_3234(std::shared_ptr<_n_Record_3227> _a0,bool _a1){std::shared_ptr<_n_Record_3227> _n_b_3274=_a0;
bool _n_paper_3275=_a1;
{
double _n_ry_3276=(_n_b_3274->_p_r-_n_b_3274->_p_sq);
double _n_rx_3277=((_n_b_3274->_p_r*_n_b_3274->_p_r)/_n_ry_3276);
double _n_cy_3278=((this->_n_FLOOR_3215-_n_ry_3276)-d::maximum({0.0,(_n_b_3274->_p_y-_n_b_3274->_p_r)}));
double _n_cx_3279=(_n_b_3274->_p_x*2.0);
d::Array<d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>,false> _n_runs_3280=d::Array<d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>,false>{};
{double _n_r_3281=std::floor((_n_cy_3278-_n_ry_3276));
for(;d::truth((_n_r_3281<=(_n_cy_3278+_n_ry_3276)));(void)((_n_r_3281++))){d::check_cancel();d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_run_3282=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
(void)(_n_runs_3280.push(_n_run_3282));
if((d::truth((_n_r_3281<0.0))||d::truth((_n_r_3281>=this->_n_FLOOR_3215)))){d::check_cancel();continue;
}
{double _n_c_3283=std::floor((_n_cx_3279-(2.0*_n_rx_3277)));
for(;d::truth((_n_c_3283<=(_n_cx_3279+(2.0*_n_rx_3277))));(void)((_n_c_3283++))){d::check_cancel();if((d::truth((_n_c_3283<0.0))||d::truth((_n_c_3283>=this->_n_cols_3212)))){d::check_cancel();continue;
}
double _n_hit_3284=0.0;
double _n_v_3285=0.0;
{double _n_j_3286=0.0;
for(;d::truth((_n_j_3286<4.0));(void)((_n_j_3286++))){d::check_cancel();{double _n_i_3287=0.0;
for(;d::truth((_n_i_3287<4.0));(void)((_n_i_3287++))){d::check_cancel();double _n_u_3288=(((((_n_c_3283+0.125)+(_n_i_3287*0.25))-_n_cx_3279)/2.0)/_n_rx_3277);
double _n_w_3289=((((_n_r_3281+0.125)+(_n_j_3286*0.25))-_n_cy_3278)/_n_ry_3276);
double _n_q_3290=((_n_u_3288*_n_u_3288)+(_n_w_3289*_n_w_3289));
if(d::truth((_n_q_3290<1.0))){d::check_cancel();(void)(((_n_hit_3284++),(_n_v_3285=(_n_v_3285+([&](){auto _n_argument_3362=_n_u_3288;auto _n_argument_3363=(-d::number(_n_w_3289));auto _n_argument_3364=std::sqrt((1.0-_n_q_3290));return this->_n_shade_3233(_n_argument_3362,_n_argument_3363,_n_argument_3364);})()))));
}
}}
}}
if(d::truth((_n_hit_3284<4.0))){d::check_cancel();continue;
}
double _n_ink_3291=(d::truth(_n_paper_3275)?(1.1-(_n_v_3285/_n_hit_3284)):(_n_v_3285/_n_hit_3284));
double _n_g_3292=d::round((([&](){auto _n_left_3365=d::minimum({1.0,_n_ink_3291});auto _n_right_3366=std::sqrt((_n_hit_3284/16.0));return (_n_left_3365*_n_right_3366);})()*(double(_n_RAMP_3201.size())-1.0)));
if(d::truth((_n_g_3292>0.0))){d::check_cancel();(void)(_n_run_3282.push(std::make_shared<std::tuple<double,d::String>>(((_n_r_3281*this->_n_cols_3212)+_n_c_3283),d::at(_n_RAMP_3201,_n_g_3292))));
}
}}
}}
double _n_n_3293=double(_n_runs_3280.size());
if(((d::truth((_n_n_3293>2.0))&&d::truth((double(d::at(_n_runs_3280,0.0).size())<3.0)))&&d::truth((double(d::at(_n_runs_3280,1.0).size())>5.0)))){d::check_cancel();(void)((d::at(_n_runs_3280,0.0).resize(size_t(0.0)),0.0));
}
if(((d::truth((_n_n_3293>2.0))&&d::truth((double(d::at(_n_runs_3280,(_n_n_3293-1.0)).size())<3.0)))&&d::truth((double(d::at(_n_runs_3280,(_n_n_3293-2.0)).size())>5.0)))){d::check_cancel();(void)((d::at(_n_runs_3280,(_n_n_3293-1.0)).resize(size_t(0.0)),0.0));
}
for(auto &&_n_item_3367:_n_runs_3280){d::check_cancel();d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_run_3294=_n_item_3367;
for(auto &&_n_item_3368:_n_run_3294){d::check_cancel();auto _n_binding_3369=_n_item_3368;
double _n_k_3295=std::get<0>(*_n_binding_3369);
d::String _n_g_3296=std::get<1>(*_n_binding_3369);
(void)(([&](){auto&& _n_array_3370=this->_n_out_3232;auto _n_index_3371=_n_k_3295;auto _n_value_3372=_n_g_3296;d::put(_n_array_3370,_n_index_3371,_n_value_3372);return _n_value_3372;})());
}
}

}
}

explicit Native_bouncing_balls(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_3321=d::decode<std::shared_ptr<_n_Record_3312>>(_options.data);
this->_n_balls_3211=(d::present(_n_binding_3321->_p_balls)?d::read(_n_binding_3321->_p_balls):3.0);
auto _n_binding_3322=_n_meta_3198;
this->_n_cols_3212=_n_binding_3322->_p_cols;
this->_n_rows_3213=_n_binding_3322->_p_rows;
this->_n_W_3214=(this->_n_cols_3212/2.0);
this->_n_FLOOR_3215=(this->_n_rows_3213-1.0);
this->_n_m_3216=d::hypot(std::initializer_list<double>{(-d::number(0.45)),0.55,0.7});
auto _n_binding_3323=std::array<double,3>{((-d::number(0.45))/this->_n_m_3216),(0.55/this->_n_m_3216),(0.7/this->_n_m_3216)};
this->_n_lx_3217=d::at(_n_binding_3323,0.0);
this->_n_ly_3218=d::at(_n_binding_3323,1.0);
this->_n_lz_3219=d::at(_n_binding_3323,2.0);
this->_n_hm_3220=d::hypot(std::initializer_list<double>{this->_n_lx_3217,this->_n_ly_3218,(this->_n_lz_3219+1.0)});
auto _n_binding_3324=std::array<double,3>{(this->_n_lx_3217/this->_n_hm_3220),(this->_n_ly_3218/this->_n_hm_3220),((this->_n_lz_3219+1.0)/this->_n_hm_3220)};
this->_n_hx_3221=d::at(_n_binding_3324,0.0);
this->_n_hy_3222=d::at(_n_binding_3324,1.0);
this->_n_hz_3223=d::at(_n_binding_3324,2.0);
this->_n_rand_3224=_n_mulberry32_3210(11.0);
this->_n_n_3225=([&](){auto _n_argument_3325=1.0;auto _n_argument_3326=([&](){auto _n_argument_3327=double(_n_SIZES_3205.size());auto _n_argument_3328=d::round(this->_n_balls_3211);return d::minimum({_n_argument_3327,_n_argument_3328});})();return d::maximum({_n_argument_3325,_n_argument_3326});})();
this->_n_bs_3226=d::Array<std::shared_ptr<_n_Record_3227>,false>(d::map(d::Array<std::shared_ptr<_n_Record_3329>,false>(d::from(this->_n_n_3225,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<_n_Record_3329>{double _n_i_3240=_a1;
{
double _n_r_3241=d::at(_n_SIZES_3205,_n_i_3240);
double _n_w_3242=(_n_STIFF_3204/_n_r_3241);
double _n_e_3243=d::at(_n_BOUNCE_3206,_n_i_3240);
double _n_z_3244=([&](){auto _n_left_3330=(-d::number(std::log(_n_e_3243)));auto _n_right_3331=([&](){auto _n_argument_3332=ascii::PI;auto _n_argument_3333=std::log(_n_e_3243);return d::hypot(std::initializer_list<double>{_n_argument_3332,_n_argument_3333});})();return (_n_left_3330/_n_right_3331);})();
double _n_x_3245=(this->_n_W_3214*(0.2+((0.6*_n_i_3240)/d::maximum({1.0,(this->_n_n_3225-1.0)}))));
return ([&](){auto _n_object_3335=std::make_shared<_n_Record_3329>();_n_object_3335->_p_r=_n_r_3241;_n_object_3335->_p_k=(_n_w_3242*_n_w_3242);_n_object_3335->_p_c=((2.0*_n_z_3244)*_n_w_3242);_n_object_3335->_p_x=_n_x_3245;_n_object_3335->_p_y=_n_r_3241;_n_object_3335->_p_vx=0.0;_n_object_3335->_p_vy=0.0;_n_object_3335->_p_rest=0.0;_n_object_3335->_p_crouch=((-d::number(_n_SPREAD_3207))*_n_i_3240);_n_object_3335->_p_sq=0.0;return _n_object_3335;})();

}
})),[&](const auto &_n_element_3336){return ([&](){auto _n_record_3337=_n_element_3336;auto _n_record_3338=std::make_shared<_n_Record_3227>();_n_record_3338->_p_r=_n_record_3337->_p_r;_n_record_3338->_p_k=_n_record_3337->_p_k;_n_record_3338->_p_c=_n_record_3337->_p_c;_n_record_3338->_p_x=_n_record_3337->_p_x;_n_record_3338->_p_y=_n_record_3337->_p_y;_n_record_3338->_p_vx=_n_record_3337->_p_vx;_n_record_3338->_p_vy=_n_record_3337->_p_vy;_n_record_3338->_p_rest=_n_record_3337->_p_rest;_n_record_3338->_p_crouch=std::optional<double>(_n_record_3337->_p_crouch);_n_record_3338->_p_sq=_n_record_3337->_p_sq;return _n_record_3338;})();}));
{double _n_i_3268=0.0;
for(;d::truth((_n_i_3268<(_n_WARM_3208*30.0)));(void)((_n_i_3268++))){d::check_cancel();(void)(this->_n_advance_3230((1.0/30.0)));
}}
this->_n_last_3231=0.0;
this->_n_out_3232=d::Array<d::String,false>(size_t((this->_n_cols_3212*this->_n_rows_3213)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_3313> _a1) mutable ->d::String{double _n_t_3297=_a0;
auto _n_binding_3341=(d::present(_a1)?_a1:([&](){auto _n_object_3340=std::make_shared<_n_Record_3313>();return _n_object_3340;})());
bool _n_paper_3298=(d::present(_n_binding_3341->_p_paper)?d::read(_n_binding_3341->_p_paper):false);
{
(void)(this->_n_advance_3230(([&](){auto _n_argument_3342=0.1;auto _n_argument_3343=d::maximum({0.0,(_n_t_3297-this->_n_last_3231)});return d::minimum({_n_argument_3342,_n_argument_3343});})()));
(void)((this->_n_last_3231=_n_t_3297));
(void)(this->_n_out_3232.fill(d::String(u" ")));
{double _n_c_3299=0.0;
for(;d::truth((_n_c_3299<this->_n_cols_3212));(void)((_n_c_3299++))){d::check_cancel();(void)(([&](){auto&& _n_array_3344=this->_n_out_3232;auto _n_index_3345=((this->_n_FLOOR_3215*this->_n_cols_3212)+_n_c_3299);auto _n_value_3346=d::String(u"▔");d::put(_n_array_3344,_n_index_3345,_n_value_3346);return _n_value_3346;})());
}}
for(auto &&_n_item_3347:this->_n_bs_3226){d::check_cancel();std::shared_ptr<_n_Record_3227> _n_b_3300=_n_item_3347;
{
double _n_h_3301=(d::maximum({0.0,(_n_b_3300->_p_y-_n_b_3300->_p_r)})/(this->_n_FLOOR_3215-(2.0*_n_b_3300->_p_r)));
double _n_rx_3302=((_n_b_3300->_p_r*_n_b_3300->_p_r)/(_n_b_3300->_p_r-_n_b_3300->_p_sq));
double _n_sw_3303=((_n_rx_3302*2.0)*(1.0-(0.6*_n_h_3301)));
{double _n_c_3304=std::ceil(((_n_b_3300->_p_x*2.0)-_n_sw_3303));
for(;d::truth((_n_c_3304<((_n_b_3300->_p_x*2.0)+_n_sw_3303)));(void)((_n_c_3304++))){d::check_cancel();double _n_edge_3305=(std::fabs(((_n_c_3304+0.5)-(_n_b_3300->_p_x*2.0)))/_n_sw_3303);
double _n_g_3306=([&](){auto _n_argument_3348=(double(_n_SHADOW_3209.size())-1.0);auto _n_argument_3349=std::floor(((_n_h_3301*2.6)+(_n_edge_3305*1.3)));return d::minimum({_n_argument_3348,_n_argument_3349});})();
if((d::truth((_n_c_3304>=0.0))&&d::truth((_n_c_3304<this->_n_cols_3212)))){d::check_cancel();(void)(([&](){auto&& _n_array_3350=this->_n_out_3232;auto _n_index_3351=((this->_n_FLOOR_3215*this->_n_cols_3212)+_n_c_3304);auto _n_value_3352=d::at(_n_SHADOW_3209,_n_g_3306);d::put(_n_array_3350,_n_index_3351,_n_value_3352);return _n_value_3352;})());
}
}}

}
}
for(auto &&_n_item_3353:([&](){d::Array<std::shared_ptr<_n_Record_3227>,false> _n_array_3354;for(const auto &_v:this->_n_bs_3226)_n_array_3354.push(_v);return _n_array_3354;})().sort([=]( std::shared_ptr<_n_Record_3227> _a0,std::shared_ptr<_n_Record_3227> _a1) mutable ->double{std::shared_ptr<_n_Record_3227> _n_p_3308=_a0;
std::shared_ptr<_n_Record_3227> _n_q_3309=_a1;
return (_n_q_3309->_p_r-_n_p_3308->_p_r);})){d::check_cancel();std::shared_ptr<_n_Record_3227> _n_b_3307=_n_item_3353;
(void)(this->_n_draw_3234(_n_b_3307,_n_paper_3298));
}
d::Array<d::String,false> _n_lines_3310=d::Array<d::String,false>{};
{double _n_r_3311=0.0;
for(;d::truth((_n_r_3311<this->_n_rows_3213));(void)((_n_r_3311++))){d::check_cancel();(void)(_n_lines_3310.push(d::join(this->_n_out_3232.slice((_n_r_3311*this->_n_cols_3212),((_n_r_3311+1.0)*this->_n_cols_3212)),d::String(u""))));
}}
return d::join(_n_lines_3310,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("bouncing-balls").cols)*ascii::catalog_meta("bouncing-balls").rows);auto _env=std::make_shared<_n_Record_3313>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &bouncing_balls_meta(){return catalog_meta("bouncing-balls");}
std::unique_ptr<Piece> make_bouncing_balls(const AsciiPieceOptions &o){return std::make_unique<Native_bouncing_balls>(o);}
}
