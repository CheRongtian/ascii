// Direct, statically typed C++ from src/pieces/icosahedron.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_14244;
struct _n_Record_14344;
struct _n_Record_14244{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_14244> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14244>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_14344{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_14344> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_14344>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_stroke_14246(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5);
std::shared_ptr<_n_Record_14244> _n_meta_14243=[](){return ([&](){auto _n_object_14347=std::make_shared<_n_Record_14244>();_n_object_14347->_p_name=d::String(u"icosahedron");_n_object_14347->_p_category=d::String(u"shapes");_n_object_14347->_p_note=d::String(u"a wireframe icosahedron turning, its hidden edges dotted");_n_object_14347->_p_cols=46.0;_n_object_14347->_p_rows=22.0;_n_object_14347->_p_fps=30.0;return _n_object_14347;})();}();
d::Array<double,false> _n_LIMITS_14245=[](){return d::Array<double,false>{0.2,0.38,1.0,2.1};}();
double _n_stroke_14246(double _a0,double _a1,double _a2,double _a3,double _a4,std::function<void(double,double,d::String,double)> _a5){double _n_ax_14265=_a0;
double _n_ay_14266=_a1;
double _n_bx_14267=_a2;
double _n_by_14268=_a3;
double _n_mode_14269=_a4;
std::function<void(double,double,d::String,double)> _n_put_14270=_a5;
{
if(d::truth((_n_bx_14267<_n_ax_14265))){d::check_cancel();(void)(([&](){auto _n_unpack_14348=std::array<double,4>{_n_bx_14267,_n_by_14268,_n_ax_14265,_n_ay_14266};_n_ax_14265=d::at(_n_unpack_14348,0.0);_n_ay_14266=d::at(_n_unpack_14348,1.0);_n_bx_14267=d::at(_n_unpack_14348,2.0);_n_by_14268=d::at(_n_unpack_14348,3.0);return _n_unpack_14348;})());
}
double _n_dx_14275=(_n_bx_14267-_n_ax_14265);
double _n_dy_14276=(_n_by_14268-_n_ay_14266);
if((d::truth((_n_dx_14275<0.000001))&&d::truth((std::fabs(_n_dy_14276)<0.000001)))){d::check_cancel();return _n_mode_14269;
}
double _n_q_14277=([&](){auto _n_left_14349=std::fabs(_n_dy_14276);auto _n_right_14350=d::maximum({_n_dx_14275,0.000001});return (_n_left_14349/_n_right_14350);})();
if(d::truth((!d::truth(([&]()->bool{auto _n_logical_14351=([&]()->bool{auto _n_logical_14353=(_n_mode_14269>=0.0);return d::truth(_n_logical_14353)?(_n_q_14277>(([&]()->double{auto _n_logical_14354=d::at(_n_LIMITS_14245,(_n_mode_14269-1.0));return d::truth(_n_logical_14354)?_n_logical_14354:0.0;})()/1.1)):_n_logical_14353;})();return d::truth(_n_logical_14351)?(_n_q_14277<(([&]()->double{auto _n_logical_14352=d::at(_n_LIMITS_14245,_n_mode_14269);return d::truth(_n_logical_14352)?_n_logical_14352:INFINITY;})()*1.1)):_n_logical_14351;})())))){d::check_cancel();(void)((_n_mode_14269=0.0));
while((d::truth((_n_mode_14269<4.0))&&d::truth((_n_q_14277>=d::at(_n_LIMITS_14245,_n_mode_14269))))){d::check_cancel();(void)((_n_mode_14269++));
}
}
if(d::truth((_n_mode_14269<2.0))){d::check_cancel();double _n_n_14278=(d::truth(_n_mode_14269)?4.0:2.0);
d::Array<d::String,false> _n_g_14279=(d::truth(_n_mode_14269)?d::Array<d::String,false>{d::String(u"_"),(d::truth((_n_dy_14276>0.0))?d::String(u"`"):d::String(u"'")),d::String(u"-"),d::String(u"."),d::String(u"_")}:d::Array<d::String,false>{d::String(u"_"),d::String(u"-"),d::String(u"_")});
{double _n_c_14280=std::ceil((_n_ax_14265-0.5));
for(;d::truth((_n_c_14280<=std::floor((_n_bx_14267-0.5))));(void)((_n_c_14280++))){d::check_cancel();double _n_y_14281=(_n_ay_14266+((_n_dy_14276*((_n_c_14280+0.5)-_n_ax_14265))/_n_dx_14275));
double _n_r_14282=std::floor(_n_y_14281);
double _n_i_14283=d::round(((_n_y_14281-_n_r_14282)*_n_n_14278));
(void)(_n_put_14270(_n_c_14280,(d::truth(_n_i_14283)?_n_r_14282:(_n_r_14282-1.0)),d::at(_n_g_14279,_n_i_14283),_n_c_14280));
}}
}else {d::check_cancel();if(d::truth((_n_mode_14269==2.0))){d::check_cancel();{double _n_X_14284=d::round(_n_ax_14265);
for(;d::truth((_n_X_14284<d::round(_n_bx_14267)));(void)((_n_X_14284++))){d::check_cancel();double _n_ya_14285=d::round((_n_ay_14266+((_n_dy_14276*(_n_X_14284-_n_ax_14265))/_n_dx_14275)));
double _n_yb_14286=d::round((_n_ay_14266+((_n_dy_14276*((_n_X_14284+1.0)-_n_ax_14265))/_n_dx_14275)));
if(d::truth((_n_yb_14286>_n_ya_14285))){d::check_cancel();(void)(_n_put_14270(_n_X_14284,_n_ya_14285,d::String(u"\\"),_n_X_14284));
}else {d::check_cancel();(void)(_n_put_14270(_n_X_14284,(_n_ya_14285-1.0),(d::truth((_n_yb_14286<_n_ya_14285))?d::String(u"/"):d::String(u"_")),_n_X_14284));
}
}}
}else {d::check_cancel();d::String _n_ch_14287=(d::truth((_n_mode_14269==4.0))?d::String(u"|"):(d::truth((_n_dy_14276<0.0))?d::String(u"/"):d::String(u"\\")));
{double _n_r_14288=std::ceil((d::minimum({_n_ay_14266,_n_by_14268})-0.5));
for(;d::truth((_n_r_14288<=std::floor((d::maximum({_n_ay_14266,_n_by_14268})-0.5))));(void)((_n_r_14288++))){d::check_cancel();(void)(([&](){auto _n_argument_14355=std::floor((_n_ax_14265+((_n_dx_14275*((_n_r_14288+0.5)-_n_ay_14266))/_n_dy_14276)));auto _n_argument_14356=_n_r_14288;auto _n_argument_14357=_n_ch_14287;auto _n_argument_14358=_n_r_14288;return _n_put_14270(_n_argument_14355,_n_argument_14356,_n_argument_14357,_n_argument_14358);})());
}}
}
}
return _n_mode_14269;

}
}

struct Native_icosahedron final:ascii::Piece{
double _n_cols_14247{};
double _n_rows_14248{};
double _n_P_14249{};
double _n_n_14250{};
d::Array<std::array<double,3>,false> _n_V_14251{};
d::Array<std::array<double,2>,false> _n_E_14253{};
d::Array<std::array<double,3>,false> _n_F_14254{};
d::Array<d::Array<double,false>,false> _n_EF_14255{};
d::Array<d::Array<double,false>,false> _n_VF_14256{};
double _n_D_14257{};
double _n_ASPECT_14258{};
double _n_K_14259{};
d::Array<d::String,false> _n_out_14260{};
d::Array<std::array<double,3>,false> _n_R_14261{};
d::Array<std::array<double,2>,false> _n_S_14262{};
d::Array<uint8_t,true> _n_seen_14263{};
d::Array<int8_t,true> _n_style_14264{};
std::function<d::String(double,std::shared_ptr<_n_Record_14344>)> _render;
bool _n_near_14252(double _a0,double _a1){double _n_i_14291=_a0;
double _n_j_14292=_a1;
return (std::fabs((d::hypot(std::initializer_list<double>{(d::at(d::at(this->_n_V_14251,_n_i_14291),0.0)-d::at(d::at(this->_n_V_14251,_n_j_14292),0.0)),(d::at(d::at(this->_n_V_14251,_n_i_14291),1.0)-d::at(d::at(this->_n_V_14251,_n_j_14292),1.0)),(d::at(d::at(this->_n_V_14251,_n_i_14291),2.0)-d::at(d::at(this->_n_V_14251,_n_j_14292),2.0))})-(2.0*this->_n_n_14250)))<0.000001);}

explicit Native_icosahedron(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_14359=_n_meta_14243;
this->_n_cols_14247=_n_binding_14359->_p_cols;
this->_n_rows_14248=_n_binding_14359->_p_rows;
this->_n_P_14249=((1.0+std::sqrt(5.0))/2.0);
this->_n_n_14250=(1.0/d::hypot(std::initializer_list<double>{1.0,this->_n_P_14249}));
this->_n_V_14251=d::Array<std::array<double,3>,false>{};
for(auto &&_n_item_14360:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_a_14289=_n_item_14360;
{
for(auto &&_n_item_14361:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_b_14290=_n_item_14361;
(void)(this->_n_V_14251.push(std::array<double,3>{0.0,(_n_a_14289*this->_n_n_14250),((_n_b_14290*this->_n_P_14249)*this->_n_n_14250)},std::array<double,3>{(_n_a_14289*this->_n_n_14250),((_n_b_14290*this->_n_P_14249)*this->_n_n_14250),0.0},std::array<double,3>{((_n_b_14290*this->_n_P_14249)*this->_n_n_14250),0.0,(_n_a_14289*this->_n_n_14250)}));
}

}
}
this->_n_E_14253=d::Array<std::array<double,2>,false>{};
this->_n_F_14254=d::Array<std::array<double,3>,false>{};
{double _n_i_14293=0.0;
for(;d::truth((_n_i_14293<12.0));(void)((_n_i_14293++))){d::check_cancel();{double _n_j_14294=(_n_i_14293+1.0);
for(;d::truth((_n_j_14294<12.0));(void)((_n_j_14294++))){d::check_cancel();if(d::truth((!d::truth(this->_n_near_14252(_n_i_14293,_n_j_14294))))){d::check_cancel();continue;
}
(void)(this->_n_E_14253.push(std::array<double,2>{_n_i_14293,_n_j_14294}));
{double _n_k_14295=(_n_j_14294+1.0);
for(;d::truth((_n_k_14295<12.0));(void)((_n_k_14295++))){d::check_cancel();if((d::truth(this->_n_near_14252(_n_i_14293,_n_k_14295))&&d::truth(this->_n_near_14252(_n_j_14294,_n_k_14295)))){d::check_cancel();(void)(this->_n_F_14254.push(std::array<double,3>{_n_i_14293,_n_j_14294,_n_k_14295}));
}
}}
}}
}}
this->_n_EF_14255=d::map(this->_n_E_14253,[&]( std::array<double,2> _a0) mutable ->d::Array<double,false>{auto _n_binding_14362=_a0;
double _n_i_14296=d::at(_n_binding_14362,0.0);
double _n_j_14297=d::at(_n_binding_14362,1.0);
return d::flatMap(this->_n_F_14254,[&]( std::array<double,3> _a0,double _a1) mutable ->d::Array<double,false>{auto&& _n_f_14298=_a0;
double _n_m_14299=_a1;
return ((d::truth(d::includes(_n_f_14298,_n_i_14296))&&d::truth(d::includes(_n_f_14298,_n_j_14297)))?d::Array<double,false>{_n_m_14299}:d::Array<double,false>{});});});
this->_n_VF_14256=d::map(this->_n_V_14251,[&]( std::array<double,3> _a0,double _a1) mutable ->d::Array<double,false>{auto&& _n___14300=_a0;
double _n_i_14301=_a1;
return d::flatMap(this->_n_F_14254,[&]( std::array<double,3> _a0,double _a1) mutable ->d::Array<double,false>{auto&& _n_f_14302=_a0;
double _n_m_14303=_a1;
return (d::truth(d::includes(_n_f_14302,_n_i_14301))?d::Array<double,false>{_n_m_14303}:d::Array<double,false>{});});});
this->_n_D_14257=4.0;
this->_n_ASPECT_14258=0.5;
this->_n_K_14259=([&](){auto _n_left_14363=d::minimum({((this->_n_cols_14247-3.0)/2.0),(((this->_n_rows_14248-2.0)/2.0)/this->_n_ASPECT_14258)});auto _n_right_14364=std::sqrt(((this->_n_D_14257*this->_n_D_14257)-1.0));return (_n_left_14363*_n_right_14364);})();
this->_n_out_14260=d::Array<d::String,false>(size_t((this->_n_cols_14247*this->_n_rows_14248)));
this->_n_R_14261=d::map(this->_n_V_14251,[&]( ) mutable ->std::array<double,3>{return std::array<double,3>{0.0,0.0,0.0};});
this->_n_S_14262=d::map(this->_n_V_14251,[&]( ) mutable ->std::array<double,2>{return std::array<double,2>{0.0,0.0};});
this->_n_seen_14263=d::Array<uint8_t,true>(size_t(double(this->_n_F_14254.size())));
this->_n_style_14264=d::Array<int8_t,true>(size_t(double(this->_n_E_14253.size()))).fill((-d::number(1.0)));
_render=[=]( double _a0,std::shared_ptr<_n_Record_14344> _a1) mutable ->d::String{double _n_t_14304=_a0;
{
double _n_A_14305=(0.6+(_n_t_14304*0.25));
double _n_B_14306=(0.3+(_n_t_14304*0.15));
double _n_cA_14307=std::cos(_n_A_14305);
double _n_sA_14308=std::sin(_n_A_14305);
double _n_cB_14309=std::cos(_n_B_14306);
double _n_sB_14310=std::sin(_n_B_14306);
(void)(this->_n_out_14260.fill(d::String(u" ")));
{double _n_i_14311=0.0;
for(;d::truth((_n_i_14311<12.0));(void)((_n_i_14311++))){d::check_cancel();auto _n_binding_14365=d::at(this->_n_V_14251,_n_i_14311);
double _n_x_14312=d::at(_n_binding_14365,0.0);
double _n_y_14313=d::at(_n_binding_14365,1.0);
double _n_z_14314=d::at(_n_binding_14365,2.0);
double _n_x1_14315=((_n_x_14312*_n_cB_14309)+(_n_z_14314*_n_sB_14310));
double _n_z1_14316=(((-d::number(_n_x_14312))*_n_sB_14310)+(_n_z_14314*_n_cB_14309));
auto&& _n_r_14317=d::at(this->_n_R_14261,_n_i_14311);
(void)(([&](){auto&& _n_array_14366=_n_r_14317;auto _n_index_14367=0.0;auto _n_value_14368=_n_x1_14315;d::put(_n_array_14366,_n_index_14367,_n_value_14368);return _n_value_14368;})());
(void)(([&](){auto&& _n_array_14369=_n_r_14317;auto _n_index_14370=1.0;auto _n_value_14371=((_n_y_14313*_n_cA_14307)-(_n_z1_14316*_n_sA_14308));d::put(_n_array_14369,_n_index_14370,_n_value_14371);return _n_value_14371;})());
(void)(([&](){auto&& _n_array_14372=_n_r_14317;auto _n_index_14373=2.0;auto _n_value_14374=((_n_y_14313*_n_sA_14308)+(_n_z1_14316*_n_cA_14307));d::put(_n_array_14372,_n_index_14373,_n_value_14374);return _n_value_14374;})());
double _n_f_14318=(this->_n_K_14259/(this->_n_D_14257-d::at(_n_r_14317,2.0)));
double _n_sx_14319=((this->_n_cols_14247/2.0)+(_n_f_14318*d::at(_n_r_14317,0.0)));
double _n_sy_14320=(((this->_n_rows_14248/2.0)+0.3)-((_n_f_14318*this->_n_ASPECT_14258)*d::at(_n_r_14317,1.0)));
(void)(([&](){auto&& _n_array_14375=d::at(this->_n_S_14262,_n_i_14311);auto _n_index_14376=0.0;auto _n_value_14377=(((_n_sx_14319+std::floor(_n_sx_14319))+0.5)/2.0);d::put(_n_array_14375,_n_index_14376,_n_value_14377);return _n_value_14377;})());
(void)(([&](){auto&& _n_array_14378=d::at(this->_n_S_14262,_n_i_14311);auto _n_index_14379=1.0;auto _n_value_14380=(((_n_sy_14320+std::floor(_n_sy_14320))+0.5)/2.0);d::put(_n_array_14378,_n_index_14379,_n_value_14380);return _n_value_14380;})());
}}
(void)(d::forEach(this->_n_F_14254,[&]( std::array<double,3> _a0,double _a1) mutable ->void{auto&& _n_f_14321=_a0;
double _n_m_14322=_a1;
{
double _n_cx_14323=0.0;
double _n_cy_14324=0.0;
double _n_cz_14325=0.0;
for(auto &&_n_item_14381:_n_f_14321){d::check_cancel();double _n_i_14326=_n_item_14381;
{
(void)((_n_cx_14323=(_n_cx_14323+d::at(d::at(this->_n_R_14261,_n_i_14326),0.0))));
(void)((_n_cy_14324=(_n_cy_14324+d::at(d::at(this->_n_R_14261,_n_i_14326),1.0))));
(void)((_n_cz_14325=(_n_cz_14325+d::at(d::at(this->_n_R_14261,_n_i_14326),2.0))));

}
}
(void)(([&](){auto&& _n_array_14382=this->_n_seen_14263;auto _n_index_14383=_n_m_14322;auto _n_value_14384=(d::truth((((((-d::number(_n_cx_14323))*_n_cx_14323)-(_n_cy_14324*_n_cy_14324))+(_n_cz_14325*((3.0*this->_n_D_14257)-_n_cz_14325)))>0.0))?1.0:0.0);d::put(_n_array_14382,_n_index_14383,_n_value_14384);return _n_value_14384;})());

}
}));
auto _n_clear_14327=[&]( double _a0,double _a1) mutable ->bool{double _n_c_14328=_a0;
double _n_r_14329=_a1;
return ([&]()->bool{auto _n_logical_14385=([&]()->bool{auto _n_logical_14387=(d::at(this->_n_out_14260,(_n_c_14328+(_n_r_14329*this->_n_cols_14247)))==d::String(u" "));return d::truth(_n_logical_14387)?([&]()->bool{auto _n_logical_14388=(_n_c_14328==0.0);return d::truth(_n_logical_14388)?_n_logical_14388:(d::at(this->_n_out_14260,((_n_c_14328-1.0)+(_n_r_14329*this->_n_cols_14247)))==d::String(u" "));})():_n_logical_14387;})();return d::truth(_n_logical_14385)?([&]()->bool{auto _n_logical_14386=(_n_c_14328==(this->_n_cols_14247-1.0));return d::truth(_n_logical_14386)?_n_logical_14386:(d::at(this->_n_out_14260,((_n_c_14328+1.0)+(_n_r_14329*this->_n_cols_14247)))==d::String(u" "));})():_n_logical_14385;})();};
for(auto &&_n_item_14389:d::Array<double,false>{1.0,0.0}){d::check_cancel();double _n_pass_14330=_n_item_14389;
{
{double _n_i_14331=0.0;
for(;d::truth((_n_i_14331<12.0));(void)((_n_i_14331++))){d::check_cancel();if(d::truth((d::some(d::at(this->_n_VF_14256,_n_i_14331),[&]( double _a0) mutable ->double{double _n_m_14332=_a0;
return d::at(this->_n_seen_14263,_n_m_14332);})!=(!d::truth((!d::truth(_n_pass_14330))))))){d::check_cancel();continue;
}
double _n_c_14333=std::floor(d::at(d::at(this->_n_S_14262,_n_i_14331),0.0));
double _n_r_14334=std::floor(d::at(d::at(this->_n_S_14262,_n_i_14331),1.0));
if(((((d::truth((_n_c_14333>=0.0))&&d::truth((_n_c_14333<this->_n_cols_14247)))&&d::truth((_n_r_14334>=0.0)))&&d::truth((_n_r_14334<this->_n_rows_14248)))&&d::truth(([&]()->std::variant<double,bool>{auto _n_logical_14390=_n_pass_14330;return d::truth(_n_logical_14390)?std::variant<double,bool>(_n_logical_14390):std::variant<double,bool>(_n_clear_14327(_n_c_14333,_n_r_14334));})()))){d::check_cancel();(void)(([&](){auto&& _n_array_14391=this->_n_out_14260;auto _n_index_14392=(_n_c_14333+(_n_r_14334*this->_n_cols_14247));auto _n_value_14393=(d::truth(_n_pass_14330)?(d::truth((d::at(d::at(this->_n_R_14261,_n_i_14331),2.0)>0.45))?d::String(u"@"):d::String(u"o")):d::String(u"+"));d::put(_n_array_14391,_n_index_14392,_n_value_14393);return _n_value_14393;})());
}
}}
(void)(d::forEach(this->_n_E_14253,[&]( std::array<double,2> _a0,double _a1) mutable ->void{auto _n_binding_14394=_a0;
double _n_i_14335=d::at(_n_binding_14394,0.0);
double _n_j_14336=d::at(_n_binding_14394,1.0);
double _n_e_14337=_a1;
{
if(d::truth((double(d::i32(d::at(this->_n_seen_14263,d::at(d::at(this->_n_EF_14255,_n_e_14337),0.0)))|d::i32(d::at(this->_n_seen_14263,d::at(d::at(this->_n_EF_14255,_n_e_14337),1.0))))!=_n_pass_14330))){d::check_cancel();return;
}
(void)(([&](){auto&& _n_array_14395=this->_n_style_14264;auto _n_index_14396=_n_e_14337;auto _n_value_14397=_n_stroke_14246(d::at(d::at(this->_n_S_14262,_n_i_14335),0.0),d::at(d::at(this->_n_S_14262,_n_i_14335),1.0),d::at(d::at(this->_n_S_14262,_n_j_14336),0.0),d::at(d::at(this->_n_S_14262,_n_j_14336),1.0),d::at(this->_n_style_14264,_n_e_14337),[&]( double _a0,double _a1,d::String _a2,double _a3) mutable ->void{double _n_c_14338=_a0;
double _n_r_14339=_a1;
d::String _n_ch_14340=_a2;
double _n_k_14341=_a3;
{
if(((((d::truth((_n_c_14338<0.0))||d::truth((_n_c_14338>=this->_n_cols_14247)))||d::truth((_n_r_14339<0.0)))||d::truth((_n_r_14339>=this->_n_rows_14248)))||d::truth((d::at(this->_n_out_14260,(_n_c_14338+(_n_r_14339*this->_n_cols_14247)))!=d::String(u" "))))){d::check_cancel();return;
}
if((d::truth(_n_pass_14330)||d::truth(([&]()->bool{auto _n_logical_14398=(double(d::i32(_n_k_14341)&d::i32(1.0))==0.0);return d::truth(_n_logical_14398)?_n_clear_14327(_n_c_14338,_n_r_14339):_n_logical_14398;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_14399=this->_n_out_14260;auto _n_index_14400=(_n_c_14338+(_n_r_14339*this->_n_cols_14247));auto _n_value_14401=_n_ch_14340;d::put(_n_array_14399,_n_index_14400,_n_value_14401);return _n_value_14401;})());
}

}
});d::put(_n_array_14395,_n_index_14396,_n_value_14397);return _n_value_14397;})());

}
}));

}
}
d::Array<d::String,false> _n_lines_14342=d::Array<d::String,false>{};
{double _n_r_14343=0.0;
for(;d::truth((_n_r_14343<this->_n_rows_14248));(void)((_n_r_14343++))){d::check_cancel();(void)(_n_lines_14342.push(d::join(this->_n_out_14260.slice((_n_r_14343*this->_n_cols_14247),((_n_r_14343+1.0)*this->_n_cols_14247)),d::String(u""))));
}}
return d::join(_n_lines_14342,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("icosahedron").cols)*ascii::catalog_meta("icosahedron").rows);auto _env=std::make_shared<_n_Record_14344>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &icosahedron_meta(){return catalog_meta("icosahedron");}
std::unique_ptr<Piece> make_icosahedron(const AsciiPieceOptions &o){return std::make_unique<Native_icosahedron>(o);}
}
