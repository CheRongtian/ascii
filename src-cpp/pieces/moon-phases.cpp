// Direct, statically typed C++ from src/pieces/moon-phases.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_21922;
struct _n_Record_22012;
struct _n_Record_21922{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_21922> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_21922>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_22012{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22012> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22012>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_21931(double _a0);
double _n_smooth_21932(double _a0,double _a1,double _a2);
double _n_albedo_21933(double _a0,double _a1);
std::shared_ptr<_n_Record_21922> _n_meta_21921=[](){return ([&](){auto _n_object_22015=std::make_shared<_n_Record_21922>();_n_object_22015->_p_name=d::String(u"moon phases");_n_object_22015->_p_category=d::String(u"space");_n_object_22015->_p_note=d::String(u"the moon waxing and waning, its maria darker in the light");_n_object_22015->_p_cols=46.0;_n_object_22015->_p_rows=23.0;_n_object_22015->_p_fps=15.0;return _n_object_22015;})();}();
const d::String _n_RAMP_21923=[](){return d::String(u" .:-=+*#%@");}();
const double _n_MONTH_21924=[](){return 24.0;}();
const double _n_START_21925=[](){return 0.95;}();
const double _n_SS_21926=[](){return 3.0;}();
d::Array<std::array<double,6>,false> _n_MARIA_21927=[](){return d::Array<std::array<double,6>,false>{std::array<double,6>{(-d::number(0.62)),0.08,0.28,0.5,0.62,0.0},std::array<double,6>{(-d::number(0.3)),0.45,0.27,0.21,0.7,0.0},std::array<double,6>{(-d::number(0.3)),0.71,0.25,0.1,0.55,0.25},std::array<double,6>{0.14,0.79,0.22,0.085,0.5,(-d::number(0.2))},std::array<double,6>{0.19,0.42,0.15,0.14,0.7,0.0},std::array<double,6>{0.38,0.12,0.21,0.16,0.7,0.0},std::array<double,6>{0.05,0.25,0.09,0.06,0.5,0.0},std::array<double,6>{(-d::number(0.28)),0.08,0.12,0.09,0.4,0.0},std::array<double,6>{0.75,0.3,0.1,0.14,0.72,0.0},std::array<double,6>{0.62,(-d::number(0.12)),0.12,0.2,0.62,0.0},std::array<double,6>{0.42,(-d::number(0.28)),0.09,0.09,0.62,0.0},std::array<double,6>{(-d::number(0.2)),(-d::number(0.34)),0.19,0.14,0.6,0.0},std::array<double,6>{(-d::number(0.52)),(-d::number(0.43)),0.09,0.1,0.65,0.0},std::array<double,6>{(-d::number(0.88)),(-d::number(0.06)),0.05,0.08,0.5,0.0}};}();
d::Array<std::array<double,4>,false> _n_CRATERS_21928=[](){return d::Array<std::array<double,4>,false>{std::array<double,4>{(-d::number(0.15)),(-d::number(0.72)),0.09,0.4},std::array<double,4>{(-d::number(0.33)),0.17,0.05,0.2},std::array<double,4>{(-d::number(0.6)),0.14,0.035,0.15},std::array<double,4>{(-d::number(0.75)),0.38,0.03,0.3}};}();
d::Array<std::array<double,2>,false> _n_RAYS_21929=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{1.75,0.55},std::array<double,2>{1.3,0.4},std::array<double,2>{2.3,0.35},std::array<double,2>{0.4,0.3},std::array<double,2>{3.1,0.3},std::array<double,2>{(-d::number(0.6)),0.22},std::array<double,2>{4.1,0.2}};}();
std::array<double,4> _n_TYCHO_21930=[](){return d::at(_n_CRATERS_21928,0.0);}();
std::function<double()> _n_mulberry32_21931(double _a0){double _n_a_21948=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_21948=double(d::i32((_n_a_21948+1831565813.0))|d::i32(0.0))));
double _n_t_21949=d::imul(double(d::i32(_n_a_21948)^d::i32(double(d::u32(_n_a_21948)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_21948)));
(void)((_n_t_21949=double(d::i32((_n_t_21949+d::imul(double(d::i32(_n_t_21949)^d::i32(double(d::u32(_n_t_21949)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_21949)))))^d::i32(_n_t_21949))));
return (double(d::u32(double(d::i32(_n_t_21949)^d::i32(double(d::u32(_n_t_21949)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_smooth_21932(double _a0,double _a1,double _a2){double _n_a_21950=_a0;
double _n_b_21951=_a1;
double _n_x_21952=_a2;
{
double _n_u_21953=([&](){auto _n_argument_22016=1.0;auto _n_argument_22017=d::maximum({0.0,((_n_x_21952-_n_a_21950)/(_n_b_21951-_n_a_21950))});return d::minimum({_n_argument_22016,_n_argument_22017});})();
return ((_n_u_21953*_n_u_21953)*(3.0-(2.0*_n_u_21953)));

}
}

double _n_albedo_21933(double _a0,double _a1){double _n_x_21954=_a0;
double _n_y_21955=_a1;
{
double _n_alb_21956=1.0;
for(auto &&_n_item_22018:_n_MARIA_21927){d::check_cancel();auto _n_binding_22019=_n_item_22018;
double _n_mx_21957=d::at(_n_binding_22019,0.0);
double _n_my_21958=d::at(_n_binding_22019,1.0);
double _n_rx_21959=d::at(_n_binding_22019,2.0);
double _n_ry_21960=d::at(_n_binding_22019,3.0);
double _n_k_21961=d::at(_n_binding_22019,4.0);
double _n_rot_21962=d::at(_n_binding_22019,5.0);
{
double _n_c_21963=std::cos(_n_rot_21962);
double _n_s_21964=std::sin(_n_rot_21962);
double _n_dx_21965=(_n_x_21954-_n_mx_21957);
double _n_dy_21966=(_n_y_21955-_n_my_21958);
(void)((_n_alb_21956=(_n_alb_21956-(_n_k_21961*(1.0-([&](){auto _n_argument_22020=0.55;auto _n_argument_22021=1.0;auto _n_argument_22022=d::hypot(std::initializer_list<double>{(((_n_dx_21965*_n_c_21963)+(_n_dy_21966*_n_s_21964))/_n_rx_21959),(((_n_dy_21966*_n_c_21963)-(_n_dx_21965*_n_s_21964))/_n_ry_21960)});return _n_smooth_21932(_n_argument_22020,_n_argument_22021,_n_argument_22022);})())))));

}
}
(void)((_n_alb_21956=d::maximum({0.3,_n_alb_21956})));
for(auto &&_n_item_22023:_n_CRATERS_21928){d::check_cancel();auto _n_binding_22024=_n_item_22023;
double _n_mx_21967=d::at(_n_binding_22024,0.0);
double _n_my_21968=d::at(_n_binding_22024,1.0);
double _n_rr_21969=d::at(_n_binding_22024,2.0);
double _n_k_21970=d::at(_n_binding_22024,3.0);
(void)((_n_alb_21956=(_n_alb_21956+(_n_k_21970*(1.0-([&](){auto _n_argument_22025=0.3;auto _n_argument_22026=1.0;auto _n_argument_22027=(d::hypot(std::initializer_list<double>{(_n_x_21954-_n_mx_21967),(_n_y_21955-_n_my_21968)})/_n_rr_21969);return _n_smooth_21932(_n_argument_22025,_n_argument_22026,_n_argument_22027);})())))));
}
double _n_dx_21971=(_n_x_21954-d::at(_n_TYCHO_21930,0.0));
double _n_dy_21972=(_n_y_21955-d::at(_n_TYCHO_21930,1.0));
double _n_d_21973=d::hypot(std::initializer_list<double>{_n_dx_21971,_n_dy_21972});
double _n_a_21974=std::atan2(_n_dy_21972,_n_dx_21971);
for(auto &&_n_item_22028:_n_RAYS_21929){d::check_cancel();auto _n_binding_22029=_n_item_22028;
double _n_at_21975=d::at(_n_binding_22029,0.0);
double _n_len_21976=d::at(_n_binding_22029,1.0);
{
double _n_off_21977=std::fabs(([&](){auto _n_argument_22030=std::sin((_n_a_21974-_n_at_21975));auto _n_argument_22031=std::cos((_n_a_21974-_n_at_21975));return std::atan2(_n_argument_22030,_n_argument_22031);})());
if(((d::truth((_n_d_21973>d::at(_n_TYCHO_21930,2.0)))&&d::truth((_n_d_21973<_n_len_21976)))&&d::truth((_n_off_21977<1.0)))){d::check_cancel();(void)((_n_alb_21956=(_n_alb_21956+((0.3*(1.0-(_n_d_21973/_n_len_21976)))*std::exp((-d::number(std::pow(((_n_off_21977*_n_d_21973)/0.03),2.0))))))));
}

}
}
return d::minimum({1.35,_n_alb_21956});

}
}

struct Native_moon_phases final:ascii::Piece{
double _n_cols_21934{};
double _n_rows_21935{};
double _n_cx_21936{};
double _n_cy_21937{};
double _n_R_21938{};
std::function<double()> _n_rand_21939{};
d::Array<d::Array<double,false>,false> _n_samples_21941{};
d::Array<float,true> _n_ground_21942{};
double _n_full_21943{};
d::Array<uint8_t,true> _n_rim_21945{};
d::Array<uint8_t,true> _n_stars_21946{};
double _n_n_21947{};
std::function<d::String(double,std::shared_ptr<_n_Record_22012>)> _render;
double _n_disk_21940(double _a0,double _a1){double _n_c_21978=_a0;
double _n_r_21979=_a1;
return d::hypot(std::initializer_list<double>{(((_n_c_21978+0.5)-this->_n_cx_21936)/(2.0*this->_n_R_21938)),(((this->_n_cy_21937-_n_r_21979)-0.5)/this->_n_R_21938)});}

bool _n_inside_21944(double _a0,double _a1){double _n_c_21989=_a0;
double _n_r_21990=_a1;
return ([&]()->bool{auto _n_logical_22055=([&]()->bool{auto _n_logical_22056=([&]()->bool{auto _n_logical_22057=([&]()->bool{auto _n_logical_22058=(_n_c_21989>=0.0);return d::truth(_n_logical_22058)?(_n_c_21989<this->_n_cols_21934):_n_logical_22058;})();return d::truth(_n_logical_22057)?(_n_r_21990>=0.0):_n_logical_22057;})();return d::truth(_n_logical_22056)?(_n_r_21990<this->_n_rows_21935):_n_logical_22056;})();return d::truth(_n_logical_22055)?((double(d::at(this->_n_samples_21941,((_n_r_21990*this->_n_cols_21934)+_n_c_21989)).size())*2.0)>=this->_n_full_21943):_n_logical_22055;})();}

explicit Native_moon_phases(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_22032=_n_meta_21921;
this->_n_cols_21934=_n_binding_22032->_p_cols;
this->_n_rows_21935=_n_binding_22032->_p_rows;
this->_n_cx_21936=(this->_n_cols_21934/2.0);
this->_n_cy_21937=(this->_n_rows_21935/2.0);
this->_n_R_21938=((this->_n_rows_21935/2.0)-1.0);
this->_n_rand_21939=_n_mulberry32_21931(7.0);
this->_n_samples_21941=d::Array<d::Array<double,false>,false>(d::from((this->_n_cols_21934*this->_n_rows_21935),[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{};}));
this->_n_ground_21942=d::Array<float,true>(size_t((this->_n_cols_21934*this->_n_rows_21935)));
{double _n_r_21980=0.0;
for(;d::truth((_n_r_21980<this->_n_rows_21935));(void)((_n_r_21980++))){d::check_cancel();{double _n_c_21981=0.0;
for(;d::truth((_n_c_21981<this->_n_cols_21934));(void)((_n_c_21981++))){d::check_cancel();d::Array<double,false> _n_s_21982=d::at(this->_n_samples_21941,((_n_r_21980*this->_n_cols_21934)+_n_c_21981));
{double _n_j_21983=0.0;
for(;d::truth((_n_j_21983<_n_SS_21926));(void)((_n_j_21983++))){d::check_cancel();{double _n_i_21984=0.0;
for(;d::truth((_n_i_21984<_n_SS_21926));(void)((_n_i_21984++))){d::check_cancel();double _n_x_21985=(((_n_c_21981+((_n_i_21984+0.5)/_n_SS_21926))-this->_n_cx_21936)/(2.0*this->_n_R_21938));
double _n_y_21986=(((this->_n_cy_21937-_n_r_21980)-((_n_j_21983+0.5)/_n_SS_21926))/this->_n_R_21938);
double _n_d_21987=((_n_x_21985*_n_x_21985)+(_n_y_21986*_n_y_21986));
if(d::truth((_n_d_21987<1.0))){d::check_cancel();(void)(([&](){auto _n_argument_22033=_n_x_21985;auto _n_argument_22034=_n_y_21986;auto _n_argument_22035=std::sqrt((1.0-_n_d_21987));auto _n_argument_22036=_n_albedo_21933(_n_x_21985,_n_y_21986);return _n_s_21982.push(_n_argument_22033,_n_argument_22034,_n_argument_22035,_n_argument_22036);})());
}
}}
}}
{double _n_i_21988=3.0;
for(;d::truth((_n_i_21988<double(_n_s_21982.size())));(void)((_n_i_21988=(_n_i_21988+4.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_22037=this->_n_ground_21942;auto _n_index_22038=((_n_r_21980*this->_n_cols_21934)+_n_c_21981);auto _n_value_22039=(d::at(_n_array_22037,_n_index_22038)+(d::at(_n_s_21982,_n_i_21988)/(double(_n_s_21982.size())/4.0)));d::put(_n_array_22037,_n_index_22038,_n_value_22039);return _n_value_22039;})());
}}
}}
}}
this->_n_full_21943=((4.0*_n_SS_21926)*_n_SS_21926);
this->_n_rim_21945=d::Array<uint8_t,true>(size_t((this->_n_cols_21934*this->_n_rows_21935)));
this->_n_stars_21946=d::Array<uint8_t,true>(size_t((this->_n_cols_21934*this->_n_rows_21935)));
{double _n_r_21991=0.0;
for(;d::truth((_n_r_21991<this->_n_rows_21935));(void)((_n_r_21991++))){d::check_cancel();{double _n_c_21992=0.0;
for(;d::truth((_n_c_21992<this->_n_cols_21934));(void)((_n_c_21992++))){d::check_cancel();double _n_k_21993=((_n_r_21991*this->_n_cols_21934)+_n_c_21992);
if(d::truth(this->_n_inside_21944(_n_c_21992,_n_r_21991))){d::check_cancel();(void)(([&](){auto&& _n_array_22040=this->_n_rim_21945;auto _n_index_22041=_n_k_21993;auto _n_value_22042=((((d::truth(this->_n_inside_21944((_n_c_21992-1.0),_n_r_21991))&&d::truth(this->_n_inside_21944((_n_c_21992+1.0),_n_r_21991)))&&d::truth(this->_n_inside_21944(_n_c_21992,(_n_r_21991-1.0))))&&d::truth(this->_n_inside_21944(_n_c_21992,(_n_r_21991+1.0))))?0.0:1.0);d::put(_n_array_22040,_n_index_22041,_n_value_22042);return _n_value_22042;})());
}else {d::check_cancel();if((d::truth((this->_n_disk_21940(_n_c_21992,_n_r_21991)>1.12))&&d::truth((this->_n_rand_21939()<0.022)))){d::check_cancel();(void)(([&](){auto&& _n_array_22043=this->_n_stars_21946;auto _n_index_22044=_n_k_21993;auto _n_value_22045=(d::truth((this->_n_rand_21939()<0.25))?2.0:1.0);d::put(_n_array_22043,_n_index_22044,_n_value_22045);return _n_value_22045;})());
}
}
}}
}}
this->_n_n_21947=(double(_n_RAMP_21923.size())-1.0);
_render=[=]( double _a0,std::shared_ptr<_n_Record_22012> _a1) mutable ->d::String{double _n_t_21994=_a0;
auto _n_binding_22048=(d::present(_a1)?_a1:([&](){auto _n_object_22047=std::make_shared<_n_Record_22012>();return _n_object_22047;})());
bool _n_paper_21995=(d::present(_n_binding_22048->_p_paper)?d::read(_n_binding_22048->_p_paper):false);
{
double _n_ph_21996=(_n_START_21925+(((2.0*ascii::PI)*d::mod(_n_t_21994,_n_MONTH_21924))/_n_MONTH_21924));
double _n_m_21997=([&](){auto _n_argument_22049=std::sin(_n_ph_21996);auto _n_argument_22050=0.12;auto _n_argument_22051=std::cos(_n_ph_21996);return d::hypot(std::initializer_list<double>{_n_argument_22049,_n_argument_22050,_n_argument_22051});})();
double _n_lx_21998=(std::sin(_n_ph_21996)/_n_m_21997);
double _n_ly_21999=(0.12/_n_m_21997);
double _n_lz_22000=((-d::number(std::cos(_n_ph_21996)))/_n_m_21997);
double _n_earthshine_22001=([&](){auto _n_argument_22052=0.0;auto _n_argument_22053=0.5;auto _n_argument_22054=std::cos(_n_ph_21996);return _n_smooth_21932(_n_argument_22052,_n_argument_22053,_n_argument_22054);})();
d::String _n_out_22002=d::String(u"");
{double _n_r_22003=0.0;
for(;d::truth((_n_r_22003<this->_n_rows_21935));(void)((_n_r_22003++))){d::check_cancel();if(d::truth(_n_r_22003)){d::check_cancel();(void)((_n_out_22002=(d::string(_n_out_22002)+d::string(d::String(u"\n")))));
}
{double _n_c_22004=0.0;
for(;d::truth((_n_c_22004<this->_n_cols_21934));(void)((_n_c_22004++))){d::check_cancel();double _n_k_22005=((_n_r_22003*this->_n_cols_21934)+_n_c_22004);
d::Array<double,false> _n_s_22006=d::at(this->_n_samples_21941,_n_k_22005);
if(d::truth((!d::truth(this->_n_inside_21944(_n_c_22004,_n_r_22003))))){d::check_cancel();(void)((_n_out_22002=(d::string(_n_out_22002)+d::string((d::truth(d::at(this->_n_stars_21946,_n_k_22005))?(d::truth((d::at(this->_n_stars_21946,_n_k_22005)==2.0))?d::String(u"+"):d::String(u".")):d::String(u" "))))));
continue;
}
double _n_sum_22007=0.0;
{double _n_i_22008=0.0;
for(;d::truth((_n_i_22008<double(_n_s_22006.size())));(void)((_n_i_22008=(_n_i_22008+4.0)))){d::check_cancel();double _n_mu0_22009=(((d::at(_n_s_22006,_n_i_22008)*_n_lx_21998)+(d::at(_n_s_22006,(_n_i_22008+1.0))*_n_ly_21999))+(d::at(_n_s_22006,(_n_i_22008+2.0))*_n_lz_22000));
if(d::truth((_n_mu0_22009<=0.0))){d::check_cancel();continue;
}
(void)((_n_sum_22007=(_n_sum_22007+(d::at(_n_s_22006,(_n_i_22008+3.0))*((0.3*_n_mu0_22009)+(((0.7*2.0)*_n_mu0_22009)/(_n_mu0_22009+d::at(_n_s_22006,(_n_i_22008+2.0)))))))));
}}
double _n_v_22010=d::minimum({1.0,(_n_sum_22007/(double(_n_s_22006.size())/4.0))});
double _n_i_22011=(d::truth((_n_v_22010<0.015))?((d::truth(d::at(this->_n_rim_21945,_n_k_22005))||d::truth(((_n_earthshine_22001*d::at(this->_n_ground_21942,_n_k_22005))>0.72)))?1.0:0.0):(1.0+d::round((_n_v_22010*(this->_n_n_21947-1.0)))));
if(d::truth(_n_paper_21995)){d::check_cancel();(void)((_n_i_22011=(this->_n_n_21947-_n_i_22011)));
}
(void)((_n_out_22002=(d::string(_n_out_22002)+d::string(d::at(_n_RAMP_21923,_n_i_22011)))));
}}
}}
return _n_out_22002;

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("moon-phases").cols)*ascii::catalog_meta("moon-phases").rows);auto _env=std::make_shared<_n_Record_22012>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &moon_phases_meta(){return catalog_meta("moon-phases");}
std::unique_ptr<Piece> make_moon_phases(const AsciiPieceOptions &o){return std::make_unique<Native_moon_phases>(o);}
}
