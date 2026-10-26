// Direct, statically typed C++ from src/pieces/landscape.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_17584;
struct _n_Record_17585;
struct _n_Record_17726;
struct _n_Record_17727;
struct _n_Record_17735;
struct _n_Record_17584{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_17585> _p_options{};
bool _p_clock{};
static std::shared_ptr<_n_Record_17584> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17584>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_17585>>(j["options"]);out->_p_clock=d::decode<bool>(j["clock"]);return out;}
};
struct _n_Record_17585{
d::Nil _p_hour{};
d::Nil _p_phase{};
static std::shared_ptr<_n_Record_17585> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17585>();out->_p_hour=d::decode<d::Nil>(j["hour"]);out->_p_phase=d::decode<d::Nil>(j["phase"]);return out;}
};
struct _n_Record_17726{
std::optional<double> _p_hour{};
std::optional<double> _p_phase{};
static std::shared_ptr<_n_Record_17726> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17726>();out->_p_hour=d::decode<std::optional<double>>(j["hour"]);out->_p_phase=d::decode<std::optional<double>>(j["phase"]);return out;}
};
struct _n_Record_17727{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_17727> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17727>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_17735{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
static std::shared_ptr<_n_Record_17735> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17735>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);return out;}
};
double _n_hash_17595(double _a0,double _a1);
double _n_lunation_17596(d::Date _a0);
std::shared_ptr<_n_Record_17584> _n_meta_17583=[](){return ([&](){auto _n_object_17732=std::make_shared<_n_Record_17584>();_n_object_17732->_p_name=d::String(u"landscape");_n_object_17732->_p_category=d::String(u"nature");_n_object_17732->_p_note=d::String(u"a range and a lake under the sun or moon of the local hour");_n_object_17732->_p_cols=64.0;_n_object_17732->_p_rows=18.0;_n_object_17732->_p_fps=8.0;_n_object_17732->_p_options=([&](){auto _n_object_17734=std::make_shared<_n_Record_17585>();_n_object_17734->_p_hour=d::Nil{};_n_object_17734->_p_phase=d::Nil{};return _n_object_17734;})();_n_object_17732->_p_clock=true;return _n_object_17732;})();}();
const double _n_SHORE_17586=[](){return 11.0;}();
d::Array<d::String,false> _n_SUN_17587=[](){return d::Array<d::String,false>{d::String(u"  \\  |  /  "),d::String(u"   .---.   "),d::String(u"--(     )--"),d::String(u"   '---'   "),d::String(u"  /  |  \\  ")};}();
d::Array<d::String,false> _n_MOON_17588=[](){return d::Array<d::String,false>{d::String(u"  .-''-.  "),d::String(u" /######\\ "),d::String(u"|########|"),d::String(u" \\######/ "),d::String(u"  '-..-'  ")};}();
d::Array<d::String,false> _n_MARIA_17589=[](){return d::Array<d::String,false>{d::String(u"1,4"),d::String(u"2,6"),d::String(u"2,7"),d::String(u"3,3")};}();
d::Array<d::String,false> _n_CLOUD_17590=[](){return d::Array<d::String,false>{d::String(u"        .-~~-.          "),d::String(u"   .-~~'######'-.  .-.  "),d::String(u" .'##############'~###'."),d::String(u"(______________________)")};}();
d::Array<d::String,false> _n_PUFF_17591=[](){return d::Array<d::String,false>{d::String(u"   .-~~-.   "),d::String(u" .'######'. "),d::String(u"(__________)")};}();
d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double>>,false> _n_CLOUDS_17592=[](){return d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double>>,false>{std::make_shared<std::tuple<d::Array<d::String,false>,double,double>>(_n_CLOUD_17590,0.0,0.0),std::make_shared<std::tuple<d::Array<d::String,false>,double,double>>(_n_PUFF_17591,2.0,32.0)};}();
const double _n_DRIFT_17593=[](){return 0.4;}();
d::Dict<d::String,d::String> _n_FLIP_17594=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_17736;_n_dictionary_17736.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_17736.set(d::String(u"\\"),d::String(u"/"));return _n_dictionary_17736;})();}();
double _n_hash_17595(double _a0,double _a1){double _n_a_17612=_a0;
double _n_b_17613=_a1;
{
double _n_h_17614=([&](){auto _n_left_17737=d::imul(_n_a_17612,668265261.0);auto _n_right_17738=d::imul(_n_b_17613,374761393.0);return double(d::i32(_n_left_17737)^d::i32(_n_right_17738));})();
(void)((_n_h_17614=d::imul(double(d::i32(_n_h_17614)^d::i32(double(d::u32(_n_h_17614)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_17614)^d::i32(double(d::u32(_n_h_17614)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_lunation_17596(d::Date _a0){d::Date _n_d_17615=_a0;
return d::mod((d::mod((((_n_d_17615.getTime()/86400000.0)-10962.76)/29.530588853),1.0)+1.0),1.0);}

struct Native_landscape final:ascii::Piece{
std::optional<double> _n_hour_17597{};
std::optional<double> _n_phase_17598{};
double _n_cols_17599{};
double _n_rows_17600{};
d::Set<d::String> _n_maria_17601{};
d::Array<std::array<double,4>,false> _n_peaks_17602{};
d::Array<double,false> _n_e_17603{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_range_17604{};
d::Array<double,false> _n_top_17605{};
d::Array<d::Array<d::String,false>,false> _n_land_17606{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_mirror_17607{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false> _n_stars_17608{};
d::Array<std::array<double,4>,false> _n_ripples_17609{};
std::function<d::String(double,std::shared_ptr<_n_Record_17727>)> _render;
std::array<double,2> _n_place_17610(double _a0){double _n_u_17633=_a0;
{
double _n_alt_17634=std::sin((ascii::PI*_n_u_17633));
return std::array<double,2>{d::round((5.0+((this->_n_cols_17599-11.0)*_n_u_17633))),d::round(((_n_SHORE_17586+2.0)-(_n_SHORE_17586*std::pow(d::maximum({0.0,_n_alt_17634}),0.45))))};

}
}

explicit Native_landscape(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_17739=d::decode<std::shared_ptr<_n_Record_17726>>(_options.data);
this->_n_hour_17597=(d::present(_n_binding_17739->_p_hour)?_n_binding_17739->_p_hour:std::optional<double>{});
this->_n_phase_17598=(d::present(_n_binding_17739->_p_phase)?_n_binding_17739->_p_phase:std::optional<double>{});
auto _n_binding_17740=_n_meta_17583;
this->_n_cols_17599=_n_binding_17740->_p_cols;
this->_n_rows_17600=_n_binding_17740->_p_rows;
this->_n_maria_17601=d::Set<d::String>(_n_MARIA_17589);
this->_n_peaks_17602=d::Array<std::array<double,4>,false>{std::array<double,4>{13.0,5.0,10.0,5.0},std::array<double,4>{33.0,4.0,5.0,6.0},std::array<double,4>{43.0,6.0,6.0,11.0},std::array<double,4>{56.0,3.0,4.0,5.0}};
this->_n_e_17603=d::Array<double,false>{};
{double _n_x_17616=0.0;
for(;d::truth((_n_x_17616<=this->_n_cols_17599));(void)((_n_x_17616++))){d::check_cancel();double _n_f_17617=([&](){d::Array<double> _n_numbers_17741;_n_numbers_17741.push(0.0);for(auto _x:d::map(this->_n_peaks_17602,[&]( std::array<double,4> _a0) mutable ->double{auto _n_binding_17742=_a0;
double _n_px_17618=d::at(_n_binding_17742,0.0);
double _n_h_17619=d::at(_n_binding_17742,1.0);
double _n_w_17620=d::at(_n_binding_17742,2.0);
double _n_o_17621=d::at(_n_binding_17742,3.0);
return (_n_h_17619*std::pow(([&](){auto _n_argument_17743=0.0;auto _n_argument_17744=(1.0-(std::fabs((_n_x_17616-_n_px_17618))/(d::truth((_n_x_17616<_n_px_17618))?_n_w_17620:_n_o_17621)));return d::maximum({_n_argument_17743,_n_argument_17744});})(),1.3));}))_n_numbers_17741.push(_x);return d::maximum(_n_numbers_17741);})();
(void)(this->_n_e_17603.push((d::truth(_n_x_17616)?([&](){auto _n_argument_17745=(d::at(this->_n_e_17603,(_n_x_17616-1.0))-1.0);auto _n_argument_17746=([&](){auto _n_argument_17747=(d::at(this->_n_e_17603,(_n_x_17616-1.0))+1.0);auto _n_argument_17748=d::round(_n_f_17617);return d::minimum({_n_argument_17747,_n_argument_17748});})();return d::maximum({_n_argument_17745,_n_argument_17746});})():d::round(_n_f_17617))));
}}
this->_n_range_17604=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>(d::from(this->_n_cols_17599,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<std::tuple<double,d::String>>{double _n_c_17623=_a1;
return (d::truth((d::at(this->_n_e_17603,(_n_c_17623+1.0))>d::at(this->_n_e_17603,_n_c_17623)))?std::make_shared<std::tuple<double,d::String>>((_n_SHORE_17586-d::at(this->_n_e_17603,_n_c_17623)),d::String(u"/")):(d::truth((d::at(this->_n_e_17603,(_n_c_17623+1.0))<d::at(this->_n_e_17603,_n_c_17623)))?std::make_shared<std::tuple<double,d::String>>((_n_SHORE_17586-d::at(this->_n_e_17603,(_n_c_17623+1.0))),d::String(u"\\")):std::make_shared<std::tuple<double,d::String>>((_n_SHORE_17586-d::at(this->_n_e_17603,_n_c_17623)),d::String(u"_"))));}));
this->_n_top_17605=d::map(this->_n_range_17604,[&]( std::shared_ptr<std::tuple<double,d::String>> _a0) mutable ->double{auto _n_binding_17749=_a0;
double _n_r_17624=std::get<0>(*_n_binding_17749);
return _n_r_17624;});
this->_n_land_17606=d::Array<d::Array<d::String,false>,false>(d::from((_n_SHORE_17586+1.0),[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_17626=_a1;
return d::Array<d::String,false>(d::from(this->_n_cols_17599,[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_c_17628=_a1;
return (d::truth((std::get<0>(*d::at(this->_n_range_17604,_n_c_17628))==_n_r_17626))?std::get<1>(*d::at(this->_n_range_17604,_n_c_17628)):((d::truth((_n_r_17626>std::get<0>(*d::at(this->_n_range_17604,_n_c_17628))))&&d::truth(d::mod((_n_c_17628+_n_r_17626),2.0)))?d::String(u"."):d::String(u" ")));}));}));
this->_n_mirror_17607=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_c_17629=0.0;
for(;d::truth((_n_c_17629<this->_n_cols_17599));(void)((_n_c_17629++))){d::check_cancel();auto _n_binding_17750=d::at(this->_n_range_17604,_n_c_17629);
double _n_r_17630=std::get<0>(*_n_binding_17750);
d::String _n_ch_17631=std::get<1>(*_n_binding_17750);
if(d::truth(_n_FLIP_17594.get(_n_ch_17631))){d::check_cancel();(void)(this->_n_mirror_17607.push(std::make_shared<std::tuple<double,double,d::String>>((((2.0*_n_SHORE_17586)+1.0)-_n_r_17630),_n_c_17629,_n_FLIP_17594.get(_n_ch_17631))));
}else {d::check_cancel();if(d::truth((_n_r_17630<_n_SHORE_17586))){d::check_cancel();(void)(this->_n_mirror_17607.push(std::make_shared<std::tuple<double,double,d::String>>((((2.0*_n_SHORE_17586)+1.0)-_n_r_17630),_n_c_17629,d::String(u"-"))));
}
}
}}
this->_n_stars_17608=d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false>{std::make_shared<std::tuple<double,double,d::String,double>>(0.0,45.0,d::String(u"*"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,45.0,d::String(u"."),0.15),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,50.0,d::String(u"."),0.15),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,52.0,d::String(u"."),0.3),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,56.0,d::String(u"*"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,59.0,d::String(u"."),0.1),std::make_shared<std::tuple<double,double,d::String,double>>(4.0,61.0,d::String(u"*"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(0.0,7.0,d::String(u"."),0.5),std::make_shared<std::tuple<double,double,d::String,double>>(1.0,24.0,d::String(u"'"),0.7),std::make_shared<std::tuple<double,double,d::String,double>>(0.0,34.0,d::String(u"."),0.4),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,3.0,d::String(u"."),0.8),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,13.0,d::String(u"'"),0.6),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,30.0,d::String(u"."),0.9),std::make_shared<std::tuple<double,double,d::String,double>>(4.0,37.0,d::String(u"."),0.75),std::make_shared<std::tuple<double,double,d::String,double>>(1.0,39.0,d::String(u"'"),0.55),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,21.0,d::String(u"."),0.85),std::make_shared<std::tuple<double,double,d::String,double>>(5.0,4.0,d::String(u"."),0.65),std::make_shared<std::tuple<double,double,d::String,double>>(0.0,17.0,d::String(u"."),0.45)};
this->_n_ripples_17609=d::Array<std::array<double,4>,false>{};
{double _n_k_17632=2.0;
for(;d::truth(((_n_SHORE_17586+_n_k_17632)<this->_n_rows_17600));(void)((_n_k_17632++))){d::check_cancel();(void)(this->_n_ripples_17609.push(std::array<double,4>{(_n_SHORE_17586+_n_k_17632),std::floor((_n_hash_17595(_n_k_17632,7.0)*this->_n_cols_17599)),(2.0+(+d::number((_n_k_17632>4.0)))),(d::truth(d::mod(_n_k_17632,2.0))?0.3:(-d::number(0.25)))}));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_17727> _a1) mutable ->d::String{double _n_t_17635=_a0;
{
d::Date _n_now_17636=d::Date();
double _n_h_17637=([&]()->double{auto _n_logical_17751=this->_n_hour_17597;return d::present(_n_logical_17751)?d::read(_n_logical_17751):([&](){auto _n_left_17752=_n_now_17636.getHours();auto _n_right_17753=(_n_now_17636.getMinutes()/60.0);return (_n_left_17752+_n_right_17753);})();})();
double _n_age_17638=([&]()->double{auto _n_logical_17754=this->_n_phase_17598;return d::present(_n_logical_17754)?d::read(_n_logical_17754):_n_lunation_17596(_n_now_17636);})();
d::Array<d::Array<d::String,false>,false> _n_g_17639=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_17600,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_17641=_a1;
return (d::truth((_n_r_17641<=_n_SHORE_17586))?([&](){d::Array<d::String,false> _n_array_17755;for(const auto &_v:d::at(this->_n_land_17606,_n_r_17641))_n_array_17755.push(_v);return _n_array_17755;})():d::Array<d::String,false>(size_t(this->_n_cols_17599)).fill(d::String(u" ")));}));
auto _n_sky_17642=[&]( double _a0,double _a1) mutable ->bool{double _n_r_17643=_a0;
double _n_c_17644=_a1;
return ([&]()->bool{auto _n_logical_17756=([&]()->bool{auto _n_logical_17757=([&]()->bool{auto _n_logical_17758=(_n_r_17643>=0.0);return d::truth(_n_logical_17758)?(_n_c_17644>=0.0):_n_logical_17758;})();return d::truth(_n_logical_17757)?(_n_c_17644<this->_n_cols_17599):_n_logical_17757;})();return d::truth(_n_logical_17756)?(_n_r_17643<d::at(this->_n_top_17605,_n_c_17644)):_n_logical_17756;})();};
auto _n_ground_17645=[&]( double _a0,double _a1) mutable ->bool{double _n_r_17646=_a0;
double _n_c_17647=_a1;
return ([&]()->bool{auto _n_logical_17759=([&]()->bool{auto _n_logical_17760=([&]()->bool{auto _n_logical_17761=(_n_c_17647>=0.0);return d::truth(_n_logical_17761)?(_n_c_17647<this->_n_cols_17599):_n_logical_17761;})();return d::truth(_n_logical_17760)?(_n_r_17646>=d::at(this->_n_top_17605,_n_c_17647)):_n_logical_17760;})();return d::truth(_n_logical_17759)?(_n_r_17646<=_n_SHORE_17586):_n_logical_17759;})();};
double _n_sunU_17648=(d::mod((d::mod((_n_h_17637-6.0),24.0)+24.0),24.0)/12.0);
bool _n_day_17649=(_n_sunU_17648<1.0);
double _n_dark_17650=(d::truth(_n_day_17649)?0.0:([&](){auto _n_argument_17762=1.0;auto _n_argument_17763=(std::sin((ascii::PI*(_n_sunU_17648-1.0)))*5.0);return d::minimum({_n_argument_17762,_n_argument_17763});})());
double _n_step_17651=std::floor((_n_t_17635*2.0));
double _n_moonU_17652=d::mod((d::mod((_n_sunU_17648-(_n_age_17638*2.0)),2.0)+2.0),2.0);
auto _n_binding_17764=(d::truth(_n_day_17649)?this->_n_place_17610(_n_sunU_17648):this->_n_place_17610(d::minimum({_n_moonU_17652,1.5})));
double _n_cx_17653=d::at(_n_binding_17764,0.0);
double _n_cy_17654=d::at(_n_binding_17764,1.0);
bool _n_up_17655=([&]()->bool{auto _n_logical_17765=_n_day_17649;return d::truth(_n_logical_17765)?_n_logical_17765:(_n_moonU_17652<1.0);})();
d::Array<d::Array<d::String,false>,false> _n_cloud_17656=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_17600,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_17599)).fill(d::String(u""));}));
double _n_W_17657=double(d::at(_n_CLOUD_17590,0.0).size());
double _n_span_17658=(this->_n_cols_17599+_n_W_17657);
for(auto &&_n_item_17766:_n_CLOUDS_17592){d::check_cancel();auto _n_binding_17767=_n_item_17766;
d::Array<d::String,false> _n_shape_17659=std::get<0>(*_n_binding_17767);
double _n_r0_17660=std::get<1>(*_n_binding_17767);
double _n_d_17661=std::get<2>(*_n_binding_17767);
{
double _n_w_17662=double(d::at(_n_shape_17659,0.0).size());
double _n_x_17663=std::floor((d::mod(((((_n_cx_17653+15.0)+_n_d_17661)+_n_W_17657)+(_n_DRIFT_17593*_n_t_17635)),_n_span_17658)-_n_W_17657));
(void)(d::forEach(_n_shape_17659,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_17664=_a0;
double _n_i_17665=_a1;
{
{double _n_k_17666=0.0;
for(;d::truth((_n_k_17666<_n_w_17662));(void)((_n_k_17666++))){d::check_cancel();if((d::truth((d::at(_n_line_17664,_n_k_17666)!=d::String(u" ")))&&d::truth(_n_sky_17642((_n_r0_17660+_n_i_17665),(_n_x_17663+_n_k_17666))))){d::check_cancel();(void)(([&](){auto&& _n_array_17768=d::at(_n_cloud_17656,(_n_r0_17660+_n_i_17665));auto _n_index_17769=(_n_x_17663+_n_k_17666);auto _n_value_17770=(d::truth((d::at(_n_line_17664,_n_k_17666)==d::String(u"#")))?d::String(u" "):d::at(_n_line_17664,_n_k_17666));d::put(_n_array_17768,_n_index_17769,_n_value_17770);return _n_value_17770;})());
}
}}

}
}));

}
}
auto _n_near_17667=[&]( double _a0,double _a1) mutable ->bool{double _n_r_17668=_a0;
double _n_c_17669=_a1;
{
{double _n_dr_17670=(-d::number(1.0));
for(;d::truth((_n_dr_17670<=1.0));(void)((_n_dr_17670++))){d::check_cancel();{double _n_dc_17671=(-d::number(1.0));
for(;d::truth((_n_dc_17671<=1.0));(void)((_n_dc_17671++))){d::check_cancel();if(d::truth(([&]()->d::String{auto _n_optional_17771=d::at(_n_cloud_17656,(_n_r_17668+_n_dr_17670));if(!d::present(_n_optional_17771))return {};return d::at(d::read(_n_optional_17771),(_n_c_17669+_n_dc_17671));})())){d::check_cancel();return true;
}
}}
}}
return ([&]()->bool{auto _n_logical_17772=([&]()->bool{auto _n_logical_17773=([&]()->bool{auto _n_logical_17774=_n_up_17655;return d::truth(_n_logical_17774)?(!d::truth(_n_day_17649)):_n_logical_17774;})();return d::truth(_n_logical_17773)?(std::fabs((_n_c_17669-_n_cx_17653))<=6.0):_n_logical_17773;})();return d::truth(_n_logical_17772)?(std::fabs((_n_r_17668-_n_cy_17654))<=3.0):_n_logical_17772;})();

}
};
for(auto &&_n_item_17775:this->_n_stars_17608){d::check_cancel();auto _n_binding_17776=_n_item_17775;
double _n_row_17672=std::get<0>(*_n_binding_17776);
double _n_col_17673=std::get<1>(*_n_binding_17776);
d::String _n_ch_17674=std::get<2>(*_n_binding_17776);
double _n_need_17675=std::get<3>(*_n_binding_17776);
{
if(((d::truth((_n_dark_17650<=_n_need_17675))||d::truth((!d::truth(_n_sky_17642(_n_row_17672,_n_col_17673)))))||d::truth(_n_near_17667(_n_row_17672,_n_col_17673)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_17777=d::at(_n_g_17639,_n_row_17672);auto _n_index_17778=_n_col_17673;auto _n_value_17779=((d::truth((_n_need_17675>0.3))&&d::truth((_n_hash_17595(_n_col_17673,_n_step_17651)<0.15)))?d::String(u" "):_n_ch_17674);d::put(_n_array_17777,_n_index_17778,_n_value_17779);return _n_value_17779;})());

}
}
double _n_lit_17676=0.0;
double _n_full_17677=1.0;
auto _n_put_17678=[&]( double _a0,double _a1,d::String _a2,bool _a3,bool _a4) mutable ->void{double _n_r_17679=_a0;
double _n_c_17680=_a1;
d::String _n_ch_17681=_a2;
bool _n_solid_17682=_a3;
bool _n_body_17683=_a4;
{
if((d::truth((!d::truth(_n_sky_17642(_n_r_17679,_n_c_17680))))||d::truth(d::at(d::at(_n_cloud_17656,_n_r_17679),_n_c_17680)))){d::check_cancel();return;
}
if(d::truth((!d::truth(_n_solid_17682)))){d::check_cancel();{double _n_dr_17684=(-d::number(1.0));
for(;d::truth((_n_dr_17684<=1.0));(void)((_n_dr_17684++))){d::check_cancel();{double _n_dc_17685=(-d::number(1.0));
for(;d::truth((_n_dc_17685<=1.0));(void)((_n_dc_17685++))){d::check_cancel();if((d::truth(_n_ground_17645((_n_r_17679+_n_dr_17684),(_n_c_17680+_n_dc_17685)))||d::truth(([&]()->d::String{auto _n_optional_17780=d::at(_n_cloud_17656,(_n_r_17679+_n_dr_17684));if(!d::present(_n_optional_17780))return {};return d::at(d::read(_n_optional_17780),(_n_c_17680+_n_dc_17685));})()))){d::check_cancel();return;
}
}}
}}
}
(void)(([&](){auto&& _n_array_17781=d::at(_n_g_17639,_n_r_17679);auto _n_index_17782=_n_c_17680;auto _n_value_17783=_n_ch_17681;d::put(_n_array_17781,_n_index_17782,_n_value_17783);return _n_value_17783;})());
if(d::truth(_n_body_17683)){d::check_cancel();(void)((_n_lit_17676++));
}

}
};
if(d::truth(_n_day_17649)){d::check_cancel();(void)(d::forEach(_n_SUN_17587,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_17686=_a0;
double _n_i_17687=_a1;
{
{double _n_k_17688=0.0;
for(;d::truth((_n_k_17688<double(_n_line_17686.size())));(void)((_n_k_17688++))){d::check_cancel();double _n_r_17689=((_n_cy_17654-2.0)+_n_i_17687);
double _n_c_17690=((_n_cx_17653-5.0)+_n_k_17688);
bool _n_disc_17691=(d::truth((_n_i_17687==2.0))?([&]()->bool{auto _n_logical_17784=(_n_k_17688>1.0);return d::truth(_n_logical_17784)?(_n_k_17688<9.0):_n_logical_17784;})():([&]()->bool{auto _n_logical_17785=([&]()->bool{auto _n_logical_17786=(d::mod(_n_i_17687,2.0)==1.0);return d::truth(_n_logical_17786)?(_n_k_17688>2.0):_n_logical_17786;})();return d::truth(_n_logical_17785)?(_n_k_17688<8.0):_n_logical_17785;})());
if(d::truth((d::at(_n_line_17686,_n_k_17688)!=d::String(u" ")))){d::check_cancel();(void)(_n_put_17678(_n_r_17689,_n_c_17690,d::at(_n_line_17686,_n_k_17688),_n_disc_17691,_n_disc_17691));
}
}}

}
}));
}else {d::check_cancel();if(d::truth(_n_up_17655)){d::check_cancel();double _n_k_17692=std::cos(((2.0*ascii::PI)*d::mod(_n_age_17638,0.5)));
auto _n_shine_17693=[&]( double _a0,double _a1) mutable ->bool{double _n_x_17694=_a0;
double _n_y_17695=_a1;
return ([&]()->bool{auto _n_logical_17787=(((_n_x_17694*_n_x_17694)+(_n_y_17695*_n_y_17695))<=1.0);return d::truth(_n_logical_17787)?((_n_age_17638<0.5)==(_n_x_17694>(_n_k_17692*std::sqrt(d::maximum({0.0,(1.0-(_n_y_17695*_n_y_17695))}))))):_n_logical_17787;})();};
d::String _n_edge_17696=(d::truth((_n_k_17692>0.25))?d::String(u")"):(d::truth((_n_k_17692<(-d::number(0.25))))?d::String(u"("):d::String(u"|")));
(void)((_n_full_17677=((1.0-std::cos(((2.0*ascii::PI)*_n_age_17638)))/2.0)));
(void)(d::forEach(_n_MOON_17588,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_17697=_a0;
double _n_i_17698=_a1;
{
{double _n_j_17699=0.0;
for(;d::truth((_n_j_17699<double(_n_line_17697.size())));(void)((_n_j_17699++))){d::check_cancel();if(d::truth((d::at(_n_line_17697,_n_j_17699)==d::String(u" ")))){d::check_cancel();continue;
}
double _n_r_17700=((_n_cy_17654-2.0)+_n_i_17698);
double _n_c_17701=((_n_cx_17653-5.0)+_n_j_17699);
double _n_x_17702=(((_n_j_17699+0.5)-5.0)/5.0);
double _n_y_17703=(((_n_i_17698+0.5)-2.5)/2.5);
if(d::truth((d::at(_n_line_17697,_n_j_17699)!=d::String(u"#")))){d::check_cancel();double _n_s_17704=(0.97/d::hypot(std::initializer_list<double>{_n_x_17702,_n_y_17703}));
if(d::truth(_n_shine_17693((_n_x_17702*_n_s_17704),(_n_y_17703*_n_s_17704)))){d::check_cancel();(void)(_n_put_17678(_n_r_17700,_n_c_17701,d::at(_n_line_17697,_n_j_17699),false,true));
}
continue;
}
double _n_on_17705=0.0;
{double _n_q_17706=0.0;
for(;d::truth((_n_q_17706<9.0));(void)((_n_q_17706++))){d::check_cancel();if(d::truth(([&](){auto _n_argument_17788=(_n_x_17702+((d::mod(_n_q_17706,3.0)-1.0)/15.0));auto _n_argument_17789=(_n_y_17703+((std::floor((_n_q_17706/3.0))-1.0)/7.5));return _n_shine_17693(_n_argument_17788,_n_argument_17789);})())){d::check_cancel();(void)((_n_on_17705++));
}
}}
if(d::truth((_n_on_17705>=6.0))){d::check_cancel();(void)(([&](){auto _n_argument_17790=_n_r_17700;auto _n_argument_17791=_n_c_17701;auto _n_argument_17792=(d::truth(this->_n_maria_17601.has((d::String(u"")+d::string(_n_i_17698)+d::String(u",")+d::string(_n_j_17699)+d::String(u""))))?d::String(u"."):d::String(u":"));auto _n_argument_17793=true;auto _n_argument_17794=true;return _n_put_17678(_n_argument_17790,_n_argument_17791,_n_argument_17792,_n_argument_17793,_n_argument_17794);})());
}else {d::check_cancel();if(d::truth((_n_on_17705>=2.0))){d::check_cancel();(void)(_n_put_17678(_n_r_17700,_n_c_17701,_n_edge_17696,true,true));
}else {d::check_cancel();if(d::truth(_n_sky_17642(_n_r_17700,_n_c_17701))){d::check_cancel();(void)(([&](){auto&& _n_array_17795=d::at(_n_g_17639,_n_r_17700);auto _n_index_17796=_n_c_17701;auto _n_value_17797=d::String(u" ");d::put(_n_array_17795,_n_index_17796,_n_value_17797);return _n_value_17797;})());
}
}
}
}}

}
}));
}
}
{double _n_r_17707=0.0;
for(;d::truth((_n_r_17707<=_n_SHORE_17586));(void)((_n_r_17707++))){d::check_cancel();{double _n_c_17708=0.0;
for(;d::truth((_n_c_17708<this->_n_cols_17599));(void)((_n_c_17708++))){d::check_cancel();if(d::truth(d::at(d::at(_n_cloud_17656,_n_r_17707),_n_c_17708))){d::check_cancel();(void)(([&](){auto&& _n_array_17798=d::at(_n_g_17639,_n_r_17707);auto _n_index_17799=_n_c_17708;auto _n_value_17800=d::at(d::at(_n_cloud_17656,_n_r_17707),_n_c_17708);d::put(_n_array_17798,_n_index_17799,_n_value_17800);return _n_value_17800;})());
}
}}
}}
for(auto &&_n_item_17801:this->_n_mirror_17607){d::check_cancel();auto _n_binding_17802=_n_item_17801;
double _n_r_17709=std::get<0>(*_n_binding_17802);
double _n_c_17710=std::get<1>(*_n_binding_17802);
d::String _n_ch_17711=std::get<2>(*_n_binding_17802);
if(d::truth((_n_r_17709<this->_n_rows_17600))){d::check_cancel();(void)(([&](){auto&& _n_array_17803=d::at(_n_g_17639,_n_r_17709);auto _n_index_17804=_n_c_17710;auto _n_value_17805=_n_ch_17711;d::put(_n_array_17803,_n_index_17804,_n_value_17805);return _n_value_17805;})());
}
}
for(auto &&_n_item_17806:this->_n_ripples_17609){d::check_cancel();auto _n_binding_17807=_n_item_17806;
double _n_r_17712=d::at(_n_binding_17807,0.0);
double _n_c0_17713=d::at(_n_binding_17807,1.0);
double _n_n_17714=d::at(_n_binding_17807,2.0);
double _n_v_17715=d::at(_n_binding_17807,3.0);
{
double _n_x_17716=(std::floor(d::mod(((d::mod((_n_c0_17713+(_n_v_17715*_n_t_17635)),(this->_n_cols_17599+4.0))+this->_n_cols_17599)+4.0),(this->_n_cols_17599+4.0)))-2.0);
bool _n_clear_17717=true;
{double _n_c_17718=(_n_x_17716-1.0);
for(;d::truth((_n_c_17718<=(_n_x_17716+_n_n_17714)));(void)((_n_c_17718++))){d::check_cancel();if((d::truth((d::present(d::at(d::at(_n_g_17639,_n_r_17712),_n_c_17718))))&&d::truth((d::at(d::at(_n_g_17639,_n_r_17712),_n_c_17718)!=d::String(u" "))))){d::check_cancel();(void)((_n_clear_17717=false));
}
}}
if(d::truth(_n_clear_17717)){d::check_cancel();{double _n_c_17719=d::maximum({0.0,_n_x_17716});
for(;d::truth((_n_c_17719<d::minimum({this->_n_cols_17599,(_n_x_17716+_n_n_17714)})));(void)((_n_c_17719++))){d::check_cancel();(void)(([&](){auto&& _n_array_17808=d::at(_n_g_17639,_n_r_17712);auto _n_index_17809=_n_c_17719;auto _n_value_17810=d::String(u"-");d::put(_n_array_17808,_n_index_17809,_n_value_17810);return _n_value_17810;})());
}}
}

}
}
if(d::truth((_n_lit_17676>2.0))){d::check_cancel();double _n_mid_17720=(_n_cx_17653+0.5);
{double _n_r_17721=(_n_SHORE_17586+1.0);
for(;d::truth((_n_r_17721<this->_n_rows_17600));(void)((_n_r_17721++))){d::check_cancel();double _n_w_17722=(0.6+((_n_r_17721-_n_SHORE_17586)*(0.15+(_n_full_17677*0.45))));
{double _n_c_17723=std::floor(((_n_mid_17720-_n_w_17722)-1.0));
for(;d::truth((_n_c_17723<=((_n_mid_17720+_n_w_17722)+1.0)));(void)((_n_c_17723++))){d::check_cancel();if((d::truth((_n_c_17723<0.0))||d::truth((_n_c_17723>=this->_n_cols_17599)))){d::check_cancel();continue;
}
double _n_d_17724=std::fabs(((_n_c_17723+0.5)-_n_mid_17720));
(void)(([&](){auto&& _n_array_17811=d::at(_n_g_17639,_n_r_17721);auto _n_index_17812=_n_c_17723;auto _n_value_17813=((d::truth((_n_d_17724>_n_w_17722))||d::truth((_n_hash_17595(((_n_c_17723*31.0)+_n_r_17721),_n_step_17651)<(0.2+(0.4*(1.0-_n_full_17677))))))?d::String(u" "):((d::truth((_n_d_17724<(_n_w_17722*0.5)))&&d::truth((_n_full_17677>0.5)))?d::String(u"="):d::String(u"-")));d::put(_n_array_17811,_n_index_17812,_n_value_17813);return _n_value_17813;})());
}}
}}
}
return d::join(d::map(_n_g_17639,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_17725=_a0;
return d::join(_n_row_17725,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("landscape").cols)*ascii::catalog_meta("landscape").rows);auto _env=std::make_shared<_n_Record_17727>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &landscape_meta(){return catalog_meta("landscape");}
std::unique_ptr<Piece> make_landscape(const AsciiPieceOptions &o){return std::make_unique<Native_landscape>(o);}
}
