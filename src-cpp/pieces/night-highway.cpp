// Direct, statically typed C++ from src/pieces/night-highway.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22637;
struct _n_Record_22985;
struct _n_Record_22637{
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
static std::shared_ptr<_n_Record_22637> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22637>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_loop=d::decode<double>(j["loop"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_22985{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22985> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22985>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_22663(double _a0,double _a1);
double _n_noise_22664(double _a0,double _a1,std::optional<double> _a2);
double _n_fbm_22665(double _a0,double _a1,double _a2,std::optional<double> _a3);
double _n_clamp_22666(double _a0);
double _n_smooth_22667(double _a0,double _a1,double _a2);
double _n_mix_22668(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_22669(d::String _a0);
double _n_overlap_22670(double _a0,double _a1,double _a2,double _a3);
double _n_span_22671(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_22637> _n_meta_22636=[](){return ([&](){auto _n_object_22988=std::make_shared<_n_Record_22637>();_n_object_22988->_p_name=d::String(u"night highway");_n_object_22988->_p_category=d::String(u"scenes");_n_object_22988->_p_note=d::String(u"a desert highway at dusk, rushing toward the mountains and last light");_n_object_22988->_p_cols=200.0;_n_object_22988->_p_rows=100.0;_n_object_22988->_p_cell=1.0;_n_object_22988->_p_fps=15.0;_n_object_22988->_p_loop=12.0;_n_object_22988->_p_ground=d::String(u"#07080f");_n_object_22988->_p_palette=d::Array<d::String,false>{d::String(u"#0d1226"),d::String(u"#141b38"),d::String(u"#1c264c"),d::String(u"#263463"),d::String(u"#34457a"),d::String(u"#4a5d96"),d::String(u"#6b7fb3"),d::String(u"#9aa8d0"),d::String(u"#cdd5ea"),d::String(u"#f4f6fc"),d::String(u"#2a1d45"),d::String(u"#43285e"),d::String(u"#643474"),d::String(u"#8a4683"),d::String(u"#b85a78"),d::String(u"#e0766a"),d::String(u"#f59a5c"),d::String(u"#ffc477"),d::String(u"#ffe6b0"),d::String(u"#16161e"),d::String(u"#24232d"),d::String(u"#383744"),d::String(u"#55535f"),d::String(u"#7a1622"),d::String(u"#d42a32"),d::String(u"#ff6a5c"),d::String(u"#d9b44a"),d::String(u"#3fd6c8"),d::String(u"#fff4d8"),d::String(u"#3a2a2a")};return _n_object_22988;})();}();
const double _n_W_22638=[](){return 200.0;}();
const double _n_H_22639=[](){return 100.0;}();
const double _n_HY_22640=[](){return 50.0;}();
const double _n_VPX_22641=[](){return 100.0;}();
const double _n_F_22642=[](){return 110.0;}();
const double _n_T_22643=[](){return 12.0;}();
const double _n_V_22644=[](){return 16.0;}();
const double _n_SHUT_22645=[](){return ((_n_V_22644/15.0)*0.9);}();
const double _n_FAR_22646=[](){return 112.0;}();
const double _n_ROAD_R_22647=[](){return 0.68;}();
const double _n_ROAD_L_22648=[](){return (-d::number(1.92));}();
const double _n_CENTRE_22649=[](){return (-d::number(0.62));}();
const double _n_LANE_L_22650=[](){return (-d::number(1.27));}();
const double _n_POLE_X_22651=[](){return 2.2;}();
const double _n_POLE_GAP_22652=[](){return 24.0;}();
const double _n_POST_GAP_22653=[](){return 12.0;}();
const double _n_DASH_22654=[](){return 1.2;}();
const double _n_DASH_GAP_22655=[](){return 3.0;}();
d::Array<double,false> _n_MOON_22656=[](){return d::Array<double,false>{158.0,14.0};}();
const double _n_MOON_R_22657=[](){return 4.6;}();
d::Array<double,false> _n_ONCOMING_22658=[](){return d::Array<double,false>{9.4,2.6,6.0};}();
const d::String _n_DOTS_22659=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_22660=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_22661=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_22695=_a0;
return ((_n_v_22695/16.0)-0.47);});}();
d::Array<d::String,false> _n_GLYPHS_22662=[](){return d::Array<d::String,false>{d::String(u"101 111 111 111 100"),d::String(u"111 101 010 100 100"),d::String(u"111 101 010 110 100"),d::String(u"101 101 010 100 100"),d::String(u"101 111 010 111 111")};}();
double _n_hash_22663(double _a0,double _a1){double _n_x_22696=_a0;
double _n_y_22697=_a1;
{
double _n_h_22698=([&](){auto _n_left_22989=d::imul(double(d::i32(_n_x_22696)|d::i32(0.0)),374761393.0);auto _n_right_22990=d::imul(double(d::i32(_n_y_22697)|d::i32(0.0)),668265263.0);return (_n_left_22989+_n_right_22990);})();
(void)((_n_h_22698=d::imul(double(d::i32(_n_h_22698)^d::i32(double(d::u32(_n_h_22698)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_22698)^d::i32(double(d::u32(_n_h_22698)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_22664(double _a0,double _a1,std::optional<double> _a2){double _n_x_22699=_a0;
double _n_y_22700=_a1;
double _n_period_22701=(d::present(_a2)?d::read(_a2):0.0);
{
double _n_xi_22702=std::floor(_n_x_22699);
double _n_yi_22703=std::floor(_n_y_22700);
double _n_fx_22704=(_n_x_22699-_n_xi_22702);
double _n_fy_22705=(_n_y_22700-_n_yi_22703);
double _n_u_22706=((_n_fx_22704*_n_fx_22704)*(3.0-(2.0*_n_fx_22704)));
double _n_v_22707=((_n_fy_22705*_n_fy_22705)*(3.0-(2.0*_n_fy_22705)));
double _n_y0_22708=_n_yi_22703;
double _n_y1_22709=(_n_yi_22703+1.0);
if(d::truth(_n_period_22701)){d::check_cancel();(void)((_n_y0_22708=d::mod((d::mod(_n_yi_22703,_n_period_22701)+_n_period_22701),_n_period_22701)));
(void)((_n_y1_22709=d::mod((_n_y0_22708+1.0),_n_period_22701)));
}
double _n_a_22710=_n_hash_22663(_n_xi_22702,_n_y0_22708);
double _n_b_22711=_n_hash_22663((_n_xi_22702+1.0),_n_y0_22708);
double _n_c_22712=_n_hash_22663(_n_xi_22702,_n_y1_22709);
double _n_d_22713=_n_hash_22663((_n_xi_22702+1.0),_n_y1_22709);
return (((_n_a_22710+((_n_b_22711-_n_a_22710)*_n_u_22706))+((_n_c_22712-_n_a_22710)*_n_v_22707))+(((((_n_a_22710-_n_b_22711)-_n_c_22712)+_n_d_22713)*_n_u_22706)*_n_v_22707));

}
}

double _n_fbm_22665(double _a0,double _a1,double _a2,std::optional<double> _a3){double _n_x_22714=_a0;
double _n_y_22715=_a1;
double _n_octaves_22716=_a2;
double _n_period_22717=(d::present(_a3)?d::read(_a3):0.0);
{
double _n_s_22718=0.0;
double _n_n_22719=0.0;
double _n_amp_22720=0.5;
double _n_f_22721=1.0;
{double _n_i_22722=0.0;
for(;d::truth((_n_i_22722<_n_octaves_22716));(void)((_n_i_22722++))){d::check_cancel();(void)((_n_s_22718=(_n_s_22718+(_n_amp_22720*_n_noise_22664((_n_x_22714*_n_f_22721),(_n_y_22715*_n_f_22721),std::optional<double>((_n_period_22717*_n_f_22721)))))));
(void)((_n_n_22719=(_n_n_22719+_n_amp_22720)));
(void)((_n_amp_22720=(_n_amp_22720*0.5)));
(void)((_n_f_22721=(_n_f_22721*2.0)));
}}
return (_n_s_22718/_n_n_22719);

}
}

double _n_clamp_22666(double _a0){double _n_v_22723=_a0;
return (d::truth((_n_v_22723<0.0))?0.0:(d::truth((_n_v_22723>1.0))?1.0:_n_v_22723));}

double _n_smooth_22667(double _a0,double _a1,double _a2){double _n_a_22724=_a0;
double _n_b_22725=_a1;
double _n_v_22726=_a2;
{
double _n_k_22727=_n_clamp_22666(((_n_v_22726-_n_a_22724)/(_n_b_22725-_n_a_22724)));
return ((_n_k_22727*_n_k_22727)*(3.0-(2.0*_n_k_22727)));

}
}

double _n_mix_22668(double _a0,double _a1,double _a2){double _n_a_22728=_a0;
double _n_b_22729=_a1;
double _n_k_22730=_a2;
return (_n_a_22728+((_n_b_22729-_n_a_22728)*_n_k_22730));}

d::Array<double,false> _n_hex_22669(d::String _a0){d::String _n_s_22731=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_22732=_a0;
return (([&](){auto _n_argument_22991=d::slice(_n_s_22731,_n_i_22732,(_n_i_22732+2.0));auto _n_argument_22992=16.0;return d::parseInt(_n_argument_22991,_n_argument_22992);})()/255.0);});}

double _n_overlap_22670(double _a0,double _a1,double _a2,double _a3){double _n_a0_22733=_a0;
double _n_a1_22734=_a1;
double _n_b0_22735=_a2;
double _n_b1_22736=_a3;
return ([&](){auto _n_argument_22993=0.0;auto _n_argument_22994=([&](){auto _n_left_22995=d::minimum({_n_a1_22734,_n_b1_22736});auto _n_right_22996=d::maximum({_n_a0_22733,_n_b0_22735});return (_n_left_22995-_n_right_22996);})();return d::maximum({_n_argument_22993,_n_argument_22994});})();}

double _n_span_22671(double _a0,double _a1,double _a2){double _n_u_22737=_a0;
double _n_len_22738=_a1;
double _n_period_22739=_a2;
{
double _n_k_22740=std::floor((_n_u_22737/_n_period_22739));
return ((_n_k_22740*_n_len_22738)+d::minimum({(_n_u_22737-(_n_k_22740*_n_period_22739)),_n_len_22738}));

}
}

struct Native_night_highway final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_22672{};
double _n_N_22673{};
d::Array<d::String,false> _n_out_22674{};
d::Array<uint8_t,true> _n_lut_22675{};
d::Array<float,true> _n_warm_22677{};
d::Array<float,true> _n_sr_22678{};
d::Array<float,true> _n_sg_22679{};
d::Array<float,true> _n_sb_22680{};
d::Array<float,true> _n_sfloor_22681{};
d::Array<double,false> _n_stars_22682{};
d::Array<float,true> _n_gZ_22685{};
d::Array<float,true> _n_gD_22686{};
d::Array<float,true> _n_gEZ_22687{};
d::Array<float,true> _n_fr_22688{};
d::Array<float,true> _n_fg_22689{};
d::Array<float,true> _n_fb_22690{};
d::Array<float,true> _n_ff_22691{};
std::function<d::String(double,std::shared_ptr<_n_Record_22985>)> _render;
double _n_nearest_22676(double _a0,double _a1,double _a2){double _n_r_22741=_a0;
double _n_g_22742=_a1;
double _n_b_22743=_a2;
{
double _n_k_22744=([&](){auto _n_left_23162=([&](){auto _n_left_23164=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_22741*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_23165=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_22742*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_23164)|d::i32(_n_right_23165));})();auto _n_right_23163=d::minimum({31.0,double(d::i32((_n_b_22743*31.99))|d::i32(0.0))});return double(d::i32(_n_left_23162)|d::i32(_n_right_23163));})();
if(d::truth((d::at(this->_n_lut_22675,_n_k_22744)!=255.0))){d::check_cancel();return d::at(this->_n_lut_22675,_n_k_22744);
}
double _n_best_22745=0.0;
double _n_bd_22746=1000000000.0;
{double _n_i_22747=0.0;
for(;d::truth((_n_i_22747<double(this->_n_P_22672.size())));(void)((_n_i_22747++))){d::check_cancel();double _n_dr_22748=(d::at(d::at(this->_n_P_22672,_n_i_22747),0.0)-_n_r_22741);
double _n_dg_22749=(d::at(d::at(this->_n_P_22672,_n_i_22747),1.0)-_n_g_22742);
double _n_db_22750=(d::at(d::at(this->_n_P_22672,_n_i_22747),2.0)-_n_b_22743);
double _n_d_22751=((((0.3*_n_dr_22748)*_n_dr_22748)+((0.5*_n_dg_22749)*_n_dg_22749))+((0.2*_n_db_22750)*_n_db_22750));
if(d::truth((_n_d_22751<_n_bd_22746))){d::check_cancel();(void)(((_n_bd_22746=_n_d_22751),(_n_best_22745=_n_i_22747)));
}
}}
return ([&](){auto&& _n_array_23166=this->_n_lut_22675;auto _n_index_23167=_n_k_22744;auto _n_value_23168=_n_best_22745;d::put(_n_array_23166,_n_index_23167,_n_value_23168);return _n_value_23168;})();

}
}

double _n_farTop_22683(double _a0){double _n_x_22753=_a0;
{
double _n_c_22754=([&](){auto _n_argument_23169=6.0;auto _n_argument_23170=60.0;auto _n_argument_23171=std::fabs(((_n_x_22753+0.5)-_n_VPX_22641));return _n_smooth_22667(_n_argument_23169,_n_argument_23170,_n_argument_23171);})();
double _n_ridge_22755=(1.0-std::fabs(((_n_fbm_22665((_n_x_22753*0.04),1.3,5.0,std::optional<double>{})*2.0)-1.0)));
return (((_n_HY_22640-2.5)-(((4.0+(9.0*_n_c_22754))*_n_ridge_22755)*_n_ridge_22755))-(2.0*_n_fbm_22665((_n_x_22753*0.3),2.2,2.0,std::optional<double>{})));

}
}

double _n_nearTop_22684(double _a0){double _n_x_22756=_a0;
{
double _n_c_22757=([&](){auto _n_argument_23172=26.0;auto _n_argument_23173=95.0;auto _n_argument_23174=std::fabs(((_n_x_22756+0.5)-_n_VPX_22641));return _n_smooth_22667(_n_argument_23172,_n_argument_23173,_n_argument_23174);})();
double _n_ridge_22758=(1.0-std::fabs(((_n_fbm_22665((_n_x_22756*0.022),7.1,4.0,std::optional<double>{})*2.0)-1.0)));
return ((_n_HY_22640+0.5)-(_n_c_22757*(6.0+(15.0*_n_ridge_22758))));

}
}

void _n_rect_22692(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7){double _n_x0_22801=_a0;
double _n_x1_22802=_a1;
double _n_y0_22803=_a2;
double _n_y1_22804=_a3;
double _n_r_22805=_a4;
double _n_g_22806=_a5;
double _n_b_22807=_a6;
double _n_a_22808=_a7;
{
double _n_c0_22809=([&](){auto _n_argument_23175=0.0;auto _n_argument_23176=std::floor(_n_x0_22801);return d::maximum({_n_argument_23175,_n_argument_23176});})();
double _n_c1_22810=([&](){auto _n_argument_23177=(_n_W_22638-1.0);auto _n_argument_23178=(std::ceil(_n_x1_22802)-1.0);return d::minimum({_n_argument_23177,_n_argument_23178});})();
double _n_r0_22811=([&](){auto _n_argument_23179=0.0;auto _n_argument_23180=std::floor(_n_y0_22803);return d::maximum({_n_argument_23179,_n_argument_23180});})();
double _n_r1_22812=([&](){auto _n_argument_23181=(_n_H_22639-1.0);auto _n_argument_23182=(std::ceil(_n_y1_22804)-1.0);return d::minimum({_n_argument_23181,_n_argument_23182});})();
{double _n_row_22813=_n_r0_22811;
for(;d::truth((_n_row_22813<=_n_r1_22812));(void)((_n_row_22813++))){d::check_cancel();double _n_cy_22814=_n_overlap_22670(_n_row_22813,(_n_row_22813+1.0),_n_y0_22803,_n_y1_22804);
{double _n_col_22815=_n_c0_22809;
for(;d::truth((_n_col_22815<=_n_c1_22810));(void)((_n_col_22815++))){d::check_cancel();double _n_k2_22816=((_n_row_22813*_n_W_22638)+_n_col_22815);
double _n_q_22817=((_n_a_22808*_n_cy_22814)*_n_overlap_22670(_n_col_22815,(_n_col_22815+1.0),_n_x0_22801,_n_x1_22802));
(void)(([&](){auto&& _n_array_23183=this->_n_fr_22688;auto _n_index_23184=_n_k2_22816;auto _n_value_23185=(d::at(_n_array_23183,_n_index_23184)+((_n_r_22805-d::at(this->_n_fr_22688,_n_k2_22816))*_n_q_22817));d::put(_n_array_23183,_n_index_23184,_n_value_23185);return _n_value_23185;})());
(void)(([&](){auto&& _n_array_23186=this->_n_fg_22689;auto _n_index_23187=_n_k2_22816;auto _n_value_23188=(d::at(_n_array_23186,_n_index_23187)+((_n_g_22806-d::at(this->_n_fg_22689,_n_k2_22816))*_n_q_22817));d::put(_n_array_23186,_n_index_23187,_n_value_23188);return _n_value_23188;})());
(void)(([&](){auto&& _n_array_23189=this->_n_fb_22690;auto _n_index_23190=_n_k2_22816;auto _n_value_23191=(d::at(_n_array_23189,_n_index_23190)+((_n_b_22807-d::at(this->_n_fb_22690,_n_k2_22816))*_n_q_22817));d::put(_n_array_23189,_n_index_23190,_n_value_23191);return _n_value_23191;})());
(void)(([&](){auto&& _n_array_23192=this->_n_ff_22691;auto _n_index_23193=_n_k2_22816;auto _n_value_23194=(d::at(_n_array_23192,_n_index_23193)+((0.02-d::at(this->_n_ff_22691,_n_k2_22816))*_n_q_22817));d::put(_n_array_23192,_n_index_23193,_n_value_23194);return _n_value_23194;})());
}}
}}

}
}

void _n_box_22693(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,double _a8){double _n_xa_22818=_a0;
double _n_xb_22819=_a1;
double _n_ha_22820=_a2;
double _n_hb_22821=_a3;
double _n_z_22822=_a4;
double _n_r_22823=_a5;
double _n_g_22824=_a6;
double _n_b_22825=_a7;
double _n_a_22826=_a8;
{
double _n_d_22827=(_n_F_22642/_n_z_22822);
double _n_dp_22828=(_n_F_22642/(_n_z_22822+(_n_SHUT_22645*0.35)));
double _n_x0_22829=(_n_VPX_22641+(_n_xa_22818*_n_d_22827));
double _n_x1_22830=(_n_VPX_22641+(_n_xb_22819*_n_d_22827));
double _n_p0_22831=(_n_VPX_22641+(_n_xa_22818*_n_dp_22828));
double _n_p1_22832=(_n_VPX_22641+(_n_xb_22819*_n_dp_22828));
double _n_u0_22833=d::minimum({_n_x0_22829,_n_p0_22831});
double _n_u1_22834=d::maximum({_n_x1_22830,_n_p1_22832});
(void)(([&](){auto _n_argument_23195=_n_u0_22833;auto _n_argument_23196=_n_u1_22834;auto _n_argument_23197=(_n_HY_22640+((1.0-_n_hb_22821)*_n_d_22827));auto _n_argument_23198=(_n_HY_22640+((1.0-_n_ha_22820)*_n_d_22827));auto _n_argument_23199=_n_r_22823;auto _n_argument_23200=_n_g_22824;auto _n_argument_23201=_n_b_22825;auto _n_argument_23202=(_n_a_22826*d::minimum({1.0,(((_n_x1_22830-_n_x0_22829)+0.3)/((_n_u1_22834-_n_u0_22833)+0.3))}));return this->_n_rect_22692(_n_argument_23195,_n_argument_23196,_n_argument_23197,_n_argument_23198,_n_argument_23199,_n_argument_23200,_n_argument_23201,_n_argument_23202);})());

}
}

void _n_glow_22694(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,double _a8){double _n_cx_22835=_a0;
double _n_cy_22836=_a1;
double _n_core_22837=_a2;
double _n_rad_22838=_a3;
double _n_streak_22839=_a4;
double _n_r_22840=_a5;
double _n_g_22841=_a6;
double _n_b_22842=_a7;
double _n_s_22843=_a8;
{
double _n_reach_22844=((_n_rad_22838*4.0)+_n_streak_22839);
double _n_c0_22845=([&](){auto _n_argument_23203=0.0;auto _n_argument_23204=std::floor((_n_cx_22835-_n_reach_22844));return d::maximum({_n_argument_23203,_n_argument_23204});})();
double _n_c1_22846=([&](){auto _n_argument_23205=(_n_W_22638-1.0);auto _n_argument_23206=std::ceil((_n_cx_22835+_n_reach_22844));return d::minimum({_n_argument_23205,_n_argument_23206});})();
double _n_r0_22847=([&](){auto _n_argument_23207=0.0;auto _n_argument_23208=std::floor((_n_cy_22836-(_n_rad_22838*4.0)));return d::maximum({_n_argument_23207,_n_argument_23208});})();
double _n_r1_22848=([&](){auto _n_argument_23209=(_n_H_22639-1.0);auto _n_argument_23210=std::ceil((_n_cy_22836+(_n_rad_22838*4.0)));return d::minimum({_n_argument_23209,_n_argument_23210});})();
{double _n_row_22849=_n_r0_22847;
for(;d::truth((_n_row_22849<=_n_r1_22848));(void)((_n_row_22849++))){d::check_cancel();double _n_dy_22850=((_n_row_22849+0.5)-_n_cy_22836);
{double _n_col_22851=_n_c0_22845;
for(;d::truth((_n_col_22851<=_n_c1_22846));(void)((_n_col_22851++))){d::check_cancel();double _n_dx_22852=((_n_col_22851+0.5)-_n_cx_22835);
double _n_dd_22853=std::sqrt(((_n_dx_22852*_n_dx_22852)+(_n_dy_22850*_n_dy_22850)));
double _n_e_22854=([&](){auto _n_left_23211=(_n_smooth_22667((_n_core_22837+0.7),(_n_core_22837-0.3),_n_dd_22853)*1.2);auto _n_right_23212=(std::exp(((-d::number(_n_dd_22853))/_n_rad_22838))*0.55);return (_n_left_23211+_n_right_23212);})();
if(d::truth((_n_streak_22839>0.0))){d::check_cancel();(void)((_n_e_22854=(_n_e_22854+(([&](){auto _n_left_23213=std::exp(((-d::number(std::fabs(_n_dy_22850)))/0.7));auto _n_right_23214=std::exp(((-d::number(std::fabs(_n_dx_22852)))/_n_streak_22839));return (_n_left_23213*_n_right_23214);})()*0.35))));
}
(void)((_n_e_22854=(_n_e_22854*_n_s_22843)));
double _n_k2_22855=((_n_row_22849*_n_W_22638)+_n_col_22851);
(void)(((([&](){auto&& _n_array_23215=this->_n_fr_22688;auto _n_index_23216=_n_k2_22855;auto _n_value_23217=(d::at(_n_array_23215,_n_index_23216)+(_n_r_22840*_n_e_22854));d::put(_n_array_23215,_n_index_23216,_n_value_23217);return _n_value_23217;})(),([&](){auto&& _n_array_23218=this->_n_fg_22689;auto _n_index_23219=_n_k2_22855;auto _n_value_23220=(d::at(_n_array_23218,_n_index_23219)+(_n_g_22841*_n_e_22854));d::put(_n_array_23218,_n_index_23219,_n_value_23220);return _n_value_23220;})()),([&](){auto&& _n_array_23221=this->_n_fb_22690;auto _n_index_23222=_n_k2_22855;auto _n_value_23223=(d::at(_n_array_23221,_n_index_23222)+(_n_b_22842*_n_e_22854));d::put(_n_array_23221,_n_index_23222,_n_value_23223);return _n_value_23223;})()));
}}
}}

}
}

explicit Native_night_highway(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_22672=d::map(_n_meta_22636->_p_palette,_n_hex_22669);
this->_n_N_22673=(_n_W_22638*_n_H_22639);
this->_n_out_22674=d::Array<d::String,false>(size_t(this->_n_N_22673));
this->_n_lut_22675=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_warm_22677=d::Array<float,true>(size_t(_n_W_22638));
{double _n_x_22752=0.0;
for(;d::truth((_n_x_22752<_n_W_22638));(void)((_n_x_22752++))){d::check_cancel();(void)(([&](){auto&& _n_array_22997=this->_n_warm_22677;auto _n_index_22998=_n_x_22752;auto _n_value_22999=std::exp((-d::number(std::pow((((_n_x_22752+0.5)-_n_VPX_22641)/62.0),2.0))));d::put(_n_array_22997,_n_index_22998,_n_value_22999);return _n_value_22999;})());
}}
this->_n_sr_22678=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_sg_22679=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_sb_22680=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_sfloor_22681=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_stars_22682=d::Array<double,false>{};
{double _n_r_22759=0.0;
for(;d::truth((_n_r_22759<_n_HY_22640));(void)((_n_r_22759++))){d::check_cancel();double _n_y_22760=(_n_r_22759+0.5);
double _n_v_22761=(_n_y_22760/_n_HY_22640);
{double _n_x_22762=0.0;
for(;d::truth((_n_x_22762<_n_W_22638));(void)((_n_x_22762++))){d::check_cancel();double _n_k_22763=((_n_r_22759*_n_W_22638)+_n_x_22762);
double _n_wm_22764=d::at(this->_n_warm_22677,_n_x_22762);
double _n_ft_22765=this->_n_farTop_22683(_n_x_22762);
double _n_above_22766=d::maximum({0.0,(_n_ft_22765-_n_y_22760)});
double _n_cool_22767=_n_smooth_22667(0.0,0.7,_n_v_22761);
double _n_cr_22768=_n_mix_22668(0.005,0.06,_n_cool_22767);
double _n_cg_22769=_n_mix_22668(0.008,0.075,_n_cool_22767);
double _n_cb_22770=_n_mix_22668(0.028,0.2,_n_cool_22767);
double _n_violet_22771=(std::exp(((-d::number(_n_above_22766))/16.0))*(0.5+(0.5*_n_wm_22764)));
double _n_rose_22772=(std::exp(((-d::number(_n_above_22766))/7.0))*(0.25+(0.75*_n_wm_22764)));
double _n_hot_22773=((std::exp(((-d::number(_n_above_22766))/3.5))*_n_wm_22764)*_n_wm_22764);
(void)((_n_cr_22768=(_n_cr_22768+(((0.16*_n_violet_22771)+((0.4*_n_rose_22772)*(1.0-_n_hot_22773)))+(1.0*_n_hot_22773)))));
(void)((_n_cg_22769=(_n_cg_22769+(((0.05*_n_violet_22771)+((0.1*_n_rose_22772)*(1.0-_n_hot_22773)))+(0.72*_n_hot_22773)))));
(void)((_n_cb_22770=(_n_cb_22770+(((0.22*_n_violet_22771)+((0.3*_n_rose_22772)*(1.0-_n_hot_22773)))+(0.3*_n_hot_22773)))));
double _n_fl_22774=((0.13*_n_v_22761)*_n_v_22761);
bool _n_open_22775=true;
double _n_cl_22776=([&](){auto _n_left_23000=_n_fbm_22665((_n_x_22762*0.011),(_n_y_22760*0.16),4.0,std::optional<double>{});auto _n_right_23001=(0.05*std::sin((_n_x_22762*0.02)));return (_n_left_23000+_n_right_23001);})();
double _n_band_22777=([&](){auto _n_left_23002=_n_smooth_22667(22.0,31.0,_n_y_22760);auto _n_right_23003=_n_smooth_22667(46.0,38.0,_n_y_22760);return (_n_left_23002*_n_right_23003);})();
double _n_c_22778=(_n_smooth_22667(0.56,0.7,_n_cl_22776)*_n_band_22777);
if(d::truth((_n_c_22778>0.01))){d::check_cancel();double _n_under_22779=([&](){auto _n_argument_23004=0.62;auto _n_argument_23005=0.5;auto _n_argument_23006=_n_fbm_22665((_n_x_22762*0.011),((_n_y_22760+1.6)*0.16),4.0,std::optional<double>{});return _n_smooth_22667(_n_argument_23004,_n_argument_23005,_n_argument_23006);})();
double _n_glow_22780=(((0.35+(0.65*_n_wm_22764))*(0.4+(0.6*_n_under_22779)))*_n_smooth_22667(24.0,42.0,_n_y_22760));
(void)((_n_cr_22768=_n_mix_22668(_n_cr_22768,(0.16+(0.85*_n_glow_22780)),_n_c_22778)));
(void)((_n_cg_22769=_n_mix_22668(_n_cg_22769,(0.1+(0.36*_n_glow_22780)),_n_c_22778)));
(void)((_n_cb_22770=_n_mix_22668(_n_cb_22770,(0.22+(0.3*_n_glow_22780)),_n_c_22778)));
(void)((_n_open_22775=(_n_c_22778<0.05)));
}
double _n_dmx_22781=((_n_x_22762+0.5)-d::at(_n_MOON_22656,0.0));
double _n_dmy_22782=(_n_y_22760-d::at(_n_MOON_22656,1.0));
double _n_dm_22783=std::sqrt(((_n_dmx_22781*_n_dmx_22781)+(_n_dmy_22782*_n_dmy_22782)));
double _n_halo_22784=([&](){auto _n_left_23007=(std::exp(((-d::number(_n_dm_22783))/7.0))*0.22);auto _n_right_23008=(std::exp(((-d::number(_n_dm_22783))/22.0))*0.07);return (_n_left_23007+_n_right_23008);})();
(void)((((_n_cr_22768=(_n_cr_22768+(_n_halo_22784*0.8))),(_n_cg_22769=(_n_cg_22769+(_n_halo_22784*0.85)))),(_n_cb_22770=(_n_cb_22770+_n_halo_22784))));
if(d::truth((_n_dm_22783<(_n_MOON_R_22657+0.6)))){d::check_cancel();double _n_inside_22785=_n_smooth_22667((_n_MOON_R_22657+0.5),(_n_MOON_R_22657-0.5),_n_dm_22783);
double _n_ox_22786=(_n_dmx_22781-2.3);
double _n_oy_22787=(_n_dmy_22782+1.7);
double _n_lit_22788=(_n_inside_22785*([&](){auto _n_argument_23009=(_n_MOON_R_22657-0.6);auto _n_argument_23010=(_n_MOON_R_22657+0.4);auto _n_argument_23011=std::sqrt(((_n_ox_22786*_n_ox_22786)+(_n_oy_22787*_n_oy_22787)));return _n_smooth_22667(_n_argument_23009,_n_argument_23010,_n_argument_23011);})());
double _n_earth_22789=(_n_inside_22785*0.08);
(void)((_n_cr_22768=(_n_mix_22668(_n_cr_22768,1.0,_n_lit_22788)+(_n_earth_22789*0.6))));
(void)((_n_cg_22769=(_n_mix_22668(_n_cg_22769,0.95,_n_lit_22788)+(_n_earth_22789*0.7))));
(void)((_n_cb_22770=(_n_mix_22668(_n_cb_22770,0.82,_n_lit_22788)+_n_earth_22789)));
(void)((_n_open_22775=false));
}
if(d::truth((_n_y_22760>=_n_ft_22765))){d::check_cancel();double _n_depth_22790=(_n_y_22760-_n_ft_22765);
double _n_tex_22791=_n_fbm_22665((_n_x_22762*0.12),(_n_y_22760*0.25),3.0,std::optional<double>{});
double _n_rim_22792=(_n_smooth_22667(1.4,0.0,_n_depth_22790)*_n_wm_22764);
double _n_haze_22793=(_n_smooth_22667((_n_HY_22640-4.0),_n_HY_22640,_n_y_22760)*(0.3+(0.7*_n_wm_22764)));
(void)((_n_cr_22768=(((0.07+(0.04*_n_tex_22791))+(0.7*_n_rim_22792))+(0.14*_n_haze_22793))));
(void)((_n_cg_22769=(((0.04+(0.02*_n_tex_22791))+(0.28*_n_rim_22792))+(0.06*_n_haze_22793))));
(void)((_n_cb_22770=(((0.11+(0.05*_n_tex_22791))+(0.22*_n_rim_22792))+(0.1*_n_haze_22793))));
(void)((_n_fl_22774=0.02));
(void)((_n_open_22775=false));
}
double _n_nt_22794=this->_n_nearTop_22684(_n_x_22762);
if(d::truth((_n_y_22760>=_n_nt_22794))){d::check_cancel();double _n_tex_22795=_n_fbm_22665((_n_x_22762*0.2),(_n_y_22760*0.3),3.0,std::optional<double>{});
double _n_rim_22796=(_n_smooth_22667(1.2,0.0,(_n_y_22760-_n_nt_22794))*(0.2+(0.6*_n_wm_22764)));
(void)((_n_cr_22768=((0.025+(0.02*_n_tex_22795))+(0.3*_n_rim_22796))));
(void)((_n_cg_22769=((0.02+(0.015*_n_tex_22795))+(0.1*_n_rim_22796))));
(void)((_n_cb_22770=((0.045+(0.03*_n_tex_22795))+(0.2*_n_rim_22796))));
(void)((_n_fl_22774=0.01));
(void)((_n_open_22775=false));
}
(void)((((([&](){auto&& _n_array_23012=this->_n_sr_22678;auto _n_index_23013=_n_k_22763;auto _n_value_23014=_n_cr_22768;d::put(_n_array_23012,_n_index_23013,_n_value_23014);return _n_value_23014;})(),([&](){auto&& _n_array_23015=this->_n_sg_22679;auto _n_index_23016=_n_k_22763;auto _n_value_23017=_n_cg_22769;d::put(_n_array_23015,_n_index_23016,_n_value_23017);return _n_value_23017;})()),([&](){auto&& _n_array_23018=this->_n_sb_22680;auto _n_index_23019=_n_k_22763;auto _n_value_23020=_n_cb_22770;d::put(_n_array_23018,_n_index_23019,_n_value_23020);return _n_value_23020;})()),([&](){auto&& _n_array_23021=this->_n_sfloor_22681;auto _n_index_23022=_n_k_22763;auto _n_value_23023=_n_fl_22774;d::put(_n_array_23021,_n_index_23022,_n_value_23023);return _n_value_23023;})()));
double _n_chance_22797=(0.993-((0.02*(1.0-_n_v_22761))*(1.0-_n_v_22761)));
if(((d::truth(_n_open_22775)&&d::truth((_n_v_22761<0.7)))&&d::truth((_n_hash_22663(_n_x_22762,((_n_r_22759*5.0)+3.0))>_n_chance_22797)))){d::check_cancel();double _n_s_22798=(([&](){auto _n_left_23024=(0.55+(0.45*_n_hash_22663(_n_r_22759,(_n_x_22762+9.0))));auto _n_right_23025=_n_smooth_22667(0.7,0.2,_n_v_22761);return (_n_left_23024*_n_right_23025);})()*(1.0-((0.6*_n_wm_22764)*_n_v_22761)));
(void)(([&](){auto _n_argument_23026=_n_k_22763;auto _n_argument_23027=(1.0+std::floor((_n_hash_22663(_n_x_22762,_n_r_22759)*5.0)));auto _n_argument_23028=(_n_hash_22663((_n_r_22759*3.0),_n_x_22762)*6.283);auto _n_argument_23029=_n_s_22798;return this->_n_stars_22682.push(_n_argument_23026,_n_argument_23027,_n_argument_23028,_n_argument_23029);})());
}
}}
}}
this->_n_gZ_22685=d::Array<float,true>(size_t(_n_H_22639));
this->_n_gD_22686=d::Array<float,true>(size_t(_n_H_22639));
this->_n_gEZ_22687=d::Array<float,true>(size_t(_n_H_22639));
{double _n_r_22799=_n_HY_22640;
for(;d::truth((_n_r_22799<_n_H_22639));(void)((_n_r_22799++))){d::check_cancel();double _n_d_22800=((_n_r_22799+0.5)-_n_HY_22640);
(void)(([&](){auto&& _n_array_23030=this->_n_gD_22686;auto _n_index_23031=_n_r_22799;auto _n_value_23032=_n_d_22800;d::put(_n_array_23030,_n_index_23031,_n_value_23032);return _n_value_23032;})());
(void)(([&](){auto&& _n_array_23033=this->_n_gZ_22685;auto _n_index_23034=_n_r_22799;auto _n_value_23035=(_n_F_22642/_n_d_22800);d::put(_n_array_23033,_n_index_23034,_n_value_23035);return _n_value_23035;})());
(void)(([&](){auto&& _n_array_23036=this->_n_gEZ_22687;auto _n_index_23037=_n_r_22799;auto _n_value_23038=((_n_F_22642/d::maximum({0.05,(_n_d_22800-0.5)}))-(_n_F_22642/(_n_d_22800+0.5)));d::put(_n_array_23036,_n_index_23037,_n_value_23038);return _n_value_23038;})());
}}
this->_n_fr_22688=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_fg_22689=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_fb_22690=d::Array<float,true>(size_t(this->_n_N_22673));
this->_n_ff_22691=d::Array<float,true>(size_t(this->_n_N_22673));
_render=[=]( double _a0,std::shared_ptr<_n_Record_22985> _a1) mutable ->d::String{double _n_t_22856=_a0;
auto _n_binding_23041=(d::present(_a1)?_a1:([&](){auto _n_object_23040=std::make_shared<_n_Record_22985>();return _n_object_23040;})());
std::optional<d::Array<uint8_t,true>> _n_color_22857=_n_binding_23041->_p_color;
{
double _n_tt_22858=d::mod((d::mod(_n_t_22856,_n_T_22643)+_n_T_22643),_n_T_22643);
double _n_cam_22859=(_n_V_22644*_n_tt_22858);
double _n_ahead_22860=(15.0+(4.0*std::sin((((_n_tt_22858/_n_T_22643)*ascii::PI)*2.0))));
d::Array<double,false> _n_cars_22861=d::Array<double,false>{};
for(auto &&_n_item_23042:_n_ONCOMING_22658){d::check_cancel();double _n_t0_22862=_n_item_23042;
{
double _n_z_22863=(_n_FAR_22646-((_n_V_22644+16.0)*d::mod((d::mod((_n_tt_22858-_n_t0_22862),_n_T_22643)+_n_T_22643),_n_T_22643)));
if(d::truth((_n_z_22863>0.7))){d::check_cancel();(void)(_n_cars_22861.push(_n_z_22863));
}

}
}
double _n_sign_22864=(_n_FAR_22646-(_n_V_22644*d::mod((_n_tt_22858+6.1),_n_T_22643)));
(void)((((this->_n_fr_22688.set(this->_n_sr_22678),this->_n_fg_22689.set(this->_n_sg_22679)),this->_n_fb_22690.set(this->_n_sb_22680)),this->_n_ff_22691.set(this->_n_sfloor_22681)));
{double _n_i_22865=0.0;
for(;d::truth((_n_i_22865<double(this->_n_stars_22682.size())));(void)((_n_i_22865=(_n_i_22865+4.0)))){d::check_cancel();double _n_k_22866=d::at(this->_n_stars_22682,_n_i_22865);
double _n_tw_22867=(0.55+(0.45*std::sin(((((((_n_tt_22858/_n_T_22643)*ascii::PI)*2.0)*d::at(this->_n_stars_22682,(_n_i_22865+1.0)))*3.0)+d::at(this->_n_stars_22682,(_n_i_22865+2.0))))));
double _n_s_22868=(d::at(this->_n_stars_22682,(_n_i_22865+3.0))*_n_tw_22867);
(void)(((([&](){auto&& _n_array_23043=this->_n_fr_22688;auto _n_index_23044=_n_k_22866;auto _n_value_23045=d::maximum({d::at(this->_n_fr_22688,_n_k_22866),(_n_s_22868*0.9)});d::put(_n_array_23043,_n_index_23044,_n_value_23045);return _n_value_23045;})(),([&](){auto&& _n_array_23046=this->_n_fg_22689;auto _n_index_23047=_n_k_22866;auto _n_value_23048=d::maximum({d::at(this->_n_fg_22689,_n_k_22866),(_n_s_22868*0.93)});d::put(_n_array_23046,_n_index_23047,_n_value_23048);return _n_value_23048;})()),([&](){auto&& _n_array_23049=this->_n_fb_22690;auto _n_index_23050=_n_k_22866;auto _n_value_23051=d::maximum({d::at(this->_n_fb_22690,_n_k_22866),_n_s_22868});d::put(_n_array_23049,_n_index_23050,_n_value_23051);return _n_value_23051;})()));
}}
{double _n_r_22869=_n_HY_22640;
for(;d::truth((_n_r_22869<_n_H_22639));(void)((_n_r_22869++))){d::check_cancel();double _n_d_22870=d::at(this->_n_gD_22686,_n_r_22869);
double _n_z_22871=d::at(this->_n_gZ_22685,_n_r_22869);
double _n_ez_22872=d::at(this->_n_gEZ_22687,_n_r_22869);
double _n_cw_22873=(1.0/_n_d_22870);
double _n_w0_22874=(((_n_z_22871-(_n_ez_22872/2.0))+_n_cam_22859)-_n_SHUT_22645);
double _n_w1_22875=((_n_z_22871+(_n_ez_22872/2.0))+_n_cam_22859);
double _n_dash_22876=(([&](){auto _n_left_23052=_n_span_22671(_n_w1_22875,_n_DASH_22654,_n_DASH_GAP_22655);auto _n_right_23053=_n_span_22671(_n_w0_22874,_n_DASH_22654,_n_DASH_GAP_22655);return (_n_left_23052-_n_right_23053);})()/(_n_w1_22875-_n_w0_22874));
double _n_beamZ_22877=(_n_smooth_22667(1.2,3.5,_n_z_22871)/(1.0+std::pow((_n_z_22871/13.0),2.0)));
double _n_sheen_22878=std::exp(((-d::number(_n_d_22870))/2.4));
double _n_texAmp_22879=_n_smooth_22667(1.0,9.0,_n_d_22870);
double _n_zw_22880=((_n_z_22871+_n_cam_22859)*0.125);
{double _n_x_22881=0.0;
for(;d::truth((_n_x_22881<_n_W_22638));(void)((_n_x_22881++))){d::check_cancel();double _n_k_22882=((_n_r_22869*_n_W_22638)+_n_x_22881);
double _n_X_22883=(((_n_x_22881+0.5)-_n_VPX_22641)*_n_cw_22873);
double _n_wm_22884=d::at(this->_n_warm_22677,_n_x_22881);
bool _n_road_22885=([&]()->bool{auto _n_logical_23054=(_n_X_22883>_n_ROAD_L_22648);return d::truth(_n_logical_23054)?(_n_X_22883<_n_ROAD_R_22647):_n_logical_23054;})();
double _n_beam_22886=(_n_beamZ_22877*([&](){auto _n_left_23055=std::exp((-d::number(std::pow((_n_X_22883/(0.5+(0.045*_n_z_22871))),2.0))));auto _n_right_23056=(0.25*std::exp((-d::number(std::pow((_n_X_22883/(1.6+(0.12*_n_z_22871))),2.0)))));return (_n_left_23055+_n_right_23056);})());
if((d::truth((_n_z_22871>_n_ahead_22860))&&d::truth((std::fabs(_n_X_22883)<0.55)))){d::check_cancel();(void)((_n_beam_22886=(_n_beam_22886*0.15)));
}
double _n_lr_22887=(0.16+_n_beam_22886);
double _n_lg_22888=(0.15+(0.92*_n_beam_22886));
double _n_lb_22889=(0.26+(0.7*_n_beam_22886));
for(auto &&_n_item_23057:_n_cars_22861){d::check_cancel();double _n_cz_22890=_n_item_23057;
{
if(d::truth((_n_z_22871>=_n_cz_22890))){d::check_cancel();continue;
}
double _n_dz_22891=(_n_cz_22890-_n_z_22871);
double _n_wash_22892=([&](){auto _n_left_23058=(([&](){auto _n_left_23060=std::exp((-d::number(std::pow(((_n_X_22883-_n_LANE_L_22650)/(0.45+(0.13*_n_dz_22891))),2.0))));auto _n_right_23061=_n_smooth_22667(0.0,1.5,_n_dz_22891);return (_n_left_23060*_n_right_23061);})()/(1.0+std::pow((_n_dz_22891/9.0),2.0)));auto _n_right_23059=_n_smooth_22667(_n_FAR_22646,70.0,_n_cz_22890);return (_n_left_23058*_n_right_23059);})();
(void)((((_n_lr_22887=(_n_lr_22887+(0.75*_n_wash_22892))),(_n_lg_22888=(_n_lg_22888+(0.8*_n_wash_22892)))),(_n_lb_22889=(_n_lb_22889+(0.95*_n_wash_22892)))));

}
}
double _n_cr_22893{};
double _n_cg_22894{};
double _n_cb_22895{};
if(d::truth(_n_road_22885)){d::check_cancel();double _n_grit_22896=(0.85+((0.3*_n_hash_22663(((_n_x_22881*7.0)+_n_r_22869),d::mod(double(d::i32((_n_zw_22880*10.0))|d::i32(0.0)),240.0)))*_n_texAmp_22879));
double _n_a_22897=(0.16*_n_grit_22896);
(void)((((_n_cr_22893=(_n_a_22897*_n_lr_22887)),(_n_cg_22894=(_n_a_22897*_n_lg_22888))),(_n_cb_22895=(_n_a_22897*_n_lb_22889))));
(void)((((_n_cr_22893=(_n_cr_22893+(_n_sheen_22878*((0.5*_n_wm_22884)+0.12)))),(_n_cg_22894=(_n_cg_22894+(_n_sheen_22878*((0.24*_n_wm_22884)+0.08))))),(_n_cb_22895=(_n_cb_22895+(_n_sheen_22878*((0.22*_n_wm_22884)+0.16))))));
}else {d::check_cancel();double _n_tex_22898=([&](){auto _n_argument_23062=0.4;auto _n_argument_23063=0.72;auto _n_argument_23064=_n_fbm_22665((_n_X_22883*5.0),_n_zw_22880,2.0,std::optional<double>(24.0));return _n_smooth_22667(_n_argument_23062,_n_argument_23063,_n_argument_23064);})();
double _n_a_22899=(0.012+(((0.22*_n_tex_22898)*_n_tex_22898)*(0.3+(0.7*_n_texAmp_22879))));
double _n_l_22900=(((_n_lr_22887+_n_lg_22888)+_n_lb_22889)/3.0);
(void)((((_n_cr_22893=(_n_a_22899*((_n_l_22900*1.05)+(0.3*_n_beam_22886)))),(_n_cg_22894=(_n_a_22899*((_n_l_22900*0.72)+(0.2*_n_beam_22886))))),(_n_cb_22895=(_n_a_22899*((_n_l_22900*0.9)+(0.05*_n_beam_22886))))));
(void)((((_n_cr_22893=(_n_cr_22893+((_n_sheen_22878*0.3)*_n_wm_22884))),(_n_cg_22894=(_n_cg_22894+((_n_sheen_22878*0.13)*_n_wm_22884)))),(_n_cb_22895=(_n_cb_22895+((_n_sheen_22878*0.16)*_n_wm_22884)))));
}
double _n_lo_22901=(_n_X_22883-(_n_cw_22873/2.0));
double _n_hi_22902=(_n_X_22883+(_n_cw_22873/2.0));
double _n_yel_22903=((_n_overlap_22670(_n_lo_22901,_n_hi_22902,(_n_CENTRE_22649-0.05),(_n_CENTRE_22649+0.05))/_n_cw_22873)*_n_dash_22876);
double _n_wht_22904=(([&](){auto _n_left_23065=_n_overlap_22670(_n_lo_22901,_n_hi_22902,(_n_ROAD_R_22647-0.04),(_n_ROAD_R_22647+0.04));auto _n_right_23066=_n_overlap_22670(_n_lo_22901,_n_hi_22902,(_n_ROAD_L_22648-0.04),(_n_ROAD_L_22648+0.04));return (_n_left_23065+_n_right_23066);})()/_n_cw_22873);
double _n_back_22905=((0.22+(1.6*(_n_lr_22887-0.16)))+(0.25*_n_sheen_22878));
if(d::truth((_n_yel_22903>0.0))){d::check_cancel();(void)((((_n_cr_22893=_n_mix_22668(_n_cr_22893,(1.0*_n_back_22905),_n_yel_22903)),(_n_cg_22894=_n_mix_22668(_n_cg_22894,(0.72*_n_back_22905),_n_yel_22903))),(_n_cb_22895=_n_mix_22668(_n_cb_22895,(0.24*_n_back_22905),_n_yel_22903))));
}
if(d::truth((_n_wht_22904>0.0))){d::check_cancel();(void)((((_n_cr_22893=_n_mix_22668(_n_cr_22893,(0.85*_n_back_22905),_n_wht_22904)),(_n_cg_22894=_n_mix_22668(_n_cg_22894,(0.86*_n_back_22905),_n_wht_22904))),(_n_cb_22895=_n_mix_22668(_n_cb_22895,(0.92*_n_back_22905),_n_wht_22904))));
}
if(d::truth((_n_z_22871<_n_ahead_22860))){d::check_cancel();double _n_dz_22906=(_n_ahead_22860-_n_z_22871);
double _n_s_22907=(0.06+(0.012*_n_dz_22906));
double _n_red_22908=(([&](){auto _n_left_23067=([&](){auto _n_left_23069=std::exp((-d::number(std::pow(((_n_X_22883-0.36)/_n_s_22907),2.0))));auto _n_right_23070=std::exp((-d::number(std::pow(((_n_X_22883+0.36)/_n_s_22907),2.0))));return (_n_left_23069+_n_right_23070);})();auto _n_right_23068=std::exp(((-d::number(_n_dz_22906))/2.2));return (_n_left_23067*_n_right_23068);})()*0.7);
(void)((((_n_cr_22893=(_n_cr_22893+_n_red_22908)),(_n_cg_22894=(_n_cg_22894+(_n_red_22908*0.12)))),(_n_cb_22895=(_n_cb_22895+(_n_red_22908*0.12)))));
}
(void)((((([&](){auto&& _n_array_23071=this->_n_fr_22688;auto _n_index_23072=_n_k_22882;auto _n_value_23073=_n_cr_22893;d::put(_n_array_23071,_n_index_23072,_n_value_23073);return _n_value_23073;})(),([&](){auto&& _n_array_23074=this->_n_fg_22689;auto _n_index_23075=_n_k_22882;auto _n_value_23076=_n_cg_22894;d::put(_n_array_23074,_n_index_23075,_n_value_23076);return _n_value_23076;})()),([&](){auto&& _n_array_23077=this->_n_fb_22690;auto _n_index_23078=_n_k_22882;auto _n_value_23079=_n_cb_22895;d::put(_n_array_23077,_n_index_23078,_n_value_23079);return _n_value_23079;})()),([&](){auto&& _n_array_23080=this->_n_ff_22691;auto _n_index_23081=_n_k_22882;auto _n_value_23082=(d::truth(_n_road_22885)?0.03:0.02);d::put(_n_array_23080,_n_index_23081,_n_value_23082);return _n_value_23082;})()));
}}
}}
for(auto &&_n_item_23083:d::Array<double,false>{(_n_POLE_X_22651-0.45),(_n_POLE_X_22651+0.45)}){d::check_cancel();double _n_xw_22909=_n_item_23083;
{
{double _n_x_22910=(_n_VPX_22641+3.0);
for(;d::truth((_n_x_22910<_n_W_22638));(void)((_n_x_22910++))){d::check_cancel();double _n_dx_22911=((_n_x_22910+0.5)-_n_VPX_22641);
double _n_z_22912=((_n_F_22642*_n_xw_22909)/_n_dx_22911);
if(d::truth((_n_z_22912>_n_FAR_22646))){d::check_cancel();continue;
}
double _n_u_22913=(d::mod((d::mod(((_n_z_22912+_n_cam_22859)-3.0),_n_POLE_GAP_22652)+_n_POLE_GAP_22652),_n_POLE_GAP_22652)/_n_POLE_GAP_22652);
double _n_h_22914=(5.6-((2.4*_n_u_22913)*(1.0-_n_u_22913)));
double _n_yw_22915=(_n_HY_22640+(((1.0-_n_h_22914)*_n_dx_22911)/_n_xw_22909));
double _n_thick_22916=(0.55*std::sqrt((1.0+std::pow(((1.0-_n_h_22914)/_n_xw_22909),2.0))));
double _n_r0_22917=([&](){auto _n_argument_23084=0.0;auto _n_argument_23085=std::floor((_n_yw_22915-_n_thick_22916));return d::maximum({_n_argument_23084,_n_argument_23085});})();
double _n_r1_22918=([&](){auto _n_argument_23086=(_n_HY_22640+20.0);auto _n_argument_23087=std::ceil((_n_yw_22915+_n_thick_22916));return d::minimum({_n_argument_23086,_n_argument_23087});})();
{double _n_r_22919=_n_r0_22917;
for(;(d::truth((_n_r_22919<=_n_r1_22918))&&d::truth((_n_r_22919<_n_H_22639)));(void)((_n_r_22919++))){d::check_cancel();double _n_a_22920=(_n_clamp_22666((1.0-(std::fabs(((_n_r_22919+0.5)-_n_yw_22915))/_n_thick_22916)))*0.85);
double _n_k_22921=((_n_r_22919*_n_W_22638)+_n_x_22910);
(void)((((([&](){auto&& _n_array_23088=this->_n_fr_22688;auto _n_index_23089=_n_k_22921;auto _n_value_23090=_n_mix_22668(d::at(this->_n_fr_22688,_n_k_22921),0.03,_n_a_22920);d::put(_n_array_23088,_n_index_23089,_n_value_23090);return _n_value_23090;})(),([&](){auto&& _n_array_23091=this->_n_fg_22689;auto _n_index_23092=_n_k_22921;auto _n_value_23093=_n_mix_22668(d::at(this->_n_fg_22689,_n_k_22921),0.025,_n_a_22920);d::put(_n_array_23091,_n_index_23092,_n_value_23093);return _n_value_23093;})()),([&](){auto&& _n_array_23094=this->_n_fb_22690;auto _n_index_23095=_n_k_22921;auto _n_value_23096=_n_mix_22668(d::at(this->_n_fb_22690,_n_k_22921),0.05,_n_a_22920);d::put(_n_array_23094,_n_index_23095,_n_value_23096);return _n_value_23096;})()),([&](){auto&& _n_array_23097=this->_n_ff_22691;auto _n_index_23098=_n_k_22921;auto _n_value_23099=_n_mix_22668(d::at(this->_n_ff_22691,_n_k_22921),0.0,_n_a_22920);d::put(_n_array_23097,_n_index_23098,_n_value_23099);return _n_value_23099;})()));
}}
}}

}
}
d::Array<std::shared_ptr<std::tuple<double,std::function<void()>>>,false> _n_things_22922=d::Array<std::shared_ptr<std::tuple<double,std::function<void()>>>,false>{};
for(auto &&_n_item_23100:d::Array<std::array<double,4>,false>{std::array<double,4>{(_n_ROAD_R_22647+0.3),0.0,_n_POST_GAP_22653,0.0},std::array<double,4>{(_n_ROAD_L_22648-0.3),6.0,_n_POST_GAP_22653,1.0},std::array<double,4>{_n_POLE_X_22651,3.0,_n_POLE_GAP_22652,2.0}}){d::check_cancel();auto _n_binding_23101=_n_item_23100;
double _n_xp_22923=d::at(_n_binding_23101,0.0);
double _n_off_22924=d::at(_n_binding_23101,1.0);
double _n_gap_22925=d::at(_n_binding_23101,2.0);
double _n_kind_22926=d::at(_n_binding_23101,3.0);
{
{double _n_z_22927=d::mod((d::mod((_n_off_22924-_n_cam_22859),_n_gap_22925)+_n_gap_22925),_n_gap_22925);
for(;d::truth((_n_z_22927<_n_FAR_22646));(void)((_n_z_22927=(_n_z_22927+_n_gap_22925)))){d::check_cancel();if(d::truth((_n_z_22927<0.7))){d::check_cancel();continue;
}
if(d::truth((_n_kind_22926==2.0))){d::check_cancel();(void)(_n_things_22922.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_z_22927,[=]( ) mutable ->void{{
(void)(this->_n_box_22693((_n_xp_22923-0.12),(_n_xp_22923+0.12),0.0,6.3,_n_z_22927,0.008,0.006,0.012,1.0));
(void)(this->_n_box_22693((_n_xp_22923-0.6),(_n_xp_22923+0.6),5.5,5.66,_n_z_22927,0.008,0.006,0.012,1.0));

}
})));
}else {d::check_cancel();(void)(_n_things_22922.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_z_22927,[=]( ) mutable ->void{{
double _n_lit_22928=(_n_clamp_22666((7.0/_n_z_22927))*(d::truth((_n_kind_22926==0.0))?1.0:0.7));
(void)(this->_n_box_22693((_n_xp_22923-0.035),(_n_xp_22923+0.035),0.0,0.5,_n_z_22927,(0.06+(0.26*_n_lit_22928)),(0.06+(0.25*_n_lit_22928)),(0.08+(0.24*_n_lit_22928)),1.0));
double _n_s_22929=(0.25+(1.1*_n_lit_22928));
(void)(this->_n_box_22693((_n_xp_22923-0.04),(_n_xp_22923+0.04),0.37,0.47,_n_z_22927,_n_s_22929,(_n_s_22929*(d::truth((_n_kind_22926==0.0))?0.9:0.62)),(_n_s_22929*(d::truth((_n_kind_22926==0.0))?0.75:0.2)),1.0));

}
})));
}
}}

}
}
if(d::truth((_n_sign_22864>0.7))){d::check_cancel();(void)(_n_things_22922.push(std::make_shared<std::tuple<double,std::function<void()>>>((_n_sign_22864+3.0),[=]( ) mutable ->void{{
double _n_d_22930=(_n_F_22642/(_n_sign_22864+3.0));
double _n_x0_22931=(_n_VPX_22641+(7.0*_n_d_22930));
double _n_x1_22932=(_n_VPX_22641+(14.0*_n_d_22930));
double _n_y0_22933=(_n_HY_22640+((1.0-1.3)*_n_d_22930));
double _n_y1_22934=(_n_HY_22640+_n_d_22930);
(void)(this->_n_rect_22692(_n_x0_22931,_n_x1_22932,_n_y0_22933,_n_y1_22934,0.06,0.05,0.08,1.0));
{double _n_i_22935=0.0;
for(;d::truth((_n_i_22935<6.0));(void)((_n_i_22935++))){d::check_cancel();if(d::truth((_n_i_22935==4.0))){d::check_cancel();continue;
}
double _n_wx_22936=(_n_x0_22931+(((_n_i_22935+0.3)/6.0)*(_n_x1_22932-_n_x0_22931)));
(void)(this->_n_rect_22692(_n_wx_22936,(_n_wx_22936+((0.5*(_n_x1_22932-_n_x0_22931))/6.0)),(_n_y0_22933+(0.35*(_n_y1_22934-_n_y0_22933))),(_n_y0_22933+(0.6*(_n_y1_22934-_n_y0_22933))),1.0,0.7,0.35,0.9));
}}

}
})));
(void)(_n_things_22922.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_sign_22864,[=]( ) mutable ->void{{
double _n_d_22937=(_n_F_22642/_n_sign_22864);
(void)(this->_n_box_22693(4.6,4.72,0.0,2.4,_n_sign_22864,0.05,0.04,0.06,1.0));
double _n_x0_22938=(_n_VPX_22641+(3.0*_n_d_22937));
double _n_x1_22939=(_n_VPX_22641+(6.3*_n_d_22937));
double _n_y0_22940=(_n_HY_22640+((1.0-3.6)*_n_d_22937));
double _n_y1_22941=(_n_HY_22640+((1.0-2.4)*_n_d_22937));
double _n_bw_22942=(_n_x1_22939-_n_x0_22938);
double _n_c0_22943=([&](){auto _n_argument_23102=0.0;auto _n_argument_23103=std::floor(_n_x0_22938);return d::maximum({_n_argument_23102,_n_argument_23103});})();
double _n_c1_22944=([&](){auto _n_argument_23104=(_n_W_22638-1.0);auto _n_argument_23105=(std::ceil(_n_x1_22939)-1.0);return d::minimum({_n_argument_23104,_n_argument_23105});})();
double _n_r0_22945=([&](){auto _n_argument_23106=0.0;auto _n_argument_23107=std::floor(_n_y0_22940);return d::maximum({_n_argument_23106,_n_argument_23107});})();
double _n_r1_22946=([&](){auto _n_argument_23108=(_n_H_22639-1.0);auto _n_argument_23109=(std::ceil(_n_y1_22941)-1.0);return d::minimum({_n_argument_23108,_n_argument_23109});})();
{double _n_r_22947=_n_r0_22945;
for(;d::truth((_n_r_22947<=_n_r1_22946));(void)((_n_r_22947++))){d::check_cancel();{double _n_x_22948=_n_c0_22943;
for(;d::truth((_n_x_22948<=_n_c1_22944));(void)((_n_x_22948++))){d::check_cancel();double _n_k_22949=((_n_r_22947*_n_W_22638)+_n_x_22948);
double _n_u_22950=(((((_n_x_22948+0.5)-_n_x0_22938)/_n_bw_22942)*22.0)-1.5);
double _n_v_22951=(((((_n_r_22947+0.5)-_n_y0_22940)/(_n_y1_22941-_n_y0_22940))*8.0)-1.5);
double _n_cr_22952=0.1;
double _n_cg_22953=0.04;
double _n_cb_22954=0.1;
if(d::truth((_n_bw_22942<9.0))){d::check_cancel();(void)((((_n_cr_22952=1.0),(_n_cg_22953=0.4)),(_n_cb_22954=0.5)));
}else {d::check_cancel();if((((d::truth((_n_u_22950<(-d::number(0.8))))||d::truth((_n_u_22950>19.8)))||d::truth((_n_v_22951<(-d::number(0.8)))))||d::truth((_n_v_22951>5.8)))){d::check_cancel();(void)((((_n_cr_22952=0.3),(_n_cg_22953=0.95)),(_n_cb_22954=0.88)));
}else {d::check_cancel();if((((d::truth((_n_u_22950>=0.0))&&d::truth((_n_v_22951>=0.0)))&&d::truth((_n_u_22950<19.0)))&&d::truth((_n_v_22951<5.0)))){d::check_cancel();double _n_col_22955=std::floor(_n_u_22950);
bool _n_lit_22956=([&]()->bool{auto _n_logical_23110=(d::mod(_n_col_22955,4.0)!=3.0);return d::truth(_n_logical_23110)?(d::at(d::at(_n_GLYPHS_22662,std::floor(_n_v_22951)),_n_col_22955)==d::String(u"1")):_n_logical_23110;})();
if(d::truth(_n_lit_22956)){d::check_cancel();(void)((((_n_cr_22952=1.0),(_n_cg_22953=0.32)),(_n_cb_22954=0.38)));
}
}
}
}
double _n_a_22957=([&](){auto _n_left_23111=_n_overlap_22670(_n_x_22948,(_n_x_22948+1.0),_n_x0_22938,_n_x1_22939);auto _n_right_23112=_n_overlap_22670(_n_r_22947,(_n_r_22947+1.0),_n_y0_22940,_n_y1_22941);return (_n_left_23111*_n_right_23112);})();
(void)((((([&](){auto&& _n_array_23113=this->_n_fr_22688;auto _n_index_23114=_n_k_22949;auto _n_value_23115=_n_mix_22668(d::at(this->_n_fr_22688,_n_k_22949),_n_cr_22952,_n_a_22957);d::put(_n_array_23113,_n_index_23114,_n_value_23115);return _n_value_23115;})(),([&](){auto&& _n_array_23116=this->_n_fg_22689;auto _n_index_23117=_n_k_22949;auto _n_value_23118=_n_mix_22668(d::at(this->_n_fg_22689,_n_k_22949),_n_cg_22953,_n_a_22957);d::put(_n_array_23116,_n_index_23117,_n_value_23118);return _n_value_23118;})()),([&](){auto&& _n_array_23119=this->_n_fb_22690;auto _n_index_23120=_n_k_22949;auto _n_value_23121=_n_mix_22668(d::at(this->_n_fb_22690,_n_k_22949),_n_cb_22954,_n_a_22957);d::put(_n_array_23119,_n_index_23120,_n_value_23121);return _n_value_23121;})()),([&](){auto&& _n_array_23122=this->_n_ff_22691;auto _n_index_23123=_n_k_22949;auto _n_value_23124=_n_mix_22668(d::at(this->_n_ff_22691,_n_k_22949),0.15,_n_a_22957);d::put(_n_array_23122,_n_index_23123,_n_value_23124);return _n_value_23124;})()));
}}
}}
double _n_fade_22958=_n_smooth_22667(_n_FAR_22646,85.0,_n_sign_22864);
(void)(this->_n_glow_22694(((_n_x0_22938+_n_x1_22939)/2.0),((_n_y0_22940+_n_y1_22941)/2.0),0.0,(1.5+(_n_bw_22942*0.35)),0.0,1.0,0.3,0.45,(0.35*_n_fade_22958)));

}
})));
}
(void)(_n_things_22922.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_ahead_22860,[=]( ) mutable ->void{{
double _n_lit_22959=_n_clamp_22666((11.0/_n_ahead_22860));
(void)(this->_n_box_22693((-d::number(0.46)),0.46,0.12,0.62,_n_ahead_22860,(0.12+(0.4*_n_lit_22959)),(0.12+(0.37*_n_lit_22959)),(0.15+(0.3*_n_lit_22959)),1.0));
(void)(this->_n_box_22693((-d::number(0.32)),0.32,0.62,0.95,_n_ahead_22860,0.05,0.05,0.08,1.0));
(void)(this->_n_box_22693((-d::number(0.46)),0.46,0.0,0.12,_n_ahead_22860,0.02,0.02,0.03,1.0));
(void)(this->_n_box_22693((-d::number(0.43)),(-d::number(0.29)),0.44,0.54,_n_ahead_22860,1.0,0.2,0.18,1.0));
(void)(this->_n_box_22693(0.29,0.43,0.44,0.54,_n_ahead_22860,1.0,0.2,0.18,1.0));

}
})));
for(auto &&_n_item_23125:_n_cars_22861){d::check_cancel();double _n_cz_22960=_n_item_23125;
{
(void)(_n_things_22922.push(std::make_shared<std::tuple<double,std::function<void()>>>(_n_cz_22960,[=]( ) mutable ->void{{
(void)(([&](){auto _n_argument_23126=(_n_LANE_L_22650-0.46);auto _n_argument_23127=(_n_LANE_L_22650+0.46);auto _n_argument_23128=0.08;auto _n_argument_23129=0.6;auto _n_argument_23130=_n_cz_22960;auto _n_argument_23131=0.04;auto _n_argument_23132=0.04;auto _n_argument_23133=0.06;auto _n_argument_23134=_n_smooth_22667(40.0,20.0,_n_cz_22960);return this->_n_box_22693(_n_argument_23126,_n_argument_23127,_n_argument_23128,_n_argument_23129,_n_argument_23130,_n_argument_23131,_n_argument_23132,_n_argument_23133,_n_argument_23134);})());
(void)(([&](){auto _n_argument_23135=(_n_LANE_L_22650-0.32);auto _n_argument_23136=(_n_LANE_L_22650+0.32);auto _n_argument_23137=0.6;auto _n_argument_23138=0.92;auto _n_argument_23139=_n_cz_22960;auto _n_argument_23140=0.03;auto _n_argument_23141=0.03;auto _n_argument_23142=0.05;auto _n_argument_23143=_n_smooth_22667(40.0,20.0,_n_cz_22960);return this->_n_box_22693(_n_argument_23135,_n_argument_23136,_n_argument_23137,_n_argument_23138,_n_argument_23139,_n_argument_23140,_n_argument_23141,_n_argument_23142,_n_argument_23143);})());

}
})));

}
}
(void)(_n_things_22922.sort([=]( std::shared_ptr<std::tuple<double,std::function<void()>>> _a0,std::shared_ptr<std::tuple<double,std::function<void()>>> _a1) mutable ->double{std::shared_ptr<std::tuple<double,std::function<void()>>> _n_a_22961=_a0;
std::shared_ptr<std::tuple<double,std::function<void()>>> _n_b_22962=_a1;
return (std::get<0>(*_n_b_22962)-std::get<0>(*_n_a_22961));}));
for(auto &&_n_item_23144:_n_things_22922){d::check_cancel();auto _n_binding_23145=_n_item_23144;
std::function<void()> _n_draw_22963=std::get<1>(*_n_binding_23145);
(void)(_n_draw_22963());
}
{
double _n_d_22964=(_n_F_22642/_n_ahead_22860);
for(auto &&_n_item_23146:d::Array<double,false>{(-d::number(0.36)),0.36}){d::check_cancel();double _n_sx_22965=_n_item_23146;
(void)(this->_n_glow_22694((_n_VPX_22641+(_n_sx_22965*_n_d_22964)),(_n_HY_22640+((1.0-0.49)*_n_d_22964)),(0.07*_n_d_22964),(0.8+(0.12*_n_d_22964)),0.0,1.0,0.15,0.12,0.6));
}

}
for(auto &&_n_item_23147:_n_cars_22861){d::check_cancel();double _n_cz_22966=_n_item_23147;
{
double _n_d_22967=(_n_F_22642/_n_cz_22966);
double _n_fade_22968=_n_smooth_22667(_n_FAR_22646,80.0,_n_cz_22966);
double _n_near_22969=_n_clamp_22666((4.0/_n_cz_22966));
for(auto &&_n_item_23148:d::Array<double,false>{(-d::number(0.33)),0.33}){d::check_cancel();double _n_sx_22970=_n_item_23148;
{
(void)(this->_n_glow_22694((_n_VPX_22641+((_n_LANE_L_22650+_n_sx_22970)*_n_d_22967)),(_n_HY_22640+((1.0-0.34)*_n_d_22967)),(0.06*_n_d_22967),(0.7+(0.03*_n_d_22967)),(2.0+(0.5*_n_d_22967)),1.0,0.96,0.85,(_n_fade_22968*(0.75+(0.5*_n_near_22969)))));

}
}

}
}
{double _n_r_22971=0.0;
for(;d::truth((_n_r_22971<_n_H_22639));(void)((_n_r_22971++))){d::check_cancel();{double _n_x_22972=0.0;
for(;d::truth((_n_x_22972<_n_W_22638));(void)((_n_x_22972++))){d::check_cancel();double _n_k_22973=((_n_r_22971*_n_W_22638)+_n_x_22972);
double _n_cr_22974=d::at(this->_n_fr_22688,_n_k_22973);
double _n_cg_22975=d::at(this->_n_fg_22689,_n_k_22973);
double _n_cbl_22976=d::at(this->_n_fb_22690,_n_k_22973);
double _n_floor_22977=d::at(this->_n_ff_22691,_n_k_22973);
double _n_peak_22978=d::maximum({_n_cr_22974,_n_cg_22975,_n_cbl_22976,0.0001});
double _n_level_22979=_n_clamp_22666((_n_floor_22977+(((1.0-_n_floor_22977)*std::pow(_n_peak_22978,0.85))*0.95)));
double _n_step_22980=([&](){auto _n_argument_23149=0.0;auto _n_argument_23150=([&](){auto _n_argument_23151=3.0;auto _n_argument_23152=d::round(((_n_level_22979*3.0)+d::at(_n_BAYER_22661,((double(d::i32(_n_r_22971)&d::i32(3.0))*4.0)+double(d::i32(_n_x_22972)&d::i32(3.0))))));return d::minimum({_n_argument_23151,_n_argument_23152});})();return d::maximum({_n_argument_23149,_n_argument_23150});})();
(void)(([&](){auto&& _n_array_23153=this->_n_out_22674;auto _n_index_23154=_n_k_22973;auto _n_value_23155=d::at(_n_DOTS_22659,_n_step_22980);d::put(_n_array_23153,_n_index_23154,_n_value_23155);return _n_value_23155;})());
if(d::truth(_n_color_22857)){d::check_cancel();double _n_want_22981=(d::truth(_n_step_22980)?d::minimum({1.0,((_n_level_22979+0.06)/d::at(_n_COVER_22660,_n_step_22980))}):0.0);
double _n_s_22982=((0.3+(0.7*_n_want_22981))/_n_peak_22978);
(void)(([&](){auto&& _n_array_23156=d::read(_n_color_22857);auto _n_index_23157=_n_k_22973;auto _n_value_23158=([&](){auto _n_argument_23159=_n_clamp_22666((_n_cr_22974*_n_s_22982));auto _n_argument_23160=_n_clamp_22666((_n_cg_22975*_n_s_22982));auto _n_argument_23161=_n_clamp_22666((_n_cbl_22976*_n_s_22982));return this->_n_nearest_22676(_n_argument_23159,_n_argument_23160,_n_argument_23161);})();d::put(_n_array_23156,_n_index_23157,_n_value_23158);return _n_value_23158;})());
}
}}
}}
d::Array<d::String,false> _n_lines_22983=d::Array<d::String,false>{};
{double _n_r_22984=0.0;
for(;d::truth((_n_r_22984<_n_H_22639));(void)((_n_r_22984++))){d::check_cancel();(void)(_n_lines_22983.push(d::join(this->_n_out_22674.slice((_n_r_22984*_n_W_22638),((_n_r_22984+1.0)*_n_W_22638)),d::String(u""))));
}}
return d::join(_n_lines_22983,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("night-highway").cols)*ascii::catalog_meta("night-highway").rows);auto _env=std::make_shared<_n_Record_22985>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &night_highway_meta(){return catalog_meta("night-highway");}
std::unique_ptr<Piece> make_night_highway(const AsciiPieceOptions &o){return std::make_unique<Native_night_highway>(o);}
}
