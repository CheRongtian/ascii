// Direct, statically typed C++ from src/pieces/lantern-lake.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_17877;
struct _n_Record_17941;
struct _n_Record_17946;
struct _n_Record_17948;
struct _n_Record_18354;
struct _n_Record_17877{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_17877> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17877>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_17941{
double _p_i{};
double _p_s{};
double _p_v{};
double _p_life{};
double _p_off{};
double _p_wd{};
double _p_sw{};
double _p_sf{};
double _p_ph{};
double _p_f1{};
double _p_f2{};
bool _p_out{};
bool _p_wide{};
static std::shared_ptr<_n_Record_17941> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17941>();out->_p_i=d::decode<double>(j["i"]);out->_p_s=d::decode<double>(j["s"]);out->_p_v=d::decode<double>(j["v"]);out->_p_life=d::decode<double>(j["life"]);out->_p_off=d::decode<double>(j["off"]);out->_p_wd=d::decode<double>(j["wd"]);out->_p_sw=d::decode<double>(j["sw"]);out->_p_sf=d::decode<double>(j["sf"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_f1=d::decode<double>(j["f1"]);out->_p_f2=d::decode<double>(j["f2"]);out->_p_out=d::decode<bool>(j["out"]);out->_p_wide=d::decode<bool>(j["wide"]);return out;}
};
struct _n_Record_17946{
double _p_i{};
double _p_s{};
double _p_v{};
double _p_x{};
double _p_path{};
double _p_life{};
double _p_off{};
double _p_wd{};
double _p_sw{};
double _p_sf{};
double _p_ph{};
static std::shared_ptr<_n_Record_17946> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17946>();out->_p_i=d::decode<double>(j["i"]);out->_p_s=d::decode<double>(j["s"]);out->_p_v=d::decode<double>(j["v"]);out->_p_x=d::decode<double>(j["x"]);out->_p_path=d::decode<double>(j["path"]);out->_p_life=d::decode<double>(j["life"]);out->_p_off=d::decode<double>(j["off"]);out->_p_wd=d::decode<double>(j["wd"]);out->_p_sw=d::decode<double>(j["sw"]);out->_p_sf=d::decode<double>(j["sf"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_17948{
d::Array<d::Array<double,false>,false> _p_up{};
d::Array<d::Array<double,false>,false> _p_down{};
d::Array<d::Array<double,false>,false> _p_chest{};
static std::shared_ptr<_n_Record_17948> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17948>();out->_p_up=d::decode<d::Array<d::Array<double,false>,false>>(j["up"]);out->_p_down=d::decode<d::Array<d::Array<double,false>,false>>(j["down"]);out->_p_chest=d::decode<d::Array<d::Array<double,false>,false>>(j["chest"]);return out;}
};
struct _n_Record_18354{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_18354> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18354>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_17898(double _a0,double _a1);
double _n_noise_17899(double _a0,double _a1);
double _n_fbm_17900(double _a0,double _a1,double _a2);
double _n_clamp_17901(double _a0);
double _n_smooth_17902(double _a0,double _a1,double _a2);
double _n_mix_17903(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_17904(d::String _a0);
double _n_seg_17905(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
d::Array<double,false> _n_range_17909(double _a0,d::Array<d::Array<double,false>,false> _a1,double _a2,double _a3);
bool _n_inside_17910(double _a0,double _a1);
std::shared_ptr<_n_Record_17877> _n_meta_17876=[](){return ([&](){auto _n_object_18357=std::make_shared<_n_Record_17877>();_n_object_18357->_p_name=d::String(u"lantern lake");_n_object_18357->_p_category=d::String(u"scenes");_n_object_18357->_p_note=d::String(u"sky lanterns rising over a still mountain lake, one let go from a boat");_n_object_18357->_p_cols=200.0;_n_object_18357->_p_rows=100.0;_n_object_18357->_p_cell=1.0;_n_object_18357->_p_fps=15.0;_n_object_18357->_p_ground=d::String(u"#04060d");_n_object_18357->_p_palette=d::Array<d::String,false>{d::String(u"#141b30"),d::String(u"#1c2a52"),d::String(u"#22346a"),d::String(u"#2a4080"),d::String(u"#324c96"),d::String(u"#3c58a8"),d::String(u"#33306e"),d::String(u"#433c88"),d::String(u"#54449a"),d::String(u"#62407e"),d::String(u"#7a4a88"),d::String(u"#934e86"),d::String(u"#a4546e"),d::String(u"#bc5e66"),d::String(u"#d06a62"),d::String(u"#dc7650"),d::String(u"#e88444"),d::String(u"#f09238"),d::String(u"#d4581a"),d::String(u"#ea6c1e"),d::String(u"#f78226"),d::String(u"#ff9530"),d::String(u"#ffa83c"),d::String(u"#ffbb4e"),d::String(u"#ffcc66"),d::String(u"#ffdc86"),d::String(u"#ffe8a8"),d::String(u"#fff3cf"),d::String(u"#fffbec"),d::String(u"#b8341a"),d::String(u"#d84420"),d::String(u"#2f3748"),d::String(u"#4f586c"),d::String(u"#5e5a7e"),d::String(u"#7a6a8c"),d::String(u"#5a3220"),d::String(u"#7c4628"),d::String(u"#4a5578"),d::String(u"#5d6a92"),d::String(u"#7381ab"),d::String(u"#c4cdec"),d::String(u"#e4e9fb"),d::String(u"#ffffff")};return _n_object_18357;})();}();
const double _n_W_17878=[](){return 200.0;}();
const double _n_H_17879=[](){return 100.0;}();
const double _n_WL_17880=[](){return 64.0;}();
const double _n_SRC_17881=[](){return 100.0;}();
const double _n_BX_17882=[](){return 108.5;}();
const double _n_BW_17883=[](){return 90.0;}();
const double _n_SC_17884=[](){return 1.4;}();
const double _n_FX_17885=[](){return (_n_BX_17882-(3.0*_n_SC_17884));}();
const double _n_CYCLE_17886=[](){return 20.0;}();
const double _n_LET_GO_17887=[](){return 3.0;}();
const double _n_LIT_17888=[](){return 6.0;}();
const double _n_HELD_17889=[](){return (5.0*_n_SC_17884);}();
const d::String _n_DOTS_17890=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_17891=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_17892=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_17970=_a0;
return ((_n_v_17970/16.0)-0.47);});}();
const double _n_AIR_17893=[](){return 0.0;}();
const double _n_FAR_17894=[](){return 1.0;}();
const double _n_BACK_17895=[](){return 2.0;}();
const double _n_PEAK_17896=[](){return 3.0;}();
const double _n_TREE_17897=[](){return 4.0;}();
d::Array<d::Array<double,false>,false> _n_PEAKS_17906=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{22.0,42.0,1.2},d::Array<double,false>{(-d::number(4.0)),33.0,0.9},d::Array<double,false>{172.0,33.0,1.05},d::Array<double,false>{215.0,22.0,0.6}};}();
d::Array<d::Array<double,false>,false> _n_SHOULDERS_17907=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{50.0,25.0,1.0},d::Array<double,false>{64.0,12.0,0.75},d::Array<double,false>{150.0,17.0,0.95},d::Array<double,false>{196.0,21.0,0.75}};}();
d::Array<d::Array<double,false>,false> _n_DISTANT_17908=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{98.0,17.0,0.42},d::Array<double,false>{122.0,14.0,0.5},d::Array<double,false>{82.0,12.0,0.45},d::Array<double,false>{140.0,11.0,0.5}};}();
double _n_hash_17898(double _a0,double _a1){double _n_x_17971=_a0;
double _n_y_17972=_a1;
{
double _n_h_17973=([&](){auto _n_left_18358=d::imul(double(d::i32(_n_x_17971)|d::i32(0.0)),374761393.0);auto _n_right_18359=d::imul(double(d::i32(_n_y_17972)|d::i32(0.0)),668265263.0);return (_n_left_18358+_n_right_18359);})();
(void)((_n_h_17973=d::imul(double(d::i32(_n_h_17973)^d::i32(double(d::u32(_n_h_17973)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_17973)^d::i32(double(d::u32(_n_h_17973)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_17899(double _a0,double _a1){double _n_x_17974=_a0;
double _n_y_17975=_a1;
{
double _n_xi_17976=std::floor(_n_x_17974);
double _n_yi_17977=std::floor(_n_y_17975);
double _n_fx_17978=(_n_x_17974-_n_xi_17976);
double _n_fy_17979=(_n_y_17975-_n_yi_17977);
double _n_u_17980=((_n_fx_17978*_n_fx_17978)*(3.0-(2.0*_n_fx_17978)));
double _n_v_17981=((_n_fy_17979*_n_fy_17979)*(3.0-(2.0*_n_fy_17979)));
double _n_a_17982=_n_hash_17898(_n_xi_17976,_n_yi_17977);
double _n_b_17983=_n_hash_17898((_n_xi_17976+1.0),_n_yi_17977);
double _n_c_17984=_n_hash_17898(_n_xi_17976,(_n_yi_17977+1.0));
double _n_d_17985=_n_hash_17898((_n_xi_17976+1.0),(_n_yi_17977+1.0));
return (((_n_a_17982+((_n_b_17983-_n_a_17982)*_n_u_17980))+((_n_c_17984-_n_a_17982)*_n_v_17981))+(((((_n_a_17982-_n_b_17983)-_n_c_17984)+_n_d_17985)*_n_u_17980)*_n_v_17981));

}
}

double _n_fbm_17900(double _a0,double _a1,double _a2){double _n_x_17986=_a0;
double _n_y_17987=_a1;
double _n_octaves_17988=_a2;
{
double _n_s_17989=0.0;
double _n_n_17990=0.0;
double _n_amp_17991=0.5;
double _n_f_17992=1.0;
{double _n_i_17993=0.0;
for(;d::truth((_n_i_17993<_n_octaves_17988));(void)((_n_i_17993++))){d::check_cancel();(void)((_n_s_17989=(_n_s_17989+(_n_amp_17991*_n_noise_17899((_n_x_17986*_n_f_17992),(_n_y_17987*_n_f_17992))))));
(void)((_n_n_17990=(_n_n_17990+_n_amp_17991)));
(void)((_n_amp_17991=(_n_amp_17991*0.5)));
(void)((_n_f_17992=(_n_f_17992*2.0)));
}}
return (_n_s_17989/_n_n_17990);

}
}

double _n_clamp_17901(double _a0){double _n_v_17994=_a0;
return (d::truth((_n_v_17994<0.0))?0.0:(d::truth((_n_v_17994>1.0))?1.0:_n_v_17994));}

double _n_smooth_17902(double _a0,double _a1,double _a2){double _n_a_17995=_a0;
double _n_b_17996=_a1;
double _n_v_17997=_a2;
{
double _n_k_17998=_n_clamp_17901(((_n_v_17997-_n_a_17995)/(_n_b_17996-_n_a_17995)));
return ((_n_k_17998*_n_k_17998)*(3.0-(2.0*_n_k_17998)));

}
}

double _n_mix_17903(double _a0,double _a1,double _a2){double _n_a_17999=_a0;
double _n_b_18000=_a1;
double _n_k_18001=_a2;
return (_n_a_17999+((_n_b_18000-_n_a_17999)*_n_k_18001));}

d::Array<double,false> _n_hex_17904(d::String _a0){d::String _n_s_18002=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_18003=_a0;
return (([&](){auto _n_argument_18360=d::slice(_n_s_18002,_n_i_18003,(_n_i_18003+2.0));auto _n_argument_18361=16.0;return d::parseInt(_n_argument_18360,_n_argument_18361);})()/255.0);});}

double _n_seg_17905(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_18004=_a0;
double _n_py_18005=_a1;
double _n_ax_18006=_a2;
double _n_ay_18007=_a3;
double _n_bx_18008=_a4;
double _n_by_18009=_a5;
{
double _n_dx_18010=(_n_bx_18008-_n_ax_18006);
double _n_dy_18011=(_n_by_18009-_n_ay_18007);
double _n_k_18012=_n_clamp_17901(((((_n_px_18004-_n_ax_18006)*_n_dx_18010)+((_n_py_18005-_n_ay_18007)*_n_dy_18011))/((_n_dx_18010*_n_dx_18010)+(_n_dy_18011*_n_dy_18011))));
double _n_ex_18013=((_n_ax_18006+(_n_dx_18010*_n_k_18012))-_n_px_18004);
double _n_ey_18014=((_n_ay_18007+(_n_dy_18011*_n_k_18012))-_n_py_18005);
return std::sqrt(((_n_ex_18013*_n_ex_18013)+(_n_ey_18014*_n_ey_18014)));

}
}

d::Array<double,false> _n_range_17909(double _a0,d::Array<d::Array<double,false>,false> _a1,double _a2,double _a3){double _n_x_18015=_a0;
d::Array<d::Array<double,false>,false> _n_peaks_18016=_a1;
double _n_seed_18017=_a2;
double _n_rough_18018=_a3;
{
double _n_m_18019=(-d::number(99.0));
double _n_px_18020=0.0;
for(auto &&_n_item_18362:_n_peaks_18016){d::check_cancel();auto _n_binding_18363=_n_item_18362;
double _n_cx_18021=d::at(_n_binding_18363,0.0);
double _n_h_18022=d::at(_n_binding_18363,1.0);
double _n_s_18023=d::at(_n_binding_18363,2.0);
{
double _n_v_18024=(_n_h_18022-(std::fabs((_n_x_18015-_n_cx_18021))*_n_s_18023));
if(d::truth((_n_v_18024>_n_m_18019))){d::check_cancel();(void)(((_n_m_18019=_n_v_18024),(_n_px_18020=_n_cx_18021)));
}

}
}
double _n_j_18025=([&](){auto _n_left_18364=(_n_rough_18018*(_n_fbm_17900((_n_x_18015*0.09),_n_seed_18017,3.0)-0.5));auto _n_right_18365=((_n_rough_18018*0.45)*(_n_noise_17899((_n_x_18015*0.45),(_n_seed_18017+5.0))-0.5));return (_n_left_18364+_n_right_18365);})();
return d::Array<double,false>{(_n_m_18019+(_n_j_18025*([&](){auto _n_argument_18366=1.0;auto _n_argument_18367=(d::maximum({0.0,_n_m_18019})/6.0);return d::minimum({_n_argument_18366,_n_argument_18367});})())),_n_px_18020};

}
}

bool _n_inside_17910(double _a0,double _a1){double _n_u_18026=_a0;
double _n_v_18027=_a1;
{
if((d::truth((_n_v_18027<0.0))||d::truth((_n_v_18027>1.0)))){d::check_cancel();return false;
}
double _n_hw_18028=(0.34-(0.08*_n_v_18027));
if(d::truth((_n_v_18027<0.14))){d::check_cancel();(void)((_n_hw_18028=(_n_hw_18028*std::sqrt((1.0-(0.6*std::pow(((0.14-_n_v_18027)/0.14),2.0)))))));
}
return ([&]()->bool{auto _n_logical_18368=(_n_u_18026<=_n_hw_18028);return d::truth(_n_logical_18368)?(_n_u_18026>=(-d::number(_n_hw_18028))):_n_logical_18368;})();

}
}

struct Native_lantern_lake final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_17911{};
double _n_STAR_17912{};
double _n_SL_17913{};
double _n_N_17914{};
double _n_S_17915{};
d::Array<d::String,false> _n_out_17916{};
d::Array<uint8_t,true> _n_lut_17917{};
d::Array<uint8_t,true> _n_mat_17919{};
d::Array<float,true> _n_sR_17920{};
d::Array<float,true> _n_sG_17921{};
d::Array<float,true> _n_sB_17922{};
d::Array<float,true> _n_take_17923{};
d::Array<float,true> _n_backTop_17924{};
d::Array<float,true> _n_backX_17925{};
d::Array<float,true> _n_frontTop_17926{};
d::Array<float,true> _n_frontX_17927{};
d::Array<float,true> _n_farTop_17928{};
d::Array<d::Array<double,false>,false> _n_HUES_17930{};
d::Array<uint8_t,true> _n_far_17933{};
d::Array<float,true> _n_floorS_17936{};
d::Array<d::Array<double,false>,false> _n_shoreLights_17937{};
d::Array<d::Array<double,false>,false> _n_stars_17938{};
d::Array<uint8_t,true> _n_gap_17939{};
d::Array<std::shared_ptr<_n_Record_17941>,false> _n_shore_17940{};
d::Array<d::Array<double,false>,false> _n_NEAR_17944{};
d::Array<std::shared_ptr<_n_Record_17946>,false> _n_close_17945{};
std::shared_ptr<_n_Record_17948> _n_ARMS_17947{};
d::Array<double,false> _n_BOX_17952{};
d::Array<uint8_t,true> _n_hulls_17953{};
d::Array<uint8_t,true> _n_shape_17954{};
d::Array<d::Array<double,false>,false> _n_arms_17955{};
double _n_BOWX_17957{};
double _n_BOWY_17958{};
d::Array<float,true> _n_R_17959{};
d::Array<float,true> _n_G_17960{};
d::Array<float,true> _n_B_17961{};
d::Array<float,true> _n_FL_17962{};
d::Array<uint8_t,true> _n_hide_17966{};
d::Array<float,true> _n_roadX_17967{};
d::Array<float,true> _n_roadW_17968{};
d::Array<float,true> _n_roadA_17969{};
std::function<d::String(double,std::shared_ptr<_n_Record_18354>)> _render;
double _n_nearest_17918(double _a0,double _a1,double _a2){double _n_r_18029=_a0;
double _n_g_18030=_a1;
double _n_b_18031=_a2;
{
double _n_k_18032=([&](){auto _n_left_18676=([&](){auto _n_left_18678=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_18029*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_18679=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_18030*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_18678)|d::i32(_n_right_18679));})();auto _n_right_18677=d::minimum({31.0,double(d::i32((_n_b_18031*31.99))|d::i32(0.0))});return double(d::i32(_n_left_18676)|d::i32(_n_right_18677));})();
if(d::truth((d::at(this->_n_lut_17917,_n_k_18032)!=255.0))){d::check_cancel();return d::at(this->_n_lut_17917,_n_k_18032);
}
double _n_best_18033=0.0;
double _n_bd_18034=1000000000.0;
{double _n_i_18035=0.0;
for(;d::truth((_n_i_18035<this->_n_SL_17913));(void)((_n_i_18035++))){d::check_cancel();double _n_dr_18036=(d::at(d::at(this->_n_P_17911,_n_i_18035),0.0)-_n_r_18029);
double _n_dg_18037=(d::at(d::at(this->_n_P_17911,_n_i_18035),1.0)-_n_g_18030);
double _n_db_18038=(d::at(d::at(this->_n_P_17911,_n_i_18035),2.0)-_n_b_18031);
double _n_d_18039=((((0.3*_n_dr_18036)*_n_dr_18036)+((0.5*_n_dg_18037)*_n_dg_18037))+((0.2*_n_db_18038)*_n_db_18038));
if(d::truth((_n_d_18039<_n_bd_18034))){d::check_cancel();(void)(((_n_bd_18034=_n_d_18039),(_n_best_18033=_n_i_18035)));
}
}}
return ([&](){auto&& _n_array_18680=this->_n_lut_17917;auto _n_index_18681=_n_k_18032;auto _n_value_18682=_n_best_18033;d::put(_n_array_18680,_n_index_18681,_n_value_18682);return _n_value_18682;})();

}
}

double _n_dome_17929(double _a0,double _a1){double _n_x_18046=_a0;
double _n_y_18047=_a1;
{
double _n_up_18048=d::maximum({0.0,((_n_WL_17880-6.0)-_n_y_18047)});
double _n_dx_18049=(((_n_x_18046-_n_SRC_17881)-(0.3*_n_up_18048))/(44.0+_n_up_18048));
return ([&](){auto _n_left_18683=std::exp(((-d::number(_n_dx_18049))*_n_dx_18049));auto _n_right_18684=([&](){auto _n_left_18685=(0.6*std::exp(((-d::number(_n_up_18048))/14.0)));auto _n_right_18686=(0.4*std::exp(((-d::number(_n_up_18048))/40.0)));return (_n_left_18685+_n_right_18686);})();return (_n_left_18683*_n_right_18684);})();

}
}

double _n_hue_17931(double _a0,double _a1){double _n_w_18050=_a0;
double _n_j_18051=_a1;
{
double _n_f_18052=(_n_clamp_17901(_n_w_18050)*5.0);
double _n_i_18053=([&](){auto _n_argument_18687=4.0;auto _n_argument_18688=std::floor(_n_f_18052);return d::minimum({_n_argument_18687,_n_argument_18688});})();
return _n_mix_17903(d::at(d::at(this->_n_HUES_17930,_n_i_18053),_n_j_18051),d::at(d::at(this->_n_HUES_17930,(_n_i_18053+1.0)),_n_j_18051),(_n_f_18052-_n_i_18053));

}
}

double _n_slope_17932(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,double _a8){double _n_k_18054=_a0;
double _n_x_18055=_a1;
double _n_y_18056=_a2;
double _n_top_18057=_a3;
double _n_px_18058=_a4;
double _n_haze_18059=_a5;
double _n_relief_18060=_a6;
double _n_edge_18061=_a7;
double _n_warm_18062=_a8;
{
double _n_xc_18063=(_n_x_18055+0.5);
double _n_depth_18064=(_n_y_18056-_n_top_18057);
double _n_inward_18065=(d::truth((_n_px_18058<_n_SRC_17881))?1.0:(-d::number(1.0)));
double _n_ridge_18066=(_n_px_18058+(((_n_depth_18064+1.0)*0.6)*(_n_noise_17899((_n_y_18056*0.1),_n_px_18058)-0.5)));
double _n_face_18067=_n_smooth_17902((-d::number(4.0)),4.0,((_n_xc_18063-_n_ridge_18066)*_n_inward_18065));
double _n_u_18068=(_n_x_18055+((_n_depth_18064*0.45)*d::sign(([&]()->double{auto _n_logical_18689=(_n_xc_18063-_n_px_18058);return d::truth(_n_logical_18689)?_n_logical_18689:1.0;})())));
auto _n_rib_18069=[&]( double _a0) mutable ->double{double _n_q_18070=_a0;
return _n_fbm_17900((_n_q_18070*0.13),(_n_px_18058*0.37),3.0);};
double _n_grad_18071=((([&](){auto _n_left_18690=_n_rib_18069((_n_u_18068+1.0));auto _n_right_18691=_n_rib_18069((_n_u_18068-1.0));return (_n_left_18690-_n_right_18691);})()*7.0)*_n_inward_18065);
double _n_lit_18072=_n_clamp_17901(((0.3+(0.5*_n_face_18067))+(_n_grad_18071*0.5)));
double _n_tex_18073=(0.8+(0.4*_n_fbm_17900((_n_x_18055*0.35),(_n_y_18056*0.35),2.0)));
double _n_w_18074=(([&](){auto _n_left_18692=(_n_lit_18072*std::exp((-d::number(std::pow(((_n_xc_18063-_n_SRC_17881)/70.0),2.0)))));auto _n_right_18693=(0.4+(0.6*_n_smooth_17902((_n_top_18057+2.0),_n_WL_17880,_n_y_18056)));return (_n_left_18692*_n_right_18693);})()*0.9);
double _n_b_18075=(((_n_haze_18059+((_n_relief_18060*_n_lit_18072)*_n_lit_18072))*_n_tex_18073)+(0.16*_n_w_18074));
double _n_rim_18076=(_n_smooth_17902(1.8,0.3,_n_depth_18064)*_n_edge_18061);
double _n_sky_18077=this->_n_dome_17929(_n_xc_18063,(_n_top_18057-1.0));
auto _n_c_18078=[&]( double _a0) mutable ->double{double _n_j_18079=_a0;
return ([&](){auto _n_left_18694=(_n_b_18075*this->_n_hue_17931((_n_w_18074*_n_warm_18062),_n_j_18079));auto _n_right_18695=(_n_rim_18076*this->_n_hue_17931(_n_sky_18077,_n_j_18079));return (_n_left_18694+_n_right_18695);})();};
(void)(((([&](){auto&& _n_array_18696=this->_n_sR_17920;auto _n_index_18697=_n_k_18054;auto _n_value_18698=_n_c_18078(0.0);d::put(_n_array_18696,_n_index_18697,_n_value_18698);return _n_value_18698;})(),([&](){auto&& _n_array_18699=this->_n_sG_17921;auto _n_index_18700=_n_k_18054;auto _n_value_18701=_n_c_18078(1.0);d::put(_n_array_18699,_n_index_18700,_n_value_18701);return _n_value_18701;})()),([&](){auto&& _n_array_18702=this->_n_sB_17922;auto _n_index_18703=_n_k_18054;auto _n_value_18704=_n_c_18078(2.0);d::put(_n_array_18702,_n_index_18703,_n_value_18704);return _n_value_18704;})()));
return _n_w_18074;

}
}

double _n_scrub_17934(double _a0){double _n_x_18092=_a0;
return ((_n_WL_17880-2.4)-(1.4*_n_fbm_17900((_n_x_18092*0.15),5.5,3.0)));}

void _n_spruce_17935(double _a0,double _a1,double _a2,double _a3){double _n_tx_18095=_a0;
double _n_th_18096=_a1;
double _n_tw_18097=_a2;
double _n_tb_18098=_a3;
{
{double _n_r_18099=([&](){auto _n_argument_18705=0.0;auto _n_argument_18706=std::floor((_n_tb_18098-_n_th_18096));return d::maximum({_n_argument_18705,_n_argument_18706});})();
for(;d::truth((_n_r_18099<_n_WL_17880));(void)((_n_r_18099++))){d::check_cancel();double _n_y_18100=(_n_r_18099+0.5);
double _n_dy_18101=(_n_y_18100-(_n_tb_18098-_n_th_18096));
if((d::truth((_n_dy_18101<0.0))||d::truth((_n_y_18100>=(_n_tb_18098+0.5))))){d::check_cancel();continue;
}
double _n_tier_18102=((_n_dy_18101+(_n_th_18096*0.3))/1.6);
double _n_w_18103=((((_n_dy_18101/_n_th_18096)*_n_tw_18097)*(0.7+(0.45*(_n_tier_18102-std::floor(_n_tier_18102)))))+0.3);
{double _n_x_18104=([&](){auto _n_argument_18707=0.0;auto _n_argument_18708=std::floor(((_n_tx_18095-_n_tw_18097)-1.0));return d::maximum({_n_argument_18707,_n_argument_18708});})();
for(;d::truth((_n_x_18104<=d::minimum({(_n_W_17878-1.0),((_n_tx_18095+_n_tw_18097)+1.0)})));(void)((_n_x_18104++))){d::check_cancel();if(d::truth((std::fabs(((_n_x_18104+0.5)-_n_tx_18095))<=_n_w_18103))){d::check_cancel();(void)(([&](){auto&& _n_array_18709=this->_n_mat_17919;auto _n_index_18710=((_n_r_18099*_n_W_17878)+_n_x_18104);auto _n_value_18711=_n_TREE_17897;d::put(_n_array_18709,_n_index_18710,_n_value_18711);return _n_value_18711;})());
}
}}
}}

}
}

double _n_startX_17942(std::shared_ptr<_n_Record_17941> _a0,double _a1){std::shared_ptr<_n_Record_17941> _n_f_18129=_a0;
double _n_lap_18130=_a1;
{
double _n_n_18131=((_n_f_18129->_p_i*7.0)+(_n_lap_18130*131.0));
if(d::truth(_n_f_18129->_p_wide)){d::check_cancel();return (12.0+(176.0*_n_hash_17898(_n_n_18131,23.0)));
}
return ((_n_SRC_17881-6.0)+(30.0*(([&](){auto _n_left_18712=([&](){auto _n_left_18714=_n_hash_17898(_n_n_18131,23.0);auto _n_right_18715=_n_hash_17898(_n_n_18131,24.0);return (_n_left_18714+_n_right_18715);})();auto _n_right_18713=_n_hash_17898(_n_n_18131,25.0);return (_n_left_18712+_n_right_18713);})()-1.5)));

}
}

double _n_lean_17943(std::shared_ptr<_n_Record_17941> _a0,double _a1){std::shared_ptr<_n_Record_17941> _n_f_18132=_a0;
double _n_climb_18133=_a1;
return ((_n_climb_18133*_n_f_18132->_p_wd)+((_n_climb_18133*_n_climb_18133)*0.004));}

double _n_gunwale_17949(double _a0){double _n_dx_18141=_a0;
return (2.4+((d::truth((_n_dx_18141>0.0))?3.0:1.8)*std::pow(([&](){auto _n_argument_18716=4.0;auto _n_argument_18717=12.5;auto _n_argument_18718=std::fabs(_n_dx_18141);return _n_smooth_17902(_n_argument_18716,_n_argument_18717,_n_argument_18718);})(),2.0)));}

bool _n_hull_17950(double _a0,double _a1){double _n_dx_18142=_a0;
double _n_up_18143=_a1;
return ([&]()->bool{auto _n_logical_18719=([&]()->bool{auto _n_logical_18722=(_n_up_18143<=this->_n_gunwale_17949(_n_dx_18142));return d::truth(_n_logical_18722)?(_n_up_18143>(-d::number(0.6))):_n_logical_18722;})();return d::truth(_n_logical_18719)?([&](){auto _n_left_18720=std::fabs(_n_dx_18142);auto _n_right_18721=(12.5-(d::maximum({0.0,(1.8-_n_up_18143)})*2.4));return (_n_left_18720<=_n_right_18721);})():_n_logical_18719;})();}

bool _n_body_17951(double _a0,double _a1,d::Array<d::Array<double,false>,false> _a2){double _n_dx_18144=_a0;
double _n_up_18145=_a1;
d::Array<d::Array<double,false>,false> _n_arms_18146=_a2;
{
if(d::truth(((((_n_dx_18144*_n_dx_18144)/1.3)+(std::pow((_n_up_18145-11.2),2.0)/1.5))<1.0))){d::check_cancel();return true;
}
if(((d::truth((_n_up_18145<=9.8))&&d::truth((_n_up_18145>1.0)))&&d::truth(([&](){auto _n_left_18723=std::fabs(_n_dx_18144);auto _n_right_18724=(1.35+(0.5*_n_smooth_17902(9.8,2.0,_n_up_18145)));return (_n_left_18723<=_n_right_18724);})()))){d::check_cancel();return true;
}
double _n_ax_18147=std::fabs(_n_dx_18144);
return ([&]()->bool{auto _n_logical_18725=(_n_seg_17905(_n_ax_18147,_n_up_18145,d::at(d::at(_n_arms_18146,0.0),0.0),d::at(d::at(_n_arms_18146,0.0),1.0),d::at(d::at(_n_arms_18146,1.0),0.0),d::at(d::at(_n_arms_18146,1.0),1.0))<0.66);return d::truth(_n_logical_18725)?_n_logical_18725:(_n_seg_17905(_n_ax_18147,_n_up_18145,d::at(d::at(_n_arms_18146,1.0),0.0),d::at(d::at(_n_arms_18146,1.0),1.0),d::at(d::at(_n_arms_18146,2.0),0.0),d::at(d::at(_n_arms_18146,2.0),1.0))<0.58);})();

}
}

void _n_pose_17956(d::Array<d::Array<double,false>,false> _a0,d::Array<d::Array<double,false>,false> _a1,double _a2){d::Array<d::Array<double,false>,false> _n_a_18151=_a0;
d::Array<d::Array<double,false>,false> _n_b_18152=_a1;
double _n_k_18153=_a2;
{
{double _n_i_18154=0.0;
for(;d::truth((_n_i_18154<3.0));(void)((_n_i_18154++))){d::check_cancel();(void)((([&](){auto&& _n_array_18726=d::at(this->_n_arms_17955,_n_i_18154);auto _n_index_18727=0.0;auto _n_value_18728=_n_mix_17903(d::at(d::at(_n_a_18151,_n_i_18154),0.0),d::at(d::at(_n_b_18152,_n_i_18154),0.0),_n_k_18153);d::put(_n_array_18726,_n_index_18727,_n_value_18728);return _n_value_18728;})(),([&](){auto&& _n_array_18729=d::at(this->_n_arms_17955,_n_i_18154);auto _n_index_18730=1.0;auto _n_value_18731=_n_mix_17903(d::at(d::at(_n_a_18151,_n_i_18154),1.0),d::at(d::at(_n_b_18152,_n_i_18154),1.0),_n_k_18153);d::put(_n_array_18729,_n_index_18730,_n_value_18731);return _n_value_18731;})()));
}}
{double _n_j_18155=0.0;
for(;d::truth((_n_j_18155<d::at(this->_n_BOX_17952,3.0)));(void)((_n_j_18155++))){d::check_cancel();{double _n_i_18156=0.0;
for(;d::truth((_n_i_18156<d::at(this->_n_BOX_17952,2.0)));(void)((_n_i_18156++))){d::check_cancel();double _n_q_18157=((_n_j_18155*d::at(this->_n_BOX_17952,2.0))+_n_i_18156);
(void)(([&](){auto&& _n_array_18732=this->_n_shape_17954;auto _n_index_18733=_n_q_18157;auto _n_value_18734=([&]()->double{auto _n_logical_18735=d::at(this->_n_hulls_17953,_n_q_18157);return d::truth(_n_logical_18735)?_n_logical_18735:(d::truth(this->_n_body_17951(((((d::at(this->_n_BOX_17952,0.0)+_n_i_18156)+0.5)-_n_FX_17885)/_n_SC_17884),((_n_BW_17883-((d::at(this->_n_BOX_17952,1.0)+_n_j_18155)+0.5))/_n_SC_17884),this->_n_arms_17955))?2.0:0.0);})();d::put(_n_array_18732,_n_index_18733,_n_value_18734);return _n_value_18734;})());
}}
}}

}
}

void _n_paint_17963(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_k_18158=_a0;
double _n_pr_18159=_a1;
double _n_pg_18160=_a2;
double _n_pb_18161=_a3;
double _n_a_18162=_a4;
{
(void)(((([&](){auto&& _n_array_18736=this->_n_R_17959;auto _n_index_18737=_n_k_18158;auto _n_value_18738=(d::at(_n_array_18736,_n_index_18737)+((_n_pr_18159-d::at(this->_n_R_17959,_n_k_18158))*_n_a_18162));d::put(_n_array_18736,_n_index_18737,_n_value_18738);return _n_value_18738;})(),([&](){auto&& _n_array_18739=this->_n_G_17960;auto _n_index_18740=_n_k_18158;auto _n_value_18741=(d::at(_n_array_18739,_n_index_18740)+((_n_pg_18160-d::at(this->_n_G_17960,_n_k_18158))*_n_a_18162));d::put(_n_array_18739,_n_index_18740,_n_value_18741);return _n_value_18741;})()),([&](){auto&& _n_array_18742=this->_n_B_17961;auto _n_index_18743=_n_k_18158;auto _n_value_18744=(d::at(_n_array_18742,_n_index_18743)+((_n_pb_18161-d::at(this->_n_B_17961,_n_k_18158))*_n_a_18162));d::put(_n_array_18742,_n_index_18743,_n_value_18744);return _n_value_18744;})()));
if(d::truth((d::at(this->_n_FL_17962,_n_k_18158)<(0.12*_n_a_18162)))){d::check_cancel();(void)(([&](){auto&& _n_array_18745=this->_n_FL_17962;auto _n_index_18746=_n_k_18158;auto _n_value_18747=(0.12*_n_a_18162);d::put(_n_array_18745,_n_index_18746,_n_value_18747);return _n_value_18747;})());
}

}
}

void _n_lantern_17964(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::optional<d::Array<uint8_t,true>> _a6){double _n_cx_18163=_a0;
double _n_cy_18164=_a1;
double _n_h_18165=_a2;
double _n_I_18166=_a3;
double _n_a_18167=_a4;
double _n_limit_18168=_a5;
std::optional<d::Array<uint8_t,true>> _n_hide_18169=_a6;
{
if(d::truth((_n_h_18165<1.4))){d::check_cancel();double _n_x_18170=std::floor(_n_cx_18163);
double _n_r_18171=std::floor(_n_cy_18164);
if((((d::truth((_n_x_18170<0.0))||d::truth((_n_x_18170>=_n_W_17878)))||d::truth((_n_r_18171<0.0)))||d::truth((_n_r_18171>=_n_limit_18168)))){d::check_cancel();return;
}
double _n_k_18172=((_n_r_18171*_n_W_17878)+_n_x_18170);
if((d::truth(_n_hide_18169)&&d::truth(d::at(d::read(_n_hide_18169),_n_k_18172)))){d::check_cancel();return;
}
double _n_q_18173=(_n_I_18166*(0.85+(0.15*_n_h_18165)));
(void)(this->_n_paint_17963(_n_k_18172,_n_q_18173,(_n_q_18173*(0.42+(0.3*_n_q_18173))),(_n_q_18173*(0.1+((0.18*_n_q_18173)*_n_q_18173))),_n_a_18167));
return;
}
if(d::truth((_n_h_18165<2.6))){d::check_cancel();double _n_x_18174=std::floor(_n_cx_18163);
double _n_top_18175=(_n_cy_18164-1.0);
double _n_r0_18176=std::floor(_n_top_18175);
if((d::truth((_n_x_18174<0.0))||d::truth((_n_x_18174>=_n_W_17878)))){d::check_cancel();return;
}
{double _n_r_18177=_n_r0_18176;
for(;d::truth((_n_r_18177<=(_n_r0_18176+2.0)));(void)((_n_r_18177++))){d::check_cancel();if((d::truth((_n_r_18177<0.0))||d::truth((_n_r_18177>=_n_limit_18168)))){d::check_cancel();continue;
}
double _n_k_18178=((_n_r_18177*_n_W_17878)+_n_x_18174);
if((d::truth(_n_hide_18169)&&d::truth(d::at(d::read(_n_hide_18169),_n_k_18178)))){d::check_cancel();continue;
}
double _n_up_18179=([&](){auto _n_argument_18748=0.0;auto _n_argument_18749=([&](){auto _n_left_18750=d::minimum({(_n_r_18177+1.0),(_n_top_18175+1.0)});auto _n_right_18751=d::maximum({_n_r_18177,_n_top_18175});return (_n_left_18750-_n_right_18751);})();return d::maximum({_n_argument_18748,_n_argument_18749});})();
double _n_dn_18180=([&](){auto _n_argument_18752=0.0;auto _n_argument_18753=([&](){auto _n_left_18754=d::minimum({(_n_r_18177+1.0),(_n_top_18175+2.0)});auto _n_right_18755=d::maximum({_n_r_18177,(_n_top_18175+1.0)});return (_n_left_18754-_n_right_18755);})();return d::maximum({_n_argument_18752,_n_argument_18753});})();
if(d::truth(((_n_up_18179+_n_dn_18180)<0.02))){d::check_cancel();continue;
}
double _n_q_18181=((_n_I_18166*((0.8*_n_up_18179)+(1.1*_n_dn_18180)))/(_n_up_18179+_n_dn_18180));
(void)(this->_n_paint_17963(_n_k_18178,_n_q_18181,(_n_q_18181*(0.34+(0.36*_n_q_18181))),(_n_q_18181*(0.06+((0.2*_n_q_18181)*_n_q_18181))),(_n_a_18167*(_n_up_18179+_n_dn_18180))));
}}
return;
}
double _n_top_18182=(_n_cy_18164-(_n_h_18165/2.0));
double _n_x0_18183=([&](){auto _n_argument_18756=0.0;auto _n_argument_18757=std::floor((_n_cx_18163-(0.36*_n_h_18165)));return d::maximum({_n_argument_18756,_n_argument_18757});})();
double _n_x1_18184=([&](){auto _n_argument_18758=(_n_W_17878-1.0);auto _n_argument_18759=std::floor((_n_cx_18163+(0.36*_n_h_18165)));return d::minimum({_n_argument_18758,_n_argument_18759});})();
double _n_r0_18185=([&](){auto _n_argument_18760=0.0;auto _n_argument_18761=std::floor(_n_top_18182);return d::maximum({_n_argument_18760,_n_argument_18761});})();
double _n_r1_18186=([&](){auto _n_argument_18762=(_n_limit_18168-1.0);auto _n_argument_18763=std::floor((_n_top_18182+_n_h_18165));return d::minimum({_n_argument_18762,_n_argument_18763});})();
{double _n_r_18187=_n_r0_18185;
for(;d::truth((_n_r_18187<=_n_r1_18186));(void)((_n_r_18187++))){d::check_cancel();{double _n_x_18188=_n_x0_18183;
for(;d::truth((_n_x_18188<=_n_x1_18184));(void)((_n_x_18188++))){d::check_cancel();double _n_k_18189=((_n_r_18187*_n_W_17878)+_n_x_18188);
if((d::truth(_n_hide_18169)&&d::truth(d::at(d::read(_n_hide_18169),_n_k_18189)))){d::check_cancel();continue;
}
double _n_cov_18190=0.0;
{double _n_sy_18191=0.0;
for(;d::truth((_n_sy_18191<3.0));(void)((_n_sy_18191++))){d::check_cancel();{double _n_sx_18192=0.0;
for(;d::truth((_n_sx_18192<3.0));(void)((_n_sx_18192++))){d::check_cancel();if(d::truth(_n_inside_17910((((_n_x_18188+((_n_sx_18192+0.5)/3.0))-_n_cx_18163)/_n_h_18165),(((_n_r_18187+((_n_sy_18191+0.5)/3.0))-_n_top_18182)/_n_h_18165)))){d::check_cancel();(void)((_n_cov_18190++));
}
}}
}}
if(d::truth((!d::truth(_n_cov_18190)))){d::check_cancel();continue;
}
double _n_u_18193=(((_n_x_18188+0.5)-_n_cx_18163)/_n_h_18165);
double _n_v_18194=_n_clamp_17901((((_n_r_18187+0.5)-_n_top_18182)/_n_h_18165));
double _n_xn_18195=([&](){auto _n_argument_18764=1.0;auto _n_argument_18765=(std::fabs(_n_u_18193)/(0.34-(0.08*_n_v_18194)));return d::minimum({_n_argument_18764,_n_argument_18765});})();
double _n_q_18196=((_n_I_18166*(1.0-((0.3*_n_xn_18195)*_n_xn_18195)))*(0.78+(0.42*_n_v_18194)));
double _n_fl_18197=(std::exp(((-d::number(std::pow((_n_u_18193/0.13),2.0)))-std::pow(((_n_v_18194-0.9)/0.1),2.0)))*_n_I_18166);
(void)(this->_n_paint_17963(_n_k_18189,(_n_q_18196+(_n_fl_18197*0.3)),((_n_q_18196*(0.3+(0.42*_n_q_18196)))+(_n_fl_18197*0.6)),((_n_q_18196*(0.04+((0.2*_n_q_18196)*_n_q_18196)))+(_n_fl_18197*0.5)),((_n_cov_18190/9.0)*_n_a_18167)));
}}
}}

}
}

void _n_halo_17965(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_cx_18198=_a0;
double _n_cy_18199=_a1;
double _n_h_18200=_a2;
double _n_g_18201=_a3;
double _n_limit_18202=_a4;
{
double _n_e_18203=(0.4+(0.32*_n_h_18200));
double _n_reach_18204=std::ceil((_n_e_18203*4.0));
double _n_r0_18205=([&](){auto _n_argument_18766=0.0;auto _n_argument_18767=std::floor((_n_cy_18199-_n_reach_18204));return d::maximum({_n_argument_18766,_n_argument_18767});})();
double _n_r1_18206=([&](){auto _n_argument_18768=(_n_limit_18202-1.0);auto _n_argument_18769=std::floor((_n_cy_18199+_n_reach_18204));return d::minimum({_n_argument_18768,_n_argument_18769});})();
double _n_x0_18207=([&](){auto _n_argument_18770=0.0;auto _n_argument_18771=std::floor((_n_cx_18198-_n_reach_18204));return d::maximum({_n_argument_18770,_n_argument_18771});})();
double _n_x1_18208=([&](){auto _n_argument_18772=(_n_W_17878-1.0);auto _n_argument_18773=std::floor((_n_cx_18198+_n_reach_18204));return d::minimum({_n_argument_18772,_n_argument_18773});})();
{double _n_r_18209=_n_r0_18205;
for(;d::truth((_n_r_18209<=_n_r1_18206));(void)((_n_r_18209++))){d::check_cancel();double _n_dy_18210=((_n_r_18209+0.5)-_n_cy_18199);
{double _n_x_18211=_n_x0_18207;
for(;d::truth((_n_x_18211<=_n_x1_18208));(void)((_n_x_18211++))){d::check_cancel();double _n_dx_18212=((_n_x_18211+0.5)-_n_cx_18198);
double _n_d_18213=([&](){auto _n_argument_18774=0.0;auto _n_argument_18775=(std::sqrt(((_n_dx_18212*_n_dx_18212)+(_n_dy_18210*_n_dy_18210)))-(0.3*_n_h_18200));return d::maximum({_n_argument_18774,_n_argument_18775});})();
double _n_q_18214=(_n_g_18201*([&](){auto _n_left_18776=std::exp(((-d::number(_n_d_18213))/_n_e_18203));auto _n_right_18777=(0.25*std::exp(((-d::number(_n_d_18213))/(_n_e_18203*2.5))));return (_n_left_18776+_n_right_18777);})());
double _n_k_18215=((_n_r_18209*_n_W_17878)+_n_x_18211);
(void)(((([&](){auto&& _n_array_18778=this->_n_R_17959;auto _n_index_18779=_n_k_18215;auto _n_value_18780=(d::at(_n_array_18778,_n_index_18779)+_n_q_18214);d::put(_n_array_18778,_n_index_18779,_n_value_18780);return _n_value_18780;})(),([&](){auto&& _n_array_18781=this->_n_G_17960;auto _n_index_18782=_n_k_18215;auto _n_value_18783=(d::at(_n_array_18781,_n_index_18782)+(_n_q_18214*0.5));d::put(_n_array_18781,_n_index_18782,_n_value_18783);return _n_value_18783;})()),([&](){auto&& _n_array_18784=this->_n_B_17961;auto _n_index_18785=_n_k_18215;auto _n_value_18786=(d::at(_n_array_18784,_n_index_18785)+(_n_q_18214*0.17));d::put(_n_array_18784,_n_index_18785,_n_value_18786);return _n_value_18786;})()));
}}
}}

}
}

explicit Native_lantern_lake(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_17911=d::map(_n_meta_17876->_p_palette,_n_hex_17904);
this->_n_STAR_17912=(double(this->_n_P_17911.size())-3.0);
this->_n_SL_17913=(this->_n_STAR_17912-3.0);
this->_n_N_17914=(_n_W_17878*_n_H_17879);
this->_n_S_17915=(_n_WL_17880*_n_W_17878);
this->_n_out_17916=d::Array<d::String,false>(size_t(this->_n_N_17914));
this->_n_lut_17917=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_17919=d::Array<uint8_t,true>(size_t(this->_n_S_17915));
this->_n_sR_17920=d::Array<float,true>(size_t(this->_n_S_17915));
this->_n_sG_17921=d::Array<float,true>(size_t(this->_n_S_17915));
this->_n_sB_17922=d::Array<float,true>(size_t(this->_n_S_17915));
this->_n_take_17923=d::Array<float,true>(size_t(this->_n_S_17915));
this->_n_backTop_17924=d::Array<float,true>(size_t(_n_W_17878));
this->_n_backX_17925=d::Array<float,true>(size_t(_n_W_17878));
this->_n_frontTop_17926=d::Array<float,true>(size_t(_n_W_17878));
this->_n_frontX_17927=d::Array<float,true>(size_t(_n_W_17878));
this->_n_farTop_17928=d::Array<float,true>(size_t(_n_W_17878));
{double _n_x_18040=0.0;
for(;d::truth((_n_x_18040<_n_W_17878));(void)((_n_x_18040++))){d::check_cancel();auto _n_binding_18369=_n_range_17909((_n_x_18040+0.5),_n_PEAKS_17906,3.1,4.0);
double _n_hb_18041=d::at(_n_binding_18369,0.0);
double _n_pb_18042=d::at(_n_binding_18369,1.0);
auto _n_binding_18370=_n_range_17909((_n_x_18040+0.5),_n_SHOULDERS_17907,7.7,3.0);
double _n_hf_18043=d::at(_n_binding_18370,0.0);
double _n_pf_18044=d::at(_n_binding_18370,1.0);
auto _n_binding_18371=_n_range_17909((_n_x_18040+0.5),_n_DISTANT_17908,11.3,2.2);
double _n_hd_18045=d::at(_n_binding_18371,0.0);
(void)((([&](){auto&& _n_array_18372=this->_n_backTop_17924;auto _n_index_18373=_n_x_18040;auto _n_value_18374=(_n_WL_17880-d::maximum({_n_hb_18041,0.0}));d::put(_n_array_18372,_n_index_18373,_n_value_18374);return _n_value_18374;})(),([&](){auto&& _n_array_18375=this->_n_backX_17925;auto _n_index_18376=_n_x_18040;auto _n_value_18377=_n_pb_18042;d::put(_n_array_18375,_n_index_18376,_n_value_18377);return _n_value_18377;})()));
(void)((([&](){auto&& _n_array_18378=this->_n_frontTop_17926;auto _n_index_18379=_n_x_18040;auto _n_value_18380=(_n_WL_17880-d::maximum({_n_hf_18043,0.0}));d::put(_n_array_18378,_n_index_18379,_n_value_18380);return _n_value_18380;})(),([&](){auto&& _n_array_18381=this->_n_frontX_17927;auto _n_index_18382=_n_x_18040;auto _n_value_18383=_n_pf_18044;d::put(_n_array_18381,_n_index_18382,_n_value_18383);return _n_value_18383;})()));
(void)(([&](){auto&& _n_array_18384=this->_n_farTop_17928;auto _n_index_18385=_n_x_18040;auto _n_value_18386=(_n_WL_17880-d::maximum({_n_hd_18045,0.0}));d::put(_n_array_18384,_n_index_18385,_n_value_18386);return _n_value_18386;})());
}}
this->_n_HUES_17930=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.22,0.36,1.0},d::Array<double,false>{0.46,0.36,1.0},d::Array<double,false>{0.76,0.42,0.92},d::Array<double,false>{1.0,0.48,0.58},d::Array<double,false>{1.0,0.54,0.34},d::Array<double,false>{1.0,0.58,0.2}};
this->_n_far_17933=d::Array<uint8_t,true>(size_t(this->_n_S_17915));
{double _n_r_18080=0.0;
for(;d::truth((_n_r_18080<_n_WL_17880));(void)((_n_r_18080++))){d::check_cancel();{double _n_x_18081=0.0;
for(;d::truth((_n_x_18081<_n_W_17878));(void)((_n_x_18081++))){d::check_cancel();double _n_k_18082=((_n_r_18080*_n_W_17878)+_n_x_18081);
double _n_y_18083=(_n_r_18080+0.5);
double _n_xc_18084=(_n_x_18081+0.5);
if(d::truth((_n_y_18083>=d::at(this->_n_frontTop_17926,_n_x_18081)))){d::check_cancel();(void)(([&](){auto&& _n_array_18387=this->_n_mat_17919;auto _n_index_18388=_n_k_18082;auto _n_value_18389=_n_PEAK_17896;d::put(_n_array_18387,_n_index_18388,_n_value_18389);return _n_value_18389;})());
(void)(this->_n_slope_17932(_n_k_18082,_n_x_18081,_n_y_18083,d::at(this->_n_frontTop_17926,_n_x_18081),d::at(this->_n_frontX_17927,_n_x_18081),0.05,0.06,0.3,1.0));
}else {d::check_cancel();if(d::truth((_n_y_18083>=d::at(this->_n_backTop_17924,_n_x_18081)))){d::check_cancel();(void)(([&](){auto&& _n_array_18390=this->_n_mat_17919;auto _n_index_18391=_n_k_18082;auto _n_value_18392=_n_BACK_17895;d::put(_n_array_18390,_n_index_18391,_n_value_18392);return _n_value_18392;})());
if((d::truth((this->_n_slope_17932(_n_k_18082,_n_x_18081,_n_y_18083,d::at(this->_n_backTop_17924,_n_x_18081),d::at(this->_n_backX_17925,_n_x_18081),0.24,0.3,0.35,0.5)<0.3))&&d::truth(((_n_y_18083-d::at(this->_n_backTop_17924,_n_x_18081))>1.2)))){d::check_cancel();(void)(([&](){auto&& _n_array_18393=this->_n_far_17933;auto _n_index_18394=_n_k_18082;auto _n_value_18395=1.0;d::put(_n_array_18393,_n_index_18394,_n_value_18395);return _n_value_18395;})());
}
}else {d::check_cancel();if(d::truth((_n_y_18083>=d::at(this->_n_farTop_17928,_n_x_18081)))){d::check_cancel();(void)(([&](){auto&& _n_array_18396=this->_n_mat_17919;auto _n_index_18397=_n_k_18082;auto _n_value_18398=_n_FAR_17894;d::put(_n_array_18396,_n_index_18397,_n_value_18398);return _n_value_18398;})());
double _n_tex_18085=_n_fbm_17900((_n_x_18081*0.2),(_n_y_18083*0.3),3.0);
double _n_w_18086=this->_n_dome_17929(_n_xc_18084,_n_y_18083);
double _n_b_18087=(((0.06+(0.04*_n_tex_18085))+(0.3*_n_w_18086))+(0.7*std::pow(_n_w_18086,3.0)));
(void)(((([&](){auto&& _n_array_18399=this->_n_sR_17920;auto _n_index_18400=_n_k_18082;auto _n_value_18401=(_n_b_18087*this->_n_hue_17931(_n_w_18086,0.0));d::put(_n_array_18399,_n_index_18400,_n_value_18401);return _n_value_18401;})(),([&](){auto&& _n_array_18402=this->_n_sG_17921;auto _n_index_18403=_n_k_18082;auto _n_value_18404=(_n_b_18087*this->_n_hue_17931(_n_w_18086,1.0));d::put(_n_array_18402,_n_index_18403,_n_value_18404);return _n_value_18404;})()),([&](){auto&& _n_array_18405=this->_n_sB_17922;auto _n_index_18406=_n_k_18082;auto _n_value_18407=(_n_b_18087*this->_n_hue_17931(_n_w_18086,2.0));d::put(_n_array_18405,_n_index_18406,_n_value_18407);return _n_value_18407;})()));
}else {d::check_cancel();double _n_v_18088=std::pow((_n_y_18083/_n_WL_17880),1.5);
double _n_hz_18089=(0.85+(0.3*_n_fbm_17900((_n_x_18081*0.04),(_n_r_18080*0.07),3.0)));
double _n_w_18090=this->_n_dome_17929(_n_xc_18084,_n_y_18083);
double _n_b_18091=(((0.18+(0.32*_n_v_18088))*_n_hz_18089)+(0.5*_n_w_18090));
(void)(((([&](){auto&& _n_array_18408=this->_n_sR_17920;auto _n_index_18409=_n_k_18082;auto _n_value_18410=(_n_b_18091*this->_n_hue_17931(_n_w_18090,0.0));d::put(_n_array_18408,_n_index_18409,_n_value_18410);return _n_value_18410;})(),([&](){auto&& _n_array_18411=this->_n_sG_17921;auto _n_index_18412=_n_k_18082;auto _n_value_18413=(_n_b_18091*this->_n_hue_17931(_n_w_18090,1.0));d::put(_n_array_18411,_n_index_18412,_n_value_18413);return _n_value_18413;})()),([&](){auto&& _n_array_18414=this->_n_sB_17922;auto _n_index_18415=_n_k_18082;auto _n_value_18416=(_n_b_18091*this->_n_hue_17931(_n_w_18090,2.0));d::put(_n_array_18414,_n_index_18415,_n_value_18416);return _n_value_18416;})()));
(void)(([&](){auto&& _n_array_18417=this->_n_take_17923;auto _n_index_18418=_n_k_18082;auto _n_value_18419=_n_w_18090;d::put(_n_array_18417,_n_index_18418,_n_value_18419);return _n_value_18419;})());
}
}
}
}}
}}
{double _n_r_18093=0.0;
for(;d::truth((_n_r_18093<_n_WL_17880));(void)((_n_r_18093++))){d::check_cancel();{double _n_x_18094=0.0;
for(;d::truth((_n_x_18094<_n_W_17878));(void)((_n_x_18094++))){d::check_cancel();if(d::truth(((_n_r_18093+0.5)>=this->_n_scrub_17934((_n_x_18094+0.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_18420=this->_n_mat_17919;auto _n_index_18421=((_n_r_18093*_n_W_17878)+_n_x_18094);auto _n_value_18422=_n_TREE_17897;d::put(_n_array_18420,_n_index_18421,_n_value_18422);return _n_value_18422;})());
}
}}
}}
{double _n_x_18105=(-d::number(2.0));
for(;d::truth((_n_x_18105<(_n_W_17878+2.0)));){d::check_cancel();double _n_h_18106=([&](){auto _n_argument_18423=std::floor((_n_x_18105*7.0));auto _n_argument_18424=21.0;return _n_hash_17898(_n_argument_18423,_n_argument_18424);})();
double _n_clearing_18107=([&](){auto _n_argument_18425=22.0;auto _n_argument_18426=0.0;auto _n_argument_18427=std::fabs((_n_x_18105-_n_SRC_17881));return _n_smooth_17902(_n_argument_18425,_n_argument_18426,_n_argument_18427);})();
double _n_th_18108=((2.6+(4.4*std::pow(([&](){auto _n_argument_18428=std::floor((_n_x_18105*3.0));auto _n_argument_18429=5.0;return _n_hash_17898(_n_argument_18428,_n_argument_18429);})(),1.2)))*(1.0-(0.3*_n_clearing_18107)));
(void)(([&](){auto _n_argument_18430=(_n_x_18105+([&](){auto _n_argument_18431=std::floor(_n_x_18105);auto _n_argument_18432=2.0;return _n_hash_17898(_n_argument_18431,_n_argument_18432);})());auto _n_argument_18433=_n_th_18108;auto _n_argument_18434=(1.0+(0.8*([&](){auto _n_argument_18435=std::floor(_n_x_18105);auto _n_argument_18436=4.0;return _n_hash_17898(_n_argument_18435,_n_argument_18436);})()));auto _n_argument_18437=(this->_n_scrub_17934(_n_x_18105)+1.0);return this->_n_spruce_17935(_n_argument_18430,_n_argument_18433,_n_argument_18434,_n_argument_18437);})());
(void)((_n_x_18105=(_n_x_18105+(1.2+(1.8*_n_h_18106)))));
}}
{double _n_k_18109=0.0;
for(;d::truth((_n_k_18109<this->_n_S_17915));(void)((_n_k_18109++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_17919,_n_k_18109)!=_n_TREE_17897))){d::check_cancel();continue;
}
double _n_x_18110=d::mod(_n_k_18109,_n_W_17878);
double _n_r_18111=double(d::i32((_n_k_18109/_n_W_17878))|d::i32(0.0));
double _n_h_18112=_n_hash_17898(((_n_x_18110*13.0)+_n_r_18111),5.0);
(void)(((([&](){auto&& _n_array_18438=this->_n_sR_17920;auto _n_index_18439=_n_k_18109;auto _n_value_18440=(0.004+(0.004*_n_h_18112));d::put(_n_array_18438,_n_index_18439,_n_value_18440);return _n_value_18440;})(),([&](){auto&& _n_array_18441=this->_n_sG_17921;auto _n_index_18442=_n_k_18109;auto _n_value_18443=(0.006+(0.006*_n_h_18112));d::put(_n_array_18441,_n_index_18442,_n_value_18443);return _n_value_18443;})()),([&](){auto&& _n_array_18444=this->_n_sB_17922;auto _n_index_18445=_n_k_18109;auto _n_value_18446=(0.012+(0.008*_n_h_18112));d::put(_n_array_18444,_n_index_18445,_n_value_18446);return _n_value_18446;})()));
double _n_edge_18113=((d::truth((_n_r_18111==0.0))||d::truth((d::at(this->_n_mat_17919,(_n_k_18109-_n_W_17878))!=_n_TREE_17897)))?1.0:((d::truth((_n_r_18111>1.0))&&d::truth((d::at(this->_n_mat_17919,(_n_k_18109-(2.0*_n_W_17878)))!=_n_TREE_17897)))?0.35:0.0));
double _n_g_18114=((_n_edge_18113*this->_n_dome_17929((_n_x_18110+0.5),(_n_r_18111+0.5)))*0.45);
(void)(((([&](){auto&& _n_array_18447=this->_n_sR_17920;auto _n_index_18448=_n_k_18109;auto _n_value_18449=(d::at(_n_array_18447,_n_index_18448)+_n_g_18114);d::put(_n_array_18447,_n_index_18448,_n_value_18449);return _n_value_18449;})(),([&](){auto&& _n_array_18450=this->_n_sG_17921;auto _n_index_18451=_n_k_18109;auto _n_value_18452=(d::at(_n_array_18450,_n_index_18451)+(_n_g_18114*0.5));d::put(_n_array_18450,_n_index_18451,_n_value_18452);return _n_value_18452;})()),([&](){auto&& _n_array_18453=this->_n_sB_17922;auto _n_index_18454=_n_k_18109;auto _n_value_18455=(d::at(_n_array_18453,_n_index_18454)+(_n_g_18114*0.18));d::put(_n_array_18453,_n_index_18454,_n_value_18455);return _n_value_18455;})()));
(void)(([&](){auto&& _n_array_18456=this->_n_take_17923;auto _n_index_18457=_n_k_18109;auto _n_value_18458=(_n_edge_18113*0.5);d::put(_n_array_18456,_n_index_18457,_n_value_18458);return _n_value_18458;})());
}}
this->_n_floorS_17936=d::Array<float,true>(size_t(this->_n_S_17915));
{double _n_k_18115=0.0;
for(;d::truth((_n_k_18115<this->_n_S_17915));(void)((_n_k_18115++))){d::check_cancel();(void)(([&](){auto&& _n_array_18459=this->_n_floorS_17936;auto _n_index_18460=_n_k_18115;auto _n_value_18461=(d::truth((d::at(this->_n_mat_17919,_n_k_18115)==_n_AIR_17893))?(0.04+((0.08*double(d::i32((_n_k_18115/_n_W_17878))|d::i32(0.0)))/_n_WL_17880)):((d::truth((d::at(this->_n_mat_17919,_n_k_18115)==_n_FAR_17894))||d::truth((d::at(this->_n_mat_17919,_n_k_18115)==_n_BACK_17895)))?0.03:0.0));d::put(_n_array_18459,_n_index_18460,_n_value_18461);return _n_value_18461;})());
}}
this->_n_shoreLights_17937=d::Array<d::Array<double,false>,false>{};
{double _n_i_18116=0.0;
double _n_x_18117=(_n_SRC_17881-24.0);
for(;d::truth((_n_i_18116<8.0));(void)((_n_i_18116++))){d::check_cancel();(void)(this->_n_shoreLights_17937.push(d::Array<double,false>{d::round(_n_x_18117),((_n_WL_17880-1.0)-(d::truth((_n_hash_17898(_n_i_18116,62.0)>0.6))?1.0:0.0)),(_n_hash_17898(_n_i_18116,63.0)*6.28)}));
(void)((_n_x_18117=(_n_x_18117+(2.0+(9.0*std::pow(_n_hash_17898(_n_i_18116,61.0),2.0))))));
}}
this->_n_stars_17938=d::Array<d::Array<double,false>,false>{};
{double _n_k_18118=0.0;
for(;d::truth((_n_k_18118<this->_n_S_17915));(void)((_n_k_18118++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_17919,_n_k_18118)!=_n_AIR_17893))){d::check_cancel();continue;
}
double _n_h_18119=([&](){auto _n_argument_18462=d::mod(_n_k_18118,_n_W_17878);auto _n_argument_18463=(std::floor((_n_k_18118/_n_W_17878))+101.0);return _n_hash_17898(_n_argument_18462,_n_argument_18463);})();
if((d::truth((_n_h_18119>0.985))&&d::truth((d::at(this->_n_take_17923,_n_k_18118)<0.25)))){d::check_cancel();(void)(this->_n_stars_17938.push(d::Array<double,false>{_n_k_18118,(_n_hash_17898(_n_k_18118,3.0)*6.28),(0.8+(_n_hash_17898(_n_k_18118,4.0)*2.5)),((0.45+((_n_h_18119-0.985)*40.0))*(1.0-(d::at(this->_n_take_17923,_n_k_18118)*2.5)))}));
}
}}
this->_n_gap_17939=d::Array<uint8_t,true>(size_t(_n_H_17879));
{double _n_r_18120=_n_WL_17880;
for(;d::truth((_n_r_18120<_n_H_17879));(void)((_n_r_18120++))){d::check_cancel();(void)(([&](){auto&& _n_array_18464=this->_n_gap_17939;auto _n_index_18465=_n_r_18120;auto _n_value_18466=(d::truth((_n_hash_17898(_n_r_18120,404.0)<0.3))?1.0:0.0);d::put(_n_array_18464,_n_index_18465,_n_value_18466);return _n_value_18466;})());
}}
this->_n_shore_17940=d::Array<std::shared_ptr<_n_Record_17941>,false>{};
{double _n_i_18121=0.0;
for(;d::truth((_n_i_18121<240.0));(void)((_n_i_18121++))){d::check_cancel();bool _n_near_18122=(_n_i_18121>=196.0);
double _n_s_18123=(d::truth(_n_near_18122)?(1.5+(1.7*std::pow(_n_hash_17898(_n_i_18121,11.0),1.5))):(0.45+(0.9*std::pow(_n_hash_17898(_n_i_18121,11.0),1.4))));
double _n_v_18124=(0.3+(0.62*_n_s_18123));
bool _n_out_18125=([&]()->bool{auto _n_logical_18467=_n_near_18122;return d::truth(_n_logical_18467)?(_n_hash_17898(_n_i_18121,12.0)<0.7):_n_logical_18467;})();
double _n_climb_18126=(d::truth(_n_out_18125)?((_n_WL_17880+(3.0*_n_s_18123))+4.0):(12.0+(46.0*std::pow(_n_hash_17898(_n_i_18121,13.0),0.8))));
(void)(this->_n_shore_17940.push(([&](){auto _n_object_18469=std::make_shared<_n_Record_17941>();_n_object_18469->_p_i=_n_i_18121;_n_object_18469->_p_s=_n_s_18123;_n_object_18469->_p_v=_n_v_18124;_n_object_18469->_p_life=(((_n_climb_18126+_n_s_18123)+1.0)/_n_v_18124);_n_object_18469->_p_off=_n_hash_17898(_n_i_18121,14.0);_n_object_18469->_p_wd=(0.12+(0.3*_n_hash_17898(_n_i_18121,15.0)));_n_object_18469->_p_sw=((0.25*_n_s_18123)+0.2);_n_object_18469->_p_sf=(0.3+(0.5*_n_hash_17898(_n_i_18121,16.0)));_n_object_18469->_p_ph=(_n_hash_17898(_n_i_18121,17.0)*6.28);_n_object_18469->_p_f1=(2.0+(3.0*_n_hash_17898(_n_i_18121,18.0)));_n_object_18469->_p_f2=(5.0+(4.0*_n_hash_17898(_n_i_18121,19.0)));_n_object_18469->_p_out=_n_out_18125;_n_object_18469->_p_wide=([&]()->bool{auto _n_logical_18470=_n_near_18122;return d::truth(_n_logical_18470)?_n_logical_18470:(_n_hash_17898(_n_i_18121,20.0)<0.08);})();return _n_object_18469;})()));
}}
(void)(this->_n_shore_17940.sort([=]( std::shared_ptr<_n_Record_17941> _a0,std::shared_ptr<_n_Record_17941> _a1) mutable ->double{std::shared_ptr<_n_Record_17941> _n_a_18127=_a0;
std::shared_ptr<_n_Record_17941> _n_b_18128=_a1;
return (_n_a_18127->_p_s-_n_b_18128->_p_s);}));
this->_n_NEAR_17944=d::Array<d::Array<double,false>,false>{d::Array<double,false>{12.5,34.0,30.0},d::Array<double,false>{8.5,178.0,14.0},d::Array<double,false>{6.5,66.0,74.0},d::Array<double,false>{5.2,154.0,46.0},d::Array<double,false>{4.4,18.0,86.0},d::Array<double,false>{4.6,136.0,4.0},d::Array<double,false>{9.5,190.0,116.0},d::Array<double,false>{10.5,150.0,160.0},d::Array<double,false>{5.8,80.0,128.0},d::Array<double,false>{7.0,28.0,190.0},d::Array<double,false>{4.2,172.0,150.0}};
this->_n_close_17945=d::map(this->_n_NEAR_17944,[&]( d::Array<double,false> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_17946>{auto _n_binding_18471=_a0;
double _n_s_18134=d::at(_n_binding_18471,0.0);
double _n_x_18135=d::at(_n_binding_18471,1.0);
double _n_y_18136=d::at(_n_binding_18471,2.0);
double _n_i_18137=_a1;
{
double _n_v_18138=(0.35+(0.42*_n_s_18134));
double _n_path_18139=(_n_H_17879+(5.0*_n_s_18134));
double _n_life_18140=((_n_path_18139/_n_v_18138)*(1.08+(0.3*_n_hash_17898(_n_i_18137,41.0))));
return ([&](){auto _n_object_18473=std::make_shared<_n_Record_17946>();_n_object_18473->_p_i=_n_i_18137;_n_object_18473->_p_s=_n_s_18134;_n_object_18473->_p_v=_n_v_18138;_n_object_18473->_p_x=_n_x_18135;_n_object_18473->_p_path=_n_path_18139;_n_object_18473->_p_life=_n_life_18140;_n_object_18473->_p_off=((((_n_H_17879+(2.5*_n_s_18134))-_n_y_18136)/_n_v_18138)/_n_life_18140);_n_object_18473->_p_wd=(_n_s_18134*0.05);_n_object_18473->_p_sw=(0.35*_n_s_18134);_n_object_18473->_p_sf=(0.2+(0.2*_n_hash_17898(_n_i_18137,42.0)));_n_object_18473->_p_ph=(_n_hash_17898(_n_i_18137,43.0)*6.28);return _n_object_18473;})();

}
});
this->_n_ARMS_17947=([&](){auto _n_object_18475=std::make_shared<_n_Record_17948>();_n_object_18475->_p_up=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.3,9.4},d::Array<double,false>{3.0,11.5},d::Array<double,false>{2.0,14.1}};_n_object_18475->_p_down=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.3,9.4},d::Array<double,false>{2.0,6.6},d::Array<double,false>{1.9,4.4}};_n_object_18475->_p_chest=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.3,9.4},d::Array<double,false>{2.4,7.2},d::Array<double,false>{1.2,6.0}};return _n_object_18475;})();
this->_n_BOX_17952=d::Array<double,false>{std::floor((_n_BX_17882-(13.0*_n_SC_17884))),(_n_BW_17883-std::ceil((16.0*_n_SC_17884))),std::ceil((27.0*_n_SC_17884)),(std::ceil((16.0*_n_SC_17884))+2.0)};
this->_n_hulls_17953=d::Array<uint8_t,true>(size_t((d::at(this->_n_BOX_17952,2.0)*d::at(this->_n_BOX_17952,3.0))));
this->_n_shape_17954=d::Array<uint8_t,true>(size_t((d::at(this->_n_BOX_17952,2.0)*d::at(this->_n_BOX_17952,3.0))));
{double _n_j_18148=0.0;
for(;d::truth((_n_j_18148<d::at(this->_n_BOX_17952,3.0)));(void)((_n_j_18148++))){d::check_cancel();{double _n_i_18149=0.0;
for(;d::truth((_n_i_18149<d::at(this->_n_BOX_17952,2.0)));(void)((_n_i_18149++))){d::check_cancel();if(d::truth(this->_n_hull_17950(((((d::at(this->_n_BOX_17952,0.0)+_n_i_18149)+0.5)-_n_BX_17882)/_n_SC_17884),((_n_BW_17883-((d::at(this->_n_BOX_17952,1.0)+_n_j_18148)+0.5))/_n_SC_17884)))){d::check_cancel();(void)(([&](){auto&& _n_array_18476=this->_n_hulls_17953;auto _n_index_18477=((_n_j_18148*d::at(this->_n_BOX_17952,2.0))+_n_i_18149);auto _n_value_18478=1.0;d::put(_n_array_18476,_n_index_18477,_n_value_18478);return _n_value_18478;})());
}
}}
}}
this->_n_arms_17955=d::map(this->_n_ARMS_17947->_p_up,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{d::Array<double,false> _n_p_18150=_a0;
return ([&](){d::Array<double,false> _n_array_18479;for(const auto &_v:_n_p_18150)_n_array_18479.push(_v);return _n_array_18479;})();});
this->_n_BOWX_17957=(_n_BX_17882+(11.2*_n_SC_17884));
this->_n_BOWY_17958=(_n_BW_17883-((this->_n_gunwale_17949(11.2)+1.2)*_n_SC_17884));
this->_n_R_17959=d::Array<float,true>(size_t(this->_n_N_17914));
this->_n_G_17960=d::Array<float,true>(size_t(this->_n_N_17914));
this->_n_B_17961=d::Array<float,true>(size_t(this->_n_N_17914));
this->_n_FL_17962=d::Array<float,true>(size_t(this->_n_N_17914));
this->_n_hide_17966=d::Array<uint8_t,true>(size_t(this->_n_S_17915));
{double _n_k_18216=0.0;
for(;d::truth((_n_k_18216<this->_n_S_17915));(void)((_n_k_18216++))){d::check_cancel();(void)(([&](){auto&& _n_array_18480=this->_n_hide_17966;auto _n_index_18481=_n_k_18216;auto _n_value_18482=(d::truth((d::at(this->_n_mat_17919,_n_k_18216)==_n_TREE_17897))?1.0:0.0);d::put(_n_array_18480,_n_index_18481,_n_value_18482);return _n_value_18482;})());
}}
this->_n_roadX_17967=d::Array<float,true>(size_t(_n_H_17879));
this->_n_roadW_17968=d::Array<float,true>(size_t(_n_H_17879));
this->_n_roadA_17969=d::Array<float,true>(size_t(_n_H_17879));
{double _n_r_18217=_n_WL_17880;
for(;d::truth((_n_r_18217<_n_H_17879));(void)((_n_r_18217++))){d::check_cancel();double _n_dw_18218=((_n_r_18217+0.5)-_n_WL_17880);
(void)(([&](){auto&& _n_array_18483=this->_n_roadX_17967;auto _n_index_18484=_n_r_18217;auto _n_value_18485=((_n_SRC_17881+4.0)+(_n_dw_18218*0.12));d::put(_n_array_18483,_n_index_18484,_n_value_18485);return _n_value_18485;})());
(void)(([&](){auto&& _n_array_18486=this->_n_roadW_17968;auto _n_index_18487=_n_r_18217;auto _n_value_18488=(7.0+(_n_dw_18218*0.9));d::put(_n_array_18486,_n_index_18487,_n_value_18488);return _n_value_18488;})());
(void)(([&](){auto&& _n_array_18489=this->_n_roadA_17969;auto _n_index_18490=_n_r_18217;auto _n_value_18491=([&](){auto _n_left_18492=(0.9*_n_smooth_17902(3.0,16.0,_n_dw_18218));auto _n_right_18493=std::exp(((-d::number(_n_dw_18218))/60.0));return (_n_left_18492*_n_right_18493);})();d::put(_n_array_18489,_n_index_18490,_n_value_18491);return _n_value_18491;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_18354> _a1) mutable ->d::String{double _n_t_18219=_a0;
auto _n_binding_18496=(d::present(_a1)?_a1:([&](){auto _n_object_18495=std::make_shared<_n_Record_18354>();return _n_object_18495;})());
std::optional<d::Array<uint8_t,true>> _n_color_18220=_n_binding_18496->_p_color;
{
double _n_breathe_18221=([&](){auto _n_left_18497=(0.06*std::sin((_n_t_18219*0.5)));auto _n_right_18498=(0.04*std::sin(((_n_t_18219*1.7)+1.0)));return (_n_left_18497+_n_right_18498);})();
{double _n_k_18222=0.0;
for(;d::truth((_n_k_18222<this->_n_S_17915));(void)((_n_k_18222++))){d::check_cancel();double _n_g_18223=(1.0+(d::at(this->_n_take_17923,_n_k_18222)*_n_breathe_18221));
(void)(((([&](){auto&& _n_array_18499=this->_n_R_17959;auto _n_index_18500=_n_k_18222;auto _n_value_18501=(d::at(this->_n_sR_17920,_n_k_18222)*_n_g_18223);d::put(_n_array_18499,_n_index_18500,_n_value_18501);return _n_value_18501;})(),([&](){auto&& _n_array_18502=this->_n_G_17960;auto _n_index_18503=_n_k_18222;auto _n_value_18504=(d::at(this->_n_sG_17921,_n_k_18222)*_n_g_18223);d::put(_n_array_18502,_n_index_18503,_n_value_18504);return _n_value_18504;})()),([&](){auto&& _n_array_18505=this->_n_B_17961;auto _n_index_18506=_n_k_18222;auto _n_value_18507=(d::at(this->_n_sB_17922,_n_k_18222)*_n_g_18223);d::put(_n_array_18505,_n_index_18506,_n_value_18507);return _n_value_18507;})()));
(void)(([&](){auto&& _n_array_18508=this->_n_FL_17962;auto _n_index_18509=_n_k_18222;auto _n_value_18510=d::at(this->_n_floorS_17936,_n_k_18222);d::put(_n_array_18508,_n_index_18509,_n_value_18510);return _n_value_18510;})());
}}
for(auto &&_n_item_18511:this->_n_shore_17940){d::check_cancel();std::shared_ptr<_n_Record_17941> _n_f_18224=_n_item_18511;
{
double _n_u_18225=((_n_t_18219/_n_f_18224->_p_life)+_n_f_18224->_p_off);
double _n_lap_18226=std::floor(_n_u_18225);
double _n_a_18227=((_n_u_18225-_n_lap_18226)*_n_f_18224->_p_life);
double _n_cx_18228=([&](){auto _n_left_18512=([&](){auto _n_left_18514=this->_n_startX_17942(_n_f_18224,_n_lap_18226);auto _n_right_18515=this->_n_lean_17943(_n_f_18224,(_n_f_18224->_p_v*_n_a_18227));return (_n_left_18514+_n_right_18515);})();auto _n_right_18513=(_n_f_18224->_p_sw*([&](){auto _n_left_18516=std::sin(((_n_a_18227*_n_f_18224->_p_sf)+_n_f_18224->_p_ph));auto _n_right_18517=std::sin(_n_f_18224->_p_ph);return (_n_left_18516-_n_right_18517);})());return (_n_left_18512+_n_right_18513);})();
double _n_cy_18229=(((_n_WL_17880+(_n_f_18224->_p_s*0.5))+0.6)-(_n_f_18224->_p_v*_n_a_18227));
if(d::truth((_n_cy_18229<(((-d::number(2.0))*_n_f_18224->_p_s)-2.0)))){d::check_cancel();continue;
}
double _n_I_18230=([&](){auto _n_left_18518=(0.7+(0.45*d::minimum({1.0,_n_f_18224->_p_s})));auto _n_right_18519=([&](){auto _n_left_18520=(0.88+(0.08*std::sin(((_n_t_18219*_n_f_18224->_p_f1)+_n_f_18224->_p_ph))));auto _n_right_18521=(0.04*std::sin((_n_t_18219*_n_f_18224->_p_f2)));return (_n_left_18520+_n_right_18521);})();return (_n_left_18518*_n_right_18519);})();
double _n_alpha_18231=1.0;
if(d::truth((!d::truth(_n_f_18224->_p_out)))){d::check_cancel();double _n_end_18232=_n_smooth_17902((_n_f_18224->_p_life-4.0),_n_f_18224->_p_life,_n_a_18227);
(void)((_n_I_18230=(_n_I_18230*(1.0-((0.55*_n_end_18232)*(0.6+(0.4*std::sin(((_n_a_18227*11.0)+_n_f_18224->_p_ph)))))))));
(void)((_n_alpha_18231=(1.0-_n_end_18232)));
}
if(d::truth((_n_alpha_18231<=0.01))){d::check_cancel();continue;
}
if(d::truth((_n_f_18224->_p_s>=1.4))){d::check_cancel();(void)(([&](){auto _n_argument_18522=_n_cx_18228;auto _n_argument_18523=_n_cy_18229;auto _n_argument_18524=_n_f_18224->_p_s;auto _n_argument_18525=(((0.07*_n_I_18230)*_n_alpha_18231)*_n_smooth_17902(0.0,2.0,_n_a_18227));auto _n_argument_18526=_n_WL_17880;return this->_n_halo_17965(_n_argument_18522,_n_argument_18523,_n_argument_18524,_n_argument_18525,_n_argument_18526);})());
}
(void)(this->_n_lantern_17964(_n_cx_18228,_n_cy_18229,_n_f_18224->_p_s,_n_I_18230,_n_alpha_18231,_n_WL_17880,std::optional<d::Array<uint8_t,true>>(this->_n_hide_17966)));

}
}
for(auto &&_n_item_18527:this->_n_shoreLights_17937){d::check_cancel();auto _n_binding_18528=_n_item_18527;
double _n_x_18233=d::at(_n_binding_18528,0.0);
double _n_r_18234=d::at(_n_binding_18528,1.0);
double _n_ph_18235=d::at(_n_binding_18528,2.0);
{
double _n_k_18236=((_n_r_18234*_n_W_17878)+_n_x_18233);
double _n_q_18237=([&](){auto _n_left_18529=(0.9+(0.15*std::sin(((_n_t_18219*3.1)+_n_ph_18235))));auto _n_right_18530=(0.1*std::sin(((_n_t_18219*7.3)+(_n_ph_18235*2.0))));return (_n_left_18529+_n_right_18530);})();
(void)((((([&](){auto&& _n_array_18531=this->_n_R_17959;auto _n_index_18532=_n_k_18236;auto _n_value_18533=_n_q_18237;d::put(_n_array_18531,_n_index_18532,_n_value_18533);return _n_value_18533;})(),([&](){auto&& _n_array_18534=this->_n_G_17960;auto _n_index_18535=_n_k_18236;auto _n_value_18536=(_n_q_18237*0.62);d::put(_n_array_18534,_n_index_18535,_n_value_18536);return _n_value_18536;})()),([&](){auto&& _n_array_18537=this->_n_B_17961;auto _n_index_18538=_n_k_18236;auto _n_value_18539=(_n_q_18237*0.24);d::put(_n_array_18537,_n_index_18538,_n_value_18539);return _n_value_18539;})()),([&](){auto&& _n_array_18540=this->_n_FL_17962;auto _n_index_18541=_n_k_18236;auto _n_value_18542=0.2;d::put(_n_array_18540,_n_index_18541,_n_value_18542);return _n_value_18542;})()));

}
}
{double _n_r_18238=_n_WL_17880;
for(;d::truth((_n_r_18238<_n_H_17879));(void)((_n_r_18238++))){d::check_cancel();double _n_y_18239=(_n_r_18238+0.5);
double _n_dw_18240=(_n_y_18239-_n_WL_17880);
double _n_deep_18241=_n_mix_17903(1.0,0.65,(_n_dw_18240/(_n_H_17879-_n_WL_17880)));
double _n_ry_18242=((_n_WL_17880-1.0)-(_n_r_18238-_n_WL_17880));
double _n_r0_18243=(d::maximum({0.0,_n_ry_18242})*_n_W_17878);
double _n_r1_18244=(d::maximum({0.0,(_n_ry_18242-1.0)})*_n_W_17878);
double _n_r2_18245=(d::maximum({0.0,(_n_ry_18242-2.0)})*_n_W_17878);
double _n_fade_18246=_n_smooth_17902((_n_H_17879+4.0),(_n_H_17879-7.0),_n_y_18239);
double _n_rx_18247=d::at(this->_n_roadX_17967,_n_r_18238);
double _n_rw_18248=d::at(this->_n_roadW_17968,_n_r_18238);
double _n_ra_18249=d::at(this->_n_roadA_17969,_n_r_18238);
{double _n_x_18250=0.0;
for(;d::truth((_n_x_18250<_n_W_17878));(void)((_n_x_18250++))){d::check_cancel();double _n_k_18251=((_n_r_18238*_n_W_17878)+_n_x_18250);
double _n_wave_18252=_n_noise_17899(((_n_x_18250*0.04)+(_n_t_18219*0.05)),((_n_r_18238*0.55)-(_n_t_18219*0.35)));
double _n_sx_18253=(_n_x_18250+((0.45+(_n_dw_18240*0.075))*std::sin((((_n_r_18238*1.3)+(_n_t_18219*1.6))+(_n_wave_18252*4.0)))));
double _n_ix_18254=std::floor(_n_sx_18253);
double _n_fx_18255=(_n_sx_18253-_n_ix_18254);
(void)((_n_ix_18254=([&](){auto _n_argument_18543=0.0;auto _n_argument_18544=d::minimum({(_n_W_17878-2.0),_n_ix_18254});return d::maximum({_n_argument_18543,_n_argument_18544});})()));
double _n_a0_18256=(_n_r0_18243+_n_ix_18254);
double _n_a1_18257=(_n_r1_18244+_n_ix_18254);
double _n_a2_18258=(_n_r2_18245+_n_ix_18254);
bool _n_sky_18259=(d::at(this->_n_mat_17919,_n_a0_18256)!=_n_TREE_17897);
double _n_streak_18260=([&](){auto _n_argument_18545=0.25;auto _n_argument_18546=0.75;auto _n_argument_18547=_n_noise_17899(((_n_x_18250*0.035)+(_n_t_18219*0.04)),((_n_r_18238*0.75)-(_n_t_18219*0.3)));return _n_smooth_17902(_n_argument_18545,_n_argument_18546,_n_argument_18547);})();
double _n_kr_18261=(((0.9*(0.5+(0.5*_n_streak_18260)))*(0.85+(0.25*_n_wave_18252)))*_n_deep_18241);
if((d::truth(d::at(this->_n_gap_17939,_n_r_18238))&&d::truth((_n_wave_18252<0.45)))){d::check_cancel();(void)((_n_kr_18261=(_n_kr_18261*0.2)));
}
double _n_gx_18262=(1.0-_n_fx_18255);
double _n_cr_18263=(((((((d::at(this->_n_R_17959,_n_a0_18256)*_n_gx_18262)+(d::at(this->_n_R_17959,(_n_a0_18256+1.0))*_n_fx_18255))*0.5)+(((d::at(this->_n_R_17959,_n_a1_18257)*_n_gx_18262)+(d::at(this->_n_R_17959,(_n_a1_18257+1.0))*_n_fx_18255))*0.3))+(((d::at(this->_n_R_17959,_n_a2_18258)*_n_gx_18262)+(d::at(this->_n_R_17959,(_n_a2_18258+1.0))*_n_fx_18255))*0.2))*_n_kr_18261)+0.006);
double _n_cg_18264=(((((((d::at(this->_n_G_17960,_n_a0_18256)*_n_gx_18262)+(d::at(this->_n_G_17960,(_n_a0_18256+1.0))*_n_fx_18255))*0.5)+(((d::at(this->_n_G_17960,_n_a1_18257)*_n_gx_18262)+(d::at(this->_n_G_17960,(_n_a1_18257+1.0))*_n_fx_18255))*0.3))+(((d::at(this->_n_G_17960,_n_a2_18258)*_n_gx_18262)+(d::at(this->_n_G_17960,(_n_a2_18258+1.0))*_n_fx_18255))*0.2))*_n_kr_18261)+0.012);
double _n_cb_18265=(((((((d::at(this->_n_B_17961,_n_a0_18256)*_n_gx_18262)+(d::at(this->_n_B_17961,(_n_a0_18256+1.0))*_n_fx_18255))*0.5)+(((d::at(this->_n_B_17961,_n_a1_18257)*_n_gx_18262)+(d::at(this->_n_B_17961,(_n_a1_18257+1.0))*_n_fx_18255))*0.3))+(((d::at(this->_n_B_17961,_n_a2_18258)*_n_gx_18262)+(d::at(this->_n_B_17961,(_n_a2_18258+1.0))*_n_fx_18255))*0.2))*_n_kr_18261)+0.028);
double _n_g_18266=0.0;
double _n_qx_18267=(((_n_x_18250+0.5)-_n_rx_18247)/_n_rw_18248);
if((d::truth((_n_qx_18267>(-d::number(2.2))))&&d::truth((_n_qx_18267<2.2)))){d::check_cancel();double _n_dash_18268=([&](){auto _n_argument_18548=0.42;auto _n_argument_18549=0.72;auto _n_argument_18550=_n_noise_17899(((_n_x_18250*0.11)+(_n_t_18219*0.1)),((_n_r_18238*0.9)-(_n_t_18219*0.55)));return _n_smooth_17902(_n_argument_18548,_n_argument_18549,_n_argument_18550);})();
(void)((_n_g_18266=(((_n_ra_18249*std::exp(((-d::number(_n_qx_18267))*_n_qx_18267)))*(0.3+(0.7*_n_dash_18268)))*(d::truth(d::at(this->_n_gap_17939,_n_r_18238))?0.55:1.0))));
}
if(d::truth((_n_dw_18240<10.0))){d::check_cancel();for(auto &&_n_item_18551:this->_n_shoreLights_17937){d::check_cancel();auto _n_binding_18552=_n_item_18551;
double _n_lx_18269=d::at(_n_binding_18552,0.0);
double _n_ph_18270=d::at(_n_binding_18552,2.0);
{
double _n_d_18271=(_n_x_18250-_n_lx_18269);
if((d::truth((_n_d_18271>3.0))||d::truth((_n_d_18271<(-d::number(3.0)))))){d::check_cancel();continue;
}
(void)((_n_g_18266=(_n_g_18266+(([&](){auto _n_left_18553=([&](){auto _n_left_18555=std::exp((((-d::number(_n_d_18271))*_n_d_18271)*1.5));auto _n_right_18556=std::exp(((-d::number(_n_dw_18240))/4.0));return (_n_left_18555*_n_right_18556);})();auto _n_right_18554=([&](){auto _n_argument_18557=0.35;auto _n_argument_18558=0.7;auto _n_argument_18559=_n_noise_17899(((_n_x_18250*0.6)+_n_ph_18270),((_n_y_18239*1.3)-(_n_t_18219*1.4)));return _n_smooth_17902(_n_argument_18557,_n_argument_18558,_n_argument_18559);})();return (_n_left_18553*_n_right_18554);})()*0.8))));

}
}
}
if(d::truth((_n_g_18266>0.0))){d::check_cancel();double _n_keep_18272=(1.0-d::minimum({0.9,(_n_g_18266*4.0)}));
(void)((((_n_cr_18263=((_n_cr_18263*_n_keep_18272)+_n_g_18266)),(_n_cg_18264=((_n_cg_18264*_n_keep_18272)+(_n_g_18266*0.56)))),(_n_cb_18265=((_n_cb_18265*_n_keep_18272)+(_n_g_18266*0.2)))));
}
if(d::truth((_n_g_18266<0.2))){d::check_cancel();double _n_sheen_18273=(((([&](){auto _n_argument_18560=0.6;auto _n_argument_18561=0.85;auto _n_argument_18562=_n_noise_17899(((_n_x_18250*0.07)+(_n_t_18219*0.03)),((_n_r_18238*1.1)-(_n_t_18219*0.25)));return _n_smooth_17902(_n_argument_18560,_n_argument_18561,_n_argument_18562);})()*0.12)*(1.0-(_n_g_18266*5.0)))*_n_deep_18241);
(void)((((_n_cr_18263=(_n_cr_18263+(_n_sheen_18273*0.3))),(_n_cg_18264=(_n_cg_18264+(_n_sheen_18273*0.48)))),(_n_cb_18265=(_n_cb_18265+_n_sheen_18273))));
}
(void)(((([&](){auto&& _n_array_18563=this->_n_R_17959;auto _n_index_18564=_n_k_18251;auto _n_value_18565=(_n_cr_18263*_n_fade_18246);d::put(_n_array_18563,_n_index_18564,_n_value_18565);return _n_value_18565;})(),([&](){auto&& _n_array_18566=this->_n_G_17960;auto _n_index_18567=_n_k_18251;auto _n_value_18568=(_n_cg_18264*_n_fade_18246);d::put(_n_array_18566,_n_index_18567,_n_value_18568);return _n_value_18568;})()),([&](){auto&& _n_array_18569=this->_n_B_17961;auto _n_index_18570=_n_k_18251;auto _n_value_18571=(_n_cb_18265*_n_fade_18246);d::put(_n_array_18569,_n_index_18570,_n_value_18571);return _n_value_18571;})()));
(void)(([&](){auto&& _n_array_18572=this->_n_FL_17962;auto _n_index_18573=_n_k_18251;auto _n_value_18574=((d::truth(_n_sky_18259)?(0.07*_n_deep_18241):0.03)*_n_fade_18246);d::put(_n_array_18572,_n_index_18573,_n_value_18574);return _n_value_18574;})());
}}
}}
double _n_tc_18274=d::mod((d::mod(_n_t_18219,_n_CYCLE_17886)+_n_CYCLE_17886),_n_CYCLE_17886);
auto _n_bob_18275=[&]( double _a0) mutable ->double{double _n_at_18276=_a0;
return (0.3*std::sin((_n_at_18276*1.3)));};
double _n_holdY_18277=((_n_BW_17883-(14.1*_n_SC_17884))-(_n_HELD_17889/2.0));
auto _n_flick_18278=[&]( double _a0) mutable ->double{double _n_m_18279=_a0;
return ([&](){auto _n_left_18575=(1.1+(0.05*std::sin(((_n_t_18219*4.7)+(_n_m_18279*2.1)))));auto _n_right_18576=(0.03*std::sin(((_n_t_18219*11.3)+(_n_m_18279*5.3))));return (_n_left_18575+_n_right_18576);})();};
double _n_n_18280=std::floor((_n_t_18219/_n_CYCLE_17886));
double _n_mine_18281=_n_flick_18278((d::truth((_n_tc_18274<_n_LET_GO_17887))?_n_n_18280:(_n_n_18280+1.0)));
double _n_hy_18282=0.0;
double _n_hs_18283=_n_HELD_17889;
double _n_ha_18284=0.0;
if((d::truth((_n_tc_18274<_n_LET_GO_17887))||d::truth((_n_tc_18274>=(_n_LIT_17888+5.0))))){d::check_cancel();(void)(((_n_hy_18282=(_n_holdY_18277+_n_bob_18275(_n_t_18219))),(_n_ha_18284=1.0)));
}else {d::check_cancel();if(d::truth((_n_tc_18274>=_n_LIT_17888))){d::check_cancel();(void)((_n_ha_18284=_n_smooth_17902(_n_LIT_17888,(_n_LIT_17888+2.5),_n_tc_18274)));
(void)((_n_hs_18283=(_n_HELD_17889*(0.75+(0.25*_n_smooth_17902(_n_LIT_17888,(_n_LIT_17888+3.0),_n_tc_18274))))));
(void)((_n_hy_18282=([&](){auto _n_argument_18577=(_n_BW_17883-(8.6*_n_SC_17884));auto _n_argument_18578=(_n_holdY_18277+_n_bob_18275(_n_t_18219));auto _n_argument_18579=_n_smooth_17902((_n_LIT_17888+3.5),(_n_LIT_17888+5.0),_n_tc_18274);return _n_mix_17903(_n_argument_18577,_n_argument_18578,_n_argument_18579);})()));
}
}
if(d::truth((_n_tc_18274<(_n_LET_GO_17887+2.0)))){d::check_cancel();(void)(([&](){auto _n_argument_18580=this->_n_ARMS_17947->_p_up;auto _n_argument_18581=this->_n_ARMS_17947->_p_down;auto _n_argument_18582=_n_smooth_17902((_n_LET_GO_17887+1.0),(_n_LET_GO_17887+2.0),_n_tc_18274);return this->_n_pose_17956(_n_argument_18580,_n_argument_18581,_n_argument_18582);})());
}else {d::check_cancel();if(d::truth((_n_tc_18274<(_n_LIT_17888+1.0)))){d::check_cancel();(void)(([&](){auto _n_argument_18583=this->_n_ARMS_17947->_p_down;auto _n_argument_18584=this->_n_ARMS_17947->_p_chest;auto _n_argument_18585=_n_smooth_17902((_n_LIT_17888-0.6),_n_LIT_17888,_n_tc_18274);return this->_n_pose_17956(_n_argument_18583,_n_argument_18584,_n_argument_18585);})());
}else {d::check_cancel();(void)(([&](){auto _n_argument_18586=this->_n_ARMS_17947->_p_chest;auto _n_argument_18587=this->_n_ARMS_17947->_p_up;auto _n_argument_18588=_n_smooth_17902((_n_LIT_17888+3.5),(_n_LIT_17888+5.0),_n_tc_18274);return this->_n_pose_17956(_n_argument_18586,_n_argument_18587,_n_argument_18588);})());
}
}
d::Array<d::Array<double,false>,false> _n_flights_18285=d::Array<d::Array<double,false>,false>{};
{double _n_m_18286=_n_n_18280;
for(;d::truth((_n_m_18286>=(_n_n_18280-2.0)));(void)((_n_m_18286--))){d::check_cancel();double _n_tr_18287=((_n_m_18286*_n_CYCLE_17886)+_n_LET_GO_17887);
double _n_age_18288=(_n_t_18219-_n_tr_18287);
if(d::truth((_n_age_18288<0.0))){d::check_cancel();continue;
}
double _n_y_18289=([&](){auto _n_left_18589=(_n_holdY_18277+_n_bob_18275(_n_tr_18287));auto _n_right_18590=(2.8*(_n_age_18288-(1.5*(1.0-std::exp(((-d::number(_n_age_18288))/1.5))))));return (_n_left_18589-_n_right_18590);})();
if(d::truth((_n_y_18289<((-d::number(3.0))*_n_HELD_17889)))){d::check_cancel();continue;
}
(void)(_n_flights_18285.push(d::Array<double,false>{((_n_FX_17885+(0.3*_n_age_18288))+(1.2*std::sin((_n_age_18288*0.35)))),_n_y_18289,_n_flick_18278(_n_m_18286)}));
}}
d::Array<d::Array<double,false>,false> _n_lights_18290=d::Array<d::Array<double,false>,false>{};
double _n_lamp_18291=([&](){auto _n_left_18591=(1.2+(0.04*std::sin((_n_t_18219*5.3))));auto _n_right_18592=(0.03*std::sin((_n_t_18219*12.7)));return (_n_left_18591+_n_right_18592);})();
(void)(_n_lights_18290.push(d::Array<double,false>{this->_n_BOWX_17957,(this->_n_BOWY_17958+1.0),(0.4*_n_lamp_18291),0.4}));
(void)(this->_n_halo_17965(this->_n_BOWX_17957,this->_n_BOWY_17958,2.0,(0.07*_n_lamp_18291),_n_H_17879));
if(d::truth((_n_ha_18284>0.0))){d::check_cancel();(void)(_n_lights_18290.push(d::Array<double,false>{_n_FX_17885,(_n_hy_18282+(_n_hs_18283/2.0)),(_n_ha_18284*_n_mine_18281),1.0}));
}
for(auto &&_n_item_18593:_n_flights_18285){d::check_cancel();auto _n_binding_18594=_n_item_18593;
double _n_x_18292=d::at(_n_binding_18594,0.0);
double _n_y_18293=d::at(_n_binding_18594,1.0);
double _n_l_18294=d::at(_n_binding_18594,2.0);
{
(void)(this->_n_halo_17965(_n_x_18292,_n_y_18293,_n_HELD_17889,(0.2*_n_l_18294),_n_H_17879));
(void)(_n_lights_18290.push(d::Array<double,false>{_n_x_18292,(_n_y_18293+(_n_HELD_17889/2.0)),(_n_l_18294*std::exp(((-d::number(d::maximum({0.0,(_n_holdY_18277-_n_y_18293)})))/8.0))),1.0}));

}
}
if(d::truth((_n_ha_18284>0.0))){d::check_cancel();(void)(this->_n_halo_17965(_n_FX_17885,_n_hy_18282,_n_HELD_17889,((0.2*_n_ha_18284)*_n_mine_18281),_n_H_17879));
}
for(auto &&_n_item_18595:_n_lights_18290){d::check_cancel();auto _n_binding_18596=_n_item_18595;
double _n_lx_18295=d::at(_n_binding_18596,0.0);
double _n_q_18296=d::at(_n_binding_18596,2.0);
double _n_sz_18297=d::at(_n_binding_18596,3.0);
{
if(d::truth((_n_q_18296<0.003))){d::check_cancel();continue;
}
{double _n_r_18298=std::floor((_n_BW_17883-(9.0*_n_SC_17884)));
for(;d::truth((_n_r_18298<_n_H_17879));(void)((_n_r_18298++))){d::check_cancel();double _n_y_18299=(_n_r_18298+0.5);
double _n_dw_18300=(_n_y_18299-_n_BW_17883);
{double _n_x_18301=([&](){auto _n_argument_18597=0.0;auto _n_argument_18598=std::floor((_n_lx_18295-(34.0*_n_sz_18297)));return d::maximum({_n_argument_18597,_n_argument_18598});})();
for(;d::truth((_n_x_18301<d::minimum({_n_W_17878,(_n_lx_18295+(34.0*_n_sz_18297))})));(void)((_n_x_18301++))){d::check_cancel();double _n_k_18302=((_n_r_18298*_n_W_17878)+_n_x_18301);
double _n_dx_18303=((_n_x_18301+0.5)-_n_lx_18295);
double _n_g_18304=(std::exp((-d::number(std::sqrt((std::pow((_n_dx_18303/(((16.0*_n_SC_17884)*0.8)*_n_sz_18297)),2.0)+std::pow((_n_dw_18300/(((d::truth((_n_dw_18300<0.0))?2.6:3.6)*_n_SC_17884)*_n_sz_18297)),2.0))))))*0.5);
if(d::truth((_n_dw_18300>(-d::number(1.0))))){d::check_cancel();double _n_w_18305=((1.4+(0.2*d::maximum({0.0,_n_dw_18300})))*(0.5+(0.5*_n_sz_18297)));
(void)((_n_g_18304=(_n_g_18304+(([&](){auto _n_left_18599=([&](){auto _n_left_18601=std::exp((-d::number(std::pow((_n_dx_18303/_n_w_18305),2.0))));auto _n_right_18602=std::exp(((-d::number(d::maximum({0.0,_n_dw_18300})))/(16.0*_n_sz_18297)));return (_n_left_18601*_n_right_18602);})();auto _n_right_18600=([&](){auto _n_argument_18603=0.4;auto _n_argument_18604=0.72;auto _n_argument_18605=_n_noise_17899(((_n_x_18301*0.45)+3.0),((_n_y_18299*1.2)-(_n_t_18219*1.3)));return _n_smooth_17902(_n_argument_18603,_n_argument_18604,_n_argument_18605);})();return (_n_left_18599*_n_right_18600);})()*1.1))));
}
(void)((_n_g_18304=(_n_g_18304*_n_q_18296)));
double _n_keep_18306=(1.0-d::minimum({0.9,(_n_g_18304*4.0)}));
(void)(((([&](){auto&& _n_array_18606=this->_n_R_17959;auto _n_index_18607=_n_k_18302;auto _n_value_18608=((d::at(this->_n_R_17959,_n_k_18302)*_n_keep_18306)+_n_g_18304);d::put(_n_array_18606,_n_index_18607,_n_value_18608);return _n_value_18608;})(),([&](){auto&& _n_array_18609=this->_n_G_17960;auto _n_index_18610=_n_k_18302;auto _n_value_18611=((d::at(this->_n_G_17960,_n_k_18302)*_n_keep_18306)+(_n_g_18304*0.62));d::put(_n_array_18609,_n_index_18610,_n_value_18611);return _n_value_18611;})()),([&](){auto&& _n_array_18612=this->_n_B_17961;auto _n_index_18613=_n_k_18302;auto _n_value_18614=((d::at(this->_n_B_17961,_n_k_18302)*_n_keep_18306)+(_n_g_18304*0.26));d::put(_n_array_18612,_n_index_18613,_n_value_18614);return _n_value_18614;})()));
}}
}}

}
}
{double _n_j_18307=0.0;
for(;d::truth((_n_j_18307<d::at(this->_n_BOX_17952,3.0)));(void)((_n_j_18307++))){d::check_cancel();{double _n_i_18308=0.0;
for(;d::truth((_n_i_18308<d::at(this->_n_BOX_17952,2.0)));(void)((_n_i_18308++))){d::check_cancel();double _n_m_18309=d::at(this->_n_shape_17954,((_n_j_18307*d::at(this->_n_BOX_17952,2.0))+_n_i_18308));
if(d::truth((!d::truth(_n_m_18309)))){d::check_cancel();continue;
}
double _n_x_18310=(d::at(this->_n_BOX_17952,0.0)+_n_i_18308);
double _n_r_18311=(d::at(this->_n_BOX_17952,1.0)+_n_j_18307);
if(((d::truth((_n_x_18310<0.0))||d::truth((_n_x_18310>=_n_W_17878)))||d::truth((_n_r_18311>=_n_H_17879)))){d::check_cancel();continue;
}
double _n_k_18312=((_n_r_18311*_n_W_17878)+_n_x_18310);
double _n_g_18313=((d::truth((_n_m_18309==2.0))&&d::truth(([&]()->bool{auto _n_logical_18615=([&]()->bool{auto _n_logical_18616=([&]()->bool{auto _n_logical_18617=(_n_i_18308==0.0);return d::truth(_n_logical_18617)?_n_logical_18617:(_n_i_18308==(d::at(this->_n_BOX_17952,2.0)-1.0));})();return d::truth(_n_logical_18616)?_n_logical_18616:(!d::truth(d::at(this->_n_shape_17954,(((_n_j_18307*d::at(this->_n_BOX_17952,2.0))+_n_i_18308)-1.0))));})();return d::truth(_n_logical_18615)?_n_logical_18615:(!d::truth(d::at(this->_n_shape_17954,(((_n_j_18307*d::at(this->_n_BOX_17952,2.0))+_n_i_18308)+1.0))));})()))?0.16:0.0);
bool _n_top_18314=([&]()->bool{auto _n_logical_18618=(_n_j_18307==0.0);return d::truth(_n_logical_18618)?_n_logical_18618:(!d::truth(d::at(this->_n_shape_17954,(((_n_j_18307-1.0)*d::at(this->_n_BOX_17952,2.0))+_n_i_18308))));})();
for(auto &&_n_item_18619:_n_lights_18290){d::check_cancel();auto _n_binding_18620=_n_item_18619;
double _n_lx_18315=d::at(_n_binding_18620,0.0);
double _n_ly_18316=d::at(_n_binding_18620,1.0);
double _n_lq_18317=d::at(_n_binding_18620,2.0);
{
if(d::truth((_n_lq_18317<0.003))){d::check_cancel();continue;
}
double _n_dx_18318=(_n_lx_18315-(_n_x_18310+0.5));
double _n_dy_18319=(_n_ly_18316-(_n_r_18311+0.5));
double _n_d_18320=([&]()->double{auto _n_logical_18621=std::sqrt(((_n_dx_18318*_n_dx_18318)+(_n_dy_18319*_n_dy_18319)));return d::truth(_n_logical_18621)?_n_logical_18621:1.0;})();
if(d::truth((_n_m_18309==2.0))){d::check_cancel();double _n_ni_18321=(_n_i_18308+d::round((_n_dx_18318/_n_d_18320)));
double _n_nj_18322=(_n_j_18307+d::round((_n_dy_18319/_n_d_18320)));
bool _n_open_18323=([&]()->bool{auto _n_logical_18622=([&]()->bool{auto _n_logical_18623=([&]()->bool{auto _n_logical_18624=([&]()->bool{auto _n_logical_18625=(_n_ni_18321<0.0);return d::truth(_n_logical_18625)?_n_logical_18625:(_n_nj_18322<0.0);})();return d::truth(_n_logical_18624)?_n_logical_18624:(_n_ni_18321>=d::at(this->_n_BOX_17952,2.0));})();return d::truth(_n_logical_18623)?_n_logical_18623:(_n_nj_18322>=d::at(this->_n_BOX_17952,3.0));})();return d::truth(_n_logical_18622)?_n_logical_18622:(!d::truth(d::at(this->_n_shape_17954,((_n_nj_18322*d::at(this->_n_BOX_17952,2.0))+_n_ni_18321))));})();
(void)((_n_g_18313=(_n_g_18313+((_n_lq_18317*(d::truth(_n_open_18323)?0.95:0.05))*std::exp(((-d::number(_n_d_18320))/(6.0*_n_SC_17884)))))));
}else {d::check_cancel();(void)((_n_g_18313=(_n_g_18313+(_n_lq_18317*(d::truth(_n_top_18314)?(0.6*std::exp(((-d::number(std::fabs(_n_dx_18318)))/(11.0*_n_SC_17884)))):0.02)))));
}

}
}
(void)(((([&](){auto&& _n_array_18626=this->_n_R_17959;auto _n_index_18627=_n_k_18312;auto _n_value_18628=(0.01+_n_g_18313);d::put(_n_array_18626,_n_index_18627,_n_value_18628);return _n_value_18628;})(),([&](){auto&& _n_array_18629=this->_n_G_17960;auto _n_index_18630=_n_k_18312;auto _n_value_18631=(0.008+(_n_g_18313*0.55));d::put(_n_array_18629,_n_index_18630,_n_value_18631);return _n_value_18631;})()),([&](){auto&& _n_array_18632=this->_n_B_17961;auto _n_index_18633=_n_k_18312;auto _n_value_18634=(0.014+(_n_g_18313*0.22));d::put(_n_array_18632,_n_index_18633,_n_value_18634);return _n_value_18634;})()));
(void)(([&](){auto&& _n_array_18635=this->_n_FL_17962;auto _n_index_18636=_n_k_18312;auto _n_value_18637=0.0;d::put(_n_array_18635,_n_index_18636,_n_value_18637);return _n_value_18637;})());
}}
}}
(void)(this->_n_lantern_17964(this->_n_BOWX_17957,this->_n_BOWY_17958,2.0,_n_lamp_18291,1.0,_n_H_17879,std::optional<d::Array<uint8_t,true>>{}));
for(auto &&_n_item_18638:_n_flights_18285){d::check_cancel();auto _n_binding_18639=_n_item_18638;
double _n_x_18324=d::at(_n_binding_18639,0.0);
double _n_y_18325=d::at(_n_binding_18639,1.0);
double _n_q_18326=d::at(_n_binding_18639,2.0);
(void)(this->_n_lantern_17964(_n_x_18324,_n_y_18325,_n_HELD_17889,_n_q_18326,1.0,_n_H_17879,std::optional<d::Array<uint8_t,true>>{}));
}
if(d::truth((_n_ha_18284>0.0))){d::check_cancel();(void)(([&](){auto _n_argument_18640=_n_FX_17885;auto _n_argument_18641=_n_hy_18282;auto _n_argument_18642=_n_hs_18283;auto _n_argument_18643=(_n_ha_18284*_n_mine_18281);auto _n_argument_18644=d::minimum({1.0,(_n_ha_18284*1.4)});auto _n_argument_18645=_n_H_17879;auto _n_argument_18646=d::Nil{};return this->_n_lantern_17964(_n_argument_18640,_n_argument_18641,_n_argument_18642,_n_argument_18643,_n_argument_18644,_n_argument_18645,std::optional<d::Array<uint8_t,true>>{});})());
}
for(auto &&_n_item_18647:this->_n_close_17945){d::check_cancel();std::shared_ptr<_n_Record_17946> _n_c_18327=_n_item_18647;
{
double _n_u_18328=((_n_t_18219/_n_c_18327->_p_life)+_n_c_18327->_p_off);
double _n_lap_18329=std::floor(_n_u_18328);
double _n_a_18330=((_n_u_18328-_n_lap_18329)*_n_c_18327->_p_life);
if((d::truth((_n_lap_18329<0.0))||d::truth(((_n_a_18330*_n_c_18327->_p_v)>_n_c_18327->_p_path)))){d::check_cancel();continue;
}
double _n_x0_18331=_n_c_18327->_p_x;
if(d::truth(_n_lap_18329)){d::check_cancel();(void)((_n_x0_18331=(6.0+(188.0*_n_hash_17898(((_n_c_18327->_p_i*17.0)+_n_lap_18329),44.0)))));
if((d::truth((_n_x0_18331>84.0))&&d::truth((_n_x0_18331<132.0)))){d::check_cancel();(void)((_n_x0_18331=(d::truth((_n_x0_18331<108.0))?(_n_x0_18331-32.0):(_n_x0_18331+32.0))));
}
}
double _n_cx_18332=((_n_x0_18331+(_n_c_18327->_p_wd*_n_a_18330))+(_n_c_18327->_p_sw*([&](){auto _n_left_18648=std::sin(((_n_a_18330*_n_c_18327->_p_sf)+_n_c_18327->_p_ph));auto _n_right_18649=std::sin(_n_c_18327->_p_ph);return (_n_left_18648-_n_right_18649);})()));
double _n_cy_18333=((_n_H_17879+(2.5*_n_c_18327->_p_s))-(_n_c_18327->_p_v*_n_a_18330));
double _n_I_18334=([&](){auto _n_left_18650=(1.15+(0.05*std::sin(((_n_t_18219*3.3)+_n_c_18327->_p_ph))));auto _n_right_18651=(0.03*std::sin(((_n_t_18219*8.1)+_n_c_18327->_p_i)));return (_n_left_18650+_n_right_18651);})();
(void)(this->_n_halo_17965(_n_cx_18332,_n_cy_18333,_n_c_18327->_p_s,(0.1*_n_I_18334),_n_H_17879));
(void)(this->_n_lantern_17964(_n_cx_18332,_n_cy_18333,_n_c_18327->_p_s,_n_I_18334,1.0,_n_H_17879,std::optional<d::Array<uint8_t,true>>{}));

}
}
{double _n_r_18335=0.0;
for(;d::truth((_n_r_18335<_n_H_17879));(void)((_n_r_18335++))){d::check_cancel();{double _n_x_18336=0.0;
for(;d::truth((_n_x_18336<_n_W_17878));(void)((_n_x_18336++))){d::check_cancel();double _n_k_18337=((_n_r_18335*_n_W_17878)+_n_x_18336);
double _n_cr_18338=d::at(this->_n_R_17959,_n_k_18337);
double _n_cg_18339=d::at(this->_n_G_17960,_n_k_18337);
double _n_cb_18340=d::at(this->_n_B_17961,_n_k_18337);
double _n_floor_18341=d::at(this->_n_FL_17962,_n_k_18337);
double _n_peak_18342=d::maximum({_n_cr_18338,_n_cg_18339,_n_cb_18340,0.0001});
double _n_level_18343=_n_clamp_17901((_n_floor_18341+(((1.0-_n_floor_18341)*std::pow(_n_peak_18342,0.85))*0.95)));
double _n_step_18344=([&](){auto _n_argument_18652=0.0;auto _n_argument_18653=([&](){auto _n_argument_18654=3.0;auto _n_argument_18655=d::round(((_n_level_18343*3.0)+d::at(_n_BAYER_17892,((double(d::i32(_n_r_18335)&d::i32(3.0))*4.0)+double(d::i32(_n_x_18336)&d::i32(3.0))))));return d::minimum({_n_argument_18654,_n_argument_18655});})();return d::maximum({_n_argument_18652,_n_argument_18653});})();
(void)(([&](){auto&& _n_array_18656=this->_n_out_17916;auto _n_index_18657=_n_k_18337;auto _n_value_18658=d::at(_n_DOTS_17890,_n_step_18344);d::put(_n_array_18656,_n_index_18657,_n_value_18658);return _n_value_18658;})());
if(d::truth(_n_color_18220)){d::check_cancel();if((((d::truth((_n_k_18337<this->_n_S_17915))&&d::truth(d::at(this->_n_far_17933,_n_k_18337)))&&d::truth((d::at(this->_n_FL_17962,_n_k_18337)<0.05)))&&d::truth((_n_cb_18340>=_n_cr_18338)))){d::check_cancel();(void)(([&](){auto&& _n_array_18659=d::read(_n_color_18220);auto _n_index_18660=_n_k_18337;auto _n_value_18661=(this->_n_SL_17913+(d::truth((_n_level_18343>0.42))?2.0:(d::truth((_n_level_18343>0.3))?1.0:0.0)));d::put(_n_array_18659,_n_index_18660,_n_value_18661);return _n_value_18661;})());
continue;
}
double _n_want_18345=(d::truth(_n_step_18344)?d::minimum({1.0,((_n_level_18343+0.06)/d::at(_n_COVER_17891,_n_step_18344))}):0.0);
double _n_s_18346=((0.3+(0.7*_n_want_18345))/_n_peak_18342);
(void)(([&](){auto&& _n_array_18662=d::read(_n_color_18220);auto _n_index_18663=_n_k_18337;auto _n_value_18664=([&](){auto _n_argument_18665=_n_clamp_17901((_n_cr_18338*_n_s_18346));auto _n_argument_18666=_n_clamp_17901((_n_cg_18339*_n_s_18346));auto _n_argument_18667=_n_clamp_17901((_n_cb_18340*_n_s_18346));return this->_n_nearest_17918(_n_argument_18665,_n_argument_18666,_n_argument_18667);})();d::put(_n_array_18662,_n_index_18663,_n_value_18664);return _n_value_18664;})());
}
}}
}}
for(auto &&_n_item_18668:this->_n_stars_17938){d::check_cancel();auto _n_binding_18669=_n_item_18668;
double _n_k_18347=d::at(_n_binding_18669,0.0);
double _n_ph_18348=d::at(_n_binding_18669,1.0);
double _n_rate_18349=d::at(_n_binding_18669,2.0);
double _n_b_18350=d::at(_n_binding_18669,3.0);
{
double _n_s_18351=(_n_b_18350*(0.7+(0.3*std::sin(((_n_t_18219*_n_rate_18349)+_n_ph_18348)))));
if((d::truth((_n_s_18351<0.3))||d::truth((d::maximum({d::at(this->_n_R_17959,_n_k_18347),d::at(this->_n_G_17960,_n_k_18347),d::at(this->_n_B_17961,_n_k_18347)})>0.4)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_18670=this->_n_out_17916;auto _n_index_18671=_n_k_18347;auto _n_value_18672=(d::truth((_n_s_18351>0.95))?d::String(u"●"):(d::truth((_n_s_18351>0.45))?d::String(u"•"):d::String(u"·")));d::put(_n_array_18670,_n_index_18671,_n_value_18672);return _n_value_18672;})());
if(d::truth(_n_color_18220)){d::check_cancel();(void)(([&](){auto&& _n_array_18673=d::read(_n_color_18220);auto _n_index_18674=_n_k_18347;auto _n_value_18675=(this->_n_STAR_17912+(d::truth((_n_s_18351>0.8))?2.0:(d::truth((_n_s_18351>0.55))?1.0:0.0)));d::put(_n_array_18673,_n_index_18674,_n_value_18675);return _n_value_18675;})());
}

}
}
d::Array<d::String,false> _n_lines_18352=d::Array<d::String,false>{};
{double _n_r_18353=0.0;
for(;d::truth((_n_r_18353<_n_H_17879));(void)((_n_r_18353++))){d::check_cancel();(void)(_n_lines_18352.push(d::join(this->_n_out_17916.slice((_n_r_18353*_n_W_17878),((_n_r_18353+1.0)*_n_W_17878)),d::String(u""))));
}}
return d::join(_n_lines_18352,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lantern-lake").cols)*ascii::catalog_meta("lantern-lake").rows);auto _env=std::make_shared<_n_Record_18354>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lantern_lake_meta(){return catalog_meta("lantern-lake");}
std::unique_ptr<Piece> make_lantern_lake(const AsciiPieceOptions &o){return std::make_unique<Native_lantern_lake>(o);}
}
