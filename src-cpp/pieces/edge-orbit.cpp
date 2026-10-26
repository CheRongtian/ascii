// Direct, statically typed C++ from src/pieces/edge-orbit.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_8717;
struct _n_Record_9069;
struct _n_Record_8717{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_cell{};
double _p_fps{};
d::String _p_ground{};
d::Array<d::String,false> _p_palette{};
static std::shared_ptr<_n_Record_8717> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_8717>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_cell=d::decode<double>(j["cell"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_ground=d::decode<d::String>(j["ground"]);out->_p_palette=d::decode<d::Array<d::String,false>>(j["palette"]);return out;}
};
struct _n_Record_9069{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_9069> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9069>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_8747(double _a0,double _a1);
double _n_noise_8748(double _a0,double _a1,double _a2);
double _n_fbm_8749(double _a0,double _a1,double _a2,double _a3);
double _n_clamp_8750(double _a0);
double _n_smooth_8751(double _a0,double _a1,double _a2);
double _n_mix_8752(double _a0,double _a1,double _a2);
d::Array<double,false> _n_hex_8753(d::String _a0);
std::shared_ptr<_n_Record_8717> _n_meta_8716=[](){return ([&](){auto _n_object_9072=std::make_shared<_n_Record_8717>();_n_object_9072->_p_name=d::String(u"edge orbit");_n_object_9072->_p_category=d::String(u"scenes");_n_object_9072->_p_note=d::String(u"the night earth from orbit, cloudflare requests arcing city to city");_n_object_9072->_p_cols=200.0;_n_object_9072->_p_rows=100.0;_n_object_9072->_p_cell=1.0;_n_object_9072->_p_fps=15.0;_n_object_9072->_p_ground=d::String(u"#04060c");_n_object_9072->_p_palette=d::Array<d::String,false>{d::String(u"#080c18"),d::String(u"#0d1529"),d::String(u"#152142"),d::String(u"#1e2f5c"),d::String(u"#2b4479"),d::String(u"#40609c"),d::String(u"#7d9cd2"),d::String(u"#b8cdee"),d::String(u"#181d27"),d::String(u"#252b37"),d::String(u"#404041"),d::String(u"#5c6578"),d::String(u"#2e1608"),d::String(u"#4f2410"),d::String(u"#7a3812"),d::String(u"#a94f16"),d::String(u"#d0661a"),d::String(u"#f38020"),d::String(u"#faae40"),d::String(u"#3d2a0e"),d::String(u"#6b4a16"),d::String(u"#a57524"),d::String(u"#d49434"),d::String(u"#ffd68a"),d::String(u"#ffe8c0"),d::String(u"#fff6e8"),d::String(u"#ffffff")};return _n_object_9072;})();}();
const double _n_W_8718=[](){return 200.0;}();
const double _n_H_8719=[](){return 100.0;}();
const double _n_CX_8720=[](){return 100.0;}();
const double _n_CY_8721=[](){return 244.0;}();
const double _n_R_8722=[](){return 196.0;}();
const double _n_DAY_8723=[](){return 1440.0;}();
const double _n_SLOTS_8724=[](){return 14.0;}();
const double _n_PD_8725=[](){return 6.0;}();
const double _n_NC_8726=[](){return (_n_DAY_8723/_n_PD_8725);}();
const double _n_LON_C_8727=[](){return 36.0;}();
const double _n_LAT0_8728=[](){return (-d::number(40.0));}();
const double _n_LAT1_8729=[](){return 85.0;}();
const double _n_TS_8730=[](){return 4.0;}();
const double _n_TW_8731=[](){return (360.0*_n_TS_8730);}();
const double _n_TH_8732=[](){return ((_n_LAT1_8729-_n_LAT0_8728)*_n_TS_8730);}();
const double _n_DEG_8733=[](){return (ascii::PI/180.0);}();
const d::String _n_DOTS_8734=[](){return d::String(u" ·•●");}();
d::Array<double,false> _n_COVER_8735=[](){return d::Array<double,false>{0.0,0.3,0.6,1.0};}();
d::Array<double,false> _n_BAYER_8736=[](){return d::map(d::Array<double,false>{0.0,8.0,2.0,10.0,12.0,4.0,14.0,6.0,3.0,11.0,1.0,9.0,15.0,7.0,13.0,5.0},[&]( double _a0) mutable ->double{double _n_v_8792=_a0;
return ((_n_v_8792/16.0)-0.47);});}();
const double _n_TILT_8737=[](){return (30.0*_n_DEG_8733);}();
d::Array<double,false> _n_P_8738=[](){return d::Array<double,false>{0.0,std::cos(_n_TILT_8737),(-d::number(std::sin(_n_TILT_8737)))};}();
d::Array<double,false> _n_G_8739=[](){return d::Array<double,false>{0.0,std::sin(_n_TILT_8737),std::cos(_n_TILT_8737)};}();
const double _n_SUN_A_8740=[](){return (63.0*_n_DEG_8733);}();
d::Array<double,false> _n_SUN_8741=[](){return d::Array<double,false>{(_n_CX_8720+(_n_R_8722*std::cos(_n_SUN_A_8740))),(_n_CY_8721-(_n_R_8722*std::sin(_n_SUN_A_8740)))};}();
d::Array<double,false> _n_ORANGE_8742=[](){return d::Array<double,false>{(243.0/255.0),(128.0/255.0),(32.0/255.0)};}();
d::Array<double,false> _n_TANGERINE_8743=[](){return d::Array<double,false>{(250.0/255.0),(174.0/255.0),(64.0/255.0)};}();
d::Array<d::Array<double,false>,false> _n_LAND_8744=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(17.0)),21.0,(-d::number(16.0)),28.0,(-d::number(10.0)),30.0,(-d::number(6.0)),35.8,10.0,37.0,11.0,33.5,15.0,32.0,20.0,30.5,25.0,31.6,32.0,31.3,34.3,31.3,34.5,29.5,33.5,27.8,37.0,22.0,39.0,15.5,43.0,12.5,51.0,11.8,48.0,5.0,40.0,(-d::number(3.0)),39.0,(-d::number(10.0)),40.0,(-d::number(16.0)),35.0,(-d::number(24.0)),32.0,(-d::number(29.0)),27.0,(-d::number(34.0)),19.0,(-d::number(35.0)),18.0,(-d::number(30.0)),12.0,(-d::number(17.0)),13.0,(-d::number(6.0)),9.0,(-d::number(1.0)),9.0,4.0,5.0,4.5,(-d::number(2.0)),4.8,(-d::number(8.0)),4.5,(-d::number(13.0)),8.0,(-d::number(16.0)),12.0,(-d::number(17.0)),15.0},d::Array<double,false>{(-d::number(5.6)),36.0,(-d::number(2.0)),36.7,0.0,38.5,0.5,40.5,3.0,42.0,3.0,43.3,6.0,43.0,9.0,44.3,10.5,43.0,12.0,41.8,14.0,40.7,15.7,38.0,17.0,39.0,18.5,40.1,17.0,41.0,16.0,41.9,14.0,42.8,12.3,44.5,13.5,45.7,15.0,44.5,17.0,43.0,19.0,41.8,19.5,40.0,21.0,38.5,22.0,37.0,23.0,38.0,24.0,38.0,23.0,39.5,23.5,40.5,26.0,40.8,26.5,40.0,27.0,38.0,27.5,37.0,29.0,36.6,32.0,36.2,36.0,36.7,35.9,35.0,35.0,33.0,34.3,31.3,35.0,28.5,39.0,21.5,42.5,16.0,43.4,12.7,45.0,13.0,52.0,16.0,57.0,19.0,59.5,22.5,56.5,24.0,56.0,26.2,54.0,24.0,51.5,24.5,51.0,26.0,50.0,26.5,48.0,29.5,50.0,30.0,52.0,27.5,56.5,27.0,57.0,25.7,61.0,25.3,67.0,24.8,69.0,22.5,73.0,21.0,73.0,17.0,76.0,11.0,77.0,8.0,80.0,10.0,80.0,15.5,87.0,21.0,89.0,22.0,92.0,22.0,94.0,17.0,98.0,16.0,98.0,8.0,101.0,3.0,103.0,1.5,104.0,1.3,103.5,5.0,102.0,6.0,100.3,8.0,99.3,10.5,100.0,13.5,102.0,12.5,104.0,10.5,105.0,9.0,109.0,12.0,106.0,19.0,108.0,21.5,110.0,21.0,115.0,22.5,120.0,25.0,122.0,30.0,120.0,32.0,122.0,37.0,118.0,39.0,122.0,40.0,126.0,38.0,126.0,35.0,129.0,35.0,129.5,37.0,129.0,41.0,135.0,43.0,140.0,48.0,141.0,52.0,135.0,54.0,143.0,59.0,156.0,57.0,156.0,51.0,163.0,58.0,170.0,60.0,180.0,65.0,180.0,68.0,160.0,70.0,140.0,72.0,130.0,71.0,110.0,74.0,100.0,76.0,80.0,73.0,70.0,73.0,60.0,69.0,55.0,68.5,44.0,68.0,40.0,66.0,33.0,66.0,35.0,69.0,30.0,70.0,25.0,71.0,15.0,68.0,10.0,63.0,5.0,61.0,5.5,58.5,7.0,58.0,10.5,59.0,11.5,58.0,12.8,55.4,14.0,55.5,16.5,56.5,18.5,59.5,17.5,61.0,18.0,62.5,21.0,64.5,22.5,65.8,25.0,65.5,21.5,63.0,22.0,60.5,23.0,60.0,30.0,60.5,28.0,59.5,24.0,59.4,23.5,58.5,24.0,57.5,21.0,57.0,21.0,55.5,19.0,54.5,14.0,54.0,12.0,54.2,10.0,54.5,10.5,57.5,8.5,57.0,8.0,54.0,4.0,51.5,2.0,51.0,(-d::number(1.0)),49.5,(-d::number(4.5)),48.5,(-d::number(1.5)),46.0,(-d::number(2.0)),43.5,(-d::number(9.0)),43.0,(-d::number(9.0)),37.0},d::Array<double,false>{(-d::number(5.5)),50.0,(-d::number(3.0)),50.5,1.5,51.0,1.7,52.8,0.0,53.5,(-d::number(0.5)),54.5,(-d::number(1.5)),55.5,(-d::number(2.0)),57.0,(-d::number(1.8)),57.6,(-d::number(4.0)),58.6,(-d::number(5.0)),58.6,(-d::number(6.0)),57.5,(-d::number(5.5)),56.0,(-d::number(4.8)),55.0,(-d::number(3.0)),54.3,(-d::number(3.0)),53.3,(-d::number(4.6)),53.2,(-d::number(4.2)),52.2,(-d::number(5.2)),51.7,(-d::number(3.0)),51.4,(-d::number(5.6)),50.1},d::Array<double,false>{(-d::number(6.0)),52.0,(-d::number(6.2)),53.5,(-d::number(5.5)),54.5,(-d::number(7.5)),55.3,(-d::number(10.0)),54.0,(-d::number(10.0)),52.0,(-d::number(8.0)),51.5},d::Array<double,false>{(-d::number(24.0)),65.5,(-d::number(22.0)),66.4,(-d::number(16.0)),66.5,(-d::number(13.5)),65.0,(-d::number(18.0)),63.4,(-d::number(22.5)),63.8},d::Array<double,false>{12.5,38.0,15.6,38.3,15.0,36.7},d::Array<double,false>{8.4,39.0,9.7,39.2,9.6,41.0,9.4,43.0,8.6,42.6,8.2,40.8},d::Array<double,false>{23.5,35.2,26.3,35.1,25.5,35.4,23.6,35.6},d::Array<double,false>{32.3,34.7,34.5,35.6,33.0,35.4},d::Array<double,false>{79.8,6.0,81.8,7.0,81.0,9.5,80.0,9.8,79.7,8.0},d::Array<double,false>{130.9,34.0,132.0,35.4,136.0,35.7,137.0,37.0,140.0,40.0,140.0,41.5,142.0,39.5,141.0,37.0,140.8,35.7,139.8,35.0,138.7,34.6,136.8,34.2,135.0,33.5,132.0,33.8},d::Array<double,false>{129.6,33.2,131.8,32.0,131.0,31.0,130.0,31.5},d::Array<double,false>{140.0,41.5,141.6,45.4,145.6,43.4,143.0,42.0,141.0,41.8},d::Array<double,false>{120.3,22.5,121.0,25.2,122.0,25.0,120.8,22.0},d::Array<double,false>{120.0,14.5,120.6,18.5,122.2,18.5,122.0,16.0,124.0,13.0,121.0,13.5},d::Array<double,false>{109.0,1.5,110.0,(-d::number(3.0)),116.0,(-d::number(4.0)),119.0,1.0,117.5,7.0,116.0,6.5,111.0,2.0},d::Array<double,false>{95.3,5.6,98.0,4.0,104.0,(-d::number(1.5)),106.0,(-d::number(6.0)),104.5,(-d::number(5.8)),101.0,(-d::number(2.5)),97.0,2.0},d::Array<double,false>{105.5,(-d::number(6.0)),114.5,(-d::number(7.0)),114.5,(-d::number(8.5)),106.0,(-d::number(7.4))},d::Array<double,false>{(-d::number(168.0)),66.0,(-d::number(162.0)),70.0,(-d::number(156.0)),71.3,(-d::number(140.0)),69.7,(-d::number(128.0)),70.0,(-d::number(117.0)),69.0,(-d::number(108.0)),68.0,(-d::number(95.0)),68.0,(-d::number(85.0)),69.5,(-d::number(80.0)),66.0,(-d::number(75.0)),64.0,(-d::number(65.0)),60.5,(-d::number(61.0)),56.0,(-d::number(56.0)),52.0,(-d::number(59.5)),47.6,(-d::number(64.0)),48.5,(-d::number(65.0)),46.5,(-d::number(61.0)),45.6,(-d::number(66.0)),43.5,(-d::number(70.0)),43.7,(-d::number(70.5)),41.8,(-d::number(74.0)),40.5,(-d::number(76.0)),38.0,(-d::number(76.0)),35.0,(-d::number(81.0)),31.5,(-d::number(80.0)),27.0,(-d::number(80.5)),25.2,(-d::number(81.8)),26.5,(-d::number(83.0)),29.5,(-d::number(85.0)),29.6,(-d::number(89.0)),30.3,(-d::number(90.0)),29.0,(-d::number(94.0)),29.6,(-d::number(97.3)),27.5,(-d::number(97.5)),22.0,(-d::number(96.0)),19.0,(-d::number(94.5)),18.2,(-d::number(91.0)),18.8,(-d::number(90.5)),21.0,(-d::number(87.0)),21.5,(-d::number(88.0)),16.0,(-d::number(84.0)),15.8,(-d::number(83.5)),11.0,(-d::number(81.5)),8.8,(-d::number(79.5)),9.5,(-d::number(77.5)),8.5,(-d::number(77.0)),7.5,(-d::number(78.0)),7.0,(-d::number(80.0)),7.3,(-d::number(80.5)),8.2,(-d::number(83.5)),8.3,(-d::number(85.7)),10.0,(-d::number(87.5)),13.0,(-d::number(91.5)),14.0,(-d::number(94.5)),16.0,(-d::number(96.5)),15.7,(-d::number(101.0)),17.2,(-d::number(105.5)),20.0,(-d::number(105.7)),22.7,(-d::number(109.0)),26.0,(-d::number(112.8)),31.5,(-d::number(114.8)),31.8,(-d::number(114.5)),30.0,(-d::number(112.0)),26.8,(-d::number(110.0)),23.0,(-d::number(112.0)),25.0,(-d::number(114.0)),28.0,(-d::number(115.7)),30.3,(-d::number(117.0)),32.5,(-d::number(120.5)),34.5,(-d::number(122.5)),37.5,(-d::number(124.0)),40.5,(-d::number(124.5)),43.0,(-d::number(124.0)),46.5,(-d::number(124.7)),48.4,(-d::number(123.0)),49.0,(-d::number(127.5)),50.5,(-d::number(130.0)),54.5,(-d::number(133.0)),57.5,(-d::number(137.0)),59.0,(-d::number(141.0)),60.0,(-d::number(146.0)),61.0,(-d::number(151.0)),59.5,(-d::number(154.0)),57.5,(-d::number(158.0)),56.0,(-d::number(163.0)),54.8,(-d::number(158.0)),57.5,(-d::number(157.0)),58.6,(-d::number(162.0)),58.6,(-d::number(166.0)),60.3,(-d::number(165.0)),62.5,(-d::number(164.0)),64.5},d::Array<double,false>{(-d::number(80.0)),73.0,(-d::number(68.0)),70.0,(-d::number(62.0)),66.5,(-d::number(65.0)),63.0,(-d::number(72.0)),62.5,(-d::number(78.0)),64.5,(-d::number(85.0)),70.0},d::Array<double,false>{(-d::number(73.0)),78.0,(-d::number(60.0)),82.0,(-d::number(30.0)),83.0,(-d::number(20.0)),80.0,(-d::number(18.0)),76.0,(-d::number(22.0)),70.0,(-d::number(32.0)),68.0,(-d::number(40.0)),65.0,(-d::number(43.0)),60.0,(-d::number(48.0)),61.0,(-d::number(52.0)),65.0,(-d::number(54.0)),69.0,(-d::number(58.0)),75.5,(-d::number(66.0)),76.5},d::Array<double,false>{(-d::number(85.0)),21.8,(-d::number(80.0)),23.0,(-d::number(74.0)),20.2,(-d::number(77.5)),19.8,(-d::number(80.0)),21.6,(-d::number(84.0)),21.8},d::Array<double,false>{(-d::number(74.4)),18.5,(-d::number(68.4)),18.6,(-d::number(69.5)),19.8,(-d::number(72.5)),19.8},d::Array<double,false>{(-d::number(77.5)),8.5,(-d::number(76.0)),9.5,(-d::number(72.0)),12.0,(-d::number(70.0)),12.2,(-d::number(68.0)),10.5,(-d::number(62.0)),10.7,(-d::number(60.0)),8.5,(-d::number(57.0)),6.0,(-d::number(52.0)),5.0,(-d::number(50.0)),1.8,(-d::number(48.0)),(-d::number(1.0)),(-d::number(44.0)),(-d::number(2.5)),(-d::number(35.0)),(-d::number(5.5)),(-d::number(35.0)),(-d::number(9.0)),(-d::number(39.0)),(-d::number(15.0)),(-d::number(41.0)),(-d::number(22.0)),(-d::number(48.0)),(-d::number(26.0)),(-d::number(53.0)),(-d::number(34.0)),(-d::number(57.0)),(-d::number(36.0)),(-d::number(58.0)),(-d::number(38.5)),(-d::number(65.0)),(-d::number(41.0)),(-d::number(65.0)),(-d::number(46.0)),(-d::number(69.0)),(-d::number(51.0)),(-d::number(68.5)),(-d::number(54.5)),(-d::number(72.0)),(-d::number(53.0)),(-d::number(75.0)),(-d::number(48.0)),(-d::number(73.0)),(-d::number(38.0)),(-d::number(71.5)),(-d::number(30.0)),(-d::number(70.3)),(-d::number(18.0)),(-d::number(76.0)),(-d::number(14.0)),(-d::number(81.0)),(-d::number(6.0)),(-d::number(80.0)),(-d::number(3.0)),(-d::number(80.5)),0.0,(-d::number(79.0)),1.5,(-d::number(78.0)),7.0,(-d::number(77.0)),7.5},d::Array<double,false>{114.0,(-d::number(22.0)),122.0,(-d::number(17.5)),129.0,(-d::number(15.0)),131.0,(-d::number(12.0)),137.0,(-d::number(12.0)),136.0,(-d::number(15.0)),140.0,(-d::number(17.5)),142.0,(-d::number(10.8)),146.0,(-d::number(19.0)),153.0,(-d::number(25.0)),153.0,(-d::number(31.0)),150.0,(-d::number(37.5)),146.0,(-d::number(39.0)),140.0,(-d::number(38.0)),138.0,(-d::number(35.0)),135.0,(-d::number(35.0)),131.0,(-d::number(31.5)),124.0,(-d::number(34.0)),115.0,(-d::number(34.5)),115.0,(-d::number(30.0))}};}();
d::Array<d::Array<double,false>,false> _n_WATER_8745=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{28.0,41.2,28.0,43.0,29.5,45.0,31.0,46.6,33.0,46.0,33.5,44.4,35.5,45.0,37.0,45.2,38.0,47.0,39.0,47.0,37.5,44.6,39.5,43.5,41.6,41.6,39.0,41.0,35.0,42.0,32.0,41.8,29.0,41.2},d::Array<double,false>{47.0,44.5,49.0,46.5,51.5,47.0,53.0,46.5,51.0,44.5,52.5,42.0,54.0,40.5,53.5,37.0,51.0,36.7,49.0,37.5,49.5,40.0,48.0,42.0},d::Array<double,false>{(-d::number(95.0)),59.0,(-d::number(94.0)),61.0,(-d::number(88.0)),64.0,(-d::number(82.0)),64.0,(-d::number(78.0)),62.5,(-d::number(77.0)),60.0,(-d::number(79.0)),55.0,(-d::number(80.0)),51.5,(-d::number(82.5)),52.0,(-d::number(85.0)),55.0,(-d::number(92.0)),57.0,(-d::number(94.0)),58.0}};}();
d::Array<d::Array<double,false>,false> _n_CITIES_8746=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(0.1)),51.5,1.0},d::Array<double,false>{2.35,48.86,1.0},d::Array<double,false>{(-d::number(3.7)),40.4,0.8},d::Array<double,false>{2.17,41.4,0.6},d::Array<double,false>{(-d::number(9.1)),38.7,0.5},d::Array<double,false>{12.5,41.9,0.7},d::Array<double,false>{9.2,45.5,0.8},d::Array<double,false>{13.4,52.5,0.7},d::Array<double,false>{10.0,53.55,0.5},d::Array<double,false>{4.9,52.37,0.8},d::Array<double,false>{4.35,50.85,0.5},d::Array<double,false>{8.68,50.1,0.8},d::Array<double,false>{11.6,48.1,0.5},d::Array<double,false>{16.4,48.2,0.5},d::Array<double,false>{21.0,52.2,0.5},d::Array<double,false>{14.4,50.1,0.4},d::Array<double,false>{19.0,47.5,0.4},d::Array<double,false>{18.0,59.3,0.4},d::Array<double,false>{10.7,59.9,0.3},d::Array<double,false>{12.6,55.7,0.4},d::Array<double,false>{25.0,60.2,0.3},d::Array<double,false>{(-d::number(6.3)),53.3,0.4},d::Array<double,false>{(-d::number(2.2)),53.5,0.5},d::Array<double,false>{37.6,55.75,1.0},d::Array<double,false>{30.3,59.9,0.6},d::Array<double,false>{30.5,50.45,0.5},d::Array<double,false>{29.0,41.0,1.0},d::Array<double,false>{23.7,38.0,0.5},d::Array<double,false>{26.1,44.4,0.4},d::Array<double,false>{5.4,43.3,0.4},d::Array<double,false>{4.8,45.75,0.3},d::Array<double,false>{14.3,40.85,0.4},d::Array<double,false>{23.3,42.7,0.3},d::Array<double,false>{20.5,44.8,0.3},d::Array<double,false>{27.5,53.9,0.3},d::Array<double,false>{49.1,55.8,0.3},d::Array<double,false>{60.6,56.8,0.3},d::Array<double,false>{82.9,55.0,0.3},d::Array<double,false>{44.0,56.3,0.3},d::Array<double,false>{39.7,47.2,0.3},d::Array<double,false>{31.2,30.05,1.0},d::Array<double,false>{29.9,31.2,0.5},d::Array<double,false>{32.6,25.7,0.2},d::Array<double,false>{32.5,15.5,0.4},d::Array<double,false>{3.4,6.5,0.9},d::Array<double,false>{(-d::number(0.2)),5.6,0.4},d::Array<double,false>{(-d::number(4.0)),5.3,0.4},d::Array<double,false>{(-d::number(17.4)),14.7,0.3},d::Array<double,false>{(-d::number(7.6)),33.6,0.5},d::Array<double,false>{3.0,36.75,0.5},d::Array<double,false>{10.2,36.8,0.4},d::Array<double,false>{13.2,32.9,0.3},d::Array<double,false>{38.7,9.0,0.4},d::Array<double,false>{36.8,(-d::number(1.3)),0.4},d::Array<double,false>{15.3,(-d::number(4.3)),0.5},d::Array<double,false>{28.0,(-d::number(26.2)),0.6},d::Array<double,false>{7.5,9.1,0.4},d::Array<double,false>{(-d::number(1.5)),12.4,0.2},d::Array<double,false>{2.1,13.5,0.2},d::Array<double,false>{45.3,2.0,0.2},d::Array<double,false>{34.8,32.1,0.6},d::Array<double,false>{35.9,32.0,0.3},d::Array<double,false>{35.5,33.9,0.3},d::Array<double,false>{44.4,33.3,0.5},d::Array<double,false>{51.4,35.7,0.8},d::Array<double,false>{46.7,24.7,0.6},d::Array<double,false>{39.2,21.5,0.4},d::Array<double,false>{55.3,25.2,0.7},d::Array<double,false>{51.5,25.3,0.4},d::Array<double,false>{48.0,29.4,0.4},d::Array<double,false>{58.4,23.6,0.3},d::Array<double,false>{59.6,36.3,0.3},d::Array<double,false>{32.9,39.9,0.5},d::Array<double,false>{27.1,38.4,0.3},d::Array<double,false>{49.9,40.4,0.3},d::Array<double,false>{44.5,40.2,0.3},d::Array<double,false>{69.2,41.3,0.4},d::Array<double,false>{76.9,43.2,0.3},d::Array<double,false>{69.2,34.5,0.3},d::Array<double,false>{67.0,24.9,0.8},d::Array<double,false>{74.3,31.5,0.7},d::Array<double,false>{77.2,28.6,1.0},d::Array<double,false>{72.9,19.1,1.0},d::Array<double,false>{88.4,22.6,0.8},d::Array<double,false>{80.3,13.1,0.7},d::Array<double,false>{77.6,13.0,0.7},d::Array<double,false>{78.5,17.4,0.6},d::Array<double,false>{90.4,23.8,0.8},d::Array<double,false>{85.3,27.7,0.2},d::Array<double,false>{72.6,23.0,0.5},d::Array<double,false>{75.8,26.9,0.4},d::Array<double,false>{80.9,26.8,0.5},d::Array<double,false>{73.9,18.5,0.5},d::Array<double,false>{79.9,6.9,0.3},d::Array<double,false>{96.2,16.8,0.3},d::Array<double,false>{116.4,39.9,1.0},d::Array<double,false>{121.5,31.2,1.0},d::Array<double,false>{113.3,23.1,0.9},d::Array<double,false>{114.2,22.3,0.8},d::Array<double,false>{104.0,30.7,0.6},d::Array<double,false>{114.3,30.6,0.6},d::Array<double,false>{108.9,34.3,0.5},d::Array<double,false>{127.0,37.55,1.0},d::Array<double,false>{139.7,35.7,1.1},d::Array<double,false>{135.5,34.7,0.8},d::Array<double,false>{121.5,25.0,0.6},d::Array<double,false>{100.5,13.75,0.8},d::Array<double,false>{105.8,21.0,0.5},d::Array<double,false>{106.7,10.8,0.6},d::Array<double,false>{103.8,1.35,0.8},d::Array<double,false>{106.8,(-d::number(6.2)),0.9},d::Array<double,false>{121.0,14.6,0.8},d::Array<double,false>{101.7,3.1,0.5},d::Array<double,false>{(-d::number(74.0)),40.7,1.1},d::Array<double,false>{(-d::number(77.0)),38.9,0.6},d::Array<double,false>{(-d::number(71.0)),42.36,0.6},d::Array<double,false>{(-d::number(75.2)),39.95,0.6},d::Array<double,false>{(-d::number(87.6)),41.9,0.9},d::Array<double,false>{(-d::number(83.0)),42.3,0.5},d::Array<double,false>{(-d::number(79.4)),43.65,0.7},d::Array<double,false>{(-d::number(73.6)),45.5,0.5},d::Array<double,false>{(-d::number(84.4)),33.75,0.6},d::Array<double,false>{(-d::number(80.2)),25.8,0.7},d::Array<double,false>{(-d::number(96.8)),32.8,0.7},d::Array<double,false>{(-d::number(95.4)),29.8,0.7},d::Array<double,false>{(-d::number(105.0)),39.7,0.4},d::Array<double,false>{(-d::number(112.0)),33.45,0.5},d::Array<double,false>{(-d::number(118.2)),34.0,1.0},d::Array<double,false>{(-d::number(122.4)),37.8,0.7},d::Array<double,false>{(-d::number(122.3)),47.6,0.5},d::Array<double,false>{(-d::number(123.1)),49.3,0.4},d::Array<double,false>{(-d::number(99.1)),19.4,1.0},d::Array<double,false>{(-d::number(103.3)),20.7,0.4},d::Array<double,false>{(-d::number(100.3)),25.7,0.4},d::Array<double,false>{(-d::number(82.4)),23.1,0.3},d::Array<double,false>{(-d::number(74.1)),4.7,0.6},d::Array<double,false>{(-d::number(66.9)),10.5,0.4},d::Array<double,false>{(-d::number(93.3)),45.0,0.4},d::Array<double,false>{(-d::number(90.2)),38.6,0.4},d::Array<double,false>{(-d::number(111.9)),40.8,0.3},d::Array<double,false>{(-d::number(79.5)),9.0,0.3},d::Array<double,false>{(-d::number(149.9)),61.2,0.2},d::Array<double,false>{(-d::number(21.9)),64.1,0.2},d::Array<double,false>{(-d::number(46.6)),(-d::number(23.5)),1.0},d::Array<double,false>{(-d::number(43.2)),(-d::number(22.9)),0.7},d::Array<double,false>{(-d::number(77.0)),(-d::number(12.0)),0.6}};}();
double _n_hash_8747(double _a0,double _a1){double _n_x_8793=_a0;
double _n_y_8794=_a1;
{
double _n_h_8795=([&](){auto _n_left_9073=d::imul(double(d::i32(_n_x_8793)|d::i32(0.0)),374761393.0);auto _n_right_9074=d::imul(double(d::i32(_n_y_8794)|d::i32(0.0)),668265263.0);return (_n_left_9073+_n_right_9074);})();
(void)((_n_h_8795=d::imul(double(d::i32(_n_h_8795)^d::i32(double(d::u32(_n_h_8795)>>(d::u32(13.0)&31)))),1274126177.0)));
return (double(d::u32(double(d::i32(_n_h_8795)^d::i32(double(d::u32(_n_h_8795)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_noise_8748(double _a0,double _a1,double _a2){double _n_x_8796=_a0;
double _n_y_8797=_a1;
double _n_period_8798=_a2;
{
double _n_xi_8799=std::floor(_n_x_8796);
double _n_yi_8800=std::floor(_n_y_8797);
double _n_fx_8801=(_n_x_8796-_n_xi_8799);
double _n_fy_8802=(_n_y_8797-_n_yi_8800);
double _n_u_8803=((_n_fx_8801*_n_fx_8801)*(3.0-(2.0*_n_fx_8801)));
double _n_v_8804=((_n_fy_8802*_n_fy_8802)*(3.0-(2.0*_n_fy_8802)));
double _n_x0_8805=_n_xi_8799;
double _n_x1_8806=(_n_xi_8799+1.0);
if(d::truth(_n_period_8798)){d::check_cancel();(void)((_n_x0_8805=d::mod((d::mod(_n_xi_8799,_n_period_8798)+_n_period_8798),_n_period_8798)));
(void)((_n_x1_8806=d::mod((_n_x0_8805+1.0),_n_period_8798)));
}
double _n_a_8807=_n_hash_8747(_n_x0_8805,_n_yi_8800);
double _n_b_8808=_n_hash_8747(_n_x1_8806,_n_yi_8800);
double _n_c_8809=_n_hash_8747(_n_x0_8805,(_n_yi_8800+1.0));
double _n_d_8810=_n_hash_8747(_n_x1_8806,(_n_yi_8800+1.0));
return (((_n_a_8807+((_n_b_8808-_n_a_8807)*_n_u_8803))+((_n_c_8809-_n_a_8807)*_n_v_8804))+(((((_n_a_8807-_n_b_8808)-_n_c_8809)+_n_d_8810)*_n_u_8803)*_n_v_8804));

}
}

double _n_fbm_8749(double _a0,double _a1,double _a2,double _a3){double _n_x_8811=_a0;
double _n_y_8812=_a1;
double _n_octaves_8813=_a2;
double _n_period_8814=_a3;
{
double _n_s_8815=0.0;
double _n_n_8816=0.0;
double _n_amp_8817=0.5;
double _n_f_8818=1.0;
{double _n_i_8819=0.0;
for(;d::truth((_n_i_8819<_n_octaves_8813));(void)((_n_i_8819++))){d::check_cancel();(void)((_n_s_8815=(_n_s_8815+(_n_amp_8817*_n_noise_8748((_n_x_8811*_n_f_8818),(_n_y_8812*_n_f_8818),(_n_period_8814*_n_f_8818))))));
(void)((_n_n_8816=(_n_n_8816+_n_amp_8817)));
(void)((_n_amp_8817=(_n_amp_8817*0.5)));
(void)((_n_f_8818=(_n_f_8818*2.0)));
}}
return (_n_s_8815/_n_n_8816);

}
}

double _n_clamp_8750(double _a0){double _n_v_8820=_a0;
return (d::truth((_n_v_8820<0.0))?0.0:(d::truth((_n_v_8820>1.0))?1.0:_n_v_8820));}

double _n_smooth_8751(double _a0,double _a1,double _a2){double _n_a_8821=_a0;
double _n_b_8822=_a1;
double _n_v_8823=_a2;
{
double _n_k_8824=_n_clamp_8750(((_n_v_8823-_n_a_8821)/(_n_b_8822-_n_a_8821)));
return ((_n_k_8824*_n_k_8824)*(3.0-(2.0*_n_k_8824)));

}
}

double _n_mix_8752(double _a0,double _a1,double _a2){double _n_a_8825=_a0;
double _n_b_8826=_a1;
double _n_k_8827=_a2;
return (_n_a_8825+((_n_b_8826-_n_a_8825)*_n_k_8827));}

d::Array<double,false> _n_hex_8753(d::String _a0){d::String _n_s_8828=_a0;
return d::map(d::Array<double,false>{1.0,3.0,5.0},[&]( double _a0) mutable ->double{double _n_i_8829=_a0;
return (([&](){auto _n_argument_9075=d::slice(_n_s_8828,_n_i_8829,(_n_i_8829+2.0));auto _n_argument_9076=16.0;return d::parseInt(_n_argument_9075,_n_argument_9076);})()/255.0);});}

struct Native_edge_orbit final:ascii::Piece{
d::Array<d::Array<double,false>,false> _n_PAL_8754{};
double _n_N_8755{};
d::Array<d::String,false> _n_out_8756{};
double _n_I_ORANGE_8757{};
double _n_I_TANGERINE_8758{};
d::Array<uint8_t,true> _n_lut_8759{};
d::Array<uint8_t,true> _n_mask_8761{};
d::Array<float,true> _n_land_8763{};
d::Array<float,true> _n_relief_8764{};
d::Array<float,true> _n_sprawl_8766{};
d::Array<float,true> _n_core_8767{};
d::Array<float,true> _n_lights_8768{};
d::Array<uint8_t,true> _n_onGlobe_8770{};
d::Array<float,true> _n_texI_8771{};
d::Array<float,true> _n_texJ_8772{};
d::Array<float,true> _n_depth_8773{};
d::Array<float,true> _n_toSun_8774{};
d::Array<float,true> _n_stars_8775{};
d::Array<double,false> _n_HUBS_8776{};
d::Array<d::Array<double,false>,false> _n_unit_8777{};
d::Array<d::Array<double,false>,false> _n_near_8778{};
d::Array<double,true> _n_tmp_8780{};
d::Array<float,true> _n_aO_8782{};
d::Array<float,true> _n_aT_8783{};
d::Array<double,true> _n_A_8787{};
d::Array<double,true> _n_B_8788{};
double _n_LAND_T_8790{};
std::function<d::String(double,std::shared_ptr<_n_Record_9069>)> _render;
double _n_nearest_8760(double _a0,double _a1,double _a2){double _n_r_8830=_a0;
double _n_g_8831=_a1;
double _n_b_8832=_a2;
{
double _n_k_8833=([&](){auto _n_left_9168=([&](){auto _n_left_9170=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_r_8830*31.99))|d::i32(0.0))}))<<(d::u32(10.0)&31)));auto _n_right_9171=double(int32_t(d::u32(d::minimum({31.0,double(d::i32((_n_g_8831*31.99))|d::i32(0.0))}))<<(d::u32(5.0)&31)));return double(d::i32(_n_left_9170)|d::i32(_n_right_9171));})();auto _n_right_9169=d::minimum({31.0,double(d::i32((_n_b_8832*31.99))|d::i32(0.0))});return double(d::i32(_n_left_9168)|d::i32(_n_right_9169));})();
if(d::truth((d::at(this->_n_lut_8759,_n_k_8833)!=255.0))){d::check_cancel();return d::at(this->_n_lut_8759,_n_k_8833);
}
double _n_best_8834=0.0;
double _n_bd_8835=1000000000.0;
{double _n_i_8836=0.0;
for(;d::truth((_n_i_8836<double(this->_n_PAL_8754.size())));(void)((_n_i_8836++))){d::check_cancel();double _n_dr_8837=(d::at(d::at(this->_n_PAL_8754,_n_i_8836),0.0)-_n_r_8830);
double _n_dg_8838=(d::at(d::at(this->_n_PAL_8754,_n_i_8836),1.0)-_n_g_8831);
double _n_db_8839=(d::at(d::at(this->_n_PAL_8754,_n_i_8836),2.0)-_n_b_8832);
double _n_d_8840=((((0.3*_n_dr_8837)*_n_dr_8837)+((0.5*_n_dg_8838)*_n_dg_8838))+((0.2*_n_db_8839)*_n_db_8839));
if(d::truth((_n_d_8840<_n_bd_8835))){d::check_cancel();(void)(((_n_bd_8835=_n_d_8840),(_n_best_8834=_n_i_8836)));
}
}}
return ([&](){auto&& _n_array_9172=this->_n_lut_8759;auto _n_index_9173=_n_k_8833;auto _n_value_9174=_n_best_8834;d::put(_n_array_9172,_n_index_9173,_n_value_9174);return _n_value_9174;})();

}
}

void _n_fill_8762(d::Array<double,false> _a0,double _a1){d::Array<double,false> _n_ring_8841=_a0;
double _n_v_8842=_a1;
{
d::Array<double,false> _n_xs_8843=d::Array<double,false>{};
{double _n_j_8844=0.0;
for(;d::truth((_n_j_8844<_n_TH_8732));(void)((_n_j_8844++))){d::check_cancel();double _n_lat_8845=(_n_LAT1_8729-((_n_j_8844+0.5)/_n_TS_8730));
(void)((_n_xs_8843.resize(size_t(0.0)),0.0));
{double _n_a_8846=0.0;
double _n_n_8847=(double(_n_ring_8841.size())/2.0);
for(;d::truth((_n_a_8846<_n_n_8847));(void)((_n_a_8846++))){d::check_cancel();double _n_b_8848=d::mod((_n_a_8846+1.0),_n_n_8847);
double _n_y0_8849=d::at(_n_ring_8841,((_n_a_8846*2.0)+1.0));
double _n_y1_8850=d::at(_n_ring_8841,((_n_b_8848*2.0)+1.0));
if(d::truth(((_n_y0_8849>_n_lat_8845)!=(_n_y1_8850>_n_lat_8845)))){d::check_cancel();(void)(_n_xs_8843.push((d::at(_n_ring_8841,(_n_a_8846*2.0))+(((_n_lat_8845-_n_y0_8849)/(_n_y1_8850-_n_y0_8849))*(d::at(_n_ring_8841,(_n_b_8848*2.0))-d::at(_n_ring_8841,(_n_a_8846*2.0)))))));
}
}}
(void)(_n_xs_8843.sort([=]( double _a0,double _a1) mutable ->double{double _n_p_8851=_a0;
double _n_q_8852=_a1;
return (_n_p_8851-_n_q_8852);}));
{double _n_k_8853=0.0;
for(;d::truth(((_n_k_8853+1.0)<double(_n_xs_8843.size())));(void)((_n_k_8853=(_n_k_8853+2.0)))){d::check_cancel();double _n_i0_8854=std::ceil((((d::at(_n_xs_8843,_n_k_8853)+180.0)*_n_TS_8730)-0.5));
double _n_i1_8855=std::floor((((d::at(_n_xs_8843,(_n_k_8853+1.0))+180.0)*_n_TS_8730)-0.5));
{double _n_i_8856=_n_i0_8854;
for(;d::truth((_n_i_8856<=_n_i1_8855));(void)((_n_i_8856++))){d::check_cancel();(void)(([&](){auto&& _n_array_9175=this->_n_mask_8761;auto _n_index_9176=((_n_j_8844*_n_TW_8731)+d::mod((d::mod(_n_i_8856,_n_TW_8731)+_n_TW_8731),_n_TW_8731));auto _n_value_9177=_n_v_8842;d::put(_n_array_9175,_n_index_9176,_n_value_9177);return _n_value_9177;})());
}}
}}
}}

}
}

double _n_at_8765(double _a0,double _a1){double _n_i_8859=_a0;
double _n_j_8860=_a1;
return d::at(this->_n_mask_8761,((([&](){auto _n_argument_9178=0.0;auto _n_argument_9179=d::minimum({(_n_TH_8732-1.0),_n_j_8860});return d::maximum({_n_argument_9178,_n_argument_9179});})()*_n_TW_8731)+d::mod((d::mod(_n_i_8859,_n_TW_8731)+_n_TW_8731),_n_TW_8731)));}

double _n_sample_8769(d::Array<float,true> _a0,double _a1,double _a2){d::Array<float,true> _n_A_8896=_a0;
double _n_fi_8897=_a1;
double _n_fj_8898=_a2;
{
double _n_i0_8899=std::floor(_n_fi_8897);
double _n_u_8900=(_n_fi_8897-_n_i0_8899);
(void)((_n_i0_8899=d::mod((d::mod(_n_i0_8899,_n_TW_8731)+_n_TW_8731),_n_TW_8731)));
double _n_i1_8901=(d::truth(((_n_i0_8899+1.0)==_n_TW_8731))?0.0:(_n_i0_8899+1.0));
double _n_j0_8902=([&](){auto _n_argument_9180=0.0;auto _n_argument_9181=([&](){auto _n_argument_9182=(_n_TH_8732-2.0);auto _n_argument_9183=std::floor(_n_fj_8898);return d::minimum({_n_argument_9182,_n_argument_9183});})();return d::maximum({_n_argument_9180,_n_argument_9181});})();
double _n_v_8903=_n_clamp_8750((_n_fj_8898-_n_j0_8902));
double _n_a_8904=d::at(_n_A_8896,((_n_j0_8902*_n_TW_8731)+_n_i0_8899));
double _n_b_8905=d::at(_n_A_8896,((_n_j0_8902*_n_TW_8731)+_n_i1_8901));
double _n_c_8906=d::at(_n_A_8896,(((_n_j0_8902*_n_TW_8731)+_n_TW_8731)+_n_i0_8899));
double _n_d_8907=d::at(_n_A_8896,(((_n_j0_8902*_n_TW_8731)+_n_TW_8731)+_n_i1_8901));
return (((_n_a_8904+((_n_b_8905-_n_a_8904)*_n_u_8900))+((_n_c_8906-_n_a_8904)*_n_v_8903))+(((((_n_a_8904-_n_b_8905)-_n_c_8906)+_n_d_8907)*_n_u_8900)*_n_v_8903));

}
}

void _n_view_8779(double _a0,double _a1,d::Array<double,true> _a2){double _n_c_8927=_a0;
double _n_spin_8928=_a1;
d::Array<double,true> _n_o_8929=_a2;
{
auto _n_binding_9184=d::at(_n_CITIES_8746,_n_c_8927);
double _n_lon_8930=d::at(_n_binding_9184,0.0);
double _n_lat_8931=d::at(_n_binding_9184,1.0);
double _n_rel_8932=(((_n_lon_8930-_n_LON_C_8727)*_n_DEG_8733)+_n_spin_8928);
double _n_cl_8933=std::cos((_n_lat_8931*_n_DEG_8733));
double _n_sl_8934=std::sin((_n_lat_8931*_n_DEG_8733));
double _n_cr_8935=(std::cos(_n_rel_8932)*_n_cl_8933);
(void)(([&](){auto&& _n_array_9185=_n_o_8929;auto _n_index_9186=0.0;auto _n_value_9187=(_n_cl_8933*std::sin(_n_rel_8932));d::put(_n_array_9185,_n_index_9186,_n_value_9187);return _n_value_9187;})());
(void)(([&](){auto&& _n_array_9188=_n_o_8929;auto _n_index_9189=1.0;auto _n_value_9190=((_n_cr_8935*d::at(_n_G_8739,1.0))+(_n_sl_8934*d::at(_n_P_8738,1.0)));d::put(_n_array_9188,_n_index_9189,_n_value_9190);return _n_value_9190;})());
(void)(([&](){auto&& _n_array_9191=_n_o_8929;auto _n_index_9192=2.0;auto _n_value_9193=((_n_cr_8935*d::at(_n_G_8739,2.0))+(_n_sl_8934*d::at(_n_P_8738,2.0)));d::put(_n_array_9191,_n_index_9192,_n_value_9193);return _n_value_9193;})());

}
}

bool _n_shown_8781(double _a0,double _a1){double _n_c_8936=_a0;
double _n_spin_8937=_a1;
{
(void)(this->_n_view_8779(_n_c_8936,_n_spin_8937,this->_n_tmp_8780));
double _n_x_8938=(_n_CX_8720+(d::at(this->_n_tmp_8780,0.0)*_n_R_8722));
double _n_y_8939=(_n_CY_8721-(d::at(this->_n_tmp_8780,1.0)*_n_R_8722));
return ([&]()->bool{auto _n_logical_9194=([&]()->bool{auto _n_logical_9195=([&]()->bool{auto _n_logical_9196=([&]()->bool{auto _n_logical_9197=(d::at(this->_n_tmp_8780,2.0)>0.25);return d::truth(_n_logical_9197)?(_n_x_8938>10.0):_n_logical_9197;})();return d::truth(_n_logical_9196)?(_n_x_8938<(_n_W_8718-10.0)):_n_logical_9196;})();return d::truth(_n_logical_9195)?(_n_y_8939>56.0):_n_logical_9195;})();return d::truth(_n_logical_9194)?(_n_y_8939<(_n_H_8719-4.0)):_n_logical_9194;})();

}
}

void _n_splatS_8784(d::Array<float,true> _a0,double _a1,double _a2,double _a3){d::Array<float,true> _n_A_8940=_a0;
double _n_sx_8941=_a1;
double _n_sy_8942=_a2;
double _n_w_8943=_a3;
{
double _n_fx_8944=(_n_sx_8941-0.5);
double _n_fy_8945=(_n_sy_8942-0.5);
double _n_x0_8946=std::floor(_n_fx_8944);
double _n_y0_8947=std::floor(_n_fy_8945);
double _n_u_8948=(_n_fx_8944-_n_x0_8946);
double _n_v_8949=(_n_fy_8945-_n_y0_8947);
{double _n_q_8950=0.0;
for(;d::truth((_n_q_8950<4.0));(void)((_n_q_8950++))){d::check_cancel();double _n_x_8951=(_n_x0_8946+double(d::i32(_n_q_8950)&d::i32(1.0)));
double _n_y_8952=(_n_y0_8947+double(d::i32(_n_q_8950)>>(d::u32(1.0)&31)));
if((((d::truth((_n_x_8951<0.0))||d::truth((_n_x_8951>=_n_W_8718)))||d::truth((_n_y_8952<0.0)))||d::truth((_n_y_8952>=_n_H_8719)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_9198=_n_A_8940;auto _n_index_9199=((_n_y_8952*_n_W_8718)+_n_x_8951);auto _n_value_9200=(d::at(_n_array_9198,_n_index_9199)+((_n_w_8943*(d::truth(double(d::i32(_n_q_8950)&d::i32(1.0)))?_n_u_8948:(1.0-_n_u_8948)))*(d::truth(double(d::i32(_n_q_8950)>>(d::u32(1.0)&31)))?_n_v_8949:(1.0-_n_v_8949))));d::put(_n_array_9198,_n_index_9199,_n_value_9200);return _n_value_9200;})());
}}

}
}

void _n_splat_8785(d::Array<float,true> _a0,double _a1,double _a2,double _a3,double _a4){d::Array<float,true> _n_A_8953=_a0;
double _n_px_8954=_a1;
double _n_py_8955=_a2;
double _n_pz_8956=_a3;
double _n_w_8957=_a4;
{
if((d::truth((_n_pz_8956<0.0))&&d::truth((((_n_px_8954*_n_px_8954)+(_n_py_8955*_n_py_8955))<1.0)))){d::check_cancel();return;
}
(void)(this->_n_splatS_8784(_n_A_8953,(_n_CX_8720+(_n_px_8954*_n_R_8722)),(_n_CY_8721-(_n_py_8955*_n_R_8722)),_n_w_8957));

}
}

void _n_blob_8786(d::Array<float,true> _a0,double _a1,double _a2,double _a3,double _a4){d::Array<float,true> _n_A_8958=_a0;
double _n_sx_8959=_a1;
double _n_sy_8960=_a2;
double _n_rad_8961=_a3;
double _n_w_8962=_a4;
{
double _n_n_8963=std::ceil((_n_rad_8961*2.5));
{double _n_dy_8964=(-d::number(_n_n_8963));
for(;d::truth((_n_dy_8964<=_n_n_8963));(void)((_n_dy_8964++))){d::check_cancel();{double _n_dx_8965=(-d::number(_n_n_8963));
for(;d::truth((_n_dx_8965<=_n_n_8963));(void)((_n_dx_8965++))){d::check_cancel();double _n_x_8966=(d::round(_n_sx_8959)+_n_dx_8965);
double _n_y_8967=(d::round(_n_sy_8960)+_n_dy_8964);
if((((d::truth((_n_x_8966<0.0))||d::truth((_n_x_8966>=_n_W_8718)))||d::truth((_n_y_8967<0.0)))||d::truth((_n_y_8967>=_n_H_8719)))){d::check_cancel();continue;
}
double _n_ex_8968=((_n_x_8966+0.5)-_n_sx_8959);
double _n_ey_8969=((_n_y_8967+0.5)-_n_sy_8960);
(void)(([&](){auto&& _n_array_9201=_n_A_8958;auto _n_index_9202=((_n_y_8967*_n_W_8718)+_n_x_8966);auto _n_value_9203=(d::at(_n_array_9201,_n_index_9202)+(_n_w_8962*std::exp(((-d::number(((_n_ex_8968*_n_ex_8968)+(_n_ey_8969*_n_ey_8969))))/((2.0*_n_rad_8961)*_n_rad_8961)))));d::put(_n_array_9201,_n_index_9202,_n_value_9203);return _n_value_9203;})());
}}
}}

}
}

double _n_ease_8789(double _a0){double _n_p_8970=_a0;
return ((_n_p_8970*_n_p_8970)*(3.0-(2.0*_n_p_8970)));}

void _n_request_8791(double _a0,double _a1){double _n_slot_8971=_a0;
double _n_t_8972=_a1;
{
double _n_u_8973=(_n_t_8972+(_n_hash_8747(_n_slot_8971,7.0)*_n_PD_8725));
double _n_cyc_8974=std::floor((_n_u_8973/_n_PD_8725));
double _n_local_8975=(_n_u_8973-(_n_cyc_8974*_n_PD_8725));
double _n_c_8976=d::mod((d::mod(_n_cyc_8974,_n_NC_8726)+_n_NC_8726),_n_NC_8726);
double _n_spin0_8977=((((_n_t_8972-_n_local_8975)/_n_DAY_8723)*ascii::PI)*2.0);
double _n_a_8978=(-d::number(1.0));
{double _n_k_8979=0.0;
for(;(d::truth((_n_k_8979<40.0))&&d::truth((_n_a_8978<0.0)));(void)((_n_k_8979++))){d::check_cancel();double _n_cand_8980=d::at(this->_n_HUBS_8776,std::floor((_n_hash_8747(((_n_slot_8971*977.0)+_n_c_8976),((_n_k_8979*13.0)+1.0))*double(this->_n_HUBS_8776.size()))));
if((d::truth((_n_hash_8747((_n_cand_8980+(_n_k_8979*31.0)),((_n_c_8976*7.0)+_n_slot_8971))<d::at(d::at(_n_CITIES_8746,_n_cand_8980),2.0)))&&d::truth(this->_n_shown_8781(_n_cand_8980,_n_spin0_8977)))){d::check_cancel();(void)((_n_a_8978=_n_cand_8980));
}
}}
if(d::truth((_n_a_8978<0.0))){d::check_cancel();return;
}
double _n_b_8981=(-d::number(1.0));
d::Array<double,false> _n_list_8982=d::at(this->_n_near_8778,_n_a_8978);
{double _n_k_8983=0.0;
for(;((d::truth((_n_k_8983<16.0))&&d::truth((_n_b_8981<0.0)))&&d::truth(double(_n_list_8982.size())));(void)((_n_k_8983++))){d::check_cancel();double _n_cand_8984=d::at(_n_list_8982,std::floor((_n_hash_8747(((_n_slot_8971*131.0)+_n_c_8976),(_n_k_8983+50.0))*double(_n_list_8982.size()))));
if(d::truth(this->_n_shown_8781(_n_cand_8984,_n_spin0_8977))){d::check_cancel();(void)((_n_b_8981=_n_cand_8984));
}
}}
if(d::truth((_n_b_8981<0.0))){d::check_cancel();return;
}
double _n_spin_8985=(((_n_t_8972/_n_DAY_8723)*ascii::PI)*2.0);
(void)(this->_n_view_8779(_n_a_8978,_n_spin_8985,this->_n_A_8787));
(void)(this->_n_view_8779(_n_b_8981,_n_spin_8985,this->_n_B_8788));
double _n_om_8986=std::acos(d::minimum({1.0,(((d::at(this->_n_A_8787,0.0)*d::at(this->_n_B_8788,0.0))+(d::at(this->_n_A_8787,1.0)*d::at(this->_n_B_8788,1.0)))+(d::at(this->_n_A_8787,2.0)*d::at(this->_n_B_8788,2.0)))}));
double _n_so_8987=std::sin(_n_om_8986);
double _n_dur_8988=(0.9+(_n_om_8986*3.2));
double _n_p_8989=((_n_local_8975-(_n_hash_8747(((_n_slot_8971*7.0)+_n_c_8976),3.0)*1.2))/_n_dur_8988);
if(d::truth((_n_p_8989<0.0))){d::check_cancel();return;
}
double _n_lift_8990=(0.015+(0.17*_n_om_8986));
auto _n_pt_8991=[&]( double _a0,d::Array<double,true> _a1) mutable ->void{double _n_s_8992=_a0;
d::Array<double,true> _n_o_8993=_a1;
{
double _n_ka_8994=(std::sin(((1.0-_n_s_8992)*_n_om_8986))/_n_so_8987);
double _n_kb_8995=(std::sin((_n_s_8992*_n_om_8986))/_n_so_8987);
double _n_h_8996=(1.0+(_n_lift_8990*std::sin((ascii::PI*_n_s_8992))));
(void)(([&](){auto&& _n_array_9204=_n_o_8993;auto _n_index_9205=0.0;auto _n_value_9206=(((_n_ka_8994*d::at(this->_n_A_8787,0.0))+(_n_kb_8995*d::at(this->_n_B_8788,0.0)))*_n_h_8996);d::put(_n_array_9204,_n_index_9205,_n_value_9206);return _n_value_9206;})());
(void)(([&](){auto&& _n_array_9207=_n_o_8993;auto _n_index_9208=1.0;auto _n_value_9209=(((_n_ka_8994*d::at(this->_n_A_8787,1.0))+(_n_kb_8995*d::at(this->_n_B_8788,1.0)))*_n_h_8996);d::put(_n_array_9207,_n_index_9208,_n_value_9209);return _n_value_9209;})());
(void)(([&](){auto&& _n_array_9210=_n_o_8993;auto _n_index_9211=2.0;auto _n_value_9212=(((_n_ka_8994*d::at(this->_n_A_8787,2.0))+(_n_kb_8995*d::at(this->_n_B_8788,2.0)))*_n_h_8996);d::put(_n_array_9210,_n_index_9211,_n_value_9212);return _n_value_9212;})());

}
};
double _n_steps_8997=(std::ceil(((_n_om_8986*_n_R_8722)*2.4))+8.0);
double _n_cell_8998=(((_n_om_8986*_n_R_8722)*1.3)/_n_steps_8997);
double _n_ax_8999=(_n_CX_8720+(d::at(this->_n_A_8787,0.0)*_n_R_8722));
double _n_ay_9000=(_n_CY_8721-(d::at(this->_n_A_8787,1.0)*_n_R_8722));
double _n_bx_9001=(_n_CX_8720+(d::at(this->_n_B_8788,0.0)*_n_R_8722));
double _n_by_9002=(_n_CY_8721-(d::at(this->_n_B_8788,1.0)*_n_R_8722));
if(d::truth((_n_p_8989<=1.0))){d::check_cancel();double _n_sh_9003=this->_n_ease_8789(_n_p_8989);
double _n_TL_9004=0.35;
{double _n_i_9005=0.0;
for(;d::truth((_n_i_9005<=_n_steps_8997));(void)((_n_i_9005++))){d::check_cancel();double _n_s_9006=((_n_i_9005/_n_steps_8997)*_n_sh_9003);
double _n_tail_9007=(d::truth((_n_s_9006>(_n_sh_9003-_n_TL_9004)))?std::pow(((_n_s_9006-(_n_sh_9003-_n_TL_9004))/_n_TL_9004),1.5):0.0);
(void)(_n_pt_8991(_n_s_9006,this->_n_tmp_8780));
(void)(this->_n_splat_8785(this->_n_aO_8782,d::at(this->_n_tmp_8780,0.0),d::at(this->_n_tmp_8780,1.0),d::at(this->_n_tmp_8780,2.0),(((0.2+(2.2*_n_tail_9007))*_n_cell_8998)*_n_sh_9003)));
}}
(void)(_n_pt_8991(_n_sh_9003,this->_n_tmp_8780));
if(d::truth((!d::truth(([&]()->bool{auto _n_logical_9213=(d::at(this->_n_tmp_8780,2.0)<0.0);return d::truth(_n_logical_9213)?(((d::at(this->_n_tmp_8780,0.0)*d::at(this->_n_tmp_8780,0.0))+(d::at(this->_n_tmp_8780,1.0)*d::at(this->_n_tmp_8780,1.0)))<1.0):_n_logical_9213;})())))){d::check_cancel();(void)(this->_n_blob_8786(this->_n_aO_8782,(_n_CX_8720+(d::at(this->_n_tmp_8780,0.0)*_n_R_8722)),(_n_CY_8721-(d::at(this->_n_tmp_8780,1.0)*_n_R_8722)),0.75,2.4));
}
(void)(([&](){auto _n_argument_9214=this->_n_aO_8782;auto _n_argument_9215=_n_ax_8999;auto _n_argument_9216=_n_ay_9000;auto _n_argument_9217=0.9;auto _n_argument_9218=((2.4*std::exp(((-d::number(_n_p_8989))*6.0)))+0.3);return this->_n_blob_8786(_n_argument_9214,_n_argument_9215,_n_argument_9216,_n_argument_9217,_n_argument_9218);})());
return;
}
double _n_e_9008=(((_n_p_8989-1.0)*_n_dur_8988)/this->_n_LAND_T_8790);
if(d::truth((_n_e_9008>1.0))){d::check_cancel();return;
}
double _n_fade_9009=((1.0-_n_e_9008)*(1.0-_n_e_9008));
{double _n_i_9010=0.0;
for(;d::truth((_n_i_9010<=_n_steps_8997));(void)((_n_i_9010=(_n_i_9010+2.0)))){d::check_cancel();(void)(_n_pt_8991((_n_i_9010/_n_steps_8997),this->_n_tmp_8780));
(void)(this->_n_splat_8785(this->_n_aO_8782,d::at(this->_n_tmp_8780,0.0),d::at(this->_n_tmp_8780,1.0),d::at(this->_n_tmp_8780,2.0),((0.5*_n_cell_8998)*_n_fade_9009)));
}}
(void)(([&](){auto _n_argument_9219=this->_n_aT_8783;auto _n_argument_9220=_n_bx_9001;auto _n_argument_9221=_n_by_9002;auto _n_argument_9222=0.85;auto _n_argument_9223=((2.6*std::exp(((-d::number(_n_e_9008))*4.0)))+(0.3*_n_fade_9009));return this->_n_blob_8786(_n_argument_9219,_n_argument_9220,_n_argument_9221,_n_argument_9222,_n_argument_9223);})());
d::Array<double,false> _n_ex_9011=d::Array<double,false>{d::at(this->_n_B_8788,2.0),0.0,(-d::number(d::at(this->_n_B_8788,0.0)))};
double _n_el_9012=([&]()->double{auto _n_logical_9224=d::hypot(std::initializer_list<double>{d::at(_n_ex_9011,0.0),d::at(_n_ex_9011,2.0)});return d::truth(_n_logical_9224)?_n_logical_9224:1.0;})();
(void)((([&](){auto&& _n_array_9225=_n_ex_9011;auto _n_index_9226=0.0;auto _n_value_9227=(d::at(_n_array_9225,_n_index_9226)/_n_el_9012);d::put(_n_array_9225,_n_index_9226,_n_value_9227);return _n_value_9227;})(),([&](){auto&& _n_array_9228=_n_ex_9011;auto _n_index_9229=2.0;auto _n_value_9230=(d::at(_n_array_9228,_n_index_9229)/_n_el_9012);d::put(_n_array_9228,_n_index_9229,_n_value_9230);return _n_value_9230;})()));
double _n_nx_9013=((d::at(this->_n_B_8788,1.0)*d::at(_n_ex_9011,2.0))-(d::at(this->_n_B_8788,2.0)*d::at(_n_ex_9011,1.0)));
double _n_ny_9014=((d::at(this->_n_B_8788,2.0)*d::at(_n_ex_9011,0.0))-(d::at(this->_n_B_8788,0.0)*d::at(_n_ex_9011,2.0)));
double _n_nz_9015=((d::at(this->_n_B_8788,0.0)*d::at(_n_ex_9011,1.0))-(d::at(this->_n_B_8788,1.0)*d::at(_n_ex_9011,0.0)));
double _n_rad_9016=((2.0+(9.0*std::sqrt(_n_e_9008)))/_n_R_8722);
{double _n_i_9017=0.0;
for(;d::truth((_n_i_9017<48.0));(void)((_n_i_9017++))){d::check_cancel();double _n_th_9018=(((_n_i_9017/48.0)*ascii::PI)*2.0);
double _n_cs_9019=(std::cos(_n_th_9018)*_n_rad_9016);
double _n_sn_9020=(std::sin(_n_th_9018)*_n_rad_9016);
(void)(this->_n_splat_8785(this->_n_aT_8783,((d::at(this->_n_B_8788,0.0)+(_n_cs_9019*d::at(_n_ex_9011,0.0)))+(_n_sn_9020*_n_nx_9013)),((d::at(this->_n_B_8788,1.0)+(_n_cs_9019*d::at(_n_ex_9011,1.0)))+(_n_sn_9020*_n_ny_9014)),((d::at(this->_n_B_8788,2.0)+(_n_cs_9019*d::at(_n_ex_9011,2.0)))+(_n_sn_9020*_n_nz_9015)),(0.5*_n_fade_9009)));
}}

}
}

explicit Native_edge_orbit(const AsciiPieceOptions &_input){ascii::Options _options(_input);
this->_n_PAL_8754=d::map(_n_meta_8716->_p_palette,_n_hex_8753);
this->_n_N_8755=(_n_W_8718*_n_H_8719);
this->_n_out_8756=d::Array<d::String,false>(size_t(this->_n_N_8755));
this->_n_I_ORANGE_8757=_n_meta_8716->_p_palette.indexOf(d::String(u"#f38020"));
this->_n_I_TANGERINE_8758=_n_meta_8716->_p_palette.indexOf(d::String(u"#faae40"));
this->_n_lut_8759=d::Array<uint8_t,true>(size_t(32768.0)).fill(255.0);
this->_n_mask_8761=d::Array<uint8_t,true>(size_t((_n_TW_8731*_n_TH_8732)));
for(auto &&_n_item_9077:_n_LAND_8744){d::check_cancel();d::Array<double,false> _n_ring_8857=_n_item_9077;
(void)(this->_n_fill_8762(_n_ring_8857,1.0));
}
for(auto &&_n_item_9078:_n_WATER_8745){d::check_cancel();d::Array<double,false> _n_ring_8858=_n_item_9078;
(void)(this->_n_fill_8762(_n_ring_8858,0.0));
}
this->_n_land_8763=d::Array<float,true>(size_t((_n_TW_8731*_n_TH_8732)));
this->_n_relief_8764=d::Array<float,true>(size_t((_n_TW_8731*_n_TH_8732)));
{double _n_j_8861=0.0;
for(;d::truth((_n_j_8861<_n_TH_8732));(void)((_n_j_8861++))){d::check_cancel();{double _n_i_8862=0.0;
for(;d::truth((_n_i_8862<_n_TW_8731));(void)((_n_i_8862++))){d::check_cancel();double _n_a_8863=_n_fbm_8749((_n_i_8862*0.075),(_n_j_8861*0.075),3.0,108.0);
double _n_b_8864=_n_fbm_8749(((_n_i_8862*0.075)+31.0),((_n_j_8861*0.075)+17.0),3.0,108.0);
double _n_fi_8865=(_n_i_8862+((_n_a_8863-0.5)*9.0));
double _n_fj_8866=(_n_j_8861+((_n_b_8864-0.5)*9.0));
double _n_i0_8867=std::floor(_n_fi_8865);
double _n_j0_8868=std::floor(_n_fj_8866);
double _n_u_8869=(_n_fi_8865-_n_i0_8867);
double _n_v_8870=(_n_fj_8866-_n_j0_8868);
double _n_m_8871=([&](){auto _n_left_9079=(([&](){auto _n_left_9081=(this->_n_at_8765(_n_i0_8867,_n_j0_8868)*(1.0-_n_u_8869));auto _n_right_9082=(this->_n_at_8765((_n_i0_8867+1.0),_n_j0_8868)*_n_u_8869);return (_n_left_9081+_n_right_9082);})()*(1.0-_n_v_8870));auto _n_right_9080=(([&](){auto _n_left_9083=(this->_n_at_8765(_n_i0_8867,(_n_j0_8868+1.0))*(1.0-_n_u_8869));auto _n_right_9084=(this->_n_at_8765((_n_i0_8867+1.0),(_n_j0_8868+1.0))*_n_u_8869);return (_n_left_9083+_n_right_9084);})()*_n_v_8870);return (_n_left_9079+_n_right_9080);})();
(void)(([&](){auto&& _n_array_9085=this->_n_land_8763;auto _n_index_9086=((_n_j_8861*_n_TW_8731)+_n_i_8862);auto _n_value_9087=_n_m_8871;d::put(_n_array_9085,_n_index_9086,_n_value_9087);return _n_value_9087;})());
(void)(([&](){auto&& _n_array_9088=this->_n_relief_8764;auto _n_index_9089=((_n_j_8861*_n_TW_8731)+_n_i_8862);auto _n_value_9090=_n_a_8863;d::put(_n_array_9088,_n_index_9089,_n_value_9090);return _n_value_9090;})());
}}
}}
this->_n_sprawl_8766=d::Array<float,true>(size_t((_n_TW_8731*_n_TH_8732)));
this->_n_core_8767=d::Array<float,true>(size_t((_n_TW_8731*_n_TH_8732)));
for(auto &&_n_item_9091:_n_CITIES_8746){d::check_cancel();auto _n_binding_9092=_n_item_9091;
double _n_lon_8872=d::at(_n_binding_9092,0.0);
double _n_lat_8873=d::at(_n_binding_9092,1.0);
double _n_s_8874=d::at(_n_binding_9092,2.0);
{
double _n_reach_8875=(8.0*_n_TS_8730);
double _n_ci_8876=(((_n_lon_8872+180.0)*_n_TS_8730)-0.5);
double _n_cj_8877=(((_n_LAT1_8729-_n_lat_8873)*_n_TS_8730)-0.5);
double _n_cl_8878=std::cos((_n_lat_8873*_n_DEG_8733));
double _n_sc_8879=((0.22+(0.25*_n_s_8874))*_n_TS_8730);
double _n_sb_8880=((1.4+(1.6*_n_s_8874))*_n_TS_8730);
{double _n_dj_8881=(-d::number(_n_reach_8875));
for(;d::truth((_n_dj_8881<=_n_reach_8875));(void)((_n_dj_8881++))){d::check_cancel();double _n_j_8882=(d::round(_n_cj_8877)+_n_dj_8881);
if((d::truth((_n_j_8882<0.0))||d::truth((_n_j_8882>=_n_TH_8732)))){d::check_cancel();continue;
}
{double _n_di_8883=(-d::number(_n_reach_8875));
for(;d::truth((_n_di_8883<=_n_reach_8875));(void)((_n_di_8883++))){d::check_cancel();double _n_i_8884=(d::round(_n_ci_8876)+_n_di_8883);
double _n_dx_8885=((_n_i_8884-_n_ci_8876)*_n_cl_8878);
double _n_dy_8886=(_n_j_8882-_n_cj_8877);
double _n_d2_8887=((_n_dx_8885*_n_dx_8885)+(_n_dy_8886*_n_dy_8886));
double _n_k_8888=((_n_j_8882*_n_TW_8731)+d::mod((d::mod(_n_i_8884,_n_TW_8731)+_n_TW_8731),_n_TW_8731));
(void)(([&](){auto&& _n_array_9093=this->_n_sprawl_8766;auto _n_index_9094=_n_k_8888;auto _n_value_9095=(d::at(_n_array_9093,_n_index_9094)+(_n_s_8874*std::exp(((-d::number(_n_d2_8887))/((2.0*_n_sb_8880)*_n_sb_8880)))));d::put(_n_array_9093,_n_index_9094,_n_value_9095);return _n_value_9095;})());
(void)(([&](){auto&& _n_array_9096=this->_n_core_8767;auto _n_index_9097=_n_k_8888;auto _n_value_9098=(d::at(_n_array_9096,_n_index_9097)+(_n_s_8874*std::exp(((-d::number(_n_d2_8887))/((2.0*_n_sc_8879)*_n_sc_8879)))));d::put(_n_array_9096,_n_index_9097,_n_value_9098);return _n_value_9098;})());
}}
}}

}
}
this->_n_lights_8768=d::Array<float,true>(size_t((_n_TW_8731*_n_TH_8732)));
{double _n_j_8889=0.0;
for(;d::truth((_n_j_8889<_n_TH_8732));(void)((_n_j_8889++))){d::check_cancel();{double _n_i_8890=0.0;
for(;d::truth((_n_i_8890<_n_TW_8731));(void)((_n_i_8890++))){d::check_cancel();double _n_k_8891=((_n_j_8889*_n_TW_8731)+_n_i_8890);
double _n_l_8892=_n_smooth_8751(0.35,0.8,d::at(this->_n_land_8763,_n_k_8891));
if(d::truth((!d::truth(_n_l_8892)))){d::check_cancel();continue;
}
double _n_gi_8893=double(d::i32(_n_i_8890)>>(d::u32(1.0)&31));
double _n_gj_8894=double(d::i32(_n_j_8889)>>(d::u32(1.0)&31));
double _n_town_8895=(d::truth(([&](){auto _n_left_9099=_n_hash_8747(_n_gi_8893,(_n_gj_8894+9001.0));auto _n_right_9100=(d::minimum({0.5,d::at(this->_n_sprawl_8766,_n_k_8891)})*0.08);return (_n_left_9099<_n_right_9100);})())?(0.15+(0.35*_n_hash_8747((_n_gi_8893+7.0),_n_gj_8894))):0.0);
(void)(([&](){auto&& _n_array_9101=this->_n_lights_8768;auto _n_index_9102=_n_k_8891;auto _n_value_9103=(_n_l_8892*d::minimum({1.3,((d::at(this->_n_core_8767,_n_k_8891)*1.2)+_n_town_8895)}));d::put(_n_array_9101,_n_index_9102,_n_value_9103);return _n_value_9103;})());
}}
}}
this->_n_onGlobe_8770=d::Array<uint8_t,true>(size_t(this->_n_N_8755));
this->_n_texI_8771=d::Array<float,true>(size_t(this->_n_N_8755));
this->_n_texJ_8772=d::Array<float,true>(size_t(this->_n_N_8755));
this->_n_depth_8773=d::Array<float,true>(size_t(this->_n_N_8755));
this->_n_toSun_8774=d::Array<float,true>(size_t(this->_n_N_8755));
this->_n_stars_8775=d::Array<float,true>(size_t(this->_n_N_8755));
{double _n_r_8908=0.0;
for(;d::truth((_n_r_8908<_n_H_8719));(void)((_n_r_8908++))){d::check_cancel();{double _n_x_8909=0.0;
for(;d::truth((_n_x_8909<_n_W_8718));(void)((_n_x_8909++))){d::check_cancel();double _n_k_8910=((_n_r_8908*_n_W_8718)+_n_x_8909);
double _n_sx_8911=(((_n_x_8909+0.5)-_n_CX_8720)/_n_R_8722);
double _n_sy_8912=((_n_CY_8721-(_n_r_8908+0.5))/_n_R_8722);
double _n_d_8913=d::hypot(std::initializer_list<double>{_n_sx_8911,_n_sy_8912});
(void)(([&](){auto&& _n_array_9104=this->_n_toSun_8774;auto _n_index_9105=_n_k_8910;auto _n_value_9106=d::hypot(std::initializer_list<double>{((_n_x_8909+0.5)-d::at(_n_SUN_8741,0.0)),((_n_r_8908+0.5)-d::at(_n_SUN_8741,1.0))});d::put(_n_array_9104,_n_index_9105,_n_value_9106);return _n_value_9106;})());
if(d::truth((_n_d_8913<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_9107=this->_n_onGlobe_8770;auto _n_index_9108=_n_k_8910;auto _n_value_9109=1.0;d::put(_n_array_9107,_n_index_9108,_n_value_9109);return _n_value_9109;})());
double _n_nz_8914=std::sqrt((1.0-(_n_d_8913*_n_d_8913)));
double _n_lat_8915=std::asin(((_n_sy_8912*d::at(_n_P_8738,1.0))+(_n_nz_8914*d::at(_n_P_8738,2.0))));
double _n_lon_8916=(_n_LON_C_8727+(std::atan2(_n_sx_8911,((_n_sy_8912*d::at(_n_G_8739,1.0))+(_n_nz_8914*d::at(_n_G_8739,2.0))))/_n_DEG_8733));
(void)(([&](){auto&& _n_array_9110=this->_n_texI_8771;auto _n_index_9111=_n_k_8910;auto _n_value_9112=(((_n_lon_8916+180.0)*_n_TS_8730)-0.5);d::put(_n_array_9110,_n_index_9111,_n_value_9112);return _n_value_9112;})());
(void)(([&](){auto&& _n_array_9113=this->_n_texJ_8772;auto _n_index_9114=_n_k_8910;auto _n_value_9115=(((_n_LAT1_8729-(_n_lat_8915/_n_DEG_8733))*_n_TS_8730)-0.5);d::put(_n_array_9113,_n_index_9114,_n_value_9115);return _n_value_9115;})());
(void)(([&](){auto&& _n_array_9116=this->_n_depth_8773;auto _n_index_9117=_n_k_8910;auto _n_value_9118=((1.0-_n_d_8913)*_n_R_8722);d::put(_n_array_9116,_n_index_9117,_n_value_9118);return _n_value_9118;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_9119=this->_n_depth_8773;auto _n_index_9120=_n_k_8910;auto _n_value_9121=((_n_d_8913-1.0)*_n_R_8722);d::put(_n_array_9119,_n_index_9120,_n_value_9121);return _n_value_9121;})());
if(d::truth((_n_hash_8747(_n_x_8909,((_n_r_8908*3.0)+11.0))>0.986))){d::check_cancel();(void)(([&](){auto&& _n_array_9122=this->_n_stars_8775;auto _n_index_9123=_n_k_8910;auto _n_value_9124=(0.3+(0.6*std::pow(_n_hash_8747(_n_r_8908,(_n_x_8909+5.0)),2.0)));d::put(_n_array_9122,_n_index_9123,_n_value_9124);return _n_value_9124;})());
}
}
}}
}}
this->_n_HUBS_8776=d::filter(d::map(_n_CITIES_8746,[&]( d::Array<double,false> _a0,double _a1) mutable ->double{d::Array<double,false> _n_c_8917=_a0;
double _n_i_8918=_a1;
return (d::truth((d::at(_n_c_8917,2.0)>=0.5))?_n_i_8918:(-d::number(1.0)));}),[&]( double _a0) mutable ->bool{double _n_i_8919=_a0;
return (_n_i_8919>=0.0);});
this->_n_unit_8777=d::map(_n_CITIES_8746,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{auto _n_binding_9125=_a0;
double _n_lon_8920=d::at(_n_binding_9125,0.0);
double _n_lat_8921=d::at(_n_binding_9125,1.0);
return d::Array<double,false>{([&](){auto _n_left_9126=std::cos((_n_lat_8921*_n_DEG_8733));auto _n_right_9127=std::cos((_n_lon_8920*_n_DEG_8733));return (_n_left_9126*_n_right_9127);})(),([&](){auto _n_left_9128=std::cos((_n_lat_8921*_n_DEG_8733));auto _n_right_9129=std::sin((_n_lon_8920*_n_DEG_8733));return (_n_left_9128*_n_right_9129);})(),std::sin((_n_lat_8921*_n_DEG_8733))};});
this->_n_near_8778=d::map(_n_CITIES_8746,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::Array<double,false>{d::Array<double,false> _n___8922=_a0;
double _n_a_8923=_a1;
{
d::Array<double,false> _n_list_8924=d::Array<double,false>{};
for(auto &&_n_item_9130:this->_n_HUBS_8776){d::check_cancel();double _n_b_8925=_n_item_9130;
{
double _n_w_8926=std::acos(d::minimum({1.0,(((d::at(d::at(this->_n_unit_8777,_n_a_8923),0.0)*d::at(d::at(this->_n_unit_8777,_n_b_8925),0.0))+(d::at(d::at(this->_n_unit_8777,_n_a_8923),1.0)*d::at(d::at(this->_n_unit_8777,_n_b_8925),1.0)))+(d::at(d::at(this->_n_unit_8777,_n_a_8923),2.0)*d::at(d::at(this->_n_unit_8777,_n_b_8925),2.0)))}));
if((d::truth((_n_w_8926>0.1))&&d::truth((_n_w_8926<0.5)))){d::check_cancel();(void)(_n_list_8924.push(_n_b_8925));
}

}
}
return _n_list_8924;

}
});
this->_n_tmp_8780=d::Array<double,true>(size_t(3.0));
this->_n_aO_8782=d::Array<float,true>(size_t(this->_n_N_8755));
this->_n_aT_8783=d::Array<float,true>(size_t(this->_n_N_8755));
this->_n_A_8787=d::Array<double,true>(size_t(3.0));
this->_n_B_8788=d::Array<double,true>(size_t(3.0));
this->_n_LAND_T_8790=1.1;
_render=[=]( double _a0,std::shared_ptr<_n_Record_9069> _a1) mutable ->d::String{double _n_t_9021=_a0;
auto _n_binding_9133=(d::present(_a1)?_a1:([&](){auto _n_object_9132=std::make_shared<_n_Record_9069>();return _n_object_9132;})());
std::optional<d::Array<uint8_t,true>> _n_color_9022=_n_binding_9133->_p_color;
{
double _n_spinT_9023=(((_n_t_9021/_n_DAY_8723)*360.0)*_n_TS_8730);
double _n_flare_9024=(1.0+(0.08*std::sin((((_n_t_9021/12.0)*ascii::PI)*2.0))));
(void)((this->_n_aO_8782.fill(0.0),this->_n_aT_8783.fill(0.0)));
{double _n_s_9025=0.0;
for(;d::truth((_n_s_9025<_n_SLOTS_8724));(void)((_n_s_9025++))){d::check_cancel();(void)(this->_n_request_8791(_n_s_9025,_n_t_9021));
}}
{double _n_r_9026=0.0;
for(;d::truth((_n_r_9026<_n_H_8719));(void)((_n_r_9026++))){d::check_cancel();{double _n_x_9027=0.0;
for(;d::truth((_n_x_9027<_n_W_8718));(void)((_n_x_9027++))){d::check_cancel();double _n_k_9028=((_n_r_9026*_n_W_8718)+_n_x_9027);
double _n_e_9029=d::at(this->_n_depth_8773,_n_k_9028);
double _n_ds_9030=d::at(this->_n_toSun_8774,_n_k_9028);
double _n_dawn_9031=std::exp(((-d::number(_n_ds_9030))/30.0));
double _n_warm_9032=std::exp(((-d::number(_n_ds_9030))/85.0));
double _n_cr_9033=0.0;
double _n_cg_9034=0.0;
double _n_cb_9035=0.0;
double _n_floor_9036=0.0;
if(d::truth(d::at(this->_n_onGlobe_8770,_n_k_9028))){d::check_cancel();double _n_fi_9037=(d::at(this->_n_texI_8771,_n_k_9028)-_n_spinT_9023);
double _n_fj_9038=d::at(this->_n_texJ_8772,_n_k_9028);
double _n_l_9039=this->_n_sample_8769(this->_n_land_8763,_n_fi_9037,_n_fj_9038);
double _n_rl_9040=this->_n_sample_8769(this->_n_relief_8764,_n_fi_9037,_n_fj_9038);
double _n_tone_9041=(0.75+(0.6*_n_rl_9040));
(void)((_n_cr_9033=_n_mix_8752(0.005,(0.04*_n_tone_9041),_n_l_9039)));
(void)((_n_cg_9034=_n_mix_8752(0.01,(0.045*_n_tone_9041),_n_l_9039)));
(void)((_n_cb_9035=_n_mix_8752(0.03,(0.06*_n_tone_9041),_n_l_9039)));
double _n_li_9042=this->_n_sample_8769(this->_n_lights_8768,_n_fi_9037,_n_fj_9038);
if(d::truth((_n_li_9042>0.01))){d::check_cancel();double _n_g_9043=d::minimum({1.2,(_n_li_9042*1.25)});
(void)((((_n_cr_9033=(_n_cr_9033+(_n_g_9043*0.95))),(_n_cg_9034=(_n_cg_9034+(_n_g_9043*(0.6+(0.25*_n_g_9043)))))),(_n_cb_9035=(_n_cb_9035+(_n_g_9043*(0.22+((0.35*_n_g_9043)*_n_g_9043)))))));
}
double _n_edge_9044=(std::exp(((-d::number(_n_e_9029))/1.2))*0.6);
double _n_haze_9045=(std::exp(((-d::number(_n_e_9029))/6.0))*0.07);
double _n_dim_9046=(1.0-(0.45*std::exp(((-d::number(_n_e_9029))/5.0))));
(void)((_n_cr_9033=([&](){auto _n_left_9134=((_n_cr_9033*_n_dim_9046)+(_n_edge_9044*_n_mix_8752(0.12,(d::at(_n_ORANGE_8742,0.0)*1.1),_n_warm_9032)));auto _n_right_9135=(_n_haze_9045*_n_mix_8752(0.15,0.9,_n_warm_9032));return (_n_left_9134+_n_right_9135);})()));
(void)((_n_cg_9034=([&](){auto _n_left_9136=((_n_cg_9034*_n_dim_9046)+(_n_edge_9044*_n_mix_8752(0.2,(d::at(_n_ORANGE_8742,1.0)*1.1),_n_warm_9032)));auto _n_right_9137=(_n_haze_9045*_n_mix_8752(0.25,0.45,_n_warm_9032));return (_n_left_9136+_n_right_9137);})()));
(void)((_n_cb_9035=([&](){auto _n_left_9138=((_n_cb_9035*_n_dim_9046)+(_n_edge_9044*_n_mix_8752(0.45,d::at(_n_ORANGE_8742,2.0),_n_warm_9032)));auto _n_right_9139=(_n_haze_9045*_n_mix_8752(0.6,0.12,_n_warm_9032));return (_n_left_9138+_n_right_9139);})()));
double _n_sl_9047=([&](){auto _n_left_9140=(std::exp(((-d::number(_n_ds_9030))/8.0))*0.4);auto _n_right_9141=std::exp(((-d::number(_n_e_9029))/4.0));return (_n_left_9140*_n_right_9141);})();
(void)((((_n_cr_9033=(_n_cr_9033+(_n_sl_9047*0.95))),(_n_cg_9034=(_n_cg_9034+(_n_sl_9047*0.55)))),(_n_cb_9035=(_n_cb_9035+(_n_sl_9047*0.2)))));
(void)((_n_floor_9036=0.06));
}else {d::check_cancel();double _n_rim_9048=([&](){auto _n_left_9142=(std::exp(((-d::number(_n_e_9029))/1.3))*0.85);auto _n_right_9143=(std::exp(((-d::number(_n_e_9029))/5.0))*0.2);return (_n_left_9142+_n_right_9143);})();
double _n_w_9049=_n_clamp_8750((_n_warm_9032*1.25));
(void)((_n_cr_9033=(0.004+(_n_rim_9048*_n_mix_8752(0.07,d::at(_n_ORANGE_8742,0.0),_n_w_9049)))));
(void)((_n_cg_9034=(0.007+(_n_rim_9048*_n_mix_8752(0.13,d::at(_n_ORANGE_8742,1.0),_n_w_9049)))));
(void)((_n_cb_9035=(0.02+(_n_rim_9048*_n_mix_8752(0.34,d::at(_n_ORANGE_8742,2.0),_n_w_9049)))));
double _n_st_9050=d::at(this->_n_stars_8775,_n_k_9028);
if(d::truth(_n_st_9050)){d::check_cancel();double _n_tw_9051=(0.7+(0.3*std::sin((((((_n_t_9021/24.0)*ascii::PI)*2.0)*(1.0+double(d::i32((_n_k_9028*7.0))&d::i32(3.0))))+_n_k_9028))));
double _n_s_9052=(((_n_st_9050*_n_tw_9051)*_n_smooth_8751(4.0,14.0,_n_e_9029))*(1.0-_n_dawn_9031));
(void)((((_n_cr_9033=d::maximum({_n_cr_9033,(_n_s_9052*0.85)})),(_n_cg_9034=d::maximum({_n_cg_9034,(_n_s_9052*0.9)}))),(_n_cb_9035=d::maximum({_n_cb_9035,_n_s_9052}))));
}
}
double _n_dx_9053=((_n_x_9027+0.5)-d::at(_n_SUN_8741,0.0));
double _n_dy_9054=((_n_r_9026+0.5)-d::at(_n_SUN_8741,1.0));
double _n_tan_9055=([&](){auto _n_left_9144=((-d::number(_n_dx_9053))*std::sin(_n_SUN_A_8740));auto _n_right_9145=(_n_dy_9054*std::cos(_n_SUN_A_8740));return (_n_left_9144-_n_right_9145);})();
double _n_across_9056=([&](){auto _n_left_9146=(_n_dx_9053*std::cos(_n_SUN_A_8740));auto _n_right_9147=(_n_dy_9054*std::sin(_n_SUN_A_8740));return (_n_left_9146-_n_right_9147);})();
double _n_streak_9057=(([&](){auto _n_left_9148=std::exp((-d::number(std::pow((_n_across_9056/0.8),2.0))));auto _n_right_9149=std::exp(((-d::number(std::fabs(_n_tan_9055)))/26.0));return (_n_left_9148*_n_right_9149);})()*0.8);
double _n_sun_9058=(([&](){auto _n_left_9150=(std::exp(((-d::number(_n_ds_9030))/1.2))*2.6);auto _n_right_9151=(std::exp(((-d::number(_n_ds_9030))/4.0))*0.55);return (_n_left_9150+_n_right_9151);})()*_n_flare_9024);
(void)((((_n_cr_9033=(_n_cr_9033+(_n_sun_9058+_n_streak_9057))),(_n_cg_9034=(_n_cg_9034+((_n_sun_9058*0.85)+(_n_streak_9057*0.62))))),(_n_cb_9035=(_n_cb_9035+((_n_sun_9058*0.62)+(_n_streak_9057*0.22))))));
double _n_req_9059=(d::at(this->_n_aO_8782,_n_k_9028)+d::at(this->_n_aT_8783,_n_k_9028));
double _n_pin_9060=(-d::number(1.0));
if(d::truth((_n_req_9059>0.02))){d::check_cancel();double _n_cover_9061=(1.0-(0.75*d::minimum({1.0,(_n_req_9059*1.5)})));
(void)((_n_cr_9033=(((_n_cr_9033*_n_cover_9061)+(d::at(this->_n_aO_8782,_n_k_9028)*d::at(_n_ORANGE_8742,0.0)))+(d::at(this->_n_aT_8783,_n_k_9028)*d::at(_n_TANGERINE_8743,0.0)))));
(void)((_n_cg_9034=(((_n_cg_9034*_n_cover_9061)+(d::at(this->_n_aO_8782,_n_k_9028)*d::at(_n_ORANGE_8742,1.0)))+(d::at(this->_n_aT_8783,_n_k_9028)*d::at(_n_TANGERINE_8743,1.0)))));
(void)((_n_cb_9035=(((_n_cb_9035*_n_cover_9061)+(d::at(this->_n_aO_8782,_n_k_9028)*d::at(_n_ORANGE_8742,2.0)))+(d::at(this->_n_aT_8783,_n_k_9028)*d::at(_n_TANGERINE_8743,2.0)))));
if(d::truth((_n_req_9059>0.06))){d::check_cancel();(void)((_n_pin_9060=(d::truth((d::at(this->_n_aO_8782,_n_k_9028)>=d::at(this->_n_aT_8783,_n_k_9028)))?this->_n_I_ORANGE_8757:this->_n_I_TANGERINE_8758)));
}
}
double _n_peak_9062=d::maximum({_n_cr_9033,_n_cg_9034,_n_cb_9035,0.0001});
double _n_level_9063=_n_clamp_8750((_n_floor_9036+(((1.0-_n_floor_9036)*std::pow(_n_peak_9062,0.85))*0.98)));
double _n_step_9064=([&](){auto _n_argument_9152=0.0;auto _n_argument_9153=([&](){auto _n_argument_9154=3.0;auto _n_argument_9155=d::round(((_n_level_9063*3.0)+d::at(_n_BAYER_8736,((double(d::i32(_n_r_9026)&d::i32(3.0))*4.0)+double(d::i32(_n_x_9027)&d::i32(3.0))))));return d::minimum({_n_argument_9154,_n_argument_9155});})();return d::maximum({_n_argument_9152,_n_argument_9153});})();
(void)(([&](){auto&& _n_array_9156=this->_n_out_8756;auto _n_index_9157=_n_k_9028;auto _n_value_9158=d::at(_n_DOTS_8734,_n_step_9064);d::put(_n_array_9156,_n_index_9157,_n_value_9158);return _n_value_9158;})());
if(d::truth(_n_color_9022)){d::check_cancel();if((d::truth((_n_pin_9060>=0.0))&&d::truth(_n_step_9064))){d::check_cancel();(void)(([&](){auto&& _n_array_9159=d::read(_n_color_9022);auto _n_index_9160=_n_k_9028;auto _n_value_9161=_n_pin_9060;d::put(_n_array_9159,_n_index_9160,_n_value_9161);return _n_value_9161;})());
}else {d::check_cancel();double _n_want_9065=(d::truth(_n_step_9064)?d::minimum({1.0,((_n_level_9063+0.06)/d::at(_n_COVER_8735,_n_step_9064))}):0.0);
double _n_s_9066=(d::minimum({(0.3+(0.7*_n_want_9065)),(0.22+(_n_peak_9062*2.2))})/_n_peak_9062);
(void)(([&](){auto&& _n_array_9162=d::read(_n_color_9022);auto _n_index_9163=_n_k_9028;auto _n_value_9164=([&](){auto _n_argument_9165=_n_clamp_8750((_n_cr_9033*_n_s_9066));auto _n_argument_9166=_n_clamp_8750((_n_cg_9034*_n_s_9066));auto _n_argument_9167=_n_clamp_8750((_n_cb_9035*_n_s_9066));return this->_n_nearest_8760(_n_argument_9165,_n_argument_9166,_n_argument_9167);})();d::put(_n_array_9162,_n_index_9163,_n_value_9164);return _n_value_9164;})());
}
}
}}
}}
d::Array<d::String,false> _n_lines_9067=d::Array<d::String,false>{};
{double _n_r_9068=0.0;
for(;d::truth((_n_r_9068<_n_H_8719));(void)((_n_r_9068++))){d::check_cancel();(void)(_n_lines_9067.push(d::join(this->_n_out_8756.slice((_n_r_9068*_n_W_8718),((_n_r_9068+1.0)*_n_W_8718)),d::String(u""))));
}}
return d::join(_n_lines_9067,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("edge-orbit").cols)*ascii::catalog_meta("edge-orbit").rows);auto _env=std::make_shared<_n_Record_9069>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &edge_orbit_meta(){return catalog_meta("edge-orbit");}
std::unique_ptr<Piece> make_edge_orbit(const AsciiPieceOptions &o){return std::make_unique<Native_edge_orbit>(o);}
}
