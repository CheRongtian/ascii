// Direct, statically typed C++ from src/pieces/pond-ripples.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24943;
struct _n_Record_24963;
struct _n_Record_25038;
struct _n_Record_24943{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24943> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24943>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24963{
double _p_x{};
double _p_y{};
double _p_age{};
double _p_a{};
static std::shared_ptr<_n_Record_24963> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24963>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_age=d::decode<double>(j["age"]);out->_p_a=d::decode<double>(j["a"]);return out;}
};
struct _n_Record_25038{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25038> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25038>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_rand_24951(double _a0,double _a1);
void _n_ellipse_24952(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::function<void(double,d::String,double)> _a6,std::optional<bool> _a7);
std::shared_ptr<_n_Record_24943> _n_meta_24942=[](){return ([&](){auto _n_object_25041=std::make_shared<_n_Record_24943>();_n_object_25041->_p_name=d::String(u"pond ripples");_n_object_25041->_p_category=d::String(u"physics");_n_object_25041->_p_note=d::String(u"raindrops opening rings that cross and fade on a pond");_n_object_25041->_p_cols=64.0;_n_object_25041->_p_rows=20.0;_n_object_25041->_p_fps=20.0;return _n_object_25041;})();}();
const double _n_CW_24944=[](){return 0.6;}();
const double _n_CH_24945=[](){return 1.2;}();
const double _n_START_24946=[](){return 7.35;}();
const double _n_EVERY_24947=[](){return 1.5;}();
const double _n_LIFE_24948=[](){return 4.0;}();
const double _n_SPEED_24949=[](){return 2.6;}();
const double _n_WAVE_24950=[](){return 1.5;}();
double _n_rand_24951(double _a0,double _a1){double _n_i_24967=_a0;
double _n_salt_24968=_a1;
{
double _n_h_24969=([&](){auto _n_left_25042=d::imul(double(d::i32(_n_i_24967)^d::i32(2654435769.0)),2246822507.0);auto _n_right_25043=d::imul((_n_salt_24968+1.0),3266489909.0);return double(d::i32(_n_left_25042)^d::i32(_n_right_25043));})();
(void)((_n_h_24969=d::imul(double(d::i32(_n_h_24969)^d::i32(double(d::u32(_n_h_24969)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_24969=d::imul(double(d::i32(_n_h_24969)^d::i32(double(d::u32(_n_h_24969)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_24969)^d::i32(double(d::u32(_n_h_24969)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

void _n_ellipse_24952(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::function<void(double,d::String,double)> _a6,std::optional<bool> _a7){double _n_cols_24970=_a0;
double _n_rows_24971=_a1;
double _n_x0_24972=_a2;
double _n_y0_24973=_a3;
double _n_ax_24974=_a4;
double _n_ay_24975=_a5;
std::function<void(double,d::String,double)> _n_put_24976=_a6;
bool _n_small_24980=(d::present(_a7)?d::read(_a7):true);
{
auto _n_binding_25044=(d::truth(_n_small_24980)?std::array<double,2>{1.05,1.25}:std::array<double,2>{0.9,1.1});
double _n_flat_24981=d::at(_n_binding_25044,0.0);
double _n_steep_24982=d::at(_n_binding_25044,1.0);
{double _n_c_24983=0.0;
for(;d::truth((_n_c_24983<_n_cols_24970));(void)((_n_c_24983++))){d::check_cancel();double _n_x_24984=((((_n_c_24983+0.5)*_n_CW_24944)-_n_x0_24972)/_n_ax_24974);
if(d::truth((std::fabs(_n_x_24984)>=1.0))){d::check_cancel();continue;
}
double _n_s_24985=std::sqrt((1.0-(_n_x_24984*_n_x_24984)));
if(d::truth(((((_n_ay_24975/_n_ax_24974)*std::fabs(_n_x_24984))/_n_s_24985)>_n_flat_24981))){d::check_cancel();continue;
}
for(auto &&_n_item_25045:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_sign_24986=_n_item_25045;
{
double _n_y_24987=((_n_y0_24973+((_n_sign_24986*_n_ay_24975)*_n_s_24985))/_n_CH_24945);
double _n_r_24988=std::floor(_n_y_24987);
double _n_f_24989=(_n_y_24987-_n_r_24988);
if((d::truth((_n_r_24988>=0.0))&&d::truth((_n_r_24988<_n_rows_24971)))){d::check_cancel();(void)(([&](){auto _n_argument_25046=((_n_r_24988*_n_cols_24970)+_n_c_24983);auto _n_argument_25047=(d::truth((_n_f_24989<0.3))?d::String(u"'"):(d::truth((_n_f_24989<0.6))?d::String(u"-"):(d::truth((_n_f_24989<0.85))?d::String(u"."):d::String(u"_"))));auto _n_argument_25048=std::atan2((_n_sign_24986*_n_s_24985),_n_x_24984);return _n_put_24976(_n_argument_25046,_n_argument_25047,_n_argument_25048);})());
}

}
}
}}
{double _n_r_24990=0.0;
for(;d::truth((_n_r_24990<_n_rows_24971));(void)((_n_r_24990++))){d::check_cancel();double _n_y_24991=((((_n_r_24990+0.5)*_n_CH_24945)-_n_y0_24973)/_n_ay_24975);
if(d::truth((std::fabs(_n_y_24991)>=1.0))){d::check_cancel();continue;
}
double _n_s_24992=std::sqrt((1.0-(_n_y_24991*_n_y_24991)));
double _n_lean_24993=(((_n_ax_24974/_n_ay_24975)*std::fabs(_n_y_24991))/_n_s_24992);
if(d::truth((_n_lean_24993>_n_steep_24982))){d::check_cancel();continue;
}
for(auto &&_n_item_25049:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_sign_24994=_n_item_25049;
{
double _n_c_24995=std::floor(((_n_x0_24972+((_n_sign_24994*_n_ax_24974)*_n_s_24992))/_n_CW_24944));
d::String _n_mark_24996=(d::truth((_n_lean_24993<0.45))?(d::truth((_n_sign_24994<0.0))?d::String(u"("):d::String(u")")):(d::truth(((_n_sign_24994<0.0)==(_n_y_24991<0.0)))?d::String(u"/"):d::String(u"\\")));
if((d::truth((_n_c_24995>=0.0))&&d::truth((_n_c_24995<_n_cols_24970)))){d::check_cancel();(void)(([&](){auto _n_argument_25050=((_n_r_24990*_n_cols_24970)+_n_c_24995);auto _n_argument_25051=_n_mark_24996;auto _n_argument_25052=std::atan2(_n_y_24991,(_n_sign_24994*_n_s_24992));return _n_put_24976(_n_argument_25050,_n_argument_25051,_n_argument_25052);})());
}

}
}
}}

}
}

struct Native_pond_ripples final:ascii::Piece{
double _n_cols_24953{};
double _n_rows_24954{};
double _n_N_24955{};
double _n_CX_24956{};
double _n_CY_24957{};
double _n_AX_24958{};
double _n_AY_24959{};
d::Array<d::String,false> _n_bank_24960{};
d::Array<d::String,false> _n_ink_24964{};
d::Array<uint8_t,true> _n_level_24965{};
d::Array<int16_t,true> _n_owner_24966{};
std::function<d::String(double,std::shared_ptr<_n_Record_25038>)> _render;
double _n_open_24961(double _a0,double _a1){double _n_x_24999=_a0;
double _n_y_25000=_a1;
{
double _n_e_25001=([&](){auto _n_argument_25077=1.0;auto _n_argument_25078=d::maximum({0.0,(((1.0-std::pow(((_n_x_24999-this->_n_CX_24956)/this->_n_AX_24958),2.0))-std::pow(((_n_y_25000-this->_n_CY_24957)/this->_n_AY_24959),2.0))/0.35)});return d::minimum({_n_argument_25077,_n_argument_25078});})();
return ((_n_e_25001*_n_e_25001)*(3.0-(2.0*_n_e_25001)));

}
}

d::Array<std::shared_ptr<_n_Record_24963>,false> _n_drops_24962(double _a0){double _n_t_25002=_a0;
{
d::Array<std::shared_ptr<_n_Record_24963>,false> _n_out_25003=d::Array<std::shared_ptr<_n_Record_24963>,false>{};
{double _n_i_25004=(std::floor(((_n_t_25002-_n_LIFE_24948)/_n_EVERY_24947))-1.0);
for(;d::truth((_n_i_25004<=(std::floor((_n_t_25002/_n_EVERY_24947))+1.0)));(void)((_n_i_25004++))){d::check_cancel();double _n_age_25005=(_n_t_25002-((_n_i_25004+(0.7*(_n_rand_24951(_n_i_25004,0.0)-0.5)))*_n_EVERY_24947));
if((d::truth((_n_age_25005<0.0))||d::truth((_n_age_25005>_n_LIFE_24948)))){d::check_cancel();continue;
}
double _n_r_25006=(0.62*std::sqrt(_n_rand_24951(_n_i_25004,1.0)));
double _n_p_25007=((2.0*ascii::PI)*_n_rand_24951(_n_i_25004,2.0));
(void)(_n_out_25003.push(([&](){auto _n_object_25080=std::make_shared<_n_Record_24963>();_n_object_25080->_p_x=(this->_n_CX_24956+((this->_n_AX_24958*_n_r_25006)*std::cos(_n_p_25007)));_n_object_25080->_p_y=(this->_n_CY_24957+((this->_n_AY_24959*_n_r_25006)*std::sin(_n_p_25007)));_n_object_25080->_p_age=_n_age_25005;_n_object_25080->_p_a=(0.8+(0.2*_n_rand_24951(_n_i_25004,3.0)));return _n_object_25080;})()));
}}
return _n_out_25003.sort([=]( std::shared_ptr<_n_Record_24963> _a0,std::shared_ptr<_n_Record_24963> _a1) mutable ->double{std::shared_ptr<_n_Record_24963> _n_p_25008=_a0;
std::shared_ptr<_n_Record_24963> _n_q_25009=_a1;
return (_n_q_25009->_p_age-_n_p_25008->_p_age);});

}
}

explicit Native_pond_ripples(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_25053=_n_meta_24942;
this->_n_cols_24953=_n_binding_25053->_p_cols;
this->_n_rows_24954=_n_binding_25053->_p_rows;
this->_n_N_24955=(this->_n_cols_24953*this->_n_rows_24954);
this->_n_CX_24956=((this->_n_cols_24953*_n_CW_24944)/2.0);
this->_n_CY_24957=((this->_n_rows_24954*_n_CH_24945)/2.0);
this->_n_AX_24958=(this->_n_CX_24956-1.2);
this->_n_AY_24959=(this->_n_CY_24957-1.12);
this->_n_bank_24960=d::Array<d::String,false>(size_t(this->_n_N_24955)).fill(d::String(u""));
(void)(_n_ellipse_24952(this->_n_cols_24953,this->_n_rows_24954,this->_n_CX_24956,this->_n_CY_24957,this->_n_AX_24958,this->_n_AY_24959,[=]( double _a0,d::String _a1,double _a2) mutable ->void{double _n_i_24997=_a0;
d::String _n_m_24998=_a1;
([&](){(void)(([&](){auto&& _n_array_25054=this->_n_bank_24960;auto _n_index_25055=_n_i_24997;auto _n_value_25056=_n_m_24998;d::put(_n_array_25054,_n_index_25055,_n_value_25056);return _n_value_25056;})());})();},std::optional<bool>(false)));
this->_n_ink_24964=d::Array<d::String,false>(size_t(this->_n_N_24955));
this->_n_level_24965=d::Array<uint8_t,true>(size_t(this->_n_N_24955));
this->_n_owner_24966=d::Array<int16_t,true>(size_t(this->_n_N_24955));
_render=[=]( double _a0,std::shared_ptr<_n_Record_25038> _a1) mutable ->d::String{double _n_time_25010=_a0;
{
double _n_t_25011=(_n_START_24946+_n_time_25010);
(void)(((this->_n_ink_24964.fill(d::String(u" ")),this->_n_level_24965.fill(0.0)),this->_n_owner_24966.fill((-d::number(1.0)))));
auto _n_kind_25012=[&]( d::String _a0) mutable ->double{d::String _n_m_25013=_a0;
return (d::truth(d::includes(d::String(u"'-._"),_n_m_25013))?0.0:(d::truth(d::includes(d::String(u"()"),_n_m_25013))?1.0:(d::truth((_n_m_25013==d::String(u"/")))?2.0:3.0)));};
auto _n_draw_25014=[&]( double _a0,d::String _a1,double _a2,double _a3) mutable ->void{double _n_i_25015=_a0;
d::String _n_mark_25016=_a1;
double _n_lv_25017=_a2;
double _n_who_25018=_a3;
{
if((((d::truth((_n_lv_25017==3.0))&&d::truth((d::at(this->_n_level_24965,_n_i_25015)==3.0)))&&d::truth((d::at(this->_n_owner_24966,_n_i_25015)!=_n_who_25018)))&&d::truth(([&](){auto _n_left_25057=_n_kind_25012(d::at(this->_n_ink_24964,_n_i_25015));auto _n_right_25058=_n_kind_25012(_n_mark_25016);return (_n_left_25057!=_n_right_25058);})()))){d::check_cancel();(void)((([&](){auto&& _n_array_25059=this->_n_ink_24964;auto _n_index_25060=_n_i_25015;auto _n_value_25061=d::String(u"x");d::put(_n_array_25059,_n_index_25060,_n_value_25061);return _n_value_25061;})(),([&](){auto&& _n_array_25062=this->_n_level_24965;auto _n_index_25063=_n_i_25015;auto _n_value_25064=4.0;d::put(_n_array_25062,_n_index_25063,_n_value_25064);return _n_value_25064;})()));
}else {d::check_cancel();if((d::truth((_n_lv_25017>=d::at(this->_n_level_24965,_n_i_25015)))&&d::truth((d::at(this->_n_level_24965,_n_i_25015)<4.0)))){d::check_cancel();(void)(((([&](){auto&& _n_array_25065=this->_n_ink_24964;auto _n_index_25066=_n_i_25015;auto _n_value_25067=_n_mark_25016;d::put(_n_array_25065,_n_index_25066,_n_value_25067);return _n_value_25067;})(),([&](){auto&& _n_array_25068=this->_n_level_24965;auto _n_index_25069=_n_i_25015;auto _n_value_25070=_n_lv_25017;d::put(_n_array_25068,_n_index_25069,_n_value_25070);return _n_value_25070;})()),([&](){auto&& _n_array_25071=this->_n_owner_24966;auto _n_index_25072=_n_i_25015;auto _n_value_25073=_n_who_25018;d::put(_n_array_25071,_n_index_25072,_n_value_25073);return _n_value_25073;})()));
}
}

}
};
(void)(d::forEach(this->_n_drops_24962(_n_t_25011),[&]( std::shared_ptr<_n_Record_24963> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_24963> _n_dp_25019=_a0;
double _n_who_25020=_a1;
{
double _n_c0_25021=std::floor((_n_dp_25019->_p_x/_n_CW_24944));
double _n_r0_25022=std::floor((_n_dp_25019->_p_y/_n_CH_24945));
double _n_at_25023=((_n_r0_25022*this->_n_cols_24953)+_n_c0_25021);
if(d::truth((_n_dp_25019->_p_age<0.15))){d::check_cancel();return _n_draw_25014(_n_at_25023,d::String(u"o"),3.0,_n_who_25020);
}
if(d::truth((_n_dp_25019->_p_age<0.4))){d::check_cancel();return (_n_draw_25014((_n_at_25023-1.0),d::String(u"("),3.0,_n_who_25020),_n_draw_25014((_n_at_25023+1.0),d::String(u")"),3.0,_n_who_25020));
}
double _n_R_25024=(0.5+(_n_SPEED_24949*_n_dp_25019->_p_age));
double _n_life_25025=(_n_dp_25019->_p_a*(1.0-(_n_dp_25019->_p_age/_n_LIFE_24948)));
(void)(_n_ellipse_24952(this->_n_cols_24953,this->_n_rows_24954,_n_dp_25019->_p_x,_n_dp_25019->_p_y,_n_R_25024,_n_R_25024,[&]( double _a0,d::String _a1,double _a2) mutable ->void{double _n_i_25026=_a0;
d::String _n_mark_25027=_a1;
double _n_ang_25028=_a2;
{
double _n_near_25029=([&](){auto _n_argument_25074=((d::mod(_n_i_25026,this->_n_cols_24953)+0.5)*_n_CW_24944);auto _n_argument_25075=((std::floor((_n_i_25026/this->_n_cols_24953))+0.5)*_n_CH_24945);return this->_n_open_24961(_n_argument_25074,_n_argument_25075);})();
if((d::truth((_n_life_25025>0.45))&&d::truth((_n_near_25029>0.6)))){d::check_cancel();(void)(_n_draw_25014(_n_i_25026,_n_mark_25027,3.0,_n_who_25020));
}else {d::check_cancel();if(((d::truth((_n_life_25025>0.2))&&d::truth((_n_near_25029>0.45)))&&d::truth(d::mod(std::floor((((_n_ang_25028+ascii::PI)*_n_R_25024)/0.9)),2.0)))){d::check_cancel();(void)(_n_draw_25014(_n_i_25026,((d::truth((_n_mark_25027==d::String(u"_")))||d::truth((_n_mark_25027==d::String(u"."))))?d::String(u"."):d::String(u"·")),2.0,_n_who_25020));
}
}

}
},std::optional<bool>{}));
double _n_r2_25030=(_n_R_25024-_n_WAVE_24950);
if((d::truth((_n_life_25025>0.55))&&d::truth((_n_r2_25030>1.4)))){d::check_cancel();(void)(_n_ellipse_24952(this->_n_cols_24953,this->_n_rows_24954,_n_dp_25019->_p_x,_n_dp_25019->_p_y,_n_r2_25030,_n_r2_25030,[&]( double _a0,d::String _a1,double _a2) mutable ->void{double _n_i_25031=_a0;
d::String _n__mark_25032=_a1;
double _n_ang_25033=_a2;
{
if(d::truth(d::mod(std::floor((((_n_ang_25033+ascii::PI)*_n_r2_25030)/1.1)),2.0))){d::check_cancel();(void)(_n_draw_25014(_n_i_25031,d::String(u"·"),1.0,_n_who_25020));
}

}
},std::optional<bool>{}));
}

}
}));
d::Array<d::String,false> _n_lines_25034=d::Array<d::String,false>{};
{double _n_r_25035=0.0;
for(;d::truth((_n_r_25035<this->_n_rows_24954));(void)((_n_r_25035++))){d::check_cancel();d::String _n_line_25036=d::String(u"");
{double _n_c_25037=0.0;
for(;d::truth((_n_c_25037<this->_n_cols_24953));(void)((_n_c_25037++))){d::check_cancel();(void)((_n_line_25036=(d::string(_n_line_25036)+d::string(([&]()->d::String{auto _n_logical_25076=d::at(this->_n_bank_24960,((_n_r_25035*this->_n_cols_24953)+_n_c_25037));return d::truth(_n_logical_25076)?_n_logical_25076:d::at(this->_n_ink_24964,((_n_r_25035*this->_n_cols_24953)+_n_c_25037));})()))));
}}
(void)(_n_lines_25034.push(_n_line_25036));
}}
return d::join(_n_lines_25034,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("pond-ripples").cols)*ascii::catalog_meta("pond-ripples").rows);auto _env=std::make_shared<_n_Record_25038>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &pond_ripples_meta(){return catalog_meta("pond-ripples");}
std::unique_ptr<Piece> make_pond_ripples(const AsciiPieceOptions &o){return std::make_unique<Native_pond_ripples>(o);}
}
