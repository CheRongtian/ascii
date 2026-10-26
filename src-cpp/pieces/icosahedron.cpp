// Direct, statically typed C++ from src/pieces/icosahedron.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_14245;
struct _n_Record_14345;
struct _n_Record_14245{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_14245> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14245>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_14345{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14345> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14345>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_stroke_14247(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5);
std::shared_ptr<_n_Record_14245> _n_meta_14244=[](){return ([&](){auto _n_object_14348=std::make_shared<_n_Record_14245>();_n_object_14348->_p_name=d::String(u"icosahedron");_n_object_14348->_p_category=d::String(u"shapes");_n_object_14348->_p_note=d::String(u"a wireframe icosahedron turning, its hidden edges dotted");_n_object_14348->_p_cols=46.0;_n_object_14348->_p_rows=22.0;_n_object_14348->_p_fps=30.0;return _n_object_14348;})();}();
d::Array<double,false> _n_LIMITS_14246=[](){return d::Array<double,false>{0.2,0.38,1.0,2.1};}();
double _n_stroke_14247(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5){double _n_ax_14266=_a0;
double _n_ay_14267=_a1;
double _n_bx_14268=_a2;
double _n_by_14269=_a3;
double _n_mode_14270=_a4;
std::function<void(double,double,d::String,double)> _n_put_14271=_a5;
{
if(d::truth((_n_bx_14268<_n_ax_14266))){d::check_cancel();(void)(([&](){auto _n_unpack_14349=d::Array<double,false>{_n_bx_14268,_n_by_14269,_n_ax_14266,_n_ay_14267};_n_ax_14266=d::at(_n_unpack_14349,0.0);_n_ay_14267=d::at(_n_unpack_14349,1.0);_n_bx_14268=d::at(_n_unpack_14349,2.0);_n_by_14269=d::at(_n_unpack_14349,3.0);return _n_unpack_14349;})());
}
double _n_dx_14276=(_n_bx_14268-_n_ax_14266);
double _n_dy_14277=(_n_by_14269-_n_ay_14267);
if((d::truth((_n_dx_14276<0.000001))&&d::truth((std::fabs(_n_dy_14277)<0.000001)))){d::check_cancel();return _n_mode_14270;
}
double _n_q_14278=([&](){auto _n_left_14350=std::fabs(_n_dy_14277);auto _n_right_14351=d::maximum({_n_dx_14276,0.000001});return (_n_left_14350/_n_right_14351);})();
if(d::truth((!d::truth(([&]()->bool{auto _n_logical_14352=([&]()->bool{auto _n_logical_14354=(_n_mode_14270>=0.0);return d::truth(_n_logical_14354)?(_n_q_14278>(([&]()->double{auto _n_logical_14355=d::at(_n_LIMITS_14246,(_n_mode_14270-1.0));return d::truth(_n_logical_14355)?_n_logical_14355:0.0;})()/1.1)):_n_logical_14354;})();return d::truth(_n_logical_14352)?(_n_q_14278<(([&]()->double{auto _n_logical_14353=d::at(_n_LIMITS_14246,_n_mode_14270);return d::truth(_n_logical_14353)?_n_logical_14353:INFINITY;})()*1.1)):_n_logical_14352;})())))){d::check_cancel();(void)((_n_mode_14270=0.0));
while((d::truth((_n_mode_14270<4.0))&&d::truth((_n_q_14278>=d::at(_n_LIMITS_14246,_n_mode_14270))))){d::check_cancel();(void)((_n_mode_14270++));
}
}
if(d::truth((_n_mode_14270<2.0))){d::check_cancel();double _n_n_14279=(d::truth(_n_mode_14270)?4.0:2.0);
d::Array<d::String,false> _n_g_14280=(d::truth(_n_mode_14270)?d::Array<d::String,false>{d::String(u"_"),(d::truth((_n_dy_14277>0.0))?d::String(u"`"):d::String(u"'")),d::String(u"-"),d::String(u"."),d::String(u"_")}:d::Array<d::String,false>{d::String(u"_"),d::String(u"-"),d::String(u"_")});
{double _n_c_14281=std::ceil((_n_ax_14266-0.5));
for(;d::truth((_n_c_14281<=std::floor((_n_bx_14268-0.5))));(void)((_n_c_14281++))){d::check_cancel();double _n_y_14282=(_n_ay_14267+((_n_dy_14277*((_n_c_14281+0.5)-_n_ax_14266))/_n_dx_14276));
double _n_r_14283=std::floor(_n_y_14282);
double _n_i_14284=d::round(((_n_y_14282-_n_r_14283)*_n_n_14279));
(void)(_n_put_14271(_n_c_14281,(d::truth(_n_i_14284)?_n_r_14283:(_n_r_14283-1.0)),d::at(_n_g_14280,_n_i_14284),_n_c_14281));
}}
}else {d::check_cancel();if(d::truth((_n_mode_14270==2.0))){d::check_cancel();{double _n_X_14285=d::round(_n_ax_14266);
for(;d::truth((_n_X_14285<d::round(_n_bx_14268)));(void)((_n_X_14285++))){d::check_cancel();double _n_ya_14286=d::round((_n_ay_14267+((_n_dy_14277*(_n_X_14285-_n_ax_14266))/_n_dx_14276)));
double _n_yb_14287=d::round((_n_ay_14267+((_n_dy_14277*((_n_X_14285+1.0)-_n_ax_14266))/_n_dx_14276)));
if(d::truth((_n_yb_14287>_n_ya_14286))){d::check_cancel();(void)(_n_put_14271(_n_X_14285,_n_ya_14286,d::String(u"\\"),_n_X_14285));
}else {d::check_cancel();(void)(_n_put_14271(_n_X_14285,(_n_ya_14286-1.0),(d::truth((_n_yb_14287<_n_ya_14286))?d::String(u"/"):d::String(u"_")),_n_X_14285));
}
}}
}else {d::check_cancel();d::String _n_ch_14288=(d::truth((_n_mode_14270==4.0))?d::String(u"|"):(d::truth((_n_dy_14277<0.0))?d::String(u"/"):d::String(u"\\")));
{double _n_r_14289=std::ceil((d::minimum({_n_ay_14267,_n_by_14269})-0.5));
for(;d::truth((_n_r_14289<=std::floor((d::maximum({_n_ay_14267,_n_by_14269})-0.5))));(void)((_n_r_14289++))){d::check_cancel();(void)(([&](){auto _n_argument_14356=std::floor((_n_ax_14266+((_n_dx_14276*((_n_r_14289+0.5)-_n_ay_14267))/_n_dy_14277)));auto _n_argument_14357=_n_r_14289;auto _n_argument_14358=_n_ch_14288;auto _n_argument_14359=_n_r_14289;return _n_put_14271(_n_argument_14356,_n_argument_14357,_n_argument_14358,_n_argument_14359);})());
}}
}
}
return _n_mode_14270;

}
}

struct Native_icosahedron final:ascii::Piece{
double _n_cols_14248{};
double _n_rows_14249{};
double _n_P_14250{};
double _n_n_14251{};
d::Array<d::Array<double,false>,false> _n_V_14252{};
d::Array<d::Array<double,false>,false> _n_E_14254{};
d::Array<d::Array<double,false>,false> _n_F_14255{};
d::Array<d::Array<double,false>,false> _n_EF_14256{};
d::Array<d::Array<double,false>,false> _n_VF_14257{};
double _n_D_14258{};
double _n_ASPECT_14259{};
double _n_K_14260{};
d::Array<d::String,false> _n_out_14261{};
d::Array<d::Array<double,false>,false> _n_R_14262{};
d::Array<d::Array<double,false>,false> _n_S_14263{};
d::Array<uint8_t,true> _n_seen_14264{};
d::Array<int8_t,true> _n_style_14265{};
std::function<d::String(double,std::shared_ptr<_n_Record_14345>)> _render;
bool _n_near_14253(double _a0,double _a1){double _n_i_14292=_a0;
double _n_j_14293=_a1;
return (std::fabs((d::hypot(std::initializer_list<double>{(d::at(d::at(this->_n_V_14252,_n_i_14292),0.0)-d::at(d::at(this->_n_V_14252,_n_j_14293),0.0)),(d::at(d::at(this->_n_V_14252,_n_i_14292),1.0)-d::at(d::at(this->_n_V_14252,_n_j_14293),1.0)),(d::at(d::at(this->_n_V_14252,_n_i_14292),2.0)-d::at(d::at(this->_n_V_14252,_n_j_14293),2.0))})-(2.0*this->_n_n_14251)))<0.000001);}

explicit Native_icosahedron(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_14360=_n_meta_14244;
this->_n_cols_14248=_n_binding_14360->_p_cols;
this->_n_rows_14249=_n_binding_14360->_p_rows;
this->_n_P_14250=((1.0+std::sqrt(5.0))/2.0);
this->_n_n_14251=(1.0/d::hypot(std::initializer_list<double>{1.0,this->_n_P_14250}));
this->_n_V_14252=d::Array<d::Array<double,false>,false>{};
for(auto &&_n_item_14361:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_a_14290=_n_item_14361;
{
for(auto &&_n_item_14362:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_b_14291=_n_item_14362;
(void)(this->_n_V_14252.push(d::Array<double,false>{0.0,(_n_a_14290*this->_n_n_14251),((_n_b_14291*this->_n_P_14250)*this->_n_n_14251)},d::Array<double,false>{(_n_a_14290*this->_n_n_14251),((_n_b_14291*this->_n_P_14250)*this->_n_n_14251),0.0},d::Array<double,false>{((_n_b_14291*this->_n_P_14250)*this->_n_n_14251),0.0,(_n_a_14290*this->_n_n_14251)}));
}

}
}
this->_n_E_14254=d::Array<d::Array<double,false>,false>{};
this->_n_F_14255=d::Array<d::Array<double,false>,false>{};
{double _n_i_14294=0.0;
for(;d::truth((_n_i_14294<12.0));(void)((_n_i_14294++))){d::check_cancel();{double _n_j_14295=(_n_i_14294+1.0);
for(;d::truth((_n_j_14295<12.0));(void)((_n_j_14295++))){d::check_cancel();if(d::truth((!d::truth(this->_n_near_14253(_n_i_14294,_n_j_14295))))){d::check_cancel();continue;
}
(void)(this->_n_E_14254.push(d::Array<double,false>{_n_i_14294,_n_j_14295}));
{double _n_k_14296=(_n_j_14295+1.0);
for(;d::truth((_n_k_14296<12.0));(void)((_n_k_14296++))){d::check_cancel();if((d::truth(this->_n_near_14253(_n_i_14294,_n_k_14296))&&d::truth(this->_n_near_14253(_n_j_14295,_n_k_14296)))){d::check_cancel();(void)(this->_n_F_14255.push(d::Array<double,false>{_n_i_14294,_n_j_14295,_n_k_14296}));
}
}}
}}
}}
this->_n_EF_14256=d::map(this->_n_E_14254,[&]( d::Array<double,false> _a0) mutable ->d::Array<double,false>{auto _n_binding_14363=_a0;
double _n_i_14297=d::at(_n_binding_14363,0.0);
double _n_j_14298=d::at(_n_binding_14363,1.0);
return d::flatMap(this->_n_F_14255,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::Array<double,false>{d::Array<double,false> _n_f_14299=_a0;
double _n_m_14300=_a1;
return ((d::truth(_n_f_14299.includes(_n_i_14297))&&d::truth(_n_f_14299.includes(_n_j_14298)))?d::Array<double,false>{_n_m_14300}:d::Array<double,false>{});});});
this->_n_VF_14257=d::map(this->_n_V_14252,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::Array<double,false>{d::Array<double,false> _n___14301=_a0;
double _n_i_14302=_a1;
return d::flatMap(this->_n_F_14255,[&]( d::Array<double,false> _a0,double _a1) mutable ->d::Array<double,false>{d::Array<double,false> _n_f_14303=_a0;
double _n_m_14304=_a1;
return (d::truth(_n_f_14303.includes(_n_i_14302))?d::Array<double,false>{_n_m_14304}:d::Array<double,false>{});});});
this->_n_D_14258=4.0;
this->_n_ASPECT_14259=0.5;
this->_n_K_14260=([&](){auto _n_left_14364=d::minimum({((this->_n_cols_14248-3.0)/2.0),(((this->_n_rows_14249-2.0)/2.0)/this->_n_ASPECT_14259)});auto _n_right_14365=std::sqrt(((this->_n_D_14258*this->_n_D_14258)-1.0));return (_n_left_14364*_n_right_14365);})();
this->_n_out_14261=d::Array<d::String,false>(size_t((this->_n_cols_14248*this->_n_rows_14249)));
this->_n_R_14262=d::map(this->_n_V_14252,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{0.0,0.0,0.0};});
this->_n_S_14263=d::map(this->_n_V_14252,[&]( ) mutable ->d::Array<double,false>{return d::Array<double,false>{0.0,0.0};});
this->_n_seen_14264=d::Array<uint8_t,true>(size_t(double(this->_n_F_14255.size())));
this->_n_style_14265=d::Array<int8_t,true>(size_t(double(this->_n_E_14254.size()))).fill((-d::number(1.0)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_14345> _a1) mutable ->d::String{double _n_t_14305=_a0;
{
double _n_A_14306=(0.6+(_n_t_14305*0.25));
double _n_B_14307=(0.3+(_n_t_14305*0.15));
double _n_cA_14308=std::cos(_n_A_14306);
double _n_sA_14309=std::sin(_n_A_14306);
double _n_cB_14310=std::cos(_n_B_14307);
double _n_sB_14311=std::sin(_n_B_14307);
(void)(this->_n_out_14261.fill(d::String(u" ")));
{double _n_i_14312=0.0;
for(;d::truth((_n_i_14312<12.0));(void)((_n_i_14312++))){d::check_cancel();auto _n_binding_14366=d::at(this->_n_V_14252,_n_i_14312);
double _n_x_14313=d::at(_n_binding_14366,0.0);
double _n_y_14314=d::at(_n_binding_14366,1.0);
double _n_z_14315=d::at(_n_binding_14366,2.0);
double _n_x1_14316=((_n_x_14313*_n_cB_14310)+(_n_z_14315*_n_sB_14311));
double _n_z1_14317=(((-d::number(_n_x_14313))*_n_sB_14311)+(_n_z_14315*_n_cB_14310));
d::Array<double,false> _n_r_14318=d::at(this->_n_R_14262,_n_i_14312);
(void)(([&](){auto&& _n_array_14367=_n_r_14318;auto _n_index_14368=0.0;auto _n_value_14369=_n_x1_14316;d::put(_n_array_14367,_n_index_14368,_n_value_14369);return _n_value_14369;})());
(void)(([&](){auto&& _n_array_14370=_n_r_14318;auto _n_index_14371=1.0;auto _n_value_14372=((_n_y_14314*_n_cA_14308)-(_n_z1_14317*_n_sA_14309));d::put(_n_array_14370,_n_index_14371,_n_value_14372);return _n_value_14372;})());
(void)(([&](){auto&& _n_array_14373=_n_r_14318;auto _n_index_14374=2.0;auto _n_value_14375=((_n_y_14314*_n_sA_14309)+(_n_z1_14317*_n_cA_14308));d::put(_n_array_14373,_n_index_14374,_n_value_14375);return _n_value_14375;})());
double _n_f_14319=(this->_n_K_14260/(this->_n_D_14258-d::at(_n_r_14318,2.0)));
double _n_sx_14320=((this->_n_cols_14248/2.0)+(_n_f_14319*d::at(_n_r_14318,0.0)));
double _n_sy_14321=(((this->_n_rows_14249/2.0)+0.3)-((_n_f_14319*this->_n_ASPECT_14259)*d::at(_n_r_14318,1.0)));
(void)(([&](){auto&& _n_array_14376=d::at(this->_n_S_14263,_n_i_14312);auto _n_index_14377=0.0;auto _n_value_14378=(((_n_sx_14320+std::floor(_n_sx_14320))+0.5)/2.0);d::put(_n_array_14376,_n_index_14377,_n_value_14378);return _n_value_14378;})());
(void)(([&](){auto&& _n_array_14379=d::at(this->_n_S_14263,_n_i_14312);auto _n_index_14380=1.0;auto _n_value_14381=(((_n_sy_14321+std::floor(_n_sy_14321))+0.5)/2.0);d::put(_n_array_14379,_n_index_14380,_n_value_14381);return _n_value_14381;})());
}}
(void)(d::forEach(this->_n_F_14255,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{d::Array<double,false> _n_f_14322=_a0;
double _n_m_14323=_a1;
{
double _n_cx_14324=0.0;
double _n_cy_14325=0.0;
double _n_cz_14326=0.0;
for(auto &&_n_item_14382:_n_f_14322){d::check_cancel();double _n_i_14327=_n_item_14382;
{
(void)((_n_cx_14324=(_n_cx_14324+d::at(d::at(this->_n_R_14262,_n_i_14327),0.0))));
(void)((_n_cy_14325=(_n_cy_14325+d::at(d::at(this->_n_R_14262,_n_i_14327),1.0))));
(void)((_n_cz_14326=(_n_cz_14326+d::at(d::at(this->_n_R_14262,_n_i_14327),2.0))));

}
}
(void)(([&](){auto&& _n_array_14383=this->_n_seen_14264;auto _n_index_14384=_n_m_14323;auto _n_value_14385=(d::truth((((((-d::number(_n_cx_14324))*_n_cx_14324)-(_n_cy_14325*_n_cy_14325))+(_n_cz_14326*((3.0*this->_n_D_14258)-_n_cz_14326)))>0.0))?1.0:0.0);d::put(_n_array_14383,_n_index_14384,_n_value_14385);return _n_value_14385;})());

}
}));
auto _n_clear_14328=[=]( double _a0,double _a1) mutable ->bool{double _n_c_14329=_a0;
double _n_r_14330=_a1;
return ([&]()->bool{auto _n_logical_14386=([&]()->bool{auto _n_logical_14388=(d::at(this->_n_out_14261,(_n_c_14329+(_n_r_14330*this->_n_cols_14248)))==d::String(u" "));return d::truth(_n_logical_14388)?([&]()->bool{auto _n_logical_14389=(_n_c_14329==0.0);return d::truth(_n_logical_14389)?_n_logical_14389:(d::at(this->_n_out_14261,((_n_c_14329-1.0)+(_n_r_14330*this->_n_cols_14248)))==d::String(u" "));})():_n_logical_14388;})();return d::truth(_n_logical_14386)?([&]()->bool{auto _n_logical_14387=(_n_c_14329==(this->_n_cols_14248-1.0));return d::truth(_n_logical_14387)?_n_logical_14387:(d::at(this->_n_out_14261,((_n_c_14329+1.0)+(_n_r_14330*this->_n_cols_14248)))==d::String(u" "));})():_n_logical_14386;})();};
for(auto &&_n_item_14390:d::Array<double,false>{1.0,0.0}){d::check_cancel();double _n_pass_14331=_n_item_14390;
{
{double _n_i_14332=0.0;
for(;d::truth((_n_i_14332<12.0));(void)((_n_i_14332++))){d::check_cancel();if(d::truth((d::some(d::at(this->_n_VF_14257,_n_i_14332),[&]( double _a0) mutable ->double{double _n_m_14333=_a0;
return d::at(this->_n_seen_14264,_n_m_14333);})!=(!d::truth((!d::truth(_n_pass_14331))))))){d::check_cancel();continue;
}
double _n_c_14334=std::floor(d::at(d::at(this->_n_S_14263,_n_i_14332),0.0));
double _n_r_14335=std::floor(d::at(d::at(this->_n_S_14263,_n_i_14332),1.0));
if(((((d::truth((_n_c_14334>=0.0))&&d::truth((_n_c_14334<this->_n_cols_14248)))&&d::truth((_n_r_14335>=0.0)))&&d::truth((_n_r_14335<this->_n_rows_14249)))&&d::truth(([&]()->std::variant<double,bool>{auto _n_logical_14391=_n_pass_14331;return d::truth(_n_logical_14391)?std::variant<double,bool>(_n_logical_14391):std::variant<double,bool>(_n_clear_14328(_n_c_14334,_n_r_14335));})()))){d::check_cancel();(void)(([&](){auto&& _n_array_14392=this->_n_out_14261;auto _n_index_14393=(_n_c_14334+(_n_r_14335*this->_n_cols_14248));auto _n_value_14394=(d::truth(_n_pass_14331)?(d::truth((d::at(d::at(this->_n_R_14262,_n_i_14332),2.0)>0.45))?d::String(u"@"):d::String(u"o")):d::String(u"+"));d::put(_n_array_14392,_n_index_14393,_n_value_14394);return _n_value_14394;})());
}
}}
(void)(d::forEach(this->_n_E_14254,[&]( d::Array<double,false> _a0,double _a1) mutable ->void{auto _n_binding_14395=_a0;
double _n_i_14336=d::at(_n_binding_14395,0.0);
double _n_j_14337=d::at(_n_binding_14395,1.0);
double _n_e_14338=_a1;
{
if(d::truth((double(d::i32(d::at(this->_n_seen_14264,d::at(d::at(this->_n_EF_14256,_n_e_14338),0.0)))|d::i32(d::at(this->_n_seen_14264,d::at(d::at(this->_n_EF_14256,_n_e_14338),1.0))))!=_n_pass_14331))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_14396=this->_n_style_14265;auto _n_index_14397=_n_e_14338;auto _n_value_14398=_n_stroke_14247(d::at(d::at(this->_n_S_14263,_n_i_14336),0.0),d::at(d::at(this->_n_S_14263,_n_i_14336),1.0),d::at(d::at(this->_n_S_14263,_n_j_14337),0.0),d::at(d::at(this->_n_S_14263,_n_j_14337),1.0),d::at(this->_n_style_14265,_n_e_14338),[&]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_14339=_a0;
double _n_r_14340=_a1;
d::String _n_ch_14341=_a2;
double _n_k_14342=_a3;
{
if(((((d::truth((_n_c_14339<0.0))||d::truth((_n_c_14339>=this->_n_cols_14248)))||d::truth((_n_r_14340<0.0)))||d::truth((_n_r_14340>=this->_n_rows_14249)))||d::truth((d::at(this->_n_out_14261,(_n_c_14339+(_n_r_14340*this->_n_cols_14248)))!=d::String(u" "))))){d::check_cancel();return;
}
if((d::truth(_n_pass_14331)||d::truth(([&]()->bool{auto _n_logical_14399=(double(d::i32(_n_k_14342)&d::i32(1.0))==0.0);return d::truth(_n_logical_14399)?_n_clear_14328(_n_c_14339,_n_r_14340):_n_logical_14399;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_14400=this->_n_out_14261;auto _n_index_14401=(_n_c_14339+(_n_r_14340*this->_n_cols_14248));auto _n_value_14402=_n_ch_14341;d::put(_n_array_14400,_n_index_14401,_n_value_14402);return _n_value_14402;})());
}

}
});d::put(_n_array_14396,_n_index_14397,_n_value_14398);return _n_value_14398;})());

}
}));

}
}
d::Array<d::String,false> _n_lines_14343=d::Array<d::String,false>{};
{double _n_r_14344=0.0;
for(;d::truth((_n_r_14344<this->_n_rows_14249));(void)((_n_r_14344++))){d::check_cancel();(void)(_n_lines_14343.push(d::join(this->_n_out_14261.slice((_n_r_14344*this->_n_cols_14248),((_n_r_14344+1.0)*this->_n_cols_14248)),d::String(u""))));
}}
return d::join(_n_lines_14343,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("icosahedron").cols)*ascii::catalog_meta("icosahedron").rows);auto _env=std::make_shared<_n_Record_14345>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &icosahedron_meta(){return catalog_meta("icosahedron");}
std::unique_ptr<Piece> make_icosahedron(const AsciiPieceOptions &o){return std::make_unique<Native_icosahedron>(o);}
}
