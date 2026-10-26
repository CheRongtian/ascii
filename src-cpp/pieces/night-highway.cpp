// Direct, statically typed C++ from src/pieces/night-highway.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22636;
struct _n_Record_22984;
struct _n_Record_22636{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
double _p_loop{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_22636> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22636>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_loop=d::decode<double>(j["loop"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_22984{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22984> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22984>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_22662(double _a0,double _a1);
double _n_noise_22663(double _a0,double _a1,std::optional<double> _a2);
double _n_fbm_22664(double _a0,double _a1,double _a2,std::optional<double> _a3);
double _n_clamp_22665(double _a0);
double _n_smooth_22666(double _a0,double _a1,double _a2);
double _n_mix_22667(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_22668(d::String _a0);
double _n_overlap_22669(double _a0,double _a1,double _a2,double _a3);
double _n_span_22670(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_22636> _n_meta_22635=[](){return ([&](){auto _n_object_22987=std::make_shared<_n_Record_22636>();_n_object_22987->_p_name=d::String(u"night highway");_n_object_22987->_p_category=d::String(u"scenes");_n_object_22987->_p_note=d::String(u"a desert highway at dusk, rushing toward the mountains and last light");_n_object_22987->_p_cols=200.0;_n_object_22987->_p_rows=100.0;_n_object_22987->_p_cell=1.0;_n_object_22987->_p_fps=15.0;_n_object_22987->_p_loop=12.0;_n_object_22987->_p_ground=d::String(u"#07080f");_n_object_22987->_p_palette=d::Array<d::String,false>{d::String(u"#0d1226"),d::String(u"#141b38"),d::String(u"#1c264c"),d::String(u"#263463"),d::String(u"#34457a"),d::String(u"#4a5d96"),d::String(u"#6b7fb3"),d::String(u"#9aa8d0"),d::String(u"#cdd5ea"),d::String(u"#f4f6fc"),d::String(u"#2a1d45"),d::String(u"#43285e"),d::String(u"#643474"),d::String(u"#8a4683"),d::String(u"#b85a78"),d::String(u"#e0766a"),d::String(u"#f59a5c"),d::String(u"#ffc477"),d::String(u"#ffe6b0"),d::String(u"#16161e"),d::String(u"#24232d"),d::String(u"#383744"),d::String(u"#55535f"),d::String(u"#7a1622"),d::String(u"#d42a32"),d::String(u"#ff6a5c"),d::String(u"#d9b44a"),d::String(u"#3fd6c8"),d::String(u"#fff4d8"),d::String(u"#3a2a2a")};return _n_object_22987;})();}();
const double _n_W_22637=[](){return 200.0;}();
const double _n_H_22638=[](){return 100.0;}();
const double _n_HY_22639=[](){return 50.0;}();
const double _n_VPX_22640=[](){return 100.0;}();
const double _n_F_22641=[](){return 110.0;}();
const double _n_T_22642=[](){return 12.0;}();
const double _n_V_22643=[](){return 16.0;}();
const double _n_SHUT_22644=[](){return ((_n_V_22643/15.0)*0.9);}();
const double _n_FAR_22645=[](){return 112.0;}();
const double _n_ROAD_R_22646=[](){return 0.68;}();
const double _n_ROAD_L_22647=[](){return (-d::number(1.92));}();
const double _n_CENTRE_22648=[](){return (-d::number(0.62));}();
const double _n_LANE_L_22649=[](){return (-d::number(1.27));}();
const double _n_POLE_X_22650=[](){return 2.2;}();
const double _n_POLE_GAP_22651=[](){return 24.0;}();
const double _n_POST_GAP_22652=[](){return 12.0;}();
const double _n_DASH_22653=[](){return 1.2;}();
const double _n_DASH_GAP_22654=[](){return 3.0;}();
d::Array<double,false> _n_MOON_22655=[](){return d::Array<double,false>{158.0,14.0};}();
const double _n_MOON_R_22656=[](){return 4.6;}();
d::Array<double,false> _n_ONCOMING_22657=[](){return d::Array<double,false>{9.4,2.6,6.0};}();
const d::String _n_DOTS_22658=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_22659=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_22660=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_22694=_a0;
return ((_n_v_22694/16.0)-0.47);});}();
d::Array<d::String,false> _n_GLYPHS_22661=[](){return d::Array<d::String,false>{d::String(u"101 111 111 111 100"),d::String(u"111 101 010 100 100"),d::String(u"111 101 010 110 100"),d::String(u"101 101 010 100 100"),d::String(u"101 111 010 111 111")};}();
double _n_hash_22662(double _a0,double _a1){double _n_x_22695=_a0;
double _n_y_22696=_a1;
{
double _n_h_22697=([&](){auto _n_left_22988=d::imul(double(d::i32(_n_x_22695)|d::i32(0.0)),374761393.0);auto _n_right_22989=d::imul(double(d::i32(_n_y_22696)|d::i32(0.0)),668265263.0);return (_n_left_22988+_n_right_22989);})();
(void)((_n_h_22697=d::imul(double(d::i32(_n_h_22697)^d::i32(double(d::u32(_n_h_22697)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_22697)^d::i32(double(d::u32(_n_h_22697)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_22663(double _a0,double _a1,std::optional<double> _a2){double _n_x_22698=_a0;
double _n_y_22699=_a1;
double _n_period_22700=(d::present(_a2)?d::read(_a2):0.0);
{
double _n_xi_22701=std::floor(_n_x_22698);
double _n_yi_22702=std::floor(_n_y_22699);
double _n_fx_22703=(_n_x_22698-_n_xi_22701);
double _n_fy_22704=(_n_y_22699-_n_yi_22702);
double _n_u_22705=((_n_fx_22703*_n_fx_22703)*(3.0-(2.0*_n_fx_22703)));
double _n_v_22706=((_n_fy_22704*_n_fy_22704)*(3.0-(2.0*_n_fy_22704)));
double _n_y0_22707=_n_yi_22702;
double _n_y1_22708=(_n_yi_22702+1.0);
if(d::truth(_n_period_22700)){d::check_cancel();(void)((_n_y0_22707=d::mod((d::mod(_n_yi_22702,_n_period_22700)+_n_period_22700),_n_period_22700)));
(void)((_n_y1_22708=d::mod((_n_y0_22707+1.0),_n_period_22700)));
}
double _n_a_22709=_n_hash_22662(_n_xi_22701,_n_y0_22707);
double _n_b_22710=_n_hash_22662((_n_xi_22701+1.0),_n_y0_22707);
double _n_c_22711=_n_hash_22662(_n_xi_22701,_n_y1_22708);
double _n_d_22712=_n_hash_22662((_n_xi_22701+1.0),_n_y1_22708);
return (((_n_a_22709+((_n_b_22710-_n_a_22709)*_n_u_22705))+((_n_c_22711-_n_a_22709)*_n_v_22706))+(((((_n_a_22709-_n_b_22710)-_n_c_22711)+_n_d_22712)*_n_u_22705)*_n_v_22706));

}
}

double _n_fbm_22664(double _a0,double _a1,double _a2,std::optional<double> _a3){double _n_x_22713=_a0;
double _n_y_22714=_a1;
double _n_octaves_22715=_a2;
double _n_period_22716=(d::present(_a3)?d::read(_a3):0.0);
{
double _n_s_22717=0.0;
double _n_n_22718=0.0;
double _n_amp_22719=0.5;
double _n_f_22720=1.0;
{double _n_i_22721=0.0;
for(;d::truth((_n_i_22721<_n_octaves_22715));(void)((_n_i_22721++))){d::check_cancel();(void)((_n_s_22717=(_n_s_22717+(_n_amp_22719*_n_noise_22663((_n_x_22713*_n_f_22720),(_n_y_22714*_n_f_22720),std::optional<double>((_n_period_22716*_n_f_22720)))))));
(void)((_n_n_22718=(_n_n_22718+_n_amp_22719)));
(void)((_n_amp_22719=(_n_amp_22719*0.5)));
(void)((_n_f_22720=(_n_f_22720*2.0)));
}}
return (_n_s_22717/_n_n_22718);

}
}

double _n_clamp_22665(double _a0){double _n_v_22722=_a0;
return (d::truth((_n_v_22722<0.0))?0.0:(d::truth((_n_v_22722>1.0))?1.0:_n_v_22722));}

double _n_smooth_22666(double _a0,double _a1,double _a2){double _n_a_22723=_a0;
double _n_b_22724=_a1;
double _n_v_22725=_a2;
{
double _n_k_22726=_n_clamp_22665(((_n_v_22725-_n_a_22723)/(_n_b_22724-_n_a_22723)));
return ((_n_k_22726*_n_k_22726)*(3.0-(2.0*_n_k_22726)));

}
}

double _n_mix_22667(double _a0,double _a1,double _a2){double _n_a_22727=_a0;
double _n_b_22728=_a1;
double _n_k_22729=_a2;
return (_n_a_22727+((_n_b_22728-_n_a_22727)*_n_k_22729));}

d::Array<double,false> _n_hex_22668(d::String _a0){d::String _n_s_22730=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_22731=_a0;
return (([&](){auto _n_argument_22990=d::slice(_n_s_22730,_n_i_22731,(_n_i_22731+2.0));auto _n_argument_22991=16.0;return d::parseInt(_n_argument_22990,_n_argument_22991);})()/255.0);});}

double _n_overlap_22669(double _a0,double _a1,double _a2,double _a3){double _n_a0_22732=_a0;
double _n_a1_22733=_a1;
double _n_b0_22734=_a2;
double _n_b1_22735=_a3;
return ([&](){auto _n_argument_22992=0.0;auto _n_argument_22993=([&](){auto _n_left_22994=d::minimum({_n_a1_22733,_n_b1_22735});auto _n_right_22995=d::maximum({_n_a0_22732,_n_b0_22734});return (_n_left_22994-_n_right_22995);})();return d::maximum({_n_argument_22992,_n_argument_22993});})();}

double _n_span_22670(double _a0,double _a1,double _a2){double _n_u_22736=_a0;
double _n_len_22737=_a1;
double _n_period_22738=_a2;
{
double _n_k_22739=std::floor((_n_u_22736/_n_period_22738));
return ((_n_k_22739*_n_len_22737)+d::minimum({(_n_u_22736-(_n_k_22739*_n_period_22738)),_n_len_22737}));

}
}

struct Native_night_highway final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_22671{};
double _n_N_22672{};
d::Array<d::String,false> _n_out_22673{};
d::Array<uint8_t,true> _n_lut_22674{};
d::Array<float,true> _n_warm_22676{};
d::Array<float,true> _n_sr_22677{};
d::Array<float,true> _n_sg_22678{};
d::Array<float,true> _n_sb_22679{};
d::Array<float,true> _n_sfloor_22680{};
d::Array<double,false> _n_stars_22681{};
d::Array<float,true> _n_gZ_22684{};
d::Array<float,true> _n_gD_22685{};
d::Array<float,true> _n_gEZ_22686{};
d::Array<float,true> _n_fr_22687{};
d::Array<float,true> _n_fg_22688{};
d::Array<float,true> _n_fb_22689{};
d::Array<float,true> _n_ff_22690{};
std::function<d::String(double,std::shared_ptr<_n_Record_22984>)> _render;
double _n_nearest_22675(double _a0,double _a1,double _a2){double _n_r_22740=_a0;
double _n_g_22741=_a1;
double _n_b_22742=_a2;
{
double _n_k_22743=([&](){auto _n_left_23161=([&](){auto _n_left_23163=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_22740*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_23164=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_22741*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_23163)|d::i32(_n_right_23164));})();auto _n_right_23162=d::minimum({31.0,double(d::i32((_n_b_22742*31.99))|d::i32(0.0))});return double(d::i32(_n_left_23161)|d::i32(_n_right_23162));})();
if(d::truth((d::at(this->_n_lut_22674,_n_k_22743)!=255.0))){d::check_cancel();return d::at(this->_n_lut_22674,_n_k_22743);
}
double _n_best_22744=0.0;
double _n_bd_22745=1000000000.0;
{double _n_i_22746=0.0;
for(;d::truth((_n_i_22746<double(this->_n_P_22671.size())));(void)((_n_i_22746++))){d::check_cancel();double _n_dr_22747=(d::at(d::at(this->_n_P_22671,_n_i_22746),0.0)-_n_r_22740);
double _n_dg_22748=(d::at(d::at(this->_n_P_22671,_n_i_22746),1.0)-_n_g_22741);
double _n_db_22749=(d::at(d::at(this->_n_P_22671,_n_i_22746),2.0)-_n_b_22742);
double _n_d_22750=((((0.3*_n_dr_22747)*_n_dr_22747)+((0.5*_n_dg_22748)*_n_dg_22748))+((0.2*_n_db_22749)*_n_db_22749));
if(d::truth((_n_d_22750<_n_bd_22745))){d::check_cancel();(void)(((_n_bd_22745=_n_d_22750),(_n_best_22744=_n_i_22746)));
}
}}
return ([&](){auto&& _n_array_23165=this->_n_lut_22674;auto _n_index_23166=_n_k_22743;auto _n_value_23167=_n_best_22744;d::put(_n_array_23165,_n_index_23166,_n_value_23167);return _n_value_23167;})();

}
}

double _n_farTop_22682(double _a0){double _n_x_22752=_a0;
{
double _n_c_22753=([&](){auto _n_argument_23168=6.0;auto _n_argument_23169=60.0;auto _n_argument_23170=std::fabs(((_n_x_22752+0.5)-_n_VPX_22640));return _n_smooth_22666(_n_argument_23168,_n_argument_23169,_n_argument_23170);})();
double _n_ridge_22754=(1.0-std::fabs(((_n_fbm_22664((_n_x_22752*0.04),1.3,5.0,std::optional<double>{})*2.0)-1.0)));
return (((_n_HY_22639-2.5)-(((4.0+(9.0*_n_c_22753))*_n_ridge_22754)*_n_ridge_22754))-(2.0*_n_fbm_22664((_n_x_22752*0.3),2.2,2.0,std::optional<double>{})));

}
}

double _n_nearTop_22683(double _a0){double _n_x_22755=_a0;
{
double _n_c_22756=([&](){auto _n_argument_23171=26.0;auto _n_argument_23172=95.0;auto _n_argument_23173=std::fabs(((_n_x_22755+0.5)-_n_VPX_22640));return _n_smooth_22666(_n_argument_23171,_n_argument_23172,_n_argument_23173);})();
double _n_ridge_22757=(1.0-std::fabs(((_n_fbm_22664((_n_x_22755*0.022),7.1,4.0,std::optional<double>{})*2.0)-1.0)));
return ((_n_HY_22639+0.5)-(_n_c_22756*(6.0+(15.0*_n_ridge_22757))));

}
}

void _n_rect_22691(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7){double _n_x0_22800=_a0;
double _n_x1_22801=_a1;
double _n_y0_22802=_a2;
double _n_y1_22803=_a3;
double _n_r_22804=_a4;
double _n_g_22805=_a5;
double _n_b_22806=_a6;
double _n_a_22807=_a7;
{
double _n_c0_22808=([&](){auto _n_argument_23174=0.0;auto _n_argument_23175=std::floor(_n_x0_22800);return d::maximum({_n_argument_23174,_n_argument_23175});})();
double _n_c1_22809=([&](){auto _n_argument_23176=(_n_W_22637-1.0);auto _n_argument_23177=(std::ceil(_n_x1_22801)-1.0);return d::minimum({_n_argument_23176,_n_argument_23177});})();
double _n_r0_22810=([&](){auto _n_argument_23178=0.0;auto _n_argument_23179=std::floor(_n_y0_22802);return d::maximum({_n_argument_23178,_n_argument_23179});})();
double _n_r1_22811=([&](){auto _n_argument_23180=(_n_H_22638-1.0);auto _n_argument_23181=(std::ceil(_n_y1_22803)-1.0);return d::minimum({_n_argument_23180,_n_argument_23181});})();
{double _n_row_22812=_n_r0_22810;
for(;d::truth((_n_row_22812<=_n_r1_22811));(void)((_n_row_22812++))){d::check_cancel();double _n_cy_22813=_n_overlap_22669(_n_row_22812,(_n_row_22812+1.0),_n_y0_22802,_n_y1_22803);
{double _n_col_22814=_n_c0_22808;
for(;d::truth((_n_col_22814<=_n_c1_22809));(void)((_n_col_22814++))){d::check_cancel();double _n_k2_22815=((_n_row_22812*_n_W_22637)+_n_col_22814);
double _n_q_22816=((_n_a_22807*_n_cy_22813)*_n_overlap_22669(_n_col_22814,(_n_col_22814+1.0),_n_x0_22800,_n_x1_22801));
(void)(([&](){auto&& _n_array_23182=this->_n_fr_22687;auto _n_index_23183=_n_k2_22815;auto _n_value_23184=(d::at(_n_array_23182,_n_index_23183)+((_n_r_22804-d::at(this->_n_fr_22687,_n_k2_22815))*_n_q_22816));d::put(_n_array_23182,_n_index_23183,_n_value_23184);return _n_value_23184;})());
(void)(([&](){auto&& _n_array_23185=this->_n_fg_22688;auto _n_index_23186=_n_k2_22815;auto _n_value_23187=(d::at(_n_array_23185,_n_index_23186)+((_n_g_22805-d::at(this->_n_fg_22688,_n_k2_22815))*_n_q_22816));d::put(_n_array_23185,_n_index_23186,_n_value_23187);return _n_value_23187;})());
(void)(([&](){auto&& _n_array_23188=this->_n_fb_22689;auto _n_index_23189=_n_k2_22815;auto _n_value_23190=(d::at(_n_array_23188,_n_index_23189)+((_n_b_22806-d::at(this->_n_fb_22689,_n_k2_22815))*_n_q_22816));d::put(_n_array_23188,_n_index_23189,_n_value_23190);return _n_value_23190;})());
(void)(([&](){auto&& _n_array_23191=this->_n_ff_22690;auto _n_index_23192=_n_k2_22815;auto _n_value_23193=(d::at(_n_array_23191,_n_index_23192)+((0.02-d::at(this->_n_ff_22690,_n_k2_22815))*_n_q_22816));d::put(_n_array_23191,_n_index_23192,_n_value_23193);return _n_value_23193;})());
}}
}}

}
}

void _n_box_22692(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,double _a8){double _n_xa_22817=_a0;
double _n_xb_22818=_a1;
double _n_ha_22819=_a2;
double _n_hb_22820=_a3;
double _n_z_22821=_a4;
double _n_r_22822=_a5;
double _n_g_22823=_a6;
double _n_b_22824=_a7;
double _n_a_22825=_a8;
{
double _n_d_22826=(_n_F_22641/_n_z_22821);
double _n_dp_22827=(_n_F_22641/(_n_z_22821+(_n_SHUT_22644*0.35)));
double _n_x0_22828=(_n_VPX_22640+(_n_xa_22817*_n_d_22826));
double _n_x1_22829=(_n_VPX_22640+(_n_xb_22818*_n_d_22826));
double _n_p0_22830=(_n_VPX_22640+(_n_xa_22817*_n_dp_22827));
double _n_p1_22831=(_n_VPX_22640+(_n_xb_22818*_n_dp_22827));
double _n_u0_22832=d::minimum({_n_x0_22828,_n_p0_22830});
double _n_u1_22833=d::maximum({_n_x1_22829,_n_p1_22831});
(void)(([&](){auto _n_argument_23194=_n_u0_22832;auto _n_argument_23195=_n_u1_22833;auto _n_argument_23196=(_n_HY_22639+((1.0-_n_hb_22820)*_n_d_22826));auto _n_argument_23197=(_n_HY_22639+((1.0-_n_ha_22819)*_n_d_22826));auto _n_argument_23198=_n_r_22822;auto _n_argument_23199=_n_g_22823;auto _n_argument_23200=_n_b_22824;auto _n_argument_23201=(_n_a_22825*d::minimum({1.0,(((_n_x1_22829-_n_x0_22828)+0.3)/((_n_u1_22833-_n_u0_22832)+0.3))}));return this->_n_rect_22691(_n_argument_23194,_n_argument_23195,_n_argument_23196,_n_argument_23197,_n_argument_23198,_n_argument_23199,_n_argument_23200,_n_argument_23201);})());

}
}

void _n_glow_22693(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,double _a8){double _n_cx_22834=_a0;
double _n_cy_22835=_a1;
double _n_core_22836=_a2;
double _n_rad_22837=_a3;
double _n_streak_22838=_a4;
double _n_r_22839=_a5;
double _n_g_22840=_a6;
double _n_b_22841=_a7;
double _n_s_22842=_a8;
{
double _n_reach_22843=((_n_rad_22837*4.0)+_n_streak_22838);
double _n_c0_22844=([&](){auto _n_argument_23202=0.0;auto _n_argument_23203=std::floor((_n_cx_22834-_n_reach_22843));return d::maximum({_n_argument_23202,_n_argument_23203});})();
double _n_c1_22845=([&](){auto _n_argument_23204=(_n_W_22637-1.0);auto _n_argument_23205=std::ceil((_n_cx_22834+_n_reach_22843));return d::minimum({_n_argument_23204,_n_argument_23205});})();
double _n_r0_22846=([&](){auto _n_argument_23206=0.0;auto _n_argument_23207=std::floor((_n_cy_22835-(_n_rad_22837*4.0)));return d::maximum({_n_argument_23206,_n_argument_23207});})();
double _n_r1_22847=([&](){auto _n_argument_23208=(_n_H_22638-1.0);auto _n_argument_23209=std::ceil((_n_cy_22835+(_n_rad_22837*4.0)));return d::minimum({_n_argument_23208,_n_argument_23209});})();
{double _n_row_22848=_n_r0_22846;
for(;d::truth((_n_row_22848<=_n_r1_22847));(void)((_n_row_22848++))){d::check_cancel();double _n_dy_22849=((_n_row_22848+0.5)-_n_cy_22835);
{double _n_col_22850=_n_c0_22844;
for(;d::truth((_n_col_22850<=_n_c1_22845));(void)((_n_col_22850++))){d::check_cancel();double _n_dx_22851=((_n_col_22850+0.5)-_n_cx_22834);
double _n_dd_22852=std::sqrt(((_n_dx_22851*_n_dx_22851)+(_n_dy_22849*_n_dy_22849)));
double _n_e_22853=([&](){auto _n_left_23210=(_n_smooth_22666((_n_core_22836+0.7),(_n_core_22836-0.3),_n_dd_22852)*1.2);auto _n_right_23211=(std::exp(((-d::number(_n_dd_22852))/_n_rad_22837))*0.55);return (_n_left_23210+_n_right_23211);})();
if(d::truth((_n_streak_22838>0.0))){d::check_cancel();(void)((_n_e_22853=(_n_e_22853+(([&](){auto _n_left_23212=std::exp(((-d::number(std::fabs(_n_dy_22849)))/0.7));auto _n_right_23213=std::exp(((-d::number(std::fabs(_n_dx_22851)))/_n_streak_22838));return (_n_left_23212*_n_right_23213);})()*0.35))));
}
(void)((_n_e_22853=(_n_e_22853*_n_s_22842)));
double _n_k2_22854=((_n_row_22848*_n_W_22637)+_n_col_22850);
(void)(((([&](){auto&& _n_array_23214=this->_n_fr_22687;auto _n_index_23215=_n_k2_22854;auto _n_value_23216=(d::at(_n_array_23214,_n_index_23215)+(_n_r_22839*_n_e_22853));d::put(_n_array_23214,_n_index_23215,_n_value_23216);return _n_value_23216;})(),([&](){auto&& _n_array_23217=this->_n_fg_22688;auto _n_index_23218=_n_k2_22854;auto _n_value_23219=(d::at(_n_array_23217,_n_index_23218)+(_n_g_22840*_n_e_22853));d::put(_n_array_23217,_n_index_23218,_n_value_23219);return _n_value_23219;})()),([&](){auto&& _n_array_23220=this->_n_fb_22689;auto _n_index_23221=_n_k2_22854;auto _n_value_23222=(d::at(_n_array_23220,_n_index_23221)+(_n_b_22841*_n_e_22853));d::put(_n_array_23220,_n_index_23221,_n_value_23222);return _n_value_23222;})()));
}}
}}

}
}

explicit Native_night_highway(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_22671=d::map(_n_meta_22635->_p_palette,_n_hex_22668);
this->_n_N_22672=(_n_W_22637*_n_H_22638);
this->_n_out_22673=d::Array<d::String,false>(size_t(this->_n_N_22672));
this->_n_lut_22674=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_warm_22676=d::Array<float,true>(size_t(_n_W_22637));
{double _n_x_22751=0.0;
for(;d::truth((_n_x_22751<_n_W_22637));(void)((_n_x_22751++))){d::check_cancel();(void)(([&](){auto&& _n_array_22996=this->_n_warm_22676;auto _n_index_22997=_n_x_22751;auto _n_value_22998=std::exp((-d::number(std::pow((((_n_x_22751+0.5)-_n_VPX_22640)/62.0),2.0))));d::put(_n_array_22996,_n_index_22997,_n_value_22998);return _n_value_22998;})());
}}
this->_n_sr_22677=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_sg_22678=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_sb_22679=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_sfloor_22680=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_stars_22681=d::Array<double,false>{};
{double _n_r_22758=0.0;
for(;d::truth((_n_r_22758<_n_HY_22639));(void)((_n_r_22758++))){d::check_cancel();double _n_y_22759=(_n_r_22758+0.5);
double _n_v_22760=(_n_y_22759/_n_HY_22639);
{double _n_x_22761=0.0;
for(;d::truth((_n_x_22761<_n_W_22637));(void)((_n_x_22761++))){d::check_cancel();double _n_k_22762=((_n_r_22758*_n_W_22637)+_n_x_22761);
double _n_wm_22763=d::at(this->_n_warm_22676,_n_x_22761);
double _n_ft_22764=this->_n_farTop_22682(_n_x_22761);
double _n_above_22765=d::maximum({0.0,(_n_ft_22764-_n_y_22759)});
double _n_cool_22766=_n_smooth_22666(0.0,0.7,_n_v_22760);
double _n_cr_22767=_n_mix_22667(0.005,0.06,_n_cool_22766);
double _n_cg_22768=_n_mix_22667(0.008,0.075,_n_cool_22766);
double _n_cb_22769=_n_mix_22667(0.028,0.2,_n_cool_22766);
double _n_violet_22770=(std::exp(((-d::number(_n_above_22765))/16.0))*(0.5+(0.5*_n_wm_22763)));
double _n_rose_22771=(std::exp(((-d::number(_n_above_22765))/7.0))*(0.25+(0.75*_n_wm_22763)));
double _n_hot_22772=((std::exp(((-d::number(_n_above_22765))/3.5))*_n_wm_22763)*_n_wm_22763);
(void)((_n_cr_22767=(_n_cr_22767+(((0.16*_n_violet_22770)+((0.4*_n_rose_22771)*(1.0-_n_hot_22772)))+(1.0*_n_hot_22772)))));
(void)((_n_cg_22768=(_n_cg_22768+(((0.05*_n_violet_22770)+((0.1*_n_rose_22771)*(1.0-_n_hot_22772)))+(0.72*_n_hot_22772)))));
(void)((_n_cb_22769=(_n_cb_22769+(((0.22*_n_violet_22770)+((0.3*_n_rose_22771)*(1.0-_n_hot_22772)))+(0.3*_n_hot_22772)))));
double _n_fl_22773=((0.13*_n_v_22760)*_n_v_22760);
bool _n_open_22774=true;
double _n_cl_22775=([&](){auto _n_left_22999=_n_fbm_22664((_n_x_22761*0.011),(_n_y_22759*0.16),4.0,std::optional<double>{});auto _n_right_23000=(0.05*std::sin((_n_x_22761*0.02)));return (_n_left_22999+_n_right_23000);})();
double _n_band_22776=([&](){auto _n_left_23001=_n_smooth_22666(22.0,31.0,_n_y_22759);auto _n_right_23002=_n_smooth_22666(46.0,38.0,_n_y_22759);return (_n_left_23001*_n_right_23002);})();
double _n_c_22777=(_n_smooth_22666(0.56,0.7,_n_cl_22775)*_n_band_22776);
if(d::truth((_n_c_22777>0.01))){d::check_cancel();double _n_under_22778=([&](){auto _n_argument_23003=0.62;auto _n_argument_23004=0.5;auto _n_argument_23005=_n_fbm_22664((_n_x_22761*0.011),((_n_y_22759+1.6)*0.16),4.0,std::optional<double>{});return _n_smooth_22666(_n_argument_23003,_n_argument_23004,_n_argument_23005);})();
double _n_glow_22779=(((0.35+(0.65*_n_wm_22763))*(0.4+(0.6*_n_under_22778)))*_n_smooth_22666(24.0,42.0,_n_y_22759));
(void)((_n_cr_22767=_n_mix_22667(_n_cr_22767,(0.16+(0.85*_n_glow_22779)),_n_c_22777)));
(void)((_n_cg_22768=_n_mix_22667(_n_cg_22768,(0.1+(0.36*_n_glow_22779)),_n_c_22777)));
(void)((_n_cb_22769=_n_mix_22667(_n_cb_22769,(0.22+(0.3*_n_glow_22779)),_n_c_22777)));
(void)((_n_open_22774=(_n_c_22777<0.05)));
}
double _n_dmx_22780=((_n_x_22761+0.5)-d::at(_n_MOON_22655,0.0));
double _n_dmy_22781=(_n_y_22759-d::at(_n_MOON_22655,1.0));
double _n_dm_22782=std::sqrt(((_n_dmx_22780*_n_dmx_22780)+(_n_dmy_22781*_n_dmy_22781)));
double _n_halo_22783=([&](){auto _n_left_23006=(std::exp(((-d::number(_n_dm_22782))/7.0))*0.22);auto _n_right_23007=(std::exp(((-d::number(_n_dm_22782))/22.0))*0.07);return (_n_left_23006+_n_right_23007);})();
(void)((((_n_cr_22767=(_n_cr_22767+(_n_halo_22783*0.8))),(_n_cg_22768=(_n_cg_22768+(_n_halo_22783*0.85)))),(_n_cb_22769=(_n_cb_22769+_n_halo_22783))));
if(d::truth((_n_dm_22782<(_n_MOON_R_22656+0.6)))){d::check_cancel();double _n_inside_22784=_n_smooth_22666((_n_MOON_R_22656+0.5),(_n_MOON_R_22656-0.5),_n_dm_22782);
double _n_ox_22785=(_n_dmx_22780-2.3);
double _n_oy_22786=(_n_dmy_22781+1.7);
double _n_lit_22787=(_n_inside_22784*([&](){auto _n_argument_23008=(_n_MOON_R_22656-0.6);auto _n_argument_23009=(_n_MOON_R_22656+0.4);auto _n_argument_23010=std::sqrt(((_n_ox_22785*_n_ox_22785)+(_n_oy_22786*_n_oy_22786)));return _n_smooth_22666(_n_argument_23008,_n_argument_23009,_n_argument_23010);})());
double _n_earth_22788=(_n_inside_22784*0.08);
(void)((_n_cr_22767=(_n_mix_22667(_n_cr_22767,1.0,_n_lit_22787)+(_n_earth_22788*0.6))));
(void)((_n_cg_22768=(_n_mix_22667(_n_cg_22768,0.95,_n_lit_22787)+(_n_earth_22788*0.7))));
(void)((_n_cb_22769=(_n_mix_22667(_n_cb_22769,0.82,_n_lit_22787)+_n_earth_22788)));
(void)((_n_open_22774=false));
}
if(d::truth((_n_y_22759>=_n_ft_22764))){d::check_cancel();double _n_depth_22789=(_n_y_22759-_n_ft_22764);
double _n_tex_22790=_n_fbm_22664((_n_x_22761*0.12),(_n_y_22759*0.25),3.0,std::optional<double>{});
double _n_rim_22791=(_n_smooth_22666(1.4,0.0,_n_depth_22789)*_n_wm_22763);
double _n_haze_22792=(_n_smooth_22666((_n_HY_22639-4.0),_n_HY_22639,_n_y_22759)*(0.3+(0.7*_n_wm_22763)));
(void)((_n_cr_22767=(((0.07+(0.04*_n_tex_22790))+(0.7*_n_rim_22791))+(0.14*_n_haze_22792))));
(void)((_n_cg_22768=(((0.04+(0.02*_n_tex_22790))+(0.28*_n_rim_22791))+(0.06*_n_haze_22792))));
(void)((_n_cb_22769=(((0.11+(0.05*_n_tex_22790))+(0.22*_n_rim_22791))+(0.1*_n_haze_22792))));
(void)((_n_fl_22773=0.02));
(void)((_n_open_22774=false));
}
double _n_nt_22793=this->_n_nearTop_22683(_n_x_22761);
if(d::truth((_n_y_22759>=_n_nt_22793))){d::check_cancel();double _n_tex_22794=_n_fbm_22664((_n_x_22761*0.2),(_n_y_22759*0.3),3.0,std::optional<double>{});
double _n_rim_22795=(_n_smooth_22666(1.2,0.0,(_n_y_22759-_n_nt_22793))*(0.2+(0.6*_n_wm_22763)));
(void)((_n_cr_22767=((0.025+(0.02*_n_tex_22794))+(0.3*_n_rim_22795))));
(void)((_n_cg_22768=((0.02+(0.015*_n_tex_22794))+(0.1*_n_rim_22795))));
(void)((_n_cb_22769=((0.045+(0.03*_n_tex_22794))+(0.2*_n_rim_22795))));
(void)((_n_fl_22773=0.01));
(void)((_n_open_22774=false));
}
(void)((((([&](){auto&& _n_array_23011=this->_n_sr_22677;auto _n_index_23012=_n_k_22762;auto _n_value_23013=_n_cr_22767;d::put(_n_array_23011,_n_index_23012,_n_value_23013);return _n_value_23013;})(),([&](){auto&& _n_array_23014=this->_n_sg_22678;auto _n_index_23015=_n_k_22762;auto _n_value_23016=_n_cg_22768;d::put(_n_array_23014,_n_index_23015,_n_value_23016);return _n_value_23016;})()),([&](){auto&& _n_array_23017=this->_n_sb_22679;auto _n_index_23018=_n_k_22762;auto _n_value_23019=_n_cb_22769;d::put(_n_array_23017,_n_index_23018,_n_value_23019);return _n_value_23019;})()),([&](){auto&& _n_array_23020=this->_n_sfloor_22680;auto _n_index_23021=_n_k_22762;auto _n_value_23022=_n_fl_22773;d::put(_n_array_23020,_n_index_23021,_n_value_23022);return _n_value_23022;})()));
double _n_chance_22796=(0.993-((0.02*(1.0-_n_v_22760))*(1.0-_n_v_22760)));
if(((d::truth(_n_open_22774)&&d::truth((_n_v_22760<0.7)))&&d::truth((_n_hash_22662(_n_x_22761,((_n_r_22758*5.0)+3.0))>_n_chance_22796)))){d::check_cancel();double _n_s_22797=(([&](){auto _n_left_23023=(0.55+(0.45*_n_hash_22662(_n_r_22758,(_n_x_22761+9.0))));auto _n_right_23024=_n_smooth_22666(0.7,0.2,_n_v_22760);return (_n_left_23023*_n_right_23024);})()*(1.0-((0.6*_n_wm_22763)*_n_v_22760)));
(void)(([&](){auto _n_argument_23025=_n_k_22762;auto _n_argument_23026=(1.0+std::floor((_n_hash_22662(_n_x_22761,_n_r_22758)*5.0)));auto _n_argument_23027=(_n_hash_22662((_n_r_22758*3.0),_n_x_22761)*6.283);auto _n_argument_23028=_n_s_22797;return this->_n_stars_22681.push(_n_argument_23025,_n_argument_23026,_n_argument_23027,_n_argument_23028);})());
}
}}
}}
this->_n_gZ_22684=d::Array<float,true>(size_t(_n_H_22638));
this->_n_gD_22685=d::Array<float,true>(size_t(_n_H_22638));
this->_n_gEZ_22686=d::Array<float,true>(size_t(_n_H_22638));
{double _n_r_22798=_n_HY_22639;
for(;d::truth((_n_r_22798<_n_H_22638));(void)((_n_r_22798++))){d::check_cancel();double _n_d_22799=((_n_r_22798+0.5)-_n_HY_22639);
(void)(([&](){auto&& _n_array_23029=this->_n_gD_22685;auto _n_index_23030=_n_r_22798;auto _n_value_23031=_n_d_22799;d::put(_n_array_23029,_n_index_23030,_n_value_23031);return _n_value_23031;})());
(void)(([&](){auto&& _n_array_23032=this->_n_gZ_22684;auto _n_index_23033=_n_r_22798;auto _n_value_23034=(_n_F_22641/_n_d_22799);d::put(_n_array_23032,_n_index_23033,_n_value_23034);return _n_value_23034;})());
(void)(([&](){auto&& _n_array_23035=this->_n_gEZ_22686;auto _n_index_23036=_n_r_22798;auto _n_value_23037=((_n_F_22641/d::maximum({0.05,(_n_d_22799-0.5)}))-(_n_F_22641/(_n_d_22799+0.5)));d::put(_n_array_23035,_n_index_23036,_n_value_23037);return _n_value_23037;})());
}}
this->_n_fr_22687=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_fg_22688=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_fb_22689=d::Array<float,true>(size_t(this->_n_N_22672));
this->_n_ff_22690=d::Array<float,true>(size_t(this->_n_N_22672));
_render=[=]( double _a0,std::shared_ptr<_n_Record_22984> _a1) mutable ->d::String{double _n_t_22855=_a0;
auto _n_binding_23040=(d::present(_a1)?_a1:([&](){auto _n_object_23039=std::make_shared<_n_Record_22984>();return _n_object_23039;})());
std::optional<d::Array<uint8_t,true>> _n_color_22856=_n_binding_23040->_p_color;
{
double _n_tt_22857=d::mod((d::mod(_n_t_22855,_n_T_22642)+_n_T_22642),_n_T_22642);
double _n_cam_22858=(_n_V_22643*_n_tt_22857);
double _n_ahead_22859=(15.0+(4.0*std::sin((((_n_tt_22857/_n_T_22642)*ascii::PI)*2.0))));
d::Array<double,false> _n_cars_22860=d::Array<double,false>{};
for(auto &&_n_item_23041:_n_ONCOMING_22657){d::check_cancel();double _n_t0_22861=_n_item_23041;
{
double _n_z_22862=(_n_FAR_22645-((_n_V_22643+16.0)*d::mod((d::mod((_n_tt_22857-_n_t0_22861),_n_T_22642)+_n_T_22642),_n_T_22642)));
if(d::truth((_n_z_22862>0.7))){d::check_cancel();(void)(_n_cars_22860.push(_n_z_22862));
}

}
}
double _n_sign_22863=(_n_FAR_22645-(_n_V_22643*d::mod((_n_tt_22857+6.1),_n_T_22642)));
(void)((((this->_n_fr_22687.set(this->_n_sr_22677),this->_n_fg_22688.set(this->_n_sg_22678)),this->_n_fb_22689.set(this->_n_sb_22679)),this->_n_ff_22690.set(this->_n_sfloor_22680)));
{double _n_i_22864=0.0;
for(;d::truth((_n_i_22864<double(this->_n_stars_22681.size())));(void)((_n_i_22864=(_n_i_22864+4.0)))){d::check_cancel();double _n_k_22865=d::at(this->_n_stars_22681,_n_i_22864);
double _n_tw_22866=(0.55+(0.45*std::sin(((((((_n_tt_22857/_n_T_22642)*ascii::PI)*2.0)*d::at(this->_n_stars_22681,(_n_i_22864+1.0)))*3.0)+d::at(this->_n_stars_22681,(_n_i_22864+2.0))))));
double _n_s_22867=(d::at(this->_n_stars_22681,(_n_i_22864+3.0))*_n_tw_22866);
(void)(((([&](){auto&& _n_array_23042=this->_n_fr_22687;auto _n_index_23043=_n_k_22865;auto _n_value_23044=d::maximum({d::at(this->_n_fr_22687,_n_k_22865),(_n_s_22867*0.9)});d::put(_n_array_23042,_n_index_23043,_n_value_23044);return _n_value_23044;})(),([&](){auto&& _n_array_23045=this->_n_fg_22688;auto _n_index_23046=_n_k_22865;auto _n_value_23047=d::maximum({d::at(this->_n_fg_22688,_n_k_22865),(_n_s_22867*0.93)});d::put(_n_array_23045,_n_index_23046,_n_value_23047);return _n_value_23047;})()),([&](){auto&& _n_array_23048=this->_n_fb_22689;auto _n_index_23049=_n_k_22865;auto _n_value_23050=d::maximum({d::at(this->_n_fb_22689,_n_k_22865),_n_s_22867});d::put(_n_array_23048,_n_index_23049,_n_value_23050);return _n_value_23050;})()));
}}
{double _n_r_22868=_n_HY_22639;
for(;d::truth((_n_r_22868<_n_H_22638));(void)((_n_r_22868++))){d::check_cancel();double _n_d_22869=d::at(this->_n_gD_22685,_n_r_22868);
double _n_z_22870=d::at(this->_n_gZ_22684,_n_r_22868);
double _n_ez_22871=d::at(this->_n_gEZ_22686,_n_r_22868);
double _n_cw_22872=(1.0/_n_d_22869);
double _n_w0_22873=(((_n_z_22870-(_n_ez_22871/2.0))+_n_cam_22858)-_n_SHUT_22644);
double _n_w1_22874=((_n_z_22870+(_n_ez_22871/2.0))+_n_cam_22858);
double _n_dash_22875=(([&](){auto _n_left_23051=_n_span_22670(_n_w1_22874,_n_DASH_22653,_n_DASH_GAP_22654);auto _n_right_23052=_n_span_22670(_n_w0_22873,_n_DASH_22653,_n_DASH_GAP_22654);return (_n_left_23051-_n_right_23052);})()/(_n_w1_22874-_n_w0_22873));
double _n_beamZ_22876=(_n_smooth_22666(1.2,3.5,_n_z_22870)/(1.0+std::pow((_n_z_22870/13.0),2.0)));
double _n_sheen_22877=std::exp(((-d::number(_n_d_22869))/2.4));
double _n_texAmp_22878=_n_smooth_22666(1.0,9.0,_n_d_22869);
double _n_zw_22879=((_n_z_22870+_n_cam_22858)*0.125);
{double _n_x_22880=0.0;
for(;d::truth((_n_x_22880<_n_W_22637));(void)((_n_x_22880++))){d::check_cancel();double _n_k_22881=((_n_r_22868*_n_W_22637)+_n_x_22880);
double _n_X_22882=(((_n_x_22880+0.5)-_n_VPX_22640)*_n_cw_22872);
double _n_wm_22883=d::at(this->_n_warm_22676,_n_x_22880);
bool _n_road_22884=([&]()->bool{auto _n_logical_23053=(_n_X_22882>_n_ROAD_L_22647);return d::truth(_n_logical_23053)?(_n_X_22882<_n_ROAD_R_22646):_n_logical_23053;})();
double _n_beam_22885=(_n_beamZ_22876*([&](){auto _n_left_23054=std::exp((-d::number(std::pow((_n_X_22882/(0.5+(0.045*_n_z_22870))),2.0))));auto _n_right_23055=(0.25*std::exp((-d::number(std::pow((_n_X_22882/(1.6+(0.12*_n_z_22870))),2.0)))));return (_n_left_23054+_n_right_23055);})());
if((d::truth((_n_z_22870>_n_ahead_22859))&&d::truth((std::fabs(_n_X_22882)<0.55)))){d::check_cancel();(void)((_n_beam_22885=(_n_beam_22885*0.15)));
}
double _n_lr_22886=(0.16+_n_beam_22885);
double _n_lg_22887=(0.15+(0.92*_n_beam_22885));
double _n_lb_22888=(0.26+(0.7*_n_beam_22885));
for(auto &&_n_item_23056:_n_cars_22860){d::check_cancel();double _n_cz_22889=_n_item_23056;
{
if(d::truth((_n_z_22870>=_n_cz_22889))){d::check_cancel();continue;
}
double _n_dz_22890=(_n_cz_22889-_n_z_22870);
double _n_wash_22891=([&](){auto _n_left_23057=(([&](){auto _n_left_23059=std::exp((-d::number(std::pow(((_n_X_22882-_n_LANE_L_22649)/(0.45+(0.13*_n_dz_22890))),2.0))));auto _n_right_23060=_n_smooth_22666(0.0,1.5,_n_dz_22890);return (_n_left_23059*_n_right_23060);})()/(1.0+std::pow((_n_dz_22890/9.0),2.0)));auto _n_right_23058=_n_smooth_22666(_n_FAR_22645,70.0,_n_cz_22889);return (_n_left_23057*_n_right_23058);})();
(void)((((_n_lr_22886=(_n_lr_22886+(0.75*_n_wash_22891))),(_n_lg_22887=(_n_lg_22887+(0.8*_n_wash_22891)))),(_n_lb_22888=(_n_lb_22888+(0.95*_n_wash_22891)))));

}
}
double _n_cr_22892{};
double _n_cg_22893{};
double _n_cb_22894{};
if(d::truth(_n_road_22884)){d::check_cancel();double _n_grit_22895=(0.85+((0.3*_n_hash_22662(((_n_x_22880*7.0)+_n_r_22868),d::mod(double(d::i32((_n_zw_22879*10.0))|d::i32(0.0)),240.0)))*_n_texAmp_22878));
double _n_a_22896=(0.16*_n_grit_22895);
(void)((((_n_cr_22892=(_n_a_22896*_n_lr_22886)),(_n_cg_22893=(_n_a_22896*_n_lg_22887))),(_n_cb_22894=(_n_a_22896*_n_lb_22888))));
(void)((((_n_cr_22892=(_n_cr_22892+(_n_sheen_22877*((0.5*_n_wm_22883)+0.12)))),(_n_cg_22893=(_n_cg_22893+(_n_sheen_22877*((0.24*_n_wm_22883)+0.08))))),(_n_cb_22894=(_n_cb_22894+(_n_sheen_22877*((0.22*_n_wm_22883)+0.16))))));
}else {d::check_cancel();double _n_tex_22897=([&](){auto _n_argument_23061=0.4;auto _n_argument_23062=0.72;auto _n_argument_23063=_n_fbm_22664((_n_X_22882*5.0),_n_zw_22879,2.0,std::optional<double>(24.0));return _n_smooth_22666(_n_argument_23061,_n_argument_23062,_n_argument_23063);})();
double _n_a_22898=(0.012+(((0.22*_n_tex_22897)*_n_tex_22897)*(0.3+(0.7*_n_texAmp_22878))));
double _n_l_22899=(((_n_lr_22886+_n_lg_22887)+_n_lb_22888)/3.0);
(void)((((_n_cr_22892=(_n_a_22898*((_n_l_22899*1.05)+(0.3*_n_beam_22885)))),(_n_cg_22893=(_n_a_22898*((_n_l_22899*0.72)+(0.2*_n_beam_22885))))),(_n_cb_22894=(_n_a_22898*((_n_l_22899*0.9)+(0.05*_n_beam_22885))))));
(void)((((_n_cr_22892=(_n_cr_22892+((_n_sheen_22877*0.3)*_n_wm_22883))),(_n_cg_22893=(_n_cg_22893+((_n_sheen_22877*0.13)*_n_wm_22883)))),(_n_cb_22894=(_n_cb_22894+((_n_sheen_22877*0.16)*_n_wm_22883)))));
}
double _n_lo_22900=(_n_X_22882-(_n_cw_22872/2.0));
double _n_hi_22901=(_n_X_22882+(_n_cw_22872/2.0));
double _n_yel_22902=((_n_overlap_22669(_n_lo_22900,_n_hi_22901,(_n_CENTRE_22648-0.05),(_n_CENTRE_22648+0.05))/_n_cw_22872)*_n_dash_22875);
double _n_wht_22903=(([&](){auto _n_left_23064=_n_overlap_22669(_n_lo_22900,_n_hi_22901,(_n_ROAD_R_22646-0.04),(_n_ROAD_R_22646+0.04));auto _n_right_23065=_n_overlap_22669(_n_lo_22900,_n_hi_22901,(_n_ROAD_L_22647-0.04),(_n_ROAD_L_22647+0.04));return (_n_left_23064+_n_right_23065);})()/_n_cw_22872);
double _n_back_22904=((0.22+(1.6*(_n_lr_22886-0.16)))+(0.25*_n_sheen_22877));
if(d::truth((_n_yel_22902>0.0))){d::check_cancel();(void)((((_n_cr_22892=_n_mix_22667(_n_cr_22892,(1.0*_n_back_22904),_n_yel_22902)),(_n_cg_22893=_n_mix_22667(_n_cg_22893,(0.72*_n_back_22904),_n_yel_22902))),(_n_cb_22894=_n_mix_22667(_n_cb_22894,(0.24*_n_back_22904),_n_yel_22902))));
}
if(d::truth((_n_wht_22903>0.0))){d::check_cancel();(void)((((_n_cr_22892=_n_mix_22667(_n_cr_22892,(0.85*_n_back_22904),_n_wht_22903)),(_n_cg_22893=_n_mix_22667(_n_cg_22893,(0.86*_n_back_22904),_n_wht_22903))),(_n_cb_22894=_n_mix_22667(_n_cb_22894,(0.92*_n_back_22904),_n_wht_22903))));
}
if(d::truth((_n_z_22870<_n_ahead_22859))){d::check_cancel();double _n_dz_22905=(_n_ahead_22859-_n_z_22870);
double _n_s_22906=(0.06+(0.012*_n_dz_22905));
double _n_red_22907=(([&](){auto _n_left_23066=([&](){auto _n_left_23068=std::exp((-d::number(std::pow(((_n_X_22882-0.36)/_n_s_22906),2.0))));auto _n_right_23069=std::exp((-d::number(std::pow(((_n_X_22882+0.36)/_n_s_22906),2.0))));return (_n_left_23068+_n_right_23069);})();auto _n_right_23067=std::exp(((-d::number(_n_dz_22905))/2.2));return (_n_left_23066*_n_right_23067);})()*0.7);
(void)((((_n_cr_22892=(_n_cr_22892+_n_red_22907)),(_n_cg_22893=(_n_cg_22893+(_n_red_22907*0.12)))),(_n_cb_22894=(_n_cb_22894+(_n_red_22907*0.12)))));
}
(void)((((([&](){auto&& _n_array_23070=this->_n_fr_22687;auto _n_index_23071=_n_k_22881;auto _n_value_23072=_n_cr_22892;d::put(_n_array_23070,_n_index_23071,_n_value_23072);return _n_value_23072;})(),([&](){auto&& _n_array_23073=this->_n_fg_22688;auto _n_index_23074=_n_k_22881;auto _n_value_23075=_n_cg_22893;d::put(_n_array_23073,_n_index_23074,_n_value_23075);return _n_value_23075;})()),([&](){auto&& _n_array_23076=this->_n_fb_22689;auto _n_index_23077=_n_k_22881;auto _n_value_23078=_n_cb_22894;d::put(_n_array_23076,_n_index_23077,_n_value_23078);return _n_value_23078;})()),([&](){auto&& _n_array_23079=this->_n_ff_22690;auto _n_index_23080=_n_k_22881;auto _n_value_23081=(d::truth(_n_road_22884)?0.03:0.02);d::put(_n_array_23079,_n_index_23080,_n_value_23081);return _n_value_23081;})()));
}}
}}
for(auto &&_n_item_23082:d::Array<double,false>{(_n_POLE_X_22650-0.45),(_n_POLE_X_22650+0.45)}){d::check_cancel();double _n_xw_22908=_n_item_23082;
{
{double _n_x_22909=(_n_VPX_22640+3.0);
for(;d::truth((_n_x_22909<_n_W_22637));(void)((_n_x_22909++))){d::check_cancel();double _n_dx_22910=((_n_x_22909+0.5)-_n_VPX_22640);
double _n_z_22911=((_n_F_22641*_n_xw_22908)/_n_dx_22910);
if(d::truth((_n_z_22911>_n_FAR_22645))){d::check_cancel();continue;
}
double _n_u_22912=(d::mod((d::mod(((_n_z_22911+_n_cam_22858)-3.0),_n_POLE_GAP_22651)+_n_POLE_GAP_22651),_n_POLE_GAP_22651)/_n_POLE_GAP_22651);
double _n_h_22913=(5.6-((2.4*_n_u_22912)*(1.0-_n_u_22912)));
double _n_yw_22914=(_n_HY_22639+(((1.0-_n_h_22913)*_n_dx_22910)/_n_xw_22908));
double _n_thick_22915=(0.55*std::sqrt((1.0+std::pow(((1.0-_n_h_22913)/_n_xw_22908),2.0))));
double _n_r0_22916=([&](){auto _n_argument_23083=0.0;auto _n_argument_23084=std::floor((_n_yw_22914-_n_thick_22915));return d::maximum({_n_argument_23083,_n_argument_23084});})();
double _n_r1_22917=([&](){auto _n_argument_23085=(_n_HY_22639+20.0);auto _n_argument_23086=std::ceil((_n_yw_22914+_n_thick_22915));return d::minimum({_n_argument_23085,_n_argument_23086});})();
{double _n_r_22918=_n_r0_22916;
for(;(d::truth((_n_r_22918<=_n_r1_22917))&&d::truth((_n_r_22918<_n_H_22638)));(void)((_n_r_22918++))){d::check_cancel();double _n_a_22919=(_n_clamp_22665((1.0-(std::fabs(((_n_r_22918+0.5)-_n_yw_22914))/_n_thick_22915)))*0.85);
double _n_k_22920=((_n_r_22918*_n_W_22637)+_n_x_22909);
(void)((((([&](){auto&& _n_array_23087=this->_n_fr_22687;auto _n_index_23088=_n_k_22920;auto _n_value_23089=_n_mix_22667(d::at(this->_n_fr_22687,_n_k_22920),0.03,_n_a_22919);d::put(_n_array_23087,_n_index_23088,_n_value_23089);return _n_value_23089;})(),([&](){auto&& _n_array_23090=this->_n_fg_22688;auto _n_index_23091=_n_k_22920;auto _n_value_23092=_n_mix_22667(d::at(this->_n_fg_22688,_n_k_22920),0.025,_n_a_22919);d::put(_n_array_23090,_n_index_23091,_n_value_23092);return _n_value_23092;})()),([&](){auto&& _n_array_23093=this->_n_fb_22689;auto _n_index_23094=_n_k_22920;auto _n_value_23095=_n_mix_22667(d::at(this->_n_fb_22689,_n_k_22920),0.05,_n_a_22919);d::put(_n_array_23093,_n_index_23094,_n_value_23095);return _n_value_23095;})()),([&](){auto&& _n_array_23096=this->_n_ff_22690;auto _n_index_23097=_n_k_22920;auto _n_value_23098=_n_mix_22667(d::at(this->_n_ff_22690,_n_k_22920),0.0,_n_a_22919);d::put(_n_array_23096,_n_index_23097,_n_value_23098);return _n_value_23098;})()));
}}
}}

}
}
d::Array<std::shared_ptr<std::tuple<double,std::function<void()>>>,false> _n_things_22921=d::Array<std::shared_ptr<std::tuple<double,std::function<void()>>>,false>{};
for(auto &&_n_item_23099:d::Array<std::array<double,4>,false>{std::array<double,4>{(_n_ROAD_R_22646+0.3),0.0,_n_POST_GAP_22652,0.0},std::array<double,4>{(_n_ROAD_L_22647-0.3),6.0,_n_POST_GAP_22652,1.0},std::array<double,4>{_n_POLE_X_22650,3.0,_n_POLE_GAP_22651,2.0}}){d::check_cancel();auto _n_binding_23100=_n_item_23099;
double _n_xp_22922=d::at(_n_binding_23100,0.0);
double _n_off_22923=d::at(_n_binding_23100,1.0);
double _n_gap_22924=d::at(_n_binding_23100,2.0);
double _n_kind_22925=d::at(_n_binding_23100,3.0);
{
{double _n_z_22926=d::mod((d::mod((_n_off_22923-_n_cam_22858),_n_gap_22924)+_n_gap_22924),_n_gap_22924);
for(;d::truth((_n_z_22926<_n_FAR_22645));(void)((_n_z_22926=(_n_z_22926+_n_gap_22924)))){d::check_cancel();if(d::truth((_n_z_22926<0.7))){d::check_cancel();continue;
}
if(d::truth((_n_kind_22925==2.0))){d::check_cancel();(void)(_n_things_22921.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_z_22926,[=]( ) mutable ->void{{
(void)(this->_n_box_22692((_n_xp_22922-0.12),(_n_xp_22922+0.12),0.0,6.3,_n_z_22926,0.008,0.006,0.012,1.0));
(void)(this->_n_box_22692((_n_xp_22922-0.6),(_n_xp_22922+0.6),5.5,5.66,_n_z_22926,0.008,0.006,0.012,1.0));

}
})));
}else {d::check_cancel();(void)(_n_things_22921.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_z_22926,[=]( ) mutable ->void{{
double _n_lit_22927=(_n_clamp_22665((7.0/_n_z_22926))*(d::truth((_n_kind_22925==0.0))?1.0:0.7));
(void)(this->_n_box_22692((_n_xp_22922-0.035),(_n_xp_22922+0.035),0.0,0.5,_n_z_22926,(0.06+(0.26*_n_lit_22927)),(0.06+(0.25*_n_lit_22927)),(0.08+(0.24*_n_lit_22927)),1.0));
double _n_s_22928=(0.25+(1.1*_n_lit_22927));
(void)(this->_n_box_22692((_n_xp_22922-0.04),(_n_xp_22922+0.04),0.37,0.47,_n_z_22926,_n_s_22928,(_n_s_22928*(d::truth((_n_kind_22925==0.0))?0.9:0.62)),(_n_s_22928*(d::truth((_n_kind_22925==0.0))?0.75:0.2)),1.0));

}
})));
}
}}

}
}
if(d::truth((_n_sign_22863>0.7))){d::check_cancel();(void)(_n_things_22921.push(std::make_shared<std::tuple<double,std::function<void()>>>((_n_sign_22863+3.0),[=]( ) mutable ->void{{
double _n_d_22929=(_n_F_22641/(_n_sign_22863+3.0));
double _n_x0_22930=(_n_VPX_22640+(7.0*_n_d_22929));
double _n_x1_22931=(_n_VPX_22640+(14.0*_n_d_22929));
double _n_y0_22932=(_n_HY_22639+((1.0-1.3)*_n_d_22929));
double _n_y1_22933=(_n_HY_22639+_n_d_22929);
(void)(this->_n_rect_22691(_n_x0_22930,_n_x1_22931,_n_y0_22932,_n_y1_22933,0.06,0.05,0.08,1.0));
{double _n_i_22934=0.0;
for(;d::truth((_n_i_22934<6.0));(void)((_n_i_22934++))){d::check_cancel();if(d::truth((_n_i_22934==4.0))){d::check_cancel();continue;
}
double _n_wx_22935=(_n_x0_22930+(((_n_i_22934+0.3)/6.0)*(_n_x1_22931-_n_x0_22930)));
(void)(this->_n_rect_22691(_n_wx_22935,(_n_wx_22935+((0.5*(_n_x1_22931-_n_x0_22930))/6.0)),(_n_y0_22932+(0.35*(_n_y1_22933-_n_y0_22932))),(_n_y0_22932+(0.6*(_n_y1_22933-_n_y0_22932))),1.0,0.7,0.35,0.9));
}}

}
})));
(void)(_n_things_22921.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_sign_22863,[=]( ) mutable ->void{{
double _n_d_22936=(_n_F_22641/_n_sign_22863);
(void)(this->_n_box_22692(4.6,4.72,0.0,2.4,_n_sign_22863,0.05,0.04,0.06,1.0));
double _n_x0_22937=(_n_VPX_22640+(3.0*_n_d_22936));
double _n_x1_22938=(_n_VPX_22640+(6.3*_n_d_22936));
double _n_y0_22939=(_n_HY_22639+((1.0-3.6)*_n_d_22936));
double _n_y1_22940=(_n_HY_22639+((1.0-2.4)*_n_d_22936));
double _n_bw_22941=(_n_x1_22938-_n_x0_22937);
double _n_c0_22942=([&](){auto _n_argument_23101=0.0;auto _n_argument_23102=std::floor(_n_x0_22937);return d::maximum({_n_argument_23101,_n_argument_23102});})();
double _n_c1_22943=([&](){auto _n_argument_23103=(_n_W_22637-1.0);auto _n_argument_23104=(std::ceil(_n_x1_22938)-1.0);return d::minimum({_n_argument_23103,_n_argument_23104});})();
double _n_r0_22944=([&](){auto _n_argument_23105=0.0;auto _n_argument_23106=std::floor(_n_y0_22939);return d::maximum({_n_argument_23105,_n_argument_23106});})();
double _n_r1_22945=([&](){auto _n_argument_23107=(_n_H_22638-1.0);auto _n_argument_23108=(std::ceil(_n_y1_22940)-1.0);return d::minimum({_n_argument_23107,_n_argument_23108});})();
{double _n_r_22946=_n_r0_22944;
for(;d::truth((_n_r_22946<=_n_r1_22945));(void)((_n_r_22946++))){d::check_cancel();{double _n_x_22947=_n_c0_22942;
for(;d::truth((_n_x_22947<=_n_c1_22943));(void)((_n_x_22947++))){d::check_cancel();double _n_k_22948=((_n_r_22946*_n_W_22637)+_n_x_22947);
double _n_u_22949=(((((_n_x_22947+0.5)-_n_x0_22937)/_n_bw_22941)*22.0)-1.5);
double _n_v_22950=(((((_n_r_22946+0.5)-_n_y0_22939)/(_n_y1_22940-_n_y0_22939))*8.0)-1.5);
double _n_cr_22951=0.1;
double _n_cg_22952=0.04;
double _n_cb_22953=0.1;
if(d::truth((_n_bw_22941<9.0))){d::check_cancel();(void)((((_n_cr_22951=1.0),(_n_cg_22952=0.4)),(_n_cb_22953=0.5)));
}else {d::check_cancel();if((((d::truth((_n_u_22949<(-d::number(0.8))))||d::truth((_n_u_22949>19.8)))||d::truth((_n_v_22950<(-d::number(0.8)))))||d::truth((_n_v_22950>5.8)))){d::check_cancel();(void)((((_n_cr_22951=0.3),(_n_cg_22952=0.95)),(_n_cb_22953=0.88)));
}else {d::check_cancel();if((((d::truth((_n_u_22949>=0.0))&&d::truth((_n_v_22950>=0.0)))&&d::truth((_n_u_22949<19.0)))&&d::truth((_n_v_22950<5.0)))){d::check_cancel();double _n_col_22954=std::floor(_n_u_22949);
bool _n_lit_22955=([&]()->bool{auto _n_logical_23109=(d::mod(_n_col_22954,4.0)!=3.0);return d::truth(_n_logical_23109)?(d::at(d::at(_n_GLYPHS_22661,std::floor(_n_v_22950)),_n_col_22954)==d::String(u"1")):_n_logical_23109;})();
if(d::truth(_n_lit_22955)){d::check_cancel();(void)((((_n_cr_22951=1.0),(_n_cg_22952=0.32)),(_n_cb_22953=0.38)));
}
}
}
}
double _n_a_22956=([&](){auto _n_left_23110=_n_overlap_22669(_n_x_22947,(_n_x_22947+1.0),_n_x0_22937,_n_x1_22938);auto _n_right_23111=_n_overlap_22669(_n_r_22946,(_n_r_22946+1.0),_n_y0_22939,_n_y1_22940);return (_n_left_23110*_n_right_23111);})();
(void)((((([&](){auto&& _n_array_23112=this->_n_fr_22687;auto _n_index_23113=_n_k_22948;auto _n_value_23114=_n_mix_22667(d::at(this->_n_fr_22687,_n_k_22948),_n_cr_22951,_n_a_22956);d::put(_n_array_23112,_n_index_23113,_n_value_23114);return _n_value_23114;})(),([&](){auto&& _n_array_23115=this->_n_fg_22688;auto _n_index_23116=_n_k_22948;auto _n_value_23117=_n_mix_22667(d::at(this->_n_fg_22688,_n_k_22948),_n_cg_22952,_n_a_22956);d::put(_n_array_23115,_n_index_23116,_n_value_23117);return _n_value_23117;})()),([&](){auto&& _n_array_23118=this->_n_fb_22689;auto _n_index_23119=_n_k_22948;auto _n_value_23120=_n_mix_22667(d::at(this->_n_fb_22689,_n_k_22948),_n_cb_22953,_n_a_22956);d::put(_n_array_23118,_n_index_23119,_n_value_23120);return _n_value_23120;})()),([&](){auto&& _n_array_23121=this->_n_ff_22690;auto _n_index_23122=_n_k_22948;auto _n_value_23123=_n_mix_22667(d::at(this->_n_ff_22690,_n_k_22948),0.15,_n_a_22956);d::put(_n_array_23121,_n_index_23122,_n_value_23123);return _n_value_23123;})()));
}}
}}
double _n_fade_22957=_n_smooth_22666(_n_FAR_22645,85.0,_n_sign_22863);
(void)(this->_n_glow_22693(((_n_x0_22937+_n_x1_22938)/2.0),((_n_y0_22939+_n_y1_22940)/2.0),0.0,(1.5+(_n_bw_22941*0.35)),0.0,1.0,0.3,0.45,(0.35*_n_fade_22957)));

}
})));
}
(void)(_n_things_22921.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_ahead_22859,[=]( ) mutable ->void{{
double _n_lit_22958=_n_clamp_22665((11.0/_n_ahead_22859));
(void)(this->_n_box_22692((-d::number(0.46)),0.46,0.12,0.62,_n_ahead_22859,(0.12+(0.4*_n_lit_22958)),(0.12+(0.37*_n_lit_22958)),(0.15+(0.3*_n_lit_22958)),1.0));
(void)(this->_n_box_22692((-d::number(0.32)),0.32,0.62,0.95,_n_ahead_22859,0.05,0.05,0.08,1.0));
(void)(this->_n_box_22692((-d::number(0.46)),0.46,0.0,0.12,_n_ahead_22859,0.02,0.02,0.03,1.0));
(void)(this->_n_box_22692((-d::number(0.43)),(-d::number(0.29)),0.44,0.54,_n_ahead_22859,1.0,0.2,0.18,1.0));
(void)(this->_n_box_22692(0.29,0.43,0.44,0.54,_n_ahead_22859,1.0,0.2,0.18,1.0));

}
})));
for(auto &&_n_item_23124:_n_cars_22860){d::check_cancel();double _n_cz_22959=_n_item_23124;
{
(void)(_n_things_22921.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_cz_22959,[=]( ) mutable ->void{{
(void)(([&](){auto _n_argument_23125=(_n_LANE_L_22649-0.46);auto _n_argument_23126=(_n_LANE_L_22649+0.46);auto _n_argument_23127=0.08;auto _n_argument_23128=0.6;auto _n_argument_23129=_n_cz_22959;auto _n_argument_23130=0.04;auto _n_argument_23131=0.04;auto _n_argument_23132=0.06;auto _n_argument_23133=_n_smooth_22666(40.0,20.0,_n_cz_22959);return this->_n_box_22692(_n_argument_23125,_n_argument_23126,_n_argument_23127,_n_argument_23128,_n_argument_23129,_n_argument_23130,_n_argument_23131,_n_argument_23132,_n_argument_23133);})());
(void)(([&](){auto _n_argument_23134=(_n_LANE_L_22649-0.32);auto _n_argument_23135=(_n_LANE_L_22649+0.32);auto _n_argument_23136=0.6;auto _n_argument_23137=0.92;auto _n_argument_23138=_n_cz_22959;auto _n_argument_23139=0.03;auto _n_argument_23140=0.03;auto _n_argument_23141=0.05;auto _n_argument_23142=_n_smooth_22666(40.0,20.0,_n_cz_22959);return this->_n_box_22692(_n_argument_23134,_n_argument_23135,_n_argument_23136,_n_argument_23137,_n_argument_23138,_n_argument_23139,_n_argument_23140,_n_argument_23141,_n_argument_23142);})());

}
})));

}
}
(void)(_n_things_22921.sort([=]( std::shared_ptr<std::tuple<double,std::function<void()>>> _a0,std::shared_ptr<std::tuple<double,std::function<void()>>> _a1) mutable ->double{std::shared_ptr<std::tuple<double,std::function<void()>>> _n_a_22960=_a0;
std::shared_ptr<std::tuple<double,std::function<void()>>> _n_b_22961=_a1;
return (std::get<0>(*_n_b_22961)-std::get<0>(*_n_a_22960));}));
for(auto &&_n_item_23143:_n_things_22921){d::check_cancel();auto _n_binding_23144=_n_item_23143;
std::function<void()> _n_draw_22962=std::get<1>(*_n_binding_23144);
(void)(_n_draw_22962());
}
{
double _n_d_22963=(_n_F_22641/_n_ahead_22859);
for(auto &&_n_item_23145:d::Array<double,false>{(-d::number(0.36)),0.36}){d::check_cancel();double _n_sx_22964=_n_item_23145;
(void)(this->_n_glow_22693((_n_VPX_22640+(_n_sx_22964*_n_d_22963)),(_n_HY_22639+((1.0-0.49)*_n_d_22963)),(0.07*_n_d_22963),(0.8+(0.12*_n_d_22963)),0.0,1.0,0.15,0.12,0.6));
}

}
for(auto &&_n_item_23146:_n_cars_22860){d::check_cancel();double _n_cz_22965=_n_item_23146;
{
double _n_d_22966=(_n_F_22641/_n_cz_22965);
double _n_fade_22967=_n_smooth_22666(_n_FAR_22645,80.0,_n_cz_22965);
double _n_near_22968=_n_clamp_22665((4.0/_n_cz_22965));
for(auto &&_n_item_23147:d::Array<double,false>{(-d::number(0.33)),0.33}){d::check_cancel();double _n_sx_22969=_n_item_23147;
{
(void)(this->_n_glow_22693((_n_VPX_22640+((_n_LANE_L_22649+_n_sx_22969)*_n_d_22966)),(_n_HY_22639+((1.0-0.34)*_n_d_22966)),(0.06*_n_d_22966),(0.7+(0.03*_n_d_22966)),(2.0+(0.5*_n_d_22966)),1.0,0.96,0.85,(_n_fade_22967*(0.75+(0.5*_n_near_22968)))));

}
}

}
}
{double _n_r_22970=0.0;
for(;d::truth((_n_r_22970<_n_H_22638));(void)((_n_r_22970++))){d::check_cancel();{double _n_x_22971=0.0;
for(;d::truth((_n_x_22971<_n_W_22637));(void)((_n_x_22971++))){d::check_cancel();double _n_k_22972=((_n_r_22970*_n_W_22637)+_n_x_22971);
double _n_cr_22973=d::at(this->_n_fr_22687,_n_k_22972);
double _n_cg_22974=d::at(this->_n_fg_22688,_n_k_22972);
double _n_cbl_22975=d::at(this->_n_fb_22689,_n_k_22972);
double _n_floor_22976=d::at(this->_n_ff_22690,_n_k_22972);
double _n_peak_22977=d::maximum({_n_cr_22973,_n_cg_22974,_n_cbl_22975,0.0001});
double _n_level_22978=_n_clamp_22665((_n_floor_22976+(((1.0-_n_floor_22976)*std::pow(_n_peak_22977,0.85))*0.95)));
double _n_step_22979=([&](){auto _n_argument_23148=0.0;auto _n_argument_23149=([&](){auto _n_argument_23150=3.0;auto _n_argument_23151=d::round(((_n_level_22978*3.0)+d::at(_n_BAYER_22660,((double(d::i32(_n_r_22970)&d::i32(3.0))*4.0)+double(d::i32(_n_x_22971)&d::i32(3.0))))));return d::minimum({_n_argument_23150,_n_argument_23151});})();return d::maximum({_n_argument_23148,_n_argument_23149});})();
(void)(([&](){auto&& _n_array_23152=this->_n_out_22673;auto _n_index_23153=_n_k_22972;auto _n_value_23154=d::at(_n_DOTS_22658,_n_step_22979);d::put(_n_array_23152,_n_index_23153,_n_value_23154);return _n_value_23154;})());
if(d::truth(_n_color_22856)){d::check_cancel();double _n_want_22980=(d::truth(_n_step_22979)?d::minimum({1.0,((_n_level_22978+0.06)/d::at(_n_COVER_22659,_n_step_22979))}):0.0);
double _n_s_22981=((0.3+(0.7*_n_want_22980))/_n_peak_22977);
(void)(([&](){auto&& _n_array_23155=d::read(_n_color_22856);auto _n_index_23156=_n_k_22972;auto _n_value_23157=([&](){auto _n_argument_23158=_n_clamp_22665((_n_cr_22973*_n_s_22981));auto _n_argument_23159=_n_clamp_22665((_n_cg_22974*_n_s_22981));auto _n_argument_23160=_n_clamp_22665((_n_cbl_22975*_n_s_22981));return this->_n_nearest_22675(_n_argument_23158,_n_argument_23159,_n_argument_23160);})();d::put(_n_array_23155,_n_index_23156,_n_value_23157);return _n_value_23157;})());
}
}}
}}
d::Array<d::String,false> _n_lines_22982=d::Array<d::String,false>{};
{double _n_r_22983=0.0;
for(;d::truth((_n_r_22983<_n_H_22638));(void)((_n_r_22983++))){d::check_cancel();(void)(_n_lines_22982.push(d::join(this->_n_out_22673.slice((_n_r_22983*_n_W_22637),((_n_r_22983+1.0)*_n_W_22637)),d::String(u""))));
}}
return d::join(_n_lines_22982,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("night-highway").cols)*ascii::catalog_meta("night-highway").rows);auto _env=std::make_shared<_n_Record_22984>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &night_highway_meta(){return catalog_meta("night-highway");}
std::unique_ptr<Piece> make_night_highway(const AsciiPieceOptions &o){return std::make_unique<Native_night_highway>(o);}
}
