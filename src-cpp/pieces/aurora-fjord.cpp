// Direct, statically typed C++ from src/pieces/aurora-fjord.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_1351;
struct _n_Record_1661;
struct _n_Record_1351{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_1351> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1351>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_1661{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_1661> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1661>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_1371(double _a0,double _a1);
double _n_noise_1372(double _a0,double _a1);
double _n_fbm_1373(double _a0,double _a1,double _a2);
double _n_clamp_1374(double _a0);
double _n_smooth_1375(double _a0,double _a1,double _a2);
double _n_mix_1376(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_1377(d::String _a0);
std::array<double,2> _n_range_1381(double _a0,d::Array<std::array<double,3>,false> _a1,double _a2,double _a3);
std::shared_ptr<_n_Record_1351> _n_meta_1350=[](){return ([&](){auto _n_object_1664=std::make_shared<_n_Record_1351>();_n_object_1664->_p_name=d::String(u"aurora fjord");_n_object_1664->_p_category=d::String(u"scenes");_n_object_1664->_p_note=d::String(u"aurora curtains rippling over a still fjord, a cabin lit on the shore");_n_object_1664->_p_cols=200.0;_n_object_1664->_p_rows=100.0;_n_object_1664->_p_cell=1.0;_n_object_1664->_p_fps=15.0;_n_object_1664->_p_ground=d::String(u"#05080f");_n_object_1664->_p_palette=d::Array<d::String,false>{d::String(u"#0b1322"),d::String(u"#101b30"),d::String(u"#16243f"),d::String(u"#1e3050"),d::String(u"#2a3f63"),d::String(u"#0e3a33"),d::String(u"#11573f"),d::String(u"#167a4c"),d::String(u"#22a05c"),d::String(u"#3ccb73"),d::String(u"#7cf0a0"),d::String(u"#c8ffdc"),d::String(u"#0f5f5c"),d::String(u"#16877f"),d::String(u"#2cb5a6"),d::String(u"#7fe6d6"),d::String(u"#2a1f52"),d::String(u"#432b78"),d::String(u"#6a3c9f"),d::String(u"#9558c6"),d::String(u"#c48ae4"),d::String(u"#363a72"),d::String(u"#4f5596"),d::String(u"#1b4f63"),d::String(u"#1a2236"),d::String(u"#283350"),d::String(u"#3b4a6e"),d::String(u"#566a92"),d::String(u"#7d91b8"),d::String(u"#a9bad9"),d::String(u"#d6e0f2"),d::String(u"#9fc9cf"),d::String(u"#0f1a1c"),d::String(u"#173128"),d::String(u"#24493a"),d::String(u"#4a1517"),d::String(u"#7c2420"),d::String(u"#b23a2a"),d::String(u"#d65aa8"),d::String(u"#ffd27c"),d::String(u"#ffb04a"),d::String(u"#fff2c4"),d::String(u"#eef3ff")};return _n_object_1664;})();}();
const double _n_W_1352=[](){return 200.0;}();
const double _n_H_1353=[](){return 100.0;}();
const double _n_WL_1354=[](){return 62.0;}();
const d::String _n_DOTS_1355=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_1356=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_1357=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_1421=_a0;
return ((_n_v_1421/16.0)-0.47);});}();
const double _n_AIR_1358=[](){return 0.0;}();
const double _n_NEAR_1359=[](){return 1.0;}();
const double _n_FAR_1360=[](){return 2.0;}();
const double _n_SHORE_1361=[](){return 3.0;}();
const double _n_WALL_1362=[](){return 4.0;}();
const double _n_ROOF_1363=[](){return 5.0;}();
const double _n_PANE_1364=[](){return 6.0;}();
const double _n_TREE_1365=[](){return 7.0;}();
const double _n_DOOR_1366=[](){return 8.0;}();
d::Array<double,false> _n_CAB_1367=[](){return d::Array<double,false>{142.0,161.0};}();
d::Array<d::Array<double,false>,false> _n_PANES_1368=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{145.0,148.0},d::Array<double,false>{156.0,159.0}};}();
d::Array<double,false> _n_DOOR_X_1369=[](){return d::Array<double,false>{150.0,152.0};}();
d::Array<d::Array<double,false>,false> _n_LAMPS_1370=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{147.0,1.0},d::Array<double,false>{158.0,0.8}};}();
d::Array<std::array<double,3>,false> _n_LEFT_1378=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{25.0,38.0,1.3},std::array<double,3>{6.0,29.0,0.9},std::array<double,3>{50.0,25.0,1.0},std::array<double,3>{72.0,13.0,0.6}};}();
d::Array<std::array<double,3>,false> _n_RIGHT_1379=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{172.0,30.0,1.15},std::array<double,3>{194.0,24.0,0.85},std::array<double,3>{151.0,16.0,1.0},std::array<double,3>{212.0,22.0,0.6}};}();
d::Array<std::array<double,3>,false> _n_DISTANT_1380=[](){return d::Array<std::array<double,3>,false>{std::array<double,3>{100.0,10.0,0.5},std::array<double,3>{119.0,12.0,0.55},std::array<double,3>{86.0,7.0,0.45},std::array<double,3>{134.0,8.0,0.5}};}();
double _n_hash_1371(double _a0,double _a1){double _n_x_1422=_a0;
double _n_y_1423=_a1;
{
double _n_h_1424=([&](){auto _n_left_1665=d::imul(double(d::i32(_n_x_1422)|d::i32(0.0)),374761393.0);auto _n_right_1666=d::imul(double(d::i32(_n_y_1423)|d::i32(0.0)),668265263.0);return (_n_left_1665+_n_right_1666);})();
(void)((_n_h_1424=d::imul(double(d::i32(_n_h_1424)^d::i32(double(d::u32(_n_h_1424)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_1424)^d::i32(double(d::u32(_n_h_1424)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_1372(double _a0,double _a1){double _n_x_1425=_a0;
double _n_y_1426=_a1;
{
double _n_xi_1427=std::floor(_n_x_1425);
double _n_yi_1428=std::floor(_n_y_1426);
double _n_fx_1429=(_n_x_1425-_n_xi_1427);
double _n_fy_1430=(_n_y_1426-_n_yi_1428);
double _n_u_1431=((_n_fx_1429*_n_fx_1429)*(3.0-(2.0*_n_fx_1429)));
double _n_v_1432=((_n_fy_1430*_n_fy_1430)*(3.0-(2.0*_n_fy_1430)));
double _n_a_1433=_n_hash_1371(_n_xi_1427,_n_yi_1428);
double _n_b_1434=_n_hash_1371((_n_xi_1427+1.0),_n_yi_1428);
double _n_c_1435=_n_hash_1371(_n_xi_1427,(_n_yi_1428+1.0));
double _n_d_1436=_n_hash_1371((_n_xi_1427+1.0),(_n_yi_1428+1.0));
return (((_n_a_1433+((_n_b_1434-_n_a_1433)*_n_u_1431))+((_n_c_1435-_n_a_1433)*_n_v_1432))+(((((_n_a_1433-_n_b_1434)-_n_c_1435)+_n_d_1436)*_n_u_1431)*_n_v_1432));

}
}

double _n_fbm_1373(double _a0,double _a1,double _a2){double _n_x_1437=_a0;
double _n_y_1438=_a1;
double _n_octaves_1439=_a2;
{
double _n_s_1440=0.0;
double _n_n_1441=0.0;
double _n_amp_1442=0.5;
double _n_f_1443=1.0;
{double _n_i_1444=0.0;
for(;d::truth((_n_i_1444<_n_octaves_1439));(void)((_n_i_1444++))){d::check_cancel();(void)((_n_s_1440=(_n_s_1440+(_n_amp_1442*_n_noise_1372((_n_x_1437*_n_f_1443),(_n_y_1438*_n_f_1443))))));
(void)((_n_n_1441=(_n_n_1441+_n_amp_1442)));
(void)((_n_amp_1442=(_n_amp_1442*0.5)));
(void)((_n_f_1443=(_n_f_1443*2.0)));
}}
return (_n_s_1440/_n_n_1441);

}
}

double _n_clamp_1374(double _a0){double _n_v_1445=_a0;
return (d::truth((_n_v_1445<0.0))?0.0:(d::truth((_n_v_1445>1.0))?1.0:_n_v_1445));}

double _n_smooth_1375(double _a0,double _a1,double _a2){double _n_a_1446=_a0;
double _n_b_1447=_a1;
double _n_v_1448=_a2;
{
double _n_k_1449=_n_clamp_1374(((_n_v_1448-_n_a_1446)/(_n_b_1447-_n_a_1446)));
return ((_n_k_1449*_n_k_1449)*(3.0-(2.0*_n_k_1449)));

}
}

double _n_mix_1376(double _a0,double _a1,double _a2){double _n_a_1450=_a0;
double _n_b_1451=_a1;
double _n_k_1452=_a2;
return (_n_a_1450+((_n_b_1451-_n_a_1450)*_n_k_1452));}

d::Array<double,false> _n_hex_1377(d::String _a0){d::String _n_s_1453=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_1454=_a0;
return (([&](){auto _n_argument_1667=d::slice(_n_s_1453,_n_i_1454,(_n_i_1454+2.0));auto _n_argument_1668=16.0;return d::parseInt(_n_argument_1667,_n_argument_1668);})()/255.0);});}

std::array<double,2> _n_range_1381(double _a0,d::Array<std::array<double,3>,false> _a1,double _a2,double _a3){double _n_x_1455=_a0;
d::Array<std::array<double,3>,false> _n_peaks_1456=_a1;
double _n_seed_1457=_a2;
double _n_rough_1458=_a3;
{
double _n_m_1459=(-d::number(99.0));
double _n_px_1460=0.0;
for(auto &&_n_item_1669:_n_peaks_1456){d::check_cancel();auto _n_binding_1670=_n_item_1669;
double _n_cx_1461=d::at(_n_binding_1670,0.0);
double _n_h_1462=d::at(_n_binding_1670,1.0);
double _n_s_1463=d::at(_n_binding_1670,2.0);
{
double _n_v_1464=(_n_h_1462-(std::fabs((_n_x_1455-_n_cx_1461))*_n_s_1463));
if(d::truth((_n_v_1464>_n_m_1459))){d::check_cancel();(void)(((_n_m_1459=_n_v_1464),(_n_px_1460=_n_cx_1461)));
}

}
}
double _n_j_1465=([&](){auto _n_left_1671=(_n_rough_1458*(_n_fbm_1373((_n_x_1455*0.09),_n_seed_1457,3.0)-0.5));auto _n_right_1672=((_n_rough_1458*0.45)*(_n_noise_1372((_n_x_1455*0.45),(_n_seed_1457+5.0))-0.5));return (_n_left_1671+_n_right_1672);})();
return std::array<double,2>{(_n_m_1459+(_n_j_1465*([&](){auto _n_argument_1673=1.0;auto _n_argument_1674=(d::maximum({0.0,_n_m_1459})/6.0);return d::minimum({_n_argument_1673,_n_argument_1674});})())),_n_px_1460};

}
}

struct Native_aurora_fjord final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_P_1382{};
double _n_N_1383{};
d::Array<d::String,false> _n_out_1384{};
d::Array<uint8_t,true> _n_lut_1385{};
d::Array<uint8_t,true> _n_mat_1387{};
d::Array<float,true> _n_sr_1388{};
d::Array<float,true> _n_sg_1389{};
d::Array<float,true> _n_sb_1390{};
d::Array<float,true> _n_rec_1391{};
d::Array<float,true> _n_rim_1392{};
d::Array<float,true> _n_nearTop_1393{};
d::Array<float,true> _n_farTop_1394{};
d::Array<float,true> _n_peakX_1395{};
double _n_cabBase_1397{};
std::function<bool(double)> _n_solid_1399{};
double _n_eave_1400{};
double _n_roofTop_1401{};
double _n_CHIM_1402{};
double _n_CHIM_TOP_1403{};
d::Array<float,true> _n_lampLand_1404{};
d::Array<float,true> _n_haze_1405{};
d::Array<float,true> _n_star_1406{};
d::Array<uint8_t,true> _n_gap_1407{};
d::Array<float,true> _n_baseA_1408{};
d::Array<float,true> _n_tallA_1409{};
d::Array<float,true> _n_envA_1410{};
d::Array<float,true> _n_baseB_1411{};
d::Array<float,true> _n_envB_1412{};
double _n_RAYS_1413{};
d::Array<float,true> _n_raysA_1414{};
d::Array<float,true> _n_raysB_1415{};
d::Array<float,true> _n_R_1416{};
d::Array<float,true> _n_G_1417{};
d::Array<float,true> _n_B_1418{};
d::Array<float,true> _n_lightX_1419{};
std::function<d::String(double,std::shared_ptr<_n_Record_1661>)> _render;
double _n_nearest_1386(double _a0,double _a1,double _a2){double _n_r_1466=_a0;
double _n_g_1467=_a1;
double _n_b_1468=_a2;
{
double _n_k_1469=([&](){auto _n_left_2007=([&](){auto _n_left_2009=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_1466*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_2010=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_1467*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_2009)|d::i32(_n_right_2010));})();auto _n_right_2008=d::minimum({31.0,double(d::i32((_n_b_1468*31.99))|d::i32(0.0))});return double(d::i32(_n_left_2007)|d::i32(_n_right_2008));})();
if(d::truth((d::at(this->_n_lut_1385,_n_k_1469)!=255.0))){d::check_cancel();return d::at(this->_n_lut_1385,_n_k_1469);
}
double _n_best_1470=0.0;
double _n_bd_1471=1000000000.0;
{double _n_i_1472=0.0;
for(;d::truth((_n_i_1472<double(this->_n_P_1382.size())));(void)((_n_i_1472++))){d::check_cancel();double _n_dr_1473=(d::at(d::at(this->_n_P_1382,_n_i_1472),0.0)-_n_r_1466);
double _n_dg_1474=(d::at(d::at(this->_n_P_1382,_n_i_1472),1.0)-_n_g_1467);
double _n_db_1475=(d::at(d::at(this->_n_P_1382,_n_i_1472),2.0)-_n_b_1468);
double _n_d_1476=((((0.3*_n_dr_1473)*_n_dr_1473)+((0.5*_n_dg_1474)*_n_dg_1474))+((0.2*_n_db_1475)*_n_db_1475));
if(d::truth((_n_d_1476<_n_bd_1471))){d::check_cancel();(void)(((_n_bd_1471=_n_d_1476),(_n_best_1470=_n_i_1472)));
}
}}
return ([&](){auto&& _n_array_2011=this->_n_lut_1385;auto _n_index_2012=_n_k_1469;auto _n_value_2013=_n_best_1470;d::put(_n_array_2011,_n_index_2012,_n_value_2013);return _n_value_2013;})();

}
}

double _n_shoreTop_1396(double _a0){double _n_x_1483=_a0;
return ([&](){auto _n_left_2014=(_n_WL_1354-([&](){auto _n_left_2016=(2.2*_n_smooth_1375(134.0,140.0,_n_x_1483));auto _n_right_2017=_n_smooth_1375(178.0,168.0,_n_x_1483);return (_n_left_2016*_n_right_2017);})());auto _n_right_2015=(0.6*_n_noise_1372((_n_x_1483*0.3),2.0));return (_n_left_2014-_n_right_2015);})();}

void _n_spruce_1398(double _a0,double _a1,double _a2,double _a3,std::function<bool(double)> _a4){double _n_tx_1515=_a0;
double _n_th_1516=_a1;
double _n_tw_1517=_a2;
double _n_tb_1518=_a3;
std::function<bool(double)> _n_guard_1519=_a4;
{
{double _n_r_1521=([&](){auto _n_argument_2018=0.0;auto _n_argument_2019=std::floor((_n_tb_1518-_n_th_1516));return d::maximum({_n_argument_2018,_n_argument_2019});})();
for(;d::truth((_n_r_1521<_n_WL_1354));(void)((_n_r_1521++))){d::check_cancel();double _n_y_1522=(_n_r_1521+0.5);
double _n_dy_1523=(_n_y_1522-(_n_tb_1518-_n_th_1516));
if((d::truth((_n_dy_1523<0.0))||d::truth((_n_y_1522>=(_n_tb_1518+0.5))))){d::check_cancel();continue;
}
double _n_tier_1524=((_n_dy_1523+(_n_th_1516*0.3))/1.8);
double _n_w_1525=((((_n_dy_1523/_n_th_1516)*_n_tw_1517)*(0.7+(0.45*(_n_tier_1524-std::floor(_n_tier_1524)))))+0.35);
{double _n_x_1526=([&](){auto _n_argument_2020=0.0;auto _n_argument_2021=std::floor(((_n_tx_1515-_n_tw_1517)-1.0));return d::maximum({_n_argument_2020,_n_argument_2021});})();
for(;d::truth((_n_x_1526<=d::minimum({(_n_W_1352-1.0),((_n_tx_1515+_n_tw_1517)+1.0)})));(void)((_n_x_1526++))){d::check_cancel();double _n_k_1527=((_n_r_1521*_n_W_1352)+_n_x_1526);
double _n_ex_1528=((_n_x_1526+0.5)-_n_tx_1515);
if((d::truth((std::fabs(_n_ex_1528)>_n_w_1525))||d::truth(([&]()->std::optional<bool>{auto _n_logical_2022=_n_guard_1519;return d::truth(_n_logical_2022)?std::optional<bool>(_n_guard_1519(_n_k_1527)):([&]()->std::optional<bool>{auto _n_nullable_2023=_n_logical_2022;if(!d::present(_n_nullable_2023))return {};return bool(d::read(_n_nullable_2023));})();})()))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_2024=this->_n_mat_1387;auto _n_index_2025=_n_k_1527;auto _n_value_2026=_n_TREE_1365;d::put(_n_array_2024,_n_index_2025,_n_value_2026);return _n_value_2026;})());
double _n_h_1529=_n_hash_1371(((_n_x_1526*13.0)+_n_r_1521),5.0);
double _n_s_1530=(d::truth((_n_ex_1528<0.0))?0.7:0.3);
(void)(((([&](){auto&& _n_array_2027=this->_n_sr_1388;auto _n_index_2028=_n_k_1527;auto _n_value_2029=(0.02+((0.03*_n_s_1530)*_n_h_1529));d::put(_n_array_2027,_n_index_2028,_n_value_2029);return _n_value_2029;})(),([&](){auto&& _n_array_2030=this->_n_sg_1389;auto _n_index_2031=_n_k_1527;auto _n_value_2032=(0.04+(0.05*_n_s_1530));d::put(_n_array_2030,_n_index_2031,_n_value_2032);return _n_value_2032;})()),([&](){auto&& _n_array_2033=this->_n_sb_1390;auto _n_index_2034=_n_k_1527;auto _n_value_2035=(0.055+(0.045*_n_s_1530));d::put(_n_array_2033,_n_index_2034,_n_value_2035);return _n_value_2035;})()));
(void)(([&](){auto&& _n_array_2036=this->_n_rec_1391;auto _n_index_2037=_n_k_1527;auto _n_value_2038=0.05;d::put(_n_array_2036,_n_index_2037,_n_value_2038);return _n_value_2038;})());
(void)(([&](){auto&& _n_array_2039=this->_n_rim_1392;auto _n_index_2040=_n_k_1527;auto _n_value_2041=([&](){auto _n_argument_2042=_n_smooth_1375(1.6,0.2,_n_dy_1523);auto _n_argument_2043=((d::truth((_n_ex_1528<0.0))&&d::truth((_n_ex_1528<((-d::number(_n_w_1525))+1.0))))?(0.45*_n_smooth_1375(_n_th_1516,0.0,_n_dy_1523)):0.0);return d::maximum({_n_argument_2042,_n_argument_2043});})();d::put(_n_array_2039,_n_index_2040,_n_value_2041);return _n_value_2041;})());
}}
}}

}
}

double _n_ray_1420(d::Array<float,true> _a0,double _a1){d::Array<float,true> _n_arr_1567=_a0;
double _n_u_1568=_a1;
{
double _n_s_1569=(_n_u_1568*4.0);
double _n_i_1570=std::floor(_n_s_1569);
double _n_f_1571=(_n_s_1569-_n_i_1570);
(void)((_n_i_1570=d::mod((d::mod(_n_i_1570,this->_n_RAYS_1413)+this->_n_RAYS_1413),this->_n_RAYS_1413)));
return (d::at(_n_arr_1567,_n_i_1570)+((d::at(_n_arr_1567,(_n_i_1570+1.0))-d::at(_n_arr_1567,_n_i_1570))*_n_f_1571));

}
}

explicit Native_aurora_fjord(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_P_1382=d::map(_n_meta_1350->_p_palette,_n_hex_1377);
this->_n_N_1383=(_n_W_1352*_n_H_1353);
this->_n_out_1384=d::Array<d::String,false>(size_t(this->_n_N_1383));
this->_n_lut_1385=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mat_1387=d::Array<uint8_t,true>(size_t(this->_n_N_1383));
this->_n_sr_1388=d::Array<float,true>(size_t(this->_n_N_1383));
this->_n_sg_1389=d::Array<float,true>(size_t(this->_n_N_1383));
this->_n_sb_1390=d::Array<float,true>(size_t(this->_n_N_1383));
this->_n_rec_1391=d::Array<float,true>(size_t(this->_n_N_1383));
this->_n_rim_1392=d::Array<float,true>(size_t(this->_n_N_1383));
this->_n_nearTop_1393=d::Array<float,true>(size_t(_n_W_1352));
this->_n_farTop_1394=d::Array<float,true>(size_t(_n_W_1352));
this->_n_peakX_1395=d::Array<float,true>(size_t(_n_W_1352));
{double _n_x_1477=0.0;
for(;d::truth((_n_x_1477<_n_W_1352));(void)((_n_x_1477++))){d::check_cancel();auto _n_binding_1675=_n_range_1381((_n_x_1477+0.5),_n_LEFT_1378,3.1,4.0);
double _n_hl_1478=d::at(_n_binding_1675,0.0);
double _n_pl_1479=d::at(_n_binding_1675,1.0);
auto _n_binding_1676=_n_range_1381((_n_x_1477+0.5),_n_RIGHT_1379,7.7,4.0);
double _n_hr_1480=d::at(_n_binding_1676,0.0);
double _n_pr_1481=d::at(_n_binding_1676,1.0);
auto _n_binding_1677=_n_range_1381((_n_x_1477+0.5),_n_DISTANT_1380,11.3,2.2);
double _n_hd_1482=d::at(_n_binding_1677,0.0);
(void)(([&](){auto&& _n_array_1678=this->_n_nearTop_1393;auto _n_index_1679=_n_x_1477;auto _n_value_1680=(_n_WL_1354-d::maximum({_n_hl_1478,_n_hr_1480,0.0}));d::put(_n_array_1678,_n_index_1679,_n_value_1680);return _n_value_1680;})());
(void)(([&](){auto&& _n_array_1681=this->_n_peakX_1395;auto _n_index_1682=_n_x_1477;auto _n_value_1683=(d::truth((_n_hl_1478>_n_hr_1480))?_n_pl_1479:_n_pr_1481);d::put(_n_array_1681,_n_index_1682,_n_value_1683);return _n_value_1683;})());
(void)(([&](){auto&& _n_array_1684=this->_n_farTop_1394;auto _n_index_1685=_n_x_1477;auto _n_value_1686=(_n_WL_1354-d::maximum({_n_hd_1482,0.0}));d::put(_n_array_1684,_n_index_1685,_n_value_1686);return _n_value_1686;})());
}}
this->_n_cabBase_1397=(_n_WL_1354-2.2);
{double _n_r_1484=0.0;
for(;d::truth((_n_r_1484<_n_WL_1354));(void)((_n_r_1484++))){d::check_cancel();{double _n_x_1485=0.0;
for(;d::truth((_n_x_1485<_n_W_1352));(void)((_n_x_1485++))){d::check_cancel();double _n_k_1486=((_n_r_1484*_n_W_1352)+_n_x_1485);
double _n_y_1487=(_n_r_1484+0.5);
if(d::truth((_n_y_1487>=d::at(this->_n_nearTop_1393,_n_x_1485)))){d::check_cancel();(void)(([&](){auto&& _n_array_1687=this->_n_mat_1387;auto _n_index_1688=_n_k_1486;auto _n_value_1689=_n_NEAR_1359;d::put(_n_array_1687,_n_index_1688,_n_value_1689);return _n_value_1689;})());
double _n_px_1488=d::at(this->_n_peakX_1395,_n_x_1485);
double _n_side_1489=((_n_x_1485+0.5)-_n_px_1488);
double _n_depth_1490=(_n_y_1487-d::at(this->_n_nearTop_1393,_n_x_1485));
double _n_height_1491=(_n_WL_1354-d::at(this->_n_nearTop_1393,_n_x_1485));
double _n_ridge_1492=(_n_px_1488+(((_n_depth_1490+1.0)*0.6)*(_n_noise_1372((_n_y_1487*0.1),_n_px_1488)-0.5)));
double _n_inward_1493=(d::truth((_n_px_1488<100.0))?1.0:(-d::number(1.0)));
double _n_face_1494=_n_smooth_1375((-d::number(4.0)),4.0,(((_n_x_1485+0.5)-_n_ridge_1492)*_n_inward_1493));
double _n_u_1495=(_n_x_1485+((_n_depth_1490*0.45)*d::sign(([&]()->double{auto _n_logical_1690=_n_side_1489;return d::truth(_n_logical_1690)?_n_logical_1690:1.0;})())));
auto _n_rib_1496=[&]( double _a0) mutable ->double{double _n_v_1497=_a0;
return _n_fbm_1373((_n_v_1497*0.13),(_n_px_1488*0.37),3.0);};
double _n_grad_1498=((([&](){auto _n_left_1691=_n_rib_1496((_n_u_1495+1.0));auto _n_right_1692=_n_rib_1496((_n_u_1495-1.0));return (_n_left_1691-_n_right_1692);})()*7.0)*_n_inward_1493);
double _n_reach_1499=(3.0+(_n_height_1491*(0.62+(0.42*_n_rib_1496((_n_u_1495+40.0))))));
double _n_streak_1500=([&](){auto _n_left_1693=([&](){auto _n_argument_1695=0.56;auto _n_argument_1696=0.64;auto _n_argument_1697=_n_fbm_1373((_n_u_1495*0.32),((_n_y_1487*0.035)+_n_px_1488),3.0);return _n_smooth_1375(_n_argument_1695,_n_argument_1696,_n_argument_1697);})();auto _n_right_1694=_n_smooth_1375(1.0,5.0,_n_depth_1490);return (_n_left_1693*_n_right_1694);})();
double _n_cx_1501=((_n_x_1485+0.5)-152.0);
double _n_wood_1502=([&](){auto _n_left_1698=(((_n_WL_1354-18.5)+(9.0*std::pow((_n_cx_1501/19.0),2.0)))+(1.5*(_n_noise_1372((_n_x_1485*0.7),9.0)-0.5)));auto _n_right_1699=((2.6*_n_hash_1371(_n_x_1485,77.0))*(d::truth(double(d::i32(_n_x_1485)&d::i32(1.0)))?1.0:0.3));return (_n_left_1698-_n_right_1699);})();
double _n_snow_1503=(([&](){auto _n_left_1700=_n_smooth_1375((_n_reach_1499+1.6),(_n_reach_1499-1.6),_n_depth_1490);auto _n_right_1701=(1.0-_n_smooth_1375((_n_WL_1354-3.0),(_n_WL_1354-0.5),_n_y_1487));return (_n_left_1700*_n_right_1701);})()*(1.0-(0.5*_n_streak_1500)));
double _n_lit_1504=_n_clamp_1374(((0.35+(0.55*_n_face_1494))+(_n_grad_1498*0.5)));
double _n_rv_1505=(0.75+(0.5*_n_fbm_1373((_n_x_1485*0.4),(_n_y_1487*0.4),2.0)));
double _n_rr_1506=((0.05+(0.03*_n_lit_1504))*_n_rv_1505);
double _n_rg_1507=((0.065+(0.035*_n_lit_1504))*_n_rv_1505);
double _n_rb_1508=((0.11+(0.05*_n_lit_1504))*_n_rv_1505);
double _n_s_1509=(0.34+(0.66*std::pow(_n_lit_1504,1.5)));
(void)(([&](){auto&& _n_array_1702=this->_n_sr_1388;auto _n_index_1703=_n_k_1486;auto _n_value_1704=_n_mix_1376(_n_rr_1506,((0.62*_n_s_1509)+0.04),_n_snow_1503);d::put(_n_array_1702,_n_index_1703,_n_value_1704);return _n_value_1704;})());
(void)(([&](){auto&& _n_array_1705=this->_n_sg_1389;auto _n_index_1706=_n_k_1486;auto _n_value_1707=_n_mix_1376(_n_rg_1507,((0.7*_n_s_1509)+0.05),_n_snow_1503);d::put(_n_array_1705,_n_index_1706,_n_value_1707);return _n_value_1707;})());
(void)(([&](){auto&& _n_array_1708=this->_n_sb_1390;auto _n_index_1709=_n_k_1486;auto _n_value_1710=_n_mix_1376(_n_rb_1508,((0.86*_n_s_1509)+0.09),_n_snow_1503);d::put(_n_array_1708,_n_index_1709,_n_value_1710);return _n_value_1710;})());
(void)(([&](){auto&& _n_array_1711=this->_n_rec_1391;auto _n_index_1712=_n_k_1486;auto _n_value_1713=((_n_snow_1503*(0.25+(0.75*_n_lit_1504)))+0.06);d::put(_n_array_1711,_n_index_1712,_n_value_1713);return _n_value_1713;})());
(void)(([&](){auto&& _n_array_1714=this->_n_rim_1392;auto _n_index_1715=_n_k_1486;auto _n_value_1716=(_n_smooth_1375(2.2,0.3,_n_depth_1490)*0.5);d::put(_n_array_1714,_n_index_1715,_n_value_1716);return _n_value_1716;})());
if(((d::truth((_n_y_1487>_n_wood_1502))&&d::truth((_n_cx_1501>((-d::number(14.0))-(2.0*_n_hash_1371(_n_r_1484,3.0))))))&&d::truth((_n_cx_1501<(13.0+(2.0*_n_hash_1371(_n_r_1484,4.0))))))){d::check_cancel();(void)(([&](){auto&& _n_array_1717=this->_n_mat_1387;auto _n_index_1718=_n_k_1486;auto _n_value_1719=_n_TREE_1365;d::put(_n_array_1717,_n_index_1718,_n_value_1719);return _n_value_1719;})());
double _n_h_1510=_n_hash_1371(((_n_x_1485*13.0)+_n_r_1484),5.0);
(void)(((([&](){auto&& _n_array_1720=this->_n_sr_1388;auto _n_index_1721=_n_k_1486;auto _n_value_1722=(0.02+(0.03*_n_h_1510));d::put(_n_array_1720,_n_index_1721,_n_value_1722);return _n_value_1722;})(),([&](){auto&& _n_array_1723=this->_n_sg_1389;auto _n_index_1724=_n_k_1486;auto _n_value_1725=(0.045+(0.045*_n_h_1510));d::put(_n_array_1723,_n_index_1724,_n_value_1725);return _n_value_1725;})()),([&](){auto&& _n_array_1726=this->_n_sb_1390;auto _n_index_1727=_n_k_1486;auto _n_value_1728=(0.06+(0.04*_n_h_1510));d::put(_n_array_1726,_n_index_1727,_n_value_1728);return _n_value_1728;})()));
(void)(([&](){auto&& _n_array_1729=this->_n_rec_1391;auto _n_index_1730=_n_k_1486;auto _n_value_1731=0.05;d::put(_n_array_1729,_n_index_1730,_n_value_1731);return _n_value_1731;})());
(void)(([&](){auto&& _n_array_1732=this->_n_rim_1392;auto _n_index_1733=_n_k_1486;auto _n_value_1734=(_n_smooth_1375((_n_wood_1502+1.6),(_n_wood_1502+0.2),_n_y_1487)*(0.7+(0.3*_n_h_1510)));d::put(_n_array_1732,_n_index_1733,_n_value_1734);return _n_value_1734;})());
}
}else {d::check_cancel();if(d::truth((_n_y_1487>=d::at(this->_n_farTop_1394,_n_x_1485)))){d::check_cancel();(void)(([&](){auto&& _n_array_1735=this->_n_mat_1387;auto _n_index_1736=_n_k_1486;auto _n_value_1737=_n_FAR_1360;d::put(_n_array_1735,_n_index_1736,_n_value_1737);return _n_value_1737;})());
double _n_depth_1511=(_n_y_1487-d::at(this->_n_farTop_1394,_n_x_1485));
double _n_snow_1512=([&](){auto _n_argument_1738=0.5;auto _n_argument_1739=0.62;auto _n_argument_1740=((_n_fbm_1373((_n_x_1485*0.18),(_n_y_1487*0.25),3.0)*0.6)+((1.0-(_n_depth_1511/7.0))*0.55));return _n_smooth_1375(_n_argument_1738,_n_argument_1739,_n_argument_1740);})();
double _n_lit_1513=(0.5+(0.3*(_n_noise_1372((_n_x_1485*0.25),(_n_y_1487*0.1))-0.5)));
(void)(([&](){auto&& _n_array_1741=this->_n_sr_1388;auto _n_index_1742=_n_k_1486;auto _n_value_1743=_n_mix_1376(0.075,((0.22*_n_lit_1513)+0.12),_n_snow_1512);d::put(_n_array_1741,_n_index_1742,_n_value_1743);return _n_value_1743;})());
(void)(([&](){auto&& _n_array_1744=this->_n_sg_1389;auto _n_index_1745=_n_k_1486;auto _n_value_1746=_n_mix_1376(0.1,((0.27*_n_lit_1513)+0.15),_n_snow_1512);d::put(_n_array_1744,_n_index_1745,_n_value_1746);return _n_value_1746;})());
(void)(([&](){auto&& _n_array_1747=this->_n_sb_1390;auto _n_index_1748=_n_k_1486;auto _n_value_1749=_n_mix_1376(0.17,((0.36*_n_lit_1513)+0.24),_n_snow_1512);d::put(_n_array_1747,_n_index_1748,_n_value_1749);return _n_value_1749;})());
(void)(([&](){auto&& _n_array_1750=this->_n_rec_1391;auto _n_index_1751=_n_k_1486;auto _n_value_1752=(0.2+(0.3*_n_snow_1512));d::put(_n_array_1750,_n_index_1751,_n_value_1752);return _n_value_1752;})());
}
}
if(((d::truth((_n_x_1485>132.0))&&d::truth((_n_x_1485<180.0)))&&d::truth((_n_y_1487>=this->_n_shoreTop_1396(_n_x_1485))))){d::check_cancel();(void)(([&](){auto&& _n_array_1753=this->_n_mat_1387;auto _n_index_1754=_n_k_1486;auto _n_value_1755=_n_SHORE_1361;d::put(_n_array_1753,_n_index_1754,_n_value_1755);return _n_value_1755;})());
double _n_f_1514=(0.6+(0.3*_n_fbm_1373((_n_x_1485*0.3),(_n_y_1487*0.5),2.0)));
(void)(((([&](){auto&& _n_array_1756=this->_n_sr_1388;auto _n_index_1757=_n_k_1486;auto _n_value_1758=(0.26*_n_f_1514);d::put(_n_array_1756,_n_index_1757,_n_value_1758);return _n_value_1758;})(),([&](){auto&& _n_array_1759=this->_n_sg_1389;auto _n_index_1760=_n_k_1486;auto _n_value_1761=(0.3*_n_f_1514);d::put(_n_array_1759,_n_index_1760,_n_value_1761);return _n_value_1761;})()),([&](){auto&& _n_array_1762=this->_n_sb_1390;auto _n_index_1763=_n_k_1486;auto _n_value_1764=(0.42*_n_f_1514);d::put(_n_array_1762,_n_index_1763,_n_value_1764);return _n_value_1764;})()));
(void)(([&](){auto&& _n_array_1765=this->_n_rec_1391;auto _n_index_1766=_n_k_1486;auto _n_value_1767=0.4;d::put(_n_array_1765,_n_index_1766,_n_value_1767);return _n_value_1767;})());
(void)(([&](){auto&& _n_array_1768=this->_n_rim_1392;auto _n_index_1769=_n_k_1486;auto _n_value_1770=0.0;d::put(_n_array_1768,_n_index_1769,_n_value_1770);return _n_value_1770;})());
}
}}
}}
this->_n_solid_1399=[=]( double _a0) mutable ->bool{double _n_k_1531=_a0;
return ([&]()->bool{auto _n_logical_1771=([&]()->bool{auto _n_logical_1772=([&]()->bool{auto _n_logical_1773=([&]()->bool{auto _n_logical_1774=(d::at(this->_n_mat_1387,_n_k_1531)==_n_WALL_1362);return d::truth(_n_logical_1774)?_n_logical_1774:(d::at(this->_n_mat_1387,_n_k_1531)==_n_ROOF_1363);})();return d::truth(_n_logical_1773)?_n_logical_1773:(d::at(this->_n_mat_1387,_n_k_1531)==_n_PANE_1364);})();return d::truth(_n_logical_1772)?_n_logical_1772:(d::at(this->_n_mat_1387,_n_k_1531)==_n_DOOR_1366);})();return d::truth(_n_logical_1771)?_n_logical_1771:(d::at(this->_n_mat_1387,_n_k_1531)==_n_SHORE_1361);})();};
{double _n_x_1532=(-d::number(1.0));
for(;d::truth((_n_x_1532<(_n_W_1352+2.0)));){d::check_cancel();double _n_h_1533=([&](){auto _n_argument_1775=std::floor((_n_x_1532*7.0));auto _n_argument_1776=21.0;return _n_hash_1371(_n_argument_1775,_n_argument_1776);})();
double _n_open_1534=([&](){auto _n_left_1777=_n_smooth_1375(96.0,80.0,_n_x_1532);auto _n_right_1778=_n_smooth_1375(122.0,136.0,_n_x_1532);return (_n_left_1777+_n_right_1778);})();
bool _n_onShelf_1535=([&]()->bool{auto _n_logical_1779=(_n_x_1532>132.0);return d::truth(_n_logical_1779)?(_n_x_1532<180.0):_n_logical_1779;})();
if((d::truth((_n_open_1534>0.05))&&d::truth((!d::truth(([&]()->bool{auto _n_logical_1780=(_n_x_1532>136.0);return d::truth(_n_logical_1780)?(_n_x_1532<166.0):_n_logical_1780;})()))))){d::check_cancel();double _n_th_1536=(([&](){auto _n_left_1781=([&](){auto _n_left_1783=(3.2+(([&](){auto _n_argument_1785=std::floor((_n_x_1532*3.0));auto _n_argument_1786=5.0;return _n_hash_1371(_n_argument_1785,_n_argument_1786);})()*3.0));auto _n_right_1784=(d::truth((([&](){auto _n_argument_1787=std::floor((_n_x_1532*5.0));auto _n_argument_1788=8.0;return _n_hash_1371(_n_argument_1787,_n_argument_1788);})()>0.7))?2.4:0.0);return (_n_left_1783+_n_right_1784);})();auto _n_right_1782=d::minimum({1.0,_n_open_1534});return (_n_left_1781*_n_right_1782);})()*(d::truth(_n_onShelf_1535)?0.7:1.0));
if(d::truth((_n_th_1536>1.5))){d::check_cancel();(void)(([&](){auto _n_argument_1789=(_n_x_1532+([&](){auto _n_argument_1790=std::floor(_n_x_1532);auto _n_argument_1791=2.0;return _n_hash_1371(_n_argument_1790,_n_argument_1791);})());auto _n_argument_1792=_n_th_1536;auto _n_argument_1793=(1.0+(([&](){auto _n_argument_1794=std::floor(_n_x_1532);auto _n_argument_1795=4.0;return _n_hash_1371(_n_argument_1794,_n_argument_1795);})()*0.6));auto _n_argument_1796=(d::truth(_n_onShelf_1535)?(this->_n_shoreTop_1396(_n_x_1532)-0.4):(_n_WL_1354+0.3));auto _n_argument_1797=(d::truth(_n_onShelf_1535)?this->_n_solid_1399:std::function<bool(double)>{});return this->_n_spruce_1398(_n_argument_1789,_n_argument_1792,_n_argument_1793,_n_argument_1796,_n_argument_1797);})());
}
}
(void)((_n_x_1532=(_n_x_1532+(2.0+(2.2*_n_h_1533)))));
}}
this->_n_eave_1400=(this->_n_cabBase_1397-7.0);
this->_n_roofTop_1401=(this->_n_eave_1400-8.0);
this->_n_CHIM_1402=(d::at(_n_CAB_1367,1.0)-5.0);
this->_n_CHIM_TOP_1403=(this->_n_eave_1400-8.5);
{double _n_r_1537=0.0;
for(;d::truth((_n_r_1537<_n_WL_1354));(void)((_n_r_1537++))){d::check_cancel();{double _n_x_1538=(d::at(_n_CAB_1367,0.0)-3.0);
for(;d::truth((_n_x_1538<=(d::at(_n_CAB_1367,1.0)+3.0)));(void)((_n_x_1538++))){d::check_cancel();double _n_k_1539=((_n_r_1537*_n_W_1352)+_n_x_1538);
double _n_y_1540=(_n_r_1537+0.5);
double _n_cx_1541=(((d::at(_n_CAB_1367,0.0)+d::at(_n_CAB_1367,1.0))+1.0)/2.0);
if((((d::truth((_n_x_1538>=d::at(_n_CAB_1367,0.0)))&&d::truth((_n_x_1538<=d::at(_n_CAB_1367,1.0))))&&d::truth((_n_y_1540>=this->_n_eave_1400)))&&d::truth((_n_y_1540<(this->_n_cabBase_1397+0.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_1798=this->_n_mat_1387;auto _n_index_1799=_n_k_1539;auto _n_value_1800=_n_WALL_1362;d::put(_n_array_1798,_n_index_1799,_n_value_1800);return _n_value_1800;})());
double _n_boards_1542=(d::truth(double(d::i32(_n_r_1537)&d::i32(1.0)))?0.82:1.0);
double _n_s_1543=((0.5+(0.5*((d::at(_n_CAB_1367,1.0)-_n_x_1538)/(d::at(_n_CAB_1367,1.0)-d::at(_n_CAB_1367,0.0)))))*_n_boards_1542);
(void)(((([&](){auto&& _n_array_1801=this->_n_sr_1388;auto _n_index_1802=_n_k_1539;auto _n_value_1803=(0.7*_n_s_1543);d::put(_n_array_1801,_n_index_1802,_n_value_1803);return _n_value_1803;})(),([&](){auto&& _n_array_1804=this->_n_sg_1389;auto _n_index_1805=_n_k_1539;auto _n_value_1806=(0.14*_n_s_1543);d::put(_n_array_1804,_n_index_1805,_n_value_1806);return _n_value_1806;})()),([&](){auto&& _n_array_1807=this->_n_sb_1390;auto _n_index_1808=_n_k_1539;auto _n_value_1809=(0.11*_n_s_1543);d::put(_n_array_1807,_n_index_1808,_n_value_1809);return _n_value_1809;})()));
(void)(([&](){auto&& _n_array_1810=this->_n_rim_1392;auto _n_index_1811=_n_k_1539;auto _n_value_1812=0.0;d::put(_n_array_1810,_n_index_1811,_n_value_1812);return _n_value_1812;})());
for(auto &&_n_item_1813:_n_PANES_1368){d::check_cancel();auto _n_binding_1814=_n_item_1813;
double _n_a_1544=d::at(_n_binding_1814,0.0);
double _n_b_1545=d::at(_n_binding_1814,1.0);
if((((d::truth((_n_x_1538>=_n_a_1544))&&d::truth((_n_x_1538<=_n_b_1545)))&&d::truth((_n_y_1540>=(this->_n_eave_1400+1.5))))&&d::truth((_n_y_1540<(this->_n_cabBase_1397-2.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_1815=this->_n_mat_1387;auto _n_index_1816=_n_k_1539;auto _n_value_1817=_n_PANE_1364;d::put(_n_array_1815,_n_index_1816,_n_value_1817);return _n_value_1817;})());
}
}
if(((d::truth((_n_x_1538>=d::at(_n_DOOR_X_1369,0.0)))&&d::truth((_n_x_1538<=d::at(_n_DOOR_X_1369,1.0))))&&d::truth((_n_y_1540>=(this->_n_eave_1400+1.5))))){d::check_cancel();(void)(([&](){auto&& _n_array_1818=this->_n_mat_1387;auto _n_index_1819=_n_k_1539;auto _n_value_1820=_n_DOOR_1366;d::put(_n_array_1818,_n_index_1819,_n_value_1820);return _n_value_1820;})());
(void)(((([&](){auto&& _n_array_1821=this->_n_sr_1388;auto _n_index_1822=_n_k_1539;auto _n_value_1823=0.16;d::put(_n_array_1821,_n_index_1822,_n_value_1823);return _n_value_1823;})(),([&](){auto&& _n_array_1824=this->_n_sg_1389;auto _n_index_1825=_n_k_1539;auto _n_value_1826=0.06;d::put(_n_array_1824,_n_index_1825,_n_value_1826);return _n_value_1826;})()),([&](){auto&& _n_array_1827=this->_n_sb_1390;auto _n_index_1828=_n_k_1539;auto _n_value_1829=0.05;d::put(_n_array_1827,_n_index_1828,_n_value_1829);return _n_value_1829;})()));
}
}
double _n_half_1546=(12.5-((this->_n_eave_1400-_n_y_1540)*1.45));
if(((d::truth((_n_y_1540>=this->_n_roofTop_1401))&&d::truth((_n_y_1540<this->_n_eave_1400)))&&d::truth((std::fabs(((_n_x_1538+0.5)-_n_cx_1541))<=_n_half_1546)))){d::check_cancel();(void)(([&](){auto&& _n_array_1830=this->_n_mat_1387;auto _n_index_1831=_n_k_1539;auto _n_value_1832=_n_ROOF_1363;d::put(_n_array_1830,_n_index_1831,_n_value_1832);return _n_value_1832;})());
bool _n_snowy_1547=(_n_y_1540<(this->_n_eave_1400-1.0));
double _n_s_1548=(0.78+(0.22*(((_n_cx_1541-_n_x_1538)-0.5)/12.0)));
if(d::truth(_n_snowy_1547)){d::check_cancel();(void)(((([&](){auto&& _n_array_1833=this->_n_sr_1388;auto _n_index_1834=_n_k_1539;auto _n_value_1835=(0.78*_n_s_1548);d::put(_n_array_1833,_n_index_1834,_n_value_1835);return _n_value_1835;})(),([&](){auto&& _n_array_1836=this->_n_sg_1389;auto _n_index_1837=_n_k_1539;auto _n_value_1838=(0.84*_n_s_1548);d::put(_n_array_1836,_n_index_1837,_n_value_1838);return _n_value_1838;})()),([&](){auto&& _n_array_1839=this->_n_sb_1390;auto _n_index_1840=_n_k_1539;auto _n_value_1841=(0.96*_n_s_1548);d::put(_n_array_1839,_n_index_1840,_n_value_1841);return _n_value_1841;})()));
}else {d::check_cancel();(void)(((([&](){auto&& _n_array_1842=this->_n_sr_1388;auto _n_index_1843=_n_k_1539;auto _n_value_1844=0.12;d::put(_n_array_1842,_n_index_1843,_n_value_1844);return _n_value_1844;})(),([&](){auto&& _n_array_1845=this->_n_sg_1389;auto _n_index_1846=_n_k_1539;auto _n_value_1847=0.05;d::put(_n_array_1845,_n_index_1846,_n_value_1847);return _n_value_1847;})()),([&](){auto&& _n_array_1848=this->_n_sb_1390;auto _n_index_1849=_n_k_1539;auto _n_value_1850=0.06;d::put(_n_array_1848,_n_index_1849,_n_value_1850);return _n_value_1850;})()));
}
(void)(([&](){auto&& _n_array_1851=this->_n_rec_1391;auto _n_index_1852=_n_k_1539;auto _n_value_1853=(d::truth(_n_snowy_1547)?0.5:0.0);d::put(_n_array_1851,_n_index_1852,_n_value_1853);return _n_value_1853;})());
(void)(([&](){auto&& _n_array_1854=this->_n_rim_1392;auto _n_index_1855=_n_k_1539;auto _n_value_1856=0.0;d::put(_n_array_1854,_n_index_1855,_n_value_1856);return _n_value_1856;})());
}
if((((d::truth((_n_x_1538>=this->_n_CHIM_1402))&&d::truth((_n_x_1538<=(this->_n_CHIM_1402+1.0))))&&d::truth((_n_y_1540>=this->_n_CHIM_TOP_1403)))&&d::truth((_n_y_1540<(this->_n_eave_1400-4.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_1857=this->_n_mat_1387;auto _n_index_1858=_n_k_1539;auto _n_value_1859=_n_WALL_1362;d::put(_n_array_1857,_n_index_1858,_n_value_1859);return _n_value_1859;})());
double _n_s_1549=(d::truth((_n_x_1538==this->_n_CHIM_1402))?1.0:0.55);
(void)(((([&](){auto&& _n_array_1860=this->_n_sr_1388;auto _n_index_1861=_n_k_1539;auto _n_value_1862=(0.2*_n_s_1549);d::put(_n_array_1860,_n_index_1861,_n_value_1862);return _n_value_1862;})(),([&](){auto&& _n_array_1863=this->_n_sg_1389;auto _n_index_1864=_n_k_1539;auto _n_value_1865=(0.21*_n_s_1549);d::put(_n_array_1863,_n_index_1864,_n_value_1865);return _n_value_1865;})()),([&](){auto&& _n_array_1866=this->_n_sb_1390;auto _n_index_1867=_n_k_1539;auto _n_value_1868=(0.27*_n_s_1549);d::put(_n_array_1866,_n_index_1867,_n_value_1868);return _n_value_1868;})()));
(void)(([&](){auto&& _n_array_1869=this->_n_rim_1392;auto _n_index_1870=_n_k_1539;auto _n_value_1871=0.0;d::put(_n_array_1869,_n_index_1870,_n_value_1871);return _n_value_1871;})());
}
}}
}}
for(auto &&_n_item_1872:d::Array<d::Array<double,false>,false>{d::Array<double,false>{134.0,7.0},d::Array<double,false>{137.8,10.0},d::Array<double,false>{166.5,9.0},d::Array<double,false>{170.0,6.0},d::Array<double,false>{174.5,8.0}}){d::check_cancel();auto _n_binding_1873=_n_item_1872;
double _n_tx_1550=d::at(_n_binding_1873,0.0);
double _n_th_1551=d::at(_n_binding_1873,1.0);
{
(void)(([&](){auto _n_argument_1874=_n_tx_1550;auto _n_argument_1875=_n_th_1551;auto _n_argument_1876=2.2;auto _n_argument_1877=(this->_n_shoreTop_1396(_n_tx_1550)+0.5);auto _n_argument_1878=[=]( double _a0) mutable ->bool{double _n_k_1552=_a0;
return ([&]()->bool{auto _n_logical_1879=([&]()->bool{auto _n_logical_1880=([&]()->bool{auto _n_logical_1881=(d::at(this->_n_mat_1387,_n_k_1552)==_n_WALL_1362);return d::truth(_n_logical_1881)?_n_logical_1881:(d::at(this->_n_mat_1387,_n_k_1552)==_n_ROOF_1363);})();return d::truth(_n_logical_1880)?_n_logical_1880:(d::at(this->_n_mat_1387,_n_k_1552)==_n_PANE_1364);})();return d::truth(_n_logical_1879)?_n_logical_1879:(d::at(this->_n_mat_1387,_n_k_1552)==_n_DOOR_1366);})();};return this->_n_spruce_1398(_n_argument_1874,_n_argument_1875,_n_argument_1876,_n_argument_1877,_n_argument_1878);})());

}
}
this->_n_lampLand_1404=d::Array<float,true>(size_t((_n_WL_1354*_n_W_1352)));
{double _n_r_1553=0.0;
for(;d::truth((_n_r_1553<_n_WL_1354));(void)((_n_r_1553++))){d::check_cancel();{double _n_x_1554=0.0;
for(;d::truth((_n_x_1554<_n_W_1352));(void)((_n_x_1554++))){d::check_cancel();double _n_k_1555=((_n_r_1553*_n_W_1352)+_n_x_1554);
double _n_m_1556=d::at(this->_n_mat_1387,_n_k_1555);
if((((d::truth((_n_m_1556==_n_PANE_1364))||d::truth((_n_m_1556==_n_WALL_1362)))||d::truth((_n_m_1556==_n_ROOF_1363)))||d::truth((_n_m_1556==_n_DOOR_1366)))){d::check_cancel();continue;
}
double _n_g_1557=0.0;
for(auto &&_n_item_1882:_n_LAMPS_1370){d::check_cancel();auto _n_binding_1883=_n_item_1882;
double _n_lx_1558=d::at(_n_binding_1883,0.0);
double _n_s_1559=d::at(_n_binding_1883,1.0);
{
double _n_wx_1560=((_n_x_1554+0.5)-_n_lx_1558);
double _n_wy_1561=((_n_r_1553+0.5)-(this->_n_cabBase_1397-2.5));
double _n_d_1562=std::sqrt((((_n_wx_1560*_n_wx_1560)*0.6)+((_n_wy_1561*_n_wy_1561)*2.2)));
(void)((_n_g_1557=(_n_g_1557+((_n_s_1559*std::exp(((-d::number(_n_d_1562))/5.5)))*0.6))));

}
}
(void)(([&](){auto&& _n_array_1884=this->_n_lampLand_1404;auto _n_index_1885=_n_k_1555;auto _n_value_1886=(_n_g_1557*(d::truth((_n_m_1556==_n_AIR_1358))?0.3:(d::truth((_n_m_1556==_n_TREE_1365))?0.4:(0.75+(0.5*_n_hash_1371(_n_x_1554,(_n_r_1553+31.0)))))));d::put(_n_array_1884,_n_index_1885,_n_value_1886);return _n_value_1886;})());
}}
}}
this->_n_haze_1405=d::Array<float,true>(size_t((_n_WL_1354*_n_W_1352)));
{double _n_k_1563=0.0;
for(;d::truth((_n_k_1563<(_n_WL_1354*_n_W_1352)));(void)((_n_k_1563++))){d::check_cancel();(void)(([&](){auto&& _n_array_1887=this->_n_haze_1405;auto _n_index_1888=_n_k_1563;auto _n_value_1889=([&](){auto _n_argument_1890=(d::mod(_n_k_1563,_n_W_1352)*0.04);auto _n_argument_1891=(std::floor((_n_k_1563/_n_W_1352))*0.07);auto _n_argument_1892=3.0;return _n_fbm_1373(_n_argument_1890,_n_argument_1891,_n_argument_1892);})();d::put(_n_array_1887,_n_index_1888,_n_value_1889);return _n_value_1889;})());
}}
this->_n_star_1406=d::Array<float,true>(size_t((_n_WL_1354*_n_W_1352)));
{double _n_k_1564=0.0;
for(;d::truth((_n_k_1564<(_n_WL_1354*_n_W_1352)));(void)((_n_k_1564++))){d::check_cancel();double _n_h_1565=([&](){auto _n_argument_1893=d::mod(_n_k_1564,_n_W_1352);auto _n_argument_1894=(std::floor((_n_k_1564/_n_W_1352))+101.0);return _n_hash_1371(_n_argument_1893,_n_argument_1894);})();
if(d::truth((_n_h_1565>0.986))){d::check_cancel();(void)(([&](){auto&& _n_array_1895=this->_n_star_1406;auto _n_index_1896=_n_k_1564;auto _n_value_1897=(0.35+((_n_h_1565-0.986)*45.0));d::put(_n_array_1895,_n_index_1896,_n_value_1897);return _n_value_1897;})());
}
}}
this->_n_gap_1407=d::Array<uint8_t,true>(size_t(_n_H_1353));
{double _n_r_1566=_n_WL_1354;
for(;d::truth((_n_r_1566<_n_H_1353));(void)((_n_r_1566++))){d::check_cancel();(void)(([&](){auto&& _n_array_1898=this->_n_gap_1407;auto _n_index_1899=_n_r_1566;auto _n_value_1900=(d::truth((_n_hash_1371(_n_r_1566,404.0)<0.3))?1.0:0.0);d::put(_n_array_1898,_n_index_1899,_n_value_1900);return _n_value_1900;})());
}}
this->_n_baseA_1408=d::Array<float,true>(size_t(_n_W_1352));
this->_n_tallA_1409=d::Array<float,true>(size_t(_n_W_1352));
this->_n_envA_1410=d::Array<float,true>(size_t(_n_W_1352));
this->_n_baseB_1411=d::Array<float,true>(size_t(_n_W_1352));
this->_n_envB_1412=d::Array<float,true>(size_t(_n_W_1352));
this->_n_RAYS_1413=(4.0*_n_W_1352);
this->_n_raysA_1414=d::Array<float,true>(size_t((this->_n_RAYS_1413+2.0)));
this->_n_raysB_1415=d::Array<float,true>(size_t((this->_n_RAYS_1413+2.0)));
this->_n_R_1416=d::Array<float,true>(size_t((_n_WL_1354*_n_W_1352)));
this->_n_G_1417=d::Array<float,true>(size_t((_n_WL_1354*_n_W_1352)));
this->_n_B_1418=d::Array<float,true>(size_t((_n_WL_1354*_n_W_1352)));
this->_n_lightX_1419=d::Array<float,true>(size_t(_n_W_1352));
_render=[=]( double _a0,std::shared_ptr<_n_Record_1661> _a1) mutable ->d::String{double _n_t_1572=_a0;
auto _n_binding_1903=(d::present(_a1)?_a1:([&](){auto _n_object_1902=std::make_shared<_n_Record_1661>();return _n_object_1902;})());
std::optional<d::Array<uint8_t,true>> _n_color_1573=_n_binding_1903->_p_color;
{
{double _n_x_1574=0.0;
for(;d::truth((_n_x_1574<_n_W_1352));(void)((_n_x_1574++))){d::check_cancel();double _n_u_1575=(_n_x_1574/_n_W_1352);
(void)(([&](){auto&& _n_array_1904=this->_n_baseA_1408;auto _n_index_1905=_n_x_1574;auto _n_value_1906=([&](){auto _n_left_1907=([&](){auto _n_left_1909=([&](){auto _n_left_1911=([&](){auto _n_left_1913=([&](){auto _n_left_1915=(5.0+(40.0*([&](){auto _n_argument_1917=std::sin(((d::minimum({1.0,(_n_u_1575/0.6)})*ascii::PI)/2.0));auto _n_argument_1918=1.5;return std::pow(_n_argument_1917,_n_argument_1918);})()));auto _n_right_1916=(13.0*_n_smooth_1375(0.6,0.95,_n_u_1575));return (_n_left_1915-_n_right_1916);})();auto _n_right_1914=(2.6*std::sin(((_n_x_1574*0.07)-(_n_t_1572*0.55))));return (_n_left_1913+_n_right_1914);})();auto _n_right_1912=(1.4*std::sin((((_n_x_1574*0.17)+(_n_t_1572*0.9))+1.3)));return (_n_left_1911+_n_right_1912);})();auto _n_right_1910=(2.2*std::sin(((_n_x_1574*0.22)+(_n_t_1572*1.2))));return (_n_left_1909+_n_right_1910);})();auto _n_right_1908=(4.0*(_n_fbm_1373(((_n_x_1574*0.015)+(_n_t_1572*0.03)),4.2,2.0)-0.5));return (_n_left_1907+_n_right_1908);})();d::put(_n_array_1904,_n_index_1905,_n_value_1906);return _n_value_1906;})());
(void)(([&](){auto&& _n_array_1919=this->_n_tallA_1409;auto _n_index_1920=_n_x_1574;auto _n_value_1921=(11.0+(8.0*_n_fbm_1373(((_n_x_1574*0.03)-(_n_t_1572*0.05)),1.7,2.0)));d::put(_n_array_1919,_n_index_1920,_n_value_1921);return _n_value_1921;})());
(void)(([&](){auto&& _n_array_1922=this->_n_envA_1410;auto _n_index_1923=_n_x_1574;auto _n_value_1924=([&](){auto _n_left_1925=([&](){auto _n_left_1927=_n_smooth_1375(0.0,0.2,_n_u_1575);auto _n_right_1928=_n_smooth_1375(0.98,0.72,_n_u_1575);return (_n_left_1927*_n_right_1928);})();auto _n_right_1926=(0.4+(0.8*_n_fbm_1373(((_n_x_1574*0.022)-(_n_t_1572*0.07)),8.8,3.0)));return (_n_left_1925*_n_right_1926);})();d::put(_n_array_1922,_n_index_1923,_n_value_1924);return _n_value_1924;})());
(void)(([&](){auto&& _n_array_1929=this->_n_baseB_1411;auto _n_index_1930=_n_x_1574;auto _n_value_1931=([&](){auto _n_left_1932=(14.0+(4.0*std::sin((((_n_x_1574*0.035)+(_n_t_1572*0.3))+2.0))));auto _n_right_1933=(1.6*std::sin(((_n_x_1574*0.11)-(_n_t_1572*0.7))));return (_n_left_1932+_n_right_1933);})();d::put(_n_array_1929,_n_index_1930,_n_value_1931);return _n_value_1931;})());
(void)(([&](){auto&& _n_array_1934=this->_n_envB_1412;auto _n_index_1935=_n_x_1574;auto _n_value_1936=([&](){auto _n_left_1937=([&](){auto _n_left_1939=_n_smooth_1375(0.45,0.7,_n_u_1575);auto _n_right_1940=_n_smooth_1375(1.05,0.85,_n_u_1575);return (_n_left_1939*_n_right_1940);})();auto _n_right_1938=(0.25+(0.5*_n_fbm_1373(((_n_x_1574*0.03)+(_n_t_1572*0.05)),3.3,2.0)));return (_n_left_1937*_n_right_1938);})();d::put(_n_array_1934,_n_index_1935,_n_value_1936);return _n_value_1936;})());
}}
{double _n_i_1576=0.0;
for(;d::truth((_n_i_1576<=(this->_n_RAYS_1413+1.0)));(void)((_n_i_1576++))){d::check_cancel();double _n_u_1577=(_n_i_1576/4.0);
(void)(([&](){auto&& _n_array_1941=this->_n_raysA_1414;auto _n_index_1942=_n_i_1576;auto _n_value_1943=(0.14+(([&](){auto _n_argument_1944=_n_fbm_1373(((_n_u_1577*0.6)+(_n_t_1572*0.35)),(_n_t_1572*0.12),3.0);auto _n_argument_1945=2.4;return std::pow(_n_argument_1944,_n_argument_1945);})()*2.5));d::put(_n_array_1941,_n_index_1942,_n_value_1943);return _n_value_1943;})());
(void)(([&](){auto&& _n_array_1946=this->_n_raysB_1415;auto _n_index_1947=_n_i_1576;auto _n_value_1948=(0.1+(([&](){auto _n_argument_1949=_n_fbm_1373(((_n_u_1577*0.45)-(_n_t_1572*0.2)),(5.0+(_n_t_1572*0.1)),3.0);auto _n_argument_1950=2.2;return std::pow(_n_argument_1949,_n_argument_1950);})()*2.0));d::put(_n_array_1946,_n_index_1947,_n_value_1948);return _n_value_1948;})());
}}
{double _n_x_1578=0.0;
for(;d::truth((_n_x_1578<_n_W_1352));(void)((_n_x_1578++))){d::check_cancel();double _n_s_1579=0.0;
{double _n_d_1580=(-d::number(24.0));
for(;d::truth((_n_d_1580<=24.0));(void)((_n_d_1580=(_n_d_1580+6.0)))){d::check_cancel();double _n_xx_1581=([&](){auto _n_argument_1951=(_n_W_1352-1.0);auto _n_argument_1952=d::maximum({0.0,(_n_x_1578+_n_d_1580)});return d::minimum({_n_argument_1951,_n_argument_1952});})();
(void)((_n_s_1579=(_n_s_1579+(d::at(this->_n_envA_1410,_n_xx_1581)+(0.4*d::at(this->_n_envB_1412,_n_xx_1581))))));
}}
(void)(([&](){auto&& _n_array_1953=this->_n_lightX_1419;auto _n_index_1954=_n_x_1578;auto _n_value_1955=(_n_s_1579/9.0);d::put(_n_array_1953,_n_index_1954,_n_value_1955);return _n_value_1955;})());
}}
double _n_flick_1582=([&](){auto _n_left_1956=(0.92+(0.05*std::sin((_n_t_1572*2.3))));auto _n_right_1957=(0.03*std::sin((_n_t_1572*7.1)));return (_n_left_1956+_n_right_1957);})();
{double _n_r_1583=0.0;
for(;d::truth((_n_r_1583<_n_WL_1354));(void)((_n_r_1583++))){d::check_cancel();double _n_y_1584=(_n_r_1583+0.5);
double _n_v_1585=(_n_y_1584/_n_WL_1354);
{double _n_x_1586=0.0;
for(;d::truth((_n_x_1586<_n_W_1352));(void)((_n_x_1586++))){d::check_cancel();double _n_k_1587=((_n_r_1583*_n_W_1352)+_n_x_1586);
double _n_m_1588=d::at(this->_n_mat_1387,_n_k_1587);
double _n_cr_1589{};
double _n_cg_1590{};
double _n_cb_1591{};
if(d::truth((_n_m_1588==_n_AIR_1358))){d::check_cancel();double _n_hz_1592=(0.85+(0.3*d::at(this->_n_haze_1405,_n_k_1587)));
(void)((_n_cr_1589=((0.025+((0.03*_n_v_1585)*_n_v_1585))*_n_hz_1592)));
(void)((_n_cg_1590=((0.04+((0.07*_n_v_1585)*_n_v_1585))*_n_hz_1592)));
(void)((_n_cb_1591=((0.1+((0.11*_n_v_1585)*_n_v_1585))*_n_hz_1592)));
double _n_a_1593=0.0;
double _n_d_1594=(d::at(this->_n_baseA_1408,_n_x_1586)-_n_y_1584);
if((d::truth((_n_d_1594>(-d::number(4.0))))&&d::truth((_n_d_1594<46.0)))){d::check_cancel();double _n_bend_1595=std::fabs(([&](){auto _n_left_1958=d::at(this->_n_baseA_1408,d::minimum({(_n_W_1352-1.0),(_n_x_1586+1.0)}));auto _n_right_1959=d::at(this->_n_baseA_1408,d::maximum({0.0,(_n_x_1586-1.0)}));return (_n_left_1958-_n_right_1959);})());
double _n_hc_1596=d::at(this->_n_tallA_1409,_n_x_1586);
double _n_lean_1597=this->_n_ray_1420(this->_n_raysA_1414,(_n_x_1586+(_n_d_1594*0.22)));
double _n_prof_1598=(d::truth((_n_d_1594<0.0))?std::exp((((-d::number(_n_d_1594))*_n_d_1594)*0.9)):([&](){auto _n_left_1960=(1.0-std::exp(((-d::number((_n_d_1594+0.4)))*1.1)));auto _n_right_1961=std::exp(((-d::number(_n_d_1594))/_n_hc_1596));return (_n_left_1960*_n_right_1961);})());
double _n_band_1599=(d::truth((_n_d_1594<0.0))?std::exp(((-d::number(_n_d_1594))*_n_d_1594)):std::exp(((-d::number(_n_d_1594))/3.0)));
(void)((_n_a_1593=((((_n_prof_1598*_n_lean_1597)+((0.3*_n_band_1599)*(0.55+(0.45*d::minimum({1.4,_n_lean_1597})))))*d::at(this->_n_envA_1410,_n_x_1586))*(1.15+(0.35*_n_bend_1595)))));
double _n_up_1600=_n_clamp_1374((_n_d_1594/(_n_hc_1596*1.6)));
double _n_gk_1601=(1.0-_n_smooth_1375(0.0,0.5,_n_up_1600));
double _n_vk_1602=_n_smooth_1375(0.4,0.9,_n_up_1600);
double _n_tk_1603=((1.0-_n_gk_1601)-_n_vk_1602);
(void)((_n_cr_1589=(_n_cr_1589+(_n_a_1593*(((0.18*_n_gk_1601)+(0.06*_n_tk_1603))+(0.42*_n_vk_1602))))));
(void)((_n_cg_1590=(_n_cg_1590+(_n_a_1593*(((1.0*_n_gk_1601)+(0.78*_n_tk_1603))+(0.16*_n_vk_1602))))));
(void)((_n_cb_1591=(_n_cb_1591+(_n_a_1593*(((0.48*_n_gk_1601)+(0.7*_n_tk_1603))+(0.75*_n_vk_1602))))));
double _n_hem_1604=([&](){auto _n_left_1962=(([&](){auto _n_left_1964=std::exp(((-d::number(std::pow((_n_d_1594+0.6),2.0)))*1.2));auto _n_right_1965=_n_smooth_1375(0.3,0.8,_n_a_1593);return (_n_left_1964*_n_right_1965);})()*0.8);auto _n_right_1963=(0.45+(0.55*d::minimum({1.0,_n_lean_1597})));return (_n_left_1962*_n_right_1963);})();
(void)((((_n_cr_1589=(_n_cr_1589+(_n_hem_1604*0.95))),(_n_cg_1590=(_n_cg_1590*(1.0-(0.55*d::minimum({1.0,(_n_hem_1604*1.6)})))))),(_n_cb_1591=(_n_cb_1591+(_n_hem_1604*0.4)))));
}
double _n_db_1605=(d::at(this->_n_baseB_1411,_n_x_1586)-_n_y_1584);
if((d::truth((_n_db_1605>(-d::number(3.0))))&&d::truth((_n_db_1605<30.0)))){d::check_cancel();double _n_prof_1606=(d::truth((_n_db_1605<0.0))?std::exp(((-d::number(_n_db_1605))*_n_db_1605)):([&](){auto _n_left_1966=(1.0-std::exp((-d::number((_n_db_1605+0.4)))));auto _n_right_1967=std::exp(((-d::number(_n_db_1605))/9.0));return (_n_left_1966*_n_right_1967);})());
double _n_b_1607=([&](){auto _n_left_1968=(((_n_prof_1606*this->_n_ray_1420(this->_n_raysB_1415,(_n_x_1586+(_n_db_1605*0.18))))*d::at(this->_n_envB_1412,_n_x_1586))*0.85);auto _n_right_1969=_n_smooth_1375(0.0,8.0,_n_y_1584);return (_n_left_1968*_n_right_1969);})();
double _n_up_1608=_n_clamp_1374((_n_db_1605/12.0));
(void)((_n_cr_1589=(_n_cr_1589+(_n_b_1607*(0.1+(0.4*_n_up_1608))))));
(void)((_n_cg_1590=(_n_cg_1590+(_n_b_1607*(0.75-(0.5*_n_up_1608))))));
(void)((_n_cb_1591=(_n_cb_1591+(_n_b_1607*(0.7+(0.2*_n_up_1608))))));
(void)((_n_a_1593=(_n_a_1593+_n_b_1607)));
}
double _n_below_1609=(_n_y_1584-d::at(this->_n_baseA_1408,_n_x_1586));
double _n_gl_1610=(d::at(this->_n_envA_1410,_n_x_1586)*(d::truth((_n_below_1609>0.0))?(std::exp(((-d::number(_n_below_1609))/6.0))*0.1):(std::exp((_n_below_1609/8.0))*0.18)));
(void)((((_n_cr_1589=(_n_cr_1589+(_n_gl_1610*0.12))),(_n_cg_1590=(_n_cg_1590+(_n_gl_1610*0.62)))),(_n_cb_1591=(_n_cb_1591+(_n_gl_1610*0.52)))));
double _n_ag_1611=(std::exp(((-d::number((_n_WL_1354-_n_y_1584)))/10.0))*(0.1+(0.16*d::at(this->_n_lightX_1419,_n_x_1586))));
(void)((((_n_cg_1590=(_n_cg_1590+(_n_ag_1611*0.7))),(_n_cb_1591=(_n_cb_1591+(_n_ag_1611*0.75)))),(_n_cr_1589=(_n_cr_1589+(_n_ag_1611*0.2)))));
double _n_st_1612=d::at(this->_n_star_1406,_n_k_1587);
if(d::truth((_n_st_1612>0.0))){d::check_cancel();double _n_tw_1613=(0.7+(0.3*std::sin(([&](){auto _n_left_1970=(_n_t_1572*(1.3+(3.0*_n_hash_1371(_n_x_1586,_n_r_1583))));auto _n_right_1971=(6.28*_n_hash_1371(_n_r_1583,_n_x_1586));return (_n_left_1970+_n_right_1971);})())));
double _n_s_1614=([&](){auto _n_left_1972=((_n_st_1612*_n_tw_1613)*_n_clamp_1374((1.0-(_n_a_1593*1.6))));auto _n_right_1973=_n_smooth_1375((_n_WL_1354-2.0),30.0,_n_y_1584);return (_n_left_1972*_n_right_1973);})();
(void)((((_n_cr_1589=d::maximum({_n_cr_1589,(_n_s_1614*0.9)})),(_n_cg_1590=d::maximum({_n_cg_1590,(_n_s_1614*0.94)}))),(_n_cb_1591=d::maximum({_n_cb_1591,_n_s_1614}))));
}
}else {d::check_cancel();(void)((((_n_cr_1589=d::at(this->_n_sr_1388,_n_k_1587)),(_n_cg_1590=d::at(this->_n_sg_1389,_n_k_1587))),(_n_cb_1591=d::at(this->_n_sb_1390,_n_k_1587))));
double _n_L_1615=(d::at(this->_n_lightX_1419,_n_x_1586)*d::at(this->_n_rec_1391,_n_k_1587));
(void)((((_n_cr_1589=(_n_cr_1589+(_n_L_1615*0.03))),(_n_cg_1590=(_n_cg_1590+(_n_L_1615*0.14)))),(_n_cb_1591=(_n_cb_1591+(_n_L_1615*0.1)))));
double _n_e_1616=d::at(this->_n_rim_1392,_n_k_1587);
if(d::truth((_n_e_1616>0.0))){d::check_cancel();double _n_q_1617=(_n_e_1616*(d::truth((_n_m_1588==_n_TREE_1365))?(0.2+(0.45*d::at(this->_n_lightX_1419,_n_x_1586))):(0.05+(0.22*d::at(this->_n_lightX_1419,_n_x_1586)))));
(void)((((_n_cr_1589=(_n_cr_1589+(_n_q_1617*0.25))),(_n_cg_1590=(_n_cg_1590+(_n_q_1617*0.95)))),(_n_cb_1591=(_n_cb_1591+(_n_q_1617*0.7)))));
}
if(d::truth((_n_m_1588==_n_PANE_1364))){d::check_cancel();double _n_f_1618=(_n_flick_1582+(0.04*std::sin(((_n_t_1572*5.3)+_n_x_1586))));
(void)((((_n_cr_1589=_n_f_1618),(_n_cg_1590=(0.76*_n_f_1618))),(_n_cb_1591=(0.38*_n_f_1618))));
}else {d::check_cancel();if(d::truth((_n_m_1588==_n_DOOR_1366))){d::check_cancel();if((d::truth((_n_x_1586==d::at(_n_DOOR_X_1369,1.0)))&&d::truth((_n_r_1583>(this->_n_eave_1400+1.0))))){d::check_cancel();(void)((((_n_cr_1589=(0.55*_n_flick_1582)),(_n_cg_1590=(0.36*_n_flick_1582))),(_n_cb_1591=(0.14*_n_flick_1582))));
}
}
}
}
double _n_lg_1619=(d::at(this->_n_lampLand_1404,_n_k_1587)*_n_flick_1582);
if(d::truth((_n_lg_1619>0.0))){d::check_cancel();(void)((((_n_cr_1589=(_n_cr_1589+_n_lg_1619)),(_n_cg_1590=(_n_cg_1590+(_n_lg_1619*0.62)))),(_n_cb_1591=(_n_cb_1591+(_n_lg_1619*0.26)))));
}
(void)(((([&](){auto&& _n_array_1974=this->_n_R_1416;auto _n_index_1975=_n_k_1587;auto _n_value_1976=_n_cr_1589;d::put(_n_array_1974,_n_index_1975,_n_value_1976);return _n_value_1976;})(),([&](){auto&& _n_array_1977=this->_n_G_1417;auto _n_index_1978=_n_k_1587;auto _n_value_1979=_n_cg_1590;d::put(_n_array_1977,_n_index_1978,_n_value_1979);return _n_value_1979;})()),([&](){auto&& _n_array_1980=this->_n_B_1418;auto _n_index_1981=_n_k_1587;auto _n_value_1982=_n_cb_1591;d::put(_n_array_1980,_n_index_1981,_n_value_1982);return _n_value_1982;})()));
}}
}}
{double _n_r_1620=0.0;
for(;d::truth((_n_r_1620<_n_H_1353));(void)((_n_r_1620++))){d::check_cancel();double _n_y_1621=(_n_r_1620+0.5);
double _n_floor_1622=0.1;
double _n_fade_1623=1.0;
double _n_dw_1624=(_n_y_1621-_n_WL_1354);
double _n_deep_1625=(d::truth((_n_r_1620>=_n_WL_1354))?_n_mix_1376(1.0,0.45,(_n_dw_1624/(_n_H_1353-_n_WL_1354))):1.0);
double _n_ry_1626=(((_n_WL_1354-1.0)-(_n_r_1620-_n_WL_1354))-d::round((0.4*std::sin(((_n_r_1620*0.9)+(_n_t_1572*0.6))))));
double _n_r0_1627=(d::maximum({0.0,_n_ry_1626})*_n_W_1352);
double _n_r1_1628=(d::maximum({0.0,(_n_ry_1626-1.0)})*_n_W_1352);
double _n_r2_1629=(d::maximum({0.0,(_n_ry_1626-2.0)})*_n_W_1352);
{double _n_x_1630=0.0;
for(;d::truth((_n_x_1630<_n_W_1352));(void)((_n_x_1630++))){d::check_cancel();double _n_k_1631=((_n_r_1620*_n_W_1352)+_n_x_1630);
double _n_cr_1632{};
double _n_cg_1633{};
double _n_cb_1634{};
if(d::truth((_n_r_1620<_n_WL_1354))){d::check_cancel();(void)((((_n_cr_1632=d::at(this->_n_R_1416,_n_k_1631)),(_n_cg_1633=d::at(this->_n_G_1417,_n_k_1631))),(_n_cb_1634=d::at(this->_n_B_1418,_n_k_1631))));
double _n_m_1635=d::at(this->_n_mat_1387,_n_k_1631);
(void)((_n_floor_1622=(d::truth((_n_m_1635==_n_AIR_1358))?0.1:(d::truth((_n_m_1635==_n_NEAR_1359))?0.05:(d::truth((_n_m_1635==_n_TREE_1365))?0.04:0.06)))));
}else {d::check_cancel();double _n_wave_1636=_n_noise_1372(((_n_x_1630*0.04)+(_n_t_1572*0.05)),((_n_r_1620*0.55)-(_n_t_1572*0.35)));
double _n_sx_1637=(_n_x_1630+((0.5+(_n_dw_1624*0.12))*std::sin((((_n_r_1620*1.3)+(_n_t_1572*1.6))+(_n_wave_1636*4.0)))));
double _n_ix_1638=std::floor(_n_sx_1637);
double _n_fx_1639=(_n_sx_1637-_n_ix_1638);
(void)((_n_ix_1638=([&](){auto _n_argument_1983=0.0;auto _n_argument_1984=d::minimum({(_n_W_1352-2.0),_n_ix_1638});return d::maximum({_n_argument_1983,_n_argument_1984});})()));
double _n_a0_1640=(_n_r0_1627+_n_ix_1638);
double _n_a1_1641=(_n_r1_1628+_n_ix_1638);
double _n_a2_1642=(_n_r2_1629+_n_ix_1638);
bool _n_sky_1643=(d::at(this->_n_mat_1387,_n_a0_1640)==_n_AIR_1358);
double _n_kr_1644=(((d::truth(_n_sky_1643)?0.55:0.64)*(0.82+(0.3*_n_wave_1636)))*_n_deep_1625);
if(((d::truth(_n_sky_1643)&&d::truth(d::at(this->_n_gap_1407,_n_r_1620)))&&d::truth((_n_wave_1636<0.45)))){d::check_cancel();(void)((_n_kr_1644=(_n_kr_1644*0.12)));
}
double _n_ms_1645=d::at(this->_n_mat_1387,_n_a0_1640);
if(d::truth((_n_ms_1645==_n_PANE_1364))){d::check_cancel();(void)((_n_kr_1644=(_n_kr_1644*0.4)));
}else {d::check_cancel();if(((d::truth((_n_ms_1645==_n_WALL_1362))||d::truth((_n_ms_1645==_n_ROOF_1363)))||d::truth((_n_ms_1645==_n_DOOR_1366)))){d::check_cancel();(void)((_n_kr_1644=(_n_kr_1644*0.7)));
}
}
double _n_gx_1646=(1.0-_n_fx_1639);
(void)((_n_cr_1632=((((((d::at(this->_n_R_1416,_n_a0_1640)*_n_gx_1646)+(d::at(this->_n_R_1416,(_n_a0_1640+1.0))*_n_fx_1639))*0.5)+(((d::at(this->_n_R_1416,_n_a1_1641)*_n_gx_1646)+(d::at(this->_n_R_1416,(_n_a1_1641+1.0))*_n_fx_1639))*0.3))+(((d::at(this->_n_R_1416,_n_a2_1642)*_n_gx_1646)+(d::at(this->_n_R_1416,(_n_a2_1642+1.0))*_n_fx_1639))*0.2))*_n_kr_1644)));
(void)((_n_cg_1633=((((((d::at(this->_n_G_1417,_n_a0_1640)*_n_gx_1646)+(d::at(this->_n_G_1417,(_n_a0_1640+1.0))*_n_fx_1639))*0.5)+(((d::at(this->_n_G_1417,_n_a1_1641)*_n_gx_1646)+(d::at(this->_n_G_1417,(_n_a1_1641+1.0))*_n_fx_1639))*0.3))+(((d::at(this->_n_G_1417,_n_a2_1642)*_n_gx_1646)+(d::at(this->_n_G_1417,(_n_a2_1642+1.0))*_n_fx_1639))*0.2))*_n_kr_1644)));
(void)((_n_cb_1634=((((((d::at(this->_n_B_1418,_n_a0_1640)*_n_gx_1646)+(d::at(this->_n_B_1418,(_n_a0_1640+1.0))*_n_fx_1639))*0.5)+(((d::at(this->_n_B_1418,_n_a1_1641)*_n_gx_1646)+(d::at(this->_n_B_1418,(_n_a1_1641+1.0))*_n_fx_1639))*0.3))+(((d::at(this->_n_B_1418,_n_a2_1642)*_n_gx_1646)+(d::at(this->_n_B_1418,(_n_a2_1642+1.0))*_n_fx_1639))*0.2))*_n_kr_1644)));
if((d::truth((_n_ms_1645!=_n_WALL_1362))&&d::truth((_n_ms_1645!=_n_DOOR_1366)))){d::check_cancel();(void)((((_n_cr_1632=(_n_cr_1632+0.02)),(_n_cg_1633=(_n_cg_1633+0.035))),(_n_cb_1634=(_n_cb_1634+0.065))));
}
if(d::truth((_n_r_1620==_n_WL_1354))){d::check_cancel();double _n_e_1647=(0.3*(0.3+(0.7*([&](){auto _n_argument_1985=0.25;auto _n_argument_1986=0.75;auto _n_argument_1987=_n_noise_1372((_n_x_1630*0.3),(_n_t_1572*0.4));return _n_smooth_1375(_n_argument_1985,_n_argument_1986,_n_argument_1987);})())));
(void)((((_n_cr_1632=(_n_cr_1632+(_n_e_1647*0.6))),(_n_cg_1633=(_n_cg_1633+(_n_e_1647*0.85)))),(_n_cb_1634=(_n_cb_1634+_n_e_1647))));
}
if(((d::truth((_n_dw_1624<14.0))&&d::truth((_n_x_1630>138.0)))&&d::truth((_n_x_1630<166.0)))){d::check_cancel();double _n_rip_1648=_n_noise_1372(((_n_x_1630*0.5)-(_n_t_1572*0.2)),((_n_r_1620*1.4)-(_n_t_1572*1.5)));
for(auto &&_n_item_1988:_n_LAMPS_1370){d::check_cancel();auto _n_binding_1989=_n_item_1988;
double _n_lx_1649=d::at(_n_binding_1989,0.0);
double _n_s_1650=d::at(_n_binding_1989,1.0);
{
double _n_lw_1651=(1.0+(_n_dw_1624*0.1));
double _n_q_1652=(((_n_x_1630+0.5)-_n_lx_1649)/_n_lw_1651);
double _n_g_1653=(((([&](){auto _n_left_1990=([&](){auto _n_left_1992=std::exp(((-d::number(_n_q_1652))*_n_q_1652));auto _n_right_1993=std::exp(((-d::number(_n_dw_1624))/8.0));return (_n_left_1992*_n_right_1993);})();auto _n_right_1991=_n_smooth_1375(0.3,0.65,_n_rip_1648);return (_n_left_1990*_n_right_1991);})()*_n_s_1650)*1.6)*_n_flick_1582);
(void)((((_n_cr_1632=(_n_cr_1632+_n_g_1653)),(_n_cg_1633=(_n_cg_1633+(_n_g_1653*0.68)))),(_n_cb_1634=(_n_cb_1634+(_n_g_1653*0.28)))));

}
}
}
(void)((_n_floor_1622=(d::truth(_n_sky_1643)?(0.07*_n_deep_1625):0.03)));
(void)((_n_fade_1623=_n_smooth_1375((_n_H_1353+3.0),(_n_H_1353-12.0),_n_y_1621)));
}
double _n_peak_1654=d::maximum({_n_cr_1632,_n_cg_1633,_n_cb_1634,0.0001});
double _n_level_1655=(_n_clamp_1374((_n_floor_1622+(((1.0-_n_floor_1622)*std::pow(_n_peak_1654,0.85))*0.95)))*_n_fade_1623);
double _n_step_1656=([&](){auto _n_argument_1994=0.0;auto _n_argument_1995=([&](){auto _n_argument_1996=3.0;auto _n_argument_1997=d::round(((_n_level_1655*3.0)+d::at(_n_BAYER_1357,((double(d::i32(_n_r_1620)&d::i32(3.0))*4.0)+double(d::i32(_n_x_1630)&d::i32(3.0))))));return d::minimum({_n_argument_1996,_n_argument_1997});})();return d::maximum({_n_argument_1994,_n_argument_1995});})();
(void)(([&](){auto&& _n_array_1998=this->_n_out_1384;auto _n_index_1999=_n_k_1631;auto _n_value_2000=d::at(_n_DOTS_1355,_n_step_1656);d::put(_n_array_1998,_n_index_1999,_n_value_2000);return _n_value_2000;})());
if(d::truth(_n_color_1573)){d::check_cancel();double _n_want_1657=(d::truth(_n_step_1656)?d::minimum({1.0,((_n_level_1655+0.06)/d::at(_n_COVER_1356,_n_step_1656))}):0.0);
double _n_s_1658=((0.3+(0.7*_n_want_1657))/_n_peak_1654);
(void)(([&](){auto&& _n_array_2001=d::read(_n_color_1573);auto _n_index_2002=_n_k_1631;auto _n_value_2003=([&](){auto _n_argument_2004=_n_clamp_1374((_n_cr_1632*_n_s_1658));auto _n_argument_2005=_n_clamp_1374((_n_cg_1633*_n_s_1658));auto _n_argument_2006=_n_clamp_1374((_n_cb_1634*_n_s_1658));return this->_n_nearest_1386(_n_argument_2004,_n_argument_2005,_n_argument_2006);})();d::put(_n_array_2001,_n_index_2002,_n_value_2003);return _n_value_2003;})());
}
}}
}}
d::Array<d::String,false> _n_lines_1659=d::Array<d::String,false>{};
{double _n_r_1660=0.0;
for(;d::truth((_n_r_1660<_n_H_1353));(void)((_n_r_1660++))){d::check_cancel();(void)(_n_lines_1659.push(d::join(this->_n_out_1384.slice((_n_r_1660*_n_W_1352),((_n_r_1660+1.0)*_n_W_1352)),d::String(u""))));
}}
return d::join(_n_lines_1659,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("aurora-fjord").cols)*ascii::catalog_meta("aurora-fjord").rows);auto _env=std::make_shared<_n_Record_1661>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &aurora_fjord_meta(){return catalog_meta("aurora-fjord");}
std::unique_ptr<Piece> make_aurora_fjord(const AsciiPieceOptions &o){return std::make_unique<Native_aurora_fjord>(o);}
}
