// Direct, statically typed C++ from src/pieces/plasma.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24739;
struct _n_Record_24770;
struct _n_Record_24739{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24739> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24739>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24770{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_24770> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24770>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_24739> _n_meta_24738=[](){return ([&](){auto _n_object_24773=std::make_shared<_n_Record_24739>();_n_object_24773->_p_name=d::String(u"plasma");_n_object_24773->_p_category=d::String(u"generative");_n_object_24773->_p_note=d::String(u"soft interference blobs drifting and pulsing");_n_object_24773->_p_cols=64.0;_n_object_24773->_p_rows=22.0;_n_object_24773->_p_fps=24.0;return _n_object_24773;})();}();
const d::String _n_RAMP_24740=[](){return d::String(u".,-~:;=+*#%@");}();
const double _n_P_24741=[](){return 30.0;}();
const double _n_W_24742=[](){return ((2.0*ascii::PI)/_n_P_24741);}();
const double _n_GAIN_24743=[](){return 0.32;}();

struct Native_plasma final:ascii::Piece{
double _n_cols_24744{};
double _n_rows_24745{};
double _n_N_24746{};
d::Array<d::String,false> _n_out_24747{};
d::Array<float,true> _n_X_24748{};
d::Array<float,true> _n_Y_24749{};
std::function<d::String(double,std::shared_ptr<_n_Record_24770>)> _render;

explicit Native_plasma(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_24774=_n_meta_24738;
this->_n_cols_24744=_n_binding_24774->_p_cols;
this->_n_rows_24745=_n_binding_24774->_p_rows;
this->_n_N_24746=double(_n_RAMP_24740.size());
this->_n_out_24747=d::Array<d::String,false>(size_t(this->_n_cols_24744));
this->_n_X_24748=d::Array<float,true>(d::from(this->_n_cols_24744,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_24751=_a1;
return ((_n_c_24751+0.5)-(this->_n_cols_24744/2.0));}));
this->_n_Y_24749=d::Array<float,true>(d::from(this->_n_rows_24745,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_r_24753=_a1;
return (((_n_r_24753+0.5)-(this->_n_rows_24745/2.0))*2.0);}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_24770> _a1) mutable ->d::String{double _n_t_24754=_a0;
auto _n_binding_24777=(d::present(_a1)?_a1:([&](){auto _n_object_24776=std::make_shared<_n_Record_24770>();return _n_object_24776;})());
bool _n_paper_24755=(d::present(_n_binding_24777->_p_paper)?d::read(_n_binding_24777->_p_paper):false);
{
double _n_a_24756=(_n_W_24742*_n_t_24754);
double _n_ca_24757=std::cos(_n_a_24756);
double _n_sa_24758=std::sin(_n_a_24756);
double _n_cx_24759=(14.0*std::sin(_n_a_24756));
double _n_cy_24760=(9.0*std::cos((2.0*_n_a_24756)));
d::Array<d::String,false> _n_lines_24761=d::Array<d::String,false>{};
{double _n_r_24762=0.0;
for(;d::truth((_n_r_24762<this->_n_rows_24745));(void)((_n_r_24762++))){d::check_cancel();double _n_y_24763=d::at(this->_n_Y_24749,_n_r_24762);
{double _n_c_24764=0.0;
for(;d::truth((_n_c_24764<this->_n_cols_24744));(void)((_n_c_24764++))){d::check_cancel();double _n_x_24765=d::at(this->_n_X_24748,_n_c_24764);
double _n_v_24766=std::sin(((_n_x_24765*0.11)+(3.0*_n_a_24756)));
(void)((_n_v_24766=(_n_v_24766+std::sin(((_n_y_24763*0.13)-(2.0*_n_a_24756))))));
(void)((_n_v_24766=(_n_v_24766+std::sin(((((_n_x_24765*_n_ca_24757)+(_n_y_24763*_n_sa_24758))*0.09)+(4.0*_n_a_24756))))));
(void)((_n_v_24766=(_n_v_24766+std::sin(((d::hypot(std::initializer_list<double>{(_n_x_24765-_n_cx_24759),(_n_y_24763-_n_cy_24760)})*0.17)-(5.0*_n_a_24756))))));
double _n_u_24767=((_n_v_24766*_n_GAIN_24743)+(_n_a_24756/ascii::PI));
double _n_k_24768=std::fabs((_n_u_24767-(2.0*std::floor(((_n_u_24767/2.0)+0.5)))));
double _n_i_24769=([&](){auto _n_argument_24778=(this->_n_N_24746-1.0);auto _n_argument_24779=std::floor((_n_k_24768*this->_n_N_24746));return d::minimum({_n_argument_24778,_n_argument_24779});})();
(void)(([&](){auto&& _n_array_24780=this->_n_out_24747;auto _n_index_24781=_n_c_24764;auto _n_value_24782=d::at(_n_RAMP_24740,(d::truth(_n_paper_24755)?((this->_n_N_24746-1.0)-_n_i_24769):_n_i_24769));d::put(_n_array_24780,_n_index_24781,_n_value_24782);return _n_value_24782;})());
}}
(void)(_n_lines_24761.push(d::join(this->_n_out_24747,d::String(u""))));
}}
return d::join(_n_lines_24761,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("plasma").cols)*ascii::catalog_meta("plasma").rows);auto _env=std::make_shared<_n_Record_24770>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &plasma_meta(){return catalog_meta("plasma");}
std::unique_ptr<Piece> make_plasma(const AsciiPieceOptions &o){return std::make_unique<Native_plasma>(o);}
}
