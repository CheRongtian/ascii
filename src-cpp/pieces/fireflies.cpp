// Direct, statically typed C++ from src/pieces/fireflies.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10147;
struct _n_Record_10148;
struct _n_Record_10169;
struct _n_Record_10172;
struct _n_Record_10176;
struct _n_Record_10258;
struct _n_Record_10259;
struct _n_Record_10147{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_10148> _p_options{};
static std::shared_ptr<_n_Record_10147> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10147>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_10148>>(j["options"]);return out;}
};
struct _n_Record_10148{
double _p_seed{};
double _p_count{};
static std::shared_ptr<_n_Record_10148> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10148>();out->_p_seed=d::decode<double>(j["seed"]);out->_p_count=d::decode<double>(j["count"]);return out;}
};
struct _n_Record_10169{
double _p_c{};
double _p_h{};
double _p_lean{};
double _p_ph{};
static std::shared_ptr<_n_Record_10169> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10169>();out->_p_c=d::decode<double>(j["c"]);out->_p_h=d::decode<double>(j["h"]);out->_p_lean=d::decode<double>(j["lean"]);out->_p_ph=d::decode<double>(j["ph"]);return out;}
};
struct _n_Record_10172{
double _p_x{};
double _p_y{};
d::Array<double,false> _p_w{};
d::Array<double,false> _p_p{};
static std::shared_ptr<_n_Record_10172> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10172>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_w=d::decode<d::Array<double,false>>(j["w"]);out->_p_p=d::decode<d::Array<double,false>>(j["p"]);return out;}
};
struct _n_Record_10176{
double _p_t{};
double _p_rate{};
static std::shared_ptr<_n_Record_10176> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10176>();out->_p_t=d::decode<double>(j["t"]);out->_p_rate=d::decode<double>(j["rate"]);return out;}
};
struct _n_Record_10258{
std::optional<double> _p_seed{};
std::optional<double> _p_count{};
static std::shared_ptr<_n_Record_10258> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10258>();out->_p_seed=d::decode<std::optional<double>>(j["seed"]);out->_p_count=d::decode<std::optional<double>>(j["count"]);return out;}
};
struct _n_Record_10259{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10259> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10259>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_10158(double _a0);
double _n_hash_10159(double _a0,double _a1);
std::shared_ptr<_n_Record_10147> _n_meta_10146=[](){return ([&](){auto _n_object_10264=std::make_shared<_n_Record_10147>();_n_object_10264->_p_name=d::String(u"fireflies");_n_object_10264->_p_category=d::String(u"nature");_n_object_10264->_p_note=d::String(u"fireflies over night grass, a flash spreading through them");_n_object_10264->_p_cols=60.0;_n_object_10264->_p_rows=18.0;_n_object_10264->_p_fps=15.0;_n_object_10264->_p_options=([&](){auto _n_object_10266=std::make_shared<_n_Record_10148>();_n_object_10266->_p_seed=7.0;_n_object_10266->_p_count=44.0;return _n_object_10266;})();return _n_object_10264;})();}();
d::Array<d::String,false> _n_MOON_10149=[](){return d::Array<d::String,false>{d::String(u"   _.._"),d::String(u" .' .-'"),d::String(u"/  /"),d::String(u"|  |"),d::String(u"\\  \\"),d::String(u" `._`-.")};}();
d::Array<d::String,false> _n_TREES_10150=[](){return d::Array<d::String,false>{d::String(u"                  .-.                         _"),d::String(u"     .-.   .--. .'   `.  .-.       .--.    .-' `-.   .-."),d::String(u"__.-'   `-'    `       `-'   `-.__.'    `--'      `-'   `-._")};}();
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_GLOW_10151=[](){return d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{std::make_shared<std::tuple<double,d::String>>(0.6,d::String(u"*")),std::make_shared<std::tuple<double,d::String>>(0.34,d::String(u"+")),std::make_shared<std::tuple<double,d::String>>(0.17,d::String(u"·")),std::make_shared<std::tuple<double,d::String>>(0.07,d::String(u"."))};}();
d::Array<d::Array<double,false>,false> _n_HALO_10152=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{0.0,0.0,1.0},d::Array<double,false>{(-d::number(1.0)),0.0,0.45},d::Array<double,false>{1.0,0.0,0.45},d::Array<double,false>{(-d::number(2.0)),0.0,0.13},d::Array<double,false>{2.0,0.0,0.13},d::Array<double,false>{0.0,(-d::number(1.0)),0.16},d::Array<double,false>{0.0,1.0,0.16}};}();
const double _n_WAVE_10153=[](){return 11.0;}();
const double _n_SPEED_10154=[](){return 13.0;}();
const double _n_START_10155=[](){return 2.4;}();
const double _n_GROUND_10156=[](){return 17.0;}();
const double _n_HORIZON_10157=[](){return 8.0;}();
std::function<double()> _n_mulberry32_10158(double _a0){double _n_seed_10182=_a0;
return [=]( ) mutable ->double{{
(void)((_n_seed_10182=double(d::i32((_n_seed_10182+1831565813.0))|d::i32(0.0))));
double _n_t_10183=d::imul(double(d::i32(_n_seed_10182)^d::i32(double(d::u32(_n_seed_10182)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_seed_10182)));
(void)((_n_t_10183=double(d::i32((_n_t_10183+d::imul(double(d::i32(_n_t_10183)^d::i32(double(d::u32(_n_t_10183)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_10183)))))^d::i32(_n_t_10183))));
return (double(d::u32(double(d::i32(_n_t_10183)^d::i32(double(d::u32(_n_t_10183)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

double _n_hash_10159(double _a0,double _a1){double _n_a_10184=_a0;
double _n_b_10185=_a1;
return _n_mulberry32_10158(([&](){auto _n_left_10267=d::imul(_n_a_10184,2654435761.0);auto _n_right_10268=d::imul((_n_b_10185+1.0),2246822507.0);return double(d::i32(_n_left_10267)^d::i32(_n_right_10268));})())();}

struct Native_fireflies final:ascii::Piece{
double _n_seed_10160{};
double _n_count_10161{};
double _n_cols_10162{};
double _n_rows_10163{};
std::function<double()> _n_rnd_10164{};
double _n_TAU_10165{};
d::Array<d::Array<d::String,false>,false> _n_sky_10166{};
d::Array<d::Array<double,false>,false> _n_stars_10167{};
d::Array<std::shared_ptr<_n_Record_10169>,false> _n_blades_10168{};
d::Array<d::Array<double,false>,false> _n_FANS_10170{};
d::Array<std::shared_ptr<_n_Record_10172>,false> _n_flies_10171{};
d::Map<double,d::Array<std::shared_ptr<_n_Record_10176>,false>> _n_hits_10175{};
d::Array<float,true> _n_field_10179{};
std::function<d::String(double,std::shared_ptr<_n_Record_10259>)> _render;
d::Array<double,false> _n_place_10173(std::shared_ptr<_n_Record_10172> _a0,double _a1){std::shared_ptr<_n_Record_10172> _n_f_10199=_a0;
double _n_s_10200=_a1;
return d::Array<double,false>{([&](){auto _n_left_10308=(_n_f_10199->_p_x+(6.0*std::sin(((d::at(_n_f_10199->_p_w,0.0)*_n_s_10200)+d::at(_n_f_10199->_p_p,0.0)))));auto _n_right_10309=(2.5*std::sin(((d::at(_n_f_10199->_p_w,1.0)*_n_s_10200)+d::at(_n_f_10199->_p_p,1.0))));return (_n_left_10308+_n_right_10309);})(),([&](){auto _n_left_10310=(_n_f_10199->_p_y+(1.4*std::sin(((d::at(_n_f_10199->_p_w,2.0)*_n_s_10200)+d::at(_n_f_10199->_p_p,2.0)))));auto _n_right_10311=(0.6*std::sin((((d::at(_n_f_10199->_p_w,1.0)*1.7)*_n_s_10200)+d::at(_n_f_10199->_p_p,0.0))));return (_n_left_10310+_n_right_10311);})()};}

double _n_glow_10174(double _a0){double _n_ph_10201=_a0;
return (d::truth((_n_ph_10201<0.04))?(_n_ph_10201/0.04):std::exp(((-d::number((_n_ph_10201-0.04)))/0.13)));}

d::Array<std::shared_ptr<_n_Record_10176>,false> _n_sweep_10177(double _a0){double _n_w_10202=_a0;
{
if(d::truth(this->_n_hits_10175.has(_n_w_10202))){d::check_cancel();return d::read(this->_n_hits_10175.get(_n_w_10202));
}
d::Array<d::Array<double,false>,false> _n_at_10203=d::map(this->_n_flies_10171,[&]( std::shared_ptr<_n_Record_10172> _a0) mutable ->d::Array<double,false>{std::shared_ptr<_n_Record_10172> _n_f_10204=_a0;
return this->_n_place_10173(_n_f_10204,(_n_w_10202*_n_WAVE_10153));});
d::Array<double,false> _n_o_10205=d::reduce(_n_at_10203,[&]( d::Array<double,false> _a0,d::Array<double,false> _a1) mutable ->d::Array<double,false>{d::Array<double,false> _n_b_10206=_a0;
d::Array<double,false> _n_p_10207=_a1;
return (d::truth((d::truth(double(d::i32(_n_w_10202)&d::i32(1.0)))?(d::at(_n_p_10207,0.0)>d::at(_n_b_10206,0.0)):(d::at(_n_p_10207,0.0)<d::at(_n_b_10206,0.0))))?_n_p_10207:_n_b_10206);});
d::Array<std::shared_ptr<_n_Record_10176>,false> _n_out_10208=d::map(_n_at_10203,[&]( d::Array<double,false> _a0,double _a1) mutable ->std::shared_ptr<_n_Record_10176>{auto _n_binding_10312=_a0;
double _n_x_10210=d::at(_n_binding_10312,0.0);
double _n_y_10211=d::at(_n_binding_10312,1.0);
double _n_i_10212=_a1;
return ([&](){auto _n_object_10315=std::make_shared<_n_Record_10176>();_n_object_10315->_p_t=((_n_w_10202*_n_WAVE_10153)+(d::hypot(std::initializer_list<double>{(_n_x_10210-d::at(_n_o_10205,0.0)),(2.0*(_n_y_10211-d::at(_n_o_10205,1.0)))})/_n_SPEED_10154));_n_object_10315->_p_rate=(1.0/(5.0+(3.5*_n_hash_10159((this->_n_seed_10160+_n_i_10212),_n_w_10202))));return _n_object_10315;})();});
(void)(this->_n_hits_10175.set(_n_w_10202,_n_out_10208));
if(d::truth((double(this->_n_hits_10175.size())>4.0))){d::check_cancel();(void)(this->_n_hits_10175.erase(d::first(this->_n_hits_10175.keys())));
}
return _n_out_10208;

}
}

double _n_bright_10178(double _a0,double _a1){double _n_i_10213=_a0;
double _n_s_10214=_a1;
{
double _n_w_10215=std::floor((_n_s_10214/_n_WAVE_10153));
std::shared_ptr<_n_Record_10176> _n_h_10216=d::at(this->_n_sweep_10177(_n_w_10215),_n_i_10213);
if(d::truth((_n_s_10214<_n_h_10216->_p_t))){d::check_cancel();(void)((_n_h_10216=d::at(this->_n_sweep_10177((_n_w_10215-1.0)),_n_i_10213)));
}
double _n_ph_10217=((_n_s_10214-_n_h_10216->_p_t)*_n_h_10216->_p_rate);
return (d::truth((_n_ph_10217<0.0))?0.0:this->_n_glow_10174((_n_ph_10217-std::floor(_n_ph_10217))));

}
}

void _n_light_10180(double _a0,double _a1,double _a2){double _n_x_10218=_a0;
double _n_y_10219=_a1;
double _n_v_10220=_a2;
{
double _n_c_10221=std::floor(_n_x_10218);
double _n_r_10222=std::floor(_n_y_10219);
for(auto &&_n_item_10316:_n_HALO_10152){d::check_cancel();auto _n_binding_10317=_n_item_10316;
double _n_dc_10223=d::at(_n_binding_10317,0.0);
double _n_dr_10224=d::at(_n_binding_10317,1.0);
double _n_k_10225=d::at(_n_binding_10317,2.0);
{
double _n_cc_10226=(_n_c_10221+_n_dc_10223);
double _n_rr_10227=(_n_r_10222+_n_dr_10224);
if((((d::truth((_n_cc_10226>=0.0))&&d::truth((_n_cc_10226<this->_n_cols_10162)))&&d::truth((_n_rr_10227>=_n_HORIZON_10157)))&&d::truth((_n_rr_10227<_n_GROUND_10156)))){d::check_cancel();(void)(([&](){auto&& _n_array_10318=this->_n_field_10179;auto _n_index_10319=((_n_rr_10227*this->_n_cols_10162)+_n_cc_10226);auto _n_value_10320=d::maximum({d::at(this->_n_field_10179,((_n_rr_10227*this->_n_cols_10162)+_n_cc_10226)),(_n_v_10220*_n_k_10225)});d::put(_n_array_10318,_n_index_10319,_n_value_10320);return _n_value_10320;})());
}

}
}

}
}

explicit Native_fireflies(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10269=d::decode<std::shared_ptr<_n_Record_10258>>(_options.data);
this->_n_seed_10160=(d::present(_n_binding_10269->_p_seed)?d::read(_n_binding_10269->_p_seed):7.0);
this->_n_count_10161=(d::present(_n_binding_10269->_p_count)?d::read(_n_binding_10269->_p_count):44.0);
auto _n_binding_10270=_n_meta_10146;
this->_n_cols_10162=_n_binding_10270->_p_cols;
this->_n_rows_10163=_n_binding_10270->_p_rows;
this->_n_rnd_10164=_n_mulberry32_10158(this->_n_seed_10160);
this->_n_TAU_10165=(ascii::PI*2.0);
this->_n_sky_10166=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_10163,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_10162)).fill(d::String(u" "));}));
this->_n_stars_10167=d::Array<d::Array<double,false>,false>(d::from(16.0,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{std::floor((this->_n_rnd_10164()*5.0)),std::floor((this->_n_rnd_10164()*(this->_n_cols_10162-14.0))),this->_n_rnd_10164()};}));
(void)(d::forEach(_n_MOON_10149,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_10186=_a0;
double _n_i_10187=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_10271;for(const auto &_v:_n_line_10186)_n_array_10271.push(_v);return _n_array_10271;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_10188=_a0;
double _n_j_10189=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_10272=(_n_ch_10188!=d::String(u" "));return d::truth(_n_logical_10272)?std::variant<d::String,bool>(([&](){auto&& _n_array_10273=d::at(this->_n_sky_10166,_n_i_10187);auto _n_index_10274=((this->_n_cols_10162-12.0)+_n_j_10189);auto _n_value_10275=_n_ch_10188;d::put(_n_array_10273,_n_index_10274,_n_value_10275);return _n_value_10275;})()):std::variant<d::String,bool>(_n_logical_10272);})();});}));
(void)(d::forEach(_n_TREES_10150,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_line_10190=_a0;
double _n_i_10191=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_10276;for(const auto &_v:_n_line_10190)_n_array_10276.push(_v);return _n_array_10276;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_10192=_a0;
double _n_j_10193=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_10277=(_n_ch_10192!=d::String(u" "));return d::truth(_n_logical_10277)?std::variant<d::String,bool>(([&](){auto&& _n_array_10278=d::at(this->_n_sky_10166,((_n_HORIZON_10157-3.0)+_n_i_10191));auto _n_index_10279=_n_j_10193;auto _n_value_10280=_n_ch_10192;d::put(_n_array_10278,_n_index_10279,_n_value_10280);return _n_value_10280;})()):std::variant<d::String,bool>(_n_logical_10277);})();});}));
(void)(d::at(this->_n_sky_10166,_n_GROUND_10156).fill(d::String(u"_")));
this->_n_blades_10168=d::Array<std::shared_ptr<_n_Record_10169>,false>{};
this->_n_FANS_10170=d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),0.0,1.0},d::Array<double,false>{(-d::number(1.0)),0.0,1.0},d::Array<double,false>{0.0,1.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{(-d::number(1.0)),1.0}};
{double _n_x_10194=(2.0+(this->_n_rnd_10164()*3.0));
for(;d::truth((_n_x_10194<(this->_n_cols_10162-2.0)));(void)((_n_x_10194=(_n_x_10194+(4.0+(this->_n_rnd_10164()*7.0)))))){d::check_cancel();double _n_h_10195=(2.0+std::floor((this->_n_rnd_10164()*4.0)));
double _n_c_10196=std::floor(_n_x_10194);
double _n_ph_10197=(_n_x_10194*0.23);
for(auto &&_n_item_10281:d::at(this->_n_FANS_10170,std::floor((this->_n_rnd_10164()*double(this->_n_FANS_10170.size()))))){d::check_cancel();double _n_lean_10198=_n_item_10281;
(void)(this->_n_blades_10168.push(([&](){auto _n_object_10283=std::make_shared<_n_Record_10169>();_n_object_10283->_p_c=_n_c_10196;_n_object_10283->_p_h=(d::truth(_n_lean_10198)?([&](){auto _n_argument_10284=1.0;auto _n_argument_10285=((_n_h_10195-1.0)-std::floor((this->_n_rnd_10164()*1.6)));return d::maximum({_n_argument_10284,_n_argument_10285});})():_n_h_10195);_n_object_10283->_p_lean=_n_lean_10198;_n_object_10283->_p_ph=_n_ph_10197;return _n_object_10283;})()));
}
}}
this->_n_flies_10171=d::Array<std::shared_ptr<_n_Record_10172>,false>(d::from(this->_n_count_10161,[&]( ) mutable ->std::shared_ptr<_n_Record_10172>{return ([&](){auto _n_object_10288=std::make_shared<_n_Record_10172>();_n_object_10288->_p_x=(3.0+(this->_n_rnd_10164()*(this->_n_cols_10162-6.0)));_n_object_10288->_p_y=(9.3+(this->_n_rnd_10164()*4.6));_n_object_10288->_p_w=d::Array<double,false>{(0.05+(this->_n_rnd_10164()*0.08)),(0.11+(this->_n_rnd_10164()*0.1)),(0.07+(this->_n_rnd_10164()*0.08))};_n_object_10288->_p_p=d::Array<double,false>{(this->_n_rnd_10164()*this->_n_TAU_10165),(this->_n_rnd_10164()*this->_n_TAU_10165),(this->_n_rnd_10164()*this->_n_TAU_10165)};return _n_object_10288;})();}));
this->_n_hits_10175=d::Map<double,d::Array<std::shared_ptr<_n_Record_10176>,false>>();
this->_n_field_10179=d::Array<float,true>(size_t((this->_n_cols_10162*this->_n_rows_10163)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_10259> _a1) mutable ->d::String{double _n_t_10228=_a0;
{
double _n_s_10229=(((_n_WAVE_10153*3.0)+_n_START_10155)+_n_t_10228);
d::Array<d::Array<d::String,false>,false> _n_g_10230=d::map(this->_n_sky_10166,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_row_10231=_a0;
return _n_row_10231.slice();});
for(auto &&_n_item_10289:this->_n_stars_10167){d::check_cancel();auto _n_binding_10290=_n_item_10289;
double _n_r_10232=d::at(_n_binding_10290,0.0);
double _n_c_10233=d::at(_n_binding_10290,1.0);
double _n_p_10234=d::at(_n_binding_10290,2.0);
(void)(([&](){auto&& _n_array_10291=d::at(_n_g_10230,_n_r_10232);auto _n_index_10292=_n_c_10233;auto _n_value_10293=((d::truth((_n_p_10234<0.25))&&d::truth((std::sin(((_n_t_10228*1.3)+(_n_p_10234*50.0)))>0.3)))?d::String(u"+"):d::String(u"."));d::put(_n_array_10291,_n_index_10292,_n_value_10293);return _n_value_10293;})());
}
for(auto &&_n_item_10294:this->_n_blades_10168){d::check_cancel();std::shared_ptr<_n_Record_10169> _n_b_10235=_n_item_10294;
{
double _n_sway_10236=(0.6*std::sin(((_n_s_10229*0.8)-_n_b_10235->_p_ph)));
double _n_px_10237=(_n_b_10235->_p_c+0.5);
{double _n_k_10238=1.0;
for(;d::truth((_n_k_10238<=_n_b_10235->_p_h));(void)((_n_k_10238++))){d::check_cancel();double _n_x_10239=(((_n_b_10235->_p_c+0.5)+(_n_b_10235->_p_lean*_n_k_10238))+(_n_sway_10236*std::pow((_n_k_10238/_n_b_10235->_p_h),2.0)));
double _n_d_10240=(_n_x_10239-_n_px_10237);
double _n_c_10241=std::floor(_n_x_10239);
if((d::truth((_n_c_10241>=0.0))&&d::truth((_n_c_10241<this->_n_cols_10162)))){d::check_cancel();(void)(([&](){auto&& _n_array_10295=d::at(_n_g_10230,(_n_GROUND_10156-_n_k_10238));auto _n_index_10296=_n_c_10241;auto _n_value_10297=(d::truth((_n_d_10240>0.5))?d::String(u"/"):(d::truth((_n_d_10240<(-d::number(0.5))))?d::String(u"\\"):d::String(u"|")));d::put(_n_array_10295,_n_index_10296,_n_value_10297);return _n_value_10297;})());
}
(void)((_n_px_10237=_n_x_10239));
}}

}
}
(void)(this->_n_field_10179.fill(0.0));
(void)(d::forEach(this->_n_flies_10171,[&]( std::shared_ptr<_n_Record_10172> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_10172> _n_f_10242=_a0;
double _n_i_10243=_a1;
{
double _n_v_10244=this->_n_bright_10178(_n_i_10243,_n_s_10229);
if(d::truth((_n_v_10244>0.05))){d::check_cancel();(void)(([&](){auto _n_arguments_10298=this->_n_place_10173(_n_f_10242,_n_s_10229);return this->_n_light_10180(d::at(_n_arguments_10298,0.0),d::at(_n_arguments_10298,1.0),_n_v_10244);})());
}
{double _n_k_10245=1.0;
for(;d::truth((_n_k_10245<=4.0));(void)((_n_k_10245++))){d::check_cancel();double _n_old_10246=this->_n_bright_10178(_n_i_10243,(_n_s_10229-(_n_k_10245*0.3)));
if(d::truth((_n_old_10246>_n_v_10244))){d::check_cancel();auto _n_binding_10299=this->_n_place_10173(_n_f_10242,(_n_s_10229-(_n_k_10245*0.3)));
double _n_x_10247=d::at(_n_binding_10299,0.0);
double _n_y_10248=d::at(_n_binding_10299,1.0);
double _n_c_10249=std::floor(_n_x_10247);
double _n_r_10250=std::floor(_n_y_10248);
double _n_at_10251=((_n_r_10250*this->_n_cols_10162)+_n_c_10249);
if((((d::truth((_n_c_10249>=0.0))&&d::truth((_n_c_10249<this->_n_cols_10162)))&&d::truth((_n_r_10250>=_n_HORIZON_10157)))&&d::truth((_n_r_10250<_n_GROUND_10156)))){d::check_cancel();(void)(([&](){auto&& _n_array_10300=this->_n_field_10179;auto _n_index_10301=_n_at_10251;auto _n_value_10302=d::maximum({d::at(this->_n_field_10179,_n_at_10251),(0.25*_n_old_10246)});d::put(_n_array_10300,_n_index_10301,_n_value_10302);return _n_value_10302;})());
}
}
}}

}
}));
{double _n_r_10252=_n_HORIZON_10157;
for(;d::truth((_n_r_10252<_n_GROUND_10156));(void)((_n_r_10252++))){d::check_cancel();{double _n_c_10253=0.0;
for(;d::truth((_n_c_10253<this->_n_cols_10162));(void)((_n_c_10253++))){d::check_cancel();double _n_v_10254=d::at(this->_n_field_10179,((_n_r_10252*this->_n_cols_10162)+_n_c_10253));
std::shared_ptr<std::tuple<double,d::String>> _n_lv_10255=d::read(d::find(_n_GLOW_10151,[&]( std::shared_ptr<std::tuple<double,d::String>> _a0) mutable ->bool{auto _n_binding_10303=_a0;
double _n_min_10256=std::get<0>(*_n_binding_10303);
return (_n_v_10254>=_n_min_10256);}));
if((d::truth(_n_lv_10255)&&d::truth(([&]()->bool{auto _n_logical_10304=(d::at(d::at(_n_g_10230,_n_r_10252),_n_c_10253)==d::String(u" "));return d::truth(_n_logical_10304)?_n_logical_10304:(_n_v_10254>=0.34);})()))){d::check_cancel();(void)(([&](){auto&& _n_array_10305=d::at(_n_g_10230,_n_r_10252);auto _n_index_10306=_n_c_10253;auto _n_value_10307=std::get<1>(*_n_lv_10255);d::put(_n_array_10305,_n_index_10306,_n_value_10307);return _n_value_10307;})());
}
}}
}}
return d::join(d::map(_n_g_10230,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_10257=_a0;
return d::join(_n_row_10257,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fireflies").cols)*ascii::catalog_meta("fireflies").rows);auto _env=std::make_shared<_n_Record_10259>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fireflies_meta(){return catalog_meta("fireflies");}
std::unique_ptr<Piece> make_fireflies(const AsciiPieceOptions &o){return std::make_unique<Native_fireflies>(o);}
}
