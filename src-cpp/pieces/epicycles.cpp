// Direct, statically typed C++ from src/pieces/epicycles.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_9232;
struct _n_Record_9249;
struct _n_Record_9264;
struct _n_Record_9379;
struct _n_Record_9439;
struct _n_Record_9232{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_9232> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9232>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_9249{
double _p_k{};
double _p_re{};
double _p_im{};
double _p_r{};
static std::shared_ptr<_n_Record_9249> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9249>();out->_p_k=d::decode<double>(j["k"]);out->_p_re=d::decode<double>(j["re"]);out->_p_im=d::decode<double>(j["im"]);out->_p_r=d::decode<double>(j["r"]);return out;}
};
struct _n_Record_9264{
double _p_c{};
double _p_r{};
double _p_i{};
d::String _p_g{};
std::optional<double> _p_at{};
static std::shared_ptr<_n_Record_9264> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9264>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);out->_p_i=d::decode<double>(j["i"]);out->_p_g=d::decode<d::String>(j["g"]);out->_p_at=d::decode<std::optional<double>>(j["at"]);return out;}
};
struct _n_Record_9379{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_9379> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9379>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_9439{
double _p_c{};
double _p_r{};
double _p_i{};
d::String _p_g{};
static std::shared_ptr<_n_Record_9439> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_9439>();out->_p_c=d::decode<double>(j["c"]);out->_p_r=d::decode<double>(j["r"]);out->_p_i=d::decode<double>(j["i"]);out->_p_g=d::decode<d::String>(j["g"]);return out;}
};
d::Array<std::array<double,2>,false> _n_star_9242(double _a0);
d::String _n_pen_9243(double _a0,double _a1,std::optional<double> _a2);
std::shared_ptr<_n_Record_9232> _n_meta_9231=[](){return ([&](){auto _n_object_9382=std::make_shared<_n_Record_9232>();_n_object_9382->_p_name=d::String(u"epicycles");_n_object_9382->_p_category=d::String(u"generative");_n_object_9382->_p_note=d::String(u"a chain of turning circles whose tip traces a star");_n_object_9382->_p_cols=60.0;_n_object_9382->_p_rows=24.0;_n_object_9382->_p_fps=30.0;return _n_object_9382;})();}();
const double _n_TERMS_9233=[](){return 16.0;}();
const double _n_PERIOD_9234=[](){return 10.0;}();
const double _n_TRAIL_9235=[](){return 0.9;}();
const double _n_FADE_9236=[](){return 0.8;}();
const double _n_SAMPLES_9237=[](){return 2400.0;}();
const double _n_ASPECT_9238=[](){return 0.5;}();
d::Array<double,false> _n_RIMS_9239=[](){return d::Array<double,false>{1.0};}();
const double _n_JOINT_9240=[](){return 1.5;}();
const double _n_PHASE_9241=[](){return 0.12;}();
d::Array<std::array<double,2>,false> _n_star_9242(double _a0){double _n_n_9270=_a0;
{
d::Array<std::array<double,2>,false> _n_v_9271=d::Array<std::array<double,2>,false>{};
{double _n_j_9272=0.0;
for(;d::truth((_n_j_9272<10.0));(void)((_n_j_9272++))){d::check_cancel();double _n_a_9273=((ascii::PI/2.0)+((_n_j_9272*ascii::PI)/5.0));
double _n_r_9274=(d::truth(d::mod(_n_j_9272,2.0))?0.4:1.0);
(void)(_n_v_9271.push(std::array<double,2>{(_n_r_9274*std::cos(_n_a_9273)),(_n_r_9274*std::sin(_n_a_9273))}));
}}
d::Array<std::array<double,2>,false> _n_pts_9275=d::Array<std::array<double,2>,false>{};
{double _n_i_9276=0.0;
for(;d::truth((_n_i_9276<_n_n_9270));(void)((_n_i_9276++))){d::check_cancel();double _n_d_9277=((_n_i_9276/_n_n_9270)*10.0);
double _n_j_9278=std::floor(_n_d_9277);
double _n_f_9279=(_n_d_9277-_n_j_9278);
auto _n_binding_9383=d::Array<std::array<double,2>,false>{d::at(_n_v_9271,_n_j_9278),d::at(_n_v_9271,d::mod((_n_j_9278+1.0),10.0))};
auto&& _n_a_9280=d::at(_n_binding_9383,0.0);
auto&& _n_b_9281=d::at(_n_binding_9383,1.0);
(void)(_n_pts_9275.push(std::array<double,2>{(d::at(_n_a_9280,0.0)+((d::at(_n_b_9281,0.0)-d::at(_n_a_9280,0.0))*_n_f_9279)),(d::at(_n_a_9280,1.0)+((d::at(_n_b_9281,1.0)-d::at(_n_a_9280,1.0))*_n_f_9279))}));
}}
return _n_pts_9275;

}
}

d::String _n_pen_9243(double _a0,double _a1,std::optional<double> _a2){double _n_dx_9282=_a0;
double _n_dy_9283=_a1;
double _n_f_9284=(d::present(_a2)?d::read(_a2):0.5);
{
double _n_a_9285=((std::atan2(_n_dy_9283,_n_dx_9282)*180.0)/ascii::PI);
if(d::truth((_n_a_9285<0.0))){d::check_cancel();(void)((_n_a_9285=(_n_a_9285+180.0)));
}
double _n_flat_9286=d::minimum({_n_a_9285,(180.0-_n_a_9285)});
if(d::truth((_n_flat_9286<8.0))){d::check_cancel();return (d::truth((_n_f_9284<0.62))?d::String(u"-"):d::String(u"_"));
}
if(d::truth((_n_flat_9286<42.0))){d::check_cancel();return (d::truth((_n_f_9284<0.3))?d::String(u"'"):(d::truth((_n_f_9284<0.68))?d::String(u"-"):d::String(u"_")));
}
return (d::truth((_n_a_9285<80.0))?d::String(u"/"):(d::truth((_n_a_9285<100.0))?d::String(u"|"):d::String(u"\\")));

}
}

struct Native_epicycles final:ascii::Piece{
double _n_cols_9244{};
double _n_rows_9245{};
d::Array<std::array<double,2>,false> _n_pts_9246{};
double _n_N_9247{};
d::Array<std::shared_ptr<_n_Record_9249>,false> _n_terms_9248{};
d::Array<std::shared_ptr<_n_Record_9249>,false> _n_chain_9250{};
d::Array<std::array<double,2>,false> _n_path_9252{};
double _n_x0_9253{};
double _n_x1_9254{};
double _n_y0_9255{};
double _n_y1_9256{};
double _n_S_9257{};
double _n_mx_9258{};
double _n_my_9259{};
d::Array<std::array<double,2>,false> _n_P_9262{};
d::Array<std::shared_ptr<_n_Record_9264>,false> _n_cells_9263{};
d::Set<double> _n_figure_9265{};
d::Array<d::String,false> _n_grid_9267{};
std::function<d::String(double,std::shared_ptr<_n_Record_9379>)> _render;
std::array<double,2> _n_sum_9251(double _a0,double _a1){double _n_theta_9296=_a0;
double _n_upto_9297=_a1;
{
double _n_x_9298=0.0;
double _n_y_9299=0.0;
{double _n_j_9300=0.0;
for(;d::truth((_n_j_9300<_n_upto_9297));(void)((_n_j_9300++))){d::check_cancel();auto _n_binding_9436=d::at(this->_n_chain_9250,_n_j_9300);
double _n_k_9301=_n_binding_9436->_p_k;
double _n_re_9302=_n_binding_9436->_p_re;
double _n_im_9303=_n_binding_9436->_p_im;
double _n_c_9304=std::cos((_n_k_9301*_n_theta_9296));
double _n_s_9305=std::sin((_n_k_9301*_n_theta_9296));
(void)((_n_x_9298=(_n_x_9298+((_n_re_9302*_n_c_9304)-(_n_im_9303*_n_s_9305)))));
(void)((_n_y_9299=(_n_y_9299+((_n_re_9302*_n_s_9305)+(_n_im_9303*_n_c_9304)))));
}}
return std::array<double,2>{_n_x_9298,_n_y_9299};

}
}

double _n_toCol_9260(double _a0){double _n_x_9309=_a0;
return ((this->_n_cols_9244/2.0)+((_n_x_9309-this->_n_mx_9258)*this->_n_S_9257));}

double _n_toRow_9261(double _a0){double _n_y_9310=_a0;
return ((this->_n_rows_9245/2.0)-(((_n_y_9310-this->_n_my_9259)*this->_n_S_9257)*_n_ASPECT_9238));}

void _n_add_9266(double _a0,double _a1,double _a2,d::String _a3){double _n_c_9313=_a0;
double _n_r_9314=_a1;
double _n_i_9315=_a2;
d::String _n_g_9316=_a3;
{
std::shared_ptr<_n_Record_9264> _n_last_9317=d::at(this->_n_cells_9263,(double(this->_n_cells_9263.size())-1.0));
if(((d::truth(_n_last_9317)&&d::truth((_n_last_9317->_p_c==_n_c_9313)))&&d::truth((_n_last_9317->_p_r==_n_r_9314)))){d::check_cancel();return;
}
{std::shared_ptr<_n_Record_9264> _n_p_9318=_n_last_9317;
for(;(d::truth(_n_p_9318)&&d::truth((([&](){auto _n_argument_9437=std::fabs((_n_c_9313-_n_p_9318->_p_c));auto _n_argument_9438=std::fabs((_n_r_9314-_n_p_9318->_p_r));return d::maximum({_n_argument_9437,_n_argument_9438});})()>1.0)));(void)((_n_p_9318=d::at(this->_n_cells_9263,(double(this->_n_cells_9263.size())-1.0))))){d::check_cancel();(void)(this->_n_cells_9263.push(([&](){auto _n_object_9440=std::make_shared<_n_Record_9264>();_n_object_9440->_p_c=(_n_p_9318->_p_c+d::sign((_n_c_9313-_n_p_9318->_p_c)));_n_object_9440->_p_r=(_n_p_9318->_p_r+d::sign((_n_r_9314-_n_p_9318->_p_r)));_n_object_9440->_p_i=_n_i_9315;_n_object_9440->_p_g=_n_g_9316;return _n_object_9440;})()));
}}
(void)(this->_n_cells_9263.push(([&](){auto _n_object_9442=std::make_shared<_n_Record_9264>();_n_object_9442->_p_c=_n_c_9313;_n_object_9442->_p_r=_n_r_9314;_n_object_9442->_p_i=_n_i_9315;_n_object_9442->_p_g=_n_g_9316;return _n_object_9442;})()));

}
}

void _n_put_9268(double _a0,double _a1,d::String _a2){double _n_c_9337=_a0;
double _n_r_9338=_a1;
d::String _n_ch_9339=_a2;
{
if((((d::truth((_n_c_9337>=0.0))&&d::truth((_n_c_9337<this->_n_cols_9244)))&&d::truth((_n_r_9338>=0.0)))&&d::truth((_n_r_9338<this->_n_rows_9245)))){d::check_cancel();(void)(([&](){auto&& _n_array_9443=this->_n_grid_9267;auto _n_index_9444=(_n_c_9337+(_n_r_9338*this->_n_cols_9244));auto _n_value_9445=_n_ch_9339;d::put(_n_array_9443,_n_index_9444,_n_value_9445);return _n_value_9445;})());
}

}
}

void _n_dot_9269(double _a0,double _a1){double _n_x_9340=_a0;
double _n_y_9341=_a1;
{
double _n_c_9342=std::floor(_n_x_9340);
double _n_r_9343=std::floor(_n_y_9341);
if(((((d::truth((_n_c_9342>=0.0))&&d::truth((_n_c_9342<this->_n_cols_9244)))&&d::truth((_n_r_9343>=0.0)))&&d::truth((_n_r_9343<this->_n_rows_9245)))&&d::truth((!d::truth(this->_n_figure_9265.has((_n_c_9342+(_n_r_9343*this->_n_cols_9244)))))))){d::check_cancel();(void)(([&](){auto&& _n_array_9446=this->_n_grid_9267;auto _n_index_9447=(_n_c_9342+(_n_r_9343*this->_n_cols_9244));auto _n_value_9448=d::String(u"·");d::put(_n_array_9446,_n_index_9447,_n_value_9448);return _n_value_9448;})());
}

}
}

explicit Native_epicycles(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_9384=_n_meta_9231;
this->_n_cols_9244=_n_binding_9384->_p_cols;
this->_n_rows_9245=_n_binding_9384->_p_rows;
this->_n_pts_9246=_n_star_9242(500.0);
this->_n_N_9247=double(this->_n_pts_9246.size());
this->_n_terms_9248=d::Array<std::shared_ptr<_n_Record_9249>,false>{};
{double _n_k_9287=(-d::number(40.0));
for(;d::truth((_n_k_9287<=40.0));(void)((_n_k_9287++))){d::check_cancel();double _n_re_9288=0.0;
double _n_im_9289=0.0;
{double _n_n_9290=0.0;
for(;d::truth((_n_n_9290<this->_n_N_9247));(void)((_n_n_9290++))){d::check_cancel();double _n_a_9291=(((((-d::number(2.0))*ascii::PI)*_n_k_9287)*_n_n_9290)/this->_n_N_9247);
auto _n_binding_9385=d::at(this->_n_pts_9246,_n_n_9290);
double _n_x_9292=d::at(_n_binding_9385,0.0);
double _n_y_9293=d::at(_n_binding_9385,1.0);
(void)((_n_re_9288=(_n_re_9288+([&](){auto _n_left_9386=(_n_x_9292*std::cos(_n_a_9291));auto _n_right_9387=(_n_y_9293*std::sin(_n_a_9291));return (_n_left_9386-_n_right_9387);})())));
(void)((_n_im_9289=(_n_im_9289+([&](){auto _n_left_9388=(_n_x_9292*std::sin(_n_a_9291));auto _n_right_9389=(_n_y_9293*std::cos(_n_a_9291));return (_n_left_9388+_n_right_9389);})())));
}}
(void)(this->_n_terms_9248.push(([&](){auto _n_object_9391=std::make_shared<_n_Record_9249>();_n_object_9391->_p_k=_n_k_9287;_n_object_9391->_p_re=(_n_re_9288/this->_n_N_9247);_n_object_9391->_p_im=(_n_im_9289/this->_n_N_9247);_n_object_9391->_p_r=(d::hypot(std::initializer_list<double>{_n_re_9288,_n_im_9289})/this->_n_N_9247);return _n_object_9391;})()));
}}
(void)(this->_n_terms_9248.sort([=]( std::shared_ptr<_n_Record_9249> _a0,std::shared_ptr<_n_Record_9249> _a1) mutable ->double{std::shared_ptr<_n_Record_9249> _n_a_9294=_a0;
std::shared_ptr<_n_Record_9249> _n_b_9295=_a1;
return (_n_b_9295->_p_r-_n_a_9294->_p_r);}));
this->_n_chain_9250=this->_n_terms_9248.slice(0.0,_n_TERMS_9233);
this->_n_path_9252=d::Array<std::array<double,2>,false>{};
this->_n_x0_9253=1.0;
this->_n_x1_9254=(-d::number(1.0));
this->_n_y0_9255=1.0;
this->_n_y1_9256=(-d::number(1.0));
{double _n_i_9306=0.0;
for(;d::truth((_n_i_9306<_n_SAMPLES_9237));(void)((_n_i_9306++))){d::check_cancel();auto _n_binding_9392=this->_n_sum_9251((((_n_i_9306/_n_SAMPLES_9237)*2.0)*ascii::PI),_n_TERMS_9233);
double _n_x_9307=d::at(_n_binding_9392,0.0);
double _n_y_9308=d::at(_n_binding_9392,1.0);
(void)(this->_n_path_9252.push(std::array<double,2>{_n_x_9307,_n_y_9308}));
(void)(((((this->_n_x0_9253=d::minimum({this->_n_x0_9253,_n_x_9307})),(this->_n_x1_9254=d::maximum({this->_n_x1_9254,_n_x_9307}))),(this->_n_y0_9255=d::minimum({this->_n_y0_9255,_n_y_9308}))),(this->_n_y1_9256=d::maximum({this->_n_y1_9256,_n_y_9308}))));
}}
this->_n_S_9257=d::minimum({((this->_n_cols_9244-8.0)/(this->_n_x1_9254-this->_n_x0_9253)),(((this->_n_rows_9245-2.3)/_n_ASPECT_9238)/(this->_n_y1_9256-this->_n_y0_9255))});
this->_n_mx_9258=((this->_n_x0_9253+this->_n_x1_9254)/2.0);
this->_n_my_9259=((this->_n_y0_9255+this->_n_y1_9256)/2.0);
this->_n_P_9262=d::map(this->_n_path_9252,[&]( std::array<double,2> _a0) mutable ->std::array<double,2>{auto _n_binding_9393=_a0;
double _n_x_9311=d::at(_n_binding_9393,0.0);
double _n_y_9312=d::at(_n_binding_9393,1.0);
return std::array<double,2>{this->_n_toCol_9260(_n_x_9311),this->_n_toRow_9261(_n_y_9312)};});
this->_n_cells_9263=d::Array<std::shared_ptr<_n_Record_9264>,false>{};
this->_n_figure_9265=d::Set<double>();
{double _n_i_9319=0.0;
for(;d::truth((_n_i_9319<_n_SAMPLES_9237));(void)((_n_i_9319++))){d::check_cancel();auto _n_binding_9394=d::at(this->_n_P_9262,_n_i_9319);
double _n_ax_9320=d::at(_n_binding_9394,0.0);
double _n_ay_9321=d::at(_n_binding_9394,1.0);
auto _n_binding_9395=d::at(this->_n_P_9262,d::mod((_n_i_9319+1.0),_n_SAMPLES_9237));
double _n_bx_9322=d::at(_n_binding_9395,0.0);
double _n_by_9323=d::at(_n_binding_9395,1.0);
auto _n_binding_9396=d::at(this->_n_P_9262,d::mod(((_n_i_9319-2.0)+_n_SAMPLES_9237),_n_SAMPLES_9237));
double _n_px_9324=d::at(_n_binding_9396,0.0);
double _n_py_9325=d::at(_n_binding_9396,1.0);
auto _n_binding_9397=d::at(this->_n_P_9262,d::mod((_n_i_9319+3.0),_n_SAMPLES_9237));
double _n_nx_9326=d::at(_n_binding_9397,0.0);
double _n_ny_9327=d::at(_n_binding_9397,1.0);
bool _n_steep_9328=([&](){auto _n_left_9398=std::fabs((_n_by_9323-_n_ay_9321));auto _n_right_9399=std::fabs((_n_bx_9322-_n_ax_9320));return (_n_left_9398>_n_right_9399);})();
auto _n_binding_9400=(d::truth(_n_steep_9328)?std::array<double,2>{_n_ay_9321,_n_by_9323}:std::array<double,2>{_n_ax_9320,_n_bx_9322});
double _n_a_9329=d::at(_n_binding_9400,0.0);
double _n_b_9330=d::at(_n_binding_9400,1.0);
{double _n_k_9331=std::ceil((d::minimum({_n_a_9329,_n_b_9330})-0.5));
for(;d::truth(((_n_k_9331+0.5)<d::maximum({_n_a_9329,_n_b_9330})));(void)((_n_k_9331++))){d::check_cancel();double _n_s_9332=(((_n_k_9331+0.5)-_n_a_9329)/(_n_b_9330-_n_a_9329));
double _n_x_9333=(_n_ax_9320+((_n_bx_9322-_n_ax_9320)*_n_s_9332));
double _n_y_9334=(_n_ay_9321+((_n_by_9323-_n_ay_9321)*_n_s_9332));
d::String _n_g_9335=([&](){auto _n_argument_9401=(_n_nx_9326-_n_px_9324);auto _n_argument_9402=((_n_py_9325-_n_ny_9327)/_n_ASPECT_9238);auto _n_argument_9403=(_n_y_9334-std::floor(_n_y_9334));return _n_pen_9243(_n_argument_9401,_n_argument_9402,std::optional<double>(_n_argument_9403));})();
(void)((d::truth(_n_steep_9328)?([&](){auto _n_argument_9404=std::floor(_n_x_9333);auto _n_argument_9405=_n_k_9331;auto _n_argument_9406=_n_i_9319;auto _n_argument_9407=_n_g_9335;return this->_n_add_9266(_n_argument_9404,_n_argument_9405,_n_argument_9406,_n_argument_9407);})():([&](){auto _n_argument_9408=_n_k_9331;auto _n_argument_9409=std::floor(_n_y_9334);auto _n_argument_9410=_n_i_9319;auto _n_argument_9411=_n_g_9335;return this->_n_add_9266(_n_argument_9408,_n_argument_9409,_n_argument_9410,_n_argument_9411);})()));
}}
}}
while(((d::truth((double(this->_n_cells_9263.size())>1.0))&&d::truth((d::at(this->_n_cells_9263,0.0)->_p_c==d::at(this->_n_cells_9263,(double(this->_n_cells_9263.size())-1.0))->_p_c)))&&d::truth((d::at(this->_n_cells_9263,0.0)->_p_r==d::at(this->_n_cells_9263,(double(this->_n_cells_9263.size())-1.0))->_p_r)))){d::check_cancel();(void)(this->_n_cells_9263.pop());
}
for(auto &&_n_item_9412:this->_n_cells_9263){d::check_cancel();std::shared_ptr<_n_Record_9264> _n_p_9336=_n_item_9412;
(void)(this->_n_figure_9265.add(d::read((_n_p_9336->_p_at=std::optional<double>((_n_p_9336->_p_c+(_n_p_9336->_p_r*this->_n_cols_9244)))))));
}
this->_n_grid_9267=d::Array<d::String,false>(size_t((this->_n_cols_9244*this->_n_rows_9245)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_9379> _a1) mutable ->d::String{double _n_t_9344=_a0;
{
(void)(this->_n_grid_9267.fill(d::String(u" ")));
double _n_u_9345=d::mod(((_n_t_9344/_n_PERIOD_9234)+_n_PHASE_9241),1.0);
double _n_head_9346=(_n_u_9345*_n_SAMPLES_9237);
double _n_theta_9347=((_n_u_9345*2.0)*ascii::PI);
d::Array<d::Array<double,false>,false> _n_joints_9348=d::Array<d::Array<double,false>,false>{d::Array<double,false>{this->_n_toCol_9260(0.0),this->_n_toRow_9261(0.0)}};
{double _n_j_9349=1.0;
for(;d::truth((_n_j_9349<=_n_TERMS_9233));(void)((_n_j_9349++))){d::check_cancel();auto _n_binding_9413=this->_n_sum_9251(_n_theta_9347,_n_j_9349);
double _n_x_9350=d::at(_n_binding_9413,0.0);
double _n_y_9351=d::at(_n_binding_9413,1.0);
if((d::truth((_n_j_9349==_n_TERMS_9233))||d::truth(((d::at(this->_n_chain_9250,(_n_j_9349-1.0))->_p_r*this->_n_S_9257)>_n_JOINT_9240)))){d::check_cancel();(void)(_n_joints_9348.push(d::Array<double,false>{this->_n_toCol_9260(_n_x_9350),this->_n_toRow_9261(_n_y_9351)}));
}
}}
for(auto &&_n_item_9414:_n_RIMS_9239){d::check_cancel();double _n_j_9352=_n_item_9414;
{
double _n_a_9353=(d::at(this->_n_chain_9250,_n_j_9352)->_p_r*this->_n_S_9257);
double _n_b_9354=(_n_a_9353*_n_ASPECT_9238);
auto _n_binding_9415=d::at(_n_joints_9348,_n_j_9352);
double _n_pc_9355=d::at(_n_binding_9415,0.0);
double _n_pr_9356=d::at(_n_binding_9415,1.0);
{double _n_c_9357=std::ceil(((_n_pc_9355-_n_a_9353)-0.5));
for(;d::truth(((_n_c_9357+0.5)<(_n_pc_9355+_n_a_9353)));(void)((_n_c_9357++))){d::check_cancel();double _n_u_9358=(((_n_c_9357+0.5)-_n_pc_9355)/_n_a_9353);
double _n_s_9359=std::sqrt((1.0-(_n_u_9358*_n_u_9358)));
if(d::truth((((_n_b_9354/_n_a_9353)*std::fabs(_n_u_9358))<=_n_s_9359))){d::check_cancel();(void)((this->_n_dot_9269((_n_c_9357+0.5),(_n_pr_9356-(_n_b_9354*_n_s_9359))),this->_n_dot_9269((_n_c_9357+0.5),(_n_pr_9356+(_n_b_9354*_n_s_9359)))));
}
}}
{double _n_r_9360=std::ceil(((_n_pr_9356-_n_b_9354)-0.5));
for(;d::truth(((_n_r_9360+0.5)<(_n_pr_9356+_n_b_9354)));(void)((_n_r_9360++))){d::check_cancel();double _n_v_9361=(((_n_r_9360+0.5)-_n_pr_9356)/_n_b_9354);
double _n_s_9362=std::sqrt((1.0-(_n_v_9361*_n_v_9361)));
if(d::truth((((_n_a_9353/_n_b_9354)*std::fabs(_n_v_9361))<=_n_s_9362))){d::check_cancel();(void)((this->_n_dot_9269((_n_pc_9355-(_n_a_9353*_n_s_9362)),(_n_r_9360+0.5)),this->_n_dot_9269((_n_pc_9355+(_n_a_9353*_n_s_9362)),(_n_r_9360+0.5))));
}
}}

}
}
{double _n_j_9363=0.0;
for(;d::truth(((_n_j_9363+1.0)<double(_n_joints_9348.size())));(void)((_n_j_9363++))){d::check_cancel();auto _n_binding_9416=d::at(_n_joints_9348,_n_j_9363);
double _n_ax_9364=d::at(_n_binding_9416,0.0);
double _n_ay_9365=d::at(_n_binding_9416,1.0);
auto _n_binding_9417=d::at(_n_joints_9348,(_n_j_9363+1.0));
double _n_bx_9366=d::at(_n_binding_9417,0.0);
double _n_by_9367=d::at(_n_binding_9417,1.0);
{double _n_s_9368=1.0;
double _n_n_9369=d::round(([&](){auto _n_argument_9418=std::fabs((_n_bx_9366-_n_ax_9364));auto _n_argument_9419=std::fabs((_n_by_9367-_n_ay_9365));return d::maximum({_n_argument_9418,_n_argument_9419});})());
for(;d::truth((_n_s_9368<_n_n_9369));(void)((_n_s_9368++))){d::check_cancel();(void)(this->_n_dot_9269((_n_ax_9364+(((_n_bx_9366-_n_ax_9364)*_n_s_9368)/_n_n_9369)),(_n_ay_9365+(((_n_by_9367-_n_ay_9365)*_n_s_9368)/_n_n_9369))));
}}
}}
for(auto &&_n_item_9420:this->_n_cells_9263){d::check_cancel();auto _n_binding_9421=_n_item_9420;
std::optional<double> _n_at_9370=_n_binding_9421->_p_at;
double _n_i_9371=_n_binding_9421->_p_i;
d::String _n_g_9372=_n_binding_9421->_p_g;
{
double _n_age_9373=((d::mod(((_n_head_9346-_n_i_9371)+_n_SAMPLES_9237),_n_SAMPLES_9237)/_n_SAMPLES_9237)/_n_TRAIL_9235);
if(d::truth((_n_age_9373<=1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_9422=this->_n_grid_9267;auto _n_index_9423=d::read(_n_at_9370);auto _n_value_9424=(d::truth((_n_age_9373<_n_FADE_9236))?_n_g_9372:(d::truth((_n_age_9373<0.95))?d::String(u":"):d::String(u".")));d::put(_n_array_9422,_n_index_9423,_n_value_9424);return _n_value_9424;})());
}

}
}
(void)(([&](){auto _n_argument_9425=std::floor(d::at(d::at(_n_joints_9348,0.0),0.0));auto _n_argument_9426=std::floor(d::at(d::at(_n_joints_9348,0.0),1.0));auto _n_argument_9427=d::String(u"+");return this->_n_put_9268(_n_argument_9425,_n_argument_9426,_n_argument_9427);})());
for(auto &&_n_item_9428:_n_RIMS_9239){d::check_cancel();double _n_j_9374=_n_item_9428;
(void)(([&](){auto _n_argument_9429=std::floor(d::at(d::at(_n_joints_9348,_n_j_9374),0.0));auto _n_argument_9430=std::floor(d::at(d::at(_n_joints_9348,_n_j_9374),1.0));auto _n_argument_9431=d::String(u"o");return this->_n_put_9268(_n_argument_9429,_n_argument_9430,_n_argument_9431);})());
}
auto _n_binding_9432=d::at(_n_joints_9348,(double(_n_joints_9348.size())-1.0));
double _n_tc_9375=d::at(_n_binding_9432,0.0);
double _n_tr_9376=d::at(_n_binding_9432,1.0);
(void)(([&](){auto _n_argument_9433=std::floor(_n_tc_9375);auto _n_argument_9434=std::floor(_n_tr_9376);auto _n_argument_9435=d::String(u"@");return this->_n_put_9268(_n_argument_9433,_n_argument_9434,_n_argument_9435);})());
d::Array<d::String,false> _n_lines_9377=d::Array<d::String,false>{};
{double _n_r_9378=0.0;
for(;d::truth((_n_r_9378<this->_n_rows_9245));(void)((_n_r_9378++))){d::check_cancel();(void)(_n_lines_9377.push(d::join(this->_n_grid_9267.slice((_n_r_9378*this->_n_cols_9244),((_n_r_9378+1.0)*this->_n_cols_9244)),d::String(u""))));
}}
return d::join(_n_lines_9377,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("epicycles").cols)*ascii::catalog_meta("epicycles").rows);auto _env=std::make_shared<_n_Record_9379>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &epicycles_meta(){return catalog_meta("epicycles");}
std::unique_ptr<Piece> make_epicycles(const AsciiPieceOptions &o){return std::make_unique<Native_epicycles>(o);}
}
