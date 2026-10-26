// Direct, statically typed C++ from src/pieces/rocket.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25949;
struct _n_Record_25983;
struct _n_Record_26073;
struct _n_Record_26077;
struct _n_Record_26092;
struct _n_Record_25949{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_25949> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25949>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_25983{
double _p_jx{};
double _p_side{};
double _p_fan{};
double _p_rise{};
double _p_life{};
double _p_grow{};
static std::shared_ptr<_n_Record_25983> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25983>();out->_p_jx=d::decode<double>(j["jx"]);out->_p_side=d::decode<double>(j["side"]);out->_p_fan=d::decode<double>(j["fan"]);out->_p_rise=d::decode<double>(j["rise"]);out->_p_life=d::decode<double>(j["life"]);out->_p_grow=d::decode<double>(j["grow"]);return out;}
};
struct _n_Record_26073{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26073> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26073>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_26077{
double _p_w{};
double _p_k{};
double _p_g{};
double _p_f{};
static std::shared_ptr<_n_Record_26077> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26077>();out->_p_w=d::decode<double>(j["w"]);out->_p_k=d::decode<double>(j["k"]);out->_p_g=d::decode<double>(j["g"]);out->_p_f=d::decode<double>(j["f"]);return out;}
};
struct _n_Record_26092{
double _p_length{};
static std::shared_ptr<_n_Record_26092> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26092>();out->_p_length=d::decode<double>(j["length"]);return out;}
};
std::function<double()> _n_mulberry32_25965(double _a0);
double _n_height_25966(double _a0);
bool _n_burning_25967(double _a0);
bool _n_onPad_25968(double _a0);
std::shared_ptr<_n_Record_25949> _n_meta_25948=[](){return ([&](){auto _n_object_26076=std::make_shared<_n_Record_25949>();_n_object_26076->_p_name=d::String(u"rocket");_n_object_26076->_p_category=d::String(u"space");_n_object_26076->_p_note=d::String(u"a rocket lifting off its pad at night, then landing back");_n_object_26076->_p_cols=48.0;_n_object_26076->_p_rows=28.0;_n_object_26076->_p_fps=20.0;return _n_object_26076;})();}();
d::Array<d::String,false> _n_ROCKET_25950=[](){return d::Array<d::String,false>{d::String(u"      /\\      "),d::String(u"     /ww\\     "),d::String(u"    /wwww\\    "),d::String(u"   /wwwwww\\   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   \\wwwwww/   "),d::String(u"    |wwww|    "),d::String(u"    |wwww|    "),d::String(u"   /kkkkkk\\   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"  /|wwwwww|\\  "),d::String(u" /f|wwwwww|f\\ "),d::String(u"/ff|wwwwww|ff\\"),d::String(u"    \\gggg/    "),d::String(u"    /gggg\\    "),d::String(u"   /gggggg\\   ")};}();
d::Dict<d::String,double> _n_TONE_25951=[](){return ([&](){d::Dict<d::String,double> _n_dictionary_26078;_n_dictionary_26078.set(d::String(u"w"),1.0);_n_dictionary_26078.set(d::String(u"k"),0.42);_n_dictionary_26078.set(d::String(u"g"),0.62);_n_dictionary_26078.set(d::String(u"f"),0.6);return _n_dictionary_26078;})();}();
const d::String _n_BODY_25952=[](){return d::String(u" .:-=+*#%");}();
const d::String _n_SMOKE_25953=[](){return d::String(u" .:-=+*#%");}();
const d::String _n_FLAME_25954=[](){return d::String(u"░▒▓█");}();
const double _n_LOOP_25955=[](){return 18.0;}();
const double _n_ARM_25956=[](){return 0.8;}();
const double _n_IGNITE_25957=[](){return 1.5;}();
const double _n_LIFT_25958=[](){return 3.0;}();
const double _n_CLIMB_25959=[](){return 2.6;}();
const double _n_OUT_25960=[](){return 40.0;}();
const double _n_LAND_25961=[](){return 14.6;}();
const double _n_DECEL_25962=[](){return 4.4;}();
const double _n_BURN_25963=[](){return std::sqrt(((2.0*_n_OUT_25960)/_n_DECEL_25962));}();
const double _n_RATE_25964=[](){return 36.0;}();
std::function<double()> _n_mulberry32_25965(double _a0){double _n_a_25989=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_25989=double(d::i32((_n_a_25989+1831565813.0))|d::i32(0.0))));
double _n_t_25990=d::imul(double(d::i32(_n_a_25989)^d::i32(double(d::u32(_n_a_25989)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_25989)));
(void)((_n_t_25990=double(d::i32((_n_t_25990+d::imul(double(d::i32(_n_t_25990)^d::i32(double(d::u32(_n_t_25990)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_25990)))))^d::i32(_n_t_25990))));
return (double(d::u32(double(d::i32(_n_t_25990)^d::i32(double(d::u32(_n_t_25990)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_height_25966(double _a0){double _n_t_25991=_a0;
{
if((d::truth((_n_t_25991<_n_LIFT_25958))||d::truth((_n_t_25991>=_n_LAND_25961)))){d::check_cancel();return 0.0;
}
double _n_up_25992=((0.5*_n_CLIMB_25959)*std::pow((_n_t_25991-_n_LIFT_25958),2.0));
if(d::truth((_n_up_25992<_n_OUT_25960))){d::check_cancel();return _n_up_25992;
}
double _n_left_25993=(_n_LAND_25961-_n_t_25991);
return (d::truth((_n_left_25993<_n_BURN_25963))?(((0.5*_n_DECEL_25962)*_n_left_25993)*_n_left_25993):(-d::number(1.0)));

}
}

bool _n_burning_25967(double _a0){double _n_t_25994=_a0;
return ([&]()->bool{auto _n_logical_26079=([&]()->bool{auto _n_logical_26080=(_n_t_25994>=_n_IGNITE_25957);return d::truth(_n_logical_26080)?(_n_t_25994<_n_LAND_25961):_n_logical_26080;})();return d::truth(_n_logical_26079)?(_n_height_25966(_n_t_25994)>=0.0):_n_logical_26079;})();}

bool _n_onPad_25968(double _a0){double _n_t_25995=_a0;
return ([&]()->bool{auto _n_logical_26081=(_n_t_25995<(_n_ARM_25956-0.3));return d::truth(_n_logical_26081)?_n_logical_26081:(_n_t_25995>=(_n_LAND_25961+1.0));})();}

struct Native_rocket final:ascii::Piece{
double _n_cols_25969{};
double _n_rows_25970{};
double _n_W_25971{};
double _n_HT_25972{};
double _n_left_25973{};
double _n_mid_25974{};
double _n_pad_25975{};
double _n_tower_25976{};
double _n_armRow_25977{};
std::function<double()> _n_rand_25978{};
d::Array<d::Array<d::Array<d::String,false>,false>,false> _n_sprite_25979{};
d::Array<std::array<double,2>,false> _n_span_25980{};
d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false> _n_stars_25981{};
d::Array<std::shared_ptr<_n_Record_25983>,false> _n_puffs_25982{};
d::Array<d::String,false> _n_grid_25984{};
d::Array<float,true> _n_fog_25985{};
std::function<d::String(double,std::shared_ptr<_n_Record_26073>)> _render;
void _n_put_25986(double _a0,double _a1,d::String _a2){double _n_x_26010=_a0;
double _n_y_26011=_a1;
d::String _n_ch_26012=_a2;
{
double _n_c_26013=d::round(_n_x_26010);
double _n_r_26014=d::round(_n_y_26011);
if((((d::truth((_n_c_26013>=0.0))&&d::truth((_n_c_26013<this->_n_cols_25969)))&&d::truth((_n_r_26014>=0.0)))&&d::truth((_n_r_26014<this->_n_rows_25970)))){d::check_cancel();(void)(([&](){auto&& _n_array_26123=this->_n_grid_25984;auto _n_index_26124=((_n_r_26014*this->_n_cols_25969)+_n_c_26013);auto _n_value_26125=_n_ch_26012;d::put(_n_array_26123,_n_index_26124,_n_value_26125);return _n_value_26125;})());
}

}
}

void _n_splat_25987(double _a0,double _a1,double _a2,double _a3){double _n_x_26015=_a0;
double _n_y_26016=_a1;
double _n_rad_26017=_a2;
double _n_s_26018=_a3;
{
double _n_ry_26019=(_n_rad_26017/2.0);
{double _n_r_26020=([&](){auto _n_argument_26126=0.0;auto _n_argument_26127=std::ceil((_n_y_26016-_n_ry_26019));return d::maximum({_n_argument_26126,_n_argument_26127});})();
for(;d::truth((_n_r_26020<=([&](){auto _n_argument_26128=(this->_n_rows_25970-1.0);auto _n_argument_26129=std::floor((_n_y_26016+_n_ry_26019));return d::minimum({_n_argument_26128,_n_argument_26129});})()));(void)((_n_r_26020++))){d::check_cancel();{double _n_c_26021=([&](){auto _n_argument_26130=0.0;auto _n_argument_26131=std::ceil((_n_x_26015-_n_rad_26017));return d::maximum({_n_argument_26130,_n_argument_26131});})();
for(;d::truth((_n_c_26021<=([&](){auto _n_argument_26132=(this->_n_cols_25969-1.0);auto _n_argument_26133=std::floor((_n_x_26015+_n_rad_26017));return d::minimum({_n_argument_26132,_n_argument_26133});})()));(void)((_n_c_26021++))){d::check_cancel();double _n_q_26022=(std::pow(((_n_c_26021-_n_x_26015)/_n_rad_26017),2.0)+std::pow(((_n_r_26020-_n_y_26016)/_n_ry_26019),2.0));
if(d::truth((_n_q_26022<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_26134=this->_n_fog_25985;auto _n_index_26135=((_n_r_26020*this->_n_cols_25969)+_n_c_26021);auto _n_value_26136=(d::at(_n_array_26134,_n_index_26135)+(_n_s_26018*(1.0-_n_q_26022)));d::put(_n_array_26134,_n_index_26135,_n_value_26136);return _n_value_26136;})());
}
}}
}}

}
}

void _n_puff_25988(std::shared_ptr<_n_Record_25983> _a0,double _a1,double _a2,double _a3,double _a4){std::shared_ptr<_n_Record_25983> _n_p_26023=_a0;
double _n_x0_26024=_a1;
double _n_y0_26025=_a2;
double _n_age_26026=_a3;
double _n_thick_26027=_a4;
{
double _n_down_26028=((26.0*0.2)*(1.0-std::exp(((-d::number(_n_age_26026))/0.2))));
double _n_x_26029=(_n_x0_26024+(_n_p_26023->_p_jx*(1.0+_n_age_26026)));
double _n_y_26030=(_n_y0_26025+_n_down_26028);
if(d::truth((_n_y_26030>this->_n_pad_25975))){d::check_cancel();double _n_hit_26031=((-d::number(0.2))*std::log((1.0-((this->_n_pad_25975-_n_y0_26025)/(26.0*0.2)))));
(void)((_n_y_26030=(this->_n_pad_25975-0.2)));
(void)((_n_x_26029=((_n_x0_26024+_n_p_26023->_p_jx)+(((_n_p_26023->_p_side*_n_p_26023->_p_fan)*0.7)*(1.0-std::exp(((-d::number((_n_age_26026-_n_hit_26031)))/0.7)))))));
}
(void)((_n_y_26030=(_n_y_26030-((((_n_p_26023->_p_rise*_n_age_26026)*_n_age_26026)*0.5)+(0.3*_n_age_26026)))));
double _n_fade_26032=d::maximum({0.0,(1.0-(_n_age_26026/_n_p_26023->_p_life))});
(void)(this->_n_splat_25987((_n_x_26029+(0.8*_n_age_26026)),_n_y_26030,(1.2+((_n_p_26023->_p_grow*_n_age_26026)*2.2)),(((0.9*_n_thick_26027)*_n_fade_26032)*_n_fade_26032)));

}
}

explicit Native_rocket(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26082=_n_meta_25948;
this->_n_cols_25969=_n_binding_26082->_p_cols;
this->_n_rows_25970=_n_binding_26082->_p_rows;
this->_n_W_25971=double(d::at(_n_ROCKET_25950,0.0).size());
this->_n_HT_25972=double(_n_ROCKET_25950.size());
this->_n_left_25973=std::floor(((this->_n_cols_25969-this->_n_W_25971)/2.0));
this->_n_mid_25974=((this->_n_left_25973+(this->_n_W_25971/2.0))-0.5);
this->_n_pad_25975=(this->_n_rows_25970-2.0);
this->_n_tower_25976=(this->_n_left_25973-8.0);
this->_n_armRow_25977=((this->_n_pad_25975-this->_n_HT_25972)+8.0);
this->_n_rand_25978=_n_mulberry32_25965(3.0);
this->_n_sprite_25979=d::map(d::Array<bool,false>{false,true},[&]( bool _a0) mutable ->d::Array<d::Array<d::String,false>,false>{bool _n_paper_25996=_a0;
return d::map(_n_ROCKET_25950,[&]( d::String _a0) mutable ->d::Array<d::String,false>{d::String _n_line_25997=_a0;
{
double _n_a_25998=d::search(_n_line_25997,d::Regex(u"[wkg]",u""));
double _n_b_25999=(d::lastIndexOf(_n_line_25997,d::at(_n_line_25997,_n_a_25998))+1.0);
return d::map(([&](){d::Array<d::String,false> _n_array_26083;for(const auto &_v:_n_line_25997)_n_array_26083.push(_v);return _n_array_26083;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_26000=_a0;
double _n_c_26001=_a1;
{
if(d::truth((!d::truth(_n_TONE_25951.get(_n_ch_26000))))){d::check_cancel();return _n_ch_26000;
}
double _n_x_26002=(((_n_c_26001+0.5)-(this->_n_W_25971/2.0))/(((_n_b_25999-_n_a_25998)/2.0)+0.5));
double _n_lit_26003=(d::truth((_n_ch_26000==d::String(u"f")))?(d::truth((_n_x_26002<0.0))?0.75:0.3):([&](){auto _n_argument_26084=0.0;auto _n_argument_26085=(((-d::number(0.72))*_n_x_26002)+(0.69*std::sqrt(d::maximum({0.0,(1.0-(_n_x_26002*_n_x_26002))}))));return d::maximum({_n_argument_26084,_n_argument_26085});})());
double _n_i_26004=([&](){auto _n_argument_26086=1.0;auto _n_argument_26087=d::round(((_n_TONE_25951.get(_n_ch_26000)*(0.12+(0.88*_n_lit_26003)))*(double(_n_BODY_25952.size())-1.0)));return d::maximum({_n_argument_26086,_n_argument_26087});})();
return d::at(_n_BODY_25952,(d::truth(_n_paper_25996)?(double(_n_BODY_25952.size())-_n_i_26004):_n_i_26004));

}
});

}
});});
this->_n_span_25980=d::map(_n_ROCKET_25950,[&]( d::String _a0) mutable ->std::array<double,2>{d::String _n_s_26005=_a0;
return std::array<double,2>{d::search(_n_s_26005,d::Regex(u"\\S",u"")),double(d::trim(_n_s_26005,false,true).size())};});
this->_n_stars_25981=d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false>{};
{double _n_r_26006=0.0;
for(;d::truth((_n_r_26006<(this->_n_pad_25975-9.0)));(void)((_n_r_26006++))){d::check_cancel();{double _n_c_26007=0.0;
for(;d::truth((_n_c_26007<this->_n_cols_25969));(void)((_n_c_26007++))){d::check_cancel();bool _n_byRocket_26008=([&]()->bool{auto _n_logical_26088=([&]()->bool{auto _n_logical_26089=(_n_c_26007>=(this->_n_left_25973-2.0));return d::truth(_n_logical_26089)?(_n_c_26007<=(((this->_n_left_25973+this->_n_W_25971)+1.0)+(d::truth((std::fabs((_n_r_26006-this->_n_armRow_25977))<4.0))?12.0:0.0))):_n_logical_26089;})();return d::truth(_n_logical_26088)?(_n_r_26006>=((this->_n_pad_25975-this->_n_HT_25972)-2.0)):_n_logical_26088;})();
bool _n_byTower_26009=([&]()->bool{auto _n_logical_26090=(std::fabs(((_n_c_26007-this->_n_tower_25976)-1.0))<4.0);return d::truth(_n_logical_26090)?(_n_r_26006>=(this->_n_pad_25975-24.0)):_n_logical_26090;})();
if(((d::truth((this->_n_rand_25978()<0.026))&&d::truth((!d::truth(_n_byRocket_26008))))&&d::truth((!d::truth(_n_byTower_26009))))){d::check_cancel();(void)(this->_n_stars_25981.push(std::make_shared<std::tuple<double,double,double,bool>>(_n_c_26007,_n_r_26006,(this->_n_rand_25978()*6.283),(this->_n_rand_25978()<0.2))));
}
}}
}}
this->_n_puffs_25982=([&](){auto _n_argument_26091=([&](){auto _n_object_26093=std::make_shared<_n_Record_26092>();_n_object_26093->_p_length=std::ceil((_n_LOOP_25955*_n_RATE_25964));return _n_object_26093;})();auto _n_argument_26095=[=]( ) mutable ->std::shared_ptr<_n_Record_25983>{return ([&](){auto _n_object_26098=std::make_shared<_n_Record_25983>();_n_object_26098->_p_jx=((this->_n_rand_25978()-0.5)*2.4);_n_object_26098->_p_side=(d::truth((this->_n_rand_25978()<0.5))?(-d::number(1.0)):1.0);_n_object_26098->_p_fan=(14.0+(this->_n_rand_25978()*12.0));_n_object_26098->_p_rise=(0.5+(this->_n_rand_25978()*0.9));_n_object_26098->_p_life=(2.2+(this->_n_rand_25978()*1.4));_n_object_26098->_p_grow=(0.6+(this->_n_rand_25978()*0.6));return _n_object_26098;})();};return d::Array<std::shared_ptr<_n_Record_25983>,false>(d::from(std::ceil((_n_LOOP_25955*_n_RATE_25964)),_n_argument_26095));})();
this->_n_grid_25984=d::Array<d::String,false>(size_t((this->_n_cols_25969*this->_n_rows_25970)));
this->_n_fog_25985=d::Array<float,true>(size_t((this->_n_cols_25969*this->_n_rows_25970)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_26073> _a1) mutable ->d::String{double _n_time_26033=_a0;
auto _n_binding_26101=(d::present(_a1)?_a1:([&](){auto _n_object_26100=std::make_shared<_n_Record_26073>();return _n_object_26100;})());
bool _n_paper_26034=(d::present(_n_binding_26101->_p_paper)?d::read(_n_binding_26101->_p_paper):false);
{
double _n_t_26035=d::mod((d::mod(_n_time_26033,_n_LOOP_25955)+_n_LOOP_25955),_n_LOOP_25955);
(void)(this->_n_grid_25984.fill(d::String(u" ")));
(void)(this->_n_fog_25985.fill(0.0));
for(auto &&_n_item_26102:this->_n_stars_25981){d::check_cancel();auto _n_binding_26103=_n_item_26102;
double _n_c_26036=std::get<0>(*_n_binding_26103);
double _n_r_26037=std::get<1>(*_n_binding_26103);
double _n_ph_26038=std::get<2>(*_n_binding_26103);
bool _n_big_26039=std::get<3>(*_n_binding_26103);
{
double _n_tw_26040=std::sin(((_n_time_26033*1.7)+_n_ph_26038));
(void)(this->_n_put_25986(_n_c_26036,_n_r_26037,(d::truth(_n_big_26039)?(d::truth((_n_tw_26040>0.3))?d::String(u"+"):d::String(u"*")):(d::truth((_n_tw_26040>(-d::number(0.6))))?d::String(u"."):d::String(u" ")))));

}
}
{double _n_r_26041=(this->_n_pad_25975-20.0);
for(;d::truth((_n_r_26041<=this->_n_pad_25975));(void)((_n_r_26041++))){d::check_cancel();(void)(this->_n_put_25986(this->_n_tower_25976,_n_r_26041,d::String(u"|")));
(void)(this->_n_put_25986((this->_n_tower_25976+2.0),_n_r_26041,d::String(u"|")));
(void)(this->_n_put_25986((this->_n_tower_25976+1.0),_n_r_26041,(d::truth(d::mod(_n_r_26041,2.0))?d::String(u"/"):d::String(u"\\"))));
}}
(void)(this->_n_put_25986((this->_n_tower_25976+1.0),(this->_n_pad_25975-21.0),d::String(u"|")));
(void)(([&](){auto _n_argument_26104=(this->_n_tower_25976+1.0);auto _n_argument_26105=(this->_n_pad_25975-22.0);auto _n_argument_26106=(d::truth(d::mod(std::floor((_n_time_26033*1.25)),2.0))?d::String(u"*"):d::String(u"."));return this->_n_put_25986(_n_argument_26104,_n_argument_26105,_n_argument_26106);})());
double _n_swing_26042=(d::truth((_n_t_26035<_n_ARM_25956))?1.0:(d::truth((_n_t_26035<_n_IGNITE_25957))?(1.0-((_n_t_26035-_n_ARM_25956)/(_n_IGNITE_25957-_n_ARM_25956))):(d::truth((_n_t_26035<(_n_LAND_25961+1.0)))?0.0:d::minimum({1.0,(((_n_t_26035-_n_LAND_25961)-1.0)/0.6)}))));
{double _n_i_26043=0.0;
for(;d::truth((_n_i_26043<d::round((_n_swing_26042*((this->_n_left_25973+1.0)-this->_n_tower_25976)))));(void)((_n_i_26043++))){d::check_cancel();(void)(this->_n_put_25986(((this->_n_tower_25976+3.0)+_n_i_26043),this->_n_armRow_25977,d::String(u"=")));
}}
{double _n_c_26044=0.0;
for(;d::truth((_n_c_26044<this->_n_cols_25969));(void)((_n_c_26044++))){d::check_cancel();(void)(this->_n_put_25986(_n_c_26044,(this->_n_rows_25970-1.0),d::String(u"▀")));
}}
{double _n_c_26045=2.0;
for(;d::truth((_n_c_26045<(this->_n_cols_25969-2.0)));(void)((_n_c_26045++))){d::check_cancel();(void)(([&](){auto _n_argument_26107=_n_c_26045;auto _n_argument_26108=this->_n_pad_25975;auto _n_argument_26109=(d::truth((std::fabs((_n_c_26045-this->_n_mid_25974))<4.0))?d::String(u" "):d::String(u"_"));return this->_n_put_25986(_n_argument_26107,_n_argument_26108,_n_argument_26109);})());
}}
{double _n_k_26046=0.0;
for(;d::truth((_n_k_26046<double(this->_n_puffs_25982.size())));(void)((_n_k_26046++))){d::check_cancel();double _n_born_26047=(_n_k_26046/_n_RATE_25964);
double _n_age_26048=(_n_t_26035-_n_born_26047);
if(((d::truth((_n_age_26048<0.0))||d::truth((_n_age_26048>d::at(this->_n_puffs_25982,_n_k_26046)->_p_life)))||d::truth((!d::truth(_n_burning_25967(_n_born_26047)))))){d::check_cancel();continue;
}
double _n_h_26049=_n_height_25966(_n_born_26047);
if(d::truth((((this->_n_pad_25975-1.0)-_n_h_26049)>=(-d::number(2.0))))){d::check_cancel();(void)(([&](){auto _n_argument_26110=d::at(this->_n_puffs_25982,_n_k_26046);auto _n_argument_26111=this->_n_mid_25974;auto _n_argument_26112=((this->_n_pad_25975-0.5)-_n_h_26049);auto _n_argument_26113=_n_age_26048;auto _n_argument_26114=std::exp(((-d::number(_n_h_26049))/(d::truth((_n_born_26047>(_n_LAND_25961-_n_BURN_25963)))?4.0:9.0)));return this->_n_puff_25988(_n_argument_26110,_n_argument_26111,_n_argument_26112,_n_argument_26113,_n_argument_26114);})());
}
}}
{double _n_k_26050=0.0;
for(;d::truth((_n_k_26050<(this->_n_cols_25969*this->_n_rows_25970)));(void)((_n_k_26050++))){d::check_cancel();if(d::truth((d::at(this->_n_fog_25985,_n_k_26050)>0.06))){d::check_cancel();(void)(([&](){auto&& _n_array_26115=this->_n_grid_25984;auto _n_index_26116=_n_k_26050;auto _n_value_26117=d::at(_n_SMOKE_25953,(1.0+([&](){auto _n_argument_26118=(double(_n_SMOKE_25953.size())-2.0);auto _n_argument_26119=std::floor(((1.0-std::exp(((-d::number(d::at(this->_n_fog_25985,_n_k_26050)))/0.9)))*(double(_n_SMOKE_25953.size())-1.0)));return d::minimum({_n_argument_26118,_n_argument_26119});})()));d::put(_n_array_26115,_n_index_26116,_n_value_26117);return _n_value_26117;})());
}
}}
{double _n_r_26051=(this->_n_pad_25975-3.0);
for(;d::truth((_n_r_26051<this->_n_pad_25975));(void)((_n_r_26051++))){d::check_cancel();(void)(this->_n_put_25986(this->_n_left_25973,_n_r_26051,d::String(u"[")));
(void)(this->_n_put_25986(((this->_n_left_25973+this->_n_W_25971)-1.0),_n_r_26051,d::String(u"]")));
}}
double _n_h_26052=_n_height_25966(_n_t_26035);
if(d::truth((_n_h_26052>=0.0))){d::check_cancel();double _n_base_26053=((this->_n_pad_25975-1.0)-d::round(_n_h_26052));
d::Array<d::Array<d::String,false>,false> _n_art_26054=d::at(this->_n_sprite_25979,(d::truth(_n_paper_26034)?1.0:0.0));
{double _n_r_26055=0.0;
for(;d::truth((_n_r_26055<this->_n_HT_25972));(void)((_n_r_26055++))){d::check_cancel();{double _n_c_26056=d::at(d::at(this->_n_span_25980,_n_r_26055),0.0);
for(;d::truth((_n_c_26056<d::at(d::at(this->_n_span_25980,_n_r_26055),1.0)));(void)((_n_c_26056++))){d::check_cancel();(void)(this->_n_put_25986((this->_n_left_25973+_n_c_26056),(((_n_base_26053-this->_n_HT_25972)+1.0)+_n_r_26055),d::at(d::at(_n_art_26054,_n_r_26055),_n_c_26056)));
}}
}}
{double _n_k_26057=23.0;
for(;d::truth((_n_k_26057>=0.0));(void)((_n_k_26057--))){d::check_cancel();double _n_born_26058=((std::floor((_n_time_26033/0.1))-_n_k_26057)*0.1);
double _n_age_26059=(_n_time_26033-_n_born_26058);
if((d::truth((!d::truth(_n_onPad_25968(d::mod((d::mod(_n_born_26058,_n_LOOP_25955)+_n_LOOP_25955),_n_LOOP_25955)))))||d::truth((_n_age_26059>2.4)))){d::check_cancel();continue;
}
double _n_f_26060=(_n_age_26059/2.4);
double _n_gust_26061=(1.0+(0.3*std::sin((0.9*_n_born_26058))));
double _n_y_26062=(((((_n_base_26053-this->_n_HT_25972)+9.0)-(0.4*_n_age_26059))-((0.2*_n_age_26059)*_n_age_26059))+((1.1*std::sin((2.3*_n_born_26058)))*_n_f_26060));
(void)(this->_n_put_25986((((this->_n_left_25973+this->_n_W_25971)-4.0)+(_n_gust_26061*((3.0*_n_age_26059)+((0.6*_n_age_26059)*_n_age_26059)))),_n_y_26062,(d::truth((_n_f_26060<0.2))?d::String(u"~"):(d::truth((_n_f_26060<0.45))?d::String(u"-"):(d::truth((_n_f_26060<0.75))?d::String(u"."):d::String(u"·"))))));
}}
if(d::truth(_n_burning_25967(_n_t_26035))){d::check_cancel();double _n_len_26063=(d::truth((_n_t_26035<_n_LIFT_25958))?(1.0+(2.5*((_n_t_26035-_n_IGNITE_25957)/(_n_LIFT_25958-_n_IGNITE_25957)))):(d::truth((_n_t_26035<(_n_LAND_25961-_n_BURN_25963)))?6.0:4.5));
double _n_f_26064=std::floor((_n_time_26033*20.0));
{double _n_k_26065=1.0;
for(;d::truth((_n_k_26065<=((_n_len_26063+d::mod((_n_f_26064*7.0),3.0))-1.0)));(void)((_n_k_26065++))){d::check_cancel();double _n_heat_26066=(1.0-((_n_k_26065-1.0)/(_n_len_26063+1.0)));
double _n_half_26067=(0.4+(2.8*std::pow(_n_heat_26066,0.6)));
{double _n_c_26068=std::ceil((this->_n_mid_25974-_n_half_26067));
for(;d::truth((_n_c_26068<=std::floor((this->_n_mid_25974+_n_half_26067))));(void)((_n_c_26068++))){d::check_cancel();double _n_edge_26069=(std::fabs((_n_c_26068-this->_n_mid_25974))/(_n_half_26067+0.5));
double _n_i_26070=std::floor((((((_n_heat_26066*0.8)+0.35)-(_n_edge_26069*0.5))+(d::mod((((_n_f_26064+(_n_c_26068*3.0))+_n_k_26065)*13.0),5.0)*0.03))*double(_n_FLAME_25954.size())));
if(d::truth((_n_i_26070>=0.0))){d::check_cancel();(void)(([&](){auto _n_argument_26120=_n_c_26068;auto _n_argument_26121=(_n_base_26053+_n_k_26065);auto _n_argument_26122=d::at(_n_FLAME_25954,d::minimum({(double(_n_FLAME_25954.size())-1.0),_n_i_26070}));return this->_n_put_25986(_n_argument_26120,_n_argument_26121,_n_argument_26122);})());
}
}}
}}
}
}
d::Array<d::String,false> _n_lines_26071=d::Array<d::String,false>{};
{double _n_r_26072=0.0;
for(;d::truth((_n_r_26072<this->_n_rows_25970));(void)((_n_r_26072++))){d::check_cancel();(void)(_n_lines_26071.push(d::join(this->_n_grid_25984.slice((_n_r_26072*this->_n_cols_25969),((_n_r_26072+1.0)*this->_n_cols_25969)),d::String(u""))));
}}
return d::join(_n_lines_26071,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rocket").cols)*ascii::catalog_meta("rocket").rows);auto _env=std::make_shared<_n_Record_26073>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rocket_meta(){return catalog_meta("rocket");}
std::unique_ptr<Piece> make_rocket(const AsciiPieceOptions &o){return std::make_unique<Native_rocket>(o);}
}
