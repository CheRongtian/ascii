// Direct, statically typed C++ from src/pieces/heart.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13535;
struct _n_Record_13604;
struct _n_Record_13535{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13535> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13535>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13604{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13604> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13604>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_field_13537(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_13535> _n_meta_13534=[](){return ([&](){auto _n_object_13607=std::make_shared<_n_Record_13535>();_n_object_13607->_p_name=d::String(u"heart");_n_object_13607->_p_category=d::String(u"shapes");_n_object_13607->_p_note=d::String(u"a glossy 3d heart swaying and beating lub-dub");_n_object_13607->_p_cols=52.0;_n_object_13607->_p_rows=24.0;_n_object_13607->_p_fps=30.0;return _n_object_13607;})();}();
const d::String _n_RAMP_13536=[](){return d::String(u".,-~:;=+*#%@");}();
double _n_field_13537(double _a0,double _a1,double _a2){double _n_x_13546=_a0;
double _n_y_13547=_a1;
double _n_z_13548=_a2;
return (((((_n_x_13546*_n_x_13546)+((2.25*_n_y_13547)*_n_y_13547))+(_n_z_13548*_n_z_13548))-1.0)-(_n_z_13548*std::cbrt(((_n_x_13546*_n_x_13546)+((0.1125*_n_y_13547)*_n_y_13547)))));}

struct Native_heart final:ascii::Piece{
double _n_cols_13538{};
double _n_rows_13539{};
double _n_K_13540{};
double _n_cx_13541{};
double _n_cy_13542{};
d::Array<d::String,false> _n_out_13543{};
double _n_m_13544{};
std::array<double,3> _n_light_13545{};
std::function<d::String(double,std::shared_ptr<_n_Record_13604>)> _render;

explicit Native_heart(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13608=_n_meta_13534;
this->_n_cols_13538=_n_binding_13608->_p_cols;
this->_n_rows_13539=_n_binding_13608->_p_rows;
this->_n_K_13540=18.0;
this->_n_cx_13541=(this->_n_cols_13538/2.0);
this->_n_cy_13542=((this->_n_rows_13539/2.0)+1.3);
this->_n_out_13543=d::Array<d::String,false>(size_t((this->_n_cols_13538*this->_n_rows_13539)));
this->_n_m_13544=d::hypot(std::initializer_list<double>{(-d::number(0.4)),(-d::number(1.0)),0.65});
this->_n_light_13545=std::array<double,3>{((-d::number(0.4))/this->_n_m_13544),((-d::number(1.0))/this->_n_m_13544),(0.65/this->_n_m_13544)};
_render=[=]( double _a0,std::shared_ptr<_n_Record_13604> _a1) mutable ->d::String{double _n_t_13549=_a0;
auto _n_binding_13611=(d::present(_a1)?_a1:([&](){auto _n_object_13610=std::make_shared<_n_Record_13604>();return _n_object_13610;})());
bool _n_paper_13550=(d::present(_n_binding_13611->_p_paper)?d::read(_n_binding_13611->_p_paper):false);
{
double _n_p_13551=d::mod(_n_t_13549,1.0);
double _n_s_13552=([&](){auto _n_left_13612=(1.0+(0.075*std::exp((-d::number(std::pow(((_n_p_13551-0.1)/0.055),2.0))))));auto _n_right_13613=(0.045*std::exp((-d::number(std::pow(((_n_p_13551-0.32)/0.06),2.0)))));return (_n_left_13612+_n_right_13613);})();
double _n_yaw_13553=(0.62*std::sin((((_n_t_13549/8.0)*ascii::PI)*2.0)));
double _n_tilt_13554=0.18;
double _n_cyw_13555=std::cos(_n_yaw_13553);
double _n_syw_13556=std::sin(_n_yaw_13553);
double _n_ct_13557=std::cos(_n_tilt_13554);
double _n_st_13558=std::sin(_n_tilt_13554);
auto _n_toObj_13559=[&]( double _a0,double _a1,double _a2) mutable ->std::array<double,3>{double _n_x_13560=_a0;
double _n_y_13561=_a1;
double _n_z_13562=_a2;
{
double _n_y1_13563=((_n_ct_13557*_n_y_13561)-(_n_st_13558*_n_z_13562));
double _n_z1_13564=((_n_st_13558*_n_y_13561)+(_n_ct_13557*_n_z_13562));
return std::array<double,3>{((_n_cyw_13555*_n_x_13560)+(_n_syw_13556*_n_y1_13563)),(((-d::number(_n_syw_13556))*_n_x_13560)+(_n_cyw_13555*_n_y1_13563)),_n_z1_13564};

}
};
auto _n_binding_13615=([&](){auto _n_arguments_13614=this->_n_light_13545;return _n_toObj_13559(d::at(_n_arguments_13614,0.0),d::at(_n_arguments_13614,1.0),d::at(_n_arguments_13614,2.0));})();
double _n_lx_13565=d::at(_n_binding_13615,0.0);
double _n_ly_13566=d::at(_n_binding_13615,1.0);
double _n_lz_13567=d::at(_n_binding_13615,2.0);
auto _n_binding_13616=_n_toObj_13559(0.0,1.0,0.0);
double _n_dx_13568=d::at(_n_binding_13616,0.0);
double _n_dy_13569=d::at(_n_binding_13616,1.0);
double _n_dz_13570=d::at(_n_binding_13616,2.0);
double _n_hx_13571=(_n_lx_13565-_n_dx_13568);
double _n_hy_13572=(_n_ly_13566-_n_dy_13569);
double _n_hz_13573=(_n_lz_13567-_n_dz_13570);
double _n_hm_13574=d::hypot(std::initializer_list<double>{_n_hx_13571,_n_hy_13572,_n_hz_13573});
(void)((((_n_hx_13571=(_n_hx_13571/_n_hm_13574)),(_n_hy_13572=(_n_hy_13572/_n_hm_13574))),(_n_hz_13573=(_n_hz_13573/_n_hm_13574))));
(void)(this->_n_out_13543.fill(d::String(u" ")));
{double _n_r_13575=0.0;
for(;d::truth((_n_r_13575<this->_n_rows_13539));(void)((_n_r_13575++))){d::check_cancel();double _n_v_13576=(((((this->_n_cy_13542-_n_r_13575)-0.5)*2.0)/this->_n_K_13540)/_n_s_13552);
if((d::truth((_n_v_13576<(-d::number(1.15))))||d::truth((_n_v_13576>1.4)))){d::check_cancel();continue;
}
{double _n_c_13577=0.0;
for(;d::truth((_n_c_13577<this->_n_cols_13538));(void)((_n_c_13577++))){d::check_cancel();double _n_u_13578=((((_n_c_13577+0.5)-this->_n_cx_13541)/this->_n_K_13540)/_n_s_13552);
if((d::truth((_n_u_13578<(-d::number(1.3))))||d::truth((_n_u_13578>1.3)))){d::check_cancel();continue;
}
auto _n_binding_13617=_n_toObj_13559(_n_u_13578,(-d::number(1.6)),_n_v_13576);
double _n_ox_13579=d::at(_n_binding_13617,0.0);
double _n_oy_13580=d::at(_n_binding_13617,1.0);
double _n_oz_13581=d::at(_n_binding_13617,2.0);
double _n_d0_13582=0.0;
double _n_hit_13583=(-d::number(1.0));
{double _n_d_13584=0.04;
for(;d::truth((_n_d_13584<=3.2));(void)((_n_d_13584=(_n_d_13584+0.04)))){d::check_cancel();if(d::truth((_n_field_13537((_n_ox_13579+(_n_d_13584*_n_dx_13568)),(_n_oy_13580+(_n_d_13584*_n_dy_13569)),(_n_oz_13581+(_n_d_13584*_n_dz_13570)))<0.0))){d::check_cancel();double _n_a_13585=_n_d0_13582;
double _n_b_13586=_n_d_13584;
{double _n_k_13587=0.0;
for(;d::truth((_n_k_13587<10.0));(void)((_n_k_13587++))){d::check_cancel();double _n_mid_13588=((_n_a_13585+_n_b_13586)/2.0);
if(d::truth((_n_field_13537((_n_ox_13579+(_n_mid_13588*_n_dx_13568)),(_n_oy_13580+(_n_mid_13588*_n_dy_13569)),(_n_oz_13581+(_n_mid_13588*_n_dz_13570)))<0.0))){d::check_cancel();(void)((_n_b_13586=_n_mid_13588));
}else {d::check_cancel();(void)((_n_a_13585=_n_mid_13588));
}
}}
(void)((_n_hit_13583=_n_b_13586));
break;
}
(void)((_n_d0_13582=_n_d_13584));
}}
if(d::truth((_n_hit_13583<0.0))){d::check_cancel();continue;
}
double _n_x_13589=(_n_ox_13579+(_n_hit_13583*_n_dx_13568));
double _n_y_13590=(_n_oy_13580+(_n_hit_13583*_n_dy_13569));
double _n_z_13591=(_n_oz_13581+(_n_hit_13583*_n_dz_13570));
double _n_q_13592=(((_n_x_13589*_n_x_13589)+((0.1125*_n_y_13590)*_n_y_13590))+1e-9);
double _n_w_13593=(_n_z_13591/(3.0*std::cbrt((_n_q_13592*_n_q_13592))));
double _n_nx_13594=((2.0*_n_x_13589)-((_n_w_13593*2.0)*_n_x_13589));
double _n_ny_13595=((4.5*_n_y_13590)-((_n_w_13593*0.225)*_n_y_13590));
double _n_nz_13596=((2.0*_n_z_13591)-std::cbrt(_n_q_13592));
double _n_nm_13597=([&]()->double{auto _n_logical_13618=d::hypot(std::initializer_list<double>{_n_nx_13594,_n_ny_13595,_n_nz_13596});return d::truth(_n_logical_13618)?_n_logical_13618:1.0;})();
(void)((((_n_nx_13594=(_n_nx_13594/_n_nm_13597)),(_n_ny_13595=(_n_ny_13595/_n_nm_13597))),(_n_nz_13596=(_n_nz_13596/_n_nm_13597))));
double _n_diff_13598=d::maximum({0.0,(((_n_nx_13594*_n_lx_13565)+(_n_ny_13595*_n_ly_13566))+(_n_nz_13596*_n_lz_13567))});
double _n_spec_13599=std::pow(d::maximum({0.0,(((_n_nx_13594*_n_hx_13571)+(_n_ny_13595*_n_hy_13572))+(_n_nz_13596*_n_hz_13573))}),40.0);
double _n_b_13600=d::minimum({1.0,((0.1+(0.62*_n_diff_13598))+(0.4*_n_spec_13599))});
double _n_i_13601=d::round((_n_b_13600*(double(_n_RAMP_13536.size())-1.0)));
(void)(([&](){auto&& _n_array_13619=this->_n_out_13543;auto _n_index_13620=(_n_c_13577+(_n_r_13575*this->_n_cols_13538));auto _n_value_13621=d::at(_n_RAMP_13536,(d::truth(_n_paper_13550)?((double(_n_RAMP_13536.size())-1.0)-_n_i_13601):_n_i_13601));d::put(_n_array_13619,_n_index_13620,_n_value_13621);return _n_value_13621;})());
}}
}}
d::Array<d::String,false> _n_lines_13602=d::Array<d::String,false>{};
{double _n_r_13603=0.0;
for(;d::truth((_n_r_13603<this->_n_rows_13539));(void)((_n_r_13603++))){d::check_cancel();(void)(_n_lines_13602.push(d::join(this->_n_out_13543.slice((_n_r_13603*this->_n_cols_13538),((_n_r_13603+1.0)*this->_n_cols_13538)),d::String(u""))));
}}
return d::join(_n_lines_13602,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("heart").cols)*ascii::catalog_meta("heart").rows);auto _env=std::make_shared<_n_Record_13604>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &heart_meta(){return catalog_meta("heart");}
std::unique_ptr<Piece> make_heart(const AsciiPieceOptions &o){return std::make_unique<Native_heart>(o);}
}
