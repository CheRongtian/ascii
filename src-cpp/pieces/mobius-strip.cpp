// Direct, statically typed C++ from src/pieces/mobius-strip.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_21744;
struct _n_Record_21858;
struct _n_Record_21744{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_21744> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21744>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_21858{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_21858> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21858>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_21744> _n_meta_21743=[](){return ([&](){auto _n_object_21861=std::make_shared<_n_Record_21744>();_n_object_21861->_p_name=d::String(u"mobius strip");_n_object_21861->_p_category=d::String(u"shapes");_n_object_21861->_p_note=d::String(u"a mobius strip turning and nodding, lit from above");_n_object_21861->_p_cols=58.0;_n_object_21861->_p_rows=20.0;_n_object_21861->_p_fps=30.0;return _n_object_21861;})();}();
const d::String _n_RAMP_21745=[](){return d::String(u".:-=+*#%@");}();

struct Native_mobius_strip final:ascii::Piece{
double _n_cols_21746{};
double _n_rows_21747{};
double _n_W_21748{};
double _n_NU_21749{};
double _n_NV_21750{};
double _n_n_21751{};
d::Array<float,true> _n_px_21752{};
d::Array<float,true> _n_py_21753{};
d::Array<float,true> _n_pz_21754{};
d::Array<float,true> _n_nx_21755{};
d::Array<float,true> _n_ny_21756{};
d::Array<float,true> _n_nz_21757{};
d::Array<float,true> _n_tone_21758{};
d::Array<float,true> _n_rim_21759{};
double _n_D_21760{};
double _n_ASPECT_21761{};
double _n_ex_21764{};
double _n_ey_21765{};
double _n_K_21766{};
double _n_GAP_21767{};
double _n_lm_21768{};
double _n_fm_21769{};
double _n_lx_21770{};
double _n_ly_21771{};
double _n_lz_21772{};
double _n_fx_21773{};
double _n_fy_21774{};
double _n_fz_21775{};
d::Array<d::String,false> _n_out_21776{};
d::Array<float,true> _n_depth_21777{};
d::Array<int16_t,true> _n_along_21778{};
d::Array<uint8_t,true> _n_cut_21779{};
double _n_N_21780{};
std::function<d::String(double,std::shared_ptr<_n_Record_21858>)> _render;
d::Array<double,false> _n_view_21762(double _a0){double _n_t_21801=_a0;
return d::Array<double,false>{(2.6+(_n_t_21801*0.35)),(1.0-(0.2*std::cos((_n_t_21801*0.3))))};}

d::Array<double,false> _n_box_21763(double _a0,double _a1,double _a2,double _a3){double _n_cS_21802=_a0;
double _n_sS_21803=_a1;
double _n_cT_21804=_a2;
double _n_sT_21805=_a3;
{
double _n_x0_21806=9.0;
double _n_x1_21807=(-d::number(9.0));
double _n_y0_21808=9.0;
double _n_y1_21809=(-d::number(9.0));
{double _n_k_21810=0.0;
for(;d::truth((_n_k_21810<this->_n_n_21751));(void)((_n_k_21810=(_n_k_21810+11.0)))){d::check_cancel();double _n_x_21811=((_n_cS_21802*d::at(this->_n_px_21752,_n_k_21810))-(_n_sS_21803*d::at(this->_n_py_21753,_n_k_21810)));
double _n_w_21812=((_n_sS_21803*d::at(this->_n_px_21752,_n_k_21810))+(_n_cS_21802*d::at(this->_n_py_21753,_n_k_21810)));
double _n_y_21813=((_n_cT_21804*_n_w_21812)+(_n_sT_21805*d::at(this->_n_pz_21754,_n_k_21810)));
double _n_z_21814=(((-d::number(_n_sT_21805))*_n_w_21812)+(_n_cT_21804*d::at(this->_n_pz_21754,_n_k_21810)));
double _n_X_21815=(_n_x_21811/(this->_n_D_21760-_n_z_21814));
double _n_Y_21816=(_n_y_21813/(this->_n_D_21760-_n_z_21814));
if(d::truth((_n_X_21815<_n_x0_21806))){d::check_cancel();(void)((_n_x0_21806=_n_X_21815));
}
if(d::truth((_n_X_21815>_n_x1_21807))){d::check_cancel();(void)((_n_x1_21807=_n_X_21815));
}
if(d::truth((_n_Y_21816<_n_y0_21808))){d::check_cancel();(void)((_n_y0_21808=_n_Y_21816));
}
if(d::truth((_n_Y_21816>_n_y1_21809))){d::check_cancel();(void)((_n_y1_21809=_n_Y_21816));
}
}}
return d::Array<double,false>{((_n_x0_21806+_n_x1_21807)/2.0),((_n_y0_21808+_n_y1_21809)/2.0),((_n_x1_21807-_n_x0_21806)/2.0),((_n_y1_21809-_n_y0_21808)/2.0)};

}
}

explicit Native_mobius_strip(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_21862=_n_meta_21743;
this->_n_cols_21746=_n_binding_21862->_p_cols;
this->_n_rows_21747=_n_binding_21862->_p_rows;
this->_n_W_21748=0.46;
this->_n_NU_21749=720.0;
this->_n_NV_21750=40.0;
this->_n_n_21751=(this->_n_NU_21749*this->_n_NV_21750);
this->_n_px_21752=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_py_21753=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_pz_21754=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_nx_21755=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_ny_21756=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_nz_21757=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_tone_21758=d::Array<float,true>(size_t(this->_n_n_21751));
this->_n_rim_21759=d::Array<float,true>(size_t(this->_n_n_21751));
{double _n_i_21781=0.0;
for(;d::truth((_n_i_21781<this->_n_NU_21749));(void)((_n_i_21781++))){d::check_cancel();double _n_u_21782=((_n_i_21781/this->_n_NU_21749)*6.2832);
double _n_cu_21783=std::cos(_n_u_21782);
double _n_su_21784=std::sin(_n_u_21782);
double _n_ch_21785=std::cos((_n_u_21782/2.0));
double _n_sh_21786=std::sin((_n_u_21782/2.0));
{double _n_j_21787=0.0;
for(;d::truth((_n_j_21787<this->_n_NV_21750));(void)((_n_j_21787++))){d::check_cancel();double _n_v_21788=((-d::number(this->_n_W_21748))+(((2.0*this->_n_W_21748)*_n_j_21787)/(this->_n_NV_21750-1.0)));
double _n_k_21789=((_n_i_21781*this->_n_NV_21750)+_n_j_21787);
double _n_h_21790=(1.0+(_n_v_21788*_n_ch_21785));
(void)(([&](){auto&& _n_array_21863=this->_n_px_21752;auto _n_index_21864=_n_k_21789;auto _n_value_21865=(_n_h_21790*_n_cu_21783);d::put(_n_array_21863,_n_index_21864,_n_value_21865);return _n_value_21865;})());
(void)(([&](){auto&& _n_array_21866=this->_n_py_21753;auto _n_index_21867=_n_k_21789;auto _n_value_21868=(_n_h_21790*_n_su_21784);d::put(_n_array_21866,_n_index_21867,_n_value_21868);return _n_value_21868;})());
(void)(([&](){auto&& _n_array_21869=this->_n_pz_21754;auto _n_index_21870=_n_k_21789;auto _n_value_21871=(_n_v_21788*_n_sh_21786);d::put(_n_array_21869,_n_index_21870,_n_value_21871);return _n_value_21871;})());
double _n_ux_21791=((((-d::number((_n_v_21788/2.0)))*_n_sh_21786)*_n_cu_21783)-(_n_h_21790*_n_su_21784));
double _n_uy_21792=((((-d::number((_n_v_21788/2.0)))*_n_sh_21786)*_n_su_21784)+(_n_h_21790*_n_cu_21783));
double _n_uz_21793=((_n_v_21788/2.0)*_n_ch_21785);
double _n_vx_21794=(_n_ch_21785*_n_cu_21783);
double _n_vy_21795=(_n_ch_21785*_n_su_21784);
double _n_vz_21796=_n_sh_21786;
double _n_mx_21797=((_n_uy_21792*_n_vz_21796)-(_n_uz_21793*_n_vy_21795));
double _n_my_21798=((_n_uz_21793*_n_vx_21794)-(_n_ux_21791*_n_vz_21796));
double _n_mz_21799=((_n_ux_21791*_n_vy_21795)-(_n_uy_21792*_n_vx_21794));
double _n_m_21800=d::hypot(std::initializer_list<double>{_n_mx_21797,_n_my_21798,_n_mz_21799});
(void)(([&](){auto&& _n_array_21872=this->_n_nx_21755;auto _n_index_21873=_n_k_21789;auto _n_value_21874=(_n_mx_21797/_n_m_21800);d::put(_n_array_21872,_n_index_21873,_n_value_21874);return _n_value_21874;})());
(void)(([&](){auto&& _n_array_21875=this->_n_ny_21756;auto _n_index_21876=_n_k_21789;auto _n_value_21877=(_n_my_21798/_n_m_21800);d::put(_n_array_21875,_n_index_21876,_n_value_21877);return _n_value_21877;})());
(void)(([&](){auto&& _n_array_21878=this->_n_nz_21757;auto _n_index_21879=_n_k_21789;auto _n_value_21880=(_n_mz_21799/_n_m_21800);d::put(_n_array_21878,_n_index_21879,_n_value_21880);return _n_value_21880;})());
(void)(([&](){auto&& _n_array_21881=this->_n_tone_21758;auto _n_index_21882=_n_k_21789;auto _n_value_21883=(0.1*_n_ch_21785);d::put(_n_array_21881,_n_index_21882,_n_value_21883);return _n_value_21883;})());
(void)(([&](){auto&& _n_array_21884=this->_n_rim_21759;auto _n_index_21885=_n_k_21789;auto _n_value_21886=((d::truth((_n_j_21787==0.0))||d::truth((_n_j_21787==(this->_n_NV_21750-1.0))))?0.45:1.0);d::put(_n_array_21884,_n_index_21885,_n_value_21886);return _n_value_21886;})());
}}
}}
this->_n_D_21760=6.0;
this->_n_ASPECT_21761=0.5;
this->_n_ex_21764=0.0;
this->_n_ey_21765=0.0;
{double _n_s_21817=0.0;
for(;d::truth((_n_s_21817<6.283));(void)((_n_s_21817=(_n_s_21817+0.05)))){d::check_cancel();{double _n_T_21818=0.8;
for(;d::truth((_n_T_21818<=1.21));(void)((_n_T_21818=(_n_T_21818+0.05)))){d::check_cancel();d::Array<double,false> _n_b_21819=([&](){auto _n_argument_21887=std::cos(_n_s_21817);auto _n_argument_21888=std::sin(_n_s_21817);auto _n_argument_21889=std::cos(_n_T_21818);auto _n_argument_21890=std::sin(_n_T_21818);return this->_n_box_21763(_n_argument_21887,_n_argument_21888,_n_argument_21889,_n_argument_21890);})();
(void)((this->_n_ex_21764=d::maximum({this->_n_ex_21764,d::at(_n_b_21819,2.0)})));
(void)((this->_n_ey_21765=d::maximum({this->_n_ey_21765,d::at(_n_b_21819,3.0)})));
}}
}}
this->_n_K_21766=d::minimum({(((this->_n_cols_21746-3.0)/2.0)/this->_n_ex_21764),((((this->_n_rows_21747-2.0)/2.0)/this->_n_ASPECT_21761)/this->_n_ey_21765)});
this->_n_GAP_21767=0.3;
this->_n_lm_21768=d::hypot(std::initializer_list<double>{(-d::number(0.35)),0.8,0.5});
this->_n_fm_21769=d::hypot(std::initializer_list<double>{0.3,(-d::number(0.3)),0.9});
auto _n_binding_21891=d::Array<double,false>{((-d::number(0.35))/this->_n_lm_21768),(0.8/this->_n_lm_21768),(0.5/this->_n_lm_21768)};
this->_n_lx_21770=d::at(_n_binding_21891,0.0);
this->_n_ly_21771=d::at(_n_binding_21891,1.0);
this->_n_lz_21772=d::at(_n_binding_21891,2.0);
auto _n_binding_21892=d::Array<double,false>{(0.3/this->_n_fm_21769),((-d::number(0.3))/this->_n_fm_21769),(0.9/this->_n_fm_21769)};
this->_n_fx_21773=d::at(_n_binding_21892,0.0);
this->_n_fy_21774=d::at(_n_binding_21892,1.0);
this->_n_fz_21775=d::at(_n_binding_21892,2.0);
this->_n_out_21776=d::Array<d::String,false>(size_t((this->_n_cols_21746*this->_n_rows_21747)));
this->_n_depth_21777=d::Array<float,true>(size_t((this->_n_cols_21746*this->_n_rows_21747)));
this->_n_along_21778=d::Array<int16_t,true>(size_t((this->_n_cols_21746*this->_n_rows_21747)));
this->_n_cut_21779=d::Array<uint8_t,true>(size_t((this->_n_cols_21746*this->_n_rows_21747)));
this->_n_N_21780=(double(_n_RAMP_21745.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_21858> _a1) mutable ->d::String{double _n_t_21820=_a0;
auto _n_binding_21895=(d::present(_a1)?_a1:([&](){auto _n_object_21894=std::make_shared<_n_Record_21858>();return _n_object_21894;})());
bool _n_paper_21821=(d::present(_n_binding_21895->_p_paper)?d::read(_n_binding_21895->_p_paper):false);
{
auto _n_binding_21896=this->_n_view_21762(_n_t_21820);
double _n_S_21822=d::at(_n_binding_21896,0.0);
double _n_T_21823=d::at(_n_binding_21896,1.0);
double _n_cS_21824=std::cos(_n_S_21822);
double _n_sS_21825=std::sin(_n_S_21822);
double _n_cT_21826=std::cos(_n_T_21823);
double _n_sT_21827=std::sin(_n_T_21823);
auto _n_binding_21897=this->_n_box_21763(_n_cS_21824,_n_sS_21825,_n_cT_21826,_n_sT_21827);
double _n_mx_21828=d::at(_n_binding_21897,0.0);
double _n_my_21829=d::at(_n_binding_21897,1.0);
(void)(this->_n_out_21776.fill(d::String(u" ")));
(void)(this->_n_depth_21777.fill(0.0));
{double _n_k_21830=0.0;
for(;d::truth((_n_k_21830<this->_n_n_21751));(void)((_n_k_21830++))){d::check_cancel();double _n_x_21831=((_n_cS_21824*d::at(this->_n_px_21752,_n_k_21830))-(_n_sS_21825*d::at(this->_n_py_21753,_n_k_21830)));
double _n_y0_21832=((_n_sS_21825*d::at(this->_n_px_21752,_n_k_21830))+(_n_cS_21824*d::at(this->_n_py_21753,_n_k_21830)));
double _n_y_21833=((_n_cT_21826*_n_y0_21832)+(_n_sT_21827*d::at(this->_n_pz_21754,_n_k_21830)));
double _n_z_21834=(((-d::number(_n_sT_21827))*_n_y0_21832)+(_n_cT_21826*d::at(this->_n_pz_21754,_n_k_21830)));
double _n_ooz_21835=(1.0/(this->_n_D_21760-_n_z_21834));
double _n_col_21836=std::floor(((this->_n_cols_21746/2.0)+(this->_n_K_21766*((_n_ooz_21835*_n_x_21831)-_n_mx_21828))));
double _n_row_21837=std::floor(((this->_n_rows_21747/2.0)-((this->_n_K_21766*this->_n_ASPECT_21761)*((_n_ooz_21835*_n_y_21833)-_n_my_21829))));
if((((d::truth((_n_col_21836<0.0))||d::truth((_n_col_21836>=this->_n_cols_21746)))||d::truth((_n_row_21837<0.0)))||d::truth((_n_row_21837>=this->_n_rows_21747)))){d::check_cancel();continue;
}
double _n_q_21838=(_n_col_21836+(_n_row_21837*this->_n_cols_21746));
if(d::truth(((_n_z_21834+10.0)<=d::at(this->_n_depth_21777,_n_q_21838)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_21898=this->_n_depth_21777;auto _n_index_21899=_n_q_21838;auto _n_value_21900=(_n_z_21834+10.0);d::put(_n_array_21898,_n_index_21899,_n_value_21900);return _n_value_21900;})());
(void)(([&](){auto&& _n_array_21901=this->_n_along_21778;auto _n_index_21902=_n_q_21838;auto _n_value_21903=double(d::i32((_n_k_21830/this->_n_NV_21750))|d::i32(0.0));d::put(_n_array_21901,_n_index_21902,_n_value_21903);return _n_value_21903;})());
double _n_wx_21839=((_n_cS_21824*d::at(this->_n_nx_21755,_n_k_21830))-(_n_sS_21825*d::at(this->_n_ny_21756,_n_k_21830)));
double _n_w0_21840=((_n_sS_21825*d::at(this->_n_nx_21755,_n_k_21830))+(_n_cS_21824*d::at(this->_n_ny_21756,_n_k_21830)));
double _n_wy_21841=((_n_cT_21826*_n_w0_21840)+(_n_sT_21827*d::at(this->_n_nz_21757,_n_k_21830)));
double _n_wz_21842=(((-d::number(_n_sT_21827))*_n_w0_21840)+(_n_cT_21826*d::at(this->_n_nz_21757,_n_k_21830)));
double _n_side_21843=1.0;
if(d::truth((_n_wz_21842<0.0))){d::check_cancel();(void)((_n_wx_21839=(-d::number(_n_wx_21839))));
(void)((_n_wy_21841=(-d::number(_n_wy_21841))));
(void)((_n_wz_21842=(-d::number(_n_wz_21842))));
(void)((_n_side_21843=(-d::number(1.0))));
}
double _n_diff_21844=d::maximum({0.0,(((_n_wx_21839*this->_n_lx_21770)+(_n_wy_21841*this->_n_ly_21771))+(_n_wz_21842*this->_n_lz_21772))});
double _n_fill_21845=d::maximum({0.0,(((_n_wx_21839*this->_n_fx_21773)+(_n_wy_21841*this->_n_fy_21774))+(_n_wz_21842*this->_n_fz_21775))});
double _n_lit_21846=((((0.06+(_n_diff_21844*0.82))+(_n_fill_21845*0.22))+(_n_side_21843*d::at(this->_n_tone_21758,_n_k_21830)))*d::at(this->_n_rim_21759,_n_k_21830));
double _n_i_21847=d::round((([&](){auto _n_argument_21904=0.0;auto _n_argument_21905=d::minimum({1.0,_n_lit_21846});return d::maximum({_n_argument_21904,_n_argument_21905});})()*this->_n_N_21780));
(void)(([&](){auto&& _n_array_21906=this->_n_out_21776;auto _n_index_21907=_n_q_21838;auto _n_value_21908=d::at(_n_RAMP_21745,(d::truth(_n_paper_21821)?(this->_n_N_21780-_n_i_21847):_n_i_21847));d::put(_n_array_21906,_n_index_21907,_n_value_21908);return _n_value_21908;})());
}}
auto _n_over_21848=[&]( double _a0,double _a1) mutable ->bool{double _n_q_21849=_a0;
double _n_p_21850=_a1;
{
if(d::truth((d::at(this->_n_depth_21777,_n_p_21850)<=(d::at(this->_n_depth_21777,_n_q_21849)+this->_n_GAP_21767)))){d::check_cancel();return false;
}
double _n_s_21851=std::fabs((d::at(this->_n_along_21778,_n_p_21850)-d::at(this->_n_along_21778,_n_q_21849)));
return (d::minimum({_n_s_21851,(this->_n_NU_21749-_n_s_21851)})>(this->_n_NU_21749/12.0));

}
};
double _n_m_21852=(this->_n_cols_21746*this->_n_rows_21747);
{double _n_q_21853=0.0;
for(;d::truth((_n_q_21853<_n_m_21852));(void)((_n_q_21853++))){d::check_cancel();double _n_c_21854=d::mod(_n_q_21853,this->_n_cols_21746);
(void)(([&](){auto&& _n_array_21909=this->_n_cut_21779;auto _n_index_21910=_n_q_21853;auto _n_value_21911=((d::truth((d::at(this->_n_depth_21777,_n_q_21853)>0.0))&&d::truth(([&]()->bool{auto _n_logical_21912=([&]()->bool{auto _n_logical_21914=([&]()->bool{auto _n_logical_21916=([&]()->bool{auto _n_logical_21918=(_n_c_21854>0.0);return d::truth(_n_logical_21918)?_n_over_21848(_n_q_21853,(_n_q_21853-1.0)):_n_logical_21918;})();return d::truth(_n_logical_21916)?_n_logical_21916:([&]()->bool{auto _n_logical_21917=(_n_c_21854<(this->_n_cols_21746-1.0));return d::truth(_n_logical_21917)?_n_over_21848(_n_q_21853,(_n_q_21853+1.0)):_n_logical_21917;})();})();return d::truth(_n_logical_21914)?_n_logical_21914:([&]()->bool{auto _n_logical_21915=(_n_q_21853>=this->_n_cols_21746);return d::truth(_n_logical_21915)?_n_over_21848(_n_q_21853,(_n_q_21853-this->_n_cols_21746)):_n_logical_21915;})();})();return d::truth(_n_logical_21912)?_n_logical_21912:([&]()->bool{auto _n_logical_21913=(_n_q_21853<(_n_m_21852-this->_n_cols_21746));return d::truth(_n_logical_21913)?_n_over_21848(_n_q_21853,(_n_q_21853+this->_n_cols_21746)):_n_logical_21913;})();})()))?1.0:0.0);d::put(_n_array_21909,_n_index_21910,_n_value_21911);return _n_value_21911;})());
}}
{double _n_q_21855=0.0;
for(;d::truth((_n_q_21855<_n_m_21852));(void)((_n_q_21855++))){d::check_cancel();if(d::truth(d::at(this->_n_cut_21779,_n_q_21855))){d::check_cancel();(void)(([&](){auto&& _n_array_21919=this->_n_out_21776;auto _n_index_21920=_n_q_21855;auto _n_value_21921=d::String(u" ");d::put(_n_array_21919,_n_index_21920,_n_value_21921);return _n_value_21921;})());
}
}}
d::Array<d::String,false> _n_lines_21856=d::Array<d::String,false>{};
{double _n_r_21857=0.0;
for(;d::truth((_n_r_21857<this->_n_rows_21747));(void)((_n_r_21857++))){d::check_cancel();(void)(_n_lines_21856.push(d::join(this->_n_out_21776.slice((_n_r_21857*this->_n_cols_21746),((_n_r_21857+1.0)*this->_n_cols_21746)),d::String(u""))));
}}
return d::join(_n_lines_21856,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("mobius-strip").cols)*ascii::catalog_meta("mobius-strip").rows);auto _env=std::make_shared<_n_Record_21858>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &mobius_strip_meta(){return catalog_meta("mobius-strip");}
std::unique_ptr<Piece> make_mobius_strip(const AsciiPieceOptions &o){return std::make_unique<Native_mobius_strip>(o);}
}
