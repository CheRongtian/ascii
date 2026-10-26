// Direct, statically typed C++ from src/pieces/torus-knot.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_34245;
struct _n_Record_34362;
struct _n_Record_34245{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_34245> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34245>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_34362{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_34362> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_34362>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_34245> _n_meta_34244=[](){return ([&](){auto _n_object_34365=std::make_shared<_n_Record_34245>();_n_object_34365->_p_name=d::String(u"torus knot");_n_object_34365->_p_category=d::String(u"shapes");_n_object_34365->_p_note=d::String(u"a trefoil knot drawn as a lit tube, turning slowly");_n_object_34365->_p_cols=60.0;_n_object_34365->_p_rows=28.0;_n_object_34365->_p_fps=30.0;return _n_object_34365;})();}();
const d::String _n_RAMP_34246=[](){return d::String(u".:-=+*#%@");}();

struct Native_torus_knot final:ascii::Piece{
double _n_cols_34247{};
double _n_rows_34248{};
double _n_TUBE_34249{};
double _n_NU_34250{};
double _n_NV_34251{};
d::Array<float,true> _n_px_34253{};
d::Array<float,true> _n_py_34254{};
d::Array<float,true> _n_pz_34255{};
d::Array<float,true> _n_nx_34256{};
d::Array<float,true> _n_ny_34257{};
d::Array<float,true> _n_nz_34258{};
d::Array<double,false> _n_c_34259{};
d::Array<double,false> _n_d_34260{};
double _n_D_34261{};
double _n_ASPECT_34262{};
double _n_mx_34264{};
double _n_my_34265{};
double _n_K_34266{};
double _n_GAP_34267{};
double _n_m_34268{};
double _n_lx_34269{};
double _n_ly_34270{};
double _n_lz_34271{};
double _n_hm_34272{};
double _n_hx_34273{};
double _n_hy_34274{};
double _n_hz_34275{};
double _n_n_34276{};
d::Array<d::String,false> _n_out_34277{};
d::Array<float,true> _n_depth_34278{};
d::Array<int16_t,true> _n_along_34279{};
d::Array<uint8_t,true> _n_cut_34280{};
d::Array<int32_t,true> _n_stack_34281{};
d::Array<int32_t,true> _n_part_34282{};
double _n_N_34283{};
std::function<d::String(double,std::shared_ptr<_n_Record_34362>)> _render;
void _n_curve_34252(double _a0,d::Array<double,false> _a1){double _n_u_34284=_a0;
d::Array<double,false> _n_o_34285=_a1;
{
double _n_r_34286=(2.0+std::cos((3.0*_n_u_34284)));
(void)(([&](){auto&& _n_array_34437=_n_o_34285;auto _n_index_34438=0.0;auto _n_value_34439=(_n_r_34286*std::cos((2.0*_n_u_34284)));d::put(_n_array_34437,_n_index_34438,_n_value_34439);return _n_value_34439;})());
(void)(([&](){auto&& _n_array_34440=_n_o_34285;auto _n_index_34441=1.0;auto _n_value_34442=(_n_r_34286*std::sin((2.0*_n_u_34284)));d::put(_n_array_34440,_n_index_34441,_n_value_34442);return _n_value_34442;})());
(void)(([&](){auto&& _n_array_34443=_n_o_34285;auto _n_index_34444=2.0;auto _n_value_34445=(-d::number(std::sin((3.0*_n_u_34284))));d::put(_n_array_34443,_n_index_34444,_n_value_34445);return _n_value_34445;})());

}
}

d::Array<double,false> _n_view_34263(double _a0){double _n_t_34304=_a0;
return d::Array<double,false>{(_n_t_34304*0.3),(0.48-(0.28*std::cos((_n_t_34304*0.35))))};}

explicit Native_torus_knot(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_34366=_n_meta_34244;
this->_n_cols_34247=_n_binding_34366->_p_cols;
this->_n_rows_34248=_n_binding_34366->_p_rows;
this->_n_TUBE_34249=0.28;
this->_n_NU_34250=720.0;
this->_n_NV_34251=32.0;
this->_n_px_34253=d::Array<float,true>(size_t((this->_n_NU_34250*this->_n_NV_34251)));
this->_n_py_34254=d::Array<float,true>(size_t((this->_n_NU_34250*this->_n_NV_34251)));
this->_n_pz_34255=d::Array<float,true>(size_t((this->_n_NU_34250*this->_n_NV_34251)));
this->_n_nx_34256=d::Array<float,true>(size_t((this->_n_NU_34250*this->_n_NV_34251)));
this->_n_ny_34257=d::Array<float,true>(size_t((this->_n_NU_34250*this->_n_NV_34251)));
this->_n_nz_34258=d::Array<float,true>(size_t((this->_n_NU_34250*this->_n_NV_34251)));
this->_n_c_34259=d::Array<double,false>{0.0,0.0,0.0};
this->_n_d_34260=d::Array<double,false>{0.0,0.0,0.0};
{double _n_i_34287=0.0;
for(;d::truth((_n_i_34287<this->_n_NU_34250));(void)((_n_i_34287++))){d::check_cancel();double _n_u_34288=((_n_i_34287/this->_n_NU_34250)*6.2832);
(void)(this->_n_curve_34252(_n_u_34288,this->_n_c_34259));
(void)(this->_n_curve_34252((_n_u_34288+0.001),this->_n_d_34260));
double _n_tx_34289=(d::at(this->_n_d_34260,0.0)-d::at(this->_n_c_34259,0.0));
double _n_ty_34290=(d::at(this->_n_d_34260,1.0)-d::at(this->_n_c_34259,1.0));
double _n_tz_34291=(d::at(this->_n_d_34260,2.0)-d::at(this->_n_c_34259,2.0));
double _n_tl_34292=d::hypot(std::initializer_list<double>{_n_tx_34289,_n_ty_34290,_n_tz_34291});
(void)((_n_tx_34289=(_n_tx_34289/_n_tl_34292)));
(void)((_n_ty_34290=(_n_ty_34290/_n_tl_34292)));
(void)((_n_tz_34291=(_n_tz_34291/_n_tl_34292)));
double _n_ax_34293=_n_ty_34290;
double _n_ay_34294=(-d::number(_n_tx_34289));
double _n_al_34295=d::hypot(std::initializer_list<double>{_n_ax_34293,_n_ay_34294});
(void)((_n_ax_34293=(_n_ax_34293/_n_al_34295)));
(void)((_n_ay_34294=(_n_ay_34294/_n_al_34295)));
double _n_bx_34296=((-d::number(_n_tz_34291))*_n_ay_34294);
double _n_by_34297=(_n_tz_34291*_n_ax_34293);
double _n_bz_34298=((_n_tx_34289*_n_ay_34294)-(_n_ty_34290*_n_ax_34293));
{double _n_j_34299=0.0;
for(;d::truth((_n_j_34299<this->_n_NV_34251));(void)((_n_j_34299++))){d::check_cancel();double _n_v_34300=((_n_j_34299/this->_n_NV_34251)*6.2832);
double _n_cv_34301=std::cos(_n_v_34300);
double _n_sv_34302=std::sin(_n_v_34300);
double _n_k_34303=((_n_i_34287*this->_n_NV_34251)+_n_j_34299);
(void)(([&](){auto&& _n_array_34367=this->_n_nx_34256;auto _n_index_34368=_n_k_34303;auto _n_value_34369=((_n_ax_34293*_n_cv_34301)+(_n_bx_34296*_n_sv_34302));d::put(_n_array_34367,_n_index_34368,_n_value_34369);return _n_value_34369;})());
(void)(([&](){auto&& _n_array_34370=this->_n_ny_34257;auto _n_index_34371=_n_k_34303;auto _n_value_34372=((_n_ay_34294*_n_cv_34301)+(_n_by_34297*_n_sv_34302));d::put(_n_array_34370,_n_index_34371,_n_value_34372);return _n_value_34372;})());
(void)(([&](){auto&& _n_array_34373=this->_n_nz_34258;auto _n_index_34374=_n_k_34303;auto _n_value_34375=(_n_bz_34298*_n_sv_34302);d::put(_n_array_34373,_n_index_34374,_n_value_34375);return _n_value_34375;})());
(void)(([&](){auto&& _n_array_34376=this->_n_px_34253;auto _n_index_34377=_n_k_34303;auto _n_value_34378=(d::at(this->_n_c_34259,0.0)+(this->_n_TUBE_34249*d::at(this->_n_nx_34256,_n_k_34303)));d::put(_n_array_34376,_n_index_34377,_n_value_34378);return _n_value_34378;})());
(void)(([&](){auto&& _n_array_34379=this->_n_py_34254;auto _n_index_34380=_n_k_34303;auto _n_value_34381=(d::at(this->_n_c_34259,1.0)+(this->_n_TUBE_34249*d::at(this->_n_ny_34257,_n_k_34303)));d::put(_n_array_34379,_n_index_34380,_n_value_34381);return _n_value_34381;})());
(void)(([&](){auto&& _n_array_34382=this->_n_pz_34255;auto _n_index_34383=_n_k_34303;auto _n_value_34384=(d::at(this->_n_c_34259,2.0)+(this->_n_TUBE_34249*d::at(this->_n_nz_34258,_n_k_34303)));d::put(_n_array_34382,_n_index_34383,_n_value_34384);return _n_value_34384;})());
}}
}}
this->_n_D_34261=11.0;
this->_n_ASPECT_34262=0.5;
this->_n_mx_34264=0.0;
this->_n_my_34265=0.0;
{double _n_a_34305=0.0;
for(;d::truth((_n_a_34305<6.283));(void)((_n_a_34305=(_n_a_34305+0.1)))){d::check_cancel();{double _n_T_34306=0.2;
for(;d::truth((_n_T_34306<=0.77));(void)((_n_T_34306=(_n_T_34306+0.07)))){d::check_cancel();double _n_cS_34307=std::cos(_n_a_34305);
double _n_sS_34308=std::sin(_n_a_34305);
double _n_cT_34309=std::cos(_n_T_34306);
double _n_sT_34310=std::sin(_n_T_34306);
{double _n_k_34311=0.0;
for(;d::truth((_n_k_34311<(this->_n_NU_34250*this->_n_NV_34251)));(void)((_n_k_34311=(_n_k_34311+7.0)))){d::check_cancel();double _n_x_34312=((_n_cS_34307*d::at(this->_n_px_34253,_n_k_34311))-(_n_sS_34308*d::at(this->_n_py_34254,_n_k_34311)));
double _n_y_34313=((_n_cT_34309*((_n_sS_34308*d::at(this->_n_px_34253,_n_k_34311))+(_n_cS_34307*d::at(this->_n_py_34254,_n_k_34311))))-(_n_sT_34310*d::at(this->_n_pz_34255,_n_k_34311)));
double _n_z_34314=((_n_sT_34310*((_n_sS_34308*d::at(this->_n_px_34253,_n_k_34311))+(_n_cS_34307*d::at(this->_n_py_34254,_n_k_34311))))+(_n_cT_34309*d::at(this->_n_pz_34255,_n_k_34311)));
(void)((this->_n_mx_34264=([&](){auto _n_argument_34385=this->_n_mx_34264;auto _n_argument_34386=(std::fabs(_n_x_34312)/(this->_n_D_34261-_n_z_34314));return d::maximum({_n_argument_34385,_n_argument_34386});})()));
(void)((this->_n_my_34265=([&](){auto _n_argument_34387=this->_n_my_34265;auto _n_argument_34388=(std::fabs(_n_y_34313)/(this->_n_D_34261-_n_z_34314));return d::maximum({_n_argument_34387,_n_argument_34388});})()));
}}
}}
}}
this->_n_K_34266=d::minimum({(((this->_n_cols_34247-2.0)/2.0)/this->_n_mx_34264),((((this->_n_rows_34248-2.0)/2.0)/this->_n_ASPECT_34262)/this->_n_my_34265)});
this->_n_GAP_34267=(this->_n_TUBE_34249*0.9);
this->_n_m_34268=d::hypot(std::initializer_list<double>{(-d::number(0.35)),0.45,1.0});
auto _n_binding_34389=d::Array<double,false>{((-d::number(0.35))/this->_n_m_34268),(0.45/this->_n_m_34268),(1.0/this->_n_m_34268)};
this->_n_lx_34269=d::at(_n_binding_34389,0.0);
this->_n_ly_34270=d::at(_n_binding_34389,1.0);
this->_n_lz_34271=d::at(_n_binding_34389,2.0);
this->_n_hm_34272=d::hypot(std::initializer_list<double>{this->_n_lx_34269,this->_n_ly_34270,(this->_n_lz_34271+1.0)});
auto _n_binding_34390=d::Array<double,false>{(this->_n_lx_34269/this->_n_hm_34272),(this->_n_ly_34270/this->_n_hm_34272),((this->_n_lz_34271+1.0)/this->_n_hm_34272)};
this->_n_hx_34273=d::at(_n_binding_34390,0.0);
this->_n_hy_34274=d::at(_n_binding_34390,1.0);
this->_n_hz_34275=d::at(_n_binding_34390,2.0);
this->_n_n_34276=(this->_n_cols_34247*this->_n_rows_34248);
this->_n_out_34277=d::Array<d::String,false>(size_t(this->_n_n_34276));
this->_n_depth_34278=d::Array<float,true>(size_t(this->_n_n_34276));
this->_n_along_34279=d::Array<int16_t,true>(size_t(this->_n_n_34276));
this->_n_cut_34280=d::Array<uint8_t,true>(size_t(this->_n_n_34276));
this->_n_stack_34281=d::Array<int32_t,true>(size_t(this->_n_n_34276));
this->_n_part_34282=d::Array<int32_t,true>(size_t(this->_n_n_34276));
this->_n_N_34283=(double(_n_RAMP_34246.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_34362> _a1) mutable ->d::String{double _n_t_34315=_a0;
auto _n_binding_34393=(d::present(_a1)?_a1:([&](){auto _n_object_34392=std::make_shared<_n_Record_34362>();return _n_object_34392;})());
bool _n_paper_34316=(d::present(_n_binding_34393->_p_paper)?d::read(_n_binding_34393->_p_paper):false);
{
auto _n_binding_34394=this->_n_view_34263(_n_t_34315);
double _n_S_34317=d::at(_n_binding_34394,0.0);
double _n_T_34318=d::at(_n_binding_34394,1.0);
double _n_cS_34319=std::cos(_n_S_34317);
double _n_sS_34320=std::sin(_n_S_34317);
double _n_cT_34321=std::cos(_n_T_34318);
double _n_sT_34322=std::sin(_n_T_34318);
double _n_r00_34323=_n_cS_34319;
double _n_r01_34324=(-d::number(_n_sS_34320));
double _n_r10_34325=(_n_cT_34321*_n_sS_34320);
double _n_r11_34326=(_n_cT_34321*_n_cS_34319);
double _n_r12_34327=(-d::number(_n_sT_34322));
double _n_r20_34328=(_n_sT_34322*_n_sS_34320);
double _n_r21_34329=(_n_sT_34322*_n_cS_34319);
double _n_r22_34330=_n_cT_34321;
(void)(this->_n_out_34277.fill(d::String(u" ")));
(void)(this->_n_depth_34278.fill(0.0));
{double _n_k_34331=0.0;
for(;d::truth((_n_k_34331<(this->_n_NU_34250*this->_n_NV_34251)));(void)((_n_k_34331++))){d::check_cancel();double _n_wz_34332=(((_n_r20_34328*d::at(this->_n_nx_34256,_n_k_34331))+(_n_r21_34329*d::at(this->_n_ny_34257,_n_k_34331)))+(_n_r22_34330*d::at(this->_n_nz_34258,_n_k_34331)));
if(d::truth((_n_wz_34332<(-d::number(0.15))))){d::check_cancel();continue;
}
double _n_x_34333=((_n_r00_34323*d::at(this->_n_px_34253,_n_k_34331))+(_n_r01_34324*d::at(this->_n_py_34254,_n_k_34331)));
double _n_y_34334=(((_n_r10_34325*d::at(this->_n_px_34253,_n_k_34331))+(_n_r11_34326*d::at(this->_n_py_34254,_n_k_34331)))+(_n_r12_34327*d::at(this->_n_pz_34255,_n_k_34331)));
double _n_z_34335=(((_n_r20_34328*d::at(this->_n_px_34253,_n_k_34331))+(_n_r21_34329*d::at(this->_n_py_34254,_n_k_34331)))+(_n_r22_34330*d::at(this->_n_pz_34255,_n_k_34331)));
double _n_ooz_34336=(1.0/(this->_n_D_34261-_n_z_34335));
double _n_col_34337=std::floor(((this->_n_cols_34247/2.0)+((this->_n_K_34266*_n_ooz_34336)*_n_x_34333)));
double _n_row_34338=std::floor(((this->_n_rows_34248/2.0)-(((this->_n_K_34266*this->_n_ASPECT_34262)*_n_ooz_34336)*_n_y_34334)));
if((((d::truth((_n_col_34337<0.0))||d::truth((_n_col_34337>=this->_n_cols_34247)))||d::truth((_n_row_34338<0.0)))||d::truth((_n_row_34338>=this->_n_rows_34248)))){d::check_cancel();continue;
}
double _n_q_34339=(_n_col_34337+(_n_row_34338*this->_n_cols_34247));
if(d::truth(((_n_z_34335+20.0)<=d::at(this->_n_depth_34278,_n_q_34339)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_34395=this->_n_depth_34278;auto _n_index_34396=_n_q_34339;auto _n_value_34397=(_n_z_34335+20.0);d::put(_n_array_34395,_n_index_34396,_n_value_34397);return _n_value_34397;})());
(void)(([&](){auto&& _n_array_34398=this->_n_along_34279;auto _n_index_34399=_n_q_34339;auto _n_value_34400=double(d::i32((_n_k_34331/this->_n_NV_34251))|d::i32(0.0));d::put(_n_array_34398,_n_index_34399,_n_value_34400);return _n_value_34400;})());
double _n_wx_34340=((_n_r00_34323*d::at(this->_n_nx_34256,_n_k_34331))+(_n_r01_34324*d::at(this->_n_ny_34257,_n_k_34331)));
double _n_wy_34341=(((_n_r10_34325*d::at(this->_n_nx_34256,_n_k_34331))+(_n_r11_34326*d::at(this->_n_ny_34257,_n_k_34331)))+(_n_r12_34327*d::at(this->_n_nz_34258,_n_k_34331)));
double _n_diff_34342=d::maximum({0.0,(((_n_wx_34340*this->_n_lx_34269)+(_n_wy_34341*this->_n_ly_34270))+(_n_wz_34332*this->_n_lz_34271))});
double _n_spec_34343=std::pow(d::maximum({0.0,(((_n_wx_34340*this->_n_hx_34273)+(_n_wy_34341*this->_n_hy_34274))+(_n_wz_34332*this->_n_hz_34275))}),24.0);
double _n_i_34344=d::round((d::minimum({1.0,((0.08+(_n_diff_34342*0.8))+(_n_spec_34343*0.5))})*this->_n_N_34283));
(void)(([&](){auto&& _n_array_34401=this->_n_out_34277;auto _n_index_34402=_n_q_34339;auto _n_value_34403=d::at(_n_RAMP_34246,(d::truth(_n_paper_34316)?(this->_n_N_34283-_n_i_34344):_n_i_34344));d::put(_n_array_34401,_n_index_34402,_n_value_34403);return _n_value_34403;})());
}}
auto _n_over_34345=[&]( double _a0,double _a1) mutable ->bool{double _n_q_34346=_a0;
double _n_p_34347=_a1;
{
if(d::truth((d::at(this->_n_depth_34278,_n_p_34347)<=(d::at(this->_n_depth_34278,_n_q_34346)+this->_n_GAP_34267)))){d::check_cancel();return false;
}
double _n_s_34348=std::fabs((d::at(this->_n_along_34279,_n_p_34347)-d::at(this->_n_along_34279,_n_q_34346)));
return (d::minimum({_n_s_34348,(this->_n_NU_34250-_n_s_34348)})>(this->_n_NU_34250/16.0));

}
};
{double _n_q_34349=0.0;
for(;d::truth((_n_q_34349<this->_n_n_34276));(void)((_n_q_34349++))){d::check_cancel();double _n_c_34350=d::mod(_n_q_34349,this->_n_cols_34247);
(void)(([&](){auto&& _n_array_34404=this->_n_cut_34280;auto _n_index_34405=_n_q_34349;auto _n_value_34406=((d::truth((d::at(this->_n_depth_34278,_n_q_34349)>0.0))&&d::truth(([&]()->bool{auto _n_logical_34407=([&]()->bool{auto _n_logical_34409=([&]()->bool{auto _n_logical_34411=([&]()->bool{auto _n_logical_34413=(_n_c_34350>0.0);return d::truth(_n_logical_34413)?_n_over_34345(_n_q_34349,(_n_q_34349-1.0)):_n_logical_34413;})();return d::truth(_n_logical_34411)?_n_logical_34411:([&]()->bool{auto _n_logical_34412=(_n_c_34350<(this->_n_cols_34247-1.0));return d::truth(_n_logical_34412)?_n_over_34345(_n_q_34349,(_n_q_34349+1.0)):_n_logical_34412;})();})();return d::truth(_n_logical_34409)?_n_logical_34409:([&]()->bool{auto _n_logical_34410=(_n_q_34349>=this->_n_cols_34247);return d::truth(_n_logical_34410)?_n_over_34345(_n_q_34349,(_n_q_34349-this->_n_cols_34247)):_n_logical_34410;})();})();return d::truth(_n_logical_34407)?_n_logical_34407:([&]()->bool{auto _n_logical_34408=(_n_q_34349<(this->_n_n_34276-this->_n_cols_34247));return d::truth(_n_logical_34408)?_n_over_34345(_n_q_34349,(_n_q_34349+this->_n_cols_34247)):_n_logical_34408;})();})()))?1.0:0.0);d::put(_n_array_34404,_n_index_34405,_n_value_34406);return _n_value_34406;})());
}}
{double _n_q_34351=0.0;
for(;d::truth((_n_q_34351<this->_n_n_34276));(void)((_n_q_34351++))){d::check_cancel();if(d::truth(d::at(this->_n_cut_34280,_n_q_34351))){d::check_cancel();(void)(([&](){auto&& _n_array_34414=this->_n_out_34277;auto _n_index_34415=_n_q_34351;auto _n_value_34416=d::String(u" ");d::put(_n_array_34414,_n_index_34415,_n_value_34416);return _n_value_34416;})());
(void)(([&](){auto&& _n_array_34417=this->_n_depth_34278;auto _n_index_34418=_n_q_34351;auto _n_value_34419=0.0;d::put(_n_array_34417,_n_index_34418,_n_value_34419);return _n_value_34419;})());
}
}}
(void)(this->_n_part_34282.fill(0.0));
{double _n_q_34352=0.0;
for(;d::truth((_n_q_34352<this->_n_n_34276));(void)((_n_q_34352++))){d::check_cancel();if((d::truth((d::at(this->_n_out_34277,_n_q_34352)==d::String(u" ")))||d::truth(d::at(this->_n_part_34282,_n_q_34352)))){d::check_cancel();continue;
}
double _n_top_34353=0.0;
double _n_size_34354=0.0;
(void)(([&](){auto&& _n_array_34420=this->_n_stack_34281;auto _n_index_34421=(_n_top_34353++);auto _n_value_34422=_n_q_34352;d::put(_n_array_34420,_n_index_34421,_n_value_34422);return _n_value_34422;})());
(void)(([&](){auto&& _n_array_34423=this->_n_part_34282;auto _n_index_34424=_n_q_34352;auto _n_value_34425=1.0;d::put(_n_array_34423,_n_index_34424,_n_value_34425);return _n_value_34425;})());
d::Array<double,false> _n_seen_34355=d::Array<double,false>{};
while(d::truth(_n_top_34353)){d::check_cancel();double _n_p_34356=d::at(this->_n_stack_34281,(--_n_top_34353));
double _n_c_34357=d::mod(_n_p_34356,this->_n_cols_34247);
(void)(_n_seen_34355.push(_n_p_34356));
(void)((_n_size_34354++));
for(auto &&_n_item_34426:d::Array<double,false>{(d::truth((_n_c_34357>0.0))?(_n_p_34356-1.0):(-d::number(1.0))),(d::truth((_n_c_34357<(this->_n_cols_34247-1.0)))?(_n_p_34356+1.0):(-d::number(1.0))),(_n_p_34356-this->_n_cols_34247),(_n_p_34356+this->_n_cols_34247)}){d::check_cancel();double _n_o_34358=_n_item_34426;
{
if((((d::truth((_n_o_34358>=0.0))&&d::truth((_n_o_34358<this->_n_n_34276)))&&d::truth((!d::truth(d::at(this->_n_part_34282,_n_o_34358)))))&&d::truth((d::at(this->_n_out_34277,_n_o_34358)!=d::String(u" "))))){d::check_cancel();(void)(([&](){auto&& _n_array_34427=this->_n_part_34282;auto _n_index_34428=_n_o_34358;auto _n_value_34429=1.0;d::put(_n_array_34427,_n_index_34428,_n_value_34429);return _n_value_34429;})());
(void)(([&](){auto&& _n_array_34430=this->_n_stack_34281;auto _n_index_34431=(_n_top_34353++);auto _n_value_34432=_n_o_34358;d::put(_n_array_34430,_n_index_34431,_n_value_34432);return _n_value_34432;})());
}

}
}
}
if(d::truth((_n_size_34354<7.0))){d::check_cancel();for(auto &&_n_item_34433:_n_seen_34355){d::check_cancel();double _n_p_34359=_n_item_34433;
(void)(([&](){auto&& _n_array_34434=this->_n_out_34277;auto _n_index_34435=_n_p_34359;auto _n_value_34436=d::String(u" ");d::put(_n_array_34434,_n_index_34435,_n_value_34436);return _n_value_34436;})());
}
}
}}
d::Array<d::String,false> _n_lines_34360=d::Array<d::String,false>{};
{double _n_r_34361=0.0;
for(;d::truth((_n_r_34361<this->_n_rows_34248));(void)((_n_r_34361++))){d::check_cancel();(void)(_n_lines_34360.push(d::join(this->_n_out_34277.slice((_n_r_34361*this->_n_cols_34247),((_n_r_34361+1.0)*this->_n_cols_34247)),d::String(u""))));
}}
return d::join(_n_lines_34360,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("torus-knot").cols)*ascii::catalog_meta("torus-knot").rows);auto _env=std::make_shared<_n_Record_34362>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &torus_knot_meta(){return catalog_meta("torus-knot");}
std::unique_ptr<Piece> make_torus_knot(const AsciiPieceOptions &o){return std::make_unique<Native_torus_knot>(o);}
}
