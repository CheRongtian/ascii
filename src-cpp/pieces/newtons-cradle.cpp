// Direct, statically typed C++ from src/pieces/newtons-cradle.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_22177;
struct _n_Record_22178;
struct _n_Record_22275;
struct _n_Record_22276;
struct _n_Record_22177{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_22178> _p_options{};
static std::shared_ptr<_n_Record_22177> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22177>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_22178>>(j["options"]);return out;}
};
struct _n_Record_22178{
double _p_lifted{};
static std::shared_ptr<_n_Record_22178> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22178>();out->_p_lifted=d::decode<double>(j["lifted"]);return out;}
};
struct _n_Record_22275{
std::optional<double> _p_lifted{};
static std::shared_ptr<_n_Record_22275> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22275>();out->_p_lifted=d::decode<std::optional<double>>(j["lifted"]);return out;}
};
struct _n_Record_22276{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_22276> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_22276>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_22177> _n_meta_22176=[](){return ([&](){auto _n_object_22281=std::make_shared<_n_Record_22177>();_n_object_22281->_p_name=d::String(u"newton's cradle");_n_object_22281->_p_category=d::String(u"physics");_n_object_22281->_p_note=d::String(u"five steel balls on strings passing one knock back and forth");_n_object_22281->_p_cols=74.0;_n_object_22281->_p_rows=17.0;_n_object_22281->_p_fps=30.0;_n_object_22281->_p_options=([&](){auto _n_object_22283=std::make_shared<_n_Record_22178>();_n_object_22283->_p_lifted=1.0;return _n_object_22283;})();return _n_object_22281;})();}();
const d::String _n_RAMP_22179=[](){return d::String(u" .:-=+*#%@");}();
const double _n_N_22180=[](){return 5.0;}();
const double _n_R_22181=[](){return 2.0;}();
const double _n_L_22182=[](){return 11.0;}();
const double _n_TOP_22183=[](){return 2.0;}();
const double _n_AMP_22184=[](){return ((24.0*ascii::PI)/180.0);}();
const double _n_PERIOD_22185=[](){return 1.5;}();
const double _n_KNOCK_22186=[](){return 0.07;}();
const double _n_SPAN_22187=[](){return 3.0;}();

struct Native_newtons_cradle final:ascii::Piece{
double _n_lifted_22188{};
double _n_cols_22189{};
double _n_rows_22190{};
double _n_k_22191{};
double _n_cx_22192{};
d::Array<double,false> _n_pivots_22193{};
double _n_BASE_22194{};
double _n_RAIL_22195{};
double _n_LEG_22196{};
double _n_m_22197{};
double _n_LX_22198{};
double _n_LY_22199{};
double _n_LZ_22200{};
d::Array<d::String,false> _n_out_22201{};
std::function<d::String(double,std::shared_ptr<_n_Record_22276>)> _render;
void _n_put_22202(double _a0,double _a1,d::String _a2){double _n_c_22210=_a0;
double _n_r_22211=_a1;
d::String _n_g_22212=_a2;
{
(void)(((_n_c_22210=std::floor(_n_c_22210)),(_n_r_22211=std::floor(_n_r_22211))));
if((((d::truth((_n_c_22210>=0.0))&&d::truth((_n_c_22210<this->_n_cols_22189)))&&d::truth((_n_r_22211>=0.0)))&&d::truth((_n_r_22211<this->_n_rows_22190)))){d::check_cancel();(void)(([&](){auto&& _n_array_22296=this->_n_out_22201;auto _n_index_22297=((_n_r_22211*this->_n_cols_22189)+_n_c_22210);auto _n_value_22298=_n_g_22212;d::put(_n_array_22296,_n_index_22297,_n_value_22298);return _n_value_22298;})());
}

}
}

d::Array<double,false> _n_pose_22203(double _a0){double _n_t_22213=_a0;
{
double _n_cyc_22214=(_n_PERIOD_22185+(2.0*_n_KNOCK_22186));
double _n_p_22215=d::mod((d::mod(_n_t_22213,_n_cyc_22214)+_n_cyc_22214),_n_cyc_22214);
double _n_w_22216=((2.0*ascii::PI)/_n_PERIOD_22185);
double _n_q_22217=(_n_PERIOD_22185/4.0);
if(d::truth((_n_p_22215<_n_q_22217))){d::check_cancel();return d::Array<double,false>{((-d::number(_n_AMP_22184))*std::cos((_n_w_22216*_n_p_22215))),0.0,0.0};
}
if(d::truth((_n_p_22215<(_n_q_22217+_n_KNOCK_22186)))){d::check_cancel();return d::Array<double,false>{0.0,0.0,std::sin(((ascii::PI*(_n_p_22215-_n_q_22217))/_n_KNOCK_22186))};
}
if(d::truth((_n_p_22215<((3.0*_n_q_22217)+_n_KNOCK_22186)))){d::check_cancel();return d::Array<double,false>{0.0,(_n_AMP_22184*std::sin((_n_w_22216*((_n_p_22215-_n_q_22217)-_n_KNOCK_22186)))),0.0};
}
if(d::truth((_n_p_22215<((3.0*_n_q_22217)+(2.0*_n_KNOCK_22186))))){d::check_cancel();return d::Array<double,false>{0.0,0.0,(-d::number(std::sin(((ascii::PI*((_n_p_22215-(3.0*_n_q_22217))-_n_KNOCK_22186))/_n_KNOCK_22186))))};
}
return d::Array<double,false>{((-d::number(_n_AMP_22184))*std::sin((_n_w_22216*((_n_p_22215-(3.0*_n_q_22217))-(2.0*_n_KNOCK_22186))))),0.0,0.0};

}
}

void _n_line_22204(double _a0,double _a1,double _a2,double _a3){double _n_x0_22218=_a0;
double _n_y0_22219=_a1;
double _n_x1_22220=_a2;
double _n_y1_22221=_a3;
{
double _n_s_22222=((_n_x1_22220-_n_x0_22218)/(_n_y1_22221-_n_y0_22219));
d::String _n_g_22223=(d::truth((std::fabs(_n_s_22222)<0.2))?d::String(u"|"):(d::truth((_n_s_22222>0.0))?d::String(u"\\"):d::String(u"/")));
if(d::truth((std::fabs(_n_s_22222)<=1.0))){d::check_cancel();{double _n_r_22224=std::floor(_n_y0_22219);
for(;d::truth(((_n_r_22224+0.5)<_n_y1_22221));(void)((_n_r_22224++))){d::check_cancel();if(d::truth(((_n_r_22224+0.5)>=_n_y0_22219))){d::check_cancel();(void)(this->_n_put_22202((_n_x0_22218+(_n_s_22222*((_n_r_22224+0.5)-_n_y0_22219))),_n_r_22224,_n_g_22223));
}
}}
}else {d::check_cancel();auto _n_binding_22299=(d::truth((_n_x0_22218<_n_x1_22220))?d::Array<double,false>{_n_x0_22218,_n_x1_22220}:d::Array<double,false>{_n_x1_22220,_n_x0_22218});
double _n_a_22225=d::at(_n_binding_22299,0.0);
double _n_b_22226=d::at(_n_binding_22299,1.0);
{double _n_c_22227=std::floor(_n_a_22225);
for(;d::truth(((_n_c_22227+0.5)<_n_b_22226));(void)((_n_c_22227++))){d::check_cancel();if(d::truth(((_n_c_22227+0.5)>=_n_a_22225))){d::check_cancel();(void)(this->_n_put_22202(_n_c_22227,(_n_y0_22219+(((_n_c_22227+0.5)-_n_x0_22218)/_n_s_22222)),_n_g_22223));
}
}}
}

}
}

double _n_chrome_22205(double _a0,double _a1,double _a2){double _n_nx_22228=_a0;
double _n_ny_22229=_a1;
double _n_nz_22230=_a2;
{
double _n_ry_22231=((2.0*_n_nz_22230)*_n_ny_22229);
double _n_env_22232=(d::truth((_n_ry_22231>0.15))?(0.3+(0.25*_n_ry_22231)):(d::truth((_n_ry_22231>(-d::number(0.5))))?0.03:(0.5-(0.2*(_n_ry_22231+0.5)))));
double _n_spec_22233=std::pow(d::maximum({0.0,(((2.0*_n_nz_22230)*(((_n_nx_22228*this->_n_LX_22198)+(_n_ny_22229*this->_n_LY_22199))+(_n_nz_22230*this->_n_LZ_22200)))-this->_n_LZ_22200)}),10.0);
return ([&](){auto _n_argument_22300=1.0;auto _n_argument_22301=((_n_env_22232+(0.12*d::maximum({0.0,(((_n_nx_22228*this->_n_LX_22198)+(_n_ny_22229*this->_n_LY_22199))+(_n_nz_22230*this->_n_LZ_22200))})))+(3.5*_n_spec_22233));return d::minimum({_n_argument_22300,_n_argument_22301});})();

}
}

void _n_ball_22206(double _a0,double _a1,bool _a2){double _n_bx_22234=_a0;
double _n_by_22235=_a1;
bool _n_paper_22236=_a2;
{
d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false> _n_runs_22237=d::Array<d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>,false>{};
{double _n_r_22238=std::floor((_n_by_22235-_n_R_22181));
for(;d::truth((_n_r_22238<(_n_by_22235+_n_R_22181)));(void)((_n_r_22238++))){d::check_cancel();d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_run_22239=d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false>{};
(void)(_n_runs_22237.push(_n_run_22239));
{double _n_c_22240=std::floor((_n_bx_22234-(2.0*_n_R_22181)));
for(;d::truth((_n_c_22240<(_n_bx_22234+(2.0*_n_R_22181))));(void)((_n_c_22240++))){d::check_cancel();double _n_hit_22241=0.0;
double _n_v_22242=0.0;
double _n_cy_22243=0.0;
{double _n_j_22244=0.0;
for(;d::truth((_n_j_22244<4.0));(void)((_n_j_22244++))){d::check_cancel();{double _n_i_22245=0.0;
for(;d::truth((_n_i_22245<4.0));(void)((_n_i_22245++))){d::check_cancel();double _n_nx_22246=(((((_n_c_22240+0.125)+(_n_i_22245*0.25))-_n_bx_22234)/2.0)/_n_R_22181);
double _n_ny_22247=((-d::number((((_n_r_22238+0.125)+(_n_j_22244*0.25))-_n_by_22235)))/_n_R_22181);
double _n_q_22248=((_n_nx_22246*_n_nx_22246)+(_n_ny_22247*_n_ny_22247));
if(d::truth((_n_q_22248>=1.0))){d::check_cancel();continue;
}
(void)((_n_v_22242=(_n_v_22242+([&](){auto _n_argument_22302=_n_nx_22246;auto _n_argument_22303=_n_ny_22247;auto _n_argument_22304=std::sqrt((1.0-_n_q_22248));return this->_n_chrome_22205(_n_argument_22302,_n_argument_22303,_n_argument_22304);})())));
(void)((_n_hit_22241++));
(void)((_n_cy_22243=(_n_cy_22243+_n_j_22244)));
}}
}}
if(d::truth((_n_hit_22241<4.0))){d::check_cancel();continue;
}
if(d::truth((_n_hit_22241<6.0))){d::check_cancel();(void)(_n_run_22239.push(std::make_shared<std::tuple<double,double,d::String>>(_n_c_22240,_n_r_22238,(d::truth(((_n_cy_22243/_n_hit_22241)<1.5))?d::String(u"'"):(d::truth(((_n_cy_22243/_n_hit_22241)>2.0))?d::String(u"."):d::String(u"-"))))));
continue;
}
double _n_g_22249=([&](){auto _n_argument_22305=1.0;auto _n_argument_22306=d::round(((_n_v_22242/_n_hit_22241)*(double(_n_RAMP_22179.size())-1.0)));return d::maximum({_n_argument_22305,_n_argument_22306});})();
(void)(_n_run_22239.push(std::make_shared<std::tuple<double,double,d::String>>(_n_c_22240,_n_r_22238,d::at(_n_RAMP_22179,(d::truth(_n_paper_22236)?(double(_n_RAMP_22179.size())-_n_g_22249):_n_g_22249)))));
}}
}}
double _n_n_22250=double(_n_runs_22237.size());
if((d::truth((double(d::at(_n_runs_22237,0.0).size())<3.0))&&d::truth((double(d::at(_n_runs_22237,1.0).size())>5.0)))){d::check_cancel();(void)((d::at(_n_runs_22237,0.0).resize(size_t(0.0)),0.0));
}
if((d::truth((double(d::at(_n_runs_22237,(_n_n_22250-1.0)).size())<3.0))&&d::truth((double(d::at(_n_runs_22237,(_n_n_22250-2.0)).size())>5.0)))){d::check_cancel();(void)((d::at(_n_runs_22237,(_n_n_22250-1.0)).resize(size_t(0.0)),0.0));
}
for(auto &&_n_item_22307:_n_runs_22237){d::check_cancel();d::Array<std::shared_ptr<std::tuple<double,double,d::String>>,false> _n_run_22251=_n_item_22307;
for(auto &&_n_item_22308:_n_run_22251){d::check_cancel();auto _n_binding_22309=_n_item_22308;
double _n_c_22252=std::get<0>(*_n_binding_22309);
double _n_r_22253=std::get<1>(*_n_binding_22309);
d::String _n_g_22254=std::get<2>(*_n_binding_22309);
(void)(this->_n_put_22202(_n_c_22252,_n_r_22253,_n_g_22254));
}
}

}
}

explicit Native_newtons_cradle(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_22284=d::decode<std::shared_ptr<_n_Record_22275>>(_options.data);
this->_n_lifted_22188=(d::present(_n_binding_22284->_p_lifted)?d::read(_n_binding_22284->_p_lifted):1.0);
auto _n_binding_22285=_n_meta_22176;
this->_n_cols_22189=_n_binding_22285->_p_cols;
this->_n_rows_22190=_n_binding_22285->_p_rows;
this->_n_k_22191=([&](){auto _n_argument_22286=1.0;auto _n_argument_22287=([&](){auto _n_argument_22288=(_n_N_22180-1.0);auto _n_argument_22289=d::round(this->_n_lifted_22188);return d::minimum({_n_argument_22288,_n_argument_22289});})();return d::maximum({_n_argument_22286,_n_argument_22287});})();
this->_n_cx_22192=(this->_n_cols_22189/2.0);
this->_n_pivots_22193=d::Array<double,false>(d::from(_n_N_22180,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_i_22209=_a1;
return (this->_n_cx_22192+(((_n_i_22209-((_n_N_22180-1.0)/2.0))*4.0)*_n_R_22181));}));
this->_n_BASE_22194=(((_n_TOP_22183+_n_L_22182)+_n_R_22181)+1.0);
this->_n_RAIL_22195=26.0;
this->_n_LEG_22196=((this->_n_RAIL_22195+0.5)+(0.5*((this->_n_BASE_22194-_n_TOP_22183)+0.5)));
this->_n_m_22197=d::hypot(std::initializer_list<double>{(-d::number(0.67)),0.45,0.59});
this->_n_LX_22198=((-d::number(0.67))/this->_n_m_22197);
this->_n_LY_22199=(0.45/this->_n_m_22197);
this->_n_LZ_22200=(0.59/this->_n_m_22197);
this->_n_out_22201=d::Array<d::String,false>(size_t((this->_n_cols_22189*this->_n_rows_22190)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_22276> _a1) mutable ->d::String{double _n_t_22255=_a0;
auto _n_binding_22292=(d::present(_a1)?_a1:([&](){auto _n_object_22291=std::make_shared<_n_Record_22276>();return _n_object_22291;})());
bool _n_paper_22256=(d::present(_n_binding_22292->_p_paper)?d::read(_n_binding_22292->_p_paper):false);
{
(void)(this->_n_out_22201.fill(d::String(u" ")));
auto _n_binding_22293=this->_n_pose_22203(_n_t_22255);
double _n_left_22257=d::at(_n_binding_22293,0.0);
double _n_right_22258=d::at(_n_binding_22293,1.0);
double _n_knock_22259=d::at(_n_binding_22293,2.0);
{double _n_c_22260=(this->_n_cx_22192-this->_n_RAIL_22195);
for(;d::truth((_n_c_22260<(this->_n_cx_22192+this->_n_RAIL_22195)));(void)((_n_c_22260++))){d::check_cancel();(void)(this->_n_put_22202(_n_c_22260,(_n_TOP_22183-1.0),d::String(u"═")));
}}
(void)(this->_n_line_22204(((this->_n_cx_22192-this->_n_RAIL_22195)-0.5),(_n_TOP_22183-0.5),(this->_n_cx_22192-this->_n_LEG_22196),this->_n_BASE_22194));
(void)(this->_n_line_22204(((this->_n_cx_22192+this->_n_RAIL_22195)+0.5),(_n_TOP_22183-0.5),(this->_n_cx_22192+this->_n_LEG_22196),this->_n_BASE_22194));
double _n_b0_22261=(std::floor((this->_n_cx_22192-this->_n_LEG_22196))-1.0);
double _n_b1_22262=std::ceil((this->_n_cx_22192+this->_n_LEG_22196));
{double _n_c_22263=_n_b0_22261;
for(;d::truth((_n_c_22263<=_n_b1_22262));(void)((_n_c_22263++))){d::check_cancel();(void)(this->_n_put_22202(_n_c_22263,this->_n_BASE_22194,(d::truth((_n_c_22263==_n_b0_22261))?d::String(u"▝"):(d::truth((_n_c_22263==_n_b1_22262))?d::String(u"▘"):d::String(u"▀")))));
}}
{double _n_n_22264=0.0;
for(;d::truth((_n_n_22264<_n_N_22180));(void)((_n_n_22264++))){d::check_cancel();double _n_th_22265=((d::truth((_n_n_22264<this->_n_k_22191))?_n_left_22257:0.0)+(d::truth((_n_n_22264>=(_n_N_22180-this->_n_k_22191)))?_n_right_22258:0.0));
double _n_push_22266=((d::truth(([&]()->bool{auto _n_logical_22294=(_n_knock_22259>0.0);return d::truth(_n_logical_22294)?(_n_n_22264<(_n_N_22180-this->_n_k_22191)):_n_logical_22294;})())||d::truth(([&]()->bool{auto _n_logical_22295=(_n_knock_22259<0.0);return d::truth(_n_logical_22295)?(_n_n_22264>=this->_n_k_22191):_n_logical_22295;})()))?(0.5*_n_knock_22259):0.0);
double _n_sx_22267=std::sin(_n_th_22265);
double _n_sy_22268=std::cos(_n_th_22265);
double _n_bx_22269=((d::at(this->_n_pivots_22193,_n_n_22264)+_n_push_22266)+((2.0*_n_L_22182)*_n_sx_22267));
double _n_by_22270=(_n_TOP_22183+(_n_L_22182*_n_sy_22268));
double _n_ax_22271=((d::at(this->_n_pivots_22193,_n_n_22264)+_n_push_22266)+((2.0*(_n_L_22182-_n_R_22181))*_n_sx_22267));
double _n_ay_22272=(_n_TOP_22183+((_n_L_22182-_n_R_22181)*_n_sy_22268));
(void)(this->_n_line_22204((d::at(this->_n_pivots_22193,_n_n_22264)-_n_SPAN_22187),_n_TOP_22183,(_n_ax_22271-(0.5*_n_sy_22268)),(_n_ay_22272+(0.25*_n_sx_22267))));
(void)(this->_n_line_22204((d::at(this->_n_pivots_22193,_n_n_22264)+_n_SPAN_22187),_n_TOP_22183,(_n_ax_22271+(0.5*_n_sy_22268)),(_n_ay_22272-(0.25*_n_sx_22267))));
(void)(this->_n_ball_22206(_n_bx_22269,_n_by_22270,_n_paper_22256));
}}
d::Array<d::String,false> _n_lines_22273=d::Array<d::String,false>{};
{double _n_r_22274=0.0;
for(;d::truth((_n_r_22274<this->_n_rows_22190));(void)((_n_r_22274++))){d::check_cancel();(void)(_n_lines_22273.push(d::join(this->_n_out_22201.slice((_n_r_22274*this->_n_cols_22189),((_n_r_22274+1.0)*this->_n_cols_22189)),d::String(u""))));
}}
return d::join(_n_lines_22273,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("newtons-cradle").cols)*ascii::catalog_meta("newtons-cradle").rows);auto _env=std::make_shared<_n_Record_22276>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &newtons_cradle_meta(){return catalog_meta("newtons-cradle");}
std::unique_ptr<Piece> make_newtons_cradle(const AsciiPieceOptions &o){return std::make_unique<Native_newtons_cradle>(o);}
}
