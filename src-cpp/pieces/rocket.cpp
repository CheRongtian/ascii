// Direct, statically typed C++ from src/pieces/rocket.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25950;
struct _n_Record_25984;
struct _n_Record_26074;
struct _n_Record_26078;
struct _n_Record_26093;
struct _n_Record_25950{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_25950> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25950>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_25984{
double _p_jx{};
double _p_side{};
double _p_fan{};
double _p_rise{};
double _p_life{};
double _p_grow{};
static std::shared_ptr<_n_Record_25984> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25984>();out->_p_jx=d::decode<double>(j["jx"]);out->_p_side=d::decode<double>(j["side"]);out->_p_fan=d::decode<double>(j["fan"]);out->_p_rise=d::decode<double>(j["rise"]);out->_p_life=d::decode<double>(j["life"]);out->_p_grow=d::decode<double>(j["grow"]);return out;}
};
struct _n_Record_26074{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26074> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26074>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_26078{
double _p_w{};
double _p_k{};
double _p_g{};
double _p_f{};
static std::shared_ptr<_n_Record_26078> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26078>();out->_p_w=d::decode<double>(j["w"]);out->_p_k=d::decode<double>(j["k"]);out->_p_g=d::decode<double>(j["g"]);out->_p_f=d::decode<double>(j["f"]);return out;}
};
struct _n_Record_26093{
double _p_length{};
static std::shared_ptr<_n_Record_26093> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26093>();out->_p_length=d::decode<double>(j["length"]);return out;}
};
std::function<double()> _n_mulberry32_25966(double _a0);
double _n_height_25967(double _a0);
bool _n_burning_25968(double _a0);
bool _n_onPad_25969(double _a0);
std::shared_ptr<_n_Record_25950> _n_meta_25949=[](){return ([&](){auto _n_object_26077=std::make_shared<_n_Record_25950>();_n_object_26077->_p_name=d::String(u"rocket");_n_object_26077->_p_category=d::String(u"space");_n_object_26077->_p_note=d::String(u"a rocket lifting off its pad at night, then landing back");_n_object_26077->_p_cols=48.0;_n_object_26077->_p_rows=28.0;_n_object_26077->_p_fps=20.0;return _n_object_26077;})();}();
d::Array<d::String,false> _n_ROCKET_25951=[](){return d::Array<d::String,false>{d::String(u"      /\\      "),d::String(u"     /ww\\     "),d::String(u"    /wwww\\    "),d::String(u"   /wwwwww\\   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   \\wwwwww/   "),d::String(u"    |wwww|    "),d::String(u"    |wwww|    "),d::String(u"   /kkkkkk\\   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"   |wwwwww|   "),d::String(u"  /|wwwwww|\\  "),d::String(u" /f|wwwwww|f\\ "),d::String(u"/ff|wwwwww|ff\\"),d::String(u"    \\gggg/    "),d::String(u"    /gggg\\    "),d::String(u"   /gggggg\\   ")};}();
d::Dict<d::String,double> _n_TONE_25952=[](){return ([&](){d::Dict<d::String,double> _n_dictionary_26079;_n_dictionary_26079.set(d::String(u"w"),1.0);_n_dictionary_26079.set(d::String(u"k"),0.42);_n_dictionary_26079.set(d::String(u"g"),0.62);_n_dictionary_26079.set(d::String(u"f"),0.6);return _n_dictionary_26079;})();}();
const d::String _n_BODY_25953=[](){return d::String(u" .:-=+*#%");}();
const d::String _n_SMOKE_25954=[](){return d::String(u" .:-=+*#%");}();
const d::String _n_FLAME_25955=[](){return d::String(u"░▒▓█");}();
const double _n_LOOP_25956=[](){return 18.0;}();
const double _n_ARM_25957=[](){return 0.8;}();
const double _n_IGNITE_25958=[](){return 1.5;}();
const double _n_LIFT_25959=[](){return 3.0;}();
const double _n_CLIMB_25960=[](){return 2.6;}();
const double _n_OUT_25961=[](){return 40.0;}();
const double _n_LAND_25962=[](){return 14.6;}();
const double _n_DECEL_25963=[](){return 4.4;}();
const double _n_BURN_25964=[](){return std::sqrt(((2.0*_n_OUT_25961)/_n_DECEL_25963));}();
const double _n_RATE_25965=[](){return 36.0;}();
std::function<double()> _n_mulberry32_25966(double _a0){double _n_a_25990=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_25990=double(d::i32((_n_a_25990+1831565813.0))|d::i32(0.0))));
double _n_t_25991=d::imul(double(d::i32(_n_a_25990)^d::i32(double(d::u32(_n_a_25990)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_25990)));
(void)((_n_t_25991=double(d::i32((_n_t_25991+d::imul(double(d::i32(_n_t_25991)^d::i32(double(d::u32(_n_t_25991)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_25991)))))^d::i32(_n_t_25991))));
return (double(d::u32(double(d::i32(_n_t_25991)^d::i32(double(d::u32(_n_t_25991)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_height_25967(double _a0){double _n_t_25992=_a0;
{
if((d::truth((_n_t_25992<_n_LIFT_25959))||d::truth((_n_t_25992>=_n_LAND_25962)))){d::check_cancel();return 0.0;
}
double _n_up_25993=((0.5*_n_CLIMB_25960)*std::pow((_n_t_25992-_n_LIFT_25959),2.0));
if(d::truth((_n_up_25993<_n_OUT_25961))){d::check_cancel();return _n_up_25993;
}
double _n_left_25994=(_n_LAND_25962-_n_t_25992);
return (d::truth((_n_left_25994<_n_BURN_25964))?(((0.5*_n_DECEL_25963)*_n_left_25994)*_n_left_25994):(-d::number(1.0)));

}
}

bool _n_burning_25968(double _a0){double _n_t_25995=_a0;
return ([&]()->bool{auto _n_logical_26080=([&]()->bool{auto _n_logical_26081=(_n_t_25995>=_n_IGNITE_25958);return d::truth(_n_logical_26081)?(_n_t_25995<_n_LAND_25962):_n_logical_26081;})();return d::truth(_n_logical_26080)?(_n_height_25967(_n_t_25995)>=0.0):_n_logical_26080;})();}

bool _n_onPad_25969(double _a0){double _n_t_25996=_a0;
return ([&]()->bool{auto _n_logical_26082=(_n_t_25996<(_n_ARM_25957-0.3));return d::truth(_n_logical_26082)?_n_logical_26082:(_n_t_25996>=(_n_LAND_25962+1.0));})();}

struct Native_rocket final:ascii::Piece{
double _n_cols_25970{};
double _n_rows_25971{};
double _n_W_25972{};
double _n_HT_25973{};
double _n_left_25974{};
double _n_mid_25975{};
double _n_pad_25976{};
double _n_tower_25977{};
double _n_armRow_25978{};
std::function<double()> _n_rand_25979{};
d::Array<d::Array<d::Array<d::String,false>,false>,false> _n_sprite_25980{};
d::Array<d::Array<double,false>,false> _n_span_25981{};
d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false> _n_stars_25982{};
d::Array<std::shared_ptr<_n_Record_25984>,false> _n_puffs_25983{};
d::Array<d::String,false> _n_grid_25985{};
d::Array<float,true> _n_fog_25986{};
std::function<d::String(double,std::shared_ptr<_n_Record_26074>)> _render;
void _n_put_25987(double _a0,double _a1,d::String _a2){double _n_x_26011=_a0;
double _n_y_26012=_a1;
d::String _n_ch_26013=_a2;
{
double _n_c_26014=d::round(_n_x_26011);
double _n_r_26015=d::round(_n_y_26012);
if((((d::truth((_n_c_26014>=0.0))&&d::truth((_n_c_26014<this->_n_cols_25970)))&&d::truth((_n_r_26015>=0.0)))&&d::truth((_n_r_26015<this->_n_rows_25971)))){d::check_cancel();(void)(([&](){auto&& _n_array_26124=this->_n_grid_25985;auto _n_index_26125=((_n_r_26015*this->_n_cols_25970)+_n_c_26014);auto _n_value_26126=_n_ch_26013;d::put(_n_array_26124,_n_index_26125,_n_value_26126);return _n_value_26126;})());
}

}
}

void _n_splat_25988(double _a0,double _a1,double _a2,double _a3){double _n_x_26016=_a0;
double _n_y_26017=_a1;
double _n_rad_26018=_a2;
double _n_s_26019=_a3;
{
double _n_ry_26020=(_n_rad_26018/2.0);
{double _n_r_26021=([&](){auto _n_argument_26127=0.0;auto _n_argument_26128=std::ceil((_n_y_26017-_n_ry_26020));return d::maximum({_n_argument_26127,_n_argument_26128});})();
for(;d::truth((_n_r_26021<=([&](){auto _n_argument_26129=(this->_n_rows_25971-1.0);auto _n_argument_26130=std::floor((_n_y_26017+_n_ry_26020));return d::minimum({_n_argument_26129,_n_argument_26130});})()));(void)((_n_r_26021++))){d::check_cancel();{double _n_c_26022=([&](){auto _n_argument_26131=0.0;auto _n_argument_26132=std::ceil((_n_x_26016-_n_rad_26018));return d::maximum({_n_argument_26131,_n_argument_26132});})();
for(;d::truth((_n_c_26022<=([&](){auto _n_argument_26133=(this->_n_cols_25970-1.0);auto _n_argument_26134=std::floor((_n_x_26016+_n_rad_26018));return d::minimum({_n_argument_26133,_n_argument_26134});})()));(void)((_n_c_26022++))){d::check_cancel();double _n_q_26023=(std::pow(((_n_c_26022-_n_x_26016)/_n_rad_26018),2.0)+std::pow(((_n_r_26021-_n_y_26017)/_n_ry_26020),2.0));
if(d::truth((_n_q_26023<1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_26135=this->_n_fog_25986;auto _n_index_26136=((_n_r_26021*this->_n_cols_25970)+_n_c_26022);auto _n_value_26137=(d::at(_n_array_26135,_n_index_26136)+(_n_s_26019*(1.0-_n_q_26023)));d::put(_n_array_26135,_n_index_26136,_n_value_26137);return _n_value_26137;})());
}
}}
}}

}
}

void _n_puff_25989(std::shared_ptr<_n_Record_25984> _a0,double _a1,double _a2,double _a3,double _a4){std::shared_ptr<_n_Record_25984> _n_p_26024=_a0;
double _n_x0_26025=_a1;
double _n_y0_26026=_a2;
double _n_age_26027=_a3;
double _n_thick_26028=_a4;
{
double _n_down_26029=((26.0*0.2)*(1.0-std::exp(((-d::number(_n_age_26027))/0.2))));
double _n_x_26030=(_n_x0_26025+(_n_p_26024->_p_jx*(1.0+_n_age_26027)));
double _n_y_26031=(_n_y0_26026+_n_down_26029);
if(d::truth((_n_y_26031>this->_n_pad_25976))){d::check_cancel();double _n_hit_26032=((-d::number(0.2))*std::log((1.0-((this->_n_pad_25976-_n_y0_26026)/(26.0*0.2)))));
(void)((_n_y_26031=(this->_n_pad_25976-0.2)));
(void)((_n_x_26030=((_n_x0_26025+_n_p_26024->_p_jx)+(((_n_p_26024->_p_side*_n_p_26024->_p_fan)*0.7)*(1.0-std::exp(((-d::number((_n_age_26027-_n_hit_26032)))/0.7)))))));
}
(void)((_n_y_26031=(_n_y_26031-((((_n_p_26024->_p_rise*_n_age_26027)*_n_age_26027)*0.5)+(0.3*_n_age_26027)))));
double _n_fade_26033=d::maximum({0.0,(1.0-(_n_age_26027/_n_p_26024->_p_life))});
(void)(this->_n_splat_25988((_n_x_26030+(0.8*_n_age_26027)),_n_y_26031,(1.2+((_n_p_26024->_p_grow*_n_age_26027)*2.2)),(((0.9*_n_thick_26028)*_n_fade_26033)*_n_fade_26033)));

}
}

explicit Native_rocket(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26083=_n_meta_25949;
this->_n_cols_25970=_n_binding_26083->_p_cols;
this->_n_rows_25971=_n_binding_26083->_p_rows;
this->_n_W_25972=double(d::at(_n_ROCKET_25951,0.0).size());
this->_n_HT_25973=double(_n_ROCKET_25951.size());
this->_n_left_25974=std::floor(((this->_n_cols_25970-this->_n_W_25972)/2.0));
this->_n_mid_25975=((this->_n_left_25974+(this->_n_W_25972/2.0))-0.5);
this->_n_pad_25976=(this->_n_rows_25971-2.0);
this->_n_tower_25977=(this->_n_left_25974-8.0);
this->_n_armRow_25978=((this->_n_pad_25976-this->_n_HT_25973)+8.0);
this->_n_rand_25979=_n_mulberry32_25966(3.0);
this->_n_sprite_25980=d::map(d::Array<bool,false>{false,true},[&]( bool _a0) mutable ->d::Array<d::Array<d::String,false>,false>{bool _n_paper_25997=_a0;
return d::map(_n_ROCKET_25951,[&]( d::String _a0) mutable ->d::Array<d::String,false>{d::String _n_line_25998=_a0;
{
double _n_a_25999=d::search(_n_line_25998,d::Regex(u"[wkg]",u""));
double _n_b_26000=(d::lastIndexOf(_n_line_25998,d::at(_n_line_25998,_n_a_25999))+1.0);
return d::map(([&](){d::Array<d::String,false> _n_array_26084;for(const auto &_v:_n_line_25998)_n_array_26084.push(_v);return _n_array_26084;})(),[&]( d::String _a0,double _a1) mutable ->d::String{d::String _n_ch_26001=_a0;
double _n_c_26002=_a1;
{
if(d::truth((!d::truth(_n_TONE_25952.get(_n_ch_26001))))){d::check_cancel();return _n_ch_26001;
}
double _n_x_26003=(((_n_c_26002+0.5)-(this->_n_W_25972/2.0))/(((_n_b_26000-_n_a_25999)/2.0)+0.5));
double _n_lit_26004=(d::truth((_n_ch_26001==d::String(u"f")))?(d::truth((_n_x_26003<0.0))?0.75:0.3):([&](){auto _n_argument_26085=0.0;auto _n_argument_26086=(((-d::number(0.72))*_n_x_26003)+(0.69*std::sqrt(d::maximum({0.0,(1.0-(_n_x_26003*_n_x_26003))}))));return d::maximum({_n_argument_26085,_n_argument_26086});})());
double _n_i_26005=([&](){auto _n_argument_26087=1.0;auto _n_argument_26088=d::round(((_n_TONE_25952.get(_n_ch_26001)*(0.12+(0.88*_n_lit_26004)))*(double(_n_BODY_25953.size())-1.0)));return d::maximum({_n_argument_26087,_n_argument_26088});})();
return d::at(_n_BODY_25953,(d::truth(_n_paper_25997)?(double(_n_BODY_25953.size())-_n_i_26005):_n_i_26005));

}
});

}
});});
this->_n_span_25981=d::map(_n_ROCKET_25951,[&]( d::String _a0) mutable ->d::Array<double,false>{d::String _n_s_26006=_a0;
return d::Array<double,false>{d::search(_n_s_26006,d::Regex(u"\\S",u"")),double(d::trim(_n_s_26006,false,true).size())};});
this->_n_stars_25982=d::Array<std::shared_ptr<std::tuple<double,double,double,bool>>,false>{};
{double _n_r_26007=0.0;
for(;d::truth((_n_r_26007<(this->_n_pad_25976-9.0)));(void)((_n_r_26007++))){d::check_cancel();{double _n_c_26008=0.0;
for(;d::truth((_n_c_26008<this->_n_cols_25970));(void)((_n_c_26008++))){d::check_cancel();bool _n_byRocket_26009=([&]()->bool{auto _n_logical_26089=([&]()->bool{auto _n_logical_26090=(_n_c_26008>=(this->_n_left_25974-2.0));return d::truth(_n_logical_26090)?(_n_c_26008<=(((this->_n_left_25974+this->_n_W_25972)+1.0)+(d::truth((std::fabs((_n_r_26007-this->_n_armRow_25978))<4.0))?12.0:0.0))):_n_logical_26090;})();return d::truth(_n_logical_26089)?(_n_r_26007>=((this->_n_pad_25976-this->_n_HT_25973)-2.0)):_n_logical_26089;})();
bool _n_byTower_26010=([&]()->bool{auto _n_logical_26091=(std::fabs(((_n_c_26008-this->_n_tower_25977)-1.0))<4.0);return d::truth(_n_logical_26091)?(_n_r_26007>=(this->_n_pad_25976-24.0)):_n_logical_26091;})();
if(((d::truth((this->_n_rand_25979()<0.026))&&d::truth((!d::truth(_n_byRocket_26009))))&&d::truth((!d::truth(_n_byTower_26010))))){d::check_cancel();(void)(this->_n_stars_25982.push(std::make_shared<std::tuple<double,double,double,bool>>(_n_c_26008,_n_r_26007,(this->_n_rand_25979()*6.283),(this->_n_rand_25979()<0.2))));
}
}}
}}
this->_n_puffs_25983=([&](){auto _n_argument_26092=([&](){auto _n_object_26094=std::make_shared<_n_Record_26093>();_n_object_26094->_p_length=std::ceil((_n_LOOP_25956*_n_RATE_25965));return _n_object_26094;})();auto _n_argument_26096=[=]( ) mutable ->std::shared_ptr<_n_Record_25984>{return ([&](){auto _n_object_26099=std::make_shared<_n_Record_25984>();_n_object_26099->_p_jx=((this->_n_rand_25979()-0.5)*2.4);_n_object_26099->_p_side=(d::truth((this->_n_rand_25979()<0.5))?(-d::number(1.0)):1.0);_n_object_26099->_p_fan=(14.0+(this->_n_rand_25979()*12.0));_n_object_26099->_p_rise=(0.5+(this->_n_rand_25979()*0.9));_n_object_26099->_p_life=(2.2+(this->_n_rand_25979()*1.4));_n_object_26099->_p_grow=(0.6+(this->_n_rand_25979()*0.6));return _n_object_26099;})();};return d::Array<std::shared_ptr<_n_Record_25984>,false>(d::from(std::ceil((_n_LOOP_25956*_n_RATE_25965)),_n_argument_26096));})();
this->_n_grid_25985=d::Array<d::String,false>(size_t((this->_n_cols_25970*this->_n_rows_25971)));
this->_n_fog_25986=d::Array<float,true>(size_t((this->_n_cols_25970*this->_n_rows_25971)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_26074> _a1) mutable ->d::String{double _n_time_26034=_a0;
auto _n_binding_26102=(d::present(_a1)?_a1:([&](){auto _n_object_26101=std::make_shared<_n_Record_26074>();return _n_object_26101;})());
bool _n_paper_26035=(d::present(_n_binding_26102->_p_paper)?d::read(_n_binding_26102->_p_paper):false);
{
double _n_t_26036=d::mod((d::mod(_n_time_26034,_n_LOOP_25956)+_n_LOOP_25956),_n_LOOP_25956);
(void)(this->_n_grid_25985.fill(d::String(u" ")));
(void)(this->_n_fog_25986.fill(0.0));
for(auto &&_n_item_26103:this->_n_stars_25982){d::check_cancel();auto _n_binding_26104=_n_item_26103;
double _n_c_26037=std::get<0>(*_n_binding_26104);
double _n_r_26038=std::get<1>(*_n_binding_26104);
double _n_ph_26039=std::get<2>(*_n_binding_26104);
bool _n_big_26040=std::get<3>(*_n_binding_26104);
{
double _n_tw_26041=std::sin(((_n_time_26034*1.7)+_n_ph_26039));
(void)(this->_n_put_25987(_n_c_26037,_n_r_26038,(d::truth(_n_big_26040)?(d::truth((_n_tw_26041>0.3))?d::String(u"+"):d::String(u"*")):(d::truth((_n_tw_26041>(-d::number(0.6))))?d::String(u"."):d::String(u" ")))));

}
}
{double _n_r_26042=(this->_n_pad_25976-20.0);
for(;d::truth((_n_r_26042<=this->_n_pad_25976));(void)((_n_r_26042++))){d::check_cancel();(void)(this->_n_put_25987(this->_n_tower_25977,_n_r_26042,d::String(u"|")));
(void)(this->_n_put_25987((this->_n_tower_25977+2.0),_n_r_26042,d::String(u"|")));
(void)(this->_n_put_25987((this->_n_tower_25977+1.0),_n_r_26042,(d::truth(d::mod(_n_r_26042,2.0))?d::String(u"/"):d::String(u"\\"))));
}}
(void)(this->_n_put_25987((this->_n_tower_25977+1.0),(this->_n_pad_25976-21.0),d::String(u"|")));
(void)(([&](){auto _n_argument_26105=(this->_n_tower_25977+1.0);auto _n_argument_26106=(this->_n_pad_25976-22.0);auto _n_argument_26107=(d::truth(d::mod(std::floor((_n_time_26034*1.25)),2.0))?d::String(u"*"):d::String(u"."));return this->_n_put_25987(_n_argument_26105,_n_argument_26106,_n_argument_26107);})());
double _n_swing_26043=(d::truth((_n_t_26036<_n_ARM_25957))?1.0:(d::truth((_n_t_26036<_n_IGNITE_25958))?(1.0-((_n_t_26036-_n_ARM_25957)/(_n_IGNITE_25958-_n_ARM_25957))):(d::truth((_n_t_26036<(_n_LAND_25962+1.0)))?0.0:d::minimum({1.0,(((_n_t_26036-_n_LAND_25962)-1.0)/0.6)}))));
{double _n_i_26044=0.0;
for(;d::truth((_n_i_26044<d::round((_n_swing_26043*((this->_n_left_25974+1.0)-this->_n_tower_25977)))));(void)((_n_i_26044++))){d::check_cancel();(void)(this->_n_put_25987(((this->_n_tower_25977+3.0)+_n_i_26044),this->_n_armRow_25978,d::String(u"=")));
}}
{double _n_c_26045=0.0;
for(;d::truth((_n_c_26045<this->_n_cols_25970));(void)((_n_c_26045++))){d::check_cancel();(void)(this->_n_put_25987(_n_c_26045,(this->_n_rows_25971-1.0),d::String(u"▀")));
}}
{double _n_c_26046=2.0;
for(;d::truth((_n_c_26046<(this->_n_cols_25970-2.0)));(void)((_n_c_26046++))){d::check_cancel();(void)(([&](){auto _n_argument_26108=_n_c_26046;auto _n_argument_26109=this->_n_pad_25976;auto _n_argument_26110=(d::truth((std::fabs((_n_c_26046-this->_n_mid_25975))<4.0))?d::String(u" "):d::String(u"_"));return this->_n_put_25987(_n_argument_26108,_n_argument_26109,_n_argument_26110);})());
}}
{double _n_k_26047=0.0;
for(;d::truth((_n_k_26047<double(this->_n_puffs_25983.size())));(void)((_n_k_26047++))){d::check_cancel();double _n_born_26048=(_n_k_26047/_n_RATE_25965);
double _n_age_26049=(_n_t_26036-_n_born_26048);
if(((d::truth((_n_age_26049<0.0))||d::truth((_n_age_26049>d::at(this->_n_puffs_25983,_n_k_26047)->_p_life)))||d::truth((!d::truth(_n_burning_25968(_n_born_26048)))))){d::check_cancel();continue;
}
double _n_h_26050=_n_height_25967(_n_born_26048);
if(d::truth((((this->_n_pad_25976-1.0)-_n_h_26050)>=(-d::number(2.0))))){d::check_cancel();(void)(([&](){auto _n_argument_26111=d::at(this->_n_puffs_25983,_n_k_26047);auto _n_argument_26112=this->_n_mid_25975;auto _n_argument_26113=((this->_n_pad_25976-0.5)-_n_h_26050);auto _n_argument_26114=_n_age_26049;auto _n_argument_26115=std::exp(((-d::number(_n_h_26050))/(d::truth((_n_born_26048>(_n_LAND_25962-_n_BURN_25964)))?4.0:9.0)));return this->_n_puff_25989(_n_argument_26111,_n_argument_26112,_n_argument_26113,_n_argument_26114,_n_argument_26115);})());
}
}}
{double _n_k_26051=0.0;
for(;d::truth((_n_k_26051<(this->_n_cols_25970*this->_n_rows_25971)));(void)((_n_k_26051++))){d::check_cancel();if(d::truth((d::at(this->_n_fog_25986,_n_k_26051)>0.06))){d::check_cancel();(void)(([&](){auto&& _n_array_26116=this->_n_grid_25985;auto _n_index_26117=_n_k_26051;auto _n_value_26118=d::at(_n_SMOKE_25954,(1.0+([&](){auto _n_argument_26119=(double(_n_SMOKE_25954.size())-2.0);auto _n_argument_26120=std::floor(((1.0-std::exp(((-d::number(d::at(this->_n_fog_25986,_n_k_26051)))/0.9)))*(double(_n_SMOKE_25954.size())-1.0)));return d::minimum({_n_argument_26119,_n_argument_26120});})()));d::put(_n_array_26116,_n_index_26117,_n_value_26118);return _n_value_26118;})());
}
}}
{double _n_r_26052=(this->_n_pad_25976-3.0);
for(;d::truth((_n_r_26052<this->_n_pad_25976));(void)((_n_r_26052++))){d::check_cancel();(void)(this->_n_put_25987(this->_n_left_25974,_n_r_26052,d::String(u"[")));
(void)(this->_n_put_25987(((this->_n_left_25974+this->_n_W_25972)-1.0),_n_r_26052,d::String(u"]")));
}}
double _n_h_26053=_n_height_25967(_n_t_26036);
if(d::truth((_n_h_26053>=0.0))){d::check_cancel();double _n_base_26054=((this->_n_pad_25976-1.0)-d::round(_n_h_26053));
d::Array<d::Array<d::String,false>,false> _n_art_26055=d::at(this->_n_sprite_25980,(d::truth(_n_paper_26035)?1.0:0.0));
{double _n_r_26056=0.0;
for(;d::truth((_n_r_26056<this->_n_HT_25973));(void)((_n_r_26056++))){d::check_cancel();{double _n_c_26057=d::at(d::at(this->_n_span_25981,_n_r_26056),0.0);
for(;d::truth((_n_c_26057<d::at(d::at(this->_n_span_25981,_n_r_26056),1.0)));(void)((_n_c_26057++))){d::check_cancel();(void)(this->_n_put_25987((this->_n_left_25974+_n_c_26057),(((_n_base_26054-this->_n_HT_25973)+1.0)+_n_r_26056),d::at(d::at(_n_art_26055,_n_r_26056),_n_c_26057)));
}}
}}
{double _n_k_26058=23.0;
for(;d::truth((_n_k_26058>=0.0));(void)((_n_k_26058--))){d::check_cancel();double _n_born_26059=((std::floor((_n_time_26034/0.1))-_n_k_26058)*0.1);
double _n_age_26060=(_n_time_26034-_n_born_26059);
if((d::truth((!d::truth(_n_onPad_25969(d::mod((d::mod(_n_born_26059,_n_LOOP_25956)+_n_LOOP_25956),_n_LOOP_25956)))))||d::truth((_n_age_26060>2.4)))){d::check_cancel();continue;
}
double _n_f_26061=(_n_age_26060/2.4);
double _n_gust_26062=(1.0+(0.3*std::sin((0.9*_n_born_26059))));
double _n_y_26063=(((((_n_base_26054-this->_n_HT_25973)+9.0)-(0.4*_n_age_26060))-((0.2*_n_age_26060)*_n_age_26060))+((1.1*std::sin((2.3*_n_born_26059)))*_n_f_26061));
(void)(this->_n_put_25987((((this->_n_left_25974+this->_n_W_25972)-4.0)+(_n_gust_26062*((3.0*_n_age_26060)+((0.6*_n_age_26060)*_n_age_26060)))),_n_y_26063,(d::truth((_n_f_26061<0.2))?d::String(u"~"):(d::truth((_n_f_26061<0.45))?d::String(u"-"):(d::truth((_n_f_26061<0.75))?d::String(u"."):d::String(u"·"))))));
}}
if(d::truth(_n_burning_25968(_n_t_26036))){d::check_cancel();double _n_len_26064=(d::truth((_n_t_26036<_n_LIFT_25959))?(1.0+(2.5*((_n_t_26036-_n_IGNITE_25958)/(_n_LIFT_25959-_n_IGNITE_25958)))):(d::truth((_n_t_26036<(_n_LAND_25962-_n_BURN_25964)))?6.0:4.5));
double _n_f_26065=std::floor((_n_time_26034*20.0));
{double _n_k_26066=1.0;
for(;d::truth((_n_k_26066<=((_n_len_26064+d::mod((_n_f_26065*7.0),3.0))-1.0)));(void)((_n_k_26066++))){d::check_cancel();double _n_heat_26067=(1.0-((_n_k_26066-1.0)/(_n_len_26064+1.0)));
double _n_half_26068=(0.4+(2.8*std::pow(_n_heat_26067,0.6)));
{double _n_c_26069=std::ceil((this->_n_mid_25975-_n_half_26068));
for(;d::truth((_n_c_26069<=std::floor((this->_n_mid_25975+_n_half_26068))));(void)((_n_c_26069++))){d::check_cancel();double _n_edge_26070=(std::fabs((_n_c_26069-this->_n_mid_25975))/(_n_half_26068+0.5));
double _n_i_26071=std::floor((((((_n_heat_26067*0.8)+0.35)-(_n_edge_26070*0.5))+(d::mod((((_n_f_26065+(_n_c_26069*3.0))+_n_k_26066)*13.0),5.0)*0.03))*double(_n_FLAME_25955.size())));
if(d::truth((_n_i_26071>=0.0))){d::check_cancel();(void)(([&](){auto _n_argument_26121=_n_c_26069;auto _n_argument_26122=(_n_base_26054+_n_k_26066);auto _n_argument_26123=d::at(_n_FLAME_25955,d::minimum({(double(_n_FLAME_25955.size())-1.0),_n_i_26071}));return this->_n_put_25987(_n_argument_26121,_n_argument_26122,_n_argument_26123);})());
}
}}
}}
}
}
d::Array<d::String,false> _n_lines_26072=d::Array<d::String,false>{};
{double _n_r_26073=0.0;
for(;d::truth((_n_r_26073<this->_n_rows_25971));(void)((_n_r_26073++))){d::check_cancel();(void)(_n_lines_26072.push(d::join(this->_n_grid_25985.slice((_n_r_26073*this->_n_cols_25970),((_n_r_26073+1.0)*this->_n_cols_25970)),d::String(u""))));
}}
return d::join(_n_lines_26072,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rocket").cols)*ascii::catalog_meta("rocket").rows);auto _env=std::make_shared<_n_Record_26074>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rocket_meta(){return catalog_meta("rocket");}
std::unique_ptr<Piece> make_rocket(const AsciiPieceOptions &o){return std::make_unique<Native_rocket>(o);}
}
