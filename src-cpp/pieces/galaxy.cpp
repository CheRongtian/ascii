// Direct, statically typed C++ from src/pieces/galaxy.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11418;
struct _n_Record_11435;
struct _n_Record_11486;
struct _n_Record_11418{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_11418> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11418>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_11435{
double _p_r{};
double _p_a{};
double _p_b{};
static std::shared_ptr<_n_Record_11435> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11435>();out->_p_r=d::decode<double>(j["r"]);out->_p_a=d::decode<double>(j["a"]);out->_p_b=d::decode<double>(j["b"]);return out;}
};
struct _n_Record_11486{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11486> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11486>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_11421(double _a0);
std::shared_ptr<_n_Record_11418> _n_meta_11417=[](){return ([&](){auto _n_object_11489=std::make_shared<_n_Record_11418>();_n_object_11489->_p_name=d::String(u"galaxy");_n_object_11489->_p_category=d::String(u"space");_n_object_11489->_p_note=d::String(u"a tilted spiral galaxy turning, its inner stars the fastest");_n_object_11489->_p_cols=64.0;_n_object_11489->_p_rows=26.0;_n_object_11489->_p_fps=20.0;return _n_object_11489;})();}();
const d::String _n_RAMP_11419=[](){return d::String(u" .:-=+*#%@");}();
const double _n_TAU_11420=[](){return (ascii::PI*2.0);}();
std::function<double()> _n_mulberry32_11421(double _a0){double _n_a_11439=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_11439=double(d::i32((_n_a_11439+1831565813.0))|d::i32(0.0))));
double _n_t_11440=d::imul(double(d::i32(_n_a_11439)^d::i32(double(d::u32(_n_a_11439)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_11439)));
(void)((_n_t_11440=double(d::i32((_n_t_11440+d::imul(double(d::i32(_n_t_11440)^d::i32(double(d::u32(_n_t_11440)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_11440)))))^d::i32(_n_t_11440))));
return (double(d::u32(double(d::i32(_n_t_11440)^d::i32(double(d::u32(_n_t_11440)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

struct Native_galaxy final:ascii::Piece{
double _n_cols_11422{};
double _n_rows_11423{};
double _n_cx_11424{};
double _n_cy_11425{};
double _n_R_11426{};
double _n_INC_11427{};
double _n_PA_11428{};
double _n_cpa_11429{};
double _n_spa_11430{};
double _n_WIND_11431{};
double _n_PATTERN_11432{};
std::function<double()> _n_rand_11433{};
d::Array<std::shared_ptr<_n_Record_11435>,false> _n_stars_11434{};
d::Array<float,true> _n_field_11436{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_bg_11437{};
std::function<d::String(double,std::shared_ptr<_n_Record_11486>)> _render;
double _n_light_11438(double _a0,double _a1,double _a2){double _n_x_11450=_a0;
double _n_y_11451=_a1;
double _n_turn_11452=_a2;
{
double _n_u_11453=(((_n_x_11450*this->_n_cpa_11429)+(_n_y_11451*this->_n_spa_11430))/this->_n_R_11426);
double _n_v_11454=((((-d::number(_n_x_11450))*this->_n_spa_11430)+(_n_y_11451*this->_n_cpa_11429))/(this->_n_R_11426*this->_n_INC_11427));
double _n_r_11455=d::hypot(std::initializer_list<double>{_n_u_11453,_n_v_11454});
if(d::truth((_n_r_11455>1.1))){d::check_cancel();return 0.0;
}
double _n_phi_11456=std::atan2(_n_v_11454,_n_u_11453);
double _n_bulge_11457=(1.6*std::exp((-d::number(std::pow((d::hypot(std::initializer_list<double>{_n_u_11453,((_n_v_11454*this->_n_INC_11427)*1.4)})/0.17),2.0)))));
double _n_disc_11458=(0.15*std::exp(((-d::number(_n_r_11455))/0.3)));
double _n_w_11459=(2.0*((_n_phi_11456-_n_turn_11452)-(std::log((_n_r_11455+0.000001))*this->_n_WIND_11431)));
double _n_arm_11460=std::pow((0.5+(0.5*std::cos(_n_w_11459))),3.5);
double _n_dust_11461=std::pow((0.5+(0.5*std::cos((_n_w_11459-1.3)))),8.0);
double _n_s_11462=([&](){auto _n_argument_11513=1.0;auto _n_argument_11514=d::maximum({0.0,((_n_r_11455-0.12)/0.16)});return d::minimum({_n_argument_11513,_n_argument_11514});})();
double _n_reach_11463=((((_n_s_11462*_n_s_11462)*(3.0-(2.0*_n_s_11462)))*(1.3-(0.8*_n_r_11455)))*std::exp((-d::number(std::pow((_n_r_11455/0.8),3.0)))));
return (((_n_bulge_11457+_n_disc_11458)+(_n_arm_11460*_n_reach_11463))*(1.0-(((0.75*_n_dust_11461)*_n_reach_11463)*d::minimum({1.0,(_n_r_11455/0.3)}))));

}
}

explicit Native_galaxy(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11490=_n_meta_11417;
this->_n_cols_11422=_n_binding_11490->_p_cols;
this->_n_rows_11423=_n_binding_11490->_p_rows;
this->_n_cx_11424=(this->_n_cols_11422/2.0);
this->_n_cy_11425=(this->_n_rows_11423/2.0);
this->_n_R_11426=28.0;
this->_n_INC_11427=0.78;
this->_n_PA_11428=(-d::number(0.14));
this->_n_cpa_11429=std::cos(this->_n_PA_11428);
this->_n_spa_11430=std::sin(this->_n_PA_11428);
this->_n_WIND_11431=(1.0/std::tan(0.5));
this->_n_PATTERN_11432=0.1;
this->_n_rand_11433=_n_mulberry32_11421(11.0);
this->_n_stars_11434=d::Array<std::shared_ptr<_n_Record_11435>,false>(d::from(110.0,[&]( ) mutable ->std::shared_ptr<_n_Record_11435>{return ([&](){auto _n_object_11493=std::make_shared<_n_Record_11435>();_n_object_11493->_p_r=(0.3+(0.62*std::sqrt(this->_n_rand_11433())));_n_object_11493->_p_a=(this->_n_rand_11433()*_n_TAU_11420);_n_object_11493->_p_b=(0.2+(0.2*this->_n_rand_11433()));return _n_object_11493;})();}));
this->_n_field_11436=d::Array<float,true>(size_t((this->_n_cols_11422*this->_n_rows_11423)));
this->_n_bg_11437=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
{double _n_gy_11441=0.0;
for(;d::truth((_n_gy_11441<4.0));(void)((_n_gy_11441++))){d::check_cancel();{double _n_gx_11442=0.0;
for(;d::truth((_n_gx_11442<6.0));(void)((_n_gx_11442++))){d::check_cancel();{double _n_tries_11443=0.0;
for(;d::truth((_n_tries_11443<6.0));(void)((_n_tries_11443++))){d::check_cancel();double _n_c_11444=(1.0+std::floor((((_n_gx_11442+this->_n_rand_11433())/6.0)*(this->_n_cols_11422-2.0))));
double _n_r_11445=(1.0+std::floor((((_n_gy_11441+this->_n_rand_11433())/4.0)*(this->_n_rows_11423-2.0))));
double _n_x_11446=(_n_c_11444-this->_n_cx_11424);
double _n_y_11447=((_n_r_11445-this->_n_cy_11425)*2.0);
double _n_u_11448=(((_n_x_11446*this->_n_cpa_11429)+(_n_y_11447*this->_n_spa_11430))/this->_n_R_11426);
double _n_v_11449=((((-d::number(_n_x_11446))*this->_n_spa_11430)+(_n_y_11447*this->_n_cpa_11429))/(this->_n_R_11426*this->_n_INC_11427));
if(d::truth((((_n_u_11448*_n_u_11448)+(_n_v_11449*_n_v_11449))<1.4))){d::check_cancel();continue;
}
(void)(this->_n_bg_11437.push(std::make_shared<std::tuple<double,d::String>>((_n_c_11444+(_n_r_11445*this->_n_cols_11422)),(d::truth((this->_n_rand_11433()<0.2))?d::String(u"+"):d::String(u".")))));
break;
}}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_11486> _a1) mutable ->d::String{double _n_t_11464=_a0;
{
double _n_turn_11465=((-d::number(this->_n_PATTERN_11432))*_n_t_11464);
{double _n_r_11466=0.0;
for(;d::truth((_n_r_11466<this->_n_rows_11423));(void)((_n_r_11466++))){d::check_cancel();{double _n_c_11467=0.0;
for(;d::truth((_n_c_11467<this->_n_cols_11422));(void)((_n_c_11467++))){d::check_cancel();double _n_x_11468=((_n_c_11467+0.5)-this->_n_cx_11424);
double _n_y_11469=(((_n_r_11466+0.25)-this->_n_cy_11425)*2.0);
double _n_y2_11470=(((_n_r_11466+0.75)-this->_n_cy_11425)*2.0);
(void)(([&](){auto&& _n_array_11494=this->_n_field_11436;auto _n_index_11495=(_n_c_11467+(_n_r_11466*this->_n_cols_11422));auto _n_value_11496=(([&](){auto _n_left_11497=this->_n_light_11438(_n_x_11468,_n_y_11469,_n_turn_11465);auto _n_right_11498=this->_n_light_11438(_n_x_11468,_n_y2_11470,_n_turn_11465);return (_n_left_11497+_n_right_11498);})()/2.0);d::put(_n_array_11494,_n_index_11495,_n_value_11496);return _n_value_11496;})());
}}
}}
for(auto &&_n_item_11499:this->_n_stars_11434){d::check_cancel();std::shared_ptr<_n_Record_11435> _n_s_11471=_n_item_11499;
{
double _n_a_11472=(_n_s_11471->_p_a-((_n_s_11471->_p_b*_n_t_11464)/(_n_s_11471->_p_r+0.08)));
double _n_u_11473=((_n_s_11471->_p_r*std::cos(_n_a_11472))*this->_n_R_11426);
double _n_v_11474=(((_n_s_11471->_p_r*std::sin(_n_a_11472))*this->_n_R_11426)*this->_n_INC_11427);
double _n_x_11475=((_n_u_11473*this->_n_cpa_11429)-(_n_v_11474*this->_n_spa_11430));
double _n_y_11476=((_n_u_11473*this->_n_spa_11430)+(_n_v_11474*this->_n_cpa_11429));
double _n_c_11477=std::floor((this->_n_cx_11424+_n_x_11475));
double _n_r_11478=std::floor((this->_n_cy_11425+(_n_y_11476/2.0)));
if((((d::truth((_n_c_11477>=0.0))&&d::truth((_n_c_11477<this->_n_cols_11422)))&&d::truth((_n_r_11478>=0.0)))&&d::truth((_n_r_11478<this->_n_rows_11423)))){d::check_cancel();(void)(([&](){auto&& _n_array_11500=this->_n_field_11436;auto _n_index_11501=(_n_c_11477+(_n_r_11478*this->_n_cols_11422));auto _n_value_11502=(d::at(_n_array_11500,_n_index_11501)*1.6);d::put(_n_array_11500,_n_index_11501,_n_value_11502);return _n_value_11502;})());
}

}
}
d::Array<d::String,false> _n_out_11479=d::Array<d::String,false>(size_t((this->_n_cols_11422*this->_n_rows_11423)));
{double _n_k_11480=0.0;
for(;d::truth((_n_k_11480<(this->_n_cols_11422*this->_n_rows_11423)));(void)((_n_k_11480++))){d::check_cancel();double _n_b_11481=(1.0-std::exp(((-d::number(1.8))*d::at(this->_n_field_11436,_n_k_11480))));
(void)(([&](){auto&& _n_array_11503=_n_out_11479;auto _n_index_11504=_n_k_11480;auto _n_value_11505=d::at(_n_RAMP_11419,([&](){auto _n_argument_11506=(double(_n_RAMP_11419.size())-1.0);auto _n_argument_11507=std::floor((_n_b_11481*double(_n_RAMP_11419.size())));return d::minimum({_n_argument_11506,_n_argument_11507});})());d::put(_n_array_11503,_n_index_11504,_n_value_11505);return _n_value_11505;})());
}}
for(auto &&_n_item_11508:this->_n_bg_11437){d::check_cancel();auto _n_binding_11509=_n_item_11508;
double _n_k_11482=std::get<0>(*_n_binding_11509);
d::String _n_ch_11483=std::get<1>(*_n_binding_11509);
if(d::truth((d::at(_n_out_11479,_n_k_11482)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_11510=_n_out_11479;auto _n_index_11511=_n_k_11482;auto _n_value_11512=_n_ch_11483;d::put(_n_array_11510,_n_index_11511,_n_value_11512);return _n_value_11512;})());
}
}
d::Array<d::String,false> _n_lines_11484=d::Array<d::String,false>{};
{double _n_r_11485=0.0;
for(;d::truth((_n_r_11485<this->_n_rows_11423));(void)((_n_r_11485++))){d::check_cancel();(void)(_n_lines_11484.push(d::join(_n_out_11479.slice((_n_r_11485*this->_n_cols_11422),((_n_r_11485+1.0)*this->_n_cols_11422)),d::String(u""))));
}}
return d::join(_n_lines_11484,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("galaxy").cols)*ascii::catalog_meta("galaxy").rows);auto _env=std::make_shared<_n_Record_11486>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &galaxy_meta(){return catalog_meta("galaxy");}
std::unique_ptr<Piece> make_galaxy(const AsciiPieceOptions &o){return std::make_unique<Native_galaxy>(o);}
}
