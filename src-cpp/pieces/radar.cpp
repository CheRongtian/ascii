// Direct, statically typed C++ from src/pieces/radar.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25612;
struct _n_Record_25613;
struct _n_Record_25640;
struct _n_Record_25743;
struct _n_Record_25744;
struct _n_Record_25612{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_25613> _p_options{};
static std::shared_ptr<_n_Record_25612> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25612>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_25613>>(j["options"]);return out;}
};
struct _n_Record_25613{
double _p_range{};
d::String _p_unit{};
static std::shared_ptr<_n_Record_25613> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25613>();out->_p_range=d::decode<double>(j["range"]);out->_p_unit=d::decode<d::String>(j["unit"]);return out;}
};
struct _n_Record_25640{
double _p_h{};
double _p_off{};
double _p_v{};
double _p_L{};
double _p_u0{};
double _p_size{};
static std::shared_ptr<_n_Record_25640> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25640>();out->_p_h=d::decode<double>(j["h"]);out->_p_off=d::decode<double>(j["off"]);out->_p_v=d::decode<double>(j["v"]);out->_p_L=d::decode<double>(j["L"]);out->_p_u0=d::decode<double>(j["u0"]);out->_p_size=d::decode<double>(j["size"]);return out;}
};
struct _n_Record_25743{
std::optional<double> _p_range{};
std::optional<d::String> _p_unit{};
static std::shared_ptr<_n_Record_25743> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25743>();out->_p_range=d::decode<std::optional<double>>(j["range"]);out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);return out;}
};
struct _n_Record_25744{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25744> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25744>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_25612> _n_meta_25611=[](){return ([&](){auto _n_object_25749=std::make_shared<_n_Record_25612>();_n_object_25749->_p_name=d::String(u"radar");_n_object_25749->_p_category=d::String(u"data");_n_object_25749->_p_note=d::String(u"rotating sweep with afterglow, contacts fade between passes");_n_object_25749->_p_cols=53.0;_n_object_25749->_p_rows=25.0;_n_object_25749->_p_fps=30.0;_n_object_25749->_p_options=([&](){auto _n_object_25751=std::make_shared<_n_Record_25613>();_n_object_25751->_p_range=24.0;_n_object_25751->_p_unit=d::String(u"nm");return _n_object_25751;})();return _n_object_25749;})();}();
const double _n_R_25614=[](){return 19.0;}();
const double _n_TURN_25615=[](){return 4.0;}();
const double _n_TRAIL_25616=[](){return 0.8;}();
const double _n_FADE_25617=[](){return 2.4;}();
d::Array<d::String,false> _n_HALF_25618=[](){return d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};}();
const d::String _n_SHADE_25619=[](){return d::String(u" ░▒▓█");}();
const double _n_TAU_25620=[](){return (ascii::PI*2.0);}();

struct Native_radar final:ascii::Piece{
double _n_range_25621{};
d::String _n_unit_25622{};
double _n_cols_25623{};
double _n_rows_25624{};
double _n_CX_25625{};
double _n_CY_25626{};
d::Array<d::String,false> _n_back_25629{};
d::Array<uint8_t,true> _n_ring_25631{};
std::function<void(double,double)> _n_plot_25632{};
double _n_RB_25633{};
d::Array<std::array<double,2>,false> _n_inside_25635{};
d::Array<std::shared_ptr<std::tuple<double,double,bool>>,false> _n_land_25638{};
d::Array<std::shared_ptr<_n_Record_25640>,false> _n_tracks_25639{};
d::Array<d::String,false> _n_out_25642{};
std::function<d::String(double,std::shared_ptr<_n_Record_25744>)> _render;
double _n_cell_25627(double _a0,double _a1){double _n_x_25644=_a0;
double _n_y_25645=_a1;
return ([&](){auto _n_left_25810=d::round(_n_x_25644);auto _n_right_25811=(double(d::i32(d::round((_n_y_25645-0.01)))>>(d::u32(1.0)&31))*this->_n_cols_25623);return (_n_left_25810+_n_right_25811);})();}

double _n_bearing_25628(double _a0,double _a1){double _n_x_25646=_a0;
double _n_y_25647=_a1;
return d::mod((std::atan2((_n_x_25646-this->_n_CX_25625),(this->_n_CY_25626-_n_y_25647))+_n_TAU_25620),_n_TAU_25620);}

void _n_four_25630(double _a0,double _a1,std::function<void(double,double)> _a2){double _n_x_25648=_a0;
double _n_y_25649=_a1;
std::function<void(double,double)> _n_f_25650=_a2;
{
double _n_c_25653=d::round(_n_x_25648);
double _n_p_25654=d::round((_n_y_25649-0.01));
for(auto &&_n_item_25812:d::Array<d::Array<double,false>,false>{d::Array<double,false>{_n_c_25653,_n_p_25654},d::Array<double,false>{((2.0*this->_n_CX_25625)-_n_c_25653),_n_p_25654},d::Array<double,false>{_n_c_25653,((2.0*this->_n_CY_25626)-_n_p_25654)},d::Array<double,false>{((2.0*this->_n_CX_25625)-_n_c_25653),((2.0*this->_n_CY_25626)-_n_p_25654)}}){d::check_cancel();auto _n_binding_25813=_n_item_25812;
double _n_cc_25655=d::at(_n_binding_25813,0.0);
double _n_pp_25656=d::at(_n_binding_25813,1.0);
(void)(_n_f_25650(_n_cc_25655,_n_pp_25656));
}

}
}

void _n_put_25634(d::String _a0,double _a1,double _a2){d::String _n_s_25681=_a0;
double _n_c_25682=_a1;
double _n_r_25683=_a2;
{
{double _n_i_25684=0.0;
for(;d::truth((_n_i_25684<double(_n_s_25681.size())));(void)((_n_i_25684++))){d::check_cancel();(void)(([&](){auto&& _n_array_25814=this->_n_back_25629;auto _n_index_25815=((_n_c_25682+_n_i_25684)+(_n_r_25683*this->_n_cols_25623));auto _n_value_25816=d::at(_n_s_25681,_n_i_25684);d::put(_n_array_25814,_n_index_25815,_n_value_25816);return _n_value_25816;})());
}}

}
}

double _n_shore_25636(double _a0){double _n_b_25689=_a0;
return (_n_R_25614*([&](){auto _n_left_25817=([&](){auto _n_left_25819=(0.66+(0.09*std::sin(((_n_b_25689*5.0)+0.6))));auto _n_right_25820=(0.05*std::sin((_n_b_25689*13.0)));return (_n_left_25819+_n_right_25820);})();auto _n_right_25818=(2.2*([&](){auto _n_argument_25821=0.0;auto _n_argument_25822=(std::fabs((_n_b_25689-4.15))-0.62);return d::maximum({_n_argument_25821,_n_argument_25822});})());return (_n_left_25817+_n_right_25818);})());}

bool _n_isLand_25637(double _a0,double _a1){double _n_x_25690=_a0;
double _n_y_25691=_a1;
{
double _n_b_25692=this->_n_bearing_25628(_n_x_25690,_n_y_25691);
return ([&]()->bool{auto _n_logical_25823=([&]()->bool{auto _n_logical_25826=(_n_b_25692>3.3);return d::truth(_n_logical_25826)?(_n_b_25692<5.0):_n_logical_25826;})();return d::truth(_n_logical_25823)?([&](){auto _n_left_25824=d::hypot(std::initializer_list<double>{(_n_x_25690-this->_n_CX_25625),(_n_y_25691-this->_n_CY_25626)});auto _n_right_25825=this->_n_shore_25636(_n_b_25692);return (_n_left_25824>_n_right_25825);})():_n_logical_25823;})();

}
}

std::array<double,2> _n_where_25641(double _a0,double _a1){double _n_k_25707=_a0;
double _n_t_25708=_a1;
{
auto _n_binding_25827=d::at(this->_n_tracks_25639,_n_k_25707);
double _n_h_25709=_n_binding_25827->_p_h;
double _n_off_25710=_n_binding_25827->_p_off;
double _n_v_25711=_n_binding_25827->_p_v;
double _n_L_25712=_n_binding_25827->_p_L;
double _n_u0_25713=_n_binding_25827->_p_u0;
double _n_u_25714=(d::mod((d::mod((_n_u0_25713+(_n_v_25711*_n_t_25708)),_n_L_25712)+_n_L_25712),_n_L_25712)-(_n_L_25712/2.0));
return std::array<double,2>{([&](){auto _n_left_25828=(this->_n_CX_25625+(_n_u_25714*std::sin(_n_h_25709)));auto _n_right_25829=(_n_off_25710*std::cos(_n_h_25709));return (_n_left_25828+_n_right_25829);})(),(this->_n_CY_25626-([&](){auto _n_left_25830=(_n_u_25714*std::cos(_n_h_25709));auto _n_right_25831=(_n_off_25710*std::sin(_n_h_25709));return (_n_left_25830-_n_right_25831);})())};

}
}

explicit Native_radar(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_25752=d::decode<std::shared_ptr<_n_Record_25743>>(_options.data);
this->_n_range_25621=(d::present(_n_binding_25752->_p_range)?d::read(_n_binding_25752->_p_range):24.0);
this->_n_unit_25622=(d::present(_n_binding_25752->_p_unit)?d::read(_n_binding_25752->_p_unit):d::String(u"nm"));
auto _n_binding_25753=_n_meta_25611;
this->_n_cols_25623=_n_binding_25753->_p_cols;
this->_n_rows_25624=_n_binding_25753->_p_rows;
this->_n_CX_25625=26.0;
this->_n_CY_25626=24.5;
this->_n_back_25629=d::Array<d::String,false>(size_t((this->_n_cols_25623*this->_n_rows_25624))).fill(d::String(u" "));
this->_n_ring_25631=d::Array<uint8_t,true>(size_t(((this->_n_cols_25623*this->_n_rows_25624)*2.0)));
this->_n_plot_25632=[=]( double _a0,double _a1) mutable ->void{double _n_c_25657=_a0;
double _n_p_25658=_a1;
{
if((((d::truth((_n_c_25657>=0.0))&&d::truth((_n_c_25657<this->_n_cols_25623)))&&d::truth((_n_p_25658>=0.0)))&&d::truth((_n_p_25658<(this->_n_rows_25624*2.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_25754=this->_n_ring_25631;auto _n_index_25755=(_n_c_25657+(_n_p_25658*this->_n_cols_25623));auto _n_value_25756=1.0;d::put(_n_array_25754,_n_index_25755,_n_value_25756);return _n_value_25756;})());
}

}
};
this->_n_RB_25633=(_n_R_25614+1.5);
{double _n_dx_25659=0.0;
for(;d::truth((_n_dx_25659<=this->_n_RB_25633));(void)((_n_dx_25659++))){d::check_cancel();(void)(([&](){auto _n_argument_25757=(this->_n_CX_25625+_n_dx_25659);auto _n_argument_25758=(this->_n_CY_25626-std::sqrt(((this->_n_RB_25633*this->_n_RB_25633)-(_n_dx_25659*_n_dx_25659))));auto _n_argument_25759=this->_n_plot_25632;return this->_n_four_25630(_n_argument_25757,_n_argument_25758,_n_argument_25759);})());
}}
{double _n_dy_25660=0.5;
for(;d::truth((_n_dy_25660<=this->_n_RB_25633));(void)((_n_dy_25660++))){d::check_cancel();(void)(([&](){auto _n_argument_25760=(this->_n_CX_25625+std::sqrt(((this->_n_RB_25633*this->_n_RB_25633)-(_n_dy_25660*_n_dy_25660))));auto _n_argument_25761=(this->_n_CY_25626-_n_dy_25660);auto _n_argument_25762=this->_n_plot_25632;return this->_n_four_25630(_n_argument_25760,_n_argument_25761,_n_argument_25762);})());
}}
{double _n_i_25661=0.0;
for(;d::truth((_n_i_25661<(this->_n_cols_25623*this->_n_rows_25624)));(void)((_n_i_25661++))){d::check_cancel();double _n_c_25662=d::mod(_n_i_25661,this->_n_cols_25623);
double _n_p_25663=(2.0*std::floor((_n_i_25661/this->_n_cols_25623)));
double _n_k_25664=double(d::i32(d::at(this->_n_ring_25631,(_n_c_25662+(_n_p_25663*this->_n_cols_25623))))|d::i32(double(int32_t(d::u32(d::at(this->_n_ring_25631,(_n_c_25662+((_n_p_25663+1.0)*this->_n_cols_25623))))<<(d::u32(1.0)&31)))));
if(d::truth(_n_k_25664)){d::check_cancel();(void)(([&](){auto&& _n_array_25763=this->_n_back_25629;auto _n_index_25764=_n_i_25661;auto _n_value_25765=d::at(_n_HALF_25618,_n_k_25664);d::put(_n_array_25763,_n_index_25764,_n_value_25765);return _n_value_25765;})());
}
}}
for(auto &&_n_item_25766:d::Array<double,false>{(_n_R_25614/3.0),((2.0*_n_R_25614)/3.0)}){d::check_cancel();double _n_rr_25665=_n_item_25766;
{
d::Array<std::array<double,2>,false> _n_path_25666=d::Array<std::array<double,2>,false>{};
{double _n_i_25667=0.0;
for(;d::truth((_n_i_25667<=200.0));(void)((_n_i_25667++))){d::check_cancel();double _n_a_25668=((ascii::PI/2.0)*(_n_i_25667/200.0));
double _n_x_25669=(this->_n_CX_25625+(_n_rr_25665*std::sin(_n_a_25668)));
double _n_y_25670=(this->_n_CY_25626-(_n_rr_25665*std::cos(_n_a_25668)));
auto&& _n_k_25671=std::array<double,2>{d::round(_n_x_25669),double(d::i32(d::round((_n_y_25670-0.01)))>>(d::u32(1.0)&31))};
auto&& _n_last_25672=d::at(_n_path_25666,(double(_n_path_25666.size())-1.0));
if(((d::truth((!d::truth(_n_last_25672)))||d::truth((d::at(_n_last_25672,0.0)!=d::at(_n_k_25671,0.0))))||d::truth((d::at(_n_last_25672,1.0)!=d::at(_n_k_25671,1.0))))){d::check_cancel();(void)(_n_path_25666.push(_n_k_25671));
}
}}
d::Array<std::array<double,2>,false> _n_kept_25673=d::Array<std::array<double,2>,false>{d::at(_n_path_25666,0.0)};
{double _n_j_25674=1.0;
for(;d::truth((_n_j_25674<double(_n_path_25666.size())));(void)((_n_j_25674++))){d::check_cancel();auto&& _n_p_25675=d::at(_n_kept_25673,(double(_n_kept_25673.size())-1.0));
auto&& _n_n_25676=d::at(_n_path_25666,(_n_j_25674+1.0));
if(((d::truth((!d::truth(_n_n_25676)))||d::truth((std::fabs((d::at(_n_p_25675,0.0)-d::at(_n_n_25676,0.0)))>1.0)))||d::truth((std::fabs((d::at(_n_p_25675,1.0)-d::at(_n_n_25676,1.0)))>1.0)))){d::check_cancel();(void)(_n_kept_25673.push(d::at(_n_path_25666,_n_j_25674)));
}
}}
for(auto &&_n_item_25767:_n_kept_25673){d::check_cancel();auto _n_binding_25768=_n_item_25767;
double _n_c_25677=d::at(_n_binding_25768,0.0);
double _n_r_25678=d::at(_n_binding_25768,1.0);
(void)(this->_n_four_25630(_n_c_25677,((2.0*_n_r_25678)+0.5),[=]( double _a0,double _a1) mutable ->void{double _n_cc_25679=_a0;
double _n_pp_25680=_a1;
([&](){(void)(([&](){auto&& _n_array_25769=this->_n_back_25629;auto _n_index_25770=(_n_cc_25679+(double(d::i32(_n_pp_25680)>>(d::u32(1.0)&31))*this->_n_cols_25623));auto _n_value_25771=d::String(u"·");d::put(_n_array_25769,_n_index_25770,_n_value_25771);return _n_value_25771;})());})();}));
}

}
}
(void)(([&](){auto&& _n_array_25772=this->_n_back_25629;auto _n_index_25773=this->_n_cell_25627(this->_n_CX_25625,this->_n_CY_25626);auto _n_value_25774=d::String(u"+");d::put(_n_array_25772,_n_index_25773,_n_value_25774);return _n_value_25774;})());
(void)(this->_n_put_25634(d::String(u"000"),(this->_n_CX_25625-1.0),1.0));
(void)(this->_n_put_25634(d::String(u"180"),(this->_n_CX_25625-1.0),(this->_n_rows_25624-2.0)));
(void)(this->_n_put_25634(d::String(u"270"),1.0,12.0));
(void)(this->_n_put_25634(d::String(u"090"),(this->_n_cols_25623-4.0),12.0));
this->_n_inside_25635=d::Array<std::array<double,2>,false>{};
{double _n_r_25685=0.0;
for(;d::truth((_n_r_25685<this->_n_rows_25624));(void)((_n_r_25685++))){d::check_cancel();{double _n_c_25686=0.0;
for(;d::truth((_n_c_25686<this->_n_cols_25623));(void)((_n_c_25686++))){d::check_cancel();double _n_x_25687=_n_c_25686;
double _n_y_25688=((2.0*_n_r_25685)+0.5);
if(d::truth((d::hypot(std::initializer_list<double>{(_n_x_25687-this->_n_CX_25625),(_n_y_25688-this->_n_CY_25626)})<(_n_R_25614-0.3)))){d::check_cancel();(void)(this->_n_inside_25635.push(std::array<double,2>{(_n_c_25686+(_n_r_25685*this->_n_cols_25623)),this->_n_bearing_25628(_n_x_25687,_n_y_25688)}));
}
}}
}}
this->_n_land_25638=d::Array<std::shared_ptr<std::tuple<double,double,bool>>,false>{};
for(auto &&_n_item_25775:this->_n_inside_25635){d::check_cancel();auto _n_binding_25776=_n_item_25775;
double _n_i_25693=d::at(_n_binding_25776,0.0);
double _n_b_25694=d::at(_n_binding_25776,1.0);
{
double _n_c_25695=d::mod(_n_i_25693,this->_n_cols_25623);
double _n_y_25696=((2.0*std::floor((_n_i_25693/this->_n_cols_25623)))+0.5);
if(d::truth((!d::truth(this->_n_isLand_25637(_n_c_25695,_n_y_25696))))){d::check_cancel();continue;
}
bool _n_edge_25697=d::some(d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{0.0,2.0},d::Array<double,false>{0.0,(-d::number(2.0))}},[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_25777=_a0;
double _n_dx_25698=d::at(_n_binding_25777,0.0);
double _n_dy_25699=d::at(_n_binding_25777,1.0);
return (!d::truth(this->_n_isLand_25637((_n_c_25695+_n_dx_25698),(_n_y_25696+_n_dy_25699))));});
(void)(this->_n_land_25638.push(std::make_shared<std::tuple<double,double,bool>>(_n_i_25693,_n_b_25694,_n_edge_25697)));

}
}
this->_n_tracks_25639=d::map(d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.05,(-d::number(5.0)),1.1,15.0,2.0,8.0},d::Array<double,false>{3.45,6.0,0.9,(-d::number(1.0)),2.0,10.0},d::Array<double,false>{5.3,9.0,1.2,4.0,1.0,6.0},d::Array<double,false>{2.1,(-d::number(11.0)),0.8,(-d::number(9.0)),1.0,8.0},d::Array<double,false>{0.4,3.0,1.3,(-d::number(21.0)),1.0,8.0},d::Array<double,false>{4.75,13.0,0.7,2.0,1.0,6.0}},[&]( d::Array<double,false> _a0) mutable ->std::shared_ptr<_n_Record_25640>{auto _n_binding_25778=_a0;
double _n_h_25700=d::at(_n_binding_25778,0.0);
double _n_off_25701=d::at(_n_binding_25778,1.0);
double _n_v_25702=d::at(_n_binding_25778,2.0);
double _n_u_25703=d::at(_n_binding_25778,3.0);
double _n_size_25704=d::at(_n_binding_25778,4.0);
double _n_gap_25705=d::at(_n_binding_25778,5.0);
{
double _n_L_25706=((2.0*std::sqrt(((_n_R_25614*_n_R_25614)-(_n_off_25701*_n_off_25701))))+_n_gap_25705);
return ([&](){auto _n_object_25780=std::make_shared<_n_Record_25640>();_n_object_25780->_p_h=_n_h_25700;_n_object_25780->_p_off=_n_off_25701;_n_object_25780->_p_v=_n_v_25702;_n_object_25780->_p_L=_n_L_25706;_n_object_25780->_p_u0=(_n_u_25703+(_n_L_25706/2.0));_n_object_25780->_p_size=_n_size_25704;return _n_object_25780;})();

}
});
this->_n_out_25642=d::Array<d::String,false>(size_t((this->_n_cols_25623*this->_n_rows_25624)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_25744> _a1) mutable ->d::String{double _n_t_25715=_a0;
{
double _n_sweep_25716=d::mod(((_n_t_25715/_n_TURN_25615)*_n_TAU_25620),_n_TAU_25620);
auto _n_ago_25717=[&]( double _a0) mutable ->double{double _n_b_25718=_a0;
return ((d::mod((d::mod((_n_sweep_25716-_n_b_25718),_n_TAU_25620)+_n_TAU_25620),_n_TAU_25620)/_n_TAU_25620)*_n_TURN_25615);};
{double _n_i_25719=0.0;
for(;d::truth((_n_i_25719<double(this->_n_out_25642.size())));(void)((_n_i_25719++))){d::check_cancel();(void)(([&](){auto&& _n_array_25781=this->_n_out_25642;auto _n_index_25782=_n_i_25719;auto _n_value_25783=d::at(this->_n_back_25629,_n_i_25719);d::put(_n_array_25781,_n_index_25782,_n_value_25783);return _n_value_25783;})());
}}
for(auto &&_n_item_25784:this->_n_land_25638){d::check_cancel();auto _n_binding_25785=_n_item_25784;
double _n_i_25720=std::get<0>(*_n_binding_25785);
double _n_b_25721=std::get<1>(*_n_binding_25785);
bool _n_edge_25722=std::get<2>(*_n_binding_25785);
(void)(([&](){auto&& _n_array_25786=this->_n_out_25642;auto _n_index_25787=_n_i_25720;auto _n_value_25788=d::at(_n_SHADE_25619,((d::truth(_n_edge_25722)&&d::truth((_n_ago_25717(_n_b_25721)<1.2)))?2.0:1.0));d::put(_n_array_25786,_n_index_25787,_n_value_25788);return _n_value_25788;})());
}
for(auto &&_n_item_25789:this->_n_inside_25635){d::check_cancel();auto _n_binding_25790=_n_item_25789;
double _n_i_25723=d::at(_n_binding_25790,0.0);
double _n_b_25724=d::at(_n_binding_25790,1.0);
{
double _n_a_25725=((_n_ago_25717(_n_b_25724)/_n_TURN_25615)*_n_TAU_25620);
if(d::truth((_n_a_25725<_n_TRAIL_25616))){d::check_cancel();(void)(([&](){auto&& _n_array_25791=this->_n_out_25642;auto _n_index_25792=_n_i_25723;auto _n_value_25793=d::at(_n_SHADE_25619,(d::truth((_n_a_25725<0.08))?3.0:(d::truth((_n_a_25725<0.3))?2.0:([&](){auto _n_argument_25794=1.0;auto _n_argument_25795=d::indexOf(_n_SHADE_25619,d::at(this->_n_out_25642,_n_i_25723));return d::maximum({_n_argument_25794,_n_argument_25795});})())));d::put(_n_array_25791,_n_index_25792,_n_value_25793);return _n_value_25793;})());
}

}
}
double _n_seen_25726=0.0;
{double _n_k_25727=0.0;
for(;d::truth((_n_k_25727<double(this->_n_tracks_25639.size())));(void)((_n_k_25727++))){d::check_cancel();auto _n_binding_25796=this->_n_where_25641(_n_k_25727,_n_t_25715);
double _n_x0_25728=d::at(_n_binding_25796,0.0);
double _n_y0_25729=d::at(_n_binding_25796,1.0);
double _n_s_25730=_n_ago_25717(this->_n_bearing_25628(_n_x0_25728,_n_y0_25729));
auto _n_binding_25797=this->_n_where_25641(_n_k_25727,(_n_t_25715-_n_s_25730));
double _n_x_25731=d::at(_n_binding_25797,0.0);
double _n_y_25732=d::at(_n_binding_25797,1.0);
if((d::truth((d::hypot(std::initializer_list<double>{(_n_x_25731-this->_n_CX_25625),(_n_y_25732-this->_n_CY_25626)})>(_n_R_25614-1.2)))||d::truth(this->_n_isLand_25637(_n_x_25731,_n_y_25732)))){d::check_cancel();continue;
}
(void)((_n_seen_25726++));
double _n_g_25733=std::exp(((-d::number(_n_s_25730))/_n_FADE_25617));
d::String _n_ch_25734=d::at(_n_SHADE_25619,(d::truth((_n_g_25733>0.7))?4.0:(d::truth((_n_g_25733>0.42))?3.0:2.0)));
double _n_i_25735=this->_n_cell_25627(_n_x_25731,_n_y_25732);
(void)(([&](){auto&& _n_array_25798=this->_n_out_25642;auto _n_index_25799=_n_i_25735;auto _n_value_25800=_n_ch_25734;d::put(_n_array_25798,_n_index_25799,_n_value_25800);return _n_value_25800;})());
if(d::truth((d::at(this->_n_tracks_25639,_n_k_25727)->_p_size>1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_25801=this->_n_out_25642;auto _n_index_25802=(_n_i_25735+1.0);auto _n_value_25803=_n_ch_25734;d::put(_n_array_25801,_n_index_25802,_n_value_25803);return _n_value_25803;})());
}
}}
d::String _n_deg_25736=d::padStart(d::string(d::mod(d::round(((_n_sweep_25716*180.0)/ascii::PI)),360.0)),3.0,d::String(u"0"));
d::Array<d::String,false> _n_lines_25737=d::Array<d::String,false>{};
{double _n_r_25738=0.0;
for(;d::truth((_n_r_25738<this->_n_rows_25624));(void)((_n_r_25738++))){d::check_cancel();(void)(_n_lines_25737.push(d::join(this->_n_out_25642.slice((_n_r_25738*this->_n_cols_25623),((_n_r_25738+1.0)*this->_n_cols_25623)),d::String(u""))));
}}
auto _n_corner_25739=[&]( double _a0,d::String _a1,d::String _a2) mutable ->d::String{double _n_r_25740=_a0;
d::String _n_l_25741=_a1;
d::String _n_rt_25742=_a2;
return ([&](){auto&& _n_array_25804=_n_lines_25737;auto _n_index_25805=_n_r_25740;auto _n_value_25806=(d::string((d::string(_n_l_25741)+d::string(d::slice(d::at(_n_lines_25737,_n_r_25740),double(_n_l_25741.size()),(this->_n_cols_25623-double(_n_rt_25742.size()))))))+d::string(_n_rt_25742));d::put(_n_array_25804,_n_index_25805,_n_value_25806);return _n_value_25806;})();};
(void)(_n_corner_25739(1.0,(d::String(u" brg ")+d::string(_n_deg_25736)+d::String(u"°")),(d::String(u"rng ")+d::string(this->_n_range_25621)+d::String(u" ")+d::string(this->_n_unit_25622)+d::String(u" "))));
(void)(([&](){auto _n_argument_25807=(this->_n_rows_25624-2.0);auto _n_argument_25808=(d::String(u" contacts ")+d::string(_n_seen_25726)+d::String(u""));auto _n_argument_25809=(d::String(u"rings ")+d::string(d::round((this->_n_range_25621/3.0)))+d::String(u" ")+d::string(this->_n_unit_25622)+d::String(u" "));return _n_corner_25739(_n_argument_25807,_n_argument_25808,_n_argument_25809);})());
return d::join(_n_lines_25737,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("radar").cols)*ascii::catalog_meta("radar").rows);auto _env=std::make_shared<_n_Record_25744>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &radar_meta(){return catalog_meta("radar");}
std::unique_ptr<Piece> make_radar(const AsciiPieceOptions &o){return std::make_unique<Native_radar>(o);}
}
