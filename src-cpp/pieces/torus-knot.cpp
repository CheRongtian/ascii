// Direct, statically typed C++ from src/pieces/torus-knot.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34246;
struct _n_Record_34363;
struct _n_Record_34246{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34246> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34246>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_34363{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34363> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34363>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_34246> _n_meta_34245=[](){return ([&](){auto _n_object_34366=std::make_shared<_n_Record_34246>();_n_object_34366->_p_name=d::String(u"torus knot");_n_object_34366->_p_category=d::String(u"shapes");_n_object_34366->_p_note=d::String(u"a trefoil knot drawn as a lit tube, turning slowly");_n_object_34366->_p_cols=60.0;_n_object_34366->_p_rows=28.0;_n_object_34366->_p_fps=30.0;return _n_object_34366;})();}();
const d::String _n_RAMP_34247=[](){return d::String(u".:-=+*#%@");}();

struct Native_torus_knot final:ascii::Piece{
double _n_cols_34248{};
double _n_rows_34249{};
double _n_TUBE_34250{};
double _n_NU_34251{};
double _n_NV_34252{};
d::Array<float,true> _n_px_34254{};
d::Array<float,true> _n_py_34255{};
d::Array<float,true> _n_pz_34256{};
d::Array<float,true> _n_nx_34257{};
d::Array<float,true> _n_ny_34258{};
d::Array<float,true> _n_nz_34259{};
d::Array<double,false> _n_c_34260{};
d::Array<double,false> _n_d_34261{};
double _n_D_34262{};
double _n_ASPECT_34263{};
double _n_mx_34265{};
double _n_my_34266{};
double _n_K_34267{};
double _n_GAP_34268{};
double _n_m_34269{};
double _n_lx_34270{};
double _n_ly_34271{};
double _n_lz_34272{};
double _n_hm_34273{};
double _n_hx_34274{};
double _n_hy_34275{};
double _n_hz_34276{};
double _n_n_34277{};
d::Array<d::String,false> _n_out_34278{};
d::Array<float,true> _n_depth_34279{};
d::Array<int16_t,true> _n_along_34280{};
d::Array<uint8_t,true> _n_cut_34281{};
d::Array<int32_t,true> _n_stack_34282{};
d::Array<int32_t,true> _n_part_34283{};
double _n_N_34284{};
std::function<d::String(double,std::shared_ptr<_n_Record_34363>)> _render;
void _n_curve_34253(double _a0,d::Array<double,false> _a1){double _n_u_34285=_a0;
d::Array<double,false> _n_o_34286=_a1;
{
double _n_r_34287=(2.0+std::cos((3.0*_n_u_34285)));
(void)(([&](){auto&& _n_array_34438=_n_o_34286;auto _n_index_34439=0.0;auto _n_value_34440=(_n_r_34287*std::cos((2.0*_n_u_34285)));d::put(_n_array_34438,_n_index_34439,_n_value_34440);return _n_value_34440;})());
(void)(([&](){auto&& _n_array_34441=_n_o_34286;auto _n_index_34442=1.0;auto _n_value_34443=(_n_r_34287*std::sin((2.0*_n_u_34285)));d::put(_n_array_34441,_n_index_34442,_n_value_34443);return _n_value_34443;})());
(void)(([&](){auto&& _n_array_34444=_n_o_34286;auto _n_index_34445=2.0;auto _n_value_34446=(-d::number(std::sin((3.0*_n_u_34285))));d::put(_n_array_34444,_n_index_34445,_n_value_34446);return _n_value_34446;})());

}
}

std::array<double,2> _n_view_34264(double _a0){double _n_t_34305=_a0;
return std::array<double,2>{(_n_t_34305*0.3),(0.48-(0.28*std::cos((_n_t_34305*0.35))))};}

explicit Native_torus_knot(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34367=_n_meta_34245;
this->_n_cols_34248=_n_binding_34367->_p_cols;
this->_n_rows_34249=_n_binding_34367->_p_rows;
this->_n_TUBE_34250=0.28;
this->_n_NU_34251=720.0;
this->_n_NV_34252=32.0;
this->_n_px_34254=d::Array<float,true>(size_t((this->_n_NU_34251*this->_n_NV_34252)));
this->_n_py_34255=d::Array<float,true>(size_t((this->_n_NU_34251*this->_n_NV_34252)));
this->_n_pz_34256=d::Array<float,true>(size_t((this->_n_NU_34251*this->_n_NV_34252)));
this->_n_nx_34257=d::Array<float,true>(size_t((this->_n_NU_34251*this->_n_NV_34252)));
this->_n_ny_34258=d::Array<float,true>(size_t((this->_n_NU_34251*this->_n_NV_34252)));
this->_n_nz_34259=d::Array<float,true>(size_t((this->_n_NU_34251*this->_n_NV_34252)));
this->_n_c_34260=d::Array<double,false>{0.0,0.0,0.0};
this->_n_d_34261=d::Array<double,false>{0.0,0.0,0.0};
{double _n_i_34288=0.0;
for(;d::truth((_n_i_34288<this->_n_NU_34251));(void)((_n_i_34288++))){d::check_cancel();double _n_u_34289=((_n_i_34288/this->_n_NU_34251)*6.2832);
(void)(this->_n_curve_34253(_n_u_34289,this->_n_c_34260));
(void)(this->_n_curve_34253((_n_u_34289+0.001),this->_n_d_34261));
double _n_tx_34290=(d::at(this->_n_d_34261,0.0)-d::at(this->_n_c_34260,0.0));
double _n_ty_34291=(d::at(this->_n_d_34261,1.0)-d::at(this->_n_c_34260,1.0));
double _n_tz_34292=(d::at(this->_n_d_34261,2.0)-d::at(this->_n_c_34260,2.0));
double _n_tl_34293=d::hypot(std::initializer_list<double>{_n_tx_34290,_n_ty_34291,_n_tz_34292});
(void)((_n_tx_34290=(_n_tx_34290/_n_tl_34293)));
(void)((_n_ty_34291=(_n_ty_34291/_n_tl_34293)));
(void)((_n_tz_34292=(_n_tz_34292/_n_tl_34293)));
double _n_ax_34294=_n_ty_34291;
double _n_ay_34295=(-d::number(_n_tx_34290));
double _n_al_34296=d::hypot(std::initializer_list<double>{_n_ax_34294,_n_ay_34295});
(void)((_n_ax_34294=(_n_ax_34294/_n_al_34296)));
(void)((_n_ay_34295=(_n_ay_34295/_n_al_34296)));
double _n_bx_34297=((-d::number(_n_tz_34292))*_n_ay_34295);
double _n_by_34298=(_n_tz_34292*_n_ax_34294);
double _n_bz_34299=((_n_tx_34290*_n_ay_34295)-(_n_ty_34291*_n_ax_34294));
{double _n_j_34300=0.0;
for(;d::truth((_n_j_34300<this->_n_NV_34252));(void)((_n_j_34300++))){d::check_cancel();double _n_v_34301=((_n_j_34300/this->_n_NV_34252)*6.2832);
double _n_cv_34302=std::cos(_n_v_34301);
double _n_sv_34303=std::sin(_n_v_34301);
double _n_k_34304=((_n_i_34288*this->_n_NV_34252)+_n_j_34300);
(void)(([&](){auto&& _n_array_34368=this->_n_nx_34257;auto _n_index_34369=_n_k_34304;auto _n_value_34370=((_n_ax_34294*_n_cv_34302)+(_n_bx_34297*_n_sv_34303));d::put(_n_array_34368,_n_index_34369,_n_value_34370);return _n_value_34370;})());
(void)(([&](){auto&& _n_array_34371=this->_n_ny_34258;auto _n_index_34372=_n_k_34304;auto _n_value_34373=((_n_ay_34295*_n_cv_34302)+(_n_by_34298*_n_sv_34303));d::put(_n_array_34371,_n_index_34372,_n_value_34373);return _n_value_34373;})());
(void)(([&](){auto&& _n_array_34374=this->_n_nz_34259;auto _n_index_34375=_n_k_34304;auto _n_value_34376=(_n_bz_34299*_n_sv_34303);d::put(_n_array_34374,_n_index_34375,_n_value_34376);return _n_value_34376;})());
(void)(([&](){auto&& _n_array_34377=this->_n_px_34254;auto _n_index_34378=_n_k_34304;auto _n_value_34379=(d::at(this->_n_c_34260,0.0)+(this->_n_TUBE_34250*d::at(this->_n_nx_34257,_n_k_34304)));d::put(_n_array_34377,_n_index_34378,_n_value_34379);return _n_value_34379;})());
(void)(([&](){auto&& _n_array_34380=this->_n_py_34255;auto _n_index_34381=_n_k_34304;auto _n_value_34382=(d::at(this->_n_c_34260,1.0)+(this->_n_TUBE_34250*d::at(this->_n_ny_34258,_n_k_34304)));d::put(_n_array_34380,_n_index_34381,_n_value_34382);return _n_value_34382;})());
(void)(([&](){auto&& _n_array_34383=this->_n_pz_34256;auto _n_index_34384=_n_k_34304;auto _n_value_34385=(d::at(this->_n_c_34260,2.0)+(this->_n_TUBE_34250*d::at(this->_n_nz_34259,_n_k_34304)));d::put(_n_array_34383,_n_index_34384,_n_value_34385);return _n_value_34385;})());
}}
}}
this->_n_D_34262=11.0;
this->_n_ASPECT_34263=0.5;
this->_n_mx_34265=0.0;
this->_n_my_34266=0.0;
{double _n_a_34306=0.0;
for(;d::truth((_n_a_34306<6.283));(void)((_n_a_34306=(_n_a_34306+0.1)))){d::check_cancel();{double _n_T_34307=0.2;
for(;d::truth((_n_T_34307<=0.77));(void)((_n_T_34307=(_n_T_34307+0.07)))){d::check_cancel();double _n_cS_34308=std::cos(_n_a_34306);
double _n_sS_34309=std::sin(_n_a_34306);
double _n_cT_34310=std::cos(_n_T_34307);
double _n_sT_34311=std::sin(_n_T_34307);
{double _n_k_34312=0.0;
for(;d::truth((_n_k_34312<(this->_n_NU_34251*this->_n_NV_34252)));(void)((_n_k_34312=(_n_k_34312+7.0)))){d::check_cancel();double _n_x_34313=((_n_cS_34308*d::at(this->_n_px_34254,_n_k_34312))-(_n_sS_34309*d::at(this->_n_py_34255,_n_k_34312)));
double _n_y_34314=((_n_cT_34310*((_n_sS_34309*d::at(this->_n_px_34254,_n_k_34312))+(_n_cS_34308*d::at(this->_n_py_34255,_n_k_34312))))-(_n_sT_34311*d::at(this->_n_pz_34256,_n_k_34312)));
double _n_z_34315=((_n_sT_34311*((_n_sS_34309*d::at(this->_n_px_34254,_n_k_34312))+(_n_cS_34308*d::at(this->_n_py_34255,_n_k_34312))))+(_n_cT_34310*d::at(this->_n_pz_34256,_n_k_34312)));
(void)((this->_n_mx_34265=([&](){auto _n_argument_34386=this->_n_mx_34265;auto _n_argument_34387=(std::fabs(_n_x_34313)/(this->_n_D_34262-_n_z_34315));return d::maximum({_n_argument_34386,_n_argument_34387});})()));
(void)((this->_n_my_34266=([&](){auto _n_argument_34388=this->_n_my_34266;auto _n_argument_34389=(std::fabs(_n_y_34314)/(this->_n_D_34262-_n_z_34315));return d::maximum({_n_argument_34388,_n_argument_34389});})()));
}}
}}
}}
this->_n_K_34267=d::minimum({(((this->_n_cols_34248-2.0)/2.0)/this->_n_mx_34265),((((this->_n_rows_34249-2.0)/2.0)/this->_n_ASPECT_34263)/this->_n_my_34266)});
this->_n_GAP_34268=(this->_n_TUBE_34250*0.9);
this->_n_m_34269=d::hypot(std::initializer_list<double>{(-d::number(0.35)),0.45,1.0});
auto _n_binding_34390=std::array<double,3>{((-d::number(0.35))/this->_n_m_34269),(0.45/this->_n_m_34269),(1.0/this->_n_m_34269)};
this->_n_lx_34270=d::at(_n_binding_34390,0.0);
this->_n_ly_34271=d::at(_n_binding_34390,1.0);
this->_n_lz_34272=d::at(_n_binding_34390,2.0);
this->_n_hm_34273=d::hypot(std::initializer_list<double>{this->_n_lx_34270,this->_n_ly_34271,(this->_n_lz_34272+1.0)});
auto _n_binding_34391=std::array<double,3>{(this->_n_lx_34270/this->_n_hm_34273),(this->_n_ly_34271/this->_n_hm_34273),((this->_n_lz_34272+1.0)/this->_n_hm_34273)};
this->_n_hx_34274=d::at(_n_binding_34391,0.0);
this->_n_hy_34275=d::at(_n_binding_34391,1.0);
this->_n_hz_34276=d::at(_n_binding_34391,2.0);
this->_n_n_34277=(this->_n_cols_34248*this->_n_rows_34249);
this->_n_out_34278=d::Array<d::String,false>(size_t(this->_n_n_34277));
this->_n_depth_34279=d::Array<float,true>(size_t(this->_n_n_34277));
this->_n_along_34280=d::Array<int16_t,true>(size_t(this->_n_n_34277));
this->_n_cut_34281=d::Array<uint8_t,true>(size_t(this->_n_n_34277));
this->_n_stack_34282=d::Array<int32_t,true>(size_t(this->_n_n_34277));
this->_n_part_34283=d::Array<int32_t,true>(size_t(this->_n_n_34277));
this->_n_N_34284=(double(_n_RAMP_34247.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_34363> _a1) mutable ->d::String{double _n_t_34316=_a0;
auto _n_binding_34394=(d::present(_a1)?_a1:([&](){auto _n_object_34393=std::make_shared<_n_Record_34363>();return _n_object_34393;})());
bool _n_paper_34317=(d::present(_n_binding_34394->_p_paper)?d::read(_n_binding_34394->_p_paper):false);
{
auto _n_binding_34395=this->_n_view_34264(_n_t_34316);
double _n_S_34318=d::at(_n_binding_34395,0.0);
double _n_T_34319=d::at(_n_binding_34395,1.0);
double _n_cS_34320=std::cos(_n_S_34318);
double _n_sS_34321=std::sin(_n_S_34318);
double _n_cT_34322=std::cos(_n_T_34319);
double _n_sT_34323=std::sin(_n_T_34319);
double _n_r00_34324=_n_cS_34320;
double _n_r01_34325=(-d::number(_n_sS_34321));
double _n_r10_34326=(_n_cT_34322*_n_sS_34321);
double _n_r11_34327=(_n_cT_34322*_n_cS_34320);
double _n_r12_34328=(-d::number(_n_sT_34323));
double _n_r20_34329=(_n_sT_34323*_n_sS_34321);
double _n_r21_34330=(_n_sT_34323*_n_cS_34320);
double _n_r22_34331=_n_cT_34322;
(void)(this->_n_out_34278.fill(d::String(u" ")));
(void)(this->_n_depth_34279.fill(0.0));
{double _n_k_34332=0.0;
for(;d::truth((_n_k_34332<(this->_n_NU_34251*this->_n_NV_34252)));(void)((_n_k_34332++))){d::check_cancel();double _n_wz_34333=(((_n_r20_34329*d::at(this->_n_nx_34257,_n_k_34332))+(_n_r21_34330*d::at(this->_n_ny_34258,_n_k_34332)))+(_n_r22_34331*d::at(this->_n_nz_34259,_n_k_34332)));
if(d::truth((_n_wz_34333<(-d::number(0.15))))){d::check_cancel();continue;
}
double _n_x_34334=((_n_r00_34324*d::at(this->_n_px_34254,_n_k_34332))+(_n_r01_34325*d::at(this->_n_py_34255,_n_k_34332)));
double _n_y_34335=(((_n_r10_34326*d::at(this->_n_px_34254,_n_k_34332))+(_n_r11_34327*d::at(this->_n_py_34255,_n_k_34332)))+(_n_r12_34328*d::at(this->_n_pz_34256,_n_k_34332)));
double _n_z_34336=(((_n_r20_34329*d::at(this->_n_px_34254,_n_k_34332))+(_n_r21_34330*d::at(this->_n_py_34255,_n_k_34332)))+(_n_r22_34331*d::at(this->_n_pz_34256,_n_k_34332)));
double _n_ooz_34337=(1.0/(this->_n_D_34262-_n_z_34336));
double _n_col_34338=std::floor(((this->_n_cols_34248/2.0)+((this->_n_K_34267*_n_ooz_34337)*_n_x_34334)));
double _n_row_34339=std::floor(((this->_n_rows_34249/2.0)-(((this->_n_K_34267*this->_n_ASPECT_34263)*_n_ooz_34337)*_n_y_34335)));
if((((d::truth((_n_col_34338<0.0))||d::truth((_n_col_34338>=this->_n_cols_34248)))||d::truth((_n_row_34339<0.0)))||d::truth((_n_row_34339>=this->_n_rows_34249)))){d::check_cancel();continue;
}
double _n_q_34340=(_n_col_34338+(_n_row_34339*this->_n_cols_34248));
if(d::truth(((_n_z_34336+20.0)<=d::at(this->_n_depth_34279,_n_q_34340)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_34396=this->_n_depth_34279;auto _n_index_34397=_n_q_34340;auto _n_value_34398=(_n_z_34336+20.0);d::put(_n_array_34396,_n_index_34397,_n_value_34398);return _n_value_34398;})());
(void)(([&](){auto&& _n_array_34399=this->_n_along_34280;auto _n_index_34400=_n_q_34340;auto _n_value_34401=double(d::i32((_n_k_34332/this->_n_NV_34252))|d::i32(0.0));d::put(_n_array_34399,_n_index_34400,_n_value_34401);return _n_value_34401;})());
double _n_wx_34341=((_n_r00_34324*d::at(this->_n_nx_34257,_n_k_34332))+(_n_r01_34325*d::at(this->_n_ny_34258,_n_k_34332)));
double _n_wy_34342=(((_n_r10_34326*d::at(this->_n_nx_34257,_n_k_34332))+(_n_r11_34327*d::at(this->_n_ny_34258,_n_k_34332)))+(_n_r12_34328*d::at(this->_n_nz_34259,_n_k_34332)));
double _n_diff_34343=d::maximum({0.0,(((_n_wx_34341*this->_n_lx_34270)+(_n_wy_34342*this->_n_ly_34271))+(_n_wz_34333*this->_n_lz_34272))});
double _n_spec_34344=std::pow(d::maximum({0.0,(((_n_wx_34341*this->_n_hx_34274)+(_n_wy_34342*this->_n_hy_34275))+(_n_wz_34333*this->_n_hz_34276))}),24.0);
double _n_i_34345=d::round((d::minimum({1.0,((0.08+(_n_diff_34343*0.8))+(_n_spec_34344*0.5))})*this->_n_N_34284));
(void)(([&](){auto&& _n_array_34402=this->_n_out_34278;auto _n_index_34403=_n_q_34340;auto _n_value_34404=d::at(_n_RAMP_34247,(d::truth(_n_paper_34317)?(this->_n_N_34284-_n_i_34345):_n_i_34345));d::put(_n_array_34402,_n_index_34403,_n_value_34404);return _n_value_34404;})());
}}
auto _n_over_34346=[&]( double _a0,double _a1) mutable ->bool{double _n_q_34347=_a0;
double _n_p_34348=_a1;
{
if(d::truth((d::at(this->_n_depth_34279,_n_p_34348)<=(d::at(this->_n_depth_34279,_n_q_34347)+this->_n_GAP_34268)))){d::check_cancel();return false;
}
double _n_s_34349=std::fabs((d::at(this->_n_along_34280,_n_p_34348)-d::at(this->_n_along_34280,_n_q_34347)));
return (d::minimum({_n_s_34349,(this->_n_NU_34251-_n_s_34349)})>(this->_n_NU_34251/16.0));

}
};
{double _n_q_34350=0.0;
for(;d::truth((_n_q_34350<this->_n_n_34277));(void)((_n_q_34350++))){d::check_cancel();double _n_c_34351=d::mod(_n_q_34350,this->_n_cols_34248);
(void)(([&](){auto&& _n_array_34405=this->_n_cut_34281;auto _n_index_34406=_n_q_34350;auto _n_value_34407=((d::truth((d::at(this->_n_depth_34279,_n_q_34350)>0.0))&&d::truth(([&]()->bool{auto _n_logical_34408=([&]()->bool{auto _n_logical_34410=([&]()->bool{auto _n_logical_34412=([&]()->bool{auto _n_logical_34414=(_n_c_34351>0.0);return d::truth(_n_logical_34414)?_n_over_34346(_n_q_34350,(_n_q_34350-1.0)):_n_logical_34414;})();return d::truth(_n_logical_34412)?_n_logical_34412:([&]()->bool{auto _n_logical_34413=(_n_c_34351<(this->_n_cols_34248-1.0));return d::truth(_n_logical_34413)?_n_over_34346(_n_q_34350,(_n_q_34350+1.0)):_n_logical_34413;})();})();return d::truth(_n_logical_34410)?_n_logical_34410:([&]()->bool{auto _n_logical_34411=(_n_q_34350>=this->_n_cols_34248);return d::truth(_n_logical_34411)?_n_over_34346(_n_q_34350,(_n_q_34350-this->_n_cols_34248)):_n_logical_34411;})();})();return d::truth(_n_logical_34408)?_n_logical_34408:([&]()->bool{auto _n_logical_34409=(_n_q_34350<(this->_n_n_34277-this->_n_cols_34248));return d::truth(_n_logical_34409)?_n_over_34346(_n_q_34350,(_n_q_34350+this->_n_cols_34248)):_n_logical_34409;})();})()))?1.0:0.0);d::put(_n_array_34405,_n_index_34406,_n_value_34407);return _n_value_34407;})());
}}
{double _n_q_34352=0.0;
for(;d::truth((_n_q_34352<this->_n_n_34277));(void)((_n_q_34352++))){d::check_cancel();if(d::truth(d::at(this->_n_cut_34281,_n_q_34352))){d::check_cancel();(void)(([&](){auto&& _n_array_34415=this->_n_out_34278;auto _n_index_34416=_n_q_34352;auto _n_value_34417=d::String(u" ");d::put(_n_array_34415,_n_index_34416,_n_value_34417);return _n_value_34417;})());
(void)(([&](){auto&& _n_array_34418=this->_n_depth_34279;auto _n_index_34419=_n_q_34352;auto _n_value_34420=0.0;d::put(_n_array_34418,_n_index_34419,_n_value_34420);return _n_value_34420;})());
}
}}
(void)(this->_n_part_34283.fill(0.0));
{double _n_q_34353=0.0;
for(;d::truth((_n_q_34353<this->_n_n_34277));(void)((_n_q_34353++))){d::check_cancel();if((d::truth((d::at(this->_n_out_34278,_n_q_34353)==d::String(u" ")))||d::truth(d::at(this->_n_part_34283,_n_q_34353)))){d::check_cancel();continue;
}
double _n_top_34354=0.0;
double _n_size_34355=0.0;
(void)(([&](){auto&& _n_array_34421=this->_n_stack_34282;auto _n_index_34422=(_n_top_34354++);auto _n_value_34423=_n_q_34353;d::put(_n_array_34421,_n_index_34422,_n_value_34423);return _n_value_34423;})());
(void)(([&](){auto&& _n_array_34424=this->_n_part_34283;auto _n_index_34425=_n_q_34353;auto _n_value_34426=1.0;d::put(_n_array_34424,_n_index_34425,_n_value_34426);return _n_value_34426;})());
d::Array<double,false> _n_seen_34356=d::Array<double,false>{};
while(d::truth(_n_top_34354)){d::check_cancel();double _n_p_34357=d::at(this->_n_stack_34282,(--_n_top_34354));
double _n_c_34358=d::mod(_n_p_34357,this->_n_cols_34248);
(void)(_n_seen_34356.push(_n_p_34357));
(void)((_n_size_34355++));
for(auto &&_n_item_34427:d::Array<double,false>{(d::truth((_n_c_34358>0.0))?(_n_p_34357-1.0):(-d::number(1.0))),(d::truth((_n_c_34358<(this->_n_cols_34248-1.0)))?(_n_p_34357+1.0):(-d::number(1.0))),(_n_p_34357-this->_n_cols_34248),(_n_p_34357+this->_n_cols_34248)}){d::check_cancel();double _n_o_34359=_n_item_34427;
{
if((((d::truth((_n_o_34359>=0.0))&&d::truth((_n_o_34359<this->_n_n_34277)))&&d::truth((!d::truth(d::at(this->_n_part_34283,_n_o_34359)))))&&d::truth((d::at(this->_n_out_34278,_n_o_34359)!=d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_34428=this->_n_part_34283;auto _n_index_34429=_n_o_34359;auto _n_value_34430=1.0;d::put(_n_array_34428,_n_index_34429,_n_value_34430);return _n_value_34430;})());
(void)(([&](){auto&& _n_array_34431=this->_n_stack_34282;auto _n_index_34432=(_n_top_34354++);auto _n_value_34433=_n_o_34359;d::put(_n_array_34431,_n_index_34432,_n_value_34433);return _n_value_34433;})());
}

}
}
}
if(d::truth((_n_size_34355<7.0))){d::check_cancel();for(auto &&_n_item_34434:_n_seen_34356){d::check_cancel();double _n_p_34360=_n_item_34434;
(void)(([&](){auto&& _n_array_34435=this->_n_out_34278;auto _n_index_34436=_n_p_34360;auto _n_value_34437=d::String(u" ");d::put(_n_array_34435,_n_index_34436,_n_value_34437);return _n_value_34437;})());
}
}
}}
d::Array<d::String,false> _n_lines_34361=d::Array<d::String,false>{};
{double _n_r_34362=0.0;
for(;d::truth((_n_r_34362<this->_n_rows_34249));(void)((_n_r_34362++))){d::check_cancel();(void)(_n_lines_34361.push(d::join(this->_n_out_34278.slice((_n_r_34362*this->_n_cols_34248),((_n_r_34362+1.0)*this->_n_cols_34248)),d::String(u""))));
}}
return d::join(_n_lines_34361,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("torus-knot").cols)*ascii::catalog_meta("torus-knot").rows);auto _env=std::make_shared<_n_Record_34363>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &torus_knot_meta(){return catalog_meta("torus-knot");}
std::unique_ptr<Piece> make_torus_knot(const AsciiPieceOptions &o){return std::make_unique<Native_torus_knot>(o);}
}
