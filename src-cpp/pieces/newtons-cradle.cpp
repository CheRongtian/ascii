// Direct, statically typed C++ from src/pieces/newtons-cradle.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22176;
struct _n_Record_22177;
struct _n_Record_22274;
struct _n_Record_22275;
struct _n_Record_22176{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_22177> _p_options{};
static std::shared_ptr<_n_Record_22176> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22176>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_22177>>(j["options"]);return out;}
};
struct _n_Record_22177{
double _p_lifted{};
static std::shared_ptr<_n_Record_22177> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22177>();out->_p_lifted=d::decode<double>(j["lifted"]);return out;}
};
struct _n_Record_22274{
std::optional<double> _p_lifted{};
static std::shared_ptr<_n_Record_22274> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22274>();out->_p_lifted=d::decode<std::optional<double>>(j["lifted"]);return out;}
};
struct _n_Record_22275{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22275> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22275>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_22176> _n_meta_22175=[](){return ([&](){auto _n_object_22280=std::make_shared<_n_Record_22176>();_n_object_22280->_p_name=d::String(u"newton's cradle");_n_object_22280->_p_category=d::String(u"physics");_n_object_22280->_p_note=d::String(u"five steel balls on strings passing one knock back and forth");_n_object_22280->_p_cols=74.0;_n_object_22280->_p_rows=17.0;_n_object_22280->_p_fps=30.0;_n_object_22280->_p_options=([&](){auto _n_object_22282=std::make_shared<_n_Record_22177>();_n_object_22282->_p_lifted=1.0;return _n_object_22282;})();return _n_object_22280;})();}();
const d::String _n_RAMP_22178=[](){return d::String(u" .:-=+*#%@");}();
const double _n_N_22179=[](){return 5.0;}();
const double _n_R_22180=[](){return 2.0;}();
const double _n_L_22181=[](){return 11.0;}();
const double _n_TOP_22182=[](){return 2.0;}();
const double _n_AMP_22183=[](){return ((24.0*ascii::PI)/180.0);}();
const double _n_PERIOD_22184=[](){return 1.5;}();
const double _n_KNOCK_22185=[](){return 0.07;}();
const double _n_SPAN_22186=[](){return 3.0;}();

struct Native_newtons_cradle final:ascii::Piece{
double _n_lifted_22187{};
double _n_cols_22188{};
double _n_rows_22189{};
double _n_k_22190{};
double _n_cx_22191{};
d::Array<double,false> _n_pivots_22192{};
double _n_BASE_22193{};
double _n_RAIL_22194{};
double _n_LEG_22195{};
double _n_m_22196{};
double _n_LX_22197{};
double _n_LY_22198{};
double _n_LZ_22199{};
d::Array<d::String,false> _n_out_22200{};
std::function<d::String(double,std::shared_ptr<_n_Record_22275>)> _render;
void _n_put_22201(double _a0,double _a1,d::String _a2){double _n_c_22209=_a0;
double _n_r_22210=_a1;
d::String _n_g_22211=_a2;
{
(void)(((_n_c_22209=std::floor(_n_c_22209)),(_n_r_22210=std::floor(_n_r_22210))));
if((((d::truth((_n_c_22209>=0.0))&&d::truth((_n_c_22209<this->_n_cols_22188)))&&d::truth((_n_r_22210>=0.0)))&&d::truth((_n_r_22210<this->_n_rows_22189)))){d::check_cancel();(void)(([&](){auto&& _n_array_22295=this->_n_out_22200;auto _n_index_22296=((_n_r_22210*this->_n_cols_22188)+_n_c_22209);auto _n_value_22297=_n_g_22211;d::put(_n_array_22295,_n_index_22296,_n_value_22297);return _n_value_22297;})());
}

}
}

std::array<double,3> _n_pose_22202(double _a0){double _n_t_22212=_a0;
{
double _n_cyc_22213=(_n_PERIOD_22184+(2.0*_n_KNOCK_22185));
double _n_p_22214=d::mod((d::mod(_n_t_22212,_n_cyc_22213)+_n_cyc_22213),_n_cyc_22213);
double _n_w_22215=((2.0*ascii::PI)/_n_PERIOD_22184);
double _n_q_22216=(_n_PERIOD_22184/4.0);
if(d::truth((_n_p_22214<_n_q_22216))){d::check_cancel();return std::array<double,3>{((-d::number(_n_AMP_22183))*std::cos((_n_w_22215*_n_p_22214))),0.0,0.0};
}
if(d::truth((_n_p_22214<(_n_q_22216+_n_KNOCK_22185)))){d::check_cancel();return std::array<double,3>{0.0,0.0,std::sin(((ascii::PI*(_n_p_22214-_n_q_22216))/_n_KNOCK_22185))};
}
if(d::truth((_n_p_22214<((3.0*_n_q_22216)+_n_KNOCK_22185)))){d::check_cancel();return std::array<double,3>{0.0,(_n_AMP_22183*std::sin((_n_w_22215*((_n_p_22214-_n_q_22216)-_n_KNOCK_22185)))),0.0};
}
if(d::truth((_n_p_22214<((3.0*_n_q_22216)+(2.0*_n_KNOCK_22185))))){d::check_cancel();return std::array<double,3>{0.0,0.0,(-d::number(std::sin(((ascii::PI*((_n_p_22214-(3.0*_n_q_22216))-_n_KNOCK_22185))/_n_KNOCK_22185))))};
}
return std::array<double,3>{((-d::number(_n_AMP_22183))*std::sin((_n_w_22215*((_n_p_22214-(3.0*_n_q_22216))-(2.0*_n_KNOCK_22185))))),0.0,0.0};

}
}

void _n_line_22203(double _a0,double _a1,double _a2,double _a3){double _n_x0_22217=_a0;
double _n_y0_22218=_a1;
double _n_x1_22219=_a2;
double _n_y1_22220=_a3;
{
double _n_s_22221=((_n_x1_22219-_n_x0_22217)/(_n_y1_22220-_n_y0_22218));
d::String _n_g_22222=(d::truth((std::fabs(_n_s_22221)<0.2))?d::String(u"|"):(d::truth((_n_s_22221>0.0))?d::String(u"\\"):d::String(u"/")));
if(d::truth((std::fabs(_n_s_22221)<=1.0))){d::check_cancel();{double _n_r_22223=std::floor(_n_y0_22218);
for(;d::truth(((_n_r_22223+0.5)<_n_y1_22220));(void)((_n_r_22223++))){d::check_cancel();if(d::truth(((_n_r_22223+0.5)>=_n_y0_22218))){d::check_cancel();(void)(this->_n_put_22201((_n_x0_22217+(_n_s_22221*((_n_r_22223+0.5)-_n_y0_22218))),_n_r_22223,_n_g_22222));
}
}}
}else {d::check_cancel();auto _n_binding_22298=(d::truth((_n_x0_22217<_n_x1_22219))?std::array<double,2>{_n_x0_22217,_n_x1_22219}:std::array<double,2>{_n_x1_22219,_n_x0_22217});
double _n_a_22224=d::at(_n_binding_22298,0.0);
double _n_b_22225=d::at(_n_binding_22298,1.0);
{double _n_c_22226=std::floor(_n_a_22224);
for(;d::truth(((_n_c_22226+0.5)<_n_b_22225));(void)((_n_c_22226++))){d::check_cancel();if(d::truth(((_n_c_22226+0.5)>=_n_a_22224))){d::check_cancel();(void)(this->_n_put_22201(_n_c_22226,(_n_y0_22218+(((_n_c_22226+0.5)-_n_x0_22217)/_n_s_22221)),_n_g_22222));
}
}}
}

}
}

double _n_chrome_22204(double _a0,double _a1,double _a2){double _n_nx_22227=_a0;
double _n_ny_22228=_a1;
double _n_nz_22229=_a2;
{
double _n_ry_22230=((2.0*_n_nz_22229)*_n_ny_22228);
double _n_env_22231=(d::truth((_n_ry_22230>0.15))?(0.3+(0.25*_n_ry_22230)):(d::truth((_n_ry_22230>(-d::number(0.5))))?0.03:(0.5-(0.2*(_n_ry_22230+0.5)))));
double _n_spec_22232=std::pow(d::maximum({0.0,(((2.0*_n_nz_22229)*(((_n_nx_22227*this->_n_LX_22197)+(_n_ny_22228*this->_n_LY_22198))+(_n_nz_22229*this->_n_LZ_22199)))-this->_n_LZ_22199)}),10.0);
return ([&](){auto _n_argument_22299=1.0;auto _n_argument_22300=((_n_env_22231+(0.12*d::maximum({0.0,(((_n_nx_22227*this->_n_LX_22197)+(_n_ny_22228*this->_n_LY_22198))+(_n_nz_22229*this->_n_LZ_22199))})))+(3.5*_n_spec_22232));return d::minimum({_n_argument_22299,_n_argument_22300});})();

}
}

void _n_ball_22205(double _a0,double _a1,bool _a2){double _n_bx_22233=_a0;
double _n_by_22234=_a1;
bool _n_paper_22235=_a2;
{
d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false> _n_runs_22236=d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{};
{double _n_r_22237=std::floor((_n_by_22234-_n_R_22180));
for(;d::truth((_n_r_22237<(_n_by_22234+_n_R_22180)));(void)((_n_r_22237++))){d::check_cancel();d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_run_22238=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
(void)(_n_runs_22236.push(_n_run_22238));
{double _n_c_22239=std::floor((_n_bx_22233-(2.0*_n_R_22180)));
for(;d::truth((_n_c_22239<(_n_bx_22233+(2.0*_n_R_22180))));(void)((_n_c_22239++))){d::check_cancel();double _n_hit_22240=0.0;
double _n_v_22241=0.0;
double _n_cy_22242=0.0;
{double _n_j_22243=0.0;
for(;d::truth((_n_j_22243<4.0));(void)((_n_j_22243++))){d::check_cancel();{double _n_i_22244=0.0;
for(;d::truth((_n_i_22244<4.0));(void)((_n_i_22244++))){d::check_cancel();double _n_nx_22245=(((((_n_c_22239+0.125)+(_n_i_22244*0.25))-_n_bx_22233)/2.0)/_n_R_22180);
double _n_ny_22246=((-d::number((((_n_r_22237+0.125)+(_n_j_22243*0.25))-_n_by_22234)))/_n_R_22180);
double _n_q_22247=((_n_nx_22245*_n_nx_22245)+(_n_ny_22246*_n_ny_22246));
if(d::truth((_n_q_22247>=1.0))){d::check_cancel();continue;
}
(void)((_n_v_22241=(_n_v_22241+([&](){auto _n_argument_22301=_n_nx_22245;auto _n_argument_22302=_n_ny_22246;auto _n_argument_22303=std::sqrt((1.0-_n_q_22247));return this->_n_chrome_22204(_n_argument_22301,_n_argument_22302,_n_argument_22303);})())));
(void)((_n_hit_22240++));
(void)((_n_cy_22242=(_n_cy_22242+_n_j_22243)));
}}
}}
if(d::truth((_n_hit_22240<4.0))){d::check_cancel();continue;
}
if(d::truth((_n_hit_22240<6.0))){d::check_cancel();(void)(_n_run_22238.push(std::make_shared<std::tuple<double,double,d::String>>(_n_c_22239,_n_r_22237,(d::truth(((_n_cy_22242/_n_hit_22240)<1.5))?d::String(u"'"):(d::truth(((_n_cy_22242/_n_hit_22240)>2.0))?d::String(u"."):d::String(u"-"))))));
continue;
}
double _n_g_22248=([&](){auto _n_argument_22304=1.0;auto _n_argument_22305=d::round(((_n_v_22241/_n_hit_22240)*(double(_n_RAMP_22178.size())-1.0)));return d::maximum({_n_argument_22304,_n_argument_22305});})();
(void)(_n_run_22238.push(std::make_shared<std::tuple<double,double,d::String>>(_n_c_22239,_n_r_22237,d::at(_n_RAMP_22178,(d::truth(_n_paper_22235)?(double(_n_RAMP_22178.size())-_n_g_22248):_n_g_22248)))));
}}
}}
double _n_n_22249=double(_n_runs_22236.size());
if((d::truth((double(d::at(_n_runs_22236,0.0).size())<3.0))&&d::truth((double(d::at(_n_runs_22236,1.0).size())>5.0)))){d::check_cancel();(void)((d::at(_n_runs_22236,0.0).resize(size_t(0.0)),0.0));
}
if((d::truth((double(d::at(_n_runs_22236,(_n_n_22249-1.0)).size())<3.0))&&d::truth((double(d::at(_n_runs_22236,(_n_n_22249-2.0)).size())>5.0)))){d::check_cancel();(void)((d::at(_n_runs_22236,(_n_n_22249-1.0)).resize(size_t(0.0)),0.0));
}
for(auto &&_n_item_22306:_n_runs_22236){d::check_cancel();d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_run_22250=_n_item_22306;
for(auto &&_n_item_22307:_n_run_22250){d::check_cancel();auto _n_binding_22308=_n_item_22307;
double _n_c_22251=std::get<0>(*_n_binding_22308);
double _n_r_22252=std::get<1>(*_n_binding_22308);
d::String _n_g_22253=std::get<2>(*_n_binding_22308);
(void)(this->_n_put_22201(_n_c_22251,_n_r_22252,_n_g_22253));
}
}

}
}

explicit Native_newtons_cradle(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_22283=d::decode<std::shared_ptr<_n_Record_22274>>(_options.data);
this->_n_lifted_22187=(d::present(_n_binding_22283->_p_lifted)?d::read(_n_binding_22283->_p_lifted):1.0);
auto _n_binding_22284=_n_meta_22175;
this->_n_cols_22188=_n_binding_22284->_p_cols;
this->_n_rows_22189=_n_binding_22284->_p_rows;
this->_n_k_22190=([&](){auto _n_argument_22285=1.0;auto _n_argument_22286=([&](){auto _n_argument_22287=(_n_N_22179-1.0);auto _n_argument_22288=d::round(this->_n_lifted_22187);return d::minimum({_n_argument_22287,_n_argument_22288});})();return d::maximum({_n_argument_22285,_n_argument_22286});})();
this->_n_cx_22191=(this->_n_cols_22188/2.0);
this->_n_pivots_22192=d::Array<double,false>(d::from(_n_N_22179,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_i_22208=_a1;
return (this->_n_cx_22191+(((_n_i_22208-((_n_N_22179-1.0)/2.0))*4.0)*_n_R_22180));}));
this->_n_BASE_22193=(((_n_TOP_22182+_n_L_22181)+_n_R_22180)+1.0);
this->_n_RAIL_22194=26.0;
this->_n_LEG_22195=((this->_n_RAIL_22194+0.5)+(0.5*((this->_n_BASE_22193-_n_TOP_22182)+0.5)));
this->_n_m_22196=d::hypot(std::initializer_list<double>{(-d::number(0.67)),0.45,0.59});
this->_n_LX_22197=((-d::number(0.67))/this->_n_m_22196);
this->_n_LY_22198=(0.45/this->_n_m_22196);
this->_n_LZ_22199=(0.59/this->_n_m_22196);
this->_n_out_22200=d::Array<d::String,false>(size_t((this->_n_cols_22188*this->_n_rows_22189)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_22275> _a1) mutable ->d::String{double _n_t_22254=_a0;
auto _n_binding_22291=(d::present(_a1)?_a1:([&](){auto _n_object_22290=std::make_shared<_n_Record_22275>();return _n_object_22290;})());
bool _n_paper_22255=(d::present(_n_binding_22291->_p_paper)?d::read(_n_binding_22291->_p_paper):false);
{
(void)(this->_n_out_22200.fill(d::String(u" ")));
auto _n_binding_22292=this->_n_pose_22202(_n_t_22254);
double _n_left_22256=d::at(_n_binding_22292,0.0);
double _n_right_22257=d::at(_n_binding_22292,1.0);
double _n_knock_22258=d::at(_n_binding_22292,2.0);
{double _n_c_22259=(this->_n_cx_22191-this->_n_RAIL_22194);
for(;d::truth((_n_c_22259<(this->_n_cx_22191+this->_n_RAIL_22194)));(void)((_n_c_22259++))){d::check_cancel();(void)(this->_n_put_22201(_n_c_22259,(_n_TOP_22182-1.0),d::String(u"═")));
}}
(void)(this->_n_line_22203(((this->_n_cx_22191-this->_n_RAIL_22194)-0.5),(_n_TOP_22182-0.5),(this->_n_cx_22191-this->_n_LEG_22195),this->_n_BASE_22193));
(void)(this->_n_line_22203(((this->_n_cx_22191+this->_n_RAIL_22194)+0.5),(_n_TOP_22182-0.5),(this->_n_cx_22191+this->_n_LEG_22195),this->_n_BASE_22193));
double _n_b0_22260=(std::floor((this->_n_cx_22191-this->_n_LEG_22195))-1.0);
double _n_b1_22261=std::ceil((this->_n_cx_22191+this->_n_LEG_22195));
{double _n_c_22262=_n_b0_22260;
for(;d::truth((_n_c_22262<=_n_b1_22261));(void)((_n_c_22262++))){d::check_cancel();(void)(this->_n_put_22201(_n_c_22262,this->_n_BASE_22193,(d::truth((_n_c_22262==_n_b0_22260))?d::String(u"▝"):(d::truth((_n_c_22262==_n_b1_22261))?d::String(u"▘"):d::String(u"▀")))));
}}
{double _n_n_22263=0.0;
for(;d::truth((_n_n_22263<_n_N_22179));(void)((_n_n_22263++))){d::check_cancel();double _n_th_22264=((d::truth((_n_n_22263<this->_n_k_22190))?_n_left_22256:0.0)+(d::truth((_n_n_22263>=(_n_N_22179-this->_n_k_22190)))?_n_right_22257:0.0));
double _n_push_22265=((d::truth(([&]()->bool{auto _n_logical_22293=(_n_knock_22258>0.0);return d::truth(_n_logical_22293)?(_n_n_22263<(_n_N_22179-this->_n_k_22190)):_n_logical_22293;})())||d::truth(([&]()->bool{auto _n_logical_22294=(_n_knock_22258<0.0);return d::truth(_n_logical_22294)?(_n_n_22263>=this->_n_k_22190):_n_logical_22294;})()))?(0.5*_n_knock_22258):0.0);
double _n_sx_22266=std::sin(_n_th_22264);
double _n_sy_22267=std::cos(_n_th_22264);
double _n_bx_22268=((d::at(this->_n_pivots_22192,_n_n_22263)+_n_push_22265)+((2.0*_n_L_22181)*_n_sx_22266));
double _n_by_22269=(_n_TOP_22182+(_n_L_22181*_n_sy_22267));
double _n_ax_22270=((d::at(this->_n_pivots_22192,_n_n_22263)+_n_push_22265)+((2.0*(_n_L_22181-_n_R_22180))*_n_sx_22266));
double _n_ay_22271=(_n_TOP_22182+((_n_L_22181-_n_R_22180)*_n_sy_22267));
(void)(this->_n_line_22203((d::at(this->_n_pivots_22192,_n_n_22263)-_n_SPAN_22186),_n_TOP_22182,(_n_ax_22270-(0.5*_n_sy_22267)),(_n_ay_22271+(0.25*_n_sx_22266))));
(void)(this->_n_line_22203((d::at(this->_n_pivots_22192,_n_n_22263)+_n_SPAN_22186),_n_TOP_22182,(_n_ax_22270+(0.5*_n_sy_22267)),(_n_ay_22271-(0.25*_n_sx_22266))));
(void)(this->_n_ball_22205(_n_bx_22268,_n_by_22269,_n_paper_22255));
}}
d::Array<d::String,false> _n_lines_22272=d::Array<d::String,false>{};
{double _n_r_22273=0.0;
for(;d::truth((_n_r_22273<this->_n_rows_22189));(void)((_n_r_22273++))){d::check_cancel();(void)(_n_lines_22272.push(d::join(this->_n_out_22200.slice((_n_r_22273*this->_n_cols_22188),((_n_r_22273+1.0)*this->_n_cols_22188)),d::String(u""))));
}}
return d::join(_n_lines_22272,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("newtons-cradle").cols)*ascii::catalog_meta("newtons-cradle").rows);auto _env=std::make_shared<_n_Record_22275>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &newtons_cradle_meta(){return catalog_meta("newtons-cradle");}
std::unique_ptr<Piece> make_newtons_cradle(const AsciiPieceOptions &o){return std::make_unique<Native_newtons_cradle>(o);}
}
