// Direct, statically typed C++ from src/pieces/rotozoomer.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_26138;
struct _n_Record_26184;
struct _n_Record_26138{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_26138> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26138>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_26184{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_26184> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_26184>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_tex_26148(double _a0,double _a1);
std::shared_ptr<_n_Record_26138> _n_meta_26137=[](){return ([&](){auto _n_object_26187=std::make_shared<_n_Record_26138>();_n_object_26187->_p_name=d::String(u"rotozoomer");_n_object_26187->_p_category=d::String(u"effects");_n_object_26187->_p_note=d::String(u"a brick wall texture turning and zooming about the centre");_n_object_26187->_p_cols=64.0;_n_object_26187->_p_rows=24.0;_n_object_26187->_p_fps=30.0;return _n_object_26187;})();}();
const d::String _n_SHADES_26139=[](){return d::String(u" ░▒▓█");}();
d::Array<double,false> _n_CUT_26140=[](){return d::Array<double,false>{0.12,0.44,0.78,0.93};}();
const double _n_P_26141=[](){return 16.0;}();
const double _n_W_26142=[](){return ((2.0*ascii::PI)/_n_P_26141);}();
const double _n_M_26143=[](){return 0.085;}();
const double _n_B_26144=[](){return 0.15;}();
const double _n_FACE_26145=[](){return 0.66;}();
const double _n_MORTAR_26146=[](){return 0.02;}();
d::Array<double,false> _n_EDGE_26147=[](){return d::Array<double,false>{1.0,0.86,0.3,0.22};}();
double _n_tex_26148(double _a0,double _a1){double _n_u_26154=_a0;
double _n_v_26155=_a1;
{
double _n_iv_26156=std::floor(_n_v_26155);
double _n_x_26157=(_n_u_26154+double(d::i32(_n_iv_26156)&d::i32(1.0)));
double _n_lx_26158=((_n_x_26157-(2.0*std::floor((_n_x_26157/2.0))))-_n_M_26143);
double _n_ly_26159=((_n_v_26155-_n_iv_26156)-_n_M_26143);
double _n_w_26160=(2.0-(2.0*_n_M_26143));
double _n_h_26161=(1.0-(2.0*_n_M_26143));
if((((d::truth((_n_lx_26158<0.0))||d::truth((_n_ly_26159<0.0)))||d::truth((_n_lx_26158>_n_w_26160)))||d::truth((_n_ly_26159>_n_h_26161)))){d::check_cancel();return _n_MORTAR_26146;
}
double _n_e_26162=d::minimum({_n_ly_26159,_n_lx_26158,(_n_w_26160-_n_lx_26158),(_n_h_26161-_n_ly_26159)});
if(d::truth((_n_e_26162>_n_B_26144))){d::check_cancel();return _n_FACE_26145;
}
return d::at(_n_EDGE_26147,(d::truth((_n_e_26162==_n_ly_26159))?0.0:(d::truth((_n_e_26162==_n_lx_26158))?1.0:(d::truth((_n_e_26162==(_n_w_26160-_n_lx_26158)))?2.0:3.0))));

}
}

struct Native_rotozoomer final:ascii::Piece{
double _n_cols_26149{};
double _n_rows_26150{};
d::Array<d::String,false> _n_out_26151{};
d::Array<double,false> _n_SX_26152{};
d::Array<double,false> _n_SY_26153{};
std::function<d::String(double,std::shared_ptr<_n_Record_26184>)> _render;

explicit Native_rotozoomer(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_26188=_n_meta_26137;
this->_n_cols_26149=_n_binding_26188->_p_cols;
this->_n_rows_26150=_n_binding_26188->_p_rows;
this->_n_out_26151=d::Array<d::String,false>(size_t(this->_n_cols_26149));
this->_n_SX_26152=d::Array<double,false>{};
this->_n_SY_26153=d::Array<double,false>{};
{double _n_j_26163=0.0;
for(;d::truth((_n_j_26163<3.0));(void)((_n_j_26163++))){d::check_cancel();{double _n_i_26164=0.0;
for(;d::truth((_n_i_26164<3.0));(void)((_n_i_26164++))){d::check_cancel();(void)(this->_n_SX_26152.push(((_n_i_26164-1.0)/3.0)));
(void)(this->_n_SY_26153.push((((_n_j_26163-1.0)/3.0)*2.0)));
}}
}}
_render=[=]( double _a0,std::shared_ptr<_n_Record_26184> _a1) mutable ->d::String{double _n_t_26165=_a0;
auto _n_binding_26191=(d::present(_a1)?_a1:([&](){auto _n_object_26190=std::make_shared<_n_Record_26184>();return _n_object_26190;})());
bool _n_paper_26166=(d::present(_n_binding_26191->_p_paper)?d::read(_n_binding_26191->_p_paper):false);
{
double _n_th_26167=((_n_W_26142*_n_t_26165)+0.08);
double _n_a_26168=(_n_th_26167-(0.14*std::sin((4.0*_n_th_26167))));
double _n_L_26169=(13.0*std::exp((0.25*std::cos(((2.0*_n_W_26142)*_n_t_26165)))));
double _n_ca_26170=(std::cos(_n_a_26168)/_n_L_26169);
double _n_sa_26171=(std::sin(_n_a_26168)/_n_L_26169);
double _n_u0_26172=((((4.0*_n_t_26165)/_n_P_26141)+(0.7*std::sin((_n_W_26142*_n_t_26165))))+0.35);
double _n_v0_26173=((((2.0*_n_t_26165)/_n_P_26141)+(0.7*std::cos((_n_W_26142*_n_t_26165))))-0.2);
d::Array<d::String,false> _n_lines_26174=d::Array<d::String,false>{};
{double _n_r_26175=0.0;
for(;d::truth((_n_r_26175<this->_n_rows_26150));(void)((_n_r_26175++))){d::check_cancel();double _n_y_26176=(((_n_r_26175+0.5)-(this->_n_rows_26150/2.0))*2.0);
{double _n_c_26177=0.0;
for(;d::truth((_n_c_26177<this->_n_cols_26149));(void)((_n_c_26177++))){d::check_cancel();double _n_x_26178=((_n_c_26177+0.5)-(this->_n_cols_26149/2.0));
double _n_v_26179=0.0;
{double _n_s_26180=0.0;
for(;d::truth((_n_s_26180<9.0));(void)((_n_s_26180++))){d::check_cancel();double _n_px_26181=(_n_x_26178+d::at(this->_n_SX_26152,_n_s_26180));
double _n_py_26182=(_n_y_26176+d::at(this->_n_SY_26153,_n_s_26180));
(void)((_n_v_26179=(_n_v_26179+_n_tex_26148((((_n_px_26181*_n_ca_26170)+(_n_py_26182*_n_sa_26171))+_n_u0_26172),(((_n_py_26182*_n_ca_26170)-(_n_px_26181*_n_sa_26171))+_n_v0_26173)))));
}}
(void)((_n_v_26179=(_n_v_26179/9.0)));
double _n_i_26183=0.0;
while((d::truth((_n_i_26183<4.0))&&d::truth((_n_v_26179>d::at(_n_CUT_26140,_n_i_26183))))){d::check_cancel();(void)((_n_i_26183++));
}
(void)(([&](){auto&& _n_array_26192=this->_n_out_26151;auto _n_index_26193=_n_c_26177;auto _n_value_26194=d::at(_n_SHADES_26139,(d::truth(_n_paper_26166)?(4.0-_n_i_26183):_n_i_26183));d::put(_n_array_26192,_n_index_26193,_n_value_26194);return _n_value_26194;})());
}}
(void)(_n_lines_26174.push(d::join(this->_n_out_26151,d::String(u""))));
}}
return d::join(_n_lines_26174,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("rotozoomer").cols)*ascii::catalog_meta("rotozoomer").rows);auto _env=std::make_shared<_n_Record_26184>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &rotozoomer_meta(){return catalog_meta("rotozoomer");}
std::unique_ptr<Piece> make_rotozoomer(const AsciiPieceOptions &o){return std::make_unique<Native_rotozoomer>(o);}
}
