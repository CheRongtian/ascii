// Direct, statically typed C++ from src/pieces/amer-fort.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_622;
struct _n_Record_897;
struct _n_Record_622{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_622> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_622>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_897{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_897> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_897>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_643(double _a0,double _a1);
double _n_noise_644(double _a0,double _a1);
double _n_fbm_645(double _a0,double _a1,double _a2);
double _n_clamp_646(double _a0);
double _n_smooth_647(double _a0,double _a1,double _a2);
double _n_mix_648(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_649(d::String _a0);
double _n_bump_650(double _a0,double _a1,double _a2);
double _n_farTop_651(double _a0);
double _n_nearTop_652(double _a0);
double _n_sky_653(double _a0);
std::shared_ptr<_n_Record_622> _n_meta_621=[](){return ([&](){auto _n_object_900=std::make_shared<_n_Record_622>();_n_object_900->_p_name=d::String(u"amer fort");_n_object_900->_p_category=d::String(u"scenes");_n_object_900->_p_note=d::String(u"amer fort floodlit gold on its hill, mirrored in maota lake at night");_n_object_900->_p_cols=200.0;_n_object_900->_p_rows=100.0;_n_object_900->_p_cell=1.0;_n_object_900->_p_fps=15.0;_n_object_900->_p_ground=d::String(u"#060915");_n_object_900->_p_palette=d::Array<d::String,false>{d::String(u"#0a1230"),d::String(u"#101a40"),d::String(u"#16234f"),d::String(u"#1e2e62"),d::String(u"#283c78"),d::String(u"#364d8e"),d::String(u"#4a5f9f"),d::String(u"#6a7fb8"),d::String(u"#c9d4ee"),d::String(u"#eef1f8"),d::String(u"#fff6dc"),d::String(u"#3a220f"),d::String(u"#5a3415"),d::String(u"#7d4a1c"),d::String(u"#a06426"),d::String(u"#c27f32"),d::String(u"#dc9c44"),d::String(u"#ecb85c"),d::String(u"#f6d07e"),d::String(u"#ffe4a6"),d::String(u"#fff1cc"),d::String(u"#0b0f1c"),d::String(u"#121829"),d::String(u"#1a2236"),d::String(u"#2a2228"),d::String(u"#4a3a2c"),d::String(u"#4c6e34"),d::String(u"#6f9448"),d::String(u"#8fbf5a"),d::String(u"#b4dc7c"),d::String(u"#a08a62")};return _n_object_900;})();}();
const double _n_W_623=[](){return 200.0;}();
const double _n_H_624=[](){return 100.0;}();
const double _n_WATER_625=[](){return 62.0;}();
const double _n_ISLE_TOP_626=[](){return 65.0;}();
const double _n_ISLE_RIM_627=[](){return 71.0;}();
const double _n_ISLE_BASE_628=[](){return 75.0;}();
d::Array<double,false> _n_MOON_629=[](){return d::Array<double,false>{172.0,13.0};}();
const d::String _n_DOTS_630=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_631=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_632=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_672=_a0;
return ((_n_v_672/16.0)-0.47);});}();
const double _n_AIR_633=[](){return 0.0;}();
const double _n_FAR_634=[](){return 1.0;}();
const double _n_HILL_635=[](){return 2.0;}();
const double _n_STONE_636=[](){return 3.0;}();
const double _n_WINDOW_637=[](){return 4.0;}();
const double _n_DOME_638=[](){return 5.0;}();
const double _n_WALL_639=[](){return 6.0;}();
const double _n_LAMP_640=[](){return 7.0;}();
const double _n_GARDEN_641=[](){return 8.0;}();
const double _n_MOONM_642=[](){return 9.0;}();
d::Array<std::shared_ptr<std::tuple<double,double,double,double,d::Array<double,false>,double>>,false> _n_BLOCKS_654=[](){return d::Array<std::shared_ptr<std::tuple<double,double,double,double,d::Array<double,false>,double>>,false>{std::make_shared<std::tuple<double,double,double,double,d::Array<double,false>,double>>(30.0,176.0,56.0,62.0,d::Array<double,false>{58.0},6.0),std::make_shared<std::tuple<double,double,double,double,d::Array<double,false>,double>>(62.0,150.0,41.0,51.0,d::Array<double,false>{44.0},7.0),std::make_shared<std::tuple<double,double,double,double,d::Array<double,false>,double>>(70.0,102.0,32.0,41.0,d::Array<double,false>{35.0},4.0),std::make_shared<std::tuple<double,double,double,double,d::Array<double,false>,double>>(104.0,142.0,24.0,41.0,d::Array<double,false>{27.0,33.0},4.0),std::make_shared<std::tuple<double,double,double,double,d::Array<double,false>,double>>(150.0,162.0,40.0,52.0,d::Array<double,false>{43.0},4.0),std::make_shared<std::tuple<double,double,double,double,d::Array<double,false>,double>>(48.0,62.0,45.0,52.0,d::Array<double,false>{47.0},4.0)};}();
d::Array<d::Array<double,false>,false> _n_BASTIONS_655=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{31.0,3.5,53.0},d::Array<double,false>{70.0,3.0,54.0},d::Array<double,false>{118.0,3.0,54.0},d::Array<double,false>{175.0,3.5,53.0}};}();
d::Array<d::Array<double,false>,false> _n_CHHATRIS_656=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{74.0,32.0,2.2},d::Array<double,false>{84.0,32.0,2.0},d::Array<double,false>{93.0,32.0,2.0},d::Array<double,false>{100.0,32.0,2.2},d::Array<double,false>{108.0,24.0,2.2},d::Array<double,false>{116.0,24.0,2.0},d::Array<double,false>{123.0,24.0,4.0},d::Array<double,false>{131.0,24.0,2.0},d::Array<double,false>{139.0,24.0,2.2},d::Array<double,false>{153.0,40.0,2.0},d::Array<double,false>{160.0,40.0,2.0},d::Array<double,false>{55.0,45.0,2.0},d::Array<double,false>{31.0,53.0,2.4},d::Array<double,false>{175.0,53.0,2.4}};}();
d::Array<d::Array<double,false>,false> _n_TOWERS_657=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{6.0,1.0},d::Array<double,false>{15.0,1.0},d::Array<double,false>{24.0,2.4},d::Array<double,false>{36.0,1.2},d::Array<double,false>{47.0,1.0},d::Array<double,false>{158.0,1.0},d::Array<double,false>{172.0,1.2},d::Array<double,false>{185.0,1.6},d::Array<double,false>{196.0,1.0}};}();
double _n_hash_643(double _a0,double _a1){double _n_x_673=_a0;
double _n_y_674=_a1;
{
double _n_h_675=([&](){auto _n_left_901=d::imul(double(d::i32(_n_x_673)|d::i32(0.0)),374761393.0);auto _n_right_902=d::imul(double(d::i32(_n_y_674)|d::i32(0.0)),668265263.0);return (_n_left_901+_n_right_902);})();
(void)((_n_h_675=d::imul(double(d::i32(_n_h_675)^d::i32(double(d::u32(_n_h_675)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_675)^d::i32(double(d::u32(_n_h_675)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_644(double _a0,double _a1){double _n_x_676=_a0;
double _n_y_677=_a1;
{
double _n_xi_678=std::floor(_n_x_676);
double _n_yi_679=std::floor(_n_y_677);
double _n_fx_680=(_n_x_676-_n_xi_678);
double _n_fy_681=(_n_y_677-_n_yi_679);
double _n_u_682=((_n_fx_680*_n_fx_680)*(3.0-(2.0*_n_fx_680)));
double _n_v_683=((_n_fy_681*_n_fy_681)*(3.0-(2.0*_n_fy_681)));
double _n_a_684=_n_hash_643(_n_xi_678,_n_yi_679);
double _n_b_685=_n_hash_643((_n_xi_678+1.0),_n_yi_679);
double _n_c_686=_n_hash_643(_n_xi_678,(_n_yi_679+1.0));
double _n_d_687=_n_hash_643((_n_xi_678+1.0),(_n_yi_679+1.0));
return (((_n_a_684+((_n_b_685-_n_a_684)*_n_u_682))+((_n_c_686-_n_a_684)*_n_v_683))+(((((_n_a_684-_n_b_685)-_n_c_686)+_n_d_687)*_n_u_682)*_n_v_683));

}
}

double _n_fbm_645(double _a0,double _a1,double _a2){double _n_x_688=_a0;
double _n_y_689=_a1;
double _n_octaves_690=_a2;
{
double _n_s_691=0.0;
double _n_n_692=0.0;
double _n_amp_693=0.5;
double _n_f_694=1.0;
{double _n_i_695=0.0;
for(;d::truth((_n_i_695<_n_octaves_690));(void)((_n_i_695++))){d::check_cancel();(void)((_n_s_691=(_n_s_691+(_n_amp_693*_n_noise_644((_n_x_688*_n_f_694),(_n_y_689*_n_f_694))))));
(void)((_n_n_692=(_n_n_692+_n_amp_693)));
(void)((_n_amp_693=(_n_amp_693*0.5)));
(void)((_n_f_694=(_n_f_694*2.0)));
}}
return (_n_s_691/_n_n_692);

}
}

double _n_clamp_646(double _a0){double _n_v_696=_a0;
return (d::truth((_n_v_696<0.0))?0.0:(d::truth((_n_v_696>1.0))?1.0:_n_v_696));}

double _n_smooth_647(double _a0,double _a1,double _a2){double _n_a_697=_a0;
double _n_b_698=_a1;
double _n_v_699=_a2;
{
double _n_k_700=_n_clamp_646(((_n_v_699-_n_a_697)/(_n_b_698-_n_a_697)));
return ((_n_k_700*_n_k_700)*(3.0-(2.0*_n_k_700)));

}
}

double _n_mix_648(double _a0,double _a1,double _a2){double _n_a_701=_a0;
double _n_b_702=_a1;
double _n_k_703=_a2;
return (_n_a_701+((_n_b_702-_n_a_701)*_n_k_703));}

d::Array<double,false> _n_hex_649(d::String _a0){d::String _n_s_704=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_705=_a0;
return (([&](){auto _n_argument_903=d::slice(_n_s_704,_n_i_705,(_n_i_705+2.0));auto _n_argument_904=16.0;return d::parseInt(_n_argument_903,_n_argument_904);})()/255.0);});}

double _n_bump_650(double _a0,double _a1,double _a2){double _n_x_706=_a0;
double _n_c_707=_a1;
double _n_w_708=_a2;
return std::exp((-d::number(std::pow(((_n_x_706-_n_c_707)/_n_w_708),2.0))));}

double _n_farTop_651(double _a0){double _n_x_709=_a0;
return ([&](){auto _n_left_905=([&](){auto _n_left_907=([&](){auto _n_left_909=(33.0-(21.0*_n_bump_650(_n_x_709,24.0,24.0)));auto _n_right_910=(12.0*_n_bump_650(_n_x_709,184.0,30.0));return (_n_left_909-_n_right_910);})();auto _n_right_908=(5.0*_n_bump_650(_n_x_709,70.0,14.0));return (_n_left_907-_n_right_908);})();auto _n_right_906=(4.0*_n_fbm_645((_n_x_709*0.07),1.3,3.0));return (_n_left_905-_n_right_906);})();}

double _n_nearTop_652(double _a0){double _n_x_710=_a0;
return ([&](){auto _n_left_911=(_n_WATER_625-(40.0*_n_bump_650(_n_x_710,106.0,62.0)));auto _n_right_912=(2.0*_n_fbm_645((_n_x_710*0.12),4.1,2.0));return (_n_left_911-_n_right_912);})();}

double _n_sky_653(double _a0){double _n_x_711=_a0;
return ([&](){auto _n_argument_913=_n_farTop_651(_n_x_711);auto _n_argument_914=_n_nearTop_652(_n_x_711);return d::minimum({_n_argument_913,_n_argument_914});})();}

struct Native_amer_fort final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_658{};
double _n_N_659{};
d::Array<d::String,false> _n_out_660{};
d::Array<uint8_t,true> _n_lut_661{};
d::Array<uint8_t,true> _n_mat_663{};
d::Array<float,true> _n_shade_664{};
d::Array<float,true> _n_glow_667{};
d::Array<float,true> _n_BR_668{};
d::Array<float,true> _n_BG_669{};
d::Array<float,true> _n_BB_670{};
d::Array<d::Array<double,false>,false> _n_BIRDS_671{};
std::function<d::String(double,std::shared_ptr<_n_Record_897>)> _render;
double _n_nearest_662(double _a0,double _a1,double _a2){double _n_r_712=_a0;
double _n_g_713=_a1;
double _n_b_714=_a2;
{
double _n_k_715=([&](){auto _n_left_1028=([&](){auto _n_left_1030=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_712*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_1031=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_713*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_1030)|d::i32(_n_right_1031));})();auto _n_right_1029=d::minimum({31.0,double(d::i32((_n_b_714*31.99))|d::i32(0.0))});return double(d::i32(_n_left_1028)|d::i32(_n_right_1029));})();
if(d::truth((d::at(this->_n_lut_661,_n_k_715)!=255.0))){d::check_cancel();return d::at(this->_n_lut_661,_n_k_715);
}
double _n_best_716=0.0;
double _n_bd_717=1000000000.0;
{double _n_i_718=0.0;
for(;d::truth((_n_i_718<double(this->_n_P_658.size())));(void)((_n_i_718++))){d::check_cancel();double _n_dr_719=(d::at(d::at(this->_n_P_658,_n_i_718),0.0)-_n_r_712);
double _n_dg_720=(d::at(d::at(this->_n_P_658,_n_i_718),1.0)-_n_g_713);
double _n_db_721=(d::at(d::at(this->_n_P_658,_n_i_718),2.0)-_n_b_714);
double _n_d_722=((((0.3*_n_dr_719)*_n_dr_719)+((0.5*_n_dg_720)*_n_dg_720))+((0.2*_n_db_721)*_n_db_721));
if(d::truth((_n_d_722<_n_bd_717))){d::check_cancel();(void)(((_n_bd_717=_n_d_722),(_n_best_716=_n_i_718)));
}
}}
return ([&](){auto&& _n_array_1032=this->_n_lut_661;auto _n_index_1033=_n_k_715;auto _n_value_1034=_n_best_716;d::put(_n_array_1032,_n_index_1033,_n_value_1034);return _n_value_1034;})();

}
}

void _n_set_665(double _a0,double _a1,double _a2,double _a3){double _n_x_723=_a0;
double _n_r_724=_a1;
double _n_m_725=_a2;
double _n_s_726=_a3;
{
if((((d::truth((_n_x_723<0.0))||d::truth((_n_x_723>=_n_W_623)))||d::truth((_n_r_724<0.0)))||d::truth((_n_r_724>=_n_H_624)))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_1035=this->_n_mat_663;auto _n_index_1036=((_n_r_724*_n_W_623)+_n_x_723);auto _n_value_1037=_n_m_725;d::put(_n_array_1035,_n_index_1036,_n_value_1037);return _n_value_1037;})());
(void)(([&](){auto&& _n_array_1038=this->_n_shade_664;auto _n_index_1039=((_n_r_724*_n_W_623)+_n_x_723);auto _n_value_1040=_n_s_726;d::put(_n_array_1038,_n_index_1039,_n_value_1040);return _n_value_1040;})());

}
}

void _n_line_666(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_x0_746=_a0;
double _n_y0_747=_a1;
double _n_x1_748=_a2;
double _n_y1_749=_a3;
double _n_s_750=_a4;
{
double _n_n_751=(std::ceil(std::fabs((_n_x1_748-_n_x0_746)))*2.0);
{double _n_i_752=0.0;
for(;d::truth((_n_i_752<=_n_n_751));(void)((_n_i_752++))){d::check_cancel();double _n_x_753=d::round(_n_mix_648(_n_x0_746,_n_x1_748,(_n_i_752/_n_n_751)));
double _n_y_754=d::round(_n_mix_648(_n_y0_747,_n_y1_749,(_n_i_752/_n_n_751)));
(void)(this->_n_set_665(_n_x_753,_n_y_754,_n_WALL_639,_n_s_750));
(void)(this->_n_set_665(_n_x_753,(_n_y_754+1.0),_n_WALL_639,(_n_s_750*0.8)));
if(d::truth((d::mod(_n_x_753,2.0)==0.0))){d::check_cancel();(void)(this->_n_set_665(_n_x_753,(_n_y_754-1.0),_n_WALL_639,(_n_s_750*0.9)));
}
}}

}
}

explicit Native_amer_fort(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_658=d::map(_n_meta_621->_p_palette,_n_hex_649);
this->_n_N_659=(_n_W_623*_n_H_624);
this->_n_out_660=d::Array<d::String,false>(size_t(this->_n_N_659));
this->_n_lut_661=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_663=d::Array<uint8_t,true>(size_t(this->_n_N_659));
this->_n_shade_664=d::Array<float,true>(size_t(this->_n_N_659));
{double _n_r_727=0.0;
for(;d::truth((_n_r_727<_n_WATER_625));(void)((_n_r_727++))){d::check_cancel();{double _n_x_728=0.0;
for(;d::truth((_n_x_728<_n_W_623));(void)((_n_x_728++))){d::check_cancel();double _n_y_729=(_n_r_727+0.5);
if(d::truth((_n_y_729>=_n_nearTop_652(_n_x_728)))){d::check_cancel();(void)(([&](){auto _n_argument_915=_n_x_728;auto _n_argument_916=_n_r_727;auto _n_argument_917=_n_HILL_635;auto _n_argument_918=_n_fbm_645((_n_x_728*0.3),(_n_y_729*0.3),3.0);return this->_n_set_665(_n_argument_915,_n_argument_916,_n_argument_917,_n_argument_918);})());
}else {d::check_cancel();if(d::truth((_n_y_729>=_n_farTop_651(_n_x_728)))){d::check_cancel();(void)(([&](){auto _n_argument_919=_n_x_728;auto _n_argument_920=_n_r_727;auto _n_argument_921=_n_FAR_634;auto _n_argument_922=_n_fbm_645((_n_x_728*0.25),(_n_y_729*0.25),2.0);return this->_n_set_665(_n_argument_919,_n_argument_920,_n_argument_921,_n_argument_922);})());
}
}
}}
}}
{double _n_x_730=0.0;
for(;d::truth((_n_x_730<_n_W_623));(void)((_n_x_730++))){d::check_cancel();if((d::truth((_n_x_730>60.0))&&d::truth((_n_x_730<152.0)))){d::check_cancel();continue;
}
double _n_top_731=_n_sky_653((_n_x_730+0.5));
double _n_r0_732=std::floor(_n_top_731);
double _n_far_733=(d::truth((_n_x_730<60.0))?_n_smooth_647(60.0,20.0,_n_x_730):_n_smooth_647(152.0,190.0,_n_x_730));
(void)(this->_n_set_665(_n_x_730,_n_r0_732,_n_WALL_639,(0.75-(0.3*_n_far_733))));
(void)(this->_n_set_665(_n_x_730,(_n_r0_732-1.0),_n_WALL_639,(0.85-(0.3*_n_far_733))));
if(d::truth((d::mod(_n_x_730,2.0)==0.0))){d::check_cancel();(void)(this->_n_set_665(_n_x_730,(_n_r0_732-2.0),_n_WALL_639,(0.7-(0.3*_n_far_733))));
}
}}
for(auto &&_n_item_923:_n_TOWERS_657){d::check_cancel();auto _n_binding_924=_n_item_923;
double _n_tx_734=d::at(_n_binding_924,0.0);
double _n_s_735=d::at(_n_binding_924,1.0);
{
double _n_base_736=std::floor(_n_sky_653((_n_tx_734+0.5)));
double _n_hw_737=d::round(_n_s_735);
double _n_ht_738=d::round((2.0+(_n_s_735*2.0)));
{double _n_r_739=(_n_base_736-_n_ht_738);
for(;d::truth((_n_r_739<=_n_base_736));(void)((_n_r_739++))){d::check_cancel();{double _n_x_740=(_n_tx_734-_n_hw_737);
for(;d::truth((_n_x_740<=(_n_tx_734+_n_hw_737)));(void)((_n_x_740++))){d::check_cancel();(void)(this->_n_set_665(_n_x_740,_n_r_739,_n_WALL_639,(0.75+(0.25*(((_n_x_740-_n_tx_734)+_n_hw_737)/((2.0*_n_hw_737)+1.0))))));
}}
}}
{double _n_x_741=((_n_tx_734-_n_hw_737)+1.0);
for(;d::truth((_n_x_741<=((_n_tx_734+_n_hw_737)-1.0)));(void)((_n_x_741++))){d::check_cancel();(void)(this->_n_set_665(_n_x_741,((_n_base_736-_n_ht_738)-1.0),_n_DOME_638,0.8));
}}
(void)(this->_n_set_665(_n_tx_734,(((_n_base_736-_n_ht_738)-1.0)-(d::truth((_n_s_735>2.0))?1.0:0.0)),_n_DOME_638,0.9));
(void)(([&](){auto _n_argument_925=_n_tx_734;auto _n_argument_926=(_n_base_736-d::round((_n_ht_738/2.0)));auto _n_argument_927=_n_LAMP_640;auto _n_argument_928=0.8;return this->_n_set_665(_n_argument_925,_n_argument_926,_n_argument_927,_n_argument_928);})());

}
}
{
double _n_base_742=std::floor(_n_sky_653(24.5));
{double _n_r_743=(_n_base_742-4.0);
for(;d::truth((_n_r_743<=_n_base_742));(void)((_n_r_743++))){d::check_cancel();{double _n_x_744=16.0;
for(;d::truth((_n_x_744<=32.0));(void)((_n_x_744++))){d::check_cancel();if(d::truth((_n_r_743>=(std::floor(_n_sky_653((_n_x_744+0.5)))-4.0)))){d::check_cancel();(void)(([&](){auto _n_argument_929=_n_x_744;auto _n_argument_930=_n_r_743;auto _n_argument_931=_n_WALL_639;auto _n_argument_932=(0.6+(0.2*_n_hash_643(_n_x_744,_n_r_743)));return this->_n_set_665(_n_argument_929,_n_argument_930,_n_argument_931,_n_argument_932);})());
}
}}
}}
{double _n_x_745=17.0;
for(;d::truth((_n_x_745<=31.0));(void)((_n_x_745=(_n_x_745+3.0)))){d::check_cancel();(void)(this->_n_set_665(_n_x_745,(_n_base_742-2.0),_n_LAMP_640,0.6));
}}

}
(void)(([&](){auto _n_argument_933=70.0;auto _n_argument_934=33.0;auto _n_argument_935=47.0;auto _n_argument_936=(_n_sky_653(47.5)-1.0);auto _n_argument_937=0.8;return this->_n_line_666(_n_argument_933,_n_argument_934,_n_argument_935,_n_argument_936,_n_argument_937);})());
(void)(([&](){auto _n_argument_938=162.0;auto _n_argument_939=41.0;auto _n_argument_940=158.0;auto _n_argument_941=(_n_sky_653(158.5)-1.0);auto _n_argument_942=0.75;return this->_n_line_666(_n_argument_938,_n_argument_939,_n_argument_940,_n_argument_941,_n_argument_942);})());
(void)(this->_n_line_666(38.0,55.0,60.0,50.0,0.9));
(void)(this->_n_line_666(150.0,52.0,168.0,55.0,0.8));
(void)(d::forEach(_n_BLOCKS_654,[&]( std::shared_ptr<std::tuple<double,double,double,double,d::Array<double,false>,double>> _a0,double _a1) mutable ->void{auto _n_binding_943=_a0;
double _n_x0_755=std::get<0>(*_n_binding_943);
double _n_x1_756=std::get<1>(*_n_binding_943);
double _n_top_757=std::get<2>(*_n_binding_943);
double _n_bot_758=std::get<3>(*_n_binding_943);
d::Array<double,false> _n_rows_759=std::get<4>(*_n_binding_943);
double _n_gap_760=std::get<5>(*_n_binding_943);
double _n_bi_761=_a1;
{
double _n_tone_762=d::at(d::Array<double,false>{0.45,0.3,0.58,0.62,0.4,0.5},_n_bi_761);
{double _n_r_763=_n_top_757;
for(;d::truth((_n_r_763<_n_bot_758));(void)((_n_r_763++))){d::check_cancel();{double _n_x_764=_n_x0_755;
for(;d::truth((_n_x_764<_n_x1_756));(void)((_n_x_764++))){d::check_cancel();double _n_rel_765=((_n_r_763-_n_top_757)/(_n_bot_758-_n_top_757));
double _n_s_766=((_n_tone_762+(0.3*_n_rel_765))+(0.06*(_n_fbm_645((_n_x_764*0.4),(_n_r_763*0.4),2.0)-0.5)));
if(d::truth((_n_r_763==_n_top_757))){d::check_cancel();(void)((_n_s_766=1.05));
}else {d::check_cancel();if(d::truth((_n_r_763==(_n_top_757+1.0)))){d::check_cancel();(void)((_n_s_766=(_n_s_766*0.7)));
}
}
if(d::truth((d::mod((_n_x_764-_n_x0_755),_n_gap_760)==0.0))){d::check_cancel();(void)((_n_s_766=(_n_s_766+0.08)));
}
if(d::truth((_n_x_764==_n_x0_755))){d::check_cancel();(void)((_n_s_766=(_n_s_766*0.75)));
}
(void)(this->_n_set_665(_n_x_764,_n_r_763,_n_STONE_636,_n_s_766));
}}
}}
{double _n_x_767=_n_x0_755;
for(;d::truth((_n_x_767<_n_x1_756));(void)((_n_x_767=(_n_x_767+2.0)))){d::check_cancel();(void)(this->_n_set_665(_n_x_767,(_n_top_757-1.0),_n_STONE_636,0.95));
}}
for(auto &&_n_item_944:_n_rows_759){d::check_cancel();double _n_wr_768=_n_item_944;
{
{double _n_x_769=(_n_x0_755+2.0);
for(;d::truth(((_n_x_769+2.0)<_n_x1_756));(void)((_n_x_769=(_n_x_769+_n_gap_760)))){d::check_cancel();bool _n_lit_770=(_n_hash_643(_n_x_769,_n_wr_768)>0.86);
(void)(this->_n_set_665(_n_x_769,_n_wr_768,_n_WINDOW_637,(d::truth(_n_lit_770)?0.9:0.25)));
(void)(this->_n_set_665((_n_x_769+1.0),_n_wr_768,_n_WINDOW_637,(d::truth(_n_lit_770)?0.9:0.25)));
(void)(this->_n_set_665(_n_x_769,(_n_wr_768+1.0),_n_WINDOW_637,(d::truth(_n_lit_770)?1.0:0.15)));
(void)(this->_n_set_665((_n_x_769+1.0),(_n_wr_768+1.0),_n_WINDOW_637,(d::truth(_n_lit_770)?1.0:0.15)));
(void)(this->_n_set_665(_n_x_769,(_n_wr_768-1.0),_n_STONE_636,1.05));
(void)(this->_n_set_665((_n_x_769+1.0),(_n_wr_768-1.0),_n_STONE_636,1.05));
(void)(this->_n_set_665(_n_x_769,(_n_wr_768+2.0),_n_STONE_636,1.1));
(void)(this->_n_set_665((_n_x_769+1.0),(_n_wr_768+2.0),_n_STONE_636,1.1));
}}

}
}

}
}));
for(auto &&_n_item_945:_n_BASTIONS_655){d::check_cancel();auto _n_binding_946=_n_item_945;
double _n_cx_771=d::at(_n_binding_946,0.0);
double _n_hw_772=d::at(_n_binding_946,1.0);
double _n_top_773=d::at(_n_binding_946,2.0);
{
{double _n_r_774=_n_top_773;
for(;d::truth((_n_r_774<_n_WATER_625));(void)((_n_r_774++))){d::check_cancel();{double _n_x_775=std::floor((_n_cx_771-_n_hw_772));
for(;d::truth((_n_x_775<=std::ceil((_n_cx_771+_n_hw_772))));(void)((_n_x_775++))){d::check_cancel();double _n_d_776=(((_n_x_775+0.5)-_n_cx_771)/_n_hw_772);
if(d::truth((std::fabs(_n_d_776)>1.0))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_947=_n_x_775;auto _n_argument_948=_n_r_774;auto _n_argument_949=_n_STONE_636;auto _n_argument_950=((0.7+(0.35*std::sqrt((1.0-(_n_d_776*_n_d_776)))))-(0.15*_n_d_776));return this->_n_set_665(_n_argument_947,_n_argument_948,_n_argument_949,_n_argument_950);})());
}}
}}

}
}
for(auto &&_n_item_951:_n_CHHATRIS_656){d::check_cancel();auto _n_binding_952=_n_item_951;
double _n_cx_777=d::at(_n_binding_952,0.0);
double _n_base_778=d::at(_n_binding_952,1.0);
double _n_rad_779=d::at(_n_binding_952,2.0);
{
double _n_pw_780=d::round((_n_rad_779+0.4));
double _n_ph_781=(d::truth((_n_rad_779>3.0))?1.0:2.0);
{double _n_r_782=(_n_base_778-_n_ph_781);
for(;d::truth((_n_r_782<_n_base_778));(void)((_n_r_782++))){d::check_cancel();{double _n_x_783=(_n_cx_777-_n_pw_780);
for(;d::truth((_n_x_783<=(_n_cx_777+_n_pw_780)));(void)((_n_x_783++))){d::check_cancel();if((d::truth((_n_rad_779<3.0))&&d::truth((d::mod(((_n_x_783-_n_cx_777)+_n_pw_780),2.0)==1.0)))){d::check_cancel();(void)(this->_n_set_665(_n_x_783,_n_r_782,_n_WINDOW_637,0.3));
}else {d::check_cancel();(void)(this->_n_set_665(_n_x_783,_n_r_782,_n_STONE_636,0.95));
}
}}
}}
{double _n_x_784=((_n_cx_777-_n_pw_780)-1.0);
for(;d::truth((_n_x_784<=((_n_cx_777+_n_pw_780)+1.0)));(void)((_n_x_784++))){d::check_cancel();(void)(this->_n_set_665(_n_x_784,((_n_base_778-_n_ph_781)-1.0),_n_STONE_636,1.1));
}}
double _n_dy0_785=((_n_base_778-_n_ph_781)-1.5);
{double _n_r_786=std::floor((_n_dy0_785-(_n_rad_779*1.1)));
for(;d::truth((_n_r_786<=std::floor(_n_dy0_785)));(void)((_n_r_786++))){d::check_cancel();{double _n_x_787=std::floor((_n_cx_777-_n_rad_779));
for(;d::truth((_n_x_787<=std::ceil((_n_cx_777+_n_rad_779))));(void)((_n_x_787++))){d::check_cancel();double _n_dx_788=((_n_x_787-_n_cx_777)/_n_rad_779);
double _n_dy_789=((_n_dy0_785-(_n_r_786+0.5))/(_n_rad_779*1.05));
if((d::truth((((_n_dx_788*_n_dx_788)+(_n_dy_789*_n_dy_789))<=1.0))&&d::truth((_n_dy_789>=0.0)))){d::check_cancel();(void)(this->_n_set_665(_n_x_787,_n_r_786,_n_DOME_638,((0.75+(0.3*(1.0-_n_dy_789)))-(0.2*_n_dx_788))));
}
}}
}}
(void)(([&](){auto _n_argument_953=_n_cx_777;auto _n_argument_954=(std::floor((_n_dy0_785-(_n_rad_779*1.1)))-1.0);auto _n_argument_955=_n_DOME_638;auto _n_argument_956=1.0;return this->_n_set_665(_n_argument_953,_n_argument_954,_n_argument_955,_n_argument_956);})());

}
}
{double _n_x_790=37.0;
for(;d::truth((_n_x_790<170.0));(void)((_n_x_790=(_n_x_790+3.0)))){d::check_cancel();(void)(this->_n_set_665(_n_x_790,(_n_WATER_625-1.0),_n_LAMP_640,1.0));
}}
{double _n_r_791=_n_ISLE_TOP_626;
for(;d::truth((_n_r_791<_n_ISLE_BASE_628));(void)((_n_r_791++))){d::check_cancel();double _n_k_792=((_n_r_791-_n_ISLE_TOP_626)/(_n_ISLE_RIM_627-_n_ISLE_TOP_626));
double _n_x0_793=d::round((56.0-(12.0*d::minimum({1.0,_n_k_792}))));
double _n_x1_794=d::round((98.0+(12.0*d::minimum({1.0,_n_k_792}))));
{double _n_x_795=_n_x0_793;
for(;d::truth((_n_x_795<=_n_x1_794));(void)((_n_x_795++))){d::check_cancel();if(d::truth((_n_r_791<_n_ISLE_RIM_627))){d::check_cancel();double _n_u_796=((_n_x_795-77.0)/(0.7+(0.3*_n_k_792)));
double _n_v_797=((_n_r_791-_n_ISLE_TOP_626)*2.6);
double _n_d1_798=d::mod((d::mod((_n_u_796+_n_v_797),10.0)+10.0),10.0);
double _n_d2_799=d::mod((d::mod((_n_u_796-_n_v_797),10.0)+10.0),10.0);
bool _n_path_800=([&]()->bool{auto _n_logical_957=([&]()->bool{auto _n_logical_958=([&]()->bool{auto _n_logical_959=([&]()->bool{auto _n_logical_960=([&]()->bool{auto _n_logical_961=(_n_d1_798<0.8);return d::truth(_n_logical_961)?_n_logical_961:(_n_d2_799<0.8);})();return d::truth(_n_logical_960)?_n_logical_960:(_n_r_791==_n_ISLE_TOP_626);})();return d::truth(_n_logical_959)?_n_logical_959:(_n_x_795==_n_x0_793);})();return d::truth(_n_logical_958)?_n_logical_958:(_n_x_795==_n_x1_794);})();return d::truth(_n_logical_957)?_n_logical_957:(std::fabs((_n_x_795-77.0))<0.6);})();
(void)(([&](){auto _n_argument_962=_n_x_795;auto _n_argument_963=_n_r_791;auto _n_argument_964=(d::truth(_n_path_800)?_n_WALL_639:_n_GARDEN_641);auto _n_argument_965=(d::truth(_n_path_800)?(0.8+(0.2*_n_k_792)):_n_hash_643(_n_x_795,_n_r_791));return this->_n_set_665(_n_argument_962,_n_argument_963,_n_argument_964,_n_argument_965);})());
}else {d::check_cancel();if(d::truth((_n_r_791==_n_ISLE_RIM_627))){d::check_cancel();(void)(this->_n_set_665(_n_x_795,_n_r_791,_n_STONE_636,1.1));
}else {d::check_cancel();(void)(this->_n_set_665(_n_x_795,_n_r_791,(d::truth((d::mod(_n_x_795,5.0)==2.0))?_n_WINDOW_637:_n_STONE_636),(d::truth((d::mod(_n_x_795,5.0)==2.0))?0.2:(0.75+((0.15*(_n_r_791-_n_ISLE_RIM_627))/2.0)))));
}
}
}}
if(d::truth((_n_r_791==(_n_ISLE_RIM_627-1.0)))){d::check_cancel();{double _n_x_801=_n_x0_793;
for(;d::truth((_n_x_801<=_n_x1_794));(void)((_n_x_801=(_n_x_801+4.0)))){d::check_cancel();(void)(this->_n_set_665(_n_x_801,_n_r_791,_n_LAMP_640,0.9));
}}
}
}}
this->_n_glow_667=d::Array<float,true>(size_t(this->_n_N_659));
{double _n_k_802=0.0;
for(;d::truth((_n_k_802<this->_n_N_659));(void)((_n_k_802++))){d::check_cancel();(void)(([&](){auto&& _n_array_966=this->_n_glow_667;auto _n_index_967=_n_k_802;auto _n_value_968=((d::truth((d::at(this->_n_mat_663,_n_k_802)==_n_STONE_636))||d::truth((d::at(this->_n_mat_663,_n_k_802)==_n_DOME_638)))?1.0:0.0);d::put(_n_array_966,_n_index_967,_n_value_968);return _n_value_968;})());
}}
{double _n_pass_803=0.0;
for(;d::truth((_n_pass_803<3.0));(void)((_n_pass_803++))){d::check_cancel();d::Array<float,true> _n_tmp_804=d::Array<float,true>(size_t(this->_n_N_659));
double _n_R_805=6.0;
{double _n_r_806=0.0;
for(;d::truth((_n_r_806<_n_H_624));(void)((_n_r_806++))){d::check_cancel();{double _n_x_807=0.0;
for(;d::truth((_n_x_807<_n_W_623));(void)((_n_x_807++))){d::check_cancel();double _n_s_808=0.0;
double _n_n_809=0.0;
{double _n_d_810=(-d::number(_n_R_805));
for(;d::truth((_n_d_810<=_n_R_805));(void)((_n_d_810++))){d::check_cancel();double _n_xx_811=(_n_x_807+_n_d_810);
if((d::truth((_n_xx_811>=0.0))&&d::truth((_n_xx_811<_n_W_623)))){d::check_cancel();(void)(((_n_s_808=(_n_s_808+d::at(this->_n_glow_667,((_n_r_806*_n_W_623)+_n_xx_811)))),(_n_n_809++)));
}
}}
(void)(([&](){auto&& _n_array_969=_n_tmp_804;auto _n_index_970=((_n_r_806*_n_W_623)+_n_x_807);auto _n_value_971=(_n_s_808/_n_n_809);d::put(_n_array_969,_n_index_970,_n_value_971);return _n_value_971;})());
}}
}}
{double _n_r_812=0.0;
for(;d::truth((_n_r_812<_n_H_624));(void)((_n_r_812++))){d::check_cancel();{double _n_x_813=0.0;
for(;d::truth((_n_x_813<_n_W_623));(void)((_n_x_813++))){d::check_cancel();double _n_s_814=0.0;
double _n_n_815=0.0;
{double _n_d_816=(-d::number(_n_R_805));
for(;d::truth((_n_d_816<=_n_R_805));(void)((_n_d_816++))){d::check_cancel();double _n_rr_817=(_n_r_812+_n_d_816);
if((d::truth((_n_rr_817>=0.0))&&d::truth((_n_rr_817<_n_H_624)))){d::check_cancel();(void)(((_n_s_814=(_n_s_814+d::at(_n_tmp_804,((_n_rr_817*_n_W_623)+_n_x_813)))),(_n_n_815++)));
}
}}
(void)(([&](){auto&& _n_array_972=this->_n_glow_667;auto _n_index_973=((_n_r_812*_n_W_623)+_n_x_813);auto _n_value_974=(_n_s_814/_n_n_815);d::put(_n_array_972,_n_index_973,_n_value_974);return _n_value_974;})());
}}
}}
}}
this->_n_BR_668=d::Array<float,true>(size_t(this->_n_N_659));
this->_n_BG_669=d::Array<float,true>(size_t(this->_n_N_659));
this->_n_BB_670=d::Array<float,true>(size_t(this->_n_N_659));
{double _n_r_818=0.0;
for(;d::truth((_n_r_818<_n_ISLE_BASE_628));(void)((_n_r_818++))){d::check_cancel();{double _n_x_819=0.0;
for(;d::truth((_n_x_819<_n_W_623));(void)((_n_x_819++))){d::check_cancel();double _n_k_820=((_n_r_818*_n_W_623)+_n_x_819);
double _n_y_821=(_n_r_818+0.5);
double _n_s_822=d::at(this->_n_shade_664,_n_k_820);
double _n_g_823=d::at(this->_n_glow_667,_n_k_820);
double _n_cr_824=0.0;
double _n_cg_825=0.0;
double _n_cb_826=0.0;
{auto _n_switch_975=d::at(this->_n_mat_663,_n_k_820);int _n_case_976=-1;if(_n_case_976<0&&_n_switch_975==_n_AIR_633)_n_case_976=0;if(_n_case_976<0&&_n_switch_975==_n_FAR_634)_n_case_976=1;if(_n_case_976<0&&_n_switch_975==_n_HILL_635)_n_case_976=2;if(_n_case_976<0&&_n_switch_975==_n_STONE_636)_n_case_976=3;if(_n_case_976<0&&_n_switch_975==_n_DOME_638)_n_case_976=4;if(_n_case_976<0&&_n_switch_975==_n_WINDOW_637)_n_case_976=5;if(_n_case_976<0&&_n_switch_975==_n_WALL_639)_n_case_976=6;if(_n_case_976<0&&_n_switch_975==_n_LAMP_640)_n_case_976=7;if(_n_case_976<0&&_n_switch_975==_n_GARDEN_641)_n_case_976=8;if(_n_case_976>=0&&_n_case_976<=0){{
if(d::truth((_n_r_818>=_n_WATER_625))){d::check_cancel();continue;
}
double _n_v_827=(_n_y_821/_n_WATER_625);
double _n_dmx_828=((_n_x_819+0.5)-d::at(_n_MOON_629,0.0));
double _n_dmy_829=(_n_y_821-d::at(_n_MOON_629,1.0));
double _n_dm_830=std::sqrt(((_n_dmx_828*_n_dmx_828)+(_n_dmy_829*_n_dmy_829)));
double _n_halo_831=(std::exp(((-d::number(_n_dm_830))/14.0))*0.22);
double _n_veil_832=(0.9+(0.2*_n_fbm_645((_n_x_819*0.04),(_n_y_821*0.07),3.0)));
(void)((_n_cr_824=((((0.012+((0.04*_n_v_827)*_n_v_827))*_n_veil_832)+(0.6*_n_halo_831))+((0.3*_n_g_823)*_n_g_823))));
(void)((_n_cg_825=((((0.025+((0.06*_n_v_827)*_n_v_827))*_n_veil_832)+(0.7*_n_halo_831))+((0.17*_n_g_823)*_n_g_823))));
(void)((_n_cb_826=((((0.1+((0.14*_n_v_827)*_n_v_827))*_n_veil_832)+(0.9*_n_halo_831))+((0.06*_n_g_823)*_n_g_823))));
double _n_inside_833=_n_smooth_647(5.6,5.0,_n_dm_830);
double _n_ox_834=((_n_x_819+0.5)-(d::at(_n_MOON_629,0.0)-2.2));
double _n_oy_835=(_n_y_821-(d::at(_n_MOON_629,1.0)-1.6));
double _n_cut_836=([&](){auto _n_argument_978=4.6;auto _n_argument_979=5.4;auto _n_argument_980=std::sqrt(((_n_ox_834*_n_ox_834)+(_n_oy_835*_n_oy_835)));return _n_smooth_647(_n_argument_978,_n_argument_979,_n_argument_980);})();
if(d::truth(((_n_inside_833*_n_cut_836)>0.01))){d::check_cancel();(void)(([&](){auto&& _n_array_981=this->_n_mat_663;auto _n_index_982=_n_k_820;auto _n_value_983=_n_MOONM_642;d::put(_n_array_981,_n_index_982,_n_value_983);return _n_value_983;})());
double _n_a_837=(_n_inside_833*_n_cut_836);
(void)((((_n_cr_824=_n_mix_648(_n_cr_824,1.0,_n_a_837)),(_n_cg_825=_n_mix_648(_n_cg_825,0.97,_n_a_837))),(_n_cb_826=_n_mix_648(_n_cb_826,0.86,_n_a_837))));
}
goto _n_end_977;

}
}if(_n_case_976>=0&&_n_case_976<=1){(void)((((_n_cr_824=((0.02+(0.02*_n_s_822))+(0.15*_n_g_823))),(_n_cg_825=((0.025+(0.025*_n_s_822))+(0.09*_n_g_823)))),(_n_cb_826=((0.06+(0.03*_n_s_822))+(0.03*_n_g_823)))));
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=2){(void)((((_n_cr_824=((0.03+(0.04*_n_s_822))+(0.3*_n_g_823))),(_n_cg_825=((0.03+(0.03*_n_s_822))+(0.17*_n_g_823)))),(_n_cb_826=((0.05+(0.03*_n_s_822))+(0.05*_n_g_823)))));
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=3){if(d::truth((_n_s_822<0.7))){d::check_cancel();(void)((((_n_cr_824=_n_mix_648(0.32,0.86,(_n_s_822/0.7))),(_n_cg_825=_n_mix_648(0.17,0.56,(_n_s_822/0.7)))),(_n_cb_826=_n_mix_648(0.06,0.24,(_n_s_822/0.7)))));
}else {d::check_cancel();(void)((((_n_cr_824=_n_mix_648(0.86,1.0,((_n_s_822-0.7)/0.4))),(_n_cg_825=_n_mix_648(0.56,0.86,((_n_s_822-0.7)/0.4)))),(_n_cb_826=_n_mix_648(0.24,0.55,((_n_s_822-0.7)/0.4)))));
}
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=4){(void)((((_n_cr_824=(0.75+(0.25*_n_s_822))),(_n_cg_825=(0.5+(0.38*_n_s_822)))),(_n_cb_826=(0.2+(0.32*_n_s_822)))));
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=5){if(d::truth((_n_s_822>0.8))){d::check_cancel();(void)((((_n_cr_824=1.0),(_n_cg_825=0.78)),(_n_cb_826=0.42)));
}else {d::check_cancel();(void)((((_n_cr_824=(0.2+(0.2*_n_s_822))),(_n_cg_825=(0.08+(0.08*_n_s_822)))),(_n_cb_826=0.04)));
}
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=6){(void)((((_n_cr_824=(0.78*_n_s_822)),(_n_cg_825=(0.52*_n_s_822))),(_n_cb_826=(0.24*_n_s_822))));
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=7){(void)((((_n_cr_824=1.0),(_n_cg_825=((0.9*_n_s_822)+0.05))),(_n_cb_826=(0.6*_n_s_822))));
goto _n_end_977;
}if(_n_case_976>=0&&_n_case_976<=8){(void)((((_n_cr_824=(0.13+(0.08*_n_s_822))),(_n_cg_825=(0.26+(0.14*_n_s_822)))),(_n_cb_826=(0.07+(0.04*_n_s_822)))));
goto _n_end_977;
}_n_end_977:;}(void)(((([&](){auto&& _n_array_984=this->_n_BR_668;auto _n_index_985=_n_k_820;auto _n_value_986=_n_cr_824;d::put(_n_array_984,_n_index_985,_n_value_986);return _n_value_986;})(),([&](){auto&& _n_array_987=this->_n_BG_669;auto _n_index_988=_n_k_820;auto _n_value_989=_n_cg_825;d::put(_n_array_987,_n_index_988,_n_value_989);return _n_value_989;})()),([&](){auto&& _n_array_990=this->_n_BB_670;auto _n_index_991=_n_k_820;auto _n_value_992=_n_cb_826;d::put(_n_array_990,_n_index_991,_n_value_992);return _n_value_992;})()));
}}
}}
this->_n_BIRDS_671=d::Array<d::Array<double,false>,false>{d::Array<double,false>{20.0,18.0,6.0,9.0},d::Array<double,false>{70.0,12.0,4.5,7.0},d::Array<double,false>{120.0,20.0,5.5,8.0},d::Array<double,false>{160.0,9.0,3.8,6.0},d::Array<double,false>{40.0,8.0,5.0,10.0}};
_render=[=]( double _a0,std::shared_ptr<_n_Record_897> _a1) mutable ->d::String{double _n_t_838=_a0;
auto _n_binding_995=(d::present(_a1)?_a1:([&](){auto _n_object_994=std::make_shared<_n_Record_897>();return _n_object_994;})());
std::optional<d::Array<uint8_t,true>> _n_color_839=_n_binding_995->_p_color;
{
d::Map<double,double> _n_birdAt_840=d::Map<double,double>();
for(auto &&_n_item_996:this->_n_BIRDS_671){d::check_cancel();auto _n_binding_997=_n_item_996;
double _n_bx0_841=d::at(_n_binding_997,0.0);
double _n_by0_842=d::at(_n_binding_997,1.0);
double _n_sp_843=d::at(_n_binding_997,2.0);
double _n_fl_844=d::at(_n_binding_997,3.0);
{
double _n_span_845=(_n_W_623+30.0);
double _n_bx_846=(d::round(d::mod((d::mod((_n_bx0_841+(_n_sp_843*_n_t_838)),_n_span_845)+_n_span_845),_n_span_845))-15.0);
double _n_by_847=d::round((_n_by0_842+(2.0*std::sin(((_n_t_838*0.7)+_n_bx0_841)))));
double _n_up_848=(d::truth((std::sin(((_n_t_838*_n_fl_844)+_n_bx0_841))>0.0))?1.0:0.0);
d::Array<d::Array<double,false>,false> _n_cells_849=d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0},d::Array<double,false>{(-d::number(1.0)),(-d::number(_n_up_848))},d::Array<double,false>{1.0,(-d::number(_n_up_848))},d::Array<double,false>{(-d::number(2.0)),(_n_up_848-1.0)},d::Array<double,false>{2.0,(_n_up_848-1.0)}};
for(auto &&_n_item_998:_n_cells_849){d::check_cancel();auto _n_binding_999=_n_item_998;
double _n_dx_850=d::at(_n_binding_999,0.0);
double _n_dy_851=d::at(_n_binding_999,1.0);
{
double _n_x_852=(_n_bx_846+_n_dx_850);
double _n_r_853=(_n_by_847+_n_dy_851);
if((((d::truth((_n_x_852>=0.0))&&d::truth((_n_x_852<_n_W_623)))&&d::truth((_n_r_853>=0.0)))&&d::truth((_n_r_853<_n_WATER_625)))){d::check_cancel();(void)(_n_birdAt_840.set(((_n_r_853*_n_W_623)+_n_x_852),(d::truth((_n_dx_850==0.0))?1.0:0.8)));
}

}
}

}
}
{double _n_r_854=0.0;
for(;d::truth((_n_r_854<_n_H_624));(void)((_n_r_854++))){d::check_cancel();{double _n_x_855=0.0;
for(;d::truth((_n_x_855<_n_W_623));(void)((_n_x_855++))){d::check_cancel();double _n_k_856=((_n_r_854*_n_W_623)+_n_x_855);
double _n_y_857=(_n_r_854+0.5);
double _n_cr_858=d::at(this->_n_BR_668,_n_k_856);
double _n_cg_859=d::at(this->_n_BG_669,_n_k_856);
double _n_cb_860=d::at(this->_n_BB_670,_n_k_856);
double _n_floor_861=0.2;
double _n_fade_862=1.0;
double _n_m_863=d::at(this->_n_mat_663,_n_k_856);
if((d::truth((_n_r_854<_n_WATER_625))||d::truth(([&]()->bool{auto _n_logical_1000=(_n_r_854<_n_ISLE_BASE_628);return d::truth(_n_logical_1000)?(_n_m_863!=_n_AIR_633):_n_logical_1000;})()))){d::check_cancel();if(d::truth((_n_m_863==_n_AIR_633))){d::check_cancel();(void)((_n_floor_861=0.04));
double _n_dmx_864=((_n_x_855+0.5)-d::at(_n_MOON_629,0.0));
double _n_dmy_865=(_n_y_857-d::at(_n_MOON_629,1.0));
if(((d::truth((_n_y_857<46.0))&&d::truth((((_n_dmx_864*_n_dmx_864)+(_n_dmy_865*_n_dmy_865))>64.0)))&&d::truth((_n_hash_643(_n_x_855,((_n_r_854*3.0)+7.0))>0.984)))){d::check_cancel();double _n_tw_866=(0.55+(0.45*std::sin(([&](){auto _n_left_1001=(_n_t_838*(1.3+(_n_hash_643(_n_x_855,_n_r_854)*3.0)));auto _n_right_1002=(_n_hash_643(_n_r_854,_n_x_855)*6.28);return (_n_left_1001+_n_right_1002);})())));
double _n_s_867=((0.45+(0.55*_n_tw_866))*_n_smooth_647(46.0,14.0,_n_y_857));
(void)((((_n_cr_858=d::maximum({_n_cr_858,(_n_s_867*0.9)})),(_n_cg_859=d::maximum({_n_cg_859,(_n_s_867*0.93)}))),(_n_cb_860=d::maximum({_n_cb_860,_n_s_867}))));
}
}else {d::check_cancel();if((d::truth((_n_m_863==_n_FAR_634))||d::truth((_n_m_863==_n_HILL_635)))){d::check_cancel();(void)((_n_floor_861=0.0));
}else {d::check_cancel();if(d::truth((_n_m_863==_n_GARDEN_641))){d::check_cancel();(void)((_n_floor_861=0.1));
}else {d::check_cancel();if(d::truth((_n_m_863==_n_LAMP_640))){d::check_cancel();double _n_f_868=(0.85+(0.15*std::sin(((_n_t_838*4.0)+(_n_x_855*1.7)))));
(void)((((_n_cr_858=(_n_cr_858*_n_f_868)),(_n_cg_859=(_n_cg_859*_n_f_868))),(_n_cb_860=(_n_cb_860*_n_f_868))));
}else {d::check_cancel();if((d::truth((_n_m_863==_n_WINDOW_637))&&d::truth((d::at(this->_n_BR_668,_n_k_856)>0.9)))){d::check_cancel();double _n_f_869=(0.9+(0.1*std::sin((((_n_t_838*2.5)+(_n_x_855*0.9))+_n_r_854))));
(void)((((_n_cr_858=(_n_cr_858*_n_f_869)),(_n_cg_859=(_n_cg_859*_n_f_869))),(_n_cb_860=(_n_cb_860*_n_f_869))));
}
}
}
}
}
std::optional<double> _n_b_870=_n_birdAt_840.get(_n_k_856);
if(d::truth((d::present(_n_b_870)))){d::check_cancel();(void)((((_n_cr_858=(0.55*d::read(_n_b_870))),(_n_cg_859=(0.4*d::read(_n_b_870)))),(_n_cb_860=(0.3*d::read(_n_b_870)))));
}
}else {d::check_cancel();bool _n_below_871=(_n_r_854>=_n_ISLE_BASE_628);
double _n_d_872=(_n_y_857-_n_WATER_625);
double _n_v_873=(_n_d_872/(_n_H_624-_n_WATER_625));
double _n_wob_874=([&](){auto _n_left_1003=((0.5+(0.06*_n_d_872))*std::sin((((_n_y_857*1.25)-(_n_t_838*2.1))+(1.7*_n_noise_644((_n_x_855*0.05),(_n_y_857*0.3))))));auto _n_right_1004=((0.6*(_n_noise_644(((_n_x_855*0.03)+(_n_t_838*0.1)),((_n_y_857*0.5)-(_n_t_838*0.3)))-0.5))*(1.0+(0.05*_n_d_872)));return (_n_left_1003+_n_right_1004);})();
bool _n_onIsle_875=([&]()->bool{auto _n_logical_1005=([&]()->bool{auto _n_logical_1006=_n_below_871;return d::truth(_n_logical_1006)?(_n_r_854<(_n_ISLE_BASE_628+5.0)):_n_logical_1006;})();return d::truth(_n_logical_1005)?(d::at(this->_n_mat_663,(((((2.0*_n_ISLE_BASE_628)-1.0)-_n_r_854)*_n_W_623)+_n_x_855))!=_n_AIR_633):_n_logical_1005;})();
double _n_my_876=(d::truth(_n_onIsle_875)?(((2.0*_n_ISLE_BASE_628)-1.0)-_n_r_854):d::maximum({0.0,(((2.0*_n_WATER_625)-1.0)-_n_r_854)}));
double _n_sx_877=([&](){auto _n_argument_1007=0.0;auto _n_argument_1008=d::minimum({(_n_W_623-1.001),(_n_x_855+_n_wob_874)});return d::maximum({_n_argument_1007,_n_argument_1008});})();
double _n_ix_878=std::floor(_n_sx_877);
double _n_fx_879=(_n_sx_877-_n_ix_878);
double _n_i0_880=((_n_my_876*_n_W_623)+_n_ix_878);
double _n_rr_881=(d::at(this->_n_BR_668,_n_i0_880)+((d::at(this->_n_BR_668,(_n_i0_880+1.0))-d::at(this->_n_BR_668,_n_i0_880))*_n_fx_879));
double _n_rg_882=(d::at(this->_n_BG_669,_n_i0_880)+((d::at(this->_n_BG_669,(_n_i0_880+1.0))-d::at(this->_n_BG_669,_n_i0_880))*_n_fx_879));
double _n_rb_883=(d::at(this->_n_BB_670,_n_i0_880)+((d::at(this->_n_BB_670,(_n_i0_880+1.0))-d::at(this->_n_BB_670,_n_i0_880))*_n_fx_879));
double _n_streak_884=(0.15+(0.85*([&](){auto _n_argument_1009=0.3;auto _n_argument_1010=0.7;auto _n_argument_1011=_n_noise_644(((_n_x_855*0.045)+(_n_t_838*0.05)),((_n_y_857*0.8)-(_n_t_838*0.6)));return _n_smooth_647(_n_argument_1009,_n_argument_1010,_n_argument_1011);})()));
double _n_hug_885=((((d::truth((!d::truth(_n_onIsle_875)))&&d::truth((_n_r_854<_n_ISLE_TOP_626)))&&d::truth((_n_x_855>=54.0)))&&d::truth((_n_x_855<=100.0)))?0.25:1.0);
double _n_keep_886=(((d::truth(_n_onIsle_875)?0.45:(0.55-(0.2*_n_v_873)))*_n_streak_884)*_n_hug_885);
double _n_under_887=(1.0-d::minimum({1.0,((_n_rr_881*_n_keep_886)*4.0)}));
(void)((_n_cr_858=((0.01*_n_under_887)+(_n_rr_881*_n_keep_886))));
(void)((_n_cg_859=((0.02*_n_under_887)+(_n_rg_882*_n_keep_886))));
(void)((_n_cb_860=(((0.06-(0.02*_n_v_873))*_n_under_887)+(_n_rb_883*_n_keep_886))));
double _n_road_888=std::exp((-d::number(std::pow((((_n_x_855+0.5)-d::at(_n_MOON_629,0.0))/(2.0+(_n_d_872*0.25))),2.0))));
double _n_glint_889=((([&](){auto _n_argument_1012=0.72;auto _n_argument_1013=0.9;auto _n_argument_1014=_n_noise_644(((_n_x_855*0.25)-(_n_t_838*0.2)),((_n_y_857*1.1)+(_n_t_838*0.5)));return _n_smooth_647(_n_argument_1012,_n_argument_1013,_n_argument_1014);})()*_n_road_888)*0.6);
(void)((((_n_cr_858=(_n_cr_858+(_n_glint_889*0.9))),(_n_cg_859=(_n_cg_859+(_n_glint_889*0.92)))),(_n_cb_860=(_n_cb_860+_n_glint_889))));
(void)((_n_floor_861=0.07));
(void)((_n_fade_862=_n_smooth_647(_n_H_624,(_n_H_624-18.0),_n_y_857)));
}
double _n_peak_890=d::maximum({_n_cr_858,_n_cg_859,_n_cb_860,0.0001});
double _n_level_891=(_n_clamp_646((_n_floor_861+(((1.0-_n_floor_861)*std::pow(_n_peak_890,0.85))*0.95)))*_n_fade_862);
double _n_step_892=([&](){auto _n_argument_1015=0.0;auto _n_argument_1016=([&](){auto _n_argument_1017=3.0;auto _n_argument_1018=d::round(((_n_level_891*3.0)+d::at(_n_BAYER_632,((double(d::i32(_n_r_854)&d::i32(3.0))*4.0)+double(d::i32(_n_x_855)&d::i32(3.0))))));return d::minimum({_n_argument_1017,_n_argument_1018});})();return d::maximum({_n_argument_1015,_n_argument_1016});})();
(void)(([&](){auto&& _n_array_1019=this->_n_out_660;auto _n_index_1020=_n_k_856;auto _n_value_1021=d::at(_n_DOTS_630,_n_step_892);d::put(_n_array_1019,_n_index_1020,_n_value_1021);return _n_value_1021;})());
if(d::truth(_n_color_839)){d::check_cancel();double _n_want_893=(d::truth(_n_step_892)?d::minimum({1.0,((_n_level_891+0.06)/d::at(_n_COVER_631,_n_step_892))}):0.0);
double _n_s_894=((0.3+(0.7*_n_want_893))/_n_peak_890);
(void)(([&](){auto&& _n_array_1022=d::read(_n_color_839);auto _n_index_1023=_n_k_856;auto _n_value_1024=([&](){auto _n_argument_1025=_n_clamp_646((_n_cr_858*_n_s_894));auto _n_argument_1026=_n_clamp_646((_n_cg_859*_n_s_894));auto _n_argument_1027=_n_clamp_646((_n_cb_860*_n_s_894));return this->_n_nearest_662(_n_argument_1025,_n_argument_1026,_n_argument_1027);})();d::put(_n_array_1022,_n_index_1023,_n_value_1024);return _n_value_1024;})());
}
}}
}}
d::Array<d::String,false> _n_lines_895=d::Array<d::String,false>{};
{double _n_r_896=0.0;
for(;d::truth((_n_r_896<_n_H_624));(void)((_n_r_896++))){d::check_cancel();(void)(_n_lines_895.push(d::join(this->_n_out_660.slice((_n_r_896*_n_W_623),((_n_r_896+1.0)*_n_W_623)),d::String(u""))));
}}
return d::join(_n_lines_895,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("amer-fort").cols)*ascii::catalog_meta("amer-fort").rows);auto _env=std::make_shared<_n_Record_897>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &amer_fort_meta(){return catalog_meta("amer-fort");}
std::unique_ptr<Piece> make_amer_fort(const AsciiPieceOptions &o){return std::make_unique<Native_amer_fort>(o);}
}
