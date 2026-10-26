// Direct, statically typed C++ from src/pieces/pond-ripples.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_24944;
struct _n_Record_24964;
struct _n_Record_25039;
struct _n_Record_24944{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_24944> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24944>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_24964{
double _p_x{};
double _p_y{};
double _p_age{};
double _p_a{};
static std::shared_ptr<_n_Record_24964> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_24964>();out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_age=d::decode<double>(j["age"]);out->_p_a=d::decode<double>(j["a"]);return out;}
};
struct _n_Record_25039{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_25039> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_25039>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
double _n_rand_24952(double _a0,double _a1);
void _n_ellipse_24953(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::function<void(double,d::String,double)> _a6,std::optional<bool> _a7);
std::shared_ptr<_n_Record_24944> _n_meta_24943=[](){return ([&](){auto _n_object_25042=std::make_shared<_n_Record_24944>();_n_object_25042->_p_name=d::String(u"pond ripples");_n_object_25042->_p_category=d::String(u"physics");_n_object_25042->_p_note=d::String(u"raindrops opening rings that cross and fade on a pond");_n_object_25042->_p_cols=64.0;_n_object_25042->_p_rows=20.0;_n_object_25042->_p_fps=20.0;return _n_object_25042;})();}();
const double _n_CW_24945=[](){return 0.6;}();
const double _n_CH_24946=[](){return 1.2;}();
const double _n_START_24947=[](){return 7.35;}();
const double _n_EVERY_24948=[](){return 1.5;}();
const double _n_LIFE_24949=[](){return 4.0;}();
const double _n_SPEED_24950=[](){return 2.6;}();
const double _n_WAVE_24951=[](){return 1.5;}();
double _n_rand_24952(double _a0,double _a1){double _n_i_24968=_a0;
double _n_salt_24969=_a1;
{
double _n_h_24970=([&](){auto _n_left_25043=d::imul(double(d::i32(_n_i_24968)^d::i32(2654435769.0)),2246822507.0);auto _n_right_25044=d::imul((_n_salt_24969+1.0),3266489909.0);return double(d::i32(_n_left_25043)^d::i32(_n_right_25044));})();
(void)((_n_h_24970=d::imul(double(d::i32(_n_h_24970)^d::i32(double(d::u32(_n_h_24970)>>(d::u32(15.0)&31)))),739982445.0)));
(void)((_n_h_24970=d::imul(double(d::i32(_n_h_24970)^d::i32(double(d::u32(_n_h_24970)>>(d::u32(12.0)&31)))),695872825.0)));
return (double(d::u32(double(d::i32(_n_h_24970)^d::i32(double(d::u32(_n_h_24970)>>(d::u32(15.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
}

void _n_ellipse_24953(double _a0,double _a1,double _a2,double _a3,double _a4,double _a5,std::function<void(double,d::String,double)> _a6,std::optional<bool> _a7){double _n_cols_24971=_a0;
double _n_rows_24972=_a1;
double _n_x0_24973=_a2;
double _n_y0_24974=_a3;
double _n_ax_24975=_a4;
double _n_ay_24976=_a5;
std::function<void(double,d::String,double)> _n_put_24977=_a6;
bool _n_small_24981=(d::present(_a7)?d::read(_a7):true);
{
auto _n_binding_25045=(d::truth(_n_small_24981)?d::Array<double,false>{1.05,1.25}:d::Array<double,false>{0.9,1.1});
double _n_flat_24982=d::at(_n_binding_25045,0.0);
double _n_steep_24983=d::at(_n_binding_25045,1.0);
{double _n_c_24984=0.0;
for(;d::truth((_n_c_24984<_n_cols_24971));(void)((_n_c_24984++))){d::check_cancel();double _n_x_24985=((((_n_c_24984+0.5)*_n_CW_24945)-_n_x0_24973)/_n_ax_24975);
if(d::truth((std::fabs(_n_x_24985)>=1.0))){d::check_cancel();continue;
}
double _n_s_24986=std::sqrt((1.0-(_n_x_24985*_n_x_24985)));
if(d::truth(((((_n_ay_24976/_n_ax_24975)*std::fabs(_n_x_24985))/_n_s_24986)>_n_flat_24982))){d::check_cancel();continue;
}
for(auto &&_n_item_25046:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_sign_24987=_n_item_25046;
{
double _n_y_24988=((_n_y0_24974+((_n_sign_24987*_n_ay_24976)*_n_s_24986))/_n_CH_24946);
double _n_r_24989=std::floor(_n_y_24988);
double _n_f_24990=(_n_y_24988-_n_r_24989);
if((d::truth((_n_r_24989>=0.0))&&d::truth((_n_r_24989<_n_rows_24972)))){d::check_cancel();(void)(([&](){auto _n_argument_25047=((_n_r_24989*_n_cols_24971)+_n_c_24984);auto _n_argument_25048=(d::truth((_n_f_24990<0.3))?d::String(u"'"):(d::truth((_n_f_24990<0.6))?d::String(u"-"):(d::truth((_n_f_24990<0.85))?d::String(u"."):d::String(u"_"))));auto _n_argument_25049=std::atan2((_n_sign_24987*_n_s_24986),_n_x_24985);return _n_put_24977(_n_argument_25047,_n_argument_25048,_n_argument_25049);})());
}

}
}
}}
{double _n_r_24991=0.0;
for(;d::truth((_n_r_24991<_n_rows_24972));(void)((_n_r_24991++))){d::check_cancel();double _n_y_24992=((((_n_r_24991+0.5)*_n_CH_24946)-_n_y0_24974)/_n_ay_24976);
if(d::truth((std::fabs(_n_y_24992)>=1.0))){d::check_cancel();continue;
}
double _n_s_24993=std::sqrt((1.0-(_n_y_24992*_n_y_24992)));
double _n_lean_24994=(((_n_ax_24975/_n_ay_24976)*std::fabs(_n_y_24992))/_n_s_24993);
if(d::truth((_n_lean_24994>_n_steep_24983))){d::check_cancel();continue;
}
for(auto &&_n_item_25050:d::Array<double,false>{(-d::number(1.0)),1.0}){d::check_cancel();double _n_sign_24995=_n_item_25050;
{
double _n_c_24996=std::floor(((_n_x0_24973+((_n_sign_24995*_n_ax_24975)*_n_s_24993))/_n_CW_24945));
d::String _n_mark_24997=(d::truth((_n_lean_24994<0.45))?(d::truth((_n_sign_24995<0.0))?d::String(u"("):d::String(u")")):(d::truth(((_n_sign_24995<0.0)==(_n_y_24992<0.0)))?d::String(u"/"):d::String(u"\\")));
if((d::truth((_n_c_24996>=0.0))&&d::truth((_n_c_24996<_n_cols_24971)))){d::check_cancel();(void)(([&](){auto _n_argument_25051=((_n_r_24991*_n_cols_24971)+_n_c_24996);auto _n_argument_25052=_n_mark_24997;auto _n_argument_25053=std::atan2(_n_y_24992,(_n_sign_24995*_n_s_24993));return _n_put_24977(_n_argument_25051,_n_argument_25052,_n_argument_25053);})());
}

}
}
}}

}
}

struct Native_pond_ripples final:ascii::Piece{
double _n_cols_24954{};
double _n_rows_24955{};
double _n_N_24956{};
double _n_CX_24957{};
double _n_CY_24958{};
double _n_AX_24959{};
double _n_AY_24960{};
d::Array<d::String,false> _n_bank_24961{};
d::Array<d::String,false> _n_ink_24965{};
d::Array<uint8_t,true> _n_level_24966{};
d::Array<int16_t,true> _n_owner_24967{};
std::function<d::String(double,std::shared_ptr<_n_Record_25039>)> _render;
double _n_open_24962(double _a0,double _a1){double _n_x_25000=_a0;
double _n_y_25001=_a1;
{
double _n_e_25002=([&](){auto _n_argument_25078=1.0;auto _n_argument_25079=d::maximum({0.0,(((1.0-std::pow(((_n_x_25000-this->_n_CX_24957)/this->_n_AX_24959),2.0))-std::pow(((_n_y_25001-this->_n_CY_24958)/this->_n_AY_24960),2.0))/0.35)});return d::minimum({_n_argument_25078,_n_argument_25079});})();
return ((_n_e_25002*_n_e_25002)*(3.0-(2.0*_n_e_25002)));

}
}

d::Array<std::shared_ptr<_n_Record_24964>,false> _n_drops_24963(double _a0){double _n_t_25003=_a0;
{
d::Array<std::shared_ptr<_n_Record_24964>,false> _n_out_25004=d::Array<std::shared_ptr<_n_Record_24964>,false>{};
{double _n_i_25005=(std::floor(((_n_t_25003-_n_LIFE_24949)/_n_EVERY_24948))-1.0);
for(;d::truth((_n_i_25005<=(std::floor((_n_t_25003/_n_EVERY_24948))+1.0)));(void)((_n_i_25005++))){d::check_cancel();double _n_age_25006=(_n_t_25003-((_n_i_25005+(0.7*(_n_rand_24952(_n_i_25005,0.0)-0.5)))*_n_EVERY_24948));
if((d::truth((_n_age_25006<0.0))||d::truth((_n_age_25006>_n_LIFE_24949)))){d::check_cancel();continue;
}
double _n_r_25007=(0.62*std::sqrt(_n_rand_24952(_n_i_25005,1.0)));
double _n_p_25008=((2.0*ascii::PI)*_n_rand_24952(_n_i_25005,2.0));
(void)(_n_out_25004.push(([&](){auto _n_object_25081=std::make_shared<_n_Record_24964>();_n_object_25081->_p_x=(this->_n_CX_24957+((this->_n_AX_24959*_n_r_25007)*std::cos(_n_p_25008)));_n_object_25081->_p_y=(this->_n_CY_24958+((this->_n_AY_24960*_n_r_25007)*std::sin(_n_p_25008)));_n_object_25081->_p_age=_n_age_25006;_n_object_25081->_p_a=(0.8+(0.2*_n_rand_24952(_n_i_25005,3.0)));return _n_object_25081;})()));
}}
return _n_out_25004.sort([=]( std::shared_ptr<_n_Record_24964> _a0,std::shared_ptr<_n_Record_24964> _a1) mutable ->double{std::shared_ptr<_n_Record_24964> _n_p_25009=_a0;
std::shared_ptr<_n_Record_24964> _n_q_25010=_a1;
return (_n_q_25010->_p_age-_n_p_25009->_p_age);});

}
}

explicit Native_pond_ripples(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_25054=_n_meta_24943;
this->_n_cols_24954=_n_binding_25054->_p_cols;
this->_n_rows_24955=_n_binding_25054->_p_rows;
this->_n_N_24956=(this->_n_cols_24954*this->_n_rows_24955);
this->_n_CX_24957=((this->_n_cols_24954*_n_CW_24945)/2.0);
this->_n_CY_24958=((this->_n_rows_24955*_n_CH_24946)/2.0);
this->_n_AX_24959=(this->_n_CX_24957-1.2);
this->_n_AY_24960=(this->_n_CY_24958-1.12);
this->_n_bank_24961=d::Array<d::String,false>(size_t(this->_n_N_24956)).fill(d::String(u""));
(void)(_n_ellipse_24953(this->_n_cols_24954,this->_n_rows_24955,this->_n_CX_24957,this->_n_CY_24958,this->_n_AX_24959,this->_n_AY_24960,[=]( double _a0,d::String _a1,double _a2) mutable ->void{double _n_i_24998=_a0;
d::String _n_m_24999=_a1;
([&](){(void)(([&](){auto&& _n_array_25055=this->_n_bank_24961;auto _n_index_25056=_n_i_24998;auto _n_value_25057=_n_m_24999;d::put(_n_array_25055,_n_index_25056,_n_value_25057);return _n_value_25057;})());})();},std::optional<bool>(false)));
this->_n_ink_24965=d::Array<d::String,false>(size_t(this->_n_N_24956));
this->_n_level_24966=d::Array<uint8_t,true>(size_t(this->_n_N_24956));
this->_n_owner_24967=d::Array<int16_t,true>(size_t(this->_n_N_24956));
_render=[=]( double _a0,std::shared_ptr<_n_Record_25039> _a1) mutable ->d::String{double _n_time_25011=_a0;
{
double _n_t_25012=(_n_START_24947+_n_time_25011);
(void)(((this->_n_ink_24965.fill(d::String(u" ")),this->_n_level_24966.fill(0.0)),this->_n_owner_24967.fill((-d::number(1.0)))));
auto _n_kind_25013=[=]( d::String _a0) mutable ->double{d::String _n_m_25014=_a0;
return (d::truth(d::includes(d::String(u"'-._"),_n_m_25014))?0.0:(d::truth(d::includes(d::String(u"()"),_n_m_25014))?1.0:(d::truth((_n_m_25014==d::String(u"/")))?2.0:3.0)));};
auto _n_draw_25015=[=]( double _a0,d::String _a1,double _a2,double _a3) mutable ->void{double _n_i_25016=_a0;
d::String _n_mark_25017=_a1;
double _n_lv_25018=_a2;
double _n_who_25019=_a3;
{
if((((d::truth((_n_lv_25018==3.0))&&d::truth((d::at(this->_n_level_24966,_n_i_25016)==3.0)))&&d::truth((d::at(this->_n_owner_24967,_n_i_25016)!=_n_who_25019)))&&d::truth(([&](){auto _n_left_25058=_n_kind_25013(d::at(this->_n_ink_24965,_n_i_25016));auto _n_right_25059=_n_kind_25013(_n_mark_25017);return (_n_left_25058!=_n_right_25059);})()))){d::check_cancel();(void)((([&](){auto&& _n_array_25060=this->_n_ink_24965;auto _n_index_25061=_n_i_25016;auto _n_value_25062=d::String(u"x");d::put(_n_array_25060,_n_index_25061,_n_value_25062);return _n_value_25062;})(),([&](){auto&& _n_array_25063=this->_n_level_24966;auto _n_index_25064=_n_i_25016;auto _n_value_25065=4.0;d::put(_n_array_25063,_n_index_25064,_n_value_25065);return _n_value_25065;})()));
}else {d::check_cancel();if((d::truth((_n_lv_25018>=d::at(this->_n_level_24966,_n_i_25016)))&&d::truth((d::at(this->_n_level_24966,_n_i_25016)<4.0)))){d::check_cancel();(void)(((([&](){auto&& _n_array_25066=this->_n_ink_24965;auto _n_index_25067=_n_i_25016;auto _n_value_25068=_n_mark_25017;d::put(_n_array_25066,_n_index_25067,_n_value_25068);return _n_value_25068;})(),([&](){auto&& _n_array_25069=this->_n_level_24966;auto _n_index_25070=_n_i_25016;auto _n_value_25071=_n_lv_25018;d::put(_n_array_25069,_n_index_25070,_n_value_25071);return _n_value_25071;})()),([&](){auto&& _n_array_25072=this->_n_owner_24967;auto _n_index_25073=_n_i_25016;auto _n_value_25074=_n_who_25019;d::put(_n_array_25072,_n_index_25073,_n_value_25074);return _n_value_25074;})()));
}
}

}
};
(void)(d::forEach(this->_n_drops_24963(_n_t_25012),[&]( std::shared_ptr<_n_Record_24964> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_24964> _n_dp_25020=_a0;
double _n_who_25021=_a1;
{
double _n_c0_25022=std::floor((_n_dp_25020->_p_x/_n_CW_24945));
double _n_r0_25023=std::floor((_n_dp_25020->_p_y/_n_CH_24946));
double _n_at_25024=((_n_r0_25023*this->_n_cols_24954)+_n_c0_25022);
if(d::truth((_n_dp_25020->_p_age<0.15))){d::check_cancel();return _n_draw_25015(_n_at_25024,d::String(u"o"),3.0,_n_who_25021);
}
if(d::truth((_n_dp_25020->_p_age<0.4))){d::check_cancel();return (_n_draw_25015((_n_at_25024-1.0),d::String(u"("),3.0,_n_who_25021),_n_draw_25015((_n_at_25024+1.0),d::String(u")"),3.0,_n_who_25021));
}
double _n_R_25025=(0.5+(_n_SPEED_24950*_n_dp_25020->_p_age));
double _n_life_25026=(_n_dp_25020->_p_a*(1.0-(_n_dp_25020->_p_age/_n_LIFE_24949)));
(void)(_n_ellipse_24953(this->_n_cols_24954,this->_n_rows_24955,_n_dp_25020->_p_x,_n_dp_25020->_p_y,_n_R_25025,_n_R_25025,[&]( double _a0,d::String _a1,double _a2) mutable ->void{double _n_i_25027=_a0;
d::String _n_mark_25028=_a1;
double _n_ang_25029=_a2;
{
double _n_near_25030=([&](){auto _n_argument_25075=((d::mod(_n_i_25027,this->_n_cols_24954)+0.5)*_n_CW_24945);auto _n_argument_25076=((std::floor((_n_i_25027/this->_n_cols_24954))+0.5)*_n_CH_24946);return this->_n_open_24962(_n_argument_25075,_n_argument_25076);})();
if((d::truth((_n_life_25026>0.45))&&d::truth((_n_near_25030>0.6)))){d::check_cancel();(void)(_n_draw_25015(_n_i_25027,_n_mark_25028,3.0,_n_who_25021));
}else {d::check_cancel();if(((d::truth((_n_life_25026>0.2))&&d::truth((_n_near_25030>0.45)))&&d::truth(d::mod(std::floor((((_n_ang_25029+ascii::PI)*_n_R_25025)/0.9)),2.0)))){d::check_cancel();(void)(_n_draw_25015(_n_i_25027,((d::truth((_n_mark_25028==d::String(u"_")))||d::truth((_n_mark_25028==d::String(u"."))))?d::String(u"."):d::String(u"·")),2.0,_n_who_25021));
}
}

}
},std::optional<bool>{}));
double _n_r2_25031=(_n_R_25025-_n_WAVE_24951);
if((d::truth((_n_life_25026>0.55))&&d::truth((_n_r2_25031>1.4)))){d::check_cancel();(void)(_n_ellipse_24953(this->_n_cols_24954,this->_n_rows_24955,_n_dp_25020->_p_x,_n_dp_25020->_p_y,_n_r2_25031,_n_r2_25031,[&]( double _a0,d::String _a1,double _a2) mutable ->void{double _n_i_25032=_a0;
d::String _n__mark_25033=_a1;
double _n_ang_25034=_a2;
{
if(d::truth(d::mod(std::floor((((_n_ang_25034+ascii::PI)*_n_r2_25031)/1.1)),2.0))){d::check_cancel();(void)(_n_draw_25015(_n_i_25032,d::String(u"·"),1.0,_n_who_25021));
}

}
},std::optional<bool>{}));
}

}
}));
d::Array<d::String,false> _n_lines_25035=d::Array<d::String,false>{};
{double _n_r_25036=0.0;
for(;d::truth((_n_r_25036<this->_n_rows_24955));(void)((_n_r_25036++))){d::check_cancel();d::String _n_line_25037=d::String(u"");
{double _n_c_25038=0.0;
for(;d::truth((_n_c_25038<this->_n_cols_24954));(void)((_n_c_25038++))){d::check_cancel();(void)((_n_line_25037=(d::string(_n_line_25037)+d::string(([&]()->d::String{auto _n_logical_25077=d::at(this->_n_bank_24961,((_n_r_25036*this->_n_cols_24954)+_n_c_25038));return d::truth(_n_logical_25077)?_n_logical_25077:d::at(this->_n_ink_24965,((_n_r_25036*this->_n_cols_24954)+_n_c_25038));})()))));
}}
(void)(_n_lines_25035.push(_n_line_25037));
}}
return d::join(_n_lines_25035,d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("pond-ripples").cols)*ascii::catalog_meta("pond-ripples").rows);auto _env=std::make_shared<_n_Record_25039>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &pond_ripples_meta(){return catalog_meta("pond-ripples");}
std::unique_ptr<Piece> make_pond_ripples(const AsciiPieceOptions &o){return std::make_unique<Native_pond_ripples>(o);}
}
