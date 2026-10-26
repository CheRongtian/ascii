// Direct, statically typed C++ from src/pieces/starlings.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30445;
struct _n_Record_30547;
struct _n_Record_30445{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_30445> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30445>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_30547{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_30547> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30547>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_osc_30458(double _a0,double _a1);
std::shared_ptr<_n_Record_30445> _n_meta_30444=[](){return ([&](){auto _n_object_30550=std::make_shared<_n_Record_30445>();_n_object_30550->_p_name=d::String(u"starlings");_n_object_30550->_p_category=d::String(u"creatures");_n_object_30550->_p_note=d::String(u"a murmuration wheeling about, split by a passing falcon");_n_object_30550->_p_cols=64.0;_n_object_30550->_p_rows=16.0;_n_object_30550->_p_fps=30.0;return _n_object_30550;})();}();
const double _n_CW_30446=[](){return 0.6;}();
const double _n_RH_30447=[](){return 1.2;}();
const double _n_N_30448=[](){return 320.0;}();
const double _n_DT_30449=[](){return (1.0/30.0);}();
const double _n_WARM_30450=[](){return 200.0;}();
const double _n_PASS_30451=[](){return 210.0;}();
const double _n_FIRST_30452=[](){return (_n_WARM_30450-10.0);}();
const double _n_R_30453=[](){return 1.6;}();
const double _n_SEP_30454=[](){return 0.85;}();
const double _n_LOOK_30455=[](){return 0.6;}();
const double _n_TURN_30456=[](){return 90.0;}();
const double _n_FLEE_30457=[](){return 4.2;}();
double _n_osc_30458(double _a0,double _a1){double _n_t_30484=_a0;
double _n_p_30485=_a1;
{
double _n_u_30486=(1.0-std::fabs(((2.0*((_n_t_30484/_n_p_30485)-std::floor((_n_t_30484/_n_p_30485))))-1.0)));
return ((((2.0*_n_u_30486)*_n_u_30486)*(3.0-(2.0*_n_u_30486)))-1.0);

}
}

struct Native_starlings final:ascii::Piece{
double _n_cols_30459{};
double _n_rows_30460{};
double _n_W_30461{};
double _n_H_30462{};
double _n_MX_30463{};
double _n_MY_30464{};
double _n_GX_30465{};
double _n_GY_30466{};
double _n_seed_30467{};
d::Array<double,true> _n_x_30469{};
d::Array<double,true> _n_y_30470{};
d::Array<double,true> _n_vx_30471{};
d::Array<double,true> _n_vy_30472{};
d::Array<int32_t,true> _n_head_30473{};
d::Array<int32_t,true> _n_next_30474{};
double _n_k_30475{};
double _n_fx_30476{};
double _n_fy_30477{};
double _n_fd_30478{};
d::Array<uint8_t,true> _n_top_30480{};
d::Array<uint8_t,true> _n_bot_30481{};
d::String _n_RAMP_30482{};
std::function<d::String(double,std::shared_ptr<_n_Record_30547>)> _render;
double _n_rnd_30468(){{
(void)((this->_n_seed_30467=double(d::i32((this->_n_seed_30467+1831565813.0))|d::i32(0.0))));
double _n_z_30487=d::imul(double(d::i32(this->_n_seed_30467)^d::i32(double(d::u32(this->_n_seed_30467)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(this->_n_seed_30467)));
(void)((_n_z_30487=double(d::i32((_n_z_30487+d::imul(double(d::i32(_n_z_30487)^d::i32(double(d::u32(_n_z_30487)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_z_30487)))))^d::i32(_n_z_30487))));
return (double(d::u32(double(d::i32(_n_z_30487)^d::i32(double(d::u32(_n_z_30487)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

void _n_step_30479(){{
double _n_t_30489=(this->_n_k_30475*_n_DT_30449);
double _n_ph_30490=d::mod(((this->_n_k_30475-_n_FIRST_30452)+(_n_PASS_30451*9.0)),_n_PASS_30451);
bool _n_hunting_30491=([&]()->bool{auto _n_logical_30564=((this->_n_k_30475++)>=_n_FIRST_30452);return d::truth(_n_logical_30564)?(_n_ph_30490<90.0):_n_logical_30564;})();
double _n_tx_30492=(this->_n_W_30461*(0.5+(0.12*_n_osc_30458(_n_t_30489,23.0))));
double _n_ty_30493=(this->_n_H_30462*(0.5+(0.1*_n_osc_30458((_n_t_30489+4.0),11.0))));
double _n_cy_30494=0.0;
{double _n_i_30495=0.0;
for(;d::truth((_n_i_30495<_n_N_30448));(void)((_n_i_30495++))){d::check_cancel();(void)((_n_cy_30494=(_n_cy_30494+(d::at(this->_n_y_30470,_n_i_30495)/_n_N_30448))));
}}
if((d::truth(_n_hunting_30491)&&d::truth((_n_ph_30490==0.0)))){d::check_cancel();(void)(([&](){auto _n_unpack_30565=d::Array<double,false>{(-d::number(this->_n_fd_30478)),(d::truth((this->_n_fd_30478<0.0))?(-d::number(2.0)):(this->_n_W_30461+2.0)),_n_cy_30494};this->_n_fd_30478=d::at(_n_unpack_30565,0.0);this->_n_fx_30476=d::at(_n_unpack_30565,1.0);this->_n_fy_30477=d::at(_n_unpack_30565,2.0);return _n_unpack_30565;})());
}
(void)((this->_n_fx_30476=(d::truth(_n_hunting_30491)?(this->_n_fx_30476+((this->_n_fd_30478*20.0)*_n_DT_30449)):d::nan)));
if(d::truth(_n_hunting_30491)){d::check_cancel();(void)((this->_n_fy_30477=(this->_n_fy_30477+(((_n_cy_30494-this->_n_fy_30477)*3.0)*_n_DT_30449))));
}
(void)(this->_n_head_30473.fill((-d::number(1.0))));
{double _n_i_30496=0.0;
for(;d::truth((_n_i_30496<_n_N_30448));(void)((_n_i_30496++))){d::check_cancel();double _n_c_30497=([&](){auto _n_left_30566=(([&](){auto _n_argument_30568=(this->_n_GY_30466-1.0);auto _n_argument_30569=([&](){auto _n_argument_30570=0.0;auto _n_argument_30571=std::floor((d::at(this->_n_y_30470,_n_i_30496)/_n_R_30453));return d::maximum({_n_argument_30570,_n_argument_30571});})();return d::minimum({_n_argument_30568,_n_argument_30569});})()*this->_n_GX_30465);auto _n_right_30567=([&](){auto _n_argument_30572=(this->_n_GX_30465-1.0);auto _n_argument_30573=([&](){auto _n_argument_30574=0.0;auto _n_argument_30575=std::floor((d::at(this->_n_x_30469,_n_i_30496)/_n_R_30453));return d::maximum({_n_argument_30574,_n_argument_30575});})();return d::minimum({_n_argument_30572,_n_argument_30573});})();return (_n_left_30566+_n_right_30567);})();
(void)(([&](){auto&& _n_array_30576=this->_n_next_30474;auto _n_index_30577=_n_i_30496;auto _n_value_30578=d::at(this->_n_head_30473,_n_c_30497);d::put(_n_array_30576,_n_index_30577,_n_value_30578);return _n_value_30578;})());
(void)(([&](){auto&& _n_array_30579=this->_n_head_30473;auto _n_index_30580=_n_c_30497;auto _n_value_30581=_n_i_30496;d::put(_n_array_30579,_n_index_30580,_n_value_30581);return _n_value_30581;})());
}}
{double _n_i_30498=0.0;
for(;d::truth((_n_i_30498<_n_N_30448));(void)((_n_i_30498++))){d::check_cancel();double _n_gx0_30499=std::floor((d::at(this->_n_x_30469,_n_i_30498)/_n_R_30453));
double _n_gy0_30500=std::floor((d::at(this->_n_y_30470,_n_i_30498)/_n_R_30453));
double _n_n_30501=0.0;
double _n_sx_30502=0.0;
double _n_sy_30503=0.0;
double _n_svx_30504=0.0;
double _n_svy_30505=0.0;
double _n_px_30506=0.0;
double _n_py_30507=0.0;
{double _n_gy_30508=d::maximum({0.0,(_n_gy0_30500-1.0)});
for(;d::truth((_n_gy_30508<=d::minimum({(this->_n_GY_30466-1.0),(_n_gy0_30500+1.0)})));(void)((_n_gy_30508++))){d::check_cancel();{double _n_gx_30509=d::maximum({0.0,(_n_gx0_30499-1.0)});
for(;d::truth((_n_gx_30509<=d::minimum({(this->_n_GX_30465-1.0),(_n_gx0_30499+1.0)})));(void)((_n_gx_30509++))){d::check_cancel();{double _n_j_30510=d::at(this->_n_head_30473,((_n_gy_30508*this->_n_GX_30465)+_n_gx_30509));
for(;d::truth((_n_j_30510>=0.0));(void)((_n_j_30510=d::at(this->_n_next_30474,_n_j_30510)))){d::check_cancel();double _n_dx_30511=(d::at(this->_n_x_30469,_n_j_30510)-d::at(this->_n_x_30469,_n_i_30498));
double _n_dy_30512=(d::at(this->_n_y_30470,_n_j_30510)-d::at(this->_n_y_30470,_n_i_30498));
double _n_d2_30513=((_n_dx_30511*_n_dx_30511)+(_n_dy_30512*_n_dy_30512));
if((d::truth((_n_j_30510==_n_i_30498))||d::truth((_n_d2_30513>(_n_R_30453*_n_R_30453))))){d::check_cancel();continue;
}
(void)((_n_n_30501++));
(void)((_n_sx_30502=(_n_sx_30502+_n_dx_30511)));
(void)((_n_sy_30503=(_n_sy_30503+_n_dy_30512)));
(void)((_n_svx_30504=(_n_svx_30504+d::at(this->_n_vx_30471,_n_j_30510))));
(void)((_n_svy_30505=(_n_svy_30505+d::at(this->_n_vy_30472,_n_j_30510))));
if(d::truth((_n_d2_30513<(_n_SEP_30454*_n_SEP_30454)))){d::check_cancel();(void)(((_n_px_30506=(_n_px_30506-(_n_dx_30511/(_n_d2_30513+0.02)))),(_n_py_30507=(_n_py_30507-(_n_dy_30512/(_n_d2_30513+0.02))))));
}
}}
}}
}}
double _n_ax_30514=((_n_tx_30492-d::at(this->_n_x_30469,_n_i_30498))*0.25);
double _n_ay_30515=((_n_ty_30493-d::at(this->_n_y_30470,_n_i_30498))*0.5);
if(d::truth(_n_n_30501)){d::check_cancel();(void)((_n_ax_30514=(_n_ax_30514+(((((_n_svx_30504/_n_n_30501)-d::at(this->_n_vx_30471,_n_i_30498))*3.0)+((_n_sx_30502/_n_n_30501)*0.5))+(_n_px_30506*4.0)))));
(void)((_n_ay_30515=(_n_ay_30515+(((((_n_svy_30505/_n_n_30501)-d::at(this->_n_vy_30472,_n_i_30498))*3.0)+((_n_sy_30503/_n_n_30501)*0.5))+(_n_py_30507*4.0)))));
}
double _n_lx_30516=(((d::at(this->_n_x_30469,_n_i_30498)+(d::at(this->_n_vx_30471,_n_i_30498)*_n_LOOK_30455))-(this->_n_W_30461/2.0))/((this->_n_W_30461/2.0)-this->_n_MX_30463));
double _n_ly_30517=(((d::at(this->_n_y_30470,_n_i_30498)+(d::at(this->_n_vy_30472,_n_i_30498)*_n_LOOK_30455))-(this->_n_H_30462/2.0))/((this->_n_H_30462/2.0)-this->_n_MY_30464));
double _n_out_30518=(d::hypot(std::initializer_list<double>{_n_lx_30516,_n_ly_30517})-0.6);
if(d::truth((_n_out_30518>0.0))){d::check_cancel();double _n_s_30519=d::hypot(std::initializer_list<double>{d::at(this->_n_vx_30471,_n_i_30498),d::at(this->_n_vy_30472,_n_i_30498)});
double _n_side_30520=(d::truth((((d::at(this->_n_vx_30471,_n_i_30498)*((this->_n_H_30462/2.0)-d::at(this->_n_y_30470,_n_i_30498)))-(d::at(this->_n_vy_30472,_n_i_30498)*((this->_n_W_30461/2.0)-d::at(this->_n_x_30469,_n_i_30498))))>0.0))?1.0:(-d::number(1.0)));
(void)((_n_ax_30514=(_n_ax_30514+(((((-d::number(d::at(this->_n_vy_30472,_n_i_30498)))/_n_s_30519)*_n_side_30520)*_n_TURN_30456)*_n_out_30518))));
(void)((_n_ay_30515=(_n_ay_30515+((((d::at(this->_n_vx_30471,_n_i_30498)/_n_s_30519)*_n_side_30520)*_n_TURN_30456)*_n_out_30518))));
}
double _n_top_30521=10.0;
double _n_dx_30522=(d::at(this->_n_x_30469,_n_i_30498)-this->_n_fx_30476);
double _n_dy_30523=(d::at(this->_n_y_30470,_n_i_30498)-this->_n_fy_30477);
double _n_d2_30524=((_n_dx_30522*_n_dx_30522)+(_n_dy_30523*_n_dy_30523));
if(d::truth((_n_d2_30524<(_n_FLEE_30457*_n_FLEE_30457)))){d::check_cancel();(void)((_n_ax_30514=(_n_ax_30514+((_n_dx_30522/(_n_d2_30524+0.4))*90.0))));
(void)((_n_ay_30515=(_n_ay_30515+((_n_dy_30523/(_n_d2_30524+0.4))*90.0))));
(void)((_n_top_30521=15.0));
}
double _n_ux_30525=(d::at(this->_n_vx_30471,_n_i_30498)+(_n_ax_30514*_n_DT_30449));
double _n_uy_30526=(d::at(this->_n_vy_30472,_n_i_30498)+(_n_ay_30515*_n_DT_30449));
double _n_s_30527=std::sqrt(((_n_ux_30525*_n_ux_30525)+(_n_uy_30526*_n_uy_30526)));
double _n_m_30528=(d::truth((_n_s_30527>_n_top_30521))?(_n_top_30521/_n_s_30527):(d::truth((_n_s_30527<5.0))?(5.0/_n_s_30527):1.0));
(void)(([&](){auto&& _n_array_30582=this->_n_vx_30471;auto _n_index_30583=_n_i_30498;auto _n_value_30584=(_n_ux_30525*_n_m_30528);d::put(_n_array_30582,_n_index_30583,_n_value_30584);return _n_value_30584;})());
(void)(([&](){auto&& _n_array_30585=this->_n_vy_30472;auto _n_index_30586=_n_i_30498;auto _n_value_30587=(_n_uy_30526*_n_m_30528);d::put(_n_array_30585,_n_index_30586,_n_value_30587);return _n_value_30587;})());
}}
{double _n_i_30529=0.0;
for(;d::truth((_n_i_30529<_n_N_30448));(void)((_n_i_30529++))){d::check_cancel();(void)((([&](){auto&& _n_array_30588=this->_n_x_30469;auto _n_index_30589=_n_i_30529;auto _n_value_30590=(d::at(_n_array_30588,_n_index_30589)+(d::at(this->_n_vx_30471,_n_i_30529)*_n_DT_30449));d::put(_n_array_30588,_n_index_30589,_n_value_30590);return _n_value_30590;})(),([&](){auto&& _n_array_30591=this->_n_y_30470;auto _n_index_30592=_n_i_30529;auto _n_value_30593=(d::at(_n_array_30591,_n_index_30592)+(d::at(this->_n_vy_30472,_n_i_30529)*_n_DT_30449));d::put(_n_array_30591,_n_index_30592,_n_value_30593);return _n_value_30593;})()));
}}

}
}

d::String _n_draw_30483(){{
(void)(this->_n_top_30480.fill(0.0));
(void)(this->_n_bot_30481.fill(0.0));
{double _n_i_30530=0.0;
for(;d::truth((_n_i_30530<_n_N_30448));(void)((_n_i_30530++))){d::check_cancel();double _n_c_30531=std::floor((d::at(this->_n_x_30469,_n_i_30530)/_n_CW_30446));
double _n_r_30532=std::floor(((d::at(this->_n_y_30470,_n_i_30530)/_n_RH_30447)*2.0));
if((((d::truth((_n_c_30531>=0.0))&&d::truth((_n_c_30531<this->_n_cols_30459)))&&d::truth((_n_r_30532>=0.0)))&&d::truth((_n_r_30532<(this->_n_rows_30460*2.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_30594=(d::truth(double(d::i32(_n_r_30532)&d::i32(1.0)))?this->_n_bot_30481:this->_n_top_30480);auto _n_index_30595=((double(d::i32(_n_r_30532)>>(d::u32(1.0)&31))*this->_n_cols_30459)+_n_c_30531);double _n_old_30596=d::number(d::at(_n_array_30594,_n_index_30595));d::put(_n_array_30594,_n_index_30595,_n_old_30596+(1.0));return _n_old_30596;})());
}
}}
d::Array<d::String,false> _n_lines_30533=d::Array<d::String,false>{};
{double _n_r_30534=0.0;
for(;d::truth((_n_r_30534<this->_n_rows_30460));(void)((_n_r_30534++))){d::check_cancel();d::String _n_line_30535=d::String(u"");
{double _n_c_30536=0.0;
for(;d::truth((_n_c_30536<this->_n_cols_30459));(void)((_n_c_30536++))){d::check_cancel();double _n_i_30537=((_n_r_30534*this->_n_cols_30459)+_n_c_30536);
double _n_n_30538=(d::at(this->_n_top_30480,_n_i_30537)+d::at(this->_n_bot_30481,_n_i_30537));
(void)((_n_line_30535=(d::string(_n_line_30535)+d::string((d::truth((_n_n_30538==1.0))?(d::truth(d::at(this->_n_top_30480,_n_i_30537))?d::String(u"'"):d::String(u".")):d::at(this->_n_RAMP_30482,d::minimum({(double(this->_n_RAMP_30482.size())-1.0),_n_n_30538})))))));
}}
(void)(_n_lines_30533.push(_n_line_30535));
}}
double _n_fc_30539=d::round((this->_n_fx_30476/_n_CW_30446));
double _n_fr_30540=std::floor((this->_n_fy_30477/_n_RH_30447));
if((((d::truth((_n_fc_30539>(-d::number(2.0))))&&d::truth((_n_fc_30539<(this->_n_cols_30459+1.0))))&&d::truth((_n_fr_30540>=0.0)))&&d::truth((_n_fr_30540<this->_n_rows_30460)))){d::check_cancel();d::String _n_bird_30541=(d::truth(double(d::i32(double(d::i32(this->_n_k_30475)>>(d::u32(2.0)&31)))&d::i32(1.0)))?d::String(u"\\v/"):d::String(u"-v-"));
d::Array<d::String,false> _n_row_30542=d::split(d::at(_n_lines_30533,_n_fr_30540),d::String(u""));
{double _n_i_30543=0.0;
for(;d::truth((_n_i_30543<3.0));(void)((_n_i_30543++))){d::check_cancel();if((d::truth((((_n_fc_30539-1.0)+_n_i_30543)>=0.0))&&d::truth((((_n_fc_30539-1.0)+_n_i_30543)<this->_n_cols_30459)))){d::check_cancel();(void)(([&](){auto&& _n_array_30597=_n_row_30542;auto _n_index_30598=((_n_fc_30539-1.0)+_n_i_30543);auto _n_value_30599=d::at(_n_bird_30541,_n_i_30543);d::put(_n_array_30597,_n_index_30598,_n_value_30599);return _n_value_30599;})());
}
}}
(void)(([&](){auto&& _n_array_30600=_n_lines_30533;auto _n_index_30601=_n_fr_30540;auto _n_value_30602=d::join(_n_row_30542,d::String(u""));d::put(_n_array_30600,_n_index_30601,_n_value_30602);return _n_value_30602;})());
}
return d::join(_n_lines_30533,d::String(u"\n"));

}
}

explicit Native_starlings(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30551=_n_meta_30444;
this->_n_cols_30459=_n_binding_30551->_p_cols;
this->_n_rows_30460=_n_binding_30551->_p_rows;
this->_n_W_30461=(this->_n_cols_30459*_n_CW_30446);
this->_n_H_30462=(this->_n_rows_30460*_n_RH_30447);
this->_n_MX_30463=1.5;
this->_n_MY_30464=1.2;
this->_n_GX_30465=std::ceil((this->_n_W_30461/_n_R_30453));
this->_n_GY_30466=std::ceil((this->_n_H_30462/_n_R_30453));
this->_n_seed_30467=26.0;
this->_n_x_30469=d::Array<double,true>(size_t(_n_N_30448));
this->_n_y_30470=d::Array<double,true>(size_t(_n_N_30448));
this->_n_vx_30471=d::Array<double,true>(size_t(_n_N_30448));
this->_n_vy_30472=d::Array<double,true>(size_t(_n_N_30448));
{double _n_i_30488=0.0;
for(;d::truth((_n_i_30488<_n_N_30448));(void)((_n_i_30488++))){d::check_cancel();(void)(([&](){auto&& _n_array_30552=this->_n_x_30469;auto _n_index_30553=_n_i_30488;auto _n_value_30554=(this->_n_W_30461*(0.3+(0.3*this->_n_rnd_30468())));d::put(_n_array_30552,_n_index_30553,_n_value_30554);return _n_value_30554;})());
(void)(([&](){auto&& _n_array_30555=this->_n_y_30470;auto _n_index_30556=_n_i_30488;auto _n_value_30557=(this->_n_H_30462*(0.3+(0.4*this->_n_rnd_30468())));d::put(_n_array_30555,_n_index_30556,_n_value_30557);return _n_value_30557;})());
(void)(([&](){auto&& _n_array_30558=this->_n_vx_30471;auto _n_index_30559=_n_i_30488;auto _n_value_30560=(6.0+(2.0*this->_n_rnd_30468()));d::put(_n_array_30558,_n_index_30559,_n_value_30560);return _n_value_30560;})());
(void)(([&](){auto&& _n_array_30561=this->_n_vy_30472;auto _n_index_30562=_n_i_30488;auto _n_value_30563=((2.0*this->_n_rnd_30468())-1.0);d::put(_n_array_30561,_n_index_30562,_n_value_30563);return _n_value_30563;})());
}}
this->_n_head_30473=d::Array<int32_t,true>(size_t((this->_n_GX_30465*this->_n_GY_30466)));
this->_n_next_30474=d::Array<int32_t,true>(size_t(_n_N_30448));
this->_n_k_30475=0.0;
this->_n_fx_30476=d::nan;
this->_n_fy_30477=0.0;
this->_n_fd_30478=(-d::number(1.0));
while(d::truth((this->_n_k_30475<_n_WARM_30450))){d::check_cancel();(void)(this->_n_step_30479());
}
this->_n_top_30480=d::Array<uint8_t,true>(size_t((this->_n_cols_30459*this->_n_rows_30460)));
this->_n_bot_30481=d::Array<uint8_t,true>(size_t((this->_n_cols_30459*this->_n_rows_30460)));
this->_n_RAMP_30482=d::String(u"  :;+*%%##");
_render=[=]( double _a0,std::shared_ptr<_n_Record_30547> _a1) mutable ->d::String{double _n_t_30544=_a0;
{
double _n_want_30545=(_n_WARM_30450+std::floor(((_n_t_30544/_n_DT_30449)+0.000001)));
{double _n_s_30546=0.0;
for(;(d::truth((_n_s_30546<12.0))&&d::truth((this->_n_k_30475<_n_want_30545)));(void)((_n_s_30546++))){d::check_cancel();(void)(this->_n_step_30479());
}}
return this->_n_draw_30483();

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("starlings").cols)*ascii::catalog_meta("starlings").rows);auto _env=std::make_shared<_n_Record_30547>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &starlings_meta(){return catalog_meta("starlings");}
std::unique_ptr<Piece> make_starlings(const AsciiPieceOptions &o){return std::make_unique<Native_starlings>(o);}
}
