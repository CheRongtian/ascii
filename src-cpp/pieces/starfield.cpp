// Direct, statically typed C++ from src/pieces/starfield.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_30360;
struct _n_Record_30361;
struct _n_Record_30421;
struct _n_Record_30422;
struct _n_Record_30360{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_30361> _p_options{};
static std::shared_ptr<_n_Record_30360> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30360>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_30361>>(j["options"]);return out;}
};
struct _n_Record_30361{
double _p_stars{};
double _p_speed{};
static std::shared_ptr<_n_Record_30361> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30361>();out->_p_stars=d::decode<double>(j["stars"]);out->_p_speed=d::decode<double>(j["speed"]);return out;}
};
struct _n_Record_30421{
std::optional<double> _p_stars{};
std::optional<double> _p_speed{};
static std::shared_ptr<_n_Record_30421> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30421>();out->_p_stars=d::decode<std::optional<double>>(j["stars"]);out->_p_speed=d::decode<std::optional<double>>(j["speed"]);return out;}
};
struct _n_Record_30422{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_30422> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_30422>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
std::function<double()> _n_mulberry32_30362(double _a0);
std::shared_ptr<_n_Record_30360> _n_meta_30359=[](){return ([&](){auto _n_object_30427=std::make_shared<_n_Record_30360>();_n_object_30427->_p_name=d::String(u"starfield");_n_object_30427->_p_category=d::String(u"space");_n_object_30427->_p_note=d::String(u"stars rush out from the centre and streak at the edges");_n_object_30427->_p_cols=64.0;_n_object_30427->_p_rows=24.0;_n_object_30427->_p_fps=30.0;_n_object_30427->_p_options=([&](){auto _n_object_30429=std::make_shared<_n_Record_30361>();_n_object_30429->_p_stars=60.0;_n_object_30429->_p_speed=1.0;return _n_object_30429;})();return _n_object_30427;})();}();
std::function<double()> _n_mulberry32_30362(double _a0){double _n_a_30382=_a0;
return [=]( ) mutable ->double{{
(void)((_n_a_30382=double(d::i32((_n_a_30382+1831565813.0))|d::i32(0.0))));
double _n_t_30383=d::imul(double(d::i32(_n_a_30382)^d::i32(double(d::u32(_n_a_30382)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_30382)));
(void)((_n_t_30383=double(d::i32((_n_t_30383+d::imul(double(d::i32(_n_t_30383)^d::i32(double(d::u32(_n_t_30383)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_30383)))))^d::i32(_n_t_30383))));
return (double(d::u32(double(d::i32(_n_t_30383)^d::i32(double(d::u32(_n_t_30383)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};}

struct Native_starfield final:ascii::Piece{
double _n_stars_30363{};
double _n_speed_30364{};
double _n_cols_30365{};
double _n_rows_30366{};
double _n_cx_30367{};
double _n_cy_30368{};
double _n_F_30369{};
double _n_NEAR_30370{};
double _n_FAR_30371{};
double _n_SEEN_30372{};
double _n_SHUTTER_30373{};
double _n_LIFE_30374{};
std::function<double()> _n_rand_30375{};
d::Array<double,false> _n_phase_30376{};
d::Array<d::String,false> _n_grid_30377{};
d::Array<std::array<double,3>,false> _n_order_30378{};
std::function<d::String(double,std::shared_ptr<_n_Record_30422>)> _render;
std::array<double,2> _n_place_30379(double _a0,double _a1){double _n_i_30384=_a0;
double _n_k_30385=_a1;
{
std::function<double()> _n_r_30386=_n_mulberry32_30362((((_n_i_30384*7919.0)+(_n_k_30385*104729.0))+13.0));
double _n_a_30387=((((_n_i_30384+_n_r_30386())/this->_n_stars_30363)*ascii::PI)*2.0);
double _n_d_30388=(0.25+(0.75*std::sqrt(_n_r_30386())));
return std::array<double,2>{(std::cos(_n_a_30387)*_n_d_30388),(std::sin(_n_a_30387)*_n_d_30388)};

}
}

void _n_put_30380(double _a0,double _a1,d::String _a2){double _n_c_30389=_a0;
double _n_r_30390=_a1;
d::String _n_ch_30391=_a2;
{
if((((d::truth((_n_c_30389<0.0))||d::truth((_n_c_30389>=this->_n_cols_30365)))||d::truth((_n_r_30390<0.0)))||d::truth((_n_r_30390>=this->_n_rows_30366)))){d::check_cancel();return;
}
double _n_k_30392=(_n_c_30389+(_n_r_30390*this->_n_cols_30365));
if(d::truth((d::at(this->_n_grid_30377,_n_k_30392)==d::String(u" ")))){d::check_cancel();(void)(([&](){auto&& _n_array_30442=this->_n_grid_30377;auto _n_index_30443=_n_k_30392;auto _n_value_30444=_n_ch_30391;d::put(_n_array_30442,_n_index_30443,_n_value_30444);return _n_value_30444;})());
}

}
}

explicit Native_starfield(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_30430=d::decode<std::shared_ptr<_n_Record_30421>>(_options.data);
this->_n_stars_30363=(d::present(_n_binding_30430->_p_stars)?d::read(_n_binding_30430->_p_stars):60.0);
this->_n_speed_30364=(d::present(_n_binding_30430->_p_speed)?d::read(_n_binding_30430->_p_speed):1.0);
auto _n_binding_30431=_n_meta_30359;
this->_n_cols_30365=_n_binding_30431->_p_cols;
this->_n_rows_30366=_n_binding_30431->_p_rows;
this->_n_cx_30367=(this->_n_cols_30365/2.0);
this->_n_cy_30368=(this->_n_rows_30366/2.0);
this->_n_F_30369=10.0;
this->_n_NEAR_30370=0.04;
this->_n_FAR_30371=1.3;
this->_n_SEEN_30372=1.05;
this->_n_SHUTTER_30373=0.16;
this->_n_LIFE_30374=(4.0/this->_n_speed_30364);
this->_n_rand_30375=_n_mulberry32_30362(7.0);
this->_n_phase_30376=d::Array<double,false>(d::from(this->_n_stars_30363,[&]( ) mutable ->double{return this->_n_rand_30375();}));
this->_n_grid_30377=d::Array<d::String,false>(size_t((this->_n_cols_30365*this->_n_rows_30366)));
this->_n_order_30378=d::Array<std::array<double,3>,false>(size_t(this->_n_stars_30363));
_render=[=]( double _a0,std::shared_ptr<_n_Record_30422> _a1) mutable ->d::String{double _n_t_30393=_a0;
{
(void)(this->_n_grid_30377.fill(d::String(u" ")));
{double _n_i_30394=0.0;
for(;d::truth((_n_i_30394<this->_n_stars_30363));(void)((_n_i_30394++))){d::check_cancel();double _n_u_30395=(d::at(this->_n_phase_30376,_n_i_30394)+(_n_t_30393/this->_n_LIFE_30374));
double _n_k_30396=std::floor(_n_u_30395);
(void)(([&](){auto&& _n_array_30432=this->_n_order_30378;auto _n_index_30433=_n_i_30394;auto _n_value_30434=std::array<double,3>{(this->_n_FAR_30371-((this->_n_FAR_30371-this->_n_NEAR_30370)*(_n_u_30395-_n_k_30396))),_n_i_30394,_n_k_30396};d::put(_n_array_30432,_n_index_30433,_n_value_30434);return _n_value_30434;})());
}}
(void)(this->_n_order_30378.sort([=]( std::array<double,3> _a0,std::array<double,3> _a1) mutable ->double{auto&& _n_a_30397=_a0;
auto&& _n_b_30398=_a1;
return (d::at(_n_a_30397,0.0)-d::at(_n_b_30398,0.0));}));
for(auto &&_n_item_30435:this->_n_order_30378){d::check_cancel();auto _n_binding_30436=_n_item_30435;
double _n_z_30399=d::at(_n_binding_30436,0.0);
double _n_i_30400=d::at(_n_binding_30436,1.0);
double _n_k_30401=d::at(_n_binding_30436,2.0);
{
if(d::truth((_n_z_30399>this->_n_SEEN_30372))){d::check_cancel();continue;
}
auto _n_binding_30437=this->_n_place_30379(_n_i_30400,_n_k_30401);
double _n_x_30402=d::at(_n_binding_30437,0.0);
double _n_y_30403=d::at(_n_binding_30437,1.0);
double _n_hx_30404=(this->_n_cx_30367+((_n_x_30402/_n_z_30399)*this->_n_F_30369));
double _n_hy_30405=(this->_n_cy_30368+(((_n_y_30403/_n_z_30399)*this->_n_F_30369)*0.5));
double _n_zt_30406=(_n_z_30399+this->_n_SHUTTER_30373);
double _n_c1_30407=std::floor(_n_hx_30404);
double _n_r1_30408=std::floor(_n_hy_30405);
double _n_c0_30409=std::floor((this->_n_cx_30367+((_n_x_30402/_n_zt_30406)*this->_n_F_30369)));
double _n_r0_30410=std::floor((this->_n_cy_30368+(((_n_y_30403/_n_zt_30406)*this->_n_F_30369)*0.5)));
(void)(this->_n_put_30380(_n_c1_30407,_n_r1_30408,(d::truth((_n_z_30399>0.5))?d::String(u"."):(d::truth((_n_z_30399>0.25))?d::String(u"+"):d::String(u"*")))));
if(d::truth((_n_z_30399>0.5))){d::check_cancel();continue;
}
double _n_n_30411=([&](){auto _n_argument_30438=std::fabs((_n_c1_30407-_n_c0_30409));auto _n_argument_30439=std::fabs((_n_r1_30408-_n_r0_30410));return d::maximum({_n_argument_30438,_n_argument_30439});})();
double _n_fade_30412=([&](){auto _n_argument_30440=2.0;auto _n_argument_30441=std::floor((_n_n_30411/3.0));return d::minimum({_n_argument_30440,_n_argument_30441});})();
{double _n_s_30413=0.0;
for(;d::truth((_n_s_30413<_n_n_30411));(void)((_n_s_30413++))){d::check_cancel();double _n_c_30414=d::round((_n_c0_30409+(((_n_c1_30407-_n_c0_30409)*_n_s_30413)/_n_n_30411)));
double _n_r_30415=d::round((_n_r0_30410+(((_n_r1_30408-_n_r0_30410)*_n_s_30413)/_n_n_30411)));
double _n_dc_30416=(d::round((_n_c0_30409+(((_n_c1_30407-_n_c0_30409)*(_n_s_30413+1.0))/_n_n_30411)))-_n_c_30414);
double _n_dr_30417=(d::round((_n_r0_30410+(((_n_r1_30408-_n_r0_30410)*(_n_s_30413+1.0))/_n_n_30411)))-_n_r_30415);
d::String _n_g_30418=(d::truth((_n_dr_30417==0.0))?d::String(u"-"):(d::truth((_n_dc_30416==0.0))?d::String(u"|"):(d::truth(((_n_dc_30416*_n_dr_30417)>0.0))?d::String(u"\\"):d::String(u"/"))));
(void)(this->_n_put_30380(_n_c_30414,_n_r_30415,(d::truth((_n_s_30413<_n_fade_30412))?d::String(u"."):_n_g_30418)));
}}

}
}
d::Array<d::String,false> _n_lines_30419=d::Array<d::String,false>{};
{double _n_r_30420=0.0;
for(;d::truth((_n_r_30420<this->_n_rows_30366));(void)((_n_r_30420++))){d::check_cancel();(void)(_n_lines_30419.push(d::join(this->_n_grid_30377.slice((_n_r_30420*this->_n_cols_30365),((_n_r_30420+1.0)*this->_n_cols_30365)),d::String(u""))));
}}
return d::join(_n_lines_30419,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("starfield").cols)*ascii::catalog_meta("starfield").rows);auto _env=std::make_shared<_n_Record_30422>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &starfield_meta(){return catalog_meta("starfield");}
std::unique_ptr<Piece> make_starfield(const AsciiPieceOptions &o){return std::make_unique<Native_starfield>(o);}
}
