// Direct, statically typed C++ from src/pieces/starlings.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30446;
struct _n_Record_30548;
struct _n_Record_30446{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_30446> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30446>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_30548{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_30548> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30548>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_osc_30459(double _a0,double _a1);
std::shared_ptr<_n_Record_30446> _n_meta_30445=[](){return ([&](){auto _n_object_30551=std::make_shared<_n_Record_30446>();_n_object_30551->_p_name=d::String(u"starlings");_n_object_30551->_p_category=d::String(u"creatures");_n_object_30551->_p_note=d::String(u"a murmuration wheeling about, split by a passing falcon");_n_object_30551->_p_cols=64.0;_n_object_30551->_p_rows=16.0;_n_object_30551->_p_fps=30.0;return _n_object_30551;})();}();
const double _n_CW_30447=[](){return 0.6;}();
const double _n_RH_30448=[](){return 1.2;}();
const double _n_N_30449=[](){return 320.0;}();
const double _n_DT_30450=[](){return (1.0/30.0);}();
const double _n_WARM_30451=[](){return 200.0;}();
const double _n_PASS_30452=[](){return 210.0;}();
const double _n_FIRST_30453=[](){return (_n_WARM_30451-10.0);}();
const double _n_R_30454=[](){return 1.6;}();
const double _n_SEP_30455=[](){return 0.85;}();
const double _n_LOOK_30456=[](){return 0.6;}();
const double _n_TURN_30457=[](){return 90.0;}();
const double _n_FLEE_30458=[](){return 4.2;}();
double _n_osc_30459(double _a0,double _a1){double _n_t_30485=_a0;
double _n_p_30486=_a1;
{
double _n_u_30487=(1.0-std::fabs(((2.0*((_n_t_30485/_n_p_30486)-std::floor((_n_t_30485/_n_p_30486))))-1.0)));
return ((((2.0*_n_u_30487)*_n_u_30487)*(3.0-(2.0*_n_u_30487)))-1.0);

}
}

struct Native_starlings final:ascii::Piece{
double _n_cols_30460{};
double _n_rows_30461{};
double _n_W_30462{};
double _n_H_30463{};
double _n_MX_30464{};
double _n_MY_30465{};
double _n_GX_30466{};
double _n_GY_30467{};
double _n_seed_30468{};
d::Array<double,true> _n_x_30470{};
d::Array<double,true> _n_y_30471{};
d::Array<double,true> _n_vx_30472{};
d::Array<double,true> _n_vy_30473{};
d::Array<int32_t,true> _n_head_30474{};
d::Array<int32_t,true> _n_next_30475{};
double _n_k_30476{};
double _n_fx_30477{};
double _n_fy_30478{};
double _n_fd_30479{};
d::Array<uint8_t,true> _n_top_30481{};
d::Array<uint8_t,true> _n_bot_30482{};
d::String _n_RAMP_30483{};
std::function<d::String(double,std::shared_ptr<_n_Record_30548>)> _render;
double _n_rnd_30469(){{
(void)((this->_n_seed_30468=double(d::i32((this->_n_seed_30468+1831565813.0))|d::i32(0.0))));
double _n_z_30488=d::imul(double(d::i32(this->_n_seed_30468)^d::i32(double(d::u32(this->_n_seed_30468)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(this->_n_seed_30468)));
(void)((_n_z_30488=double(d::i32((_n_z_30488+d::imul(double(d::i32(_n_z_30488)^d::i32(double(d::u32(_n_z_30488)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_z_30488)))))^d::i32(_n_z_30488))));
return (double(d::u32(double(d::i32(_n_z_30488)^d::i32(double(d::u32(_n_z_30488)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

void _n_step_30480(){{
double _n_t_30490=(this->_n_k_30476*_n_DT_30450);
double _n_ph_30491=d::mod(((this->_n_k_30476-_n_FIRST_30453)+(_n_PASS_30452*9.0)),_n_PASS_30452);
bool _n_hunting_30492=([&]()->bool{auto _n_logical_30565=((this->_n_k_30476++)>=_n_FIRST_30453);return d::truth(_n_logical_30565)?(_n_ph_30491<90.0):_n_logical_30565;})();
double _n_tx_30493=(this->_n_W_30462*(0.5+(0.12*_n_osc_30459(_n_t_30490,23.0))));
double _n_ty_30494=(this->_n_H_30463*(0.5+(0.1*_n_osc_30459((_n_t_30490+4.0),11.0))));
double _n_cy_30495=0.0;
{double _n_i_30496=0.0;
for(;d::truth((_n_i_30496<_n_N_30449));(void)((_n_i_30496++))){d::check_cancel();(void)((_n_cy_30495=(_n_cy_30495+(d::at(this->_n_y_30471,_n_i_30496)/_n_N_30449))));
}}
if((d::truth(_n_hunting_30492)&&d::truth((_n_ph_30491==0.0)))){d::check_cancel();(void)(([&](){auto _n_unpack_30566=std::array<double,3>{(-d::number(this->_n_fd_30479)),(d::truth((this->_n_fd_30479<0.0))?(-d::number(2.0)):(this->_n_W_30462+2.0)),_n_cy_30495};this->_n_fd_30479=d::at(_n_unpack_30566,0.0);this->_n_fx_30477=d::at(_n_unpack_30566,1.0);this->_n_fy_30478=d::at(_n_unpack_30566,2.0);return _n_unpack_30566;})());
}
(void)((this->_n_fx_30477=(d::truth(_n_hunting_30492)?(this->_n_fx_30477+((this->_n_fd_30479*20.0)*_n_DT_30450)):d::nan)));
if(d::truth(_n_hunting_30492)){d::check_cancel();(void)((this->_n_fy_30478=(this->_n_fy_30478+(((_n_cy_30495-this->_n_fy_30478)*3.0)*_n_DT_30450))));
}
(void)(this->_n_head_30474.fill((-d::number(1.0))));
{double _n_i_30497=0.0;
for(;d::truth((_n_i_30497<_n_N_30449));(void)((_n_i_30497++))){d::check_cancel();double _n_c_30498=([&](){auto _n_left_30567=(([&](){auto _n_argument_30569=(this->_n_GY_30467-1.0);auto _n_argument_30570=([&](){auto _n_argument_30571=0.0;auto _n_argument_30572=std::floor((d::at(this->_n_y_30471,_n_i_30497)/_n_R_30454));return d::maximum({_n_argument_30571,_n_argument_30572});})();return d::minimum({_n_argument_30569,_n_argument_30570});})()*this->_n_GX_30466);auto _n_right_30568=([&](){auto _n_argument_30573=(this->_n_GX_30466-1.0);auto _n_argument_30574=([&](){auto _n_argument_30575=0.0;auto _n_argument_30576=std::floor((d::at(this->_n_x_30470,_n_i_30497)/_n_R_30454));return d::maximum({_n_argument_30575,_n_argument_30576});})();return d::minimum({_n_argument_30573,_n_argument_30574});})();return (_n_left_30567+_n_right_30568);})();
(void)(([&](){auto&& _n_array_30577=this->_n_next_30475;auto _n_index_30578=_n_i_30497;auto _n_value_30579=d::at(this->_n_head_30474,_n_c_30498);d::put(_n_array_30577,_n_index_30578,_n_value_30579);return _n_value_30579;})());
(void)(([&](){auto&& _n_array_30580=this->_n_head_30474;auto _n_index_30581=_n_c_30498;auto _n_value_30582=_n_i_30497;d::put(_n_array_30580,_n_index_30581,_n_value_30582);return _n_value_30582;})());
}}
{double _n_i_30499=0.0;
for(;d::truth((_n_i_30499<_n_N_30449));(void)((_n_i_30499++))){d::check_cancel();double _n_gx0_30500=std::floor((d::at(this->_n_x_30470,_n_i_30499)/_n_R_30454));
double _n_gy0_30501=std::floor((d::at(this->_n_y_30471,_n_i_30499)/_n_R_30454));
double _n_n_30502=0.0;
double _n_sx_30503=0.0;
double _n_sy_30504=0.0;
double _n_svx_30505=0.0;
double _n_svy_30506=0.0;
double _n_px_30507=0.0;
double _n_py_30508=0.0;
{double _n_gy_30509=d::maximum({0.0,(_n_gy0_30501-1.0)});
for(;d::truth((_n_gy_30509<=d::minimum({(this->_n_GY_30467-1.0),(_n_gy0_30501+1.0)})));(void)((_n_gy_30509++))){d::check_cancel();{double _n_gx_30510=d::maximum({0.0,(_n_gx0_30500-1.0)});
for(;d::truth((_n_gx_30510<=d::minimum({(this->_n_GX_30466-1.0),(_n_gx0_30500+1.0)})));(void)((_n_gx_30510++))){d::check_cancel();{double _n_j_30511=d::at(this->_n_head_30474,((_n_gy_30509*this->_n_GX_30466)+_n_gx_30510));
for(;d::truth((_n_j_30511>=0.0));(void)((_n_j_30511=d::at(this->_n_next_30475,_n_j_30511)))){d::check_cancel();double _n_dx_30512=(d::at(this->_n_x_30470,_n_j_30511)-d::at(this->_n_x_30470,_n_i_30499));
double _n_dy_30513=(d::at(this->_n_y_30471,_n_j_30511)-d::at(this->_n_y_30471,_n_i_30499));
double _n_d2_30514=((_n_dx_30512*_n_dx_30512)+(_n_dy_30513*_n_dy_30513));
if((d::truth((_n_j_30511==_n_i_30499))||d::truth((_n_d2_30514>(_n_R_30454*_n_R_30454))))){d::check_cancel();continue;
}
(void)((_n_n_30502++));
(void)((_n_sx_30503=(_n_sx_30503+_n_dx_30512)));
(void)((_n_sy_30504=(_n_sy_30504+_n_dy_30513)));
(void)((_n_svx_30505=(_n_svx_30505+d::at(this->_n_vx_30472,_n_j_30511))));
(void)((_n_svy_30506=(_n_svy_30506+d::at(this->_n_vy_30473,_n_j_30511))));
if(d::truth((_n_d2_30514<(_n_SEP_30455*_n_SEP_30455)))){d::check_cancel();(void)(((_n_px_30507=(_n_px_30507-(_n_dx_30512/(_n_d2_30514+0.02)))),(_n_py_30508=(_n_py_30508-(_n_dy_30513/(_n_d2_30514+0.02))))));
}
}}
}}
}}
double _n_ax_30515=((_n_tx_30493-d::at(this->_n_x_30470,_n_i_30499))*0.25);
double _n_ay_30516=((_n_ty_30494-d::at(this->_n_y_30471,_n_i_30499))*0.5);
if(d::truth(_n_n_30502)){d::check_cancel();(void)((_n_ax_30515=(_n_ax_30515+(((((_n_svx_30505/_n_n_30502)-d::at(this->_n_vx_30472,_n_i_30499))*3.0)+((_n_sx_30503/_n_n_30502)*0.5))+(_n_px_30507*4.0)))));
(void)((_n_ay_30516=(_n_ay_30516+(((((_n_svy_30506/_n_n_30502)-d::at(this->_n_vy_30473,_n_i_30499))*3.0)+((_n_sy_30504/_n_n_30502)*0.5))+(_n_py_30508*4.0)))));
}
double _n_lx_30517=(((d::at(this->_n_x_30470,_n_i_30499)+(d::at(this->_n_vx_30472,_n_i_30499)*_n_LOOK_30456))-(this->_n_W_30462/2.0))/((this->_n_W_30462/2.0)-this->_n_MX_30464));
double _n_ly_30518=(((d::at(this->_n_y_30471,_n_i_30499)+(d::at(this->_n_vy_30473,_n_i_30499)*_n_LOOK_30456))-(this->_n_H_30463/2.0))/((this->_n_H_30463/2.0)-this->_n_MY_30465));
double _n_out_30519=(d::hypot(std::initializer_list<double>{_n_lx_30517,_n_ly_30518})-0.6);
if(d::truth((_n_out_30519>0.0))){d::check_cancel();double _n_s_30520=d::hypot(std::initializer_list<double>{d::at(this->_n_vx_30472,_n_i_30499),d::at(this->_n_vy_30473,_n_i_30499)});
double _n_side_30521=(d::truth((((d::at(this->_n_vx_30472,_n_i_30499)*((this->_n_H_30463/2.0)-d::at(this->_n_y_30471,_n_i_30499)))-(d::at(this->_n_vy_30473,_n_i_30499)*((this->_n_W_30462/2.0)-d::at(this->_n_x_30470,_n_i_30499))))>0.0))?1.0:(-d::number(1.0)));
(void)((_n_ax_30515=(_n_ax_30515+(((((-d::number(d::at(this->_n_vy_30473,_n_i_30499)))/_n_s_30520)*_n_side_30521)*_n_TURN_30457)*_n_out_30519))));
(void)((_n_ay_30516=(_n_ay_30516+((((d::at(this->_n_vx_30472,_n_i_30499)/_n_s_30520)*_n_side_30521)*_n_TURN_30457)*_n_out_30519))));
}
double _n_top_30522=10.0;
double _n_dx_30523=(d::at(this->_n_x_30470,_n_i_30499)-this->_n_fx_30477);
double _n_dy_30524=(d::at(this->_n_y_30471,_n_i_30499)-this->_n_fy_30478);
double _n_d2_30525=((_n_dx_30523*_n_dx_30523)+(_n_dy_30524*_n_dy_30524));
if(d::truth((_n_d2_30525<(_n_FLEE_30458*_n_FLEE_30458)))){d::check_cancel();(void)((_n_ax_30515=(_n_ax_30515+((_n_dx_30523/(_n_d2_30525+0.4))*90.0))));
(void)((_n_ay_30516=(_n_ay_30516+((_n_dy_30524/(_n_d2_30525+0.4))*90.0))));
(void)((_n_top_30522=15.0));
}
double _n_ux_30526=(d::at(this->_n_vx_30472,_n_i_30499)+(_n_ax_30515*_n_DT_30450));
double _n_uy_30527=(d::at(this->_n_vy_30473,_n_i_30499)+(_n_ay_30516*_n_DT_30450));
double _n_s_30528=std::sqrt(((_n_ux_30526*_n_ux_30526)+(_n_uy_30527*_n_uy_30527)));
double _n_m_30529=(d::truth((_n_s_30528>_n_top_30522))?(_n_top_30522/_n_s_30528):(d::truth((_n_s_30528<5.0))?(5.0/_n_s_30528):1.0));
(void)(([&](){auto&& _n_array_30583=this->_n_vx_30472;auto _n_index_30584=_n_i_30499;auto _n_value_30585=(_n_ux_30526*_n_m_30529);d::put(_n_array_30583,_n_index_30584,_n_value_30585);return _n_value_30585;})());
(void)(([&](){auto&& _n_array_30586=this->_n_vy_30473;auto _n_index_30587=_n_i_30499;auto _n_value_30588=(_n_uy_30527*_n_m_30529);d::put(_n_array_30586,_n_index_30587,_n_value_30588);return _n_value_30588;})());
}}
{double _n_i_30530=0.0;
for(;d::truth((_n_i_30530<_n_N_30449));(void)((_n_i_30530++))){d::check_cancel();(void)((([&](){auto&& _n_array_30589=this->_n_x_30470;auto _n_index_30590=_n_i_30530;auto _n_value_30591=(d::at(_n_array_30589,_n_index_30590)+(d::at(this->_n_vx_30472,_n_i_30530)*_n_DT_30450));d::put(_n_array_30589,_n_index_30590,_n_value_30591);return _n_value_30591;})(),([&](){auto&& _n_array_30592=this->_n_y_30471;auto _n_index_30593=_n_i_30530;auto _n_value_30594=(d::at(_n_array_30592,_n_index_30593)+(d::at(this->_n_vy_30473,_n_i_30530)*_n_DT_30450));d::put(_n_array_30592,_n_index_30593,_n_value_30594);return _n_value_30594;})()));
}}

}
}

d::String _n_draw_30484(){{
(void)(this->_n_top_30481.fill(0.0));
(void)(this->_n_bot_30482.fill(0.0));
{double _n_i_30531=0.0;
for(;d::truth((_n_i_30531<_n_N_30449));(void)((_n_i_30531++))){d::check_cancel();double _n_c_30532=std::floor((d::at(this->_n_x_30470,_n_i_30531)/_n_CW_30447));
double _n_r_30533=std::floor(((d::at(this->_n_y_30471,_n_i_30531)/_n_RH_30448)*2.0));
if((((d::truth((_n_c_30532>=0.0))&&d::truth((_n_c_30532<this->_n_cols_30460)))&&d::truth((_n_r_30533>=0.0)))&&d::truth((_n_r_30533<(this->_n_rows_30461*2.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_30595=(d::truth(double(d::i32(_n_r_30533)&d::i32(1.0)))?this->_n_bot_30482:this->_n_top_30481);auto _n_index_30596=((double(d::i32(_n_r_30533)>>(d::u32(1.0)&31))*this->_n_cols_30460)+_n_c_30532);double _n_old_30597=d::number(d::at(_n_array_30595,_n_index_30596));d::put(_n_array_30595,_n_index_30596,_n_old_30597+(1.0));return _n_old_30597;})());
}
}}
d::Array<d::String,false> _n_lines_30534=d::Array<d::String,false>{};
{double _n_r_30535=0.0;
for(;d::truth((_n_r_30535<this->_n_rows_30461));(void)((_n_r_30535++))){d::check_cancel();d::String _n_line_30536=d::String(u"");
{double _n_c_30537=0.0;
for(;d::truth((_n_c_30537<this->_n_cols_30460));(void)((_n_c_30537++))){d::check_cancel();double _n_i_30538=((_n_r_30535*this->_n_cols_30460)+_n_c_30537);
double _n_n_30539=(d::at(this->_n_top_30481,_n_i_30538)+d::at(this->_n_bot_30482,_n_i_30538));
(void)((_n_line_30536=(d::string(_n_line_30536)+d::string((d::truth((_n_n_30539==1.0))?(d::truth(d::at(this->_n_top_30481,_n_i_30538))?d::String(u"'"):d::String(u".")):d::at(this->_n_RAMP_30483,d::minimum({(double(this->_n_RAMP_30483.size())-1.0),_n_n_30539})))))));
}}
(void)(_n_lines_30534.push(_n_line_30536));
}}
double _n_fc_30540=d::round((this->_n_fx_30477/_n_CW_30447));
double _n_fr_30541=std::floor((this->_n_fy_30478/_n_RH_30448));
if((((d::truth((_n_fc_30540>(-d::number(2.0))))&&d::truth((_n_fc_30540<(this->_n_cols_30460+1.0))))&&d::truth((_n_fr_30541>=0.0)))&&d::truth((_n_fr_30541<this->_n_rows_30461)))){d::check_cancel();d::String _n_bird_30542=(d::truth(double(d::i32(double(d::i32(this->_n_k_30476)>>(d::u32(2.0)&31)))&d::i32(1.0)))?d::String(u"\\v/"):d::String(u"-v-"));
d::Array<d::String,false> _n_row_30543=d::split(d::at(_n_lines_30534,_n_fr_30541),d::String(u""));
{double _n_i_30544=0.0;
for(;d::truth((_n_i_30544<3.0));(void)((_n_i_30544++))){d::check_cancel();if((d::truth((((_n_fc_30540-1.0)+_n_i_30544)>=0.0))&&d::truth((((_n_fc_30540-1.0)+_n_i_30544)<this->_n_cols_30460)))){d::check_cancel();(void)(([&](){auto&& _n_array_30598=_n_row_30543;auto _n_index_30599=((_n_fc_30540-1.0)+_n_i_30544);auto _n_value_30600=d::at(_n_bird_30542,_n_i_30544);d::put(_n_array_30598,_n_index_30599,_n_value_30600);return _n_value_30600;})());
}
}}
(void)(([&](){auto&& _n_array_30601=_n_lines_30534;auto _n_index_30602=_n_fr_30541;auto _n_value_30603=d::join(_n_row_30543,d::String(u""));d::put(_n_array_30601,_n_index_30602,_n_value_30603);return _n_value_30603;})());
}
return d::join(_n_lines_30534,d::String(u"\n"));

}
}

explicit Native_starlings(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30552=_n_meta_30445;
this->_n_cols_30460=_n_binding_30552->_p_cols;
this->_n_rows_30461=_n_binding_30552->_p_rows;
this->_n_W_30462=(this->_n_cols_30460*_n_CW_30447);
this->_n_H_30463=(this->_n_rows_30461*_n_RH_30448);
this->_n_MX_30464=1.5;
this->_n_MY_30465=1.2;
this->_n_GX_30466=std::ceil((this->_n_W_30462/_n_R_30454));
this->_n_GY_30467=std::ceil((this->_n_H_30463/_n_R_30454));
this->_n_seed_30468=26.0;
this->_n_x_30470=d::Array<double,true>(size_t(_n_N_30449));
this->_n_y_30471=d::Array<double,true>(size_t(_n_N_30449));
this->_n_vx_30472=d::Array<double,true>(size_t(_n_N_30449));
this->_n_vy_30473=d::Array<double,true>(size_t(_n_N_30449));
{double _n_i_30489=0.0;
for(;d::truth((_n_i_30489<_n_N_30449));(void)((_n_i_30489++))){d::check_cancel();(void)(([&](){auto&& _n_array_30553=this->_n_x_30470;auto _n_index_30554=_n_i_30489;auto _n_value_30555=(this->_n_W_30462*(0.3+(0.3*this->_n_rnd_30469())));d::put(_n_array_30553,_n_index_30554,_n_value_30555);return _n_value_30555;})());
(void)(([&](){auto&& _n_array_30556=this->_n_y_30471;auto _n_index_30557=_n_i_30489;auto _n_value_30558=(this->_n_H_30463*(0.3+(0.4*this->_n_rnd_30469())));d::put(_n_array_30556,_n_index_30557,_n_value_30558);return _n_value_30558;})());
(void)(([&](){auto&& _n_array_30559=this->_n_vx_30472;auto _n_index_30560=_n_i_30489;auto _n_value_30561=(6.0+(2.0*this->_n_rnd_30469()));d::put(_n_array_30559,_n_index_30560,_n_value_30561);return _n_value_30561;})());
(void)(([&](){auto&& _n_array_30562=this->_n_vy_30473;auto _n_index_30563=_n_i_30489;auto _n_value_30564=((2.0*this->_n_rnd_30469())-1.0);d::put(_n_array_30562,_n_index_30563,_n_value_30564);return _n_value_30564;})());
}}
this->_n_head_30474=d::Array<int32_t,true>(size_t((this->_n_GX_30466*this->_n_GY_30467)));
this->_n_next_30475=d::Array<int32_t,true>(size_t(_n_N_30449));
this->_n_k_30476=0.0;
this->_n_fx_30477=d::nan;
this->_n_fy_30478=0.0;
this->_n_fd_30479=(-d::number(1.0));
while(d::truth((this->_n_k_30476<_n_WARM_30451))){d::check_cancel();(void)(this->_n_step_30480());
}
this->_n_top_30481=d::Array<uint8_t,true>(size_t((this->_n_cols_30460*this->_n_rows_30461)));
this->_n_bot_30482=d::Array<uint8_t,true>(size_t((this->_n_cols_30460*this->_n_rows_30461)));
this->_n_RAMP_30483=d::String(u"  :;+*%%##");
_render=[=]( double _a0,std::shared_ptr<_n_Record_30548> _a1) mutable ->d::String{double _n_t_30545=_a0;
{
double _n_want_30546=(_n_WARM_30451+std::floor(((_n_t_30545/_n_DT_30450)+0.000001)));
{double _n_s_30547=0.0;
for(;(d::truth((_n_s_30547<12.0))&&d::truth((this->_n_k_30476<_n_want_30546)));(void)((_n_s_30547++))){d::check_cancel();(void)(this->_n_step_30480());
}}
return this->_n_draw_30484();

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("starlings").cols)*ascii::catalog_meta("starlings").rows);auto _env=std::make_shared<_n_Record_30548>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &starlings_meta(){return catalog_meta("starlings");}
std::unique_ptr<Piece> make_starlings(const AsciiPieceOptions &o){return std::make_unique<Native_starlings>(o);}
}
