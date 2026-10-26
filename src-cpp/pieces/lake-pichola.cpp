// Direct, statically typed C++ from src/pieces/lake-pichola.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_16954;
struct _n_Record_16974;
struct _n_Record_17261;
struct _n_Record_17327;
struct _n_Record_16954{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_16954> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16954>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_16974{
d::Array<d::String,false> _p_art{};
double _p_y{};
double _p_v{};
double _p_x0{};
double _p_h{};
static std::shared_ptr<_n_Record_16974> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_16974>();out->_p_art=d::decode<d::Array<d::String,false>>(j["art"]);out->_p_y=d::decode<double>(j["y"]);out->_p_v=d::decode<double>(j["v"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_h=d::decode<double>(j["h"]);return out;}
};
struct _n_Record_17261{
double _p_w{};
double _p_x{};
double _p_top{};
double _p_hull{};
d::Array<d::String,false> _p_art{};
double _p_y{};
double _p_v{};
double _p_x0{};
double _p_h{};
static std::shared_ptr<_n_Record_17261> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17261>();out->_p_w=d::decode<double>(j["w"]);out->_p_x=d::decode<double>(j["x"]);out->_p_top=d::decode<double>(j["top"]);out->_p_hull=d::decode<double>(j["hull"]);out->_p_art=d::decode<d::Array<d::String,false>>(j["art"]);out->_p_y=d::decode<double>(j["y"]);out->_p_v=d::decode<double>(j["v"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_h=d::decode<double>(j["h"]);return out;}
};
struct _n_Record_17327{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_17327> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17327>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_16975(double _a0,double _a1);
double _n_noise_16976(double _a0,double _a1,double _a2);
double _n_fbm_16977(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_16978(double _a0);
double _n_smooth_16979(double _a0,double _a1,double _a2);
double _n_mix_16980(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_16981(d::String _a0);
double _n_ramp_16983(double _a0,double _a1);
double _n_lampGlow_16984(double _a0,double _a1);
std::shared_ptr<_n_Record_16954> _n_meta_16953=[](){return ([&](){auto _n_object_17330=std::make_shared<_n_Record_16954>();_n_object_17330->_p_name=d::String(u"lake pichola");_n_object_17330->_p_category=d::String(u"scenes");_n_object_17330->_p_note=d::String(u"sunset on lake pichola, udaipur's palaces glowing over the water");_n_object_17330->_p_cols=200.0;_n_object_17330->_p_rows=100.0;_n_object_17330->_p_cell=1.0;_n_object_17330->_p_fps=15.0;_n_object_17330->_p_ground=d::String(u"#120a1a");_n_object_17330->_p_palette=d::Array<d::String,false>{d::String(u"#1c1028"),d::String(u"#2a1840"),d::String(u"#3d2058"),d::String(u"#55286a"),d::String(u"#6e3178"),d::String(u"#8a3c7c"),d::String(u"#a8477a"),d::String(u"#c85a6e"),d::String(u"#e0704e"),d::String(u"#f08a40"),d::String(u"#f8a840"),d::String(u"#ffc65a"),d::String(u"#ffe08a"),d::String(u"#fff2c8"),d::String(u"#fffaf0"),d::String(u"#2b1c40"),d::String(u"#3c2852"),d::String(u"#4f3666"),d::String(u"#6a4a7e"),d::String(u"#9a7aa0"),d::String(u"#f6e6d0"),d::String(u"#e8cdb0"),d::String(u"#d4a888"),d::String(u"#b88a78"),d::String(u"#8e6a6a"),d::String(u"#6a4a58"),d::String(u"#c88a9a"),d::String(u"#ffd070"),d::String(u"#ff9a3c"),d::String(u"#b8323a"),d::String(u"#140c1c")};return _n_object_17330;})();}();
const double _n_W_16955=[](){return 200.0;}();
const double _n_H_16956=[](){return 100.0;}();
const double _n_HORIZON_16957=[](){return 62.0;}();
d::Array<double,false> _n_SUN_16958=[](){return d::Array<double,false>{58.0,48.0};}();
const double _n_LP_Y_16959=[](){return 72.0;}();
const double _n_PLINTH_16960=[](){return 54.0;}();
const d::String _n_DOTS_16961=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_16962=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_16963=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_17015=_a0;
return ((_n_v_17015/16.0)-0.47);});}();
const double _n_AIR_16964=[](){return 0.0;}();
const double _n_FAR_16965=[](){return 1.0;}();
const double _n_NEAR_16966=[](){return 2.0;}();
const double _n_BUILT_16967=[](){return 3.0;}();
const double _n_LAMP_16968=[](){return 4.0;}();
d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false> _n_BLOCKS_16969=[](){return d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false>{std::make_shared<std::tuple<double,double,double,bool>>(114.0,125.0,49.0,false),std::make_shared<std::tuple<double,double,double,bool>>(125.0,138.0,41.0,false),std::make_shared<std::tuple<double,double,double,bool>>(138.0,144.0,33.0,true),std::make_shared<std::tuple<double,double,double,bool>>(144.0,158.0,38.0,false),std::make_shared<std::tuple<double,double,double,bool>>(158.0,165.0,28.0,true),std::make_shared<std::tuple<double,double,double,bool>>(165.0,178.0,36.0,false),std::make_shared<std::tuple<double,double,double,bool>>(178.0,184.0,31.0,true),std::make_shared<std::tuple<double,double,double,bool>>(184.0,200.0,40.0,false)};}();
d::Array<d::String,false> _n_SMALL_16970=[](){return d::Array<d::String,false>{d::String(u"...cccccc..."),d::String(u"..cccccccc.."),d::String(u"r..pssosp..."),d::String(u"r..pssssp..."),d::String(u"gggggggggggg"),d::String(u"hhhhhhhhhhhh"),d::String(u".hhhhhhhhhh.")};}();
d::Array<d::String,false> _n_MEDIUM_16971=[](){return d::Array<d::String,false>{d::String(u".....cccccccccc....."),d::String(u"....cccccccccccc...."),d::String(u"...cccccccccccccc..."),d::String(u".r...psssossssp....."),d::String(u".r...pssssssssp....."),d::String(u".r...pssssssssp....."),d::String(u"gggggggggggggggggggg"),d::String(u"hhhhhhhhhhhhhhhhhhhh"),d::String(u".hhhhhhhhhhhhhhhhhh."),d::String(u"...hhhhhhhhhhhhhh...")};}();
d::Array<d::String,false> _n_LARGE_16972=[](){return d::Array<d::String,false>{d::String(u"........cccccccccccccc......"),d::String(u".......cccccccccccccccc....."),d::String(u"......cccccccccccccccccc...."),d::String(u"......cccccccccccccccccc...."),d::String(u"..r.....psssssssosssssp....."),d::String(u"..r.....psssssssssssssp....."),d::String(u".rr.....psssssssssssssp....."),d::String(u"..r.....psssssssssssssp....."),d::String(u"gggggggggggggggggggggggggggg"),d::String(u"hhhhhhhhhhhhhhhhhhhhhhhhhhhh"),d::String(u".hhhhhhhhhhhhhhhhhhhhhhhhhh."),d::String(u"...hhhhhhhhhhhhhhhhhhhhhh...")};}();
d::Array<std::shared_ptr<_n_Record_16974>,false> _n_BOATS_16973=[](){return d::Array<std::shared_ptr<_n_Record_16974>,false>{([&](){auto _n_object_17333=std::make_shared<_n_Record_16974>();_n_object_17333->_p_art=_n_SMALL_16970;_n_object_17333->_p_y=79.0;_n_object_17333->_p_v=1.8;_n_object_17333->_p_x0=120.0;_n_object_17333->_p_h=0.31;return _n_object_17333;})(),([&](){auto _n_object_17335=std::make_shared<_n_Record_16974>();_n_object_17335->_p_art=_n_MEDIUM_16971;_n_object_17335->_p_y=88.0;_n_object_17335->_p_v=(-d::number(2.6));_n_object_17335->_p_x0=175.0;_n_object_17335->_p_h=0.62;return _n_object_17335;})(),([&](){auto _n_object_17337=std::make_shared<_n_Record_16974>();_n_object_17337->_p_art=_n_LARGE_16972;_n_object_17337->_p_y=95.0;_n_object_17337->_p_v=3.2;_n_object_17337->_p_x0=60.0;_n_object_17337->_p_h=0.87;return _n_object_17337;})()};}();
d::Array<d::Array<double,false>,false> _n_STOPS_16982=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.05,0.025,0.12},d::Array<double,false>{0.25,0.18,0.07,0.27},d::Array<double,false>{0.5,0.7,0.2,0.42},d::Array<double,false>{0.7,1.0,0.4,0.3},d::Array<double,false>{0.85,1.0,0.58,0.3},d::Array<double,false>{1.0,1.0,0.72,0.4}};}();
double _n_hash_16975(double _a0,double _a1){double _n_x_17016=_a0;
double _n_y_17017=_a1;
{
double _n_h_17018=([&](){auto _n_left_17338=d::imul(double(d::i32(_n_x_17016)|d::i32(0.0)),374761393.0);auto _n_right_17339=d::imul(double(d::i32(_n_y_17017)|d::i32(0.0)),668265263.0);return (_n_left_17338+_n_right_17339);})();
(void)((_n_h_17018=d::imul(double(d::i32(_n_h_17018)^d::i32(double(d::u32(_n_h_17018)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_17018)^d::i32(double(d::u32(_n_h_17018)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_16976(double _a0,double _a1,double _a2){double _n_x_17019=_a0;
double _n_y_17020=_a1;
double _n_period_17021=_a2;
{
double _n_xi_17022=std::floor(_n_x_17019);
double _n_yi_17023=std::floor(_n_y_17020);
double _n_fx_17024=(_n_x_17019-_n_xi_17022);
double _n_fy_17025=(_n_y_17020-_n_yi_17023);
double _n_u_17026=((_n_fx_17024*_n_fx_17024)*(3.0-(2.0*_n_fx_17024)));
double _n_v_17027=((_n_fy_17025*_n_fy_17025)*(3.0-(2.0*_n_fy_17025)));
double _n_x0_17028=_n_xi_17022;
double _n_x1_17029=(_n_xi_17022+1.0);
if(d::truth(_n_period_17021)){d::check_cancel();(void)((_n_x0_17028=d::mod((d::mod(_n_xi_17022,_n_period_17021)+_n_period_17021),_n_period_17021)));
(void)((_n_x1_17029=d::mod((_n_x0_17028+1.0),_n_period_17021)));
}
double _n_a_17030=_n_hash_16975(_n_x0_17028,_n_yi_17023);
double _n_b_17031=_n_hash_16975(_n_x1_17029,_n_yi_17023);
double _n_c_17032=_n_hash_16975(_n_x0_17028,(_n_yi_17023+1.0));
double _n_d_17033=_n_hash_16975(_n_x1_17029,(_n_yi_17023+1.0));
return (((_n_a_17030+((_n_b_17031-_n_a_17030)*_n_u_17026))+((_n_c_17032-_n_a_17030)*_n_v_17027))+(((((_n_a_17030-_n_b_17031)-_n_c_17032)+_n_d_17033)*_n_u_17026)*_n_v_17027));

}
}

double _n_fbm_16977(double _a0,double _a1,double _a2,double _a3){double _n_x_17034=_a0;
double _n_y_17035=_a1;
double _n_octaves_17036=_a2;
double _n_period_17037=_a3;
{
double _n_s_17038=0.0;
double _n_n_17039=0.0;
double _n_amp_17040=0.5;
double _n_f_17041=1.0;
{double _n_i_17042=0.0;
for(;d::truth((_n_i_17042<_n_octaves_17036));(void)((_n_i_17042++))){d::check_cancel();(void)((_n_s_17038=(_n_s_17038+(_n_amp_17040*_n_noise_16976((_n_x_17034*_n_f_17041),(_n_y_17035*_n_f_17041),(_n_period_17037*_n_f_17041))))));
(void)((_n_n_17039=(_n_n_17039+_n_amp_17040)));
(void)((_n_amp_17040=(_n_amp_17040*0.5)));
(void)((_n_f_17041=(_n_f_17041*2.0)));
}}
return (_n_s_17038/_n_n_17039);

}
}

double _n_clamp_16978(double _a0){double _n_v_17043=_a0;
return (d::truth((_n_v_17043<0.0))?0.0:(d::truth((_n_v_17043>1.0))?1.0:_n_v_17043));}

double _n_smooth_16979(double _a0,double _a1,double _a2){double _n_a_17044=_a0;
double _n_b_17045=_a1;
double _n_v_17046=_a2;
{
double _n_k_17047=_n_clamp_16978(((_n_v_17046-_n_a_17044)/(_n_b_17045-_n_a_17044)));
return ((_n_k_17047*_n_k_17047)*(3.0-(2.0*_n_k_17047)));

}
}

double _n_mix_16980(double _a0,double _a1,double _a2){double _n_a_17048=_a0;
double _n_b_17049=_a1;
double _n_k_17050=_a2;
return (_n_a_17048+((_n_b_17049-_n_a_17048)*_n_k_17050));}

d::Array<double,false> _n_hex_16981(d::String _a0){d::String _n_s_17051=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_17052=_a0;
return (([&](){auto _n_argument_17340=d::slice(_n_s_17051,_n_i_17052,(_n_i_17052+2.0));auto _n_argument_17341=16.0;return d::parseInt(_n_argument_17340,_n_argument_17341);})()/255.0);});}

double _n_ramp_16983(double _a0,double _a1){double _n_v_17053=_a0;
double _n_i_17054=_a1;
{
{double _n_s_17055=1.0;
for(;d::truth((_n_s_17055<double(_n_STOPS_16982.size())));(void)((_n_s_17055++))){d::check_cancel();if(d::truth((_n_v_17053<=d::at(d::at(_n_STOPS_16982,_n_s_17055),0.0)))){d::check_cancel();d::Array<double,false> _n_a_17056=d::at(_n_STOPS_16982,(_n_s_17055-1.0));
d::Array<double,false> _n_b_17057=d::at(_n_STOPS_16982,_n_s_17055);
return _n_mix_16980(d::at(_n_a_17056,_n_i_17054),d::at(_n_b_17057,_n_i_17054),((_n_v_17053-d::at(_n_a_17056,0.0))/(d::at(_n_b_17057,0.0)-d::at(_n_a_17056,0.0))));
}
}}
return d::at(d::at(_n_STOPS_16982,(double(_n_STOPS_16982.size())-1.0)),_n_i_17054);

}
}

double _n_lampGlow_16984(double _a0,double _a1){double _n_h_17058=_a0;
double _n_t_17059=_a1;
{
double _n_c_17060=d::mod((d::mod(((_n_t_17059/36.0)+(_n_h_17058*7.3)),1.0)+1.0),1.0);
double _n_on_17061=_n_smooth_16979(0.0,0.035,_n_c_17060);
if((d::truth((_n_c_17060<0.06))&&d::truth((std::sin(((_n_t_17059*31.0)+(_n_h_17058*90.0)))<0.0)))){d::check_cancel();(void)((_n_on_17061=(_n_on_17061*0.3)));
}
return (_n_on_17061*(0.86+(0.14*std::sin(((_n_t_17059*(3.0+(_n_h_17058*5.0)))+(_n_h_17058*60.0))))));

}
}

struct Native_lake_pichola final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_16985{};
double _n_N_16986{};
d::Array<d::String,false> _n_out_16987{};
d::Array<uint8_t,true> _n_lut_16988{};
d::Array<float,true> _n_skyR_16990{};
d::Array<float,true> _n_skyG_16991{};
d::Array<float,true> _n_skyB_16992{};
d::Array<uint8_t,true> _n_mat_16993{};
d::Array<float,true> _n_SR_16994{};
d::Array<float,true> _n_SG_16995{};
d::Array<float,true> _n_SB_16996{};
d::Array<float,true> _n_phase_16997{};
d::Array<uint8_t,true> _n_lake_16998{};
double _n_CW_17005{};
d::Array<float,true> _n_cover_17006{};
d::Array<float,true> _n_lit_17007{};
d::Array<float,true> _n_FR_17009{};
d::Array<float,true> _n_FG_17010{};
d::Array<float,true> _n_FB_17011{};
d::Array<uint8_t,true> _n_birds_17012{};
d::Array<double,false> _n_marked_17013{};
std::function<d::String(double,std::shared_ptr<_n_Record_17327>)> _render;
double _n_nearest_16989(double _a0,double _a1,double _a2){double _n_r_17062=_a0;
double _n_g_17063=_a1;
double _n_b_17064=_a2;
{
double _n_k_17065=([&](){auto _n_left_17518=([&](){auto _n_left_17520=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_17062*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_17521=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_17063*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_17520)|d::i32(_n_right_17521));})();auto _n_right_17519=d::minimum({31.0,double(d::i32((_n_b_17064*31.99))|d::i32(0.0))});return double(d::i32(_n_left_17518)|d::i32(_n_right_17519));})();
if(d::truth((d::at(this->_n_lut_16988,_n_k_17065)!=255.0))){d::check_cancel();return d::at(this->_n_lut_16988,_n_k_17065);
}
double _n_best_17066=0.0;
double _n_bd_17067=1000000000.0;
{double _n_i_17068=0.0;
for(;d::truth((_n_i_17068<double(this->_n_P_16985.size())));(void)((_n_i_17068++))){d::check_cancel();double _n_dr_17069=(d::at(d::at(this->_n_P_16985,_n_i_17068),0.0)-_n_r_17062);
double _n_dg_17070=(d::at(d::at(this->_n_P_16985,_n_i_17068),1.0)-_n_g_17063);
double _n_db_17071=(d::at(d::at(this->_n_P_16985,_n_i_17068),2.0)-_n_b_17064);
double _n_d_17072=((((0.3*_n_dr_17069)*_n_dr_17069)+((0.5*_n_dg_17070)*_n_dg_17070))+((0.2*_n_db_17071)*_n_db_17071));
if(d::truth((_n_d_17072<_n_bd_17067))){d::check_cancel();(void)(((_n_bd_17067=_n_d_17072),(_n_best_17066=_n_i_17068)));
}
}}
return ([&](){auto&& _n_array_17522=this->_n_lut_16988;auto _n_index_17523=_n_k_17065;auto _n_value_17524=_n_best_17066;d::put(_n_array_17522,_n_index_17523,_n_value_17524);return _n_value_17524;})();

}
}

void _n_put_16999(double _a0,double _a1,double _a2,double _a3,double _a4,std::optional<double> _a5){double _n_x_17088=_a0;
double _n_y_17089=_a1;
double _n_cr_17090=_a2;
double _n_cg_17091=_a3;
double _n_cb_17092=_a4;
double _n_m_17093=(d::present(_a5)?d::read(_a5):_n_BUILT_16967);
{
if((((d::truth((_n_x_17088<0.0))||d::truth((_n_x_17088>=_n_W_16955)))||d::truth((_n_y_17089<0.0)))||d::truth((_n_y_17089>=_n_H_16956)))){d::check_cancel();return;
}
double _n_k_17094=((_n_y_17089*_n_W_16955)+_n_x_17088);
(void)((((([&](){auto&& _n_array_17525=this->_n_mat_16993;auto _n_index_17526=_n_k_17094;auto _n_value_17527=_n_m_17093;d::put(_n_array_17525,_n_index_17526,_n_value_17527);return _n_value_17527;})(),([&](){auto&& _n_array_17528=this->_n_SR_16994;auto _n_index_17529=_n_k_17094;auto _n_value_17530=_n_cr_17090;d::put(_n_array_17528,_n_index_17529,_n_value_17530);return _n_value_17530;})()),([&](){auto&& _n_array_17531=this->_n_SG_16995;auto _n_index_17532=_n_k_17094;auto _n_value_17533=_n_cg_17091;d::put(_n_array_17531,_n_index_17532,_n_value_17533);return _n_value_17533;})()),([&](){auto&& _n_array_17534=this->_n_SB_16996;auto _n_index_17535=_n_k_17094;auto _n_value_17536=_n_cb_17092;d::put(_n_array_17534,_n_index_17535,_n_value_17536);return _n_value_17536;})()));

}
}

void _n_lampAt_17000(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5){double _n_x_17095=_a0;
double _n_y_17096=_a1;
double _n_h_17097=_a2;
double _n_cr_17098=_a3;
double _n_cg_17099=_a4;
double _n_cb_17100=_a5;
{
(void)(this->_n_put_16999(_n_x_17095,_n_y_17096,_n_cr_17098,_n_cg_17099,_n_cb_17100,std::optional<double>(_n_LAMP_16968)));
if((((d::truth((_n_x_17095>=0.0))&&d::truth((_n_x_17095<_n_W_16955)))&&d::truth((_n_y_17096>=0.0)))&&d::truth((_n_y_17096<_n_H_16956)))){d::check_cancel();(void)(([&](){auto&& _n_array_17537=this->_n_phase_16997;auto _n_index_17538=((_n_y_17096*_n_W_16955)+_n_x_17095);auto _n_value_17539=_n_h_17097;d::put(_n_array_17537,_n_index_17538,_n_value_17539);return _n_value_17539;})());
}

}
}

double _n_back_17001(double _a0){double _n_x_17101=_a0;
return ([&](){auto _n_left_17540=(_n_HORIZON_16957-([&](){auto _n_left_17542=([&](){auto _n_left_17544=(6.0+(9.0*std::exp((-d::number(std::pow(((_n_x_17101-150.0)/40.0),2.0))))));auto _n_right_17545=(5.0*std::exp((-d::number(std::pow(((_n_x_17101-52.0)/18.0),2.0)))));return (_n_left_17544+_n_right_17545);})();auto _n_right_17543=(3.0*std::exp((-d::number(std::pow(((_n_x_17101-108.0)/12.0),2.0)))));return (_n_left_17542+_n_right_17543);})());auto _n_right_17541=(3.0*_n_fbm_16977((_n_x_17101*0.05),1.7,3.0,0.0));return (_n_left_17540-_n_right_17541);})();}

double _n_far_17002(double _a0){double _n_x_17102=_a0;
return ([&](){auto _n_left_17546=(_n_HORIZON_16957-([&](){auto _n_left_17548=([&](){auto _n_left_17550=([&](){auto _n_left_17552=(3.0+(17.0*std::exp((-d::number(std::pow(((_n_x_17102-26.0)/20.0),2.0))))));auto _n_right_17553=(6.0*std::exp((-d::number(std::pow(((_n_x_17102-26.0)/7.0),2.0)))));return (_n_left_17552+_n_right_17553);})();auto _n_right_17551=(7.0*std::exp((-d::number(std::pow(((_n_x_17102-6.0)/10.0),2.0)))));return (_n_left_17550+_n_right_17551);})();auto _n_right_17549=(4.0*std::exp((-d::number(std::pow(((_n_x_17102-54.0)/11.0),2.0)))));return (_n_left_17548+_n_right_17549);})());auto _n_right_17547=(2.0*_n_fbm_16977((_n_x_17102*0.06),5.3,3.0,0.0));return (_n_left_17546-_n_right_17547);})();}

double _n_near_17003(double _a0){double _n_x_17103=_a0;
return ([&](){auto _n_left_17554=(_n_HORIZON_16957-([&](){auto _n_left_17556=(1.5+(5.0*std::exp((-d::number(std::pow(((_n_x_17103-8.0)/22.0),2.0))))));auto _n_right_17557=(1.5*std::exp((-d::number(std::pow(((_n_x_17103-60.0)/14.0),2.0)))));return (_n_left_17556+_n_right_17557);})());auto _n_right_17555=(2.2*_n_fbm_16977((_n_x_17103*0.25),4.1,2.0,0.0));return (_n_left_17554-_n_right_17555);})();}

d::Array<double,false> _n_stone_17004(double _a0,double _a1,double _a2){double _n_x_17135=_a0;
double _n_y_17136=_a1;
double _n_s_17137=_a2;
{
double _n_k_17138=_n_clamp_16978(_n_s_17137);
return d::Array<double,false>{_n_mix_16980(0.7,1.0,_n_k_17138),_n_mix_16980(0.5,0.84,_n_k_17138),_n_mix_16980(0.6,0.6,_n_k_17138)};

}
}

double _n_density_17008(double _a0,double _a1){double _n_x_17221=_a0;
double _n_y_17222=_a1;
return ([&](){auto _n_left_17558=([&](){auto _n_left_17560=_n_fbm_16977((_n_x_17221*0.01),(_n_y_17222*0.12),4.0,(this->_n_CW_17005*0.01));auto _n_right_17561=(0.12*_n_smooth_16979(16.0,6.0,_n_y_17222));return (_n_left_17560-_n_right_17561);})();auto _n_right_17559=(0.12*_n_smooth_16979(34.0,44.0,_n_y_17222));return (_n_left_17558-_n_right_17559);})();}

void _n_emit_17014(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6,double _a7,std::optional<d::Array<uint8_t,true>> _a8){double _n_k_17227=_a0;
double _n_r_17228=_a1;
double _n_x_17229=_a2;
double _n_cr_17230=_a3;
double _n_cg_17231=_a4;
double _n_cb_17232=_a5;
double _n_floor_17233=_a6;
double _n_fade_17234=_a7;
std::optional<d::Array<uint8_t,true>> _n_color_17235=_a8;
{
(void)(((([&](){auto&& _n_array_17562=this->_n_FR_17009;auto _n_index_17563=_n_k_17227;auto _n_value_17564=_n_cr_17230;d::put(_n_array_17562,_n_index_17563,_n_value_17564);return _n_value_17564;})(),([&](){auto&& _n_array_17565=this->_n_FG_17010;auto _n_index_17566=_n_k_17227;auto _n_value_17567=_n_cg_17231;d::put(_n_array_17565,_n_index_17566,_n_value_17567);return _n_value_17567;})()),([&](){auto&& _n_array_17568=this->_n_FB_17011;auto _n_index_17569=_n_k_17227;auto _n_value_17570=_n_cb_17232;d::put(_n_array_17568,_n_index_17569,_n_value_17570);return _n_value_17570;})()));
double _n_peak_17236=d::maximum({_n_cr_17230,_n_cg_17231,_n_cb_17232,0.0001});
double _n_level_17237=(_n_clamp_16978((_n_floor_17233+(((1.0-_n_floor_17233)*std::pow(_n_peak_17236,0.85))*0.95)))*_n_fade_17234);
double _n_step_17238=([&](){auto _n_argument_17571=0.0;auto _n_argument_17572=([&](){auto _n_argument_17573=3.0;auto _n_argument_17574=d::round(((_n_level_17237*3.0)+d::at(_n_BAYER_16963,((double(d::i32(_n_r_17228)&d::i32(3.0))*4.0)+double(d::i32(_n_x_17229)&d::i32(3.0))))));return d::minimum({_n_argument_17573,_n_argument_17574});})();return d::maximum({_n_argument_17571,_n_argument_17572});})();
(void)(([&](){auto&& _n_array_17575=this->_n_out_16987;auto _n_index_17576=_n_k_17227;auto _n_value_17577=d::at(_n_DOTS_16961,_n_step_17238);d::put(_n_array_17575,_n_index_17576,_n_value_17577);return _n_value_17577;})());
if(d::truth(_n_color_17235)){d::check_cancel();double _n_want_17239=(d::truth(_n_step_17238)?d::minimum({1.0,((_n_level_17237+0.06)/d::at(_n_COVER_16962,_n_step_17238))}):0.0);
double _n_s_17240=((0.3+(0.7*_n_want_17239))/_n_peak_17236);
(void)(([&](){auto&& _n_array_17578=d::read(_n_color_17235);auto _n_index_17579=_n_k_17227;auto _n_value_17580=([&](){auto _n_argument_17581=_n_clamp_16978((_n_cr_17230*_n_s_17240));auto _n_argument_17582=_n_clamp_16978((_n_cg_17231*_n_s_17240));auto _n_argument_17583=_n_clamp_16978((_n_cb_17232*_n_s_17240));return this->_n_nearest_16989(_n_argument_17581,_n_argument_17582,_n_argument_17583);})();d::put(_n_array_17578,_n_index_17579,_n_value_17580);return _n_value_17580;})());
}

}
}

explicit Native_lake_pichola(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_16985=d::map(_n_meta_16953->_p_palette,_n_hex_16981);
this->_n_N_16986=(_n_W_16955*_n_H_16956);
this->_n_out_16987=d::Array<d::String,false>(size_t(this->_n_N_16986));
this->_n_lut_16988=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_skyR_16990=d::Array<float,true>(size_t((_n_W_16955*_n_HORIZON_16957)));
this->_n_skyG_16991=d::Array<float,true>(size_t((_n_W_16955*_n_HORIZON_16957)));
this->_n_skyB_16992=d::Array<float,true>(size_t((_n_W_16955*_n_HORIZON_16957)));
{double _n_r_17073=0.0;
for(;d::truth((_n_r_17073<_n_HORIZON_16957));(void)((_n_r_17073++))){d::check_cancel();{double _n_x_17074=0.0;
for(;d::truth((_n_x_17074<_n_W_16955));(void)((_n_x_17074++))){d::check_cancel();double _n_k_17075=((_n_r_17073*_n_W_16955)+_n_x_17074);
double _n_y_17076=(_n_r_17073+0.5);
double _n_v_17077=(_n_y_17076/_n_HORIZON_16957);
double _n_away_17078=(std::fabs(((_n_x_17074+0.5)-d::at(_n_SUN_16958,0.0)))/200.0);
double _n_veil_17079=(0.93+(0.14*_n_fbm_16977((_n_x_17074*0.04),(_n_y_17076*0.1),3.0,0.0)));
double _n_cr_17080=((_n_ramp_16983(_n_v_17077,1.0)-((0.2*_n_away_17078)*_n_v_17077))*_n_veil_17079);
double _n_cg_17081=((_n_ramp_16983(_n_v_17077,2.0)-((0.08*_n_away_17078)*_n_v_17077))*_n_veil_17079);
double _n_cb_17082=((_n_ramp_16983(_n_v_17077,3.0)+((0.06*_n_away_17078)*_n_v_17077))*_n_veil_17079);
double _n_dx_17083=((_n_x_17074+0.5)-d::at(_n_SUN_16958,0.0));
double _n_dy_17084=(_n_y_17076-d::at(_n_SUN_16958,1.0));
double _n_dm_17085=std::sqrt(((_n_dx_17083*_n_dx_17083)+(_n_dy_17084*_n_dy_17084)));
double _n_g_17086=([&](){auto _n_left_17342=([&](){auto _n_left_17344=(std::exp(((-d::number(_n_dm_17085))/8.0))*0.6);auto _n_right_17345=(std::exp(((-d::number(_n_dm_17085))/26.0))*0.35);return (_n_left_17344+_n_right_17345);})();auto _n_right_17343=(std::exp(((-d::number(_n_dm_17085))/70.0))*0.18);return (_n_left_17342+_n_right_17343);})();
(void)((((_n_cr_17080=(_n_cr_17080+_n_g_17086)),(_n_cg_17081=(_n_cg_17081+(_n_g_17086*0.75)))),(_n_cb_17082=(_n_cb_17082+(_n_g_17086*0.4)))));
double _n_disk_17087=_n_smooth_16979(6.2,5.2,_n_dm_17085);
(void)((((_n_cr_17080=_n_mix_16980(_n_cr_17080,1.0,_n_disk_17087)),(_n_cg_17081=_n_mix_16980(_n_cg_17081,0.95,_n_disk_17087))),(_n_cb_17082=_n_mix_16980(_n_cb_17082,0.8,_n_disk_17087))));
(void)(((([&](){auto&& _n_array_17346=this->_n_skyR_16990;auto _n_index_17347=_n_k_17075;auto _n_value_17348=_n_cr_17080;d::put(_n_array_17346,_n_index_17347,_n_value_17348);return _n_value_17348;})(),([&](){auto&& _n_array_17349=this->_n_skyG_16991;auto _n_index_17350=_n_k_17075;auto _n_value_17351=_n_cg_17081;d::put(_n_array_17349,_n_index_17350,_n_value_17351);return _n_value_17351;})()),([&](){auto&& _n_array_17352=this->_n_skyB_16992;auto _n_index_17353=_n_k_17075;auto _n_value_17354=_n_cb_17082;d::put(_n_array_17352,_n_index_17353,_n_value_17354);return _n_value_17354;})()));
}}
}}
this->_n_mat_16993=d::Array<uint8_t,true>(size_t(this->_n_N_16986));
this->_n_SR_16994=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_SG_16995=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_SB_16996=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_phase_16997=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_lake_16998=d::Array<uint8_t,true>(size_t(this->_n_N_16986));
{double _n_r_17104=0.0;
for(;d::truth((_n_r_17104<_n_HORIZON_16957));(void)((_n_r_17104++))){d::check_cancel();{double _n_x_17105=0.0;
for(;d::truth((_n_x_17105<_n_W_16955));(void)((_n_x_17105++))){d::check_cancel();double _n_y_17106=(_n_r_17104+0.5);
double _n_k_17107=((_n_r_17104*_n_W_16955)+_n_x_17105);
double _n_fr_17108=this->_n_far_17002((_n_x_17105+0.5));
double _n_br_17109=this->_n_back_17001((_n_x_17105+0.5));
double _n_sunward_17110=std::exp(((-d::number(std::fabs((_n_x_17105-d::at(_n_SUN_16958,0.0)))))/45.0));
if(d::truth((_n_y_17106>=this->_n_near_17003((_n_x_17105+0.5))))){d::check_cancel();double _n_s_17111=(0.75+(0.5*_n_fbm_16977((_n_x_17105*0.3),(_n_y_17106*0.3),2.0,0.0)));
(void)(this->_n_put_16999(_n_x_17105,_n_r_17104,(0.1*_n_s_17111),(0.05*_n_s_17111),(0.13*_n_s_17111),std::optional<double>(_n_NEAR_16966)));
}else {d::check_cancel();if(d::truth((_n_y_17106>=_n_fr_17108))){d::check_cancel();double _n_dd_17112=(_n_y_17106-_n_fr_17108);
double _n_tex_17113=(0.85+(0.3*_n_fbm_16977((_n_x_17105*0.15),(_n_y_17106*0.25),3.0,0.0)));
double _n_rim_17114=((std::exp(((-d::number(_n_dd_17112))/0.9))*0.3)*(0.3+_n_sunward_17110));
(void)(([&](){auto _n_argument_17355=_n_x_17105;auto _n_argument_17356=_n_r_17104;auto _n_argument_17357=(([&](){auto _n_left_17358=(_n_mix_16980(d::at(this->_n_skyR_16990,_n_k_17107),0.15,0.86)*_n_tex_17113);auto _n_right_17359=(1.0-(0.3*_n_smooth_16979(0.0,14.0,_n_dd_17112)));return (_n_left_17358*_n_right_17359);})()+_n_rim_17114);auto _n_argument_17360=(([&](){auto _n_left_17361=(_n_mix_16980(d::at(this->_n_skyG_16991,_n_k_17107),0.07,0.86)*_n_tex_17113);auto _n_right_17362=(1.0-(0.3*_n_smooth_16979(0.0,14.0,_n_dd_17112)));return (_n_left_17361*_n_right_17362);})()+(_n_rim_17114*0.55));auto _n_argument_17363=(([&](){auto _n_left_17364=(_n_mix_16980(d::at(this->_n_skyB_16992,_n_k_17107),0.21,0.86)*_n_tex_17113);auto _n_right_17365=(1.0-(0.3*_n_smooth_16979(0.0,14.0,_n_dd_17112)));return (_n_left_17364*_n_right_17365);})()+(_n_rim_17114*0.3));auto _n_argument_17366=_n_FAR_16965;return this->_n_put_16999(_n_argument_17355,_n_argument_17356,_n_argument_17357,_n_argument_17360,_n_argument_17363,std::optional<double>(_n_argument_17366));})());
}else {d::check_cancel();if(d::truth((_n_y_17106>=_n_br_17109))){d::check_cancel();double _n_dd_17115=(_n_y_17106-_n_br_17109);
double _n_tex_17116=(0.9+(0.2*_n_fbm_16977((_n_x_17105*0.1),(_n_y_17106*0.2),3.0,0.0)));
double _n_rim_17117=((std::exp(((-d::number(_n_dd_17115))/1.2))*0.4)*_n_sunward_17110);
(void)(([&](){auto _n_argument_17367=_n_x_17105;auto _n_argument_17368=_n_r_17104;auto _n_argument_17369=((_n_mix_16980(d::at(this->_n_skyR_16990,_n_k_17107),0.44,0.55)*_n_tex_17116)+_n_rim_17117);auto _n_argument_17370=((_n_mix_16980(d::at(this->_n_skyG_16991,_n_k_17107),0.24,0.55)*_n_tex_17116)+(_n_rim_17117*0.65));auto _n_argument_17371=((_n_mix_16980(d::at(this->_n_skyB_16992,_n_k_17107),0.42,0.55)*_n_tex_17116)+(_n_rim_17117*0.35));auto _n_argument_17372=_n_FAR_16965;return this->_n_put_16999(_n_argument_17367,_n_argument_17368,_n_argument_17369,_n_argument_17370,_n_argument_17371,std::optional<double>(_n_argument_17372));})());
}
}
}
}}
}}
{
double _n_M_17118=26.0;
double _n_base_17119=(d::round(this->_n_far_17002((_n_M_17118+0.5)))+1.0);
d::Array<double,false> _n_mc_17120=d::Array<double,false>{0.11,0.05,0.14};
{double _n_x_17121=(_n_M_17118-8.0);
for(;d::truth((_n_x_17121<(_n_M_17118+9.0)));(void)((_n_x_17121++))){d::check_cancel();{double _n_y_17122=(_n_base_17119-1.0);
for(;d::truth((_n_y_17122<(this->_n_far_17002((_n_x_17121+0.5))+1.0)));(void)((_n_y_17122++))){d::check_cancel();(void)(this->_n_put_16999(_n_x_17121,_n_y_17122,d::at(_n_mc_17120,0.0),d::at(_n_mc_17120,1.0),d::at(_n_mc_17120,2.0),std::optional<double>(_n_FAR_16965)));
}}
}}
{double _n_x_17123=(_n_M_17118-6.0);
for(;d::truth((_n_x_17123<(_n_M_17118+7.0)));(void)((_n_x_17123++))){d::check_cancel();{double _n_y_17124=(_n_base_17119-5.0);
for(;d::truth((_n_y_17124<_n_base_17119));(void)((_n_y_17124++))){d::check_cancel();(void)(this->_n_put_16999(_n_x_17123,_n_y_17124,d::at(_n_mc_17120,0.0),d::at(_n_mc_17120,1.0),d::at(_n_mc_17120,2.0),std::optional<double>{}));
}}
}}
{double _n_x_17125=(_n_M_17118-2.0);
for(;d::truth((_n_x_17125<(_n_M_17118+3.0)));(void)((_n_x_17125++))){d::check_cancel();{double _n_y_17126=(_n_base_17119-9.0);
for(;d::truth((_n_y_17126<(_n_base_17119-5.0)));(void)((_n_y_17126++))){d::check_cancel();(void)(this->_n_put_16999(_n_x_17125,_n_y_17126,d::at(_n_mc_17120,0.0),d::at(_n_mc_17120,1.0),d::at(_n_mc_17120,2.0),std::optional<double>{}));
}}
}}
auto _n_dome_17127=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_cx_17128=_a0;
double _n_by_17129=_a1;
double _n_rx_17130=_a2;
double _n_ry_17131=_a3;
{
{double _n_y_17132=std::floor((_n_by_17129-_n_ry_17131));
for(;d::truth((_n_y_17132<_n_by_17129));(void)((_n_y_17132++))){d::check_cancel();{double _n_x_17133=std::floor((_n_cx_17128-_n_rx_17130));
for(;d::truth((_n_x_17133<=(_n_cx_17128+_n_rx_17130)));(void)((_n_x_17133++))){d::check_cancel();if(d::truth(((std::pow((((_n_x_17133+0.5)-_n_cx_17128)/_n_rx_17130),2.0)+std::pow((((_n_by_17129-_n_y_17132)-0.5)/_n_ry_17131),2.0))<1.0))){d::check_cancel();(void)(this->_n_put_16999(_n_x_17133,_n_y_17132,d::at(_n_mc_17120,0.0),d::at(_n_mc_17120,1.0),d::at(_n_mc_17120,2.0),std::optional<double>{}));
}
}}
}}

}
};
(void)(_n_dome_17127((_n_M_17118+0.5),(_n_base_17119-9.0),3.0,3.4));
(void)(this->_n_put_16999(_n_M_17118,(_n_base_17119-13.0),d::at(_n_mc_17120,0.0),d::at(_n_mc_17120,1.0),d::at(_n_mc_17120,2.0),std::optional<double>{}));
(void)(_n_dome_17127((_n_M_17118-5.0),(_n_base_17119-5.0),1.6,2.0));
(void)(_n_dome_17127((_n_M_17118+6.0),(_n_base_17119-5.0),1.6,2.0));
for(auto &&_n_item_17373:d::Array<double,false>{(_n_M_17118-4.0),(_n_M_17118-1.0),(_n_M_17118+2.0),(_n_M_17118+5.0)}){d::check_cancel();double _n_x_17134=_n_item_17373;
(void)(([&](){auto _n_argument_17374=_n_x_17134;auto _n_argument_17375=(_n_base_17119-3.0);auto _n_argument_17376=_n_hash_16975(_n_x_17134,7.0);auto _n_argument_17377=d::at(_n_mc_17120,0.0);auto _n_argument_17378=d::at(_n_mc_17120,1.0);auto _n_argument_17379=d::at(_n_mc_17120,2.0);return this->_n_lampAt_17000(_n_argument_17374,_n_argument_17375,_n_argument_17376,_n_argument_17377,_n_argument_17378,_n_argument_17379);})());
}
(void)(([&](){auto _n_argument_17380=_n_M_17118;auto _n_argument_17381=(_n_base_17119-7.0);auto _n_argument_17382=_n_hash_16975(_n_M_17118,8.0);auto _n_argument_17383=d::at(_n_mc_17120,0.0);auto _n_argument_17384=d::at(_n_mc_17120,1.0);auto _n_argument_17385=d::at(_n_mc_17120,2.0);return this->_n_lampAt_17000(_n_argument_17380,_n_argument_17381,_n_argument_17382,_n_argument_17383,_n_argument_17384,_n_argument_17385);})());

}
(void)(d::forEach(_n_BLOCKS_16969,[&]( std::shared_ptr<std::tuple<double,double,double,bool>> _a0,double _a1) mutable ->void{auto _n_binding_17386=_a0;
double _n_x0_17139=std::get<0>(*_n_binding_17386);
double _n_x1_17140=std::get<1>(*_n_binding_17386);
double _n_top_17141=std::get<2>(*_n_binding_17386);
bool _n_tower_17142=std::get<3>(*_n_binding_17386);
double _n_bi_17143=_a1;
{
double _n_w_17144=(_n_x1_17140-_n_x0_17139);
double _n_cx_17145=((_n_x0_17139+_n_x1_17140)/2.0);
double _n_off_17146=double(d::i32(d::mod(_n_w_17144,5.0))>>(d::u32(1.0)&31));
{double _n_y_17147=_n_top_17141;
for(;d::truth((_n_y_17147<_n_PLINTH_16960));(void)((_n_y_17147++))){d::check_cancel();{double _n_x_17148=_n_x0_17139;
for(;d::truth((_n_x_17148<_n_x1_17140));(void)((_n_x_17148++))){d::check_cancel();double _n_s_17149=(_n_smooth_16979(56.0,36.0,_n_y_17147)*(d::truth(double(d::i32(_n_bi_17143)&d::i32(1.0)))?0.92:1.0));
if(d::truth(_n_tower_17142)){d::check_cancel();(void)((_n_s_17149=(_n_s_17149+(d::truth(((_n_x_17148+0.5)<_n_cx_17145))?0.12:(-d::number(0.08))))));
}
double _n_ry_17150=(_n_y_17147-_n_top_17141);
double _n_fy_17151=d::mod(_n_ry_17150,5.0);
double _n_g_17152=std::floor((((_n_x_17148-_n_x0_17139)-_n_off_17146)/5.0));
double _n_fx_17153=(((_n_x_17148-_n_x0_17139)-_n_off_17146)-(_n_g_17152*5.0));
bool _n_fits_17154=([&]()->bool{auto _n_logical_17387=(((_n_x_17148-_n_x0_17139)-_n_off_17146)>=0.0);return d::truth(_n_logical_17387)?((((_n_x0_17139+_n_off_17146)+(_n_g_17152*5.0))+5.0)<=_n_x1_17140):_n_logical_17387;})();
bool _n_win_17155=([&]()->bool{auto _n_logical_17388=([&]()->bool{auto _n_logical_17393=_n_fits_17154;return d::truth(_n_logical_17393)?(_n_ry_17150>0.0):_n_logical_17393;})();return d::truth(_n_logical_17388)?([&]()->bool{auto _n_logical_17389=([&]()->bool{auto _n_logical_17391=([&]()->bool{auto _n_logical_17392=(_n_fy_17151>=3.0);return d::truth(_n_logical_17392)?(_n_fx_17153>=1.0):_n_logical_17392;})();return d::truth(_n_logical_17391)?(_n_fx_17153<=3.0):_n_logical_17391;})();return d::truth(_n_logical_17389)?_n_logical_17389:([&]()->bool{auto _n_logical_17390=(_n_fy_17151==2.0);return d::truth(_n_logical_17390)?(_n_fx_17153==2.0):_n_logical_17390;})();})():_n_logical_17388;})();
if(d::truth((_n_fy_17151==0.0))){d::check_cancel();(void)((_n_s_17149=(_n_s_17149+0.14)));
}
auto _n_binding_17394=this->_n_stone_17004(_n_x_17148,_n_y_17147,_n_s_17149);
double _n_cr_17156=d::at(_n_binding_17394,0.0);
double _n_cg_17157=d::at(_n_binding_17394,1.0);
double _n_cb_17158=d::at(_n_binding_17394,2.0);
if(d::truth(_n_win_17155)){d::check_cancel();double _n_h_17159=([&](){auto _n_argument_17395=((_n_g_17152*31.0)+(_n_bi_17143*7.0));auto _n_argument_17396=(std::floor((_n_ry_17150/5.0))+3.0);return _n_hash_16975(_n_argument_17395,_n_argument_17396);})();
if(d::truth((_n_h_17159<0.55))){d::check_cancel();(void)(([&](){auto _n_argument_17397=_n_x_17148;auto _n_argument_17398=_n_y_17147;auto _n_argument_17399=_n_hash_16975((_n_h_17159*10000.0),2.0);auto _n_argument_17400=(_n_cr_17156*0.3);auto _n_argument_17401=(_n_cg_17157*0.2);auto _n_argument_17402=(_n_cb_17158*0.32);return this->_n_lampAt_17000(_n_argument_17397,_n_argument_17398,_n_argument_17399,_n_argument_17400,_n_argument_17401,_n_argument_17402);})());
}else {d::check_cancel();(void)(this->_n_put_16999(_n_x_17148,_n_y_17147,(_n_cr_17156*0.3),(_n_cg_17157*0.2),(_n_cb_17158*0.32),std::optional<double>{}));
}
}else {d::check_cancel();(void)(this->_n_put_16999(_n_x_17148,_n_y_17147,_n_cr_17156,_n_cg_17157,_n_cb_17158,std::optional<double>{}));
}
}}
}}
if(d::truth(_n_tower_17142)){d::check_cancel();double _n_rx_17160=((_n_w_17144/2.0)+0.4);
double _n_ry_17161=(_n_rx_17160*1.35);
{double _n_y_17162=std::floor((_n_top_17141-_n_ry_17161));
for(;d::truth((_n_y_17162<_n_top_17141));(void)((_n_y_17162++))){d::check_cancel();{double _n_x_17163=(_n_x0_17139-1.0);
for(;d::truth((_n_x_17163<=_n_x1_17140));(void)((_n_x_17163++))){d::check_cancel();double _n_dx_17164=(((_n_x_17163+0.5)-_n_cx_17145)/_n_rx_17160);
double _n_dy_17165=(((_n_top_17141-_n_y_17162)-0.5)/_n_ry_17161);
if(d::truth((((_n_dx_17164*_n_dx_17164)+(_n_dy_17165*_n_dy_17165))<1.0))){d::check_cancel();auto _n_binding_17403=this->_n_stone_17004(_n_x_17163,_n_y_17162,((1.05-((0.45*(_n_dx_17164+1.0))*0.5))-(0.1*(1.0-_n_dy_17165))));
double _n_cr_17166=d::at(_n_binding_17403,0.0);
double _n_cg_17167=d::at(_n_binding_17403,1.0);
double _n_cb_17168=d::at(_n_binding_17403,2.0);
(void)(this->_n_put_16999(_n_x_17163,_n_y_17162,_n_cr_17166,_n_cg_17167,_n_cb_17168,std::optional<double>{}));
}
}}
}}
double _n_fx_17169=std::floor(_n_cx_17145);
(void)(([&](){auto _n_argument_17404=_n_fx_17169;auto _n_argument_17405=(std::floor((_n_top_17141-_n_ry_17161))-1.0);auto _n_argument_17406=1.0;auto _n_argument_17407=0.8;auto _n_argument_17408=0.5;return this->_n_put_16999(_n_argument_17404,_n_argument_17405,_n_argument_17406,_n_argument_17407,_n_argument_17408,std::optional<double>{});})());
(void)(([&](){auto _n_argument_17409=_n_fx_17169;auto _n_argument_17410=(std::floor((_n_top_17141-_n_ry_17161))-2.0);auto _n_argument_17411=1.0;auto _n_argument_17412=0.8;auto _n_argument_17413=0.5;return this->_n_put_16999(_n_argument_17409,_n_argument_17410,_n_argument_17411,_n_argument_17412,_n_argument_17413,std::optional<double>{});})());
}else {d::check_cancel();{double _n_x_17170=_n_x0_17139;
for(;d::truth((_n_x_17170<_n_x1_17140));(void)((_n_x_17170++))){d::check_cancel();if(d::truth((!d::truth(double(d::i32(_n_x_17170)&d::i32(1.0)))))){d::check_cancel();(void)(([&](){auto _n_arguments_17414=this->_n_stone_17004(_n_x_17170,_n_top_17141,0.9);return this->_n_put_16999(_n_x_17170,(_n_top_17141-1.0),d::at(_n_arguments_17414,0.0),d::at(_n_arguments_17414,1.0),d::at(_n_arguments_17414,2.0),std::optional<double>(d::at(_n_arguments_17414,3.0)));})());
}
}}
{double _n_c_17171=(_n_x0_17139+3.5);
for(;d::truth(((_n_c_17171+2.5)<_n_x1_17140));(void)((_n_c_17171=(_n_c_17171+6.0)))){d::check_cancel();(void)(([&](){auto _n_arguments_17415=this->_n_stone_17004(_n_c_17171,_n_top_17141,0.85);return this->_n_put_16999(std::floor((_n_c_17171-1.5)),(_n_top_17141-1.0),d::at(_n_arguments_17415,0.0),d::at(_n_arguments_17415,1.0),d::at(_n_arguments_17415,2.0),std::optional<double>(d::at(_n_arguments_17415,3.0)));})());
(void)(([&](){auto _n_arguments_17416=this->_n_stone_17004(_n_c_17171,_n_top_17141,0.6);return this->_n_put_16999(std::floor((_n_c_17171+1.5)),(_n_top_17141-1.0),d::at(_n_arguments_17416,0.0),d::at(_n_arguments_17416,1.0),d::at(_n_arguments_17416,2.0),std::optional<double>(d::at(_n_arguments_17416,3.0)));})());
{double _n_y_17172=(_n_top_17141-4.0);
for(;d::truth((_n_y_17172<(_n_top_17141-1.0)));(void)((_n_y_17172++))){d::check_cancel();{double _n_x_17173=std::floor((_n_c_17171-3.0));
for(;d::truth((_n_x_17173<=(_n_c_17171+3.0)));(void)((_n_x_17173++))){d::check_cancel();double _n_dx_17174=(((_n_x_17173+0.5)-_n_c_17171)/2.4);
double _n_dy_17175=((((_n_top_17141-1.5)-_n_y_17172)-0.5)/2.4);
if(d::truth((((_n_dx_17174*_n_dx_17174)+(_n_dy_17175*_n_dy_17175))<1.0))){d::check_cancel();(void)(([&](){auto _n_arguments_17417=this->_n_stone_17004(_n_x_17173,_n_y_17172,(0.95-((0.35*(_n_dx_17174+1.0))*0.5)));return this->_n_put_16999(_n_x_17173,_n_y_17172,d::at(_n_arguments_17417,0.0),d::at(_n_arguments_17417,1.0),d::at(_n_arguments_17417,2.0),std::optional<double>(d::at(_n_arguments_17417,3.0)));})());
}
}}
}}
}}
}

}
}));
{double _n_y_17176=_n_PLINTH_16960;
for(;d::truth((_n_y_17176<_n_HORIZON_16957));(void)((_n_y_17176++))){d::check_cancel();{double _n_x_17177=110.0;
for(;d::truth((_n_x_17177<_n_W_16955));(void)((_n_x_17177++))){d::check_cancel();if((d::truth((_n_y_17176<(this->_n_near_17003((_n_x_17177+0.5))-0.0)))&&d::truth((_n_x_17177<114.0)))){d::check_cancel();continue;
}
double _n_fx_17178=d::mod((_n_x_17177-110.0),6.0);
double _n_ry_17179=(_n_y_17176-_n_PLINTH_16960);
auto _n_binding_17421=([&](){auto _n_argument_17418=_n_x_17177;auto _n_argument_17419=_n_y_17176;auto _n_argument_17420=(0.2+(0.1*_n_fbm_16977((_n_x_17177*0.4),(_n_y_17176*0.4),2.0,0.0)));return this->_n_stone_17004(_n_argument_17418,_n_argument_17419,_n_argument_17420);})();
double _n_cr_17180=d::at(_n_binding_17421,0.0);
double _n_cg_17181=d::at(_n_binding_17421,1.0);
double _n_cb_17182=d::at(_n_binding_17421,2.0);
if(d::truth((_n_y_17176>=(_n_HORIZON_16957-2.0)))){d::check_cancel();(void)((((_n_cr_17180=(_n_cr_17180*1.2)),(_n_cg_17181=(_n_cg_17181*1.15))),(_n_cb_17182=(_n_cb_17182*1.1))));
}
if(d::truth((_n_y_17176==(_n_HORIZON_16957-2.0)))){d::check_cancel();(void)((((_n_cr_17180=(_n_cr_17180*0.8)),(_n_cg_17181=(_n_cg_17181*0.8))),(_n_cb_17182=(_n_cb_17182*0.8))));
}
bool _n_arch_17183=([&]()->bool{auto _n_logical_17422=([&]()->bool{auto _n_logical_17424=([&]()->bool{auto _n_logical_17425=([&]()->bool{auto _n_logical_17426=(_n_ry_17179>=3.0);return d::truth(_n_logical_17426)?(_n_ry_17179<=5.0):_n_logical_17426;})();return d::truth(_n_logical_17425)?(_n_fx_17178>=2.0):_n_logical_17425;})();return d::truth(_n_logical_17424)?(_n_fx_17178<=4.0):_n_logical_17424;})();return d::truth(_n_logical_17422)?_n_logical_17422:([&]()->bool{auto _n_logical_17423=(_n_ry_17179==2.0);return d::truth(_n_logical_17423)?(_n_fx_17178==3.0):_n_logical_17423;})();})();
if(d::truth(_n_arch_17183)){d::check_cancel();double _n_h_17184=([&](){auto _n_argument_17427=std::floor(((_n_x_17177-110.0)/6.0));auto _n_argument_17428=11.0;return _n_hash_16975(_n_argument_17427,_n_argument_17428);})();
if(d::truth((_n_h_17184<0.4))){d::check_cancel();(void)(([&](){auto _n_argument_17429=_n_x_17177;auto _n_argument_17430=_n_y_17176;auto _n_argument_17431=_n_hash_16975(double(d::i32(_n_x_17177)>>(d::u32(2.0)&31)),12.0);auto _n_argument_17432=(_n_cr_17180*0.4);auto _n_argument_17433=(_n_cg_17181*0.3);auto _n_argument_17434=(_n_cb_17182*0.45);return this->_n_lampAt_17000(_n_argument_17429,_n_argument_17430,_n_argument_17431,_n_argument_17432,_n_argument_17433,_n_argument_17434);})());
}else {d::check_cancel();(void)(this->_n_put_16999(_n_x_17177,_n_y_17176,(_n_cr_17180*0.4),(_n_cg_17181*0.3),(_n_cb_17182*0.45),std::optional<double>{}));
}
}else {d::check_cancel();(void)(this->_n_put_16999(_n_x_17177,_n_y_17176,_n_cr_17180,_n_cg_17181,_n_cb_17182,std::optional<double>{}));
}
}}
}}
{
auto _n_marble_17185=[&]( double _a0,double _a1) mutable ->d::Array<double,false>{double _n_x_17186=_a0;
double _n_s_17187=_a1;
{
double _n_k_17188=_n_clamp_16978((_n_s_17187*(0.55+(0.45*_n_smooth_16979(122.0,82.0,_n_x_17186)))));
return d::Array<double,false>{_n_mix_16980(0.68,1.0,_n_k_17188),_n_mix_16980(0.48,0.9,_n_k_17188),_n_mix_16980(0.6,0.8,_n_k_17188)};

}
};
double _n_LX_17189=(-d::number(20.0));
auto _n_set_17190=[&]( double _a0,double _a1,d::Array<double,false> _a2,std::optional<double> _a3) mutable ->void{double _n_x_17191=_a0;
double _n_y_17192=_a1;
d::Array<double,false> _n_c_17193=_a2;
double _n_m_17194=(d::present(_a3)?d::read(_a3):_n_BUILT_16967);
{
(void)(this->_n_put_16999((_n_x_17191+_n_LX_17189),_n_y_17192,d::at(_n_c_17193,0.0),d::at(_n_c_17193,1.0),d::at(_n_c_17193,2.0),std::optional<double>(_n_m_17194)));
(void)(([&](){auto&& _n_array_17435=this->_n_lake_16998;auto _n_index_17436=(((_n_y_17192*_n_W_16955)+_n_x_17191)+_n_LX_17189);auto _n_value_17437=1.0;d::put(_n_array_17435,_n_index_17436,_n_value_17437);return _n_value_17437;})());

}
};
auto _n_storey_17195=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_x0_17196=_a0;
double _n_x1_17197=_a1;
double _n_top_17198=_a2;
double _n_bottom_17199=_a3;
{
{double _n_y_17200=_n_top_17198;
for(;d::truth((_n_y_17200<_n_bottom_17199));(void)((_n_y_17200++))){d::check_cancel();{double _n_x_17201=_n_x0_17196;
for(;d::truth((_n_x_17201<_n_x1_17197));(void)((_n_x_17201++))){d::check_cancel();double _n_ry_17202=(_n_y_17200-_n_top_17198);
double _n_fx_17203=d::mod((_n_x_17201-_n_x0_17196),5.0);
double _n_s_17204=0.95;
if(d::truth((_n_ry_17202==0.0))){d::check_cancel();(void)((_n_s_17204=1.1));
}
if(d::truth((_n_y_17200>=(_n_LP_Y_16959-2.0)))){d::check_cancel();(void)((_n_s_17204=0.7));
}
d::Array<double,false> _n_c_17205=_n_marble_17185(_n_x_17201,_n_s_17204);
bool _n_win_17206=([&]()->bool{auto _n_logical_17438=([&]()->bool{auto _n_logical_17442=(_n_ry_17202==2.0);return d::truth(_n_logical_17442)?(_n_fx_17203==2.0):_n_logical_17442;})();return d::truth(_n_logical_17438)?_n_logical_17438:([&]()->bool{auto _n_logical_17439=([&]()->bool{auto _n_logical_17440=([&]()->bool{auto _n_logical_17441=(_n_ry_17202>=3.0);return d::truth(_n_logical_17441)?(_n_ry_17202<=4.0):_n_logical_17441;})();return d::truth(_n_logical_17440)?(_n_fx_17203>=1.0):_n_logical_17440;})();return d::truth(_n_logical_17439)?(_n_fx_17203<=3.0):_n_logical_17439;})();})();
bool _n_gate_17207=([&]()->bool{auto _n_logical_17443=([&]()->bool{auto _n_logical_17444=(_n_y_17200>=(_n_LP_Y_16959-2.0));return d::truth(_n_logical_17444)?(_n_fx_17203==2.0):_n_logical_17444;})();return d::truth(_n_logical_17443)?(_n_bottom_17199==_n_LP_Y_16959):_n_logical_17443;})();
if((d::truth(_n_win_17206)||d::truth(_n_gate_17207))){d::check_cancel();d::Array<double,false> _n_dark_17208=d::Array<double,false>{(d::at(_n_c_17205,0.0)*0.42),(d::at(_n_c_17205,1.0)*0.3),(d::at(_n_c_17205,2.0)*0.42)};
if((d::truth(_n_win_17206)&&d::truth((([&](){auto _n_argument_17445=std::floor(((_n_x_17201-_n_x0_17196)/5.0));auto _n_argument_17446=_n_top_17198;return _n_hash_16975(_n_argument_17445,_n_argument_17446);})()<0.6)))){d::check_cancel();(void)(_n_set_17190(_n_x_17201,_n_y_17200,_n_dark_17208,std::optional<double>(_n_LAMP_16968)));
(void)(([&](){auto&& _n_array_17447=this->_n_phase_16997;auto _n_index_17448=(((_n_y_17200*_n_W_16955)+_n_x_17201)+_n_LX_17189);auto _n_value_17449=([&](){auto _n_argument_17450=(std::floor(((_n_x_17201-_n_x0_17196)/5.0))+40.0);auto _n_argument_17451=_n_top_17198;return _n_hash_16975(_n_argument_17450,_n_argument_17451);})();d::put(_n_array_17447,_n_index_17448,_n_value_17449);return _n_value_17449;})());
}else {d::check_cancel();(void)(_n_set_17190(_n_x_17201,_n_y_17200,_n_dark_17208,std::optional<double>{}));
}
}else {d::check_cancel();(void)(_n_set_17190(_n_x_17201,_n_y_17200,_n_c_17205,std::optional<double>{}));
}
}}
}}

}
};
(void)(_n_storey_17195(84.0,120.0,64.0,_n_LP_Y_16959));
(void)(_n_storey_17195(89.0,115.0,59.0,64.0));
auto _n_dome_17209=[&]( double _a0,double _a1,double _a2,double _a3) mutable ->void{double _n_cx_17210=_a0;
double _n_by_17211=_a1;
double _n_rx_17212=_a2;
double _n_ry_17213=_a3;
{
{double _n_y_17214=std::floor((_n_by_17211-_n_ry_17213));
for(;d::truth((_n_y_17214<_n_by_17211));(void)((_n_y_17214++))){d::check_cancel();{double _n_x_17215=std::floor((_n_cx_17210-_n_rx_17212));
for(;d::truth((_n_x_17215<=(_n_cx_17210+_n_rx_17212)));(void)((_n_x_17215++))){d::check_cancel();double _n_dx_17216=(((_n_x_17215+0.5)-_n_cx_17210)/_n_rx_17212);
double _n_dy_17217=(((_n_by_17211-_n_y_17214)-0.5)/_n_ry_17213);
if(d::truth((((_n_dx_17216*_n_dx_17216)+(_n_dy_17217*_n_dy_17217))<1.0))){d::check_cancel();(void)(([&](){auto _n_argument_17452=_n_x_17215;auto _n_argument_17453=_n_y_17214;auto _n_argument_17454=_n_marble_17185(_n_x_17215,((1.1-((0.5*(_n_dx_17216+1.0))*0.5))-(0.1*(1.0-_n_dy_17217))));return _n_set_17190(_n_argument_17452,_n_argument_17453,_n_argument_17454,std::optional<double>{});})());
}
}}
}}

}
};
{double _n_x_17218=98.0;
for(;d::truth((_n_x_17218<107.0));(void)((_n_x_17218++))){d::check_cancel();(void)(([&](){auto _n_argument_17455=_n_x_17218;auto _n_argument_17456=58.0;auto _n_argument_17457=_n_marble_17185(_n_x_17218,0.85);return _n_set_17190(_n_argument_17455,_n_argument_17456,_n_argument_17457,std::optional<double>{});})());
}}
(void)(_n_dome_17209(102.5,58.0,4.8,5.4));
(void)(([&](){auto _n_argument_17458=102.0;auto _n_argument_17459=52.0;auto _n_argument_17460=_n_marble_17185(102.0,1.1);return _n_set_17190(_n_argument_17458,_n_argument_17459,_n_argument_17460,std::optional<double>{});})());
for(auto &&_n_item_17461:d::Array<d::Array<double,false>,false>{d::Array<double,false>{86.5,64.0},d::Array<double,false>{117.5,64.0},d::Array<double,false>{91.5,59.0},d::Array<double,false>{112.5,59.0}}){d::check_cancel();auto _n_binding_17462=_n_item_17461;
double _n_c_17219=d::at(_n_binding_17462,0.0);
double _n_by_17220=d::at(_n_binding_17462,1.0);
{
(void)(([&](){auto _n_argument_17463=std::floor((_n_c_17219-1.5));auto _n_argument_17464=(_n_by_17220-1.0);auto _n_argument_17465=_n_marble_17185(_n_c_17219,0.8);return _n_set_17190(_n_argument_17463,_n_argument_17464,_n_argument_17465,std::optional<double>{});})());
(void)(([&](){auto _n_argument_17466=std::floor((_n_c_17219+1.5));auto _n_argument_17467=(_n_by_17220-1.0);auto _n_argument_17468=_n_marble_17185(_n_c_17219,0.8);return _n_set_17190(_n_argument_17466,_n_argument_17467,_n_argument_17468,std::optional<double>{});})());
(void)(_n_dome_17209(_n_c_17219,(_n_by_17220-1.0),2.4,2.6));

}
}

}
this->_n_CW_17005=600.0;
this->_n_cover_17006=d::Array<float,true>(size_t((this->_n_CW_17005*_n_HORIZON_16957)));
this->_n_lit_17007=d::Array<float,true>(size_t((this->_n_CW_17005*_n_HORIZON_16957)));
{double _n_r_17223=0.0;
for(;d::truth((_n_r_17223<_n_HORIZON_16957));(void)((_n_r_17223++))){d::check_cancel();{double _n_x_17224=0.0;
for(;d::truth((_n_x_17224<this->_n_CW_17005));(void)((_n_x_17224++))){d::check_cancel();double _n_y_17225=(_n_r_17223+0.5);
double _n_d_17226=this->_n_density_17008(_n_x_17224,_n_y_17225);
(void)(([&](){auto&& _n_array_17469=this->_n_cover_17006;auto _n_index_17470=((_n_r_17223*this->_n_CW_17005)+_n_x_17224);auto _n_value_17471=_n_smooth_16979(0.54,0.64,_n_d_17226);d::put(_n_array_17469,_n_index_17470,_n_value_17471);return _n_value_17471;})());
(void)(([&](){auto&& _n_array_17472=this->_n_lit_17007;auto _n_index_17473=((_n_r_17223*this->_n_CW_17005)+_n_x_17224);auto _n_value_17474=_n_clamp_16978((0.5+((_n_d_17226-this->_n_density_17008(_n_x_17224,(_n_y_17225+1.5)))*9.0)));d::put(_n_array_17472,_n_index_17473,_n_value_17474);return _n_value_17474;})());
}}
}}
this->_n_FR_17009=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_FG_17010=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_FB_17011=d::Array<float,true>(size_t(this->_n_N_16986));
this->_n_birds_17012=d::Array<uint8_t,true>(size_t(this->_n_N_16986));
this->_n_marked_17013=d::Array<double,false>{};
_render=[=]( double _a0,std::shared_ptr<_n_Record_17327> _a1) mutable ->d::String{double _n_t_17241=_a0;
auto _n_binding_17477=(d::present(_a1)?_a1:([&](){auto _n_object_17476=std::make_shared<_n_Record_17327>();return _n_object_17476;})());
std::optional<d::Array<uint8_t,true>> _n_color_17242=_n_binding_17477->_p_color;
{
double _n_drift_17243=(_n_t_17241*0.6);
for(auto &&_n_item_17478:this->_n_marked_17013){d::check_cancel();double _n_k_17244=_n_item_17478;
(void)(([&](){auto&& _n_array_17479=this->_n_birds_17012;auto _n_index_17480=_n_k_17244;auto _n_value_17481=0.0;d::put(_n_array_17479,_n_index_17480,_n_value_17481);return _n_value_17481;})());
}
(void)((this->_n_marked_17013.resize(size_t(0.0)),0.0));
auto _n_mark_17245=[&]( double _a0,double _a1) mutable ->void{double _n_x_17246=_a0;
double _n_y_17247=_a1;
{
(void)(((_n_x_17246=d::round(_n_x_17246)),(_n_y_17247=d::round(_n_y_17247))));
if((((d::truth((_n_x_17246<0.0))||d::truth((_n_x_17246>=_n_W_16955)))||d::truth((_n_y_17247<0.0)))||d::truth((_n_y_17247>=_n_HORIZON_16957)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_17482=this->_n_birds_17012;auto _n_index_17483=((_n_y_17247*_n_W_16955)+_n_x_17246);auto _n_value_17484=1.0;d::put(_n_array_17482,_n_index_17483,_n_value_17484);return _n_value_17484;})());
(void)(this->_n_marked_17013.push(((_n_y_17247*_n_W_16955)+_n_x_17246)));

}
};
double _n_flock_17248=(d::mod(((_n_t_17241*2.6)+130.0),300.0)-50.0);
{double _n_i_17249=0.0;
for(;d::truth((_n_i_17249<8.0));(void)((_n_i_17249++))){d::check_cancel();double _n_bx_17250=(_n_flock_17248-d::at(d::Array<double,false>{0.0,5.0,9.0,4.0,12.0,16.0,8.0,21.0},_n_i_17249));
double _n_by_17251=((30.0+d::at(d::Array<double,false>{0.0,2.0,4.0,(-d::number(3.0)),5.0,7.0,(-d::number(5.0)),3.0},_n_i_17249))+(1.2*std::sin(((_n_t_17241*0.7)+_n_i_17249))));
double _n_f_17252=std::sin(((_n_t_17241*6.5)+(_n_i_17249*1.9)));
double _n_lift_17253=(d::truth((_n_f_17252>0.35))?(-d::number(1.0)):(d::truth((_n_f_17252<(-d::number(0.35))))?1.0:0.0));
(void)(_n_mark_17245(_n_bx_17250,_n_by_17251));
(void)((_n_mark_17245((_n_bx_17250-1.0),((_n_by_17251-1.0)+(d::truth((_n_lift_17253>0.0))?1.0:0.0))),_n_mark_17245((_n_bx_17250+1.0),((_n_by_17251-1.0)+(d::truth((_n_lift_17253>0.0))?1.0:0.0)))));
(void)((_n_mark_17245((_n_bx_17250-2.0),((_n_by_17251-1.0)+_n_lift_17253)),_n_mark_17245((_n_bx_17250+2.0),((_n_by_17251-1.0)+_n_lift_17253))));
}}
double _n_pair_17254=(230.0-d::mod((_n_t_17241*1.8),300.0));
{double _n_i_17255=0.0;
for(;d::truth((_n_i_17255<2.0));(void)((_n_i_17255++))){d::check_cancel();double _n_bx_17256=(_n_pair_17254+(_n_i_17255*6.0));
double _n_by_17257=((18.0+(_n_i_17255*2.0))+std::sin(((_n_t_17241*0.5)+_n_i_17255)));
double _n_lift_17258=(d::truth((std::sin(((_n_t_17241*5.0)+(_n_i_17255*2.0)))>0.0))?(-d::number(1.0)):0.0);
(void)(((((_n_mark_17245(_n_bx_17256,_n_by_17257),_n_mark_17245((_n_bx_17256-1.0),(_n_by_17257-1.0))),_n_mark_17245((_n_bx_17256+1.0),(_n_by_17257-1.0))),_n_mark_17245((_n_bx_17256-2.0),((_n_by_17257-1.0)+_n_lift_17258))),_n_mark_17245((_n_bx_17256+2.0),((_n_by_17257-1.0)+_n_lift_17258))));
}}
double _n_span_17259=(_n_W_16955+70.0);
d::Array<std::shared_ptr<_n_Record_17261>,false> _n_boats_17260=d::map(_n_BOATS_16973,[&]( std::shared_ptr<_n_Record_16974> _a0) mutable ->std::shared_ptr<_n_Record_17261>{std::shared_ptr<_n_Record_16974> _n_b_17262=_a0;
{
double _n_w_17263=double(d::at(_n_b_17262->_p_art,0.0).size());
double _n_h_17264=double(_n_b_17262->_p_art.size());
double _n_x_17265=(d::mod((d::mod((_n_b_17262->_p_x0+(_n_b_17262->_p_v*_n_t_17241)),_n_span_17259)+_n_span_17259),_n_span_17259)-35.0);
return ([&](){auto _n_object_17486=std::make_shared<_n_Record_17261>();auto _n_spread_17487=_n_b_17262;_n_object_17486->_p_art=_n_spread_17487->_p_art;_n_object_17486->_p_y=_n_spread_17487->_p_y;_n_object_17486->_p_v=_n_spread_17487->_p_v;_n_object_17486->_p_x0=_n_spread_17487->_p_x0;_n_object_17486->_p_h=_n_spread_17487->_p_h;_n_object_17486->_p_w=_n_w_17263;_n_object_17486->_p_x=d::round(_n_x_17265);_n_object_17486->_p_top=((_n_b_17262->_p_y-_n_h_17264)+1.0);_n_object_17486->_p_hull=d::findIndex(_n_b_17262->_p_art,[&]( d::String _a0) mutable ->bool{d::String _n_l_17266=_a0;
return d::includes(_n_l_17266,d::String(u"h"));});return _n_object_17486;})();

}
});
{double _n_r_17267=0.0;
for(;d::truth((_n_r_17267<_n_H_16956));(void)((_n_r_17267++))){d::check_cancel();{double _n_x_17268=0.0;
for(;d::truth((_n_x_17268<_n_W_16955));(void)((_n_x_17268++))){d::check_cancel();double _n_k_17269=((_n_r_17267*_n_W_16955)+_n_x_17268);
double _n_y_17270=(_n_r_17267+0.5);
double _n_m_17271=d::at(this->_n_mat_16993,_n_k_17269);
double _n_cr_17272=0.0;
double _n_cg_17273=0.0;
double _n_cb_17274=0.0;
double _n_floor_17275=0.12;
double _n_fade_17276=1.0;
if(d::truth((_n_m_17271==_n_LAMP_16968))){d::check_cancel();double _n_on_17277=_n_lampGlow_16984(d::at(this->_n_phase_16997,_n_k_17269),_n_t_17241);
(void)((((_n_cr_17272=_n_mix_16980(d::at(this->_n_SR_16994,_n_k_17269),1.0,_n_on_17277)),(_n_cg_17273=_n_mix_16980(d::at(this->_n_SG_16995,_n_k_17269),0.8,_n_on_17277))),(_n_cb_17274=_n_mix_16980(d::at(this->_n_SB_16996,_n_k_17269),0.4,_n_on_17277))));
}else {d::check_cancel();if(d::truth((_n_m_17271!=_n_AIR_16964))){d::check_cancel();(void)((((_n_cr_17272=d::at(this->_n_SR_16994,_n_k_17269)),(_n_cg_17273=d::at(this->_n_SG_16995,_n_k_17269))),(_n_cb_17274=d::at(this->_n_SB_16996,_n_k_17269))));
if(d::truth((_n_m_17271==_n_NEAR_16966))){d::check_cancel();(void)((_n_floor_17275=0.02));
}
if(d::truth((_n_m_17271==_n_FAR_16965))){d::check_cancel();(void)((_n_floor_17275=0.05));
}
if(d::truth((_n_m_17271==_n_BUILT_16967))){d::check_cancel();(void)((_n_floor_17275=0.04));
}
}else {d::check_cancel();if(d::truth((_n_r_17267<_n_HORIZON_16957))){d::check_cancel();(void)((((_n_cr_17272=d::at(this->_n_skyR_16990,_n_k_17269)),(_n_cg_17273=d::at(this->_n_skyG_16991,_n_k_17269))),(_n_cb_17274=d::at(this->_n_skyB_16992,_n_k_17269))));
(void)((_n_floor_17275=(0.04+(0.08*_n_smooth_16979(0.0,30.0,_n_y_17270)))));
double _n_sx_17278=(_n_x_17268+_n_drift_17243);
double _n_ix_17279=std::floor(_n_sx_17278);
double _n_fx_17280=(_n_sx_17278-_n_ix_17279);
double _n_i0_17281=((_n_r_17267*this->_n_CW_17005)+d::mod(_n_ix_17279,this->_n_CW_17005));
double _n_i1_17282=((_n_r_17267*this->_n_CW_17005)+d::mod((_n_ix_17279+1.0),this->_n_CW_17005));
double _n_c_17283=(d::at(this->_n_cover_17006,_n_i0_17281)+((d::at(this->_n_cover_17006,_n_i1_17282)-d::at(this->_n_cover_17006,_n_i0_17281))*_n_fx_17280));
if(((d::truth((_n_c_17283<0.05))&&d::truth((_n_y_17270<16.0)))&&d::truth((_n_hash_16975(_n_x_17268,((_n_r_17267*3.0)+5.0))>0.992)))){d::check_cancel();double _n_s_17284=([&](){auto _n_left_17488=(0.55+(0.45*std::sin(([&](){auto _n_left_17490=(_n_t_17241*(1.3+(_n_hash_16975(_n_x_17268,_n_r_17267)*2.0)));auto _n_right_17491=(_n_hash_16975(_n_r_17267,_n_x_17268)*6.28);return (_n_left_17490+_n_right_17491);})())));auto _n_right_17489=_n_smooth_16979(16.0,4.0,_n_y_17270);return (_n_left_17488*_n_right_17489);})();
(void)((((_n_cr_17272=d::maximum({_n_cr_17272,(_n_s_17284*0.95)})),(_n_cg_17273=d::maximum({_n_cg_17273,(_n_s_17284*0.9)}))),(_n_cb_17274=d::maximum({_n_cb_17274,_n_s_17284}))));
}
if(d::truth((_n_c_17283>0.01))){d::check_cancel();double _n_l_17285=(d::at(this->_n_lit_17007,_n_i0_17281)+((d::at(this->_n_lit_17007,_n_i1_17282)-d::at(this->_n_lit_17007,_n_i0_17281))*_n_fx_17280));
double _n_dx_17286=((_n_x_17268+0.5)-d::at(_n_SUN_16958,0.0));
double _n_dy_17287=(_n_y_17270-d::at(_n_SUN_16958,1.0));
double _n_nearSun_17288=std::exp(((-d::number(std::sqrt(((_n_dx_17286*_n_dx_17286)+(_n_dy_17287*_n_dy_17287)))))/45.0));
double _n_low_17289=_n_smooth_16979(6.0,42.0,_n_y_17270);
double _n_warm_17290=_n_clamp_16978(((0.25+(0.5*_n_low_17289))+(0.8*_n_nearSun_17288)));
double _n_lr_17291=_n_mix_16980(0.95,1.0,_n_warm_17290);
double _n_lg_17292=_n_mix_16980(0.34,0.78,_n_warm_17290);
double _n_lb_17293=_n_mix_16980(0.55,0.42,_n_warm_17290);
double _n_dr_17294=_n_mix_16980(0.24,0.5,_n_low_17289);
double _n_dg_17295=_n_mix_16980(0.11,0.22,_n_low_17289);
double _n_db_17296=_n_mix_16980(0.32,0.38,_n_low_17289);
double _n_a_17297=d::minimum({1.0,(_n_c_17283*0.95)});
(void)((_n_cr_17272=([&](){auto _n_argument_17492=_n_cr_17272;auto _n_argument_17493=_n_mix_16980(_n_dr_17294,_n_lr_17291,_n_l_17285);auto _n_argument_17494=_n_a_17297;return _n_mix_16980(_n_argument_17492,_n_argument_17493,_n_argument_17494);})()));
(void)((_n_cg_17273=([&](){auto _n_argument_17495=_n_cg_17273;auto _n_argument_17496=_n_mix_16980(_n_dg_17295,_n_lg_17292,_n_l_17285);auto _n_argument_17497=_n_a_17297;return _n_mix_16980(_n_argument_17495,_n_argument_17496,_n_argument_17497);})()));
(void)((_n_cb_17274=([&](){auto _n_argument_17498=_n_cb_17274;auto _n_argument_17499=_n_mix_16980(_n_db_17296,_n_lb_17293,_n_l_17285);auto _n_argument_17500=_n_a_17297;return _n_mix_16980(_n_argument_17498,_n_argument_17499,_n_argument_17500);})()));
}
if(d::truth(d::at(this->_n_birds_17012,_n_k_17269))){d::check_cancel();(void)((((_n_cr_17272=0.1),(_n_cg_17273=0.04)),(_n_cb_17274=0.1)));
}
}else {d::check_cancel();double _n_depth_17298=((_n_y_17270-_n_HORIZON_16957)/(_n_H_16956-_n_HORIZON_16957));
double _n_w1_17299=_n_noise_16976(((_n_x_17268*0.03)+(_n_t_17241*0.03)),((_n_y_17270*0.5)-(_n_t_17241*0.25)),0.0);
double _n_w2_17300=_n_noise_16976(((_n_x_17268*0.08)-(_n_t_17241*0.05)),((_n_y_17270*1.3)-(_n_t_17241*0.5)),0.0);
double _n_sx_17301=([&](){auto _n_argument_17501=0.0;auto _n_argument_17502=([&](){auto _n_argument_17503=(_n_W_16955-1.0);auto _n_argument_17504=d::round((_n_x_17268+((_n_w1_17299-0.5)*(1.5+(5.0*_n_depth_17298)))));return d::minimum({_n_argument_17503,_n_argument_17504});})();return d::maximum({_n_argument_17501,_n_argument_17502});})();
double _n_oy_17302=((_n_w2_17300-0.5)*(1.0+(3.0*_n_depth_17298)));
double _n_src_17303=(-d::number(1.0));
if(d::truth((_n_r_17267>=_n_LP_Y_16959))){d::check_cancel();double _n_ry_17304=d::round(((((2.0*_n_LP_Y_16959)-1.0)-_n_r_17267)+_n_oy_17302));
if(((d::truth((_n_ry_17304>=48.0))&&d::truth((_n_ry_17304<_n_LP_Y_16959)))&&d::truth(d::at(this->_n_lake_16998,((_n_ry_17304*_n_W_16955)+_n_sx_17301))))){d::check_cancel();(void)((_n_src_17303=((_n_ry_17304*_n_W_16955)+_n_sx_17301)));
}
}
if(d::truth((_n_src_17303<0.0))){d::check_cancel();(void)((_n_src_17303=((([&](){auto _n_argument_17505=0.0;auto _n_argument_17506=([&](){auto _n_argument_17507=(_n_HORIZON_16957-1.0);auto _n_argument_17508=d::round(((((2.0*_n_HORIZON_16957)-1.0)-_n_r_17267)+_n_oy_17302));return d::minimum({_n_argument_17507,_n_argument_17508});})();return d::maximum({_n_argument_17505,_n_argument_17506});})()*_n_W_16955)+_n_sx_17301)));
}
double _n_band_17305=(0.4+(0.6*_n_smooth_16979(0.32,0.68,_n_w2_17300)));
double _n_dim_17306=((0.8-(0.2*_n_depth_17298))*(1.0-(0.22*_n_smooth_16979(110.0,200.0,_n_x_17268))));
(void)((_n_cr_17272=(((d::at(this->_n_FR_17009,_n_src_17303)*_n_band_17305)*_n_dim_17306)+0.03)));
(void)((_n_cg_17273=((((d::at(this->_n_FG_17010,_n_src_17303)*_n_band_17305)*_n_dim_17306)*0.96)+0.02)));
(void)((_n_cb_17274=((((d::at(this->_n_FB_17011,_n_src_17303)*_n_band_17305)*_n_dim_17306)*1.05)+0.06)));
double _n_road_17307=std::exp((-d::number(std::pow((((_n_x_17268+0.5)-d::at(_n_SUN_16958,0.0))/(2.5+(_n_depth_17298*16.0))),2.0))));
double _n_glint_17308=(_n_smooth_16979(0.6,0.85,_n_w2_17300)*_n_road_17307);
(void)((((_n_cr_17272=(_n_cr_17272+(0.8*_n_glint_17308))),(_n_cg_17273=(_n_cg_17273+(0.6*_n_glint_17308)))),(_n_cb_17274=(_n_cb_17274+(0.3*_n_glint_17308)))));
double _n_haze_17309=(std::exp(((-d::number((_n_y_17270-_n_HORIZON_16957)))/2.0))*0.12);
(void)((((_n_cr_17272=(_n_cr_17272+_n_haze_17309)),(_n_cg_17273=(_n_cg_17273+(_n_haze_17309*0.6)))),(_n_cb_17274=(_n_cb_17274+(_n_haze_17309*0.5)))));
(void)((_n_floor_17275=0.1));
(void)((_n_fade_17276=_n_smooth_16979((_n_H_16956+8.0),(_n_H_16956-16.0),_n_y_17270)));
for(auto &&_n_item_17509:_n_boats_17260){d::check_cancel();std::shared_ptr<_n_Record_17261> _n_b_17310=_n_item_17509;
{
double _n_a_17311=(d::truth((_n_b_17310->_p_v>0.0))?(_n_b_17310->_p_x-_n_x_17268):(_n_x_17268-(_n_b_17310->_p_x+_n_b_17310->_p_w)));
if((d::truth((_n_a_17311>(-d::number(1.0))))&&d::truth((_n_a_17311<70.0)))){d::check_cancel();double _n_s_17312=(_n_b_17310->_p_w/22.0);
double _n_dy_17313=std::fabs(((_n_y_17270-_n_b_17310->_p_y)-0.2));
double _n_arm_17314=([&](){auto _n_left_17510=std::exp((-d::number(std::pow((((_n_dy_17313-(((_n_a_17311+1.0)*0.09)*_n_s_17312))-0.4)/(0.7+(0.02*_n_a_17311))),2.0))));auto _n_right_17511=std::exp(((-d::number(_n_a_17311))/(30.0*_n_s_17312)));return (_n_left_17510*_n_right_17511);})();
double _n_churn_17315=([&](){auto _n_left_17512=std::exp((-d::number(std::pow((_n_dy_17313/((0.8*_n_s_17312)+0.4)),2.0))));auto _n_right_17513=std::exp(((-d::number(_n_a_17311))/(12.0*_n_s_17312)));return (_n_left_17512*_n_right_17513);})();
double _n_lap_17316=(0.5+(0.5*([&](){auto _n_argument_17514=0.3;auto _n_argument_17515=0.7;auto _n_argument_17516=_n_noise_16976(((_n_x_17268*0.6)+((_n_b_17310->_p_v*_n_t_17241)*0.6)),(_n_y_17270*1.7),0.0);return _n_smooth_16979(_n_argument_17514,_n_argument_17515,_n_argument_17516);})()));
double _n_wk_17317=(d::minimum({1.0,((_n_arm_17314*1.3)+(_n_churn_17315*1.1))})*_n_lap_17316);
(void)((((_n_cr_17272=_n_mix_16980(_n_cr_17272,1.0,(_n_wk_17317*0.8))),(_n_cg_17273=_n_mix_16980(_n_cg_17273,0.86,(_n_wk_17317*0.8)))),(_n_cb_17274=_n_mix_16980(_n_cb_17274,0.66,(_n_wk_17317*0.8)))));
}
if((((d::truth((_n_r_17267>_n_b_17310->_p_y))&&d::truth((_n_r_17267<=(_n_b_17310->_p_y+3.0))))&&d::truth((_n_x_17268>=(_n_b_17310->_p_x+1.0))))&&d::truth((_n_x_17268<((_n_b_17310->_p_x+_n_b_17310->_p_w)-1.0))))){d::check_cancel();double _n_q_17318=(0.35+(0.15*(_n_r_17267-_n_b_17310->_p_y)));
(void)((((_n_cr_17272=(_n_cr_17272*_n_q_17318)),(_n_cg_17273=(_n_cg_17273*_n_q_17318))),(_n_cb_17274=(_n_cb_17274*_n_q_17318))));
}

}
}
}
}
}
if(d::truth((_n_r_17267>=_n_HORIZON_16957))){d::check_cancel();for(auto &&_n_item_17517:_n_boats_17260){d::check_cancel();std::shared_ptr<_n_Record_17261> _n_b_17319=_n_item_17517;
{
if((((d::truth((_n_r_17267<_n_b_17319->_p_top))||d::truth((_n_r_17267>_n_b_17319->_p_y)))||d::truth((_n_x_17268<_n_b_17319->_p_x)))||d::truth((_n_x_17268>=(_n_b_17319->_p_x+_n_b_17319->_p_w))))){d::check_cancel();continue;
}
double _n_col_17320=(d::truth((_n_b_17319->_p_v>0.0))?(_n_x_17268-_n_b_17319->_p_x):((_n_b_17319->_p_w-1.0)-(_n_x_17268-_n_b_17319->_p_x)));
d::String _n_ch_17321=d::at(d::at(_n_b_17319->_p_art,(_n_r_17267-_n_b_17319->_p_top)),_n_col_17320);
if(d::truth((_n_ch_17321==d::String(u".")))){d::check_cancel();continue;
}
double _n_row_17322=(_n_r_17267-_n_b_17319->_p_top);
if(d::truth((_n_ch_17321==d::String(u"h")))){d::check_cancel();double _n_s_17323=(1.0-(0.2*(_n_row_17322-_n_b_17319->_p_hull)));
(void)(((((_n_cr_17272=(0.55*_n_s_17323)),(_n_cg_17273=(0.26*_n_s_17323))),(_n_cb_17274=(0.16*_n_s_17323))),(_n_floor_17275=0.04)));
}else {d::check_cancel();if(d::truth((_n_ch_17321==d::String(u"g")))){d::check_cancel();(void)((((_n_cr_17272=0.98),(_n_cg_17273=0.7)),(_n_cb_17274=0.34)));
}else {d::check_cancel();if(d::truth((_n_ch_17321==d::String(u"p")))){d::check_cancel();(void)((((_n_cr_17272=0.8),(_n_cg_17273=0.55)),(_n_cb_17274=0.32)));
}else {d::check_cancel();if(d::truth((_n_ch_17321==d::String(u"s")))){d::check_cancel();(void)(((((_n_cr_17272=0.2),(_n_cg_17273=0.08)),(_n_cb_17274=0.12)),(_n_floor_17275=0.02)));
}else {d::check_cancel();if(d::truth((_n_ch_17321==d::String(u"r")))){d::check_cancel();(void)(((((_n_cr_17272=0.1),(_n_cg_17273=0.04)),(_n_cb_17274=0.08)),(_n_floor_17275=0.0)));
}else {d::check_cancel();if(d::truth((_n_ch_17321==d::String(u"c")))){d::check_cancel();if(d::truth((_n_row_17322==0.0))){d::check_cancel();(void)((((_n_cr_17272=1.0),(_n_cg_17273=0.88)),(_n_cb_17274=0.72)));
}else {d::check_cancel();(void)((((_n_cr_17272=0.88),(_n_cg_17273=0.22)),(_n_cb_17274=0.24)));
}
}else {d::check_cancel();if(d::truth((_n_ch_17321==d::String(u"o")))){d::check_cancel();double _n_on_17324=(0.85+(0.15*std::sin(((_n_t_17241*7.0)+(_n_b_17319->_p_h*40.0)))));
(void)((((_n_cr_17272=_n_on_17324),(_n_cg_17273=(0.8*_n_on_17324))),(_n_cb_17274=(0.42*_n_on_17324))));
}
}
}
}
}
}
}
(void)((_n_fade_17276=1.0));

}
}
}
(void)(this->_n_emit_17014(_n_k_17269,_n_r_17267,_n_x_17268,_n_cr_17272,_n_cg_17273,_n_cb_17274,_n_floor_17275,_n_fade_17276,_n_color_17242));
}}
}}
d::Array<d::String,false> _n_lines_17325=d::Array<d::String,false>{};
{double _n_r_17326=0.0;
for(;d::truth((_n_r_17326<_n_H_16956));(void)((_n_r_17326++))){d::check_cancel();(void)(_n_lines_17325.push(d::join(this->_n_out_16987.slice((_n_r_17326*_n_W_16955),((_n_r_17326+1.0)*_n_W_16955)),d::String(u""))));
}}
return d::join(_n_lines_17325,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("lake-pichola").cols)*ascii::catalog_meta("lake-pichola").rows);auto _env=std::make_shared<_n_Record_17327>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &lake_pichola_meta(){return catalog_meta("lake-pichola");}
std::unique_ptr<Piece> make_lake_pichola(const AsciiPieceOptions &o){return std::make_unique<Native_lake_pichola>(o);}
}
