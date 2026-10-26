// Direct, statically typed C++ from src/pieces/whale.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36969;
struct _n_Record_36976;
struct _n_Record_36987;
struct _n_Record_37094;
struct _n_Record_36969{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_36969> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36969>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_36976{
d::Array<d::Array<std::optional<d::String>,false>,false> _p_surf{};
d::Array<d::Array<std::optional<d::String>,false>,false> _p_arch{};
d::Array<d::Array<std::optional<d::String>,false>,false> _p_fluke{};
static std::shared_ptr<_n_Record_36976> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36976>();out->_p_surf=d::decode<d::Array<d::Array<std::optional<d::String>,false>,false>>(j["surf"]);out->_p_arch=d::decode<d::Array<d::Array<std::optional<d::String>,false>,false>>(j["arch"]);out->_p_fluke=d::decode<d::Array<d::Array<std::optional<d::String>,false>,false>>(j["fluke"]);return out;}
};
struct _n_Record_36987{
d::Array<double,false> _p_surf{};
d::Array<double,false> _p_arch{};
d::Array<double,false> _p_fluke{};
static std::shared_ptr<_n_Record_36987> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36987>();out->_p_surf=d::decode<d::Array<double,false>>(j["surf"]);out->_p_arch=d::decode<d::Array<double,false>>(j["arch"]);out->_p_fluke=d::decode<d::Array<double,false>>(j["fluke"]);return out;}
};
struct _n_Record_37094{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_37094> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37094>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<d::Array<std::optional<d::String>,false>,false> _n_solidify_36974(d::Array<d::String,false> _a0,d::String _a1);
double _n_hash_36990(double _a0,double _a1);
double _n_ease_36991(double _a0);
double _n_depth_36992(double _a0,double _a1,double _a2,double _a3,double _a4);
std::shared_ptr<_n_Record_36969> _n_meta_36968=[](){return ([&](){auto _n_object_37097=std::make_shared<_n_Record_36969>();_n_object_37097->_p_name=d::String(u"whale");_n_object_37097->_p_category=d::String(u"creatures");_n_object_37097->_p_note=d::String(u"a whale blows, arches its back and dives, fluke last");_n_object_37097->_p_cols=72.0;_n_object_37097->_p_rows=18.0;_n_object_37097->_p_fps=15.0;return _n_object_37097;})();}();
d::Array<d::String,false> _n_SURF_36970=[](){return d::Array<d::String,false>{d::String(u"                 _.-''-._"),d::String(u"          __..--'        `--.....______"),d::String(u"     _.--'                             ``--.._/|"),d::String(u"   .'       #o#                              `-.._"),d::String(u"  (____..--''                                     `-.._")};}();
d::Array<d::String,false> _n_ARCH_36971=[](){return d::Array<d::String,false>{d::String(u"                __..--.._/|"),d::String(u"           _.-''           `-._"),d::String(u"        .-'                    `-._"),d::String(u"      .'                           `-._"),d::String(u"     /                                 `-._"),d::String(u"    /                                      `-._")};}();
d::Array<d::String,false> _n_FLUKE_36972=[](){return d::Array<d::String,false>{d::String(u" ._                          _."),d::String(u"  \\`-.._                _..-'/"),d::String(u"   `.   ``--.._    _.--''   .'"),d::String(u"     `-._      `\\/'      _.-'"),d::String(u"         ``--.._||_..--''"),d::String(u"                ||"),d::String(u"                ||"),d::String(u"                ||")};}();
const d::String _n_SHADE_36973=[](){return d::String(u" :::..");}();
std::shared_ptr<_n_Record_36976> _n_BODY_36975=[](){return ([&](){auto _n_object_37099=std::make_shared<_n_Record_36976>();_n_object_37099->_p_surf=_n_solidify_36974(_n_SURF_36970,_n_SHADE_36973);_n_object_37099->_p_arch=_n_solidify_36974(_n_ARCH_36971,_n_SHADE_36973);_n_object_37099->_p_fluke=_n_solidify_36974(_n_FLUKE_36972,d::String(u""));return _n_object_37099;})();}();
const double _n_SEA_36977=[](){return 13.0;}();
const double _n_LOOP_36978=[](){return 10.0;}();
const double _n_T0_36979=[](){return 1.5;}();
const double _n_SWIM_36980=[](){return 2.6;}();
const double _n_X0_36981=[](){return 13.0;}();
const double _n_BLOW_36982=[](){return 0.7;}();
const double _n_HOLE_36983=[](){return (d::indexOf(d::at(_n_SURF_36970,0.0),d::String(u"''"))+1.0);}();
const double _n_WIND_36984=[](){return 1.5;}();
const double _n_FIN_36985=[](){return ([&](){auto _n_left_37100=d::indexOf(d::at(_n_SURF_36970,2.0),d::String(u"|"));auto _n_right_37101=d::indexOf(d::at(_n_ARCH_36971,0.0),d::String(u"|"));return (_n_left_37100-_n_right_37101);})();}();
std::shared_ptr<_n_Record_36987> _n_UP_36986=[](){return ([&](){auto _n_object_37103=std::make_shared<_n_Record_36987>();_n_object_37103->_p_surf=d::Array<double,false>{0.0,1.0,3.0,3.8};_n_object_37103->_p_arch=d::Array<double,false>{3.1,3.8,4.6,5.2};_n_object_37103->_p_fluke=d::Array<double,false>{5.0,5.9,7.5,8.5};return _n_object_37103;})();}();
const double _n_DIVE_36988=[](){return d::at(_n_UP_36986->_p_arch,3.0);}();
const double _n_FLUKE_X_36989=[](){return (((((_n_X0_36981-(_n_SWIM_36980*_n_DIVE_36988))-2.0)+_n_FIN_36985)+d::indexOf(d::at(_n_ARCH_36971,0.0),d::String(u"|")))+4.0);}();
d::Array<d::Array<double,false>,false> _n_DRIP_36993=[](){return d::map(d::Array<double,false>{3.0,6.0,10.0,13.0,19.0,22.0,26.0,29.0},[&]( double _a0) mutable ->d::Array<double,false>{double _n_k_37024=_a0;
{
double _n_row_37025=4.0;
while((d::truth((_n_row_37025>0.0))&&d::truth((([&]()->d::String{auto _n_logical_37104=d::at(d::at(_n_FLUKE_36972,_n_row_37025),_n_k_37024);return d::truth(_n_logical_37104)?_n_logical_37104:d::String(u" ");})()==d::String(u" "))))){d::check_cancel();(void)((_n_row_37025--));
}
return d::Array<double,false>{_n_k_37024,_n_row_37025};

}
});}();
d::Array<d::Array<std::optional<d::String>,false>,false> _n_solidify_36974(d::Array<d::String,false> _a0,d::String _a1){d::Array<d::String,false> _n_art_37002=_a0;
d::String _n_shade_37003=_a1;
{
double _n_w_37004=([&](){d::Array<double> _n_numbers_37105;for(auto _x:d::map(_n_art_37002,[&]( d::String _a0) mutable ->double{d::String _n_l_37005=_a0;
return double(_n_l_37005.size());}))_n_numbers_37105.push(_x);return d::maximum(_n_numbers_37105);})();
d::Array<d::Array<std::optional<d::String>,false>,false> _n_g_37006=d::map(_n_art_37002,[&]( d::String _a0) mutable ->d::Array<std::optional<d::String>,false>{d::String _n_l_37007=_a0;
return d::map(([&](){d::Array<d::String,false> _n_array_37106;for(const auto &_v:d::padEnd(_n_l_37007,_n_w_37004))_n_array_37106.push(_v);return _n_array_37106;})(),[&]( d::String _a0) mutable ->std::optional<d::String>{d::String _n_ch_37008=_a0;
return (d::truth((_n_ch_37008==d::String(u" ")))?std::optional<d::String>{}:std::optional<d::String>(_n_ch_37008));});});
{double _n_k_37009=0.0;
for(;(d::truth(_n_shade_37003)&&d::truth((_n_k_37009<_n_w_37004)));(void)((_n_k_37009++))){d::check_cancel();double _n_top_37010=d::findIndex(_n_g_37006,[&]( d::Array<std::optional<d::String>,false> _a0) mutable ->bool{d::Array<std::optional<d::String>,false> _n_row_37011=_a0;
return (d::present(d::at(_n_row_37011,_n_k_37009)));});
{double _n_r_37012=(_n_top_37010+1.0);
for(;(d::truth((_n_top_37010>=0.0))&&d::truth((_n_r_37012<double(_n_g_37006.size()))));(void)((_n_r_37012++))){d::check_cancel();(void)(([&]()->d::String{auto&& _n_array_37107=d::at(_n_g_37006,_n_r_37012);auto _n_index_37108=_n_k_37009;auto _n_old_37110=d::at(_n_array_37107,_n_index_37108);if(d::present(_n_old_37110))return d::read(_n_old_37110);auto _n_value_37109=d::at(_n_shade_37003,((_n_r_37012+double(_n_shade_37003.size()))-double(_n_g_37006.size())));d::put(_n_array_37107,_n_index_37108,std::optional<d::String>(_n_value_37109));return _n_value_37109;})());
}}
}}
return d::map(_n_g_37006,[&]( d::Array<std::optional<d::String>,false> _a0) mutable ->d::Array<std::optional<d::String>,false>{d::Array<std::optional<d::String>,false> _n_row_37013=_a0;
return d::map(_n_row_37013,[&]( std::optional<d::String> _a0) mutable ->std::optional<d::String>{std::optional<d::String> _n_ch_37014=_a0;
return (d::truth((d::equal(_n_ch_37014,d::String(u"#"))))?std::optional<d::String>(d::String(u" ")):_n_ch_37014);});});

}
}

double _n_hash_36990(double _a0,double _a1){double _n_i_37015=_a0;
double _n_s_37016=_a1;
{
double _n_h_37017=([&](){auto _n_left_37111=d::imul(double(d::i32(_n_i_37015)^d::i32(739982445.0)),695872825.0);auto _n_right_37112=d::imul((_n_s_37016+7.0),2654435761.0);return double(d::i32(_n_left_37111)^d::i32(_n_right_37112));})();
(void)((_n_h_37017=d::imul(double(d::i32(_n_h_37017)^d::i32(double(d::u32(_n_h_37017)>>(d::u32(15.0)&31)))),2246822519.0)));
return (double(d::u32(double(d::i32(_n_h_37017)^d::i32(double(d::u32(_n_h_37017)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_36991(double _a0){double _n_u_37018=_a0;
return (d::truth((_n_u_37018<=0.0))?0.0:(d::truth((_n_u_37018>=1.0))?1.0:((_n_u_37018*_n_u_37018)*(3.0-(2.0*_n_u_37018)))));}

double _n_depth_36992(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_u_37019=_a0;
double _n_up_37020=_a1;
double _n_top_37021=_a2;
double _n_down_37022=_a3;
double _n_under_37023=_a4;
return ((d::truth((_n_u_37019<_n_up_37020))||d::truth((_n_u_37019>_n_under_37023)))?1.0:(d::truth((_n_u_37019<_n_top_37021))?(1.0-_n_ease_36991(((_n_u_37019-_n_up_37020)/(_n_top_37021-_n_up_37020)))):(d::truth((_n_u_37019<_n_down_37022))?0.0:_n_ease_36991(((_n_u_37019-_n_down_37022)/(_n_under_37023-_n_down_37022))))));}

struct Native_whale final:ascii::Piece{
double _n_cols_36994{};
double _n_rows_36995{};
d::Array<d::Array<d::String,false>,false> _n_g_36996{};
d::String _n_SPRAY_37000{};
std::function<d::String(double,std::shared_ptr<_n_Record_37094>)> _render;
void _n_put_36997(double _a0,double _a1,d::String _a2){double _n_r_37026=_a0;
double _n_c_37027=_a1;
d::String _n_ch_37028=_a2;
{
if((((d::truth((_n_r_37026>=0.0))&&d::truth((_n_r_37026<this->_n_rows_36995)))&&d::truth((_n_c_37027>=0.0)))&&d::truth((_n_c_37027<this->_n_cols_36994)))){d::check_cancel();(void)(([&](){auto&& _n_array_37152=d::at(this->_n_g_36996,_n_r_37026);auto _n_index_37153=_n_c_37027;auto _n_value_37154=_n_ch_37028;d::put(_n_array_37152,_n_index_37153,_n_value_37154);return _n_value_37154;})());
}

}
}

bool _n_open_36998(double _a0,double _a1){double _n_r_37029=_a0;
double _n_c_37030=_a1;
return ([&]()->bool{auto _n_logical_37155=([&]()->bool{auto _n_logical_37156=([&]()->bool{auto _n_logical_37157=([&]()->bool{auto _n_logical_37158=(_n_r_37029>=0.0);return d::truth(_n_logical_37158)?(_n_r_37029<_n_SEA_36977):_n_logical_37158;})();return d::truth(_n_logical_37157)?(_n_c_37030>=0.0):_n_logical_37157;})();return d::truth(_n_logical_37156)?(_n_c_37030<this->_n_cols_36994):_n_logical_37156;})();return d::truth(_n_logical_37155)?(d::at(d::at(this->_n_g_36996,_n_r_37029),_n_c_37030)==d::String(u" ")):_n_logical_37155;})();}

double _n_stamp_36999(d::Array<d::Array<std::optional<d::String>,false>,false> _a0,double _a1,double _a2){d::Array<d::Array<std::optional<d::String>,false>,false> _n_shape_37031=_a0;
double _n_left_37032=_a1;
double _n_sink_37033=_a2;
{
double _n_h_37034=double(_n_shape_37031.size());
double _n_drop_37035=d::round((_n_sink_37033*_n_h_37034));
double _n_x_37036=d::round(_n_left_37032);
(void)(d::forEach(_n_shape_37031,[&]( d::Array<std::optional<d::String>,false> _a0,double _a1) mutable ->void{d::Array<std::optional<d::String>,false> _n_line_37037=_a0;
double _n_i_37038=_a1;
{
double _n_r_37039=(((_n_SEA_36977-_n_h_37034)+_n_i_37038)+_n_drop_37035);
if(d::truth((_n_r_37039<_n_SEA_36977))){d::check_cancel();(void)(d::forEach(_n_line_37037,[&]( std::optional<d::String> _a0,double _a1) mutable ->std::optional<bool>{std::optional<d::String> _n_ch_37040=_a0;
double _n_k_37041=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_37159=(d::present(_n_ch_37040));return d::truth(_n_logical_37159)?(this->_n_put_36997(_n_r_37039,(_n_x_37036+_n_k_37041),d::read(_n_ch_37040)),std::optional<bool>{}):std::optional<bool>(_n_logical_37159);})();}));
}

}
}));
return ((_n_SEA_36977-_n_h_37034)+_n_drop_37035);

}
}

void _n_blow_37001(double _a0,double _a1,double _a2,double _a3){double _n_br_37042=_a0;
double _n_bc_37043=_a1;
double _n_from_37044=_a2;
double _n_s_37045=_a3;
{
double _n_top_37046=(6.6*std::sqrt(d::minimum({1.0,(_n_s_37045/0.5)})));
double _n_cut_37047=(d::truth((_n_s_37045<0.8))?0.0:((_n_s_37045-0.8)*7.0));
double _n_hw_37048=([&](){auto _n_left_37160=(1.0+(3.6*d::minimum({1.0,(_n_s_37045/0.8)})));auto _n_right_37161=(2.4*d::maximum({0.0,(_n_s_37045-0.8)}));return (_n_left_37160+_n_right_37161);})();
double _n_hh_37049=([&](){auto _n_left_37162=(1.0+(0.6*d::minimum({1.0,(_n_s_37045/0.8)})));auto _n_right_37163=(0.5*d::maximum({0.0,(_n_s_37045-0.8)}));return (_n_left_37162+_n_right_37163);})();
double _n_hy0_37050=((_n_top_37046-0.6)-(0.5*d::maximum({0.0,(_n_s_37045-1.0)})));
double _n_amp_37051=([&](){auto _n_left_37164=d::minimum({1.0,(_n_s_37045/0.2)});auto _n_right_37165=(d::truth((_n_s_37045<1.0))?1.0:std::exp(((-d::number((_n_s_37045-1.0)))/1.2)));return (_n_left_37164*_n_right_37165);})();
double _n_drift_37052=(_n_WIND_36984*_n_s_37045);
{double _n_r_37053=(_n_br_37042-1.0);
for(;d::truth((_n_r_37053>=d::maximum({0.0,(_n_br_37042-9.0)})));(void)((_n_r_37053--))){d::check_cancel();double _n_y_37054=(_n_br_37042-_n_r_37053);
double _n_lean_37055=([&](){auto _n_argument_37166=1.0;auto _n_argument_37167=(_n_y_37054/d::maximum({1.0,_n_top_37046}));return d::minimum({_n_argument_37166,_n_argument_37167});})();
double _n_mid_37056=((_n_bc_37043+((_n_from_37044-_n_bc_37043)*_n_lean_37055))+((_n_drift_37052*_n_lean_37055)*_n_lean_37055));
{double _n_c_37057=std::floor((_n_mid_37056-12.0));
for(;d::truth((_n_c_37057<=(_n_mid_37056+12.0)));(void)((_n_c_37057++))){d::check_cancel();if(d::truth((!d::truth(this->_n_open_36998(_n_r_37053,_n_c_37057))))){d::check_cancel();continue;
}
double _n_dx_37058=(_n_c_37057-_n_mid_37056);
double _n_dy_37059=((_n_y_37054-_n_hy0_37050)/_n_hh_37049);
double _n_d_37060=((d::truth((_n_y_37054>_n_cut_37047))&&d::truth((_n_y_37054<=_n_top_37046)))?std::exp((-d::number(std::pow((_n_dx_37058/(0.3+(0.17*_n_y_37054))),2.0)))):0.0);
(void)((_n_d_37060=([&](){auto _n_argument_37168=_n_d_37060;auto _n_argument_37169=(_n_amp_37051*std::exp(((-d::number(std::pow((_n_dx_37058/_n_hw_37048),2.0)))-(_n_dy_37059*_n_dy_37059))));return d::maximum({_n_argument_37168,_n_argument_37169});})()));
(void)((_n_d_37060=(_n_d_37060*(0.92+(0.16*_n_hash_36990(((_n_c_37057*31.0)+_n_r_37053),5.0))))));
double _n_i_37061=([&](){auto _n_argument_37170=(double(this->_n_SPRAY_37000.size())-1.0);auto _n_argument_37171=std::floor((_n_d_37060*double(this->_n_SPRAY_37000.size())));return d::minimum({_n_argument_37170,_n_argument_37171});})();
if(d::truth((_n_i_37061>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_37172=d::at(this->_n_g_36996,_n_r_37053);auto _n_index_37173=_n_c_37057;auto _n_value_37174=d::at(this->_n_SPRAY_37000,_n_i_37061);d::put(_n_array_37172,_n_index_37173,_n_value_37174);return _n_value_37174;})());
}
}}
}}

}
}

explicit Native_whale(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_37113=_n_meta_36968;
this->_n_cols_36994=_n_binding_37113->_p_cols;
this->_n_rows_36995=_n_binding_37113->_p_rows;
this->_n_g_36996=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_36995,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_36994));}));
this->_n_SPRAY_37000=d::String(u" .':;");
_render=[=]( double _a0,std::shared_ptr<_n_Record_37094> _a1) mutable ->d::String{double _n_t_37062=_a0;
{
double _n_u_37063=d::mod((d::mod((_n_t_37062+_n_T0_36979),_n_LOOP_36978)+_n_LOOP_36978),_n_LOOP_36978);
for(auto &&_n_item_37114:this->_n_g_36996){d::check_cancel();d::Array<d::String,false> _n_row_37064=_n_item_37114;
(void)(_n_row_37064.fill(d::String(u" ")));
}
{double _n_c_37065=0.0;
for(;d::truth((_n_c_37065<this->_n_cols_36994));(void)((_n_c_37065++))){d::check_cancel();double _n_h_37066=([&](){auto _n_left_37115=std::sin(((_n_c_37065*0.61)-(_n_t_37062*1.4)));auto _n_right_37116=(0.7*std::sin(((_n_c_37065*0.27)+(_n_t_37062*0.8))));return (_n_left_37115+_n_right_37116);})();
(void)(([&](){auto&& _n_array_37117=d::at(this->_n_g_36996,_n_SEA_36977);auto _n_index_37118=_n_c_37065;auto _n_value_37119=(d::truth((_n_h_37066>1.45))?d::String(u"-"):d::String(u"~"));d::put(_n_array_37117,_n_index_37118,_n_value_37119);return _n_value_37119;})());
for(auto &&_n_item_37120:d::Array<d::Array<double,false>,false>{d::Array<double,false>{(_n_SEA_36977+2.0),0.6},d::Array<double,false>{(_n_SEA_36977+4.0),(-d::number(0.4))}}){d::check_cancel();auto _n_binding_37121=_n_item_37120;
double _n_r_37067=d::at(_n_binding_37121,0.0);
double _n_k_37068=d::at(_n_binding_37121,1.0);
{
double _n_v_37069=([&](){auto _n_left_37122=std::sin((((_n_c_37065*0.45)+((_n_t_37062*_n_k_37068)*2.0))+_n_r_37067));auto _n_right_37123=std::sin((((_n_c_37065*0.06)-((_n_t_37062*_n_k_37068)*0.3))+_n_r_37067));return (_n_left_37122*_n_right_37123);})();
if(d::truth((_n_v_37069>0.6))){d::check_cancel();(void)(([&](){auto&& _n_array_37124=d::at(this->_n_g_36996,_n_r_37067);auto _n_index_37125=_n_c_37065;auto _n_value_37126=d::String(u"~");d::put(_n_array_37124,_n_index_37125,_n_value_37126);return _n_value_37126;})());
}

}
}
}}
double _n_hx_37070=(_n_X0_36981-(_n_SWIM_36980*d::minimum({_n_u_37063,_n_DIVE_36988})));
double _n_top_37071=([&](){auto _n_argument_37127=_n_BODY_36975->_p_surf;auto _n_argument_37128=(_n_hx_37070-2.0);auto _n_argument_37129=([&](){auto _n_arguments_37130=_n_UP_36986->_p_surf;return _n_depth_36992(_n_u_37063,d::at(_n_arguments_37130,0.0),d::at(_n_arguments_37130,1.0),d::at(_n_arguments_37130,2.0),d::at(_n_arguments_37130,3.0));})();return this->_n_stamp_36999(_n_argument_37127,_n_argument_37128,_n_argument_37129);})();
double _n_arch_37072=([&](){auto _n_arguments_37131=_n_UP_36986->_p_arch;return _n_depth_36992(_n_u_37063,d::at(_n_arguments_37131,0.0),d::at(_n_arguments_37131,1.0),d::at(_n_arguments_37131,2.0),d::at(_n_arguments_37131,3.0));})();
(void)(this->_n_stamp_36999(_n_BODY_36975->_p_arch,((_n_hx_37070-2.0)+_n_FIN_36985),_n_arch_37072));
if(d::truth((_n_arch_37072<0.7))){d::check_cancel();double _n_low_37073=((double(_n_ARCH_36971.size())-1.0)-d::round((_n_arch_37072*double(_n_ARCH_36971.size()))));
double _n_lip_37074=([&](){auto _n_left_37132=d::round(((_n_hx_37070-2.0)+_n_FIN_36985));auto _n_right_37133=d::search(d::at(_n_ARCH_36971,_n_low_37073),d::Regex(u"\\S",u""));return (_n_left_37132+_n_right_37133);})();
{double _n_j_37075=0.0;
for(;d::truth((_n_j_37075<6.0));(void)((_n_j_37075++))){d::check_cancel();double _n_p_37076=d::mod(((_n_u_37063*1.4)+_n_hash_36990(_n_j_37075,3.0)),1.0);
double _n_a_37077=_n_hash_36990(_n_j_37075,4.0);
double _n_r_37078=d::round(((_n_SEA_36977-1.0)-((0.6+(1.6*_n_a_37077))*std::sin((ascii::PI*_n_p_37076)))));
double _n_c_37079=d::round(((_n_lip_37074-1.0)-(_n_p_37076*(1.0+(2.0*_n_a_37077)))));
if(d::truth(this->_n_open_36998(_n_r_37078,_n_c_37079))){d::check_cancel();(void)(([&](){auto&& _n_array_37134=d::at(this->_n_g_36996,_n_r_37078);auto _n_index_37135=_n_c_37079;auto _n_value_37136=(d::truth((_n_p_37076<0.5))?d::String(u"'"):d::String(u"."));d::put(_n_array_37134,_n_index_37135,_n_value_37136);return _n_value_37136;})());
}
}}
}
if((d::truth((_n_u_37063>_n_BLOW_36982))&&d::truth((_n_u_37063<(_n_BLOW_36982+3.0))))){d::check_cancel();(void)(([&](){auto _n_argument_37137=_n_top_37071;auto _n_argument_37138=d::round(((_n_hx_37070-2.0)+_n_HOLE_36983));auto _n_argument_37139=(((_n_X0_36981-(_n_SWIM_36980*_n_BLOW_36982))-2.0)+_n_HOLE_36983);auto _n_argument_37140=(_n_u_37063-_n_BLOW_36982);return this->_n_blow_37001(_n_argument_37137,_n_argument_37138,_n_argument_37139,_n_argument_37140);})());
}
double _n_sink_37080=([&](){auto _n_arguments_37141=_n_UP_36986->_p_fluke;return _n_depth_36992(_n_u_37063,d::at(_n_arguments_37141,0.0),d::at(_n_arguments_37141,1.0),d::at(_n_arguments_37141,2.0),d::at(_n_arguments_37141,3.0));})();
double _n_fx_37081=d::round((_n_FLUKE_X_36989-16.0));
(void)(this->_n_stamp_36999(_n_BODY_36975->_p_fluke,_n_fx_37081,_n_sink_37080));
if((d::truth((_n_sink_37080<1.0))&&d::truth((_n_u_37063>(d::at(_n_UP_36986->_p_fluke,1.0)-0.2))))){d::check_cancel();double _n_ft_37082=((_n_SEA_36977-double(_n_FLUKE_36972.size()))+d::round((_n_sink_37080*double(_n_FLUKE_36972.size()))));
(void)(d::forEach(_n_DRIP_36993,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_37142=_a0;
double _n_dx_37083=d::at(_n_binding_37142,0.0);
double _n_row_37084=d::at(_n_binding_37142,1.0);
double _n_j_37085=_a1;
{
for(auto &&_n_item_37143:d::Array<double,false>{0.0,0.5}){d::check_cancel();double _n_lag_37086=_n_item_37143;
{
double _n_p_37087=d::mod((((_n_u_37063*1.6)+_n_hash_36990(_n_j_37085,9.0))+_n_lag_37086),1.0);
double _n_r_37088=std::floor((((_n_ft_37082+_n_row_37084)+1.0)+((_n_p_37087*_n_p_37087)*(((_n_SEA_36977-_n_ft_37082)-_n_row_37084)-1.0))));
if(d::truth(this->_n_open_36998(_n_r_37088,(_n_fx_37081+_n_dx_37083)))){d::check_cancel();(void)(([&](){auto&& _n_array_37144=d::at(this->_n_g_36996,_n_r_37088);auto _n_index_37145=(_n_fx_37081+_n_dx_37083);auto _n_value_37146=(d::truth((_n_p_37087<0.25))?d::String(u"'"):d::String(u"."));d::put(_n_array_37144,_n_index_37145,_n_value_37146);return _n_value_37146;})());
}

}
}

}
}));
}
double _n_gone_37089=(d::at(_n_UP_36986->_p_fluke,3.0)-0.2);
if((d::truth((_n_u_37063>_n_gone_37089))&&d::truth((_n_u_37063<(_n_gone_37089+1.2))))){d::check_cancel();double _n_w_37090=d::round((4.0+(5.0*(_n_u_37063-_n_gone_37089))));
double _n_fade_37091=((_n_u_37063-_n_gone_37089)/1.2);
{double _n_c_37092=(-d::number(_n_w_37090));
for(;d::truth((_n_c_37092<=_n_w_37090));(void)((_n_c_37092++))){d::check_cancel();if(d::truth((([&](){auto _n_argument_37147=(_n_c_37092+40.0);auto _n_argument_37148=std::floor((_n_u_37063*4.0));return _n_hash_36990(_n_argument_37147,_n_argument_37148);})()>_n_fade_37091))){d::check_cancel();(void)(([&](){auto _n_argument_37149=_n_SEA_36977;auto _n_argument_37150=(d::round(_n_FLUKE_X_36989)+_n_c_37092);auto _n_argument_37151=d::String(u"_");return this->_n_put_36997(_n_argument_37149,_n_argument_37150,_n_argument_37151);})());
}
}}
}
return d::join(d::map(this->_n_g_36996,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_37093=_a0;
return d::join(_n_row_37093,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("whale").cols)*ascii::catalog_meta("whale").rows);auto _env=std::make_shared<_n_Record_37094>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &whale_meta(){return catalog_meta("whale");}
std::unique_ptr<Piece> make_whale(const AsciiPieceOptions &o){return std::make_unique<Native_whale>(o);}
}
