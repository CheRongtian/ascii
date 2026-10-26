// Direct, statically typed C++ from src/pieces/cube.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_6293;
struct _n_Record_6412;
struct _n_Record_6293{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_6293> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6293>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_6412{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_6412> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_6412>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
d::Array<double,false> _n_unit_6304(d::Array<double,false> _a0);
void _n_line_6306(std::array<double,2> _a0,std::array<double,2> _a1,std::function<d::Unknown(double,double,d::String)> _a2);
bool _n_inside_6307(d::Array<std::array<double,2>,false> _a0,double _a1,double _a2,double _a3);
std::shared_ptr<_n_Record_6293> _n_meta_6292=[](){return ([&](){auto _n_object_6415=std::make_shared<_n_Record_6293>();_n_object_6415->_p_name=d::String(u"cube");_n_object_6415->_p_category=d::String(u"shapes");_n_object_6415->_p_note=d::String(u"a stippled hidden-line cube turning a quarter at a time");_n_object_6415->_p_cols=32.0;_n_object_6415->_p_rows=18.0;_n_object_6415->_p_fps=24.0;return _n_object_6415;})();}();
const double _n_CW_6294=[](){return 0.5;}();
const double _n_S_6295=[](){return 4.95;}();
const double _n_REST_6296=[](){return 0.21;}();
const double _n_PITCH_6297=[](){return (-d::number(0.43));}();
const double _n_TURN_6298=[](){return 4.0;}();
const double _n_HOLD_6299=[](){return 2.0;}();
d::Array<std::function<d::String(double,double)>,false> _n_TONES_6300=[](){return d::Array<std::function<d::String(double,double)>,false>{[=]( double _a0,double _a1) mutable ->d::String{double _n_c_6312=_a0;
double _n_r_6313=_a1;
return (d::truth((d::mod((_n_c_6312+(2.0*_n_r_6313)),4.0)==0.0))?d::String(u"."):d::String(u" "));},[=]( double _a0,double _a1) mutable ->d::String{double _n_c_6314=_a0;
double _n_r_6315=_a1;
return (d::truth(double(d::i32((_n_c_6314+_n_r_6315))&d::i32(1.0)))?d::String(u"."):d::String(u" "));},[=]( double _a0,double _a1) mutable ->d::String{double _n_c_6316=_a0;
double _n_r_6317=_a1;
return (d::truth(double(d::i32((_n_c_6316+_n_r_6317))&d::i32(1.0)))?d::String(u":"):d::String(u" "));}};}();
d::Array<std::array<double,3>,false> _n_V_6301=[](){return d::Array<std::array<double,3>,false>{};}();
d::Array<std::array<double,2>,false> _n_E_6302=[](){return d::Array<std::array<double,2>,false>{};}();
d::Array<std::shared_ptr<std::tuple<double,double,d::Array<double,false>>>,false> _n_F_6303=[](){return d::Array<std::shared_ptr<std::tuple<double,double,d::Array<double,false>>>,false>{};}();
d::Array<double,false> _n_LIGHT_6305=[](){return _n_unit_6304(d::Array<double,false>{(-d::number(0.35)),0.6,(-d::number(0.72))});}();
const bool _n_init_6416=[](){{double _n_i_6318=0.0;
for(;d::truth((_n_i_6318<8.0));(void)((_n_i_6318++))){d::check_cancel();(void)(_n_V_6301.push(std::array<double,3>{(d::truth(double(d::i32(_n_i_6318)&d::i32(1.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_6318)&d::i32(2.0)))?1.0:(-d::number(1.0))),(d::truth(double(d::i32(_n_i_6318)&d::i32(4.0)))?1.0:(-d::number(1.0)))}));
}}
{double _n_i_6319=0.0;
for(;d::truth((_n_i_6319<8.0));(void)((_n_i_6319++))){d::check_cancel();for(auto &&_n_item_6417:d::Array<double,false>{1.0,2.0,4.0}){d::check_cancel();double _n_b_6320=_n_item_6417;
if(d::truth((!d::truth(double(d::i32(_n_i_6319)&d::i32(_n_b_6320)))))){d::check_cancel();(void)(_n_E_6302.push(std::array<double,2>{_n_i_6319,double(d::i32(_n_i_6319)|d::i32(_n_b_6320))}));
}
}
}}
{double _n_k_6321=0.0;
for(;d::truth((_n_k_6321<3.0));(void)((_n_k_6321++))){d::check_cancel();auto _n_binding_6418=d::filter(d::Array<double,false>{1.0,2.0,4.0},[&]( double _a0,double _a1) mutable ->bool{double _n___6324=_a0;
double _n_j_6325=_a1;
return (_n_j_6325!=_n_k_6321);});
double _n_a_6322=d::at(_n_binding_6418,0.0);
double _n_b_6323=d::at(_n_binding_6418,1.0);
for(auto &&_n_item_6419:d::Array<double,false>{0.0,1.0}){d::check_cancel();double _n_s_6326=_n_item_6419;
{
double _n_base_6327=double(int32_t(d::u32(_n_s_6326)<<(d::u32(_n_k_6321)&31)));
(void)(_n_F_6303.push(std::make_shared<std::tuple<double,double,d::Array<double,false>>>(_n_k_6321,(d::truth(_n_s_6326)?1.0:(-d::number(1.0))),d::Array<double,false>{_n_base_6327,double(d::i32(_n_base_6327)|d::i32(_n_a_6322)),double(d::i32(double(d::i32(_n_base_6327)|d::i32(_n_a_6322)))|d::i32(_n_b_6323)),double(d::i32(_n_base_6327)|d::i32(_n_b_6323))})));

}
}
}}
return true;}();
d::Array<double,false> _n_unit_6304(d::Array<double,false> _a0){d::Array<double,false> _n_v_6328=_a0;
return d::map(_n_v_6328,[&]( double _a0) mutable ->double{double _n_c_6329=_a0;
return (_n_c_6329/d::hypot(_n_v_6328));});}

void _n_line_6306(std::array<double,2> _a0,std::array<double,2> _a1,std::function<d::Unknown(double,double,d::String)> _a2){auto _n_binding_6420=_a0;
double _n_c0_6330=d::at(_n_binding_6420,0.0);
double _n_r0_6331=d::at(_n_binding_6420,1.0);
auto _n_binding_6421=_a1;
double _n_c1_6332=d::at(_n_binding_6421,0.0);
double _n_r1_6333=d::at(_n_binding_6421,1.0);
std::function<d::Unknown(double,double,d::String)> _n_put_6334=_a2;
{
if(d::truth((_n_r1_6333<_n_r0_6331))){d::check_cancel();(void)(([&](){auto _n_unpack_6422=std::array<double,4>{_n_c1_6332,_n_r1_6333,_n_c0_6330,_n_r0_6331};_n_c0_6330=d::at(_n_unpack_6422,0.0);_n_r0_6331=d::at(_n_unpack_6422,1.0);_n_c1_6332=d::at(_n_unpack_6422,2.0);_n_r1_6333=d::at(_n_unpack_6422,3.0);return _n_unpack_6422;})());
}
double _n_dc_6338=(_n_c1_6332-_n_c0_6330);
double _n_dr_6339=(_n_r1_6333-_n_r0_6331);
double _n_s_6340=d::sign(_n_dc_6338);
if(d::truth(((5.0*_n_dr_6339)<((std::fabs(_n_dc_6338)*_n_CW_6294)*2.0)))){d::check_cancel();{double _n_c_6341=(_n_c0_6330+_n_s_6340);
for(;d::truth((_n_c_6341!=_n_c1_6332));(void)((_n_c_6341=(_n_c_6341+_n_s_6340)))){d::check_cancel();(void)(([&](){auto _n_argument_6423=_n_c_6341;auto _n_argument_6424=d::round((_n_r0_6331+((_n_dr_6339*(_n_c_6341-_n_c0_6330))/_n_dc_6338)));auto _n_argument_6425=d::String(u"-");return _n_put_6334(_n_argument_6423,_n_argument_6424,_n_argument_6425);})());
}}
return;
}
d::String _n_ch_6342=(d::truth(((3.0*std::fabs(_n_dc_6338))<=_n_dr_6339))?d::String(u"|"):(d::truth((_n_s_6340>0.0))?d::String(u"\\"):d::String(u"/")));
auto _n_at_6343=[&]( double _a0) mutable ->double{double _n_r_6344=_a0;
return d::round((_n_c0_6330+((_n_dc_6338*(_n_r_6344-_n_r0_6331))/_n_dr_6339)));};
{double _n_r_6345=_n_r0_6331;
for(;d::truth((_n_r_6345<_n_r1_6333));(void)((_n_r_6345++))){d::check_cancel();if(d::truth((_n_r_6345>_n_r0_6331))){d::check_cancel();(void)(([&](){auto _n_argument_6426=_n_at_6343(_n_r_6345);auto _n_argument_6427=_n_r_6345;auto _n_argument_6428=_n_ch_6342;return _n_put_6334(_n_argument_6426,_n_argument_6427,_n_argument_6428);})());
}
{double _n_c_6346=(_n_at_6343(_n_r_6345)+_n_s_6340);
for(;d::truth((((_n_at_6343((_n_r_6345+1.0))-_n_c_6346)*_n_s_6340)>0.0));(void)((_n_c_6346=(_n_c_6346+_n_s_6340)))){d::check_cancel();(void)(_n_put_6334(_n_c_6346,_n_r_6345,d::String(u"_")));
}}
}}

}
}

bool _n_inside_6307(d::Array<std::array<double,2>,false> _a0,double _a1,double _a2,double _a3){d::Array<std::array<double,2>,false> _n_q_6347=_a0;
double _n_c_6348=_a1;
double _n_r_6349=_a2;
double _n_m_6350=_a3;
{
double _n_sign_6351=0.0;
{double _n_i_6352=0.0;
for(;d::truth((_n_i_6352<4.0));(void)((_n_i_6352++))){d::check_cancel();auto _n_binding_6429=d::at(_n_q_6347,_n_i_6352);
double _n_x0_6353=d::at(_n_binding_6429,0.0);
double _n_y0_6354=d::at(_n_binding_6429,1.0);
auto _n_binding_6430=d::at(_n_q_6347,d::mod((_n_i_6352+1.0),4.0));
double _n_x1_6355=d::at(_n_binding_6430,0.0);
double _n_y1_6356=d::at(_n_binding_6430,1.0);
double _n_ex_6357=((_n_x1_6355-_n_x0_6353)*_n_CW_6294);
double _n_ey_6358=(_n_y1_6356-_n_y0_6354);
double _n_d_6359=(((((_n_c_6348-_n_x0_6353)*_n_CW_6294)*_n_ey_6358)-((_n_r_6349-_n_y0_6354)*_n_ex_6357))/d::hypot(std::initializer_list<double>{_n_ex_6357,_n_ey_6358}));
if(d::truth((std::fabs(_n_d_6359)<_n_m_6350))){d::check_cancel();return false;
}
if((d::truth(_n_sign_6351)&&d::truth((d::sign(_n_d_6359)!=_n_sign_6351)))){d::check_cancel();return false;
}
(void)((_n_sign_6351=d::sign(_n_d_6359)));
}}
return true;

}
}

struct Native_cube final:ascii::Piece{
double _n_cols_6308{};
double _n_rows_6309{};
d::Array<d::Array<d::String,false>,false> _n_grid_6311{};
std::function<d::String(double,std::shared_ptr<_n_Record_6412>)> _render;
double _n_ease_6310(double _a0){double _n_u_6360=_a0;
return (d::truth((_n_u_6360<=0.0))?0.0:(d::truth((_n_u_6360>=1.0))?1.0:(((_n_u_6360*_n_u_6360)*_n_u_6360)*((_n_u_6360*((6.0*_n_u_6360)-15.0))+10.0))));}

explicit Native_cube(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_6431=_n_meta_6292;
this->_n_cols_6308=_n_binding_6431->_p_cols;
this->_n_rows_6309=_n_binding_6431->_p_rows;
this->_n_grid_6311=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_6309,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_6308));}));
_render=[=]( double _a0,std::shared_ptr<_n_Record_6412> _a1) mutable ->d::String{double _n_t_6361=_a0;
auto _n_binding_6434=(d::present(_a1)?_a1:([&](){auto _n_object_6433=std::make_shared<_n_Record_6412>();return _n_object_6433;})());
bool _n_paper_6362=(d::present(_n_binding_6434->_p_paper)?d::read(_n_binding_6434->_p_paper):false);
{
double _n_n_6363=std::floor((_n_t_6361/(_n_TURN_6298+_n_HOLD_6299)));
double _n_yaw_6364=(_n_REST_6296+((ascii::PI/2.0)*(_n_n_6363+this->_n_ease_6310(((_n_t_6361-(_n_n_6363*(_n_TURN_6298+_n_HOLD_6299)))/_n_TURN_6298)))));
double _n_cy_6365=std::cos(_n_yaw_6364);
double _n_sy_6366=std::sin(_n_yaw_6364);
double _n_cp_6367=std::cos(_n_PITCH_6297);
double _n_sp_6368=std::sin(_n_PITCH_6297);
auto _n_turn_6369=[&]( d::Array<double,false> _a0) mutable ->std::array<double,3>{auto _n_binding_6435=_a0;
double _n_x_6370=d::at(_n_binding_6435,0.0);
double _n_y_6371=d::at(_n_binding_6435,1.0);
double _n_z_6372=d::at(_n_binding_6435,2.0);
{
double _n_z1_6373=((_n_z_6372*_n_cy_6365)-(_n_x_6370*_n_sy_6366));
return std::array<double,3>{((_n_x_6370*_n_cy_6365)+(_n_z_6372*_n_sy_6366)),((_n_y_6371*_n_cp_6367)-(_n_z1_6373*_n_sp_6368)),((_n_y_6371*_n_sp_6368)+(_n_z1_6373*_n_cp_6367))};

}
};
d::Array<std::array<double,2>,false> _n_P_6374=d::map(_n_V_6301,[&]( std::array<double,3> _a0) mutable ->std::array<double,2>{auto&& _n_v_6375=_a0;
{
auto _n_binding_6436=_n_turn_6369(d::Array<double,false>(_n_v_6375));
double _n_x_6376=d::at(_n_binding_6436,0.0);
double _n_y_6377=d::at(_n_binding_6436,1.0);
return std::array<double,2>{d::round((((this->_n_cols_6308/2.0)-0.5)+((_n_x_6376*_n_S_6295)/_n_CW_6294))),d::round((((this->_n_rows_6309/2.0)-0.5)-(_n_y_6377*_n_S_6295)))};

}
});
for(auto &&_n_item_6437:this->_n_grid_6311){d::check_cancel();d::Array<d::String,false> _n_row_6378=_n_item_6437;
(void)(_n_row_6378.fill(d::String(u" ")));
}
auto _n_put_6379=[=]( double _a0,double _a1,d::String _a2) mutable ->std::variant<d::String,bool>{double _n_c_6380=_a0;
double _n_r_6381=_a1;
d::String _n_ch_6382=_a2;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_6438=([&]()->bool{auto _n_logical_6442=([&]()->bool{auto _n_logical_6443=([&]()->bool{auto _n_logical_6444=(_n_r_6381>=0.0);return d::truth(_n_logical_6444)?(_n_r_6381<this->_n_rows_6309):_n_logical_6444;})();return d::truth(_n_logical_6443)?(_n_c_6380>=0.0):_n_logical_6443;})();return d::truth(_n_logical_6442)?(_n_c_6380<this->_n_cols_6308):_n_logical_6442;})();return d::truth(_n_logical_6438)?std::variant<d::String,bool>(([&](){auto&& _n_array_6439=d::at(this->_n_grid_6311,_n_r_6381);auto _n_index_6440=_n_c_6380;auto _n_value_6441=_n_ch_6382;d::put(_n_array_6439,_n_index_6440,_n_value_6441);return _n_value_6441;})()):std::variant<d::String,bool>(_n_logical_6438);})();};
d::Array<std::array<double,3>,false> _n_shown_6383=d::map(_n_F_6303,[&]( std::shared_ptr<std::tuple<double,double,d::Array<double,false>>> _a0) mutable ->std::array<double,3>{auto _n_binding_6445=_a0;
double _n_k_6384=std::get<0>(*_n_binding_6445);
double _n_s_6385=std::get<1>(*_n_binding_6445);
return _n_turn_6369(d::map(d::Array<double,false>{0.0,1.0,2.0},[&]( double _a0) mutable ->double{double _n_j_6386=_a0;
return (d::truth((_n_j_6386==_n_k_6384))?_n_s_6385:0.0);}));});
d::Array<bool,false> _n_seen_6387=d::map(_n_E_6302,[&]( std::array<double,2> _a0) mutable ->bool{auto _n_binding_6446=_a0;
double _n_a_6388=d::at(_n_binding_6446,0.0);
double _n_b_6389=d::at(_n_binding_6446,1.0);
return d::some(_n_F_6303,[&]( std::shared_ptr<std::tuple<double,double,d::Array<double,false>>> _a0,double _a1) mutable ->bool{auto _n_binding_6447=_a0;
d::Array<double,false> _n_q_6390=std::get<2>(*_n_binding_6447);
double _n_f_6391=_a1;
return ([&]()->bool{auto _n_logical_6448=([&]()->bool{auto _n_logical_6449=(d::at(d::at(_n_shown_6383,_n_f_6391),2.0)<(-d::number(0.12)));return d::truth(_n_logical_6449)?_n_q_6390.includes(_n_a_6388):_n_logical_6449;})();return d::truth(_n_logical_6448)?_n_q_6390.includes(_n_b_6389):_n_logical_6448;})();});});
(void)(d::forEach(_n_E_6302,[&]( std::array<double,2> _a0,double _a1) mutable ->std::optional<bool>{auto _n_binding_6450=_a0;
double _n_a_6392=d::at(_n_binding_6450,0.0);
double _n_b_6393=d::at(_n_binding_6450,1.0);
double _n_i_6394=_a1;
return ([&]()->std::optional<bool>{auto _n_logical_6451=d::at(_n_seen_6387,_n_i_6394);return d::truth(_n_logical_6451)?(_n_line_6306(d::at(_n_P_6374,_n_a_6392),d::at(_n_P_6374,_n_b_6393),[_n_callable_6452=_n_put_6379](double _p0,double _p1,d::String _p2)mutable->d::Unknown{return std::visit([&](const auto &_v)->d::Unknown{return d::Unknown(_v);},_n_callable_6452(_p0,_p1,_p2));}),std::optional<bool>{}):std::optional<bool>(_n_logical_6451);})();}));
(void)(d::forEach(_n_E_6302,[&]( std::array<double,2> _a0,double _a1) mutable ->std::variant<d::String,bool>{auto _n_binding_6453=_a0;
double _n_a_6395=d::at(_n_binding_6453,0.0);
double _n_b_6396=d::at(_n_binding_6453,1.0);
double _n_i_6397=_a1;
return ([&]()->std::variant<d::String,bool>{auto _n_logical_6454=d::at(_n_seen_6387,_n_i_6397);return d::truth(_n_logical_6454)?(([&](){auto _n_arguments_6455=d::at(_n_P_6374,_n_a_6395);return _n_put_6379(d::at(_n_arguments_6455,0.0),d::at(_n_arguments_6455,1.0),d::String(u"+"));})(),([&](){auto _n_arguments_6456=d::at(_n_P_6374,_n_b_6396);return _n_put_6379(d::at(_n_arguments_6456,0.0),d::at(_n_arguments_6456,1.0),d::String(u"+"));})()):std::variant<d::String,bool>(_n_logical_6454);})();}));
(void)(d::forEach(_n_F_6303,[&]( std::shared_ptr<std::tuple<double,double,d::Array<double,false>>> _a0,double _a1) mutable ->void{auto _n_binding_6457=_a0;
d::Array<double,false> _n_q_6398=std::get<2>(*_n_binding_6457);
double _n_f_6399=_a1;
{
if(d::truth((d::at(d::at(_n_shown_6383,_n_f_6399),2.0)>=(-d::number(0.12))))){d::check_cancel();return;
}
double _n_lit_6400=d::maximum({0.0,(((d::at(d::at(_n_shown_6383,_n_f_6399),0.0)*d::at(_n_LIGHT_6305,0.0))+(d::at(d::at(_n_shown_6383,_n_f_6399),1.0)*d::at(_n_LIGHT_6305,1.0)))+(d::at(d::at(_n_shown_6383,_n_f_6399),2.0)*d::at(_n_LIGHT_6305,2.0)))});
double _n_k_6401=([&](){auto _n_argument_6458=2.0;auto _n_argument_6459=std::floor((_n_lit_6400*3.0));return d::minimum({_n_argument_6458,_n_argument_6459});})();
std::function<d::String(double,double)> _n_tone_6402=d::at(_n_TONES_6300,(d::truth(_n_paper_6362)?(2.0-_n_k_6401):_n_k_6401));
d::Array<std::array<double,2>,false> _n_quad_6403=d::map(_n_q_6398,[&]( double _a0) mutable ->std::array<double,2>{double _n_i_6404=_a0;
return d::at(_n_P_6374,_n_i_6404);});
d::Array<double,false> _n_ys_6405=d::map(_n_quad_6403,[&]( std::array<double,2> _a0) mutable ->double{auto&& _n_p_6406=_a0;
return d::at(_n_p_6406,1.0);});
d::Array<double,false> _n_xs_6407=d::map(_n_quad_6403,[&]( std::array<double,2> _a0) mutable ->double{auto&& _n_p_6408=_a0;
return d::at(_n_p_6408,0.0);});
{double _n_r_6409=([&](){d::Array<double> _n_numbers_6460;for(auto _x:_n_ys_6405)_n_numbers_6460.push(_x);return d::minimum(_n_numbers_6460);})();
for(;d::truth((_n_r_6409<=([&](){d::Array<double> _n_numbers_6461;for(auto _x:_n_ys_6405)_n_numbers_6461.push(_x);return d::maximum(_n_numbers_6461);})()));(void)((_n_r_6409++))){d::check_cancel();{double _n_c_6410=([&](){d::Array<double> _n_numbers_6462;for(auto _x:_n_xs_6407)_n_numbers_6462.push(_x);return d::minimum(_n_numbers_6462);})();
for(;d::truth((_n_c_6410<=([&](){d::Array<double> _n_numbers_6463;for(auto _x:_n_xs_6407)_n_numbers_6463.push(_x);return d::maximum(_n_numbers_6463);})()));(void)((_n_c_6410++))){d::check_cancel();if((d::truth((([&]()->d::String{auto _n_optional_6464=d::at(this->_n_grid_6311,_n_r_6409);if(!d::present(_n_optional_6464))return {};return d::at(d::read(_n_optional_6464),_n_c_6410);})()==d::String(u" ")))&&d::truth(_n_inside_6307(_n_quad_6403,_n_c_6410,_n_r_6409,0.45)))){d::check_cancel();(void)(([&](){auto&& _n_array_6465=d::at(this->_n_grid_6311,_n_r_6409);auto _n_index_6466=_n_c_6410;auto _n_value_6467=_n_tone_6402(_n_c_6410,_n_r_6409);d::put(_n_array_6465,_n_index_6466,_n_value_6467);return _n_value_6467;})());
}
}}
}}

}
}));
return d::join(d::map(this->_n_grid_6311,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_6411=_a0;
return d::join(_n_row_6411,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("cube").cols)*ascii::catalog_meta("cube").rows);auto _env=std::make_shared<_n_Record_6412>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &cube_meta(){return catalog_meta("cube");}
std::unique_ptr<Piece> make_cube(const AsciiPieceOptions &o){return std::make_unique<Native_cube>(o);}
}
