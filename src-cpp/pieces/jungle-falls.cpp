// Direct, statically typed C++ from src/pieces/jungle-falls.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_15066;
struct _n_Record_15362;
struct _n_Record_15066{
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
static std::shared_ptr<_n_Record_15066> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15066>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_still=d::decode<double>(j["still"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_15362{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_15362> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_15362>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_15087(double _a0,double _a1);
double _n_noise_15088(double _a0,double _a1,double _a2);
double _n_fbm_15089(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_15090(double _a0);
double _n_smooth_15091(double _a0,double _a1,double _a2);
double _n_mix_15092(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_15093(d::String _a0);
std::shared_ptr<_n_Record_15066> _n_meta_15065=[](){return ([&](){auto _n_object_15365=std::make_shared<_n_Record_15066>();_n_object_15365->_p_name=d::String(u"jungle falls");_n_object_15365->_p_category=d::String(u"scenes");_n_object_15365->_p_note=d::String(u"a tiered waterfall in a rainforest gorge, spray, a rainbow and macaws");_n_object_15365->_p_cols=200.0;_n_object_15365->_p_rows=100.0;_n_object_15365->_p_cell=1.0;_n_object_15365->_p_fps=15.0;_n_object_15365->_p_ground=d::String(u"#07130d");_n_object_15365->_p_still=6.0;_n_object_15365->_p_palette=d::Array<d::String,false>{d::String(u"#0d2616"),d::String(u"#173d1f"),d::String(u"#225a26"),d::String(u"#2f7a2c"),d::String(u"#45983a"),d::String(u"#6bb544"),d::String(u"#9ccf55"),d::String(u"#c9e27a"),d::String(u"#2a3436"),d::String(u"#465256"),d::String(u"#6c7676"),d::String(u"#9aa29c"),d::String(u"#f7fcfc"),d::String(u"#d6eef0"),d::String(u"#a8dcdf"),d::String(u"#6cc5c6"),d::String(u"#35aeb0"),d::String(u"#1d8b92"),d::String(u"#11636c"),d::String(u"#c9e6ef"),d::String(u"#93c9e2"),d::String(u"#fff1c2"),d::String(u"#f2cf6b"),d::String(u"#e5483b"),d::String(u"#f08c34"),d::String(u"#3d84d6"),d::String(u"#8b6bd0"),d::String(u"#a92d25"),d::String(u"#5b8f7a"),d::String(u"#8fb8a0"),d::String(u"#5e4a36")};return _n_object_15365;})();}();
const double _n_W_15067=[](){return 200.0;}();
const double _n_H_15068=[](){return 100.0;}();
const double _n_POOL_15069=[](){return 80.0;}();
const double _n_LEDGE_15070=[](){return 50.0;}();
const double _n_BASE_X_15071=[](){return 101.0;}();
d::Array<double,false> _n_RAIN_15072=[](){return d::Array<double,false>{118.0,116.0,56.0};}();
d::Array<double,false> _n_SUN_15073=[](){return d::Array<double,false>{30.0,(-d::number(40.0))};}();
const double _n_LOOP_15074=[](){return 16.0;}();
const d::String _n_DOTS_15075=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_15076=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_15077=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_15120=_a0;
return ((_n_v_15120/16.0)-0.47);});}();
const double _n_SKY_15078=[](){return 0.0;}();
const double _n_CANOPY_15079=[](){return 1.0;}();
const double _n_ROCK_15080=[](){return 2.0;}();
const double _n_FALL_15081=[](){return 3.0;}();
const double _n_WATER_15082=[](){return 4.0;}();
const double _n_LEAF_15083=[](){return 5.0;}();
const double _n_TRUNK_15084=[](){return 6.0;}();
const double _n_VINE_15085=[](){return 7.0;}();
d::Array<std::array<double,6>,false> _n_FALLS_15086=[](){return d::Array<std::array<double,6>,false>{std::array<double,6>{0.0,(_n_LEDGE_15070-1.0),100.0,100.5,7.0,9.5},std::array<double,6>{(_n_LEDGE_15070+1.0),(_n_POOL_15069+1.0),101.0,101.0,14.0,20.0},std::array<double,6>{31.0,(_n_POOL_15069+1.0),131.0,134.0,1.6,3.0},std::array<double,6>{37.0,(_n_POOL_15069+1.0),71.0,69.0,1.2,2.4}};}();
d::Array<d::Array<double,false>,false> _n_BOW_15094=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.55,0.42,0.82},d::Array<double,false>{0.24,0.52,0.84},d::Array<double,false>{0.42,0.74,0.34},d::Array<double,false>{0.95,0.82,0.38},d::Array<double,false>{0.94,0.55,0.2},d::Array<double,false>{0.9,0.28,0.23}};}();
double _n_hash_15087(double _a0,double _a1){double _n_x_15121=_a0;
double _n_y_15122=_a1;
{
double _n_h_15123=([&](){auto _n_left_15366=d::imul(double(d::i32(_n_x_15121)|d::i32(0.0)),374761393.0);auto _n_right_15367=d::imul(double(d::i32(_n_y_15122)|d::i32(0.0)),668265263.0);return (_n_left_15366+_n_right_15367);})();
(void)((_n_h_15123=d::imul(double(d::i32(_n_h_15123)^d::i32(double(d::u32(_n_h_15123)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_15123)^d::i32(double(d::u32(_n_h_15123)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_15088(double _a0,double _a1,double _a2){double _n_x_15124=_a0;
double _n_y_15125=_a1;
double _n_period_15126=_a2;
{
double _n_xi_15127=std::floor(_n_x_15124);
double _n_yi_15128=std::floor(_n_y_15125);
double _n_fx_15129=(_n_x_15124-_n_xi_15127);
double _n_fy_15130=(_n_y_15125-_n_yi_15128);
double _n_u_15131=((_n_fx_15129*_n_fx_15129)*(3.0-(2.0*_n_fx_15129)));
double _n_v_15132=((_n_fy_15130*_n_fy_15130)*(3.0-(2.0*_n_fy_15130)));
double _n_x0_15133=_n_xi_15127;
double _n_x1_15134=(_n_xi_15127+1.0);
if(d::truth(_n_period_15126)){d::check_cancel();(void)((_n_x0_15133=d::mod((d::mod(_n_xi_15127,_n_period_15126)+_n_period_15126),_n_period_15126)));
(void)((_n_x1_15134=d::mod((_n_x0_15133+1.0),_n_period_15126)));
}
double _n_a_15135=_n_hash_15087(_n_x0_15133,_n_yi_15128);
double _n_b_15136=_n_hash_15087(_n_x1_15134,_n_yi_15128);
double _n_c_15137=_n_hash_15087(_n_x0_15133,(_n_yi_15128+1.0));
double _n_d_15138=_n_hash_15087(_n_x1_15134,(_n_yi_15128+1.0));
return (((_n_a_15135+((_n_b_15136-_n_a_15135)*_n_u_15131))+((_n_c_15137-_n_a_15135)*_n_v_15132))+(((((_n_a_15135-_n_b_15136)-_n_c_15137)+_n_d_15138)*_n_u_15131)*_n_v_15132));

}
}

double _n_fbm_15089(double _a0,double _a1,double _a2,double _a3){double _n_x_15139=_a0;
double _n_y_15140=_a1;
double _n_octaves_15141=_a2;
double _n_period_15142=_a3;
{
double _n_s_15143=0.0;
double _n_n_15144=0.0;
double _n_amp_15145=0.5;
double _n_f_15146=1.0;
{double _n_i_15147=0.0;
for(;d::truth((_n_i_15147<_n_octaves_15141));(void)((_n_i_15147++))){d::check_cancel();(void)((_n_s_15143=(_n_s_15143+(_n_amp_15145*_n_noise_15088((_n_x_15139*_n_f_15146),(_n_y_15140*_n_f_15146),(_n_period_15142*_n_f_15146))))));
(void)((_n_n_15144=(_n_n_15144+_n_amp_15145)));
(void)((_n_amp_15145=(_n_amp_15145*0.5)));
(void)((_n_f_15146=(_n_f_15146*2.0)));
}}
return (_n_s_15143/_n_n_15144);

}
}

double _n_clamp_15090(double _a0){double _n_v_15148=_a0;
return (d::truth((_n_v_15148<0.0))?0.0:(d::truth((_n_v_15148>1.0))?1.0:_n_v_15148));}

double _n_smooth_15091(double _a0,double _a1,double _a2){double _n_a_15149=_a0;
double _n_b_15150=_a1;
double _n_v_15151=_a2;
{
double _n_k_15152=_n_clamp_15090(((_n_v_15151-_n_a_15149)/(_n_b_15150-_n_a_15149)));
return ((_n_k_15152*_n_k_15152)*(3.0-(2.0*_n_k_15152)));

}
}

double _n_mix_15092(double _a0,double _a1,double _a2){double _n_a_15153=_a0;
double _n_b_15154=_a1;
double _n_k_15155=_a2;
return (_n_a_15153+((_n_b_15154-_n_a_15153)*_n_k_15155));}

d::Array<double,false> _n_hex_15093(d::String _a0){d::String _n_s_15156=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_15157=_a0;
return (([&](){auto _n_argument_15368=d::slice(_n_s_15156,_n_i_15157,(_n_i_15157+2.0));auto _n_argument_15369=16.0;return d::parseInt(_n_argument_15368,_n_argument_15369);})()/255.0);});}

struct Native_jungle_falls final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_15095{};
double _n_N_15096{};
d::Array<d::String,false> _n_out_15097{};
d::Array<uint8_t,true> _n_lut_15098{};
d::Array<uint8_t,true> _n_mat_15100{};
d::Array<float,true> _n_shade_15101{};
d::Array<uint8_t,true> _n_depth_15102{};
d::Array<float,true> _n_moss_15103{};
d::Array<float,true> _n_wet_15104{};
d::Array<float,true> _n_fallU_15105{};
d::Array<float,true> _n_fallV_15106{};
d::Array<float,true> _n_spray_15107{};
d::Array<std::array<double,3>,false> _n_ferns_15115{};
d::Array<std::array<double,4>,false> _n_vines_15116{};
d::Array<float,true> _n_haze_15117{};
d::Array<uint8_t,true> _n_vine_15118{};
d::Array<float,true> _n_shafts_15119{};
std::function<d::String(double,std::shared_ptr<_n_Record_15362>)> _render;
double _n_nearest_15099(double _a0,double _a1,double _a2){double _n_r_15158=_a0;
double _n_g_15159=_a1;
double _n_b_15160=_a2;
{
double _n_k_15161=([&](){auto _n_left_15541=([&](){auto _n_left_15543=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_15158*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_15544=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_15159*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_15543)|d::i32(_n_right_15544));})();auto _n_right_15542=d::minimum({31.0,double(d::i32((_n_b_15160*31.99))|d::i32(0.0))});return double(d::i32(_n_left_15541)|d::i32(_n_right_15542));})();
if(d::truth((d::at(this->_n_lut_15098,_n_k_15161)!=255.0))){d::check_cancel();return d::at(this->_n_lut_15098,_n_k_15161);
}
double _n_best_15162=0.0;
double _n_bd_15163=1000000000.0;
{double _n_i_15164=0.0;
for(;d::truth((_n_i_15164<double(this->_n_P_15095.size())));(void)((_n_i_15164++))){d::check_cancel();double _n_dr_15165=(d::at(d::at(this->_n_P_15095,_n_i_15164),0.0)-_n_r_15158);
double _n_dg_15166=(d::at(d::at(this->_n_P_15095,_n_i_15164),1.0)-_n_g_15159);
double _n_db_15167=(d::at(d::at(this->_n_P_15095,_n_i_15164),2.0)-_n_b_15160);
double _n_d_15168=((((0.3*_n_dr_15165)*_n_dr_15165)+((0.5*_n_dg_15166)*_n_dg_15166))+((0.2*_n_db_15167)*_n_db_15167));
if(d::truth((_n_d_15168<_n_bd_15163))){d::check_cancel();(void)(((_n_bd_15163=_n_d_15168),(_n_best_15162=_n_i_15164)));
}
}}
return ([&](){auto&& _n_array_15545=this->_n_lut_15098;auto _n_index_15546=_n_k_15161;auto _n_value_15547=_n_best_15162;d::put(_n_array_15545,_n_index_15546,_n_value_15547);return _n_value_15547;})();

}
}

double _n_ctop_15108(double _a0){double _n_x_15169=_a0;
return ([&](){auto _n_left_15548=(17.0+(4.0*_n_fbm_15089((_n_x_15169*0.06),1.3,3.0,0.0)));auto _n_right_15549=(2.5*std::exp((-d::number(std::pow(((_n_x_15169-100.0)/9.0),2.0)))));return (_n_left_15548+_n_right_15549);})();}

double _n_crown_15109(double _a0){double _n_x_15170=_a0;
return ([&](){auto _n_left_15550=(this->_n_ctop_15108(_n_x_15170)-2.0);auto _n_right_15551=(7.0*_n_fbm_15089((_n_x_15170*0.11),5.1,3.0,0.0));return (_n_left_15550-_n_right_15551);})();}

double _n_edge_15110(double _a0,double _a1,double _a2){double _n_y_15171=_a0;
double _n_layer_15172=_a1;
double _n_side_15173=_a2;
{
double _n_s_15174=((_n_layer_15172*7.0)+(_n_side_15173*31.0));
double _n_base_15175=(d::at(d::Array<double,false>{64.0,52.0,36.0},_n_layer_15172)-(_n_side_15173*3.0));
double _n_wob_15176=d::at(d::Array<double,false>{7.0,10.0,14.0},_n_layer_15172);
return ([&](){auto _n_left_15552=(_n_base_15175+(_n_wob_15176*(_n_fbm_15089((_n_y_15171*(0.08+(_n_layer_15172*0.02))),_n_s_15174,3.0,0.0)-0.5)));auto _n_right_15553=(d::at(d::Array<double,false>{16.0,14.0,4.0},_n_layer_15172)*_n_smooth_15091(70.0,98.0,_n_y_15171));return (_n_left_15552-_n_right_15553);})();

}
}

double _n_canopy_15111(double _a0,double _a1,double _a2){double _n_d_15177=_a0;
double _n_layer_15178=_a1;
double _n_side_15179=_a2;
return ([&](){auto _n_left_15554=(d::at(d::Array<double,false>{26.0,28.0,34.0},_n_layer_15178)*_n_smooth_15091(d::at(d::Array<double,false>{0.0,4.0,8.0},_n_layer_15178),d::at(d::Array<double,false>{22.0,26.0,32.0},_n_layer_15178),_n_d_15177));auto _n_right_15555=(8.0*_n_fbm_15089((_n_d_15177*0.14),((40.0+(_n_layer_15178*3.0))+(_n_side_15179*9.0)),3.0,0.0));return (_n_left_15554-_n_right_15555);})();}

void _n_stamp_15112(double _a0,double _a1,double _a2,double _a3){double _n_cx_15209=_a0;
double _n_cy_15210=_a1;
double _n_rad_15211=_a2;
double _n_s_15212=_a3;
{
{double _n_yy_15213=std::floor((_n_cy_15210-_n_rad_15211));
for(;d::truth((_n_yy_15213<=(_n_cy_15210+_n_rad_15211)));(void)((_n_yy_15213++))){d::check_cancel();{double _n_xx_15214=std::floor((_n_cx_15209-_n_rad_15211));
for(;d::truth((_n_xx_15214<=(_n_cx_15209+_n_rad_15211)));(void)((_n_xx_15214++))){d::check_cancel();if((((d::truth((_n_xx_15214<0.0))||d::truth((_n_xx_15214>=_n_W_15067)))||d::truth((_n_yy_15213<0.0)))||d::truth((_n_yy_15213>=_n_H_15068)))){d::check_cancel();continue;
}
if(d::truth(((std::pow(((_n_xx_15214+0.5)-_n_cx_15209),2.0)+std::pow(((_n_yy_15213+0.5)-_n_cy_15210),2.0))>((_n_rad_15211*_n_rad_15211)+0.15)))){d::check_cancel();continue;
}
double _n_k_15215=((_n_yy_15213*_n_W_15067)+_n_xx_15214);
(void)(([&](){auto&& _n_array_15556=this->_n_mat_15100;auto _n_index_15557=_n_k_15215;auto _n_value_15558=_n_LEAF_15083;d::put(_n_array_15556,_n_index_15557,_n_value_15558);return _n_value_15558;})());
(void)(([&](){auto&& _n_array_15559=this->_n_depth_15102;auto _n_index_15560=_n_k_15215;auto _n_value_15561=2.0;d::put(_n_array_15559,_n_index_15560,_n_value_15561);return _n_value_15561;})());
(void)(([&](){auto&& _n_array_15562=this->_n_shade_15101;auto _n_index_15563=_n_k_15215;auto _n_value_15564=_n_s_15212;d::put(_n_array_15562,_n_index_15563,_n_value_15564);return _n_value_15564;})());
}}
}}

}
}

void _n_frond_15113(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x0_15216=_a0;
double _n_y0_15217=_a1;
double _n_ang_15218=_a2;
double _n_len_15219=_a3;
double _n_droop_15220=_a4;
double _n_seed_15221=_a5;
{
double _n_dx_15222=std::cos(_n_ang_15218);
double _n_dy_15223=std::sin(_n_ang_15218);
double _n_steps_15224=std::ceil((_n_len_15219*2.0));
{double _n_i_15225=0.0;
for(;d::truth((_n_i_15225<=_n_steps_15224));(void)((_n_i_15225++))){d::check_cancel();double _n_s_15226=(_n_i_15225/_n_steps_15224);
double _n_x_15227=(_n_x0_15216+((_n_dx_15222*_n_len_15219)*_n_s_15226));
double _n_y_15228=((_n_y0_15217+((_n_dy_15223*_n_len_15219)*_n_s_15226))+(((_n_droop_15220*_n_s_15226)*_n_s_15226)*_n_len_15219));
double _n_tx_15229=_n_dx_15222;
double _n_ty_15230=(_n_dy_15223+((2.0*_n_droop_15220)*_n_s_15226));
double _n_tl_15231=d::hypot(std::initializer_list<double>{_n_tx_15229,_n_ty_15230});
(void)(this->_n_stamp_15112(_n_x_15227,_n_y_15228,0.7,0.6));
if(d::truth(d::mod(_n_i_15225,3.0))){d::check_cancel();continue;
}
double _n_leaf_15232=([&](){auto _n_left_15565=(1.2+(4.2*std::sin((ascii::PI*d::minimum({1.0,(_n_s_15226*1.1)})))));auto _n_right_15566=(0.8+(0.4*_n_hash_15087(_n_i_15225,_n_seed_15221)));return (_n_left_15565*_n_right_15566);})();
for(auto &&_n_item_15567:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_15233=_n_item_15567;
{
double _n_lx_15234=((((-d::number(_n_ty_15230))/_n_tl_15231)*_n_side_15233)-((0.4*_n_tx_15229)/_n_tl_15231));
double _n_ly_15235=((((_n_tx_15229/_n_tl_15231)*_n_side_15233)-((0.4*_n_ty_15230)/_n_tl_15231))+0.5);
double _n_ll_15236=d::hypot(std::initializer_list<double>{_n_lx_15234,_n_ly_15235});
bool _n_up_15237=((_n_ly_15235/_n_ll_15236)<0.2);
{double _n_j_15238=1.0;
for(;d::truth((_n_j_15238<=_n_leaf_15232));(void)((_n_j_15238=(_n_j_15238+0.8)))){d::check_cancel();(void)(this->_n_stamp_15112((_n_x_15227+((_n_lx_15234/_n_ll_15236)*_n_j_15238)),(_n_y_15228+((_n_ly_15235/_n_ll_15236)*_n_j_15238)),0.45,(d::truth(_n_up_15237)?(0.95-(0.3*(_n_j_15238/_n_leaf_15232))):(0.5-(0.2*(_n_j_15238/_n_leaf_15232))))));
}}

}
}
}}

}
}

void _n_palm_15114(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6){double _n_rx_15239=_a0;
double _n_ry_15240=_a1;
double _n_qx_15241=_a2;
double _n_qy_15242=_a3;
double _n_kx_15243=_a4;
double _n_ky_15244=_a5;
double _n_seed_15245=_a6;
{
{double _n_i_15246=0.0;
for(;d::truth((_n_i_15246<=240.0));(void)((_n_i_15246++))){d::check_cancel();double _n_s_15247=(_n_i_15246/240.0);
double _n_x_15248=(((((1.0-_n_s_15247)*(1.0-_n_s_15247))*_n_rx_15239)+(((2.0*(1.0-_n_s_15247))*_n_s_15247)*_n_qx_15241))+((_n_s_15247*_n_s_15247)*_n_kx_15243));
double _n_y_15249=(((((1.0-_n_s_15247)*(1.0-_n_s_15247))*_n_ry_15240)+(((2.0*(1.0-_n_s_15247))*_n_s_15247)*_n_qy_15242))+((_n_s_15247*_n_s_15247)*_n_ky_15244));
double _n_rad_15250=(2.8-(1.2*_n_s_15247));
{double _n_yy_15251=std::floor((_n_y_15249-_n_rad_15250));
for(;d::truth((_n_yy_15251<=(_n_y_15249+_n_rad_15250)));(void)((_n_yy_15251++))){d::check_cancel();{double _n_xx_15252=std::floor((_n_x_15248-_n_rad_15250));
for(;d::truth((_n_xx_15252<=(_n_x_15248+_n_rad_15250)));(void)((_n_xx_15252++))){d::check_cancel();if((((d::truth((_n_xx_15252<0.0))||d::truth((_n_xx_15252>=_n_W_15067)))||d::truth((_n_yy_15251<0.0)))||d::truth((_n_yy_15251>=_n_H_15068)))){d::check_cancel();continue;
}
double _n_ox_15253=((_n_xx_15252+0.5)-_n_x_15248);
double _n_oy_15254=((_n_yy_15251+0.5)-_n_y_15249);
if(d::truth((((_n_ox_15253*_n_ox_15253)+(_n_oy_15254*_n_oy_15254))>(_n_rad_15250*_n_rad_15250)))){d::check_cancel();continue;
}
double _n_k_15255=((_n_yy_15251*_n_W_15067)+_n_xx_15252);
(void)(([&](){auto&& _n_array_15568=this->_n_mat_15100;auto _n_index_15569=_n_k_15255;auto _n_value_15570=_n_TRUNK_15084;d::put(_n_array_15568,_n_index_15569,_n_value_15570);return _n_value_15570;})());
(void)(([&](){auto&& _n_array_15571=this->_n_shade_15101;auto _n_index_15572=_n_k_15255;auto _n_value_15573=(_n_clamp_15090((0.4-(0.6*(_n_ox_15253/_n_rad_15250))))*(d::truth((d::mod(_n_yy_15251,3.0)==0.0))?0.65:1.0));d::put(_n_array_15571,_n_index_15572,_n_value_15573);return _n_value_15573;})());
}}
}}
}}
double _n_n_15256=8.0;
{double _n_i_15257=0.0;
for(;d::truth((_n_i_15257<_n_n_15256));(void)((_n_i_15257++))){d::check_cancel();double _n_a_15258=((((-d::number(ascii::PI))*1.1)+(((_n_i_15257/(_n_n_15256-1.0))*ascii::PI)*1.2))+(0.25*(_n_hash_15087(_n_i_15257,_n_seed_15245)-0.5)));
double _n_len_15259=(19.0+(9.0*_n_hash_15087(_n_i_15257,(_n_seed_15245+1.0))));
(void)(([&](){auto _n_argument_15574=_n_kx_15243;auto _n_argument_15575=_n_ky_15244;auto _n_argument_15576=_n_a_15258;auto _n_argument_15577=_n_len_15259;auto _n_argument_15578=(0.3+(0.35*_n_hash_15087(_n_i_15257,(_n_seed_15245+2.0))));auto _n_argument_15579=((_n_seed_15245*10.0)+_n_i_15257);return this->_n_frond_15113(_n_argument_15574,_n_argument_15575,_n_argument_15576,_n_argument_15577,_n_argument_15578,_n_argument_15579);})());
}}

}
}

explicit Native_jungle_falls(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_15095=d::map(_n_meta_15065->_p_palette,_n_hex_15093);
this->_n_N_15096=(_n_W_15067*_n_H_15068);
this->_n_out_15097=d::Array<d::String,false>(size_t(this->_n_N_15096));
this->_n_lut_15098=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_15100=d::Array<uint8_t,true>(size_t(this->_n_N_15096));
this->_n_shade_15101=d::Array<float,true>(size_t(this->_n_N_15096));
this->_n_depth_15102=d::Array<uint8_t,true>(size_t(this->_n_N_15096));
this->_n_moss_15103=d::Array<float,true>(size_t(this->_n_N_15096));
this->_n_wet_15104=d::Array<float,true>(size_t(this->_n_N_15096));
this->_n_fallU_15105=d::Array<float,true>(size_t(this->_n_N_15096));
this->_n_fallV_15106=d::Array<float,true>(size_t(this->_n_N_15096));
this->_n_spray_15107=d::Array<float,true>(size_t(this->_n_N_15096));
{double _n_r_15180=0.0;
for(;d::truth((_n_r_15180<_n_H_15068));(void)((_n_r_15180++))){d::check_cancel();double _n_y_15181=(_n_r_15180+0.5);
{double _n_x_15182=0.0;
for(;d::truth((_n_x_15182<_n_W_15067));(void)((_n_x_15182++))){d::check_cancel();double _n_k_15183=((_n_r_15180*_n_W_15067)+_n_x_15182);
double _n_px_15184=(_n_x_15182+0.5);
double _n_ct_15185=this->_n_ctop_15108(_n_px_15184);
if(d::truth((_n_y_15181<this->_n_crown_15109(_n_px_15184)))){d::check_cancel();(void)(([&](){auto&& _n_array_15370=this->_n_mat_15100;auto _n_index_15371=_n_k_15183;auto _n_value_15372=_n_SKY_15078;d::put(_n_array_15370,_n_index_15371,_n_value_15372);return _n_value_15372;})());
}else {d::check_cancel();if(d::truth((_n_y_15181<_n_ct_15185))){d::check_cancel();(void)(([&](){auto&& _n_array_15373=this->_n_mat_15100;auto _n_index_15374=_n_k_15183;auto _n_value_15375=_n_CANOPY_15079;d::put(_n_array_15373,_n_index_15374,_n_value_15375);return _n_value_15375;})());
double _n_n_15186=_n_fbm_15089((_n_px_15184*0.3),(_n_y_15181*0.3),3.0,0.0);
(void)(([&](){auto&& _n_array_15376=this->_n_shade_15101;auto _n_index_15377=_n_k_15183;auto _n_value_15378=_n_clamp_15090(([&](){auto _n_left_15379=(0.3+((_n_n_15186-_n_fbm_15089(((_n_px_15184-1.0)*0.3),((_n_y_15181-1.0)*0.3),3.0,0.0))*8.0));auto _n_right_15380=(0.4*_n_smooth_15091(_n_ct_15185,(_n_ct_15185-6.0),_n_y_15181));return (_n_left_15379+_n_right_15380);})());d::put(_n_array_15376,_n_index_15377,_n_value_15378);return _n_value_15378;})());
}else {d::check_cancel();if(d::truth((_n_y_15181<(_n_POOL_15069+0.5)))){d::check_cancel();(void)(([&](){auto&& _n_array_15381=this->_n_mat_15100;auto _n_index_15382=_n_k_15183;auto _n_value_15383=_n_ROCK_15080;d::put(_n_array_15381,_n_index_15382,_n_value_15383);return _n_value_15383;})());
double _n_n_15187=_n_fbm_15089((_n_px_15184*0.1),(_n_y_15181*0.07),4.0,0.0);
double _n_nl_15188=_n_fbm_15089(((_n_px_15184-1.5)*0.1),((_n_y_15181-1.0)*0.07),4.0,0.0);
double _n_seam_15189=_n_noise_15088((_n_px_15184*0.45),(_n_y_15181*0.05),0.0);
(void)(([&](){auto&& _n_array_15384=this->_n_shade_15101;auto _n_index_15385=_n_k_15183;auto _n_value_15386=_n_clamp_15090((((0.4+((_n_n_15187-_n_nl_15188)*9.0))+(0.4*(_n_n_15187-0.5)))-(0.3*_n_smooth_15091(0.6,0.85,_n_seam_15189))));d::put(_n_array_15384,_n_index_15385,_n_value_15386);return _n_value_15386;})());
double _n_m_15190=_n_fbm_15089(((_n_px_15184*0.09)+20.0),(_n_y_15181*0.16),3.0,0.0);
(void)(([&](){auto&& _n_array_15387=this->_n_moss_15103;auto _n_index_15388=_n_k_15183;auto _n_value_15389=_n_clamp_15090(([&](){auto _n_left_15390=(0.8*_n_smooth_15091(0.58,0.7,_n_m_15190));auto _n_right_15391=(0.8*_n_smooth_15091((_n_ct_15185+4.0),_n_ct_15185,_n_y_15181));return (_n_left_15390+_n_right_15391);})());d::put(_n_array_15387,_n_index_15388,_n_value_15389);return _n_value_15389;})());
if(((d::truth(([&](){auto _n_left_15392=std::fabs((_n_px_15184-101.0));auto _n_right_15393=(26.0-(4.0*_n_fbm_15089((_n_px_15184*0.2),4.0,2.0,0.0)));return (_n_left_15392<_n_right_15393);})())&&d::truth((_n_y_15181>=(_n_LEDGE_15070-1.5))))&&d::truth((_n_y_15181<(_n_LEDGE_15070+2.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_15394=this->_n_shade_15101;auto _n_index_15395=_n_k_15183;auto _n_value_15396=(d::truth((_n_y_15181<_n_LEDGE_15070))?0.95:(0.3-(0.1*(_n_y_15181-_n_LEDGE_15070))));d::put(_n_array_15394,_n_index_15395,_n_value_15396);return _n_value_15396;})());
(void)(([&](){auto&& _n_array_15397=this->_n_moss_15103;auto _n_index_15398=_n_k_15183;auto _n_value_15399=(d::truth((_n_y_15181<_n_LEDGE_15070))?1.0:0.2);d::put(_n_array_15397,_n_index_15398,_n_value_15399);return _n_value_15399;})());
}
}else {d::check_cancel();(void)(([&](){auto&& _n_array_15400=this->_n_mat_15100;auto _n_index_15401=_n_k_15183;auto _n_value_15402=_n_WATER_15082;d::put(_n_array_15400,_n_index_15401,_n_value_15402);return _n_value_15402;})());
}
}
}
if(d::truth((d::at(this->_n_mat_15100,_n_k_15183)==_n_ROCK_15080))){d::check_cancel();double _n_near_15191=99.0;
for(auto &&_n_item_15403:_n_FALLS_15086){d::check_cancel();auto _n_binding_15404=_n_item_15403;
double _n_lip_15192=d::at(_n_binding_15404,0.0);
double _n_foot_15193=d::at(_n_binding_15404,1.0);
double _n_c0_15194=d::at(_n_binding_15404,2.0);
double _n_c1_15195=d::at(_n_binding_15404,3.0);
double _n_w0_15196=d::at(_n_binding_15404,4.0);
double _n_w1_15197=d::at(_n_binding_15404,5.0);
{
double _n_top_15198=([&]()->double{auto _n_logical_15405=_n_lip_15192;return d::truth(_n_logical_15405)?_n_logical_15405:(_n_ct_15185-0.5);})();
if((d::truth((_n_y_15181<(_n_top_15198-1.0)))||d::truth((_n_y_15181>=_n_foot_15193)))){d::check_cancel();continue;
}
double _n_f_15199=((_n_y_15181-_n_top_15198)/(_n_foot_15193-_n_top_15198));
double _n_cx_15200=_n_mix_15092(_n_c0_15194,_n_c1_15195,_n_f_15199);
double _n_hw_15201=([&](){auto _n_left_15406=_n_mix_15092(_n_w0_15196,_n_w1_15197,_n_f_15199);auto _n_right_15407=(1.0+(0.14*(_n_noise_15088((_n_y_15181*0.3),_n_c0_15194,0.0)-0.5)));return (_n_left_15406*_n_right_15407);})();
double _n_d_15202=(std::fabs((_n_px_15184-_n_cx_15200))-_n_hw_15201);
if((d::truth((_n_d_15202<0.0))&&d::truth((_n_y_15181>=_n_top_15198)))){d::check_cancel();(void)(([&](){auto&& _n_array_15408=this->_n_mat_15100;auto _n_index_15409=_n_k_15183;auto _n_value_15410=_n_FALL_15081;d::put(_n_array_15408,_n_index_15409,_n_value_15410);return _n_value_15410;})());
(void)(([&](){auto&& _n_array_15411=this->_n_fallU_15105;auto _n_index_15412=_n_k_15183;auto _n_value_15413=((_n_px_15184-_n_cx_15200)/_n_hw_15201);d::put(_n_array_15411,_n_index_15412,_n_value_15413);return _n_value_15413;})());
(void)(([&](){auto&& _n_array_15414=this->_n_fallV_15106;auto _n_index_15415=_n_k_15183;auto _n_value_15416=(_n_y_15181-_n_top_15198);d::put(_n_array_15414,_n_index_15415,_n_value_15416);return _n_value_15416;})());
}
(void)((_n_near_15191=d::minimum({_n_near_15191,_n_d_15202})));

}
}
(void)(([&](){auto&& _n_array_15417=this->_n_wet_15104;auto _n_index_15418=_n_k_15183;auto _n_value_15419=_n_smooth_15091(6.0,0.0,_n_near_15191);d::put(_n_array_15417,_n_index_15418,_n_value_15419);return _n_value_15419;})());
}
{double _n_layer_15203=0.0;
for(;d::truth((_n_layer_15203<3.0));(void)((_n_layer_15203++))){d::check_cancel();bool _n_inL_15204=([&]()->bool{auto _n_logical_15420=(_n_px_15184<this->_n_edge_15110(_n_y_15181,_n_layer_15203,0.0));return d::truth(_n_logical_15420)?(_n_y_15181>this->_n_canopy_15111(_n_px_15184,_n_layer_15203,0.0)):_n_logical_15420;})();
bool _n_inR_15205=([&]()->bool{auto _n_logical_15421=((_n_W_15067-_n_px_15184)<this->_n_edge_15110(_n_y_15181,_n_layer_15203,1.0));return d::truth(_n_logical_15421)?(_n_y_15181>this->_n_canopy_15111((_n_W_15067-_n_px_15184),_n_layer_15203,1.0)):_n_logical_15421;})();
if((d::truth((!d::truth(_n_inL_15204)))&&d::truth((!d::truth(_n_inR_15205))))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_15422=this->_n_mat_15100;auto _n_index_15423=_n_k_15183;auto _n_value_15424=_n_LEAF_15083;d::put(_n_array_15422,_n_index_15423,_n_value_15424);return _n_value_15424;})());
(void)(([&](){auto&& _n_array_15425=this->_n_depth_15102;auto _n_index_15426=_n_k_15183;auto _n_value_15427=_n_layer_15203;d::put(_n_array_15425,_n_index_15426,_n_value_15427);return _n_value_15427;})());
double _n_f_15206=(0.24-(_n_layer_15203*0.04));
double _n_n_15207=_n_fbm_15089(((_n_px_15184*_n_f_15206)+(_n_layer_15203*9.0)),(_n_y_15181*_n_f_15206),4.0,0.0);
double _n_nl_15208=_n_fbm_15089((((_n_px_15184-1.5)*_n_f_15206)+(_n_layer_15203*9.0)),((_n_y_15181-1.5)*_n_f_15206),4.0,0.0);
(void)(([&](){auto&& _n_array_15428=this->_n_shade_15101;auto _n_index_15429=_n_k_15183;auto _n_value_15430=([&](){auto _n_left_15431=_n_clamp_15090(((_n_n_15207-0.3)*1.8));auto _n_right_15432=_n_clamp_15090((0.4+((_n_n_15207-_n_nl_15208)*12.0)));return (_n_left_15431*_n_right_15432);})();d::put(_n_array_15428,_n_index_15429,_n_value_15430);return _n_value_15430;})());
}}
(void)(([&](){auto&& _n_array_15433=this->_n_spray_15107;auto _n_index_15434=_n_k_15183;auto _n_value_15435=([&](){auto _n_left_15436=([&](){auto _n_left_15438=([&](){auto _n_left_15440=std::exp((-d::number(std::pow(((_n_px_15184-_n_BASE_X_15071)/36.0),2.0))));auto _n_right_15441=_n_smooth_15091((_n_POOL_15069-38.0),(_n_POOL_15069-2.0),_n_y_15181);return (_n_left_15440*_n_right_15441);})();auto _n_right_15439=_n_smooth_15091((_n_POOL_15069+8.0),_n_POOL_15069,_n_y_15181);return (_n_left_15438*_n_right_15439);})();auto _n_right_15437=([&](){auto _n_left_15442=([&](){auto _n_left_15444=(0.7*std::exp((-d::number(std::pow(((_n_px_15184-100.0)/17.0),2.0)))));auto _n_right_15445=_n_smooth_15091((_n_LEDGE_15070-14.0),(_n_LEDGE_15070-1.0),_n_y_15181);return (_n_left_15444*_n_right_15445);})();auto _n_right_15443=_n_smooth_15091((_n_LEDGE_15070+9.0),(_n_LEDGE_15070+1.0),_n_y_15181);return (_n_left_15442*_n_right_15443);})();return (_n_left_15436+_n_right_15437);})();d::put(_n_array_15433,_n_index_15434,_n_value_15435);return _n_value_15435;})());
}}
}}
(void)(this->_n_palm_15114(16.0,104.0,18.0,56.0,42.0,15.0,3.0));
(void)(this->_n_palm_15114(188.0,104.0,190.0,54.0,160.0,12.0,7.0));
this->_n_ferns_15115=d::Array<std::array<double,3>,false>{std::array<double,3>{4.0,101.0,1.0},std::array<double,3>{26.0,102.0,1.0},std::array<double,3>{46.0,103.0,1.0},std::array<double,3>{196.0,101.0,(-d::number(1.0))},std::array<double,3>{174.0,102.0,(-d::number(1.0))},std::array<double,3>{156.0,103.0,(-d::number(1.0))}};
for(auto &&_n_item_15446:this->_n_ferns_15115){d::check_cancel();auto _n_binding_15447=_n_item_15446;
double _n_fx_15260=d::at(_n_binding_15447,0.0);
double _n_fy_15261=d::at(_n_binding_15447,1.0);
double _n_dir_15262=d::at(_n_binding_15447,2.0);
{
{double _n_i_15263=0.0;
for(;d::truth((_n_i_15263<5.0));(void)((_n_i_15263++))){d::check_cancel();double _n_a_15264=((((-d::number(ascii::PI))/2.0)+(_n_dir_15262*(0.25+(_n_i_15263*0.32))))+(0.15*(_n_hash_15087(_n_fx_15260,_n_i_15263)-0.5)));
(void)(([&](){auto _n_argument_15448=_n_fx_15260;auto _n_argument_15449=_n_fy_15261;auto _n_argument_15450=_n_a_15264;auto _n_argument_15451=(13.0+(6.0*_n_hash_15087(_n_i_15263,_n_fx_15260)));auto _n_argument_15452=0.55;auto _n_argument_15453=((_n_fx_15260*3.0)+_n_i_15263);return this->_n_frond_15113(_n_argument_15448,_n_argument_15449,_n_argument_15450,_n_argument_15451,_n_argument_15452,_n_argument_15453);})());
}}

}
}
this->_n_vines_15116=d::Array<std::array<double,4>,false>{};
{double _n_i_15265=0.0;
for(;d::truth((_n_i_15265<10.0));(void)((_n_i_15265++))){d::check_cancel();bool _n_left_15266=(_n_i_15265<5.0);
double _n_x_15267=(d::truth(_n_left_15266)?((62.0+(_n_i_15265*4.6))+(_n_hash_15087(_n_i_15265,1.0)*2.0)):((118.0+((_n_i_15265-5.0)*4.8))+(_n_hash_15087(_n_i_15265,2.0)*2.0)));
if(d::truth((std::fabs((_n_x_15267-100.0))<12.0))){d::check_cancel();continue;
}
(void)(this->_n_vines_15116.push(std::array<double,4>{_n_x_15267,(std::floor(this->_n_ctop_15108(_n_x_15267))-1.0),(14.0+(26.0*_n_hash_15087(_n_i_15265,3.0))),(_n_hash_15087(_n_i_15265,4.0)*6.28)}));
}}
this->_n_haze_15117=d::Array<float,true>(size_t(this->_n_N_15096));
{double _n_k_15268=0.0;
for(;d::truth((_n_k_15268<this->_n_N_15096));(void)((_n_k_15268++))){d::check_cancel();(void)(([&](){auto&& _n_array_15454=this->_n_haze_15117;auto _n_index_15455=_n_k_15268;auto _n_value_15456=([&](){auto _n_argument_15457=(d::mod(_n_k_15268,_n_W_15067)*0.04);auto _n_argument_15458=(std::floor((_n_k_15268/_n_W_15067))*0.1);auto _n_argument_15459=3.0;auto _n_argument_15460=0.0;return _n_fbm_15089(_n_argument_15457,_n_argument_15458,_n_argument_15459,_n_argument_15460);})();d::put(_n_array_15454,_n_index_15455,_n_value_15456);return _n_value_15456;})());
}}
this->_n_vine_15118=d::Array<uint8_t,true>(size_t(this->_n_N_15096));
this->_n_shafts_15119=d::Array<float,true>(size_t(280.0));
_render=[=]( double _a0,std::shared_ptr<_n_Record_15362> _a1) mutable ->d::String{double _n_t_15269=_a0;
auto _n_binding_15463=(d::present(_a1)?_a1:([&](){auto _n_object_15462=std::make_shared<_n_Record_15362>();return _n_object_15462;})());
std::optional<d::Array<uint8_t,true>> _n_color_15270=_n_binding_15463->_p_color;
{
(void)(this->_n_vine_15118.fill(0.0));
for(auto &&_n_item_15464:this->_n_vines_15116){d::check_cancel();auto _n_binding_15465=_n_item_15464;
double _n_vx_15271=d::at(_n_binding_15465,0.0);
double _n_top_15272=d::at(_n_binding_15465,1.0);
double _n_len_15273=d::at(_n_binding_15465,2.0);
double _n_ph_15274=d::at(_n_binding_15465,3.0);
{
{double _n_i_15275=0.0;
for(;d::truth((_n_i_15275<_n_len_15273));(void)((_n_i_15275++))){d::check_cancel();double _n_s_15276=(_n_i_15275/_n_len_15273);
double _n_r_15277=(_n_top_15272+_n_i_15275);
double _n_x_15278=d::round(([&](){auto _n_left_15466=((_n_vx_15271-0.5)+(((0.9*_n_s_15276)*_n_s_15276)*std::sin(((_n_t_15269*0.9)+_n_ph_15274))));auto _n_right_15467=(1.5*std::sin(((_n_i_15275*0.15)+_n_ph_15274)));return (_n_left_15466+_n_right_15467);})());
if(((d::truth((_n_x_15278<0.0))||d::truth((_n_x_15278>=_n_W_15067)))||d::truth((_n_r_15277>=_n_H_15068)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_15468=this->_n_vine_15118;auto _n_index_15469=((_n_r_15277*_n_W_15067)+_n_x_15278);auto _n_value_15470=1.0;d::put(_n_array_15468,_n_index_15469,_n_value_15470);return _n_value_15470;})());
if(d::truth((_n_hash_15087(_n_i_15275,double(d::i32(_n_vx_15271)|d::i32(0.0)))>0.5))){d::check_cancel();double _n_lx_15279=(_n_x_15278+(d::truth((_n_hash_15087(double(d::i32(_n_vx_15271)|d::i32(0.0)),_n_i_15275)>0.5))?1.0:(-d::number(1.0))));
if((d::truth((_n_lx_15279>=0.0))&&d::truth((_n_lx_15279<_n_W_15067)))){d::check_cancel();(void)(([&](){auto&& _n_array_15471=this->_n_vine_15118;auto _n_index_15472=((_n_r_15277*_n_W_15067)+_n_lx_15279);auto _n_value_15473=2.0;d::put(_n_array_15471,_n_index_15472,_n_value_15473);return _n_value_15473;})());
}
}
}}

}
}
{double _n_i_15280=0.0;
for(;d::truth((_n_i_15280<double(this->_n_shafts_15119.size())));(void)((_n_i_15280++))){d::check_cancel();double _n_p_15281=(_n_i_15280-70.0);
(void)(([&](){auto&& _n_array_15474=this->_n_shafts_15119;auto _n_index_15475=_n_i_15280;auto _n_value_15476=([&](){auto _n_left_15477=([&](){auto _n_argument_15479=0.55;auto _n_argument_15480=0.8;auto _n_argument_15481=_n_noise_15088(((_n_p_15281*0.16)+(_n_t_15269*0.04)),(3.1+(_n_t_15269*0.08)),0.0);return _n_smooth_15091(_n_argument_15479,_n_argument_15480,_n_argument_15481);})();auto _n_right_15478=_n_smooth_15091((-d::number(20.0)),50.0,_n_p_15281);return (_n_left_15477*_n_right_15478);})();d::put(_n_array_15474,_n_index_15475,_n_value_15476);return _n_value_15476;})());
}}
{double _n_r_15282=0.0;
for(;d::truth((_n_r_15282<_n_H_15068));(void)((_n_r_15282++))){d::check_cancel();double _n_y_15283=(_n_r_15282+0.5);
{double _n_x_15284=0.0;
for(;d::truth((_n_x_15284<_n_W_15067));(void)((_n_x_15284++))){d::check_cancel();double _n_k_15285=((_n_r_15282*_n_W_15067)+_n_x_15284);
double _n_px_15286=(_n_x_15284+0.5);
double _n_m_15287=d::at(this->_n_mat_15100,_n_k_15285);
double _n_cr_15288=0.0;
double _n_cg_15289=0.0;
double _n_cb_15290=0.0;
double _n_floor_15291=0.15;
double _n_air_15292=1.0;
if(((d::truth(d::at(this->_n_vine_15118,_n_k_15285))&&d::truth((_n_m_15287!=_n_TRUNK_15084)))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_15482=(_n_m_15287==_n_LEAF_15083);return d::truth(_n_logical_15482)?(d::at(this->_n_depth_15102,_n_k_15285)==2.0):_n_logical_15482;})()))))){d::check_cancel();(void)((_n_m_15287=_n_VINE_15085));
}
if(d::truth((_n_m_15287==_n_SKY_15078))){d::check_cancel();double _n_v_15293=(_n_y_15283/20.0);
double _n_ds_15294=d::hypot(std::initializer_list<double>{(_n_px_15286-d::at(_n_SUN_15073,0.0)),(_n_y_15283-d::at(_n_SUN_15073,1.0))});
double _n_sun_15295=(std::exp(((-d::number(_n_ds_15294))/60.0))*0.5);
double _n_veil_15296=(0.9+(0.15*d::at(this->_n_haze_15117,_n_k_15285)));
(void)((_n_cr_15288=(((0.5+(0.35*_n_v_15293))*_n_veil_15296)+_n_sun_15295)));
(void)((_n_cg_15289=(((0.74+(0.18*_n_v_15293))*_n_veil_15296)+(_n_sun_15295*0.95))));
(void)((_n_cb_15290=(((0.9+(0.06*_n_v_15293))*_n_veil_15296)+(_n_sun_15295*0.7))));
(void)((_n_floor_15291=0.3));
}else {d::check_cancel();if(d::truth((_n_m_15287==_n_CANOPY_15079))){d::check_cancel();double _n_s_15297=d::at(this->_n_shade_15101,_n_k_15285);
(void)((((_n_cr_15288=(0.24+(0.32*_n_s_15297))),(_n_cg_15289=(0.42+(0.4*_n_s_15297)))),(_n_cb_15290=(0.28+(0.22*_n_s_15297)))));
(void)((_n_floor_15291=0.2));
}else {d::check_cancel();if(d::truth((_n_m_15287==_n_ROCK_15080))){d::check_cancel();double _n_s_15298=d::at(this->_n_shade_15101,_n_k_15285);
double _n_w_15299=d::at(this->_n_wet_15104,_n_k_15285);
double _n_mo_15300=d::at(this->_n_moss_15103,_n_k_15285);
(void)((_n_cr_15288=((0.07+(0.27*_n_s_15298))*(1.0-(0.4*_n_w_15299)))));
(void)((_n_cg_15289=((0.09+(0.28*_n_s_15298))*(1.0-(0.35*_n_w_15299)))));
(void)((_n_cb_15290=((0.1+(0.28*_n_s_15298))*(1.0-(0.3*_n_w_15299)))));
double _n_g_15301=(0.25+(0.75*_n_s_15298));
(void)((_n_cr_15288=_n_mix_15092(_n_cr_15288,((0.12*_n_g_15301)+0.02),(_n_mo_15300*0.8))));
(void)((_n_cg_15289=_n_mix_15092(_n_cg_15289,((0.48*_n_g_15301)+0.05),(_n_mo_15300*0.8))));
(void)((_n_cb_15290=_n_mix_15092(_n_cb_15290,((0.1*_n_g_15301)+0.02),(_n_mo_15300*0.8))));
if((d::truth((_n_w_15299>0.3))&&d::truth((_n_hash_15087((_n_x_15284+(double(d::i32((_n_t_15269*6.0))|d::i32(0.0))*13.0)),_n_r_15282)>0.95)))){d::check_cancel();(void)((((_n_cr_15288=(_n_cr_15288+(0.5*_n_w_15299))),(_n_cg_15289=(_n_cg_15289+(0.55*_n_w_15299)))),(_n_cb_15290=(_n_cb_15290+(0.55*_n_w_15299)))));
}
(void)((_n_floor_15291=0.05));
}else {d::check_cancel();if(d::truth((_n_m_15287==_n_FALL_15081))){d::check_cancel();double _n_u_15302=d::at(this->_n_fallU_15105,_n_k_15285);
double _n_v_15303=d::at(this->_n_fallV_15106,_n_k_15285);
double _n_speed_15304=(8.0+(1.4*_n_v_15303));
double _n_s1_15305=_n_noise_15088((_n_px_15286*0.65),((_n_y_15283-(_n_t_15269*_n_speed_15304))*0.09),0.0);
double _n_s2_15306=_n_noise_15088(((_n_px_15286*1.4)+31.0),((_n_y_15283-((_n_t_15269*_n_speed_15304)*1.3))*0.2),0.0);
double _n_s_15307=((0.6*_n_s1_15305)+(0.4*_n_s2_15306));
double _n_lip_15308=_n_smooth_15091(4.0,0.0,_n_v_15303);
double _n_edgeK_15309=([&](){auto _n_argument_15483=1.0;auto _n_argument_15484=0.55;auto _n_argument_15485=std::fabs(_n_u_15302);return _n_smooth_15091(_n_argument_15483,_n_argument_15484,_n_argument_15485);})();
double _n_white_15310=_n_clamp_15090(((_n_smooth_15091(0.28,0.68,_n_s_15307)*(0.6+(0.4*_n_edgeK_15309)))+(0.3*_n_edgeK_15309)));
(void)((((_n_cr_15288=_n_mix_15092(0.3,0.98,_n_white_15310)),(_n_cg_15289=_n_mix_15092(0.56,1.0,_n_white_15310))),(_n_cb_15290=_n_mix_15092(0.6,1.0,_n_white_15310))));
(void)((((_n_cr_15288=_n_mix_15092(_n_cr_15288,(0.25+(0.5*_n_s_15307)),_n_lip_15308)),(_n_cg_15289=_n_mix_15092(_n_cg_15289,(0.72+(0.25*_n_s_15307)),_n_lip_15308))),(_n_cb_15290=_n_mix_15092(_n_cb_15290,(0.72+(0.25*_n_s_15307)),_n_lip_15308))));
double _n_thin_15311=((1.0-_n_edgeK_15309)*(1.0-_n_smooth_15091(0.35,0.62,_n_s_15307)));
(void)((((_n_cr_15288=_n_mix_15092(_n_cr_15288,0.08,_n_thin_15311)),(_n_cg_15289=_n_mix_15092(_n_cg_15289,0.11,_n_thin_15311))),(_n_cb_15290=_n_mix_15092(_n_cb_15290,0.12,_n_thin_15311))));
(void)((_n_floor_15291=0.2));
(void)((_n_air_15292=0.5));
}else {d::check_cancel();if(d::truth((_n_m_15287==_n_WATER_15082))){d::check_cancel();double _n_v_15312=((_n_y_15283-_n_POOL_15069)/(_n_H_15068-_n_POOL_15069));
double _n_dx_15313=((_n_px_15286-_n_BASE_X_15071)/1.6);
double _n_dy_15314=((_n_y_15283-_n_POOL_15069)*3.2);
double _n_d_15315=std::sqrt(((_n_dx_15313*_n_dx_15313)+(_n_dy_15314*_n_dy_15314)));
double _n_near_15316=std::exp(((-d::number(_n_d_15315))/30.0));
(void)((_n_cr_15288=((0.05+(0.2*_n_near_15316))-(0.03*_n_v_15312))));
(void)((_n_cg_15289=((0.45+(0.3*_n_near_15316))-(0.15*_n_v_15312))));
(void)((_n_cb_15290=((0.48+(0.28*_n_near_15316))-(0.14*_n_v_15312))));
double _n_rip_15317=((std::sin(((_n_d_15315*0.42)-(_n_t_15269*4.5)))*0.5)+0.5);
double _n_brk_15318=_n_noise_15088((_n_px_15286*0.12),((_n_y_15283*0.6)-(_n_t_15269*0.5)),0.0);
double _n_crest_15319=(([&](){auto _n_left_15486=_n_smooth_15091(0.7,0.95,_n_rip_15317);auto _n_right_15487=_n_smooth_15091(0.35,0.7,_n_brk_15318);return (_n_left_15486*_n_right_15487);})()*(0.5+(0.5*_n_near_15316)));
(void)((((_n_cr_15288=(_n_cr_15288+(0.55*_n_crest_15319))),(_n_cg_15289=(_n_cg_15289+(0.5*_n_crest_15319)))),(_n_cb_15290=(_n_cb_15290+(0.45*_n_crest_15319)))));
double _n_wob_15320=([&](){auto _n_argument_15488=0.4;auto _n_argument_15489=0.9;auto _n_argument_15490=_n_noise_15088((_n_px_15286*0.5),((_n_y_15283*0.8)-(_n_t_15269*2.0)),0.0);return _n_smooth_15091(_n_argument_15488,_n_argument_15489,_n_argument_15490);})();
double _n_boil_15321=0.0;
for(auto &&_n_item_15491:_n_FALLS_15086){d::check_cancel();auto _n_binding_15492=_n_item_15491;
double _n_c1_15322=d::at(_n_binding_15492,3.0);
double _n_w1_15323=d::at(_n_binding_15492,5.0);
{
double _n_refl_15324=([&](){auto _n_left_15493=(std::exp((-d::number(std::pow(((_n_px_15286-_n_c1_15322)/(_n_w1_15323*0.9)),2.0))))*_n_wob_15320);auto _n_right_15494=_n_smooth_15091(_n_H_15068,(_n_POOL_15069+4.0),_n_y_15283);return (_n_left_15493*_n_right_15494);})();
(void)((((_n_cr_15288=(_n_cr_15288+(0.25*_n_refl_15324))),(_n_cg_15289=(_n_cg_15289+(0.28*_n_refl_15324)))),(_n_cb_15290=(_n_cb_15290+(0.28*_n_refl_15324)))));
if(d::truth((_n_w1_15323<5.0))){d::check_cancel();(void)((_n_boil_15321=(_n_boil_15321+([&](){auto _n_left_15495=std::exp((-d::number(std::pow(((_n_px_15286-_n_c1_15322)/5.0),2.0))));auto _n_right_15496=_n_smooth_15091((_n_POOL_15069+6.0),_n_POOL_15069,_n_y_15283);return (_n_left_15495*_n_right_15496);})())));
}

}
}
double _n_zone_15325=([&](){auto _n_left_15497=std::exp((-d::number(std::pow(((_n_px_15286-_n_BASE_X_15071)/25.0),2.0))));auto _n_right_15498=_n_smooth_15091((_n_POOL_15069+15.0),_n_POOL_15069,_n_y_15283);return (_n_left_15497*_n_right_15498);})();
double _n_ch_15326=([&](){auto _n_argument_15499=((_n_px_15286*0.16)+(std::sin((_n_t_15269*1.3))*0.6));auto _n_argument_15500=((_n_y_15283*0.4)-(_n_t_15269*1.2));auto _n_argument_15501=2.0;auto _n_argument_15502=0.0;return _n_fbm_15089(_n_argument_15499,_n_argument_15500,_n_argument_15501,_n_argument_15502);})();
double _n_foam_15327=_n_clamp_15090((([&](){auto _n_left_15503=((_n_smooth_15091(0.4,0.6,_n_ch_15326)*_n_zone_15325)*1.7);auto _n_right_15504=((_n_smooth_15091(0.78,0.92,_n_brk_15318)*_n_near_15316)*0.7);return (_n_left_15503+_n_right_15504);})()+(_n_boil_15321*_n_ch_15326)));
(void)((((_n_cr_15288=_n_mix_15092(_n_cr_15288,0.96,_n_foam_15327)),(_n_cg_15289=_n_mix_15092(_n_cg_15289,0.99,_n_foam_15327))),(_n_cb_15290=_n_mix_15092(_n_cb_15290,1.0,_n_foam_15327))));
(void)((_n_floor_15291=0.15));
}else {d::check_cancel();if(d::truth((_n_m_15287==_n_LEAF_15083))){d::check_cancel();double _n_lay_15328=d::at(this->_n_depth_15102,_n_k_15285);
double _n_flick_15329=(d::truth((_n_lay_15328==2.0))?(0.1*std::sin(((_n_t_15269*1.7)+(_n_hash_15087(double(d::i32(_n_x_15284)>>(d::u32(2.0)&31)),double(d::i32(_n_r_15282)>>(d::u32(2.0)&31)))*6.28)))):0.0);
double _n_b_15330=_n_clamp_15090((((d::at(this->_n_shade_15101,_n_k_15285)*(d::truth((_n_lay_15328==2.0))?1.1:1.0))+(d::truth((_n_lay_15328==2.0))?0.06:0.0))+_n_flick_15329));
if(d::truth((_n_lay_15328==0.0))){d::check_cancel();(void)((((_n_cr_15288=(0.12+(0.3*_n_b_15330))),(_n_cg_15289=(0.28+(0.42*_n_b_15330)))),(_n_cb_15290=(0.2+(0.24*_n_b_15330)))));
(void)((_n_air_15292=0.9));
(void)((_n_floor_15291=0.12));
}else {d::check_cancel();if(d::truth((_n_lay_15328==1.0))){d::check_cancel();(void)((((_n_cr_15288=(0.03+((0.3*_n_b_15330)*_n_b_15330))),(_n_cg_15289=(0.1+(0.55*_n_b_15330)))),(_n_cb_15290=(0.03+(0.1*_n_b_15330)))));
(void)((_n_air_15292=0.55));
(void)((_n_floor_15291=0.04));
}else {d::check_cancel();(void)((((_n_cr_15288=(0.01+(((0.55*_n_b_15330)*_n_b_15330)*_n_b_15330))),(_n_cg_15289=(0.03+((0.78*_n_b_15330)*_n_b_15330)))),(_n_cb_15290=(0.01+((0.14*_n_b_15330)*_n_b_15330)))));
(void)((_n_air_15292=0.15));
(void)((_n_floor_15291=0.0));
}
}
}else {d::check_cancel();if(d::truth((_n_m_15287==_n_TRUNK_15084))){d::check_cancel();double _n_s_15331=d::at(this->_n_shade_15101,_n_k_15285);
(void)((((_n_cr_15288=(0.1+((0.55*_n_s_15331)*_n_s_15331))),(_n_cg_15289=(0.085+((0.47*_n_s_15331)*_n_s_15331)))),(_n_cb_15290=(0.06+((0.34*_n_s_15331)*_n_s_15331)))));
(void)((_n_air_15292=0.15));
(void)((_n_floor_15291=0.1));
}else {d::check_cancel();if(d::truth((d::at(this->_n_vine_15118,_n_k_15285)==2.0))){d::check_cancel();(void)((((_n_cr_15288=0.4),(_n_cg_15289=0.78)),(_n_cb_15290=0.2)));
}else {d::check_cancel();(void)((((_n_cr_15288=0.12),(_n_cg_15289=0.3)),(_n_cb_15290=0.1)));
}
(void)((_n_air_15292=0.4));
(void)((_n_floor_15291=0.0));
}
}
}
}
}
}
}
double _n_e_15332=(d::at(this->_n_spray_15107,_n_k_15285)*_n_air_15292);
if(d::truth((_n_e_15332>0.02))){d::check_cancel();double _n_dn_15333=_n_fbm_15089(((_n_px_15286*0.05)-(_n_t_15269*0.25)),((_n_y_15283*0.08)+(_n_t_15269*0.55)),2.0,0.0);
double _n_mist_15334=_n_clamp_15090((_n_e_15332*((_n_smooth_15091(0.3,0.7,_n_dn_15333)*1.1)+0.15)));
(void)((((_n_cr_15288=_n_mix_15092(_n_cr_15288,0.9,(_n_mist_15334*0.85))),(_n_cg_15289=_n_mix_15092(_n_cg_15289,0.96,(_n_mist_15334*0.85)))),(_n_cb_15290=_n_mix_15092(_n_cb_15290,0.97,(_n_mist_15334*0.85)))));
double _n_dr_15335=(d::hypot(std::initializer_list<double>{(_n_px_15286-d::at(_n_RAIN_15072,0.0)),(_n_y_15283-d::at(_n_RAIN_15072,1.0))})-d::at(_n_RAIN_15072,2.0));
if((d::truth((_n_dr_15335>(-d::number(6.0))))&&d::truth((_n_dr_15335<6.0)))){d::check_cancel();double _n_q_15336=(((_n_dr_15335+6.0)/12.0)*(double(_n_BOW_15094.size())-1.0));
double _n_i_15337=([&](){auto _n_argument_15505=(double(_n_BOW_15094.size())-2.0);auto _n_argument_15506=std::floor(_n_q_15336);return d::minimum({_n_argument_15505,_n_argument_15506});})();
double _n_f_15338=(_n_q_15336-_n_i_15337);
double _n_a_15339=([&](){auto _n_argument_15507=0.85;auto _n_argument_15508=(std::sin((((_n_dr_15335+6.0)/12.0)*ascii::PI))*((0.35+(_n_mist_15334*1.6))+(_n_e_15332*0.6)));return d::minimum({_n_argument_15507,_n_argument_15508});})();
(void)((_n_cr_15288=([&](){auto _n_argument_15509=_n_cr_15288;auto _n_argument_15510=_n_mix_15092(d::at(d::at(_n_BOW_15094,_n_i_15337),0.0),d::at(d::at(_n_BOW_15094,(_n_i_15337+1.0)),0.0),_n_f_15338);auto _n_argument_15511=_n_a_15339;return _n_mix_15092(_n_argument_15509,_n_argument_15510,_n_argument_15511);})()));
(void)((_n_cg_15289=([&](){auto _n_argument_15512=_n_cg_15289;auto _n_argument_15513=_n_mix_15092(d::at(d::at(_n_BOW_15094,_n_i_15337),1.0),d::at(d::at(_n_BOW_15094,(_n_i_15337+1.0)),1.0),_n_f_15338);auto _n_argument_15514=_n_a_15339;return _n_mix_15092(_n_argument_15512,_n_argument_15513,_n_argument_15514);})()));
(void)((_n_cb_15290=([&](){auto _n_argument_15515=_n_cb_15290;auto _n_argument_15516=_n_mix_15092(d::at(d::at(_n_BOW_15094,_n_i_15337),2.0),d::at(d::at(_n_BOW_15094,(_n_i_15337+1.0)),2.0),_n_f_15338);auto _n_argument_15517=_n_a_15339;return _n_mix_15092(_n_argument_15515,_n_argument_15516,_n_argument_15517);})()));
}
}
double _n_sh_15340=((([&](){auto _n_left_15518=d::at(this->_n_shafts_15119,([&](){auto _n_argument_15520=0.0;auto _n_argument_15521=d::minimum({279.0,double(d::i32(((_n_px_15286-(0.62*_n_y_15283))+70.0))|d::i32(0.0))});return d::maximum({_n_argument_15520,_n_argument_15521});})());auto _n_right_15519=_n_smooth_15091(_n_H_15068,10.0,_n_y_15283);return (_n_left_15518*_n_right_15519);})()*_n_air_15292)*0.75);
(void)((((_n_cr_15288=_n_mix_15092(_n_cr_15288,1.0,(_n_sh_15340*0.9))),(_n_cg_15289=_n_mix_15092(_n_cg_15289,0.94,(_n_sh_15340*0.85)))),(_n_cb_15290=_n_mix_15092(_n_cb_15290,0.7,(_n_sh_15340*0.7)))));
double _n_peak_15341=d::maximum({_n_cr_15288,_n_cg_15289,_n_cb_15290,0.0001});
double _n_level_15342=_n_clamp_15090((_n_floor_15291+(((1.0-_n_floor_15291)*std::pow(_n_peak_15341,0.85))*0.95)));
double _n_step_15343=([&](){auto _n_argument_15522=0.0;auto _n_argument_15523=([&](){auto _n_argument_15524=3.0;auto _n_argument_15525=d::round(((_n_level_15342*3.0)+d::at(_n_BAYER_15077,((double(d::i32(_n_r_15282)&d::i32(3.0))*4.0)+double(d::i32(_n_x_15284)&d::i32(3.0))))));return d::minimum({_n_argument_15524,_n_argument_15525});})();return d::maximum({_n_argument_15522,_n_argument_15523});})();
(void)(([&](){auto&& _n_array_15526=this->_n_out_15097;auto _n_index_15527=_n_k_15285;auto _n_value_15528=d::at(_n_DOTS_15075,_n_step_15343);d::put(_n_array_15526,_n_index_15527,_n_value_15528);return _n_value_15528;})());
if(d::truth(_n_color_15270)){d::check_cancel();double _n_want_15344=(d::truth(_n_step_15343)?d::minimum({1.0,((_n_level_15342+0.06)/d::at(_n_COVER_15076,_n_step_15343))}):0.0);
double _n_s_15345=d::minimum({2.2,((0.3+(0.7*_n_want_15344))/_n_peak_15341)});
(void)(([&](){auto&& _n_array_15529=d::read(_n_color_15270);auto _n_index_15530=_n_k_15285;auto _n_value_15531=([&](){auto _n_argument_15532=_n_clamp_15090((_n_cr_15288*_n_s_15345));auto _n_argument_15533=_n_clamp_15090((_n_cg_15289*_n_s_15345));auto _n_argument_15534=_n_clamp_15090((_n_cb_15290*_n_s_15345));return this->_n_nearest_15099(_n_argument_15532,_n_argument_15533,_n_argument_15534);})();d::put(_n_array_15529,_n_index_15530,_n_value_15531);return _n_value_15531;})());
}
}}
}}
double _n_ph_15346=(d::mod(_n_t_15269,_n_LOOP_15074)/_n_LOOP_15074);
{double _n_b_15347=0.0;
for(;d::truth((_n_b_15347<2.0));(void)((_n_b_15347++))){d::check_cancel();double _n_bx_15348=(((-d::number(30.0))+(_n_ph_15346*270.0))-(_n_b_15347*24.0));
double _n_by_15349=((29.0+(_n_b_15347*6.0))+(2.5*std::sin((((_n_ph_15346*ascii::PI)*4.0)+_n_b_15347))));
double _n_flap_15350=std::sin(((_n_t_15269*7.0)+(_n_b_15347*2.1)));
{double _n_r_15351=std::floor((_n_by_15349-10.0));
for(;d::truth((_n_r_15351<=(_n_by_15349+10.0)));(void)((_n_r_15351++))){d::check_cancel();{double _n_x_15352=std::floor((_n_bx_15348-18.0));
for(;d::truth((_n_x_15352<=(_n_bx_15348+8.0)));(void)((_n_x_15352++))){d::check_cancel();if((((d::truth((_n_x_15352<0.0))||d::truth((_n_x_15352>=_n_W_15067)))||d::truth((_n_r_15351<0.0)))||d::truth((_n_r_15351>=_n_H_15068)))){d::check_cancel();continue;
}
double _n_lx_15353=((_n_x_15352+0.5)-_n_bx_15348);
double _n_ly_15354=((_n_r_15351+0.5)-_n_by_15349);
double _n_c_15355=(-d::number(1.0));
double _n_tl_15356=((-d::number(_n_lx_15353))-4.0);
if(((d::truth((_n_tl_15356>0.0))&&d::truth((_n_tl_15356<13.0)))&&d::truth((std::fabs((_n_ly_15354-(_n_tl_15356*0.1)))<(1.3*(1.0-(_n_tl_15356/14.0))))))){d::check_cancel();(void)((_n_c_15355=(d::truth((_n_tl_15356>8.0))?25.0:23.0)));
}
if(d::truth(((std::pow((_n_lx_15353/4.6),2.0)+std::pow((_n_ly_15354/1.7),2.0))<1.0))){d::check_cancel();(void)((_n_c_15355=23.0));
}
if(d::truth(((std::pow((_n_lx_15353-4.4),2.0)+std::pow((_n_ly_15354+0.6),2.0))<2.6))){d::check_cancel();(void)((_n_c_15355=((d::truth((_n_lx_15353>4.6))&&d::truth((_n_ly_15354<(-d::number(0.6)))))?12.0:23.0)));
}
if((((d::truth((_n_lx_15353>5.6))&&d::truth((_n_lx_15353<7.2)))&&d::truth((_n_ly_15354>(-d::number(1.0)))))&&d::truth((_n_ly_15354<1.0)))){d::check_cancel();(void)((_n_c_15355=13.0));
}
double _n_tip_15357=((-d::number(_n_flap_15350))*8.0);
double _n_reach_15358=(1.0-(std::fabs((_n_lx_15353+0.5))/3.8));
if((d::truth((_n_reach_15358>0.0))&&d::truth((std::fabs(_n_tip_15357)>0.8)))){d::check_cancel();double _n_f_15359=(_n_ly_15354/(_n_tip_15357*_n_reach_15358));
if((d::truth((_n_f_15359>0.15))&&d::truth((_n_f_15359<1.0)))){d::check_cancel();(void)((_n_c_15355=(d::truth((_n_f_15359<0.4))?27.0:(d::truth((_n_f_15359<0.58))?22.0:25.0))));
}
}
if(d::truth((_n_c_15355<0.0))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_15535=this->_n_out_15097;auto _n_index_15536=((_n_r_15351*_n_W_15067)+_n_x_15352);auto _n_value_15537=d::String(u"●");d::put(_n_array_15535,_n_index_15536,_n_value_15537);return _n_value_15537;})());
if(d::truth(_n_color_15270)){d::check_cancel();(void)(([&](){auto&& _n_array_15538=d::read(_n_color_15270);auto _n_index_15539=((_n_r_15351*_n_W_15067)+_n_x_15352);auto _n_value_15540=_n_c_15355;d::put(_n_array_15538,_n_index_15539,_n_value_15540);return _n_value_15540;})());
}
}}
}}
}}
d::Array<d::String,false> _n_lines_15360=d::Array<d::String,false>{};
{double _n_r_15361=0.0;
for(;d::truth((_n_r_15361<_n_H_15068));(void)((_n_r_15361++))){d::check_cancel();(void)(_n_lines_15360.push(d::join(this->_n_out_15097.slice((_n_r_15361*_n_W_15067),((_n_r_15361+1.0)*_n_W_15067)),d::String(u""))));
}}
return d::join(_n_lines_15360,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("jungle-falls").cols)*ascii::catalog_meta("jungle-falls").rows);auto _env=std::make_shared<_n_Record_15362>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &jungle_falls_meta(){return catalog_meta("jungle-falls");}
std::unique_ptr<Piece> make_jungle_falls(const AsciiPieceOptions &o){return std::make_unique<Native_jungle_falls>(o);}
}
