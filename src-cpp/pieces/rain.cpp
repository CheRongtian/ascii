// Direct, statically typed C++ from src/pieces/rain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25834;
struct _n_Record_25837;
struct _n_Record_25904;
struct _n_Record_25834{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_25834> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25834>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_25837{
double _p_n{};
double _p_v{};
double _p_len{};
double _p_from{};
double _p_to{};
d::String _p_glyph{};
static std::shared_ptr<_n_Record_25837> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25837>();out->_p_n=d::decode<double>(j["n"]);out->_p_v=d::decode<double>(j["v"]);out->_p_len=d::decode<double>(j["len"]);out->_p_from=d::decode<double>(j["from"]);out->_p_to=d::decode<double>(j["to"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);return out;}
};
struct _n_Record_25904{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25904> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25904>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_25839(double _a0,double _a1);
std::shared_ptr<_n_Record_25834> _n_meta_25833=[](){return ([&](){auto _n_object_25907=std::make_shared<_n_Record_25834>();_n_object_25907->_p_name=d::String(u"rain");_n_object_25907->_p_category=d::String(u"nature");_n_object_25907->_p_note=d::String(u"slanting rain in three depths, crowns and puddle rings");_n_object_25907->_p_cols=64.0;_n_object_25907->_p_rows=20.0;_n_object_25907->_p_fps=30.0;return _n_object_25907;})();}();
const double _n_HORIZON_25835=[](){return 11.0;}();
d::Array<std::shared_ptr<_n_Record_25837>,false> _n_LAYERS_25836=[](){return d::Array<std::shared_ptr<_n_Record_25837>,false>{([&](){auto _n_object_25910=std::make_shared<_n_Record_25837>();_n_object_25910->_p_n=46.0;_n_object_25910->_p_v=11.0;_n_object_25910->_p_len=1.0;_n_object_25910->_p_from=12.0;_n_object_25910->_p_to=13.9;_n_object_25910->_p_glyph=d::String(u",");return _n_object_25910;})(),([&](){auto _n_object_25912=std::make_shared<_n_Record_25837>();_n_object_25912->_p_n=30.0;_n_object_25912->_p_v=19.0;_n_object_25912->_p_len=2.0;_n_object_25912->_p_from=14.0;_n_object_25912->_p_to=16.9;_n_object_25912->_p_glyph=d::String(u"/");return _n_object_25912;})(),([&](){auto _n_object_25914=std::make_shared<_n_Record_25837>();_n_object_25914->_p_n=16.0;_n_object_25914->_p_v=30.0;_n_object_25914->_p_len=4.0;_n_object_25914->_p_from=17.0;_n_object_25914->_p_to=19.9;_n_object_25914->_p_glyph=d::String(u"╱");return _n_object_25914;})()};}();
d::Array<d::Array<double,false>,false> _n_PUDDLES_25838=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{45.0,13.5,6.0,0.7},d::Array<double,false>{17.0,15.5,10.0,1.6},d::Array<double,false>{44.0,18.5,14.0,1.6}};}();
double _n_hash_25839(double _a0,double _a1){double _n_i_25845=_a0;
double _n_s_25846=_a1;
{
double _n_h_25847=([&](){auto _n_left_25915=d::imul(double(d::i32(_n_i_25845)^d::i32(2654435769.0)),2246822507.0);auto _n_right_25916=d::imul((_n_s_25846+1.0),3266489909.0);return double(d::i32(_n_left_25915)^d::i32(_n_right_25916));})();
(void)((_n_h_25847=d::imul(double(d::i32(_n_h_25847)^d::i32(double(d::u32(_n_h_25847)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_25847=d::imul(double(d::i32(_n_h_25847)^d::i32(double(d::u32(_n_h_25847)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_25847)^d::i32(double(d::u32(_n_h_25847)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_rain final:ascii::Piece{
double _n_cols_25840{};
double _n_rows_25841{};
d::Array<d::Array<d::String,false>,false> _n_base_25842{};
d::Array<d::Array<double,false>,false> _n_pool_25843{};
std::function<d::String(double,std::shared_ptr<_n_Record_25904>)> _render;
bool _n_wet_25844(double _a0,double _a1){double _n_r_25859=_a0;
double _n_c_25860=_a1;
return d::some(d::Array<double,false>{(-d::number(1.0)),0.0,1.0},[&]( double _a0) mutable ->bool{double _n_d_25861=_a0;
return ([&]()->bool{auto _n_logical_25945=([&]()->bool{auto _n_logical_25947=(d::at(d::at(this->_n_pool_25843,_n_r_25859),(_n_c_25860+_n_d_25861))>=0.0);return d::truth(_n_logical_25947)?_n_logical_25947:(([&]()->double{auto _n_optional_25948=d::at(this->_n_pool_25843,(_n_r_25859-1.0));if(!d::present(_n_optional_25948))return {};return d::at(d::read(_n_optional_25948),(_n_c_25860+_n_d_25861));})()>=0.0);})();return d::truth(_n_logical_25945)?_n_logical_25945:(([&]()->double{auto _n_optional_25946=d::at(this->_n_pool_25843,(_n_r_25859+1.0));if(!d::present(_n_optional_25946))return {};return d::at(d::read(_n_optional_25946),(_n_c_25860+_n_d_25861));})()>=0.0);})();});}

explicit Native_rain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_25917=_n_meta_25833;
this->_n_cols_25840=_n_binding_25917->_p_cols;
this->_n_rows_25841=_n_binding_25917->_p_rows;
this->_n_base_25842=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_25841,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_25840)).fill(d::String(u" "));}));
this->_n_pool_25843=d::Array<d::Array<double,false>,false>(d::from(this->_n_rows_25841,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>(size_t(this->_n_cols_25840)).fill((-d::number(1.0)));}));
(void)(d::at(this->_n_base_25842,_n_HORIZON_25835).fill(d::String(u"_")));
(void)(d::forEach(_n_PUDDLES_25838,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_25918=_a0;
double _n_cx_25848=d::at(_n_binding_25918,0.0);
double _n_cy_25849=d::at(_n_binding_25918,1.0);
double _n_rx_25850=d::at(_n_binding_25918,2.0);
double _n_ry_25851=d::at(_n_binding_25918,3.0);
double _n_p_25852=_a1;
{
{double _n_r_25853=std::floor((_n_cy_25849-_n_ry_25851));
for(;d::truth((_n_r_25853<=(_n_cy_25849+_n_ry_25851)));(void)((_n_r_25853++))){d::check_cancel();double _n_v_25854=(((_n_r_25853+0.5)-_n_cy_25849)/_n_ry_25851);
if(d::truth((std::fabs(_n_v_25854)>=1.0))){d::check_cancel();continue;
}
double _n_w_25855=(_n_rx_25850*std::sqrt((1.0-(_n_v_25854*_n_v_25854))));
double _n_a_25856=d::round(((_n_cx_25848-_n_w_25855)+((_n_hash_25839(_n_r_25853,(_n_p_25852+20.0))-0.5)*2.5)));
double _n_b_25857=d::round(((_n_cx_25848+_n_w_25855)+((_n_hash_25839(_n_r_25853,(_n_p_25852+30.0))-0.5)*2.5)));
{double _n_c_25858=d::maximum({0.0,_n_a_25856});
for(;d::truth((_n_c_25858<d::minimum({this->_n_cols_25840,_n_b_25857})));(void)((_n_c_25858++))){d::check_cancel();(void)(([&](){auto&& _n_array_25919=d::at(this->_n_base_25842,_n_r_25853);auto _n_index_25920=_n_c_25858;auto _n_value_25921=d::String(u"─");d::put(_n_array_25919,_n_index_25920,_n_value_25921);return _n_value_25921;})());
(void)(([&](){auto&& _n_array_25922=d::at(this->_n_pool_25843,_n_r_25853);auto _n_index_25923=_n_c_25858;auto _n_value_25924=_n_p_25852;d::put(_n_array_25922,_n_index_25923,_n_value_25924);return _n_value_25924;})());
}}
}}

}
}));
{double _n_r_25862=(_n_HORIZON_25835+1.0);
for(;d::truth((_n_r_25862<this->_n_rows_25841));(void)((_n_r_25862++))){d::check_cancel();{double _n_c_25863=0.0;
for(;d::truth((_n_c_25863<this->_n_cols_25840));(void)((_n_c_25863++))){d::check_cancel();double _n_h_25864=_n_hash_25839(((_n_r_25862*this->_n_cols_25840)+_n_c_25863),3.0);
double _n_near_25865=((_n_r_25862-_n_HORIZON_25835)/(this->_n_rows_25841-_n_HORIZON_25835));
if((d::truth((_n_h_25864<0.035))&&d::truth((!d::truth(this->_n_wet_25844(_n_r_25862,_n_c_25863)))))){d::check_cancel();(void)(([&](){auto&& _n_array_25925=d::at(this->_n_base_25842,_n_r_25862);auto _n_index_25926=_n_c_25863;auto _n_value_25927=((d::truth((_n_near_25865>0.5))&&d::truth((_n_h_25864<0.012)))?d::String(u"`"):d::String(u"."));d::put(_n_array_25925,_n_index_25926,_n_value_25927);return _n_value_25927;})());
}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_25904> _a1) mutable ->d::String{double _n_t_25866=_a0;
{
d::Array<d::Array<d::String,false>,false> _n_g_25867=d::map(this->_n_base_25842,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_25868=_a0;
return _n_row_25868.slice();});
auto _n_put_25869=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_25870=_a0;
double _n_r_25871=_a1;
d::String _n_ch_25872=_a2;
{
(void)((_n_c_25870=std::floor(_n_c_25870)));
(void)((_n_r_25871=std::floor(_n_r_25871)));
if((((d::truth((_n_r_25871>=0.0))&&d::truth((_n_r_25871<this->_n_rows_25841)))&&d::truth((_n_c_25870>=0.0)))&&d::truth((_n_c_25870<this->_n_cols_25840)))){d::check_cancel();(void)(([&](){auto&& _n_array_25928=d::at(_n_g_25867,_n_r_25871);auto _n_index_25929=_n_c_25870;auto _n_value_25930=_n_ch_25872;d::put(_n_array_25928,_n_index_25929,_n_value_25930);return _n_value_25930;})());
}

}
};
auto _n_dry_25873=[&]( double _a0,double _a1) mutable ->bool{double _n_c_25874=_a0;
double _n_r_25875=_a1;
return ([&]()->bool{auto _n_logical_25931=([&]()->bool{auto _n_logical_25932=([&]()->bool{auto _n_logical_25933=([&]()->bool{auto _n_logical_25934=(_n_r_25875>_n_HORIZON_25835);return d::truth(_n_logical_25934)?(_n_r_25875<this->_n_rows_25841):_n_logical_25934;})();return d::truth(_n_logical_25933)?(_n_c_25874>=0.0):_n_logical_25933;})();return d::truth(_n_logical_25932)?(_n_c_25874<this->_n_cols_25840):_n_logical_25932;})();return d::truth(_n_logical_25931)?(d::at(d::at(this->_n_pool_25843,_n_r_25875),_n_c_25874)<0.0):_n_logical_25931;})();};
auto _n_spray_25876=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_25877=_a0;
double _n_r_25878=_a1;
d::String _n_ch_25879=_a2;
{
(void)((_n_c_25877=std::floor(_n_c_25877)));
(void)((_n_r_25878=std::floor(_n_r_25878)));
if(d::truth(_n_dry_25873(_n_c_25877,_n_r_25878))){d::check_cancel();(void)(([&](){auto&& _n_array_25935=d::at(_n_g_25867,_n_r_25878);auto _n_index_25936=_n_c_25877;auto _n_value_25937=_n_ch_25879;d::put(_n_array_25935,_n_index_25936,_n_value_25937);return _n_value_25937;})());
}

}
};
d::Array<std::array<double,5>,false> _n_splashes_25880=d::Array<std::array<double,5>,false>{};
(void)(d::forEach(_n_LAYERS_25836,[&]( std::shared_ptr<_n_Record_25837> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_25837> _n_L_25881=_a0;
double _n_li_25882=_a1;
{
double _n_cycle_25883=(((_n_L_25881->_p_to+_n_L_25881->_p_len)/_n_L_25881->_p_v)+0.6);
{double _n_i_25884=0.0;
for(;d::truth((_n_i_25884<_n_L_25881->_p_n));(void)((_n_i_25884++))){d::check_cancel();double _n_tt_25885=(_n_t_25866+(_n_hash_25839(_n_i_25884,(_n_li_25882*3.0))*_n_cycle_25883));
double _n_k_25886=std::floor((_n_tt_25885/_n_cycle_25883));
double _n_u_25887=(_n_tt_25885-(_n_k_25886*_n_cycle_25883));
double _n_id_25888=(((_n_i_25884*977.0)+(_n_k_25886*13.0))+_n_li_25882);
double _n_land_25889=std::floor((_n_L_25881->_p_from+((_n_L_25881->_p_to-_n_L_25881->_p_from)*_n_hash_25839(_n_id_25888,1.0))));
double _n_lx_25890=(std::floor((_n_hash_25839(_n_id_25888,2.0)*(this->_n_cols_25840+2.0)))-1.0);
double _n_head_25891=((-d::number(_n_L_25881->_p_len))+(_n_L_25881->_p_v*_n_u_25887));
if(d::truth((_n_head_25891<_n_land_25889))){d::check_cancel();{double _n_j_25892=0.0;
for(;d::truth((_n_j_25892<_n_L_25881->_p_len));(void)((_n_j_25892++))){d::check_cancel();double _n_r_25893=(std::floor(_n_head_25891)-_n_j_25892);
double _n_c_25894=(_n_lx_25890+(_n_land_25889-_n_r_25893));
if((((((d::truth((_n_r_25893>=0.0))&&d::truth((_n_r_25893<_n_land_25889)))&&d::truth((_n_c_25894>=0.0)))&&d::truth((_n_c_25894<this->_n_cols_25840)))&&d::truth((_n_r_25893!=_n_HORIZON_25835)))&&d::truth((d::at(d::at(this->_n_pool_25843,_n_r_25893),_n_c_25894)<0.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_25938=d::at(_n_g_25867,_n_r_25893);auto _n_index_25939=_n_c_25894;auto _n_value_25940=_n_L_25881->_p_glyph;d::put(_n_array_25938,_n_index_25939,_n_value_25940);return _n_value_25940;})());
}
}}
}else {d::check_cancel();(void)(_n_splashes_25880.push(std::array<double,5>{_n_lx_25890,_n_land_25889,((_n_head_25891-_n_land_25889)/_n_L_25881->_p_v),_n_li_25882,_n_id_25888}));
}
}}

}
}));
for(auto &&_n_item_25941:_n_splashes_25880){d::check_cancel();auto _n_binding_25942=_n_item_25941;
double _n_x_25895=d::at(_n_binding_25942,0.0);
double _n_y_25896=d::at(_n_binding_25942,1.0);
double _n_age_25897=d::at(_n_binding_25942,2.0);
double _n_li_25898=d::at(_n_binding_25942,3.0);
{
if((d::truth((_n_x_25895<0.0))||d::truth((_n_x_25895>=this->_n_cols_25840)))){d::check_cancel();continue;
}
double _n_p_25899=d::at(d::at(this->_n_pool_25843,_n_y_25896),_n_x_25895);
if(d::truth((_n_p_25899>=0.0))){d::check_cancel();double _n_life_25900=d::at(d::Array<double,false>{0.35,0.6,0.85},_n_li_25898);
if(d::truth((_n_age_25897>_n_life_25900))){d::check_cancel();continue;
}
double _n_d_25901=std::floor(((_n_age_25897/_n_life_25900)*(2.0+(3.0*_n_li_25898))));
std::optional<d::String> _n_mark_25902=(d::truth((_n_age_25897>(_n_life_25900*0.7)))?std::optional<d::String>(d::String(u"·")):std::optional<d::String>{});
if(d::truth((!d::truth(_n_d_25901)))){d::check_cancel();(void)(_n_put_25869(_n_x_25895,_n_y_25896,d::String(u"o")));
}else {d::check_cancel();if((d::truth((d::at(d::at(this->_n_pool_25843,_n_y_25896),(_n_x_25895-_n_d_25901))==_n_p_25899))&&d::truth((d::at(d::at(this->_n_pool_25843,_n_y_25896),(_n_x_25895+_n_d_25901))==_n_p_25899)))){d::check_cancel();(void)(_n_put_25869((_n_x_25895-_n_d_25901),_n_y_25896,([&]()->d::String{auto _n_logical_25943=_n_mark_25902;return d::truth(_n_logical_25943)?d::read(_n_logical_25943):d::String(u"(");})()));
(void)(_n_put_25869((_n_x_25895+_n_d_25901),_n_y_25896,([&]()->d::String{auto _n_logical_25944=_n_mark_25902;return d::truth(_n_logical_25944)?d::read(_n_logical_25944):d::String(u")");})()));
}
}
continue;
}
if(d::truth((_n_li_25898==0.0))){d::check_cancel();if(d::truth((_n_age_25897<0.1))){d::check_cancel();(void)(_n_spray_25876(_n_x_25895,_n_y_25896,d::String(u".")));
}
}else {d::check_cancel();if(d::truth((_n_li_25898==1.0))){d::check_cancel();if(d::truth((_n_age_25897<0.08))){d::check_cancel();(void)(_n_spray_25876(_n_x_25895,_n_y_25896,d::String(u"v")));
}else {d::check_cancel();if(d::truth((_n_age_25897<0.22))){d::check_cancel();(void)((_n_spray_25876((_n_x_25895-1.0),_n_y_25896,d::String(u".")),_n_spray_25876((_n_x_25895+1.0),_n_y_25896,d::String(u"."))));
}
}
}else {d::check_cancel();if(d::truth((_n_age_25897<0.09))){d::check_cancel();(void)((((_n_spray_25876((_n_x_25895-1.0),(_n_y_25896-1.0),d::String(u"\\")),_n_spray_25876(_n_x_25895,(_n_y_25896-1.0),d::String(u"|"))),_n_spray_25876((_n_x_25895+1.0),(_n_y_25896-1.0),d::String(u"/"))),_n_spray_25876(_n_x_25895,_n_y_25896,d::String(u"."))));
}else {d::check_cancel();if(d::truth((_n_age_25897<0.2))){d::check_cancel();(void)((_n_spray_25876((_n_x_25895-2.0),(_n_y_25896-1.0),d::String(u"'")),_n_spray_25876((_n_x_25895+2.0),(_n_y_25896-1.0),d::String(u"'"))));
}else {d::check_cancel();if(d::truth((_n_age_25897<0.32))){d::check_cancel();(void)((_n_spray_25876((_n_x_25895-2.0),_n_y_25896,d::String(u".")),_n_spray_25876((_n_x_25895+2.0),_n_y_25896,d::String(u"."))));
}
}
}
}
}

}
}
return d::join(d::map(_n_g_25867,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_25903=_a0;
return d::join(_n_row_25903,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rain").cols)*ascii::catalog_meta("rain").rows);auto _env=std::make_shared<_n_Record_25904>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rain_meta(){return catalog_meta("rain");}
std::unique_ptr<Piece> make_rain(const AsciiPieceOptions &o){return std::make_unique<Native_rain>(o);}
}
