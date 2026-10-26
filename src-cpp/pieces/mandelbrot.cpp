// Direct, statically typed C++ from src/pieces/mandelbrot.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19996;
struct _n_Record_20041;
struct _n_Record_19996{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19996> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19996>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_20041{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20041> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20041>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_19996> _n_meta_19995=[](){return ([&](){auto _n_object_20044=std::make_shared<_n_Record_19996>();_n_object_20044->_p_name=d::String(u"mandelbrot");_n_object_20044->_p_category=d::String(u"generative");_n_object_20044->_p_note=d::String(u"a slow zoom into seahorse valley and back out again");_n_object_20044->_p_cols=64.0;_n_object_20044->_p_rows=26.0;_n_object_20044->_p_fps=15.0;return _n_object_20044;})();}();
const d::String _n_RAMP_19997=[](){return d::String(u" .:-=+*#%@");}();
const double _n_P_19998=[](){return 48.0;}();
const double _n_T0_19999=[](){return 1.5;}();
const double _n_DEEP_20000=[](){return std::log(6000.0);}();
const double _n_TX_20001=[](){return (-d::number(0.74435));}();
const double _n_TY_20002=[](){return 0.12119;}();
const double _n_CX_20003=[](){return (-d::number(0.75));}();
const double _n_SPAN_20004=[](){return 3.0;}();
const double _n_SS_20005=[](){return 2.0;}();
const double _n_WIDE_20006=[](){return 3.0;}();
const double _n_NARROW_20007=[](){return 1.2;}();

struct Native_mandelbrot final:ascii::Piece{
double _n_cols_20008{};
double _n_rows_20009{};
double _n_N_20010{};
double _n_S_20011{};
std::function<d::String(double,std::shared_ptr<_n_Record_20041>)> _render;

explicit Native_mandelbrot(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_20045=_n_meta_19995;
this->_n_cols_20008=_n_binding_20045->_p_cols;
this->_n_rows_20009=_n_binding_20045->_p_rows;
this->_n_N_20010=double(_n_RAMP_19997.size());
this->_n_S_20011=(_n_SS_20005*_n_SS_20005);
_render=[=]( double _a0,std::shared_ptr<_n_Record_20041> _a1) mutable ->d::String{double _n_t_20012=_a0;
auto _n_binding_20048=(d::present(_a1)?_a1:([&](){auto _n_object_20047=std::make_shared<_n_Record_20041>();return _n_object_20047;})());
bool _n_paper_20013=(d::present(_n_binding_20048->_p_paper)?d::read(_n_binding_20048->_p_paper):false);
{
double _n_z_20014=std::exp(((_n_DEEP_20000*(1.0-std::cos((((2.0*ascii::PI)*(_n_t_20012+_n_T0_19999))/_n_P_19998))))/2.0));
double _n_cx_20015=(_n_TX_20001+((_n_CX_20003-_n_TX_20001)/_n_z_20014));
double _n_cy_20016=(_n_TY_20002-(_n_TY_20002/_n_z_20014));
double _n_dx_20017=((_n_SPAN_20004/_n_z_20014)/this->_n_cols_20008);
double _n_dy_20018=(_n_dx_20017*2.0);
double _n_max_20019=d::round((120.0+(60.0*std::log2(_n_z_20014))));
double _n_edge_20020=(_n_WIDE_20006+(((_n_NARROW_20007-_n_WIDE_20006)*std::log(_n_z_20014))/_n_DEEP_20000));
d::Array<d::String,false> _n_lines_20021=d::Array<d::String,false>{};
{double _n_r_20022=0.0;
for(;d::truth((_n_r_20022<this->_n_rows_20009));(void)((_n_r_20022++))){d::check_cancel();d::String _n_s_20023=d::String(u"");
{double _n_c_20024=0.0;
for(;d::truth((_n_c_20024<this->_n_cols_20008));(void)((_n_c_20024++))){d::check_cancel();double _n_ink_20025=0.0;
double _n_inside_20026=0.0;
{double _n_j_20027=0.0;
for(;d::truth((_n_j_20027<this->_n_S_20011));(void)((_n_j_20027++))){d::check_cancel();double _n_x0_20028=(_n_cx_20015+(((_n_c_20024+((d::mod(_n_j_20027,_n_SS_20005)+0.5)/_n_SS_20005))-(this->_n_cols_20008/2.0))*_n_dx_20017));
double _n_y0_20029=(_n_cy_20016-(((_n_r_20022+((std::floor((_n_j_20027/_n_SS_20005))+0.5)/_n_SS_20005))-(this->_n_rows_20009/2.0))*_n_dy_20018));
double _n_q_20030=(std::pow((_n_x0_20028-0.25),2.0)+(_n_y0_20029*_n_y0_20029));
if((d::truth(((_n_q_20030*((_n_q_20030+_n_x0_20028)-0.25))<((0.25*_n_y0_20029)*_n_y0_20029)))||d::truth(((std::pow((_n_x0_20028+1.0),2.0)+(_n_y0_20029*_n_y0_20029))<0.0625)))){d::check_cancel();(void)((_n_inside_20026++));
continue;
}
double _n_x_20031=0.0;
double _n_y_20032=0.0;
double _n_u_20033=0.0;
double _n_v_20034=0.0;
double _n_n_20035=0.0;
double _n_m_20036=0.0;
{for(;d::truth((_n_n_20035<_n_max_20019));(void)((_n_n_20035++))){d::check_cancel();double _n_nu_20037=((2.0*((_n_x_20031*_n_u_20033)-(_n_y_20032*_n_v_20034)))+1.0);
(void)((_n_v_20034=(2.0*((_n_x_20031*_n_v_20034)+(_n_y_20032*_n_u_20033)))));
(void)((_n_u_20033=_n_nu_20037));
double _n_xx_20038=(_n_x_20031*_n_x_20031);
double _n_yy_20039=(_n_y_20032*_n_y_20032);
(void)((_n_y_20032=(((2.0*_n_x_20031)*_n_y_20032)+_n_y0_20029)));
(void)((_n_x_20031=((_n_xx_20038-_n_yy_20039)+_n_x0_20028)));
(void)((_n_m_20036=((_n_x_20031*_n_x_20031)+(_n_y_20032*_n_y_20032))));
if(d::truth((_n_m_20036>1000000.0))){d::check_cancel();break;
}
}}
if(d::truth((_n_n_20035==_n_max_20019))){d::check_cancel();(void)((_n_inside_20026++));
continue;
}
double _n_d_20040=(([&](){auto _n_left_20049=([&](){auto _n_left_20051=(0.5*std::sqrt(_n_m_20036));auto _n_right_20052=std::log(_n_m_20036);return (_n_left_20051*_n_right_20052);})();auto _n_right_20050=d::hypot(std::initializer_list<double>{_n_u_20033,_n_v_20034});return (_n_left_20049/_n_right_20050);})()/_n_dx_20017);
(void)((_n_ink_20025=(_n_ink_20025+([&](){auto _n_argument_20053=0.0;auto _n_argument_20054=(1.0-(std::log2((1.0+_n_d_20040))/_n_edge_20020));return d::maximum({_n_argument_20053,_n_argument_20054});})())));
}}
(void)((_n_s_20023=(d::string(_n_s_20023)+d::string((d::truth((_n_inside_20026==this->_n_S_20011))?(d::truth(_n_paper_20013)?d::String(u"@"):d::String(u" ")):d::at(_n_RAMP_19997,([&](){auto _n_argument_20055=(this->_n_N_20010-1.0);auto _n_argument_20056=std::floor((((_n_ink_20025+_n_inside_20026)/this->_n_S_20011)*this->_n_N_20010));return d::minimum({_n_argument_20055,_n_argument_20056});})()))))));
}}
(void)(_n_lines_20021.push(_n_s_20023));
}}
return d::join(_n_lines_20021,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("mandelbrot").cols)*ascii::catalog_meta("mandelbrot").rows);auto _env=std::make_shared<_n_Record_20041>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &mandelbrot_meta(){return catalog_meta("mandelbrot");}
std::unique_ptr<Piece> make_mandelbrot(const AsciiPieceOptions &o){return std::make_unique<Native_mandelbrot>(o);}
}
