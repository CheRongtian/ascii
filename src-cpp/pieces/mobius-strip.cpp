// Direct, statically typed C++ from src/pieces/mobius-strip.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_21743;
struct _n_Record_21857;
struct _n_Record_21743{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_21743> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21743>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_21857{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_21857> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21857>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_21743> _n_meta_21742=[](){return ([&](){auto _n_object_21860=std::make_shared<_n_Record_21743>();_n_object_21860->_p_name=d::String(u"mobius strip");_n_object_21860->_p_category=d::String(u"shapes");_n_object_21860->_p_note=d::String(u"a mobius strip turning and nodding, lit from above");_n_object_21860->_p_cols=58.0;_n_object_21860->_p_rows=20.0;_n_object_21860->_p_fps=30.0;return _n_object_21860;})();}();
const d::String _n_RAMP_21744=[](){return d::String(u".:-=+*#%@");}();

struct Native_mobius_strip final:ascii::Piece{
double _n_cols_21745{};
double _n_rows_21746{};
double _n_W_21747{};
double _n_NU_21748{};
double _n_NV_21749{};
double _n_n_21750{};
d::Array<float,true> _n_px_21751{};
d::Array<float,true> _n_py_21752{};
d::Array<float,true> _n_pz_21753{};
d::Array<float,true> _n_nx_21754{};
d::Array<float,true> _n_ny_21755{};
d::Array<float,true> _n_nz_21756{};
d::Array<float,true> _n_tone_21757{};
d::Array<float,true> _n_rim_21758{};
double _n_D_21759{};
double _n_ASPECT_21760{};
double _n_ex_21763{};
double _n_ey_21764{};
double _n_K_21765{};
double _n_GAP_21766{};
double _n_lm_21767{};
double _n_fm_21768{};
double _n_lx_21769{};
double _n_ly_21770{};
double _n_lz_21771{};
double _n_fx_21772{};
double _n_fy_21773{};
double _n_fz_21774{};
d::Array<d::String,false> _n_out_21775{};
d::Array<float,true> _n_depth_21776{};
d::Array<int16_t,true> _n_along_21777{};
d::Array<uint8_t,true> _n_cut_21778{};
double _n_N_21779{};
std::function<d::String(double,std::shared_ptr<_n_Record_21857>)> _render;
std::array<double,2> _n_view_21761(double _a0){double _n_t_21800=_a0;
return std::array<double,2>{(2.6+(_n_t_21800*0.35)),(1.0-(0.2*std::cos((_n_t_21800*0.3))))};}

std::array<double,4> _n_box_21762(double _a0,double _a1,double _a2,double _a3){double _n_cS_21801=_a0;
double _n_sS_21802=_a1;
double _n_cT_21803=_a2;
double _n_sT_21804=_a3;
{
double _n_x0_21805=9.0;
double _n_x1_21806=(-d::number(9.0));
double _n_y0_21807=9.0;
double _n_y1_21808=(-d::number(9.0));
{double _n_k_21809=0.0;
for(;d::truth((_n_k_21809<this->_n_n_21750));(void)((_n_k_21809=(_n_k_21809+11.0)))){d::check_cancel();double _n_x_21810=((_n_cS_21801*d::at(this->_n_px_21751,_n_k_21809))-(_n_sS_21802*d::at(this->_n_py_21752,_n_k_21809)));
double _n_w_21811=((_n_sS_21802*d::at(this->_n_px_21751,_n_k_21809))+(_n_cS_21801*d::at(this->_n_py_21752,_n_k_21809)));
double _n_y_21812=((_n_cT_21803*_n_w_21811)+(_n_sT_21804*d::at(this->_n_pz_21753,_n_k_21809)));
double _n_z_21813=(((-d::number(_n_sT_21804))*_n_w_21811)+(_n_cT_21803*d::at(this->_n_pz_21753,_n_k_21809)));
double _n_X_21814=(_n_x_21810/(this->_n_D_21759-_n_z_21813));
double _n_Y_21815=(_n_y_21812/(this->_n_D_21759-_n_z_21813));
if(d::truth((_n_X_21814<_n_x0_21805))){d::check_cancel();(void)((_n_x0_21805=_n_X_21814));
}
if(d::truth((_n_X_21814>_n_x1_21806))){d::check_cancel();(void)((_n_x1_21806=_n_X_21814));
}
if(d::truth((_n_Y_21815<_n_y0_21807))){d::check_cancel();(void)((_n_y0_21807=_n_Y_21815));
}
if(d::truth((_n_Y_21815>_n_y1_21808))){d::check_cancel();(void)((_n_y1_21808=_n_Y_21815));
}
}}
return std::array<double,4>{((_n_x0_21805+_n_x1_21806)/2.0),((_n_y0_21807+_n_y1_21808)/2.0),((_n_x1_21806-_n_x0_21805)/2.0),((_n_y1_21808-_n_y0_21807)/2.0)};

}
}

explicit Native_mobius_strip(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_21861=_n_meta_21742;
this->_n_cols_21745=_n_binding_21861->_p_cols;
this->_n_rows_21746=_n_binding_21861->_p_rows;
this->_n_W_21747=0.46;
this->_n_NU_21748=720.0;
this->_n_NV_21749=40.0;
this->_n_n_21750=(this->_n_NU_21748*this->_n_NV_21749);
this->_n_px_21751=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_py_21752=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_pz_21753=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_nx_21754=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_ny_21755=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_nz_21756=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_tone_21757=d::Array<float,true>(size_t(this->_n_n_21750));
this->_n_rim_21758=d::Array<float,true>(size_t(this->_n_n_21750));
{double _n_i_21780=0.0;
for(;d::truth((_n_i_21780<this->_n_NU_21748));(void)((_n_i_21780++))){d::check_cancel();double _n_u_21781=((_n_i_21780/this->_n_NU_21748)*6.2832);
double _n_cu_21782=std::cos(_n_u_21781);
double _n_su_21783=std::sin(_n_u_21781);
double _n_ch_21784=std::cos((_n_u_21781/2.0));
double _n_sh_21785=std::sin((_n_u_21781/2.0));
{double _n_j_21786=0.0;
for(;d::truth((_n_j_21786<this->_n_NV_21749));(void)((_n_j_21786++))){d::check_cancel();double _n_v_21787=((-d::number(this->_n_W_21747))+(((2.0*this->_n_W_21747)*_n_j_21786)/(this->_n_NV_21749-1.0)));
double _n_k_21788=((_n_i_21780*this->_n_NV_21749)+_n_j_21786);
double _n_h_21789=(1.0+(_n_v_21787*_n_ch_21784));
(void)(([&](){auto&& _n_array_21862=this->_n_px_21751;auto _n_index_21863=_n_k_21788;auto _n_value_21864=(_n_h_21789*_n_cu_21782);d::put(_n_array_21862,_n_index_21863,_n_value_21864);return _n_value_21864;})());
(void)(([&](){auto&& _n_array_21865=this->_n_py_21752;auto _n_index_21866=_n_k_21788;auto _n_value_21867=(_n_h_21789*_n_su_21783);d::put(_n_array_21865,_n_index_21866,_n_value_21867);return _n_value_21867;})());
(void)(([&](){auto&& _n_array_21868=this->_n_pz_21753;auto _n_index_21869=_n_k_21788;auto _n_value_21870=(_n_v_21787*_n_sh_21785);d::put(_n_array_21868,_n_index_21869,_n_value_21870);return _n_value_21870;})());
double _n_ux_21790=((((-d::number((_n_v_21787/2.0)))*_n_sh_21785)*_n_cu_21782)-(_n_h_21789*_n_su_21783));
double _n_uy_21791=((((-d::number((_n_v_21787/2.0)))*_n_sh_21785)*_n_su_21783)+(_n_h_21789*_n_cu_21782));
double _n_uz_21792=((_n_v_21787/2.0)*_n_ch_21784);
double _n_vx_21793=(_n_ch_21784*_n_cu_21782);
double _n_vy_21794=(_n_ch_21784*_n_su_21783);
double _n_vz_21795=_n_sh_21785;
double _n_mx_21796=((_n_uy_21791*_n_vz_21795)-(_n_uz_21792*_n_vy_21794));
double _n_my_21797=((_n_uz_21792*_n_vx_21793)-(_n_ux_21790*_n_vz_21795));
double _n_mz_21798=((_n_ux_21790*_n_vy_21794)-(_n_uy_21791*_n_vx_21793));
double _n_m_21799=d::hypot(std::initializer_list<double>{_n_mx_21796,_n_my_21797,_n_mz_21798});
(void)(([&](){auto&& _n_array_21871=this->_n_nx_21754;auto _n_index_21872=_n_k_21788;auto _n_value_21873=(_n_mx_21796/_n_m_21799);d::put(_n_array_21871,_n_index_21872,_n_value_21873);return _n_value_21873;})());
(void)(([&](){auto&& _n_array_21874=this->_n_ny_21755;auto _n_index_21875=_n_k_21788;auto _n_value_21876=(_n_my_21797/_n_m_21799);d::put(_n_array_21874,_n_index_21875,_n_value_21876);return _n_value_21876;})());
(void)(([&](){auto&& _n_array_21877=this->_n_nz_21756;auto _n_index_21878=_n_k_21788;auto _n_value_21879=(_n_mz_21798/_n_m_21799);d::put(_n_array_21877,_n_index_21878,_n_value_21879);return _n_value_21879;})());
(void)(([&](){auto&& _n_array_21880=this->_n_tone_21757;auto _n_index_21881=_n_k_21788;auto _n_value_21882=(0.1*_n_ch_21784);d::put(_n_array_21880,_n_index_21881,_n_value_21882);return _n_value_21882;})());
(void)(([&](){auto&& _n_array_21883=this->_n_rim_21758;auto _n_index_21884=_n_k_21788;auto _n_value_21885=((d::truth((_n_j_21786==0.0))||d::truth((_n_j_21786==(this->_n_NV_21749-1.0))))?0.45:1.0);d::put(_n_array_21883,_n_index_21884,_n_value_21885);return _n_value_21885;})());
}}
}}
this->_n_D_21759=6.0;
this->_n_ASPECT_21760=0.5;
this->_n_ex_21763=0.0;
this->_n_ey_21764=0.0;
{double _n_s_21816=0.0;
for(;d::truth((_n_s_21816<6.283));(void)((_n_s_21816=(_n_s_21816+0.05)))){d::check_cancel();{double _n_T_21817=0.8;
for(;d::truth((_n_T_21817<=1.21));(void)((_n_T_21817=(_n_T_21817+0.05)))){d::check_cancel();auto&& _n_b_21818=([&](){auto _n_argument_21886=std::cos(_n_s_21816);auto _n_argument_21887=std::sin(_n_s_21816);auto _n_argument_21888=std::cos(_n_T_21817);auto _n_argument_21889=std::sin(_n_T_21817);return this->_n_box_21762(_n_argument_21886,_n_argument_21887,_n_argument_21888,_n_argument_21889);})();
(void)((this->_n_ex_21763=d::maximum({this->_n_ex_21763,d::at(_n_b_21818,2.0)})));
(void)((this->_n_ey_21764=d::maximum({this->_n_ey_21764,d::at(_n_b_21818,3.0)})));
}}
}}
this->_n_K_21765=d::minimum({(((this->_n_cols_21745-3.0)/2.0)/this->_n_ex_21763),((((this->_n_rows_21746-2.0)/2.0)/this->_n_ASPECT_21760)/this->_n_ey_21764)});
this->_n_GAP_21766=0.3;
this->_n_lm_21767=d::hypot(std::initializer_list<double>{(-d::number(0.35)),0.8,0.5});
this->_n_fm_21768=d::hypot(std::initializer_list<double>{0.3,(-d::number(0.3)),0.9});
auto _n_binding_21890=std::array<double,3>{((-d::number(0.35))/this->_n_lm_21767),(0.8/this->_n_lm_21767),(0.5/this->_n_lm_21767)};
this->_n_lx_21769=d::at(_n_binding_21890,0.0);
this->_n_ly_21770=d::at(_n_binding_21890,1.0);
this->_n_lz_21771=d::at(_n_binding_21890,2.0);
auto _n_binding_21891=std::array<double,3>{(0.3/this->_n_fm_21768),((-d::number(0.3))/this->_n_fm_21768),(0.9/this->_n_fm_21768)};
this->_n_fx_21772=d::at(_n_binding_21891,0.0);
this->_n_fy_21773=d::at(_n_binding_21891,1.0);
this->_n_fz_21774=d::at(_n_binding_21891,2.0);
this->_n_out_21775=d::Array<d::String,false>(size_t((this->_n_cols_21745*this->_n_rows_21746)));
this->_n_depth_21776=d::Array<float,true>(size_t((this->_n_cols_21745*this->_n_rows_21746)));
this->_n_along_21777=d::Array<int16_t,true>(size_t((this->_n_cols_21745*this->_n_rows_21746)));
this->_n_cut_21778=d::Array<uint8_t,true>(size_t((this->_n_cols_21745*this->_n_rows_21746)));
this->_n_N_21779=(double(_n_RAMP_21744.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_21857> _a1) mutable ->d::String{double _n_t_21819=_a0;
auto _n_binding_21894=(d::present(_a1)?_a1:([&](){auto _n_object_21893=std::make_shared<_n_Record_21857>();return _n_object_21893;})());
bool _n_paper_21820=(d::present(_n_binding_21894->_p_paper)?d::read(_n_binding_21894->_p_paper):false);
{
auto _n_binding_21895=this->_n_view_21761(_n_t_21819);
double _n_S_21821=d::at(_n_binding_21895,0.0);
double _n_T_21822=d::at(_n_binding_21895,1.0);
double _n_cS_21823=std::cos(_n_S_21821);
double _n_sS_21824=std::sin(_n_S_21821);
double _n_cT_21825=std::cos(_n_T_21822);
double _n_sT_21826=std::sin(_n_T_21822);
auto _n_binding_21896=this->_n_box_21762(_n_cS_21823,_n_sS_21824,_n_cT_21825,_n_sT_21826);
double _n_mx_21827=d::at(_n_binding_21896,0.0);
double _n_my_21828=d::at(_n_binding_21896,1.0);
(void)(this->_n_out_21775.fill(d::String(u" ")));
(void)(this->_n_depth_21776.fill(0.0));
{double _n_k_21829=0.0;
for(;d::truth((_n_k_21829<this->_n_n_21750));(void)((_n_k_21829++))){d::check_cancel();double _n_x_21830=((_n_cS_21823*d::at(this->_n_px_21751,_n_k_21829))-(_n_sS_21824*d::at(this->_n_py_21752,_n_k_21829)));
double _n_y0_21831=((_n_sS_21824*d::at(this->_n_px_21751,_n_k_21829))+(_n_cS_21823*d::at(this->_n_py_21752,_n_k_21829)));
double _n_y_21832=((_n_cT_21825*_n_y0_21831)+(_n_sT_21826*d::at(this->_n_pz_21753,_n_k_21829)));
double _n_z_21833=(((-d::number(_n_sT_21826))*_n_y0_21831)+(_n_cT_21825*d::at(this->_n_pz_21753,_n_k_21829)));
double _n_ooz_21834=(1.0/(this->_n_D_21759-_n_z_21833));
double _n_col_21835=std::floor(((this->_n_cols_21745/2.0)+(this->_n_K_21765*((_n_ooz_21834*_n_x_21830)-_n_mx_21827))));
double _n_row_21836=std::floor(((this->_n_rows_21746/2.0)-((this->_n_K_21765*this->_n_ASPECT_21760)*((_n_ooz_21834*_n_y_21832)-_n_my_21828))));
if((((d::truth((_n_col_21835<0.0))||d::truth((_n_col_21835>=this->_n_cols_21745)))||d::truth((_n_row_21836<0.0)))||d::truth((_n_row_21836>=this->_n_rows_21746)))){d::check_cancel();continue;
}
double _n_q_21837=(_n_col_21835+(_n_row_21836*this->_n_cols_21745));
if(d::truth(((_n_z_21833+10.0)<=d::at(this->_n_depth_21776,_n_q_21837)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_21897=this->_n_depth_21776;auto _n_index_21898=_n_q_21837;auto _n_value_21899=(_n_z_21833+10.0);d::put(_n_array_21897,_n_index_21898,_n_value_21899);return _n_value_21899;})());
(void)(([&](){auto&& _n_array_21900=this->_n_along_21777;auto _n_index_21901=_n_q_21837;auto _n_value_21902=double(d::i32((_n_k_21829/this->_n_NV_21749))|d::i32(0.0));d::put(_n_array_21900,_n_index_21901,_n_value_21902);return _n_value_21902;})());
double _n_wx_21838=((_n_cS_21823*d::at(this->_n_nx_21754,_n_k_21829))-(_n_sS_21824*d::at(this->_n_ny_21755,_n_k_21829)));
double _n_w0_21839=((_n_sS_21824*d::at(this->_n_nx_21754,_n_k_21829))+(_n_cS_21823*d::at(this->_n_ny_21755,_n_k_21829)));
double _n_wy_21840=((_n_cT_21825*_n_w0_21839)+(_n_sT_21826*d::at(this->_n_nz_21756,_n_k_21829)));
double _n_wz_21841=(((-d::number(_n_sT_21826))*_n_w0_21839)+(_n_cT_21825*d::at(this->_n_nz_21756,_n_k_21829)));
double _n_side_21842=1.0;
if(d::truth((_n_wz_21841<0.0))){d::check_cancel();(void)((_n_wx_21838=(-d::number(_n_wx_21838))));
(void)((_n_wy_21840=(-d::number(_n_wy_21840))));
(void)((_n_wz_21841=(-d::number(_n_wz_21841))));
(void)((_n_side_21842=(-d::number(1.0))));
}
double _n_diff_21843=d::maximum({0.0,(((_n_wx_21838*this->_n_lx_21769)+(_n_wy_21840*this->_n_ly_21770))+(_n_wz_21841*this->_n_lz_21771))});
double _n_fill_21844=d::maximum({0.0,(((_n_wx_21838*this->_n_fx_21772)+(_n_wy_21840*this->_n_fy_21773))+(_n_wz_21841*this->_n_fz_21774))});
double _n_lit_21845=((((0.06+(_n_diff_21843*0.82))+(_n_fill_21844*0.22))+(_n_side_21842*d::at(this->_n_tone_21757,_n_k_21829)))*d::at(this->_n_rim_21758,_n_k_21829));
double _n_i_21846=d::round((([&](){auto _n_argument_21903=0.0;auto _n_argument_21904=d::minimum({1.0,_n_lit_21845});return d::maximum({_n_argument_21903,_n_argument_21904});})()*this->_n_N_21779));
(void)(([&](){auto&& _n_array_21905=this->_n_out_21775;auto _n_index_21906=_n_q_21837;auto _n_value_21907=d::at(_n_RAMP_21744,(d::truth(_n_paper_21820)?(this->_n_N_21779-_n_i_21846):_n_i_21846));d::put(_n_array_21905,_n_index_21906,_n_value_21907);return _n_value_21907;})());
}}
auto _n_over_21847=[&]( double _a0,double _a1) mutable ->bool{double _n_q_21848=_a0;
double _n_p_21849=_a1;
{
if(d::truth((d::at(this->_n_depth_21776,_n_p_21849)<=(d::at(this->_n_depth_21776,_n_q_21848)+this->_n_GAP_21766)))){d::check_cancel();return false;
}
double _n_s_21850=std::fabs((d::at(this->_n_along_21777,_n_p_21849)-d::at(this->_n_along_21777,_n_q_21848)));
return (d::minimum({_n_s_21850,(this->_n_NU_21748-_n_s_21850)})>(this->_n_NU_21748/12.0));

}
};
double _n_m_21851=(this->_n_cols_21745*this->_n_rows_21746);
{double _n_q_21852=0.0;
for(;d::truth((_n_q_21852<_n_m_21851));(void)((_n_q_21852++))){d::check_cancel();double _n_c_21853=d::mod(_n_q_21852,this->_n_cols_21745);
(void)(([&](){auto&& _n_array_21908=this->_n_cut_21778;auto _n_index_21909=_n_q_21852;auto _n_value_21910=((d::truth((d::at(this->_n_depth_21776,_n_q_21852)>0.0))&&d::truth(([&]()->bool{auto _n_logical_21911=([&]()->bool{auto _n_logical_21913=([&]()->bool{auto _n_logical_21915=([&]()->bool{auto _n_logical_21917=(_n_c_21853>0.0);return d::truth(_n_logical_21917)?_n_over_21847(_n_q_21852,(_n_q_21852-1.0)):_n_logical_21917;})();return d::truth(_n_logical_21915)?_n_logical_21915:([&]()->bool{auto _n_logical_21916=(_n_c_21853<(this->_n_cols_21745-1.0));return d::truth(_n_logical_21916)?_n_over_21847(_n_q_21852,(_n_q_21852+1.0)):_n_logical_21916;})();})();return d::truth(_n_logical_21913)?_n_logical_21913:([&]()->bool{auto _n_logical_21914=(_n_q_21852>=this->_n_cols_21745);return d::truth(_n_logical_21914)?_n_over_21847(_n_q_21852,(_n_q_21852-this->_n_cols_21745)):_n_logical_21914;})();})();return d::truth(_n_logical_21911)?_n_logical_21911:([&]()->bool{auto _n_logical_21912=(_n_q_21852<(_n_m_21851-this->_n_cols_21745));return d::truth(_n_logical_21912)?_n_over_21847(_n_q_21852,(_n_q_21852+this->_n_cols_21745)):_n_logical_21912;})();})()))?1.0:0.0);d::put(_n_array_21908,_n_index_21909,_n_value_21910);return _n_value_21910;})());
}}
{double _n_q_21854=0.0;
for(;d::truth((_n_q_21854<_n_m_21851));(void)((_n_q_21854++))){d::check_cancel();if(d::truth(d::at(this->_n_cut_21778,_n_q_21854))){d::check_cancel();(void)(([&](){auto&& _n_array_21918=this->_n_out_21775;auto _n_index_21919=_n_q_21854;auto _n_value_21920=d::String(u" ");d::put(_n_array_21918,_n_index_21919,_n_value_21920);return _n_value_21920;})());
}
}}
d::Array<d::String,false> _n_lines_21855=d::Array<d::String,false>{};
{double _n_r_21856=0.0;
for(;d::truth((_n_r_21856<this->_n_rows_21746));(void)((_n_r_21856++))){d::check_cancel();(void)(_n_lines_21855.push(d::join(this->_n_out_21775.slice((_n_r_21856*this->_n_cols_21745),((_n_r_21856+1.0)*this->_n_cols_21745)),d::String(u""))));
}}
return d::join(_n_lines_21855,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("mobius-strip").cols)*ascii::catalog_meta("mobius-strip").rows);auto _env=std::make_shared<_n_Record_21857>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &mobius_strip_meta(){return catalog_meta("mobius-strip");}
std::unique_ptr<Piece> make_mobius_strip(const AsciiPieceOptions &o){return std::make_unique<Native_mobius_strip>(o);}
}
