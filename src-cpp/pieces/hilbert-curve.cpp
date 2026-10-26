// Direct, statically typed C++ from src/pieces/hilbert-curve.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_13875;
struct _n_Record_13898;
struct _n_Record_13959;
struct _n_Record_13965;
struct _n_Record_13973;
struct _n_Record_13875{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_13875> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13875>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_13898{
double _p_r{};
double _p_c{};
double _p_into{};
double _p_out{};
std::optional<double> _p_a{};
std::optional<double> _p_b{};
std::optional<double> _p_corner{};
static std::shared_ptr<_n_Record_13898> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13898>();out->_p_r=d::decode<double>(j["r"]);out->_p_c=d::decode<double>(j["c"]);out->_p_into=d::decode<double>(j["into"]);out->_p_out=d::decode<double>(j["out"]);out->_p_a=d::decode<std::optional<double>>(j["a"]);out->_p_b=d::decode<std::optional<double>>(j["b"]);out->_p_corner=d::decode<std::optional<double>>(j["corner"]);return out;}
};
struct _n_Record_13959{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_13959> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13959>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_13965{
double _p_1{};
double _p_2{};
double _p_4{};
double _p_8{};
static std::shared_ptr<_n_Record_13965> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13965>();out->_p_1=d::decode<double>(j["1"]);out->_p_2=d::decode<double>(j["2"]);out->_p_4=d::decode<double>(j["4"]);out->_p_8=d::decode<double>(j["8"]);return out;}
};
struct _n_Record_13973{
double _p_r{};
double _p_c{};
double _p_into{};
double _p_out{};
static std::shared_ptr<_n_Record_13973> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_13973>();out->_p_r=d::decode<double>(j["r"]);out->_p_c=d::decode<double>(j["c"]);out->_p_into=d::decode<double>(j["into"]);out->_p_out=d::decode<double>(j["out"]);return out;}
};
void _n_gilbert_13885(d::Array<std::array<double,2>,false> _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6);
std::shared_ptr<_n_Record_13875> _n_meta_13874=[](){return ([&](){auto _n_object_13962=std::make_shared<_n_Record_13875>();_n_object_13962->_p_name=d::String(u"hilbert curve");_n_object_13962->_p_category=d::String(u"generative");_n_object_13962->_p_note=d::String(u"a closed loop of two hilbert curves, with two lit runners");_n_object_13962->_p_cols=65.0;_n_object_13962->_p_rows=17.0;_n_object_13962->_p_fps=20.0;return _n_object_13962;})();}();
const double _n_GW_13876=[](){return 16.0;}();
const double _n_GH_13877=[](){return 8.0;}();
const double _n_SX_13878=[](){return 4.0;}();
const double _n_SY_13879=[](){return 2.0;}();
const double _n_OX_13880=[](){return 2.0;}();
const double _n_OY_13881=[](){return 1.0;}();
const double _n_LEN_13882=[](){return 30.0;}();
const double _n_TAIL_13883=[](){return 4.0;}();
const double _n_SPEED_13884=[](){return 16.0;}();
const double _n_L_13886=[](){return 1.0;}();
const double _n_R_13887=[](){return 2.0;}();
const double _n_U_13888=[](){return 4.0;}();
const double _n_D_13889=[](){return 8.0;}();
d::Dict<double,d::Array<d::String,false>> _n_GLYPHS_13890=[](){return ([&](){d::Dict<double,d::Array<d::String,false>> _n_dictionary_13963;_n_dictionary_13963.set(double(d::i32(_n_L_13886)|d::i32(_n_R_13887)),d::Array<d::String,false>{d::String(u"─"),d::String(u"╾"),d::String(u"╼"),d::String(u"━")});_n_dictionary_13963.set(double(d::i32(_n_U_13888)|d::i32(_n_D_13889)),d::Array<d::String,false>{d::String(u"│"),d::String(u"╿"),d::String(u"╽"),d::String(u"┃")});_n_dictionary_13963.set(double(d::i32(_n_R_13887)|d::i32(_n_D_13889)),d::Array<d::String,false>{d::String(u"╭"),d::String(u"┍"),d::String(u"┎"),d::String(u"┏")});_n_dictionary_13963.set(double(d::i32(_n_L_13886)|d::i32(_n_D_13889)),d::Array<d::String,false>{d::String(u"╮"),d::String(u"┑"),d::String(u"┒"),d::String(u"┓")});_n_dictionary_13963.set(double(d::i32(_n_R_13887)|d::i32(_n_U_13888)),d::Array<d::String,false>{d::String(u"╰"),d::String(u"┕"),d::String(u"┖"),d::String(u"┗")});_n_dictionary_13963.set(double(d::i32(_n_L_13886)|d::i32(_n_U_13888)),d::Array<d::String,false>{d::String(u"╯"),d::String(u"┙"),d::String(u"┚"),d::String(u"┛")});return _n_dictionary_13963;})();}();
d::Dict<double,double> _n_FIRST_13891=[](){return ([&](){d::Dict<double,double> _n_dictionary_13964;_n_dictionary_13964.set(double(d::i32(_n_L_13886)|d::i32(_n_R_13887)),_n_L_13886);_n_dictionary_13964.set(double(d::i32(_n_U_13888)|d::i32(_n_D_13889)),_n_U_13888);_n_dictionary_13964.set(double(d::i32(_n_R_13887)|d::i32(_n_D_13889)),_n_R_13887);_n_dictionary_13964.set(double(d::i32(_n_L_13886)|d::i32(_n_D_13889)),_n_L_13886);_n_dictionary_13964.set(double(d::i32(_n_R_13887)|d::i32(_n_U_13888)),_n_R_13887);_n_dictionary_13964.set(double(d::i32(_n_L_13886)|d::i32(_n_U_13888)),_n_L_13886);return _n_dictionary_13964;})();}();
d::Dict<double,double> _n_BACK_13892=[](){return ([&](){d::Dict<double,double> _n_dictionary_13966;_n_dictionary_13966.set(_n_L_13886,_n_R_13887);_n_dictionary_13966.set(_n_R_13887,_n_L_13886);_n_dictionary_13966.set(_n_U_13888,_n_D_13889);_n_dictionary_13966.set(_n_D_13889,_n_U_13888);return _n_dictionary_13966;})();}();
d::Dict<double,d::String> _n_DASH_13893=[](){return ([&](){d::Dict<double,d::String> _n_dictionary_13967;_n_dictionary_13967.set(double(d::i32(_n_L_13886)|d::i32(_n_R_13887)),d::String(u"╍"));_n_dictionary_13967.set(double(d::i32(_n_U_13888)|d::i32(_n_D_13889)),d::String(u"╏"));return _n_dictionary_13967;})();}();
void _n_gilbert_13885(d::Array<std::array<double,2>,false> _a0,double _a1,double _a2,double _a3,double _a4,double _a5,double _a6){d::Array<std::array<double,2>,false> _n_pts_13908=_a0;
double _n_x_13909=_a1;
double _n_y_13910=_a2;
double _n_ax_13911=_a3;
double _n_ay_13912=_a4;
double _n_bx_13913=_a5;
double _n_by_13914=_a6;
{
double _n_w_13915=std::fabs((_n_ax_13911+_n_ay_13912));
double _n_h_13916=std::fabs((_n_bx_13913+_n_by_13914));
auto _n_binding_13968=d::map(d::Array<double,false>{_n_ax_13911,_n_ay_13912,_n_bx_13913,_n_by_13914},d::sign);
double _n_dax_13917=d::at(_n_binding_13968,0.0);
double _n_day_13918=d::at(_n_binding_13968,1.0);
double _n_dbx_13919=d::at(_n_binding_13968,2.0);
double _n_dby_13920=d::at(_n_binding_13968,3.0);
if((d::truth((_n_h_13916==1.0))||d::truth((_n_w_13915==1.0)))){d::check_cancel();auto _n_binding_13969=(d::truth((_n_h_13916==1.0))?std::array<double,3>{_n_dax_13917,_n_day_13918,_n_w_13915}:std::array<double,3>{_n_dbx_13919,_n_dby_13920,_n_h_13916});
double _n_dx_13921=d::at(_n_binding_13969,0.0);
double _n_dy_13922=d::at(_n_binding_13969,1.0);
double _n_n_13923=d::at(_n_binding_13969,2.0);
{double _n_i_13924=0.0;
for(;d::truth((_n_i_13924<_n_n_13923));(void)((((_n_i_13924++),(_n_x_13909=(_n_x_13909+_n_dx_13921))),(_n_y_13910=(_n_y_13910+_n_dy_13922))))){d::check_cancel();(void)(_n_pts_13908.push(std::array<double,2>{_n_x_13909,_n_y_13910}));
}}
return;
}
auto _n_binding_13970=d::map(d::Array<double,false>{_n_ax_13911,_n_ay_13912,_n_bx_13913,_n_by_13914},[&]( double _a0) mutable ->double{double _n_v_13929=_a0;
return std::floor((_n_v_13929/2.0));});
double _n_ax2_13925=d::at(_n_binding_13970,0.0);
double _n_ay2_13926=d::at(_n_binding_13970,1.0);
double _n_bx2_13927=d::at(_n_binding_13970,2.0);
double _n_by2_13928=d::at(_n_binding_13970,3.0);
if(d::truth(((2.0*_n_w_13915)>(3.0*_n_h_13916)))){d::check_cancel();if((d::truth(d::mod(std::fabs((_n_ax2_13925+_n_ay2_13926)),2.0))&&d::truth((_n_w_13915>2.0)))){d::check_cancel();(void)(((_n_ax2_13925=(_n_ax2_13925+_n_dax_13917)),(_n_ay2_13926=(_n_ay2_13926+_n_day_13918))));
}
(void)(_n_gilbert_13885(_n_pts_13908,_n_x_13909,_n_y_13910,_n_ax2_13925,_n_ay2_13926,_n_bx_13913,_n_by_13914));
(void)(_n_gilbert_13885(_n_pts_13908,(_n_x_13909+_n_ax2_13925),(_n_y_13910+_n_ay2_13926),(_n_ax_13911-_n_ax2_13925),(_n_ay_13912-_n_ay2_13926),_n_bx_13913,_n_by_13914));
}else {d::check_cancel();if((d::truth(d::mod(std::fabs((_n_bx2_13927+_n_by2_13928)),2.0))&&d::truth((_n_h_13916>2.0)))){d::check_cancel();(void)(((_n_bx2_13927=(_n_bx2_13927+_n_dbx_13919)),(_n_by2_13928=(_n_by2_13928+_n_dby_13920))));
}
(void)(_n_gilbert_13885(_n_pts_13908,_n_x_13909,_n_y_13910,_n_bx2_13927,_n_by2_13928,_n_ax2_13925,_n_ay2_13926));
(void)(_n_gilbert_13885(_n_pts_13908,(_n_x_13909+_n_bx2_13927),(_n_y_13910+_n_by2_13928),_n_ax_13911,_n_ay_13912,(_n_bx_13913-_n_bx2_13927),(_n_by_13914-_n_by2_13928)));
(void)(_n_gilbert_13885(_n_pts_13908,((_n_x_13909+(_n_ax_13911-_n_dax_13917))+(_n_bx2_13927-_n_dbx_13919)),((_n_y_13910+(_n_ay_13912-_n_day_13918))+(_n_by2_13928-_n_dby_13920)),(-d::number(_n_bx2_13927)),(-d::number(_n_by2_13928)),(-d::number((_n_ax_13911-_n_ax2_13925))),(-d::number((_n_ay_13912-_n_ay2_13926)))));
}

}
}

struct Native_hilbert_curve final:ascii::Piece{
double _n_cols_13894{};
double _n_rows_13895{};
d::Array<std::array<double,2>,false> _n_pts_13896{};
d::Array<std::shared_ptr<_n_Record_13898>,false> _n_cells_13897{};
double _n_n_13900{};
double _n_d_13901{};
double _n_LAP_13903{};
double _n_corner_13904{};
d::Array<d::Array<d::String,false>,false> _n_grid_13907{};
std::function<d::String(double,std::shared_ptr<_n_Record_13959>)> _render;
double _n_dirOf_13899(double _a0,double _a1){double _n_dx_13930=_a0;
double _n_dy_13931=_a1;
return (d::truth((_n_dx_13930<0.0))?_n_L_13886:(d::truth((_n_dx_13930>0.0))?_n_R_13887:(d::truth((_n_dy_13931<0.0))?_n_U_13888:_n_D_13889)));}

double _n_half_13902(double _a0){double _n_arm_13941=_a0;
return (d::truth(double(d::i32(_n_arm_13941)&d::i32(double(d::i32(_n_L_13886)|d::i32(_n_R_13887)))))?0.5:1.0);}

double _n_behind_13905(double _a0,double _a1){double _n_at_13945=_a0;
double _n_head_13946=_a1;
return d::mod((d::mod((_n_head_13946-_n_at_13945),(this->_n_LAP_13903/2.0))+(this->_n_LAP_13903/2.0)),(this->_n_LAP_13903/2.0));}

bool _n_tail_13906(double _a0){double _n_b_13947=_a0;
return ([&]()->bool{auto _n_logical_13987=(_n_b_13947>=_n_LEN_13882);return d::truth(_n_logical_13987)?(_n_b_13947<(_n_LEN_13882+_n_TAIL_13883)):_n_logical_13987;})();}

explicit Native_hilbert_curve(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_13971=_n_meta_13874;
this->_n_cols_13894=_n_binding_13971->_p_cols;
this->_n_rows_13895=_n_binding_13971->_p_rows;
this->_n_pts_13896=d::Array<std::array<double,2>,false>{};
(void)(_n_gilbert_13885(this->_n_pts_13896,((_n_GW_13876/2.0)-1.0),0.0,0.0,_n_GH_13877,((-d::number(_n_GW_13876))/2.0),0.0));
(void)(_n_gilbert_13885(this->_n_pts_13896,(_n_GW_13876/2.0),(_n_GH_13877-1.0),0.0,(-d::number(_n_GH_13877)),(_n_GW_13876/2.0),0.0));
this->_n_cells_13897=d::Array<std::shared_ptr<_n_Record_13898>,false>{};
this->_n_n_13900=double(this->_n_pts_13896.size());
{double _n_k_13932=0.0;
for(;d::truth((_n_k_13932<this->_n_n_13900));(void)((_n_k_13932++))){d::check_cancel();auto _n_binding_13972=d::at(this->_n_pts_13896,_n_k_13932);
double _n_x_13933=d::at(_n_binding_13972,0.0);
double _n_y_13934=d::at(_n_binding_13972,1.0);
auto&& _n_next_13935=d::at(this->_n_pts_13896,d::mod((_n_k_13932+1.0),this->_n_n_13900));
auto&& _n_prev_13936=d::at(this->_n_pts_13896,d::mod(((_n_k_13932+this->_n_n_13900)-1.0),this->_n_n_13900));
double _n_out_13937=this->_n_dirOf_13899((d::at(_n_next_13935,0.0)-_n_x_13933),(d::at(_n_next_13935,1.0)-_n_y_13934));
(void)(this->_n_cells_13897.push(([&](){auto _n_object_13974=std::make_shared<_n_Record_13898>();_n_object_13974->_p_r=(_n_OY_13881+(_n_y_13934*_n_SY_13879));_n_object_13974->_p_c=(_n_OX_13880+(_n_x_13933*_n_SX_13878));_n_object_13974->_p_into=this->_n_dirOf_13899((d::at(_n_prev_13936,0.0)-_n_x_13933),(d::at(_n_prev_13936,1.0)-_n_y_13934));_n_object_13974->_p_out=_n_out_13937;return _n_object_13974;})()));
auto _n_binding_13975=(d::truth((_n_out_13937==_n_L_13886))?std::array<double,2>{(-d::number(1.0)),0.0}:(d::truth((_n_out_13937==_n_R_13887))?std::array<double,2>{1.0,0.0}:(d::truth((_n_out_13937==_n_U_13888))?std::array<double,2>{0.0,(-d::number(1.0))}:std::array<double,2>{0.0,1.0})));
double _n_dx_13938=d::at(_n_binding_13975,0.0);
double _n_dy_13939=d::at(_n_binding_13975,1.0);
{double _n_s_13940=1.0;
for(;d::truth((_n_s_13940<(d::truth(double(d::i32(_n_out_13937)&d::i32(double(d::i32(_n_L_13886)|d::i32(_n_R_13887)))))?_n_SX_13878:_n_SY_13879)));(void)((_n_s_13940++))){d::check_cancel();(void)(this->_n_cells_13897.push(([&](){auto _n_object_13977=std::make_shared<_n_Record_13898>();_n_object_13977->_p_r=((_n_OY_13881+(_n_y_13934*_n_SY_13879))+(_n_dy_13939*_n_s_13940));_n_object_13977->_p_c=((_n_OX_13880+(_n_x_13933*_n_SX_13878))+(_n_dx_13938*_n_s_13940));_n_object_13977->_p_into=_n_BACK_13892.get(_n_out_13937);_n_object_13977->_p_out=_n_out_13937;return _n_object_13977;})()));
}}
}}
this->_n_d_13901=0.0;
for(auto &&_n_item_13978:this->_n_cells_13897){d::check_cancel();std::shared_ptr<_n_Record_13898> _n_cell_13942=_n_item_13978;
{
(void)((_n_cell_13942->_p_a=std::optional<double>((this->_n_d_13901+(this->_n_half_13902(_n_cell_13942->_p_into)/2.0)))));
(void)((this->_n_d_13901=(this->_n_d_13901+this->_n_half_13902(_n_cell_13942->_p_into))));
(void)((_n_cell_13942->_p_b=std::optional<double>((this->_n_d_13901+(this->_n_half_13902(_n_cell_13942->_p_out)/2.0)))));
(void)((this->_n_d_13901=(this->_n_d_13901+this->_n_half_13902(_n_cell_13942->_p_out))));

}
}
this->_n_LAP_13903=this->_n_d_13901;
this->_n_corner_13904=0.0;
{double _n_k_13943=((2.0*double(this->_n_cells_13897.size()))-1.0);
for(;d::truth((_n_k_13943>=0.0));(void)((_n_k_13943--))){d::check_cancel();std::shared_ptr<_n_Record_13898> _n_cell_13944=d::at(this->_n_cells_13897,d::mod(_n_k_13943,double(this->_n_cells_13897.size())));
if(d::truth((!d::truth(_n_DASH_13893.get(double(d::i32(_n_cell_13944->_p_into)|d::i32(_n_cell_13944->_p_out))))))){d::check_cancel();(void)((this->_n_corner_13904=d::read(_n_cell_13944->_p_b)));
}else {d::check_cancel();(void)((_n_cell_13944->_p_corner=std::optional<double>(this->_n_corner_13904)));
}
}}
this->_n_grid_13907=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_13895,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_13894)).fill(d::String(u" "));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_13959> _a1) mutable ->d::String{double _n_t_13948=_a0;
{
double _n_head_13949=(40.0+(_n_t_13948*_n_SPEED_13884));
for(auto &&_n_item_13979:this->_n_cells_13897){d::check_cancel();std::shared_ptr<_n_Record_13898> _n_cell_13950=_n_item_13979;
{
double _n_mask_13951=double(d::i32(_n_cell_13950->_p_into)|d::i32(_n_cell_13950->_p_out));
double _n_bi_13952=this->_n_behind_13905(d::read(_n_cell_13950->_p_a),_n_head_13949);
double _n_bo_13953=this->_n_behind_13905(d::read(_n_cell_13950->_p_b),_n_head_13949);
bool _n_hi_13954=(_n_bi_13952<_n_LEN_13882);
bool _n_ho_13955=(_n_bo_13953<_n_LEN_13882);
if((((d::truth(_n_DASH_13893.get(_n_mask_13951))&&d::truth(this->_n_tail_13906(_n_bi_13952)))&&d::truth(this->_n_tail_13906(_n_bo_13953)))&&d::truth((!d::truth(this->_n_tail_13906(this->_n_behind_13905(d::read(_n_cell_13950->_p_corner),_n_head_13949))))))){d::check_cancel();(void)(([&](){auto&& _n_array_13980=d::at(this->_n_grid_13907,_n_cell_13950->_p_r);auto _n_index_13981=_n_cell_13950->_p_c;auto _n_value_13982=_n_DASH_13893.get(_n_mask_13951);d::put(_n_array_13980,_n_index_13981,_n_value_13982);return _n_value_13982;})());
continue;
}
auto _n_binding_13983=(d::truth((_n_FIRST_13891.get(_n_mask_13951)==_n_cell_13950->_p_into))?d::Array<bool,false>{_n_hi_13954,_n_ho_13955}:d::Array<bool,false>{_n_ho_13955,_n_hi_13954});
bool _n_first_13956=d::at(_n_binding_13983,0.0);
bool _n_second_13957=d::at(_n_binding_13983,1.0);
(void)(([&](){auto&& _n_array_13984=d::at(this->_n_grid_13907,_n_cell_13950->_p_r);auto _n_index_13985=_n_cell_13950->_p_c;auto _n_value_13986=d::at(_n_GLYPHS_13890.get(_n_mask_13951),((d::truth(_n_first_13956)?1.0:0.0)+(d::truth(_n_second_13957)?2.0:0.0)));d::put(_n_array_13984,_n_index_13985,_n_value_13986);return _n_value_13986;})());

}
}
return d::join(d::map(this->_n_grid_13907,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_13958=_a0;
return d::join(_n_row_13958,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("hilbert-curve").cols)*ascii::catalog_meta("hilbert-curve").rows);auto _env=std::make_shared<_n_Record_13959>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &hilbert_curve_meta(){return catalog_meta("hilbert-curve");}
std::unique_ptr<Piece> make_hilbert_curve(const AsciiPieceOptions &o){return std::make_unique<Native_hilbert_curve>(o);}
}
