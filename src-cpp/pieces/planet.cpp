// Direct, statically typed C++ from src/pieces/planet.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24617;
struct _n_Record_24702;
struct _n_Record_24617{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24617> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24617>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24702{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24702> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24702>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_unit_24624(d::Array<double,false> _a0);
double _n_dot_24628(d::Array<double,false> _a0,d::Array<double,false> _a1);
double _n_smooth_24629(double _a0,double _a1,double _a2);
double _n_ring_24631(double _a0);
double _n_cloud_24632(double _a0,double _a1);
std::function<double()> _n_mulberry32_24633(double _a0);
std::shared_ptr<_n_Record_24617> _n_meta_24616=[](){return ([&](){auto _n_object_24705=std::make_shared<_n_Record_24617>();_n_object_24705->_p_name=d::String(u"planet");_n_object_24705->_p_category=d::String(u"space");_n_object_24705->_p_note=d::String(u"a banded ringed planet turning, with shadows both ways");_n_object_24705->_p_cols=64.0;_n_object_24705->_p_rows=18.0;_n_object_24705->_p_fps=20.0;return _n_object_24705;})();}();
const d::String _n_RAMP_24618=[](){return d::String(u" .,:-=+*#%@");}();
const double _n_RP_24619=[](){return 6.5;}();
const double _n_TILT_24620=[](){return 0.4;}();
const double _n_ROLL_24621=[](){return 0.2;}();
const double _n_DAY_24622=[](){return 18.0;}();
d::Array<std::array<double,5>,false> _n_RINGS_24623=[](){return d::Array<std::array<double,5>,false>{std::array<double,5>{1.22,1.48,0.3,0.5,0.1},std::array<double,5>{1.5,1.9,0.85,1.0,1.0},std::array<double,5>{1.98,2.16,0.8,0.65,0.85}};}();
d::Array<double,false> _n_SUN_24625=[](){return _n_unit_24624(d::Array<double,false>{(-d::number(0.42)),0.34,0.84});}();
d::Array<double,false> _n_AXIS_24626=[](){return d::Array<double,false>{0.0,std::cos(_n_TILT_24620),std::sin(_n_TILT_24620)};}();
d::Array<double,false> _n_E2_24627=[](){return d::Array<double,false>{0.0,(-d::number(std::sin(_n_TILT_24620))),std::cos(_n_TILT_24620)};}();
double _n_albedo_24630=[](){return 0.0;}();
d::Array<double,false> _n_unit_24624(d::Array<double,false> _a0){d::Array<double,false> _n_v_24642=_a0;
return d::map(_n_v_24642,[&]( double _a0) mutable ->double{double _n_c_24643=_a0;
return (_n_c_24643/d::hypot(_n_v_24642));});}

double _n_dot_24628(d::Array<double,false> _a0,d::Array<double,false> _a1){d::Array<double,false> _n_a_24644=_a0;
d::Array<double,false> _n_b_24645=_a1;
return (((d::at(_n_a_24644,0.0)*d::at(_n_b_24645,0.0))+(d::at(_n_a_24644,1.0)*d::at(_n_b_24645,1.0)))+(d::at(_n_a_24644,2.0)*d::at(_n_b_24645,2.0)));}

double _n_smooth_24629(double _a0,double _a1,double _a2){double _n_e0_24646=_a0;
double _n_e1_24647=_a1;
double _n_x_24648=_a2;
{
double _n_u_24649=([&](){auto _n_argument_24706=1.0;auto _n_argument_24707=d::maximum({0.0,((_n_x_24648-_n_e0_24646)/(_n_e1_24647-_n_e0_24646))});return d::minimum({_n_argument_24706,_n_argument_24707});})();
return ((_n_u_24649*_n_u_24649)*(3.0-(2.0*_n_u_24649)));

}
}

double _n_ring_24631(double _a0){double _n_r_24650=_a0;
{
for(auto &&_n_item_24708:_n_RINGS_24623){d::check_cancel();auto _n_binding_24709=_n_item_24708;
double _n_a_24651=d::at(_n_binding_24709,0.0);
double _n_b_24652=d::at(_n_binding_24709,1.0);
double _n_p_24653=d::at(_n_binding_24709,2.0);
double _n_q_24654=d::at(_n_binding_24709,3.0);
double _n_w_24655=d::at(_n_binding_24709,4.0);
if((d::truth((_n_r_24650>=_n_a_24651))&&d::truth((_n_r_24650<_n_b_24652)))){d::check_cancel();return ((_n_albedo_24630=_n_w_24655),(_n_p_24653+(((_n_q_24654-_n_p_24653)*(_n_r_24650-_n_a_24651))/(_n_b_24652-_n_a_24651))));
}
}
return 0.0;

}
}

double _n_cloud_24632(double _a0,double _a1){double _n_lat_24656=_a0;
double _n_lon_24657=_a1;
{
double _n_w_24658=([&](){auto _n_left_24710=(_n_lat_24656+(0.05*std::sin(((4.0*_n_lon_24657)+(6.0*_n_lat_24656)))));auto _n_right_24711=(0.03*std::sin((((9.0*_n_lon_24657)-(4.0*_n_lat_24656))+1.0)));return (_n_left_24710+_n_right_24711);})();
double _n_s_24659=std::cos((_n_w_24658*7.2));
double _n_v_24660=([&](){auto _n_left_24712=(0.5+(0.42*_n_smooth_24629((-d::number(0.35)),0.35,_n_s_24659)));auto _n_right_24713=(0.28*std::exp((-d::number(std::pow((_n_s_24659/0.16),2.0)))));return (_n_left_24712-_n_right_24713);})();
(void)((_n_v_24660=(_n_v_24660+(0.06*std::sin(((_n_lon_24657*7.0)+(_n_lat_24656*21.0)))))));
double _n_dl_24661=(d::mod((d::mod((_n_lon_24657+0.6),(2.0*ascii::PI))+(3.0*ascii::PI)),(2.0*ascii::PI))-ascii::PI);
double _n_d_24662=(std::pow(((_n_dl_24661*std::cos(_n_lat_24656))/0.42),2.0)+std::pow(((_n_lat_24656-0.42)/0.12),2.0));
if(d::truth((_n_d_24662<1.0))){d::check_cancel();(void)((_n_v_24660=(d::truth((_n_d_24662>0.45))?0.3:1.0)));
}
return (_n_v_24660*(1.0-(0.35*std::pow(std::fabs(std::sin(_n_lat_24656)),4.0))));

}
}

std::function<double()> _n_mulberry32_24633(double _a0){double _n_a_24663=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_24663=double(d::i32((_n_a_24663+1831565813.0))|d::i32(0.0))));
double _n_t_24664=d::imul(double(d::i32(_n_a_24663)^d::i32(double(d::u32(_n_a_24663)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_24663)));
(void)((_n_t_24664=double(d::i32((_n_t_24664+d::imul(double(d::i32(_n_t_24664)^d::i32(double(d::u32(_n_t_24664)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_24664)))))^d::i32(_n_t_24664))));
return (double(d::u32(double(d::i32(_n_t_24664)^d::i32(double(d::u32(_n_t_24664)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

struct Native_planet final:ascii::Piece{
double _n_cols_24634{};
double _n_rows_24635{};
double _n_cr_24636{};
double _n_sr_24637{};
d::Array<d::String,false> _n_lines_24638{};
std::function<double()> _n_rand_24639{};
d::Array<std::array<double,3>,false> _n_stars_24640{};
std::function<d::String(double,std::shared_ptr<_n_Record_24702>)> _render;
double _n_sample_24641(double _a0,double _a1,double _a2){double _n_px_24665=_a0;
double _n_py_24666=_a1;
double _n_spin_24667=_a2;
{
double _n_x_24668=((this->_n_cr_24636*_n_px_24665)-(this->_n_sr_24637*_n_py_24666));
double _n_y_24669=((this->_n_sr_24637*_n_px_24665)+(this->_n_cr_24636*_n_py_24666));
double _n_r2_24670=((_n_x_24668*_n_x_24668)+(_n_y_24669*_n_y_24669));
double _n_globe_24671=(-d::number(1.0));
double _n_gz_24672=(-d::number(INFINITY));
if(d::truth((_n_r2_24670<(_n_RP_24619*_n_RP_24619)))){d::check_cancel();double _n_z_24673=std::sqrt(((_n_RP_24619*_n_RP_24619)-_n_r2_24670));
d::Array<double,false> _n_n_24674=d::Array<double,false>{(_n_x_24668/_n_RP_24619),(_n_y_24669/_n_RP_24619),(_n_z_24673/_n_RP_24619)};
(void)((_n_gz_24672=_n_z_24673));
double _n_lat_24675=std::asin(_n_dot_24628(_n_n_24674,_n_AXIS_24626));
double _n_lon_24676=(([&](){auto _n_argument_24732=d::at(_n_n_24674,0.0);auto _n_argument_24733=_n_dot_24628(_n_n_24674,_n_E2_24627);return std::atan2(_n_argument_24732,_n_argument_24733);})()-_n_spin_24667);
double _n_lit_24677=([&](){auto _n_argument_24734=(-d::number(0.08));auto _n_argument_24735=0.4;auto _n_argument_24736=_n_dot_24628(_n_n_24674,_n_SUN_24625);return _n_smooth_24629(_n_argument_24734,_n_argument_24735,_n_argument_24736);})();
double _n_s_24678=((-d::number(((_n_y_24669*d::at(_n_AXIS_24626,1.0))+(_n_z_24673*d::at(_n_AXIS_24626,2.0)))))/_n_dot_24628(_n_SUN_24625,_n_AXIS_24626));
double _n_shade_24679=(d::truth((_n_s_24678>0.0))?(1.0-(0.75*_n_ring_24631((d::hypot(std::initializer_list<double>{(_n_x_24668+(_n_s_24678*d::at(_n_SUN_24625,0.0))),(_n_y_24669+(_n_s_24678*d::at(_n_SUN_24625,1.0))),(_n_z_24673+(_n_s_24678*d::at(_n_SUN_24625,2.0)))})/_n_RP_24619)))):1.0);
(void)((_n_globe_24671=((((0.86*_n_cloud_24632(_n_lat_24675,_n_lon_24676))*_n_lit_24677)*_n_shade_24679)*(0.7+(0.3*d::at(_n_n_24674,2.0))))));
}
double _n_z_24680=(((-d::number(_n_y_24669))*d::at(_n_AXIS_24626,1.0))/d::at(_n_AXIS_24626,2.0));
double _n_op_24681=_n_ring_24631((std::sqrt((_n_r2_24670+(_n_z_24680*_n_z_24680)))/_n_RP_24619));
if((d::truth((_n_op_24681>0.0))&&d::truth((_n_z_24680>_n_gz_24672)))){d::check_cancel();double _n_b_24682=(((_n_x_24668*d::at(_n_SUN_24625,0.0))+(_n_y_24669*d::at(_n_SUN_24625,1.0)))+(_n_z_24680*d::at(_n_SUN_24625,2.0)));
double _n_c_24683=((_n_r2_24670+(_n_z_24680*_n_z_24680))-(_n_RP_24619*_n_RP_24619));
double _n_v_24684=((_n_op_24681*_n_albedo_24630)*((d::truth((_n_b_24682<0.0))&&d::truth(((_n_b_24682*_n_b_24682)>_n_c_24683)))?0.04:1.0));
return (d::truth((_n_globe_24671<0.0))?_n_v_24684:((_n_globe_24671*(1.0-_n_op_24681))+_n_v_24684));
}
return _n_globe_24671;

}
}

explicit Native_planet(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24714=_n_meta_24616;
this->_n_cols_24634=_n_binding_24714->_p_cols;
this->_n_rows_24635=_n_binding_24714->_p_rows;
this->_n_cr_24636=std::cos(_n_ROLL_24621);
this->_n_sr_24637=std::sin(_n_ROLL_24621);
this->_n_lines_24638=d::Array<d::String,false>(size_t(this->_n_rows_24635));
this->_n_rand_24639=_n_mulberry32_24633(7.0);
this->_n_stars_24640=d::Array<std::array<double,3>,false>(d::from(14.0,[&]( ) mutable ->std::array<double,3>{return std::array<double,3>{(1.0+std::floor((this->_n_rand_24639()*(this->_n_cols_24634-2.0)))),std::floor((this->_n_rand_24639()*this->_n_rows_24635)),(this->_n_rand_24639()*6.283)};}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24702> _a1) mutable ->d::String{double _n_t_24685=_a0;
auto _n_binding_24717=(d::present(_a1)?_a1:([&](){auto _n_object_24716=std::make_shared<_n_Record_24702>();return _n_object_24716;})());
bool _n_paper_24686=(d::present(_n_binding_24717->_p_paper)?d::read(_n_binding_24717->_p_paper):false);
{
double _n_spin_24687=(((2.0*ascii::PI)*_n_t_24685)/_n_DAY_24622);
{double _n_r_24688=0.0;
for(;d::truth((_n_r_24688<this->_n_rows_24635));(void)((_n_r_24688++))){d::check_cancel();d::String _n_line_24689=d::String(u"");
{double _n_c_24690=0.0;
for(;d::truth((_n_c_24690<this->_n_cols_24634));(void)((_n_c_24690++))){d::check_cancel();double _n_sum_24691=0.0;
double _n_hits_24692=0.0;
{double _n_k_24693=0.0;
for(;d::truth((_n_k_24693<4.0));(void)((_n_k_24693++))){d::check_cancel();double _n_px_24694=((((_n_c_24690+0.25)+(0.5*double(d::i32(_n_k_24693)&d::i32(1.0))))-(this->_n_cols_24634/2.0))*0.5);
double _n_py_24695=((((this->_n_rows_24635/2.0)-_n_r_24688)-0.25)-(0.5*double(d::i32(_n_k_24693)>>(d::u32(1.0)&31))));
double _n_v_24696=this->_n_sample_24641(_n_px_24694,_n_py_24695,_n_spin_24687);
if(d::truth((_n_v_24696>=0.0))){d::check_cancel();(void)(((_n_sum_24691=(_n_sum_24691+_n_v_24696)),(_n_hits_24692++)));
}
}}
if(d::truth((_n_hits_24692<2.0))){d::check_cancel();(void)((_n_line_24689=(d::string(_n_line_24689)+d::string(d::String(u" ")))));
continue;
}
double _n_i_24697=([&](){auto _n_argument_24718=(double(_n_RAMP_24618.size())-1.0);auto _n_argument_24719=([&](){auto _n_argument_24720=1.0;auto _n_argument_24721=d::round(((_n_sum_24691/_n_hits_24692)*(double(_n_RAMP_24618.size())-1.0)));return d::maximum({_n_argument_24720,_n_argument_24721});})();return d::minimum({_n_argument_24718,_n_argument_24719});})();
if(d::truth(_n_paper_24686)){d::check_cancel();(void)((_n_i_24697=(double(_n_RAMP_24618.size())-_n_i_24697)));
}
(void)((_n_line_24689=(d::string(_n_line_24689)+d::string(d::at(_n_RAMP_24618,_n_i_24697)))));
}}
(void)(([&](){auto&& _n_array_24722=this->_n_lines_24638;auto _n_index_24723=_n_r_24688;auto _n_value_24724=_n_line_24689;d::put(_n_array_24722,_n_index_24723,_n_value_24724);return _n_value_24724;})());
}}
for(auto &&_n_item_24725:this->_n_stars_24640){d::check_cancel();auto _n_binding_24726=_n_item_24725;
double _n_c_24698=d::at(_n_binding_24726,0.0);
double _n_r_24699=d::at(_n_binding_24726,1.0);
double _n_p_24700=d::at(_n_binding_24726,2.0);
{
if(d::truth((d::at(d::at(this->_n_lines_24638,_n_r_24699),_n_c_24698)!=d::String(u" ")))){d::check_cancel();continue;
}
d::String _n_ch_24701=((d::truth((_n_p_24700<2.0))&&d::truth((std::sin(((_n_t_24685*0.9)+(_n_p_24700*3.0)))<(-d::number(0.3)))))?d::String(u" "):(d::truth((_n_p_24700<4.0))?d::String(u"·"):d::String(u".")));
(void)(([&](){auto&& _n_array_24727=this->_n_lines_24638;auto _n_index_24728=_n_r_24699;auto _n_value_24729=([&](){auto _n_left_24730=(d::string(d::slice(d::at(this->_n_lines_24638,_n_r_24699),0.0,_n_c_24698))+d::string(_n_ch_24701));auto _n_right_24731=d::slice(d::at(this->_n_lines_24638,_n_r_24699),(_n_c_24698+1.0));return (d::string(_n_left_24730)+d::string(_n_right_24731));})();d::put(_n_array_24727,_n_index_24728,_n_value_24729);return _n_value_24729;})());

}
}
return d::join(this->_n_lines_24638,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("planet").cols)*ascii::catalog_meta("planet").rows);auto _env=std::make_shared<_n_Record_24702>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &planet_meta(){return catalog_meta("planet");}
std::unique_ptr<Piece> make_planet(const AsciiPieceOptions &o){return std::make_unique<Native_planet>(o);}
}
