// Direct, statically typed C++ from src/pieces/lake-pichola.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_16953;
struct _n_Record_16973;
struct _n_Record_17260;
struct _n_Record_17326;
struct _n_Record_16953{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_16953> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16953>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_16973{
d::Array<d::String,false> _p_art{};
double _p_y{};
double _p_v{};
double _p_x0{};
double _p_h{};
static std::shared_ptr<_n_Record_16973> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16973>();out->_p_art=d::decode<d::Array<d::String,false>>(j["art"]);out->_p_y=d::decode<double>(j["y"]);out->_p_v=d::decode<double>(j["v"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_h=d::decode<double>(j["h"]);return out;}
};
struct _n_Record_17260{
double _p_w{};
double _p_x{};
double _p_top{};
double _p_hull{};
d::Array<d::String,false> _p_art{};
double _p_y{};
double _p_v{};
double _p_x0{};
double _p_h{};
static std::shared_ptr<_n_Record_17260> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17260>();out->_p_w=d::decode<double>(j["w"]);out->_p_x=d::decode<double>(j["x"]);out->_p_top=d::decode<double>(j["top"]);out->_p_hull=d::decode<double>(j["hull"]);out->_p_art=d::decode<d::Array<d::String,false>>(j["art"]);out->_p_y=d::decode<double>(j["y"]);out->_p_v=d::decode<double>(j["v"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_h=d::decode<double>(j["h"]);return out;}
};
struct _n_Record_17326{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_17326> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17326>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_16974(double _a0,double _a1);
double _n_noise_16975(double _a0,double _a1,double _a2);
double _n_fbm_16976(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_16977(double _a0);
double _n_smooth_16978(double _a0,double _a1,double _a2);
double _n_mix_16979(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_16980(d::String _a0);
double _n_ramp_16982(double _a0,double _a1);
double _n_lampGlow_16983(double _a0,double _a1);
std::shared_ptr<_n_Record_16953> _n_meta_16952=[](){return ([&](){auto _n_object_17329=std::make_shared<_n_Record_16953>();_n_object_17329->_p_name=d::String(u"lake pichola");_n_object_17329->_p_category=d::String(u"scenes");_n_object_17329->_p_note=d::String(u"sunset on lake pichola, udaipur's palaces glowing over the water");_n_object_17329->_p_cols=200.0;_n_object_17329->_p_rows=100.0;_n_object_17329->_p_cell=1.0;_n_object_17329->_p_fps=15.0;_n_object_17329->_p_ground=d::String(u"#120a1a");_n_object_17329->_p_palette=d::Array<d::String,false>{d::String(u"#1c1028"),d::String(u"#2a1840"),d::String(u"#3d2058"),d::String(u"#55286a"),d::String(u"#6e3178"),d::String(u"#8a3c7c"),d::String(u"#a8477a"),d::String(u"#c85a6e"),d::String(u"#e0704e"),d::String(u"#f08a40"),d::String(u"#f8a840"),d::String(u"#ffc65a"),d::String(u"#ffe08a"),d::String(u"#fff2c8"),d::String(u"#fffaf0"),d::String(u"#2b1c40"),d::String(u"#3c2852"),d::String(u"#4f3666"),d::String(u"#6a4a7e"),d::String(u"#9a7aa0"),d::String(u"#f6e6d0"),d::String(u"#e8cdb0"),d::String(u"#d4a888"),d::String(u"#b88a78"),d::String(u"#8e6a6a"),d::String(u"#6a4a58"),d::String(u"#c88a9a"),d::String(u"#ffd070"),d::String(u"#ff9a3c"),d::String(u"#b8323a"),d::String(u"#140c1c")};return _n_object_17329;})();}();
const double _n_W_16954=[](){return 200.0;}();
const double _n_H_16955=[](){return 100.0;}();
const double _n_HORIZON_16956=[](){return 62.0;}();
d::Array<double,false> _n_SUN_16957=[](){return d::Array<double,false>{58.0,48.0};}();
const double _n_LP_Y_16958=[](){return 72.0;}();
const double _n_PLINTH_16959=[](){return 54.0;}();
const d::String _n_DOTS_16960=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_16961=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_16962=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_17014=_a0;
return ((_n_v_17014/16.0)-0.47);});}();
const double _n_AIR_16963=[](){return 0.0;}();
const double _n_FAR_16964=[](){return 1.0;}();
const double _n_NEAR_16965=[](){return 2.0;}();
const double _n_BUILT_16966=[](){return 3.0;}();
const double _n_LAMP_16967=[](){return 4.0;}();
d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false> _n_BLOCKS_16968=[](){return d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false>{std::make_shared<std::tuple<double,double,double,bool>>(114.0,125.0,49.0,false),std::make_shared<std::tuple<double,double,double,bool>>(125.0,138.0,41.0,false),std::make_shared<std::tuple<double,double,double,bool>>(138.0,144.0,33.0,true),std::make_shared<std::tuple<double,double,double,bool>>(144.0,158.0,38.0,false),std::make_shared<std::tuple<double,double,double,bool>>(158.0,165.0,28.0,true),std::make_shared<std::tuple<double,double,double,bool>>(165.0,178.0,36.0,false),std::make_shared<std::tuple<double,double,double,bool>>(178.0,184.0,31.0,true),std::make_shared<std::tuple<double,double,double,bool>>(184.0,200.0,40.0,false)};}();
d::Array<d::String,false> _n_SMALL_16969=[](){return d::Array<d::String,false>{d::String(u"...cccccc..."),d::String(u"..cccccccc.."),d::String(u"r..pssosp..."),d::String(u"r..pssssp..."),d::String(u"gggggggggggg"),d::String(u"hhhhhhhhhhhh"),d::String(u".hhhhhhhhhh.")};}();
d::Array<d::String,false> _n_MEDIUM_16970=[](){return d::Array<d::String,false>{d::String(u".....cccccccccc....."),d::String(u"....cccccccccccc...."),d::String(u"...cccccccccccccc..."),d::String(u".r...psssossssp....."),d::String(u".r...pssssssssp....."),d::String(u".r...pssssssssp....."),d::String(u"gggggggggggggggggggg"),d::String(u"hhhhhhhhhhhhhhhhhhhh"),d::String(u".hhhhhhhhhhhhhhhhhh."),d::String(u"...hhhhhhhhhhhhhh...")};}();
d::Array<d::String,false> _n_LARGE_16971=[](){return d::Array<d::String,false>{d::String(u"........cccccccccccccc......"),d::String(u".......cccccccccccccccc....."),d::String(u"......cccccccccccccccccc...."),d::String(u"......cccccccccccccccccc...."),d::String(u"..r.....psssssssosssssp....."),d::String(u"..r.....psssssssssssssp....."),d::String(u".rr.....psssssssssssssp....."),d::String(u"..r.....psssssssssssssp....."),d::String(u"gggggggggggggggggggggggggggg"),d::String(u"hhhhhhhhhhhhhhhhhhhhhhhhhhhh"),d::String(u".hhhhhhhhhhhhhhhhhhhhhhhhhh."),d::String(u"...hhhhhhhhhhhhhhhhhhhhhh...")};}();
d::Array<std::shared_ptr<_n_Record_16973>,false> _n_BOATS_16972=[](){return d::Array<std::shared_ptr<_n_Record_16973>,false>{([&](){auto _n_object_17332=std::make_shared<_n_Record_16973>();_n_object_17332->_p_art=_n_SMALL_16969;_n_object_17332->_p_y=79.0;_n_object_17332->_p_v=1.8;_n_object_17332->_p_x0=120.0;_n_object_17332->_p_h=0.31;return _n_object_17332;})(),([&](){auto _n_object_17334=std::make_shared<_n_Record_16973>();_n_object_17334->_p_art=_n_MEDIUM_16970;_n_object_17334->_p_y=88.0;_n_object_17334->_p_v=(-d::number(2.6));_n_object_17334->_p_x0=175.0;_n_object_17334->_p_h=0.62;return _n_object_17334;})(),([&](){auto _n_object_17336=std::make_shared<_n_Record_16973>();_n_object_17336->_p_art=_n_LARGE_16971;_n_object_17336->_p_y=95.0;_n_object_17336->_p_v=3.2;_n_object_17336->_p_x0=60.0;_n_object_17336->_p_h=0.87;return _n_object_17336;})()};}();
d::Array<d::Array<double,false>,false> _n_STOPS_16981=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.05,0.025,0.12},d::Array<double,false>{0.25,0.18,0.07,0.27},d::Array<double,false>{0.5,0.7,0.2,0.42},d::Array<double,false>{0.7,1.0,0.4,0.3},d::Array<double,false>{0.85,1.0,0.58,0.3},d::Array<double,false>{1.0,1.0,0.72,0.4}};}();
double _n_hash_16974(double _a0,double _a1){double _n_x_17015=_a0;
double _n_y_17016=_a1;
{
double _n_h_17017=([&](){auto _n_left_17337=d::imul(double(d::i32(_n_x_17015)|d::i32(0.0)),374761393.0);auto _n_right_17338=d::imul(double(d::i32(_n_y_17016)|d::i32(0.0)),668265263.0);return (_n_left_17337+_n_right_17338);})();
(void)((_n_h_17017=d::imul(double(d::i32(_n_h_17017)^d::i32(double(d::u32(_n_h_17017)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_17017)^d::i32(double(d::u32(_n_h_17017)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_16975(double _a0,double _a1,double _a2){double _n_x_17018=_a0;
double _n_y_17019=_a1;
double _n_period_17020=_a2;
{
double _n_xi_17021=std::floor(_n_x_17018);
double _n_yi_17022=std::floor(_n_y_17019);
double _n_fx_17023=(_n_x_17018-_n_xi_17021);
double _n_fy_17024=(_n_y_17019-_n_yi_17022);
double _n_u_17025=((_n_fx_17023*_n_fx_17023)*(3.0-(2.0*_n_fx_17023)));
double _n_v_17026=((_n_fy_17024*_n_fy_17024)*(3.0-(2.0*_n_fy_17024)));
double _n_x0_17027=_n_xi_17021;
double _n_x1_17028=(_n_xi_17021+1.0);
if(d::truth(_n_period_17020)){d::check_cancel();(void)((_n_x0_17027=d::mod((d::mod(_n_xi_17021,_n_period_17020)+_n_period_17020),_n_period_17020)));
(void)((_n_x1_17028=d::mod((_n_x0_17027+1.0),_n_period_17020)));
}
double _n_a_17029=_n_hash_16974(_n_x0_17027,_n_yi_17022);
double _n_b_17030=_n_hash_16974(_n_x1_17028,_n_yi_17022);
double _n_c_17031=_n_hash_16974(_n_x0_17027,(_n_yi_17022+1.0));
double _n_d_17032=_n_hash_16974(_n_x1_17028,(_n_yi_17022+1.0));
return (((_n_a_17029+((_n_b_17030-_n_a_17029)*_n_u_17025))+((_n_c_17031-_n_a_17029)*_n_v_17026))+(((((_n_a_17029-_n_b_17030)-_n_c_17031)+_n_d_17032)*_n_u_17025)*_n_v_17026));

}
}

double _n_fbm_16976(double _a0,double _a1,double _a2,double _a3){double _n_x_17033=_a0;
double _n_y_17034=_a1;
double _n_octaves_17035=_a2;
double _n_period_17036=_a3;
{
double _n_s_17037=0.0;
double _n_n_17038=0.0;
double _n_amp_17039=0.5;
double _n_f_17040=1.0;
{double _n_i_17041=0.0;
for(;d::truth((_n_i_17041<_n_octaves_17035));(void)((_n_i_17041++))){d::check_cancel();(void)((_n_s_17037=(_n_s_17037+(_n_amp_17039*_n_noise_16975((_n_x_17033*_n_f_17040),(_n_y_17034*_n_f_17040),(_n_period_17036*_n_f_17040))))));
(void)((_n_n_17038=(_n_n_17038+_n_amp_17039)));
(void)((_n_amp_17039=(_n_amp_17039*0.5)));
(void)((_n_f_17040=(_n_f_17040*2.0)));
}}
return (_n_s_17037/_n_n_17038);

}
}

double _n_clamp_16977(double _a0){double _n_v_17042=_a0;
return (d::truth((_n_v_17042<0.0))?0.0:(d::truth((_n_v_17042>1.0))?1.0:_n_v_17042));}

double _n_smooth_16978(double _a0,double _a1,double _a2){double _n_a_17043=_a0;
double _n_b_17044=_a1;
double _n_v_17045=_a2;
{
double _n_k_17046=_n_clamp_16977(((_n_v_17045-_n_a_17043)/(_n_b_17044-_n_a_17043)));
return ((_n_k_17046*_n_k_17046)*(3.0-(2.0*_n_k_17046)));

}
}

double _n_mix_16979(double _a0,double _a1,double _a2){double _n_a_17047=_a0;
double _n_b_17048=_a1;
double _n_k_17049=_a2;
return (_n_a_17047+((_n_b_17048-_n_a_17047)*_n_k_17049));}

d::Array<double,false> _n_hex_16980(d::String _a0){d::String _n_s_17050=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_17051=_a0;
return (([&](){auto _n_argument_17339=d::slice(_n_s_17050,_n_i_17051,(_n_i_17051+2.0));auto _n_argument_17340=16.0;return d::parseInt(_n_argument_17339,_n_argument_17340);})()/255.0);});}

double _n_ramp_16982(double _a0,double _a1){double _n_v_17052=_a0;
double _n_i_17053=_a1;
{
{double _n_s_17054=1.0;
for(;d::truth((_n_s_17054<double(_n_STOPS_16981.size())));(void)((_n_s_17054++))){d::check_cancel();if(d::truth((_n_v_17052<=d::at(d::at(_n_STOPS_16981,_n_s_17054),0.0)))){d::check_cancel();d::Array<double,false> _n_a_17055=d::at(_n_STOPS_16981,(_n_s_17054-1.0));
d::Array<double,false> _n_b_17056=d::at(_n_STOPS_16981,_n_s_17054);
return _n_mix_16979(d::at(_n_a_17055,_n_i_17053),d::at(_n_b_17056,_n_i_17053),((_n_v_17052-d::at(_n_a_17055,0.0))/(d::at(_n_b_17056,0.0)-d::at(_n_a_17055,0.0))));
}
}}
return d::at(d::at(_n_STOPS_16981,(double(_n_STOPS_16981.size())-1.0)),_n_i_17053);

}
}

double _n_lampGlow_16983(double _a0,double _a1){double _n_h_17057=_a0;
double _n_t_17058=_a1;
{
double _n_c_17059=d::mod((d::mod(((_n_t_17058/36.0)+(_n_h_17057*7.3)),1.0)+1.0),1.0);
double _n_on_17060=_n_smooth_16978(0.0,0.035,_n_c_17059);
if((d::truth((_n_c_17059<0.06))&&d::truth((std::sin(((_n_t_17058*31.0)+(_n_h_17057*90.0)))<0.0)))){d::check_cancel();(void)((_n_on_17060=(_n_on_17060*0.3)));
}
return (_n_on_17060*(0.86+(0.14*std::sin(((_n_t_17058*(3.0+(_n_h_17057*5.0)))+(_n_h_17057*60.0))))));

}
}

struct Native_lake_pichola final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_16984{};
double _n_N_16985{};
d::Array<d::String,false> _n_out_16986{};
d::Array<uint8_t,true> _n_lut_16987{};
d::Array<float,true> _n_skyR_16989{};
d::Array<float,true> _n_skyG_16990{};
d::Array<float,true> _n_skyB_16991{};
d::Array<uint8_t,true> _n_mat_16992{};
d::Array<float,true> _n_SR_16993{};
d::Array<float,true> _n_SG_16994{};
d::Array<float,true> _n_SB_16995{};
d::Array<float,true> _n_phase_16996{};
d::Array<uint8_t,true> _n_lake_16997{};
double _n_CW_17004{};
d::Array<float,true> _n_cover_17005{};
d::Array<float,true> _n_lit_17006{};
d::Array<float,true> _n_FR_17008{};
d::Array<float,true> _n_FG_17009{};
d::Array<float,true> _n_FB_17010{};
d::Array<uint8_t,true> _n_birds_17011{};
d::Array<double,false> _n_marked_17012{};
std::function<d::String(double,std::shared_ptr<_n_Record_17326>)> _render;
double _n_nearest_16988(double _a0,double _a1,double _a2){double _n_r_17061=_a0;
double _n_g_17062=_a1;
double _n_b_17063=_a2;
{
double _n_k_17064=([&](){auto _n_left_17517=([&](){auto _n_left_17519=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_17061*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_17520=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_17062*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_17519)|d::i32(_n_right_17520));})();auto _n_right_17518=d::minimum({31.0,double(d::i32((_n_b_17063*31.99))|d::i32(0.0))});return double(d::i32(_n_left_17517)|d::i32(_n_right_17518));})();
if(d::truth((d::at(this->_n_lut_16987,_n_k_17064)!=255.0))){d::check_cancel();return d::at(this->_n_lut_16987,_n_k_17064);
}
double _n_best_17065=0.0;
double _n_bd_17066=1000000000.0;
{double _n_i_17067=0.0;
for(;d::truth((_n_i_17067<double(this->_n_P_16984.size())));(void)((_n_i_17067++))){d::check_cancel();double _n_dr_17068=(d::at(d::at(this->_n_P_16984,_n_i_17067),0.0)-_n_r_17061);
double _n_dg_17069=(d::at(d::at(this->_n_P_16984,_n_i_17067),1.0)-_n_g_17062);
double _n_db_17070=(d::at(d::at(this->_n_P_16984,_n_i_17067),2.0)-_n_b_17063);
double _n_d_17071=((((0.3*_n_dr_17068)*_n_dr_17068)+((0.5*_n_dg_17069)*_n_dg_17069))+((0.2*_n_db_17070)*_n_db_17070));
if(d::truth((_n_d_17071<_n_bd_17066))){d::check_cancel();(void)(((_n_bd_17066=_n_d_17071),(_n_best_17065=_n_i_17067)));
}
}}
return ([&](){auto&& _n_array_17521=this->_n_lut_16987;auto _n_index_17522=_n_k_17064;auto _n_value_17523=_n_best_17065;d::put(_n_array_17521,_n_index_17522,_n_value_17523);return _n_value_17523;})();

}
}

void _n_put_16998(double _a0,double _a1,double _a2,double _a3,double _a4,std::optional<double> _a5){double _n_x_17087=_a0;
double _n_y_17088=_a1;
double _n_cr_17089=_a2;
double _n_cg_17090=_a3;
double _n_cb_17091=_a4;
double _n_m_17092=(d::present(_a5)?d::read(_a5):_n_BUILT_16966);
{
if((((d::truth((_n_x_17087<0.0))||d::truth((_n_x_17087>=_n_W_16954)))||d::truth((_n_y_17088<0.0)))||d::truth((_n_y_17088>=_n_H_16955)))){d::check_cancel();return;
}
double _n_k_17093=((_n_y_17088*_n_W_16954)+_n_x_17087);
(void)((((([&](){auto&& _n_array_17524=this->_n_mat_16992;auto _n_index_17525=_n_k_17093;auto _n_value_17526=_n_m_17092;d::put(_n_array_17524,_n_index_17525,_n_value_17526);return _n_value_17526;})(),([&](){auto&& _n_array_17527=this->_n_SR_16993;auto _n_index_17528=_n_k_17093;auto _n_value_17529=_n_cr_17089;d::put(_n_array_17527,_n_index_17528,_n_value_17529);return _n_value_17529;})()),([&](){auto&& _n_array_17530=this->_n_SG_16994;auto _n_index_17531=_n_k_17093;auto _n_value_17532=_n_cg_17090;d::put(_n_array_17530,_n_index_17531,_n_value_17532);return _n_value_17532;})()),([&](){auto&& _n_array_17533=this->_n_SB_16995;auto _n_index_17534=_n_k_17093;auto _n_value_17535=_n_cb_17091;d::put(_n_array_17533,_n_index_17534,_n_value_17535);return _n_value_17535;})()));

}
}

void _n_lampAt_16999(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_17094=_a0;
double _n_y_17095=_a1;
double _n_h_17096=_a2;
double _n_cr_17097=_a3;
double _n_cg_17098=_a4;
double _n_cb_17099=_a5;
{
(void)(this->_n_put_16998(_n_x_17094,_n_y_17095,_n_cr_17097,_n_cg_17098,_n_cb_17099,std::optional<double>(_n_LAMP_16967)));
if((((d::truth((_n_x_17094>=0.0))&&d::truth((_n_x_17094<_n_W_16954)))&&d::truth((_n_y_17095>=0.0)))&&d::truth((_n_y_17095<_n_H_16955)))){d::check_cancel();(void)(([&](){auto&& _n_array_17536=this->_n_phase_16996;auto _n_index_17537=((_n_y_17095*_n_W_16954)+_n_x_17094);auto _n_value_17538=_n_h_17096;d::put(_n_array_17536,_n_index_17537,_n_value_17538);return _n_value_17538;})());
}

}
}

double _n_back_17000(double _a0){double _n_x_17100=_a0;
return ([&](){auto _n_left_17539=(_n_HORIZON_16956-([&](){auto _n_left_17541=([&](){auto _n_left_17543=(6.0+(9.0*std::exp((-d::number(std::pow(((_n_x_17100-150.0)/40.0),2.0))))));auto _n_right_17544=(5.0*std::exp((-d::number(std::pow(((_n_x_17100-52.0)/18.0),2.0)))));return (_n_left_17543+_n_right_17544);})();auto _n_right_17542=(3.0*std::exp((-d::number(std::pow(((_n_x_17100-108.0)/12.0),2.0)))));return (_n_left_17541+_n_right_17542);})());auto _n_right_17540=(3.0*_n_fbm_16976((_n_x_17100*0.05),1.7,3.0,0.0));return (_n_left_17539-_n_right_17540);})();}

double _n_far_17001(double _a0){double _n_x_17101=_a0;
return ([&](){auto _n_left_17545=(_n_HORIZON_16956-([&](){auto _n_left_17547=([&](){auto _n_left_17549=([&](){auto _n_left_17551=(3.0+(17.0*std::exp((-d::number(std::pow(((_n_x_17101-26.0)/20.0),2.0))))));auto _n_right_17552=(6.0*std::exp((-d::number(std::pow(((_n_x_17101-26.0)/7.0),2.0)))));return (_n_left_17551+_n_right_17552);})();auto _n_right_17550=(7.0*std::exp((-d::number(std::pow(((_n_x_17101-6.0)/10.0),2.0)))));return (_n_left_17549+_n_right_17550);})();auto _n_right_17548=(4.0*std::exp((-d::number(std::pow(((_n_x_17101-54.0)/11.0),2.0)))));return (_n_left_17547+_n_right_17548);})());auto _n_right_17546=(2.0*_n_fbm_16976((_n_x_17101*0.06),5.3,3.0,0.0));return (_n_left_17545-_n_right_17546);})();}

double _n_near_17002(double _a0){double _n_x_17102=_a0;
return ([&](){auto _n_left_17553=(_n_HORIZON_16956-([&](){auto _n_left_17555=(1.5+(5.0*std::exp((-d::number(std::pow(((_n_x_17102-8.0)/22.0),2.0))))));auto _n_right_17556=(1.5*std::exp((-d::number(std::pow(((_n_x_17102-60.0)/14.0),2.0)))));return (_n_left_17555+_n_right_17556);})());auto _n_right_17554=(2.2*_n_fbm_16976((_n_x_17102*0.25),4.1,2.0,0.0));return (_n_left_17553-_n_right_17554);})();}

std::array<double,3> _n_stone_17003(double _a0,double _a1,double _a2){double _n_x_17134=_a0;
double _n_y_17135=_a1;
double _n_s_17136=_a2;
{
double _n_k_17137=_n_clamp_16977(_n_s_17136);
return std::array<double,3>{_n_mix_16979(0.7,1.0,_n_k_17137),_n_mix_16979(0.5,0.84,_n_k_17137),_n_mix_16979(0.6,0.6,_n_k_17137)};

}
}

double _n_density_17007(double _a0,double _a1){double _n_x_17220=_a0;
double _n_y_17221=_a1;
return ([&](){auto _n_left_17557=([&](){auto _n_left_17559=_n_fbm_16976((_n_x_17220*0.01),(_n_y_17221*0.12),4.0,(this->_n_CW_17004*0.01));auto _n_right_17560=(0.12*_n_smooth_16978(16.0,6.0,_n_y_17221));return (_n_left_17559-_n_right_17560);})();auto _n_right_17558=(0.12*_n_smooth_16978(34.0,44.0,_n_y_17221));return (_n_left_17557-_n_right_17558);})();}

void _n_emit_17013(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,std::optional<d::Array<uint8_t,true>> _a8){double _n_k_17226=_a0;
double _n_r_17227=_a1;
double _n_x_17228=_a2;
double _n_cr_17229=_a3;
double _n_cg_17230=_a4;
double _n_cb_17231=_a5;
double _n_floor_17232=_a6;
double _n_fade_17233=_a7;
std::optional<d::Array<uint8_t,true>> _n_color_17234=_a8;
{
(void)(((([&](){auto&& _n_array_17561=this->_n_FR_17008;auto _n_index_17562=_n_k_17226;auto _n_value_17563=_n_cr_17229;d::put(_n_array_17561,_n_index_17562,_n_value_17563);return _n_value_17563;})(),([&](){auto&& _n_array_17564=this->_n_FG_17009;auto _n_index_17565=_n_k_17226;auto _n_value_17566=_n_cg_17230;d::put(_n_array_17564,_n_index_17565,_n_value_17566);return _n_value_17566;})()),([&](){auto&& _n_array_17567=this->_n_FB_17010;auto _n_index_17568=_n_k_17226;auto _n_value_17569=_n_cb_17231;d::put(_n_array_17567,_n_index_17568,_n_value_17569);return _n_value_17569;})()));
double _n_peak_17235=d::maximum({_n_cr_17229,_n_cg_17230,_n_cb_17231,0.0001});
double _n_level_17236=(_n_clamp_16977((_n_floor_17232+(((1.0-_n_floor_17232)*std::pow(_n_peak_17235,0.85))*0.95)))*_n_fade_17233);
double _n_step_17237=([&](){auto _n_argument_17570=0.0;auto _n_argument_17571=([&](){auto _n_argument_17572=3.0;auto _n_argument_17573=d::round(((_n_level_17236*3.0)+d::at(_n_BAYER_16962,((double(d::i32(_n_r_17227)&d::i32(3.0))*4.0)+double(d::i32(_n_x_17228)&d::i32(3.0))))));return d::minimum({_n_argument_17572,_n_argument_17573});})();return d::maximum({_n_argument_17570,_n_argument_17571});})();
(void)(([&](){auto&& _n_array_17574=this->_n_out_16986;auto _n_index_17575=_n_k_17226;auto _n_value_17576=d::at(_n_DOTS_16960,_n_step_17237);d::put(_n_array_17574,_n_index_17575,_n_value_17576);return _n_value_17576;})());
if(d::truth(_n_color_17234)){d::check_cancel();double _n_want_17238=(d::truth(_n_step_17237)?d::minimum({1.0,((_n_level_17236+0.06)/d::at(_n_COVER_16961,_n_step_17237))}):0.0);
double _n_s_17239=((0.3+(0.7*_n_want_17238))/_n_peak_17235);
(void)(([&](){auto&& _n_array_17577=d::read(_n_color_17234);auto _n_index_17578=_n_k_17226;auto _n_value_17579=([&](){auto _n_argument_17580=_n_clamp_16977((_n_cr_17229*_n_s_17239));auto _n_argument_17581=_n_clamp_16977((_n_cg_17230*_n_s_17239));auto _n_argument_17582=_n_clamp_16977((_n_cb_17231*_n_s_17239));return this->_n_nearest_16988(_n_argument_17580,_n_argument_17581,_n_argument_17582);})();d::put(_n_array_17577,_n_index_17578,_n_value_17579);return _n_value_17579;})());
}

}
}

explicit Native_lake_pichola(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_16984=d::map(_n_meta_16952->_p_palette,_n_hex_16980);
this->_n_N_16985=(_n_W_16954*_n_H_16955);
this->_n_out_16986=d::Array<d::String,false>(size_t(this->_n_N_16985));
this->_n_lut_16987=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_skyR_16989=d::Array<float,true>(size_t((_n_W_16954*_n_HORIZON_16956)));
this->_n_skyG_16990=d::Array<float,true>(size_t((_n_W_16954*_n_HORIZON_16956)));
this->_n_skyB_16991=d::Array<float,true>(size_t((_n_W_16954*_n_HORIZON_16956)));
{double _n_r_17072=0.0;
for(;d::truth((_n_r_17072<_n_HORIZON_16956));(void)((_n_r_17072++))){d::check_cancel();{double _n_x_17073=0.0;
for(;d::truth((_n_x_17073<_n_W_16954));(void)((_n_x_17073++))){d::check_cancel();double _n_k_17074=((_n_r_17072*_n_W_16954)+_n_x_17073);
double _n_y_17075=(_n_r_17072+0.5);
double _n_v_17076=(_n_y_17075/_n_HORIZON_16956);
double _n_away_17077=(std::fabs(((_n_x_17073+0.5)-d::at(_n_SUN_16957,0.0)))/200.0);
double _n_veil_17078=(0.93+(0.14*_n_fbm_16976((_n_x_17073*0.04),(_n_y_17075*0.1),3.0,0.0)));
double _n_cr_17079=((_n_ramp_16982(_n_v_17076,1.0)-((0.2*_n_away_17077)*_n_v_17076))*_n_veil_17078);
double _n_cg_17080=((_n_ramp_16982(_n_v_17076,2.0)-((0.08*_n_away_17077)*_n_v_17076))*_n_veil_17078);
double _n_cb_17081=((_n_ramp_16982(_n_v_17076,3.0)+((0.06*_n_away_17077)*_n_v_17076))*_n_veil_17078);
double _n_dx_17082=((_n_x_17073+0.5)-d::at(_n_SUN_16957,0.0));
double _n_dy_17083=(_n_y_17075-d::at(_n_SUN_16957,1.0));
double _n_dm_17084=std::sqrt(((_n_dx_17082*_n_dx_17082)+(_n_dy_17083*_n_dy_17083)));
double _n_g_17085=([&](){auto _n_left_17341=([&](){auto _n_left_17343=(std::exp(((-d::number(_n_dm_17084))/8.0))*0.6);auto _n_right_17344=(std::exp(((-d::number(_n_dm_17084))/26.0))*0.35);return (_n_left_17343+_n_right_17344);})();auto _n_right_17342=(std::exp(((-d::number(_n_dm_17084))/70.0))*0.18);return (_n_left_17341+_n_right_17342);})();
(void)((((_n_cr_17079=(_n_cr_17079+_n_g_17085)),(_n_cg_17080=(_n_cg_17080+(_n_g_17085*0.75)))),(_n_cb_17081=(_n_cb_17081+(_n_g_17085*0.4)))));
double _n_disk_17086=_n_smooth_16978(6.2,5.2,_n_dm_17084);
(void)((((_n_cr_17079=_n_mix_16979(_n_cr_17079,1.0,_n_disk_17086)),(_n_cg_17080=_n_mix_16979(_n_cg_17080,0.95,_n_disk_17086))),(_n_cb_17081=_n_mix_16979(_n_cb_17081,0.8,_n_disk_17086))));
(void)(((([&](){auto&& _n_array_17345=this->_n_skyR_16989;auto _n_index_17346=_n_k_17074;auto _n_value_17347=_n_cr_17079;d::put(_n_array_17345,_n_index_17346,_n_value_17347);return _n_value_17347;})(),([&](){auto&& _n_array_17348=this->_n_skyG_16990;auto _n_index_17349=_n_k_17074;auto _n_value_17350=_n_cg_17080;d::put(_n_array_17348,_n_index_17349,_n_value_17350);return _n_value_17350;})()),([&](){auto&& _n_array_17351=this->_n_skyB_16991;auto _n_index_17352=_n_k_17074;auto _n_value_17353=_n_cb_17081;d::put(_n_array_17351,_n_index_17352,_n_value_17353);return _n_value_17353;})()));
}}
}}
this->_n_mat_16992=d::Array<uint8_t,true>(size_t(this->_n_N_16985));
this->_n_SR_16993=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_SG_16994=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_SB_16995=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_phase_16996=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_lake_16997=d::Array<uint8_t,true>(size_t(this->_n_N_16985));
{double _n_r_17103=0.0;
for(;d::truth((_n_r_17103<_n_HORIZON_16956));(void)((_n_r_17103++))){d::check_cancel();{double _n_x_17104=0.0;
for(;d::truth((_n_x_17104<_n_W_16954));(void)((_n_x_17104++))){d::check_cancel();double _n_y_17105=(_n_r_17103+0.5);
double _n_k_17106=((_n_r_17103*_n_W_16954)+_n_x_17104);
double _n_fr_17107=this->_n_far_17001((_n_x_17104+0.5));
double _n_br_17108=this->_n_back_17000((_n_x_17104+0.5));
double _n_sunward_17109=std::exp(((-d::number(std::fabs((_n_x_17104-d::at(_n_SUN_16957,0.0)))))/45.0));
if(d::truth((_n_y_17105>=this->_n_near_17002((_n_x_17104+0.5))))){d::check_cancel();double _n_s_17110=(0.75+(0.5*_n_fbm_16976((_n_x_17104*0.3),(_n_y_17105*0.3),2.0,0.0)));
(void)(this->_n_put_16998(_n_x_17104,_n_r_17103,(0.1*_n_s_17110),(0.05*_n_s_17110),(0.13*_n_s_17110),std::optional<double>(_n_NEAR_16965)));
}else {d::check_cancel();if(d::truth((_n_y_17105>=_n_fr_17107))){d::check_cancel();double _n_dd_17111=(_n_y_17105-_n_fr_17107);
double _n_tex_17112=(0.85+(0.3*_n_fbm_16976((_n_x_17104*0.15),(_n_y_17105*0.25),3.0,0.0)));
double _n_rim_17113=((std::exp(((-d::number(_n_dd_17111))/0.9))*0.3)*(0.3+_n_sunward_17109));
(void)(([&](){auto _n_argument_17354=_n_x_17104;auto _n_argument_17355=_n_r_17103;auto _n_argument_17356=(([&](){auto _n_left_17357=(_n_mix_16979(d::at(this->_n_skyR_16989,_n_k_17106),0.15,0.86)*_n_tex_17112);auto _n_right_17358=(1.0-(0.3*_n_smooth_16978(0.0,14.0,_n_dd_17111)));return (_n_left_17357*_n_right_17358);})()+_n_rim_17113);auto _n_argument_17359=(([&](){auto _n_left_17360=(_n_mix_16979(d::at(this->_n_skyG_16990,_n_k_17106),0.07,0.86)*_n_tex_17112);auto _n_right_17361=(1.0-(0.3*_n_smooth_16978(0.0,14.0,_n_dd_17111)));return (_n_left_17360*_n_right_17361);})()+(_n_rim_17113*0.55));auto _n_argument_17362=(([&](){auto _n_left_17363=(_n_mix_16979(d::at(this->_n_skyB_16991,_n_k_17106),0.21,0.86)*_n_tex_17112);auto _n_right_17364=(1.0-(0.3*_n_smooth_16978(0.0,14.0,_n_dd_17111)));return (_n_left_17363*_n_right_17364);})()+(_n_rim_17113*0.3));auto _n_argument_17365=_n_FAR_16964;return this->_n_put_16998(_n_argument_17354,_n_argument_17355,_n_argument_17356,_n_argument_17359,_n_argument_17362,std::optional<double>(_n_argument_17365));})());
}else {d::check_cancel();if(d::truth((_n_y_17105>=_n_br_17108))){d::check_cancel();double _n_dd_17114=(_n_y_17105-_n_br_17108);
double _n_tex_17115=(0.9+(0.2*_n_fbm_16976((_n_x_17104*0.1),(_n_y_17105*0.2),3.0,0.0)));
double _n_rim_17116=((std::exp(((-d::number(_n_dd_17114))/1.2))*0.4)*_n_sunward_17109);
(void)(([&](){auto _n_argument_17366=_n_x_17104;auto _n_argument_17367=_n_r_17103;auto _n_argument_17368=((_n_mix_16979(d::at(this->_n_skyR_16989,_n_k_17106),0.44,0.55)*_n_tex_17115)+_n_rim_17116);auto _n_argument_17369=((_n_mix_16979(d::at(this->_n_skyG_16990,_n_k_17106),0.24,0.55)*_n_tex_17115)+(_n_rim_17116*0.65));auto _n_argument_17370=((_n_mix_16979(d::at(this->_n_skyB_16991,_n_k_17106),0.42,0.55)*_n_tex_17115)+(_n_rim_17116*0.35));auto _n_argument_17371=_n_FAR_16964;return this->_n_put_16998(_n_argument_17366,_n_argument_17367,_n_argument_17368,_n_argument_17369,_n_argument_17370,std::optional<double>(_n_argument_17371));})());
}
}
}
}}
}}
{
double _n_M_17117=26.0;
double _n_base_17118=(d::round(this->_n_far_17001((_n_M_17117+0.5)))+1.0);
d::Array<double,false> _n_mc_17119=d::Array<double,false>{0.11,0.05,0.14};
{double _n_x_17120=(_n_M_17117-8.0);
for(;d::truth((_n_x_17120<(_n_M_17117+9.0)));(void)((_n_x_17120++))){d::check_cancel();{double _n_y_17121=(_n_base_17118-1.0);
for(;d::truth((_n_y_17121<(this->_n_far_17001((_n_x_17120+0.5))+1.0)));(void)((_n_y_17121++))){d::check_cancel();(void)(this->_n_put_16998(_n_x_17120,_n_y_17121,d::at(_n_mc_17119,0.0),d::at(_n_mc_17119,1.0),d::at(_n_mc_17119,2.0),std::optional<double>(_n_FAR_16964)));
}}
}}
{double _n_x_17122=(_n_M_17117-6.0);
for(;d::truth((_n_x_17122<(_n_M_17117+7.0)));(void)((_n_x_17122++))){d::check_cancel();{double _n_y_17123=(_n_base_17118-5.0);
for(;d::truth((_n_y_17123<_n_base_17118));(void)((_n_y_17123++))){d::check_cancel();(void)(this->_n_put_16998(_n_x_17122,_n_y_17123,d::at(_n_mc_17119,0.0),d::at(_n_mc_17119,1.0),d::at(_n_mc_17119,2.0),std::optional<double>{}));
}}
}}
{double _n_x_17124=(_n_M_17117-2.0);
for(;d::truth((_n_x_17124<(_n_M_17117+3.0)));(void)((_n_x_17124++))){d::check_cancel();{double _n_y_17125=(_n_base_17118-9.0);
for(;d::truth((_n_y_17125<(_n_base_17118-5.0)));(void)((_n_y_17125++))){d::check_cancel();(void)(this->_n_put_16998(_n_x_17124,_n_y_17125,d::at(_n_mc_17119,0.0),d::at(_n_mc_17119,1.0),d::at(_n_mc_17119,2.0),std::optional<double>{}));
}}
}}
auto _n_dome_17126=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_cx_17127=_a0;
double _n_by_17128=_a1;
double _n_rx_17129=_a2;
double _n_ry_17130=_a3;
{
{double _n_y_17131=std::floor((_n_by_17128-_n_ry_17130));
for(;d::truth((_n_y_17131<_n_by_17128));(void)((_n_y_17131++))){d::check_cancel();{double _n_x_17132=std::floor((_n_cx_17127-_n_rx_17129));
for(;d::truth((_n_x_17132<=(_n_cx_17127+_n_rx_17129)));(void)((_n_x_17132++))){d::check_cancel();if(d::truth(((std::pow((((_n_x_17132+0.5)-_n_cx_17127)/_n_rx_17129),2.0)+std::pow((((_n_by_17128-_n_y_17131)-0.5)/_n_ry_17130),2.0))<1.0))){d::check_cancel();(void)(this->_n_put_16998(_n_x_17132,_n_y_17131,d::at(_n_mc_17119,0.0),d::at(_n_mc_17119,1.0),d::at(_n_mc_17119,2.0),std::optional<double>{}));
}
}}
}}

}
};
(void)(_n_dome_17126((_n_M_17117+0.5),(_n_base_17118-9.0),3.0,3.4));
(void)(this->_n_put_16998(_n_M_17117,(_n_base_17118-13.0),d::at(_n_mc_17119,0.0),d::at(_n_mc_17119,1.0),d::at(_n_mc_17119,2.0),std::optional<double>{}));
(void)(_n_dome_17126((_n_M_17117-5.0),(_n_base_17118-5.0),1.6,2.0));
(void)(_n_dome_17126((_n_M_17117+6.0),(_n_base_17118-5.0),1.6,2.0));
for(auto &&_n_item_17372:d::Array<double,false>{(_n_M_17117-4.0),(_n_M_17117-1.0),(_n_M_17117+2.0),(_n_M_17117+5.0)}){d::check_cancel();double _n_x_17133=_n_item_17372;
(void)(([&](){auto _n_argument_17373=_n_x_17133;auto _n_argument_17374=(_n_base_17118-3.0);auto _n_argument_17375=_n_hash_16974(_n_x_17133,7.0);auto _n_argument_17376=d::at(_n_mc_17119,0.0);auto _n_argument_17377=d::at(_n_mc_17119,1.0);auto _n_argument_17378=d::at(_n_mc_17119,2.0);return this->_n_lampAt_16999(_n_argument_17373,_n_argument_17374,_n_argument_17375,_n_argument_17376,_n_argument_17377,_n_argument_17378);})());
}
(void)(([&](){auto _n_argument_17379=_n_M_17117;auto _n_argument_17380=(_n_base_17118-7.0);auto _n_argument_17381=_n_hash_16974(_n_M_17117,8.0);auto _n_argument_17382=d::at(_n_mc_17119,0.0);auto _n_argument_17383=d::at(_n_mc_17119,1.0);auto _n_argument_17384=d::at(_n_mc_17119,2.0);return this->_n_lampAt_16999(_n_argument_17379,_n_argument_17380,_n_argument_17381,_n_argument_17382,_n_argument_17383,_n_argument_17384);})());

}
(void)(d::forEach(_n_BLOCKS_16968,[&]( std::shared_ptr<std::tuple<double,double,double,bool>> _a0,double _a1) mutable ->void{auto _n_binding_17385=_a0;
double _n_x0_17138=std::get<0>(*_n_binding_17385);
double _n_x1_17139=std::get<1>(*_n_binding_17385);
double _n_top_17140=std::get<2>(*_n_binding_17385);
bool _n_tower_17141=std::get<3>(*_n_binding_17385);
double _n_bi_17142=_a1;
{
double _n_w_17143=(_n_x1_17139-_n_x0_17138);
double _n_cx_17144=((_n_x0_17138+_n_x1_17139)/2.0);
double _n_off_17145=double(d::i32(d::mod(_n_w_17143,5.0))>>(d::u32(1.0)&31));
{double _n_y_17146=_n_top_17140;
for(;d::truth((_n_y_17146<_n_PLINTH_16959));(void)((_n_y_17146++))){d::check_cancel();{double _n_x_17147=_n_x0_17138;
for(;d::truth((_n_x_17147<_n_x1_17139));(void)((_n_x_17147++))){d::check_cancel();double _n_s_17148=(_n_smooth_16978(56.0,36.0,_n_y_17146)*(d::truth(double(d::i32(_n_bi_17142)&d::i32(1.0)))?0.92:1.0));
if(d::truth(_n_tower_17141)){d::check_cancel();(void)((_n_s_17148=(_n_s_17148+(d::truth(((_n_x_17147+0.5)<_n_cx_17144))?0.12:(-d::number(0.08))))));
}
double _n_ry_17149=(_n_y_17146-_n_top_17140);
double _n_fy_17150=d::mod(_n_ry_17149,5.0);
double _n_g_17151=std::floor((((_n_x_17147-_n_x0_17138)-_n_off_17145)/5.0));
double _n_fx_17152=(((_n_x_17147-_n_x0_17138)-_n_off_17145)-(_n_g_17151*5.0));
bool _n_fits_17153=([&]()->bool{auto _n_logical_17386=(((_n_x_17147-_n_x0_17138)-_n_off_17145)>=0.0);return d::truth(_n_logical_17386)?((((_n_x0_17138+_n_off_17145)+(_n_g_17151*5.0))+5.0)<=_n_x1_17139):_n_logical_17386;})();
bool _n_win_17154=([&]()->bool{auto _n_logical_17387=([&]()->bool{auto _n_logical_17392=_n_fits_17153;return d::truth(_n_logical_17392)?(_n_ry_17149>0.0):_n_logical_17392;})();return d::truth(_n_logical_17387)?([&]()->bool{auto _n_logical_17388=([&]()->bool{auto _n_logical_17390=([&]()->bool{auto _n_logical_17391=(_n_fy_17150>=3.0);return d::truth(_n_logical_17391)?(_n_fx_17152>=1.0):_n_logical_17391;})();return d::truth(_n_logical_17390)?(_n_fx_17152<=3.0):_n_logical_17390;})();return d::truth(_n_logical_17388)?_n_logical_17388:([&]()->bool{auto _n_logical_17389=(_n_fy_17150==2.0);return d::truth(_n_logical_17389)?(_n_fx_17152==2.0):_n_logical_17389;})();})():_n_logical_17387;})();
if(d::truth((_n_fy_17150==0.0))){d::check_cancel();(void)((_n_s_17148=(_n_s_17148+0.14)));
}
auto _n_binding_17393=this->_n_stone_17003(_n_x_17147,_n_y_17146,_n_s_17148);
double _n_cr_17155=d::at(_n_binding_17393,0.0);
double _n_cg_17156=d::at(_n_binding_17393,1.0);
double _n_cb_17157=d::at(_n_binding_17393,2.0);
if(d::truth(_n_win_17154)){d::check_cancel();double _n_h_17158=([&](){auto _n_argument_17394=((_n_g_17151*31.0)+(_n_bi_17142*7.0));auto _n_argument_17395=(std::floor((_n_ry_17149/5.0))+3.0);return _n_hash_16974(_n_argument_17394,_n_argument_17395);})();
if(d::truth((_n_h_17158<0.55))){d::check_cancel();(void)(([&](){auto _n_argument_17396=_n_x_17147;auto _n_argument_17397=_n_y_17146;auto _n_argument_17398=_n_hash_16974((_n_h_17158*10000.0),2.0);auto _n_argument_17399=(_n_cr_17155*0.3);auto _n_argument_17400=(_n_cg_17156*0.2);auto _n_argument_17401=(_n_cb_17157*0.32);return this->_n_lampAt_16999(_n_argument_17396,_n_argument_17397,_n_argument_17398,_n_argument_17399,_n_argument_17400,_n_argument_17401);})());
}else {d::check_cancel();(void)(this->_n_put_16998(_n_x_17147,_n_y_17146,(_n_cr_17155*0.3),(_n_cg_17156*0.2),(_n_cb_17157*0.32),std::optional<double>{}));
}
}else {d::check_cancel();(void)(this->_n_put_16998(_n_x_17147,_n_y_17146,_n_cr_17155,_n_cg_17156,_n_cb_17157,std::optional<double>{}));
}
}}
}}
if(d::truth(_n_tower_17141)){d::check_cancel();double _n_rx_17159=((_n_w_17143/2.0)+0.4);
double _n_ry_17160=(_n_rx_17159*1.35);
{double _n_y_17161=std::floor((_n_top_17140-_n_ry_17160));
for(;d::truth((_n_y_17161<_n_top_17140));(void)((_n_y_17161++))){d::check_cancel();{double _n_x_17162=(_n_x0_17138-1.0);
for(;d::truth((_n_x_17162<=_n_x1_17139));(void)((_n_x_17162++))){d::check_cancel();double _n_dx_17163=(((_n_x_17162+0.5)-_n_cx_17144)/_n_rx_17159);
double _n_dy_17164=(((_n_top_17140-_n_y_17161)-0.5)/_n_ry_17160);
if(d::truth((((_n_dx_17163*_n_dx_17163)+(_n_dy_17164*_n_dy_17164))<1.0))){d::check_cancel();auto _n_binding_17402=this->_n_stone_17003(_n_x_17162,_n_y_17161,((1.05-((0.45*(_n_dx_17163+1.0))*0.5))-(0.1*(1.0-_n_dy_17164))));
double _n_cr_17165=d::at(_n_binding_17402,0.0);
double _n_cg_17166=d::at(_n_binding_17402,1.0);
double _n_cb_17167=d::at(_n_binding_17402,2.0);
(void)(this->_n_put_16998(_n_x_17162,_n_y_17161,_n_cr_17165,_n_cg_17166,_n_cb_17167,std::optional<double>{}));
}
}}
}}
double _n_fx_17168=std::floor(_n_cx_17144);
(void)(([&](){auto _n_argument_17403=_n_fx_17168;auto _n_argument_17404=(std::floor((_n_top_17140-_n_ry_17160))-1.0);auto _n_argument_17405=1.0;auto _n_argument_17406=0.8;auto _n_argument_17407=0.5;return this->_n_put_16998(_n_argument_17403,_n_argument_17404,_n_argument_17405,_n_argument_17406,_n_argument_17407,std::optional<double>{});})());
(void)(([&](){auto _n_argument_17408=_n_fx_17168;auto _n_argument_17409=(std::floor((_n_top_17140-_n_ry_17160))-2.0);auto _n_argument_17410=1.0;auto _n_argument_17411=0.8;auto _n_argument_17412=0.5;return this->_n_put_16998(_n_argument_17408,_n_argument_17409,_n_argument_17410,_n_argument_17411,_n_argument_17412,std::optional<double>{});})());
}else {d::check_cancel();{double _n_x_17169=_n_x0_17138;
for(;d::truth((_n_x_17169<_n_x1_17139));(void)((_n_x_17169++))){d::check_cancel();if(d::truth((!d::truth(double(d::i32(_n_x_17169)&d::i32(1.0)))))){d::check_cancel();(void)(([&](){auto _n_arguments_17413=this->_n_stone_17003(_n_x_17169,_n_top_17140,0.9);return this->_n_put_16998(_n_x_17169,(_n_top_17140-1.0),d::at(_n_arguments_17413,0.0),d::at(_n_arguments_17413,1.0),d::at(_n_arguments_17413,2.0),std::optional<double>{});})());
}
}}
{double _n_c_17170=(_n_x0_17138+3.5);
for(;d::truth(((_n_c_17170+2.5)<_n_x1_17139));(void)((_n_c_17170=(_n_c_17170+6.0)))){d::check_cancel();(void)(([&](){auto _n_arguments_17414=this->_n_stone_17003(_n_c_17170,_n_top_17140,0.85);return this->_n_put_16998(std::floor((_n_c_17170-1.5)),(_n_top_17140-1.0),d::at(_n_arguments_17414,0.0),d::at(_n_arguments_17414,1.0),d::at(_n_arguments_17414,2.0),std::optional<double>{});})());
(void)(([&](){auto _n_arguments_17415=this->_n_stone_17003(_n_c_17170,_n_top_17140,0.6);return this->_n_put_16998(std::floor((_n_c_17170+1.5)),(_n_top_17140-1.0),d::at(_n_arguments_17415,0.0),d::at(_n_arguments_17415,1.0),d::at(_n_arguments_17415,2.0),std::optional<double>{});})());
{double _n_y_17171=(_n_top_17140-4.0);
for(;d::truth((_n_y_17171<(_n_top_17140-1.0)));(void)((_n_y_17171++))){d::check_cancel();{double _n_x_17172=std::floor((_n_c_17170-3.0));
for(;d::truth((_n_x_17172<=(_n_c_17170+3.0)));(void)((_n_x_17172++))){d::check_cancel();double _n_dx_17173=(((_n_x_17172+0.5)-_n_c_17170)/2.4);
double _n_dy_17174=((((_n_top_17140-1.5)-_n_y_17171)-0.5)/2.4);
if(d::truth((((_n_dx_17173*_n_dx_17173)+(_n_dy_17174*_n_dy_17174))<1.0))){d::check_cancel();(void)(([&](){auto _n_arguments_17416=this->_n_stone_17003(_n_x_17172,_n_y_17171,(0.95-((0.35*(_n_dx_17173+1.0))*0.5)));return this->_n_put_16998(_n_x_17172,_n_y_17171,d::at(_n_arguments_17416,0.0),d::at(_n_arguments_17416,1.0),d::at(_n_arguments_17416,2.0),std::optional<double>{});})());
}
}}
}}
}}
}

}
}));
{double _n_y_17175=_n_PLINTH_16959;
for(;d::truth((_n_y_17175<_n_HORIZON_16956));(void)((_n_y_17175++))){d::check_cancel();{double _n_x_17176=110.0;
for(;d::truth((_n_x_17176<_n_W_16954));(void)((_n_x_17176++))){d::check_cancel();if((d::truth((_n_y_17175<(this->_n_near_17002((_n_x_17176+0.5))-0.0)))&&d::truth((_n_x_17176<114.0)))){d::check_cancel();continue;
}
double _n_fx_17177=d::mod((_n_x_17176-110.0),6.0);
double _n_ry_17178=(_n_y_17175-_n_PLINTH_16959);
auto _n_binding_17420=([&](){auto _n_argument_17417=_n_x_17176;auto _n_argument_17418=_n_y_17175;auto _n_argument_17419=(0.2+(0.1*_n_fbm_16976((_n_x_17176*0.4),(_n_y_17175*0.4),2.0,0.0)));return this->_n_stone_17003(_n_argument_17417,_n_argument_17418,_n_argument_17419);})();
double _n_cr_17179=d::at(_n_binding_17420,0.0);
double _n_cg_17180=d::at(_n_binding_17420,1.0);
double _n_cb_17181=d::at(_n_binding_17420,2.0);
if(d::truth((_n_y_17175>=(_n_HORIZON_16956-2.0)))){d::check_cancel();(void)((((_n_cr_17179=(_n_cr_17179*1.2)),(_n_cg_17180=(_n_cg_17180*1.15))),(_n_cb_17181=(_n_cb_17181*1.1))));
}
if(d::truth((_n_y_17175==(_n_HORIZON_16956-2.0)))){d::check_cancel();(void)((((_n_cr_17179=(_n_cr_17179*0.8)),(_n_cg_17180=(_n_cg_17180*0.8))),(_n_cb_17181=(_n_cb_17181*0.8))));
}
bool _n_arch_17182=([&]()->bool{auto _n_logical_17421=([&]()->bool{auto _n_logical_17423=([&]()->bool{auto _n_logical_17424=([&]()->bool{auto _n_logical_17425=(_n_ry_17178>=3.0);return d::truth(_n_logical_17425)?(_n_ry_17178<=5.0):_n_logical_17425;})();return d::truth(_n_logical_17424)?(_n_fx_17177>=2.0):_n_logical_17424;})();return d::truth(_n_logical_17423)?(_n_fx_17177<=4.0):_n_logical_17423;})();return d::truth(_n_logical_17421)?_n_logical_17421:([&]()->bool{auto _n_logical_17422=(_n_ry_17178==2.0);return d::truth(_n_logical_17422)?(_n_fx_17177==3.0):_n_logical_17422;})();})();
if(d::truth(_n_arch_17182)){d::check_cancel();double _n_h_17183=([&](){auto _n_argument_17426=std::floor(((_n_x_17176-110.0)/6.0));auto _n_argument_17427=11.0;return _n_hash_16974(_n_argument_17426,_n_argument_17427);})();
if(d::truth((_n_h_17183<0.4))){d::check_cancel();(void)(([&](){auto _n_argument_17428=_n_x_17176;auto _n_argument_17429=_n_y_17175;auto _n_argument_17430=_n_hash_16974(double(d::i32(_n_x_17176)>>(d::u32(2.0)&31)),12.0);auto _n_argument_17431=(_n_cr_17179*0.4);auto _n_argument_17432=(_n_cg_17180*0.3);auto _n_argument_17433=(_n_cb_17181*0.45);return this->_n_lampAt_16999(_n_argument_17428,_n_argument_17429,_n_argument_17430,_n_argument_17431,_n_argument_17432,_n_argument_17433);})());
}else {d::check_cancel();(void)(this->_n_put_16998(_n_x_17176,_n_y_17175,(_n_cr_17179*0.4),(_n_cg_17180*0.3),(_n_cb_17181*0.45),std::optional<double>{}));
}
}else {d::check_cancel();(void)(this->_n_put_16998(_n_x_17176,_n_y_17175,_n_cr_17179,_n_cg_17180,_n_cb_17181,std::optional<double>{}));
}
}}
}}
{
auto _n_marble_17184=[&]( double _a0,double _a1) mutable ->std::array<double,3>{double _n_x_17185=_a0;
double _n_s_17186=_a1;
{
double _n_k_17187=_n_clamp_16977((_n_s_17186*(0.55+(0.45*_n_smooth_16978(122.0,82.0,_n_x_17185)))));
return std::array<double,3>{_n_mix_16979(0.68,1.0,_n_k_17187),_n_mix_16979(0.48,0.9,_n_k_17187),_n_mix_16979(0.6,0.8,_n_k_17187)};

}
};
double _n_LX_17188=(-d::number(20.0));
auto _n_set_17189=[&]( double _a0,double _a1,d::Array<double,false> _a2,std::optional<double> _a3) mutable ->void{double _n_x_17190=_a0;
double _n_y_17191=_a1;
d::Array<double,false> _n_c_17192=_a2;
double _n_m_17193=(d::present(_a3)?d::read(_a3):_n_BUILT_16966);
{
(void)(this->_n_put_16998((_n_x_17190+_n_LX_17188),_n_y_17191,d::at(_n_c_17192,0.0),d::at(_n_c_17192,1.0),d::at(_n_c_17192,2.0),std::optional<double>(_n_m_17193)));
(void)(([&](){auto&& _n_array_17434=this->_n_lake_16997;auto _n_index_17435=(((_n_y_17191*_n_W_16954)+_n_x_17190)+_n_LX_17188);auto _n_value_17436=1.0;d::put(_n_array_17434,_n_index_17435,_n_value_17436);return _n_value_17436;})());

}
};
auto _n_storey_17194=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_x0_17195=_a0;
double _n_x1_17196=_a1;
double _n_top_17197=_a2;
double _n_bottom_17198=_a3;
{
{double _n_y_17199=_n_top_17197;
for(;d::truth((_n_y_17199<_n_bottom_17198));(void)((_n_y_17199++))){d::check_cancel();{double _n_x_17200=_n_x0_17195;
for(;d::truth((_n_x_17200<_n_x1_17196));(void)((_n_x_17200++))){d::check_cancel();double _n_ry_17201=(_n_y_17199-_n_top_17197);
double _n_fx_17202=d::mod((_n_x_17200-_n_x0_17195),5.0);
double _n_s_17203=0.95;
if(d::truth((_n_ry_17201==0.0))){d::check_cancel();(void)((_n_s_17203=1.1));
}
if(d::truth((_n_y_17199>=(_n_LP_Y_16958-2.0)))){d::check_cancel();(void)((_n_s_17203=0.7));
}
auto&& _n_c_17204=_n_marble_17184(_n_x_17200,_n_s_17203);
bool _n_win_17205=([&]()->bool{auto _n_logical_17437=([&]()->bool{auto _n_logical_17441=(_n_ry_17201==2.0);return d::truth(_n_logical_17441)?(_n_fx_17202==2.0):_n_logical_17441;})();return d::truth(_n_logical_17437)?_n_logical_17437:([&]()->bool{auto _n_logical_17438=([&]()->bool{auto _n_logical_17439=([&]()->bool{auto _n_logical_17440=(_n_ry_17201>=3.0);return d::truth(_n_logical_17440)?(_n_ry_17201<=4.0):_n_logical_17440;})();return d::truth(_n_logical_17439)?(_n_fx_17202>=1.0):_n_logical_17439;})();return d::truth(_n_logical_17438)?(_n_fx_17202<=3.0):_n_logical_17438;})();})();
bool _n_gate_17206=([&]()->bool{auto _n_logical_17442=([&]()->bool{auto _n_logical_17443=(_n_y_17199>=(_n_LP_Y_16958-2.0));return d::truth(_n_logical_17443)?(_n_fx_17202==2.0):_n_logical_17443;})();return d::truth(_n_logical_17442)?(_n_bottom_17198==_n_LP_Y_16958):_n_logical_17442;})();
if((d::truth(_n_win_17205)||d::truth(_n_gate_17206))){d::check_cancel();d::Array<double,false> _n_dark_17207=d::Array<double,false>{(d::at(_n_c_17204,0.0)*0.42),(d::at(_n_c_17204,1.0)*0.3),(d::at(_n_c_17204,2.0)*0.42)};
if((d::truth(_n_win_17205)&&d::truth((([&](){auto _n_argument_17444=std::floor(((_n_x_17200-_n_x0_17195)/5.0));auto _n_argument_17445=_n_top_17197;return _n_hash_16974(_n_argument_17444,_n_argument_17445);})()<0.6)))){d::check_cancel();(void)(_n_set_17189(_n_x_17200,_n_y_17199,_n_dark_17207,std::optional<double>(_n_LAMP_16967)));
(void)(([&](){auto&& _n_array_17446=this->_n_phase_16996;auto _n_index_17447=(((_n_y_17199*_n_W_16954)+_n_x_17200)+_n_LX_17188);auto _n_value_17448=([&](){auto _n_argument_17449=(std::floor(((_n_x_17200-_n_x0_17195)/5.0))+40.0);auto _n_argument_17450=_n_top_17197;return _n_hash_16974(_n_argument_17449,_n_argument_17450);})();d::put(_n_array_17446,_n_index_17447,_n_value_17448);return _n_value_17448;})());
}else {d::check_cancel();(void)(_n_set_17189(_n_x_17200,_n_y_17199,_n_dark_17207,std::optional<double>{}));
}
}else {d::check_cancel();(void)(_n_set_17189(_n_x_17200,_n_y_17199,d::Array<double,false>(_n_c_17204),std::optional<double>{}));
}
}}
}}

}
};
(void)(_n_storey_17194(84.0,120.0,64.0,_n_LP_Y_16958));
(void)(_n_storey_17194(89.0,115.0,59.0,64.0));
auto _n_dome_17208=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_cx_17209=_a0;
double _n_by_17210=_a1;
double _n_rx_17211=_a2;
double _n_ry_17212=_a3;
{
{double _n_y_17213=std::floor((_n_by_17210-_n_ry_17212));
for(;d::truth((_n_y_17213<_n_by_17210));(void)((_n_y_17213++))){d::check_cancel();{double _n_x_17214=std::floor((_n_cx_17209-_n_rx_17211));
for(;d::truth((_n_x_17214<=(_n_cx_17209+_n_rx_17211)));(void)((_n_x_17214++))){d::check_cancel();double _n_dx_17215=(((_n_x_17214+0.5)-_n_cx_17209)/_n_rx_17211);
double _n_dy_17216=(((_n_by_17210-_n_y_17213)-0.5)/_n_ry_17212);
if(d::truth((((_n_dx_17215*_n_dx_17215)+(_n_dy_17216*_n_dy_17216))<1.0))){d::check_cancel();(void)(([&](){auto _n_argument_17451=_n_x_17214;auto _n_argument_17452=_n_y_17213;auto _n_argument_17453=_n_marble_17184(_n_x_17214,((1.1-((0.5*(_n_dx_17215+1.0))*0.5))-(0.1*(1.0-_n_dy_17216))));return _n_set_17189(_n_argument_17451,_n_argument_17452,d::Array<double,false>(_n_argument_17453),std::optional<double>{});})());
}
}}
}}

}
};
{double _n_x_17217=98.0;
for(;d::truth((_n_x_17217<107.0));(void)((_n_x_17217++))){d::check_cancel();(void)(([&](){auto _n_argument_17454=_n_x_17217;auto _n_argument_17455=58.0;auto _n_argument_17456=_n_marble_17184(_n_x_17217,0.85);return _n_set_17189(_n_argument_17454,_n_argument_17455,d::Array<double,false>(_n_argument_17456),std::optional<double>{});})());
}}
(void)(_n_dome_17208(102.5,58.0,4.8,5.4));
(void)(([&](){auto _n_argument_17457=102.0;auto _n_argument_17458=52.0;auto _n_argument_17459=_n_marble_17184(102.0,1.1);return _n_set_17189(_n_argument_17457,_n_argument_17458,d::Array<double,false>(_n_argument_17459),std::optional<double>{});})());
for(auto &&_n_item_17460:d::Array<d::Array<double,false>,false>{d::Array<double,false>{86.5,64.0},d::Array<double,false>{117.5,64.0},d::Array<double,false>{91.5,59.0},d::Array<double,false>{112.5,59.0}}){d::check_cancel();auto _n_binding_17461=_n_item_17460;
double _n_c_17218=d::at(_n_binding_17461,0.0);
double _n_by_17219=d::at(_n_binding_17461,1.0);
{
(void)(([&](){auto _n_argument_17462=std::floor((_n_c_17218-1.5));auto _n_argument_17463=(_n_by_17219-1.0);auto _n_argument_17464=_n_marble_17184(_n_c_17218,0.8);return _n_set_17189(_n_argument_17462,_n_argument_17463,d::Array<double,false>(_n_argument_17464),std::optional<double>{});})());
(void)(([&](){auto _n_argument_17465=std::floor((_n_c_17218+1.5));auto _n_argument_17466=(_n_by_17219-1.0);auto _n_argument_17467=_n_marble_17184(_n_c_17218,0.8);return _n_set_17189(_n_argument_17465,_n_argument_17466,d::Array<double,false>(_n_argument_17467),std::optional<double>{});})());
(void)(_n_dome_17208(_n_c_17218,(_n_by_17219-1.0),2.4,2.6));

}
}

}
this->_n_CW_17004=600.0;
this->_n_cover_17005=d::Array<float,true>(size_t((this->_n_CW_17004*_n_HORIZON_16956)));
this->_n_lit_17006=d::Array<float,true>(size_t((this->_n_CW_17004*_n_HORIZON_16956)));
{double _n_r_17222=0.0;
for(;d::truth((_n_r_17222<_n_HORIZON_16956));(void)((_n_r_17222++))){d::check_cancel();{double _n_x_17223=0.0;
for(;d::truth((_n_x_17223<this->_n_CW_17004));(void)((_n_x_17223++))){d::check_cancel();double _n_y_17224=(_n_r_17222+0.5);
double _n_d_17225=this->_n_density_17007(_n_x_17223,_n_y_17224);
(void)(([&](){auto&& _n_array_17468=this->_n_cover_17005;auto _n_index_17469=((_n_r_17222*this->_n_CW_17004)+_n_x_17223);auto _n_value_17470=_n_smooth_16978(0.54,0.64,_n_d_17225);d::put(_n_array_17468,_n_index_17469,_n_value_17470);return _n_value_17470;})());
(void)(([&](){auto&& _n_array_17471=this->_n_lit_17006;auto _n_index_17472=((_n_r_17222*this->_n_CW_17004)+_n_x_17223);auto _n_value_17473=_n_clamp_16977((0.5+((_n_d_17225-this->_n_density_17007(_n_x_17223,(_n_y_17224+1.5)))*9.0)));d::put(_n_array_17471,_n_index_17472,_n_value_17473);return _n_value_17473;})());
}}
}}
this->_n_FR_17008=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_FG_17009=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_FB_17010=d::Array<float,true>(size_t(this->_n_N_16985));
this->_n_birds_17011=d::Array<uint8_t,true>(size_t(this->_n_N_16985));
this->_n_marked_17012=d::Array<double,false>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_17326> _a1) mutable ->d::String{double _n_t_17240=_a0;
auto _n_binding_17476=(d::present(_a1)?_a1:([&](){auto _n_object_17475=std::make_shared<_n_Record_17326>();return _n_object_17475;})());
std::optional<d::Array<uint8_t,true>> _n_color_17241=_n_binding_17476->_p_color;
{
double _n_drift_17242=(_n_t_17240*0.6);
for(auto &&_n_item_17477:this->_n_marked_17012){d::check_cancel();double _n_k_17243=_n_item_17477;
(void)(([&](){auto&& _n_array_17478=this->_n_birds_17011;auto _n_index_17479=_n_k_17243;auto _n_value_17480=0.0;d::put(_n_array_17478,_n_index_17479,_n_value_17480);return _n_value_17480;})());
}
(void)((this->_n_marked_17012.resize(size_t(0.0)),0.0));
auto _n_mark_17244=[&]( double _a0,double _a1) mutable ->void{double _n_x_17245=_a0;
double _n_y_17246=_a1;
{
(void)(((_n_x_17245=d::round(_n_x_17245)),(_n_y_17246=d::round(_n_y_17246))));
if((((d::truth((_n_x_17245<0.0))||d::truth((_n_x_17245>=_n_W_16954)))||d::truth((_n_y_17246<0.0)))||d::truth((_n_y_17246>=_n_HORIZON_16956)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_17481=this->_n_birds_17011;auto _n_index_17482=((_n_y_17246*_n_W_16954)+_n_x_17245);auto _n_value_17483=1.0;d::put(_n_array_17481,_n_index_17482,_n_value_17483);return _n_value_17483;})());
(void)(this->_n_marked_17012.push(((_n_y_17246*_n_W_16954)+_n_x_17245)));

}
};
double _n_flock_17247=(d::mod(((_n_t_17240*2.6)+130.0),300.0)-50.0);
{double _n_i_17248=0.0;
for(;d::truth((_n_i_17248<8.0));(void)((_n_i_17248++))){d::check_cancel();double _n_bx_17249=(_n_flock_17247-d::at(d::Array<double,false>{0.0,5.0,9.0,4.0,12.0,16.0,8.0,21.0},_n_i_17248));
double _n_by_17250=((30.0+d::at(d::Array<double,false>{0.0,2.0,4.0,(-d::number(3.0)),5.0,7.0,(-d::number(5.0)),3.0},_n_i_17248))+(1.2*std::sin(((_n_t_17240*0.7)+_n_i_17248))));
double _n_f_17251=std::sin(((_n_t_17240*6.5)+(_n_i_17248*1.9)));
double _n_lift_17252=(d::truth((_n_f_17251>0.35))?(-d::number(1.0)):(d::truth((_n_f_17251<(-d::number(0.35))))?1.0:0.0));
(void)(_n_mark_17244(_n_bx_17249,_n_by_17250));
(void)((_n_mark_17244((_n_bx_17249-1.0),((_n_by_17250-1.0)+(d::truth((_n_lift_17252>0.0))?1.0:0.0))),_n_mark_17244((_n_bx_17249+1.0),((_n_by_17250-1.0)+(d::truth((_n_lift_17252>0.0))?1.0:0.0)))));
(void)((_n_mark_17244((_n_bx_17249-2.0),((_n_by_17250-1.0)+_n_lift_17252)),_n_mark_17244((_n_bx_17249+2.0),((_n_by_17250-1.0)+_n_lift_17252))));
}}
double _n_pair_17253=(230.0-d::mod((_n_t_17240*1.8),300.0));
{double _n_i_17254=0.0;
for(;d::truth((_n_i_17254<2.0));(void)((_n_i_17254++))){d::check_cancel();double _n_bx_17255=(_n_pair_17253+(_n_i_17254*6.0));
double _n_by_17256=((18.0+(_n_i_17254*2.0))+std::sin(((_n_t_17240*0.5)+_n_i_17254)));
double _n_lift_17257=(d::truth((std::sin(((_n_t_17240*5.0)+(_n_i_17254*2.0)))>0.0))?(-d::number(1.0)):0.0);
(void)(((((_n_mark_17244(_n_bx_17255,_n_by_17256),_n_mark_17244((_n_bx_17255-1.0),(_n_by_17256-1.0))),_n_mark_17244((_n_bx_17255+1.0),(_n_by_17256-1.0))),_n_mark_17244((_n_bx_17255-2.0),((_n_by_17256-1.0)+_n_lift_17257))),_n_mark_17244((_n_bx_17255+2.0),((_n_by_17256-1.0)+_n_lift_17257))));
}}
double _n_span_17258=(_n_W_16954+70.0);
d::Array<std::shared_ptr<_n_Record_17260>,false> _n_boats_17259=d::map(_n_BOATS_16972,[&]( std::shared_ptr<_n_Record_16973> _a0) mutable ->std::shared_ptr<_n_Record_17260>{std::shared_ptr<_n_Record_16973> _n_b_17261=_a0;
{
double _n_w_17262=double(d::at(_n_b_17261->_p_art,0.0).size());
double _n_h_17263=double(_n_b_17261->_p_art.size());
double _n_x_17264=(d::mod((d::mod((_n_b_17261->_p_x0+(_n_b_17261->_p_v*_n_t_17240)),_n_span_17258)+_n_span_17258),_n_span_17258)-35.0);
return ([&](){auto _n_object_17485=std::make_shared<_n_Record_17260>();auto _n_spread_17486=_n_b_17261;_n_object_17485->_p_art=_n_spread_17486->_p_art;_n_object_17485->_p_y=_n_spread_17486->_p_y;_n_object_17485->_p_v=_n_spread_17486->_p_v;_n_object_17485->_p_x0=_n_spread_17486->_p_x0;_n_object_17485->_p_h=_n_spread_17486->_p_h;_n_object_17485->_p_w=_n_w_17262;_n_object_17485->_p_x=d::round(_n_x_17264);_n_object_17485->_p_top=((_n_b_17261->_p_y-_n_h_17263)+1.0);_n_object_17485->_p_hull=d::findIndex(_n_b_17261->_p_art,[&]( d::String _a0) mutable ->bool{d::String _n_l_17265=_a0;
return d::includes(_n_l_17265,d::String(u"h"));});return _n_object_17485;})();

}
});
{double _n_r_17266=0.0;
for(;d::truth((_n_r_17266<_n_H_16955));(void)((_n_r_17266++))){d::check_cancel();{double _n_x_17267=0.0;
for(;d::truth((_n_x_17267<_n_W_16954));(void)((_n_x_17267++))){d::check_cancel();double _n_k_17268=((_n_r_17266*_n_W_16954)+_n_x_17267);
double _n_y_17269=(_n_r_17266+0.5);
double _n_m_17270=d::at(this->_n_mat_16992,_n_k_17268);
double _n_cr_17271=0.0;
double _n_cg_17272=0.0;
double _n_cb_17273=0.0;
double _n_floor_17274=0.12;
double _n_fade_17275=1.0;
if(d::truth((_n_m_17270==_n_LAMP_16967))){d::check_cancel();double _n_on_17276=_n_lampGlow_16983(d::at(this->_n_phase_16996,_n_k_17268),_n_t_17240);
(void)((((_n_cr_17271=_n_mix_16979(d::at(this->_n_SR_16993,_n_k_17268),1.0,_n_on_17276)),(_n_cg_17272=_n_mix_16979(d::at(this->_n_SG_16994,_n_k_17268),0.8,_n_on_17276))),(_n_cb_17273=_n_mix_16979(d::at(this->_n_SB_16995,_n_k_17268),0.4,_n_on_17276))));
}else {d::check_cancel();if(d::truth((_n_m_17270!=_n_AIR_16963))){d::check_cancel();(void)((((_n_cr_17271=d::at(this->_n_SR_16993,_n_k_17268)),(_n_cg_17272=d::at(this->_n_SG_16994,_n_k_17268))),(_n_cb_17273=d::at(this->_n_SB_16995,_n_k_17268))));
if(d::truth((_n_m_17270==_n_NEAR_16965))){d::check_cancel();(void)((_n_floor_17274=0.02));
}
if(d::truth((_n_m_17270==_n_FAR_16964))){d::check_cancel();(void)((_n_floor_17274=0.05));
}
if(d::truth((_n_m_17270==_n_BUILT_16966))){d::check_cancel();(void)((_n_floor_17274=0.04));
}
}else {d::check_cancel();if(d::truth((_n_r_17266<_n_HORIZON_16956))){d::check_cancel();(void)((((_n_cr_17271=d::at(this->_n_skyR_16989,_n_k_17268)),(_n_cg_17272=d::at(this->_n_skyG_16990,_n_k_17268))),(_n_cb_17273=d::at(this->_n_skyB_16991,_n_k_17268))));
(void)((_n_floor_17274=(0.04+(0.08*_n_smooth_16978(0.0,30.0,_n_y_17269)))));
double _n_sx_17277=(_n_x_17267+_n_drift_17242);
double _n_ix_17278=std::floor(_n_sx_17277);
double _n_fx_17279=(_n_sx_17277-_n_ix_17278);
double _n_i0_17280=((_n_r_17266*this->_n_CW_17004)+d::mod(_n_ix_17278,this->_n_CW_17004));
double _n_i1_17281=((_n_r_17266*this->_n_CW_17004)+d::mod((_n_ix_17278+1.0),this->_n_CW_17004));
double _n_c_17282=(d::at(this->_n_cover_17005,_n_i0_17280)+((d::at(this->_n_cover_17005,_n_i1_17281)-d::at(this->_n_cover_17005,_n_i0_17280))*_n_fx_17279));
if(((d::truth((_n_c_17282<0.05))&&d::truth((_n_y_17269<16.0)))&&d::truth((_n_hash_16974(_n_x_17267,((_n_r_17266*3.0)+5.0))>0.992)))){d::check_cancel();double _n_s_17283=([&](){auto _n_left_17487=(0.55+(0.45*std::sin(([&](){auto _n_left_17489=(_n_t_17240*(1.3+(_n_hash_16974(_n_x_17267,_n_r_17266)*2.0)));auto _n_right_17490=(_n_hash_16974(_n_r_17266,_n_x_17267)*6.28);return (_n_left_17489+_n_right_17490);})())));auto _n_right_17488=_n_smooth_16978(16.0,4.0,_n_y_17269);return (_n_left_17487*_n_right_17488);})();
(void)((((_n_cr_17271=d::maximum({_n_cr_17271,(_n_s_17283*0.95)})),(_n_cg_17272=d::maximum({_n_cg_17272,(_n_s_17283*0.9)}))),(_n_cb_17273=d::maximum({_n_cb_17273,_n_s_17283}))));
}
if(d::truth((_n_c_17282>0.01))){d::check_cancel();double _n_l_17284=(d::at(this->_n_lit_17006,_n_i0_17280)+((d::at(this->_n_lit_17006,_n_i1_17281)-d::at(this->_n_lit_17006,_n_i0_17280))*_n_fx_17279));
double _n_dx_17285=((_n_x_17267+0.5)-d::at(_n_SUN_16957,0.0));
double _n_dy_17286=(_n_y_17269-d::at(_n_SUN_16957,1.0));
double _n_nearSun_17287=std::exp(((-d::number(std::sqrt(((_n_dx_17285*_n_dx_17285)+(_n_dy_17286*_n_dy_17286)))))/45.0));
double _n_low_17288=_n_smooth_16978(6.0,42.0,_n_y_17269);
double _n_warm_17289=_n_clamp_16977(((0.25+(0.5*_n_low_17288))+(0.8*_n_nearSun_17287)));
double _n_lr_17290=_n_mix_16979(0.95,1.0,_n_warm_17289);
double _n_lg_17291=_n_mix_16979(0.34,0.78,_n_warm_17289);
double _n_lb_17292=_n_mix_16979(0.55,0.42,_n_warm_17289);
double _n_dr_17293=_n_mix_16979(0.24,0.5,_n_low_17288);
double _n_dg_17294=_n_mix_16979(0.11,0.22,_n_low_17288);
double _n_db_17295=_n_mix_16979(0.32,0.38,_n_low_17288);
double _n_a_17296=d::minimum({1.0,(_n_c_17282*0.95)});
(void)((_n_cr_17271=([&](){auto _n_argument_17491=_n_cr_17271;auto _n_argument_17492=_n_mix_16979(_n_dr_17293,_n_lr_17290,_n_l_17284);auto _n_argument_17493=_n_a_17296;return _n_mix_16979(_n_argument_17491,_n_argument_17492,_n_argument_17493);})()));
(void)((_n_cg_17272=([&](){auto _n_argument_17494=_n_cg_17272;auto _n_argument_17495=_n_mix_16979(_n_dg_17294,_n_lg_17291,_n_l_17284);auto _n_argument_17496=_n_a_17296;return _n_mix_16979(_n_argument_17494,_n_argument_17495,_n_argument_17496);})()));
(void)((_n_cb_17273=([&](){auto _n_argument_17497=_n_cb_17273;auto _n_argument_17498=_n_mix_16979(_n_db_17295,_n_lb_17292,_n_l_17284);auto _n_argument_17499=_n_a_17296;return _n_mix_16979(_n_argument_17497,_n_argument_17498,_n_argument_17499);})()));
}
if(d::truth(d::at(this->_n_birds_17011,_n_k_17268))){d::check_cancel();(void)((((_n_cr_17271=0.1),(_n_cg_17272=0.04)),(_n_cb_17273=0.1)));
}
}else {d::check_cancel();double _n_depth_17297=((_n_y_17269-_n_HORIZON_16956)/(_n_H_16955-_n_HORIZON_16956));
double _n_w1_17298=_n_noise_16975(((_n_x_17267*0.03)+(_n_t_17240*0.03)),((_n_y_17269*0.5)-(_n_t_17240*0.25)),0.0);
double _n_w2_17299=_n_noise_16975(((_n_x_17267*0.08)-(_n_t_17240*0.05)),((_n_y_17269*1.3)-(_n_t_17240*0.5)),0.0);
double _n_sx_17300=([&](){auto _n_argument_17500=0.0;auto _n_argument_17501=([&](){auto _n_argument_17502=(_n_W_16954-1.0);auto _n_argument_17503=d::round((_n_x_17267+((_n_w1_17298-0.5)*(1.5+(5.0*_n_depth_17297)))));return d::minimum({_n_argument_17502,_n_argument_17503});})();return d::maximum({_n_argument_17500,_n_argument_17501});})();
double _n_oy_17301=((_n_w2_17299-0.5)*(1.0+(3.0*_n_depth_17297)));
double _n_src_17302=(-d::number(1.0));
if(d::truth((_n_r_17266>=_n_LP_Y_16958))){d::check_cancel();double _n_ry_17303=d::round(((((2.0*_n_LP_Y_16958)-1.0)-_n_r_17266)+_n_oy_17301));
if(((d::truth((_n_ry_17303>=48.0))&&d::truth((_n_ry_17303<_n_LP_Y_16958)))&&d::truth(d::at(this->_n_lake_16997,((_n_ry_17303*_n_W_16954)+_n_sx_17300))))){d::check_cancel();(void)((_n_src_17302=((_n_ry_17303*_n_W_16954)+_n_sx_17300)));
}
}
if(d::truth((_n_src_17302<0.0))){d::check_cancel();(void)((_n_src_17302=((([&](){auto _n_argument_17504=0.0;auto _n_argument_17505=([&](){auto _n_argument_17506=(_n_HORIZON_16956-1.0);auto _n_argument_17507=d::round(((((2.0*_n_HORIZON_16956)-1.0)-_n_r_17266)+_n_oy_17301));return d::minimum({_n_argument_17506,_n_argument_17507});})();return d::maximum({_n_argument_17504,_n_argument_17505});})()*_n_W_16954)+_n_sx_17300)));
}
double _n_band_17304=(0.4+(0.6*_n_smooth_16978(0.32,0.68,_n_w2_17299)));
double _n_dim_17305=((0.8-(0.2*_n_depth_17297))*(1.0-(0.22*_n_smooth_16978(110.0,200.0,_n_x_17267))));
(void)((_n_cr_17271=(((d::at(this->_n_FR_17008,_n_src_17302)*_n_band_17304)*_n_dim_17305)+0.03)));
(void)((_n_cg_17272=((((d::at(this->_n_FG_17009,_n_src_17302)*_n_band_17304)*_n_dim_17305)*0.96)+0.02)));
(void)((_n_cb_17273=((((d::at(this->_n_FB_17010,_n_src_17302)*_n_band_17304)*_n_dim_17305)*1.05)+0.06)));
double _n_road_17306=std::exp((-d::number(std::pow((((_n_x_17267+0.5)-d::at(_n_SUN_16957,0.0))/(2.5+(_n_depth_17297*16.0))),2.0))));
double _n_glint_17307=(_n_smooth_16978(0.6,0.85,_n_w2_17299)*_n_road_17306);
(void)((((_n_cr_17271=(_n_cr_17271+(0.8*_n_glint_17307))),(_n_cg_17272=(_n_cg_17272+(0.6*_n_glint_17307)))),(_n_cb_17273=(_n_cb_17273+(0.3*_n_glint_17307)))));
double _n_haze_17308=(std::exp(((-d::number((_n_y_17269-_n_HORIZON_16956)))/2.0))*0.12);
(void)((((_n_cr_17271=(_n_cr_17271+_n_haze_17308)),(_n_cg_17272=(_n_cg_17272+(_n_haze_17308*0.6)))),(_n_cb_17273=(_n_cb_17273+(_n_haze_17308*0.5)))));
(void)((_n_floor_17274=0.1));
(void)((_n_fade_17275=_n_smooth_16978((_n_H_16955+8.0),(_n_H_16955-16.0),_n_y_17269)));
for(auto &&_n_item_17508:_n_boats_17259){d::check_cancel();std::shared_ptr<_n_Record_17260> _n_b_17309=_n_item_17508;
{
double _n_a_17310=(d::truth((_n_b_17309->_p_v>0.0))?(_n_b_17309->_p_x-_n_x_17267):(_n_x_17267-(_n_b_17309->_p_x+_n_b_17309->_p_w)));
if((d::truth((_n_a_17310>(-d::number(1.0))))&&d::truth((_n_a_17310<70.0)))){d::check_cancel();double _n_s_17311=(_n_b_17309->_p_w/22.0);
double _n_dy_17312=std::fabs(((_n_y_17269-_n_b_17309->_p_y)-0.2));
double _n_arm_17313=([&](){auto _n_left_17509=std::exp((-d::number(std::pow((((_n_dy_17312-(((_n_a_17310+1.0)*0.09)*_n_s_17311))-0.4)/(0.7+(0.02*_n_a_17310))),2.0))));auto _n_right_17510=std::exp(((-d::number(_n_a_17310))/(30.0*_n_s_17311)));return (_n_left_17509*_n_right_17510);})();
double _n_churn_17314=([&](){auto _n_left_17511=std::exp((-d::number(std::pow((_n_dy_17312/((0.8*_n_s_17311)+0.4)),2.0))));auto _n_right_17512=std::exp(((-d::number(_n_a_17310))/(12.0*_n_s_17311)));return (_n_left_17511*_n_right_17512);})();
double _n_lap_17315=(0.5+(0.5*([&](){auto _n_argument_17513=0.3;auto _n_argument_17514=0.7;auto _n_argument_17515=_n_noise_16975(((_n_x_17267*0.6)+((_n_b_17309->_p_v*_n_t_17240)*0.6)),(_n_y_17269*1.7),0.0);return _n_smooth_16978(_n_argument_17513,_n_argument_17514,_n_argument_17515);})()));
double _n_wk_17316=(d::minimum({1.0,((_n_arm_17313*1.3)+(_n_churn_17314*1.1))})*_n_lap_17315);
(void)((((_n_cr_17271=_n_mix_16979(_n_cr_17271,1.0,(_n_wk_17316*0.8))),(_n_cg_17272=_n_mix_16979(_n_cg_17272,0.86,(_n_wk_17316*0.8)))),(_n_cb_17273=_n_mix_16979(_n_cb_17273,0.66,(_n_wk_17316*0.8)))));
}
if((((d::truth((_n_r_17266>_n_b_17309->_p_y))&&d::truth((_n_r_17266<=(_n_b_17309->_p_y+3.0))))&&d::truth((_n_x_17267>=(_n_b_17309->_p_x+1.0))))&&d::truth((_n_x_17267<((_n_b_17309->_p_x+_n_b_17309->_p_w)-1.0))))){d::check_cancel();double _n_q_17317=(0.35+(0.15*(_n_r_17266-_n_b_17309->_p_y)));
(void)((((_n_cr_17271=(_n_cr_17271*_n_q_17317)),(_n_cg_17272=(_n_cg_17272*_n_q_17317))),(_n_cb_17273=(_n_cb_17273*_n_q_17317))));
}

}
}
}
}
}
if(d::truth((_n_r_17266>=_n_HORIZON_16956))){d::check_cancel();for(auto &&_n_item_17516:_n_boats_17259){d::check_cancel();std::shared_ptr<_n_Record_17260> _n_b_17318=_n_item_17516;
{
if((((d::truth((_n_r_17266<_n_b_17318->_p_top))||d::truth((_n_r_17266>_n_b_17318->_p_y)))||d::truth((_n_x_17267<_n_b_17318->_p_x)))||d::truth((_n_x_17267>=(_n_b_17318->_p_x+_n_b_17318->_p_w))))){d::check_cancel();continue;
}
double _n_col_17319=(d::truth((_n_b_17318->_p_v>0.0))?(_n_x_17267-_n_b_17318->_p_x):((_n_b_17318->_p_w-1.0)-(_n_x_17267-_n_b_17318->_p_x)));
d::String _n_ch_17320=d::at(d::at(_n_b_17318->_p_art,(_n_r_17266-_n_b_17318->_p_top)),_n_col_17319);
if(d::truth((_n_ch_17320==d::String(u".")))){d::check_cancel();continue;
}
double _n_row_17321=(_n_r_17266-_n_b_17318->_p_top);
if(d::truth((_n_ch_17320==d::String(u"h")))){d::check_cancel();double _n_s_17322=(1.0-(0.2*(_n_row_17321-_n_b_17318->_p_hull)));
(void)(((((_n_cr_17271=(0.55*_n_s_17322)),(_n_cg_17272=(0.26*_n_s_17322))),(_n_cb_17273=(0.16*_n_s_17322))),(_n_floor_17274=0.04)));
}else {d::check_cancel();if(d::truth((_n_ch_17320==d::String(u"g")))){d::check_cancel();(void)((((_n_cr_17271=0.98),(_n_cg_17272=0.7)),(_n_cb_17273=0.34)));
}else {d::check_cancel();if(d::truth((_n_ch_17320==d::String(u"p")))){d::check_cancel();(void)((((_n_cr_17271=0.8),(_n_cg_17272=0.55)),(_n_cb_17273=0.32)));
}else {d::check_cancel();if(d::truth((_n_ch_17320==d::String(u"s")))){d::check_cancel();(void)(((((_n_cr_17271=0.2),(_n_cg_17272=0.08)),(_n_cb_17273=0.12)),(_n_floor_17274=0.02)));
}else {d::check_cancel();if(d::truth((_n_ch_17320==d::String(u"r")))){d::check_cancel();(void)(((((_n_cr_17271=0.1),(_n_cg_17272=0.04)),(_n_cb_17273=0.08)),(_n_floor_17274=0.0)));
}else {d::check_cancel();if(d::truth((_n_ch_17320==d::String(u"c")))){d::check_cancel();if(d::truth((_n_row_17321==0.0))){d::check_cancel();(void)((((_n_cr_17271=1.0),(_n_cg_17272=0.88)),(_n_cb_17273=0.72)));
}else {d::check_cancel();(void)((((_n_cr_17271=0.88),(_n_cg_17272=0.22)),(_n_cb_17273=0.24)));
}
}else {d::check_cancel();if(d::truth((_n_ch_17320==d::String(u"o")))){d::check_cancel();double _n_on_17323=(0.85+(0.15*std::sin(((_n_t_17240*7.0)+(_n_b_17318->_p_h*40.0)))));
(void)((((_n_cr_17271=_n_on_17323),(_n_cg_17272=(0.8*_n_on_17323))),(_n_cb_17273=(0.42*_n_on_17323))));
}
}
}
}
}
}
}
(void)((_n_fade_17275=1.0));

}
}
}
(void)(this->_n_emit_17013(_n_k_17268,_n_r_17266,_n_x_17267,_n_cr_17271,_n_cg_17272,_n_cb_17273,_n_floor_17274,_n_fade_17275,_n_color_17241));
}}
}}
d::Array<d::String,false> _n_lines_17324=d::Array<d::String,false>{};
{double _n_r_17325=0.0;
for(;d::truth((_n_r_17325<_n_H_16955));(void)((_n_r_17325++))){d::check_cancel();(void)(_n_lines_17324.push(d::join(this->_n_out_16986.slice((_n_r_17325*_n_W_16954),((_n_r_17325+1.0)*_n_W_16954)),d::String(u""))));
}}
return d::join(_n_lines_17324,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lake-pichola").cols)*ascii::catalog_meta("lake-pichola").rows);auto _env=std::make_shared<_n_Record_17326>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lake_pichola_meta(){return catalog_meta("lake-pichola");}
std::unique_ptr<Piece> make_lake_pichola(const AsciiPieceOptions &o){return std::make_unique<Native_lake_pichola>(o);}
}
