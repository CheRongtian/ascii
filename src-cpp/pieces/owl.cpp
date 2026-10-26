// Direct, statically typed C++ from src/pieces/owl.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_23866;
struct _n_Record_23873;
struct _n_Record_23962;
struct _n_Record_23973;
struct _n_Record_23866{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_23866> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23866>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_23873{
d::Array<d::String,false> _p_top{};
d::Array<d::Array<double,false>,false> _p_eyes{};
double _p_beak{};
static std::shared_ptr<_n_Record_23873> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23873>();out->_p_top=d::decode<d::Array<d::String,false>>(j["top"]);out->_p_eyes=d::decode<d::Array<d::Array<double,false>,false>>(j["eyes"]);out->_p_beak=d::decode<double>(j["beak"]);return out;}
};
struct _n_Record_23962{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_23962> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23962>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_23973{
d::String _p_symbol_2f{};
d::String _p_symbol_5c{};
d::String _p_symbol_28{};
d::String _p_symbol_29{};
d::String _p_symbol_60{};
static std::shared_ptr<_n_Record_23973> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_23973>();out->_p_symbol_2f=d::decode<d::String>(j["/"]);out->_p_symbol_5c=d::decode<d::String>(j["\\"]);out->_p_symbol_28=d::decode<d::String>(j["("]);out->_p_symbol_29=d::decode<d::String>(j[")"]);out->_p_symbol_60=d::decode<d::String>(j["`"]);return out;}
};
double _n_ease_23880(double _a0);
double _n_poseAt_23881(double _a0);
double _n_lidAt_23882(double _a0);
std::shared_ptr<_n_Record_23866> _n_meta_23865=[](){return ([&](){auto _n_object_23965=std::make_shared<_n_Record_23866>();_n_object_23965->_p_name=d::String(u"owl");_n_object_23965->_p_category=d::String(u"creatures");_n_object_23965->_p_note=d::String(u"an owl on a branch, blinking slowly and turning its head");_n_object_23965->_p_cols=41.0;_n_object_23965->_p_rows=24.0;_n_object_23965->_p_fps=12.0;return _n_object_23965;})();}();
const double _n_LOOP_23867=[](){return 12.0;}();
const double _n_CX_23868=[](){return 20.0;}();
d::Array<d::Array<double,false>,false> _n_TURNS_23869=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.0,2.5,0.0,(-d::number(2.0))},d::Array<double,false>{4.4,5.1,(-d::number(2.0)),0.0},d::Array<double,false>{7.4,7.9,0.0,2.0},d::Array<double,false>{9.8,10.5,2.0,0.0}};}();
d::Array<double,false> _n_BLINKS_23870=[](){return d::Array<double,false>{0.6,6.1,6.9,11.2};}();
const double _n_BLINK_23871=[](){return 0.7;}();
d::Array<std::shared_ptr<_n_Record_23873>,false> _n_HEADS_23872=[](){return d::Array<std::shared_ptr<_n_Record_23873>,false>{([&](){auto _n_object_23968=std::make_shared<_n_Record_23873>();_n_object_23968->_p_top=d::Array<d::String,false>{d::String(u"          /\\                 /\\"),d::String(u"         /  \\_.--'''''''--._/  \\"),d::String(u"        /                       \\")};_n_object_23968->_p_eyes=d::Array<d::Array<double,false>,false>{d::Array<double,false>{11.0,0.0},d::Array<double,false>{22.0,0.0}};_n_object_23968->_p_beak=20.0;return _n_object_23968;})(),([&](){auto _n_object_23970=std::make_shared<_n_Record_23873>();_n_object_23970->_p_top=d::Array<d::String,false>{d::String(u"           /\\                 /\\"),d::String(u"         _/  \\_.--'''''''--._/  \\"),d::String(u"        /                        |")};_n_object_23970->_p_eyes=d::Array<d::Array<double,false>,false>{d::Array<double,false>{12.0,0.0},d::Array<double,false>{24.0,1.0}};_n_object_23970->_p_beak=22.0;return _n_object_23970;})(),([&](){auto _n_object_23972=std::make_shared<_n_Record_23873>();_n_object_23972->_p_top=d::Array<d::String,false>{d::String(u"            /\\                  /|"),d::String(u"         _./  \\_.--''''''''--._/ |"),d::String(u"        /                        |")};_n_object_23972->_p_eyes=d::Array<d::Array<double,false>,false>{d::Array<double,false>{13.0,0.0},d::Array<double,false>{26.0,1.0}};_n_object_23972->_p_beak=24.0;return _n_object_23972;})()};}();
d::Array<d::Array<d::String,false>,false> _n_EYES_23874=[](){return d::Array<d::Array<d::String,false>,false>{d::Array<d::String,false>{d::String(u" .----. "),d::String(u"/ .--. \\"),d::String(u"| (@@) |"),d::String(u"\\ `--' /"),d::String(u" `----' ")},d::Array<d::String,false>{d::String(u" .--. "),d::String(u"/.--.\\"),d::String(u"|(@@)|"),d::String(u"\\`--'/"),d::String(u" `--' ")}};}();
d::Array<d::String,false> _n_HALF_23875=[](){return d::Array<d::String,false>{d::String(u"       (\\"),d::String(u"      /  \\."),d::String(u"     /  ( (\\"),d::String(u"    |  ( ( (|"),d::String(u"    |  ( ( ( \\"),d::String(u"    |  \\\\\\\\\\  \\"),d::String(u"    |  \\\\\\\\ \\  \\"),d::String(u"     \\  \\\\\\\\ \\  \\"),d::String(u"      \\  \\\\\\\\ \\  \\"),d::String(u"       `. \\\\\\\\ \\  `."),d::String(u"         `-.\\\\\\ \\____")};}();
d::Dict<d::String,d::String> _n_FLIP_23876=[](){return ([&](){d::Dict<d::String,d::String> _n_dictionary_23974;_n_dictionary_23974.set(d::String(u"/"),d::String(u"\\"));_n_dictionary_23974.set(d::String(u"\\"),d::String(u"/"));_n_dictionary_23974.set(d::String(u"("),d::String(u")"));_n_dictionary_23974.set(d::String(u")"),d::String(u"("));_n_dictionary_23974.set(d::String(u"`"),d::String(u"'"));return _n_dictionary_23974;})();}();
d::Array<d::String,false> _n_BODY_23877=[](){return d::map(_n_HALF_23875,[&]( d::String _a0) mutable ->d::String{d::String _n_l_23892=_a0;
{
(void)((_n_l_23892=d::padEnd(_n_l_23892,21.0)));
return (d::string(_n_l_23892)+d::string(d::join(d::map(([&](){d::Array<d::String,false> _n_array_23975;for(const auto &_v:d::slice(_n_l_23892,0.0,20.0))_n_array_23975.push(_v);return _n_array_23975;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_23893=_a0;
return ([&]()->d::String{auto _n_logical_23976=_n_FLIP_23876.get(_n_c_23893);return d::truth(_n_logical_23976)?_n_logical_23976:_n_c_23893;})();}),d::String(u""))));

}
});}();
d::Array<d::String,false> _n_BRANCH_23878=[](){return d::Array<d::String,false>{d::String(u"=-==-===-==-==-=====-=-=====-==-=-==-=-=)"),d::String(u" `-.__.-'~~`--.__.--'   `--.__.-'~`-.__/ ")};}();
d::Array<d::Array<double,false>,false> _n_STARS_23879=[](){return d::Array<d::Array<double,false>,false>{d::Array<double,false>{2.0,1.0},d::Array<double,false>{5.0,0.0},d::Array<double,false>{1.0,5.0},d::Array<double,false>{37.0,0.0},d::Array<double,false>{39.0,3.0},d::Array<double,false>{36.0,6.0},d::Array<double,false>{39.0,11.0}};}();
double _n_ease_23880(double _a0){double _n_x_23894=_a0;
return (d::truth((_n_x_23894<=0.0))?0.0:(d::truth((_n_x_23894>=1.0))?1.0:((_n_x_23894*_n_x_23894)*(3.0-(2.0*_n_x_23894)))));}

double _n_poseAt_23881(double _a0){double _n_u_23895=_a0;
{
double _n_p_23896=0.0;
for(auto &&_n_item_23977:_n_TURNS_23869){d::check_cancel();auto _n_binding_23978=_n_item_23977;
double _n_a_23897=d::at(_n_binding_23978,0.0);
double _n_b_23898=d::at(_n_binding_23978,1.0);
double _n_from_23899=d::at(_n_binding_23978,2.0);
double _n_to_23900=d::at(_n_binding_23978,3.0);
if(d::truth((_n_u_23895>=_n_a_23897))){d::check_cancel();(void)((_n_p_23896=(_n_from_23899+((_n_to_23900-_n_from_23899)*_n_ease_23880(((_n_u_23895-_n_a_23897)/(_n_b_23898-_n_a_23897)))))));
}
}
return d::round(_n_p_23896);

}
}

double _n_lidAt_23882(double _a0){double _n_u_23901=_a0;
{
for(auto &&_n_item_23979:_n_BLINKS_23870){d::check_cancel();double _n_s_23902=_n_item_23979;
{
double _n_d_23903=(_n_u_23901-_n_s_23902);
if((d::truth((_n_d_23903>=0.0))&&d::truth((_n_d_23903<_n_BLINK_23871)))){d::check_cancel();return (d::truth((_n_d_23903<0.3))?_n_ease_23880((_n_d_23903/0.25)):(1.0-_n_ease_23880(((_n_d_23903-0.3)/(_n_BLINK_23871-0.3)))));
}

}
}
return 0.0;

}
}

struct Native_owl final:ascii::Piece{
double _n_cols_23883{};
double _n_rows_23884{};
d::Array<d::Array<d::String,false>,false> _n_grid_23886{};
d::Array<d::Array<d::String,false>,false> _n_base_23889{};
std::function<d::String(d::String)> _n_mirror_23890{};
std::function<d::String(double,std::shared_ptr<_n_Record_23962>)> _render;
d::Array<d::Array<d::String,false>,false> _n_blank_23885(){return d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_23884,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_23883)).fill(d::String(u" "));}));}

void _n_put_23887(double _a0,double _a1,d::String _a2){double _n_x_23904=_a0;
double _n_y_23905=_a1;
d::String _n_s_23906=_a2;
{
{double _n_i_23907=0.0;
for(;d::truth((_n_i_23907<double(_n_s_23906.size())));(void)((_n_i_23907++))){d::check_cancel();if((d::truth(((_n_x_23904+_n_i_23907)>=0.0))&&d::truth(((_n_x_23904+_n_i_23907)<this->_n_cols_23883)))){d::check_cancel();(void)(([&](){auto&& _n_array_24039=d::at(this->_n_grid_23886,_n_y_23905);auto _n_index_24040=(_n_x_23904+_n_i_23907);auto _n_value_24041=d::at(_n_s_23906,_n_i_23907);d::put(_n_array_24039,_n_index_24040,_n_value_24041);return _n_value_24041;})());
}
}}

}
}

d::Array<double,false> _n_span_23888(double _a0,std::optional<double> _a1,std::optional<double> _a2){double _n_r_23910=_a0;
double _n_lo_23911=(d::present(_a1)?d::read(_a1):0.0);
double _n_hi_23912=(d::present(_a2)?d::read(_a2):(this->_n_cols_23883-1.0));
{
double _n_a_23913=_n_CX_23868;
double _n_b_23914=_n_CX_23868;
while((d::truth((_n_a_23913>_n_lo_23911))&&d::truth((d::at(d::at(this->_n_grid_23886,_n_r_23910),(_n_a_23913-1.0))==d::String(u" "))))){d::check_cancel();(void)((_n_a_23913--));
}
while((d::truth((_n_b_23914<_n_hi_23912))&&d::truth((d::at(d::at(this->_n_grid_23886,_n_r_23910),(_n_b_23914+1.0))==d::String(u" "))))){d::check_cancel();(void)((_n_b_23914++));
}
return d::Array<double,false>{_n_a_23913,_n_b_23914};

}
}

std::shared_ptr<_n_Record_23873> _n_pose_23891(double _a0){double _n_k_23925=_a0;
{
std::shared_ptr<_n_Record_23873> _n_h_23926=d::at(_n_HEADS_23872,std::fabs(_n_k_23925));
if(d::truth((_n_k_23925>=0.0))){d::check_cancel();return _n_h_23926;
}
d::Array<d::Array<double,false>,false> _n_eyes_23927=d::map(_n_h_23926->_p_eyes,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{auto _n_binding_24042=_a0;
double _n_x_23928=d::at(_n_binding_24042,0.0);
double _n_e_23929=d::at(_n_binding_24042,1.0);
return d::Array<double,false>{((this->_n_cols_23883-_n_x_23928)-double(d::at(d::at(_n_EYES_23874,_n_e_23929),0.0).size())),_n_e_23929};}).reverse();
return ([&](){auto _n_object_24044=std::make_shared<_n_Record_23873>();_n_object_24044->_p_top=d::map(_n_h_23926->_p_top,this->_n_mirror_23890);_n_object_24044->_p_eyes=_n_eyes_23927;_n_object_24044->_p_beak=((this->_n_cols_23883-1.0)-_n_h_23926->_p_beak);return _n_object_24044;})();

}
}

explicit Native_owl(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_23980=_n_meta_23865;
this->_n_cols_23883=_n_binding_23980->_p_cols;
this->_n_rows_23884=_n_binding_23980->_p_rows;
this->_n_grid_23886=this->_n_blank_23885();
(void)(d::forEach(_n_BODY_23877,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_l_23908=_a0;
double _n_j_23909=_a1;
this->_n_put_23887(0.0,(9.0+_n_j_23909),_n_l_23908);}));
{double _n_r_23915=10.0;
for(;d::truth((_n_r_23915<19.0));(void)((_n_r_23915++))){d::check_cancel();double _n_gap_23916=(d::truth((_n_r_23915<13.0))?4.0:(d::truth((_n_r_23915<16.0))?3.0:2.0));
double _n_off_23917=(d::truth(double(d::i32(_n_r_23915)&d::i32(1.0)))?std::floor((_n_gap_23916/2.0)):0.0);
auto _n_binding_23981=this->_n_span_23888(_n_r_23915,std::optional<double>{},std::optional<double>{});
double _n_a_23918=d::at(_n_binding_23981,0.0);
double _n_b_23919=d::at(_n_binding_23981,1.0);
{double _n_c_23920=(_n_a_23918+1.0);
for(;d::truth((_n_c_23920<_n_b_23919));(void)((_n_c_23920++))){d::check_cancel();if(d::truth((d::mod((d::mod(((_n_c_23920-_n_CX_23868)+_n_off_23917),_n_gap_23916)+_n_gap_23916),_n_gap_23916)==0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_23982=d::at(this->_n_grid_23886,_n_r_23915);auto _n_index_23983=_n_c_23920;auto _n_value_23984=d::String(u"v");d::put(_n_array_23982,_n_index_23983,_n_value_23984);return _n_value_23984;})());
}
}}
}}
{double _n_c_23921=10.0;
for(;d::truth((_n_c_23921<=30.0));(void)((_n_c_23921=(_n_c_23921+2.0)))){d::check_cancel();(void)(([&](){auto&& _n_array_23985=d::at(this->_n_grid_23886,9.0);auto _n_index_23986=_n_c_23921;auto _n_value_23987=(d::truth(double(d::i32(_n_c_23921)&d::i32(2.0)))?d::String(u"'"):d::String(u"`"));d::put(_n_array_23985,_n_index_23986,_n_value_23987);return _n_value_23987;})());
}}
(void)(this->_n_put_23887(0.0,20.0,d::at(_n_BRANCH_23878,0.0)));
(void)(this->_n_put_23887(0.0,21.0,d::at(_n_BRANCH_23878,1.0)));
(void)(this->_n_put_23887((_n_CX_23868-7.0),20.0,d::String(u"mm")));
(void)(this->_n_put_23887((_n_CX_23868+6.0),20.0,d::String(u"mm")));
(void)(this->_n_put_23887((_n_CX_23868-2.0),21.0,d::String(u"|||||")));
(void)(this->_n_put_23887((_n_CX_23868-2.0),22.0,d::String(u"'''''")));
this->_n_base_23889=d::map(this->_n_grid_23886,[&]( d::Array<d::String,false> _a0) mutable ->d::Array<d::String,false>{d::Array<d::String,false> _n_r_23922=_a0;
return _n_r_23922.slice();});
this->_n_mirror_23890=[=]( d::String _a0) mutable ->d::String{d::String _n_s_23923=_a0;
return d::join(d::map(([&](){d::Array<d::String,false> _n_array_23988;for(const auto &_v:d::padEnd(_n_s_23923,this->_n_cols_23883))_n_array_23988.push(_v);return _n_array_23988;})().reverse(),[&]( d::String _a0) mutable ->d::String{d::String _n_c_23924=_a0;
return (d::truth((_n_c_23924==d::String(u"`")))?_n_c_23924:([&]()->d::String{auto _n_logical_23989=_n_FLIP_23876.get(_n_c_23924);return d::truth(_n_logical_23989)?_n_logical_23989:_n_c_23924;})());}),d::String(u""));};
_render=[=]( double _a0,std::shared_ptr<_n_Record_23962> _a1) mutable ->d::String{double _n_t_23930=_a0;
{
double _n_u_23931=d::mod((d::mod(_n_t_23930,_n_LOOP_23867)+_n_LOOP_23867),_n_LOOP_23867);
std::shared_ptr<_n_Record_23873> _n_head_23932=this->_n_pose_23891(_n_poseAt_23881(_n_u_23931));
double _n_lid_23933=_n_lidAt_23882(_n_u_23931);
{double _n_r_23934=0.0;
for(;d::truth((_n_r_23934<this->_n_rows_23884));(void)((_n_r_23934++))){d::check_cancel();{double _n_c_23935=0.0;
for(;d::truth((_n_c_23935<this->_n_cols_23883));(void)((_n_c_23935++))){d::check_cancel();(void)(([&](){auto&& _n_array_23990=d::at(this->_n_grid_23886,_n_r_23934);auto _n_index_23991=_n_c_23935;auto _n_value_23992=d::at(d::at(this->_n_base_23889,_n_r_23934),_n_c_23935);d::put(_n_array_23990,_n_index_23991,_n_value_23992);return _n_value_23992;})());
}}
}}
(void)(d::forEach(_n_STARS_23879,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::String{auto _n_binding_23993=_a0;
double _n_c_23936=d::at(_n_binding_23993,0.0);
double _n_r_23937=d::at(_n_binding_23993,1.0);
double _n_i_23938=_a1;
return ([&](){auto&& _n_array_23994=d::at(this->_n_grid_23886,_n_r_23937);auto _n_index_23995=_n_c_23936;auto _n_value_23996=(d::truth((std::sin((((_n_u_23931*((2.0*ascii::PI)/_n_LOOP_23867))*(d::mod(_n_i_23938,3.0)+1.0))+(_n_i_23938*2.0)))>0.6))?d::String(u"+"):d::String(u"."));d::put(_n_array_23994,_n_index_23995,_n_value_23996);return _n_value_23996;})();}));
(void)(d::forEach(_n_head_23932->_p_top,[&]( d::String _a0,double _a1) mutable ->void{d::String _n_l_23939=_a0;
double _n_j_23940=_a1;
d::forEach(([&](){d::Array<d::String,false> _n_array_23997;for(const auto &_v:_n_l_23939)_n_array_23997.push(_v);return _n_array_23997;})(),[&]( d::String _a0,double _a1) mutable ->std::variant<d::String,bool>{d::String _n_c_23941=_a0;
double _n_i_23942=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_23998=(_n_c_23941!=d::String(u" "));return d::truth(_n_logical_23998)?std::variant<d::String,bool>(([&](){auto&& _n_array_23999=d::at(this->_n_grid_23886,(1.0+_n_j_23940));auto _n_index_24000=_n_i_23942;auto _n_value_24001=_n_c_23941;d::put(_n_array_23999,_n_index_24000,_n_value_24001);return _n_value_24001;})()):std::variant<d::String,bool>(_n_logical_23998);})();});}));
{double _n_r_23943=4.0;
for(;d::truth((_n_r_23943<9.0));(void)((_n_r_23943++))){d::check_cancel();(void)((([&](){auto&& _n_array_24002=d::at(this->_n_grid_23886,_n_r_23943);auto _n_index_24003=7.0;auto _n_value_24004=d::String(u"|");d::put(_n_array_24002,_n_index_24003,_n_value_24004);return _n_value_24004;})(),([&](){auto&& _n_array_24005=d::at(this->_n_grid_23886,_n_r_23943);auto _n_index_24006=33.0;auto _n_value_24007=d::String(u"|");d::put(_n_array_24005,_n_index_24006,_n_value_24007);return _n_value_24007;})()));
}}
auto _n_binding_24008=_n_head_23932->_p_eyes;
auto _n_binding_24009=d::at(_n_binding_24008,0.0);
double _n_x0_23944=d::at(_n_binding_24009,0.0);
double _n_e0_23945=d::at(_n_binding_24009,1.0);
auto _n_binding_24010=d::at(_n_binding_24008,1.0);
double _n_x1_23946=d::at(_n_binding_24010,0.0);
double _n_e1_23947=d::at(_n_binding_24010,1.0);
auto _n_eyeAt_23948=[&]( double _a0,double _a1) mutable ->bool{double _n_r_23949=_a0;
double _n_c_23950=_a1;
return ([&]()->bool{auto _n_logical_24011=([&]()->bool{auto _n_logical_24014=([&]()->bool{auto _n_logical_24015=(_n_r_23949>=4.0);return d::truth(_n_logical_24015)?(_n_c_23950>=_n_x0_23944):_n_logical_24015;})();return d::truth(_n_logical_24014)?(_n_c_23950<(_n_x1_23946+double(d::at(d::at(_n_EYES_23874,_n_e1_23947),0.0).size()))):_n_logical_24014;})();return d::truth(_n_logical_24011)?([&]()->bool{auto _n_logical_24012=([&]()->bool{auto _n_logical_24013=(_n_r_23949>4.0);return d::truth(_n_logical_24013)?_n_logical_24013:(_n_c_23950<(_n_x0_23944+double(d::at(d::at(_n_EYES_23874,_n_e0_23945),0.0).size())));})();return d::truth(_n_logical_24012)?_n_logical_24012:(_n_c_23950>=_n_x1_23946);})():_n_logical_24011;})();};
{double _n_r_23951=3.0;
for(;d::truth((_n_r_23951<9.0));(void)((_n_r_23951++))){d::check_cancel();auto _n_binding_24016=this->_n_span_23888(_n_r_23951,std::optional<double>(6.0),std::optional<double>(34.0));
double _n_a_23952=d::at(_n_binding_24016,0.0);
double _n_b_23953=d::at(_n_binding_24016,1.0);
{double _n_c_23954=(_n_a_23952+1.0);
for(;d::truth((_n_c_23954<_n_b_23953));(void)((_n_c_23954++))){d::check_cancel();if((d::truth(double(d::i32((_n_r_23951+_n_c_23954))&d::i32(1.0)))||d::truth(_n_eyeAt_23948(_n_r_23951,_n_c_23954)))){d::check_cancel();continue;
}
(void)(([&](){auto&& _n_array_24017=d::at(this->_n_grid_23886,_n_r_23951);auto _n_index_24018=_n_c_23954;auto _n_value_24019=(d::truth(double(d::i32((double(d::i32(_n_c_23954)>>(d::u32(1.0)&31))+_n_r_23951))&d::i32(1.0)))?d::String(u"'"):d::String(u"`"));d::put(_n_array_24017,_n_index_24018,_n_value_24019);return _n_value_24019;})());
}}
}}
for(auto &&_n_item_24020:_n_head_23932->_p_eyes){d::check_cancel();auto _n_binding_24021=_n_item_24020;
double _n_x_23955=d::at(_n_binding_24021,0.0);
double _n_e_23956=d::at(_n_binding_24021,1.0);
{
d::Array<d::String,false> _n_eye_23957=d::at(_n_EYES_23874,_n_e_23956).slice();
double _n_n_23958=double(d::at(_n_eye_23957,0.0).size());
double _n_m_23959=(_n_n_23958-4.0);
if(d::truth((_n_lid_23933>0.2))){d::check_cancel();(void)(([&](){auto&& _n_array_24022=_n_eye_23957;auto _n_index_24023=1.0;auto _n_value_24024=([&](){auto _n_left_24025=([&](){auto _n_left_24027=d::slice(d::at(_n_eye_23957,1.0),0.0,2.0);auto _n_right_24028=d::repeat(d::String(u"_"),_n_m_23959);return (d::string(_n_left_24027)+d::string(_n_right_24028));})();auto _n_right_24026=d::slice(d::at(_n_eye_23957,1.0),(_n_n_23958-2.0));return (d::string(_n_left_24025)+d::string(_n_right_24026));})();d::put(_n_array_24022,_n_index_24023,_n_value_24024);return _n_value_24024;})());
}
if(d::truth((_n_lid_23933>0.6))){d::check_cancel();(void)(([&](){auto&& _n_array_24029=_n_eye_23957;auto _n_index_24030=2.0;auto _n_value_24031=([&](){auto _n_left_24032=([&](){auto _n_left_24034=d::slice(d::at(_n_eye_23957,2.0),0.0,2.0);auto _n_right_24035=d::repeat(d::String(u"-"),_n_m_23959);return (d::string(_n_left_24034)+d::string(_n_right_24035));})();auto _n_right_24033=d::slice(d::at(_n_eye_23957,2.0),(_n_n_23958-2.0));return (d::string(_n_left_24032)+d::string(_n_right_24033));})();d::put(_n_array_24029,_n_index_24030,_n_value_24031);return _n_value_24031;})());
}
{double _n_j_23960=0.0;
for(;d::truth((_n_j_23960<5.0));(void)((_n_j_23960++))){d::check_cancel();(void)(this->_n_put_23887(_n_x_23955,(4.0+_n_j_23960),d::at(_n_eye_23957,_n_j_23960)));
}}

}
}
(void)(([&](){auto&& _n_array_24036=d::at(this->_n_grid_23886,7.0);auto _n_index_24037=_n_head_23932->_p_beak;auto _n_value_24038=d::String(u"V");d::put(_n_array_24036,_n_index_24037,_n_value_24038);return _n_value_24038;})());
return d::join(d::map(this->_n_grid_23886,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_r_23961=_a0;
return d::join(_n_r_23961,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("owl").cols)*ascii::catalog_meta("owl").rows);auto _env=std::make_shared<_n_Record_23962>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &owl_meta(){return catalog_meta("owl");}
std::unique_ptr<Piece> make_owl(const AsciiPieceOptions &o){return std::make_unique<Native_owl>(o);}
}
