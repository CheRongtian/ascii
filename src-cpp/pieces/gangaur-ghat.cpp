// Direct, statically typed C++ from src/pieces/gangaur-ghat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11516;
struct _n_Record_11889;
struct _n_Record_11516{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_11516> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11516>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_11889{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11889> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11889>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_11540(double _a0,double _a1);
double _n_noise_11541(double _a0,double _a1,double _a2);
double _n_fbm_11542(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_11543(double _a0);
double _n_smooth_11544(double _a0,double _a1,double _a2);
double _n_mix_11545(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_11546(d::String _a0);
double _n_wlF_11547(double _a0);
double _n_ridgeF_11548(double _a0);
double _n_hillsF_11549(double _a0);
std::array<double,3> _n_skyAt_11550(double _a0,double _a1);
std::shared_ptr<_n_Record_11516> _n_meta_11515=[](){return ([&](){auto _n_object_11892=std::make_shared<_n_Record_11516>();_n_object_11892->_p_name=d::String(u"gangaur ghat");_n_object_11892->_p_category=d::String(u"scenes");_n_object_11892->_p_note=d::String(u"udaipur at night, a lit gateway on lake pichola and diyas on the water");_n_object_11892->_p_cols=200.0;_n_object_11892->_p_rows=100.0;_n_object_11892->_p_cell=1.0;_n_object_11892->_p_fps=15.0;_n_object_11892->_p_ground=d::String(u"#070a18");_n_object_11892->_p_palette=d::Array<d::String,false>{d::String(u"#0a1230"),d::String(u"#0f1a40"),d::String(u"#152352"),d::String(u"#1c2e66"),d::String(u"#253a7a"),d::String(u"#30498e"),d::String(u"#3e5aa2"),d::String(u"#0c0f1e"),d::String(u"#161a30"),d::String(u"#232842"),d::String(u"#4a5a86"),d::String(u"#6474a0"),d::String(u"#8291b8"),d::String(u"#a3afcf"),d::String(u"#c6cee3"),d::String(u"#e6ebf5"),d::String(u"#fff6dc"),d::String(u"#ffe6a8"),d::String(u"#ffd277"),d::String(u"#ffb84a"),d::String(u"#f29a34"),d::String(u"#d8782a"),d::String(u"#a85a26"),d::String(u"#7a4224"),d::String(u"#e8c48c"),d::String(u"#c89a62"),d::String(u"#9a7048"),d::String(u"#6a4c38"),d::String(u"#3e2c2a"),d::String(u"#dfe6ff")};return _n_object_11892;})();}();
const double _n_W_11517=[](){return 200.0;}();
const double _n_H_11518=[](){return 100.0;}();
const double _n_HZ_11519=[](){return 64.0;}();
const double _n_FAR_11520=[](){return 58.0;}();
const double _n_SHORE_11521=[](){return 142.0;}();
d::Array<double,false> _n_MOON_11522=[](){return d::Array<double,false>{170.0,13.0};}();
const double _n_GX_11523=[](){return 75.0;}();
const d::String _n_DOTS_11524=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_11525=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_LIFT_11526=[](){return d::Array<double,false>{0.0,2.5,1.7,1.35};}();
d::Array<double,false> _n_BAYER_11527=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_11584=_a0;
return ((_n_v_11584/16.0)-0.47);});}();
d::Array<double,false> _n_FLAME_11528=[](){return d::Array<double,false>{1.0,0.62,0.22};}();
d::Array<double,false> _n_BULB_11529=[](){return d::Array<double,false>{1.0,0.8,0.45};}();
const double _n_SKY_11530=[](){return 0.0;}();
const double _n_WATER_11531=[](){return 1.0;}();
const double _n_TOWN_11532=[](){return 2.0;}();
const double _n_BLD_11533=[](){return 3.0;}();
const double _n_GATE_11534=[](){return 4.0;}();
const double _n_ARCH_11535=[](){return 5.0;}();
const double _n_STEP_11536=[](){return 6.0;}();
const double _n_PALACE_11537=[](){return 7.0;}();
const double _n_HILL_11538=[](){return 8.0;}();
const double _n_MOONM_11539=[](){return 9.0;}();
double _n_hash_11540(double _a0,double _a1){double _n_x_11585=_a0;
double _n_y_11586=_a1;
{
double _n_h_11587=([&](){auto _n_left_11893=d::imul(double(d::i32(_n_x_11585)|d::i32(0.0)),374761393.0);auto _n_right_11894=d::imul(double(d::i32(_n_y_11586)|d::i32(0.0)),668265263.0);return (_n_left_11893+_n_right_11894);})();
(void)((_n_h_11587=d::imul(double(d::i32(_n_h_11587)^d::i32(double(d::u32(_n_h_11587)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_11587)^d::i32(double(d::u32(_n_h_11587)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_11541(double _a0,double _a1,double _a2){double _n_x_11588=_a0;
double _n_y_11589=_a1;
double _n_period_11590=_a2;
{
double _n_xi_11591=std::floor(_n_x_11588);
double _n_yi_11592=std::floor(_n_y_11589);
double _n_fx_11593=(_n_x_11588-_n_xi_11591);
double _n_fy_11594=(_n_y_11589-_n_yi_11592);
double _n_u_11595=((_n_fx_11593*_n_fx_11593)*(3.0-(2.0*_n_fx_11593)));
double _n_v_11596=((_n_fy_11594*_n_fy_11594)*(3.0-(2.0*_n_fy_11594)));
double _n_x0_11597=_n_xi_11591;
double _n_x1_11598=(_n_xi_11591+1.0);
if(d::truth(_n_period_11590)){d::check_cancel();(void)((_n_x0_11597=d::mod((d::mod(_n_xi_11591,_n_period_11590)+_n_period_11590),_n_period_11590)));
(void)((_n_x1_11598=d::mod((_n_x0_11597+1.0),_n_period_11590)));
}
double _n_a_11599=_n_hash_11540(_n_x0_11597,_n_yi_11592);
double _n_b_11600=_n_hash_11540(_n_x1_11598,_n_yi_11592);
double _n_c_11601=_n_hash_11540(_n_x0_11597,(_n_yi_11592+1.0));
double _n_d_11602=_n_hash_11540(_n_x1_11598,(_n_yi_11592+1.0));
return (((_n_a_11599+((_n_b_11600-_n_a_11599)*_n_u_11595))+((_n_c_11601-_n_a_11599)*_n_v_11596))+(((((_n_a_11599-_n_b_11600)-_n_c_11601)+_n_d_11602)*_n_u_11595)*_n_v_11596));

}
}

double _n_fbm_11542(double _a0,double _a1,double _a2,double _a3){double _n_x_11603=_a0;
double _n_y_11604=_a1;
double _n_octaves_11605=_a2;
double _n_period_11606=_a3;
{
double _n_s_11607=0.0;
double _n_n_11608=0.0;
double _n_amp_11609=0.5;
double _n_f_11610=1.0;
{double _n_i_11611=0.0;
for(;d::truth((_n_i_11611<_n_octaves_11605));(void)((_n_i_11611++))){d::check_cancel();(void)((_n_s_11607=(_n_s_11607+(_n_amp_11609*_n_noise_11541((_n_x_11603*_n_f_11610),(_n_y_11604*_n_f_11610),(_n_period_11606*_n_f_11610))))));
(void)((_n_n_11608=(_n_n_11608+_n_amp_11609)));
(void)((_n_amp_11609=(_n_amp_11609*0.5)));
(void)((_n_f_11610=(_n_f_11610*2.0)));
}}
return (_n_s_11607/_n_n_11608);

}
}

double _n_clamp_11543(double _a0){double _n_v_11612=_a0;
return (d::truth((_n_v_11612<0.0))?0.0:(d::truth((_n_v_11612>1.0))?1.0:_n_v_11612));}

double _n_smooth_11544(double _a0,double _a1,double _a2){double _n_a_11613=_a0;
double _n_b_11614=_a1;
double _n_v_11615=_a2;
{
double _n_k_11616=_n_clamp_11543(((_n_v_11615-_n_a_11613)/(_n_b_11614-_n_a_11613)));
return ((_n_k_11616*_n_k_11616)*(3.0-(2.0*_n_k_11616)));

}
}

double _n_mix_11545(double _a0,double _a1,double _a2){double _n_a_11617=_a0;
double _n_b_11618=_a1;
double _n_k_11619=_a2;
return (_n_a_11617+((_n_b_11618-_n_a_11617)*_n_k_11619));}

d::Array<double,false> _n_hex_11546(d::String _a0){d::String _n_s_11620=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_11621=_a0;
return (([&](){auto _n_argument_11895=d::slice(_n_s_11620,_n_i_11621,(_n_i_11621+2.0));auto _n_argument_11896=16.0;return d::parseInt(_n_argument_11895,_n_argument_11896);})()/255.0);});}

double _n_wlF_11547(double _a0){double _n_x_11622=_a0;
return (d::truth((_n_x_11622<_n_SHORE_11521))?_n_HZ_11519:_n_FAR_11520);}

double _n_ridgeF_11548(double _a0){double _n_x_11623=_a0;
return ((23.0+(30.0*std::pow(((_n_x_11623-50.0)/92.0),2.0)))+(3.0*(_n_fbm_11542((_n_x_11623*0.08),1.3,3.0,0.0)-0.5)));}

double _n_hillsF_11549(double _a0){double _n_x_11624=_a0;
return ([&](){auto _n_left_11897=(50.0-(7.0*_n_fbm_11542((_n_x_11624*0.022),4.1,3.0,0.0)));auto _n_right_11898=(3.0*_n_smooth_11544(120.0,175.0,_n_x_11624));return (_n_left_11897-_n_right_11898);})();}

std::array<double,3> _n_skyAt_11550(double _a0,double _a1){double _n_x_11625=_a0;
double _n_y_11626=_a1;
{
double _n_v_11627=_n_clamp_11543((_n_y_11626/_n_FAR_11520));
double _n_dmx_11628=(_n_x_11625-d::at(_n_MOON_11522,0.0));
double _n_dmy_11629=(_n_y_11626-d::at(_n_MOON_11522,1.0));
double _n_halo_11630=(std::exp(((-d::number(std::sqrt(((_n_dmx_11628*_n_dmx_11628)+(_n_dmy_11629*_n_dmy_11629)))))/14.0))*0.16);
double _n_city_11631=([&](){auto _n_left_11899=std::exp(((-d::number(d::maximum({0.0,(_n_FAR_11520-_n_y_11626)})))/7.0));auto _n_right_11900=(0.05+(0.05*_n_smooth_11544(130.0,175.0,_n_x_11625)));return (_n_left_11899*_n_right_11900);})();
return std::array<double,3>{(((0.03+((0.08*_n_v_11627)*_n_v_11627))+(0.7*_n_halo_11630))+(_n_city_11631*0.9)),(((0.045+((0.12*_n_v_11627)*_n_v_11627))+(0.8*_n_halo_11630))+(_n_city_11631*0.6)),(((0.15+(0.24*std::pow(_n_v_11627,1.5)))+_n_halo_11630)+(_n_city_11631*0.35))};

}
}

struct Native_gangaur_ghat final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_11551{};
double _n_STAR_11552{};
double _n_N_11553{};
d::Array<d::String,false> _n_out_11554{};
d::Array<uint8_t,true> _n_lut_11555{};
d::Array<uint8_t,true> _n_mat_11557{};
d::Array<float,true> _n_sR_11558{};
d::Array<float,true> _n_sG_11559{};
d::Array<float,true> _n_sB_11560{};
d::Array<float,true> _n_flo_11561{};
d::Array<std::array<double,3>,false> _n_bulbs_11563{};
d::Array<std::array<double,5>,false> _n_blds_11564{};
double _n_TX_11567{};
double _n_TB_11568{};
double _n_TH_11569{};
double _n_TW_11570{};
double _n_G0_11571{};
double _n_G1_11572{};
double _n_GT_11573{};
double _n_GB_11574{};
d::Array<std::array<double,3>,false> _n_arches_11575{};
d::Array<std::array<double,3>,false> _n_wings_11577{};
d::Array<std::array<double,4>,false> _n_strands_11578{};
d::Array<std::array<double,5>,false> _n_diyas_11579{};
d::Array<d::Array<float,true>,false> _n_dyn_11580{};
d::Array<float,true> _n_dref_11581{};
std::function<d::String(double,std::shared_ptr<_n_Record_11889>)> _render;
double _n_nearest_11556(double _a0,double _a1,double _a2){double _n_r_11632=_a0;
double _n_g_11633=_a1;
double _n_b_11634=_a2;
{
double _n_k_11635=([&](){auto _n_left_12019=([&](){auto _n_left_12021=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_11632*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_12022=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_11633*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_12021)|d::i32(_n_right_12022));})();auto _n_right_12020=d::minimum({31.0,double(d::i32((_n_b_11634*31.99))|d::i32(0.0))});return double(d::i32(_n_left_12019)|d::i32(_n_right_12020));})();
if(d::truth((d::at(this->_n_lut_11555,_n_k_11635)!=255.0))){d::check_cancel();return d::at(this->_n_lut_11555,_n_k_11635);
}
double _n_best_11636=0.0;
double _n_bd_11637=1000000000.0;
{double _n_i_11638=0.0;
for(;d::truth((_n_i_11638<this->_n_STAR_11552));(void)((_n_i_11638++))){d::check_cancel();double _n_dr_11639=(d::at(d::at(this->_n_P_11551,_n_i_11638),0.0)-_n_r_11632);
double _n_dg_11640=(d::at(d::at(this->_n_P_11551,_n_i_11638),1.0)-_n_g_11633);
double _n_db_11641=(d::at(d::at(this->_n_P_11551,_n_i_11638),2.0)-_n_b_11634);
double _n_d_11642=((((0.3*_n_dr_11639)*_n_dr_11639)+((0.5*_n_dg_11640)*_n_dg_11640))+((0.2*_n_db_11641)*_n_db_11641));
if(d::truth((_n_d_11642<_n_bd_11637))){d::check_cancel();(void)(((_n_bd_11637=_n_d_11642),(_n_best_11636=_n_i_11638)));
}
}}
return ([&](){auto&& _n_array_12023=this->_n_lut_11555;auto _n_index_12024=_n_k_11635;auto _n_value_12025=_n_best_11636;d::put(_n_array_12023,_n_index_12024,_n_value_12025);return _n_value_12025;})();

}
}

void _n_set_11562(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_k_11643=_a0;
double _n_m_11644=_a1;
double _n_r_11645=_a2;
double _n_g_11646=_a3;
double _n_b_11647=_a4;
double _n_f_11648=_a5;
{
(void)(((((([&](){auto&& _n_array_12026=this->_n_mat_11557;auto _n_index_12027=_n_k_11643;auto _n_value_12028=_n_m_11644;d::put(_n_array_12026,_n_index_12027,_n_value_12028);return _n_value_12028;})(),([&](){auto&& _n_array_12029=this->_n_sR_11558;auto _n_index_12030=_n_k_11643;auto _n_value_12031=_n_r_11645;d::put(_n_array_12029,_n_index_12030,_n_value_12031);return _n_value_12031;})()),([&](){auto&& _n_array_12032=this->_n_sG_11559;auto _n_index_12033=_n_k_11643;auto _n_value_12034=_n_g_11646;d::put(_n_array_12032,_n_index_12033,_n_value_12034);return _n_value_12034;})()),([&](){auto&& _n_array_12035=this->_n_sB_11560;auto _n_index_12036=_n_k_11643;auto _n_value_12037=_n_b_11647;d::put(_n_array_12035,_n_index_12036,_n_value_12037);return _n_value_12037;})()),([&](){auto&& _n_array_12038=this->_n_flo_11561;auto _n_index_12039=_n_k_11643;auto _n_value_12040=_n_f_11648;d::put(_n_array_12038,_n_index_12039,_n_value_12040);return _n_value_12040;})()));

}
}

std::array<double,2> _n_keepOut_11565(double _a0){double _n_yb_11660=_a0;
{
if(d::truth((_n_yb_11660<=41.0))){d::check_cancel();return std::array<double,2>{999.0,(-d::number(999.0))};
}
return std::array<double,2>{(50.0-((_n_yb_11660-41.0)*0.55)),(100.0+((_n_yb_11660-41.0)*0.55))};

}
}

void _n_pane_11566(double _a0,double _a1,double _a2){double _n_k_11673=_a0;
double _n_seed_11674=_a1;
double _n_near_11675=_a2;
{
if(d::truth((_n_hash_11540(double(d::i32((_n_seed_11674*997.0))|d::i32(0.0)),_n_k_11673)<0.36))){d::check_cancel();bool _n_cream_11676=(_n_hash_11540(_n_k_11673,3.0)<0.4);
(void)(this->_n_set_11562(_n_k_11673,_n_BLD_11533,(d::truth(_n_cream_11676)?1.0:0.95),(d::truth(_n_cream_11676)?0.86:0.66),(d::truth(_n_cream_11676)?0.6:0.3),0.14));
}else {d::check_cancel();(void)(this->_n_set_11562(_n_k_11673,_n_BLD_11533,(0.07+(0.03*_n_near_11675)),(0.08+(0.03*_n_near_11675)),0.19,0.12));
}

}
}

double _n_archIn_11576(double _a0,double _a1){double _n_xc_11723=_a0;
double _n_y_11724=_a1;
{
double _n_best_11725=(-d::number(9.0));
for(auto &&_n_item_12041:this->_n_arches_11575){d::check_cancel();auto _n_binding_12042=_n_item_12041;
double _n_cx_11726=d::at(_n_binding_12042,0.0);
double _n_hw_11727=d::at(_n_binding_12042,1.0);
double _n_spring_11728=d::at(_n_binding_12042,2.0);
{
double _n_R_11729=(_n_hw_11727*1.55);
double _n_dx_11730=std::fabs((_n_xc_11723-_n_cx_11726));
double _n_d_11731{};
if(d::truth((_n_y_11724>=_n_spring_11728))){d::check_cancel();(void)((_n_d_11731=d::minimum({(_n_hw_11727-_n_dx_11730),((this->_n_GB_11574-_n_y_11724)+0.5)})));
}else {d::check_cancel();(void)((_n_d_11731=(_n_R_11729-d::hypot(std::initializer_list<double>{(_n_dx_11730+(_n_R_11729-_n_hw_11727)),(_n_y_11724-_n_spring_11728)}))));
}
(void)((_n_best_11725=d::maximum({_n_best_11725,_n_d_11731})));

}
}
return _n_best_11725;

}
}

void _n_addGlow_11582(double _a0,double _a1,double _a2,double _a3,double _a4,d::Array<double,false> _a5){double _n_fx_11806=_a0;
double _n_fy_11807=_a1;
double _n_core_11808=_a2;
double _n_halo_11809=_a3;
double _n_amp_11810=_a4;
d::Array<double,false> _n_c_11811=_a5;
{
double _n_R_11812=std::ceil((_n_halo_11809*3.0));
{double _n_r_11813=([&](){auto _n_argument_12043=0.0;auto _n_argument_12044=std::floor((_n_fy_11807-_n_R_11812));return d::maximum({_n_argument_12043,_n_argument_12044});})();
for(;d::truth((_n_r_11813<d::minimum({_n_H_11518,(_n_fy_11807+_n_R_11812)})));(void)((_n_r_11813++))){d::check_cancel();{double _n_x_11814=([&](){auto _n_argument_12045=0.0;auto _n_argument_12046=std::floor((_n_fx_11806-_n_R_11812));return d::maximum({_n_argument_12045,_n_argument_12046});})();
for(;d::truth((_n_x_11814<d::minimum({_n_W_11517,(_n_fx_11806+_n_R_11812)})));(void)((_n_x_11814++))){d::check_cancel();double _n_k_11815=((_n_r_11813*_n_W_11517)+_n_x_11814);
double _n_dx_11816=((_n_x_11814+0.5)-_n_fx_11806);
double _n_dy_11817=((_n_r_11813+0.5)-_n_fy_11807);
double _n_d_11818=std::sqrt(((_n_dx_11816*_n_dx_11816)+(_n_dy_11817*_n_dy_11817)));
double _n_h_11819=((std::exp((-d::number(std::pow((_n_d_11818/_n_core_11808),2.0))))*1.8)*_n_amp_11810);
double _n_v_11820=((std::exp(((-d::number(_n_d_11818))/_n_halo_11809))*0.3)*_n_amp_11810);
(void)(((([&](){auto&& _n_array_12047=d::at(this->_n_dyn_11580,0.0);auto _n_index_12048=_n_k_11815;auto _n_value_12049=(d::at(_n_array_12047,_n_index_12048)+(_n_h_11819+(_n_v_11820*d::at(_n_c_11811,0.0))));d::put(_n_array_12047,_n_index_12048,_n_value_12049);return _n_value_12049;})(),([&](){auto&& _n_array_12050=d::at(this->_n_dyn_11580,1.0);auto _n_index_12051=_n_k_11815;auto _n_value_12052=(d::at(_n_array_12050,_n_index_12051)+((_n_h_11819*0.88)+(_n_v_11820*d::at(_n_c_11811,1.0))));d::put(_n_array_12050,_n_index_12051,_n_value_12052);return _n_value_12052;})()),([&](){auto&& _n_array_12053=d::at(this->_n_dyn_11580,2.0);auto _n_index_12054=_n_k_11815;auto _n_value_12055=(d::at(_n_array_12053,_n_index_12054)+((_n_h_11819*0.6)+(_n_v_11820*d::at(_n_c_11811,2.0))));d::put(_n_array_12053,_n_index_12054,_n_value_12055);return _n_value_12055;})()));
}}
}}

}
}

void _n_addStreak_11583(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_11821=_a0;
double _n_y0_11822=_a1;
double _n_width_11823=_a2;
double _n_len_11824=_a3;
double _n_amp_11825=_a4;
{
{double _n_r_11826=([&](){auto _n_argument_12056=0.0;auto _n_argument_12057=std::floor(_n_y0_11822);return d::maximum({_n_argument_12056,_n_argument_12057});})();
for(;d::truth((_n_r_11826<_n_H_11518));(void)((_n_r_11826++))){d::check_cancel();double _n_dy_11827=((_n_r_11826+0.5)-_n_y0_11822);
double _n_a_11828=([&](){auto _n_left_12058=(std::exp(((-d::number(_n_dy_11827))/_n_len_11824))*_n_amp_11825);auto _n_right_12059=_n_smooth_11544((-d::number(0.5)),1.0,_n_dy_11827);return (_n_left_12058*_n_right_12059);})();
if(d::truth((_n_a_11828<0.01))){d::check_cancel();break;
}
{double _n_x_11829=([&](){auto _n_argument_12060=0.0;auto _n_argument_12061=std::floor(((_n_fx_11821-(3.0*_n_width_11823))-1.0));return d::maximum({_n_argument_12060,_n_argument_12061});})();
for(;d::truth((_n_x_11829<d::minimum({_n_W_11517,((_n_fx_11821+(3.0*_n_width_11823))+1.0)})));(void)((_n_x_11829++))){d::check_cancel();(void)(([&](){auto&& _n_array_12062=this->_n_dref_11581;auto _n_index_12063=((_n_r_11826*_n_W_11517)+_n_x_11829);auto _n_value_12064=(d::at(_n_array_12062,_n_index_12063)+(_n_a_11828*std::exp((-d::number(std::pow((((_n_x_11829+0.5)-_n_fx_11821)/_n_width_11823),2.0))))));d::put(_n_array_12062,_n_index_12063,_n_value_12064);return _n_value_12064;})());
}}
}}

}
}

explicit Native_gangaur_ghat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_11551=d::map(_n_meta_11515->_p_palette,_n_hex_11546);
this->_n_STAR_11552=(double(this->_n_P_11551.size())-1.0);
this->_n_N_11553=(_n_W_11517*_n_H_11518);
this->_n_out_11554=d::Array<d::String,false>(size_t(this->_n_N_11553));
this->_n_lut_11555=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_11557=d::Array<uint8_t,true>(size_t(this->_n_N_11553));
this->_n_sR_11558=d::Array<float,true>(size_t(this->_n_N_11553));
this->_n_sG_11559=d::Array<float,true>(size_t(this->_n_N_11553));
this->_n_sB_11560=d::Array<float,true>(size_t(this->_n_N_11553));
this->_n_flo_11561=d::Array<float,true>(size_t(this->_n_N_11553));
this->_n_bulbs_11563=d::Array<std::array<double,3>,false>{};
{double _n_r_11649=0.0;
for(;d::truth((_n_r_11649<_n_H_11518));(void)((_n_r_11649++))){d::check_cancel();{double _n_x_11650=0.0;
for(;d::truth((_n_x_11650<_n_W_11517));(void)((_n_x_11650++))){d::check_cancel();double _n_k_11651=((_n_r_11649*_n_W_11517)+_n_x_11650);
double _n_xc_11652=(_n_x_11650+0.5);
double _n_y_11653=(_n_r_11649+0.5);
if(d::truth((_n_y_11653>=_n_wlF_11547(_n_xc_11652)))){d::check_cancel();(void)(this->_n_set_11562(_n_k_11651,_n_WATER_11531,0.0,0.0,0.0,0.12));
continue;
}
auto _n_binding_11901=_n_skyAt_11550(_n_xc_11652,_n_y_11653);
double _n_cr_11654=d::at(_n_binding_11901,0.0);
double _n_cg_11655=d::at(_n_binding_11901,1.0);
double _n_cb_11656=d::at(_n_binding_11901,2.0);
double _n_veil_11657=(0.92+(0.16*_n_fbm_11542((_n_x_11650*0.04),(_n_r_11649*0.09),3.0,0.0)));
(void)(this->_n_set_11562(_n_k_11651,_n_SKY_11530,(_n_cr_11654*_n_veil_11657),(_n_cg_11655*_n_veil_11657),(_n_cb_11656*_n_veil_11657),0.18));
double _n_dm_11658=d::hypot(std::initializer_list<double>{(_n_xc_11652-d::at(_n_MOON_11522,0.0)),(_n_y_11653-d::at(_n_MOON_11522,1.0))});
if((d::truth((_n_dm_11658<3.7))&&d::truth((d::hypot(std::initializer_list<double>{((_n_xc_11652-d::at(_n_MOON_11522,0.0))+1.7),((_n_y_11653-d::at(_n_MOON_11522,1.0))+0.9)})>3.4)))){d::check_cancel();(void)(this->_n_set_11562(_n_k_11651,_n_MOONM_11539,1.0,0.97,0.86,0.2));
}
if((d::truth((_n_y_11653>=_n_hillsF_11549(_n_xc_11652)))&&d::truth((_n_xc_11652>96.0)))){d::check_cancel();double _n_s_11659=(0.85+(0.3*_n_fbm_11542((_n_x_11650*0.15),(_n_r_11649*0.2),2.0,0.0)));
(void)(this->_n_set_11562(_n_k_11651,_n_HILL_11538,(0.045*_n_s_11659),(0.06*_n_s_11659),(0.14*_n_s_11659),0.1));
}
if((d::truth((_n_xc_11652<_n_SHORE_11521))&&d::truth((_n_y_11653>=_n_ridgeF_11548(_n_xc_11652))))){d::check_cancel();(void)(this->_n_set_11562(_n_k_11651,_n_TOWN_11532,0.06,0.07,0.16,0.1));
if((d::truth((_n_hash_11540(((_n_x_11650*5.0)+1.0),(_n_r_11649*9.0))<0.035))&&d::truth((_n_y_11653>(_n_ridgeF_11548(_n_xc_11652)+2.0))))){d::check_cancel();(void)(this->_n_set_11562(_n_k_11651,_n_TOWN_11532,0.75,0.48,0.2,0.1));
}
}
}}
}}
this->_n_blds_11564=d::Array<std::array<double,5>,false>{};
{double _n_yb_11661=27.0;
double _n_row_11662=0.0;
for(;d::truth((_n_yb_11661<=_n_HZ_11519));(void)(((_n_yb_11661=(_n_yb_11661+2.7)),(_n_row_11662++)))){d::check_cancel();double _n_base_11663=(d::truth((_n_yb_11661>(_n_HZ_11519-2.7)))?_n_HZ_11519:_n_yb_11661);
bool _n_front_11664=(_n_base_11663==_n_HZ_11519);
double _n_sc_11665=(0.7+((0.55*(_n_base_11663-27.0))/(_n_HZ_11519-27.0)));
{double _n_x_11666=((-d::number(3.0))+(_n_hash_11540(_n_row_11662,1.0)*6.0));
for(;d::truth((_n_x_11666<_n_SHORE_11521));){d::check_cancel();double _n_w_11667=((5.0+(9.0*_n_hash_11540(double(d::i32(_n_x_11666)|d::i32(0.0)),((_n_row_11662*3.0)+2.0))))*_n_sc_11665);
double _n_h_11668=((d::truth(_n_front_11664)?(9.0+(8.0*_n_hash_11540(double(d::i32(_n_x_11666)|d::i32(0.0)),(_n_row_11662+50.0)))):(4.5+(6.0*_n_hash_11540(double(d::i32(_n_x_11666)|d::i32(0.0)),((_n_row_11662*3.0)+4.0)))))*_n_sc_11665);
double _n_x1_11669=d::minimum({(_n_SHORE_11521+(d::truth(_n_front_11664)?1.0:0.0)),(_n_x_11666+_n_w_11667)});
auto _n_binding_11902=this->_n_keepOut_11565(_n_base_11663);
double _n_ko0_11670=d::at(_n_binding_11902,0.0);
double _n_ko1_11671=d::at(_n_binding_11902,1.0);
double _n_mid_11672=((_n_x_11666+_n_x1_11669)/2.0);
if((d::truth((_n_base_11663>(_n_ridgeF_11548(_n_mid_11672)+(_n_h_11668*0.6))))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_11903=(_n_x1_11669>_n_ko0_11670);return d::truth(_n_logical_11903)?(_n_x_11666<_n_ko1_11671):_n_logical_11903;})()))))){d::check_cancel();(void)(this->_n_blds_11564.push(std::array<double,5>{_n_x_11666,_n_x1_11669,(_n_base_11663-_n_h_11668),_n_base_11663,_n_hash_11540(double(d::i32(_n_x_11666)|d::i32(0.0)),((_n_row_11662*7.0)+9.0))}));
}
(void)((_n_x_11666=(_n_x_11666+(_n_w_11667+(d::truth(_n_front_11664)?0.0:(_n_hash_11540(double(d::i32(_n_x_11666)|d::i32(0.0)),(_n_row_11662+20.0))*2.5))))));
}}
}}
(void)(this->_n_blds_11564.sort([=]( std::array<double,5> _a0,std::array<double,5> _a1) mutable ->double{auto&& _n_a_11677=_a0;
auto&& _n_b_11678=_a1;
return (d::at(_n_a_11677,3.0)-d::at(_n_b_11678,3.0));}));
(void)(d::forEach(this->_n_blds_11564,[&]( std::array<double,5> _a0,double _a1) mutable ->void{auto _n_binding_11904=_a0;
double _n_x0_11679=d::at(_n_binding_11904,0.0);
double _n_x1_11680=d::at(_n_binding_11904,1.0);
double _n_top_11681=d::at(_n_binding_11904,2.0);
double _n_base_11682=d::at(_n_binding_11904,3.0);
double _n_sd_11683=d::at(_n_binding_11904,4.0);
double _n_bi_11684=_a1;
{
double _n_sc_11685=(0.7+((0.55*(_n_base_11682-27.0))/(_n_HZ_11519-27.0)));
double _n_depth_11686=(1.0-((_n_base_11682-27.0)/(_n_HZ_11519-27.0)));
double _n_style_11687=(d::truth((_n_sd_11683<0.3))?1.0:(d::truth((_n_sd_11683<0.55))?0.0:(d::truth((_n_sd_11683<0.75))?3.0:2.0)));
double _n_mid_11688=((_n_x0_11679+_n_x1_11680)/2.0);
double _n_tw_11689=((_n_x1_11680-_n_x0_11679)*0.55);
double _n_cw_11690=d::maximum({1.6,(1.8*_n_sc_11685)});
{double _n_r_11691=std::floor((_n_top_11681-(5.0*_n_sc_11685)));
for(;d::truth((_n_r_11691<_n_base_11682));(void)((_n_r_11691++))){d::check_cancel();if(d::truth((_n_r_11691<0.0))){d::check_cancel();continue;
}
{double _n_x_11692=std::floor(_n_x0_11679);
for(;d::truth((_n_x_11692<_n_x1_11680));(void)((_n_x_11692++))){d::check_cancel();if((d::truth((_n_x_11692<0.0))||d::truth((_n_x_11692>=_n_W_11517)))){d::check_cancel();continue;
}
double _n_k_11693=((_n_r_11691*_n_W_11517)+_n_x_11692);
double _n_xc_11694=(_n_x_11692+0.5);
double _n_y_11695=(_n_r_11691+0.5);
bool _n_inside_11696=(_n_y_11695>=_n_top_11681);
double _n_part_11697=0.0;
if(d::truth((!d::truth(_n_inside_11696)))){d::check_cancel();if(((d::truth((_n_style_11687==0.0))&&d::truth((_n_y_11695>=(_n_top_11681-1.0))))&&d::truth((double(d::i32(_n_x_11692)&d::i32(1.0))==0.0)))){d::check_cancel();(void)(((_n_inside_11696=true),(_n_part_11697=1.0)));
}
if(d::truth((_n_style_11687==1.0))){d::check_cancel();double _n_dx_11698=(std::fabs((_n_xc_11694-_n_mid_11688))/_n_cw_11690);
double _n_dy_11699=((_n_top_11681-(1.5*_n_sc_11685))-_n_y_11695);
if(((d::truth((_n_dx_11698<1.0))&&d::truth((_n_dy_11699>=0.0)))&&d::truth((_n_dy_11699<((2.2*_n_sc_11685)*std::sqrt((1.0-(_n_dx_11698*_n_dx_11698)))))))){d::check_cancel();(void)(((_n_inside_11696=true),(_n_part_11697=1.0)));
}
if(((d::truth((_n_dx_11698<1.15))&&d::truth((_n_y_11695>=((_n_top_11681-(1.5*_n_sc_11685))-0.6))))&&d::truth((_n_y_11695<((_n_top_11681-(1.5*_n_sc_11685))+0.4))))){d::check_cancel();(void)(((_n_inside_11696=true),(_n_part_11697=1.0)));
}
if((d::truth(([&]()->bool{auto _n_logical_11905=(std::fabs((_n_dx_11698-0.85))<0.25);return d::truth(_n_logical_11905)?_n_logical_11905:(std::fabs(_n_dx_11698)<0.15);})())&&d::truth((_n_y_11695>=(_n_top_11681-(1.5*_n_sc_11685)))))){d::check_cancel();(void)(((_n_inside_11696=true),(_n_part_11697=1.0)));
}
if(((d::truth((_n_dx_11698<0.2))&&d::truth((_n_dy_11699>=(2.2*_n_sc_11685))))&&d::truth((_n_dy_11699<((2.2*_n_sc_11685)+1.0))))){d::check_cancel();(void)(((_n_inside_11696=true),(_n_part_11697=1.0)));
}
}
if(((d::truth((_n_style_11687==3.0))&&d::truth((std::fabs((_n_xc_11694-_n_mid_11688))<(_n_tw_11689/2.0))))&&d::truth((_n_y_11695>=(_n_top_11681-(3.5*_n_sc_11685)))))){d::check_cancel();(void)(((_n_inside_11696=true),(_n_part_11697=2.0)));
}
}
if(d::truth((!d::truth(_n_inside_11696)))){d::check_cancel();continue;
}
double _n_fy_11700=((_n_y_11695-_n_top_11681)/d::maximum({1.0,(_n_base_11682-_n_top_11681)}));
double _n_l_11701=((0.7+(0.45*_n_sd_11683))*(0.95-(0.3*_n_fy_11700)));
if(d::truth((_n_xc_11694<((_n_x0_11679+1.2)+(d::truth((_n_sc_11685>1.0))?1.0:0.0))))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*0.36)));
}else {d::check_cancel();if(d::truth((_n_xc_11694>(_n_x1_11680-1.0)))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*1.12)));
}
}
if((d::truth((_n_part_11697==0.0))&&d::truth((_n_y_11695<(_n_top_11681+1.0))))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*1.25)));
}else {d::check_cancel();if(((d::truth((_n_part_11697==0.0))&&d::truth((_n_y_11695<(_n_top_11681+2.0))))&&d::truth((_n_style_11687!=3.0)))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*0.6)));
}
}
if((d::truth((_n_part_11697==0.0))&&d::truth((_n_y_11695>(_n_base_11682-1.0))))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*0.6)));
}
if(d::truth((_n_part_11697==1.0))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*0.95)));
}
if((d::truth((_n_part_11697==2.0))&&d::truth((_n_xc_11694<((_n_mid_11688-(_n_tw_11689/2.0))+1.0))))){d::check_cancel();(void)((_n_l_11701=(_n_l_11701*0.5)));
}
double _n_hz_11702=(0.4*_n_depth_11686);
double _n_cr_11703=_n_mix_11545((0.6*_n_l_11701),0.12,_n_hz_11702);
double _n_cg_11704=_n_mix_11545((0.67*_n_l_11701),0.17,_n_hz_11702);
double _n_cb_11705=_n_mix_11545((0.84*_n_l_11701),0.38,_n_hz_11702);
(void)(this->_n_set_11562(_n_k_11693,_n_BLD_11533,_n_cr_11703,_n_cg_11704,_n_cb_11705,0.14));
if(((((d::truth((_n_part_11697==0.0))&&d::truth((_n_y_11695>(_n_top_11681+2.0))))&&d::truth((_n_y_11695<(_n_base_11682-1.0))))&&d::truth((_n_xc_11694>(_n_x0_11679+1.5))))&&d::truth((_n_xc_11694<(_n_x1_11680-1.0))))){d::check_cancel();double _n_lx_11706=std::floor((_n_xc_11694-_n_x0_11679));
double _n_ly_11707=std::floor((_n_base_11682-_n_y_11695));
if(d::truth((_n_sc_11685>1.05))){d::check_cancel();if(((d::truth((d::mod(_n_lx_11706,3.0)==1.0))&&d::truth((d::mod(_n_ly_11707,4.0)>=1.0)))&&d::truth((d::mod(_n_ly_11707,4.0)<=2.0)))){d::check_cancel();(void)(this->_n_pane_11566(_n_k_11693,((_n_sd_11683*1000.0)+_n_bi_11684),(1.0-_n_depth_11686)));
}
}else {d::check_cancel();if((d::truth((d::mod(_n_lx_11706,3.0)==1.0))&&d::truth((d::mod(_n_ly_11707,3.0)==1.0)))){d::check_cancel();(void)(this->_n_pane_11566(_n_k_11693,((_n_sd_11683*1000.0)+_n_bi_11684),(1.0-_n_depth_11686)));
}
}
}
if(((((d::truth((_n_part_11697==2.0))&&d::truth((_n_y_11695>(_n_top_11681-(2.2*_n_sc_11685)))))&&d::truth((_n_y_11695<(_n_top_11681-0.8))))&&d::truth((std::fabs((_n_xc_11694-_n_mid_11688))<((_n_tw_11689/2.0)-1.0))))&&d::truth((d::mod(std::floor(_n_xc_11694),2.0)==0.0)))){d::check_cancel();(void)(this->_n_pane_11566(_n_k_11693,(((_n_sd_11683*1000.0)+_n_bi_11684)+5.0),(1.0-_n_depth_11686)));
}
}}
}}
if((d::truth((_n_base_11682>40.0))&&d::truth((_n_hash_11540(_n_bi_11684,71.0)<0.55)))){d::check_cancel();{double _n_x_11708=(_n_x0_11679+1.0);
for(;d::truth((_n_x_11708<(_n_x1_11680-0.5)));(void)((_n_x_11708=(_n_x_11708+2.0)))){d::check_cancel();(void)(this->_n_bulbs_11563.push(std::array<double,3>{_n_x_11708,(_n_top_11681-(d::truth((_n_style_11687==0.0))?1.5:0.5)),(_n_hash_11540(double(d::i32(_n_x_11708)|d::i32(0.0)),_n_bi_11684)*40.0)}));
}}
}

}
}));
this->_n_TX_11567=38.0;
this->_n_TB_11568=33.0;
this->_n_TH_11569=19.0;
this->_n_TW_11570=5.5;
{double _n_r_11709=std::floor(((this->_n_TB_11568-this->_n_TH_11569)-3.0));
for(;d::truth((_n_r_11709<(this->_n_TB_11568+4.0)));(void)((_n_r_11709++))){d::check_cancel();{double _n_x_11710=std::floor((this->_n_TX_11567-12.0));
for(;d::truth((_n_x_11710<(this->_n_TX_11567+12.0)));(void)((_n_x_11710++))){d::check_cancel();double _n_k_11711=((_n_r_11709*_n_W_11517)+_n_x_11710);
double _n_xc_11712=(_n_x_11710+0.5);
double _n_y_11713=(_n_r_11709+0.5);
double _n_h_11714=(this->_n_TB_11568-_n_y_11713);
double _n_dx_11715=(_n_xc_11712-this->_n_TX_11567);
double _n_f_11716=(_n_h_11714/this->_n_TH_11569);
double _n_hw_11717=((d::truth((_n_f_11716<=1.0))&&d::truth((_n_f_11716>=0.0)))?(this->_n_TW_11570*([&](){auto _n_argument_11906=([&](){auto _n_argument_11907=0.0;auto _n_argument_11908=(1.0-std::pow(_n_f_11716,1.7));return d::maximum({_n_argument_11907,_n_argument_11908});})();auto _n_argument_11909=0.55;return std::pow(_n_argument_11906,_n_argument_11909);})()):(-d::number(1.0)));
if((d::truth((_n_f_11716>0.9))&&d::truth((_n_f_11716<1.03)))){d::check_cancel();(void)((_n_hw_11717=d::maximum({_n_hw_11717,(this->_n_TW_11570*0.4)})));
}
if((d::truth((_n_f_11716>=1.03))&&d::truth((_n_h_11714<(this->_n_TH_11569+2.2))))){d::check_cancel();(void)((_n_hw_11717=0.6));
}
if((d::truth((_n_h_11714<0.0))&&d::truth((_n_h_11714>(-d::number(4.0)))))){d::check_cancel();(void)((_n_hw_11717=(this->_n_TW_11570*1.25)));
}
double _n_md_11718=d::hypot(std::initializer_list<double>{((_n_xc_11712-(this->_n_TX_11567+8.0))/4.2),((_n_y_11713-(this->_n_TB_11568-2.0))/3.4)});
bool _n_inM_11719=([&]()->bool{auto _n_logical_11910=([&]()->bool{auto _n_logical_11913=(_n_md_11718<1.0);return d::truth(_n_logical_11913)?(_n_y_11713<(this->_n_TB_11568-2.0)):_n_logical_11913;})();return d::truth(_n_logical_11910)?_n_logical_11910:([&]()->bool{auto _n_logical_11911=([&]()->bool{auto _n_logical_11912=(std::fabs((_n_xc_11712-(this->_n_TX_11567+8.0)))<4.6);return d::truth(_n_logical_11912)?(_n_y_11713>=(this->_n_TB_11568-2.0)):_n_logical_11912;})();return d::truth(_n_logical_11911)?(_n_y_11713<(this->_n_TB_11568+4.0)):_n_logical_11911;})();})();
if((d::truth((std::fabs(_n_dx_11715)<=_n_hw_11717))||d::truth(_n_inM_11719))){d::check_cancel();double _n_rib_11720=(d::truth((std::fabs(_n_dx_11715)<(_n_hw_11717*0.3)))?1.08:(d::truth((_n_dx_11715<0.0))?0.62:0.95));
double _n_course_11721=((d::truth((!d::truth(_n_inM_11719)))&&d::truth(d::mod(std::floor((_n_h_11714/1.5)),2.0)))?0.85:1.0);
double _n_l_11722=((_n_rib_11720*_n_course_11721)*(d::truth(_n_inM_11719)?(d::truth((_n_xc_11712<(this->_n_TX_11567+6.0)))?0.65:0.9):1.0));
(void)(this->_n_set_11562(_n_k_11711,_n_BLD_11533,(0.72*_n_l_11722),(0.77*_n_l_11722),(0.9*_n_l_11722),0.14));
}
if((((d::truth((_n_h_11714>(this->_n_TH_11569+1.6)))&&d::truth((_n_h_11714<(this->_n_TH_11569+3.8))))&&d::truth((_n_dx_11715>0.4)))&&d::truth((_n_dx_11715<(3.0-(((_n_h_11714-this->_n_TH_11569)-1.6)*0.3)))))){d::check_cancel();(void)(this->_n_set_11562(_n_k_11711,_n_BLD_11533,0.85,0.45,0.2,0.1));
}
}}
}}
this->_n_G0_11571=53.0;
this->_n_G1_11572=97.0;
this->_n_GT_11573=38.0;
this->_n_GB_11574=57.0;
this->_n_arches_11575=d::Array<std::array<double,3>,false>{std::array<double,3>{_n_GX_11523,6.0,51.5},std::array<double,3>{(_n_GX_11523-14.5),4.2,53.0},std::array<double,3>{(_n_GX_11523+14.5),4.2,53.0}};
{double _n_r_11732=24.0;
for(;d::truth((_n_r_11732<(this->_n_GB_11574+1.0)));(void)((_n_r_11732++))){d::check_cancel();{double _n_x_11733=(this->_n_G0_11571-2.0);
for(;d::truth((_n_x_11733<(this->_n_G1_11572+2.0)));(void)((_n_x_11733++))){d::check_cancel();double _n_k_11734=((_n_r_11732*_n_W_11517)+_n_x_11733);
double _n_xc_11735=(_n_x_11733+0.5);
double _n_y_11736=(_n_r_11732+0.5);
bool _n_inside_11737=([&]()->bool{auto _n_logical_11914=([&]()->bool{auto _n_logical_11915=([&]()->bool{auto _n_logical_11916=(_n_xc_11735>=this->_n_G0_11571);return d::truth(_n_logical_11916)?(_n_xc_11735<this->_n_G1_11572):_n_logical_11916;})();return d::truth(_n_logical_11915)?(_n_y_11736>=this->_n_GT_11573):_n_logical_11915;})();return d::truth(_n_logical_11914)?(_n_y_11736<this->_n_GB_11574):_n_logical_11914;})();
double _n_l_11738=1.0;
bool _n_dome_11739=false;
if((((d::truth((_n_xc_11735>=(this->_n_G0_11571-1.0)))&&d::truth((_n_xc_11735<(this->_n_G1_11572+1.0))))&&d::truth((_n_y_11736>=this->_n_GT_11573)))&&d::truth((_n_y_11736<(this->_n_GT_11573+1.2))))){d::check_cancel();(void)(((_n_inside_11737=true),(_n_l_11738=1.1)));
}
if((d::truth((_n_y_11736>=(this->_n_GT_11573+1.2)))&&d::truth((_n_y_11736<(this->_n_GT_11573+2.2))))){d::check_cancel();(void)((_n_l_11738=0.55));
}
if((((d::truth((_n_y_11736>=(this->_n_GT_11573-2.0)))&&d::truth((_n_y_11736<this->_n_GT_11573)))&&d::truth((_n_xc_11735>=this->_n_G0_11571)))&&d::truth((_n_xc_11735<this->_n_G1_11572)))){d::check_cancel();(void)(((_n_inside_11737=true),(_n_l_11738=(d::truth(([&]()->bool{auto _n_logical_11917=(d::mod(_n_x_11733,3.0)==0.0);return d::truth(_n_logical_11917)?(_n_y_11736<(this->_n_GT_11573-1.0)):_n_logical_11917;})())?0.5:0.95))));
}
for(auto &&_n_item_11918:d::Array<double,false>{(this->_n_G0_11571+2.5),_n_GX_11523,(this->_n_G1_11572-2.5)}){d::check_cancel();double _n_cx_11740=_n_item_11918;
{
double _n_big_11741=(d::truth((_n_cx_11740==_n_GX_11523))?1.6:1.15);
double _n_dx_11742=(std::fabs((_n_xc_11735-_n_cx_11740))/(2.6*_n_big_11741));
double _n_db_11743=((this->_n_GT_11573-2.0)-(2.4*_n_big_11741));
if(((d::truth((_n_dx_11742<1.0))&&d::truth((_n_y_11736<_n_db_11743)))&&d::truth((_n_y_11736>=(_n_db_11743-((2.8*_n_big_11741)*std::sqrt((1.0-(_n_dx_11742*_n_dx_11742))))))))){d::check_cancel();(void)((((_n_inside_11737=true),(_n_dome_11739=true)),(_n_l_11738=(d::truth((_n_xc_11735<(_n_cx_11740-(1.2*_n_big_11741))))?0.55:1.15))));
}
if(((d::truth((_n_dx_11742<0.18))&&d::truth((_n_y_11736<(_n_db_11743-(2.8*_n_big_11741)))))&&d::truth((_n_y_11736>=((_n_db_11743-(2.8*_n_big_11741))-1.2))))){d::check_cancel();(void)((((_n_inside_11737=true),(_n_dome_11739=true)),(_n_l_11738=1.2)));
}
if(((d::truth((_n_dx_11742<1.18))&&d::truth((_n_y_11736>=_n_db_11743)))&&d::truth((_n_y_11736<(_n_db_11743+0.8))))){d::check_cancel();(void)((((_n_inside_11737=true),(_n_dome_11739=true)),(_n_l_11738=1.1)));
}
if(((d::truth((_n_y_11736>=(_n_db_11743+0.8)))&&d::truth((_n_y_11736<(this->_n_GT_11573-2.0))))&&d::truth(([&]()->bool{auto _n_logical_11919=(std::fabs((_n_dx_11742-0.8))<0.2);return d::truth(_n_logical_11919)?_n_logical_11919:(std::fabs((_n_dx_11742+0.8))<0.2);})()))){d::check_cancel();(void)((((_n_inside_11737=true),(_n_dome_11739=true)),(_n_l_11738=0.9)));
}else {d::check_cancel();if(((d::truth((_n_dx_11742<0.6))&&d::truth((_n_y_11736>=(_n_db_11743+0.8))))&&d::truth((_n_y_11736<(this->_n_GT_11573-2.0))))){d::check_cancel();(void)((((_n_inside_11737=true),(_n_dome_11739=true)),(_n_l_11738=0.22)));
}
}

}
}
if(d::truth((!d::truth(_n_inside_11737)))){d::check_cancel();bool _n_rim_11744=([&]()->bool{auto _n_logical_11920=([&]()->bool{auto _n_logical_11921=([&]()->bool{auto _n_logical_11922=(_n_y_11736>=(this->_n_GT_11573-3.0));return d::truth(_n_logical_11922)?(_n_y_11736<(this->_n_GT_11573-2.0)):_n_logical_11922;})();return d::truth(_n_logical_11921)?(_n_xc_11735>=(this->_n_G0_11571-1.0)):_n_logical_11921;})();return d::truth(_n_logical_11920)?(_n_xc_11735<(this->_n_G1_11572+1.0)):_n_logical_11920;})();
for(auto &&_n_item_11923:d::Array<double,false>{(this->_n_G0_11571+2.5),_n_GX_11523,(this->_n_G1_11572-2.5)}){d::check_cancel();double _n_cx_11745=_n_item_11923;
{
double _n_big_11746=(d::truth((_n_cx_11745==_n_GX_11523))?1.6:1.15);
double _n_db_11747=((this->_n_GT_11573-2.0)-(2.4*_n_big_11746));
double _n_dx_11748=(std::fabs((_n_xc_11735-_n_cx_11745))/((2.6*_n_big_11746)+1.2));
if(((d::truth((_n_dx_11748<1.0))&&d::truth((_n_y_11736<(this->_n_GT_11573-2.0))))&&d::truth((_n_y_11736>=(_n_db_11747-(((2.8*_n_big_11746)+1.4)*std::sqrt((1.0-(_n_dx_11748*_n_dx_11748))))))))){d::check_cancel();(void)((_n_rim_11744=true));
}

}
}
if((d::truth(_n_rim_11744)&&d::truth((d::at(this->_n_mat_11557,_n_k_11734)!=_n_SKY_11530)))){d::check_cancel();(void)(this->_n_set_11562(_n_k_11734,_n_TOWN_11532,0.05,0.06,0.14,0.08));
}
continue;
}
double _n_ai_11749=this->_n_archIn_11576(_n_xc_11735,_n_y_11736);
if((d::truth((_n_ai_11749>0.0))&&d::truth((_n_y_11736>=(this->_n_GT_11573+2.0))))){d::check_cancel();double _n_g_11750=(0.07+(0.22*_n_smooth_11544((this->_n_GB_11574-9.0),this->_n_GB_11574,_n_y_11736)));
(void)(this->_n_set_11562(_n_k_11734,_n_ARCH_11535,(_n_g_11750*1.1),(_n_g_11750*0.62),(_n_g_11750*0.32),0.06));
continue;
}
double _n_lift_11751=(d::truth(_n_dome_11739)?0.55:_n_smooth_11544((this->_n_GT_11573-6.0),this->_n_GB_11574,_n_y_11736));
double _n_mould_11752=(((d::truth((_n_ai_11749>(-d::number(1.2))))&&d::truth((_n_ai_11749<=0.0)))&&d::truth((_n_y_11736>=(this->_n_GT_11573+2.0))))?1.18:1.0);
double _n_pil_11753=((d::truth((std::fabs((_n_xc_11735-(_n_GX_11523-8.3)))<1.0))||d::truth((std::fabs((_n_xc_11735-(_n_GX_11523+8.3)))<1.0)))?1.1:1.0);
double _n_b_11754=(((_n_l_11738*_n_mould_11752)*_n_pil_11753)*(0.62+(0.42*_n_lift_11751)));
(void)(([&](){auto _n_argument_11924=_n_k_11734;auto _n_argument_11925=_n_GATE_11534;auto _n_argument_11926=(_n_mix_11545(0.74,0.98,_n_lift_11751)*_n_b_11754);auto _n_argument_11927=(_n_mix_11545(0.62,0.74,_n_lift_11751)*_n_b_11754);auto _n_argument_11928=(_n_mix_11545(0.58,0.46,_n_lift_11751)*_n_b_11754);auto _n_argument_11929=0.16;return this->_n_set_11562(_n_argument_11924,_n_argument_11925,_n_argument_11926,_n_argument_11927,_n_argument_11928,_n_argument_11929);})());
}}
}}
{double _n_x_11755=(this->_n_G0_11571+0.5);
for(;d::truth((_n_x_11755<this->_n_G1_11572));(void)((_n_x_11755=(_n_x_11755+2.0)))){d::check_cancel();(void)(this->_n_bulbs_11563.push(std::array<double,3>{_n_x_11755,(this->_n_GT_11573-2.5),(_n_hash_11540(double(d::i32(_n_x_11755)|d::i32(0.0)),333.0)*40.0)}));
}}
for(auto &&_n_item_11930:this->_n_arches_11575){d::check_cancel();auto _n_binding_11931=_n_item_11930;
double _n_cx_11756=d::at(_n_binding_11931,0.0);
double _n_hw_11757=d::at(_n_binding_11931,1.0);
double _n_spring_11758=d::at(_n_binding_11931,2.0);
{
double _n_R_11759=(_n_hw_11757*1.55);
double _n_o_11760=(_n_R_11759-_n_hw_11757);
double _n_Ro_11761=(_n_R_11759+1.2);
double _n_end_11762=std::acos((_n_o_11760/_n_Ro_11761));
double _n_n_11763=([&](){auto _n_argument_11932=2.0;auto _n_argument_11933=d::round(((_n_end_11762*_n_Ro_11761)/2.0));return d::maximum({_n_argument_11932,_n_argument_11933});})();
{double _n_j_11764=0.0;
for(;d::truth((_n_j_11764<_n_n_11763));(void)((_n_j_11764++))){d::check_cancel();double _n_a_11765=((_n_end_11762*_n_j_11764)/_n_n_11763);
for(auto &&_n_item_11934:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_11766=_n_item_11934;
(void)(this->_n_bulbs_11563.push(std::array<double,3>{(_n_cx_11756+(_n_s_11766*((_n_Ro_11761*std::cos(_n_a_11765))-_n_o_11760))),(_n_spring_11758-(_n_Ro_11761*std::sin(_n_a_11765))),(_n_hash_11540(((_n_cx_11756*7.0)+_n_s_11766),_n_j_11764)*40.0)}));
}
}}
(void)(this->_n_bulbs_11563.push(std::array<double,3>{_n_cx_11756,(_n_spring_11758-(_n_Ro_11761*std::sin(_n_end_11762))),(_n_hash_11540(_n_cx_11756,5.0)*40.0)}));

}
}
{double _n_r_11767=this->_n_GB_11574;
for(;d::truth((_n_r_11767<_n_HZ_11519));(void)((_n_r_11767++))){d::check_cancel();double _n_y_11768=(_n_r_11767+0.5);
double _n_half_11769=(26.0+((_n_y_11768-this->_n_GB_11574)*1.3));
{double _n_x_11770=std::floor((_n_GX_11523-_n_half_11769));
for(;d::truth((_n_x_11770<(_n_GX_11523+_n_half_11769)));(void)((_n_x_11770++))){d::check_cancel();double _n_k_11771=((_n_r_11767*_n_W_11517)+_n_x_11770);
double _n_xc_11772=(_n_x_11770+0.5);
double _n_warm_11773=(std::exp((-d::number(std::pow(((_n_xc_11772-_n_GX_11523)/26.0),2.0))))*(1.0-(0.05*(_n_y_11768-this->_n_GB_11574))));
bool _n_tread_11774=(d::mod((_n_r_11767-this->_n_GB_11574),2.0)==0.0);
double _n_l_11775=((d::truth(_n_tread_11774)?1.0:0.38)*(0.55+(0.45*_n_warm_11773)));
double _n_wet_11776=(d::truth((_n_r_11767>=(_n_HZ_11519-1.0)))?0.6:1.0);
(void)(([&](){auto _n_argument_11935=_n_k_11771;auto _n_argument_11936=_n_STEP_11536;auto _n_argument_11937=((_n_mix_11545(0.42,0.95,_n_warm_11773)*_n_l_11775)*_n_wet_11776);auto _n_argument_11938=((_n_mix_11545(0.47,0.68,_n_warm_11773)*_n_l_11775)*_n_wet_11776);auto _n_argument_11939=((_n_mix_11545(0.62,0.4,_n_warm_11773)*_n_l_11775)*_n_wet_11776);auto _n_argument_11940=0.14;return this->_n_set_11562(_n_argument_11935,_n_argument_11936,_n_argument_11937,_n_argument_11938,_n_argument_11939,_n_argument_11940);})());
}}
}}
this->_n_wings_11577=d::Array<std::array<double,3>,false>{std::array<double,3>{147.0,155.0,50.0},std::array<double,3>{155.0,163.0,48.0},std::array<double,3>{163.0,171.0,46.5},std::array<double,3>{171.0,179.0,49.0},std::array<double,3>{179.0,187.0,45.5},std::array<double,3>{187.0,195.0,48.0},std::array<double,3>{195.0,201.0,50.5}};
for(auto &&_n_item_11941:this->_n_wings_11577){d::check_cancel();auto _n_binding_11942=_n_item_11941;
double _n_x0_11777=d::at(_n_binding_11942,0.0);
double _n_x1_11778=d::at(_n_binding_11942,1.0);
double _n_top_11779=d::at(_n_binding_11942,2.0);
{
double _n_mid_11780=((_n_x0_11777+_n_x1_11778)/2.0);
{double _n_r_11781=std::floor((_n_top_11779-5.0));
for(;d::truth((_n_r_11781<_n_FAR_11520));(void)((_n_r_11781++))){d::check_cancel();{double _n_x_11782=std::floor(_n_x0_11777);
for(;(d::truth((_n_x_11782<_n_x1_11778))&&d::truth((_n_x_11782<_n_W_11517)));(void)((_n_x_11782++))){d::check_cancel();double _n_k_11783=((_n_r_11781*_n_W_11517)+_n_x_11782);
double _n_xc_11784=(_n_x_11782+0.5);
double _n_y_11785=(_n_r_11781+0.5);
bool _n_inside_11786=(_n_y_11785>=_n_top_11779);
bool _n_tall_11787=(_n_top_11779<48.0);
if(d::truth(_n_tall_11787)){d::check_cancel();double _n_dx_11788=(std::fabs((_n_xc_11784-_n_mid_11780))/2.2);
if(((d::truth((_n_dx_11788<1.0))&&d::truth((_n_y_11785<_n_top_11779)))&&d::truth((_n_y_11785>=((_n_top_11779-0.8)-(2.4*std::sqrt((1.0-(_n_dx_11788*_n_dx_11788))))))))){d::check_cancel();(void)((_n_inside_11786=true));
}
if(((d::truth((_n_dx_11788<0.25))&&d::truth((_n_y_11785<_n_top_11779)))&&d::truth((_n_y_11785>=(_n_top_11779-4.2))))){d::check_cancel();(void)((_n_inside_11786=true));
}
}
if(d::truth((!d::truth(_n_inside_11786)))){d::check_cancel();continue;
}
double _n_l_11789=(((d::truth((_n_xc_11784<(_n_x0_11777+1.0)))?0.55:1.0)*(d::truth((_n_y_11785<(_n_top_11779+1.0)))?1.15:1.0))*(1.0-(0.35*_n_smooth_11544(_n_top_11779,_n_FAR_11520,_n_y_11785))));
(void)(this->_n_set_11562(_n_k_11783,_n_PALACE_11537,(0.6*_n_l_11789),(0.46*_n_l_11789),(0.32*_n_l_11789),0.14));
if((((d::truth((_n_y_11785>(_n_top_11779+1.5)))&&d::truth((_n_y_11785<(_n_FAR_11520-1.5))))&&d::truth((d::mod((_n_x_11782-std::floor(_n_x0_11777)),3.0)==1.0)))&&d::truth((d::mod((_n_FAR_11520-_n_r_11781),2.0)==0.0)))){d::check_cancel();bool _n_lit_11790=(_n_hash_11540((_n_x_11782*3.0),(_n_r_11781*11.0))<0.75);
if(d::truth(_n_lit_11790)){d::check_cancel();(void)(this->_n_set_11562(_n_k_11783,_n_PALACE_11537,1.0,0.84,0.5,0.14));
}else {d::check_cancel();(void)(this->_n_set_11562(_n_k_11783,_n_PALACE_11537,0.22,0.16,0.14,0.1));
}
}
}}
}}
{double _n_x_11791=(_n_x0_11777+1.5);
for(;d::truth((_n_x_11791<d::minimum({_n_W_11517,(_n_x1_11778-1.0)})));(void)((_n_x_11791=(_n_x_11791+3.0)))){d::check_cancel();(void)(this->_n_bulbs_11563.push(std::array<double,3>{_n_x_11791,(_n_top_11779+0.5),(_n_hash_11540(double(d::i32(_n_x_11791)|d::i32(0.0)),909.0)*40.0)}));
}}

}
}
this->_n_strands_11578=d::Array<std::array<double,4>,false>{};
{double _n_i_11792=0.0;
for(;d::truth(((_n_i_11792+1.0)<double(this->_n_blds_11564.size())));(void)((_n_i_11792++))){d::check_cancel();auto&& _n_a_11793=d::at(this->_n_blds_11564,_n_i_11792);
auto&& _n_b_11794=d::at(this->_n_blds_11564,(_n_i_11792+1.0));
if(((d::truth((d::at(_n_a_11793,3.0)==_n_HZ_11519))&&d::truth((d::at(_n_b_11794,3.0)==_n_HZ_11519)))&&d::truth((_n_hash_11540(_n_i_11792,401.0)<0.6)))){d::check_cancel();(void)(this->_n_strands_11578.push(std::array<double,4>{(d::at(_n_a_11793,1.0)-1.0),(d::at(_n_a_11793,2.0)+0.5),(d::at(_n_b_11794,1.0)-1.0),(d::at(_n_b_11794,2.0)+0.5)}));
}
}}
for(auto &&_n_item_11943:this->_n_strands_11578){d::check_cancel();auto _n_binding_11944=_n_item_11943;
double _n_xa_11795=d::at(_n_binding_11944,0.0);
double _n_ya_11796=d::at(_n_binding_11944,1.0);
double _n_xb_11797=d::at(_n_binding_11944,2.0);
double _n_yb_11798=d::at(_n_binding_11944,3.0);
{
double _n_n_11799=([&](){auto _n_argument_11945=2.0;auto _n_argument_11946=d::round((std::fabs((_n_xb_11797-_n_xa_11795))/2.0));return d::maximum({_n_argument_11945,_n_argument_11946});})();
{double _n_j_11800=0.0;
for(;d::truth((_n_j_11800<=_n_n_11799));(void)((_n_j_11800++))){d::check_cancel();double _n_u_11801=(_n_j_11800/_n_n_11799);
(void)(this->_n_bulbs_11563.push(std::array<double,3>{_n_mix_11545(_n_xa_11795,_n_xb_11797,_n_u_11801),(_n_mix_11545(_n_ya_11796,_n_yb_11798,_n_u_11801)+(((2.2*4.0)*_n_u_11801)*(1.0-_n_u_11801))),(_n_hash_11540(_n_j_11800,(_n_xa_11795*13.0))*40.0)}));
}}

}
}
this->_n_diyas_11579=d::Array<std::array<double,5>,false>{};
{double _n_i_11802=0.0;
for(;d::truth((_n_i_11802<52.0));(void)((_n_i_11802++))){d::check_cancel();double _n_q_11803=_n_hash_11540(_n_i_11802,61.0);
double _n_y_11804=((_n_HZ_11519+3.0)+(32.0*std::pow(_n_q_11803,0.95)));
double _n_dir_11805=(d::truth((_n_hash_11540(_n_i_11802,65.0)<0.62))?1.0:(-d::number(1.0)));
(void)(this->_n_diyas_11579.push(std::array<double,5>{(_n_hash_11540(_n_i_11802,62.0)*260.0),_n_y_11804,(_n_hash_11540(_n_i_11802,63.0)*50.0),(0.7+(0.5*_n_hash_11540(_n_i_11802,64.0))),_n_dir_11805}));
}}
this->_n_dyn_11580=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_11553)),d::Array<float,true>(size_t(this->_n_N_11553)),d::Array<float,true>(size_t(this->_n_N_11553))};
this->_n_dref_11581=d::Array<float,true>(size_t(this->_n_N_11553));
_render=[=]( double _a0,std::shared_ptr<_n_Record_11889> _a1) mutable ->d::String{double _n_t_11830=_a0;
auto _n_binding_11949=(d::present(_a1)?_a1:([&](){auto _n_object_11948=std::make_shared<_n_Record_11889>();return _n_object_11948;})());
std::optional<d::Array<uint8_t,true>> _n_color_11831=_n_binding_11949->_p_color;
{
{double _n_c_11832=0.0;
for(;d::truth((_n_c_11832<3.0));(void)((_n_c_11832++))){d::check_cancel();(void)(d::at(this->_n_dyn_11580,_n_c_11832).fill(0.0));
}}
(void)(this->_n_dref_11581.fill(0.0));
for(auto &&_n_item_11950:this->_n_bulbs_11563){d::check_cancel();auto _n_binding_11951=_n_item_11950;
double _n_bx_11833=d::at(_n_binding_11951,0.0);
double _n_by_11834=d::at(_n_binding_11951,1.0);
double _n_ph_11835=d::at(_n_binding_11951,2.0);
{
double _n_x_11836=std::floor(_n_bx_11833);
double _n_r_11837=std::floor(_n_by_11834);
if((((d::truth((_n_x_11836<1.0))||d::truth((_n_x_11836>=(_n_W_11517-1.0))))||d::truth((_n_r_11837<1.0)))||d::truth((_n_r_11837>=(_n_H_11518-1.0))))){d::check_cancel();continue;
}
double _n_v_11838=(0.62+(0.38*std::sin(((_n_t_11830*(1.6+d::mod(_n_ph_11835,1.7)))+_n_ph_11835))));
double _n_k_11839=((_n_r_11837*_n_W_11517)+_n_x_11836);
(void)(((([&](){auto&& _n_array_11952=d::at(this->_n_dyn_11580,0.0);auto _n_index_11953=_n_k_11839;auto _n_value_11954=(d::at(_n_array_11952,_n_index_11953)+(_n_v_11838*d::at(_n_BULB_11529,0.0)));d::put(_n_array_11952,_n_index_11953,_n_value_11954);return _n_value_11954;})(),([&](){auto&& _n_array_11955=d::at(this->_n_dyn_11580,1.0);auto _n_index_11956=_n_k_11839;auto _n_value_11957=(d::at(_n_array_11955,_n_index_11956)+(_n_v_11838*d::at(_n_BULB_11529,1.0)));d::put(_n_array_11955,_n_index_11956,_n_value_11957);return _n_value_11957;})()),([&](){auto&& _n_array_11958=d::at(this->_n_dyn_11580,2.0);auto _n_index_11959=_n_k_11839;auto _n_value_11960=(d::at(_n_array_11958,_n_index_11959)+(_n_v_11838*d::at(_n_BULB_11529,2.0)));d::put(_n_array_11958,_n_index_11959,_n_value_11960);return _n_value_11960;})()));
for(auto &&_n_item_11961:d::Array<double,false>{(-d::number(1.0)),1.0,(-d::number(_n_W_11517)),_n_W_11517}){d::check_cancel();double _n_o_11840=_n_item_11961;
(void)(((([&](){auto&& _n_array_11962=d::at(this->_n_dyn_11580,0.0);auto _n_index_11963=(_n_k_11839+_n_o_11840);auto _n_value_11964=(d::at(_n_array_11962,_n_index_11963)+(0.12*_n_v_11838));d::put(_n_array_11962,_n_index_11963,_n_value_11964);return _n_value_11964;})(),([&](){auto&& _n_array_11965=d::at(this->_n_dyn_11580,1.0);auto _n_index_11966=(_n_k_11839+_n_o_11840);auto _n_value_11967=(d::at(_n_array_11965,_n_index_11966)+(0.08*_n_v_11838));d::put(_n_array_11965,_n_index_11966,_n_value_11967);return _n_value_11967;})()),([&](){auto&& _n_array_11968=d::at(this->_n_dyn_11580,2.0);auto _n_index_11969=(_n_k_11839+_n_o_11840);auto _n_value_11970=(d::at(_n_array_11968,_n_index_11969)+(0.03*_n_v_11838));d::put(_n_array_11968,_n_index_11969,_n_value_11970);return _n_value_11970;})()));
}

}
}
(void)(([&](){auto _n_argument_11971=_n_GX_11523;auto _n_argument_11972=46.5;auto _n_argument_11973=0.9;auto _n_argument_11974=2.6;auto _n_argument_11975=(0.85+([&](){auto _n_left_11976=(0.15*std::sin((_n_t_11830*7.0)));auto _n_right_11977=std::sin((_n_t_11830*4.3));return (_n_left_11976*_n_right_11977);})());auto _n_argument_11978=_n_FLAME_11528;return this->_n_addGlow_11582(_n_argument_11971,_n_argument_11972,_n_argument_11973,_n_argument_11974,_n_argument_11975,_n_argument_11978);})());
for(auto &&_n_item_11979:this->_n_diyas_11579){d::check_cancel();auto _n_binding_11980=_n_item_11979;
double _n_x0_11841=d::at(_n_binding_11980,0.0);
double _n_y0_11842=d::at(_n_binding_11980,1.0);
double _n_ph_11843=d::at(_n_binding_11980,2.0);
double _n_sz_11844=d::at(_n_binding_11980,3.0);
double _n_dir_11845=d::at(_n_binding_11980,4.0);
{
double _n_near_11846=((_n_y0_11842-_n_HZ_11519)/(_n_H_11518-_n_HZ_11519));
double _n_x_11847=(d::mod((d::mod((_n_x0_11841+((_n_dir_11845*_n_t_11830)*(0.35+(0.8*_n_near_11846)))),260.0)+260.0),260.0)-30.0);
double _n_y_11848=(_n_y0_11842+((1.0+(1.6*_n_near_11846))*std::sin(((_n_x_11847*0.045)+_n_ph_11843))));
if(((d::truth((_n_x_11847<(-d::number(3.0))))||d::truth((_n_x_11847>(_n_W_11517+3.0))))||d::truth((_n_y_11848<(_n_wlF_11547(_n_x_11847)+1.0))))){d::check_cancel();continue;
}
double _n_fl_11849=(0.78+([&](){auto _n_left_11981=(0.22*std::sin(((_n_t_11830*9.0)+_n_ph_11843)));auto _n_right_11982=std::sin(((_n_t_11830*5.3)+(_n_ph_11843*2.0)));return (_n_left_11981*_n_right_11982);})());
double _n_s_11850=((0.35+(0.9*_n_near_11846))*_n_sz_11844);
(void)(this->_n_addGlow_11582(_n_x_11847,(_n_y_11848-0.4),(0.5+(0.45*_n_s_11850)),(0.9+(1.8*_n_s_11850)),(_n_fl_11849*1.3),_n_FLAME_11528));
double _n_cr_11851=std::floor((_n_y_11848+0.4));
{double _n_xx_11852=std::floor(((_n_x_11847-0.8)-_n_s_11850));
for(;d::truth((_n_xx_11852<=((_n_x_11847+0.8)+_n_s_11850)));(void)((_n_xx_11852++))){d::check_cancel();if(((d::truth((_n_xx_11852<0.0))||d::truth((_n_xx_11852>=_n_W_11517)))||d::truth((_n_cr_11851>=_n_H_11518)))){d::check_cancel();continue;
}
double _n_k_11853=((_n_cr_11851*_n_W_11517)+_n_xx_11852);
(void)(((([&](){auto&& _n_array_11983=d::at(this->_n_dyn_11580,0.0);auto _n_index_11984=_n_k_11853;auto _n_value_11985=(d::at(_n_array_11983,_n_index_11984)+(0.28*_n_fl_11849));d::put(_n_array_11983,_n_index_11984,_n_value_11985);return _n_value_11985;})(),([&](){auto&& _n_array_11986=d::at(this->_n_dyn_11580,1.0);auto _n_index_11987=_n_k_11853;auto _n_value_11988=(d::at(_n_array_11986,_n_index_11987)+(0.12*_n_fl_11849));d::put(_n_array_11986,_n_index_11987,_n_value_11988);return _n_value_11988;})()),([&](){auto&& _n_array_11989=d::at(this->_n_dyn_11580,2.0);auto _n_index_11990=_n_k_11853;auto _n_value_11991=(d::at(_n_array_11989,_n_index_11990)+(0.04*_n_fl_11849));d::put(_n_array_11989,_n_index_11990,_n_value_11991);return _n_value_11991;})()));
}}
(void)(this->_n_addStreak_11583(_n_x_11847,(_n_y_11848+0.6),(0.35+(0.35*_n_s_11850)),(2.0+(5.0*_n_s_11850)),(0.55*_n_fl_11849)));

}
}
{double _n_r_11854=0.0;
for(;d::truth((_n_r_11854<_n_H_11518));(void)((_n_r_11854++))){d::check_cancel();double _n_y_11855=(_n_r_11854+0.5);
{double _n_x_11856=0.0;
for(;d::truth((_n_x_11856<_n_W_11517));(void)((_n_x_11856++))){d::check_cancel();double _n_k_11857=((_n_r_11854*_n_W_11517)+_n_x_11856);
double _n_m_11858=d::at(this->_n_mat_11557,_n_k_11857);
double _n_cr_11859=d::at(this->_n_sR_11558,_n_k_11857);
double _n_cg_11860=d::at(this->_n_sG_11559,_n_k_11857);
double _n_cb_11861=d::at(this->_n_sB_11560,_n_k_11857);
double _n_floor_11862=d::at(this->_n_flo_11561,_n_k_11857);
double _n_fade_11863=1.0;
bool _n_star_11864=false;
if(((d::truth((_n_m_11858==_n_SKY_11530))&&d::truth((_n_y_11855<48.0)))&&d::truth((_n_hash_11540(_n_x_11856,((_n_r_11854*3.0)+11.0))>0.986)))){d::check_cancel();double _n_dm_11865=d::hypot(std::initializer_list<double>{(_n_x_11856-d::at(_n_MOON_11522,0.0)),(_n_y_11855-d::at(_n_MOON_11522,1.0))});
double _n_tw_11866=([&](){auto _n_left_11992=([&](){auto _n_left_11994=(0.45+(0.4*std::sin(([&](){auto _n_left_11996=(_n_t_11830*(1.2+(_n_hash_11540(_n_x_11856,_n_r_11854)*2.5)));auto _n_right_11997=(_n_hash_11540(_n_r_11854,_n_x_11856)*6.28);return (_n_left_11996+_n_right_11997);})())));auto _n_right_11995=_n_smooth_11544(48.0,18.0,_n_y_11855);return (_n_left_11994*_n_right_11995);})();auto _n_right_11993=_n_smooth_11544(6.0,16.0,_n_dm_11865);return (_n_left_11992*_n_right_11993);})();
if(d::truth((_n_tw_11866>0.12))){d::check_cancel();(void)(((((_n_cr_11859=d::maximum({_n_cr_11859,(_n_tw_11866*0.9)})),(_n_cg_11860=d::maximum({_n_cg_11860,(_n_tw_11866*0.92)}))),(_n_cb_11861=d::maximum({_n_cb_11861,_n_tw_11866}))),(_n_star_11864=true)));
}
}else {d::check_cancel();if(d::truth((_n_m_11858==_n_WATER_11531))){d::check_cancel();double _n_wl_11867=_n_wlF_11547((_n_x_11856+0.5));
double _n_d_11868=(_n_y_11855-_n_wl_11867);
double _n_v_11869=((_n_y_11855-_n_FAR_11520)/(_n_H_11518-_n_FAR_11520));
double _n_w_11870=([&](){auto _n_left_11998=(0.6*_n_noise_11541(((_n_x_11856*0.05)+(_n_t_11830*0.07)),((_n_y_11855*0.45)-(_n_t_11830*0.4)),0.0));auto _n_right_11999=(0.4*_n_noise_11541(((_n_x_11856*0.16)-(_n_t_11830*0.13)),((_n_y_11855*0.95)-(_n_t_11830*0.85)),0.0));return (_n_left_11998+_n_right_11999);})();
double _n_swell_11871=(0.55+(0.9*_n_w_11870));
(void)((((_n_cr_11859=(0.025*_n_swell_11871)),(_n_cg_11860=(0.04*_n_swell_11871))),(_n_cb_11861=(0.12*_n_swell_11871))));
double _n_wx_11872=((_n_noise_11541(((_n_x_11856*0.05)+7.0),((_n_y_11855*0.35)-(_n_t_11830*0.6)),0.0)-0.5)*(1.5+(4.0*_n_v_11869)));
double _n_wy_11873=((_n_noise_11541(((_n_x_11856*0.09)+3.0),((_n_y_11855*0.6)-(_n_t_11830*0.9)),0.0)-0.5)*(1.0+(2.5*_n_v_11869)));
double _n_ym_11874=(((_n_wl_11867-(_n_d_11868*0.92))-0.6)+_n_wy_11873);
double _n_sx_11875=d::round((_n_x_11856+_n_wx_11872));
if(d::truth((_n_sx_11875<0.0))){d::check_cancel();(void)((_n_sx_11875=0.0));
}
if(d::truth((_n_sx_11875>(_n_W_11517-1.0)))){d::check_cancel();(void)((_n_sx_11875=(_n_W_11517-1.0)));
}
double _n_q_11876=(d::truth((_n_ym_11874<0.0))?(-d::number(1.0)):((std::floor(_n_ym_11874)*_n_W_11517)+_n_sx_11875));
if((d::truth((_n_q_11876>=0.0))&&d::truth((d::at(this->_n_mat_11557,_n_q_11876)!=_n_WATER_11531)))){d::check_cancel();double _n_dash_11877=([&](){auto _n_argument_12000=0.3;auto _n_argument_12001=0.75;auto _n_argument_12002=_n_noise_11541(((_n_x_11856*0.09)+3.0),((_n_y_11855*0.9)-(_n_t_11830*1.0)),0.0);return _n_smooth_11544(_n_argument_12000,_n_argument_12001,_n_argument_12002);})();
double _n_da_11878=((0.12+(0.88*_n_dash_11877))*(0.85-(0.3*_n_smooth_11544(_n_HZ_11519,_n_H_11518,_n_y_11855))));
double _n_sp_11879=d::maximum({d::at(this->_n_sR_11558,_n_q_11876),d::at(this->_n_sG_11559,_n_q_11876),d::at(this->_n_sB_11560,_n_q_11876)});
double _n_keep_11880=((0.24+(0.55*_n_smooth_11544(0.5,0.9,((d::at(this->_n_sR_11558,_n_q_11876)-d::at(this->_n_sB_11560,_n_q_11876))+0.6))))*(d::truth((_n_sp_11879>1.0))?(1.0/_n_sp_11879):1.0));
(void)((((_n_cr_11859=(_n_cr_11859+(((d::at(this->_n_sR_11558,_n_q_11876)*_n_keep_11880)+d::at(d::at(this->_n_dyn_11580,0.0),_n_q_11876))*_n_da_11878))),(_n_cg_11860=(_n_cg_11860+(((d::at(this->_n_sG_11559,_n_q_11876)*_n_keep_11880)+d::at(d::at(this->_n_dyn_11580,1.0),_n_q_11876))*_n_da_11878)))),(_n_cb_11861=(_n_cb_11861+(((d::at(this->_n_sB_11560,_n_q_11876)*_n_keep_11880)+d::at(d::at(this->_n_dyn_11580,2.0),_n_q_11876))*_n_da_11878)))));
}
double _n_fl_11881=(d::at(this->_n_dref_11581,_n_k_11857)*(0.25+(1.0*_n_smooth_11544(0.3,0.7,_n_w_11870))));
(void)((((_n_cr_11859=(_n_cr_11859+(_n_fl_11881*d::at(_n_FLAME_11528,0.0)))),(_n_cg_11860=(_n_cg_11860+(_n_fl_11881*d::at(_n_FLAME_11528,1.0))))),(_n_cb_11861=(_n_cb_11861+(_n_fl_11881*d::at(_n_FLAME_11528,2.0))))));
(void)((_n_floor_11862=0.12));
(void)((_n_fade_11863=_n_smooth_11544((_n_H_11518+4.0),(_n_H_11518-14.0),_n_y_11855)));
}
}
(void)((((_n_cr_11859=(_n_cr_11859+d::at(d::at(this->_n_dyn_11580,0.0),_n_k_11857))),(_n_cg_11860=(_n_cg_11860+d::at(d::at(this->_n_dyn_11580,1.0),_n_k_11857)))),(_n_cb_11861=(_n_cb_11861+d::at(d::at(this->_n_dyn_11580,2.0),_n_k_11857)))));
double _n_peak_11882=d::maximum({_n_cr_11859,_n_cg_11860,_n_cb_11861,0.0001});
double _n_level_11883=(_n_clamp_11543((_n_floor_11862+(((1.0-_n_floor_11862)*std::pow(_n_peak_11882,0.72))*0.95)))*_n_fade_11863);
double _n_step_11884=([&](){auto _n_argument_12003=0.0;auto _n_argument_12004=([&](){auto _n_argument_12005=3.0;auto _n_argument_12006=d::round(((_n_level_11883*3.0)+d::at(_n_BAYER_11527,((double(d::i32(_n_r_11854)&d::i32(3.0))*4.0)+double(d::i32(_n_x_11856)&d::i32(3.0))))));return d::minimum({_n_argument_12005,_n_argument_12006});})();return d::maximum({_n_argument_12003,_n_argument_12004});})();
(void)(([&](){auto&& _n_array_12007=this->_n_out_11554;auto _n_index_12008=_n_k_11857;auto _n_value_12009=d::at(_n_DOTS_11524,_n_step_11884);d::put(_n_array_12007,_n_index_12008,_n_value_12009);return _n_value_12009;})());
if(d::truth(_n_color_11831)){d::check_cancel();if(d::truth(_n_star_11864)){d::check_cancel();(void)(([&](){auto&& _n_array_12010=d::read(_n_color_11831);auto _n_index_12011=_n_k_11857;auto _n_value_12012=this->_n_STAR_11552;d::put(_n_array_12010,_n_index_12011,_n_value_12012);return _n_value_12012;})());
}else {d::check_cancel();double _n_want_11885=(d::truth(_n_step_11884)?d::minimum({1.0,((_n_level_11883+0.06)/d::at(_n_COVER_11525,_n_step_11884))}):0.0);
double _n_s_11886=d::minimum({d::at(_n_LIFT_11526,_n_step_11884),((0.3+(0.7*_n_want_11885))/_n_peak_11882)});
(void)(([&](){auto&& _n_array_12013=d::read(_n_color_11831);auto _n_index_12014=_n_k_11857;auto _n_value_12015=([&](){auto _n_argument_12016=_n_clamp_11543((_n_cr_11859*_n_s_11886));auto _n_argument_12017=_n_clamp_11543((_n_cg_11860*_n_s_11886));auto _n_argument_12018=_n_clamp_11543((_n_cb_11861*_n_s_11886));return this->_n_nearest_11556(_n_argument_12016,_n_argument_12017,_n_argument_12018);})();d::put(_n_array_12013,_n_index_12014,_n_value_12015);return _n_value_12015;})());
}
}
}}
}}
d::Array<d::String,false> _n_lines_11887=d::Array<d::String,false>{};
{double _n_r_11888=0.0;
for(;d::truth((_n_r_11888<_n_H_11518));(void)((_n_r_11888++))){d::check_cancel();(void)(_n_lines_11887.push(d::join(this->_n_out_11554.slice((_n_r_11888*_n_W_11517),((_n_r_11888+1.0)*_n_W_11517)),d::String(u""))));
}}
return d::join(_n_lines_11887,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("gangaur-ghat").cols)*ascii::catalog_meta("gangaur-ghat").rows);auto _env=std::make_shared<_n_Record_11889>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &gangaur_ghat_meta(){return catalog_meta("gangaur-ghat");}
std::unique_ptr<Piece> make_gangaur_ghat(const AsciiPieceOptions &o){return std::make_unique<Native_gangaur_ghat>(o);}
}
