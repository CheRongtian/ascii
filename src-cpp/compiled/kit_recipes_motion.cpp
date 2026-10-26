// Native source generated from src/kit/recipes/motion.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_recipes_motion final:j::Module {
j::Cell _v_64932_Surface;
j::Cell _v_64933_TAU;
j::Cell _v_64934_fail;
j::Cell _v_64935_crop;
j::Cell _v_64936_layer;
j::Cell _v_64937_effect;
j::Cell _v_64938_shake;
j::Cell _v_64939_mirror;
j::Cell _v_64940_group;
j::Cell _v_64941_orbit;
j::Cell _v_64942_scene;
j::Cell _v_64943_sphere;
j::Cell _v_64944_torus;
j::Cell _v_64945_NAMING;
j::Cell _v_64946_boolOf;
j::Cell _v_64947_colorOf;
j::Cell _v_64948_easeOf;
j::Cell _v_64949_is3d;
j::Cell _v_64950_numberOf;
j::Cell _v_64951_optionsOf;
j::Cell _v_64952_secondsOf;
j::Cell _v_64953_show;
j::Cell _v_64954_sizeOf;
j::Cell _v_64955_titled;
j::Cell _v_64956_wordOf;
j::Cell _v_64957_loopFor;
j::Cell _v_64958_pieceOf;
j::Cell _v_64959_withLoop;
j::Cell _v_64960_MOTION;
j::Cell _v_64961_named;
j::Cell _v_64966_shapes;
j::Cell _v_64969_drawScaled;
j::Cell _v_64987_phaseAt;
j::Cell _v_64991_spinning;
j::Cell _v_65021_orbiting;
j::Cell _v_65053_bouncing;
j::Cell _v_65071_floating;
j::Cell _v_65084_swaying;
j::Cell _v_65104_pulsing;
j::Cell _v_65126_blinking;
j::Cell _v_65141_shaking;
j::Cell _v_65150_drifting;
j::Cell _v_65165_ENTRANCE;
j::Cell _v_65166_timing;
j::Cell _v_65173_growIn;
j::Cell _v_65189_slideIn;
j::Cell _v_65207_slideOut;
j::Cell _v_65225_WORLDS;
j::Cell _v_65226_planet;
std::vector<V> _literals;
Generated_kit_recipes_motion():_v_64932_Surface(this->slot("Surface")),_v_64933_TAU(this->slot("TAU")),_v_64934_fail(this->slot("fail")),_v_64935_crop(this->slot("crop")),_v_64936_layer(this->slot("layer")),_v_64937_effect(this->slot("effect")),_v_64938_shake(this->slot("shake")),_v_64939_mirror(this->slot("mirror")),_v_64940_group(this->slot("group")),_v_64941_orbit(this->slot("orbit")),_v_64942_scene(this->slot("scene")),_v_64943_sphere(this->slot("sphere")),_v_64944_torus(this->slot("torus")),_v_64945_NAMING(this->slot("NAMING")),_v_64946_boolOf(this->slot("boolOf")),_v_64947_colorOf(this->slot("colorOf")),_v_64948_easeOf(this->slot("easeOf")),_v_64949_is3d(this->slot("is3d")),_v_64950_numberOf(this->slot("numberOf")),_v_64951_optionsOf(this->slot("optionsOf")),_v_64952_secondsOf(this->slot("secondsOf")),_v_64953_show(this->slot("show")),_v_64954_sizeOf(this->slot("sizeOf")),_v_64955_titled(this->slot("titled")),_v_64956_wordOf(this->slot("wordOf")),_v_64957_loopFor(this->slot("loopFor")),_v_64958_pieceOf(this->slot("pieceOf")),_v_64959_withLoop(this->slot("withLoop")),_v_64960_MOTION(this->slot("MOTION")),_v_64961_named(this->slot("named")),_v_64966_shapes(this->slot("shapes")),_v_64969_drawScaled(this->slot("drawScaled")),_v_64987_phaseAt(this->slot("phaseAt")),_v_64991_spinning(this->slot("spinning")),_v_65021_orbiting(this->slot("orbiting")),_v_65053_bouncing(this->slot("bouncing")),_v_65071_floating(this->slot("floating")),_v_65084_swaying(this->slot("swaying")),_v_65104_pulsing(this->slot("pulsing")),_v_65126_blinking(this->slot("blinking")),_v_65141_shaking(this->slot("shaking")),_v_65150_drifting(this->slot("drifting")),_v_65165_ENTRANCE(this->slot("ENTRANCE")),_v_65166_timing(this->slot("timing")),_v_65173_growIn(this->slot("growIn")),_v_65189_slideIn(this->slot("slideIn")),_v_65207_slideOut(this->slot("slideOut")),_v_65225_WORLDS(this->slot("WORLDS")),_v_65226_planet(this->slot("planet")),_literals{V(u"cols"),
V(u"rows"),
V(u"max"),
V(u"min"),
V(u"chars"),
V(u"colors"),
V(u"put"),
V(u"spinning()"),
V(u"way"),
V(u"spinning's way"),
V(u"tumble"),
V(u"turntable"),
V(u"wheel"),
V(u"flip"),
V(u"name"),
V(u"spinning"),
V(u"tilt"),
V(u"above"),
V(u"note"),
V(u"tumbling"),
V(u"camera"),
V(u"ambient"),
V(u"soft"),
V(u"period"),
V(u"spin"),
V(u"center"),
V(u"spinning's cols and rows size a 3D shape's scene: a flat thing keeps its own size"),
V(u"meta"),
V(u"spinning like a coin"),
V(u"x"),
V(u"|"),
V(u"set"),
V(u"y"),
V(u"orbiting()"),
V(u"around"),
V(u"radius"),
V(u"orbiting's radius"),
V(u"close"),
V(u"medium"),
V(u"far"),
V(u"orbit"),
V(u"distance"),
V(u"at"),
V(u"orbiting's cols and rows size a 3D orbit: a flat orbit is as big as it needs"),
V(u"orbiting's around"),
V(u"src"),
V(u"anchor"),
V(u"bouncing()"),
V(u"height"),
V(u"shadow"),
V(u"bouncing's height"),
V(u"low"),
V(u"high"),
V(u"bouncing's shadow"),
V(u"pad"),
V(u"top"),
V(u"bottom"),
V(u"#8c959f"),
V(u"bouncing"),
V(u"paste"),
V(u"▔"),
V(u"floating()"),
V(u"floating's height"),
V(u"floating"),
V(u"swaying()"),
V(u"amount"),
V(u"from"),
V(u"swaying's amount"),
V(u"subtle"),
V(u"strong"),
V(u"swaying's from"),
V(u"swaying"),
V(u"pulsing()"),
V(u"beat"),
V(u"pulsing's beat"),
V(u"breath"),
V(u"heart"),
V(u"pulsing's amount"),
V(u"beating"),
V(u"pulsing"),
V(u"blinking()"),
V(u"on"),
V(u"blinking's on"),
V(u"·"),
V(u"charCodeAt"),
V(u"blinking"),
V(u"length"),
V(u"shaking()"),
V(u"nonstop"),
V(u"shaking's amount"),
V(u"shaking's nonstop"),
V(u"every"),
V(u"shaking"),
V(u"shaking now and then"),
V(u"drifting()"),
V(u"to"),
V(u"across"),
V(u"lane"),
V(u"drifting's to"),
V(u"right"),
V(u"left"),
V(u"up"),
V(u"down"),
V(u"drifting's lane"),
V(u"middle"),
V(u"drifting's cols and rows size an empty stage: with across, it drifts in that thing's size"),
V(u"drifting's across"),
V(u"drifting's cols"),
V(u"drifting's rows"),
V(u""),
V(u"move"),
V(u"seconds"),
V(u"speed"),
V(u"hold"),
V(u"forever"),
V(u"loop"),
V(u"growIn()"),
V(u"growIn's ease"),
V(u"ease"),
V(u"snappy"),
V(u"moves"),
V(u"still"),
V(u"growing in"),
V(u"slideIn()"),
V(u"slideIn's ease"),
V(u"slideIn's from"),
V(u"slideOut()"),
V(u"slideOut's hold takes seconds: it slides out after them, so it can't stay forever"),
V(u"slideOut's ease"),
V(u"smooth"),
V(u"slideOut's to"),
V(u"planet()"),
V(u"type"),
V(u"moon"),
V(u"rings"),
V(u"color"),
V(u"planet's type"),
V(u"gas"),
V(u"earth"),
V(u"mars"),
V(u"ice"),
V(u"planet's moon"),
V(u"planet's rings"),
V(u"planet's color"),
V(u"dark"),
V(u"rotate"),
V(u"texture"),
V(u"tube"),
V(u"#d6c7a1"),
V(u"#d1d5db"),
V(u"planet"),
V(u", a moon going round"),
V(u"slice"),
V(u"isArray"),
V(u"#f59e0b"),
V(u"bands"),
V(u"#3b82f6"),
V(u"spots"),
V(u"#dc2626"),
V(u"#7dd3fc")}{
this->exports["spinning"]=this->_v_64991_spinning;
this->exports["orbiting"]=this->_v_65021_orbiting;
this->exports["bouncing"]=this->_v_65053_bouncing;
this->exports["floating"]=this->_v_65071_floating;
this->exports["swaying"]=this->_v_65084_swaying;
this->exports["pulsing"]=this->_v_65104_pulsing;
this->exports["blinking"]=this->_v_65126_blinking;
this->exports["shaking"]=this->_v_65141_shaking;
this->exports["drifting"]=this->_v_65150_drifting;
this->exports["growIn"]=this->_v_65173_growIn;
this->exports["slideIn"]=this->_v_65189_slideIn;
this->exports["slideOut"]=this->_v_65207_slideOut;
this->exports["planet"]=this->_v_65226_planet;
}
void init() override{if(initialized)return;initialized=true;
this->_v_64969_drawScaled.get()=j::function([=](const j::Args &_args_fn64970,const V &_receiver_fn64970,const V &_self_fn64970) mutable ->V{
V _v_64971_s;
V _v_64972_g;
V _v_64973_ox;
V _v_64974_oy;
V _v_64975_k;
_v_64971_s=_args_fn64970[0];
_v_64972_g=_args_fn64970[1];
_v_64973_ox=_args_fn64970[2];
_v_64974_oy=_args_fn64970[3];
_v_64975_k=_args_fn64970[4];
{
V _v_64976_cx;
V _v_64977_cy;
V _v_64978_x0;
V _v_64979_x1;
V _v_64980_y0;
V _v_64981_y1;
if(j::truth(j::unary("!",([&]()->V{V _lhs65238=_v_64975_k;V _rhs65239=V(0.02);return j::binary(">",_lhs65238,_rhs65239);})()))){return V{};
}
_v_64976_cx=([&]()->V{V _lhs65240=_v_64973_ox;V _rhs65241=([&]()->V{V _lhs65242=j::get(_v_64972_g,this->_literals[0]);V _rhs65243=V(2.0);return V(j::number(_lhs65242)/j::number(_rhs65243));})();return j::binary("+",_lhs65240,_rhs65241);})();
_v_64977_cy=([&]()->V{V _lhs65244=_v_64974_oy;V _rhs65245=([&]()->V{V _lhs65246=j::get(_v_64972_g,this->_literals[1]);V _rhs65247=V(2.0);return V(j::number(_lhs65246)/j::number(_rhs65247));})();return j::binary("+",_lhs65244,_rhs65245);})();
_v_64978_x0=([&]()->V{V _receiver65263=j::builtin("Math");V _method65264=this->_literals[2];V _method=j::get(_receiver65263,_method65264);j::Args _params65265=j::Args{V(0.0),([&]()->V{V _number65254=([&]()->V{V _lhs65255=_v_64976_cx;V _rhs65256=([&]()->V{V _lhs65257=([&]()->V{V _lhs65259=j::get(_v_64972_g,this->_literals[0]);V _rhs65260=_v_64975_k;return V(j::number(_lhs65259)*j::number(_rhs65260));})();V _rhs65258=V(2.0);return V(j::number(_lhs65257)/j::number(_rhs65258));})();return V(j::number(_lhs65255)-j::number(_rhs65256));})();return V(std::floor(j::number(_number65254)));})()};return j::call(_method,_params65265,_receiver65263);})();
_v_64979_x1=([&]()->V{V _receiver65281=j::builtin("Math");V _method65282=this->_literals[3];V _method=j::get(_receiver65281,_method65282);j::Args _params65283=j::Args{j::get(_v_64971_s,this->_literals[0]),([&]()->V{V _number65272=([&]()->V{V _lhs65273=_v_64976_cx;V _rhs65274=([&]()->V{V _lhs65275=([&]()->V{V _lhs65277=j::get(_v_64972_g,this->_literals[0]);V _rhs65278=_v_64975_k;return V(j::number(_lhs65277)*j::number(_rhs65278));})();V _rhs65276=V(2.0);return V(j::number(_lhs65275)/j::number(_rhs65276));})();return j::binary("+",_lhs65273,_rhs65274);})();return V(std::ceil(j::number(_number65272)));})()};return j::call(_method,_params65283,_receiver65281);})();
_v_64980_y0=([&]()->V{V _receiver65299=j::builtin("Math");V _method65300=this->_literals[2];V _method=j::get(_receiver65299,_method65300);j::Args _params65301=j::Args{V(0.0),([&]()->V{V _number65290=([&]()->V{V _lhs65291=_v_64977_cy;V _rhs65292=([&]()->V{V _lhs65293=([&]()->V{V _lhs65295=j::get(_v_64972_g,this->_literals[1]);V _rhs65296=_v_64975_k;return V(j::number(_lhs65295)*j::number(_rhs65296));})();V _rhs65294=V(2.0);return V(j::number(_lhs65293)/j::number(_rhs65294));})();return V(j::number(_lhs65291)-j::number(_rhs65292));})();return V(std::floor(j::number(_number65290)));})()};return j::call(_method,_params65301,_receiver65299);})();
_v_64981_y1=([&]()->V{V _receiver65317=j::builtin("Math");V _method65318=this->_literals[3];V _method=j::get(_receiver65317,_method65318);j::Args _params65319=j::Args{j::get(_v_64971_s,this->_literals[1]),([&]()->V{V _number65308=([&]()->V{V _lhs65309=_v_64977_cy;V _rhs65310=([&]()->V{V _lhs65311=([&]()->V{V _lhs65313=j::get(_v_64972_g,this->_literals[1]);V _rhs65314=_v_64975_k;return V(j::number(_lhs65313)*j::number(_rhs65314));})();V _rhs65312=V(2.0);return V(j::number(_lhs65311)/j::number(_rhs65312));})();return j::binary("+",_lhs65309,_rhs65310);})();return V(std::ceil(j::number(_number65308)));})()};return j::call(_method,_params65319,_receiver65317);})();
{V _v_64982_y;
_v_64982_y=_v_64980_y0;
for(;j::truth(([&]()->V{V _lhs65320=_v_64982_y;V _rhs65321=_v_64981_y1;return j::binary("<",_lhs65320,_rhs65321);})());(void)(j::increment(_v_64982_y,1,false))){
V _v_64983_sy;
_v_64983_sy=([&]()->V{V _number65332=([&]()->V{V _lhs65333=([&]()->V{V _lhs65335=([&]()->V{V _lhs65337=([&]()->V{V _lhs65339=_v_64982_y;V _rhs65340=V(0.5);return j::binary("+",_lhs65339,_rhs65340);})();V _rhs65338=_v_64977_cy;return V(j::number(_lhs65337)-j::number(_rhs65338));})();V _rhs65336=_v_64975_k;return V(j::number(_lhs65335)/j::number(_rhs65336));})();V _rhs65334=([&]()->V{V _lhs65341=j::get(_v_64972_g,this->_literals[1]);V _rhs65342=V(2.0);return V(j::number(_lhs65341)/j::number(_rhs65342));})();return j::binary("+",_lhs65333,_rhs65334);})();return V(std::floor(j::number(_number65332)));})();
if(j::truth(([&]()->V{V _logical65343=([&]()->V{V _lhs65344=_v_64983_sy;V _rhs65345=V(0.0);return j::binary("<",_lhs65344,_rhs65345);})();return !j::truth(_logical65343)?([&]()->V{V _lhs65346=_v_64983_sy;V _rhs65347=j::get(_v_64972_g,this->_literals[1]);return j::binary(">=",_lhs65346,_rhs65347);})():_logical65343;})())){continue;
}
{V _v_64984_x;
_v_64984_x=_v_64978_x0;
for(;j::truth(([&]()->V{V _lhs65348=_v_64984_x;V _rhs65349=_v_64979_x1;return j::binary("<",_lhs65348,_rhs65349);})());(void)(j::increment(_v_64984_x,1,false))){
V _v_64985_sx;
V _v_64986_j;
_v_64985_sx=([&]()->V{V _number65360=([&]()->V{V _lhs65361=([&]()->V{V _lhs65363=([&]()->V{V _lhs65365=([&]()->V{V _lhs65367=_v_64984_x;V _rhs65368=V(0.5);return j::binary("+",_lhs65367,_rhs65368);})();V _rhs65366=_v_64976_cx;return V(j::number(_lhs65365)-j::number(_rhs65366));})();V _rhs65364=_v_64975_k;return V(j::number(_lhs65363)/j::number(_rhs65364));})();V _rhs65362=([&]()->V{V _lhs65369=j::get(_v_64972_g,this->_literals[0]);V _rhs65370=V(2.0);return V(j::number(_lhs65369)/j::number(_rhs65370));})();return j::binary("+",_lhs65361,_rhs65362);})();return V(std::floor(j::number(_number65360)));})();
if(j::truth(([&]()->V{V _logical65371=([&]()->V{V _lhs65372=_v_64985_sx;V _rhs65373=V(0.0);return j::binary("<",_lhs65372,_rhs65373);})();return !j::truth(_logical65371)?([&]()->V{V _lhs65374=_v_64985_sx;V _rhs65375=j::get(_v_64972_g,this->_literals[0]);return j::binary(">=",_lhs65374,_rhs65375);})():_logical65371;})())){continue;
}
_v_64986_j=([&]()->V{V _lhs65376=([&]()->V{V _lhs65378=_v_64983_sy;V _rhs65379=j::get(_v_64972_g,this->_literals[0]);return V(j::number(_lhs65378)*j::number(_rhs65379));})();V _rhs65377=_v_64985_sx;return j::binary("+",_lhs65376,_rhs65377);})();
if(j::truth(j::get(j::get(_v_64972_g,this->_literals[4]),_v_64986_j))){(void)(([&]()->V{V _receiver65384=_v_64971_s;V _method65385=this->_literals[6];V _method=j::get(_receiver65384,_method65385);j::Args _params65386=j::Args{([&]()->V{V _lhs65380=([&]()->V{V _lhs65382=_v_64982_y;V _rhs65383=j::get(_v_64971_s,this->_literals[0]);return V(j::number(_lhs65382)*j::number(_rhs65383));})();V _rhs65381=_v_64984_x;return j::binary("+",_lhs65380,_rhs65381);})(),j::get(j::get(_v_64972_g,this->_literals[4]),_v_64986_j),j::get(j::get(_v_64972_g,this->_literals[5]),_v_64986_j)};return j::call(_method,_params65386,_receiver65384);})());
}

}
}

}
}

}

return V{};
},5);
this->_v_64991_spinning.get()=j::function([=](const j::Args &_args_fn64992,const V &_receiver_fn64992,const V &_self_fn64992) mutable ->V{
V _v_64993_thing;
V _v_64994_o;
_v_64993_thing=_args_fn64992[0];
_v_64994_o=_args_fn64992[1];
{
V _v_64995_p;
j::Cell _v_64996_period;
V _v_65003_src;
j::Cell _v_65004_w;
j::Cell _v_65005_h;
V _v_65006_coin;
_v_64995_p=([&]()->V{V _callee65388=this->_v_64951_optionsOf.get();return j::call(_callee65388,j::Args{this->_literals[7],_v_64994_o,([&]()->V{j::Args _array65387;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65387.push_back(_value);_array65387.push_back(this->_literals[8]);_array65387.push_back(this->_literals[0]);_array65387.push_back(this->_literals[1]);return j::array(std::move(_array65387));})()});})();
_v_64996_period.get()=([&]()->V{V _callee65389=this->_v_64952_secondsOf.get();return j::call(_callee65389,j::Args{this->_literals[7],_v_64995_p,V(6.0)});})();
if(j::truth(([&]()->V{V _callee65390=this->_v_64949_is3d.get();return j::call(_callee65390,j::Args{_v_64993_thing});})())){
V _v_64997_way;
V _v_64998_turn;
V _v_64999_spin;
V _v_65000_size;
V _v_65001_name;
V _v_65002_camera;
_v_64997_way=([&]()->V{V _callee65392=this->_v_64956_wordOf.get();return j::call(_callee65392,j::Args{this->_literals[9],j::get(_v_64995_p,this->_literals[8]),([&]()->V{j::Args _array65391;_array65391.push_back(this->_literals[10]);_array65391.push_back(this->_literals[11]);_array65391.push_back(this->_literals[12]);_array65391.push_back(this->_literals[13]);return j::array(std::move(_array65391));})(),this->_literals[10]});})();
_v_64998_turn=([&]()->V{V _lhs65393=this->_v_64933_TAU.get();V _rhs65394=_v_64996_period.get();return V(j::number(_lhs65393)/j::number(_rhs65394));})();
_v_64999_spin=j::get(([&]()->V{V _obj65395=j::object();j::put(_obj65395,this->_literals[10],([&]()->V{j::Args _array65396;_array65396.push_back(_v_64998_turn);_array65396.push_back(V(0.0));_array65396.push_back(([&]()->V{V _lhs65397=_v_64998_turn;V _rhs65398=V(2.0);return V(j::number(_lhs65397)/j::number(_rhs65398));})());return j::array(std::move(_array65396));})());j::put(_obj65395,this->_literals[11],([&]()->V{j::Args _array65399;_array65399.push_back(V(0.0));_array65399.push_back(_v_64998_turn);_array65399.push_back(V(0.0));return j::array(std::move(_array65399));})());j::put(_obj65395,this->_literals[12],([&]()->V{j::Args _array65400;_array65400.push_back(V(0.0));_array65400.push_back(V(0.0));_array65400.push_back(_v_64998_turn);return j::array(std::move(_array65400));})());j::put(_obj65395,this->_literals[13],([&]()->V{j::Args _array65401;_array65401.push_back(_v_64998_turn);_array65401.push_back(V(0.0));_array65401.push_back(V(0.0));return j::array(std::move(_array65401));})());return _obj65395;})(),_v_64997_way);
_v_65000_size=([&]()->V{V _obj65402=j::object();j::put(_obj65402,this->_literals[0],([&]()->V{V _logical65403=j::get(_v_64995_p,this->_literals[0]);return j::nullish(_logical65403)?V(44.0):_logical65403;})());j::put(_obj65402,this->_literals[1],([&]()->V{V _logical65404=j::get(_v_64995_p,this->_literals[1]);return j::nullish(_logical65404)?V(22.0):_logical65404;})());return _obj65402;})();
_v_65001_name=([&]()->V{V _logical65405=j::get(_v_64995_p,this->_literals[14]);return j::nullish(_logical65405)?this->_literals[15]:_logical65405;})();
_v_65002_camera=(j::truth(([&]()->V{V _lhs65406=_v_64997_way;V _rhs65407=this->_literals[11];return V(j::equal(_lhs65406,_rhs65407,true));})())?([&]()->V{V _obj65408=j::object();j::put(_obj65408,this->_literals[16],this->_literals[17]);return _obj65408;})():([&]()->V{V _obj65409=j::object();return _obj65409;})());
return ([&]()->V{V _callee65423=this->_v_64942_scene.get();return j::call(_callee65423,j::Args{([&]()->V{V _obj65410=j::object();j::put(_obj65410,this->_literals[14],_v_65001_name);j::put(_obj65410,this->_literals[18],([&]()->V{V _logical65411=j::get(_v_64995_p,this->_literals[18]);return j::nullish(_logical65411)?([&]()->V{std::u16string _text65412;_text65412+=u"";_text65412+=j::string(_v_65001_name);_text65412+=u", ";_text65412+=j::string((j::truth(([&]()->V{V _lhs65413=_v_64997_way;V _rhs65414=this->_literals[10];return V(j::equal(_lhs65413,_rhs65414,true));})())?this->_literals[19]:this->_literals[15]));_text65412+=u"";return V(std::move(_text65412));})():_logical65411;})());V _spread65415=_v_65000_size;for(const auto &_key:j::keys(_spread65415))j::put(_obj65410,_key,j::get(_spread65415,_key));j::put(_obj65410,this->_literals[20],_v_65002_camera);j::put(_obj65410,this->_literals[21],this->_literals[22]);j::put(_obj65410,this->_literals[23],(j::truth(([&]()->V{V _lhs65416=_v_64997_way;V _rhs65417=this->_literals[10];return V(j::equal(_lhs65416,_rhs65417,true));})())?([&]()->V{V _lhs65418=V(2.0);V _rhs65419=_v_64996_period.get();return V(j::number(_lhs65418)*j::number(_rhs65419));})():_v_64996_period.get()));return _obj65410;})(),([&]()->V{V _callee65422=this->_v_64940_group.get();return j::call(_callee65422,j::Args{([&]()->V{V _callee65420=this->_v_64966_shapes.get();return j::call(_callee65420,j::Args{_v_64993_thing});})(),([&]()->V{V _obj65421=j::object();j::put(_obj65421,this->_literals[24],_v_64999_spin);j::put(_obj65421,this->_literals[25],V(true));return _obj65421;})()});})()});})();

}

if(j::truth(([&]()->V{V _logical65424=([&]()->V{V _lhs65425=j::get(_v_64995_p,this->_literals[8]);V _rhs65426=j::builtin("undefined");return V(!j::equal(_lhs65425,_rhs65426,true));})();return j::truth(_logical65424)?([&]()->V{V _lhs65427=j::get(_v_64995_p,this->_literals[8]);V _rhs65428=this->_literals[11];return V(!j::equal(_lhs65427,_rhs65428,true));})():_logical65424;})())){(void)(([&]()->V{V _callee65431=this->_v_64934_fail.get();return j::call(_callee65431,j::Args{([&]()->V{std::u16string _text65429;_text65429+=u"spinning's way ";_text65429+=j::string(([&]()->V{V _callee65430=this->_v_64953_show.get();return j::call(_callee65430,j::Args{j::get(_v_64995_p,this->_literals[8])});})());_text65429+=u" is for a 3D shape such as torus(): a flat thing turns like a coin, way \"turntable\"";return V(std::move(_text65429));})()});})());
}
if(j::truth(([&]()->V{V _logical65432=([&]()->V{V _lhs65433=j::get(_v_64995_p,this->_literals[0]);V _rhs65434=j::builtin("undefined");return V(!j::equal(_lhs65433,_rhs65434,true));})();return !j::truth(_logical65432)?([&]()->V{V _lhs65435=j::get(_v_64995_p,this->_literals[1]);V _rhs65436=j::builtin("undefined");return V(!j::equal(_lhs65435,_rhs65436,true));})():_logical65432;})())){(void)(([&]()->V{V _callee65437=this->_v_64934_fail.get();return j::call(_callee65437,j::Args{this->_literals[26]});})());
}
_v_65003_src=([&]()->V{V _callee65438=this->_v_64958_pieceOf.get();return j::call(_callee65438,j::Args{_v_64993_thing,this->_literals[7]});})();
V _pattern65439=j::get(_v_65003_src,this->_literals[27]);
_v_65004_w.get()=j::get(_pattern65439,this->_literals[0]);
_v_65005_h.get()=j::get(_pattern65439,this->_literals[1]);
_v_65006_coin=([&]()->V{V _callee65521=this->_v_64937_effect.get();return j::call(_callee65521,j::Args{_v_65003_src,([&]()->V{V _obj65440=j::object();j::put(_obj65440,this->_literals[23],_v_64996_period.get());V _spread65441=([&]()->V{V _callee65442=this->_v_64961_named.get();return j::call(_callee65442,j::Args{_v_65003_src,_v_64995_p,this->_literals[28]});})();for(const auto &_key:j::keys(_spread65441))j::put(_obj65440,_key,j::get(_spread65441,_key));return _obj65440;})(),j::function([=](const j::Args &_args_fn65007,const V &_receiver_fn65007,const V &_self_fn65007) mutable ->V{
V _v_65008_t;
V _v_65009_s;
V _v_65010_g;
_v_65008_t=_args_fn65007[0];
_v_65009_s=_args_fn65007[1];
_v_65010_g=_args_fn65007[2];
{
V _v_65011_k;
V _v_65012_back;
V _v_65013_turned;
V _v_65014_half;
_v_65011_k=([&]()->V{V _number65446=([&]()->V{V _lhs65447=this->_v_64933_TAU.get();V _rhs65448=([&]()->V{V _callee65449=this->_v_64987_phaseAt.get();return j::call(_callee65449,j::Args{_v_65008_t,_v_64996_period.get()});})();return V(j::number(_lhs65447)*j::number(_rhs65448));})();return V(std::cos(j::number(_number65446)));})();
_v_65012_back=([&]()->V{V _lhs65450=_v_65011_k;V _rhs65451=V(0.0);return j::binary("<",_lhs65450,_rhs65451);})();
_v_65013_turned=j::get(([&]()->V{V _callee65452=this->_v_64939_mirror.get();return j::call(_callee65452,j::Args{});})(),this->_literals[29]);
_v_65014_half=([&]()->V{V _lhs65453=_v_65004_w.get();V _rhs65454=V(2.0);return V(j::number(_lhs65453)/j::number(_rhs65454));})();
{V _v_65015_x;
_v_65015_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs65455=_v_65015_x;V _rhs65456=_v_65004_w.get();return j::binary("<",_lhs65455,_rhs65456);})());(void)(j::increment(_v_65015_x,1,false))){
V _v_65016_u;
V _v_65017_from;
_v_65016_u=([&]()->V{V _lhs65457=([&]()->V{V _lhs65459=([&]()->V{V _lhs65461=([&]()->V{V _lhs65463=_v_65015_x;V _rhs65464=V(0.5);return j::binary("+",_lhs65463,_rhs65464);})();V _rhs65462=_v_65014_half;return V(j::number(_lhs65461)-j::number(_rhs65462));})();V _rhs65460=([&]()->V{V _receiver65468=j::builtin("Math");V _method65469=this->_literals[2];V _method=j::get(_receiver65468,_method65469);j::Args _params65470=j::Args{([&]()->V{V _number65465=_v_65011_k;return V(std::fabs(j::number(_number65465)));})(),V(0.001)};return j::call(_method,_params65470,_receiver65468);})();return V(j::number(_lhs65459)/j::number(_rhs65460));})();V _rhs65458=_v_65014_half;return j::binary("+",_lhs65457,_rhs65458);})();
if(j::truth(([&]()->V{V _logical65471=([&]()->V{V _lhs65472=_v_65016_u;V _rhs65473=V(0.0);return j::binary("<",_lhs65472,_rhs65473);})();return !j::truth(_logical65471)?([&]()->V{V _lhs65474=_v_65016_u;V _rhs65475=_v_65004_w.get();return j::binary(">=",_lhs65474,_rhs65475);})():_logical65471;})())){continue;
}
_v_65017_from=(j::truth(_v_65012_back)?([&]()->V{V _lhs65476=([&]()->V{V _lhs65478=_v_65004_w.get();V _rhs65479=V(1.0);return V(j::number(_lhs65478)-j::number(_rhs65479));})();V _rhs65477=([&]()->V{V _number65480=_v_65016_u;return V(std::floor(j::number(_number65480)));})();return V(j::number(_lhs65476)-j::number(_rhs65477));})():([&]()->V{V _number65481=_v_65016_u;return V(std::floor(j::number(_number65481)));})());
{V _v_65018_y;
_v_65018_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs65482=_v_65018_y;V _rhs65483=_v_65005_h.get();return j::binary("<",_lhs65482,_rhs65483);})());(void)(j::increment(_v_65018_y,1,false))){
V _v_65019_j;
_v_65019_j=([&]()->V{V _lhs65484=([&]()->V{V _lhs65486=_v_65018_y;V _rhs65487=j::get(_v_65010_g,this->_literals[0]);return V(j::number(_lhs65486)*j::number(_rhs65487));})();V _rhs65485=_v_65017_from;return j::binary("+",_lhs65484,_rhs65485);})();
if(j::truth(j::get(j::get(_v_65010_g,this->_literals[4]),_v_65019_j))){(void)(([&]()->V{V _receiver65492=_v_65009_s;V _method65493=this->_literals[6];V _method=j::get(_receiver65492,_method65493);j::Args _params65494=j::Args{([&]()->V{V _lhs65488=([&]()->V{V _lhs65490=_v_65018_y;V _rhs65491=j::get(_v_65009_s,this->_literals[0]);return V(j::number(_lhs65490)*j::number(_rhs65491));})();V _rhs65489=_v_65015_x;return j::binary("+",_lhs65488,_rhs65489);})(),(j::truth(_v_65012_back)?j::get(_v_65013_turned,j::get(j::get(_v_65010_g,this->_literals[4]),_v_65019_j)):j::get(j::get(_v_65010_g,this->_literals[4]),_v_65019_j)),j::get(j::get(_v_65010_g,this->_literals[5]),_v_65019_j)};return j::call(_method,_params65494,_receiver65492);})());
}

}
}

}
}
if(j::truth(([&]()->V{V _lhs65495=([&]()->V{V _lhs65497=([&]()->V{V _number65499=_v_65011_k;return V(std::fabs(j::number(_number65499)));})();V _rhs65498=_v_65004_w.get();return V(j::number(_lhs65497)*j::number(_rhs65498));})();V _rhs65496=V(1.0);return j::binary("<",_lhs65495,_rhs65496);})())){{V _v_65020_y;
_v_65020_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs65500=_v_65020_y;V _rhs65501=_v_65005_h.get();return j::binary("<",_lhs65500,_rhs65501);})());(void)(j::increment(_v_65020_y,1,false))){if(j::truth(([&]()->V{V _logical65502=j::get(j::get(_v_65010_g,this->_literals[4]),([&]()->V{V _lhs65503=([&]()->V{V _lhs65505=_v_65020_y;V _rhs65506=j::get(_v_65010_g,this->_literals[0]);return V(j::number(_lhs65505)*j::number(_rhs65506));})();V _rhs65504=([&]()->V{V _number65507=_v_65014_half;return V(std::floor(j::number(_number65507)));})();return j::binary("+",_lhs65503,_rhs65504);})());return !j::truth(_logical65502)?j::get(j::get(_v_65010_g,this->_literals[4]),([&]()->V{V _lhs65508=([&]()->V{V _lhs65510=([&]()->V{V _lhs65512=([&]()->V{V _lhs65514=_v_65020_y;V _rhs65515=j::get(_v_65010_g,this->_literals[0]);return V(j::number(_lhs65514)*j::number(_rhs65515));})();V _rhs65513=_v_65004_w.get();return j::binary("+",_lhs65512,_rhs65513);})();V _rhs65511=V(1.0);return V(j::number(_lhs65510)-j::number(_rhs65511));})();V _rhs65509=([&]()->V{V _number65516=_v_65014_half;return V(std::floor(j::number(_number65516)));})();return V(j::number(_lhs65508)-j::number(_rhs65509));})()):_logical65502;})())){(void)(([&]()->V{V _receiver65518=_v_65009_s;V _method65519=this->_literals[31];V _method=j::get(_receiver65518,_method65519);j::Args _params65520=j::Args{([&]()->V{V _number65517=_v_65014_half;return V(std::floor(j::number(_number65517)));})(),_v_65020_y,this->_literals[30]};return j::call(_method,_params65520,_receiver65518);})());
}
}}
}

}

return V{};
},3)});})();
return ([&]()->V{V _callee65523=this->_v_64935_crop.get();return j::call(_callee65523,j::Args{_v_65006_coin,([&]()->V{V _obj65522=j::object();j::put(_obj65522,this->_literals[29],V(0.0));j::put(_obj65522,this->_literals[32],V(0.0));j::put(_obj65522,this->_literals[0],_v_65004_w.get());j::put(_obj65522,this->_literals[1],_v_65005_h.get());return _obj65522;})()});})();

}

return V{};
},2);
this->_v_65021_orbiting.get()=j::function([=](const j::Args &_args_fn65022,const V &_receiver_fn65022,const V &_self_fn65022) mutable ->V{
V _v_65023_thing;
V _v_65024_o;
_v_65023_thing=_args_fn65022[0];
_v_65024_o=_args_fn65022[1];
{
V _v_65025_p;
j::Cell _v_65026_period;
j::Cell _v_65030_src;
V _v_65031_centre;
V _v_65032_least;
j::Cell _v_65033_rx;
j::Cell _v_65034_ry;
V _v_65035_cols;
V _v_65036_rows;
j::Cell _v_65037_turn;
j::Cell _v_65040_front;
j::Cell _v_65043_away;
V _v_65044_at;
V _v_65051_stage;
V _v_65052_name;
_v_65025_p=([&]()->V{V _callee65525=this->_v_64951_optionsOf.get();return j::call(_callee65525,j::Args{this->_literals[33],_v_65024_o,([&]()->V{j::Args _array65524;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65524.push_back(_value);_array65524.push_back(this->_literals[34]);_array65524.push_back(this->_literals[35]);_array65524.push_back(this->_literals[0]);_array65524.push_back(this->_literals[1]);return j::array(std::move(_array65524));})()});})();
_v_65026_period.get()=([&]()->V{V _callee65526=this->_v_64952_secondsOf.get();return j::call(_callee65526,j::Args{this->_literals[33],_v_65025_p,V(6.0)});})();
if(j::truth(([&]()->V{V _logical65527=([&]()->V{V _callee65528=this->_v_64949_is3d.get();return j::call(_callee65528,j::Args{_v_65023_thing});})();return j::truth(_logical65527)?([&]()->V{V _logical65529=([&]()->V{V _lhs65530=j::get(_v_65025_p,this->_literals[34]);V _rhs65531=j::builtin("undefined");return V(j::equal(_lhs65530,_rhs65531,true));})();return !j::truth(_logical65529)?([&]()->V{V _callee65532=this->_v_64949_is3d.get();return j::call(_callee65532,j::Args{j::get(_v_65025_p,this->_literals[34])});})():_logical65529;})():_logical65527;})())){
V _v_65027_radius;
V _v_65028_centre;
V _v_65029_name;
_v_65027_radius=([&]()->V{V _callee65534=this->_v_64954_sizeOf.get();return j::call(_callee65534,j::Args{this->_literals[36],j::get(_v_65025_p,this->_literals[35]),([&]()->V{V _obj65533=j::object();j::put(_obj65533,this->_literals[37],V(1.8));j::put(_obj65533,this->_literals[38],V(2.6));j::put(_obj65533,this->_literals[39],V(3.6));return _obj65533;})(),this->_literals[38],V(0.1),V(100.0)});})();
_v_65028_centre=(j::truth(([&]()->V{V _lhs65535=j::get(_v_65025_p,this->_literals[34]);V _rhs65536=j::builtin("undefined");return V(j::equal(_lhs65535,_rhs65536,true));})())?([&]()->V{j::Args _array65537;return j::array(std::move(_array65537));})():([&]()->V{V _callee65538=this->_v_64966_shapes.get();return j::call(_callee65538,j::Args{j::get(_v_65025_p,this->_literals[34])});})());
_v_65029_name=([&]()->V{V _logical65539=j::get(_v_65025_p,this->_literals[14]);return j::nullish(_logical65539)?this->_literals[40]:_logical65539;})();
return ([&]()->V{V _callee65552=this->_v_64942_scene.get();return j::call(_callee65552,j::Args{([&]()->V{V _obj65540=j::object();j::put(_obj65540,this->_literals[14],_v_65029_name);j::put(_obj65540,this->_literals[18],([&]()->V{V _logical65541=j::get(_v_65025_p,this->_literals[18]);return j::nullish(_logical65541)?([&]()->V{std::u16string _text65542;_text65542+=u"";_text65542+=j::string(_v_65029_name);_text65542+=u", going round";return V(std::move(_text65542));})():_logical65541;})());j::put(_obj65540,this->_literals[0],([&]()->V{V _logical65543=j::get(_v_65025_p,this->_literals[0]);return j::nullish(_logical65543)?V(56.0):_logical65543;})());j::put(_obj65540,this->_literals[1],([&]()->V{V _logical65544=j::get(_v_65025_p,this->_literals[1]);return j::nullish(_logical65544)?V(22.0):_logical65544;})());j::put(_obj65540,this->_literals[23],_v_65026_period.get());j::put(_obj65540,this->_literals[21],V(0.1));j::put(_obj65540,this->_literals[20],([&]()->V{V _obj65545=j::object();j::put(_obj65545,this->_literals[41],V(10.0));return _obj65545;})());return _obj65540;})(),([&]()->V{j::Args _array65546;for(const auto &_value:j::elements(_v_65028_centre))_array65546.push_back(_value);_array65546.push_back(([&]()->V{V _callee65551=this->_v_64940_group.get();return j::call(_callee65551,j::Args{([&]()->V{V _callee65547=this->_v_64966_shapes.get();return j::call(_callee65547,j::Args{_v_65023_thing});})(),([&]()->V{V _obj65548=j::object();j::put(_obj65548,this->_literals[42],([&]()->V{V _callee65550=this->_v_64941_orbit.get();return j::call(_callee65550,j::Args{([&]()->V{V _obj65549=j::object();j::put(_obj65549,this->_literals[35],_v_65027_radius);j::put(_obj65549,this->_literals[23],_v_65026_period.get());j::put(_obj65549,this->_literals[16],V(0.3));return _obj65549;})()});})());return _obj65548;})()});})());return j::array(std::move(_array65546));})()});})();

}

if(j::truth(([&]()->V{V _logical65553=([&]()->V{V _lhs65554=j::get(_v_65025_p,this->_literals[0]);V _rhs65555=j::builtin("undefined");return V(!j::equal(_lhs65554,_rhs65555,true));})();return !j::truth(_logical65553)?([&]()->V{V _lhs65556=j::get(_v_65025_p,this->_literals[1]);V _rhs65557=j::builtin("undefined");return V(!j::equal(_lhs65556,_rhs65557,true));})():_logical65553;})())){(void)(([&]()->V{V _callee65558=this->_v_64934_fail.get();return j::call(_callee65558,j::Args{this->_literals[43]});})());
}
_v_65030_src.get()=([&]()->V{V _callee65559=this->_v_64958_pieceOf.get();return j::call(_callee65559,j::Args{_v_65023_thing,this->_literals[33]});})();
_v_65031_centre=(j::truth(([&]()->V{V _lhs65560=j::get(_v_65025_p,this->_literals[34]);V _rhs65561=j::builtin("undefined");return V(j::equal(_lhs65560,_rhs65561,true));})())?V::null():([&]()->V{V _callee65562=this->_v_64958_pieceOf.get();return j::call(_callee65562,j::Args{j::get(_v_65025_p,this->_literals[34]),this->_literals[44]});})());
_v_65032_least=(j::truth(_v_65031_centre)?([&]()->V{V _number65571=([&]()->V{V _lhs65572=([&]()->V{V _lhs65574=([&]()->V{V _lhs65576=j::get(j::get(_v_65031_centre,this->_literals[27]),this->_literals[0]);V _rhs65577=V(2.0);return V(j::number(_lhs65576)/j::number(_rhs65577));})();V _rhs65575=([&]()->V{V _lhs65578=j::get(j::get(_v_65030_src.get(),this->_literals[27]),this->_literals[0]);V _rhs65579=V(2.0);return V(j::number(_lhs65578)/j::number(_rhs65579));})();return j::binary("+",_lhs65574,_rhs65575);})();V _rhs65573=V(3.0);return j::binary("+",_lhs65572,_rhs65573);})();return V(std::ceil(j::number(_number65571)));})():V(6.0));
_v_65033_rx.get()=([&]()->V{V _number65596=([&]()->V{V _callee65612=this->_v_64954_sizeOf.get();return j::call(_callee65612,j::Args{this->_literals[36],j::get(_v_65025_p,this->_literals[35]),([&]()->V{V _obj65597=j::object();j::put(_obj65597,this->_literals[37],_v_65032_least);j::put(_obj65597,this->_literals[38],([&]()->V{V _receiver65602=j::builtin("Math");V _method65603=this->_literals[2];V _method=j::get(_receiver65602,_method65603);j::Args _params65604=j::Args{([&]()->V{V _lhs65598=_v_65032_least;V _rhs65599=V(3.0);return j::binary("+",_lhs65598,_rhs65599);})(),V(12.0)};return j::call(_method,_params65604,_receiver65602);})());j::put(_obj65597,this->_literals[39],([&]()->V{V _receiver65609=j::builtin("Math");V _method65610=this->_literals[2];V _method=j::get(_receiver65609,_method65610);j::Args _params65611=j::Args{([&]()->V{V _lhs65605=_v_65032_least;V _rhs65606=V(10.0);return j::binary("+",_lhs65605,_rhs65606);})(),V(22.0)};return j::call(_method,_params65611,_receiver65609);})());return _obj65597;})(),this->_literals[38],V(1.0),V(150.0)});})();return V(std::floor(j::number(_number65596)+.5));})();
_v_65034_ry.get()=([&]()->V{V _receiver65620=j::builtin("Math");V _method65621=this->_literals[2];V _method=j::get(_receiver65620,_method65621);j::Args _params65622=j::Args{V(1.0),([&]()->V{V _number65615=([&]()->V{V _lhs65616=_v_65033_rx.get();V _rhs65617=V(2.0);return V(j::number(_lhs65616)/j::number(_rhs65617));})();return V(std::floor(j::number(_number65615)+.5));})()};return j::call(_method,_params65622,_receiver65620);})();
_v_65035_cols=([&]()->V{V _receiver65635=j::builtin("Math");V _method65636=this->_literals[2];V _method=j::get(_receiver65635,_method65636);j::Args _params65637=j::Args{([&]()->V{V _lhs65623=([&]()->V{V _lhs65625=([&]()->V{V _lhs65627=V(2.0);V _rhs65628=_v_65033_rx.get();return V(j::number(_lhs65627)*j::number(_rhs65628));})();V _rhs65626=j::get(j::get(_v_65030_src.get(),this->_literals[27]),this->_literals[0]);return j::binary("+",_lhs65625,_rhs65626);})();V _rhs65624=V(1.0);return j::binary("+",_lhs65623,_rhs65624);})(),([&]()->V{V _logical65629=([&]()->V{V _chain65630=_v_65031_centre;if(j::nullish(_chain65630))return V{};V _chain65631=j::get(_chain65630,this->_literals[27]);V _chain65632=j::get(_chain65631,this->_literals[0]);return _chain65632;})();return j::nullish(_logical65629)?V(0.0):_logical65629;})()};return j::call(_method,_params65637,_receiver65635);})();
_v_65036_rows=([&]()->V{V _receiver65650=j::builtin("Math");V _method65651=this->_literals[2];V _method=j::get(_receiver65650,_method65651);j::Args _params65652=j::Args{([&]()->V{V _lhs65638=([&]()->V{V _lhs65640=([&]()->V{V _lhs65642=V(2.0);V _rhs65643=_v_65034_ry.get();return V(j::number(_lhs65642)*j::number(_rhs65643));})();V _rhs65641=j::get(j::get(_v_65030_src.get(),this->_literals[27]),this->_literals[1]);return j::binary("+",_lhs65640,_rhs65641);})();V _rhs65639=V(1.0);return j::binary("+",_lhs65638,_rhs65639);})(),([&]()->V{V _logical65644=([&]()->V{V _chain65645=_v_65031_centre;if(j::nullish(_chain65645))return V{};V _chain65646=j::get(_chain65645,this->_literals[27]);V _chain65647=j::get(_chain65646,this->_literals[1]);return _chain65647;})();return j::nullish(_logical65644)?V(0.0):_logical65644;})()};return j::call(_method,_params65652,_receiver65650);})();
_v_65037_turn.get()=j::function([=](const j::Args &_args_fn65038,const V &_receiver_fn65038,const V &_self_fn65038) mutable ->V{
V _v_65039_t;
_v_65039_t=_args_fn65038[0];
return ([&]()->V{V _lhs65653=this->_v_64933_TAU.get();V _rhs65654=([&]()->V{V _callee65655=this->_v_64987_phaseAt.get();return j::call(_callee65655,j::Args{_v_65039_t,_v_65026_period.get()});})();return V(j::number(_lhs65653)*j::number(_rhs65654));})();
return V{};
},1);
_v_65040_front.get()=j::function([=](const j::Args &_args_fn65041,const V &_receiver_fn65041,const V &_self_fn65041) mutable ->V{
V _v_65042_t;
_v_65042_t=_args_fn65041[0];
return ([&]()->V{V _lhs65656=([&]()->V{V _number65659=([&]()->V{V _callee65660=_v_65037_turn.get();return j::call(_callee65660,j::Args{_v_65042_t});})();return V(std::sin(j::number(_number65659)));})();V _rhs65657=V(0.0);return j::binary(">=",_lhs65656,_rhs65657);})();
return V{};
},1);
_v_65043_away.get()=V(10000.0);
_v_65044_at=j::function([=](const j::Args &_args_fn65045,const V &_receiver_fn65045,const V &_self_fn65045) mutable ->V{
j::Cell _v_65046_inFront;
_v_65046_inFront.get()=_args_fn65045[0];
return ([&]()->V{V _obj65661=j::object();j::put(_obj65661,this->_literals[45],_v_65030_src.get());j::put(_obj65661,this->_literals[46],this->_literals[25]);j::put(_obj65661,this->_literals[29],j::function([=](const j::Args &_args_fn65047,const V &_receiver_fn65047,const V &_self_fn65047) mutable ->V{
V _v_65048_t;
_v_65048_t=_args_fn65047[0];
return (j::truth(([&]()->V{V _lhs65662=([&]()->V{V _callee65664=_v_65040_front.get();return j::call(_callee65664,j::Args{_v_65048_t});})();V _rhs65663=_v_65046_inFront.get();return V(j::equal(_lhs65662,_rhs65663,true));})())?([&]()->V{V _number65670=([&]()->V{V _lhs65671=_v_65033_rx.get();V _rhs65672=([&]()->V{V _number65674=([&]()->V{V _callee65675=_v_65037_turn.get();return j::call(_callee65675,j::Args{_v_65048_t});})();return V(std::cos(j::number(_number65674)));})();return V(j::number(_lhs65671)*j::number(_rhs65672));})();return V(std::floor(j::number(_number65670)+.5));})():_v_65043_away.get());
return V{};
},1));j::put(_obj65661,this->_literals[32],j::function([=](const j::Args &_args_fn65049,const V &_receiver_fn65049,const V &_self_fn65049) mutable ->V{
V _v_65050_t;
_v_65050_t=_args_fn65049[0];
return ([&]()->V{V _number65681=([&]()->V{V _lhs65682=_v_65034_ry.get();V _rhs65683=([&]()->V{V _number65685=([&]()->V{V _callee65686=_v_65037_turn.get();return j::call(_callee65686,j::Args{_v_65050_t});})();return V(std::sin(j::number(_number65685)));})();return V(j::number(_lhs65682)*j::number(_rhs65683));})();return V(std::floor(j::number(_number65681)+.5));})();
return V{};
},1));return _obj65661;})();
return V{};
},1);
_v_65051_stage=([&]()->V{V _callee65694=this->_v_64936_layer.get();return j::call(_callee65694,([&](){j::Args _args65687;_args65687.push_back(([&]()->V{V _callee65688=this->_v_64932_Surface.get();return j::construct(_callee65688,j::Args{_v_65035_cols,_v_65036_rows});})());_args65687.push_back(([&]()->V{V _callee65689=_v_65044_at;return j::call(_callee65689,j::Args{V(false)});})());for(const auto &_v:j::elements((j::truth(_v_65031_centre)?([&]()->V{j::Args _array65690;_array65690.push_back(([&]()->V{V _obj65691=j::object();j::put(_obj65691,this->_literals[45],_v_65031_centre);j::put(_obj65691,this->_literals[46],this->_literals[25]);return _obj65691;})());return j::array(std::move(_array65690));})():([&]()->V{j::Args _array65692;return j::array(std::move(_array65692));})())))_args65687.push_back(_v);_args65687.push_back(([&]()->V{V _callee65693=_v_65044_at;return j::call(_callee65693,j::Args{V(true)});})());return _args65687;})());})();
_v_65052_name=([&]()->V{V _logical65695=j::get(_v_65025_p,this->_literals[14]);return j::nullish(_logical65695)?(j::truth(_v_65031_centre)?([&]()->V{std::u16string _text65696;_text65696+=u"";_text65696+=j::string(j::get(j::get(_v_65030_src.get(),this->_literals[27]),this->_literals[14]));_text65696+=u" round ";_text65696+=j::string(j::get(j::get(_v_65031_centre,this->_literals[27]),this->_literals[14]));_text65696+=u"";return V(std::move(_text65696));})():j::get(j::get(_v_65030_src.get(),this->_literals[27]),this->_literals[14])):_logical65695;})();
return ([&]()->V{V _callee65704=this->_v_64955_titled.get();return j::call(_callee65704,j::Args{([&]()->V{V _callee65701=this->_v_64959_withLoop.get();return j::call(_callee65701,j::Args{_v_65051_stage,([&]()->V{V _callee65700=this->_v_64957_loopFor.get();return j::call(_callee65700,j::Args{([&]()->V{j::Args _array65697;_array65697.push_back(_v_65026_period.get());_array65697.push_back(_v_65030_src.get());for(const auto &_value:j::elements((j::truth(_v_65031_centre)?([&]()->V{j::Args _array65698;_array65698.push_back(_v_65031_centre);return j::array(std::move(_array65698));})():([&]()->V{j::Args _array65699;return j::array(std::move(_array65699));})())))_array65697.push_back(_value);return j::array(std::move(_array65697));})()});})()});})(),_v_65052_name,([&]()->V{V _logical65702=j::get(_v_65025_p,this->_literals[18]);return j::nullish(_logical65702)?([&]()->V{std::u16string _text65703;_text65703+=u"";_text65703+=j::string(_v_65052_name);_text65703+=u", going round";return V(std::move(_text65703));})():_logical65702;})()});})();

}

return V{};
},2);
this->_v_65053_bouncing.get()=j::function([=](const j::Args &_args_fn65054,const V &_receiver_fn65054,const V &_self_fn65054) mutable ->V{
V _v_65055_thing;
V _v_65056_o;
_v_65055_thing=_args_fn65054[0];
_v_65056_o=_args_fn65054[1];
{
V _v_65057_p;
j::Cell _v_65058_period;
j::Cell _v_65059_height;
j::Cell _v_65060_ground;
V _v_65061_src;
_v_65057_p=([&]()->V{V _callee65706=this->_v_64951_optionsOf.get();return j::call(_callee65706,j::Args{this->_literals[47],_v_65056_o,([&]()->V{j::Args _array65705;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65705.push_back(_value);_array65705.push_back(this->_literals[48]);_array65705.push_back(this->_literals[49]);return j::array(std::move(_array65705));})()});})();
_v_65058_period.get()=([&]()->V{V _callee65707=this->_v_64952_secondsOf.get();return j::call(_callee65707,j::Args{this->_literals[47],_v_65057_p,V(1.2)});})();
_v_65059_height.get()=([&]()->V{V _number65710=([&]()->V{V _callee65712=this->_v_64954_sizeOf.get();return j::call(_callee65712,j::Args{this->_literals[50],j::get(_v_65057_p,this->_literals[48]),([&]()->V{V _obj65711=j::object();j::put(_obj65711,this->_literals[51],V(3.0));j::put(_obj65711,this->_literals[38],V(6.0));j::put(_obj65711,this->_literals[52],V(10.0));return _obj65711;})(),this->_literals[38],V(1.0),V(100.0)});})();return V(std::floor(j::number(_number65710)+.5));})();
_v_65060_ground.get()=(j::truth(([&]()->V{V _callee65713=this->_v_64946_boolOf.get();return j::call(_callee65713,j::Args{this->_literals[53],j::get(_v_65057_p,this->_literals[49]),V(true)});})())?V(1.0):V(0.0));
_v_65061_src=([&]()->V{V _callee65714=this->_v_64958_pieceOf.get();return j::call(_callee65714,j::Args{_v_65055_thing,this->_literals[47]});})();
return ([&]()->V{V _callee65785=this->_v_64937_effect.get();return j::call(_callee65785,j::Args{_v_65061_src,([&]()->V{V _obj65715=j::object();j::put(_obj65715,this->_literals[23],_v_65058_period.get());j::put(_obj65715,this->_literals[54],([&]()->V{V _obj65716=j::object();j::put(_obj65716,this->_literals[55],_v_65059_height.get());j::put(_obj65716,this->_literals[56],_v_65060_ground.get());return _obj65716;})());j::put(_obj65715,this->_literals[5],([&]()->V{j::Args _array65717;_array65717.push_back(this->_literals[57]);return j::array(std::move(_array65717));})());V _spread65718=([&]()->V{V _callee65719=this->_v_64961_named.get();return j::call(_callee65719,j::Args{_v_65061_src,_v_65057_p,this->_literals[58]});})();for(const auto &_key:j::keys(_spread65718))j::put(_obj65715,_key,j::get(_spread65718,_key));return _obj65715;})(),j::function([=](const j::Args &_args_fn65062,const V &_receiver_fn65062,const V &_self_fn65062) mutable ->V{
V _v_65063_t;
V _v_65064_s;
V _v_65065_g;
V _v_65066_ctx;
_v_65063_t=_args_fn65062[0];
_v_65064_s=_args_fn65062[1];
_v_65065_g=_args_fn65062[2];
_v_65066_ctx=_args_fn65062[3];
{
V _v_65067_k;
V _v_65068_up;
V _v_65069_w;
_v_65067_k=([&]()->V{V _callee65720=this->_v_64987_phaseAt.get();return j::call(_callee65720,j::Args{_v_65063_t,_v_65058_period.get()});})();
_v_65068_up=([&]()->V{V _number65729=([&]()->V{V _lhs65730=([&]()->V{V _lhs65732=([&]()->V{V _lhs65734=_v_65059_height.get();V _rhs65735=V(4.0);return V(j::number(_lhs65734)*j::number(_rhs65735));})();V _rhs65733=_v_65067_k;return V(j::number(_lhs65732)*j::number(_rhs65733));})();V _rhs65731=([&]()->V{V _lhs65736=V(1.0);V _rhs65737=_v_65067_k;return V(j::number(_lhs65736)-j::number(_rhs65737));})();return V(j::number(_lhs65730)*j::number(_rhs65731));})();return V(std::floor(j::number(_number65729)+.5));})();
(void)(([&]()->V{V _receiver65740=_v_65064_s;V _method65741=this->_literals[59];V _method=j::get(_receiver65740,_method65741);j::Args _params65742=j::Args{_v_65065_g,j::get(_v_65066_ctx,this->_literals[29]),([&]()->V{V _lhs65738=j::get(_v_65066_ctx,this->_literals[32]);V _rhs65739=_v_65068_up;return V(j::number(_lhs65738)-j::number(_rhs65739));})()};return j::call(_method,_params65742,_receiver65740);})());
if(j::truth(j::unary("!",_v_65060_ground.get()))){return V{};
}
_v_65069_w=([&]()->V{V _receiver65762=j::builtin("Math");V _method65763=this->_literals[2];V _method=j::get(_receiver65762,_method65763);j::Args _params65764=j::Args{V(1.0),([&]()->V{V _number65751=([&]()->V{V _lhs65752=j::get(_v_65065_g,this->_literals[0]);V _rhs65753=([&]()->V{V _lhs65754=V(1.0);V _rhs65755=([&]()->V{V _lhs65756=([&]()->V{V _lhs65758=V(0.7);V _rhs65759=_v_65068_up;return V(j::number(_lhs65758)*j::number(_rhs65759));})();V _rhs65757=_v_65059_height.get();return V(j::number(_lhs65756)/j::number(_rhs65757));})();return V(j::number(_lhs65754)-j::number(_rhs65755));})();return V(j::number(_lhs65752)*j::number(_rhs65753));})();return V(std::floor(j::number(_number65751)+.5));})()};return j::call(_method,_params65764,_receiver65762);})();
{V _v_65070_x;
_v_65070_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs65765=_v_65070_x;V _rhs65766=_v_65069_w;return j::binary("<",_lhs65765,_rhs65766);})());(void)(j::increment(_v_65070_x,1,false))){(void)(([&]()->V{V _receiver65782=_v_65064_s;V _method65783=this->_literals[31];V _method=j::get(_receiver65782,_method65783);j::Args _params65784=j::Args{([&]()->V{V _lhs65767=([&]()->V{V _lhs65769=j::get(_v_65066_ctx,this->_literals[29]);V _rhs65770=([&]()->V{V _number65775=([&]()->V{V _lhs65776=([&]()->V{V _lhs65778=j::get(_v_65065_g,this->_literals[0]);V _rhs65779=_v_65069_w;return V(j::number(_lhs65778)-j::number(_rhs65779));})();V _rhs65777=V(2.0);return V(j::number(_lhs65776)/j::number(_rhs65777));})();return V(std::floor(j::number(_number65775)));})();return j::binary("+",_lhs65769,_rhs65770);})();V _rhs65768=_v_65070_x;return j::binary("+",_lhs65767,_rhs65768);})(),([&]()->V{V _lhs65780=j::get(_v_65064_s,this->_literals[1]);V _rhs65781=V(1.0);return V(j::number(_lhs65780)-j::number(_rhs65781));})(),this->_literals[60],this->_literals[57]};return j::call(_method,_params65784,_receiver65782);})());
}}

}

return V{};
},4)});})();

}

return V{};
},2);
this->_v_65071_floating.get()=j::function([=](const j::Args &_args_fn65072,const V &_receiver_fn65072,const V &_self_fn65072) mutable ->V{
V _v_65073_thing;
V _v_65074_o;
_v_65073_thing=_args_fn65072[0];
_v_65074_o=_args_fn65072[1];
{
V _v_65075_p;
j::Cell _v_65076_period;
j::Cell _v_65077_h;
V _v_65078_src;
_v_65075_p=([&]()->V{V _callee65787=this->_v_64951_optionsOf.get();return j::call(_callee65787,j::Args{this->_literals[61],_v_65074_o,([&]()->V{j::Args _array65786;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65786.push_back(_value);_array65786.push_back(this->_literals[48]);return j::array(std::move(_array65786));})()});})();
_v_65076_period.get()=([&]()->V{V _callee65788=this->_v_64952_secondsOf.get();return j::call(_callee65788,j::Args{this->_literals[61],_v_65075_p,V(3.0)});})();
_v_65077_h.get()=([&]()->V{V _number65791=([&]()->V{V _callee65793=this->_v_64954_sizeOf.get();return j::call(_callee65793,j::Args{this->_literals[62],j::get(_v_65075_p,this->_literals[48]),([&]()->V{V _obj65792=j::object();j::put(_obj65792,this->_literals[51],V(1.0));j::put(_obj65792,this->_literals[38],V(2.0));j::put(_obj65792,this->_literals[52],V(3.0));return _obj65792;})(),this->_literals[51],V(1.0),V(50.0)});})();return V(std::floor(j::number(_number65791)+.5));})();
_v_65078_src=([&]()->V{V _callee65794=this->_v_64958_pieceOf.get();return j::call(_callee65794,j::Args{_v_65073_thing,this->_literals[61]});})();
return ([&]()->V{V _callee65823=this->_v_64937_effect.get();return j::call(_callee65823,j::Args{_v_65078_src,([&]()->V{V _obj65795=j::object();j::put(_obj65795,this->_literals[23],_v_65076_period.get());j::put(_obj65795,this->_literals[54],([&]()->V{j::Args _array65796;_array65796.push_back(V(0.0));_array65796.push_back(_v_65077_h.get());return j::array(std::move(_array65796));})());V _spread65797=([&]()->V{V _callee65798=this->_v_64961_named.get();return j::call(_callee65798,j::Args{_v_65078_src,_v_65075_p,this->_literals[63]});})();for(const auto &_key:j::keys(_spread65797))j::put(_obj65795,_key,j::get(_spread65797,_key));return _obj65795;})(),j::function([=](const j::Args &_args_fn65079,const V &_receiver_fn65079,const V &_self_fn65079) mutable ->V{
V _v_65080_t;
V _v_65081_s;
V _v_65082_g;
V _v_65083_ctx;
_v_65080_t=_args_fn65079[0];
_v_65081_s=_args_fn65079[1];
_v_65082_g=_args_fn65079[2];
_v_65083_ctx=_args_fn65079[3];
{
(void)(([&]()->V{V _receiver65820=_v_65081_s;V _method65821=this->_literals[59];V _method=j::get(_receiver65820,_method65821);j::Args _params65822=j::Args{_v_65082_g,j::get(_v_65083_ctx,this->_literals[29]),([&]()->V{V _lhs65799=j::get(_v_65083_ctx,this->_literals[32]);V _rhs65800=([&]()->V{V _number65810=([&]()->V{V _lhs65811=_v_65077_h.get();V _rhs65812=([&]()->V{V _number65816=([&]()->V{V _lhs65817=this->_v_64933_TAU.get();V _rhs65818=([&]()->V{V _callee65819=this->_v_64987_phaseAt.get();return j::call(_callee65819,j::Args{_v_65080_t,_v_65076_period.get()});})();return V(j::number(_lhs65817)*j::number(_rhs65818));})();return V(std::sin(j::number(_number65816)));})();return V(j::number(_lhs65811)*j::number(_rhs65812));})();return V(std::floor(j::number(_number65810)+.5));})();return V(j::number(_lhs65799)-j::number(_rhs65800));})()};return j::call(_method,_params65822,_receiver65820);})());

}

return V{};
},4)});})();

}

return V{};
},2);
this->_v_65084_swaying.get()=j::function([=](const j::Args &_args_fn65085,const V &_receiver_fn65085,const V &_self_fn65085) mutable ->V{
V _v_65086_thing;
V _v_65087_o;
_v_65086_thing=_args_fn65085[0];
_v_65087_o=_args_fn65085[1];
{
V _v_65088_p;
j::Cell _v_65089_period;
j::Cell _v_65090_amount;
j::Cell _v_65091_fromTop;
V _v_65092_src;
_v_65088_p=([&]()->V{V _callee65825=this->_v_64951_optionsOf.get();return j::call(_callee65825,j::Args{this->_literals[64],_v_65087_o,([&]()->V{j::Args _array65824;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65824.push_back(_value);_array65824.push_back(this->_literals[65]);_array65824.push_back(this->_literals[66]);return j::array(std::move(_array65824));})()});})();
_v_65089_period.get()=([&]()->V{V _callee65826=this->_v_64952_secondsOf.get();return j::call(_callee65826,j::Args{this->_literals[64],_v_65088_p,V(3.0)});})();
_v_65090_amount.get()=([&]()->V{V _number65829=([&]()->V{V _callee65831=this->_v_64954_sizeOf.get();return j::call(_callee65831,j::Args{this->_literals[67],j::get(_v_65088_p,this->_literals[65]),([&]()->V{V _obj65830=j::object();j::put(_obj65830,this->_literals[68],V(1.0));j::put(_obj65830,this->_literals[38],V(2.0));j::put(_obj65830,this->_literals[69],V(4.0));return _obj65830;})(),this->_literals[38],V(1.0),V(50.0)});})();return V(std::floor(j::number(_number65829)+.5));})();
_v_65091_fromTop.get()=([&]()->V{V _lhs65832=([&]()->V{V _callee65835=this->_v_64956_wordOf.get();return j::call(_callee65835,j::Args{this->_literals[70],j::get(_v_65088_p,this->_literals[66]),([&]()->V{j::Args _array65834;_array65834.push_back(this->_literals[56]);_array65834.push_back(this->_literals[55]);return j::array(std::move(_array65834));})(),this->_literals[56]});})();V _rhs65833=this->_literals[55];return V(j::equal(_lhs65832,_rhs65833,true));})();
_v_65092_src=([&]()->V{V _callee65836=this->_v_64958_pieceOf.get();return j::call(_callee65836,j::Args{_v_65086_thing,this->_literals[64]});})();
return ([&]()->V{V _callee65888=this->_v_64937_effect.get();return j::call(_callee65888,j::Args{_v_65092_src,([&]()->V{V _obj65837=j::object();j::put(_obj65837,this->_literals[23],_v_65089_period.get());j::put(_obj65837,this->_literals[54],([&]()->V{j::Args _array65838;_array65838.push_back(_v_65090_amount.get());_array65838.push_back(V(0.0));return j::array(std::move(_array65838));})());V _spread65839=([&]()->V{V _callee65840=this->_v_64961_named.get();return j::call(_callee65840,j::Args{_v_65092_src,_v_65088_p,this->_literals[71]});})();for(const auto &_key:j::keys(_spread65839))j::put(_obj65837,_key,j::get(_spread65839,_key));return _obj65837;})(),j::function([=](const j::Args &_args_fn65093,const V &_receiver_fn65093,const V &_self_fn65093) mutable ->V{
V _v_65094_t;
V _v_65095_s;
V _v_65096_g;
V _v_65097_ctx;
_v_65094_t=_args_fn65093[0];
_v_65095_s=_args_fn65093[1];
_v_65096_g=_args_fn65093[2];
_v_65097_ctx=_args_fn65093[3];
{
V _v_65098_lean;
_v_65098_lean=([&]()->V{V _lhs65841=_v_65090_amount.get();V _rhs65842=([&]()->V{V _number65846=([&]()->V{V _lhs65847=this->_v_64933_TAU.get();V _rhs65848=([&]()->V{V _callee65849=this->_v_64987_phaseAt.get();return j::call(_callee65849,j::Args{_v_65094_t,_v_65089_period.get()});})();return V(j::number(_lhs65847)*j::number(_rhs65848));})();return V(std::sin(j::number(_number65846)));})();return V(j::number(_lhs65841)*j::number(_rhs65842));})();
{V _v_65099_y;
_v_65099_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs65850=_v_65099_y;V _rhs65851=j::get(_v_65096_g,this->_literals[1]);return j::binary("<",_lhs65850,_rhs65851);})());(void)(j::increment(_v_65099_y,1,false))){
V _v_65100_reach;
V _v_65101_dx;
_v_65100_reach=(j::truth(([&]()->V{V _lhs65852=j::get(_v_65096_g,this->_literals[1]);V _rhs65853=V(1.0);return V(j::equal(_lhs65852,_rhs65853,true));})())?V(1.0):(j::truth(_v_65091_fromTop.get())?([&]()->V{V _lhs65854=_v_65099_y;V _rhs65855=([&]()->V{V _lhs65856=j::get(_v_65096_g,this->_literals[1]);V _rhs65857=V(1.0);return V(j::number(_lhs65856)-j::number(_rhs65857));})();return V(j::number(_lhs65854)/j::number(_rhs65855));})():([&]()->V{V _lhs65858=V(1.0);V _rhs65859=([&]()->V{V _lhs65860=_v_65099_y;V _rhs65861=([&]()->V{V _lhs65862=j::get(_v_65096_g,this->_literals[1]);V _rhs65863=V(1.0);return V(j::number(_lhs65862)-j::number(_rhs65863));})();return V(j::number(_lhs65860)/j::number(_rhs65861));})();return V(j::number(_lhs65858)-j::number(_rhs65859));})()));
_v_65101_dx=([&]()->V{V _number65866=([&]()->V{V _lhs65867=_v_65098_lean;V _rhs65868=_v_65100_reach;return V(j::number(_lhs65867)*j::number(_rhs65868));})();return V(std::floor(j::number(_number65866)+.5));})();
{V _v_65102_x;
_v_65102_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs65869=_v_65102_x;V _rhs65870=j::get(_v_65096_g,this->_literals[0]);return j::binary("<",_lhs65869,_rhs65870);})());(void)(j::increment(_v_65102_x,1,false))){
V _v_65103_j;
_v_65103_j=([&]()->V{V _lhs65871=([&]()->V{V _lhs65873=_v_65099_y;V _rhs65874=j::get(_v_65096_g,this->_literals[0]);return V(j::number(_lhs65873)*j::number(_rhs65874));})();V _rhs65872=_v_65102_x;return j::binary("+",_lhs65871,_rhs65872);})();
if(j::truth(j::get(j::get(_v_65096_g,this->_literals[4]),_v_65103_j))){(void)(([&]()->V{V _receiver65885=_v_65095_s;V _method65886=this->_literals[6];V _method=j::get(_receiver65885,_method65886);j::Args _params65887=j::Args{([&]()->V{V _lhs65875=([&]()->V{V _lhs65877=([&]()->V{V _lhs65879=([&]()->V{V _lhs65881=([&]()->V{V _lhs65883=j::get(_v_65097_ctx,this->_literals[32]);V _rhs65884=_v_65099_y;return j::binary("+",_lhs65883,_rhs65884);})();V _rhs65882=j::get(_v_65095_s,this->_literals[0]);return V(j::number(_lhs65881)*j::number(_rhs65882));})();V _rhs65880=j::get(_v_65097_ctx,this->_literals[29]);return j::binary("+",_lhs65879,_rhs65880);})();V _rhs65878=_v_65102_x;return j::binary("+",_lhs65877,_rhs65878);})();V _rhs65876=_v_65101_dx;return j::binary("+",_lhs65875,_rhs65876);})(),j::get(j::get(_v_65096_g,this->_literals[4]),_v_65103_j),j::get(j::get(_v_65096_g,this->_literals[5]),_v_65103_j)};return j::call(_method,_params65887,_receiver65885);})());
}

}
}

}
}

}

return V{};
},4)});})();

}

return V{};
},2);
this->_v_65104_pulsing.get()=j::function([=](const j::Args &_args_fn65105,const V &_receiver_fn65105,const V &_self_fn65105) mutable ->V{
V _v_65106_thing;
V _v_65107_o;
_v_65106_thing=_args_fn65105[0];
_v_65107_o=_args_fn65105[1];
{
V _v_65108_p;
j::Cell _v_65109_heart;
j::Cell _v_65110_period;
j::Cell _v_65111_amount;
V _v_65112_src;
V _v_65113_room;
j::Cell _v_65114_bump;
j::Cell _v_65118_swell;
_v_65108_p=([&]()->V{V _callee65890=this->_v_64951_optionsOf.get();return j::call(_callee65890,j::Args{this->_literals[72],_v_65107_o,([&]()->V{j::Args _array65889;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65889.push_back(_value);_array65889.push_back(this->_literals[65]);_array65889.push_back(this->_literals[73]);return j::array(std::move(_array65889));})()});})();
_v_65109_heart.get()=([&]()->V{V _lhs65891=([&]()->V{V _callee65894=this->_v_64956_wordOf.get();return j::call(_callee65894,j::Args{this->_literals[74],j::get(_v_65108_p,this->_literals[73]),([&]()->V{j::Args _array65893;_array65893.push_back(this->_literals[75]);_array65893.push_back(this->_literals[76]);return j::array(std::move(_array65893));})(),this->_literals[75]});})();V _rhs65892=this->_literals[76];return V(j::equal(_lhs65891,_rhs65892,true));})();
_v_65110_period.get()=([&]()->V{V _callee65895=this->_v_64952_secondsOf.get();return j::call(_callee65895,j::Args{this->_literals[72],_v_65108_p,(j::truth(_v_65109_heart.get())?V(1.2):V(2.4))});})();
_v_65111_amount.get()=([&]()->V{V _callee65897=this->_v_64954_sizeOf.get();return j::call(_callee65897,j::Args{this->_literals[77],j::get(_v_65108_p,this->_literals[65]),([&]()->V{V _obj65896=j::object();j::put(_obj65896,this->_literals[68],V(0.1));j::put(_obj65896,this->_literals[38],V(0.2));j::put(_obj65896,this->_literals[69],V(0.34));return _obj65896;})(),this->_literals[38],V(0.01),V(2.0)});})();
_v_65112_src=([&]()->V{V _callee65898=this->_v_64958_pieceOf.get();return j::call(_callee65898,j::Args{_v_65106_thing,this->_literals[72]});})();
_v_65113_room=([&]()->V{j::Args _array65899;_array65899.push_back(([&]()->V{V _number65904=([&]()->V{V _lhs65905=([&]()->V{V _lhs65907=j::get(j::get(_v_65112_src,this->_literals[27]),this->_literals[0]);V _rhs65908=_v_65111_amount.get();return V(j::number(_lhs65907)*j::number(_rhs65908));})();V _rhs65906=V(2.0);return V(j::number(_lhs65905)/j::number(_rhs65906));})();return V(std::ceil(j::number(_number65904)));})());_array65899.push_back(([&]()->V{V _number65913=([&]()->V{V _lhs65914=([&]()->V{V _lhs65916=j::get(j::get(_v_65112_src,this->_literals[27]),this->_literals[1]);V _rhs65917=_v_65111_amount.get();return V(j::number(_lhs65916)*j::number(_rhs65917));})();V _rhs65915=V(2.0);return V(j::number(_lhs65914)/j::number(_rhs65915));})();return V(std::ceil(j::number(_number65913)));})());return j::array(std::move(_array65899));})();
_v_65114_bump.get()=j::function([=](const j::Args &_args_fn65115,const V &_receiver_fn65115,const V &_self_fn65115) mutable ->V{
V _v_65116_k;
V _v_65117_at;
_v_65116_k=_args_fn65115[0];
_v_65117_at=_args_fn65115[1];
return ([&]()->V{V _lhs65918=([&]()->V{V _receiver65931=j::builtin("Math");V _method65932=this->_literals[2];V _method=j::get(_receiver65931,_method65932);j::Args _params65933=j::Args{V(0.0),([&]()->V{V _lhs65920=V(1.0);V _rhs65921=([&]()->V{V _lhs65922=([&]()->V{V _number65926=([&]()->V{V _lhs65927=_v_65116_k;V _rhs65928=_v_65117_at;return V(j::number(_lhs65927)-j::number(_rhs65928));})();return V(std::fabs(j::number(_number65926)));})();V _rhs65923=V(0.18);return V(j::number(_lhs65922)/j::number(_rhs65923));})();return V(j::number(_lhs65920)-j::number(_rhs65921));})()};return j::call(_method,_params65933,_receiver65931);})();V _rhs65919=V(2.0);return V(std::pow(j::number(_lhs65918),j::number(_rhs65919)));})();
return V{};
},2);
_v_65118_swell.get()=j::function([=](const j::Args &_args_fn65119,const V &_receiver_fn65119,const V &_self_fn65119) mutable ->V{
V _v_65120_k;
_v_65120_k=_args_fn65119[0];
return (j::truth(_v_65109_heart.get())?([&]()->V{V _receiver65940=j::builtin("Math");V _method65941=this->_literals[2];V _method=j::get(_receiver65940,_method65941);j::Args _params65942=j::Args{([&]()->V{V _callee65934=_v_65114_bump.get();return j::call(_callee65934,j::Args{_v_65120_k,V(0.12)});})(),([&]()->V{V _lhs65935=V(0.7);V _rhs65936=([&]()->V{V _callee65937=_v_65114_bump.get();return j::call(_callee65937,j::Args{_v_65120_k,V(0.36)});})();return V(j::number(_lhs65935)*j::number(_rhs65936));})()};return j::call(_method,_params65942,_receiver65940);})():([&]()->V{V _lhs65943=V(0.5);V _rhs65944=([&]()->V{V _lhs65945=V(0.5);V _rhs65946=([&]()->V{V _number65949=([&]()->V{V _lhs65950=this->_v_64933_TAU.get();V _rhs65951=_v_65120_k;return V(j::number(_lhs65950)*j::number(_rhs65951));})();return V(std::cos(j::number(_number65949)));})();return V(j::number(_lhs65945)*j::number(_rhs65946));})();return V(j::number(_lhs65943)-j::number(_rhs65944));})());
return V{};
},1);
return ([&]()->V{V _callee65962=this->_v_64937_effect.get();return j::call(_callee65962,j::Args{_v_65112_src,([&]()->V{V _obj65952=j::object();j::put(_obj65952,this->_literals[23],_v_65110_period.get());j::put(_obj65952,this->_literals[54],_v_65113_room);V _spread65953=([&]()->V{V _callee65954=this->_v_64961_named.get();return j::call(_callee65954,j::Args{_v_65112_src,_v_65108_p,(j::truth(_v_65109_heart.get())?this->_literals[78]:this->_literals[79])});})();for(const auto &_key:j::keys(_spread65953))j::put(_obj65952,_key,j::get(_spread65953,_key));return _obj65952;})(),j::function([=](const j::Args &_args_fn65121,const V &_receiver_fn65121,const V &_self_fn65121) mutable ->V{
V _v_65122_t;
V _v_65123_s;
V _v_65124_g;
V _v_65125_ctx;
_v_65122_t=_args_fn65121[0];
_v_65123_s=_args_fn65121[1];
_v_65124_g=_args_fn65121[2];
_v_65125_ctx=_args_fn65121[3];
{
(void)(([&]()->V{V _callee65961=this->_v_64969_drawScaled.get();return j::call(_callee65961,j::Args{_v_65123_s,_v_65124_g,j::get(_v_65125_ctx,this->_literals[29]),j::get(_v_65125_ctx,this->_literals[32]),([&]()->V{V _lhs65955=V(1.0);V _rhs65956=([&]()->V{V _lhs65957=_v_65111_amount.get();V _rhs65958=([&]()->V{V _callee65960=_v_65118_swell.get();return j::call(_callee65960,j::Args{([&]()->V{V _callee65959=this->_v_64987_phaseAt.get();return j::call(_callee65959,j::Args{_v_65122_t,_v_65110_period.get()});})()});})();return V(j::number(_lhs65957)*j::number(_rhs65958));})();return j::binary("+",_lhs65955,_rhs65956);})()});})());

}

return V{};
},4)});})();

}

return V{};
},2);
this->_v_65126_blinking.get()=j::function([=](const j::Args &_args_fn65127,const V &_receiver_fn65127,const V &_self_fn65127) mutable ->V{
V _v_65128_thing;
V _v_65129_o;
_v_65128_thing=_args_fn65127[0];
_v_65129_o=_args_fn65127[1];
{
V _v_65130_p;
j::Cell _v_65131_period;
j::Cell _v_65132_on;
V _v_65133_src;
j::Cell _v_65134_dot;
_v_65130_p=([&]()->V{V _callee65964=this->_v_64951_optionsOf.get();return j::call(_callee65964,j::Args{this->_literals[80],_v_65129_o,([&]()->V{j::Args _array65963;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65963.push_back(_value);_array65963.push_back(this->_literals[81]);return j::array(std::move(_array65963));})()});})();
_v_65131_period.get()=([&]()->V{V _callee65965=this->_v_64952_secondsOf.get();return j::call(_callee65965,j::Args{this->_literals[80],_v_65130_p,V(1.2)});})();
_v_65132_on.get()=([&]()->V{V _callee65966=this->_v_64950_numberOf.get();return j::call(_callee65966,j::Args{this->_literals[82],j::get(_v_65130_p,this->_literals[81]),V(0.6),V(0.05),V(0.9)});})();
_v_65133_src=([&]()->V{V _callee65967=this->_v_64958_pieceOf.get();return j::call(_callee65967,j::Args{_v_65128_thing,this->_literals[80]});})();
_v_65134_dot.get()=([&]()->V{V _receiver65968=this->_literals[83];V _method65969=this->_literals[84];V _method=j::get(_receiver65968,_method65969);j::Args _params65970=j::Args{V(0.0)};return j::call(_method,_params65970,_receiver65968);})();
return ([&]()->V{V _callee65995=this->_v_64937_effect.get();return j::call(_callee65995,j::Args{_v_65133_src,([&]()->V{V _obj65971=j::object();j::put(_obj65971,this->_literals[23],_v_65131_period.get());V _spread65972=([&]()->V{V _callee65973=this->_v_64961_named.get();return j::call(_callee65973,j::Args{_v_65133_src,_v_65130_p,this->_literals[85]});})();for(const auto &_key:j::keys(_spread65972))j::put(_obj65971,_key,j::get(_spread65972,_key));return _obj65971;})(),j::function([=](const j::Args &_args_fn65135,const V &_receiver_fn65135,const V &_self_fn65135) mutable ->V{
V _v_65136_t;
V _v_65137_s;
V _v_65138_g;
_v_65136_t=_args_fn65135[0];
_v_65137_s=_args_fn65135[1];
_v_65138_g=_args_fn65135[2];
{
V _v_65139_k;
_v_65139_k=([&]()->V{V _callee65974=this->_v_64987_phaseAt.get();return j::call(_callee65974,j::Args{_v_65136_t,_v_65131_period.get()});})();
if(j::truth(([&]()->V{V _lhs65975=_v_65139_k;V _rhs65976=_v_65132_on.get();return j::binary("<",_lhs65975,_rhs65976);})())){return ([&]()->V{V _receiver65977=_v_65137_s;V _method65978=this->_literals[59];V _method=j::get(_receiver65977,_method65978);j::Args _params65979=j::Args{_v_65138_g,V(0.0),V(0.0)};return j::call(_method,_params65979,_receiver65977);})();
}
if(j::truth(([&]()->V{V _logical65980=([&]()->V{V _lhs65981=_v_65139_k;V _rhs65982=([&]()->V{V _lhs65983=_v_65132_on.get();V _rhs65984=V(0.08);return j::binary("+",_lhs65983,_rhs65984);})();return j::binary("<",_lhs65981,_rhs65982);})();return !j::truth(_logical65980)?([&]()->V{V _lhs65985=_v_65139_k;V _rhs65986=V(0.92);return j::binary(">",_lhs65985,_rhs65986);})():_logical65980;})())){{V _v_65140_i;
_v_65140_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs65987=_v_65140_i;V _rhs65988=j::get(j::get(_v_65138_g,this->_literals[4]),this->_literals[86]);return j::binary("<",_lhs65987,_rhs65988);})());(void)(j::increment(_v_65140_i,1,false))){if(j::truth(([&]()->V{V _logical65989=j::get(j::get(_v_65138_g,this->_literals[4]),_v_65140_i);return j::truth(_logical65989)?([&]()->V{V _lhs65990=j::get(j::get(_v_65138_g,this->_literals[4]),_v_65140_i);V _rhs65991=V(32.0);return V(!j::equal(_lhs65990,_rhs65991,true));})():_logical65989;})())){(void)(([&]()->V{V _receiver65992=_v_65137_s;V _method65993=this->_literals[6];V _method=j::get(_receiver65992,_method65993);j::Args _params65994=j::Args{_v_65140_i,_v_65134_dot.get(),j::get(j::get(_v_65138_g,this->_literals[5]),_v_65140_i)};return j::call(_method,_params65994,_receiver65992);})());
}
}}
}

}

return V{};
},3)});})();

}

return V{};
},2);
this->_v_65141_shaking.get()=j::function([=](const j::Args &_args_fn65142,const V &_receiver_fn65142,const V &_self_fn65142) mutable ->V{
V _v_65143_thing;
V _v_65144_o;
_v_65143_thing=_args_fn65142[0];
_v_65144_o=_args_fn65142[1];
{
V _v_65145_p;
V _v_65146_every;
V _v_65147_amount;
V _v_65148_nonstop;
V _v_65149_src;
_v_65145_p=([&]()->V{V _callee65997=this->_v_64951_optionsOf.get();return j::call(_callee65997,j::Args{this->_literals[87],_v_65144_o,([&]()->V{j::Args _array65996;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array65996.push_back(_value);_array65996.push_back(this->_literals[65]);_array65996.push_back(this->_literals[88]);return j::array(std::move(_array65996));})()});})();
_v_65146_every=([&]()->V{V _callee65998=this->_v_64952_secondsOf.get();return j::call(_callee65998,j::Args{this->_literals[87],_v_65145_p,V(2.0)});})();
_v_65147_amount=([&]()->V{V _number66001=([&]()->V{V _callee66003=this->_v_64954_sizeOf.get();return j::call(_callee66003,j::Args{this->_literals[89],j::get(_v_65145_p,this->_literals[65]),([&]()->V{V _obj66002=j::object();j::put(_obj66002,this->_literals[68],V(1.0));j::put(_obj66002,this->_literals[38],V(2.0));j::put(_obj66002,this->_literals[69],V(3.0));return _obj66002;})(),this->_literals[68],V(1.0),V(20.0)});})();return V(std::floor(j::number(_number66001)+.5));})();
_v_65148_nonstop=([&]()->V{V _callee66004=this->_v_64946_boolOf.get();return j::call(_callee66004,j::Args{this->_literals[90],j::get(_v_65145_p,this->_literals[88]),V(false)});})();
_v_65149_src=([&]()->V{V _callee66005=this->_v_64958_pieceOf.get();return j::call(_callee66005,j::Args{_v_65143_thing,this->_literals[87]});})();
return ([&]()->V{V _callee66009=this->_v_64938_shake.get();return j::call(_callee66009,j::Args{_v_65149_src,([&]()->V{V _obj66006=j::object();j::put(_obj66006,this->_literals[65],_v_65147_amount);j::put(_obj66006,this->_literals[91],(j::truth(_v_65148_nonstop)?V(0.25):_v_65146_every));j::put(_obj66006,this->_literals[86],(j::truth(_v_65148_nonstop)?V(0.25):V(0.3)));V _spread66007=([&]()->V{V _callee66008=this->_v_64961_named.get();return j::call(_callee66008,j::Args{_v_65149_src,_v_65145_p,(j::truth(_v_65148_nonstop)?this->_literals[92]:this->_literals[93])});})();for(const auto &_key:j::keys(_spread66007))j::put(_obj66006,_key,j::get(_spread66007,_key));return _obj66006;})()});})();

}

return V{};
},2);
this->_v_65150_drifting.get()=j::function([=](const j::Args &_args_fn65151,const V &_receiver_fn65151,const V &_self_fn65151) mutable ->V{
V _v_65152_thing;
V _v_65153_o;
_v_65152_thing=_args_fn65151[0];
_v_65153_o=_args_fn65151[1];
{
V _v_65154_p;
V _v_65155_period;
V _v_65156_to;
V _v_65157_across;
V _v_65158_lane;
V _v_65159_src;
V _v_65160_stage;
V _v_65161_start;
V _v_65162_side;
V _v_65163_anchor;
V _v_65164_moved;
_v_65154_p=([&]()->V{V _callee66011=this->_v_64951_optionsOf.get();return j::call(_callee66011,j::Args{this->_literals[94],_v_65153_o,([&]()->V{j::Args _array66010;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array66010.push_back(_value);_array66010.push_back(this->_literals[95]);_array66010.push_back(this->_literals[96]);_array66010.push_back(this->_literals[97]);_array66010.push_back(this->_literals[0]);_array66010.push_back(this->_literals[1]);return j::array(std::move(_array66010));})()});})();
_v_65155_period=([&]()->V{V _callee66012=this->_v_64952_secondsOf.get();return j::call(_callee66012,j::Args{this->_literals[94],_v_65154_p,V(8.0)});})();
_v_65156_to=([&]()->V{V _callee66014=this->_v_64956_wordOf.get();return j::call(_callee66014,j::Args{this->_literals[98],j::get(_v_65154_p,this->_literals[95]),([&]()->V{j::Args _array66013;_array66013.push_back(this->_literals[99]);_array66013.push_back(this->_literals[100]);_array66013.push_back(this->_literals[101]);_array66013.push_back(this->_literals[102]);return j::array(std::move(_array66013));})(),this->_literals[99]});})();
_v_65157_across=([&]()->V{V _logical66015=([&]()->V{V _lhs66016=_v_65156_to;V _rhs66017=this->_literals[100];return V(j::equal(_lhs66016,_rhs66017,true));})();return !j::truth(_logical66015)?([&]()->V{V _lhs66018=_v_65156_to;V _rhs66019=this->_literals[99];return V(j::equal(_lhs66018,_rhs66019,true));})():_logical66015;})();
_v_65158_lane=([&]()->V{V _callee66022=this->_v_64956_wordOf.get();return j::call(_callee66022,j::Args{this->_literals[103],j::get(_v_65154_p,this->_literals[97]),(j::truth(_v_65157_across)?([&]()->V{j::Args _array66020;_array66020.push_back(this->_literals[55]);_array66020.push_back(this->_literals[104]);_array66020.push_back(this->_literals[56]);return j::array(std::move(_array66020));})():([&]()->V{j::Args _array66021;_array66021.push_back(this->_literals[100]);_array66021.push_back(this->_literals[104]);_array66021.push_back(this->_literals[99]);return j::array(std::move(_array66021));})()),this->_literals[104]});})();
_v_65159_src=([&]()->V{V _callee66023=this->_v_64958_pieceOf.get();return j::call(_callee66023,j::Args{_v_65152_thing,this->_literals[94]});})();
if(j::truth(([&]()->V{V _logical66024=([&]()->V{V _lhs66025=j::get(_v_65154_p,this->_literals[96]);V _rhs66026=j::builtin("undefined");return V(!j::equal(_lhs66025,_rhs66026,true));})();return j::truth(_logical66024)?([&]()->V{V _logical66027=([&]()->V{V _lhs66028=j::get(_v_65154_p,this->_literals[0]);V _rhs66029=j::builtin("undefined");return V(!j::equal(_lhs66028,_rhs66029,true));})();return !j::truth(_logical66027)?([&]()->V{V _lhs66030=j::get(_v_65154_p,this->_literals[1]);V _rhs66031=j::builtin("undefined");return V(!j::equal(_lhs66030,_rhs66031,true));})():_logical66027;})():_logical66024;})())){(void)(([&]()->V{V _callee66032=this->_v_64934_fail.get();return j::call(_callee66032,j::Args{this->_literals[105]});})());
}
_v_65160_stage=(j::truth(([&]()->V{V _lhs66033=j::get(_v_65154_p,this->_literals[96]);V _rhs66034=j::builtin("undefined");return V(!j::equal(_lhs66033,_rhs66034,true));})())?([&]()->V{V _callee66035=this->_v_64958_pieceOf.get();return j::call(_callee66035,j::Args{j::get(_v_65154_p,this->_literals[96]),this->_literals[106]});})():([&]()->V{V _callee66070=this->_v_64932_Surface.get();return j::construct(_callee66070,j::Args{([&]()->V{V _number66044=([&]()->V{V _callee66052=this->_v_64950_numberOf.get();return j::call(_callee66052,j::Args{this->_literals[107],j::get(_v_65154_p,this->_literals[0]),(j::truth(_v_65157_across)?([&]()->V{V _receiver66049=j::builtin("Math");V _method66050=this->_literals[2];V _method=j::get(_receiver66049,_method66050);j::Args _params66051=j::Args{V(64.0),([&]()->V{V _lhs66045=j::get(j::get(_v_65159_src,this->_literals[27]),this->_literals[0]);V _rhs66046=V(16.0);return j::binary("+",_lhs66045,_rhs66046);})()};return j::call(_method,_params66051,_receiver66049);})():j::get(j::get(_v_65159_src,this->_literals[27]),this->_literals[0])),V(1.0),V(320.0)});})();return V(std::floor(j::number(_number66044)+.5));})(),([&]()->V{V _number66061=([&]()->V{V _callee66069=this->_v_64950_numberOf.get();return j::call(_callee66069,j::Args{this->_literals[108],j::get(_v_65154_p,this->_literals[1]),(j::truth(_v_65157_across)?j::get(j::get(_v_65159_src,this->_literals[27]),this->_literals[1]):([&]()->V{V _receiver66066=j::builtin("Math");V _method66067=this->_literals[2];V _method=j::get(_receiver66066,_method66067);j::Args _params66068=j::Args{V(24.0),([&]()->V{V _lhs66062=j::get(j::get(_v_65159_src,this->_literals[27]),this->_literals[1]);V _rhs66063=V(8.0);return j::binary("+",_lhs66062,_rhs66063);})()};return j::call(_method,_params66068,_receiver66066);})()),V(1.0),V(120.0)});})();return V(std::floor(j::number(_number66061)+.5));})()});})());
_v_65161_start=j::get(([&]()->V{V _obj66071=j::object();j::put(_obj66071,this->_literals[99],this->_literals[100]);j::put(_obj66071,this->_literals[100],this->_literals[99]);j::put(_obj66071,this->_literals[102],this->_literals[55]);j::put(_obj66071,this->_literals[101],this->_literals[56]);return _obj66071;})(),_v_65156_to);
_v_65162_side=(j::truth(([&]()->V{V _lhs66072=_v_65158_lane;V _rhs66073=this->_literals[104];return V(j::equal(_lhs66072,_rhs66073,true));})())?this->_literals[109]:_v_65158_lane);
_v_65163_anchor=(j::truth(_v_65157_across)?(j::truth(_v_65162_side)?([&]()->V{std::u16string _text66074;_text66074+=u"";_text66074+=j::string(_v_65162_side);_text66074+=u"-";_text66074+=j::string(_v_65161_start);_text66074+=u"";return V(std::move(_text66074));})():_v_65161_start):(j::truth(_v_65162_side)?([&]()->V{std::u16string _text66075;_text66075+=u"";_text66075+=j::string(_v_65161_start);_text66075+=u"-";_text66075+=j::string(_v_65162_side);_text66075+=u"";return V(std::move(_text66075));})():_v_65161_start));
_v_65164_moved=([&]()->V{V _callee66078=this->_v_64936_layer.get();return j::call(_callee66078,j::Args{_v_65160_stage,([&]()->V{V _obj66076=j::object();j::put(_obj66076,this->_literals[45],_v_65159_src);j::put(_obj66076,this->_literals[46],_v_65163_anchor);j::put(_obj66076,this->_literals[110],([&]()->V{V _obj66077=j::object();j::put(_obj66077,this->_literals[95],_v_65156_to);j::put(_obj66077,this->_literals[23],_v_65155_period);return _obj66077;})());return _obj66076;})()});})();
return ([&]()->V{V _callee66083=this->_v_64955_titled.get();return j::call(_callee66083,j::Args{_v_65164_moved,([&]()->V{V _logical66079=j::get(_v_65154_p,this->_literals[14]);return j::nullish(_logical66079)?j::get(j::get(_v_65159_src,this->_literals[27]),this->_literals[14]):_logical66079;})(),([&]()->V{V _logical66080=j::get(_v_65154_p,this->_literals[18]);return j::nullish(_logical66080)?([&]()->V{std::u16string _text66081;_text66081+=u"";_text66081+=j::string(([&]()->V{V _logical66082=j::get(_v_65154_p,this->_literals[14]);return j::nullish(_logical66082)?j::get(j::get(_v_65159_src,this->_literals[27]),this->_literals[14]):_logical66082;})());_text66081+=u", drifting ";_text66081+=j::string(_v_65156_to);_text66081+=u"";return V(std::move(_text66081));})():_logical66080;})()});})();

}

return V{};
},2);
this->_v_65166_timing.get()=j::function([=](const j::Args &_args_fn65167,const V &_receiver_fn65167,const V &_self_fn65167) mutable ->V{
V _v_65168_what;
V _v_65169_p;
V _v_65170_normal;
_v_65168_what=_args_fn65167[0];
_v_65169_p=_args_fn65167[1];
_v_65170_normal=_args_fn65167[2];
{
V _v_65171_move;
V _v_65172_hold;
if(j::truth(([&]()->V{V _logical66084=([&]()->V{V _lhs66085=j::get(_v_65169_p,this->_literals[111]);V _rhs66086=j::builtin("undefined");return V(!j::equal(_lhs66085,_rhs66086,true));})();return j::truth(_logical66084)?([&]()->V{V _lhs66087=j::get(_v_65169_p,this->_literals[23]);V _rhs66088=j::builtin("undefined");return V(!j::equal(_lhs66087,_rhs66088,true));})():_logical66084;})())){(void)(([&]()->V{V _callee66090=this->_v_64934_fail.get();return j::call(_callee66090,j::Args{([&]()->V{std::u16string _text66089;_text66089+=u"";_text66089+=j::string(_v_65168_what);_text66089+=u" takes seconds or period, which are the same, not both";return V(std::move(_text66089));})()});})());
}
_v_65171_move=([&]()->V{V _callee66093=this->_v_64952_secondsOf.get();return j::call(_callee66093,j::Args{_v_65168_what,([&]()->V{V _obj66091=j::object();j::put(_obj66091,this->_literals[112],j::get(_v_65169_p,this->_literals[112]));j::put(_obj66091,this->_literals[23],([&]()->V{V _logical66092=j::get(_v_65169_p,this->_literals[111]);return j::nullish(_logical66092)?j::get(_v_65169_p,this->_literals[23]):_logical66092;})());return _obj66091;})(),_v_65170_normal});})();
if(j::truth(([&]()->V{V _lhs66094=j::get(_v_65169_p,this->_literals[113]);V _rhs66095=this->_literals[114];return V(j::equal(_lhs66094,_rhs66095,true));})())){return ([&]()->V{V _obj66096=j::object();j::put(_obj66096,this->_literals[110],_v_65171_move);j::put(_obj66096,this->_literals[113],j::builtin("Infinity"));j::put(_obj66096,this->_literals[115],j::builtin("undefined"));return _obj66096;})();
}
_v_65172_hold=([&]()->V{V _callee66098=this->_v_64950_numberOf.get();return j::call(_callee66098,j::Args{([&]()->V{std::u16string _text66097;_text66097+=u"";_text66097+=j::string(_v_65168_what);_text66097+=u"'s hold";return V(std::move(_text66097));})(),j::get(_v_65169_p,this->_literals[113]),V(2.0),V(0.0),V(60.0)});})();
return ([&]()->V{V _obj66099=j::object();j::put(_obj66099,this->_literals[110],_v_65171_move);j::put(_obj66099,this->_literals[113],_v_65172_hold);j::put(_obj66099,this->_literals[115],([&]()->V{V _lhs66100=_v_65171_move;V _rhs66101=_v_65172_hold;return j::binary("+",_lhs66100,_rhs66101);})());return _obj66099;})();

}

return V{};
},3);
this->_v_65173_growIn.get()=j::function([=](const j::Args &_args_fn65174,const V &_receiver_fn65174,const V &_self_fn65174) mutable ->V{
V _v_65175_thing;
V _v_65176_o;
_v_65175_thing=_args_fn65174[0];
_v_65176_o=_args_fn65174[1];
{
V _v_65177_p;
j::Cell _v_65178_move;
j::Cell _v_65179_loop;
j::Cell _v_65180_curve;
V _v_65181_src;
V _v_65182_room;
_v_65177_p=([&]()->V{V _callee66102=this->_v_64951_optionsOf.get();return j::call(_callee66102,j::Args{this->_literals[116],_v_65176_o,this->_v_65165_ENTRANCE.get()});})();
V _pattern66104=([&]()->V{V _callee66103=this->_v_65166_timing.get();return j::call(_callee66103,j::Args{this->_literals[116],_v_65177_p,V(0.6)});})();
_v_65178_move.get()=j::get(_pattern66104,this->_literals[110]);
_v_65179_loop.get()=j::get(_pattern66104,this->_literals[115]);
_v_65180_curve.get()=([&]()->V{V _callee66105=this->_v_64948_easeOf.get();return j::call(_callee66105,j::Args{this->_literals[117],j::get(_v_65177_p,this->_literals[118]),this->_literals[119]});})();
_v_65181_src=([&]()->V{V _callee66106=this->_v_64958_pieceOf.get();return j::call(_callee66106,j::Args{_v_65175_thing,this->_literals[116]});})();
_v_65182_room=([&]()->V{j::Args _array66107;_array66107.push_back(([&]()->V{V _number66110=([&]()->V{V _lhs66111=j::get(j::get(_v_65181_src,this->_literals[27]),this->_literals[0]);V _rhs66112=V(0.1);return V(j::number(_lhs66111)*j::number(_rhs66112));})();return V(std::ceil(j::number(_number66110)));})());_array66107.push_back(([&]()->V{V _number66115=([&]()->V{V _lhs66116=j::get(j::get(_v_65181_src,this->_literals[27]),this->_literals[1]);V _rhs66117=V(0.1);return V(j::number(_lhs66116)*j::number(_rhs66117));})();return V(std::ceil(j::number(_number66115)));})());return j::array(std::move(_array66107));})();
return ([&]()->V{V _callee66136=this->_v_64937_effect.get();return j::call(_callee66136,j::Args{_v_65181_src,([&]()->V{V _obj66118=j::object();V _spread66119=(j::truth(_v_65179_loop.get())?([&]()->V{V _obj66120=j::object();j::put(_obj66120,this->_literals[23],_v_65179_loop.get());return _obj66120;})():([&]()->V{V _obj66121=j::object();j::put(_obj66121,this->_literals[120],V(true));return _obj66121;})());for(const auto &_key:j::keys(_spread66119))j::put(_obj66118,_key,j::get(_spread66119,_key));j::put(_obj66118,this->_literals[121],_v_65178_move.get());j::put(_obj66118,this->_literals[54],_v_65182_room);V _spread66122=([&]()->V{V _callee66123=this->_v_64961_named.get();return j::call(_callee66123,j::Args{_v_65181_src,_v_65177_p,this->_literals[122]});})();for(const auto &_key:j::keys(_spread66122))j::put(_obj66118,_key,j::get(_spread66122,_key));return _obj66118;})(),j::function([=](const j::Args &_args_fn65183,const V &_receiver_fn65183,const V &_self_fn65183) mutable ->V{
V _v_65184_t;
V _v_65185_s;
V _v_65186_g;
V _v_65187_ctx;
_v_65184_t=_args_fn65183[0];
_v_65185_s=_args_fn65183[1];
_v_65186_g=_args_fn65183[2];
_v_65187_ctx=_args_fn65183[3];
{
V _v_65188_u;
_v_65188_u=(j::truth(_v_65179_loop.get())?([&]()->V{V _lhs66124=([&]()->V{V _callee66126=this->_v_64987_phaseAt.get();return j::call(_callee66126,j::Args{_v_65184_t,_v_65179_loop.get()});})();V _rhs66125=_v_65179_loop.get();return V(j::number(_lhs66124)*j::number(_rhs66125));})():_v_65184_t);
(void)(([&]()->V{V _callee66135=this->_v_64969_drawScaled.get();return j::call(_callee66135,j::Args{_v_65185_s,_v_65186_g,j::get(_v_65187_ctx,this->_literals[29]),j::get(_v_65187_ctx,this->_literals[32]),([&]()->V{V _callee66134=_v_65180_curve.get();return j::call(_callee66134,j::Args{([&]()->V{V _receiver66131=j::builtin("Math");V _method66132=this->_literals[3];V _method=j::get(_receiver66131,_method66132);j::Args _params66133=j::Args{V(1.0),([&]()->V{V _lhs66127=_v_65188_u;V _rhs66128=_v_65178_move.get();return V(j::number(_lhs66127)/j::number(_rhs66128));})()};return j::call(_method,_params66133,_receiver66131);})()});})()});})());

}

return V{};
},4)});})();

}

return V{};
},2);
this->_v_65189_slideIn.get()=j::function([=](const j::Args &_args_fn65190,const V &_receiver_fn65190,const V &_self_fn65190) mutable ->V{
V _v_65191_thing;
V _v_65192_o;
_v_65191_thing=_args_fn65190[0];
_v_65192_o=_args_fn65190[1];
{
V _v_65193_p;
j::Cell _v_65194_move;
j::Cell _v_65195_loop;
j::Cell _v_65196_curve;
j::Cell _v_65197_from;
V _v_65198_src;
_v_65193_p=([&]()->V{V _callee66138=this->_v_64951_optionsOf.get();return j::call(_callee66138,j::Args{this->_literals[123],_v_65192_o,([&]()->V{j::Args _array66137;for(const auto &_value:j::elements(this->_v_65165_ENTRANCE.get()))_array66137.push_back(_value);_array66137.push_back(this->_literals[66]);return j::array(std::move(_array66137));})()});})();
V _pattern66140=([&]()->V{V _callee66139=this->_v_65166_timing.get();return j::call(_callee66139,j::Args{this->_literals[123],_v_65193_p,V(0.8)});})();
_v_65194_move.get()=j::get(_pattern66140,this->_literals[110]);
_v_65195_loop.get()=j::get(_pattern66140,this->_literals[115]);
_v_65196_curve.get()=([&]()->V{V _callee66141=this->_v_64948_easeOf.get();return j::call(_callee66141,j::Args{this->_literals[124],j::get(_v_65193_p,this->_literals[118]),this->_literals[119]});})();
_v_65197_from.get()=([&]()->V{V _callee66143=this->_v_64956_wordOf.get();return j::call(_callee66143,j::Args{this->_literals[125],j::get(_v_65193_p,this->_literals[66]),([&]()->V{j::Args _array66142;_array66142.push_back(this->_literals[100]);_array66142.push_back(this->_literals[99]);_array66142.push_back(this->_literals[55]);_array66142.push_back(this->_literals[56]);return j::array(std::move(_array66142));})(),this->_literals[100]});})();
_v_65198_src=([&]()->V{V _callee66144=this->_v_64958_pieceOf.get();return j::call(_callee66144,j::Args{_v_65191_thing,this->_literals[123]});})();
return ([&]()->V{V _callee66184=this->_v_64937_effect.get();return j::call(_callee66184,j::Args{_v_65198_src,([&]()->V{V _obj66145=j::object();V _spread66146=(j::truth(_v_65195_loop.get())?([&]()->V{V _obj66147=j::object();j::put(_obj66147,this->_literals[23],_v_65195_loop.get());return _obj66147;})():([&]()->V{V _obj66148=j::object();j::put(_obj66148,this->_literals[120],V(true));return _obj66148;})());for(const auto &_key:j::keys(_spread66146))j::put(_obj66145,_key,j::get(_spread66146,_key));j::put(_obj66145,this->_literals[121],_v_65194_move.get());V _spread66149=([&]()->V{V _callee66151=this->_v_64961_named.get();return j::call(_callee66151,j::Args{_v_65198_src,_v_65193_p,([&]()->V{std::u16string _text66150;_text66150+=u"sliding in from the ";_text66150+=j::string(_v_65197_from.get());_text66150+=u"";return V(std::move(_text66150));})()});})();for(const auto &_key:j::keys(_spread66149))j::put(_obj66145,_key,j::get(_spread66149,_key));return _obj66145;})(),j::function([=](const j::Args &_args_fn65199,const V &_receiver_fn65199,const V &_self_fn65199) mutable ->V{
V _v_65200_t;
V _v_65201_s;
V _v_65202_g;
_v_65200_t=_args_fn65199[0];
_v_65201_s=_args_fn65199[1];
_v_65202_g=_args_fn65199[2];
{
V _v_65203_u;
V _v_65204_left;
V _v_65205_dx;
V _v_65206_dy;
_v_65203_u=(j::truth(_v_65195_loop.get())?([&]()->V{V _lhs66152=([&]()->V{V _callee66154=this->_v_64987_phaseAt.get();return j::call(_callee66154,j::Args{_v_65200_t,_v_65195_loop.get()});})();V _rhs66153=_v_65195_loop.get();return V(j::number(_lhs66152)*j::number(_rhs66153));})():_v_65200_t);
_v_65204_left=([&]()->V{V _lhs66155=V(1.0);V _rhs66156=([&]()->V{V _callee66164=_v_65196_curve.get();return j::call(_callee66164,j::Args{([&]()->V{V _receiver66161=j::builtin("Math");V _method66162=this->_literals[3];V _method=j::get(_receiver66161,_method66162);j::Args _params66163=j::Args{V(1.0),([&]()->V{V _lhs66157=_v_65203_u;V _rhs66158=_v_65194_move.get();return V(j::number(_lhs66157)/j::number(_rhs66158));})()};return j::call(_method,_params66163,_receiver66161);})()});})();return V(j::number(_lhs66155)-j::number(_rhs66156));})();
V _pattern66170=j::get(([&]()->V{V _obj66165=j::object();j::put(_obj66165,this->_literals[100],([&]()->V{j::Args _array66166;_array66166.push_back(j::unary("-",j::get(_v_65202_g,this->_literals[0])));_array66166.push_back(V(0.0));return j::array(std::move(_array66166));})());j::put(_obj66165,this->_literals[99],([&]()->V{j::Args _array66167;_array66167.push_back(j::get(_v_65202_g,this->_literals[0]));_array66167.push_back(V(0.0));return j::array(std::move(_array66167));})());j::put(_obj66165,this->_literals[55],([&]()->V{j::Args _array66168;_array66168.push_back(V(0.0));_array66168.push_back(j::unary("-",j::get(_v_65202_g,this->_literals[1])));return j::array(std::move(_array66168));})());j::put(_obj66165,this->_literals[56],([&]()->V{j::Args _array66169;_array66169.push_back(V(0.0));_array66169.push_back(j::get(_v_65202_g,this->_literals[1]));return j::array(std::move(_array66169));})());return _obj66165;})(),_v_65197_from.get());
_v_65205_dx=j::get(_pattern66170,V(0));
_v_65206_dy=j::get(_pattern66170,V(1));
(void)(([&]()->V{V _receiver66181=_v_65201_s;V _method66182=this->_literals[59];V _method=j::get(_receiver66181,_method66182);j::Args _params66183=j::Args{_v_65202_g,([&]()->V{V _number66173=([&]()->V{V _lhs66174=_v_65205_dx;V _rhs66175=_v_65204_left;return V(j::number(_lhs66174)*j::number(_rhs66175));})();return V(std::floor(j::number(_number66173)+.5));})(),([&]()->V{V _number66178=([&]()->V{V _lhs66179=_v_65206_dy;V _rhs66180=_v_65204_left;return V(j::number(_lhs66179)*j::number(_rhs66180));})();return V(std::floor(j::number(_number66178)+.5));})()};return j::call(_method,_params66183,_receiver66181);})());

}

return V{};
},3)});})();

}

return V{};
},2);
this->_v_65207_slideOut.get()=j::function([=](const j::Args &_args_fn65208,const V &_receiver_fn65208,const V &_self_fn65208) mutable ->V{
V _v_65209_thing;
V _v_65210_o;
_v_65209_thing=_args_fn65208[0];
_v_65210_o=_args_fn65208[1];
{
V _v_65211_p;
j::Cell _v_65212_move;
j::Cell _v_65213_hold;
j::Cell _v_65214_curve;
j::Cell _v_65215_to;
V _v_65216_src;
j::Cell _v_65217_loop;
_v_65211_p=([&]()->V{V _callee66186=this->_v_64951_optionsOf.get();return j::call(_callee66186,j::Args{this->_literals[126],_v_65210_o,([&]()->V{j::Args _array66185;for(const auto &_value:j::elements(this->_v_65165_ENTRANCE.get()))_array66185.push_back(_value);_array66185.push_back(this->_literals[95]);return j::array(std::move(_array66185));})()});})();
if(j::truth(([&]()->V{V _lhs66187=j::get(_v_65211_p,this->_literals[113]);V _rhs66188=this->_literals[114];return V(j::equal(_lhs66187,_rhs66188,true));})())){(void)(([&]()->V{V _callee66189=this->_v_64934_fail.get();return j::call(_callee66189,j::Args{this->_literals[127]});})());
}
V _pattern66191=([&]()->V{V _callee66190=this->_v_65166_timing.get();return j::call(_callee66190,j::Args{this->_literals[126],_v_65211_p,V(0.8)});})();
_v_65212_move.get()=j::get(_pattern66191,this->_literals[110]);
_v_65213_hold.get()=j::get(_pattern66191,this->_literals[113]);
_v_65214_curve.get()=([&]()->V{V _callee66192=this->_v_64948_easeOf.get();return j::call(_callee66192,j::Args{this->_literals[128],j::get(_v_65211_p,this->_literals[118]),this->_literals[129]});})();
_v_65215_to.get()=([&]()->V{V _callee66194=this->_v_64956_wordOf.get();return j::call(_callee66194,j::Args{this->_literals[130],j::get(_v_65211_p,this->_literals[95]),([&]()->V{j::Args _array66193;_array66193.push_back(this->_literals[99]);_array66193.push_back(this->_literals[100]);_array66193.push_back(this->_literals[55]);_array66193.push_back(this->_literals[56]);return j::array(std::move(_array66193));})(),this->_literals[99]});})();
_v_65216_src=([&]()->V{V _callee66195=this->_v_64958_pieceOf.get();return j::call(_callee66195,j::Args{_v_65209_thing,this->_literals[126]});})();
_v_65217_loop.get()=([&]()->V{V _lhs66196=([&]()->V{V _lhs66198=_v_65213_hold.get();V _rhs66199=_v_65212_move.get();return j::binary("+",_lhs66198,_rhs66199);})();V _rhs66197=V(0.5);return j::binary("+",_lhs66196,_rhs66197);})();
return ([&]()->V{V _callee66241=this->_v_64937_effect.get();return j::call(_callee66241,j::Args{_v_65216_src,([&]()->V{V _obj66200=j::object();j::put(_obj66200,this->_literals[23],_v_65217_loop.get());j::put(_obj66200,this->_literals[121],V(0.0));V _spread66201=([&]()->V{V _callee66203=this->_v_64961_named.get();return j::call(_callee66203,j::Args{_v_65216_src,_v_65211_p,([&]()->V{std::u16string _text66202;_text66202+=u"sliding out to the ";_text66202+=j::string(_v_65215_to.get());_text66202+=u"";return V(std::move(_text66202));})()});})();for(const auto &_key:j::keys(_spread66201))j::put(_obj66200,_key,j::get(_spread66201,_key));return _obj66200;})(),j::function([=](const j::Args &_args_fn65218,const V &_receiver_fn65218,const V &_self_fn65218) mutable ->V{
V _v_65219_t;
V _v_65220_s;
V _v_65221_g;
_v_65219_t=_args_fn65218[0];
_v_65220_s=_args_fn65218[1];
_v_65221_g=_args_fn65218[2];
{
V _v_65222_gone;
V _v_65223_dx;
V _v_65224_dy;
_v_65222_gone=([&]()->V{V _callee66221=_v_65214_curve.get();return j::call(_callee66221,j::Args{([&]()->V{V _receiver66218=j::builtin("Math");V _method66219=this->_literals[3];V _method=j::get(_receiver66218,_method66219);j::Args _params66220=j::Args{V(1.0),([&]()->V{V _lhs66204=([&]()->V{V _receiver66213=j::builtin("Math");V _method66214=this->_literals[2];V _method=j::get(_receiver66213,_method66214);j::Args _params66215=j::Args{V(0.0),([&]()->V{V _lhs66206=([&]()->V{V _lhs66208=([&]()->V{V _callee66210=this->_v_64987_phaseAt.get();return j::call(_callee66210,j::Args{_v_65219_t,_v_65217_loop.get()});})();V _rhs66209=_v_65217_loop.get();return V(j::number(_lhs66208)*j::number(_rhs66209));})();V _rhs66207=_v_65213_hold.get();return V(j::number(_lhs66206)-j::number(_rhs66207));})()};return j::call(_method,_params66215,_receiver66213);})();V _rhs66205=_v_65212_move.get();return V(j::number(_lhs66204)/j::number(_rhs66205));})()};return j::call(_method,_params66220,_receiver66218);})()});})();
V _pattern66227=j::get(([&]()->V{V _obj66222=j::object();j::put(_obj66222,this->_literals[100],([&]()->V{j::Args _array66223;_array66223.push_back(j::unary("-",j::get(_v_65221_g,this->_literals[0])));_array66223.push_back(V(0.0));return j::array(std::move(_array66223));})());j::put(_obj66222,this->_literals[99],([&]()->V{j::Args _array66224;_array66224.push_back(j::get(_v_65221_g,this->_literals[0]));_array66224.push_back(V(0.0));return j::array(std::move(_array66224));})());j::put(_obj66222,this->_literals[55],([&]()->V{j::Args _array66225;_array66225.push_back(V(0.0));_array66225.push_back(j::unary("-",j::get(_v_65221_g,this->_literals[1])));return j::array(std::move(_array66225));})());j::put(_obj66222,this->_literals[56],([&]()->V{j::Args _array66226;_array66226.push_back(V(0.0));_array66226.push_back(j::get(_v_65221_g,this->_literals[1]));return j::array(std::move(_array66226));})());return _obj66222;})(),_v_65215_to.get());
_v_65223_dx=j::get(_pattern66227,V(0));
_v_65224_dy=j::get(_pattern66227,V(1));
(void)(([&]()->V{V _receiver66238=_v_65220_s;V _method66239=this->_literals[59];V _method=j::get(_receiver66238,_method66239);j::Args _params66240=j::Args{_v_65221_g,([&]()->V{V _number66230=([&]()->V{V _lhs66231=_v_65223_dx;V _rhs66232=_v_65222_gone;return V(j::number(_lhs66231)*j::number(_rhs66232));})();return V(std::floor(j::number(_number66230)+.5));})(),([&]()->V{V _number66235=([&]()->V{V _lhs66236=_v_65224_dy;V _rhs66237=_v_65222_gone;return V(j::number(_lhs66236)*j::number(_rhs66237));})();return V(std::floor(j::number(_number66235)+.5));})()};return j::call(_method,_params66240,_receiver66238);})());

}

return V{};
},3)});})();

}

return V{};
},2);
this->_v_65226_planet.get()=j::function([=](const j::Args &_args_fn65227,const V &_receiver_fn65227,const V &_self_fn65227) mutable ->V{
V _v_65228_o;
_v_65228_o=_args_fn65227[0];
{
V _v_65229_p;
V _v_65230_period;
V _v_65231_world;
V _v_65232_moon;
V _v_65233_rings;
V _v_65234_tilt;
V _v_65235_color;
V _v_65236_parts;
V _v_65237_name;
_v_65229_p=([&]()->V{V _callee66243=this->_v_64951_optionsOf.get();return j::call(_callee66243,j::Args{this->_literals[131],_v_65228_o,([&]()->V{j::Args _array66242;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array66242.push_back(_value);_array66242.push_back(this->_literals[132]);_array66242.push_back(this->_literals[133]);_array66242.push_back(this->_literals[134]);_array66242.push_back(this->_literals[135]);_array66242.push_back(this->_literals[0]);_array66242.push_back(this->_literals[1]);return j::array(std::move(_array66242));})()});})();
_v_65230_period=([&]()->V{V _callee66244=this->_v_64952_secondsOf.get();return j::call(_callee66244,j::Args{this->_literals[131],_v_65229_p,V(8.0)});})();
_v_65231_world=j::get(this->_v_65225_WORLDS.get(),([&]()->V{V _callee66246=this->_v_64956_wordOf.get();return j::call(_callee66246,j::Args{this->_literals[136],j::get(_v_65229_p,this->_literals[132]),([&]()->V{j::Args _array66245;_array66245.push_back(this->_literals[137]);_array66245.push_back(this->_literals[138]);_array66245.push_back(this->_literals[139]);_array66245.push_back(this->_literals[140]);return j::array(std::move(_array66245));})(),this->_literals[137]});})());
_v_65232_moon=([&]()->V{V _callee66247=this->_v_64946_boolOf.get();return j::call(_callee66247,j::Args{this->_literals[141],j::get(_v_65229_p,this->_literals[133]),V(false)});})();
_v_65233_rings=([&]()->V{V _callee66248=this->_v_64946_boolOf.get();return j::call(_callee66248,j::Args{this->_literals[142],j::get(_v_65229_p,this->_literals[134]),V(false)});})();
_v_65234_tilt=([&]()->V{j::Args _array66249;_array66249.push_back(V(0.0));_array66249.push_back(V(0.0));_array66249.push_back(V(0.25));return j::array(std::move(_array66249));})();
_v_65235_color=([&]()->V{V _logical66250=([&]()->V{V _chain66251=this->_v_64947_colorOf.get();V _chain66252=j::call(_chain66251,j::Args{this->_literals[143],j::get(_v_65229_p,this->_literals[135])},V{});if(j::nullish(_chain66252))return V{};V _chain66253=j::get(_chain66252,this->_literals[144]);return _chain66253;})();return j::nullish(_logical66250)?j::get(_v_65231_world,this->_literals[135]):_logical66250;})();
_v_65236_parts=([&]()->V{j::Args _array66254;_array66254.push_back(([&]()->V{V _callee66259=this->_v_64943_sphere.get();return j::call(_callee66259,j::Args{([&]()->V{V _obj66255=j::object();j::put(_obj66255,this->_literals[35],V(1.5));j::put(_obj66255,this->_literals[145],_v_65234_tilt);j::put(_obj66255,this->_literals[24],([&]()->V{j::Args _array66256;_array66256.push_back(V(0.0));_array66256.push_back(([&]()->V{V _lhs66257=this->_v_64933_TAU.get();V _rhs66258=_v_65230_period;return V(j::number(_lhs66257)/j::number(_rhs66258));})());_array66256.push_back(V(0.0));return j::array(std::move(_array66256));})());j::put(_obj66255,this->_literals[135],_v_65235_color);j::put(_obj66255,this->_literals[146],j::get(_v_65231_world,this->_literals[146]));return _obj66255;})()});})());for(const auto &_value:j::elements((j::truth(_v_65233_rings)?([&]()->V{j::Args _array66260;_array66260.push_back(([&]()->V{V _callee66263=this->_v_64944_torus.get();return j::call(_callee66263,j::Args{([&]()->V{V _obj66261=j::object();j::put(_obj66261,this->_literals[35],V(2.4));j::put(_obj66261,this->_literals[147],V(0.12));j::put(_obj66261,this->_literals[145],([&]()->V{j::Args _array66262;_array66262.push_back(V(1.25));_array66262.push_back(V(0.0));_array66262.push_back(V(0.25));return j::array(std::move(_array66262));})());j::put(_obj66261,this->_literals[135],this->_literals[148]);return _obj66261;})()});})());return j::array(std::move(_array66260));})():([&]()->V{j::Args _array66264;return j::array(std::move(_array66264));})())))_array66254.push_back(_value);for(const auto &_value:j::elements((j::truth(_v_65232_moon)?([&]()->V{j::Args _array66265;_array66265.push_back(([&]()->V{V _callee66271=this->_v_64943_sphere.get();return j::call(_callee66271,j::Args{([&]()->V{V _obj66266=j::object();j::put(_obj66266,this->_literals[35],V(0.3));j::put(_obj66266,this->_literals[135],this->_literals[149]);j::put(_obj66266,this->_literals[42],([&]()->V{V _callee66270=this->_v_64941_orbit.get();return j::call(_callee66270,j::Args{([&]()->V{V _obj66267=j::object();j::put(_obj66267,this->_literals[35],(j::truth(_v_65233_rings)?V(3.3):V(2.6)));j::put(_obj66267,this->_literals[23],([&]()->V{V _lhs66268=_v_65230_period;V _rhs66269=V(2.0);return V(j::number(_lhs66268)/j::number(_rhs66269));})());j::put(_obj66267,this->_literals[16],V(0.3));return _obj66267;})()});})());return _obj66266;})()});})());return j::array(std::move(_array66265));})():([&]()->V{j::Args _array66272;return j::array(std::move(_array66272));})())))_array66254.push_back(_value);return j::array(std::move(_array66254));})();
_v_65237_name=([&]()->V{V _logical66273=j::get(_v_65229_p,this->_literals[14]);return j::nullish(_logical66273)?this->_literals[150]:_logical66273;})();
return ([&]()->V{V _callee66280=this->_v_64942_scene.get();return j::call(_callee66280,j::Args{([&]()->V{V _obj66274=j::object();j::put(_obj66274,this->_literals[14],_v_65237_name);j::put(_obj66274,this->_literals[18],([&]()->V{V _logical66275=j::get(_v_65229_p,this->_literals[18]);return j::nullish(_logical66275)?([&]()->V{std::u16string _text66276;_text66276+=u"";_text66276+=j::string(_v_65237_name);_text66276+=u", turning";_text66276+=j::string((j::truth(_v_65232_moon)?this->_literals[151]:this->_literals[109]));_text66276+=u"";return V(std::move(_text66276));})():_logical66275;})());j::put(_obj66274,this->_literals[0],([&]()->V{V _logical66277=j::get(_v_65229_p,this->_literals[0]);return j::nullish(_logical66277)?V(64.0):_logical66277;})());j::put(_obj66274,this->_literals[1],([&]()->V{V _logical66278=j::get(_v_65229_p,this->_literals[1]);return j::nullish(_logical66278)?V(24.0):_logical66278;})());j::put(_obj66274,this->_literals[23],_v_65230_period);j::put(_obj66274,this->_literals[21],V(0.12));j::put(_obj66274,this->_literals[20],([&]()->V{V _obj66279=j::object();j::put(_obj66279,this->_literals[41],V(10.0));return _obj66279;})());return _obj66274;})(),_v_65236_parts});})();

}

return V{};
},1);
auto &_import1240=j::module("kit/core");
this->_v_64932_Surface=_import1240.exported("Surface");
this->_v_64933_TAU=_import1240.exported("TAU");
this->_v_64934_fail=_import1240.exported("fail");
auto &_import1304=j::module("kit/compose");
this->_v_64935_crop=_import1304.exported("crop");
this->_v_64936_layer=_import1304.exported("layer");
auto &_import1374=j::module("kit/fx");
this->_v_64937_effect=_import1374.exported("effect");
this->_v_64938_shake=_import1374.exported("shake");
auto &_import1416=j::module("kit/mirror");
this->_v_64939_mirror=_import1416.exported("mirror");
auto &_import1455=j::module("kit/shapes3d");
this->_v_64940_group=_import1455.exported("group");
this->_v_64941_orbit=_import1455.exported("orbit");
this->_v_64942_scene=_import1455.exported("scene");
this->_v_64943_sphere=_import1455.exported("sphere");
this->_v_64944_torus=_import1455.exported("torus");
auto &_import1538=j::module("kit/recipes/checks");
this->_v_64945_NAMING=_import1538.exported("NAMING");
this->_v_64946_boolOf=_import1538.exported("boolOf");
this->_v_64947_colorOf=_import1538.exported("colorOf");
this->_v_64948_easeOf=_import1538.exported("easeOf");
this->_v_64949_is3d=_import1538.exported("is3d");
this->_v_64950_numberOf=_import1538.exported("numberOf");
this->_v_64951_optionsOf=_import1538.exported("optionsOf");
this->_v_64952_secondsOf=_import1538.exported("secondsOf");
this->_v_64953_show=_import1538.exported("show");
this->_v_64954_sizeOf=_import1538.exported("sizeOf");
this->_v_64955_titled=_import1538.exported("titled");
this->_v_64956_wordOf=_import1538.exported("wordOf");
auto &_import1738=j::module("kit/recipes/words");
this->_v_64957_loopFor=_import1738.exported("loopFor");
this->_v_64958_pieceOf=_import1738.exported("pieceOf");
this->_v_64959_withLoop=_import1738.exported("withLoop");
this->exports["spinning"]=this->_v_64991_spinning;
this->exports["orbiting"]=this->_v_65021_orbiting;
this->exports["bouncing"]=this->_v_65053_bouncing;
this->exports["floating"]=this->_v_65071_floating;
this->exports["swaying"]=this->_v_65084_swaying;
this->exports["pulsing"]=this->_v_65104_pulsing;
this->exports["blinking"]=this->_v_65126_blinking;
this->exports["shaking"]=this->_v_65141_shaking;
this->exports["drifting"]=this->_v_65150_drifting;
this->exports["growIn"]=this->_v_65173_growIn;
this->exports["slideIn"]=this->_v_65189_slideIn;
this->exports["slideOut"]=this->_v_65207_slideOut;
this->exports["planet"]=this->_v_65226_planet;
this->_v_64960_MOTION.get()=([&]()->V{j::Args _array66281;_array66281.push_back(this->_literals[112]);_array66281.push_back(this->_literals[23]);for(const auto &_value:j::elements(this->_v_64945_NAMING.get()))_array66281.push_back(_value);return j::array(std::move(_array66281));})();
this->_v_64961_named.get()=j::function([=](const j::Args &_args_fn64962,const V &_receiver_fn64962,const V &_self_fn64962) mutable ->V{
V _v_64963_p;
V _v_64964_o;
V _v_64965_doing;
_v_64963_p=_args_fn64962[0];
_v_64964_o=_args_fn64962[1];
_v_64965_doing=_args_fn64962[2];
return ([&]()->V{V _obj66282=j::object();j::put(_obj66282,this->_literals[14],([&]()->V{V _logical66283=j::get(_v_64964_o,this->_literals[14]);return j::nullish(_logical66283)?j::get(j::get(_v_64963_p,this->_literals[27]),this->_literals[14]):_logical66283;})());j::put(_obj66282,this->_literals[18],([&]()->V{V _logical66284=j::get(_v_64964_o,this->_literals[18]);return j::nullish(_logical66284)?([&]()->V{V _receiver66285=([&]()->V{std::u16string _text66288;_text66288+=u"";_text66288+=j::string(([&]()->V{V _logical66289=j::get(_v_64964_o,this->_literals[14]);return j::nullish(_logical66289)?j::get(j::get(_v_64963_p,this->_literals[27]),this->_literals[14]):_logical66289;})());_text66288+=u", ";_text66288+=j::string(_v_64965_doing);_text66288+=u"";return V(std::move(_text66288));})();V _method66286=this->_literals[152];V _method=j::get(_receiver66285,_method66286);j::Args _params66287=j::Args{V(0.0),V(72.0)};return j::call(_method,_params66287,_receiver66285);})():_logical66284;})());return _obj66282;})();
return V{};
},3);
this->_v_64966_shapes.get()=j::function([=](const j::Args &_args_fn64967,const V &_receiver_fn64967,const V &_self_fn64967) mutable ->V{
V _v_64968_v;
_v_64968_v=_args_fn64967[0];
return (j::truth(([&]()->V{V _receiver66290=j::builtin("Array");V _method66291=this->_literals[153];V _method=j::get(_receiver66290,_method66291);j::Args _params66292=j::Args{_v_64968_v};return j::call(_method,_params66292,_receiver66290);})())?([&]()->V{j::Args _array66293;for(const auto &_value:j::elements(_v_64968_v))_array66293.push_back(_value);return j::array(std::move(_array66293));})():([&]()->V{j::Args _array66294;_array66294.push_back(_v_64968_v);return j::array(std::move(_array66294));})());
return V{};
},1);
this->_v_64987_phaseAt.get()=j::function([=](const j::Args &_args_fn64988,const V &_receiver_fn64988,const V &_self_fn64988) mutable ->V{
V _v_64989_t;
V _v_64990_period;
_v_64989_t=_args_fn64988[0];
_v_64990_period=_args_fn64988[1];
return ([&]()->V{V _lhs66295=([&]()->V{V _lhs66297=([&]()->V{V _lhs66299=([&]()->V{V _lhs66301=_v_64989_t;V _rhs66302=_v_64990_period;return V(std::fmod(j::number(_lhs66301),j::number(_rhs66302)));})();V _rhs66300=_v_64990_period;return j::binary("+",_lhs66299,_rhs66300);})();V _rhs66298=_v_64990_period;return V(std::fmod(j::number(_lhs66297),j::number(_rhs66298)));})();V _rhs66296=_v_64990_period;return V(j::number(_lhs66295)/j::number(_rhs66296));})();
return V{};
},2);
this->_v_65165_ENTRANCE.get()=([&]()->V{j::Args _array66303;for(const auto &_value:j::elements(this->_v_64960_MOTION.get()))_array66303.push_back(_value);_array66303.push_back(this->_literals[111]);_array66303.push_back(this->_literals[113]);_array66303.push_back(this->_literals[118]);return j::array(std::move(_array66303));})();
this->_v_65225_WORLDS.get()=([&]()->V{V _obj66304=j::object();j::put(_obj66304,this->_literals[137],([&]()->V{V _obj66305=j::object();j::put(_obj66305,this->_literals[135],this->_literals[154]);j::put(_obj66305,this->_literals[146],this->_literals[155]);return _obj66305;})());j::put(_obj66304,this->_literals[138],([&]()->V{V _obj66306=j::object();j::put(_obj66306,this->_literals[135],this->_literals[156]);j::put(_obj66306,this->_literals[146],this->_literals[157]);return _obj66306;})());j::put(_obj66304,this->_literals[139],([&]()->V{V _obj66307=j::object();j::put(_obj66307,this->_literals[135],this->_literals[158]);j::put(_obj66307,this->_literals[146],this->_literals[157]);return _obj66307;})());j::put(_obj66304,this->_literals[140],([&]()->V{V _obj66308=j::object();j::put(_obj66308,this->_literals[135],this->_literals[159]);j::put(_obj66308,this->_literals[146],this->_literals[155]);return _obj66308;})());return _obj66304;})();
}
};
}
std::unique_ptr<Module> new_kit_recipes_motion(){return std::make_unique<Generated_kit_recipes_motion>();}
}
