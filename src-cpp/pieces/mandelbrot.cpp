// Direct, statically typed C++ from src/pieces/mandelbrot.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_19995;
struct _n_Record_20040;
struct _n_Record_19995{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_19995> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_19995>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_20040{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_20040> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_20040>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_19995> _n_meta_19994=[](){return ([&](){auto _n_object_20043=std::make_shared<_n_Record_19995>();_n_object_20043->_p_name=d::String(u"mandelbrot");_n_object_20043->_p_category=d::String(u"generative");_n_object_20043->_p_note=d::String(u"a slow zoom into seahorse valley and back out again");_n_object_20043->_p_cols=64.0;_n_object_20043->_p_rows=26.0;_n_object_20043->_p_fps=15.0;return _n_object_20043;})();}();
const d::String _n_RAMP_19996=[](){return d::String(u" .:-=+*#%@");}();
const double _n_P_19997=[](){return 48.0;}();
const double _n_T0_19998=[](){return 1.5;}();
const double _n_DEEP_19999=[](){return std::log(6000.0);}();
const double _n_TX_20000=[](){return (-d::number(0.74435));}();
const double _n_TY_20001=[](){return 0.12119;}();
const double _n_CX_20002=[](){return (-d::number(0.75));}();
const double _n_SPAN_20003=[](){return 3.0;}();
const double _n_SS_20004=[](){return 2.0;}();
const double _n_WIDE_20005=[](){return 3.0;}();
const double _n_NARROW_20006=[](){return 1.2;}();

struct Native_mandelbrot final:ascii::Piece{
double _n_cols_20007{};
double _n_rows_20008{};
double _n_N_20009{};
double _n_S_20010{};
std::function<d::String(double,std::shared_ptr<_n_Record_20040>)> _render;

explicit Native_mandelbrot(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_20044=_n_meta_19994;
this->_n_cols_20007=_n_binding_20044->_p_cols;
this->_n_rows_20008=_n_binding_20044->_p_rows;
this->_n_N_20009=double(_n_RAMP_19996.size());
this->_n_S_20010=(_n_SS_20004*_n_SS_20004);
_render=[=]( double _a0,std::shared_ptr<_n_Record_20040> _a1) mutable ->d::String{double _n_t_20011=_a0;
auto _n_binding_20047=(d::present(_a1)?_a1:([&](){auto _n_object_20046=std::make_shared<_n_Record_20040>();return _n_object_20046;})());
bool _n_paper_20012=(d::present(_n_binding_20047->_p_paper)?d::read(_n_binding_20047->_p_paper):false);
{
double _n_z_20013=std::exp(((_n_DEEP_19999*(1.0-std::cos((((2.0*ascii::PI)*(_n_t_20011+_n_T0_19998))/_n_P_19997))))/2.0));
double _n_cx_20014=(_n_TX_20000+((_n_CX_20002-_n_TX_20000)/_n_z_20013));
double _n_cy_20015=(_n_TY_20001-(_n_TY_20001/_n_z_20013));
double _n_dx_20016=((_n_SPAN_20003/_n_z_20013)/this->_n_cols_20007);
double _n_dy_20017=(_n_dx_20016*2.0);
double _n_max_20018=d::round((120.0+(60.0*std::log2(_n_z_20013))));
double _n_edge_20019=(_n_WIDE_20005+(((_n_NARROW_20006-_n_WIDE_20005)*std::log(_n_z_20013))/_n_DEEP_19999));
d::Array<d::String,false> _n_lines_20020=d::Array<d::String,false>{};
{double _n_r_20021=0.0;
for(;d::truth((_n_r_20021<this->_n_rows_20008));(void)((_n_r_20021++))){d::check_cancel();d::String _n_s_20022=d::String(u"");
{double _n_c_20023=0.0;
for(;d::truth((_n_c_20023<this->_n_cols_20007));(void)((_n_c_20023++))){d::check_cancel();double _n_ink_20024=0.0;
double _n_inside_20025=0.0;
{double _n_j_20026=0.0;
for(;d::truth((_n_j_20026<this->_n_S_20010));(void)((_n_j_20026++))){d::check_cancel();double _n_x0_20027=(_n_cx_20014+(((_n_c_20023+((d::mod(_n_j_20026,_n_SS_20004)+0.5)/_n_SS_20004))-(this->_n_cols_20007/2.0))*_n_dx_20016));
double _n_y0_20028=(_n_cy_20015-(((_n_r_20021+((std::floor((_n_j_20026/_n_SS_20004))+0.5)/_n_SS_20004))-(this->_n_rows_20008/2.0))*_n_dy_20017));
double _n_q_20029=(std::pow((_n_x0_20027-0.25),2.0)+(_n_y0_20028*_n_y0_20028));
if((d::truth(((_n_q_20029*((_n_q_20029+_n_x0_20027)-0.25))<((0.25*_n_y0_20028)*_n_y0_20028)))||d::truth(((std::pow((_n_x0_20027+1.0),2.0)+(_n_y0_20028*_n_y0_20028))<0.0625)))){d::check_cancel();(void)((_n_inside_20025++));
continue;
}
double _n_x_20030=0.0;
double _n_y_20031=0.0;
double _n_u_20032=0.0;
double _n_v_20033=0.0;
double _n_n_20034=0.0;
double _n_m_20035=0.0;
{for(;d::truth((_n_n_20034<_n_max_20018));(void)((_n_n_20034++))){d::check_cancel();double _n_nu_20036=((2.0*((_n_x_20030*_n_u_20032)-(_n_y_20031*_n_v_20033)))+1.0);
(void)((_n_v_20033=(2.0*((_n_x_20030*_n_v_20033)+(_n_y_20031*_n_u_20032)))));
(void)((_n_u_20032=_n_nu_20036));
double _n_xx_20037=(_n_x_20030*_n_x_20030);
double _n_yy_20038=(_n_y_20031*_n_y_20031);
(void)((_n_y_20031=(((2.0*_n_x_20030)*_n_y_20031)+_n_y0_20028)));
(void)((_n_x_20030=((_n_xx_20037-_n_yy_20038)+_n_x0_20027)));
(void)((_n_m_20035=((_n_x_20030*_n_x_20030)+(_n_y_20031*_n_y_20031))));
if(d::truth((_n_m_20035>1000000.0))){d::check_cancel();break;
}
}}
if(d::truth((_n_n_20034==_n_max_20018))){d::check_cancel();(void)((_n_inside_20025++));
continue;
}
double _n_d_20039=(([&](){auto _n_left_20048=([&](){auto _n_left_20050=(0.5*std::sqrt(_n_m_20035));auto _n_right_20051=std::log(_n_m_20035);return (_n_left_20050*_n_right_20051);})();auto _n_right_20049=d::hypot(std::initializer_list<double>{_n_u_20032,_n_v_20033});return (_n_left_20048/_n_right_20049);})()/_n_dx_20016);
(void)((_n_ink_20024=(_n_ink_20024+([&](){auto _n_argument_20052=0.0;auto _n_argument_20053=(1.0-(std::log2((1.0+_n_d_20039))/_n_edge_20019));return d::maximum({_n_argument_20052,_n_argument_20053});})())));
}}
(void)((_n_s_20022=(d::string(_n_s_20022)+d::string((d::truth((_n_inside_20025==this->_n_S_20010))?(d::truth(_n_paper_20012)?d::String(u"@"):d::String(u" ")):d::at(_n_RAMP_19996,([&](){auto _n_argument_20054=(this->_n_N_20009-1.0);auto _n_argument_20055=std::floor((((_n_ink_20024+_n_inside_20025)/this->_n_S_20010)*this->_n_N_20009));return d::minimum({_n_argument_20054,_n_argument_20055});})()))))));
}}
(void)(_n_lines_20020.push(_n_s_20022));
}}
return d::join(_n_lines_20020,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("mandelbrot").cols)*ascii::catalog_meta("mandelbrot").rows);auto _env=std::make_shared<_n_Record_20040>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &mandelbrot_meta(){return catalog_meta("mandelbrot");}
std::unique_ptr<Piece> make_mandelbrot(const AsciiPieceOptions &o){return std::make_unique<Native_mandelbrot>(o);}
}
