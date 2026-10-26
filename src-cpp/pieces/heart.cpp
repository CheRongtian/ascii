// Direct, statically typed C++ from src/pieces/heart.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13536;
struct _n_Record_13605;
struct _n_Record_13536{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13536> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13536>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13605{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13605> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13605>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_field_13538(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_13536> _n_meta_13535=[](){return ([&](){auto _n_object_13608=std::make_shared<_n_Record_13536>();_n_object_13608->_p_name=d::String(u"heart");_n_object_13608->_p_category=d::String(u"shapes");_n_object_13608->_p_note=d::String(u"a glossy 3d heart swaying and beating lub-dub");_n_object_13608->_p_cols=52.0;_n_object_13608->_p_rows=24.0;_n_object_13608->_p_fps=30.0;return _n_object_13608;})();}();
const d::String _n_RAMP_13537=[](){return d::String(u".,-~:;=+*#%@");}();
double _n_field_13538(double _a0,double _a1,double _a2){double _n_x_13547=_a0;
double _n_y_13548=_a1;
double _n_z_13549=_a2;
return (((((_n_x_13547*_n_x_13547)+((2.25*_n_y_13548)*_n_y_13548))+(_n_z_13549*_n_z_13549))-1.0)-(_n_z_13549*std::cbrt(((_n_x_13547*_n_x_13547)+((0.1125*_n_y_13548)*_n_y_13548)))));}

struct Native_heart final:ascii::Piece{
double _n_cols_13539{};
double _n_rows_13540{};
double _n_K_13541{};
double _n_cx_13542{};
double _n_cy_13543{};
d::Array<d::String,false> _n_out_13544{};
double _n_m_13545{};
d::Array<double,false> _n_light_13546{};
std::function<d::String(double,std::shared_ptr<_n_Record_13605>)> _render;

explicit Native_heart(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13609=_n_meta_13535;
this->_n_cols_13539=_n_binding_13609->_p_cols;
this->_n_rows_13540=_n_binding_13609->_p_rows;
this->_n_K_13541=18.0;
this->_n_cx_13542=(this->_n_cols_13539/2.0);
this->_n_cy_13543=((this->_n_rows_13540/2.0)+1.3);
this->_n_out_13544=d::Array<d::String,false>(size_t((this->_n_cols_13539*this->_n_rows_13540)));
this->_n_m_13545=d::hypot(std::initializer_list<double>{(-d::number(0.4)),(-d::number(1.0)),0.65});
this->_n_light_13546=d::Array<double,false>{((-d::number(0.4))/this->_n_m_13545),((-d::number(1.0))/this->_n_m_13545),(0.65/this->_n_m_13545)};
_render=[=]( double _a0,std::shared_ptr<_n_Record_13605> _a1) mutable ->d::String{double _n_t_13550=_a0;
auto _n_binding_13612=(d::present(_a1)?_a1:([&](){auto _n_object_13611=std::make_shared<_n_Record_13605>();return _n_object_13611;})());
bool _n_paper_13551=(d::present(_n_binding_13612->_p_paper)?d::read(_n_binding_13612->_p_paper):false);
{
double _n_p_13552=d::mod(_n_t_13550,1.0);
double _n_s_13553=([&](){auto _n_left_13613=(1.0+(0.075*std::exp((-d::number(std::pow(((_n_p_13552-0.1)/0.055),2.0))))));auto _n_right_13614=(0.045*std::exp((-d::number(std::pow(((_n_p_13552-0.32)/0.06),2.0)))));return (_n_left_13613+_n_right_13614);})();
double _n_yaw_13554=(0.62*std::sin((((_n_t_13550/8.0)*ascii::PI)*2.0)));
double _n_tilt_13555=0.18;
double _n_cyw_13556=std::cos(_n_yaw_13554);
double _n_syw_13557=std::sin(_n_yaw_13554);
double _n_ct_13558=std::cos(_n_tilt_13555);
double _n_st_13559=std::sin(_n_tilt_13555);
auto _n_toObj_13560=[&]( double _a0,double _a1,double _a2) mutable ->d::Array<double,false>{double _n_x_13561=_a0;
double _n_y_13562=_a1;
double _n_z_13563=_a2;
{
double _n_y1_13564=((_n_ct_13558*_n_y_13562)-(_n_st_13559*_n_z_13563));
double _n_z1_13565=((_n_st_13559*_n_y_13562)+(_n_ct_13558*_n_z_13563));
return d::Array<double,false>{((_n_cyw_13556*_n_x_13561)+(_n_syw_13557*_n_y1_13564)),(((-d::number(_n_syw_13557))*_n_x_13561)+(_n_cyw_13556*_n_y1_13564)),_n_z1_13565};

}
};
auto _n_binding_13616=([&](){auto _n_arguments_13615=this->_n_light_13546;return _n_toObj_13560(d::at(_n_arguments_13615,0.0),d::at(_n_arguments_13615,1.0),d::at(_n_arguments_13615,2.0));})();
double _n_lx_13566=d::at(_n_binding_13616,0.0);
double _n_ly_13567=d::at(_n_binding_13616,1.0);
double _n_lz_13568=d::at(_n_binding_13616,2.0);
auto _n_binding_13617=_n_toObj_13560(0.0,1.0,0.0);
double _n_dx_13569=d::at(_n_binding_13617,0.0);
double _n_dy_13570=d::at(_n_binding_13617,1.0);
double _n_dz_13571=d::at(_n_binding_13617,2.0);
double _n_hx_13572=(_n_lx_13566-_n_dx_13569);
double _n_hy_13573=(_n_ly_13567-_n_dy_13570);
double _n_hz_13574=(_n_lz_13568-_n_dz_13571);
double _n_hm_13575=d::hypot(std::initializer_list<double>{_n_hx_13572,_n_hy_13573,_n_hz_13574});
(void)((((_n_hx_13572=(_n_hx_13572/_n_hm_13575)),(_n_hy_13573=(_n_hy_13573/_n_hm_13575))),(_n_hz_13574=(_n_hz_13574/_n_hm_13575))));
(void)(this->_n_out_13544.fill(d::String(u" ")));
{double _n_r_13576=0.0;
for(;d::truth((_n_r_13576<this->_n_rows_13540));(void)((_n_r_13576++))){d::check_cancel();double _n_v_13577=(((((this->_n_cy_13543-_n_r_13576)-0.5)*2.0)/this->_n_K_13541)/_n_s_13553);
if((d::truth((_n_v_13577<(-d::number(1.15))))||d::truth((_n_v_13577>1.4)))){d::check_cancel();continue;
}
{double _n_c_13578=0.0;
for(;d::truth((_n_c_13578<this->_n_cols_13539));(void)((_n_c_13578++))){d::check_cancel();double _n_u_13579=((((_n_c_13578+0.5)-this->_n_cx_13542)/this->_n_K_13541)/_n_s_13553);
if((d::truth((_n_u_13579<(-d::number(1.3))))||d::truth((_n_u_13579>1.3)))){d::check_cancel();continue;
}
auto _n_binding_13618=_n_toObj_13560(_n_u_13579,(-d::number(1.6)),_n_v_13577);
double _n_ox_13580=d::at(_n_binding_13618,0.0);
double _n_oy_13581=d::at(_n_binding_13618,1.0);
double _n_oz_13582=d::at(_n_binding_13618,2.0);
double _n_d0_13583=0.0;
double _n_hit_13584=(-d::number(1.0));
{double _n_d_13585=0.04;
for(;d::truth((_n_d_13585<=3.2));(void)((_n_d_13585=(_n_d_13585+0.04)))){d::check_cancel();if(d::truth((_n_field_13538((_n_ox_13580+(_n_d_13585*_n_dx_13569)),(_n_oy_13581+(_n_d_13585*_n_dy_13570)),(_n_oz_13582+(_n_d_13585*_n_dz_13571)))<0.0))){d::check_cancel();double _n_a_13586=_n_d0_13583;
double _n_b_13587=_n_d_13585;
{double _n_k_13588=0.0;
for(;d::truth((_n_k_13588<10.0));(void)((_n_k_13588++))){d::check_cancel();double _n_mid_13589=((_n_a_13586+_n_b_13587)/2.0);
if(d::truth((_n_field_13538((_n_ox_13580+(_n_mid_13589*_n_dx_13569)),(_n_oy_13581+(_n_mid_13589*_n_dy_13570)),(_n_oz_13582+(_n_mid_13589*_n_dz_13571)))<0.0))){d::check_cancel();(void)((_n_b_13587=_n_mid_13589));
}else {d::check_cancel();(void)((_n_a_13586=_n_mid_13589));
}
}}
(void)((_n_hit_13584=_n_b_13587));
break;
}
(void)((_n_d0_13583=_n_d_13585));
}}
if(d::truth((_n_hit_13584<0.0))){d::check_cancel();continue;
}
double _n_x_13590=(_n_ox_13580+(_n_hit_13584*_n_dx_13569));
double _n_y_13591=(_n_oy_13581+(_n_hit_13584*_n_dy_13570));
double _n_z_13592=(_n_oz_13582+(_n_hit_13584*_n_dz_13571));
double _n_q_13593=(((_n_x_13590*_n_x_13590)+((0.1125*_n_y_13591)*_n_y_13591))+1e-9);
double _n_w_13594=(_n_z_13592/(3.0*std::cbrt((_n_q_13593*_n_q_13593))));
double _n_nx_13595=((2.0*_n_x_13590)-((_n_w_13594*2.0)*_n_x_13590));
double _n_ny_13596=((4.5*_n_y_13591)-((_n_w_13594*0.225)*_n_y_13591));
double _n_nz_13597=((2.0*_n_z_13592)-std::cbrt(_n_q_13593));
double _n_nm_13598=([&]()->double{auto _n_logical_13619=d::hypot(std::initializer_list<double>{_n_nx_13595,_n_ny_13596,_n_nz_13597});return d::truth(_n_logical_13619)?_n_logical_13619:1.0;})();
(void)((((_n_nx_13595=(_n_nx_13595/_n_nm_13598)),(_n_ny_13596=(_n_ny_13596/_n_nm_13598))),(_n_nz_13597=(_n_nz_13597/_n_nm_13598))));
double _n_diff_13599=d::maximum({0.0,(((_n_nx_13595*_n_lx_13566)+(_n_ny_13596*_n_ly_13567))+(_n_nz_13597*_n_lz_13568))});
double _n_spec_13600=std::pow(d::maximum({0.0,(((_n_nx_13595*_n_hx_13572)+(_n_ny_13596*_n_hy_13573))+(_n_nz_13597*_n_hz_13574))}),40.0);
double _n_b_13601=d::minimum({1.0,((0.1+(0.62*_n_diff_13599))+(0.4*_n_spec_13600))});
double _n_i_13602=d::round((_n_b_13601*(double(_n_RAMP_13537.size())-1.0)));
(void)(([&](){auto&& _n_array_13620=this->_n_out_13544;auto _n_index_13621=(_n_c_13578+(_n_r_13576*this->_n_cols_13539));auto _n_value_13622=d::at(_n_RAMP_13537,(d::truth(_n_paper_13551)?((double(_n_RAMP_13537.size())-1.0)-_n_i_13602):_n_i_13602));d::put(_n_array_13620,_n_index_13621,_n_value_13622);return _n_value_13622;})());
}}
}}
d::Array<d::String,false> _n_lines_13603=d::Array<d::String,false>{};
{double _n_r_13604=0.0;
for(;d::truth((_n_r_13604<this->_n_rows_13540));(void)((_n_r_13604++))){d::check_cancel();(void)(_n_lines_13603.push(d::join(this->_n_out_13544.slice((_n_r_13604*this->_n_cols_13539),((_n_r_13604+1.0)*this->_n_cols_13539)),d::String(u""))));
}}
return d::join(_n_lines_13603,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("heart").cols)*ascii::catalog_meta("heart").rows);auto _env=std::make_shared<_n_Record_13605>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &heart_meta(){return catalog_meta("heart");}
std::unique_ptr<Piece> make_heart(const AsciiPieceOptions &o){return std::make_unique<Native_heart>(o);}
}
