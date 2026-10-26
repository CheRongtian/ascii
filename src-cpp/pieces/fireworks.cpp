// Direct, statically typed C++ from src/pieces/fireworks.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_10322;
struct _n_Record_10331;
struct _n_Record_10332;
struct _n_Record_10360;
struct _n_Record_10461;
struct _n_Record_10465;
struct _n_Record_10476;
struct _n_Record_10488;
struct _n_Record_10490;
struct _n_Record_10492;
struct _n_Record_10322{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_10322> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10322>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_10331{
d::String _p_kind{};
double _p_at{};
double _p_x0{};
double _p_drift{};
double _p_rise{};
double _p_top{};
d::Array<std::shared_ptr<_n_Record_10332>,false> _p_sparks{};
static std::shared_ptr<_n_Record_10331> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10331>();out->_p_kind=d::decode<d::String>(j["kind"]);out->_p_at=d::decode<double>(j["at"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_drift=d::decode<double>(j["drift"]);out->_p_rise=d::decode<double>(j["rise"]);out->_p_top=d::decode<double>(j["top"]);out->_p_sparks=d::decode<d::Array<std::shared_ptr<_n_Record_10332>,false>>(j["sparks"]);return out;}
};
struct _n_Record_10332{
double _p_vx{};
double _p_vy{};
double _p_k{};
double _p_life{};
double _p_seed{};
d::String _p_look{};
std::optional<bool> _p_inner{};
static std::shared_ptr<_n_Record_10332> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10332>();out->_p_vx=d::decode<double>(j["vx"]);out->_p_vy=d::decode<double>(j["vy"]);out->_p_k=d::decode<double>(j["k"]);out->_p_life=d::decode<double>(j["life"]);out->_p_seed=d::decode<double>(j["seed"]);out->_p_look=d::decode<d::String>(j["look"]);out->_p_inner=d::decode<std::optional<bool>>(j["inner"]);return out;}
};
struct _n_Record_10360{
std::optional<double> _p_vx{};
std::optional<double> _p_vy{};
std::optional<double> _p_k{};
std::optional<double> _p_life{};
std::optional<double> _p_seed{};
d::String _p_look{};
std::optional<bool> _p_inner{};
static std::shared_ptr<_n_Record_10360> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10360>();out->_p_vx=d::decode<std::optional<double>>(j["vx"]);out->_p_vy=d::decode<std::optional<double>>(j["vy"]);out->_p_k=d::decode<std::optional<double>>(j["k"]);out->_p_life=d::decode<std::optional<double>>(j["life"]);out->_p_seed=d::decode<std::optional<double>>(j["seed"]);out->_p_look=d::decode<d::String>(j["look"]);out->_p_inner=d::decode<std::optional<bool>>(j["inner"]);return out;}
};
struct _n_Record_10461{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_10461> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10461>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_10465{
d::String _p_kind{};
double _p_at{};
double _p_x0{};
double _p_drift{};
double _p_rise{};
double _p_top{};
d::Array<d::Nil,false> _p_sparks{};
static std::shared_ptr<_n_Record_10465> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10465>();out->_p_kind=d::decode<d::String>(j["kind"]);out->_p_at=d::decode<double>(j["at"]);out->_p_x0=d::decode<double>(j["x0"]);out->_p_drift=d::decode<double>(j["drift"]);out->_p_rise=d::decode<double>(j["rise"]);out->_p_top=d::decode<double>(j["top"]);out->_p_sparks=d::decode<d::Array<d::Nil,false>>(j["sparks"]);return out;}
};
struct _n_Record_10476{
std::optional<double> _p_vx{};
std::optional<double> _p_vy{};
std::optional<double> _p_k{};
std::optional<double> _p_life{};
std::optional<double> _p_seed{};
d::String _p_look{};
bool _p_inner{};
static std::shared_ptr<_n_Record_10476> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10476>();out->_p_vx=d::decode<std::optional<double>>(j["vx"]);out->_p_vy=d::decode<std::optional<double>>(j["vy"]);out->_p_k=d::decode<std::optional<double>>(j["k"]);out->_p_life=d::decode<std::optional<double>>(j["life"]);out->_p_seed=d::decode<std::optional<double>>(j["seed"]);out->_p_look=d::decode<d::String>(j["look"]);out->_p_inner=d::decode<bool>(j["inner"]);return out;}
};
struct _n_Record_10488{
d::String _p_look{};
static std::shared_ptr<_n_Record_10488> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10488>();out->_p_look=d::decode<d::String>(j["look"]);return out;}
};
struct _n_Record_10490{
d::String _p_look{};
double _p_k{};
double _p_life{};
static std::shared_ptr<_n_Record_10490> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10490>();out->_p_look=d::decode<d::String>(j["look"]);out->_p_k=d::decode<double>(j["k"]);out->_p_life=d::decode<double>(j["life"]);return out;}
};
struct _n_Record_10492{
d::String _p_look{};
double _p_life{};
static std::shared_ptr<_n_Record_10492> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_10492>();out->_p_look=d::decode<d::String>(j["look"]);out->_p_life=d::decode<double>(j["life"]);return out;}
};
std::function<double()> _n_mulberry32_10328(double _a0);
d::String _n_streak_10329(double _a0,double _a1);
std::shared_ptr<_n_Record_10331> _n_shell_10330(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_10322> _n_meta_10321=[](){return ([&](){auto _n_object_10464=std::make_shared<_n_Record_10322>();_n_object_10464->_p_name=d::String(u"fireworks");_n_object_10464->_p_category=d::String(u"effects");_n_object_10464->_p_note=d::String(u"shells climb and burst as peonies, rings, willows and palms");_n_object_10464->_p_cols=64.0;_n_object_10464->_p_rows=24.0;_n_object_10464->_p_fps=30.0;return _n_object_10464;})();}();
const double _n_G_10323=[](){return 13.0;}();
const double _n_EVERY_10324=[](){return 1.25;}();
d::Array<d::String,false> _n_KINDS_10325=[](){return d::Array<d::String,false>{d::String(u"peony"),d::String(u"willow"),d::String(u"ring"),d::String(u"palm"),d::String(u"saturn"),d::String(u"peony"),d::String(u"willow"),d::String(u"ring"),d::String(u"palm")};}();
d::Array<double,false> _n_SPOTS_10326=[](){return d::Array<double,false>{0.3,0.68,0.45,0.25,0.62,0.36,0.72};}();
const double _n_OPEN_10327=[](){return 0.55;}();
std::function<double()> _n_mulberry32_10328(double _a0){double _n_seed_10345=_a0;
{
double _n_s_10346=double(d::i32(_n_seed_10345)|d::i32(0.0));
return [=]( ) mutable ->double{{
(void)((_n_s_10346=double(d::i32((_n_s_10346+1831565813.0))|d::i32(0.0))));
double _n_t_10347=d::imul(double(d::i32(_n_s_10346)^d::i32(double(d::u32(_n_s_10346)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_s_10346)));
(void)((_n_t_10347=double(d::i32((_n_t_10347+d::imul(double(d::i32(_n_t_10347)^d::i32(double(d::u32(_n_t_10347)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_10347)))))^d::i32(_n_t_10347))));
return (double(d::u32(double(d::i32(_n_t_10347)^d::i32(double(d::u32(_n_t_10347)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

d::String _n_streak_10329(double _a0,double _a1){double _n_dx_10348=_a0;
double _n_dy_10349=_a1;
{
double _n_a_10350=std::atan2(_n_dy_10349,_n_dx_10348);
if(d::truth((_n_a_10350<0.0))){d::check_cancel();(void)((_n_a_10350=(_n_a_10350+ascii::PI)));
}
return ((d::truth((_n_a_10350<0.42))||d::truth((_n_a_10350>2.72)))?d::String(u"-"):(d::truth((_n_a_10350<1.2))?d::String(u"/"):(d::truth((_n_a_10350<1.94))?d::String(u"|"):d::String(u"\\"))));

}
}

std::shared_ptr<_n_Record_10331> _n_shell_10330(double _a0,double _a1,double _a2){double _n_i_10351=_a0;
double _n_cols_10352=_a1;
double _n_H_10353=_a2;
{
std::function<double()> _n_r_10354=_n_mulberry32_10328(((_n_i_10351*7919.0)+17.0));
auto _n_pick_10355=[=](auto _a0)mutable{auto _n_list_10357=_a0;return d::at(_n_list_10357,d::mod((d::mod(_n_i_10351,double(_n_list_10357.size()))+double(_n_list_10357.size())),double(_n_list_10357.size())));};
std::shared_ptr<_n_Record_10331> _n_s_10358=([&](){auto _n_object_10466=std::make_shared<_n_Record_10331>();_n_object_10466->_p_kind=_n_pick_10355(_n_KINDS_10325);_n_object_10466->_p_at=((_n_i_10351*_n_EVERY_10324)+(_n_r_10354()*0.25));_n_object_10466->_p_x0=(_n_cols_10352*([&](){auto _n_left_10467=_n_pick_10355(_n_SPOTS_10326);auto _n_right_10468=((_n_r_10354()-0.5)*0.05);return (_n_left_10467+_n_right_10468);})());_n_object_10466->_p_drift=((_n_r_10354()-0.5)*2.0);_n_object_10466->_p_rise=(1.0+(_n_r_10354()*0.2));_n_object_10466->_p_top=(_n_H_10353*(0.62+(_n_r_10354()*0.08)));_n_object_10466->_p_sparks=d::Array<std::shared_ptr<_n_Record_10332>,false>{};return _n_object_10466;})();
auto _n_add_10359=[&]( double _a0,double _a1,std::shared_ptr<_n_Record_10360> _a2) mutable ->double{double _n_vx_10361=_a0;
double _n_vy_10362=_a1;
std::shared_ptr<_n_Record_10360> _n_o_10363=_a2;
return _n_s_10358->_p_sparks.push(([&](){auto _n_object_10470=std::make_shared<_n_Record_10332>();_n_object_10470->_p_vx=_n_vx_10361;_n_object_10470->_p_vy=_n_vy_10362;_n_object_10470->_p_k=2.2;_n_object_10470->_p_life=1.7;_n_object_10470->_p_seed=double(d::i32((_n_r_10354()*1000000000.0))|d::i32(0.0));auto _n_spread_10471=_n_o_10363;_n_object_10470->_p_vx=d::read(_n_spread_10471->_p_vx);_n_object_10470->_p_vy=d::read(_n_spread_10471->_p_vy);_n_object_10470->_p_k=d::read(_n_spread_10471->_p_k);_n_object_10470->_p_life=d::read(_n_spread_10471->_p_life);_n_object_10470->_p_seed=d::read(_n_spread_10471->_p_seed);_n_object_10470->_p_look=_n_spread_10471->_p_look;_n_object_10470->_p_inner=_n_spread_10471->_p_inner;return _n_object_10470;})());};
auto _n_sphere_10364=[&]( double _a0,double _a1,std::shared_ptr<_n_Record_10360> _a2,std::optional<bool> _a3) mutable ->void{double _n_count_10365=_a0;
double _n_speed_10366=_a1;
std::shared_ptr<_n_Record_10360> _n_o_10367=_a2;
bool _n_deep_10368=(d::present(_a3)?d::read(_a3):true);
{
double _n_turn_10369=(_n_r_10354()*6.283);
{double _n_j_10370=0.0;
for(;d::truth((_n_j_10370<_n_count_10365));(void)((_n_j_10370++))){d::check_cancel();double _n_a_10371=(_n_turn_10369+(((_n_j_10370+0.5)/_n_count_10365)*6.283));
bool _n_inner_10372=([&]()->bool{auto _n_logical_10472=_n_deep_10368;return d::truth(_n_logical_10472)?(d::mod(_n_j_10370,3.0)==1.0):_n_logical_10472;})();
double _n_reach_10373=(d::truth(_n_inner_10372)?(0.5+(0.25*(d::mod((_n_j_10370*7.0),5.0)/4.0))):(0.94+(_n_r_10354()*0.06)));
(void)(([&](){auto _n_argument_10473=((std::cos(_n_a_10371)*_n_speed_10366)*_n_reach_10373);auto _n_argument_10474=((std::sin(_n_a_10371)*_n_speed_10366)*_n_reach_10373);auto _n_argument_10475=([&](){auto _n_object_10477=std::make_shared<_n_Record_10476>();_n_object_10477->_p_inner=_n_inner_10372;auto _n_spread_10478=_n_o_10367;_n_object_10477->_p_vx=_n_spread_10478->_p_vx;_n_object_10477->_p_vy=_n_spread_10478->_p_vy;_n_object_10477->_p_k=_n_spread_10478->_p_k;_n_object_10477->_p_life=_n_spread_10478->_p_life;_n_object_10477->_p_seed=_n_spread_10478->_p_seed;_n_object_10477->_p_look=_n_spread_10478->_p_look;_n_object_10477->_p_inner=d::read(_n_spread_10478->_p_inner);return _n_object_10477;})();return _n_add_10359(_n_argument_10473,_n_argument_10474,([&](){auto _n_record_10479=_n_argument_10475;auto _n_record_10480=std::make_shared<_n_Record_10360>();_n_record_10480->_p_vx=_n_record_10479->_p_vx;_n_record_10480->_p_vy=_n_record_10479->_p_vy;_n_record_10480->_p_k=_n_record_10479->_p_k;_n_record_10480->_p_life=_n_record_10479->_p_life;_n_record_10480->_p_seed=_n_record_10479->_p_seed;_n_record_10480->_p_look=_n_record_10479->_p_look;_n_record_10480->_p_inner=std::optional<bool>(_n_record_10479->_p_inner);return _n_record_10480;})());})());
}}

}
};
auto _n_ring_10374=[&]( double _a0,double _a1,std::shared_ptr<_n_Record_10360> _a2,double _a3) mutable ->void{double _n_count_10375=_a0;
double _n_speed_10376=_a1;
std::shared_ptr<_n_Record_10360> _n_o_10377=_a2;
double _n_open_10378=_a3;
{
double _n_tilt_10379=(_n_open_10378+(_n_r_10354()*0.15));
double _n_roll_10380=((_n_r_10354()-0.5)*0.5);
{double _n_j_10381=0.0;
for(;d::truth((_n_j_10381<_n_count_10375));(void)((_n_j_10381++))){d::check_cancel();double _n_a_10382=((_n_j_10381/_n_count_10375)*6.283);
double _n_x_10383=std::cos(_n_a_10382);
double _n_y_10384=(std::sin(_n_a_10382)*_n_tilt_10379);
(void)(([&](){auto _n_argument_10481=(([&](){auto _n_left_10482=(_n_x_10383*std::cos(_n_roll_10380));auto _n_right_10483=(_n_y_10384*std::sin(_n_roll_10380));return (_n_left_10482-_n_right_10483);})()*_n_speed_10376);auto _n_argument_10484=(([&](){auto _n_left_10485=(_n_x_10383*std::sin(_n_roll_10380));auto _n_right_10486=(_n_y_10384*std::cos(_n_roll_10380));return (_n_left_10485+_n_right_10486);})()*_n_speed_10376);auto _n_argument_10487=_n_o_10377;return _n_add_10359(_n_argument_10481,_n_argument_10484,_n_argument_10487);})());
}}

}
};
if(d::truth((_n_s_10358->_p_kind==d::String(u"peony")))){d::check_cancel();(void)(_n_sphere_10364(27.0,33.0,([&](){auto _n_object_10489=std::make_shared<_n_Record_10360>();_n_object_10489->_p_look=d::String(u"peony");return _n_object_10489;})(),std::optional<bool>{}));
}else {d::check_cancel();if(d::truth((_n_s_10358->_p_kind==d::String(u"willow")))){d::check_cancel();(void)(_n_sphere_10364(15.0,30.0,([&](){auto _n_object_10491=std::make_shared<_n_Record_10360>();_n_object_10491->_p_look=d::String(u"willow");_n_object_10491->_p_k=std::optional<double>(2.1);_n_object_10491->_p_life=std::optional<double>(3.4);return _n_object_10491;})(),std::optional<bool>(false)));
}else {d::check_cancel();if(d::truth((_n_s_10358->_p_kind==d::String(u"ring")))){d::check_cancel();(void)(_n_ring_10374(24.0,28.0,([&](){auto _n_object_10493=std::make_shared<_n_Record_10360>();_n_object_10493->_p_look=d::String(u"ring");_n_object_10493->_p_life=std::optional<double>(1.5);return _n_object_10493;})(),0.3));
}else {d::check_cancel();if(d::truth((_n_s_10358->_p_kind==d::String(u"saturn")))){d::check_cancel();(void)((_n_ring_10374(24.0,30.0,([&](){auto _n_object_10495=std::make_shared<_n_Record_10360>();_n_object_10495->_p_look=d::String(u"ring");_n_object_10495->_p_life=std::optional<double>(1.5);return _n_object_10495;})(),0.5),_n_sphere_10364(9.0,10.0,([&](){auto _n_object_10497=std::make_shared<_n_Record_10360>();_n_object_10497->_p_look=d::String(u"core");_n_object_10497->_p_life=std::optional<double>(1.1);return _n_object_10497;})(),std::optional<bool>{})));
}else {d::check_cancel();{double _n_j_10385=0.0;
for(;d::truth((_n_j_10385<7.0));(void)((_n_j_10385++))){d::check_cancel();double _n_a_10386=(((ascii::PI/2.0)+(((_n_j_10385-3.0)/3.0)*1.15))+((_n_r_10354()-0.5)*0.08));
(void)(([&](){auto _n_argument_10498=(std::cos(_n_a_10386)*36.0);auto _n_argument_10499=(std::sin(_n_a_10386)*36.0);auto _n_argument_10500=([&](){auto _n_object_10502=std::make_shared<_n_Record_10490>();_n_object_10502->_p_look=d::String(u"palm");_n_object_10502->_p_k=2.2;_n_object_10502->_p_life=1.9;return _n_object_10502;})();return _n_add_10359(_n_argument_10498,_n_argument_10499,([&](){auto _n_record_10503=_n_argument_10500;auto _n_record_10504=std::make_shared<_n_Record_10360>();_n_record_10504->_p_k=std::optional<double>(_n_record_10503->_p_k);_n_record_10504->_p_life=std::optional<double>(_n_record_10503->_p_life);_n_record_10504->_p_look=_n_record_10503->_p_look;return _n_record_10504;})());})());
}}
}
}
}
}
return _n_s_10358;

}
}

struct Native_fireworks final:ascii::Piece{
double _n_cols_10333{};
double _n_rows_10334{};
double _n_H_10335{};
d::Array<d::String,false> _n_grid_10336{};
d::Map<double,std::shared_ptr<_n_Record_10331>> _n_cache_10337{};
double _n_lead_10344{};
std::function<d::String(double,std::shared_ptr<_n_Record_10461>)> _render;
std::shared_ptr<_n_Record_10331> _n_get_10338(double _a0){double _n_i_10387=_a0;
{
if(d::truth((!d::truth(this->_n_cache_10337.has(_n_i_10387))))){d::check_cancel();(void)(([&](){auto _n_argument_10540=_n_i_10387;auto _n_argument_10541=_n_shell_10330(_n_i_10387,this->_n_cols_10333,this->_n_H_10335);return this->_n_cache_10337.set(_n_argument_10540,_n_argument_10541);})());
}
return d::read(this->_n_cache_10337.get(_n_i_10387));

}
}

double _n_cell_10339(double _a0,double _a1){double _n_x_10388=_a0;
double _n_y_10389=_a1;
{
double _n_c_10390=std::floor(_n_x_10388);
double _n_r_10391=std::floor((this->_n_rows_10334-(_n_y_10389/2.0)));
return ((((d::truth((_n_c_10390>=0.0))&&d::truth((_n_c_10390<this->_n_cols_10333)))&&d::truth((_n_r_10391>=0.0)))&&d::truth((_n_r_10391<this->_n_rows_10334)))?(_n_c_10390+(_n_r_10391*this->_n_cols_10333)):(-d::number(1.0)));

}
}

void _n_put_10340(double _a0,double _a1,d::String _a2){double _n_x_10392=_a0;
double _n_y_10393=_a1;
d::String _n_ch_10394=_a2;
{
double _n_k_10395=this->_n_cell_10339(_n_x_10392,_n_y_10393);
if(d::truth((_n_k_10395>=0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_10542=this->_n_grid_10336;auto _n_index_10543=_n_k_10395;auto _n_value_10544=_n_ch_10394;d::put(_n_array_10542,_n_index_10543,_n_value_10544);return _n_value_10544;})());
}

}
}

std::array<double,2> _n_at_10341(std::shared_ptr<_n_Record_10331> _a0,std::shared_ptr<_n_Record_10332> _a1,double _a2){std::shared_ptr<_n_Record_10331> _n_s_10396=_a0;
std::shared_ptr<_n_Record_10332> _n_p_10397=_a1;
double _n_b_10398=_a2;
{
double _n_e_10399=((1.0-std::exp(((-d::number(_n_p_10397->_p_k))*_n_b_10398)))/_n_p_10397->_p_k);
return std::array<double,2>{((_n_s_10396->_p_x0+(_n_s_10396->_p_drift*_n_s_10396->_p_rise))+(_n_p_10397->_p_vx*_n_e_10399)),((_n_s_10396->_p_top+(_n_p_10397->_p_vy*_n_e_10399))-((_n_G_10323/_n_p_10397->_p_k)*(_n_b_10398-_n_e_10399)))};

}
}

double _n_back_10342(std::shared_ptr<_n_Record_10332> _a0,double _a1,double _a2){std::shared_ptr<_n_Record_10332> _n_p_10400=_a0;
double _n_a_10401=_a1;
double _n_q_10402=_a2;
return ((-d::number(std::log((1.0-(_n_q_10402*(1.0-std::exp(((-d::number(_n_p_10400->_p_k))*_n_a_10401))))))))/_n_p_10400->_p_k);}

void _n_stroke_10343(std::shared_ptr<_n_Record_10331> _a0,std::shared_ptr<_n_Record_10332> _a1,double _a2,double _a3,std::function<d::String(double,double,double,double)> _a4){std::shared_ptr<_n_Record_10331> _n_s_10403=_a0;
std::shared_ptr<_n_Record_10332> _n_p_10404=_a1;
double _n_b0_10405=_a2;
double _n_b1_10406=_a3;
std::function<d::String(double,double,double,double)> _n_style_10407=_a4;
{
if(d::truth((_n_b1_10406<=_n_b0_10405))){d::check_cancel();return;
}
double _n_n_10412=24.0;
double _n_last_10413=([&](){auto _n_arguments_10545=this->_n_at_10341(_n_s_10403,_n_p_10404,_n_b1_10406);return this->_n_cell_10339(d::at(_n_arguments_10545,0.0),d::at(_n_arguments_10545,1.0));})();
double _n_m_10414=0.0;
{double _n_j_10415=1.0;
for(;d::truth((_n_j_10415<=_n_n_10412));(void)((_n_j_10415++))){d::check_cancel();double _n_b_10416=(_n_b1_10406-(((_n_b1_10406-_n_b0_10405)*_n_j_10415)/_n_n_10412));
auto _n_binding_10546=this->_n_at_10341(_n_s_10403,_n_p_10404,_n_b_10416);
double _n_x_10417=d::at(_n_binding_10546,0.0);
double _n_y_10418=d::at(_n_binding_10546,1.0);
auto _n_binding_10547=this->_n_at_10341(_n_s_10403,_n_p_10404,(_n_b_10416+0.01));
double _n_nx_10419=d::at(_n_binding_10547,0.0);
double _n_ny_10420=d::at(_n_binding_10547,1.0);
double _n_k_10421=this->_n_cell_10339(_n_x_10417,_n_y_10418);
if((d::truth((_n_k_10421<0.0))||d::truth((_n_k_10421==_n_last_10413)))){d::check_cancel();continue;
}
(void)((_n_last_10413=_n_k_10421));
d::String _n_g_10422=([&](){auto _n_argument_10548=(_n_j_10415/_n_n_10412);auto _n_argument_10549=(_n_nx_10419-_n_x_10417);auto _n_argument_10550=(_n_ny_10420-_n_y_10418);auto _n_argument_10551=(_n_m_10414++);return _n_style_10407(_n_argument_10548,_n_argument_10549,_n_argument_10550,_n_argument_10551);})();
if(d::truth(_n_g_10422)){d::check_cancel();(void)(([&](){auto&& _n_array_10552=this->_n_grid_10336;auto _n_index_10553=_n_k_10421;auto _n_value_10554=_n_g_10422;d::put(_n_array_10552,_n_index_10553,_n_value_10554);return _n_value_10554;})());
}
}}

}
}

explicit Native_fireworks(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_10505=_n_meta_10321;
this->_n_cols_10333=_n_binding_10505->_p_cols;
this->_n_rows_10334=_n_binding_10505->_p_rows;
this->_n_H_10335=(this->_n_rows_10334*2.0);
this->_n_grid_10336=d::Array<d::String,false>(size_t((this->_n_cols_10333*this->_n_rows_10334)));
this->_n_cache_10337=d::Map<double,std::shared_ptr<_n_Record_10331>>();
this->_n_lead_10344=(([&](){auto _n_left_10506=this->_n_get_10338(0.0)->_p_at;auto _n_right_10507=this->_n_get_10338(0.0)->_p_rise;return (_n_left_10506+_n_right_10507);})()+_n_OPEN_10327);
_render=[=]( double _a0,std::shared_ptr<_n_Record_10461> _a1) mutable ->d::String{double _n_time_10423=_a0;
{
(void)(this->_n_grid_10336.fill(d::String(u" ")));
double _n_t_10424=(_n_time_10423+this->_n_lead_10344);
double _n_tick_10425=std::floor((_n_t_10424*30.0));
double _n_last_10426=std::floor((_n_t_10424/_n_EVERY_10324));
{double _n_i_10427=(_n_last_10426-4.0);
for(;d::truth((_n_i_10427<=_n_last_10426));(void)((_n_i_10427++))){d::check_cancel();std::shared_ptr<_n_Record_10331> _n_s_10428=this->_n_get_10338(_n_i_10427);
double _n_age_10429=(_n_t_10424-_n_s_10428->_p_at);
if(d::truth((_n_age_10429<0.0))){d::check_cancel();continue;
}
if(d::truth((_n_age_10429<_n_s_10428->_p_rise))){d::check_cancel();double _n_g_10430=((2.0*_n_s_10428->_p_top)/(_n_s_10428->_p_rise*_n_s_10428->_p_rise));
double _n_v0_10431=(_n_g_10430*_n_s_10428->_p_rise);
auto _n_pos_10432=[&]( double _a0) mutable ->std::array<double,2>{double _n_a_10433=_a0;
return std::array<double,2>{(_n_s_10428->_p_x0+(_n_s_10428->_p_drift*_n_a_10433)),((_n_v0_10431*_n_a_10433)-(((_n_g_10430*_n_a_10433)*_n_a_10433)/2.0))};};
{double _n_j_10434=5.0;
for(;d::truth((_n_j_10434>=1.0));(void)((_n_j_10434--))){d::check_cancel();double _n_a_10435=(_n_age_10429-(_n_j_10434*0.05));
if((d::truth((_n_a_10435<0.0))||d::truth((d::mod(((_n_tick_10425+_n_j_10434)+_n_i_10427),3.0)==0.0)))){d::check_cancel();continue;
}
auto _n_binding_10508=_n_pos_10432(_n_a_10435);
double _n_x_10436=d::at(_n_binding_10508,0.0);
double _n_y_10437=d::at(_n_binding_10508,1.0);
(void)(this->_n_put_10340((_n_x_10436+((d::mod(((_n_tick_10425*7.0)+_n_j_10434),3.0)-1.0)*0.4)),(_n_y_10437-(_n_j_10434*0.3)),(d::truth((_n_j_10434>3.0))?d::String(u"."):d::String(u":"))));
}}
(void)(([&](){auto _n_arguments_10509=_n_pos_10432(_n_age_10429);return this->_n_put_10340(d::at(_n_arguments_10509,0.0),d::at(_n_arguments_10509,1.0),d::String(u"|"));})());
continue;
}
double _n_a_10438=(_n_age_10429-_n_s_10428->_p_rise);
d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_heads_10439=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
for(auto &&_n_item_10510:_n_s_10428->_p_sparks){d::check_cancel();std::shared_ptr<_n_Record_10332> _n_p_10440=_n_item_10510;
{
if(d::truth((_n_a_10438>_n_p_10440->_p_life))){d::check_cancel();continue;
}
double _n_f_10441=(_n_a_10438/_n_p_10440->_p_life);
double _n_h_10442=([&](){auto _n_argument_10511=double(d::i32(_n_p_10440->_p_seed)^d::i32(d::imul(_n_tick_10425,2654435761.0)));auto _n_argument_10512=2246822507.0;return d::imul(_n_argument_10511,_n_argument_10512);})();
(void)((_n_h_10442=(d::mod(double(d::u32(double(d::i32(_n_h_10442)^d::i32(double(d::u32(_n_h_10442)>>(d::u32(13.0)&31)))))>>(d::u32(0.0)&31)),1000.0)/1000.0)));
if((d::truth((_n_f_10441>0.7))&&d::truth((_n_h_10442<((_n_f_10441-0.7)*3.0))))){d::check_cancel();continue;
}
if(d::truth((_n_a_10438<0.1))){d::check_cancel();continue;
}
auto _n_binding_10513=this->_n_at_10341(_n_s_10428,_n_p_10440,_n_a_10438);
double _n_x_10443=d::at(_n_binding_10513,0.0);
double _n_y_10444=d::at(_n_binding_10513,1.0);
if(d::truth((_n_p_10440->_p_look==d::String(u"peony")))){d::check_cancel();if((d::truth((!d::truth(_n_p_10440->_p_inner)))&&d::truth((_n_a_10438<0.75)))){d::check_cancel();(void)(([&](){auto _n_argument_10514=_n_s_10428;auto _n_argument_10515=_n_p_10440;auto _n_argument_10516=([&](){auto _n_argument_10517=this->_n_back_10342(_n_p_10440,_n_a_10438,0.6);auto _n_argument_10518=(_n_a_10438-0.12);return d::maximum({_n_argument_10517,_n_argument_10518});})();auto _n_argument_10519=_n_a_10438;auto _n_argument_10520=[=]( double _a0,double _a1,double _a2) mutable ->d::String{double _n___10445=_a0;
double _n_dx_10446=_a1;
double _n_dy_10447=_a2;
return _n_streak_10329(_n_dx_10446,_n_dy_10447);};return this->_n_stroke_10343(_n_argument_10514,_n_argument_10515,_n_argument_10516,_n_argument_10519,[_n_callable_10521=_n_argument_10520](double _p0,double _p1,double _p2,double _p3)mutable->d::String{return _n_callable_10521(_p0,_p1,_p2);});})());
}
(void)(_n_heads_10439.push(std::make_shared<std::tuple<double,double,d::String>>(_n_x_10443,_n_y_10444,(d::truth((_n_a_10438<0.7))?d::String(u"*"):(d::truth((_n_f_10441<0.6))?d::String(u"+"):d::String(u"."))))));
}else {d::check_cancel();if(d::truth((_n_p_10440->_p_look==d::String(u"ring")))){d::check_cancel();if(d::truth((_n_a_10438<0.15))){d::check_cancel();continue;
}
(void)(_n_heads_10439.push(std::make_shared<std::tuple<double,double,d::String>>(_n_x_10443,_n_y_10444,((d::truth((_n_a_10438<0.3))||d::truth((_n_f_10441>0.6)))?d::String(u"."):d::String(u"o")))));
}else {d::check_cancel();if(d::truth((_n_p_10440->_p_look==d::String(u"core")))){d::check_cancel();(void)(_n_heads_10439.push(std::make_shared<std::tuple<double,double,d::String>>(_n_x_10443,_n_y_10444,(d::truth((_n_f_10441<0.5))?d::String(u"+"):d::String(u".")))));
}else {d::check_cancel();if(d::truth((_n_p_10440->_p_look==d::String(u"willow")))){d::check_cancel();(void)(([&](){auto _n_argument_10522=_n_s_10428;auto _n_argument_10523=_n_p_10440;auto _n_argument_10524=([&](){auto _n_argument_10525=this->_n_back_10342(_n_p_10440,_n_a_10438,0.45);auto _n_argument_10526=(_n_a_10438-1.6);return d::maximum({_n_argument_10525,_n_argument_10526});})();auto _n_argument_10527=_n_a_10438;auto _n_argument_10528=[=]( double _a0,double _a1,double _a2,double _a3) mutable ->d::String{double _n_u_10448=_a0;
double _n_dx_10449=_a1;
double _n_dy_10450=_a2;
double _n_m_10451=_a3;
return (d::truth((_n_u_10448<0.6))?_n_streak_10329(_n_dx_10449,_n_dy_10450):(d::truth(d::mod(_n_m_10451,2.0))?d::String(u""):d::String(u".")));};return this->_n_stroke_10343(_n_argument_10522,_n_argument_10523,_n_argument_10524,_n_argument_10527,_n_argument_10528);})());
(void)(_n_heads_10439.push(std::make_shared<std::tuple<double,double,d::String>>(_n_x_10443,_n_y_10444,(d::truth((_n_f_10441<0.25))?d::String(u"*"):d::String(u".")))));
}else {d::check_cancel();(void)(([&](){auto _n_argument_10529=_n_s_10428;auto _n_argument_10530=_n_p_10440;auto _n_argument_10531=([&](){auto _n_argument_10532=this->_n_back_10342(_n_p_10440,_n_a_10438,0.45);auto _n_argument_10533=(_n_a_10438-1.0);return d::maximum({_n_argument_10532,_n_argument_10533});})();auto _n_argument_10534=_n_a_10438;auto _n_argument_10535=[=]( double _a0,double _a1,double _a2) mutable ->d::String{double _n_u_10452=_a0;
double _n_dx_10453=_a1;
double _n_dy_10454=_a2;
return (d::truth((_n_u_10452<0.9))?_n_streak_10329(_n_dx_10453,_n_dy_10454):d::String(u"."));};return this->_n_stroke_10343(_n_argument_10529,_n_argument_10530,_n_argument_10531,_n_argument_10534,[_n_callable_10536=_n_argument_10535](double _p0,double _p1,double _p2,double _p3)mutable->d::String{return _n_callable_10536(_p0,_p1,_p2);});})());
(void)(_n_heads_10439.push(std::make_shared<std::tuple<double,double,d::String>>(_n_x_10443,_n_y_10444,(d::truth((_n_a_10438<0.2))?d::String(u"*"):(d::truth((_n_a_10438<0.45))?d::String(u"@"):(d::truth((_n_f_10441<0.75))?d::String(u"o"):d::String(u".")))))));
}
}
}
}

}
}
for(auto &&_n_item_10537:_n_heads_10439){d::check_cancel();auto _n_binding_10538=_n_item_10537;
double _n_x_10455=std::get<0>(*_n_binding_10538);
double _n_y_10456=std::get<1>(*_n_binding_10538);
d::String _n_g_10457=std::get<2>(*_n_binding_10538);
(void)(this->_n_put_10340(_n_x_10455,_n_y_10456,_n_g_10457));
}
if(d::truth((_n_a_10438<0.12))){d::check_cancel();(void)(this->_n_put_10340((_n_s_10428->_p_x0+(_n_s_10428->_p_drift*_n_s_10428->_p_rise)),_n_s_10428->_p_top,(d::truth((_n_a_10438<0.06))?d::String(u"@"):d::String(u"*"))));
}
}}
for(auto &&_n_item_10539:this->_n_cache_10337.keys()){d::check_cancel();double _n_i_10458=_n_item_10539;
if(d::truth((_n_i_10458<(_n_last_10426-5.0)))){d::check_cancel();(void)(this->_n_cache_10337.erase(_n_i_10458));
}
}
d::Array<d::String,false> _n_lines_10459=d::Array<d::String,false>{};
{double _n_r_10460=0.0;
for(;d::truth((_n_r_10460<this->_n_rows_10334));(void)((_n_r_10460++))){d::check_cancel();(void)(_n_lines_10459.push(d::join(this->_n_grid_10336.slice((_n_r_10460*this->_n_cols_10333),((_n_r_10460+1.0)*this->_n_cols_10333)),d::String(u""))));
}}
return d::join(_n_lines_10459,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("fireworks").cols)*ascii::catalog_meta("fireworks").rows);auto _env=std::make_shared<_n_Record_10461>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &fireworks_meta(){return catalog_meta("fireworks");}
std::unique_ptr<Piece> make_fireworks(const AsciiPieceOptions &o){return std::make_unique<Native_fireworks>(o);}
}
