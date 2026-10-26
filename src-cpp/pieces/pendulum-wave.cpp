// Direct, statically typed C++ from src/pieces/pendulum-wave.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24046;
struct _n_Record_24076;
struct _n_Record_24046{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24046> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24046>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24076{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24076> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24076>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_24046> _n_meta_24045=[](){return ([&](){auto _n_object_24079=std::make_shared<_n_Record_24046>();_n_object_24079->_p_name=d::String(u"pendulum wave");_n_object_24079->_p_category=d::String(u"physics");_n_object_24079->_p_note=d::String(u"a row of pendulums drifting in and out of step, from above");_n_object_24079->_p_cols=67.0;_n_object_24079->_p_rows=19.0;_n_object_24079->_p_fps=30.0;return _n_object_24079;})();}();
const double _n_N_24047=[](){return 21.0;}();
const double _n_GAP_24048=[](){return 3.0;}();
const double _n_CYCLE_24049=[](){return 150.0;}();
const double _n_BASE_24050=[](){return 60.0;}();
const double _n_BLUR_24051=[](){return 0.07;}();
const double _n_T0_24052=[](){return ((1.5*_n_CYCLE_24049)/(_n_N_24047-1.0));}();

struct Native_pendulum_wave final:ascii::Piece{
double _n_cols_24053{};
double _n_rows_24054{};
double _n_left_24055{};
double _n_mid_24056{};
double _n_right_24057{};
d::Array<d::String,false> _n_rail_24058{};
d::Array<d::String,false> _n_out_24059{};
std::function<d::String(double,std::shared_ptr<_n_Record_24076>)> _render;
double _n_row_24060(double _a0,double _a1){double _n_n_24062=_a0;
double _n_t_24063=_a1;
return (1.0+(((1.0-std::cos(((((2.0*ascii::PI)*(_n_BASE_24050+_n_n_24062))*_n_t_24063)/_n_CYCLE_24049)))*(this->_n_rows_24054-3.0))/2.0));}

explicit Native_pendulum_wave(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24080=_n_meta_24045;
this->_n_cols_24053=_n_binding_24080->_p_cols;
this->_n_rows_24054=_n_binding_24080->_p_rows;
this->_n_left_24055=std::floor((((this->_n_cols_24053-((_n_N_24047-1.0)*_n_GAP_24048))-1.0)/2.0));
this->_n_mid_24056=((this->_n_rows_24054-1.0)/2.0);
this->_n_right_24057=(this->_n_left_24055+((_n_N_24047-1.0)*_n_GAP_24048));
this->_n_rail_24058=d::Array<d::String,false>(size_t(this->_n_cols_24053)).fill(d::String(u" "));
{double _n_c_24061=(this->_n_left_24055-1.0);
for(;d::truth((_n_c_24061<=(this->_n_right_24057+1.0)));(void)((_n_c_24061++))){d::check_cancel();(void)(([&](){auto&& _n_array_24081=this->_n_rail_24058;auto _n_index_24082=_n_c_24061;auto _n_value_24083=d::String(u"─");d::put(_n_array_24081,_n_index_24082,_n_value_24083);return _n_value_24083;})());
}}
(void)(([&](){auto&& _n_array_24084=this->_n_rail_24058;auto _n_index_24085=(this->_n_left_24055-1.0);auto _n_value_24086=d::String(u"╶");d::put(_n_array_24084,_n_index_24085,_n_value_24086);return _n_value_24086;})());
(void)(([&](){auto&& _n_array_24087=this->_n_rail_24058;auto _n_index_24088=(this->_n_right_24057+1.0);auto _n_value_24089=d::String(u"╴");d::put(_n_array_24087,_n_index_24088,_n_value_24089);return _n_value_24089;})());
this->_n_out_24059=d::Array<d::String,false>(size_t((this->_n_cols_24053*this->_n_rows_24054)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24076> _a1) mutable ->d::String{double _n_time_24064=_a0;
{
double _n_t_24065=(_n_time_24064+_n_T0_24052);
(void)(this->_n_out_24059.fill(d::String(u" ")));
{double _n_c_24066=0.0;
for(;d::truth((_n_c_24066<this->_n_cols_24053));(void)((_n_c_24066++))){d::check_cancel();(void)(([&](){auto&& _n_array_24090=this->_n_out_24059;auto _n_index_24091=((this->_n_mid_24056*this->_n_cols_24053)+_n_c_24066);auto _n_value_24092=d::at(this->_n_rail_24058,_n_c_24066);d::put(_n_array_24090,_n_index_24091,_n_value_24092);return _n_value_24092;})());
}}
{double _n_n_24067=0.0;
for(;d::truth((_n_n_24067<_n_N_24047));(void)((_n_n_24067++))){d::check_cancel();double _n_c_24068=(this->_n_left_24055+(_n_n_24067*_n_GAP_24048));
double _n_now_24069=d::round(this->_n_row_24060(_n_n_24067,_n_t_24065));
double _n_then_24070=d::round(this->_n_row_24060(_n_n_24067,(_n_t_24065-_n_BLUR_24051)));
auto _n_binding_24093=(d::truth((_n_now_24069<_n_then_24070))?d::Array<double,false>{(_n_now_24069+1.0),_n_then_24070}:d::Array<double,false>{_n_then_24070,(_n_now_24069-1.0)});
double _n_a_24071=d::at(_n_binding_24093,0.0);
double _n_b_24072=d::at(_n_binding_24093,1.0);
{double _n_r_24073=_n_a_24071;
for(;d::truth((_n_r_24073<=_n_b_24072));(void)((_n_r_24073++))){d::check_cancel();if(d::truth((_n_r_24073!=this->_n_mid_24056))){d::check_cancel();(void)(([&](){auto&& _n_array_24094=this->_n_out_24059;auto _n_index_24095=((_n_r_24073*this->_n_cols_24053)+_n_c_24068);auto _n_value_24096=(d::truth((std::fabs((_n_r_24073-_n_now_24069))==1.0))?d::String(u":"):d::String(u"·"));d::put(_n_array_24094,_n_index_24095,_n_value_24096);return _n_value_24096;})());
}
}}
(void)(([&](){auto&& _n_array_24097=this->_n_out_24059;auto _n_index_24098=((_n_now_24069*this->_n_cols_24053)+_n_c_24068);auto _n_value_24099=d::String(u"o");d::put(_n_array_24097,_n_index_24098,_n_value_24099);return _n_value_24099;})());
}}
d::Array<d::String,false> _n_lines_24074=d::Array<d::String,false>{};
{double _n_r_24075=0.0;
for(;d::truth((_n_r_24075<this->_n_rows_24054));(void)((_n_r_24075++))){d::check_cancel();(void)(_n_lines_24074.push(d::join(this->_n_out_24059.slice((_n_r_24075*this->_n_cols_24053),((_n_r_24075+1.0)*this->_n_cols_24053)),d::String(u""))));
}}
return d::join(_n_lines_24074,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("pendulum-wave").cols)*ascii::catalog_meta("pendulum-wave").rows);auto _env=std::make_shared<_n_Record_24076>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &pendulum_wave_meta(){return catalog_meta("pendulum-wave");}
std::unique_ptr<Piece> make_pendulum_wave(const AsciiPieceOptions &o){return std::make_unique<Native_pendulum_wave>(o);}
}
