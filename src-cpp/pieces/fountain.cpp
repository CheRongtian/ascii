// Direct, statically typed C++ from src/pieces/fountain.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11001;
struct _n_Record_11017;
struct _n_Record_11019;
struct _n_Record_11091;
struct _n_Record_11001{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_11001> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11001>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_11017{
double _p_a{};
double _p_v{};
double _p_wa{};
double _p_wv{};
double _p_keep{};
double _p_j{};
static std::shared_ptr<_n_Record_11017> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11017>();out->_p_a=d::decode<double>(j["a"]);out->_p_v=d::decode<double>(j["v"]);out->_p_wa=d::decode<double>(j["wa"]);out->_p_wv=d::decode<double>(j["wv"]);out->_p_keep=d::decode<double>(j["keep"]);out->_p_j=d::decode<double>(j["j"]);return out;}
};
struct _n_Record_11019{
double _p_t0{};
double _p_vx{};
double _p_vy{};
double _p_end{};
static std::shared_ptr<_n_Record_11019> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11019>();out->_p_t0=d::decode<double>(j["t0"]);out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_end=d::decode<double>(j["end"]);return out;}
};
struct _n_Record_11091{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11091> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11091>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_11011(double _a0,double _a1);
double _n_flight_11012(double _a0);
std::shared_ptr<_n_Record_11001> _n_meta_11000=[](){return ([&](){auto _n_object_11094=std::make_shared<_n_Record_11001>();_n_object_11094->_p_name=d::String(u"fountain");_n_object_11094->_p_category=d::String(u"physics");_n_object_11094->_p_note=d::String(u"arcs of water from a nozzle falling as drops into a basin");_n_object_11094->_p_cols=57.0;_n_object_11094->_p_rows=22.0;_n_object_11094->_p_fps=30.0;return _n_object_11094;})();}();
const double _n_G_11002=[](){return 30.0;}();
const double _n_RATE_11003=[](){return 80.0;}();
const double _n_WATER_11004=[](){return 17.0;}();
const double _n_NOZ_11005=[](){return 6.5;}();
const double _n_T0_11006=[](){return 8.0;}();
d::Array<std::array<double,5>,false> _n_JETS_11007=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{0.0,0.0,0.004,0.035,3.0},std::array<double,5>{(-d::number(17.0)),(-d::number(7.0)),0.006,0.008,4.0},std::array<double,5>{17.0,7.0,0.006,0.008,4.0},std::array<double,5>{(-d::number(42.0)),(-d::number(10.4)),0.005,0.006,5.0},std::array<double,5>{42.0,10.4,0.005,0.006,5.0}};}();
const double _n_TOP_11008=[](){return 8.4;}();
d::Array<d::String,false> _n_BASIN_11009=[](){return d::Array<d::String,false>{d::repeat(d::String(u"▀"),49.0),(d::string((d::string(d::String(u"\\"))+d::string(d::repeat(d::String(u"_"),45.0))))+d::string(d::String(u"/"))),(d::string((d::string(d::String(u"|"))+d::string(d::repeat(d::String(u" "),13.0))))+d::string(d::String(u"|"))),(d::string((d::string(d::String(u"___|"))+d::string(d::repeat(d::String(u"_"),13.0))))+d::string(d::String(u"|___")))};}();
d::Array<d::String,false> _n_POST_11010=[](){return d::Array<d::String,false>{d::String(u"_/^\\_"),d::String(u" |#| "),d::String(u" |#| "),d::String(u" |#| "),d::String(u" |#| "),d::String(u" |#| "),d::String(u"_/#\\_")};}();
double _n_hash_11011(double _a0,double _a1){double _n_i_11020=_a0;
double _n_s_11021=_a1;
{
double _n_h_11022=([&](){auto _n_left_11095=d::imul(double(d::i32(_n_i_11020)^d::i32(2654435769.0)),2246822507.0);auto _n_right_11096=d::imul((_n_s_11021+1.0),3266489909.0);return double(d::i32(_n_left_11095)^d::i32(_n_right_11096));})();
(void)((_n_h_11022=d::imul(double(d::i32(_n_h_11022)^d::i32(double(d::u32(_n_h_11022)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_11022=d::imul(double(d::i32(_n_h_11022)^d::i32(double(d::u32(_n_h_11022)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_11022)^d::i32(double(d::u32(_n_h_11022)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_flight_11012(double _a0){double _n_vy_11023=_a0;
return ((_n_vy_11023+std::sqrt(((_n_vy_11023*_n_vy_11023)+((2.0*_n_G_11002)*_n_NOZ_11005))))/_n_G_11002);}

struct Native_fountain final:ascii::Piece{
double _n_cols_11013{};
double _n_rows_11014{};
double _n_CX_11015{};
d::Array<std::shared_ptr<_n_Record_11017>,false> _n_jets_11016{};
std::function<d::String(double,std::shared_ptr<_n_Record_11091>)> _render;
std::shared_ptr<_n_Record_11019> _n_drop_11018(std::shared_ptr<_n_Record_11017> _a0,double _a1){std::shared_ptr<_n_Record_11017> _n_jet_11035=_a0;
double _n_i_11036=_a1;
{
double _n_s_11037=((_n_jet_11035->_p_j*7.0)+1.0);
double _n_pulse_11038=(d::truth(_n_jet_11035->_p_j)?1.0:(0.95+(0.05*std::sin(((_n_i_11036/_n_RATE_11003)*1.2566)))));
double _n_a_11039=(_n_jet_11035->_p_a+((((_n_hash_11011(_n_i_11036,_n_s_11037)-0.5)*2.0)*_n_jet_11035->_p_wa)*ascii::PI));
double _n_v_11040=((_n_jet_11035->_p_v*_n_pulse_11038)*(1.0+(((_n_hash_11011(_n_i_11036,(_n_s_11037+1.0))-0.5)*2.0)*_n_jet_11035->_p_wv)));
double _n_vx_11041=(_n_v_11040*std::sin(_n_a_11039));
double _n_vy_11042=(_n_v_11040*std::cos(_n_a_11039));
return ([&](){auto _n_object_11134=std::make_shared<_n_Record_11019>();_n_object_11134->_p_t0=((_n_i_11036+(_n_hash_11011(_n_i_11036,(_n_s_11037+2.0))*0.6))/_n_RATE_11003);_n_object_11134->_p_vx=_n_vx_11041;_n_object_11134->_p_vy=_n_vy_11042;_n_object_11134->_p_end=_n_flight_11012(_n_vy_11042);return _n_object_11134;})();

}
}

explicit Native_fountain(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11097=_n_meta_11000;
this->_n_cols_11013=_n_binding_11097->_p_cols;
this->_n_rows_11014=_n_binding_11097->_p_rows;
this->_n_CX_11015=(std::floor((this->_n_cols_11013/2.0))+0.5);
this->_n_jets_11016=d::map(_n_JETS_11007,[&]( std::array<double,5> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_11017>{auto _n_binding_11098=_a0;
double _n_deg_11024=d::at(_n_binding_11098,0.0);
double _n_land_11025=d::at(_n_binding_11098,1.0);
double _n_wa_11026=d::at(_n_binding_11098,2.0);
double _n_wv_11027=d::at(_n_binding_11098,3.0);
double _n_keep_11028=d::at(_n_binding_11098,4.0);
double _n_j_11029=_a1;
{
double _n_a_11030=((_n_deg_11024*ascii::PI)/180.0);
double _n_v_11031=std::sqrt(((2.0*_n_G_11002)*_n_TOP_11008));
if(d::truth(_n_deg_11024)){d::check_cancel();double _n_lo_11032=1.0;
double _n_hi_11033=60.0;
{double _n_k_11034=0.0;
for(;d::truth((_n_k_11034<40.0));(void)((_n_k_11034++))){d::check_cancel();(void)((_n_v_11031=((_n_lo_11032+_n_hi_11033)/2.0)));
(void)((d::truth(([&](){auto _n_left_11099=std::fabs(([&](){auto _n_left_11101=(_n_v_11031*std::sin(_n_a_11030));auto _n_right_11102=_n_flight_11012((_n_v_11031*std::cos(_n_a_11030)));return (_n_left_11101*_n_right_11102);})());auto _n_right_11100=std::fabs(_n_land_11025);return (_n_left_11099<_n_right_11100);})())?(_n_lo_11032=_n_v_11031):(_n_hi_11033=_n_v_11031)));
}}
}
return ([&](){auto _n_object_11104=std::make_shared<_n_Record_11017>();_n_object_11104->_p_a=_n_a_11030;_n_object_11104->_p_v=_n_v_11031;_n_object_11104->_p_wa=_n_wa_11026;_n_object_11104->_p_wv=_n_wv_11027;_n_object_11104->_p_keep=_n_keep_11028;_n_object_11104->_p_j=_n_j_11029;return _n_object_11104;})();

}
});
(void)(this->_n_jets_11016.push(this->_n_jets_11016.shift()));
_render=[=]( double _a0,std::shared_ptr<_n_Record_11091> _a1) mutable ->d::String{double _n_time_11043=_a0;
{
double _n_t_11044=(_n_T0_11006+_n_time_11043);
d::Array<d::Array<d::String,false>,false> _n_g_11045=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_11014,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_11013)).fill(d::String(u" "));}));
d::Array<d::Array<bool,false>,false> _n_solid_11046=d::Array<d::Array<bool,false>,false>(d::from(this->_n_rows_11014,[&]( ) mutable ->d::Array<bool,false>{return d::Array<bool,false>(size_t(this->_n_cols_11013)).fill(false);}));
auto _n_put_11047=[&]( double _a0,double _a1,d::String _a2) mutable ->void{double _n_c_11048=_a0;
double _n_r_11049=_a1;
d::String _n_ch_11050=_a2;
{
if(((((d::truth((_n_r_11049>=0.0))&&d::truth((_n_r_11049<this->_n_rows_11014)))&&d::truth((_n_c_11048>=0.0)))&&d::truth((_n_c_11048<this->_n_cols_11013)))&&d::truth((!d::truth(d::at(d::at(_n_solid_11046,_n_r_11049),_n_c_11048)))))){d::check_cancel();(void)(([&](){auto&& _n_array_11105=d::at(_n_g_11045,_n_r_11049);auto _n_index_11106=_n_c_11048;auto _n_value_11107=_n_ch_11050;d::put(_n_array_11105,_n_index_11106,_n_value_11107);return _n_value_11107;})());
}

}
};
auto _n_stamp_11051=[&]( d::Array<d::String,false> _a0,double _a1) mutable ->void{d::Array<d::String,false> _n_art_11052=_a0;
double _n_r0_11053=_a1;
d::forEach(_n_art_11052,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_11054=_a0;
double _n_k_11055=_a1;
{
double _n_c0_11056=(std::floor(this->_n_CX_11015)-((double(_n_line_11054.size())-1.0)/2.0));
{double _n_c_11057=0.0;
for(;d::truth((_n_c_11057<double(_n_line_11054.size())));(void)((_n_c_11057++))){d::check_cancel();if(d::truth((d::at(_n_line_11054,_n_c_11057)==d::String(u" ")))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_11108=d::at(_n_g_11045,(_n_r0_11053+_n_k_11055));auto _n_index_11109=(_n_c0_11056+_n_c_11057);auto _n_value_11110=(d::truth((d::at(_n_line_11054,_n_c_11057)==d::String(u"#")))?d::String(u" "):d::at(_n_line_11054,_n_c_11057));d::put(_n_array_11108,_n_index_11109,_n_value_11110);return _n_value_11110;})());
(void)(([&](){auto&& _n_array_11111=d::at(_n_solid_11046,(_n_r0_11053+_n_k_11055));auto _n_index_11112=(_n_c0_11056+_n_c_11057);auto _n_value_11113=true;d::put(_n_array_11111,_n_index_11112,_n_value_11113);return _n_value_11113;})());
}}

}
});};
(void)(_n_stamp_11051(_n_BASIN_11009,(_n_WATER_11004+1.0)));
(void)(_n_stamp_11051(_n_POST_11010,((_n_WATER_11004-double(_n_POST_11010.size()))+1.0)));
d::Array<std::array<double,2>,false> _n_rings_11058=d::Array<std::array<double,2>,false>{};
d::Array<double,false> _n_hits_11059=d::Array<double,false>{};
d::Array<std::array<double,4>,false> _n_crowns_11060=d::Array<std::array<double,4>,false>{};
for(auto &&_n_item_11114:this->_n_jets_11016){d::check_cancel();std::shared_ptr<_n_Record_11017> _n_jet_11061=_n_item_11114;
{
{double _n_i_11062=std::floor(((_n_t_11044-3.2)*_n_RATE_11003));
for(;d::truth((_n_i_11062<=std::ceil((_n_t_11044*_n_RATE_11003))));(void)((_n_i_11062++))){d::check_cancel();std::shared_ptr<_n_Record_11019> _n_d_11063=this->_n_drop_11018(_n_jet_11061,_n_i_11062);
double _n_age_11064=(_n_t_11044-_n_d_11063->_p_t0);
if(d::truth((_n_age_11064<0.0))){d::check_cancel();continue;
}
if(d::truth((_n_age_11064>=_n_d_11063->_p_end))){d::check_cancel();double _n_k_11065=(_n_age_11064-_n_d_11063->_p_end);
double _n_x_11066=(_n_d_11063->_p_vx*_n_d_11063->_p_end);
if((d::truth((_n_k_11065<1.4))&&d::truth((_n_hash_11011(_n_i_11062,(_n_jet_11061->_p_j+60.0))<0.018)))){d::check_cancel();(void)(_n_rings_11058.push(std::array<double,2>{_n_x_11066,_n_k_11065}));
}
if((d::truth((_n_k_11065<0.07))&&d::truth((d::mod(_n_i_11062,_n_jet_11061->_p_keep)==0.0)))){d::check_cancel();(void)(_n_hits_11059.push(_n_x_11066));
}
if((d::truth((_n_k_11065<0.4))&&d::truth((_n_hash_11011(_n_i_11062,(_n_jet_11061->_p_j+70.0))<0.03)))){d::check_cancel();(void)(_n_crowns_11060.push(std::array<double,4>{_n_x_11066,_n_k_11065,_n_i_11062,_n_jet_11061->_p_j}));
}
continue;
}
double _n_vy_11067=(_n_d_11063->_p_vy-(_n_G_11002*_n_age_11064));
if((d::truth((_n_vy_11067<0.0))&&d::truth(d::mod(_n_i_11062,_n_jet_11061->_p_keep)))){d::check_cancel();continue;
}
double _n_row_11068=(((_n_WATER_11004-_n_NOZ_11005)-(_n_d_11063->_p_vy*_n_age_11064))+(((_n_G_11002*_n_age_11064)*_n_age_11064)/2.0));
if(((d::truth((_n_vy_11067<0.0))&&d::truth((!d::truth(_n_jet_11061->_p_j))))&&d::truth((_n_row_11068>((_n_WATER_11004-_n_NOZ_11005)-1.0))))){d::check_cancel();continue;
}
double _n_speed_11069=d::hypot(std::initializer_list<double>{_n_d_11063->_p_vx,_n_vy_11067});
double _n_ang_11070=((std::atan2(_n_vy_11067,_n_d_11063->_p_vx)*180.0)/ascii::PI);
d::String _n_ch_11071{};
if(d::truth((_n_vy_11067<0.0))){d::check_cancel();(void)((_n_ch_11071=(d::truth((_n_speed_11069>17.0))?d::String(u":"):d::String(u"·"))));
}else {d::check_cancel();if(d::truth((!d::truth(_n_jet_11061->_p_j)))){d::check_cancel();(void)((_n_ch_11071=(d::truth((_n_speed_11069>7.0))?d::String(u"|"):(d::truth((_n_speed_11069>3.0))?d::String(u"·"):d::String(u"°")))));
}else {d::check_cancel();if(d::truth((std::fabs((_n_ang_11070-90.0))<22.0))){d::check_cancel();(void)((_n_ch_11071=d::String(u"|")));
}else {d::check_cancel();if((d::truth((_n_ang_11070<28.0))||d::truth((_n_ang_11070>152.0)))){d::check_cancel();(void)((_n_ch_11071=(d::truth((d::mod(_n_row_11068,1.0)<0.5))?d::String(u"-"):d::String(u"_"))));
}else {d::check_cancel();(void)((_n_ch_11071=(d::truth((_n_ang_11070<90.0))?d::String(u"/"):d::String(u"\\"))));
}
}
}
}
(void)(([&](){auto _n_argument_11115=std::floor((this->_n_CX_11015+((2.0*_n_d_11063->_p_vx)*_n_age_11064)));auto _n_argument_11116=std::floor(_n_row_11068);auto _n_argument_11117=_n_ch_11071;return _n_put_11047(_n_argument_11115,_n_argument_11116,_n_argument_11117);})());
}}

}
}
double _n_lo_11072=(std::floor(this->_n_CX_11015)-23.0);
double _n_hi_11073=(std::floor(this->_n_CX_11015)+23.0);
{double _n_c_11074=_n_lo_11072;
for(;d::truth((_n_c_11074<=_n_hi_11073));(void)((_n_c_11074++))){d::check_cancel();if(d::truth(d::at(d::at(_n_solid_11046,_n_WATER_11004),_n_c_11074))){d::check_cancel();continue;
}
double _n_x_11075=(((_n_c_11074+0.5)-this->_n_CX_11015)/2.0);
double _n_h_11076=0.0;
for(auto &&_n_item_11118:_n_rings_11058){d::check_cancel();auto _n_binding_11119=_n_item_11118;
double _n_x0_11077=d::at(_n_binding_11119,0.0);
double _n_k_11078=d::at(_n_binding_11119,1.0);
{
double _n_d_11079=std::fabs(((std::fabs((_n_x_11075-_n_x0_11077))-0.5)-(2.6*_n_k_11078)));
if(d::truth((_n_d_11079<0.4))){d::check_cancel();(void)((_n_h_11076=(_n_h_11076+((1.0-(_n_d_11079*2.5))*(1.0-(_n_k_11078/1.4))))));
}

}
}
(void)(([&](){auto&& _n_array_11120=d::at(_n_g_11045,_n_WATER_11004);auto _n_index_11121=_n_c_11074;auto _n_value_11122=(d::truth((_n_h_11076>0.3))?d::String(u"~"):d::String(u"-"));d::put(_n_array_11120,_n_index_11121,_n_value_11122);return _n_value_11122;})());
}}
for(auto &&_n_item_11123:_n_hits_11059){d::check_cancel();double _n_x_11080=_n_item_11123;
{
double _n_c_11081=std::floor((this->_n_CX_11015+(2.0*_n_x_11080)));
if(((d::truth((_n_c_11081>=_n_lo_11072))&&d::truth((_n_c_11081<=_n_hi_11073)))&&d::truth((!d::truth(d::at(d::at(_n_solid_11046,_n_WATER_11004),_n_c_11081)))))){d::check_cancel();(void)(([&](){auto&& _n_array_11124=d::at(_n_g_11045,_n_WATER_11004);auto _n_index_11125=_n_c_11081;auto _n_value_11126=d::String(u"^");d::put(_n_array_11124,_n_index_11125,_n_value_11126);return _n_value_11126;})());
}

}
}
for(auto &&_n_item_11127:_n_crowns_11060){d::check_cancel();auto _n_binding_11128=_n_item_11127;
double _n_x_11082=d::at(_n_binding_11128,0.0);
double _n_k_11083=d::at(_n_binding_11128,1.0);
double _n_i_11084=d::at(_n_binding_11128,2.0);
double _n_j_11085=d::at(_n_binding_11128,3.0);
{
for(auto &&_n_item_11129:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_side_11086=_n_item_11129;
{
double _n_vx_11087=(_n_side_11086*(1.2+(_n_hash_11011(_n_i_11084,(_n_j_11085+40.0))*1.4)));
double _n_vy_11088=(7.0+(_n_hash_11011(_n_i_11084,((_n_j_11085+50.0)+_n_side_11086))*4.0));
double _n_y_11089=((_n_vy_11088*_n_k_11083)-(((_n_G_11002*_n_k_11083)*_n_k_11083)/2.0));
if(d::truth((_n_y_11089<=0.2))){d::check_cancel();continue;
}
(void)(([&](){auto _n_argument_11130=std::floor((this->_n_CX_11015+(2.0*(_n_x_11082+(_n_vx_11087*_n_k_11083)))));auto _n_argument_11131=std::floor((_n_WATER_11004-_n_y_11089));auto _n_argument_11132=(d::truth(((_n_vy_11088-(_n_G_11002*_n_k_11083))>0.0))?d::String(u"'"):d::String(u"."));return _n_put_11047(_n_argument_11130,_n_argument_11131,_n_argument_11132);})());

}
}

}
}
return d::join(d::map(_n_g_11045,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_11090=_a0;
return d::join(_n_row_11090,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fountain").cols)*ascii::catalog_meta("fountain").rows);auto _env=std::make_shared<_n_Record_11091>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fountain_meta(){return catalog_meta("fountain");}
std::unique_ptr<Piece> make_fountain(const AsciiPieceOptions &o){return std::make_unique<Native_fountain>(o);}
}
