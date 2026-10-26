// Direct, statically typed C++ from src/pieces/owl.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_23865;
struct _n_Record_23872;
struct _n_Record_23961;
struct _n_Record_23972;
struct _n_Record_23865{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_23865> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23865>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_23872{
d::Array<d::String,false> _p_top{};
d::Array<std::array<double,2>,false> _p_eyes{};
double _p_beak{};
static std::shared_ptr<_n_Record_23872> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23872>();out->_p_top=d::decode<d::Array<d::String,false>>(j["top"]);out->_p_eyes=d::decode<d::Array<std::array<double,2>,false>>(j["eyes"]);out->_p_beak=d::decode<double>(j["beak"]);return out;}
};
struct _n_Record_23961{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_23961> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23961>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_23972{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_28{};
d::String _p_symbol_29{};
d::String _p_symbol_60{};
static std::shared_ptr<_n_Record_23972> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23972>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_28=d::decode<d::String>(j["("]);out->_p_symbol_29=d::decode<d::String>(j[")"]);out->_p_symbol_60=d::decode<d::String>(j["`"]);return out;}
};
double _n_ease_23879(double _a0);
double _n_poseAt_23880(double _a0);
double _n_lidAt_23881(double _a0);
std::shared_ptr<_n_Record_23865> _n_meta_23864=[](){return ([&](){auto _n_object_23964=std::make_shared<_n_Record_23865>();_n_object_23964->_p_name=d::String(u"owl");_n_object_23964->_p_category=d::String(u"creatures");_n_object_23964->_p_note=d::String(u"an owl on a branch, blinking slowly and turning its head");_n_object_23964->_p_cols=41.0;_n_object_23964->_p_rows=24.0;_n_object_23964->_p_fps=12.0;return _n_object_23964;})();}();
const double _n_LOOP_23866=[](){return 12.0;}();
const double _n_CX_23867=[](){return 20.0;}();
d::Array<std::array<double,4>,false> _n_TURNS_23868=[](){return d::Array<std::array<double,4>,false>{std::array<double,4>{2.0,2.5,0.0,(-d::number(2.0))},std::array<double,4>{4.4,5.1,(-d::number(2.0)),0.0},std::array<double,4>{7.4,7.9,0.0,2.0},std::array<double,4>{9.8,10.5,2.0,0.0}};}();
d::Array<double,false> _n_BLINKS_23869=[](){return d::Array<double,false>{0.6,6.1,6.9,11.2};}();
const double _n_BLINK_23870=[](){return 0.7;}();
d::Array<std::shared_ptr<_n_Record_23872>,false> _n_HEADS_23871=[](){return d::Array<std::shared_ptr<_n_Record_23872>,false>{([&](){auto _n_object_23967=std::make_shared<_n_Record_23872>();_n_object_23967->_p_top=d::Array<d::String,false>{d::String(u"          /\\                 /\\"),d::String(u"         /  \\_.--'''''''--._/  \\"),d::String(u"        /                       \\")};_n_object_23967->_p_eyes=d::Array<std::array<double,2>,false>{std::array<double,2>{11.0,0.0},std::array<double,2>{22.0,0.0}};_n_object_23967->_p_beak=20.0;return _n_object_23967;})(),([&](){auto _n_object_23969=std::make_shared<_n_Record_23872>();_n_object_23969->_p_top=d::Array<d::String,false>{d::String(u"           /\\                 /\\"),d::String(u"         _/  \\_.--'''''''--._/  \\"),d::String(u"        /                        |")};_n_object_23969->_p_eyes=d::Array<std::array<double,2>,false>{std::array<double,2>{12.0,0.0},std::array<double,2>{24.0,1.0}};_n_object_23969->_p_beak=22.0;return _n_object_23969;})(),([&](){auto _n_object_23971=std::make_shared<_n_Record_23872>();_n_object_23971->_p_top=d::Array<d::String,false>{d::String(u"            /\\                  /|"),d::String(u"         _./  \\_.--''''''''--._/ |"),d::String(u"        /                        |")};_n_object_23971->_p_eyes=d::Array<std::array<double,2>,false>{std::array<double,2>{13.0,0.0},std::array<double,2>{26.0,1.0}};_n_object_23971->_p_beak=24.0;return _n_object_23971;})()};}();
d::Array<d::Array<d::String,false>,false> _n_EYES_23873=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u" .----. "),d::String(u"/ .--. \\"),d::String(u"| (@@) |"),d::String(u"\\ `--' /"),d::String(u" `----' ")},d::Array<d::String,false>{d::String(u" .--. "),d::String(u"/.--.\\"),d::String(u"|(@@)|"),d::String(u"\\`--'/"),d::String(u" `--' ")}};}();
d::Array<d::String,false> _n_HALF_23874=[](){return d::Array<d::String,false>{d::String(u"       (\\"),d::String(u"      /  \\."),d::String(u"     /  ( (\\"),d::String(u"    |  ( ( (|"),d::String(u"    |  ( ( ( \\"),d::String(u"    |  \\\\\\\\\\  \\"),d::String(u"    |  \\\\\\\\ \\  \\"),d::String(u"     \\  \\\\\\\\ \\  \\"),d::String(u"      \\  \\\\\\\\ \\  \\"),d::String(u"       `. \\\\\\\\ \\  `."),d::String(u"         `-.\\\\\\ \\____")};}();
d::Dict<d::String,d::String> _n_FLIP_23875=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_23973;_n_dictionary_23973.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_23973.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_23973.set(d::String(u"("),d::String(u")"));_n_dictionary_23973.set(d::String(u")"),d::String(u"("));_n_dictionary_23973.set(d::String(u"`"),d::String(u"'"));return _n_dictionary_23973;})();}();
d::Array<d::String,false> _n_BODY_23876=[](){return d::map(_n_HALF_23874,[&]( d::String _a0) mutable ->d::String{d::String _n_l_23891=_a0;
{
(void)((_n_l_23891=d::padEnd(_n_l_23891,21.0)));
return (d::string(_n_l_23891)+d::string(d::join(d::map(([&](){d::Array<d::String,false> _n_array_23974;for(const auto &_v:d::slice(_n_l_23891,0.0,20.0))_n_array_23974.push(_v);return _n_array_23974;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_23892=_a0;
return ([&]()->d::String{auto _n_logical_23975=_n_FLIP_23875.get(_n_c_23892);return d::truth(_n_logical_23975)?_n_logical_23975:_n_c_23892;})();}),d::String(u""))));

}
});}();
d::Array<d::String,false> _n_BRANCH_23877=[](){return d::Array<d::String,false>{d::String(u"=-==-===-==-==-=====-=-=====-==-=-==-=-=)"),d::String(u" `-.__.-'~~`--.__.--'   `--.__.-'~`-.__/ ")};}();
d::Array<std::array<double,2>,false> _n_STARS_23878=[](){return d::Array<std::array<double,2>,false>{std::array<double,2>{2.0,1.0},std::array<double,2>{5.0,0.0},std::array<double,2>{1.0,5.0},std::array<double,2>{37.0,0.0},std::array<double,2>{39.0,3.0},std::array<double,2>{36.0,6.0},std::array<double,2>{39.0,11.0}};}();
double _n_ease_23879(double _a0){double _n_x_23893=_a0;
return (d::truth((_n_x_23893<=0.0))?0.0:(d::truth((_n_x_23893>=1.0))?1.0:((_n_x_23893*_n_x_23893)*(3.0-(2.0*_n_x_23893)))));}

double _n_poseAt_23880(double _a0){double _n_u_23894=_a0;
{
double _n_p_23895=0.0;
for(auto &&_n_item_23976:_n_TURNS_23868){d::check_cancel();auto _n_binding_23977=_n_item_23976;
double _n_a_23896=d::at(_n_binding_23977,0.0);
double _n_b_23897=d::at(_n_binding_23977,1.0);
double _n_from_23898=d::at(_n_binding_23977,2.0);
double _n_to_23899=d::at(_n_binding_23977,3.0);
if(d::truth((_n_u_23894>=_n_a_23896))){d::check_cancel();(void)((_n_p_23895=(_n_from_23898+((_n_to_23899-_n_from_23898)*_n_ease_23879(((_n_u_23894-_n_a_23896)/(_n_b_23897-_n_a_23896)))))));
}
}
return d::round(_n_p_23895);

}
}

double _n_lidAt_23881(double _a0){double _n_u_23900=_a0;
{
for(auto &&_n_item_23978:_n_BLINKS_23869){d::check_cancel();double _n_s_23901=_n_item_23978;
{
double _n_d_23902=(_n_u_23900-_n_s_23901);
if((d::truth((_n_d_23902>=0.0))&&d::truth((_n_d_23902<_n_BLINK_23870)))){d::check_cancel();return (d::truth((_n_d_23902<0.3))?_n_ease_23879((_n_d_23902/0.25)):(1.0-_n_ease_23879(((_n_d_23902-0.3)/(_n_BLINK_23870-0.3)))));
}

}
}
return 0.0;

}
}

struct Native_owl final:ascii::Piece{
double _n_cols_23882{};
double _n_rows_23883{};
d::Array<d::Array<d::String,false>,false> _n_grid_23885{};
d::Array<d::Array<d::String,false>,false> _n_base_23888{};
std::function<d::String(d::String)> _n_mirror_23889{};
std::function<d::String(double,std::shared_ptr<_n_Record_23961>)> _render;
d::Array<d::Array<d::String,false>,false> _n_blank_23884(){return d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_23883,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_23882)).fill(d::String(u" "));}));}

void _n_put_23886(double _a0,double _a1,d::String _a2){double _n_x_23903=_a0;
double _n_y_23904=_a1;
d::String _n_s_23905=_a2;
{
{double _n_i_23906=0.0;
for(;d::truth((_n_i_23906<double(_n_s_23905.size())));(void)((_n_i_23906++))){d::check_cancel();if((d::truth(((_n_x_23903+_n_i_23906)>=0.0))&&d::truth(((_n_x_23903+_n_i_23906)<this->_n_cols_23882)))){d::check_cancel();(void)(([&](){auto&& _n_array_24038=d::at(this->_n_grid_23885,_n_y_23904);auto _n_index_24039=(_n_x_23903+_n_i_23906);auto _n_value_24040=d::at(_n_s_23905,_n_i_23906);d::put(_n_array_24038,_n_index_24039,_n_value_24040);return _n_value_24040;})());
}
}}

}
}

std::array<double,2> _n_span_23887(double _a0,std::optional<double> _a1,std::optional<double> _a2){double _n_r_23909=_a0;
double _n_lo_23910=(d::present(_a1)?d::read(_a1):0.0);
double _n_hi_23911=(d::present(_a2)?d::read(_a2):(this->_n_cols_23882-1.0));
{
double _n_a_23912=_n_CX_23867;
double _n_b_23913=_n_CX_23867;
while((d::truth((_n_a_23912>_n_lo_23910))&&d::truth((d::at(d::at(this->_n_grid_23885,_n_r_23909),(_n_a_23912-1.0))==d::String(u" "))))){d::check_cancel();(void)((_n_a_23912--));
}
while((d::truth((_n_b_23913<_n_hi_23911))&&d::truth((d::at(d::at(this->_n_grid_23885,_n_r_23909),(_n_b_23913+1.0))==d::String(u" "))))){d::check_cancel();(void)((_n_b_23913++));
}
return std::array<double,2>{_n_a_23912,_n_b_23913};

}
}

std::shared_ptr<_n_Record_23872> _n_pose_23890(double _a0){double _n_k_23924=_a0;
{
std::shared_ptr<_n_Record_23872> _n_h_23925=d::at(_n_HEADS_23871,std::fabs(_n_k_23924));
if(d::truth((_n_k_23924>=0.0))){d::check_cancel();return _n_h_23925;
}
d::Array<std::array<double,2>,false> _n_eyes_23926=d::map(_n_h_23925->_p_eyes,[&]( std::array<double,2> _a0) mutable ->std::array<double,2>{auto _n_binding_24041=_a0;
double _n_x_23927=d::at(_n_binding_24041,0.0);
double _n_e_23928=d::at(_n_binding_24041,1.0);
return std::array<double,2>{((this->_n_cols_23882-_n_x_23927)-double(d::at(d::at(_n_EYES_23873,_n_e_23928),0.0).size())),_n_e_23928};}).reverse();
return ([&](){auto _n_object_24043=std::make_shared<_n_Record_23872>();_n_object_24043->_p_top=d::map(_n_h_23925->_p_top,this->_n_mirror_23889);_n_object_24043->_p_eyes=_n_eyes_23926;_n_object_24043->_p_beak=((this->_n_cols_23882-1.0)-_n_h_23925->_p_beak);return _n_object_24043;})();

}
}

explicit Native_owl(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_23979=_n_meta_23864;
this->_n_cols_23882=_n_binding_23979->_p_cols;
this->_n_rows_23883=_n_binding_23979->_p_rows;
this->_n_grid_23885=this->_n_blank_23884();
(void)(d::forEach(_n_BODY_23876,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_l_23907=_a0;
double _n_j_23908=_a1;
this->_n_put_23886(0.0,(9.0+_n_j_23908),_n_l_23907);}));
{double _n_r_23914=10.0;
for(;d::truth((_n_r_23914<19.0));(void)((_n_r_23914++))){d::check_cancel();double _n_gap_23915=(d::truth((_n_r_23914<13.0))?4.0:(d::truth((_n_r_23914<16.0))?3.0:2.0));
double _n_off_23916=(d::truth(double(d::i32(_n_r_23914)&d::i32(1.0)))?std::floor((_n_gap_23915/2.0)):0.0);
auto _n_binding_23980=this->_n_span_23887(_n_r_23914,std::optional<double>{},std::optional<double>{});
double _n_a_23917=d::at(_n_binding_23980,0.0);
double _n_b_23918=d::at(_n_binding_23980,1.0);
{double _n_c_23919=(_n_a_23917+1.0);
for(;d::truth((_n_c_23919<_n_b_23918));(void)((_n_c_23919++))){d::check_cancel();if(d::truth((d::mod((d::mod(((_n_c_23919-_n_CX_23867)+_n_off_23916),_n_gap_23915)+_n_gap_23915),_n_gap_23915)==0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_23981=d::at(this->_n_grid_23885,_n_r_23914);auto _n_index_23982=_n_c_23919;auto _n_value_23983=d::String(u"v");d::put(_n_array_23981,_n_index_23982,_n_value_23983);return _n_value_23983;})());
}
}}
}}
{double _n_c_23920=10.0;
for(;d::truth((_n_c_23920<=30.0));(void)((_n_c_23920=(_n_c_23920+2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_23984=d::at(this->_n_grid_23885,9.0);auto _n_index_23985=_n_c_23920;auto _n_value_23986=(d::truth(double(d::i32(_n_c_23920)&d::i32(2.0)))?d::String(u"'"):d::String(u"`"));d::put(_n_array_23984,_n_index_23985,_n_value_23986);return _n_value_23986;})());
}}
(void)(this->_n_put_23886(0.0,20.0,d::at(_n_BRANCH_23877,0.0)));
(void)(this->_n_put_23886(0.0,21.0,d::at(_n_BRANCH_23877,1.0)));
(void)(this->_n_put_23886((_n_CX_23867-7.0),20.0,d::String(u"mm")));
(void)(this->_n_put_23886((_n_CX_23867+6.0),20.0,d::String(u"mm")));
(void)(this->_n_put_23886((_n_CX_23867-2.0),21.0,d::String(u"|||||")));
(void)(this->_n_put_23886((_n_CX_23867-2.0),22.0,d::String(u"'''''")));
this->_n_base_23888=d::map(this->_n_grid_23885,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_r_23921=_a0;
return _n_r_23921.slice();});
this->_n_mirror_23889=[=]( d::String _a0) mutable ->d::String{d::String _n_s_23922=_a0;
return d::join(d::map(([&](){d::Array<d::String,false> _n_array_23987;for(const auto &_v:d::padEnd(_n_s_23922,this->_n_cols_23882))_n_array_23987.push(_v);return _n_array_23987;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_23923=_a0;
return (d::truth((_n_c_23923==d::String(u"`")))?_n_c_23923:([&]()->d::String{auto _n_logical_23988=_n_FLIP_23875.get(_n_c_23923);return d::truth(_n_logical_23988)?_n_logical_23988:_n_c_23923;})());}),d::String(u""));};
_render=[=]( double _a0,std::shared_ptr<_n_Record_23961> _a1) mutable ->d::String{double _n_t_23929=_a0;
{
double _n_u_23930=d::mod((d::mod(_n_t_23929,_n_LOOP_23866)+_n_LOOP_23866),_n_LOOP_23866);
std::shared_ptr<_n_Record_23872> _n_head_23931=this->_n_pose_23890(_n_poseAt_23880(_n_u_23930));
double _n_lid_23932=_n_lidAt_23881(_n_u_23930);
{double _n_r_23933=0.0;
for(;d::truth((_n_r_23933<this->_n_rows_23883));(void)((_n_r_23933++))){d::check_cancel();{double _n_c_23934=0.0;
for(;d::truth((_n_c_23934<this->_n_cols_23882));(void)((_n_c_23934++))){d::check_cancel();(void)(([&](){auto&& _n_array_23989=d::at(this->_n_grid_23885,_n_r_23933);auto _n_index_23990=_n_c_23934;auto _n_value_23991=d::at(d::at(this->_n_base_23888,_n_r_23933),_n_c_23934);d::put(_n_array_23989,_n_index_23990,_n_value_23991);return _n_value_23991;})());
}}
}}
(void)(d::forEach(_n_STARS_23878,[&]( std::array<double,2> _a0,double _a1) mutable ->d::String{auto _n_binding_23992=_a0;
double _n_c_23935=d::at(_n_binding_23992,0.0);
double _n_r_23936=d::at(_n_binding_23992,1.0);
double _n_i_23937=_a1;
return ([&](){auto&& _n_array_23993=d::at(this->_n_grid_23885,_n_r_23936);auto _n_index_23994=_n_c_23935;auto _n_value_23995=(d::truth((std::sin((((_n_u_23930*((2.0*ascii::PI)/_n_LOOP_23866))*(d::mod(_n_i_23937,3.0)+1.0))+(_n_i_23937*2.0)))>0.6))?d::String(u"+"):d::String(u"."));d::put(_n_array_23993,_n_index_23994,_n_value_23995);return _n_value_23995;})();}));
(void)(d::forEach(_n_head_23931->_p_top,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_l_23938=_a0;
double _n_j_23939=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_23996;for(const auto &_v:_n_l_23938)_n_array_23996.push(_v);return _n_array_23996;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_c_23940=_a0;
double _n_i_23941=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_23997=(_n_c_23940!=d::String(u" "));return d::truth(_n_logical_23997)?std::variant<d::String,bool>(([&](){auto&& _n_array_23998=d::at(this->_n_grid_23885,(1.0+_n_j_23939));auto _n_index_23999=_n_i_23941;auto _n_value_24000=_n_c_23940;d::put(_n_array_23998,_n_index_23999,_n_value_24000);return _n_value_24000;})()):std::variant<d::String,bool>(_n_logical_23997);})();});}));
{double _n_r_23942=4.0;
for(;d::truth((_n_r_23942<9.0));(void)((_n_r_23942++))){d::check_cancel();(void)((([&](){auto&& _n_array_24001=d::at(this->_n_grid_23885,_n_r_23942);auto _n_index_24002=7.0;auto _n_value_24003=d::String(u"|");d::put(_n_array_24001,_n_index_24002,_n_value_24003);return _n_value_24003;})(),([&](){auto&& _n_array_24004=d::at(this->_n_grid_23885,_n_r_23942);auto _n_index_24005=33.0;auto _n_value_24006=d::String(u"|");d::put(_n_array_24004,_n_index_24005,_n_value_24006);return _n_value_24006;})()));
}}
auto _n_binding_24007=_n_head_23931->_p_eyes;
auto _n_binding_24008=d::at(_n_binding_24007,0.0);
double _n_x0_23943=d::at(_n_binding_24008,0.0);
double _n_e0_23944=d::at(_n_binding_24008,1.0);
auto _n_binding_24009=d::at(_n_binding_24007,1.0);
double _n_x1_23945=d::at(_n_binding_24009,0.0);
double _n_e1_23946=d::at(_n_binding_24009,1.0);
auto _n_eyeAt_23947=[&]( double _a0,double _a1) mutable ->bool{double _n_r_23948=_a0;
double _n_c_23949=_a1;
return ([&]()->bool{auto _n_logical_24010=([&]()->bool{auto _n_logical_24013=([&]()->bool{auto _n_logical_24014=(_n_r_23948>=4.0);return d::truth(_n_logical_24014)?(_n_c_23949>=_n_x0_23943):_n_logical_24014;})();return d::truth(_n_logical_24013)?(_n_c_23949<(_n_x1_23945+double(d::at(d::at(_n_EYES_23873,_n_e1_23946),0.0).size()))):_n_logical_24013;})();return d::truth(_n_logical_24010)?([&]()->bool{auto _n_logical_24011=([&]()->bool{auto _n_logical_24012=(_n_r_23948>4.0);return d::truth(_n_logical_24012)?_n_logical_24012:(_n_c_23949<(_n_x0_23943+double(d::at(d::at(_n_EYES_23873,_n_e0_23944),0.0).size())));})();return d::truth(_n_logical_24011)?_n_logical_24011:(_n_c_23949>=_n_x1_23945);})():_n_logical_24010;})();};
{double _n_r_23950=3.0;
for(;d::truth((_n_r_23950<9.0));(void)((_n_r_23950++))){d::check_cancel();auto _n_binding_24015=this->_n_span_23887(_n_r_23950,std::optional<double>(6.0),std::optional<double>(34.0));
double _n_a_23951=d::at(_n_binding_24015,0.0);
double _n_b_23952=d::at(_n_binding_24015,1.0);
{double _n_c_23953=(_n_a_23951+1.0);
for(;d::truth((_n_c_23953<_n_b_23952));(void)((_n_c_23953++))){d::check_cancel();if((d::truth(double(d::i32((_n_r_23950+_n_c_23953))&d::i32(1.0)))||d::truth(_n_eyeAt_23947(_n_r_23950,_n_c_23953)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_24016=d::at(this->_n_grid_23885,_n_r_23950);auto _n_index_24017=_n_c_23953;auto _n_value_24018=(d::truth(double(d::i32((double(d::i32(_n_c_23953)>>(d::u32(1.0)&31))+_n_r_23950))&d::i32(1.0)))?d::String(u"'"):d::String(u"`"));d::put(_n_array_24016,_n_index_24017,_n_value_24018);return _n_value_24018;})());
}}
}}
for(auto &&_n_item_24019:_n_head_23931->_p_eyes){d::check_cancel();auto _n_binding_24020=_n_item_24019;
double _n_x_23954=d::at(_n_binding_24020,0.0);
double _n_e_23955=d::at(_n_binding_24020,1.0);
{
d::Array<d::String,false> _n_eye_23956=d::at(_n_EYES_23873,_n_e_23955).slice();
double _n_n_23957=double(d::at(_n_eye_23956,0.0).size());
double _n_m_23958=(_n_n_23957-4.0);
if(d::truth((_n_lid_23932>0.2))){d::check_cancel();(void)(([&](){auto&& _n_array_24021=_n_eye_23956;auto _n_index_24022=1.0;auto _n_value_24023=([&](){auto _n_left_24024=([&](){auto _n_left_24026=d::slice(d::at(_n_eye_23956,1.0),0.0,2.0);auto _n_right_24027=d::repeat(d::String(u"_"),_n_m_23958);return (d::string(_n_left_24026)+d::string(_n_right_24027));})();auto _n_right_24025=d::slice(d::at(_n_eye_23956,1.0),(_n_n_23957-2.0));return (d::string(_n_left_24024)+d::string(_n_right_24025));})();d::put(_n_array_24021,_n_index_24022,_n_value_24023);return _n_value_24023;})());
}
if(d::truth((_n_lid_23932>0.6))){d::check_cancel();(void)(([&](){auto&& _n_array_24028=_n_eye_23956;auto _n_index_24029=2.0;auto _n_value_24030=([&](){auto _n_left_24031=([&](){auto _n_left_24033=d::slice(d::at(_n_eye_23956,2.0),0.0,2.0);auto _n_right_24034=d::repeat(d::String(u"-"),_n_m_23958);return (d::string(_n_left_24033)+d::string(_n_right_24034));})();auto _n_right_24032=d::slice(d::at(_n_eye_23956,2.0),(_n_n_23957-2.0));return (d::string(_n_left_24031)+d::string(_n_right_24032));})();d::put(_n_array_24028,_n_index_24029,_n_value_24030);return _n_value_24030;})());
}
{double _n_j_23959=0.0;
for(;d::truth((_n_j_23959<5.0));(void)((_n_j_23959++))){d::check_cancel();(void)(this->_n_put_23886(_n_x_23954,(4.0+_n_j_23959),d::at(_n_eye_23956,_n_j_23959)));
}}

}
}
(void)(([&](){auto&& _n_array_24035=d::at(this->_n_grid_23885,7.0);auto _n_index_24036=_n_head_23931->_p_beak;auto _n_value_24037=d::String(u"V");d::put(_n_array_24035,_n_index_24036,_n_value_24037);return _n_value_24037;})());
return d::join(d::map(this->_n_grid_23885,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_r_23960=_a0;
return d::join(_n_r_23960,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("owl").cols)*ascii::catalog_meta("owl").rows);auto _env=std::make_shared<_n_Record_23961>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &owl_meta(){return catalog_meta("owl");}
std::unique_ptr<Piece> make_owl(const AsciiPieceOptions &o){return std::make_unique<Native_owl>(o);}
}
