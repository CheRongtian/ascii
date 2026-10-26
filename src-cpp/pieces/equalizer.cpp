// Direct, statically typed C++ from src/pieces/equalizer.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_9450;
struct _n_Record_9451;
struct _n_Record_9538;
struct _n_Record_9539;
struct _n_Record_9450{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_9451> _p_options{};
static std::shared_ptr<_n_Record_9450> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9450>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_9451>>(j["options"]);return out;}
};
struct _n_Record_9451{
double _p_bpm{};
static std::shared_ptr<_n_Record_9451> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9451>();out->_p_bpm=d::decode<double>(j["bpm"]);return out;}
};
struct _n_Record_9538{
std::optional<double> _p_bpm{};
static std::shared_ptr<_n_Record_9538> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9538>();out->_p_bpm=d::decode<std::optional<double>>(j["bpm"]);return out;}
};
struct _n_Record_9539{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_9539> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9539>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_9471(double _a0);
double _n_flutter_9472(double _a0,double _a1);
std::shared_ptr<_n_Record_9450> _n_meta_9449=[](){return ([&](){auto _n_object_9544=std::make_shared<_n_Record_9450>();_n_object_9544->_p_name=d::String(u"equalizer");_n_object_9544->_p_category=d::String(u"data");_n_object_9544->_p_note=d::String(u"spectrum bars bouncing to a beat, peak caps falling slowly");_n_object_9544->_p_cols=62.0;_n_object_9544->_p_rows=16.0;_n_object_9544->_p_fps=30.0;_n_object_9544->_p_options=([&](){auto _n_object_9546=std::make_shared<_n_Record_9451>();_n_object_9546->_p_bpm=120.0;return _n_object_9546;})();return _n_object_9544;})();}();
const double _n_BANDS_9452=[](){return 19.0;}();
d::Array<d::String,false> _n_LABELS_9453=[](){return d::Array<d::String,false>{d::String(u"31"),d::String(u"63"),d::String(u"125"),d::String(u"250"),d::String(u"500"),d::String(u"1k"),d::String(u"2k"),d::String(u"4k"),d::String(u"8k"),d::String(u"16k")};}();
const double _n_PH_9454=[](){return 12.0;}();
const d::String _n_EIGHTHS_9455=[](){return d::String(u"▁▂▃▄▅▆▇");}();
const double _n_FALL_9456=[](){return 2.2;}();
const double _n_HOLD_9457=[](){return 0.5;}();
const double _n_GRAVITY_9458=[](){return 1.1;}();
const double _n_KICK_GAIN_9459=[](){return 1.4;}();
const double _n_BASS_GAIN_9460=[](){return 0.34;}();
const double _n_SNARE_GAIN_9461=[](){return 0.95;}();
const double _n_HAT_GAIN_9462=[](){return 0.75;}();
const double _n_CHORD_GAIN_9463=[](){return 0.15;}();
const double _n_KNEE_9464=[](){return 1.4;}();
const double _n_HEADROOM_9465=[](){return 0.95;}();
d::Array<d::String,false> _n_KICK_9466=[](){return d::Array<d::String,false>{d::String(u"x.....x.x...x..."),d::String(u"x.....x.x.....x."),d::String(u"x.....x.x...x..."),d::String(u"x.....x.x.x.x.xx")};}();
d::Array<d::String,false> _n_SNARE_9467=[](){return d::Array<d::String,false>{d::String(u"....x.......x..."),d::String(u"....x.......x..x"),d::String(u"....x.......x..."),d::String(u"....x..x..x.xxxx")};}();
const d::String _n_HAT_9468=[](){return d::String(u"x.x.x.xxx.x.x.xx");}();
d::Array<double,false> _n_BASS_9469=[](){return d::Array<double,false>{0.0,0.0,2.0,3.0,1.0,1.0,3.0,2.0,0.0,0.0,2.0,4.0,3.0,2.0,1.0,0.0};}();
d::Array<d::Array<double,false>,false> _n_CHORDS_9470=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{8.0,10.0,13.0},d::Array<double,false>{7.0,10.0,12.0},d::Array<double,false>{9.0,11.0,13.0},d::Array<double,false>{8.0,11.0,14.0}};}();
double _n_hash_9471(double _a0){double _n_n_9491=_a0;
{
(void)((_n_n_9491=d::imul(double(d::i32(_n_n_9491)^d::i32(double(d::u32(_n_n_9491)>>(d::u32(16.0)&31)))),2146121005.0)));
(void)((_n_n_9491=d::imul(double(d::i32(_n_n_9491)^d::i32(double(d::u32(_n_n_9491)>>(d::u32(15.0)&31)))),2221713035.0)));
return (double(d::u32(double(d::i32(_n_n_9491)^d::i32(double(d::u32(_n_n_9491)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

double _n_flutter_9472(double _a0,double _a1){double _n_b_9492=_a0;
double _n_x_9493=_a1;
{
double _n_i_9494=std::floor(_n_x_9493);
double _n_f_9495=(_n_x_9493-_n_i_9494);
double _n_u_9496=((_n_f_9495*_n_f_9495)*(3.0-(2.0*_n_f_9495)));
return ([&](){auto _n_left_9547=(_n_hash_9471(((_n_b_9492*7919.0)+_n_i_9494))*(1.0-_n_u_9496));auto _n_right_9548=(_n_hash_9471((((_n_b_9492*7919.0)+_n_i_9494)+1.0))*_n_u_9496);return (_n_left_9547+_n_right_9548);})();

}
}

struct Native_equalizer final:ascii::Piece{
double _n_bpm_9473{};
double _n_cols_9474{};
double _n_rows_9475{};
double _n_STEP_9476{};
double _n_X0_9477{};
d::Array<float,true> _n_bar_9478{};
d::Array<float,true> _n_peak_9479{};
d::Array<float,true> _n_vel_9480{};
d::Array<float,true> _n_held_9481{};
d::Array<float,true> _n_level_9482{};
double _n_last_9485{};
double _n_WARM_9487{};
d::Array<d::Array<d::String,false>,false> _n_grid_9488{};
double _n_AY_9489{};
std::function<d::String(double,std::shared_ptr<_n_Record_9539>)> _render;
double _n_since_9483(double _a0,std::variant<d::String,d::Array<d::String,false>> _a1){double _n_t_9497=_a0;
std::variant<d::String,d::Array<d::String,false>> _n_pat_9498=_a1;
{
double _n_s_9499=std::floor((_n_t_9497/this->_n_STEP_9476));
{double _n_k_9500=0.0;
for(;d::truth((_n_k_9500<16.0));(void)((_n_k_9500++))){d::check_cancel();double _n_j_9501=(_n_s_9499-_n_k_9500);
double _n_which_9502=d::mod((d::mod(std::floor((_n_j_9501/16.0)),4.0)+4.0),4.0);
d::String _n_p_9503=(d::truth((d::typeOf(_n_pat_9498)==d::String(u"string")))?std::get<d::String>(_n_pat_9498):d::at(std::get<d::Array<d::String,false>>(_n_pat_9498),_n_which_9502));
if(d::truth((d::at(_n_p_9503,d::mod((d::mod(_n_j_9501,16.0)+16.0),16.0))==d::String(u"x")))){d::check_cancel();return (_n_t_9497-(_n_j_9501*this->_n_STEP_9476));
}
}}
return 9.0;

}
}

void _n_spectrum_9484(double _a0){double _n_t_9504=_a0;
{
double _n_kick_9505=std::exp(((-d::number(this->_n_since_9483(_n_t_9504,std::variant<d::String,d::Array<d::String,false>>(_n_KICK_9466))))/0.14));
double _n_snare_9506=std::exp(((-d::number(this->_n_since_9483(_n_t_9504,std::variant<d::String,d::Array<d::String,false>>(_n_SNARE_9467))))/0.11));
double _n_hat_9507=std::exp(((-d::number(this->_n_since_9483(_n_t_9504,std::variant<d::String,d::Array<d::String,false>>(_n_HAT_9468))))/0.045));
double _n_beat_9508=std::floor((_n_t_9504/(this->_n_STEP_9476*4.0)));
double _n_beatFrac_9509=((_n_t_9504/(this->_n_STEP_9476*4.0))-_n_beat_9508);
double _n_bass_9510=(d::at(_n_BASS_9469,d::mod((d::mod(_n_beat_9508,16.0)+16.0),16.0))+0.6);
d::Array<double,false> _n_chord_9511=d::at(_n_CHORDS_9470,d::mod((d::mod(std::floor((_n_beat_9508/4.0)),4.0)+4.0),4.0));
double _n_pump_9512=(0.5+(0.5*(1.0-std::exp(((-d::number(_n_beatFrac_9509))*4.0)))));
{double _n_b_9513=0.0;
for(;d::truth((_n_b_9513<_n_BANDS_9452));(void)((_n_b_9513++))){d::check_cancel();double _n_n_9514=_n_flutter_9472(_n_b_9513,(_n_t_9504*9.0));
double _n_sum_9515=([&](){auto _n_left_9580=([&](){auto _n_left_9582=([&](){auto _n_left_9584=(((0.03+(0.08*_n_n_9514))-(0.001*_n_b_9513))+((_n_KICK_GAIN_9459*_n_kick_9505)*std::exp((-d::number(std::pow(((_n_b_9513-1.2)/1.4),2.0))))));auto _n_right_9585=([&](){auto _n_left_9586=(_n_BASS_GAIN_9460*(0.45+(0.55*std::exp(((-d::number(_n_beatFrac_9509))*3.0)))));auto _n_right_9587=([&](){auto _n_left_9588=std::exp((-d::number(std::pow(((_n_b_9513-_n_bass_9510)/0.9),2.0))));auto _n_right_9589=(0.5*std::exp((-d::number(std::pow((((_n_b_9513-_n_bass_9510)-2.0)/1.1),2.0)))));return (_n_left_9588+_n_right_9589);})();return (_n_left_9586*_n_right_9587);})();return (_n_left_9584+_n_right_9585);})();auto _n_right_9583=(((_n_SNARE_GAIN_9461*(0.75+(0.25*_n_n_9514)))*_n_snare_9506)*std::exp((-d::number(std::pow(((_n_b_9513-9.0)/4.2),2.0)))));return (_n_left_9582+_n_right_9583);})();auto _n_right_9581=(((_n_HAT_GAIN_9462*_n_hat_9507)*std::exp((-d::number(std::pow(((_n_b_9513-16.0)/2.2),2.0)))))*(0.6+(0.4*_n_n_9514)));return (_n_left_9580+_n_right_9581);})();
for(auto &&_n_item_9590:_n_chord_9511){d::check_cancel();double _n_c_9516=_n_item_9590;
(void)((_n_sum_9515=(_n_sum_9515+(((_n_CHORD_GAIN_9463*_n_pump_9512)*(0.7+(0.3*_n_n_9514)))*([&](){auto _n_left_9591=std::exp((-d::number(std::pow((_n_b_9513-_n_c_9516),2.0))));auto _n_right_9592=(0.5*std::exp((-d::number(std::pow(((_n_b_9513-_n_c_9516)-2.0),2.0)))));return (_n_left_9591+_n_right_9592);})()))));
}
(void)(([&](){auto&& _n_array_9593=this->_n_level_9482;auto _n_index_9594=_n_b_9513;auto _n_value_9595=(_n_HEADROOM_9465*(1.0-std::exp(((-d::number(_n_KNEE_9464))*_n_sum_9515))));d::put(_n_array_9593,_n_index_9594,_n_value_9595);return _n_value_9595;})());
}}

}
}

void _n_step_9486(double _a0){double _n_t_9517=_a0;
{
double _n_dt_9518=([&](){auto _n_argument_9596=0.1;auto _n_argument_9597=d::maximum({0.0,(_n_t_9517-this->_n_last_9485)});return d::minimum({_n_argument_9596,_n_argument_9597});})();
(void)((this->_n_last_9485=_n_t_9517));
(void)(this->_n_spectrum_9484(_n_t_9517));
{double _n_b_9519=0.0;
for(;d::truth((_n_b_9519<_n_BANDS_9452));(void)((_n_b_9519++))){d::check_cancel();(void)(([&](){auto&& _n_array_9598=this->_n_bar_9478;auto _n_index_9599=_n_b_9519;auto _n_value_9600=d::maximum({d::at(this->_n_level_9482,_n_b_9519),(d::at(this->_n_bar_9478,_n_b_9519)-(_n_FALL_9456*_n_dt_9518))});d::put(_n_array_9598,_n_index_9599,_n_value_9600);return _n_value_9600;})());
if(d::truth((d::at(this->_n_bar_9478,_n_b_9519)>=d::at(this->_n_peak_9479,_n_b_9519)))){d::check_cancel();(void)(([&](){auto&& _n_array_9601=this->_n_peak_9479;auto _n_index_9602=_n_b_9519;auto _n_value_9603=d::at(this->_n_bar_9478,_n_b_9519);d::put(_n_array_9601,_n_index_9602,_n_value_9603);return _n_value_9603;})());
(void)(([&](){auto&& _n_array_9604=this->_n_held_9481;auto _n_index_9605=_n_b_9519;auto _n_value_9606=_n_HOLD_9457;d::put(_n_array_9604,_n_index_9605,_n_value_9606);return _n_value_9606;})());
(void)(([&](){auto&& _n_array_9607=this->_n_vel_9480;auto _n_index_9608=_n_b_9519;auto _n_value_9609=0.0;d::put(_n_array_9607,_n_index_9608,_n_value_9609);return _n_value_9609;})());
}else {d::check_cancel();if(d::truth((([&](){auto&& _n_array_9610=this->_n_held_9481;auto _n_index_9611=_n_b_9519;auto _n_value_9612=(d::at(_n_array_9610,_n_index_9611)-_n_dt_9518);d::put(_n_array_9610,_n_index_9611,_n_value_9612);return _n_value_9612;})()<0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_9613=this->_n_vel_9480;auto _n_index_9614=_n_b_9519;auto _n_value_9615=(d::at(_n_array_9613,_n_index_9614)+(_n_GRAVITY_9458*_n_dt_9518));d::put(_n_array_9613,_n_index_9614,_n_value_9615);return _n_value_9615;})());
(void)(([&](){auto&& _n_array_9616=this->_n_peak_9479;auto _n_index_9617=_n_b_9519;auto _n_value_9618=d::maximum({d::at(this->_n_bar_9478,_n_b_9519),(d::at(this->_n_peak_9479,_n_b_9519)-(d::at(this->_n_vel_9480,_n_b_9519)*_n_dt_9518))});d::put(_n_array_9616,_n_index_9617,_n_value_9618);return _n_value_9618;})());
}
}
}}

}
}

explicit Native_equalizer(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_9549=d::decode<std::shared_ptr<_n_Record_9538>>(_options.data);
this->_n_bpm_9473=(d::present(_n_binding_9549->_p_bpm)?d::read(_n_binding_9549->_p_bpm):_n_meta_9449->_p_options->_p_bpm);
auto _n_binding_9550=_n_meta_9449;
this->_n_cols_9474=_n_binding_9550->_p_cols;
this->_n_rows_9475=_n_binding_9550->_p_rows;
this->_n_STEP_9476=(15.0/([&](){auto _n_argument_9551=60.0;auto _n_argument_9552=d::minimum({180.0,this->_n_bpm_9473});return d::maximum({_n_argument_9551,_n_argument_9552});})());
this->_n_X0_9477=std::floor(((this->_n_cols_9474-((_n_BANDS_9452*3.0)-1.0))/2.0));
this->_n_bar_9478=d::Array<float,true>(size_t(_n_BANDS_9452));
this->_n_peak_9479=d::Array<float,true>(size_t(_n_BANDS_9452));
this->_n_vel_9480=d::Array<float,true>(size_t(_n_BANDS_9452));
this->_n_held_9481=d::Array<float,true>(size_t(_n_BANDS_9452));
this->_n_level_9482=d::Array<float,true>(size_t(_n_BANDS_9452));
this->_n_last_9485=0.0;
this->_n_WARM_9487=((this->_n_STEP_9476*((16.0*3.0)+6.0))+0.04);
{double _n_i_9520=0.0;
for(;d::truth((_n_i_9520<=90.0));(void)((_n_i_9520++))){d::check_cancel();(void)(this->_n_step_9486(((this->_n_WARM_9487*_n_i_9520)/90.0)));
}}
this->_n_grid_9488=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_9475,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_9474)).fill(d::String(u" "));}));
this->_n_AY_9489=(1.0+_n_PH_9454);
{double _n_c_9521=(this->_n_X0_9477-1.0);
for(;d::truth((_n_c_9521<=((this->_n_X0_9477+(_n_BANDS_9452*3.0))-1.0)));(void)((_n_c_9521++))){d::check_cancel();(void)(([&](){auto&& _n_array_9553=d::at(this->_n_grid_9488,this->_n_AY_9489);auto _n_index_9554=_n_c_9521;auto _n_value_9555=d::String(u"─");d::put(_n_array_9553,_n_index_9554,_n_value_9555);return _n_value_9555;})());
}}
(void)(d::forEach(_n_LABELS_9453,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_s_9522=_a0;
double _n_i_9523=_a1;
{
double _n_c_9524=(((this->_n_X0_9477+(_n_i_9523*6.0))+1.0)-std::floor((double(_n_s_9522.size())/2.0)));
(void)(d::forEach(([&](){d::Array<d::String,false> _n_array_9556;for(const auto &_v:_n_s_9522)_n_array_9556.push(_v);return _n_array_9556;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_9525=_a0;
double _n_j_9526=_a1;
return ([&](){auto&& _n_array_9557=d::at(this->_n_grid_9488,(this->_n_AY_9489+1.0));auto _n_index_9558=(_n_c_9524+_n_j_9526);auto _n_value_9559=_n_ch_9525;d::put(_n_array_9557,_n_index_9558,_n_value_9559);return _n_value_9559;})();}));

}
}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_9539> _a1) mutable ->d::String{double _n_t_9527=_a0;
{
if(d::truth(((_n_t_9527+this->_n_WARM_9487)<this->_n_last_9485))){d::check_cancel();(void)((this->_n_last_9485=0.0));
(void)((((this->_n_bar_9478.fill(0.0),this->_n_peak_9479.fill(0.0)),this->_n_vel_9480.fill(0.0)),this->_n_held_9481.fill(0.0)));
{double _n_i_9528=0.0;
for(;d::truth((_n_i_9528<=90.0));(void)((_n_i_9528++))){d::check_cancel();(void)(this->_n_step_9486(((this->_n_WARM_9487*_n_i_9528)/90.0)));
}}
}
(void)(this->_n_step_9486((_n_t_9527+this->_n_WARM_9487)));
{double _n_r_9529=0.0;
for(;d::truth((_n_r_9529<this->_n_AY_9489));(void)((_n_r_9529++))){d::check_cancel();(void)(d::at(this->_n_grid_9488,_n_r_9529).fill(d::String(u" ")));
}}
{double _n_b_9530=0.0;
for(;d::truth((_n_b_9530<_n_BANDS_9452));(void)((_n_b_9530++))){d::check_cancel();double _n_x_9531=(this->_n_X0_9477+(_n_b_9530*3.0));
double _n_h_9532=d::round(((d::minimum({1.0,d::at(this->_n_bar_9478,_n_b_9530)})*_n_PH_9454)*8.0));
double _n_full_9533=double(d::i32(_n_h_9532)>>(d::u32(3.0)&31));
double _n_part_9534=double(d::i32(_n_h_9532)&d::i32(7.0));
{double _n_r_9535=0.0;
for(;d::truth((_n_r_9535<_n_full_9533));(void)((_n_r_9535++))){d::check_cancel();(void)(([&](){auto&& _n_array_9560=d::at(this->_n_grid_9488,((this->_n_AY_9489-1.0)-_n_r_9535));auto _n_index_9561=_n_x_9531;auto _n_value_9562=([&](){auto&& _n_array_9563=d::at(this->_n_grid_9488,((this->_n_AY_9489-1.0)-_n_r_9535));auto _n_index_9564=(_n_x_9531+1.0);auto _n_value_9565=d::String(u"█");d::put(_n_array_9563,_n_index_9564,_n_value_9565);return _n_value_9565;})();d::put(_n_array_9560,_n_index_9561,_n_value_9562);return _n_value_9562;})());
}}
if(d::truth(_n_part_9534)){d::check_cancel();(void)(([&](){auto&& _n_array_9566=d::at(this->_n_grid_9488,((this->_n_AY_9489-1.0)-_n_full_9533));auto _n_index_9567=_n_x_9531;auto _n_value_9568=([&](){auto&& _n_array_9569=d::at(this->_n_grid_9488,((this->_n_AY_9489-1.0)-_n_full_9533));auto _n_index_9570=(_n_x_9531+1.0);auto _n_value_9571=d::at(_n_EIGHTHS_9455,(_n_part_9534-1.0));d::put(_n_array_9569,_n_index_9570,_n_value_9571);return _n_value_9571;})();d::put(_n_array_9566,_n_index_9567,_n_value_9568);return _n_value_9568;})());
}
double _n_pr_9536=double(d::i32(([&](){auto _n_argument_9572=((_n_PH_9454*8.0)-1.0);auto _n_argument_9573=d::round(((d::minimum({1.0,d::at(this->_n_peak_9479,_n_b_9530)})*_n_PH_9454)*8.0));return d::minimum({_n_argument_9572,_n_argument_9573});})())>>(d::u32(3.0)&31));
if(d::truth((_n_pr_9536>=((d::truth(_n_part_9534)?_n_full_9533:(_n_full_9533-1.0))+2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_9574=d::at(this->_n_grid_9488,((this->_n_AY_9489-1.0)-_n_pr_9536));auto _n_index_9575=_n_x_9531;auto _n_value_9576=([&](){auto&& _n_array_9577=d::at(this->_n_grid_9488,((this->_n_AY_9489-1.0)-_n_pr_9536));auto _n_index_9578=(_n_x_9531+1.0);auto _n_value_9579=d::String(u"▁");d::put(_n_array_9577,_n_index_9578,_n_value_9579);return _n_value_9579;})();d::put(_n_array_9574,_n_index_9575,_n_value_9576);return _n_value_9576;})());
}
}}
return d::join(d::map(this->_n_grid_9488,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_9537=_a0;
return d::join(_n_row_9537,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("equalizer").cols)*ascii::catalog_meta("equalizer").rows);auto _env=std::make_shared<_n_Record_9539>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &equalizer_meta(){return catalog_meta("equalizer");}
std::unique_ptr<Piece> make_equalizer(const AsciiPieceOptions &o){return std::make_unique<Native_equalizer>(o);}
}
