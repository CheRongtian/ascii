// Direct, statically typed C++ from src/pieces/command-city.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_5305;
struct _n_Record_5339;
struct _n_Record_5636;
struct _n_Record_5305{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_5305> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5305>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_5339{
double _p_n{};
double _p_c{};
double _p_r{};
static std::shared_ptr<_n_Record_5339> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5339>();out->_p_n=d::decode<double>(j["n"]);out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_5636{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_5636> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_5636>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_5321(double _a0,double _a1);
double _n_noise_5322(double _a0,double _a1,double _a2);
double _n_fbm_5323(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_5324(double _a0);
double _n_smooth_5325(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_5326(d::String _a0);
double _n_scaleAt_5327(double _a0);
double _n_groundV_5328(double _a0);
std::shared_ptr<_n_Record_5305> _n_meta_5304=[](){return ([&](){auto _n_object_5639=std::make_shared<_n_Record_5305>();_n_object_5639->_p_name=d::String(u"command city");_n_object_5639->_p_category=d::String(u"scenes");_n_object_5639->_p_note=d::String(u"a night city whose boulevards trace the command key in streetlight");_n_object_5639->_p_cols=200.0;_n_object_5639->_p_rows=100.0;_n_object_5639->_p_cell=1.0;_n_object_5639->_p_fps=15.0;_n_object_5639->_p_ground=d::String(u"#060607");_n_object_5639->_p_palette=d::Array<d::String,false>{d::String(u"#101012"),d::String(u"#17171a"),d::String(u"#1f1f23"),d::String(u"#29292e"),d::String(u"#34343a"),d::String(u"#414148"),d::String(u"#505058"),d::String(u"#62626a"),d::String(u"#76767e"),d::String(u"#8c8c93"),d::String(u"#a4a4aa"),d::String(u"#bdbdc2"),d::String(u"#d6d6da"),d::String(u"#ececef"),d::String(u"#ffffff"),d::String(u"#3a2a1c"),d::String(u"#5a3c20"),d::String(u"#7e5224"),d::String(u"#a86a2a"),d::String(u"#cf8433"),d::String(u"#ee9e45"),d::String(u"#ffb860"),d::String(u"#ffcf88"),d::String(u"#ffe4b4"),d::String(u"#fff3dc"),d::String(u"#c9d3e6"),d::String(u"#8d99b0"),d::String(u"#ff7a3a"),d::String(u"#c0522a")};return _n_object_5639;})();}();
const double _n_W_5306=[](){return 200.0;}();
const double _n_H_5307=[](){return 100.0;}();
const d::String _n_DOTS_5308=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_5309=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_5310=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_5392=_a0;
return ((_n_v_5392/16.0)-0.47);});}();
const double _n_YH_5311=[](){return (-d::number(260.0));}();
const double _n_YM_5312=[](){return 50.0;}();
const double _n_TILT_5313=[](){return 1.5;}();
const double _n_VOFF_5314=[](){return 6.0;}();
const double _n_CX_5315=[](){return 100.0;}();
const double _n_LS_5316=[](){return 1.9;}();
const double _n_DMAX_5317=[](){return 9.0;}();
const d::String _n_INK_5318=[](){return d::String(u"\n\n          00000000000000000000000000000000000000000000\n      000000000000000000000000000000000000000000000000000\n     000000000000000000000000000000000000000000000000000000\n    00000000000000000000000000000000000000000000000000000000\n   0000000000000000000000000000000000000000000000000000000000\n  000000000000000000000000000000000000000000000000000000000000\n  0000000000000000      0000000000000000      0000000000000000\n  0000000000000    000    000000000000    000    0000000000000\n  000000000000   0000000   0000000000   0000000   000000000000\n  000000000000   0000000   000000000    0000000   000000000000\n  0000000000000   000000   000000000    000000   0000000000000\n  00000000000000                                00000000000000\n  0000000000000000000000    00000000    0000000000000000000000\n  0000000000000000000000   000000000    0000000000000000000000\n  0000000000000000000000   000000000    0000000000000000000000\n  0000000000000000000000   000000000    0000000000000000000000\n  0000000000000000000000   000000000    0000000000000000000000\n  000000000000000000                        000000000000000000\n  00000000000000                                00000000000000\n  000000000000    000000   000000000    000000   0000000000000\n  000000000000   0000000   0000000000   0000000   000000000000\n  000000000000    000000   0000000000   000000    000000000000\n  0000000000000     00    000000000000    00    00000000000000\n  0000000000000000     000000000000000000     0000000000000000\n  00000000000000000000000000000000000000000000000000000000000\n   0000000000000000000000000000000000000000000000000000000000\n    00000000000000000000000000000000000000000000000000000000\n     000000000000000000000000000000000000000000000000000000\n       00000000000000000000000000000000000000000000000000\n          00000000000000000000000000000000000000000000\n\n");}();
const double _n_LC_5319=[](){return 64.0;}();
const double _n_LR_5320=[](){return 32.0;}();
double _n_hash_5321(double _a0,double _a1){double _n_x_5393=_a0;
double _n_y_5394=_a1;
{
double _n_h_5395=([&](){auto _n_left_5640=d::imul(double(d::i32(_n_x_5393)|d::i32(0.0)),374761393.0);auto _n_right_5641=d::imul(double(d::i32(_n_y_5394)|d::i32(0.0)),668265263.0);return (_n_left_5640+_n_right_5641);})();
(void)((_n_h_5395=d::imul(double(d::i32(_n_h_5395)^d::i32(double(d::u32(_n_h_5395)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_5395)^d::i32(double(d::u32(_n_h_5395)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_5322(double _a0,double _a1,double _a2){double _n_x_5396=_a0;
double _n_y_5397=_a1;
double _n_period_5398=_a2;
{
double _n_xi_5399=std::floor(_n_x_5396);
double _n_yi_5400=std::floor(_n_y_5397);
double _n_fx_5401=(_n_x_5396-_n_xi_5399);
double _n_fy_5402=(_n_y_5397-_n_yi_5400);
double _n_u_5403=((_n_fx_5401*_n_fx_5401)*(3.0-(2.0*_n_fx_5401)));
double _n_v_5404=((_n_fy_5402*_n_fy_5402)*(3.0-(2.0*_n_fy_5402)));
double _n_x0_5405=_n_xi_5399;
double _n_x1_5406=(_n_xi_5399+1.0);
if(d::truth(_n_period_5398)){d::check_cancel();(void)((_n_x0_5405=d::mod((d::mod(_n_xi_5399,_n_period_5398)+_n_period_5398),_n_period_5398)));
(void)((_n_x1_5406=d::mod((_n_x0_5405+1.0),_n_period_5398)));
}
double _n_a_5407=_n_hash_5321(_n_x0_5405,_n_yi_5400);
double _n_b_5408=_n_hash_5321(_n_x1_5406,_n_yi_5400);
double _n_c_5409=_n_hash_5321(_n_x0_5405,(_n_yi_5400+1.0));
double _n_d_5410=_n_hash_5321(_n_x1_5406,(_n_yi_5400+1.0));
return (((_n_a_5407+((_n_b_5408-_n_a_5407)*_n_u_5403))+((_n_c_5409-_n_a_5407)*_n_v_5404))+(((((_n_a_5407-_n_b_5408)-_n_c_5409)+_n_d_5410)*_n_u_5403)*_n_v_5404));

}
}

double _n_fbm_5323(double _a0,double _a1,double _a2,double _a3){double _n_x_5411=_a0;
double _n_y_5412=_a1;
double _n_octaves_5413=_a2;
double _n_period_5414=_a3;
{
double _n_s_5415=0.0;
double _n_n_5416=0.0;
double _n_amp_5417=0.5;
double _n_f_5418=1.0;
{double _n_i_5419=0.0;
for(;d::truth((_n_i_5419<_n_octaves_5413));(void)((_n_i_5419++))){d::check_cancel();(void)((_n_s_5415=(_n_s_5415+(_n_amp_5417*_n_noise_5322((_n_x_5411*_n_f_5418),(_n_y_5412*_n_f_5418),(_n_period_5414*_n_f_5418))))));
(void)((_n_n_5416=(_n_n_5416+_n_amp_5417)));
(void)((_n_amp_5417=(_n_amp_5417*0.5)));
(void)((_n_f_5418=(_n_f_5418*2.0)));
}}
return (_n_s_5415/_n_n_5416);

}
}

double _n_clamp_5324(double _a0){double _n_v_5420=_a0;
return (d::truth((_n_v_5420<0.0))?0.0:(d::truth((_n_v_5420>1.0))?1.0:_n_v_5420));}

double _n_smooth_5325(double _a0,double _a1,double _a2){double _n_a_5421=_a0;
double _n_b_5422=_a1;
double _n_v_5423=_a2;
{
double _n_k_5424=_n_clamp_5324(((_n_v_5423-_n_a_5421)/(_n_b_5422-_n_a_5421)));
return ((_n_k_5424*_n_k_5424)*(3.0-(2.0*_n_k_5424)));

}
}

d::Array<double,false> _n_hex_5326(d::String _a0){d::String _n_s_5425=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_5426=_a0;
return (([&](){auto _n_argument_5642=d::slice(_n_s_5425,_n_i_5426,(_n_i_5426+2.0));auto _n_argument_5643=16.0;return d::parseInt(_n_argument_5642,_n_argument_5643);})()/255.0);});}

double _n_scaleAt_5327(double _a0){double _n_y_5427=_a0;
return ((_n_y_5427-_n_YH_5311)/(_n_YM_5312-_n_YH_5311));}

double _n_groundV_5328(double _a0){double _n_y_5428=_a0;
return (((_n_TILT_5313*(_n_YM_5312-_n_YH_5311))*(1.0-((_n_YM_5312-_n_YH_5311)/(_n_y_5428-_n_YH_5311))))+_n_VOFF_5314);}

struct Native_command_city final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_5329{};
double _n_N_5330{};
d::Array<d::String,false> _n_out_5331{};
d::Array<uint8_t,true> _n_lut_5332{};
d::Array<d::String,false> _n_grid_5334{};
d::Array<float,true> _n_ink_5335{};
d::Array<float,true> _n_fill_5336{};
d::Array<int32_t,true> _n_comp_5337{};
d::Array<std::shared_ptr<_n_Record_5339>,false> _n_parts_5338{};
std::shared_ptr<_n_Record_5339> _n_mid_5340{};
double _n_LCX_5341{};
double _n_LCY_5342{};
d::Array<d::Array<double,false>,false> _n_dots_5345{};
double _n_rsum_5349{};
double _n_rn_5350{};
double _n_RMID_5351{};
double _n_left_5352{};
double _n_right_5353{};
double _n_top_5354{};
double _n_bottom_5355{};
d::Array<double,false> _n_barX_5356{};
d::Array<double,false> _n_barY_5357{};
double _n_DR_5359{};
double _n_DU0_5360{};
double _n_DV0_5361{};
double _n_DW_5362{};
double _n_DH_5363{};
d::Array<float,true> _n_dIn_5364{};
d::Array<float,true> _n_dOut_5365{};
double _n_BLK_5367{};
double _n_ST_5368{};
double _n_RING_5369{};
double _n_CANAL_5370{};
d::Array<float,true> _n_gU_5371{};
d::Array<float,true> _n_gV_5372{};
d::Array<float,true> _n_key_5373{};
d::Array<float,true> _n_sq_5374{};
d::Array<float,true> _n_edge_5375{};
d::Array<float,true> _n_hgt_5376{};
d::Array<int32_t,true> _n_lot_5377{};
d::Array<float,true> _n_glow_5378{};
d::Array<float,true> _n_tmp_5379{};
d::Array<float,true> _n_baseR_5380{};
d::Array<float,true> _n_baseG_5381{};
d::Array<float,true> _n_baseB_5382{};
d::Array<float,true> _n_floors_5383{};
d::Array<float,true> _n_inks_5384{};
d::Array<float,true> _n_road_5385{};
d::Array<float,true> _n_rP_5386{};
d::Array<float,true> _n_rL_5387{};
d::Array<float,true> _n_water_5388{};
d::Array<float,true> _n_blink_5389{};
double _n_MW_5390{};
d::Array<float,true> _n_mist_5391{};
std::function<d::String(double,std::shared_ptr<_n_Record_5636>)> _render;
double _n_nearest_5333(double _a0,double _a1,double _a2){double _n_r_5429=_a0;
double _n_g_5430=_a1;
double _n_b_5431=_a2;
{
double _n_k_5432=([&](){auto _n_left_5798=([&](){auto _n_left_5800=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_5429*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_5801=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_5430*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_5800)|d::i32(_n_right_5801));})();auto _n_right_5799=d::minimum({31.0,double(d::i32((_n_b_5431*31.99))|d::i32(0.0))});return double(d::i32(_n_left_5798)|d::i32(_n_right_5799));})();
if(d::truth((d::at(this->_n_lut_5332,_n_k_5432)!=255.0))){d::check_cancel();return d::at(this->_n_lut_5332,_n_k_5432);
}
double _n_best_5433=0.0;
double _n_bd_5434=1000000000.0;
{double _n_i_5435=0.0;
for(;d::truth((_n_i_5435<double(this->_n_P_5329.size())));(void)((_n_i_5435++))){d::check_cancel();double _n_dr_5436=(d::at(d::at(this->_n_P_5329,_n_i_5435),0.0)-_n_r_5429);
double _n_dg_5437=(d::at(d::at(this->_n_P_5329,_n_i_5435),1.0)-_n_g_5430);
double _n_db_5438=(d::at(d::at(this->_n_P_5329,_n_i_5435),2.0)-_n_b_5431);
double _n_d_5439=((((0.3*_n_dr_5436)*_n_dr_5436)+((0.5*_n_dg_5437)*_n_dg_5437))+((0.2*_n_db_5438)*_n_db_5438));
if(d::truth((_n_d_5439<_n_bd_5434))){d::check_cancel();(void)(((_n_bd_5434=_n_d_5439),(_n_best_5433=_n_i_5435)));
}
}}
return ([&](){auto&& _n_array_5802=this->_n_lut_5332;auto _n_index_5803=_n_k_5432;auto _n_value_5804=_n_best_5433;d::put(_n_array_5802,_n_index_5803,_n_value_5804);return _n_value_5804;})();

}
}

double _n_gx_5343(double _a0){double _n_c_5461=_a0;
return ((_n_c_5461-this->_n_LCX_5341)*_n_LS_5316);}

double _n_gy_5344(double _a0){double _n_r_5462=_a0;
return (((_n_r_5462-this->_n_LCY_5342)*2.0)*_n_LS_5316);}

double _n_sample_5346(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_g_5464=_a0;
double _n_u_5465=_a1;
double _n_v_5466=_a2;
{
double _n_c_5467=(((_n_u_5465/_n_LS_5316)+this->_n_LCX_5341)-0.5);
double _n_r_5468=(((_n_v_5466/(2.0*_n_LS_5316))+this->_n_LCY_5342)-0.5);
double _n_ci_5469=std::floor(_n_c_5467);
double _n_ri_5470=std::floor(_n_r_5468);
double _n_fc_5471=(_n_c_5467-_n_ci_5469);
double _n_fr_5472=(_n_r_5468-_n_ri_5470);
auto _n_at_5473=[&]( double _a0,double _a1) mutable ->double{double _n_cc_5474=_a0;
double _n_rr_5475=_a1;
return ((((d::truth((_n_cc_5474<0.0))||d::truth((_n_rr_5475<0.0)))||d::truth((_n_cc_5474>=_n_LC_5319)))||d::truth((_n_rr_5475>=_n_LR_5320)))?0.0:d::at(_n_g_5464,((_n_rr_5475*_n_LC_5319)+_n_cc_5474)));};
double _n_a_5476=_n_at_5473(_n_ci_5469,_n_ri_5470);
double _n_b_5477=_n_at_5473((_n_ci_5469+1.0),_n_ri_5470);
double _n_cc_5478=_n_at_5473(_n_ci_5469,(_n_ri_5470+1.0));
double _n_d_5479=_n_at_5473((_n_ci_5469+1.0),(_n_ri_5470+1.0));
return (((_n_a_5476+((_n_b_5477-_n_a_5476)*_n_fc_5471))+((_n_cc_5478-_n_a_5476)*_n_fr_5472))+(((((_n_a_5476-_n_b_5477)-_n_cc_5478)+_n_d_5479)*_n_fc_5471)*_n_fr_5472));

}
}

double _n_keyAt_5347(double _a0,double _a1){double _n_u_5480=_a0;
double _n_v_5481=_a1;
return ([&](){auto _n_left_5805=([&](){auto _n_argument_5807=0.3;auto _n_argument_5808=0.7;auto _n_argument_5809=this->_n_sample_5346(this->_n_fill_5336,_n_u_5480,_n_v_5481);return _n_smooth_5325(_n_argument_5807,_n_argument_5808,_n_argument_5809);})();auto _n_right_5806=(1.0-([&](){auto _n_argument_5810=0.3;auto _n_argument_5811=0.7;auto _n_argument_5812=this->_n_sample_5346(this->_n_ink_5335,_n_u_5480,_n_v_5481);return _n_smooth_5325(_n_argument_5810,_n_argument_5811,_n_argument_5812);})());return (_n_left_5805*_n_right_5806);})();}

double _n_squareAt_5348(double _a0,double _a1){double _n_u_5482=_a0;
double _n_v_5483=_a1;
return ([&](){auto _n_argument_5813=0.3;auto _n_argument_5814=0.7;auto _n_argument_5815=this->_n_sample_5346(this->_n_fill_5336,_n_u_5482,_n_v_5483);return _n_smooth_5325(_n_argument_5813,_n_argument_5814,_n_argument_5815);})();}

d::Array<double,false> _n_route_5358(double _a0,double _a1){double _n_u_5495=_a0;
double _n_v_5496=_a1;
{
double _n_bi_5497=0.0;
double _n_bd_5498=1000000000.0;
{double _n_i_5499=0.0;
for(;d::truth((_n_i_5499<4.0));(void)((_n_i_5499++))){d::check_cancel();double _n_d_5500=d::hypot(std::initializer_list<double>{(_n_u_5495-d::at(d::at(this->_n_dots_5345,_n_i_5499),0.0)),(_n_v_5496-d::at(d::at(this->_n_dots_5345,_n_i_5499),1.0))});
if(d::truth((_n_d_5500<_n_bd_5498))){d::check_cancel();(void)(((_n_bd_5498=_n_d_5500),(_n_bi_5497=_n_i_5499)));
}
}}
auto _n_binding_5816=d::at(this->_n_dots_5345,_n_bi_5497);
double _n_du_5501=d::at(_n_binding_5816,0.0);
double _n_dv_5502=d::at(_n_binding_5816,1.0);
bool _n_inward_5503=([&]()->bool{auto _n_logical_5817=([&](){auto _n_left_5820=d::sign((-d::number(_n_du_5501)));auto _n_right_5821=d::sign((_n_u_5495-_n_du_5501));return (_n_left_5820==_n_right_5821);})();return d::truth(_n_logical_5817)?([&](){auto _n_left_5818=d::sign((-d::number(_n_dv_5502)));auto _n_right_5819=d::sign((_n_v_5496-_n_dv_5502));return (_n_left_5818==_n_right_5819);})():_n_logical_5817;})();
if((d::truth((!d::truth(_n_inward_5503)))&&d::truth((_n_bd_5498<(this->_n_RMID_5351*1.9))))){d::check_cancel();return d::Array<double,false>{((std::atan2((_n_v_5496-_n_dv_5502),(_n_u_5495-_n_du_5501))*this->_n_RMID_5351)+(_n_bi_5497*97.0)),(_n_bd_5498-this->_n_RMID_5351)};
}
double _n_hy_5504=([&](){auto _n_argument_5822=std::fabs((_n_v_5496-d::at(this->_n_barY_5357,0.0)));auto _n_argument_5823=std::fabs((_n_v_5496-d::at(this->_n_barY_5357,1.0)));return d::minimum({_n_argument_5822,_n_argument_5823});})();
double _n_vx_5505=([&](){auto _n_argument_5824=std::fabs((_n_u_5495-d::at(this->_n_barX_5356,0.0)));auto _n_argument_5825=std::fabs((_n_u_5495-d::at(this->_n_barX_5356,1.0)));return d::minimum({_n_argument_5824,_n_argument_5825});})();
if(d::truth((_n_hy_5504<_n_vx_5505))){d::check_cancel();double _n_by_5506=(d::truth(([&](){auto _n_left_5826=std::fabs((_n_v_5496-d::at(this->_n_barY_5357,0.0)));auto _n_right_5827=std::fabs((_n_v_5496-d::at(this->_n_barY_5357,1.0)));return (_n_left_5826<_n_right_5827);})())?d::at(this->_n_barY_5357,0.0):d::at(this->_n_barY_5357,1.0));
return d::Array<double,false>{(_n_u_5495+300.0),(_n_v_5496-_n_by_5506)};
}
double _n_bx_5507=(d::truth(([&](){auto _n_left_5828=std::fabs((_n_u_5495-d::at(this->_n_barX_5356,0.0)));auto _n_right_5829=std::fabs((_n_u_5495-d::at(this->_n_barX_5356,1.0)));return (_n_left_5828<_n_right_5829);})())?d::at(this->_n_barX_5356,0.0):d::at(this->_n_barX_5356,1.0));
return d::Array<double,false>{(_n_v_5496+600.0),(_n_u_5495-_n_bx_5507)};

}
}

double _n_edgeAt_5366(double _a0,double _a1){double _n_u_5520=_a0;
double _n_v_5521=_a1;
{
double _n_i_5522=([&](){auto _n_argument_5830=0.0;auto _n_argument_5831=([&](){auto _n_argument_5832=(this->_n_DW_5362-1.0);auto _n_argument_5833=std::floor(((_n_u_5520-this->_n_DU0_5360)/this->_n_DR_5359));return d::minimum({_n_argument_5832,_n_argument_5833});})();return d::maximum({_n_argument_5830,_n_argument_5831});})();
double _n_j_5523=([&](){auto _n_argument_5834=0.0;auto _n_argument_5835=([&](){auto _n_argument_5836=(this->_n_DH_5363-1.0);auto _n_argument_5837=std::floor(((_n_v_5521-this->_n_DV0_5361)/this->_n_DR_5359));return d::minimum({_n_argument_5836,_n_argument_5837});})();return d::maximum({_n_argument_5834,_n_argument_5835});})();
double _n_o_5524=((_n_j_5523*this->_n_DW_5362)+_n_i_5522);
return (d::truth((d::at(this->_n_dOut_5365,_n_o_5524)>0.0))?d::at(this->_n_dOut_5365,_n_o_5524):(-d::number(d::at(this->_n_dIn_5364,_n_o_5524))));

}
}

explicit Native_command_city(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_5329=d::map(_n_meta_5304->_p_palette,_n_hex_5326);
this->_n_N_5330=(_n_W_5306*_n_H_5307);
this->_n_out_5331=d::Array<d::String,false>(size_t(this->_n_N_5330));
this->_n_lut_5332=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_grid_5334=d::map(d::split(d::slice(_n_INK_5318,1.0,(-d::number(1.0))),d::String(u"\n")),[&]( d::String _a0) mutable ->d::String{d::String _n_line_5440=_a0;
return d::padEnd(_n_line_5440,_n_LC_5319);});
this->_n_ink_5335=d::Array<float,true>(size_t((_n_LC_5319*_n_LR_5320)));
this->_n_fill_5336=d::Array<float,true>(size_t((_n_LC_5319*_n_LR_5320)));
{double _n_r_5441=0.0;
for(;d::truth((_n_r_5441<_n_LR_5320));(void)((_n_r_5441++))){d::check_cancel();d::String _n_line_5442=([&]()->d::String{auto _n_logical_5644=d::at(this->_n_grid_5334,_n_r_5441);return d::truth(_n_logical_5644)?_n_logical_5644:d::String(u"");})();
double _n_a_5443=d::search(_n_line_5442,d::Regex(u"\\S",u""));
double _n_b_5444=(double(d::trim(_n_line_5442,false,true).size())-1.0);
{double _n_c_5445=0.0;
for(;d::truth((_n_c_5445<_n_LC_5319));(void)((_n_c_5445++))){d::check_cancel();(void)(([&](){auto&& _n_array_5645=this->_n_ink_5335;auto _n_index_5646=((_n_r_5441*_n_LC_5319)+_n_c_5445);auto _n_value_5647=((d::truth(d::at(_n_line_5442,_n_c_5445))&&d::truth((d::at(_n_line_5442,_n_c_5445)!=d::String(u" "))))?1.0:0.0);d::put(_n_array_5645,_n_index_5646,_n_value_5647);return _n_value_5647;})());
(void)(([&](){auto&& _n_array_5648=this->_n_fill_5336;auto _n_index_5649=((_n_r_5441*_n_LC_5319)+_n_c_5445);auto _n_value_5650=(((d::truth((_n_a_5443>=0.0))&&d::truth((_n_c_5445>=_n_a_5443)))&&d::truth((_n_c_5445<=_n_b_5444)))?1.0:0.0);d::put(_n_array_5648,_n_index_5649,_n_value_5650);return _n_value_5650;})());
}}
}}
this->_n_comp_5337=d::Array<int32_t,true>(size_t((_n_LC_5319*_n_LR_5320))).fill((-d::number(1.0)));
this->_n_parts_5338=d::Array<std::shared_ptr<_n_Record_5339>,false>{};
{double _n_s_5446=0.0;
for(;d::truth((_n_s_5446<(_n_LC_5319*_n_LR_5320)));(void)((_n_s_5446++))){d::check_cancel();if((d::truth((!d::truth(d::at(this->_n_ink_5335,_n_s_5446))))||d::truth((d::at(this->_n_comp_5337,_n_s_5446)>=0.0)))){d::check_cancel();continue;
}
double _n_id_5447=double(this->_n_parts_5338.size());
std::shared_ptr<_n_Record_5339> _n_part_5448=([&](){auto _n_object_5652=std::make_shared<_n_Record_5339>();_n_object_5652->_p_n=0.0;_n_object_5652->_p_c=0.0;_n_object_5652->_p_r=0.0;return _n_object_5652;})();
d::Array<double,false> _n_stack_5450=d::Array<double,false>{_n_s_5446};
(void)(([&](){auto&& _n_array_5653=this->_n_comp_5337;auto _n_index_5654=_n_s_5446;auto _n_value_5655=_n_id_5447;d::put(_n_array_5653,_n_index_5654,_n_value_5655);return _n_value_5655;})());
while(d::truth(double(_n_stack_5450.size()))){d::check_cancel();double _n_q_5451=d::read(_n_stack_5450.pop());
double _n_qc_5452=d::mod(_n_q_5451,_n_LC_5319);
double _n_qr_5453=double(d::i32((_n_q_5451/_n_LC_5319))|d::i32(0.0));
(void)((((_n_part_5448->_p_n++),(_n_part_5448->_p_c=(_n_part_5448->_p_c+(_n_qc_5452+0.5)))),(_n_part_5448->_p_r=(_n_part_5448->_p_r+(_n_qr_5453+0.5)))));
for(auto &&_n_item_5656:d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{0.0,1.0},d::Array<double,false>{0.0,(-d::number(1.0))}}){d::check_cancel();auto _n_binding_5657=_n_item_5656;
double _n_dc_5454=d::at(_n_binding_5657,0.0);
double _n_dr_5455=d::at(_n_binding_5657,1.0);
{
double _n_nc_5456=(_n_qc_5452+_n_dc_5454);
double _n_nr_5457=(_n_qr_5453+_n_dr_5455);
if((((d::truth((_n_nc_5456<0.0))||d::truth((_n_nr_5457<0.0)))||d::truth((_n_nc_5456>=_n_LC_5319)))||d::truth((_n_nr_5457>=_n_LR_5320)))){d::check_cancel();continue;
}
double _n_o_5458=((_n_nr_5457*_n_LC_5319)+_n_nc_5456);
if((d::truth(d::at(this->_n_ink_5335,_n_o_5458))&&d::truth((d::at(this->_n_comp_5337,_n_o_5458)<0.0)))){d::check_cancel();(void)((([&](){auto&& _n_array_5658=this->_n_comp_5337;auto _n_index_5659=_n_o_5458;auto _n_value_5660=_n_id_5447;d::put(_n_array_5658,_n_index_5659,_n_value_5660);return _n_value_5660;})(),_n_stack_5450.push(_n_o_5458)));
}

}
}
}
(void)(((_n_part_5448->_p_c=(_n_part_5448->_p_c/_n_part_5448->_p_n)),(_n_part_5448->_p_r=(_n_part_5448->_p_r/_n_part_5448->_p_n))));
(void)(this->_n_parts_5338.push(_n_part_5448));
}}
(void)(this->_n_parts_5338.sort([=]( std::shared_ptr<_n_Record_5339> _a0,std::shared_ptr<_n_Record_5339> _a1) mutable ->double{std::shared_ptr<_n_Record_5339> _n_a_5459=_a0;
std::shared_ptr<_n_Record_5339> _n_b_5460=_a1;
return (_n_b_5460->_p_n-_n_a_5459->_p_n);}));
this->_n_mid_5340=d::at(this->_n_parts_5338,1.0);
this->_n_LCX_5341=this->_n_mid_5340->_p_c;
this->_n_LCY_5342=this->_n_mid_5340->_p_r;
this->_n_dots_5345=d::map(this->_n_parts_5338.slice(2.0,6.0),[&]( std::shared_ptr<_n_Record_5339> _a0) mutable ->d::Array<double,false>{std::shared_ptr<_n_Record_5339> _n_p_5463=_a0;
return d::Array<double,false>{this->_n_gx_5343(_n_p_5463->_p_c),this->_n_gy_5344(_n_p_5463->_p_r)};});
this->_n_rsum_5349=0.0;
this->_n_rn_5350=0.0;
for(auto &&_n_item_5661:this->_n_dots_5345){d::check_cancel();auto _n_binding_5662=_n_item_5661;
double _n_du_5484=d::at(_n_binding_5662,0.0);
double _n_dv_5485=d::at(_n_binding_5662,1.0);
{
for(auto &&_n_item_5663:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_dir_5486=_n_item_5663;
{
double _n_a_5487=(-d::number(1.0));
double _n_b_5488=(-d::number(1.0));
{double _n_s_5489=0.0;
for(;d::truth((_n_s_5489<30.0));(void)((_n_s_5489=(_n_s_5489+0.1)))){d::check_cancel();double _n_k_5490=this->_n_keyAt_5347((_n_du_5484+(_n_dir_5486*_n_s_5489)),_n_dv_5485);
if((d::truth((_n_k_5490>0.5))&&d::truth((_n_a_5487<0.0)))){d::check_cancel();(void)((_n_a_5487=_n_s_5489));
}
if((d::truth((_n_a_5487>=0.0))&&d::truth((_n_k_5490<=0.5)))){d::check_cancel();(void)((_n_b_5488=_n_s_5489));
break;
}
}}
if((d::truth((_n_a_5487>=0.0))&&d::truth((_n_b_5488>_n_a_5487)))){d::check_cancel();(void)(((this->_n_rsum_5349=(this->_n_rsum_5349+((_n_a_5487+_n_b_5488)/2.0))),(this->_n_rn_5350++)));
}

}
}

}
}
this->_n_RMID_5351=(this->_n_rsum_5349/this->_n_rn_5350);
this->_n_left_5352=([&](){d::Array<double> _n_numbers_5664;for(auto _x:d::map(this->_n_dots_5345,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_d_5491=_a0;
return d::at(_n_d_5491,0.0);}))_n_numbers_5664.push(_x);return d::minimum(_n_numbers_5664);})();
this->_n_right_5353=([&](){d::Array<double> _n_numbers_5665;for(auto _x:d::map(this->_n_dots_5345,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_d_5492=_a0;
return d::at(_n_d_5492,0.0);}))_n_numbers_5665.push(_x);return d::maximum(_n_numbers_5665);})();
this->_n_top_5354=([&](){d::Array<double> _n_numbers_5666;for(auto _x:d::map(this->_n_dots_5345,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_d_5493=_a0;
return d::at(_n_d_5493,1.0);}))_n_numbers_5666.push(_x);return d::minimum(_n_numbers_5666);})();
this->_n_bottom_5355=([&](){d::Array<double> _n_numbers_5667;for(auto _x:d::map(this->_n_dots_5345,[&]( d::Array<double,false> _a0) mutable ->double{d::Array<double,false> _n_d_5494=_a0;
return d::at(_n_d_5494,1.0);}))_n_numbers_5667.push(_x);return d::maximum(_n_numbers_5667);})();
this->_n_barX_5356=d::Array<double,false>{(this->_n_left_5352+this->_n_RMID_5351),(this->_n_right_5353-this->_n_RMID_5351)};
this->_n_barY_5357=d::Array<double,false>{(this->_n_top_5354+this->_n_RMID_5351),(this->_n_bottom_5355-this->_n_RMID_5351)};
this->_n_DR_5359=0.5;
this->_n_DU0_5360=(-d::number(140.0));
this->_n_DV0_5361=(-d::number(130.0));
this->_n_DW_5362=560.0;
this->_n_DH_5363=520.0;
this->_n_dIn_5364=d::Array<float,true>(size_t((this->_n_DW_5362*this->_n_DH_5363)));
this->_n_dOut_5365=d::Array<float,true>(size_t((this->_n_DW_5362*this->_n_DH_5363)));
{double _n_j_5508=0.0;
for(;d::truth((_n_j_5508<this->_n_DH_5363));(void)((_n_j_5508++))){d::check_cancel();{double _n_i_5509=0.0;
for(;d::truth((_n_i_5509<this->_n_DW_5362));(void)((_n_i_5509++))){d::check_cancel();bool _n_inside_5510=(this->_n_squareAt_5348((this->_n_DU0_5360+((_n_i_5509+0.5)*this->_n_DR_5359)),(this->_n_DV0_5361+((_n_j_5508+0.5)*this->_n_DR_5359)))>0.5);
(void)(([&](){auto&& _n_array_5668=this->_n_dIn_5364;auto _n_index_5669=((_n_j_5508*this->_n_DW_5362)+_n_i_5509);auto _n_value_5670=(d::truth(_n_inside_5510)?10000.0:0.0);d::put(_n_array_5668,_n_index_5669,_n_value_5670);return _n_value_5670;})());
(void)(([&](){auto&& _n_array_5671=this->_n_dOut_5365;auto _n_index_5672=((_n_j_5508*this->_n_DW_5362)+_n_i_5509);auto _n_value_5673=(d::truth(_n_inside_5510)?0.0:10000.0);d::put(_n_array_5671,_n_index_5672,_n_value_5673);return _n_value_5673;})());
}}
}}
for(auto &&_n_item_5674:d::Array<d::Array<float,true>,false>{this->_n_dIn_5364,this->_n_dOut_5365}){d::check_cancel();d::Array<float,true> _n_f_5511=_n_item_5674;
{
double _n_a_5512=this->_n_DR_5359;
double _n_b_5513=(this->_n_DR_5359*std::sqrt(2.));
{double _n_j_5514=0.0;
for(;d::truth((_n_j_5514<this->_n_DH_5363));(void)((_n_j_5514++))){d::check_cancel();{double _n_i_5515=0.0;
for(;d::truth((_n_i_5515<this->_n_DW_5362));(void)((_n_i_5515++))){d::check_cancel();double _n_o_5516=((_n_j_5514*this->_n_DW_5362)+_n_i_5515);
if(d::truth((_n_i_5515>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_5675=_n_f_5511;auto _n_index_5676=_n_o_5516;auto _n_value_5677=d::minimum({d::at(_n_f_5511,_n_o_5516),(d::at(_n_f_5511,(_n_o_5516-1.0))+_n_a_5512)});d::put(_n_array_5675,_n_index_5676,_n_value_5677);return _n_value_5677;})());
}
if(d::truth((_n_j_5514>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_5678=_n_f_5511;auto _n_index_5679=_n_o_5516;auto _n_value_5680=d::minimum({d::at(_n_f_5511,_n_o_5516),(d::at(_n_f_5511,(_n_o_5516-this->_n_DW_5362))+_n_a_5512)});d::put(_n_array_5678,_n_index_5679,_n_value_5680);return _n_value_5680;})());
if(d::truth((_n_i_5515>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_5681=_n_f_5511;auto _n_index_5682=_n_o_5516;auto _n_value_5683=d::minimum({d::at(_n_f_5511,_n_o_5516),(d::at(_n_f_5511,((_n_o_5516-this->_n_DW_5362)-1.0))+_n_b_5513)});d::put(_n_array_5681,_n_index_5682,_n_value_5683);return _n_value_5683;})());
}
if(d::truth((_n_i_5515<(this->_n_DW_5362-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_5684=_n_f_5511;auto _n_index_5685=_n_o_5516;auto _n_value_5686=d::minimum({d::at(_n_f_5511,_n_o_5516),(d::at(_n_f_5511,((_n_o_5516-this->_n_DW_5362)+1.0))+_n_b_5513)});d::put(_n_array_5684,_n_index_5685,_n_value_5686);return _n_value_5686;})());
}
}
}}
}}
{double _n_j_5517=(this->_n_DH_5363-1.0);
for(;d::truth((_n_j_5517>=0.0));(void)((_n_j_5517--))){d::check_cancel();{double _n_i_5518=(this->_n_DW_5362-1.0);
for(;d::truth((_n_i_5518>=0.0));(void)((_n_i_5518--))){d::check_cancel();double _n_o_5519=((_n_j_5517*this->_n_DW_5362)+_n_i_5518);
if(d::truth((_n_i_5518<(this->_n_DW_5362-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_5687=_n_f_5511;auto _n_index_5688=_n_o_5519;auto _n_value_5689=d::minimum({d::at(_n_f_5511,_n_o_5519),(d::at(_n_f_5511,(_n_o_5519+1.0))+_n_a_5512)});d::put(_n_array_5687,_n_index_5688,_n_value_5689);return _n_value_5689;})());
}
if(d::truth((_n_j_5517<(this->_n_DH_5363-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_5690=_n_f_5511;auto _n_index_5691=_n_o_5519;auto _n_value_5692=d::minimum({d::at(_n_f_5511,_n_o_5519),(d::at(_n_f_5511,(_n_o_5519+this->_n_DW_5362))+_n_a_5512)});d::put(_n_array_5690,_n_index_5691,_n_value_5692);return _n_value_5692;})());
if(d::truth((_n_i_5518<(this->_n_DW_5362-1.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_5693=_n_f_5511;auto _n_index_5694=_n_o_5519;auto _n_value_5695=d::minimum({d::at(_n_f_5511,_n_o_5519),(d::at(_n_f_5511,((_n_o_5519+this->_n_DW_5362)+1.0))+_n_b_5513)});d::put(_n_array_5693,_n_index_5694,_n_value_5695);return _n_value_5695;})());
}
if(d::truth((_n_i_5518>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_5696=_n_f_5511;auto _n_index_5697=_n_o_5519;auto _n_value_5698=d::minimum({d::at(_n_f_5511,_n_o_5519),(d::at(_n_f_5511,((_n_o_5519+this->_n_DW_5362)-1.0))+_n_b_5513)});d::put(_n_array_5696,_n_index_5697,_n_value_5698);return _n_value_5698;})());
}
}
}}
}}

}
}
this->_n_BLK_5367=9.5;
this->_n_ST_5368=1.6;
this->_n_RING_5369=2.6;
this->_n_CANAL_5370=7.0;
this->_n_gU_5371=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_gV_5372=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_key_5373=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_sq_5374=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_edge_5375=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_hgt_5376=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_lot_5377=d::Array<int32_t,true>(size_t(this->_n_N_5330));
{double _n_y_5525=0.0;
for(;d::truth((_n_y_5525<_n_H_5307));(void)((_n_y_5525++))){d::check_cancel();double _n_s_5526=_n_scaleAt_5327((_n_y_5525+0.5));
double _n_v_5527=_n_groundV_5328((_n_y_5525+0.5));
{double _n_x_5528=0.0;
for(;d::truth((_n_x_5528<_n_W_5306));(void)((_n_x_5528++))){d::check_cancel();double _n_k_5529=((_n_y_5525*_n_W_5306)+_n_x_5528);
double _n_u_5530=(((_n_x_5528+0.5)-_n_CX_5315)/_n_s_5526);
(void)((([&](){auto&& _n_array_5699=this->_n_gU_5371;auto _n_index_5700=_n_k_5529;auto _n_value_5701=_n_u_5530;d::put(_n_array_5699,_n_index_5700,_n_value_5701);return _n_value_5701;})(),([&](){auto&& _n_array_5702=this->_n_gV_5372;auto _n_index_5703=_n_k_5529;auto _n_value_5704=_n_v_5527;d::put(_n_array_5702,_n_index_5703,_n_value_5704);return _n_value_5704;})()));
(void)(([&](){auto&& _n_array_5705=this->_n_key_5373;auto _n_index_5706=_n_k_5529;auto _n_value_5707=this->_n_keyAt_5347(_n_u_5530,_n_v_5527);d::put(_n_array_5705,_n_index_5706,_n_value_5707);return _n_value_5707;})());
double _n_e_5531=this->_n_edgeAt_5366(_n_u_5530,_n_v_5527);
(void)(([&](){auto&& _n_array_5708=this->_n_edge_5375;auto _n_index_5709=_n_k_5529;auto _n_value_5710=_n_e_5531;d::put(_n_array_5708,_n_index_5709,_n_value_5710);return _n_value_5710;})());
(void)(([&](){auto&& _n_array_5711=this->_n_sq_5374;auto _n_index_5712=_n_k_5529;auto _n_value_5713=_n_smooth_5325(1.0,(-d::number(1.0)),_n_e_5531);d::put(_n_array_5711,_n_index_5712,_n_value_5713);return _n_value_5713;})());
if((d::truth((d::at(this->_n_key_5373,_n_k_5529)>0.08))||d::truth(([&]()->bool{auto _n_logical_5714=(_n_e_5531>((-d::number(this->_n_RING_5369))-0.8));return d::truth(_n_logical_5714)?(_n_e_5531<(this->_n_CANAL_5370+1.5)):_n_logical_5714;})()))){d::check_cancel();continue;
}
double _n_bu_5532=std::floor((_n_u_5530/this->_n_BLK_5367));
double _n_bv_5533=std::floor((_n_v_5527/this->_n_BLK_5367));
double _n_fu_5534=(_n_u_5530-(_n_bu_5532*this->_n_BLK_5367));
double _n_fv_5535=(_n_v_5527-(_n_bv_5533*this->_n_BLK_5367));
if((d::truth((_n_fu_5534<this->_n_ST_5368))||d::truth((_n_fv_5535<this->_n_ST_5368)))){d::check_cancel();continue;
}
bool _n_split_5536=(_n_hash_5321(_n_bu_5532,_n_bv_5533)>0.5);
double _n_lu_5537=(d::truth((_n_fu_5534<(d::truth(_n_split_5536)?(this->_n_BLK_5367*0.55):(this->_n_BLK_5367+1.0))))?0.0:1.0);
double _n_lv_5538=(d::truth((_n_fv_5535<(this->_n_BLK_5367*0.58)))?0.0:1.0);
double _n_id_5539=((((((_n_bu_5532+500.0)*1000.0)+(_n_bv_5533+500.0))*4.0)+(_n_lu_5537*2.0))+_n_lv_5538);
if((d::truth(([&]()->bool{auto _n_logical_5715=_n_split_5536;return d::truth(_n_logical_5715)?(std::fabs((_n_fu_5534-(this->_n_BLK_5367*0.55)))<0.35):_n_logical_5715;})())||d::truth((std::fabs((_n_fv_5535-(this->_n_BLK_5367*0.58)))<0.35)))){d::check_cancel();continue;
}
double _n_tall_5540=_n_hash_5321(_n_id_5539,7.0);
bool _n_inside_5541=(_n_e_5531<0.0);
double _n_units_5542=(d::truth(_n_inside_5541)?((1.2+((4.8*_n_tall_5540)*_n_tall_5540))+(d::truth((_n_tall_5540>0.93))?4.0:0.0)):(0.8+((3.0*_n_tall_5540)*_n_tall_5540)));
(void)(([&](){auto&& _n_array_5716=this->_n_lot_5377;auto _n_index_5717=_n_k_5529;auto _n_value_5718=_n_id_5539;d::put(_n_array_5716,_n_index_5717,_n_value_5718);return _n_value_5718;})());
(void)(([&](){auto&& _n_array_5719=this->_n_hgt_5376;auto _n_index_5720=_n_k_5529;auto _n_value_5721=((_n_units_5542*0.75)*_n_s_5526);d::put(_n_array_5719,_n_index_5720,_n_value_5721);return _n_value_5721;})());
}}
}}
{double _n_x_5543=0.0;
for(;d::truth((_n_x_5543<_n_W_5306));(void)((_n_x_5543++))){d::check_cancel();double _n_rows_5544=99.0;
{double _n_y_5545=0.0;
for(;d::truth((_n_y_5545<_n_H_5307));(void)((_n_y_5545++))){d::check_cancel();double _n_k_5546=((_n_y_5545*_n_W_5306)+_n_x_5543);
if((d::truth((d::at(this->_n_key_5373,_n_k_5546)>0.35))||d::truth(([&]()->bool{auto _n_logical_5722=(d::at(this->_n_edge_5375,_n_k_5546)>(-d::number(this->_n_RING_5369)));return d::truth(_n_logical_5722)?(d::at(this->_n_edge_5375,_n_k_5546)<0.4):_n_logical_5722;})()))){d::check_cancel();(void)((_n_rows_5544=0.0));
}else {d::check_cancel();(void)((_n_rows_5544++));
}
if(d::truth((d::at(this->_n_hgt_5376,_n_k_5546)>(_n_rows_5544-0.6)))){d::check_cancel();(void)(([&](){auto&& _n_array_5723=this->_n_hgt_5376;auto _n_index_5724=_n_k_5546;auto _n_value_5725=d::maximum({0.0,(_n_rows_5544-0.6)});d::put(_n_array_5723,_n_index_5724,_n_value_5725);return _n_value_5725;})());
}
}}
}}
this->_n_glow_5378=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_tmp_5379=d::Array<float,true>(size_t(this->_n_N_5330));
(void)(this->_n_glow_5378.set(this->_n_key_5373));
{double _n_pass_5547=0.0;
for(;d::truth((_n_pass_5547<3.0));(void)((_n_pass_5547++))){d::check_cancel();{double _n_y_5548=0.0;
for(;d::truth((_n_y_5548<_n_H_5307));(void)((_n_y_5548++))){d::check_cancel();{double _n_x_5549=0.0;
for(;d::truth((_n_x_5549<_n_W_5306));(void)((_n_x_5549++))){d::check_cancel();double _n_s_5550=0.0;
{double _n_d_5551=(-d::number(3.0));
for(;d::truth((_n_d_5551<=3.0));(void)((_n_d_5551++))){d::check_cancel();(void)((_n_s_5550=(_n_s_5550+d::at(this->_n_glow_5378,((_n_y_5548*_n_W_5306)+([&](){auto _n_argument_5726=(_n_W_5306-1.0);auto _n_argument_5727=d::maximum({0.0,(_n_x_5549+_n_d_5551)});return d::minimum({_n_argument_5726,_n_argument_5727});})())))));
}}
(void)(([&](){auto&& _n_array_5728=this->_n_tmp_5379;auto _n_index_5729=((_n_y_5548*_n_W_5306)+_n_x_5549);auto _n_value_5730=(_n_s_5550/7.0);d::put(_n_array_5728,_n_index_5729,_n_value_5730);return _n_value_5730;})());
}}
}}
{double _n_y_5552=0.0;
for(;d::truth((_n_y_5552<_n_H_5307));(void)((_n_y_5552++))){d::check_cancel();{double _n_x_5553=0.0;
for(;d::truth((_n_x_5553<_n_W_5306));(void)((_n_x_5553++))){d::check_cancel();double _n_s_5554=0.0;
{double _n_d_5555=(-d::number(2.0));
for(;d::truth((_n_d_5555<=2.0));(void)((_n_d_5555++))){d::check_cancel();(void)((_n_s_5554=(_n_s_5554+d::at(this->_n_tmp_5379,((([&](){auto _n_argument_5731=(_n_H_5307-1.0);auto _n_argument_5732=d::maximum({0.0,(_n_y_5552+_n_d_5555)});return d::minimum({_n_argument_5731,_n_argument_5732});})()*_n_W_5306)+_n_x_5553)))));
}}
(void)(([&](){auto&& _n_array_5733=this->_n_glow_5378;auto _n_index_5734=((_n_y_5552*_n_W_5306)+_n_x_5553);auto _n_value_5735=(_n_s_5554/5.0);d::put(_n_array_5733,_n_index_5734,_n_value_5735);return _n_value_5735;})());
}}
}}
}}
this->_n_baseR_5380=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_baseG_5381=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_baseB_5382=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_floors_5383=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_inks_5384=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_road_5385=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_rP_5386=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_rL_5387=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_water_5388=d::Array<float,true>(size_t(this->_n_N_5330));
this->_n_blink_5389=d::Array<float,true>(size_t(this->_n_N_5330));
{double _n_y_5556=0.0;
for(;d::truth((_n_y_5556<_n_H_5307));(void)((_n_y_5556++))){d::check_cancel();double _n_s_5557=_n_scaleAt_5327((_n_y_5556+0.5));
double _n_far_5558=(_n_smooth_5325(26.0,0.0,_n_y_5556)*0.8);
{double _n_x_5559=0.0;
for(;d::truth((_n_x_5559<_n_W_5306));(void)((_n_x_5559++))){d::check_cancel();double _n_k_5560=((_n_y_5556*_n_W_5306)+_n_x_5559);
double _n_hit_5561=0.0;
double _n_at_5562=_n_k_5560;
{double _n_d_5563=_n_DMAX_5317;
for(;d::truth((_n_d_5563>=1.0));(void)((_n_d_5563--))){d::check_cancel();if(d::truth(((_n_y_5556+_n_d_5563)>=_n_H_5307))){d::check_cancel();continue;
}
double _n_j_5564=(((_n_y_5556+_n_d_5563)*_n_W_5306)+_n_x_5559);
if(d::truth((d::at(this->_n_hgt_5376,_n_j_5564)>=_n_d_5563))){d::check_cancel();(void)((_n_hit_5561=_n_d_5563));
(void)((_n_at_5562=_n_j_5564));
break;
}
}}
double _n_cr_5565=0.0;
double _n_cg_5566=0.0;
double _n_cb_5567=0.0;
double _n_floor_5568=0.0;
double _n_ink_5569=1.0;
double _n_warm_5570=((d::truth((d::at(this->_n_key_5373,_n_k_5560)>0.08))&&d::truth((!d::truth(_n_hit_5561))))?0.0:(d::at(this->_n_glow_5378,_n_k_5560)*0.22));
double _n_dim_5571=(0.25+(0.75*d::at(this->_n_sq_5374,_n_at_5562)));
if(d::truth(_n_hit_5561)){d::check_cancel();double _n_id_5572=d::at(this->_n_lot_5377,_n_at_5562);
bool _n_face_5573=((d::at(this->_n_hgt_5376,_n_at_5562)-_n_hit_5561)>=1.0);
if(d::truth(_n_face_5573)){d::check_cancel();double _n_z_5574=d::round(_n_hit_5561);
double _n_lit_5575=_n_hash_5321(((_n_id_5572*31.0)+_n_x_5559),((_n_z_5574*7.0)+3.0));
bool _n_on_5576=([&]()->bool{auto _n_logical_5736=(d::mod((_n_x_5559+double(d::i32(_n_id_5572)&d::i32(1.0))),2.0)==0.0);return d::truth(_n_logical_5736)?(_n_lit_5575>(0.5-(0.2*d::at(this->_n_sq_5374,_n_at_5562)))):_n_logical_5736;})();
(void)((((_n_cr_5565=0.03),(_n_cg_5566=0.03)),(_n_cb_5567=0.035)));
(void)((_n_ink_5569=0.45));
if(d::truth(_n_on_5576)){d::check_cancel();double _n_b_5577=((0.42+(0.4*_n_hash_5321(((_n_x_5559*3.0)+_n_id_5572),_n_z_5574)))*_n_dim_5571);
bool _n_cool_5578=(_n_hash_5321(_n_id_5572,9.0)>0.55);
(void)((((_n_cr_5565=(_n_cr_5565+(_n_b_5577*(d::truth(_n_cool_5578)?0.84:1.0)))),(_n_cg_5566=(_n_cg_5566+(_n_b_5577*(d::truth(_n_cool_5578)?0.88:0.84))))),(_n_cb_5567=(_n_cb_5567+(_n_b_5577*(d::truth(_n_cool_5578)?1.0:0.6))))));
(void)((_n_ink_5569=(0.7+(0.3*d::at(this->_n_sq_5374,_n_at_5562)))));
if(d::truth((_n_hash_5321((_n_x_5559+(_n_id_5572*5.0)),(_n_z_5574*13.0))>0.9))){d::check_cancel();(void)(([&](){auto&& _n_array_5737=this->_n_blink_5389;auto _n_index_5738=_n_k_5560;auto _n_value_5739=1.0;d::put(_n_array_5737,_n_index_5738,_n_value_5739);return _n_value_5739;})());
}
}
}else {d::check_cancel();double _n_tone_5579=([&](){auto _n_left_5740=((0.17+(0.15*_n_hash_5321(_n_id_5572,4.0)))*_n_dim_5571);auto _n_right_5741=(0.8+(0.2*d::minimum({1.0,(d::at(this->_n_hgt_5376,_n_at_5562)/3.0)})));return (_n_left_5740*_n_right_5741);})();
(void)((((_n_cr_5565=_n_tone_5579),(_n_cg_5566=_n_tone_5579)),(_n_cb_5567=(_n_tone_5579*1.06))));
(void)((_n_ink_5569=(0.42+(0.18*_n_hash_5321(_n_id_5572,5.0)))));
if((d::truth((_n_hash_5321(_n_id_5572,11.0)>0.88))&&d::truth((_n_hash_5321(_n_x_5559,(_n_y_5556+_n_id_5572))>0.8)))){d::check_cancel();(void)(((((_n_cr_5565=(0.8*_n_dim_5571)),(_n_cg_5566=(0.8*_n_dim_5571))),(_n_cb_5567=(0.86*_n_dim_5571))),(_n_ink_5569=1.0)));
}
}
}else {d::check_cancel();if(((d::truth((d::at(this->_n_key_5373,_n_k_5560)<0.08))&&d::truth((d::at(this->_n_edge_5375,_n_k_5560)>(-d::number(this->_n_RING_5369)))))&&d::truth((d::at(this->_n_edge_5375,_n_k_5560)<0.4)))){d::check_cancel();double _n_lamp_5580=(d::truth((d::mod((d::mod((d::at(this->_n_gU_5371,_n_k_5560)+d::at(this->_n_gV_5372,_n_k_5560)),4.0)+4.0),4.0)<1.2))?1.0:0.0);
double _n_b_5581=(0.55+(0.45*_n_lamp_5580));
(void)((((_n_cr_5565=(_n_b_5581*0.92)),(_n_cg_5566=(_n_b_5581*0.94))),(_n_cb_5567=_n_b_5581)));
(void)((_n_ink_5569=(0.8+(0.2*_n_lamp_5580))));
(void)((_n_floor_5568=0.3));
}else {d::check_cancel();if(((d::truth((d::at(this->_n_key_5373,_n_k_5560)<0.08))&&d::truth((d::at(this->_n_edge_5375,_n_k_5560)>=0.4)))&&d::truth((d::at(this->_n_edge_5375,_n_k_5560)<this->_n_CANAL_5370)))){d::check_cancel();(void)((((_n_cr_5565=0.008),(_n_cg_5566=0.01)),(_n_cb_5567=0.014)));
(void)(([&](){auto&& _n_array_5742=this->_n_water_5388;auto _n_index_5743=_n_k_5560;auto _n_value_5744=(0.12+(0.8*std::exp(((-d::number((d::at(this->_n_edge_5375,_n_k_5560)-0.4)))/1.6))));d::put(_n_array_5742,_n_index_5743,_n_value_5744);return _n_value_5744;})());
if((d::truth((d::at(this->_n_edge_5375,_n_k_5560)>(this->_n_CANAL_5370-0.9)))&&d::truth((([&](){auto _n_argument_5745=d::round((d::at(this->_n_gU_5371,_n_k_5560)/3.0));auto _n_argument_5746=d::round((d::at(this->_n_gV_5372,_n_k_5560)/3.0));return _n_hash_5321(_n_argument_5745,_n_argument_5746);})()>0.5)))){d::check_cancel();(void)((((_n_cr_5565=0.7),(_n_cg_5566=0.52)),(_n_cb_5567=0.3)));
}
}else {d::check_cancel();if(d::truth((d::at(this->_n_key_5373,_n_k_5560)>0.08))){d::check_cancel();double _n_kk_5582=d::at(this->_n_key_5373,_n_k_5560);
auto _n_binding_5747=this->_n_route_5358(d::at(this->_n_gU_5371,_n_k_5560),d::at(this->_n_gV_5372,_n_k_5560));
double _n_p_5583=d::at(_n_binding_5747,0.0);
double _n_l_5584=d::at(_n_binding_5747,1.0);
(void)((([&](){auto&& _n_array_5748=this->_n_rP_5386;auto _n_index_5749=_n_k_5560;auto _n_value_5750=_n_p_5583;d::put(_n_array_5748,_n_index_5749,_n_value_5750);return _n_value_5750;})(),([&](){auto&& _n_array_5751=this->_n_rL_5387;auto _n_index_5752=_n_k_5560;auto _n_value_5753=_n_l_5584;d::put(_n_array_5751,_n_index_5752,_n_value_5753);return _n_value_5753;})()));
(void)(([&](){auto&& _n_array_5754=this->_n_road_5385;auto _n_index_5755=_n_k_5560;auto _n_value_5756=_n_kk_5582;d::put(_n_array_5754,_n_index_5755,_n_value_5756);return _n_value_5756;})());
double _n_kerb_5585=_n_smooth_5325(0.95,0.55,_n_kk_5582);
double _n_lamp_5586=(_n_kerb_5585*(d::truth((d::mod((d::mod(_n_p_5583,4.0)+4.0),4.0)<1.4))?1.0:0.55));
double _n_b_5587=((0.4+(0.6*_n_lamp_5586))*_n_smooth_5325(0.08,0.45,_n_kk_5582));
(void)((((_n_cr_5565=_n_b_5587),(_n_cg_5566=(_n_b_5587*0.66))),(_n_cb_5567=(_n_b_5587*0.32))));
(void)((_n_floor_5568=(0.55*_n_smooth_5325(0.1,0.5,_n_kk_5582))));
}else {d::check_cancel();double _n_u_5588=d::at(this->_n_gU_5371,_n_k_5560);
double _n_v_5589=d::at(this->_n_gV_5372,_n_k_5560);
double _n_fu_5590=d::mod((d::mod(_n_u_5588,this->_n_BLK_5367)+this->_n_BLK_5367),this->_n_BLK_5367);
double _n_fv_5591=d::mod((d::mod(_n_v_5589,this->_n_BLK_5367)+this->_n_BLK_5367),this->_n_BLK_5367);
bool _n_street_5592=([&]()->bool{auto _n_logical_5757=(_n_fu_5590<this->_n_ST_5368);return d::truth(_n_logical_5757)?_n_logical_5757:(_n_fv_5591<this->_n_ST_5368);})();
double _n_base_5593=((d::truth(_n_street_5592)?0.05:0.02)*_n_dim_5571);
(void)((((_n_cr_5565=_n_base_5593),(_n_cg_5566=_n_base_5593)),(_n_cb_5567=(_n_base_5593*1.1))));
(void)((_n_ink_5569=0.5));
if(((d::truth((_n_fu_5590<this->_n_ST_5368))&&d::truth((_n_fv_5591<this->_n_ST_5368)))&&d::truth((([&](){auto _n_argument_5758=std::floor((_n_u_5588/this->_n_BLK_5367));auto _n_argument_5759=std::floor((_n_v_5589/this->_n_BLK_5367));return _n_hash_5321(_n_argument_5758,_n_argument_5759);})()>0.3)))){d::check_cancel();(void)(((((_n_cr_5565=(0.8*_n_dim_5571)),(_n_cg_5566=(0.6*_n_dim_5571))),(_n_cb_5567=(0.34*_n_dim_5571))),(_n_ink_5569=1.0)));
}
}
}
}
}
(void)((((_n_cr_5565=(_n_cr_5565+(_n_warm_5570*0.9))),(_n_cg_5566=(_n_cg_5566+(_n_warm_5570*0.6)))),(_n_cb_5567=(_n_cb_5567+(_n_warm_5570*0.3)))));
if(d::truth((_n_warm_5570>0.02))){d::check_cancel();(void)((_n_ink_5569=d::minimum({1.0,(_n_ink_5569+(_n_warm_5570*2.0))})));
}
(void)((_n_cr_5565=((_n_cr_5565*(1.0-(0.6*_n_far_5558)))+(0.025*_n_far_5558))));
(void)((_n_cg_5566=((_n_cg_5566*(1.0-(0.6*_n_far_5558)))+(0.025*_n_far_5558))));
(void)((_n_cb_5567=((_n_cb_5567*(1.0-(0.6*_n_far_5558)))+(0.03*_n_far_5558))));
(void)(((([&](){auto&& _n_array_5760=this->_n_baseR_5380;auto _n_index_5761=_n_k_5560;auto _n_value_5762=_n_cr_5565;d::put(_n_array_5760,_n_index_5761,_n_value_5762);return _n_value_5762;})(),([&](){auto&& _n_array_5763=this->_n_baseG_5381;auto _n_index_5764=_n_k_5560;auto _n_value_5765=_n_cg_5566;d::put(_n_array_5763,_n_index_5764,_n_value_5765);return _n_value_5765;})()),([&](){auto&& _n_array_5766=this->_n_baseB_5382;auto _n_index_5767=_n_k_5560;auto _n_value_5768=_n_cb_5567;d::put(_n_array_5766,_n_index_5767,_n_value_5768);return _n_value_5768;})()));
(void)(([&](){auto&& _n_array_5769=this->_n_floors_5383;auto _n_index_5770=_n_k_5560;auto _n_value_5771=(_n_floor_5568*(0.6+(0.4*_n_s_5557)));d::put(_n_array_5769,_n_index_5770,_n_value_5771);return _n_value_5771;})());
(void)(([&](){auto&& _n_array_5772=this->_n_inks_5384;auto _n_index_5773=_n_k_5560;auto _n_value_5774=(_n_ink_5569*(1.0-(0.3*_n_far_5558)));d::put(_n_array_5772,_n_index_5773,_n_value_5774);return _n_value_5774;})());
}}
}}
this->_n_MW_5390=400.0;
this->_n_mist_5391=d::Array<float,true>(size_t((this->_n_MW_5390*_n_H_5307)));
{double _n_y_5594=0.0;
for(;d::truth((_n_y_5594<_n_H_5307));(void)((_n_y_5594++))){d::check_cancel();{double _n_x_5595=0.0;
for(;d::truth((_n_x_5595<this->_n_MW_5390));(void)((_n_x_5595++))){d::check_cancel();double _n_n_5596=_n_fbm_5323((_n_x_5595*0.016),(_n_y_5594*0.055),4.0,(this->_n_MW_5390*0.016));
double _n_band_5597=([&](){auto _n_left_5775=(0.5+(0.5*std::sin(((_n_y_5594*0.09)+0.6))));auto _n_right_5776=(0.45+(0.55*_n_smooth_5325(10.0,60.0,_n_y_5594)));return (_n_left_5775*_n_right_5776);})();
(void)(([&](){auto&& _n_array_5777=this->_n_mist_5391;auto _n_index_5778=((_n_y_5594*this->_n_MW_5390)+_n_x_5595);auto _n_value_5779=(_n_smooth_5325(0.45,0.75,_n_n_5596)*_n_band_5597);d::put(_n_array_5777,_n_index_5778,_n_value_5779);return _n_value_5779;})());
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_5636> _a1) mutable ->d::String{double _n_t_5598=_a0;
auto _n_binding_5782=(d::present(_a1)?_a1:([&](){auto _n_object_5781=std::make_shared<_n_Record_5636>();return _n_object_5781;})());
std::optional<d::Array<uint8_t,true>> _n_color_5599=_n_binding_5782->_p_color;
{
double _n_drift_5600=(_n_t_5598*2.2);
{double _n_y_5601=0.0;
for(;d::truth((_n_y_5601<_n_H_5307));(void)((_n_y_5601++))){d::check_cancel();{double _n_x_5602=0.0;
for(;d::truth((_n_x_5602<_n_W_5306));(void)((_n_x_5602++))){d::check_cancel();double _n_k_5603=((_n_y_5601*_n_W_5306)+_n_x_5602);
double _n_cr_5604=d::at(this->_n_baseR_5380,_n_k_5603);
double _n_cg_5605=d::at(this->_n_baseG_5381,_n_k_5603);
double _n_cb_5606=d::at(this->_n_baseB_5382,_n_k_5603);
double _n_floor_5607=d::at(this->_n_floors_5383,_n_k_5603);
double _n_ink_5608=d::at(this->_n_inks_5384,_n_k_5603);
double _n_rd_5609=d::at(this->_n_road_5385,_n_k_5603);
if(d::truth((_n_rd_5609>0.3))){d::check_cancel();double _n_l_5610=d::at(this->_n_rL_5387,_n_k_5603);
double _n_dir_5611=(d::truth((_n_l_5610>0.0))?1.0:(-d::number(1.0)));
double _n_lane_5612=std::floor((std::fabs(_n_l_5610)/1.3));
double _n_off_5613=(_n_hash_5321(_n_lane_5612,(_n_dir_5611+5.0))*40.0);
double _n_sp_5614=(7.0+(3.0*_n_hash_5321(_n_lane_5612,(_n_dir_5611+9.0))));
double _n_ph_5615=d::mod((d::mod(((d::at(this->_n_rP_5386,_n_k_5603)-((_n_dir_5611*_n_t_5598)*_n_sp_5614))+_n_off_5613),13.0)+13.0),13.0);
double _n_len_5616=7.0;
if(d::truth((_n_ph_5615<_n_len_5616))){d::check_cancel();double _n_a_5617=(d::truth((_n_dir_5611>0.0))?(_n_ph_5615/_n_len_5616):(1.0-(_n_ph_5615/_n_len_5616)));
double _n_b_5618=([&](){auto _n_left_5783=d::minimum({1.0,((_n_a_5617*_n_a_5617)*1.3)});auto _n_right_5784=_n_smooth_5325(0.3,0.75,_n_rd_5609);return (_n_left_5783*_n_right_5784);})();
if(d::truth((_n_dir_5611>0.0))){d::check_cancel();(void)((((_n_cr_5604=(_n_cr_5604+((1.0-_n_cr_5604)*_n_b_5618))),(_n_cg_5605=(_n_cg_5605+((0.97-_n_cg_5605)*_n_b_5618)))),(_n_cb_5606=(_n_cb_5606+((0.9-_n_cb_5606)*_n_b_5618)))));
}else {d::check_cancel();(void)((((_n_cr_5604=(_n_cr_5604+((1.0-_n_cr_5604)*_n_b_5618))),(_n_cg_5605=(_n_cg_5605+((0.34-_n_cg_5605)*_n_b_5618)))),(_n_cb_5606=(_n_cb_5606+((0.2-_n_cb_5606)*_n_b_5618)))));
}
}
}
if(d::truth((d::at(this->_n_water_5388,_n_k_5603)>0.0))){d::check_cancel();double _n_w_5619=_n_noise_5322(((d::at(this->_n_gU_5371,_n_k_5603)*0.45)+(_n_t_5598*0.3)),((d::at(this->_n_gV_5372,_n_k_5603)*1.2)-(_n_t_5598*0.8)),0.0);
double _n_sh_5620=((_n_smooth_5325(0.58,0.85,_n_w_5619)*d::at(this->_n_water_5388,_n_k_5603))*0.75);
(void)((((_n_cr_5604=(_n_cr_5604+(_n_sh_5620*0.9))),(_n_cg_5605=(_n_cg_5605+(_n_sh_5620*0.88)))),(_n_cb_5606=(_n_cb_5606+(_n_sh_5620*0.84)))));
}
if(d::truth(d::at(this->_n_blink_5389,_n_k_5603))){d::check_cancel();double _n_on_5621=(d::truth((std::sin((((_n_t_5598*0.7)+(_n_x_5602*1.7))+(_n_y_5601*0.9)))>(-d::number(0.2))))?1.0:0.15);
(void)((((_n_cr_5604=(_n_cr_5604*_n_on_5621)),(_n_cg_5605=(_n_cg_5605*_n_on_5621))),(_n_cb_5606=(_n_cb_5606*_n_on_5621))));
}
double _n_sx_5622=(_n_x_5602+_n_drift_5600);
double _n_ix_5623=std::floor(_n_sx_5622);
double _n_fx_5624=(_n_sx_5622-_n_ix_5623);
double _n_m0_5625=d::at(this->_n_mist_5391,((_n_y_5601*this->_n_MW_5390)+d::mod(_n_ix_5623,this->_n_MW_5390)));
double _n_m1_5626=d::at(this->_n_mist_5391,((_n_y_5601*this->_n_MW_5390)+d::mod((_n_ix_5623+1.0),this->_n_MW_5390)));
double _n_m_5627=((_n_m0_5625+((_n_m1_5626-_n_m0_5625)*_n_fx_5624))*(0.36-(0.18*d::at(this->_n_road_5385,_n_k_5603))));
if(d::truth((_n_m_5627>0.005))){d::check_cancel();double _n_lit_5628=(0.2+(d::at(this->_n_glow_5378,_n_k_5603)*0.6));
(void)((((_n_cr_5604=((_n_cr_5604*(1.0-_n_m_5627))+(_n_m_5627*(_n_lit_5628+0.1)))),(_n_cg_5605=((_n_cg_5605*(1.0-_n_m_5627))+(_n_m_5627*((_n_lit_5628*0.85)+0.1))))),(_n_cb_5606=((_n_cb_5606*(1.0-_n_m_5627))+(_n_m_5627*((_n_lit_5628*0.7)+0.11))))));
(void)((_n_floor_5607=(_n_floor_5607+(_n_m_5627*0.3))));
(void)((_n_ink_5608=(_n_ink_5608+(((0.6-_n_ink_5608)*_n_m_5627)*1.5))));
}
double _n_peak_5629=d::maximum({_n_cr_5604,_n_cg_5605,_n_cb_5606,0.0001});
double _n_level_5630=_n_clamp_5324((_n_floor_5607+(((1.0-_n_floor_5607)*std::pow(_n_peak_5629,0.85))*0.95)));
double _n_step_5631=([&](){auto _n_argument_5785=0.0;auto _n_argument_5786=([&](){auto _n_argument_5787=3.0;auto _n_argument_5788=d::round(((_n_level_5630*3.0)+d::at(_n_BAYER_5310,((double(d::i32(_n_y_5601)&d::i32(3.0))*4.0)+double(d::i32(_n_x_5602)&d::i32(3.0))))));return d::minimum({_n_argument_5787,_n_argument_5788});})();return d::maximum({_n_argument_5785,_n_argument_5786});})();
(void)(([&](){auto&& _n_array_5789=this->_n_out_5331;auto _n_index_5790=_n_k_5603;auto _n_value_5791=d::at(_n_DOTS_5308,_n_step_5631);d::put(_n_array_5789,_n_index_5790,_n_value_5791);return _n_value_5791;})());
if(d::truth(_n_color_5599)){d::check_cancel();double _n_want_5632=(d::truth(_n_step_5631)?d::minimum({1.0,((_n_level_5630+0.06)/d::at(_n_COVER_5309,_n_step_5631))}):0.0);
double _n_s_5633=(((0.3+(0.7*_n_want_5632))/_n_peak_5629)*_n_ink_5608);
(void)(([&](){auto&& _n_array_5792=d::read(_n_color_5599);auto _n_index_5793=_n_k_5603;auto _n_value_5794=([&](){auto _n_argument_5795=_n_clamp_5324((_n_cr_5604*_n_s_5633));auto _n_argument_5796=_n_clamp_5324((_n_cg_5605*_n_s_5633));auto _n_argument_5797=_n_clamp_5324((_n_cb_5606*_n_s_5633));return this->_n_nearest_5333(_n_argument_5795,_n_argument_5796,_n_argument_5797);})();d::put(_n_array_5792,_n_index_5793,_n_value_5794);return _n_value_5794;})());
}
}}
}}
d::Array<d::String,false> _n_lines_5634=d::Array<d::String,false>{};
{double _n_r_5635=0.0;
for(;d::truth((_n_r_5635<_n_H_5307));(void)((_n_r_5635++))){d::check_cancel();(void)(_n_lines_5634.push(d::join(this->_n_out_5331.slice((_n_r_5635*_n_W_5306),((_n_r_5635+1.0)*_n_W_5306)),d::String(u""))));
}}
return d::join(_n_lines_5634,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("command-city").cols)*ascii::catalog_meta("command-city").rows);auto _env=std::make_shared<_n_Record_5636>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &command_city_meta(){return catalog_meta("command-city");}
std::unique_ptr<Piece> make_command_city(const AsciiPieceOptions &o){return std::make_unique<Native_command_city>(o);}
}
