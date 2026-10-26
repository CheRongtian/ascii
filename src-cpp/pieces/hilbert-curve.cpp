// Direct, statically typed C++ from src/pieces/hilbert-curve.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13876;
struct _n_Record_13899;
struct _n_Record_13960;
struct _n_Record_13966;
struct _n_Record_13974;
struct _n_Record_13876{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13876> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13876>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13899{
double _p_r{};
double _p_c{};
double _p_into{};
double _p_out{};
std::optional<double> _p_a{};
std::optional<double> _p_b{};
std::optional<double> _p_corner{};
static std::shared_ptr<_n_Record_13899> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13899>();out->_p_r=d::decode<double>(j["r"]);out->_p_c=d::decode<double>(j["c"]);out->_p_into=d::decode<double>(j["into"]);out->_p_out=d::decode<double>(j["out"]);out->_p_a=d::decode<std::optional<double>>(j["a"]);out->_p_b=d::decode<std::optional<double>>(j["b"]);out->_p_corner=d::decode<std::optional<double>>(j["corner"]);return out;}
};
struct _n_Record_13960{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13960> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13960>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_13966{
double _p_1{};
double _p_2{};
double _p_4{};
double _p_8{};
static std::shared_ptr<_n_Record_13966> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13966>();out->_p_1=d::decode<double>(j["1"]);out->_p_2=d::decode<double>(j["2"]);out->_p_4=d::decode<double>(j["4"]);out->_p_8=d::decode<double>(j["8"]);return out;}
};
struct _n_Record_13974{
double _p_r{};
double _p_c{};
double _p_into{};
double _p_out{};
static std::shared_ptr<_n_Record_13974> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13974>();out->_p_r=d::decode<double>(j["r"]);out->_p_c=d::decode<double>(j["c"]);out->_p_into=d::decode<double>(j["into"]);out->_p_out=d::decode<double>(j["out"]);return out;}
};
void _n_gilbert_13886(d::Array<d::Array<double,false>,false> _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6);
std::shared_ptr<_n_Record_13876> _n_meta_13875=[](){return ([&](){auto _n_object_13963=std::make_shared<_n_Record_13876>();_n_object_13963->_p_name=d::String(u"hilbert curve");_n_object_13963->_p_category=d::String(u"generative");_n_object_13963->_p_note=d::String(u"a closed loop of two hilbert curves, with two lit runners");_n_object_13963->_p_cols=65.0;_n_object_13963->_p_rows=17.0;_n_object_13963->_p_fps=20.0;return _n_object_13963;})();}();
const double _n_GW_13877=[](){return 16.0;}();
const double _n_GH_13878=[](){return 8.0;}();
const double _n_SX_13879=[](){return 4.0;}();
const double _n_SY_13880=[](){return 2.0;}();
const double _n_OX_13881=[](){return 2.0;}();
const double _n_OY_13882=[](){return 1.0;}();
const double _n_LEN_13883=[](){return 30.0;}();
const double _n_TAIL_13884=[](){return 4.0;}();
const double _n_SPEED_13885=[](){return 16.0;}();
const double _n_L_13887=[](){return 1.0;}();
const double _n_R_13888=[](){return 2.0;}();
const double _n_U_13889=[](){return 4.0;}();
const double _n_D_13890=[](){return 8.0;}();
d::Dict<double,d::Array<d::String,false>> _n_GLYPHS_13891=[](){return ([&](){d::Dict<double,d::Array<d::String,false>> _n_dictionary_13964;_n_dictionary_13964.set(double(d::i32(_n_L_13887)|d::i32(_n_R_13888)),d::Array<d::String,false>{d::String(u"─"),d::String(u"╾"),d::String(u"╼"),d::String(u"━")});_n_dictionary_13964.set(double(d::i32(_n_U_13889)|d::i32(_n_D_13890)),d::Array<d::String,false>{d::String(u"│"),d::String(u"╿"),d::String(u"╽"),d::String(u"┃")});_n_dictionary_13964.set(double(d::i32(_n_R_13888)|d::i32(_n_D_13890)),d::Array<d::String,false>{d::String(u"╭"),d::String(u"┍"),d::String(u"┎"),d::String(u"┏")});_n_dictionary_13964.set(double(d::i32(_n_L_13887)|d::i32(_n_D_13890)),d::Array<d::String,false>{d::String(u"╮"),d::String(u"┑"),d::String(u"┒"),d::String(u"┓")});_n_dictionary_13964.set(double(d::i32(_n_R_13888)|d::i32(_n_U_13889)),d::Array<d::String,false>{d::String(u"╰"),d::String(u"┕"),d::String(u"┖"),d::String(u"┗")});_n_dictionary_13964.set(double(d::i32(_n_L_13887)|d::i32(_n_U_13889)),d::Array<d::String,false>{d::String(u"╯"),d::String(u"┙"),d::String(u"┚"),d::String(u"┛")});return _n_dictionary_13964;})();}();
d::Dict<double,double> _n_FIRST_13892=[](){return ([&](){d::Dict<double,double> _n_dictionary_13965;_n_dictionary_13965.set(double(d::i32(_n_L_13887)|d::i32(_n_R_13888)),_n_L_13887);_n_dictionary_13965.set(double(d::i32(_n_U_13889)|d::i32(_n_D_13890)),_n_U_13889);_n_dictionary_13965.set(double(d::i32(_n_R_13888)|d::i32(_n_D_13890)),_n_R_13888);_n_dictionary_13965.set(double(d::i32(_n_L_13887)|d::i32(_n_D_13890)),_n_L_13887);_n_dictionary_13965.set(double(d::i32(_n_R_13888)|d::i32(_n_U_13889)),_n_R_13888);_n_dictionary_13965.set(double(d::i32(_n_L_13887)|d::i32(_n_U_13889)),_n_L_13887);return _n_dictionary_13965;})();}();
d::Dict<double,double> _n_BACK_13893=[](){return ([&](){d::Dict<double,double> _n_dictionary_13967;_n_dictionary_13967.set(_n_L_13887,_n_R_13888);_n_dictionary_13967.set(_n_R_13888,_n_L_13887);_n_dictionary_13967.set(_n_U_13889,_n_D_13890);_n_dictionary_13967.set(_n_D_13890,_n_U_13889);return _n_dictionary_13967;})();}();
d::Dict<double,d::String> _n_DASH_13894=[](){return ([&](){d::Dict<double,d::String> _n_dictionary_13968;_n_dictionary_13968.set(double(d::i32(_n_L_13887)|d::i32(_n_R_13888)),d::String(u"╍"));_n_dictionary_13968.set(double(d::i32(_n_U_13889)|d::i32(_n_D_13890)),d::String(u"╏"));return _n_dictionary_13968;})();}();
void _n_gilbert_13886(d::Array<d::Array<double,false>,false> _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6){d::Array<d::Array<double,false>,false> _n_pts_13909=_a0;
double _n_x_13910=_a1;
double _n_y_13911=_a2;
double _n_ax_13912=_a3;
double _n_ay_13913=_a4;
double _n_bx_13914=_a5;
double _n_by_13915=_a6;
{
double _n_w_13916=std::fabs((_n_ax_13912+_n_ay_13913));
double _n_h_13917=std::fabs((_n_bx_13914+_n_by_13915));
auto _n_binding_13969=d::map(d::Array<double,false>{_n_ax_13912,_n_ay_13913,_n_bx_13914,_n_by_13915},d::sign);
double _n_dax_13918=d::at(_n_binding_13969,0.0);
double _n_day_13919=d::at(_n_binding_13969,1.0);
double _n_dbx_13920=d::at(_n_binding_13969,2.0);
double _n_dby_13921=d::at(_n_binding_13969,3.0);
if((d::truth((_n_h_13917==1.0))||d::truth((_n_w_13916==1.0)))){d::check_cancel();auto _n_binding_13970=(d::truth((_n_h_13917==1.0))?d::Array<double,false>{_n_dax_13918,_n_day_13919,_n_w_13916}:d::Array<double,false>{_n_dbx_13920,_n_dby_13921,_n_h_13917});
double _n_dx_13922=d::at(_n_binding_13970,0.0);
double _n_dy_13923=d::at(_n_binding_13970,1.0);
double _n_n_13924=d::at(_n_binding_13970,2.0);
{double _n_i_13925=0.0;
for(;d::truth((_n_i_13925<_n_n_13924));(void)((((_n_i_13925++),(_n_x_13910=(_n_x_13910+_n_dx_13922))),(_n_y_13911=(_n_y_13911+_n_dy_13923))))){d::check_cancel();(void)(_n_pts_13909.push(d::Array<double,false>{_n_x_13910,_n_y_13911}));
}}
return;
}
auto _n_binding_13971=d::map(d::Array<double,false>{_n_ax_13912,_n_ay_13913,_n_bx_13914,_n_by_13915},[&]( double _a0) mutable ->double{double _n_v_13930=_a0;
return std::floor((_n_v_13930/2.0));});
double _n_ax2_13926=d::at(_n_binding_13971,0.0);
double _n_ay2_13927=d::at(_n_binding_13971,1.0);
double _n_bx2_13928=d::at(_n_binding_13971,2.0);
double _n_by2_13929=d::at(_n_binding_13971,3.0);
if(d::truth(((2.0*_n_w_13916)>(3.0*_n_h_13917)))){d::check_cancel();if((d::truth(d::mod(std::fabs((_n_ax2_13926+_n_ay2_13927)),2.0))&&d::truth((_n_w_13916>2.0)))){d::check_cancel();(void)(((_n_ax2_13926=(_n_ax2_13926+_n_dax_13918)),(_n_ay2_13927=(_n_ay2_13927+_n_day_13919))));
}
(void)(_n_gilbert_13886(_n_pts_13909,_n_x_13910,_n_y_13911,_n_ax2_13926,_n_ay2_13927,_n_bx_13914,_n_by_13915));
(void)(_n_gilbert_13886(_n_pts_13909,(_n_x_13910+_n_ax2_13926),(_n_y_13911+_n_ay2_13927),(_n_ax_13912-_n_ax2_13926),(_n_ay_13913-_n_ay2_13927),_n_bx_13914,_n_by_13915));
}else {d::check_cancel();if((d::truth(d::mod(std::fabs((_n_bx2_13928+_n_by2_13929)),2.0))&&d::truth((_n_h_13917>2.0)))){d::check_cancel();(void)(((_n_bx2_13928=(_n_bx2_13928+_n_dbx_13920)),(_n_by2_13929=(_n_by2_13929+_n_dby_13921))));
}
(void)(_n_gilbert_13886(_n_pts_13909,_n_x_13910,_n_y_13911,_n_bx2_13928,_n_by2_13929,_n_ax2_13926,_n_ay2_13927));
(void)(_n_gilbert_13886(_n_pts_13909,(_n_x_13910+_n_bx2_13928),(_n_y_13911+_n_by2_13929),_n_ax_13912,_n_ay_13913,(_n_bx_13914-_n_bx2_13928),(_n_by_13915-_n_by2_13929)));
(void)(_n_gilbert_13886(_n_pts_13909,((_n_x_13910+(_n_ax_13912-_n_dax_13918))+(_n_bx2_13928-_n_dbx_13920)),((_n_y_13911+(_n_ay_13913-_n_day_13919))+(_n_by2_13929-_n_dby_13921)),(-d::number(_n_bx2_13928)),(-d::number(_n_by2_13929)),(-d::number((_n_ax_13912-_n_ax2_13926))),(-d::number((_n_ay_13913-_n_ay2_13927)))));
}

}
}

struct Native_hilbert_curve final:ascii::Piece{
double _n_cols_13895{};
double _n_rows_13896{};
d::Array<d::Array<double,false>,false> _n_pts_13897{};
d::Array<std::shared_ptr<_n_Record_13899>,false> _n_cells_13898{};
double _n_n_13901{};
double _n_d_13902{};
double _n_LAP_13904{};
double _n_corner_13905{};
d::Array<d::Array<d::String,false>,false> _n_grid_13908{};
std::function<d::String(double,std::shared_ptr<_n_Record_13960>)> _render;
double _n_dirOf_13900(double _a0,double _a1){double _n_dx_13931=_a0;
double _n_dy_13932=_a1;
return (d::truth((_n_dx_13931<0.0))?_n_L_13887:(d::truth((_n_dx_13931>0.0))?_n_R_13888:(d::truth((_n_dy_13932<0.0))?_n_U_13889:_n_D_13890)));}

double _n_half_13903(double _a0){double _n_arm_13942=_a0;
return (d::truth(double(d::i32(_n_arm_13942)&d::i32(double(d::i32(_n_L_13887)|d::i32(_n_R_13888)))))?0.5:1.0);}

double _n_behind_13906(double _a0,double _a1){double _n_at_13946=_a0;
double _n_head_13947=_a1;
return d::mod((d::mod((_n_head_13947-_n_at_13946),(this->_n_LAP_13904/2.0))+(this->_n_LAP_13904/2.0)),(this->_n_LAP_13904/2.0));}

bool _n_tail_13907(double _a0){double _n_b_13948=_a0;
return ([&]()->bool{auto _n_logical_13988=(_n_b_13948>=_n_LEN_13883);return d::truth(_n_logical_13988)?(_n_b_13948<(_n_LEN_13883+_n_TAIL_13884)):_n_logical_13988;})();}

explicit Native_hilbert_curve(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13972=_n_meta_13875;
this->_n_cols_13895=_n_binding_13972->_p_cols;
this->_n_rows_13896=_n_binding_13972->_p_rows;
this->_n_pts_13897=d::Array<d::Array<double,false>,false>{};
(void)(_n_gilbert_13886(this->_n_pts_13897,((_n_GW_13877/2.0)-1.0),0.0,0.0,_n_GH_13878,((-d::number(_n_GW_13877))/2.0),0.0));
(void)(_n_gilbert_13886(this->_n_pts_13897,(_n_GW_13877/2.0),(_n_GH_13878-1.0),0.0,(-d::number(_n_GH_13878)),(_n_GW_13877/2.0),0.0));
this->_n_cells_13898=d::Array<std::shared_ptr<_n_Record_13899>,false>{};
this->_n_n_13901=double(this->_n_pts_13897.size());
{double _n_k_13933=0.0;
for(;d::truth((_n_k_13933<this->_n_n_13901));(void)((_n_k_13933++))){d::check_cancel();auto _n_binding_13973=d::at(this->_n_pts_13897,_n_k_13933);
double _n_x_13934=d::at(_n_binding_13973,0.0);
double _n_y_13935=d::at(_n_binding_13973,1.0);
d::Array<double,false> _n_next_13936=d::at(this->_n_pts_13897,d::mod((_n_k_13933+1.0),this->_n_n_13901));
d::Array<double,false> _n_prev_13937=d::at(this->_n_pts_13897,d::mod(((_n_k_13933+this->_n_n_13901)-1.0),this->_n_n_13901));
double _n_out_13938=this->_n_dirOf_13900((d::at(_n_next_13936,0.0)-_n_x_13934),(d::at(_n_next_13936,1.0)-_n_y_13935));
(void)(this->_n_cells_13898.push(([&](){auto _n_object_13975=std::make_shared<_n_Record_13899>();_n_object_13975->_p_r=(_n_OY_13882+(_n_y_13935*_n_SY_13880));_n_object_13975->_p_c=(_n_OX_13881+(_n_x_13934*_n_SX_13879));_n_object_13975->_p_into=this->_n_dirOf_13900((d::at(_n_prev_13937,0.0)-_n_x_13934),(d::at(_n_prev_13937,1.0)-_n_y_13935));_n_object_13975->_p_out=_n_out_13938;return _n_object_13975;})()));
auto _n_binding_13976=(d::truth((_n_out_13938==_n_L_13887))?d::Array<double,false>{(-d::number(1.0)),0.0}:(d::truth((_n_out_13938==_n_R_13888))?d::Array<double,false>{1.0,0.0}:(d::truth((_n_out_13938==_n_U_13889))?d::Array<double,false>{0.0,(-d::number(1.0))}:d::Array<double,false>{0.0,1.0})));
double _n_dx_13939=d::at(_n_binding_13976,0.0);
double _n_dy_13940=d::at(_n_binding_13976,1.0);
{double _n_s_13941=1.0;
for(;d::truth((_n_s_13941<(d::truth(double(d::i32(_n_out_13938)&d::i32(double(d::i32(_n_L_13887)|d::i32(_n_R_13888)))))?_n_SX_13879:_n_SY_13880)));(void)((_n_s_13941++))){d::check_cancel();(void)(this->_n_cells_13898.push(([&](){auto _n_object_13978=std::make_shared<_n_Record_13899>();_n_object_13978->_p_r=((_n_OY_13882+(_n_y_13935*_n_SY_13880))+(_n_dy_13940*_n_s_13941));_n_object_13978->_p_c=((_n_OX_13881+(_n_x_13934*_n_SX_13879))+(_n_dx_13939*_n_s_13941));_n_object_13978->_p_into=_n_BACK_13893.get(_n_out_13938);_n_object_13978->_p_out=_n_out_13938;return _n_object_13978;})()));
}}
}}
this->_n_d_13902=0.0;
for(auto &&_n_item_13979:this->_n_cells_13898){d::check_cancel();std::shared_ptr<_n_Record_13899> _n_cell_13943=_n_item_13979;
{
(void)((_n_cell_13943->_p_a=std::optional<double>((this->_n_d_13902+(this->_n_half_13903(_n_cell_13943->_p_into)/2.0)))));
(void)((this->_n_d_13902=(this->_n_d_13902+this->_n_half_13903(_n_cell_13943->_p_into))));
(void)((_n_cell_13943->_p_b=std::optional<double>((this->_n_d_13902+(this->_n_half_13903(_n_cell_13943->_p_out)/2.0)))));
(void)((this->_n_d_13902=(this->_n_d_13902+this->_n_half_13903(_n_cell_13943->_p_out))));

}
}
this->_n_LAP_13904=this->_n_d_13902;
this->_n_corner_13905=0.0;
{double _n_k_13944=((2.0*double(this->_n_cells_13898.size()))-1.0);
for(;d::truth((_n_k_13944>=0.0));(void)((_n_k_13944--))){d::check_cancel();std::shared_ptr<_n_Record_13899> _n_cell_13945=d::at(this->_n_cells_13898,d::mod(_n_k_13944,double(this->_n_cells_13898.size())));
if(d::truth((!d::truth(_n_DASH_13894.get(double(d::i32(_n_cell_13945->_p_into)|d::i32(_n_cell_13945->_p_out))))))){d::check_cancel();(void)((this->_n_corner_13905=d::read(_n_cell_13945->_p_b)));
}else {d::check_cancel();(void)((_n_cell_13945->_p_corner=std::optional<double>(this->_n_corner_13905)));
}
}}
this->_n_grid_13908=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_13896,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_13895)).fill(d::String(u" "));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_13960> _a1) mutable ->d::String{double _n_t_13949=_a0;
{
double _n_head_13950=(40.0+(_n_t_13949*_n_SPEED_13885));
for(auto &&_n_item_13980:this->_n_cells_13898){d::check_cancel();std::shared_ptr<_n_Record_13899> _n_cell_13951=_n_item_13980;
{
double _n_mask_13952=double(d::i32(_n_cell_13951->_p_into)|d::i32(_n_cell_13951->_p_out));
double _n_bi_13953=this->_n_behind_13906(d::read(_n_cell_13951->_p_a),_n_head_13950);
double _n_bo_13954=this->_n_behind_13906(d::read(_n_cell_13951->_p_b),_n_head_13950);
bool _n_hi_13955=(_n_bi_13953<_n_LEN_13883);
bool _n_ho_13956=(_n_bo_13954<_n_LEN_13883);
if((((d::truth(_n_DASH_13894.get(_n_mask_13952))&&d::truth(this->_n_tail_13907(_n_bi_13953)))&&d::truth(this->_n_tail_13907(_n_bo_13954)))&&d::truth((!d::truth(this->_n_tail_13907(this->_n_behind_13906(d::read(_n_cell_13951->_p_corner),_n_head_13950))))))){d::check_cancel();(void)(([&](){auto&& _n_array_13981=d::at(this->_n_grid_13908,_n_cell_13951->_p_r);auto _n_index_13982=_n_cell_13951->_p_c;auto _n_value_13983=_n_DASH_13894.get(_n_mask_13952);d::put(_n_array_13981,_n_index_13982,_n_value_13983);return _n_value_13983;})());
continue;
}
auto _n_binding_13984=(d::truth((_n_FIRST_13892.get(_n_mask_13952)==_n_cell_13951->_p_into))?d::Array<bool,false>{_n_hi_13955,_n_ho_13956}:d::Array<bool,false>{_n_ho_13956,_n_hi_13955});
bool _n_first_13957=d::at(_n_binding_13984,0.0);
bool _n_second_13958=d::at(_n_binding_13984,1.0);
(void)(([&](){auto&& _n_array_13985=d::at(this->_n_grid_13908,_n_cell_13951->_p_r);auto _n_index_13986=_n_cell_13951->_p_c;auto _n_value_13987=d::at(_n_GLYPHS_13891.get(_n_mask_13952),((d::truth(_n_first_13957)?1.0:0.0)+(d::truth(_n_second_13958)?2.0:0.0)));d::put(_n_array_13985,_n_index_13986,_n_value_13987);return _n_value_13987;})());

}
}
return d::join(d::map(this->_n_grid_13908,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_13959=_a0;
return d::join(_n_row_13959,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("hilbert-curve").cols)*ascii::catalog_meta("hilbert-curve").rows);auto _env=std::make_shared<_n_Record_13960>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &hilbert_curve_meta(){return catalog_meta("hilbert-curve");}
std::unique_ptr<Piece> make_hilbert_curve(const AsciiPieceOptions &o){return std::make_unique<Native_hilbert_curve>(o);}
}
