// Direct, statically typed C++ from src/pieces/rotozoomer.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26139;
struct _n_Record_26185;
struct _n_Record_26139{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_26139> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26139>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_26185{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26185> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26185>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_tex_26149(double _a0,double _a1);
std::shared_ptr<_n_Record_26139> _n_meta_26138=[](){return ([&](){auto _n_object_26188=std::make_shared<_n_Record_26139>();_n_object_26188->_p_name=d::String(u"rotozoomer");_n_object_26188->_p_category=d::String(u"effects");_n_object_26188->_p_note=d::String(u"a brick wall texture turning and zooming about the centre");_n_object_26188->_p_cols=64.0;_n_object_26188->_p_rows=24.0;_n_object_26188->_p_fps=30.0;return _n_object_26188;})();}();
const d::String _n_SHADES_26140=[](){return d::String(u" ░▒▓█");}();
d::Array<double,false> _n_CUT_26141=[](){return d::Array<double,false>{0.12,0.44,0.78,0.93};}();
const double _n_P_26142=[](){return 16.0;}();
const double _n_W_26143=[](){return ((2.0*ascii::PI)/_n_P_26142);}();
const double _n_M_26144=[](){return 0.085;}();
const double _n_B_26145=[](){return 0.15;}();
const double _n_FACE_26146=[](){return 0.66;}();
const double _n_MORTAR_26147=[](){return 0.02;}();
d::Array<double,false> _n_EDGE_26148=[](){return d::Array<double,false>{1.0,0.86,0.3,0.22};}();
double _n_tex_26149(double _a0,double _a1){double _n_u_26155=_a0;
double _n_v_26156=_a1;
{
double _n_iv_26157=std::floor(_n_v_26156);
double _n_x_26158=(_n_u_26155+double(d::i32(_n_iv_26157)&d::i32(1.0)));
double _n_lx_26159=((_n_x_26158-(2.0*std::floor((_n_x_26158/2.0))))-_n_M_26144);
double _n_ly_26160=((_n_v_26156-_n_iv_26157)-_n_M_26144);
double _n_w_26161=(2.0-(2.0*_n_M_26144));
double _n_h_26162=(1.0-(2.0*_n_M_26144));
if((((d::truth((_n_lx_26159<0.0))||d::truth((_n_ly_26160<0.0)))||d::truth((_n_lx_26159>_n_w_26161)))||d::truth((_n_ly_26160>_n_h_26162)))){d::check_cancel();return _n_MORTAR_26147;
}
double _n_e_26163=d::minimum({_n_ly_26160,_n_lx_26159,(_n_w_26161-_n_lx_26159),(_n_h_26162-_n_ly_26160)});
if(d::truth((_n_e_26163>_n_B_26145))){d::check_cancel();return _n_FACE_26146;
}
return d::at(_n_EDGE_26148,(d::truth((_n_e_26163==_n_ly_26160))?0.0:(d::truth((_n_e_26163==_n_lx_26159))?1.0:(d::truth((_n_e_26163==(_n_w_26161-_n_lx_26159)))?2.0:3.0))));

}
}

struct Native_rotozoomer final:ascii::Piece{
double _n_cols_26150{};
double _n_rows_26151{};
d::Array<d::String,false> _n_out_26152{};
d::Array<double,false> _n_SX_26153{};
d::Array<double,false> _n_SY_26154{};
std::function<d::String(double,std::shared_ptr<_n_Record_26185>)> _render;

explicit Native_rotozoomer(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26189=_n_meta_26138;
this->_n_cols_26150=_n_binding_26189->_p_cols;
this->_n_rows_26151=_n_binding_26189->_p_rows;
this->_n_out_26152=d::Array<d::String,false>(size_t(this->_n_cols_26150));
this->_n_SX_26153=d::Array<double,false>{};
this->_n_SY_26154=d::Array<double,false>{};
{double _n_j_26164=0.0;
for(;d::truth((_n_j_26164<3.0));(void)((_n_j_26164++))){d::check_cancel();{double _n_i_26165=0.0;
for(;d::truth((_n_i_26165<3.0));(void)((_n_i_26165++))){d::check_cancel();(void)(this->_n_SX_26153.push(((_n_i_26165-1.0)/3.0)));
(void)(this->_n_SY_26154.push((((_n_j_26164-1.0)/3.0)*2.0)));
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_26185> _a1) mutable ->d::String{double _n_t_26166=_a0;
auto _n_binding_26192=(d::present(_a1)?_a1:([&](){auto _n_object_26191=std::make_shared<_n_Record_26185>();return _n_object_26191;})());
bool _n_paper_26167=(d::present(_n_binding_26192->_p_paper)?d::read(_n_binding_26192->_p_paper):false);
{
double _n_th_26168=((_n_W_26143*_n_t_26166)+0.08);
double _n_a_26169=(_n_th_26168-(0.14*std::sin((4.0*_n_th_26168))));
double _n_L_26170=(13.0*std::exp((0.25*std::cos(((2.0*_n_W_26143)*_n_t_26166)))));
double _n_ca_26171=(std::cos(_n_a_26169)/_n_L_26170);
double _n_sa_26172=(std::sin(_n_a_26169)/_n_L_26170);
double _n_u0_26173=((((4.0*_n_t_26166)/_n_P_26142)+(0.7*std::sin((_n_W_26143*_n_t_26166))))+0.35);
double _n_v0_26174=((((2.0*_n_t_26166)/_n_P_26142)+(0.7*std::cos((_n_W_26143*_n_t_26166))))-0.2);
d::Array<d::String,false> _n_lines_26175=d::Array<d::String,false>{};
{double _n_r_26176=0.0;
for(;d::truth((_n_r_26176<this->_n_rows_26151));(void)((_n_r_26176++))){d::check_cancel();double _n_y_26177=(((_n_r_26176+0.5)-(this->_n_rows_26151/2.0))*2.0);
{double _n_c_26178=0.0;
for(;d::truth((_n_c_26178<this->_n_cols_26150));(void)((_n_c_26178++))){d::check_cancel();double _n_x_26179=((_n_c_26178+0.5)-(this->_n_cols_26150/2.0));
double _n_v_26180=0.0;
{double _n_s_26181=0.0;
for(;d::truth((_n_s_26181<9.0));(void)((_n_s_26181++))){d::check_cancel();double _n_px_26182=(_n_x_26179+d::at(this->_n_SX_26153,_n_s_26181));
double _n_py_26183=(_n_y_26177+d::at(this->_n_SY_26154,_n_s_26181));
(void)((_n_v_26180=(_n_v_26180+_n_tex_26149((((_n_px_26182*_n_ca_26171)+(_n_py_26183*_n_sa_26172))+_n_u0_26173),(((_n_py_26183*_n_ca_26171)-(_n_px_26182*_n_sa_26172))+_n_v0_26174)))));
}}
(void)((_n_v_26180=(_n_v_26180/9.0)));
double _n_i_26184=0.0;
while((d::truth((_n_i_26184<4.0))&&d::truth((_n_v_26180>d::at(_n_CUT_26141,_n_i_26184))))){d::check_cancel();(void)((_n_i_26184++));
}
(void)(([&](){auto&& _n_array_26193=this->_n_out_26152;auto _n_index_26194=_n_c_26178;auto _n_value_26195=d::at(_n_SHADES_26140,(d::truth(_n_paper_26167)?(4.0-_n_i_26184):_n_i_26184));d::put(_n_array_26193,_n_index_26194,_n_value_26195);return _n_value_26195;})());
}}
(void)(_n_lines_26175.push(d::join(this->_n_out_26152,d::String(u""))));
}}
return d::join(_n_lines_26175,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rotozoomer").cols)*ascii::catalog_meta("rotozoomer").rows);auto _env=std::make_shared<_n_Record_26185>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rotozoomer_meta(){return catalog_meta("rotozoomer");}
std::unique_ptr<Piece> make_rotozoomer(const AsciiPieceOptions &o){return std::make_unique<Native_rotozoomer>(o);}
}
