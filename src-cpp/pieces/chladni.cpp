// Direct, statically typed C++ from src/pieces/chladni.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_4392;
struct _n_Record_4404;
struct _n_Record_4414;
struct _n_Record_4541;
struct _n_Record_4392{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_4392> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4392>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_4404{
d::Array<d::String,false> _p_marks{};
d::Array<double,true> _p_EX{};
d::Array<double,true> _p_EY{};
static std::shared_ptr<_n_Record_4404> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4404>();out->_p_marks=d::decode<d::Array<d::String,false>>(j["marks"]);out->_p_EX=d::decode<d::Array<double,true>>(j["EX"]);out->_p_EY=d::decode<d::Array<double,true>>(j["EY"]);return out;}
};
struct _n_Record_4414{
d::Array<double,true> _p_a{};
d::Array<double,true> _p_b{};
d::Array<int32_t,true> _p_to{};
d::Array<double,true> _p_delay{};
d::Array<double,true> _p_span{};
d::Array<double,true> _p_sway{};
static std::shared_ptr<_n_Record_4414> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4414>();out->_p_a=d::decode<d::Array<double,true>>(j["a"]);out->_p_b=d::decode<d::Array<double,true>>(j["b"]);out->_p_to=d::decode<d::Array<int32_t,true>>(j["to"]);out->_p_delay=d::decode<d::Array<double,true>>(j["delay"]);out->_p_span=d::decode<d::Array<double,true>>(j["span"]);out->_p_sway=d::decode<d::Array<double,true>>(j["sway"]);return out;}
};
struct _n_Record_4541{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_4541> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_4541>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::array<double,3> _n_wave_4401(std::array<double,3> _a0,double _a1,double _a2);
std::function<double()> _n_mulberry32_4402(double _a0);
std::shared_ptr<_n_Record_4404> _n_figure_4403(std::array<double,3> _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_4392> _n_meta_4391=[](){return ([&](){auto _n_object_4544=std::make_shared<_n_Record_4392>();_n_object_4544->_p_name=d::String(u"chladni plate");_n_object_4544->_p_category=d::String(u"physics");_n_object_4544->_p_note=d::String(u"sand travelling to the nodal lines of a ringing plate");_n_object_4544->_p_cols=45.0;_n_object_4544->_p_rows=23.0;_n_object_4544->_p_fps=12.0;return _n_object_4544;})();}();
d::Array<std::array<double,3>,false> _n_MODES_4393=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{1.0,3.0,(-d::number(1.0))},std::array<double,3>{1.0,5.0,(-d::number(1.0))},std::array<double,3>{3.0,5.0,(-d::number(1.0))},std::array<double,3>{3.0,7.0,(-d::number(1.0))},std::array<double,3>{5.0,7.0,(-d::number(1.0))},std::array<double,3>{3.0,7.0,1.0},std::array<double,3>{3.0,5.0,1.0},std::array<double,3>{1.0,5.0,1.0}};}();
const double _n_MOVE_4394=[](){return 2.8;}();
const double _n_HOLD_4395=[](){return 2.2;}();
const double _n_CYCLE_4396=[](){return (_n_MOVE_4394+_n_HOLD_4395);}();
const double _n_START_4397=[](){return ((4.0*_n_CYCLE_4396)-0.2);}();
const double _n_GRAINS_4398=[](){return 1000.0;}();
const double _n_LOOSE_4399=[](){return 0.1;}();
const double _n_P_4400=[](){return ascii::PI;}();
std::array<double,3> _n_wave_4401(std::array<double,3> _a0,double _a1,double _a2){auto _n_binding_4545=_a0;
double _n_n_4418=d::at(_n_binding_4545,0.0);
double _n_m_4419=d::at(_n_binding_4545,1.0);
double _n_s_4420=d::at(_n_binding_4545,2.0);
double _n_x_4421=_a1;
double _n_y_4422=_a2;
{
double _n_a_4423=std::cos(((_n_n_4418*_n_P_4400)*_n_x_4421));
double _n_b_4424=std::cos(((_n_m_4419*_n_P_4400)*_n_y_4422));
double _n_c_4425=std::cos(((_n_m_4419*_n_P_4400)*_n_x_4421));
double _n_d_4426=std::cos(((_n_n_4418*_n_P_4400)*_n_y_4422));
return std::array<double,3>{((_n_a_4423*_n_b_4424)+((_n_s_4420*_n_c_4425)*_n_d_4426)),((-d::number(_n_P_4400))*([&](){auto _n_left_4546=((_n_n_4418*std::sin(((_n_n_4418*_n_P_4400)*_n_x_4421)))*_n_b_4424);auto _n_right_4547=(((_n_s_4420*_n_m_4419)*std::sin(((_n_m_4419*_n_P_4400)*_n_x_4421)))*_n_d_4426);return (_n_left_4546+_n_right_4547);})()),((-d::number(_n_P_4400))*([&](){auto _n_left_4548=((_n_m_4419*_n_a_4423)*std::sin(((_n_m_4419*_n_P_4400)*_n_y_4422)));auto _n_right_4549=(((_n_s_4420*_n_n_4418)*_n_c_4425)*std::sin(((_n_n_4418*_n_P_4400)*_n_y_4422)));return (_n_left_4548+_n_right_4549);})())};

}
}

std::function<double()> _n_mulberry32_4402(double _a0){double _n_a_4427=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_4427=double(d::i32((_n_a_4427+1831565813.0))|d::i32(0.0))));
double _n_t_4428=d::imul(double(d::i32(_n_a_4427)^d::i32(double(d::u32(_n_a_4427)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_4427)));
(void)((_n_t_4428=double(d::i32((_n_t_4428+d::imul(double(d::i32(_n_t_4428)^d::i32(double(d::u32(_n_t_4428)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_4428)))))^d::i32(_n_t_4428))));
return (double(d::u32(double(d::i32(_n_t_4428)^d::i32(double(d::u32(_n_t_4428)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

std::shared_ptr<_n_Record_4404> _n_figure_4403(std::array<double,3> _a0,double _a1,double _a2){auto&& _n_mode_4429=_a0;
double _n_ic_4430=_a1;
double _n_ir_4431=_a2;
{
double _n_N_4432=(_n_ic_4430*_n_ir_4431);
d::Array<double,true> _n_V_4433=d::Array<double,true>(size_t(_n_N_4432));
d::Array<double,true> _n_EX_4434=d::Array<double,true>(size_t(_n_N_4432));
d::Array<double,true> _n_EY_4435=d::Array<double,true>(size_t(_n_N_4432));
{double _n_i_4436=0.0;
for(;d::truth((_n_i_4436<_n_N_4432));(void)((_n_i_4436++))){d::check_cancel();auto _n_binding_4553=([&](){auto _n_argument_4550=_n_mode_4429;auto _n_argument_4551=((d::mod(_n_i_4436,_n_ic_4430)+0.5)/_n_ic_4430);auto _n_argument_4552=((std::floor((_n_i_4436/_n_ic_4430))+0.5)/_n_ir_4431);return _n_wave_4401(_n_argument_4550,_n_argument_4551,_n_argument_4552);})();
double _n_v_4437=d::at(_n_binding_4553,0.0);
double _n_fx_4438=d::at(_n_binding_4553,1.0);
double _n_fy_4439=d::at(_n_binding_4553,2.0);
(void)(((([&](){auto&& _n_array_4554=_n_V_4433;auto _n_index_4555=_n_i_4436;auto _n_value_4556=(d::truth((std::fabs(_n_v_4437)<1e-9))?0.0:_n_v_4437);d::put(_n_array_4554,_n_index_4555,_n_value_4556);return _n_value_4556;})(),([&](){auto&& _n_array_4557=_n_EX_4434;auto _n_index_4558=_n_i_4436;auto _n_value_4559=((_n_fx_4438/_n_ic_4430)/0.6);d::put(_n_array_4557,_n_index_4558,_n_value_4559);return _n_value_4559;})()),([&](){auto&& _n_array_4560=_n_EY_4435;auto _n_index_4561=_n_i_4436;auto _n_value_4562=((_n_fy_4439/_n_ir_4431)/1.2);d::put(_n_array_4560,_n_index_4561,_n_value_4562);return _n_value_4562;})()));
}}
d::Array<d::String,false> _n_marks_4440=d::Array<d::String,false>(size_t(_n_N_4432)).fill(d::String(u""));
d::Array<double,true> _n_at_4441=d::Array<double,true>(size_t(_n_N_4432)).fill(d::nan);
auto _n_slant_4442=[&]( double _a0) mutable ->d::String{double _n_i_4443=_a0;
return (d::truth(((d::at(_n_EX_4434,_n_i_4443)*d::at(_n_EY_4435,_n_i_4443))>0.0))?d::String(u"/"):d::String(u"\\"));};
auto _n_steep_4444=[&]( double _a0,double _a1) mutable ->void{double _n_i_4445=_a0;
double _n_x_4446=_a1;
{
(void)(([&](){auto&& _n_array_4563=_n_at_4441;auto _n_index_4564=_n_i_4445;auto _n_value_4565=_n_x_4446;d::put(_n_array_4563,_n_index_4564,_n_value_4565);return _n_value_4565;})());
(void)(([&](){auto&& _n_array_4566=_n_marks_4440;auto _n_index_4567=_n_i_4445;auto _n_value_4568=(d::truth(([&](){auto _n_left_4569=std::fabs(d::at(_n_EY_4435,_n_i_4445));auto _n_right_4570=(0.4*std::fabs(d::at(_n_EX_4434,_n_i_4445)));return (_n_left_4569>_n_right_4570);})())?_n_slant_4442(_n_i_4445):d::String(u"|"));d::put(_n_array_4566,_n_index_4567,_n_value_4568);return _n_value_4568;})());

}
};
auto _n_flat_4447=[&]( double _a0,double _a1) mutable ->void{double _n_i_4448=_a0;
double _n_oy_4449=_a1;
{
if(d::truth(d::at(_n_marks_4440,_n_i_4448))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_4571=_n_marks_4440;auto _n_index_4572=_n_i_4448;auto _n_value_4573=(d::truth(([&](){auto _n_left_4574=std::fabs(d::at(_n_EX_4434,_n_i_4448));auto _n_right_4575=(0.7*std::fabs(d::at(_n_EY_4435,_n_i_4448)));return (_n_left_4574>_n_right_4575);})())?_n_slant_4442(_n_i_4448):(d::truth((_n_oy_4449<(-d::number(0.22))))?d::String(u"'"):(d::truth((_n_oy_4449<0.14))?d::String(u"-"):(d::truth((_n_oy_4449<0.34))?d::String(u"."):d::String(u"_")))));d::put(_n_array_4571,_n_index_4572,_n_value_4573);return _n_value_4573;})());

}
};
{double _n_i_4450=0.0;
for(;d::truth((_n_i_4450<_n_N_4432));(void)((_n_i_4450++))){d::check_cancel();double _n_c_4451=d::mod(_n_i_4450,_n_ic_4430);
double _n_r_4452=std::floor((_n_i_4450/_n_ic_4430));
if(d::truth((d::at(_n_V_4433,_n_i_4450)==0.0))){d::check_cancel();if(d::truth((d::hypot(std::initializer_list<double>{d::at(_n_EX_4434,_n_i_4450),d::at(_n_EY_4435,_n_i_4450)})<0.000001))){d::check_cancel();(void)(([&](){auto&& _n_array_4576=_n_marks_4440;auto _n_index_4577=_n_i_4450;auto _n_value_4578=(d::truth((std::fabs(d::at(_n_wave_4401(_n_mode_4429,((_n_c_4451+0.85)/_n_ic_4430),((_n_r_4452+0.85)/_n_ir_4431)),0.0))<0.000001))?d::String(u"*"):d::String(u"+"));d::put(_n_array_4576,_n_index_4577,_n_value_4578);return _n_value_4578;})());
}else {d::check_cancel();if(d::truth(([&](){auto _n_left_4579=std::fabs(d::at(_n_EX_4434,_n_i_4450));auto _n_right_4580=std::fabs(d::at(_n_EY_4435,_n_i_4450));return (_n_left_4579>=_n_right_4580);})())){d::check_cancel();(void)(_n_steep_4444(_n_i_4450,(_n_c_4451+0.5)));
}else {d::check_cancel();(void)(_n_flat_4447(_n_i_4450,0.0));
}
}
continue;
}
double _n_j_4453=(_n_i_4450+1.0);
double _n_k_4454=(_n_i_4450+_n_ic_4430);
if(((d::truth((_n_c_4451<(_n_ic_4430-1.0)))&&d::truth(((d::at(_n_V_4433,_n_i_4450)*d::at(_n_V_4433,_n_j_4453))<0.0)))&&d::truth(([&](){auto _n_left_4581=std::fabs((d::at(_n_EX_4434,_n_i_4450)+d::at(_n_EX_4434,_n_j_4453)));auto _n_right_4582=(0.8*std::fabs((d::at(_n_EY_4435,_n_i_4450)+d::at(_n_EY_4435,_n_j_4453))));return (_n_left_4581>=_n_right_4582);})()))){d::check_cancel();double _n_u_4455=(d::at(_n_V_4433,_n_i_4450)/(d::at(_n_V_4433,_n_i_4450)-d::at(_n_V_4433,_n_j_4453)));
(void)(_n_steep_4444((d::truth((_n_u_4455<0.5))?_n_i_4450:_n_j_4453),((_n_c_4451+0.5)+_n_u_4455)));
}
if(((d::truth((_n_r_4452<(_n_ir_4431-1.0)))&&d::truth(((d::at(_n_V_4433,_n_i_4450)*d::at(_n_V_4433,_n_k_4454))<0.0)))&&d::truth(([&](){auto _n_left_4583=std::fabs((d::at(_n_EY_4435,_n_i_4450)+d::at(_n_EY_4435,_n_k_4454)));auto _n_right_4584=(0.8*std::fabs((d::at(_n_EX_4434,_n_i_4450)+d::at(_n_EX_4434,_n_k_4454))));return (_n_left_4583>=_n_right_4584);})()))){d::check_cancel();double _n_u_4456=(d::at(_n_V_4433,_n_i_4450)/(d::at(_n_V_4433,_n_i_4450)-d::at(_n_V_4433,_n_k_4454)));
(void)((d::truth((_n_u_4456<0.5))?_n_flat_4447(_n_i_4450,_n_u_4456):_n_flat_4447(_n_k_4454,(_n_u_4456-1.0))));
}
}}
auto _n_near_4457=[&]( double _a0,double _a1) mutable ->double{double _n_r_4458=_a0;
double _n_x_4459=_a1;
{
{double _n_c_4460=(std::floor(_n_x_4459)-1.0);
for(;d::truth((_n_c_4460<=(std::floor(_n_x_4459)+1.0)));(void)((_n_c_4460++))){d::check_cancel();if(((((d::truth((_n_r_4458>=0.0))&&d::truth((_n_r_4458<_n_ir_4431)))&&d::truth((_n_c_4460>=0.0)))&&d::truth((_n_c_4460<_n_ic_4430)))&&d::truth((d::at(_n_at_4441,((_n_r_4458*_n_ic_4430)+_n_c_4460))==d::at(_n_at_4441,((_n_r_4458*_n_ic_4430)+_n_c_4460)))))){d::check_cancel();return d::at(_n_at_4441,((_n_r_4458*_n_ic_4430)+_n_c_4460));
}
}}
return d::nan;

}
};
{double _n_i_4461=0.0;
for(;d::truth((_n_i_4461<_n_N_4432));(void)((_n_i_4461++))){d::check_cancel();if(d::truth((d::at(_n_marks_4440,_n_i_4461)!=d::String(u"|")))){d::check_cancel();continue;
}
double _n_r_4462=std::floor((_n_i_4461/_n_ic_4430));
double _n_bow_4463=(d::at(_n_at_4441,_n_i_4461)-(([&](){auto _n_left_4585=_n_near_4457((_n_r_4462-1.0),d::at(_n_at_4441,_n_i_4461));auto _n_right_4586=_n_near_4457((_n_r_4462+1.0),d::at(_n_at_4441,_n_i_4461));return (_n_left_4585+_n_right_4586);})()/2.0));
if(d::truth((_n_bow_4463>0.2))){d::check_cancel();(void)(([&](){auto&& _n_array_4587=_n_marks_4440;auto _n_index_4588=_n_i_4461;auto _n_value_4589=d::String(u")");d::put(_n_array_4587,_n_index_4588,_n_value_4589);return _n_value_4589;})());
}else {d::check_cancel();if(d::truth((_n_bow_4463<(-d::number(0.2))))){d::check_cancel();(void)(([&](){auto&& _n_array_4590=_n_marks_4440;auto _n_index_4591=_n_i_4461;auto _n_value_4592=d::String(u"(");d::put(_n_array_4590,_n_index_4591,_n_value_4592);return _n_value_4592;})());
}
}
}}
return ([&](){auto _n_object_4594=std::make_shared<_n_Record_4404>();_n_object_4594->_p_marks=_n_marks_4440;_n_object_4594->_p_EX=_n_EX_4434;_n_object_4594->_p_EY=_n_EY_4435;return _n_object_4594;})();

}
}

struct Native_chladni final:ascii::Piece{
double _n_cols_4405{};
double _n_rows_4406{};
double _n_IC_4407{};
double _n_IR_4408{};
double _n_N_4409{};
std::function<double()> _n_rnd_4410{};
d::Array<std::shared_ptr<_n_Record_4404>,false> _n_figs_4411{};
d::Array<d::Array<double,true>,false> _n_rest_4412{};
d::Array<std::shared_ptr<_n_Record_4414>,false> _n_trips_4413{};
d::Array<uint16_t,true> _n_lying_4415{};
d::Array<uint16_t,true> _n_landed_4416{};
d::Array<uint16_t,true> _n_all_4417{};
std::function<d::String(double,std::shared_ptr<_n_Record_4541>)> _render;

explicit Native_chladni(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_4595=_n_meta_4391;
this->_n_cols_4405=_n_binding_4595->_p_cols;
this->_n_rows_4406=_n_binding_4595->_p_rows;
this->_n_IC_4407=(this->_n_cols_4405-2.0);
this->_n_IR_4408=(this->_n_rows_4406-2.0);
this->_n_N_4409=(this->_n_IC_4407*this->_n_IR_4408);
this->_n_rnd_4410=_n_mulberry32_4402(18.0);
this->_n_figs_4411=d::map(_n_MODES_4393,[&]( std::array<double,3> _a0) mutable ->std::shared_ptr<_n_Record_4404>{auto&& _n_m_4464=_a0;
return _n_figure_4403(_n_m_4464,this->_n_IC_4407,this->_n_IR_4408);});
this->_n_rest_4412=d::map(this->_n_figs_4411,[&]( std::shared_ptr<_n_Record_4404> _a0) mutable ->d::Array<double,true>{auto _n_binding_4596=_a0;
d::Array<d::String,false> _n_marks_4465=_n_binding_4596->_p_marks;
d::Array<double,true> _n_EX_4466=_n_binding_4596->_p_EX;
d::Array<double,true> _n_EY_4467=_n_binding_4596->_p_EY;
{
d::Array<double,false> _n_on_4468=d::Array<double,false>{};
(void)(d::forEach(_n_marks_4465,[&]( d::String _a0,double _a1) mutable ->std::variant<double,d::String>{d::String _n_m_4469=_a0;
double _n_i_4470=_a1;
return ([&]()->std::variant<double,d::String>{auto _n_logical_4597=_n_m_4469;return d::truth(_n_logical_4597)?std::variant<double,d::String>(_n_on_4468.push(_n_i_4470)):std::variant<double,d::String>(_n_logical_4597);})();}));
{double _n_i_4471=(double(_n_on_4468.size())-1.0);
for(;d::truth((_n_i_4471>0.0));(void)((_n_i_4471--))){d::check_cancel();double _n_j_4472=std::floor((this->_n_rnd_4410()*(_n_i_4471+1.0)));
(void)(([&](){auto _n_unpack_4598=std::array<double,2>{d::at(_n_on_4468,_n_j_4472),d::at(_n_on_4468,_n_i_4471)};d::put(_n_on_4468,_n_i_4471,d::at(_n_unpack_4598,0.0));d::put(_n_on_4468,_n_j_4472,d::at(_n_unpack_4598,1.0));return _n_unpack_4598;})());
}}
d::Array<double,true> _n_xy_4473=d::Array<double,true>(size_t((2.0*_n_GRAINS_4398)));
{double _n_g_4474=0.0;
for(;d::truth((_n_g_4474<_n_GRAINS_4398));(void)((_n_g_4474++))){d::check_cancel();bool _n_loose_4475=(this->_n_rnd_4410()<_n_LOOSE_4399);
double _n_i_4476=(d::truth(_n_loose_4475)?d::at(_n_on_4468,std::floor((this->_n_rnd_4410()*double(_n_on_4468.size())))):d::at(_n_on_4468,d::mod(_n_g_4474,double(_n_on_4468.size()))));
double _n_c_4477=d::mod(_n_i_4476,this->_n_IC_4407);
double _n_r_4478=std::floor((_n_i_4476/this->_n_IC_4407));
if(d::truth(_n_loose_4475)){d::check_cancel();double _n_ex_4479=d::at(_n_EX_4466,_n_i_4476);
double _n_ey_4480=d::at(_n_EY_4467,_n_i_4476);
double _n_side_4481=(d::truth((this->_n_rnd_4410()<0.5))?(-d::number(1.0)):1.0);
if(d::truth(([&](){auto _n_left_4599=std::fabs(_n_ex_4479);auto _n_right_4600=std::fabs(_n_ey_4480);return (_n_left_4599>=_n_right_4600);})())){d::check_cancel();(void)((_n_c_4477=(_n_c_4477+_n_side_4481)));
}else {d::check_cancel();(void)((_n_r_4478=(_n_r_4478+_n_side_4481)));
}
if((d::truth(([&](){auto _n_left_4601=std::fabs(_n_ex_4479);auto _n_right_4602=(0.4*std::fabs(_n_ey_4480));return (_n_left_4601>_n_right_4602);})())&&d::truth(([&](){auto _n_left_4603=std::fabs(_n_ey_4480);auto _n_right_4604=(0.4*std::fabs(_n_ex_4479));return (_n_left_4603>_n_right_4604);})()))){d::check_cancel();(void)(((_n_c_4477=(_n_c_4477+_n_side_4481)),(_n_r_4478=(_n_r_4478-(_n_side_4481*d::sign((_n_ex_4479*_n_ey_4480)))))));
}
(void)((_n_c_4477=([&](){auto _n_argument_4605=(this->_n_IC_4407-1.0);auto _n_argument_4606=d::maximum({0.0,_n_c_4477});return d::minimum({_n_argument_4605,_n_argument_4606});})()));
(void)((_n_r_4478=([&](){auto _n_argument_4607=(this->_n_IR_4408-1.0);auto _n_argument_4608=d::maximum({0.0,_n_r_4478});return d::minimum({_n_argument_4607,_n_argument_4608});})()));
}
(void)(([&](){auto&& _n_array_4609=_n_xy_4473;auto _n_index_4610=(2.0*_n_g_4474);auto _n_value_4611=((_n_c_4477+0.15)+(0.7*this->_n_rnd_4410()));d::put(_n_array_4609,_n_index_4610,_n_value_4611);return _n_value_4611;})());
(void)(([&](){auto&& _n_array_4612=_n_xy_4473;auto _n_index_4613=((2.0*_n_g_4474)+1.0);auto _n_value_4614=((_n_r_4478+0.15)+(0.7*this->_n_rnd_4410()));d::put(_n_array_4612,_n_index_4613,_n_value_4614);return _n_value_4614;})());
}}
return _n_xy_4473;

}
});
this->_n_trips_4413=d::map(_n_MODES_4393,[&]( std::array<double,3> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_4414>{auto&& _n___4482=_a0;
double _n_k_4483=_a1;
{
d::Array<double,true> _n_a_4484=d::at(this->_n_rest_4412,d::mod(((_n_k_4483+double(_n_MODES_4393.size()))-1.0),double(_n_MODES_4393.size())));
d::Array<double,true> _n_b_4485=d::at(this->_n_rest_4412,_n_k_4483);
d::Array<int32_t,true> _n_to_4486=d::Array<int32_t,true>(size_t(_n_GRAINS_4398));
d::Array<uint8_t,true> _n_free_4487=d::Array<uint8_t,true>(size_t(_n_GRAINS_4398)).fill(1.0);
d::Array<double,false> _n_order_4488=d::Array<double,false>(d::from(_n_GRAINS_4398,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_g_4490=_a1;
return _n_g_4490;}));
{double _n_g_4491=(_n_GRAINS_4398-1.0);
for(;d::truth((_n_g_4491>0.0));(void)((_n_g_4491--))){d::check_cancel();double _n_j_4492=std::floor((this->_n_rnd_4410()*(_n_g_4491+1.0)));
(void)(([&](){auto _n_unpack_4615=std::array<double,2>{d::at(_n_order_4488,_n_j_4492),d::at(_n_order_4488,_n_g_4491)};d::put(_n_order_4488,_n_g_4491,d::at(_n_unpack_4615,0.0));d::put(_n_order_4488,_n_j_4492,d::at(_n_unpack_4615,1.0));return _n_unpack_4615;})());
}}
for(auto &&_n_item_4616:_n_order_4488){d::check_cancel();double _n_g_4493=_n_item_4616;
{
double _n_best_4494=(-d::number(1.0));
double _n_bd_4495=INFINITY;
{double _n_h_4496=0.0;
for(;d::truth((_n_h_4496<_n_GRAINS_4398));(void)((_n_h_4496++))){d::check_cancel();if(d::truth((!d::truth(d::at(_n_free_4487,_n_h_4496))))){d::check_cancel();continue;
}
double _n_dx_4497=((d::at(_n_b_4485,(2.0*_n_h_4496))-d::at(_n_a_4484,(2.0*_n_g_4493)))*0.6);
double _n_dy_4498=((d::at(_n_b_4485,((2.0*_n_h_4496)+1.0))-d::at(_n_a_4484,((2.0*_n_g_4493)+1.0)))*1.2);
double _n_d_4499=((_n_dx_4497*_n_dx_4497)+(_n_dy_4498*_n_dy_4498));
if(d::truth((_n_d_4499<_n_bd_4495))){d::check_cancel();(void)(((_n_bd_4495=_n_d_4499),(_n_best_4494=_n_h_4496)));
}
}}
(void)(([&](){auto&& _n_array_4617=_n_free_4487;auto _n_index_4618=_n_best_4494;auto _n_value_4619=0.0;d::put(_n_array_4617,_n_index_4618,_n_value_4619);return _n_value_4619;})());
(void)(([&](){auto&& _n_array_4620=_n_to_4486;auto _n_index_4621=_n_g_4493;auto _n_value_4622=_n_best_4494;d::put(_n_array_4620,_n_index_4621,_n_value_4622);return _n_value_4622;})());

}
}
d::Array<double,true> _n_delay_4500=d::Array<double,true>(size_t(_n_GRAINS_4398));
d::Array<double,true> _n_span_4501=d::Array<double,true>(size_t(_n_GRAINS_4398));
d::Array<double,true> _n_sway_4502=d::Array<double,true>(size_t(_n_GRAINS_4398));
{double _n_g_4503=0.0;
for(;d::truth((_n_g_4503<_n_GRAINS_4398));(void)((_n_g_4503++))){d::check_cancel();double _n_shake_4504=([&](){auto _n_argument_4623=1.0;auto _n_argument_4624=(std::fabs(d::at(_n_wave_4401(d::at(_n_MODES_4393,_n_k_4483),(d::at(_n_a_4484,(2.0*_n_g_4503))/this->_n_IC_4407),(d::at(_n_a_4484,((2.0*_n_g_4503)+1.0))/this->_n_IR_4408)),0.0))/0.9);return d::minimum({_n_argument_4623,_n_argument_4624});})();
double _n_len_4505=d::hypot(std::initializer_list<double>{((d::at(_n_b_4485,(2.0*d::at(_n_to_4486,_n_g_4503)))-d::at(_n_a_4484,(2.0*_n_g_4503)))*0.6),((d::at(_n_b_4485,((2.0*d::at(_n_to_4486,_n_g_4503))+1.0))-d::at(_n_a_4484,((2.0*_n_g_4503)+1.0)))*1.2)});
(void)(([&](){auto&& _n_array_4625=_n_delay_4500;auto _n_index_4626=_n_g_4503;auto _n_value_4627=((0.15+(0.8*(1.0-_n_shake_4504)))+(0.3*this->_n_rnd_4410()));d::put(_n_array_4625,_n_index_4626,_n_value_4627);return _n_value_4627;})());
(void)(([&](){auto&& _n_array_4628=_n_span_4501;auto _n_index_4629=_n_g_4503;auto _n_value_4630=(d::truth((_n_len_4505<0.8))?0.000001:([&](){auto _n_argument_4631=((_n_MOVE_4394-0.2)-d::at(_n_delay_4500,_n_g_4503));auto _n_argument_4632=((0.35+(0.16*_n_len_4505))+(0.2*this->_n_rnd_4410()));return d::minimum({_n_argument_4631,_n_argument_4632});})());d::put(_n_array_4628,_n_index_4629,_n_value_4630);return _n_value_4630;})());
(void)(([&](){auto&& _n_array_4633=_n_sway_4502;auto _n_index_4634=_n_g_4503;auto _n_value_4635=((this->_n_rnd_4410()-0.5)*1.6);d::put(_n_array_4633,_n_index_4634,_n_value_4635);return _n_value_4635;})());
}}
return ([&](){auto _n_object_4637=std::make_shared<_n_Record_4414>();_n_object_4637->_p_a=_n_a_4484;_n_object_4637->_p_b=_n_b_4485;_n_object_4637->_p_to=_n_to_4486;_n_object_4637->_p_delay=_n_delay_4500;_n_object_4637->_p_span=_n_span_4501;_n_object_4637->_p_sway=_n_sway_4502;return _n_object_4637;})();

}
});
this->_n_lying_4415=d::Array<uint16_t,true>(size_t(this->_n_N_4409));
this->_n_landed_4416=d::Array<uint16_t,true>(size_t(this->_n_N_4409));
this->_n_all_4417=d::Array<uint16_t,true>(size_t(this->_n_N_4409));
_render=[=]( double _a0,std::shared_ptr<_n_Record_4541> _a1) mutable ->d::String{double _n_t_4506=_a0;
{
double _n_tt_4507=(_n_START_4397+_n_t_4506);
double _n_n_4508=std::floor((_n_tt_4507/_n_CYCLE_4396));
double _n_tau_4509=(_n_tt_4507-(_n_n_4508*_n_CYCLE_4396));
double _n_k_4510=d::mod(_n_n_4508,double(_n_MODES_4393.size()));
auto _n_binding_4638=d::at(this->_n_trips_4413,_n_k_4510);
d::Array<double,true> _n_a_4511=_n_binding_4638->_p_a;
d::Array<double,true> _n_b_4512=_n_binding_4638->_p_b;
d::Array<int32_t,true> _n_to_4513=_n_binding_4638->_p_to;
d::Array<double,true> _n_delay_4514=_n_binding_4638->_p_delay;
d::Array<double,true> _n_span_4515=_n_binding_4638->_p_span;
d::Array<double,true> _n_sway_4516=_n_binding_4638->_p_sway;
(void)(((this->_n_lying_4415.fill(0.0),this->_n_landed_4416.fill(0.0)),this->_n_all_4417.fill(0.0)));
{double _n_g_4517=0.0;
for(;d::truth((_n_g_4517<_n_GRAINS_4398));(void)((_n_g_4517++))){d::check_cancel();double _n_u_4518=([&](){auto _n_argument_4639=1.0;auto _n_argument_4640=d::maximum({0.0,((_n_tau_4509-d::at(_n_delay_4514,_n_g_4517))/d::at(_n_span_4515,_n_g_4517))});return d::minimum({_n_argument_4639,_n_argument_4640});})();
double _n_e_4519=((_n_u_4518*_n_u_4518)*(3.0-(2.0*_n_u_4518)));
double _n_x0_4520=d::at(_n_a_4511,(2.0*_n_g_4517));
double _n_y0_4521=d::at(_n_a_4511,((2.0*_n_g_4517)+1.0));
double _n_x1_4522=d::at(_n_b_4512,(2.0*d::at(_n_to_4513,_n_g_4517)));
double _n_y1_4523=d::at(_n_b_4512,((2.0*d::at(_n_to_4513,_n_g_4517))+1.0));
double _n_dx_4524=(_n_x1_4522-_n_x0_4520);
double _n_dy_4525=(_n_y1_4523-_n_y0_4521);
double _n_len_4526=(d::hypot(std::initializer_list<double>{_n_dx_4524,_n_dy_4525})+1e-9);
double _n_s_4527=([&](){auto _n_left_4641=(d::at(_n_sway_4516,_n_g_4517)*std::sin((_n_P_4400*_n_e_4519)));auto _n_right_4642=d::minimum({1.0,(_n_len_4526/3.0)});return (_n_left_4641*_n_right_4642);})();
double _n_x_4528=((_n_x0_4520+(_n_dx_4524*_n_e_4519))-(((_n_dy_4525/_n_len_4526)*_n_s_4527)*0.5));
double _n_y_4529=((_n_y0_4521+(_n_dy_4525*_n_e_4519))+(((_n_dx_4524/_n_len_4526)*_n_s_4527)*0.25));
double _n_c_4530=([&](){auto _n_argument_4643=(this->_n_IC_4407-1.0);auto _n_argument_4644=([&](){auto _n_argument_4645=0.0;auto _n_argument_4646=std::floor(_n_x_4528);return d::maximum({_n_argument_4645,_n_argument_4646});})();return d::minimum({_n_argument_4643,_n_argument_4644});})();
double _n_r_4531=([&](){auto _n_argument_4647=(this->_n_IR_4408-1.0);auto _n_argument_4648=([&](){auto _n_argument_4649=0.0;auto _n_argument_4650=std::floor(_n_y_4529);return d::maximum({_n_argument_4649,_n_argument_4650});})();return d::minimum({_n_argument_4647,_n_argument_4648});})();
double _n_i_4532=((_n_r_4531*this->_n_IC_4407)+_n_c_4530);
(void)(([&](){auto&& _n_array_4651=this->_n_all_4417;auto _n_index_4652=_n_i_4532;double _n_old_4653=d::number(d::at(_n_array_4651,_n_index_4652));d::put(_n_array_4651,_n_index_4652,_n_old_4653+(1.0));return _n_old_4653;})());
if(d::truth((_n_u_4518==0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_4654=this->_n_lying_4415;auto _n_index_4655=_n_i_4532;double _n_old_4656=d::number(d::at(_n_array_4654,_n_index_4655));d::put(_n_array_4654,_n_index_4655,_n_old_4656+(1.0));return _n_old_4656;})());
}else {d::check_cancel();if(d::truth((_n_u_4518==1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_4657=this->_n_landed_4416;auto _n_index_4658=_n_i_4532;double _n_old_4659=d::number(d::at(_n_array_4657,_n_index_4658));d::put(_n_array_4657,_n_index_4658,_n_old_4659+(1.0));return _n_old_4659;})());
}
}
}}
d::Array<d::String,false> _n_was_4533=d::at(this->_n_figs_4411,d::mod(((_n_k_4510+double(_n_MODES_4393.size()))-1.0),double(_n_MODES_4393.size())))->_p_marks;
d::Array<d::String,false> _n_is_4534=d::at(this->_n_figs_4411,_n_k_4510)->_p_marks;
d::Array<d::String,false> _n_lines_4535=d::Array<d::String,false>{(d::string((d::string(d::String(u"┌"))+d::string(d::repeat(d::String(u"─"),this->_n_IC_4407))))+d::string(d::String(u"┐")))};
{double _n_r_4536=0.0;
for(;d::truth((_n_r_4536<this->_n_IR_4408));(void)((_n_r_4536++))){d::check_cancel();d::String _n_row_4537=d::String(u"│");
{double _n_c_4538=0.0;
for(;d::truth((_n_c_4538<this->_n_IC_4407));(void)((_n_c_4538++))){d::check_cancel();double _n_i_4539=((_n_r_4536*this->_n_IC_4407)+_n_c_4538);
double _n_q_4540=d::at(this->_n_all_4417,_n_i_4539);
(void)((_n_row_4537=(d::string(_n_row_4537)+d::string(([&]()->d::String{auto _n_logical_4660=([&]()->std::variant<d::String,double>{auto _n_logical_4661=([&]()->std::variant<d::String,double>{auto _n_logical_4663=d::at(this->_n_landed_4416,_n_i_4539);return d::truth(_n_logical_4663)?std::variant<d::String,double>(d::at(_n_is_4534,_n_i_4539)):std::variant<d::String,double>(_n_logical_4663);})();return d::truth(_n_logical_4661)?_n_logical_4661:([&]()->std::variant<d::String,double>{auto _n_logical_4662=d::at(this->_n_lying_4415,_n_i_4539);return d::truth(_n_logical_4662)?std::variant<d::String,double>(d::at(_n_was_4533,_n_i_4539)):std::variant<d::String,double>(_n_logical_4662);})();})();return d::truth(_n_logical_4660)?std::get<d::String>(_n_logical_4660):(d::truth((_n_q_4540==0.0))?d::String(u" "):(d::truth((_n_q_4540<3.0))?d::String(u"·"):d::String(u":")));})()))));
}}
(void)(_n_lines_4535.push((d::string(_n_row_4537)+d::string(d::String(u"│")))));
}}
(void)(_n_lines_4535.push((d::string((d::string(d::String(u"└"))+d::string(d::repeat(d::String(u"─"),this->_n_IC_4407))))+d::string(d::String(u"┘")))));
return d::join(_n_lines_4535,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("chladni").cols)*ascii::catalog_meta("chladni").rows);auto _env=std::make_shared<_n_Record_4541>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &chladni_meta(){return catalog_meta("chladni");}
std::unique_ptr<Piece> make_chladni(const AsciiPieceOptions &o){return std::make_unique<Native_chladni>(o);}
}
