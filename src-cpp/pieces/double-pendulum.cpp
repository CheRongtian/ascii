// Direct, statically typed C++ from src/pieces/double-pendulum.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_8271;
struct _n_Record_8377;
struct _n_Record_8271{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_8271> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8271>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_8377{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_8377> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8377>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_deriv_8280(d::Array<double,false> _a0);
d::Array<double,false> _n_rk4_8281(d::Array<double,false> _a0);
double _n_kinetic_8282(d::Array<double,false> _a0);
double _n_potential_8283(d::Array<double,false> _a0);
std::shared_ptr<_n_Record_8271> _n_meta_8270=[](){return ([&](){auto _n_object_8380=std::make_shared<_n_Record_8271>();_n_object_8380->_p_name=d::String(u"double pendulum");_n_object_8380->_p_category=d::String(u"physics");_n_object_8380->_p_note=d::String(u"a chaotic double pendulum; its tip leaves a fading trail");_n_object_8380->_p_cols=48.0;_n_object_8380->_p_rows=25.0;_n_object_8380->_p_fps=30.0;return _n_object_8380;})();}();
const double _n_G_8272=[](){return 9.81;}();
const double _n_H_8273=[](){return (1.0/240.0);}();
const double _n_SPEED_8274=[](){return 0.6;}();
const double _n_TAP_8275=[](){return 3.0;}();
const double _n_TRAIL_8276=[](){return 110.0;}();
const d::String _n_FADE_8277=[](){return d::String(u"·:+*");}();
d::Array<double,false> _n_START_8278=[](){return d::Array<double,false>{2.55,2.9,0.0,0.0};}();
const double _n_WARM_8279=[](){return 7.0;}();
d::Array<double,false> _n_deriv_8280(d::Array<double,false> _a0){auto _n_binding_8381=_a0;
double _n_a_8302=d::at(_n_binding_8381,0.0);
double _n_b_8303=d::at(_n_binding_8381,1.0);
double _n_p_8304=d::at(_n_binding_8381,2.0);
double _n_q_8305=d::at(_n_binding_8381,3.0);
{
double _n_d_8306=(_n_a_8302-_n_b_8303);
double _n_sd_8307=std::sin(_n_d_8306);
double _n_cd_8308=std::cos(_n_d_8306);
double _n_den_8309=(3.0-std::cos((2.0*_n_d_8306)));
return d::Array<double,false>{_n_p_8304,_n_q_8305,((([&](){auto _n_left_8382=(((-d::number(3.0))*_n_G_8272)*std::sin(_n_a_8302));auto _n_right_8383=(_n_G_8272*std::sin((_n_a_8302-(2.0*_n_b_8303))));return (_n_left_8382-_n_right_8383);})()-((2.0*_n_sd_8307)*((_n_q_8305*_n_q_8305)+((_n_p_8304*_n_p_8304)*_n_cd_8308))))/_n_den_8309),(((2.0*_n_sd_8307)*((((2.0*_n_p_8304)*_n_p_8304)+((2.0*_n_G_8272)*std::cos(_n_a_8302)))+((_n_q_8305*_n_q_8305)*_n_cd_8308)))/_n_den_8309)};

}
}

d::Array<double,false> _n_rk4_8281(d::Array<double,false> _a0){d::Array<double,false> _n_s_8310=_a0;
{
auto _n_add_8311=[&]( d::Array<double,false> _a0,d::Array<double,false> _a1,double _a2) mutable ->d::Array<double,false>{d::Array<double,false> _n_u_8312=_a0;
d::Array<double,false> _n_k_8313=_a1;
double _n_h_8314=_a2;
return d::map(_n_u_8312,[&]( double _a0,double _a1) mutable ->double{double _n_v_8315=_a0;
double _n_i_8316=_a1;
return (_n_v_8315+(d::at(_n_k_8313,_n_i_8316)*_n_h_8314));});};
d::Array<double,false> _n_k1_8317=_n_deriv_8280(_n_s_8310);
d::Array<double,false> _n_k2_8318=_n_deriv_8280(_n_add_8311(_n_s_8310,_n_k1_8317,(_n_H_8273/2.0)));
d::Array<double,false> _n_k3_8319=_n_deriv_8280(_n_add_8311(_n_s_8310,_n_k2_8318,(_n_H_8273/2.0)));
d::Array<double,false> _n_k4_8320=_n_deriv_8280(_n_add_8311(_n_s_8310,_n_k3_8319,_n_H_8273));
return d::map(_n_s_8310,[&]( double _a0,double _a1) mutable ->double{double _n_v_8321=_a0;
double _n_i_8322=_a1;
return (_n_v_8321+((_n_H_8273/6.0)*(((d::at(_n_k1_8317,_n_i_8322)+(2.0*d::at(_n_k2_8318,_n_i_8322)))+(2.0*d::at(_n_k3_8319,_n_i_8322)))+d::at(_n_k4_8320,_n_i_8322))));});

}
}

double _n_kinetic_8282(d::Array<double,false> _a0){auto _n_binding_8384=_a0;
double _n_a_8323=d::at(_n_binding_8384,0.0);
double _n_b_8324=d::at(_n_binding_8384,1.0);
double _n_p_8325=d::at(_n_binding_8384,2.0);
double _n_q_8326=d::at(_n_binding_8384,3.0);
return (((_n_p_8325*_n_p_8325)+((0.5*_n_q_8326)*_n_q_8326))+((_n_p_8325*_n_q_8326)*std::cos((_n_a_8323-_n_b_8324))));}

double _n_potential_8283(d::Array<double,false> _a0){auto _n_binding_8385=_a0;
double _n_a_8327=d::at(_n_binding_8385,0.0);
double _n_b_8328=d::at(_n_binding_8385,1.0);
return ([&](){auto _n_left_8386=(((-d::number(2.0))*_n_G_8272)*std::cos(_n_a_8327));auto _n_right_8387=(_n_G_8272*std::cos(_n_b_8328));return (_n_left_8386-_n_right_8387);})();}

struct Native_double_pendulum final:ascii::Piece{
double _n_cols_8284{};
double _n_rows_8285{};
double _n_cx_8286{};
double _n_cy_8287{};
double _n_SY_8288{};
double _n_SX_8289{};
double _n_E0_8290{};
d::Array<d::String,false> _n_grid_8291{};
d::Array<double,false> _n_s_8292{};
d::Array<std::array<double,2>,false> _n_trail_8293{};
double _n_steps_8294{};
double _n_acc_8295{};
double _n_last_8296{};
std::function<d::String(double,std::shared_ptr<_n_Record_8377>)> _render;
std::array<double,2> _n_tip_8297(d::Array<double,false> _a0){auto _n_binding_8400=_a0;
double _n_a_8329=d::at(_n_binding_8400,0.0);
double _n_b_8330=d::at(_n_binding_8400,1.0);
return std::array<double,2>{(this->_n_cx_8286+(this->_n_SX_8289*([&](){auto _n_left_8401=std::sin(_n_a_8329);auto _n_right_8402=std::sin(_n_b_8330);return (_n_left_8401+_n_right_8402);})())),(this->_n_cy_8287+(this->_n_SY_8288*([&](){auto _n_left_8403=std::cos(_n_a_8329);auto _n_right_8404=std::cos(_n_b_8330);return (_n_left_8403+_n_right_8404);})()))};}

void _n_step_8298(){{
(void)((this->_n_s_8292=_n_rk4_8281(this->_n_s_8292)));
double _n_k_8331=_n_kinetic_8282(this->_n_s_8292);
double _n_room_8332=(this->_n_E0_8290-_n_potential_8283(this->_n_s_8292));
if((d::truth((_n_k_8331>1e-9))&&d::truth((_n_room_8332>0.0)))){d::check_cancel();double _n_f_8333=std::sqrt((_n_room_8332/_n_k_8331));
(void)(([&](){auto&& _n_array_8405=this->_n_s_8292;auto _n_index_8406=2.0;auto _n_value_8407=(d::at(_n_array_8405,_n_index_8406)*_n_f_8333);d::put(_n_array_8405,_n_index_8406,_n_value_8407);return _n_value_8407;})());
(void)(([&](){auto&& _n_array_8408=this->_n_s_8292;auto _n_index_8409=3.0;auto _n_value_8410=(d::at(_n_array_8408,_n_index_8409)*_n_f_8333);d::put(_n_array_8408,_n_index_8409,_n_value_8410);return _n_value_8410;})());
}
if(d::truth((d::mod((++this->_n_steps_8294),_n_TAP_8275)==0.0))){d::check_cancel();(void)(this->_n_trail_8293.push(this->_n_tip_8297(this->_n_s_8292)));
if(d::truth((double(this->_n_trail_8293.size())>_n_TRAIL_8276))){d::check_cancel();(void)(this->_n_trail_8293.shift());
}
}

}
}

void _n_reset_8299(){{
(void)((this->_n_s_8292=_n_START_8278.slice()));
(void)((this->_n_trail_8293=d::Array<std::array<double,2>,false>{}));
(void)((this->_n_steps_8294=0.0));
(void)((this->_n_acc_8295=0.0));
(void)((this->_n_last_8296=0.0));
{double _n_i_8334=0.0;
for(;d::truth((_n_i_8334<(_n_WARM_8279/_n_H_8273)));(void)((_n_i_8334++))){d::check_cancel();(void)(this->_n_step_8298());
}}

}
}

void _n_put_8300(double _a0,double _a1,d::String _a2){double _n_x_8335=_a0;
double _n_y_8336=_a1;
d::String _n_ch_8337=_a2;
{
double _n_c_8338=d::round(_n_x_8335);
double _n_r_8339=d::round(_n_y_8336);
if((((d::truth((_n_c_8338>=0.0))&&d::truth((_n_c_8338<this->_n_cols_8284)))&&d::truth((_n_r_8339>=0.0)))&&d::truth((_n_r_8339<this->_n_rows_8285)))){d::check_cancel();(void)(([&](){auto&& _n_array_8411=this->_n_grid_8291;auto _n_index_8412=((_n_r_8339*this->_n_cols_8284)+_n_c_8338);auto _n_value_8413=_n_ch_8337;d::put(_n_array_8411,_n_index_8412,_n_value_8413);return _n_value_8413;})());
}

}
}

void _n_rod_8301(double _a0,double _a1,double _a2,double _a3){double _n_x0_8340=_a0;
double _n_y0_8341=_a1;
double _n_x1_8342=_a2;
double _n_y1_8343=_a3;
{
double _n_dx_8344=(_n_x1_8342-_n_x0_8340);
double _n_dy_8345=(_n_y1_8343-_n_y0_8341);
bool _n_up_8346=((_n_dx_8344*_n_dy_8345)<0.0);
d::String _n_slash_8347=(d::truth(_n_up_8346)?d::String(u"/"):d::String(u"\\"));
if(d::truth(([&](){auto _n_left_8414=std::fabs(_n_dx_8344);auto _n_right_8415=std::fabs((2.0*_n_dy_8345));return (_n_left_8414>_n_right_8415);})())){d::check_cancel();double _n_c0_8348=d::round(d::minimum({_n_x0_8340,_n_x1_8342}));
double _n_c1_8349=d::round(d::maximum({_n_x0_8340,_n_x1_8342}));
auto _n_row_8350=[&]( double _a0) mutable ->double{double _n_c_8351=_a0;
return std::floor(((_n_y0_8341+((_n_dy_8345*(([&](){auto _n_argument_8416=_n_c1_8349;auto _n_argument_8417=d::maximum({_n_c0_8348,_n_c_8351});return d::minimum({_n_argument_8416,_n_argument_8417});})()-_n_x0_8340))/_n_dx_8344))+0.5));};
{double _n_c_8352=_n_c0_8348;
for(;d::truth((_n_c_8352<=_n_c1_8349));(void)((_n_c_8352++))){d::check_cancel();double _n_r_8353=_n_row_8350(_n_c_8352);
bool _n_first_8354=(_n_row_8350((_n_c_8352-1.0))!=_n_r_8353);
bool _n_end_8355=(_n_row_8350((_n_c_8352+1.0))!=_n_r_8353);
d::String _n_ch_8356=d::String(u"-");
if((d::truth(_n_first_8354)&&d::truth(_n_end_8355))){d::check_cancel();(void)((_n_ch_8356=_n_slash_8347));
}else {d::check_cancel();if(d::truth(_n_first_8354)){d::check_cancel();(void)((_n_ch_8356=(d::truth(_n_up_8346)?d::String(u"_"):(d::truth((_n_row_8350((_n_c_8352+2.0))!=_n_r_8353))?_n_slash_8347:d::String(u"`")))));
}else {d::check_cancel();if(d::truth(_n_end_8355)){d::check_cancel();(void)((_n_ch_8356=(d::truth(_n_up_8346)?(d::truth((_n_row_8350((_n_c_8352-2.0))!=_n_r_8353))?_n_slash_8347:d::String(u"'")):d::String(u"_"))));
}
}
}
(void)(this->_n_put_8300(_n_c_8352,_n_r_8353,_n_ch_8356));
}}
}else {d::check_cancel();bool _n_steep_8357=(std::fabs((_n_dx_8344/_n_dy_8345))<0.6);
{double _n_r_8358=d::round(d::minimum({_n_y0_8341,_n_y1_8343}));
for(;d::truth((_n_r_8358<=d::round(d::maximum({_n_y0_8341,_n_y1_8343}))));(void)((_n_r_8358++))){d::check_cancel();double _n_x_8359=(_n_x0_8340+((_n_dx_8344*(_n_r_8358-_n_y0_8341))/_n_dy_8345));
double _n_c_8360=std::floor((_n_x_8359+0.5));
(void)(([&](){auto _n_argument_8418=_n_c_8360;auto _n_argument_8419=_n_r_8358;auto _n_argument_8420=((d::truth(_n_steep_8357)&&d::truth((std::fabs((_n_x_8359-_n_c_8360))<0.3)))?d::String(u"|"):_n_slash_8347);return this->_n_put_8300(_n_argument_8418,_n_argument_8419,_n_argument_8420);})());
}}
}

}
}

explicit Native_double_pendulum(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_8388=_n_meta_8270;
this->_n_cols_8284=_n_binding_8388->_p_cols;
this->_n_rows_8285=_n_binding_8388->_p_rows;
this->_n_cx_8286=((this->_n_cols_8284-1.0)/2.0);
this->_n_cy_8287=((this->_n_rows_8285-1.0)/2.0);
this->_n_SY_8288=((this->_n_cy_8287-0.6)/2.0);
this->_n_SX_8289=(this->_n_SY_8288*2.0);
this->_n_E0_8290=([&](){auto _n_left_8389=_n_kinetic_8282(_n_START_8278);auto _n_right_8390=_n_potential_8283(_n_START_8278);return (_n_left_8389+_n_right_8390);})();
this->_n_grid_8291=d::Array<d::String,false>(size_t((this->_n_cols_8284*this->_n_rows_8285)));
(void)(this->_n_reset_8299());
_render=[=]( double _a0,std::shared_ptr<_n_Record_8377> _a1) mutable ->d::String{double _n_t_8361=_a0;
{
if(d::truth((_n_t_8361<this->_n_last_8296))){d::check_cancel();(void)(this->_n_reset_8299());
}
(void)((this->_n_acc_8295=(this->_n_acc_8295+(([&](){auto _n_argument_8391=d::maximum({(_n_t_8361-this->_n_last_8296),0.0});auto _n_argument_8392=0.1;return d::minimum({_n_argument_8391,_n_argument_8392});})()*_n_SPEED_8274))));
(void)((this->_n_last_8296=_n_t_8361));
while(d::truth((this->_n_acc_8295>=_n_H_8273))){d::check_cancel();(void)(this->_n_step_8298());
(void)((this->_n_acc_8295=(this->_n_acc_8295-_n_H_8273)));
}
(void)(this->_n_grid_8291.fill(d::String(u" ")));
{double _n_i_8362=1.0;
for(;d::truth((_n_i_8362<double(this->_n_trail_8293.size())));(void)((_n_i_8362++))){d::check_cancel();d::String _n_ch_8363=d::at(_n_FADE_8277,std::floor(((_n_i_8362/double(this->_n_trail_8293.size()))*double(_n_FADE_8277.size()))));
auto _n_binding_8393=d::at(this->_n_trail_8293,(_n_i_8362-1.0));
double _n_x0_8364=d::at(_n_binding_8393,0.0);
double _n_y0_8365=d::at(_n_binding_8393,1.0);
auto _n_binding_8394=d::at(this->_n_trail_8293,_n_i_8362);
double _n_x1_8366=d::at(_n_binding_8394,0.0);
double _n_y1_8367=d::at(_n_binding_8394,1.0);
double _n_n_8368=([&]()->double{auto _n_logical_8395=std::ceil((([&](){auto _n_argument_8396=std::fabs((_n_x1_8366-_n_x0_8364));auto _n_argument_8397=std::fabs((_n_y1_8367-_n_y0_8365));return d::maximum({_n_argument_8396,_n_argument_8397});})()*2.0));return d::truth(_n_logical_8395)?_n_logical_8395:1.0;})();
{double _n_j_8369=0.0;
for(;d::truth((_n_j_8369<_n_n_8368));(void)((_n_j_8369++))){d::check_cancel();(void)(this->_n_put_8300((_n_x0_8364+(((_n_x1_8366-_n_x0_8364)*_n_j_8369)/_n_n_8368)),(_n_y0_8365+(((_n_y1_8367-_n_y0_8365)*_n_j_8369)/_n_n_8368)),_n_ch_8363));
}}
}}
auto _n_binding_8398=this->_n_s_8292;
double _n_a_8370=d::at(_n_binding_8398,0.0);
double _n_x1_8371=(this->_n_cx_8286+(this->_n_SX_8289*std::sin(_n_a_8370)));
double _n_y1_8372=(this->_n_cy_8287+(this->_n_SY_8288*std::cos(_n_a_8370)));
auto _n_binding_8399=this->_n_tip_8297(this->_n_s_8292);
double _n_x2_8373=d::at(_n_binding_8399,0.0);
double _n_y2_8374=d::at(_n_binding_8399,1.0);
(void)(this->_n_rod_8301(this->_n_cx_8286,this->_n_cy_8287,_n_x1_8371,_n_y1_8372));
(void)(this->_n_rod_8301(_n_x1_8371,_n_y1_8372,_n_x2_8373,_n_y2_8374));
(void)(this->_n_put_8300((this->_n_cx_8286-1.0),this->_n_cy_8287,d::String(u"(")));
(void)(this->_n_put_8300(this->_n_cx_8286,this->_n_cy_8287,d::String(u"+")));
(void)(this->_n_put_8300((this->_n_cx_8286+1.0),this->_n_cy_8287,d::String(u")")));
(void)(this->_n_put_8300(_n_x1_8371,_n_y1_8372,d::String(u"o")));
(void)(this->_n_put_8300(_n_x2_8373,_n_y2_8374,d::String(u"@")));
d::Array<d::String,false> _n_lines_8375=d::Array<d::String,false>{};
{double _n_r_8376=0.0;
for(;d::truth((_n_r_8376<this->_n_rows_8285));(void)((_n_r_8376++))){d::check_cancel();(void)(_n_lines_8375.push(d::join(this->_n_grid_8291.slice((_n_r_8376*this->_n_cols_8284),((_n_r_8376+1.0)*this->_n_cols_8284)),d::String(u""))));
}}
return d::join(_n_lines_8375,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("double-pendulum").cols)*ascii::catalog_meta("double-pendulum").rows);auto _env=std::make_shared<_n_Record_8377>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &double_pendulum_meta(){return catalog_meta("double-pendulum");}
std::unique_ptr<Piece> make_double_pendulum(const AsciiPieceOptions &o){return std::make_unique<Native_double_pendulum>(o);}
}
