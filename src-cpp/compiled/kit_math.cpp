// Native source generated from src/kit/math.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_math final:j::Module {
j::Cell _v_31965_TAU;
j::Cell _v_31966_and;
j::Cell _v_31967_clamp;
j::Cell _v_31968_fail;
j::Cell _v_31969_hash;
j::Cell _v_31970_mulberry32;
j::Cell _v_31971_said;
j::Cell _v_31974_finite;
j::Cell _v_31977_invLerp;
j::Cell _v_31982_remap;
j::Cell _v_31991_mod;
j::Cell _v_31996_wrap;
j::Cell _v_32001_pingpong;
j::Cell _v_32005_step;
j::Cell _v_32009_degrees;
j::Cell _v_32012_radians;
j::Cell _v_32015_random;
j::Cell _v_32059_tables;
j::Cell _v_32060_table;
j::Cell _v_32074_shift;
j::Cell _v_32078_G3;
j::Cell _v_32079_G4;
j::Cell _v_32080_F2;
j::Cell _v_32081_H2;
j::Cell _v_32082_F3;
j::Cell _v_32083_H3;
j::Cell _v_32084_F4;
j::Cell _v_32085_H4;
j::Cell _v_32086_S2;
j::Cell _v_32087_S3;
j::Cell _v_32088_S4;
j::Cell _v_32089_unit;
j::Cell _v_32092_dot4;
j::Cell _v_32099_simplex2;
j::Cell _v_32123_simplex3;
j::Cell _v_32160_simplex4;
j::Cell _v_32216_noise2;
j::Cell _v_32221_noise3;
j::Cell _v_32227_noise4;
j::Cell _v_32234_valueNoise3;
j::Cell _v_32259_OFF;
j::Cell _v_32263_octN;
j::Cell _v_32264_octLac;
j::Cell _v_32265_octGain;
j::Cell _v_32266_octSeed;
j::Cell _v_32267_octaves;
j::Cell _v_32271_SPREAD;
j::Cell _v_32272_WIDEN4;
j::Cell _v_32273_fbm;
j::Cell _v_32283_fbm3;
j::Cell _v_32294_crest;
j::Cell _v_32298_weigh;
j::Cell _v_32301_ridged;
j::Cell _v_32313_loopNoise;
j::Cell _v_32332_worley;
j::Cell _v_32353_KINDS;
j::Cell _v_32354_cellular;
j::Cell _v_32377_CELLS;
j::Cell _v_32378_noise;
j::Cell _v_32444_B1;
j::Cell _v_32445_B2;
j::Cell _v_32446_B3;
j::Cell _v_32447_E4;
j::Cell _v_32448_E5;
j::Cell _v_32449_bounce;
j::Cell _v_32454_curves;
j::Cell _v_32509_ease;
j::Cell _v_32515_moved;
j::Cell _v_32526_progress;
j::Cell _v_32530_tween;
j::Cell _v_32540_vec2;
j::Cell _v_32570_vec3;
j::Cell _v_32598_rotate3;
j::Cell _v_32609_rotation;
j::Cell _v_32633_project;
j::Cell _v_32642_camera;
j::Cell _v_32669_checkPeriod;
j::Cell _v_32673_place;
j::Cell _v_32678_phase;
j::Cell _v_32682_oscillate;
j::Cell _v_32689_triangle;
j::Cell _v_32693_pulse;
j::Cell _v_32698_cycle;
j::Cell _v_32702_lcm;
j::Cell _v_32712_twinkle;
j::Cell _v_32723_scatter;
std::vector<V> _literals;
Generated_kit_math():_v_31965_TAU(this->slot("TAU")),_v_31966_and(this->slot("and")),_v_31967_clamp(this->slot("clamp")),_v_31968_fail(this->slot("fail")),_v_31969_hash(this->slot("hash")),_v_31970_mulberry32(this->slot("mulberry32")),_v_31971_said(this->slot("said")),_v_31974_finite(this->slot("finite")),_v_31977_invLerp(this->slot("invLerp")),_v_31982_remap(this->slot("remap")),_v_31991_mod(this->slot("mod")),_v_31996_wrap(this->slot("wrap")),_v_32001_pingpong(this->slot("pingpong")),_v_32005_step(this->slot("step")),_v_32009_degrees(this->slot("degrees")),_v_32012_radians(this->slot("radians")),_v_32015_random(this->slot("random")),_v_32059_tables(this->slot("tables")),_v_32060_table(this->slot("table")),_v_32074_shift(this->slot("shift")),_v_32078_G3(this->slot("G3")),_v_32079_G4(this->slot("G4")),_v_32080_F2(this->slot("F2")),_v_32081_H2(this->slot("H2")),_v_32082_F3(this->slot("F3")),_v_32083_H3(this->slot("H3")),_v_32084_F4(this->slot("F4")),_v_32085_H4(this->slot("H4")),_v_32086_S2(this->slot("S2")),_v_32087_S3(this->slot("S3")),_v_32088_S4(this->slot("S4")),_v_32089_unit(this->slot("unit")),_v_32092_dot4(this->slot("dot4")),_v_32099_simplex2(this->slot("simplex2")),_v_32123_simplex3(this->slot("simplex3")),_v_32160_simplex4(this->slot("simplex4")),_v_32216_noise2(this->slot("noise2")),_v_32221_noise3(this->slot("noise3")),_v_32227_noise4(this->slot("noise4")),_v_32234_valueNoise3(this->slot("valueNoise3")),_v_32259_OFF(this->slot("OFF")),_v_32263_octN(this->slot("octN")),_v_32264_octLac(this->slot("octLac")),_v_32265_octGain(this->slot("octGain")),_v_32266_octSeed(this->slot("octSeed")),_v_32267_octaves(this->slot("octaves")),_v_32271_SPREAD(this->slot("SPREAD")),_v_32272_WIDEN4(this->slot("WIDEN4")),_v_32273_fbm(this->slot("fbm")),_v_32283_fbm3(this->slot("fbm3")),_v_32294_crest(this->slot("crest")),_v_32298_weigh(this->slot("weigh")),_v_32301_ridged(this->slot("ridged")),_v_32313_loopNoise(this->slot("loopNoise")),_v_32332_worley(this->slot("worley")),_v_32353_KINDS(this->slot("KINDS")),_v_32354_cellular(this->slot("cellular")),_v_32377_CELLS(this->slot("CELLS")),_v_32378_noise(this->slot("noise")),_v_32444_B1(this->slot("B1")),_v_32445_B2(this->slot("B2")),_v_32446_B3(this->slot("B3")),_v_32447_E4(this->slot("E4")),_v_32448_E5(this->slot("E5")),_v_32449_bounce(this->slot("bounce")),_v_32454_curves(this->slot("curves")),_v_32509_ease(this->slot("ease")),_v_32515_moved(this->slot("moved")),_v_32526_progress(this->slot("progress")),_v_32530_tween(this->slot("tween")),_v_32540_vec2(this->slot("vec2")),_v_32570_vec3(this->slot("vec3")),_v_32598_rotate3(this->slot("rotate3")),_v_32609_rotation(this->slot("rotation")),_v_32633_project(this->slot("project")),_v_32642_camera(this->slot("camera")),_v_32669_checkPeriod(this->slot("checkPeriod")),_v_32673_place(this->slot("place")),_v_32678_phase(this->slot("phase")),_v_32682_oscillate(this->slot("oscillate")),_v_32689_triangle(this->slot("triangle")),_v_32693_pulse(this->slot("pulse")),_v_32698_cycle(this->slot("cycle")),_v_32702_lcm(this->slot("lcm")),_v_32712_twinkle(this->slot("twinkle")),_v_32723_scatter(this->slot("scatter")),_literals{V(u"isInteger"),
V(u"seed"),
V(u"value"),
V(u"enumerable"),
V(u"defineProperty"),
V(u"range"),
V(u"int"),
V(u"pick"),
V(u"length"),
V(u"chance"),
V(u"normal"),
V(u"sign"),
V(u"angle"),
V(u"shuffle"),
V(u"isArray"),
V(u"onCircle"),
V(u"inCircle"),
V(u"onSphere"),
V(u"inSphere"),
V(u"fork"),
V(u"perm"),
V(u"mod12"),
V(u"octaves"),
V(u"lacunarity"),
V(u"gain"),
V(u"loopNoise()"),
V(u"radius"),
V(u"ridged"),
V(u"edge"),
V(u"min"),
V(u"object"),
V(u"noise() takes options, such as { size: 12, drift: 4 }, or nothing"),
V(u"kind"),
V(u"smooth"),
V(u"includes"),
V(u"map"),
V(u"stringify"),
V(u"size"),
V(u"number"),
V(u"cells"),
V(u"detail"),
V(u"drift"),
V(u"isFinite"),
V(u"morph"),
V(u"period"),
V(u"noise() can loop a pattern that drifts or one that morphs, not both at once: with drift and period, leave morph at 0"),
V(u"every"),
V(u"max"),
V(u"toFixed"),
V(u" cell"),
V(u" cells"),
V(u"start"),
V(u"duration"),
V(u"ease"),
V(u"inOutSine"),
V(u"function"),
V(u"hasOwn"),
V(u"progress()"),
V(u"tween()"),
V(u"tween() takes two numbers, or two points of the same length, such as [0, 0] and [10, 5]"),
V(u"project() takes the grid's size, { cols, rows }, and optionally distance, scale and aspect"),
V(u"distance"),
V(u"scale"),
V(u"rows"),
V(u"x"),
V(u"y"),
V(u"depth"),
V(u"cols"),
V(u"aspect"),
V(u"camera() takes options second, such as { turn: 8 }"),
V(u"turn"),
V(u"tilt"),
V(u"near"),
V(u"phase()"),
V(u"oscillate()"),
V(u"triangle()"),
V(u"pulse()"),
V(u"cycle()"),
V(u"lcm() takes a list of one or more periods in seconds, such as [2, 3]"),
V(u"lcm()"),
V(u"toPrecision"),
V(u"twinkle() takes options third, such as { period: 4 }"),
V(u"twinkle()"),
V(u"scatter() takes options third, such as { seed: 7 }"),
V(u"even"),
V(u"i"),
V(u"k"),
V(u"push"),
V(u"from"),
V(u"slice"),
V(u"string"),
V(u", "),
V(u"join"),
V(u"PI"),
V(u"linear"),
V(u"inQuad"),
V(u"outQuad"),
V(u"inOutQuad"),
V(u"inCubic"),
V(u"outCubic"),
V(u"inOutCubic"),
V(u"inQuart"),
V(u"outQuart"),
V(u"inOutQuart"),
V(u"inSine"),
V(u"outSine"),
V(u"inExpo"),
V(u"outExpo"),
V(u"inOutExpo"),
V(u"inCirc"),
V(u"outCirc"),
V(u"inOutCirc"),
V(u"inBack"),
V(u"outBack"),
V(u"inOutBack"),
V(u"inElastic"),
V(u"outElastic"),
V(u"inOutElastic"),
V(u"inBounce"),
V(u"outBounce"),
V(u"inOutBounce"),
V(u"entries"),
V(u"fromEntries"),
V(u"freeze"),
V(u"add"),
V(u"sub"),
V(u"dot"),
V(u"normalize"),
V(u"rotate"),
V(u"lerp"),
V(u"dist"),
V(u"cross")}{
this->exports["invLerp"]=this->_v_31977_invLerp;
this->exports["remap"]=this->_v_31982_remap;
this->exports["mod"]=this->_v_31991_mod;
this->exports["wrap"]=this->_v_31996_wrap;
this->exports["pingpong"]=this->_v_32001_pingpong;
this->exports["step"]=this->_v_32005_step;
this->exports["degrees"]=this->_v_32009_degrees;
this->exports["radians"]=this->_v_32012_radians;
this->exports["random"]=this->_v_32015_random;
this->exports["noise2"]=this->_v_32216_noise2;
this->exports["noise3"]=this->_v_32221_noise3;
this->exports["noise4"]=this->_v_32227_noise4;
this->exports["valueNoise3"]=this->_v_32234_valueNoise3;
this->exports["fbm"]=this->_v_32273_fbm;
this->exports["fbm3"]=this->_v_32283_fbm3;
this->exports["ridged"]=this->_v_32301_ridged;
this->exports["loopNoise"]=this->_v_32313_loopNoise;
this->exports["worley"]=this->_v_32332_worley;
this->exports["noise"]=this->_v_32378_noise;
this->exports["ease"]=this->_v_32509_ease;
this->exports["progress"]=this->_v_32526_progress;
this->exports["tween"]=this->_v_32530_tween;
this->exports["vec2"]=this->_v_32540_vec2;
this->exports["vec3"]=this->_v_32570_vec3;
this->exports["rotate3"]=this->_v_32598_rotate3;
this->exports["rotation"]=this->_v_32609_rotation;
this->exports["project"]=this->_v_32633_project;
this->exports["camera"]=this->_v_32642_camera;
this->exports["phase"]=this->_v_32678_phase;
this->exports["oscillate"]=this->_v_32682_oscillate;
this->exports["triangle"]=this->_v_32689_triangle;
this->exports["pulse"]=this->_v_32693_pulse;
this->exports["cycle"]=this->_v_32698_cycle;
this->exports["lcm"]=this->_v_32702_lcm;
this->exports["twinkle"]=this->_v_32712_twinkle;
this->exports["scatter"]=this->_v_32723_scatter;
}
void init() override{if(initialized)return;initialized=true;
this->_v_31982_remap.get()=j::function([=](const j::Args &_args_fn31983,const V &_receiver_fn31983,const V &_self_fn31983) mutable ->V{
V _v_31984_v;
V _v_31985_inLo;
V _v_31986_inHi;
V _v_31987_outLo;
V _v_31988_outHi;
V _v_31989_clamped;
_v_31984_v=_args_fn31983[0];
_v_31985_inLo=_args_fn31983[1];
_v_31986_inHi=_args_fn31983[2];
_v_31987_outLo=_args_fn31983[3];
_v_31988_outHi=_args_fn31983[4];
V _default32757=_args_fn31983[5];if(_default32757.kind==V::Undefined||_default32757.kind==V::Hole)_default32757=V(false);
_v_31989_clamped=_default32757;
{
V _v_31990_k;
_v_31990_k=(j::truth(([&]()->V{V _lhs32758=_v_31985_inLo;V _rhs32759=_v_31986_inHi;return V(j::equal(_lhs32758,_rhs32759,true));})())?V(0.0):([&]()->V{V _lhs32760=([&]()->V{V _lhs32762=_v_31984_v;V _rhs32763=_v_31985_inLo;return V(j::number(_lhs32762)-j::number(_rhs32763));})();V _rhs32761=([&]()->V{V _lhs32764=_v_31986_inHi;V _rhs32765=_v_31985_inLo;return V(j::number(_lhs32764)-j::number(_rhs32765));})();return V(j::number(_lhs32760)/j::number(_rhs32761));})());
if(j::truth(_v_31989_clamped)){(void)((_v_31990_k=(j::truth(([&]()->V{V _lhs32767=_v_31990_k;V _rhs32768=V(0.0);return j::binary("<",_lhs32767,_rhs32768);})())?V(0.0):(j::truth(([&]()->V{V _lhs32769=_v_31990_k;V _rhs32770=V(1.0);return j::binary(">",_lhs32769,_rhs32770);})())?V(1.0):_v_31990_k))));
}
return ([&]()->V{V _lhs32771=_v_31987_outLo;V _rhs32772=([&]()->V{V _lhs32773=([&]()->V{V _lhs32775=_v_31988_outHi;V _rhs32776=_v_31987_outLo;return V(j::number(_lhs32775)-j::number(_rhs32776));})();V _rhs32774=_v_31990_k;return V(j::number(_lhs32773)*j::number(_rhs32774));})();return j::binary("+",_lhs32771,_rhs32772);})();

}

return V{};
},5);
this->_v_31991_mod.get()=j::function([=](const j::Args &_args_fn31992,const V &_receiver_fn31992,const V &_self_fn31992) mutable ->V{
V _v_31993_a;
V _v_31994_n;
_v_31993_a=_args_fn31992[0];
_v_31994_n=_args_fn31992[1];
{
V _v_31995_r;
_v_31995_r=([&]()->V{V _lhs32777=_v_31993_a;V _rhs32778=_v_31994_n;return V(std::fmod(j::number(_lhs32777),j::number(_rhs32778)));})();
return (j::truth(([&]()->V{V _lhs32779=_v_31995_r;V _rhs32780=V(0.0);return j::binary("<",_lhs32779,_rhs32780);})())?(j::truth(([&]()->V{V _lhs32781=([&]()->V{V _lhs32783=_v_31995_r;V _rhs32784=_v_31994_n;return j::binary("+",_lhs32783,_rhs32784);})();V _rhs32782=_v_31994_n;return j::binary("<",_lhs32781,_rhs32782);})())?([&]()->V{V _lhs32785=_v_31995_r;V _rhs32786=_v_31994_n;return j::binary("+",_lhs32785,_rhs32786);})():V(0.0)):([&]()->V{V _lhs32787=_v_31995_r;V _rhs32788=V(0.0);return j::binary("+",_lhs32787,_rhs32788);})());

}

return V{};
},2);
this->_v_32015_random.get()=j::function([=](const j::Args &_args_fn32016,const V &_receiver_fn32016,const V &_self_fn32016) mutable ->V{
j::Cell _v_32017_seed;
V _default32789=_args_fn32016[0];if(_default32789.kind==V::Undefined||_default32789.kind==V::Hole)_default32789=V(1.0);
_v_32017_seed.get()=_default32789;
{
j::Cell _v_32018_next;
j::Cell _v_32019_r;
if(j::truth(j::unary("!",([&]()->V{V _receiver32790=j::builtin("Number");V _method32791=this->_literals[0];V _method=j::get(_receiver32790,_method32791);j::Args _params32792=j::Args{_v_32017_seed.get()};return j::call(_method,_params32792,_receiver32790);})()))){(void)(([&]()->V{V _callee32795=this->_v_31968_fail.get();return j::call(_callee32795,j::Args{([&]()->V{std::u16string _text32793;_text32793+=u"random() takes a whole number seed, such as 7, not ";_text32793+=j::string(([&]()->V{V _callee32794=this->_v_31971_said.get();return j::call(_callee32794,j::Args{_v_32017_seed.get()});})());_text32793+=u"";return V(std::move(_text32793));})()});})());
}
_v_32018_next.get()=([&]()->V{V _callee32796=this->_v_31970_mulberry32.get();return j::call(_callee32796,j::Args{_v_32017_seed.get()});})();
_v_32019_r.get()=j::function([=](const j::Args &_args_fn32020,const V &_receiver_fn32020,const V &_self_fn32020) mutable ->V{
return ([&]()->V{V _callee32797=_v_32018_next.get();return j::call(_callee32797,j::Args{});})();
return V{};
},0);
(void)(([&]()->V{V _receiver32799=j::builtin("Object");V _method32800=this->_literals[4];V _method=j::get(_receiver32799,_method32800);j::Args _params32801=j::Args{_v_32019_r.get(),this->_literals[1],([&]()->V{V _obj32798=j::object();j::put(_obj32798,this->_literals[2],_v_32017_seed.get());j::put(_obj32798,this->_literals[3],V(true));return _obj32798;})()};return j::call(_method,_params32801,_receiver32799);})());
(void)(([&]()->V{V _base32803=_v_32019_r.get();V _key32804=this->_literals[5];V _assign32802=j::function([=](const j::Args &_args_fn32021,const V &_receiver_fn32021,const V &_self_fn32021) mutable ->V{
V _v_32022_lo;
V _v_32023_hi;
_v_32022_lo=_args_fn32021[0];
_v_32023_hi=_args_fn32021[1];
return ([&]()->V{V _lhs32805=_v_32022_lo;V _rhs32806=([&]()->V{V _lhs32807=([&]()->V{V _lhs32809=_v_32023_hi;V _rhs32810=_v_32022_lo;return V(j::number(_lhs32809)-j::number(_rhs32810));})();V _rhs32808=([&]()->V{V _callee32811=_v_32018_next.get();return j::call(_callee32811,j::Args{});})();return V(j::number(_lhs32807)*j::number(_rhs32808));})();return j::binary("+",_lhs32805,_rhs32806);})();
return V{};
},2);return j::put(_base32803,_key32804,_assign32802);})());
(void)(([&]()->V{V _base32813=_v_32019_r.get();V _key32814=this->_literals[6];V _assign32812=j::function([=](const j::Args &_args_fn32024,const V &_receiver_fn32024,const V &_self_fn32024) mutable ->V{
V _v_32025_lo;
V _v_32026_hi;
_v_32025_lo=_args_fn32024[0];
_v_32026_hi=_args_fn32024[1];
{
if(j::truth(([&]()->V{V _logical32815=([&]()->V{V _logical32816=j::unary("!",([&]()->V{V _receiver32817=j::builtin("Number");V _method32818=this->_literals[0];V _method=j::get(_receiver32817,_method32818);j::Args _params32819=j::Args{_v_32025_lo};return j::call(_method,_params32819,_receiver32817);})());return !j::truth(_logical32816)?j::unary("!",([&]()->V{V _receiver32820=j::builtin("Number");V _method32821=this->_literals[0];V _method=j::get(_receiver32820,_method32821);j::Args _params32822=j::Args{_v_32026_hi};return j::call(_method,_params32822,_receiver32820);})()):_logical32816;})();return !j::truth(_logical32815)?([&]()->V{V _lhs32823=_v_32026_hi;V _rhs32824=_v_32025_lo;return j::binary("<",_lhs32823,_rhs32824);})():_logical32815;})())){(void)(([&]()->V{V _callee32826=this->_v_31968_fail.get();return j::call(_callee32826,j::Args{([&]()->V{std::u16string _text32825;_text32825+=u"int() takes whole numbers lo and hi, with hi at least lo, not ";_text32825+=j::string(_v_32025_lo);_text32825+=u" and ";_text32825+=j::string(_v_32026_hi);_text32825+=u"";return V(std::move(_text32825));})()});})());
}
return ([&]()->V{V _lhs32827=_v_32025_lo;V _rhs32828=([&]()->V{V _number32836=([&]()->V{V _lhs32837=([&]()->V{V _callee32839=_v_32018_next.get();return j::call(_callee32839,j::Args{});})();V _rhs32838=([&]()->V{V _lhs32840=([&]()->V{V _lhs32842=_v_32026_hi;V _rhs32843=_v_32025_lo;return V(j::number(_lhs32842)-j::number(_rhs32843));})();V _rhs32841=V(1.0);return j::binary("+",_lhs32840,_rhs32841);})();return V(j::number(_lhs32837)*j::number(_rhs32838));})();return V(std::floor(j::number(_number32836)));})();return j::binary("+",_lhs32827,_rhs32828);})();

}

return V{};
},2);return j::put(_base32813,_key32814,_assign32812);})());
(void)(([&]()->V{V _base32845=_v_32019_r.get();V _key32846=this->_literals[7];V _assign32844=j::function([=](const j::Args &_args_fn32027,const V &_receiver_fn32027,const V &_self_fn32027) mutable ->V{
V _v_32028_list;
_v_32028_list=_args_fn32027[0];
{
if(j::truth(([&]()->V{V _logical32847=j::unary("!",_v_32028_list);return !j::truth(_logical32847)?j::unary("!",j::get(_v_32028_list,this->_literals[8])):_logical32847;})())){(void)(([&]()->V{V _callee32850=this->_v_31968_fail.get();return j::call(_callee32850,j::Args{([&]()->V{std::u16string _text32848;_text32848+=u"pick() takes a list of one or more things, or a string of characters, to pick from, not ";_text32848+=j::string(([&]()->V{V _callee32849=this->_v_31971_said.get();return j::call(_callee32849,j::Args{_v_32028_list});})());_text32848+=u"";return V(std::move(_text32848));})()});})());
}
return j::get(_v_32028_list,([&]()->V{V _number32854=([&]()->V{V _lhs32855=([&]()->V{V _callee32857=_v_32018_next.get();return j::call(_callee32857,j::Args{});})();V _rhs32856=j::get(_v_32028_list,this->_literals[8]);return V(j::number(_lhs32855)*j::number(_rhs32856));})();return V(std::floor(j::number(_number32854)));})());

}

return V{};
},1);return j::put(_base32845,_key32846,_assign32844);})());
(void)(([&]()->V{V _base32859=_v_32019_r.get();V _key32860=this->_literals[9];V _assign32858=j::function([=](const j::Args &_args_fn32029,const V &_receiver_fn32029,const V &_self_fn32029) mutable ->V{
V _v_32030_p;
_v_32030_p=_args_fn32029[0];
{
if(j::truth(j::unary("!",([&]()->V{V _logical32861=([&]()->V{V _logical32862=([&]()->V{V _callee32863=this->_v_31974_finite.get();return j::call(_callee32863,j::Args{_v_32030_p});})();return j::truth(_logical32862)?([&]()->V{V _lhs32864=_v_32030_p;V _rhs32865=V(0.0);return j::binary(">=",_lhs32864,_rhs32865);})():_logical32862;})();return j::truth(_logical32861)?([&]()->V{V _lhs32866=_v_32030_p;V _rhs32867=V(1.0);return j::binary("<=",_lhs32866,_rhs32867);})():_logical32861;})()))){(void)(([&]()->V{V _callee32870=this->_v_31968_fail.get();return j::call(_callee32870,j::Args{([&]()->V{std::u16string _text32868;_text32868+=u"chance() takes a probability from 0 to 1, not ";_text32868+=j::string(([&]()->V{V _callee32869=this->_v_31971_said.get();return j::call(_callee32869,j::Args{_v_32030_p});})());_text32868+=u"";return V(std::move(_text32868));})()});})());
}
return ([&]()->V{V _lhs32871=([&]()->V{V _callee32873=_v_32018_next.get();return j::call(_callee32873,j::Args{});})();V _rhs32872=_v_32030_p;return j::binary("<",_lhs32871,_rhs32872);})();

}

return V{};
},1);return j::put(_base32859,_key32860,_assign32858);})());
(void)(([&]()->V{V _base32875=_v_32019_r.get();V _key32876=this->_literals[10];V _assign32874=j::function([=](const j::Args &_args_fn32031,const V &_receiver_fn32031,const V &_self_fn32031) mutable ->V{
V _v_32032_mean;
V _v_32033_sd;
V _default32877=_args_fn32031[0];if(_default32877.kind==V::Undefined||_default32877.kind==V::Hole)_default32877=V(0.0);
_v_32032_mean=_default32877;
V _default32878=_args_fn32031[1];if(_default32878.kind==V::Undefined||_default32878.kind==V::Hole)_default32878=V(1.0);
_v_32033_sd=_default32878;
return ([&]()->V{V _lhs32879=_v_32032_mean;V _rhs32880=([&]()->V{V _lhs32881=([&]()->V{V _lhs32883=_v_32033_sd;V _rhs32884=([&]()->V{V _number32894=([&]()->V{V _lhs32895=j::unary("-",V(2.0));V _rhs32896=([&]()->V{V _number32900=([&]()->V{V _lhs32901=V(1.0);V _rhs32902=([&]()->V{V _callee32903=_v_32018_next.get();return j::call(_callee32903,j::Args{});})();return V(j::number(_lhs32901)-j::number(_rhs32902));})();return V(std::log(j::number(_number32900)));})();return V(j::number(_lhs32895)*j::number(_rhs32896));})();return V(std::sqrt(j::number(_number32894)));})();return V(j::number(_lhs32883)*j::number(_rhs32884));})();V _rhs32882=([&]()->V{V _number32907=([&]()->V{V _lhs32908=this->_v_31965_TAU.get();V _rhs32909=([&]()->V{V _callee32910=_v_32018_next.get();return j::call(_callee32910,j::Args{});})();return V(j::number(_lhs32908)*j::number(_rhs32909));})();return V(std::cos(j::number(_number32907)));})();return V(j::number(_lhs32881)*j::number(_rhs32882));})();return j::binary("+",_lhs32879,_rhs32880);})();
return V{};
},0);return j::put(_base32875,_key32876,_assign32874);})());
(void)(([&]()->V{V _base32912=_v_32019_r.get();V _key32913=this->_literals[11];V _assign32911=j::function([=](const j::Args &_args_fn32034,const V &_receiver_fn32034,const V &_self_fn32034) mutable ->V{
return (j::truth(([&]()->V{V _lhs32914=([&]()->V{V _callee32916=_v_32018_next.get();return j::call(_callee32916,j::Args{});})();V _rhs32915=V(0.5);return j::binary("<",_lhs32914,_rhs32915);})())?j::unary("-",V(1.0)):V(1.0));
return V{};
},0);return j::put(_base32912,_key32913,_assign32911);})());
(void)(([&]()->V{V _base32918=_v_32019_r.get();V _key32919=this->_literals[12];V _assign32917=j::function([=](const j::Args &_args_fn32035,const V &_receiver_fn32035,const V &_self_fn32035) mutable ->V{
return ([&]()->V{V _lhs32920=([&]()->V{V _callee32922=_v_32018_next.get();return j::call(_callee32922,j::Args{});})();V _rhs32921=this->_v_31965_TAU.get();return V(j::number(_lhs32920)*j::number(_rhs32921));})();
return V{};
},0);return j::put(_base32918,_key32919,_assign32917);})());
(void)(([&]()->V{V _base32924=_v_32019_r.get();V _key32925=this->_literals[13];V _assign32923=j::function([=](const j::Args &_args_fn32036,const V &_receiver_fn32036,const V &_self_fn32036) mutable ->V{
V _v_32037_list;
_v_32037_list=_args_fn32036[0];
{
if(j::truth(j::unary("!",([&]()->V{V _receiver32926=j::builtin("Array");V _method32927=this->_literals[14];V _method=j::get(_receiver32926,_method32927);j::Args _params32928=j::Args{_v_32037_list};return j::call(_method,_params32928,_receiver32926);})()))){(void)(([&]()->V{V _callee32931=this->_v_31968_fail.get();return j::call(_callee32931,j::Args{([&]()->V{std::u16string _text32929;_text32929+=u"shuffle() takes a list to shuffle in place, not ";_text32929+=j::string(([&]()->V{V _callee32930=this->_v_31971_said.get();return j::call(_callee32930,j::Args{_v_32037_list});})());_text32929+=u"";return V(std::move(_text32929));})()});})());
}
{V _v_32038_i;
_v_32038_i=([&]()->V{V _lhs32932=j::get(_v_32037_list,this->_literals[8]);V _rhs32933=V(1.0);return V(j::number(_lhs32932)-j::number(_rhs32933));})();
for(;j::truth(([&]()->V{V _lhs32934=_v_32038_i;V _rhs32935=V(0.0);return j::binary(">",_lhs32934,_rhs32935);})());(void)(j::increment(_v_32038_i,-1,false))){
V _v_32039_j;
V _v_32040_v;
_v_32039_j=([&]()->V{V _number32941=([&]()->V{V _lhs32942=([&]()->V{V _callee32944=_v_32018_next.get();return j::call(_callee32944,j::Args{});})();V _rhs32943=([&]()->V{V _lhs32945=_v_32038_i;V _rhs32946=V(1.0);return j::binary("+",_lhs32945,_rhs32946);})();return V(j::number(_lhs32942)*j::number(_rhs32943));})();return V(std::floor(j::number(_number32941)));})();
_v_32040_v=j::get(_v_32037_list,_v_32038_i);
(void)(([&]()->V{V _base32948=_v_32037_list;V _key32949=_v_32038_i;V _assign32947=j::get(_v_32037_list,_v_32039_j);return j::put(_base32948,_key32949,_assign32947);})());
(void)(([&]()->V{V _base32951=_v_32037_list;V _key32952=_v_32039_j;V _assign32950=_v_32040_v;return j::put(_base32951,_key32952,_assign32950);})());

}
}
return _v_32037_list;

}

return V{};
},1);return j::put(_base32924,_key32925,_assign32923);})());
(void)(([&]()->V{V _base32954=_v_32019_r.get();V _key32955=this->_literals[15];V _assign32953=j::function([=](const j::Args &_args_fn32041,const V &_receiver_fn32041,const V &_self_fn32041) mutable ->V{
V _v_32042_radius;
V _default32956=_args_fn32041[0];if(_default32956.kind==V::Undefined||_default32956.kind==V::Hole)_default32956=V(1.0);
_v_32042_radius=_default32956;
{
V _v_32043_a;
_v_32043_a=([&]()->V{V _lhs32957=([&]()->V{V _callee32959=_v_32018_next.get();return j::call(_callee32959,j::Args{});})();V _rhs32958=this->_v_31965_TAU.get();return V(j::number(_lhs32957)*j::number(_rhs32958));})();
return ([&]()->V{j::Args _array32960;_array32960.push_back(([&]()->V{V _lhs32961=_v_32042_radius;V _rhs32962=([&]()->V{V _number32963=_v_32043_a;return V(std::cos(j::number(_number32963)));})();return V(j::number(_lhs32961)*j::number(_rhs32962));})());_array32960.push_back(([&]()->V{V _lhs32964=_v_32042_radius;V _rhs32965=([&]()->V{V _number32966=_v_32043_a;return V(std::sin(j::number(_number32966)));})();return V(j::number(_lhs32964)*j::number(_rhs32965));})());return j::array(std::move(_array32960));})();

}

return V{};
},0);return j::put(_base32954,_key32955,_assign32953);})());
(void)(([&]()->V{V _base32968=_v_32019_r.get();V _key32969=this->_literals[16];V _assign32967=j::function([=](const j::Args &_args_fn32044,const V &_receiver_fn32044,const V &_self_fn32044) mutable ->V{
V _v_32045_radius;
V _default32970=_args_fn32044[0];if(_default32970.kind==V::Undefined||_default32970.kind==V::Hole)_default32970=V(1.0);
_v_32045_radius=_default32970;
{
V _v_32046_a;
V _v_32047_k;
_v_32046_a=([&]()->V{V _lhs32971=([&]()->V{V _callee32973=_v_32018_next.get();return j::call(_callee32973,j::Args{});})();V _rhs32972=this->_v_31965_TAU.get();return V(j::number(_lhs32971)*j::number(_rhs32972));})();
_v_32047_k=([&]()->V{V _lhs32974=_v_32045_radius;V _rhs32975=([&]()->V{V _number32977=([&]()->V{V _callee32978=_v_32018_next.get();return j::call(_callee32978,j::Args{});})();return V(std::sqrt(j::number(_number32977)));})();return V(j::number(_lhs32974)*j::number(_rhs32975));})();
return ([&]()->V{j::Args _array32979;_array32979.push_back(([&]()->V{V _lhs32980=_v_32047_k;V _rhs32981=([&]()->V{V _number32982=_v_32046_a;return V(std::cos(j::number(_number32982)));})();return V(j::number(_lhs32980)*j::number(_rhs32981));})());_array32979.push_back(([&]()->V{V _lhs32983=_v_32047_k;V _rhs32984=([&]()->V{V _number32985=_v_32046_a;return V(std::sin(j::number(_number32985)));})();return V(j::number(_lhs32983)*j::number(_rhs32984));})());return j::array(std::move(_array32979));})();

}

return V{};
},0);return j::put(_base32968,_key32969,_assign32967);})());
(void)(([&]()->V{V _base32987=_v_32019_r.get();V _key32988=this->_literals[17];V _assign32986=j::function([=](const j::Args &_args_fn32048,const V &_receiver_fn32048,const V &_self_fn32048) mutable ->V{
V _v_32049_radius;
V _default32989=_args_fn32048[0];if(_default32989.kind==V::Undefined||_default32989.kind==V::Hole)_default32989=V(1.0);
_v_32049_radius=_default32989;
{
V _v_32050_y;
V _v_32051_a;
V _v_32052_k;
_v_32050_y=([&]()->V{V _lhs32990=([&]()->V{V _lhs32992=V(2.0);V _rhs32993=([&]()->V{V _callee32994=_v_32018_next.get();return j::call(_callee32994,j::Args{});})();return V(j::number(_lhs32992)*j::number(_rhs32993));})();V _rhs32991=V(1.0);return V(j::number(_lhs32990)-j::number(_rhs32991));})();
_v_32051_a=([&]()->V{V _lhs32995=([&]()->V{V _callee32997=_v_32018_next.get();return j::call(_callee32997,j::Args{});})();V _rhs32996=this->_v_31965_TAU.get();return V(j::number(_lhs32995)*j::number(_rhs32996));})();
_v_32052_k=([&]()->V{V _number33002=([&]()->V{V _lhs33003=V(1.0);V _rhs33004=([&]()->V{V _lhs33005=_v_32050_y;V _rhs33006=_v_32050_y;return V(j::number(_lhs33005)*j::number(_rhs33006));})();return V(j::number(_lhs33003)-j::number(_rhs33004));})();return V(std::sqrt(j::number(_number33002)));})();
return ([&]()->V{j::Args _array33007;_array33007.push_back(([&]()->V{V _lhs33008=([&]()->V{V _lhs33010=_v_32049_radius;V _rhs33011=_v_32052_k;return V(j::number(_lhs33010)*j::number(_rhs33011));})();V _rhs33009=([&]()->V{V _number33012=_v_32051_a;return V(std::cos(j::number(_number33012)));})();return V(j::number(_lhs33008)*j::number(_rhs33009));})());_array33007.push_back(([&]()->V{V _lhs33013=_v_32049_radius;V _rhs33014=_v_32050_y;return V(j::number(_lhs33013)*j::number(_rhs33014));})());_array33007.push_back(([&]()->V{V _lhs33015=([&]()->V{V _lhs33017=_v_32049_radius;V _rhs33018=_v_32052_k;return V(j::number(_lhs33017)*j::number(_rhs33018));})();V _rhs33016=([&]()->V{V _number33019=_v_32051_a;return V(std::sin(j::number(_number33019)));})();return V(j::number(_lhs33015)*j::number(_rhs33016));})());return j::array(std::move(_array33007));})();

}

return V{};
},0);return j::put(_base32987,_key32988,_assign32986);})());
(void)(([&]()->V{V _base33021=_v_32019_r.get();V _key33022=this->_literals[18];V _assign33020=j::function([=](const j::Args &_args_fn32053,const V &_receiver_fn32053,const V &_self_fn32053) mutable ->V{
V _v_32054_radius;
V _default33023=_args_fn32053[0];if(_default33023.kind==V::Undefined||_default33023.kind==V::Hole)_default33023=V(1.0);
_v_32054_radius=_default33023;
{
V _v_32055_p;
V _v_32056_k;
_v_32055_p=([&]()->V{V _receiver33024=_v_32019_r.get();V _method33025=this->_literals[17];V _method=j::get(_receiver33024,_method33025);j::Args _params33026=j::Args{_v_32054_radius};return j::call(_method,_params33026,_receiver33024);})();
_v_32056_k=([&]()->V{V _number33028=([&]()->V{V _callee33029=_v_32018_next.get();return j::call(_callee33029,j::Args{});})();return V(std::cbrt(j::number(_number33028)));})();
return ([&]()->V{j::Args _array33030;_array33030.push_back(([&]()->V{V _lhs33031=j::get(_v_32055_p,V(0.0));V _rhs33032=_v_32056_k;return V(j::number(_lhs33031)*j::number(_rhs33032));})());_array33030.push_back(([&]()->V{V _lhs33033=j::get(_v_32055_p,V(1.0));V _rhs33034=_v_32056_k;return V(j::number(_lhs33033)*j::number(_rhs33034));})());_array33030.push_back(([&]()->V{V _lhs33035=j::get(_v_32055_p,V(2.0));V _rhs33036=_v_32056_k;return V(j::number(_lhs33035)*j::number(_rhs33036));})());return j::array(std::move(_array33030));})();

}

return V{};
},0);return j::put(_base33021,_key33022,_assign33020);})());
(void)(([&]()->V{V _base33038=_v_32019_r.get();V _key33039=this->_literals[19];V _assign33037=j::function([=](const j::Args &_args_fn32057,const V &_receiver_fn32057,const V &_self_fn32057) mutable ->V{
V _v_32058_n;
_v_32058_n=_args_fn32057[0];
{
if(j::truth(j::unary("!",([&]()->V{V _receiver33040=j::builtin("Number");V _method33041=this->_literals[0];V _method=j::get(_receiver33040,_method33041);j::Args _params33042=j::Args{_v_32058_n};return j::call(_method,_params33042,_receiver33040);})()))){(void)(([&]()->V{V _callee33045=this->_v_31968_fail.get();return j::call(_callee33045,j::Args{([&]()->V{std::u16string _text33043;_text33043+=u"fork() takes a whole number for the stream, such as 1, not ";_text33043+=j::string(([&]()->V{V _callee33044=this->_v_31971_said.get();return j::call(_callee33044,j::Args{_v_32058_n});})());_text33043+=u"";return V(std::move(_text33043));})()});})());
}
return ([&]()->V{V _callee33055=this->_v_32015_random.get();return j::call(_callee33055,j::Args{([&]()->V{V _lhs33046=([&]()->V{V _number33051=([&]()->V{V _lhs33052=([&]()->V{V _callee33054=this->_v_31969_hash.get();return j::call(_callee33054,j::Args{_v_32017_seed.get(),_v_32058_n,V(625341585.0)});})();V _rhs33053=V(4294967296.0);return V(j::number(_lhs33052)*j::number(_rhs33053));})();return V(std::floor(j::number(_number33051)));})();V _rhs33047=V(0.0);return V(int(j::i32(_lhs33046)|j::i32(_rhs33047)));})()});})();

}

return V{};
},1);return j::put(_base33038,_key33039,_assign33037);})());
return _v_32019_r.get();

}

return V{};
},0);
this->_v_32060_table.get()=j::function([=](const j::Args &_args_fn32061,const V &_receiver_fn32061,const V &_self_fn32061) mutable ->V{
V _v_32062_seed;
_v_32062_seed=_args_fn32061[0];
{
V _v_32063_b;
V _v_32064_t;
_v_32063_b=([&]()->V{V _lhs33056=_v_32062_seed;V _rhs33057=V(255.0);return V(int(j::i32(_lhs33056)&j::i32(_rhs33057)));})();
_v_32064_t=j::get(this->_v_32059_tables.get(),_v_32063_b);
if(j::truth(j::unary("!",_v_32064_t))){
V _v_32065_p;
V _v_32067_r;
V _v_32071_perm;
V _v_32072_mod12;
_v_32065_p=([&]()->V{V _callee33058=j::builtin("Uint8Array");return j::construct(_callee33058,j::Args{V(256.0)});})();
{V _v_32066_i;
_v_32066_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs33059=_v_32066_i;V _rhs33060=V(256.0);return j::binary("<",_lhs33059,_rhs33060);})());(void)(j::increment(_v_32066_i,1,false))){(void)(([&]()->V{V _base33062=_v_32065_p;V _key33063=_v_32066_i;V _assign33061=_v_32066_i;return j::put(_base33062,_key33063,_assign33061);})());
}}
_v_32067_r=([&]()->V{V _callee33064=this->_v_31970_mulberry32.get();return j::call(_callee33064,j::Args{_v_32063_b});})();
{V _v_32068_i;
_v_32068_i=V(255.0);
for(;j::truth(([&]()->V{V _lhs33065=_v_32068_i;V _rhs33066=V(0.0);return j::binary(">",_lhs33065,_rhs33066);})());(void)(j::increment(_v_32068_i,-1,false))){
V _v_32069_j;
V _v_32070_v;
_v_32069_j=([&]()->V{V _number33072=([&]()->V{V _lhs33073=([&]()->V{V _callee33075=_v_32067_r;return j::call(_callee33075,j::Args{});})();V _rhs33074=([&]()->V{V _lhs33076=_v_32068_i;V _rhs33077=V(1.0);return j::binary("+",_lhs33076,_rhs33077);})();return V(j::number(_lhs33073)*j::number(_rhs33074));})();return V(std::floor(j::number(_number33072)));})();
_v_32070_v=j::get(_v_32065_p,_v_32068_i);
(void)(([&]()->V{V _base33079=_v_32065_p;V _key33080=_v_32068_i;V _assign33078=j::get(_v_32065_p,_v_32069_j);return j::put(_base33079,_key33080,_assign33078);})());
(void)(([&]()->V{V _base33082=_v_32065_p;V _key33083=_v_32069_j;V _assign33081=_v_32070_v;return j::put(_base33082,_key33083,_assign33081);})());

}
}
_v_32071_perm=([&]()->V{V _callee33084=j::builtin("Uint8Array");return j::construct(_callee33084,j::Args{V(512.0)});})();
_v_32072_mod12=([&]()->V{V _callee33085=j::builtin("Uint8Array");return j::construct(_callee33085,j::Args{V(512.0)});})();
{V _v_32073_i;
_v_32073_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs33086=_v_32073_i;V _rhs33087=V(512.0);return j::binary("<",_lhs33086,_rhs33087);})());(void)(j::increment(_v_32073_i,1,false))){
(void)(([&]()->V{V _base33089=_v_32071_perm;V _key33090=_v_32073_i;V _assign33088=j::get(_v_32065_p,([&]()->V{V _lhs33091=_v_32073_i;V _rhs33092=V(255.0);return V(int(j::i32(_lhs33091)&j::i32(_rhs33092)));})());return j::put(_base33089,_key33090,_assign33088);})());
(void)(([&]()->V{V _base33094=_v_32072_mod12;V _key33095=_v_32073_i;V _assign33093=([&]()->V{V _lhs33096=j::get(_v_32071_perm,_v_32073_i);V _rhs33097=V(12.0);return V(std::fmod(j::number(_lhs33096),j::number(_rhs33097)));})();return j::put(_base33094,_key33095,_assign33093);})());

}
}
(void)(([&]()->V{V _base33099=this->_v_32059_tables.get();V _key33100=_v_32063_b;V _assign33098=(_v_32064_t=([&]()->V{V _obj33102=j::object();j::put(_obj33102,this->_literals[20],_v_32071_perm);j::put(_obj33102,this->_literals[21],_v_32072_mod12);return _obj33102;})());return j::put(_base33099,_key33100,_assign33098);})());

}

return _v_32064_t;

}

return V{};
},1);
this->_v_32099_simplex2.get()=j::function([=](const j::Args &_args_fn32100,const V &_receiver_fn32100,const V &_self_fn32100) mutable ->V{
V _v_32101_x;
V _v_32102_y;
V _v_32103_seed;
_v_32101_x=_args_fn32100[0];
_v_32102_y=_args_fn32100[1];
_v_32103_seed=_args_fn32100[2];
{
V _v_32104_perm;
V _v_32105_mod12;
V _v_32106_s;
V _v_32107_i;
V _v_32108_j;
V _v_32109_t;
V _v_32110_x0;
V _v_32111_y0;
V _v_32112_i1;
V _v_32113_j1;
V _v_32114_x1;
V _v_32115_y1;
V _v_32116_x2;
V _v_32117_y2;
V _v_32118_ii;
V _v_32119_jj;
V _v_32120_n;
V _v_32121_k;
V _v_32122_g;
V _pattern33104=([&]()->V{V _callee33103=this->_v_32060_table.get();return j::call(_callee33103,j::Args{_v_32103_seed});})();
_v_32104_perm=j::get(_pattern33104,this->_literals[20]);
_v_32105_mod12=j::get(_pattern33104,this->_literals[21]);
if(j::truth(([&]()->V{V _lhs33105=_v_32103_seed;V _rhs33106=V(8.0);return V(int(j::i32(_lhs33105)>>(j::u32(_rhs33106)&31)));})())){(void)(((_v_32101_x=j::binary("+",_v_32101_x,([&]()->V{V _callee33108=this->_v_32074_shift.get();return j::call(_callee33108,j::Args{_v_32103_seed,V(1.0)});})())),(_v_32102_y=j::binary("+",_v_32102_y,([&]()->V{V _callee33110=this->_v_32074_shift.get();return j::call(_callee33110,j::Args{_v_32103_seed,V(2.0)});})()))));
}
_v_32106_s=([&]()->V{V _lhs33111=([&]()->V{V _lhs33113=_v_32101_x;V _rhs33114=_v_32102_y;return j::binary("+",_lhs33113,_rhs33114);})();V _rhs33112=this->_v_32080_F2.get();return V(j::number(_lhs33111)*j::number(_rhs33112));})();
_v_32107_i=([&]()->V{V _number33117=([&]()->V{V _lhs33118=_v_32101_x;V _rhs33119=_v_32106_s;return j::binary("+",_lhs33118,_rhs33119);})();return V(std::floor(j::number(_number33117)));})();
_v_32108_j=([&]()->V{V _number33122=([&]()->V{V _lhs33123=_v_32102_y;V _rhs33124=_v_32106_s;return j::binary("+",_lhs33123,_rhs33124);})();return V(std::floor(j::number(_number33122)));})();
_v_32109_t=([&]()->V{V _lhs33125=([&]()->V{V _lhs33127=_v_32107_i;V _rhs33128=_v_32108_j;return j::binary("+",_lhs33127,_rhs33128);})();V _rhs33126=this->_v_32081_H2.get();return V(j::number(_lhs33125)*j::number(_rhs33126));})();
_v_32110_x0=([&]()->V{V _lhs33129=_v_32101_x;V _rhs33130=([&]()->V{V _lhs33131=_v_32107_i;V _rhs33132=_v_32109_t;return V(j::number(_lhs33131)-j::number(_rhs33132));})();return V(j::number(_lhs33129)-j::number(_rhs33130));})();
_v_32111_y0=([&]()->V{V _lhs33133=_v_32102_y;V _rhs33134=([&]()->V{V _lhs33135=_v_32108_j;V _rhs33136=_v_32109_t;return V(j::number(_lhs33135)-j::number(_rhs33136));})();return V(j::number(_lhs33133)-j::number(_rhs33134));})();
_v_32112_i1=(j::truth(([&]()->V{V _lhs33137=_v_32110_x0;V _rhs33138=_v_32111_y0;return j::binary(">",_lhs33137,_rhs33138);})())?V(1.0):V(0.0));
_v_32113_j1=([&]()->V{V _lhs33139=V(1.0);V _rhs33140=_v_32112_i1;return V(j::number(_lhs33139)-j::number(_rhs33140));})();
_v_32114_x1=([&]()->V{V _lhs33141=([&]()->V{V _lhs33143=_v_32110_x0;V _rhs33144=_v_32112_i1;return V(j::number(_lhs33143)-j::number(_rhs33144));})();V _rhs33142=this->_v_32081_H2.get();return j::binary("+",_lhs33141,_rhs33142);})();
_v_32115_y1=([&]()->V{V _lhs33145=([&]()->V{V _lhs33147=_v_32111_y0;V _rhs33148=_v_32113_j1;return V(j::number(_lhs33147)-j::number(_rhs33148));})();V _rhs33146=this->_v_32081_H2.get();return j::binary("+",_lhs33145,_rhs33146);})();
_v_32116_x2=([&]()->V{V _lhs33149=([&]()->V{V _lhs33151=_v_32110_x0;V _rhs33152=V(1.0);return V(j::number(_lhs33151)-j::number(_rhs33152));})();V _rhs33150=([&]()->V{V _lhs33153=V(2.0);V _rhs33154=this->_v_32081_H2.get();return V(j::number(_lhs33153)*j::number(_rhs33154));})();return j::binary("+",_lhs33149,_rhs33150);})();
_v_32117_y2=([&]()->V{V _lhs33155=([&]()->V{V _lhs33157=_v_32111_y0;V _rhs33158=V(1.0);return V(j::number(_lhs33157)-j::number(_rhs33158));})();V _rhs33156=([&]()->V{V _lhs33159=V(2.0);V _rhs33160=this->_v_32081_H2.get();return V(j::number(_lhs33159)*j::number(_rhs33160));})();return j::binary("+",_lhs33155,_rhs33156);})();
_v_32118_ii=([&]()->V{V _lhs33161=_v_32107_i;V _rhs33162=V(255.0);return V(int(j::i32(_lhs33161)&j::i32(_rhs33162)));})();
_v_32119_jj=([&]()->V{V _lhs33163=_v_32108_j;V _rhs33164=V(255.0);return V(int(j::i32(_lhs33163)&j::i32(_rhs33164)));})();
_v_32120_n=V(0.0);
if(j::truth(([&]()->V{V _lhs33165=(_v_32121_k=([&]()->V{V _lhs33168=([&]()->V{V _lhs33170=V(0.5);V _rhs33171=([&]()->V{V _lhs33172=_v_32110_x0;V _rhs33173=_v_32110_x0;return V(j::number(_lhs33172)*j::number(_rhs33173));})();return V(j::number(_lhs33170)-j::number(_rhs33171));})();V _rhs33169=([&]()->V{V _lhs33174=_v_32111_y0;V _rhs33175=_v_32111_y0;return V(j::number(_lhs33174)*j::number(_rhs33175));})();return V(j::number(_lhs33168)-j::number(_rhs33169));})());V _rhs33166=V(0.0);return j::binary(">",_lhs33165,_rhs33166);})())){(void)(((_v_32122_g=([&]()->V{V _lhs33177=j::get(_v_32105_mod12,([&]()->V{V _lhs33179=_v_32118_ii;V _rhs33180=j::get(_v_32104_perm,_v_32119_jj);return j::binary("+",_lhs33179,_rhs33180);})());V _rhs33178=V(3.0);return V(j::number(_lhs33177)*j::number(_rhs33178));})()),(_v_32121_k=j::binary("*",_v_32121_k,_v_32121_k)),(_v_32120_n=j::binary("+",_v_32120_n,([&]()->V{V _lhs33183=([&]()->V{V _lhs33185=_v_32121_k;V _rhs33186=_v_32121_k;return V(j::number(_lhs33185)*j::number(_rhs33186));})();V _rhs33184=([&]()->V{V _lhs33187=([&]()->V{V _lhs33189=j::get(this->_v_32078_G3.get(),_v_32122_g);V _rhs33190=_v_32110_x0;return V(j::number(_lhs33189)*j::number(_rhs33190));})();V _rhs33188=([&]()->V{V _lhs33191=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33193=_v_32122_g;V _rhs33194=V(1.0);return j::binary("+",_lhs33193,_rhs33194);})());V _rhs33192=_v_32111_y0;return V(j::number(_lhs33191)*j::number(_rhs33192));})();return j::binary("+",_lhs33187,_rhs33188);})();return V(j::number(_lhs33183)*j::number(_rhs33184));})()))));
}
if(j::truth(([&]()->V{V _lhs33195=(_v_32121_k=([&]()->V{V _lhs33198=([&]()->V{V _lhs33200=V(0.5);V _rhs33201=([&]()->V{V _lhs33202=_v_32114_x1;V _rhs33203=_v_32114_x1;return V(j::number(_lhs33202)*j::number(_rhs33203));})();return V(j::number(_lhs33200)-j::number(_rhs33201));})();V _rhs33199=([&]()->V{V _lhs33204=_v_32115_y1;V _rhs33205=_v_32115_y1;return V(j::number(_lhs33204)*j::number(_rhs33205));})();return V(j::number(_lhs33198)-j::number(_rhs33199));})());V _rhs33196=V(0.0);return j::binary(">",_lhs33195,_rhs33196);})())){(void)(((_v_32122_g=([&]()->V{V _lhs33207=j::get(_v_32105_mod12,([&]()->V{V _lhs33209=([&]()->V{V _lhs33211=_v_32118_ii;V _rhs33212=_v_32112_i1;return j::binary("+",_lhs33211,_rhs33212);})();V _rhs33210=j::get(_v_32104_perm,([&]()->V{V _lhs33213=_v_32119_jj;V _rhs33214=_v_32113_j1;return j::binary("+",_lhs33213,_rhs33214);})());return j::binary("+",_lhs33209,_rhs33210);})());V _rhs33208=V(3.0);return V(j::number(_lhs33207)*j::number(_rhs33208));})()),(_v_32121_k=j::binary("*",_v_32121_k,_v_32121_k)),(_v_32120_n=j::binary("+",_v_32120_n,([&]()->V{V _lhs33217=([&]()->V{V _lhs33219=_v_32121_k;V _rhs33220=_v_32121_k;return V(j::number(_lhs33219)*j::number(_rhs33220));})();V _rhs33218=([&]()->V{V _lhs33221=([&]()->V{V _lhs33223=j::get(this->_v_32078_G3.get(),_v_32122_g);V _rhs33224=_v_32114_x1;return V(j::number(_lhs33223)*j::number(_rhs33224));})();V _rhs33222=([&]()->V{V _lhs33225=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33227=_v_32122_g;V _rhs33228=V(1.0);return j::binary("+",_lhs33227,_rhs33228);})());V _rhs33226=_v_32115_y1;return V(j::number(_lhs33225)*j::number(_rhs33226));})();return j::binary("+",_lhs33221,_rhs33222);})();return V(j::number(_lhs33217)*j::number(_rhs33218));})()))));
}
if(j::truth(([&]()->V{V _lhs33229=(_v_32121_k=([&]()->V{V _lhs33232=([&]()->V{V _lhs33234=V(0.5);V _rhs33235=([&]()->V{V _lhs33236=_v_32116_x2;V _rhs33237=_v_32116_x2;return V(j::number(_lhs33236)*j::number(_rhs33237));})();return V(j::number(_lhs33234)-j::number(_rhs33235));})();V _rhs33233=([&]()->V{V _lhs33238=_v_32117_y2;V _rhs33239=_v_32117_y2;return V(j::number(_lhs33238)*j::number(_rhs33239));})();return V(j::number(_lhs33232)-j::number(_rhs33233));})());V _rhs33230=V(0.0);return j::binary(">",_lhs33229,_rhs33230);})())){(void)(((_v_32122_g=([&]()->V{V _lhs33241=j::get(_v_32105_mod12,([&]()->V{V _lhs33243=([&]()->V{V _lhs33245=_v_32118_ii;V _rhs33246=V(1.0);return j::binary("+",_lhs33245,_rhs33246);})();V _rhs33244=j::get(_v_32104_perm,([&]()->V{V _lhs33247=_v_32119_jj;V _rhs33248=V(1.0);return j::binary("+",_lhs33247,_rhs33248);})());return j::binary("+",_lhs33243,_rhs33244);})());V _rhs33242=V(3.0);return V(j::number(_lhs33241)*j::number(_rhs33242));})()),(_v_32121_k=j::binary("*",_v_32121_k,_v_32121_k)),(_v_32120_n=j::binary("+",_v_32120_n,([&]()->V{V _lhs33251=([&]()->V{V _lhs33253=_v_32121_k;V _rhs33254=_v_32121_k;return V(j::number(_lhs33253)*j::number(_rhs33254));})();V _rhs33252=([&]()->V{V _lhs33255=([&]()->V{V _lhs33257=j::get(this->_v_32078_G3.get(),_v_32122_g);V _rhs33258=_v_32116_x2;return V(j::number(_lhs33257)*j::number(_rhs33258));})();V _rhs33256=([&]()->V{V _lhs33259=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33261=_v_32122_g;V _rhs33262=V(1.0);return j::binary("+",_lhs33261,_rhs33262);})());V _rhs33260=_v_32117_y2;return V(j::number(_lhs33259)*j::number(_rhs33260));})();return j::binary("+",_lhs33255,_rhs33256);})();return V(j::number(_lhs33251)*j::number(_rhs33252));})()))));
}
return ([&]()->V{V _lhs33263=this->_v_32086_S2.get();V _rhs33264=_v_32120_n;return V(j::number(_lhs33263)*j::number(_rhs33264));})();

}

return V{};
},3);
this->_v_32123_simplex3.get()=j::function([=](const j::Args &_args_fn32124,const V &_receiver_fn32124,const V &_self_fn32124) mutable ->V{
V _v_32125_x;
V _v_32126_y;
V _v_32127_z;
V _v_32128_seed;
_v_32125_x=_args_fn32124[0];
_v_32126_y=_args_fn32124[1];
_v_32127_z=_args_fn32124[2];
_v_32128_seed=_args_fn32124[3];
{
V _v_32129_perm;
V _v_32130_mod12;
V _v_32131_s;
V _v_32132_i;
V _v_32133_j;
V _v_32134_l;
V _v_32135_t;
V _v_32136_x0;
V _v_32137_y0;
V _v_32138_z0;
V _v_32139_i1;
V _v_32140_j1;
V _v_32141_l1;
V _v_32142_i2;
V _v_32143_j2;
V _v_32144_l2;
V _v_32145_x1;
V _v_32146_y1;
V _v_32147_z1;
V _v_32148_x2;
V _v_32149_y2;
V _v_32150_z2;
V _v_32151_x3;
V _v_32152_y3;
V _v_32153_z3;
V _v_32154_ii;
V _v_32155_jj;
V _v_32156_ll;
V _v_32157_n;
V _v_32158_k;
V _v_32159_g;
V _pattern33266=([&]()->V{V _callee33265=this->_v_32060_table.get();return j::call(_callee33265,j::Args{_v_32128_seed});})();
_v_32129_perm=j::get(_pattern33266,this->_literals[20]);
_v_32130_mod12=j::get(_pattern33266,this->_literals[21]);
if(j::truth(([&]()->V{V _lhs33267=_v_32128_seed;V _rhs33268=V(8.0);return V(int(j::i32(_lhs33267)>>(j::u32(_rhs33268)&31)));})())){(void)(((_v_32125_x=j::binary("+",_v_32125_x,([&]()->V{V _callee33270=this->_v_32074_shift.get();return j::call(_callee33270,j::Args{_v_32128_seed,V(1.0)});})())),(_v_32126_y=j::binary("+",_v_32126_y,([&]()->V{V _callee33272=this->_v_32074_shift.get();return j::call(_callee33272,j::Args{_v_32128_seed,V(2.0)});})())),(_v_32127_z=j::binary("+",_v_32127_z,([&]()->V{V _callee33274=this->_v_32074_shift.get();return j::call(_callee33274,j::Args{_v_32128_seed,V(3.0)});})()))));
}
_v_32131_s=([&]()->V{V _lhs33275=([&]()->V{V _lhs33277=([&]()->V{V _lhs33279=_v_32125_x;V _rhs33280=_v_32126_y;return j::binary("+",_lhs33279,_rhs33280);})();V _rhs33278=_v_32127_z;return j::binary("+",_lhs33277,_rhs33278);})();V _rhs33276=this->_v_32082_F3.get();return V(j::number(_lhs33275)*j::number(_rhs33276));})();
_v_32132_i=([&]()->V{V _number33283=([&]()->V{V _lhs33284=_v_32125_x;V _rhs33285=_v_32131_s;return j::binary("+",_lhs33284,_rhs33285);})();return V(std::floor(j::number(_number33283)));})();
_v_32133_j=([&]()->V{V _number33288=([&]()->V{V _lhs33289=_v_32126_y;V _rhs33290=_v_32131_s;return j::binary("+",_lhs33289,_rhs33290);})();return V(std::floor(j::number(_number33288)));})();
_v_32134_l=([&]()->V{V _number33293=([&]()->V{V _lhs33294=_v_32127_z;V _rhs33295=_v_32131_s;return j::binary("+",_lhs33294,_rhs33295);})();return V(std::floor(j::number(_number33293)));})();
_v_32135_t=([&]()->V{V _lhs33296=([&]()->V{V _lhs33298=([&]()->V{V _lhs33300=_v_32132_i;V _rhs33301=_v_32133_j;return j::binary("+",_lhs33300,_rhs33301);})();V _rhs33299=_v_32134_l;return j::binary("+",_lhs33298,_rhs33299);})();V _rhs33297=this->_v_32083_H3.get();return V(j::number(_lhs33296)*j::number(_rhs33297));})();
_v_32136_x0=([&]()->V{V _lhs33302=_v_32125_x;V _rhs33303=([&]()->V{V _lhs33304=_v_32132_i;V _rhs33305=_v_32135_t;return V(j::number(_lhs33304)-j::number(_rhs33305));})();return V(j::number(_lhs33302)-j::number(_rhs33303));})();
_v_32137_y0=([&]()->V{V _lhs33306=_v_32126_y;V _rhs33307=([&]()->V{V _lhs33308=_v_32133_j;V _rhs33309=_v_32135_t;return V(j::number(_lhs33308)-j::number(_rhs33309));})();return V(j::number(_lhs33306)-j::number(_rhs33307));})();
_v_32138_z0=([&]()->V{V _lhs33310=_v_32127_z;V _rhs33311=([&]()->V{V _lhs33312=_v_32134_l;V _rhs33313=_v_32135_t;return V(j::number(_lhs33312)-j::number(_rhs33313));})();return V(j::number(_lhs33310)-j::number(_rhs33311));})();
if(j::truth(([&]()->V{V _lhs33314=_v_32136_x0;V _rhs33315=_v_32137_y0;return j::binary(">=",_lhs33314,_rhs33315);})())){
if(j::truth(([&]()->V{V _lhs33316=_v_32137_y0;V _rhs33317=_v_32138_z0;return j::binary(">=",_lhs33316,_rhs33317);})())){(void)(((_v_32139_i1=V(1.0)),(_v_32140_j1=V(0.0)),(_v_32141_l1=V(0.0)),(_v_32142_i2=V(1.0)),(_v_32143_j2=V(1.0)),(_v_32144_l2=V(0.0))));
}else {if(j::truth(([&]()->V{V _lhs33324=_v_32136_x0;V _rhs33325=_v_32138_z0;return j::binary(">=",_lhs33324,_rhs33325);})())){(void)(((_v_32139_i1=V(1.0)),(_v_32140_j1=V(0.0)),(_v_32141_l1=V(0.0)),(_v_32142_i2=V(1.0)),(_v_32143_j2=V(0.0)),(_v_32144_l2=V(1.0))));
}else {(void)(((_v_32139_i1=V(0.0)),(_v_32140_j1=V(0.0)),(_v_32141_l1=V(1.0)),(_v_32142_i2=V(1.0)),(_v_32143_j2=V(0.0)),(_v_32144_l2=V(1.0))));
}
}

}
else {if(j::truth(([&]()->V{V _lhs33338=_v_32137_y0;V _rhs33339=_v_32138_z0;return j::binary("<",_lhs33338,_rhs33339);})())){(void)(((_v_32139_i1=V(0.0)),(_v_32140_j1=V(0.0)),(_v_32141_l1=V(1.0)),(_v_32142_i2=V(0.0)),(_v_32143_j2=V(1.0)),(_v_32144_l2=V(1.0))));
}else {if(j::truth(([&]()->V{V _lhs33346=_v_32136_x0;V _rhs33347=_v_32138_z0;return j::binary("<",_lhs33346,_rhs33347);})())){(void)(((_v_32139_i1=V(0.0)),(_v_32140_j1=V(1.0)),(_v_32141_l1=V(0.0)),(_v_32142_i2=V(0.0)),(_v_32143_j2=V(1.0)),(_v_32144_l2=V(1.0))));
}else {(void)(((_v_32139_i1=V(0.0)),(_v_32140_j1=V(1.0)),(_v_32141_l1=V(0.0)),(_v_32142_i2=V(1.0)),(_v_32143_j2=V(1.0)),(_v_32144_l2=V(0.0))));
}
}
}
_v_32145_x1=([&]()->V{V _lhs33360=([&]()->V{V _lhs33362=_v_32136_x0;V _rhs33363=_v_32139_i1;return V(j::number(_lhs33362)-j::number(_rhs33363));})();V _rhs33361=this->_v_32083_H3.get();return j::binary("+",_lhs33360,_rhs33361);})();
_v_32146_y1=([&]()->V{V _lhs33364=([&]()->V{V _lhs33366=_v_32137_y0;V _rhs33367=_v_32140_j1;return V(j::number(_lhs33366)-j::number(_rhs33367));})();V _rhs33365=this->_v_32083_H3.get();return j::binary("+",_lhs33364,_rhs33365);})();
_v_32147_z1=([&]()->V{V _lhs33368=([&]()->V{V _lhs33370=_v_32138_z0;V _rhs33371=_v_32141_l1;return V(j::number(_lhs33370)-j::number(_rhs33371));})();V _rhs33369=this->_v_32083_H3.get();return j::binary("+",_lhs33368,_rhs33369);})();
_v_32148_x2=([&]()->V{V _lhs33372=([&]()->V{V _lhs33374=_v_32136_x0;V _rhs33375=_v_32142_i2;return V(j::number(_lhs33374)-j::number(_rhs33375));})();V _rhs33373=([&]()->V{V _lhs33376=V(2.0);V _rhs33377=this->_v_32083_H3.get();return V(j::number(_lhs33376)*j::number(_rhs33377));})();return j::binary("+",_lhs33372,_rhs33373);})();
_v_32149_y2=([&]()->V{V _lhs33378=([&]()->V{V _lhs33380=_v_32137_y0;V _rhs33381=_v_32143_j2;return V(j::number(_lhs33380)-j::number(_rhs33381));})();V _rhs33379=([&]()->V{V _lhs33382=V(2.0);V _rhs33383=this->_v_32083_H3.get();return V(j::number(_lhs33382)*j::number(_rhs33383));})();return j::binary("+",_lhs33378,_rhs33379);})();
_v_32150_z2=([&]()->V{V _lhs33384=([&]()->V{V _lhs33386=_v_32138_z0;V _rhs33387=_v_32144_l2;return V(j::number(_lhs33386)-j::number(_rhs33387));})();V _rhs33385=([&]()->V{V _lhs33388=V(2.0);V _rhs33389=this->_v_32083_H3.get();return V(j::number(_lhs33388)*j::number(_rhs33389));})();return j::binary("+",_lhs33384,_rhs33385);})();
_v_32151_x3=([&]()->V{V _lhs33390=([&]()->V{V _lhs33392=_v_32136_x0;V _rhs33393=V(1.0);return V(j::number(_lhs33392)-j::number(_rhs33393));})();V _rhs33391=([&]()->V{V _lhs33394=V(3.0);V _rhs33395=this->_v_32083_H3.get();return V(j::number(_lhs33394)*j::number(_rhs33395));})();return j::binary("+",_lhs33390,_rhs33391);})();
_v_32152_y3=([&]()->V{V _lhs33396=([&]()->V{V _lhs33398=_v_32137_y0;V _rhs33399=V(1.0);return V(j::number(_lhs33398)-j::number(_rhs33399));})();V _rhs33397=([&]()->V{V _lhs33400=V(3.0);V _rhs33401=this->_v_32083_H3.get();return V(j::number(_lhs33400)*j::number(_rhs33401));})();return j::binary("+",_lhs33396,_rhs33397);})();
_v_32153_z3=([&]()->V{V _lhs33402=([&]()->V{V _lhs33404=_v_32138_z0;V _rhs33405=V(1.0);return V(j::number(_lhs33404)-j::number(_rhs33405));})();V _rhs33403=([&]()->V{V _lhs33406=V(3.0);V _rhs33407=this->_v_32083_H3.get();return V(j::number(_lhs33406)*j::number(_rhs33407));})();return j::binary("+",_lhs33402,_rhs33403);})();
_v_32154_ii=([&]()->V{V _lhs33408=_v_32132_i;V _rhs33409=V(255.0);return V(int(j::i32(_lhs33408)&j::i32(_rhs33409)));})();
_v_32155_jj=([&]()->V{V _lhs33410=_v_32133_j;V _rhs33411=V(255.0);return V(int(j::i32(_lhs33410)&j::i32(_rhs33411)));})();
_v_32156_ll=([&]()->V{V _lhs33412=_v_32134_l;V _rhs33413=V(255.0);return V(int(j::i32(_lhs33412)&j::i32(_rhs33413)));})();
_v_32157_n=V(0.0);
if(j::truth(([&]()->V{V _lhs33414=(_v_32158_k=([&]()->V{V _lhs33417=([&]()->V{V _lhs33419=([&]()->V{V _lhs33421=V(0.6);V _rhs33422=([&]()->V{V _lhs33423=_v_32136_x0;V _rhs33424=_v_32136_x0;return V(j::number(_lhs33423)*j::number(_rhs33424));})();return V(j::number(_lhs33421)-j::number(_rhs33422));})();V _rhs33420=([&]()->V{V _lhs33425=_v_32137_y0;V _rhs33426=_v_32137_y0;return V(j::number(_lhs33425)*j::number(_rhs33426));})();return V(j::number(_lhs33419)-j::number(_rhs33420));})();V _rhs33418=([&]()->V{V _lhs33427=_v_32138_z0;V _rhs33428=_v_32138_z0;return V(j::number(_lhs33427)*j::number(_rhs33428));})();return V(j::number(_lhs33417)-j::number(_rhs33418));})());V _rhs33415=V(0.0);return j::binary(">",_lhs33414,_rhs33415);})())){(void)(((_v_32159_g=([&]()->V{V _lhs33430=j::get(_v_32130_mod12,([&]()->V{V _lhs33432=_v_32154_ii;V _rhs33433=j::get(_v_32129_perm,([&]()->V{V _lhs33434=_v_32155_jj;V _rhs33435=j::get(_v_32129_perm,_v_32156_ll);return j::binary("+",_lhs33434,_rhs33435);})());return j::binary("+",_lhs33432,_rhs33433);})());V _rhs33431=V(3.0);return V(j::number(_lhs33430)*j::number(_rhs33431));})()),(_v_32158_k=j::binary("*",_v_32158_k,_v_32158_k)),(_v_32157_n=j::binary("+",_v_32157_n,([&]()->V{V _lhs33438=([&]()->V{V _lhs33440=_v_32158_k;V _rhs33441=_v_32158_k;return V(j::number(_lhs33440)*j::number(_rhs33441));})();V _rhs33439=([&]()->V{V _lhs33442=([&]()->V{V _lhs33444=([&]()->V{V _lhs33446=j::get(this->_v_32078_G3.get(),_v_32159_g);V _rhs33447=_v_32136_x0;return V(j::number(_lhs33446)*j::number(_rhs33447));})();V _rhs33445=([&]()->V{V _lhs33448=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33450=_v_32159_g;V _rhs33451=V(1.0);return j::binary("+",_lhs33450,_rhs33451);})());V _rhs33449=_v_32137_y0;return V(j::number(_lhs33448)*j::number(_rhs33449));})();return j::binary("+",_lhs33444,_rhs33445);})();V _rhs33443=([&]()->V{V _lhs33452=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33454=_v_32159_g;V _rhs33455=V(2.0);return j::binary("+",_lhs33454,_rhs33455);})());V _rhs33453=_v_32138_z0;return V(j::number(_lhs33452)*j::number(_rhs33453));})();return j::binary("+",_lhs33442,_rhs33443);})();return V(j::number(_lhs33438)*j::number(_rhs33439));})()))));
}
if(j::truth(([&]()->V{V _lhs33456=(_v_32158_k=([&]()->V{V _lhs33459=([&]()->V{V _lhs33461=([&]()->V{V _lhs33463=V(0.6);V _rhs33464=([&]()->V{V _lhs33465=_v_32145_x1;V _rhs33466=_v_32145_x1;return V(j::number(_lhs33465)*j::number(_rhs33466));})();return V(j::number(_lhs33463)-j::number(_rhs33464));})();V _rhs33462=([&]()->V{V _lhs33467=_v_32146_y1;V _rhs33468=_v_32146_y1;return V(j::number(_lhs33467)*j::number(_rhs33468));})();return V(j::number(_lhs33461)-j::number(_rhs33462));})();V _rhs33460=([&]()->V{V _lhs33469=_v_32147_z1;V _rhs33470=_v_32147_z1;return V(j::number(_lhs33469)*j::number(_rhs33470));})();return V(j::number(_lhs33459)-j::number(_rhs33460));})());V _rhs33457=V(0.0);return j::binary(">",_lhs33456,_rhs33457);})())){(void)(((_v_32159_g=([&]()->V{V _lhs33472=j::get(_v_32130_mod12,([&]()->V{V _lhs33474=([&]()->V{V _lhs33476=_v_32154_ii;V _rhs33477=_v_32139_i1;return j::binary("+",_lhs33476,_rhs33477);})();V _rhs33475=j::get(_v_32129_perm,([&]()->V{V _lhs33478=([&]()->V{V _lhs33480=_v_32155_jj;V _rhs33481=_v_32140_j1;return j::binary("+",_lhs33480,_rhs33481);})();V _rhs33479=j::get(_v_32129_perm,([&]()->V{V _lhs33482=_v_32156_ll;V _rhs33483=_v_32141_l1;return j::binary("+",_lhs33482,_rhs33483);})());return j::binary("+",_lhs33478,_rhs33479);})());return j::binary("+",_lhs33474,_rhs33475);})());V _rhs33473=V(3.0);return V(j::number(_lhs33472)*j::number(_rhs33473));})()),(_v_32158_k=j::binary("*",_v_32158_k,_v_32158_k)),(_v_32157_n=j::binary("+",_v_32157_n,([&]()->V{V _lhs33486=([&]()->V{V _lhs33488=_v_32158_k;V _rhs33489=_v_32158_k;return V(j::number(_lhs33488)*j::number(_rhs33489));})();V _rhs33487=([&]()->V{V _lhs33490=([&]()->V{V _lhs33492=([&]()->V{V _lhs33494=j::get(this->_v_32078_G3.get(),_v_32159_g);V _rhs33495=_v_32145_x1;return V(j::number(_lhs33494)*j::number(_rhs33495));})();V _rhs33493=([&]()->V{V _lhs33496=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33498=_v_32159_g;V _rhs33499=V(1.0);return j::binary("+",_lhs33498,_rhs33499);})());V _rhs33497=_v_32146_y1;return V(j::number(_lhs33496)*j::number(_rhs33497));})();return j::binary("+",_lhs33492,_rhs33493);})();V _rhs33491=([&]()->V{V _lhs33500=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33502=_v_32159_g;V _rhs33503=V(2.0);return j::binary("+",_lhs33502,_rhs33503);})());V _rhs33501=_v_32147_z1;return V(j::number(_lhs33500)*j::number(_rhs33501));})();return j::binary("+",_lhs33490,_rhs33491);})();return V(j::number(_lhs33486)*j::number(_rhs33487));})()))));
}
if(j::truth(([&]()->V{V _lhs33504=(_v_32158_k=([&]()->V{V _lhs33507=([&]()->V{V _lhs33509=([&]()->V{V _lhs33511=V(0.6);V _rhs33512=([&]()->V{V _lhs33513=_v_32148_x2;V _rhs33514=_v_32148_x2;return V(j::number(_lhs33513)*j::number(_rhs33514));})();return V(j::number(_lhs33511)-j::number(_rhs33512));})();V _rhs33510=([&]()->V{V _lhs33515=_v_32149_y2;V _rhs33516=_v_32149_y2;return V(j::number(_lhs33515)*j::number(_rhs33516));})();return V(j::number(_lhs33509)-j::number(_rhs33510));})();V _rhs33508=([&]()->V{V _lhs33517=_v_32150_z2;V _rhs33518=_v_32150_z2;return V(j::number(_lhs33517)*j::number(_rhs33518));})();return V(j::number(_lhs33507)-j::number(_rhs33508));})());V _rhs33505=V(0.0);return j::binary(">",_lhs33504,_rhs33505);})())){(void)(((_v_32159_g=([&]()->V{V _lhs33520=j::get(_v_32130_mod12,([&]()->V{V _lhs33522=([&]()->V{V _lhs33524=_v_32154_ii;V _rhs33525=_v_32142_i2;return j::binary("+",_lhs33524,_rhs33525);})();V _rhs33523=j::get(_v_32129_perm,([&]()->V{V _lhs33526=([&]()->V{V _lhs33528=_v_32155_jj;V _rhs33529=_v_32143_j2;return j::binary("+",_lhs33528,_rhs33529);})();V _rhs33527=j::get(_v_32129_perm,([&]()->V{V _lhs33530=_v_32156_ll;V _rhs33531=_v_32144_l2;return j::binary("+",_lhs33530,_rhs33531);})());return j::binary("+",_lhs33526,_rhs33527);})());return j::binary("+",_lhs33522,_rhs33523);})());V _rhs33521=V(3.0);return V(j::number(_lhs33520)*j::number(_rhs33521));})()),(_v_32158_k=j::binary("*",_v_32158_k,_v_32158_k)),(_v_32157_n=j::binary("+",_v_32157_n,([&]()->V{V _lhs33534=([&]()->V{V _lhs33536=_v_32158_k;V _rhs33537=_v_32158_k;return V(j::number(_lhs33536)*j::number(_rhs33537));})();V _rhs33535=([&]()->V{V _lhs33538=([&]()->V{V _lhs33540=([&]()->V{V _lhs33542=j::get(this->_v_32078_G3.get(),_v_32159_g);V _rhs33543=_v_32148_x2;return V(j::number(_lhs33542)*j::number(_rhs33543));})();V _rhs33541=([&]()->V{V _lhs33544=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33546=_v_32159_g;V _rhs33547=V(1.0);return j::binary("+",_lhs33546,_rhs33547);})());V _rhs33545=_v_32149_y2;return V(j::number(_lhs33544)*j::number(_rhs33545));})();return j::binary("+",_lhs33540,_rhs33541);})();V _rhs33539=([&]()->V{V _lhs33548=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33550=_v_32159_g;V _rhs33551=V(2.0);return j::binary("+",_lhs33550,_rhs33551);})());V _rhs33549=_v_32150_z2;return V(j::number(_lhs33548)*j::number(_rhs33549));})();return j::binary("+",_lhs33538,_rhs33539);})();return V(j::number(_lhs33534)*j::number(_rhs33535));})()))));
}
if(j::truth(([&]()->V{V _lhs33552=(_v_32158_k=([&]()->V{V _lhs33555=([&]()->V{V _lhs33557=([&]()->V{V _lhs33559=V(0.6);V _rhs33560=([&]()->V{V _lhs33561=_v_32151_x3;V _rhs33562=_v_32151_x3;return V(j::number(_lhs33561)*j::number(_rhs33562));})();return V(j::number(_lhs33559)-j::number(_rhs33560));})();V _rhs33558=([&]()->V{V _lhs33563=_v_32152_y3;V _rhs33564=_v_32152_y3;return V(j::number(_lhs33563)*j::number(_rhs33564));})();return V(j::number(_lhs33557)-j::number(_rhs33558));})();V _rhs33556=([&]()->V{V _lhs33565=_v_32153_z3;V _rhs33566=_v_32153_z3;return V(j::number(_lhs33565)*j::number(_rhs33566));})();return V(j::number(_lhs33555)-j::number(_rhs33556));})());V _rhs33553=V(0.0);return j::binary(">",_lhs33552,_rhs33553);})())){(void)(((_v_32159_g=([&]()->V{V _lhs33568=j::get(_v_32130_mod12,([&]()->V{V _lhs33570=([&]()->V{V _lhs33572=_v_32154_ii;V _rhs33573=V(1.0);return j::binary("+",_lhs33572,_rhs33573);})();V _rhs33571=j::get(_v_32129_perm,([&]()->V{V _lhs33574=([&]()->V{V _lhs33576=_v_32155_jj;V _rhs33577=V(1.0);return j::binary("+",_lhs33576,_rhs33577);})();V _rhs33575=j::get(_v_32129_perm,([&]()->V{V _lhs33578=_v_32156_ll;V _rhs33579=V(1.0);return j::binary("+",_lhs33578,_rhs33579);})());return j::binary("+",_lhs33574,_rhs33575);})());return j::binary("+",_lhs33570,_rhs33571);})());V _rhs33569=V(3.0);return V(j::number(_lhs33568)*j::number(_rhs33569));})()),(_v_32158_k=j::binary("*",_v_32158_k,_v_32158_k)),(_v_32157_n=j::binary("+",_v_32157_n,([&]()->V{V _lhs33582=([&]()->V{V _lhs33584=_v_32158_k;V _rhs33585=_v_32158_k;return V(j::number(_lhs33584)*j::number(_rhs33585));})();V _rhs33583=([&]()->V{V _lhs33586=([&]()->V{V _lhs33588=([&]()->V{V _lhs33590=j::get(this->_v_32078_G3.get(),_v_32159_g);V _rhs33591=_v_32151_x3;return V(j::number(_lhs33590)*j::number(_rhs33591));})();V _rhs33589=([&]()->V{V _lhs33592=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33594=_v_32159_g;V _rhs33595=V(1.0);return j::binary("+",_lhs33594,_rhs33595);})());V _rhs33593=_v_32152_y3;return V(j::number(_lhs33592)*j::number(_rhs33593));})();return j::binary("+",_lhs33588,_rhs33589);})();V _rhs33587=([&]()->V{V _lhs33596=j::get(this->_v_32078_G3.get(),([&]()->V{V _lhs33598=_v_32159_g;V _rhs33599=V(2.0);return j::binary("+",_lhs33598,_rhs33599);})());V _rhs33597=_v_32153_z3;return V(j::number(_lhs33596)*j::number(_rhs33597));})();return j::binary("+",_lhs33586,_rhs33587);})();return V(j::number(_lhs33582)*j::number(_rhs33583));})()))));
}
return ([&]()->V{V _lhs33600=this->_v_32087_S3.get();V _rhs33601=_v_32157_n;return V(j::number(_lhs33600)*j::number(_rhs33601));})();

}

return V{};
},4);
this->_v_32160_simplex4.get()=j::function([=](const j::Args &_args_fn32161,const V &_receiver_fn32161,const V &_self_fn32161) mutable ->V{
V _v_32162_x;
V _v_32163_y;
V _v_32164_z;
V _v_32165_w;
V _v_32166_seed;
_v_32162_x=_args_fn32161[0];
_v_32163_y=_args_fn32161[1];
_v_32164_z=_args_fn32161[2];
_v_32165_w=_args_fn32161[3];
_v_32166_seed=_args_fn32161[4];
{
V _v_32167_perm;
V _v_32168_s;
V _v_32169_i;
V _v_32170_j;
V _v_32171_l;
V _v_32172_m;
V _v_32173_t;
V _v_32174_x0;
V _v_32175_y0;
V _v_32176_z0;
V _v_32177_w0;
V _v_32178_rx;
V _v_32179_ry;
V _v_32180_rz;
V _v_32181_rw;
V _v_32182_i1;
V _v_32183_j1;
V _v_32184_l1;
V _v_32185_m1;
V _v_32186_i2;
V _v_32187_j2;
V _v_32188_l2;
V _v_32189_m2;
V _v_32190_i3;
V _v_32191_j3;
V _v_32192_l3;
V _v_32193_m3;
V _v_32194_x1;
V _v_32195_y1;
V _v_32196_z1;
V _v_32197_w1;
V _v_32198_x2;
V _v_32199_y2;
V _v_32200_z2;
V _v_32201_w2;
V _v_32202_x3;
V _v_32203_y3;
V _v_32204_z3;
V _v_32205_w3;
V _v_32206_x4;
V _v_32207_y4;
V _v_32208_z4;
V _v_32209_w4;
V _v_32210_ii;
V _v_32211_jj;
V _v_32212_ll;
V _v_32213_mm;
V _v_32214_n;
V _v_32215_k;
V _pattern33603=([&]()->V{V _callee33602=this->_v_32060_table.get();return j::call(_callee33602,j::Args{_v_32166_seed});})();
_v_32167_perm=j::get(_pattern33603,this->_literals[20]);
if(j::truth(([&]()->V{V _lhs33604=_v_32166_seed;V _rhs33605=V(8.0);return V(int(j::i32(_lhs33604)>>(j::u32(_rhs33605)&31)));})())){(void)(((_v_32162_x=j::binary("+",_v_32162_x,([&]()->V{V _callee33607=this->_v_32074_shift.get();return j::call(_callee33607,j::Args{_v_32166_seed,V(1.0)});})())),(_v_32163_y=j::binary("+",_v_32163_y,([&]()->V{V _callee33609=this->_v_32074_shift.get();return j::call(_callee33609,j::Args{_v_32166_seed,V(2.0)});})())),(_v_32164_z=j::binary("+",_v_32164_z,([&]()->V{V _callee33611=this->_v_32074_shift.get();return j::call(_callee33611,j::Args{_v_32166_seed,V(3.0)});})())),(_v_32165_w=j::binary("+",_v_32165_w,([&]()->V{V _callee33613=this->_v_32074_shift.get();return j::call(_callee33613,j::Args{_v_32166_seed,V(4.0)});})()))));
}
_v_32168_s=([&]()->V{V _lhs33614=([&]()->V{V _lhs33616=([&]()->V{V _lhs33618=([&]()->V{V _lhs33620=_v_32162_x;V _rhs33621=_v_32163_y;return j::binary("+",_lhs33620,_rhs33621);})();V _rhs33619=_v_32164_z;return j::binary("+",_lhs33618,_rhs33619);})();V _rhs33617=_v_32165_w;return j::binary("+",_lhs33616,_rhs33617);})();V _rhs33615=this->_v_32084_F4.get();return V(j::number(_lhs33614)*j::number(_rhs33615));})();
_v_32169_i=([&]()->V{V _number33624=([&]()->V{V _lhs33625=_v_32162_x;V _rhs33626=_v_32168_s;return j::binary("+",_lhs33625,_rhs33626);})();return V(std::floor(j::number(_number33624)));})();
_v_32170_j=([&]()->V{V _number33629=([&]()->V{V _lhs33630=_v_32163_y;V _rhs33631=_v_32168_s;return j::binary("+",_lhs33630,_rhs33631);})();return V(std::floor(j::number(_number33629)));})();
_v_32171_l=([&]()->V{V _number33634=([&]()->V{V _lhs33635=_v_32164_z;V _rhs33636=_v_32168_s;return j::binary("+",_lhs33635,_rhs33636);})();return V(std::floor(j::number(_number33634)));})();
_v_32172_m=([&]()->V{V _number33639=([&]()->V{V _lhs33640=_v_32165_w;V _rhs33641=_v_32168_s;return j::binary("+",_lhs33640,_rhs33641);})();return V(std::floor(j::number(_number33639)));})();
_v_32173_t=([&]()->V{V _lhs33642=([&]()->V{V _lhs33644=([&]()->V{V _lhs33646=([&]()->V{V _lhs33648=_v_32169_i;V _rhs33649=_v_32170_j;return j::binary("+",_lhs33648,_rhs33649);})();V _rhs33647=_v_32171_l;return j::binary("+",_lhs33646,_rhs33647);})();V _rhs33645=_v_32172_m;return j::binary("+",_lhs33644,_rhs33645);})();V _rhs33643=this->_v_32085_H4.get();return V(j::number(_lhs33642)*j::number(_rhs33643));})();
_v_32174_x0=([&]()->V{V _lhs33650=_v_32162_x;V _rhs33651=([&]()->V{V _lhs33652=_v_32169_i;V _rhs33653=_v_32173_t;return V(j::number(_lhs33652)-j::number(_rhs33653));})();return V(j::number(_lhs33650)-j::number(_rhs33651));})();
_v_32175_y0=([&]()->V{V _lhs33654=_v_32163_y;V _rhs33655=([&]()->V{V _lhs33656=_v_32170_j;V _rhs33657=_v_32173_t;return V(j::number(_lhs33656)-j::number(_rhs33657));})();return V(j::number(_lhs33654)-j::number(_rhs33655));})();
_v_32176_z0=([&]()->V{V _lhs33658=_v_32164_z;V _rhs33659=([&]()->V{V _lhs33660=_v_32171_l;V _rhs33661=_v_32173_t;return V(j::number(_lhs33660)-j::number(_rhs33661));})();return V(j::number(_lhs33658)-j::number(_rhs33659));})();
_v_32177_w0=([&]()->V{V _lhs33662=_v_32165_w;V _rhs33663=([&]()->V{V _lhs33664=_v_32172_m;V _rhs33665=_v_32173_t;return V(j::number(_lhs33664)-j::number(_rhs33665));})();return V(j::number(_lhs33662)-j::number(_rhs33663));})();
_v_32178_rx=V(0.0);
_v_32179_ry=V(0.0);
_v_32180_rz=V(0.0);
_v_32181_rw=V(0.0);
if(j::truth(([&]()->V{V _lhs33666=_v_32174_x0;V _rhs33667=_v_32175_y0;return j::binary(">",_lhs33666,_rhs33667);})())){(void)(j::increment(_v_32178_rx,1,false));
}else {(void)(j::increment(_v_32179_ry,1,false));
}
if(j::truth(([&]()->V{V _lhs33668=_v_32174_x0;V _rhs33669=_v_32176_z0;return j::binary(">",_lhs33668,_rhs33669);})())){(void)(j::increment(_v_32178_rx,1,false));
}else {(void)(j::increment(_v_32180_rz,1,false));
}
if(j::truth(([&]()->V{V _lhs33670=_v_32174_x0;V _rhs33671=_v_32177_w0;return j::binary(">",_lhs33670,_rhs33671);})())){(void)(j::increment(_v_32178_rx,1,false));
}else {(void)(j::increment(_v_32181_rw,1,false));
}
if(j::truth(([&]()->V{V _lhs33672=_v_32175_y0;V _rhs33673=_v_32176_z0;return j::binary(">",_lhs33672,_rhs33673);})())){(void)(j::increment(_v_32179_ry,1,false));
}else {(void)(j::increment(_v_32180_rz,1,false));
}
if(j::truth(([&]()->V{V _lhs33674=_v_32175_y0;V _rhs33675=_v_32177_w0;return j::binary(">",_lhs33674,_rhs33675);})())){(void)(j::increment(_v_32179_ry,1,false));
}else {(void)(j::increment(_v_32181_rw,1,false));
}
if(j::truth(([&]()->V{V _lhs33676=_v_32176_z0;V _rhs33677=_v_32177_w0;return j::binary(">",_lhs33676,_rhs33677);})())){(void)(j::increment(_v_32180_rz,1,false));
}else {(void)(j::increment(_v_32181_rw,1,false));
}
_v_32182_i1=(j::truth(([&]()->V{V _lhs33678=_v_32178_rx;V _rhs33679=V(3.0);return j::binary(">=",_lhs33678,_rhs33679);})())?V(1.0):V(0.0));
_v_32183_j1=(j::truth(([&]()->V{V _lhs33680=_v_32179_ry;V _rhs33681=V(3.0);return j::binary(">=",_lhs33680,_rhs33681);})())?V(1.0):V(0.0));
_v_32184_l1=(j::truth(([&]()->V{V _lhs33682=_v_32180_rz;V _rhs33683=V(3.0);return j::binary(">=",_lhs33682,_rhs33683);})())?V(1.0):V(0.0));
_v_32185_m1=(j::truth(([&]()->V{V _lhs33684=_v_32181_rw;V _rhs33685=V(3.0);return j::binary(">=",_lhs33684,_rhs33685);})())?V(1.0):V(0.0));
_v_32186_i2=(j::truth(([&]()->V{V _lhs33686=_v_32178_rx;V _rhs33687=V(2.0);return j::binary(">=",_lhs33686,_rhs33687);})())?V(1.0):V(0.0));
_v_32187_j2=(j::truth(([&]()->V{V _lhs33688=_v_32179_ry;V _rhs33689=V(2.0);return j::binary(">=",_lhs33688,_rhs33689);})())?V(1.0):V(0.0));
_v_32188_l2=(j::truth(([&]()->V{V _lhs33690=_v_32180_rz;V _rhs33691=V(2.0);return j::binary(">=",_lhs33690,_rhs33691);})())?V(1.0):V(0.0));
_v_32189_m2=(j::truth(([&]()->V{V _lhs33692=_v_32181_rw;V _rhs33693=V(2.0);return j::binary(">=",_lhs33692,_rhs33693);})())?V(1.0):V(0.0));
_v_32190_i3=(j::truth(([&]()->V{V _lhs33694=_v_32178_rx;V _rhs33695=V(1.0);return j::binary(">=",_lhs33694,_rhs33695);})())?V(1.0):V(0.0));
_v_32191_j3=(j::truth(([&]()->V{V _lhs33696=_v_32179_ry;V _rhs33697=V(1.0);return j::binary(">=",_lhs33696,_rhs33697);})())?V(1.0):V(0.0));
_v_32192_l3=(j::truth(([&]()->V{V _lhs33698=_v_32180_rz;V _rhs33699=V(1.0);return j::binary(">=",_lhs33698,_rhs33699);})())?V(1.0):V(0.0));
_v_32193_m3=(j::truth(([&]()->V{V _lhs33700=_v_32181_rw;V _rhs33701=V(1.0);return j::binary(">=",_lhs33700,_rhs33701);})())?V(1.0):V(0.0));
_v_32194_x1=([&]()->V{V _lhs33702=([&]()->V{V _lhs33704=_v_32174_x0;V _rhs33705=_v_32182_i1;return V(j::number(_lhs33704)-j::number(_rhs33705));})();V _rhs33703=this->_v_32085_H4.get();return j::binary("+",_lhs33702,_rhs33703);})();
_v_32195_y1=([&]()->V{V _lhs33706=([&]()->V{V _lhs33708=_v_32175_y0;V _rhs33709=_v_32183_j1;return V(j::number(_lhs33708)-j::number(_rhs33709));})();V _rhs33707=this->_v_32085_H4.get();return j::binary("+",_lhs33706,_rhs33707);})();
_v_32196_z1=([&]()->V{V _lhs33710=([&]()->V{V _lhs33712=_v_32176_z0;V _rhs33713=_v_32184_l1;return V(j::number(_lhs33712)-j::number(_rhs33713));})();V _rhs33711=this->_v_32085_H4.get();return j::binary("+",_lhs33710,_rhs33711);})();
_v_32197_w1=([&]()->V{V _lhs33714=([&]()->V{V _lhs33716=_v_32177_w0;V _rhs33717=_v_32185_m1;return V(j::number(_lhs33716)-j::number(_rhs33717));})();V _rhs33715=this->_v_32085_H4.get();return j::binary("+",_lhs33714,_rhs33715);})();
_v_32198_x2=([&]()->V{V _lhs33718=([&]()->V{V _lhs33720=_v_32174_x0;V _rhs33721=_v_32186_i2;return V(j::number(_lhs33720)-j::number(_rhs33721));})();V _rhs33719=([&]()->V{V _lhs33722=V(2.0);V _rhs33723=this->_v_32085_H4.get();return V(j::number(_lhs33722)*j::number(_rhs33723));})();return j::binary("+",_lhs33718,_rhs33719);})();
_v_32199_y2=([&]()->V{V _lhs33724=([&]()->V{V _lhs33726=_v_32175_y0;V _rhs33727=_v_32187_j2;return V(j::number(_lhs33726)-j::number(_rhs33727));})();V _rhs33725=([&]()->V{V _lhs33728=V(2.0);V _rhs33729=this->_v_32085_H4.get();return V(j::number(_lhs33728)*j::number(_rhs33729));})();return j::binary("+",_lhs33724,_rhs33725);})();
_v_32200_z2=([&]()->V{V _lhs33730=([&]()->V{V _lhs33732=_v_32176_z0;V _rhs33733=_v_32188_l2;return V(j::number(_lhs33732)-j::number(_rhs33733));})();V _rhs33731=([&]()->V{V _lhs33734=V(2.0);V _rhs33735=this->_v_32085_H4.get();return V(j::number(_lhs33734)*j::number(_rhs33735));})();return j::binary("+",_lhs33730,_rhs33731);})();
_v_32201_w2=([&]()->V{V _lhs33736=([&]()->V{V _lhs33738=_v_32177_w0;V _rhs33739=_v_32189_m2;return V(j::number(_lhs33738)-j::number(_rhs33739));})();V _rhs33737=([&]()->V{V _lhs33740=V(2.0);V _rhs33741=this->_v_32085_H4.get();return V(j::number(_lhs33740)*j::number(_rhs33741));})();return j::binary("+",_lhs33736,_rhs33737);})();
_v_32202_x3=([&]()->V{V _lhs33742=([&]()->V{V _lhs33744=_v_32174_x0;V _rhs33745=_v_32190_i3;return V(j::number(_lhs33744)-j::number(_rhs33745));})();V _rhs33743=([&]()->V{V _lhs33746=V(3.0);V _rhs33747=this->_v_32085_H4.get();return V(j::number(_lhs33746)*j::number(_rhs33747));})();return j::binary("+",_lhs33742,_rhs33743);})();
_v_32203_y3=([&]()->V{V _lhs33748=([&]()->V{V _lhs33750=_v_32175_y0;V _rhs33751=_v_32191_j3;return V(j::number(_lhs33750)-j::number(_rhs33751));})();V _rhs33749=([&]()->V{V _lhs33752=V(3.0);V _rhs33753=this->_v_32085_H4.get();return V(j::number(_lhs33752)*j::number(_rhs33753));})();return j::binary("+",_lhs33748,_rhs33749);})();
_v_32204_z3=([&]()->V{V _lhs33754=([&]()->V{V _lhs33756=_v_32176_z0;V _rhs33757=_v_32192_l3;return V(j::number(_lhs33756)-j::number(_rhs33757));})();V _rhs33755=([&]()->V{V _lhs33758=V(3.0);V _rhs33759=this->_v_32085_H4.get();return V(j::number(_lhs33758)*j::number(_rhs33759));})();return j::binary("+",_lhs33754,_rhs33755);})();
_v_32205_w3=([&]()->V{V _lhs33760=([&]()->V{V _lhs33762=_v_32177_w0;V _rhs33763=_v_32193_m3;return V(j::number(_lhs33762)-j::number(_rhs33763));})();V _rhs33761=([&]()->V{V _lhs33764=V(3.0);V _rhs33765=this->_v_32085_H4.get();return V(j::number(_lhs33764)*j::number(_rhs33765));})();return j::binary("+",_lhs33760,_rhs33761);})();
_v_32206_x4=([&]()->V{V _lhs33766=([&]()->V{V _lhs33768=_v_32174_x0;V _rhs33769=V(1.0);return V(j::number(_lhs33768)-j::number(_rhs33769));})();V _rhs33767=([&]()->V{V _lhs33770=V(4.0);V _rhs33771=this->_v_32085_H4.get();return V(j::number(_lhs33770)*j::number(_rhs33771));})();return j::binary("+",_lhs33766,_rhs33767);})();
_v_32207_y4=([&]()->V{V _lhs33772=([&]()->V{V _lhs33774=_v_32175_y0;V _rhs33775=V(1.0);return V(j::number(_lhs33774)-j::number(_rhs33775));})();V _rhs33773=([&]()->V{V _lhs33776=V(4.0);V _rhs33777=this->_v_32085_H4.get();return V(j::number(_lhs33776)*j::number(_rhs33777));})();return j::binary("+",_lhs33772,_rhs33773);})();
_v_32208_z4=([&]()->V{V _lhs33778=([&]()->V{V _lhs33780=_v_32176_z0;V _rhs33781=V(1.0);return V(j::number(_lhs33780)-j::number(_rhs33781));})();V _rhs33779=([&]()->V{V _lhs33782=V(4.0);V _rhs33783=this->_v_32085_H4.get();return V(j::number(_lhs33782)*j::number(_rhs33783));})();return j::binary("+",_lhs33778,_rhs33779);})();
_v_32209_w4=([&]()->V{V _lhs33784=([&]()->V{V _lhs33786=_v_32177_w0;V _rhs33787=V(1.0);return V(j::number(_lhs33786)-j::number(_rhs33787));})();V _rhs33785=([&]()->V{V _lhs33788=V(4.0);V _rhs33789=this->_v_32085_H4.get();return V(j::number(_lhs33788)*j::number(_rhs33789));})();return j::binary("+",_lhs33784,_rhs33785);})();
_v_32210_ii=([&]()->V{V _lhs33790=_v_32169_i;V _rhs33791=V(255.0);return V(int(j::i32(_lhs33790)&j::i32(_rhs33791)));})();
_v_32211_jj=([&]()->V{V _lhs33792=_v_32170_j;V _rhs33793=V(255.0);return V(int(j::i32(_lhs33792)&j::i32(_rhs33793)));})();
_v_32212_ll=([&]()->V{V _lhs33794=_v_32171_l;V _rhs33795=V(255.0);return V(int(j::i32(_lhs33794)&j::i32(_rhs33795)));})();
_v_32213_mm=([&]()->V{V _lhs33796=_v_32172_m;V _rhs33797=V(255.0);return V(int(j::i32(_lhs33796)&j::i32(_rhs33797)));})();
_v_32214_n=V(0.0);
if(j::truth(([&]()->V{V _lhs33798=(_v_32215_k=([&]()->V{V _lhs33801=([&]()->V{V _lhs33803=([&]()->V{V _lhs33805=([&]()->V{V _lhs33807=V(0.6);V _rhs33808=([&]()->V{V _lhs33809=_v_32174_x0;V _rhs33810=_v_32174_x0;return V(j::number(_lhs33809)*j::number(_rhs33810));})();return V(j::number(_lhs33807)-j::number(_rhs33808));})();V _rhs33806=([&]()->V{V _lhs33811=_v_32175_y0;V _rhs33812=_v_32175_y0;return V(j::number(_lhs33811)*j::number(_rhs33812));})();return V(j::number(_lhs33805)-j::number(_rhs33806));})();V _rhs33804=([&]()->V{V _lhs33813=_v_32176_z0;V _rhs33814=_v_32176_z0;return V(j::number(_lhs33813)*j::number(_rhs33814));})();return V(j::number(_lhs33803)-j::number(_rhs33804));})();V _rhs33802=([&]()->V{V _lhs33815=_v_32177_w0;V _rhs33816=_v_32177_w0;return V(j::number(_lhs33815)*j::number(_rhs33816));})();return V(j::number(_lhs33801)-j::number(_rhs33802));})());V _rhs33799=V(0.0);return j::binary(">",_lhs33798,_rhs33799);})())){(void)(((_v_32215_k=j::binary("*",_v_32215_k,_v_32215_k)),(_v_32214_n=j::binary("+",_v_32214_n,([&]()->V{V _lhs33819=([&]()->V{V _lhs33821=_v_32215_k;V _rhs33822=_v_32215_k;return V(j::number(_lhs33821)*j::number(_rhs33822));})();V _rhs33820=([&]()->V{V _callee33833=this->_v_32092_dot4.get();return j::call(_callee33833,j::Args{([&]()->V{V _lhs33823=([&]()->V{V _lhs33825=j::get(_v_32167_perm,([&]()->V{V _lhs33827=_v_32210_ii;V _rhs33828=j::get(_v_32167_perm,([&]()->V{V _lhs33829=_v_32211_jj;V _rhs33830=j::get(_v_32167_perm,([&]()->V{V _lhs33831=_v_32212_ll;V _rhs33832=j::get(_v_32167_perm,_v_32213_mm);return j::binary("+",_lhs33831,_rhs33832);})());return j::binary("+",_lhs33829,_rhs33830);})());return j::binary("+",_lhs33827,_rhs33828);})());V _rhs33826=V(31.0);return V(int(j::i32(_lhs33825)&j::i32(_rhs33826)));})();V _rhs33824=V(4.0);return V(j::number(_lhs33823)*j::number(_rhs33824));})(),_v_32174_x0,_v_32175_y0,_v_32176_z0,_v_32177_w0});})();return V(j::number(_lhs33819)*j::number(_rhs33820));})()))));
}
if(j::truth(([&]()->V{V _lhs33834=(_v_32215_k=([&]()->V{V _lhs33837=([&]()->V{V _lhs33839=([&]()->V{V _lhs33841=([&]()->V{V _lhs33843=V(0.6);V _rhs33844=([&]()->V{V _lhs33845=_v_32194_x1;V _rhs33846=_v_32194_x1;return V(j::number(_lhs33845)*j::number(_rhs33846));})();return V(j::number(_lhs33843)-j::number(_rhs33844));})();V _rhs33842=([&]()->V{V _lhs33847=_v_32195_y1;V _rhs33848=_v_32195_y1;return V(j::number(_lhs33847)*j::number(_rhs33848));})();return V(j::number(_lhs33841)-j::number(_rhs33842));})();V _rhs33840=([&]()->V{V _lhs33849=_v_32196_z1;V _rhs33850=_v_32196_z1;return V(j::number(_lhs33849)*j::number(_rhs33850));})();return V(j::number(_lhs33839)-j::number(_rhs33840));})();V _rhs33838=([&]()->V{V _lhs33851=_v_32197_w1;V _rhs33852=_v_32197_w1;return V(j::number(_lhs33851)*j::number(_rhs33852));})();return V(j::number(_lhs33837)-j::number(_rhs33838));})());V _rhs33835=V(0.0);return j::binary(">",_lhs33834,_rhs33835);})())){(void)(((_v_32215_k=j::binary("*",_v_32215_k,_v_32215_k)),(_v_32214_n=j::binary("+",_v_32214_n,([&]()->V{V _lhs33855=([&]()->V{V _lhs33857=_v_32215_k;V _rhs33858=_v_32215_k;return V(j::number(_lhs33857)*j::number(_rhs33858));})();V _rhs33856=([&]()->V{V _callee33877=this->_v_32092_dot4.get();return j::call(_callee33877,j::Args{([&]()->V{V _lhs33859=([&]()->V{V _lhs33861=j::get(_v_32167_perm,([&]()->V{V _lhs33863=([&]()->V{V _lhs33865=_v_32210_ii;V _rhs33866=_v_32182_i1;return j::binary("+",_lhs33865,_rhs33866);})();V _rhs33864=j::get(_v_32167_perm,([&]()->V{V _lhs33867=([&]()->V{V _lhs33869=_v_32211_jj;V _rhs33870=_v_32183_j1;return j::binary("+",_lhs33869,_rhs33870);})();V _rhs33868=j::get(_v_32167_perm,([&]()->V{V _lhs33871=([&]()->V{V _lhs33873=_v_32212_ll;V _rhs33874=_v_32184_l1;return j::binary("+",_lhs33873,_rhs33874);})();V _rhs33872=j::get(_v_32167_perm,([&]()->V{V _lhs33875=_v_32213_mm;V _rhs33876=_v_32185_m1;return j::binary("+",_lhs33875,_rhs33876);})());return j::binary("+",_lhs33871,_rhs33872);})());return j::binary("+",_lhs33867,_rhs33868);})());return j::binary("+",_lhs33863,_rhs33864);})());V _rhs33862=V(31.0);return V(int(j::i32(_lhs33861)&j::i32(_rhs33862)));})();V _rhs33860=V(4.0);return V(j::number(_lhs33859)*j::number(_rhs33860));})(),_v_32194_x1,_v_32195_y1,_v_32196_z1,_v_32197_w1});})();return V(j::number(_lhs33855)*j::number(_rhs33856));})()))));
}
if(j::truth(([&]()->V{V _lhs33878=(_v_32215_k=([&]()->V{V _lhs33881=([&]()->V{V _lhs33883=([&]()->V{V _lhs33885=([&]()->V{V _lhs33887=V(0.6);V _rhs33888=([&]()->V{V _lhs33889=_v_32198_x2;V _rhs33890=_v_32198_x2;return V(j::number(_lhs33889)*j::number(_rhs33890));})();return V(j::number(_lhs33887)-j::number(_rhs33888));})();V _rhs33886=([&]()->V{V _lhs33891=_v_32199_y2;V _rhs33892=_v_32199_y2;return V(j::number(_lhs33891)*j::number(_rhs33892));})();return V(j::number(_lhs33885)-j::number(_rhs33886));})();V _rhs33884=([&]()->V{V _lhs33893=_v_32200_z2;V _rhs33894=_v_32200_z2;return V(j::number(_lhs33893)*j::number(_rhs33894));})();return V(j::number(_lhs33883)-j::number(_rhs33884));})();V _rhs33882=([&]()->V{V _lhs33895=_v_32201_w2;V _rhs33896=_v_32201_w2;return V(j::number(_lhs33895)*j::number(_rhs33896));})();return V(j::number(_lhs33881)-j::number(_rhs33882));})());V _rhs33879=V(0.0);return j::binary(">",_lhs33878,_rhs33879);})())){(void)(((_v_32215_k=j::binary("*",_v_32215_k,_v_32215_k)),(_v_32214_n=j::binary("+",_v_32214_n,([&]()->V{V _lhs33899=([&]()->V{V _lhs33901=_v_32215_k;V _rhs33902=_v_32215_k;return V(j::number(_lhs33901)*j::number(_rhs33902));})();V _rhs33900=([&]()->V{V _callee33921=this->_v_32092_dot4.get();return j::call(_callee33921,j::Args{([&]()->V{V _lhs33903=([&]()->V{V _lhs33905=j::get(_v_32167_perm,([&]()->V{V _lhs33907=([&]()->V{V _lhs33909=_v_32210_ii;V _rhs33910=_v_32186_i2;return j::binary("+",_lhs33909,_rhs33910);})();V _rhs33908=j::get(_v_32167_perm,([&]()->V{V _lhs33911=([&]()->V{V _lhs33913=_v_32211_jj;V _rhs33914=_v_32187_j2;return j::binary("+",_lhs33913,_rhs33914);})();V _rhs33912=j::get(_v_32167_perm,([&]()->V{V _lhs33915=([&]()->V{V _lhs33917=_v_32212_ll;V _rhs33918=_v_32188_l2;return j::binary("+",_lhs33917,_rhs33918);})();V _rhs33916=j::get(_v_32167_perm,([&]()->V{V _lhs33919=_v_32213_mm;V _rhs33920=_v_32189_m2;return j::binary("+",_lhs33919,_rhs33920);})());return j::binary("+",_lhs33915,_rhs33916);})());return j::binary("+",_lhs33911,_rhs33912);})());return j::binary("+",_lhs33907,_rhs33908);})());V _rhs33906=V(31.0);return V(int(j::i32(_lhs33905)&j::i32(_rhs33906)));})();V _rhs33904=V(4.0);return V(j::number(_lhs33903)*j::number(_rhs33904));})(),_v_32198_x2,_v_32199_y2,_v_32200_z2,_v_32201_w2});})();return V(j::number(_lhs33899)*j::number(_rhs33900));})()))));
}
if(j::truth(([&]()->V{V _lhs33922=(_v_32215_k=([&]()->V{V _lhs33925=([&]()->V{V _lhs33927=([&]()->V{V _lhs33929=([&]()->V{V _lhs33931=V(0.6);V _rhs33932=([&]()->V{V _lhs33933=_v_32202_x3;V _rhs33934=_v_32202_x3;return V(j::number(_lhs33933)*j::number(_rhs33934));})();return V(j::number(_lhs33931)-j::number(_rhs33932));})();V _rhs33930=([&]()->V{V _lhs33935=_v_32203_y3;V _rhs33936=_v_32203_y3;return V(j::number(_lhs33935)*j::number(_rhs33936));})();return V(j::number(_lhs33929)-j::number(_rhs33930));})();V _rhs33928=([&]()->V{V _lhs33937=_v_32204_z3;V _rhs33938=_v_32204_z3;return V(j::number(_lhs33937)*j::number(_rhs33938));})();return V(j::number(_lhs33927)-j::number(_rhs33928));})();V _rhs33926=([&]()->V{V _lhs33939=_v_32205_w3;V _rhs33940=_v_32205_w3;return V(j::number(_lhs33939)*j::number(_rhs33940));})();return V(j::number(_lhs33925)-j::number(_rhs33926));})());V _rhs33923=V(0.0);return j::binary(">",_lhs33922,_rhs33923);})())){(void)(((_v_32215_k=j::binary("*",_v_32215_k,_v_32215_k)),(_v_32214_n=j::binary("+",_v_32214_n,([&]()->V{V _lhs33943=([&]()->V{V _lhs33945=_v_32215_k;V _rhs33946=_v_32215_k;return V(j::number(_lhs33945)*j::number(_rhs33946));})();V _rhs33944=([&]()->V{V _callee33965=this->_v_32092_dot4.get();return j::call(_callee33965,j::Args{([&]()->V{V _lhs33947=([&]()->V{V _lhs33949=j::get(_v_32167_perm,([&]()->V{V _lhs33951=([&]()->V{V _lhs33953=_v_32210_ii;V _rhs33954=_v_32190_i3;return j::binary("+",_lhs33953,_rhs33954);})();V _rhs33952=j::get(_v_32167_perm,([&]()->V{V _lhs33955=([&]()->V{V _lhs33957=_v_32211_jj;V _rhs33958=_v_32191_j3;return j::binary("+",_lhs33957,_rhs33958);})();V _rhs33956=j::get(_v_32167_perm,([&]()->V{V _lhs33959=([&]()->V{V _lhs33961=_v_32212_ll;V _rhs33962=_v_32192_l3;return j::binary("+",_lhs33961,_rhs33962);})();V _rhs33960=j::get(_v_32167_perm,([&]()->V{V _lhs33963=_v_32213_mm;V _rhs33964=_v_32193_m3;return j::binary("+",_lhs33963,_rhs33964);})());return j::binary("+",_lhs33959,_rhs33960);})());return j::binary("+",_lhs33955,_rhs33956);})());return j::binary("+",_lhs33951,_rhs33952);})());V _rhs33950=V(31.0);return V(int(j::i32(_lhs33949)&j::i32(_rhs33950)));})();V _rhs33948=V(4.0);return V(j::number(_lhs33947)*j::number(_rhs33948));})(),_v_32202_x3,_v_32203_y3,_v_32204_z3,_v_32205_w3});})();return V(j::number(_lhs33943)*j::number(_rhs33944));})()))));
}
if(j::truth(([&]()->V{V _lhs33966=(_v_32215_k=([&]()->V{V _lhs33969=([&]()->V{V _lhs33971=([&]()->V{V _lhs33973=([&]()->V{V _lhs33975=V(0.6);V _rhs33976=([&]()->V{V _lhs33977=_v_32206_x4;V _rhs33978=_v_32206_x4;return V(j::number(_lhs33977)*j::number(_rhs33978));})();return V(j::number(_lhs33975)-j::number(_rhs33976));})();V _rhs33974=([&]()->V{V _lhs33979=_v_32207_y4;V _rhs33980=_v_32207_y4;return V(j::number(_lhs33979)*j::number(_rhs33980));})();return V(j::number(_lhs33973)-j::number(_rhs33974));})();V _rhs33972=([&]()->V{V _lhs33981=_v_32208_z4;V _rhs33982=_v_32208_z4;return V(j::number(_lhs33981)*j::number(_rhs33982));})();return V(j::number(_lhs33971)-j::number(_rhs33972));})();V _rhs33970=([&]()->V{V _lhs33983=_v_32209_w4;V _rhs33984=_v_32209_w4;return V(j::number(_lhs33983)*j::number(_rhs33984));})();return V(j::number(_lhs33969)-j::number(_rhs33970));})());V _rhs33967=V(0.0);return j::binary(">",_lhs33966,_rhs33967);})())){(void)(((_v_32215_k=j::binary("*",_v_32215_k,_v_32215_k)),(_v_32214_n=j::binary("+",_v_32214_n,([&]()->V{V _lhs33987=([&]()->V{V _lhs33989=_v_32215_k;V _rhs33990=_v_32215_k;return V(j::number(_lhs33989)*j::number(_rhs33990));})();V _rhs33988=([&]()->V{V _callee34009=this->_v_32092_dot4.get();return j::call(_callee34009,j::Args{([&]()->V{V _lhs33991=([&]()->V{V _lhs33993=j::get(_v_32167_perm,([&]()->V{V _lhs33995=([&]()->V{V _lhs33997=_v_32210_ii;V _rhs33998=V(1.0);return j::binary("+",_lhs33997,_rhs33998);})();V _rhs33996=j::get(_v_32167_perm,([&]()->V{V _lhs33999=([&]()->V{V _lhs34001=_v_32211_jj;V _rhs34002=V(1.0);return j::binary("+",_lhs34001,_rhs34002);})();V _rhs34000=j::get(_v_32167_perm,([&]()->V{V _lhs34003=([&]()->V{V _lhs34005=_v_32212_ll;V _rhs34006=V(1.0);return j::binary("+",_lhs34005,_rhs34006);})();V _rhs34004=j::get(_v_32167_perm,([&]()->V{V _lhs34007=_v_32213_mm;V _rhs34008=V(1.0);return j::binary("+",_lhs34007,_rhs34008);})());return j::binary("+",_lhs34003,_rhs34004);})());return j::binary("+",_lhs33999,_rhs34000);})());return j::binary("+",_lhs33995,_rhs33996);})());V _rhs33994=V(31.0);return V(int(j::i32(_lhs33993)&j::i32(_rhs33994)));})();V _rhs33992=V(4.0);return V(j::number(_lhs33991)*j::number(_rhs33992));})(),_v_32206_x4,_v_32207_y4,_v_32208_z4,_v_32209_w4});})();return V(j::number(_lhs33987)*j::number(_rhs33988));})()))));
}
return ([&]()->V{V _lhs34010=this->_v_32088_S4.get();V _rhs34011=_v_32214_n;return V(j::number(_lhs34010)*j::number(_rhs34011));})();

}

return V{};
},5);
this->_v_32234_valueNoise3.get()=j::function([=](const j::Args &_args_fn32235,const V &_receiver_fn32235,const V &_self_fn32235) mutable ->V{
V _v_32236_x;
V _v_32237_y;
V _v_32238_z;
V _v_32239_seed;
_v_32236_x=_args_fn32235[0];
_v_32237_y=_args_fn32235[1];
_v_32238_z=_args_fn32235[2];
V _default34012=_args_fn32235[3];if(_default34012.kind==V::Undefined||_default34012.kind==V::Hole)_default34012=V(0.0);
_v_32239_seed=_default34012;
{
V _v_32240_xi;
V _v_32241_yi;
V _v_32242_zi;
V _v_32243_fx;
V _v_32244_fy;
V _v_32245_fz;
V _v_32246_u;
V _v_32247_v;
V _v_32248_w;
V _v_32249_a0;
V _v_32250_b0;
V _v_32251_c0;
V _v_32252_d0;
V _v_32253_x00;
V _v_32254_x10;
V _v_32255_x01;
V _v_32256_x11;
V _v_32257_y0;
V _v_32258_y1;
_v_32240_xi=([&]()->V{V _number34013=_v_32236_x;return V(std::floor(j::number(_number34013)));})();
_v_32241_yi=([&]()->V{V _number34014=_v_32237_y;return V(std::floor(j::number(_number34014)));})();
_v_32242_zi=([&]()->V{V _number34015=_v_32238_z;return V(std::floor(j::number(_number34015)));})();
_v_32243_fx=([&]()->V{V _lhs34016=_v_32236_x;V _rhs34017=_v_32240_xi;return V(j::number(_lhs34016)-j::number(_rhs34017));})();
_v_32244_fy=([&]()->V{V _lhs34018=_v_32237_y;V _rhs34019=_v_32241_yi;return V(j::number(_lhs34018)-j::number(_rhs34019));})();
_v_32245_fz=([&]()->V{V _lhs34020=_v_32238_z;V _rhs34021=_v_32242_zi;return V(j::number(_lhs34020)-j::number(_rhs34021));})();
_v_32246_u=([&]()->V{V _lhs34022=([&]()->V{V _lhs34024=_v_32243_fx;V _rhs34025=_v_32243_fx;return V(j::number(_lhs34024)*j::number(_rhs34025));})();V _rhs34023=([&]()->V{V _lhs34026=V(3.0);V _rhs34027=([&]()->V{V _lhs34028=V(2.0);V _rhs34029=_v_32243_fx;return V(j::number(_lhs34028)*j::number(_rhs34029));})();return V(j::number(_lhs34026)-j::number(_rhs34027));})();return V(j::number(_lhs34022)*j::number(_rhs34023));})();
_v_32247_v=([&]()->V{V _lhs34030=([&]()->V{V _lhs34032=_v_32244_fy;V _rhs34033=_v_32244_fy;return V(j::number(_lhs34032)*j::number(_rhs34033));})();V _rhs34031=([&]()->V{V _lhs34034=V(3.0);V _rhs34035=([&]()->V{V _lhs34036=V(2.0);V _rhs34037=_v_32244_fy;return V(j::number(_lhs34036)*j::number(_rhs34037));})();return V(j::number(_lhs34034)-j::number(_rhs34035));})();return V(j::number(_lhs34030)*j::number(_rhs34031));})();
_v_32248_w=([&]()->V{V _lhs34038=([&]()->V{V _lhs34040=_v_32245_fz;V _rhs34041=_v_32245_fz;return V(j::number(_lhs34040)*j::number(_rhs34041));})();V _rhs34039=([&]()->V{V _lhs34042=V(3.0);V _rhs34043=([&]()->V{V _lhs34044=V(2.0);V _rhs34045=_v_32245_fz;return V(j::number(_lhs34044)*j::number(_rhs34045));})();return V(j::number(_lhs34042)-j::number(_rhs34043));})();return V(j::number(_lhs34038)*j::number(_rhs34039));})();
_v_32249_a0=([&]()->V{V _callee34046=this->_v_31969_hash.get();return j::call(_callee34046,j::Args{_v_32240_xi,_v_32241_yi,_v_32242_zi,_v_32239_seed});})();
_v_32250_b0=([&]()->V{V _callee34049=this->_v_31969_hash.get();return j::call(_callee34049,j::Args{_v_32240_xi,([&]()->V{V _lhs34047=_v_32241_yi;V _rhs34048=V(1.0);return j::binary("+",_lhs34047,_rhs34048);})(),_v_32242_zi,_v_32239_seed});})();
_v_32251_c0=([&]()->V{V _callee34052=this->_v_31969_hash.get();return j::call(_callee34052,j::Args{_v_32240_xi,_v_32241_yi,([&]()->V{V _lhs34050=_v_32242_zi;V _rhs34051=V(1.0);return j::binary("+",_lhs34050,_rhs34051);})(),_v_32239_seed});})();
_v_32252_d0=([&]()->V{V _callee34057=this->_v_31969_hash.get();return j::call(_callee34057,j::Args{_v_32240_xi,([&]()->V{V _lhs34053=_v_32241_yi;V _rhs34054=V(1.0);return j::binary("+",_lhs34053,_rhs34054);})(),([&]()->V{V _lhs34055=_v_32242_zi;V _rhs34056=V(1.0);return j::binary("+",_lhs34055,_rhs34056);})(),_v_32239_seed});})();
_v_32253_x00=([&]()->V{V _lhs34058=_v_32249_a0;V _rhs34059=([&]()->V{V _lhs34060=([&]()->V{V _lhs34062=([&]()->V{V _callee34066=this->_v_31969_hash.get();return j::call(_callee34066,j::Args{([&]()->V{V _lhs34064=_v_32240_xi;V _rhs34065=V(1.0);return j::binary("+",_lhs34064,_rhs34065);})(),_v_32241_yi,_v_32242_zi,_v_32239_seed});})();V _rhs34063=_v_32249_a0;return V(j::number(_lhs34062)-j::number(_rhs34063));})();V _rhs34061=_v_32246_u;return V(j::number(_lhs34060)*j::number(_rhs34061));})();return j::binary("+",_lhs34058,_rhs34059);})();
_v_32254_x10=([&]()->V{V _lhs34067=_v_32250_b0;V _rhs34068=([&]()->V{V _lhs34069=([&]()->V{V _lhs34071=([&]()->V{V _callee34077=this->_v_31969_hash.get();return j::call(_callee34077,j::Args{([&]()->V{V _lhs34073=_v_32240_xi;V _rhs34074=V(1.0);return j::binary("+",_lhs34073,_rhs34074);})(),([&]()->V{V _lhs34075=_v_32241_yi;V _rhs34076=V(1.0);return j::binary("+",_lhs34075,_rhs34076);})(),_v_32242_zi,_v_32239_seed});})();V _rhs34072=_v_32250_b0;return V(j::number(_lhs34071)-j::number(_rhs34072));})();V _rhs34070=_v_32246_u;return V(j::number(_lhs34069)*j::number(_rhs34070));})();return j::binary("+",_lhs34067,_rhs34068);})();
_v_32255_x01=([&]()->V{V _lhs34078=_v_32251_c0;V _rhs34079=([&]()->V{V _lhs34080=([&]()->V{V _lhs34082=([&]()->V{V _callee34088=this->_v_31969_hash.get();return j::call(_callee34088,j::Args{([&]()->V{V _lhs34084=_v_32240_xi;V _rhs34085=V(1.0);return j::binary("+",_lhs34084,_rhs34085);})(),_v_32241_yi,([&]()->V{V _lhs34086=_v_32242_zi;V _rhs34087=V(1.0);return j::binary("+",_lhs34086,_rhs34087);})(),_v_32239_seed});})();V _rhs34083=_v_32251_c0;return V(j::number(_lhs34082)-j::number(_rhs34083));})();V _rhs34081=_v_32246_u;return V(j::number(_lhs34080)*j::number(_rhs34081));})();return j::binary("+",_lhs34078,_rhs34079);})();
_v_32256_x11=([&]()->V{V _lhs34089=_v_32252_d0;V _rhs34090=([&]()->V{V _lhs34091=([&]()->V{V _lhs34093=([&]()->V{V _callee34101=this->_v_31969_hash.get();return j::call(_callee34101,j::Args{([&]()->V{V _lhs34095=_v_32240_xi;V _rhs34096=V(1.0);return j::binary("+",_lhs34095,_rhs34096);})(),([&]()->V{V _lhs34097=_v_32241_yi;V _rhs34098=V(1.0);return j::binary("+",_lhs34097,_rhs34098);})(),([&]()->V{V _lhs34099=_v_32242_zi;V _rhs34100=V(1.0);return j::binary("+",_lhs34099,_rhs34100);})(),_v_32239_seed});})();V _rhs34094=_v_32252_d0;return V(j::number(_lhs34093)-j::number(_rhs34094));})();V _rhs34092=_v_32246_u;return V(j::number(_lhs34091)*j::number(_rhs34092));})();return j::binary("+",_lhs34089,_rhs34090);})();
_v_32257_y0=([&]()->V{V _lhs34102=_v_32253_x00;V _rhs34103=([&]()->V{V _lhs34104=([&]()->V{V _lhs34106=_v_32254_x10;V _rhs34107=_v_32253_x00;return V(j::number(_lhs34106)-j::number(_rhs34107));})();V _rhs34105=_v_32247_v;return V(j::number(_lhs34104)*j::number(_rhs34105));})();return j::binary("+",_lhs34102,_rhs34103);})();
_v_32258_y1=([&]()->V{V _lhs34108=_v_32255_x01;V _rhs34109=([&]()->V{V _lhs34110=([&]()->V{V _lhs34112=_v_32256_x11;V _rhs34113=_v_32255_x01;return V(j::number(_lhs34112)-j::number(_rhs34113));})();V _rhs34111=_v_32247_v;return V(j::number(_lhs34110)*j::number(_rhs34111));})();return j::binary("+",_lhs34108,_rhs34109);})();
return ([&]()->V{V _lhs34114=_v_32257_y0;V _rhs34115=([&]()->V{V _lhs34116=([&]()->V{V _lhs34118=_v_32258_y1;V _rhs34119=_v_32257_y0;return V(j::number(_lhs34118)-j::number(_rhs34119));})();V _rhs34117=_v_32248_w;return V(j::number(_lhs34116)*j::number(_rhs34117));})();return j::binary("+",_lhs34114,_rhs34115);})();

}

return V{};
},3);
this->_v_32267_octaves.get()=j::function([=](const j::Args &_args_fn32268,const V &_receiver_fn32268,const V &_self_fn32268) mutable ->V{
V _v_32269_o;
V _v_32270_n;
_v_32269_o=_args_fn32268[0];
V _default34120=_args_fn32268[1];if(_default34120.kind==V::Undefined||_default34120.kind==V::Hole)_default34120=V(4.0);
_v_32270_n=_default34120;
{
(void)((this->_v_32263_octN.get()=([&]()->V{V _logical34122=([&]()->V{V _chain34123=_v_32269_o;if(j::nullish(_chain34123))return V{};V _chain34124=j::get(_chain34123,this->_literals[22]);return _chain34124;})();return j::nullish(_logical34122)?_v_32270_n:_logical34122;})()));
(void)((this->_v_32264_octLac.get()=([&]()->V{V _logical34126=([&]()->V{V _chain34127=_v_32269_o;if(j::nullish(_chain34127))return V{};V _chain34128=j::get(_chain34127,this->_literals[23]);return _chain34128;})();return j::nullish(_logical34126)?V(2.0):_logical34126;})()));
(void)((this->_v_32265_octGain.get()=([&]()->V{V _logical34130=([&]()->V{V _chain34131=_v_32269_o;if(j::nullish(_chain34131))return V{};V _chain34132=j::get(_chain34131,this->_literals[24]);return _chain34132;})();return j::nullish(_logical34130)?V(0.5):_logical34130;})()));
(void)((this->_v_32266_octSeed.get()=([&]()->V{V _logical34134=([&]()->V{V _chain34135=_v_32269_o;if(j::nullish(_chain34135))return V{};V _chain34136=j::get(_chain34135,this->_literals[1]);return _chain34136;})();return j::nullish(_logical34134)?V(0.0):_logical34134;})()));
if(j::truth(j::unary("!",([&]()->V{V _logical34137=([&]()->V{V _logical34138=([&]()->V{V _receiver34139=j::builtin("Number");V _method34140=this->_literals[0];V _method=j::get(_receiver34139,_method34140);j::Args _params34141=j::Args{this->_v_32263_octN.get()};return j::call(_method,_params34141,_receiver34139);})();return j::truth(_logical34138)?([&]()->V{V _lhs34142=this->_v_32263_octN.get();V _rhs34143=V(1.0);return j::binary(">=",_lhs34142,_rhs34143);})():_logical34138;})();return j::truth(_logical34137)?([&]()->V{V _lhs34144=this->_v_32263_octN.get();V _rhs34145=V(16.0);return j::binary("<=",_lhs34144,_rhs34145);})():_logical34137;})()))){(void)(([&]()->V{V _callee34148=this->_v_31968_fail.get();return j::call(_callee34148,j::Args{([&]()->V{std::u16string _text34146;_text34146+=u"octaves takes a whole number from 1 to 16, not ";_text34146+=j::string(([&]()->V{V _callee34147=this->_v_31971_said.get();return j::call(_callee34147,j::Args{this->_v_32263_octN.get()});})());_text34146+=u"";return V(std::move(_text34146));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _logical34149=([&]()->V{V _callee34150=this->_v_31974_finite.get();return j::call(_callee34150,j::Args{this->_v_32264_octLac.get()});})();return j::truth(_logical34149)?([&]()->V{V _lhs34151=this->_v_32264_octLac.get();V _rhs34152=V(0.0);return j::binary(">",_lhs34151,_rhs34152);})():_logical34149;})()))){(void)(([&]()->V{V _callee34155=this->_v_31968_fail.get();return j::call(_callee34155,j::Args{([&]()->V{std::u16string _text34153;_text34153+=u"lacunarity takes a number above 0, such as 2, not ";_text34153+=j::string(([&]()->V{V _callee34154=this->_v_31971_said.get();return j::call(_callee34154,j::Args{this->_v_32264_octLac.get()});})());_text34153+=u"";return V(std::move(_text34153));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _logical34156=([&]()->V{V _callee34157=this->_v_31974_finite.get();return j::call(_callee34157,j::Args{this->_v_32265_octGain.get()});})();return j::truth(_logical34156)?([&]()->V{V _lhs34158=this->_v_32265_octGain.get();V _rhs34159=V(0.0);return j::binary(">=",_lhs34158,_rhs34159);})():_logical34156;})()))){(void)(([&]()->V{V _callee34162=this->_v_31968_fail.get();return j::call(_callee34162,j::Args{([&]()->V{std::u16string _text34160;_text34160+=u"gain takes a number of 0 or more, such as 0.5, not ";_text34160+=j::string(([&]()->V{V _callee34161=this->_v_31971_said.get();return j::call(_callee34161,j::Args{this->_v_32265_octGain.get()});})());_text34160+=u"";return V(std::move(_text34160));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _receiver34163=j::builtin("Number");V _method34164=this->_literals[0];V _method=j::get(_receiver34163,_method34164);j::Args _params34165=j::Args{this->_v_32266_octSeed.get()};return j::call(_method,_params34165,_receiver34163);})()))){(void)(([&]()->V{V _callee34168=this->_v_31968_fail.get();return j::call(_callee34168,j::Args{([&]()->V{std::u16string _text34166;_text34166+=u"seed takes a whole number, such as 7, not ";_text34166+=j::string(([&]()->V{V _callee34167=this->_v_31971_said.get();return j::call(_callee34167,j::Args{this->_v_32266_octSeed.get()});})());_text34166+=u"";return V(std::move(_text34166));})()});})());
}

}

return V{};
},1);
this->_v_32273_fbm.get()=j::function([=](const j::Args &_args_fn32274,const V &_receiver_fn32274,const V &_self_fn32274) mutable ->V{
V _v_32275_x;
V _v_32276_y;
V _v_32277_o;
_v_32275_x=_args_fn32274[0];
_v_32276_y=_args_fn32274[1];
_v_32277_o=_args_fn32274[2];
{
V _v_32278_sum;
V _v_32279_amp;
V _v_32280_norm;
V _v_32281_f;
(void)(([&]()->V{V _callee34169=this->_v_32267_octaves.get();return j::call(_callee34169,j::Args{_v_32277_o});})());
_v_32278_sum=V(0.0);
_v_32279_amp=V(1.0);
_v_32280_norm=V(0.0);
_v_32281_f=V(1.0);
{V _v_32282_i;
_v_32282_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs34170=_v_32282_i;V _rhs34171=this->_v_32263_octN.get();return j::binary("<",_lhs34170,_rhs34171);})());(void)(j::increment(_v_32282_i,1,false))){
(void)((_v_32278_sum=j::binary("+",_v_32278_sum,([&]()->V{V _lhs34173=_v_32279_amp;V _rhs34174=([&]()->V{V _callee34183=this->_v_32099_simplex2.get();return j::call(_callee34183,j::Args{([&]()->V{V _lhs34175=([&]()->V{V _lhs34177=_v_32275_x;V _rhs34178=_v_32281_f;return V(j::number(_lhs34177)*j::number(_rhs34178));})();V _rhs34176=j::get(j::get(this->_v_32259_OFF.get(),_v_32282_i),V(0.0));return j::binary("+",_lhs34175,_rhs34176);})(),([&]()->V{V _lhs34179=([&]()->V{V _lhs34181=_v_32276_y;V _rhs34182=_v_32281_f;return V(j::number(_lhs34181)*j::number(_rhs34182));})();V _rhs34180=j::get(j::get(this->_v_32259_OFF.get(),_v_32282_i),V(1.0));return j::binary("+",_lhs34179,_rhs34180);})(),this->_v_32266_octSeed.get()});})();return V(j::number(_lhs34173)*j::number(_rhs34174));})())));
(void)((_v_32280_norm=j::binary("+",_v_32280_norm,_v_32279_amp)));
(void)((_v_32279_amp=j::binary("*",_v_32279_amp,this->_v_32265_octGain.get())));
(void)((_v_32281_f=j::binary("*",_v_32281_f,this->_v_32264_octLac.get())));

}
}
return ([&]()->V{V _callee34191=this->_v_32089_unit.get();return j::call(_callee34191,j::Args{([&]()->V{V _lhs34187=([&]()->V{V _lhs34189=_v_32278_sum;V _rhs34190=_v_32280_norm;return V(j::number(_lhs34189)/j::number(_rhs34190));})();V _rhs34188=this->_v_32271_SPREAD.get();return V(j::number(_lhs34187)*j::number(_rhs34188));})()});})();

}

return V{};
},3);
this->_v_32283_fbm3.get()=j::function([=](const j::Args &_args_fn32284,const V &_receiver_fn32284,const V &_self_fn32284) mutable ->V{
V _v_32285_x;
V _v_32286_y;
V _v_32287_z;
V _v_32288_o;
_v_32285_x=_args_fn32284[0];
_v_32286_y=_args_fn32284[1];
_v_32287_z=_args_fn32284[2];
_v_32288_o=_args_fn32284[3];
{
V _v_32289_sum;
V _v_32290_amp;
V _v_32291_norm;
V _v_32292_f;
(void)(([&]()->V{V _callee34192=this->_v_32267_octaves.get();return j::call(_callee34192,j::Args{_v_32288_o});})());
_v_32289_sum=V(0.0);
_v_32290_amp=V(1.0);
_v_32291_norm=V(0.0);
_v_32292_f=V(1.0);
{V _v_32293_i;
_v_32293_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs34193=_v_32293_i;V _rhs34194=this->_v_32263_octN.get();return j::binary("<",_lhs34193,_rhs34194);})());(void)(j::increment(_v_32293_i,1,false))){
(void)((_v_32289_sum=j::binary("+",_v_32289_sum,([&]()->V{V _lhs34196=_v_32290_amp;V _rhs34197=([&]()->V{V _callee34210=this->_v_32123_simplex3.get();return j::call(_callee34210,j::Args{([&]()->V{V _lhs34198=([&]()->V{V _lhs34200=_v_32285_x;V _rhs34201=_v_32292_f;return V(j::number(_lhs34200)*j::number(_rhs34201));})();V _rhs34199=j::get(j::get(this->_v_32259_OFF.get(),_v_32293_i),V(0.0));return j::binary("+",_lhs34198,_rhs34199);})(),([&]()->V{V _lhs34202=([&]()->V{V _lhs34204=_v_32286_y;V _rhs34205=_v_32292_f;return V(j::number(_lhs34204)*j::number(_rhs34205));})();V _rhs34203=j::get(j::get(this->_v_32259_OFF.get(),_v_32293_i),V(1.0));return j::binary("+",_lhs34202,_rhs34203);})(),([&]()->V{V _lhs34206=([&]()->V{V _lhs34208=_v_32287_z;V _rhs34209=_v_32292_f;return V(j::number(_lhs34208)*j::number(_rhs34209));})();V _rhs34207=j::get(j::get(this->_v_32259_OFF.get(),_v_32293_i),V(0.0));return j::binary("+",_lhs34206,_rhs34207);})(),this->_v_32266_octSeed.get()});})();return V(j::number(_lhs34196)*j::number(_rhs34197));})())));
(void)((_v_32291_norm=j::binary("+",_v_32291_norm,_v_32290_amp)));
(void)((_v_32290_amp=j::binary("*",_v_32290_amp,this->_v_32265_octGain.get())));
(void)((_v_32292_f=j::binary("*",_v_32292_f,this->_v_32264_octLac.get())));

}
}
return ([&]()->V{V _callee34218=this->_v_32089_unit.get();return j::call(_callee34218,j::Args{([&]()->V{V _lhs34214=([&]()->V{V _lhs34216=_v_32289_sum;V _rhs34217=_v_32291_norm;return V(j::number(_lhs34216)/j::number(_rhs34217));})();V _rhs34215=this->_v_32271_SPREAD.get();return V(j::number(_lhs34214)*j::number(_rhs34215));})()});})();

}

return V{};
},4);
this->_v_32301_ridged.get()=j::function([=](const j::Args &_args_fn32302,const V &_receiver_fn32302,const V &_self_fn32302) mutable ->V{
V _v_32303_x;
V _v_32304_y;
V _v_32305_o;
_v_32303_x=_args_fn32302[0];
_v_32304_y=_args_fn32302[1];
_v_32305_o=_args_fn32302[2];
{
V _v_32306_sum;
V _v_32307_amp;
V _v_32308_norm;
V _v_32309_f;
V _v_32310_w;
(void)(([&]()->V{V _callee34219=this->_v_32267_octaves.get();return j::call(_callee34219,j::Args{_v_32305_o});})());
_v_32306_sum=V(0.0);
_v_32307_amp=V(1.0);
_v_32308_norm=V(0.0);
_v_32309_f=V(1.0);
_v_32310_w=V(1.0);
{V _v_32311_i;
_v_32311_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs34220=_v_32311_i;V _rhs34221=this->_v_32263_octN.get();return j::binary("<",_lhs34220,_rhs34221);})());(void)(j::increment(_v_32311_i,1,false))){
V _v_32312_r;
_v_32312_r=([&]()->V{V _lhs34222=([&]()->V{V _callee34233=this->_v_32294_crest.get();return j::call(_callee34233,j::Args{([&]()->V{V _callee34232=this->_v_32099_simplex2.get();return j::call(_callee34232,j::Args{([&]()->V{V _lhs34224=([&]()->V{V _lhs34226=_v_32303_x;V _rhs34227=_v_32309_f;return V(j::number(_lhs34226)*j::number(_rhs34227));})();V _rhs34225=j::get(j::get(this->_v_32259_OFF.get(),_v_32311_i),V(0.0));return j::binary("+",_lhs34224,_rhs34225);})(),([&]()->V{V _lhs34228=([&]()->V{V _lhs34230=_v_32304_y;V _rhs34231=_v_32309_f;return V(j::number(_lhs34230)*j::number(_rhs34231));})();V _rhs34229=j::get(j::get(this->_v_32259_OFF.get(),_v_32311_i),V(1.0));return j::binary("+",_lhs34228,_rhs34229);})(),this->_v_32266_octSeed.get()});})()});})();V _rhs34223=_v_32310_w;return V(j::number(_lhs34222)*j::number(_rhs34223));})();
(void)((_v_32306_sum=j::binary("+",_v_32306_sum,([&]()->V{V _lhs34235=_v_32307_amp;V _rhs34236=_v_32312_r;return V(j::number(_lhs34235)*j::number(_rhs34236));})())));
(void)((_v_32308_norm=j::binary("+",_v_32308_norm,_v_32307_amp)));
(void)((_v_32310_w=([&]()->V{V _callee34239=this->_v_32298_weigh.get();return j::call(_callee34239,j::Args{_v_32312_r});})()));
(void)((_v_32307_amp=j::binary("*",_v_32307_amp,this->_v_32265_octGain.get())));
(void)((_v_32309_f=j::binary("*",_v_32309_f,this->_v_32264_octLac.get())));

}
}
return ([&]()->V{V _lhs34242=_v_32306_sum;V _rhs34243=_v_32308_norm;return V(j::number(_lhs34242)/j::number(_rhs34243));})();

}

return V{};
},3);
this->_v_32313_loopNoise.get()=j::function([=](const j::Args &_args_fn32314,const V &_receiver_fn32314,const V &_self_fn32314) mutable ->V{
V _v_32315_x;
V _v_32316_y;
V _v_32317_t;
V _v_32318_period;
V _v_32319_o;
_v_32315_x=_args_fn32314[0];
_v_32316_y=_args_fn32314[1];
_v_32317_t=_args_fn32314[2];
_v_32318_period=_args_fn32314[3];
_v_32319_o=_args_fn32314[4];
{
V _v_32320_radius;
V _v_32321_ridge;
V _v_32322_a;
V _v_32323_z;
V _v_32324_w;
V _v_32325_sum;
V _v_32326_amp;
V _v_32327_norm;
V _v_32328_f;
V _v_32329_weight;
(void)(([&]()->V{V _callee34244=this->_v_32267_octaves.get();return j::call(_callee34244,j::Args{_v_32319_o,V(1.0)});})());
(void)(([&]()->V{V _callee34245=this->_v_32669_checkPeriod.get();return j::call(_callee34245,j::Args{this->_literals[25],_v_32318_period});})());
_v_32320_radius=([&]()->V{V _logical34246=([&]()->V{V _chain34247=_v_32319_o;if(j::nullish(_chain34247))return V{};V _chain34248=j::get(_chain34247,this->_literals[26]);return _chain34248;})();return j::nullish(_logical34246)?V(1.0):_logical34246;})();
if(j::truth(j::unary("!",([&]()->V{V _logical34249=([&]()->V{V _callee34250=this->_v_31974_finite.get();return j::call(_callee34250,j::Args{_v_32320_radius});})();return j::truth(_logical34249)?([&]()->V{V _lhs34251=_v_32320_radius;V _rhs34252=V(0.0);return j::binary(">",_lhs34251,_rhs34252);})():_logical34249;})()))){(void)(([&]()->V{V _callee34255=this->_v_31968_fail.get();return j::call(_callee34255,j::Args{([&]()->V{std::u16string _text34253;_text34253+=u"loopNoise's radius takes a number above 0, such as 1, not ";_text34253+=j::string(([&]()->V{V _callee34254=this->_v_31971_said.get();return j::call(_callee34254,j::Args{_v_32320_radius});})());_text34253+=u"";return V(std::move(_text34253));})()});})());
}
_v_32321_ridge=j::unary("!",j::unary("!",([&]()->V{V _chain34256=_v_32319_o;if(j::nullish(_chain34256))return V{};V _chain34257=j::get(_chain34256,this->_literals[27]);return _chain34257;})()));
_v_32322_a=([&]()->V{V _lhs34258=this->_v_31965_TAU.get();V _rhs34259=([&]()->V{V _callee34260=this->_v_32673_place.get();return j::call(_callee34260,j::Args{_v_32317_t,_v_32318_period});})();return V(j::number(_lhs34258)*j::number(_rhs34259));})();
_v_32323_z=([&]()->V{V _lhs34261=_v_32320_radius;V _rhs34262=([&]()->V{V _number34263=_v_32322_a;return V(std::cos(j::number(_number34263)));})();return V(j::number(_lhs34261)*j::number(_rhs34262));})();
_v_32324_w=([&]()->V{V _lhs34264=_v_32320_radius;V _rhs34265=([&]()->V{V _number34266=_v_32322_a;return V(std::sin(j::number(_number34266)));})();return V(j::number(_lhs34264)*j::number(_rhs34265));})();
_v_32325_sum=V(0.0);
_v_32326_amp=V(1.0);
_v_32327_norm=V(0.0);
_v_32328_f=V(1.0);
_v_32329_weight=V(1.0);
{V _v_32330_i;
_v_32330_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs34267=_v_32330_i;V _rhs34268=this->_v_32263_octN.get();return j::binary("<",_lhs34267,_rhs34268);})());(void)(j::increment(_v_32330_i,1,false))){
V _v_32331_n;
_v_32331_n=([&]()->V{V _lhs34269=([&]()->V{V _callee34283=this->_v_32160_simplex4.get();return j::call(_callee34283,j::Args{([&]()->V{V _lhs34271=([&]()->V{V _lhs34273=_v_32315_x;V _rhs34274=_v_32328_f;return V(j::number(_lhs34273)*j::number(_rhs34274));})();V _rhs34272=j::get(j::get(this->_v_32259_OFF.get(),_v_32330_i),V(0.0));return j::binary("+",_lhs34271,_rhs34272);})(),([&]()->V{V _lhs34275=([&]()->V{V _lhs34277=_v_32316_y;V _rhs34278=_v_32328_f;return V(j::number(_lhs34277)*j::number(_rhs34278));})();V _rhs34276=j::get(j::get(this->_v_32259_OFF.get(),_v_32330_i),V(1.0));return j::binary("+",_lhs34275,_rhs34276);})(),([&]()->V{V _lhs34279=_v_32323_z;V _rhs34280=_v_32328_f;return V(j::number(_lhs34279)*j::number(_rhs34280));})(),([&]()->V{V _lhs34281=_v_32324_w;V _rhs34282=_v_32328_f;return V(j::number(_lhs34281)*j::number(_rhs34282));})(),this->_v_32266_octSeed.get()});})();V _rhs34270=this->_v_32272_WIDEN4.get();return V(j::number(_lhs34269)*j::number(_rhs34270));})();
if(j::truth(_v_32321_ridge)){(void)(((_v_32331_n=([&]()->V{V _lhs34285=([&]()->V{V _callee34287=this->_v_32294_crest.get();return j::call(_callee34287,j::Args{_v_32331_n});})();V _rhs34286=_v_32329_weight;return V(j::number(_lhs34285)*j::number(_rhs34286));})()),(_v_32329_weight=([&]()->V{V _callee34289=this->_v_32298_weigh.get();return j::call(_callee34289,j::Args{_v_32331_n});})())));
}
(void)((_v_32325_sum=j::binary("+",_v_32325_sum,([&]()->V{V _lhs34291=_v_32326_amp;V _rhs34292=_v_32331_n;return V(j::number(_lhs34291)*j::number(_rhs34292));})())));
(void)((_v_32327_norm=j::binary("+",_v_32327_norm,_v_32326_amp)));
(void)((_v_32326_amp=j::binary("*",_v_32326_amp,this->_v_32265_octGain.get())));
(void)((_v_32328_f=j::binary("*",_v_32328_f,this->_v_32264_octLac.get())));

}
}
return (j::truth(_v_32321_ridge)?([&]()->V{V _lhs34296=_v_32325_sum;V _rhs34297=_v_32327_norm;return V(j::number(_lhs34296)/j::number(_rhs34297));})():([&]()->V{V _callee34304=this->_v_32089_unit.get();return j::call(_callee34304,j::Args{(j::truth(([&]()->V{V _lhs34298=this->_v_32263_octN.get();V _rhs34299=V(1.0);return j::binary(">",_lhs34298,_rhs34299);})())?([&]()->V{V _lhs34300=([&]()->V{V _lhs34302=_v_32325_sum;V _rhs34303=_v_32327_norm;return V(j::number(_lhs34302)/j::number(_rhs34303));})();V _rhs34301=this->_v_32271_SPREAD.get();return V(j::number(_lhs34300)*j::number(_rhs34301));})():_v_32325_sum)});})());

}

return V{};
},5);
this->_v_32332_worley.get()=j::function([=](const j::Args &_args_fn32333,const V &_receiver_fn32333,const V &_self_fn32333) mutable ->V{
V _v_32334_x;
V _v_32335_y;
V _v_32336_o;
_v_32334_x=_args_fn32333[0];
_v_32335_y=_args_fn32333[1];
_v_32336_o=_args_fn32333[2];
{
V _v_32337_seed;
V _v_32338_xi;
V _v_32339_yi;
V _v_32340_edge;
V _v_32341_gap;
V _v_32342_d1;
V _v_32343_d2;
V _v_32352_v;
_v_32337_seed=([&]()->V{V _logical34305=([&]()->V{V _chain34306=_v_32336_o;if(j::nullish(_chain34306))return V{};V _chain34307=j::get(_chain34306,this->_literals[1]);return _chain34307;})();return j::nullish(_logical34305)?V(0.0):_logical34305;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver34308=j::builtin("Number");V _method34309=this->_literals[0];V _method=j::get(_receiver34308,_method34309);j::Args _params34310=j::Args{_v_32337_seed};return j::call(_method,_params34310,_receiver34308);})()))){(void)(([&]()->V{V _callee34313=this->_v_31968_fail.get();return j::call(_callee34313,j::Args{([&]()->V{std::u16string _text34311;_text34311+=u"seed takes a whole number, such as 7, not ";_text34311+=j::string(([&]()->V{V _callee34312=this->_v_31971_said.get();return j::call(_callee34312,j::Args{_v_32337_seed});})());_text34311+=u"";return V(std::move(_text34311));})()});})());
}
_v_32338_xi=([&]()->V{V _number34314=_v_32334_x;return V(std::floor(j::number(_number34314)));})();
_v_32339_yi=([&]()->V{V _number34315=_v_32335_y;return V(std::floor(j::number(_number34315)));})();
_v_32340_edge=j::unary("!",j::unary("!",([&]()->V{V _chain34316=_v_32336_o;if(j::nullish(_chain34316))return V{};V _chain34317=j::get(_chain34316,this->_literals[28]);return _chain34317;})()));
_v_32341_gap=([&]()->V{V _receiver34334=j::builtin("Math");V _method34335=this->_literals[29];V _method=j::get(_receiver34334,_method34335);j::Args _params34336=j::Args{([&]()->V{V _lhs34318=_v_32334_x;V _rhs34319=_v_32338_xi;return V(j::number(_lhs34318)-j::number(_rhs34319));})(),([&]()->V{V _lhs34320=([&]()->V{V _lhs34322=_v_32338_xi;V _rhs34323=V(1.0);return j::binary("+",_lhs34322,_rhs34323);})();V _rhs34321=_v_32334_x;return V(j::number(_lhs34320)-j::number(_rhs34321));})(),([&]()->V{V _lhs34324=_v_32335_y;V _rhs34325=_v_32339_yi;return V(j::number(_lhs34324)-j::number(_rhs34325));})(),([&]()->V{V _lhs34326=([&]()->V{V _lhs34328=_v_32339_yi;V _rhs34329=V(1.0);return j::binary("+",_lhs34328,_rhs34329);})();V _rhs34327=_v_32335_y;return V(j::number(_lhs34326)-j::number(_rhs34327));})()};return j::call(_method,_params34336,_receiver34334);})();
_v_32342_d1=j::builtin("Infinity");
_v_32343_d2=j::builtin("Infinity");
{V _v_32344_ring;
_v_32344_ring=V(1.0);
for(;j::truth(([&]()->V{V _lhs34337=_v_32344_ring;V _rhs34338=V(2.0);return j::binary("<=",_lhs34337,_rhs34338);})());(void)(j::increment(_v_32344_ring,1,false))){
{V _v_32345_dy;
_v_32345_dy=j::unary("-",_v_32344_ring);
for(;j::truth(([&]()->V{V _lhs34339=_v_32345_dy;V _rhs34340=_v_32344_ring;return j::binary("<=",_lhs34339,_rhs34340);})());(void)(j::increment(_v_32345_dy,1,false))){{V _v_32346_dx;
_v_32346_dx=j::unary("-",_v_32344_ring);
for(;j::truth(([&]()->V{V _lhs34341=_v_32346_dx;V _rhs34342=_v_32344_ring;return j::binary("<=",_lhs34341,_rhs34342);})());(void)((_v_32346_dx=j::binary("+",_v_32346_dx,(j::truth(([&]()->V{V _logical34344=([&]()->V{V _logical34345=([&]()->V{V _lhs34346=_v_32344_ring;V _rhs34347=V(1.0);return j::binary(">",_lhs34346,_rhs34347);})();return j::truth(_logical34345)?([&]()->V{V _lhs34348=_v_32345_dy;V _rhs34349=j::unary("-",_v_32344_ring);return j::binary(">",_lhs34348,_rhs34349);})():_logical34345;})();return j::truth(_logical34344)?([&]()->V{V _lhs34350=_v_32345_dy;V _rhs34351=_v_32344_ring;return j::binary("<",_lhs34350,_rhs34351);})():_logical34344;})())?([&]()->V{V _lhs34352=V(2.0);V _rhs34353=_v_32344_ring;return V(j::number(_lhs34352)*j::number(_rhs34353));})():V(1.0)))))){
V _v_32347_cx;
V _v_32348_cy;
V _v_32349_px;
V _v_32350_py;
V _v_32351_d;
_v_32347_cx=([&]()->V{V _lhs34354=_v_32338_xi;V _rhs34355=_v_32346_dx;return j::binary("+",_lhs34354,_rhs34355);})();
_v_32348_cy=([&]()->V{V _lhs34356=_v_32339_yi;V _rhs34357=_v_32345_dy;return j::binary("+",_lhs34356,_rhs34357);})();
_v_32349_px=([&]()->V{V _lhs34358=([&]()->V{V _lhs34360=_v_32347_cx;V _rhs34361=([&]()->V{V _callee34362=this->_v_31969_hash.get();return j::call(_callee34362,j::Args{_v_32347_cx,_v_32348_cy,_v_32337_seed,V(1.0)});})();return j::binary("+",_lhs34360,_rhs34361);})();V _rhs34359=_v_32334_x;return V(j::number(_lhs34358)-j::number(_rhs34359));})();
_v_32350_py=([&]()->V{V _lhs34363=([&]()->V{V _lhs34365=_v_32348_cy;V _rhs34366=([&]()->V{V _callee34367=this->_v_31969_hash.get();return j::call(_callee34367,j::Args{_v_32347_cx,_v_32348_cy,_v_32337_seed,V(2.0)});})();return j::binary("+",_lhs34365,_rhs34366);})();V _rhs34364=_v_32335_y;return V(j::number(_lhs34363)-j::number(_rhs34364));})();
_v_32351_d=([&]()->V{V _lhs34368=([&]()->V{V _lhs34370=_v_32349_px;V _rhs34371=_v_32349_px;return V(j::number(_lhs34370)*j::number(_rhs34371));})();V _rhs34369=([&]()->V{V _lhs34372=_v_32350_py;V _rhs34373=_v_32350_py;return V(j::number(_lhs34372)*j::number(_rhs34373));})();return j::binary("+",_lhs34368,_rhs34369);})();
if(j::truth(([&]()->V{V _lhs34374=_v_32351_d;V _rhs34375=_v_32342_d1;return j::binary("<",_lhs34374,_rhs34375);})())){(void)(((_v_32343_d2=_v_32342_d1),(_v_32342_d1=_v_32351_d)));
}else {if(j::truth(([&]()->V{V _lhs34378=_v_32351_d;V _rhs34379=_v_32343_d2;return j::binary("<",_lhs34378,_rhs34379);})())){(void)((_v_32343_d2=_v_32351_d));
}
}

}
}
}}
if(j::truth(([&]()->V{V _lhs34381=(j::truth(_v_32340_edge)?_v_32343_d2:_v_32342_d1);V _rhs34382=([&]()->V{V _lhs34383=([&]()->V{V _lhs34385=_v_32344_ring;V _rhs34386=_v_32341_gap;return j::binary("+",_lhs34385,_rhs34386);})();V _rhs34384=V(2.0);return V(std::pow(j::number(_lhs34383),j::number(_rhs34384)));})();return j::binary("<=",_lhs34381,_rhs34382);})())){break;
}

}
}
_v_32352_v=(j::truth(_v_32340_edge)?([&]()->V{V _lhs34387=([&]()->V{V _number34389=_v_32343_d2;return V(std::sqrt(j::number(_number34389)));})();V _rhs34388=([&]()->V{V _number34390=_v_32342_d1;return V(std::sqrt(j::number(_number34390)));})();return V(j::number(_lhs34387)-j::number(_rhs34388));})():([&]()->V{V _number34391=_v_32342_d1;return V(std::sqrt(j::number(_number34391)));})());
return (j::truth(([&]()->V{V _lhs34392=_v_32352_v;V _rhs34393=V(1.0);return j::binary(">",_lhs34392,_rhs34393);})())?V(1.0):_v_32352_v);

}

return V{};
},3);
this->_v_32354_cellular.get()=j::function([=](const j::Args &_args_fn32355,const V &_receiver_fn32355,const V &_self_fn32355) mutable ->V{
V _v_32356_x;
V _v_32357_y;
V _v_32358_turn;
V _v_32359_wrap;
V _v_32360_seed;
_v_32356_x=_args_fn32355[0];
_v_32357_y=_args_fn32355[1];
_v_32358_turn=_args_fn32355[2];
_v_32359_wrap=_args_fn32355[3];
_v_32360_seed=_args_fn32355[4];
{
V _v_32361_xi;
V _v_32362_yi;
V _v_32363_gap;
V _v_32364_d1;
V _v_32365_d2;
_v_32361_xi=([&]()->V{V _number34394=_v_32356_x;return V(std::floor(j::number(_number34394)));})();
_v_32362_yi=([&]()->V{V _number34395=_v_32357_y;return V(std::floor(j::number(_number34395)));})();
_v_32363_gap=([&]()->V{V _receiver34412=j::builtin("Math");V _method34413=this->_literals[29];V _method=j::get(_receiver34412,_method34413);j::Args _params34414=j::Args{([&]()->V{V _lhs34396=_v_32356_x;V _rhs34397=_v_32361_xi;return V(j::number(_lhs34396)-j::number(_rhs34397));})(),([&]()->V{V _lhs34398=([&]()->V{V _lhs34400=_v_32361_xi;V _rhs34401=V(1.0);return j::binary("+",_lhs34400,_rhs34401);})();V _rhs34399=_v_32356_x;return V(j::number(_lhs34398)-j::number(_rhs34399));})(),([&]()->V{V _lhs34402=_v_32357_y;V _rhs34403=_v_32362_yi;return V(j::number(_lhs34402)-j::number(_rhs34403));})(),([&]()->V{V _lhs34404=([&]()->V{V _lhs34406=_v_32362_yi;V _rhs34407=V(1.0);return j::binary("+",_lhs34406,_rhs34407);})();V _rhs34405=_v_32357_y;return V(j::number(_lhs34404)-j::number(_rhs34405));})()};return j::call(_method,_params34414,_receiver34412);})();
_v_32364_d1=j::builtin("Infinity");
_v_32365_d2=j::builtin("Infinity");
{V _v_32366_ring;
_v_32366_ring=V(1.0);
for(;j::truth(([&]()->V{V _lhs34415=_v_32366_ring;V _rhs34416=V(2.0);return j::binary("<=",_lhs34415,_rhs34416);})());(void)(j::increment(_v_32366_ring,1,false))){
{V _v_32367_dy;
_v_32367_dy=j::unary("-",_v_32366_ring);
for(;j::truth(([&]()->V{V _lhs34417=_v_32367_dy;V _rhs34418=_v_32366_ring;return j::binary("<=",_lhs34417,_rhs34418);})());(void)(j::increment(_v_32367_dy,1,false))){{V _v_32368_dx;
_v_32368_dx=j::unary("-",_v_32366_ring);
for(;j::truth(([&]()->V{V _lhs34419=_v_32368_dx;V _rhs34420=_v_32366_ring;return j::binary("<=",_lhs34419,_rhs34420);})());(void)((_v_32368_dx=j::binary("+",_v_32368_dx,(j::truth(([&]()->V{V _logical34422=([&]()->V{V _logical34423=([&]()->V{V _lhs34424=_v_32366_ring;V _rhs34425=V(1.0);return j::binary(">",_lhs34424,_rhs34425);})();return j::truth(_logical34423)?([&]()->V{V _lhs34426=_v_32367_dy;V _rhs34427=j::unary("-",_v_32366_ring);return j::binary(">",_lhs34426,_rhs34427);})():_logical34423;})();return j::truth(_logical34422)?([&]()->V{V _lhs34428=_v_32367_dy;V _rhs34429=_v_32366_ring;return j::binary("<",_lhs34428,_rhs34429);})():_logical34422;})())?([&]()->V{V _lhs34430=V(2.0);V _rhs34431=_v_32366_ring;return V(j::number(_lhs34430)*j::number(_rhs34431));})():V(1.0)))))){
V _v_32369_cx;
V _v_32370_cy;
V _v_32371_hx;
V _v_32372_h;
V _v_32373_a;
V _v_32374_px;
V _v_32375_py;
V _v_32376_d;
_v_32369_cx=([&]()->V{V _lhs34432=_v_32361_xi;V _rhs34433=_v_32368_dx;return j::binary("+",_lhs34432,_rhs34433);})();
_v_32370_cy=([&]()->V{V _lhs34434=_v_32362_yi;V _rhs34435=_v_32367_dy;return j::binary("+",_lhs34434,_rhs34435);})();
_v_32371_hx=(j::truth(_v_32359_wrap)?([&]()->V{V _callee34436=this->_v_31991_mod.get();return j::call(_callee34436,j::Args{_v_32369_cx,_v_32359_wrap});})():_v_32369_cx);
_v_32372_h=([&]()->V{V _callee34437=this->_v_31969_hash.get();return j::call(_callee34437,j::Args{_v_32371_hx,_v_32370_cy,_v_32360_seed,V(3.0)});})();
_v_32373_a=([&]()->V{V _lhs34438=([&]()->V{V _lhs34440=this->_v_31965_TAU.get();V _rhs34441=_v_32372_h;return V(j::number(_lhs34440)*j::number(_rhs34441));})();V _rhs34439=(j::truth(([&]()->V{V _lhs34442=_v_32372_h;V _rhs34443=V(0.5);return j::binary("<",_lhs34442,_rhs34443);})())?_v_32358_turn:j::unary("-",_v_32358_turn));return j::binary("+",_lhs34438,_rhs34439);})();
_v_32374_px=([&]()->V{V _lhs34444=([&]()->V{V _lhs34446=([&]()->V{V _lhs34448=([&]()->V{V _lhs34450=_v_32369_cx;V _rhs34451=V(0.5);return j::binary("+",_lhs34450,_rhs34451);})();V _rhs34449=([&]()->V{V _lhs34452=V(0.5);V _rhs34453=([&]()->V{V _lhs34454=([&]()->V{V _callee34456=this->_v_31969_hash.get();return j::call(_callee34456,j::Args{_v_32371_hx,_v_32370_cy,_v_32360_seed,V(1.0)});})();V _rhs34455=V(0.5);return V(j::number(_lhs34454)-j::number(_rhs34455));})();return V(j::number(_lhs34452)*j::number(_rhs34453));})();return j::binary("+",_lhs34448,_rhs34449);})();V _rhs34447=([&]()->V{V _lhs34457=V(0.2);V _rhs34458=([&]()->V{V _number34459=_v_32373_a;return V(std::cos(j::number(_number34459)));})();return V(j::number(_lhs34457)*j::number(_rhs34458));})();return j::binary("+",_lhs34446,_rhs34447);})();V _rhs34445=_v_32356_x;return V(j::number(_lhs34444)-j::number(_rhs34445));})();
_v_32375_py=([&]()->V{V _lhs34460=([&]()->V{V _lhs34462=([&]()->V{V _lhs34464=([&]()->V{V _lhs34466=_v_32370_cy;V _rhs34467=V(0.5);return j::binary("+",_lhs34466,_rhs34467);})();V _rhs34465=([&]()->V{V _lhs34468=V(0.5);V _rhs34469=([&]()->V{V _lhs34470=([&]()->V{V _callee34472=this->_v_31969_hash.get();return j::call(_callee34472,j::Args{_v_32371_hx,_v_32370_cy,_v_32360_seed,V(2.0)});})();V _rhs34471=V(0.5);return V(j::number(_lhs34470)-j::number(_rhs34471));})();return V(j::number(_lhs34468)*j::number(_rhs34469));})();return j::binary("+",_lhs34464,_rhs34465);})();V _rhs34463=([&]()->V{V _lhs34473=V(0.2);V _rhs34474=([&]()->V{V _number34475=_v_32373_a;return V(std::sin(j::number(_number34475)));})();return V(j::number(_lhs34473)*j::number(_rhs34474));})();return j::binary("+",_lhs34462,_rhs34463);})();V _rhs34461=_v_32357_y;return V(j::number(_lhs34460)-j::number(_rhs34461));})();
_v_32376_d=([&]()->V{V _lhs34476=([&]()->V{V _lhs34478=_v_32374_px;V _rhs34479=_v_32374_px;return V(j::number(_lhs34478)*j::number(_rhs34479));})();V _rhs34477=([&]()->V{V _lhs34480=_v_32375_py;V _rhs34481=_v_32375_py;return V(j::number(_lhs34480)*j::number(_rhs34481));})();return j::binary("+",_lhs34476,_rhs34477);})();
if(j::truth(([&]()->V{V _lhs34482=_v_32376_d;V _rhs34483=_v_32364_d1;return j::binary("<",_lhs34482,_rhs34483);})())){(void)(((_v_32365_d2=_v_32364_d1),(_v_32364_d1=_v_32376_d)));
}else {if(j::truth(([&]()->V{V _lhs34486=_v_32376_d;V _rhs34487=_v_32365_d2;return j::binary("<",_lhs34486,_rhs34487);})())){(void)((_v_32365_d2=_v_32376_d));
}
}

}
}
}}
if(j::truth(([&]()->V{V _lhs34489=_v_32365_d2;V _rhs34490=([&]()->V{V _lhs34491=([&]()->V{V _lhs34493=_v_32366_ring;V _rhs34494=_v_32363_gap;return j::binary("+",_lhs34493,_rhs34494);})();V _rhs34492=V(2.0);return V(std::pow(j::number(_lhs34491),j::number(_rhs34492)));})();return j::binary("<=",_lhs34489,_rhs34490);})())){break;
}

}
}
return ([&]()->V{V _lhs34495=([&]()->V{V _number34497=_v_32365_d2;return V(std::sqrt(j::number(_number34497)));})();V _rhs34496=([&]()->V{V _number34498=_v_32364_d1;return V(std::sqrt(j::number(_number34498)));})();return V(j::number(_lhs34495)-j::number(_rhs34496));})();

}

return V{};
},5);
this->_v_32378_noise.get()=j::function([=](const j::Args &_args_fn32379,const V &_receiver_fn32379,const V &_self_fn32379) mutable ->V{
V _v_32380_o;
V _default34499=_args_fn32379[0];if(_default34499.kind==V::Undefined||_default34499.kind==V::Hole)_default34499=([&]()->V{V _obj34500=j::object();return _obj34500;})();
_v_32380_o=_default34499;
{
V _v_32381_kind;
V _v_32384_size;
V _v_32385_sx;
V _v_32386_sy;
j::Cell _v_32387_cells;
j::Cell _v_32388_ridge;
j::Cell _v_32389_detail;
V _v_32390_drift;
V _v_32391_dx;
V _v_32392_dy;
V _v_32393_drifts;
j::Cell _v_32394_morph;
j::Cell _v_32395_period;
V _v_32396_range;
j::Cell _v_32397_seed;
j::Cell _v_32398_lo;
j::Cell _v_32399_span;
j::Cell _v_32400_fx;
j::Cell _v_32401_fy;
j::Cell _v_32402_ux;
j::Cell _v_32403_uy;
j::Cell _v_32404_speed;
j::Cell _v_32405_ex;
j::Cell _v_32406_ey;
j::Cell _v_32407_tiled;
j::Cell _v_32408_around;
j::Cell _v_32409_bend;
j::Cell _v_32410_n;
j::Cell _v_32415_looped;
j::Cell _v_32416_radius;
j::Cell _v_32417_turns;
if(j::truth(([&]()->V{V _logical34501=([&]()->V{V _lhs34502=_v_32380_o;V _rhs34503=V::null();return V(j::equal(_lhs34502,_rhs34503,true));})();return !j::truth(_logical34501)?([&]()->V{V _lhs34504=j::unary("typeof",_v_32380_o);V _rhs34505=this->_literals[30];return V(!j::equal(_lhs34504,_rhs34505,true));})():_logical34501;})())){(void)(([&]()->V{V _callee34506=this->_v_31968_fail.get();return j::call(_callee34506,j::Args{this->_literals[31]});})());
}
_v_32381_kind=([&]()->V{V _logical34507=j::get(_v_32380_o,this->_literals[32]);return j::nullish(_logical34507)?this->_literals[33]:_logical34507;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver34508=this->_v_32353_KINDS.get();V _method34509=this->_literals[34];V _method=j::get(_receiver34508,_method34509);j::Args _params34510=j::Args{_v_32381_kind};return j::call(_method,_params34510,_receiver34508);})()))){(void)(([&]()->V{V _callee34520=this->_v_31968_fail.get();return j::call(_callee34520,j::Args{([&]()->V{std::u16string _text34511;_text34511+=u"noise's kind takes ";_text34511+=j::string(([&]()->V{V _callee34516=this->_v_31966_and.get();return j::call(_callee34516,j::Args{([&]()->V{V _receiver34513=this->_v_32353_KINDS.get();V _method34514=this->_literals[35];V _method=j::get(_receiver34513,_method34514);j::Args _params34515=j::Args{j::function([=](const j::Args &_args_fn32382,const V &_receiver_fn32382,const V &_self_fn32382) mutable ->V{
V _v_32383_k;
_v_32383_k=_args_fn32382[0];
return ([&]()->V{std::u16string _text34512;_text34512+=u"\"";_text34512+=j::string(_v_32383_k);_text34512+=u"\"";return V(std::move(_text34512));})();
return V{};
},1)};return j::call(_method,_params34515,_receiver34513);})()});})());_text34511+=u", not ";_text34511+=j::string(([&]()->V{V _receiver34517=j::builtin("JSON");V _method34518=this->_literals[36];V _method=j::get(_receiver34517,_method34518);j::Args _params34519=j::Args{_v_32381_kind};return j::call(_method,_params34519,_receiver34517);})());_text34511+=u"";return V(std::move(_text34511));})()});})());
}
_v_32384_size=([&]()->V{V _logical34521=j::get(_v_32380_o,this->_literals[37]);return j::nullish(_logical34521)?V(12.0):_logical34521;})();
V _pattern34534=(j::truth(([&]()->V{V _lhs34522=j::unary("typeof",_v_32384_size);V _rhs34523=this->_literals[38];return V(j::equal(_lhs34522,_rhs34523,true));})())?([&]()->V{j::Args _array34524;_array34524.push_back(_v_32384_size);_array34524.push_back(([&]()->V{V _lhs34525=_v_32384_size;V _rhs34526=V(2.0);return V(j::number(_lhs34525)/j::number(_rhs34526));})());return j::array(std::move(_array34524));})():(j::truth(([&]()->V{V _logical34527=([&]()->V{V _receiver34528=j::builtin("Array");V _method34529=this->_literals[14];V _method=j::get(_receiver34528,_method34529);j::Args _params34530=j::Args{_v_32384_size};return j::call(_method,_params34530,_receiver34528);})();return j::truth(_logical34527)?([&]()->V{V _lhs34531=j::get(_v_32384_size,this->_literals[8]);V _rhs34532=V(2.0);return V(j::equal(_lhs34531,_rhs34532,true));})():_logical34527;})())?_v_32384_size:([&]()->V{j::Args _array34533;_array34533.push_back(j::builtin("NaN"));_array34533.push_back(j::builtin("NaN"));return j::array(std::move(_array34533));})()));
_v_32385_sx=j::get(_pattern34534,V(0));
_v_32386_sy=j::get(_pattern34534,V(1));
if(j::truth(j::unary("!",([&]()->V{V _logical34535=([&]()->V{V _logical34536=([&]()->V{V _logical34537=([&]()->V{V _callee34538=this->_v_31974_finite.get();return j::call(_callee34538,j::Args{_v_32385_sx});})();return j::truth(_logical34537)?([&]()->V{V _callee34539=this->_v_31974_finite.get();return j::call(_callee34539,j::Args{_v_32386_sy});})():_logical34537;})();return j::truth(_logical34536)?([&]()->V{V _lhs34540=_v_32385_sx;V _rhs34541=V(0.0);return j::binary(">",_lhs34540,_rhs34541);})():_logical34536;})();return j::truth(_logical34535)?([&]()->V{V _lhs34542=_v_32386_sy;V _rhs34543=V(0.0);return j::binary(">",_lhs34542,_rhs34543);})():_logical34535;})()))){(void)(([&]()->V{V _callee34548=this->_v_31968_fail.get();return j::call(_callee34548,j::Args{([&]()->V{std::u16string _text34544;_text34544+=u"noise's size takes cells above 0, a number such as 12 or [columns, rows], not ";_text34544+=j::string(([&]()->V{V _receiver34545=j::builtin("JSON");V _method34546=this->_literals[36];V _method=j::get(_receiver34545,_method34546);j::Args _params34547=j::Args{_v_32384_size};return j::call(_method,_params34547,_receiver34545);})());_text34544+=u"";return V(std::move(_text34544));})()});})());
}
_v_32387_cells.get()=([&]()->V{V _lhs34549=_v_32381_kind;V _rhs34550=this->_literals[39];return V(j::equal(_lhs34549,_rhs34550,true));})();
_v_32388_ridge.get()=([&]()->V{V _lhs34551=_v_32381_kind;V _rhs34552=this->_literals[27];return V(j::equal(_lhs34551,_rhs34552,true));})();
_v_32389_detail.get()=([&]()->V{V _logical34553=j::get(_v_32380_o,this->_literals[40]);return j::nullish(_logical34553)?(j::truth(_v_32387_cells.get())?V(1.0):V(3.0)):_logical34553;})();
if(j::truth(j::unary("!",([&]()->V{V _logical34554=([&]()->V{V _logical34555=([&]()->V{V _receiver34556=j::builtin("Number");V _method34557=this->_literals[0];V _method=j::get(_receiver34556,_method34557);j::Args _params34558=j::Args{_v_32389_detail.get()};return j::call(_method,_params34558,_receiver34556);})();return j::truth(_logical34555)?([&]()->V{V _lhs34559=_v_32389_detail.get();V _rhs34560=V(1.0);return j::binary(">=",_lhs34559,_rhs34560);})():_logical34555;})();return j::truth(_logical34554)?([&]()->V{V _lhs34561=_v_32389_detail.get();V _rhs34562=V(8.0);return j::binary("<=",_lhs34561,_rhs34562);})():_logical34554;})()))){(void)(([&]()->V{V _callee34565=this->_v_31968_fail.get();return j::call(_callee34565,j::Args{([&]()->V{std::u16string _text34563;_text34563+=u"noise's detail takes a whole number from 1 to 8, not ";_text34563+=j::string(([&]()->V{V _callee34564=this->_v_31971_said.get();return j::call(_callee34564,j::Args{_v_32389_detail.get()});})());_text34563+=u"";return V(std::move(_text34563));})()});})());
}
_v_32390_drift=([&]()->V{V _logical34566=j::get(_v_32380_o,this->_literals[41]);return j::nullish(_logical34566)?V(0.0):_logical34566;})();
V _pattern34577=(j::truth(([&]()->V{V _lhs34567=j::unary("typeof",_v_32390_drift);V _rhs34568=this->_literals[38];return V(j::equal(_lhs34567,_rhs34568,true));})())?([&]()->V{j::Args _array34569;_array34569.push_back(_v_32390_drift);_array34569.push_back(V(0.0));return j::array(std::move(_array34569));})():(j::truth(([&]()->V{V _logical34570=([&]()->V{V _receiver34571=j::builtin("Array");V _method34572=this->_literals[14];V _method=j::get(_receiver34571,_method34572);j::Args _params34573=j::Args{_v_32390_drift};return j::call(_method,_params34573,_receiver34571);})();return j::truth(_logical34570)?([&]()->V{V _lhs34574=j::get(_v_32390_drift,this->_literals[8]);V _rhs34575=V(2.0);return V(j::equal(_lhs34574,_rhs34575,true));})():_logical34570;})())?_v_32390_drift:([&]()->V{j::Args _array34576;_array34576.push_back(j::builtin("NaN"));_array34576.push_back(j::builtin("NaN"));return j::array(std::move(_array34576));})()));
_v_32391_dx=j::get(_pattern34577,V(0));
_v_32392_dy=j::get(_pattern34577,V(1));
if(j::truth(j::unary("!",([&]()->V{V _logical34578=([&]()->V{V _receiver34579=j::builtin("Number");V _method34580=this->_literals[42];V _method=j::get(_receiver34579,_method34580);j::Args _params34581=j::Args{_v_32391_dx};return j::call(_method,_params34581,_receiver34579);})();return j::truth(_logical34578)?([&]()->V{V _receiver34582=j::builtin("Number");V _method34583=this->_literals[42];V _method=j::get(_receiver34582,_method34583);j::Args _params34584=j::Args{_v_32392_dy};return j::call(_method,_params34584,_receiver34582);})():_logical34578;})()))){(void)(([&]()->V{V _callee34589=this->_v_31968_fail.get();return j::call(_callee34589,j::Args{([&]()->V{std::u16string _text34585;_text34585+=u"noise's drift takes cells a second, a number (across) or [x, y], not ";_text34585+=j::string(([&]()->V{V _receiver34586=j::builtin("JSON");V _method34587=this->_literals[36];V _method=j::get(_receiver34586,_method34587);j::Args _params34588=j::Args{_v_32390_drift};return j::call(_method,_params34588,_receiver34586);})());_text34585+=u"";return V(std::move(_text34585));})()});})());
}
_v_32393_drifts=([&]()->V{V _logical34590=([&]()->V{V _lhs34591=_v_32391_dx;V _rhs34592=V(0.0);return V(!j::equal(_lhs34591,_rhs34592,true));})();return !j::truth(_logical34590)?([&]()->V{V _lhs34593=_v_32392_dy;V _rhs34594=V(0.0);return V(!j::equal(_lhs34593,_rhs34594,true));})():_logical34590;})();
_v_32394_morph.get()=([&]()->V{V _logical34595=j::get(_v_32380_o,this->_literals[43]);return j::nullish(_logical34595)?(j::truth(_v_32393_drifts)?V(0.0):V(0.25)):_logical34595;})();
if(j::truth(j::unary("!",([&]()->V{V _logical34596=([&]()->V{V _callee34597=this->_v_31974_finite.get();return j::call(_callee34597,j::Args{_v_32394_morph.get()});})();return j::truth(_logical34596)?([&]()->V{V _lhs34598=_v_32394_morph.get();V _rhs34599=V(0.0);return j::binary(">=",_lhs34598,_rhs34599);})():_logical34596;})()))){(void)(([&]()->V{V _callee34602=this->_v_31968_fail.get();return j::call(_callee34602,j::Args{([&]()->V{std::u16string _text34600;_text34600+=u"noise's morph takes features a second, 0 or more, such as 0.25, not ";_text34600+=j::string(([&]()->V{V _callee34601=this->_v_31971_said.get();return j::call(_callee34601,j::Args{_v_32394_morph.get()});})());_text34600+=u"";return V(std::move(_text34600));})()});})());
}
_v_32395_period.get()=j::get(_v_32380_o,this->_literals[44]);
if(j::truth(([&]()->V{V _logical34603=([&]()->V{V _lhs34604=_v_32395_period.get();V _rhs34605=j::builtin("undefined");return V(!j::equal(_lhs34604,_rhs34605,true));})();return j::truth(_logical34603)?j::unary("!",([&]()->V{V _logical34606=([&]()->V{V _callee34607=this->_v_31974_finite.get();return j::call(_callee34607,j::Args{_v_32395_period.get()});})();return j::truth(_logical34606)?([&]()->V{V _lhs34608=_v_32395_period.get();V _rhs34609=V(0.0);return j::binary(">",_lhs34608,_rhs34609);})():_logical34606;})()):_logical34603;})())){(void)(([&]()->V{V _callee34612=this->_v_31968_fail.get();return j::call(_callee34612,j::Args{([&]()->V{std::u16string _text34610;_text34610+=u"noise's period takes seconds above 0, such as 8, not ";_text34610+=j::string(([&]()->V{V _callee34611=this->_v_31971_said.get();return j::call(_callee34611,j::Args{_v_32395_period.get()});})());_text34610+=u"";return V(std::move(_text34610));})()});})());
}
if(j::truth(([&]()->V{V _logical34613=([&]()->V{V _logical34614=([&]()->V{V _lhs34615=_v_32395_period.get();V _rhs34616=j::builtin("undefined");return V(!j::equal(_lhs34615,_rhs34616,true));})();return j::truth(_logical34614)?_v_32393_drifts:_logical34614;})();return j::truth(_logical34613)?([&]()->V{V _lhs34617=_v_32394_morph.get();V _rhs34618=V(0.0);return j::binary(">",_lhs34617,_rhs34618);})():_logical34613;})())){(void)(([&]()->V{V _callee34619=this->_v_31968_fail.get();return j::call(_callee34619,j::Args{this->_literals[45]});})());
}
_v_32396_range=([&]()->V{V _logical34620=j::get(_v_32380_o,this->_literals[5]);return j::nullish(_logical34620)?([&]()->V{j::Args _array34621;_array34621.push_back(V(0.0));_array34621.push_back(V(1.0));return j::array(std::move(_array34621));})():_logical34620;})();
if(j::truth(([&]()->V{V _logical34622=([&]()->V{V _logical34623=j::unary("!",([&]()->V{V _receiver34624=j::builtin("Array");V _method34625=this->_literals[14];V _method=j::get(_receiver34624,_method34625);j::Args _params34626=j::Args{_v_32396_range};return j::call(_method,_params34626,_receiver34624);})());return !j::truth(_logical34623)?([&]()->V{V _lhs34627=j::get(_v_32396_range,this->_literals[8]);V _rhs34628=V(2.0);return V(!j::equal(_lhs34627,_rhs34628,true));})():_logical34623;})();return !j::truth(_logical34622)?j::unary("!",([&]()->V{V _receiver34629=_v_32396_range;V _method34630=this->_literals[46];V _method=j::get(_receiver34629,_method34630);j::Args _params34631=j::Args{j::get(j::builtin("Number"),this->_literals[42])};return j::call(_method,_params34631,_receiver34629);})()):_logical34622;})())){(void)(([&]()->V{V _callee34636=this->_v_31968_fail.get();return j::call(_callee34636,j::Args{([&]()->V{std::u16string _text34632;_text34632+=u"noise's range takes [low, high], two numbers such as [4, 12], not ";_text34632+=j::string(([&]()->V{V _receiver34633=j::builtin("JSON");V _method34634=this->_literals[36];V _method=j::get(_receiver34633,_method34634);j::Args _params34635=j::Args{_v_32396_range};return j::call(_method,_params34635,_receiver34633);})());_text34632+=u"";return V(std::move(_text34632));})()});})());
}
_v_32397_seed.get()=([&]()->V{V _logical34637=j::get(_v_32380_o,this->_literals[1]);return j::nullish(_logical34637)?V(0.0):_logical34637;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver34638=j::builtin("Number");V _method34639=this->_literals[0];V _method=j::get(_receiver34638,_method34639);j::Args _params34640=j::Args{_v_32397_seed.get()};return j::call(_method,_params34640,_receiver34638);})()))){(void)(([&]()->V{V _callee34643=this->_v_31968_fail.get();return j::call(_callee34643,j::Args{([&]()->V{std::u16string _text34641;_text34641+=u"noise's seed takes a whole number, such as 7, not ";_text34641+=j::string(([&]()->V{V _callee34642=this->_v_31971_said.get();return j::call(_callee34642,j::Args{_v_32397_seed.get()});})());_text34641+=u"";return V(std::move(_text34641));})()});})());
}
_v_32398_lo.get()=j::get(_v_32396_range,V(0.0));
_v_32399_span.get()=([&]()->V{V _lhs34644=j::get(_v_32396_range,V(1.0));V _rhs34645=j::get(_v_32396_range,V(0.0));return V(j::number(_lhs34644)-j::number(_rhs34645));})();
_v_32400_fx.get()=([&]()->V{V _lhs34646=V(1.0);V _rhs34647=_v_32385_sx;return V(j::number(_lhs34646)/j::number(_rhs34647));})();
_v_32401_fy.get()=([&]()->V{V _lhs34648=V(1.0);V _rhs34649=_v_32386_sy;return V(j::number(_lhs34648)/j::number(_rhs34649));})();
_v_32402_ux.get()=([&]()->V{V _lhs34650=_v_32391_dx;V _rhs34651=_v_32400_fx.get();return V(j::number(_lhs34650)*j::number(_rhs34651));})();
_v_32403_uy.get()=([&]()->V{V _lhs34652=_v_32392_dy;V _rhs34653=_v_32401_fy.get();return V(j::number(_lhs34652)*j::number(_rhs34653));})();
_v_32404_speed.get()=([&]()->V{V _number34654=_v_32402_ux.get();V _number34655=_v_32403_uy.get();return V(std::hypot(j::number(_number34654),j::number(_number34655)));})();
_v_32405_ex.get()=(j::truth(_v_32393_drifts)?([&]()->V{V _lhs34656=_v_32402_ux.get();V _rhs34657=_v_32404_speed.get();return V(j::number(_lhs34656)/j::number(_rhs34657));})():V(1.0));
_v_32406_ey.get()=(j::truth(_v_32393_drifts)?([&]()->V{V _lhs34658=_v_32403_uy.get();V _rhs34659=_v_32404_speed.get();return V(j::number(_lhs34658)/j::number(_rhs34659));})():V(0.0));
_v_32407_tiled.get()=([&]()->V{V _logical34660=([&]()->V{V _lhs34661=_v_32395_period.get();V _rhs34662=j::builtin("undefined");return V(!j::equal(_lhs34661,_rhs34662,true));})();return j::truth(_logical34660)?_v_32393_drifts:_logical34660;})();
_v_32408_around.get()=(j::truth(_v_32407_tiled.get())?([&]()->V{V _lhs34663=_v_32404_speed.get();V _rhs34664=_v_32395_period.get();return V(j::number(_lhs34663)*j::number(_rhs34664));})():V(1.0));
_v_32409_bend.get()=([&]()->V{V _lhs34665=_v_32408_around.get();V _rhs34666=this->_v_31965_TAU.get();return V(j::number(_lhs34665)/j::number(_rhs34666));})();
_v_32410_n.get()=([&]()->V{V _receiver34670=j::builtin("Math");V _method34671=this->_literals[47];V _method=j::get(_receiver34670,_method34671);j::Args _params34672=j::Args{V(1.0),([&]()->V{V _number34667=_v_32408_around.get();return V(std::floor(j::number(_number34667)+.5));})()};return j::call(_method,_params34672,_receiver34670);})();
if(j::truth(([&]()->V{V _logical34673=_v_32407_tiled.get();return j::truth(_logical34673)?([&]()->V{V _lhs34674=_v_32408_around.get();V _rhs34675=V(1.0);return j::binary("<",_lhs34674,_rhs34675);})():_logical34673;})())){
V _v_32411_fmt;
V _v_32414_along;
_v_32411_fmt=j::function([=](const j::Args &_args_fn32412,const V &_receiver_fn32412,const V &_self_fn32412) mutable ->V{
V _v_32413_v;
_v_32413_v=_args_fn32412[0];
return ([&]()->V{V _lhs34676=(_v_32413_v=j::unary("+",([&]()->V{V _receiver34679=_v_32413_v;V _method34680=this->_literals[48];V _method=j::get(_receiver34679,_method34680);j::Args _params34681=j::Args{V(2.0)};return j::call(_method,_params34681,_receiver34679);})()));V _rhs34677=(j::truth(([&]()->V{V _lhs34682=_v_32413_v;V _rhs34683=V(1.0);return V(j::equal(_lhs34682,_rhs34683,true));})())?this->_literals[49]:this->_literals[50]);return j::binary("+",_lhs34676,_rhs34677);})();
return V{};
},1);
_v_32414_along=([&]()->V{V _number34684=_v_32391_dx;V _number34685=_v_32392_dy;return V(std::hypot(j::number(_number34684),j::number(_number34685)));})();
(void)(([&]()->V{V _callee34699=this->_v_31968_fail.get();return j::call(_callee34699,j::Args{([&]()->V{std::u16string _text34686;_text34686+=u"noise() drifting ";_text34686+=j::string(([&]()->V{V _callee34687=_v_32411_fmt;return j::call(_callee34687,j::Args{_v_32414_along});})());_text34686+=u" a second with a period of ";_text34686+=j::string(_v_32395_period.get());_text34686+=u" s repeats every ";_text34686+=j::string(([&]()->V{V _callee34690=_v_32411_fmt;return j::call(_callee34690,j::Args{([&]()->V{V _lhs34688=_v_32414_along;V _rhs34689=_v_32395_period.get();return V(j::number(_lhs34688)*j::number(_rhs34689));})()});})());_text34686+=u", under one feature (";_text34686+=j::string(([&]()->V{V _callee34693=_v_32411_fmt;return j::call(_callee34693,j::Args{([&]()->V{V _lhs34691=_v_32414_along;V _rhs34692=_v_32404_speed.get();return V(j::number(_lhs34691)/j::number(_rhs34692));})()});})());_text34686+=u"), and flattens out: make period ";_text34686+=j::string(j::unary("+",([&]()->V{V _receiver34694=([&]()->V{V _lhs34697=V(1.0);V _rhs34698=_v_32404_speed.get();return V(j::number(_lhs34697)/j::number(_rhs34698));})();V _method34695=this->_literals[48];V _method=j::get(_receiver34694,_method34695);j::Args _params34696=j::Args{V(2.0)};return j::call(_method,_params34696,_receiver34694);})()));_text34686+=u" s or more, or drift faster";return V(std::move(_text34686));})()});})());

}

_v_32415_looped.get()=([&]()->V{V _logical34700=([&]()->V{V _logical34701=([&]()->V{V _lhs34702=_v_32395_period.get();V _rhs34703=j::builtin("undefined");return V(!j::equal(_lhs34702,_rhs34703,true));})();return j::truth(_logical34701)?j::unary("!",_v_32393_drifts):_logical34701;})();return j::truth(_logical34700)?([&]()->V{V _lhs34704=_v_32394_morph.get();V _rhs34705=V(0.0);return j::binary(">",_lhs34704,_rhs34705);})():_logical34700;})();
_v_32416_radius.get()=(j::truth(_v_32415_looped.get())?([&]()->V{V _lhs34706=([&]()->V{V _lhs34708=_v_32394_morph.get();V _rhs34709=_v_32395_period.get();return V(j::number(_lhs34708)*j::number(_rhs34709));})();V _rhs34707=this->_v_31965_TAU.get();return V(j::number(_lhs34706)/j::number(_rhs34707));})():V(0.0));
_v_32417_turns.get()=(j::truth(_v_32415_looped.get())?([&]()->V{V _receiver34717=j::builtin("Math");V _method34718=this->_literals[47];V _method=j::get(_receiver34717,_method34718);j::Args _params34719=j::Args{V(1.0),([&]()->V{V _number34712=([&]()->V{V _lhs34713=_v_32394_morph.get();V _rhs34714=_v_32395_period.get();return V(j::number(_lhs34713)*j::number(_rhs34714));})();return V(std::floor(j::number(_number34712)+.5));})()};return j::call(_method,_params34719,_receiver34717);})():V(0.0));
return j::function([=](const j::Args &_args_fn32418,const V &_receiver_fn32418,const V &_self_fn32418) mutable ->V{
V _v_32419_x;
V _v_32420_y;
V _v_32421_t;
_v_32419_x=_args_fn32418[0];
V _default34720=_args_fn32418[1];if(_default34720.kind==V::Undefined||_default34720.kind==V::Hole)_default34720=V(0.0);
_v_32420_y=_default34720;
V _default34721=_args_fn32418[2];if(_default34721.kind==V::Undefined||_default34721.kind==V::Hole)_default34721=V(0.0);
_v_32421_t=_default34721;
{
V _v_32422_a;
V _v_32423_b;
V _v_32424_c;
V _v_32425_d;
V _v_32426_turn;
V _v_32427_dims;
V _v_32434_sum;
V _v_32435_amp;
V _v_32436_norm;
V _v_32437_f;
V _v_32438_w;
V _v_32443_k;
_v_32424_c=V(0.0);
_v_32425_d=V(0.0);
_v_32426_turn=V(0.0);
_v_32427_dims=V(2.0);
if(j::truth(_v_32407_tiled.get())){
V _v_32428_px;
V _v_32429_py;
V _v_32430_u;
V _v_32431_v;
_v_32428_px=([&]()->V{V _lhs34722=_v_32419_x;V _rhs34723=_v_32400_fx.get();return V(j::number(_lhs34722)*j::number(_rhs34723));})();
_v_32429_py=([&]()->V{V _lhs34724=_v_32420_y;V _rhs34725=_v_32401_fy.get();return V(j::number(_lhs34724)*j::number(_rhs34725));})();
_v_32430_u=([&]()->V{V _lhs34726=([&]()->V{V _lhs34728=([&]()->V{V _lhs34730=_v_32428_px;V _rhs34731=_v_32405_ex.get();return V(j::number(_lhs34730)*j::number(_rhs34731));})();V _rhs34729=([&]()->V{V _lhs34732=_v_32429_py;V _rhs34733=_v_32406_ey.get();return V(j::number(_lhs34732)*j::number(_rhs34733));})();return j::binary("+",_lhs34728,_rhs34729);})();V _rhs34727=([&]()->V{V _lhs34734=_v_32404_speed.get();V _rhs34735=_v_32421_t;return V(j::number(_lhs34734)*j::number(_rhs34735));})();return V(j::number(_lhs34726)-j::number(_rhs34727));})();
_v_32431_v=([&]()->V{V _lhs34736=([&]()->V{V _lhs34738=_v_32429_py;V _rhs34739=_v_32405_ex.get();return V(j::number(_lhs34738)*j::number(_rhs34739));})();V _rhs34737=([&]()->V{V _lhs34740=_v_32428_px;V _rhs34741=_v_32406_ey.get();return V(j::number(_lhs34740)*j::number(_rhs34741));})();return V(j::number(_lhs34736)-j::number(_rhs34737));})();
if(j::truth(_v_32387_cells.get())){(void)(((_v_32422_a=([&]()->V{V _lhs34743=([&]()->V{V _lhs34745=_v_32430_u;V _rhs34746=_v_32410_n.get();return V(j::number(_lhs34745)*j::number(_rhs34746));})();V _rhs34744=_v_32408_around.get();return V(j::number(_lhs34743)/j::number(_rhs34744));})()),(_v_32423_b=_v_32431_v)));
}else {
V _v_32432_th;
_v_32432_th=([&]()->V{V _lhs34748=([&]()->V{V _lhs34750=this->_v_31965_TAU.get();V _rhs34751=_v_32430_u;return V(j::number(_lhs34750)*j::number(_rhs34751));})();V _rhs34749=_v_32408_around.get();return V(j::number(_lhs34748)/j::number(_rhs34749));})();
(void)((_v_32422_a=([&]()->V{V _lhs34753=_v_32409_bend.get();V _rhs34754=([&]()->V{V _number34755=_v_32432_th;return V(std::cos(j::number(_number34755)));})();return V(j::number(_lhs34753)*j::number(_rhs34754));})()));
(void)((_v_32423_b=([&]()->V{V _lhs34757=_v_32409_bend.get();V _rhs34758=([&]()->V{V _number34759=_v_32432_th;return V(std::sin(j::number(_number34759)));})();return V(j::number(_lhs34757)*j::number(_rhs34758));})()));
(void)((_v_32424_c=_v_32431_v));
(void)((_v_32427_dims=V(3.0)));

}


}
else {
(void)((_v_32422_a=([&]()->V{V _lhs34763=([&]()->V{V _lhs34765=_v_32419_x;V _rhs34766=_v_32400_fx.get();return V(j::number(_lhs34765)*j::number(_rhs34766));})();V _rhs34764=([&]()->V{V _lhs34767=_v_32402_ux.get();V _rhs34768=_v_32421_t;return V(j::number(_lhs34767)*j::number(_rhs34768));})();return V(j::number(_lhs34763)-j::number(_rhs34764));})()));
(void)((_v_32423_b=([&]()->V{V _lhs34770=([&]()->V{V _lhs34772=_v_32420_y;V _rhs34773=_v_32401_fy.get();return V(j::number(_lhs34772)*j::number(_rhs34773));})();V _rhs34771=([&]()->V{V _lhs34774=_v_32403_uy.get();V _rhs34775=_v_32421_t;return V(j::number(_lhs34774)*j::number(_rhs34775));})();return V(j::number(_lhs34770)-j::number(_rhs34771));})()));
if(j::truth(([&]()->V{V _lhs34776=_v_32394_morph.get();V _rhs34777=V(0.0);return j::binary(">",_lhs34776,_rhs34777);})())){
if(j::truth(_v_32387_cells.get())){(void)((_v_32426_turn=([&]()->V{V _lhs34779=this->_v_31965_TAU.get();V _rhs34780=(j::truth(_v_32415_looped.get())?([&]()->V{V _lhs34781=_v_32417_turns.get();V _rhs34782=([&]()->V{V _callee34783=this->_v_32673_place.get();return j::call(_callee34783,j::Args{_v_32421_t,_v_32395_period.get()});})();return V(j::number(_lhs34781)*j::number(_rhs34782));})():([&]()->V{V _lhs34784=_v_32394_morph.get();V _rhs34785=_v_32421_t;return V(j::number(_lhs34784)*j::number(_rhs34785));})());return V(j::number(_lhs34779)*j::number(_rhs34780));})()));
}else {if(j::truth(j::unary("!",_v_32415_looped.get()))){(void)(((_v_32424_c=([&]()->V{V _lhs34787=_v_32394_morph.get();V _rhs34788=_v_32421_t;return V(j::number(_lhs34787)*j::number(_rhs34788));})()),(_v_32427_dims=V(3.0))));
}else {
V _v_32433_th;
_v_32433_th=([&]()->V{V _lhs34790=this->_v_31965_TAU.get();V _rhs34791=([&]()->V{V _callee34792=this->_v_32673_place.get();return j::call(_callee34792,j::Args{_v_32421_t,_v_32395_period.get()});})();return V(j::number(_lhs34790)*j::number(_rhs34791));})();
(void)((_v_32424_c=([&]()->V{V _lhs34794=_v_32416_radius.get();V _rhs34795=([&]()->V{V _number34796=_v_32433_th;return V(std::cos(j::number(_number34796)));})();return V(j::number(_lhs34794)*j::number(_rhs34795));})()));
(void)((_v_32425_d=([&]()->V{V _lhs34798=_v_32416_radius.get();V _rhs34799=([&]()->V{V _number34800=_v_32433_th;return V(std::sin(j::number(_number34800)));})();return V(j::number(_lhs34798)*j::number(_rhs34799));})()));
(void)((_v_32427_dims=V(4.0)));

}

}

}


}

_v_32434_sum=V(0.0);
_v_32435_amp=V(1.0);
_v_32436_norm=V(0.0);
_v_32437_f=V(1.0);
_v_32438_w=V(1.0);
{V _v_32439_i;
_v_32439_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs34802=_v_32439_i;V _rhs34803=_v_32389_detail.get();return j::binary("<",_lhs34802,_rhs34803);})());(void)(j::increment(_v_32439_i,1,false))){
V _v_32440_oa;
V _v_32441_ob;
V _v_32442_v;
_v_32440_oa=j::get(j::get(this->_v_32259_OFF.get(),_v_32439_i),V(0.0));
_v_32441_ob=j::get(j::get(this->_v_32259_OFF.get(),_v_32439_i),V(1.0));
if(j::truth(_v_32387_cells.get())){(void)((_v_32442_v=([&]()->V{V _callee34815=this->_v_32354_cellular.get();return j::call(_callee34815,j::Args{([&]()->V{V _lhs34805=([&]()->V{V _lhs34807=_v_32422_a;V _rhs34808=_v_32437_f;return V(j::number(_lhs34807)*j::number(_rhs34808));})();V _rhs34806=_v_32440_oa;return j::binary("+",_lhs34805,_rhs34806);})(),([&]()->V{V _lhs34809=([&]()->V{V _lhs34811=_v_32423_b;V _rhs34812=_v_32437_f;return V(j::number(_lhs34811)*j::number(_rhs34812));})();V _rhs34810=_v_32441_ob;return j::binary("+",_lhs34809,_rhs34810);})(),_v_32426_turn,(j::truth(_v_32407_tiled.get())?([&]()->V{V _lhs34813=_v_32410_n.get();V _rhs34814=_v_32437_f;return V(j::number(_lhs34813)*j::number(_rhs34814));})():V(0.0)),_v_32397_seed.get()});})()));
}else {
(void)((_v_32442_v=(j::truth(([&]()->V{V _lhs34817=_v_32427_dims;V _rhs34818=V(2.0);return V(j::equal(_lhs34817,_rhs34818,true));})())?([&]()->V{V _callee34827=this->_v_32099_simplex2.get();return j::call(_callee34827,j::Args{([&]()->V{V _lhs34819=([&]()->V{V _lhs34821=_v_32422_a;V _rhs34822=_v_32437_f;return V(j::number(_lhs34821)*j::number(_rhs34822));})();V _rhs34820=_v_32440_oa;return j::binary("+",_lhs34819,_rhs34820);})(),([&]()->V{V _lhs34823=([&]()->V{V _lhs34825=_v_32423_b;V _rhs34826=_v_32437_f;return V(j::number(_lhs34825)*j::number(_rhs34826));})();V _rhs34824=_v_32441_ob;return j::binary("+",_lhs34823,_rhs34824);})(),_v_32397_seed.get()});})():(j::truth(([&]()->V{V _lhs34828=_v_32427_dims;V _rhs34829=V(3.0);return V(j::equal(_lhs34828,_rhs34829,true));})())?([&]()->V{V _callee34842=this->_v_32123_simplex3.get();return j::call(_callee34842,j::Args{([&]()->V{V _lhs34830=([&]()->V{V _lhs34832=_v_32422_a;V _rhs34833=_v_32437_f;return V(j::number(_lhs34832)*j::number(_rhs34833));})();V _rhs34831=_v_32440_oa;return j::binary("+",_lhs34830,_rhs34831);})(),([&]()->V{V _lhs34834=([&]()->V{V _lhs34836=_v_32423_b;V _rhs34837=_v_32437_f;return V(j::number(_lhs34836)*j::number(_rhs34837));})();V _rhs34835=_v_32441_ob;return j::binary("+",_lhs34834,_rhs34835);})(),([&]()->V{V _lhs34838=([&]()->V{V _lhs34840=_v_32424_c;V _rhs34841=_v_32437_f;return V(j::number(_lhs34840)*j::number(_rhs34841));})();V _rhs34839=_v_32440_oa;return j::binary("+",_lhs34838,_rhs34839);})(),_v_32397_seed.get()});})():([&]()->V{V _lhs34843=([&]()->V{V _callee34857=this->_v_32160_simplex4.get();return j::call(_callee34857,j::Args{([&]()->V{V _lhs34845=([&]()->V{V _lhs34847=_v_32422_a;V _rhs34848=_v_32437_f;return V(j::number(_lhs34847)*j::number(_rhs34848));})();V _rhs34846=_v_32440_oa;return j::binary("+",_lhs34845,_rhs34846);})(),([&]()->V{V _lhs34849=([&]()->V{V _lhs34851=_v_32423_b;V _rhs34852=_v_32437_f;return V(j::number(_lhs34851)*j::number(_rhs34852));})();V _rhs34850=_v_32441_ob;return j::binary("+",_lhs34849,_rhs34850);})(),([&]()->V{V _lhs34853=_v_32424_c;V _rhs34854=_v_32437_f;return V(j::number(_lhs34853)*j::number(_rhs34854));})(),([&]()->V{V _lhs34855=_v_32425_d;V _rhs34856=_v_32437_f;return V(j::number(_lhs34855)*j::number(_rhs34856));})(),_v_32397_seed.get()});})();V _rhs34844=this->_v_32272_WIDEN4.get();return V(j::number(_lhs34843)*j::number(_rhs34844));})()))));
if(j::truth(_v_32388_ridge.get())){(void)(((_v_32442_v=([&]()->V{V _lhs34859=([&]()->V{V _callee34861=this->_v_32294_crest.get();return j::call(_callee34861,j::Args{_v_32442_v});})();V _rhs34860=_v_32438_w;return V(j::number(_lhs34859)*j::number(_rhs34860));})()),(_v_32438_w=([&]()->V{V _callee34863=this->_v_32298_weigh.get();return j::call(_callee34863,j::Args{_v_32442_v});})())));
}

}

(void)((_v_32434_sum=j::binary("+",_v_32434_sum,([&]()->V{V _lhs34865=_v_32435_amp;V _rhs34866=_v_32442_v;return V(j::number(_lhs34865)*j::number(_rhs34866));})())));
(void)((_v_32436_norm=j::binary("+",_v_32436_norm,_v_32435_amp)));
(void)((_v_32435_amp=j::binary("*",_v_32435_amp,V(0.5))));
(void)((_v_32437_f=j::binary("*",_v_32437_f,V(2.0))));

}
}
_v_32443_k=([&]()->V{V _lhs34870=_v_32434_sum;V _rhs34871=_v_32436_norm;return V(j::number(_lhs34870)/j::number(_rhs34871));})();
(void)((_v_32443_k=(j::truth(_v_32387_cells.get())?(j::truth(([&]()->V{V _lhs34873=_v_32443_k;V _rhs34874=this->_v_32377_CELLS.get();return j::binary(">=",_lhs34873,_rhs34874);})())?V(1.0):([&]()->V{V _lhs34875=_v_32443_k;V _rhs34876=this->_v_32377_CELLS.get();return V(j::number(_lhs34875)/j::number(_rhs34876));})()):(j::truth(_v_32388_ridge.get())?_v_32443_k:([&]()->V{V _callee34881=this->_v_32089_unit.get();return j::call(_callee34881,j::Args{(j::truth(([&]()->V{V _lhs34877=_v_32389_detail.get();V _rhs34878=V(1.0);return j::binary(">",_lhs34877,_rhs34878);})())?([&]()->V{V _lhs34879=_v_32443_k;V _rhs34880=this->_v_32271_SPREAD.get();return V(j::number(_lhs34879)*j::number(_rhs34880));})():_v_32443_k)});})()))));
return ([&]()->V{V _lhs34882=_v_32398_lo.get();V _rhs34883=([&]()->V{V _lhs34884=_v_32399_span.get();V _rhs34885=_v_32443_k;return V(j::number(_lhs34884)*j::number(_rhs34885));})();return j::binary("+",_lhs34882,_rhs34883);})();

}

return V{};
},1);

}

return V{};
},0);
this->_v_32515_moved.get()=j::function([=](const j::Args &_args_fn32516,const V &_receiver_fn32516,const V &_self_fn32516) mutable ->V{
V _v_32517_t;
V _v_32518_o;
V _v_32519_name;
_v_32517_t=_args_fn32516[0];
_v_32518_o=_args_fn32516[1];
_v_32519_name=_args_fn32516[2];
{
V _v_32520_start;
V _v_32521_duration;
V _v_32522_period;
V _v_32523_how;
V _v_32524_curve;
V _v_32525_k;
if(j::truth(([&]()->V{V _logical34886=([&]()->V{V _lhs34887=_v_32518_o;V _rhs34888=j::builtin("undefined");return V(!j::equal(_lhs34887,_rhs34888,true));})();return j::truth(_logical34886)?([&]()->V{V _logical34889=([&]()->V{V _lhs34890=_v_32518_o;V _rhs34891=V::null();return V(j::equal(_lhs34890,_rhs34891,true));})();return !j::truth(_logical34889)?([&]()->V{V _lhs34892=j::unary("typeof",_v_32518_o);V _rhs34893=this->_literals[30];return V(!j::equal(_lhs34892,_rhs34893,true));})():_logical34889;})():_logical34886;})())){(void)(([&]()->V{V _callee34895=this->_v_31968_fail.get();return j::call(_callee34895,j::Args{([&]()->V{std::u16string _text34894;_text34894+=u"";_text34894+=j::string(_v_32519_name);_text34894+=u" takes options, such as { duration: 2, ease: \"outCubic\" }";return V(std::move(_text34894));})()});})());
}
_v_32520_start=([&]()->V{V _logical34896=([&]()->V{V _chain34897=_v_32518_o;if(j::nullish(_chain34897))return V{};V _chain34898=j::get(_chain34897,this->_literals[51]);return _chain34898;})();return j::nullish(_logical34896)?V(0.0):_logical34896;})();
_v_32521_duration=([&]()->V{V _logical34899=([&]()->V{V _chain34900=_v_32518_o;if(j::nullish(_chain34900))return V{};V _chain34901=j::get(_chain34900,this->_literals[52]);return _chain34901;})();return j::nullish(_logical34899)?V(1.0):_logical34899;})();
_v_32522_period=([&]()->V{V _chain34902=_v_32518_o;if(j::nullish(_chain34902))return V{};V _chain34903=j::get(_chain34902,this->_literals[44]);return _chain34903;})();
_v_32523_how=([&]()->V{V _logical34904=([&]()->V{V _chain34905=_v_32518_o;if(j::nullish(_chain34905))return V{};V _chain34906=j::get(_chain34905,this->_literals[53]);return _chain34906;})();return j::nullish(_logical34904)?this->_literals[54]:_logical34904;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver34907=j::builtin("Number");V _method34908=this->_literals[42];V _method=j::get(_receiver34907,_method34908);j::Args _params34909=j::Args{_v_32520_start};return j::call(_method,_params34909,_receiver34907);})()))){(void)(([&]()->V{V _callee34912=this->_v_31968_fail.get();return j::call(_callee34912,j::Args{([&]()->V{std::u16string _text34910;_text34910+=u"";_text34910+=j::string(_v_32519_name);_text34910+=u"'s start takes seconds, such as 0.5, not ";_text34910+=j::string(([&]()->V{V _callee34911=this->_v_31971_said.get();return j::call(_callee34911,j::Args{_v_32520_start});})());_text34910+=u"";return V(std::move(_text34910));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _logical34913=([&]()->V{V _callee34914=this->_v_31974_finite.get();return j::call(_callee34914,j::Args{_v_32521_duration});})();return j::truth(_logical34913)?([&]()->V{V _lhs34915=_v_32521_duration;V _rhs34916=V(0.0);return j::binary(">",_lhs34915,_rhs34916);})():_logical34913;})()))){(void)(([&]()->V{V _callee34919=this->_v_31968_fail.get();return j::call(_callee34919,j::Args{([&]()->V{std::u16string _text34917;_text34917+=u"";_text34917+=j::string(_v_32519_name);_text34917+=u"'s duration takes seconds above 0, such as 1, not ";_text34917+=j::string(([&]()->V{V _callee34918=this->_v_31971_said.get();return j::call(_callee34918,j::Args{_v_32521_duration});})());_text34917+=u"";return V(std::move(_text34917));})()});})());
}
if(j::truth(([&]()->V{V _lhs34920=_v_32522_period;V _rhs34921=j::builtin("undefined");return V(!j::equal(_lhs34920,_rhs34921,true));})())){
if(j::truth(j::unary("!",([&]()->V{V _logical34922=([&]()->V{V _callee34923=this->_v_31974_finite.get();return j::call(_callee34923,j::Args{_v_32522_period});})();return j::truth(_logical34922)?([&]()->V{V _lhs34924=_v_32522_period;V _rhs34925=V(0.0);return j::binary(">",_lhs34924,_rhs34925);})():_logical34922;})()))){(void)(([&]()->V{V _callee34928=this->_v_31968_fail.get();return j::call(_callee34928,j::Args{([&]()->V{std::u16string _text34926;_text34926+=u"";_text34926+=j::string(_v_32519_name);_text34926+=u"'s period takes seconds above 0, such as 4, not ";_text34926+=j::string(([&]()->V{V _callee34927=this->_v_31971_said.get();return j::call(_callee34927,j::Args{_v_32522_period});})());_text34926+=u"";return V(std::move(_text34926));})()});})());
}
if(j::truth(([&]()->V{V _logical34929=([&]()->V{V _lhs34930=_v_32520_start;V _rhs34931=V(0.0);return j::binary("<",_lhs34930,_rhs34931);})();return !j::truth(_logical34929)?([&]()->V{V _lhs34932=([&]()->V{V _lhs34934=_v_32520_start;V _rhs34935=_v_32521_duration;return j::binary("+",_lhs34934,_rhs34935);})();V _rhs34933=([&]()->V{V _lhs34936=_v_32522_period;V _rhs34937=V(1e-9);return j::binary("+",_lhs34936,_rhs34937);})();return j::binary(">",_lhs34932,_rhs34933);})():_logical34929;})())){(void)(([&]()->V{V _callee34939=this->_v_31968_fail.get();return j::call(_callee34939,j::Args{([&]()->V{std::u16string _text34938;_text34938+=u"";_text34938+=j::string(_v_32519_name);_text34938+=u" plays from start to start + duration inside each period: ";_text34938+=j::string(_v_32520_start);_text34938+=u" + ";_text34938+=j::string(_v_32521_duration);_text34938+=u" doesn't fit in ";_text34938+=j::string(_v_32522_period);_text34938+=u" seconds";return V(std::move(_text34938));})()});})());
}

}

_v_32524_curve=(j::truth(([&]()->V{V _lhs34940=j::unary("typeof",_v_32523_how);V _rhs34941=this->_literals[55];return V(j::equal(_lhs34940,_rhs34941,true));})())?_v_32523_how:(j::truth(([&]()->V{V _receiver34942=j::builtin("Object");V _method34943=this->_literals[56];V _method=j::get(_receiver34942,_method34943);j::Args _params34944=j::Args{this->_v_32454_curves.get(),_v_32523_how};return j::call(_method,_params34944,_receiver34942);})())?j::get(this->_v_32509_ease.get(),_v_32523_how):([&]()->V{V _callee34949=this->_v_31968_fail.get();return j::call(_callee34949,j::Args{([&]()->V{std::u16string _text34945;_text34945+=u"";_text34945+=j::string(_v_32519_name);_text34945+=u"'s ease takes an easing's name, such as \"outCubic\", or a function, not ";_text34945+=j::string(([&]()->V{V _receiver34946=j::builtin("JSON");V _method34947=this->_literals[36];V _method=j::get(_receiver34946,_method34947);j::Args _params34948=j::Args{_v_32523_how};return j::call(_method,_params34948,_receiver34946);})());_text34945+=u"";return V(std::move(_text34945));})()});})()));
_v_32525_k=([&]()->V{V _lhs34950=([&]()->V{V _lhs34952=(j::truth(([&]()->V{V _lhs34954=_v_32522_period;V _rhs34955=j::builtin("undefined");return V(j::equal(_lhs34954,_rhs34955,true));})())?_v_32517_t:([&]()->V{V _callee34956=this->_v_31991_mod.get();return j::call(_callee34956,j::Args{_v_32517_t,_v_32522_period});})());V _rhs34953=_v_32520_start;return V(j::number(_lhs34952)-j::number(_rhs34953));})();V _rhs34951=_v_32521_duration;return V(j::number(_lhs34950)/j::number(_rhs34951));})();
return ([&]()->V{V _callee34961=_v_32524_curve;return j::call(_callee34961,j::Args{(j::truth(j::unary("!",([&]()->V{V _lhs34957=_v_32525_k;V _rhs34958=V(0.0);return j::binary(">",_lhs34957,_rhs34958);})()))?V(0.0):(j::truth(([&]()->V{V _lhs34959=_v_32525_k;V _rhs34960=V(1.0);return j::binary(">=",_lhs34959,_rhs34960);})())?V(1.0):_v_32525_k))});})();

}

return V{};
},3);
this->_v_32526_progress.get()=j::function([=](const j::Args &_args_fn32527,const V &_receiver_fn32527,const V &_self_fn32527) mutable ->V{
V _v_32528_t;
V _v_32529_o;
_v_32528_t=_args_fn32527[0];
_v_32529_o=_args_fn32527[1];
{
return ([&]()->V{V _callee34962=this->_v_32515_moved.get();return j::call(_callee34962,j::Args{_v_32528_t,_v_32529_o,this->_literals[57]});})();

}

return V{};
},2);
this->_v_32530_tween.get()=j::function([=](const j::Args &_args_fn32531,const V &_receiver_fn32531,const V &_self_fn32531) mutable ->V{
V _v_32532_t;
V _v_32533_from;
j::Cell _v_32534_to;
V _v_32535_o;
_v_32532_t=_args_fn32531[0];
_v_32533_from=_args_fn32531[1];
_v_32534_to.get()=_args_fn32531[2];
_v_32535_o=_args_fn32531[3];
{
j::Cell _v_32536_k;
_v_32536_k.get()=([&]()->V{V _callee34963=this->_v_32515_moved.get();return j::call(_callee34963,j::Args{_v_32532_t,_v_32535_o,this->_literals[58]});})();
if(j::truth(([&]()->V{V _logical34964=([&]()->V{V _lhs34965=j::unary("typeof",_v_32533_from);V _rhs34966=this->_literals[38];return V(j::equal(_lhs34965,_rhs34966,true));})();return j::truth(_logical34964)?([&]()->V{V _lhs34967=j::unary("typeof",_v_32534_to.get());V _rhs34968=this->_literals[38];return V(j::equal(_lhs34967,_rhs34968,true));})():_logical34964;})())){return ([&]()->V{V _lhs34969=_v_32533_from;V _rhs34970=([&]()->V{V _lhs34971=([&]()->V{V _lhs34973=_v_32534_to.get();V _rhs34974=_v_32533_from;return V(j::number(_lhs34973)-j::number(_rhs34974));})();V _rhs34972=_v_32536_k.get();return V(j::number(_lhs34971)*j::number(_rhs34972));})();return j::binary("+",_lhs34969,_rhs34970);})();
}
if(j::truth(([&]()->V{V _logical34975=([&]()->V{V _logical34976=j::unary("!",([&]()->V{V _receiver34977=j::builtin("Array");V _method34978=this->_literals[14];V _method=j::get(_receiver34977,_method34978);j::Args _params34979=j::Args{_v_32533_from};return j::call(_method,_params34979,_receiver34977);})());return !j::truth(_logical34976)?j::unary("!",([&]()->V{V _receiver34980=j::builtin("Array");V _method34981=this->_literals[14];V _method=j::get(_receiver34980,_method34981);j::Args _params34982=j::Args{_v_32534_to.get()};return j::call(_method,_params34982,_receiver34980);})()):_logical34976;})();return !j::truth(_logical34975)?([&]()->V{V _lhs34983=j::get(_v_32533_from,this->_literals[8]);V _rhs34984=j::get(_v_32534_to.get(),this->_literals[8]);return V(!j::equal(_lhs34983,_rhs34984,true));})():_logical34975;})())){(void)(([&]()->V{V _callee34985=this->_v_31968_fail.get();return j::call(_callee34985,j::Args{this->_literals[59]});})());
}
return ([&]()->V{V _receiver34992=_v_32533_from;V _method34993=this->_literals[35];V _method=j::get(_receiver34992,_method34993);j::Args _params34994=j::Args{j::function([=](const j::Args &_args_fn32537,const V &_receiver_fn32537,const V &_self_fn32537) mutable ->V{
V _v_32538_v;
V _v_32539_i;
_v_32538_v=_args_fn32537[0];
_v_32539_i=_args_fn32537[1];
return ([&]()->V{V _lhs34986=_v_32538_v;V _rhs34987=([&]()->V{V _lhs34988=([&]()->V{V _lhs34990=j::get(_v_32534_to.get(),_v_32539_i);V _rhs34991=_v_32538_v;return V(j::number(_lhs34990)-j::number(_rhs34991));})();V _rhs34989=_v_32536_k.get();return V(j::number(_lhs34988)*j::number(_rhs34989));})();return j::binary("+",_lhs34986,_rhs34987);})();
return V{};
},2)};return j::call(_method,_params34994,_receiver34992);})();

}

return V{};
},4);
this->_v_32598_rotate3.get()=j::function([=](const j::Args &_args_fn32599,const V &_receiver_fn32599,const V &_self_fn32599) mutable ->V{
V _v_32600_v;
V _v_32601_angles;
V _v_32602_out;
_v_32600_v=_args_fn32599[0];
_v_32601_angles=_args_fn32599[1];
V _default34995=_args_fn32599[2];if(_default34995.kind==V::Undefined||_default34995.kind==V::Hole)_default34995=([&]()->V{j::Args _array34996;_array34996.push_back(V(0.0));_array34996.push_back(V(0.0));_array34996.push_back(V(0.0));return j::array(std::move(_array34996));})();
_v_32602_out=_default34995;
{
V _v_32603_x;
V _v_32604_y;
V _v_32605_z;
V _v_32606_c;
V _v_32607_s;
V _v_32608_k;
_v_32603_x=j::get(_v_32600_v,V(0.0));
_v_32604_y=j::get(_v_32600_v,V(1.0));
_v_32605_z=j::get(_v_32600_v,V(2.0));
if(j::truth(j::get(_v_32601_angles,V(0.0)))){(void)(((_v_32606_c=([&]()->V{V _number34998=j::get(_v_32601_angles,V(0.0));return V(std::cos(j::number(_number34998)));})()),(_v_32607_s=([&]()->V{V _number35000=j::get(_v_32601_angles,V(0.0));return V(std::sin(j::number(_number35000)));})()),(_v_32608_k=([&]()->V{V _lhs35002=([&]()->V{V _lhs35004=_v_32604_y;V _rhs35005=_v_32606_c;return V(j::number(_lhs35004)*j::number(_rhs35005));})();V _rhs35003=([&]()->V{V _lhs35006=_v_32605_z;V _rhs35007=_v_32607_s;return V(j::number(_lhs35006)*j::number(_rhs35007));})();return V(j::number(_lhs35002)-j::number(_rhs35003));})()),(_v_32605_z=([&]()->V{V _lhs35009=([&]()->V{V _lhs35011=_v_32604_y;V _rhs35012=_v_32607_s;return V(j::number(_lhs35011)*j::number(_rhs35012));})();V _rhs35010=([&]()->V{V _lhs35013=_v_32605_z;V _rhs35014=_v_32606_c;return V(j::number(_lhs35013)*j::number(_rhs35014));})();return j::binary("+",_lhs35009,_rhs35010);})()),(_v_32604_y=_v_32608_k)));
}
if(j::truth(j::get(_v_32601_angles,V(1.0)))){(void)(((_v_32606_c=([&]()->V{V _number35017=j::get(_v_32601_angles,V(1.0));return V(std::cos(j::number(_number35017)));})()),(_v_32607_s=([&]()->V{V _number35019=j::get(_v_32601_angles,V(1.0));return V(std::sin(j::number(_number35019)));})()),(_v_32608_k=([&]()->V{V _lhs35021=([&]()->V{V _lhs35023=_v_32603_x;V _rhs35024=_v_32606_c;return V(j::number(_lhs35023)*j::number(_rhs35024));})();V _rhs35022=([&]()->V{V _lhs35025=_v_32605_z;V _rhs35026=_v_32607_s;return V(j::number(_lhs35025)*j::number(_rhs35026));})();return j::binary("+",_lhs35021,_rhs35022);})()),(_v_32605_z=([&]()->V{V _lhs35028=([&]()->V{V _lhs35030=_v_32605_z;V _rhs35031=_v_32606_c;return V(j::number(_lhs35030)*j::number(_rhs35031));})();V _rhs35029=([&]()->V{V _lhs35032=_v_32603_x;V _rhs35033=_v_32607_s;return V(j::number(_lhs35032)*j::number(_rhs35033));})();return V(j::number(_lhs35028)-j::number(_rhs35029));})()),(_v_32603_x=_v_32608_k)));
}
if(j::truth(j::get(_v_32601_angles,V(2.0)))){(void)(((_v_32606_c=([&]()->V{V _number35036=j::get(_v_32601_angles,V(2.0));return V(std::cos(j::number(_number35036)));})()),(_v_32607_s=([&]()->V{V _number35038=j::get(_v_32601_angles,V(2.0));return V(std::sin(j::number(_number35038)));})()),(_v_32608_k=([&]()->V{V _lhs35040=([&]()->V{V _lhs35042=_v_32603_x;V _rhs35043=_v_32606_c;return V(j::number(_lhs35042)*j::number(_rhs35043));})();V _rhs35041=([&]()->V{V _lhs35044=_v_32604_y;V _rhs35045=_v_32607_s;return V(j::number(_lhs35044)*j::number(_rhs35045));})();return V(j::number(_lhs35040)-j::number(_rhs35041));})()),(_v_32604_y=([&]()->V{V _lhs35047=([&]()->V{V _lhs35049=_v_32603_x;V _rhs35050=_v_32607_s;return V(j::number(_lhs35049)*j::number(_rhs35050));})();V _rhs35048=([&]()->V{V _lhs35051=_v_32604_y;V _rhs35052=_v_32606_c;return V(j::number(_lhs35051)*j::number(_rhs35052));})();return j::binary("+",_lhs35047,_rhs35048);})()),(_v_32603_x=_v_32608_k)));
}
(void)(([&]()->V{V _base35055=_v_32602_out;V _key35056=V(0.0);V _assign35054=_v_32603_x;return j::put(_base35055,_key35056,_assign35054);})());
(void)(([&]()->V{V _base35058=_v_32602_out;V _key35059=V(1.0);V _assign35057=_v_32604_y;return j::put(_base35058,_key35059,_assign35057);})());
(void)(([&]()->V{V _base35061=_v_32602_out;V _key35062=V(2.0);V _assign35060=_v_32605_z;return j::put(_base35061,_key35062,_assign35060);})());
return _v_32602_out;

}

return V{};
},2);
this->_v_32609_rotation.get()=j::function([=](const j::Args &_args_fn32610,const V &_receiver_fn32610,const V &_self_fn32610) mutable ->V{
V _v_32611_angles;
_v_32611_angles=_args_fn32610[0];
{
V _v_32612_ca;
V _v_32613_sa;
V _v_32614_cb;
V _v_32615_sb;
V _v_32616_cc;
V _v_32617_sc;
j::Cell _v_32618_m00;
j::Cell _v_32619_m01;
j::Cell _v_32620_m02;
j::Cell _v_32621_m10;
j::Cell _v_32622_m11;
j::Cell _v_32623_m12;
j::Cell _v_32624_m20;
j::Cell _v_32625_m21;
j::Cell _v_32626_m22;
_v_32612_ca=([&]()->V{V _number35063=j::get(_v_32611_angles,V(0.0));return V(std::cos(j::number(_number35063)));})();
_v_32613_sa=([&]()->V{V _number35064=j::get(_v_32611_angles,V(0.0));return V(std::sin(j::number(_number35064)));})();
_v_32614_cb=([&]()->V{V _number35065=j::get(_v_32611_angles,V(1.0));return V(std::cos(j::number(_number35065)));})();
_v_32615_sb=([&]()->V{V _number35066=j::get(_v_32611_angles,V(1.0));return V(std::sin(j::number(_number35066)));})();
_v_32616_cc=([&]()->V{V _number35067=j::get(_v_32611_angles,V(2.0));return V(std::cos(j::number(_number35067)));})();
_v_32617_sc=([&]()->V{V _number35068=j::get(_v_32611_angles,V(2.0));return V(std::sin(j::number(_number35068)));})();
_v_32618_m00.get()=([&]()->V{V _lhs35069=_v_32616_cc;V _rhs35070=_v_32614_cb;return V(j::number(_lhs35069)*j::number(_rhs35070));})();
_v_32619_m01.get()=([&]()->V{V _lhs35071=([&]()->V{V _lhs35073=([&]()->V{V _lhs35075=_v_32616_cc;V _rhs35076=_v_32615_sb;return V(j::number(_lhs35075)*j::number(_rhs35076));})();V _rhs35074=_v_32613_sa;return V(j::number(_lhs35073)*j::number(_rhs35074));})();V _rhs35072=([&]()->V{V _lhs35077=_v_32617_sc;V _rhs35078=_v_32612_ca;return V(j::number(_lhs35077)*j::number(_rhs35078));})();return V(j::number(_lhs35071)-j::number(_rhs35072));})();
_v_32620_m02.get()=([&]()->V{V _lhs35079=([&]()->V{V _lhs35081=([&]()->V{V _lhs35083=_v_32616_cc;V _rhs35084=_v_32615_sb;return V(j::number(_lhs35083)*j::number(_rhs35084));})();V _rhs35082=_v_32612_ca;return V(j::number(_lhs35081)*j::number(_rhs35082));})();V _rhs35080=([&]()->V{V _lhs35085=_v_32617_sc;V _rhs35086=_v_32613_sa;return V(j::number(_lhs35085)*j::number(_rhs35086));})();return j::binary("+",_lhs35079,_rhs35080);})();
_v_32621_m10.get()=([&]()->V{V _lhs35087=_v_32617_sc;V _rhs35088=_v_32614_cb;return V(j::number(_lhs35087)*j::number(_rhs35088));})();
_v_32622_m11.get()=([&]()->V{V _lhs35089=([&]()->V{V _lhs35091=([&]()->V{V _lhs35093=_v_32617_sc;V _rhs35094=_v_32615_sb;return V(j::number(_lhs35093)*j::number(_rhs35094));})();V _rhs35092=_v_32613_sa;return V(j::number(_lhs35091)*j::number(_rhs35092));})();V _rhs35090=([&]()->V{V _lhs35095=_v_32616_cc;V _rhs35096=_v_32612_ca;return V(j::number(_lhs35095)*j::number(_rhs35096));})();return j::binary("+",_lhs35089,_rhs35090);})();
_v_32623_m12.get()=([&]()->V{V _lhs35097=([&]()->V{V _lhs35099=([&]()->V{V _lhs35101=_v_32617_sc;V _rhs35102=_v_32615_sb;return V(j::number(_lhs35101)*j::number(_rhs35102));})();V _rhs35100=_v_32612_ca;return V(j::number(_lhs35099)*j::number(_rhs35100));})();V _rhs35098=([&]()->V{V _lhs35103=_v_32616_cc;V _rhs35104=_v_32613_sa;return V(j::number(_lhs35103)*j::number(_rhs35104));})();return V(j::number(_lhs35097)-j::number(_rhs35098));})();
_v_32624_m20.get()=j::unary("-",_v_32615_sb);
_v_32625_m21.get()=([&]()->V{V _lhs35105=_v_32614_cb;V _rhs35106=_v_32613_sa;return V(j::number(_lhs35105)*j::number(_rhs35106));})();
_v_32626_m22.get()=([&]()->V{V _lhs35107=_v_32614_cb;V _rhs35108=_v_32612_ca;return V(j::number(_lhs35107)*j::number(_rhs35108));})();
return j::function([=](const j::Args &_args_fn32627,const V &_receiver_fn32627,const V &_self_fn32627) mutable ->V{
V _v_32628_v;
V _v_32629_out;
_v_32628_v=_args_fn32627[0];
V _default35109=_args_fn32627[1];if(_default35109.kind==V::Undefined||_default35109.kind==V::Hole)_default35109=([&]()->V{j::Args _array35110;_array35110.push_back(V(0.0));_array35110.push_back(V(0.0));_array35110.push_back(V(0.0));return j::array(std::move(_array35110));})();
_v_32629_out=_default35109;
{
V _v_32630_x;
V _v_32631_y;
V _v_32632_z;
_v_32630_x=j::get(_v_32628_v,V(0.0));
_v_32631_y=j::get(_v_32628_v,V(1.0));
_v_32632_z=j::get(_v_32628_v,V(2.0));
(void)(([&]()->V{V _base35112=_v_32629_out;V _key35113=V(0.0);V _assign35111=([&]()->V{V _lhs35114=([&]()->V{V _lhs35116=([&]()->V{V _lhs35118=_v_32618_m00.get();V _rhs35119=_v_32630_x;return V(j::number(_lhs35118)*j::number(_rhs35119));})();V _rhs35117=([&]()->V{V _lhs35120=_v_32619_m01.get();V _rhs35121=_v_32631_y;return V(j::number(_lhs35120)*j::number(_rhs35121));})();return j::binary("+",_lhs35116,_rhs35117);})();V _rhs35115=([&]()->V{V _lhs35122=_v_32620_m02.get();V _rhs35123=_v_32632_z;return V(j::number(_lhs35122)*j::number(_rhs35123));})();return j::binary("+",_lhs35114,_rhs35115);})();return j::put(_base35112,_key35113,_assign35111);})());
(void)(([&]()->V{V _base35125=_v_32629_out;V _key35126=V(1.0);V _assign35124=([&]()->V{V _lhs35127=([&]()->V{V _lhs35129=([&]()->V{V _lhs35131=_v_32621_m10.get();V _rhs35132=_v_32630_x;return V(j::number(_lhs35131)*j::number(_rhs35132));})();V _rhs35130=([&]()->V{V _lhs35133=_v_32622_m11.get();V _rhs35134=_v_32631_y;return V(j::number(_lhs35133)*j::number(_rhs35134));})();return j::binary("+",_lhs35129,_rhs35130);})();V _rhs35128=([&]()->V{V _lhs35135=_v_32623_m12.get();V _rhs35136=_v_32632_z;return V(j::number(_lhs35135)*j::number(_rhs35136));})();return j::binary("+",_lhs35127,_rhs35128);})();return j::put(_base35125,_key35126,_assign35124);})());
(void)(([&]()->V{V _base35138=_v_32629_out;V _key35139=V(2.0);V _assign35137=([&]()->V{V _lhs35140=([&]()->V{V _lhs35142=([&]()->V{V _lhs35144=_v_32624_m20.get();V _rhs35145=_v_32630_x;return V(j::number(_lhs35144)*j::number(_rhs35145));})();V _rhs35143=([&]()->V{V _lhs35146=_v_32625_m21.get();V _rhs35147=_v_32631_y;return V(j::number(_lhs35146)*j::number(_rhs35147));})();return j::binary("+",_lhs35142,_rhs35143);})();V _rhs35141=([&]()->V{V _lhs35148=_v_32626_m22.get();V _rhs35149=_v_32632_z;return V(j::number(_lhs35148)*j::number(_rhs35149));})();return j::binary("+",_lhs35140,_rhs35141);})();return j::put(_base35138,_key35139,_assign35137);})());
return _v_32629_out;

}

return V{};
},1);

}

return V{};
},1);
this->_v_32633_project.get()=j::function([=](const j::Args &_args_fn32634,const V &_receiver_fn32634,const V &_self_fn32634) mutable ->V{
V _v_32635_p;
V _v_32636_o;
V _v_32637_out;
_v_32635_p=_args_fn32634[0];
_v_32636_o=_args_fn32634[1];
_v_32637_out=_args_fn32634[2];
{
V _v_32638_distance;
V _v_32639_depth;
V _v_32640_k;
V _v_32641_r;
if(j::truth(([&]()->V{V _logical35150=j::unary("!",_v_32636_o);return !j::truth(_logical35150)?([&]()->V{V _lhs35151=j::unary("typeof",_v_32636_o);V _rhs35152=this->_literals[30];return V(!j::equal(_lhs35151,_rhs35152,true));})():_logical35150;})())){(void)(([&]()->V{V _callee35153=this->_v_31968_fail.get();return j::call(_callee35153,j::Args{this->_literals[60]});})());
}
_v_32638_distance=([&]()->V{V _logical35154=j::get(_v_32636_o,this->_literals[61]);return j::nullish(_logical35154)?V(5.0):_logical35154;})();
if(j::truth(j::unary("!",([&]()->V{V _logical35155=([&]()->V{V _callee35156=this->_v_31974_finite.get();return j::call(_callee35156,j::Args{_v_32638_distance});})();return j::truth(_logical35155)?([&]()->V{V _lhs35157=_v_32638_distance;V _rhs35158=V(0.0);return j::binary(">",_lhs35157,_rhs35158);})():_logical35155;})()))){(void)(([&]()->V{V _callee35161=this->_v_31968_fail.get();return j::call(_callee35161,j::Args{([&]()->V{std::u16string _text35159;_text35159+=u"project()'s distance takes a number above 0, such as 5, not ";_text35159+=j::string(([&]()->V{V _callee35160=this->_v_31971_said.get();return j::call(_callee35160,j::Args{_v_32638_distance});})());_text35159+=u"";return V(std::move(_text35159));})()});})());
}
_v_32639_depth=([&]()->V{V _lhs35162=j::get(_v_32635_p,V(2.0));V _rhs35163=_v_32638_distance;return j::binary("+",_lhs35162,_rhs35163);})();
if(j::truth(j::unary("!",([&]()->V{V _lhs35164=_v_32639_depth;V _rhs35165=V(1e-9);return j::binary(">",_lhs35164,_rhs35165);})()))){return V::null();
}
_v_32640_k=([&]()->V{V _lhs35166=([&]()->V{V _lhs35168=([&]()->V{V _logical35170=j::get(_v_32636_o,this->_literals[62]);return j::nullish(_logical35170)?([&]()->V{V _lhs35171=j::get(_v_32636_o,this->_literals[63]);V _rhs35172=V(3.0);return V(j::number(_lhs35171)/j::number(_rhs35172));})():_logical35170;})();V _rhs35169=_v_32638_distance;return V(j::number(_lhs35168)*j::number(_rhs35169));})();V _rhs35167=_v_32639_depth;return V(j::number(_lhs35166)/j::number(_rhs35167));})();
_v_32641_r=([&]()->V{V _logical35173=_v_32637_out;return j::nullish(_logical35173)?([&]()->V{V _obj35174=j::object();j::put(_obj35174,this->_literals[64],V(0.0));j::put(_obj35174,this->_literals[65],V(0.0));j::put(_obj35174,this->_literals[66],V(0.0));return _obj35174;})():_logical35173;})();
(void)(([&]()->V{V _base35176=_v_32641_r;V _key35177=this->_literals[64];V _assign35175=([&]()->V{V _lhs35178=([&]()->V{V _lhs35180=j::get(_v_32636_o,this->_literals[67]);V _rhs35181=V(2.0);return V(j::number(_lhs35180)/j::number(_rhs35181));})();V _rhs35179=([&]()->V{V _lhs35182=([&]()->V{V _lhs35184=j::get(_v_32635_p,V(0.0));V _rhs35185=_v_32640_k;return V(j::number(_lhs35184)*j::number(_rhs35185));})();V _rhs35183=([&]()->V{V _logical35186=j::get(_v_32636_o,this->_literals[68]);return j::nullish(_logical35186)?V(2.0):_logical35186;})();return V(j::number(_lhs35182)*j::number(_rhs35183));})();return j::binary("+",_lhs35178,_rhs35179);})();return j::put(_base35176,_key35177,_assign35175);})());
(void)(([&]()->V{V _base35188=_v_32641_r;V _key35189=this->_literals[65];V _assign35187=([&]()->V{V _lhs35190=([&]()->V{V _lhs35192=j::get(_v_32636_o,this->_literals[63]);V _rhs35193=V(2.0);return V(j::number(_lhs35192)/j::number(_rhs35193));})();V _rhs35191=([&]()->V{V _lhs35194=j::get(_v_32635_p,V(1.0));V _rhs35195=_v_32640_k;return V(j::number(_lhs35194)*j::number(_rhs35195));})();return V(j::number(_lhs35190)-j::number(_rhs35191));})();return j::put(_base35188,_key35189,_assign35187);})());
(void)(([&]()->V{V _base35197=_v_32641_r;V _key35198=this->_literals[66];V _assign35196=_v_32639_depth;return j::put(_base35197,_key35198,_assign35196);})());
return _v_32641_r;

}

return V{};
},3);
this->_v_32642_camera.get()=j::function([=](const j::Args &_args_fn32643,const V &_receiver_fn32643,const V &_self_fn32643) mutable ->V{
V _v_32644_area;
V _v_32645_o;
_v_32644_area=_args_fn32643[0];
V _default35199=_args_fn32643[1];if(_default35199.kind==V::Undefined||_default35199.kind==V::Hole)_default35199=([&]()->V{V _obj35200=j::object();return _obj35200;})();
_v_32645_o=_default35199;
{
V _v_32646_cols;
V _v_32647_rows;
j::Cell _v_32648_size;
j::Cell _v_32649_distance;
V _v_32650_turn;
j::Cell _v_32651_turns;
V _v_32652_tilt;
V _v_32653_aspect;
V _v_32654_scale;
j::Cell _v_32655_lens;
j::Cell _v_32656_tipped;
j::Cell _v_32657_p;
j::Cell _v_32658_at;
j::Cell _v_32659_view;
j::Cell _v_32660_when;
j::Cell _v_32661_spin;
j::Cell _v_32662_angle;
V _pattern35203=([&]()->V{V _logical35201=_v_32644_area;return j::nullish(_logical35201)?([&]()->V{V _obj35202=j::object();return _obj35202;})():_logical35201;})();
_v_32646_cols=j::get(_pattern35203,this->_literals[67]);
_v_32647_rows=j::get(_pattern35203,this->_literals[63]);
if(j::truth(j::unary("!",([&]()->V{V _logical35204=([&]()->V{V _logical35205=([&]()->V{V _logical35206=([&]()->V{V _receiver35207=j::builtin("Number");V _method35208=this->_literals[0];V _method=j::get(_receiver35207,_method35208);j::Args _params35209=j::Args{_v_32646_cols};return j::call(_method,_params35209,_receiver35207);})();return j::truth(_logical35206)?([&]()->V{V _lhs35210=_v_32646_cols;V _rhs35211=V(1.0);return j::binary(">=",_lhs35210,_rhs35211);})():_logical35206;})();return j::truth(_logical35205)?([&]()->V{V _receiver35212=j::builtin("Number");V _method35213=this->_literals[0];V _method=j::get(_receiver35212,_method35213);j::Args _params35214=j::Args{_v_32647_rows};return j::call(_method,_params35214,_receiver35212);})():_logical35205;})();return j::truth(_logical35204)?([&]()->V{V _lhs35215=_v_32647_rows;V _rhs35216=V(1.0);return j::binary(">=",_lhs35215,_rhs35216);})():_logical35204;})()))){(void)(([&]()->V{V _callee35221=this->_v_31968_fail.get();return j::call(_callee35221,j::Args{([&]()->V{std::u16string _text35217;_text35217+=u"camera() takes the grid's size first, { cols, rows } in whole numbers, not ";_text35217+=j::string(([&]()->V{V _receiver35218=j::builtin("JSON");V _method35219=this->_literals[36];V _method=j::get(_receiver35218,_method35219);j::Args _params35220=j::Args{_v_32644_area};return j::call(_method,_params35220,_receiver35218);})());_text35217+=u"";return V(std::move(_text35217));})()});})());
}
if(j::truth(([&]()->V{V _logical35222=([&]()->V{V _lhs35223=_v_32645_o;V _rhs35224=V::null();return V(j::equal(_lhs35223,_rhs35224,true));})();return !j::truth(_logical35222)?([&]()->V{V _lhs35225=j::unary("typeof",_v_32645_o);V _rhs35226=this->_literals[30];return V(!j::equal(_lhs35225,_rhs35226,true));})():_logical35222;})())){(void)(([&]()->V{V _callee35227=this->_v_31968_fail.get();return j::call(_callee35227,j::Args{this->_literals[69]});})());
}
_v_32648_size.get()=([&]()->V{V _logical35228=j::get(_v_32645_o,this->_literals[37]);return j::nullish(_logical35228)?V(1.0):_logical35228;})();
if(j::truth(j::unary("!",([&]()->V{V _logical35229=([&]()->V{V _callee35230=this->_v_31974_finite.get();return j::call(_callee35230,j::Args{_v_32648_size.get()});})();return j::truth(_logical35229)?([&]()->V{V _lhs35231=_v_32648_size.get();V _rhs35232=V(0.0);return j::binary(">",_lhs35231,_rhs35232);})():_logical35229;})()))){(void)(([&]()->V{V _callee35235=this->_v_31968_fail.get();return j::call(_callee35235,j::Args{([&]()->V{std::u16string _text35233;_text35233+=u"camera's size takes units above 0, such as 1, not ";_text35233+=j::string(([&]()->V{V _callee35234=this->_v_31971_said.get();return j::call(_callee35234,j::Args{_v_32648_size.get()});})());_text35233+=u"";return V(std::move(_text35233));})()});})());
}
_v_32649_distance.get()=([&]()->V{V _logical35236=j::get(_v_32645_o,this->_literals[61]);return j::nullish(_logical35236)?([&]()->V{V _lhs35237=V(4.0);V _rhs35238=_v_32648_size.get();return V(j::number(_lhs35237)*j::number(_rhs35238));})():_logical35236;})();
if(j::truth(j::unary("!",([&]()->V{V _logical35239=([&]()->V{V _callee35240=this->_v_31974_finite.get();return j::call(_callee35240,j::Args{_v_32649_distance.get()});})();return j::truth(_logical35239)?([&]()->V{V _lhs35241=_v_32649_distance.get();V _rhs35242=_v_32648_size.get();return j::binary(">",_lhs35241,_rhs35242);})():_logical35239;})()))){(void)(([&]()->V{V _callee35247=this->_v_31968_fail.get();return j::call(_callee35247,j::Args{([&]()->V{std::u16string _text35243;_text35243+=u"camera's distance takes units more than its size (";_text35243+=j::string(_v_32648_size.get());_text35243+=u"), such as ";_text35243+=j::string(([&]()->V{V _lhs35244=V(4.0);V _rhs35245=_v_32648_size.get();return V(j::number(_lhs35244)*j::number(_rhs35245));})());_text35243+=u", not ";_text35243+=j::string(([&]()->V{V _callee35246=this->_v_31971_said.get();return j::call(_callee35246,j::Args{_v_32649_distance.get()});})());_text35243+=u"";return V(std::move(_text35243));})()});})());
}
_v_32650_turn=([&]()->V{V _logical35248=j::get(_v_32645_o,this->_literals[70]);return j::nullish(_logical35248)?V(0.0):_logical35248;})();
_v_32651_turns.get()=(j::truth(([&]()->V{V _lhs35249=j::unary("typeof",_v_32650_turn);V _rhs35250=this->_literals[38];return V(j::equal(_lhs35249,_rhs35250,true));})())?([&]()->V{j::Args _array35251;_array35251.push_back(V(0.0));_array35251.push_back(_v_32650_turn);_array35251.push_back(V(0.0));return j::array(std::move(_array35251));})():(j::truth(([&]()->V{V _logical35252=([&]()->V{V _receiver35253=j::builtin("Array");V _method35254=this->_literals[14];V _method=j::get(_receiver35253,_method35254);j::Args _params35255=j::Args{_v_32650_turn};return j::call(_method,_params35255,_receiver35253);})();return j::truth(_logical35252)?([&]()->V{V _lhs35256=j::get(_v_32650_turn,this->_literals[8]);V _rhs35257=V(3.0);return V(j::equal(_lhs35256,_rhs35257,true));})():_logical35252;})())?_v_32650_turn:([&]()->V{j::Args _array35258;_array35258.push_back(j::builtin("NaN"));return j::array(std::move(_array35258));})()));
if(j::truth(j::unary("!",([&]()->V{V _receiver35259=_v_32651_turns.get();V _method35260=this->_literals[46];V _method=j::get(_receiver35259,_method35260);j::Args _params35261=j::Args{j::get(j::builtin("Number"),this->_literals[42])};return j::call(_method,_params35261,_receiver35259);})()))){(void)(([&]()->V{V _callee35266=this->_v_31968_fail.get();return j::call(_callee35266,j::Args{([&]()->V{std::u16string _text35262;_text35262+=u"camera's turn takes seconds a turn, a number or [x, y, z], 0 for none, not ";_text35262+=j::string(([&]()->V{V _receiver35263=j::builtin("JSON");V _method35264=this->_literals[36];V _method=j::get(_receiver35263,_method35264);j::Args _params35265=j::Args{_v_32650_turn};return j::call(_method,_params35265,_receiver35263);})());_text35262+=u"";return V(std::move(_text35262));})()});})());
}
_v_32652_tilt=([&]()->V{V _logical35267=j::get(_v_32645_o,this->_literals[71]);return j::nullish(_logical35267)?V(0.3):_logical35267;})();
_v_32653_aspect=([&]()->V{V _logical35268=j::get(_v_32645_o,this->_literals[68]);return j::nullish(_logical35268)?V(2.0):_logical35268;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver35269=j::builtin("Number");V _method35270=this->_literals[42];V _method=j::get(_receiver35269,_method35270);j::Args _params35271=j::Args{_v_32652_tilt};return j::call(_method,_params35271,_receiver35269);})()))){(void)(([&]()->V{V _callee35274=this->_v_31968_fail.get();return j::call(_callee35274,j::Args{([&]()->V{std::u16string _text35272;_text35272+=u"camera's tilt takes radians, such as 0.3, not ";_text35272+=j::string(([&]()->V{V _callee35273=this->_v_31971_said.get();return j::call(_callee35273,j::Args{_v_32652_tilt});})());_text35272+=u"";return V(std::move(_text35272));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _logical35275=([&]()->V{V _callee35276=this->_v_31974_finite.get();return j::call(_callee35276,j::Args{_v_32653_aspect});})();return j::truth(_logical35275)?([&]()->V{V _lhs35277=_v_32653_aspect;V _rhs35278=V(0.0);return j::binary(">",_lhs35277,_rhs35278);})():_logical35275;})()))){(void)(([&]()->V{V _callee35281=this->_v_31968_fail.get();return j::call(_callee35281,j::Args{([&]()->V{std::u16string _text35279;_text35279+=u"camera's aspect takes a cell's height in widths, 2 or 1, not ";_text35279+=j::string(([&]()->V{V _callee35280=this->_v_31971_said.get();return j::call(_callee35280,j::Args{_v_32653_aspect});})());_text35279+=u"";return V(std::move(_text35279));})()});})());
}
_v_32654_scale=([&]()->V{V _lhs35282=([&]()->V{V _lhs35284=([&]()->V{V _lhs35286=V(0.95);V _rhs35287=([&]()->V{V _receiver35296=j::builtin("Math");V _method35297=this->_literals[29];V _method=j::get(_receiver35296,_method35297);j::Args _params35298=j::Args{([&]()->V{V _lhs35288=_v_32647_rows;V _rhs35289=V(2.0);return V(j::number(_lhs35288)/j::number(_rhs35289));})(),([&]()->V{V _lhs35290=_v_32646_cols;V _rhs35291=([&]()->V{V _lhs35292=V(2.0);V _rhs35293=_v_32653_aspect;return V(j::number(_lhs35292)*j::number(_rhs35293));})();return V(j::number(_lhs35290)/j::number(_rhs35291));})()};return j::call(_method,_params35298,_receiver35296);})();return V(j::number(_lhs35286)*j::number(_rhs35287));})();V _rhs35285=([&]()->V{V _number35305=([&]()->V{V _lhs35306=([&]()->V{V _lhs35308=_v_32649_distance.get();V _rhs35309=_v_32649_distance.get();return V(j::number(_lhs35308)*j::number(_rhs35309));})();V _rhs35307=([&]()->V{V _lhs35310=_v_32648_size.get();V _rhs35311=_v_32648_size.get();return V(j::number(_lhs35310)*j::number(_rhs35311));})();return V(j::number(_lhs35306)-j::number(_rhs35307));})();return V(std::sqrt(j::number(_number35305)));})();return V(j::number(_lhs35284)*j::number(_rhs35285));})();V _rhs35283=([&]()->V{V _lhs35312=_v_32649_distance.get();V _rhs35313=_v_32648_size.get();return V(j::number(_lhs35312)*j::number(_rhs35313));})();return V(j::number(_lhs35282)/j::number(_rhs35283));})();
_v_32655_lens.get()=([&]()->V{V _obj35314=j::object();j::put(_obj35314,this->_literals[67],_v_32646_cols);j::put(_obj35314,this->_literals[63],_v_32647_rows);j::put(_obj35314,this->_literals[61],_v_32649_distance.get());j::put(_obj35314,this->_literals[62],_v_32654_scale);j::put(_obj35314,this->_literals[68],_v_32653_aspect);return _obj35314;})();
_v_32656_tipped.get()=([&]()->V{V _callee35316=this->_v_32609_rotation.get();return j::call(_callee35316,j::Args{([&]()->V{j::Args _array35315;_array35315.push_back(j::unary("-",_v_32652_tilt));_array35315.push_back(V(0.0));_array35315.push_back(V(0.0));return j::array(std::move(_array35315));})()});})();
_v_32657_p.get()=([&]()->V{j::Args _array35317;_array35317.push_back(V(0.0));_array35317.push_back(V(0.0));_array35317.push_back(V(0.0));return j::array(std::move(_array35317));})();
_v_32658_at.get()=([&]()->V{V _obj35318=j::object();j::put(_obj35318,this->_literals[64],V(0.0));j::put(_obj35318,this->_literals[65],V(0.0));j::put(_obj35318,this->_literals[66],V(0.0));return _obj35318;})();
_v_32659_view.get()=([&]()->V{V _obj35319=j::object();j::put(_obj35319,this->_literals[64],V(0.0));j::put(_obj35319,this->_literals[65],V(0.0));j::put(_obj35319,this->_literals[66],V(0.0));j::put(_obj35319,this->_literals[72],V(0.0));return _obj35319;})();
_v_32660_when.get()=j::builtin("NaN");
_v_32661_spin.get()=([&]()->V{V _callee35321=this->_v_32609_rotation.get();return j::call(_callee35321,j::Args{([&]()->V{j::Args _array35320;_array35320.push_back(V(0.0));_array35320.push_back(V(0.0));_array35320.push_back(V(0.0));return j::array(std::move(_array35320));})()});})();
_v_32662_angle.get()=j::function([=](const j::Args &_args_fn32663,const V &_receiver_fn32663,const V &_self_fn32663) mutable ->V{
V _v_32664_t;
V _v_32665_period;
_v_32664_t=_args_fn32663[0];
_v_32665_period=_args_fn32663[1];
return (j::truth(_v_32665_period)?([&]()->V{V _lhs35322=([&]()->V{V _lhs35324=this->_v_31965_TAU.get();V _rhs35325=([&]()->V{V _callee35327=this->_v_32673_place.get();return j::call(_callee35327,j::Args{_v_32664_t,([&]()->V{V _number35326=_v_32665_period;return V(std::fabs(j::number(_number35326)));})()});})();return V(j::number(_lhs35324)*j::number(_rhs35325));})();V _rhs35323=([&]()->V{V _receiver35329=j::builtin("Math");V _method35330=this->_literals[11];V _method=j::get(_receiver35329,_method35330);j::Args _params35331=j::Args{_v_32665_period};return j::call(_method,_params35331,_receiver35329);})();return V(j::number(_lhs35322)*j::number(_rhs35323));})():V(0.0));
return V{};
},2);
return j::function([=](const j::Args &_args_fn32666,const V &_receiver_fn32666,const V &_self_fn32666) mutable ->V{
V _v_32667_point;
V _v_32668_t;
_v_32667_point=_args_fn32666[0];
V _default35332=_args_fn32666[1];if(_default35332.kind==V::Undefined||_default35332.kind==V::Hole)_default35332=V(0.0);
_v_32668_t=_default35332;
{
if(j::truth(([&]()->V{V _lhs35333=_v_32668_t;V _rhs35334=_v_32660_when.get();return V(!j::equal(_lhs35333,_rhs35334,true));})())){(void)(((_v_32660_when.get()=_v_32668_t),(_v_32661_spin.get()=([&]()->V{V _callee35341=this->_v_32609_rotation.get();return j::call(_callee35341,j::Args{([&]()->V{j::Args _array35337;_array35337.push_back(([&]()->V{V _callee35338=_v_32662_angle.get();return j::call(_callee35338,j::Args{_v_32668_t,j::get(_v_32651_turns.get(),V(0.0))});})());_array35337.push_back(([&]()->V{V _callee35339=_v_32662_angle.get();return j::call(_callee35339,j::Args{_v_32668_t,j::get(_v_32651_turns.get(),V(1.0))});})());_array35337.push_back(([&]()->V{V _callee35340=_v_32662_angle.get();return j::call(_callee35340,j::Args{_v_32668_t,j::get(_v_32651_turns.get(),V(2.0))});})());return j::array(std::move(_array35337));})()});})())));
}
(void)(([&]()->V{V _callee35343=_v_32656_tipped.get();return j::call(_callee35343,j::Args{([&]()->V{V _callee35342=_v_32661_spin.get();return j::call(_callee35342,j::Args{_v_32667_point,_v_32657_p.get()});})(),_v_32657_p.get()});})());
if(j::truth(j::unary("!",([&]()->V{V _callee35344=this->_v_32633_project.get();return j::call(_callee35344,j::Args{_v_32657_p.get(),_v_32655_lens.get(),_v_32658_at.get()});})()))){return V::null();
}
(void)(([&]()->V{V _base35346=_v_32659_view.get();V _key35347=this->_literals[64];V _assign35345=j::get(_v_32658_at.get(),this->_literals[64]);return j::put(_base35346,_key35347,_assign35345);})());
(void)(([&]()->V{V _base35349=_v_32659_view.get();V _key35350=this->_literals[65];V _assign35348=j::get(_v_32658_at.get(),this->_literals[65]);return j::put(_base35349,_key35350,_assign35348);})());
(void)(([&]()->V{V _base35352=_v_32659_view.get();V _key35353=this->_literals[66];V _assign35351=j::get(_v_32658_at.get(),this->_literals[66]);return j::put(_base35352,_key35353,_assign35351);})());
(void)(([&]()->V{V _base35355=_v_32659_view.get();V _key35356=this->_literals[72];V _assign35354=([&]()->V{V _callee35365=this->_v_31967_clamp.get();return j::call(_callee35365,j::Args{([&]()->V{V _lhs35357=([&]()->V{V _lhs35359=([&]()->V{V _lhs35361=_v_32649_distance.get();V _rhs35362=_v_32648_size.get();return j::binary("+",_lhs35361,_rhs35362);})();V _rhs35360=j::get(_v_32658_at.get(),this->_literals[66]);return V(j::number(_lhs35359)-j::number(_rhs35360));})();V _rhs35358=([&]()->V{V _lhs35363=V(2.0);V _rhs35364=_v_32648_size.get();return V(j::number(_lhs35363)*j::number(_rhs35364));})();return V(j::number(_lhs35357)/j::number(_rhs35358));})()});})();return j::put(_base35355,_key35356,_assign35354);})());
return _v_32659_view.get();

}

return V{};
},1);

}

return V{};
},1);
this->_v_32669_checkPeriod.get()=j::function([=](const j::Args &_args_fn32670,const V &_receiver_fn32670,const V &_self_fn32670) mutable ->V{
V _v_32671_name;
V _v_32672_p;
_v_32671_name=_args_fn32670[0];
_v_32672_p=_args_fn32670[1];
{
if(j::truth(j::unary("!",([&]()->V{V _logical35366=([&]()->V{V _callee35367=this->_v_31974_finite.get();return j::call(_callee35367,j::Args{_v_32672_p});})();return j::truth(_logical35366)?([&]()->V{V _lhs35368=_v_32672_p;V _rhs35369=V(0.0);return j::binary(">",_lhs35368,_rhs35369);})():_logical35366;})()))){(void)(([&]()->V{V _callee35372=this->_v_31968_fail.get();return j::call(_callee35372,j::Args{([&]()->V{std::u16string _text35370;_text35370+=u"";_text35370+=j::string(_v_32671_name);_text35370+=u" takes a period in seconds above 0, such as 2, not ";_text35370+=j::string(([&]()->V{V _callee35371=this->_v_31971_said.get();return j::call(_callee35371,j::Args{_v_32672_p});})());_text35370+=u"";return V(std::move(_text35370));})()});})());
}

}

return V{};
},2);
this->_v_32673_place.get()=j::function([=](const j::Args &_args_fn32674,const V &_receiver_fn32674,const V &_self_fn32674) mutable ->V{
V _v_32675_t;
V _v_32676_period;
_v_32675_t=_args_fn32674[0];
_v_32676_period=_args_fn32674[1];
{
V _v_32677_k;
_v_32677_k=([&]()->V{V _lhs35373=([&]()->V{V _callee35375=this->_v_31991_mod.get();return j::call(_callee35375,j::Args{_v_32675_t,_v_32676_period});})();V _rhs35374=_v_32676_period;return V(j::number(_lhs35373)/j::number(_rhs35374));})();
return (j::truth(([&]()->V{V _lhs35376=_v_32677_k;V _rhs35377=V(1.0);return j::binary("<",_lhs35376,_rhs35377);})())?_v_32677_k:V(0.0));

}

return V{};
},2);
this->_v_32678_phase.get()=j::function([=](const j::Args &_args_fn32679,const V &_receiver_fn32679,const V &_self_fn32679) mutable ->V{
V _v_32680_t;
V _v_32681_period;
_v_32680_t=_args_fn32679[0];
_v_32681_period=_args_fn32679[1];
{
(void)(([&]()->V{V _callee35378=this->_v_32669_checkPeriod.get();return j::call(_callee35378,j::Args{this->_literals[73],_v_32681_period});})());
return ([&]()->V{V _callee35379=this->_v_32673_place.get();return j::call(_callee35379,j::Args{_v_32680_t,_v_32681_period});})();

}

return V{};
},2);
this->_v_32682_oscillate.get()=j::function([=](const j::Args &_args_fn32683,const V &_receiver_fn32683,const V &_self_fn32683) mutable ->V{
V _v_32684_t;
V _v_32685_period;
V _v_32686_lo;
V _v_32687_hi;
V _v_32688_offset;
_v_32684_t=_args_fn32683[0];
_v_32685_period=_args_fn32683[1];
V _default35380=_args_fn32683[2];if(_default35380.kind==V::Undefined||_default35380.kind==V::Hole)_default35380=j::unary("-",V(1.0));
_v_32686_lo=_default35380;
V _default35381=_args_fn32683[3];if(_default35381.kind==V::Undefined||_default35381.kind==V::Hole)_default35381=V(1.0);
_v_32687_hi=_default35381;
V _default35382=_args_fn32683[4];if(_default35382.kind==V::Undefined||_default35382.kind==V::Hole)_default35382=V(0.0);
_v_32688_offset=_default35382;
{
(void)(([&]()->V{V _callee35383=this->_v_32669_checkPeriod.get();return j::call(_callee35383,j::Args{this->_literals[74],_v_32685_period});})());
return ([&]()->V{V _lhs35384=_v_32686_lo;V _rhs35385=([&]()->V{V _lhs35386=([&]()->V{V _lhs35388=_v_32687_hi;V _rhs35389=_v_32686_lo;return V(j::number(_lhs35388)-j::number(_rhs35389));})();V _rhs35387=([&]()->V{V _lhs35390=V(0.5);V _rhs35391=([&]()->V{V _lhs35392=V(0.5);V _rhs35393=([&]()->V{V _number35399=([&]()->V{V _lhs35400=this->_v_31965_TAU.get();V _rhs35401=([&]()->V{V _lhs35402=([&]()->V{V _callee35404=this->_v_32673_place.get();return j::call(_callee35404,j::Args{_v_32684_t,_v_32685_period});})();V _rhs35403=_v_32688_offset;return j::binary("+",_lhs35402,_rhs35403);})();return V(j::number(_lhs35400)*j::number(_rhs35401));})();return V(std::sin(j::number(_number35399)));})();return V(j::number(_lhs35392)*j::number(_rhs35393));})();return j::binary("+",_lhs35390,_rhs35391);})();return V(j::number(_lhs35386)*j::number(_rhs35387));})();return j::binary("+",_lhs35384,_rhs35385);})();

}

return V{};
},2);
this->_v_32689_triangle.get()=j::function([=](const j::Args &_args_fn32690,const V &_receiver_fn32690,const V &_self_fn32690) mutable ->V{
V _v_32691_t;
V _v_32692_period;
_v_32691_t=_args_fn32690[0];
_v_32692_period=_args_fn32690[1];
{
(void)(([&]()->V{V _callee35405=this->_v_32669_checkPeriod.get();return j::call(_callee35405,j::Args{this->_literals[75],_v_32692_period});})());
return ([&]()->V{V _lhs35406=V(1.0);V _rhs35407=([&]()->V{V _number35413=([&]()->V{V _lhs35414=V(1.0);V _rhs35415=([&]()->V{V _lhs35416=V(2.0);V _rhs35417=([&]()->V{V _callee35418=this->_v_32673_place.get();return j::call(_callee35418,j::Args{_v_32691_t,_v_32692_period});})();return V(j::number(_lhs35416)*j::number(_rhs35417));})();return V(j::number(_lhs35414)-j::number(_rhs35415));})();return V(std::fabs(j::number(_number35413)));})();return V(j::number(_lhs35406)-j::number(_rhs35407));})();

}

return V{};
},2);
this->_v_32693_pulse.get()=j::function([=](const j::Args &_args_fn32694,const V &_receiver_fn32694,const V &_self_fn32694) mutable ->V{
V _v_32695_t;
V _v_32696_period;
V _v_32697_width;
_v_32695_t=_args_fn32694[0];
_v_32696_period=_args_fn32694[1];
V _default35419=_args_fn32694[2];if(_default35419.kind==V::Undefined||_default35419.kind==V::Hole)_default35419=([&]()->V{V _lhs35420=_v_32696_period;V _rhs35421=V(2.0);return V(j::number(_lhs35420)/j::number(_rhs35421));})();
_v_32697_width=_default35419;
{
(void)(([&]()->V{V _callee35422=this->_v_32669_checkPeriod.get();return j::call(_callee35422,j::Args{this->_literals[76],_v_32696_period});})());
return (j::truth(([&]()->V{V _lhs35423=([&]()->V{V _callee35425=this->_v_31991_mod.get();return j::call(_callee35425,j::Args{_v_32695_t,_v_32696_period});})();V _rhs35424=_v_32697_width;return j::binary("<",_lhs35423,_rhs35424);})())?V(1.0):V(0.0));

}

return V{};
},2);
this->_v_32698_cycle.get()=j::function([=](const j::Args &_args_fn32699,const V &_receiver_fn32699,const V &_self_fn32699) mutable ->V{
V _v_32700_t;
V _v_32701_period;
_v_32700_t=_args_fn32699[0];
_v_32701_period=_args_fn32699[1];
{
(void)(([&]()->V{V _callee35426=this->_v_32669_checkPeriod.get();return j::call(_callee35426,j::Args{this->_literals[77],_v_32701_period});})());
return ([&]()->V{V _lhs35427=([&]()->V{V _number35434=([&]()->V{V _lhs35435=([&]()->V{V _lhs35437=_v_32700_t;V _rhs35438=([&]()->V{V _callee35439=this->_v_31991_mod.get();return j::call(_callee35439,j::Args{_v_32700_t,_v_32701_period});})();return V(j::number(_lhs35437)-j::number(_rhs35438));})();V _rhs35436=_v_32701_period;return V(j::number(_lhs35435)/j::number(_rhs35436));})();return V(std::floor(j::number(_number35434)+.5));})();V _rhs35428=V(0.0);return j::binary("+",_lhs35427,_rhs35428);})();

}

return V{};
},2);
this->_v_32702_lcm.get()=j::function([=](const j::Args &_args_fn32703,const V &_receiver_fn32703,const V &_self_fn32703) mutable ->V{
V _v_32704_periods;
V _v_32705_max;
_v_32704_periods=_args_fn32703[0];
V _default35440=_args_fn32703[1];if(_default35440.kind==V::Undefined||_default35440.kind==V::Hole)_default35440=V(60.0);
_v_32705_max=_default35440;
{
V _v_32707_top;
if(j::truth(([&]()->V{V _logical35441=j::unary("!",([&]()->V{V _receiver35442=j::builtin("Array");V _method35443=this->_literals[14];V _method=j::get(_receiver35442,_method35443);j::Args _params35444=j::Args{_v_32704_periods};return j::call(_method,_params35444,_receiver35442);})());return !j::truth(_logical35441)?j::unary("!",j::get(_v_32704_periods,this->_literals[8])):_logical35441;})())){(void)(([&]()->V{V _callee35445=this->_v_31968_fail.get();return j::call(_callee35445,j::Args{this->_literals[78]});})());
}
{for(const auto &_item35446:j::elements(_v_32704_periods)){V _v_32706_p;
_v_32706_p=_item35446;
(void)(([&]()->V{V _callee35447=this->_v_32669_checkPeriod.get();return j::call(_callee35447,j::Args{this->_literals[79],_v_32706_p});})());
}}
_v_32707_top=([&]()->V{V _receiver35449=j::builtin("Math");V _method35450=this->_literals[47];V _method=j::get(_receiver35449,_method35450);j::Args _params35451=([&](){j::Args _args35448;for(const auto &_v:j::elements(_v_32704_periods))_args35448.push_back(_v);return _args35448;})();return j::call(_method,_params35451,_receiver35449);})();
{V _v_32708_k;
_v_32708_k=V(1.0);
for(;j::truth(([&]()->V{V _logical35452=([&]()->V{V _lhs35453=_v_32708_k;V _rhs35454=V(1000000.0);return j::binary("<=",_lhs35453,_rhs35454);})();return j::truth(_logical35452)?([&]()->V{V _lhs35455=([&]()->V{V _lhs35457=_v_32708_k;V _rhs35458=_v_32707_top;return V(j::number(_lhs35457)*j::number(_rhs35458));})();V _rhs35456=([&]()->V{V _lhs35459=_v_32705_max;V _rhs35460=([&]()->V{V _lhs35461=V(1.0);V _rhs35462=V(1e-9);return j::binary("+",_lhs35461,_rhs35462);})();return V(j::number(_lhs35459)*j::number(_rhs35460));})();return j::binary("<=",_lhs35455,_rhs35456);})():_logical35452;})());(void)(j::increment(_v_32708_k,1,false))){
j::Cell _v_32709_l;
_v_32709_l.get()=([&]()->V{V _lhs35463=_v_32708_k;V _rhs35464=_v_32707_top;return V(j::number(_lhs35463)*j::number(_rhs35464));})();
if(j::truth(([&]()->V{V _receiver35486=_v_32704_periods;V _method35487=this->_literals[46];V _method=j::get(_receiver35486,_method35487);j::Args _params35488=j::Args{j::function([=](const j::Args &_args_fn32710,const V &_receiver_fn32710,const V &_self_fn32710) mutable ->V{
V _v_32711_p;
_v_32711_p=_args_fn32710[0];
return ([&]()->V{V _lhs35465=([&]()->V{V _number35476=([&]()->V{V _lhs35477=([&]()->V{V _lhs35479=_v_32709_l.get();V _rhs35480=_v_32711_p;return V(j::number(_lhs35479)/j::number(_rhs35480));})();V _rhs35478=([&]()->V{V _number35483=([&]()->V{V _lhs35484=_v_32709_l.get();V _rhs35485=_v_32711_p;return V(j::number(_lhs35484)/j::number(_rhs35485));})();return V(std::floor(j::number(_number35483)+.5));})();return V(j::number(_lhs35477)-j::number(_rhs35478));})();return V(std::fabs(j::number(_number35476)));})();V _rhs35466=V(0.000001);return j::binary("<",_lhs35465,_rhs35466);})();
return V{};
},1)};return j::call(_method,_params35488,_receiver35486);})())){return j::unary("+",([&]()->V{V _receiver35489=_v_32709_l.get();V _method35490=this->_literals[80];V _method=j::get(_receiver35489,_method35490);j::Args _params35491=j::Args{V(12.0)};return j::call(_method,_params35491,_receiver35489);})());
}

}
}
return j::builtin("undefined");

}

return V{};
},1);
this->_v_32712_twinkle.get()=j::function([=](const j::Args &_args_fn32713,const V &_receiver_fn32713,const V &_self_fn32713) mutable ->V{
V _v_32714_t;
V _v_32715_id;
V _v_32716_o;
_v_32714_t=_args_fn32713[0];
_v_32715_id=_args_fn32713[1];
V _default35492=_args_fn32713[2];if(_default35492.kind==V::Undefined||_default35492.kind==V::Hole)_default35492=([&]()->V{V _obj35493=j::object();return _obj35493;})();
_v_32716_o=_default35492;
{
V _v_32717_period;
V _v_32718_min;
V _v_32719_n;
V _v_32720_beats;
V _v_32721_at;
V _v_32722_k;
if(j::truth(([&]()->V{V _logical35494=([&]()->V{V _lhs35495=_v_32716_o;V _rhs35496=V::null();return V(j::equal(_lhs35495,_rhs35496,true));})();return !j::truth(_logical35494)?([&]()->V{V _lhs35497=j::unary("typeof",_v_32716_o);V _rhs35498=this->_literals[30];return V(!j::equal(_lhs35497,_rhs35498,true));})():_logical35494;})())){(void)(([&]()->V{V _callee35499=this->_v_31968_fail.get();return j::call(_callee35499,j::Args{this->_literals[81]});})());
}
_v_32717_period=([&]()->V{V _logical35500=j::get(_v_32716_o,this->_literals[44]);return j::nullish(_logical35500)?V(4.0):_logical35500;})();
_v_32718_min=([&]()->V{V _logical35501=j::get(_v_32716_o,this->_literals[29]);return j::nullish(_logical35501)?V(0.2):_logical35501;})();
(void)(([&]()->V{V _callee35502=this->_v_32669_checkPeriod.get();return j::call(_callee35502,j::Args{this->_literals[82],_v_32717_period});})());
if(j::truth(j::unary("!",([&]()->V{V _logical35503=([&]()->V{V _logical35504=([&]()->V{V _callee35505=this->_v_31974_finite.get();return j::call(_callee35505,j::Args{_v_32718_min});})();return j::truth(_logical35504)?([&]()->V{V _lhs35506=_v_32718_min;V _rhs35507=V(0.0);return j::binary(">=",_lhs35506,_rhs35507);})():_logical35504;})();return j::truth(_logical35503)?([&]()->V{V _lhs35508=_v_32718_min;V _rhs35509=V(1.0);return j::binary("<=",_lhs35508,_rhs35509);})():_logical35503;})()))){(void)(([&]()->V{V _callee35512=this->_v_31968_fail.get();return j::call(_callee35512,j::Args{([&]()->V{std::u16string _text35510;_text35510+=u"twinkle's min takes a brightness from 0 to 1, such as 0.2, not ";_text35510+=j::string(([&]()->V{V _callee35511=this->_v_31971_said.get();return j::call(_callee35511,j::Args{_v_32718_min});})());_text35510+=u"";return V(std::move(_text35510));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _receiver35513=j::builtin("Number");V _method35514=this->_literals[42];V _method=j::get(_receiver35513,_method35514);j::Args _params35515=j::Args{_v_32715_id};return j::call(_method,_params35515,_receiver35513);})()))){(void)(([&]()->V{V _callee35518=this->_v_31968_fail.get();return j::call(_callee35518,j::Args{([&]()->V{std::u16string _text35516;_text35516+=u"twinkle() takes a number for each thing that twinkles, such as its index, not ";_text35516+=j::string(([&]()->V{V _callee35517=this->_v_31971_said.get();return j::call(_callee35517,j::Args{_v_32715_id});})());_text35516+=u"";return V(std::move(_text35516));})()});})());
}
_v_32719_n=([&]()->V{V _lhs35519=([&]()->V{V _number35523=([&]()->V{V _lhs35524=_v_32715_id;V _rhs35525=V(1000003.0);return V(j::number(_lhs35524)*j::number(_rhs35525));})();return V(std::floor(j::number(_number35523)+.5));})();V _rhs35520=V(0.0);return V(int(j::i32(_lhs35519)|j::i32(_rhs35520)));})();
_v_32720_beats=([&]()->V{V _lhs35526=V(1.0);V _rhs35527=([&]()->V{V _number35531=([&]()->V{V _lhs35532=([&]()->V{V _callee35534=this->_v_31969_hash.get();return j::call(_callee35534,j::Args{_v_32719_n,V(81.0)});})();V _rhs35533=V(3.0);return V(j::number(_lhs35532)*j::number(_rhs35533));})();return V(std::floor(j::number(_number35531)));})();return j::binary("+",_lhs35526,_rhs35527);})();
_v_32721_at=([&]()->V{V _callee35535=this->_v_31969_hash.get();return j::call(_callee35535,j::Args{_v_32719_n,V(82.0)});})();
_v_32722_k=([&]()->V{V _lhs35536=V(0.5);V _rhs35537=([&]()->V{V _lhs35538=V(0.5);V _rhs35539=([&]()->V{V _number35547=([&]()->V{V _lhs35548=this->_v_31965_TAU.get();V _rhs35549=([&]()->V{V _lhs35550=([&]()->V{V _lhs35552=_v_32720_beats;V _rhs35553=([&]()->V{V _callee35554=this->_v_32673_place.get();return j::call(_callee35554,j::Args{_v_32714_t,_v_32717_period});})();return V(j::number(_lhs35552)*j::number(_rhs35553));})();V _rhs35551=_v_32721_at;return j::binary("+",_lhs35550,_rhs35551);})();return V(j::number(_lhs35548)*j::number(_rhs35549));})();return V(std::sin(j::number(_number35547)));})();return V(j::number(_lhs35538)*j::number(_rhs35539));})();return j::binary("+",_lhs35536,_rhs35537);})();
return ([&]()->V{V _lhs35555=_v_32718_min;V _rhs35556=([&]()->V{V _lhs35557=([&]()->V{V _lhs35559=([&]()->V{V _lhs35561=([&]()->V{V _lhs35563=V(1.0);V _rhs35564=_v_32718_min;return V(j::number(_lhs35563)-j::number(_rhs35564));})();V _rhs35562=_v_32722_k;return V(j::number(_lhs35561)*j::number(_rhs35562));})();V _rhs35560=_v_32722_k;return V(j::number(_lhs35559)*j::number(_rhs35560));})();V _rhs35558=([&]()->V{V _lhs35565=V(3.0);V _rhs35566=([&]()->V{V _lhs35567=V(2.0);V _rhs35568=_v_32722_k;return V(j::number(_lhs35567)*j::number(_rhs35568));})();return V(j::number(_lhs35565)-j::number(_rhs35566));})();return V(j::number(_lhs35557)*j::number(_rhs35558));})();return j::binary("+",_lhs35555,_rhs35556);})();

}

return V{};
},2);
this->_v_32723_scatter.get()=j::function([=](const j::Args &_args_fn32724,const V &_receiver_fn32724,const V &_self_fn32724) mutable ->V{
V _v_32725_count;
V _v_32726_area;
V _v_32727_o;
_v_32725_count=_args_fn32724[0];
_v_32726_area=_args_fn32724[1];
V _default35569=_args_fn32724[2];if(_default35569.kind==V::Undefined||_default35569.kind==V::Hole)_default35569=([&]()->V{V _obj35570=j::object();return _obj35570;})();
_v_32727_o=_default35569;
{
V _v_32728_cols;
V _v_32729_rows;
j::Cell _v_32730_x;
j::Cell _v_32731_y;
V _v_32732_seed;
V _v_32733_even;
j::Cell _v_32734_rnd;
j::Cell _v_32735_spots;
V _v_32736_add;
V _v_32745_gx;
V _v_32746_gy;
V _pattern35573=([&]()->V{V _logical35571=_v_32726_area;return j::nullish(_logical35571)?([&]()->V{V _obj35572=j::object();return _obj35572;})():_logical35571;})();
_v_32728_cols=j::get(_pattern35573,this->_literals[67]);
_v_32729_rows=j::get(_pattern35573,this->_literals[63]);
V _default35574=j::get(_pattern35573,this->_literals[64]);if(_default35574.kind==V::Undefined||_default35574.kind==V::Hole)_default35574=V(0.0);
_v_32730_x.get()=_default35574;
V _default35575=j::get(_pattern35573,this->_literals[65]);if(_default35575.kind==V::Undefined||_default35575.kind==V::Hole)_default35575=V(0.0);
_v_32731_y.get()=_default35575;
if(j::truth(j::unary("!",([&]()->V{V _logical35576=([&]()->V{V _logical35577=([&]()->V{V _logical35578=([&]()->V{V _logical35579=([&]()->V{V _logical35580=([&]()->V{V _receiver35581=j::builtin("Number");V _method35582=this->_literals[0];V _method=j::get(_receiver35581,_method35582);j::Args _params35583=j::Args{_v_32728_cols};return j::call(_method,_params35583,_receiver35581);})();return j::truth(_logical35580)?([&]()->V{V _lhs35584=_v_32728_cols;V _rhs35585=V(1.0);return j::binary(">=",_lhs35584,_rhs35585);})():_logical35580;})();return j::truth(_logical35579)?([&]()->V{V _receiver35586=j::builtin("Number");V _method35587=this->_literals[0];V _method=j::get(_receiver35586,_method35587);j::Args _params35588=j::Args{_v_32729_rows};return j::call(_method,_params35588,_receiver35586);})():_logical35579;})();return j::truth(_logical35578)?([&]()->V{V _lhs35589=_v_32729_rows;V _rhs35590=V(1.0);return j::binary(">=",_lhs35589,_rhs35590);})():_logical35578;})();return j::truth(_logical35577)?([&]()->V{V _receiver35591=j::builtin("Number");V _method35592=this->_literals[0];V _method=j::get(_receiver35591,_method35592);j::Args _params35593=j::Args{_v_32730_x.get()};return j::call(_method,_params35593,_receiver35591);})():_logical35577;})();return j::truth(_logical35576)?([&]()->V{V _receiver35594=j::builtin("Number");V _method35595=this->_literals[0];V _method=j::get(_receiver35594,_method35595);j::Args _params35596=j::Args{_v_32731_y.get()};return j::call(_method,_params35596,_receiver35594);})():_logical35576;})()))){(void)(([&]()->V{V _callee35601=this->_v_31968_fail.get();return j::call(_callee35601,j::Args{([&]()->V{std::u16string _text35597;_text35597+=u"scatter() takes an area, { cols, rows } and optionally x and y, in whole numbers, not ";_text35597+=j::string(([&]()->V{V _receiver35598=j::builtin("JSON");V _method35599=this->_literals[36];V _method=j::get(_receiver35598,_method35599);j::Args _params35600=j::Args{_v_32726_area};return j::call(_method,_params35600,_receiver35598);})());_text35597+=u"";return V(std::move(_text35597));})()});})());
}
if(j::truth(j::unary("!",([&]()->V{V _logical35602=([&]()->V{V _logical35603=([&]()->V{V _receiver35604=j::builtin("Number");V _method35605=this->_literals[0];V _method=j::get(_receiver35604,_method35605);j::Args _params35606=j::Args{_v_32725_count};return j::call(_method,_params35606,_receiver35604);})();return j::truth(_logical35603)?([&]()->V{V _lhs35607=_v_32725_count;V _rhs35608=V(0.0);return j::binary(">=",_lhs35607,_rhs35608);})():_logical35603;})();return j::truth(_logical35602)?([&]()->V{V _lhs35609=_v_32725_count;V _rhs35610=([&]()->V{V _lhs35611=_v_32728_cols;V _rhs35612=_v_32729_rows;return V(j::number(_lhs35611)*j::number(_rhs35612));})();return j::binary("<=",_lhs35609,_rhs35610);})():_logical35602;})()))){(void)(([&]()->V{V _callee35617=this->_v_31968_fail.get();return j::call(_callee35617,j::Args{([&]()->V{std::u16string _text35613;_text35613+=u"scatter() takes a whole number of spots from 0 to ";_text35613+=j::string(([&]()->V{V _lhs35614=_v_32728_cols;V _rhs35615=_v_32729_rows;return V(j::number(_lhs35614)*j::number(_rhs35615));})());_text35613+=u", one a cell of ";_text35613+=j::string(_v_32728_cols);_text35613+=u" by ";_text35613+=j::string(_v_32729_rows);_text35613+=u", not ";_text35613+=j::string(([&]()->V{V _callee35616=this->_v_31971_said.get();return j::call(_callee35616,j::Args{_v_32725_count});})());_text35613+=u"";return V(std::move(_text35613));})()});})());
}
if(j::truth(([&]()->V{V _logical35618=([&]()->V{V _lhs35619=_v_32727_o;V _rhs35620=V::null();return V(j::equal(_lhs35619,_rhs35620,true));})();return !j::truth(_logical35618)?([&]()->V{V _lhs35621=j::unary("typeof",_v_32727_o);V _rhs35622=this->_literals[30];return V(!j::equal(_lhs35621,_rhs35622,true));})():_logical35618;})())){(void)(([&]()->V{V _callee35623=this->_v_31968_fail.get();return j::call(_callee35623,j::Args{this->_literals[83]});})());
}
_v_32732_seed=([&]()->V{V _logical35624=j::get(_v_32727_o,this->_literals[1]);return j::nullish(_logical35624)?V(1.0):_logical35624;})();
_v_32733_even=([&]()->V{V _logical35625=j::get(_v_32727_o,this->_literals[84]);return j::nullish(_logical35625)?V(true):_logical35625;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver35626=j::builtin("Number");V _method35627=this->_literals[0];V _method=j::get(_receiver35626,_method35627);j::Args _params35628=j::Args{_v_32732_seed};return j::call(_method,_params35628,_receiver35626);})()))){(void)(([&]()->V{V _callee35631=this->_v_31968_fail.get();return j::call(_callee35631,j::Args{([&]()->V{std::u16string _text35629;_text35629+=u"scatter's seed takes a whole number, such as 7, not ";_text35629+=j::string(([&]()->V{V _callee35630=this->_v_31971_said.get();return j::call(_callee35630,j::Args{_v_32732_seed});})());_text35629+=u"";return V(std::move(_text35629));})()});})());
}
_v_32734_rnd.get()=([&]()->V{V _callee35632=this->_v_32015_random.get();return j::call(_callee35632,j::Args{_v_32732_seed});})();
_v_32735_spots.get()=([&]()->V{j::Args _array35633;return j::array(std::move(_array35633));})();
_v_32736_add=j::function([=](const j::Args &_args_fn32737,const V &_receiver_fn32737,const V &_self_fn32737) mutable ->V{
V _v_32738_c;
V _v_32739_r;
_v_32738_c=_args_fn32737[0];
_v_32739_r=_args_fn32737[1];
return ([&]()->V{V _receiver35640=_v_32735_spots.get();V _method35641=this->_literals[87];V _method=j::get(_receiver35640,_method35641);j::Args _params35642=j::Args{([&]()->V{V _obj35634=j::object();j::put(_obj35634,this->_literals[64],([&]()->V{V _lhs35635=_v_32730_x.get();V _rhs35636=_v_32738_c;return j::binary("+",_lhs35635,_rhs35636);})());j::put(_obj35634,this->_literals[65],([&]()->V{V _lhs35637=_v_32731_y.get();V _rhs35638=_v_32739_r;return j::binary("+",_lhs35637,_rhs35638);})());j::put(_obj35634,this->_literals[85],j::get(_v_32735_spots.get(),this->_literals[8]));j::put(_obj35634,this->_literals[86],([&]()->V{V _callee35639=_v_32734_rnd.get();return j::call(_callee35639,j::Args{});})());return _obj35634;})()};return j::call(_method,_params35642,_receiver35640);})();
return V{};
},2);
if(j::truth(([&]()->V{V _logical35643=j::unary("!",_v_32733_even);return !j::truth(_logical35643)?([&]()->V{V _lhs35644=([&]()->V{V _lhs35646=_v_32725_count;V _rhs35647=V(2.0);return V(j::number(_lhs35646)*j::number(_rhs35647));})();V _rhs35645=([&]()->V{V _lhs35648=_v_32728_cols;V _rhs35649=_v_32729_rows;return V(j::number(_lhs35648)*j::number(_rhs35649));})();return j::binary(">",_lhs35644,_rhs35645);})():_logical35643;})())){
V _v_32740_all;
_v_32740_all=([&]()->V{V _receiver35656=_v_32734_rnd.get();V _method35657=this->_literals[13];V _method=j::get(_receiver35656,_method35657);j::Args _params35658=j::Args{([&]()->V{V _receiver35653=j::builtin("Array");V _method35654=this->_literals[88];V _method=j::get(_receiver35653,_method35654);j::Args _params35655=j::Args{([&]()->V{V _obj35650=j::object();j::put(_obj35650,this->_literals[8],([&]()->V{V _lhs35651=_v_32728_cols;V _rhs35652=_v_32729_rows;return V(j::number(_lhs35651)*j::number(_rhs35652));})());return _obj35650;})(),j::function([=](const j::Args &_args_fn32741,const V &_receiver_fn32741,const V &_self_fn32741) mutable ->V{
V _v_32742__;
V _v_32743_i;
_v_32742__=_args_fn32741[0];
_v_32743_i=_args_fn32741[1];
return _v_32743_i;
return V{};
},2)};return j::call(_method,_params35655,_receiver35653);})()};return j::call(_method,_params35658,_receiver35656);})();
{V _v_32744_j;
_v_32744_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs35659=_v_32744_j;V _rhs35660=_v_32725_count;return j::binary("<",_lhs35659,_rhs35660);})());(void)(j::increment(_v_32744_j,1,false))){(void)(([&]()->V{V _callee35668=_v_32736_add;return j::call(_callee35668,j::Args{([&]()->V{V _lhs35661=j::get(_v_32740_all,_v_32744_j);V _rhs35662=_v_32728_cols;return V(std::fmod(j::number(_lhs35661),j::number(_rhs35662)));})(),([&]()->V{V _number35665=([&]()->V{V _lhs35666=j::get(_v_32740_all,_v_32744_j);V _rhs35667=_v_32728_cols;return V(j::number(_lhs35666)/j::number(_rhs35667));})();return V(std::floor(j::number(_number35665)));})()});})());
}}
return _v_32735_spots.get();

}

_v_32745_gx=([&]()->V{V _receiver35703=j::builtin("Math");V _method35704=this->_literals[47];V _method=j::get(_receiver35703,_method35704);j::Args _params35705=j::Args{V(1.0),([&]()->V{V _receiver35698=j::builtin("Math");V _method35699=this->_literals[29];V _method=j::get(_receiver35698,_method35699);j::Args _params35700=j::Args{_v_32728_cols,([&]()->V{V _number35682=([&]()->V{V _number35689=([&]()->V{V _lhs35690=([&]()->V{V _lhs35692=_v_32725_count;V _rhs35693=_v_32728_cols;return V(j::number(_lhs35692)*j::number(_rhs35693));})();V _rhs35691=([&]()->V{V _lhs35694=V(2.0);V _rhs35695=_v_32729_rows;return V(j::number(_lhs35694)*j::number(_rhs35695));})();return V(j::number(_lhs35690)/j::number(_rhs35691));})();return V(std::sqrt(j::number(_number35689)));})();return V(std::floor(j::number(_number35682)+.5));})()};return j::call(_method,_params35700,_receiver35698);})()};return j::call(_method,_params35705,_receiver35703);})();
_v_32746_gy=([&]()->V{V _number35708=([&]()->V{V _lhs35709=_v_32725_count;V _rhs35710=_v_32745_gx;return V(j::number(_lhs35709)/j::number(_rhs35710));})();return V(std::ceil(j::number(_number35708)));})();
if(j::truth(([&]()->V{V _lhs35711=_v_32746_gy;V _rhs35712=_v_32729_rows;return j::binary(">",_lhs35711,_rhs35712);})())){(void)(((_v_32746_gy=_v_32729_rows),(_v_32745_gx=([&]()->V{V _number35717=([&]()->V{V _lhs35718=_v_32725_count;V _rhs35719=_v_32729_rows;return V(j::number(_lhs35718)/j::number(_rhs35719));})();return V(std::ceil(j::number(_number35717)));})())));
}
{for(const auto &_item35720:j::elements(([&]()->V{V _receiver35721=([&]()->V{V _receiver35730=_v_32734_rnd.get();V _method35731=this->_literals[13];V _method=j::get(_receiver35730,_method35731);j::Args _params35732=j::Args{([&]()->V{V _receiver35727=j::builtin("Array");V _method35728=this->_literals[88];V _method=j::get(_receiver35727,_method35728);j::Args _params35729=j::Args{([&]()->V{V _obj35724=j::object();j::put(_obj35724,this->_literals[8],([&]()->V{V _lhs35725=_v_32745_gx;V _rhs35726=_v_32746_gy;return V(j::number(_lhs35725)*j::number(_rhs35726));})());return _obj35724;})(),j::function([=](const j::Args &_args_fn32748,const V &_receiver_fn32748,const V &_self_fn32748) mutable ->V{
V _v_32749__;
V _v_32750_i;
_v_32749__=_args_fn32748[0];
_v_32750_i=_args_fn32748[1];
return _v_32750_i;
return V{};
},2)};return j::call(_method,_params35729,_receiver35727);})()};return j::call(_method,_params35732,_receiver35730);})();V _method35722=this->_literals[89];V _method=j::get(_receiver35721,_method35722);j::Args _params35723=j::Args{V(0.0),_v_32725_count};return j::call(_method,_params35723,_receiver35721);})())){V _v_32747_b;
_v_32747_b=_item35720;
{
V _v_32751_bx;
V _v_32752_by;
V _v_32753_c0;
V _v_32754_c1;
V _v_32755_r0;
V _v_32756_r1;
_v_32751_bx=([&]()->V{V _lhs35733=_v_32747_b;V _rhs35734=_v_32745_gx;return V(std::fmod(j::number(_lhs35733),j::number(_rhs35734)));})();
_v_32752_by=([&]()->V{V _number35737=([&]()->V{V _lhs35738=_v_32747_b;V _rhs35739=_v_32745_gx;return V(j::number(_lhs35738)/j::number(_rhs35739));})();return V(std::floor(j::number(_number35737)));})();
_v_32753_c0=([&]()->V{V _number35744=([&]()->V{V _lhs35745=([&]()->V{V _lhs35747=_v_32751_bx;V _rhs35748=_v_32728_cols;return V(j::number(_lhs35747)*j::number(_rhs35748));})();V _rhs35746=_v_32745_gx;return V(j::number(_lhs35745)/j::number(_rhs35746));})();return V(std::floor(j::number(_number35744)));})();
_v_32754_c1=([&]()->V{V _number35755=([&]()->V{V _lhs35756=([&]()->V{V _lhs35758=([&]()->V{V _lhs35760=_v_32751_bx;V _rhs35761=V(1.0);return j::binary("+",_lhs35760,_rhs35761);})();V _rhs35759=_v_32728_cols;return V(j::number(_lhs35758)*j::number(_rhs35759));})();V _rhs35757=_v_32745_gx;return V(j::number(_lhs35756)/j::number(_rhs35757));})();return V(std::floor(j::number(_number35755)));})();
_v_32755_r0=([&]()->V{V _number35766=([&]()->V{V _lhs35767=([&]()->V{V _lhs35769=_v_32752_by;V _rhs35770=_v_32729_rows;return V(j::number(_lhs35769)*j::number(_rhs35770));})();V _rhs35768=_v_32746_gy;return V(j::number(_lhs35767)/j::number(_rhs35768));})();return V(std::floor(j::number(_number35766)));})();
_v_32756_r1=([&]()->V{V _number35777=([&]()->V{V _lhs35778=([&]()->V{V _lhs35780=([&]()->V{V _lhs35782=_v_32752_by;V _rhs35783=V(1.0);return j::binary("+",_lhs35782,_rhs35783);})();V _rhs35781=_v_32729_rows;return V(j::number(_lhs35780)*j::number(_rhs35781));})();V _rhs35779=_v_32746_gy;return V(j::number(_lhs35778)/j::number(_rhs35779));})();return V(std::floor(j::number(_number35777)));})();
(void)(([&]()->V{V _callee35810=_v_32736_add;return j::call(_callee35810,j::Args{([&]()->V{V _lhs35784=_v_32753_c0;V _rhs35785=([&]()->V{V _number35791=([&]()->V{V _lhs35792=([&]()->V{V _callee35794=_v_32734_rnd.get();return j::call(_callee35794,j::Args{});})();V _rhs35793=([&]()->V{V _lhs35795=_v_32754_c1;V _rhs35796=_v_32753_c0;return V(j::number(_lhs35795)-j::number(_rhs35796));})();return V(j::number(_lhs35792)*j::number(_rhs35793));})();return V(std::floor(j::number(_number35791)));})();return j::binary("+",_lhs35784,_rhs35785);})(),([&]()->V{V _lhs35797=_v_32755_r0;V _rhs35798=([&]()->V{V _number35804=([&]()->V{V _lhs35805=([&]()->V{V _callee35807=_v_32734_rnd.get();return j::call(_callee35807,j::Args{});})();V _rhs35806=([&]()->V{V _lhs35808=_v_32756_r1;V _rhs35809=_v_32755_r0;return V(j::number(_lhs35808)-j::number(_rhs35809));})();return V(j::number(_lhs35805)*j::number(_rhs35806));})();return V(std::floor(j::number(_number35804)));})();return j::binary("+",_lhs35797,_rhs35798);})()});})());

}
}}
return _v_32735_spots.get();

}

return V{};
},2);
auto &_import1543=j::module("kit/core");
this->_v_31965_TAU=_import1543.exported("TAU");
this->_v_31966_and=_import1543.exported("and");
this->_v_31967_clamp=_import1543.exported("clamp");
this->_v_31968_fail=_import1543.exported("fail");
this->_v_31969_hash=_import1543.exported("hash");
this->_v_31970_mulberry32=_import1543.exported("mulberry32");
{auto &_m=j::module("kit/core");this->exports["TAU"]=_m.exported("TAU");this->exports["bayer"]=_m.exported("bayer");this->exports["clamp"]=_m.exported("clamp");this->exports["fract"]=_m.exported("fract");this->exports["hash"]=_m.exported("hash");this->exports["lerp"]=_m.exported("lerp");this->exports["mulberry32"]=_m.exported("mulberry32");this->exports["smoothstep"]=_m.exported("smoothstep");this->exports["valueNoise"]=_m.exported("valueNoise");}
this->exports["invLerp"]=this->_v_31977_invLerp;
this->exports["remap"]=this->_v_31982_remap;
this->exports["mod"]=this->_v_31991_mod;
this->exports["wrap"]=this->_v_31996_wrap;
this->exports["pingpong"]=this->_v_32001_pingpong;
this->exports["step"]=this->_v_32005_step;
this->exports["degrees"]=this->_v_32009_degrees;
this->exports["radians"]=this->_v_32012_radians;
this->exports["random"]=this->_v_32015_random;
this->exports["noise2"]=this->_v_32216_noise2;
this->exports["noise3"]=this->_v_32221_noise3;
this->exports["noise4"]=this->_v_32227_noise4;
this->exports["valueNoise3"]=this->_v_32234_valueNoise3;
this->exports["fbm"]=this->_v_32273_fbm;
this->exports["fbm3"]=this->_v_32283_fbm3;
this->exports["ridged"]=this->_v_32301_ridged;
this->exports["loopNoise"]=this->_v_32313_loopNoise;
this->exports["worley"]=this->_v_32332_worley;
this->exports["noise"]=this->_v_32378_noise;
this->exports["ease"]=this->_v_32509_ease;
this->exports["progress"]=this->_v_32526_progress;
this->exports["tween"]=this->_v_32530_tween;
this->exports["vec2"]=this->_v_32540_vec2;
this->exports["vec3"]=this->_v_32570_vec3;
this->exports["rotate3"]=this->_v_32598_rotate3;
this->exports["rotation"]=this->_v_32609_rotation;
this->exports["project"]=this->_v_32633_project;
this->exports["camera"]=this->_v_32642_camera;
this->exports["phase"]=this->_v_32678_phase;
this->exports["oscillate"]=this->_v_32682_oscillate;
this->exports["triangle"]=this->_v_32689_triangle;
this->exports["pulse"]=this->_v_32693_pulse;
this->exports["cycle"]=this->_v_32698_cycle;
this->exports["lcm"]=this->_v_32702_lcm;
this->exports["twinkle"]=this->_v_32712_twinkle;
this->exports["scatter"]=this->_v_32723_scatter;
this->_v_31971_said.get()=j::function([=](const j::Args &_args_fn31972,const V &_receiver_fn31972,const V &_self_fn31972) mutable ->V{
V _v_31973_v;
_v_31973_v=_args_fn31972[0];
return (j::truth(([&]()->V{V _lhs35811=j::unary("typeof",_v_31973_v);V _rhs35812=this->_literals[90];return V(j::equal(_lhs35811,_rhs35812,true));})())?([&]()->V{V _receiver35813=j::builtin("JSON");V _method35814=this->_literals[36];V _method=j::get(_receiver35813,_method35814);j::Args _params35815=j::Args{_v_31973_v};return j::call(_method,_params35815,_receiver35813);})():(j::truth(([&]()->V{V _receiver35816=j::builtin("Array");V _method35817=this->_literals[14];V _method=j::get(_receiver35816,_method35817);j::Args _params35818=j::Args{_v_31973_v};return j::call(_method,_params35818,_receiver35816);})())?([&]()->V{std::u16string _text35819;_text35819+=u"[";_text35819+=j::string(([&]()->V{V _receiver35820=([&]()->V{V _receiver35823=_v_31973_v;V _method35824=this->_literals[35];V _method=j::get(_receiver35823,_method35824);j::Args _params35825=j::Args{this->_v_31971_said.get()};return j::call(_method,_params35825,_receiver35823);})();V _method35821=this->_literals[92];V _method=j::get(_receiver35820,_method35821);j::Args _params35822=j::Args{this->_literals[91]};return j::call(_method,_params35822,_receiver35820);})());_text35819+=u"]";return V(std::move(_text35819));})():([&]()->V{V _callee35826=j::builtin("String");return j::call(_callee35826,j::Args{_v_31973_v});})()));
return V{};
},1);
this->_v_31974_finite.get()=j::function([=](const j::Args &_args_fn31975,const V &_receiver_fn31975,const V &_self_fn31975) mutable ->V{
V _v_31976_v;
_v_31976_v=_args_fn31975[0];
return ([&]()->V{V _logical35827=([&]()->V{V _lhs35828=j::unary("typeof",_v_31976_v);V _rhs35829=this->_literals[38];return V(j::equal(_lhs35828,_rhs35829,true));})();return j::truth(_logical35827)?([&]()->V{V _receiver35830=j::builtin("Number");V _method35831=this->_literals[42];V _method=j::get(_receiver35830,_method35831);j::Args _params35832=j::Args{_v_31976_v};return j::call(_method,_params35832,_receiver35830);})():_logical35827;})();
return V{};
},1);
this->_v_31977_invLerp.get()=j::function([=](const j::Args &_args_fn31978,const V &_receiver_fn31978,const V &_self_fn31978) mutable ->V{
V _v_31979_a;
V _v_31980_b;
V _v_31981_v;
_v_31979_a=_args_fn31978[0];
_v_31980_b=_args_fn31978[1];
_v_31981_v=_args_fn31978[2];
return (j::truth(([&]()->V{V _lhs35833=_v_31979_a;V _rhs35834=_v_31980_b;return V(j::equal(_lhs35833,_rhs35834,true));})())?V(0.0):([&]()->V{V _lhs35835=([&]()->V{V _lhs35837=_v_31981_v;V _rhs35838=_v_31979_a;return V(j::number(_lhs35837)-j::number(_rhs35838));})();V _rhs35836=([&]()->V{V _lhs35839=_v_31980_b;V _rhs35840=_v_31979_a;return V(j::number(_lhs35839)-j::number(_rhs35840));})();return V(j::number(_lhs35835)/j::number(_rhs35836));})());
return V{};
},3);
this->_v_31996_wrap.get()=j::function([=](const j::Args &_args_fn31997,const V &_receiver_fn31997,const V &_self_fn31997) mutable ->V{
V _v_31998_v;
V _v_31999_lo;
V _v_32000_hi;
_v_31998_v=_args_fn31997[0];
_v_31999_lo=_args_fn31997[1];
_v_32000_hi=_args_fn31997[2];
return (j::truth(([&]()->V{V _lhs35841=_v_32000_hi;V _rhs35842=_v_31999_lo;return V(j::equal(_lhs35841,_rhs35842,true));})())?_v_31999_lo:(j::truth(([&]()->V{V _lhs35843=_v_32000_hi;V _rhs35844=_v_31999_lo;return j::binary(">",_lhs35843,_rhs35844);})())?([&]()->V{V _lhs35845=_v_31999_lo;V _rhs35846=([&]()->V{V _callee35851=this->_v_31991_mod.get();return j::call(_callee35851,j::Args{([&]()->V{V _lhs35847=_v_31998_v;V _rhs35848=_v_31999_lo;return V(j::number(_lhs35847)-j::number(_rhs35848));})(),([&]()->V{V _lhs35849=_v_32000_hi;V _rhs35850=_v_31999_lo;return V(j::number(_lhs35849)-j::number(_rhs35850));})()});})();return j::binary("+",_lhs35845,_rhs35846);})():([&]()->V{V _lhs35852=_v_32000_hi;V _rhs35853=([&]()->V{V _callee35858=this->_v_31991_mod.get();return j::call(_callee35858,j::Args{([&]()->V{V _lhs35854=_v_31998_v;V _rhs35855=_v_32000_hi;return V(j::number(_lhs35854)-j::number(_rhs35855));})(),([&]()->V{V _lhs35856=_v_31999_lo;V _rhs35857=_v_32000_hi;return V(j::number(_lhs35856)-j::number(_rhs35857));})()});})();return j::binary("+",_lhs35852,_rhs35853);})()));
return V{};
},3);
this->_v_32001_pingpong.get()=j::function([=](const j::Args &_args_fn32002,const V &_receiver_fn32002,const V &_self_fn32002) mutable ->V{
V _v_32003_v;
V _v_32004_length;
_v_32003_v=_args_fn32002[0];
_v_32004_length=_args_fn32002[1];
return (j::truth(([&]()->V{V _lhs35859=_v_32004_length;V _rhs35860=V(0.0);return j::binary(">",_lhs35859,_rhs35860);})())?([&]()->V{V _lhs35861=_v_32004_length;V _rhs35862=([&]()->V{V _number35868=([&]()->V{V _lhs35869=([&]()->V{V _callee35873=this->_v_31991_mod.get();return j::call(_callee35873,j::Args{_v_32003_v,([&]()->V{V _lhs35871=V(2.0);V _rhs35872=_v_32004_length;return V(j::number(_lhs35871)*j::number(_rhs35872));})()});})();V _rhs35870=_v_32004_length;return V(j::number(_lhs35869)-j::number(_rhs35870));})();return V(std::fabs(j::number(_number35868)));})();return V(j::number(_lhs35861)-j::number(_rhs35862));})():V(0.0));
return V{};
},2);
this->_v_32005_step.get()=j::function([=](const j::Args &_args_fn32006,const V &_receiver_fn32006,const V &_self_fn32006) mutable ->V{
V _v_32007_edge;
V _v_32008_v;
_v_32007_edge=_args_fn32006[0];
_v_32008_v=_args_fn32006[1];
return (j::truth(([&]()->V{V _lhs35874=_v_32008_v;V _rhs35875=_v_32007_edge;return j::binary("<",_lhs35874,_rhs35875);})())?V(0.0):V(1.0));
return V{};
},2);
this->_v_32009_degrees.get()=j::function([=](const j::Args &_args_fn32010,const V &_receiver_fn32010,const V &_self_fn32010) mutable ->V{
V _v_32011_rad;
_v_32011_rad=_args_fn32010[0];
return ([&]()->V{V _lhs35876=([&]()->V{V _lhs35878=_v_32011_rad;V _rhs35879=V(180.0);return V(j::number(_lhs35878)*j::number(_rhs35879));})();V _rhs35877=j::get(j::builtin("Math"),this->_literals[93]);return V(j::number(_lhs35876)/j::number(_rhs35877));})();
return V{};
},1);
this->_v_32012_radians.get()=j::function([=](const j::Args &_args_fn32013,const V &_receiver_fn32013,const V &_self_fn32013) mutable ->V{
V _v_32014_deg;
_v_32014_deg=_args_fn32013[0];
return ([&]()->V{V _lhs35880=([&]()->V{V _lhs35882=_v_32014_deg;V _rhs35883=j::get(j::builtin("Math"),this->_literals[93]);return V(j::number(_lhs35882)*j::number(_rhs35883));})();V _rhs35881=V(180.0);return V(j::number(_lhs35880)/j::number(_rhs35881));})();
return V{};
},1);
this->_v_32059_tables.get()=([&]()->V{j::Args _array35884;return j::array(std::move(_array35884));})();
this->_v_32074_shift.get()=j::function([=](const j::Args &_args_fn32075,const V &_receiver_fn32075,const V &_self_fn32075) mutable ->V{
V _v_32076_seed;
V _v_32077_axis;
_v_32076_seed=_args_fn32075[0];
_v_32077_axis=_args_fn32075[1];
return ([&]()->V{V _lhs35885=([&]()->V{V _callee35889=this->_v_31969_hash.get();return j::call(_callee35889,j::Args{([&]()->V{V _lhs35887=_v_32076_seed;V _rhs35888=V(8.0);return V(int(j::i32(_lhs35887)>>(j::u32(_rhs35888)&31)));})(),_v_32077_axis,V(24301.0)});})();V _rhs35886=V(256.0);return V(j::number(_lhs35885)*j::number(_rhs35886));})();
return V{};
},2);
this->_v_32078_G3.get()=([&]()->V{V _callee35891=j::builtin("Float64Array");return j::construct(_callee35891,j::Args{([&]()->V{j::Args _array35890;_array35890.push_back(V(1.0));_array35890.push_back(V(1.0));_array35890.push_back(V(0.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(1.0));_array35890.push_back(V(0.0));_array35890.push_back(V(1.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(0.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(0.0));_array35890.push_back(V(1.0));_array35890.push_back(V(0.0));_array35890.push_back(V(1.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(0.0));_array35890.push_back(V(1.0));_array35890.push_back(V(1.0));_array35890.push_back(V(0.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(0.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(0.0));_array35890.push_back(V(1.0));_array35890.push_back(V(1.0));_array35890.push_back(V(0.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(1.0));_array35890.push_back(V(0.0));_array35890.push_back(V(1.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(V(0.0));_array35890.push_back(j::unary("-",V(1.0)));_array35890.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array35890));})()});})();
this->_v_32079_G4.get()=([&]()->V{V _callee35893=j::builtin("Float64Array");return j::construct(_callee35893,j::Args{([&]()->V{j::Args _array35892;_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(1.0));_array35892.push_back(V(0.0));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(j::unary("-",V(1.0)));_array35892.push_back(V(0.0));return j::array(std::move(_array35892));})()});})();
this->_v_32080_F2.get()=([&]()->V{V _lhs35894=V(0.5);V _rhs35895=([&]()->V{V _lhs35896=([&]()->V{V _number35898=V(3.0);return V(std::sqrt(j::number(_number35898)));})();V _rhs35897=V(1.0);return V(j::number(_lhs35896)-j::number(_rhs35897));})();return V(j::number(_lhs35894)*j::number(_rhs35895));})();
this->_v_32081_H2.get()=([&]()->V{V _lhs35899=([&]()->V{V _lhs35901=V(3.0);V _rhs35902=([&]()->V{V _number35903=V(3.0);return V(std::sqrt(j::number(_number35903)));})();return V(j::number(_lhs35901)-j::number(_rhs35902));})();V _rhs35900=V(6.0);return V(j::number(_lhs35899)/j::number(_rhs35900));})();
this->_v_32082_F3.get()=([&]()->V{V _lhs35904=V(1.0);V _rhs35905=V(3.0);return V(j::number(_lhs35904)/j::number(_rhs35905));})();
this->_v_32083_H3.get()=([&]()->V{V _lhs35906=V(1.0);V _rhs35907=V(6.0);return V(j::number(_lhs35906)/j::number(_rhs35907));})();
this->_v_32084_F4.get()=([&]()->V{V _lhs35908=([&]()->V{V _lhs35910=([&]()->V{V _number35912=V(5.0);return V(std::sqrt(j::number(_number35912)));})();V _rhs35911=V(1.0);return V(j::number(_lhs35910)-j::number(_rhs35911));})();V _rhs35909=V(4.0);return V(j::number(_lhs35908)/j::number(_rhs35909));})();
this->_v_32085_H4.get()=([&]()->V{V _lhs35913=([&]()->V{V _lhs35915=V(5.0);V _rhs35916=([&]()->V{V _number35917=V(5.0);return V(std::sqrt(j::number(_number35917)));})();return V(j::number(_lhs35915)-j::number(_rhs35916));})();V _rhs35914=V(20.0);return V(j::number(_lhs35913)/j::number(_rhs35914));})();
this->_v_32086_S2.get()=V(70.0);
this->_v_32087_S3.get()=V(32.0);
this->_v_32088_S4.get()=V(27.0);
this->_v_32089_unit.get()=j::function([=](const j::Args &_args_fn32090,const V &_receiver_fn32090,const V &_self_fn32090) mutable ->V{
V _v_32091_n;
_v_32091_n=_args_fn32090[0];
return (j::truth(([&]()->V{V _lhs35918=_v_32091_n;V _rhs35919=j::unary("-",V(1.0));return j::binary("<=",_lhs35918,_rhs35919);})())?V(0.0):(j::truth(([&]()->V{V _lhs35920=_v_32091_n;V _rhs35921=V(1.0);return j::binary(">=",_lhs35920,_rhs35921);})())?V(1.0):([&]()->V{V _lhs35922=V(0.5);V _rhs35923=([&]()->V{V _lhs35924=V(0.5);V _rhs35925=_v_32091_n;return V(j::number(_lhs35924)*j::number(_rhs35925));})();return j::binary("+",_lhs35922,_rhs35923);})()));
return V{};
},1);
this->_v_32092_dot4.get()=j::function([=](const j::Args &_args_fn32093,const V &_receiver_fn32093,const V &_self_fn32093) mutable ->V{
V _v_32094_g;
V _v_32095_a;
V _v_32096_b;
V _v_32097_c;
V _v_32098_d;
_v_32094_g=_args_fn32093[0];
_v_32095_a=_args_fn32093[1];
_v_32096_b=_args_fn32093[2];
_v_32097_c=_args_fn32093[3];
_v_32098_d=_args_fn32093[4];
return ([&]()->V{V _lhs35926=([&]()->V{V _lhs35928=([&]()->V{V _lhs35930=([&]()->V{V _lhs35932=j::get(this->_v_32079_G4.get(),_v_32094_g);V _rhs35933=_v_32095_a;return V(j::number(_lhs35932)*j::number(_rhs35933));})();V _rhs35931=([&]()->V{V _lhs35934=j::get(this->_v_32079_G4.get(),([&]()->V{V _lhs35936=_v_32094_g;V _rhs35937=V(1.0);return j::binary("+",_lhs35936,_rhs35937);})());V _rhs35935=_v_32096_b;return V(j::number(_lhs35934)*j::number(_rhs35935));})();return j::binary("+",_lhs35930,_rhs35931);})();V _rhs35929=([&]()->V{V _lhs35938=j::get(this->_v_32079_G4.get(),([&]()->V{V _lhs35940=_v_32094_g;V _rhs35941=V(2.0);return j::binary("+",_lhs35940,_rhs35941);})());V _rhs35939=_v_32097_c;return V(j::number(_lhs35938)*j::number(_rhs35939));})();return j::binary("+",_lhs35928,_rhs35929);})();V _rhs35927=([&]()->V{V _lhs35942=j::get(this->_v_32079_G4.get(),([&]()->V{V _lhs35944=_v_32094_g;V _rhs35945=V(3.0);return j::binary("+",_lhs35944,_rhs35945);})());V _rhs35943=_v_32098_d;return V(j::number(_lhs35942)*j::number(_rhs35943));})();return j::binary("+",_lhs35926,_rhs35927);})();
return V{};
},5);
this->_v_32216_noise2.get()=j::function([=](const j::Args &_args_fn32217,const V &_receiver_fn32217,const V &_self_fn32217) mutable ->V{
V _v_32218_x;
V _v_32219_y;
V _v_32220_seed;
_v_32218_x=_args_fn32217[0];
_v_32219_y=_args_fn32217[1];
V _default35946=_args_fn32217[2];if(_default35946.kind==V::Undefined||_default35946.kind==V::Hole)_default35946=V(0.0);
_v_32220_seed=_default35946;
return ([&]()->V{V _callee35948=this->_v_32089_unit.get();return j::call(_callee35948,j::Args{([&]()->V{V _callee35947=this->_v_32099_simplex2.get();return j::call(_callee35947,j::Args{_v_32218_x,_v_32219_y,_v_32220_seed});})()});})();
return V{};
},2);
this->_v_32221_noise3.get()=j::function([=](const j::Args &_args_fn32222,const V &_receiver_fn32222,const V &_self_fn32222) mutable ->V{
V _v_32223_x;
V _v_32224_y;
V _v_32225_z;
V _v_32226_seed;
_v_32223_x=_args_fn32222[0];
_v_32224_y=_args_fn32222[1];
_v_32225_z=_args_fn32222[2];
V _default35949=_args_fn32222[3];if(_default35949.kind==V::Undefined||_default35949.kind==V::Hole)_default35949=V(0.0);
_v_32226_seed=_default35949;
return ([&]()->V{V _callee35951=this->_v_32089_unit.get();return j::call(_callee35951,j::Args{([&]()->V{V _callee35950=this->_v_32123_simplex3.get();return j::call(_callee35950,j::Args{_v_32223_x,_v_32224_y,_v_32225_z,_v_32226_seed});})()});})();
return V{};
},3);
this->_v_32227_noise4.get()=j::function([=](const j::Args &_args_fn32228,const V &_receiver_fn32228,const V &_self_fn32228) mutable ->V{
V _v_32229_x;
V _v_32230_y;
V _v_32231_z;
V _v_32232_w;
V _v_32233_seed;
_v_32229_x=_args_fn32228[0];
_v_32230_y=_args_fn32228[1];
_v_32231_z=_args_fn32228[2];
_v_32232_w=_args_fn32228[3];
V _default35952=_args_fn32228[4];if(_default35952.kind==V::Undefined||_default35952.kind==V::Hole)_default35952=V(0.0);
_v_32233_seed=_default35952;
return ([&]()->V{V _callee35954=this->_v_32089_unit.get();return j::call(_callee35954,j::Args{([&]()->V{V _callee35953=this->_v_32160_simplex4.get();return j::call(_callee35953,j::Args{_v_32229_x,_v_32230_y,_v_32231_z,_v_32232_w,_v_32233_seed});})()});})();
return V{};
},4);
this->_v_32259_OFF.get()=([&]()->V{V _receiver35969=j::builtin("Array");V _method35970=this->_literals[88];V _method=j::get(_receiver35969,_method35970);j::Args _params35971=j::Args{([&]()->V{V _obj35955=j::object();j::put(_obj35955,this->_literals[8],V(16.0));return _obj35955;})(),j::function([=](const j::Args &_args_fn32260,const V &_receiver_fn32260,const V &_self_fn32260) mutable ->V{
V _v_32261__;
V _v_32262_i;
_v_32261__=_args_fn32260[0];
_v_32262_i=_args_fn32260[1];
return ([&]()->V{j::Args _array35956;_array35956.push_back(([&]()->V{V _lhs35957=([&]()->V{V _lhs35959=([&]()->V{V _lhs35961=_v_32262_i;V _rhs35962=V(0.6180339887);return V(j::number(_lhs35961)*j::number(_rhs35962));})();V _rhs35960=V(1.0);return V(std::fmod(j::number(_lhs35959),j::number(_rhs35960)));})();V _rhs35958=V(97.3);return V(j::number(_lhs35957)*j::number(_rhs35958));})());_array35956.push_back(([&]()->V{V _lhs35963=([&]()->V{V _lhs35965=([&]()->V{V _lhs35967=_v_32262_i;V _rhs35968=V(0.7548776662);return V(j::number(_lhs35967)*j::number(_rhs35968));})();V _rhs35966=V(1.0);return V(std::fmod(j::number(_lhs35965),j::number(_rhs35966)));})();V _rhs35964=V(89.1);return V(j::number(_lhs35963)*j::number(_rhs35964));})());return j::array(std::move(_array35956));})();
return V{};
},2)};return j::call(_method,_params35971,_receiver35969);})();
this->_v_32263_octN.get()=V(4.0);
this->_v_32264_octLac.get()=V(2.0);
this->_v_32265_octGain.get()=V(0.5);
this->_v_32266_octSeed.get()=V(0.0);
this->_v_32271_SPREAD.get()=V(1.45);
this->_v_32272_WIDEN4.get()=V(1.35);
this->_v_32294_crest.get()=j::function([=](const j::Args &_args_fn32295,const V &_receiver_fn32295,const V &_self_fn32295) mutable ->V{
V _v_32296_n;
_v_32296_n=_args_fn32295[0];
{
V _v_32297_r;
_v_32297_r=([&]()->V{V _lhs35972=V(1.0);V _rhs35973=(j::truth(([&]()->V{V _lhs35974=_v_32296_n;V _rhs35975=V(0.0);return j::binary("<",_lhs35974,_rhs35975);})())?j::unary("-",_v_32296_n):_v_32296_n);return V(j::number(_lhs35972)-j::number(_rhs35973));})();
return (j::truth(([&]()->V{V _lhs35976=_v_32297_r;V _rhs35977=V(0.0);return j::binary("<",_lhs35976,_rhs35977);})())?V(0.0):([&]()->V{V _lhs35978=_v_32297_r;V _rhs35979=_v_32297_r;return V(j::number(_lhs35978)*j::number(_rhs35979));})());

}

return V{};
},1);
this->_v_32298_weigh.get()=j::function([=](const j::Args &_args_fn32299,const V &_receiver_fn32299,const V &_self_fn32299) mutable ->V{
V _v_32300_r;
_v_32300_r=_args_fn32299[0];
return (j::truth(([&]()->V{V _lhs35980=_v_32300_r;V _rhs35981=V(0.5);return j::binary(">",_lhs35980,_rhs35981);})())?V(1.0):([&]()->V{V _lhs35982=V(2.0);V _rhs35983=_v_32300_r;return V(j::number(_lhs35982)*j::number(_rhs35983));})());
return V{};
},1);
this->_v_32353_KINDS.get()=([&]()->V{j::Args _array35984;_array35984.push_back(this->_literals[33]);_array35984.push_back(this->_literals[27]);_array35984.push_back(this->_literals[39]);return j::array(std::move(_array35984));})();
this->_v_32377_CELLS.get()=V(0.83);
this->_v_32444_B1.get()=V(1.70158);
this->_v_32445_B2.get()=([&]()->V{V _lhs35985=this->_v_32444_B1.get();V _rhs35986=V(1.525);return V(j::number(_lhs35985)*j::number(_rhs35986));})();
this->_v_32446_B3.get()=([&]()->V{V _lhs35987=this->_v_32444_B1.get();V _rhs35988=V(1.0);return j::binary("+",_lhs35987,_rhs35988);})();
this->_v_32447_E4.get()=([&]()->V{V _lhs35989=this->_v_31965_TAU.get();V _rhs35990=V(3.0);return V(j::number(_lhs35989)/j::number(_rhs35990));})();
this->_v_32448_E5.get()=([&]()->V{V _lhs35991=this->_v_31965_TAU.get();V _rhs35992=V(4.5);return V(j::number(_lhs35991)/j::number(_rhs35992));})();
this->_v_32449_bounce.get()=j::function([=](const j::Args &_args_fn32450,const V &_receiver_fn32450,const V &_self_fn32450) mutable ->V{
V _v_32451_k;
_v_32451_k=_args_fn32450[0];
{
V _v_32452_n;
V _v_32453_d;
_v_32452_n=V(7.5625);
_v_32453_d=V(2.75);
if(j::truth(([&]()->V{V _lhs35993=_v_32451_k;V _rhs35994=([&]()->V{V _lhs35995=V(1.0);V _rhs35996=_v_32453_d;return V(j::number(_lhs35995)/j::number(_rhs35996));})();return j::binary("<",_lhs35993,_rhs35994);})())){return ([&]()->V{V _lhs35997=([&]()->V{V _lhs35999=_v_32452_n;V _rhs36000=_v_32451_k;return V(j::number(_lhs35999)*j::number(_rhs36000));})();V _rhs35998=_v_32451_k;return V(j::number(_lhs35997)*j::number(_rhs35998));})();
}
if(j::truth(([&]()->V{V _lhs36001=_v_32451_k;V _rhs36002=([&]()->V{V _lhs36003=V(2.0);V _rhs36004=_v_32453_d;return V(j::number(_lhs36003)/j::number(_rhs36004));})();return j::binary("<",_lhs36001,_rhs36002);})())){return ([&]()->V{V _lhs36005=([&]()->V{V _lhs36007=([&]()->V{V _lhs36009=_v_32452_n;V _rhs36010=(_v_32451_k=j::binary("-",_v_32451_k,([&]()->V{V _lhs36012=V(1.5);V _rhs36013=_v_32453_d;return V(j::number(_lhs36012)/j::number(_rhs36013));})()));return V(j::number(_lhs36009)*j::number(_rhs36010));})();V _rhs36008=_v_32451_k;return V(j::number(_lhs36007)*j::number(_rhs36008));})();V _rhs36006=V(0.75);return j::binary("+",_lhs36005,_rhs36006);})();
}
if(j::truth(([&]()->V{V _lhs36014=_v_32451_k;V _rhs36015=([&]()->V{V _lhs36016=V(2.5);V _rhs36017=_v_32453_d;return V(j::number(_lhs36016)/j::number(_rhs36017));})();return j::binary("<",_lhs36014,_rhs36015);})())){return ([&]()->V{V _lhs36018=([&]()->V{V _lhs36020=([&]()->V{V _lhs36022=_v_32452_n;V _rhs36023=(_v_32451_k=j::binary("-",_v_32451_k,([&]()->V{V _lhs36025=V(2.25);V _rhs36026=_v_32453_d;return V(j::number(_lhs36025)/j::number(_rhs36026));})()));return V(j::number(_lhs36022)*j::number(_rhs36023));})();V _rhs36021=_v_32451_k;return V(j::number(_lhs36020)*j::number(_rhs36021));})();V _rhs36019=V(0.9375);return j::binary("+",_lhs36018,_rhs36019);})();
}
return ([&]()->V{V _lhs36027=([&]()->V{V _lhs36029=([&]()->V{V _lhs36031=_v_32452_n;V _rhs36032=(_v_32451_k=j::binary("-",_v_32451_k,([&]()->V{V _lhs36034=V(2.625);V _rhs36035=_v_32453_d;return V(j::number(_lhs36034)/j::number(_rhs36035));})()));return V(j::number(_lhs36031)*j::number(_rhs36032));})();V _rhs36030=_v_32451_k;return V(j::number(_lhs36029)*j::number(_rhs36030));})();V _rhs36028=V(0.984375);return j::binary("+",_lhs36027,_rhs36028);})();

}

return V{};
},1);
this->_v_32454_curves.get()=([&]()->V{V _obj36036=j::object();j::put(_obj36036,this->_literals[94],j::function([=](const j::Args &_args_fn32455,const V &_receiver_fn32455,const V &_self_fn32455) mutable ->V{
V _v_32456_k;
_v_32456_k=_args_fn32455[0];
return _v_32456_k;
return V{};
},1));j::put(_obj36036,this->_literals[95],j::function([=](const j::Args &_args_fn32457,const V &_receiver_fn32457,const V &_self_fn32457) mutable ->V{
V _v_32458_k;
_v_32458_k=_args_fn32457[0];
return ([&]()->V{V _lhs36037=_v_32458_k;V _rhs36038=_v_32458_k;return V(j::number(_lhs36037)*j::number(_rhs36038));})();
return V{};
},1));j::put(_obj36036,this->_literals[96],j::function([=](const j::Args &_args_fn32459,const V &_receiver_fn32459,const V &_self_fn32459) mutable ->V{
V _v_32460_k;
_v_32460_k=_args_fn32459[0];
return ([&]()->V{V _lhs36039=V(1.0);V _rhs36040=([&]()->V{V _lhs36041=([&]()->V{V _lhs36043=V(1.0);V _rhs36044=_v_32460_k;return V(j::number(_lhs36043)-j::number(_rhs36044));})();V _rhs36042=([&]()->V{V _lhs36045=V(1.0);V _rhs36046=_v_32460_k;return V(j::number(_lhs36045)-j::number(_rhs36046));})();return V(j::number(_lhs36041)*j::number(_rhs36042));})();return V(j::number(_lhs36039)-j::number(_rhs36040));})();
return V{};
},1));j::put(_obj36036,this->_literals[97],j::function([=](const j::Args &_args_fn32461,const V &_receiver_fn32461,const V &_self_fn32461) mutable ->V{
V _v_32462_k;
_v_32462_k=_args_fn32461[0];
return (j::truth(([&]()->V{V _lhs36047=_v_32462_k;V _rhs36048=V(0.5);return j::binary("<",_lhs36047,_rhs36048);})())?([&]()->V{V _lhs36049=([&]()->V{V _lhs36051=V(2.0);V _rhs36052=_v_32462_k;return V(j::number(_lhs36051)*j::number(_rhs36052));})();V _rhs36050=_v_32462_k;return V(j::number(_lhs36049)*j::number(_rhs36050));})():([&]()->V{V _lhs36053=V(1.0);V _rhs36054=([&]()->V{V _lhs36055=([&]()->V{V _lhs36057=([&]()->V{V _lhs36059=([&]()->V{V _lhs36061=j::unary("-",V(2.0));V _rhs36062=_v_32462_k;return V(j::number(_lhs36061)*j::number(_rhs36062));})();V _rhs36060=V(2.0);return j::binary("+",_lhs36059,_rhs36060);})();V _rhs36058=V(2.0);return V(std::pow(j::number(_lhs36057),j::number(_rhs36058)));})();V _rhs36056=V(2.0);return V(j::number(_lhs36055)/j::number(_rhs36056));})();return V(j::number(_lhs36053)-j::number(_rhs36054));})());
return V{};
},1));j::put(_obj36036,this->_literals[98],j::function([=](const j::Args &_args_fn32463,const V &_receiver_fn32463,const V &_self_fn32463) mutable ->V{
V _v_32464_k;
_v_32464_k=_args_fn32463[0];
return ([&]()->V{V _lhs36063=_v_32464_k;V _rhs36064=V(3.0);return V(std::pow(j::number(_lhs36063),j::number(_rhs36064)));})();
return V{};
},1));j::put(_obj36036,this->_literals[99],j::function([=](const j::Args &_args_fn32465,const V &_receiver_fn32465,const V &_self_fn32465) mutable ->V{
V _v_32466_k;
_v_32466_k=_args_fn32465[0];
return ([&]()->V{V _lhs36065=V(1.0);V _rhs36066=([&]()->V{V _lhs36067=([&]()->V{V _lhs36069=V(1.0);V _rhs36070=_v_32466_k;return V(j::number(_lhs36069)-j::number(_rhs36070));})();V _rhs36068=V(3.0);return V(std::pow(j::number(_lhs36067),j::number(_rhs36068)));})();return V(j::number(_lhs36065)-j::number(_rhs36066));})();
return V{};
},1));j::put(_obj36036,this->_literals[100],j::function([=](const j::Args &_args_fn32467,const V &_receiver_fn32467,const V &_self_fn32467) mutable ->V{
V _v_32468_k;
_v_32468_k=_args_fn32467[0];
return (j::truth(([&]()->V{V _lhs36071=_v_32468_k;V _rhs36072=V(0.5);return j::binary("<",_lhs36071,_rhs36072);})())?([&]()->V{V _lhs36073=V(4.0);V _rhs36074=([&]()->V{V _lhs36075=_v_32468_k;V _rhs36076=V(3.0);return V(std::pow(j::number(_lhs36075),j::number(_rhs36076)));})();return V(j::number(_lhs36073)*j::number(_rhs36074));})():([&]()->V{V _lhs36077=V(1.0);V _rhs36078=([&]()->V{V _lhs36079=([&]()->V{V _lhs36081=([&]()->V{V _lhs36083=([&]()->V{V _lhs36085=j::unary("-",V(2.0));V _rhs36086=_v_32468_k;return V(j::number(_lhs36085)*j::number(_rhs36086));})();V _rhs36084=V(2.0);return j::binary("+",_lhs36083,_rhs36084);})();V _rhs36082=V(3.0);return V(std::pow(j::number(_lhs36081),j::number(_rhs36082)));})();V _rhs36080=V(2.0);return V(j::number(_lhs36079)/j::number(_rhs36080));})();return V(j::number(_lhs36077)-j::number(_rhs36078));})());
return V{};
},1));j::put(_obj36036,this->_literals[101],j::function([=](const j::Args &_args_fn32469,const V &_receiver_fn32469,const V &_self_fn32469) mutable ->V{
V _v_32470_k;
_v_32470_k=_args_fn32469[0];
return ([&]()->V{V _lhs36087=_v_32470_k;V _rhs36088=V(4.0);return V(std::pow(j::number(_lhs36087),j::number(_rhs36088)));})();
return V{};
},1));j::put(_obj36036,this->_literals[102],j::function([=](const j::Args &_args_fn32471,const V &_receiver_fn32471,const V &_self_fn32471) mutable ->V{
V _v_32472_k;
_v_32472_k=_args_fn32471[0];
return ([&]()->V{V _lhs36089=V(1.0);V _rhs36090=([&]()->V{V _lhs36091=([&]()->V{V _lhs36093=V(1.0);V _rhs36094=_v_32472_k;return V(j::number(_lhs36093)-j::number(_rhs36094));})();V _rhs36092=V(4.0);return V(std::pow(j::number(_lhs36091),j::number(_rhs36092)));})();return V(j::number(_lhs36089)-j::number(_rhs36090));})();
return V{};
},1));j::put(_obj36036,this->_literals[103],j::function([=](const j::Args &_args_fn32473,const V &_receiver_fn32473,const V &_self_fn32473) mutable ->V{
V _v_32474_k;
_v_32474_k=_args_fn32473[0];
return (j::truth(([&]()->V{V _lhs36095=_v_32474_k;V _rhs36096=V(0.5);return j::binary("<",_lhs36095,_rhs36096);})())?([&]()->V{V _lhs36097=V(8.0);V _rhs36098=([&]()->V{V _lhs36099=_v_32474_k;V _rhs36100=V(4.0);return V(std::pow(j::number(_lhs36099),j::number(_rhs36100)));})();return V(j::number(_lhs36097)*j::number(_rhs36098));})():([&]()->V{V _lhs36101=V(1.0);V _rhs36102=([&]()->V{V _lhs36103=([&]()->V{V _lhs36105=([&]()->V{V _lhs36107=([&]()->V{V _lhs36109=j::unary("-",V(2.0));V _rhs36110=_v_32474_k;return V(j::number(_lhs36109)*j::number(_rhs36110));})();V _rhs36108=V(2.0);return j::binary("+",_lhs36107,_rhs36108);})();V _rhs36106=V(4.0);return V(std::pow(j::number(_lhs36105),j::number(_rhs36106)));})();V _rhs36104=V(2.0);return V(j::number(_lhs36103)/j::number(_rhs36104));})();return V(j::number(_lhs36101)-j::number(_rhs36102));})());
return V{};
},1));j::put(_obj36036,this->_literals[104],j::function([=](const j::Args &_args_fn32475,const V &_receiver_fn32475,const V &_self_fn32475) mutable ->V{
V _v_32476_k;
_v_32476_k=_args_fn32475[0];
return ([&]()->V{V _lhs36111=V(1.0);V _rhs36112=([&]()->V{V _number36117=([&]()->V{V _lhs36118=([&]()->V{V _lhs36120=_v_32476_k;V _rhs36121=j::get(j::builtin("Math"),this->_literals[93]);return V(j::number(_lhs36120)*j::number(_rhs36121));})();V _rhs36119=V(2.0);return V(j::number(_lhs36118)/j::number(_rhs36119));})();return V(std::cos(j::number(_number36117)));})();return V(j::number(_lhs36111)-j::number(_rhs36112));})();
return V{};
},1));j::put(_obj36036,this->_literals[105],j::function([=](const j::Args &_args_fn32477,const V &_receiver_fn32477,const V &_self_fn32477) mutable ->V{
V _v_32478_k;
_v_32478_k=_args_fn32477[0];
return ([&]()->V{V _number36126=([&]()->V{V _lhs36127=([&]()->V{V _lhs36129=_v_32478_k;V _rhs36130=j::get(j::builtin("Math"),this->_literals[93]);return V(j::number(_lhs36129)*j::number(_rhs36130));})();V _rhs36128=V(2.0);return V(j::number(_lhs36127)/j::number(_rhs36128));})();return V(std::sin(j::number(_number36126)));})();
return V{};
},1));j::put(_obj36036,this->_literals[54],j::function([=](const j::Args &_args_fn32479,const V &_receiver_fn32479,const V &_self_fn32479) mutable ->V{
V _v_32480_k;
_v_32480_k=_args_fn32479[0];
return ([&]()->V{V _lhs36131=j::unary("-",([&]()->V{V _lhs36133=([&]()->V{V _number36137=([&]()->V{V _lhs36138=j::get(j::builtin("Math"),this->_literals[93]);V _rhs36139=_v_32480_k;return V(j::number(_lhs36138)*j::number(_rhs36139));})();return V(std::cos(j::number(_number36137)));})();V _rhs36134=V(1.0);return V(j::number(_lhs36133)-j::number(_rhs36134));})());V _rhs36132=V(2.0);return V(j::number(_lhs36131)/j::number(_rhs36132));})();
return V{};
},1));j::put(_obj36036,this->_literals[106],j::function([=](const j::Args &_args_fn32481,const V &_receiver_fn32481,const V &_self_fn32481) mutable ->V{
V _v_32482_k;
_v_32482_k=_args_fn32481[0];
return ([&]()->V{V _lhs36140=V(2.0);V _rhs36141=([&]()->V{V _lhs36142=([&]()->V{V _lhs36144=V(10.0);V _rhs36145=_v_32482_k;return V(j::number(_lhs36144)*j::number(_rhs36145));})();V _rhs36143=V(10.0);return V(j::number(_lhs36142)-j::number(_rhs36143));})();return V(std::pow(j::number(_lhs36140),j::number(_rhs36141)));})();
return V{};
},1));j::put(_obj36036,this->_literals[107],j::function([=](const j::Args &_args_fn32483,const V &_receiver_fn32483,const V &_self_fn32483) mutable ->V{
V _v_32484_k;
_v_32484_k=_args_fn32483[0];
return ([&]()->V{V _lhs36146=V(1.0);V _rhs36147=([&]()->V{V _lhs36148=V(2.0);V _rhs36149=([&]()->V{V _lhs36150=j::unary("-",V(10.0));V _rhs36151=_v_32484_k;return V(j::number(_lhs36150)*j::number(_rhs36151));})();return V(std::pow(j::number(_lhs36148),j::number(_rhs36149)));})();return V(j::number(_lhs36146)-j::number(_rhs36147));})();
return V{};
},1));j::put(_obj36036,this->_literals[108],j::function([=](const j::Args &_args_fn32485,const V &_receiver_fn32485,const V &_self_fn32485) mutable ->V{
V _v_32486_k;
_v_32486_k=_args_fn32485[0];
return (j::truth(([&]()->V{V _lhs36152=_v_32486_k;V _rhs36153=V(0.5);return j::binary("<",_lhs36152,_rhs36153);})())?([&]()->V{V _lhs36154=([&]()->V{V _lhs36156=V(2.0);V _rhs36157=([&]()->V{V _lhs36158=([&]()->V{V _lhs36160=V(20.0);V _rhs36161=_v_32486_k;return V(j::number(_lhs36160)*j::number(_rhs36161));})();V _rhs36159=V(10.0);return V(j::number(_lhs36158)-j::number(_rhs36159));})();return V(std::pow(j::number(_lhs36156),j::number(_rhs36157)));})();V _rhs36155=V(2.0);return V(j::number(_lhs36154)/j::number(_rhs36155));})():([&]()->V{V _lhs36162=([&]()->V{V _lhs36164=V(2.0);V _rhs36165=([&]()->V{V _lhs36166=V(2.0);V _rhs36167=([&]()->V{V _lhs36168=([&]()->V{V _lhs36170=j::unary("-",V(20.0));V _rhs36171=_v_32486_k;return V(j::number(_lhs36170)*j::number(_rhs36171));})();V _rhs36169=V(10.0);return j::binary("+",_lhs36168,_rhs36169);})();return V(std::pow(j::number(_lhs36166),j::number(_rhs36167)));})();return V(j::number(_lhs36164)-j::number(_rhs36165));})();V _rhs36163=V(2.0);return V(j::number(_lhs36162)/j::number(_rhs36163));})());
return V{};
},1));j::put(_obj36036,this->_literals[109],j::function([=](const j::Args &_args_fn32487,const V &_receiver_fn32487,const V &_self_fn32487) mutable ->V{
V _v_32488_k;
_v_32488_k=_args_fn32487[0];
return ([&]()->V{V _lhs36172=V(1.0);V _rhs36173=([&]()->V{V _number36178=([&]()->V{V _lhs36179=V(1.0);V _rhs36180=([&]()->V{V _lhs36181=_v_32488_k;V _rhs36182=_v_32488_k;return V(j::number(_lhs36181)*j::number(_rhs36182));})();return V(j::number(_lhs36179)-j::number(_rhs36180));})();return V(std::sqrt(j::number(_number36178)));})();return V(j::number(_lhs36172)-j::number(_rhs36173));})();
return V{};
},1));j::put(_obj36036,this->_literals[110],j::function([=](const j::Args &_args_fn32489,const V &_receiver_fn32489,const V &_self_fn32489) mutable ->V{
V _v_32490_k;
_v_32490_k=_args_fn32489[0];
return ([&]()->V{V _number36189=([&]()->V{V _lhs36190=V(1.0);V _rhs36191=([&]()->V{V _lhs36192=([&]()->V{V _lhs36194=_v_32490_k;V _rhs36195=V(1.0);return V(j::number(_lhs36194)-j::number(_rhs36195));})();V _rhs36193=V(2.0);return V(std::pow(j::number(_lhs36192),j::number(_rhs36193)));})();return V(j::number(_lhs36190)-j::number(_rhs36191));})();return V(std::sqrt(j::number(_number36189)));})();
return V{};
},1));j::put(_obj36036,this->_literals[111],j::function([=](const j::Args &_args_fn32491,const V &_receiver_fn32491,const V &_self_fn32491) mutable ->V{
V _v_32492_k;
_v_32492_k=_args_fn32491[0];
return (j::truth(([&]()->V{V _lhs36196=_v_32492_k;V _rhs36197=V(0.5);return j::binary("<",_lhs36196,_rhs36197);})())?([&]()->V{V _lhs36198=([&]()->V{V _lhs36200=V(1.0);V _rhs36201=([&]()->V{V _number36208=([&]()->V{V _lhs36209=V(1.0);V _rhs36210=([&]()->V{V _lhs36211=([&]()->V{V _lhs36213=V(2.0);V _rhs36214=_v_32492_k;return V(j::number(_lhs36213)*j::number(_rhs36214));})();V _rhs36212=V(2.0);return V(std::pow(j::number(_lhs36211),j::number(_rhs36212)));})();return V(j::number(_lhs36209)-j::number(_rhs36210));})();return V(std::sqrt(j::number(_number36208)));})();return V(j::number(_lhs36200)-j::number(_rhs36201));})();V _rhs36199=V(2.0);return V(j::number(_lhs36198)/j::number(_rhs36199));})():([&]()->V{V _lhs36215=([&]()->V{V _lhs36217=([&]()->V{V _number36227=([&]()->V{V _lhs36228=V(1.0);V _rhs36229=([&]()->V{V _lhs36230=([&]()->V{V _lhs36232=([&]()->V{V _lhs36234=j::unary("-",V(2.0));V _rhs36235=_v_32492_k;return V(j::number(_lhs36234)*j::number(_rhs36235));})();V _rhs36233=V(2.0);return j::binary("+",_lhs36232,_rhs36233);})();V _rhs36231=V(2.0);return V(std::pow(j::number(_lhs36230),j::number(_rhs36231)));})();return V(j::number(_lhs36228)-j::number(_rhs36229));})();return V(std::sqrt(j::number(_number36227)));})();V _rhs36218=V(1.0);return j::binary("+",_lhs36217,_rhs36218);})();V _rhs36216=V(2.0);return V(j::number(_lhs36215)/j::number(_rhs36216));})());
return V{};
},1));j::put(_obj36036,this->_literals[112],j::function([=](const j::Args &_args_fn32493,const V &_receiver_fn32493,const V &_self_fn32493) mutable ->V{
V _v_32494_k;
_v_32494_k=_args_fn32493[0];
return ([&]()->V{V _lhs36236=([&]()->V{V _lhs36238=this->_v_32446_B3.get();V _rhs36239=([&]()->V{V _lhs36240=_v_32494_k;V _rhs36241=V(3.0);return V(std::pow(j::number(_lhs36240),j::number(_rhs36241)));})();return V(j::number(_lhs36238)*j::number(_rhs36239));})();V _rhs36237=([&]()->V{V _lhs36242=([&]()->V{V _lhs36244=this->_v_32444_B1.get();V _rhs36245=_v_32494_k;return V(j::number(_lhs36244)*j::number(_rhs36245));})();V _rhs36243=_v_32494_k;return V(j::number(_lhs36242)*j::number(_rhs36243));})();return V(j::number(_lhs36236)-j::number(_rhs36237));})();
return V{};
},1));j::put(_obj36036,this->_literals[113],j::function([=](const j::Args &_args_fn32495,const V &_receiver_fn32495,const V &_self_fn32495) mutable ->V{
V _v_32496_k;
_v_32496_k=_args_fn32495[0];
return ([&]()->V{V _lhs36246=([&]()->V{V _lhs36248=V(1.0);V _rhs36249=([&]()->V{V _lhs36250=this->_v_32446_B3.get();V _rhs36251=([&]()->V{V _lhs36252=([&]()->V{V _lhs36254=_v_32496_k;V _rhs36255=V(1.0);return V(j::number(_lhs36254)-j::number(_rhs36255));})();V _rhs36253=V(3.0);return V(std::pow(j::number(_lhs36252),j::number(_rhs36253)));})();return V(j::number(_lhs36250)*j::number(_rhs36251));})();return j::binary("+",_lhs36248,_rhs36249);})();V _rhs36247=([&]()->V{V _lhs36256=this->_v_32444_B1.get();V _rhs36257=([&]()->V{V _lhs36258=([&]()->V{V _lhs36260=_v_32496_k;V _rhs36261=V(1.0);return V(j::number(_lhs36260)-j::number(_rhs36261));})();V _rhs36259=V(2.0);return V(std::pow(j::number(_lhs36258),j::number(_rhs36259)));})();return V(j::number(_lhs36256)*j::number(_rhs36257));})();return j::binary("+",_lhs36246,_rhs36247);})();
return V{};
},1));j::put(_obj36036,this->_literals[114],j::function([=](const j::Args &_args_fn32497,const V &_receiver_fn32497,const V &_self_fn32497) mutable ->V{
V _v_32498_k;
_v_32498_k=_args_fn32497[0];
return (j::truth(([&]()->V{V _lhs36262=_v_32498_k;V _rhs36263=V(0.5);return j::binary("<",_lhs36262,_rhs36263);})())?([&]()->V{V _lhs36264=([&]()->V{V _lhs36266=([&]()->V{V _lhs36268=([&]()->V{V _lhs36270=V(2.0);V _rhs36271=_v_32498_k;return V(j::number(_lhs36270)*j::number(_rhs36271));})();V _rhs36269=V(2.0);return V(std::pow(j::number(_lhs36268),j::number(_rhs36269)));})();V _rhs36267=([&]()->V{V _lhs36272=([&]()->V{V _lhs36274=([&]()->V{V _lhs36276=([&]()->V{V _lhs36278=this->_v_32445_B2.get();V _rhs36279=V(1.0);return j::binary("+",_lhs36278,_rhs36279);})();V _rhs36277=V(2.0);return V(j::number(_lhs36276)*j::number(_rhs36277));})();V _rhs36275=_v_32498_k;return V(j::number(_lhs36274)*j::number(_rhs36275));})();V _rhs36273=this->_v_32445_B2.get();return V(j::number(_lhs36272)-j::number(_rhs36273));})();return V(j::number(_lhs36266)*j::number(_rhs36267));})();V _rhs36265=V(2.0);return V(j::number(_lhs36264)/j::number(_rhs36265));})():([&]()->V{V _lhs36280=([&]()->V{V _lhs36282=([&]()->V{V _lhs36284=([&]()->V{V _lhs36286=([&]()->V{V _lhs36288=([&]()->V{V _lhs36290=V(2.0);V _rhs36291=_v_32498_k;return V(j::number(_lhs36290)*j::number(_rhs36291));})();V _rhs36289=V(2.0);return V(j::number(_lhs36288)-j::number(_rhs36289));})();V _rhs36287=V(2.0);return V(std::pow(j::number(_lhs36286),j::number(_rhs36287)));})();V _rhs36285=([&]()->V{V _lhs36292=([&]()->V{V _lhs36294=([&]()->V{V _lhs36296=this->_v_32445_B2.get();V _rhs36297=V(1.0);return j::binary("+",_lhs36296,_rhs36297);})();V _rhs36295=([&]()->V{V _lhs36298=([&]()->V{V _lhs36300=_v_32498_k;V _rhs36301=V(2.0);return V(j::number(_lhs36300)*j::number(_rhs36301));})();V _rhs36299=V(2.0);return V(j::number(_lhs36298)-j::number(_rhs36299));})();return V(j::number(_lhs36294)*j::number(_rhs36295));})();V _rhs36293=this->_v_32445_B2.get();return j::binary("+",_lhs36292,_rhs36293);})();return V(j::number(_lhs36284)*j::number(_rhs36285));})();V _rhs36283=V(2.0);return j::binary("+",_lhs36282,_rhs36283);})();V _rhs36281=V(2.0);return V(j::number(_lhs36280)/j::number(_rhs36281));})());
return V{};
},1));j::put(_obj36036,this->_literals[115],j::function([=](const j::Args &_args_fn32499,const V &_receiver_fn32499,const V &_self_fn32499) mutable ->V{
V _v_32500_k;
_v_32500_k=_args_fn32499[0];
return ([&]()->V{V _lhs36302=j::unary("-",([&]()->V{V _lhs36304=V(2.0);V _rhs36305=([&]()->V{V _lhs36306=([&]()->V{V _lhs36308=V(10.0);V _rhs36309=_v_32500_k;return V(j::number(_lhs36308)*j::number(_rhs36309));})();V _rhs36307=V(10.0);return V(j::number(_lhs36306)-j::number(_rhs36307));})();return V(std::pow(j::number(_lhs36304),j::number(_rhs36305)));})());V _rhs36303=([&]()->V{V _number36316=([&]()->V{V _lhs36317=([&]()->V{V _lhs36319=([&]()->V{V _lhs36321=_v_32500_k;V _rhs36322=V(10.0);return V(j::number(_lhs36321)*j::number(_rhs36322));})();V _rhs36320=V(10.75);return V(j::number(_lhs36319)-j::number(_rhs36320));})();V _rhs36318=this->_v_32447_E4.get();return V(j::number(_lhs36317)*j::number(_rhs36318));})();return V(std::sin(j::number(_number36316)));})();return V(j::number(_lhs36302)*j::number(_rhs36303));})();
return V{};
},1));j::put(_obj36036,this->_literals[116],j::function([=](const j::Args &_args_fn32501,const V &_receiver_fn32501,const V &_self_fn32501) mutable ->V{
V _v_32502_k;
_v_32502_k=_args_fn32501[0];
return ([&]()->V{V _lhs36323=([&]()->V{V _lhs36325=([&]()->V{V _lhs36327=V(2.0);V _rhs36328=([&]()->V{V _lhs36329=j::unary("-",V(10.0));V _rhs36330=_v_32502_k;return V(j::number(_lhs36329)*j::number(_rhs36330));})();return V(std::pow(j::number(_lhs36327),j::number(_rhs36328)));})();V _rhs36326=([&]()->V{V _number36337=([&]()->V{V _lhs36338=([&]()->V{V _lhs36340=([&]()->V{V _lhs36342=_v_32502_k;V _rhs36343=V(10.0);return V(j::number(_lhs36342)*j::number(_rhs36343));})();V _rhs36341=V(0.75);return V(j::number(_lhs36340)-j::number(_rhs36341));})();V _rhs36339=this->_v_32447_E4.get();return V(j::number(_lhs36338)*j::number(_rhs36339));})();return V(std::sin(j::number(_number36337)));})();return V(j::number(_lhs36325)*j::number(_rhs36326));})();V _rhs36324=V(1.0);return j::binary("+",_lhs36323,_rhs36324);})();
return V{};
},1));j::put(_obj36036,this->_literals[117],j::function([=](const j::Args &_args_fn32503,const V &_receiver_fn32503,const V &_self_fn32503) mutable ->V{
V _v_32504_k;
_v_32504_k=_args_fn32503[0];
return (j::truth(([&]()->V{V _lhs36344=_v_32504_k;V _rhs36345=V(0.5);return j::binary("<",_lhs36344,_rhs36345);})())?([&]()->V{V _lhs36346=j::unary("-",([&]()->V{V _lhs36348=([&]()->V{V _lhs36350=V(2.0);V _rhs36351=([&]()->V{V _lhs36352=([&]()->V{V _lhs36354=V(20.0);V _rhs36355=_v_32504_k;return V(j::number(_lhs36354)*j::number(_rhs36355));})();V _rhs36353=V(10.0);return V(j::number(_lhs36352)-j::number(_rhs36353));})();return V(std::pow(j::number(_lhs36350),j::number(_rhs36351)));})();V _rhs36349=([&]()->V{V _number36362=([&]()->V{V _lhs36363=([&]()->V{V _lhs36365=([&]()->V{V _lhs36367=V(20.0);V _rhs36368=_v_32504_k;return V(j::number(_lhs36367)*j::number(_rhs36368));})();V _rhs36366=V(11.125);return V(j::number(_lhs36365)-j::number(_rhs36366));})();V _rhs36364=this->_v_32448_E5.get();return V(j::number(_lhs36363)*j::number(_rhs36364));})();return V(std::sin(j::number(_number36362)));})();return V(j::number(_lhs36348)*j::number(_rhs36349));})());V _rhs36347=V(2.0);return V(j::number(_lhs36346)/j::number(_rhs36347));})():([&]()->V{V _lhs36369=([&]()->V{V _lhs36371=([&]()->V{V _lhs36373=([&]()->V{V _lhs36375=V(2.0);V _rhs36376=([&]()->V{V _lhs36377=([&]()->V{V _lhs36379=j::unary("-",V(20.0));V _rhs36380=_v_32504_k;return V(j::number(_lhs36379)*j::number(_rhs36380));})();V _rhs36378=V(10.0);return j::binary("+",_lhs36377,_rhs36378);})();return V(std::pow(j::number(_lhs36375),j::number(_rhs36376)));})();V _rhs36374=([&]()->V{V _number36387=([&]()->V{V _lhs36388=([&]()->V{V _lhs36390=([&]()->V{V _lhs36392=V(20.0);V _rhs36393=_v_32504_k;return V(j::number(_lhs36392)*j::number(_rhs36393));})();V _rhs36391=V(11.125);return V(j::number(_lhs36390)-j::number(_rhs36391));})();V _rhs36389=this->_v_32448_E5.get();return V(j::number(_lhs36388)*j::number(_rhs36389));})();return V(std::sin(j::number(_number36387)));})();return V(j::number(_lhs36373)*j::number(_rhs36374));})();V _rhs36372=V(2.0);return V(j::number(_lhs36371)/j::number(_rhs36372));})();V _rhs36370=V(1.0);return j::binary("+",_lhs36369,_rhs36370);})());
return V{};
},1));j::put(_obj36036,this->_literals[118],j::function([=](const j::Args &_args_fn32505,const V &_receiver_fn32505,const V &_self_fn32505) mutable ->V{
V _v_32506_k;
_v_32506_k=_args_fn32505[0];
return ([&]()->V{V _lhs36394=V(1.0);V _rhs36395=([&]()->V{V _callee36398=this->_v_32449_bounce.get();return j::call(_callee36398,j::Args{([&]()->V{V _lhs36396=V(1.0);V _rhs36397=_v_32506_k;return V(j::number(_lhs36396)-j::number(_rhs36397));})()});})();return V(j::number(_lhs36394)-j::number(_rhs36395));})();
return V{};
},1));j::put(_obj36036,this->_literals[119],this->_v_32449_bounce.get());j::put(_obj36036,this->_literals[120],j::function([=](const j::Args &_args_fn32507,const V &_receiver_fn32507,const V &_self_fn32507) mutable ->V{
V _v_32508_k;
_v_32508_k=_args_fn32507[0];
return (j::truth(([&]()->V{V _lhs36399=_v_32508_k;V _rhs36400=V(0.5);return j::binary("<",_lhs36399,_rhs36400);})())?([&]()->V{V _lhs36401=([&]()->V{V _lhs36403=V(1.0);V _rhs36404=([&]()->V{V _callee36409=this->_v_32449_bounce.get();return j::call(_callee36409,j::Args{([&]()->V{V _lhs36405=V(1.0);V _rhs36406=([&]()->V{V _lhs36407=V(2.0);V _rhs36408=_v_32508_k;return V(j::number(_lhs36407)*j::number(_rhs36408));})();return V(j::number(_lhs36405)-j::number(_rhs36406));})()});})();return V(j::number(_lhs36403)-j::number(_rhs36404));})();V _rhs36402=V(2.0);return V(j::number(_lhs36401)/j::number(_rhs36402));})():([&]()->V{V _lhs36410=([&]()->V{V _lhs36412=V(1.0);V _rhs36413=([&]()->V{V _callee36418=this->_v_32449_bounce.get();return j::call(_callee36418,j::Args{([&]()->V{V _lhs36414=([&]()->V{V _lhs36416=V(2.0);V _rhs36417=_v_32508_k;return V(j::number(_lhs36416)*j::number(_rhs36417));})();V _rhs36415=V(1.0);return V(j::number(_lhs36414)-j::number(_rhs36415));})()});})();return j::binary("+",_lhs36412,_rhs36413);})();V _rhs36411=V(2.0);return V(j::number(_lhs36410)/j::number(_rhs36411));})());
return V{};
},1));return _obj36036;})();
this->_v_32509_ease.get()=([&]()->V{V _receiver36435=j::builtin("Object");V _method36436=this->_literals[123];V _method=j::get(_receiver36435,_method36436);j::Args _params36437=j::Args{([&]()->V{V _receiver36432=j::builtin("Object");V _method36433=this->_literals[122];V _method=j::get(_receiver36432,_method36433);j::Args _params36434=j::Args{([&]()->V{V _receiver36426=([&]()->V{V _receiver36429=j::builtin("Object");V _method36430=this->_literals[121];V _method=j::get(_receiver36429,_method36430);j::Args _params36431=j::Args{this->_v_32454_curves.get()};return j::call(_method,_params36431,_receiver36429);})();V _method36427=this->_literals[35];V _method=j::get(_receiver36426,_method36427);j::Args _params36428=j::Args{j::function([=](const j::Args &_args_fn32510,const V &_receiver_fn32510,const V &_self_fn32510) mutable ->V{
V _v_32511_name;
j::Cell _v_32512_f;
V _pattern36419=_args_fn32510[0];
_v_32511_name=j::get(_pattern36419,V(0));
_v_32512_f.get()=j::get(_pattern36419,V(1));
return ([&]()->V{j::Args _array36420;_array36420.push_back(_v_32511_name);_array36420.push_back(j::function([=](const j::Args &_args_fn32513,const V &_receiver_fn32513,const V &_self_fn32513) mutable ->V{
V _v_32514_k;
_v_32514_k=_args_fn32513[0];
return (j::truth(j::unary("!",([&]()->V{V _lhs36421=_v_32514_k;V _rhs36422=V(0.0);return j::binary(">",_lhs36421,_rhs36422);})()))?V(0.0):(j::truth(([&]()->V{V _lhs36423=_v_32514_k;V _rhs36424=V(1.0);return j::binary(">=",_lhs36423,_rhs36424);})())?V(1.0):([&]()->V{V _callee36425=_v_32512_f.get();return j::call(_callee36425,j::Args{_v_32514_k});})()));
return V{};
},1));return j::array(std::move(_array36420));})();
return V{};
},1)};return j::call(_method,_params36428,_receiver36426);})()};return j::call(_method,_params36434,_receiver36432);})()};return j::call(_method,_params36437,_receiver36435);})();
this->_v_32540_vec2.get()=([&]()->V{V _obj36438=j::object();j::put(_obj36438,this->_literals[124],j::function([=](const j::Args &_args_fn32541,const V &_receiver_fn32541,const V &_self_fn32541) mutable ->V{
V _v_32542_a;
V _v_32543_b;
_v_32542_a=_args_fn32541[0];
_v_32543_b=_args_fn32541[1];
return ([&]()->V{j::Args _array36439;_array36439.push_back(([&]()->V{V _lhs36440=j::get(_v_32542_a,V(0.0));V _rhs36441=j::get(_v_32543_b,V(0.0));return j::binary("+",_lhs36440,_rhs36441);})());_array36439.push_back(([&]()->V{V _lhs36442=j::get(_v_32542_a,V(1.0));V _rhs36443=j::get(_v_32543_b,V(1.0));return j::binary("+",_lhs36442,_rhs36443);})());return j::array(std::move(_array36439));})();
return V{};
},2));j::put(_obj36438,this->_literals[125],j::function([=](const j::Args &_args_fn32544,const V &_receiver_fn32544,const V &_self_fn32544) mutable ->V{
V _v_32545_a;
V _v_32546_b;
_v_32545_a=_args_fn32544[0];
_v_32546_b=_args_fn32544[1];
return ([&]()->V{j::Args _array36444;_array36444.push_back(([&]()->V{V _lhs36445=j::get(_v_32545_a,V(0.0));V _rhs36446=j::get(_v_32546_b,V(0.0));return V(j::number(_lhs36445)-j::number(_rhs36446));})());_array36444.push_back(([&]()->V{V _lhs36447=j::get(_v_32545_a,V(1.0));V _rhs36448=j::get(_v_32546_b,V(1.0));return V(j::number(_lhs36447)-j::number(_rhs36448));})());return j::array(std::move(_array36444));})();
return V{};
},2));j::put(_obj36438,this->_literals[62],j::function([=](const j::Args &_args_fn32547,const V &_receiver_fn32547,const V &_self_fn32547) mutable ->V{
V _v_32548_v;
V _v_32549_k;
_v_32548_v=_args_fn32547[0];
_v_32549_k=_args_fn32547[1];
return ([&]()->V{j::Args _array36449;_array36449.push_back(([&]()->V{V _lhs36450=j::get(_v_32548_v,V(0.0));V _rhs36451=_v_32549_k;return V(j::number(_lhs36450)*j::number(_rhs36451));})());_array36449.push_back(([&]()->V{V _lhs36452=j::get(_v_32548_v,V(1.0));V _rhs36453=_v_32549_k;return V(j::number(_lhs36452)*j::number(_rhs36453));})());return j::array(std::move(_array36449));})();
return V{};
},2));j::put(_obj36438,this->_literals[126],j::function([=](const j::Args &_args_fn32550,const V &_receiver_fn32550,const V &_self_fn32550) mutable ->V{
V _v_32551_a;
V _v_32552_b;
_v_32551_a=_args_fn32550[0];
_v_32552_b=_args_fn32550[1];
return ([&]()->V{V _lhs36454=([&]()->V{V _lhs36456=j::get(_v_32551_a,V(0.0));V _rhs36457=j::get(_v_32552_b,V(0.0));return V(j::number(_lhs36456)*j::number(_rhs36457));})();V _rhs36455=([&]()->V{V _lhs36458=j::get(_v_32551_a,V(1.0));V _rhs36459=j::get(_v_32552_b,V(1.0));return V(j::number(_lhs36458)*j::number(_rhs36459));})();return j::binary("+",_lhs36454,_rhs36455);})();
return V{};
},2));j::put(_obj36438,this->_literals[8],j::function([=](const j::Args &_args_fn32553,const V &_receiver_fn32553,const V &_self_fn32553) mutable ->V{
V _v_32554_v;
_v_32554_v=_args_fn32553[0];
return ([&]()->V{V _number36460=j::get(_v_32554_v,V(0.0));V _number36461=j::get(_v_32554_v,V(1.0));return V(std::hypot(j::number(_number36460),j::number(_number36461)));})();
return V{};
},1));j::put(_obj36438,this->_literals[127],j::function([=](const j::Args &_args_fn32555,const V &_receiver_fn32555,const V &_self_fn32555) mutable ->V{
V _v_32556_v;
_v_32556_v=_args_fn32555[0];
{
V _v_32557_l;
_v_32557_l=([&]()->V{V _number36462=j::get(_v_32556_v,V(0.0));V _number36463=j::get(_v_32556_v,V(1.0));return V(std::hypot(j::number(_number36462),j::number(_number36463)));})();
return (j::truth(_v_32557_l)?([&]()->V{j::Args _array36464;_array36464.push_back(([&]()->V{V _lhs36465=j::get(_v_32556_v,V(0.0));V _rhs36466=_v_32557_l;return V(j::number(_lhs36465)/j::number(_rhs36466));})());_array36464.push_back(([&]()->V{V _lhs36467=j::get(_v_32556_v,V(1.0));V _rhs36468=_v_32557_l;return V(j::number(_lhs36467)/j::number(_rhs36468));})());return j::array(std::move(_array36464));})():([&]()->V{j::Args _array36469;_array36469.push_back(V(0.0));_array36469.push_back(V(0.0));return j::array(std::move(_array36469));})());

}

return V{};
},1));j::put(_obj36438,this->_literals[128],j::function([=](const j::Args &_args_fn32558,const V &_receiver_fn32558,const V &_self_fn32558) mutable ->V{
V _v_32559_v;
V _v_32560_a;
_v_32559_v=_args_fn32558[0];
_v_32560_a=_args_fn32558[1];
{
V _v_32561_c;
V _v_32562_s;
_v_32561_c=([&]()->V{V _number36470=_v_32560_a;return V(std::cos(j::number(_number36470)));})();
_v_32562_s=([&]()->V{V _number36471=_v_32560_a;return V(std::sin(j::number(_number36471)));})();
return ([&]()->V{j::Args _array36472;_array36472.push_back(([&]()->V{V _lhs36473=([&]()->V{V _lhs36475=j::get(_v_32559_v,V(0.0));V _rhs36476=_v_32561_c;return V(j::number(_lhs36475)*j::number(_rhs36476));})();V _rhs36474=([&]()->V{V _lhs36477=j::get(_v_32559_v,V(1.0));V _rhs36478=_v_32562_s;return V(j::number(_lhs36477)*j::number(_rhs36478));})();return V(j::number(_lhs36473)-j::number(_rhs36474));})());_array36472.push_back(([&]()->V{V _lhs36479=([&]()->V{V _lhs36481=j::get(_v_32559_v,V(0.0));V _rhs36482=_v_32562_s;return V(j::number(_lhs36481)*j::number(_rhs36482));})();V _rhs36480=([&]()->V{V _lhs36483=j::get(_v_32559_v,V(1.0));V _rhs36484=_v_32561_c;return V(j::number(_lhs36483)*j::number(_rhs36484));})();return j::binary("+",_lhs36479,_rhs36480);})());return j::array(std::move(_array36472));})();

}

return V{};
},2));j::put(_obj36438,this->_literals[129],j::function([=](const j::Args &_args_fn32563,const V &_receiver_fn32563,const V &_self_fn32563) mutable ->V{
V _v_32564_a;
V _v_32565_b;
V _v_32566_k;
_v_32564_a=_args_fn32563[0];
_v_32565_b=_args_fn32563[1];
_v_32566_k=_args_fn32563[2];
return ([&]()->V{j::Args _array36485;_array36485.push_back(([&]()->V{V _lhs36486=j::get(_v_32564_a,V(0.0));V _rhs36487=([&]()->V{V _lhs36488=([&]()->V{V _lhs36490=j::get(_v_32565_b,V(0.0));V _rhs36491=j::get(_v_32564_a,V(0.0));return V(j::number(_lhs36490)-j::number(_rhs36491));})();V _rhs36489=_v_32566_k;return V(j::number(_lhs36488)*j::number(_rhs36489));})();return j::binary("+",_lhs36486,_rhs36487);})());_array36485.push_back(([&]()->V{V _lhs36492=j::get(_v_32564_a,V(1.0));V _rhs36493=([&]()->V{V _lhs36494=([&]()->V{V _lhs36496=j::get(_v_32565_b,V(1.0));V _rhs36497=j::get(_v_32564_a,V(1.0));return V(j::number(_lhs36496)-j::number(_rhs36497));})();V _rhs36495=_v_32566_k;return V(j::number(_lhs36494)*j::number(_rhs36495));})();return j::binary("+",_lhs36492,_rhs36493);})());return j::array(std::move(_array36485));})();
return V{};
},3));j::put(_obj36438,this->_literals[130],j::function([=](const j::Args &_args_fn32567,const V &_receiver_fn32567,const V &_self_fn32567) mutable ->V{
V _v_32568_a;
V _v_32569_b;
_v_32568_a=_args_fn32567[0];
_v_32569_b=_args_fn32567[1];
return ([&]()->V{V _number36502=([&]()->V{V _lhs36504=j::get(_v_32568_a,V(0.0));V _rhs36505=j::get(_v_32569_b,V(0.0));return V(j::number(_lhs36504)-j::number(_rhs36505));})();V _number36503=([&]()->V{V _lhs36506=j::get(_v_32568_a,V(1.0));V _rhs36507=j::get(_v_32569_b,V(1.0));return V(j::number(_lhs36506)-j::number(_rhs36507));})();return V(std::hypot(j::number(_number36502),j::number(_number36503)));})();
return V{};
},2));return _obj36438;})();
this->_v_32570_vec3.get()=([&]()->V{V _obj36508=j::object();j::put(_obj36508,this->_literals[124],j::function([=](const j::Args &_args_fn32571,const V &_receiver_fn32571,const V &_self_fn32571) mutable ->V{
V _v_32572_a;
V _v_32573_b;
_v_32572_a=_args_fn32571[0];
_v_32573_b=_args_fn32571[1];
return ([&]()->V{j::Args _array36509;_array36509.push_back(([&]()->V{V _lhs36510=j::get(_v_32572_a,V(0.0));V _rhs36511=j::get(_v_32573_b,V(0.0));return j::binary("+",_lhs36510,_rhs36511);})());_array36509.push_back(([&]()->V{V _lhs36512=j::get(_v_32572_a,V(1.0));V _rhs36513=j::get(_v_32573_b,V(1.0));return j::binary("+",_lhs36512,_rhs36513);})());_array36509.push_back(([&]()->V{V _lhs36514=j::get(_v_32572_a,V(2.0));V _rhs36515=j::get(_v_32573_b,V(2.0));return j::binary("+",_lhs36514,_rhs36515);})());return j::array(std::move(_array36509));})();
return V{};
},2));j::put(_obj36508,this->_literals[125],j::function([=](const j::Args &_args_fn32574,const V &_receiver_fn32574,const V &_self_fn32574) mutable ->V{
V _v_32575_a;
V _v_32576_b;
_v_32575_a=_args_fn32574[0];
_v_32576_b=_args_fn32574[1];
return ([&]()->V{j::Args _array36516;_array36516.push_back(([&]()->V{V _lhs36517=j::get(_v_32575_a,V(0.0));V _rhs36518=j::get(_v_32576_b,V(0.0));return V(j::number(_lhs36517)-j::number(_rhs36518));})());_array36516.push_back(([&]()->V{V _lhs36519=j::get(_v_32575_a,V(1.0));V _rhs36520=j::get(_v_32576_b,V(1.0));return V(j::number(_lhs36519)-j::number(_rhs36520));})());_array36516.push_back(([&]()->V{V _lhs36521=j::get(_v_32575_a,V(2.0));V _rhs36522=j::get(_v_32576_b,V(2.0));return V(j::number(_lhs36521)-j::number(_rhs36522));})());return j::array(std::move(_array36516));})();
return V{};
},2));j::put(_obj36508,this->_literals[62],j::function([=](const j::Args &_args_fn32577,const V &_receiver_fn32577,const V &_self_fn32577) mutable ->V{
V _v_32578_v;
V _v_32579_k;
_v_32578_v=_args_fn32577[0];
_v_32579_k=_args_fn32577[1];
return ([&]()->V{j::Args _array36523;_array36523.push_back(([&]()->V{V _lhs36524=j::get(_v_32578_v,V(0.0));V _rhs36525=_v_32579_k;return V(j::number(_lhs36524)*j::number(_rhs36525));})());_array36523.push_back(([&]()->V{V _lhs36526=j::get(_v_32578_v,V(1.0));V _rhs36527=_v_32579_k;return V(j::number(_lhs36526)*j::number(_rhs36527));})());_array36523.push_back(([&]()->V{V _lhs36528=j::get(_v_32578_v,V(2.0));V _rhs36529=_v_32579_k;return V(j::number(_lhs36528)*j::number(_rhs36529));})());return j::array(std::move(_array36523));})();
return V{};
},2));j::put(_obj36508,this->_literals[126],j::function([=](const j::Args &_args_fn32580,const V &_receiver_fn32580,const V &_self_fn32580) mutable ->V{
V _v_32581_a;
V _v_32582_b;
_v_32581_a=_args_fn32580[0];
_v_32582_b=_args_fn32580[1];
return ([&]()->V{V _lhs36530=([&]()->V{V _lhs36532=([&]()->V{V _lhs36534=j::get(_v_32581_a,V(0.0));V _rhs36535=j::get(_v_32582_b,V(0.0));return V(j::number(_lhs36534)*j::number(_rhs36535));})();V _rhs36533=([&]()->V{V _lhs36536=j::get(_v_32581_a,V(1.0));V _rhs36537=j::get(_v_32582_b,V(1.0));return V(j::number(_lhs36536)*j::number(_rhs36537));})();return j::binary("+",_lhs36532,_rhs36533);})();V _rhs36531=([&]()->V{V _lhs36538=j::get(_v_32581_a,V(2.0));V _rhs36539=j::get(_v_32582_b,V(2.0));return V(j::number(_lhs36538)*j::number(_rhs36539));})();return j::binary("+",_lhs36530,_rhs36531);})();
return V{};
},2));j::put(_obj36508,this->_literals[131],j::function([=](const j::Args &_args_fn32583,const V &_receiver_fn32583,const V &_self_fn32583) mutable ->V{
V _v_32584_a;
V _v_32585_b;
_v_32584_a=_args_fn32583[0];
_v_32585_b=_args_fn32583[1];
return ([&]()->V{j::Args _array36540;_array36540.push_back(([&]()->V{V _lhs36541=([&]()->V{V _lhs36543=j::get(_v_32584_a,V(1.0));V _rhs36544=j::get(_v_32585_b,V(2.0));return V(j::number(_lhs36543)*j::number(_rhs36544));})();V _rhs36542=([&]()->V{V _lhs36545=j::get(_v_32584_a,V(2.0));V _rhs36546=j::get(_v_32585_b,V(1.0));return V(j::number(_lhs36545)*j::number(_rhs36546));})();return V(j::number(_lhs36541)-j::number(_rhs36542));})());_array36540.push_back(([&]()->V{V _lhs36547=([&]()->V{V _lhs36549=j::get(_v_32584_a,V(2.0));V _rhs36550=j::get(_v_32585_b,V(0.0));return V(j::number(_lhs36549)*j::number(_rhs36550));})();V _rhs36548=([&]()->V{V _lhs36551=j::get(_v_32584_a,V(0.0));V _rhs36552=j::get(_v_32585_b,V(2.0));return V(j::number(_lhs36551)*j::number(_rhs36552));})();return V(j::number(_lhs36547)-j::number(_rhs36548));})());_array36540.push_back(([&]()->V{V _lhs36553=([&]()->V{V _lhs36555=j::get(_v_32584_a,V(0.0));V _rhs36556=j::get(_v_32585_b,V(1.0));return V(j::number(_lhs36555)*j::number(_rhs36556));})();V _rhs36554=([&]()->V{V _lhs36557=j::get(_v_32584_a,V(1.0));V _rhs36558=j::get(_v_32585_b,V(0.0));return V(j::number(_lhs36557)*j::number(_rhs36558));})();return V(j::number(_lhs36553)-j::number(_rhs36554));})());return j::array(std::move(_array36540));})();
return V{};
},2));j::put(_obj36508,this->_literals[8],j::function([=](const j::Args &_args_fn32586,const V &_receiver_fn32586,const V &_self_fn32586) mutable ->V{
V _v_32587_v;
_v_32587_v=_args_fn32586[0];
return ([&]()->V{V _number36559=j::get(_v_32587_v,V(0.0));V _number36560=j::get(_v_32587_v,V(1.0));V _number36561=j::get(_v_32587_v,V(2.0));return V(std::hypot(j::number(_number36559),j::number(_number36560),j::number(_number36561)));})();
return V{};
},1));j::put(_obj36508,this->_literals[127],j::function([=](const j::Args &_args_fn32588,const V &_receiver_fn32588,const V &_self_fn32588) mutable ->V{
V _v_32589_v;
_v_32589_v=_args_fn32588[0];
{
V _v_32590_l;
_v_32590_l=([&]()->V{V _number36562=j::get(_v_32589_v,V(0.0));V _number36563=j::get(_v_32589_v,V(1.0));V _number36564=j::get(_v_32589_v,V(2.0));return V(std::hypot(j::number(_number36562),j::number(_number36563),j::number(_number36564)));})();
return (j::truth(_v_32590_l)?([&]()->V{j::Args _array36565;_array36565.push_back(([&]()->V{V _lhs36566=j::get(_v_32589_v,V(0.0));V _rhs36567=_v_32590_l;return V(j::number(_lhs36566)/j::number(_rhs36567));})());_array36565.push_back(([&]()->V{V _lhs36568=j::get(_v_32589_v,V(1.0));V _rhs36569=_v_32590_l;return V(j::number(_lhs36568)/j::number(_rhs36569));})());_array36565.push_back(([&]()->V{V _lhs36570=j::get(_v_32589_v,V(2.0));V _rhs36571=_v_32590_l;return V(j::number(_lhs36570)/j::number(_rhs36571));})());return j::array(std::move(_array36565));})():([&]()->V{j::Args _array36572;_array36572.push_back(V(0.0));_array36572.push_back(V(0.0));_array36572.push_back(V(0.0));return j::array(std::move(_array36572));})());

}

return V{};
},1));j::put(_obj36508,this->_literals[129],j::function([=](const j::Args &_args_fn32591,const V &_receiver_fn32591,const V &_self_fn32591) mutable ->V{
V _v_32592_a;
V _v_32593_b;
V _v_32594_k;
_v_32592_a=_args_fn32591[0];
_v_32593_b=_args_fn32591[1];
_v_32594_k=_args_fn32591[2];
return ([&]()->V{j::Args _array36573;_array36573.push_back(([&]()->V{V _lhs36574=j::get(_v_32592_a,V(0.0));V _rhs36575=([&]()->V{V _lhs36576=([&]()->V{V _lhs36578=j::get(_v_32593_b,V(0.0));V _rhs36579=j::get(_v_32592_a,V(0.0));return V(j::number(_lhs36578)-j::number(_rhs36579));})();V _rhs36577=_v_32594_k;return V(j::number(_lhs36576)*j::number(_rhs36577));})();return j::binary("+",_lhs36574,_rhs36575);})());_array36573.push_back(([&]()->V{V _lhs36580=j::get(_v_32592_a,V(1.0));V _rhs36581=([&]()->V{V _lhs36582=([&]()->V{V _lhs36584=j::get(_v_32593_b,V(1.0));V _rhs36585=j::get(_v_32592_a,V(1.0));return V(j::number(_lhs36584)-j::number(_rhs36585));})();V _rhs36583=_v_32594_k;return V(j::number(_lhs36582)*j::number(_rhs36583));})();return j::binary("+",_lhs36580,_rhs36581);})());_array36573.push_back(([&]()->V{V _lhs36586=j::get(_v_32592_a,V(2.0));V _rhs36587=([&]()->V{V _lhs36588=([&]()->V{V _lhs36590=j::get(_v_32593_b,V(2.0));V _rhs36591=j::get(_v_32592_a,V(2.0));return V(j::number(_lhs36590)-j::number(_rhs36591));})();V _rhs36589=_v_32594_k;return V(j::number(_lhs36588)*j::number(_rhs36589));})();return j::binary("+",_lhs36586,_rhs36587);})());return j::array(std::move(_array36573));})();
return V{};
},3));j::put(_obj36508,this->_literals[130],j::function([=](const j::Args &_args_fn32595,const V &_receiver_fn32595,const V &_self_fn32595) mutable ->V{
V _v_32596_a;
V _v_32597_b;
_v_32596_a=_args_fn32595[0];
_v_32597_b=_args_fn32595[1];
return ([&]()->V{V _number36598=([&]()->V{V _lhs36601=j::get(_v_32596_a,V(0.0));V _rhs36602=j::get(_v_32597_b,V(0.0));return V(j::number(_lhs36601)-j::number(_rhs36602));})();V _number36599=([&]()->V{V _lhs36603=j::get(_v_32596_a,V(1.0));V _rhs36604=j::get(_v_32597_b,V(1.0));return V(j::number(_lhs36603)-j::number(_rhs36604));})();V _number36600=([&]()->V{V _lhs36605=j::get(_v_32596_a,V(2.0));V _rhs36606=j::get(_v_32597_b,V(2.0));return V(j::number(_lhs36605)-j::number(_rhs36606));})();return V(std::hypot(j::number(_number36598),j::number(_number36599),j::number(_number36600)));})();
return V{};
},2));return _obj36508;})();
}
};
}
std::unique_ptr<Module> new_kit_math(){return std::make_unique<Generated_kit_math>();}
}
