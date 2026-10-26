// Direct, statically typed C++ from src/pieces/pendulum-wave.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24045;
struct _n_Record_24075;
struct _n_Record_24045{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24045> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24045>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24075{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24075> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24075>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_24045> _n_meta_24044=[](){return ([&](){auto _n_object_24078=std::make_shared<_n_Record_24045>();_n_object_24078->_p_name=d::String(u"pendulum wave");_n_object_24078->_p_category=d::String(u"physics");_n_object_24078->_p_note=d::String(u"a row of pendulums drifting in and out of step, from above");_n_object_24078->_p_cols=67.0;_n_object_24078->_p_rows=19.0;_n_object_24078->_p_fps=30.0;return _n_object_24078;})();}();
const double _n_N_24046=[](){return 21.0;}();
const double _n_GAP_24047=[](){return 3.0;}();
const double _n_CYCLE_24048=[](){return 150.0;}();
const double _n_BASE_24049=[](){return 60.0;}();
const double _n_BLUR_24050=[](){return 0.07;}();
const double _n_T0_24051=[](){return ((1.5*_n_CYCLE_24048)/(_n_N_24046-1.0));}();

struct Native_pendulum_wave final:ascii::Piece{
double _n_cols_24052{};
double _n_rows_24053{};
double _n_left_24054{};
double _n_mid_24055{};
double _n_right_24056{};
d::Array<d::String,false> _n_rail_24057{};
d::Array<d::String,false> _n_out_24058{};
std::function<d::String(double,std::shared_ptr<_n_Record_24075>)> _render;
double _n_row_24059(double _a0,double _a1){double _n_n_24061=_a0;
double _n_t_24062=_a1;
return (1.0+(((1.0-std::cos(((((2.0*ascii::PI)*(_n_BASE_24049+_n_n_24061))*_n_t_24062)/_n_CYCLE_24048)))*(this->_n_rows_24053-3.0))/2.0));}

explicit Native_pendulum_wave(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24079=_n_meta_24044;
this->_n_cols_24052=_n_binding_24079->_p_cols;
this->_n_rows_24053=_n_binding_24079->_p_rows;
this->_n_left_24054=std::floor((((this->_n_cols_24052-((_n_N_24046-1.0)*_n_GAP_24047))-1.0)/2.0));
this->_n_mid_24055=((this->_n_rows_24053-1.0)/2.0);
this->_n_right_24056=(this->_n_left_24054+((_n_N_24046-1.0)*_n_GAP_24047));
this->_n_rail_24057=d::Array<d::String,false>(size_t(this->_n_cols_24052)).fill(d::String(u" "));
{double _n_c_24060=(this->_n_left_24054-1.0);
for(;d::truth((_n_c_24060<=(this->_n_right_24056+1.0)));(void)((_n_c_24060++))){d::check_cancel();(void)(([&](){auto&& _n_array_24080=this->_n_rail_24057;auto _n_index_24081=_n_c_24060;auto _n_value_24082=d::String(u"─");d::put(_n_array_24080,_n_index_24081,_n_value_24082);return _n_value_24082;})());
}}
(void)(([&](){auto&& _n_array_24083=this->_n_rail_24057;auto _n_index_24084=(this->_n_left_24054-1.0);auto _n_value_24085=d::String(u"╶");d::put(_n_array_24083,_n_index_24084,_n_value_24085);return _n_value_24085;})());
(void)(([&](){auto&& _n_array_24086=this->_n_rail_24057;auto _n_index_24087=(this->_n_right_24056+1.0);auto _n_value_24088=d::String(u"╴");d::put(_n_array_24086,_n_index_24087,_n_value_24088);return _n_value_24088;})());
this->_n_out_24058=d::Array<d::String,false>(size_t((this->_n_cols_24052*this->_n_rows_24053)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24075> _a1) mutable ->d::String{double _n_time_24063=_a0;
{
double _n_t_24064=(_n_time_24063+_n_T0_24051);
(void)(this->_n_out_24058.fill(d::String(u" ")));
{double _n_c_24065=0.0;
for(;d::truth((_n_c_24065<this->_n_cols_24052));(void)((_n_c_24065++))){d::check_cancel();(void)(([&](){auto&& _n_array_24089=this->_n_out_24058;auto _n_index_24090=((this->_n_mid_24055*this->_n_cols_24052)+_n_c_24065);auto _n_value_24091=d::at(this->_n_rail_24057,_n_c_24065);d::put(_n_array_24089,_n_index_24090,_n_value_24091);return _n_value_24091;})());
}}
{double _n_n_24066=0.0;
for(;d::truth((_n_n_24066<_n_N_24046));(void)((_n_n_24066++))){d::check_cancel();double _n_c_24067=(this->_n_left_24054+(_n_n_24066*_n_GAP_24047));
double _n_now_24068=d::round(this->_n_row_24059(_n_n_24066,_n_t_24064));
double _n_then_24069=d::round(this->_n_row_24059(_n_n_24066,(_n_t_24064-_n_BLUR_24050)));
auto _n_binding_24092=(d::truth((_n_now_24068<_n_then_24069))?std::array<double,2>{(_n_now_24068+1.0),_n_then_24069}:std::array<double,2>{_n_then_24069,(_n_now_24068-1.0)});
double _n_a_24070=d::at(_n_binding_24092,0.0);
double _n_b_24071=d::at(_n_binding_24092,1.0);
{double _n_r_24072=_n_a_24070;
for(;d::truth((_n_r_24072<=_n_b_24071));(void)((_n_r_24072++))){d::check_cancel();if(d::truth((_n_r_24072!=this->_n_mid_24055))){d::check_cancel();(void)(([&](){auto&& _n_array_24093=this->_n_out_24058;auto _n_index_24094=((_n_r_24072*this->_n_cols_24052)+_n_c_24067);auto _n_value_24095=(d::truth((std::fabs((_n_r_24072-_n_now_24068))==1.0))?d::String(u":"):d::String(u"·"));d::put(_n_array_24093,_n_index_24094,_n_value_24095);return _n_value_24095;})());
}
}}
(void)(([&](){auto&& _n_array_24096=this->_n_out_24058;auto _n_index_24097=((_n_now_24068*this->_n_cols_24052)+_n_c_24067);auto _n_value_24098=d::String(u"o");d::put(_n_array_24096,_n_index_24097,_n_value_24098);return _n_value_24098;})());
}}
d::Array<d::String,false> _n_lines_24073=d::Array<d::String,false>{};
{double _n_r_24074=0.0;
for(;d::truth((_n_r_24074<this->_n_rows_24053));(void)((_n_r_24074++))){d::check_cancel();(void)(_n_lines_24073.push(d::join(this->_n_out_24058.slice((_n_r_24074*this->_n_cols_24052),((_n_r_24074+1.0)*this->_n_cols_24052)),d::String(u""))));
}}
return d::join(_n_lines_24073,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("pendulum-wave").cols)*ascii::catalog_meta("pendulum-wave").rows);auto _env=std::make_shared<_n_Record_24075>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &pendulum_wave_meta(){return catalog_meta("pendulum-wave");}
std::unique_ptr<Piece> make_pendulum_wave(const AsciiPieceOptions &o){return std::make_unique<Native_pendulum_wave>(o);}
}
