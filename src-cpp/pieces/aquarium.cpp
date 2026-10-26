// Direct, statically typed C++ from src/pieces/aquarium.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_1207;
struct _n_Record_1222;
struct _n_Record_1290;
struct _n_Record_1294;
struct _n_Record_1207{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_1207> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1207>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_1222{
d::Array<d::String,false> _p_art{};
d::Array<d::String,false> _p_back{};
d::Array<d::String,false> _p_turn{};
double _p_row{};
double _p_from{};
double _p_to{};
double _p_period{};
double _p_phase{};
double _p_drift{};
double _p_dp{};
static std::shared_ptr<_n_Record_1222> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1222>();out->_p_art=d::decode<d::Array<d::String,false>>(j["art"]);out->_p_back=d::decode<d::Array<d::String,false>>(j["back"]);out->_p_turn=d::decode<d::Array<d::String,false>>(j["turn"]);out->_p_row=d::decode<double>(j["row"]);out->_p_from=d::decode<double>(j["from"]);out->_p_to=d::decode<double>(j["to"]);out->_p_period=d::decode<double>(j["period"]);out->_p_phase=d::decode<double>(j["phase"]);out->_p_drift=d::decode<double>(j["drift"]);out->_p_dp=d::decode<double>(j["dp"]);return out;}
};
struct _n_Record_1290{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_1290> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1290>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_1294{
d::String _p_symbol_3c{};
d::String _p_symbol_3e{};
d::String _p_symbol_28{};
d::String _p_symbol_29{};
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_60{};
d::String _p_symbol_27{};
d::String _p_symbol_7b{};
d::String _p_symbol_7d{};
static std::shared_ptr<_n_Record_1294> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_1294>();out->_p_symbol_3c=d::decode<d::String>(j["<"]);out->_p_symbol_3e=d::decode<d::String>(j[">"]);out->_p_symbol_28=d::decode<d::String>(j["("]);out->_p_symbol_29=d::decode<d::String>(j[")"]);out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_60=d::decode<d::String>(j["`"]);out->_p_symbol_27=d::decode<d::String>(j["'"]);out->_p_symbol_7b=d::decode<d::String>(j["{"]);out->_p_symbol_7d=d::decode<d::String>(j["}"]);return out;}
};
double _n_hash_1214(double _a0,double _a1);
d::Array<d::String,false> _n_mirror_1215(d::Array<d::String,false> _a0);
std::shared_ptr<_n_Record_1207> _n_meta_1206=[](){return ([&](){auto _n_object_1293=std::make_shared<_n_Record_1207>();_n_object_1293->_p_name=d::String(u"aquarium");_n_object_1293->_p_category=d::String(u"creatures");_n_object_1293->_p_note=d::String(u"fish swimming and turning in a tank, bubbles and weed");_n_object_1293->_p_cols=60.0;_n_object_1293->_p_rows=20.0;_n_object_1293->_p_fps=15.0;return _n_object_1293;})();}();
const double _n_LOOP_1208=[](){return 48.0;}();
d::Dict<d::String,d::String> _n_FLIP_1209=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_1295;_n_dictionary_1295.set(d::String(u"<"),d::String(u">"));_n_dictionary_1295.set(d::String(u">"),d::String(u"<"));_n_dictionary_1295.set(d::String(u"("),d::String(u")"));_n_dictionary_1295.set(d::String(u")"),d::String(u"("));_n_dictionary_1295.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_1295.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_1295.set(d::String(u"`"),d::String(u"'"));_n_dictionary_1295.set(d::String(u"'"),d::String(u"`"));_n_dictionary_1295.set(d::String(u"{"),d::String(u"}"));_n_dictionary_1295.set(d::String(u"}"),d::String(u"{"));return _n_dictionary_1295;})();}();
d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>,false> _n_FISH_1210=[](){return d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>,false>{std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"><>")},d::Array<d::String,false>{d::String(u"<o>")},5.2,6.0,54.0,12.0,0.8,1.5,1.0),std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"><>")},d::Array<d::String,false>{d::String(u"<o>")},6.6,3.0,51.0,12.0,0.775,1.5,1.1),std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"><>")},d::Array<d::String,false>{d::String(u"<o>")},8.0,8.0,56.0,12.0,0.79,1.5,0.9),std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"><(((°>")},d::Array<d::String,false>{d::String(u"<(°o°)>")},3.3,3.0,50.0,24.0,0.1,1.2,1.0),std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"><(°>")},d::Array<d::String,false>{d::String(u"(°o°)")},15.6,4.0,40.0,48.0,0.55,0.4,3.0),std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"    /\\"),d::String(u" ><(  °>"),d::String(u"    \\/")},d::Array<d::String,false>{d::String(u"/^\\"),d::String(u"(°o°)"),d::String(u"\\v/")},9.8,10.0,51.0,24.0,0.35,0.9,4.0),std::make_shared<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>>(d::Array<d::String,false>{d::String(u"   _.-._"),d::String(u"><(     °)"),d::String(u"   `-.-'")},d::Array<d::String,false>{d::String(u".-^-."),d::String(u"(°o°)"),d::String(u"`-v-'")},12.8,2.0,46.0,16.0,0.6,0.9,4.0)};}();
d::Array<std::shared_ptr<std::tuple<double,d::Array<std::array<double,2>,false>,double>>,false> _n_WEEDS_1211=[](){return d::Array<std::shared_ptr<std::tuple<double,d::Array<std::array<double,2>,false>,double>>,false>{std::make_shared<std::tuple<double,d::Array<std::array<double,2>,false>,double>>(6.0,d::Array<std::array<double,2>,false>{std::array<double,2>{11.0,0.6},std::array<double,2>{8.0,(-d::number(1.6))},std::array<double,2>{6.0,2.0}},0.0),std::make_shared<std::tuple<double,d::Array<std::array<double,2>,false>,double>>(13.0,d::Array<std::array<double,2>,false>{std::array<double,2>{6.0,1.2},std::array<double,2>{4.0,(-d::number(1.2))}},1.7),std::make_shared<std::tuple<double,d::Array<std::array<double,2>,false>,double>>(25.0,d::Array<std::array<double,2>,false>{std::array<double,2>{4.0,(-d::number(1.0))},std::array<double,2>{3.0,1.0}},0.9),std::make_shared<std::tuple<double,d::Array<std::array<double,2>,false>,double>>(37.0,d::Array<std::array<double,2>,false>{std::array<double,2>{9.0,1.2},std::array<double,2>{6.0,(-d::number(1.4))},std::array<double,2>{4.0,2.2}},2.4),std::make_shared<std::tuple<double,d::Array<std::array<double,2>,false>,double>>(55.0,d::Array<std::array<double,2>,false>{std::array<double,2>{7.0,(-d::number(1.2))},std::array<double,2>{5.0,0.8}},0.4)};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_STONE_1212=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(15.0,43.0,d::String(u" .--._")),std::make_shared<std::tuple<double,double,d::String>>(16.0,42.0,d::String(u"(  .  `)"))};}();
const double _n_NOZZLE_1213=[](){return 46.0;}();
double _n_hash_1214(double _a0,double _a1){double _n_a_1224=_a0;
double _n_b_1225=_a1;
{
double _n_h_1226=([&](){auto _n_left_1296=d::imul(_n_a_1224,668265261.0);auto _n_right_1297=d::imul(_n_b_1225,374761393.0);return double(d::i32(_n_left_1296)^d::i32(_n_right_1297));})();
(void)((_n_h_1226=d::imul(double(d::i32(_n_h_1226)^d::i32(double(d::u32(_n_h_1226)>>(d::u32(15.0)&31)))),2246822507.0)));
(void)((_n_h_1226=d::imul(double(d::i32(_n_h_1226)^d::i32(double(d::u32(_n_h_1226)>>(d::u32(13.0)&31)))),3266489909.0)));
return (double(d::u32(double(d::i32(_n_h_1226)^d::i32(double(d::u32(_n_h_1226)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

d::Array<d::String,false> _n_mirror_1215(d::Array<d::String,false> _a0){d::Array<d::String,false> _n_art_1227=_a0;
{
double _n_w_1228=([&](){d::Array<double> _n_numbers_1298;for(auto _x:d::map(_n_art_1227,[&]( d::String _a0) mutable ->double{d::String _n_l_1229=_a0;
return double(_n_l_1229.size());}))_n_numbers_1298.push(_x);return d::maximum(_n_numbers_1298);})();
return d::map(_n_art_1227,[&]( d::String _a0) mutable ->d::String{d::String _n_l_1230=_a0;
return d::join(d::map(([&](){d::Array<d::String,false> _n_array_1299;for(const auto &_v:d::padEnd(_n_l_1230,_n_w_1228))_n_array_1299.push(_v);return _n_array_1299;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_1231=_a0;
return ([&]()->d::String{auto _n_logical_1300=_n_FLIP_1209.get(_n_c_1231);return d::truth(_n_logical_1300)?_n_logical_1300:_n_c_1231;})();}),d::String(u""));});

}
}

struct Native_aquarium final:ascii::Piece{
double _n_cols_1216{};
double _n_rows_1217{};
double _n_TAU_1218{};
double _n_SURFACE_1219{};
double _n_FLOOR_1220{};
d::Array<std::shared_ptr<_n_Record_1222>,false> _n_fish_1221{};
d::Array<d::Array<d::String,false>,false> _n_gravel_1223{};
std::function<d::String(double,std::shared_ptr<_n_Record_1290>)> _render;

explicit Native_aquarium(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_1301=_n_meta_1206;
this->_n_cols_1216=_n_binding_1301->_p_cols;
this->_n_rows_1217=_n_binding_1301->_p_rows;
this->_n_TAU_1218=(ascii::PI*2.0);
this->_n_SURFACE_1219=1.0;
this->_n_FLOOR_1220=17.0;
this->_n_fish_1221=d::map(_n_FISH_1210,[&]( std::shared_ptr<std::tuple<d::Array<d::String,false>,d::Array<d::String,false>,double,double,double,double,double,double,double>> _a0) mutable ->std::shared_ptr<_n_Record_1222>{auto _n_binding_1302=_a0;
d::Array<d::String,false> _n_art_1232=std::get<0>(*_n_binding_1302);
d::Array<d::String,false> _n_turn_1233=std::get<1>(*_n_binding_1302);
double _n_row_1234=std::get<2>(*_n_binding_1302);
double _n_from_1235=std::get<3>(*_n_binding_1302);
double _n_to_1236=std::get<4>(*_n_binding_1302);
double _n_period_1237=std::get<5>(*_n_binding_1302);
double _n_phase_1238=std::get<6>(*_n_binding_1302);
double _n_drift_1239=std::get<7>(*_n_binding_1302);
double _n_dp_1240=std::get<8>(*_n_binding_1302);
return ([&](){auto _n_object_1305=std::make_shared<_n_Record_1222>();_n_object_1305->_p_art=_n_art_1232;_n_object_1305->_p_back=_n_mirror_1215(_n_art_1232);_n_object_1305->_p_turn=_n_turn_1233;_n_object_1305->_p_row=_n_row_1234;_n_object_1305->_p_from=_n_from_1235;_n_object_1305->_p_to=_n_to_1236;_n_object_1305->_p_period=_n_period_1237;_n_object_1305->_p_phase=_n_phase_1238;_n_object_1305->_p_drift=_n_drift_1239;_n_object_1305->_p_dp=_n_dp_1240;return _n_object_1305;})();});
this->_n_gravel_1223=d::map(d::Array<double,false>{0.0,1.0},[&]( double _a0) mutable ->d::Array<d::String,false>{double _n_k_1241=_a0;
return d::Array<d::String,false>(d::from((this->_n_cols_1216-2.0),[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_c_1243=_a1;
{
double _n_n_1244=_n_hash_1214(_n_c_1243,(_n_k_1241+3.0));
return (d::truth(_n_k_1241)?(d::truth((_n_n_1244<0.14))?d::String(u"o"):(d::truth((_n_n_1244<0.2))?d::String(u"O"):(d::truth((_n_n_1244<0.27))?d::String(u"°"):(d::truth((_n_n_1244<0.4))?d::String(u"."):d::String(u" "))))):(d::truth((_n_n_1244<0.55))?d::String(u"."):(d::truth((_n_n_1244<0.75))?d::String(u","):d::String(u"·"))));

}
}));});
_render=[=]( double _a0,std::shared_ptr<_n_Record_1290> _a1) mutable ->d::String{double _n_t_1245=_a0;
{
double _n_u_1246=d::mod((d::mod(_n_t_1245,_n_LOOP_1208)+_n_LOOP_1208),_n_LOOP_1208);
d::Array<d::Array<d::String,false>,false> _n_g_1247=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_1217,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_1216)).fill(d::String(u" "));}));
auto _n_put_1248=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_r_1249=_a0;
double _n_c_1250=_a1;
d::String _n_s_1251=_a2;
{
if((d::truth((_n_r_1249<=this->_n_SURFACE_1219))||d::truth((_n_r_1249>=(this->_n_rows_1217-1.0))))){d::check_cancel();return;
}
{double _n_i_1252=([&](){auto _n_argument_1306=0.0;auto _n_argument_1307=d::search(_n_s_1251,d::Regex(u"\\S",u""));return d::maximum({_n_argument_1306,_n_argument_1307});})();
for(;d::truth((_n_i_1252<double(d::trim(_n_s_1251,false,true).size())));(void)((_n_i_1252++))){d::check_cancel();if((d::truth(((_n_c_1250+_n_i_1252)>0.0))&&d::truth(((_n_c_1250+_n_i_1252)<(this->_n_cols_1216-1.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_1308=d::at(_n_g_1247,_n_r_1249);auto _n_index_1309=(_n_c_1250+_n_i_1252);auto _n_value_1310=d::at(_n_s_1251,_n_i_1252);d::put(_n_array_1308,_n_index_1309,_n_value_1310);return _n_value_1310;})());
}
}}

}
};
(void)(([&](){auto&& _n_array_1311=_n_g_1247;auto _n_index_1312=0.0;auto _n_value_1313=([&](){d::Array<d::String,false> _n_array_1314;_n_array_1314.push(d::String(u"┌"));for(const auto &_v:d::repeat(d::String(u"─"),(this->_n_cols_1216-2.0)))_n_array_1314.push(_v);_n_array_1314.push(d::String(u"┐"));return _n_array_1314;})();d::put(_n_array_1311,_n_index_1312,_n_value_1313);return _n_value_1313;})());
(void)(([&](){auto&& _n_array_1315=_n_g_1247;auto _n_index_1316=(this->_n_rows_1217-1.0);auto _n_value_1317=([&](){d::Array<d::String,false> _n_array_1318;_n_array_1318.push(d::String(u"└"));for(const auto &_v:d::repeat(d::String(u"─"),(this->_n_cols_1216-2.0)))_n_array_1318.push(_v);_n_array_1318.push(d::String(u"┘"));return _n_array_1318;})();d::put(_n_array_1315,_n_index_1316,_n_value_1317);return _n_value_1317;})());
{double _n_r_1253=1.0;
for(;d::truth((_n_r_1253<(this->_n_rows_1217-1.0)));(void)((_n_r_1253++))){d::check_cancel();(void)(([&](){auto&& _n_array_1319=d::at(_n_g_1247,_n_r_1253);auto _n_index_1320=0.0;auto _n_value_1321=([&](){auto&& _n_array_1322=d::at(_n_g_1247,_n_r_1253);auto _n_index_1323=(this->_n_cols_1216-1.0);auto _n_value_1324=d::String(u"│");d::put(_n_array_1322,_n_index_1323,_n_value_1324);return _n_value_1324;})();d::put(_n_array_1319,_n_index_1320,_n_value_1321);return _n_value_1321;})());
}}
{double _n_c_1254=1.0;
for(;d::truth((_n_c_1254<(this->_n_cols_1216-1.0)));(void)((_n_c_1254++))){d::check_cancel();(void)(([&](){auto&& _n_array_1325=d::at(_n_g_1247,this->_n_SURFACE_1219);auto _n_index_1326=_n_c_1254;auto _n_value_1327=(d::truth((([&](){auto _n_left_1328=std::sin(((_n_c_1254*0.55)-((_n_u_1246*this->_n_TAU_1218)/4.0)));auto _n_right_1329=(0.5*std::sin(((_n_c_1254*0.23)+((_n_u_1246*this->_n_TAU_1218)/6.0))));return (_n_left_1328+_n_right_1329);})()>0.3))?d::String(u"~"):d::String(u"-"));d::put(_n_array_1325,_n_index_1326,_n_value_1327);return _n_value_1327;})());
}}
{double _n_k_1255=0.0;
for(;d::truth((_n_k_1255<2.0));(void)((_n_k_1255++))){d::check_cancel();{double _n_c_1256=1.0;
for(;d::truth((_n_c_1256<(this->_n_cols_1216-1.0)));(void)((_n_c_1256++))){d::check_cancel();(void)(([&](){auto&& _n_array_1330=d::at(_n_g_1247,(this->_n_FLOOR_1220+_n_k_1255));auto _n_index_1331=_n_c_1256;auto _n_value_1332=d::at(d::at(this->_n_gravel_1223,_n_k_1255),(_n_c_1256-1.0));d::put(_n_array_1330,_n_index_1331,_n_value_1332);return _n_value_1332;})());
}}
}}
auto _n_weed_1257=[&]( std::shared_ptr<std::tuple<double,d::Array<std::array<double,2>,false>,double>> _a0) mutable ->void{auto _n_binding_1333=_a0;
double _n_c0_1258=std::get<0>(*_n_binding_1333);
d::Array<std::array<double,2>,false> _n_blades_1259=std::get<1>(*_n_binding_1333);
double _n_ph_1260=std::get<2>(*_n_binding_1333);
{
for(auto &&_n_item_1334:_n_blades_1259){d::check_cancel();auto _n_binding_1335=_n_item_1334;
double _n_h_1261=d::at(_n_binding_1335,0.0);
double _n_lean_1262=d::at(_n_binding_1335,1.0);
{
double _n_px_1263=(_n_c0_1258+0.5);
{double _n_k_1264=1.0;
for(;d::truth((_n_k_1264<=_n_h_1261));(void)((_n_k_1264++))){d::check_cancel();double _n_f_1265=(_n_k_1264/_n_h_1261);
double _n_sway_1266=(1.4*std::sin((((((_n_u_1246*this->_n_TAU_1218)/6.0)+_n_ph_1260)-(_n_f_1265*0.7))+(_n_lean_1262*0.2))));
double _n_x_1267=(((_n_c0_1258+0.5)+(_n_lean_1262*std::pow(_n_f_1265,1.5)))+((_n_sway_1266*_n_f_1265)*_n_f_1265));
double _n_d_1268=(_n_x_1267-_n_px_1263);
(void)(([&](){auto _n_argument_1336=(this->_n_FLOOR_1220-_n_k_1264);auto _n_argument_1337=std::floor(_n_x_1267);auto _n_argument_1338=(d::truth((_n_d_1268>0.5))?d::String(u"/"):(d::truth((_n_d_1268>0.17))?d::String(u"("):(d::truth((_n_d_1268<(-d::number(0.5))))?d::String(u"\\"):(d::truth((_n_d_1268<(-d::number(0.17))))?d::String(u")"):d::String(u"|")))));return _n_put_1248(_n_argument_1336,_n_argument_1337,_n_argument_1338);})());
(void)((_n_px_1263=_n_x_1267));
}}

}
}

}
};
(void)(d::forEach(_n_WEEDS_1211.slice(0.0,(-d::number(1.0))),_n_weed_1257));
(void)(d::forEach(_n_STONE_1212,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->void{auto _n_binding_1339=_a0;
double _n_r_1269=std::get<0>(*_n_binding_1339);
double _n_c_1270=std::get<1>(*_n_binding_1339);
d::String _n_s_1271=std::get<2>(*_n_binding_1339);
_n_put_1248(_n_r_1269,_n_c_1270,_n_s_1271);}));
for(auto &&_n_item_1340:this->_n_fish_1221){d::check_cancel();std::shared_ptr<_n_Record_1222> _n_f_1272=_n_item_1340;
{
double _n_th_1273=(this->_n_TAU_1218*((_n_u_1246/_n_f_1272->_p_period)+_n_f_1272->_p_phase));
double _n_p_1274=(std::asin((0.995*std::sin(_n_th_1273)))/(ascii::PI/2.0));
double _n_x_1275=d::round((_n_f_1272->_p_from+(((_n_p_1274+1.0)/2.0)*(_n_f_1272->_p_to-_n_f_1272->_p_from))));
double _n_y_1276=d::round(([&](){auto _n_left_1341=(_n_f_1272->_p_row+(_n_f_1272->_p_drift*std::sin((((this->_n_TAU_1218*_n_u_1246)/_n_LOOP_1208)+_n_f_1272->_p_dp))));auto _n_right_1342=(0.35*std::sin((((this->_n_TAU_1218*_n_u_1246)/6.0)+(_n_f_1272->_p_dp*3.0))));return (_n_left_1341+_n_right_1342);})());
d::Array<d::String,false> _n_art_1277=(d::truth((std::fabs(std::cos(_n_th_1273))<0.09))?_n_f_1272->_p_turn:(d::truth((std::cos(_n_th_1273)>0.0))?_n_f_1272->_p_art:_n_f_1272->_p_back));
double _n_w_1278=([&](){d::Array<double> _n_numbers_1343;for(auto _x:d::map(_n_f_1272->_p_art,[&]( d::String _a0) mutable ->double{d::String _n_l_1279=_a0;
return double(_n_l_1279.size());}))_n_numbers_1343.push(_x);return d::maximum(_n_numbers_1343);})();
double _n_tw_1280=([&](){d::Array<double> _n_numbers_1344;for(auto _x:d::map(_n_art_1277,[&]( d::String _a0) mutable ->double{d::String _n_l_1281=_a0;
return double(_n_l_1281.size());}))_n_numbers_1344.push(_x);return d::maximum(_n_numbers_1344);})();
(void)(d::forEach(_n_art_1277,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_1282=_a0;
double _n_i_1283=_a1;
_n_put_1248(((_n_y_1276+_n_i_1283)-double(d::i32(double(_n_art_1277.size()))>>(d::u32(1.0)&31))),(_n_x_1275+double(d::i32((_n_w_1278-_n_tw_1280))>>(d::u32(1.0)&31))),_n_line_1282);}));

}
}
{double _n_k_1284=0.0;
for(;d::truth((_n_k_1284<80.0));(void)((_n_k_1284++))){d::check_cancel();double _n_age_1285=d::mod(((_n_u_1246-(_n_k_1284*(_n_LOOP_1208/80.0)))+_n_LOOP_1208),_n_LOOP_1208);
double _n_y_1286=(14.6-(_n_age_1285*(2.6+_n_hash_1214(_n_k_1284,1.0))));
if(d::truth((_n_y_1286<(this->_n_SURFACE_1219+1.0)))){d::check_cancel();continue;
}
double _n_x_1287=(_n_NOZZLE_1213+d::round(([&](){auto _n_left_1345=(0.7*std::sin(((_n_age_1285*3.5)+_n_k_1284)));auto _n_right_1346=(_n_hash_1214(_n_k_1284,2.0)-0.5);return (_n_left_1345+_n_right_1346);})()));
double _n_r_1288=std::floor(_n_y_1286);
if(d::truth((d::at(d::at(_n_g_1247,_n_r_1288),_n_x_1287)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_1347=d::at(_n_g_1247,_n_r_1288);auto _n_index_1348=_n_x_1287;auto _n_value_1349=(d::truth((_n_y_1286>11.0))?d::String(u"."):(d::truth((_n_y_1286>6.0))?d::String(u"o"):d::String(u"O")));d::put(_n_array_1347,_n_index_1348,_n_value_1349);return _n_value_1349;})());
}
}}
(void)(_n_weed_1257(d::at(_n_WEEDS_1211,(double(_n_WEEDS_1211.size())-1.0))));
return d::join(d::map(_n_g_1247,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_1289=_a0;
return d::join(_n_row_1289,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("aquarium").cols)*ascii::catalog_meta("aquarium").rows);auto _env=std::make_shared<_n_Record_1290>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &aquarium_meta(){return catalog_meta("aquarium");}
std::unique_ptr<Piece> make_aquarium(const AsciiPieceOptions &o){return std::make_unique<Native_aquarium>(o);}
}
