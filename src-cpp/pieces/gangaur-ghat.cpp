// Direct, statically typed C++ from src/pieces/gangaur-ghat.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11517;
struct _n_Record_11890;
struct _n_Record_11517{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_11517> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11517>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_11890{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11890> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11890>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_11541(double _a0,double _a1);
double _n_noise_11542(double _a0,double _a1,double _a2);
double _n_fbm_11543(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_11544(double _a0);
double _n_smooth_11545(double _a0,double _a1,double _a2);
double _n_mix_11546(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_11547(d::String _a0);
double _n_wlF_11548(double _a0);
double _n_ridgeF_11549(double _a0);
double _n_hillsF_11550(double _a0);
d::Array<double,false> _n_skyAt_11551(double _a0,double _a1);
std::shared_ptr<_n_Record_11517> _n_meta_11516=[](){return ([&](){auto _n_object_11893=std::make_shared<_n_Record_11517>();_n_object_11893->_p_name=d::String(u"gangaur ghat");_n_object_11893->_p_category=d::String(u"scenes");_n_object_11893->_p_note=d::String(u"udaipur at night, a lit gateway on lake pichola and diyas on the water");_n_object_11893->_p_cols=200.0;_n_object_11893->_p_rows=100.0;_n_object_11893->_p_cell=1.0;_n_object_11893->_p_fps=15.0;_n_object_11893->_p_ground=d::String(u"#070a18");_n_object_11893->_p_palette=d::Array<d::String,false>{d::String(u"#0a1230"),d::String(u"#0f1a40"),d::String(u"#152352"),d::String(u"#1c2e66"),d::String(u"#253a7a"),d::String(u"#30498e"),d::String(u"#3e5aa2"),d::String(u"#0c0f1e"),d::String(u"#161a30"),d::String(u"#232842"),d::String(u"#4a5a86"),d::String(u"#6474a0"),d::String(u"#8291b8"),d::String(u"#a3afcf"),d::String(u"#c6cee3"),d::String(u"#e6ebf5"),d::String(u"#fff6dc"),d::String(u"#ffe6a8"),d::String(u"#ffd277"),d::String(u"#ffb84a"),d::String(u"#f29a34"),d::String(u"#d8782a"),d::String(u"#a85a26"),d::String(u"#7a4224"),d::String(u"#e8c48c"),d::String(u"#c89a62"),d::String(u"#9a7048"),d::String(u"#6a4c38"),d::String(u"#3e2c2a"),d::String(u"#dfe6ff")};return _n_object_11893;})();}();
const double _n_W_11518=[](){return 200.0;}();
const double _n_H_11519=[](){return 100.0;}();
const double _n_HZ_11520=[](){return 64.0;}();
const double _n_FAR_11521=[](){return 58.0;}();
const double _n_SHORE_11522=[](){return 142.0;}();
d::Array<double,false> _n_MOON_11523=[](){return d::Array<double,false>{170.0,13.0};}();
const double _n_GX_11524=[](){return 75.0;}();
const d::String _n_DOTS_11525=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_11526=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_LIFT_11527=[](){return d::Array<double,false>{0.0,2.5,1.7,1.35};}();
d::Array<double,false> _n_BAYER_11528=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_11585=_a0;
return ((_n_v_11585/16.0)-0.47);});}();
d::Array<double,false> _n_FLAME_11529=[](){return d::Array<double,false>{1.0,0.62,0.22};}();
d::Array<double,false> _n_BULB_11530=[](){return d::Array<double,false>{1.0,0.8,0.45};}();
const double _n_SKY_11531=[](){return 0.0;}();
const double _n_WATER_11532=[](){return 1.0;}();
const double _n_TOWN_11533=[](){return 2.0;}();
const double _n_BLD_11534=[](){return 3.0;}();
const double _n_GATE_11535=[](){return 4.0;}();
const double _n_ARCH_11536=[](){return 5.0;}();
const double _n_STEP_11537=[](){return 6.0;}();
const double _n_PALACE_11538=[](){return 7.0;}();
const double _n_HILL_11539=[](){return 8.0;}();
const double _n_MOONM_11540=[](){return 9.0;}();
double _n_hash_11541(double _a0,double _a1){double _n_x_11586=_a0;
double _n_y_11587=_a1;
{
double _n_h_11588=([&](){auto _n_left_11894=d::imul(double(d::i32(_n_x_11586)|d::i32(0.0)),374761393.0);auto _n_right_11895=d::imul(double(d::i32(_n_y_11587)|d::i32(0.0)),668265263.0);return (_n_left_11894+_n_right_11895);})();
(void)((_n_h_11588=d::imul(double(d::i32(_n_h_11588)^d::i32(double(d::u32(_n_h_11588)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_11588)^d::i32(double(d::u32(_n_h_11588)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_11542(double _a0,double _a1,double _a2){double _n_x_11589=_a0;
double _n_y_11590=_a1;
double _n_period_11591=_a2;
{
double _n_xi_11592=std::floor(_n_x_11589);
double _n_yi_11593=std::floor(_n_y_11590);
double _n_fx_11594=(_n_x_11589-_n_xi_11592);
double _n_fy_11595=(_n_y_11590-_n_yi_11593);
double _n_u_11596=((_n_fx_11594*_n_fx_11594)*(3.0-(2.0*_n_fx_11594)));
double _n_v_11597=((_n_fy_11595*_n_fy_11595)*(3.0-(2.0*_n_fy_11595)));
double _n_x0_11598=_n_xi_11592;
double _n_x1_11599=(_n_xi_11592+1.0);
if(d::truth(_n_period_11591)){d::check_cancel();(void)((_n_x0_11598=d::mod((d::mod(_n_xi_11592,_n_period_11591)+_n_period_11591),_n_period_11591)));
(void)((_n_x1_11599=d::mod((_n_x0_11598+1.0),_n_period_11591)));
}
double _n_a_11600=_n_hash_11541(_n_x0_11598,_n_yi_11593);
double _n_b_11601=_n_hash_11541(_n_x1_11599,_n_yi_11593);
double _n_c_11602=_n_hash_11541(_n_x0_11598,(_n_yi_11593+1.0));
double _n_d_11603=_n_hash_11541(_n_x1_11599,(_n_yi_11593+1.0));
return (((_n_a_11600+((_n_b_11601-_n_a_11600)*_n_u_11596))+((_n_c_11602-_n_a_11600)*_n_v_11597))+(((((_n_a_11600-_n_b_11601)-_n_c_11602)+_n_d_11603)*_n_u_11596)*_n_v_11597));

}
}

double _n_fbm_11543(double _a0,double _a1,double _a2,double _a3){double _n_x_11604=_a0;
double _n_y_11605=_a1;
double _n_octaves_11606=_a2;
double _n_period_11607=_a3;
{
double _n_s_11608=0.0;
double _n_n_11609=0.0;
double _n_amp_11610=0.5;
double _n_f_11611=1.0;
{double _n_i_11612=0.0;
for(;d::truth((_n_i_11612<_n_octaves_11606));(void)((_n_i_11612++))){d::check_cancel();(void)((_n_s_11608=(_n_s_11608+(_n_amp_11610*_n_noise_11542((_n_x_11604*_n_f_11611),(_n_y_11605*_n_f_11611),(_n_period_11607*_n_f_11611))))));
(void)((_n_n_11609=(_n_n_11609+_n_amp_11610)));
(void)((_n_amp_11610=(_n_amp_11610*0.5)));
(void)((_n_f_11611=(_n_f_11611*2.0)));
}}
return (_n_s_11608/_n_n_11609);

}
}

double _n_clamp_11544(double _a0){double _n_v_11613=_a0;
return (d::truth((_n_v_11613<0.0))?0.0:(d::truth((_n_v_11613>1.0))?1.0:_n_v_11613));}

double _n_smooth_11545(double _a0,double _a1,double _a2){double _n_a_11614=_a0;
double _n_b_11615=_a1;
double _n_v_11616=_a2;
{
double _n_k_11617=_n_clamp_11544(((_n_v_11616-_n_a_11614)/(_n_b_11615-_n_a_11614)));
return ((_n_k_11617*_n_k_11617)*(3.0-(2.0*_n_k_11617)));

}
}

double _n_mix_11546(double _a0,double _a1,double _a2){double _n_a_11618=_a0;
double _n_b_11619=_a1;
double _n_k_11620=_a2;
return (_n_a_11618+((_n_b_11619-_n_a_11618)*_n_k_11620));}

d::Array<double,false> _n_hex_11547(d::String _a0){d::String _n_s_11621=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_11622=_a0;
return (([&](){auto _n_argument_11896=d::slice(_n_s_11621,_n_i_11622,(_n_i_11622+2.0));auto _n_argument_11897=16.0;return d::parseInt(_n_argument_11896,_n_argument_11897);})()/255.0);});}

double _n_wlF_11548(double _a0){double _n_x_11623=_a0;
return (d::truth((_n_x_11623<_n_SHORE_11522))?_n_HZ_11520:_n_FAR_11521);}

double _n_ridgeF_11549(double _a0){double _n_x_11624=_a0;
return ((23.0+(30.0*std::pow(((_n_x_11624-50.0)/92.0),2.0)))+(3.0*(_n_fbm_11543((_n_x_11624*0.08),1.3,3.0,0.0)-0.5)));}

double _n_hillsF_11550(double _a0){double _n_x_11625=_a0;
return ([&](){auto _n_left_11898=(50.0-(7.0*_n_fbm_11543((_n_x_11625*0.022),4.1,3.0,0.0)));auto _n_right_11899=(3.0*_n_smooth_11545(120.0,175.0,_n_x_11625));return (_n_left_11898-_n_right_11899);})();}

d::Array<double,false> _n_skyAt_11551(double _a0,double _a1){double _n_x_11626=_a0;
double _n_y_11627=_a1;
{
double _n_v_11628=_n_clamp_11544((_n_y_11627/_n_FAR_11521));
double _n_dmx_11629=(_n_x_11626-d::at(_n_MOON_11523,0.0));
double _n_dmy_11630=(_n_y_11627-d::at(_n_MOON_11523,1.0));
double _n_halo_11631=(std::exp(((-d::number(std::sqrt(((_n_dmx_11629*_n_dmx_11629)+(_n_dmy_11630*_n_dmy_11630)))))/14.0))*0.16);
double _n_city_11632=([&](){auto _n_left_11900=std::exp(((-d::number(d::maximum({0.0,(_n_FAR_11521-_n_y_11627)})))/7.0));auto _n_right_11901=(0.05+(0.05*_n_smooth_11545(130.0,175.0,_n_x_11626)));return (_n_left_11900*_n_right_11901);})();
return d::Array<double,false>{(((0.03+((0.08*_n_v_11628)*_n_v_11628))+(0.7*_n_halo_11631))+(_n_city_11632*0.9)),(((0.045+((0.12*_n_v_11628)*_n_v_11628))+(0.8*_n_halo_11631))+(_n_city_11632*0.6)),(((0.15+(0.24*std::pow(_n_v_11628,1.5)))+_n_halo_11631)+(_n_city_11632*0.35))};

}
}

struct Native_gangaur_ghat final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_11552{};
double _n_STAR_11553{};
double _n_N_11554{};
d::Array<d::String,false> _n_out_11555{};
d::Array<uint8_t,true> _n_lut_11556{};
d::Array<uint8_t,true> _n_mat_11558{};
d::Array<float,true> _n_sR_11559{};
d::Array<float,true> _n_sG_11560{};
d::Array<float,true> _n_sB_11561{};
d::Array<float,true> _n_flo_11562{};
d::Array<d::Array<double,false>,false> _n_bulbs_11564{};
d::Array<std::array<double,5>,false> _n_blds_11565{};
double _n_TX_11568{};
double _n_TB_11569{};
double _n_TH_11570{};
double _n_TW_11571{};
double _n_G0_11572{};
double _n_G1_11573{};
double _n_GT_11574{};
double _n_GB_11575{};
d::Array<d::Array<double,false>,false> _n_arches_11576{};
d::Array<d::Array<double,false>,false> _n_wings_11578{};
d::Array<d::Array<double,false>,false> _n_strands_11579{};
d::Array<std::array<double,5>,false> _n_diyas_11580{};
d::Array<d::Array<float,true>,false> _n_dyn_11581{};
d::Array<float,true> _n_dref_11582{};
std::function<d::String(double,std::shared_ptr<_n_Record_11890>)> _render;
double _n_nearest_11557(double _a0,double _a1,double _a2){double _n_r_11633=_a0;
double _n_g_11634=_a1;
double _n_b_11635=_a2;
{
double _n_k_11636=([&](){auto _n_left_12020=([&](){auto _n_left_12022=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_11633*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_12023=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_11634*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_12022)|d::i32(_n_right_12023));})();auto _n_right_12021=d::minimum({31.0,double(d::i32((_n_b_11635*31.99))|d::i32(0.0))});return double(d::i32(_n_left_12020)|d::i32(_n_right_12021));})();
if(d::truth((d::at(this->_n_lut_11556,_n_k_11636)!=255.0))){d::check_cancel();return d::at(this->_n_lut_11556,_n_k_11636);
}
double _n_best_11637=0.0;
double _n_bd_11638=1000000000.0;
{double _n_i_11639=0.0;
for(;d::truth((_n_i_11639<this->_n_STAR_11553));(void)((_n_i_11639++))){d::check_cancel();double _n_dr_11640=(d::at(d::at(this->_n_P_11552,_n_i_11639),0.0)-_n_r_11633);
double _n_dg_11641=(d::at(d::at(this->_n_P_11552,_n_i_11639),1.0)-_n_g_11634);
double _n_db_11642=(d::at(d::at(this->_n_P_11552,_n_i_11639),2.0)-_n_b_11635);
double _n_d_11643=((((0.3*_n_dr_11640)*_n_dr_11640)+((0.5*_n_dg_11641)*_n_dg_11641))+((0.2*_n_db_11642)*_n_db_11642));
if(d::truth((_n_d_11643<_n_bd_11638))){d::check_cancel();(void)(((_n_bd_11638=_n_d_11643),(_n_best_11637=_n_i_11639)));
}
}}
return ([&](){auto&& _n_array_12024=this->_n_lut_11556;auto _n_index_12025=_n_k_11636;auto _n_value_12026=_n_best_11637;d::put(_n_array_12024,_n_index_12025,_n_value_12026);return _n_value_12026;})();

}
}

void _n_set_11563(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_k_11644=_a0;
double _n_m_11645=_a1;
double _n_r_11646=_a2;
double _n_g_11647=_a3;
double _n_b_11648=_a4;
double _n_f_11649=_a5;
{
(void)(((((([&](){auto&& _n_array_12027=this->_n_mat_11558;auto _n_index_12028=_n_k_11644;auto _n_value_12029=_n_m_11645;d::put(_n_array_12027,_n_index_12028,_n_value_12029);return _n_value_12029;})(),([&](){auto&& _n_array_12030=this->_n_sR_11559;auto _n_index_12031=_n_k_11644;auto _n_value_12032=_n_r_11646;d::put(_n_array_12030,_n_index_12031,_n_value_12032);return _n_value_12032;})()),([&](){auto&& _n_array_12033=this->_n_sG_11560;auto _n_index_12034=_n_k_11644;auto _n_value_12035=_n_g_11647;d::put(_n_array_12033,_n_index_12034,_n_value_12035);return _n_value_12035;})()),([&](){auto&& _n_array_12036=this->_n_sB_11561;auto _n_index_12037=_n_k_11644;auto _n_value_12038=_n_b_11648;d::put(_n_array_12036,_n_index_12037,_n_value_12038);return _n_value_12038;})()),([&](){auto&& _n_array_12039=this->_n_flo_11562;auto _n_index_12040=_n_k_11644;auto _n_value_12041=_n_f_11649;d::put(_n_array_12039,_n_index_12040,_n_value_12041);return _n_value_12041;})()));

}
}

d::Array<double,false> _n_keepOut_11566(double _a0){double _n_yb_11661=_a0;
{
if(d::truth((_n_yb_11661<=41.0))){d::check_cancel();return d::Array<double,false>{999.0,(-d::number(999.0))};
}
return d::Array<double,false>{(50.0-((_n_yb_11661-41.0)*0.55)),(100.0+((_n_yb_11661-41.0)*0.55))};

}
}

void _n_pane_11567(double _a0,double _a1,double _a2){double _n_k_11674=_a0;
double _n_seed_11675=_a1;
double _n_near_11676=_a2;
{
if(d::truth((_n_hash_11541(double(d::i32((_n_seed_11675*997.0))|d::i32(0.0)),_n_k_11674)<0.36))){d::check_cancel();bool _n_cream_11677=(_n_hash_11541(_n_k_11674,3.0)<0.4);
(void)(this->_n_set_11563(_n_k_11674,_n_BLD_11534,(d::truth(_n_cream_11677)?1.0:0.95),(d::truth(_n_cream_11677)?0.86:0.66),(d::truth(_n_cream_11677)?0.6:0.3),0.14));
}else {d::check_cancel();(void)(this->_n_set_11563(_n_k_11674,_n_BLD_11534,(0.07+(0.03*_n_near_11676)),(0.08+(0.03*_n_near_11676)),0.19,0.12));
}

}
}

double _n_archIn_11577(double _a0,double _a1){double _n_xc_11724=_a0;
double _n_y_11725=_a1;
{
double _n_best_11726=(-d::number(9.0));
for(auto &&_n_item_12042:this->_n_arches_11576){d::check_cancel();auto _n_binding_12043=_n_item_12042;
double _n_cx_11727=d::at(_n_binding_12043,0.0);
double _n_hw_11728=d::at(_n_binding_12043,1.0);
double _n_spring_11729=d::at(_n_binding_12043,2.0);
{
double _n_R_11730=(_n_hw_11728*1.55);
double _n_dx_11731=std::fabs((_n_xc_11724-_n_cx_11727));
double _n_d_11732{};
if(d::truth((_n_y_11725>=_n_spring_11729))){d::check_cancel();(void)((_n_d_11732=d::minimum({(_n_hw_11728-_n_dx_11731),((this->_n_GB_11575-_n_y_11725)+0.5)})));
}else {d::check_cancel();(void)((_n_d_11732=(_n_R_11730-d::hypot(std::initializer_list<double>{(_n_dx_11731+(_n_R_11730-_n_hw_11728)),(_n_y_11725-_n_spring_11729)}))));
}
(void)((_n_best_11726=d::maximum({_n_best_11726,_n_d_11732})));

}
}
return _n_best_11726;

}
}

void _n_addGlow_11583(double _a0,double _a1,double _a2,double _a3,double _a4,d::Array<double,false> _a5){double _n_fx_11807=_a0;
double _n_fy_11808=_a1;
double _n_core_11809=_a2;
double _n_halo_11810=_a3;
double _n_amp_11811=_a4;
d::Array<double,false> _n_c_11812=_a5;
{
double _n_R_11813=std::ceil((_n_halo_11810*3.0));
{double _n_r_11814=([&](){auto _n_argument_12044=0.0;auto _n_argument_12045=std::floor((_n_fy_11808-_n_R_11813));return d::maximum({_n_argument_12044,_n_argument_12045});})();
for(;d::truth((_n_r_11814<d::minimum({_n_H_11519,(_n_fy_11808+_n_R_11813)})));(void)((_n_r_11814++))){d::check_cancel();{double _n_x_11815=([&](){auto _n_argument_12046=0.0;auto _n_argument_12047=std::floor((_n_fx_11807-_n_R_11813));return d::maximum({_n_argument_12046,_n_argument_12047});})();
for(;d::truth((_n_x_11815<d::minimum({_n_W_11518,(_n_fx_11807+_n_R_11813)})));(void)((_n_x_11815++))){d::check_cancel();double _n_k_11816=((_n_r_11814*_n_W_11518)+_n_x_11815);
double _n_dx_11817=((_n_x_11815+0.5)-_n_fx_11807);
double _n_dy_11818=((_n_r_11814+0.5)-_n_fy_11808);
double _n_d_11819=std::sqrt(((_n_dx_11817*_n_dx_11817)+(_n_dy_11818*_n_dy_11818)));
double _n_h_11820=((std::exp((-d::number(std::pow((_n_d_11819/_n_core_11809),2.0))))*1.8)*_n_amp_11811);
double _n_v_11821=((std::exp(((-d::number(_n_d_11819))/_n_halo_11810))*0.3)*_n_amp_11811);
(void)(((([&](){auto&& _n_array_12048=d::at(this->_n_dyn_11581,0.0);auto _n_index_12049=_n_k_11816;auto _n_value_12050=(d::at(_n_array_12048,_n_index_12049)+(_n_h_11820+(_n_v_11821*d::at(_n_c_11812,0.0))));d::put(_n_array_12048,_n_index_12049,_n_value_12050);return _n_value_12050;})(),([&](){auto&& _n_array_12051=d::at(this->_n_dyn_11581,1.0);auto _n_index_12052=_n_k_11816;auto _n_value_12053=(d::at(_n_array_12051,_n_index_12052)+((_n_h_11820*0.88)+(_n_v_11821*d::at(_n_c_11812,1.0))));d::put(_n_array_12051,_n_index_12052,_n_value_12053);return _n_value_12053;})()),([&](){auto&& _n_array_12054=d::at(this->_n_dyn_11581,2.0);auto _n_index_12055=_n_k_11816;auto _n_value_12056=(d::at(_n_array_12054,_n_index_12055)+((_n_h_11820*0.6)+(_n_v_11821*d::at(_n_c_11812,2.0))));d::put(_n_array_12054,_n_index_12055,_n_value_12056);return _n_value_12056;})()));
}}
}}

}
}

void _n_addStreak_11584(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_fx_11822=_a0;
double _n_y0_11823=_a1;
double _n_width_11824=_a2;
double _n_len_11825=_a3;
double _n_amp_11826=_a4;
{
{double _n_r_11827=([&](){auto _n_argument_12057=0.0;auto _n_argument_12058=std::floor(_n_y0_11823);return d::maximum({_n_argument_12057,_n_argument_12058});})();
for(;d::truth((_n_r_11827<_n_H_11519));(void)((_n_r_11827++))){d::check_cancel();double _n_dy_11828=((_n_r_11827+0.5)-_n_y0_11823);
double _n_a_11829=([&](){auto _n_left_12059=(std::exp(((-d::number(_n_dy_11828))/_n_len_11825))*_n_amp_11826);auto _n_right_12060=_n_smooth_11545((-d::number(0.5)),1.0,_n_dy_11828);return (_n_left_12059*_n_right_12060);})();
if(d::truth((_n_a_11829<0.01))){d::check_cancel();break;
}
{double _n_x_11830=([&](){auto _n_argument_12061=0.0;auto _n_argument_12062=std::floor(((_n_fx_11822-(3.0*_n_width_11824))-1.0));return d::maximum({_n_argument_12061,_n_argument_12062});})();
for(;d::truth((_n_x_11830<d::minimum({_n_W_11518,((_n_fx_11822+(3.0*_n_width_11824))+1.0)})));(void)((_n_x_11830++))){d::check_cancel();(void)(([&](){auto&& _n_array_12063=this->_n_dref_11582;auto _n_index_12064=((_n_r_11827*_n_W_11518)+_n_x_11830);auto _n_value_12065=(d::at(_n_array_12063,_n_index_12064)+(_n_a_11829*std::exp((-d::number(std::pow((((_n_x_11830+0.5)-_n_fx_11822)/_n_width_11824),2.0))))));d::put(_n_array_12063,_n_index_12064,_n_value_12065);return _n_value_12065;})());
}}
}}

}
}

explicit Native_gangaur_ghat(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_11552=d::map(_n_meta_11516->_p_palette,_n_hex_11547);
this->_n_STAR_11553=(double(this->_n_P_11552.size())-1.0);
this->_n_N_11554=(_n_W_11518*_n_H_11519);
this->_n_out_11555=d::Array<d::String,false>(size_t(this->_n_N_11554));
this->_n_lut_11556=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_11558=d::Array<uint8_t,true>(size_t(this->_n_N_11554));
this->_n_sR_11559=d::Array<float,true>(size_t(this->_n_N_11554));
this->_n_sG_11560=d::Array<float,true>(size_t(this->_n_N_11554));
this->_n_sB_11561=d::Array<float,true>(size_t(this->_n_N_11554));
this->_n_flo_11562=d::Array<float,true>(size_t(this->_n_N_11554));
this->_n_bulbs_11564=d::Array<d::Array<double,false>,false>{};
{double _n_r_11650=0.0;
for(;d::truth((_n_r_11650<_n_H_11519));(void)((_n_r_11650++))){d::check_cancel();{double _n_x_11651=0.0;
for(;d::truth((_n_x_11651<_n_W_11518));(void)((_n_x_11651++))){d::check_cancel();double _n_k_11652=((_n_r_11650*_n_W_11518)+_n_x_11651);
double _n_xc_11653=(_n_x_11651+0.5);
double _n_y_11654=(_n_r_11650+0.5);
if(d::truth((_n_y_11654>=_n_wlF_11548(_n_xc_11653)))){d::check_cancel();(void)(this->_n_set_11563(_n_k_11652,_n_WATER_11532,0.0,0.0,0.0,0.12));
continue;
}
auto _n_binding_11902=_n_skyAt_11551(_n_xc_11653,_n_y_11654);
double _n_cr_11655=d::at(_n_binding_11902,0.0);
double _n_cg_11656=d::at(_n_binding_11902,1.0);
double _n_cb_11657=d::at(_n_binding_11902,2.0);
double _n_veil_11658=(0.92+(0.16*_n_fbm_11543((_n_x_11651*0.04),(_n_r_11650*0.09),3.0,0.0)));
(void)(this->_n_set_11563(_n_k_11652,_n_SKY_11531,(_n_cr_11655*_n_veil_11658),(_n_cg_11656*_n_veil_11658),(_n_cb_11657*_n_veil_11658),0.18));
double _n_dm_11659=d::hypot(std::initializer_list<double>{(_n_xc_11653-d::at(_n_MOON_11523,0.0)),(_n_y_11654-d::at(_n_MOON_11523,1.0))});
if((d::truth((_n_dm_11659<3.7))&&d::truth((d::hypot(std::initializer_list<double>{((_n_xc_11653-d::at(_n_MOON_11523,0.0))+1.7),((_n_y_11654-d::at(_n_MOON_11523,1.0))+0.9)})>3.4)))){d::check_cancel();(void)(this->_n_set_11563(_n_k_11652,_n_MOONM_11540,1.0,0.97,0.86,0.2));
}
if((d::truth((_n_y_11654>=_n_hillsF_11550(_n_xc_11653)))&&d::truth((_n_xc_11653>96.0)))){d::check_cancel();double _n_s_11660=(0.85+(0.3*_n_fbm_11543((_n_x_11651*0.15),(_n_r_11650*0.2),2.0,0.0)));
(void)(this->_n_set_11563(_n_k_11652,_n_HILL_11539,(0.045*_n_s_11660),(0.06*_n_s_11660),(0.14*_n_s_11660),0.1));
}
if((d::truth((_n_xc_11653<_n_SHORE_11522))&&d::truth((_n_y_11654>=_n_ridgeF_11549(_n_xc_11653))))){d::check_cancel();(void)(this->_n_set_11563(_n_k_11652,_n_TOWN_11533,0.06,0.07,0.16,0.1));
if((d::truth((_n_hash_11541(((_n_x_11651*5.0)+1.0),(_n_r_11650*9.0))<0.035))&&d::truth((_n_y_11654>(_n_ridgeF_11549(_n_xc_11653)+2.0))))){d::check_cancel();(void)(this->_n_set_11563(_n_k_11652,_n_TOWN_11533,0.75,0.48,0.2,0.1));
}
}
}}
}}
this->_n_blds_11565=d::Array<std::array<double,5>,false>{};
{double _n_yb_11662=27.0;
double _n_row_11663=0.0;
for(;d::truth((_n_yb_11662<=_n_HZ_11520));(void)(((_n_yb_11662=(_n_yb_11662+2.7)),(_n_row_11663++)))){d::check_cancel();double _n_base_11664=(d::truth((_n_yb_11662>(_n_HZ_11520-2.7)))?_n_HZ_11520:_n_yb_11662);
bool _n_front_11665=(_n_base_11664==_n_HZ_11520);
double _n_sc_11666=(0.7+((0.55*(_n_base_11664-27.0))/(_n_HZ_11520-27.0)));
{double _n_x_11667=((-d::number(3.0))+(_n_hash_11541(_n_row_11663,1.0)*6.0));
for(;d::truth((_n_x_11667<_n_SHORE_11522));){d::check_cancel();double _n_w_11668=((5.0+(9.0*_n_hash_11541(double(d::i32(_n_x_11667)|d::i32(0.0)),((_n_row_11663*3.0)+2.0))))*_n_sc_11666);
double _n_h_11669=((d::truth(_n_front_11665)?(9.0+(8.0*_n_hash_11541(double(d::i32(_n_x_11667)|d::i32(0.0)),(_n_row_11663+50.0)))):(4.5+(6.0*_n_hash_11541(double(d::i32(_n_x_11667)|d::i32(0.0)),((_n_row_11663*3.0)+4.0)))))*_n_sc_11666);
double _n_x1_11670=d::minimum({(_n_SHORE_11522+(d::truth(_n_front_11665)?1.0:0.0)),(_n_x_11667+_n_w_11668)});
auto _n_binding_11903=this->_n_keepOut_11566(_n_base_11664);
double _n_ko0_11671=d::at(_n_binding_11903,0.0);
double _n_ko1_11672=d::at(_n_binding_11903,1.0);
double _n_mid_11673=((_n_x_11667+_n_x1_11670)/2.0);
if((d::truth((_n_base_11664>(_n_ridgeF_11549(_n_mid_11673)+(_n_h_11669*0.6))))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_11904=(_n_x1_11670>_n_ko0_11671);return d::truth(_n_logical_11904)?(_n_x_11667<_n_ko1_11672):_n_logical_11904;})()))))){d::check_cancel();(void)(this->_n_blds_11565.push(std::array<double,5>{_n_x_11667,_n_x1_11670,(_n_base_11664-_n_h_11669),_n_base_11664,_n_hash_11541(double(d::i32(_n_x_11667)|d::i32(0.0)),((_n_row_11663*7.0)+9.0))}));
}
(void)((_n_x_11667=(_n_x_11667+(_n_w_11668+(d::truth(_n_front_11665)?0.0:(_n_hash_11541(double(d::i32(_n_x_11667)|d::i32(0.0)),(_n_row_11663+20.0))*2.5))))));
}}
}}
(void)(this->_n_blds_11565.sort([=]( std::array<double,5> _a0,std::array<double,5> _a1) mutable ->double{auto&& _n_a_11678=_a0;
auto&& _n_b_11679=_a1;
return (d::at(_n_a_11678,3.0)-d::at(_n_b_11679,3.0));}));
(void)(d::forEach(this->_n_blds_11565,[&]( std::array<double,5> _a0,double _a1) mutable ->void{auto _n_binding_11905=_a0;
double _n_x0_11680=d::at(_n_binding_11905,0.0);
double _n_x1_11681=d::at(_n_binding_11905,1.0);
double _n_top_11682=d::at(_n_binding_11905,2.0);
double _n_base_11683=d::at(_n_binding_11905,3.0);
double _n_sd_11684=d::at(_n_binding_11905,4.0);
double _n_bi_11685=_a1;
{
double _n_sc_11686=(0.7+((0.55*(_n_base_11683-27.0))/(_n_HZ_11520-27.0)));
double _n_depth_11687=(1.0-((_n_base_11683-27.0)/(_n_HZ_11520-27.0)));
double _n_style_11688=(d::truth((_n_sd_11684<0.3))?1.0:(d::truth((_n_sd_11684<0.55))?0.0:(d::truth((_n_sd_11684<0.75))?3.0:2.0)));
double _n_mid_11689=((_n_x0_11680+_n_x1_11681)/2.0);
double _n_tw_11690=((_n_x1_11681-_n_x0_11680)*0.55);
double _n_cw_11691=d::maximum({1.6,(1.8*_n_sc_11686)});
{double _n_r_11692=std::floor((_n_top_11682-(5.0*_n_sc_11686)));
for(;d::truth((_n_r_11692<_n_base_11683));(void)((_n_r_11692++))){d::check_cancel();if(d::truth((_n_r_11692<0.0))){d::check_cancel();continue;
}
{double _n_x_11693=std::floor(_n_x0_11680);
for(;d::truth((_n_x_11693<_n_x1_11681));(void)((_n_x_11693++))){d::check_cancel();if((d::truth((_n_x_11693<0.0))||d::truth((_n_x_11693>=_n_W_11518)))){d::check_cancel();continue;
}
double _n_k_11694=((_n_r_11692*_n_W_11518)+_n_x_11693);
double _n_xc_11695=(_n_x_11693+0.5);
double _n_y_11696=(_n_r_11692+0.5);
bool _n_inside_11697=(_n_y_11696>=_n_top_11682);
double _n_part_11698=0.0;
if(d::truth((!d::truth(_n_inside_11697)))){d::check_cancel();if(((d::truth((_n_style_11688==0.0))&&d::truth((_n_y_11696>=(_n_top_11682-1.0))))&&d::truth((double(d::i32(_n_x_11693)&d::i32(1.0))==0.0)))){d::check_cancel();(void)(((_n_inside_11697=true),(_n_part_11698=1.0)));
}
if(d::truth((_n_style_11688==1.0))){d::check_cancel();double _n_dx_11699=(std::fabs((_n_xc_11695-_n_mid_11689))/_n_cw_11691);
double _n_dy_11700=((_n_top_11682-(1.5*_n_sc_11686))-_n_y_11696);
if(((d::truth((_n_dx_11699<1.0))&&d::truth((_n_dy_11700>=0.0)))&&d::truth((_n_dy_11700<((2.2*_n_sc_11686)*std::sqrt((1.0-(_n_dx_11699*_n_dx_11699)))))))){d::check_cancel();(void)(((_n_inside_11697=true),(_n_part_11698=1.0)));
}
if(((d::truth((_n_dx_11699<1.15))&&d::truth((_n_y_11696>=((_n_top_11682-(1.5*_n_sc_11686))-0.6))))&&d::truth((_n_y_11696<((_n_top_11682-(1.5*_n_sc_11686))+0.4))))){d::check_cancel();(void)(((_n_inside_11697=true),(_n_part_11698=1.0)));
}
if((d::truth(([&]()->bool{auto _n_logical_11906=(std::fabs((_n_dx_11699-0.85))<0.25);return d::truth(_n_logical_11906)?_n_logical_11906:(std::fabs(_n_dx_11699)<0.15);})())&&d::truth((_n_y_11696>=(_n_top_11682-(1.5*_n_sc_11686)))))){d::check_cancel();(void)(((_n_inside_11697=true),(_n_part_11698=1.0)));
}
if(((d::truth((_n_dx_11699<0.2))&&d::truth((_n_dy_11700>=(2.2*_n_sc_11686))))&&d::truth((_n_dy_11700<((2.2*_n_sc_11686)+1.0))))){d::check_cancel();(void)(((_n_inside_11697=true),(_n_part_11698=1.0)));
}
}
if(((d::truth((_n_style_11688==3.0))&&d::truth((std::fabs((_n_xc_11695-_n_mid_11689))<(_n_tw_11690/2.0))))&&d::truth((_n_y_11696>=(_n_top_11682-(3.5*_n_sc_11686)))))){d::check_cancel();(void)(((_n_inside_11697=true),(_n_part_11698=2.0)));
}
}
if(d::truth((!d::truth(_n_inside_11697)))){d::check_cancel();continue;
}
double _n_fy_11701=((_n_y_11696-_n_top_11682)/d::maximum({1.0,(_n_base_11683-_n_top_11682)}));
double _n_l_11702=((0.7+(0.45*_n_sd_11684))*(0.95-(0.3*_n_fy_11701)));
if(d::truth((_n_xc_11695<((_n_x0_11680+1.2)+(d::truth((_n_sc_11686>1.0))?1.0:0.0))))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*0.36)));
}else {d::check_cancel();if(d::truth((_n_xc_11695>(_n_x1_11681-1.0)))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*1.12)));
}
}
if((d::truth((_n_part_11698==0.0))&&d::truth((_n_y_11696<(_n_top_11682+1.0))))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*1.25)));
}else {d::check_cancel();if(((d::truth((_n_part_11698==0.0))&&d::truth((_n_y_11696<(_n_top_11682+2.0))))&&d::truth((_n_style_11688!=3.0)))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*0.6)));
}
}
if((d::truth((_n_part_11698==0.0))&&d::truth((_n_y_11696>(_n_base_11683-1.0))))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*0.6)));
}
if(d::truth((_n_part_11698==1.0))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*0.95)));
}
if((d::truth((_n_part_11698==2.0))&&d::truth((_n_xc_11695<((_n_mid_11689-(_n_tw_11690/2.0))+1.0))))){d::check_cancel();(void)((_n_l_11702=(_n_l_11702*0.5)));
}
double _n_hz_11703=(0.4*_n_depth_11687);
double _n_cr_11704=_n_mix_11546((0.6*_n_l_11702),0.12,_n_hz_11703);
double _n_cg_11705=_n_mix_11546((0.67*_n_l_11702),0.17,_n_hz_11703);
double _n_cb_11706=_n_mix_11546((0.84*_n_l_11702),0.38,_n_hz_11703);
(void)(this->_n_set_11563(_n_k_11694,_n_BLD_11534,_n_cr_11704,_n_cg_11705,_n_cb_11706,0.14));
if(((((d::truth((_n_part_11698==0.0))&&d::truth((_n_y_11696>(_n_top_11682+2.0))))&&d::truth((_n_y_11696<(_n_base_11683-1.0))))&&d::truth((_n_xc_11695>(_n_x0_11680+1.5))))&&d::truth((_n_xc_11695<(_n_x1_11681-1.0))))){d::check_cancel();double _n_lx_11707=std::floor((_n_xc_11695-_n_x0_11680));
double _n_ly_11708=std::floor((_n_base_11683-_n_y_11696));
if(d::truth((_n_sc_11686>1.05))){d::check_cancel();if(((d::truth((d::mod(_n_lx_11707,3.0)==1.0))&&d::truth((d::mod(_n_ly_11708,4.0)>=1.0)))&&d::truth((d::mod(_n_ly_11708,4.0)<=2.0)))){d::check_cancel();(void)(this->_n_pane_11567(_n_k_11694,((_n_sd_11684*1000.0)+_n_bi_11685),(1.0-_n_depth_11687)));
}
}else {d::check_cancel();if((d::truth((d::mod(_n_lx_11707,3.0)==1.0))&&d::truth((d::mod(_n_ly_11708,3.0)==1.0)))){d::check_cancel();(void)(this->_n_pane_11567(_n_k_11694,((_n_sd_11684*1000.0)+_n_bi_11685),(1.0-_n_depth_11687)));
}
}
}
if(((((d::truth((_n_part_11698==2.0))&&d::truth((_n_y_11696>(_n_top_11682-(2.2*_n_sc_11686)))))&&d::truth((_n_y_11696<(_n_top_11682-0.8))))&&d::truth((std::fabs((_n_xc_11695-_n_mid_11689))<((_n_tw_11690/2.0)-1.0))))&&d::truth((d::mod(std::floor(_n_xc_11695),2.0)==0.0)))){d::check_cancel();(void)(this->_n_pane_11567(_n_k_11694,(((_n_sd_11684*1000.0)+_n_bi_11685)+5.0),(1.0-_n_depth_11687)));
}
}}
}}
if((d::truth((_n_base_11683>40.0))&&d::truth((_n_hash_11541(_n_bi_11685,71.0)<0.55)))){d::check_cancel();{double _n_x_11709=(_n_x0_11680+1.0);
for(;d::truth((_n_x_11709<(_n_x1_11681-0.5)));(void)((_n_x_11709=(_n_x_11709+2.0)))){d::check_cancel();(void)(this->_n_bulbs_11564.push(d::Array<double,false>{_n_x_11709,(_n_top_11682-(d::truth((_n_style_11688==0.0))?1.5:0.5)),(_n_hash_11541(double(d::i32(_n_x_11709)|d::i32(0.0)),_n_bi_11685)*40.0)}));
}}
}

}
}));
this->_n_TX_11568=38.0;
this->_n_TB_11569=33.0;
this->_n_TH_11570=19.0;
this->_n_TW_11571=5.5;
{double _n_r_11710=std::floor(((this->_n_TB_11569-this->_n_TH_11570)-3.0));
for(;d::truth((_n_r_11710<(this->_n_TB_11569+4.0)));(void)((_n_r_11710++))){d::check_cancel();{double _n_x_11711=std::floor((this->_n_TX_11568-12.0));
for(;d::truth((_n_x_11711<(this->_n_TX_11568+12.0)));(void)((_n_x_11711++))){d::check_cancel();double _n_k_11712=((_n_r_11710*_n_W_11518)+_n_x_11711);
double _n_xc_11713=(_n_x_11711+0.5);
double _n_y_11714=(_n_r_11710+0.5);
double _n_h_11715=(this->_n_TB_11569-_n_y_11714);
double _n_dx_11716=(_n_xc_11713-this->_n_TX_11568);
double _n_f_11717=(_n_h_11715/this->_n_TH_11570);
double _n_hw_11718=((d::truth((_n_f_11717<=1.0))&&d::truth((_n_f_11717>=0.0)))?(this->_n_TW_11571*([&](){auto _n_argument_11907=([&](){auto _n_argument_11908=0.0;auto _n_argument_11909=(1.0-std::pow(_n_f_11717,1.7));return d::maximum({_n_argument_11908,_n_argument_11909});})();auto _n_argument_11910=0.55;return std::pow(_n_argument_11907,_n_argument_11910);})()):(-d::number(1.0)));
if((d::truth((_n_f_11717>0.9))&&d::truth((_n_f_11717<1.03)))){d::check_cancel();(void)((_n_hw_11718=d::maximum({_n_hw_11718,(this->_n_TW_11571*0.4)})));
}
if((d::truth((_n_f_11717>=1.03))&&d::truth((_n_h_11715<(this->_n_TH_11570+2.2))))){d::check_cancel();(void)((_n_hw_11718=0.6));
}
if((d::truth((_n_h_11715<0.0))&&d::truth((_n_h_11715>(-d::number(4.0)))))){d::check_cancel();(void)((_n_hw_11718=(this->_n_TW_11571*1.25)));
}
double _n_md_11719=d::hypot(std::initializer_list<double>{((_n_xc_11713-(this->_n_TX_11568+8.0))/4.2),((_n_y_11714-(this->_n_TB_11569-2.0))/3.4)});
bool _n_inM_11720=([&]()->bool{auto _n_logical_11911=([&]()->bool{auto _n_logical_11914=(_n_md_11719<1.0);return d::truth(_n_logical_11914)?(_n_y_11714<(this->_n_TB_11569-2.0)):_n_logical_11914;})();return d::truth(_n_logical_11911)?_n_logical_11911:([&]()->bool{auto _n_logical_11912=([&]()->bool{auto _n_logical_11913=(std::fabs((_n_xc_11713-(this->_n_TX_11568+8.0)))<4.6);return d::truth(_n_logical_11913)?(_n_y_11714>=(this->_n_TB_11569-2.0)):_n_logical_11913;})();return d::truth(_n_logical_11912)?(_n_y_11714<(this->_n_TB_11569+4.0)):_n_logical_11912;})();})();
if((d::truth((std::fabs(_n_dx_11716)<=_n_hw_11718))||d::truth(_n_inM_11720))){d::check_cancel();double _n_rib_11721=(d::truth((std::fabs(_n_dx_11716)<(_n_hw_11718*0.3)))?1.08:(d::truth((_n_dx_11716<0.0))?0.62:0.95));
double _n_course_11722=((d::truth((!d::truth(_n_inM_11720)))&&d::truth(d::mod(std::floor((_n_h_11715/1.5)),2.0)))?0.85:1.0);
double _n_l_11723=((_n_rib_11721*_n_course_11722)*(d::truth(_n_inM_11720)?(d::truth((_n_xc_11713<(this->_n_TX_11568+6.0)))?0.65:0.9):1.0));
(void)(this->_n_set_11563(_n_k_11712,_n_BLD_11534,(0.72*_n_l_11723),(0.77*_n_l_11723),(0.9*_n_l_11723),0.14));
}
if((((d::truth((_n_h_11715>(this->_n_TH_11570+1.6)))&&d::truth((_n_h_11715<(this->_n_TH_11570+3.8))))&&d::truth((_n_dx_11716>0.4)))&&d::truth((_n_dx_11716<(3.0-(((_n_h_11715-this->_n_TH_11570)-1.6)*0.3)))))){d::check_cancel();(void)(this->_n_set_11563(_n_k_11712,_n_BLD_11534,0.85,0.45,0.2,0.1));
}
}}
}}
this->_n_G0_11572=53.0;
this->_n_G1_11573=97.0;
this->_n_GT_11574=38.0;
this->_n_GB_11575=57.0;
this->_n_arches_11576=d::Array<d::Array<double,false>,false>{d::Array<double,false>{_n_GX_11524,6.0,51.5},d::Array<double,false>{(_n_GX_11524-14.5),4.2,53.0},d::Array<double,false>{(_n_GX_11524+14.5),4.2,53.0}};
{double _n_r_11733=24.0;
for(;d::truth((_n_r_11733<(this->_n_GB_11575+1.0)));(void)((_n_r_11733++))){d::check_cancel();{double _n_x_11734=(this->_n_G0_11572-2.0);
for(;d::truth((_n_x_11734<(this->_n_G1_11573+2.0)));(void)((_n_x_11734++))){d::check_cancel();double _n_k_11735=((_n_r_11733*_n_W_11518)+_n_x_11734);
double _n_xc_11736=(_n_x_11734+0.5);
double _n_y_11737=(_n_r_11733+0.5);
bool _n_inside_11738=([&]()->bool{auto _n_logical_11915=([&]()->bool{auto _n_logical_11916=([&]()->bool{auto _n_logical_11917=(_n_xc_11736>=this->_n_G0_11572);return d::truth(_n_logical_11917)?(_n_xc_11736<this->_n_G1_11573):_n_logical_11917;})();return d::truth(_n_logical_11916)?(_n_y_11737>=this->_n_GT_11574):_n_logical_11916;})();return d::truth(_n_logical_11915)?(_n_y_11737<this->_n_GB_11575):_n_logical_11915;})();
double _n_l_11739=1.0;
bool _n_dome_11740=false;
if((((d::truth((_n_xc_11736>=(this->_n_G0_11572-1.0)))&&d::truth((_n_xc_11736<(this->_n_G1_11573+1.0))))&&d::truth((_n_y_11737>=this->_n_GT_11574)))&&d::truth((_n_y_11737<(this->_n_GT_11574+1.2))))){d::check_cancel();(void)(((_n_inside_11738=true),(_n_l_11739=1.1)));
}
if((d::truth((_n_y_11737>=(this->_n_GT_11574+1.2)))&&d::truth((_n_y_11737<(this->_n_GT_11574+2.2))))){d::check_cancel();(void)((_n_l_11739=0.55));
}
if((((d::truth((_n_y_11737>=(this->_n_GT_11574-2.0)))&&d::truth((_n_y_11737<this->_n_GT_11574)))&&d::truth((_n_xc_11736>=this->_n_G0_11572)))&&d::truth((_n_xc_11736<this->_n_G1_11573)))){d::check_cancel();(void)(((_n_inside_11738=true),(_n_l_11739=(d::truth(([&]()->bool{auto _n_logical_11918=(d::mod(_n_x_11734,3.0)==0.0);return d::truth(_n_logical_11918)?(_n_y_11737<(this->_n_GT_11574-1.0)):_n_logical_11918;})())?0.5:0.95))));
}
for(auto &&_n_item_11919:d::Array<double,false>{(this->_n_G0_11572+2.5),_n_GX_11524,(this->_n_G1_11573-2.5)}){d::check_cancel();double _n_cx_11741=_n_item_11919;
{
double _n_big_11742=(d::truth((_n_cx_11741==_n_GX_11524))?1.6:1.15);
double _n_dx_11743=(std::fabs((_n_xc_11736-_n_cx_11741))/(2.6*_n_big_11742));
double _n_db_11744=((this->_n_GT_11574-2.0)-(2.4*_n_big_11742));
if(((d::truth((_n_dx_11743<1.0))&&d::truth((_n_y_11737<_n_db_11744)))&&d::truth((_n_y_11737>=(_n_db_11744-((2.8*_n_big_11742)*std::sqrt((1.0-(_n_dx_11743*_n_dx_11743))))))))){d::check_cancel();(void)((((_n_inside_11738=true),(_n_dome_11740=true)),(_n_l_11739=(d::truth((_n_xc_11736<(_n_cx_11741-(1.2*_n_big_11742))))?0.55:1.15))));
}
if(((d::truth((_n_dx_11743<0.18))&&d::truth((_n_y_11737<(_n_db_11744-(2.8*_n_big_11742)))))&&d::truth((_n_y_11737>=((_n_db_11744-(2.8*_n_big_11742))-1.2))))){d::check_cancel();(void)((((_n_inside_11738=true),(_n_dome_11740=true)),(_n_l_11739=1.2)));
}
if(((d::truth((_n_dx_11743<1.18))&&d::truth((_n_y_11737>=_n_db_11744)))&&d::truth((_n_y_11737<(_n_db_11744+0.8))))){d::check_cancel();(void)((((_n_inside_11738=true),(_n_dome_11740=true)),(_n_l_11739=1.1)));
}
if(((d::truth((_n_y_11737>=(_n_db_11744+0.8)))&&d::truth((_n_y_11737<(this->_n_GT_11574-2.0))))&&d::truth(([&]()->bool{auto _n_logical_11920=(std::fabs((_n_dx_11743-0.8))<0.2);return d::truth(_n_logical_11920)?_n_logical_11920:(std::fabs((_n_dx_11743+0.8))<0.2);})()))){d::check_cancel();(void)((((_n_inside_11738=true),(_n_dome_11740=true)),(_n_l_11739=0.9)));
}else {d::check_cancel();if(((d::truth((_n_dx_11743<0.6))&&d::truth((_n_y_11737>=(_n_db_11744+0.8))))&&d::truth((_n_y_11737<(this->_n_GT_11574-2.0))))){d::check_cancel();(void)((((_n_inside_11738=true),(_n_dome_11740=true)),(_n_l_11739=0.22)));
}
}

}
}
if(d::truth((!d::truth(_n_inside_11738)))){d::check_cancel();bool _n_rim_11745=([&]()->bool{auto _n_logical_11921=([&]()->bool{auto _n_logical_11922=([&]()->bool{auto _n_logical_11923=(_n_y_11737>=(this->_n_GT_11574-3.0));return d::truth(_n_logical_11923)?(_n_y_11737<(this->_n_GT_11574-2.0)):_n_logical_11923;})();return d::truth(_n_logical_11922)?(_n_xc_11736>=(this->_n_G0_11572-1.0)):_n_logical_11922;})();return d::truth(_n_logical_11921)?(_n_xc_11736<(this->_n_G1_11573+1.0)):_n_logical_11921;})();
for(auto &&_n_item_11924:d::Array<double,false>{(this->_n_G0_11572+2.5),_n_GX_11524,(this->_n_G1_11573-2.5)}){d::check_cancel();double _n_cx_11746=_n_item_11924;
{
double _n_big_11747=(d::truth((_n_cx_11746==_n_GX_11524))?1.6:1.15);
double _n_db_11748=((this->_n_GT_11574-2.0)-(2.4*_n_big_11747));
double _n_dx_11749=(std::fabs((_n_xc_11736-_n_cx_11746))/((2.6*_n_big_11747)+1.2));
if(((d::truth((_n_dx_11749<1.0))&&d::truth((_n_y_11737<(this->_n_GT_11574-2.0))))&&d::truth((_n_y_11737>=(_n_db_11748-(((2.8*_n_big_11747)+1.4)*std::sqrt((1.0-(_n_dx_11749*_n_dx_11749))))))))){d::check_cancel();(void)((_n_rim_11745=true));
}

}
}
if((d::truth(_n_rim_11745)&&d::truth((d::at(this->_n_mat_11558,_n_k_11735)!=_n_SKY_11531)))){d::check_cancel();(void)(this->_n_set_11563(_n_k_11735,_n_TOWN_11533,0.05,0.06,0.14,0.08));
}
continue;
}
double _n_ai_11750=this->_n_archIn_11577(_n_xc_11736,_n_y_11737);
if((d::truth((_n_ai_11750>0.0))&&d::truth((_n_y_11737>=(this->_n_GT_11574+2.0))))){d::check_cancel();double _n_g_11751=(0.07+(0.22*_n_smooth_11545((this->_n_GB_11575-9.0),this->_n_GB_11575,_n_y_11737)));
(void)(this->_n_set_11563(_n_k_11735,_n_ARCH_11536,(_n_g_11751*1.1),(_n_g_11751*0.62),(_n_g_11751*0.32),0.06));
continue;
}
double _n_lift_11752=(d::truth(_n_dome_11740)?0.55:_n_smooth_11545((this->_n_GT_11574-6.0),this->_n_GB_11575,_n_y_11737));
double _n_mould_11753=(((d::truth((_n_ai_11750>(-d::number(1.2))))&&d::truth((_n_ai_11750<=0.0)))&&d::truth((_n_y_11737>=(this->_n_GT_11574+2.0))))?1.18:1.0);
double _n_pil_11754=((d::truth((std::fabs((_n_xc_11736-(_n_GX_11524-8.3)))<1.0))||d::truth((std::fabs((_n_xc_11736-(_n_GX_11524+8.3)))<1.0)))?1.1:1.0);
double _n_b_11755=(((_n_l_11739*_n_mould_11753)*_n_pil_11754)*(0.62+(0.42*_n_lift_11752)));
(void)(([&](){auto _n_argument_11925=_n_k_11735;auto _n_argument_11926=_n_GATE_11535;auto _n_argument_11927=(_n_mix_11546(0.74,0.98,_n_lift_11752)*_n_b_11755);auto _n_argument_11928=(_n_mix_11546(0.62,0.74,_n_lift_11752)*_n_b_11755);auto _n_argument_11929=(_n_mix_11546(0.58,0.46,_n_lift_11752)*_n_b_11755);auto _n_argument_11930=0.16;return this->_n_set_11563(_n_argument_11925,_n_argument_11926,_n_argument_11927,_n_argument_11928,_n_argument_11929,_n_argument_11930);})());
}}
}}
{double _n_x_11756=(this->_n_G0_11572+0.5);
for(;d::truth((_n_x_11756<this->_n_G1_11573));(void)((_n_x_11756=(_n_x_11756+2.0)))){d::check_cancel();(void)(this->_n_bulbs_11564.push(d::Array<double,false>{_n_x_11756,(this->_n_GT_11574-2.5),(_n_hash_11541(double(d::i32(_n_x_11756)|d::i32(0.0)),333.0)*40.0)}));
}}
for(auto &&_n_item_11931:this->_n_arches_11576){d::check_cancel();auto _n_binding_11932=_n_item_11931;
double _n_cx_11757=d::at(_n_binding_11932,0.0);
double _n_hw_11758=d::at(_n_binding_11932,1.0);
double _n_spring_11759=d::at(_n_binding_11932,2.0);
{
double _n_R_11760=(_n_hw_11758*1.55);
double _n_o_11761=(_n_R_11760-_n_hw_11758);
double _n_Ro_11762=(_n_R_11760+1.2);
double _n_end_11763=std::acos((_n_o_11761/_n_Ro_11762));
double _n_n_11764=([&](){auto _n_argument_11933=2.0;auto _n_argument_11934=d::round(((_n_end_11763*_n_Ro_11762)/2.0));return d::maximum({_n_argument_11933,_n_argument_11934});})();
{double _n_j_11765=0.0;
for(;d::truth((_n_j_11765<_n_n_11764));(void)((_n_j_11765++))){d::check_cancel();double _n_a_11766=((_n_end_11763*_n_j_11765)/_n_n_11764);
for(auto &&_n_item_11935:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_s_11767=_n_item_11935;
(void)(this->_n_bulbs_11564.push(d::Array<double,false>{(_n_cx_11757+(_n_s_11767*((_n_Ro_11762*std::cos(_n_a_11766))-_n_o_11761))),(_n_spring_11759-(_n_Ro_11762*std::sin(_n_a_11766))),(_n_hash_11541(((_n_cx_11757*7.0)+_n_s_11767),_n_j_11765)*40.0)}));
}
}}
(void)(this->_n_bulbs_11564.push(d::Array<double,false>{_n_cx_11757,(_n_spring_11759-(_n_Ro_11762*std::sin(_n_end_11763))),(_n_hash_11541(_n_cx_11757,5.0)*40.0)}));

}
}
{double _n_r_11768=this->_n_GB_11575;
for(;d::truth((_n_r_11768<_n_HZ_11520));(void)((_n_r_11768++))){d::check_cancel();double _n_y_11769=(_n_r_11768+0.5);
double _n_half_11770=(26.0+((_n_y_11769-this->_n_GB_11575)*1.3));
{double _n_x_11771=std::floor((_n_GX_11524-_n_half_11770));
for(;d::truth((_n_x_11771<(_n_GX_11524+_n_half_11770)));(void)((_n_x_11771++))){d::check_cancel();double _n_k_11772=((_n_r_11768*_n_W_11518)+_n_x_11771);
double _n_xc_11773=(_n_x_11771+0.5);
double _n_warm_11774=(std::exp((-d::number(std::pow(((_n_xc_11773-_n_GX_11524)/26.0),2.0))))*(1.0-(0.05*(_n_y_11769-this->_n_GB_11575))));
bool _n_tread_11775=(d::mod((_n_r_11768-this->_n_GB_11575),2.0)==0.0);
double _n_l_11776=((d::truth(_n_tread_11775)?1.0:0.38)*(0.55+(0.45*_n_warm_11774)));
double _n_wet_11777=(d::truth((_n_r_11768>=(_n_HZ_11520-1.0)))?0.6:1.0);
(void)(([&](){auto _n_argument_11936=_n_k_11772;auto _n_argument_11937=_n_STEP_11537;auto _n_argument_11938=((_n_mix_11546(0.42,0.95,_n_warm_11774)*_n_l_11776)*_n_wet_11777);auto _n_argument_11939=((_n_mix_11546(0.47,0.68,_n_warm_11774)*_n_l_11776)*_n_wet_11777);auto _n_argument_11940=((_n_mix_11546(0.62,0.4,_n_warm_11774)*_n_l_11776)*_n_wet_11777);auto _n_argument_11941=0.14;return this->_n_set_11563(_n_argument_11936,_n_argument_11937,_n_argument_11938,_n_argument_11939,_n_argument_11940,_n_argument_11941);})());
}}
}}
this->_n_wings_11578=d::Array<d::Array<double,false>,false>{d::Array<double,false>{147.0,155.0,50.0},d::Array<double,false>{155.0,163.0,48.0},d::Array<double,false>{163.0,171.0,46.5},d::Array<double,false>{171.0,179.0,49.0},d::Array<double,false>{179.0,187.0,45.5},d::Array<double,false>{187.0,195.0,48.0},d::Array<double,false>{195.0,201.0,50.5}};
for(auto &&_n_item_11942:this->_n_wings_11578){d::check_cancel();auto _n_binding_11943=_n_item_11942;
double _n_x0_11778=d::at(_n_binding_11943,0.0);
double _n_x1_11779=d::at(_n_binding_11943,1.0);
double _n_top_11780=d::at(_n_binding_11943,2.0);
{
double _n_mid_11781=((_n_x0_11778+_n_x1_11779)/2.0);
{double _n_r_11782=std::floor((_n_top_11780-5.0));
for(;d::truth((_n_r_11782<_n_FAR_11521));(void)((_n_r_11782++))){d::check_cancel();{double _n_x_11783=std::floor(_n_x0_11778);
for(;(d::truth((_n_x_11783<_n_x1_11779))&&d::truth((_n_x_11783<_n_W_11518)));(void)((_n_x_11783++))){d::check_cancel();double _n_k_11784=((_n_r_11782*_n_W_11518)+_n_x_11783);
double _n_xc_11785=(_n_x_11783+0.5);
double _n_y_11786=(_n_r_11782+0.5);
bool _n_inside_11787=(_n_y_11786>=_n_top_11780);
bool _n_tall_11788=(_n_top_11780<48.0);
if(d::truth(_n_tall_11788)){d::check_cancel();double _n_dx_11789=(std::fabs((_n_xc_11785-_n_mid_11781))/2.2);
if(((d::truth((_n_dx_11789<1.0))&&d::truth((_n_y_11786<_n_top_11780)))&&d::truth((_n_y_11786>=((_n_top_11780-0.8)-(2.4*std::sqrt((1.0-(_n_dx_11789*_n_dx_11789))))))))){d::check_cancel();(void)((_n_inside_11787=true));
}
if(((d::truth((_n_dx_11789<0.25))&&d::truth((_n_y_11786<_n_top_11780)))&&d::truth((_n_y_11786>=(_n_top_11780-4.2))))){d::check_cancel();(void)((_n_inside_11787=true));
}
}
if(d::truth((!d::truth(_n_inside_11787)))){d::check_cancel();continue;
}
double _n_l_11790=(((d::truth((_n_xc_11785<(_n_x0_11778+1.0)))?0.55:1.0)*(d::truth((_n_y_11786<(_n_top_11780+1.0)))?1.15:1.0))*(1.0-(0.35*_n_smooth_11545(_n_top_11780,_n_FAR_11521,_n_y_11786))));
(void)(this->_n_set_11563(_n_k_11784,_n_PALACE_11538,(0.6*_n_l_11790),(0.46*_n_l_11790),(0.32*_n_l_11790),0.14));
if((((d::truth((_n_y_11786>(_n_top_11780+1.5)))&&d::truth((_n_y_11786<(_n_FAR_11521-1.5))))&&d::truth((d::mod((_n_x_11783-std::floor(_n_x0_11778)),3.0)==1.0)))&&d::truth((d::mod((_n_FAR_11521-_n_r_11782),2.0)==0.0)))){d::check_cancel();bool _n_lit_11791=(_n_hash_11541((_n_x_11783*3.0),(_n_r_11782*11.0))<0.75);
if(d::truth(_n_lit_11791)){d::check_cancel();(void)(this->_n_set_11563(_n_k_11784,_n_PALACE_11538,1.0,0.84,0.5,0.14));
}else {d::check_cancel();(void)(this->_n_set_11563(_n_k_11784,_n_PALACE_11538,0.22,0.16,0.14,0.1));
}
}
}}
}}
{double _n_x_11792=(_n_x0_11778+1.5);
for(;d::truth((_n_x_11792<d::minimum({_n_W_11518,(_n_x1_11779-1.0)})));(void)((_n_x_11792=(_n_x_11792+3.0)))){d::check_cancel();(void)(this->_n_bulbs_11564.push(d::Array<double,false>{_n_x_11792,(_n_top_11780+0.5),(_n_hash_11541(double(d::i32(_n_x_11792)|d::i32(0.0)),909.0)*40.0)}));
}}

}
}
this->_n_strands_11579=d::Array<d::Array<double,false>,false>{};
{double _n_i_11793=0.0;
for(;d::truth(((_n_i_11793+1.0)<double(this->_n_blds_11565.size())));(void)((_n_i_11793++))){d::check_cancel();auto&& _n_a_11794=d::at(this->_n_blds_11565,_n_i_11793);
auto&& _n_b_11795=d::at(this->_n_blds_11565,(_n_i_11793+1.0));
if(((d::truth((d::at(_n_a_11794,3.0)==_n_HZ_11520))&&d::truth((d::at(_n_b_11795,3.0)==_n_HZ_11520)))&&d::truth((_n_hash_11541(_n_i_11793,401.0)<0.6)))){d::check_cancel();(void)(this->_n_strands_11579.push(d::Array<double,false>{(d::at(_n_a_11794,1.0)-1.0),(d::at(_n_a_11794,2.0)+0.5),(d::at(_n_b_11795,1.0)-1.0),(d::at(_n_b_11795,2.0)+0.5)}));
}
}}
for(auto &&_n_item_11944:this->_n_strands_11579){d::check_cancel();auto _n_binding_11945=_n_item_11944;
double _n_xa_11796=d::at(_n_binding_11945,0.0);
double _n_ya_11797=d::at(_n_binding_11945,1.0);
double _n_xb_11798=d::at(_n_binding_11945,2.0);
double _n_yb_11799=d::at(_n_binding_11945,3.0);
{
double _n_n_11800=([&](){auto _n_argument_11946=2.0;auto _n_argument_11947=d::round((std::fabs((_n_xb_11798-_n_xa_11796))/2.0));return d::maximum({_n_argument_11946,_n_argument_11947});})();
{double _n_j_11801=0.0;
for(;d::truth((_n_j_11801<=_n_n_11800));(void)((_n_j_11801++))){d::check_cancel();double _n_u_11802=(_n_j_11801/_n_n_11800);
(void)(this->_n_bulbs_11564.push(d::Array<double,false>{_n_mix_11546(_n_xa_11796,_n_xb_11798,_n_u_11802),(_n_mix_11546(_n_ya_11797,_n_yb_11799,_n_u_11802)+(((2.2*4.0)*_n_u_11802)*(1.0-_n_u_11802))),(_n_hash_11541(_n_j_11801,(_n_xa_11796*13.0))*40.0)}));
}}

}
}
this->_n_diyas_11580=d::Array<std::array<double,5>,false>{};
{double _n_i_11803=0.0;
for(;d::truth((_n_i_11803<52.0));(void)((_n_i_11803++))){d::check_cancel();double _n_q_11804=_n_hash_11541(_n_i_11803,61.0);
double _n_y_11805=((_n_HZ_11520+3.0)+(32.0*std::pow(_n_q_11804,0.95)));
double _n_dir_11806=(d::truth((_n_hash_11541(_n_i_11803,65.0)<0.62))?1.0:(-d::number(1.0)));
(void)(this->_n_diyas_11580.push(std::array<double,5>{(_n_hash_11541(_n_i_11803,62.0)*260.0),_n_y_11805,(_n_hash_11541(_n_i_11803,63.0)*50.0),(0.7+(0.5*_n_hash_11541(_n_i_11803,64.0))),_n_dir_11806}));
}}
this->_n_dyn_11581=d::Array<d::Array<float,true>,false>{d::Array<float,true>(size_t(this->_n_N_11554)),d::Array<float,true>(size_t(this->_n_N_11554)),d::Array<float,true>(size_t(this->_n_N_11554))};
this->_n_dref_11582=d::Array<float,true>(size_t(this->_n_N_11554));
_render=[=]( double _a0,std::shared_ptr<_n_Record_11890> _a1) mutable ->d::String{double _n_t_11831=_a0;
auto _n_binding_11950=(d::present(_a1)?_a1:([&](){auto _n_object_11949=std::make_shared<_n_Record_11890>();return _n_object_11949;})());
std::optional<d::Array<uint8_t,true>> _n_color_11832=_n_binding_11950->_p_color;
{
{double _n_c_11833=0.0;
for(;d::truth((_n_c_11833<3.0));(void)((_n_c_11833++))){d::check_cancel();(void)(d::at(this->_n_dyn_11581,_n_c_11833).fill(0.0));
}}
(void)(this->_n_dref_11582.fill(0.0));
for(auto &&_n_item_11951:this->_n_bulbs_11564){d::check_cancel();auto _n_binding_11952=_n_item_11951;
double _n_bx_11834=d::at(_n_binding_11952,0.0);
double _n_by_11835=d::at(_n_binding_11952,1.0);
double _n_ph_11836=d::at(_n_binding_11952,2.0);
{
double _n_x_11837=std::floor(_n_bx_11834);
double _n_r_11838=std::floor(_n_by_11835);
if((((d::truth((_n_x_11837<1.0))||d::truth((_n_x_11837>=(_n_W_11518-1.0))))||d::truth((_n_r_11838<1.0)))||d::truth((_n_r_11838>=(_n_H_11519-1.0))))){d::check_cancel();continue;
}
double _n_v_11839=(0.62+(0.38*std::sin(((_n_t_11831*(1.6+d::mod(_n_ph_11836,1.7)))+_n_ph_11836))));
double _n_k_11840=((_n_r_11838*_n_W_11518)+_n_x_11837);
(void)(((([&](){auto&& _n_array_11953=d::at(this->_n_dyn_11581,0.0);auto _n_index_11954=_n_k_11840;auto _n_value_11955=(d::at(_n_array_11953,_n_index_11954)+(_n_v_11839*d::at(_n_BULB_11530,0.0)));d::put(_n_array_11953,_n_index_11954,_n_value_11955);return _n_value_11955;})(),([&](){auto&& _n_array_11956=d::at(this->_n_dyn_11581,1.0);auto _n_index_11957=_n_k_11840;auto _n_value_11958=(d::at(_n_array_11956,_n_index_11957)+(_n_v_11839*d::at(_n_BULB_11530,1.0)));d::put(_n_array_11956,_n_index_11957,_n_value_11958);return _n_value_11958;})()),([&](){auto&& _n_array_11959=d::at(this->_n_dyn_11581,2.0);auto _n_index_11960=_n_k_11840;auto _n_value_11961=(d::at(_n_array_11959,_n_index_11960)+(_n_v_11839*d::at(_n_BULB_11530,2.0)));d::put(_n_array_11959,_n_index_11960,_n_value_11961);return _n_value_11961;})()));
for(auto &&_n_item_11962:d::Array<double,false>{(-d::number(1.0)),1.0,(-d::number(_n_W_11518)),_n_W_11518}){d::check_cancel();double _n_o_11841=_n_item_11962;
(void)(((([&](){auto&& _n_array_11963=d::at(this->_n_dyn_11581,0.0);auto _n_index_11964=(_n_k_11840+_n_o_11841);auto _n_value_11965=(d::at(_n_array_11963,_n_index_11964)+(0.12*_n_v_11839));d::put(_n_array_11963,_n_index_11964,_n_value_11965);return _n_value_11965;})(),([&](){auto&& _n_array_11966=d::at(this->_n_dyn_11581,1.0);auto _n_index_11967=(_n_k_11840+_n_o_11841);auto _n_value_11968=(d::at(_n_array_11966,_n_index_11967)+(0.08*_n_v_11839));d::put(_n_array_11966,_n_index_11967,_n_value_11968);return _n_value_11968;})()),([&](){auto&& _n_array_11969=d::at(this->_n_dyn_11581,2.0);auto _n_index_11970=(_n_k_11840+_n_o_11841);auto _n_value_11971=(d::at(_n_array_11969,_n_index_11970)+(0.03*_n_v_11839));d::put(_n_array_11969,_n_index_11970,_n_value_11971);return _n_value_11971;})()));
}

}
}
(void)(([&](){auto _n_argument_11972=_n_GX_11524;auto _n_argument_11973=46.5;auto _n_argument_11974=0.9;auto _n_argument_11975=2.6;auto _n_argument_11976=(0.85+([&](){auto _n_left_11977=(0.15*std::sin((_n_t_11831*7.0)));auto _n_right_11978=std::sin((_n_t_11831*4.3));return (_n_left_11977*_n_right_11978);})());auto _n_argument_11979=_n_FLAME_11529;return this->_n_addGlow_11583(_n_argument_11972,_n_argument_11973,_n_argument_11974,_n_argument_11975,_n_argument_11976,_n_argument_11979);})());
for(auto &&_n_item_11980:this->_n_diyas_11580){d::check_cancel();auto _n_binding_11981=_n_item_11980;
double _n_x0_11842=d::at(_n_binding_11981,0.0);
double _n_y0_11843=d::at(_n_binding_11981,1.0);
double _n_ph_11844=d::at(_n_binding_11981,2.0);
double _n_sz_11845=d::at(_n_binding_11981,3.0);
double _n_dir_11846=d::at(_n_binding_11981,4.0);
{
double _n_near_11847=((_n_y0_11843-_n_HZ_11520)/(_n_H_11519-_n_HZ_11520));
double _n_x_11848=(d::mod((d::mod((_n_x0_11842+((_n_dir_11846*_n_t_11831)*(0.35+(0.8*_n_near_11847)))),260.0)+260.0),260.0)-30.0);
double _n_y_11849=(_n_y0_11843+((1.0+(1.6*_n_near_11847))*std::sin(((_n_x_11848*0.045)+_n_ph_11844))));
if(((d::truth((_n_x_11848<(-d::number(3.0))))||d::truth((_n_x_11848>(_n_W_11518+3.0))))||d::truth((_n_y_11849<(_n_wlF_11548(_n_x_11848)+1.0))))){d::check_cancel();continue;
}
double _n_fl_11850=(0.78+([&](){auto _n_left_11982=(0.22*std::sin(((_n_t_11831*9.0)+_n_ph_11844)));auto _n_right_11983=std::sin(((_n_t_11831*5.3)+(_n_ph_11844*2.0)));return (_n_left_11982*_n_right_11983);})());
double _n_s_11851=((0.35+(0.9*_n_near_11847))*_n_sz_11845);
(void)(this->_n_addGlow_11583(_n_x_11848,(_n_y_11849-0.4),(0.5+(0.45*_n_s_11851)),(0.9+(1.8*_n_s_11851)),(_n_fl_11850*1.3),_n_FLAME_11529));
double _n_cr_11852=std::floor((_n_y_11849+0.4));
{double _n_xx_11853=std::floor(((_n_x_11848-0.8)-_n_s_11851));
for(;d::truth((_n_xx_11853<=((_n_x_11848+0.8)+_n_s_11851)));(void)((_n_xx_11853++))){d::check_cancel();if(((d::truth((_n_xx_11853<0.0))||d::truth((_n_xx_11853>=_n_W_11518)))||d::truth((_n_cr_11852>=_n_H_11519)))){d::check_cancel();continue;
}
double _n_k_11854=((_n_cr_11852*_n_W_11518)+_n_xx_11853);
(void)(((([&](){auto&& _n_array_11984=d::at(this->_n_dyn_11581,0.0);auto _n_index_11985=_n_k_11854;auto _n_value_11986=(d::at(_n_array_11984,_n_index_11985)+(0.28*_n_fl_11850));d::put(_n_array_11984,_n_index_11985,_n_value_11986);return _n_value_11986;})(),([&](){auto&& _n_array_11987=d::at(this->_n_dyn_11581,1.0);auto _n_index_11988=_n_k_11854;auto _n_value_11989=(d::at(_n_array_11987,_n_index_11988)+(0.12*_n_fl_11850));d::put(_n_array_11987,_n_index_11988,_n_value_11989);return _n_value_11989;})()),([&](){auto&& _n_array_11990=d::at(this->_n_dyn_11581,2.0);auto _n_index_11991=_n_k_11854;auto _n_value_11992=(d::at(_n_array_11990,_n_index_11991)+(0.04*_n_fl_11850));d::put(_n_array_11990,_n_index_11991,_n_value_11992);return _n_value_11992;})()));
}}
(void)(this->_n_addStreak_11584(_n_x_11848,(_n_y_11849+0.6),(0.35+(0.35*_n_s_11851)),(2.0+(5.0*_n_s_11851)),(0.55*_n_fl_11850)));

}
}
{double _n_r_11855=0.0;
for(;d::truth((_n_r_11855<_n_H_11519));(void)((_n_r_11855++))){d::check_cancel();double _n_y_11856=(_n_r_11855+0.5);
{double _n_x_11857=0.0;
for(;d::truth((_n_x_11857<_n_W_11518));(void)((_n_x_11857++))){d::check_cancel();double _n_k_11858=((_n_r_11855*_n_W_11518)+_n_x_11857);
double _n_m_11859=d::at(this->_n_mat_11558,_n_k_11858);
double _n_cr_11860=d::at(this->_n_sR_11559,_n_k_11858);
double _n_cg_11861=d::at(this->_n_sG_11560,_n_k_11858);
double _n_cb_11862=d::at(this->_n_sB_11561,_n_k_11858);
double _n_floor_11863=d::at(this->_n_flo_11562,_n_k_11858);
double _n_fade_11864=1.0;
bool _n_star_11865=false;
if(((d::truth((_n_m_11859==_n_SKY_11531))&&d::truth((_n_y_11856<48.0)))&&d::truth((_n_hash_11541(_n_x_11857,((_n_r_11855*3.0)+11.0))>0.986)))){d::check_cancel();double _n_dm_11866=d::hypot(std::initializer_list<double>{(_n_x_11857-d::at(_n_MOON_11523,0.0)),(_n_y_11856-d::at(_n_MOON_11523,1.0))});
double _n_tw_11867=([&](){auto _n_left_11993=([&](){auto _n_left_11995=(0.45+(0.4*std::sin(([&](){auto _n_left_11997=(_n_t_11831*(1.2+(_n_hash_11541(_n_x_11857,_n_r_11855)*2.5)));auto _n_right_11998=(_n_hash_11541(_n_r_11855,_n_x_11857)*6.28);return (_n_left_11997+_n_right_11998);})())));auto _n_right_11996=_n_smooth_11545(48.0,18.0,_n_y_11856);return (_n_left_11995*_n_right_11996);})();auto _n_right_11994=_n_smooth_11545(6.0,16.0,_n_dm_11866);return (_n_left_11993*_n_right_11994);})();
if(d::truth((_n_tw_11867>0.12))){d::check_cancel();(void)(((((_n_cr_11860=d::maximum({_n_cr_11860,(_n_tw_11867*0.9)})),(_n_cg_11861=d::maximum({_n_cg_11861,(_n_tw_11867*0.92)}))),(_n_cb_11862=d::maximum({_n_cb_11862,_n_tw_11867}))),(_n_star_11865=true)));
}
}else {d::check_cancel();if(d::truth((_n_m_11859==_n_WATER_11532))){d::check_cancel();double _n_wl_11868=_n_wlF_11548((_n_x_11857+0.5));
double _n_d_11869=(_n_y_11856-_n_wl_11868);
double _n_v_11870=((_n_y_11856-_n_FAR_11521)/(_n_H_11519-_n_FAR_11521));
double _n_w_11871=([&](){auto _n_left_11999=(0.6*_n_noise_11542(((_n_x_11857*0.05)+(_n_t_11831*0.07)),((_n_y_11856*0.45)-(_n_t_11831*0.4)),0.0));auto _n_right_12000=(0.4*_n_noise_11542(((_n_x_11857*0.16)-(_n_t_11831*0.13)),((_n_y_11856*0.95)-(_n_t_11831*0.85)),0.0));return (_n_left_11999+_n_right_12000);})();
double _n_swell_11872=(0.55+(0.9*_n_w_11871));
(void)((((_n_cr_11860=(0.025*_n_swell_11872)),(_n_cg_11861=(0.04*_n_swell_11872))),(_n_cb_11862=(0.12*_n_swell_11872))));
double _n_wx_11873=((_n_noise_11542(((_n_x_11857*0.05)+7.0),((_n_y_11856*0.35)-(_n_t_11831*0.6)),0.0)-0.5)*(1.5+(4.0*_n_v_11870)));
double _n_wy_11874=((_n_noise_11542(((_n_x_11857*0.09)+3.0),((_n_y_11856*0.6)-(_n_t_11831*0.9)),0.0)-0.5)*(1.0+(2.5*_n_v_11870)));
double _n_ym_11875=(((_n_wl_11868-(_n_d_11869*0.92))-0.6)+_n_wy_11874);
double _n_sx_11876=d::round((_n_x_11857+_n_wx_11873));
if(d::truth((_n_sx_11876<0.0))){d::check_cancel();(void)((_n_sx_11876=0.0));
}
if(d::truth((_n_sx_11876>(_n_W_11518-1.0)))){d::check_cancel();(void)((_n_sx_11876=(_n_W_11518-1.0)));
}
double _n_q_11877=(d::truth((_n_ym_11875<0.0))?(-d::number(1.0)):((std::floor(_n_ym_11875)*_n_W_11518)+_n_sx_11876));
if((d::truth((_n_q_11877>=0.0))&&d::truth((d::at(this->_n_mat_11558,_n_q_11877)!=_n_WATER_11532)))){d::check_cancel();double _n_dash_11878=([&](){auto _n_argument_12001=0.3;auto _n_argument_12002=0.75;auto _n_argument_12003=_n_noise_11542(((_n_x_11857*0.09)+3.0),((_n_y_11856*0.9)-(_n_t_11831*1.0)),0.0);return _n_smooth_11545(_n_argument_12001,_n_argument_12002,_n_argument_12003);})();
double _n_da_11879=((0.12+(0.88*_n_dash_11878))*(0.85-(0.3*_n_smooth_11545(_n_HZ_11520,_n_H_11519,_n_y_11856))));
double _n_sp_11880=d::maximum({d::at(this->_n_sR_11559,_n_q_11877),d::at(this->_n_sG_11560,_n_q_11877),d::at(this->_n_sB_11561,_n_q_11877)});
double _n_keep_11881=((0.24+(0.55*_n_smooth_11545(0.5,0.9,((d::at(this->_n_sR_11559,_n_q_11877)-d::at(this->_n_sB_11561,_n_q_11877))+0.6))))*(d::truth((_n_sp_11880>1.0))?(1.0/_n_sp_11880):1.0));
(void)((((_n_cr_11860=(_n_cr_11860+(((d::at(this->_n_sR_11559,_n_q_11877)*_n_keep_11881)+d::at(d::at(this->_n_dyn_11581,0.0),_n_q_11877))*_n_da_11879))),(_n_cg_11861=(_n_cg_11861+(((d::at(this->_n_sG_11560,_n_q_11877)*_n_keep_11881)+d::at(d::at(this->_n_dyn_11581,1.0),_n_q_11877))*_n_da_11879)))),(_n_cb_11862=(_n_cb_11862+(((d::at(this->_n_sB_11561,_n_q_11877)*_n_keep_11881)+d::at(d::at(this->_n_dyn_11581,2.0),_n_q_11877))*_n_da_11879)))));
}
double _n_fl_11882=(d::at(this->_n_dref_11582,_n_k_11858)*(0.25+(1.0*_n_smooth_11545(0.3,0.7,_n_w_11871))));
(void)((((_n_cr_11860=(_n_cr_11860+(_n_fl_11882*d::at(_n_FLAME_11529,0.0)))),(_n_cg_11861=(_n_cg_11861+(_n_fl_11882*d::at(_n_FLAME_11529,1.0))))),(_n_cb_11862=(_n_cb_11862+(_n_fl_11882*d::at(_n_FLAME_11529,2.0))))));
(void)((_n_floor_11863=0.12));
(void)((_n_fade_11864=_n_smooth_11545((_n_H_11519+4.0),(_n_H_11519-14.0),_n_y_11856)));
}
}
(void)((((_n_cr_11860=(_n_cr_11860+d::at(d::at(this->_n_dyn_11581,0.0),_n_k_11858))),(_n_cg_11861=(_n_cg_11861+d::at(d::at(this->_n_dyn_11581,1.0),_n_k_11858)))),(_n_cb_11862=(_n_cb_11862+d::at(d::at(this->_n_dyn_11581,2.0),_n_k_11858)))));
double _n_peak_11883=d::maximum({_n_cr_11860,_n_cg_11861,_n_cb_11862,0.0001});
double _n_level_11884=(_n_clamp_11544((_n_floor_11863+(((1.0-_n_floor_11863)*std::pow(_n_peak_11883,0.72))*0.95)))*_n_fade_11864);
double _n_step_11885=([&](){auto _n_argument_12004=0.0;auto _n_argument_12005=([&](){auto _n_argument_12006=3.0;auto _n_argument_12007=d::round(((_n_level_11884*3.0)+d::at(_n_BAYER_11528,((double(d::i32(_n_r_11855)&d::i32(3.0))*4.0)+double(d::i32(_n_x_11857)&d::i32(3.0))))));return d::minimum({_n_argument_12006,_n_argument_12007});})();return d::maximum({_n_argument_12004,_n_argument_12005});})();
(void)(([&](){auto&& _n_array_12008=this->_n_out_11555;auto _n_index_12009=_n_k_11858;auto _n_value_12010=d::at(_n_DOTS_11525,_n_step_11885);d::put(_n_array_12008,_n_index_12009,_n_value_12010);return _n_value_12010;})());
if(d::truth(_n_color_11832)){d::check_cancel();if(d::truth(_n_star_11865)){d::check_cancel();(void)(([&](){auto&& _n_array_12011=d::read(_n_color_11832);auto _n_index_12012=_n_k_11858;auto _n_value_12013=this->_n_STAR_11553;d::put(_n_array_12011,_n_index_12012,_n_value_12013);return _n_value_12013;})());
}else {d::check_cancel();double _n_want_11886=(d::truth(_n_step_11885)?d::minimum({1.0,((_n_level_11884+0.06)/d::at(_n_COVER_11526,_n_step_11885))}):0.0);
double _n_s_11887=d::minimum({d::at(_n_LIFT_11527,_n_step_11885),((0.3+(0.7*_n_want_11886))/_n_peak_11883)});
(void)(([&](){auto&& _n_array_12014=d::read(_n_color_11832);auto _n_index_12015=_n_k_11858;auto _n_value_12016=([&](){auto _n_argument_12017=_n_clamp_11544((_n_cr_11860*_n_s_11887));auto _n_argument_12018=_n_clamp_11544((_n_cg_11861*_n_s_11887));auto _n_argument_12019=_n_clamp_11544((_n_cb_11862*_n_s_11887));return this->_n_nearest_11557(_n_argument_12017,_n_argument_12018,_n_argument_12019);})();d::put(_n_array_12014,_n_index_12015,_n_value_12016);return _n_value_12016;})());
}
}
}}
}}
d::Array<d::String,false> _n_lines_11888=d::Array<d::String,false>{};
{double _n_r_11889=0.0;
for(;d::truth((_n_r_11889<_n_H_11519));(void)((_n_r_11889++))){d::check_cancel();(void)(_n_lines_11888.push(d::join(this->_n_out_11555.slice((_n_r_11889*_n_W_11518),((_n_r_11889+1.0)*_n_W_11518)),d::String(u""))));
}}
return d::join(_n_lines_11888,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("gangaur-ghat").cols)*ascii::catalog_meta("gangaur-ghat").rows);auto _env=std::make_shared<_n_Record_11890>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &gangaur_ghat_meta(){return catalog_meta("gangaur-ghat");}
std::unique_ptr<Piece> make_gangaur_ghat(const AsciiPieceOptions &o){return std::make_unique<Native_gangaur_ghat>(o);}
}
