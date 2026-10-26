// Direct, statically typed C++ from src/pieces/fountain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11002;
struct _n_Record_11018;
struct _n_Record_11020;
struct _n_Record_11092;
struct _n_Record_11002{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_11002> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11002>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_11018{
double _p_a{};
double _p_v{};
double _p_wa{};
double _p_wv{};
double _p_keep{};
double _p_j{};
static std::shared_ptr<_n_Record_11018> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11018>();out->_p_a=d::decode<double>(j["a"]);out->_p_v=d::decode<double>(j["v"]);out->_p_wa=d::decode<double>(j["wa"]);out->_p_wv=d::decode<double>(j["wv"]);out->_p_keep=d::decode<double>(j["keep"]);out->_p_j=d::decode<double>(j["j"]);return out;}
};
struct _n_Record_11020{
double _p_t0{};
double _p_vx{};
double _p_vy{};
double _p_end{};
static std::shared_ptr<_n_Record_11020> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11020>();out->_p_t0=d::decode<double>(j["t0"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_end=d::decode<double>(j["end"]);return out;}
};
struct _n_Record_11092{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11092> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11092>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_11012(double _a0,double _a1);
double _n_flight_11013(double _a0);
std::shared_ptr<_n_Record_11002> _n_meta_11001=[](){return ([&](){auto _n_object_11095=std::make_shared<_n_Record_11002>();_n_object_11095->_p_name=d::String(u"fountain");_n_object_11095->_p_category=d::String(u"physics");_n_object_11095->_p_note=d::String(u"arcs of water from a nozzle falling as drops into a basin");_n_object_11095->_p_cols=57.0;_n_object_11095->_p_rows=22.0;_n_object_11095->_p_fps=30.0;return _n_object_11095;})();}();
const double _n_G_11003=[](){return 30.0;}();
const double _n_RATE_11004=[](){return 80.0;}();
const double _n_WATER_11005=[](){return 17.0;}();
const double _n_NOZ_11006=[](){return 6.5;}();
const double _n_T0_11007=[](){return 8.0;}();
d::Array<std::array<double,5>,false> _n_JETS_11008=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{0.0,0.0,0.004,0.035,3.0},std::array<double,5>{(-d::number(17.0)),(-d::number(7.0)),0.006,0.008,4.0},std::array<double,5>{17.0,7.0,0.006,0.008,4.0},std::array<double,5>{(-d::number(42.0)),(-d::number(10.4)),0.005,0.006,5.0},std::array<double,5>{42.0,10.4,0.005,0.006,5.0}};}();
const double _n_TOP_11009=[](){return 8.4;}();
d::Array<d::String,false> _n_BASIN_11010=[](){return d::Array<d::String,false>{d::repeat(d::String(u"▀"),49.0),(d::string((d::string(d::String(u"\\"))+d::string(d::repeat(d::String(u"_"),45.0))))+d::string(d::String(u"/"))),(d::string((d::string(d::String(u"|"))+d::string(d::repeat(d::String(u" "),13.0))))+d::string(d::String(u"|"))),(d::string((d::string(d::String(u"___|"))+d::string(d::repeat(d::String(u"_"),13.0))))+d::string(d::String(u"|___")))};}();
d::Array<d::String,false> _n_POST_11011=[](){return d::Array<d::String,false>{d::String(u"_/^\\_"),d::String(u" |#| "),d::String(u" |#| "),d::String(u" |#| "),d::String(u" |#| "),d::String(u" |#| "),d::String(u"_/#\\_")};}();
double _n_hash_11012(double _a0,double _a1){double _n_i_11021=_a0;
double _n_s_11022=_a1;
{
double _n_h_11023=([&](){auto _n_left_11096=d::imul(double(d::i32(_n_i_11021)^d::i32(2654435769.0)),2246822507.0);auto _n_right_11097=d::imul((_n_s_11022+1.0),3266489909.0);return double(d::i32(_n_left_11096)^d::i32(_n_right_11097));})();
(void)((_n_h_11023=d::imul(double(d::i32(_n_h_11023)^d::i32(double(d::u32(_n_h_11023)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_11023=d::imul(double(d::i32(_n_h_11023)^d::i32(double(d::u32(_n_h_11023)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_11023)^d::i32(double(d::u32(_n_h_11023)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_flight_11013(double _a0){double _n_vy_11024=_a0;
return ((_n_vy_11024+std::sqrt(((_n_vy_11024*_n_vy_11024)+((2.0*_n_G_11003)*_n_NOZ_11006))))/_n_G_11003);}

struct Native_fountain final:ascii::Piece{
double _n_cols_11014{};
double _n_rows_11015{};
double _n_CX_11016{};
d::Array<std::shared_ptr<_n_Record_11018>,false> _n_jets_11017{};
std::function<d::String(double,std::shared_ptr<_n_Record_11092>)> _render;
std::shared_ptr<_n_Record_11020> _n_drop_11019(std::shared_ptr<_n_Record_11018> _a0,double _a1){std::shared_ptr<_n_Record_11018> _n_jet_11036=_a0;
double _n_i_11037=_a1;
{
double _n_s_11038=((_n_jet_11036->_p_j*7.0)+1.0);
double _n_pulse_11039=(d::truth(_n_jet_11036->_p_j)?1.0:(0.95+(0.05*std::sin(((_n_i_11037/_n_RATE_11004)*1.2566)))));
double _n_a_11040=(_n_jet_11036->_p_a+((((_n_hash_11012(_n_i_11037,_n_s_11038)-0.5)*2.0)*_n_jet_11036->_p_wa)*ascii::PI));
double _n_v_11041=((_n_jet_11036->_p_v*_n_pulse_11039)*(1.0+(((_n_hash_11012(_n_i_11037,(_n_s_11038+1.0))-0.5)*2.0)*_n_jet_11036->_p_wv)));
double _n_vx_11042=(_n_v_11041*std::sin(_n_a_11040));
double _n_vy_11043=(_n_v_11041*std::cos(_n_a_11040));
return ([&](){auto _n_object_11135=std::make_shared<_n_Record_11020>();_n_object_11135->_p_t0=((_n_i_11037+(_n_hash_11012(_n_i_11037,(_n_s_11038+2.0))*0.6))/_n_RATE_11004);_n_object_11135->_p_vx=_n_vx_11042;_n_object_11135->_p_vy=_n_vy_11043;_n_object_11135->_p_end=_n_flight_11013(_n_vy_11043);return _n_object_11135;})();

}
}

explicit Native_fountain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11098=_n_meta_11001;
this->_n_cols_11014=_n_binding_11098->_p_cols;
this->_n_rows_11015=_n_binding_11098->_p_rows;
this->_n_CX_11016=(std::floor((this->_n_cols_11014/2.0))+0.5);
this->_n_jets_11017=d::map(_n_JETS_11008,[&]( std::array<double,5> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_11018>{auto _n_binding_11099=_a0;
double _n_deg_11025=d::at(_n_binding_11099,0.0);
double _n_land_11026=d::at(_n_binding_11099,1.0);
double _n_wa_11027=d::at(_n_binding_11099,2.0);
double _n_wv_11028=d::at(_n_binding_11099,3.0);
double _n_keep_11029=d::at(_n_binding_11099,4.0);
double _n_j_11030=_a1;
{
double _n_a_11031=((_n_deg_11025*ascii::PI)/180.0);
double _n_v_11032=std::sqrt(((2.0*_n_G_11003)*_n_TOP_11009));
if(d::truth(_n_deg_11025)){d::check_cancel();double _n_lo_11033=1.0;
double _n_hi_11034=60.0;
{double _n_k_11035=0.0;
for(;d::truth((_n_k_11035<40.0));(void)((_n_k_11035++))){d::check_cancel();(void)((_n_v_11032=((_n_lo_11033+_n_hi_11034)/2.0)));
(void)((d::truth(([&](){auto _n_left_11100=std::fabs(([&](){auto _n_left_11102=(_n_v_11032*std::sin(_n_a_11031));auto _n_right_11103=_n_flight_11013((_n_v_11032*std::cos(_n_a_11031)));return (_n_left_11102*_n_right_11103);})());auto _n_right_11101=std::fabs(_n_land_11026);return (_n_left_11100<_n_right_11101);})())?(_n_lo_11033=_n_v_11032):(_n_hi_11034=_n_v_11032)));
}}
}
return ([&](){auto _n_object_11105=std::make_shared<_n_Record_11018>();_n_object_11105->_p_a=_n_a_11031;_n_object_11105->_p_v=_n_v_11032;_n_object_11105->_p_wa=_n_wa_11027;_n_object_11105->_p_wv=_n_wv_11028;_n_object_11105->_p_keep=_n_keep_11029;_n_object_11105->_p_j=_n_j_11030;return _n_object_11105;})();

}
});
(void)(this->_n_jets_11017.push(this->_n_jets_11017.shift()));
_render=[=]( double _a0,std::shared_ptr<_n_Record_11092> _a1) mutable ->d::String{double _n_time_11044=_a0;
{
double _n_t_11045=(_n_T0_11007+_n_time_11044);
d::Array<d::Array<d::String,false>,false> _n_g_11046=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_11015,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_11014)).fill(d::String(u" "));}));
d::Array<d::Array<bool,false>,false> _n_solid_11047=d::Array<d::Array<bool,false>,false>(d::from(this->_n_rows_11015,[&]( ) mutable ->d::Array<bool,false>{return d::Array<bool,false>(size_t(this->_n_cols_11014)).fill(false);}));
auto _n_put_11048=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_11049=_a0;
double _n_r_11050=_a1;
d::String _n_ch_11051=_a2;
{
if(((((d::truth((_n_r_11050>=0.0))&&d::truth((_n_r_11050<this->_n_rows_11015)))&&d::truth((_n_c_11049>=0.0)))&&d::truth((_n_c_11049<this->_n_cols_11014)))&&d::truth((!d::truth(d::at(d::at(_n_solid_11047,_n_r_11050),_n_c_11049)))))){d::check_cancel();(void)(([&](){auto&& _n_array_11106=d::at(_n_g_11046,_n_r_11050);auto _n_index_11107=_n_c_11049;auto _n_value_11108=_n_ch_11051;d::put(_n_array_11106,_n_index_11107,_n_value_11108);return _n_value_11108;})());
}

}
};
auto _n_stamp_11052=[&]( d::Array<d::String,false> _a0,double _a1) mutable ->void{d::Array<d::String,false> _n_art_11053=_a0;
double _n_r0_11054=_a1;
d::forEach(_n_art_11053,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_11055=_a0;
double _n_k_11056=_a1;
{
double _n_c0_11057=(std::floor(this->_n_CX_11016)-((double(_n_line_11055.size())-1.0)/2.0));
{double _n_c_11058=0.0;
for(;d::truth((_n_c_11058<double(_n_line_11055.size())));(void)((_n_c_11058++))){d::check_cancel();if(d::truth((d::at(_n_line_11055,_n_c_11058)==d::String(u" ")))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_11109=d::at(_n_g_11046,(_n_r0_11054+_n_k_11056));auto _n_index_11110=(_n_c0_11057+_n_c_11058);auto _n_value_11111=(d::truth((d::at(_n_line_11055,_n_c_11058)==d::String(u"#")))?d::String(u" "):d::at(_n_line_11055,_n_c_11058));d::put(_n_array_11109,_n_index_11110,_n_value_11111);return _n_value_11111;})());
(void)(([&](){auto&& _n_array_11112=d::at(_n_solid_11047,(_n_r0_11054+_n_k_11056));auto _n_index_11113=(_n_c0_11057+_n_c_11058);auto _n_value_11114=true;d::put(_n_array_11112,_n_index_11113,_n_value_11114);return _n_value_11114;})());
}}

}
});};
(void)(_n_stamp_11052(_n_BASIN_11010,(_n_WATER_11005+1.0)));
(void)(_n_stamp_11052(_n_POST_11011,((_n_WATER_11005-double(_n_POST_11011.size()))+1.0)));
d::Array<d::Array<double,false>,false> _n_rings_11059=d::Array<d::Array<double,false>,false>{};
d::Array<double,false> _n_hits_11060=d::Array<double,false>{};
d::Array<d::Array<double,false>,false> _n_crowns_11061=d::Array<d::Array<double,false>,false>{};
for(auto &&_n_item_11115:this->_n_jets_11017){d::check_cancel();std::shared_ptr<_n_Record_11018> _n_jet_11062=_n_item_11115;
{
{double _n_i_11063=std::floor(((_n_t_11045-3.2)*_n_RATE_11004));
for(;d::truth((_n_i_11063<=std::ceil((_n_t_11045*_n_RATE_11004))));(void)((_n_i_11063++))){d::check_cancel();std::shared_ptr<_n_Record_11020> _n_d_11064=this->_n_drop_11019(_n_jet_11062,_n_i_11063);
double _n_age_11065=(_n_t_11045-_n_d_11064->_p_t0);
if(d::truth((_n_age_11065<0.0))){d::check_cancel();continue;
}
if(d::truth((_n_age_11065>=_n_d_11064->_p_end))){d::check_cancel();double _n_k_11066=(_n_age_11065-_n_d_11064->_p_end);
double _n_x_11067=(_n_d_11064->_p_vx*_n_d_11064->_p_end);
if((d::truth((_n_k_11066<1.4))&&d::truth((_n_hash_11012(_n_i_11063,(_n_jet_11062->_p_j+60.0))<0.018)))){d::check_cancel();(void)(_n_rings_11059.push(d::Array<double,false>{_n_x_11067,_n_k_11066}));
}
if((d::truth((_n_k_11066<0.07))&&d::truth((d::mod(_n_i_11063,_n_jet_11062->_p_keep)==0.0)))){d::check_cancel();(void)(_n_hits_11060.push(_n_x_11067));
}
if((d::truth((_n_k_11066<0.4))&&d::truth((_n_hash_11012(_n_i_11063,(_n_jet_11062->_p_j+70.0))<0.03)))){d::check_cancel();(void)(_n_crowns_11061.push(d::Array<double,false>{_n_x_11067,_n_k_11066,_n_i_11063,_n_jet_11062->_p_j}));
}
continue;
}
double _n_vy_11068=(_n_d_11064->_p_vy-(_n_G_11003*_n_age_11065));
if((d::truth((_n_vy_11068<0.0))&&d::truth(d::mod(_n_i_11063,_n_jet_11062->_p_keep)))){d::check_cancel();continue;
}
double _n_row_11069=(((_n_WATER_11005-_n_NOZ_11006)-(_n_d_11064->_p_vy*_n_age_11065))+(((_n_G_11003*_n_age_11065)*_n_age_11065)/2.0));
if(((d::truth((_n_vy_11068<0.0))&&d::truth((!d::truth(_n_jet_11062->_p_j))))&&d::truth((_n_row_11069>((_n_WATER_11005-_n_NOZ_11006)-1.0))))){d::check_cancel();continue;
}
double _n_speed_11070=d::hypot(std::initializer_list<double>{_n_d_11064->_p_vx,_n_vy_11068});
double _n_ang_11071=((std::atan2(_n_vy_11068,_n_d_11064->_p_vx)*180.0)/ascii::PI);
d::String _n_ch_11072{};
if(d::truth((_n_vy_11068<0.0))){d::check_cancel();(void)((_n_ch_11072=(d::truth((_n_speed_11070>17.0))?d::String(u":"):d::String(u"·"))));
}else {d::check_cancel();if(d::truth((!d::truth(_n_jet_11062->_p_j)))){d::check_cancel();(void)((_n_ch_11072=(d::truth((_n_speed_11070>7.0))?d::String(u"|"):(d::truth((_n_speed_11070>3.0))?d::String(u"·"):d::String(u"°")))));
}else {d::check_cancel();if(d::truth((std::fabs((_n_ang_11071-90.0))<22.0))){d::check_cancel();(void)((_n_ch_11072=d::String(u"|")));
}else {d::check_cancel();if((d::truth((_n_ang_11071<28.0))||d::truth((_n_ang_11071>152.0)))){d::check_cancel();(void)((_n_ch_11072=(d::truth((d::mod(_n_row_11069,1.0)<0.5))?d::String(u"-"):d::String(u"_"))));
}else {d::check_cancel();(void)((_n_ch_11072=(d::truth((_n_ang_11071<90.0))?d::String(u"/"):d::String(u"\\"))));
}
}
}
}
(void)(([&](){auto _n_argument_11116=std::floor((this->_n_CX_11016+((2.0*_n_d_11064->_p_vx)*_n_age_11065)));auto _n_argument_11117=std::floor(_n_row_11069);auto _n_argument_11118=_n_ch_11072;return _n_put_11048(_n_argument_11116,_n_argument_11117,_n_argument_11118);})());
}}

}
}
double _n_lo_11073=(std::floor(this->_n_CX_11016)-23.0);
double _n_hi_11074=(std::floor(this->_n_CX_11016)+23.0);
{double _n_c_11075=_n_lo_11073;
for(;d::truth((_n_c_11075<=_n_hi_11074));(void)((_n_c_11075++))){d::check_cancel();if(d::truth(d::at(d::at(_n_solid_11047,_n_WATER_11005),_n_c_11075))){d::check_cancel();continue;
}
double _n_x_11076=(((_n_c_11075+0.5)-this->_n_CX_11016)/2.0);
double _n_h_11077=0.0;
for(auto &&_n_item_11119:_n_rings_11059){d::check_cancel();auto _n_binding_11120=_n_item_11119;
double _n_x0_11078=d::at(_n_binding_11120,0.0);
double _n_k_11079=d::at(_n_binding_11120,1.0);
{
double _n_d_11080=std::fabs(((std::fabs((_n_x_11076-_n_x0_11078))-0.5)-(2.6*_n_k_11079)));
if(d::truth((_n_d_11080<0.4))){d::check_cancel();(void)((_n_h_11077=(_n_h_11077+((1.0-(_n_d_11080*2.5))*(1.0-(_n_k_11079/1.4))))));
}

}
}
(void)(([&](){auto&& _n_array_11121=d::at(_n_g_11046,_n_WATER_11005);auto _n_index_11122=_n_c_11075;auto _n_value_11123=(d::truth((_n_h_11077>0.3))?d::String(u"~"):d::String(u"-"));d::put(_n_array_11121,_n_index_11122,_n_value_11123);return _n_value_11123;})());
}}
for(auto &&_n_item_11124:_n_hits_11060){d::check_cancel();double _n_x_11081=_n_item_11124;
{
double _n_c_11082=std::floor((this->_n_CX_11016+(2.0*_n_x_11081)));
if(((d::truth((_n_c_11082>=_n_lo_11073))&&d::truth((_n_c_11082<=_n_hi_11074)))&&d::truth((!d::truth(d::at(d::at(_n_solid_11047,_n_WATER_11005),_n_c_11082)))))){d::check_cancel();(void)(([&](){auto&& _n_array_11125=d::at(_n_g_11046,_n_WATER_11005);auto _n_index_11126=_n_c_11082;auto _n_value_11127=d::String(u"^");d::put(_n_array_11125,_n_index_11126,_n_value_11127);return _n_value_11127;})());
}

}
}
for(auto &&_n_item_11128:_n_crowns_11061){d::check_cancel();auto _n_binding_11129=_n_item_11128;
double _n_x_11083=d::at(_n_binding_11129,0.0);
double _n_k_11084=d::at(_n_binding_11129,1.0);
double _n_i_11085=d::at(_n_binding_11129,2.0);
double _n_j_11086=d::at(_n_binding_11129,3.0);
{
for(auto &&_n_item_11130:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_11087=_n_item_11130;
{
double _n_vx_11088=(_n_side_11087*(1.2+(_n_hash_11012(_n_i_11085,(_n_j_11086+40.0))*1.4)));
double _n_vy_11089=(7.0+(_n_hash_11012(_n_i_11085,((_n_j_11086+50.0)+_n_side_11087))*4.0));
double _n_y_11090=((_n_vy_11089*_n_k_11084)-(((_n_G_11003*_n_k_11084)*_n_k_11084)/2.0));
if(d::truth((_n_y_11090<=0.2))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_11131=std::floor((this->_n_CX_11016+(2.0*(_n_x_11083+(_n_vx_11088*_n_k_11084)))));auto _n_argument_11132=std::floor((_n_WATER_11005-_n_y_11090));auto _n_argument_11133=(d::truth(((_n_vy_11089-(_n_G_11003*_n_k_11084))>0.0))?d::String(u"'"):d::String(u"."));return _n_put_11048(_n_argument_11131,_n_argument_11132,_n_argument_11133);})());

}
}

}
}
return d::join(d::map(_n_g_11046,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_11091=_a0;
return d::join(_n_row_11091,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fountain").cols)*ascii::catalog_meta("fountain").rows);auto _env=std::make_shared<_n_Record_11092>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fountain_meta(){return catalog_meta("fountain");}
std::unique_ptr<Piece> make_fountain(const AsciiPieceOptions &o){return std::make_unique<Native_fountain>(o);}
}
