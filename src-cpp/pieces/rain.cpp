// Direct, statically typed C++ from src/pieces/rain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25833;
struct _n_Record_25836;
struct _n_Record_25903;
struct _n_Record_25833{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_25833> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25833>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_25836{
double _p_n{};
double _p_v{};
double _p_len{};
double _p_from{};
double _p_to{};
d::String _p_glyph{};
static std::shared_ptr<_n_Record_25836> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25836>();out->_p_n=d::decode<double>(j["n"]);out->_p_v=d::decode<double>(j["v"]);out->_p_len=d::decode<double>(j["len"]);out->_p_from=d::decode<double>(j["from"]);out->_p_to=d::decode<double>(j["to"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);return out;}
};
struct _n_Record_25903{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25903> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25903>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_25838(double _a0,double _a1);
std::shared_ptr<_n_Record_25833> _n_meta_25832=[](){return ([&](){auto _n_object_25906=std::make_shared<_n_Record_25833>();_n_object_25906->_p_name=d::String(u"rain");_n_object_25906->_p_category=d::String(u"nature");_n_object_25906->_p_note=d::String(u"slanting rain in three depths, crowns and puddle rings");_n_object_25906->_p_cols=64.0;_n_object_25906->_p_rows=20.0;_n_object_25906->_p_fps=30.0;return _n_object_25906;})();}();
const double _n_HORIZON_25834=[](){return 11.0;}();
d::Array<std::shared_ptr<_n_Record_25836>,false> _n_LAYERS_25835=[](){return d::Array<std::shared_ptr<_n_Record_25836>,false>{([&](){auto _n_object_25909=std::make_shared<_n_Record_25836>();_n_object_25909->_p_n=46.0;_n_object_25909->_p_v=11.0;_n_object_25909->_p_len=1.0;_n_object_25909->_p_from=12.0;_n_object_25909->_p_to=13.9;_n_object_25909->_p_glyph=d::String(u",");return _n_object_25909;})(),([&](){auto _n_object_25911=std::make_shared<_n_Record_25836>();_n_object_25911->_p_n=30.0;_n_object_25911->_p_v=19.0;_n_object_25911->_p_len=2.0;_n_object_25911->_p_from=14.0;_n_object_25911->_p_to=16.9;_n_object_25911->_p_glyph=d::String(u"/");return _n_object_25911;})(),([&](){auto _n_object_25913=std::make_shared<_n_Record_25836>();_n_object_25913->_p_n=16.0;_n_object_25913->_p_v=30.0;_n_object_25913->_p_len=4.0;_n_object_25913->_p_from=17.0;_n_object_25913->_p_to=19.9;_n_object_25913->_p_glyph=d::String(u"╱");return _n_object_25913;})()};}();
d::Array<d::Array<double,false>,false> _n_PUDDLES_25837=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{45.0,13.5,6.0,0.7},d::Array<double,false>{17.0,15.5,10.0,1.6},d::Array<double,false>{44.0,18.5,14.0,1.6}};}();
double _n_hash_25838(double _a0,double _a1){double _n_i_25844=_a0;
double _n_s_25845=_a1;
{
double _n_h_25846=([&](){auto _n_left_25914=d::imul(double(d::i32(_n_i_25844)^d::i32(2654435769.0)),2246822507.0);auto _n_right_25915=d::imul((_n_s_25845+1.0),3266489909.0);return double(d::i32(_n_left_25914)^d::i32(_n_right_25915));})();
(void)((_n_h_25846=d::imul(double(d::i32(_n_h_25846)^d::i32(double(d::u32(_n_h_25846)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_25846=d::imul(double(d::i32(_n_h_25846)^d::i32(double(d::u32(_n_h_25846)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_25846)^d::i32(double(d::u32(_n_h_25846)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_rain final:ascii::Piece{
double _n_cols_25839{};
double _n_rows_25840{};
d::Array<d::Array<d::String,false>,false> _n_base_25841{};
d::Array<d::Array<double,false>,false> _n_pool_25842{};
std::function<d::String(double,std::shared_ptr<_n_Record_25903>)> _render;
bool _n_wet_25843(double _a0,double _a1){double _n_r_25858=_a0;
double _n_c_25859=_a1;
return d::some(d::Array<double,false>{(-d::number(1.0)),0.0,1.0},[&]( double _a0) mutable ->bool{double _n_d_25860=_a0;
return ([&]()->bool{auto _n_logical_25944=([&]()->bool{auto _n_logical_25946=(d::at(d::at(this->_n_pool_25842,_n_r_25858),(_n_c_25859+_n_d_25860))>=0.0);return d::truth(_n_logical_25946)?_n_logical_25946:(([&]()->double{auto _n_optional_25947=d::at(this->_n_pool_25842,(_n_r_25858-1.0));if(!d::present(_n_optional_25947))return {};return d::at(d::read(_n_optional_25947),(_n_c_25859+_n_d_25860));})()>=0.0);})();return d::truth(_n_logical_25944)?_n_logical_25944:(([&]()->double{auto _n_optional_25945=d::at(this->_n_pool_25842,(_n_r_25858+1.0));if(!d::present(_n_optional_25945))return {};return d::at(d::read(_n_optional_25945),(_n_c_25859+_n_d_25860));})()>=0.0);})();});}

explicit Native_rain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_25916=_n_meta_25832;
this->_n_cols_25839=_n_binding_25916->_p_cols;
this->_n_rows_25840=_n_binding_25916->_p_rows;
this->_n_base_25841=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_25840,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_25839)).fill(d::String(u" "));}));
this->_n_pool_25842=d::Array<d::Array<double,false>,false>(d::from(this->_n_rows_25840,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>(size_t(this->_n_cols_25839)).fill((-d::number(1.0)));}));
(void)(d::at(this->_n_base_25841,_n_HORIZON_25834).fill(d::String(u"_")));
(void)(d::forEach(_n_PUDDLES_25837,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_25917=_a0;
double _n_cx_25847=d::at(_n_binding_25917,0.0);
double _n_cy_25848=d::at(_n_binding_25917,1.0);
double _n_rx_25849=d::at(_n_binding_25917,2.0);
double _n_ry_25850=d::at(_n_binding_25917,3.0);
double _n_p_25851=_a1;
{
{double _n_r_25852=std::floor((_n_cy_25848-_n_ry_25850));
for(;d::truth((_n_r_25852<=(_n_cy_25848+_n_ry_25850)));(void)((_n_r_25852++))){d::check_cancel();double _n_v_25853=(((_n_r_25852+0.5)-_n_cy_25848)/_n_ry_25850);
if(d::truth((std::fabs(_n_v_25853)>=1.0))){d::check_cancel();continue;
}
double _n_w_25854=(_n_rx_25849*std::sqrt((1.0-(_n_v_25853*_n_v_25853))));
double _n_a_25855=d::round(((_n_cx_25847-_n_w_25854)+((_n_hash_25838(_n_r_25852,(_n_p_25851+20.0))-0.5)*2.5)));
double _n_b_25856=d::round(((_n_cx_25847+_n_w_25854)+((_n_hash_25838(_n_r_25852,(_n_p_25851+30.0))-0.5)*2.5)));
{double _n_c_25857=d::maximum({0.0,_n_a_25855});
for(;d::truth((_n_c_25857<d::minimum({this->_n_cols_25839,_n_b_25856})));(void)((_n_c_25857++))){d::check_cancel();(void)(([&](){auto&& _n_array_25918=d::at(this->_n_base_25841,_n_r_25852);auto _n_index_25919=_n_c_25857;auto _n_value_25920=d::String(u"─");d::put(_n_array_25918,_n_index_25919,_n_value_25920);return _n_value_25920;})());
(void)(([&](){auto&& _n_array_25921=d::at(this->_n_pool_25842,_n_r_25852);auto _n_index_25922=_n_c_25857;auto _n_value_25923=_n_p_25851;d::put(_n_array_25921,_n_index_25922,_n_value_25923);return _n_value_25923;})());
}}
}}

}
}));
{double _n_r_25861=(_n_HORIZON_25834+1.0);
for(;d::truth((_n_r_25861<this->_n_rows_25840));(void)((_n_r_25861++))){d::check_cancel();{double _n_c_25862=0.0;
for(;d::truth((_n_c_25862<this->_n_cols_25839));(void)((_n_c_25862++))){d::check_cancel();double _n_h_25863=_n_hash_25838(((_n_r_25861*this->_n_cols_25839)+_n_c_25862),3.0);
double _n_near_25864=((_n_r_25861-_n_HORIZON_25834)/(this->_n_rows_25840-_n_HORIZON_25834));
if((d::truth((_n_h_25863<0.035))&&d::truth((!d::truth(this->_n_wet_25843(_n_r_25861,_n_c_25862)))))){d::check_cancel();(void)(([&](){auto&& _n_array_25924=d::at(this->_n_base_25841,_n_r_25861);auto _n_index_25925=_n_c_25862;auto _n_value_25926=((d::truth((_n_near_25864>0.5))&&d::truth((_n_h_25863<0.012)))?d::String(u"`"):d::String(u"."));d::put(_n_array_25924,_n_index_25925,_n_value_25926);return _n_value_25926;})());
}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_25903> _a1) mutable ->d::String{double _n_t_25865=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_g_25866=d::map(this->_n_base_25841,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_25867=_a0;
return _n_row_25867.slice();});
auto _n_put_25868=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_25869=_a0;
double _n_r_25870=_a1;
d::String _n_ch_25871=_a2;
{
(void)((_n_c_25869=std::floor(_n_c_25869)));
(void)((_n_r_25870=std::floor(_n_r_25870)));
if((((d::truth((_n_r_25870>=0.0))&&d::truth((_n_r_25870<this->_n_rows_25840)))&&d::truth((_n_c_25869>=0.0)))&&d::truth((_n_c_25869<this->_n_cols_25839)))){d::check_cancel();(void)(([&](){auto&& _n_array_25927=d::at(_n_g_25866,_n_r_25870);auto _n_index_25928=_n_c_25869;auto _n_value_25929=_n_ch_25871;d::put(_n_array_25927,_n_index_25928,_n_value_25929);return _n_value_25929;})());
}

}
};
auto _n_dry_25872=[&]( double _a0,double _a1) mutable ->bool{double _n_c_25873=_a0;
double _n_r_25874=_a1;
return ([&]()->bool{auto _n_logical_25930=([&]()->bool{auto _n_logical_25931=([&]()->bool{auto _n_logical_25932=([&]()->bool{auto _n_logical_25933=(_n_r_25874>_n_HORIZON_25834);return d::truth(_n_logical_25933)?(_n_r_25874<this->_n_rows_25840):_n_logical_25933;})();return d::truth(_n_logical_25932)?(_n_c_25873>=0.0):_n_logical_25932;})();return d::truth(_n_logical_25931)?(_n_c_25873<this->_n_cols_25839):_n_logical_25931;})();return d::truth(_n_logical_25930)?(d::at(d::at(this->_n_pool_25842,_n_r_25874),_n_c_25873)<0.0):_n_logical_25930;})();};
auto _n_spray_25875=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_25876=_a0;
double _n_r_25877=_a1;
d::String _n_ch_25878=_a2;
{
(void)((_n_c_25876=std::floor(_n_c_25876)));
(void)((_n_r_25877=std::floor(_n_r_25877)));
if(d::truth(_n_dry_25872(_n_c_25876,_n_r_25877))){d::check_cancel();(void)(([&](){auto&& _n_array_25934=d::at(_n_g_25866,_n_r_25877);auto _n_index_25935=_n_c_25876;auto _n_value_25936=_n_ch_25878;d::put(_n_array_25934,_n_index_25935,_n_value_25936);return _n_value_25936;})());
}

}
};
d::Array<std::array<double,5>,false> _n_splashes_25879=d::Array<std::array<double,5>,false>{};
(void)(d::forEach(_n_LAYERS_25835,[&]( std::shared_ptr<_n_Record_25836> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_25836> _n_L_25880=_a0;
double _n_li_25881=_a1;
{
double _n_cycle_25882=(((_n_L_25880->_p_to+_n_L_25880->_p_len)/_n_L_25880->_p_v)+0.6);
{double _n_i_25883=0.0;
for(;d::truth((_n_i_25883<_n_L_25880->_p_n));(void)((_n_i_25883++))){d::check_cancel();double _n_tt_25884=(_n_t_25865+(_n_hash_25838(_n_i_25883,(_n_li_25881*3.0))*_n_cycle_25882));
double _n_k_25885=std::floor((_n_tt_25884/_n_cycle_25882));
double _n_u_25886=(_n_tt_25884-(_n_k_25885*_n_cycle_25882));
double _n_id_25887=(((_n_i_25883*977.0)+(_n_k_25885*13.0))+_n_li_25881);
double _n_land_25888=std::floor((_n_L_25880->_p_from+((_n_L_25880->_p_to-_n_L_25880->_p_from)*_n_hash_25838(_n_id_25887,1.0))));
double _n_lx_25889=(std::floor((_n_hash_25838(_n_id_25887,2.0)*(this->_n_cols_25839+2.0)))-1.0);
double _n_head_25890=((-d::number(_n_L_25880->_p_len))+(_n_L_25880->_p_v*_n_u_25886));
if(d::truth((_n_head_25890<_n_land_25888))){d::check_cancel();{double _n_j_25891=0.0;
for(;d::truth((_n_j_25891<_n_L_25880->_p_len));(void)((_n_j_25891++))){d::check_cancel();double _n_r_25892=(std::floor(_n_head_25890)-_n_j_25891);
double _n_c_25893=(_n_lx_25889+(_n_land_25888-_n_r_25892));
if((((((d::truth((_n_r_25892>=0.0))&&d::truth((_n_r_25892<_n_land_25888)))&&d::truth((_n_c_25893>=0.0)))&&d::truth((_n_c_25893<this->_n_cols_25839)))&&d::truth((_n_r_25892!=_n_HORIZON_25834)))&&d::truth((d::at(d::at(this->_n_pool_25842,_n_r_25892),_n_c_25893)<0.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_25937=d::at(_n_g_25866,_n_r_25892);auto _n_index_25938=_n_c_25893;auto _n_value_25939=_n_L_25880->_p_glyph;d::put(_n_array_25937,_n_index_25938,_n_value_25939);return _n_value_25939;})());
}
}}
}else {d::check_cancel();(void)(_n_splashes_25879.push(std::array<double,5>{_n_lx_25889,_n_land_25888,((_n_head_25890-_n_land_25888)/_n_L_25880->_p_v),_n_li_25881,_n_id_25887}));
}
}}

}
}));
for(auto &&_n_item_25940:_n_splashes_25879){d::check_cancel();auto _n_binding_25941=_n_item_25940;
double _n_x_25894=d::at(_n_binding_25941,0.0);
double _n_y_25895=d::at(_n_binding_25941,1.0);
double _n_age_25896=d::at(_n_binding_25941,2.0);
double _n_li_25897=d::at(_n_binding_25941,3.0);
{
if((d::truth((_n_x_25894<0.0))||d::truth((_n_x_25894>=this->_n_cols_25839)))){d::check_cancel();continue;
}
double _n_p_25898=d::at(d::at(this->_n_pool_25842,_n_y_25895),_n_x_25894);
if(d::truth((_n_p_25898>=0.0))){d::check_cancel();double _n_life_25899=d::at(d::Array<double,false>{0.35,0.6,0.85},_n_li_25897);
if(d::truth((_n_age_25896>_n_life_25899))){d::check_cancel();continue;
}
double _n_d_25900=std::floor(((_n_age_25896/_n_life_25899)*(2.0+(3.0*_n_li_25897))));
std::optional<d::String> _n_mark_25901=(d::truth((_n_age_25896>(_n_life_25899*0.7)))?std::optional<d::String>(d::String(u"·")):std::optional<d::String>{});
if(d::truth((!d::truth(_n_d_25900)))){d::check_cancel();(void)(_n_put_25868(_n_x_25894,_n_y_25895,d::String(u"o")));
}else {d::check_cancel();if((d::truth((d::at(d::at(this->_n_pool_25842,_n_y_25895),(_n_x_25894-_n_d_25900))==_n_p_25898))&&d::truth((d::at(d::at(this->_n_pool_25842,_n_y_25895),(_n_x_25894+_n_d_25900))==_n_p_25898)))){d::check_cancel();(void)(_n_put_25868((_n_x_25894-_n_d_25900),_n_y_25895,([&]()->d::String{auto _n_logical_25942=_n_mark_25901;return d::truth(_n_logical_25942)?d::read(_n_logical_25942):d::String(u"(");})()));
(void)(_n_put_25868((_n_x_25894+_n_d_25900),_n_y_25895,([&]()->d::String{auto _n_logical_25943=_n_mark_25901;return d::truth(_n_logical_25943)?d::read(_n_logical_25943):d::String(u")");})()));
}
}
continue;
}
if(d::truth((_n_li_25897==0.0))){d::check_cancel();if(d::truth((_n_age_25896<0.1))){d::check_cancel();(void)(_n_spray_25875(_n_x_25894,_n_y_25895,d::String(u".")));
}
}else {d::check_cancel();if(d::truth((_n_li_25897==1.0))){d::check_cancel();if(d::truth((_n_age_25896<0.08))){d::check_cancel();(void)(_n_spray_25875(_n_x_25894,_n_y_25895,d::String(u"v")));
}else {d::check_cancel();if(d::truth((_n_age_25896<0.22))){d::check_cancel();(void)((_n_spray_25875((_n_x_25894-1.0),_n_y_25895,d::String(u".")),_n_spray_25875((_n_x_25894+1.0),_n_y_25895,d::String(u"."))));
}
}
}else {d::check_cancel();if(d::truth((_n_age_25896<0.09))){d::check_cancel();(void)((((_n_spray_25875((_n_x_25894-1.0),(_n_y_25895-1.0),d::String(u"\\")),_n_spray_25875(_n_x_25894,(_n_y_25895-1.0),d::String(u"|"))),_n_spray_25875((_n_x_25894+1.0),(_n_y_25895-1.0),d::String(u"/"))),_n_spray_25875(_n_x_25894,_n_y_25895,d::String(u"."))));
}else {d::check_cancel();if(d::truth((_n_age_25896<0.2))){d::check_cancel();(void)((_n_spray_25875((_n_x_25894-2.0),(_n_y_25895-1.0),d::String(u"'")),_n_spray_25875((_n_x_25894+2.0),(_n_y_25895-1.0),d::String(u"'"))));
}else {d::check_cancel();if(d::truth((_n_age_25896<0.32))){d::check_cancel();(void)((_n_spray_25875((_n_x_25894-2.0),_n_y_25895,d::String(u".")),_n_spray_25875((_n_x_25894+2.0),_n_y_25895,d::String(u"."))));
}
}
}
}
}

}
}
return d::join(d::map(_n_g_25866,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_25902=_a0;
return d::join(_n_row_25902,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rain").cols)*ascii::catalog_meta("rain").rows);auto _env=std::make_shared<_n_Record_25903>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rain_meta(){return catalog_meta("rain");}
std::unique_ptr<Piece> make_rain(const AsciiPieceOptions &o){return std::make_unique<Native_rain>(o);}
}
