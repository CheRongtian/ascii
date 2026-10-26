// Direct, statically typed C++ from src/pieces/jungle-falls.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_15067;
struct _n_Record_15363;
struct _n_Record_15067{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
double _p_still{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_15067> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15067>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_still=d::decode<double>(j["still"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_15363{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_15363> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15363>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_15088(double _a0,double _a1);
double _n_noise_15089(double _a0,double _a1,double _a2);
double _n_fbm_15090(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_15091(double _a0);
double _n_smooth_15092(double _a0,double _a1,double _a2);
double _n_mix_15093(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_15094(d::String _a0);
std::shared_ptr<_n_Record_15067> _n_meta_15066=[](){return ([&](){auto _n_object_15366=std::make_shared<_n_Record_15067>();_n_object_15366->_p_name=d::String(u"jungle falls");_n_object_15366->_p_category=d::String(u"scenes");_n_object_15366->_p_note=d::String(u"a tiered waterfall in a rainforest gorge, spray, a rainbow and macaws");_n_object_15366->_p_cols=200.0;_n_object_15366->_p_rows=100.0;_n_object_15366->_p_cell=1.0;_n_object_15366->_p_fps=15.0;_n_object_15366->_p_ground=d::String(u"#07130d");_n_object_15366->_p_still=6.0;_n_object_15366->_p_palette=d::Array<d::String,false>{d::String(u"#0d2616"),d::String(u"#173d1f"),d::String(u"#225a26"),d::String(u"#2f7a2c"),d::String(u"#45983a"),d::String(u"#6bb544"),d::String(u"#9ccf55"),d::String(u"#c9e27a"),d::String(u"#2a3436"),d::String(u"#465256"),d::String(u"#6c7676"),d::String(u"#9aa29c"),d::String(u"#f7fcfc"),d::String(u"#d6eef0"),d::String(u"#a8dcdf"),d::String(u"#6cc5c6"),d::String(u"#35aeb0"),d::String(u"#1d8b92"),d::String(u"#11636c"),d::String(u"#c9e6ef"),d::String(u"#93c9e2"),d::String(u"#fff1c2"),d::String(u"#f2cf6b"),d::String(u"#e5483b"),d::String(u"#f08c34"),d::String(u"#3d84d6"),d::String(u"#8b6bd0"),d::String(u"#a92d25"),d::String(u"#5b8f7a"),d::String(u"#8fb8a0"),d::String(u"#5e4a36")};return _n_object_15366;})();}();
const double _n_W_15068=[](){return 200.0;}();
const double _n_H_15069=[](){return 100.0;}();
const double _n_POOL_15070=[](){return 80.0;}();
const double _n_LEDGE_15071=[](){return 50.0;}();
const double _n_BASE_X_15072=[](){return 101.0;}();
d::Array<double,false> _n_RAIN_15073=[](){return d::Array<double,false>{118.0,116.0,56.0};}();
d::Array<double,false> _n_SUN_15074=[](){return d::Array<double,false>{30.0,(-d::number(40.0))};}();
const double _n_LOOP_15075=[](){return 16.0;}();
const d::String _n_DOTS_15076=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_15077=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_15078=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_15121=_a0;
return ((_n_v_15121/16.0)-0.47);});}();
const double _n_SKY_15079=[](){return 0.0;}();
const double _n_CANOPY_15080=[](){return 1.0;}();
const double _n_ROCK_15081=[](){return 2.0;}();
const double _n_FALL_15082=[](){return 3.0;}();
const double _n_WATER_15083=[](){return 4.0;}();
const double _n_LEAF_15084=[](){return 5.0;}();
const double _n_TRUNK_15085=[](){return 6.0;}();
const double _n_VINE_15086=[](){return 7.0;}();
d::Array<std::array<double,6>,false> _n_FALLS_15087=[](){return d::Array<std::array<double,6>,false>{std::array<double,6>{0.0,(_n_LEDGE_15071-1.0),100.0,100.5,7.0,9.5},std::array<double,6>{(_n_LEDGE_15071+1.0),(_n_POOL_15070+1.0),101.0,101.0,14.0,20.0},std::array<double,6>{31.0,(_n_POOL_15070+1.0),131.0,134.0,1.6,3.0},std::array<double,6>{37.0,(_n_POOL_15070+1.0),71.0,69.0,1.2,2.4}};}();
d::Array<d::Array<double,false>,false> _n_BOW_15095=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.55,0.42,0.82},d::Array<double,false>{0.24,0.52,0.84},d::Array<double,false>{0.42,0.74,0.34},d::Array<double,false>{0.95,0.82,0.38},d::Array<double,false>{0.94,0.55,0.2},d::Array<double,false>{0.9,0.28,0.23}};}();
double _n_hash_15088(double _a0,double _a1){double _n_x_15122=_a0;
double _n_y_15123=_a1;
{
double _n_h_15124=([&](){auto _n_left_15367=d::imul(double(d::i32(_n_x_15122)|d::i32(0.0)),374761393.0);auto _n_right_15368=d::imul(double(d::i32(_n_y_15123)|d::i32(0.0)),668265263.0);return (_n_left_15367+_n_right_15368);})();
(void)((_n_h_15124=d::imul(double(d::i32(_n_h_15124)^d::i32(double(d::u32(_n_h_15124)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_15124)^d::i32(double(d::u32(_n_h_15124)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_15089(double _a0,double _a1,double _a2){double _n_x_15125=_a0;
double _n_y_15126=_a1;
double _n_period_15127=_a2;
{
double _n_xi_15128=std::floor(_n_x_15125);
double _n_yi_15129=std::floor(_n_y_15126);
double _n_fx_15130=(_n_x_15125-_n_xi_15128);
double _n_fy_15131=(_n_y_15126-_n_yi_15129);
double _n_u_15132=((_n_fx_15130*_n_fx_15130)*(3.0-(2.0*_n_fx_15130)));
double _n_v_15133=((_n_fy_15131*_n_fy_15131)*(3.0-(2.0*_n_fy_15131)));
double _n_x0_15134=_n_xi_15128;
double _n_x1_15135=(_n_xi_15128+1.0);
if(d::truth(_n_period_15127)){d::check_cancel();(void)((_n_x0_15134=d::mod((d::mod(_n_xi_15128,_n_period_15127)+_n_period_15127),_n_period_15127)));
(void)((_n_x1_15135=d::mod((_n_x0_15134+1.0),_n_period_15127)));
}
double _n_a_15136=_n_hash_15088(_n_x0_15134,_n_yi_15129);
double _n_b_15137=_n_hash_15088(_n_x1_15135,_n_yi_15129);
double _n_c_15138=_n_hash_15088(_n_x0_15134,(_n_yi_15129+1.0));
double _n_d_15139=_n_hash_15088(_n_x1_15135,(_n_yi_15129+1.0));
return (((_n_a_15136+((_n_b_15137-_n_a_15136)*_n_u_15132))+((_n_c_15138-_n_a_15136)*_n_v_15133))+(((((_n_a_15136-_n_b_15137)-_n_c_15138)+_n_d_15139)*_n_u_15132)*_n_v_15133));

}
}

double _n_fbm_15090(double _a0,double _a1,double _a2,double _a3){double _n_x_15140=_a0;
double _n_y_15141=_a1;
double _n_octaves_15142=_a2;
double _n_period_15143=_a3;
{
double _n_s_15144=0.0;
double _n_n_15145=0.0;
double _n_amp_15146=0.5;
double _n_f_15147=1.0;
{double _n_i_15148=0.0;
for(;d::truth((_n_i_15148<_n_octaves_15142));(void)((_n_i_15148++))){d::check_cancel();(void)((_n_s_15144=(_n_s_15144+(_n_amp_15146*_n_noise_15089((_n_x_15140*_n_f_15147),(_n_y_15141*_n_f_15147),(_n_period_15143*_n_f_15147))))));
(void)((_n_n_15145=(_n_n_15145+_n_amp_15146)));
(void)((_n_amp_15146=(_n_amp_15146*0.5)));
(void)((_n_f_15147=(_n_f_15147*2.0)));
}}
return (_n_s_15144/_n_n_15145);

}
}

double _n_clamp_15091(double _a0){double _n_v_15149=_a0;
return (d::truth((_n_v_15149<0.0))?0.0:(d::truth((_n_v_15149>1.0))?1.0:_n_v_15149));}

double _n_smooth_15092(double _a0,double _a1,double _a2){double _n_a_15150=_a0;
double _n_b_15151=_a1;
double _n_v_15152=_a2;
{
double _n_k_15153=_n_clamp_15091(((_n_v_15152-_n_a_15150)/(_n_b_15151-_n_a_15150)));
return ((_n_k_15153*_n_k_15153)*(3.0-(2.0*_n_k_15153)));

}
}

double _n_mix_15093(double _a0,double _a1,double _a2){double _n_a_15154=_a0;
double _n_b_15155=_a1;
double _n_k_15156=_a2;
return (_n_a_15154+((_n_b_15155-_n_a_15154)*_n_k_15156));}

d::Array<double,false> _n_hex_15094(d::String _a0){d::String _n_s_15157=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_15158=_a0;
return (([&](){auto _n_argument_15369=d::slice(_n_s_15157,_n_i_15158,(_n_i_15158+2.0));auto _n_argument_15370=16.0;return d::parseInt(_n_argument_15369,_n_argument_15370);})()/255.0);});}

struct Native_jungle_falls final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_15096{};
double _n_N_15097{};
d::Array<d::String,false> _n_out_15098{};
d::Array<uint8_t,true> _n_lut_15099{};
d::Array<uint8_t,true> _n_mat_15101{};
d::Array<float,true> _n_shade_15102{};
d::Array<uint8_t,true> _n_depth_15103{};
d::Array<float,true> _n_moss_15104{};
d::Array<float,true> _n_wet_15105{};
d::Array<float,true> _n_fallU_15106{};
d::Array<float,true> _n_fallV_15107{};
d::Array<float,true> _n_spray_15108{};
d::Array<d::Array<double,false>,false> _n_ferns_15116{};
d::Array<d::Array<double,false>,false> _n_vines_15117{};
d::Array<float,true> _n_haze_15118{};
d::Array<uint8_t,true> _n_vine_15119{};
d::Array<float,true> _n_shafts_15120{};
std::function<d::String(double,std::shared_ptr<_n_Record_15363>)> _render;
double _n_nearest_15100(double _a0,double _a1,double _a2){double _n_r_15159=_a0;
double _n_g_15160=_a1;
double _n_b_15161=_a2;
{
double _n_k_15162=([&](){auto _n_left_15542=([&](){auto _n_left_15544=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_15159*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_15545=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_15160*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_15544)|d::i32(_n_right_15545));})();auto _n_right_15543=d::minimum({31.0,double(d::i32((_n_b_15161*31.99))|d::i32(0.0))});return double(d::i32(_n_left_15542)|d::i32(_n_right_15543));})();
if(d::truth((d::at(this->_n_lut_15099,_n_k_15162)!=255.0))){d::check_cancel();return d::at(this->_n_lut_15099,_n_k_15162);
}
double _n_best_15163=0.0;
double _n_bd_15164=1000000000.0;
{double _n_i_15165=0.0;
for(;d::truth((_n_i_15165<double(this->_n_P_15096.size())));(void)((_n_i_15165++))){d::check_cancel();double _n_dr_15166=(d::at(d::at(this->_n_P_15096,_n_i_15165),0.0)-_n_r_15159);
double _n_dg_15167=(d::at(d::at(this->_n_P_15096,_n_i_15165),1.0)-_n_g_15160);
double _n_db_15168=(d::at(d::at(this->_n_P_15096,_n_i_15165),2.0)-_n_b_15161);
double _n_d_15169=((((0.3*_n_dr_15166)*_n_dr_15166)+((0.5*_n_dg_15167)*_n_dg_15167))+((0.2*_n_db_15168)*_n_db_15168));
if(d::truth((_n_d_15169<_n_bd_15164))){d::check_cancel();(void)(((_n_bd_15164=_n_d_15169),(_n_best_15163=_n_i_15165)));
}
}}
return ([&](){auto&& _n_array_15546=this->_n_lut_15099;auto _n_index_15547=_n_k_15162;auto _n_value_15548=_n_best_15163;d::put(_n_array_15546,_n_index_15547,_n_value_15548);return _n_value_15548;})();

}
}

double _n_ctop_15109(double _a0){double _n_x_15170=_a0;
return ([&](){auto _n_left_15549=(17.0+(4.0*_n_fbm_15090((_n_x_15170*0.06),1.3,3.0,0.0)));auto _n_right_15550=(2.5*std::exp((-d::number(std::pow(((_n_x_15170-100.0)/9.0),2.0)))));return (_n_left_15549+_n_right_15550);})();}

double _n_crown_15110(double _a0){double _n_x_15171=_a0;
return ([&](){auto _n_left_15551=(this->_n_ctop_15109(_n_x_15171)-2.0);auto _n_right_15552=(7.0*_n_fbm_15090((_n_x_15171*0.11),5.1,3.0,0.0));return (_n_left_15551-_n_right_15552);})();}

double _n_edge_15111(double _a0,double _a1,double _a2){double _n_y_15172=_a0;
double _n_layer_15173=_a1;
double _n_side_15174=_a2;
{
double _n_s_15175=((_n_layer_15173*7.0)+(_n_side_15174*31.0));
double _n_base_15176=(d::at(d::Array<double,false>{64.0,52.0,36.0},_n_layer_15173)-(_n_side_15174*3.0));
double _n_wob_15177=d::at(d::Array<double,false>{7.0,10.0,14.0},_n_layer_15173);
return ([&](){auto _n_left_15553=(_n_base_15176+(_n_wob_15177*(_n_fbm_15090((_n_y_15172*(0.08+(_n_layer_15173*0.02))),_n_s_15175,3.0,0.0)-0.5)));auto _n_right_15554=(d::at(d::Array<double,false>{16.0,14.0,4.0},_n_layer_15173)*_n_smooth_15092(70.0,98.0,_n_y_15172));return (_n_left_15553-_n_right_15554);})();

}
}

double _n_canopy_15112(double _a0,double _a1,double _a2){double _n_d_15178=_a0;
double _n_layer_15179=_a1;
double _n_side_15180=_a2;
return ([&](){auto _n_left_15555=(d::at(d::Array<double,false>{26.0,28.0,34.0},_n_layer_15179)*_n_smooth_15092(d::at(d::Array<double,false>{0.0,4.0,8.0},_n_layer_15179),d::at(d::Array<double,false>{22.0,26.0,32.0},_n_layer_15179),_n_d_15178));auto _n_right_15556=(8.0*_n_fbm_15090((_n_d_15178*0.14),((40.0+(_n_layer_15179*3.0))+(_n_side_15180*9.0)),3.0,0.0));return (_n_left_15555-_n_right_15556);})();}

void _n_stamp_15113(double _a0,double _a1,double _a2,double _a3){double _n_cx_15210=_a0;
double _n_cy_15211=_a1;
double _n_rad_15212=_a2;
double _n_s_15213=_a3;
{
{double _n_yy_15214=std::floor((_n_cy_15211-_n_rad_15212));
for(;d::truth((_n_yy_15214<=(_n_cy_15211+_n_rad_15212)));(void)((_n_yy_15214++))){d::check_cancel();{double _n_xx_15215=std::floor((_n_cx_15210-_n_rad_15212));
for(;d::truth((_n_xx_15215<=(_n_cx_15210+_n_rad_15212)));(void)((_n_xx_15215++))){d::check_cancel();if((((d::truth((_n_xx_15215<0.0))||d::truth((_n_xx_15215>=_n_W_15068)))||d::truth((_n_yy_15214<0.0)))||d::truth((_n_yy_15214>=_n_H_15069)))){d::check_cancel();continue;
}
if(d::truth(((std::pow(((_n_xx_15215+0.5)-_n_cx_15210),2.0)+std::pow(((_n_yy_15214+0.5)-_n_cy_15211),2.0))>((_n_rad_15212*_n_rad_15212)+0.15)))){d::check_cancel();continue;
}
double _n_k_15216=((_n_yy_15214*_n_W_15068)+_n_xx_15215);
(void)(([&](){auto&& _n_array_15557=this->_n_mat_15101;auto _n_index_15558=_n_k_15216;auto _n_value_15559=_n_LEAF_15084;d::put(_n_array_15557,_n_index_15558,_n_value_15559);return _n_value_15559;})());
(void)(([&](){auto&& _n_array_15560=this->_n_depth_15103;auto _n_index_15561=_n_k_15216;auto _n_value_15562=2.0;d::put(_n_array_15560,_n_index_15561,_n_value_15562);return _n_value_15562;})());
(void)(([&](){auto&& _n_array_15563=this->_n_shade_15102;auto _n_index_15564=_n_k_15216;auto _n_value_15565=_n_s_15213;d::put(_n_array_15563,_n_index_15564,_n_value_15565);return _n_value_15565;})());
}}
}}

}
}

void _n_frond_15114(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x0_15217=_a0;
double _n_y0_15218=_a1;
double _n_ang_15219=_a2;
double _n_len_15220=_a3;
double _n_droop_15221=_a4;
double _n_seed_15222=_a5;
{
double _n_dx_15223=std::cos(_n_ang_15219);
double _n_dy_15224=std::sin(_n_ang_15219);
double _n_steps_15225=std::ceil((_n_len_15220*2.0));
{double _n_i_15226=0.0;
for(;d::truth((_n_i_15226<=_n_steps_15225));(void)((_n_i_15226++))){d::check_cancel();double _n_s_15227=(_n_i_15226/_n_steps_15225);
double _n_x_15228=(_n_x0_15217+((_n_dx_15223*_n_len_15220)*_n_s_15227));
double _n_y_15229=((_n_y0_15218+((_n_dy_15224*_n_len_15220)*_n_s_15227))+(((_n_droop_15221*_n_s_15227)*_n_s_15227)*_n_len_15220));
double _n_tx_15230=_n_dx_15223;
double _n_ty_15231=(_n_dy_15224+((2.0*_n_droop_15221)*_n_s_15227));
double _n_tl_15232=d::hypot(std::initializer_list<double>{_n_tx_15230,_n_ty_15231});
(void)(this->_n_stamp_15113(_n_x_15228,_n_y_15229,0.7,0.6));
if(d::truth(d::mod(_n_i_15226,3.0))){d::check_cancel();continue;
}
double _n_leaf_15233=([&](){auto _n_left_15566=(1.2+(4.2*std::sin((ascii::PI*d::minimum({1.0,(_n_s_15227*1.1)})))));auto _n_right_15567=(0.8+(0.4*_n_hash_15088(_n_i_15226,_n_seed_15222)));return (_n_left_15566*_n_right_15567);})();
for(auto &&_n_item_15568:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_15234=_n_item_15568;
{
double _n_lx_15235=((((-d::number(_n_ty_15231))/_n_tl_15232)*_n_side_15234)-((0.4*_n_tx_15230)/_n_tl_15232));
double _n_ly_15236=((((_n_tx_15230/_n_tl_15232)*_n_side_15234)-((0.4*_n_ty_15231)/_n_tl_15232))+0.5);
double _n_ll_15237=d::hypot(std::initializer_list<double>{_n_lx_15235,_n_ly_15236});
bool _n_up_15238=((_n_ly_15236/_n_ll_15237)<0.2);
{double _n_j_15239=1.0;
for(;d::truth((_n_j_15239<=_n_leaf_15233));(void)((_n_j_15239=(_n_j_15239+0.8)))){d::check_cancel();(void)(this->_n_stamp_15113((_n_x_15228+((_n_lx_15235/_n_ll_15237)*_n_j_15239)),(_n_y_15229+((_n_ly_15236/_n_ll_15237)*_n_j_15239)),0.45,(d::truth(_n_up_15238)?(0.95-(0.3*(_n_j_15239/_n_leaf_15233))):(0.5-(0.2*(_n_j_15239/_n_leaf_15233))))));
}}

}
}
}}

}
}

void _n_palm_15115(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6){double _n_rx_15240=_a0;
double _n_ry_15241=_a1;
double _n_qx_15242=_a2;
double _n_qy_15243=_a3;
double _n_kx_15244=_a4;
double _n_ky_15245=_a5;
double _n_seed_15246=_a6;
{
{double _n_i_15247=0.0;
for(;d::truth((_n_i_15247<=240.0));(void)((_n_i_15247++))){d::check_cancel();double _n_s_15248=(_n_i_15247/240.0);
double _n_x_15249=(((((1.0-_n_s_15248)*(1.0-_n_s_15248))*_n_rx_15240)+(((2.0*(1.0-_n_s_15248))*_n_s_15248)*_n_qx_15242))+((_n_s_15248*_n_s_15248)*_n_kx_15244));
double _n_y_15250=(((((1.0-_n_s_15248)*(1.0-_n_s_15248))*_n_ry_15241)+(((2.0*(1.0-_n_s_15248))*_n_s_15248)*_n_qy_15243))+((_n_s_15248*_n_s_15248)*_n_ky_15245));
double _n_rad_15251=(2.8-(1.2*_n_s_15248));
{double _n_yy_15252=std::floor((_n_y_15250-_n_rad_15251));
for(;d::truth((_n_yy_15252<=(_n_y_15250+_n_rad_15251)));(void)((_n_yy_15252++))){d::check_cancel();{double _n_xx_15253=std::floor((_n_x_15249-_n_rad_15251));
for(;d::truth((_n_xx_15253<=(_n_x_15249+_n_rad_15251)));(void)((_n_xx_15253++))){d::check_cancel();if((((d::truth((_n_xx_15253<0.0))||d::truth((_n_xx_15253>=_n_W_15068)))||d::truth((_n_yy_15252<0.0)))||d::truth((_n_yy_15252>=_n_H_15069)))){d::check_cancel();continue;
}
double _n_ox_15254=((_n_xx_15253+0.5)-_n_x_15249);
double _n_oy_15255=((_n_yy_15252+0.5)-_n_y_15250);
if(d::truth((((_n_ox_15254*_n_ox_15254)+(_n_oy_15255*_n_oy_15255))>(_n_rad_15251*_n_rad_15251)))){d::check_cancel();continue;
}
double _n_k_15256=((_n_yy_15252*_n_W_15068)+_n_xx_15253);
(void)(([&](){auto&& _n_array_15569=this->_n_mat_15101;auto _n_index_15570=_n_k_15256;auto _n_value_15571=_n_TRUNK_15085;d::put(_n_array_15569,_n_index_15570,_n_value_15571);return _n_value_15571;})());
(void)(([&](){auto&& _n_array_15572=this->_n_shade_15102;auto _n_index_15573=_n_k_15256;auto _n_value_15574=(_n_clamp_15091((0.4-(0.6*(_n_ox_15254/_n_rad_15251))))*(d::truth((d::mod(_n_yy_15252,3.0)==0.0))?0.65:1.0));d::put(_n_array_15572,_n_index_15573,_n_value_15574);return _n_value_15574;})());
}}
}}
}}
double _n_n_15257=8.0;
{double _n_i_15258=0.0;
for(;d::truth((_n_i_15258<_n_n_15257));(void)((_n_i_15258++))){d::check_cancel();double _n_a_15259=((((-d::number(ascii::PI))*1.1)+(((_n_i_15258/(_n_n_15257-1.0))*ascii::PI)*1.2))+(0.25*(_n_hash_15088(_n_i_15258,_n_seed_15246)-0.5)));
double _n_len_15260=(19.0+(9.0*_n_hash_15088(_n_i_15258,(_n_seed_15246+1.0))));
(void)(([&](){auto _n_argument_15575=_n_kx_15244;auto _n_argument_15576=_n_ky_15245;auto _n_argument_15577=_n_a_15259;auto _n_argument_15578=_n_len_15260;auto _n_argument_15579=(0.3+(0.35*_n_hash_15088(_n_i_15258,(_n_seed_15246+2.0))));auto _n_argument_15580=((_n_seed_15246*10.0)+_n_i_15258);return this->_n_frond_15114(_n_argument_15575,_n_argument_15576,_n_argument_15577,_n_argument_15578,_n_argument_15579,_n_argument_15580);})());
}}

}
}

explicit Native_jungle_falls(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_15096=d::map(_n_meta_15066->_p_palette,_n_hex_15094);
this->_n_N_15097=(_n_W_15068*_n_H_15069);
this->_n_out_15098=d::Array<d::String,false>(size_t(this->_n_N_15097));
this->_n_lut_15099=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_15101=d::Array<uint8_t,true>(size_t(this->_n_N_15097));
this->_n_shade_15102=d::Array<float,true>(size_t(this->_n_N_15097));
this->_n_depth_15103=d::Array<uint8_t,true>(size_t(this->_n_N_15097));
this->_n_moss_15104=d::Array<float,true>(size_t(this->_n_N_15097));
this->_n_wet_15105=d::Array<float,true>(size_t(this->_n_N_15097));
this->_n_fallU_15106=d::Array<float,true>(size_t(this->_n_N_15097));
this->_n_fallV_15107=d::Array<float,true>(size_t(this->_n_N_15097));
this->_n_spray_15108=d::Array<float,true>(size_t(this->_n_N_15097));
{double _n_r_15181=0.0;
for(;d::truth((_n_r_15181<_n_H_15069));(void)((_n_r_15181++))){d::check_cancel();double _n_y_15182=(_n_r_15181+0.5);
{double _n_x_15183=0.0;
for(;d::truth((_n_x_15183<_n_W_15068));(void)((_n_x_15183++))){d::check_cancel();double _n_k_15184=((_n_r_15181*_n_W_15068)+_n_x_15183);
double _n_px_15185=(_n_x_15183+0.5);
double _n_ct_15186=this->_n_ctop_15109(_n_px_15185);
if(d::truth((_n_y_15182<this->_n_crown_15110(_n_px_15185)))){d::check_cancel();(void)(([&](){auto&& _n_array_15371=this->_n_mat_15101;auto _n_index_15372=_n_k_15184;auto _n_value_15373=_n_SKY_15079;d::put(_n_array_15371,_n_index_15372,_n_value_15373);return _n_value_15373;})());
}else {d::check_cancel();if(d::truth((_n_y_15182<_n_ct_15186))){d::check_cancel();(void)(([&](){auto&& _n_array_15374=this->_n_mat_15101;auto _n_index_15375=_n_k_15184;auto _n_value_15376=_n_CANOPY_15080;d::put(_n_array_15374,_n_index_15375,_n_value_15376);return _n_value_15376;})());
double _n_n_15187=_n_fbm_15090((_n_px_15185*0.3),(_n_y_15182*0.3),3.0,0.0);
(void)(([&](){auto&& _n_array_15377=this->_n_shade_15102;auto _n_index_15378=_n_k_15184;auto _n_value_15379=_n_clamp_15091(([&](){auto _n_left_15380=(0.3+((_n_n_15187-_n_fbm_15090(((_n_px_15185-1.0)*0.3),((_n_y_15182-1.0)*0.3),3.0,0.0))*8.0));auto _n_right_15381=(0.4*_n_smooth_15092(_n_ct_15186,(_n_ct_15186-6.0),_n_y_15182));return (_n_left_15380+_n_right_15381);})());d::put(_n_array_15377,_n_index_15378,_n_value_15379);return _n_value_15379;})());
}else {d::check_cancel();if(d::truth((_n_y_15182<(_n_POOL_15070+0.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_15382=this->_n_mat_15101;auto _n_index_15383=_n_k_15184;auto _n_value_15384=_n_ROCK_15081;d::put(_n_array_15382,_n_index_15383,_n_value_15384);return _n_value_15384;})());
double _n_n_15188=_n_fbm_15090((_n_px_15185*0.1),(_n_y_15182*0.07),4.0,0.0);
double _n_nl_15189=_n_fbm_15090(((_n_px_15185-1.5)*0.1),((_n_y_15182-1.0)*0.07),4.0,0.0);
double _n_seam_15190=_n_noise_15089((_n_px_15185*0.45),(_n_y_15182*0.05),0.0);
(void)(([&](){auto&& _n_array_15385=this->_n_shade_15102;auto _n_index_15386=_n_k_15184;auto _n_value_15387=_n_clamp_15091((((0.4+((_n_n_15188-_n_nl_15189)*9.0))+(0.4*(_n_n_15188-0.5)))-(0.3*_n_smooth_15092(0.6,0.85,_n_seam_15190))));d::put(_n_array_15385,_n_index_15386,_n_value_15387);return _n_value_15387;})());
double _n_m_15191=_n_fbm_15090(((_n_px_15185*0.09)+20.0),(_n_y_15182*0.16),3.0,0.0);
(void)(([&](){auto&& _n_array_15388=this->_n_moss_15104;auto _n_index_15389=_n_k_15184;auto _n_value_15390=_n_clamp_15091(([&](){auto _n_left_15391=(0.8*_n_smooth_15092(0.58,0.7,_n_m_15191));auto _n_right_15392=(0.8*_n_smooth_15092((_n_ct_15186+4.0),_n_ct_15186,_n_y_15182));return (_n_left_15391+_n_right_15392);})());d::put(_n_array_15388,_n_index_15389,_n_value_15390);return _n_value_15390;})());
if(((d::truth(([&](){auto _n_left_15393=std::fabs((_n_px_15185-101.0));auto _n_right_15394=(26.0-(4.0*_n_fbm_15090((_n_px_15185*0.2),4.0,2.0,0.0)));return (_n_left_15393<_n_right_15394);})())&&d::truth((_n_y_15182>=(_n_LEDGE_15071-1.5))))&&d::truth((_n_y_15182<(_n_LEDGE_15071+2.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_15395=this->_n_shade_15102;auto _n_index_15396=_n_k_15184;auto _n_value_15397=(d::truth((_n_y_15182<_n_LEDGE_15071))?0.95:(0.3-(0.1*(_n_y_15182-_n_LEDGE_15071))));d::put(_n_array_15395,_n_index_15396,_n_value_15397);return _n_value_15397;})());
(void)(([&](){auto&& _n_array_15398=this->_n_moss_15104;auto _n_index_15399=_n_k_15184;auto _n_value_15400=(d::truth((_n_y_15182<_n_LEDGE_15071))?1.0:0.2);d::put(_n_array_15398,_n_index_15399,_n_value_15400);return _n_value_15400;})());
}
}else {d::check_cancel();(void)(([&](){auto&& _n_array_15401=this->_n_mat_15101;auto _n_index_15402=_n_k_15184;auto _n_value_15403=_n_WATER_15083;d::put(_n_array_15401,_n_index_15402,_n_value_15403);return _n_value_15403;})());
}
}
}
if(d::truth((d::at(this->_n_mat_15101,_n_k_15184)==_n_ROCK_15081))){d::check_cancel();double _n_near_15192=99.0;
for(auto &&_n_item_15404:_n_FALLS_15087){d::check_cancel();auto _n_binding_15405=_n_item_15404;
double _n_lip_15193=d::at(_n_binding_15405,0.0);
double _n_foot_15194=d::at(_n_binding_15405,1.0);
double _n_c0_15195=d::at(_n_binding_15405,2.0);
double _n_c1_15196=d::at(_n_binding_15405,3.0);
double _n_w0_15197=d::at(_n_binding_15405,4.0);
double _n_w1_15198=d::at(_n_binding_15405,5.0);
{
double _n_top_15199=([&]()->double{auto _n_logical_15406=_n_lip_15193;return d::truth(_n_logical_15406)?_n_logical_15406:(_n_ct_15186-0.5);})();
if((d::truth((_n_y_15182<(_n_top_15199-1.0)))||d::truth((_n_y_15182>=_n_foot_15194)))){d::check_cancel();continue;
}
double _n_f_15200=((_n_y_15182-_n_top_15199)/(_n_foot_15194-_n_top_15199));
double _n_cx_15201=_n_mix_15093(_n_c0_15195,_n_c1_15196,_n_f_15200);
double _n_hw_15202=([&](){auto _n_left_15407=_n_mix_15093(_n_w0_15197,_n_w1_15198,_n_f_15200);auto _n_right_15408=(1.0+(0.14*(_n_noise_15089((_n_y_15182*0.3),_n_c0_15195,0.0)-0.5)));return (_n_left_15407*_n_right_15408);})();
double _n_d_15203=(std::fabs((_n_px_15185-_n_cx_15201))-_n_hw_15202);
if((d::truth((_n_d_15203<0.0))&&d::truth((_n_y_15182>=_n_top_15199)))){d::check_cancel();(void)(([&](){auto&& _n_array_15409=this->_n_mat_15101;auto _n_index_15410=_n_k_15184;auto _n_value_15411=_n_FALL_15082;d::put(_n_array_15409,_n_index_15410,_n_value_15411);return _n_value_15411;})());
(void)(([&](){auto&& _n_array_15412=this->_n_fallU_15106;auto _n_index_15413=_n_k_15184;auto _n_value_15414=((_n_px_15185-_n_cx_15201)/_n_hw_15202);d::put(_n_array_15412,_n_index_15413,_n_value_15414);return _n_value_15414;})());
(void)(([&](){auto&& _n_array_15415=this->_n_fallV_15107;auto _n_index_15416=_n_k_15184;auto _n_value_15417=(_n_y_15182-_n_top_15199);d::put(_n_array_15415,_n_index_15416,_n_value_15417);return _n_value_15417;})());
}
(void)((_n_near_15192=d::minimum({_n_near_15192,_n_d_15203})));

}
}
(void)(([&](){auto&& _n_array_15418=this->_n_wet_15105;auto _n_index_15419=_n_k_15184;auto _n_value_15420=_n_smooth_15092(6.0,0.0,_n_near_15192);d::put(_n_array_15418,_n_index_15419,_n_value_15420);return _n_value_15420;})());
}
{double _n_layer_15204=0.0;
for(;d::truth((_n_layer_15204<3.0));(void)((_n_layer_15204++))){d::check_cancel();bool _n_inL_15205=([&]()->bool{auto _n_logical_15421=(_n_px_15185<this->_n_edge_15111(_n_y_15182,_n_layer_15204,0.0));return d::truth(_n_logical_15421)?(_n_y_15182>this->_n_canopy_15112(_n_px_15185,_n_layer_15204,0.0)):_n_logical_15421;})();
bool _n_inR_15206=([&]()->bool{auto _n_logical_15422=((_n_W_15068-_n_px_15185)<this->_n_edge_15111(_n_y_15182,_n_layer_15204,1.0));return d::truth(_n_logical_15422)?(_n_y_15182>this->_n_canopy_15112((_n_W_15068-_n_px_15185),_n_layer_15204,1.0)):_n_logical_15422;})();
if((d::truth((!d::truth(_n_inL_15205)))&&d::truth((!d::truth(_n_inR_15206))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_15423=this->_n_mat_15101;auto _n_index_15424=_n_k_15184;auto _n_value_15425=_n_LEAF_15084;d::put(_n_array_15423,_n_index_15424,_n_value_15425);return _n_value_15425;})());
(void)(([&](){auto&& _n_array_15426=this->_n_depth_15103;auto _n_index_15427=_n_k_15184;auto _n_value_15428=_n_layer_15204;d::put(_n_array_15426,_n_index_15427,_n_value_15428);return _n_value_15428;})());
double _n_f_15207=(0.24-(_n_layer_15204*0.04));
double _n_n_15208=_n_fbm_15090(((_n_px_15185*_n_f_15207)+(_n_layer_15204*9.0)),(_n_y_15182*_n_f_15207),4.0,0.0);
double _n_nl_15209=_n_fbm_15090((((_n_px_15185-1.5)*_n_f_15207)+(_n_layer_15204*9.0)),((_n_y_15182-1.5)*_n_f_15207),4.0,0.0);
(void)(([&](){auto&& _n_array_15429=this->_n_shade_15102;auto _n_index_15430=_n_k_15184;auto _n_value_15431=([&](){auto _n_left_15432=_n_clamp_15091(((_n_n_15208-0.3)*1.8));auto _n_right_15433=_n_clamp_15091((0.4+((_n_n_15208-_n_nl_15209)*12.0)));return (_n_left_15432*_n_right_15433);})();d::put(_n_array_15429,_n_index_15430,_n_value_15431);return _n_value_15431;})());
}}
(void)(([&](){auto&& _n_array_15434=this->_n_spray_15108;auto _n_index_15435=_n_k_15184;auto _n_value_15436=([&](){auto _n_left_15437=([&](){auto _n_left_15439=([&](){auto _n_left_15441=std::exp((-d::number(std::pow(((_n_px_15185-_n_BASE_X_15072)/36.0),2.0))));auto _n_right_15442=_n_smooth_15092((_n_POOL_15070-38.0),(_n_POOL_15070-2.0),_n_y_15182);return (_n_left_15441*_n_right_15442);})();auto _n_right_15440=_n_smooth_15092((_n_POOL_15070+8.0),_n_POOL_15070,_n_y_15182);return (_n_left_15439*_n_right_15440);})();auto _n_right_15438=([&](){auto _n_left_15443=([&](){auto _n_left_15445=(0.7*std::exp((-d::number(std::pow(((_n_px_15185-100.0)/17.0),2.0)))));auto _n_right_15446=_n_smooth_15092((_n_LEDGE_15071-14.0),(_n_LEDGE_15071-1.0),_n_y_15182);return (_n_left_15445*_n_right_15446);})();auto _n_right_15444=_n_smooth_15092((_n_LEDGE_15071+9.0),(_n_LEDGE_15071+1.0),_n_y_15182);return (_n_left_15443*_n_right_15444);})();return (_n_left_15437+_n_right_15438);})();d::put(_n_array_15434,_n_index_15435,_n_value_15436);return _n_value_15436;})());
}}
}}
(void)(this->_n_palm_15115(16.0,104.0,18.0,56.0,42.0,15.0,3.0));
(void)(this->_n_palm_15115(188.0,104.0,190.0,54.0,160.0,12.0,7.0));
this->_n_ferns_15116=d::Array<d::Array<double,false>,false>{d::Array<double,false>{4.0,101.0,1.0},d::Array<double,false>{26.0,102.0,1.0},d::Array<double,false>{46.0,103.0,1.0},d::Array<double,false>{196.0,101.0,(-d::number(1.0))},d::Array<double,false>{174.0,102.0,(-d::number(1.0))},d::Array<double,false>{156.0,103.0,(-d::number(1.0))}};
for(auto &&_n_item_15447:this->_n_ferns_15116){d::check_cancel();auto _n_binding_15448=_n_item_15447;
double _n_fx_15261=d::at(_n_binding_15448,0.0);
double _n_fy_15262=d::at(_n_binding_15448,1.0);
double _n_dir_15263=d::at(_n_binding_15448,2.0);
{
{double _n_i_15264=0.0;
for(;d::truth((_n_i_15264<5.0));(void)((_n_i_15264++))){d::check_cancel();double _n_a_15265=((((-d::number(ascii::PI))/2.0)+(_n_dir_15263*(0.25+(_n_i_15264*0.32))))+(0.15*(_n_hash_15088(_n_fx_15261,_n_i_15264)-0.5)));
(void)(([&](){auto _n_argument_15449=_n_fx_15261;auto _n_argument_15450=_n_fy_15262;auto _n_argument_15451=_n_a_15265;auto _n_argument_15452=(13.0+(6.0*_n_hash_15088(_n_i_15264,_n_fx_15261)));auto _n_argument_15453=0.55;auto _n_argument_15454=((_n_fx_15261*3.0)+_n_i_15264);return this->_n_frond_15114(_n_argument_15449,_n_argument_15450,_n_argument_15451,_n_argument_15452,_n_argument_15453,_n_argument_15454);})());
}}

}
}
this->_n_vines_15117=d::Array<d::Array<double,false>,false>{};
{double _n_i_15266=0.0;
for(;d::truth((_n_i_15266<10.0));(void)((_n_i_15266++))){d::check_cancel();bool _n_left_15267=(_n_i_15266<5.0);
double _n_x_15268=(d::truth(_n_left_15267)?((62.0+(_n_i_15266*4.6))+(_n_hash_15088(_n_i_15266,1.0)*2.0)):((118.0+((_n_i_15266-5.0)*4.8))+(_n_hash_15088(_n_i_15266,2.0)*2.0)));
if(d::truth((std::fabs((_n_x_15268-100.0))<12.0))){d::check_cancel();continue;
}
(void)(this->_n_vines_15117.push(d::Array<double,false>{_n_x_15268,(std::floor(this->_n_ctop_15109(_n_x_15268))-1.0),(14.0+(26.0*_n_hash_15088(_n_i_15266,3.0))),(_n_hash_15088(_n_i_15266,4.0)*6.28)}));
}}
this->_n_haze_15118=d::Array<float,true>(size_t(this->_n_N_15097));
{double _n_k_15269=0.0;
for(;d::truth((_n_k_15269<this->_n_N_15097));(void)((_n_k_15269++))){d::check_cancel();(void)(([&](){auto&& _n_array_15455=this->_n_haze_15118;auto _n_index_15456=_n_k_15269;auto _n_value_15457=([&](){auto _n_argument_15458=(d::mod(_n_k_15269,_n_W_15068)*0.04);auto _n_argument_15459=(std::floor((_n_k_15269/_n_W_15068))*0.1);auto _n_argument_15460=3.0;auto _n_argument_15461=0.0;return _n_fbm_15090(_n_argument_15458,_n_argument_15459,_n_argument_15460,_n_argument_15461);})();d::put(_n_array_15455,_n_index_15456,_n_value_15457);return _n_value_15457;})());
}}
this->_n_vine_15119=d::Array<uint8_t,true>(size_t(this->_n_N_15097));
this->_n_shafts_15120=d::Array<float,true>(size_t(280.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_15363> _a1) mutable ->d::String{double _n_t_15270=_a0;
auto _n_binding_15464=(d::present(_a1)?_a1:([&](){auto _n_object_15463=std::make_shared<_n_Record_15363>();return _n_object_15463;})());
std::optional<d::Array<uint8_t,true>> _n_color_15271=_n_binding_15464->_p_color;
{
(void)(this->_n_vine_15119.fill(0.0));
for(auto &&_n_item_15465:this->_n_vines_15117){d::check_cancel();auto _n_binding_15466=_n_item_15465;
double _n_vx_15272=d::at(_n_binding_15466,0.0);
double _n_top_15273=d::at(_n_binding_15466,1.0);
double _n_len_15274=d::at(_n_binding_15466,2.0);
double _n_ph_15275=d::at(_n_binding_15466,3.0);
{
{double _n_i_15276=0.0;
for(;d::truth((_n_i_15276<_n_len_15274));(void)((_n_i_15276++))){d::check_cancel();double _n_s_15277=(_n_i_15276/_n_len_15274);
double _n_r_15278=(_n_top_15273+_n_i_15276);
double _n_x_15279=d::round(([&](){auto _n_left_15467=((_n_vx_15272-0.5)+(((0.9*_n_s_15277)*_n_s_15277)*std::sin(((_n_t_15270*0.9)+_n_ph_15275))));auto _n_right_15468=(1.5*std::sin(((_n_i_15276*0.15)+_n_ph_15275)));return (_n_left_15467+_n_right_15468);})());
if(((d::truth((_n_x_15279<0.0))||d::truth((_n_x_15279>=_n_W_15068)))||d::truth((_n_r_15278>=_n_H_15069)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_15469=this->_n_vine_15119;auto _n_index_15470=((_n_r_15278*_n_W_15068)+_n_x_15279);auto _n_value_15471=1.0;d::put(_n_array_15469,_n_index_15470,_n_value_15471);return _n_value_15471;})());
if(d::truth((_n_hash_15088(_n_i_15276,double(d::i32(_n_vx_15272)|d::i32(0.0)))>0.5))){d::check_cancel();double _n_lx_15280=(_n_x_15279+(d::truth((_n_hash_15088(double(d::i32(_n_vx_15272)|d::i32(0.0)),_n_i_15276)>0.5))?1.0:(-d::number(1.0))));
if((d::truth((_n_lx_15280>=0.0))&&d::truth((_n_lx_15280<_n_W_15068)))){d::check_cancel();(void)(([&](){auto&& _n_array_15472=this->_n_vine_15119;auto _n_index_15473=((_n_r_15278*_n_W_15068)+_n_lx_15280);auto _n_value_15474=2.0;d::put(_n_array_15472,_n_index_15473,_n_value_15474);return _n_value_15474;})());
}
}
}}

}
}
{double _n_i_15281=0.0;
for(;d::truth((_n_i_15281<double(this->_n_shafts_15120.size())));(void)((_n_i_15281++))){d::check_cancel();double _n_p_15282=(_n_i_15281-70.0);
(void)(([&](){auto&& _n_array_15475=this->_n_shafts_15120;auto _n_index_15476=_n_i_15281;auto _n_value_15477=([&](){auto _n_left_15478=([&](){auto _n_argument_15480=0.55;auto _n_argument_15481=0.8;auto _n_argument_15482=_n_noise_15089(((_n_p_15282*0.16)+(_n_t_15270*0.04)),(3.1+(_n_t_15270*0.08)),0.0);return _n_smooth_15092(_n_argument_15480,_n_argument_15481,_n_argument_15482);})();auto _n_right_15479=_n_smooth_15092((-d::number(20.0)),50.0,_n_p_15282);return (_n_left_15478*_n_right_15479);})();d::put(_n_array_15475,_n_index_15476,_n_value_15477);return _n_value_15477;})());
}}
{double _n_r_15283=0.0;
for(;d::truth((_n_r_15283<_n_H_15069));(void)((_n_r_15283++))){d::check_cancel();double _n_y_15284=(_n_r_15283+0.5);
{double _n_x_15285=0.0;
for(;d::truth((_n_x_15285<_n_W_15068));(void)((_n_x_15285++))){d::check_cancel();double _n_k_15286=((_n_r_15283*_n_W_15068)+_n_x_15285);
double _n_px_15287=(_n_x_15285+0.5);
double _n_m_15288=d::at(this->_n_mat_15101,_n_k_15286);
double _n_cr_15289=0.0;
double _n_cg_15290=0.0;
double _n_cb_15291=0.0;
double _n_floor_15292=0.15;
double _n_air_15293=1.0;
if(((d::truth(d::at(this->_n_vine_15119,_n_k_15286))&&d::truth((_n_m_15288!=_n_TRUNK_15085)))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_15483=(_n_m_15288==_n_LEAF_15084);return d::truth(_n_logical_15483)?(d::at(this->_n_depth_15103,_n_k_15286)==2.0):_n_logical_15483;})()))))){d::check_cancel();(void)((_n_m_15288=_n_VINE_15086));
}
if(d::truth((_n_m_15288==_n_SKY_15079))){d::check_cancel();double _n_v_15294=(_n_y_15284/20.0);
double _n_ds_15295=d::hypot(std::initializer_list<double>{(_n_px_15287-d::at(_n_SUN_15074,0.0)),(_n_y_15284-d::at(_n_SUN_15074,1.0))});
double _n_sun_15296=(std::exp(((-d::number(_n_ds_15295))/60.0))*0.5);
double _n_veil_15297=(0.9+(0.15*d::at(this->_n_haze_15118,_n_k_15286)));
(void)((_n_cr_15289=(((0.5+(0.35*_n_v_15294))*_n_veil_15297)+_n_sun_15296)));
(void)((_n_cg_15290=(((0.74+(0.18*_n_v_15294))*_n_veil_15297)+(_n_sun_15296*0.95))));
(void)((_n_cb_15291=(((0.9+(0.06*_n_v_15294))*_n_veil_15297)+(_n_sun_15296*0.7))));
(void)((_n_floor_15292=0.3));
}else {d::check_cancel();if(d::truth((_n_m_15288==_n_CANOPY_15080))){d::check_cancel();double _n_s_15298=d::at(this->_n_shade_15102,_n_k_15286);
(void)((((_n_cr_15289=(0.24+(0.32*_n_s_15298))),(_n_cg_15290=(0.42+(0.4*_n_s_15298)))),(_n_cb_15291=(0.28+(0.22*_n_s_15298)))));
(void)((_n_floor_15292=0.2));
}else {d::check_cancel();if(d::truth((_n_m_15288==_n_ROCK_15081))){d::check_cancel();double _n_s_15299=d::at(this->_n_shade_15102,_n_k_15286);
double _n_w_15300=d::at(this->_n_wet_15105,_n_k_15286);
double _n_mo_15301=d::at(this->_n_moss_15104,_n_k_15286);
(void)((_n_cr_15289=((0.07+(0.27*_n_s_15299))*(1.0-(0.4*_n_w_15300)))));
(void)((_n_cg_15290=((0.09+(0.28*_n_s_15299))*(1.0-(0.35*_n_w_15300)))));
(void)((_n_cb_15291=((0.1+(0.28*_n_s_15299))*(1.0-(0.3*_n_w_15300)))));
double _n_g_15302=(0.25+(0.75*_n_s_15299));
(void)((_n_cr_15289=_n_mix_15093(_n_cr_15289,((0.12*_n_g_15302)+0.02),(_n_mo_15301*0.8))));
(void)((_n_cg_15290=_n_mix_15093(_n_cg_15290,((0.48*_n_g_15302)+0.05),(_n_mo_15301*0.8))));
(void)((_n_cb_15291=_n_mix_15093(_n_cb_15291,((0.1*_n_g_15302)+0.02),(_n_mo_15301*0.8))));
if((d::truth((_n_w_15300>0.3))&&d::truth((_n_hash_15088((_n_x_15285+(double(d::i32((_n_t_15270*6.0))|d::i32(0.0))*13.0)),_n_r_15283)>0.95)))){d::check_cancel();(void)((((_n_cr_15289=(_n_cr_15289+(0.5*_n_w_15300))),(_n_cg_15290=(_n_cg_15290+(0.55*_n_w_15300)))),(_n_cb_15291=(_n_cb_15291+(0.55*_n_w_15300)))));
}
(void)((_n_floor_15292=0.05));
}else {d::check_cancel();if(d::truth((_n_m_15288==_n_FALL_15082))){d::check_cancel();double _n_u_15303=d::at(this->_n_fallU_15106,_n_k_15286);
double _n_v_15304=d::at(this->_n_fallV_15107,_n_k_15286);
double _n_speed_15305=(8.0+(1.4*_n_v_15304));
double _n_s1_15306=_n_noise_15089((_n_px_15287*0.65),((_n_y_15284-(_n_t_15270*_n_speed_15305))*0.09),0.0);
double _n_s2_15307=_n_noise_15089(((_n_px_15287*1.4)+31.0),((_n_y_15284-((_n_t_15270*_n_speed_15305)*1.3))*0.2),0.0);
double _n_s_15308=((0.6*_n_s1_15306)+(0.4*_n_s2_15307));
double _n_lip_15309=_n_smooth_15092(4.0,0.0,_n_v_15304);
double _n_edgeK_15310=([&](){auto _n_argument_15484=1.0;auto _n_argument_15485=0.55;auto _n_argument_15486=std::fabs(_n_u_15303);return _n_smooth_15092(_n_argument_15484,_n_argument_15485,_n_argument_15486);})();
double _n_white_15311=_n_clamp_15091(((_n_smooth_15092(0.28,0.68,_n_s_15308)*(0.6+(0.4*_n_edgeK_15310)))+(0.3*_n_edgeK_15310)));
(void)((((_n_cr_15289=_n_mix_15093(0.3,0.98,_n_white_15311)),(_n_cg_15290=_n_mix_15093(0.56,1.0,_n_white_15311))),(_n_cb_15291=_n_mix_15093(0.6,1.0,_n_white_15311))));
(void)((((_n_cr_15289=_n_mix_15093(_n_cr_15289,(0.25+(0.5*_n_s_15308)),_n_lip_15309)),(_n_cg_15290=_n_mix_15093(_n_cg_15290,(0.72+(0.25*_n_s_15308)),_n_lip_15309))),(_n_cb_15291=_n_mix_15093(_n_cb_15291,(0.72+(0.25*_n_s_15308)),_n_lip_15309))));
double _n_thin_15312=((1.0-_n_edgeK_15310)*(1.0-_n_smooth_15092(0.35,0.62,_n_s_15308)));
(void)((((_n_cr_15289=_n_mix_15093(_n_cr_15289,0.08,_n_thin_15312)),(_n_cg_15290=_n_mix_15093(_n_cg_15290,0.11,_n_thin_15312))),(_n_cb_15291=_n_mix_15093(_n_cb_15291,0.12,_n_thin_15312))));
(void)((_n_floor_15292=0.2));
(void)((_n_air_15293=0.5));
}else {d::check_cancel();if(d::truth((_n_m_15288==_n_WATER_15083))){d::check_cancel();double _n_v_15313=((_n_y_15284-_n_POOL_15070)/(_n_H_15069-_n_POOL_15070));
double _n_dx_15314=((_n_px_15287-_n_BASE_X_15072)/1.6);
double _n_dy_15315=((_n_y_15284-_n_POOL_15070)*3.2);
double _n_d_15316=std::sqrt(((_n_dx_15314*_n_dx_15314)+(_n_dy_15315*_n_dy_15315)));
double _n_near_15317=std::exp(((-d::number(_n_d_15316))/30.0));
(void)((_n_cr_15289=((0.05+(0.2*_n_near_15317))-(0.03*_n_v_15313))));
(void)((_n_cg_15290=((0.45+(0.3*_n_near_15317))-(0.15*_n_v_15313))));
(void)((_n_cb_15291=((0.48+(0.28*_n_near_15317))-(0.14*_n_v_15313))));
double _n_rip_15318=((std::sin(((_n_d_15316*0.42)-(_n_t_15270*4.5)))*0.5)+0.5);
double _n_brk_15319=_n_noise_15089((_n_px_15287*0.12),((_n_y_15284*0.6)-(_n_t_15270*0.5)),0.0);
double _n_crest_15320=(([&](){auto _n_left_15487=_n_smooth_15092(0.7,0.95,_n_rip_15318);auto _n_right_15488=_n_smooth_15092(0.35,0.7,_n_brk_15319);return (_n_left_15487*_n_right_15488);})()*(0.5+(0.5*_n_near_15317)));
(void)((((_n_cr_15289=(_n_cr_15289+(0.55*_n_crest_15320))),(_n_cg_15290=(_n_cg_15290+(0.5*_n_crest_15320)))),(_n_cb_15291=(_n_cb_15291+(0.45*_n_crest_15320)))));
double _n_wob_15321=([&](){auto _n_argument_15489=0.4;auto _n_argument_15490=0.9;auto _n_argument_15491=_n_noise_15089((_n_px_15287*0.5),((_n_y_15284*0.8)-(_n_t_15270*2.0)),0.0);return _n_smooth_15092(_n_argument_15489,_n_argument_15490,_n_argument_15491);})();
double _n_boil_15322=0.0;
for(auto &&_n_item_15492:_n_FALLS_15087){d::check_cancel();auto _n_binding_15493=_n_item_15492;
double _n_c1_15323=d::at(_n_binding_15493,3.0);
double _n_w1_15324=d::at(_n_binding_15493,5.0);
{
double _n_refl_15325=([&](){auto _n_left_15494=(std::exp((-d::number(std::pow(((_n_px_15287-_n_c1_15323)/(_n_w1_15324*0.9)),2.0))))*_n_wob_15321);auto _n_right_15495=_n_smooth_15092(_n_H_15069,(_n_POOL_15070+4.0),_n_y_15284);return (_n_left_15494*_n_right_15495);})();
(void)((((_n_cr_15289=(_n_cr_15289+(0.25*_n_refl_15325))),(_n_cg_15290=(_n_cg_15290+(0.28*_n_refl_15325)))),(_n_cb_15291=(_n_cb_15291+(0.28*_n_refl_15325)))));
if(d::truth((_n_w1_15324<5.0))){d::check_cancel();(void)((_n_boil_15322=(_n_boil_15322+([&](){auto _n_left_15496=std::exp((-d::number(std::pow(((_n_px_15287-_n_c1_15323)/5.0),2.0))));auto _n_right_15497=_n_smooth_15092((_n_POOL_15070+6.0),_n_POOL_15070,_n_y_15284);return (_n_left_15496*_n_right_15497);})())));
}

}
}
double _n_zone_15326=([&](){auto _n_left_15498=std::exp((-d::number(std::pow(((_n_px_15287-_n_BASE_X_15072)/25.0),2.0))));auto _n_right_15499=_n_smooth_15092((_n_POOL_15070+15.0),_n_POOL_15070,_n_y_15284);return (_n_left_15498*_n_right_15499);})();
double _n_ch_15327=([&](){auto _n_argument_15500=((_n_px_15287*0.16)+(std::sin((_n_t_15270*1.3))*0.6));auto _n_argument_15501=((_n_y_15284*0.4)-(_n_t_15270*1.2));auto _n_argument_15502=2.0;auto _n_argument_15503=0.0;return _n_fbm_15090(_n_argument_15500,_n_argument_15501,_n_argument_15502,_n_argument_15503);})();
double _n_foam_15328=_n_clamp_15091((([&](){auto _n_left_15504=((_n_smooth_15092(0.4,0.6,_n_ch_15327)*_n_zone_15326)*1.7);auto _n_right_15505=((_n_smooth_15092(0.78,0.92,_n_brk_15319)*_n_near_15317)*0.7);return (_n_left_15504+_n_right_15505);})()+(_n_boil_15322*_n_ch_15327)));
(void)((((_n_cr_15289=_n_mix_15093(_n_cr_15289,0.96,_n_foam_15328)),(_n_cg_15290=_n_mix_15093(_n_cg_15290,0.99,_n_foam_15328))),(_n_cb_15291=_n_mix_15093(_n_cb_15291,1.0,_n_foam_15328))));
(void)((_n_floor_15292=0.15));
}else {d::check_cancel();if(d::truth((_n_m_15288==_n_LEAF_15084))){d::check_cancel();double _n_lay_15329=d::at(this->_n_depth_15103,_n_k_15286);
double _n_flick_15330=(d::truth((_n_lay_15329==2.0))?(0.1*std::sin(((_n_t_15270*1.7)+(_n_hash_15088(double(d::i32(_n_x_15285)>>(d::u32(2.0)&31)),double(d::i32(_n_r_15283)>>(d::u32(2.0)&31)))*6.28)))):0.0);
double _n_b_15331=_n_clamp_15091((((d::at(this->_n_shade_15102,_n_k_15286)*(d::truth((_n_lay_15329==2.0))?1.1:1.0))+(d::truth((_n_lay_15329==2.0))?0.06:0.0))+_n_flick_15330));
if(d::truth((_n_lay_15329==0.0))){d::check_cancel();(void)((((_n_cr_15289=(0.12+(0.3*_n_b_15331))),(_n_cg_15290=(0.28+(0.42*_n_b_15331)))),(_n_cb_15291=(0.2+(0.24*_n_b_15331)))));
(void)((_n_air_15293=0.9));
(void)((_n_floor_15292=0.12));
}else {d::check_cancel();if(d::truth((_n_lay_15329==1.0))){d::check_cancel();(void)((((_n_cr_15289=(0.03+((0.3*_n_b_15331)*_n_b_15331))),(_n_cg_15290=(0.1+(0.55*_n_b_15331)))),(_n_cb_15291=(0.03+(0.1*_n_b_15331)))));
(void)((_n_air_15293=0.55));
(void)((_n_floor_15292=0.04));
}else {d::check_cancel();(void)((((_n_cr_15289=(0.01+(((0.55*_n_b_15331)*_n_b_15331)*_n_b_15331))),(_n_cg_15290=(0.03+((0.78*_n_b_15331)*_n_b_15331)))),(_n_cb_15291=(0.01+((0.14*_n_b_15331)*_n_b_15331)))));
(void)((_n_air_15293=0.15));
(void)((_n_floor_15292=0.0));
}
}
}else {d::check_cancel();if(d::truth((_n_m_15288==_n_TRUNK_15085))){d::check_cancel();double _n_s_15332=d::at(this->_n_shade_15102,_n_k_15286);
(void)((((_n_cr_15289=(0.1+((0.55*_n_s_15332)*_n_s_15332))),(_n_cg_15290=(0.085+((0.47*_n_s_15332)*_n_s_15332)))),(_n_cb_15291=(0.06+((0.34*_n_s_15332)*_n_s_15332)))));
(void)((_n_air_15293=0.15));
(void)((_n_floor_15292=0.1));
}else {d::check_cancel();if(d::truth((d::at(this->_n_vine_15119,_n_k_15286)==2.0))){d::check_cancel();(void)((((_n_cr_15289=0.4),(_n_cg_15290=0.78)),(_n_cb_15291=0.2)));
}else {d::check_cancel();(void)((((_n_cr_15289=0.12),(_n_cg_15290=0.3)),(_n_cb_15291=0.1)));
}
(void)((_n_air_15293=0.4));
(void)((_n_floor_15292=0.0));
}
}
}
}
}
}
}
double _n_e_15333=(d::at(this->_n_spray_15108,_n_k_15286)*_n_air_15293);
if(d::truth((_n_e_15333>0.02))){d::check_cancel();double _n_dn_15334=_n_fbm_15090(((_n_px_15287*0.05)-(_n_t_15270*0.25)),((_n_y_15284*0.08)+(_n_t_15270*0.55)),2.0,0.0);
double _n_mist_15335=_n_clamp_15091((_n_e_15333*((_n_smooth_15092(0.3,0.7,_n_dn_15334)*1.1)+0.15)));
(void)((((_n_cr_15289=_n_mix_15093(_n_cr_15289,0.9,(_n_mist_15335*0.85))),(_n_cg_15290=_n_mix_15093(_n_cg_15290,0.96,(_n_mist_15335*0.85)))),(_n_cb_15291=_n_mix_15093(_n_cb_15291,0.97,(_n_mist_15335*0.85)))));
double _n_dr_15336=(d::hypot(std::initializer_list<double>{(_n_px_15287-d::at(_n_RAIN_15073,0.0)),(_n_y_15284-d::at(_n_RAIN_15073,1.0))})-d::at(_n_RAIN_15073,2.0));
if((d::truth((_n_dr_15336>(-d::number(6.0))))&&d::truth((_n_dr_15336<6.0)))){d::check_cancel();double _n_q_15337=(((_n_dr_15336+6.0)/12.0)*(double(_n_BOW_15095.size())-1.0));
double _n_i_15338=([&](){auto _n_argument_15506=(double(_n_BOW_15095.size())-2.0);auto _n_argument_15507=std::floor(_n_q_15337);return d::minimum({_n_argument_15506,_n_argument_15507});})();
double _n_f_15339=(_n_q_15337-_n_i_15338);
double _n_a_15340=([&](){auto _n_argument_15508=0.85;auto _n_argument_15509=(std::sin((((_n_dr_15336+6.0)/12.0)*ascii::PI))*((0.35+(_n_mist_15335*1.6))+(_n_e_15333*0.6)));return d::minimum({_n_argument_15508,_n_argument_15509});})();
(void)((_n_cr_15289=([&](){auto _n_argument_15510=_n_cr_15289;auto _n_argument_15511=_n_mix_15093(d::at(d::at(_n_BOW_15095,_n_i_15338),0.0),d::at(d::at(_n_BOW_15095,(_n_i_15338+1.0)),0.0),_n_f_15339);auto _n_argument_15512=_n_a_15340;return _n_mix_15093(_n_argument_15510,_n_argument_15511,_n_argument_15512);})()));
(void)((_n_cg_15290=([&](){auto _n_argument_15513=_n_cg_15290;auto _n_argument_15514=_n_mix_15093(d::at(d::at(_n_BOW_15095,_n_i_15338),1.0),d::at(d::at(_n_BOW_15095,(_n_i_15338+1.0)),1.0),_n_f_15339);auto _n_argument_15515=_n_a_15340;return _n_mix_15093(_n_argument_15513,_n_argument_15514,_n_argument_15515);})()));
(void)((_n_cb_15291=([&](){auto _n_argument_15516=_n_cb_15291;auto _n_argument_15517=_n_mix_15093(d::at(d::at(_n_BOW_15095,_n_i_15338),2.0),d::at(d::at(_n_BOW_15095,(_n_i_15338+1.0)),2.0),_n_f_15339);auto _n_argument_15518=_n_a_15340;return _n_mix_15093(_n_argument_15516,_n_argument_15517,_n_argument_15518);})()));
}
}
double _n_sh_15341=((([&](){auto _n_left_15519=d::at(this->_n_shafts_15120,([&](){auto _n_argument_15521=0.0;auto _n_argument_15522=d::minimum({279.0,double(d::i32(((_n_px_15287-(0.62*_n_y_15284))+70.0))|d::i32(0.0))});return d::maximum({_n_argument_15521,_n_argument_15522});})());auto _n_right_15520=_n_smooth_15092(_n_H_15069,10.0,_n_y_15284);return (_n_left_15519*_n_right_15520);})()*_n_air_15293)*0.75);
(void)((((_n_cr_15289=_n_mix_15093(_n_cr_15289,1.0,(_n_sh_15341*0.9))),(_n_cg_15290=_n_mix_15093(_n_cg_15290,0.94,(_n_sh_15341*0.85)))),(_n_cb_15291=_n_mix_15093(_n_cb_15291,0.7,(_n_sh_15341*0.7)))));
double _n_peak_15342=d::maximum({_n_cr_15289,_n_cg_15290,_n_cb_15291,0.0001});
double _n_level_15343=_n_clamp_15091((_n_floor_15292+(((1.0-_n_floor_15292)*std::pow(_n_peak_15342,0.85))*0.95)));
double _n_step_15344=([&](){auto _n_argument_15523=0.0;auto _n_argument_15524=([&](){auto _n_argument_15525=3.0;auto _n_argument_15526=d::round(((_n_level_15343*3.0)+d::at(_n_BAYER_15078,((double(d::i32(_n_r_15283)&d::i32(3.0))*4.0)+double(d::i32(_n_x_15285)&d::i32(3.0))))));return d::minimum({_n_argument_15525,_n_argument_15526});})();return d::maximum({_n_argument_15523,_n_argument_15524});})();
(void)(([&](){auto&& _n_array_15527=this->_n_out_15098;auto _n_index_15528=_n_k_15286;auto _n_value_15529=d::at(_n_DOTS_15076,_n_step_15344);d::put(_n_array_15527,_n_index_15528,_n_value_15529);return _n_value_15529;})());
if(d::truth(_n_color_15271)){d::check_cancel();double _n_want_15345=(d::truth(_n_step_15344)?d::minimum({1.0,((_n_level_15343+0.06)/d::at(_n_COVER_15077,_n_step_15344))}):0.0);
double _n_s_15346=d::minimum({2.2,((0.3+(0.7*_n_want_15345))/_n_peak_15342)});
(void)(([&](){auto&& _n_array_15530=d::read(_n_color_15271);auto _n_index_15531=_n_k_15286;auto _n_value_15532=([&](){auto _n_argument_15533=_n_clamp_15091((_n_cr_15289*_n_s_15346));auto _n_argument_15534=_n_clamp_15091((_n_cg_15290*_n_s_15346));auto _n_argument_15535=_n_clamp_15091((_n_cb_15291*_n_s_15346));return this->_n_nearest_15100(_n_argument_15533,_n_argument_15534,_n_argument_15535);})();d::put(_n_array_15530,_n_index_15531,_n_value_15532);return _n_value_15532;})());
}
}}
}}
double _n_ph_15347=(d::mod(_n_t_15270,_n_LOOP_15075)/_n_LOOP_15075);
{double _n_b_15348=0.0;
for(;d::truth((_n_b_15348<2.0));(void)((_n_b_15348++))){d::check_cancel();double _n_bx_15349=(((-d::number(30.0))+(_n_ph_15347*270.0))-(_n_b_15348*24.0));
double _n_by_15350=((29.0+(_n_b_15348*6.0))+(2.5*std::sin((((_n_ph_15347*ascii::PI)*4.0)+_n_b_15348))));
double _n_flap_15351=std::sin(((_n_t_15270*7.0)+(_n_b_15348*2.1)));
{double _n_r_15352=std::floor((_n_by_15350-10.0));
for(;d::truth((_n_r_15352<=(_n_by_15350+10.0)));(void)((_n_r_15352++))){d::check_cancel();{double _n_x_15353=std::floor((_n_bx_15349-18.0));
for(;d::truth((_n_x_15353<=(_n_bx_15349+8.0)));(void)((_n_x_15353++))){d::check_cancel();if((((d::truth((_n_x_15353<0.0))||d::truth((_n_x_15353>=_n_W_15068)))||d::truth((_n_r_15352<0.0)))||d::truth((_n_r_15352>=_n_H_15069)))){d::check_cancel();continue;
}
double _n_lx_15354=((_n_x_15353+0.5)-_n_bx_15349);
double _n_ly_15355=((_n_r_15352+0.5)-_n_by_15350);
double _n_c_15356=(-d::number(1.0));
double _n_tl_15357=((-d::number(_n_lx_15354))-4.0);
if(((d::truth((_n_tl_15357>0.0))&&d::truth((_n_tl_15357<13.0)))&&d::truth((std::fabs((_n_ly_15355-(_n_tl_15357*0.1)))<(1.3*(1.0-(_n_tl_15357/14.0))))))){d::check_cancel();(void)((_n_c_15356=(d::truth((_n_tl_15357>8.0))?25.0:23.0)));
}
if(d::truth(((std::pow((_n_lx_15354/4.6),2.0)+std::pow((_n_ly_15355/1.7),2.0))<1.0))){d::check_cancel();(void)((_n_c_15356=23.0));
}
if(d::truth(((std::pow((_n_lx_15354-4.4),2.0)+std::pow((_n_ly_15355+0.6),2.0))<2.6))){d::check_cancel();(void)((_n_c_15356=((d::truth((_n_lx_15354>4.6))&&d::truth((_n_ly_15355<(-d::number(0.6)))))?12.0:23.0)));
}
if((((d::truth((_n_lx_15354>5.6))&&d::truth((_n_lx_15354<7.2)))&&d::truth((_n_ly_15355>(-d::number(1.0)))))&&d::truth((_n_ly_15355<1.0)))){d::check_cancel();(void)((_n_c_15356=13.0));
}
double _n_tip_15358=((-d::number(_n_flap_15351))*8.0);
double _n_reach_15359=(1.0-(std::fabs((_n_lx_15354+0.5))/3.8));
if((d::truth((_n_reach_15359>0.0))&&d::truth((std::fabs(_n_tip_15358)>0.8)))){d::check_cancel();double _n_f_15360=(_n_ly_15355/(_n_tip_15358*_n_reach_15359));
if((d::truth((_n_f_15360>0.15))&&d::truth((_n_f_15360<1.0)))){d::check_cancel();(void)((_n_c_15356=(d::truth((_n_f_15360<0.4))?27.0:(d::truth((_n_f_15360<0.58))?22.0:25.0))));
}
}
if(d::truth((_n_c_15356<0.0))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_15536=this->_n_out_15098;auto _n_index_15537=((_n_r_15352*_n_W_15068)+_n_x_15353);auto _n_value_15538=d::String(u"●");d::put(_n_array_15536,_n_index_15537,_n_value_15538);return _n_value_15538;})());
if(d::truth(_n_color_15271)){d::check_cancel();(void)(([&](){auto&& _n_array_15539=d::read(_n_color_15271);auto _n_index_15540=((_n_r_15352*_n_W_15068)+_n_x_15353);auto _n_value_15541=_n_c_15356;d::put(_n_array_15539,_n_index_15540,_n_value_15541);return _n_value_15541;})());
}
}}
}}
}}
d::Array<d::String,false> _n_lines_15361=d::Array<d::String,false>{};
{double _n_r_15362=0.0;
for(;d::truth((_n_r_15362<_n_H_15069));(void)((_n_r_15362++))){d::check_cancel();(void)(_n_lines_15361.push(d::join(this->_n_out_15098.slice((_n_r_15362*_n_W_15068),((_n_r_15362+1.0)*_n_W_15068)),d::String(u""))));
}}
return d::join(_n_lines_15361,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("jungle-falls").cols)*ascii::catalog_meta("jungle-falls").rows);auto _env=std::make_shared<_n_Record_15363>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &jungle_falls_meta(){return catalog_meta("jungle-falls");}
std::unique_ptr<Piece> make_jungle_falls(const AsciiPieceOptions &o){return std::make_unique<Native_jungle_falls>(o);}
}
