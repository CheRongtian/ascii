// Direct, statically typed C++ from src/pieces/galaxy.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_11419;
struct _n_Record_11436;
struct _n_Record_11487;
struct _n_Record_11419{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_11419> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11419>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_11436{
double _p_r{};
double _p_a{};
double _p_b{};
static std::shared_ptr<_n_Record_11436> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11436>();out->_p_r=d::decode<double>(j["r"]);out->_p_a=d::decode<double>(j["a"]);out->_p_b=d::decode<double>(j["b"]);return out;}
};
struct _n_Record_11487{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_11487> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_11487>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_11422(double _a0);
std::shared_ptr<_n_Record_11419> _n_meta_11418=[](){return ([&](){auto _n_object_11490=std::make_shared<_n_Record_11419>();_n_object_11490->_p_name=d::String(u"galaxy");_n_object_11490->_p_category=d::String(u"space");_n_object_11490->_p_note=d::String(u"a tilted spiral galaxy turning, its inner stars the fastest");_n_object_11490->_p_cols=64.0;_n_object_11490->_p_rows=26.0;_n_object_11490->_p_fps=20.0;return _n_object_11490;})();}();
const d::String _n_RAMP_11420=[](){return d::String(u" .:-=+*#%@");}();
const double _n_TAU_11421=[](){return (ascii::PI*2.0);}();
std::function<double()> _n_mulberry32_11422(double _a0){double _n_a_11440=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_11440=double(d::i32((_n_a_11440+1831565813.0))|d::i32(0.0))));
double _n_t_11441=d::imul(double(d::i32(_n_a_11440)^d::i32(double(d::u32(_n_a_11440)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_11440)));
(void)((_n_t_11441=double(d::i32((_n_t_11441+d::imul(double(d::i32(_n_t_11441)^d::i32(double(d::u32(_n_t_11441)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_11441)))))^d::i32(_n_t_11441))));
return (double(d::u32(double(d::i32(_n_t_11441)^d::i32(double(d::u32(_n_t_11441)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

struct Native_galaxy final:ascii::Piece{
double _n_cols_11423{};
double _n_rows_11424{};
double _n_cx_11425{};
double _n_cy_11426{};
double _n_R_11427{};
double _n_INC_11428{};
double _n_PA_11429{};
double _n_cpa_11430{};
double _n_spa_11431{};
double _n_WIND_11432{};
double _n_PATTERN_11433{};
std::function<double()> _n_rand_11434{};
d::Array<std::shared_ptr<_n_Record_11436>,false> _n_stars_11435{};
d::Array<float,true> _n_field_11437{};
d::Array<std::shared_ptr<std::tuple<double,d::String>>,false> _n_bg_11438{};
std::function<d::String(double,std::shared_ptr<_n_Record_11487>)> _render;
double _n_light_11439(double _a0,double _a1,double _a2){double _n_x_11451=_a0;
double _n_y_11452=_a1;
double _n_turn_11453=_a2;
{
double _n_u_11454=(((_n_x_11451*this->_n_cpa_11430)+(_n_y_11452*this->_n_spa_11431))/this->_n_R_11427);
double _n_v_11455=((((-d::number(_n_x_11451))*this->_n_spa_11431)+(_n_y_11452*this->_n_cpa_11430))/(this->_n_R_11427*this->_n_INC_11428));
double _n_r_11456=d::hypot(std::initializer_list<double>{_n_u_11454,_n_v_11455});
if(d::truth((_n_r_11456>1.1))){d::check_cancel();return 0.0;
}
double _n_phi_11457=std::atan2(_n_v_11455,_n_u_11454);
double _n_bulge_11458=(1.6*std::exp((-d::number(std::pow((d::hypot(std::initializer_list<double>{_n_u_11454,((_n_v_11455*this->_n_INC_11428)*1.4)})/0.17),2.0)))));
double _n_disc_11459=(0.15*std::exp(((-d::number(_n_r_11456))/0.3)));
double _n_w_11460=(2.0*((_n_phi_11457-_n_turn_11453)-(std::log((_n_r_11456+0.000001))*this->_n_WIND_11432)));
double _n_arm_11461=std::pow((0.5+(0.5*std::cos(_n_w_11460))),3.5);
double _n_dust_11462=std::pow((0.5+(0.5*std::cos((_n_w_11460-1.3)))),8.0);
double _n_s_11463=([&](){auto _n_argument_11514=1.0;auto _n_argument_11515=d::maximum({0.0,((_n_r_11456-0.12)/0.16)});return d::minimum({_n_argument_11514,_n_argument_11515});})();
double _n_reach_11464=((((_n_s_11463*_n_s_11463)*(3.0-(2.0*_n_s_11463)))*(1.3-(0.8*_n_r_11456)))*std::exp((-d::number(std::pow((_n_r_11456/0.8),3.0)))));
return (((_n_bulge_11458+_n_disc_11459)+(_n_arm_11461*_n_reach_11464))*(1.0-(((0.75*_n_dust_11462)*_n_reach_11464)*d::minimum({1.0,(_n_r_11456/0.3)}))));

}
}

explicit Native_galaxy(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_11491=_n_meta_11418;
this->_n_cols_11423=_n_binding_11491->_p_cols;
this->_n_rows_11424=_n_binding_11491->_p_rows;
this->_n_cx_11425=(this->_n_cols_11423/2.0);
this->_n_cy_11426=(this->_n_rows_11424/2.0);
this->_n_R_11427=28.0;
this->_n_INC_11428=0.78;
this->_n_PA_11429=(-d::number(0.14));
this->_n_cpa_11430=std::cos(this->_n_PA_11429);
this->_n_spa_11431=std::sin(this->_n_PA_11429);
this->_n_WIND_11432=(1.0/std::tan(0.5));
this->_n_PATTERN_11433=0.1;
this->_n_rand_11434=_n_mulberry32_11422(11.0);
this->_n_stars_11435=d::Array<std::shared_ptr<_n_Record_11436>,false>(d::from(110.0,[&]( ) mutable ->std::shared_ptr<_n_Record_11436>{return ([&](){auto _n_object_11494=std::make_shared<_n_Record_11436>();_n_object_11494->_p_r=(0.3+(0.62*std::sqrt(this->_n_rand_11434())));_n_object_11494->_p_a=(this->_n_rand_11434()*_n_TAU_11421);_n_object_11494->_p_b=(0.2+(0.2*this->_n_rand_11434()));return _n_object_11494;})();}));
this->_n_field_11437=d::Array<float,true>(size_t((this->_n_cols_11423*this->_n_rows_11424)));
this->_n_bg_11438=d::Array<std::shared_ptr<std::tuple<double,d::String>>,false>{};
{double _n_gy_11442=0.0;
for(;d::truth((_n_gy_11442<4.0));(void)((_n_gy_11442++))){d::check_cancel();{double _n_gx_11443=0.0;
for(;d::truth((_n_gx_11443<6.0));(void)((_n_gx_11443++))){d::check_cancel();{double _n_tries_11444=0.0;
for(;d::truth((_n_tries_11444<6.0));(void)((_n_tries_11444++))){d::check_cancel();double _n_c_11445=(1.0+std::floor((((_n_gx_11443+this->_n_rand_11434())/6.0)*(this->_n_cols_11423-2.0))));
double _n_r_11446=(1.0+std::floor((((_n_gy_11442+this->_n_rand_11434())/4.0)*(this->_n_rows_11424-2.0))));
double _n_x_11447=(_n_c_11445-this->_n_cx_11425);
double _n_y_11448=((_n_r_11446-this->_n_cy_11426)*2.0);
double _n_u_11449=(((_n_x_11447*this->_n_cpa_11430)+(_n_y_11448*this->_n_spa_11431))/this->_n_R_11427);
double _n_v_11450=((((-d::number(_n_x_11447))*this->_n_spa_11431)+(_n_y_11448*this->_n_cpa_11430))/(this->_n_R_11427*this->_n_INC_11428));
if(d::truth((((_n_u_11449*_n_u_11449)+(_n_v_11450*_n_v_11450))<1.4))){d::check_cancel();continue;
}
(void)(this->_n_bg_11438.push(std::make_shared<std::tuple<double,d::String>>((_n_c_11445+(_n_r_11446*this->_n_cols_11423)),(d::truth((this->_n_rand_11434()<0.2))?d::String(u"+"):d::String(u".")))));
break;
}}
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_11487> _a1) mutable ->d::String{double _n_t_11465=_a0;
{
double _n_turn_11466=((-d::number(this->_n_PATTERN_11433))*_n_t_11465);
{double _n_r_11467=0.0;
for(;d::truth((_n_r_11467<this->_n_rows_11424));(void)((_n_r_11467++))){d::check_cancel();{double _n_c_11468=0.0;
for(;d::truth((_n_c_11468<this->_n_cols_11423));(void)((_n_c_11468++))){d::check_cancel();double _n_x_11469=((_n_c_11468+0.5)-this->_n_cx_11425);
double _n_y_11470=(((_n_r_11467+0.25)-this->_n_cy_11426)*2.0);
double _n_y2_11471=(((_n_r_11467+0.75)-this->_n_cy_11426)*2.0);
(void)(([&](){auto&& _n_array_11495=this->_n_field_11437;auto _n_index_11496=(_n_c_11468+(_n_r_11467*this->_n_cols_11423));auto _n_value_11497=(([&](){auto _n_left_11498=this->_n_light_11439(_n_x_11469,_n_y_11470,_n_turn_11466);auto _n_right_11499=this->_n_light_11439(_n_x_11469,_n_y2_11471,_n_turn_11466);return (_n_left_11498+_n_right_11499);})()/2.0);d::put(_n_array_11495,_n_index_11496,_n_value_11497);return _n_value_11497;})());
}}
}}
for(auto &&_n_item_11500:this->_n_stars_11435){d::check_cancel();std::shared_ptr<_n_Record_11436> _n_s_11472=_n_item_11500;
{
double _n_a_11473=(_n_s_11472->_p_a-((_n_s_11472->_p_b*_n_t_11465)/(_n_s_11472->_p_r+0.08)));
double _n_u_11474=((_n_s_11472->_p_r*std::cos(_n_a_11473))*this->_n_R_11427);
double _n_v_11475=(((_n_s_11472->_p_r*std::sin(_n_a_11473))*this->_n_R_11427)*this->_n_INC_11428);
double _n_x_11476=((_n_u_11474*this->_n_cpa_11430)-(_n_v_11475*this->_n_spa_11431));
double _n_y_11477=((_n_u_11474*this->_n_spa_11431)+(_n_v_11475*this->_n_cpa_11430));
double _n_c_11478=std::floor((this->_n_cx_11425+_n_x_11476));
double _n_r_11479=std::floor((this->_n_cy_11426+(_n_y_11477/2.0)));
if((((d::truth((_n_c_11478>=0.0))&&d::truth((_n_c_11478<this->_n_cols_11423)))&&d::truth((_n_r_11479>=0.0)))&&d::truth((_n_r_11479<this->_n_rows_11424)))){d::check_cancel();(void)(([&](){auto&& _n_array_11501=this->_n_field_11437;auto _n_index_11502=(_n_c_11478+(_n_r_11479*this->_n_cols_11423));auto _n_value_11503=(d::at(_n_array_11501,_n_index_11502)*1.6);d::put(_n_array_11501,_n_index_11502,_n_value_11503);return _n_value_11503;})());
}

}
}
d::Array<d::String,false> _n_out_11480=d::Array<d::String,false>(size_t((this->_n_cols_11423*this->_n_rows_11424)));
{double _n_k_11481=0.0;
for(;d::truth((_n_k_11481<(this->_n_cols_11423*this->_n_rows_11424)));(void)((_n_k_11481++))){d::check_cancel();double _n_b_11482=(1.0-std::exp(((-d::number(1.8))*d::at(this->_n_field_11437,_n_k_11481))));
(void)(([&](){auto&& _n_array_11504=_n_out_11480;auto _n_index_11505=_n_k_11481;auto _n_value_11506=d::at(_n_RAMP_11420,([&](){auto _n_argument_11507=(double(_n_RAMP_11420.size())-1.0);auto _n_argument_11508=std::floor((_n_b_11482*double(_n_RAMP_11420.size())));return d::minimum({_n_argument_11507,_n_argument_11508});})());d::put(_n_array_11504,_n_index_11505,_n_value_11506);return _n_value_11506;})());
}}
for(auto &&_n_item_11509:this->_n_bg_11438){d::check_cancel();auto _n_binding_11510=_n_item_11509;
double _n_k_11483=std::get<0>(*_n_binding_11510);
d::String _n_ch_11484=std::get<1>(*_n_binding_11510);
if(d::truth((d::at(_n_out_11480,_n_k_11483)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_11511=_n_out_11480;auto _n_index_11512=_n_k_11483;auto _n_value_11513=_n_ch_11484;d::put(_n_array_11511,_n_index_11512,_n_value_11513);return _n_value_11513;})());
}
}
d::Array<d::String,false> _n_lines_11485=d::Array<d::String,false>{};
{double _n_r_11486=0.0;
for(;d::truth((_n_r_11486<this->_n_rows_11424));(void)((_n_r_11486++))){d::check_cancel();(void)(_n_lines_11485.push(d::join(_n_out_11480.slice((_n_r_11486*this->_n_cols_11423),((_n_r_11486+1.0)*this->_n_cols_11423)),d::String(u""))));
}}
return d::join(_n_lines_11485,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("galaxy").cols)*ascii::catalog_meta("galaxy").rows);auto _env=std::make_shared<_n_Record_11487>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &galaxy_meta(){return catalog_meta("galaxy");}
std::unique_ptr<Piece> make_galaxy(const AsciiPieceOptions &o){return std::make_unique<Native_galaxy>(o);}
}
