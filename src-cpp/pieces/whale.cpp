// Direct, statically typed C++ from src/pieces/whale.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_36970;
struct _n_Record_36977;
struct _n_Record_36988;
struct _n_Record_37095;
struct _n_Record_36970{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_36970> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36970>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_36977{
d::Array<d::Array<std::optional<d::String>,false>,false> _p_surf{};
d::Array<d::Array<std::optional<d::String>,false>,false> _p_arch{};
d::Array<d::Array<std::optional<d::String>,false>,false> _p_fluke{};
static std::shared_ptr<_n_Record_36977> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36977>();out->_p_surf=d::decode<d::Array<d::Array<std::optional<d::String>,false>,false>>(j["surf"]);out->_p_arch=d::decode<d::Array<d::Array<std::optional<d::String>,false>,false>>(j["arch"]);out->_p_fluke=d::decode<d::Array<d::Array<std::optional<d::String>,false>,false>>(j["fluke"]);return out;}
};
struct _n_Record_36988{
std::array<double,4> _p_surf{};
std::array<double,4> _p_arch{};
std::array<double,4> _p_fluke{};
static std::shared_ptr<_n_Record_36988> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_36988>();out->_p_surf=d::decode<std::array<double,4>>(j["surf"]);out->_p_arch=d::decode<std::array<double,4>>(j["arch"]);out->_p_fluke=d::decode<std::array<double,4>>(j["fluke"]);return out;}
};
struct _n_Record_37095{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_37095> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_37095>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<d::Array<std::optional<d::String>,false>,false> _n_solidify_36975(d::Array<d::String,false> _a0,d::String _a1);
double _n_hash_36991(double _a0,double _a1);
double _n_ease_36992(double _a0);
double _n_depth_36993(double _a0,double _a1,double _a2,double _a3,double _a4);
std::shared_ptr<_n_Record_36970> _n_meta_36969=[](){return ([&](){auto _n_object_37098=std::make_shared<_n_Record_36970>();_n_object_37098->_p_name=d::String(u"whale");_n_object_37098->_p_category=d::String(u"creatures");_n_object_37098->_p_note=d::String(u"a whale blows, arches its back and dives, fluke last");_n_object_37098->_p_cols=72.0;_n_object_37098->_p_rows=18.0;_n_object_37098->_p_fps=15.0;return _n_object_37098;})();}();
d::Array<d::String,false> _n_SURF_36971=[](){return d::Array<d::String,false>{d::String(u"                 _.-''-._"),d::String(u"          __..--'        `--.....______"),d::String(u"     _.--'                             ``--.._/|"),d::String(u"   .'       #o#                              `-.._"),d::String(u"  (____..--''                                     `-.._")};}();
d::Array<d::String,false> _n_ARCH_36972=[](){return d::Array<d::String,false>{d::String(u"                __..--.._/|"),d::String(u"           _.-''           `-._"),d::String(u"        .-'                    `-._"),d::String(u"      .'                           `-._"),d::String(u"     /                                 `-._"),d::String(u"    /                                      `-._")};}();
d::Array<d::String,false> _n_FLUKE_36973=[](){return d::Array<d::String,false>{d::String(u" ._                          _."),d::String(u"  \\`-.._                _..-'/"),d::String(u"   `.   ``--.._    _.--''   .'"),d::String(u"     `-._      `\\/'      _.-'"),d::String(u"         ``--.._||_..--''"),d::String(u"                ||"),d::String(u"                ||"),d::String(u"                ||")};}();
const d::String _n_SHADE_36974=[](){return d::String(u" :::..");}();
std::shared_ptr<_n_Record_36977> _n_BODY_36976=[](){return ([&](){auto _n_object_37100=std::make_shared<_n_Record_36977>();_n_object_37100->_p_surf=_n_solidify_36975(_n_SURF_36971,_n_SHADE_36974);_n_object_37100->_p_arch=_n_solidify_36975(_n_ARCH_36972,_n_SHADE_36974);_n_object_37100->_p_fluke=_n_solidify_36975(_n_FLUKE_36973,d::String(u""));return _n_object_37100;})();}();
const double _n_SEA_36978=[](){return 13.0;}();
const double _n_LOOP_36979=[](){return 10.0;}();
const double _n_T0_36980=[](){return 1.5;}();
const double _n_SWIM_36981=[](){return 2.6;}();
const double _n_X0_36982=[](){return 13.0;}();
const double _n_BLOW_36983=[](){return 0.7;}();
const double _n_HOLE_36984=[](){return (d::indexOf(d::at(_n_SURF_36971,0.0),d::String(u"''"))+1.0);}();
const double _n_WIND_36985=[](){return 1.5;}();
const double _n_FIN_36986=[](){return ([&](){auto _n_left_37101=d::indexOf(d::at(_n_SURF_36971,2.0),d::String(u"|"));auto _n_right_37102=d::indexOf(d::at(_n_ARCH_36972,0.0),d::String(u"|"));return (_n_left_37101-_n_right_37102);})();}();
std::shared_ptr<_n_Record_36988> _n_UP_36987=[](){return ([&](){auto _n_object_37104=std::make_shared<_n_Record_36988>();_n_object_37104->_p_surf=std::array<double,4>{0.0,1.0,3.0,3.8};_n_object_37104->_p_arch=std::array<double,4>{3.1,3.8,4.6,5.2};_n_object_37104->_p_fluke=std::array<double,4>{5.0,5.9,7.5,8.5};return _n_object_37104;})();}();
const double _n_DIVE_36989=[](){return d::at(_n_UP_36987->_p_arch,3.0);}();
const double _n_FLUKE_X_36990=[](){return (((((_n_X0_36982-(_n_SWIM_36981*_n_DIVE_36989))-2.0)+_n_FIN_36986)+d::indexOf(d::at(_n_ARCH_36972,0.0),d::String(u"|")))+4.0);}();
d::Array<std::array<double,2>,false> _n_DRIP_36994=[](){return d::map(d::Array<double,false>{3.0,6.0,10.0,13.0,19.0,22.0,26.0,29.0},[&]( double _a0) mutable ->std::array<double,2>{double _n_k_37025=_a0;
{
double _n_row_37026=4.0;
while((d::truth((_n_row_37026>0.0))&&d::truth((([&]()->d::String{auto _n_logical_37105=d::at(d::at(_n_FLUKE_36973,_n_row_37026),_n_k_37025);return d::truth(_n_logical_37105)?_n_logical_37105:d::String(u" ");})()==d::String(u" "))))){d::check_cancel();(void)((_n_row_37026--));
}
return std::array<double,2>{_n_k_37025,_n_row_37026};

}
});}();
d::Array<d::Array<std::optional<d::String>,false>,false> _n_solidify_36975(d::Array<d::String,false> _a0,d::String _a1){d::Array<d::String,false> _n_art_37003=_a0;
d::String _n_shade_37004=_a1;
{
double _n_w_37005=([&](){d::Array<double> _n_numbers_37106;for(auto _x:d::map(_n_art_37003,[&]( d::String _a0) mutable ->double{d::String _n_l_37006=_a0;
return double(_n_l_37006.size());}))_n_numbers_37106.push(_x);return d::maximum(_n_numbers_37106);})();
d::Array<d::Array<std::optional<d::String>,false>,false> _n_g_37007=d::map(_n_art_37003,[&]( d::String _a0) mutable ->d::Array<std::optional<d::String>,false>{d::String _n_l_37008=_a0;
return d::map(([&](){d::Array<d::String,false> _n_array_37107;for(const auto &_v:d::padEnd(_n_l_37008,_n_w_37005))_n_array_37107.push(_v);return _n_array_37107;})(),[&]( d::String _a0) mutable ->std::optional<d::String>{d::String _n_ch_37009=_a0;
return (d::truth((_n_ch_37009==d::String(u" ")))?std::optional<d::String>{}:std::optional<d::String>(_n_ch_37009));});});
{double _n_k_37010=0.0;
for(;(d::truth(_n_shade_37004)&&d::truth((_n_k_37010<_n_w_37005)));(void)((_n_k_37010++))){d::check_cancel();double _n_top_37011=d::findIndex(_n_g_37007,[&]( d::Array<std::optional<d::String>,false> _a0) mutable ->bool{d::Array<std::optional<d::String>,false> _n_row_37012=_a0;
return (d::present(d::at(_n_row_37012,_n_k_37010)));});
{double _n_r_37013=(_n_top_37011+1.0);
for(;(d::truth((_n_top_37011>=0.0))&&d::truth((_n_r_37013<double(_n_g_37007.size()))));(void)((_n_r_37013++))){d::check_cancel();(void)(([&]()->d::String{auto&& _n_array_37108=d::at(_n_g_37007,_n_r_37013);auto _n_index_37109=_n_k_37010;auto _n_old_37111=d::at(_n_array_37108,_n_index_37109);if(d::present(_n_old_37111))return d::read(_n_old_37111);auto _n_value_37110=d::at(_n_shade_37004,((_n_r_37013+double(_n_shade_37004.size()))-double(_n_g_37007.size())));d::put(_n_array_37108,_n_index_37109,std::optional<d::String>(_n_value_37110));return _n_value_37110;})());
}}
}}
return d::map(_n_g_37007,[&]( d::Array<std::optional<d::String>,false> _a0) mutable ->d::Array<std::optional<d::String>,false>{d::Array<std::optional<d::String>,false> _n_row_37014=_a0;
return d::map(_n_row_37014,[&]( std::optional<d::String> _a0) mutable ->std::optional<d::String>{std::optional<d::String> _n_ch_37015=_a0;
return (d::truth((d::equal(_n_ch_37015,d::String(u"#"))))?std::optional<d::String>(d::String(u" ")):_n_ch_37015);});});

}
}

double _n_hash_36991(double _a0,double _a1){double _n_i_37016=_a0;
double _n_s_37017=_a1;
{
double _n_h_37018=([&](){auto _n_left_37112=d::imul(double(d::i32(_n_i_37016)^d::i32(739982445.0)),695872825.0);auto _n_right_37113=d::imul((_n_s_37017+7.0),2654435761.0);return double(d::i32(_n_left_37112)^d::i32(_n_right_37113));})();
(void)((_n_h_37018=d::imul(double(d::i32(_n_h_37018)^d::i32(double(d::u32(_n_h_37018)>>(d::u32(15.0)&31)))),2246822519.0)));
return (double(d::u32(double(d::i32(_n_h_37018)^d::i32(double(d::u32(_n_h_37018)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_ease_36992(double _a0){double _n_u_37019=_a0;
return (d::truth((_n_u_37019<=0.0))?0.0:(d::truth((_n_u_37019>=1.0))?1.0:((_n_u_37019*_n_u_37019)*(3.0-(2.0*_n_u_37019)))));}

double _n_depth_36993(double _a0,double _a1,double _a2,double _a3,double _a4){double _n_u_37020=_a0;
double _n_up_37021=_a1;
double _n_top_37022=_a2;
double _n_down_37023=_a3;
double _n_under_37024=_a4;
return ((d::truth((_n_u_37020<_n_up_37021))||d::truth((_n_u_37020>_n_under_37024)))?1.0:(d::truth((_n_u_37020<_n_top_37022))?(1.0-_n_ease_36992(((_n_u_37020-_n_up_37021)/(_n_top_37022-_n_up_37021)))):(d::truth((_n_u_37020<_n_down_37023))?0.0:_n_ease_36992(((_n_u_37020-_n_down_37023)/(_n_under_37024-_n_down_37023))))));}

struct Native_whale final:ascii::Piece{
double _n_cols_36995{};
double _n_rows_36996{};
d::Array<d::Array<d::String,false>,false> _n_g_36997{};
d::String _n_SPRAY_37001{};
std::function<d::String(double,std::shared_ptr<_n_Record_37095>)> _render;
void _n_put_36998(double _a0,double _a1,d::String _a2){double _n_r_37027=_a0;
double _n_c_37028=_a1;
d::String _n_ch_37029=_a2;
{
if((((d::truth((_n_r_37027>=0.0))&&d::truth((_n_r_37027<this->_n_rows_36996)))&&d::truth((_n_c_37028>=0.0)))&&d::truth((_n_c_37028<this->_n_cols_36995)))){d::check_cancel();(void)(([&](){auto&& _n_array_37153=d::at(this->_n_g_36997,_n_r_37027);auto _n_index_37154=_n_c_37028;auto _n_value_37155=_n_ch_37029;d::put(_n_array_37153,_n_index_37154,_n_value_37155);return _n_value_37155;})());
}

}
}

bool _n_open_36999(double _a0,double _a1){double _n_r_37030=_a0;
double _n_c_37031=_a1;
return ([&]()->bool{auto _n_logical_37156=([&]()->bool{auto _n_logical_37157=([&]()->bool{auto _n_logical_37158=([&]()->bool{auto _n_logical_37159=(_n_r_37030>=0.0);return d::truth(_n_logical_37159)?(_n_r_37030<_n_SEA_36978):_n_logical_37159;})();return d::truth(_n_logical_37158)?(_n_c_37031>=0.0):_n_logical_37158;})();return d::truth(_n_logical_37157)?(_n_c_37031<this->_n_cols_36995):_n_logical_37157;})();return d::truth(_n_logical_37156)?(d::at(d::at(this->_n_g_36997,_n_r_37030),_n_c_37031)==d::String(u" ")):_n_logical_37156;})();}

double _n_stamp_37000(d::Array<d::Array<std::optional<d::String>,false>,false> _a0,double _a1,double _a2){d::Array<d::Array<std::optional<d::String>,false>,false> _n_shape_37032=_a0;
double _n_left_37033=_a1;
double _n_sink_37034=_a2;
{
double _n_h_37035=double(_n_shape_37032.size());
double _n_drop_37036=d::round((_n_sink_37034*_n_h_37035));
double _n_x_37037=d::round(_n_left_37033);
(void)(d::forEach(_n_shape_37032,[&]( d::Array<std::optional<d::String>,false> _a0,double _a1) mutable ->void{d::Array<std::optional<d::String>,false> _n_line_37038=_a0;
double _n_i_37039=_a1;
{
double _n_r_37040=(((_n_SEA_36978-_n_h_37035)+_n_i_37039)+_n_drop_37036);
if(d::truth((_n_r_37040<_n_SEA_36978))){d::check_cancel();(void)(d::forEach(_n_line_37038,[&]( std::optional<d::String> _a0,double _a1) mutable ->std::optional<bool>{std::optional<d::String> _n_ch_37041=_a0;
double _n_k_37042=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_37160=(d::present(_n_ch_37041));return d::truth(_n_logical_37160)?(this->_n_put_36998(_n_r_37040,(_n_x_37037+_n_k_37042),d::read(_n_ch_37041)),std::optional<bool>{}):std::optional<bool>(_n_logical_37160);})();}));
}

}
}));
return ((_n_SEA_36978-_n_h_37035)+_n_drop_37036);

}
}

void _n_blow_37002(double _a0,double _a1,double _a2,double _a3){double _n_br_37043=_a0;
double _n_bc_37044=_a1;
double _n_from_37045=_a2;
double _n_s_37046=_a3;
{
double _n_top_37047=(6.6*std::sqrt(d::minimum({1.0,(_n_s_37046/0.5)})));
double _n_cut_37048=(d::truth((_n_s_37046<0.8))?0.0:((_n_s_37046-0.8)*7.0));
double _n_hw_37049=([&](){auto _n_left_37161=(1.0+(3.6*d::minimum({1.0,(_n_s_37046/0.8)})));auto _n_right_37162=(2.4*d::maximum({0.0,(_n_s_37046-0.8)}));return (_n_left_37161+_n_right_37162);})();
double _n_hh_37050=([&](){auto _n_left_37163=(1.0+(0.6*d::minimum({1.0,(_n_s_37046/0.8)})));auto _n_right_37164=(0.5*d::maximum({0.0,(_n_s_37046-0.8)}));return (_n_left_37163+_n_right_37164);})();
double _n_hy0_37051=((_n_top_37047-0.6)-(0.5*d::maximum({0.0,(_n_s_37046-1.0)})));
double _n_amp_37052=([&](){auto _n_left_37165=d::minimum({1.0,(_n_s_37046/0.2)});auto _n_right_37166=(d::truth((_n_s_37046<1.0))?1.0:std::exp(((-d::number((_n_s_37046-1.0)))/1.2)));return (_n_left_37165*_n_right_37166);})();
double _n_drift_37053=(_n_WIND_36985*_n_s_37046);
{double _n_r_37054=(_n_br_37043-1.0);
for(;d::truth((_n_r_37054>=d::maximum({0.0,(_n_br_37043-9.0)})));(void)((_n_r_37054--))){d::check_cancel();double _n_y_37055=(_n_br_37043-_n_r_37054);
double _n_lean_37056=([&](){auto _n_argument_37167=1.0;auto _n_argument_37168=(_n_y_37055/d::maximum({1.0,_n_top_37047}));return d::minimum({_n_argument_37167,_n_argument_37168});})();
double _n_mid_37057=((_n_bc_37044+((_n_from_37045-_n_bc_37044)*_n_lean_37056))+((_n_drift_37053*_n_lean_37056)*_n_lean_37056));
{double _n_c_37058=std::floor((_n_mid_37057-12.0));
for(;d::truth((_n_c_37058<=(_n_mid_37057+12.0)));(void)((_n_c_37058++))){d::check_cancel();if(d::truth((!d::truth(this->_n_open_36999(_n_r_37054,_n_c_37058))))){d::check_cancel();continue;
}
double _n_dx_37059=(_n_c_37058-_n_mid_37057);
double _n_dy_37060=((_n_y_37055-_n_hy0_37051)/_n_hh_37050);
double _n_d_37061=((d::truth((_n_y_37055>_n_cut_37048))&&d::truth((_n_y_37055<=_n_top_37047)))?std::exp((-d::number(std::pow((_n_dx_37059/(0.3+(0.17*_n_y_37055))),2.0)))):0.0);
(void)((_n_d_37061=([&](){auto _n_argument_37169=_n_d_37061;auto _n_argument_37170=(_n_amp_37052*std::exp(((-d::number(std::pow((_n_dx_37059/_n_hw_37049),2.0)))-(_n_dy_37060*_n_dy_37060))));return d::maximum({_n_argument_37169,_n_argument_37170});})()));
(void)((_n_d_37061=(_n_d_37061*(0.92+(0.16*_n_hash_36991(((_n_c_37058*31.0)+_n_r_37054),5.0))))));
double _n_i_37062=([&](){auto _n_argument_37171=(double(this->_n_SPRAY_37001.size())-1.0);auto _n_argument_37172=std::floor((_n_d_37061*double(this->_n_SPRAY_37001.size())));return d::minimum({_n_argument_37171,_n_argument_37172});})();
if(d::truth((_n_i_37062>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_37173=d::at(this->_n_g_36997,_n_r_37054);auto _n_index_37174=_n_c_37058;auto _n_value_37175=d::at(this->_n_SPRAY_37001,_n_i_37062);d::put(_n_array_37173,_n_index_37174,_n_value_37175);return _n_value_37175;})());
}
}}
}}

}
}

explicit Native_whale(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_37114=_n_meta_36969;
this->_n_cols_36995=_n_binding_37114->_p_cols;
this->_n_rows_36996=_n_binding_37114->_p_rows;
this->_n_g_36997=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_36996,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_36995));}));
this->_n_SPRAY_37001=d::String(u" .':;");
_render=[=]( double _a0,std::shared_ptr<_n_Record_37095> _a1) mutable ->d::String{double _n_t_37063=_a0;
{
double _n_u_37064=d::mod((d::mod((_n_t_37063+_n_T0_36980),_n_LOOP_36979)+_n_LOOP_36979),_n_LOOP_36979);
for(auto &&_n_item_37115:this->_n_g_36997){d::check_cancel();d::Array<d::String,false> _n_row_37065=_n_item_37115;
(void)(_n_row_37065.fill(d::String(u" ")));
}
{double _n_c_37066=0.0;
for(;d::truth((_n_c_37066<this->_n_cols_36995));(void)((_n_c_37066++))){d::check_cancel();double _n_h_37067=([&](){auto _n_left_37116=std::sin(((_n_c_37066*0.61)-(_n_t_37063*1.4)));auto _n_right_37117=(0.7*std::sin(((_n_c_37066*0.27)+(_n_t_37063*0.8))));return (_n_left_37116+_n_right_37117);})();
(void)(([&](){auto&& _n_array_37118=d::at(this->_n_g_36997,_n_SEA_36978);auto _n_index_37119=_n_c_37066;auto _n_value_37120=(d::truth((_n_h_37067>1.45))?d::String(u"-"):d::String(u"~"));d::put(_n_array_37118,_n_index_37119,_n_value_37120);return _n_value_37120;})());
for(auto &&_n_item_37121:d::Array<d::Array<double,false>,false>{d::Array<double,false>{(_n_SEA_36978+2.0),0.6},d::Array<double,false>{(_n_SEA_36978+4.0),(-d::number(0.4))}}){d::check_cancel();auto _n_binding_37122=_n_item_37121;
double _n_r_37068=d::at(_n_binding_37122,0.0);
double _n_k_37069=d::at(_n_binding_37122,1.0);
{
double _n_v_37070=([&](){auto _n_left_37123=std::sin((((_n_c_37066*0.45)+((_n_t_37063*_n_k_37069)*2.0))+_n_r_37068));auto _n_right_37124=std::sin((((_n_c_37066*0.06)-((_n_t_37063*_n_k_37069)*0.3))+_n_r_37068));return (_n_left_37123*_n_right_37124);})();
if(d::truth((_n_v_37070>0.6))){d::check_cancel();(void)(([&](){auto&& _n_array_37125=d::at(this->_n_g_36997,_n_r_37068);auto _n_index_37126=_n_c_37066;auto _n_value_37127=d::String(u"~");d::put(_n_array_37125,_n_index_37126,_n_value_37127);return _n_value_37127;})());
}

}
}
}}
double _n_hx_37071=(_n_X0_36982-(_n_SWIM_36981*d::minimum({_n_u_37064,_n_DIVE_36989})));
double _n_top_37072=([&](){auto _n_argument_37128=_n_BODY_36976->_p_surf;auto _n_argument_37129=(_n_hx_37071-2.0);auto _n_argument_37130=([&](){auto _n_arguments_37131=_n_UP_36987->_p_surf;return _n_depth_36993(_n_u_37064,d::at(_n_arguments_37131,0.0),d::at(_n_arguments_37131,1.0),d::at(_n_arguments_37131,2.0),d::at(_n_arguments_37131,3.0));})();return this->_n_stamp_37000(_n_argument_37128,_n_argument_37129,_n_argument_37130);})();
double _n_arch_37073=([&](){auto _n_arguments_37132=_n_UP_36987->_p_arch;return _n_depth_36993(_n_u_37064,d::at(_n_arguments_37132,0.0),d::at(_n_arguments_37132,1.0),d::at(_n_arguments_37132,2.0),d::at(_n_arguments_37132,3.0));})();
(void)(this->_n_stamp_37000(_n_BODY_36976->_p_arch,((_n_hx_37071-2.0)+_n_FIN_36986),_n_arch_37073));
if(d::truth((_n_arch_37073<0.7))){d::check_cancel();double _n_low_37074=((double(_n_ARCH_36972.size())-1.0)-d::round((_n_arch_37073*double(_n_ARCH_36972.size()))));
double _n_lip_37075=([&](){auto _n_left_37133=d::round(((_n_hx_37071-2.0)+_n_FIN_36986));auto _n_right_37134=d::search(d::at(_n_ARCH_36972,_n_low_37074),d::Regex(u"\\S",u""));return (_n_left_37133+_n_right_37134);})();
{double _n_j_37076=0.0;
for(;d::truth((_n_j_37076<6.0));(void)((_n_j_37076++))){d::check_cancel();double _n_p_37077=d::mod(((_n_u_37064*1.4)+_n_hash_36991(_n_j_37076,3.0)),1.0);
double _n_a_37078=_n_hash_36991(_n_j_37076,4.0);
double _n_r_37079=d::round(((_n_SEA_36978-1.0)-((0.6+(1.6*_n_a_37078))*std::sin((ascii::PI*_n_p_37077)))));
double _n_c_37080=d::round(((_n_lip_37075-1.0)-(_n_p_37077*(1.0+(2.0*_n_a_37078)))));
if(d::truth(this->_n_open_36999(_n_r_37079,_n_c_37080))){d::check_cancel();(void)(([&](){auto&& _n_array_37135=d::at(this->_n_g_36997,_n_r_37079);auto _n_index_37136=_n_c_37080;auto _n_value_37137=(d::truth((_n_p_37077<0.5))?d::String(u"'"):d::String(u"."));d::put(_n_array_37135,_n_index_37136,_n_value_37137);return _n_value_37137;})());
}
}}
}
if((d::truth((_n_u_37064>_n_BLOW_36983))&&d::truth((_n_u_37064<(_n_BLOW_36983+3.0))))){d::check_cancel();(void)(([&](){auto _n_argument_37138=_n_top_37072;auto _n_argument_37139=d::round(((_n_hx_37071-2.0)+_n_HOLE_36984));auto _n_argument_37140=(((_n_X0_36982-(_n_SWIM_36981*_n_BLOW_36983))-2.0)+_n_HOLE_36984);auto _n_argument_37141=(_n_u_37064-_n_BLOW_36983);return this->_n_blow_37002(_n_argument_37138,_n_argument_37139,_n_argument_37140,_n_argument_37141);})());
}
double _n_sink_37081=([&](){auto _n_arguments_37142=_n_UP_36987->_p_fluke;return _n_depth_36993(_n_u_37064,d::at(_n_arguments_37142,0.0),d::at(_n_arguments_37142,1.0),d::at(_n_arguments_37142,2.0),d::at(_n_arguments_37142,3.0));})();
double _n_fx_37082=d::round((_n_FLUKE_X_36990-16.0));
(void)(this->_n_stamp_37000(_n_BODY_36976->_p_fluke,_n_fx_37082,_n_sink_37081));
if((d::truth((_n_sink_37081<1.0))&&d::truth((_n_u_37064>(d::at(_n_UP_36987->_p_fluke,1.0)-0.2))))){d::check_cancel();double _n_ft_37083=((_n_SEA_36978-double(_n_FLUKE_36973.size()))+d::round((_n_sink_37081*double(_n_FLUKE_36973.size()))));
(void)(d::forEach(_n_DRIP_36994,[&]( std::array<double,2> _a0,double _a1) mutable ->void{auto _n_binding_37143=_a0;
double _n_dx_37084=d::at(_n_binding_37143,0.0);
double _n_row_37085=d::at(_n_binding_37143,1.0);
double _n_j_37086=_a1;
{
for(auto &&_n_item_37144:d::Array<double,false>{0.0,0.5}){d::check_cancel();double _n_lag_37087=_n_item_37144;
{
double _n_p_37088=d::mod((((_n_u_37064*1.6)+_n_hash_36991(_n_j_37086,9.0))+_n_lag_37087),1.0);
double _n_r_37089=std::floor((((_n_ft_37083+_n_row_37085)+1.0)+((_n_p_37088*_n_p_37088)*(((_n_SEA_36978-_n_ft_37083)-_n_row_37085)-1.0))));
if(d::truth(this->_n_open_36999(_n_r_37089,(_n_fx_37082+_n_dx_37084)))){d::check_cancel();(void)(([&](){auto&& _n_array_37145=d::at(this->_n_g_36997,_n_r_37089);auto _n_index_37146=(_n_fx_37082+_n_dx_37084);auto _n_value_37147=(d::truth((_n_p_37088<0.25))?d::String(u"'"):d::String(u"."));d::put(_n_array_37145,_n_index_37146,_n_value_37147);return _n_value_37147;})());
}

}
}

}
}));
}
double _n_gone_37090=(d::at(_n_UP_36987->_p_fluke,3.0)-0.2);
if((d::truth((_n_u_37064>_n_gone_37090))&&d::truth((_n_u_37064<(_n_gone_37090+1.2))))){d::check_cancel();double _n_w_37091=d::round((4.0+(5.0*(_n_u_37064-_n_gone_37090))));
double _n_fade_37092=((_n_u_37064-_n_gone_37090)/1.2);
{double _n_c_37093=(-d::number(_n_w_37091));
for(;d::truth((_n_c_37093<=_n_w_37091));(void)((_n_c_37093++))){d::check_cancel();if(d::truth((([&](){auto _n_argument_37148=(_n_c_37093+40.0);auto _n_argument_37149=std::floor((_n_u_37064*4.0));return _n_hash_36991(_n_argument_37148,_n_argument_37149);})()>_n_fade_37092))){d::check_cancel();(void)(([&](){auto _n_argument_37150=_n_SEA_36978;auto _n_argument_37151=(d::round(_n_FLUKE_X_36990)+_n_c_37093);auto _n_argument_37152=d::String(u"_");return this->_n_put_36998(_n_argument_37150,_n_argument_37151,_n_argument_37152);})());
}
}}
}
return d::join(d::map(this->_n_g_36997,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_37094=_a0;
return d::join(_n_row_37094,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("whale").cols)*ascii::catalog_meta("whale").rows);auto _env=std::make_shared<_n_Record_37095>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &whale_meta(){return catalog_meta("whale");}
std::unique_ptr<Piece> make_whale(const AsciiPieceOptions &o){return std::make_unique<Native_whale>(o);}
}
