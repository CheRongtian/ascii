// Direct, statically typed C++ from src/pieces/butterfly.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_3374;
struct _n_Record_3380;
struct _n_Record_3453;
struct _n_Record_3374{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_3374> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3374>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_3380{
double _p_x{};
double _p_y{};
double _p_a{};
double _p_b{};
double _p_r{};
static std::shared_ptr<_n_Record_3380> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3380>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_a=d::decode<double>(j["a"]);out->_p_b=d::decode<double>(j["b"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_3453{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_3453> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3453>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_drop_3383(std::shared_ptr<_n_Record_3380> _a0,double _a1,double _a2);
double _n_wing_3384(double _a0,double _a1);
std::shared_ptr<_n_Record_3374> _n_meta_3373=[](){return ([&](){auto _n_object_3456=std::make_shared<_n_Record_3374>();_n_object_3456->_p_name=d::String(u"butterfly");_n_object_3456->_p_category=d::String(u"creatures");_n_object_3456->_p_note=d::String(u"a butterfly flapping and gliding along a wandering path");_n_object_3456->_p_cols=64.0;_n_object_3456->_p_rows=24.0;_n_object_3456->_p_fps=30.0;return _n_object_3456;})();}();
const d::String _n_RAMP_3375=[](){return d::String(u" .:-=+*#%@");}();
const double _n_LOOP_3376=[](){return 16.0;}();
const double _n_BEAT_3377=[](){return 2.5;}();
const double _n_EYE_3378=[](){return 120.0;}();
std::shared_ptr<_n_Record_3380> _n_FORE_3379=[](){return ([&](){auto _n_object_3458=std::make_shared<_n_Record_3380>();_n_object_3458->_p_x=9.6;_n_object_3458->_p_y=5.6;_n_object_3458->_p_a=11.6;_n_object_3458->_p_b=7.2;_n_object_3458->_p_r=0.5;return _n_object_3458;})();}();
std::shared_ptr<_n_Record_3380> _n_HIND_3381=[](){return ([&](){auto _n_object_3460=std::make_shared<_n_Record_3380>();_n_object_3460->_p_x=7.0;_n_object_3460->_p_y=(-d::number(4.6));_n_object_3460->_p_a=8.8;_n_object_3460->_p_b=7.4;_n_object_3460->_p_r=(-d::number(0.62));return _n_object_3460;})();}();
d::Array<double,false> _n_drop_3383(std::shared_ptr<_n_Record_3380> _a0,double _a1,double _a2){std::shared_ptr<_n_Record_3380> _n_w_3389=_a0;
double _n_x_3390=_a1;
double _n_y_3391=_a2;
{
double _n_dx_3392=(_n_x_3390-_n_w_3389->_p_x);
double _n_dy_3393=(_n_y_3391-_n_w_3389->_p_y);
double _n_c_3394=std::cos(_n_w_3389->_p_r);
double _n_s_3395=std::sin(_n_w_3389->_p_r);
double _n_p_3396=(((_n_dx_3392*_n_c_3394)+(_n_dy_3393*_n_s_3395))/_n_w_3389->_p_a);
double _n_q_3397=(((_n_dy_3393*_n_c_3394)-(_n_dx_3392*_n_s_3395))/(_n_w_3389->_p_b*(0.58+(0.42*([&](){auto _n_argument_3461=1.0;auto _n_argument_3462=d::maximum({0.0,((_n_p_3396+1.0)/2.0)});return d::minimum({_n_argument_3461,_n_argument_3462});})()))));
return d::Array<double,false>{_n_p_3396,_n_q_3397,((_n_p_3396*_n_p_3396)+(_n_q_3397*_n_q_3397))};

}
}

double _n_wing_3384(double _a0,double _a1){double _n_x_3398=_a0;
double _n_y_3399=_a1;
{
bool _n_root_3400=(d::hypot(std::initializer_list<double>{_n_x_3398,(_n_y_3399*0.8)})<3.6);
auto _n_binding_3463=_n_drop_3383(_n_FORE_3379,_n_x_3398,_n_y_3399);
double _n_p_3401=d::at(_n_binding_3463,0.0);
double _n_q_3402=d::at(_n_binding_3463,1.0);
double _n_r_3403=d::at(_n_binding_3463,2.0);
if(d::truth((_n_r_3403<1.0))){d::check_cancel();double _n_rho_3404=std::sqrt(_n_r_3403);
double _n_be_3405=std::atan2(_n_q_3402,_n_p_3401);
if(d::truth((_n_rho_3404>(0.76+(0.2*([&](){auto _n_argument_3464=1.0;auto _n_argument_3465=d::maximum({0.0,((0.5-_n_p_3401)/0.8)});return d::minimum({_n_argument_3464,_n_argument_3465});})()))))){d::check_cancel();return ((((d::truth((_n_rho_3404>0.8))&&d::truth((_n_rho_3404<0.95)))&&d::truth((_n_p_3401>0.3)))&&d::truth((std::cos(((_n_be_3405*7.0)+0.3))>0.45)))?0.9:0.24);
}
if(d::truth((std::fabs((((_n_p_3401*0.85)+(_n_q_3402*0.5))-0.02))<0.17))){d::check_cancel();return 0.9;
}
return (d::truth(_n_root_3400)?0.3:0.55);
}
(void)(([&](){auto _n_unpack_3466=_n_drop_3383(_n_HIND_3381,_n_x_3398,_n_y_3399);_n_p_3401=d::at(_n_unpack_3466,0.0);_n_q_3402=d::at(_n_unpack_3466,1.0);_n_r_3403=d::at(_n_unpack_3466,2.0);return _n_unpack_3466;})());
if(d::truth((_n_r_3403>=1.0))){d::check_cancel();return (-d::number(1.0));
}
double _n_e_3406=d::hypot(std::initializer_list<double>{(_n_x_3398-9.4),((_n_y_3399+6.4)*0.8)});
if(d::truth((_n_e_3406<1.0))){d::check_cancel();return 1.0;
}
if(d::truth((_n_e_3406<2.3))){d::check_cancel();return 0.1;
}
if(d::truth((_n_e_3406<3.8))){d::check_cancel();return 0.9;
}
if((d::truth((std::sqrt(_n_r_3403)>0.8))&&d::truth((_n_p_3401>(-d::number(0.3)))))){d::check_cancel();return 0.24;
}
return (d::truth(_n_root_3400)?0.3:0.55);

}
}

struct Native_butterfly final:ascii::Piece{
double _n_cols_3385{};
double _n_rows_3386{};
d::Array<d::String,false> _n_out_3387{};
std::function<d::String(double,std::shared_ptr<_n_Record_3453>)> _render;
void _n_put_3388(double _a0,double _a1,d::String _a2){double _n_x_3407=_a0;
double _n_y_3408=_a1;
d::String _n_ch_3409=_a2;
{
(void)((_n_x_3407=d::round(_n_x_3407)));
(void)((_n_y_3408=d::round(_n_y_3408)));
if((((d::truth((_n_x_3407>=0.0))&&d::truth((_n_x_3407<this->_n_cols_3385)))&&d::truth((_n_y_3408>=0.0)))&&d::truth((_n_y_3408<this->_n_rows_3386)))){d::check_cancel();(void)(([&](){auto&& _n_array_3497=this->_n_out_3387;auto _n_index_3498=((_n_y_3408*this->_n_cols_3385)+_n_x_3407);auto _n_value_3499=_n_ch_3409;d::put(_n_array_3497,_n_index_3498,_n_value_3499);return _n_value_3499;})());
}

}
}

explicit Native_butterfly(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_3467=_n_meta_3373;
this->_n_cols_3385=_n_binding_3467->_p_cols;
this->_n_rows_3386=_n_binding_3467->_p_rows;
this->_n_out_3387=d::Array<d::String,false>(size_t((this->_n_cols_3385*this->_n_rows_3386)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_3453> _a1) mutable ->d::String{double _n_t_3410=_a0;
auto _n_binding_3470=(d::present(_a1)?_a1:([&](){auto _n_object_3469=std::make_shared<_n_Record_3453>();return _n_object_3469;})());
bool _n_paper_3411=(d::present(_n_binding_3470->_p_paper)?d::read(_n_binding_3470->_p_paper):false);
{
double _n_u_3412=d::mod((d::mod(_n_t_3410,_n_LOOP_3376)+_n_LOOP_3376),_n_LOOP_3376);
double _n_w_3413=((2.0*ascii::PI)/_n_LOOP_3376);
double _n_g_3414=d::mod(_n_u_3412,8.0);
double _n_flap_3415=(d::truth((_n_g_3414<4.0))?1.0:(d::truth((_n_g_3414<4.4))?(1.0-((_n_g_3414-4.0)/0.4)):(d::truth((_n_g_3414>7.6))?((_n_g_3414-7.6)/0.4):0.0)));
double _n_beat_3416=std::cos((((2.0*ascii::PI)*_n_BEAT_3377)*_n_u_3412));
double _n_th_3417=((_n_flap_3415*(0.6-(0.72*_n_beat_3416)))-(0.06*(1.0-_n_flap_3415)));
double _n_bx_3418=(d::round(([&](){auto _n_left_3471=((this->_n_cols_3385/2.0)+(9.0*std::sin((_n_w_3413*_n_u_3412))));auto _n_right_3472=(2.0*std::sin((((3.0*_n_w_3413)*_n_u_3412)+0.6)));return (_n_left_3471+_n_right_3472);})())-0.5);
double _n_by_3419=([&](){auto _n_left_3473=(((this->_n_rows_3386/2.0)+0.6)+(1.4*std::sin((((2.0*_n_w_3413)*_n_u_3412)+1.0))));auto _n_right_3474=((0.35*_n_flap_3415)*std::sin((((2.0*ascii::PI)*_n_BEAT_3377)*_n_u_3412)));return (_n_left_3473+_n_right_3474);})();
double _n_bank_3420=(((0.16-(0.1*_n_flap_3415))*([&](){auto _n_left_3475=std::cos((_n_w_3413*_n_u_3412));auto _n_right_3476=(0.67*std::cos((((3.0*_n_w_3413)*_n_u_3412)+0.6)));return (_n_left_3475+_n_right_3476);})())/1.67);
d::Array<d::Array<double,false>,false> _n_tilt_3421=d::map(d::Array<double,false>{(_n_th_3417-_n_bank_3420),(_n_th_3417+_n_bank_3420)},[&]( double _a0) mutable ->d::Array<double,false>{double _n_a_3422=_a0;
return d::Array<double,false>{std::cos(_n_a_3422),std::sin(_n_a_3422)};});
double _n_dim_3423=(0.82+(0.18*std::cos(_n_th_3417)));
auto _n_sample_3424=[&]( double _a0,double _a1) mutable ->double{double _n_X_3425=_a0;
double _n_Y_3426=_a1;
{
auto _n_binding_3477=d::at(_n_tilt_3421,(d::truth((_n_X_3425<0.0))?0.0:1.0));
double _n_ct_3427=d::at(_n_binding_3477,0.0);
double _n_st_3428=d::at(_n_binding_3477,1.0);
double _n_ax_3429=std::fabs(_n_X_3425);
double _n_den_3430=((_n_EYE_3378*_n_ct_3427)+(_n_ax_3429*_n_st_3428));
if(d::truth((_n_den_3430<=0.0))){d::check_cancel();return (-d::number(1.0));
}
double _n_x_3431=((_n_ax_3429*_n_EYE_3378)/_n_den_3430);
double _n_k_3432=(_n_EYE_3378/(_n_EYE_3378-(_n_x_3431*_n_st_3428)));
return _n_wing_3384(_n_x_3431,(_n_Y_3426/_n_k_3432));

}
};
(void)(this->_n_out_3387.fill(d::String(u" ")));
double _n_col_3433=(_n_bx_3418-0.5);
double _n_sway_3434=(0.4*std::sin((((2.0*ascii::PI)*0.5)*_n_u_3412)));
for(auto &&_n_item_3478:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_3435=_n_item_3478;
{
{double _n_k_3436=1.0;
for(;d::truth((_n_k_3436<=5.0));(void)((_n_k_3436++))){d::check_cancel();double _n_f_3437=(_n_k_3436/5.0);
(void)(this->_n_put_3388((_n_col_3433+(_n_side_3435*((0.5+(2.6*_n_f_3437))+((_n_sway_3434*_n_f_3437)*_n_f_3437)))),((_n_by_3419-2.0)-(5.0*_n_f_3437)),(d::truth((_n_k_3436==5.0))?d::String(u"o"):(d::truth((_n_side_3435>0.0))?d::String(u"/"):d::String(u"\\")))));
}}

}
}
{double _n_r_3438=0.0;
for(;d::truth((_n_r_3438<this->_n_rows_3386));(void)((_n_r_3438++))){d::check_cancel();{double _n_c_3439=0.0;
for(;d::truth((_n_c_3439<this->_n_cols_3385));(void)((_n_c_3439++))){d::check_cancel();double _n_n_3440=0.0;
double _n_sx_3441=0.0;
double _n_sy_3442=0.0;
{double _n_j_3443=0.0;
for(;d::truth((_n_j_3443<3.0));(void)((_n_j_3443++))){d::check_cancel();{double _n_i_3444=0.0;
for(;d::truth((_n_i_3444<2.0));(void)((_n_i_3444++))){d::check_cancel();if(d::truth((_n_sample_3424((((_n_c_3439+0.25)+(_n_i_3444*0.5))-_n_bx_3418),(((_n_by_3419-_n_r_3438)-((_n_j_3443+0.5)/3.0))*2.0))>=0.0))){d::check_cancel();(void)((((_n_n_3440++),(_n_sx_3441=(_n_sx_3441+(_n_i_3444-0.5)))),(_n_sy_3442=(_n_sy_3442+(1.0-_n_j_3443)))));
}
}}
}}
if(d::truth((!d::truth(_n_n_3440)))){d::check_cancel();continue;
}
double _n_at_3445=((_n_r_3438*this->_n_cols_3385)+_n_c_3439);
if(d::truth((_n_n_3440<5.0))){d::check_cancel();double _n_ux_3446=(_n_sx_3441/_n_n_3440);
double _n_uy_3447=(_n_sy_3442/_n_n_3440);
if(d::truth(([&](){auto _n_left_3479=std::fabs(_n_uy_3447);auto _n_right_3480=(std::fabs(_n_ux_3446)*2.0);return (_n_left_3479>_n_right_3480);})())){d::check_cancel();(void)(([&](){auto&& _n_array_3481=this->_n_out_3387;auto _n_index_3482=_n_at_3445;auto _n_value_3483=(d::truth((_n_uy_3447<0.0))?(d::truth((_n_n_3440<3.0))?d::String(u"."):d::String(u"_")):(d::truth((_n_n_3440<3.0))?d::String(u"'"):d::String(u"-")));d::put(_n_array_3481,_n_index_3482,_n_value_3483);return _n_value_3483;})());
}else {d::check_cancel();if(d::truth(([&](){auto _n_left_3484=std::fabs(_n_ux_3446);auto _n_right_3485=(std::fabs(_n_uy_3447)*2.0);return (_n_left_3484>_n_right_3485);})())){d::check_cancel();(void)(([&](){auto&& _n_array_3486=this->_n_out_3387;auto _n_index_3487=_n_at_3445;auto _n_value_3488=(d::truth((_n_ux_3446>0.0))?d::String(u"("):d::String(u")"));d::put(_n_array_3486,_n_index_3487,_n_value_3488);return _n_value_3488;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_3489=this->_n_out_3387;auto _n_index_3490=_n_at_3445;auto _n_value_3491=(d::truth(((_n_ux_3446*_n_uy_3447)<0.0))?d::String(u"/"):d::String(u"\\"));d::put(_n_array_3489,_n_index_3490,_n_value_3491);return _n_value_3491;})());
}
}
continue;
}
double _n_v_3448=_n_sample_3424(((_n_c_3439+0.5)-_n_bx_3418),(((_n_by_3419-_n_r_3438)-0.5)*2.0));
double _n_i_3449=([&](){auto _n_argument_3492=1.0;auto _n_argument_3493=d::round(((d::maximum({0.0,_n_v_3448})*_n_dim_3423)*(double(_n_RAMP_3375.size())-1.0)));return d::maximum({_n_argument_3492,_n_argument_3493});})();
(void)(([&](){auto&& _n_array_3494=this->_n_out_3387;auto _n_index_3495=_n_at_3445;auto _n_value_3496=d::at(_n_RAMP_3375,(d::truth(_n_paper_3411)?(double(_n_RAMP_3375.size())-_n_i_3449):_n_i_3449));d::put(_n_array_3494,_n_index_3495,_n_value_3496);return _n_value_3496;})());
}}
}}
{double _n_y_3450=3.0;
for(;d::truth((_n_y_3450>=(-d::number(9.0))));(void)((_n_y_3450--))){d::check_cancel();(void)(this->_n_put_3388(_n_col_3433,(_n_by_3419-(_n_y_3450/2.0)),(d::truth((_n_y_3450>1.0))?d::String(u"O"):(d::truth((_n_y_3450>(-d::number(2.0))))?d::String(u"#"):(d::truth((_n_y_3450>(-d::number(8.0))))?d::String(u"|"):d::String(u"'"))))));
}}
d::Array<d::String,false> _n_lines_3451=d::Array<d::String,false>{};
{double _n_r_3452=0.0;
for(;d::truth((_n_r_3452<this->_n_rows_3386));(void)((_n_r_3452++))){d::check_cancel();(void)(_n_lines_3451.push(d::join(this->_n_out_3387.slice((_n_r_3452*this->_n_cols_3385),((_n_r_3452+1.0)*this->_n_cols_3385)),d::String(u""))));
}}
return d::join(_n_lines_3451,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("butterfly").cols)*ascii::catalog_meta("butterfly").rows);auto _env=std::make_shared<_n_Record_3453>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &butterfly_meta(){return catalog_meta("butterfly");}
std::unique_ptr<Piece> make_butterfly(const AsciiPieceOptions &o){return std::make_unique<Native_butterfly>(o);}
}
