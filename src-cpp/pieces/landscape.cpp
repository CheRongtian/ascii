// Direct, statically typed C++ from src/pieces/landscape.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_17585;
struct _n_Record_17586;
struct _n_Record_17727;
struct _n_Record_17728;
struct _n_Record_17736;
struct _n_Record_17585{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_17586> _p_options{};
bool _p_clock{};
static std::shared_ptr<_n_Record_17585> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17585>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_17586>>(j["options"]);out->_p_clock=d::decode<bool>(j["clock"]);return out;}
};
struct _n_Record_17586{
d::Nil _p_hour{};
d::Nil _p_phase{};
static std::shared_ptr<_n_Record_17586> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17586>();out->_p_hour=d::decode<d::Nil>(j["hour"]);out->_p_phase=d::decode<d::Nil>(j["phase"]);return out;}
};
struct _n_Record_17727{
std::optional<double> _p_hour{};
std::optional<double> _p_phase{};
static std::shared_ptr<_n_Record_17727> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17727>();out->_p_hour=d::decode<std::optional<double>>(j["hour"]);out->_p_phase=d::decode<std::optional<double>>(j["phase"]);return out;}
};
struct _n_Record_17728{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_17728> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17728>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_17736{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
static std::shared_ptr<_n_Record_17736> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_17736>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);return out;}
};
double _n_hash_17596(double _a0,double _a1);
double _n_lunation_17597(d::Date _a0);
std::shared_ptr<_n_Record_17585> _n_meta_17584=[](){return ([&](){auto _n_object_17733=std::make_shared<_n_Record_17585>();_n_object_17733->_p_name=d::String(u"landscape");_n_object_17733->_p_category=d::String(u"nature");_n_object_17733->_p_note=d::String(u"a range and a lake under the sun or moon of the local hour");_n_object_17733->_p_cols=64.0;_n_object_17733->_p_rows=18.0;_n_object_17733->_p_fps=8.0;_n_object_17733->_p_options=([&](){auto _n_object_17735=std::make_shared<_n_Record_17586>();_n_object_17735->_p_hour=d::Nil{};_n_object_17735->_p_phase=d::Nil{};return _n_object_17735;})();_n_object_17733->_p_clock=true;return _n_object_17733;})();}();
const double _n_SHORE_17587=[](){return 11.0;}();
d::Array<d::String,false> _n_SUN_17588=[](){return d::Array<d::String,false>{d::String(u"  \\  |  /  "),d::String(u"   .---.   "),d::String(u"--(     )--"),d::String(u"   '---'   "),d::String(u"  /  |  \\  ")};}();
d::Array<d::String,false> _n_MOON_17589=[](){return d::Array<d::String,false>{d::String(u"  .-''-.  "),d::String(u" /######\\ "),d::String(u"|########|"),d::String(u" \\######/ "),d::String(u"  '-..-'  ")};}();
d::Array<d::String,false> _n_MARIA_17590=[](){return d::Array<d::String,false>{d::String(u"1,4"),d::String(u"2,6"),d::String(u"2,7"),d::String(u"3,3")};}();
d::Array<d::String,false> _n_CLOUD_17591=[](){return d::Array<d::String,false>{d::String(u"        .-~~-.          "),d::String(u"   .-~~'######'-.  .-.  "),d::String(u" .'##############'~###'."),d::String(u"(______________________)")};}();
d::Array<d::String,false> _n_PUFF_17592=[](){return d::Array<d::String,false>{d::String(u"   .-~~-.   "),d::String(u" .'######'. "),d::String(u"(__________)")};}();
d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double>>,false> _n_CLOUDS_17593=[](){return d::Array<std::shared_ptr<std::tuple<d::Array<d::String,false>,double,double>>,false>{std::make_shared<std::tuple<d::Array<d::String,false>,double,double>>(_n_CLOUD_17591,0.0,0.0),std::make_shared<std::tuple<d::Array<d::String,false>,double,double>>(_n_PUFF_17592,2.0,32.0)};}();
const double _n_DRIFT_17594=[](){return 0.4;}();
d::Dict<d::String,d::String> _n_FLIP_17595=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_17737;_n_dictionary_17737.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_17737.set(d::String(u"\\"),d::String(u"/"));return _n_dictionary_17737;})();}();
double _n_hash_17596(double _a0,double _a1){double _n_a_17613=_a0;
double _n_b_17614=_a1;
{
double _n_h_17615=([&](){auto _n_left_17738=d::imul(_n_a_17613,668265261.0);auto _n_right_17739=d::imul(_n_b_17614,374761393.0);return double(d::i32(_n_left_17738)^d::i32(_n_right_17739));})();
(void)((_n_h_17615=d::imul(double(d::i32(_n_h_17615)^d::i32(double(d::u32(_n_h_17615)>>(d::u32(15.0)&31)))),2246822507.0)));
return (double(d::u32(double(d::i32(_n_h_17615)^d::i32(double(d::u32(_n_h_17615)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_lunation_17597(d::Date _a0){d::Date _n_d_17616=_a0;
return d::mod((d::mod((((_n_d_17616.getTime()/86400000.0)-10962.76)/29.530588853),1.0)+1.0),1.0);}

struct Native_landscape final:ascii::Piece{
std::optional<double> _n_hour_17598{};
std::optional<double> _n_phase_17599{};
double _n_cols_17600{};
double _n_rows_17601{};
d::Set<d::String> _n_maria_17602{};
d::Array<d::Array<double,false>,false> _n_peaks_17603{};
d::Array<double,false> _n_e_17604{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_range_17605{};
d::Array<double,false> _n_top_17606{};
d::Array<d::Array<d::String,false>,false> _n_land_17607{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_mirror_17608{};
d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false> _n_stars_17609{};
d::Array<d::Array<double,false>,false> _n_ripples_17610{};
std::function<d::String(double,std::shared_ptr<_n_Record_17728>)> _render;
d::Array<double,false> _n_place_17611(double _a0){double _n_u_17634=_a0;
{
double _n_alt_17635=std::sin((ascii::PI*_n_u_17634));
return d::Array<double,false>{d::round((5.0+((this->_n_cols_17600-11.0)*_n_u_17634))),d::round(((_n_SHORE_17587+2.0)-(_n_SHORE_17587*std::pow(d::maximum({0.0,_n_alt_17635}),0.45))))};

}
}

explicit Native_landscape(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_17740=d::decode<std::shared_ptr<_n_Record_17727>>(_options.data);
this->_n_hour_17598=(d::present(_n_binding_17740->_p_hour)?_n_binding_17740->_p_hour:std::optional<double>{});
this->_n_phase_17599=(d::present(_n_binding_17740->_p_phase)?_n_binding_17740->_p_phase:std::optional<double>{});
auto _n_binding_17741=_n_meta_17584;
this->_n_cols_17600=_n_binding_17741->_p_cols;
this->_n_rows_17601=_n_binding_17741->_p_rows;
this->_n_maria_17602=d::Set<d::String>(_n_MARIA_17590);
this->_n_peaks_17603=d::Array<d::Array<double,false>,false>{d::Array<double,false>{13.0,5.0,10.0,5.0},d::Array<double,false>{33.0,4.0,5.0,6.0},d::Array<double,false>{43.0,6.0,6.0,11.0},d::Array<double,false>{56.0,3.0,4.0,5.0}};
this->_n_e_17604=d::Array<double,false>{};
{double _n_x_17617=0.0;
for(;d::truth((_n_x_17617<=this->_n_cols_17600));(void)((_n_x_17617++))){d::check_cancel();double _n_f_17618=([&](){d::Array<double> _n_numbers_17742;_n_numbers_17742.push(0.0);for(auto _x:d::map(this->_n_peaks_17603,[&]( d::Array<double,false> _a0) mutable ->double{auto _n_binding_17743=_a0;
double _n_px_17619=d::at(_n_binding_17743,0.0);
double _n_h_17620=d::at(_n_binding_17743,1.0);
double _n_w_17621=d::at(_n_binding_17743,2.0);
double _n_o_17622=d::at(_n_binding_17743,3.0);
return (_n_h_17620*std::pow(([&](){auto _n_argument_17744=0.0;auto _n_argument_17745=(1.0-(std::fabs((_n_x_17617-_n_px_17619))/(d::truth((_n_x_17617<_n_px_17619))?_n_w_17621:_n_o_17622)));return d::maximum({_n_argument_17744,_n_argument_17745});})(),1.3));}))_n_numbers_17742.push(_x);return d::maximum(_n_numbers_17742);})();
(void)(this->_n_e_17604.push((d::truth(_n_x_17617)?([&](){auto _n_argument_17746=(d::at(this->_n_e_17604,(_n_x_17617-1.0))-1.0);auto _n_argument_17747=([&](){auto _n_argument_17748=(d::at(this->_n_e_17604,(_n_x_17617-1.0))+1.0);auto _n_argument_17749=d::round(_n_f_17618);return d::minimum({_n_argument_17748,_n_argument_17749});})();return d::maximum({_n_argument_17746,_n_argument_17747});})():d::round(_n_f_17618))));
}}
this->_n_range_17605=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>(d::from(this->_n_cols_17600,[&]( d::Nil _a0,double _a1) mutable ->std::shared_ptr<std::tuple<double,d::String>>{double _n_c_17624=_a1;
return (d::truth((d::at(this->_n_e_17604,(_n_c_17624+1.0))>d::at(this->_n_e_17604,_n_c_17624)))?std::make_shared<std::tuple<double,d::String>>((_n_SHORE_17587-d::at(this->_n_e_17604,_n_c_17624)),d::String(u"/")):(d::truth((d::at(this->_n_e_17604,(_n_c_17624+1.0))<d::at(this->_n_e_17604,_n_c_17624)))?std::make_shared<std::tuple<double,d::String>>((_n_SHORE_17587-d::at(this->_n_e_17604,(_n_c_17624+1.0))),d::String(u"\\")):std::make_shared<std::tuple<double,d::String>>((_n_SHORE_17587-d::at(this->_n_e_17604,_n_c_17624)),d::String(u"_"))));}));
this->_n_top_17606=d::map(this->_n_range_17605,[&]( std::shared_ptr<std::tuple<double,d::String>> _a0) mutable ->double{auto _n_binding_17750=_a0;
double _n_r_17625=std::get<0>(*_n_binding_17750);
return _n_r_17625;});
this->_n_land_17607=d::Array<d::Array<d::String,false>,false>(d::from((_n_SHORE_17587+1.0),[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_17627=_a1;
return d::Array<d::String,false>(d::from(this->_n_cols_17600,[&]( d::Nil _a0,double _a1) mutable ->d::String{double _n_c_17629=_a1;
return (d::truth((std::get<0>(*d::at(this->_n_range_17605,_n_c_17629))==_n_r_17627))?std::get<1>(*d::at(this->_n_range_17605,_n_c_17629)):((d::truth((_n_r_17627>std::get<0>(*d::at(this->_n_range_17605,_n_c_17629))))&&d::truth(d::mod((_n_c_17629+_n_r_17627),2.0)))?d::String(u"."):d::String(u" ")));}));}));
this->_n_mirror_17608=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
{double _n_c_17630=0.0;
for(;d::truth((_n_c_17630<this->_n_cols_17600));(void)((_n_c_17630++))){d::check_cancel();auto _n_binding_17751=d::at(this->_n_range_17605,_n_c_17630);
double _n_r_17631=std::get<0>(*_n_binding_17751);
d::String _n_ch_17632=std::get<1>(*_n_binding_17751);
if(d::truth(_n_FLIP_17595.get(_n_ch_17632))){d::check_cancel();(void)(this->_n_mirror_17608.push(std::make_shared<std::tuple<double,double,d::String>>((((2.0*_n_SHORE_17587)+1.0)-_n_r_17631),_n_c_17630,_n_FLIP_17595.get(_n_ch_17632))));
}else {d::check_cancel();if(d::truth((_n_r_17631<_n_SHORE_17587))){d::check_cancel();(void)(this->_n_mirror_17608.push(std::make_shared<std::tuple<double,double,d::String>>((((2.0*_n_SHORE_17587)+1.0)-_n_r_17631),_n_c_17630,d::String(u"-"))));
}
}
}}
this->_n_stars_17609=d::Array<std::shared_ptr<std::tuple<double,double,d::String,double>>,false>{std::make_shared<std::tuple<double,double,d::String,double>>(0.0,45.0,d::String(u"*"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,45.0,d::String(u"."),0.15),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,50.0,d::String(u"."),0.15),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,52.0,d::String(u"."),0.3),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,56.0,d::String(u"*"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,59.0,d::String(u"."),0.1),std::make_shared<std::tuple<double,double,d::String,double>>(4.0,61.0,d::String(u"*"),0.0),std::make_shared<std::tuple<double,double,d::String,double>>(0.0,7.0,d::String(u"."),0.5),std::make_shared<std::tuple<double,double,d::String,double>>(1.0,24.0,d::String(u"'"),0.7),std::make_shared<std::tuple<double,double,d::String,double>>(0.0,34.0,d::String(u"."),0.4),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,3.0,d::String(u"."),0.8),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,13.0,d::String(u"'"),0.6),std::make_shared<std::tuple<double,double,d::String,double>>(2.0,30.0,d::String(u"."),0.9),std::make_shared<std::tuple<double,double,d::String,double>>(4.0,37.0,d::String(u"."),0.75),std::make_shared<std::tuple<double,double,d::String,double>>(1.0,39.0,d::String(u"'"),0.55),std::make_shared<std::tuple<double,double,d::String,double>>(3.0,21.0,d::String(u"."),0.85),std::make_shared<std::tuple<double,double,d::String,double>>(5.0,4.0,d::String(u"."),0.65),std::make_shared<std::tuple<double,double,d::String,double>>(0.0,17.0,d::String(u"."),0.45)};
this->_n_ripples_17610=d::Array<d::Array<double,false>,false>{};
{double _n_k_17633=2.0;
for(;d::truth(((_n_SHORE_17587+_n_k_17633)<this->_n_rows_17601));(void)((_n_k_17633++))){d::check_cancel();(void)(this->_n_ripples_17610.push(d::Array<double,false>{(_n_SHORE_17587+_n_k_17633),std::floor((_n_hash_17596(_n_k_17633,7.0)*this->_n_cols_17600)),(2.0+(+d::number((_n_k_17633>4.0)))),(d::truth(d::mod(_n_k_17633,2.0))?0.3:(-d::number(0.25)))}));
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_17728> _a1) mutable ->d::String{double _n_t_17636=_a0;
{
d::Date _n_now_17637=d::Date();
double _n_h_17638=([&]()->double{auto _n_logical_17752=this->_n_hour_17598;return d::present(_n_logical_17752)?d::read(_n_logical_17752):([&](){auto _n_left_17753=_n_now_17637.getHours();auto _n_right_17754=(_n_now_17637.getMinutes()/60.0);return (_n_left_17753+_n_right_17754);})();})();
double _n_age_17639=([&]()->double{auto _n_logical_17755=this->_n_phase_17599;return d::present(_n_logical_17755)?d::read(_n_logical_17755):_n_lunation_17597(_n_now_17637);})();
d::Array<d::Array<d::String,false>,false> _n_g_17640=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_17601,[&]( d::Nil _a0,double _a1) mutable ->d::Array<d::String,false>{double _n_r_17642=_a1;
return (d::truth((_n_r_17642<=_n_SHORE_17587))?([&](){d::Array<d::String,false> _n_array_17756;for(const auto &_v:d::at(this->_n_land_17607,_n_r_17642))_n_array_17756.push(_v);return _n_array_17756;})():d::Array<d::String,false>(size_t(this->_n_cols_17600)).fill(d::String(u" ")));}));
auto _n_sky_17643=[&]( double _a0,double _a1) mutable ->bool{double _n_r_17644=_a0;
double _n_c_17645=_a1;
return ([&]()->bool{auto _n_logical_17757=([&]()->bool{auto _n_logical_17758=([&]()->bool{auto _n_logical_17759=(_n_r_17644>=0.0);return d::truth(_n_logical_17759)?(_n_c_17645>=0.0):_n_logical_17759;})();return d::truth(_n_logical_17758)?(_n_c_17645<this->_n_cols_17600):_n_logical_17758;})();return d::truth(_n_logical_17757)?(_n_r_17644<d::at(this->_n_top_17606,_n_c_17645)):_n_logical_17757;})();};
auto _n_ground_17646=[&]( double _a0,double _a1) mutable ->bool{double _n_r_17647=_a0;
double _n_c_17648=_a1;
return ([&]()->bool{auto _n_logical_17760=([&]()->bool{auto _n_logical_17761=([&]()->bool{auto _n_logical_17762=(_n_c_17648>=0.0);return d::truth(_n_logical_17762)?(_n_c_17648<this->_n_cols_17600):_n_logical_17762;})();return d::truth(_n_logical_17761)?(_n_r_17647>=d::at(this->_n_top_17606,_n_c_17648)):_n_logical_17761;})();return d::truth(_n_logical_17760)?(_n_r_17647<=_n_SHORE_17587):_n_logical_17760;})();};
double _n_sunU_17649=(d::mod((d::mod((_n_h_17638-6.0),24.0)+24.0),24.0)/12.0);
bool _n_day_17650=(_n_sunU_17649<1.0);
double _n_dark_17651=(d::truth(_n_day_17650)?0.0:([&](){auto _n_argument_17763=1.0;auto _n_argument_17764=(std::sin((ascii::PI*(_n_sunU_17649-1.0)))*5.0);return d::minimum({_n_argument_17763,_n_argument_17764});})());
double _n_step_17652=std::floor((_n_t_17636*2.0));
double _n_moonU_17653=d::mod((d::mod((_n_sunU_17649-(_n_age_17639*2.0)),2.0)+2.0),2.0);
auto _n_binding_17765=(d::truth(_n_day_17650)?this->_n_place_17611(_n_sunU_17649):this->_n_place_17611(d::minimum({_n_moonU_17653,1.5})));
double _n_cx_17654=d::at(_n_binding_17765,0.0);
double _n_cy_17655=d::at(_n_binding_17765,1.0);
bool _n_up_17656=([&]()->bool{auto _n_logical_17766=_n_day_17650;return d::truth(_n_logical_17766)?_n_logical_17766:(_n_moonU_17653<1.0);})();
d::Array<d::Array<d::String,false>,false> _n_cloud_17657=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_17601,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_17600)).fill(d::String(u""));}));
double _n_W_17658=double(d::at(_n_CLOUD_17591,0.0).size());
double _n_span_17659=(this->_n_cols_17600+_n_W_17658);
for(auto &&_n_item_17767:_n_CLOUDS_17593){d::check_cancel();auto _n_binding_17768=_n_item_17767;
d::Array<d::String,false> _n_shape_17660=std::get<0>(*_n_binding_17768);
double _n_r0_17661=std::get<1>(*_n_binding_17768);
double _n_d_17662=std::get<2>(*_n_binding_17768);
{
double _n_w_17663=double(d::at(_n_shape_17660,0.0).size());
double _n_x_17664=std::floor((d::mod(((((_n_cx_17654+15.0)+_n_d_17662)+_n_W_17658)+(_n_DRIFT_17594*_n_t_17636)),_n_span_17659)-_n_W_17658));
(void)(d::forEach(_n_shape_17660,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_17665=_a0;
double _n_i_17666=_a1;
{
{double _n_k_17667=0.0;
for(;d::truth((_n_k_17667<_n_w_17663));(void)((_n_k_17667++))){d::check_cancel();if((d::truth((d::at(_n_line_17665,_n_k_17667)!=d::String(u" ")))&&d::truth(_n_sky_17643((_n_r0_17661+_n_i_17666),(_n_x_17664+_n_k_17667))))){d::check_cancel();(void)(([&](){auto&& _n_array_17769=d::at(_n_cloud_17657,(_n_r0_17661+_n_i_17666));auto _n_index_17770=(_n_x_17664+_n_k_17667);auto _n_value_17771=(d::truth((d::at(_n_line_17665,_n_k_17667)==d::String(u"#")))?d::String(u" "):d::at(_n_line_17665,_n_k_17667));d::put(_n_array_17769,_n_index_17770,_n_value_17771);return _n_value_17771;})());
}
}}

}
}));

}
}
auto _n_near_17668=[&]( double _a0,double _a1) mutable ->bool{double _n_r_17669=_a0;
double _n_c_17670=_a1;
{
{double _n_dr_17671=(-d::number(1.0));
for(;d::truth((_n_dr_17671<=1.0));(void)((_n_dr_17671++))){d::check_cancel();{double _n_dc_17672=(-d::number(1.0));
for(;d::truth((_n_dc_17672<=1.0));(void)((_n_dc_17672++))){d::check_cancel();if(d::truth(([&]()->d::String{auto _n_optional_17772=d::at(_n_cloud_17657,(_n_r_17669+_n_dr_17671));if(!d::present(_n_optional_17772))return {};return d::at(d::read(_n_optional_17772),(_n_c_17670+_n_dc_17672));})())){d::check_cancel();return true;
}
}}
}}
return ([&]()->bool{auto _n_logical_17773=([&]()->bool{auto _n_logical_17774=([&]()->bool{auto _n_logical_17775=_n_up_17656;return d::truth(_n_logical_17775)?(!d::truth(_n_day_17650)):_n_logical_17775;})();return d::truth(_n_logical_17774)?(std::fabs((_n_c_17670-_n_cx_17654))<=6.0):_n_logical_17774;})();return d::truth(_n_logical_17773)?(std::fabs((_n_r_17669-_n_cy_17655))<=3.0):_n_logical_17773;})();

}
};
for(auto &&_n_item_17776:this->_n_stars_17609){d::check_cancel();auto _n_binding_17777=_n_item_17776;
double _n_row_17673=std::get<0>(*_n_binding_17777);
double _n_col_17674=std::get<1>(*_n_binding_17777);
d::String _n_ch_17675=std::get<2>(*_n_binding_17777);
double _n_need_17676=std::get<3>(*_n_binding_17777);
{
if(((d::truth((_n_dark_17651<=_n_need_17676))||d::truth((!d::truth(_n_sky_17643(_n_row_17673,_n_col_17674)))))||d::truth(_n_near_17668(_n_row_17673,_n_col_17674)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_17778=d::at(_n_g_17640,_n_row_17673);auto _n_index_17779=_n_col_17674;auto _n_value_17780=((d::truth((_n_need_17676>0.3))&&d::truth((_n_hash_17596(_n_col_17674,_n_step_17652)<0.15)))?d::String(u" "):_n_ch_17675);d::put(_n_array_17778,_n_index_17779,_n_value_17780);return _n_value_17780;})());

}
}
double _n_lit_17677=0.0;
double _n_full_17678=1.0;
auto _n_put_17679=[&]( double _a0,double _a1,d::String _a2,bool _a3,bool _a4) mutable ->void{double _n_r_17680=_a0;
double _n_c_17681=_a1;
d::String _n_ch_17682=_a2;
bool _n_solid_17683=_a3;
bool _n_body_17684=_a4;
{
if((d::truth((!d::truth(_n_sky_17643(_n_r_17680,_n_c_17681))))||d::truth(d::at(d::at(_n_cloud_17657,_n_r_17680),_n_c_17681)))){d::check_cancel();return;
}
if(d::truth((!d::truth(_n_solid_17683)))){d::check_cancel();{double _n_dr_17685=(-d::number(1.0));
for(;d::truth((_n_dr_17685<=1.0));(void)((_n_dr_17685++))){d::check_cancel();{double _n_dc_17686=(-d::number(1.0));
for(;d::truth((_n_dc_17686<=1.0));(void)((_n_dc_17686++))){d::check_cancel();if((d::truth(_n_ground_17646((_n_r_17680+_n_dr_17685),(_n_c_17681+_n_dc_17686)))||d::truth(([&]()->d::String{auto _n_optional_17781=d::at(_n_cloud_17657,(_n_r_17680+_n_dr_17685));if(!d::present(_n_optional_17781))return {};return d::at(d::read(_n_optional_17781),(_n_c_17681+_n_dc_17686));})()))){d::check_cancel();return;
}
}}
}}
}
(void)(([&](){auto&& _n_array_17782=d::at(_n_g_17640,_n_r_17680);auto _n_index_17783=_n_c_17681;auto _n_value_17784=_n_ch_17682;d::put(_n_array_17782,_n_index_17783,_n_value_17784);return _n_value_17784;})());
if(d::truth(_n_body_17684)){d::check_cancel();(void)((_n_lit_17677++));
}

}
};
if(d::truth(_n_day_17650)){d::check_cancel();(void)(d::forEach(_n_SUN_17588,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_17687=_a0;
double _n_i_17688=_a1;
{
{double _n_k_17689=0.0;
for(;d::truth((_n_k_17689<double(_n_line_17687.size())));(void)((_n_k_17689++))){d::check_cancel();double _n_r_17690=((_n_cy_17655-2.0)+_n_i_17688);
double _n_c_17691=((_n_cx_17654-5.0)+_n_k_17689);
bool _n_disc_17692=(d::truth((_n_i_17688==2.0))?([&]()->bool{auto _n_logical_17785=(_n_k_17689>1.0);return d::truth(_n_logical_17785)?(_n_k_17689<9.0):_n_logical_17785;})():([&]()->bool{auto _n_logical_17786=([&]()->bool{auto _n_logical_17787=(d::mod(_n_i_17688,2.0)==1.0);return d::truth(_n_logical_17787)?(_n_k_17689>2.0):_n_logical_17787;})();return d::truth(_n_logical_17786)?(_n_k_17689<8.0):_n_logical_17786;})());
if(d::truth((d::at(_n_line_17687,_n_k_17689)!=d::String(u" ")))){d::check_cancel();(void)(_n_put_17679(_n_r_17690,_n_c_17691,d::at(_n_line_17687,_n_k_17689),_n_disc_17692,_n_disc_17692));
}
}}

}
}));
}else {d::check_cancel();if(d::truth(_n_up_17656)){d::check_cancel();double _n_k_17693=std::cos(((2.0*ascii::PI)*d::mod(_n_age_17639,0.5)));
auto _n_shine_17694=[&]( double _a0,double _a1) mutable ->bool{double _n_x_17695=_a0;
double _n_y_17696=_a1;
return ([&]()->bool{auto _n_logical_17788=(((_n_x_17695*_n_x_17695)+(_n_y_17696*_n_y_17696))<=1.0);return d::truth(_n_logical_17788)?((_n_age_17639<0.5)==(_n_x_17695>(_n_k_17693*std::sqrt(d::maximum({0.0,(1.0-(_n_y_17696*_n_y_17696))}))))):_n_logical_17788;})();};
d::String _n_edge_17697=(d::truth((_n_k_17693>0.25))?d::String(u")"):(d::truth((_n_k_17693<(-d::number(0.25))))?d::String(u"("):d::String(u"|")));
(void)((_n_full_17678=((1.0-std::cos(((2.0*ascii::PI)*_n_age_17639)))/2.0)));
(void)(d::forEach(_n_MOON_17589,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_17698=_a0;
double _n_i_17699=_a1;
{
{double _n_j_17700=0.0;
for(;d::truth((_n_j_17700<double(_n_line_17698.size())));(void)((_n_j_17700++))){d::check_cancel();if(d::truth((d::at(_n_line_17698,_n_j_17700)==d::String(u" ")))){d::check_cancel();continue;
}
double _n_r_17701=((_n_cy_17655-2.0)+_n_i_17699);
double _n_c_17702=((_n_cx_17654-5.0)+_n_j_17700);
double _n_x_17703=(((_n_j_17700+0.5)-5.0)/5.0);
double _n_y_17704=(((_n_i_17699+0.5)-2.5)/2.5);
if(d::truth((d::at(_n_line_17698,_n_j_17700)!=d::String(u"#")))){d::check_cancel();double _n_s_17705=(0.97/d::hypot(std::initializer_list<double>{_n_x_17703,_n_y_17704}));
if(d::truth(_n_shine_17694((_n_x_17703*_n_s_17705),(_n_y_17704*_n_s_17705)))){d::check_cancel();(void)(_n_put_17679(_n_r_17701,_n_c_17702,d::at(_n_line_17698,_n_j_17700),false,true));
}
continue;
}
double _n_on_17706=0.0;
{double _n_q_17707=0.0;
for(;d::truth((_n_q_17707<9.0));(void)((_n_q_17707++))){d::check_cancel();if(d::truth(([&](){auto _n_argument_17789=(_n_x_17703+((d::mod(_n_q_17707,3.0)-1.0)/15.0));auto _n_argument_17790=(_n_y_17704+((std::floor((_n_q_17707/3.0))-1.0)/7.5));return _n_shine_17694(_n_argument_17789,_n_argument_17790);})())){d::check_cancel();(void)((_n_on_17706++));
}
}}
if(d::truth((_n_on_17706>=6.0))){d::check_cancel();(void)(([&](){auto _n_argument_17791=_n_r_17701;auto _n_argument_17792=_n_c_17702;auto _n_argument_17793=(d::truth(this->_n_maria_17602.has((d::String(u"")+d::string(_n_i_17699)+d::String(u",")+d::string(_n_j_17700)+d::String(u""))))?d::String(u"."):d::String(u":"));auto _n_argument_17794=true;auto _n_argument_17795=true;return _n_put_17679(_n_argument_17791,_n_argument_17792,_n_argument_17793,_n_argument_17794,_n_argument_17795);})());
}else {d::check_cancel();if(d::truth((_n_on_17706>=2.0))){d::check_cancel();(void)(_n_put_17679(_n_r_17701,_n_c_17702,_n_edge_17697,true,true));
}else {d::check_cancel();if(d::truth(_n_sky_17643(_n_r_17701,_n_c_17702))){d::check_cancel();(void)(([&](){auto&& _n_array_17796=d::at(_n_g_17640,_n_r_17701);auto _n_index_17797=_n_c_17702;auto _n_value_17798=d::String(u" ");d::put(_n_array_17796,_n_index_17797,_n_value_17798);return _n_value_17798;})());
}
}
}
}}

}
}));
}
}
{double _n_r_17708=0.0;
for(;d::truth((_n_r_17708<=_n_SHORE_17587));(void)((_n_r_17708++))){d::check_cancel();{double _n_c_17709=0.0;
for(;d::truth((_n_c_17709<this->_n_cols_17600));(void)((_n_c_17709++))){d::check_cancel();if(d::truth(d::at(d::at(_n_cloud_17657,_n_r_17708),_n_c_17709))){d::check_cancel();(void)(([&](){auto&& _n_array_17799=d::at(_n_g_17640,_n_r_17708);auto _n_index_17800=_n_c_17709;auto _n_value_17801=d::at(d::at(_n_cloud_17657,_n_r_17708),_n_c_17709);d::put(_n_array_17799,_n_index_17800,_n_value_17801);return _n_value_17801;})());
}
}}
}}
for(auto &&_n_item_17802:this->_n_mirror_17608){d::check_cancel();auto _n_binding_17803=_n_item_17802;
double _n_r_17710=std::get<0>(*_n_binding_17803);
double _n_c_17711=std::get<1>(*_n_binding_17803);
d::String _n_ch_17712=std::get<2>(*_n_binding_17803);
if(d::truth((_n_r_17710<this->_n_rows_17601))){d::check_cancel();(void)(([&](){auto&& _n_array_17804=d::at(_n_g_17640,_n_r_17710);auto _n_index_17805=_n_c_17711;auto _n_value_17806=_n_ch_17712;d::put(_n_array_17804,_n_index_17805,_n_value_17806);return _n_value_17806;})());
}
}
for(auto &&_n_item_17807:this->_n_ripples_17610){d::check_cancel();auto _n_binding_17808=_n_item_17807;
double _n_r_17713=d::at(_n_binding_17808,0.0);
double _n_c0_17714=d::at(_n_binding_17808,1.0);
double _n_n_17715=d::at(_n_binding_17808,2.0);
double _n_v_17716=d::at(_n_binding_17808,3.0);
{
double _n_x_17717=(std::floor(d::mod(((d::mod((_n_c0_17714+(_n_v_17716*_n_t_17636)),(this->_n_cols_17600+4.0))+this->_n_cols_17600)+4.0),(this->_n_cols_17600+4.0)))-2.0);
bool _n_clear_17718=true;
{double _n_c_17719=(_n_x_17717-1.0);
for(;d::truth((_n_c_17719<=(_n_x_17717+_n_n_17715)));(void)((_n_c_17719++))){d::check_cancel();if((d::truth((d::present(d::at(d::at(_n_g_17640,_n_r_17713),_n_c_17719))))&&d::truth((d::at(d::at(_n_g_17640,_n_r_17713),_n_c_17719)!=d::String(u" "))))){d::check_cancel();(void)((_n_clear_17718=false));
}
}}
if(d::truth(_n_clear_17718)){d::check_cancel();{double _n_c_17720=d::maximum({0.0,_n_x_17717});
for(;d::truth((_n_c_17720<d::minimum({this->_n_cols_17600,(_n_x_17717+_n_n_17715)})));(void)((_n_c_17720++))){d::check_cancel();(void)(([&](){auto&& _n_array_17809=d::at(_n_g_17640,_n_r_17713);auto _n_index_17810=_n_c_17720;auto _n_value_17811=d::String(u"-");d::put(_n_array_17809,_n_index_17810,_n_value_17811);return _n_value_17811;})());
}}
}

}
}
if(d::truth((_n_lit_17677>2.0))){d::check_cancel();double _n_mid_17721=(_n_cx_17654+0.5);
{double _n_r_17722=(_n_SHORE_17587+1.0);
for(;d::truth((_n_r_17722<this->_n_rows_17601));(void)((_n_r_17722++))){d::check_cancel();double _n_w_17723=(0.6+((_n_r_17722-_n_SHORE_17587)*(0.15+(_n_full_17678*0.45))));
{double _n_c_17724=std::floor(((_n_mid_17721-_n_w_17723)-1.0));
for(;d::truth((_n_c_17724<=((_n_mid_17721+_n_w_17723)+1.0)));(void)((_n_c_17724++))){d::check_cancel();if((d::truth((_n_c_17724<0.0))||d::truth((_n_c_17724>=this->_n_cols_17600)))){d::check_cancel();continue;
}
double _n_d_17725=std::fabs(((_n_c_17724+0.5)-_n_mid_17721));
(void)(([&](){auto&& _n_array_17812=d::at(_n_g_17640,_n_r_17722);auto _n_index_17813=_n_c_17724;auto _n_value_17814=((d::truth((_n_d_17725>_n_w_17723))||d::truth((_n_hash_17596(((_n_c_17724*31.0)+_n_r_17722),_n_step_17652)<(0.2+(0.4*(1.0-_n_full_17678))))))?d::String(u" "):((d::truth((_n_d_17725<(_n_w_17723*0.5)))&&d::truth((_n_full_17678>0.5)))?d::String(u"="):d::String(u"-")));d::put(_n_array_17812,_n_index_17813,_n_value_17814);return _n_value_17814;})());
}}
}}
}
return d::join(d::map(_n_g_17640,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_17726=_a0;
return d::join(_n_row_17726,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("landscape").cols)*ascii::catalog_meta("landscape").rows);auto _env=std::make_shared<_n_Record_17728>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &landscape_meta(){return catalog_meta("landscape");}
std::unique_ptr<Piece> make_landscape(const AsciiPieceOptions &o){return std::make_unique<Native_landscape>(o);}
}
