// Direct, statically typed C++ from src/pieces/radar.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_25613;
struct _n_Record_25614;
struct _n_Record_25641;
struct _n_Record_25744;
struct _n_Record_25745;
struct _n_Record_25613{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
std::shared_ptr<_n_Record_25614> _p_options{};
static std::shared_ptr<_n_Record_25613> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25613>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);out->_p_options=d::decode<std::shared_ptr<_n_Record_25614>>(j["options"]);return out;}
};
struct _n_Record_25614{
double _p_range{};
d::String _p_unit{};
static std::shared_ptr<_n_Record_25614> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25614>();out->_p_range=d::decode<double>(j["range"]);out->_p_unit=d::decode<d::String>(j["unit"]);return out;}
};
struct _n_Record_25641{
double _p_h{};
double _p_off{};
double _p_v{};
double _p_L{};
double _p_u0{};
double _p_size{};
static std::shared_ptr<_n_Record_25641> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25641>();out->_p_h=d::decode<double>(j["h"]);out->_p_off=d::decode<double>(j["off"]);out->_p_v=d::decode<double>(j["v"]);out->_p_L=d::decode<double>(j["L"]);out->_p_u0=d::decode<double>(j["u0"]);out->_p_size=d::decode<double>(j["size"]);return out;}
};
struct _n_Record_25744{
std::optional<double> _p_range{};
std::optional<d::String> _p_unit{};
static std::shared_ptr<_n_Record_25744> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25744>();out->_p_range=d::decode<std::optional<double>>(j["range"]);out->_p_unit=d::decode<std::optional<d::String>>(j["unit"]);return out;}
};
struct _n_Record_25745{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25745> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25745>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};

std::shared_ptr<_n_Record_25613> _n_meta_25612=[](){return ([&](){auto _n_object_25750=std::make_shared<_n_Record_25613>();_n_object_25750->_p_name=d::String(u"radar");_n_object_25750->_p_category=d::String(u"data");_n_object_25750->_p_note=d::String(u"rotating sweep with afterglow, contacts fade between passes");_n_object_25750->_p_cols=53.0;_n_object_25750->_p_rows=25.0;_n_object_25750->_p_fps=30.0;_n_object_25750->_p_options=([&](){auto _n_object_25752=std::make_shared<_n_Record_25614>();_n_object_25752->_p_range=24.0;_n_object_25752->_p_unit=d::String(u"nm");return _n_object_25752;})();return _n_object_25750;})();}();
const double _n_R_25615=[](){return 19.0;}();
const double _n_TURN_25616=[](){return 4.0;}();
const double _n_TRAIL_25617=[](){return 0.8;}();
const double _n_FADE_25618=[](){return 2.4;}();
d::Array<d::String,false> _n_HALF_25619=[](){return d::Array<d::String,false>{d::String(u" "),d::String(u"▀"),d::String(u"▄"),d::String(u"█")};}();
const d::String _n_SHADE_25620=[](){return d::String(u" ░▒▓█");}();
const double _n_TAU_25621=[](){return (ascii::PI*2.0);}();

struct Native_radar final:ascii::Piece{
double _n_range_25622{};
d::String _n_unit_25623{};
double _n_cols_25624{};
double _n_rows_25625{};
double _n_CX_25626{};
double _n_CY_25627{};
d::Array<d::String,false> _n_back_25630{};
d::Array<uint8_t,true> _n_ring_25632{};
std::function<void(double,double)> _n_plot_25633{};
double _n_RB_25634{};
d::Array<std::array<double,2>,false> _n_inside_25636{};
d::Array<std::shared_ptr<std::tuple<double,double,bool>>,false> _n_land_25639{};
d::Array<std::shared_ptr<_n_Record_25641>,false> _n_tracks_25640{};
d::Array<d::String,false> _n_out_25643{};
std::function<d::String(double,std::shared_ptr<_n_Record_25745>)> _render;
double _n_cell_25628(double _a0,double _a1){double _n_x_25645=_a0;
double _n_y_25646=_a1;
return ([&](){auto _n_left_25811=d::round(_n_x_25645);auto _n_right_25812=(double(d::i32(d::round((_n_y_25646-0.01)))>>(d::u32(1.0)&31))*this->_n_cols_25624);return (_n_left_25811+_n_right_25812);})();}

double _n_bearing_25629(double _a0,double _a1){double _n_x_25647=_a0;
double _n_y_25648=_a1;
return d::mod((std::atan2((_n_x_25647-this->_n_CX_25626),(this->_n_CY_25627-_n_y_25648))+_n_TAU_25621),_n_TAU_25621);}

void _n_four_25631(double _a0,double _a1,std::function<void(double,double)> _a2){double _n_x_25649=_a0;
double _n_y_25650=_a1;
std::function<void(double,double)> _n_f_25651=_a2;
{
double _n_c_25654=d::round(_n_x_25649);
double _n_p_25655=d::round((_n_y_25650-0.01));
for(auto &&_n_item_25813:d::Array<d::Array<double,false>,false>{d::Array<double,false>{_n_c_25654,_n_p_25655},d::Array<double,false>{((2.0*this->_n_CX_25626)-_n_c_25654),_n_p_25655},d::Array<double,false>{_n_c_25654,((2.0*this->_n_CY_25627)-_n_p_25655)},d::Array<double,false>{((2.0*this->_n_CX_25626)-_n_c_25654),((2.0*this->_n_CY_25627)-_n_p_25655)}}){d::check_cancel();auto _n_binding_25814=_n_item_25813;
double _n_cc_25656=d::at(_n_binding_25814,0.0);
double _n_pp_25657=d::at(_n_binding_25814,1.0);
(void)(_n_f_25651(_n_cc_25656,_n_pp_25657));
}

}
}

void _n_put_25635(d::String _a0,double _a1,double _a2){d::String _n_s_25682=_a0;
double _n_c_25683=_a1;
double _n_r_25684=_a2;
{
{double _n_i_25685=0.0;
for(;d::truth((_n_i_25685<double(_n_s_25682.size())));(void)((_n_i_25685++))){d::check_cancel();(void)(([&](){auto&& _n_array_25815=this->_n_back_25630;auto _n_index_25816=((_n_c_25683+_n_i_25685)+(_n_r_25684*this->_n_cols_25624));auto _n_value_25817=d::at(_n_s_25682,_n_i_25685);d::put(_n_array_25815,_n_index_25816,_n_value_25817);return _n_value_25817;})());
}}

}
}

double _n_shore_25637(double _a0){double _n_b_25690=_a0;
return (_n_R_25615*([&](){auto _n_left_25818=([&](){auto _n_left_25820=(0.66+(0.09*std::sin(((_n_b_25690*5.0)+0.6))));auto _n_right_25821=(0.05*std::sin((_n_b_25690*13.0)));return (_n_left_25820+_n_right_25821);})();auto _n_right_25819=(2.2*([&](){auto _n_argument_25822=0.0;auto _n_argument_25823=(std::fabs((_n_b_25690-4.15))-0.62);return d::maximum({_n_argument_25822,_n_argument_25823});})());return (_n_left_25818+_n_right_25819);})());}

bool _n_isLand_25638(double _a0,double _a1){double _n_x_25691=_a0;
double _n_y_25692=_a1;
{
double _n_b_25693=this->_n_bearing_25629(_n_x_25691,_n_y_25692);
return ([&]()->bool{auto _n_logical_25824=([&]()->bool{auto _n_logical_25827=(_n_b_25693>3.3);return d::truth(_n_logical_25827)?(_n_b_25693<5.0):_n_logical_25827;})();return d::truth(_n_logical_25824)?([&](){auto _n_left_25825=d::hypot(std::initializer_list<double>{(_n_x_25691-this->_n_CX_25626),(_n_y_25692-this->_n_CY_25627)});auto _n_right_25826=this->_n_shore_25637(_n_b_25693);return (_n_left_25825>_n_right_25826);})():_n_logical_25824;})();

}
}

d::Array<double,false> _n_where_25642(double _a0,double _a1){double _n_k_25708=_a0;
double _n_t_25709=_a1;
{
auto _n_binding_25828=d::at(this->_n_tracks_25640,_n_k_25708);
double _n_h_25710=_n_binding_25828->_p_h;
double _n_off_25711=_n_binding_25828->_p_off;
double _n_v_25712=_n_binding_25828->_p_v;
double _n_L_25713=_n_binding_25828->_p_L;
double _n_u0_25714=_n_binding_25828->_p_u0;
double _n_u_25715=(d::mod((d::mod((_n_u0_25714+(_n_v_25712*_n_t_25709)),_n_L_25713)+_n_L_25713),_n_L_25713)-(_n_L_25713/2.0));
return d::Array<double,false>{([&](){auto _n_left_25829=(this->_n_CX_25626+(_n_u_25715*std::sin(_n_h_25710)));auto _n_right_25830=(_n_off_25711*std::cos(_n_h_25710));return (_n_left_25829+_n_right_25830);})(),(this->_n_CY_25627-([&](){auto _n_left_25831=(_n_u_25715*std::cos(_n_h_25710));auto _n_right_25832=(_n_off_25711*std::sin(_n_h_25710));return (_n_left_25831-_n_right_25832);})())};

}
}

explicit Native_radar(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_25753=d::decode<std::shared_ptr<_n_Record_25744>>(_options.data);
this->_n_range_25622=(d::present(_n_binding_25753->_p_range)?d::read(_n_binding_25753->_p_range):24.0);
this->_n_unit_25623=(d::present(_n_binding_25753->_p_unit)?d::read(_n_binding_25753->_p_unit):d::String(u"nm"));
auto _n_binding_25754=_n_meta_25612;
this->_n_cols_25624=_n_binding_25754->_p_cols;
this->_n_rows_25625=_n_binding_25754->_p_rows;
this->_n_CX_25626=26.0;
this->_n_CY_25627=24.5;
this->_n_back_25630=d::Array<d::String,false>(size_t((this->_n_cols_25624*this->_n_rows_25625))).fill(d::String(u" "));
this->_n_ring_25632=d::Array<uint8_t,true>(size_t(((this->_n_cols_25624*this->_n_rows_25625)*2.0)));
this->_n_plot_25633=[=]( double _a0,double _a1) mutable ->void{double _n_c_25658=_a0;
double _n_p_25659=_a1;
{
if((((d::truth((_n_c_25658>=0.0))&&d::truth((_n_c_25658<this->_n_cols_25624)))&&d::truth((_n_p_25659>=0.0)))&&d::truth((_n_p_25659<(this->_n_rows_25625*2.0))))){d::check_cancel();(void)(([&](){auto&& _n_array_25755=this->_n_ring_25632;auto _n_index_25756=(_n_c_25658+(_n_p_25659*this->_n_cols_25624));auto _n_value_25757=1.0;d::put(_n_array_25755,_n_index_25756,_n_value_25757);return _n_value_25757;})());
}

}
};
this->_n_RB_25634=(_n_R_25615+1.5);
{double _n_dx_25660=0.0;
for(;d::truth((_n_dx_25660<=this->_n_RB_25634));(void)((_n_dx_25660++))){d::check_cancel();(void)(([&](){auto _n_argument_25758=(this->_n_CX_25626+_n_dx_25660);auto _n_argument_25759=(this->_n_CY_25627-std::sqrt(((this->_n_RB_25634*this->_n_RB_25634)-(_n_dx_25660*_n_dx_25660))));auto _n_argument_25760=this->_n_plot_25633;return this->_n_four_25631(_n_argument_25758,_n_argument_25759,_n_argument_25760);})());
}}
{double _n_dy_25661=0.5;
for(;d::truth((_n_dy_25661<=this->_n_RB_25634));(void)((_n_dy_25661++))){d::check_cancel();(void)(([&](){auto _n_argument_25761=(this->_n_CX_25626+std::sqrt(((this->_n_RB_25634*this->_n_RB_25634)-(_n_dy_25661*_n_dy_25661))));auto _n_argument_25762=(this->_n_CY_25627-_n_dy_25661);auto _n_argument_25763=this->_n_plot_25633;return this->_n_four_25631(_n_argument_25761,_n_argument_25762,_n_argument_25763);})());
}}
{double _n_i_25662=0.0;
for(;d::truth((_n_i_25662<(this->_n_cols_25624*this->_n_rows_25625)));(void)((_n_i_25662++))){d::check_cancel();double _n_c_25663=d::mod(_n_i_25662,this->_n_cols_25624);
double _n_p_25664=(2.0*std::floor((_n_i_25662/this->_n_cols_25624)));
double _n_k_25665=double(d::i32(d::at(this->_n_ring_25632,(_n_c_25663+(_n_p_25664*this->_n_cols_25624))))|d::i32(double(int32_t(d::u32(d::at(this->_n_ring_25632,(_n_c_25663+((_n_p_25664+1.0)*this->_n_cols_25624))))<<(d::u32(1.0)&31)))));
if(d::truth(_n_k_25665)){d::check_cancel();(void)(([&](){auto&& _n_array_25764=this->_n_back_25630;auto _n_index_25765=_n_i_25662;auto _n_value_25766=d::at(_n_HALF_25619,_n_k_25665);d::put(_n_array_25764,_n_index_25765,_n_value_25766);return _n_value_25766;})());
}
}}
for(auto &&_n_item_25767:d::Array<double,false>{(_n_R_25615/3.0),((2.0*_n_R_25615)/3.0)}){d::check_cancel();double _n_rr_25666=_n_item_25767;
{
d::Array<d::Array<double,false>,false> _n_path_25667=d::Array<d::Array<double,false>,false>{};
{double _n_i_25668=0.0;
for(;d::truth((_n_i_25668<=200.0));(void)((_n_i_25668++))){d::check_cancel();double _n_a_25669=((ascii::PI/2.0)*(_n_i_25668/200.0));
double _n_x_25670=(this->_n_CX_25626+(_n_rr_25666*std::sin(_n_a_25669)));
double _n_y_25671=(this->_n_CY_25627-(_n_rr_25666*std::cos(_n_a_25669)));
d::Array<double,false> _n_k_25672=d::Array<double,false>{d::round(_n_x_25670),double(d::i32(d::round((_n_y_25671-0.01)))>>(d::u32(1.0)&31))};
d::Array<double,false> _n_last_25673=d::at(_n_path_25667,(double(_n_path_25667.size())-1.0));
if(((d::truth((!d::truth(_n_last_25673)))||d::truth((d::at(_n_last_25673,0.0)!=d::at(_n_k_25672,0.0))))||d::truth((d::at(_n_last_25673,1.0)!=d::at(_n_k_25672,1.0))))){d::check_cancel();(void)(_n_path_25667.push(_n_k_25672));
}
}}
d::Array<d::Array<double,false>,false> _n_kept_25674=d::Array<d::Array<double,false>,false>{d::at(_n_path_25667,0.0)};
{double _n_j_25675=1.0;
for(;d::truth((_n_j_25675<double(_n_path_25667.size())));(void)((_n_j_25675++))){d::check_cancel();d::Array<double,false> _n_p_25676=d::at(_n_kept_25674,(double(_n_kept_25674.size())-1.0));
d::Array<double,false> _n_n_25677=d::at(_n_path_25667,(_n_j_25675+1.0));
if(((d::truth((!d::truth(_n_n_25677)))||d::truth((std::fabs((d::at(_n_p_25676,0.0)-d::at(_n_n_25677,0.0)))>1.0)))||d::truth((std::fabs((d::at(_n_p_25676,1.0)-d::at(_n_n_25677,1.0)))>1.0)))){d::check_cancel();(void)(_n_kept_25674.push(d::at(_n_path_25667,_n_j_25675)));
}
}}
for(auto &&_n_item_25768:_n_kept_25674){d::check_cancel();auto _n_binding_25769=_n_item_25768;
double _n_c_25678=d::at(_n_binding_25769,0.0);
double _n_r_25679=d::at(_n_binding_25769,1.0);
(void)(this->_n_four_25631(_n_c_25678,((2.0*_n_r_25679)+0.5),[=]( double _a0,double _a1) mutable ->void{double _n_cc_25680=_a0;
double _n_pp_25681=_a1;
([&](){(void)(([&](){auto&& _n_array_25770=this->_n_back_25630;auto _n_index_25771=(_n_cc_25680+(double(d::i32(_n_pp_25681)>>(d::u32(1.0)&31))*this->_n_cols_25624));auto _n_value_25772=d::String(u"·");d::put(_n_array_25770,_n_index_25771,_n_value_25772);return _n_value_25772;})());})();}));
}

}
}
(void)(([&](){auto&& _n_array_25773=this->_n_back_25630;auto _n_index_25774=this->_n_cell_25628(this->_n_CX_25626,this->_n_CY_25627);auto _n_value_25775=d::String(u"+");d::put(_n_array_25773,_n_index_25774,_n_value_25775);return _n_value_25775;})());
(void)(this->_n_put_25635(d::String(u"000"),(this->_n_CX_25626-1.0),1.0));
(void)(this->_n_put_25635(d::String(u"180"),(this->_n_CX_25626-1.0),(this->_n_rows_25625-2.0)));
(void)(this->_n_put_25635(d::String(u"270"),1.0,12.0));
(void)(this->_n_put_25635(d::String(u"090"),(this->_n_cols_25624-4.0),12.0));
this->_n_inside_25636=d::Array<std::array<double,2>,false>{};
{double _n_r_25686=0.0;
for(;d::truth((_n_r_25686<this->_n_rows_25625));(void)((_n_r_25686++))){d::check_cancel();{double _n_c_25687=0.0;
for(;d::truth((_n_c_25687<this->_n_cols_25624));(void)((_n_c_25687++))){d::check_cancel();double _n_x_25688=_n_c_25687;
double _n_y_25689=((2.0*_n_r_25686)+0.5);
if(d::truth((d::hypot(std::initializer_list<double>{(_n_x_25688-this->_n_CX_25626),(_n_y_25689-this->_n_CY_25627)})<(_n_R_25615-0.3)))){d::check_cancel();(void)(this->_n_inside_25636.push(std::array<double,2>{(_n_c_25687+(_n_r_25686*this->_n_cols_25624)),this->_n_bearing_25629(_n_x_25688,_n_y_25689)}));
}
}}
}}
this->_n_land_25639=d::Array<std::shared_ptr<std::tuple<double,double,bool>>,false>{};
for(auto &&_n_item_25776:this->_n_inside_25636){d::check_cancel();auto _n_binding_25777=_n_item_25776;
double _n_i_25694=d::at(_n_binding_25777,0.0);
double _n_b_25695=d::at(_n_binding_25777,1.0);
{
double _n_c_25696=d::mod(_n_i_25694,this->_n_cols_25624);
double _n_y_25697=((2.0*std::floor((_n_i_25694/this->_n_cols_25624)))+0.5);
if(d::truth((!d::truth(this->_n_isLand_25638(_n_c_25696,_n_y_25697))))){d::check_cancel();continue;
}
bool _n_edge_25698=d::some(d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.0,0.0},d::Array<double,false>{(-d::number(1.0)),0.0},d::Array<double,false>{0.0,2.0},d::Array<double,false>{0.0,(-d::number(2.0))}},[&]( d::Array<double,false> _a0) mutable ->bool{auto _n_binding_25778=_a0;
double _n_dx_25699=d::at(_n_binding_25778,0.0);
double _n_dy_25700=d::at(_n_binding_25778,1.0);
return (!d::truth(this->_n_isLand_25638((_n_c_25696+_n_dx_25699),(_n_y_25697+_n_dy_25700))));});
(void)(this->_n_land_25639.push(std::make_shared<std::tuple<double,double,bool>>(_n_i_25694,_n_b_25695,_n_edge_25698)));

}
}
this->_n_tracks_25640=d::map(d::Array<d::Array<double,false>,false>{d::Array<double,false>{1.05,(-d::number(5.0)),1.1,15.0,2.0,8.0},d::Array<double,false>{3.45,6.0,0.9,(-d::number(1.0)),2.0,10.0},d::Array<double,false>{5.3,9.0,1.2,4.0,1.0,6.0},d::Array<double,false>{2.1,(-d::number(11.0)),0.8,(-d::number(9.0)),1.0,8.0},d::Array<double,false>{0.4,3.0,1.3,(-d::number(21.0)),1.0,8.0},d::Array<double,false>{4.75,13.0,0.7,2.0,1.0,6.0}},[&]( d::Array<double,false> _a0) mutable ->std::shared_ptr<_n_Record_25641>{auto _n_binding_25779=_a0;
double _n_h_25701=d::at(_n_binding_25779,0.0);
double _n_off_25702=d::at(_n_binding_25779,1.0);
double _n_v_25703=d::at(_n_binding_25779,2.0);
double _n_u_25704=d::at(_n_binding_25779,3.0);
double _n_size_25705=d::at(_n_binding_25779,4.0);
double _n_gap_25706=d::at(_n_binding_25779,5.0);
{
double _n_L_25707=((2.0*std::sqrt(((_n_R_25615*_n_R_25615)-(_n_off_25702*_n_off_25702))))+_n_gap_25706);
return ([&](){auto _n_object_25781=std::make_shared<_n_Record_25641>();_n_object_25781->_p_h=_n_h_25701;_n_object_25781->_p_off=_n_off_25702;_n_object_25781->_p_v=_n_v_25703;_n_object_25781->_p_L=_n_L_25707;_n_object_25781->_p_u0=(_n_u_25704+(_n_L_25707/2.0));_n_object_25781->_p_size=_n_size_25705;return _n_object_25781;})();

}
});
this->_n_out_25643=d::Array<d::String,false>(size_t((this->_n_cols_25624*this->_n_rows_25625)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_25745> _a1) mutable ->d::String{double _n_t_25716=_a0;
{
double _n_sweep_25717=d::mod(((_n_t_25716/_n_TURN_25616)*_n_TAU_25621),_n_TAU_25621);
auto _n_ago_25718=[&]( double _a0) mutable ->double{double _n_b_25719=_a0;
return ((d::mod((d::mod((_n_sweep_25717-_n_b_25719),_n_TAU_25621)+_n_TAU_25621),_n_TAU_25621)/_n_TAU_25621)*_n_TURN_25616);};
{double _n_i_25720=0.0;
for(;d::truth((_n_i_25720<double(this->_n_out_25643.size())));(void)((_n_i_25720++))){d::check_cancel();(void)(([&](){auto&& _n_array_25782=this->_n_out_25643;auto _n_index_25783=_n_i_25720;auto _n_value_25784=d::at(this->_n_back_25630,_n_i_25720);d::put(_n_array_25782,_n_index_25783,_n_value_25784);return _n_value_25784;})());
}}
for(auto &&_n_item_25785:this->_n_land_25639){d::check_cancel();auto _n_binding_25786=_n_item_25785;
double _n_i_25721=std::get<0>(*_n_binding_25786);
double _n_b_25722=std::get<1>(*_n_binding_25786);
bool _n_edge_25723=std::get<2>(*_n_binding_25786);
(void)(([&](){auto&& _n_array_25787=this->_n_out_25643;auto _n_index_25788=_n_i_25721;auto _n_value_25789=d::at(_n_SHADE_25620,((d::truth(_n_edge_25723)&&d::truth((_n_ago_25718(_n_b_25722)<1.2)))?2.0:1.0));d::put(_n_array_25787,_n_index_25788,_n_value_25789);return _n_value_25789;})());
}
for(auto &&_n_item_25790:this->_n_inside_25636){d::check_cancel();auto _n_binding_25791=_n_item_25790;
double _n_i_25724=d::at(_n_binding_25791,0.0);
double _n_b_25725=d::at(_n_binding_25791,1.0);
{
double _n_a_25726=((_n_ago_25718(_n_b_25725)/_n_TURN_25616)*_n_TAU_25621);
if(d::truth((_n_a_25726<_n_TRAIL_25617))){d::check_cancel();(void)(([&](){auto&& _n_array_25792=this->_n_out_25643;auto _n_index_25793=_n_i_25724;auto _n_value_25794=d::at(_n_SHADE_25620,(d::truth((_n_a_25726<0.08))?3.0:(d::truth((_n_a_25726<0.3))?2.0:([&](){auto _n_argument_25795=1.0;auto _n_argument_25796=d::indexOf(_n_SHADE_25620,d::at(this->_n_out_25643,_n_i_25724));return d::maximum({_n_argument_25795,_n_argument_25796});})())));d::put(_n_array_25792,_n_index_25793,_n_value_25794);return _n_value_25794;})());
}

}
}
double _n_seen_25727=0.0;
{double _n_k_25728=0.0;
for(;d::truth((_n_k_25728<double(this->_n_tracks_25640.size())));(void)((_n_k_25728++))){d::check_cancel();auto _n_binding_25797=this->_n_where_25642(_n_k_25728,_n_t_25716);
double _n_x0_25729=d::at(_n_binding_25797,0.0);
double _n_y0_25730=d::at(_n_binding_25797,1.0);
double _n_s_25731=_n_ago_25718(this->_n_bearing_25629(_n_x0_25729,_n_y0_25730));
auto _n_binding_25798=this->_n_where_25642(_n_k_25728,(_n_t_25716-_n_s_25731));
double _n_x_25732=d::at(_n_binding_25798,0.0);
double _n_y_25733=d::at(_n_binding_25798,1.0);
if((d::truth((d::hypot(std::initializer_list<double>{(_n_x_25732-this->_n_CX_25626),(_n_y_25733-this->_n_CY_25627)})>(_n_R_25615-1.2)))||d::truth(this->_n_isLand_25638(_n_x_25732,_n_y_25733)))){d::check_cancel();continue;
}
(void)((_n_seen_25727++));
double _n_g_25734=std::exp(((-d::number(_n_s_25731))/_n_FADE_25618));
d::String _n_ch_25735=d::at(_n_SHADE_25620,(d::truth((_n_g_25734>0.7))?4.0:(d::truth((_n_g_25734>0.42))?3.0:2.0)));
double _n_i_25736=this->_n_cell_25628(_n_x_25732,_n_y_25733);
(void)(([&](){auto&& _n_array_25799=this->_n_out_25643;auto _n_index_25800=_n_i_25736;auto _n_value_25801=_n_ch_25735;d::put(_n_array_25799,_n_index_25800,_n_value_25801);return _n_value_25801;})());
if(d::truth((d::at(this->_n_tracks_25640,_n_k_25728)->_p_size>1.0))){d::check_cancel();(void)(([&](){auto&& _n_array_25802=this->_n_out_25643;auto _n_index_25803=(_n_i_25736+1.0);auto _n_value_25804=_n_ch_25735;d::put(_n_array_25802,_n_index_25803,_n_value_25804);return _n_value_25804;})());
}
}}
d::String _n_deg_25737=d::padStart(d::string(d::mod(d::round(((_n_sweep_25717*180.0)/ascii::PI)),360.0)),3.0,d::String(u"0"));
d::Array<d::String,false> _n_lines_25738=d::Array<d::String,false>{};
{double _n_r_25739=0.0;
for(;d::truth((_n_r_25739<this->_n_rows_25625));(void)((_n_r_25739++))){d::check_cancel();(void)(_n_lines_25738.push(d::join(this->_n_out_25643.slice((_n_r_25739*this->_n_cols_25624),((_n_r_25739+1.0)*this->_n_cols_25624)),d::String(u""))));
}}
auto _n_corner_25740=[&]( double _a0,d::String _a1,d::String _a2) mutable ->d::String{double _n_r_25741=_a0;
d::String _n_l_25742=_a1;
d::String _n_rt_25743=_a2;
return ([&](){auto&& _n_array_25805=_n_lines_25738;auto _n_index_25806=_n_r_25741;auto _n_value_25807=(d::string((d::string(_n_l_25742)+d::string(d::slice(d::at(_n_lines_25738,_n_r_25741),double(_n_l_25742.size()),(this->_n_cols_25624-double(_n_rt_25743.size()))))))+d::string(_n_rt_25743));d::put(_n_array_25805,_n_index_25806,_n_value_25807);return _n_value_25807;})();};
(void)(_n_corner_25740(1.0,(d::String(u" brg ")+d::string(_n_deg_25737)+d::String(u"°")),(d::String(u"rng ")+d::string(this->_n_range_25622)+d::String(u" ")+d::string(this->_n_unit_25623)+d::String(u" "))));
(void)(([&](){auto _n_argument_25808=(this->_n_rows_25625-2.0);auto _n_argument_25809=(d::String(u" contacts ")+d::string(_n_seen_25727)+d::String(u""));auto _n_argument_25810=(d::String(u"rings ")+d::string(d::round((this->_n_range_25622/3.0)))+d::String(u" ")+d::string(this->_n_unit_25623)+d::String(u" "));return _n_corner_25740(_n_argument_25808,_n_argument_25809,_n_argument_25810);})());
return d::join(_n_lines_25738,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("radar").cols)*ascii::catalog_meta("radar").rows);auto _env=std::make_shared<_n_Record_25745>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &radar_meta(){return catalog_meta("radar");}
std::unique_ptr<Piece> make_radar(const AsciiPieceOptions &o){return std::make_unique<Native_radar>(o);}
}
