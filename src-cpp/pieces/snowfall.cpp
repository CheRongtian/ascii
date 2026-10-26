// Direct, statically typed C++ from src/pieces/snowfall.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29100;
struct _n_Record_29108;
struct _n_Record_29121;
struct _n_Record_29198;
struct _n_Record_29218;
struct _n_Record_29100{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_29100> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29100>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_29108{
double _p_n{};
double _p_v{};
double _p_wind{};
double _p_sway{};
d::String _p_glyph{};
static std::shared_ptr<_n_Record_29108> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29108>();out->_p_n=d::decode<double>(j["n"]);out->_p_v=d::decode<double>(j["v"]);out->_p_wind=d::decode<double>(j["wind"]);out->_p_sway=d::decode<double>(j["sway"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);return out;}
};
struct _n_Record_29121{
double _p_li{};
double _p_x{};
double _p_y{};
double _p_ph{};
double _p_w{};
static std::shared_ptr<_n_Record_29121> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29121>();out->_p_li=d::decode<double>(j["li"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_w=d::decode<double>(j["w"]);return out;}
};
struct _n_Record_29198{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29198> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29198>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29218{
double _p_li{};
static std::shared_ptr<_n_Record_29218> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29218>();out->_p_li=d::decode<double>(j["li"]);return out;}
};
std::function<double()> _n_mulberry32_29109(double _a0);
double _n_smooth_29110(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_29100> _n_meta_29099=[](){return ([&](){auto _n_object_29201=std::make_shared<_n_Record_29100>();_n_object_29201->_p_name=d::String(u"snowfall");_n_object_29201->_p_category=d::String(u"nature");_n_object_29201->_p_note=d::String(u"snow swaying down, building drifts on the ground and a fence");_n_object_29201->_p_cols=64.0;_n_object_29201->_p_rows=22.0;_n_object_29201->_p_fps=20.0;return _n_object_29201;})();}();
const d::String _n_EIGHTHS_29101=[](){return d::String(u" ▁▂▃▄▅▆▇█");}();
const d::String _n_LINE_29102=[](){return d::String(u"▔─▁");}();
d::Array<double,false> _n_POSTS_29103=[](){return d::Array<double,false>{9.0,20.0,31.0,42.0};}();
const double _n_TOP_29104=[](){return 10.0;}();
d::Array<double,false> _n_RAILS_29105=[](){return d::Array<double,false>{11.0,14.0};}();
const double _n_RAIL_29106=[](){return 2.0;}();
d::Array<std::shared_ptr<_n_Record_29108>,false> _n_LAYERS_29107=[](){return d::Array<std::shared_ptr<_n_Record_29108>,false>{([&](){auto _n_object_29204=std::make_shared<_n_Record_29108>();_n_object_29204->_p_n=44.0;_n_object_29204->_p_v=1.1;_n_object_29204->_p_wind=0.6;_n_object_29204->_p_sway=0.5;_n_object_29204->_p_glyph=d::String(u".");return _n_object_29204;})(),([&](){auto _n_object_29206=std::make_shared<_n_Record_29108>();_n_object_29206->_p_n=30.0;_n_object_29206->_p_v=1.8;_n_object_29206->_p_wind=1.1;_n_object_29206->_p_sway=1.0;_n_object_29206->_p_glyph=d::String(u"+");return _n_object_29206;})(),([&](){auto _n_object_29208=std::make_shared<_n_Record_29108>();_n_object_29208->_p_n=13.0;_n_object_29208->_p_v=2.8;_n_object_29208->_p_wind=1.8;_n_object_29208->_p_sway=1.6;_n_object_29208->_p_glyph=d::String(u"*");return _n_object_29208;})()};}();
std::function<double()> _n_mulberry32_29109(double _a0){double _n_a_29125=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_29125=double(d::i32((_n_a_29125+1831565813.0))|d::i32(0.0))));
double _n_t_29126=d::imul(double(d::i32(_n_a_29125)^d::i32(double(d::u32(_n_a_29125)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_29125)));
(void)((_n_t_29126=double(d::i32((_n_t_29126+d::imul(double(d::i32(_n_t_29126)^d::i32(double(d::u32(_n_t_29126)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_29126)))))^d::i32(_n_t_29126))));
return (double(d::u32(double(d::i32(_n_t_29126)^d::i32(double(d::u32(_n_t_29126)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_smooth_29110(double _a0,double _a1,double _a2){double _n_a_29127=_a0;
double _n_b_29128=_a1;
double _n_x_29129=_a2;
{
double _n_u_29130=([&](){auto _n_argument_29209=1.0;auto _n_argument_29210=d::maximum({0.0,((_n_x_29129-_n_a_29127)/(_n_b_29128-_n_a_29127))});return d::minimum({_n_argument_29209,_n_argument_29210});})();
return ((_n_u_29130*_n_u_29130)*(3.0-(2.0*_n_u_29130)));

}
}

struct Native_snowfall final:ascii::Piece{
double _n_cols_29111{};
double _n_rows_29112{};
std::function<double()> _n_rand_29113{};
d::Array<double,true> _n_ground_29114{};
d::Array<double,true> _n_extra_29115{};
d::Array<double,true> _n_wind_29116{};
d::Array<d::Array<double,true>,false> _n_rail_29117{};
d::Array<double,true> _n_cap_29118{};
d::Array<std::shared_ptr<_n_Record_29121>,false> _n_flakes_29120{};
double _n_last_29124{};
std::function<d::String(double,std::shared_ptr<_n_Record_29198>)> _render;
bool _n_inFence_29119(double _a0){double _n_c_29140=_a0;
return ([&]()->bool{auto _n_logical_29268=(_n_c_29140>d::at(_n_POSTS_29103,0.0));return d::truth(_n_logical_29268)?(_n_c_29140<d::at(_n_POSTS_29103,(double(_n_POSTS_29103.size())-1.0))):_n_logical_29268;})();}

void _n_spawn_29122(std::shared_ptr<_n_Record_29121> _a0,bool _a1){std::shared_ptr<_n_Record_29121> _n_f_29141=_a0;
bool _n_top_29142=_a1;
{
(void)((_n_f_29141->_p_x=(this->_n_rand_29113()*this->_n_cols_29111)));
(void)((_n_f_29141->_p_y=(d::truth(_n_top_29142)?((-d::number(this->_n_rand_29113()))*2.0):(this->_n_rand_29113()*this->_n_rows_29112))));
(void)((_n_f_29141->_p_ph=(this->_n_rand_29113()*6.283)));
(void)((_n_f_29141->_p_w=(0.8+(this->_n_rand_29113()*0.45))));

}
}

void _n_step_29123(double _a0,double _a1){double _n_dt_29147=_a0;
double _n_t_29148=_a1;
{
for(auto &&_n_item_29269:this->_n_flakes_29120){d::check_cancel();std::shared_ptr<_n_Record_29121> _n_f_29149=_n_item_29269;
{
std::shared_ptr<_n_Record_29108> _n_L_29150=d::at(_n_LAYERS_29107,_n_f_29149->_p_li);
double _n_y0_29151=_n_f_29149->_p_y;
(void)((_n_f_29149->_p_y=(_n_f_29149->_p_y+((_n_L_29150->_p_v*_n_f_29149->_p_w)*_n_dt_29147))));
(void)((_n_f_29149->_p_x=d::mod((d::mod((_n_f_29149->_p_x+((_n_L_29150->_p_wind+(_n_L_29150->_p_sway*std::cos((((_n_t_29148*_n_f_29149->_p_w)*1.3)+_n_f_29149->_p_ph))))*_n_dt_29147)),this->_n_cols_29111)+this->_n_cols_29111),this->_n_cols_29111)));
double _n_c_29152=std::floor(_n_f_29149->_p_x);
if(d::truth((_n_f_29149->_p_li==1.0))){d::check_cancel();double _n_k_29153=d::findIndex(_n_RAILS_29105,[&]( double _a0) mutable ->bool{double _n_r_29154=_a0;
return ([&]()->bool{auto _n_logical_29270=(_n_y0_29151<(_n_r_29154+0.5));return d::truth(_n_logical_29270)?(_n_f_29149->_p_y>=(_n_r_29154+0.5)):_n_logical_29270;})();});
if((((d::truth((_n_k_29153>=0.0))&&d::truth(this->_n_inFence_29119(_n_c_29152)))&&d::truth((!d::truth(_n_POSTS_29103.includes(_n_c_29152)))))&&d::truth((this->_n_rand_29113()<0.7)))){d::check_cancel();for(auto &&_n_item_29271:d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),0.3},d::Array<double,false>{0.0,0.6},d::Array<double,false>{1.0,0.3}}){d::check_cancel();auto _n_binding_29272=_n_item_29271;
double _n_d_29155=d::at(_n_binding_29272,0.0);
double _n_a_29156=d::at(_n_binding_29272,1.0);
(void)(([&](){auto&& _n_array_29273=d::at(this->_n_rail_29117,_n_k_29153);auto _n_index_29274=(_n_c_29152+_n_d_29155);auto _n_value_29275=d::minimum({5.0,(d::at(d::at(this->_n_rail_29117,_n_k_29153),(_n_c_29152+_n_d_29155))+_n_a_29156)});d::put(_n_array_29273,_n_index_29274,_n_value_29275);return _n_value_29275;})());
}
(void)(this->_n_spawn_29122(_n_f_29149,true));
continue;
}
double _n_p_29157=_n_POSTS_29103.indexOf(_n_c_29152);
if(((d::truth((_n_p_29157>=0.0))&&d::truth((_n_y0_29151<_n_TOP_29104)))&&d::truth((_n_f_29149->_p_y>=_n_TOP_29104)))){d::check_cancel();(void)(([&](){auto&& _n_array_29276=this->_n_cap_29118;auto _n_index_29277=_n_p_29157;auto _n_value_29278=d::minimum({13.0,(d::at(this->_n_cap_29118,_n_p_29157)+1.0)});d::put(_n_array_29276,_n_index_29277,_n_value_29278);return _n_value_29278;})());
(void)(this->_n_spawn_29122(_n_f_29149,true));
continue;
}
}
if(d::truth((_n_f_29149->_p_y<((this->_n_rows_29112-d::at(this->_n_ground_29114,_n_c_29152))-d::at(this->_n_extra_29115,_n_c_29152))))){d::check_cancel();continue;
}
if(d::truth((_n_f_29149->_p_li>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29279=this->_n_extra_29115;auto _n_index_29280=_n_c_29152;auto _n_value_29281=(d::at(_n_array_29279,_n_index_29280)+(0.3*d::at(this->_n_wind_29116,_n_c_29152)));d::put(_n_array_29279,_n_index_29280,_n_value_29281);return _n_value_29281;})());
}
(void)(this->_n_spawn_29122(_n_f_29149,true));

}
}
d::Array<double,true> _n_next_29158=d::Array<double,true>(d::map(this->_n_extra_29115,[&]( double _a0,double _a1) mutable ->double{double _n_e_29159=_a0;
double _n_c_29160=_a1;
return (_n_e_29159+((1.5*_n_dt_29147)*((([&]()->double{auto _n_logical_29282=d::at(this->_n_extra_29115,(_n_c_29160-1.0));return d::has(this->_n_extra_29115,(_n_c_29160-1.0))?_n_logical_29282:_n_e_29159;})()+([&]()->double{auto _n_logical_29283=d::at(this->_n_extra_29115,(_n_c_29160+1.0));return d::has(this->_n_extra_29115,(_n_c_29160+1.0))?_n_logical_29283:_n_e_29159;})())-(2.0*_n_e_29159))));}));
{double _n_c_29161=0.0;
for(;d::truth((_n_c_29161<this->_n_cols_29111));(void)((_n_c_29161++))){d::check_cancel();(void)(([&](){auto&& _n_array_29284=this->_n_extra_29115;auto _n_index_29285=_n_c_29161;auto _n_value_29286=(d::at(_n_next_29158,_n_c_29161)*(1.0-(0.02*_n_dt_29147)));d::put(_n_array_29284,_n_index_29285,_n_value_29286);return _n_value_29286;})());
}}
for(auto &&_n_item_29287:this->_n_rail_29117){d::check_cancel();d::Array<double,true> _n_r_29162=_n_item_29287;
{double _n_c_29163=0.0;
for(;d::truth((_n_c_29163<this->_n_cols_29111));(void)((_n_c_29163++))){d::check_cancel();(void)(([&](){auto&& _n_array_29288=_n_r_29162;auto _n_index_29289=_n_c_29163;auto _n_value_29290=(d::at(_n_array_29288,_n_index_29289)-((d::at(_n_r_29162,_n_c_29163)*0.004)*_n_dt_29147));d::put(_n_array_29288,_n_index_29289,_n_value_29290);return _n_value_29290;})());
}}
}
{double _n_p_29164=0.0;
for(;d::truth((_n_p_29164<double(this->_n_cap_29118.size())));(void)((_n_p_29164++))){d::check_cancel();(void)(([&](){auto&& _n_array_29291=this->_n_cap_29118;auto _n_index_29292=_n_p_29164;auto _n_value_29293=(d::at(_n_array_29291,_n_index_29292)-((d::at(this->_n_cap_29118,_n_p_29164)*0.01)*_n_dt_29147));d::put(_n_array_29291,_n_index_29292,_n_value_29293);return _n_value_29293;})());
}}

}
}

explicit Native_snowfall(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29211=_n_meta_29099;
this->_n_cols_29111=_n_binding_29211->_p_cols;
this->_n_rows_29112=_n_binding_29211->_p_rows;
this->_n_rand_29113=_n_mulberry32_29109(7.0);
this->_n_ground_29114=d::Array<double,true>(d::from(this->_n_cols_29111,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29132=_a1;
{
double _n_lee_29133=([&](){auto _n_left_29212=(3.6*_n_smooth_29110(36.0,55.0,_n_c_29132));auto _n_right_29213=(1.0-_n_smooth_29110(55.0,59.0,_n_c_29132));return (_n_left_29212*_n_right_29213);})();
return (([&](){auto _n_left_29214=(1.0+(0.55*std::sin(((_n_c_29132*0.19)+1.3))));auto _n_right_29215=(0.3*std::sin(((_n_c_29132*0.47)+0.4)));return (_n_left_29214+_n_right_29215);})()+_n_lee_29133);

}
}));
this->_n_extra_29115=d::Array<double,true>(size_t(this->_n_cols_29111)).fill(0.3);
this->_n_wind_29116=d::Array<double,true>(d::from(this->_n_cols_29111,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29135=_a1;
return (0.7+(1.6*std::exp((-d::number(std::pow(((_n_c_29135-52.0)/7.0),2.0))))));}));
this->_n_rail_29117=d::map(_n_RAILS_29105,[&]( double _a0,double _a1) mutable ->d::Array<double,true>{double _n___29136=_a0;
double _n_k_29137=_a1;
return d::Array<double,true>(d::from(this->_n_cols_29111,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29139=_a1;
return ([&](){auto _n_left_29216=(2.0+(0.7*std::sin(((_n_c_29139*0.45)+(_n_k_29137*2.0)))));auto _n_right_29217=(0.4*this->_n_rand_29113());return (_n_left_29216+_n_right_29217);})();}));});
this->_n_cap_29118=d::Array<double,true>(size_t(double(_n_POSTS_29103.size()))).fill(7.0);
this->_n_flakes_29120=d::Array<std::shared_ptr<_n_Record_29121>,false>{};
(void)(d::forEach(_n_LAYERS_29107,[&]( std::shared_ptr<_n_Record_29108> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_29108> _n_L_29143=_a0;
double _n_li_29144=_a1;
{
{double _n_i_29145=0.0;
for(;d::truth((_n_i_29145<_n_L_29143->_p_n));(void)((_n_i_29145++))){d::check_cancel();std::shared_ptr<_n_Record_29121> _n_f_29146=([&](){auto _n_object_29219=std::make_shared<_n_Record_29121>();_n_object_29219->_p_li=_n_li_29144;return _n_object_29219;})();
(void)(this->_n_spawn_29122(_n_f_29146,false));
(void)(this->_n_flakes_29120.push(_n_f_29146));
}}

}
}));
{double _n_i_29165=0.0;
for(;d::truth((_n_i_29165<400.0));(void)((_n_i_29165++))){d::check_cancel();(void)(this->_n_step_29123(0.05,(_n_i_29165*0.05)));
}}
this->_n_last_29124=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_29198> _a1) mutable ->d::String{double _n_time_29166=_a0;
auto _n_binding_29222=(d::present(_a1)?_a1:([&](){auto _n_object_29221=std::make_shared<_n_Record_29198>();return _n_object_29221;})());
bool _n_paper_29167=(d::present(_n_binding_29222->_p_paper)?d::read(_n_binding_29222->_p_paper):false);
{
double _n_dt_29168=([&](){auto _n_argument_29223=0.1;auto _n_argument_29224=d::maximum({0.0,(_n_time_29166-this->_n_last_29124)});return d::minimum({_n_argument_29223,_n_argument_29224});})();
(void)((this->_n_last_29124=_n_time_29166));
{for(;d::truth((_n_dt_29168>1e-9));(void)((_n_dt_29168=(_n_dt_29168-0.05)))){d::check_cancel();(void)(([&](){auto _n_argument_29225=d::minimum({_n_dt_29168,0.05});auto _n_argument_29226=(20.0+_n_time_29166);return this->_n_step_29123(_n_argument_29225,_n_argument_29226);})());
}}
d::Array<d::Array<d::String,false>,false> _n_g_29169=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_29112,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_29111)).fill(d::String(u" "));}));
auto _n_draw_29170=[&]( double _a0) mutable ->void{double _n_li_29171=_a0;
{
for(auto &&_n_item_29227:this->_n_flakes_29120){d::check_cancel();std::shared_ptr<_n_Record_29121> _n_f_29172=_n_item_29227;
{
double _n_r_29173=std::floor(_n_f_29172->_p_y);
double _n_c_29174=std::floor(_n_f_29172->_p_x);
if(((d::truth((_n_f_29172->_p_li!=_n_li_29171))||d::truth((_n_r_29173<0.0)))||d::truth((_n_r_29173>=this->_n_rows_29112)))){d::check_cancel();continue;
}
double _n_k_29175=d::findIndex(_n_LAYERS_29107,[&]( std::shared_ptr<_n_Record_29108> _a0) mutable ->bool{std::shared_ptr<_n_Record_29108> _n_L_29176=_a0;
return (_n_L_29176->_p_glyph==d::at(d::at(_n_g_29169,_n_r_29173),_n_c_29174));});
if((d::truth((d::at(d::at(_n_g_29169,_n_r_29173),_n_c_29174)==d::String(u" ")))||d::truth(([&]()->bool{auto _n_logical_29228=(_n_k_29175>=0.0);return d::truth(_n_logical_29228)?(_n_k_29175<_n_li_29171):_n_logical_29228;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_29229=d::at(_n_g_29169,_n_r_29173);auto _n_index_29230=_n_c_29174;auto _n_value_29231=d::at(_n_LAYERS_29107,_n_li_29171)->_p_glyph;d::put(_n_array_29229,_n_index_29230,_n_value_29231);return _n_value_29231;})());
}

}
}

}
};
(void)(_n_draw_29170(0.0));
(void)(d::forEach(_n_RAILS_29105,[&]( double _a0,double _a1) mutable ->void{double _n_r_29177=_a0;
double _n_k_29178=_a1;
{
{double _n_c_29179=(d::at(_n_POSTS_29103,0.0)+1.0);
for(;d::truth((_n_c_29179<d::at(_n_POSTS_29103,(double(_n_POSTS_29103.size())-1.0))));(void)((_n_c_29179++))){d::check_cancel();(void)(([&](){auto&& _n_array_29232=d::at(_n_g_29169,_n_r_29177);auto _n_index_29233=_n_c_29179;auto _n_value_29234=d::at(_n_EIGHTHS_29101,(_n_RAIL_29106+std::floor(d::at(d::at(this->_n_rail_29117,_n_k_29178),_n_c_29179))));d::put(_n_array_29232,_n_index_29233,_n_value_29234);return _n_value_29234;})());
}}

}
}));
(void)(d::forEach(_n_POSTS_29103,[&]( double _a0,double _a1) mutable ->void{double _n_c_29180=_a0;
double _n_p_29181=_a1;
{
{double _n_r_29182=_n_TOP_29104;
for(;d::truth((_n_r_29182<this->_n_rows_29112));(void)((_n_r_29182++))){d::check_cancel();(void)(([&](){auto&& _n_array_29235=d::at(_n_g_29169,_n_r_29182);auto _n_index_29236=_n_c_29180;auto _n_value_29237=d::String(u"┃");d::put(_n_array_29235,_n_index_29236,_n_value_29237);return _n_value_29237;})());
}}
double _n_n_29183=std::floor(d::at(this->_n_cap_29118,_n_p_29181));
(void)(([&](){auto&& _n_array_29238=d::at(_n_g_29169,(_n_TOP_29104-1.0));auto _n_index_29239=_n_c_29180;auto _n_value_29240=d::at(_n_EIGHTHS_29101,([&](){auto _n_argument_29241=8.0;auto _n_argument_29242=(1.0+std::floor((_n_n_29183/2.0)));return d::minimum({_n_argument_29241,_n_argument_29242});})());d::put(_n_array_29238,_n_index_29239,_n_value_29240);return _n_value_29240;})());
if(d::truth((_n_n_29183>8.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29243=d::at(_n_g_29169,(_n_TOP_29104-1.0));auto _n_index_29244=(_n_c_29180-1.0);auto _n_value_29245=([&](){auto&& _n_array_29246=d::at(_n_g_29169,(_n_TOP_29104-1.0));auto _n_index_29247=(_n_c_29180+1.0);auto _n_value_29248=d::at(_n_EIGHTHS_29101,(_n_n_29183-8.0));d::put(_n_array_29246,_n_index_29247,_n_value_29248);return _n_value_29248;})();d::put(_n_array_29243,_n_index_29244,_n_value_29245);return _n_value_29245;})());
}

}
}));
d::Array<double,false> _n_top_29184=d::Array<double,false>(d::from(this->_n_cols_29111,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29186=_a1;
return ((this->_n_rows_29112-d::at(this->_n_ground_29114,_n_c_29186))-d::at(this->_n_extra_29115,_n_c_29186));}));
{double _n_c_29187=0.0;
for(;d::truth((_n_c_29187<this->_n_cols_29111));(void)((_n_c_29187++))){d::check_cancel();double _n_s_29188=d::at(_n_top_29184,_n_c_29187);
double _n_r_29189=std::floor(_n_s_29188);
double _n_f_29190=(_n_s_29188-_n_r_29189);
{double _n_rr_29191=(_n_r_29189+1.0);
for(;d::truth((_n_rr_29191<this->_n_rows_29112));(void)((_n_rr_29191++))){d::check_cancel();(void)(([&](){auto&& _n_array_29249=d::at(_n_g_29169,_n_rr_29191);auto _n_index_29250=_n_c_29187;auto _n_value_29251=(d::truth(_n_paper_29167)?d::String(u"░"):d::String(u"█"));d::put(_n_array_29249,_n_index_29250,_n_value_29251);return _n_value_29251;})());
}}
if(d::truth(_n_paper_29167)){d::check_cancel();(void)(([&](){auto&& _n_array_29252=d::at(_n_g_29169,_n_r_29189);auto _n_index_29253=_n_c_29187;auto _n_value_29254=d::at(_n_LINE_29102,([&](){auto _n_argument_29255=2.0;auto _n_argument_29256=std::floor((_n_f_29190*3.0));return d::minimum({_n_argument_29255,_n_argument_29256});})());d::put(_n_array_29252,_n_index_29253,_n_value_29254);return _n_value_29254;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_29257=d::at(_n_g_29169,_n_r_29189);auto _n_index_29258=_n_c_29187;auto _n_value_29259=d::at(_n_EIGHTHS_29101,([&](){auto _n_argument_29260=1.0;auto _n_argument_29261=d::round(((1.0-_n_f_29190)*8.0));return d::maximum({_n_argument_29260,_n_argument_29261});})());d::put(_n_array_29257,_n_index_29258,_n_value_29259);return _n_value_29259;})());
}
}}
if(d::truth(_n_paper_29167)){d::check_cancel();{double _n_c_29192=0.0;
for(;d::truth(((_n_c_29192+1.0)<this->_n_cols_29111));(void)((_n_c_29192++))){d::check_cancel();double _n_a_29193=std::floor(d::at(_n_top_29184,_n_c_29192));
double _n_b_29194=std::floor(d::at(_n_top_29184,(_n_c_29192+1.0)));
{double _n_r_29195=(_n_a_29193+1.0);
for(;d::truth((_n_r_29195<_n_b_29194));(void)((_n_r_29195++))){d::check_cancel();(void)(([&](){auto&& _n_array_29262=d::at(_n_g_29169,_n_r_29195);auto _n_index_29263=(_n_c_29192+1.0);auto _n_value_29264=d::String(u"▏");d::put(_n_array_29262,_n_index_29263,_n_value_29264);return _n_value_29264;})());
}}
{double _n_r_29196=(_n_b_29194+1.0);
for(;d::truth((_n_r_29196<_n_a_29193));(void)((_n_r_29196++))){d::check_cancel();(void)(([&](){auto&& _n_array_29265=d::at(_n_g_29169,_n_r_29196);auto _n_index_29266=_n_c_29192;auto _n_value_29267=d::String(u"▕");d::put(_n_array_29265,_n_index_29266,_n_value_29267);return _n_value_29267;})());
}}
}}
}
(void)(_n_draw_29170(1.0));
(void)(_n_draw_29170(2.0));
return d::join(d::map(_n_g_29169,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_29197=_a0;
return d::join(_n_row_29197,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("snowfall").cols)*ascii::catalog_meta("snowfall").rows);auto _env=std::make_shared<_n_Record_29198>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &snowfall_meta(){return catalog_meta("snowfall");}
std::unique_ptr<Piece> make_snowfall(const AsciiPieceOptions &o){return std::make_unique<Native_snowfall>(o);}
}
