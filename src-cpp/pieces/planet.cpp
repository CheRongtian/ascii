// Direct, statically typed C++ from src/pieces/planet.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24618;
struct _n_Record_24703;
struct _n_Record_24618{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24618> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24618>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24703{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24703> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24703>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_unit_24625(d::Array<double,false> _a0);
double _n_dot_24629(d::Array<double,false> _a0,d::Array<double,false> _a1);
double _n_smooth_24630(double _a0,double _a1,double _a2);
double _n_ring_24632(double _a0);
double _n_cloud_24633(double _a0,double _a1);
std::function<double()> _n_mulberry32_24634(double _a0);
std::shared_ptr<_n_Record_24618> _n_meta_24617=[](){return ([&](){auto _n_object_24706=std::make_shared<_n_Record_24618>();_n_object_24706->_p_name=d::String(u"planet");_n_object_24706->_p_category=d::String(u"space");_n_object_24706->_p_note=d::String(u"a banded ringed planet turning, with shadows both ways");_n_object_24706->_p_cols=64.0;_n_object_24706->_p_rows=18.0;_n_object_24706->_p_fps=20.0;return _n_object_24706;})();}();
const d::String _n_RAMP_24619=[](){return d::String(u" .,:-=+*#%@");}();
const double _n_RP_24620=[](){return 6.5;}();
const double _n_TILT_24621=[](){return 0.4;}();
const double _n_ROLL_24622=[](){return 0.2;}();
const double _n_DAY_24623=[](){return 18.0;}();
d::Array<std::array<double,5>,false> _n_RINGS_24624=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{1.22,1.48,0.3,0.5,0.1},std::array<double,5>{1.5,1.9,0.85,1.0,1.0},std::array<double,5>{1.98,2.16,0.8,0.65,0.85}};}();
d::Array<double,false> _n_SUN_24626=[](){return _n_unit_24625(d::Array<double,false>{(-d::number(0.42)),0.34,0.84});}();
d::Array<double,false> _n_AXIS_24627=[](){return d::Array<double,false>{0.0,std::cos(_n_TILT_24621),std::sin(_n_TILT_24621)};}();
d::Array<double,false> _n_E2_24628=[](){return d::Array<double,false>{0.0,(-d::number(std::sin(_n_TILT_24621))),std::cos(_n_TILT_24621)};}();
double _n_albedo_24631=[](){return 0.0;}();
d::Array<double,false> _n_unit_24625(d::Array<double,false> _a0){d::Array<double,false> _n_v_24643=_a0;
return d::map(_n_v_24643,[&]( double _a0) mutable ->double{double _n_c_24644=_a0;
return (_n_c_24644/d::hypot(_n_v_24643));});}

double _n_dot_24629(d::Array<double,false> _a0,d::Array<double,false> _a1){d::Array<double,false> _n_a_24645=_a0;
d::Array<double,false> _n_b_24646=_a1;
return (((d::at(_n_a_24645,0.0)*d::at(_n_b_24646,0.0))+(d::at(_n_a_24645,1.0)*d::at(_n_b_24646,1.0)))+(d::at(_n_a_24645,2.0)*d::at(_n_b_24646,2.0)));}

double _n_smooth_24630(double _a0,double _a1,double _a2){double _n_e0_24647=_a0;
double _n_e1_24648=_a1;
double _n_x_24649=_a2;
{
double _n_u_24650=([&](){auto _n_argument_24707=1.0;auto _n_argument_24708=d::maximum({0.0,((_n_x_24649-_n_e0_24647)/(_n_e1_24648-_n_e0_24647))});return d::minimum({_n_argument_24707,_n_argument_24708});})();
return ((_n_u_24650*_n_u_24650)*(3.0-(2.0*_n_u_24650)));

}
}

double _n_ring_24632(double _a0){double _n_r_24651=_a0;
{
for(auto &&_n_item_24709:_n_RINGS_24624){d::check_cancel();auto _n_binding_24710=_n_item_24709;
double _n_a_24652=d::at(_n_binding_24710,0.0);
double _n_b_24653=d::at(_n_binding_24710,1.0);
double _n_p_24654=d::at(_n_binding_24710,2.0);
double _n_q_24655=d::at(_n_binding_24710,3.0);
double _n_w_24656=d::at(_n_binding_24710,4.0);
if((d::truth((_n_r_24651>=_n_a_24652))&&d::truth((_n_r_24651<_n_b_24653)))){d::check_cancel();return ((_n_albedo_24631=_n_w_24656),(_n_p_24654+(((_n_q_24655-_n_p_24654)*(_n_r_24651-_n_a_24652))/(_n_b_24653-_n_a_24652))));
}
}
return 0.0;

}
}

double _n_cloud_24633(double _a0,double _a1){double _n_lat_24657=_a0;
double _n_lon_24658=_a1;
{
double _n_w_24659=([&](){auto _n_left_24711=(_n_lat_24657+(0.05*std::sin(((4.0*_n_lon_24658)+(6.0*_n_lat_24657)))));auto _n_right_24712=(0.03*std::sin((((9.0*_n_lon_24658)-(4.0*_n_lat_24657))+1.0)));return (_n_left_24711+_n_right_24712);})();
double _n_s_24660=std::cos((_n_w_24659*7.2));
double _n_v_24661=([&](){auto _n_left_24713=(0.5+(0.42*_n_smooth_24630((-d::number(0.35)),0.35,_n_s_24660)));auto _n_right_24714=(0.28*std::exp((-d::number(std::pow((_n_s_24660/0.16),2.0)))));return (_n_left_24713-_n_right_24714);})();
(void)((_n_v_24661=(_n_v_24661+(0.06*std::sin(((_n_lon_24658*7.0)+(_n_lat_24657*21.0)))))));
double _n_dl_24662=(d::mod((d::mod((_n_lon_24658+0.6),(2.0*ascii::PI))+(3.0*ascii::PI)),(2.0*ascii::PI))-ascii::PI);
double _n_d_24663=(std::pow(((_n_dl_24662*std::cos(_n_lat_24657))/0.42),2.0)+std::pow(((_n_lat_24657-0.42)/0.12),2.0));
if(d::truth((_n_d_24663<1.0))){d::check_cancel();(void)((_n_v_24661=(d::truth((_n_d_24663>0.45))?0.3:1.0)));
}
return (_n_v_24661*(1.0-(0.35*std::pow(std::fabs(std::sin(_n_lat_24657)),4.0))));

}
}

std::function<double()> _n_mulberry32_24634(double _a0){double _n_a_24664=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_24664=double(d::i32((_n_a_24664+1831565813.0))|d::i32(0.0))));
double _n_t_24665=d::imul(double(d::i32(_n_a_24664)^d::i32(double(d::u32(_n_a_24664)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_24664)));
(void)((_n_t_24665=double(d::i32((_n_t_24665+d::imul(double(d::i32(_n_t_24665)^d::i32(double(d::u32(_n_t_24665)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_24665)))))^d::i32(_n_t_24665))));
return (double(d::u32(double(d::i32(_n_t_24665)^d::i32(double(d::u32(_n_t_24665)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_planet final:ascii::Piece{
double _n_cols_24635{};
double _n_rows_24636{};
double _n_cr_24637{};
double _n_sr_24638{};
d::Array<d::String,false> _n_lines_24639{};
std::function<double()> _n_rand_24640{};
d::Array<d::Array<double,false>,false> _n_stars_24641{};
std::function<d::String(double,std::shared_ptr<_n_Record_24703>)> _render;
double _n_sample_24642(double _a0,double _a1,double _a2){double _n_px_24666=_a0;
double _n_py_24667=_a1;
double _n_spin_24668=_a2;
{
double _n_x_24669=((this->_n_cr_24637*_n_px_24666)-(this->_n_sr_24638*_n_py_24667));
double _n_y_24670=((this->_n_sr_24638*_n_px_24666)+(this->_n_cr_24637*_n_py_24667));
double _n_r2_24671=((_n_x_24669*_n_x_24669)+(_n_y_24670*_n_y_24670));
double _n_globe_24672=(-d::number(1.0));
double _n_gz_24673=(-d::number(INFINITY));
if(d::truth((_n_r2_24671<(_n_RP_24620*_n_RP_24620)))){d::check_cancel();double _n_z_24674=std::sqrt(((_n_RP_24620*_n_RP_24620)-_n_r2_24671));
d::Array<double,false> _n_n_24675=d::Array<double,false>{(_n_x_24669/_n_RP_24620),(_n_y_24670/_n_RP_24620),(_n_z_24674/_n_RP_24620)};
(void)((_n_gz_24673=_n_z_24674));
double _n_lat_24676=std::asin(_n_dot_24629(_n_n_24675,_n_AXIS_24627));
double _n_lon_24677=(([&](){auto _n_argument_24733=d::at(_n_n_24675,0.0);auto _n_argument_24734=_n_dot_24629(_n_n_24675,_n_E2_24628);return std::atan2(_n_argument_24733,_n_argument_24734);})()-_n_spin_24668);
double _n_lit_24678=([&](){auto _n_argument_24735=(-d::number(0.08));auto _n_argument_24736=0.4;auto _n_argument_24737=_n_dot_24629(_n_n_24675,_n_SUN_24626);return _n_smooth_24630(_n_argument_24735,_n_argument_24736,_n_argument_24737);})();
double _n_s_24679=((-d::number(((_n_y_24670*d::at(_n_AXIS_24627,1.0))+(_n_z_24674*d::at(_n_AXIS_24627,2.0)))))/_n_dot_24629(_n_SUN_24626,_n_AXIS_24627));
double _n_shade_24680=(d::truth((_n_s_24679>0.0))?(1.0-(0.75*_n_ring_24632((d::hypot(std::initializer_list<double>{(_n_x_24669+(_n_s_24679*d::at(_n_SUN_24626,0.0))),(_n_y_24670+(_n_s_24679*d::at(_n_SUN_24626,1.0))),(_n_z_24674+(_n_s_24679*d::at(_n_SUN_24626,2.0)))})/_n_RP_24620)))):1.0);
(void)((_n_globe_24672=((((0.86*_n_cloud_24633(_n_lat_24676,_n_lon_24677))*_n_lit_24678)*_n_shade_24680)*(0.7+(0.3*d::at(_n_n_24675,2.0))))));
}
double _n_z_24681=(((-d::number(_n_y_24670))*d::at(_n_AXIS_24627,1.0))/d::at(_n_AXIS_24627,2.0));
double _n_op_24682=_n_ring_24632((std::sqrt((_n_r2_24671+(_n_z_24681*_n_z_24681)))/_n_RP_24620));
if((d::truth((_n_op_24682>0.0))&&d::truth((_n_z_24681>_n_gz_24673)))){d::check_cancel();double _n_b_24683=(((_n_x_24669*d::at(_n_SUN_24626,0.0))+(_n_y_24670*d::at(_n_SUN_24626,1.0)))+(_n_z_24681*d::at(_n_SUN_24626,2.0)));
double _n_c_24684=((_n_r2_24671+(_n_z_24681*_n_z_24681))-(_n_RP_24620*_n_RP_24620));
double _n_v_24685=((_n_op_24682*_n_albedo_24631)*((d::truth((_n_b_24683<0.0))&&d::truth(((_n_b_24683*_n_b_24683)>_n_c_24684)))?0.04:1.0));
return (d::truth((_n_globe_24672<0.0))?_n_v_24685:((_n_globe_24672*(1.0-_n_op_24682))+_n_v_24685));
}
return _n_globe_24672;

}
}

explicit Native_planet(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24715=_n_meta_24617;
this->_n_cols_24635=_n_binding_24715->_p_cols;
this->_n_rows_24636=_n_binding_24715->_p_rows;
this->_n_cr_24637=std::cos(_n_ROLL_24622);
this->_n_sr_24638=std::sin(_n_ROLL_24622);
this->_n_lines_24639=d::Array<d::String,false>(size_t(this->_n_rows_24636));
this->_n_rand_24640=_n_mulberry32_24634(7.0);
this->_n_stars_24641=d::Array<d::Array<double,false>,false>(d::from(14.0,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{(1.0+std::floor((this->_n_rand_24640()*(this->_n_cols_24635-2.0)))),std::floor((this->_n_rand_24640()*this->_n_rows_24636)),(this->_n_rand_24640()*6.283)};}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24703> _a1) mutable ->d::String{double _n_t_24686=_a0;
auto _n_binding_24718=(d::present(_a1)?_a1:([&](){auto _n_object_24717=std::make_shared<_n_Record_24703>();return _n_object_24717;})());
bool _n_paper_24687=(d::present(_n_binding_24718->_p_paper)?d::read(_n_binding_24718->_p_paper):false);
{
double _n_spin_24688=(((2.0*ascii::PI)*_n_t_24686)/_n_DAY_24623);
{double _n_r_24689=0.0;
for(;d::truth((_n_r_24689<this->_n_rows_24636));(void)((_n_r_24689++))){d::check_cancel();d::String _n_line_24690=d::String(u"");
{double _n_c_24691=0.0;
for(;d::truth((_n_c_24691<this->_n_cols_24635));(void)((_n_c_24691++))){d::check_cancel();double _n_sum_24692=0.0;
double _n_hits_24693=0.0;
{double _n_k_24694=0.0;
for(;d::truth((_n_k_24694<4.0));(void)((_n_k_24694++))){d::check_cancel();double _n_px_24695=((((_n_c_24691+0.25)+(0.5*double(d::i32(_n_k_24694)&d::i32(1.0))))-(this->_n_cols_24635/2.0))*0.5);
double _n_py_24696=((((this->_n_rows_24636/2.0)-_n_r_24689)-0.25)-(0.5*double(d::i32(_n_k_24694)>>(d::u32(1.0)&31))));
double _n_v_24697=this->_n_sample_24642(_n_px_24695,_n_py_24696,_n_spin_24688);
if(d::truth((_n_v_24697>=0.0))){d::check_cancel();(void)(((_n_sum_24692=(_n_sum_24692+_n_v_24697)),(_n_hits_24693++)));
}
}}
if(d::truth((_n_hits_24693<2.0))){d::check_cancel();(void)((_n_line_24690=(d::string(_n_line_24690)+d::string(d::String(u" ")))));
continue;
}
double _n_i_24698=([&](){auto _n_argument_24719=(double(_n_RAMP_24619.size())-1.0);auto _n_argument_24720=([&](){auto _n_argument_24721=1.0;auto _n_argument_24722=d::round(((_n_sum_24692/_n_hits_24693)*(double(_n_RAMP_24619.size())-1.0)));return d::maximum({_n_argument_24721,_n_argument_24722});})();return d::minimum({_n_argument_24719,_n_argument_24720});})();
if(d::truth(_n_paper_24687)){d::check_cancel();(void)((_n_i_24698=(double(_n_RAMP_24619.size())-_n_i_24698)));
}
(void)((_n_line_24690=(d::string(_n_line_24690)+d::string(d::at(_n_RAMP_24619,_n_i_24698)))));
}}
(void)(([&](){auto&& _n_array_24723=this->_n_lines_24639;auto _n_index_24724=_n_r_24689;auto _n_value_24725=_n_line_24690;d::put(_n_array_24723,_n_index_24724,_n_value_24725);return _n_value_24725;})());
}}
for(auto &&_n_item_24726:this->_n_stars_24641){d::check_cancel();auto _n_binding_24727=_n_item_24726;
double _n_c_24699=d::at(_n_binding_24727,0.0);
double _n_r_24700=d::at(_n_binding_24727,1.0);
double _n_p_24701=d::at(_n_binding_24727,2.0);
{
if(d::truth((d::at(d::at(this->_n_lines_24639,_n_r_24700),_n_c_24699)!=d::String(u" ")))){d::check_cancel();continue;
}
d::String _n_ch_24702=((d::truth((_n_p_24701<2.0))&&d::truth((std::sin(((_n_t_24686*0.9)+(_n_p_24701*3.0)))<(-d::number(0.3)))))?d::String(u" "):(d::truth((_n_p_24701<4.0))?d::String(u"·"):d::String(u".")));
(void)(([&](){auto&& _n_array_24728=this->_n_lines_24639;auto _n_index_24729=_n_r_24700;auto _n_value_24730=([&](){auto _n_left_24731=(d::string(d::slice(d::at(this->_n_lines_24639,_n_r_24700),0.0,_n_c_24699))+d::string(_n_ch_24702));auto _n_right_24732=d::slice(d::at(this->_n_lines_24639,_n_r_24700),(_n_c_24699+1.0));return (d::string(_n_left_24731)+d::string(_n_right_24732));})();d::put(_n_array_24728,_n_index_24729,_n_value_24730);return _n_value_24730;})());

}
}
return d::join(this->_n_lines_24639,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("planet").cols)*ascii::catalog_meta("planet").rows);auto _env=std::make_shared<_n_Record_24703>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &planet_meta(){return catalog_meta("planet");}
std::unique_ptr<Piece> make_planet(const AsciiPieceOptions &o){return std::make_unique<Native_planet>(o);}
}
