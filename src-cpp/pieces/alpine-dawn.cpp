// Direct, statically typed C++ from src/pieces/alpine-dawn.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2;
struct _n_Record_342;
struct _n_Record_2{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_2> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_342{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_342> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_342>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_14(double _a0,double _a1);
double _n_noise_15(double _a0,double _a1,double _a2);
double _n_fbm_16(double _a0,double _a1,double _a2,double _a3);
double _n_ridged_17(double _a0,double _a1,double _a2);
double _n_clamp_18(double _a0);
double _n_smooth_19(double _a0,double _a1,double _a2);
double _n_mix_20(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_21(d::String _a0);
double _n_terrain_23(double _a0,double _a1);
double _n_march_24(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_2> _n_meta_1=[](){return ([&](){auto _n_object_345=std::make_shared<_n_Record_2>();_n_object_345->_p_name=d::String(u"alpine dawn");_n_object_345->_p_category=d::String(u"scenes");_n_object_345->_p_note=d::String(u"snow peaks catching first light above a still, misty mountain lake");_n_object_345->_p_cols=200.0;_n_object_345->_p_rows=100.0;_n_object_345->_p_cell=1.0;_n_object_345->_p_fps=15.0;_n_object_345->_p_ground=d::String(u"#090c18");_n_object_345->_p_palette=d::Array<d::String,false>{d::String(u"#0e1430"),d::String(u"#151d40"),d::String(u"#1d2752"),d::String(u"#263365"),d::String(u"#314179"),d::String(u"#3e508c"),d::String(u"#4f62a0"),d::String(u"#6577b3"),d::String(u"#8090c4"),d::String(u"#9eaad3"),d::String(u"#bec6e2"),d::String(u"#4b3e6c"),d::String(u"#6a5482"),d::String(u"#8c6a92"),d::String(u"#b0829c"),d::String(u"#cf96a4"),d::String(u"#e8a9a8"),d::String(u"#f5bcaa"),d::String(u"#ffd0b0"),d::String(u"#ffe2c2"),d::String(u"#fff1e0"),d::String(u"#fdfaf6"),d::String(u"#ffc887"),d::String(u"#f7a965"),d::String(u"#f2a08f"),d::String(u"#e58a87"),d::String(u"#f8b59d"),d::String(u"#d97b7e"),d::String(u"#7a4c4a"),d::String(u"#a5654f"),d::String(u"#523a4a"),d::String(u"#1b2034"),d::String(u"#262c45"),d::String(u"#363c59"),d::String(u"#0a1418"),d::String(u"#0f1f24"),d::String(u"#162a2f"),d::String(u"#203a3c"),d::String(u"#a3a7c6"),d::String(u"#c6c3d8"),d::String(u"#e0d4dc"),d::String(u"#5a4f7e"),d::String(u"#7b6c9c"),d::String(u"#9a8cb6"),d::String(u"#b8a8c8"),d::String(u"#d8bccb")};return _n_object_345;})();}();
const double _n_W_3=[](){return 200.0;}();
const double _n_H_4=[](){return 100.0;}();
const double _n_K_5=[](){return 0.62;}();
const double _n_HZ_6=[](){return 56.5;}();
const double _n_CAM_7=[](){return 1.5;}();
const double _n_SHORE_Z_8=[](){return 46.0;}();
const double _n_SHORE_9=[](){return 62.0;}();
d::Array<double,false> _n_SUN_10=[](){return d::Array<double,false>{151.0,50.0};}();
const d::String _n_DOTS_11=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_12=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_13=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_66=_a0;
return ((_n_v_66/16.0)-0.47);});}();
d::Array<std::array<double,6>,false> _n_PEAKS_22=[](){return d::map(d::Array<d::Array<double,false>,false>{d::Array<double,false>{66.0,11.0,140.0,0.95,0.3},d::Array<double,false>{38.0,26.0,115.0,1.1,(-d::number(0.15))},d::Array<double,false>{116.0,22.0,175.0,0.9,0.2},d::Array<double,false>{92.0,33.0,150.0,1.0,0.1},d::Array<double,false>{96.0,25.0,340.0,1.1,0.4},d::Array<double,false>{180.0,38.0,200.0,1.5,(-d::number(0.1))},d::Array<double,false>{8.0,30.0,160.0,1.2,0.25}},[&]( d::Array<double,false> _a0) mutable ->std::array<double,6>{auto _n_binding_346=_a0;
double _n_sx_113=d::at(_n_binding_346,0.0);
double _n_row_114=d::at(_n_binding_346,1.0);
double _n_z_115=d::at(_n_binding_346,2.0);
double _n_f_116=d::at(_n_binding_346,3.0);
double _n_a_117=d::at(_n_binding_346,4.0);
{
double _n_h_118=((_n_CAM_7+((((_n_HZ_6-_n_row_114)/100.0)*_n_K_5)*_n_z_115))-1.5);
return std::array<double,6>{((((_n_sx_113-100.0)/100.0)*_n_K_5)*_n_z_115),_n_z_115,_n_h_118,(_n_h_118*_n_f_116),std::cos(_n_a_117),std::sin(_n_a_117)};

}
});}();
double _n_hash_14(double _a0,double _a1){double _n_x_67=_a0;
double _n_y_68=_a1;
{
double _n_h_69=([&](){auto _n_left_347=d::imul(double(d::i32(_n_x_67)|d::i32(0.0)),374761393.0);auto _n_right_348=d::imul(double(d::i32(_n_y_68)|d::i32(0.0)),668265263.0);return (_n_left_347+_n_right_348);})();
(void)((_n_h_69=d::imul(double(d::i32(_n_h_69)^d::i32(double(d::u32(_n_h_69)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_69)^d::i32(double(d::u32(_n_h_69)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_15(double _a0,double _a1,double _a2){double _n_x_70=_a0;
double _n_y_71=_a1;
double _n_period_72=_a2;
{
double _n_xi_73=std::floor(_n_x_70);
double _n_yi_74=std::floor(_n_y_71);
double _n_fx_75=(_n_x_70-_n_xi_73);
double _n_fy_76=(_n_y_71-_n_yi_74);
double _n_u_77=((_n_fx_75*_n_fx_75)*(3.0-(2.0*_n_fx_75)));
double _n_v_78=((_n_fy_76*_n_fy_76)*(3.0-(2.0*_n_fy_76)));
double _n_x0_79=_n_xi_73;
double _n_x1_80=(_n_xi_73+1.0);
if(d::truth(_n_period_72)){d::check_cancel();(void)((_n_x0_79=d::mod((d::mod(_n_xi_73,_n_period_72)+_n_period_72),_n_period_72)));
(void)((_n_x1_80=d::mod((_n_x0_79+1.0),_n_period_72)));
}
double _n_a_81=_n_hash_14(_n_x0_79,_n_yi_74);
double _n_b_82=_n_hash_14(_n_x1_80,_n_yi_74);
double _n_c_83=_n_hash_14(_n_x0_79,(_n_yi_74+1.0));
double _n_d_84=_n_hash_14(_n_x1_80,(_n_yi_74+1.0));
return (((_n_a_81+((_n_b_82-_n_a_81)*_n_u_77))+((_n_c_83-_n_a_81)*_n_v_78))+(((((_n_a_81-_n_b_82)-_n_c_83)+_n_d_84)*_n_u_77)*_n_v_78));

}
}

double _n_fbm_16(double _a0,double _a1,double _a2,double _a3){double _n_x_85=_a0;
double _n_y_86=_a1;
double _n_octaves_87=_a2;
double _n_period_88=_a3;
{
double _n_s_89=0.0;
double _n_n_90=0.0;
double _n_amp_91=0.5;
double _n_f_92=1.0;
{double _n_i_93=0.0;
for(;d::truth((_n_i_93<_n_octaves_87));(void)((_n_i_93++))){d::check_cancel();(void)((_n_s_89=(_n_s_89+(_n_amp_91*_n_noise_15((_n_x_85*_n_f_92),(_n_y_86*_n_f_92),(_n_period_88*_n_f_92))))));
(void)((_n_n_90=(_n_n_90+_n_amp_91)));
(void)((_n_amp_91=(_n_amp_91*0.5)));
(void)((_n_f_92=(_n_f_92*2.0)));
}}
return (_n_s_89/_n_n_90);

}
}

double _n_ridged_17(double _a0,double _a1,double _a2){double _n_x_94=_a0;
double _n_y_95=_a1;
double _n_octaves_96=_a2;
{
double _n_s_97=0.0;
double _n_n_98=0.0;
double _n_amp_99=0.5;
double _n_f_100=1.0;
{double _n_i_101=0.0;
for(;d::truth((_n_i_101<_n_octaves_96));(void)((_n_i_101++))){d::check_cancel();double _n_v_102=(1.0-std::fabs(((2.0*_n_noise_15(((_n_x_94*_n_f_100)+(_n_i_101*17.3)),(_n_y_95*_n_f_100),0.0))-1.0)));
(void)((_n_s_97=(_n_s_97+((_n_amp_99*_n_v_102)*_n_v_102))));
(void)((_n_n_98=(_n_n_98+_n_amp_99)));
(void)((_n_amp_99=(_n_amp_99*0.5)));
(void)((_n_f_100=(_n_f_100*2.1)));
}}
return (_n_s_97/_n_n_98);

}
}

double _n_clamp_18(double _a0){double _n_v_103=_a0;
return (d::truth((_n_v_103<0.0))?0.0:(d::truth((_n_v_103>1.0))?1.0:_n_v_103));}

double _n_smooth_19(double _a0,double _a1,double _a2){double _n_a_104=_a0;
double _n_b_105=_a1;
double _n_v_106=_a2;
{
double _n_k_107=_n_clamp_18(((_n_v_106-_n_a_104)/(_n_b_105-_n_a_104)));
return ((_n_k_107*_n_k_107)*(3.0-(2.0*_n_k_107)));

}
}

double _n_mix_20(double _a0,double _a1,double _a2){double _n_a_108=_a0;
double _n_b_109=_a1;
double _n_k_110=_a2;
return (_n_a_108+((_n_b_109-_n_a_108)*_n_k_110));}

d::Array<double,false> _n_hex_21(d::String _a0){d::String _n_s_111=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_112=_a0;
return (([&](){auto _n_argument_349=d::slice(_n_s_111,_n_i_112,(_n_i_112+2.0));auto _n_argument_350=16.0;return d::parseInt(_n_argument_349,_n_argument_350);})()/255.0);});}

double _n_terrain_23(double _a0,double _a1){double _n_x_119=_a0;
double _n_z_120=_a1;
{
double _n_h_121=0.0;
for(auto &&_n_item_351:_n_PEAKS_22){d::check_cancel();auto _n_binding_352=_n_item_351;
double _n_px_122=d::at(_n_binding_352,0.0);
double _n_pz_123=d::at(_n_binding_352,1.0);
double _n_ph_124=d::at(_n_binding_352,2.0);
double _n_pr_125=d::at(_n_binding_352,3.0);
double _n_c_126=d::at(_n_binding_352,4.0);
double _n_s_127=d::at(_n_binding_352,5.0);
{
double _n_dx_128=(_n_x_119-_n_px_122);
double _n_dz_129=(_n_z_120-_n_pz_123);
double _n_rx_130=((_n_dx_128*_n_c_126)-(_n_dz_129*_n_s_127));
double _n_rz_131=((_n_dx_128*_n_s_127)+(_n_dz_129*_n_c_126));
double _n_v_132=(_n_ph_124*(1.0-(([&](){auto _n_left_353=std::fabs(_n_rx_130);auto _n_right_354=std::fabs(_n_rz_131);return (_n_left_353+_n_right_354);})()/_n_pr_125)));
if(d::truth((_n_v_132>_n_h_121))){d::check_cancel();(void)((_n_h_121=_n_v_132));
}

}
}
double _n_hills_133=([&](){auto _n_left_355=(1.0+(3.0*_n_fbm_16((_n_x_119*0.04),(_n_z_120*0.04),3.0,0.0)));auto _n_right_356=_n_smooth_19(_n_SHORE_Z_8,(_n_SHORE_Z_8+15.0),_n_z_120);return (_n_left_355*_n_right_356);})();
if(d::truth((_n_hills_133>_n_h_121))){d::check_cancel();(void)((_n_h_121=_n_hills_133));
}
(void)((_n_h_121=(_n_h_121+([&](){auto _n_left_357=([&](){auto _n_left_359=((_n_ridged_17((_n_x_119*0.06),(_n_z_120*0.06),3.0)-0.45)*6.0);auto _n_right_360=((_n_ridged_17((_n_x_119*0.2),(_n_z_120*0.2),2.0)-0.45)*1.6);return (_n_left_359+_n_right_360);})();auto _n_right_358=_n_smooth_19(4.0,22.0,_n_h_121);return (_n_left_357*_n_right_358);})())));
return _n_h_121;

}
}

double _n_march_24(double _a0,double _a1,double _a2){double _n_u_134=_a0;
double _n_v_135=_a1;
double _n_oy_136=_a2;
{
double _n_z_137=_n_SHORE_Z_8;
double _n_prev_138=_n_z_137;
{double _n_i_139=0.0;
for(;(d::truth((_n_i_139<260.0))&&d::truth((_n_z_137<520.0)));(void)((_n_i_139++))){d::check_cancel();double _n_gap_140=((_n_oy_136+(_n_v_135*_n_z_137))-_n_terrain_23((_n_u_134*_n_z_137),_n_z_137));
if(d::truth((_n_gap_140<0.0))){d::check_cancel();double _n_a_141=_n_prev_138;
double _n_b_142=_n_z_137;
{double _n_j_143=0.0;
for(;d::truth((_n_j_143<7.0));(void)((_n_j_143++))){d::check_cancel();double _n_m_144=((_n_a_141+_n_b_142)/2.0);
if(d::truth((((_n_oy_136+(_n_v_135*_n_m_144))-_n_terrain_23((_n_u_134*_n_m_144),_n_m_144))<0.0))){d::check_cancel();(void)((_n_b_142=_n_m_144));
}else {d::check_cancel();(void)((_n_a_141=_n_m_144));
}
}}
return _n_b_142;
}
(void)((_n_prev_138=_n_z_137));
(void)((_n_z_137=(_n_z_137+(d::maximum({0.35,(_n_gap_140*0.45)})+(_n_z_137*0.002)))));
}}
return 0.0;

}
}

struct Native_alpine_dawn final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_25{};
double _n_N_26{};
d::Array<d::String,false> _n_out_27{};
d::Array<uint8_t,true> _n_lut_28{};
d::Array<double,false> _n_L_30{};
double _n_SR_31{};
d::Array<float,true> _n_depth_32{};
d::Array<float,true> _n_alt_33{};
d::Array<float,true> _n_sun_34{};
d::Array<float,true> _n_snow_35{};
d::Array<float,true> _n_up_36{};
d::Array<uint8_t,true> _n_rim_37{};
d::Array<float,true> _n_treeTop_38{};
double _n_LR_39{};
d::Array<float,true> _n_src_40{};
d::Array<uint8_t,true> _n_fg_41{};
d::Array<float,true> _n_fgShade_42{};
d::Array<float,true> _n_fgRim_43{};
d::Array<d::Array<double,false>,false> _n_PINES_44{};
double _n_MW_45{};
double _n_M0_46{};
double _n_MR_47{};
d::Array<float,true> _n_mist_48{};
double _n_CW_49{};
double _n_CR_50{};
d::Array<float,true> _n_cloud_51{};
d::Array<float,true> _n_hz_52{};
d::Array<float,true> _n_skyR_53{};
d::Array<float,true> _n_skyG_54{};
d::Array<float,true> _n_skyB_55{};
d::Array<float,true> _n_glowA_56{};
d::Array<float,true> _n_AR_57{};
d::Array<float,true> _n_AG_58{};
d::Array<float,true> _n_AB_59{};
d::Array<float,true> _n_FR_60{};
d::Array<float,true> _n_FG_61{};
d::Array<float,true> _n_FB_62{};
d::Array<float,true> _n_floor_63{};
d::Array<float,true> _n_fade_64{};
d::Array<float,true> _n_wisp_65{};
std::function<d::String(double,std::shared_ptr<_n_Record_342>)> _render;
double _n_nearest_29(double _a0,double _a1,double _a2){double _n_r_145=_a0;
double _n_g_146=_a1;
double _n_b_147=_a2;
{
double _n_k_148=([&](){auto _n_left_614=([&](){auto _n_left_616=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_145*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_617=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_146*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_616)|d::i32(_n_right_617));})();auto _n_right_615=d::minimum({31.0,double(d::i32((_n_b_147*31.99))|d::i32(0.0))});return double(d::i32(_n_left_614)|d::i32(_n_right_615));})();
if(d::truth((d::at(this->_n_lut_28,_n_k_148)!=255.0))){d::check_cancel();return d::at(this->_n_lut_28,_n_k_148);
}
double _n_best_149=0.0;
double _n_bd_150=1000000000.0;
{double _n_i_151=0.0;
for(;d::truth((_n_i_151<double(this->_n_P_25.size())));(void)((_n_i_151++))){d::check_cancel();double _n_dr_152=(d::at(d::at(this->_n_P_25,_n_i_151),0.0)-_n_r_145);
double _n_dg_153=(d::at(d::at(this->_n_P_25,_n_i_151),1.0)-_n_g_146);
double _n_db_154=(d::at(d::at(this->_n_P_25,_n_i_151),2.0)-_n_b_147);
double _n_d_155=((((0.3*_n_dr_152)*_n_dr_152)+((0.5*_n_dg_153)*_n_dg_153))+((0.2*_n_db_154)*_n_db_154));
if(d::truth((_n_d_155<_n_bd_150))){d::check_cancel();(void)(((_n_bd_150=_n_d_155),(_n_best_149=_n_i_151)));
}
}}
return ([&](){auto&& _n_array_618=this->_n_lut_28;auto _n_index_619=_n_k_148;auto _n_value_620=_n_best_149;d::put(_n_array_618,_n_index_619,_n_value_620);return _n_value_620;})();

}
}

explicit Native_alpine_dawn(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_25=d::map(_n_meta_1->_p_palette,_n_hex_21);
this->_n_N_26=(_n_W_3*_n_H_4);
this->_n_out_27=d::Array<d::String,false>(size_t(this->_n_N_26));
this->_n_lut_28=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_L_30=[=]( ) mutable ->d::Array<double,false>{{
d::Array<double,false> _n_v_156=d::Array<double,false>{0.9,0.3,0.14};
double _n_n_157=d::hypot(_n_v_156);
return d::map(_n_v_156,[&]( double _a0) mutable ->double{double _n_c_158=_a0;
return (_n_c_158/_n_n_157);});

}
}();
this->_n_SR_31=_n_SHORE_9;
this->_n_depth_32=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_alt_33=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_sun_34=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_snow_35=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_up_36=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
{double _n_r_159=0.0;
for(;d::truth((_n_r_159<this->_n_SR_31));(void)((_n_r_159++))){d::check_cancel();double _n_v_160=(((_n_HZ_6-(_n_r_159+0.5))/100.0)*_n_K_5);
{double _n_x_161=0.0;
for(;d::truth((_n_x_161<_n_W_3));(void)((_n_x_161++))){d::check_cancel();double _n_u_162=((((_n_x_161+0.5)-100.0)/100.0)*_n_K_5);
double _n_z_163=_n_march_24(_n_u_162,_n_v_160,_n_CAM_7);
double _n_k_164=((_n_r_159*_n_W_3)+_n_x_161);
if(d::truth((!d::truth(_n_z_163)))){d::check_cancel();continue;
}
double _n_px_165=(_n_u_162*_n_z_163);
double _n_py_166=(_n_CAM_7+(_n_v_160*_n_z_163));
double _n_e_167=0.35;
double _n_hx_168=(([&](){auto _n_left_361=_n_terrain_23((_n_px_165+_n_e_167),_n_z_163);auto _n_right_362=_n_terrain_23((_n_px_165-_n_e_167),_n_z_163);return (_n_left_361-_n_right_362);})()/(2.0*_n_e_167));
double _n_hz_169=(([&](){auto _n_left_363=_n_terrain_23(_n_px_165,(_n_z_163+_n_e_167));auto _n_right_364=_n_terrain_23(_n_px_165,(_n_z_163-_n_e_167));return (_n_left_363-_n_right_364);})()/(2.0*_n_e_167));
double _n_nl_170=d::hypot(std::initializer_list<double>{_n_hx_168,1.0,_n_hz_169});
double _n_nx_171=((-d::number(_n_hx_168))/_n_nl_170);
double _n_ny_172=(1.0/_n_nl_170);
double _n_nz_173=((-d::number(_n_hz_169))/_n_nl_170);
double _n_lit_174=d::maximum({0.0,(((_n_nx_171*d::at(this->_n_L_30,0.0))+(_n_ny_172*d::at(this->_n_L_30,1.0)))+(_n_nz_173*d::at(this->_n_L_30,2.0)))});
if(d::truth((_n_lit_174>0.0))){d::check_cancel();{double _n_s_175=0.8;
for(;d::truth((_n_s_175<160.0));(void)((_n_s_175=(_n_s_175+(0.6+(_n_s_175*0.04)))))){d::check_cancel();double _n_qx_176=(_n_px_165+(d::at(this->_n_L_30,0.0)*_n_s_175));
double _n_qy_177=((_n_py_166+(d::at(this->_n_L_30,1.0)*_n_s_175))+0.15);
double _n_qz_178=(_n_z_163+(d::at(this->_n_L_30,2.0)*_n_s_175));
if(d::truth((_n_qz_178<_n_SHORE_Z_8))){d::check_cancel();break;
}
if(d::truth((_n_qy_177<_n_terrain_23(_n_qx_176,_n_qz_178)))){d::check_cancel();(void)((_n_lit_174=0.0));
break;
}
}}
}
(void)(([&](){auto&& _n_array_365=this->_n_depth_32;auto _n_index_366=_n_k_164;auto _n_value_367=_n_z_163;d::put(_n_array_365,_n_index_366,_n_value_367);return _n_value_367;})());
(void)(([&](){auto&& _n_array_368=this->_n_alt_33;auto _n_index_369=_n_k_164;auto _n_value_370=_n_py_166;d::put(_n_array_368,_n_index_369,_n_value_370);return _n_value_370;})());
(void)(([&](){auto&& _n_array_371=this->_n_sun_34;auto _n_index_372=_n_k_164;auto _n_value_373=_n_lit_174;d::put(_n_array_371,_n_index_372,_n_value_373);return _n_value_373;})());
(void)(([&](){auto&& _n_array_374=this->_n_up_36;auto _n_index_375=_n_k_164;auto _n_value_376=_n_ny_172;d::put(_n_array_374,_n_index_375,_n_value_376);return _n_value_376;})());
double _n_grain_179=_n_fbm_16((_n_px_165*0.4),(_n_py_166*0.25),2.0,0.0);
double _n_gully_180=_n_ridged_17(((_n_px_165*0.22)+(_n_z_163*0.05)),(_n_py_166*0.045),2.0);
(void)(([&](){auto&& _n_array_377=this->_n_snow_35;auto _n_index_378=_n_k_164;auto _n_value_379=([&](){auto _n_left_380=([&](){auto _n_left_382=_n_smooth_19(0.36,0.52,(_n_ny_172+(0.3*(_n_grain_179-0.5))));auto _n_right_383=_n_smooth_19(5.0,11.0,(_n_py_166+(5.0*_n_grain_179)));return (_n_left_382*_n_right_383);})();auto _n_right_381=(1.0-(0.75*_n_smooth_19(0.62,0.85,_n_gully_180)));return (_n_left_380*_n_right_381);})();d::put(_n_array_377,_n_index_378,_n_value_379);return _n_value_379;})());
}}
}}
this->_n_rim_37=d::Array<uint8_t,true>(size_t((this->_n_SR_31*_n_W_3)));
{double _n_k_181=_n_W_3;
for(;d::truth((_n_k_181<(this->_n_SR_31*_n_W_3)));(void)((_n_k_181++))){d::check_cancel();(void)(([&](){auto&& _n_array_384=this->_n_rim_37;auto _n_index_385=_n_k_181;auto _n_value_386=(((d::truth(d::at(this->_n_depth_32,_n_k_181))&&d::truth((!d::truth(d::at(this->_n_depth_32,(_n_k_181-_n_W_3))))))&&d::truth((d::at(this->_n_sun_34,_n_k_181)>0.0)))?1.0:0.0);d::put(_n_array_384,_n_index_385,_n_value_386);return _n_value_386;})());
}}
this->_n_treeTop_38=d::Array<float,true>(size_t(_n_W_3));
{double _n_x_182=0.0;
for(;d::truth((_n_x_182<_n_W_3));(void)((_n_x_182++))){d::check_cancel();(void)(([&](){auto&& _n_array_387=this->_n_treeTop_38;auto _n_index_388=_n_x_182;auto _n_value_389=((_n_SHORE_9-0.6)-(1.2*_n_fbm_16((_n_x_182*0.06),2.3,2.0,0.0)));d::put(_n_array_387,_n_index_388,_n_value_389);return _n_value_389;})());
}}
{double _n_tx_183=(-d::number(2.0));
for(;d::truth((_n_tx_183<(_n_W_3+2.0)));(void)((_n_tx_183=(_n_tx_183+(1.6+(_n_hash_14((_n_tx_183*9.0),7.0)*2.2)))))){d::check_cancel();double _n_tip_184=([&](){auto _n_left_390=((_n_SHORE_9-2.6)-(_n_hash_14((_n_tx_183*3.0),8.0)*4.0));auto _n_right_391=(1.5*_n_smooth_19(60.0,0.0,_n_tx_183));return (_n_left_390-_n_right_391);})();
double _n_slope_185=(1.1+(_n_hash_14((_n_tx_183*5.0),9.0)*0.5));
{double _n_x_186=([&](){auto _n_argument_392=0.0;auto _n_argument_393=std::floor((_n_tx_183-6.0));return d::maximum({_n_argument_392,_n_argument_393});})();
for(;d::truth((_n_x_186<d::minimum({_n_W_3,(_n_tx_183+6.0)})));(void)((_n_x_186++))){d::check_cancel();(void)(([&](){auto&& _n_array_394=this->_n_treeTop_38;auto _n_index_395=_n_x_186;auto _n_value_396=([&](){auto _n_argument_397=d::at(this->_n_treeTop_38,_n_x_186);auto _n_argument_398=(_n_tip_184+(std::fabs(((_n_x_186+0.5)-_n_tx_183))*_n_slope_185));return d::minimum({_n_argument_397,_n_argument_398});})();d::put(_n_array_394,_n_index_395,_n_value_396);return _n_value_396;})());
}}
}}
this->_n_LR_39=(_n_H_4-_n_SHORE_9);
this->_n_src_40=d::Array<float,true>(size_t((this->_n_LR_39*_n_W_3)));
{double _n_r_187=_n_SHORE_9;
for(;d::truth((_n_r_187<_n_H_4));(void)((_n_r_187++))){d::check_cancel();double _n_v_188=(((_n_HZ_6-(_n_r_187+0.5))/100.0)*_n_K_5);
{double _n_x_189=0.0;
for(;d::truth((_n_x_189<_n_W_3));(void)((_n_x_189++))){d::check_cancel();double _n_u_190=((((_n_x_189+0.5)-100.0)/100.0)*_n_K_5);
double _n_z_191=_n_march_24(_n_u_190,(-d::number(_n_v_188)),(-d::number(_n_CAM_7)));
double _n_vs_192=((-d::number(_n_v_188))-(d::truth(_n_z_191)?((2.0*_n_CAM_7)/_n_z_191):0.0));
double _n_row_193=((_n_HZ_6-((_n_vs_192*100.0)/_n_K_5))-0.5);
double _n_mirror_194=(((2.0*_n_SHORE_9)-1.0)-_n_r_187);
if(d::truth((_n_mirror_194>=d::at(this->_n_treeTop_38,_n_x_189)))){d::check_cancel();(void)((_n_row_193=_n_mirror_194));
}
(void)(([&](){auto&& _n_array_399=this->_n_src_40;auto _n_index_400=(((_n_r_187-_n_SHORE_9)*_n_W_3)+_n_x_189);auto _n_value_401=_n_row_193;d::put(_n_array_399,_n_index_400,_n_value_401);return _n_value_401;})());
}}
}}
this->_n_fg_41=d::Array<uint8_t,true>(size_t(this->_n_N_26));
this->_n_fgShade_42=d::Array<float,true>(size_t(this->_n_N_26));
this->_n_fgRim_43=d::Array<float,true>(size_t(this->_n_N_26));
this->_n_PINES_44=d::Array<d::Array<double,false>,false>{d::Array<double,false>{9.0,5.0,1.15},d::Array<double,false>{20.0,38.0,0.85},d::Array<double,false>{32.0,66.0,0.5},d::Array<double,false>{192.0,10.0,1.15},d::Array<double,false>{181.0,40.0,0.75},d::Array<double,false>{204.0,26.0,1.0}};
{double _n_r_195=0.0;
for(;d::truth((_n_r_195<_n_H_4));(void)((_n_r_195++))){d::check_cancel();{double _n_x_196=0.0;
for(;d::truth((_n_x_196<_n_W_3));(void)((_n_x_196++))){d::check_cancel();double _n_k_197=((_n_r_195*_n_W_3)+_n_x_196);
double _n_y_198=(_n_r_195+0.5);
double _n_bankL_199=([&](){auto _n_left_402=(88.0+(14.0*_n_smooth_19(0.0,52.0,_n_x_196)));auto _n_right_403=(2.0*_n_fbm_16((_n_x_196*0.2),1.0,2.0,0.0));return (_n_left_402+_n_right_403);})();
double _n_bankR_200=([&](){auto _n_left_404=(90.0+(12.0*_n_smooth_19(_n_W_3,(_n_W_3-40.0),_n_x_196)));auto _n_right_405=(2.0*_n_fbm_16((_n_x_196*0.2),4.0,2.0,0.0));return (_n_left_404+_n_right_405);})();
if((d::truth((_n_y_198>_n_bankL_199))||d::truth((_n_y_198>_n_bankR_200)))){d::check_cancel();(void)((([&](){auto&& _n_array_406=this->_n_fg_41;auto _n_index_407=_n_k_197;auto _n_value_408=1.0;d::put(_n_array_406,_n_index_407,_n_value_408);return _n_value_408;})(),([&](){auto&& _n_array_409=this->_n_fgShade_42;auto _n_index_410=_n_k_197;auto _n_value_411=(0.15*_n_hash_14(_n_x_196,_n_r_195));d::put(_n_array_409,_n_index_410,_n_value_411);return _n_value_411;})()));
}
for(auto &&_n_item_412:this->_n_PINES_44){d::check_cancel();auto _n_binding_413=_n_item_412;
double _n_px_201=d::at(_n_binding_413,0.0);
double _n_tip_202=d::at(_n_binding_413,1.0);
double _n_s_203=d::at(_n_binding_413,2.0);
{
double _n_d_204=(_n_y_198-_n_tip_202);
if(d::truth((_n_d_204<0.0))){d::check_cancel();continue;
}
double _n_tier_205=(3.4*_n_s_203);
double _n_f_206=((_n_d_204/_n_tier_205)-std::floor((_n_d_204/_n_tier_205)));
double _n_hw_207=(((0.4+(_n_d_204*0.2))*(0.5+(0.5*_n_f_206)))*(1.0+([&](){auto _n_left_414=(0.6*(([&](){auto _n_argument_416=_n_r_195;auto _n_argument_417=(std::floor(_n_px_201)*7.0);return _n_hash_14(_n_argument_416,_n_argument_417);})()-0.5));auto _n_right_415=_n_smooth_19(0.0,8.0,_n_d_204);return (_n_left_414*_n_right_415);})()));
double _n_dx_208=((_n_x_196+0.5)-_n_px_201);
if(d::truth((std::fabs(_n_dx_208)<=_n_hw_207))){d::check_cancel();(void)(([&](){auto&& _n_array_418=this->_n_fg_41;auto _n_index_419=_n_k_197;auto _n_value_420=2.0;d::put(_n_array_418,_n_index_419,_n_value_420);return _n_value_420;})());
bool _n_edge_209=((_n_hw_207-std::fabs(_n_dx_208))<1.0);
bool _n_sunward_210=(d::truth((_n_px_201<d::at(_n_SUN_10,0.0)))?(_n_dx_208>0.0):(_n_dx_208<0.0));
(void)(([&](){auto&& _n_array_421=this->_n_fgShade_42;auto _n_index_422=_n_k_197;auto _n_value_423=(d::truth(_n_edge_209)?(d::truth(_n_sunward_210)?1.0:0.5):(0.3*_n_hash_14((_n_x_196*3.0),(_n_r_195*5.0))));d::put(_n_array_421,_n_index_422,_n_value_423);return _n_value_423;})());
(void)(([&](){auto&& _n_array_424=this->_n_fgRim_43;auto _n_index_425=_n_k_197;auto _n_value_426=(d::truth(_n_edge_209)?([&](){auto _n_left_427=_n_smooth_19(70.0,44.0,_n_y_198);auto _n_right_428=(0.75+(0.25*_n_hash_14(_n_x_196,(_n_r_195*7.0))));return (_n_left_427*_n_right_428);})():0.0);d::put(_n_array_424,_n_index_425,_n_value_426);return _n_value_426;})());
}

}
}
}}
}}
this->_n_MW_45=480.0;
this->_n_M0_46=36.0;
this->_n_MR_47=((_n_SHORE_9+2.0)-this->_n_M0_46);
this->_n_mist_48=d::Array<float,true>(size_t((this->_n_MW_45*this->_n_MR_47)));
{double _n_r_211=0.0;
for(;d::truth((_n_r_211<this->_n_MR_47));(void)((_n_r_211++))){d::check_cancel();{double _n_x_212=0.0;
for(;d::truth((_n_x_212<this->_n_MW_45));(void)((_n_x_212++))){d::check_cancel();double _n_y_213=(_n_r_211+this->_n_M0_46);
double _n_q_214=_n_fbm_16((_n_x_212*0.0125),(_n_y_213*0.1),2.0,(this->_n_MW_45*0.0125));
(void)(([&](){auto&& _n_array_429=this->_n_mist_48;auto _n_index_430=((_n_r_211*this->_n_MW_45)+_n_x_212);auto _n_value_431=_n_fbm_16(((_n_x_212*0.025)+(_n_q_214*1.4)),((_n_y_213*0.22)+_n_q_214),4.0,(this->_n_MW_45*0.025));d::put(_n_array_429,_n_index_430,_n_value_431);return _n_value_431;})());
}}
}}
this->_n_CW_49=640.0;
this->_n_CR_50=34.0;
this->_n_cloud_51=d::Array<float,true>(size_t((this->_n_CW_49*this->_n_CR_50)));
{double _n_r_215=0.0;
for(;d::truth((_n_r_215<this->_n_CR_50));(void)((_n_r_215++))){d::check_cancel();{double _n_x_216=0.0;
for(;d::truth((_n_x_216<this->_n_CW_49));(void)((_n_x_216++))){d::check_cancel();double _n_y_217=(_n_r_215+0.5);
double _n_q_218=_n_fbm_16((_n_x_216*0.0125),(_n_y_217*0.12),2.0,8.0);
double _n_c_219=_n_fbm_16(((_n_x_216*0.025)+(_n_q_218*2.0)),((_n_y_217*0.2)+(_n_q_218*0.8)),4.0,16.0);
(void)(([&](){auto&& _n_array_432=this->_n_cloud_51;auto _n_index_433=((_n_r_215*this->_n_CW_49)+_n_x_216);auto _n_value_434=([&](){auto _n_left_435=([&](){auto _n_left_437=([&](){auto _n_argument_439=0.52;auto _n_argument_440=0.7;auto _n_argument_441=(_n_c_219-((0.06*std::fabs((_n_y_217-18.0)))/10.0));return _n_smooth_19(_n_argument_439,_n_argument_440,_n_argument_441);})();auto _n_right_438=_n_smooth_19(5.0,13.0,_n_y_217);return (_n_left_437*_n_right_438);})();auto _n_right_436=_n_smooth_19(33.0,24.0,_n_y_217);return (_n_left_435*_n_right_436);})();d::put(_n_array_432,_n_index_433,_n_value_434);return _n_value_434;})());
}}
}}
this->_n_hz_52=d::Array<float,true>(size_t(this->_n_N_26));
{double _n_k_220=0.0;
for(;d::truth((_n_k_220<this->_n_N_26));(void)((_n_k_220++))){d::check_cancel();(void)(([&](){auto&& _n_array_442=this->_n_hz_52;auto _n_index_443=_n_k_220;auto _n_value_444=([&](){auto _n_argument_445=(d::mod(_n_k_220,_n_W_3)*0.03);auto _n_argument_446=(std::floor((_n_k_220/_n_W_3))*0.06);auto _n_argument_447=3.0;auto _n_argument_448=0.0;return _n_fbm_16(_n_argument_445,_n_argument_446,_n_argument_447,_n_argument_448);})();d::put(_n_array_442,_n_index_443,_n_value_444);return _n_value_444;})());
}}
this->_n_skyR_53=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_skyG_54=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_skyB_55=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_glowA_56=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
{double _n_r_221=0.0;
for(;d::truth((_n_r_221<this->_n_SR_31));(void)((_n_r_221++))){d::check_cancel();{double _n_x_222=0.0;
for(;d::truth((_n_x_222<_n_W_3));(void)((_n_x_222++))){d::check_cancel();double _n_y_223=(_n_r_221+0.5);
double _n_v_224=_n_clamp_18((_n_y_223/52.0));
double _n_east_225=_n_smooth_19(20.0,190.0,_n_x_222);
double _n_dx_226=((_n_x_222+0.5)-d::at(_n_SUN_10,0.0));
double _n_dy_227=((_n_y_223-d::at(_n_SUN_10,1.0))*2.2);
double _n_ds_228=std::sqrt(((_n_dx_226*_n_dx_226)+(_n_dy_227*_n_dy_227)));
double _n_low_229=std::pow(_n_v_224,1.9);
double _n_veil_230=(((d::at(this->_n_hz_52,((_n_r_221*_n_W_3)+_n_x_222))-0.5)*0.1)*(1.0-_n_v_224));
double _n_cr_231=((0.03+_n_veil_230)+(_n_low_229*(0.56+(0.2*_n_east_225))));
double _n_cg_232=((0.04+_n_veil_230)+(_n_low_229*(0.48+(0.02*_n_east_225))));
double _n_cb_233=((0.13+(_n_veil_230*1.6))+(_n_low_229*(0.62-(0.12*_n_east_225))));
(void)(([&](){auto&& _n_array_449=this->_n_skyR_53;auto _n_index_450=((_n_r_221*_n_W_3)+_n_x_222);auto _n_value_451=_n_cr_231;d::put(_n_array_449,_n_index_450,_n_value_451);return _n_value_451;})());
(void)(([&](){auto&& _n_array_452=this->_n_skyG_54;auto _n_index_453=((_n_r_221*_n_W_3)+_n_x_222);auto _n_value_454=_n_cg_232;d::put(_n_array_452,_n_index_453,_n_value_454);return _n_value_454;})());
(void)(([&](){auto&& _n_array_455=this->_n_skyB_55;auto _n_index_456=((_n_r_221*_n_W_3)+_n_x_222);auto _n_value_457=_n_cb_233;d::put(_n_array_455,_n_index_456,_n_value_457);return _n_value_457;})());
(void)(([&](){auto&& _n_array_458=this->_n_glowA_56;auto _n_index_459=((_n_r_221*_n_W_3)+_n_x_222);auto _n_value_460=([&](){auto _n_left_461=([&](){auto _n_left_463=(std::exp(((-d::number(_n_ds_228))/6.0))*0.65);auto _n_right_464=(std::exp(((-d::number(_n_ds_228))/15.0))*0.2);return (_n_left_463+_n_right_464);})();auto _n_right_462=(std::exp(((-d::number(_n_ds_228))/50.0))*0.1);return (_n_left_461+_n_right_462);})();d::put(_n_array_458,_n_index_459,_n_value_460);return _n_value_460;})());
}}
}}
this->_n_AR_57=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_AG_58=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_AB_59=d::Array<float,true>(size_t((this->_n_SR_31*_n_W_3)));
this->_n_FR_60=d::Array<float,true>(size_t(this->_n_N_26));
this->_n_FG_61=d::Array<float,true>(size_t(this->_n_N_26));
this->_n_FB_62=d::Array<float,true>(size_t(this->_n_N_26));
this->_n_floor_63=d::Array<float,true>(size_t(this->_n_N_26));
this->_n_fade_64=d::Array<float,true>(size_t(this->_n_N_26)).fill(1.0);
this->_n_wisp_65=d::Array<float,true>(size_t(_n_W_3));
_render=[=]( double _a0,std::shared_ptr<_n_Record_342> _a1) mutable ->d::String{double _n_t_234=_a0;
auto _n_binding_467=(d::present(_a1)?_a1:([&](){auto _n_object_466=std::make_shared<_n_Record_342>();return _n_object_466;})());
std::optional<d::Array<uint8_t,true>> _n_color_235=_n_binding_467->_p_color;
{
double _n_warm_236=(0.75-(0.5*std::exp(((-d::number(_n_t_234))/60.0))));
double _n_line_237=(6.0+(4.0*std::exp(((-d::number(_n_t_234))/70.0))));
double _n_drift_238=(_n_t_234*1.1);
double _n_pulse_239=(1.0+(0.06*std::sin((((_n_t_234/8.0)*ascii::PI)*2.0))));
{double _n_x_240=0.0;
for(;d::truth((_n_x_240<_n_W_3));(void)((_n_x_240++))){d::check_cancel();(void)(([&](){auto&& _n_array_468=this->_n_wisp_65;auto _n_index_469=_n_x_240;auto _n_value_470=_n_noise_15(((_n_x_240+(_n_drift_238*0.6))*0.06),3.7,0.0);d::put(_n_array_468,_n_index_469,_n_value_470);return _n_value_470;})());
}}
double _n_lr_241=1.0;
double _n_lg_242=_n_mix_20(0.6,0.8,_n_warm_236);
double _n_lb_243=_n_mix_20(0.55,0.4,_n_warm_236);
{double _n_r_244=0.0;
for(;d::truth((_n_r_244<this->_n_SR_31));(void)((_n_r_244++))){d::check_cancel();double _n_y_245=(_n_r_244+0.5);
{double _n_x_246=0.0;
for(;d::truth((_n_x_246<_n_W_3));(void)((_n_x_246++))){d::check_cancel();double _n_k_247=((_n_r_244*_n_W_3)+_n_x_246);
double _n_gl_248=(d::at(this->_n_glowA_56,_n_k_247)*_n_pulse_239);
double _n_gg_249=(0.62+(0.28*_n_smooth_19(0.15,0.7,_n_gl_248)));
double _n_cr_250=(d::at(this->_n_skyR_53,_n_k_247)+_n_gl_248);
double _n_cg_251=(d::at(this->_n_skyG_54,_n_k_247)+(_n_gl_248*_n_gg_249));
double _n_cb_252=(d::at(this->_n_skyB_55,_n_k_247)+(_n_gl_248*(_n_gg_249-0.22)));
double _n_fl_253=0.21;
double _n_z_254=d::at(this->_n_depth_32,_n_k_247);
if(d::truth(_n_z_254)){d::check_cancel();double _n_sn_255=d::at(this->_n_snow_35,_n_k_247);
double _n_lit_256=(d::at(this->_n_sun_34,_n_k_247)*_n_smooth_19(_n_line_237,(_n_line_237+7.0),d::at(this->_n_alt_33,_n_k_247)));
double _n_amb_257=((0.55+(0.45*d::at(this->_n_up_36,_n_k_247)))*(0.55+(0.5*_n_smooth_19(4.0,34.0,d::at(this->_n_alt_33,_n_k_247)))));
double _n_sl_258=_n_smooth_19(0.08,0.24,_n_lit_256);
double _n_gold_259=_n_clamp_18(([&](){auto _n_left_471=(0.6*_n_smooth_19(0.25,0.8,_n_lit_256));auto _n_right_472=(0.5*_n_smooth_19(14.0,36.0,d::at(this->_n_alt_33,_n_k_247)));return (_n_left_471+_n_right_472);})());
double _n_br_260=(0.78+(0.3*_n_lit_256));
double _n_sr_261=_n_mix_20((0.13*_n_amb_257),(_n_lr_241*_n_br_260),_n_sl_258);
double _n_sg_262=([&](){auto _n_argument_473=(0.17*_n_amb_257);auto _n_argument_474=(_n_mix_20((_n_lg_242-0.12),(_n_lg_242+0.14),_n_gold_259)*_n_br_260);auto _n_argument_475=_n_sl_258;return _n_mix_20(_n_argument_473,_n_argument_474,_n_argument_475);})();
double _n_sb_263=([&](){auto _n_argument_476=(0.36*_n_amb_257);auto _n_argument_477=(_n_mix_20((_n_lb_243+0.02),(_n_lb_243+0.12),_n_gold_259)*_n_br_260);auto _n_argument_478=_n_sl_258;return _n_mix_20(_n_argument_476,_n_argument_477,_n_argument_478);})();
double _n_rr_264=_n_mix_20(0.06,0.4,_n_sl_258);
double _n_rg_265=_n_mix_20(0.07,0.2,_n_sl_258);
double _n_rb_266=_n_mix_20(0.14,0.2,_n_sl_258);
(void)((_n_cr_250=_n_mix_20(_n_rr_264,_n_sr_261,_n_sn_255)));
(void)((_n_cg_251=_n_mix_20(_n_rg_265,_n_sg_262,_n_sn_255)));
(void)((_n_cb_252=_n_mix_20(_n_rb_266,_n_sb_263,_n_sn_255)));
double _n_wood_267=([&](){auto _n_left_479=_n_smooth_19(9.0,4.0,d::at(this->_n_alt_33,_n_k_247));auto _n_right_480=_n_smooth_19(110.0,75.0,_n_z_254);return (_n_left_479*_n_right_480);})();
(void)((_n_cr_250=_n_mix_20(_n_cr_250,0.07,_n_wood_267)));
(void)((_n_cg_251=_n_mix_20(_n_cg_251,0.09,_n_wood_267)));
(void)((_n_cb_252=_n_mix_20(_n_cb_252,0.18,_n_wood_267)));
double _n_fog_268=(([&](){auto _n_left_481=_n_smooth_19(16.0,3.0,d::at(this->_n_alt_33,_n_k_247));auto _n_right_482=_n_smooth_19(70.0,150.0,_n_z_254);return (_n_left_481*_n_right_482);})()*0.6);
double _n_haze_269=([&](){auto _n_argument_483=_n_fog_268;auto _n_argument_484=(_n_clamp_18((1.0-std::exp(((-d::number((_n_z_254-_n_SHORE_Z_8)))/260.0))))*0.45);return d::maximum({_n_argument_483,_n_argument_484});})();
(void)((_n_cr_250=_n_mix_20(_n_cr_250,(d::at(this->_n_skyR_53,_n_k_247)+_n_gl_248),_n_haze_269)));
(void)((_n_cg_251=_n_mix_20(_n_cg_251,(d::at(this->_n_skyG_54,_n_k_247)+(_n_gl_248*_n_gg_249)),_n_haze_269)));
(void)((_n_cb_252=_n_mix_20(_n_cb_252,(d::at(this->_n_skyB_55,_n_k_247)+(_n_gl_248*(_n_gg_249-0.22))),_n_haze_269)));
if((d::truth(d::at(this->_n_rim_37,_n_k_247))&&d::truth((_n_sl_258>0.3)))){d::check_cancel();double _n_a_270=(d::at(this->_n_rim_37,_n_k_247)*_n_sl_258);
(void)((_n_cr_250=_n_mix_20(_n_cr_250,1.0,_n_a_270)));
(void)((_n_cg_251=([&](){auto _n_argument_485=_n_cg_251;auto _n_argument_486=_n_mix_20(0.89,0.95,_n_warm_236);auto _n_argument_487=_n_a_270;return _n_mix_20(_n_argument_485,_n_argument_486,_n_argument_487);})()));
(void)((_n_cb_252=([&](){auto _n_argument_488=_n_cb_252;auto _n_argument_489=_n_mix_20(0.76,0.88,_n_warm_236);auto _n_argument_490=_n_a_270;return _n_mix_20(_n_argument_488,_n_argument_489,_n_argument_490);})()));
}
(void)((_n_fl_253=([&](){auto _n_argument_491=_n_mix_20(0.42,0.3,_n_wood_267);auto _n_argument_492=0.04;auto _n_argument_493=_n_sl_258;return _n_mix_20(_n_argument_491,_n_argument_492,_n_argument_493);})()));
}else {d::check_cancel();if((d::truth((_n_y_245<34.0))&&d::truth((_n_hash_14(_n_x_246,((_n_r_244*3.0)+11.0))>0.985)))){d::check_cancel();double _n_tw_271=(0.6+(0.4*std::sin(([&](){auto _n_left_494=(_n_t_234*(1.5+(_n_hash_14(_n_x_246,_n_r_244)*3.0)));auto _n_right_495=(_n_hash_14(_n_r_244,_n_x_246)*6.28);return (_n_left_494+_n_right_495);})())));
double _n_s_272=(([&](){auto _n_left_496=(_n_tw_271*_n_smooth_19(150.0,40.0,_n_x_246));auto _n_right_497=_n_smooth_19(34.0,6.0,_n_y_245);return (_n_left_496*_n_right_497);})()*0.75);
(void)((_n_cr_250=d::maximum({_n_cr_250,(_n_s_272*0.9)})));
(void)((_n_cg_251=d::maximum({_n_cg_251,(_n_s_272*0.92)})));
(void)((_n_cb_252=d::maximum({_n_cb_252,_n_s_272})));
}
if(d::truth((_n_r_244<this->_n_CR_50))){d::check_cancel();double _n_sx_273=(_n_x_246+(_n_t_234*0.8));
double _n_ix_274=std::floor(_n_sx_273);
double _n_fx_275=(_n_sx_273-_n_ix_274);
double _n_c0_276=d::at(this->_n_cloud_51,((_n_r_244*this->_n_CW_49)+d::mod(_n_ix_274,this->_n_CW_49)));
double _n_c1_277=d::at(this->_n_cloud_51,((_n_r_244*this->_n_CW_49)+d::mod((_n_ix_274+1.0),this->_n_CW_49)));
double _n_c_278=((_n_c0_276+((_n_c1_277-_n_c0_276)*_n_fx_275))*(0.35+(0.65*_n_smooth_19(40.0,150.0,_n_x_246))));
if(d::truth((_n_c_278>0.01))){d::check_cancel();double _n_g_279=std::exp(((-d::number(d::hypot(std::initializer_list<double>{((_n_x_246+0.5)-d::at(_n_SUN_10,0.0)),((_n_y_245-d::at(_n_SUN_10,1.0))*1.6)})))/55.0));
double _n_b_280=_n_clamp_18((0.25+(0.9*_n_g_279)));
double _n_kr_281=_n_mix_20(0.32,1.0,_n_b_280);
double _n_kg_282=([&](){auto _n_argument_498=0.24;auto _n_argument_499=_n_mix_20(0.62,0.74,_n_warm_236);auto _n_argument_500=_n_b_280;return _n_mix_20(_n_argument_498,_n_argument_499,_n_argument_500);})();
double _n_kb_283=_n_mix_20(0.4,0.5,_n_b_280);
(void)((_n_cr_250=_n_mix_20(_n_cr_250,_n_kr_281,(_n_c_278*0.75))));
(void)((_n_cg_251=_n_mix_20(_n_cg_251,_n_kg_282,(_n_c_278*0.75))));
(void)((_n_cb_252=_n_mix_20(_n_cb_252,_n_kb_283,(_n_c_278*0.75))));
}
}
double _n_dx_284=((_n_x_246+0.5)-d::at(_n_SUN_10,0.0));
double _n_dy_285=(_n_y_245-d::at(_n_SUN_10,1.0));
double _n_ds_286=std::sqrt(((_n_dx_284*_n_dx_284)+(_n_dy_285*_n_dy_285)));
if(d::truth((_n_ds_286<4.5))){d::check_cancel();double _n_a_287=_n_smooth_19(4.5,3.3,_n_ds_286);
(void)((_n_cr_250=_n_mix_20(_n_cr_250,1.0,_n_a_287)));
(void)((_n_cg_251=_n_mix_20(_n_cg_251,0.96,_n_a_287)));
(void)((_n_cb_252=_n_mix_20(_n_cb_252,0.86,_n_a_287)));
}
}
double _n_e_288=(_n_smooth_19(20.0,170.0,_n_x_246)*(0.6+(0.4*_n_warm_236)));
double _n_near_289=(std::exp(((-d::number(std::fabs(((_n_x_246+0.5)-d::at(_n_SUN_10,0.0)))))/22.0))*0.3);
double _n_mr_290=(_n_mix_20(0.48,0.9,_n_e_288)+_n_near_289);
double _n_mg_291=(_n_mix_20(0.46,0.7,_n_e_288)+(_n_near_289*0.75));
double _n_mb_292=(_n_mix_20(0.7,0.7,_n_e_288)+(_n_near_289*0.5));
if(d::truth((_n_r_244>=this->_n_M0_46))){d::check_cancel();double _n_m_293=d::at(this->_n_mist_48,(((_n_r_244-this->_n_M0_46)*this->_n_MW_45)+d::mod(std::floor((_n_x_246+_n_drift_238)),this->_n_MW_45)));
double _n_edge_294=((5.0*(_n_m_293-0.5))+(4.0*(d::at(this->_n_wisp_65,_n_x_246)-0.5)));
double _n_band_295=_n_smooth_19((this->_n_M0_46+14.0),(_n_SHORE_9-3.0),(_n_y_245+_n_edge_294));
double _n_a_296=(((0.3+(0.7*_n_smooth_19(0.32,0.64,_n_m_293)))*_n_band_295)*0.6);
(void)((_n_cr_250=_n_mix_20(_n_cr_250,_n_mr_290,_n_a_296)));
(void)((_n_cg_251=_n_mix_20(_n_cg_251,_n_mg_291,_n_a_296)));
(void)((_n_cb_252=_n_mix_20(_n_cb_252,_n_mb_292,_n_a_296)));
if(d::truth((_n_a_296>0.05))){d::check_cancel();(void)((_n_fl_253=d::maximum({_n_fl_253,0.2})));
}
}
if(d::truth((_n_y_245>=d::at(this->_n_treeTop_38,_n_x_246)))){d::check_cancel();double _n_s_297=(0.4+(0.6*_n_hash_14((_n_x_246*7.0),(_n_r_244*3.0))));
(void)((_n_cr_250=(0.04+(0.03*_n_s_297))));
(void)((_n_cg_251=(0.06+(0.04*_n_s_297))));
(void)((_n_cb_252=(0.1+(0.05*_n_s_297))));
(void)((_n_fl_253=0.0));
double _n_m_298=d::at(this->_n_mist_48,(((_n_r_244-this->_n_M0_46)*this->_n_MW_45)+d::mod(std::floor((((_n_x_246*0.7)+(_n_drift_238*1.9))+211.0)),this->_n_MW_45)));
double _n_a_299=(([&](){auto _n_left_501=_n_smooth_19(0.45,0.72,_n_m_298);auto _n_right_502=_n_smooth_19((d::at(this->_n_treeTop_38,_n_x_246)+1.0),_n_SHORE_9,_n_y_245);return (_n_left_501*_n_right_502);})()*0.6);
(void)((_n_cr_250=_n_mix_20(_n_cr_250,_n_mr_290,_n_a_299)));
(void)((_n_cg_251=_n_mix_20(_n_cg_251,_n_mg_291,_n_a_299)));
(void)((_n_cb_252=_n_mix_20(_n_cb_252,_n_mb_292,_n_a_299)));
}
(void)(([&](){auto&& _n_array_503=this->_n_AR_57;auto _n_index_504=_n_k_247;auto _n_value_505=_n_cr_250;d::put(_n_array_503,_n_index_504,_n_value_505);return _n_value_505;})());
(void)(([&](){auto&& _n_array_506=this->_n_AG_58;auto _n_index_507=_n_k_247;auto _n_value_508=_n_cg_251;d::put(_n_array_506,_n_index_507,_n_value_508);return _n_value_508;})());
(void)(([&](){auto&& _n_array_509=this->_n_AB_59;auto _n_index_510=_n_k_247;auto _n_value_511=_n_cb_252;d::put(_n_array_509,_n_index_510,_n_value_511);return _n_value_511;})());
(void)(([&](){auto&& _n_array_512=this->_n_FR_60;auto _n_index_513=_n_k_247;auto _n_value_514=_n_cr_250;d::put(_n_array_512,_n_index_513,_n_value_514);return _n_value_514;})());
(void)(([&](){auto&& _n_array_515=this->_n_FG_61;auto _n_index_516=_n_k_247;auto _n_value_517=_n_cg_251;d::put(_n_array_515,_n_index_516,_n_value_517);return _n_value_517;})());
(void)(([&](){auto&& _n_array_518=this->_n_FB_62;auto _n_index_519=_n_k_247;auto _n_value_520=_n_cb_252;d::put(_n_array_518,_n_index_519,_n_value_520);return _n_value_520;})());
(void)(([&](){auto&& _n_array_521=this->_n_floor_63;auto _n_index_522=_n_k_247;auto _n_value_523=_n_fl_253;d::put(_n_array_521,_n_index_522,_n_value_523);return _n_value_523;})());
}}
}}
{double _n_r_300=_n_SHORE_9;
for(;d::truth((_n_r_300<_n_H_4));(void)((_n_r_300++))){d::check_cancel();double _n_y_301=(_n_r_300+0.5);
double _n_d_302=((_n_y_301-_n_SHORE_9)/this->_n_LR_39);
{double _n_x_303=0.0;
for(;d::truth((_n_x_303<_n_W_3));(void)((_n_x_303++))){d::check_cancel();double _n_k_304=((_n_r_300*_n_W_3)+_n_x_303);
double _n_w1_305=_n_noise_15(((_n_x_303*0.045)+(_n_t_234*0.06)),((_n_y_301*0.5)-(_n_t_234*0.35)),0.0);
double _n_w2_306=_n_noise_15(((_n_x_303*0.12)-(_n_t_234*0.1)),((_n_y_301*1.1)-(_n_t_234*0.7)),0.0);
double _n_sway_307=(((_n_w1_305-0.5)*(0.4+(1.4*_n_d_302)))+((_n_w2_306-0.5)*0.5));
double _n_sx_308=([&](){auto _n_argument_524=0.0;auto _n_argument_525=([&](){auto _n_argument_526=(_n_W_3-1.0);auto _n_argument_527=d::round((_n_x_303+_n_sway_307));return d::minimum({_n_argument_526,_n_argument_527});})();return d::maximum({_n_argument_524,_n_argument_525});})();
double _n_sr_309=([&](){auto _n_argument_528=0.0;auto _n_argument_529=([&](){auto _n_argument_530=(this->_n_SR_31-1.0);auto _n_argument_531=d::round((d::at(this->_n_src_40,(((_n_r_300-_n_SHORE_9)*_n_W_3)+_n_x_303))+(((_n_w2_306-0.5)*0.6)*_n_d_302)));return d::minimum({_n_argument_530,_n_argument_531});})();return d::maximum({_n_argument_528,_n_argument_529});})();
double _n_sk_310=((_n_sr_309*_n_W_3)+_n_sx_308);
double _n_refl_311=(0.68-(0.32*_n_d_302));
double _n_w3_312=_n_noise_15(((_n_x_303*0.03)+(_n_t_234*0.04)),((_n_y_301*1.9)-(_n_t_234*0.45)),0.0);
double _n_lift_313=(1.0+((_n_w3_312-0.5)*(0.4+(0.5*_n_d_302))));
double _n_ar_314=d::at(this->_n_AR_57,_n_sk_310);
double _n_ag_315=d::at(this->_n_AG_58,_n_sk_310);
double _n_ab_316=d::at(this->_n_AB_59,_n_sk_310);
double _n_grey_317=(((_n_ar_314+_n_ag_315)+_n_ab_316)/3.0);
double _n_deep_318=(((d::at(this->_n_hz_52,_n_k_304)-0.5)*0.1)*_n_d_302);
double _n_cr_319=((0.02+_n_deep_318)+((_n_mix_20(_n_grey_317,_n_ar_314,0.75)*_n_refl_311)*_n_lift_313));
double _n_cg_320=((0.035+_n_deep_318)+((_n_mix_20(_n_grey_317,_n_ag_315,0.75)*_n_refl_311)*_n_lift_313));
double _n_cb_321=((0.07+(_n_deep_318*1.6))+((_n_mix_20(_n_grey_317,_n_ab_316,0.75)*_n_refl_311)*_n_lift_313));
double _n_roadW_322=(1.5+((_n_y_301-_n_SHORE_9)*0.45));
double _n_road_323=std::exp((-d::number(std::pow((((_n_x_303+0.5)-d::at(_n_SUN_10,0.0))/_n_roadW_322),2.0))));
double _n_glint_324=((_n_smooth_19(0.55,0.85,_n_w2_306)*_n_road_323)*(0.5+(0.5*_n_warm_236)));
(void)((_n_cr_319=(_n_cr_319+_n_glint_324)));
(void)((_n_cg_320=(_n_cg_320+(_n_glint_324*0.8))));
(void)((_n_cb_321=(_n_cb_321+(_n_glint_324*0.6))));
(void)(([&](){auto&& _n_array_532=this->_n_FR_60;auto _n_index_533=_n_k_304;auto _n_value_534=_n_cr_319;d::put(_n_array_532,_n_index_533,_n_value_534);return _n_value_534;})());
(void)(([&](){auto&& _n_array_535=this->_n_FG_61;auto _n_index_536=_n_k_304;auto _n_value_537=_n_cg_320;d::put(_n_array_535,_n_index_536,_n_value_537);return _n_value_537;})());
(void)(([&](){auto&& _n_array_538=this->_n_FB_62;auto _n_index_539=_n_k_304;auto _n_value_540=_n_cb_321;d::put(_n_array_538,_n_index_539,_n_value_540);return _n_value_540;})());
(void)(([&](){auto&& _n_array_541=this->_n_floor_63;auto _n_index_542=_n_k_304;auto _n_value_543=0.26;d::put(_n_array_541,_n_index_542,_n_value_543);return _n_value_543;})());
(void)(([&](){auto&& _n_array_544=this->_n_fade_64;auto _n_index_545=_n_k_304;auto _n_value_546=_n_smooth_19((_n_H_4+2.0),(_n_H_4-22.0),_n_y_301);d::put(_n_array_544,_n_index_545,_n_value_546);return _n_value_546;})());
if(d::truth((_n_r_300==_n_SHORE_9))){d::check_cancel();(void)(([&](){auto&& _n_array_547=this->_n_FR_60;auto _n_index_548=_n_k_304;auto _n_value_549=0.06;d::put(_n_array_547,_n_index_548,_n_value_549);return _n_value_549;})());
(void)(([&](){auto&& _n_array_550=this->_n_FG_61;auto _n_index_551=_n_k_304;auto _n_value_552=0.12;d::put(_n_array_550,_n_index_551,_n_value_552);return _n_value_552;})());
(void)(([&](){auto&& _n_array_553=this->_n_FB_62;auto _n_index_554=_n_k_304;auto _n_value_555=0.14;d::put(_n_array_553,_n_index_554,_n_value_555);return _n_value_555;})());
(void)(([&](){auto&& _n_array_556=this->_n_floor_63;auto _n_index_557=_n_k_304;auto _n_value_558=0.0;d::put(_n_array_556,_n_index_557,_n_value_558);return _n_value_558;})());
}
}}
}}
{double _n_k_325=0.0;
for(;d::truth((_n_k_325<this->_n_N_26));(void)((_n_k_325++))){d::check_cancel();if(d::truth((!d::truth(d::at(this->_n_fg_41,_n_k_325))))){d::check_cancel();continue;
}
double _n_s_326=d::at(this->_n_fgShade_42,_n_k_325);
(void)(([&](){auto&& _n_array_559=this->_n_FR_60;auto _n_index_560=_n_k_325;auto _n_value_561=(0.02+(0.05*_n_s_326));d::put(_n_array_559,_n_index_560,_n_value_561);return _n_value_561;})());
(void)(([&](){auto&& _n_array_562=this->_n_FG_61;auto _n_index_563=_n_k_325;auto _n_value_564=(0.04+(0.06*_n_s_326));d::put(_n_array_562,_n_index_563,_n_value_564);return _n_value_564;})());
(void)(([&](){auto&& _n_array_565=this->_n_FB_62;auto _n_index_566=_n_k_325;auto _n_value_567=(0.05+(0.06*_n_s_326));d::put(_n_array_565,_n_index_566,_n_value_567);return _n_value_567;})());
(void)(([&](){auto&& _n_array_568=this->_n_floor_63;auto _n_index_569=_n_k_325;auto _n_value_570=0.0;d::put(_n_array_568,_n_index_569,_n_value_570);return _n_value_570;})());
double _n_e_327=d::at(this->_n_fgRim_43,_n_k_325);
if((d::truth((_n_e_327>0.0))&&d::truth((_n_s_326==1.0)))){d::check_cancel();(void)(((([&](){auto&& _n_array_571=this->_n_FR_60;auto _n_index_572=_n_k_325;auto _n_value_573=_n_mix_20(d::at(this->_n_FR_60,_n_k_325),0.62,_n_e_327);d::put(_n_array_571,_n_index_572,_n_value_573);return _n_value_573;})(),([&](){auto&& _n_array_574=this->_n_FG_61;auto _n_index_575=_n_k_325;auto _n_value_576=_n_mix_20(d::at(this->_n_FG_61,_n_k_325),0.4,_n_e_327);d::put(_n_array_574,_n_index_575,_n_value_576);return _n_value_576;})()),([&](){auto&& _n_array_577=this->_n_FB_62;auto _n_index_578=_n_k_325;auto _n_value_579=_n_mix_20(d::at(this->_n_FB_62,_n_k_325),0.38,_n_e_327);d::put(_n_array_577,_n_index_578,_n_value_579);return _n_value_579;})()));
(void)(([&](){auto&& _n_array_580=this->_n_floor_63;auto _n_index_581=_n_k_325;auto _n_value_582=(0.12*_n_e_327);d::put(_n_array_580,_n_index_581,_n_value_582);return _n_value_582;})());
}else {d::check_cancel();if((d::truth((_n_e_327>0.0))&&d::truth((_n_s_326==0.5)))){d::check_cancel();(void)(((([&](){auto&& _n_array_583=this->_n_FR_60;auto _n_index_584=_n_k_325;auto _n_value_585=_n_mix_20(d::at(this->_n_FR_60,_n_k_325),0.2,_n_e_327);d::put(_n_array_583,_n_index_584,_n_value_585);return _n_value_585;})(),([&](){auto&& _n_array_586=this->_n_FG_61;auto _n_index_587=_n_k_325;auto _n_value_588=_n_mix_20(d::at(this->_n_FG_61,_n_k_325),0.22,_n_e_327);d::put(_n_array_586,_n_index_587,_n_value_588);return _n_value_588;})()),([&](){auto&& _n_array_589=this->_n_FB_62;auto _n_index_590=_n_k_325;auto _n_value_591=_n_mix_20(d::at(this->_n_FB_62,_n_k_325),0.36,_n_e_327);d::put(_n_array_589,_n_index_590,_n_value_591);return _n_value_591;})()));
(void)(([&](){auto&& _n_array_592=this->_n_floor_63;auto _n_index_593=_n_k_325;auto _n_value_594=(0.22*_n_e_327);d::put(_n_array_592,_n_index_593,_n_value_594);return _n_value_594;})());
}
}
(void)(([&](){auto&& _n_array_595=this->_n_fade_64;auto _n_index_596=_n_k_325;auto _n_value_597=1.0;d::put(_n_array_595,_n_index_596,_n_value_597);return _n_value_597;})());
}}
{double _n_r_328=0.0;
for(;d::truth((_n_r_328<_n_H_4));(void)((_n_r_328++))){d::check_cancel();{double _n_x_329=0.0;
for(;d::truth((_n_x_329<_n_W_3));(void)((_n_x_329++))){d::check_cancel();double _n_k_330=((_n_r_328*_n_W_3)+_n_x_329);
double _n_cr_331=d::at(this->_n_FR_60,_n_k_330);
double _n_cg_332=d::at(this->_n_FG_61,_n_k_330);
double _n_cbl_333=d::at(this->_n_FB_62,_n_k_330);
double _n_fl_334=d::at(this->_n_floor_63,_n_k_330);
double _n_peak_335=d::maximum({_n_cr_331,_n_cg_332,_n_cbl_333,0.0001});
double _n_level_336=(_n_clamp_18((_n_fl_334+((1.0-_n_fl_334)*std::pow(_n_peak_335,1.1))))*d::at(this->_n_fade_64,_n_k_330));
double _n_step_337=([&](){auto _n_argument_598=0.0;auto _n_argument_599=([&](){auto _n_argument_600=3.0;auto _n_argument_601=d::round(((_n_level_336*3.0)+d::at(_n_BAYER_13,((double(d::i32(_n_r_328)&d::i32(3.0))*4.0)+double(d::i32(_n_x_329)&d::i32(3.0))))));return d::minimum({_n_argument_600,_n_argument_601});})();return d::maximum({_n_argument_598,_n_argument_599});})();
(void)(([&](){auto&& _n_array_602=this->_n_out_27;auto _n_index_603=_n_k_330;auto _n_value_604=d::at(_n_DOTS_11,_n_step_337);d::put(_n_array_602,_n_index_603,_n_value_604);return _n_value_604;})());
if(d::truth(_n_color_235)){d::check_cancel();double _n_want_338=(d::truth(_n_step_337)?d::minimum({1.0,((_n_level_336+0.06)/d::at(_n_COVER_12,_n_step_337))}):0.0);
double _n_s_339=(((0.3+(0.7*_n_want_338))*([&](){auto _n_argument_605=0.5;auto _n_argument_606=1.0;auto _n_argument_607=_n_smooth_19(0.08,0.5,_n_peak_335);return _n_mix_20(_n_argument_605,_n_argument_606,_n_argument_607);})())/_n_peak_335);
(void)(([&](){auto&& _n_array_608=d::read(_n_color_235);auto _n_index_609=_n_k_330;auto _n_value_610=([&](){auto _n_argument_611=_n_clamp_18((_n_cr_331*_n_s_339));auto _n_argument_612=_n_clamp_18((_n_cg_332*_n_s_339));auto _n_argument_613=_n_clamp_18((_n_cbl_333*_n_s_339));return this->_n_nearest_29(_n_argument_611,_n_argument_612,_n_argument_613);})();d::put(_n_array_608,_n_index_609,_n_value_610);return _n_value_610;})());
}
}}
}}
d::Array<d::String,false> _n_lines_340=d::Array<d::String,false>{};
{double _n_r_341=0.0;
for(;d::truth((_n_r_341<_n_H_4));(void)((_n_r_341++))){d::check_cancel();(void)(_n_lines_340.push(d::join(this->_n_out_27.slice((_n_r_341*_n_W_3),((_n_r_341+1.0)*_n_W_3)),d::String(u""))));
}}
return d::join(_n_lines_340,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("alpine-dawn").cols)*ascii::catalog_meta("alpine-dawn").rows);auto _env=std::make_shared<_n_Record_342>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &alpine_dawn_meta(){return catalog_meta("alpine-dawn");}
std::unique_ptr<Piece> make_alpine_dawn(const AsciiPieceOptions &o){return std::make_unique<Native_alpine_dawn>(o);}
}
