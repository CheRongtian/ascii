// Direct, statically typed C++ from src/pieces/lantern-lake.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_17876;
struct _n_Record_17940;
struct _n_Record_17945;
struct _n_Record_17947;
struct _n_Record_18353;
struct _n_Record_17876{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_17876> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17876>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_17940{
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
static std::shared_ptr<_n_Record_17940> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17940>();out->_p_i=d::decode<double>(j["i"]);out->_p_s=d::decode<double>(j["s"]);out->_p_v=d::decode<double>(j["v"]);out->_p_life=d::decode<double>(j["life"]);out->_p_off=d::decode<double>(j["off"]);out->_p_wd=d::decode<double>(j["wd"]);out->_p_sw=d::decode<double>(j["sw"]);out->_p_sf=d::decode<double>(j["sf"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_f1=d::decode<double>(j["f1"]);out->_p_f2=d::decode<double>(j["f2"]);out->_p_out=d::decode<bool>(j["out"]);out->_p_wide=d::decode<bool>(j["wide"]);return out;}
};
struct _n_Record_17945{
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
static std::shared_ptr<_n_Record_17945> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17945>();out->_p_i=d::decode<double>(j["i"]);out->_p_s=d::decode<double>(j["s"]);out->_p_v=d::decode<double>(j["v"]);out->_p_x=d::decode<double>(j["x"]);out->_p_path=d::decode<double>(j["path"]);out->_p_life=d::decode<double>(j["life"]);out->_p_off=d::decode<double>(j["off"]);out->_p_wd=d::decode<double>(j["wd"]);out->_p_sw=d::decode<double>(j["sw"]);out->_p_sf=d::decode<double>(j["sf"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_17947{
d::Array<d::Array<double,false>,false> _p_up{};
d::Array<d::Array<double,false>,false> _p_down{};
d::Array<d::Array<double,false>,false> _p_chest{};
static std::shared_ptr<_n_Record_17947> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17947>();out->_p_up=d::decode<d::Array<d::Array<double,false>,false>>(j["up"]);out->_p_down=d::decode<d::Array<d::Array<double,false>,false>>(j["down"]);out->_p_chest=d::decode<d::Array<d::Array<double,false>,false>>(j["chest"]);return out;}
};
struct _n_Record_18353{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_18353> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_18353>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_17897(double _a0,double _a1);
double _n_noise_17898(double _a0,double _a1);
double _n_fbm_17899(double _a0,double _a1,double _a2);
double _n_clamp_17900(double _a0);
double _n_smooth_17901(double _a0,double _a1,double _a2);
double _n_mix_17902(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_17903(d::String _a0);
double _n_seg_17904(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5);
std::array<double,2> _n_range_17908(double _a0,d::Array<std::array<double,3>,false> _a1,double _a2,double _a3);
bool _n_inside_17909(double _a0,double _a1);
std::shared_ptr<_n_Record_17876> _n_meta_17875=[](){return ([&](){auto _n_object_18356=std::make_shared<_n_Record_17876>();_n_object_18356->_p_name=d::String(u"lantern lake");_n_object_18356->_p_category=d::String(u"scenes");_n_object_18356->_p_note=d::String(u"sky lanterns rising over a still mountain lake, one let go from a boat");_n_object_18356->_p_cols=200.0;_n_object_18356->_p_rows=100.0;_n_object_18356->_p_cell=1.0;_n_object_18356->_p_fps=15.0;_n_object_18356->_p_ground=d::String(u"#04060d");_n_object_18356->_p_palette=d::Array<d::String,false>{d::String(u"#141b30"),d::String(u"#1c2a52"),d::String(u"#22346a"),d::String(u"#2a4080"),d::String(u"#324c96"),d::String(u"#3c58a8"),d::String(u"#33306e"),d::String(u"#433c88"),d::String(u"#54449a"),d::String(u"#62407e"),d::String(u"#7a4a88"),d::String(u"#934e86"),d::String(u"#a4546e"),d::String(u"#bc5e66"),d::String(u"#d06a62"),d::String(u"#dc7650"),d::String(u"#e88444"),d::String(u"#f09238"),d::String(u"#d4581a"),d::String(u"#ea6c1e"),d::String(u"#f78226"),d::String(u"#ff9530"),d::String(u"#ffa83c"),d::String(u"#ffbb4e"),d::String(u"#ffcc66"),d::String(u"#ffdc86"),d::String(u"#ffe8a8"),d::String(u"#fff3cf"),d::String(u"#fffbec"),d::String(u"#b8341a"),d::String(u"#d84420"),d::String(u"#2f3748"),d::String(u"#4f586c"),d::String(u"#5e5a7e"),d::String(u"#7a6a8c"),d::String(u"#5a3220"),d::String(u"#7c4628"),d::String(u"#4a5578"),d::String(u"#5d6a92"),d::String(u"#7381ab"),d::String(u"#c4cdec"),d::String(u"#e4e9fb"),d::String(u"#ffffff")};return _n_object_18356;})();}();
const double _n_W_17877=[](){return 200.0;}();
const double _n_H_17878=[](){return 100.0;}();
const double _n_WL_17879=[](){return 64.0;}();
const double _n_SRC_17880=[](){return 100.0;}();
const double _n_BX_17881=[](){return 108.5;}();
const double _n_BW_17882=[](){return 90.0;}();
const double _n_SC_17883=[](){return 1.4;}();
const double _n_FX_17884=[](){return (_n_BX_17881-(3.0*_n_SC_17883));}();
const double _n_CYCLE_17885=[](){return 20.0;}();
const double _n_LET_GO_17886=[](){return 3.0;}();
const double _n_LIT_17887=[](){return 6.0;}();
const double _n_HELD_17888=[](){return (5.0*_n_SC_17883);}();
const d::String _n_DOTS_17889=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_17890=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_17891=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_17969=_a0;
return ((_n_v_17969/16.0)-0.47);});}();
const double _n_AIR_17892=[](){return 0.0;}();
const double _n_FAR_17893=[](){return 1.0;}();
const double _n_BACK_17894=[](){return 2.0;}();
const double _n_PEAK_17895=[](){return 3.0;}();
const double _n_TREE_17896=[](){return 4.0;}();
d::Array<std::array<double,3>,false> _n_PEAKS_17905=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{22.0,42.0,1.2},std::array<double,3>{(-d::number(4.0)),33.0,0.9},std::array<double,3>{172.0,33.0,1.05},std::array<double,3>{215.0,22.0,0.6}};}();
d::Array<std::array<double,3>,false> _n_SHOULDERS_17906=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{50.0,25.0,1.0},std::array<double,3>{64.0,12.0,0.75},std::array<double,3>{150.0,17.0,0.95},std::array<double,3>{196.0,21.0,0.75}};}();
d::Array<std::array<double,3>,false> _n_DISTANT_17907=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{98.0,17.0,0.42},std::array<double,3>{122.0,14.0,0.5},std::array<double,3>{82.0,12.0,0.45},std::array<double,3>{140.0,11.0,0.5}};}();
double _n_hash_17897(double _a0,double _a1){double _n_x_17970=_a0;
double _n_y_17971=_a1;
{
double _n_h_17972=([&](){auto _n_left_18357=d::imul(double(d::i32(_n_x_17970)|d::i32(0.0)),374761393.0);auto _n_right_18358=d::imul(double(d::i32(_n_y_17971)|d::i32(0.0)),668265263.0);return (_n_left_18357+_n_right_18358);})();
(void)((_n_h_17972=d::imul(double(d::i32(_n_h_17972)^d::i32(double(d::u32(_n_h_17972)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_17972)^d::i32(double(d::u32(_n_h_17972)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_17898(double _a0,double _a1){double _n_x_17973=_a0;
double _n_y_17974=_a1;
{
double _n_xi_17975=std::floor(_n_x_17973);
double _n_yi_17976=std::floor(_n_y_17974);
double _n_fx_17977=(_n_x_17973-_n_xi_17975);
double _n_fy_17978=(_n_y_17974-_n_yi_17976);
double _n_u_17979=((_n_fx_17977*_n_fx_17977)*(3.0-(2.0*_n_fx_17977)));
double _n_v_17980=((_n_fy_17978*_n_fy_17978)*(3.0-(2.0*_n_fy_17978)));
double _n_a_17981=_n_hash_17897(_n_xi_17975,_n_yi_17976);
double _n_b_17982=_n_hash_17897((_n_xi_17975+1.0),_n_yi_17976);
double _n_c_17983=_n_hash_17897(_n_xi_17975,(_n_yi_17976+1.0));
double _n_d_17984=_n_hash_17897((_n_xi_17975+1.0),(_n_yi_17976+1.0));
return (((_n_a_17981+((_n_b_17982-_n_a_17981)*_n_u_17979))+((_n_c_17983-_n_a_17981)*_n_v_17980))+(((((_n_a_17981-_n_b_17982)-_n_c_17983)+_n_d_17984)*_n_u_17979)*_n_v_17980));

}
}

double _n_fbm_17899(double _a0,double _a1,double _a2){double _n_x_17985=_a0;
double _n_y_17986=_a1;
double _n_octaves_17987=_a2;
{
double _n_s_17988=0.0;
double _n_n_17989=0.0;
double _n_amp_17990=0.5;
double _n_f_17991=1.0;
{double _n_i_17992=0.0;
for(;d::truth((_n_i_17992<_n_octaves_17987));(void)((_n_i_17992++))){d::check_cancel();(void)((_n_s_17988=(_n_s_17988+(_n_amp_17990*_n_noise_17898((_n_x_17985*_n_f_17991),(_n_y_17986*_n_f_17991))))));
(void)((_n_n_17989=(_n_n_17989+_n_amp_17990)));
(void)((_n_amp_17990=(_n_amp_17990*0.5)));
(void)((_n_f_17991=(_n_f_17991*2.0)));
}}
return (_n_s_17988/_n_n_17989);

}
}

double _n_clamp_17900(double _a0){double _n_v_17993=_a0;
return (d::truth((_n_v_17993<0.0))?0.0:(d::truth((_n_v_17993>1.0))?1.0:_n_v_17993));}

double _n_smooth_17901(double _a0,double _a1,double _a2){double _n_a_17994=_a0;
double _n_b_17995=_a1;
double _n_v_17996=_a2;
{
double _n_k_17997=_n_clamp_17900(((_n_v_17996-_n_a_17994)/(_n_b_17995-_n_a_17994)));
return ((_n_k_17997*_n_k_17997)*(3.0-(2.0*_n_k_17997)));

}
}

double _n_mix_17902(double _a0,double _a1,double _a2){double _n_a_17998=_a0;
double _n_b_17999=_a1;
double _n_k_18000=_a2;
return (_n_a_17998+((_n_b_17999-_n_a_17998)*_n_k_18000));}

d::Array<double,false> _n_hex_17903(d::String _a0){d::String _n_s_18001=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_18002=_a0;
return (([&](){auto _n_argument_18359=d::slice(_n_s_18001,_n_i_18002,(_n_i_18002+2.0));auto _n_argument_18360=16.0;return d::parseInt(_n_argument_18359,_n_argument_18360);})()/255.0);});}

double _n_seg_17904(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_px_18003=_a0;
double _n_py_18004=_a1;
double _n_ax_18005=_a2;
double _n_ay_18006=_a3;
double _n_bx_18007=_a4;
double _n_by_18008=_a5;
{
double _n_dx_18009=(_n_bx_18007-_n_ax_18005);
double _n_dy_18010=(_n_by_18008-_n_ay_18006);
double _n_k_18011=_n_clamp_17900(((((_n_px_18003-_n_ax_18005)*_n_dx_18009)+((_n_py_18004-_n_ay_18006)*_n_dy_18010))/((_n_dx_18009*_n_dx_18009)+(_n_dy_18010*_n_dy_18010))));
double _n_ex_18012=((_n_ax_18005+(_n_dx_18009*_n_k_18011))-_n_px_18003);
double _n_ey_18013=((_n_ay_18006+(_n_dy_18010*_n_k_18011))-_n_py_18004);
return std::sqrt(((_n_ex_18012*_n_ex_18012)+(_n_ey_18013*_n_ey_18013)));

}
}

std::array<double,2> _n_range_17908(double _a0,d::Array<std::array<double,3>,false> _a1,double _a2,double _a3){double _n_x_18014=_a0;
d::Array<std::array<double,3>,false> _n_peaks_18015=_a1;
double _n_seed_18016=_a2;
double _n_rough_18017=_a3;
{
double _n_m_18018=(-d::number(99.0));
double _n_px_18019=0.0;
for(auto &&_n_item_18361:_n_peaks_18015){d::check_cancel();auto _n_binding_18362=_n_item_18361;
double _n_cx_18020=d::at(_n_binding_18362,0.0);
double _n_h_18021=d::at(_n_binding_18362,1.0);
double _n_s_18022=d::at(_n_binding_18362,2.0);
{
double _n_v_18023=(_n_h_18021-(std::fabs((_n_x_18014-_n_cx_18020))*_n_s_18022));
if(d::truth((_n_v_18023>_n_m_18018))){d::check_cancel();(void)(((_n_m_18018=_n_v_18023),(_n_px_18019=_n_cx_18020)));
}

}
}
double _n_j_18024=([&](){auto _n_left_18363=(_n_rough_18017*(_n_fbm_17899((_n_x_18014*0.09),_n_seed_18016,3.0)-0.5));auto _n_right_18364=((_n_rough_18017*0.45)*(_n_noise_17898((_n_x_18014*0.45),(_n_seed_18016+5.0))-0.5));return (_n_left_18363+_n_right_18364);})();
return std::array<double,2>{(_n_m_18018+(_n_j_18024*([&](){auto _n_argument_18365=1.0;auto _n_argument_18366=(d::maximum({0.0,_n_m_18018})/6.0);return d::minimum({_n_argument_18365,_n_argument_18366});})())),_n_px_18019};

}
}

bool _n_inside_17909(double _a0,double _a1){double _n_u_18025=_a0;
double _n_v_18026=_a1;
{
if((d::truth((_n_v_18026<0.0))||d::truth((_n_v_18026>1.0)))){d::check_cancel();return false;
}
double _n_hw_18027=(0.34-(0.08*_n_v_18026));
if(d::truth((_n_v_18026<0.14))){d::check_cancel();(void)((_n_hw_18027=(_n_hw_18027*std::sqrt((1.0-(0.6*std::pow(((0.14-_n_v_18026)/0.14),2.0)))))));
}
return ([&]()->bool{auto _n_logical_18367=(_n_u_18025<=_n_hw_18027);return d::truth(_n_logical_18367)?(_n_u_18025>=(-d::number(_n_hw_18027))):_n_logical_18367;})();

}
}

struct Native_lantern_lake final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_17910{};
double _n_STAR_17911{};
double _n_SL_17912{};
double _n_N_17913{};
double _n_S_17914{};
d::Array<d::String,false> _n_out_17915{};
d::Array<uint8_t,true> _n_lut_17916{};
d::Array<uint8_t,true> _n_mat_17918{};
d::Array<float,true> _n_sR_17919{};
d::Array<float,true> _n_sG_17920{};
d::Array<float,true> _n_sB_17921{};
d::Array<float,true> _n_take_17922{};
d::Array<float,true> _n_backTop_17923{};
d::Array<float,true> _n_backX_17924{};
d::Array<float,true> _n_frontTop_17925{};
d::Array<float,true> _n_frontX_17926{};
d::Array<float,true> _n_farTop_17927{};
d::Array<d::Array<double,false>,false> _n_HUES_17929{};
d::Array<uint8_t,true> _n_far_17932{};
d::Array<float,true> _n_floorS_17935{};
d::Array<std::array<double,3>,false> _n_shoreLights_17936{};
d::Array<std::array<double,4>,false> _n_stars_17937{};
d::Array<uint8_t,true> _n_gap_17938{};
d::Array<std::shared_ptr<_n_Record_17940>,false> _n_shore_17939{};
d::Array<std::array<double,3>,false> _n_NEAR_17943{};
d::Array<std::shared_ptr<_n_Record_17945>,false> _n_close_17944{};
std::shared_ptr<_n_Record_17947> _n_ARMS_17946{};
d::Array<double,false> _n_BOX_17951{};
d::Array<uint8_t,true> _n_hulls_17952{};
d::Array<uint8_t,true> _n_shape_17953{};
d::Array<d::Array<double,false>,false> _n_arms_17954{};
double _n_BOWX_17956{};
double _n_BOWY_17957{};
d::Array<float,true> _n_R_17958{};
d::Array<float,true> _n_G_17959{};
d::Array<float,true> _n_B_17960{};
d::Array<float,true> _n_FL_17961{};
d::Array<uint8_t,true> _n_hide_17965{};
d::Array<float,true> _n_roadX_17966{};
d::Array<float,true> _n_roadW_17967{};
d::Array<float,true> _n_roadA_17968{};
std::function<d::String(double,std::shared_ptr<_n_Record_18353>)> _render;
double _n_nearest_17917(double _a0,double _a1,double _a2){double _n_r_18028=_a0;
double _n_g_18029=_a1;
double _n_b_18030=_a2;
{
double _n_k_18031=([&](){auto _n_left_18675=([&](){auto _n_left_18677=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_18028*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_18678=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_18029*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_18677)|d::i32(_n_right_18678));})();auto _n_right_18676=d::minimum({31.0,double(d::i32((_n_b_18030*31.99))|d::i32(0.0))});return double(d::i32(_n_left_18675)|d::i32(_n_right_18676));})();
if(d::truth((d::at(this->_n_lut_17916,_n_k_18031)!=255.0))){d::check_cancel();return d::at(this->_n_lut_17916,_n_k_18031);
}
double _n_best_18032=0.0;
double _n_bd_18033=1000000000.0;
{double _n_i_18034=0.0;
for(;d::truth((_n_i_18034<this->_n_SL_17912));(void)((_n_i_18034++))){d::check_cancel();double _n_dr_18035=(d::at(d::at(this->_n_P_17910,_n_i_18034),0.0)-_n_r_18028);
double _n_dg_18036=(d::at(d::at(this->_n_P_17910,_n_i_18034),1.0)-_n_g_18029);
double _n_db_18037=(d::at(d::at(this->_n_P_17910,_n_i_18034),2.0)-_n_b_18030);
double _n_d_18038=((((0.3*_n_dr_18035)*_n_dr_18035)+((0.5*_n_dg_18036)*_n_dg_18036))+((0.2*_n_db_18037)*_n_db_18037));
if(d::truth((_n_d_18038<_n_bd_18033))){d::check_cancel();(void)(((_n_bd_18033=_n_d_18038),(_n_best_18032=_n_i_18034)));
}
}}
return ([&](){auto&& _n_array_18679=this->_n_lut_17916;auto _n_index_18680=_n_k_18031;auto _n_value_18681=_n_best_18032;d::put(_n_array_18679,_n_index_18680,_n_value_18681);return _n_value_18681;})();

}
}

double _n_dome_17928(double _a0,double _a1){double _n_x_18045=_a0;
double _n_y_18046=_a1;
{
double _n_up_18047=d::maximum({0.0,((_n_WL_17879-6.0)-_n_y_18046)});
double _n_dx_18048=(((_n_x_18045-_n_SRC_17880)-(0.3*_n_up_18047))/(44.0+_n_up_18047));
return ([&](){auto _n_left_18682=std::exp(((-d::number(_n_dx_18048))*_n_dx_18048));auto _n_right_18683=([&](){auto _n_left_18684=(0.6*std::exp(((-d::number(_n_up_18047))/14.0)));auto _n_right_18685=(0.4*std::exp(((-d::number(_n_up_18047))/40.0)));return (_n_left_18684+_n_right_18685);})();return (_n_left_18682*_n_right_18683);})();

}
}

double _n_hue_17930(double _a0,double _a1){double _n_w_18049=_a0;
double _n_j_18050=_a1;
{
double _n_f_18051=(_n_clamp_17900(_n_w_18049)*5.0);
double _n_i_18052=([&](){auto _n_argument_18686=4.0;auto _n_argument_18687=std::floor(_n_f_18051);return d::minimum({_n_argument_18686,_n_argument_18687});})();
return _n_mix_17902(d::at(d::at(this->_n_HUES_17929,_n_i_18052),_n_j_18050),d::at(d::at(this->_n_HUES_17929,(_n_i_18052+1.0)),_n_j_18050),(_n_f_18051-_n_i_18052));

}
}

double _n_slope_17931(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,double _a8){double _n_k_18053=_a0;
double _n_x_18054=_a1;
double _n_y_18055=_a2;
double _n_top_18056=_a3;
double _n_px_18057=_a4;
double _n_haze_18058=_a5;
double _n_relief_18059=_a6;
double _n_edge_18060=_a7;
double _n_warm_18061=_a8;
{
double _n_xc_18062=(_n_x_18054+0.5);
double _n_depth_18063=(_n_y_18055-_n_top_18056);
double _n_inward_18064=(d::truth((_n_px_18057<_n_SRC_17880))?1.0:(-d::number(1.0)));
double _n_ridge_18065=(_n_px_18057+(((_n_depth_18063+1.0)*0.6)*(_n_noise_17898((_n_y_18055*0.1),_n_px_18057)-0.5)));
double _n_face_18066=_n_smooth_17901((-d::number(4.0)),4.0,((_n_xc_18062-_n_ridge_18065)*_n_inward_18064));
double _n_u_18067=(_n_x_18054+((_n_depth_18063*0.45)*d::sign(([&]()->double{auto _n_logical_18688=(_n_xc_18062-_n_px_18057);return d::truth(_n_logical_18688)?_n_logical_18688:1.0;})())));
auto _n_rib_18068=[&]( double _a0) mutable ->double{double _n_q_18069=_a0;
return _n_fbm_17899((_n_q_18069*0.13),(_n_px_18057*0.37),3.0);};
double _n_grad_18070=((([&](){auto _n_left_18689=_n_rib_18068((_n_u_18067+1.0));auto _n_right_18690=_n_rib_18068((_n_u_18067-1.0));return (_n_left_18689-_n_right_18690);})()*7.0)*_n_inward_18064);
double _n_lit_18071=_n_clamp_17900(((0.3+(0.5*_n_face_18066))+(_n_grad_18070*0.5)));
double _n_tex_18072=(0.8+(0.4*_n_fbm_17899((_n_x_18054*0.35),(_n_y_18055*0.35),2.0)));
double _n_w_18073=(([&](){auto _n_left_18691=(_n_lit_18071*std::exp((-d::number(std::pow(((_n_xc_18062-_n_SRC_17880)/70.0),2.0)))));auto _n_right_18692=(0.4+(0.6*_n_smooth_17901((_n_top_18056+2.0),_n_WL_17879,_n_y_18055)));return (_n_left_18691*_n_right_18692);})()*0.9);
double _n_b_18074=(((_n_haze_18058+((_n_relief_18059*_n_lit_18071)*_n_lit_18071))*_n_tex_18072)+(0.16*_n_w_18073));
double _n_rim_18075=(_n_smooth_17901(1.8,0.3,_n_depth_18063)*_n_edge_18060);
double _n_sky_18076=this->_n_dome_17928(_n_xc_18062,(_n_top_18056-1.0));
auto _n_c_18077=[&]( double _a0) mutable ->double{double _n_j_18078=_a0;
return ([&](){auto _n_left_18693=(_n_b_18074*this->_n_hue_17930((_n_w_18073*_n_warm_18061),_n_j_18078));auto _n_right_18694=(_n_rim_18075*this->_n_hue_17930(_n_sky_18076,_n_j_18078));return (_n_left_18693+_n_right_18694);})();};
(void)(((([&](){auto&& _n_array_18695=this->_n_sR_17919;auto _n_index_18696=_n_k_18053;auto _n_value_18697=_n_c_18077(0.0);d::put(_n_array_18695,_n_index_18696,_n_value_18697);return _n_value_18697;})(),([&](){auto&& _n_array_18698=this->_n_sG_17920;auto _n_index_18699=_n_k_18053;auto _n_value_18700=_n_c_18077(1.0);d::put(_n_array_18698,_n_index_18699,_n_value_18700);return _n_value_18700;})()),([&](){auto&& _n_array_18701=this->_n_sB_17921;auto _n_index_18702=_n_k_18053;auto _n_value_18703=_n_c_18077(2.0);d::put(_n_array_18701,_n_index_18702,_n_value_18703);return _n_value_18703;})()));
return _n_w_18073;

}
}

double _n_scrub_17933(double _a0){double _n_x_18091=_a0;
return ((_n_WL_17879-2.4)-(1.4*_n_fbm_17899((_n_x_18091*0.15),5.5,3.0)));}

void _n_spruce_17934(double _a0,double _a1,double _a2,double _a3){double _n_tx_18094=_a0;
double _n_th_18095=_a1;
double _n_tw_18096=_a2;
double _n_tb_18097=_a3;
{
{double _n_r_18098=([&](){auto _n_argument_18704=0.0;auto _n_argument_18705=std::floor((_n_tb_18097-_n_th_18095));return d::maximum({_n_argument_18704,_n_argument_18705});})();
for(;d::truth((_n_r_18098<_n_WL_17879));(void)((_n_r_18098++))){d::check_cancel();double _n_y_18099=(_n_r_18098+0.5);
double _n_dy_18100=(_n_y_18099-(_n_tb_18097-_n_th_18095));
if((d::truth((_n_dy_18100<0.0))||d::truth((_n_y_18099>=(_n_tb_18097+0.5))))){d::check_cancel();continue;
}
double _n_tier_18101=((_n_dy_18100+(_n_th_18095*0.3))/1.6);
double _n_w_18102=((((_n_dy_18100/_n_th_18095)*_n_tw_18096)*(0.7+(0.45*(_n_tier_18101-std::floor(_n_tier_18101)))))+0.3);
{double _n_x_18103=([&](){auto _n_argument_18706=0.0;auto _n_argument_18707=std::floor(((_n_tx_18094-_n_tw_18096)-1.0));return d::maximum({_n_argument_18706,_n_argument_18707});})();
for(;d::truth((_n_x_18103<=d::minimum({(_n_W_17877-1.0),((_n_tx_18094+_n_tw_18096)+1.0)})));(void)((_n_x_18103++))){d::check_cancel();if(d::truth((std::fabs(((_n_x_18103+0.5)-_n_tx_18094))<=_n_w_18102))){d::check_cancel();(void)(([&](){auto&& _n_array_18708=this->_n_mat_17918;auto _n_index_18709=((_n_r_18098*_n_W_17877)+_n_x_18103);auto _n_value_18710=_n_TREE_17896;d::put(_n_array_18708,_n_index_18709,_n_value_18710);return _n_value_18710;})());
}
}}
}}

}
}

double _n_startX_17941(std::shared_ptr<_n_Record_17940> _a0,double _a1){std::shared_ptr<_n_Record_17940> _n_f_18128=_a0;
double _n_lap_18129=_a1;
{
double _n_n_18130=((_n_f_18128->_p_i*7.0)+(_n_lap_18129*131.0));
if(d::truth(_n_f_18128->_p_wide)){d::check_cancel();return (12.0+(176.0*_n_hash_17897(_n_n_18130,23.0)));
}
return ((_n_SRC_17880-6.0)+(30.0*(([&](){auto _n_left_18711=([&](){auto _n_left_18713=_n_hash_17897(_n_n_18130,23.0);auto _n_right_18714=_n_hash_17897(_n_n_18130,24.0);return (_n_left_18713+_n_right_18714);})();auto _n_right_18712=_n_hash_17897(_n_n_18130,25.0);return (_n_left_18711+_n_right_18712);})()-1.5)));

}
}

double _n_lean_17942(std::shared_ptr<_n_Record_17940> _a0,double _a1){std::shared_ptr<_n_Record_17940> _n_f_18131=_a0;
double _n_climb_18132=_a1;
return ((_n_climb_18132*_n_f_18131->_p_wd)+((_n_climb_18132*_n_climb_18132)*0.004));}

double _n_gunwale_17948(double _a0){double _n_dx_18140=_a0;
return (2.4+((d::truth((_n_dx_18140>0.0))?3.0:1.8)*std::pow(([&](){auto _n_argument_18715=4.0;auto _n_argument_18716=12.5;auto _n_argument_18717=std::fabs(_n_dx_18140);return _n_smooth_17901(_n_argument_18715,_n_argument_18716,_n_argument_18717);})(),2.0)));}

bool _n_hull_17949(double _a0,double _a1){double _n_dx_18141=_a0;
double _n_up_18142=_a1;
return ([&]()->bool{auto _n_logical_18718=([&]()->bool{auto _n_logical_18721=(_n_up_18142<=this->_n_gunwale_17948(_n_dx_18141));return d::truth(_n_logical_18721)?(_n_up_18142>(-d::number(0.6))):_n_logical_18721;})();return d::truth(_n_logical_18718)?([&](){auto _n_left_18719=std::fabs(_n_dx_18141);auto _n_right_18720=(12.5-(d::maximum({0.0,(1.8-_n_up_18142)})*2.4));return (_n_left_18719<=_n_right_18720);})():_n_logical_18718;})();}

bool _n_body_17950(double _a0,double _a1,d::Array<d::Array<double,false>,false> _a2){double _n_dx_18143=_a0;
double _n_up_18144=_a1;
d::Array<d::Array<double,false>,false> _n_arms_18145=_a2;
{
if(d::truth(((((_n_dx_18143*_n_dx_18143)/1.3)+(std::pow((_n_up_18144-11.2),2.0)/1.5))<1.0))){d::check_cancel();return true;
}
if(((d::truth((_n_up_18144<=9.8))&&d::truth((_n_up_18144>1.0)))&&d::truth(([&](){auto _n_left_18722=std::fabs(_n_dx_18143);auto _n_right_18723=(1.35+(0.5*_n_smooth_17901(9.8,2.0,_n_up_18144)));return (_n_left_18722<=_n_right_18723);})()))){d::check_cancel();return true;
}
double _n_ax_18146=std::fabs(_n_dx_18143);
return ([&]()->bool{auto _n_logical_18724=(_n_seg_17904(_n_ax_18146,_n_up_18144,d::at(d::at(_n_arms_18145,0.0),0.0),d::at(d::at(_n_arms_18145,0.0),1.0),d::at(d::at(_n_arms_18145,1.0),0.0),d::at(d::at(_n_arms_18145,1.0),1.0))<0.66);return d::truth(_n_logical_18724)?_n_logical_18724:(_n_seg_17904(_n_ax_18146,_n_up_18144,d::at(d::at(_n_arms_18145,1.0),0.0),d::at(d::at(_n_arms_18145,1.0),1.0),d::at(d::at(_n_arms_18145,2.0),0.0),d::at(d::at(_n_arms_18145,2.0),1.0))<0.58);})();

}
}

void _n_pose_17955(d::Array<d::Array<double,false>,false> _a0,d::Array<d::Array<double,false>,false> _a1,double _a2){d::Array<d::Array<double,false>,false> _n_a_18150=_a0;
d::Array<d::Array<double,false>,false> _n_b_18151=_a1;
double _n_k_18152=_a2;
{
{double _n_i_18153=0.0;
for(;d::truth((_n_i_18153<3.0));(void)((_n_i_18153++))){d::check_cancel();(void)((([&](){auto&& _n_array_18725=d::at(this->_n_arms_17954,_n_i_18153);auto _n_index_18726=0.0;auto _n_value_18727=_n_mix_17902(d::at(d::at(_n_a_18150,_n_i_18153),0.0),d::at(d::at(_n_b_18151,_n_i_18153),0.0),_n_k_18152);d::put(_n_array_18725,_n_index_18726,_n_value_18727);return _n_value_18727;})(),([&](){auto&& _n_array_18728=d::at(this->_n_arms_17954,_n_i_18153);auto _n_index_18729=1.0;auto _n_value_18730=_n_mix_17902(d::at(d::at(_n_a_18150,_n_i_18153),1.0),d::at(d::at(_n_b_18151,_n_i_18153),1.0),_n_k_18152);d::put(_n_array_18728,_n_index_18729,_n_value_18730);return _n_value_18730;})()));
}}
{double _n_j_18154=0.0;
for(;d::truth((_n_j_18154<d::at(this->_n_BOX_17951,3.0)));(void)((_n_j_18154++))){d::check_cancel();{double _n_i_18155=0.0;
for(;d::truth((_n_i_18155<d::at(this->_n_BOX_17951,2.0)));(void)((_n_i_18155++))){d::check_cancel();double _n_q_18156=((_n_j_18154*d::at(this->_n_BOX_17951,2.0))+_n_i_18155);
(void)(([&](){auto&& _n_array_18731=this->_n_shape_17953;auto _n_index_18732=_n_q_18156;auto _n_value_18733=([&]()->double{auto _n_logical_18734=d::at(this->_n_hulls_17952,_n_q_18156);return d::truth(_n_logical_18734)?_n_logical_18734:(d::truth(this->_n_body_17950(((((d::at(this->_n_BOX_17951,0.0)+_n_i_18155)+0.5)-_n_FX_17884)/_n_SC_17883),((_n_BW_17882-((d::at(this->_n_BOX_17951,1.0)+_n_j_18154)+0.5))/_n_SC_17883),this->_n_arms_17954))?2.0:0.0);})();d::put(_n_array_18731,_n_index_18732,_n_value_18733);return _n_value_18733;})());
}}
}}

}
}

void _n_paint_17962(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_k_18157=_a0;
double _n_pr_18158=_a1;
double _n_pg_18159=_a2;
double _n_pb_18160=_a3;
double _n_a_18161=_a4;
{
(void)(((([&](){auto&& _n_array_18735=this->_n_R_17958;auto _n_index_18736=_n_k_18157;auto _n_value_18737=(d::at(_n_array_18735,_n_index_18736)+((_n_pr_18158-d::at(this->_n_R_17958,_n_k_18157))*_n_a_18161));d::put(_n_array_18735,_n_index_18736,_n_value_18737);return _n_value_18737;})(),([&](){auto&& _n_array_18738=this->_n_G_17959;auto _n_index_18739=_n_k_18157;auto _n_value_18740=(d::at(_n_array_18738,_n_index_18739)+((_n_pg_18159-d::at(this->_n_G_17959,_n_k_18157))*_n_a_18161));d::put(_n_array_18738,_n_index_18739,_n_value_18740);return _n_value_18740;})()),([&](){auto&& _n_array_18741=this->_n_B_17960;auto _n_index_18742=_n_k_18157;auto _n_value_18743=(d::at(_n_array_18741,_n_index_18742)+((_n_pb_18160-d::at(this->_n_B_17960,_n_k_18157))*_n_a_18161));d::put(_n_array_18741,_n_index_18742,_n_value_18743);return _n_value_18743;})()));
if(d::truth((d::at(this->_n_FL_17961,_n_k_18157)<(0.12*_n_a_18161)))){d::check_cancel();(void)(([&](){auto&& _n_array_18744=this->_n_FL_17961;auto _n_index_18745=_n_k_18157;auto _n_value_18746=(0.12*_n_a_18161);d::put(_n_array_18744,_n_index_18745,_n_value_18746);return _n_value_18746;})());
}

}
}

void _n_lantern_17963(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::optional<d::Array<uint8_t,true>> _a6){double _n_cx_18162=_a0;
double _n_cy_18163=_a1;
double _n_h_18164=_a2;
double _n_I_18165=_a3;
double _n_a_18166=_a4;
double _n_limit_18167=_a5;
std::optional<d::Array<uint8_t,true>> _n_hide_18168=_a6;
{
if(d::truth((_n_h_18164<1.4))){d::check_cancel();double _n_x_18169=std::floor(_n_cx_18162);
double _n_r_18170=std::floor(_n_cy_18163);
if((((d::truth((_n_x_18169<0.0))||d::truth((_n_x_18169>=_n_W_17877)))||d::truth((_n_r_18170<0.0)))||d::truth((_n_r_18170>=_n_limit_18167)))){d::check_cancel();return;
}
double _n_k_18171=((_n_r_18170*_n_W_17877)+_n_x_18169);
if((d::truth(_n_hide_18168)&&d::truth(d::at(d::read(_n_hide_18168),_n_k_18171)))){d::check_cancel();return;
}
double _n_q_18172=(_n_I_18165*(0.85+(0.15*_n_h_18164)));
(void)(this->_n_paint_17962(_n_k_18171,_n_q_18172,(_n_q_18172*(0.42+(0.3*_n_q_18172))),(_n_q_18172*(0.1+((0.18*_n_q_18172)*_n_q_18172))),_n_a_18166));
return;
}
if(d::truth((_n_h_18164<2.6))){d::check_cancel();double _n_x_18173=std::floor(_n_cx_18162);
double _n_top_18174=(_n_cy_18163-1.0);
double _n_r0_18175=std::floor(_n_top_18174);
if((d::truth((_n_x_18173<0.0))||d::truth((_n_x_18173>=_n_W_17877)))){d::check_cancel();return;
}
{double _n_r_18176=_n_r0_18175;
for(;d::truth((_n_r_18176<=(_n_r0_18175+2.0)));(void)((_n_r_18176++))){d::check_cancel();if((d::truth((_n_r_18176<0.0))||d::truth((_n_r_18176>=_n_limit_18167)))){d::check_cancel();continue;
}
double _n_k_18177=((_n_r_18176*_n_W_17877)+_n_x_18173);
if((d::truth(_n_hide_18168)&&d::truth(d::at(d::read(_n_hide_18168),_n_k_18177)))){d::check_cancel();continue;
}
double _n_up_18178=([&](){auto _n_argument_18747=0.0;auto _n_argument_18748=([&](){auto _n_left_18749=d::minimum({(_n_r_18176+1.0),(_n_top_18174+1.0)});auto _n_right_18750=d::maximum({_n_r_18176,_n_top_18174});return (_n_left_18749-_n_right_18750);})();return d::maximum({_n_argument_18747,_n_argument_18748});})();
double _n_dn_18179=([&](){auto _n_argument_18751=0.0;auto _n_argument_18752=([&](){auto _n_left_18753=d::minimum({(_n_r_18176+1.0),(_n_top_18174+2.0)});auto _n_right_18754=d::maximum({_n_r_18176,(_n_top_18174+1.0)});return (_n_left_18753-_n_right_18754);})();return d::maximum({_n_argument_18751,_n_argument_18752});})();
if(d::truth(((_n_up_18178+_n_dn_18179)<0.02))){d::check_cancel();continue;
}
double _n_q_18180=((_n_I_18165*((0.8*_n_up_18178)+(1.1*_n_dn_18179)))/(_n_up_18178+_n_dn_18179));
(void)(this->_n_paint_17962(_n_k_18177,_n_q_18180,(_n_q_18180*(0.34+(0.36*_n_q_18180))),(_n_q_18180*(0.06+((0.2*_n_q_18180)*_n_q_18180))),(_n_a_18166*(_n_up_18178+_n_dn_18179))));
}}
return;
}
double _n_top_18181=(_n_cy_18163-(_n_h_18164/2.0));
double _n_x0_18182=([&](){auto _n_argument_18755=0.0;auto _n_argument_18756=std::floor((_n_cx_18162-(0.36*_n_h_18164)));return d::maximum({_n_argument_18755,_n_argument_18756});})();
double _n_x1_18183=([&](){auto _n_argument_18757=(_n_W_17877-1.0);auto _n_argument_18758=std::floor((_n_cx_18162+(0.36*_n_h_18164)));return d::minimum({_n_argument_18757,_n_argument_18758});})();
double _n_r0_18184=([&](){auto _n_argument_18759=0.0;auto _n_argument_18760=std::floor(_n_top_18181);return d::maximum({_n_argument_18759,_n_argument_18760});})();
double _n_r1_18185=([&](){auto _n_argument_18761=(_n_limit_18167-1.0);auto _n_argument_18762=std::floor((_n_top_18181+_n_h_18164));return d::minimum({_n_argument_18761,_n_argument_18762});})();
{double _n_r_18186=_n_r0_18184;
for(;d::truth((_n_r_18186<=_n_r1_18185));(void)((_n_r_18186++))){d::check_cancel();{double _n_x_18187=_n_x0_18182;
for(;d::truth((_n_x_18187<=_n_x1_18183));(void)((_n_x_18187++))){d::check_cancel();double _n_k_18188=((_n_r_18186*_n_W_17877)+_n_x_18187);
if((d::truth(_n_hide_18168)&&d::truth(d::at(d::read(_n_hide_18168),_n_k_18188)))){d::check_cancel();continue;
}
double _n_cov_18189=0.0;
{double _n_sy_18190=0.0;
for(;d::truth((_n_sy_18190<3.0));(void)((_n_sy_18190++))){d::check_cancel();{double _n_sx_18191=0.0;
for(;d::truth((_n_sx_18191<3.0));(void)((_n_sx_18191++))){d::check_cancel();if(d::truth(_n_inside_17909((((_n_x_18187+((_n_sx_18191+0.5)/3.0))-_n_cx_18162)/_n_h_18164),(((_n_r_18186+((_n_sy_18190+0.5)/3.0))-_n_top_18181)/_n_h_18164)))){d::check_cancel();(void)((_n_cov_18189++));
}
}}
}}
if(d::truth((!d::truth(_n_cov_18189)))){d::check_cancel();continue;
}
double _n_u_18192=(((_n_x_18187+0.5)-_n_cx_18162)/_n_h_18164);
double _n_v_18193=_n_clamp_17900((((_n_r_18186+0.5)-_n_top_18181)/_n_h_18164));
double _n_xn_18194=([&](){auto _n_argument_18763=1.0;auto _n_argument_18764=(std::fabs(_n_u_18192)/(0.34-(0.08*_n_v_18193)));return d::minimum({_n_argument_18763,_n_argument_18764});})();
double _n_q_18195=((_n_I_18165*(1.0-((0.3*_n_xn_18194)*_n_xn_18194)))*(0.78+(0.42*_n_v_18193)));
double _n_fl_18196=(std::exp(((-d::number(std::pow((_n_u_18192/0.13),2.0)))-std::pow(((_n_v_18193-0.9)/0.1),2.0)))*_n_I_18165);
(void)(this->_n_paint_17962(_n_k_18188,(_n_q_18195+(_n_fl_18196*0.3)),((_n_q_18195*(0.3+(0.42*_n_q_18195)))+(_n_fl_18196*0.6)),((_n_q_18195*(0.04+((0.2*_n_q_18195)*_n_q_18195)))+(_n_fl_18196*0.5)),((_n_cov_18189/9.0)*_n_a_18166)));
}}
}}

}
}

void _n_halo_17964(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_cx_18197=_a0;
double _n_cy_18198=_a1;
double _n_h_18199=_a2;
double _n_g_18200=_a3;
double _n_limit_18201=_a4;
{
double _n_e_18202=(0.4+(0.32*_n_h_18199));
double _n_reach_18203=std::ceil((_n_e_18202*4.0));
double _n_r0_18204=([&](){auto _n_argument_18765=0.0;auto _n_argument_18766=std::floor((_n_cy_18198-_n_reach_18203));return d::maximum({_n_argument_18765,_n_argument_18766});})();
double _n_r1_18205=([&](){auto _n_argument_18767=(_n_limit_18201-1.0);auto _n_argument_18768=std::floor((_n_cy_18198+_n_reach_18203));return d::minimum({_n_argument_18767,_n_argument_18768});})();
double _n_x0_18206=([&](){auto _n_argument_18769=0.0;auto _n_argument_18770=std::floor((_n_cx_18197-_n_reach_18203));return d::maximum({_n_argument_18769,_n_argument_18770});})();
double _n_x1_18207=([&](){auto _n_argument_18771=(_n_W_17877-1.0);auto _n_argument_18772=std::floor((_n_cx_18197+_n_reach_18203));return d::minimum({_n_argument_18771,_n_argument_18772});})();
{double _n_r_18208=_n_r0_18204;
for(;d::truth((_n_r_18208<=_n_r1_18205));(void)((_n_r_18208++))){d::check_cancel();double _n_dy_18209=((_n_r_18208+0.5)-_n_cy_18198);
{double _n_x_18210=_n_x0_18206;
for(;d::truth((_n_x_18210<=_n_x1_18207));(void)((_n_x_18210++))){d::check_cancel();double _n_dx_18211=((_n_x_18210+0.5)-_n_cx_18197);
double _n_d_18212=([&](){auto _n_argument_18773=0.0;auto _n_argument_18774=(std::sqrt(((_n_dx_18211*_n_dx_18211)+(_n_dy_18209*_n_dy_18209)))-(0.3*_n_h_18199));return d::maximum({_n_argument_18773,_n_argument_18774});})();
double _n_q_18213=(_n_g_18200*([&](){auto _n_left_18775=std::exp(((-d::number(_n_d_18212))/_n_e_18202));auto _n_right_18776=(0.25*std::exp(((-d::number(_n_d_18212))/(_n_e_18202*2.5))));return (_n_left_18775+_n_right_18776);})());
double _n_k_18214=((_n_r_18208*_n_W_17877)+_n_x_18210);
(void)(((([&](){auto&& _n_array_18777=this->_n_R_17958;auto _n_index_18778=_n_k_18214;auto _n_value_18779=(d::at(_n_array_18777,_n_index_18778)+_n_q_18213);d::put(_n_array_18777,_n_index_18778,_n_value_18779);return _n_value_18779;})(),([&](){auto&& _n_array_18780=this->_n_G_17959;auto _n_index_18781=_n_k_18214;auto _n_value_18782=(d::at(_n_array_18780,_n_index_18781)+(_n_q_18213*0.5));d::put(_n_array_18780,_n_index_18781,_n_value_18782);return _n_value_18782;})()),([&](){auto&& _n_array_18783=this->_n_B_17960;auto _n_index_18784=_n_k_18214;auto _n_value_18785=(d::at(_n_array_18783,_n_index_18784)+(_n_q_18213*0.17));d::put(_n_array_18783,_n_index_18784,_n_value_18785);return _n_value_18785;})()));
}}
}}

}
}

explicit Native_lantern_lake(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_17910=d::map(_n_meta_17875->_p_palette,_n_hex_17903);
this->_n_STAR_17911=(double(this->_n_P_17910.size())-3.0);
this->_n_SL_17912=(this->_n_STAR_17911-3.0);
this->_n_N_17913=(_n_W_17877*_n_H_17878);
this->_n_S_17914=(_n_WL_17879*_n_W_17877);
this->_n_out_17915=d::Array<d::String,false>(size_t(this->_n_N_17913));
this->_n_lut_17916=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_17918=d::Array<uint8_t,true>(size_t(this->_n_S_17914));
this->_n_sR_17919=d::Array<float,true>(size_t(this->_n_S_17914));
this->_n_sG_17920=d::Array<float,true>(size_t(this->_n_S_17914));
this->_n_sB_17921=d::Array<float,true>(size_t(this->_n_S_17914));
this->_n_take_17922=d::Array<float,true>(size_t(this->_n_S_17914));
this->_n_backTop_17923=d::Array<float,true>(size_t(_n_W_17877));
this->_n_backX_17924=d::Array<float,true>(size_t(_n_W_17877));
this->_n_frontTop_17925=d::Array<float,true>(size_t(_n_W_17877));
this->_n_frontX_17926=d::Array<float,true>(size_t(_n_W_17877));
this->_n_farTop_17927=d::Array<float,true>(size_t(_n_W_17877));
{double _n_x_18039=0.0;
for(;d::truth((_n_x_18039<_n_W_17877));(void)((_n_x_18039++))){d::check_cancel();auto _n_binding_18368=_n_range_17908((_n_x_18039+0.5),_n_PEAKS_17905,3.1,4.0);
double _n_hb_18040=d::at(_n_binding_18368,0.0);
double _n_pb_18041=d::at(_n_binding_18368,1.0);
auto _n_binding_18369=_n_range_17908((_n_x_18039+0.5),_n_SHOULDERS_17906,7.7,3.0);
double _n_hf_18042=d::at(_n_binding_18369,0.0);
double _n_pf_18043=d::at(_n_binding_18369,1.0);
auto _n_binding_18370=_n_range_17908((_n_x_18039+0.5),_n_DISTANT_17907,11.3,2.2);
double _n_hd_18044=d::at(_n_binding_18370,0.0);
(void)((([&](){auto&& _n_array_18371=this->_n_backTop_17923;auto _n_index_18372=_n_x_18039;auto _n_value_18373=(_n_WL_17879-d::maximum({_n_hb_18040,0.0}));d::put(_n_array_18371,_n_index_18372,_n_value_18373);return _n_value_18373;})(),([&](){auto&& _n_array_18374=this->_n_backX_17924;auto _n_index_18375=_n_x_18039;auto _n_value_18376=_n_pb_18041;d::put(_n_array_18374,_n_index_18375,_n_value_18376);return _n_value_18376;})()));
(void)((([&](){auto&& _n_array_18377=this->_n_frontTop_17925;auto _n_index_18378=_n_x_18039;auto _n_value_18379=(_n_WL_17879-d::maximum({_n_hf_18042,0.0}));d::put(_n_array_18377,_n_index_18378,_n_value_18379);return _n_value_18379;})(),([&](){auto&& _n_array_18380=this->_n_frontX_17926;auto _n_index_18381=_n_x_18039;auto _n_value_18382=_n_pf_18043;d::put(_n_array_18380,_n_index_18381,_n_value_18382);return _n_value_18382;})()));
(void)(([&](){auto&& _n_array_18383=this->_n_farTop_17927;auto _n_index_18384=_n_x_18039;auto _n_value_18385=(_n_WL_17879-d::maximum({_n_hd_18044,0.0}));d::put(_n_array_18383,_n_index_18384,_n_value_18385);return _n_value_18385;})());
}}
this->_n_HUES_17929=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.22,0.36,1.0},d::Array<double,false>{0.46,0.36,1.0},d::Array<double,false>{0.76,0.42,0.92},d::Array<double,false>{1.0,0.48,0.58},d::Array<double,false>{1.0,0.54,0.34},d::Array<double,false>{1.0,0.58,0.2}};
this->_n_far_17932=d::Array<uint8_t,true>(size_t(this->_n_S_17914));
{double _n_r_18079=0.0;
for(;d::truth((_n_r_18079<_n_WL_17879));(void)((_n_r_18079++))){d::check_cancel();{double _n_x_18080=0.0;
for(;d::truth((_n_x_18080<_n_W_17877));(void)((_n_x_18080++))){d::check_cancel();double _n_k_18081=((_n_r_18079*_n_W_17877)+_n_x_18080);
double _n_y_18082=(_n_r_18079+0.5);
double _n_xc_18083=(_n_x_18080+0.5);
if(d::truth((_n_y_18082>=d::at(this->_n_frontTop_17925,_n_x_18080)))){d::check_cancel();(void)(([&](){auto&& _n_array_18386=this->_n_mat_17918;auto _n_index_18387=_n_k_18081;auto _n_value_18388=_n_PEAK_17895;d::put(_n_array_18386,_n_index_18387,_n_value_18388);return _n_value_18388;})());
(void)(this->_n_slope_17931(_n_k_18081,_n_x_18080,_n_y_18082,d::at(this->_n_frontTop_17925,_n_x_18080),d::at(this->_n_frontX_17926,_n_x_18080),0.05,0.06,0.3,1.0));
}else {d::check_cancel();if(d::truth((_n_y_18082>=d::at(this->_n_backTop_17923,_n_x_18080)))){d::check_cancel();(void)(([&](){auto&& _n_array_18389=this->_n_mat_17918;auto _n_index_18390=_n_k_18081;auto _n_value_18391=_n_BACK_17894;d::put(_n_array_18389,_n_index_18390,_n_value_18391);return _n_value_18391;})());
if((d::truth((this->_n_slope_17931(_n_k_18081,_n_x_18080,_n_y_18082,d::at(this->_n_backTop_17923,_n_x_18080),d::at(this->_n_backX_17924,_n_x_18080),0.24,0.3,0.35,0.5)<0.3))&&d::truth(((_n_y_18082-d::at(this->_n_backTop_17923,_n_x_18080))>1.2)))){d::check_cancel();(void)(([&](){auto&& _n_array_18392=this->_n_far_17932;auto _n_index_18393=_n_k_18081;auto _n_value_18394=1.0;d::put(_n_array_18392,_n_index_18393,_n_value_18394);return _n_value_18394;})());
}
}else {d::check_cancel();if(d::truth((_n_y_18082>=d::at(this->_n_farTop_17927,_n_x_18080)))){d::check_cancel();(void)(([&](){auto&& _n_array_18395=this->_n_mat_17918;auto _n_index_18396=_n_k_18081;auto _n_value_18397=_n_FAR_17893;d::put(_n_array_18395,_n_index_18396,_n_value_18397);return _n_value_18397;})());
double _n_tex_18084=_n_fbm_17899((_n_x_18080*0.2),(_n_y_18082*0.3),3.0);
double _n_w_18085=this->_n_dome_17928(_n_xc_18083,_n_y_18082);
double _n_b_18086=(((0.06+(0.04*_n_tex_18084))+(0.3*_n_w_18085))+(0.7*std::pow(_n_w_18085,3.0)));
(void)(((([&](){auto&& _n_array_18398=this->_n_sR_17919;auto _n_index_18399=_n_k_18081;auto _n_value_18400=(_n_b_18086*this->_n_hue_17930(_n_w_18085,0.0));d::put(_n_array_18398,_n_index_18399,_n_value_18400);return _n_value_18400;})(),([&](){auto&& _n_array_18401=this->_n_sG_17920;auto _n_index_18402=_n_k_18081;auto _n_value_18403=(_n_b_18086*this->_n_hue_17930(_n_w_18085,1.0));d::put(_n_array_18401,_n_index_18402,_n_value_18403);return _n_value_18403;})()),([&](){auto&& _n_array_18404=this->_n_sB_17921;auto _n_index_18405=_n_k_18081;auto _n_value_18406=(_n_b_18086*this->_n_hue_17930(_n_w_18085,2.0));d::put(_n_array_18404,_n_index_18405,_n_value_18406);return _n_value_18406;})()));
}else {d::check_cancel();double _n_v_18087=std::pow((_n_y_18082/_n_WL_17879),1.5);
double _n_hz_18088=(0.85+(0.3*_n_fbm_17899((_n_x_18080*0.04),(_n_r_18079*0.07),3.0)));
double _n_w_18089=this->_n_dome_17928(_n_xc_18083,_n_y_18082);
double _n_b_18090=(((0.18+(0.32*_n_v_18087))*_n_hz_18088)+(0.5*_n_w_18089));
(void)(((([&](){auto&& _n_array_18407=this->_n_sR_17919;auto _n_index_18408=_n_k_18081;auto _n_value_18409=(_n_b_18090*this->_n_hue_17930(_n_w_18089,0.0));d::put(_n_array_18407,_n_index_18408,_n_value_18409);return _n_value_18409;})(),([&](){auto&& _n_array_18410=this->_n_sG_17920;auto _n_index_18411=_n_k_18081;auto _n_value_18412=(_n_b_18090*this->_n_hue_17930(_n_w_18089,1.0));d::put(_n_array_18410,_n_index_18411,_n_value_18412);return _n_value_18412;})()),([&](){auto&& _n_array_18413=this->_n_sB_17921;auto _n_index_18414=_n_k_18081;auto _n_value_18415=(_n_b_18090*this->_n_hue_17930(_n_w_18089,2.0));d::put(_n_array_18413,_n_index_18414,_n_value_18415);return _n_value_18415;})()));
(void)(([&](){auto&& _n_array_18416=this->_n_take_17922;auto _n_index_18417=_n_k_18081;auto _n_value_18418=_n_w_18089;d::put(_n_array_18416,_n_index_18417,_n_value_18418);return _n_value_18418;})());
}
}
}
}}
}}
{double _n_r_18092=0.0;
for(;d::truth((_n_r_18092<_n_WL_17879));(void)((_n_r_18092++))){d::check_cancel();{double _n_x_18093=0.0;
for(;d::truth((_n_x_18093<_n_W_17877));(void)((_n_x_18093++))){d::check_cancel();if(d::truth(((_n_r_18092+0.5)>=this->_n_scrub_17933((_n_x_18093+0.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_18419=this->_n_mat_17918;auto _n_index_18420=((_n_r_18092*_n_W_17877)+_n_x_18093);auto _n_value_18421=_n_TREE_17896;d::put(_n_array_18419,_n_index_18420,_n_value_18421);return _n_value_18421;})());
}
}}
}}
{double _n_x_18104=(-d::number(2.0));
for(;d::truth((_n_x_18104<(_n_W_17877+2.0)));){d::check_cancel();double _n_h_18105=([&](){auto _n_argument_18422=std::floor((_n_x_18104*7.0));auto _n_argument_18423=21.0;return _n_hash_17897(_n_argument_18422,_n_argument_18423);})();
double _n_clearing_18106=([&](){auto _n_argument_18424=22.0;auto _n_argument_18425=0.0;auto _n_argument_18426=std::fabs((_n_x_18104-_n_SRC_17880));return _n_smooth_17901(_n_argument_18424,_n_argument_18425,_n_argument_18426);})();
double _n_th_18107=((2.6+(4.4*std::pow(([&](){auto _n_argument_18427=std::floor((_n_x_18104*3.0));auto _n_argument_18428=5.0;return _n_hash_17897(_n_argument_18427,_n_argument_18428);})(),1.2)))*(1.0-(0.3*_n_clearing_18106)));
(void)(([&](){auto _n_argument_18429=(_n_x_18104+([&](){auto _n_argument_18430=std::floor(_n_x_18104);auto _n_argument_18431=2.0;return _n_hash_17897(_n_argument_18430,_n_argument_18431);})());auto _n_argument_18432=_n_th_18107;auto _n_argument_18433=(1.0+(0.8*([&](){auto _n_argument_18434=std::floor(_n_x_18104);auto _n_argument_18435=4.0;return _n_hash_17897(_n_argument_18434,_n_argument_18435);})()));auto _n_argument_18436=(this->_n_scrub_17933(_n_x_18104)+1.0);return this->_n_spruce_17934(_n_argument_18429,_n_argument_18432,_n_argument_18433,_n_argument_18436);})());
(void)((_n_x_18104=(_n_x_18104+(1.2+(1.8*_n_h_18105)))));
}}
{double _n_k_18108=0.0;
for(;d::truth((_n_k_18108<this->_n_S_17914));(void)((_n_k_18108++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_17918,_n_k_18108)!=_n_TREE_17896))){d::check_cancel();continue;
}
double _n_x_18109=d::mod(_n_k_18108,_n_W_17877);
double _n_r_18110=double(d::i32((_n_k_18108/_n_W_17877))|d::i32(0.0));
double _n_h_18111=_n_hash_17897(((_n_x_18109*13.0)+_n_r_18110),5.0);
(void)(((([&](){auto&& _n_array_18437=this->_n_sR_17919;auto _n_index_18438=_n_k_18108;auto _n_value_18439=(0.004+(0.004*_n_h_18111));d::put(_n_array_18437,_n_index_18438,_n_value_18439);return _n_value_18439;})(),([&](){auto&& _n_array_18440=this->_n_sG_17920;auto _n_index_18441=_n_k_18108;auto _n_value_18442=(0.006+(0.006*_n_h_18111));d::put(_n_array_18440,_n_index_18441,_n_value_18442);return _n_value_18442;})()),([&](){auto&& _n_array_18443=this->_n_sB_17921;auto _n_index_18444=_n_k_18108;auto _n_value_18445=(0.012+(0.008*_n_h_18111));d::put(_n_array_18443,_n_index_18444,_n_value_18445);return _n_value_18445;})()));
double _n_edge_18112=((d::truth((_n_r_18110==0.0))||d::truth((d::at(this->_n_mat_17918,(_n_k_18108-_n_W_17877))!=_n_TREE_17896)))?1.0:((d::truth((_n_r_18110>1.0))&&d::truth((d::at(this->_n_mat_17918,(_n_k_18108-(2.0*_n_W_17877)))!=_n_TREE_17896)))?0.35:0.0));
double _n_g_18113=((_n_edge_18112*this->_n_dome_17928((_n_x_18109+0.5),(_n_r_18110+0.5)))*0.45);
(void)(((([&](){auto&& _n_array_18446=this->_n_sR_17919;auto _n_index_18447=_n_k_18108;auto _n_value_18448=(d::at(_n_array_18446,_n_index_18447)+_n_g_18113);d::put(_n_array_18446,_n_index_18447,_n_value_18448);return _n_value_18448;})(),([&](){auto&& _n_array_18449=this->_n_sG_17920;auto _n_index_18450=_n_k_18108;auto _n_value_18451=(d::at(_n_array_18449,_n_index_18450)+(_n_g_18113*0.5));d::put(_n_array_18449,_n_index_18450,_n_value_18451);return _n_value_18451;})()),([&](){auto&& _n_array_18452=this->_n_sB_17921;auto _n_index_18453=_n_k_18108;auto _n_value_18454=(d::at(_n_array_18452,_n_index_18453)+(_n_g_18113*0.18));d::put(_n_array_18452,_n_index_18453,_n_value_18454);return _n_value_18454;})()));
(void)(([&](){auto&& _n_array_18455=this->_n_take_17922;auto _n_index_18456=_n_k_18108;auto _n_value_18457=(_n_edge_18112*0.5);d::put(_n_array_18455,_n_index_18456,_n_value_18457);return _n_value_18457;})());
}}
this->_n_floorS_17935=d::Array<float,true>(size_t(this->_n_S_17914));
{double _n_k_18114=0.0;
for(;d::truth((_n_k_18114<this->_n_S_17914));(void)((_n_k_18114++))){d::check_cancel();(void)(([&](){auto&& _n_array_18458=this->_n_floorS_17935;auto _n_index_18459=_n_k_18114;auto _n_value_18460=(d::truth((d::at(this->_n_mat_17918,_n_k_18114)==_n_AIR_17892))?(0.04+((0.08*double(d::i32((_n_k_18114/_n_W_17877))|d::i32(0.0)))/_n_WL_17879)):((d::truth((d::at(this->_n_mat_17918,_n_k_18114)==_n_FAR_17893))||d::truth((d::at(this->_n_mat_17918,_n_k_18114)==_n_BACK_17894)))?0.03:0.0));d::put(_n_array_18458,_n_index_18459,_n_value_18460);return _n_value_18460;})());
}}
this->_n_shoreLights_17936=d::Array<std::array<double,3>,false>{};
{double _n_i_18115=0.0;
double _n_x_18116=(_n_SRC_17880-24.0);
for(;d::truth((_n_i_18115<8.0));(void)((_n_i_18115++))){d::check_cancel();(void)(this->_n_shoreLights_17936.push(std::array<double,3>{d::round(_n_x_18116),((_n_WL_17879-1.0)-(d::truth((_n_hash_17897(_n_i_18115,62.0)>0.6))?1.0:0.0)),(_n_hash_17897(_n_i_18115,63.0)*6.28)}));
(void)((_n_x_18116=(_n_x_18116+(2.0+(9.0*std::pow(_n_hash_17897(_n_i_18115,61.0),2.0))))));
}}
this->_n_stars_17937=d::Array<std::array<double,4>,false>{};
{double _n_k_18117=0.0;
for(;d::truth((_n_k_18117<this->_n_S_17914));(void)((_n_k_18117++))){d::check_cancel();if(d::truth((d::at(this->_n_mat_17918,_n_k_18117)!=_n_AIR_17892))){d::check_cancel();continue;
}
double _n_h_18118=([&](){auto _n_argument_18461=d::mod(_n_k_18117,_n_W_17877);auto _n_argument_18462=(std::floor((_n_k_18117/_n_W_17877))+101.0);return _n_hash_17897(_n_argument_18461,_n_argument_18462);})();
if((d::truth((_n_h_18118>0.985))&&d::truth((d::at(this->_n_take_17922,_n_k_18117)<0.25)))){d::check_cancel();(void)(this->_n_stars_17937.push(std::array<double,4>{_n_k_18117,(_n_hash_17897(_n_k_18117,3.0)*6.28),(0.8+(_n_hash_17897(_n_k_18117,4.0)*2.5)),((0.45+((_n_h_18118-0.985)*40.0))*(1.0-(d::at(this->_n_take_17922,_n_k_18117)*2.5)))}));
}
}}
this->_n_gap_17938=d::Array<uint8_t,true>(size_t(_n_H_17878));
{double _n_r_18119=_n_WL_17879;
for(;d::truth((_n_r_18119<_n_H_17878));(void)((_n_r_18119++))){d::check_cancel();(void)(([&](){auto&& _n_array_18463=this->_n_gap_17938;auto _n_index_18464=_n_r_18119;auto _n_value_18465=(d::truth((_n_hash_17897(_n_r_18119,404.0)<0.3))?1.0:0.0);d::put(_n_array_18463,_n_index_18464,_n_value_18465);return _n_value_18465;})());
}}
this->_n_shore_17939=d::Array<std::shared_ptr<_n_Record_17940>,false>{};
{double _n_i_18120=0.0;
for(;d::truth((_n_i_18120<240.0));(void)((_n_i_18120++))){d::check_cancel();bool _n_near_18121=(_n_i_18120>=196.0);
double _n_s_18122=(d::truth(_n_near_18121)?(1.5+(1.7*std::pow(_n_hash_17897(_n_i_18120,11.0),1.5))):(0.45+(0.9*std::pow(_n_hash_17897(_n_i_18120,11.0),1.4))));
double _n_v_18123=(0.3+(0.62*_n_s_18122));
bool _n_out_18124=([&]()->bool{auto _n_logical_18466=_n_near_18121;return d::truth(_n_logical_18466)?(_n_hash_17897(_n_i_18120,12.0)<0.7):_n_logical_18466;})();
double _n_climb_18125=(d::truth(_n_out_18124)?((_n_WL_17879+(3.0*_n_s_18122))+4.0):(12.0+(46.0*std::pow(_n_hash_17897(_n_i_18120,13.0),0.8))));
(void)(this->_n_shore_17939.push(([&](){auto _n_object_18468=std::make_shared<_n_Record_17940>();_n_object_18468->_p_i=_n_i_18120;_n_object_18468->_p_s=_n_s_18122;_n_object_18468->_p_v=_n_v_18123;_n_object_18468->_p_life=(((_n_climb_18125+_n_s_18122)+1.0)/_n_v_18123);_n_object_18468->_p_off=_n_hash_17897(_n_i_18120,14.0);_n_object_18468->_p_wd=(0.12+(0.3*_n_hash_17897(_n_i_18120,15.0)));_n_object_18468->_p_sw=((0.25*_n_s_18122)+0.2);_n_object_18468->_p_sf=(0.3+(0.5*_n_hash_17897(_n_i_18120,16.0)));_n_object_18468->_p_ph=(_n_hash_17897(_n_i_18120,17.0)*6.28);_n_object_18468->_p_f1=(2.0+(3.0*_n_hash_17897(_n_i_18120,18.0)));_n_object_18468->_p_f2=(5.0+(4.0*_n_hash_17897(_n_i_18120,19.0)));_n_object_18468->_p_out=_n_out_18124;_n_object_18468->_p_wide=([&]()->bool{auto _n_logical_18469=_n_near_18121;return d::truth(_n_logical_18469)?_n_logical_18469:(_n_hash_17897(_n_i_18120,20.0)<0.08);})();return _n_object_18468;})()));
}}
(void)(this->_n_shore_17939.sort([=]( std::shared_ptr<_n_Record_17940> _a0,std::shared_ptr<_n_Record_17940> _a1) mutable ->double{std::shared_ptr<_n_Record_17940> _n_a_18126=_a0;
std::shared_ptr<_n_Record_17940> _n_b_18127=_a1;
return (_n_a_18126->_p_s-_n_b_18127->_p_s);}));
this->_n_NEAR_17943=d::Array<std::array<double,3>,false>{std::array<double,3>{12.5,34.0,30.0},std::array<double,3>{8.5,178.0,14.0},std::array<double,3>{6.5,66.0,74.0},std::array<double,3>{5.2,154.0,46.0},std::array<double,3>{4.4,18.0,86.0},std::array<double,3>{4.6,136.0,4.0},std::array<double,3>{9.5,190.0,116.0},std::array<double,3>{10.5,150.0,160.0},std::array<double,3>{5.8,80.0,128.0},std::array<double,3>{7.0,28.0,190.0},std::array<double,3>{4.2,172.0,150.0}};
this->_n_close_17944=d::map(this->_n_NEAR_17943,[&]( std::array<double,3> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_17945>{auto _n_binding_18470=_a0;
double _n_s_18133=d::at(_n_binding_18470,0.0);
double _n_x_18134=d::at(_n_binding_18470,1.0);
double _n_y_18135=d::at(_n_binding_18470,2.0);
double _n_i_18136=_a1;
{
double _n_v_18137=(0.35+(0.42*_n_s_18133));
double _n_path_18138=(_n_H_17878+(5.0*_n_s_18133));
double _n_life_18139=((_n_path_18138/_n_v_18137)*(1.08+(0.3*_n_hash_17897(_n_i_18136,41.0))));
return ([&](){auto _n_object_18472=std::make_shared<_n_Record_17945>();_n_object_18472->_p_i=_n_i_18136;_n_object_18472->_p_s=_n_s_18133;_n_object_18472->_p_v=_n_v_18137;_n_object_18472->_p_x=_n_x_18134;_n_object_18472->_p_path=_n_path_18138;_n_object_18472->_p_life=_n_life_18139;_n_object_18472->_p_off=((((_n_H_17878+(2.5*_n_s_18133))-_n_y_18135)/_n_v_18137)/_n_life_18139);_n_object_18472->_p_wd=(_n_s_18133*0.05);_n_object_18472->_p_sw=(0.35*_n_s_18133);_n_object_18472->_p_sf=(0.2+(0.2*_n_hash_17897(_n_i_18136,42.0)));_n_object_18472->_p_ph=(_n_hash_17897(_n_i_18136,43.0)*6.28);return _n_object_18472;})();

}
});
this->_n_ARMS_17946=([&](){auto _n_object_18474=std::make_shared<_n_Record_17947>();_n_object_18474->_p_up=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.3,9.4},d::Array<double,false>{3.0,11.5},d::Array<double,false>{2.0,14.1}};_n_object_18474->_p_down=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.3,9.4},d::Array<double,false>{2.0,6.6},d::Array<double,false>{1.9,4.4}};_n_object_18474->_p_chest=d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.3,9.4},d::Array<double,false>{2.4,7.2},d::Array<double,false>{1.2,6.0}};return _n_object_18474;})();
this->_n_BOX_17951=d::Array<double,false>{std::floor((_n_BX_17881-(13.0*_n_SC_17883))),(_n_BW_17882-std::ceil((16.0*_n_SC_17883))),std::ceil((27.0*_n_SC_17883)),(std::ceil((16.0*_n_SC_17883))+2.0)};
this->_n_hulls_17952=d::Array<uint8_t,true>(size_t((d::at(this->_n_BOX_17951,2.0)*d::at(this->_n_BOX_17951,3.0))));
this->_n_shape_17953=d::Array<uint8_t,true>(size_t((d::at(this->_n_BOX_17951,2.0)*d::at(this->_n_BOX_17951,3.0))));
{double _n_j_18147=0.0;
for(;d::truth((_n_j_18147<d::at(this->_n_BOX_17951,3.0)));(void)((_n_j_18147++))){d::check_cancel();{double _n_i_18148=0.0;
for(;d::truth((_n_i_18148<d::at(this->_n_BOX_17951,2.0)));(void)((_n_i_18148++))){d::check_cancel();if(d::truth(this->_n_hull_17949(((((d::at(this->_n_BOX_17951,0.0)+_n_i_18148)+0.5)-_n_BX_17881)/_n_SC_17883),((_n_BW_17882-((d::at(this->_n_BOX_17951,1.0)+_n_j_18147)+0.5))/_n_SC_17883)))){d::check_cancel();(void)(([&](){auto&& _n_array_18475=this->_n_hulls_17952;auto _n_index_18476=((_n_j_18147*d::at(this->_n_BOX_17951,2.0))+_n_i_18148);auto _n_value_18477=1.0;d::put(_n_array_18475,_n_index_18476,_n_value_18477);return _n_value_18477;})());
}
}}
}}
this->_n_arms_17954=d::map(this->_n_ARMS_17946->_p_up,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{d::Array<double,false> _n_p_18149=_a0;
return ([&](){d::Array<double,false> _n_array_18478;for(const auto &_v:_n_p_18149)_n_array_18478.push(_v);return _n_array_18478;})();});
this->_n_BOWX_17956=(_n_BX_17881+(11.2*_n_SC_17883));
this->_n_BOWY_17957=(_n_BW_17882-((this->_n_gunwale_17948(11.2)+1.2)*_n_SC_17883));
this->_n_R_17958=d::Array<float,true>(size_t(this->_n_N_17913));
this->_n_G_17959=d::Array<float,true>(size_t(this->_n_N_17913));
this->_n_B_17960=d::Array<float,true>(size_t(this->_n_N_17913));
this->_n_FL_17961=d::Array<float,true>(size_t(this->_n_N_17913));
this->_n_hide_17965=d::Array<uint8_t,true>(size_t(this->_n_S_17914));
{double _n_k_18215=0.0;
for(;d::truth((_n_k_18215<this->_n_S_17914));(void)((_n_k_18215++))){d::check_cancel();(void)(([&](){auto&& _n_array_18479=this->_n_hide_17965;auto _n_index_18480=_n_k_18215;auto _n_value_18481=(d::truth((d::at(this->_n_mat_17918,_n_k_18215)==_n_TREE_17896))?1.0:0.0);d::put(_n_array_18479,_n_index_18480,_n_value_18481);return _n_value_18481;})());
}}
this->_n_roadX_17966=d::Array<float,true>(size_t(_n_H_17878));
this->_n_roadW_17967=d::Array<float,true>(size_t(_n_H_17878));
this->_n_roadA_17968=d::Array<float,true>(size_t(_n_H_17878));
{double _n_r_18216=_n_WL_17879;
for(;d::truth((_n_r_18216<_n_H_17878));(void)((_n_r_18216++))){d::check_cancel();double _n_dw_18217=((_n_r_18216+0.5)-_n_WL_17879);
(void)(([&](){auto&& _n_array_18482=this->_n_roadX_17966;auto _n_index_18483=_n_r_18216;auto _n_value_18484=((_n_SRC_17880+4.0)+(_n_dw_18217*0.12));d::put(_n_array_18482,_n_index_18483,_n_value_18484);return _n_value_18484;})());
(void)(([&](){auto&& _n_array_18485=this->_n_roadW_17967;auto _n_index_18486=_n_r_18216;auto _n_value_18487=(7.0+(_n_dw_18217*0.9));d::put(_n_array_18485,_n_index_18486,_n_value_18487);return _n_value_18487;})());
(void)(([&](){auto&& _n_array_18488=this->_n_roadA_17968;auto _n_index_18489=_n_r_18216;auto _n_value_18490=([&](){auto _n_left_18491=(0.9*_n_smooth_17901(3.0,16.0,_n_dw_18217));auto _n_right_18492=std::exp(((-d::number(_n_dw_18217))/60.0));return (_n_left_18491*_n_right_18492);})();d::put(_n_array_18488,_n_index_18489,_n_value_18490);return _n_value_18490;})());
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_18353> _a1) mutable ->d::String{double _n_t_18218=_a0;
auto _n_binding_18495=(d::present(_a1)?_a1:([&](){auto _n_object_18494=std::make_shared<_n_Record_18353>();return _n_object_18494;})());
std::optional<d::Array<uint8_t,true>> _n_color_18219=_n_binding_18495->_p_color;
{
double _n_breathe_18220=([&](){auto _n_left_18496=(0.06*std::sin((_n_t_18218*0.5)));auto _n_right_18497=(0.04*std::sin(((_n_t_18218*1.7)+1.0)));return (_n_left_18496+_n_right_18497);})();
{double _n_k_18221=0.0;
for(;d::truth((_n_k_18221<this->_n_S_17914));(void)((_n_k_18221++))){d::check_cancel();double _n_g_18222=(1.0+(d::at(this->_n_take_17922,_n_k_18221)*_n_breathe_18220));
(void)(((([&](){auto&& _n_array_18498=this->_n_R_17958;auto _n_index_18499=_n_k_18221;auto _n_value_18500=(d::at(this->_n_sR_17919,_n_k_18221)*_n_g_18222);d::put(_n_array_18498,_n_index_18499,_n_value_18500);return _n_value_18500;})(),([&](){auto&& _n_array_18501=this->_n_G_17959;auto _n_index_18502=_n_k_18221;auto _n_value_18503=(d::at(this->_n_sG_17920,_n_k_18221)*_n_g_18222);d::put(_n_array_18501,_n_index_18502,_n_value_18503);return _n_value_18503;})()),([&](){auto&& _n_array_18504=this->_n_B_17960;auto _n_index_18505=_n_k_18221;auto _n_value_18506=(d::at(this->_n_sB_17921,_n_k_18221)*_n_g_18222);d::put(_n_array_18504,_n_index_18505,_n_value_18506);return _n_value_18506;})()));
(void)(([&](){auto&& _n_array_18507=this->_n_FL_17961;auto _n_index_18508=_n_k_18221;auto _n_value_18509=d::at(this->_n_floorS_17935,_n_k_18221);d::put(_n_array_18507,_n_index_18508,_n_value_18509);return _n_value_18509;})());
}}
for(auto &&_n_item_18510:this->_n_shore_17939){d::check_cancel();std::shared_ptr<_n_Record_17940> _n_f_18223=_n_item_18510;
{
double _n_u_18224=((_n_t_18218/_n_f_18223->_p_life)+_n_f_18223->_p_off);
double _n_lap_18225=std::floor(_n_u_18224);
double _n_a_18226=((_n_u_18224-_n_lap_18225)*_n_f_18223->_p_life);
double _n_cx_18227=([&](){auto _n_left_18511=([&](){auto _n_left_18513=this->_n_startX_17941(_n_f_18223,_n_lap_18225);auto _n_right_18514=this->_n_lean_17942(_n_f_18223,(_n_f_18223->_p_v*_n_a_18226));return (_n_left_18513+_n_right_18514);})();auto _n_right_18512=(_n_f_18223->_p_sw*([&](){auto _n_left_18515=std::sin(((_n_a_18226*_n_f_18223->_p_sf)+_n_f_18223->_p_ph));auto _n_right_18516=std::sin(_n_f_18223->_p_ph);return (_n_left_18515-_n_right_18516);})());return (_n_left_18511+_n_right_18512);})();
double _n_cy_18228=(((_n_WL_17879+(_n_f_18223->_p_s*0.5))+0.6)-(_n_f_18223->_p_v*_n_a_18226));
if(d::truth((_n_cy_18228<(((-d::number(2.0))*_n_f_18223->_p_s)-2.0)))){d::check_cancel();continue;
}
double _n_I_18229=([&](){auto _n_left_18517=(0.7+(0.45*d::minimum({1.0,_n_f_18223->_p_s})));auto _n_right_18518=([&](){auto _n_left_18519=(0.88+(0.08*std::sin(((_n_t_18218*_n_f_18223->_p_f1)+_n_f_18223->_p_ph))));auto _n_right_18520=(0.04*std::sin((_n_t_18218*_n_f_18223->_p_f2)));return (_n_left_18519+_n_right_18520);})();return (_n_left_18517*_n_right_18518);})();
double _n_alpha_18230=1.0;
if(d::truth((!d::truth(_n_f_18223->_p_out)))){d::check_cancel();double _n_end_18231=_n_smooth_17901((_n_f_18223->_p_life-4.0),_n_f_18223->_p_life,_n_a_18226);
(void)((_n_I_18229=(_n_I_18229*(1.0-((0.55*_n_end_18231)*(0.6+(0.4*std::sin(((_n_a_18226*11.0)+_n_f_18223->_p_ph)))))))));
(void)((_n_alpha_18230=(1.0-_n_end_18231)));
}
if(d::truth((_n_alpha_18230<=0.01))){d::check_cancel();continue;
}
if(d::truth((_n_f_18223->_p_s>=1.4))){d::check_cancel();(void)(([&](){auto _n_argument_18521=_n_cx_18227;auto _n_argument_18522=_n_cy_18228;auto _n_argument_18523=_n_f_18223->_p_s;auto _n_argument_18524=(((0.07*_n_I_18229)*_n_alpha_18230)*_n_smooth_17901(0.0,2.0,_n_a_18226));auto _n_argument_18525=_n_WL_17879;return this->_n_halo_17964(_n_argument_18521,_n_argument_18522,_n_argument_18523,_n_argument_18524,_n_argument_18525);})());
}
(void)(this->_n_lantern_17963(_n_cx_18227,_n_cy_18228,_n_f_18223->_p_s,_n_I_18229,_n_alpha_18230,_n_WL_17879,std::optional<d::Array<uint8_t,true>>(this->_n_hide_17965)));

}
}
for(auto &&_n_item_18526:this->_n_shoreLights_17936){d::check_cancel();auto _n_binding_18527=_n_item_18526;
double _n_x_18232=d::at(_n_binding_18527,0.0);
double _n_r_18233=d::at(_n_binding_18527,1.0);
double _n_ph_18234=d::at(_n_binding_18527,2.0);
{
double _n_k_18235=((_n_r_18233*_n_W_17877)+_n_x_18232);
double _n_q_18236=([&](){auto _n_left_18528=(0.9+(0.15*std::sin(((_n_t_18218*3.1)+_n_ph_18234))));auto _n_right_18529=(0.1*std::sin(((_n_t_18218*7.3)+(_n_ph_18234*2.0))));return (_n_left_18528+_n_right_18529);})();
(void)((((([&](){auto&& _n_array_18530=this->_n_R_17958;auto _n_index_18531=_n_k_18235;auto _n_value_18532=_n_q_18236;d::put(_n_array_18530,_n_index_18531,_n_value_18532);return _n_value_18532;})(),([&](){auto&& _n_array_18533=this->_n_G_17959;auto _n_index_18534=_n_k_18235;auto _n_value_18535=(_n_q_18236*0.62);d::put(_n_array_18533,_n_index_18534,_n_value_18535);return _n_value_18535;})()),([&](){auto&& _n_array_18536=this->_n_B_17960;auto _n_index_18537=_n_k_18235;auto _n_value_18538=(_n_q_18236*0.24);d::put(_n_array_18536,_n_index_18537,_n_value_18538);return _n_value_18538;})()),([&](){auto&& _n_array_18539=this->_n_FL_17961;auto _n_index_18540=_n_k_18235;auto _n_value_18541=0.2;d::put(_n_array_18539,_n_index_18540,_n_value_18541);return _n_value_18541;})()));

}
}
{double _n_r_18237=_n_WL_17879;
for(;d::truth((_n_r_18237<_n_H_17878));(void)((_n_r_18237++))){d::check_cancel();double _n_y_18238=(_n_r_18237+0.5);
double _n_dw_18239=(_n_y_18238-_n_WL_17879);
double _n_deep_18240=_n_mix_17902(1.0,0.65,(_n_dw_18239/(_n_H_17878-_n_WL_17879)));
double _n_ry_18241=((_n_WL_17879-1.0)-(_n_r_18237-_n_WL_17879));
double _n_r0_18242=(d::maximum({0.0,_n_ry_18241})*_n_W_17877);
double _n_r1_18243=(d::maximum({0.0,(_n_ry_18241-1.0)})*_n_W_17877);
double _n_r2_18244=(d::maximum({0.0,(_n_ry_18241-2.0)})*_n_W_17877);
double _n_fade_18245=_n_smooth_17901((_n_H_17878+4.0),(_n_H_17878-7.0),_n_y_18238);
double _n_rx_18246=d::at(this->_n_roadX_17966,_n_r_18237);
double _n_rw_18247=d::at(this->_n_roadW_17967,_n_r_18237);
double _n_ra_18248=d::at(this->_n_roadA_17968,_n_r_18237);
{double _n_x_18249=0.0;
for(;d::truth((_n_x_18249<_n_W_17877));(void)((_n_x_18249++))){d::check_cancel();double _n_k_18250=((_n_r_18237*_n_W_17877)+_n_x_18249);
double _n_wave_18251=_n_noise_17898(((_n_x_18249*0.04)+(_n_t_18218*0.05)),((_n_r_18237*0.55)-(_n_t_18218*0.35)));
double _n_sx_18252=(_n_x_18249+((0.45+(_n_dw_18239*0.075))*std::sin((((_n_r_18237*1.3)+(_n_t_18218*1.6))+(_n_wave_18251*4.0)))));
double _n_ix_18253=std::floor(_n_sx_18252);
double _n_fx_18254=(_n_sx_18252-_n_ix_18253);
(void)((_n_ix_18253=([&](){auto _n_argument_18542=0.0;auto _n_argument_18543=d::minimum({(_n_W_17877-2.0),_n_ix_18253});return d::maximum({_n_argument_18542,_n_argument_18543});})()));
double _n_a0_18255=(_n_r0_18242+_n_ix_18253);
double _n_a1_18256=(_n_r1_18243+_n_ix_18253);
double _n_a2_18257=(_n_r2_18244+_n_ix_18253);
bool _n_sky_18258=(d::at(this->_n_mat_17918,_n_a0_18255)!=_n_TREE_17896);
double _n_streak_18259=([&](){auto _n_argument_18544=0.25;auto _n_argument_18545=0.75;auto _n_argument_18546=_n_noise_17898(((_n_x_18249*0.035)+(_n_t_18218*0.04)),((_n_r_18237*0.75)-(_n_t_18218*0.3)));return _n_smooth_17901(_n_argument_18544,_n_argument_18545,_n_argument_18546);})();
double _n_kr_18260=(((0.9*(0.5+(0.5*_n_streak_18259)))*(0.85+(0.25*_n_wave_18251)))*_n_deep_18240);
if((d::truth(d::at(this->_n_gap_17938,_n_r_18237))&&d::truth((_n_wave_18251<0.45)))){d::check_cancel();(void)((_n_kr_18260=(_n_kr_18260*0.2)));
}
double _n_gx_18261=(1.0-_n_fx_18254);
double _n_cr_18262=(((((((d::at(this->_n_R_17958,_n_a0_18255)*_n_gx_18261)+(d::at(this->_n_R_17958,(_n_a0_18255+1.0))*_n_fx_18254))*0.5)+(((d::at(this->_n_R_17958,_n_a1_18256)*_n_gx_18261)+(d::at(this->_n_R_17958,(_n_a1_18256+1.0))*_n_fx_18254))*0.3))+(((d::at(this->_n_R_17958,_n_a2_18257)*_n_gx_18261)+(d::at(this->_n_R_17958,(_n_a2_18257+1.0))*_n_fx_18254))*0.2))*_n_kr_18260)+0.006);
double _n_cg_18263=(((((((d::at(this->_n_G_17959,_n_a0_18255)*_n_gx_18261)+(d::at(this->_n_G_17959,(_n_a0_18255+1.0))*_n_fx_18254))*0.5)+(((d::at(this->_n_G_17959,_n_a1_18256)*_n_gx_18261)+(d::at(this->_n_G_17959,(_n_a1_18256+1.0))*_n_fx_18254))*0.3))+(((d::at(this->_n_G_17959,_n_a2_18257)*_n_gx_18261)+(d::at(this->_n_G_17959,(_n_a2_18257+1.0))*_n_fx_18254))*0.2))*_n_kr_18260)+0.012);
double _n_cb_18264=(((((((d::at(this->_n_B_17960,_n_a0_18255)*_n_gx_18261)+(d::at(this->_n_B_17960,(_n_a0_18255+1.0))*_n_fx_18254))*0.5)+(((d::at(this->_n_B_17960,_n_a1_18256)*_n_gx_18261)+(d::at(this->_n_B_17960,(_n_a1_18256+1.0))*_n_fx_18254))*0.3))+(((d::at(this->_n_B_17960,_n_a2_18257)*_n_gx_18261)+(d::at(this->_n_B_17960,(_n_a2_18257+1.0))*_n_fx_18254))*0.2))*_n_kr_18260)+0.028);
double _n_g_18265=0.0;
double _n_qx_18266=(((_n_x_18249+0.5)-_n_rx_18246)/_n_rw_18247);
if((d::truth((_n_qx_18266>(-d::number(2.2))))&&d::truth((_n_qx_18266<2.2)))){d::check_cancel();double _n_dash_18267=([&](){auto _n_argument_18547=0.42;auto _n_argument_18548=0.72;auto _n_argument_18549=_n_noise_17898(((_n_x_18249*0.11)+(_n_t_18218*0.1)),((_n_r_18237*0.9)-(_n_t_18218*0.55)));return _n_smooth_17901(_n_argument_18547,_n_argument_18548,_n_argument_18549);})();
(void)((_n_g_18265=(((_n_ra_18248*std::exp(((-d::number(_n_qx_18266))*_n_qx_18266)))*(0.3+(0.7*_n_dash_18267)))*(d::truth(d::at(this->_n_gap_17938,_n_r_18237))?0.55:1.0))));
}
if(d::truth((_n_dw_18239<10.0))){d::check_cancel();for(auto &&_n_item_18550:this->_n_shoreLights_17936){d::check_cancel();auto _n_binding_18551=_n_item_18550;
double _n_lx_18268=d::at(_n_binding_18551,0.0);
double _n_ph_18269=d::at(_n_binding_18551,2.0);
{
double _n_d_18270=(_n_x_18249-_n_lx_18268);
if((d::truth((_n_d_18270>3.0))||d::truth((_n_d_18270<(-d::number(3.0)))))){d::check_cancel();continue;
}
(void)((_n_g_18265=(_n_g_18265+(([&](){auto _n_left_18552=([&](){auto _n_left_18554=std::exp((((-d::number(_n_d_18270))*_n_d_18270)*1.5));auto _n_right_18555=std::exp(((-d::number(_n_dw_18239))/4.0));return (_n_left_18554*_n_right_18555);})();auto _n_right_18553=([&](){auto _n_argument_18556=0.35;auto _n_argument_18557=0.7;auto _n_argument_18558=_n_noise_17898(((_n_x_18249*0.6)+_n_ph_18269),((_n_y_18238*1.3)-(_n_t_18218*1.4)));return _n_smooth_17901(_n_argument_18556,_n_argument_18557,_n_argument_18558);})();return (_n_left_18552*_n_right_18553);})()*0.8))));

}
}
}
if(d::truth((_n_g_18265>0.0))){d::check_cancel();double _n_keep_18271=(1.0-d::minimum({0.9,(_n_g_18265*4.0)}));
(void)((((_n_cr_18262=((_n_cr_18262*_n_keep_18271)+_n_g_18265)),(_n_cg_18263=((_n_cg_18263*_n_keep_18271)+(_n_g_18265*0.56)))),(_n_cb_18264=((_n_cb_18264*_n_keep_18271)+(_n_g_18265*0.2)))));
}
if(d::truth((_n_g_18265<0.2))){d::check_cancel();double _n_sheen_18272=(((([&](){auto _n_argument_18559=0.6;auto _n_argument_18560=0.85;auto _n_argument_18561=_n_noise_17898(((_n_x_18249*0.07)+(_n_t_18218*0.03)),((_n_r_18237*1.1)-(_n_t_18218*0.25)));return _n_smooth_17901(_n_argument_18559,_n_argument_18560,_n_argument_18561);})()*0.12)*(1.0-(_n_g_18265*5.0)))*_n_deep_18240);
(void)((((_n_cr_18262=(_n_cr_18262+(_n_sheen_18272*0.3))),(_n_cg_18263=(_n_cg_18263+(_n_sheen_18272*0.48)))),(_n_cb_18264=(_n_cb_18264+_n_sheen_18272))));
}
(void)(((([&](){auto&& _n_array_18562=this->_n_R_17958;auto _n_index_18563=_n_k_18250;auto _n_value_18564=(_n_cr_18262*_n_fade_18245);d::put(_n_array_18562,_n_index_18563,_n_value_18564);return _n_value_18564;})(),([&](){auto&& _n_array_18565=this->_n_G_17959;auto _n_index_18566=_n_k_18250;auto _n_value_18567=(_n_cg_18263*_n_fade_18245);d::put(_n_array_18565,_n_index_18566,_n_value_18567);return _n_value_18567;})()),([&](){auto&& _n_array_18568=this->_n_B_17960;auto _n_index_18569=_n_k_18250;auto _n_value_18570=(_n_cb_18264*_n_fade_18245);d::put(_n_array_18568,_n_index_18569,_n_value_18570);return _n_value_18570;})()));
(void)(([&](){auto&& _n_array_18571=this->_n_FL_17961;auto _n_index_18572=_n_k_18250;auto _n_value_18573=((d::truth(_n_sky_18258)?(0.07*_n_deep_18240):0.03)*_n_fade_18245);d::put(_n_array_18571,_n_index_18572,_n_value_18573);return _n_value_18573;})());
}}
}}
double _n_tc_18273=d::mod((d::mod(_n_t_18218,_n_CYCLE_17885)+_n_CYCLE_17885),_n_CYCLE_17885);
auto _n_bob_18274=[&]( double _a0) mutable ->double{double _n_at_18275=_a0;
return (0.3*std::sin((_n_at_18275*1.3)));};
double _n_holdY_18276=((_n_BW_17882-(14.1*_n_SC_17883))-(_n_HELD_17888/2.0));
auto _n_flick_18277=[&]( double _a0) mutable ->double{double _n_m_18278=_a0;
return ([&](){auto _n_left_18574=(1.1+(0.05*std::sin(((_n_t_18218*4.7)+(_n_m_18278*2.1)))));auto _n_right_18575=(0.03*std::sin(((_n_t_18218*11.3)+(_n_m_18278*5.3))));return (_n_left_18574+_n_right_18575);})();};
double _n_n_18279=std::floor((_n_t_18218/_n_CYCLE_17885));
double _n_mine_18280=_n_flick_18277((d::truth((_n_tc_18273<_n_LET_GO_17886))?_n_n_18279:(_n_n_18279+1.0)));
double _n_hy_18281=0.0;
double _n_hs_18282=_n_HELD_17888;
double _n_ha_18283=0.0;
if((d::truth((_n_tc_18273<_n_LET_GO_17886))||d::truth((_n_tc_18273>=(_n_LIT_17887+5.0))))){d::check_cancel();(void)(((_n_hy_18281=(_n_holdY_18276+_n_bob_18274(_n_t_18218))),(_n_ha_18283=1.0)));
}else {d::check_cancel();if(d::truth((_n_tc_18273>=_n_LIT_17887))){d::check_cancel();(void)((_n_ha_18283=_n_smooth_17901(_n_LIT_17887,(_n_LIT_17887+2.5),_n_tc_18273)));
(void)((_n_hs_18282=(_n_HELD_17888*(0.75+(0.25*_n_smooth_17901(_n_LIT_17887,(_n_LIT_17887+3.0),_n_tc_18273))))));
(void)((_n_hy_18281=([&](){auto _n_argument_18576=(_n_BW_17882-(8.6*_n_SC_17883));auto _n_argument_18577=(_n_holdY_18276+_n_bob_18274(_n_t_18218));auto _n_argument_18578=_n_smooth_17901((_n_LIT_17887+3.5),(_n_LIT_17887+5.0),_n_tc_18273);return _n_mix_17902(_n_argument_18576,_n_argument_18577,_n_argument_18578);})()));
}
}
if(d::truth((_n_tc_18273<(_n_LET_GO_17886+2.0)))){d::check_cancel();(void)(([&](){auto _n_argument_18579=this->_n_ARMS_17946->_p_up;auto _n_argument_18580=this->_n_ARMS_17946->_p_down;auto _n_argument_18581=_n_smooth_17901((_n_LET_GO_17886+1.0),(_n_LET_GO_17886+2.0),_n_tc_18273);return this->_n_pose_17955(_n_argument_18579,_n_argument_18580,_n_argument_18581);})());
}else {d::check_cancel();if(d::truth((_n_tc_18273<(_n_LIT_17887+1.0)))){d::check_cancel();(void)(([&](){auto _n_argument_18582=this->_n_ARMS_17946->_p_down;auto _n_argument_18583=this->_n_ARMS_17946->_p_chest;auto _n_argument_18584=_n_smooth_17901((_n_LIT_17887-0.6),_n_LIT_17887,_n_tc_18273);return this->_n_pose_17955(_n_argument_18582,_n_argument_18583,_n_argument_18584);})());
}else {d::check_cancel();(void)(([&](){auto _n_argument_18585=this->_n_ARMS_17946->_p_chest;auto _n_argument_18586=this->_n_ARMS_17946->_p_up;auto _n_argument_18587=_n_smooth_17901((_n_LIT_17887+3.5),(_n_LIT_17887+5.0),_n_tc_18273);return this->_n_pose_17955(_n_argument_18585,_n_argument_18586,_n_argument_18587);})());
}
}
d::Array<std::array<double,3>,false> _n_flights_18284=d::Array<std::array<double,3>,false>{};
{double _n_m_18285=_n_n_18279;
for(;d::truth((_n_m_18285>=(_n_n_18279-2.0)));(void)((_n_m_18285--))){d::check_cancel();double _n_tr_18286=((_n_m_18285*_n_CYCLE_17885)+_n_LET_GO_17886);
double _n_age_18287=(_n_t_18218-_n_tr_18286);
if(d::truth((_n_age_18287<0.0))){d::check_cancel();continue;
}
double _n_y_18288=([&](){auto _n_left_18588=(_n_holdY_18276+_n_bob_18274(_n_tr_18286));auto _n_right_18589=(2.8*(_n_age_18287-(1.5*(1.0-std::exp(((-d::number(_n_age_18287))/1.5))))));return (_n_left_18588-_n_right_18589);})();
if(d::truth((_n_y_18288<((-d::number(3.0))*_n_HELD_17888)))){d::check_cancel();continue;
}
(void)(_n_flights_18284.push(std::array<double,3>{((_n_FX_17884+(0.3*_n_age_18287))+(1.2*std::sin((_n_age_18287*0.35)))),_n_y_18288,_n_flick_18277(_n_m_18285)}));
}}
d::Array<std::array<double,4>,false> _n_lights_18289=d::Array<std::array<double,4>,false>{};
double _n_lamp_18290=([&](){auto _n_left_18590=(1.2+(0.04*std::sin((_n_t_18218*5.3))));auto _n_right_18591=(0.03*std::sin((_n_t_18218*12.7)));return (_n_left_18590+_n_right_18591);})();
(void)(_n_lights_18289.push(std::array<double,4>{this->_n_BOWX_17956,(this->_n_BOWY_17957+1.0),(0.4*_n_lamp_18290),0.4}));
(void)(this->_n_halo_17964(this->_n_BOWX_17956,this->_n_BOWY_17957,2.0,(0.07*_n_lamp_18290),_n_H_17878));
if(d::truth((_n_ha_18283>0.0))){d::check_cancel();(void)(_n_lights_18289.push(std::array<double,4>{_n_FX_17884,(_n_hy_18281+(_n_hs_18282/2.0)),(_n_ha_18283*_n_mine_18280),1.0}));
}
for(auto &&_n_item_18592:_n_flights_18284){d::check_cancel();auto _n_binding_18593=_n_item_18592;
double _n_x_18291=d::at(_n_binding_18593,0.0);
double _n_y_18292=d::at(_n_binding_18593,1.0);
double _n_l_18293=d::at(_n_binding_18593,2.0);
{
(void)(this->_n_halo_17964(_n_x_18291,_n_y_18292,_n_HELD_17888,(0.2*_n_l_18293),_n_H_17878));
(void)(_n_lights_18289.push(std::array<double,4>{_n_x_18291,(_n_y_18292+(_n_HELD_17888/2.0)),(_n_l_18293*std::exp(((-d::number(d::maximum({0.0,(_n_holdY_18276-_n_y_18292)})))/8.0))),1.0}));

}
}
if(d::truth((_n_ha_18283>0.0))){d::check_cancel();(void)(this->_n_halo_17964(_n_FX_17884,_n_hy_18281,_n_HELD_17888,((0.2*_n_ha_18283)*_n_mine_18280),_n_H_17878));
}
for(auto &&_n_item_18594:_n_lights_18289){d::check_cancel();auto _n_binding_18595=_n_item_18594;
double _n_lx_18294=d::at(_n_binding_18595,0.0);
double _n_q_18295=d::at(_n_binding_18595,2.0);
double _n_sz_18296=d::at(_n_binding_18595,3.0);
{
if(d::truth((_n_q_18295<0.003))){d::check_cancel();continue;
}
{double _n_r_18297=std::floor((_n_BW_17882-(9.0*_n_SC_17883)));
for(;d::truth((_n_r_18297<_n_H_17878));(void)((_n_r_18297++))){d::check_cancel();double _n_y_18298=(_n_r_18297+0.5);
double _n_dw_18299=(_n_y_18298-_n_BW_17882);
{double _n_x_18300=([&](){auto _n_argument_18596=0.0;auto _n_argument_18597=std::floor((_n_lx_18294-(34.0*_n_sz_18296)));return d::maximum({_n_argument_18596,_n_argument_18597});})();
for(;d::truth((_n_x_18300<d::minimum({_n_W_17877,(_n_lx_18294+(34.0*_n_sz_18296))})));(void)((_n_x_18300++))){d::check_cancel();double _n_k_18301=((_n_r_18297*_n_W_17877)+_n_x_18300);
double _n_dx_18302=((_n_x_18300+0.5)-_n_lx_18294);
double _n_g_18303=(std::exp((-d::number(std::sqrt((std::pow((_n_dx_18302/(((16.0*_n_SC_17883)*0.8)*_n_sz_18296)),2.0)+std::pow((_n_dw_18299/(((d::truth((_n_dw_18299<0.0))?2.6:3.6)*_n_SC_17883)*_n_sz_18296)),2.0))))))*0.5);
if(d::truth((_n_dw_18299>(-d::number(1.0))))){d::check_cancel();double _n_w_18304=((1.4+(0.2*d::maximum({0.0,_n_dw_18299})))*(0.5+(0.5*_n_sz_18296)));
(void)((_n_g_18303=(_n_g_18303+(([&](){auto _n_left_18598=([&](){auto _n_left_18600=std::exp((-d::number(std::pow((_n_dx_18302/_n_w_18304),2.0))));auto _n_right_18601=std::exp(((-d::number(d::maximum({0.0,_n_dw_18299})))/(16.0*_n_sz_18296)));return (_n_left_18600*_n_right_18601);})();auto _n_right_18599=([&](){auto _n_argument_18602=0.4;auto _n_argument_18603=0.72;auto _n_argument_18604=_n_noise_17898(((_n_x_18300*0.45)+3.0),((_n_y_18298*1.2)-(_n_t_18218*1.3)));return _n_smooth_17901(_n_argument_18602,_n_argument_18603,_n_argument_18604);})();return (_n_left_18598*_n_right_18599);})()*1.1))));
}
(void)((_n_g_18303=(_n_g_18303*_n_q_18295)));
double _n_keep_18305=(1.0-d::minimum({0.9,(_n_g_18303*4.0)}));
(void)(((([&](){auto&& _n_array_18605=this->_n_R_17958;auto _n_index_18606=_n_k_18301;auto _n_value_18607=((d::at(this->_n_R_17958,_n_k_18301)*_n_keep_18305)+_n_g_18303);d::put(_n_array_18605,_n_index_18606,_n_value_18607);return _n_value_18607;})(),([&](){auto&& _n_array_18608=this->_n_G_17959;auto _n_index_18609=_n_k_18301;auto _n_value_18610=((d::at(this->_n_G_17959,_n_k_18301)*_n_keep_18305)+(_n_g_18303*0.62));d::put(_n_array_18608,_n_index_18609,_n_value_18610);return _n_value_18610;})()),([&](){auto&& _n_array_18611=this->_n_B_17960;auto _n_index_18612=_n_k_18301;auto _n_value_18613=((d::at(this->_n_B_17960,_n_k_18301)*_n_keep_18305)+(_n_g_18303*0.26));d::put(_n_array_18611,_n_index_18612,_n_value_18613);return _n_value_18613;})()));
}}
}}

}
}
{double _n_j_18306=0.0;
for(;d::truth((_n_j_18306<d::at(this->_n_BOX_17951,3.0)));(void)((_n_j_18306++))){d::check_cancel();{double _n_i_18307=0.0;
for(;d::truth((_n_i_18307<d::at(this->_n_BOX_17951,2.0)));(void)((_n_i_18307++))){d::check_cancel();double _n_m_18308=d::at(this->_n_shape_17953,((_n_j_18306*d::at(this->_n_BOX_17951,2.0))+_n_i_18307));
if(d::truth((!d::truth(_n_m_18308)))){d::check_cancel();continue;
}
double _n_x_18309=(d::at(this->_n_BOX_17951,0.0)+_n_i_18307);
double _n_r_18310=(d::at(this->_n_BOX_17951,1.0)+_n_j_18306);
if(((d::truth((_n_x_18309<0.0))||d::truth((_n_x_18309>=_n_W_17877)))||d::truth((_n_r_18310>=_n_H_17878)))){d::check_cancel();continue;
}
double _n_k_18311=((_n_r_18310*_n_W_17877)+_n_x_18309);
double _n_g_18312=((d::truth((_n_m_18308==2.0))&&d::truth(([&]()->bool{auto _n_logical_18614=([&]()->bool{auto _n_logical_18615=([&]()->bool{auto _n_logical_18616=(_n_i_18307==0.0);return d::truth(_n_logical_18616)?_n_logical_18616:(_n_i_18307==(d::at(this->_n_BOX_17951,2.0)-1.0));})();return d::truth(_n_logical_18615)?_n_logical_18615:(!d::truth(d::at(this->_n_shape_17953,(((_n_j_18306*d::at(this->_n_BOX_17951,2.0))+_n_i_18307)-1.0))));})();return d::truth(_n_logical_18614)?_n_logical_18614:(!d::truth(d::at(this->_n_shape_17953,(((_n_j_18306*d::at(this->_n_BOX_17951,2.0))+_n_i_18307)+1.0))));})()))?0.16:0.0);
bool _n_top_18313=([&]()->bool{auto _n_logical_18617=(_n_j_18306==0.0);return d::truth(_n_logical_18617)?_n_logical_18617:(!d::truth(d::at(this->_n_shape_17953,(((_n_j_18306-1.0)*d::at(this->_n_BOX_17951,2.0))+_n_i_18307))));})();
for(auto &&_n_item_18618:_n_lights_18289){d::check_cancel();auto _n_binding_18619=_n_item_18618;
double _n_lx_18314=d::at(_n_binding_18619,0.0);
double _n_ly_18315=d::at(_n_binding_18619,1.0);
double _n_lq_18316=d::at(_n_binding_18619,2.0);
{
if(d::truth((_n_lq_18316<0.003))){d::check_cancel();continue;
}
double _n_dx_18317=(_n_lx_18314-(_n_x_18309+0.5));
double _n_dy_18318=(_n_ly_18315-(_n_r_18310+0.5));
double _n_d_18319=([&]()->double{auto _n_logical_18620=std::sqrt(((_n_dx_18317*_n_dx_18317)+(_n_dy_18318*_n_dy_18318)));return d::truth(_n_logical_18620)?_n_logical_18620:1.0;})();
if(d::truth((_n_m_18308==2.0))){d::check_cancel();double _n_ni_18320=(_n_i_18307+d::round((_n_dx_18317/_n_d_18319)));
double _n_nj_18321=(_n_j_18306+d::round((_n_dy_18318/_n_d_18319)));
bool _n_open_18322=([&]()->bool{auto _n_logical_18621=([&]()->bool{auto _n_logical_18622=([&]()->bool{auto _n_logical_18623=([&]()->bool{auto _n_logical_18624=(_n_ni_18320<0.0);return d::truth(_n_logical_18624)?_n_logical_18624:(_n_nj_18321<0.0);})();return d::truth(_n_logical_18623)?_n_logical_18623:(_n_ni_18320>=d::at(this->_n_BOX_17951,2.0));})();return d::truth(_n_logical_18622)?_n_logical_18622:(_n_nj_18321>=d::at(this->_n_BOX_17951,3.0));})();return d::truth(_n_logical_18621)?_n_logical_18621:(!d::truth(d::at(this->_n_shape_17953,((_n_nj_18321*d::at(this->_n_BOX_17951,2.0))+_n_ni_18320))));})();
(void)((_n_g_18312=(_n_g_18312+((_n_lq_18316*(d::truth(_n_open_18322)?0.95:0.05))*std::exp(((-d::number(_n_d_18319))/(6.0*_n_SC_17883)))))));
}else {d::check_cancel();(void)((_n_g_18312=(_n_g_18312+(_n_lq_18316*(d::truth(_n_top_18313)?(0.6*std::exp(((-d::number(std::fabs(_n_dx_18317)))/(11.0*_n_SC_17883)))):0.02)))));
}

}
}
(void)(((([&](){auto&& _n_array_18625=this->_n_R_17958;auto _n_index_18626=_n_k_18311;auto _n_value_18627=(0.01+_n_g_18312);d::put(_n_array_18625,_n_index_18626,_n_value_18627);return _n_value_18627;})(),([&](){auto&& _n_array_18628=this->_n_G_17959;auto _n_index_18629=_n_k_18311;auto _n_value_18630=(0.008+(_n_g_18312*0.55));d::put(_n_array_18628,_n_index_18629,_n_value_18630);return _n_value_18630;})()),([&](){auto&& _n_array_18631=this->_n_B_17960;auto _n_index_18632=_n_k_18311;auto _n_value_18633=(0.014+(_n_g_18312*0.22));d::put(_n_array_18631,_n_index_18632,_n_value_18633);return _n_value_18633;})()));
(void)(([&](){auto&& _n_array_18634=this->_n_FL_17961;auto _n_index_18635=_n_k_18311;auto _n_value_18636=0.0;d::put(_n_array_18634,_n_index_18635,_n_value_18636);return _n_value_18636;})());
}}
}}
(void)(this->_n_lantern_17963(this->_n_BOWX_17956,this->_n_BOWY_17957,2.0,_n_lamp_18290,1.0,_n_H_17878,std::optional<d::Array<uint8_t,true>>{}));
for(auto &&_n_item_18637:_n_flights_18284){d::check_cancel();auto _n_binding_18638=_n_item_18637;
double _n_x_18323=d::at(_n_binding_18638,0.0);
double _n_y_18324=d::at(_n_binding_18638,1.0);
double _n_q_18325=d::at(_n_binding_18638,2.0);
(void)(this->_n_lantern_17963(_n_x_18323,_n_y_18324,_n_HELD_17888,_n_q_18325,1.0,_n_H_17878,std::optional<d::Array<uint8_t,true>>{}));
}
if(d::truth((_n_ha_18283>0.0))){d::check_cancel();(void)(([&](){auto _n_argument_18639=_n_FX_17884;auto _n_argument_18640=_n_hy_18281;auto _n_argument_18641=_n_hs_18282;auto _n_argument_18642=(_n_ha_18283*_n_mine_18280);auto _n_argument_18643=d::minimum({1.0,(_n_ha_18283*1.4)});auto _n_argument_18644=_n_H_17878;auto _n_argument_18645=d::Nil{};return this->_n_lantern_17963(_n_argument_18639,_n_argument_18640,_n_argument_18641,_n_argument_18642,_n_argument_18643,_n_argument_18644,std::optional<d::Array<uint8_t,true>>{});})());
}
for(auto &&_n_item_18646:this->_n_close_17944){d::check_cancel();std::shared_ptr<_n_Record_17945> _n_c_18326=_n_item_18646;
{
double _n_u_18327=((_n_t_18218/_n_c_18326->_p_life)+_n_c_18326->_p_off);
double _n_lap_18328=std::floor(_n_u_18327);
double _n_a_18329=((_n_u_18327-_n_lap_18328)*_n_c_18326->_p_life);
if((d::truth((_n_lap_18328<0.0))||d::truth(((_n_a_18329*_n_c_18326->_p_v)>_n_c_18326->_p_path)))){d::check_cancel();continue;
}
double _n_x0_18330=_n_c_18326->_p_x;
if(d::truth(_n_lap_18328)){d::check_cancel();(void)((_n_x0_18330=(6.0+(188.0*_n_hash_17897(((_n_c_18326->_p_i*17.0)+_n_lap_18328),44.0)))));
if((d::truth((_n_x0_18330>84.0))&&d::truth((_n_x0_18330<132.0)))){d::check_cancel();(void)((_n_x0_18330=(d::truth((_n_x0_18330<108.0))?(_n_x0_18330-32.0):(_n_x0_18330+32.0))));
}
}
double _n_cx_18331=((_n_x0_18330+(_n_c_18326->_p_wd*_n_a_18329))+(_n_c_18326->_p_sw*([&](){auto _n_left_18647=std::sin(((_n_a_18329*_n_c_18326->_p_sf)+_n_c_18326->_p_ph));auto _n_right_18648=std::sin(_n_c_18326->_p_ph);return (_n_left_18647-_n_right_18648);})()));
double _n_cy_18332=((_n_H_17878+(2.5*_n_c_18326->_p_s))-(_n_c_18326->_p_v*_n_a_18329));
double _n_I_18333=([&](){auto _n_left_18649=(1.15+(0.05*std::sin(((_n_t_18218*3.3)+_n_c_18326->_p_ph))));auto _n_right_18650=(0.03*std::sin(((_n_t_18218*8.1)+_n_c_18326->_p_i)));return (_n_left_18649+_n_right_18650);})();
(void)(this->_n_halo_17964(_n_cx_18331,_n_cy_18332,_n_c_18326->_p_s,(0.1*_n_I_18333),_n_H_17878));
(void)(this->_n_lantern_17963(_n_cx_18331,_n_cy_18332,_n_c_18326->_p_s,_n_I_18333,1.0,_n_H_17878,std::optional<d::Array<uint8_t,true>>{}));

}
}
{double _n_r_18334=0.0;
for(;d::truth((_n_r_18334<_n_H_17878));(void)((_n_r_18334++))){d::check_cancel();{double _n_x_18335=0.0;
for(;d::truth((_n_x_18335<_n_W_17877));(void)((_n_x_18335++))){d::check_cancel();double _n_k_18336=((_n_r_18334*_n_W_17877)+_n_x_18335);
double _n_cr_18337=d::at(this->_n_R_17958,_n_k_18336);
double _n_cg_18338=d::at(this->_n_G_17959,_n_k_18336);
double _n_cb_18339=d::at(this->_n_B_17960,_n_k_18336);
double _n_floor_18340=d::at(this->_n_FL_17961,_n_k_18336);
double _n_peak_18341=d::maximum({_n_cr_18337,_n_cg_18338,_n_cb_18339,0.0001});
double _n_level_18342=_n_clamp_17900((_n_floor_18340+(((1.0-_n_floor_18340)*std::pow(_n_peak_18341,0.85))*0.95)));
double _n_step_18343=([&](){auto _n_argument_18651=0.0;auto _n_argument_18652=([&](){auto _n_argument_18653=3.0;auto _n_argument_18654=d::round(((_n_level_18342*3.0)+d::at(_n_BAYER_17891,((double(d::i32(_n_r_18334)&d::i32(3.0))*4.0)+double(d::i32(_n_x_18335)&d::i32(3.0))))));return d::minimum({_n_argument_18653,_n_argument_18654});})();return d::maximum({_n_argument_18651,_n_argument_18652});})();
(void)(([&](){auto&& _n_array_18655=this->_n_out_17915;auto _n_index_18656=_n_k_18336;auto _n_value_18657=d::at(_n_DOTS_17889,_n_step_18343);d::put(_n_array_18655,_n_index_18656,_n_value_18657);return _n_value_18657;})());
if(d::truth(_n_color_18219)){d::check_cancel();if((((d::truth((_n_k_18336<this->_n_S_17914))&&d::truth(d::at(this->_n_far_17932,_n_k_18336)))&&d::truth((d::at(this->_n_FL_17961,_n_k_18336)<0.05)))&&d::truth((_n_cb_18339>=_n_cr_18337)))){d::check_cancel();(void)(([&](){auto&& _n_array_18658=d::read(_n_color_18219);auto _n_index_18659=_n_k_18336;auto _n_value_18660=(this->_n_SL_17912+(d::truth((_n_level_18342>0.42))?2.0:(d::truth((_n_level_18342>0.3))?1.0:0.0)));d::put(_n_array_18658,_n_index_18659,_n_value_18660);return _n_value_18660;})());
continue;
}
double _n_want_18344=(d::truth(_n_step_18343)?d::minimum({1.0,((_n_level_18342+0.06)/d::at(_n_COVER_17890,_n_step_18343))}):0.0);
double _n_s_18345=((0.3+(0.7*_n_want_18344))/_n_peak_18341);
(void)(([&](){auto&& _n_array_18661=d::read(_n_color_18219);auto _n_index_18662=_n_k_18336;auto _n_value_18663=([&](){auto _n_argument_18664=_n_clamp_17900((_n_cr_18337*_n_s_18345));auto _n_argument_18665=_n_clamp_17900((_n_cg_18338*_n_s_18345));auto _n_argument_18666=_n_clamp_17900((_n_cb_18339*_n_s_18345));return this->_n_nearest_17917(_n_argument_18664,_n_argument_18665,_n_argument_18666);})();d::put(_n_array_18661,_n_index_18662,_n_value_18663);return _n_value_18663;})());
}
}}
}}
for(auto &&_n_item_18667:this->_n_stars_17937){d::check_cancel();auto _n_binding_18668=_n_item_18667;
double _n_k_18346=d::at(_n_binding_18668,0.0);
double _n_ph_18347=d::at(_n_binding_18668,1.0);
double _n_rate_18348=d::at(_n_binding_18668,2.0);
double _n_b_18349=d::at(_n_binding_18668,3.0);
{
double _n_s_18350=(_n_b_18349*(0.7+(0.3*std::sin(((_n_t_18218*_n_rate_18348)+_n_ph_18347)))));
if((d::truth((_n_s_18350<0.3))||d::truth((d::maximum({d::at(this->_n_R_17958,_n_k_18346),d::at(this->_n_G_17959,_n_k_18346),d::at(this->_n_B_17960,_n_k_18346)})>0.4)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_18669=this->_n_out_17915;auto _n_index_18670=_n_k_18346;auto _n_value_18671=(d::truth((_n_s_18350>0.95))?d::String(u"●"):(d::truth((_n_s_18350>0.45))?d::String(u"•"):d::String(u"·")));d::put(_n_array_18669,_n_index_18670,_n_value_18671);return _n_value_18671;})());
if(d::truth(_n_color_18219)){d::check_cancel();(void)(([&](){auto&& _n_array_18672=d::read(_n_color_18219);auto _n_index_18673=_n_k_18346;auto _n_value_18674=(this->_n_STAR_17911+(d::truth((_n_s_18350>0.8))?2.0:(d::truth((_n_s_18350>0.55))?1.0:0.0)));d::put(_n_array_18672,_n_index_18673,_n_value_18674);return _n_value_18674;})());
}

}
}
d::Array<d::String,false> _n_lines_18351=d::Array<d::String,false>{};
{double _n_r_18352=0.0;
for(;d::truth((_n_r_18352<_n_H_17878));(void)((_n_r_18352++))){d::check_cancel();(void)(_n_lines_18351.push(d::join(this->_n_out_17915.slice((_n_r_18352*_n_W_17877),((_n_r_18352+1.0)*_n_W_17877)),d::String(u""))));
}}
return d::join(_n_lines_18351,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lantern-lake").cols)*ascii::catalog_meta("lantern-lake").rows);auto _env=std::make_shared<_n_Record_18353>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lantern_lake_meta(){return catalog_meta("lantern-lake");}
std::unique_ptr<Piece> make_lantern_lake(const AsciiPieceOptions &o){return std::make_unique<Native_lantern_lake>(o);}
}
