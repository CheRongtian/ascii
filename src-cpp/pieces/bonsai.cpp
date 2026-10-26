// Direct, statically typed C++ from src/pieces/bonsai.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_2932;
struct _n_Record_2941;
struct _n_Record_2952;
struct _n_Record_2954;
struct _n_Record_3027;
struct _n_Record_2932{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_2932> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2932>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_2941{
double _p_x{};
double _p_y{};
double _p_w{};
double _p_h{};
d::Array<double,false> _p_fan{};
static std::shared_ptr<_n_Record_2941> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2941>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_w=d::decode<double>(j["w"]);out->_p_h=d::decode<double>(j["h"]);out->_p_fan=d::decode<d::Array<double,false>>(j["fan"]);return out;}
};
struct _n_Record_2952{
double _p_r{};
double _p_c{};
double _p_h{};
double _p_pad{};
bool _p_under{};
double _p_day{};
double _p_night{};
double _p_turn{};
double _p_bud{};
static std::shared_ptr<_n_Record_2952> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2952>();out->_p_r=d::decode<double>(j["r"]);out->_p_c=d::decode<double>(j["c"]);out->_p_h=d::decode<double>(j["h"]);out->_p_pad=d::decode<double>(j["pad"]);out->_p_under=d::decode<bool>(j["under"]);out->_p_day=d::decode<double>(j["day"]);out->_p_night=d::decode<double>(j["night"]);out->_p_turn=d::decode<double>(j["turn"]);out->_p_bud=d::decode<double>(j["bud"]);return out;}
};
struct _n_Record_2954{
double _p_t0{};
d::Array<d::Array<double,false>,false> _p_path{};
double _p_lie{};
static std::shared_ptr<_n_Record_2954> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_2954>();out->_p_t0=d::decode<double>(j["t0"]);out->_p_path=d::decode<d::Array<d::Array<double,false>,false>>(j["path"]);out->_p_lie=d::decode<double>(j["lie"]);return out;}
};
struct _n_Record_3027{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_3027> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_3027>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_hash_2946(double _a0,double _a1);
std::shared_ptr<_n_Record_2932> _n_meta_2931=[](){return ([&](){auto _n_object_3030=std::make_shared<_n_Record_2932>();_n_object_3030->_p_name=d::String(u"bonsai");_n_object_3030->_p_category=d::String(u"nature");_n_object_3030->_p_note=d::String(u"a potted tree that sheds its leaves and leafs out again");_n_object_3030->_p_cols=52.0;_n_object_3030->_p_rows=19.0;_n_object_3030->_p_fps=10.0;return _n_object_3030;})();}();
const double _n_LOOP_2933=[](){return 26.0;}();
d::Array<double,false> _n_AUTUMN_2934=[](){return d::Array<double,false>{3.0,8.5};}();
const double _n_FADE_2935=[](){return 2.5;}();
d::Array<double,false> _n_SPRING_2936=[](){return d::Array<double,false>{14.0,18.5};}();
const double _n_GROW_2937=[](){return 2.5;}();
const double _n_DROP_2938=[](){return 0.24;}();
const d::String _n_RAMP_2939=[](){return d::String(u" .,:;*%&@");}();
d::Array<std::shared_ptr<_n_Record_2941>,false> _n_PADS_2940=[](){return d::Array<std::shared_ptr<_n_Record_2941>,false>{([&](){auto _n_object_3033=std::make_shared<_n_Record_2941>();_n_object_3033->_p_x=27.0;_n_object_3033->_p_y=3.0;_n_object_3033->_p_w=7.0;_n_object_3033->_p_h=2.2;_n_object_3033->_p_fan=d::Array<double,false>{2.0,27.0};return _n_object_3033;})(),([&](){auto _n_object_3035=std::make_shared<_n_Record_2941>();_n_object_3035->_p_x=15.0;_n_object_3035->_p_y=5.0;_n_object_3035->_p_w=7.5;_n_object_3035->_p_h=1.3;_n_object_3035->_p_fan=d::Array<double,false>{6.0,15.0};return _n_object_3035;})(),([&](){auto _n_object_3037=std::make_shared<_n_Record_2941>();_n_object_3037->_p_x=39.0;_n_object_3037->_p_y=6.0;_n_object_3037->_p_w=7.0;_n_object_3037->_p_h=1.3;_n_object_3037->_p_fan=d::Array<double,false>{7.0,39.0};return _n_object_3037;})(),([&](){auto _n_object_3039=std::make_shared<_n_Record_2941>();_n_object_3039->_p_x=11.0;_n_object_3039->_p_y=9.0;_n_object_3039->_p_w=6.5;_n_object_3039->_p_h=1.3;_n_object_3039->_p_fan=d::Array<double,false>{10.0,11.0};return _n_object_3039;})(),([&](){auto _n_object_3041=std::make_shared<_n_Record_2941>();_n_object_3041->_p_x=40.0;_n_object_3041->_p_y=11.0;_n_object_3041->_p_w=6.0;_n_object_3041->_p_h=1.3;_n_object_3041->_p_fan=d::Array<double,false>{12.0,40.0};return _n_object_3041;})()};}();
d::Array<d::Array<double,false>,false> _n_TRUNK_2942=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{15.0,24.0,3.0},d::Array<double,false>{14.0,24.0,3.0},d::Array<double,false>{13.0,25.0,3.0},d::Array<double,false>{12.0,26.0,2.0},d::Array<double,false>{11.0,26.0,2.0},d::Array<double,false>{10.0,25.0,2.0},d::Array<double,false>{9.0,24.0,2.0},d::Array<double,false>{8.0,24.0,1.0},d::Array<double,false>{7.0,24.0,1.0},d::Array<double,false>{6.0,25.0,1.0},d::Array<double,false>{5.0,26.0,1.0},d::Array<double,false>{4.0,26.0,1.0},d::Array<double,false>{3.0,27.0,1.0}};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_WOOD_2943=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(12.0,28.0,d::String(u"___________")),std::make_shared<std::tuple<double,double,d::String>>(11.0,19.0,d::String(u"\\______")),std::make_shared<std::tuple<double,double,d::String>>(10.0,13.0,d::String(u"______")),std::make_shared<std::tuple<double,double,d::String>>(8.0,25.0,d::String(u"_____/")),std::make_shared<std::tuple<double,double,d::String>>(7.0,31.0,d::String(u"______")),std::make_shared<std::tuple<double,double,d::String>>(7.0,19.0,d::String(u"\\____")),std::make_shared<std::tuple<double,double,d::String>>(6.0,17.0,d::String(u"__"))};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_POT_2944=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{std::make_shared<std::tuple<double,double,d::String>>(15.0,6.0,d::String(u".________________/   \\________________.")),std::make_shared<std::tuple<double,double,d::String>>(16.0,7.0,d::String(u"\\___________________________________/")),std::make_shared<std::tuple<double,double,d::String>>(17.0,9.0,d::String(u"`\"\"\"`                       `\"\"\"`"))};}();
d::Array<double,false> _n_SOIL_2945=[](){return d::Array<double,false>{14.0,7.0,43.0};}();
double _n_hash_2946(double _a0,double _a1){double _n_a_2958=_a0;
double _n_b_2959=_a1;
{
double _n_h_2960=d::imul(((_n_a_2958*374761393.0)+(_n_b_2959*668265263.0)),1274126177.0);
(void)((_n_h_2960=d::imul(double(d::i32(_n_h_2960)^d::i32(double(d::u32(_n_h_2960)>>(d::u32(13.0)&31)))),1103515245.0)));
return (double(d::u32(double(d::i32(_n_h_2960)^d::i32(double(d::u32(_n_h_2960)>>(d::u32(16.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

struct Native_bonsai final:ascii::Piece{
double _n_cols_2947{};
double _n_rows_2948{};
d::Array<d::Array<d::String,false>,false> _n_wood_2949{};
d::Array<std::shared_ptr<_n_Record_2952>,false> _n_leaves_2951{};
d::Array<std::shared_ptr<_n_Record_2954>,false> _n_falls_2953{};
d::Array<d::Array<std::shared_ptr<_n_Record_2952>,false>,false> _n_under_2956{};
d::Array<d::Array<d::String,false>,false> _n_grid_2957{};
std::function<d::String(double,std::shared_ptr<_n_Record_3027>)> _render;
void _n_put_2950(double _a0,double _a1,d::String _a2){double _n_r_2961=_a0;
double _n_c_2962=_a1;
d::String _n_s_2963=_a2;
return d::forEach(([&](){d::Array<d::String,false> _n_array_3092;for(const auto &_v:_n_s_2963)_n_array_3092.push(_v);return _n_array_3092;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_ch_2964=_a0;
double _n_i_2965=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_3093=(_n_ch_2964!=d::String(u" "));return d::truth(_n_logical_3093)?std::variant<d::String,bool>(([&](){auto&& _n_array_3094=d::at(this->_n_wood_2949,_n_r_2961);auto _n_index_3095=(_n_c_2962+_n_i_2965);auto _n_value_3096=_n_ch_2964;d::put(_n_array_3094,_n_index_3095,_n_value_3096);return _n_value_3096;})()):std::variant<d::String,bool>(_n_logical_3093);})();});}

void _n_fall_2955(std::shared_ptr<_n_Record_2952> _a0,double _a1,double _a2,std::optional<double> _a3){std::shared_ptr<_n_Record_2952> _n_l_2990=_a0;
double _n_t0_2991=_a1;
double _n_k_2992=_a2;
std::optional<double> _n_until_2993=_a3;
{
double _n_drift_2994=((_n_hash_2946(_n_k_2992,7.0)-0.5)*1.2);
double _n_phase_2995=(_n_hash_2946(_n_k_2992,9.0)*6.3);
d::Array<d::Array<double,false>,false> _n_path_2996=d::Array<d::Array<double,false>,false>{};
{double _n_r_2997=(_n_l_2990->_p_r+1.0);
double _n_i_2998=0.0;
for(;d::truth((_n_r_2997<this->_n_rows_2948));(void)(((_n_r_2997++),(_n_i_2998++)))){d::check_cancel();double _n_c_2999=d::round(((_n_l_2990->_p_c+((_n_drift_2994*_n_i_2998)*_n_DROP_2938))+std::sin(((_n_i_2998*0.9)+_n_phase_2995))));
(void)(_n_path_2996.push(d::Array<double,false>{_n_r_2997,_n_c_2999}));
if(((d::truth((_n_r_2997==d::at(_n_SOIL_2945,0.0)))&&d::truth((_n_c_2999>=d::at(_n_SOIL_2945,1.0))))&&d::truth((_n_c_2999<=d::at(_n_SOIL_2945,2.0))))){d::check_cancel();break;
}
}}
bool _n_lands_3000=(d::at(d::at(_n_path_2996,(double(_n_path_2996.size())-1.0)),0.0)==d::at(_n_SOIL_2945,0.0));
(void)(this->_n_falls_2953.push(([&](){auto _n_object_3098=std::make_shared<_n_Record_2954>();_n_object_3098->_p_t0=_n_t0_2991;_n_object_3098->_p_path=_n_path_2996;_n_object_3098->_p_lie=(d::truth(_n_lands_3000)?d::mod(((([&]()->double{auto _n_logical_3099=_n_until_2993;return d::present(_n_logical_3099)?d::read(_n_logical_3099):((_n_t0_2991+(double(_n_path_2996.size())*_n_DROP_2938))+3.0);})()-_n_t0_2991)+_n_LOOP_2933),_n_LOOP_2933):0.0);return _n_object_3098;})()));

}
}

explicit Native_bonsai(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_3042=_n_meta_2931;
this->_n_cols_2947=_n_binding_3042->_p_cols;
this->_n_rows_2948=_n_binding_3042->_p_rows;
this->_n_wood_2949=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_2948,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_2947)).fill(d::String(u" "));}));
(void)(d::forEach(_n_POT_2944,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->void{auto _n_binding_3043=_a0;
double _n_r_2966=std::get<0>(*_n_binding_3043);
double _n_c_2967=std::get<1>(*_n_binding_3043);
d::String _n_s_2968=std::get<2>(*_n_binding_3043);
this->_n_put_2950(_n_r_2966,_n_c_2967,_n_s_2968);}));
(void)(d::forEach(_n_TRUNK_2942,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_3044=_a0;
double _n_r_2969=d::at(_n_binding_3044,0.0);
double _n_c_2970=d::at(_n_binding_3044,1.0);
double _n_w_2971=d::at(_n_binding_3044,2.0);
double _n_i_2972=_a1;
{
d::Array<double,false> _n_below_2973=d::at(_n_TRUNK_2942,(_n_i_2972-1.0));
double _n_shift_2974=(d::truth(_n_below_2973)?((_n_c_2970+(_n_w_2971/2.0))-(d::at(_n_below_2973,1.0)+(d::at(_n_below_2973,2.0)/2.0))):0.0);
(void)(([&](){auto _n_argument_3045=_n_r_2969;auto _n_argument_3046=_n_c_2970;auto _n_argument_3047=d::repeat((d::truth((_n_shift_2974>0.2))?d::String(u"/"):(d::truth((_n_shift_2974<(-d::number(0.2))))?d::String(u"\\"):d::String(u"|"))),_n_w_2971);return this->_n_put_2950(_n_argument_3045,_n_argument_3046,_n_argument_3047);})());

}
}));
(void)(d::forEach(_n_WOOD_2943,[&]( std::shared_ptr<std::tuple<double,double,d::String>> _a0) mutable ->void{auto _n_binding_3048=_a0;
double _n_r_2975=std::get<0>(*_n_binding_3048);
double _n_c_2976=std::get<1>(*_n_binding_3048);
d::String _n_s_2977=std::get<2>(*_n_binding_3048);
this->_n_put_2950(_n_r_2975,_n_c_2976,_n_s_2977);}));
for(auto &&_n_item_3049:_n_PADS_2940){d::check_cancel();auto _n_binding_3050=_n_item_3049;
auto _n_binding_3051=_n_binding_3050->_p_fan;
double _n_r_2978=d::at(_n_binding_3051,0.0);
double _n_c_2979=d::at(_n_binding_3051,1.0);
{
(void)(this->_n_put_2950(_n_r_2978,(_n_c_2979-1.0),d::String(u"\\|/")));
(void)(this->_n_put_2950((_n_r_2978-1.0),(_n_c_2979-2.0),d::String(u"\\   /")));

}
}
this->_n_leaves_2951=d::Array<std::shared_ptr<_n_Record_2952>,false>{};
(void)(d::forEach(_n_PADS_2940,[&]( std::shared_ptr<_n_Record_2941> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_2941> _n_p_2980=_a0;
double _n_n_2981=_a1;
{
{double _n_r_2982=std::ceil((_n_p_2980->_p_y-_n_p_2980->_p_h));
for(;d::truth((_n_r_2982<=(_n_p_2980->_p_y+1.0)));(void)((_n_r_2982++))){d::check_cancel();{double _n_c_2983=std::floor((_n_p_2980->_p_x-_n_p_2980->_p_w));
for(;d::truth((_n_c_2983<=std::ceil((_n_p_2980->_p_x+_n_p_2980->_p_w))));(void)((_n_c_2983++))){d::check_cancel();double _n_dx_2984=((_n_c_2983-_n_p_2980->_p_x)/_n_p_2980->_p_w);
double _n_dy_2985=((_n_r_2982-_n_p_2980->_p_y)/_n_p_2980->_p_h);
double _n_rho_2986=(d::truth((_n_r_2982<=_n_p_2980->_p_y))?d::hypot(std::initializer_list<double>{_n_dx_2984,_n_dy_2985}):([&](){auto _n_argument_3052=(std::fabs(_n_dx_2984)/0.85);auto _n_argument_3053=0.72;return d::maximum({_n_argument_3052,_n_argument_3053});})());
if(d::truth((_n_rho_2986>1.0))){d::check_cancel();continue;
}
double _n_h_2987=_n_hash_2946(((_n_r_2982*97.0)+_n_n_2981),_n_c_2983);
double _n_mass_2988=(([&](){auto _n_argument_3054=1.0;auto _n_argument_3055=((1.0-(d::truth((_n_r_2982<=_n_p_2980->_p_y))?d::hypot(std::initializer_list<double>{_n_dx_2984,(_n_dy_2985*0.85)}):_n_rho_2986))*2.6);return d::minimum({_n_argument_3054,_n_argument_3055});})()*(0.85+(0.3*_n_h_2987)));
double _n_lit_2989=([&](){auto _n_argument_3056=0.0;auto _n_argument_3057=d::minimum({1.0,((0.5-(0.35*_n_dx_2984))-(0.55*(d::truth((_n_r_2982<=_n_p_2980->_p_y))?_n_dy_2985:1.1)))});return d::maximum({_n_argument_3056,_n_argument_3057});})();
(void)(this->_n_leaves_2951.push(([&](){auto _n_object_3059=std::make_shared<_n_Record_2952>();_n_object_3059->_p_r=_n_r_2982;_n_object_3059->_p_c=_n_c_2983;_n_object_3059->_p_h=_n_h_2987;_n_object_3059->_p_pad=_n_n_2981;_n_object_3059->_p_under=(_n_r_2982>_n_p_2980->_p_y);_n_object_3059->_p_day=(_n_mass_2988*(0.5+(0.5*_n_lit_2989)));_n_object_3059->_p_night=(_n_mass_2988*(0.5+(0.5*(1.0-_n_lit_2989))));_n_object_3059->_p_turn=(d::at(_n_AUTUMN_2934,0.0)+((d::at(_n_AUTUMN_2934,1.0)-d::at(_n_AUTUMN_2934,0.0))*((0.7*(1.0-_n_rho_2986))+(0.3*_n_h_2987))));_n_object_3059->_p_bud=(d::at(_n_SPRING_2936,0.0)+((d::at(_n_SPRING_2936,1.0)-d::at(_n_SPRING_2936,0.0))*d::minimum({1.0,((0.75*_n_rho_2986)+(0.25*_n_h_2987))})));return _n_object_3059;})()));
}}
}}

}
}));
this->_n_falls_2953=d::Array<std::shared_ptr<_n_Record_2954>,false>{};
this->_n_under_2956=d::map(_n_PADS_2940,[&]( std::shared_ptr<_n_Record_2941> _a0,double _a1) mutable ->d::Array<std::shared_ptr<_n_Record_2952>,false>{std::shared_ptr<_n_Record_2941> _n___3001=_a0;
double _n_n_3002=_a1;
return d::filter(this->_n_leaves_2951,[&]( std::shared_ptr<_n_Record_2952> _a0) mutable ->bool{std::shared_ptr<_n_Record_2952> _n_l_3003=_a0;
return ([&]()->bool{auto _n_logical_3060=([&]()->bool{auto _n_logical_3061=(_n_l_3003->_p_pad==_n_n_3002);return d::truth(_n_logical_3061)?_n_l_3003->_p_under:_n_logical_3061;})();return d::truth(_n_logical_3060)?(_n_l_3003->_p_day>0.15):_n_logical_3060;})();});});
(void)(d::forEach(d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.2)),0.0},d::Array<double,false>{0.5,0.0},d::Array<double,false>{2.0,1.0},d::Array<double,false>{3.0,0.0},d::Array<double,false>{22.6,1.0},d::Array<double,false>{24.4,3.0}},[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_3062=_a0;
double _n_t0_3004=d::at(_n_binding_3062,0.0);
double _n_n_3005=d::at(_n_binding_3062,1.0);
double _n_k_3006=_a1;
{
d::Array<std::shared_ptr<_n_Record_2952>,false> _n_from_3007=d::at(this->_n_under_2956,_n_n_3005);
(void)(([&](){auto _n_argument_3063=d::at(_n_from_3007,std::floor((_n_hash_2946(_n_k_3006,1.0)*double(_n_from_3007.size()))));auto _n_argument_3064=d::mod((_n_t0_3004+_n_LOOP_2933),_n_LOOP_2933);auto _n_argument_3065=_n_k_3006;return this->_n_fall_2955(_n_argument_3063,_n_argument_3064,_n_argument_3065,std::optional<double>{});})());

}
}));
(void)(d::forEach(d::filter(d::flat(this->_n_under_2956),[&]( std::shared_ptr<_n_Record_2952> _a0) mutable ->bool{std::shared_ptr<_n_Record_2952> _n_l_3008=_a0;
return (_n_hash_2946(_n_l_3008->_p_r,(_n_l_3008->_p_c*3.0))<0.22);}),[&]( std::shared_ptr<_n_Record_2952> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_2952> _n_l_3009=_a0;
double _n_k_3010=_a1;
([&](){auto _n_argument_3066=_n_l_3009;auto _n_argument_3067=(_n_l_3009->_p_turn+(_n_FADE_2935*0.8));auto _n_argument_3068=(_n_k_3010+10.0);auto _n_argument_3069=(d::at(_n_SPRING_2936,0.0)+(3.0*_n_hash_2946(_n_k_3010,3.0)));return this->_n_fall_2955(_n_argument_3066,_n_argument_3067,_n_argument_3068,std::optional<double>(_n_argument_3069));})();}));
this->_n_grid_2957=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_2948,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_2947));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_3027> _a1) mutable ->d::String{double _n_t_3011=_a0;
auto _n_binding_3072=(d::present(_a1)?_a1:([&](){auto _n_object_3071=std::make_shared<_n_Record_3027>();return _n_object_3071;})());
bool _n_paper_3012=(d::present(_n_binding_3072->_p_paper)?d::read(_n_binding_3072->_p_paper):false);
{
double _n_u_3013=d::mod((d::mod(_n_t_3011,_n_LOOP_2933)+_n_LOOP_2933),_n_LOOP_2933);
{double _n_r_3014=0.0;
for(;d::truth((_n_r_3014<this->_n_rows_2948));(void)((_n_r_3014++))){d::check_cancel();{double _n_c_3015=0.0;
for(;d::truth((_n_c_3015<this->_n_cols_2947));(void)((_n_c_3015++))){d::check_cancel();(void)(([&](){auto&& _n_array_3073=d::at(this->_n_grid_2957,_n_r_3014);auto _n_index_3074=_n_c_3015;auto _n_value_3075=d::at(d::at(this->_n_wood_2949,_n_r_3014),_n_c_3015);d::put(_n_array_3073,_n_index_3074,_n_value_3075);return _n_value_3075;})());
}}
}}
double _n_gust_3016=std::pow(([&](){auto _n_argument_3076=0.0;auto _n_argument_3077=std::sin((((_n_u_3013/_n_LOOP_2933)*ascii::PI)*8.0));return d::maximum({_n_argument_3076,_n_argument_3077});})(),3.0);
for(auto &&_n_item_3078:this->_n_leaves_2951){d::check_cancel();std::shared_ptr<_n_Record_2952> _n_l_3017=_n_item_3078;
{
double _n_f_3018=1.0;
if((d::truth((_n_u_3013>=_n_l_3017->_p_turn))&&d::truth((_n_u_3013<d::at(_n_SPRING_2936,0.0))))){d::check_cancel();(void)((_n_f_3018=d::maximum({0.0,(1.0-((_n_u_3013-_n_l_3017->_p_turn)/_n_FADE_2935))})));
}else {d::check_cancel();if((d::truth((_n_u_3013>=d::at(_n_SPRING_2936,0.0)))&&d::truth((_n_u_3013<_n_l_3017->_p_bud)))){d::check_cancel();(void)((_n_f_3018=0.0));
}else {d::check_cancel();if((d::truth((_n_u_3013>=_n_l_3017->_p_bud))&&d::truth((_n_u_3013<(_n_l_3017->_p_bud+_n_GROW_2937))))){d::check_cancel();(void)((_n_f_3018=((_n_u_3013-_n_l_3017->_p_bud)/_n_GROW_2937)));
}
}
}
if(d::truth((_n_f_3018<=0.0))){d::check_cancel();continue;
}
double _n_stir_3019=((_n_gust_3016*0.12)*std::sin((((_n_u_3013*5.0)-(_n_l_3017->_p_c*0.5))+(_n_l_3017->_p_h*3.0))));
double _n_i_3020=d::round((([&](){auto _n_argument_3079=0.0;auto _n_argument_3080=d::minimum({1.0,(((d::truth(_n_paper_3012)?_n_l_3017->_p_night:_n_l_3017->_p_day)*_n_f_3018)+_n_stir_3019)});return d::maximum({_n_argument_3079,_n_argument_3080});})()*(double(_n_RAMP_2939.size())-1.0)));
if(d::truth((_n_i_3020>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_3081=d::at(this->_n_grid_2957,_n_l_3017->_p_r);auto _n_index_3082=_n_l_3017->_p_c;auto _n_value_3083=d::at(_n_RAMP_2939,_n_i_3020);d::put(_n_array_3081,_n_index_3082,_n_value_3083);return _n_value_3083;})());
}

}
}
for(auto &&_n_item_3084:this->_n_falls_2953){d::check_cancel();std::shared_ptr<_n_Record_2954> _n_f_3021=_n_item_3084;
{
double _n_age_3022=d::mod(((_n_u_3013-_n_f_3021->_p_t0)+_n_LOOP_2933),_n_LOOP_2933);
double _n_step_3023=std::floor((_n_age_3022/_n_DROP_2938));
auto _n_binding_3085=d::at(_n_f_3021->_p_path,d::minimum({_n_step_3023,(double(_n_f_3021->_p_path.size())-1.0)}));
double _n_r_3024=d::at(_n_binding_3085,0.0);
double _n_c_3025=d::at(_n_binding_3085,1.0);
if(d::truth((d::at(d::at(this->_n_grid_2957,_n_r_3024),_n_c_3025)!=d::String(u" ")))){d::check_cancel();continue;
}
if(d::truth((_n_step_3023<double(_n_f_3021->_p_path.size())))){d::check_cancel();(void)(([&](){auto&& _n_array_3086=d::at(this->_n_grid_2957,_n_r_3024);auto _n_index_3087=_n_c_3025;auto _n_value_3088=(d::truth(double(d::i32(_n_step_3023)&d::i32(1.0)))?d::String(u"'"):d::String(u","));d::put(_n_array_3086,_n_index_3087,_n_value_3088);return _n_value_3088;})());
}else {d::check_cancel();if(d::truth((_n_age_3022<_n_f_3021->_p_lie))){d::check_cancel();(void)(([&](){auto&& _n_array_3089=d::at(this->_n_grid_2957,_n_r_3024);auto _n_index_3090=_n_c_3025;auto _n_value_3091=d::String(u",");d::put(_n_array_3089,_n_index_3090,_n_value_3091);return _n_value_3091;})());
}
}

}
}
return d::join(d::map(this->_n_grid_2957,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_3026=_a0;
return d::join(_n_row_3026,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("bonsai").cols)*ascii::catalog_meta("bonsai").rows);auto _env=std::make_shared<_n_Record_3027>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &bonsai_meta(){return catalog_meta("bonsai");}
std::unique_ptr<Piece> make_bonsai(const AsciiPieceOptions &o){return std::make_unique<Native_bonsai>(o);}
}
