// Direct, statically typed C++ from src/pieces/snowfall.ts (ascii.rest, MIT).
#include "../direct.hpp"
#include "../catalog.hpp"
namespace ascii {namespace {namespace d=ascii::direct;
struct _n_Record_29101;
struct _n_Record_29109;
struct _n_Record_29122;
struct _n_Record_29199;
struct _n_Record_29219;
struct _n_Record_29101{
d::String _p_name{};
d::String _p_category{};
d::String _p_note{};
double _p_cols{};
double _p_rows{};
double _p_fps{};
static std::shared_ptr<_n_Record_29101> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29101>();out->_p_name=d::decode<d::String>(j["name"]);out->_p_category=d::decode<d::String>(j["category"]);out->_p_note=d::decode<d::String>(j["note"]);out->_p_cols=d::decode<double>(j["cols"]);out->_p_rows=d::decode<double>(j["rows"]);out->_p_fps=d::decode<double>(j["fps"]);return out;}
};
struct _n_Record_29109{
double _p_n{};
double _p_v{};
double _p_wind{};
double _p_sway{};
d::String _p_glyph{};
static std::shared_ptr<_n_Record_29109> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29109>();out->_p_n=d::decode<double>(j["n"]);out->_p_v=d::decode<double>(j["v"]);out->_p_wind=d::decode<double>(j["wind"]);out->_p_sway=d::decode<double>(j["sway"]);out->_p_glyph=d::decode<d::String>(j["glyph"]);return out;}
};
struct _n_Record_29122{
double _p_li{};
double _p_x{};
double _p_y{};
double _p_ph{};
double _p_w{};
static std::shared_ptr<_n_Record_29122> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29122>();out->_p_li=d::decode<double>(j["li"]);out->_p_x=d::decode<double>(j["x"]);out->_p_y=d::decode<double>(j["y"]);out->_p_ph=d::decode<double>(j["ph"]);out->_p_w=d::decode<double>(j["w"]);return out;}
};
struct _n_Record_29199{
std::optional<bool> _p_paper{};
std::optional<d::Array<uint8_t,true>> _p_color{};
static std::shared_ptr<_n_Record_29199> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29199>();out->_p_paper=d::decode<std::optional<bool>>(j["paper"]);out->_p_color=d::decode<std::optional<d::Array<uint8_t,true>>>(j["color"]);return out;}
};
struct _n_Record_29219{
double _p_li{};
static std::shared_ptr<_n_Record_29219> decode(const ascii::Json &j){auto out=std::make_shared<_n_Record_29219>();out->_p_li=d::decode<double>(j["li"]);return out;}
};
std::function<double()> _n_mulberry32_29110(double _a0);
double _n_smooth_29111(double _a0,double _a1,double _a2);
std::shared_ptr<_n_Record_29101> _n_meta_29100=[](){return ([&](){auto _n_object_29202=std::make_shared<_n_Record_29101>();_n_object_29202->_p_name=d::String(u"snowfall");_n_object_29202->_p_category=d::String(u"nature");_n_object_29202->_p_note=d::String(u"snow swaying down, building drifts on the ground and a fence");_n_object_29202->_p_cols=64.0;_n_object_29202->_p_rows=22.0;_n_object_29202->_p_fps=20.0;return _n_object_29202;})();}();
const d::String _n_EIGHTHS_29102=[](){return d::String(u" ▁▂▃▄▅▆▇█");}();
const d::String _n_LINE_29103=[](){return d::String(u"▔─▁");}();
d::Array<double,false> _n_POSTS_29104=[](){return d::Array<double,false>{9.0,20.0,31.0,42.0};}();
const double _n_TOP_29105=[](){return 10.0;}();
d::Array<double,false> _n_RAILS_29106=[](){return d::Array<double,false>{11.0,14.0};}();
const double _n_RAIL_29107=[](){return 2.0;}();
d::Array<std::shared_ptr<_n_Record_29109>,false> _n_LAYERS_29108=[](){return d::Array<std::shared_ptr<_n_Record_29109>,false>{([&](){auto _n_object_29205=std::make_shared<_n_Record_29109>();_n_object_29205->_p_n=44.0;_n_object_29205->_p_v=1.1;_n_object_29205->_p_wind=0.6;_n_object_29205->_p_sway=0.5;_n_object_29205->_p_glyph=d::String(u".");return _n_object_29205;})(),([&](){auto _n_object_29207=std::make_shared<_n_Record_29109>();_n_object_29207->_p_n=30.0;_n_object_29207->_p_v=1.8;_n_object_29207->_p_wind=1.1;_n_object_29207->_p_sway=1.0;_n_object_29207->_p_glyph=d::String(u"+");return _n_object_29207;})(),([&](){auto _n_object_29209=std::make_shared<_n_Record_29109>();_n_object_29209->_p_n=13.0;_n_object_29209->_p_v=2.8;_n_object_29209->_p_wind=1.8;_n_object_29209->_p_sway=1.6;_n_object_29209->_p_glyph=d::String(u"*");return _n_object_29209;})()};}();
std::function<double()> _n_mulberry32_29110(double _a0){double _n_a_29126=_a0;
{
return [=]( ) mutable ->double{{
(void)((_n_a_29126=double(d::i32((_n_a_29126+1831565813.0))|d::i32(0.0))));
double _n_t_29127=d::imul(double(d::i32(_n_a_29126)^d::i32(double(d::u32(_n_a_29126)>>(d::u32(15.0)&31)))),double(d::i32(1.0)|d::i32(_n_a_29126)));
(void)((_n_t_29127=double(d::i32((_n_t_29127+d::imul(double(d::i32(_n_t_29127)^d::i32(double(d::u32(_n_t_29127)>>(d::u32(7.0)&31)))),double(d::i32(61.0)|d::i32(_n_t_29127)))))^d::i32(_n_t_29127))));
return (double(d::u32(double(d::i32(_n_t_29127)^d::i32(double(d::u32(_n_t_29127)>>(d::u32(14.0)&31)))))>>(d::u32(0.0)&31))/4294967296.0);

}
};

}
}

double _n_smooth_29111(double _a0,double _a1,double _a2){double _n_a_29128=_a0;
double _n_b_29129=_a1;
double _n_x_29130=_a2;
{
double _n_u_29131=([&](){auto _n_argument_29210=1.0;auto _n_argument_29211=d::maximum({0.0,((_n_x_29130-_n_a_29128)/(_n_b_29129-_n_a_29128))});return d::minimum({_n_argument_29210,_n_argument_29211});})();
return ((_n_u_29131*_n_u_29131)*(3.0-(2.0*_n_u_29131)));

}
}

struct Native_snowfall final:ascii::Piece{
double _n_cols_29112{};
double _n_rows_29113{};
std::function<double()> _n_rand_29114{};
d::Array<double,true> _n_ground_29115{};
d::Array<double,true> _n_extra_29116{};
d::Array<double,true> _n_wind_29117{};
d::Array<d::Array<double,true>,false> _n_rail_29118{};
d::Array<double,true> _n_cap_29119{};
d::Array<std::shared_ptr<_n_Record_29122>,false> _n_flakes_29121{};
double _n_last_29125{};
std::function<d::String(double,std::shared_ptr<_n_Record_29199>)> _render;
bool _n_inFence_29120(double _a0){double _n_c_29141=_a0;
return ([&]()->bool{auto _n_logical_29269=(_n_c_29141>d::at(_n_POSTS_29104,0.0));return d::truth(_n_logical_29269)?(_n_c_29141<d::at(_n_POSTS_29104,(double(_n_POSTS_29104.size())-1.0))):_n_logical_29269;})();}

void _n_spawn_29123(std::shared_ptr<_n_Record_29122> _a0,bool _a1){std::shared_ptr<_n_Record_29122> _n_f_29142=_a0;
bool _n_top_29143=_a1;
{
(void)((_n_f_29142->_p_x=(this->_n_rand_29114()*this->_n_cols_29112)));
(void)((_n_f_29142->_p_y=(d::truth(_n_top_29143)?((-d::number(this->_n_rand_29114()))*2.0):(this->_n_rand_29114()*this->_n_rows_29113))));
(void)((_n_f_29142->_p_ph=(this->_n_rand_29114()*6.283)));
(void)((_n_f_29142->_p_w=(0.8+(this->_n_rand_29114()*0.45))));

}
}

void _n_step_29124(double _a0,double _a1){double _n_dt_29148=_a0;
double _n_t_29149=_a1;
{
for(auto &&_n_item_29270:this->_n_flakes_29121){d::check_cancel();std::shared_ptr<_n_Record_29122> _n_f_29150=_n_item_29270;
{
std::shared_ptr<_n_Record_29109> _n_L_29151=d::at(_n_LAYERS_29108,_n_f_29150->_p_li);
double _n_y0_29152=_n_f_29150->_p_y;
(void)((_n_f_29150->_p_y=(_n_f_29150->_p_y+((_n_L_29151->_p_v*_n_f_29150->_p_w)*_n_dt_29148))));
(void)((_n_f_29150->_p_x=d::mod((d::mod((_n_f_29150->_p_x+((_n_L_29151->_p_wind+(_n_L_29151->_p_sway*std::cos((((_n_t_29149*_n_f_29150->_p_w)*1.3)+_n_f_29150->_p_ph))))*_n_dt_29148)),this->_n_cols_29112)+this->_n_cols_29112),this->_n_cols_29112)));
double _n_c_29153=std::floor(_n_f_29150->_p_x);
if(d::truth((_n_f_29150->_p_li==1.0))){d::check_cancel();double _n_k_29154=d::findIndex(_n_RAILS_29106,[&]( double _a0) mutable ->bool{double _n_r_29155=_a0;
return ([&]()->bool{auto _n_logical_29271=(_n_y0_29152<(_n_r_29155+0.5));return d::truth(_n_logical_29271)?(_n_f_29150->_p_y>=(_n_r_29155+0.5)):_n_logical_29271;})();});
if((((d::truth((_n_k_29154>=0.0))&&d::truth(this->_n_inFence_29120(_n_c_29153)))&&d::truth((!d::truth(_n_POSTS_29104.includes(_n_c_29153)))))&&d::truth((this->_n_rand_29114()<0.7)))){d::check_cancel();for(auto &&_n_item_29272:d::Array<d::Array<double,false>,false>{d::Array<double,false>{(-d::number(1.0)),0.3},d::Array<double,false>{0.0,0.6},d::Array<double,false>{1.0,0.3}}){d::check_cancel();auto _n_binding_29273=_n_item_29272;
double _n_d_29156=d::at(_n_binding_29273,0.0);
double _n_a_29157=d::at(_n_binding_29273,1.0);
(void)(([&](){auto&& _n_array_29274=d::at(this->_n_rail_29118,_n_k_29154);auto _n_index_29275=(_n_c_29153+_n_d_29156);auto _n_value_29276=d::minimum({5.0,(d::at(d::at(this->_n_rail_29118,_n_k_29154),(_n_c_29153+_n_d_29156))+_n_a_29157)});d::put(_n_array_29274,_n_index_29275,_n_value_29276);return _n_value_29276;})());
}
(void)(this->_n_spawn_29123(_n_f_29150,true));
continue;
}
double _n_p_29158=_n_POSTS_29104.indexOf(_n_c_29153);
if(((d::truth((_n_p_29158>=0.0))&&d::truth((_n_y0_29152<_n_TOP_29105)))&&d::truth((_n_f_29150->_p_y>=_n_TOP_29105)))){d::check_cancel();(void)(([&](){auto&& _n_array_29277=this->_n_cap_29119;auto _n_index_29278=_n_p_29158;auto _n_value_29279=d::minimum({13.0,(d::at(this->_n_cap_29119,_n_p_29158)+1.0)});d::put(_n_array_29277,_n_index_29278,_n_value_29279);return _n_value_29279;})());
(void)(this->_n_spawn_29123(_n_f_29150,true));
continue;
}
}
if(d::truth((_n_f_29150->_p_y<((this->_n_rows_29113-d::at(this->_n_ground_29115,_n_c_29153))-d::at(this->_n_extra_29116,_n_c_29153))))){d::check_cancel();continue;
}
if(d::truth((_n_f_29150->_p_li>0.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29280=this->_n_extra_29116;auto _n_index_29281=_n_c_29153;auto _n_value_29282=(d::at(_n_array_29280,_n_index_29281)+(0.3*d::at(this->_n_wind_29117,_n_c_29153)));d::put(_n_array_29280,_n_index_29281,_n_value_29282);return _n_value_29282;})());
}
(void)(this->_n_spawn_29123(_n_f_29150,true));

}
}
d::Array<double,true> _n_next_29159=d::Array<double,true>(d::map(this->_n_extra_29116,[&]( double _a0,double _a1) mutable ->double{double _n_e_29160=_a0;
double _n_c_29161=_a1;
return (_n_e_29160+((1.5*_n_dt_29148)*((([&]()->double{auto _n_logical_29283=d::at(this->_n_extra_29116,(_n_c_29161-1.0));return d::has(this->_n_extra_29116,(_n_c_29161-1.0))?_n_logical_29283:_n_e_29160;})()+([&]()->double{auto _n_logical_29284=d::at(this->_n_extra_29116,(_n_c_29161+1.0));return d::has(this->_n_extra_29116,(_n_c_29161+1.0))?_n_logical_29284:_n_e_29160;})())-(2.0*_n_e_29160))));}));
{double _n_c_29162=0.0;
for(;d::truth((_n_c_29162<this->_n_cols_29112));(void)((_n_c_29162++))){d::check_cancel();(void)(([&](){auto&& _n_array_29285=this->_n_extra_29116;auto _n_index_29286=_n_c_29162;auto _n_value_29287=(d::at(_n_next_29159,_n_c_29162)*(1.0-(0.02*_n_dt_29148)));d::put(_n_array_29285,_n_index_29286,_n_value_29287);return _n_value_29287;})());
}}
for(auto &&_n_item_29288:this->_n_rail_29118){d::check_cancel();d::Array<double,true> _n_r_29163=_n_item_29288;
{double _n_c_29164=0.0;
for(;d::truth((_n_c_29164<this->_n_cols_29112));(void)((_n_c_29164++))){d::check_cancel();(void)(([&](){auto&& _n_array_29289=_n_r_29163;auto _n_index_29290=_n_c_29164;auto _n_value_29291=(d::at(_n_array_29289,_n_index_29290)-((d::at(_n_r_29163,_n_c_29164)*0.004)*_n_dt_29148));d::put(_n_array_29289,_n_index_29290,_n_value_29291);return _n_value_29291;})());
}}
}
{double _n_p_29165=0.0;
for(;d::truth((_n_p_29165<double(this->_n_cap_29119.size())));(void)((_n_p_29165++))){d::check_cancel();(void)(([&](){auto&& _n_array_29292=this->_n_cap_29119;auto _n_index_29293=_n_p_29165;auto _n_value_29294=(d::at(_n_array_29292,_n_index_29293)-((d::at(this->_n_cap_29119,_n_p_29165)*0.01)*_n_dt_29148));d::put(_n_array_29292,_n_index_29293,_n_value_29294);return _n_value_29294;})());
}}

}
}

explicit Native_snowfall(const AsciiPieceOptions &_input){ascii::Options _options(_input);
auto _n_binding_29212=_n_meta_29100;
this->_n_cols_29112=_n_binding_29212->_p_cols;
this->_n_rows_29113=_n_binding_29212->_p_rows;
this->_n_rand_29114=_n_mulberry32_29110(7.0);
this->_n_ground_29115=d::Array<double,true>(d::from(this->_n_cols_29112,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29133=_a1;
{
double _n_lee_29134=([&](){auto _n_left_29213=(3.6*_n_smooth_29111(36.0,55.0,_n_c_29133));auto _n_right_29214=(1.0-_n_smooth_29111(55.0,59.0,_n_c_29133));return (_n_left_29213*_n_right_29214);})();
return (([&](){auto _n_left_29215=(1.0+(0.55*std::sin(((_n_c_29133*0.19)+1.3))));auto _n_right_29216=(0.3*std::sin(((_n_c_29133*0.47)+0.4)));return (_n_left_29215+_n_right_29216);})()+_n_lee_29134);

}
}));
this->_n_extra_29116=d::Array<double,true>(size_t(this->_n_cols_29112)).fill(0.3);
this->_n_wind_29117=d::Array<double,true>(d::from(this->_n_cols_29112,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29136=_a1;
return (0.7+(1.6*std::exp((-d::number(std::pow(((_n_c_29136-52.0)/7.0),2.0))))));}));
this->_n_rail_29118=d::map(_n_RAILS_29106,[&]( double _a0,double _a1) mutable ->d::Array<double,true>{double _n___29137=_a0;
double _n_k_29138=_a1;
return d::Array<double,true>(d::from(this->_n_cols_29112,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29140=_a1;
return ([&](){auto _n_left_29217=(2.0+(0.7*std::sin(((_n_c_29140*0.45)+(_n_k_29138*2.0)))));auto _n_right_29218=(0.4*this->_n_rand_29114());return (_n_left_29217+_n_right_29218);})();}));});
this->_n_cap_29119=d::Array<double,true>(size_t(double(_n_POSTS_29104.size()))).fill(7.0);
this->_n_flakes_29121=d::Array<std::shared_ptr<_n_Record_29122>,false>{};
(void)(d::forEach(_n_LAYERS_29108,[&]( std::shared_ptr<_n_Record_29109> _a0,double _a1) mutable ->void{std::shared_ptr<_n_Record_29109> _n_L_29144=_a0;
double _n_li_29145=_a1;
{
{double _n_i_29146=0.0;
for(;d::truth((_n_i_29146<_n_L_29144->_p_n));(void)((_n_i_29146++))){d::check_cancel();std::shared_ptr<_n_Record_29122> _n_f_29147=([&](){auto _n_object_29220=std::make_shared<_n_Record_29122>();_n_object_29220->_p_li=_n_li_29145;return _n_object_29220;})();
(void)(this->_n_spawn_29123(_n_f_29147,false));
(void)(this->_n_flakes_29121.push(_n_f_29147));
}}

}
}));
{double _n_i_29166=0.0;
for(;d::truth((_n_i_29166<400.0));(void)((_n_i_29166++))){d::check_cancel();(void)(this->_n_step_29124(0.05,(_n_i_29166*0.05)));
}}
this->_n_last_29125=0.0;
_render=[=]( double _a0,std::shared_ptr<_n_Record_29199> _a1) mutable ->d::String{double _n_time_29167=_a0;
auto _n_binding_29223=(d::present(_a1)?_a1:([&](){auto _n_object_29222=std::make_shared<_n_Record_29199>();return _n_object_29222;})());
bool _n_paper_29168=(d::present(_n_binding_29223->_p_paper)?d::read(_n_binding_29223->_p_paper):false);
{
double _n_dt_29169=([&](){auto _n_argument_29224=0.1;auto _n_argument_29225=d::maximum({0.0,(_n_time_29167-this->_n_last_29125)});return d::minimum({_n_argument_29224,_n_argument_29225});})();
(void)((this->_n_last_29125=_n_time_29167));
{for(;d::truth((_n_dt_29169>1e-9));(void)((_n_dt_29169=(_n_dt_29169-0.05)))){d::check_cancel();(void)(([&](){auto _n_argument_29226=d::minimum({_n_dt_29169,0.05});auto _n_argument_29227=(20.0+_n_time_29167);return this->_n_step_29124(_n_argument_29226,_n_argument_29227);})());
}}
d::Array<d::Array<d::String,false>,false> _n_g_29170=d::Array<d::Array<d::String,false>,false>(d::from(this->_n_rows_29113,[&]( ) mutable ->d::Array<d::String,false>{return d::Array<d::String,false>(size_t(this->_n_cols_29112)).fill(d::String(u" "));}));
auto _n_draw_29171=[&]( double _a0) mutable ->void{double _n_li_29172=_a0;
{
for(auto &&_n_item_29228:this->_n_flakes_29121){d::check_cancel();std::shared_ptr<_n_Record_29122> _n_f_29173=_n_item_29228;
{
double _n_r_29174=std::floor(_n_f_29173->_p_y);
double _n_c_29175=std::floor(_n_f_29173->_p_x);
if(((d::truth((_n_f_29173->_p_li!=_n_li_29172))||d::truth((_n_r_29174<0.0)))||d::truth((_n_r_29174>=this->_n_rows_29113)))){d::check_cancel();continue;
}
double _n_k_29176=d::findIndex(_n_LAYERS_29108,[&]( std::shared_ptr<_n_Record_29109> _a0) mutable ->bool{std::shared_ptr<_n_Record_29109> _n_L_29177=_a0;
return (_n_L_29177->_p_glyph==d::at(d::at(_n_g_29170,_n_r_29174),_n_c_29175));});
if((d::truth((d::at(d::at(_n_g_29170,_n_r_29174),_n_c_29175)==d::String(u" ")))||d::truth(([&]()->bool{auto _n_logical_29229=(_n_k_29176>=0.0);return d::truth(_n_logical_29229)?(_n_k_29176<_n_li_29172):_n_logical_29229;})()))){d::check_cancel();(void)(([&](){auto&& _n_array_29230=d::at(_n_g_29170,_n_r_29174);auto _n_index_29231=_n_c_29175;auto _n_value_29232=d::at(_n_LAYERS_29108,_n_li_29172)->_p_glyph;d::put(_n_array_29230,_n_index_29231,_n_value_29232);return _n_value_29232;})());
}

}
}

}
};
(void)(_n_draw_29171(0.0));
(void)(d::forEach(_n_RAILS_29106,[&]( double _a0,double _a1) mutable ->void{double _n_r_29178=_a0;
double _n_k_29179=_a1;
{
{double _n_c_29180=(d::at(_n_POSTS_29104,0.0)+1.0);
for(;d::truth((_n_c_29180<d::at(_n_POSTS_29104,(double(_n_POSTS_29104.size())-1.0))));(void)((_n_c_29180++))){d::check_cancel();(void)(([&](){auto&& _n_array_29233=d::at(_n_g_29170,_n_r_29178);auto _n_index_29234=_n_c_29180;auto _n_value_29235=d::at(_n_EIGHTHS_29102,(_n_RAIL_29107+std::floor(d::at(d::at(this->_n_rail_29118,_n_k_29179),_n_c_29180))));d::put(_n_array_29233,_n_index_29234,_n_value_29235);return _n_value_29235;})());
}}

}
}));
(void)(d::forEach(_n_POSTS_29104,[&]( double _a0,double _a1) mutable ->void{double _n_c_29181=_a0;
double _n_p_29182=_a1;
{
{double _n_r_29183=_n_TOP_29105;
for(;d::truth((_n_r_29183<this->_n_rows_29113));(void)((_n_r_29183++))){d::check_cancel();(void)(([&](){auto&& _n_array_29236=d::at(_n_g_29170,_n_r_29183);auto _n_index_29237=_n_c_29181;auto _n_value_29238=d::String(u"┃");d::put(_n_array_29236,_n_index_29237,_n_value_29238);return _n_value_29238;})());
}}
double _n_n_29184=std::floor(d::at(this->_n_cap_29119,_n_p_29182));
(void)(([&](){auto&& _n_array_29239=d::at(_n_g_29170,(_n_TOP_29105-1.0));auto _n_index_29240=_n_c_29181;auto _n_value_29241=d::at(_n_EIGHTHS_29102,([&](){auto _n_argument_29242=8.0;auto _n_argument_29243=(1.0+std::floor((_n_n_29184/2.0)));return d::minimum({_n_argument_29242,_n_argument_29243});})());d::put(_n_array_29239,_n_index_29240,_n_value_29241);return _n_value_29241;})());
if(d::truth((_n_n_29184>8.0))){d::check_cancel();(void)(([&](){auto&& _n_array_29244=d::at(_n_g_29170,(_n_TOP_29105-1.0));auto _n_index_29245=(_n_c_29181-1.0);auto _n_value_29246=([&](){auto&& _n_array_29247=d::at(_n_g_29170,(_n_TOP_29105-1.0));auto _n_index_29248=(_n_c_29181+1.0);auto _n_value_29249=d::at(_n_EIGHTHS_29102,(_n_n_29184-8.0));d::put(_n_array_29247,_n_index_29248,_n_value_29249);return _n_value_29249;})();d::put(_n_array_29244,_n_index_29245,_n_value_29246);return _n_value_29246;})());
}

}
}));
d::Array<double,false> _n_top_29185=d::Array<double,false>(d::from(this->_n_cols_29112,[&]( d::Nil _a0,double _a1) mutable ->double{double _n_c_29187=_a1;
return ((this->_n_rows_29113-d::at(this->_n_ground_29115,_n_c_29187))-d::at(this->_n_extra_29116,_n_c_29187));}));
{double _n_c_29188=0.0;
for(;d::truth((_n_c_29188<this->_n_cols_29112));(void)((_n_c_29188++))){d::check_cancel();double _n_s_29189=d::at(_n_top_29185,_n_c_29188);
double _n_r_29190=std::floor(_n_s_29189);
double _n_f_29191=(_n_s_29189-_n_r_29190);
{double _n_rr_29192=(_n_r_29190+1.0);
for(;d::truth((_n_rr_29192<this->_n_rows_29113));(void)((_n_rr_29192++))){d::check_cancel();(void)(([&](){auto&& _n_array_29250=d::at(_n_g_29170,_n_rr_29192);auto _n_index_29251=_n_c_29188;auto _n_value_29252=(d::truth(_n_paper_29168)?d::String(u"░"):d::String(u"█"));d::put(_n_array_29250,_n_index_29251,_n_value_29252);return _n_value_29252;})());
}}
if(d::truth(_n_paper_29168)){d::check_cancel();(void)(([&](){auto&& _n_array_29253=d::at(_n_g_29170,_n_r_29190);auto _n_index_29254=_n_c_29188;auto _n_value_29255=d::at(_n_LINE_29103,([&](){auto _n_argument_29256=2.0;auto _n_argument_29257=std::floor((_n_f_29191*3.0));return d::minimum({_n_argument_29256,_n_argument_29257});})());d::put(_n_array_29253,_n_index_29254,_n_value_29255);return _n_value_29255;})());
}else {d::check_cancel();(void)(([&](){auto&& _n_array_29258=d::at(_n_g_29170,_n_r_29190);auto _n_index_29259=_n_c_29188;auto _n_value_29260=d::at(_n_EIGHTHS_29102,([&](){auto _n_argument_29261=1.0;auto _n_argument_29262=d::round(((1.0-_n_f_29191)*8.0));return d::maximum({_n_argument_29261,_n_argument_29262});})());d::put(_n_array_29258,_n_index_29259,_n_value_29260);return _n_value_29260;})());
}
}}
if(d::truth(_n_paper_29168)){d::check_cancel();{double _n_c_29193=0.0;
for(;d::truth(((_n_c_29193+1.0)<this->_n_cols_29112));(void)((_n_c_29193++))){d::check_cancel();double _n_a_29194=std::floor(d::at(_n_top_29185,_n_c_29193));
double _n_b_29195=std::floor(d::at(_n_top_29185,(_n_c_29193+1.0)));
{double _n_r_29196=(_n_a_29194+1.0);
for(;d::truth((_n_r_29196<_n_b_29195));(void)((_n_r_29196++))){d::check_cancel();(void)(([&](){auto&& _n_array_29263=d::at(_n_g_29170,_n_r_29196);auto _n_index_29264=(_n_c_29193+1.0);auto _n_value_29265=d::String(u"▏");d::put(_n_array_29263,_n_index_29264,_n_value_29265);return _n_value_29265;})());
}}
{double _n_r_29197=(_n_b_29195+1.0);
for(;d::truth((_n_r_29197<_n_a_29194));(void)((_n_r_29197++))){d::check_cancel();(void)(([&](){auto&& _n_array_29266=d::at(_n_g_29170,_n_r_29197);auto _n_index_29267=_n_c_29193;auto _n_value_29268=d::String(u"▕");d::put(_n_array_29266,_n_index_29267,_n_value_29268);return _n_value_29268;})());
}}
}}
}
(void)(_n_draw_29171(1.0));
(void)(_n_draw_29171(2.0));
return d::join(d::map(_n_g_29170,[&]( d::Array<d::String,false> _a0) mutable ->d::String{d::Array<d::String,false> _n_row_29198=_a0;
return d::join(_n_row_29198,d::String(u""));}),d::String(u"\n"));

}
};
}
void frame(double t,bool paper,bool colored)override{if(colored)colors.resize(size_t(ascii::catalog_meta("snowfall").cols)*ascii::catalog_meta("snowfall").rows);auto _env=std::make_shared<_n_Record_29199>();_env->_p_paper=paper;if(colored){auto _indices=d::Array<uint8_t,true>();_indices.storage=std::shared_ptr<std::vector<uint8_t>>(&colors,[](auto*){});_env->_p_color=_indices;}text=_render(t,_env);if(!colored)colors.clear();}
};
}
const AsciiPieceMeta &snowfall_meta(){return catalog_meta("snowfall");}
std::unique_ptr<Piece> make_snowfall(const AsciiPieceOptions &o){return std::make_unique<Native_snowfall>(o);}
}
