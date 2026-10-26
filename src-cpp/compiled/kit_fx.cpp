// Native source generated from src/kit/fx.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_fx final:j::Module {
j::Cell _v_11634_EMPTY;
j::Cell _v_11635_INK;
j::Cell _v_11636_MAX;
j::Cell _v_11637_NONE;
j::Cell _v_11638_Palette;
j::Cell _v_11639_Surface;
j::Cell _v_11640_TAU;
j::Cell _v_11641_asPiece;
j::Cell _v_11642_bayer;
j::Cell _v_11643_named;
j::Cell _v_11644_namedColors;
j::Cell _v_11645_fail;
j::Cell _v_11646_gradient;
j::Cell _v_11647_hash;
j::Cell _v_11648_isHex;
j::Cell _v_11649_mix;
j::Cell _v_11650_nearest;
j::Cell _v_11651_piece;
j::Cell _v_11652_ramp;
j::Cell _v_11653_ramps;
j::Cell _v_11654_sample;
j::Cell _v_11655_smoothstep;
j::Cell _v_11656_snapshot;
j::Cell _v_11657_suggest;
j::Cell _v_11658_valueNoise;
j::Cell _v_11659_show;
j::Cell _v_11662_or;
j::Cell _v_11665_RULES;
j::Cell _v_11689_num;
j::Cell _v_11697_wordy;
j::Cell _v_11706_often;
j::Cell _v_11709_SPEED;
j::Cell _v_11710_choice;
j::Cell _v_11718_printable;
j::Cell _v_11722_chars;
j::Cell _v_11730_colour;
j::Cell _v_11734_COMMON;
j::Cell _v_11735_RENAMED;
j::Cell _v_11736_optionsOf;
j::Cell _v_11744_mod;
j::Cell _v_11748_gcd;
j::Cell _v_11752_lcm;
j::Cell _v_11759_quiet;
j::Cell _v_11768_Inks;
j::Cell _v_11781_QUIET;
j::Cell _v_11782_LOOPS;
j::Cell _v_11783_ours;
j::Cell _v_11784_periodOf;
j::Cell _v_11790_isMotion;
j::Cell _v_11793_textOf;
j::Cell _v_11800_sourceOf;
j::Cell _v_11807_mainInk;
j::Cell _v_11825_build;
j::Cell _v_11874_copy;
j::Cell _v_11878_density;
j::Cell _v_11885_isBlock;
j::Cell _v_11888_isSolid;
j::Cell _v_11891_glint;
j::Cell _v_11948_typeIn;
j::Cell _v_12005_level;
j::Cell _v_12014_HELD;
j::Cell _v_12015_MODES;
j::Cell _v_12016_MODE_WHAT;
j::Cell _v_12017_dissolve;
j::Cell _v_12062_fade;
j::Cell _v_12101_scan;
j::Cell _v_12137_glitch;
j::Cell _v_12173_wave;
j::Cell _v_12201_hsl;
j::Cell _v_12213_hues;
j::Cell _v_12220_cycle;
j::Cell _v_12224_rainbowOf;
j::Cell _v_12264_rainbow;
j::Cell _v_12268_hueCycle;
j::Cell _v_12272_shake;
j::Cell _v_12295_outlines;
j::Cell _v_12296_NX;
j::Cell _v_12297_NY;
j::Cell _v_12298_flood;
j::Cell _v_12317_outline;
j::Cell _v_12370_shadow;
j::Cell _v_12406_effect;
j::Cell _v_12434_chain;
std::vector<V> _literals;
Generated_kit_fx():_v_11634_EMPTY(this->slot("EMPTY")),_v_11635_INK(this->slot("INK")),_v_11636_MAX(this->slot("MAX")),_v_11637_NONE(this->slot("NONE")),_v_11638_Palette(this->slot("Palette")),_v_11639_Surface(this->slot("Surface")),_v_11640_TAU(this->slot("TAU")),_v_11641_asPiece(this->slot("asPiece")),_v_11642_bayer(this->slot("bayer")),_v_11643_named(this->slot("named")),_v_11644_namedColors(this->slot("namedColors")),_v_11645_fail(this->slot("fail")),_v_11646_gradient(this->slot("gradient")),_v_11647_hash(this->slot("hash")),_v_11648_isHex(this->slot("isHex")),_v_11649_mix(this->slot("mix")),_v_11650_nearest(this->slot("nearest")),_v_11651_piece(this->slot("piece")),_v_11652_ramp(this->slot("ramp")),_v_11653_ramps(this->slot("ramps")),_v_11654_sample(this->slot("sample")),_v_11655_smoothstep(this->slot("smoothstep")),_v_11656_snapshot(this->slot("snapshot")),_v_11657_suggest(this->slot("suggest")),_v_11658_valueNoise(this->slot("valueNoise")),_v_11659_show(this->slot("show")),_v_11662_or(this->slot("or")),_v_11665_RULES(this->slot("RULES")),_v_11689_num(this->slot("num")),_v_11697_wordy(this->slot("wordy")),_v_11706_often(this->slot("often")),_v_11709_SPEED(this->slot("SPEED")),_v_11710_choice(this->slot("choice")),_v_11718_printable(this->slot("printable")),_v_11722_chars(this->slot("chars")),_v_11730_colour(this->slot("colour")),_v_11734_COMMON(this->slot("COMMON")),_v_11735_RENAMED(this->slot("RENAMED")),_v_11736_optionsOf(this->slot("optionsOf")),_v_11744_mod(this->slot("mod")),_v_11748_gcd(this->slot("gcd")),_v_11752_lcm(this->slot("lcm")),_v_11759_quiet(this->slot("quiet")),_v_11768_Inks(this->slot("Inks")),_v_11781_QUIET(this->slot("QUIET")),_v_11782_LOOPS(this->slot("LOOPS")),_v_11783_ours(this->slot("ours")),_v_11784_periodOf(this->slot("periodOf")),_v_11790_isMotion(this->slot("isMotion")),_v_11793_textOf(this->slot("textOf")),_v_11800_sourceOf(this->slot("sourceOf")),_v_11807_mainInk(this->slot("mainInk")),_v_11825_build(this->slot("build")),_v_11874_copy(this->slot("copy")),_v_11878_density(this->slot("density")),_v_11885_isBlock(this->slot("isBlock")),_v_11888_isSolid(this->slot("isSolid")),_v_11891_glint(this->slot("glint")),_v_11948_typeIn(this->slot("typeIn")),_v_12005_level(this->slot("level")),_v_12014_HELD(this->slot("HELD")),_v_12015_MODES(this->slot("MODES")),_v_12016_MODE_WHAT(this->slot("MODE_WHAT")),_v_12017_dissolve(this->slot("dissolve")),_v_12062_fade(this->slot("fade")),_v_12101_scan(this->slot("scan")),_v_12137_glitch(this->slot("glitch")),_v_12173_wave(this->slot("wave")),_v_12201_hsl(this->slot("hsl")),_v_12213_hues(this->slot("hues")),_v_12220_cycle(this->slot("cycle")),_v_12224_rainbowOf(this->slot("rainbowOf")),_v_12264_rainbow(this->slot("rainbow")),_v_12268_hueCycle(this->slot("hueCycle")),_v_12272_shake(this->slot("shake")),_v_12295_outlines(this->slot("outlines")),_v_12296_NX(this->slot("NX")),_v_12297_NY(this->slot("NY")),_v_12298_flood(this->slot("flood")),_v_12317_outline(this->slot("outline")),_v_12370_shadow(this->slot("shadow")),_v_12406_effect(this->slot("effect")),_v_12434_chain(this->slot("chain")),_literals{V(u"number"),
V(u"isFinite"),
V(u"string"),
V(u"hasOwn"),
V(u"stringify"),
V(u"keys"),
V(u"map"),
V(u"includes"),
V(u"length"),
V(u"every"),
V(u"one character"),
V(u"one or two characters"),
V(u"one or more characters"),
V(u"dark"),
V(u"object"),
V(u"isArray"),
V(u"entries"),
V(u""),
V(u"toFixed"),
V(u"meta"),
V(u"fps"),
V(u"loop"),
V(u"has"),
V(u"category"),
V(u"test"),
V(u"slice"),
V(u"split"),
V(u"\n"),
V(u"trim"),
V(u"find"),
V(u"text"),
V(u"grid"),
V(u"default"),
V(u"function"),
V(u"null"),
V(u"paper"),
V(u"options"),
V(u"color"),
V(u"charCodeAt"),
V(u"get"),
V(u"set"),
V(u"light"),
V(u"palette"),
V(u"inks"),
V(u"piece"),
V(u"still"),
V(u"list"),
V(u"add"),
V(u"cols"),
V(u"rows"),
V(u"moves"),
V(u"period"),
V(u"name"),
V(u"note"),
V(u"what"),
V(u"ink"),
V(u"ground"),
V(u"cell"),
V(u"clock"),
V(u"setup"),
V(u"aspect"),
V(u"mono"),
V(u"at"),
V(u"chars"),
V(u"colors"),
V(u"x"),
V(u"y"),
V(u"assign"),
V(u"motion"),
V(u"seconds"),
V(u"from"),
V(u"once"),
V(u"detailed"),
V(u"fromCharCode"),
V(u"indexOf"),
V(u"glint"),
V(u"sweep"),
V(u"speed"),
V(u"first"),
V(u"width"),
V(u"slant"),
V(u"glint.every"),
V(u"glint.sweep"),
V(u"glint takes sweep or speed, which both set how fast the band crosses, not both"),
V(u"glint.speed"),
V(u"positive"),
V(u"glint.first"),
V(u"glint.width"),
V(u"glint.slant"),
V(u"glint.chars"),
V(u"glint.color"),
V(u"fill"),
V(u"own"),
V(u"#ffffff"),
V(u"fit"),
V(u"forEach"),
V(u"min"),
V(u"max"),
V(u"glinting now and then"),
V(u"▒▓"),
V(u"█▓"),
V(u"typeIn"),
V(u"start"),
V(u"cursor"),
V(u"order"),
V(u"hold"),
V(u"seed"),
V(u"typeIn.start"),
V(u"time"),
V(u"typeIn.order"),
V(u"reading"),
V(u"random"),
V(u"columns"),
V(u"typeIn.cursor"),
V(u"▌"),
V(u"typeIn.hold"),
V(u"typeIn.seed"),
V(u"whole"),
V(u"typeIn.speed"),
V(u" "),
V(u"join"),
V(u"replace"),
V(u"sort"),
V(u"typed in"),
V(u"put"),
V(u"in"),
V(u"out"),
V(u"dissolve"),
V(u"mode"),
V(u"blob"),
V(u"edge"),
V(u"dissolve.period"),
V(u"dissolve.mode"),
V(u"inout"),
V(u"dissolve.blob"),
V(u"atLeast1"),
V(u"dissolve.edge"),
V(u".:"),
V(u"dissolve.seed"),
V(u"fade"),
V(u"ramp"),
V(u"fade.period"),
V(u"fade.mode"),
V(u"auto"),
V(u"standard"),
V(u"blocks"),
V(u"codes"),
V(u"top"),
V(u"scan"),
V(u"direction"),
V(u"char"),
V(u"reveal"),
V(u"scan.period"),
V(u"scan.direction"),
V(u"down"),
V(u"up"),
V(u"right"),
V(u"left"),
V(u"scan.char"),
V(u"─"),
V(u"│"),
V(u"scan.color"),
V(u"boolean"),
V(u"revealed by a scan line"),
V(u"with a scan line passing"),
V(u"glitch"),
V(u"amount"),
V(u"glitch.every"),
V(u"glitch.length"),
V(u"glitch.first"),
V(u"glitch.amount"),
V(u"subtle"),
V(u"medium"),
V(u"strong"),
V(u"share"),
V(u"glitch.chars"),
V(u"#%&@$/\\|<>"),
V(u"glitch.seed"),
V(u"glitching now and then"),
V(u"wave"),
V(u"amplitude"),
V(u"wavelength"),
V(u"axis"),
V(u"wave.axis"),
V(u"wave takes amplitude or amount, which both say how far it sways, not both"),
V(u"wave takes period or speed, which both say how fast it runs, not both"),
V(u"wave.amount"),
V(u"wave.speed"),
V(u"slow"),
V(u"normal"),
V(u"fast"),
V(u"wave.amplitude"),
V(u"wave.wavelength"),
V(u"wave.period"),
V(u"swaying in a wave"),
V(u"#"),
V(u"0"),
V(u"toString"),
V(u"padStart"),
V(u"steps"),
V(u"cycles"),
V(u"zeroUp"),
V(u"diagonal"),
V(u"in rainbow colours"),
V(u"cycling through colours"),
V(u"rainbow"),
V(u"shake"),
V(u"shake.amount"),
V(u"cells"),
V(u"shake.every"),
V(u"shake.length"),
V(u"shake.first"),
V(u"shake.seed"),
V(u"shaking now and then"),
V(u"mask"),
V(u"paste"),
V(u"outline"),
V(u"style"),
V(u"gap"),
V(u"single"),
V(u"outline.color"),
V(u"outline.gap"),
V(u"outlined"),
V(u"shadow"),
V(u"dx"),
V(u"dy"),
V(u"solid"),
V(u"shadow.dx"),
V(u"shift"),
V(u"shadow.dy"),
V(u"shadow.char"),
V(u"░"),
V(u"shadow.color"),
V(u"with a drop shadow"),
V(u"effect"),
V(u"pad"),
V(u"effect.period"),
V(u"effect.still"),
V(u"effect.pad"),
V(u"room"),
V(u"bottom"),
V(u"with an effect"),
V(u"chain"),
V(u"a list"),
V(u"an object"),
V(u", "),
V(u"a number of seconds above 0"),
V(u"a number of seconds, 0 or more"),
V(u"a number above 0"),
V(u"a number of cells, 1 or more"),
V(u"a number, 0 or more"),
V(u"a number"),
V(u"a number from 0 to 1"),
V(u"isInteger"),
V(u"a whole number of cells, 1 or more"),
V(u"a whole number of cells"),
V(u"a whole number of cells, 0 or more"),
V(u"a whole number"),
V(u"a whole number from 1 to 32"),
V(u"often"),
V(u"sometimes"),
V(u"rarely"),
V(u"dissolve.scale"),
V(u"write blob, the patches' size in cells across, which is 1 / scale: 7 for 0.15"),
V(u"rainbow.spread"),
V(u"write cycles, the times the colours fit across the piece, which is spread times its width"),
V(u"hueCycle.spread"),
V(u"#at"),
V(u"toLowerCase"),
V(u"push"),
V(u"#59636e"),
V(u"#9198a1"),
V(u"logos"),
V(u"shine"),
V(u"companies"),
V(u"distros"),
V(u"padEnd"),
V(u"in and out"),
V(u"hueCycle"),
V(u" │││─┘┐┤─└┌├─┴┬┼"),
V(u"double"),
V(u" ║║║═╝╗╣═╚╔╠═╩╦╬"),
V(u"rounded"),
V(u" │││─╯╮┤─╰╭├─┴┬┼"),
V(u"heavy"),
V(u" ┃┃┃━┛┓┫━┗┏┣━┻┳╋"),
V(u"ascii"),
V(u" |||-+++-+++-+++")}{
this->exports["glint"]=this->_v_11891_glint;
this->exports["typeIn"]=this->_v_11948_typeIn;
this->exports["dissolve"]=this->_v_12017_dissolve;
this->exports["fade"]=this->_v_12062_fade;
this->exports["scan"]=this->_v_12101_scan;
this->exports["glitch"]=this->_v_12137_glitch;
this->exports["wave"]=this->_v_12173_wave;
this->exports["hues"]=this->_v_12213_hues;
this->exports["rainbow"]=this->_v_12264_rainbow;
this->exports["hueCycle"]=this->_v_12268_hueCycle;
this->exports["shake"]=this->_v_12272_shake;
this->exports["outlines"]=this->_v_12295_outlines;
this->exports["outline"]=this->_v_12317_outline;
this->exports["shadow"]=this->_v_12370_shadow;
this->exports["effect"]=this->_v_12406_effect;
this->exports["chain"]=this->_v_12434_chain;
}
void init() override{if(initialized)return;initialized=true;
this->_v_11689_num.get()=j::function([=](const j::Args &_args_fn11690,const V &_receiver_fn11690,const V &_self_fn11690) mutable ->V{
V _v_11691_v;
V _v_11692_name;
V _v_11693_fallback;
V _v_11694_rule;
_v_11691_v=_args_fn11690[0];
_v_11692_name=_args_fn11690[1];
_v_11693_fallback=_args_fn11690[2];
_v_11694_rule=_args_fn11690[3];
{
V _v_11695_ok;
V _v_11696_words;
if(j::truth(([&]()->V{V _lhs12443=_v_11691_v;V _rhs12444=j::builtin("undefined");return V(j::equal(_lhs12443,_rhs12444,true));})())){return _v_11693_fallback;
}
V _pattern12445=j::get(this->_v_11665_RULES.get(),_v_11694_rule);
_v_11695_ok=j::get(_pattern12445,V(0));
_v_11696_words=j::get(_pattern12445,V(1));
if(j::truth(([&]()->V{V _logical12446=([&]()->V{V _logical12447=([&]()->V{V _lhs12448=j::unary("typeof",_v_11691_v);V _rhs12449=this->_literals[0];return V(!j::equal(_lhs12448,_rhs12449,true));})();return !j::truth(_logical12447)?j::unary("!",([&]()->V{V _receiver12450=j::builtin("Number");V _method12451=this->_literals[1];V _method=j::get(_receiver12450,_method12451);j::Args _params12452=j::Args{_v_11691_v};return j::call(_method,_params12452,_receiver12450);})()):_logical12447;})();return !j::truth(_logical12446)?j::unary("!",([&]()->V{V _callee12453=_v_11695_ok;return j::call(_callee12453,j::Args{_v_11691_v});})()):_logical12446;})())){(void)(([&]()->V{V _callee12456=this->_v_11645_fail.get();return j::call(_callee12456,j::Args{([&]()->V{std::u16string _text12454;_text12454+=u"";_text12454+=j::string(_v_11692_name);_text12454+=u" takes ";_text12454+=j::string(_v_11696_words);_text12454+=u", not ";_text12454+=j::string(([&]()->V{V _callee12455=this->_v_11659_show.get();return j::call(_callee12455,j::Args{_v_11691_v});})());_text12454+=u"";return V(std::move(_text12454));})()});})());
}
return _v_11691_v;

}

return V{};
},4);
this->_v_11697_wordy.get()=j::function([=](const j::Args &_args_fn11698,const V &_receiver_fn11698,const V &_self_fn11698) mutable ->V{
V _v_11699_v;
V _v_11700_name;
V _v_11701_words;
V _v_11702_fallback;
V _v_11703_rule;
_v_11699_v=_args_fn11698[0];
_v_11700_name=_args_fn11698[1];
_v_11701_words=_args_fn11698[2];
_v_11702_fallback=_args_fn11698[3];
_v_11703_rule=_args_fn11698[4];
{
if(j::truth(([&]()->V{V _lhs12457=j::unary("typeof",_v_11699_v);V _rhs12458=this->_literals[2];return V(!j::equal(_lhs12457,_rhs12458,true));})())){return ([&]()->V{V _callee12459=this->_v_11689_num.get();return j::call(_callee12459,j::Args{_v_11699_v,_v_11700_name,_v_11702_fallback,_v_11703_rule});})();
}
if(j::truth(([&]()->V{V _receiver12460=j::builtin("Object");V _method12461=this->_literals[3];V _method=j::get(_receiver12460,_method12461);j::Args _params12462=j::Args{_v_11701_words,_v_11699_v};return j::call(_method,_params12462,_receiver12460);})())){return j::get(_v_11701_words,_v_11699_v);
}
return ([&]()->V{V _callee12479=this->_v_11645_fail.get();return j::call(_callee12479,j::Args{([&]()->V{std::u16string _text12463;_text12463+=u"";_text12463+=j::string(_v_11700_name);_text12463+=u" takes ";_text12463+=j::string(([&]()->V{V _callee12473=this->_v_11662_or.get();return j::call(_callee12473,j::Args{([&]()->V{V _receiver12467=([&]()->V{V _receiver12470=j::builtin("Object");V _method12471=this->_literals[5];V _method=j::get(_receiver12470,_method12471);j::Args _params12472=j::Args{_v_11701_words};return j::call(_method,_params12472,_receiver12470);})();V _method12468=this->_literals[6];V _method=j::get(_receiver12467,_method12468);j::Args _params12469=j::Args{j::function([=](const j::Args &_args_fn11704,const V &_receiver_fn11704,const V &_self_fn11704) mutable ->V{
V _v_11705_w;
_v_11705_w=_args_fn11704[0];
return ([&]()->V{V _receiver12464=j::builtin("JSON");V _method12465=this->_literals[4];V _method=j::get(_receiver12464,_method12465);j::Args _params12466=j::Args{_v_11705_w};return j::call(_method,_params12466,_receiver12464);})();
return V{};
},1)};return j::call(_method,_params12469,_receiver12467);})()});})());_text12463+=u", or ";_text12463+=j::string(j::get(j::get(this->_v_11665_RULES.get(),_v_11703_rule),V(1.0)));_text12463+=u", not ";_text12463+=j::string(([&]()->V{V _callee12474=this->_v_11659_show.get();return j::call(_callee12474,j::Args{_v_11699_v});})());_text12463+=u"";_text12463+=j::string(([&]()->V{V _callee12478=this->_v_11657_suggest.get();return j::call(_callee12478,j::Args{_v_11699_v,([&]()->V{V _receiver12475=j::builtin("Object");V _method12476=this->_literals[5];V _method=j::get(_receiver12475,_method12476);j::Args _params12477=j::Args{_v_11701_words};return j::call(_method,_params12477,_receiver12475);})()});})());_text12463+=u"";return V(std::move(_text12463));})()});})();

}

return V{};
},5);
this->_v_11710_choice.get()=j::function([=](const j::Args &_args_fn11711,const V &_receiver_fn11711,const V &_self_fn11711) mutable ->V{
V _v_11712_v;
V _v_11713_name;
V _v_11714_choices;
V _v_11715_fallback;
_v_11712_v=_args_fn11711[0];
_v_11713_name=_args_fn11711[1];
_v_11714_choices=_args_fn11711[2];
_v_11715_fallback=_args_fn11711[3];
{
if(j::truth(([&]()->V{V _lhs12480=_v_11712_v;V _rhs12481=j::builtin("undefined");return V(j::equal(_lhs12480,_rhs12481,true));})())){return _v_11715_fallback;
}
if(j::truth(j::unary("!",([&]()->V{V _receiver12482=_v_11714_choices;V _method12483=this->_literals[7];V _method=j::get(_receiver12482,_method12483);j::Args _params12484=j::Args{_v_11712_v};return j::call(_method,_params12484,_receiver12482);})()))){(void)(([&]()->V{V _callee12494=this->_v_11645_fail.get();return j::call(_callee12494,j::Args{([&]()->V{std::u16string _text12485;_text12485+=u"";_text12485+=j::string(_v_11713_name);_text12485+=u" takes ";_text12485+=j::string(([&]()->V{V _callee12492=this->_v_11662_or.get();return j::call(_callee12492,j::Args{([&]()->V{V _receiver12489=_v_11714_choices;V _method12490=this->_literals[6];V _method=j::get(_receiver12489,_method12490);j::Args _params12491=j::Args{j::function([=](const j::Args &_args_fn11716,const V &_receiver_fn11716,const V &_self_fn11716) mutable ->V{
V _v_11717_c;
_v_11717_c=_args_fn11716[0];
return ([&]()->V{V _receiver12486=j::builtin("JSON");V _method12487=this->_literals[4];V _method=j::get(_receiver12486,_method12487);j::Args _params12488=j::Args{_v_11717_c};return j::call(_method,_params12488,_receiver12486);})();
return V{};
},1)};return j::call(_method,_params12491,_receiver12489);})()});})());_text12485+=u", not ";_text12485+=j::string(([&]()->V{V _callee12493=this->_v_11659_show.get();return j::call(_callee12493,j::Args{_v_11712_v});})());_text12485+=u"";return V(std::move(_text12485));})()});})());
}
return _v_11712_v;

}

return V{};
},4);
this->_v_11722_chars.get()=j::function([=](const j::Args &_args_fn11723,const V &_receiver_fn11723,const V &_self_fn11723) mutable ->V{
V _v_11724_v;
V _v_11725_name;
V _v_11726_fallback;
V _v_11727_least;
V _v_11728_most;
_v_11724_v=_args_fn11723[0];
_v_11725_name=_args_fn11723[1];
_v_11726_fallback=_args_fn11723[2];
V _default12495=_args_fn11723[3];if(_default12495.kind==V::Undefined||_default12495.kind==V::Hole)_default12495=V(1.0);
_v_11727_least=_default12495;
V _default12496=_args_fn11723[4];if(_default12496.kind==V::Undefined||_default12496.kind==V::Hole)_default12496=j::builtin("Infinity");
_v_11728_most=_default12496;
{
if(j::truth(([&]()->V{V _lhs12497=_v_11724_v;V _rhs12498=j::builtin("undefined");return V(j::equal(_lhs12497,_rhs12498,true));})())){return _v_11726_fallback;
}
if(j::truth(([&]()->V{V _logical12499=([&]()->V{V _logical12500=([&]()->V{V _logical12501=([&]()->V{V _lhs12502=j::unary("typeof",_v_11724_v);V _rhs12503=this->_literals[2];return V(!j::equal(_lhs12502,_rhs12503,true));})();return !j::truth(_logical12501)?([&]()->V{V _lhs12504=j::get(_v_11724_v,this->_literals[8]);V _rhs12505=_v_11727_least;return j::binary("<",_lhs12504,_rhs12505);})():_logical12501;})();return !j::truth(_logical12500)?([&]()->V{V _lhs12506=j::get(_v_11724_v,this->_literals[8]);V _rhs12507=_v_11728_most;return j::binary(">",_lhs12506,_rhs12507);})():_logical12500;})();return !j::truth(_logical12499)?j::unary("!",([&]()->V{V _receiver12508=([&]()->V{j::Args _array12511;for(const auto &_value:j::elements(_v_11724_v))_array12511.push_back(_value);return j::array(std::move(_array12511));})();V _method12509=this->_literals[9];V _method=j::get(_receiver12508,_method12509);j::Args _params12510=j::Args{this->_v_11718_printable.get()};return j::call(_method,_params12510,_receiver12508);})()):_logical12499;})())){
V _v_11729_many;
_v_11729_many=(j::truth(([&]()->V{V _lhs12512=_v_11728_most;V _rhs12513=V(1.0);return V(j::equal(_lhs12512,_rhs12513,true));})())?this->_literals[10]:(j::truth(([&]()->V{V _lhs12514=_v_11727_least;V _rhs12515=_v_11728_most;return V(j::equal(_lhs12514,_rhs12515,true));})())?([&]()->V{std::u16string _text12516;_text12516+=u"";_text12516+=j::string(_v_11727_least);_text12516+=u" characters";return V(std::move(_text12516));})():(j::truth(([&]()->V{V _lhs12517=_v_11728_most;V _rhs12518=V(2.0);return V(j::equal(_lhs12517,_rhs12518,true));})())?this->_literals[11]:(j::truth(([&]()->V{V _lhs12519=_v_11727_least;V _rhs12520=V(1.0);return V(j::equal(_lhs12519,_rhs12520,true));})())?this->_literals[12]:([&]()->V{std::u16string _text12521;_text12521+=u"";_text12521+=j::string(_v_11727_least);_text12521+=u" or more characters";return V(std::move(_text12521));})()))));
(void)(([&]()->V{V _callee12524=this->_v_11645_fail.get();return j::call(_callee12524,j::Args{([&]()->V{std::u16string _text12522;_text12522+=u"";_text12522+=j::string(_v_11725_name);_text12522+=u" takes ";_text12522+=j::string(_v_11729_many);_text12522+=u", each a printable one from the Basic Multilingual Plane, not ";_text12522+=j::string(([&]()->V{V _callee12523=this->_v_11659_show.get();return j::call(_callee12523,j::Args{_v_11724_v});})());_text12522+=u"";return V(std::move(_text12522));})()});})());

}

return _v_11724_v;

}

return V{};
},3);
this->_v_11730_colour.get()=j::function([=](const j::Args &_args_fn11731,const V &_receiver_fn11731,const V &_self_fn11731) mutable ->V{
V _v_11732_v;
V _v_11733_name;
_v_11732_v=_args_fn11731[0];
_v_11733_name=_args_fn11731[1];
{
if(j::truth(([&]()->V{V _lhs12525=_v_11732_v;V _rhs12526=j::builtin("undefined");return V(j::equal(_lhs12525,_rhs12526,true));})())){return j::builtin("undefined");
}
if(j::truth(([&]()->V{V _callee12527=this->_v_11648_isHex.get();return j::call(_callee12527,j::Args{_v_11732_v});})())){return _v_11732_v;
}
if(j::truth(([&]()->V{V _lhs12528=j::unary("typeof",_v_11732_v);V _rhs12529=this->_literals[2];return V(j::equal(_lhs12528,_rhs12529,true));})())){return j::get(([&]()->V{V _callee12530=this->_v_11643_named.get();return j::call(_callee12530,j::Args{_v_11732_v,_v_11733_name});})(),this->_literals[13]);
}
return ([&]()->V{V _callee12533=this->_v_11645_fail.get();return j::call(_callee12533,j::Args{([&]()->V{std::u16string _text12531;_text12531+=u"";_text12531+=j::string(_v_11733_name);_text12531+=u" takes a colour as #rrggbb or a palette's name such as \"gold\", not ";_text12531+=j::string(([&]()->V{V _callee12532=this->_v_11659_show.get();return j::call(_callee12532,j::Args{_v_11732_v});})());_text12531+=u"";return V(std::move(_text12531));})()});})();

}

return V{};
},2);
this->_v_11736_optionsOf.get()=j::function([=](const j::Args &_args_fn11737,const V &_receiver_fn11737,const V &_self_fn11737) mutable ->V{
V _v_11738_o;
V _v_11739_fx;
V _v_11740_keys;
_v_11738_o=_args_fn11737[0];
_v_11739_fx=_args_fn11737[1];
_v_11740_keys=_args_fn11737[2];
{
V _v_11741_known;
if(j::truth(([&]()->V{V _lhs12534=_v_11738_o;V _rhs12535=j::builtin("undefined");return V(j::equal(_lhs12534,_rhs12535,true));})())){return ([&]()->V{V _obj12536=j::object();return _obj12536;})();
}
if(j::truth(([&]()->V{V _lhs12537=j::unary("typeof",_v_11738_o);V _rhs12538=this->_literals[0];return V(j::equal(_lhs12537,_rhs12538,true));})())){(void)(([&]()->V{V _callee12540=this->_v_11645_fail.get();return j::call(_callee12540,j::Args{([&]()->V{std::u16string _text12539;_text12539+=u"";_text12539+=j::string(_v_11739_fx);_text12539+=u"() takes its options as an object, not ";_text12539+=j::string(_v_11738_o);_text12539+=u": over a list, write list.map((p) => ";_text12539+=j::string(_v_11739_fx);_text12539+=u"(p))";return V(std::move(_text12539));})()});})());
}
if(j::truth(([&]()->V{V _logical12541=([&]()->V{V _logical12542=([&]()->V{V _lhs12543=_v_11738_o;V _rhs12544=V::null();return V(j::equal(_lhs12543,_rhs12544,true));})();return !j::truth(_logical12542)?([&]()->V{V _lhs12545=j::unary("typeof",_v_11738_o);V _rhs12546=this->_literals[14];return V(!j::equal(_lhs12545,_rhs12546,true));})():_logical12542;})();return !j::truth(_logical12541)?([&]()->V{V _receiver12547=j::builtin("Array");V _method12548=this->_literals[15];V _method=j::get(_receiver12547,_method12548);j::Args _params12549=j::Args{_v_11738_o};return j::call(_method,_params12549,_receiver12547);})():_logical12541;})())){(void)(([&]()->V{V _callee12552=this->_v_11645_fail.get();return j::call(_callee12552,j::Args{([&]()->V{std::u16string _text12550;_text12550+=u"";_text12550+=j::string(_v_11739_fx);_text12550+=u"() takes its options as an object, such as { period: 4 }, not ";_text12550+=j::string(([&]()->V{V _callee12551=this->_v_11659_show.get();return j::call(_callee12551,j::Args{_v_11738_o});})());_text12550+=u"";return V(std::move(_text12550));})()});})());
}
_v_11741_known=([&]()->V{j::Args _array12553;for(const auto &_value:j::elements(_v_11740_keys))_array12553.push_back(_value);for(const auto &_value:j::elements(this->_v_11734_COMMON.get()))_array12553.push_back(_value);return j::array(std::move(_array12553));})();
{for(const auto &_item12554:j::elements(([&]()->V{V _receiver12555=j::builtin("Object");V _method12556=this->_literals[16];V _method=j::get(_receiver12555,_method12556);j::Args _params12557=j::Args{_v_11738_o};return j::call(_method,_params12557,_receiver12555);})())){V _v_11742_k;
V _v_11743_v;
V _pattern12558=_item12554;
_v_11742_k=j::get(_pattern12558,V(0));
_v_11743_v=j::get(_pattern12558,V(1));
if(j::truth(([&]()->V{V _logical12559=([&]()->V{V _lhs12560=_v_11743_v;V _rhs12561=j::builtin("undefined");return V(!j::equal(_lhs12560,_rhs12561,true));})();return j::truth(_logical12559)?j::unary("!",([&]()->V{V _receiver12562=_v_11741_known;V _method12563=this->_literals[7];V _method=j::get(_receiver12562,_method12563);j::Args _params12564=j::Args{_v_11742_k};return j::call(_method,_params12564,_receiver12562);})()):_logical12559;})())){(void)(([&]()->V{V _callee12575=this->_v_11645_fail.get();return j::call(_callee12575,j::Args{([&]()->V{std::u16string _text12565;_text12565+=u"";_text12565+=j::string(_v_11739_fx);_text12565+=u"() has no option ";_text12565+=j::string(([&]()->V{V _receiver12566=j::builtin("JSON");V _method12567=this->_literals[4];V _method=j::get(_receiver12566,_method12567);j::Args _params12568=j::Args{_v_11742_k};return j::call(_method,_params12568,_receiver12566);})());_text12565+=u"";_text12565+=j::string((j::truth(j::get(this->_v_11735_RENAMED.get(),([&]()->V{std::u16string _text12569;_text12569+=u"";_text12569+=j::string(_v_11739_fx);_text12569+=u".";_text12569+=j::string(_v_11742_k);_text12569+=u"";return V(std::move(_text12569));})()))?this->_literals[17]:([&]()->V{V _callee12570=this->_v_11657_suggest.get();return j::call(_callee12570,j::Args{_v_11742_k,_v_11741_known});})()));_text12565+=u": ";_text12565+=j::string(([&]()->V{V _logical12571=j::get(this->_v_11735_RENAMED.get(),([&]()->V{std::u16string _text12572;_text12572+=u"";_text12572+=j::string(_v_11739_fx);_text12572+=u".";_text12572+=j::string(_v_11742_k);_text12572+=u"";return V(std::move(_text12572));})());return j::nullish(_logical12571)?([&]()->V{std::u16string _text12573;_text12573+=u"it takes ";_text12573+=j::string(([&]()->V{V _callee12574=this->_v_11662_or.get();return j::call(_callee12574,j::Args{_v_11741_known});})());_text12573+=u"";return V(std::move(_text12573));})():_logical12571;})());_text12565+=u"";return V(std::move(_text12565));})()});})());
}
}}
return _v_11738_o;

}

return V{};
},3);
this->_v_11752_lcm.get()=j::function([=](const j::Args &_args_fn11753,const V &_receiver_fn11753,const V &_self_fn11753) mutable ->V{
V _v_11754_a;
V _v_11755_b;
_v_11754_a=_args_fn11753[0];
_v_11755_b=_args_fn11753[1];
{
V _v_11756_x;
V _v_11757_y;
V _v_11758_k;
_v_11756_x=([&]()->V{V _number12578=([&]()->V{V _lhs12579=_v_11754_a;V _rhs12580=V(100.0);return V(j::number(_lhs12579)*j::number(_rhs12580));})();return V(std::floor(j::number(_number12578)+.5));})();
_v_11757_y=([&]()->V{V _number12583=([&]()->V{V _lhs12584=_v_11755_b;V _rhs12585=V(100.0);return V(j::number(_lhs12584)*j::number(_rhs12585));})();return V(std::floor(j::number(_number12583)+.5));})();
if(j::truth(([&]()->V{V _logical12586=([&]()->V{V _lhs12587=_v_11756_x;V _rhs12588=V(1.0);return j::binary("<",_lhs12587,_rhs12588);})();return !j::truth(_logical12586)?([&]()->V{V _lhs12589=_v_11757_y;V _rhs12590=V(1.0);return j::binary("<",_lhs12589,_rhs12590);})():_logical12586;})())){return j::builtin("undefined");
}
_v_11758_k=([&]()->V{V _lhs12591=_v_11756_x;V _rhs12592=([&]()->V{V _callee12593=this->_v_11748_gcd.get();return j::call(_callee12593,j::Args{_v_11756_x,_v_11757_y});})();return V(j::number(_lhs12591)/j::number(_rhs12592));})();
return (j::truth(([&]()->V{V _lhs12594=([&]()->V{V _lhs12596=_v_11758_k;V _rhs12597=_v_11757_y;return V(j::number(_lhs12596)*j::number(_rhs12597));})();V _rhs12595=V(6000.0);return j::binary("<=",_lhs12594,_rhs12595);})())?j::unary("+",([&]()->V{V _receiver12598=([&]()->V{V _lhs12601=_v_11758_k;V _rhs12602=_v_11755_b;return V(j::number(_lhs12601)*j::number(_rhs12602));})();V _method12599=this->_literals[18];V _method=j::get(_receiver12598,_method12599);j::Args _params12600=j::Args{V(6.0)};return j::call(_method,_params12600,_receiver12598);})()):j::builtin("undefined"));

}

return V{};
},2);
this->_v_11759_quiet.get()=j::function([=](const j::Args &_args_fn11760,const V &_receiver_fn11760,const V &_self_fn11760) mutable ->V{
V _v_11761_t;
V _v_11762_busy;
V _v_11763_span;
_v_11761_t=_args_fn11760[0];
_v_11762_busy=_args_fn11760[1];
_v_11763_span=_args_fn11760[2];
{
V _v_11764_n;
V _v_11765_from;
_v_11764_n=V(480.0);
_v_11765_from=j::unary("-",V(1.0));
{V _v_11766_k;
_v_11766_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs12603=_v_11766_k;V _rhs12604=_v_11764_n;return j::binary("<=",_lhs12603,_rhs12604);})());(void)(j::increment(_v_11766_k,1,false))){
V _v_11767_u;
_v_11767_u=([&]()->V{V _lhs12605=_v_11761_t;V _rhs12606=([&]()->V{V _lhs12607=([&]()->V{V _lhs12609=_v_11763_span;V _rhs12610=_v_11766_k;return V(j::number(_lhs12609)*j::number(_rhs12610));})();V _rhs12608=_v_11764_n;return V(j::number(_lhs12607)/j::number(_rhs12608));})();return j::binary("+",_lhs12605,_rhs12606);})();
if(j::truth(([&]()->V{V _logical12611=([&]()->V{V _lhs12612=_v_11765_from;V _rhs12613=V(0.0);return j::binary("<",_lhs12612,_rhs12613);})();return j::truth(_logical12611)?j::unary("!",([&]()->V{V _callee12614=_v_11762_busy;return j::call(_callee12614,j::Args{_v_11767_u});})()):_logical12611;})())){(void)((_v_11765_from=_v_11767_u));
}else {if(j::truth(([&]()->V{V _logical12616=([&]()->V{V _lhs12617=_v_11765_from;V _rhs12618=V(0.0);return j::binary(">=",_lhs12617,_rhs12618);})();return j::truth(_logical12616)?([&]()->V{V _callee12619=_v_11762_busy;return j::call(_callee12619,j::Args{_v_11767_u});})():_logical12616;})())){return j::unary("+",([&]()->V{V _receiver12620=([&]()->V{V _lhs12623=([&]()->V{V _lhs12625=([&]()->V{V _lhs12627=_v_11765_from;V _rhs12628=_v_11767_u;return j::binary("+",_lhs12627,_rhs12628);})();V _rhs12626=V(2.0);return V(j::number(_lhs12625)/j::number(_rhs12626));})();V _rhs12624=([&]()->V{V _lhs12629=([&]()->V{V _lhs12631=_v_11763_span;V _rhs12632=_v_11764_n;return V(j::number(_lhs12631)/j::number(_rhs12632));})();V _rhs12630=V(2.0);return V(j::number(_lhs12629)/j::number(_rhs12630));})();return V(j::number(_lhs12623)-j::number(_rhs12624));})();V _method12621=this->_literals[18];V _method=j::get(_receiver12620,_method12621);j::Args _params12622=j::Args{V(3.0)};return j::call(_method,_params12622,_receiver12620);})());
}
}

}
}
return (j::truth(([&]()->V{V _lhs12633=_v_11765_from;V _rhs12634=V(0.0);return j::binary("<",_lhs12633,_rhs12634);})())?_v_11761_t:j::unary("+",([&]()->V{V _receiver12635=([&]()->V{V _lhs12638=([&]()->V{V _lhs12640=([&]()->V{V _lhs12642=_v_11765_from;V _rhs12643=_v_11761_t;return j::binary("+",_lhs12642,_rhs12643);})();V _rhs12641=_v_11763_span;return j::binary("+",_lhs12640,_rhs12641);})();V _rhs12639=V(2.0);return V(j::number(_lhs12638)/j::number(_rhs12639));})();V _method12636=this->_literals[18];V _method=j::get(_receiver12635,_method12636);j::Args _params12637=j::Args{V(3.0)};return j::call(_method,_params12637,_receiver12635);})()));

}

return V{};
},3);
this->_v_11784_periodOf.get()=j::function([=](const j::Args &_args_fn11785,const V &_receiver_fn11785,const V &_self_fn11785) mutable ->V{
V _v_11786_p;
V _v_11787_options;
_v_11786_p=_args_fn11785[0];
_v_11787_options=_args_fn11785[1];
{
V _v_11788_m;
V _v_11789_v;
_v_11788_m=j::get(_v_11786_p,this->_literals[19]);
if(j::truth(j::unary("!",j::get(_v_11788_m,this->_literals[20])))){return j::builtin("undefined");
}
if(j::truth(j::get(_v_11788_m,this->_literals[21]))){return j::get(_v_11788_m,this->_literals[21]);
}
if(j::truth(([&]()->V{V _receiver12644=this->_v_11783_ours.get();V _method12645=this->_literals[22];V _method=j::get(_receiver12644,_method12645);j::Args _params12646=j::Args{_v_11786_p};return j::call(_method,_params12646,_receiver12644);})())){return j::builtin("undefined");
}
_v_11789_v=(j::truth(([&]()->V{V _receiver12647=j::builtin("Object");V _method12648=this->_literals[3];V _method=j::get(_receiver12647,_method12648);j::Args _params12649=j::Args{this->_v_11782_LOOPS.get(),j::get(_v_11788_m,this->_literals[23])};return j::call(_method,_params12649,_receiver12647);})())?j::get(_v_11787_options,j::get(this->_v_11782_LOOPS.get(),j::get(_v_11788_m,this->_literals[23]))):j::builtin("undefined"));
return (j::truth(([&]()->V{V _logical12650=([&]()->V{V _logical12651=([&]()->V{V _lhs12652=j::unary("typeof",_v_11789_v);V _rhs12653=this->_literals[0];return V(j::equal(_lhs12652,_rhs12653,true));})();return j::truth(_logical12651)?([&]()->V{V _receiver12654=j::builtin("Number");V _method12655=this->_literals[1];V _method=j::get(_receiver12654,_method12655);j::Args _params12656=j::Args{_v_11789_v};return j::call(_method,_params12656,_receiver12654);})():_logical12651;})();return j::truth(_logical12650)?([&]()->V{V _lhs12657=_v_11789_v;V _rhs12658=V(0.0);return j::binary(">",_lhs12657,_rhs12658);})():_logical12650;})())?_v_11789_v:j::builtin("undefined"));

}

return V{};
},2);
this->_v_11800_sourceOf.get()=j::function([=](const j::Args &_args_fn11801,const V &_receiver_fn11801,const V &_self_fn11801) mutable ->V{
V _v_11802_src;
V _v_11803_fx;
_v_11802_src=_args_fn11801[0];
_v_11803_fx=_args_fn11801[1];
{
if(j::truth(([&]()->V{V _lhs12659=j::unary("typeof",_v_11802_src);V _rhs12660=this->_literals[2];return V(j::equal(_lhs12659,_rhs12660,true));})())){
V _v_11804_text;
_v_11804_text=([&]()->V{V _callee12661=this->_v_11793_textOf.get();return j::call(_callee12661,j::Args{_v_11802_src});})();
if(j::truth(([&]()->V{V _receiver12662=j::regexp(u"[\\ud800-\\udfff]","");V _method12663=this->_literals[24];V _method=j::get(_receiver12662,_method12663);j::Args _params12664=j::Args{_v_11804_text};return j::call(_method,_params12664,_receiver12662);})())){(void)(([&]()->V{V _callee12672=this->_v_11645_fail.get();return j::call(_callee12672,j::Args{([&]()->V{std::u16string _text12665;_text12665+=u"";_text12665+=j::string(_v_11803_fx);_text12665+=u"() takes text of characters from the Basic Multilingual Plane, one a cell, not emoji: ";_text12665+=j::string(([&]()->V{V _receiver12669=j::builtin("JSON");V _method12670=this->_literals[4];V _method=j::get(_receiver12669,_method12670);j::Args _params12671=j::Args{([&]()->V{V _receiver12666=_v_11802_src;V _method12667=this->_literals[25];V _method=j::get(_receiver12666,_method12667);j::Args _params12668=j::Args{V(0.0),V(40.0)};return j::call(_method,_params12668,_receiver12666);})()};return j::call(_method,_params12671,_receiver12669);})());_text12665+=u"";return V(std::move(_text12665));})()});})());
}
return ([&]()->V{V _callee12686=this->_v_11641_asPiece.get();return j::call(_callee12686,j::Args{_v_11804_text,([&]()->V{V _logical12673=([&]()->V{V _chain12674=_v_11804_text;V _chain12675=j::get(_chain12674,this->_literals[26]);V _chain12676=j::call(_chain12675,j::Args{this->_literals[27]},_chain12674);V _chain12677=j::get(_chain12676,this->_literals[6]);V _chain12678=j::call(_chain12677,j::Args{j::function([=](const j::Args &_args_fn11805,const V &_receiver_fn11805,const V &_self_fn11805) mutable ->V{
V _v_11806_l;
_v_11806_l=_args_fn11805[0];
return ([&]()->V{V _receiver12679=_v_11806_l;V _method12680=this->_literals[28];V _method=j::get(_receiver12679,_method12680);j::Args _params12681=j::Args{};return j::call(_method,_params12681,_receiver12679);})();
return V{};
},1)},_chain12676);V _chain12682=j::get(_chain12678,this->_literals[29]);V _chain12683=j::call(_chain12682,j::Args{j::builtin("Boolean")},_chain12678);if(j::nullish(_chain12683))return V{};V _chain12684=j::get(_chain12683,this->_literals[25]);V _chain12685=j::call(_chain12684,j::Args{V(0.0),V(40.0)},_chain12683);return _chain12685;})();return j::nullish(_logical12673)?this->_literals[30]:_logical12673;})()});})();

}

if(j::truth(([&]()->V{V _lhs12687=_v_11802_src;V _rhs12688=this->_v_11639_Surface.get();return j::binary("instanceof",_lhs12687,_rhs12688);})())){return ([&]()->V{V _callee12689=this->_v_11641_asPiece.get();return j::call(_callee12689,j::Args{_v_11802_src,this->_literals[31]});})();
}
if(j::truth(([&]()->V{V _logical12690=([&]()->V{V _logical12691=([&]()->V{V _logical12692=j::unary("!",_v_11802_src);return !j::truth(_logical12692)?([&]()->V{V _lhs12693=j::unary("typeof",_v_11802_src);V _rhs12694=this->_literals[14];return V(!j::equal(_lhs12693,_rhs12694,true));})():_logical12692;})();return !j::truth(_logical12691)?j::unary("!",j::get(_v_11802_src,this->_literals[19])):_logical12691;})();return !j::truth(_logical12690)?([&]()->V{V _lhs12695=j::unary("typeof",j::get(_v_11802_src,this->_literals[32]));V _rhs12696=this->_literals[33];return V(!j::equal(_lhs12695,_rhs12696,true));})():_logical12690;})())){(void)(([&]()->V{V _callee12700=this->_v_11645_fail.get();return j::call(_callee12700,j::Args{([&]()->V{std::u16string _text12697;_text12697+=u"";_text12697+=j::string(_v_11803_fx);_text12697+=u"() takes a piece, a block of text or a Surface, not ";_text12697+=j::string((j::truth(([&]()->V{V _lhs12698=_v_11802_src;V _rhs12699=V::null();return V(j::equal(_lhs12698,_rhs12699,true));})())?this->_literals[34]:j::unary("typeof",_v_11802_src)));_text12697+=u"";return V(std::move(_text12697));})()});})());
}
return _v_11802_src;

}

return V{};
},2);
this->_v_11807_mainInk.get()=j::function([=](const j::Args &_args_fn11808,const V &_receiver_fn11808,const V &_self_fn11808) mutable ->V{
j::Cell _v_11809_p;
j::Cell _v_11810_at;
j::Cell _v_11811_options;
j::Cell _v_11812_map;
_v_11809_p.get()=_args_fn11808[0];
_v_11810_at.get()=_args_fn11808[1];
_v_11811_options.get()=_args_fn11808[2];
_v_11812_map.get()=_args_fn11808[3];
{
V _v_11813_most;
_v_11813_most=j::function([=](const j::Args &_args_fn11814,const V &_receiver_fn11814,const V &_self_fn11814) mutable ->V{
V _v_11815_paper;
_v_11815_paper=_args_fn11814[0];
{
V _v_11816_text;
V _v_11817_color;
V _v_11818_count;
V _v_11819_best;
V _v_11820_n;
V _pattern12703=([&]()->V{V _callee12702=this->_v_11656_snapshot.get();return j::call(_callee12702,j::Args{_v_11809_p.get(),_v_11810_at.get(),([&]()->V{V _obj12701=j::object();j::put(_obj12701,this->_literals[35],_v_11815_paper);j::put(_obj12701,this->_literals[36],_v_11811_options.get());return _obj12701;})()});})();
_v_11816_text=j::get(_pattern12703,this->_literals[30]);
_v_11817_color=j::get(_pattern12703,this->_literals[37]);
_v_11818_count=([&]()->V{V _callee12704=j::builtin("Map");return j::construct(_callee12704,j::Args{});})();
_v_11819_best=V(0.0);
_v_11820_n=V(0.0);
{V _v_11821_k;
V _v_11822_i;
_v_11821_k=V(0.0);
_v_11822_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs12705=_v_11821_k;V _rhs12706=j::get(_v_11816_text,this->_literals[8]);return j::binary("<",_lhs12705,_rhs12706);})());(void)(j::increment(_v_11821_k,1,false))){
V _v_11823_c;
_v_11823_c=([&]()->V{V _receiver12707=_v_11816_text;V _method12708=this->_literals[38];V _method=j::get(_receiver12707,_method12708);j::Args _params12709=j::Args{_v_11821_k};return j::call(_method,_params12709,_receiver12707);})();
if(j::truth(([&]()->V{V _lhs12710=_v_11823_c;V _rhs12711=V(10.0);return V(j::equal(_lhs12710,_rhs12711,true));})())){continue;
}
if(j::truth(([&]()->V{V _logical12712=([&]()->V{V _logical12713=([&]()->V{V _lhs12714=_v_11823_c;V _rhs12715=V(32.0);return V(!j::equal(_lhs12714,_rhs12715,true));})();return j::truth(_logical12713)?_v_11817_color:_logical12713;})();return j::truth(_logical12712)?([&]()->V{V _lhs12716=_v_11822_i;V _rhs12717=j::get(_v_11817_color,this->_literals[8]);return j::binary("<",_lhs12716,_rhs12717);})():_logical12712;})())){
V _v_11824_v;
_v_11824_v=([&]()->V{V _lhs12718=([&]()->V{V _logical12720=([&]()->V{V _receiver12721=_v_11818_count;V _method12722=this->_literals[39];V _method=j::get(_receiver12721,_method12722);j::Args _params12723=j::Args{j::get(_v_11817_color,_v_11822_i)};return j::call(_method,_params12723,_receiver12721);})();return j::nullish(_logical12720)?V(0.0):_logical12720;})();V _rhs12719=V(1.0);return j::binary("+",_lhs12718,_rhs12719);})();
(void)(([&]()->V{V _receiver12724=_v_11818_count;V _method12725=this->_literals[40];V _method=j::get(_receiver12724,_method12725);j::Args _params12726=j::Args{j::get(_v_11817_color,_v_11822_i),_v_11824_v};return j::call(_method,_params12726,_receiver12724);})());
if(j::truth(([&]()->V{V _lhs12727=_v_11824_v;V _rhs12728=_v_11820_n;return j::binary(">",_lhs12727,_rhs12728);})())){(void)(((_v_11820_n=_v_11824_v),(_v_11819_best=j::get(_v_11817_color,_v_11822_i))));
}

}

(void)(j::increment(_v_11822_i,1,false));

}
}
return ([&]()->V{V _logical12731=j::get(_v_11812_map.get(),_v_11819_best);return j::nullish(_logical12731)?V(0.0):_logical12731;})();

}

return V{};
},1);
return ([&]()->V{V _obj12732=j::object();j::put(_obj12732,this->_literals[41],([&]()->V{V _callee12733=_v_11813_most;return j::call(_callee12733,j::Args{V(true)});})());j::put(_obj12732,this->_literals[13],([&]()->V{V _callee12734=_v_11813_most;return j::call(_callee12734,j::Args{V(false)});})());return _obj12732;})();

}

return V{};
},4);
this->_v_11825_build.get()=j::function([=](const j::Args &_args_fn11826,const V &_receiver_fn11826,const V &_self_fn11826) mutable ->V{
V _v_11827_fx;
V _v_11828_src;
V _v_11829_o;
V _v_11830_make;
V _v_11831_keep;
_v_11827_fx=_args_fn11826[0];
_v_11828_src=_args_fn11826[1];
_v_11829_o=_args_fn11826[2];
_v_11830_make=_args_fn11826[3];
V _default12735=_args_fn11826[4];if(_default12735.kind==V::Undefined||_default12735.kind==V::Hole)_default12735=V(true);
_v_11831_keep=_default12735;
{
j::Cell _v_11832_p;
j::Cell _v_11833_m;
V _v_11834_options;
j::Cell _v_11835_inks;
j::Cell _v_11836_e;
j::Cell _v_11837_ink;
V _v_11838_cols;
V _v_11839_rows;
V _v_11840_own;
V _v_11841_loop;
V _v_11842_name;
V _v_11843_note;
V _v_11844_still;
V _v_11845_out;
V _v_11871_theirs;
V _v_11872_from;
V _v_11873_motion;
_v_11832_p.get()=([&]()->V{V _callee12736=this->_v_11800_sourceOf.get();return j::call(_callee12736,j::Args{_v_11828_src,_v_11827_fx});})();
_v_11833_m.get()=j::get(_v_11832_p.get(),this->_literals[19]);
if(j::truth(([&]()->V{V _logical12737=([&]()->V{V _lhs12738=j::get(_v_11829_o,this->_literals[36]);V _rhs12739=j::builtin("undefined");return V(!j::equal(_lhs12738,_rhs12739,true));})();return j::truth(_logical12737)?([&]()->V{V _logical12740=([&]()->V{V _logical12741=([&]()->V{V _lhs12742=j::get(_v_11829_o,this->_literals[36]);V _rhs12743=V::null();return V(j::equal(_lhs12742,_rhs12743,true));})();return !j::truth(_logical12741)?([&]()->V{V _lhs12744=j::unary("typeof",j::get(_v_11829_o,this->_literals[36]));V _rhs12745=this->_literals[14];return V(!j::equal(_lhs12744,_rhs12745,true));})():_logical12741;})();return !j::truth(_logical12740)?([&]()->V{V _receiver12746=j::builtin("Array");V _method12747=this->_literals[15];V _method=j::get(_receiver12746,_method12747);j::Args _params12748=j::Args{j::get(_v_11829_o,this->_literals[36])};return j::call(_method,_params12748,_receiver12746);})():_logical12740;})():_logical12737;})())){(void)(([&]()->V{V _callee12751=this->_v_11645_fail.get();return j::call(_callee12751,j::Args{([&]()->V{std::u16string _text12749;_text12749+=u"";_text12749+=j::string(_v_11827_fx);_text12749+=u".options takes the source's options as an object, such as { shine: 0 }, not ";_text12749+=j::string(([&]()->V{V _callee12750=this->_v_11659_show.get();return j::call(_callee12750,j::Args{j::get(_v_11829_o,this->_literals[36])});})());_text12749+=u"";return V(std::move(_text12749));})()});})());
}
_v_11834_options=(j::truth(([&]()->V{V _logical12752=j::get(_v_11833_m.get(),this->_literals[36]);return !j::truth(_logical12752)?j::get(_v_11829_o,this->_literals[36]):_logical12752;})())?([&]()->V{V _obj12753=j::object();V _spread12754=j::get(_v_11833_m.get(),this->_literals[36]);for(const auto &_key:j::keys(_spread12754))j::put(_obj12753,_key,j::get(_spread12754,_key));V _spread12755=j::get(_v_11829_o,this->_literals[36]);for(const auto &_key:j::keys(_spread12755))j::put(_obj12753,_key,j::get(_spread12755,_key));return _obj12753;})():j::builtin("undefined"));
_v_11835_inks.get()=([&]()->V{V _callee12757=this->_v_11768_Inks.get();return j::construct(_callee12757,j::Args{(j::truth(_v_11831_keep)?([&]()->V{V _logical12756=j::get(_v_11833_m.get(),this->_literals[42]);return j::nullish(_logical12756)?V::null():_logical12756;})():V::null())});})();
_v_11836_e.get()=([&]()->V{V _callee12761=_v_11830_make;return j::call(_callee12761,j::Args{([&]()->V{V _obj12758=j::object();j::put(_obj12758,this->_literals[19],_v_11833_m.get());j::put(_obj12758,this->_literals[43],_v_11835_inks.get());j::put(_obj12758,this->_literals[44],_v_11832_p.get());j::put(_obj12758,this->_literals[36],([&]()->V{V _logical12759=_v_11834_options;return j::nullish(_logical12759)?([&]()->V{V _obj12760=j::object();return _obj12760;})():_logical12759;})());return _obj12758;})()});})();
_v_11837_ink.get()=(j::truth(([&]()->V{V _logical12762=_v_11831_keep;return j::truth(_logical12762)?j::get(_v_11833_m.get(),this->_literals[42]):_logical12762;})())?([&]()->V{V _callee12766=this->_v_11807_mainInk.get();return j::call(_callee12766,j::Args{_v_11832_p.get(),([&]()->V{V _logical12763=j::get(_v_11833_m.get(),this->_literals[45]);return j::nullish(_logical12763)?V(0.0):_logical12763;})(),([&]()->V{V _logical12764=_v_11834_options;return j::nullish(_logical12764)?([&]()->V{V _obj12765=j::object();return _obj12765;})():_logical12764;})(),j::get(_v_11835_inks.get(),this->_literals[6])});})():(j::truth(j::get(j::get(_v_11835_inks.get(),this->_literals[46]),this->_literals[8]))?([&]()->V{V _obj12767=j::object();j::put(_obj12767,this->_literals[41],([&]()->V{V _receiver12768=_v_11835_inks.get();V _method12769=this->_literals[47];V _method=j::get(_receiver12768,_method12769);j::Args _params12770=j::Args{j::get(this->_v_11635_INK.get(),this->_literals[41])};return j::call(_method,_params12770,_receiver12768);})());j::put(_obj12767,this->_literals[13],([&]()->V{V _receiver12771=_v_11835_inks.get();V _method12772=this->_literals[47];V _method=j::get(_receiver12771,_method12772);j::Args _params12773=j::Args{j::get(this->_v_11635_INK.get(),this->_literals[13])};return j::call(_method,_params12773,_receiver12771);})());return _obj12767;})():V::null()));
_v_11838_cols=([&]()->V{V _logical12774=j::get(_v_11836_e.get(),this->_literals[48]);return j::nullish(_logical12774)?j::get(_v_11833_m.get(),this->_literals[48]):_logical12774;})();
_v_11839_rows=([&]()->V{V _logical12775=j::get(_v_11836_e.get(),this->_literals[49]);return j::nullish(_logical12775)?j::get(_v_11833_m.get(),this->_literals[49]):_logical12775;})();
if(j::truth(([&]()->V{V _logical12776=([&]()->V{V _lhs12777=_v_11838_cols;V _rhs12778=j::get(this->_v_11636_MAX.get(),this->_literals[48]);return j::binary(">",_lhs12777,_rhs12778);})();return !j::truth(_logical12776)?([&]()->V{V _lhs12779=_v_11839_rows;V _rhs12780=j::get(this->_v_11636_MAX.get(),this->_literals[49]);return j::binary(">",_lhs12779,_rhs12780);})():_logical12776;})())){(void)(([&]()->V{V _callee12782=this->_v_11645_fail.get();return j::call(_callee12782,j::Args{([&]()->V{std::u16string _text12781;_text12781+=u"";_text12781+=j::string(_v_11827_fx);_text12781+=u"() makes a piece ";_text12781+=j::string(_v_11838_cols);_text12781+=u" by ";_text12781+=j::string(_v_11839_rows);_text12781+=u" from one ";_text12781+=j::string(j::get(_v_11833_m.get(),this->_literals[48]));_text12781+=u" by ";_text12781+=j::string(j::get(_v_11833_m.get(),this->_literals[49]));_text12781+=u", past the ";_text12781+=j::string(j::get(this->_v_11636_MAX.get(),this->_literals[48]));_text12781+=u" by ";_text12781+=j::string(j::get(this->_v_11636_MAX.get(),this->_literals[49]));_text12781+=u" a piece can be: use a smaller source, or a smaller reach";return V(std::move(_text12781));})()});})());
}
_v_11840_own=([&]()->V{V _callee12785=this->_v_11784_periodOf.get();return j::call(_callee12785,j::Args{_v_11832_p.get(),([&]()->V{V _logical12783=_v_11834_options;return j::nullish(_logical12783)?([&]()->V{V _obj12784=j::object();return _obj12784;})():_logical12783;})()});})();
_v_11841_loop=(j::truth(j::unary("!",j::get(_v_11836_e.get(),this->_literals[50])))?_v_11840_own:(j::truth(j::get(_v_11836_e.get(),this->_literals[51]))?([&]()->V{V _callee12787=this->_v_11752_lcm.get();return j::call(_callee12787,j::Args{([&]()->V{V _logical12786=_v_11840_own;return j::nullish(_logical12786)?j::get(_v_11836_e.get(),this->_literals[51]):_logical12786;})(),j::get(_v_11836_e.get(),this->_literals[51])});})():j::builtin("undefined")));
_v_11842_name=(j::truth(([&]()->V{V _lhs12788=j::get(_v_11829_o,this->_literals[52]);V _rhs12789=j::builtin("undefined");return V(j::equal(_lhs12788,_rhs12789,true));})())?j::get(_v_11833_m.get(),this->_literals[52]):(j::truth(([&]()->V{V _lhs12790=j::unary("typeof",j::get(_v_11829_o,this->_literals[52]));V _rhs12791=this->_literals[2];return V(j::equal(_lhs12790,_rhs12791,true));})())?j::get(_v_11829_o,this->_literals[52]):([&]()->V{V _callee12794=this->_v_11645_fail.get();return j::call(_callee12794,j::Args{([&]()->V{std::u16string _text12792;_text12792+=u"";_text12792+=j::string(_v_11827_fx);_text12792+=u".name takes a string, not ";_text12792+=j::string(([&]()->V{V _callee12793=this->_v_11659_show.get();return j::call(_callee12793,j::Args{j::get(_v_11829_o,this->_literals[52])});})());_text12792+=u"";return V(std::move(_text12792));})()});})()));
_v_11843_note=([&]()->V{V _logical12795=j::get(_v_11829_o,this->_literals[53]);return j::nullish(_logical12795)?([&]()->V{V _receiver12796=([&]()->V{std::u16string _text12799;_text12799+=u"";_text12799+=j::string(_v_11842_name);_text12799+=u", ";_text12799+=j::string(j::get(_v_11836_e.get(),this->_literals[54]));_text12799+=u"";return V(std::move(_text12799));})();V _method12797=this->_literals[25];V _method=j::get(_receiver12796,_method12797);j::Args _params12798=j::Args{V(0.0),V(72.0)};return j::call(_method,_params12798,_receiver12796);})():_logical12795;})();
_v_11844_still=([&]()->V{V _logical12800=j::get(_v_11836_e.get(),this->_literals[45]);return j::nullish(_logical12800)?j::get(_v_11833_m.get(),this->_literals[45]):_logical12800;})();
_v_11845_out=([&]()->V{V _callee12861=this->_v_11651_piece.get();return j::call(_callee12861,j::Args{([&]()->V{V _obj12801=j::object();j::put(_obj12801,this->_literals[52],_v_11842_name);j::put(_obj12801,this->_literals[53],_v_11843_note);j::put(_obj12801,this->_literals[23],j::get(_v_11833_m.get(),this->_literals[23]));j::put(_obj12801,this->_literals[48],_v_11838_cols);j::put(_obj12801,this->_literals[49],_v_11839_rows);j::put(_obj12801,this->_literals[20],(j::truth(j::get(_v_11836_e.get(),this->_literals[50]))?([&]()->V{V _logical12802=j::get(_v_11833_m.get(),this->_literals[20]);return !j::truth(_logical12802)?V(24.0):_logical12802;})():j::get(_v_11833_m.get(),this->_literals[20])));V _spread12803=(j::truth(j::get(j::get(_v_11835_inks.get(),this->_literals[46]),this->_literals[8]))?([&]()->V{V _obj12804=j::object();j::put(_obj12804,this->_literals[42],j::get(_v_11835_inks.get(),this->_literals[46]));j::put(_obj12804,this->_literals[55],([&]()->V{V _logical12805=_v_11837_ink.get();return j::nullish(_logical12805)?V(0.0):_logical12805;})());return _obj12804;})():([&]()->V{V _obj12806=j::object();return _obj12806;})());for(const auto &_key:j::keys(_spread12803))j::put(_obj12801,_key,j::get(_spread12803,_key));j::put(_obj12801,this->_literals[56],j::get(_v_11833_m.get(),this->_literals[56]));j::put(_obj12801,this->_literals[57],j::get(_v_11833_m.get(),this->_literals[57]));j::put(_obj12801,this->_literals[21],_v_11841_loop);j::put(_obj12801,this->_literals[45],(j::truth(_v_11844_still)?j::unary("+",([&]()->V{V _receiver12807=_v_11844_still;V _method12808=this->_literals[18];V _method=j::get(_receiver12807,_method12808);j::Args _params12809=j::Args{V(3.0)};return j::call(_method,_params12809,_receiver12807);})()):j::builtin("undefined")));j::put(_obj12801,this->_literals[58],j::get(_v_11833_m.get(),this->_literals[58]));j::put(_obj12801,this->_literals[36],_v_11834_options);return _obj12801;})(),([&]()->V{V _obj12810=j::object();j::put(_obj12810,this->_literals[59],j::function([=](const j::Args &_args_fn11846,const V &_receiver_fn11846,const V &_self_fn11846) mutable ->V{
V _v_11847_opts;
_v_11847_opts=_args_fn11846[0];
{
j::Cell _v_11848_play;
j::Cell _v_11849_palette;
j::Cell _v_11850_grid;
j::Cell _v_11851_other;
j::Cell _v_11852_map;
j::Cell _v_11853_read;
j::Cell _v_11863_draw;
j::Cell _v_11864_fctx;
_v_11848_play.get()=([&]()->V{V _callee12811=this->_v_11654_sample.get();return j::call(_callee12811,j::Args{_v_11832_p.get(),_v_11847_opts});})();
_v_11849_palette.get()=(j::truth(j::get(j::get(_v_11835_inks.get(),this->_literals[46]),this->_literals[8]))?([&]()->V{V _callee12813=this->_v_11638_Palette.get();return j::construct(_callee12813,j::Args{j::get(_v_11835_inks.get(),this->_literals[46]),([&]()->V{V _logical12812=_v_11837_ink.get();return j::nullish(_logical12812)?V(0.0):_logical12812;})()});})():V::null());
_v_11850_grid.get()=([&]()->V{V _callee12816=this->_v_11639_Surface.get();return j::construct(_callee12816,j::Args{j::get(_v_11833_m.get(),this->_literals[48]),j::get(_v_11833_m.get(),this->_literals[49]),([&]()->V{V _obj12814=j::object();j::put(_obj12814,this->_literals[42],_v_11849_palette.get());j::put(_obj12814,this->_literals[60],([&]()->V{V _logical12815=j::get(_v_11833_m.get(),this->_literals[57]);return j::nullish(_logical12815)?V(2.0):_logical12815;})());return _obj12814;})()});})();
_v_11851_other.get()=([&]()->V{V _callee12819=this->_v_11639_Surface.get();return j::construct(_callee12819,j::Args{j::get(_v_11833_m.get(),this->_literals[48]),j::get(_v_11833_m.get(),this->_literals[49]),([&]()->V{V _obj12817=j::object();j::put(_obj12817,this->_literals[42],_v_11849_palette.get());j::put(_obj12817,this->_literals[60],([&]()->V{V _logical12818=j::get(_v_11833_m.get(),this->_literals[57]);return j::nullish(_logical12818)?V(2.0):_logical12818;})());return _obj12817;})()});})();
V _pattern12820=_v_11835_inks.get();
_v_11852_map.get()=j::get(_pattern12820,this->_literals[6]);
_v_11853_read.get()=j::function([=](const j::Args &_args_fn11854,const V &_receiver_fn11854,const V &_self_fn11854) mutable ->V{
V _v_11855_into;
V _v_11856_t;
V _v_11857_paper;
V _v_11858_mono;
_v_11855_into=_args_fn11854[0];
_v_11856_t=_args_fn11854[1];
_v_11857_paper=_args_fn11854[2];
_v_11858_mono=_args_fn11854[3];
{
V _v_11859_g;
V _v_11860_none;
_v_11859_g=([&]()->V{V _receiver12822=_v_11848_play.get();V _method12823=this->_literals[62];V _method=j::get(_receiver12822,_method12823);j::Args _params12824=j::Args{_v_11856_t,([&]()->V{V _obj12821=j::object();j::put(_obj12821,this->_literals[35],_v_11857_paper);j::put(_obj12821,this->_literals[61],_v_11858_mono);return _obj12821;})()};return j::call(_method,_params12824,_receiver12822);})();
_v_11860_none=(j::truth(_v_11849_palette.get())?([&]()->V{V _receiver12825=_v_11849_palette.get();V _method12826=this->_literals[55];V _method=j::get(_receiver12825,_method12826);j::Args _params12827=j::Args{_v_11857_paper};return j::call(_method,_params12827,_receiver12825);})():this->_v_11637_NONE.get());
(void)(([&]()->V{V _receiver12828=j::get(_v_11855_into,this->_literals[63]);V _method12829=this->_literals[40];V _method=j::get(_receiver12828,_method12829);j::Args _params12830=j::Args{j::get(_v_11859_g,this->_literals[63])};return j::call(_method,_params12830,_receiver12828);})());
{V _v_11861_i;
_v_11861_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs12831=_v_11861_i;V _rhs12832=j::get(j::get(_v_11859_g,this->_literals[64]),this->_literals[8]);return j::binary("<",_lhs12831,_rhs12832);})());(void)(j::increment(_v_11861_i,1,false))){
V _v_11862_c;
_v_11862_c=j::get(j::get(_v_11859_g,this->_literals[64]),_v_11861_i);
(void)(([&]()->V{V _base12834=j::get(_v_11855_into,this->_literals[64]);V _key12835=_v_11861_i;V _assign12833=(j::truth(([&]()->V{V _lhs12836=_v_11862_c;V _rhs12837=this->_v_11637_NONE.get();return V(j::equal(_lhs12836,_rhs12837,true));})())?_v_11860_none:([&]()->V{V _logical12838=j::get(_v_11852_map.get(),_v_11862_c);return j::nullish(_logical12838)?_v_11860_none:_logical12838;})());return j::put(_base12834,_key12835,_assign12833);})());

}
}
(void)(([&]()->V{V _base12840=_v_11855_into;V _key12841=this->_literals[35];V _assign12839=_v_11857_paper;return j::put(_base12840,_key12841,_assign12839);})());
(void)(([&]()->V{V _base12843=_v_11855_into;V _key12844=this->_literals[61];V _assign12842=_v_11858_mono;return j::put(_base12843,_key12844,_assign12842);})());
return _v_11855_into;

}

return V{};
},4);
_v_11863_draw.get()=([&]()->V{V _receiver12845=_v_11836_e.get();V _method12846=this->_literals[59];V _method=j::get(_receiver12845,_method12846);j::Args _params12847=j::Args{};return j::call(_method,_params12847,_receiver12845);})();
_v_11864_fctx.get()=V::null();
return j::function([=](const j::Args &_args_fn11865,const V &_receiver_fn11865,const V &_self_fn11865) mutable ->V{
V _v_11866_t;
V _v_11867_s;
j::Cell _v_11868_ctx;
_v_11866_t=_args_fn11865[0];
_v_11867_s=_args_fn11865[1];
_v_11868_ctx.get()=_args_fn11865[2];
{
(void)((j::nullish(_v_11864_fctx.get())?(_v_11864_fctx.get()=([&]()->V{V _receiver12856=j::builtin("Object");V _method12857=this->_literals[67];V _method=j::get(_receiver12856,_method12857);j::Args _params12858=j::Args{_v_11868_ctx.get(),([&]()->V{V _obj12849=j::object();j::put(_obj12849,this->_literals[65],([&]()->V{V _logical12850=j::get(_v_11836_e.get(),this->_literals[65]);return j::nullish(_logical12850)?V(0.0):_logical12850;})());j::put(_obj12849,this->_literals[66],([&]()->V{V _logical12851=j::get(_v_11836_e.get(),this->_literals[66]);return j::nullish(_logical12851)?V(0.0):_logical12851;})());j::put(_obj12849,this->_literals[62],j::function([=](const j::Args &_args_fn11869,const V &_receiver_fn11869,const V &_self_fn11869) mutable ->V{
V _v_11870_u;
_v_11870_u=_args_fn11869[0];
return ([&]()->V{V _callee12855=_v_11853_read.get();return j::call(_callee12855,j::Args{_v_11851_other.get(),(j::truth(([&]()->V{V _receiver12852=j::builtin("Number");V _method12853=this->_literals[1];V _method=j::get(_receiver12852,_method12853);j::Args _params12854=j::Args{_v_11870_u};return j::call(_method,_params12854,_receiver12852);})())?_v_11870_u:V(0.0)),j::get(_v_11868_ctx.get(),this->_literals[35]),j::get(_v_11868_ctx.get(),this->_literals[61])});})();
return V{};
},1));return _obj12849;})()};return j::call(_method,_params12858,_receiver12856);})()):_v_11864_fctx.get()));
(void)(([&]()->V{V _callee12860=_v_11863_draw.get();return j::call(_callee12860,j::Args{_v_11866_t,_v_11867_s,([&]()->V{V _callee12859=_v_11853_read.get();return j::call(_callee12859,j::Args{_v_11850_grid.get(),_v_11866_t,j::get(_v_11868_ctx.get(),this->_literals[35]),j::get(_v_11868_ctx.get(),this->_literals[61])});})(),_v_11864_fctx.get()});})());

}

return V{};
},3);

}

return V{};
},1));return _obj12810;})()});})();
(void)(([&]()->V{V _receiver12862=this->_v_11783_ours.get();V _method12863=this->_literals[47];V _method=j::get(_receiver12862,_method12863);j::Args _params12864=j::Args{_v_11845_out};return j::call(_method,_params12864,_receiver12862);})());
_v_11871_theirs=j::get(_v_11832_p.get(),this->_literals[68]);
_v_11872_from=([&]()->V{V _logical12865=j::get(j::get(_v_11845_out,this->_literals[19]),this->_literals[45]);return j::nullish(_logical12865)?V(0.0):_logical12865;})();
_v_11873_motion=(j::truth(j::unary("!",j::get(_v_11836_e.get(),this->_literals[50])))?(j::truth(([&]()->V{V _callee12866=this->_v_11790_isMotion.get();return j::call(_callee12866,j::Args{_v_11871_theirs});})())?([&]()->V{V _obj12867=j::object();j::put(_obj12867,this->_literals[69],j::get(_v_11871_theirs,this->_literals[69]));j::put(_obj12867,this->_literals[70],j::get(_v_11871_theirs,this->_literals[70]));j::put(_obj12867,this->_literals[71],j::unary("!",j::unary("!",j::get(_v_11871_theirs,this->_literals[71]))));return _obj12867;})():j::builtin("undefined")):(j::truth(_v_11841_loop)?([&]()->V{V _obj12868=j::object();j::put(_obj12868,this->_literals[69],_v_11841_loop);j::put(_obj12868,this->_literals[70],_v_11872_from);j::put(_obj12868,this->_literals[71],V(false));return _obj12868;})():(j::truth(([&]()->V{V _logical12869=([&]()->V{V _lhs12870=j::get(_v_11836_e.get(),this->_literals[71]);V _rhs12871=j::builtin("undefined");return V(!j::equal(_lhs12870,_rhs12871,true));})();return j::truth(_logical12869)?([&]()->V{V _lhs12872=j::get(_v_11836_e.get(),this->_literals[71]);V _rhs12873=V(60.0);return j::binary("<=",_lhs12872,_rhs12873);})():_logical12869;})())?([&]()->V{V _obj12874=j::object();j::put(_obj12874,this->_literals[69],j::unary("+",([&]()->V{V _receiver12875=j::get(_v_11836_e.get(),this->_literals[71]);V _method12876=this->_literals[18];V _method=j::get(_receiver12875,_method12876);j::Args _params12877=j::Args{V(3.0)};return j::call(_method,_params12877,_receiver12875);})()));j::put(_obj12874,this->_literals[70],V(0.0));j::put(_obj12874,this->_literals[71],V(true));return _obj12874;})():([&]()->V{V _obj12878=j::object();j::put(_obj12878,this->_literals[69],V(4.0));j::put(_obj12878,this->_literals[70],_v_11872_from);j::put(_obj12878,this->_literals[71],V(false));return _obj12878;})())));
return (j::truth(_v_11873_motion)?([&]()->V{V _receiver12880=j::builtin("Object");V _method12881=this->_literals[67];V _method=j::get(_receiver12880,_method12881);j::Args _params12882=j::Args{_v_11845_out,([&]()->V{V _obj12879=j::object();j::put(_obj12879,this->_literals[68],_v_11873_motion);return _obj12879;})()};return j::call(_method,_params12882,_receiver12880);})():_v_11845_out);

}

return V{};
},4);
this->_v_11878_density.get()=j::function([=](const j::Args &_args_fn11879,const V &_receiver_fn11879,const V &_self_fn11879) mutable ->V{
V _v_11880_c;
_v_11880_c=_args_fn11879[0];
{
V _v_11881_dense;
V _v_11882_k;
_v_11881_dense=j::get(this->_v_11653_ramps.get(),this->_literals[72]);
_v_11882_k=([&]()->V{V _receiver12886=_v_11881_dense;V _method12887=this->_literals[74];V _method=j::get(_receiver12886,_method12887);j::Args _params12888=j::Args{([&]()->V{V _receiver12883=j::builtin("String");V _method12884=this->_literals[73];V _method=j::get(_receiver12883,_method12884);j::Args _params12885=j::Args{_v_11880_c};return j::call(_method,_params12885,_receiver12883);})()};return j::call(_method,_params12888,_receiver12886);})();
if(j::truth(([&]()->V{V _lhs12889=_v_11882_k;V _rhs12890=V(0.0);return j::binary(">",_lhs12889,_rhs12890);})())){return ([&]()->V{V _lhs12891=_v_11882_k;V _rhs12892=([&]()->V{V _lhs12893=j::get(_v_11881_dense,this->_literals[8]);V _rhs12894=V(1.0);return V(j::number(_lhs12893)-j::number(_rhs12894));})();return V(j::number(_lhs12891)/j::number(_rhs12892));})();
}
if(j::truth(([&]()->V{V _lhs12895=_v_11880_c;V _rhs12896=V(9608.0);return V(j::equal(_lhs12895,_rhs12896,true));})())){return V(1.0);
}
if(j::truth(([&]()->V{V _lhs12897=_v_11880_c;V _rhs12898=V(9619.0);return V(j::equal(_lhs12897,_rhs12898,true));})())){return V(0.8);
}
if(j::truth(([&]()->V{V _lhs12899=_v_11880_c;V _rhs12900=V(9618.0);return V(j::equal(_lhs12899,_rhs12900,true));})())){return V(0.55);
}
if(j::truth(([&]()->V{V _lhs12901=_v_11880_c;V _rhs12902=V(9617.0);return V(j::equal(_lhs12901,_rhs12902,true));})())){return V(0.3);
}
if(j::truth(([&]()->V{V _callee12903=this->_v_11885_isBlock.get();return j::call(_callee12903,j::Args{_v_11880_c});})())){return V(0.5);
}
if(j::truth(([&]()->V{V _logical12904=([&]()->V{V _lhs12905=_v_11880_c;V _rhs12906=V(10240.0);return j::binary(">=",_lhs12905,_rhs12906);})();return j::truth(_logical12904)?([&]()->V{V _lhs12907=_v_11880_c;V _rhs12908=V(10495.0);return j::binary("<=",_lhs12907,_rhs12908);})():_logical12904;})())){
V _v_11883_dots;
_v_11883_dots=V(0.0);
{V _v_11884_b;
_v_11884_b=([&]()->V{V _lhs12909=_v_11880_c;V _rhs12910=V(10240.0);return V(j::number(_lhs12909)-j::number(_rhs12910));})();
for(;j::truth(_v_11884_b);(void)((_v_11884_b=j::binary(">>",_v_11884_b,V(1.0))))){(void)((_v_11883_dots=j::binary("+",_v_11883_dots,([&]()->V{V _lhs12913=_v_11884_b;V _rhs12914=V(1.0);return V(int(j::i32(_lhs12913)&j::i32(_rhs12914)));})())));
}}
return ([&]()->V{V _lhs12915=V(0.1);V _rhs12916=([&]()->V{V _lhs12917=_v_11883_dots;V _rhs12918=V(10.0);return V(j::number(_lhs12917)/j::number(_rhs12918));})();return j::binary("+",_lhs12915,_rhs12916);})();

}

if(j::truth(([&]()->V{V _logical12919=([&]()->V{V _lhs12920=_v_11880_c;V _rhs12921=V(9472.0);return j::binary(">=",_lhs12920,_rhs12921);})();return j::truth(_logical12919)?([&]()->V{V _lhs12922=_v_11880_c;V _rhs12923=V(9599.0);return j::binary("<=",_lhs12922,_rhs12923);})():_logical12919;})())){return V(0.35);
}
if(j::truth(([&]()->V{V _lhs12924=_v_11880_c;V _rhs12925=V(9679.0);return V(j::equal(_lhs12924,_rhs12925,true));})())){return V(0.7);
}
if(j::truth(([&]()->V{V _lhs12926=_v_11880_c;V _rhs12927=V(8226.0);return V(j::equal(_lhs12926,_rhs12927,true));})())){return V(0.4);
}
if(j::truth(([&]()->V{V _lhs12928=_v_11880_c;V _rhs12929=V(183.0);return V(j::equal(_lhs12928,_rhs12929,true));})())){return V(0.15);
}
return V(0.5);

}

return V{};
},1);
this->_v_11891_glint.get()=j::function([=](const j::Args &_args_fn11892,const V &_receiver_fn11892,const V &_self_fn11892) mutable ->V{
V _v_11893_src;
V _v_11894_options;
_v_11893_src=_args_fn11892[0];
_v_11894_options=_args_fn11892[1];
{
V _v_11895_o;
j::Cell _v_11896_every;
j::Cell _v_11897_asked;
j::Cell _v_11898_pace;
j::Cell _v_11899_first;
j::Cell _v_11900_width;
j::Cell _v_11901_slant;
j::Cell _v_11902_keep;
j::Cell _v_11903_given;
j::Cell _v_11904_color;
_v_11895_o=([&]()->V{V _callee12931=this->_v_11736_optionsOf.get();return j::call(_callee12931,j::Args{_v_11894_options,this->_literals[75],([&]()->V{j::Args _array12930;_array12930.push_back(this->_literals[9]);_array12930.push_back(this->_literals[76]);_array12930.push_back(this->_literals[77]);_array12930.push_back(this->_literals[78]);_array12930.push_back(this->_literals[79]);_array12930.push_back(this->_literals[80]);_array12930.push_back(this->_literals[63]);_array12930.push_back(this->_literals[37]);return j::array(std::move(_array12930));})()});})();
_v_11896_every.get()=([&]()->V{V _callee12933=this->_v_11697_wordy.get();return j::call(_callee12933,j::Args{j::get(_v_11895_o,this->_literals[9]),this->_literals[81],([&]()->V{V _callee12932=this->_v_11706_often.get();return j::call(_callee12932,j::Args{V(4.0)});})(),V(4.0),this->_literals[69]});})();
_v_11897_asked.get()=(j::truth(([&]()->V{V _lhs12934=j::get(_v_11895_o,this->_literals[76]);V _rhs12935=j::builtin("undefined");return V(j::equal(_lhs12934,_rhs12935,true));})())?j::builtin("undefined"):([&]()->V{V _callee12936=this->_v_11689_num.get();return j::call(_callee12936,j::Args{j::get(_v_11895_o,this->_literals[76]),this->_literals[82],V(1.2),this->_literals[69]});})());
if(j::truth(([&]()->V{V _logical12937=([&]()->V{V _lhs12938=j::get(_v_11895_o,this->_literals[76]);V _rhs12939=j::builtin("undefined");return V(!j::equal(_lhs12938,_rhs12939,true));})();return j::truth(_logical12937)?([&]()->V{V _lhs12940=j::get(_v_11895_o,this->_literals[77]);V _rhs12941=j::builtin("undefined");return V(!j::equal(_lhs12940,_rhs12941,true));})():_logical12937;})())){(void)(([&]()->V{V _callee12942=this->_v_11645_fail.get();return j::call(_callee12942,j::Args{this->_literals[83]});})());
}
_v_11898_pace.get()=([&]()->V{V _callee12943=this->_v_11697_wordy.get();return j::call(_callee12943,j::Args{j::get(_v_11895_o,this->_literals[77]),this->_literals[84],this->_v_11709_SPEED.get(),V(1.0),this->_literals[85]});})();
_v_11899_first.get()=([&]()->V{V _callee12944=this->_v_11689_num.get();return j::call(_callee12944,j::Args{j::get(_v_11895_o,this->_literals[78]),this->_literals[86],V(0.5),this->_literals[0]});})();
_v_11900_width.get()=([&]()->V{V _callee12945=this->_v_11689_num.get();return j::call(_callee12945,j::Args{j::get(_v_11895_o,this->_literals[79]),this->_literals[87],V(3.0),this->_literals[85]});})();
_v_11901_slant.get()=([&]()->V{V _callee12946=this->_v_11689_num.get();return j::call(_callee12946,j::Args{j::get(_v_11895_o,this->_literals[80]),this->_literals[88],V(1.0),this->_literals[0]});})();
_v_11902_keep.get()=([&]()->V{V _lhs12947=j::get(_v_11895_o,this->_literals[63]);V _rhs12948=V::null();return V(j::equal(_lhs12947,_rhs12948,true));})();
_v_11903_given.get()=(j::truth(_v_11902_keep.get())?this->_literals[17]:([&]()->V{V _callee12949=this->_v_11722_chars.get();return j::call(_callee12949,j::Args{j::get(_v_11895_o,this->_literals[63]),this->_literals[89],this->_literals[17],V(1.0),V(2.0)});})());
_v_11904_color.get()=([&]()->V{V _callee12950=this->_v_11730_colour.get();return j::call(_callee12950,j::Args{j::get(_v_11895_o,this->_literals[37]),this->_literals[90]});})();
return ([&]()->V{V _callee13138=this->_v_11825_build.get();return j::call(_callee13138,j::Args{this->_literals[75],_v_11893_src,_v_11895_o,j::function([=](const j::Args &_args_fn11905,const V &_receiver_fn11905,const V &_self_fn11905) mutable ->V{
V _v_11906_m;
j::Cell _v_11907_inks;
V _pattern12951=_args_fn11905[0];
_v_11906_m=j::get(_pattern12951,this->_literals[19]);
_v_11907_inks.get()=j::get(_pattern12951,this->_literals[43]);
{
j::Cell _v_11908_core;
j::Cell _v_11909_edge;
j::Cell _v_11917_reach;
j::Cell _v_11918_lo;
j::Cell _v_11919_hi;
j::Cell _v_11920_sweep;
V _v_11921_busy;
_v_11908_core.get()=([&]()->V{V _receiver12952=([&]()->V{V _callee12955=j::builtin("Uint8Array");return j::construct(_callee12955,j::Args{V(256.0)});})();V _method12953=this->_literals[91];V _method=j::get(_receiver12952,_method12953);j::Args _params12954=j::Args{this->_v_11637_NONE.get()};return j::call(_method,_params12954,_receiver12952);})();
_v_11909_edge.get()=([&]()->V{V _receiver12956=([&]()->V{V _callee12959=j::builtin("Uint8Array");return j::construct(_callee12959,j::Args{V(256.0)});})();V _method12957=this->_literals[91];V _method=j::get(_receiver12956,_method12957);j::Args _params12958=j::Args{this->_v_11637_NONE.get()};return j::call(_method,_params12958,_receiver12956);})();
if(j::truth(_v_11904_color.get())){
(void)(([&]()->V{V _receiver12963=_v_11908_core.get();V _method12964=this->_literals[91];V _method=j::get(_receiver12963,_method12964);j::Args _params12965=j::Args{([&]()->V{V _receiver12960=_v_11907_inks.get();V _method12961=this->_literals[47];V _method=j::get(_receiver12960,_method12961);j::Args _params12962=j::Args{_v_11904_color.get()};return j::call(_method,_params12962,_receiver12960);})()};return j::call(_method,_params12965,_receiver12963);})());
(void)(([&]()->V{V _receiver12969=_v_11909_edge.get();V _method12970=this->_literals[91];V _method=j::get(_receiver12969,_method12970);j::Args _params12971=j::Args{([&]()->V{V _receiver12966=_v_11907_inks.get();V _method12967=this->_literals[47];V _method=j::get(_receiver12966,_method12967);j::Args _params12968=j::Args{_v_11904_color.get()};return j::call(_method,_params12968,_receiver12966);})()};return j::call(_method,_params12971,_receiver12969);})());

}
else {
V _v_11910_own;
_v_11910_own=([&]()->V{V _receiver12972=j::get(_v_11907_inks.get(),this->_literals[46]);V _method12973=this->_literals[25];V _method=j::get(_receiver12972,_method12973);j::Args _params12974=j::Args{V(0.0),j::get(_v_11907_inks.get(),this->_literals[92])};return j::call(_method,_params12974,_receiver12972);})();
(void)(([&]()->V{V _receiver12982=_v_11910_own;V _method12983=this->_literals[95];V _method=j::get(_receiver12982,_method12983);j::Args _params12984=j::Args{j::function([=](const j::Args &_args_fn11911,const V &_receiver_fn11911,const V &_self_fn11911) mutable ->V{
V _v_11912_c;
V _v_11913_i;
_v_11912_c=_args_fn11911[0];
_v_11913_i=_args_fn11911[1];
return ([&]()->V{V _base12976=_v_11908_core.get();V _key12977=_v_11913_i;V _assign12975=([&]()->V{V _receiver12979=_v_11907_inks.get();V _method12980=this->_literals[94];V _method=j::get(_receiver12979,_method12980);j::Args _params12981=j::Args{([&]()->V{V _callee12978=this->_v_11649_mix.get();return j::call(_callee12978,j::Args{_v_11912_c,this->_literals[93],V(0.6)});})(),_v_11913_i};return j::call(_method,_params12981,_receiver12979);})();return j::put(_base12976,_key12977,_assign12975);})();
return V{};
},2)};return j::call(_method,_params12984,_receiver12982);})());
(void)(([&]()->V{V _receiver12992=_v_11910_own;V _method12993=this->_literals[95];V _method=j::get(_receiver12992,_method12993);j::Args _params12994=j::Args{j::function([=](const j::Args &_args_fn11914,const V &_receiver_fn11914,const V &_self_fn11914) mutable ->V{
V _v_11915_c;
V _v_11916_i;
_v_11915_c=_args_fn11914[0];
_v_11916_i=_args_fn11914[1];
return ([&]()->V{V _base12986=_v_11909_edge.get();V _key12987=_v_11916_i;V _assign12985=([&]()->V{V _receiver12989=_v_11907_inks.get();V _method12990=this->_literals[94];V _method=j::get(_receiver12989,_method12990);j::Args _params12991=j::Args{([&]()->V{V _callee12988=this->_v_11649_mix.get();return j::call(_callee12988,j::Args{_v_11915_c,this->_literals[93],V(0.3)});})(),j::get(_v_11908_core.get(),_v_11916_i)};return j::call(_method,_params12991,_receiver12989);})();return j::put(_base12986,_key12987,_assign12985);})();
return V{};
},2)};return j::call(_method,_params12994,_receiver12992);})());

}

_v_11917_reach.get()=([&]()->V{V _lhs12995=([&]()->V{V _lhs12997=_v_11900_width.get();V _rhs12998=V(2.0);return V(j::number(_lhs12997)/j::number(_rhs12998));})();V _rhs12996=V(1.0);return j::binary("+",_lhs12995,_rhs12996);})();
_v_11918_lo.get()=([&]()->V{V _lhs12999=([&]()->V{V _receiver13007=j::builtin("Math");V _method13008=this->_literals[96];V _method=j::get(_receiver13007,_method13008);j::Args _params13009=j::Args{V(0.0),([&]()->V{V _lhs13001=_v_11901_slant.get();V _rhs13002=([&]()->V{V _lhs13003=j::get(_v_11906_m,this->_literals[49]);V _rhs13004=V(1.0);return V(j::number(_lhs13003)-j::number(_rhs13004));})();return V(j::number(_lhs13001)*j::number(_rhs13002));})()};return j::call(_method,_params13009,_receiver13007);})();V _rhs13000=_v_11917_reach.get();return V(j::number(_lhs12999)-j::number(_rhs13000));})();
_v_11919_hi.get()=([&]()->V{V _lhs13010=([&]()->V{V _lhs13012=([&]()->V{V _lhs13014=j::get(_v_11906_m,this->_literals[48]);V _rhs13015=V(1.0);return V(j::number(_lhs13014)-j::number(_rhs13015));})();V _rhs13013=([&]()->V{V _receiver13022=j::builtin("Math");V _method13023=this->_literals[97];V _method=j::get(_receiver13022,_method13023);j::Args _params13024=j::Args{V(0.0),([&]()->V{V _lhs13016=_v_11901_slant.get();V _rhs13017=([&]()->V{V _lhs13018=j::get(_v_11906_m,this->_literals[49]);V _rhs13019=V(1.0);return V(j::number(_lhs13018)-j::number(_rhs13019));})();return V(j::number(_lhs13016)*j::number(_rhs13017));})()};return j::call(_method,_params13024,_receiver13022);})();return j::binary("+",_lhs13012,_rhs13013);})();V _rhs13011=_v_11917_reach.get();return j::binary("+",_lhs13010,_rhs13011);})();
_v_11920_sweep.get()=([&]()->V{V _logical13025=_v_11897_asked.get();return j::nullish(_logical13025)?([&]()->V{V _receiver13046=j::builtin("Math");V _method13047=this->_literals[96];V _method=j::get(_receiver13046,_method13047);j::Args _params13048=j::Args{([&]()->V{V _lhs13026=([&]()->V{V _receiver13039=j::builtin("Math");V _method13040=this->_literals[96];V _method=j::get(_receiver13039,_method13040);j::Args _params13041=j::Args{([&]()->V{V _receiver13034=j::builtin("Math");V _method13035=this->_literals[97];V _method=j::get(_receiver13034,_method13035);j::Args _params13036=j::Args{V(1.2),([&]()->V{V _lhs13028=([&]()->V{V _lhs13030=_v_11919_hi.get();V _rhs13031=_v_11918_lo.get();return V(j::number(_lhs13030)-j::number(_rhs13031));})();V _rhs13029=V(40.0);return V(j::number(_lhs13028)/j::number(_rhs13029));})()};return j::call(_method,_params13036,_receiver13034);})(),V(3.0)};return j::call(_method,_params13041,_receiver13039);})();V _rhs13027=_v_11898_pace.get();return V(j::number(_lhs13026)/j::number(_rhs13027));})(),([&]()->V{V _lhs13042=V(0.75);V _rhs13043=_v_11896_every.get();return V(j::number(_lhs13042)*j::number(_rhs13043));})()};return j::call(_method,_params13048,_receiver13046);})():_logical13025;})();
_v_11921_busy=j::function([=](const j::Args &_args_fn11922,const V &_receiver_fn11922,const V &_self_fn11922) mutable ->V{
V _v_11923_t;
_v_11923_t=_args_fn11922[0];
return ([&]()->V{V _lhs13049=([&]()->V{V _callee13053=this->_v_11744_mod.get();return j::call(_callee13053,j::Args{([&]()->V{V _lhs13051=_v_11923_t;V _rhs13052=_v_11899_first.get();return V(j::number(_lhs13051)-j::number(_rhs13052));})(),_v_11896_every.get()});})();V _rhs13050=_v_11920_sweep.get();return j::binary("<",_lhs13049,_rhs13050);})();
return V{};
},1);
return ([&]()->V{V _obj13054=j::object();j::put(_obj13054,this->_literals[50],V(true));j::put(_obj13054,this->_literals[51],_v_11896_every.get());j::put(_obj13054,this->_literals[45],([&]()->V{V _callee13056=this->_v_11759_quiet.get();return j::call(_callee13056,j::Args{([&]()->V{V _logical13055=j::get(_v_11906_m,this->_literals[45]);return j::nullish(_logical13055)?V(0.0):_logical13055;})(),_v_11921_busy,_v_11896_every.get()});})());j::put(_obj13054,this->_literals[54],this->_literals[98]);j::put(_obj13054,this->_literals[59],j::function([=](const j::Args &_args_fn11924,const V &_receiver_fn11924,const V &_self_fn11924) mutable ->V{
{
j::Cell _v_11925_kinds;
j::Cell _v_11926_kind;
j::Cell _v_11930_SLASH;
_v_11925_kinds.get()=([&]()->V{V _callee13057=j::builtin("Map");return j::construct(_callee13057,j::Args{});})();
_v_11926_kind.get()=j::function([=](const j::Args &_args_fn11927,const V &_receiver_fn11927,const V &_self_fn11927) mutable ->V{
V _v_11928_c;
_v_11928_c=_args_fn11927[0];
{
V _v_11929_k;
_v_11929_k=([&]()->V{V _receiver13058=_v_11925_kinds.get();V _method13059=this->_literals[39];V _method=j::get(_receiver13058,_method13059);j::Args _params13060=j::Args{_v_11928_c};return j::call(_method,_params13060,_receiver13058);})();
if(j::truth(([&]()->V{V _lhs13061=_v_11929_k;V _rhs13062=j::builtin("undefined");return V(j::equal(_lhs13061,_rhs13062,true));})())){(void)(([&]()->V{V _receiver13066=_v_11925_kinds.get();V _method13067=this->_literals[40];V _method=j::get(_receiver13066,_method13067);j::Args _params13068=j::Args{_v_11928_c,(_v_11929_k=(j::truth(([&]()->V{V _callee13064=this->_v_11885_isBlock.get();return j::call(_callee13064,j::Args{_v_11928_c});})())?V(1.0):(j::truth(([&]()->V{V _callee13065=this->_v_11888_isSolid.get();return j::call(_callee13065,j::Args{_v_11928_c});})())?V(2.0):V(0.0))))};return j::call(_method,_params13068,_receiver13066);})());
}
return _v_11929_k;

}

return V{};
},1);
_v_11930_SLASH.get()=V(47.0);
return j::function([=](const j::Args &_args_fn11931,const V &_receiver_fn11931,const V &_self_fn11931) mutable ->V{
V _v_11932_t;
V _v_11933_s;
V _v_11934_g;
V _v_11935_ctx;
_v_11932_t=_args_fn11931[0];
_v_11933_s=_args_fn11931[1];
_v_11934_g=_args_fn11931[2];
_v_11935_ctx=_args_fn11931[3];
{
V _v_11936_u;
V _v_11937_at;
V _v_11938_pair;
V _v_11939_c0;
V _v_11940_c1;
(void)(([&]()->V{V _callee13069=this->_v_11874_copy.get();return j::call(_callee13069,j::Args{_v_11933_s,_v_11934_g});})());
_v_11936_u=([&]()->V{V _lhs13070=([&]()->V{V _callee13074=this->_v_11744_mod.get();return j::call(_callee13074,j::Args{([&]()->V{V _lhs13072=_v_11932_t;V _rhs13073=_v_11899_first.get();return V(j::number(_lhs13072)-j::number(_rhs13073));})(),_v_11896_every.get()});})();V _rhs13071=_v_11920_sweep.get();return V(j::number(_lhs13070)/j::number(_rhs13071));})();
if(j::truth(([&]()->V{V _lhs13075=_v_11936_u;V _rhs13076=V(1.0);return j::binary(">=",_lhs13075,_rhs13076);})())){return V{};
}
_v_11937_at=([&]()->V{V _lhs13077=_v_11918_lo.get();V _rhs13078=([&]()->V{V _lhs13079=([&]()->V{V _lhs13081=_v_11919_hi.get();V _rhs13082=_v_11918_lo.get();return V(j::number(_lhs13081)-j::number(_rhs13082));})();V _rhs13080=_v_11936_u;return V(j::number(_lhs13079)*j::number(_rhs13080));})();return j::binary("+",_lhs13077,_rhs13078);})();
_v_11938_pair=([&]()->V{V _logical13083=_v_11903_given.get();return !j::truth(_logical13083)?(j::truth(j::get(_v_11935_ctx,this->_literals[35]))?this->_literals[99]:this->_literals[100]):_logical13083;})();
_v_11939_c0=([&]()->V{V _receiver13084=_v_11938_pair;V _method13085=this->_literals[38];V _method=j::get(_receiver13084,_method13085);j::Args _params13086=j::Args{V(0.0)};return j::call(_method,_params13086,_receiver13084);})();
_v_11940_c1=([&]()->V{V _receiver13089=_v_11938_pair;V _method13090=this->_literals[38];V _method=j::get(_receiver13089,_method13090);j::Args _params13091=j::Args{([&]()->V{V _lhs13087=j::get(_v_11938_pair,this->_literals[8]);V _rhs13088=V(1.0);return V(j::number(_lhs13087)-j::number(_rhs13088));})()};return j::call(_method,_params13091,_receiver13089);})();
{V _v_11941_y;
V _v_11942_i;
_v_11941_y=V(0.0);
_v_11942_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs13092=_v_11941_y;V _rhs13093=j::get(_v_11934_g,this->_literals[49]);return j::binary("<",_lhs13092,_rhs13093);})());(void)(j::increment(_v_11941_y,1,false))){{V _v_11943_x;
_v_11943_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs13094=_v_11943_x;V _rhs13095=j::get(_v_11934_g,this->_literals[48]);return j::binary("<",_lhs13094,_rhs13095);})());(void)((j::increment(_v_11943_x,1,false),j::increment(_v_11942_i,1,false)))){
V _v_11944_ch;
V _v_11945_d;
V _v_11946_inCore;
V _v_11947_k;
_v_11944_ch=j::get(j::get(_v_11934_g,this->_literals[63]),_v_11942_i);
if(j::truth(([&]()->V{V _lhs13096=_v_11944_ch;V _rhs13097=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13096,_rhs13097,true));})())){continue;
}
_v_11945_d=([&]()->V{V _number13104=([&]()->V{V _lhs13105=([&]()->V{V _lhs13107=_v_11943_x;V _rhs13108=([&]()->V{V _lhs13109=_v_11901_slant.get();V _rhs13110=_v_11941_y;return V(j::number(_lhs13109)*j::number(_rhs13110));})();return j::binary("+",_lhs13107,_rhs13108);})();V _rhs13106=_v_11937_at;return V(j::number(_lhs13105)-j::number(_rhs13106));})();return V(std::fabs(j::number(_number13104)));})();
if(j::truth(([&]()->V{V _lhs13111=_v_11945_d;V _rhs13112=_v_11917_reach.get();return j::binary(">=",_lhs13111,_rhs13112);})())){continue;
}
_v_11946_inCore=([&]()->V{V _lhs13113=_v_11945_d;V _rhs13114=([&]()->V{V _lhs13115=_v_11900_width.get();V _rhs13116=V(2.0);return V(j::number(_lhs13115)/j::number(_rhs13116));})();return j::binary("<",_lhs13113,_rhs13114);})();
_v_11947_k=(j::truth(([&]()->V{V _logical13117=_v_11903_given.get();return !j::truth(_logical13117)?_v_11902_keep.get():_logical13117;})())?j::unary("-",V(1.0)):([&]()->V{V _callee13118=_v_11926_kind.get();return j::call(_callee13118,j::Args{_v_11944_ch});})());
if(j::truth(([&]()->V{V _logical13119=_v_11903_given.get();return !j::truth(_logical13119)?([&]()->V{V _lhs13120=_v_11947_k;V _rhs13121=V(1.0);return V(j::equal(_lhs13120,_rhs13121,true));})():_logical13119;})())){(void)(([&]()->V{V _base13123=j::get(_v_11933_s,this->_literals[63]);V _key13124=_v_11942_i;V _assign13122=(j::truth(_v_11946_inCore)?_v_11939_c0:_v_11940_c1);return j::put(_base13123,_key13124,_assign13122);})());
}else {if(j::truth(([&]()->V{V _logical13125=([&]()->V{V _lhs13126=_v_11947_k;V _rhs13127=V(2.0);return V(j::equal(_lhs13126,_rhs13127,true));})();return j::truth(_logical13125)?_v_11946_inCore:_logical13125;})())){(void)(([&]()->V{V _base13129=j::get(_v_11933_s,this->_literals[63]);V _key13130=_v_11942_i;V _assign13128=_v_11930_SLASH.get();return j::put(_base13129,_key13130,_assign13128);})());
}
}
if(j::truth(([&]()->V{V _logical13131=j::unary("!",j::get(_v_11935_ctx,this->_literals[61]));return j::truth(_logical13131)?j::unary("!",([&]()->V{V _logical13132=([&]()->V{V _lhs13133=_v_11947_k;V _rhs13134=V(1.0);return V(j::equal(_lhs13133,_rhs13134,true));})();return j::truth(_logical13132)?j::get(_v_11935_ctx,this->_literals[35]):_logical13132;})()):_logical13131;})())){(void)(([&]()->V{V _base13136=j::get(_v_11933_s,this->_literals[64]);V _key13137=_v_11942_i;V _assign13135=j::get((j::truth(_v_11946_inCore)?_v_11908_core.get():_v_11909_edge.get()),j::get(j::get(_v_11934_g,this->_literals[64]),_v_11942_i));return j::put(_base13136,_key13137,_assign13135);})());
}

}
}
}}

}

return V{};
},4);

}

return V{};
},0));return _obj13054;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_11948_typeIn.get()=j::function([=](const j::Args &_args_fn11949,const V &_receiver_fn11949,const V &_self_fn11949) mutable ->V{
V _v_11950_src;
V _v_11951_options;
_v_11950_src=_args_fn11949[0];
_v_11951_options=_args_fn11949[1];
{
V _v_11952_o;
j::Cell _v_11953_start;
j::Cell _v_11954_order;
j::Cell _v_11955_cursor;
j::Cell _v_11956_hold;
j::Cell _v_11957_seed;
j::Cell _v_11958_pace;
j::Cell _v_11959_own;
V _v_11960_text;
_v_11952_o=([&]()->V{V _callee13140=this->_v_11736_optionsOf.get();return j::call(_callee13140,j::Args{_v_11951_options,this->_literals[101],([&]()->V{j::Args _array13139;_array13139.push_back(this->_literals[77]);_array13139.push_back(this->_literals[102]);_array13139.push_back(this->_literals[103]);_array13139.push_back(this->_literals[104]);_array13139.push_back(this->_literals[105]);_array13139.push_back(this->_literals[106]);return j::array(std::move(_array13139));})()});})();
_v_11953_start.get()=([&]()->V{V _callee13141=this->_v_11689_num.get();return j::call(_callee13141,j::Args{j::get(_v_11952_o,this->_literals[102]),this->_literals[107],V(0.0),this->_literals[108]});})();
_v_11954_order.get()=([&]()->V{V _callee13143=this->_v_11710_choice.get();return j::call(_callee13143,j::Args{j::get(_v_11952_o,this->_literals[104]),this->_literals[109],([&]()->V{j::Args _array13142;_array13142.push_back(this->_literals[110]);_array13142.push_back(this->_literals[111]);_array13142.push_back(this->_literals[112]);return j::array(std::move(_array13142));})(),this->_literals[110]});})();
_v_11955_cursor.get()=(j::truth(([&]()->V{V _lhs13144=j::get(_v_11952_o,this->_literals[103]);V _rhs13145=V(false);return V(j::equal(_lhs13144,_rhs13145,true));})())?this->_literals[17]:([&]()->V{V _callee13148=this->_v_11722_chars.get();return j::call(_callee13148,j::Args{j::get(_v_11952_o,this->_literals[103]),this->_literals[113],(j::truth(([&]()->V{V _lhs13146=_v_11954_order.get();V _rhs13147=this->_literals[111];return V(j::equal(_lhs13146,_rhs13147,true));})())?this->_literals[17]:this->_literals[114]),V(1.0),V(1.0)});})());
_v_11956_hold.get()=(j::truth(([&]()->V{V _lhs13149=j::get(_v_11952_o,this->_literals[105]);V _rhs13150=j::builtin("undefined");return V(j::equal(_lhs13149,_rhs13150,true));})())?j::builtin("undefined"):([&]()->V{V _callee13151=this->_v_11689_num.get();return j::call(_callee13151,j::Args{j::get(_v_11952_o,this->_literals[105]),this->_literals[115],V(0.0),this->_literals[108]});})());
_v_11957_seed.get()=([&]()->V{V _callee13152=this->_v_11689_num.get();return j::call(_callee13152,j::Args{j::get(_v_11952_o,this->_literals[106]),this->_literals[116],V(1.0),this->_literals[117]});})();
_v_11958_pace.get()=(j::truth(([&]()->V{V _lhs13153=j::unary("typeof",j::get(_v_11952_o,this->_literals[77]));V _rhs13154=this->_literals[2];return V(j::equal(_lhs13153,_rhs13154,true));})())?([&]()->V{V _callee13155=this->_v_11697_wordy.get();return j::call(_callee13155,j::Args{j::get(_v_11952_o,this->_literals[77]),this->_literals[118],this->_v_11709_SPEED.get(),V(1.0),this->_literals[85]});})():V(1.0));
_v_11959_own.get()=(j::truth(([&]()->V{V _logical13156=([&]()->V{V _lhs13157=j::unary("typeof",j::get(_v_11952_o,this->_literals[77]));V _rhs13158=this->_literals[0];return V(j::equal(_lhs13157,_rhs13158,true));})();return !j::truth(_logical13156)?([&]()->V{V _lhs13159=j::get(_v_11952_o,this->_literals[77]);V _rhs13160=j::builtin("undefined");return V(j::equal(_lhs13159,_rhs13160,true));})():_logical13156;})())?(j::truth(([&]()->V{V _lhs13161=j::get(_v_11952_o,this->_literals[77]);V _rhs13162=j::builtin("undefined");return V(j::equal(_lhs13161,_rhs13162,true));})())?j::builtin("undefined"):([&]()->V{V _callee13163=this->_v_11689_num.get();return j::call(_callee13163,j::Args{j::get(_v_11952_o,this->_literals[77]),this->_literals[118],V(40.0),this->_literals[85]});})()):j::builtin("undefined"));
if(j::truth(([&]()->V{V _logical13164=([&]()->V{V _logical13165=([&]()->V{V _lhs13166=j::get(_v_11952_o,this->_literals[77]);V _rhs13167=j::builtin("undefined");return V(!j::equal(_lhs13166,_rhs13167,true));})();return j::truth(_logical13165)?([&]()->V{V _lhs13168=j::unary("typeof",j::get(_v_11952_o,this->_literals[77]));V _rhs13169=this->_literals[2];return V(!j::equal(_lhs13168,_rhs13169,true));})():_logical13165;})();return j::truth(_logical13164)?([&]()->V{V _lhs13170=j::unary("typeof",j::get(_v_11952_o,this->_literals[77]));V _rhs13171=this->_literals[0];return V(!j::equal(_lhs13170,_rhs13171,true));})():_logical13164;})())){(void)(([&]()->V{V _callee13172=this->_v_11689_num.get();return j::call(_callee13172,j::Args{j::get(_v_11952_o,this->_literals[77]),this->_literals[118],V(40.0),this->_literals[85]});})());
}
_v_11960_text=(j::truth(([&]()->V{V _logical13173=([&]()->V{V _lhs13174=j::unary("typeof",_v_11950_src);V _rhs13175=this->_literals[2];return V(j::equal(_lhs13174,_rhs13175,true));})();return j::truth(_logical13173)?_v_11955_cursor.get():_logical13173;})())?([&]()->V{V _receiver13176=([&]()->V{V _receiver13181=([&]()->V{V _receiver13184=([&]()->V{V _callee13187=this->_v_11793_textOf.get();return j::call(_callee13187,j::Args{_v_11950_src});})();V _method13185=this->_literals[26];V _method=j::get(_receiver13184,_method13185);j::Args _params13186=j::Args{this->_literals[27]};return j::call(_method,_params13186,_receiver13184);})();V _method13182=this->_literals[6];V _method=j::get(_receiver13181,_method13182);j::Args _params13183=j::Args{j::function([=](const j::Args &_args_fn11961,const V &_receiver_fn11961,const V &_self_fn11961) mutable ->V{
V _v_11962_l;
_v_11962_l=_args_fn11961[0];
return ([&]()->V{V _lhs13179=_v_11962_l;V _rhs13180=this->_literals[119];return j::binary("+",_lhs13179,_rhs13180);})();
return V{};
},1)};return j::call(_method,_params13183,_receiver13181);})();V _method13177=this->_literals[120];V _method=j::get(_receiver13176,_method13177);j::Args _params13178=j::Args{this->_literals[27]};return j::call(_method,_params13178,_receiver13176);})():_v_11950_src);
return ([&]()->V{V _callee13358=this->_v_11825_build.get();return j::call(_callee13358,j::Args{this->_literals[101],_v_11960_text,_v_11952_o,j::function([=](const j::Args &_args_fn11963,const V &_receiver_fn11963,const V &_self_fn11963) mutable ->V{
V _v_11964_m;
V _v_11965_p;
V _v_11966_opts;
V _pattern13188=_args_fn11963[0];
_v_11964_m=j::get(_pattern13188,this->_literals[19]);
_v_11965_p=j::get(_pattern13188,this->_literals[44]);
_v_11966_opts=j::get(_pattern13188,this->_literals[36]);
{
j::Cell _v_11967_cols;
V _v_11968_rows;
V _v_11969_total;
j::Cell _v_11970_speed;
j::Cell _v_11971_typing;
j::Cell _v_11972_cycle;
j::Cell _v_11973_seq;
j::Cell _v_11987_code;
j::Cell _v_11988_blink;
V _v_11991_still;
V _pattern13189=_v_11964_m;
_v_11967_cols.get()=j::get(_pattern13189,this->_literals[48]);
_v_11968_rows=j::get(_pattern13189,this->_literals[49]);
_v_11969_total=j::get(([&]()->V{V _receiver13190=j::get(([&]()->V{V _callee13195=this->_v_11656_snapshot.get();return j::call(_callee13195,j::Args{_v_11965_p,([&]()->V{V _logical13193=j::get(_v_11964_m,this->_literals[45]);return j::nullish(_logical13193)?V(0.0):_logical13193;})(),([&]()->V{V _obj13194=j::object();j::put(_obj13194,this->_literals[36],_v_11966_opts);return _obj13194;})()});})(),this->_literals[30]);V _method13191=this->_literals[121];V _method=j::get(_receiver13190,_method13191);j::Args _params13192=j::Args{j::regexp(u"\\s","g"),this->_literals[17]};return j::call(_method,_params13192,_receiver13190);})(),this->_literals[8]);
_v_11970_speed.get()=([&]()->V{V _logical13196=_v_11959_own.get();return j::nullish(_logical13196)?([&]()->V{V _lhs13197=([&]()->V{V _receiver13203=j::builtin("Math");V _method13204=this->_literals[97];V _method=j::get(_receiver13203,_method13204);j::Args _params13205=j::Args{V(40.0),([&]()->V{V _lhs13199=_v_11969_total;V _rhs13200=V(3.0);return V(j::number(_lhs13199)/j::number(_rhs13200));})()};return j::call(_method,_params13205,_receiver13203);})();V _rhs13198=_v_11958_pace.get();return V(j::number(_lhs13197)*j::number(_rhs13198));})():_logical13196;})();
_v_11971_typing.get()=([&]()->V{V _lhs13206=_v_11969_total;V _rhs13207=_v_11970_speed.get();return V(j::number(_lhs13206)/j::number(_rhs13207));})();
_v_11972_cycle.get()=(j::truth(([&]()->V{V _lhs13208=_v_11956_hold.get();V _rhs13209=j::builtin("undefined");return V(j::equal(_lhs13208,_rhs13209,true));})())?V(0.0):([&]()->V{V _lhs13210=([&]()->V{V _lhs13212=_v_11953_start.get();V _rhs13213=_v_11971_typing.get();return j::binary("+",_lhs13212,_rhs13213);})();V _rhs13211=_v_11956_hold.get();return j::binary("+",_lhs13210,_rhs13211);})());
_v_11973_seq.get()=V::null();
if(j::truth(([&]()->V{V _lhs13214=_v_11954_order.get();V _rhs13215=this->_literals[112];return V(j::equal(_lhs13214,_rhs13215,true));})())){
(void)((_v_11973_seq.get()=([&]()->V{V _callee13219=j::builtin("Int32Array");return j::construct(_callee13219,j::Args{([&]()->V{V _lhs13217=_v_11967_cols.get();V _rhs13218=_v_11968_rows;return V(j::number(_lhs13217)*j::number(_rhs13218));})()});})()));
{V _v_11974_x;
V _v_11975_k;
_v_11974_x=V(0.0);
_v_11975_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs13220=_v_11974_x;V _rhs13221=_v_11967_cols.get();return j::binary("<",_lhs13220,_rhs13221);})());(void)(j::increment(_v_11974_x,1,false))){{V _v_11976_y;
_v_11976_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs13222=_v_11976_y;V _rhs13223=_v_11968_rows;return j::binary("<",_lhs13222,_rhs13223);})());(void)(j::increment(_v_11976_y,1,false))){(void)(([&]()->V{V _base13225=_v_11973_seq.get();V _key13226=j::increment(_v_11975_k,1,false);V _assign13224=([&]()->V{V _lhs13227=([&]()->V{V _lhs13229=_v_11976_y;V _rhs13230=_v_11967_cols.get();return V(j::number(_lhs13229)*j::number(_rhs13230));})();V _rhs13228=_v_11974_x;return j::binary("+",_lhs13227,_rhs13228);})();return j::put(_base13225,_key13226,_assign13224);})());
}}
}}

}
else {if(j::truth(([&]()->V{V _lhs13231=_v_11954_order.get();V _rhs13232=this->_literals[111];return V(j::equal(_lhs13231,_rhs13232,true));})())){
j::Cell _v_11977_key;
_v_11977_key.get()=([&]()->V{V _receiver13237=j::builtin("Float64Array");V _method13238=this->_literals[70];V _method=j::get(_receiver13237,_method13238);j::Args _params13239=j::Args{([&]()->V{V _obj13233=j::object();j::put(_obj13233,this->_literals[8],([&]()->V{V _lhs13234=_v_11967_cols.get();V _rhs13235=_v_11968_rows;return V(j::number(_lhs13234)*j::number(_rhs13235));})());return _obj13233;})(),j::function([=](const j::Args &_args_fn11978,const V &_receiver_fn11978,const V &_self_fn11978) mutable ->V{
V _v_11979__;
V _v_11980_i;
_v_11979__=_args_fn11978[0];
_v_11980_i=_args_fn11978[1];
return ([&]()->V{V _callee13236=this->_v_11647_hash.get();return j::call(_callee13236,j::Args{_v_11957_seed.get(),_v_11980_i,V(7.0)});})();
return V{};
},2)};return j::call(_method,_params13239,_receiver13237);})();
(void)((_v_11973_seq.get()=([&]()->V{V _receiver13243=([&]()->V{V _receiver13249=j::builtin("Int32Array");V _method13250=this->_literals[70];V _method=j::get(_receiver13249,_method13250);j::Args _params13251=j::Args{([&]()->V{V _obj13246=j::object();j::put(_obj13246,this->_literals[8],([&]()->V{V _lhs13247=_v_11967_cols.get();V _rhs13248=_v_11968_rows;return V(j::number(_lhs13247)*j::number(_rhs13248));})());return _obj13246;})(),j::function([=](const j::Args &_args_fn11981,const V &_receiver_fn11981,const V &_self_fn11981) mutable ->V{
V _v_11982__;
V _v_11983_i;
_v_11982__=_args_fn11981[0];
_v_11983_i=_args_fn11981[1];
return _v_11983_i;
return V{};
},2)};return j::call(_method,_params13251,_receiver13249);})();V _method13244=this->_literals[122];V _method=j::get(_receiver13243,_method13244);j::Args _params13245=j::Args{j::function([=](const j::Args &_args_fn11984,const V &_receiver_fn11984,const V &_self_fn11984) mutable ->V{
V _v_11985_a;
V _v_11986_b;
_v_11985_a=_args_fn11984[0];
_v_11986_b=_args_fn11984[1];
return ([&]()->V{V _lhs13241=j::get(_v_11977_key.get(),_v_11985_a);V _rhs13242=j::get(_v_11977_key.get(),_v_11986_b);return V(j::number(_lhs13241)-j::number(_rhs13242));})();
return V{};
},2)};return j::call(_method,_params13245,_receiver13243);})()));

}

}
_v_11987_code.get()=(j::truth(_v_11955_cursor.get())?([&]()->V{V _receiver13252=_v_11955_cursor.get();V _method13253=this->_literals[38];V _method=j::get(_receiver13252,_method13253);j::Args _params13254=j::Args{V(0.0)};return j::call(_method,_params13254,_receiver13252);})():V(0.0));
_v_11988_blink.get()=j::function([=](const j::Args &_args_fn11989,const V &_receiver_fn11989,const V &_self_fn11989) mutable ->V{
V _v_11990_u;
_v_11990_u=_args_fn11989[0];
return ([&]()->V{V _lhs13255=([&]()->V{V _callee13257=this->_v_11744_mod.get();return j::call(_callee13257,j::Args{_v_11990_u,V(1.06)});})();V _rhs13256=V(0.53);return j::binary("<",_lhs13255,_rhs13256);})();
return V{};
},1);
_v_11991_still=(j::truth(([&]()->V{V _lhs13258=_v_11956_hold.get();V _rhs13259=j::builtin("undefined");return V(j::equal(_lhs13258,_rhs13259,true));})())?([&]()->V{V _lhs13260=([&]()->V{V _lhs13262=_v_11953_start.get();V _rhs13263=_v_11971_typing.get();return j::binary("+",_lhs13262,_rhs13263);})();V _rhs13261=V(0.5);return j::binary("+",_lhs13260,_rhs13261);})():(j::truth(([&]()->V{V _lhs13264=_v_11956_hold.get();V _rhs13265=V(0.0);return j::binary(">",_lhs13264,_rhs13265);})())?([&]()->V{V _lhs13266=([&]()->V{V _lhs13268=_v_11953_start.get();V _rhs13269=_v_11971_typing.get();return j::binary("+",_lhs13268,_rhs13269);})();V _rhs13267=([&]()->V{V _lhs13270=([&]()->V{V _receiver13274=j::builtin("Math");V _method13275=this->_literals[96];V _method=j::get(_receiver13274,_method13275);j::Args _params13276=j::Args{_v_11956_hold.get(),V(1.0)};return j::call(_method,_params13276,_receiver13274);})();V _rhs13271=V(2.0);return V(j::number(_lhs13270)/j::number(_rhs13271));})();return j::binary("+",_lhs13266,_rhs13267);})():([&]()->V{V _receiver13283=j::builtin("Math");V _method13284=this->_literals[97];V _method=j::get(_receiver13283,_method13284);j::Args _params13285=j::Args{V(0.0),([&]()->V{V _lhs13277=([&]()->V{V _lhs13279=_v_11953_start.get();V _rhs13280=_v_11971_typing.get();return j::binary("+",_lhs13279,_rhs13280);})();V _rhs13278=V(0.001);return V(j::number(_lhs13277)-j::number(_rhs13278));})()};return j::call(_method,_params13285,_receiver13283);})()));
return ([&]()->V{V _obj13286=j::object();j::put(_obj13286,this->_literals[50],V(true));j::put(_obj13286,this->_literals[51],([&]()->V{V _logical13287=_v_11972_cycle.get();return !j::truth(_logical13287)?j::builtin("undefined"):_logical13287;})());j::put(_obj13286,this->_literals[45],_v_11991_still);j::put(_obj13286,this->_literals[71],(j::truth(([&]()->V{V _lhs13288=_v_11956_hold.get();V _rhs13289=j::builtin("undefined");return V(j::equal(_lhs13288,_rhs13289,true));})())?([&]()->V{V _lhs13290=([&]()->V{V _lhs13292=_v_11953_start.get();V _rhs13293=_v_11971_typing.get();return j::binary("+",_lhs13292,_rhs13293);})();V _rhs13291=V(0.5);return j::binary("+",_lhs13290,_rhs13291);})():j::builtin("undefined")));j::put(_obj13286,this->_literals[54],this->_literals[123]);j::put(_obj13286,this->_literals[59],j::function([=](const j::Args &_args_fn11992,const V &_receiver_fn11992,const V &_self_fn11992) mutable ->V{
return j::function([=](const j::Args &_args_fn11993,const V &_receiver_fn11993,const V &_self_fn11993) mutable ->V{
V _v_11994_t;
V _v_11995_s;
V _v_11996_g;
_v_11994_t=_args_fn11993[0];
_v_11995_s=_args_fn11993[1];
_v_11996_g=_args_fn11993[2];
{
V _v_11997_local;
V _v_11998_n;
V _v_11999_all;
V _v_12000_shown;
V _v_12001_next;
V _v_12002_last;
_v_11997_local=(j::truth(_v_11972_cycle.get())?([&]()->V{V _callee13294=this->_v_11744_mod.get();return j::call(_callee13294,j::Args{_v_11994_t,_v_11972_cycle.get()});})():_v_11994_t);
_v_11998_n=([&]()->V{V _number13301=([&]()->V{V _lhs13302=([&]()->V{V _lhs13304=([&]()->V{V _lhs13306=_v_11997_local;V _rhs13307=_v_11953_start.get();return V(j::number(_lhs13306)-j::number(_rhs13307));})();V _rhs13305=_v_11970_speed.get();return V(j::number(_lhs13304)*j::number(_rhs13305));})();V _rhs13303=V(0.000001);return j::binary("+",_lhs13302,_rhs13303);})();return V(std::floor(j::number(_number13301)));})();
_v_11999_all=j::get(j::get(_v_11996_g,this->_literals[63]),this->_literals[8]);
_v_12000_shown=V(0.0);
_v_12001_next=j::unary("-",V(1.0));
_v_12002_last=j::unary("-",V(1.0));
{V _v_12003_k;
_v_12003_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs13308=_v_12003_k;V _rhs13309=_v_11999_all;return j::binary("<",_lhs13308,_rhs13309);})());(void)(j::increment(_v_12003_k,1,false))){
V _v_12004_i;
_v_12004_i=(j::truth(_v_11973_seq.get())?j::get(_v_11973_seq.get(),_v_12003_k):_v_12003_k);
if(j::truth(([&]()->V{V _lhs13310=j::get(j::get(_v_11996_g,this->_literals[63]),_v_12004_i);V _rhs13311=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13310,_rhs13311,true));})())){continue;
}
if(j::truth(([&]()->V{V _lhs13312=_v_12000_shown;V _rhs13313=_v_11998_n;return j::binary(">=",_lhs13312,_rhs13313);})())){
(void)((_v_12001_next=_v_12004_i));
break;

}

(void)(([&]()->V{V _base13316=j::get(_v_11995_s,this->_literals[63]);V _key13317=_v_12004_i;V _assign13315=j::get(j::get(_v_11996_g,this->_literals[63]),_v_12004_i);return j::put(_base13316,_key13317,_assign13315);})());
(void)(([&]()->V{V _base13319=j::get(_v_11995_s,this->_literals[64]);V _key13320=_v_12004_i;V _assign13318=j::get(j::get(_v_11996_g,this->_literals[64]),_v_12004_i);return j::put(_base13319,_key13320,_assign13318);})());
(void)(j::increment(_v_12000_shown,1,false));
(void)((_v_12002_last=_v_12004_i));

}
}
if(j::truth(j::unary("!",_v_11987_code.get()))){return V{};
}
if(j::truth(([&]()->V{V _lhs13322=_v_12001_next;V _rhs13323=V(0.0);return j::binary(">=",_lhs13322,_rhs13323);})())){
if(j::truth(([&]()->V{V _logical13324=([&]()->V{V _lhs13325=_v_11997_local;V _rhs13326=_v_11953_start.get();return j::binary(">=",_lhs13325,_rhs13326);})();return !j::truth(_logical13324)?([&]()->V{V _callee13329=_v_11988_blink.get();return j::call(_callee13329,j::Args{([&]()->V{V _lhs13327=_v_11997_local;V _rhs13328=_v_11953_start.get();return V(j::number(_lhs13327)-j::number(_rhs13328));})()});})():_logical13324;})())){(void)(([&]()->V{V _receiver13330=_v_11995_s;V _method13331=this->_literals[124];V _method=j::get(_receiver13330,_method13331);j::Args _params13332=j::Args{_v_12001_next,_v_11987_code.get(),j::get(j::get(_v_11996_g,this->_literals[64]),_v_12001_next)};return j::call(_method,_params13332,_receiver13330);})());
}
return V{};

}

if(j::truth(([&]()->V{V _logical13333=([&]()->V{V _logical13334=_v_11973_seq.get();return !j::truth(_logical13334)?([&]()->V{V _lhs13335=_v_12002_last;V _rhs13336=V(0.0);return j::binary("<",_lhs13335,_rhs13336);})():_logical13334;})();return !j::truth(_logical13333)?j::unary("!",([&]()->V{V _callee13341=_v_11988_blink.get();return j::call(_callee13341,j::Args{([&]()->V{V _lhs13337=([&]()->V{V _lhs13339=_v_11997_local;V _rhs13340=_v_11953_start.get();return V(j::number(_lhs13339)-j::number(_rhs13340));})();V _rhs13338=_v_11971_typing.get();return V(j::number(_lhs13337)-j::number(_rhs13338));})()});})()):_logical13333;})())){return V{};
}
if(j::truth(([&]()->V{V _logical13342=([&]()->V{V _lhs13343=([&]()->V{V _lhs13345=([&]()->V{V _lhs13347=_v_12002_last;V _rhs13348=_v_11967_cols.get();return V(std::fmod(j::number(_lhs13347),j::number(_rhs13348)));})();V _rhs13346=V(1.0);return j::binary("+",_lhs13345,_rhs13346);})();V _rhs13344=_v_11967_cols.get();return j::binary("<",_lhs13343,_rhs13344);})();return j::truth(_logical13342)?([&]()->V{V _lhs13349=j::get(j::get(_v_11996_g,this->_literals[63]),([&]()->V{V _lhs13351=_v_12002_last;V _rhs13352=V(1.0);return j::binary("+",_lhs13351,_rhs13352);})());V _rhs13350=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13349,_rhs13350,true));})():_logical13342;})())){(void)(([&]()->V{V _receiver13355=_v_11995_s;V _method13356=this->_literals[124];V _method=j::get(_receiver13355,_method13356);j::Args _params13357=j::Args{([&]()->V{V _lhs13353=_v_12002_last;V _rhs13354=V(1.0);return j::binary("+",_lhs13353,_rhs13354);})(),_v_11987_code.get(),j::get(j::get(_v_11996_g,this->_literals[64]),_v_12002_last)};return j::call(_method,_params13357,_receiver13355);})());
}

}

return V{};
},3);
return V{};
},0));return _obj13286;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_12005_level.get()=j::function([=](const j::Args &_args_fn12006,const V &_receiver_fn12006,const V &_self_fn12006) mutable ->V{
V _v_12007_t;
V _v_12008_period;
V _v_12009_mode;
_v_12007_t=_args_fn12006[0];
_v_12008_period=_args_fn12006[1];
_v_12009_mode=_args_fn12006[2];
{
V _v_12010_u;
V _v_12011_ease;
_v_12010_u=([&]()->V{V _lhs13359=([&]()->V{V _callee13361=this->_v_11744_mod.get();return j::call(_callee13361,j::Args{_v_12007_t,_v_12008_period});})();V _rhs13360=_v_12008_period;return V(j::number(_lhs13359)/j::number(_rhs13360));})();
_v_12011_ease=j::function([=](const j::Args &_args_fn12012,const V &_receiver_fn12012,const V &_self_fn12012) mutable ->V{
V _v_12013_k;
_v_12013_k=_args_fn12012[0];
return ([&]()->V{V _callee13362=this->_v_11655_smoothstep.get();return j::call(_callee13362,j::Args{V(0.0),V(1.0),_v_12013_k});})();
return V{};
},1);
if(j::truth(([&]()->V{V _lhs13363=_v_12009_mode;V _rhs13364=this->_literals[125];return V(j::equal(_lhs13363,_rhs13364,true));})())){return (j::truth(([&]()->V{V _lhs13365=_v_12010_u;V _rhs13366=V(0.4);return j::binary("<",_lhs13365,_rhs13366);})())?([&]()->V{V _callee13369=_v_12011_ease;return j::call(_callee13369,j::Args{([&]()->V{V _lhs13367=_v_12010_u;V _rhs13368=V(0.4);return V(j::number(_lhs13367)/j::number(_rhs13368));})()});})():V(1.0));
}
if(j::truth(([&]()->V{V _lhs13370=_v_12009_mode;V _rhs13371=this->_literals[126];return V(j::equal(_lhs13370,_rhs13371,true));})())){return (j::truth(([&]()->V{V _lhs13372=_v_12010_u;V _rhs13373=V(0.6);return j::binary("<",_lhs13372,_rhs13373);})())?V(1.0):([&]()->V{V _lhs13374=V(1.0);V _rhs13375=([&]()->V{V _callee13380=_v_12011_ease;return j::call(_callee13380,j::Args{([&]()->V{V _lhs13376=([&]()->V{V _lhs13378=_v_12010_u;V _rhs13379=V(0.6);return V(j::number(_lhs13378)-j::number(_rhs13379));})();V _rhs13377=V(0.4);return V(j::number(_lhs13376)/j::number(_rhs13377));})()});})();return V(j::number(_lhs13374)-j::number(_rhs13375));})());
}
return (j::truth(([&]()->V{V _lhs13381=_v_12010_u;V _rhs13382=V(0.3);return j::binary("<",_lhs13381,_rhs13382);})())?([&]()->V{V _callee13385=_v_12011_ease;return j::call(_callee13385,j::Args{([&]()->V{V _lhs13383=_v_12010_u;V _rhs13384=V(0.3);return V(j::number(_lhs13383)/j::number(_rhs13384));})()});})():(j::truth(([&]()->V{V _lhs13386=_v_12010_u;V _rhs13387=V(0.6);return j::binary("<",_lhs13386,_rhs13387);})())?V(1.0):(j::truth(([&]()->V{V _lhs13388=_v_12010_u;V _rhs13389=V(0.9);return j::binary("<",_lhs13388,_rhs13389);})())?([&]()->V{V _lhs13390=V(1.0);V _rhs13391=([&]()->V{V _callee13396=_v_12011_ease;return j::call(_callee13396,j::Args{([&]()->V{V _lhs13392=([&]()->V{V _lhs13394=_v_12010_u;V _rhs13395=V(0.6);return V(j::number(_lhs13394)-j::number(_rhs13395));})();V _rhs13393=V(0.3);return V(j::number(_lhs13392)/j::number(_rhs13393));})()});})();return V(j::number(_lhs13390)-j::number(_rhs13391));})():V(0.0))));

}

return V{};
},3);
this->_v_12017_dissolve.get()=j::function([=](const j::Args &_args_fn12018,const V &_receiver_fn12018,const V &_self_fn12018) mutable ->V{
V _v_12019_src;
V _v_12020_options;
_v_12019_src=_args_fn12018[0];
_v_12020_options=_args_fn12018[1];
{
V _v_12021_o;
j::Cell _v_12022_period;
j::Cell _v_12023_mode;
j::Cell _v_12024_scale;
j::Cell _v_12025_auto;
j::Cell _v_12026_edge;
j::Cell _v_12027_seed;
_v_12021_o=([&]()->V{V _callee13398=this->_v_11736_optionsOf.get();return j::call(_callee13398,j::Args{_v_12020_options,this->_literals[127],([&]()->V{j::Args _array13397;_array13397.push_back(this->_literals[51]);_array13397.push_back(this->_literals[128]);_array13397.push_back(this->_literals[129]);_array13397.push_back(this->_literals[130]);_array13397.push_back(this->_literals[106]);return j::array(std::move(_array13397));})()});})();
_v_12022_period.get()=([&]()->V{V _callee13399=this->_v_11689_num.get();return j::call(_callee13399,j::Args{j::get(_v_12021_o,this->_literals[51]),this->_literals[131],V(6.0),this->_literals[69]});})();
_v_12023_mode.get()=([&]()->V{V _callee13400=this->_v_11710_choice.get();return j::call(_callee13400,j::Args{j::get(_v_12021_o,this->_literals[128]),this->_literals[132],this->_v_12015_MODES.get(),this->_literals[133]});})();
_v_12024_scale.get()=([&]()->V{V _lhs13401=V(1.0);V _rhs13402=([&]()->V{V _callee13403=this->_v_11689_num.get();return j::call(_callee13403,j::Args{j::get(_v_12021_o,this->_literals[129]),this->_literals[134],V(7.0),this->_literals[135]});})();return V(j::number(_lhs13401)/j::number(_rhs13402));})();
_v_12025_auto.get()=([&]()->V{V _lhs13404=j::get(_v_12021_o,this->_literals[130]);V _rhs13405=j::builtin("undefined");return V(j::equal(_lhs13404,_rhs13405,true));})();
_v_12026_edge.get()=(j::truth(([&]()->V{V _lhs13406=j::get(_v_12021_o,this->_literals[130]);V _rhs13407=this->_literals[17];return V(j::equal(_lhs13406,_rhs13407,true));})())?this->_literals[17]:([&]()->V{V _callee13408=this->_v_11722_chars.get();return j::call(_callee13408,j::Args{j::get(_v_12021_o,this->_literals[130]),this->_literals[136],this->_literals[137],V(1.0)});})());
_v_12027_seed.get()=([&]()->V{V _callee13409=this->_v_11689_num.get();return j::call(_callee13409,j::Args{j::get(_v_12021_o,this->_literals[106]),this->_literals[138],V(1.0),this->_literals[117]});})();
return ([&]()->V{V _callee13506=this->_v_11825_build.get();return j::call(_callee13506,j::Args{this->_literals[127],_v_12019_src,_v_12021_o,j::function([=](const j::Args &_args_fn12028,const V &_receiver_fn12028,const V &_self_fn12028) mutable ->V{
V _v_12029_m;
V _pattern13410=_args_fn12028[0];
_v_12029_m=j::get(_pattern13410,this->_literals[19]);
{
j::Cell _v_12030_n;
V _v_12031_aspect;
j::Cell _v_12032_v;
j::Cell _v_12036_at;
j::Cell _v_12046_band;
j::Cell _v_12047_codes;
j::Cell _v_12050_blocks;
_v_12030_n.get()=([&]()->V{V _lhs13411=j::get(_v_12029_m,this->_literals[48]);V _rhs13412=j::get(_v_12029_m,this->_literals[49]);return V(j::number(_lhs13411)*j::number(_rhs13412));})();
_v_12031_aspect=([&]()->V{V _logical13413=j::get(_v_12029_m,this->_literals[57]);return j::nullish(_logical13413)?V(2.0):_logical13413;})();
_v_12032_v.get()=([&]()->V{V _callee13414=j::builtin("Float64Array");return j::construct(_callee13414,j::Args{_v_12030_n.get()});})();
{V _v_12033_y;
V _v_12034_i;
_v_12033_y=V(0.0);
_v_12034_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs13415=_v_12033_y;V _rhs13416=j::get(_v_12029_m,this->_literals[49]);return j::binary("<",_lhs13415,_rhs13416);})());(void)(j::increment(_v_12033_y,1,false))){{V _v_12035_x;
_v_12035_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs13417=_v_12035_x;V _rhs13418=j::get(_v_12029_m,this->_literals[48]);return j::binary("<",_lhs13417,_rhs13418);})());(void)((j::increment(_v_12035_x,1,false),j::increment(_v_12034_i,1,false)))){(void)(([&]()->V{V _base13420=_v_12032_v.get();V _key13421=_v_12034_i;V _assign13419=([&]()->V{V _lhs13422=([&]()->V{V _lhs13424=V(0.8);V _rhs13425=([&]()->V{V _callee13432=this->_v_11658_valueNoise.get();return j::call(_callee13432,j::Args{([&]()->V{V _lhs13426=_v_12035_x;V _rhs13427=_v_12024_scale.get();return V(j::number(_lhs13426)*j::number(_rhs13427));})(),([&]()->V{V _lhs13428=([&]()->V{V _lhs13430=_v_12033_y;V _rhs13431=_v_12024_scale.get();return V(j::number(_lhs13430)*j::number(_rhs13431));})();V _rhs13429=_v_12031_aspect;return V(j::number(_lhs13428)*j::number(_rhs13429));})(),_v_12027_seed.get()});})();return V(j::number(_lhs13424)*j::number(_rhs13425));})();V _rhs13423=([&]()->V{V _lhs13433=V(0.2);V _rhs13434=([&]()->V{V _callee13435=this->_v_11647_hash.get();return j::call(_callee13435,j::Args{_v_12035_x,_v_12033_y,_v_12027_seed.get(),V(3.0)});})();return V(j::number(_lhs13433)*j::number(_rhs13434));})();return j::binary("+",_lhs13422,_rhs13423);})();return j::put(_base13420,_key13421,_assign13419);})());
}}
}}
_v_12036_at.get()=([&]()->V{V _callee13436=j::builtin("Float32Array");return j::construct(_callee13436,j::Args{_v_12030_n.get()});})();
(void)(([&]()->V{V _receiver13444=([&]()->V{V _receiver13449=([&]()->V{V _receiver13453=j::builtin("Int32Array");V _method13454=this->_literals[70];V _method=j::get(_receiver13453,_method13454);j::Args _params13455=j::Args{([&]()->V{V _obj13452=j::object();j::put(_obj13452,this->_literals[8],_v_12030_n.get());return _obj13452;})(),j::function([=](const j::Args &_args_fn12037,const V &_receiver_fn12037,const V &_self_fn12037) mutable ->V{
V _v_12038__;
V _v_12039_i;
_v_12038__=_args_fn12037[0];
_v_12039_i=_args_fn12037[1];
return _v_12039_i;
return V{};
},2)};return j::call(_method,_params13455,_receiver13453);})();V _method13450=this->_literals[122];V _method=j::get(_receiver13449,_method13450);j::Args _params13451=j::Args{j::function([=](const j::Args &_args_fn12040,const V &_receiver_fn12040,const V &_self_fn12040) mutable ->V{
V _v_12041_a;
V _v_12042_b;
_v_12041_a=_args_fn12040[0];
_v_12042_b=_args_fn12040[1];
return ([&]()->V{V _lhs13447=j::get(_v_12032_v.get(),_v_12041_a);V _rhs13448=j::get(_v_12032_v.get(),_v_12042_b);return V(j::number(_lhs13447)-j::number(_rhs13448));})();
return V{};
},2)};return j::call(_method,_params13451,_receiver13449);})();V _method13445=this->_literals[95];V _method=j::get(_receiver13444,_method13445);j::Args _params13446=j::Args{j::function([=](const j::Args &_args_fn12043,const V &_receiver_fn12043,const V &_self_fn12043) mutable ->V{
V _v_12044_i;
V _v_12045_rank;
_v_12044_i=_args_fn12043[0];
_v_12045_rank=_args_fn12043[1];
return ([&]()->V{V _base13438=_v_12036_at.get();V _key13439=_v_12044_i;V _assign13437=([&]()->V{V _lhs13440=([&]()->V{V _lhs13442=_v_12045_rank;V _rhs13443=V(0.5);return j::binary("+",_lhs13442,_rhs13443);})();V _rhs13441=_v_12030_n.get();return V(j::number(_lhs13440)/j::number(_rhs13441));})();return j::put(_base13438,_key13439,_assign13437);})();
return V{};
},2)};return j::call(_method,_params13446,_receiver13444);})());
_v_12046_band.get()=(j::truth(_v_12026_edge.get())?V(0.12):V(0.0));
_v_12047_codes.get()=([&]()->V{V _receiver13459=([&]()->V{j::Args _array13462;for(const auto &_value:j::elements(_v_12026_edge.get()))_array13462.push_back(_value);return j::array(std::move(_array13462));})();V _method13460=this->_literals[6];V _method=j::get(_receiver13459,_method13460);j::Args _params13461=j::Args{j::function([=](const j::Args &_args_fn12048,const V &_receiver_fn12048,const V &_self_fn12048) mutable ->V{
V _v_12049_c;
_v_12049_c=_args_fn12048[0];
return ([&]()->V{V _receiver13456=_v_12049_c;V _method13457=this->_literals[38];V _method=j::get(_receiver13456,_method13457);j::Args _params13458=j::Args{V(0.0)};return j::call(_method,_params13458,_receiver13456);})();
return V{};
},1)};return j::call(_method,_params13461,_receiver13459);})();
_v_12050_blocks.get()=(j::truth(_v_12025_auto.get())?([&]()->V{j::Args _array13463;_array13463.push_back(V(9617.0));_array13463.push_back(V(9618.0));return j::array(std::move(_array13463));})():_v_12047_codes.get());
return ([&]()->V{V _obj13464=j::object();j::put(_obj13464,this->_literals[50],V(true));j::put(_obj13464,this->_literals[51],_v_12022_period.get());j::put(_obj13464,this->_literals[45],([&]()->V{V _lhs13465=j::get(this->_v_12014_HELD.get(),_v_12023_mode.get());V _rhs13466=_v_12022_period.get();return V(j::number(_lhs13465)*j::number(_rhs13466));})());j::put(_obj13464,this->_literals[54],([&]()->V{std::u16string _text13467;_text13467+=u"dissolving ";_text13467+=j::string(j::get(this->_v_12016_MODE_WHAT.get(),_v_12023_mode.get()));_text13467+=u"";return V(std::move(_text13467));})());j::put(_obj13464,this->_literals[59],j::function([=](const j::Args &_args_fn12051,const V &_receiver_fn12051,const V &_self_fn12051) mutable ->V{
return j::function([=](const j::Args &_args_fn12052,const V &_receiver_fn12052,const V &_self_fn12052) mutable ->V{
V _v_12053_t;
V _v_12054_s;
V _v_12055_g;
_v_12053_t=_args_fn12052[0];
_v_12054_s=_args_fn12052[1];
_v_12055_g=_args_fn12052[2];
{
V _v_12056_k;
V _v_12057_front;
_v_12056_k=([&]()->V{V _callee13468=this->_v_12005_level.get();return j::call(_callee13468,j::Args{_v_12053_t,_v_12022_period.get(),_v_12023_mode.get()});})();
if(j::truth(([&]()->V{V _lhs13469=_v_12056_k;V _rhs13470=V(1.0);return j::binary(">=",_lhs13469,_rhs13470);})())){return ([&]()->V{V _callee13471=this->_v_11874_copy.get();return j::call(_callee13471,j::Args{_v_12054_s,_v_12055_g});})();
}
_v_12057_front=([&]()->V{V _lhs13472=_v_12056_k;V _rhs13473=([&]()->V{V _lhs13474=V(1.0);V _rhs13475=_v_12046_band.get();return j::binary("+",_lhs13474,_rhs13475);})();return V(j::number(_lhs13472)*j::number(_rhs13473));})();
{V _v_12058_i;
_v_12058_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs13476=_v_12058_i;V _rhs13477=_v_12030_n.get();return j::binary("<",_lhs13476,_rhs13477);})());(void)(j::increment(_v_12058_i,1,false))){
V _v_12059_ch;
V _v_12060_d;
V _v_12061_set;
_v_12059_ch=j::get(j::get(_v_12055_g,this->_literals[63]),_v_12058_i);
if(j::truth(([&]()->V{V _lhs13478=_v_12059_ch;V _rhs13479=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13478,_rhs13479,true));})())){continue;
}
_v_12060_d=([&]()->V{V _lhs13480=_v_12057_front;V _rhs13481=j::get(_v_12036_at.get(),_v_12058_i);return V(j::number(_lhs13480)-j::number(_rhs13481));})();
if(j::truth(([&]()->V{V _lhs13482=_v_12060_d;V _rhs13483=V(0.0);return j::binary("<=",_lhs13482,_rhs13483);})())){continue;
}
_v_12061_set=(j::truth(([&]()->V{V _callee13484=this->_v_11885_isBlock.get();return j::call(_callee13484,j::Args{_v_12059_ch});})())?_v_12050_blocks.get():_v_12047_codes.get());
(void)(([&]()->V{V _receiver13503=_v_12054_s;V _method13504=this->_literals[124];V _method=j::get(_receiver13503,_method13504);j::Args _params13505=j::Args{_v_12058_i,(j::truth(([&]()->V{V _lhs13485=_v_12060_d;V _rhs13486=_v_12046_band.get();return j::binary(">=",_lhs13485,_rhs13486);})())?_v_12059_ch:j::get(_v_12061_set,([&]()->V{V _receiver13500=j::builtin("Math");V _method13501=this->_literals[96];V _method=j::get(_receiver13500,_method13501);j::Args _params13502=j::Args{([&]()->V{V _lhs13487=j::get(_v_12061_set,this->_literals[8]);V _rhs13488=V(1.0);return V(j::number(_lhs13487)-j::number(_rhs13488));})(),([&]()->V{V _number13493=([&]()->V{V _lhs13494=([&]()->V{V _lhs13496=_v_12060_d;V _rhs13497=_v_12046_band.get();return V(j::number(_lhs13496)/j::number(_rhs13497));})();V _rhs13495=j::get(_v_12061_set,this->_literals[8]);return V(j::number(_lhs13494)*j::number(_rhs13495));})();return V(std::floor(j::number(_number13493)));})()};return j::call(_method,_params13502,_receiver13500);})())),j::get(j::get(_v_12055_g,this->_literals[64]),_v_12058_i)};return j::call(_method,_params13505,_receiver13503);})());

}
}

}

return V{};
},3);
return V{};
},0));return _obj13464;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_12062_fade.get()=j::function([=](const j::Args &_args_fn12063,const V &_receiver_fn12063,const V &_self_fn12063) mutable ->V{
V _v_12064_src;
V _v_12065_options;
_v_12064_src=_args_fn12063[0];
_v_12065_options=_args_fn12063[1];
{
V _v_12066_o;
j::Cell _v_12067_period;
j::Cell _v_12068_mode;
j::Cell _v_12069_auto;
V _v_12070_chars;
j::Cell _v_12071_given;
j::Cell _v_12074_blocks;
j::Cell _v_12077_ascii;
_v_12066_o=([&]()->V{V _callee13508=this->_v_11736_optionsOf.get();return j::call(_callee13508,j::Args{_v_12065_options,this->_literals[139],([&]()->V{j::Args _array13507;_array13507.push_back(this->_literals[51]);_array13507.push_back(this->_literals[128]);_array13507.push_back(this->_literals[140]);return j::array(std::move(_array13507));})()});})();
_v_12067_period.get()=([&]()->V{V _callee13509=this->_v_11689_num.get();return j::call(_callee13509,j::Args{j::get(_v_12066_o,this->_literals[51]),this->_literals[141],V(6.0),this->_literals[69]});})();
_v_12068_mode.get()=([&]()->V{V _callee13510=this->_v_11710_choice.get();return j::call(_callee13510,j::Args{j::get(_v_12066_o,this->_literals[128]),this->_literals[142],this->_v_12015_MODES.get(),this->_literals[133]});})();
_v_12069_auto.get()=([&]()->V{V _logical13511=([&]()->V{V _lhs13512=j::get(_v_12066_o,this->_literals[140]);V _rhs13513=j::builtin("undefined");return V(j::equal(_lhs13512,_rhs13513,true));})();return !j::truth(_logical13511)?([&]()->V{V _lhs13514=j::get(_v_12066_o,this->_literals[140]);V _rhs13515=this->_literals[143];return V(j::equal(_lhs13514,_rhs13515,true));})():_logical13511;})();
_v_12070_chars=([&]()->V{V _callee13516=this->_v_11652_ramp.get();return j::call(_callee13516,j::Args{(j::truth(_v_12069_auto.get())?this->_literals[144]:j::get(_v_12066_o,this->_literals[140]))});})();
if(j::truth(([&]()->V{V _lhs13517=j::get(_v_12070_chars,V(0.0));V _rhs13518=this->_literals[119];return V(!j::equal(_lhs13517,_rhs13518,true));})())){(void)(([&]()->V{V _callee13523=this->_v_11645_fail.get();return j::call(_callee13523,j::Args{([&]()->V{std::u16string _text13519;_text13519+=u"fade.ramp starts with a space, the place every character fades to, not ";_text13519+=j::string(([&]()->V{V _receiver13520=j::builtin("JSON");V _method13521=this->_literals[4];V _method=j::get(_receiver13520,_method13521);j::Args _params13522=j::Args{_v_12070_chars};return j::call(_method,_params13522,_receiver13520);})());_text13519+=u"";return V(std::move(_text13519));})()});})());
}
_v_12071_given.get()=([&]()->V{V _receiver13527=([&]()->V{j::Args _array13530;for(const auto &_value:j::elements(_v_12070_chars))_array13530.push_back(_value);return j::array(std::move(_array13530));})();V _method13528=this->_literals[6];V _method=j::get(_receiver13527,_method13528);j::Args _params13529=j::Args{j::function([=](const j::Args &_args_fn12072,const V &_receiver_fn12072,const V &_self_fn12072) mutable ->V{
V _v_12073_c;
_v_12073_c=_args_fn12072[0];
return ([&]()->V{V _receiver13524=_v_12073_c;V _method13525=this->_literals[38];V _method=j::get(_receiver13524,_method13525);j::Args _params13526=j::Args{V(0.0)};return j::call(_method,_params13526,_receiver13524);})();
return V{};
},1)};return j::call(_method,_params13529,_receiver13527);})();
_v_12074_blocks.get()=([&]()->V{V _receiver13534=([&]()->V{j::Args _array13537;for(const auto &_value:j::elements(j::get(this->_v_11653_ramps.get(),this->_literals[145])))_array13537.push_back(_value);return j::array(std::move(_array13537));})();V _method13535=this->_literals[6];V _method=j::get(_receiver13534,_method13535);j::Args _params13536=j::Args{j::function([=](const j::Args &_args_fn12075,const V &_receiver_fn12075,const V &_self_fn12075) mutable ->V{
V _v_12076_c;
_v_12076_c=_args_fn12075[0];
return ([&]()->V{V _receiver13531=_v_12076_c;V _method13532=this->_literals[38];V _method=j::get(_receiver13531,_method13532);j::Args _params13533=j::Args{V(0.0)};return j::call(_method,_params13533,_receiver13531);})();
return V{};
},1)};return j::call(_method,_params13536,_receiver13534);})();
_v_12077_ascii.get()=j::function([=](const j::Args &_args_fn12078,const V &_receiver_fn12078,const V &_self_fn12078) mutable ->V{
V _v_12079_c;
_v_12079_c=_args_fn12078[0];
return ([&]()->V{V _logical13538=([&]()->V{V _lhs13539=_v_12079_c;V _rhs13540=V(32.0);return j::binary(">",_lhs13539,_rhs13540);})();return j::truth(_logical13538)?([&]()->V{V _lhs13541=_v_12079_c;V _rhs13542=V(127.0);return j::binary("<",_lhs13541,_rhs13542);})():_logical13538;})();
return V{};
},1);
return ([&]()->V{V _callee13625=this->_v_11825_build.get();return j::call(_callee13625,j::Args{this->_literals[139],_v_12064_src,_v_12066_o,j::function([=](const j::Args &_args_fn12080,const V &_receiver_fn12080,const V &_self_fn12080) mutable ->V{
return ([&]()->V{V _obj13543=j::object();j::put(_obj13543,this->_literals[50],V(true));j::put(_obj13543,this->_literals[51],_v_12067_period.get());j::put(_obj13543,this->_literals[45],([&]()->V{V _lhs13544=j::get(this->_v_12014_HELD.get(),_v_12068_mode.get());V _rhs13545=_v_12067_period.get();return V(j::number(_lhs13544)*j::number(_rhs13545));})());j::put(_obj13543,this->_literals[54],([&]()->V{std::u16string _text13546;_text13546+=u"fading ";_text13546+=j::string(j::get(this->_v_12016_MODE_WHAT.get(),_v_12068_mode.get()));_text13546+=u"";return V(std::move(_text13546));})());j::put(_obj13543,this->_literals[59],j::function([=](const j::Args &_args_fn12081,const V &_receiver_fn12081,const V &_self_fn12081) mutable ->V{
{
j::Cell _v_12082_steps;
j::Cell _v_12083_stepsOf;
_v_12082_steps.get()=([&]()->V{V _callee13547=j::builtin("Map");return j::construct(_callee13547,j::Args{});})();
_v_12083_stepsOf.get()=j::function([=](const j::Args &_args_fn12084,const V &_receiver_fn12084,const V &_self_fn12084) mutable ->V{
V _v_12085_c;
_v_12085_c=_args_fn12084[0];
{
V _v_12086_v;
_v_12086_v=([&]()->V{V _receiver13548=_v_12082_steps.get();V _method13549=this->_literals[39];V _method=j::get(_receiver13548,_method13549);j::Args _params13550=j::Args{_v_12085_c};return j::call(_method,_params13550,_receiver13548);})();
if(j::truth(([&]()->V{V _lhs13551=_v_12086_v;V _rhs13552=j::builtin("undefined");return V(j::equal(_lhs13551,_rhs13552,true));})())){
V _v_12087_codes;
V _v_12088_own;
_v_12087_codes=(j::truth(([&]()->V{V _logical13553=j::unary("!",_v_12069_auto.get());return !j::truth(_logical13553)?([&]()->V{V _callee13554=_v_12077_ascii.get();return j::call(_callee13554,j::Args{_v_12085_c});})():_logical13553;})())?_v_12071_given.get():(j::truth(([&]()->V{V _callee13555=this->_v_11885_isBlock.get();return j::call(_callee13555,j::Args{_v_12085_c});})())?_v_12074_blocks.get():([&]()->V{j::Args _array13556;_array13556.push_back(V(32.0));_array13556.push_back(_v_12085_c);return j::array(std::move(_array13556));})()));
_v_12088_own=([&]()->V{V _receiver13557=_v_12087_codes;V _method13558=this->_literals[74];V _method=j::get(_receiver13557,_method13558);j::Args _params13559=j::Args{_v_12085_c};return j::call(_method,_params13559,_receiver13557);})();
(void)(([&]()->V{V _receiver13580=_v_12082_steps.get();V _method13581=this->_literals[40];V _method=j::get(_receiver13580,_method13581);j::Args _params13582=j::Args{_v_12085_c,(_v_12086_v=([&]()->V{V _obj13561=j::object();j::put(_obj13561,this->_literals[146],_v_12087_codes);j::put(_obj13561,this->_literals[147],(j::truth(([&]()->V{V _lhs13562=_v_12088_own;V _rhs13563=V(0.0);return j::binary(">",_lhs13562,_rhs13563);})())?_v_12088_own:([&]()->V{V _receiver13577=j::builtin("Math");V _method13578=this->_literals[97];V _method=j::get(_receiver13577,_method13578);j::Args _params13579=j::Args{V(1.0),([&]()->V{V _number13569=([&]()->V{V _lhs13570=([&]()->V{V _callee13572=this->_v_11878_density.get();return j::call(_callee13572,j::Args{_v_12085_c});})();V _rhs13571=([&]()->V{V _lhs13573=j::get(_v_12087_codes,this->_literals[8]);V _rhs13574=V(1.0);return V(j::number(_lhs13573)-j::number(_rhs13574));})();return V(j::number(_lhs13570)*j::number(_rhs13571));})();return V(std::floor(j::number(_number13569)+.5));})()};return j::call(_method,_params13579,_receiver13577);})()));return _obj13561;})())};return j::call(_method,_params13582,_receiver13580);})());

}

return _v_12086_v;

}

return V{};
},1);
return j::function([=](const j::Args &_args_fn12089,const V &_receiver_fn12089,const V &_self_fn12089) mutable ->V{
V _v_12090_t;
V _v_12091_s;
V _v_12092_g;
_v_12090_t=_args_fn12089[0];
_v_12091_s=_args_fn12089[1];
_v_12092_g=_args_fn12089[2];
{
V _v_12093_k;
_v_12093_k=([&]()->V{V _callee13583=this->_v_12005_level.get();return j::call(_callee13583,j::Args{_v_12090_t,_v_12067_period.get(),_v_12068_mode.get()});})();
if(j::truth(([&]()->V{V _lhs13584=_v_12093_k;V _rhs13585=V(1.0);return j::binary(">=",_lhs13584,_rhs13585);})())){return ([&]()->V{V _callee13586=this->_v_11874_copy.get();return j::call(_callee13586,j::Args{_v_12091_s,_v_12092_g});})();
}
{V _v_12094_y;
V _v_12095_i;
_v_12094_y=V(0.0);
_v_12095_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs13587=_v_12094_y;V _rhs13588=j::get(_v_12092_g,this->_literals[49]);return j::binary("<",_lhs13587,_rhs13588);})());(void)(j::increment(_v_12094_y,1,false))){{V _v_12096_x;
_v_12096_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs13589=_v_12096_x;V _rhs13590=j::get(_v_12092_g,this->_literals[48]);return j::binary("<",_lhs13589,_rhs13590);})());(void)((j::increment(_v_12096_x,1,false),j::increment(_v_12095_i,1,false)))){
V _v_12097_ch;
V _v_12098_codes;
V _v_12099_top;
V _v_12100_step;
_v_12097_ch=j::get(j::get(_v_12092_g,this->_literals[63]),_v_12095_i);
if(j::truth(([&]()->V{V _lhs13591=_v_12097_ch;V _rhs13592=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13591,_rhs13592,true));})())){continue;
}
V _pattern13594=([&]()->V{V _callee13593=_v_12083_stepsOf.get();return j::call(_callee13593,j::Args{_v_12097_ch});})();
_v_12098_codes=j::get(_pattern13594,this->_literals[146]);
_v_12099_top=j::get(_pattern13594,this->_literals[147]);
_v_12100_step=([&]()->V{V _receiver13617=j::builtin("Math");V _method13618=this->_literals[97];V _method=j::get(_receiver13617,_method13618);j::Args _params13619=j::Args{V(0.0),([&]()->V{V _receiver13612=j::builtin("Math");V _method13613=this->_literals[96];V _method=j::get(_receiver13612,_method13613);j::Args _params13614=j::Args{_v_12099_top,([&]()->V{V _number13602=([&]()->V{V _lhs13603=([&]()->V{V _lhs13605=([&]()->V{V _lhs13607=_v_12099_top;V _rhs13608=_v_12093_k;return V(j::number(_lhs13607)*j::number(_rhs13608));})();V _rhs13606=V(0.5);return j::binary("+",_lhs13605,_rhs13606);})();V _rhs13604=([&]()->V{V _callee13609=this->_v_11642_bayer.get();return j::call(_callee13609,j::Args{_v_12096_x,_v_12094_y});})();return j::binary("+",_lhs13603,_rhs13604);})();return V(std::floor(j::number(_number13602)));})()};return j::call(_method,_params13614,_receiver13612);})()};return j::call(_method,_params13619,_receiver13617);})();
if(j::truth(_v_12100_step)){(void)(([&]()->V{V _receiver13622=_v_12091_s;V _method13623=this->_literals[124];V _method=j::get(_receiver13622,_method13623);j::Args _params13624=j::Args{_v_12095_i,(j::truth(([&]()->V{V _lhs13620=_v_12100_step;V _rhs13621=_v_12099_top;return V(j::equal(_lhs13620,_rhs13621,true));})())?_v_12097_ch:j::get(_v_12098_codes,_v_12100_step)),j::get(j::get(_v_12092_g,this->_literals[64]),_v_12095_i)};return j::call(_method,_params13624,_receiver13622);})());
}

}
}
}}

}

return V{};
},3);

}

return V{};
},0));return _obj13543;})();
return V{};
},0)});})();

}

return V{};
},2);
this->_v_12101_scan.get()=j::function([=](const j::Args &_args_fn12102,const V &_receiver_fn12102,const V &_self_fn12102) mutable ->V{
V _v_12103_src;
V _v_12104_options;
_v_12103_src=_args_fn12102[0];
_v_12104_options=_args_fn12102[1];
{
V _v_12105_o;
j::Cell _v_12106_period;
V _v_12107_direction;
j::Cell _v_12108_across;
j::Cell _v_12109_char;
j::Cell _v_12110_color;
j::Cell _v_12111_reveal;
j::Cell _v_12112_forward;
_v_12105_o=([&]()->V{V _callee13627=this->_v_11736_optionsOf.get();return j::call(_callee13627,j::Args{_v_12104_options,this->_literals[148],([&]()->V{j::Args _array13626;_array13626.push_back(this->_literals[51]);_array13626.push_back(this->_literals[149]);_array13626.push_back(this->_literals[150]);_array13626.push_back(this->_literals[37]);_array13626.push_back(this->_literals[151]);return j::array(std::move(_array13626));})()});})();
_v_12106_period.get()=([&]()->V{V _callee13628=this->_v_11689_num.get();return j::call(_callee13628,j::Args{j::get(_v_12105_o,this->_literals[51]),this->_literals[152],V(3.0),this->_literals[69]});})();
_v_12107_direction=([&]()->V{V _callee13630=this->_v_11710_choice.get();return j::call(_callee13630,j::Args{j::get(_v_12105_o,this->_literals[149]),this->_literals[153],([&]()->V{j::Args _array13629;_array13629.push_back(this->_literals[154]);_array13629.push_back(this->_literals[155]);_array13629.push_back(this->_literals[156]);_array13629.push_back(this->_literals[157]);return j::array(std::move(_array13629));})(),this->_literals[154]});})();
_v_12108_across.get()=([&]()->V{V _logical13631=([&]()->V{V _lhs13632=_v_12107_direction;V _rhs13633=this->_literals[154];return V(j::equal(_lhs13632,_rhs13633,true));})();return !j::truth(_logical13631)?([&]()->V{V _lhs13634=_v_12107_direction;V _rhs13635=this->_literals[155];return V(j::equal(_lhs13634,_rhs13635,true));})():_logical13631;})();
_v_12109_char.get()=([&]()->V{V _receiver13636=([&]()->V{V _callee13639=this->_v_11722_chars.get();return j::call(_callee13639,j::Args{j::get(_v_12105_o,this->_literals[150]),this->_literals[158],(j::truth(_v_12108_across.get())?this->_literals[159]:this->_literals[160]),V(1.0),V(1.0)});})();V _method13637=this->_literals[38];V _method=j::get(_receiver13636,_method13637);j::Args _params13638=j::Args{V(0.0)};return j::call(_method,_params13638,_receiver13636);})();
_v_12110_color.get()=([&]()->V{V _callee13640=this->_v_11730_colour.get();return j::call(_callee13640,j::Args{j::get(_v_12105_o,this->_literals[37]),this->_literals[161]});})();
if(j::truth(([&]()->V{V _logical13641=([&]()->V{V _lhs13642=j::get(_v_12105_o,this->_literals[151]);V _rhs13643=j::builtin("undefined");return V(!j::equal(_lhs13642,_rhs13643,true));})();return j::truth(_logical13641)?([&]()->V{V _lhs13644=j::unary("typeof",j::get(_v_12105_o,this->_literals[151]));V _rhs13645=this->_literals[162];return V(!j::equal(_lhs13644,_rhs13645,true));})():_logical13641;})())){(void)(([&]()->V{V _callee13648=this->_v_11645_fail.get();return j::call(_callee13648,j::Args{([&]()->V{std::u16string _text13646;_text13646+=u"scan.reveal takes true or false, not ";_text13646+=j::string(([&]()->V{V _callee13647=this->_v_11659_show.get();return j::call(_callee13647,j::Args{j::get(_v_12105_o,this->_literals[151])});})());_text13646+=u"";return V(std::move(_text13646));})()});})());
}
_v_12111_reveal.get()=([&]()->V{V _logical13649=j::get(_v_12105_o,this->_literals[151]);return j::nullish(_logical13649)?V(false):_logical13649;})();
_v_12112_forward.get()=([&]()->V{V _logical13650=([&]()->V{V _lhs13651=_v_12107_direction;V _rhs13652=this->_literals[154];return V(j::equal(_lhs13651,_rhs13652,true));})();return !j::truth(_logical13650)?([&]()->V{V _lhs13653=_v_12107_direction;V _rhs13654=this->_literals[156];return V(j::equal(_lhs13653,_rhs13654,true));})():_logical13650;})();
return ([&]()->V{V _callee13738=this->_v_11825_build.get();return j::call(_callee13738,j::Args{this->_literals[148],_v_12103_src,_v_12105_o,j::function([=](const j::Args &_args_fn12113,const V &_receiver_fn12113,const V &_self_fn12113) mutable ->V{
V _v_12114_m;
V _v_12115_inks;
V _pattern13655=_args_fn12113[0];
_v_12114_m=j::get(_pattern13655,this->_literals[19]);
_v_12115_inks=j::get(_pattern13655,this->_literals[43]);
{
j::Cell _v_12116_ink;
j::Cell _v_12117_along;
j::Cell _v_12118_lineAt;
V _v_12122_busy;
_v_12116_ink.get()=(j::truth(_v_12110_color.get())?([&]()->V{V _receiver13656=_v_12115_inks;V _method13657=this->_literals[47];V _method=j::get(_receiver13656,_method13657);j::Args _params13658=j::Args{_v_12110_color.get()};return j::call(_method,_params13658,_receiver13656);})():j::unary("-",V(1.0)));
_v_12117_along.get()=(j::truth(_v_12108_across.get())?j::get(_v_12114_m,this->_literals[49]):j::get(_v_12114_m,this->_literals[48]));
_v_12118_lineAt.get()=j::function([=](const j::Args &_args_fn12119,const V &_receiver_fn12119,const V &_self_fn12119) mutable ->V{
V _v_12120_t;
_v_12120_t=_args_fn12119[0];
{
V _v_12121_u;
_v_12121_u=([&]()->V{V _lhs13659=([&]()->V{V _callee13661=this->_v_11744_mod.get();return j::call(_callee13661,j::Args{_v_12120_t,_v_12106_period.get()});})();V _rhs13660=_v_12106_period.get();return V(j::number(_lhs13659)/j::number(_rhs13660));})();
if(j::truth(_v_12111_reveal.get())){return (j::truth(([&]()->V{V _lhs13662=_v_12121_u;V _rhs13663=V(0.6);return j::binary(">=",_lhs13662,_rhs13663);})())?V::null():([&]()->V{V _number13672=([&]()->V{V _lhs13673=j::unary("-",V(1.0));V _rhs13674=([&]()->V{V _lhs13675=([&]()->V{V _lhs13677=_v_12121_u;V _rhs13678=V(0.6);return V(j::number(_lhs13677)/j::number(_rhs13678));})();V _rhs13676=([&]()->V{V _lhs13679=_v_12117_along.get();V _rhs13680=V(1.0);return j::binary("+",_lhs13679,_rhs13680);})();return V(j::number(_lhs13675)*j::number(_rhs13676));})();return j::binary("+",_lhs13673,_rhs13674);})();return V(std::floor(j::number(_number13672)));})());
}
return ([&]()->V{V _number13687=([&]()->V{V _lhs13688=j::unary("-",V(1.0));V _rhs13689=([&]()->V{V _lhs13690=_v_12121_u;V _rhs13691=([&]()->V{V _lhs13692=_v_12117_along.get();V _rhs13693=V(2.0);return j::binary("+",_lhs13692,_rhs13693);})();return V(j::number(_lhs13690)*j::number(_rhs13691));})();return j::binary("+",_lhs13688,_rhs13689);})();return V(std::floor(j::number(_number13687)));})();

}

return V{};
},1);
_v_12122_busy=j::function([=](const j::Args &_args_fn12123,const V &_receiver_fn12123,const V &_self_fn12123) mutable ->V{
V _v_12124_t;
_v_12124_t=_args_fn12123[0];
{
V _v_12125_p;
_v_12125_p=([&]()->V{V _callee13694=_v_12118_lineAt.get();return j::call(_callee13694,j::Args{_v_12124_t});})();
return ([&]()->V{V _logical13695=([&]()->V{V _lhs13696=_v_12125_p;V _rhs13697=V::null();return V(!j::equal(_lhs13696,_rhs13697,true));})();return j::truth(_logical13695)?([&]()->V{V _logical13698=_v_12111_reveal.get();return !j::truth(_logical13698)?([&]()->V{V _logical13699=([&]()->V{V _lhs13700=_v_12125_p;V _rhs13701=V(0.0);return j::binary(">=",_lhs13700,_rhs13701);})();return j::truth(_logical13699)?([&]()->V{V _lhs13702=_v_12125_p;V _rhs13703=_v_12117_along.get();return j::binary("<",_lhs13702,_rhs13703);})():_logical13699;})():_logical13698;})():_logical13695;})();

}

return V{};
},1);
return ([&]()->V{V _obj13704=j::object();j::put(_obj13704,this->_literals[50],V(true));j::put(_obj13704,this->_literals[51],_v_12106_period.get());j::put(_obj13704,this->_literals[45],([&]()->V{V _callee13705=this->_v_11759_quiet.get();return j::call(_callee13705,j::Args{V(0.0),_v_12122_busy,_v_12106_period.get()});})());j::put(_obj13704,this->_literals[54],(j::truth(_v_12111_reveal.get())?this->_literals[163]:this->_literals[164]));j::put(_obj13704,this->_literals[59],j::function([=](const j::Args &_args_fn12126,const V &_receiver_fn12126,const V &_self_fn12126) mutable ->V{
return j::function([=](const j::Args &_args_fn12127,const V &_receiver_fn12127,const V &_self_fn12127) mutable ->V{
V _v_12128_t;
V _v_12129_s;
V _v_12130_g;
_v_12128_t=_args_fn12127[0];
_v_12129_s=_args_fn12127[1];
_v_12130_g=_args_fn12127[2];
{
V _v_12131_pos;
V _v_12132_line;
_v_12131_pos=([&]()->V{V _callee13706=_v_12118_lineAt.get();return j::call(_callee13706,j::Args{_v_12128_t});})();
if(j::truth(([&]()->V{V _lhs13707=_v_12131_pos;V _rhs13708=V::null();return V(j::equal(_lhs13707,_rhs13708,true));})())){return ([&]()->V{V _callee13709=this->_v_11874_copy.get();return j::call(_callee13709,j::Args{_v_12129_s,_v_12130_g});})();
}
_v_12132_line=(j::truth(_v_12112_forward.get())?_v_12131_pos:([&]()->V{V _lhs13710=([&]()->V{V _lhs13712=_v_12117_along.get();V _rhs13713=V(1.0);return V(j::number(_lhs13712)-j::number(_rhs13713));})();V _rhs13711=_v_12131_pos;return V(j::number(_lhs13710)-j::number(_rhs13711));})());
{V _v_12133_y;
V _v_12134_i;
_v_12133_y=V(0.0);
_v_12134_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs13714=_v_12133_y;V _rhs13715=j::get(_v_12130_g,this->_literals[49]);return j::binary("<",_lhs13714,_rhs13715);})());(void)(j::increment(_v_12133_y,1,false))){{V _v_12135_x;
_v_12135_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs13716=_v_12135_x;V _rhs13717=j::get(_v_12130_g,this->_literals[48]);return j::binary("<",_lhs13716,_rhs13717);})());(void)((j::increment(_v_12135_x,1,false),j::increment(_v_12134_i,1,false)))){
V _v_12136_q;
_v_12136_q=(j::truth(_v_12108_across.get())?_v_12133_y:_v_12135_x);
if(j::truth(([&]()->V{V _lhs13718=_v_12136_q;V _rhs13719=_v_12132_line;return V(j::equal(_lhs13718,_rhs13719,true));})())){(void)(([&]()->V{V _receiver13724=_v_12129_s;V _method13725=this->_literals[124];V _method=j::get(_receiver13724,_method13725);j::Args _params13726=j::Args{_v_12134_i,_v_12109_char.get(),(j::truth(([&]()->V{V _lhs13720=_v_12116_ink.get();V _rhs13721=V(0.0);return j::binary(">=",_lhs13720,_rhs13721);})())?_v_12116_ink.get():(j::truth(([&]()->V{V _lhs13722=j::get(j::get(_v_12130_g,this->_literals[63]),_v_12134_i);V _rhs13723=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13722,_rhs13723,true));})())?this->_v_11637_NONE.get():j::get(j::get(_v_12130_g,this->_literals[64]),_v_12134_i)))};return j::call(_method,_params13726,_receiver13724);})());
}else {if(j::truth(([&]()->V{V _logical13727=j::unary("!",_v_12111_reveal.get());return !j::truth(_logical13727)?(j::truth(_v_12112_forward.get())?([&]()->V{V _lhs13728=_v_12136_q;V _rhs13729=_v_12132_line;return j::binary("<",_lhs13728,_rhs13729);})():([&]()->V{V _lhs13730=_v_12136_q;V _rhs13731=_v_12132_line;return j::binary(">",_lhs13730,_rhs13731);})()):_logical13727;})())){
(void)(([&]()->V{V _base13733=j::get(_v_12129_s,this->_literals[63]);V _key13734=_v_12134_i;V _assign13732=j::get(j::get(_v_12130_g,this->_literals[63]),_v_12134_i);return j::put(_base13733,_key13734,_assign13732);})());
(void)(([&]()->V{V _base13736=j::get(_v_12129_s,this->_literals[64]);V _key13737=_v_12134_i;V _assign13735=j::get(j::get(_v_12130_g,this->_literals[64]),_v_12134_i);return j::put(_base13736,_key13737,_assign13735);})());

}

}

}
}
}}

}

return V{};
},3);
return V{};
},0));return _obj13704;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_12137_glitch.get()=j::function([=](const j::Args &_args_fn12138,const V &_receiver_fn12138,const V &_self_fn12138) mutable ->V{
V _v_12139_src;
V _v_12140_options;
_v_12139_src=_args_fn12138[0];
_v_12140_options=_args_fn12138[1];
{
V _v_12141_o;
j::Cell _v_12142_every;
j::Cell _v_12143_length;
j::Cell _v_12144_first;
j::Cell _v_12145_amount;
j::Cell _v_12146_junk;
j::Cell _v_12149_seed;
_v_12141_o=([&]()->V{V _callee13740=this->_v_11736_optionsOf.get();return j::call(_callee13740,j::Args{_v_12140_options,this->_literals[165],([&]()->V{j::Args _array13739;_array13739.push_back(this->_literals[9]);_array13739.push_back(this->_literals[8]);_array13739.push_back(this->_literals[78]);_array13739.push_back(this->_literals[166]);_array13739.push_back(this->_literals[63]);_array13739.push_back(this->_literals[106]);return j::array(std::move(_array13739));})()});})();
_v_12142_every.get()=([&]()->V{V _callee13742=this->_v_11697_wordy.get();return j::call(_callee13742,j::Args{j::get(_v_12141_o,this->_literals[9]),this->_literals[167],([&]()->V{V _callee13741=this->_v_11706_often.get();return j::call(_callee13741,j::Args{V(2.5)});})(),V(2.5),this->_literals[69]});})();
_v_12143_length.get()=([&]()->V{V _callee13743=this->_v_11689_num.get();return j::call(_callee13743,j::Args{j::get(_v_12141_o,this->_literals[8]),this->_literals[168],V(0.35),this->_literals[69]});})();
_v_12144_first.get()=([&]()->V{V _callee13744=this->_v_11689_num.get();return j::call(_callee13744,j::Args{j::get(_v_12141_o,this->_literals[78]),this->_literals[169],V(0.5),this->_literals[0]});})();
_v_12145_amount.get()=([&]()->V{V _callee13746=this->_v_11697_wordy.get();return j::call(_callee13746,j::Args{j::get(_v_12141_o,this->_literals[166]),this->_literals[170],([&]()->V{V _obj13745=j::object();j::put(_obj13745,this->_literals[171],V(0.25));j::put(_obj13745,this->_literals[172],V(0.5));j::put(_obj13745,this->_literals[173],V(0.85));return _obj13745;})(),V(0.5),this->_literals[174]});})();
_v_12146_junk.get()=([&]()->V{V _receiver13750=([&]()->V{j::Args _array13753;for(const auto &_value:j::elements(([&]()->V{V _callee13754=this->_v_11722_chars.get();return j::call(_callee13754,j::Args{j::get(_v_12141_o,this->_literals[63]),this->_literals[175],this->_literals[176],V(1.0)});})()))_array13753.push_back(_value);return j::array(std::move(_array13753));})();V _method13751=this->_literals[6];V _method=j::get(_receiver13750,_method13751);j::Args _params13752=j::Args{j::function([=](const j::Args &_args_fn12147,const V &_receiver_fn12147,const V &_self_fn12147) mutable ->V{
V _v_12148_c;
_v_12148_c=_args_fn12147[0];
return ([&]()->V{V _receiver13747=_v_12148_c;V _method13748=this->_literals[38];V _method=j::get(_receiver13747,_method13748);j::Args _params13749=j::Args{V(0.0)};return j::call(_method,_params13749,_receiver13747);})();
return V{};
},1)};return j::call(_method,_params13752,_receiver13750);})();
_v_12149_seed.get()=([&]()->V{V _callee13755=this->_v_11689_num.get();return j::call(_callee13755,j::Args{j::get(_v_12141_o,this->_literals[106]),this->_literals[177],V(1.0),this->_literals[117]});})();
return ([&]()->V{V _callee13855=this->_v_11825_build.get();return j::call(_callee13855,j::Args{this->_literals[165],_v_12139_src,_v_12141_o,j::function([=](const j::Args &_args_fn12150,const V &_receiver_fn12150,const V &_self_fn12150) mutable ->V{
V _v_12151_m;
V _pattern13756=_args_fn12150[0];
_v_12151_m=j::get(_pattern13756,this->_literals[19]);
{
V _v_12152_busy;
j::Cell _v_12155_reach;
_v_12152_busy=j::function([=](const j::Args &_args_fn12153,const V &_receiver_fn12153,const V &_self_fn12153) mutable ->V{
V _v_12154_t;
_v_12154_t=_args_fn12153[0];
return ([&]()->V{V _lhs13757=([&]()->V{V _callee13761=this->_v_11744_mod.get();return j::call(_callee13761,j::Args{([&]()->V{V _lhs13759=_v_12154_t;V _rhs13760=_v_12144_first.get();return V(j::number(_lhs13759)-j::number(_rhs13760));})(),_v_12142_every.get()});})();V _rhs13758=_v_12143_length.get();return j::binary("<",_lhs13757,_rhs13758);})();
return V{};
},1);
_v_12155_reach.get()=([&]()->V{V _lhs13762=V(1.0);V _rhs13763=([&]()->V{V _number13766=([&]()->V{V _lhs13767=_v_12145_amount.get();V _rhs13768=V(10.0);return V(j::number(_lhs13767)*j::number(_rhs13768));})();return V(std::floor(j::number(_number13766)+.5));})();return j::binary("+",_lhs13762,_rhs13763);})();
return ([&]()->V{V _obj13769=j::object();j::put(_obj13769,this->_literals[50],V(true));j::put(_obj13769,this->_literals[51],_v_12142_every.get());j::put(_obj13769,this->_literals[45],([&]()->V{V _callee13771=this->_v_11759_quiet.get();return j::call(_callee13771,j::Args{([&]()->V{V _logical13770=j::get(_v_12151_m,this->_literals[45]);return j::nullish(_logical13770)?V(0.0):_logical13770;})(),_v_12152_busy,_v_12142_every.get()});})());j::put(_obj13769,this->_literals[54],this->_literals[178]);j::put(_obj13769,this->_literals[59],j::function([=](const j::Args &_args_fn12156,const V &_receiver_fn12156,const V &_self_fn12156) mutable ->V{
return j::function([=](const j::Args &_args_fn12157,const V &_receiver_fn12157,const V &_self_fn12157) mutable ->V{
V _v_12158_t;
V _v_12159_s;
V _v_12160_g;
_v_12158_t=_args_fn12157[0];
_v_12159_s=_args_fn12157[1];
_v_12160_g=_args_fn12157[2];
{
V _v_12161_u;
V _v_12162_k;
V _v_12163_shift;
V _v_12164_cols;
_v_12161_u=([&]()->V{V _callee13774=this->_v_11744_mod.get();return j::call(_callee13774,j::Args{([&]()->V{V _lhs13772=_v_12158_t;V _rhs13773=_v_12144_first.get();return V(j::number(_lhs13772)-j::number(_rhs13773));})(),_v_12142_every.get()});})();
if(j::truth(([&]()->V{V _lhs13775=_v_12161_u;V _rhs13776=_v_12143_length.get();return j::binary(">=",_lhs13775,_rhs13776);})())){return ([&]()->V{V _callee13777=this->_v_11874_copy.get();return j::call(_callee13777,j::Args{_v_12159_s,_v_12160_g});})();
}
_v_12162_k=([&]()->V{V _number13782=([&]()->V{V _lhs13783=([&]()->V{V _lhs13785=_v_12161_u;V _rhs13786=V(16.0);return V(j::number(_lhs13785)*j::number(_rhs13786));})();V _rhs13784=V(0.000001);return j::binary("+",_lhs13783,_rhs13784);})();return V(std::floor(j::number(_number13782)));})();
_v_12163_shift=([&]()->V{V _number13790=([&]()->V{V _lhs13791=([&]()->V{V _callee13793=this->_v_11647_hash.get();return j::call(_callee13793,j::Args{_v_12149_seed.get(),_v_12162_k,V(1.0)});})();V _rhs13792=V(3.0);return V(j::number(_lhs13791)*j::number(_rhs13792));})();return V(std::floor(j::number(_number13790)));})();
V _pattern13794=_v_12160_g;
_v_12164_cols=j::get(_pattern13794,this->_literals[48]);
{V _v_12165_y;
_v_12165_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs13795=_v_12165_y;V _rhs13796=j::get(_v_12160_g,this->_literals[49]);return j::binary("<",_lhs13795,_rhs13796);})());(void)(j::increment(_v_12165_y,1,false))){
V _v_12166_band;
V _v_12167_dx;
_v_12166_band=([&]()->V{V _lhs13797=([&]()->V{V _lhs13799=_v_12165_y;V _rhs13800=_v_12163_shift;return j::binary("+",_lhs13799,_rhs13800);})();V _rhs13798=V(1.0);return V(int(j::i32(_lhs13797)>>(j::u32(_rhs13798)&31)));})();
_v_12167_dx=(j::truth(([&]()->V{V _lhs13801=([&]()->V{V _callee13803=this->_v_11647_hash.get();return j::call(_callee13803,j::Args{_v_12149_seed.get(),_v_12162_k,V(2.0),_v_12166_band});})();V _rhs13802=([&]()->V{V _lhs13804=_v_12145_amount.get();V _rhs13805=V(0.7);return V(j::number(_lhs13804)*j::number(_rhs13805));})();return j::binary("<",_lhs13801,_rhs13802);})())?([&]()->V{V _number13813=([&]()->V{V _lhs13814=([&]()->V{V _lhs13816=([&]()->V{V _lhs13818=([&]()->V{V _callee13820=this->_v_11647_hash.get();return j::call(_callee13820,j::Args{_v_12149_seed.get(),_v_12162_k,V(3.0),_v_12166_band});})();V _rhs13819=V(2.0);return V(j::number(_lhs13818)*j::number(_rhs13819));})();V _rhs13817=V(1.0);return V(j::number(_lhs13816)-j::number(_rhs13817));})();V _rhs13815=_v_12155_reach.get();return V(j::number(_lhs13814)*j::number(_rhs13815));})();return V(std::floor(j::number(_number13813)+.5));})():V(0.0));
{V _v_12168_x;
_v_12168_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs13821=_v_12168_x;V _rhs13822=_v_12164_cols;return j::binary("<",_lhs13821,_rhs13822);})());(void)(j::increment(_v_12168_x,1,false))){
V _v_12169_from;
V _v_12170_j;
V _v_12171_i;
V _v_12172_swap;
_v_12169_from=([&]()->V{V _lhs13823=_v_12168_x;V _rhs13824=_v_12167_dx;return V(j::number(_lhs13823)-j::number(_rhs13824));})();
if(j::truth(([&]()->V{V _logical13825=([&]()->V{V _lhs13826=_v_12169_from;V _rhs13827=V(0.0);return j::binary("<",_lhs13826,_rhs13827);})();return !j::truth(_logical13825)?([&]()->V{V _lhs13828=_v_12169_from;V _rhs13829=_v_12164_cols;return j::binary(">=",_lhs13828,_rhs13829);})():_logical13825;})())){continue;
}
_v_12170_j=([&]()->V{V _lhs13830=([&]()->V{V _lhs13832=_v_12165_y;V _rhs13833=_v_12164_cols;return V(j::number(_lhs13832)*j::number(_rhs13833));})();V _rhs13831=_v_12169_from;return j::binary("+",_lhs13830,_rhs13831);})();
if(j::truth(([&]()->V{V _lhs13834=j::get(j::get(_v_12160_g,this->_literals[63]),_v_12170_j);V _rhs13835=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13834,_rhs13835,true));})())){continue;
}
_v_12171_i=([&]()->V{V _lhs13836=([&]()->V{V _lhs13838=_v_12165_y;V _rhs13839=_v_12164_cols;return V(j::number(_lhs13838)*j::number(_rhs13839));})();V _rhs13837=_v_12168_x;return j::binary("+",_lhs13836,_rhs13837);})();
_v_12172_swap=([&]()->V{V _lhs13840=([&]()->V{V _callee13842=this->_v_11647_hash.get();return j::call(_callee13842,j::Args{_v_12149_seed.get(),_v_12162_k,_v_12171_i,V(4.0)});})();V _rhs13841=([&]()->V{V _lhs13843=_v_12145_amount.get();V _rhs13844=V(0.12);return V(j::number(_lhs13843)*j::number(_rhs13844));})();return j::binary("<",_lhs13840,_rhs13841);})();
(void)(([&]()->V{V _receiver13852=_v_12159_s;V _method13853=this->_literals[124];V _method=j::get(_receiver13852,_method13853);j::Args _params13854=j::Args{_v_12171_i,(j::truth(_v_12172_swap)?j::get(_v_12146_junk.get(),([&]()->V{V _number13848=([&]()->V{V _lhs13849=([&]()->V{V _callee13851=this->_v_11647_hash.get();return j::call(_callee13851,j::Args{_v_12149_seed.get(),_v_12162_k,_v_12171_i,V(5.0)});})();V _rhs13850=j::get(_v_12146_junk.get(),this->_literals[8]);return V(j::number(_lhs13849)*j::number(_rhs13850));})();return V(std::floor(j::number(_number13848)));})()):j::get(j::get(_v_12160_g,this->_literals[63]),_v_12170_j)),j::get(j::get(_v_12160_g,this->_literals[64]),_v_12170_j)};return j::call(_method,_params13854,_receiver13852);})());

}
}

}
}

}

return V{};
},3);
return V{};
},0));return _obj13769;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_12173_wave.get()=j::function([=](const j::Args &_args_fn12174,const V &_receiver_fn12174,const V &_self_fn12174) mutable ->V{
V _v_12175_src;
V _v_12176_options;
_v_12175_src=_args_fn12174[0];
_v_12176_options=_args_fn12174[1];
{
V _v_12177_o;
V _v_12178_axis;
j::Cell _v_12179_rows;
V _v_12180_much;
V _v_12181_pace;
j::Cell _v_12182_amplitude;
j::Cell _v_12183_wavelength;
j::Cell _v_12184_period;
j::Cell _v_12185_room;
_v_12177_o=([&]()->V{V _callee13857=this->_v_11736_optionsOf.get();return j::call(_callee13857,j::Args{_v_12176_options,this->_literals[179],([&]()->V{j::Args _array13856;_array13856.push_back(this->_literals[180]);_array13856.push_back(this->_literals[166]);_array13856.push_back(this->_literals[181]);_array13856.push_back(this->_literals[51]);_array13856.push_back(this->_literals[77]);_array13856.push_back(this->_literals[182]);return j::array(std::move(_array13856));})()});})();
_v_12178_axis=([&]()->V{V _callee13859=this->_v_11710_choice.get();return j::call(_callee13859,j::Args{j::get(_v_12177_o,this->_literals[182]),this->_literals[183],([&]()->V{j::Args _array13858;_array13858.push_back(this->_literals[49]);_array13858.push_back(this->_literals[112]);return j::array(std::move(_array13858));})(),this->_literals[49]});})();
_v_12179_rows.get()=([&]()->V{V _lhs13860=_v_12178_axis;V _rhs13861=this->_literals[49];return V(j::equal(_lhs13860,_rhs13861,true));})();
if(j::truth(([&]()->V{V _logical13862=([&]()->V{V _lhs13863=j::get(_v_12177_o,this->_literals[180]);V _rhs13864=j::builtin("undefined");return V(!j::equal(_lhs13863,_rhs13864,true));})();return j::truth(_logical13862)?([&]()->V{V _lhs13865=j::get(_v_12177_o,this->_literals[166]);V _rhs13866=j::builtin("undefined");return V(!j::equal(_lhs13865,_rhs13866,true));})():_logical13862;})())){(void)(([&]()->V{V _callee13867=this->_v_11645_fail.get();return j::call(_callee13867,j::Args{this->_literals[184]});})());
}
if(j::truth(([&]()->V{V _logical13868=([&]()->V{V _lhs13869=j::get(_v_12177_o,this->_literals[51]);V _rhs13870=j::builtin("undefined");return V(!j::equal(_lhs13869,_rhs13870,true));})();return j::truth(_logical13868)?([&]()->V{V _lhs13871=j::get(_v_12177_o,this->_literals[77]);V _rhs13872=j::builtin("undefined");return V(!j::equal(_lhs13871,_rhs13872,true));})():_logical13868;})())){(void)(([&]()->V{V _callee13873=this->_v_11645_fail.get();return j::call(_callee13873,j::Args{this->_literals[185]});})());
}
_v_12180_much=(j::truth(([&]()->V{V _lhs13874=j::get(_v_12177_o,this->_literals[166]);V _rhs13875=j::builtin("undefined");return V(j::equal(_lhs13874,_rhs13875,true));})())?V(1.0):(j::truth(([&]()->V{V _lhs13876=([&]()->V{V _callee13879=this->_v_11710_choice.get();return j::call(_callee13879,j::Args{j::get(_v_12177_o,this->_literals[166]),this->_literals[186],([&]()->V{j::Args _array13878;_array13878.push_back(this->_literals[171]);_array13878.push_back(this->_literals[172]);_array13878.push_back(this->_literals[173]);return j::array(std::move(_array13878));})(),this->_literals[172]});})();V _rhs13877=this->_literals[171];return V(j::equal(_lhs13876,_rhs13877,true));})())?V(0.5):(j::truth(([&]()->V{V _lhs13880=j::get(_v_12177_o,this->_literals[166]);V _rhs13881=this->_literals[173];return V(j::equal(_lhs13880,_rhs13881,true));})())?V(2.0):V(1.0))));
_v_12181_pace=(j::truth(([&]()->V{V _lhs13882=j::get(_v_12177_o,this->_literals[77]);V _rhs13883=j::builtin("undefined");return V(j::equal(_lhs13882,_rhs13883,true));})())?V(1.0):j::get(this->_v_11709_SPEED.get(),([&]()->V{V _callee13885=this->_v_11710_choice.get();return j::call(_callee13885,j::Args{j::get(_v_12177_o,this->_literals[77]),this->_literals[187],([&]()->V{j::Args _array13884;_array13884.push_back(this->_literals[188]);_array13884.push_back(this->_literals[189]);_array13884.push_back(this->_literals[190]);return j::array(std::move(_array13884));})(),this->_literals[189]});})()));
_v_12182_amplitude.get()=([&]()->V{V _callee13888=this->_v_11689_num.get();return j::call(_callee13888,j::Args{j::get(_v_12177_o,this->_literals[180]),this->_literals[191],([&]()->V{V _lhs13886=(j::truth(_v_12179_rows.get())?V(2.0):V(1.0));V _rhs13887=_v_12180_much;return V(j::number(_lhs13886)*j::number(_rhs13887));})(),this->_literals[85]});})();
_v_12183_wavelength.get()=([&]()->V{V _callee13889=this->_v_11689_num.get();return j::call(_callee13889,j::Args{j::get(_v_12177_o,this->_literals[181]),this->_literals[192],(j::truth(_v_12179_rows.get())?V(12.0):V(16.0)),this->_literals[85]});})();
_v_12184_period.get()=([&]()->V{V _callee13892=this->_v_11689_num.get();return j::call(_callee13892,j::Args{j::get(_v_12177_o,this->_literals[51]),this->_literals[193],([&]()->V{V _lhs13890=V(2.0);V _rhs13891=_v_12181_pace;return V(j::number(_lhs13890)/j::number(_rhs13891));})(),this->_literals[69]});})();
_v_12185_room.get()=([&]()->V{V _number13893=_v_12182_amplitude.get();return V(std::ceil(j::number(_number13893)));})();
return ([&]()->V{V _callee13975=this->_v_11825_build.get();return j::call(_callee13975,j::Args{this->_literals[179],_v_12175_src,_v_12177_o,j::function([=](const j::Args &_args_fn12186,const V &_receiver_fn12186,const V &_self_fn12186) mutable ->V{
V _v_12187_m;
V _pattern13894=_args_fn12186[0];
_v_12187_m=j::get(_pattern13894,this->_literals[19]);
return ([&]()->V{V _obj13895=j::object();j::put(_obj13895,this->_literals[48],([&]()->V{V _lhs13896=j::get(_v_12187_m,this->_literals[48]);V _rhs13897=(j::truth(_v_12179_rows.get())?([&]()->V{V _lhs13898=V(2.0);V _rhs13899=_v_12185_room.get();return V(j::number(_lhs13898)*j::number(_rhs13899));})():V(0.0));return j::binary("+",_lhs13896,_rhs13897);})());j::put(_obj13895,this->_literals[49],([&]()->V{V _lhs13900=j::get(_v_12187_m,this->_literals[49]);V _rhs13901=(j::truth(_v_12179_rows.get())?V(0.0):([&]()->V{V _lhs13902=V(2.0);V _rhs13903=_v_12185_room.get();return V(j::number(_lhs13902)*j::number(_rhs13903));})());return j::binary("+",_lhs13900,_rhs13901);})());j::put(_obj13895,this->_literals[50],V(true));j::put(_obj13895,this->_literals[51],_v_12184_period.get());j::put(_obj13895,this->_literals[54],this->_literals[194]);j::put(_obj13895,this->_literals[59],j::function([=](const j::Args &_args_fn12188,const V &_receiver_fn12188,const V &_self_fn12188) mutable ->V{
return j::function([=](const j::Args &_args_fn12189,const V &_receiver_fn12189,const V &_self_fn12189) mutable ->V{
V _v_12190_t;
V _v_12191_s;
V _v_12192_g;
_v_12190_t=_args_fn12189[0];
_v_12191_s=_args_fn12189[1];
_v_12192_g=_args_fn12189[2];
{
V _v_12193_w;
V _v_12194_h;
V _v_12195_lines;
V _pattern13904=_v_12192_g;
_v_12193_w=j::get(_pattern13904,this->_literals[48]);
_v_12194_h=j::get(_pattern13904,this->_literals[49]);
_v_12195_lines=(j::truth(_v_12179_rows.get())?_v_12194_h:_v_12193_w);
{V _v_12196_k;
_v_12196_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs13905=_v_12196_k;V _rhs13906=_v_12195_lines;return j::binary("<",_lhs13905,_rhs13906);})());(void)(j::increment(_v_12196_k,1,false))){
V _v_12197_off;
_v_12197_off=([&]()->V{V _lhs13907=_v_12185_room.get();V _rhs13908=([&]()->V{V _number13928=([&]()->V{V _lhs13929=_v_12182_amplitude.get();V _rhs13930=([&]()->V{V _number13939=([&]()->V{V _lhs13940=this->_v_11640_TAU.get();V _rhs13941=([&]()->V{V _lhs13942=([&]()->V{V _lhs13944=_v_12196_k;V _rhs13945=_v_12183_wavelength.get();return V(j::number(_lhs13944)/j::number(_rhs13945));})();V _rhs13943=([&]()->V{V _lhs13946=_v_12190_t;V _rhs13947=_v_12184_period.get();return V(j::number(_lhs13946)/j::number(_rhs13947));})();return V(j::number(_lhs13942)-j::number(_rhs13943));})();return V(j::number(_lhs13940)*j::number(_rhs13941));})();return V(std::sin(j::number(_number13939)));})();return V(j::number(_lhs13929)*j::number(_rhs13930));})();return V(std::floor(j::number(_number13928)+.5));})();return j::binary("+",_lhs13907,_rhs13908);})();
{V _v_12198_j;
V _v_12199_n;
_v_12198_j=V(0.0);
_v_12199_n=(j::truth(_v_12179_rows.get())?_v_12193_w:_v_12194_h);
for(;j::truth(([&]()->V{V _lhs13948=_v_12198_j;V _rhs13949=_v_12199_n;return j::binary("<",_lhs13948,_rhs13949);})());(void)(j::increment(_v_12198_j,1,false))){
V _v_12200_i;
_v_12200_i=(j::truth(_v_12179_rows.get())?([&]()->V{V _lhs13950=([&]()->V{V _lhs13952=_v_12196_k;V _rhs13953=_v_12193_w;return V(j::number(_lhs13952)*j::number(_rhs13953));})();V _rhs13951=_v_12198_j;return j::binary("+",_lhs13950,_rhs13951);})():([&]()->V{V _lhs13954=([&]()->V{V _lhs13956=_v_12198_j;V _rhs13957=_v_12193_w;return V(j::number(_lhs13956)*j::number(_rhs13957));})();V _rhs13955=_v_12196_k;return j::binary("+",_lhs13954,_rhs13955);})());
if(j::truth(([&]()->V{V _lhs13958=j::get(j::get(_v_12192_g,this->_literals[63]),_v_12200_i);V _rhs13959=this->_v_11634_EMPTY.get();return V(j::equal(_lhs13958,_rhs13959,true));})())){continue;
}
(void)(([&]()->V{V _receiver13972=_v_12191_s;V _method13973=this->_literals[124];V _method=j::get(_receiver13972,_method13973);j::Args _params13974=j::Args{(j::truth(_v_12179_rows.get())?([&]()->V{V _lhs13960=([&]()->V{V _lhs13962=([&]()->V{V _lhs13964=_v_12196_k;V _rhs13965=j::get(_v_12191_s,this->_literals[48]);return V(j::number(_lhs13964)*j::number(_rhs13965));})();V _rhs13963=_v_12197_off;return j::binary("+",_lhs13962,_rhs13963);})();V _rhs13961=_v_12198_j;return j::binary("+",_lhs13960,_rhs13961);})():([&]()->V{V _lhs13966=([&]()->V{V _lhs13968=([&]()->V{V _lhs13970=_v_12197_off;V _rhs13971=_v_12198_j;return j::binary("+",_lhs13970,_rhs13971);})();V _rhs13969=j::get(_v_12191_s,this->_literals[48]);return V(j::number(_lhs13968)*j::number(_rhs13969));})();V _rhs13967=_v_12196_k;return j::binary("+",_lhs13966,_rhs13967);})()),j::get(j::get(_v_12192_g,this->_literals[63]),_v_12200_i),j::get(j::get(_v_12192_g,this->_literals[64]),_v_12200_i)};return j::call(_method,_params13974,_receiver13972);})());

}
}

}
}

}

return V{};
},3);
return V{};
},0));return _obj13895;})();
return V{};
},1)});})();

}

return V{};
},2);
this->_v_12201_hsl.get()=j::function([=](const j::Args &_args_fn12202,const V &_receiver_fn12202,const V &_self_fn12202) mutable ->V{
j::Cell _v_12203_h;
V _v_12204_s;
j::Cell _v_12205_l;
_v_12203_h.get()=_args_fn12202[0];
_v_12204_s=_args_fn12202[1];
_v_12205_l.get()=_args_fn12202[2];
{
j::Cell _v_12206_a;
V _v_12207_f;
_v_12206_a.get()=([&]()->V{V _lhs13976=_v_12204_s;V _rhs13977=([&]()->V{V _receiver13982=j::builtin("Math");V _method13983=this->_literals[96];V _method=j::get(_receiver13982,_method13983);j::Args _params13984=j::Args{_v_12205_l.get(),([&]()->V{V _lhs13978=V(1.0);V _rhs13979=_v_12205_l.get();return V(j::number(_lhs13978)-j::number(_rhs13979));})()};return j::call(_method,_params13984,_receiver13982);})();return V(j::number(_lhs13976)*j::number(_rhs13977));})();
_v_12207_f=j::function([=](const j::Args &_args_fn12208,const V &_receiver_fn12208,const V &_self_fn12208) mutable ->V{
V _v_12209_n;
_v_12209_n=_args_fn12208[0];
{
V _v_12210_k;
_v_12210_k=([&]()->V{V _lhs13985=([&]()->V{V _lhs13987=_v_12209_n;V _rhs13988=([&]()->V{V _lhs13989=_v_12203_h.get();V _rhs13990=V(30.0);return V(j::number(_lhs13989)/j::number(_rhs13990));})();return j::binary("+",_lhs13987,_rhs13988);})();V _rhs13986=V(12.0);return V(std::fmod(j::number(_lhs13985),j::number(_rhs13986)));})();
return ([&]()->V{V _number14012=([&]()->V{V _lhs14013=V(255.0);V _rhs14014=([&]()->V{V _lhs14015=_v_12205_l.get();V _rhs14016=([&]()->V{V _lhs14017=_v_12206_a.get();V _rhs14018=([&]()->V{V _receiver14031=j::builtin("Math");V _method14032=this->_literals[97];V _method=j::get(_receiver14031,_method14032);j::Args _params14033=j::Args{j::unary("-",V(1.0)),([&]()->V{V _receiver14026=j::builtin("Math");V _method14027=this->_literals[96];V _method=j::get(_receiver14026,_method14027);j::Args _params14028=j::Args{([&]()->V{V _lhs14019=_v_12210_k;V _rhs14020=V(3.0);return V(j::number(_lhs14019)-j::number(_rhs14020));})(),([&]()->V{V _lhs14021=V(9.0);V _rhs14022=_v_12210_k;return V(j::number(_lhs14021)-j::number(_rhs14022));})(),V(1.0)};return j::call(_method,_params14028,_receiver14026);})()};return j::call(_method,_params14033,_receiver14031);})();return V(j::number(_lhs14017)*j::number(_rhs14018));})();return V(j::number(_lhs14015)-j::number(_rhs14016));})();return V(j::number(_lhs14013)*j::number(_rhs14014));})();return V(std::floor(j::number(_number14012)+.5));})();

}

return V{};
},1);
return ([&]()->V{V _lhs14034=this->_literals[195];V _rhs14035=([&]()->V{V _receiver14036=([&]()->V{V _receiver14045=([&]()->V{j::Args _array14048;_array14048.push_back(([&]()->V{V _callee14049=_v_12207_f;return j::call(_callee14049,j::Args{V(0.0)});})());_array14048.push_back(([&]()->V{V _callee14050=_v_12207_f;return j::call(_callee14050,j::Args{V(8.0)});})());_array14048.push_back(([&]()->V{V _callee14051=_v_12207_f;return j::call(_callee14051,j::Args{V(4.0)});})());return j::array(std::move(_array14048));})();V _method14046=this->_literals[6];V _method=j::get(_receiver14045,_method14046);j::Args _params14047=j::Args{j::function([=](const j::Args &_args_fn12211,const V &_receiver_fn12211,const V &_self_fn12211) mutable ->V{
V _v_12212_v;
_v_12212_v=_args_fn12211[0];
return ([&]()->V{V _receiver14039=([&]()->V{V _receiver14042=_v_12212_v;V _method14043=this->_literals[197];V _method=j::get(_receiver14042,_method14043);j::Args _params14044=j::Args{V(16.0)};return j::call(_method,_params14044,_receiver14042);})();V _method14040=this->_literals[198];V _method=j::get(_receiver14039,_method14040);j::Args _params14041=j::Args{V(2.0),this->_literals[196]};return j::call(_method,_params14041,_receiver14039);})();
return V{};
},1)};return j::call(_method,_params14047,_receiver14045);})();V _method14037=this->_literals[120];V _method=j::get(_receiver14036,_method14037);j::Args _params14038=j::Args{this->_literals[17]};return j::call(_method,_params14038,_receiver14036);})();return j::binary("+",_lhs14034,_rhs14035);})();

}

return V{};
},3);
this->_v_12224_rainbowOf.get()=j::function([=](const j::Args &_args_fn12225,const V &_receiver_fn12225,const V &_self_fn12225) mutable ->V{
V _v_12226_fx;
V _v_12227_src;
V _v_12228_options;
V _v_12229_cyclesBy;
_v_12226_fx=_args_fn12225[0];
_v_12227_src=_args_fn12225[1];
_v_12228_options=_args_fn12225[2];
_v_12229_cyclesBy=_args_fn12225[3];
{
V _v_12230_o;
j::Cell _v_12231_steps;
j::Cell _v_12232_period;
j::Cell _v_12233_cycles;
j::Cell _v_12234_direction;
V _v_12235_spec;
V _v_12236_list;
j::Cell _v_12240_light;
j::Cell _v_12241_dark;
_v_12230_o=([&]()->V{V _callee14053=this->_v_11736_optionsOf.get();return j::call(_callee14053,j::Args{_v_12228_options,_v_12226_fx,([&]()->V{j::Args _array14052;_array14052.push_back(this->_literals[64]);_array14052.push_back(this->_literals[199]);_array14052.push_back(this->_literals[51]);_array14052.push_back(this->_literals[200]);_array14052.push_back(this->_literals[149]);return j::array(std::move(_array14052));})()});})();
_v_12231_steps.get()=([&]()->V{V _callee14055=this->_v_11689_num.get();return j::call(_callee14055,j::Args{j::get(_v_12230_o,this->_literals[199]),([&]()->V{std::u16string _text14054;_text14054+=u"";_text14054+=j::string(_v_12226_fx);_text14054+=u".steps";return V(std::move(_text14054));})(),V(12.0),this->_literals[199]});})();
_v_12232_period.get()=([&]()->V{V _callee14057=this->_v_11689_num.get();return j::call(_callee14057,j::Args{j::get(_v_12230_o,this->_literals[51]),([&]()->V{std::u16string _text14056;_text14056+=u"";_text14056+=j::string(_v_12226_fx);_text14056+=u".period";return V(std::move(_text14056));})(),V(3.0),this->_literals[69]});})();
_v_12233_cycles.get()=([&]()->V{V _callee14059=this->_v_11689_num.get();return j::call(_callee14059,j::Args{j::get(_v_12230_o,this->_literals[200]),([&]()->V{std::u16string _text14058;_text14058+=u"";_text14058+=j::string(_v_12226_fx);_text14058+=u".cycles";return V(std::move(_text14058));})(),_v_12229_cyclesBy,this->_literals[201]});})();
_v_12234_direction.get()=([&]()->V{V _callee14062=this->_v_11710_choice.get();return j::call(_callee14062,j::Args{j::get(_v_12230_o,this->_literals[149]),([&]()->V{std::u16string _text14060;_text14060+=u"";_text14060+=j::string(_v_12226_fx);_text14060+=u".direction";return V(std::move(_text14060));})(),([&]()->V{j::Args _array14061;_array14061.push_back(this->_literals[65]);_array14061.push_back(this->_literals[66]);_array14061.push_back(this->_literals[202]);return j::array(std::move(_array14061));})(),this->_literals[65]});})();
_v_12235_spec=(j::truth(([&]()->V{V _lhs14063=j::unary("typeof",j::get(_v_12230_o,this->_literals[64]));V _rhs14064=this->_literals[2];return V(j::equal(_lhs14063,_rhs14064,true));})())?([&]()->V{V _callee14066=this->_v_11644_namedColors.get();return j::call(_callee14066,j::Args{j::get(_v_12230_o,this->_literals[64]),([&]()->V{std::u16string _text14065;_text14065+=u"";_text14065+=j::string(_v_12226_fx);_text14065+=u".colors";return V(std::move(_text14065));})()});})():([&]()->V{V _logical14067=j::get(_v_12230_o,this->_literals[64]);return j::nullish(_logical14067)?this->_v_12213_hues.get():_logical14067;})());
_v_12236_list=j::function([=](const j::Args &_args_fn12237,const V &_receiver_fn12237,const V &_self_fn12237) mutable ->V{
V _v_12238_v;
V _v_12239_name;
_v_12238_v=_args_fn12237[0];
_v_12239_name=_args_fn12237[1];
return (j::truth(([&]()->V{V _logical14068=([&]()->V{V _logical14069=([&]()->V{V _receiver14070=j::builtin("Array");V _method14071=this->_literals[15];V _method=j::get(_receiver14070,_method14071);j::Args _params14072=j::Args{_v_12238_v};return j::call(_method,_params14072,_receiver14070);})();return j::truth(_logical14069)?j::get(_v_12238_v,this->_literals[8]):_logical14069;})();return j::truth(_logical14068)?([&]()->V{V _receiver14073=_v_12238_v;V _method14074=this->_literals[9];V _method=j::get(_receiver14073,_method14074);j::Args _params14075=j::Args{this->_v_11648_isHex.get()};return j::call(_method,_params14075,_receiver14073);})():_logical14068;})())?_v_12238_v:([&]()->V{V _callee14078=this->_v_11645_fail.get();return j::call(_callee14078,j::Args{([&]()->V{std::u16string _text14076;_text14076+=u"";_text14076+=j::string(_v_12239_name);_text14076+=u" takes a list of colours as #rrggbb, or { light, dark }, not ";_text14076+=j::string(([&]()->V{V _callee14077=this->_v_11659_show.get();return j::call(_callee14077,j::Args{_v_12238_v});})());_text14076+=u"";return V(std::move(_text14076));})()});})());
return V{};
},2);
V _pattern14098=(j::truth(([&]()->V{V _receiver14079=j::builtin("Array");V _method14080=this->_literals[15];V _method=j::get(_receiver14079,_method14080);j::Args _params14081=j::Args{_v_12235_spec};return j::call(_method,_params14081,_receiver14079);})())?([&]()->V{j::Args _array14082;_array14082.push_back(([&]()->V{V _callee14084=_v_12236_list;return j::call(_callee14084,j::Args{_v_12235_spec,([&]()->V{std::u16string _text14083;_text14083+=u"";_text14083+=j::string(_v_12226_fx);_text14083+=u".colors";return V(std::move(_text14083));})()});})());_array14082.push_back(([&]()->V{V _callee14086=_v_12236_list;return j::call(_callee14086,j::Args{_v_12235_spec,([&]()->V{std::u16string _text14085;_text14085+=u"";_text14085+=j::string(_v_12226_fx);_text14085+=u".colors";return V(std::move(_text14085));})()});})());return j::array(std::move(_array14082));})():(j::truth(([&]()->V{V _logical14087=_v_12235_spec;return j::truth(_logical14087)?([&]()->V{V _lhs14088=j::unary("typeof",_v_12235_spec);V _rhs14089=this->_literals[14];return V(j::equal(_lhs14088,_rhs14089,true));})():_logical14087;})())?([&]()->V{j::Args _array14090;_array14090.push_back(([&]()->V{V _callee14092=_v_12236_list;return j::call(_callee14092,j::Args{j::get(_v_12235_spec,this->_literals[41]),([&]()->V{std::u16string _text14091;_text14091+=u"";_text14091+=j::string(_v_12226_fx);_text14091+=u".colors.light";return V(std::move(_text14091));})()});})());_array14090.push_back(([&]()->V{V _callee14094=_v_12236_list;return j::call(_callee14094,j::Args{j::get(_v_12235_spec,this->_literals[13]),([&]()->V{std::u16string _text14093;_text14093+=u"";_text14093+=j::string(_v_12226_fx);_text14093+=u".colors.dark";return V(std::move(_text14093));})()});})());return j::array(std::move(_array14090));})():([&]()->V{V _callee14097=this->_v_11645_fail.get();return j::call(_callee14097,j::Args{([&]()->V{std::u16string _text14095;_text14095+=u"";_text14095+=j::string(_v_12226_fx);_text14095+=u".colors takes a list of colours as #rrggbb, or { light, dark }, not ";_text14095+=j::string(([&]()->V{V _callee14096=this->_v_11659_show.get();return j::call(_callee14096,j::Args{_v_12235_spec});})());_text14095+=u"";return V(std::move(_text14095));})()});})()));
_v_12240_light.get()=j::get(_pattern14098,V(0));
_v_12241_dark.get()=j::get(_pattern14098,V(1));
return ([&]()->V{V _callee14173=this->_v_11825_build.get();return j::call(_callee14173,j::Args{_v_12226_fx,_v_12227_src,_v_12230_o,j::function([=](const j::Args &_args_fn12242,const V &_receiver_fn12242,const V &_self_fn12242) mutable ->V{
V _v_12243_m;
j::Cell _v_12244_inks;
V _pattern14099=_args_fn12242[0];
_v_12243_m=j::get(_pattern14099,this->_literals[19]);
_v_12244_inks.get()=j::get(_pattern14099,this->_literals[43]);
{
j::Cell _v_12245_at;
V _v_12250_aspect;
j::Cell _v_12251_spread;
_v_12245_at.get()=([&]()->V{j::Args _array14100;_array14100.push_back(([&]()->V{V _receiver14104=([&]()->V{V _callee14107=this->_v_12220_cycle.get();return j::call(_callee14107,j::Args{_v_12241_dark.get(),_v_12231_steps.get()});})();V _method14105=this->_literals[6];V _method=j::get(_receiver14104,_method14105);j::Args _params14106=j::Args{j::function([=](const j::Args &_args_fn12246,const V &_receiver_fn12246,const V &_self_fn12246) mutable ->V{
V _v_12247_c;
_v_12247_c=_args_fn12246[0];
return ([&]()->V{V _receiver14101=_v_12244_inks.get();V _method14102=this->_literals[47];V _method=j::get(_receiver14101,_method14102);j::Args _params14103=j::Args{_v_12247_c};return j::call(_method,_params14103,_receiver14101);})();
return V{};
},1)};return j::call(_method,_params14106,_receiver14104);})());_array14100.push_back(([&]()->V{V _receiver14111=([&]()->V{V _callee14114=this->_v_12220_cycle.get();return j::call(_callee14114,j::Args{_v_12240_light.get(),_v_12231_steps.get()});})();V _method14112=this->_literals[6];V _method=j::get(_receiver14111,_method14112);j::Args _params14113=j::Args{j::function([=](const j::Args &_args_fn12248,const V &_receiver_fn12248,const V &_self_fn12248) mutable ->V{
V _v_12249_c;
_v_12249_c=_args_fn12248[0];
return ([&]()->V{V _receiver14108=_v_12244_inks.get();V _method14109=this->_literals[47];V _method=j::get(_receiver14108,_method14109);j::Args _params14110=j::Args{_v_12249_c};return j::call(_method,_params14110,_receiver14108);})();
return V{};
},1)};return j::call(_method,_params14113,_receiver14111);})());return j::array(std::move(_array14100));})();
_v_12250_aspect=([&]()->V{V _logical14115=j::get(_v_12243_m,this->_literals[57]);return j::nullish(_logical14115)?V(2.0):_logical14115;})();
_v_12251_spread.get()=([&]()->V{V _lhs14116=_v_12233_cycles.get();V _rhs14117=(j::truth(([&]()->V{V _lhs14118=_v_12234_direction.get();V _rhs14119=this->_literals[65];return V(j::equal(_lhs14118,_rhs14119,true));})())?j::get(_v_12243_m,this->_literals[48]):(j::truth(([&]()->V{V _lhs14120=_v_12234_direction.get();V _rhs14121=this->_literals[66];return V(j::equal(_lhs14120,_rhs14121,true));})())?j::get(_v_12243_m,this->_literals[49]):([&]()->V{V _lhs14122=j::get(_v_12243_m,this->_literals[48]);V _rhs14123=([&]()->V{V _lhs14124=_v_12250_aspect;V _rhs14125=j::get(_v_12243_m,this->_literals[49]);return V(j::number(_lhs14124)*j::number(_rhs14125));})();return j::binary("+",_lhs14122,_rhs14123);})()));return V(j::number(_lhs14116)/j::number(_rhs14117));})();
return ([&]()->V{V _obj14126=j::object();j::put(_obj14126,this->_literals[50],V(true));j::put(_obj14126,this->_literals[51],_v_12232_period.get());j::put(_obj14126,this->_literals[54],(j::truth(_v_12233_cycles.get())?this->_literals[203]:this->_literals[204]));j::put(_obj14126,this->_literals[59],j::function([=](const j::Args &_args_fn12252,const V &_receiver_fn12252,const V &_self_fn12252) mutable ->V{
return j::function([=](const j::Args &_args_fn12253,const V &_receiver_fn12253,const V &_self_fn12253) mutable ->V{
V _v_12254_t;
V _v_12255_s;
V _v_12256_g;
V _v_12257_ctx;
_v_12254_t=_args_fn12253[0];
_v_12255_s=_args_fn12253[1];
_v_12256_g=_args_fn12253[2];
_v_12257_ctx=_args_fn12253[3];
{
V _v_12258_idx;
V _v_12259_ph;
(void)(([&]()->V{V _callee14127=this->_v_11874_copy.get();return j::call(_callee14127,j::Args{_v_12255_s,_v_12256_g});})());
if(j::truth(j::get(_v_12257_ctx,this->_literals[61]))){return V{};
}
_v_12258_idx=j::get(_v_12245_at.get(),(j::truth(j::get(_v_12257_ctx,this->_literals[35]))?V(1.0):V(0.0)));
_v_12259_ph=([&]()->V{V _lhs14128=_v_12254_t;V _rhs14129=_v_12232_period.get();return V(j::number(_lhs14128)/j::number(_rhs14129));})();
{V _v_12260_y;
V _v_12261_i;
_v_12260_y=V(0.0);
_v_12261_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs14130=_v_12260_y;V _rhs14131=j::get(_v_12256_g,this->_literals[49]);return j::binary("<",_lhs14130,_rhs14131);})());(void)(j::increment(_v_12260_y,1,false))){{V _v_12262_x;
_v_12262_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs14132=_v_12262_x;V _rhs14133=j::get(_v_12256_g,this->_literals[48]);return j::binary("<",_lhs14132,_rhs14133);})());(void)((j::increment(_v_12262_x,1,false),j::increment(_v_12261_i,1,false)))){
V _v_12263_pos;
if(j::truth(([&]()->V{V _lhs14134=j::get(j::get(_v_12256_g,this->_literals[63]),_v_12261_i);V _rhs14135=this->_v_11634_EMPTY.get();return V(j::equal(_lhs14134,_rhs14135,true));})())){continue;
}
_v_12263_pos=(j::truth(([&]()->V{V _lhs14136=_v_12234_direction.get();V _rhs14137=this->_literals[65];return V(j::equal(_lhs14136,_rhs14137,true));})())?_v_12262_x:(j::truth(([&]()->V{V _lhs14138=_v_12234_direction.get();V _rhs14139=this->_literals[66];return V(j::equal(_lhs14138,_rhs14139,true));})())?_v_12260_y:([&]()->V{V _lhs14140=_v_12262_x;V _rhs14141=([&]()->V{V _lhs14142=j::get(_v_12256_g,this->_literals[60]);V _rhs14143=_v_12260_y;return V(j::number(_lhs14142)*j::number(_rhs14143));})();return j::binary("+",_lhs14140,_rhs14141);})()));
(void)(([&]()->V{V _base14145=j::get(_v_12255_s,this->_literals[64]);V _key14146=_v_12261_i;V _assign14144=j::get(_v_12258_idx,([&]()->V{V _receiver14170=j::builtin("Math");V _method14171=this->_literals[96];V _method=j::get(_receiver14170,_method14171);j::Args _params14172=j::Args{([&]()->V{V _lhs14147=_v_12231_steps.get();V _rhs14148=V(1.0);return V(j::number(_lhs14147)-j::number(_rhs14148));})(),([&]()->V{V _number14158=([&]()->V{V _lhs14159=([&]()->V{V _lhs14161=([&]()->V{V _callee14167=this->_v_11744_mod.get();return j::call(_callee14167,j::Args{([&]()->V{V _lhs14163=([&]()->V{V _lhs14165=_v_12263_pos;V _rhs14166=_v_12251_spread.get();return V(j::number(_lhs14165)*j::number(_rhs14166));})();V _rhs14164=_v_12259_ph;return V(j::number(_lhs14163)-j::number(_rhs14164));})(),V(1.0)});})();V _rhs14162=_v_12231_steps.get();return V(j::number(_lhs14161)*j::number(_rhs14162));})();V _rhs14160=V(1e-7);return j::binary("+",_lhs14159,_rhs14160);})();return V(std::floor(j::number(_number14158)));})()};return j::call(_method,_params14172,_receiver14170);})());return j::put(_base14145,_key14146,_assign14144);})());

}
}
}}

}

return V{};
},4);
return V{};
},0));return _obj14126;})();

}

return V{};
},1),V(false)});})();

}

return V{};
},4);
this->_v_12264_rainbow.get()=j::function([=](const j::Args &_args_fn12265,const V &_receiver_fn12265,const V &_self_fn12265) mutable ->V{
V _v_12266_src;
V _v_12267_options;
_v_12266_src=_args_fn12265[0];
_v_12267_options=_args_fn12265[1];
{
return ([&]()->V{V _callee14174=this->_v_12224_rainbowOf.get();return j::call(_callee14174,j::Args{this->_literals[205],_v_12266_src,_v_12267_options,V(1.0)});})();

}

return V{};
},2);
this->_v_12272_shake.get()=j::function([=](const j::Args &_args_fn12273,const V &_receiver_fn12273,const V &_self_fn12273) mutable ->V{
V _v_12274_src;
V _v_12275_options;
_v_12274_src=_args_fn12273[0];
_v_12275_options=_args_fn12273[1];
{
V _v_12276_o;
j::Cell _v_12277_amount;
j::Cell _v_12278_every;
j::Cell _v_12279_length;
j::Cell _v_12280_first;
j::Cell _v_12281_seed;
_v_12276_o=([&]()->V{V _callee14176=this->_v_11736_optionsOf.get();return j::call(_callee14176,j::Args{_v_12275_options,this->_literals[206],([&]()->V{j::Args _array14175;_array14175.push_back(this->_literals[166]);_array14175.push_back(this->_literals[9]);_array14175.push_back(this->_literals[8]);_array14175.push_back(this->_literals[78]);_array14175.push_back(this->_literals[106]);return j::array(std::move(_array14175));})()});})();
_v_12277_amount.get()=([&]()->V{V _callee14178=this->_v_11697_wordy.get();return j::call(_callee14178,j::Args{j::get(_v_12276_o,this->_literals[166]),this->_literals[207],([&]()->V{V _obj14177=j::object();j::put(_obj14177,this->_literals[171],V(1.0));j::put(_obj14177,this->_literals[172],V(2.0));j::put(_obj14177,this->_literals[173],V(3.0));return _obj14177;})(),V(1.0),this->_literals[208]});})();
_v_12278_every.get()=([&]()->V{V _callee14180=this->_v_11697_wordy.get();return j::call(_callee14180,j::Args{j::get(_v_12276_o,this->_literals[9]),this->_literals[209],([&]()->V{V _callee14179=this->_v_11706_often.get();return j::call(_callee14179,j::Args{V(2.0)});})(),V(2.0),this->_literals[69]});})();
_v_12279_length.get()=([&]()->V{V _callee14181=this->_v_11689_num.get();return j::call(_callee14181,j::Args{j::get(_v_12276_o,this->_literals[8]),this->_literals[210],V(0.3),this->_literals[69]});})();
_v_12280_first.get()=([&]()->V{V _callee14182=this->_v_11689_num.get();return j::call(_callee14182,j::Args{j::get(_v_12276_o,this->_literals[78]),this->_literals[211],V(0.5),this->_literals[0]});})();
_v_12281_seed.get()=([&]()->V{V _callee14183=this->_v_11689_num.get();return j::call(_callee14183,j::Args{j::get(_v_12276_o,this->_literals[106]),this->_literals[212],V(1.0),this->_literals[117]});})();
return ([&]()->V{V _callee14260=this->_v_11825_build.get();return j::call(_callee14260,j::Args{this->_literals[206],_v_12274_src,_v_12276_o,j::function([=](const j::Args &_args_fn12282,const V &_receiver_fn12282,const V &_self_fn12282) mutable ->V{
V _v_12283_m;
V _pattern14184=_args_fn12282[0];
_v_12283_m=j::get(_pattern14184,this->_literals[19]);
return ([&]()->V{V _obj14185=j::object();j::put(_obj14185,this->_literals[48],([&]()->V{V _lhs14186=j::get(_v_12283_m,this->_literals[48]);V _rhs14187=([&]()->V{V _lhs14188=V(2.0);V _rhs14189=_v_12277_amount.get();return V(j::number(_lhs14188)*j::number(_rhs14189));})();return j::binary("+",_lhs14186,_rhs14187);})());j::put(_obj14185,this->_literals[49],([&]()->V{V _lhs14190=j::get(_v_12283_m,this->_literals[49]);V _rhs14191=([&]()->V{V _lhs14192=V(2.0);V _rhs14193=_v_12277_amount.get();return V(j::number(_lhs14192)*j::number(_rhs14193));})();return j::binary("+",_lhs14190,_rhs14191);})());j::put(_obj14185,this->_literals[50],V(true));j::put(_obj14185,this->_literals[51],_v_12278_every.get());j::put(_obj14185,this->_literals[45],([&]()->V{V _callee14200=this->_v_11759_quiet.get();return j::call(_callee14200,j::Args{([&]()->V{V _logical14194=j::get(_v_12283_m,this->_literals[45]);return j::nullish(_logical14194)?V(0.0):_logical14194;})(),j::function([=](const j::Args &_args_fn12284,const V &_receiver_fn12284,const V &_self_fn12284) mutable ->V{
V _v_12285_t;
_v_12285_t=_args_fn12284[0];
return ([&]()->V{V _lhs14195=([&]()->V{V _callee14199=this->_v_11744_mod.get();return j::call(_callee14199,j::Args{([&]()->V{V _lhs14197=_v_12285_t;V _rhs14198=_v_12280_first.get();return V(j::number(_lhs14197)-j::number(_rhs14198));})(),_v_12278_every.get()});})();V _rhs14196=_v_12279_length.get();return j::binary("<",_lhs14195,_rhs14196);})();
return V{};
},1),_v_12278_every.get()});})());j::put(_obj14185,this->_literals[54],this->_literals[213]);j::put(_obj14185,this->_literals[59],j::function([=](const j::Args &_args_fn12286,const V &_receiver_fn12286,const V &_self_fn12286) mutable ->V{
return j::function([=](const j::Args &_args_fn12287,const V &_receiver_fn12287,const V &_self_fn12287) mutable ->V{
V _v_12288_t;
V _v_12289_s;
V _v_12290_g;
_v_12288_t=_args_fn12287[0];
_v_12289_s=_args_fn12287[1];
_v_12290_g=_args_fn12287[2];
{
V _v_12291_u;
V _v_12292_dx;
V _v_12293_dy;
_v_12291_u=([&]()->V{V _callee14203=this->_v_11744_mod.get();return j::call(_callee14203,j::Args{([&]()->V{V _lhs14201=_v_12288_t;V _rhs14202=_v_12280_first.get();return V(j::number(_lhs14201)-j::number(_rhs14202));})(),_v_12278_every.get()});})();
_v_12292_dx=V(0.0);
_v_12293_dy=V(0.0);
if(j::truth(([&]()->V{V _lhs14204=_v_12291_u;V _rhs14205=_v_12279_length.get();return j::binary("<",_lhs14204,_rhs14205);})())){
V _v_12294_k;
_v_12294_k=([&]()->V{V _number14210=([&]()->V{V _lhs14211=([&]()->V{V _lhs14213=_v_12291_u;V _rhs14214=V(20.0);return V(j::number(_lhs14213)*j::number(_rhs14214));})();V _rhs14212=V(0.000001);return j::binary("+",_lhs14211,_rhs14212);})();return V(std::floor(j::number(_number14210)));})();
(void)((_v_12292_dx=([&]()->V{V _number14223=([&]()->V{V _lhs14224=([&]()->V{V _lhs14226=([&]()->V{V _lhs14228=([&]()->V{V _callee14230=this->_v_11647_hash.get();return j::call(_callee14230,j::Args{_v_12281_seed.get(),_v_12294_k,V(1.0)});})();V _rhs14229=V(2.0);return V(j::number(_lhs14228)*j::number(_rhs14229));})();V _rhs14227=V(1.0);return V(j::number(_lhs14226)-j::number(_rhs14227));})();V _rhs14225=_v_12277_amount.get();return V(j::number(_lhs14224)*j::number(_rhs14225));})();return V(std::floor(j::number(_number14223)+.5));})()));
(void)((_v_12293_dy=([&]()->V{V _number14239=([&]()->V{V _lhs14240=([&]()->V{V _lhs14242=([&]()->V{V _lhs14244=([&]()->V{V _callee14246=this->_v_11647_hash.get();return j::call(_callee14246,j::Args{_v_12281_seed.get(),_v_12294_k,V(2.0)});})();V _rhs14245=V(2.0);return V(j::number(_lhs14244)*j::number(_rhs14245));})();V _rhs14243=V(1.0);return V(j::number(_lhs14242)-j::number(_rhs14243));})();V _rhs14241=_v_12277_amount.get();return V(j::number(_lhs14240)*j::number(_rhs14241));})();return V(std::floor(j::number(_number14239)+.5));})()));
if(j::truth(([&]()->V{V _logical14247=j::unary("!",_v_12292_dx);return j::truth(_logical14247)?j::unary("!",_v_12293_dy):_logical14247;})())){(void)((_v_12292_dx=(j::truth(([&]()->V{V _lhs14249=([&]()->V{V _callee14251=this->_v_11647_hash.get();return j::call(_callee14251,j::Args{_v_12281_seed.get(),_v_12294_k,V(3.0)});})();V _rhs14250=V(0.5);return j::binary("<",_lhs14249,_rhs14250);})())?j::unary("-",_v_12277_amount.get()):_v_12277_amount.get())));
}

}

(void)(([&]()->V{V _receiver14257=_v_12289_s;V _method14258=this->_literals[215];V _method=j::get(_receiver14257,_method14258);j::Args _params14259=j::Args{_v_12290_g,([&]()->V{V _lhs14252=_v_12277_amount.get();V _rhs14253=_v_12292_dx;return j::binary("+",_lhs14252,_rhs14253);})(),([&]()->V{V _lhs14254=_v_12277_amount.get();V _rhs14255=_v_12293_dy;return j::binary("+",_lhs14254,_rhs14255);})(),([&]()->V{V _obj14256=j::object();j::put(_obj14256,this->_literals[214],V::null());return _obj14256;})()};return j::call(_method,_params14259,_receiver14257);})());

}

return V{};
},3);
return V{};
},0));return _obj14185;})();
return V{};
},1)});})();

}

return V{};
},2);
this->_v_12298_flood.get()=j::function([=](const j::Args &_args_fn12299,const V &_receiver_fn12299,const V &_self_fn12299) mutable ->V{
V _v_12300_solid;
V _v_12301_out;
V _v_12302_queue;
V _v_12303_cols;
V _v_12304_rows;
_v_12300_solid=_args_fn12299[0];
_v_12301_out=_args_fn12299[1];
_v_12302_queue=_args_fn12299[2];
_v_12303_cols=_args_fn12299[3];
_v_12304_rows=_args_fn12299[4];
{
V _v_12305_head;
V _v_12306_tail;
(void)(([&]()->V{V _receiver14261=_v_12301_out;V _method14262=this->_literals[91];V _method=j::get(_receiver14261,_method14262);j::Args _params14263=j::Args{V(0.0)};return j::call(_method,_params14263,_receiver14261);})());
_v_12305_head=V(0.0);
_v_12306_tail=V(0.0);
{V _v_12307_i;
_v_12307_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs14264=_v_12307_i;V _rhs14265=([&]()->V{V _lhs14266=_v_12303_cols;V _rhs14267=_v_12304_rows;return V(j::number(_lhs14266)*j::number(_rhs14267));})();return j::binary("<",_lhs14264,_rhs14265);})());(void)(j::increment(_v_12307_i,1,false))){
V _v_12308_x;
V _v_12309_y;
_v_12308_x=([&]()->V{V _lhs14268=_v_12307_i;V _rhs14269=_v_12303_cols;return V(std::fmod(j::number(_lhs14268),j::number(_rhs14269)));})();
_v_12309_y=([&]()->V{V _lhs14270=([&]()->V{V _lhs14272=_v_12307_i;V _rhs14273=_v_12303_cols;return V(j::number(_lhs14272)/j::number(_rhs14273));})();V _rhs14271=V(0.0);return V(int(j::i32(_lhs14270)|j::i32(_rhs14271)));})();
if(j::truth(([&]()->V{V _logical14274=([&]()->V{V _logical14275=([&]()->V{V _logical14276=([&]()->V{V _logical14277=([&]()->V{V _lhs14278=_v_12308_x;V _rhs14279=V(0.0);return V(j::equal(_lhs14278,_rhs14279,true));})();return !j::truth(_logical14277)?([&]()->V{V _lhs14280=_v_12309_y;V _rhs14281=V(0.0);return V(j::equal(_lhs14280,_rhs14281,true));})():_logical14277;})();return !j::truth(_logical14276)?([&]()->V{V _lhs14282=_v_12308_x;V _rhs14283=([&]()->V{V _lhs14284=_v_12303_cols;V _rhs14285=V(1.0);return V(j::number(_lhs14284)-j::number(_rhs14285));})();return V(j::equal(_lhs14282,_rhs14283,true));})():_logical14276;})();return !j::truth(_logical14275)?([&]()->V{V _lhs14286=_v_12309_y;V _rhs14287=([&]()->V{V _lhs14288=_v_12304_rows;V _rhs14289=V(1.0);return V(j::number(_lhs14288)-j::number(_rhs14289));})();return V(j::equal(_lhs14286,_rhs14287,true));})():_logical14275;})();return j::truth(_logical14274)?j::unary("!",j::get(_v_12300_solid,_v_12307_i)):_logical14274;})())){(void)((([&]()->V{V _base14291=_v_12301_out;V _key14292=_v_12307_i;V _assign14290=V(1.0);return j::put(_base14291,_key14292,_assign14290);})(),([&]()->V{V _base14294=_v_12302_queue;V _key14295=j::increment(_v_12306_tail,1,false);V _assign14293=_v_12307_i;return j::put(_base14294,_key14295,_assign14293);})()));
}

}
}
while(j::truth(([&]()->V{V _lhs14296=_v_12305_head;V _rhs14297=_v_12306_tail;return j::binary("<",_lhs14296,_rhs14297);})())){
V _v_12310_i;
V _v_12311_x;
V _v_12312_y;
_v_12310_i=j::get(_v_12302_queue,j::increment(_v_12305_head,1,false));
_v_12311_x=([&]()->V{V _lhs14298=_v_12310_i;V _rhs14299=_v_12303_cols;return V(std::fmod(j::number(_lhs14298),j::number(_rhs14299)));})();
_v_12312_y=([&]()->V{V _lhs14300=([&]()->V{V _lhs14302=_v_12310_i;V _rhs14303=_v_12303_cols;return V(j::number(_lhs14302)/j::number(_rhs14303));})();V _rhs14301=V(0.0);return V(int(j::i32(_lhs14300)|j::i32(_rhs14301)));})();
{V _v_12313_k;
_v_12313_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs14304=_v_12313_k;V _rhs14305=V(4.0);return j::binary("<",_lhs14304,_rhs14305);})());(void)(j::increment(_v_12313_k,1,false))){
V _v_12314_nx;
V _v_12315_ny;
V _v_12316_j;
_v_12314_nx=([&]()->V{V _lhs14306=_v_12311_x;V _rhs14307=j::get(this->_v_12296_NX.get(),_v_12313_k);return j::binary("+",_lhs14306,_rhs14307);})();
_v_12315_ny=([&]()->V{V _lhs14308=_v_12312_y;V _rhs14309=j::get(this->_v_12297_NY.get(),_v_12313_k);return j::binary("+",_lhs14308,_rhs14309);})();
if(j::truth(([&]()->V{V _logical14310=([&]()->V{V _logical14311=([&]()->V{V _logical14312=([&]()->V{V _lhs14313=_v_12314_nx;V _rhs14314=V(0.0);return j::binary("<",_lhs14313,_rhs14314);})();return !j::truth(_logical14312)?([&]()->V{V _lhs14315=_v_12314_nx;V _rhs14316=_v_12303_cols;return j::binary(">=",_lhs14315,_rhs14316);})():_logical14312;})();return !j::truth(_logical14311)?([&]()->V{V _lhs14317=_v_12315_ny;V _rhs14318=V(0.0);return j::binary("<",_lhs14317,_rhs14318);})():_logical14311;})();return !j::truth(_logical14310)?([&]()->V{V _lhs14319=_v_12315_ny;V _rhs14320=_v_12304_rows;return j::binary(">=",_lhs14319,_rhs14320);})():_logical14310;})())){continue;
}
_v_12316_j=([&]()->V{V _lhs14321=([&]()->V{V _lhs14323=_v_12315_ny;V _rhs14324=_v_12303_cols;return V(j::number(_lhs14323)*j::number(_rhs14324));})();V _rhs14322=_v_12314_nx;return j::binary("+",_lhs14321,_rhs14322);})();
if(j::truth(([&]()->V{V _logical14325=j::unary("!",j::get(_v_12301_out,_v_12316_j));return j::truth(_logical14325)?j::unary("!",j::get(_v_12300_solid,_v_12316_j)):_logical14325;})())){(void)((([&]()->V{V _base14327=_v_12301_out;V _key14328=_v_12316_j;V _assign14326=V(1.0);return j::put(_base14327,_key14328,_assign14326);})(),([&]()->V{V _base14330=_v_12302_queue;V _key14331=j::increment(_v_12306_tail,1,false);V _assign14329=_v_12316_j;return j::put(_base14330,_key14331,_assign14329);})()));
}

}
}

}


}

return V{};
},5);
this->_v_12317_outline.get()=j::function([=](const j::Args &_args_fn12318,const V &_receiver_fn12318,const V &_self_fn12318) mutable ->V{
V _v_12319_src;
V _v_12320_options;
_v_12319_src=_args_fn12318[0];
_v_12320_options=_args_fn12318[1];
{
V _v_12321_o;
V _v_12322_style;
j::Cell _v_12325_joins;
j::Cell _v_12328_color;
j::Cell _v_12329_gap;
_v_12321_o=([&]()->V{V _callee14333=this->_v_11736_optionsOf.get();return j::call(_callee14333,j::Args{_v_12320_options,this->_literals[216],([&]()->V{j::Args _array14332;_array14332.push_back(this->_literals[217]);_array14332.push_back(this->_literals[37]);_array14332.push_back(this->_literals[218]);return j::array(std::move(_array14332));})()});})();
_v_12322_style=(j::truth(([&]()->V{V _lhs14334=j::get(_v_12321_o,this->_literals[217]);V _rhs14335=j::builtin("undefined");return V(j::equal(_lhs14334,_rhs14335,true));})())?j::get(this->_v_12295_outlines.get(),this->_literals[219]):(j::truth(([&]()->V{V _receiver14336=j::builtin("Object");V _method14337=this->_literals[3];V _method=j::get(_receiver14336,_method14337);j::Args _params14338=j::Args{this->_v_12295_outlines.get(),j::get(_v_12321_o,this->_literals[217])};return j::call(_method,_params14338,_receiver14336);})())?j::get(this->_v_12295_outlines.get(),j::get(_v_12321_o,this->_literals[217])):j::get(_v_12321_o,this->_literals[217])));
if(j::truth(([&]()->V{V _logical14339=([&]()->V{V _logical14340=([&]()->V{V _lhs14341=j::unary("typeof",_v_12322_style);V _rhs14342=this->_literals[2];return V(!j::equal(_lhs14341,_rhs14342,true));})();return !j::truth(_logical14340)?([&]()->V{V _lhs14343=j::get(_v_12322_style,this->_literals[8]);V _rhs14344=V(16.0);return V(!j::equal(_lhs14343,_rhs14344,true));})():_logical14340;})();return !j::truth(_logical14339)?j::unary("!",([&]()->V{V _receiver14345=([&]()->V{j::Args _array14348;for(const auto &_value:j::elements(_v_12322_style))_array14348.push_back(_value);return j::array(std::move(_array14348));})();V _method14346=this->_literals[9];V _method=j::get(_receiver14345,_method14346);j::Args _params14347=j::Args{this->_v_11718_printable.get()};return j::call(_method,_params14347,_receiver14345);})()):_logical14339;})())){(void)(([&]()->V{V _callee14361=this->_v_11645_fail.get();return j::call(_callee14361,j::Args{([&]()->V{std::u16string _text14349;_text14349+=u"outline.style takes ";_text14349+=j::string(([&]()->V{V _callee14359=this->_v_11662_or.get();return j::call(_callee14359,j::Args{([&]()->V{V _receiver14353=([&]()->V{V _receiver14356=j::builtin("Object");V _method14357=this->_literals[5];V _method=j::get(_receiver14356,_method14357);j::Args _params14358=j::Args{this->_v_12295_outlines.get()};return j::call(_method,_params14358,_receiver14356);})();V _method14354=this->_literals[6];V _method=j::get(_receiver14353,_method14354);j::Args _params14355=j::Args{j::function([=](const j::Args &_args_fn12323,const V &_receiver_fn12323,const V &_self_fn12323) mutable ->V{
V _v_12324_k;
_v_12324_k=_args_fn12323[0];
return ([&]()->V{V _receiver14350=j::builtin("JSON");V _method14351=this->_literals[4];V _method=j::get(_receiver14350,_method14351);j::Args _params14352=j::Args{_v_12324_k};return j::call(_method,_params14352,_receiver14350);})();
return V{};
},1)};return j::call(_method,_params14355,_receiver14353);})()});})());_text14349+=u", or 16 characters of your own, not ";_text14349+=j::string(([&]()->V{V _callee14360=this->_v_11659_show.get();return j::call(_callee14360,j::Args{j::get(_v_12321_o,this->_literals[217])});})());_text14349+=u"";return V(std::move(_text14349));})()});})());
}
_v_12325_joins.get()=([&]()->V{V _receiver14365=([&]()->V{j::Args _array14368;for(const auto &_value:j::elements(_v_12322_style))_array14368.push_back(_value);return j::array(std::move(_array14368));})();V _method14366=this->_literals[6];V _method=j::get(_receiver14365,_method14366);j::Args _params14367=j::Args{j::function([=](const j::Args &_args_fn12326,const V &_receiver_fn12326,const V &_self_fn12326) mutable ->V{
V _v_12327_c;
_v_12327_c=_args_fn12326[0];
return ([&]()->V{V _receiver14362=_v_12327_c;V _method14363=this->_literals[38];V _method=j::get(_receiver14362,_method14363);j::Args _params14364=j::Args{V(0.0)};return j::call(_method,_params14364,_receiver14362);})();
return V{};
},1)};return j::call(_method,_params14367,_receiver14365);})();
_v_12328_color.get()=([&]()->V{V _callee14369=this->_v_11730_colour.get();return j::call(_callee14369,j::Args{j::get(_v_12321_o,this->_literals[37]),this->_literals[220]});})();
_v_12329_gap.get()=([&]()->V{V _callee14370=this->_v_11689_num.get();return j::call(_callee14370,j::Args{j::get(_v_12321_o,this->_literals[218]),this->_literals[221],V(1.0),this->_literals[117]});})();
if(j::truth(([&]()->V{V _lhs14371=_v_12329_gap.get();V _rhs14372=V(0.0);return j::binary("<",_lhs14371,_rhs14372);})())){(void)(([&]()->V{V _callee14374=this->_v_11645_fail.get();return j::call(_callee14374,j::Args{([&]()->V{std::u16string _text14373;_text14373+=u"outline.gap takes a whole number of cells, 0 or more, not ";_text14373+=j::string(_v_12329_gap.get());_text14373+=u"";return V(std::move(_text14373));})()});})());
}
return ([&]()->V{V _callee14664=this->_v_11825_build.get();return j::call(_callee14664,j::Args{this->_literals[216],_v_12319_src,_v_12321_o,j::function([=](const j::Args &_args_fn12330,const V &_receiver_fn12330,const V &_self_fn12330) mutable ->V{
V _v_12331_m;
V _v_12332_inks;
V _pattern14375=_args_fn12330[0];
_v_12331_m=j::get(_pattern14375,this->_literals[19]);
_v_12332_inks=j::get(_pattern14375,this->_literals[43]);
{
j::Cell _v_12333_ink;
j::Cell _v_12334_cols;
j::Cell _v_12335_rows;
_v_12333_ink.get()=(j::truth(_v_12328_color.get())?([&]()->V{V _receiver14376=_v_12332_inks;V _method14377=this->_literals[47];V _method=j::get(_receiver14376,_method14377);j::Args _params14378=j::Args{_v_12328_color.get()};return j::call(_method,_params14378,_receiver14376);})():j::unary("-",V(1.0)));
_v_12334_cols.get()=([&]()->V{V _lhs14379=j::get(_v_12331_m,this->_literals[48]);V _rhs14380=V(2.0);return j::binary("+",_lhs14379,_rhs14380);})();
_v_12335_rows.get()=([&]()->V{V _lhs14381=j::get(_v_12331_m,this->_literals[49]);V _rhs14382=V(2.0);return j::binary("+",_lhs14381,_rhs14382);})();
return ([&]()->V{V _obj14383=j::object();j::put(_obj14383,this->_literals[48],_v_12334_cols.get());j::put(_obj14383,this->_literals[49],_v_12335_rows.get());j::put(_obj14383,this->_literals[50],V(false));j::put(_obj14383,this->_literals[54],this->_literals[222]);j::put(_obj14383,this->_literals[59],j::function([=](const j::Args &_args_fn12336,const V &_receiver_fn12336,const V &_self_fn12336) mutable ->V{
{
j::Cell _v_12337_solid;
j::Cell _v_12338_out;
j::Cell _v_12339_queue;
j::Cell _v_12340_is;
j::Cell _v_12345_line;
j::Cell _v_12349_over;
_v_12337_solid.get()=([&]()->V{V _callee14386=j::builtin("Uint8Array");return j::construct(_callee14386,j::Args{([&]()->V{V _lhs14384=_v_12334_cols.get();V _rhs14385=_v_12335_rows.get();return V(j::number(_lhs14384)*j::number(_rhs14385));})()});})();
_v_12338_out.get()=([&]()->V{V _callee14389=j::builtin("Uint8Array");return j::construct(_callee14389,j::Args{([&]()->V{V _lhs14387=_v_12334_cols.get();V _rhs14388=_v_12335_rows.get();return V(j::number(_lhs14387)*j::number(_rhs14388));})()});})();
_v_12339_queue.get()=([&]()->V{V _callee14392=j::builtin("Int32Array");return j::construct(_callee14392,j::Args{([&]()->V{V _lhs14390=_v_12334_cols.get();V _rhs14391=_v_12335_rows.get();return V(j::number(_lhs14390)*j::number(_rhs14391));})()});})();
_v_12340_is.get()=j::function([=](const j::Args &_args_fn12341,const V &_receiver_fn12341,const V &_self_fn12341) mutable ->V{
V _v_12342_a;
V _v_12343_x;
V _v_12344_y;
_v_12342_a=_args_fn12341[0];
_v_12343_x=_args_fn12341[1];
_v_12344_y=_args_fn12341[2];
return ([&]()->V{V _logical14393=([&]()->V{V _logical14394=([&]()->V{V _logical14395=([&]()->V{V _logical14396=([&]()->V{V _lhs14397=_v_12343_x;V _rhs14398=V(0.0);return j::binary(">=",_lhs14397,_rhs14398);})();return j::truth(_logical14396)?([&]()->V{V _lhs14399=_v_12343_x;V _rhs14400=_v_12334_cols.get();return j::binary("<",_lhs14399,_rhs14400);})():_logical14396;})();return j::truth(_logical14395)?([&]()->V{V _lhs14401=_v_12344_y;V _rhs14402=V(0.0);return j::binary(">=",_lhs14401,_rhs14402);})():_logical14395;})();return j::truth(_logical14394)?([&]()->V{V _lhs14403=_v_12344_y;V _rhs14404=_v_12335_rows.get();return j::binary("<",_lhs14403,_rhs14404);})():_logical14394;})();return j::truth(_logical14393)?([&]()->V{V _lhs14405=j::get(_v_12342_a,([&]()->V{V _lhs14407=([&]()->V{V _lhs14409=_v_12344_y;V _rhs14410=_v_12334_cols.get();return V(j::number(_lhs14409)*j::number(_rhs14410));})();V _rhs14408=_v_12343_x;return j::binary("+",_lhs14407,_rhs14408);})());V _rhs14406=V(1.0);return V(j::equal(_lhs14405,_rhs14406,true));})():_logical14393;})();
return V{};
},3);
_v_12345_line.get()=j::function([=](const j::Args &_args_fn12346,const V &_receiver_fn12346,const V &_self_fn12346) mutable ->V{
V _v_12347_x;
V _v_12348_y;
_v_12347_x=_args_fn12346[0];
_v_12348_y=_args_fn12346[1];
return ([&]()->V{V _logical14411=([&]()->V{V _callee14412=_v_12340_is.get();return j::call(_callee14412,j::Args{_v_12338_out.get(),_v_12347_x,_v_12348_y});})();return j::truth(_logical14411)?([&]()->V{V _logical14413=([&]()->V{V _logical14414=([&]()->V{V _logical14415=([&]()->V{V _logical14416=([&]()->V{V _logical14417=([&]()->V{V _logical14418=([&]()->V{V _logical14419=([&]()->V{V _callee14424=_v_12340_is.get();return j::call(_callee14424,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14420=_v_12347_x;V _rhs14421=V(1.0);return V(j::number(_lhs14420)-j::number(_rhs14421));})(),([&]()->V{V _lhs14422=_v_12348_y;V _rhs14423=V(1.0);return V(j::number(_lhs14422)-j::number(_rhs14423));})()});})();return !j::truth(_logical14419)?([&]()->V{V _callee14427=_v_12340_is.get();return j::call(_callee14427,j::Args{_v_12337_solid.get(),_v_12347_x,([&]()->V{V _lhs14425=_v_12348_y;V _rhs14426=V(1.0);return V(j::number(_lhs14425)-j::number(_rhs14426));})()});})():_logical14419;})();return !j::truth(_logical14418)?([&]()->V{V _callee14432=_v_12340_is.get();return j::call(_callee14432,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14428=_v_12347_x;V _rhs14429=V(1.0);return j::binary("+",_lhs14428,_rhs14429);})(),([&]()->V{V _lhs14430=_v_12348_y;V _rhs14431=V(1.0);return V(j::number(_lhs14430)-j::number(_rhs14431));})()});})():_logical14418;})();return !j::truth(_logical14417)?([&]()->V{V _callee14435=_v_12340_is.get();return j::call(_callee14435,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14433=_v_12347_x;V _rhs14434=V(1.0);return V(j::number(_lhs14433)-j::number(_rhs14434));})(),_v_12348_y});})():_logical14417;})();return !j::truth(_logical14416)?([&]()->V{V _callee14438=_v_12340_is.get();return j::call(_callee14438,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14436=_v_12347_x;V _rhs14437=V(1.0);return j::binary("+",_lhs14436,_rhs14437);})(),_v_12348_y});})():_logical14416;})();return !j::truth(_logical14415)?([&]()->V{V _callee14443=_v_12340_is.get();return j::call(_callee14443,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14439=_v_12347_x;V _rhs14440=V(1.0);return V(j::number(_lhs14439)-j::number(_rhs14440));})(),([&]()->V{V _lhs14441=_v_12348_y;V _rhs14442=V(1.0);return j::binary("+",_lhs14441,_rhs14442);})()});})():_logical14415;})();return !j::truth(_logical14414)?([&]()->V{V _callee14446=_v_12340_is.get();return j::call(_callee14446,j::Args{_v_12337_solid.get(),_v_12347_x,([&]()->V{V _lhs14444=_v_12348_y;V _rhs14445=V(1.0);return j::binary("+",_lhs14444,_rhs14445);})()});})():_logical14414;})();return !j::truth(_logical14413)?([&]()->V{V _callee14451=_v_12340_is.get();return j::call(_callee14451,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14447=_v_12347_x;V _rhs14448=V(1.0);return j::binary("+",_lhs14447,_rhs14448);})(),([&]()->V{V _lhs14449=_v_12348_y;V _rhs14450=V(1.0);return j::binary("+",_lhs14449,_rhs14450);})()});})():_logical14413;})():_logical14411;})();
return V{};
},2);
_v_12349_over.get()=([&]()->V{V _obj14452=j::object();j::put(_obj14452,this->_literals[214],V::null());return _obj14452;})();
return j::function([=](const j::Args &_args_fn12350,const V &_receiver_fn12350,const V &_self_fn12350) mutable ->V{
V _v_12351_t;
V _v_12352_s;
V _v_12353_g;
_v_12351_t=_args_fn12350[0];
_v_12352_s=_args_fn12350[1];
_v_12353_g=_args_fn12350[2];
{
(void)(([&]()->V{V _receiver14453=_v_12337_solid.get();V _method14454=this->_literals[91];V _method=j::get(_receiver14453,_method14454);j::Args _params14455=j::Args{V(0.0)};return j::call(_method,_params14455,_receiver14453);})());
{V _v_12354_y;
_v_12354_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs14456=_v_12354_y;V _rhs14457=j::get(_v_12353_g,this->_literals[49]);return j::binary("<",_lhs14456,_rhs14457);})());(void)(j::increment(_v_12354_y,1,false))){{V _v_12355_x;
_v_12355_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs14458=_v_12355_x;V _rhs14459=j::get(_v_12353_g,this->_literals[48]);return j::binary("<",_lhs14458,_rhs14459);})());(void)(j::increment(_v_12355_x,1,false))){if(j::truth(([&]()->V{V _lhs14460=j::get(j::get(_v_12353_g,this->_literals[63]),([&]()->V{V _lhs14462=([&]()->V{V _lhs14464=_v_12354_y;V _rhs14465=j::get(_v_12353_g,this->_literals[48]);return V(j::number(_lhs14464)*j::number(_rhs14465));})();V _rhs14463=_v_12355_x;return j::binary("+",_lhs14462,_rhs14463);})());V _rhs14461=this->_v_11634_EMPTY.get();return V(!j::equal(_lhs14460,_rhs14461,true));})())){(void)(([&]()->V{V _base14467=_v_12337_solid.get();V _key14468=([&]()->V{V _lhs14469=([&]()->V{V _lhs14471=([&]()->V{V _lhs14473=([&]()->V{V _lhs14475=_v_12354_y;V _rhs14476=V(1.0);return j::binary("+",_lhs14475,_rhs14476);})();V _rhs14474=_v_12334_cols.get();return V(j::number(_lhs14473)*j::number(_rhs14474));})();V _rhs14472=_v_12355_x;return j::binary("+",_lhs14471,_rhs14472);})();V _rhs14470=V(1.0);return j::binary("+",_lhs14469,_rhs14470);})();V _assign14466=V(1.0);return j::put(_base14467,_key14468,_assign14466);})());
}
}}
}}
if(j::truth(_v_12329_gap.get())){{V _v_12356_y;
_v_12356_y=V(1.0);
for(;j::truth(([&]()->V{V _lhs14477=_v_12356_y;V _rhs14478=([&]()->V{V _lhs14479=_v_12335_rows.get();V _rhs14480=V(1.0);return V(j::number(_lhs14479)-j::number(_rhs14480));})();return j::binary("<",_lhs14477,_rhs14478);})());(void)(j::increment(_v_12356_y,1,false))){{V _v_12357_x;
V _v_12358_last;
_v_12357_x=V(1.0);
_v_12358_last=j::unary("-",V(1.0));
for(;j::truth(([&]()->V{V _lhs14481=_v_12357_x;V _rhs14482=([&]()->V{V _lhs14483=_v_12334_cols.get();V _rhs14484=V(1.0);return V(j::number(_lhs14483)-j::number(_rhs14484));})();return j::binary("<",_lhs14481,_rhs14482);})());(void)(j::increment(_v_12357_x,1,false))){
if(j::truth(j::unary("!",j::get(_v_12337_solid.get(),([&]()->V{V _lhs14485=([&]()->V{V _lhs14487=_v_12356_y;V _rhs14488=_v_12334_cols.get();return V(j::number(_lhs14487)*j::number(_rhs14488));})();V _rhs14486=_v_12357_x;return j::binary("+",_lhs14485,_rhs14486);})())))){continue;
}
if(j::truth(([&]()->V{V _logical14489=([&]()->V{V _lhs14490=_v_12358_last;V _rhs14491=V(0.0);return j::binary(">=",_lhs14490,_rhs14491);})();return j::truth(_logical14489)?([&]()->V{V _lhs14492=([&]()->V{V _lhs14494=([&]()->V{V _lhs14496=_v_12357_x;V _rhs14497=_v_12358_last;return V(j::number(_lhs14496)-j::number(_rhs14497));})();V _rhs14495=V(1.0);return V(j::number(_lhs14494)-j::number(_rhs14495));})();V _rhs14493=_v_12329_gap.get();return j::binary("<=",_lhs14492,_rhs14493);})():_logical14489;})())){(void)(([&]()->V{V _receiver14508=_v_12337_solid.get();V _method14509=this->_literals[91];V _method=j::get(_receiver14508,_method14509);j::Args _params14510=j::Args{V(1.0),([&]()->V{V _lhs14498=([&]()->V{V _lhs14500=([&]()->V{V _lhs14502=_v_12356_y;V _rhs14503=_v_12334_cols.get();return V(j::number(_lhs14502)*j::number(_rhs14503));})();V _rhs14501=_v_12358_last;return j::binary("+",_lhs14500,_rhs14501);})();V _rhs14499=V(1.0);return j::binary("+",_lhs14498,_rhs14499);})(),([&]()->V{V _lhs14504=([&]()->V{V _lhs14506=_v_12356_y;V _rhs14507=_v_12334_cols.get();return V(j::number(_lhs14506)*j::number(_rhs14507));})();V _rhs14505=_v_12357_x;return j::binary("+",_lhs14504,_rhs14505);})()};return j::call(_method,_params14510,_receiver14508);})());
}
(void)((_v_12358_last=_v_12357_x));

}
}
}}
}
(void)(([&]()->V{V _callee14512=this->_v_12298_flood.get();return j::call(_callee14512,j::Args{_v_12337_solid.get(),_v_12338_out.get(),_v_12339_queue.get(),_v_12334_cols.get(),_v_12335_rows.get()});})());
{V _v_12359_y;
_v_12359_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs14513=_v_12359_y;V _rhs14514=_v_12335_rows.get();return j::binary("<",_lhs14513,_rhs14514);})());(void)(j::increment(_v_12359_y,1,false))){{V _v_12360_x;
_v_12360_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs14515=_v_12360_x;V _rhs14516=_v_12334_cols.get();return j::binary("<",_lhs14515,_rhs14516);})());(void)(j::increment(_v_12360_x,1,false))){
V _v_12361_up;
V _v_12362_down;
V _v_12363_left;
V _v_12364_right;
V _v_12365_bits;
V _v_12366_c;
if(j::truth(j::unary("!",([&]()->V{V _callee14517=_v_12345_line.get();return j::call(_callee14517,j::Args{_v_12360_x,_v_12359_y});})()))){continue;
}
_v_12361_up=([&]()->V{V _logical14518=([&]()->V{V _callee14521=_v_12345_line.get();return j::call(_callee14521,j::Args{_v_12360_x,([&]()->V{V _lhs14519=_v_12359_y;V _rhs14520=V(1.0);return V(j::number(_lhs14519)-j::number(_rhs14520));})()});})();return j::truth(_logical14518)?([&]()->V{V _logical14522=([&]()->V{V _logical14523=([&]()->V{V _logical14524=([&]()->V{V _callee14527=_v_12340_is.get();return j::call(_callee14527,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14525=_v_12360_x;V _rhs14526=V(1.0);return V(j::number(_lhs14525)-j::number(_rhs14526));})(),_v_12359_y});})();return !j::truth(_logical14524)?([&]()->V{V _callee14532=_v_12340_is.get();return j::call(_callee14532,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14528=_v_12360_x;V _rhs14529=V(1.0);return V(j::number(_lhs14528)-j::number(_rhs14529));})(),([&]()->V{V _lhs14530=_v_12359_y;V _rhs14531=V(1.0);return V(j::number(_lhs14530)-j::number(_rhs14531));})()});})():_logical14524;})();return !j::truth(_logical14523)?([&]()->V{V _callee14535=_v_12340_is.get();return j::call(_callee14535,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14533=_v_12360_x;V _rhs14534=V(1.0);return j::binary("+",_lhs14533,_rhs14534);})(),_v_12359_y});})():_logical14523;})();return !j::truth(_logical14522)?([&]()->V{V _callee14540=_v_12340_is.get();return j::call(_callee14540,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14536=_v_12360_x;V _rhs14537=V(1.0);return j::binary("+",_lhs14536,_rhs14537);})(),([&]()->V{V _lhs14538=_v_12359_y;V _rhs14539=V(1.0);return V(j::number(_lhs14538)-j::number(_rhs14539));})()});})():_logical14522;})():_logical14518;})();
_v_12362_down=([&]()->V{V _logical14541=([&]()->V{V _callee14544=_v_12345_line.get();return j::call(_callee14544,j::Args{_v_12360_x,([&]()->V{V _lhs14542=_v_12359_y;V _rhs14543=V(1.0);return j::binary("+",_lhs14542,_rhs14543);})()});})();return j::truth(_logical14541)?([&]()->V{V _logical14545=([&]()->V{V _logical14546=([&]()->V{V _logical14547=([&]()->V{V _callee14550=_v_12340_is.get();return j::call(_callee14550,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14548=_v_12360_x;V _rhs14549=V(1.0);return V(j::number(_lhs14548)-j::number(_rhs14549));})(),_v_12359_y});})();return !j::truth(_logical14547)?([&]()->V{V _callee14555=_v_12340_is.get();return j::call(_callee14555,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14551=_v_12360_x;V _rhs14552=V(1.0);return V(j::number(_lhs14551)-j::number(_rhs14552));})(),([&]()->V{V _lhs14553=_v_12359_y;V _rhs14554=V(1.0);return j::binary("+",_lhs14553,_rhs14554);})()});})():_logical14547;})();return !j::truth(_logical14546)?([&]()->V{V _callee14558=_v_12340_is.get();return j::call(_callee14558,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14556=_v_12360_x;V _rhs14557=V(1.0);return j::binary("+",_lhs14556,_rhs14557);})(),_v_12359_y});})():_logical14546;})();return !j::truth(_logical14545)?([&]()->V{V _callee14563=_v_12340_is.get();return j::call(_callee14563,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14559=_v_12360_x;V _rhs14560=V(1.0);return j::binary("+",_lhs14559,_rhs14560);})(),([&]()->V{V _lhs14561=_v_12359_y;V _rhs14562=V(1.0);return j::binary("+",_lhs14561,_rhs14562);})()});})():_logical14545;})():_logical14541;})();
_v_12363_left=([&]()->V{V _logical14564=([&]()->V{V _callee14567=_v_12345_line.get();return j::call(_callee14567,j::Args{([&]()->V{V _lhs14565=_v_12360_x;V _rhs14566=V(1.0);return V(j::number(_lhs14565)-j::number(_rhs14566));})(),_v_12359_y});})();return j::truth(_logical14564)?([&]()->V{V _logical14568=([&]()->V{V _logical14569=([&]()->V{V _logical14570=([&]()->V{V _callee14573=_v_12340_is.get();return j::call(_callee14573,j::Args{_v_12337_solid.get(),_v_12360_x,([&]()->V{V _lhs14571=_v_12359_y;V _rhs14572=V(1.0);return V(j::number(_lhs14571)-j::number(_rhs14572));})()});})();return !j::truth(_logical14570)?([&]()->V{V _callee14578=_v_12340_is.get();return j::call(_callee14578,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14574=_v_12360_x;V _rhs14575=V(1.0);return V(j::number(_lhs14574)-j::number(_rhs14575));})(),([&]()->V{V _lhs14576=_v_12359_y;V _rhs14577=V(1.0);return V(j::number(_lhs14576)-j::number(_rhs14577));})()});})():_logical14570;})();return !j::truth(_logical14569)?([&]()->V{V _callee14581=_v_12340_is.get();return j::call(_callee14581,j::Args{_v_12337_solid.get(),_v_12360_x,([&]()->V{V _lhs14579=_v_12359_y;V _rhs14580=V(1.0);return j::binary("+",_lhs14579,_rhs14580);})()});})():_logical14569;})();return !j::truth(_logical14568)?([&]()->V{V _callee14586=_v_12340_is.get();return j::call(_callee14586,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14582=_v_12360_x;V _rhs14583=V(1.0);return V(j::number(_lhs14582)-j::number(_rhs14583));})(),([&]()->V{V _lhs14584=_v_12359_y;V _rhs14585=V(1.0);return j::binary("+",_lhs14584,_rhs14585);})()});})():_logical14568;})():_logical14564;})();
_v_12364_right=([&]()->V{V _logical14587=([&]()->V{V _callee14590=_v_12345_line.get();return j::call(_callee14590,j::Args{([&]()->V{V _lhs14588=_v_12360_x;V _rhs14589=V(1.0);return j::binary("+",_lhs14588,_rhs14589);})(),_v_12359_y});})();return j::truth(_logical14587)?([&]()->V{V _logical14591=([&]()->V{V _logical14592=([&]()->V{V _logical14593=([&]()->V{V _callee14596=_v_12340_is.get();return j::call(_callee14596,j::Args{_v_12337_solid.get(),_v_12360_x,([&]()->V{V _lhs14594=_v_12359_y;V _rhs14595=V(1.0);return V(j::number(_lhs14594)-j::number(_rhs14595));})()});})();return !j::truth(_logical14593)?([&]()->V{V _callee14601=_v_12340_is.get();return j::call(_callee14601,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14597=_v_12360_x;V _rhs14598=V(1.0);return j::binary("+",_lhs14597,_rhs14598);})(),([&]()->V{V _lhs14599=_v_12359_y;V _rhs14600=V(1.0);return V(j::number(_lhs14599)-j::number(_rhs14600));})()});})():_logical14593;})();return !j::truth(_logical14592)?([&]()->V{V _callee14604=_v_12340_is.get();return j::call(_callee14604,j::Args{_v_12337_solid.get(),_v_12360_x,([&]()->V{V _lhs14602=_v_12359_y;V _rhs14603=V(1.0);return j::binary("+",_lhs14602,_rhs14603);})()});})():_logical14592;})();return !j::truth(_logical14591)?([&]()->V{V _callee14609=_v_12340_is.get();return j::call(_callee14609,j::Args{_v_12337_solid.get(),([&]()->V{V _lhs14605=_v_12360_x;V _rhs14606=V(1.0);return j::binary("+",_lhs14605,_rhs14606);})(),([&]()->V{V _lhs14607=_v_12359_y;V _rhs14608=V(1.0);return j::binary("+",_lhs14607,_rhs14608);})()});})():_logical14591;})():_logical14587;})();
_v_12365_bits=([&]()->V{V _lhs14610=([&]()->V{V _lhs14612=([&]()->V{V _lhs14614=(j::truth(_v_12361_up)?V(1.0):V(0.0));V _rhs14615=(j::truth(_v_12362_down)?V(2.0):V(0.0));return V(int(j::i32(_lhs14614)|j::i32(_rhs14615)));})();V _rhs14613=(j::truth(_v_12363_left)?V(4.0):V(0.0));return V(int(j::i32(_lhs14612)|j::i32(_rhs14613)));})();V _rhs14611=(j::truth(_v_12364_right)?V(8.0):V(0.0));return V(int(j::i32(_lhs14610)|j::i32(_rhs14611)));})();
if(j::truth(j::unary("!",_v_12365_bits))){continue;
}
_v_12366_c=_v_12333_ink.get();
{V _v_12367_k;
_v_12367_k=V(0.0);
for(;j::truth(([&]()->V{V _logical14616=([&]()->V{V _lhs14617=_v_12366_c;V _rhs14618=V(0.0);return j::binary("<",_lhs14617,_rhs14618);})();return j::truth(_logical14616)?([&]()->V{V _lhs14619=_v_12367_k;V _rhs14620=V(8.0);return j::binary("<",_lhs14619,_rhs14620);})():_logical14616;})());(void)(j::increment(_v_12367_k,1,false))){
V _v_12368_sx;
V _v_12369_sy;
_v_12368_sx=([&]()->V{V _lhs14621=([&]()->V{V _lhs14623=_v_12360_x;V _rhs14624=j::get(this->_v_12296_NX.get(),_v_12367_k);return j::binary("+",_lhs14623,_rhs14624);})();V _rhs14622=V(1.0);return V(j::number(_lhs14621)-j::number(_rhs14622));})();
_v_12369_sy=([&]()->V{V _lhs14625=([&]()->V{V _lhs14627=_v_12359_y;V _rhs14628=j::get(this->_v_12297_NY.get(),_v_12367_k);return j::binary("+",_lhs14627,_rhs14628);})();V _rhs14626=V(1.0);return V(j::number(_lhs14625)-j::number(_rhs14626));})();
if(j::truth(([&]()->V{V _logical14629=([&]()->V{V _logical14630=([&]()->V{V _logical14631=([&]()->V{V _logical14632=([&]()->V{V _lhs14633=_v_12368_sx;V _rhs14634=V(0.0);return j::binary(">=",_lhs14633,_rhs14634);})();return j::truth(_logical14632)?([&]()->V{V _lhs14635=_v_12368_sx;V _rhs14636=j::get(_v_12353_g,this->_literals[48]);return j::binary("<",_lhs14635,_rhs14636);})():_logical14632;})();return j::truth(_logical14631)?([&]()->V{V _lhs14637=_v_12369_sy;V _rhs14638=V(0.0);return j::binary(">=",_lhs14637,_rhs14638);})():_logical14631;})();return j::truth(_logical14630)?([&]()->V{V _lhs14639=_v_12369_sy;V _rhs14640=j::get(_v_12353_g,this->_literals[49]);return j::binary("<",_lhs14639,_rhs14640);})():_logical14630;})();return j::truth(_logical14629)?([&]()->V{V _lhs14641=j::get(j::get(_v_12353_g,this->_literals[63]),([&]()->V{V _lhs14643=([&]()->V{V _lhs14645=_v_12369_sy;V _rhs14646=j::get(_v_12353_g,this->_literals[48]);return V(j::number(_lhs14645)*j::number(_rhs14646));})();V _rhs14644=_v_12368_sx;return j::binary("+",_lhs14643,_rhs14644);})());V _rhs14642=this->_v_11634_EMPTY.get();return V(!j::equal(_lhs14641,_rhs14642,true));})():_logical14629;})())){(void)((_v_12366_c=j::get(j::get(_v_12353_g,this->_literals[64]),([&]()->V{V _lhs14648=([&]()->V{V _lhs14650=_v_12369_sy;V _rhs14651=j::get(_v_12353_g,this->_literals[48]);return V(j::number(_lhs14650)*j::number(_rhs14651));})();V _rhs14649=_v_12368_sx;return j::binary("+",_lhs14648,_rhs14649);})())));
}

}
}
(void)(([&]()->V{V _receiver14658=_v_12352_s;V _method14659=this->_literals[124];V _method=j::get(_receiver14658,_method14659);j::Args _params14660=j::Args{([&]()->V{V _lhs14652=([&]()->V{V _lhs14654=_v_12359_y;V _rhs14655=_v_12334_cols.get();return V(j::number(_lhs14654)*j::number(_rhs14655));})();V _rhs14653=_v_12360_x;return j::binary("+",_lhs14652,_rhs14653);})(),j::get(_v_12325_joins.get(),_v_12365_bits),(j::truth(([&]()->V{V _lhs14656=_v_12366_c;V _rhs14657=V(0.0);return j::binary("<",_lhs14656,_rhs14657);})())?this->_v_11637_NONE.get():_v_12366_c)};return j::call(_method,_params14660,_receiver14658);})());

}
}
}}
(void)(([&]()->V{V _receiver14661=_v_12352_s;V _method14662=this->_literals[215];V _method=j::get(_receiver14661,_method14662);j::Args _params14663=j::Args{_v_12353_g,V(1.0),V(1.0),_v_12349_over.get()};return j::call(_method,_params14663,_receiver14661);})());

}

return V{};
},3);

}

return V{};
},0));return _obj14383;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_12370_shadow.get()=j::function([=](const j::Args &_args_fn12371,const V &_receiver_fn12371,const V &_self_fn12371) mutable ->V{
V _v_12372_src;
V _v_12373_options;
_v_12372_src=_args_fn12371[0];
_v_12373_options=_args_fn12371[1];
{
V _v_12374_o;
j::Cell _v_12375_dx;
j::Cell _v_12376_dy;
j::Cell _v_12377_char;
j::Cell _v_12378_color;
j::Cell _v_12379_solid;
_v_12374_o=([&]()->V{V _callee14666=this->_v_11736_optionsOf.get();return j::call(_callee14666,j::Args{_v_12373_options,this->_literals[223],([&]()->V{j::Args _array14665;_array14665.push_back(this->_literals[224]);_array14665.push_back(this->_literals[225]);_array14665.push_back(this->_literals[150]);_array14665.push_back(this->_literals[37]);_array14665.push_back(this->_literals[226]);return j::array(std::move(_array14665));})()});})();
_v_12375_dx.get()=([&]()->V{V _callee14667=this->_v_11689_num.get();return j::call(_callee14667,j::Args{j::get(_v_12374_o,this->_literals[224]),this->_literals[227],V(1.0),this->_literals[228]});})();
_v_12376_dy.get()=([&]()->V{V _callee14668=this->_v_11689_num.get();return j::call(_callee14668,j::Args{j::get(_v_12374_o,this->_literals[225]),this->_literals[229],V(1.0),this->_literals[228]});})();
_v_12377_char.get()=([&]()->V{V _receiver14669=([&]()->V{V _callee14672=this->_v_11722_chars.get();return j::call(_callee14672,j::Args{j::get(_v_12374_o,this->_literals[150]),this->_literals[230],this->_literals[231],V(1.0),V(1.0)});})();V _method14670=this->_literals[38];V _method=j::get(_receiver14669,_method14670);j::Args _params14671=j::Args{V(0.0)};return j::call(_method,_params14671,_receiver14669);})();
_v_12378_color.get()=([&]()->V{V _callee14673=this->_v_11730_colour.get();return j::call(_callee14673,j::Args{j::get(_v_12374_o,this->_literals[37]),this->_literals[232]});})();
if(j::truth(([&]()->V{V _logical14674=([&]()->V{V _lhs14675=j::get(_v_12374_o,this->_literals[226]);V _rhs14676=j::builtin("undefined");return V(!j::equal(_lhs14675,_rhs14676,true));})();return j::truth(_logical14674)?([&]()->V{V _lhs14677=j::unary("typeof",j::get(_v_12374_o,this->_literals[226]));V _rhs14678=this->_literals[162];return V(!j::equal(_lhs14677,_rhs14678,true));})():_logical14674;})())){(void)(([&]()->V{V _callee14681=this->_v_11645_fail.get();return j::call(_callee14681,j::Args{([&]()->V{std::u16string _text14679;_text14679+=u"shadow.solid takes true or false, not ";_text14679+=j::string(([&]()->V{V _callee14680=this->_v_11659_show.get();return j::call(_callee14680,j::Args{j::get(_v_12374_o,this->_literals[226])});})());_text14679+=u"";return V(std::move(_text14679));})()});})());
}
_v_12379_solid.get()=([&]()->V{V _logical14682=j::get(_v_12374_o,this->_literals[226]);return j::nullish(_logical14682)?V(true):_logical14682;})();
return ([&]()->V{V _callee14769=this->_v_11825_build.get();return j::call(_callee14769,j::Args{this->_literals[223],_v_12372_src,_v_12374_o,j::function([=](const j::Args &_args_fn12380,const V &_receiver_fn12380,const V &_self_fn12380) mutable ->V{
V _v_12381_m;
V _v_12382_inks;
V _pattern14683=_args_fn12380[0];
_v_12381_m=j::get(_pattern14683,this->_literals[19]);
_v_12382_inks=j::get(_pattern14683,this->_literals[43]);
{
j::Cell _v_12383_tone;
j::Cell _v_12384_cols;
j::Cell _v_12385_rows;
j::Cell _v_12386_x0;
j::Cell _v_12387_y0;
_v_12383_tone.get()=(j::truth(_v_12378_color.get())?([&]()->V{j::Args _array14684;_array14684.push_back(([&]()->V{V _receiver14685=_v_12382_inks;V _method14686=this->_literals[47];V _method=j::get(_receiver14685,_method14686);j::Args _params14687=j::Args{_v_12378_color.get()};return j::call(_method,_params14687,_receiver14685);})());_array14684.push_back(([&]()->V{V _receiver14688=_v_12382_inks;V _method14689=this->_literals[47];V _method=j::get(_receiver14688,_method14689);j::Args _params14690=j::Args{_v_12378_color.get()};return j::call(_method,_params14690,_receiver14688);})());return j::array(std::move(_array14684));})():(j::truth(j::get(_v_12381_m,this->_literals[42]))?([&]()->V{j::Args _array14691;_array14691.push_back(([&]()->V{V _receiver14692=_v_12382_inks;V _method14693=this->_literals[47];V _method=j::get(_receiver14692,_method14693);j::Args _params14694=j::Args{j::get(this->_v_11781_QUIET.get(),this->_literals[13])};return j::call(_method,_params14694,_receiver14692);})());_array14691.push_back(([&]()->V{V _receiver14695=_v_12382_inks;V _method14696=this->_literals[47];V _method=j::get(_receiver14695,_method14696);j::Args _params14697=j::Args{j::get(this->_v_11781_QUIET.get(),this->_literals[41])};return j::call(_method,_params14697,_receiver14695);})());return j::array(std::move(_array14691));})():([&]()->V{j::Args _array14698;_array14698.push_back(this->_v_11637_NONE.get());_array14698.push_back(this->_v_11637_NONE.get());return j::array(std::move(_array14698));})()));
_v_12384_cols.get()=([&]()->V{V _lhs14699=j::get(_v_12381_m,this->_literals[48]);V _rhs14700=([&]()->V{V _number14701=_v_12375_dx.get();return V(std::fabs(j::number(_number14701)));})();return j::binary("+",_lhs14699,_rhs14700);})();
_v_12385_rows.get()=([&]()->V{V _lhs14702=j::get(_v_12381_m,this->_literals[49]);V _rhs14703=([&]()->V{V _number14704=_v_12376_dy.get();return V(std::fabs(j::number(_number14704)));})();return j::binary("+",_lhs14702,_rhs14703);})();
_v_12386_x0.get()=(j::truth(([&]()->V{V _lhs14705=_v_12375_dx.get();V _rhs14706=V(0.0);return j::binary("<",_lhs14705,_rhs14706);})())?j::unary("-",_v_12375_dx.get()):V(0.0));
_v_12387_y0.get()=(j::truth(([&]()->V{V _lhs14707=_v_12376_dy.get();V _rhs14708=V(0.0);return j::binary("<",_lhs14707,_rhs14708);})())?j::unary("-",_v_12376_dy.get()):V(0.0));
return ([&]()->V{V _obj14709=j::object();j::put(_obj14709,this->_literals[48],_v_12384_cols.get());j::put(_obj14709,this->_literals[49],_v_12385_rows.get());j::put(_obj14709,this->_literals[50],V(false));j::put(_obj14709,this->_literals[54],this->_literals[233]);j::put(_obj14709,this->_literals[59],j::function([=](const j::Args &_args_fn12388,const V &_receiver_fn12388,const V &_self_fn12388) mutable ->V{
{
j::Cell _v_12389_ink;
j::Cell _v_12390_out;
j::Cell _v_12391_queue;
j::Cell _v_12392_over;
_v_12389_ink.get()=([&]()->V{V _callee14712=j::builtin("Uint8Array");return j::construct(_callee14712,j::Args{([&]()->V{V _lhs14710=_v_12384_cols.get();V _rhs14711=_v_12385_rows.get();return V(j::number(_lhs14710)*j::number(_rhs14711));})()});})();
_v_12390_out.get()=([&]()->V{V _receiver14713=([&]()->V{V _callee14718=j::builtin("Uint8Array");return j::construct(_callee14718,j::Args{([&]()->V{V _lhs14716=_v_12384_cols.get();V _rhs14717=_v_12385_rows.get();return V(j::number(_lhs14716)*j::number(_rhs14717));})()});})();V _method14714=this->_literals[91];V _method=j::get(_receiver14713,_method14714);j::Args _params14715=j::Args{V(1.0)};return j::call(_method,_params14715,_receiver14713);})();
_v_12391_queue.get()=([&]()->V{V _callee14721=j::builtin("Int32Array");return j::construct(_callee14721,j::Args{([&]()->V{V _lhs14719=_v_12384_cols.get();V _rhs14720=_v_12385_rows.get();return V(j::number(_lhs14719)*j::number(_rhs14720));})()});})();
_v_12392_over.get()=([&]()->V{V _obj14722=j::object();j::put(_obj14722,this->_literals[214],V::null());return _obj14722;})();
return j::function([=](const j::Args &_args_fn12393,const V &_receiver_fn12393,const V &_self_fn12393) mutable ->V{
V _v_12394_t;
V _v_12395_s;
V _v_12396_g;
V _v_12397_ctx;
_v_12394_t=_args_fn12393[0];
_v_12395_s=_args_fn12393[1];
_v_12396_g=_args_fn12393[2];
_v_12397_ctx=_args_fn12393[3];
{
V _v_12398_c;
_v_12398_c=j::get(_v_12383_tone.get(),(j::truth(j::get(_v_12397_ctx,this->_literals[35]))?V(1.0):V(0.0)));
if(j::truth(_v_12379_solid.get())){
(void)(([&]()->V{V _receiver14723=_v_12389_ink.get();V _method14724=this->_literals[91];V _method=j::get(_receiver14723,_method14724);j::Args _params14725=j::Args{V(0.0)};return j::call(_method,_params14725,_receiver14723);})());
{V _v_12399_y;
V _v_12400_i;
_v_12399_y=V(0.0);
_v_12400_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs14726=_v_12399_y;V _rhs14727=j::get(_v_12396_g,this->_literals[49]);return j::binary("<",_lhs14726,_rhs14727);})());(void)(j::increment(_v_12399_y,1,false))){{V _v_12401_x;
_v_12401_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs14728=_v_12401_x;V _rhs14729=j::get(_v_12396_g,this->_literals[48]);return j::binary("<",_lhs14728,_rhs14729);})());(void)((j::increment(_v_12401_x,1,false),j::increment(_v_12400_i,1,false)))){if(j::truth(([&]()->V{V _lhs14730=j::get(j::get(_v_12396_g,this->_literals[63]),_v_12400_i);V _rhs14731=this->_v_11634_EMPTY.get();return V(!j::equal(_lhs14730,_rhs14731,true));})())){(void)(([&]()->V{V _base14733=_v_12389_ink.get();V _key14734=([&]()->V{V _lhs14735=([&]()->V{V _lhs14737=([&]()->V{V _lhs14739=([&]()->V{V _lhs14741=_v_12399_y;V _rhs14742=_v_12387_y0.get();return j::binary("+",_lhs14741,_rhs14742);})();V _rhs14740=_v_12384_cols.get();return V(j::number(_lhs14739)*j::number(_rhs14740));})();V _rhs14738=_v_12401_x;return j::binary("+",_lhs14737,_rhs14738);})();V _rhs14736=_v_12386_x0.get();return j::binary("+",_lhs14735,_rhs14736);})();V _assign14732=V(1.0);return j::put(_base14733,_key14734,_assign14732);})());
}
}}
}}
(void)(([&]()->V{V _callee14743=this->_v_12298_flood.get();return j::call(_callee14743,j::Args{_v_12389_ink.get(),_v_12390_out.get(),_v_12391_queue.get(),_v_12384_cols.get(),_v_12385_rows.get()});})());

}

{V _v_12402_y;
V _v_12403_i;
_v_12402_y=V(0.0);
_v_12403_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs14744=_v_12402_y;V _rhs14745=j::get(_v_12396_g,this->_literals[49]);return j::binary("<",_lhs14744,_rhs14745);})());(void)(j::increment(_v_12402_y,1,false))){{V _v_12404_x;
_v_12404_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs14746=_v_12404_x;V _rhs14747=j::get(_v_12396_g,this->_literals[48]);return j::binary("<",_lhs14746,_rhs14747);})());(void)((j::increment(_v_12404_x,1,false),j::increment(_v_12403_i,1,false)))){
V _v_12405_k;
_v_12405_k=([&]()->V{V _lhs14748=([&]()->V{V _lhs14750=([&]()->V{V _lhs14752=([&]()->V{V _lhs14754=([&]()->V{V _lhs14756=([&]()->V{V _lhs14758=_v_12402_y;V _rhs14759=_v_12387_y0.get();return j::binary("+",_lhs14758,_rhs14759);})();V _rhs14757=_v_12376_dy.get();return j::binary("+",_lhs14756,_rhs14757);})();V _rhs14755=_v_12384_cols.get();return V(j::number(_lhs14754)*j::number(_rhs14755));})();V _rhs14753=_v_12404_x;return j::binary("+",_lhs14752,_rhs14753);})();V _rhs14751=_v_12386_x0.get();return j::binary("+",_lhs14750,_rhs14751);})();V _rhs14749=_v_12375_dx.get();return j::binary("+",_lhs14748,_rhs14749);})();
if(j::truth(([&]()->V{V _logical14760=([&]()->V{V _lhs14761=j::get(j::get(_v_12396_g,this->_literals[63]),_v_12403_i);V _rhs14762=this->_v_11634_EMPTY.get();return V(!j::equal(_lhs14761,_rhs14762,true));})();return j::truth(_logical14760)?j::get(_v_12390_out.get(),_v_12405_k):_logical14760;})())){(void)(([&]()->V{V _receiver14763=_v_12395_s;V _method14764=this->_literals[124];V _method=j::get(_receiver14763,_method14764);j::Args _params14765=j::Args{_v_12405_k,_v_12377_char.get(),_v_12398_c};return j::call(_method,_params14765,_receiver14763);})());
}

}
}
}}
(void)(([&]()->V{V _receiver14766=_v_12395_s;V _method14767=this->_literals[215];V _method=j::get(_receiver14766,_method14767);j::Args _params14768=j::Args{_v_12396_g,_v_12386_x0.get(),_v_12387_y0.get(),_v_12392_over.get()};return j::call(_method,_params14768,_receiver14766);})());

}

return V{};
},4);

}

return V{};
},0));return _obj14709;})();

}

return V{};
},1)});})();

}

return V{};
},2);
this->_v_12406_effect.get()=j::function([=](const j::Args &_args_fn12407,const V &_receiver_fn12407,const V &_self_fn12407) mutable ->V{
V _v_12408_src;
V _v_12409_a;
V _v_12410_b;
_v_12408_src=_args_fn12407[0];
_v_12409_a=_args_fn12407[1];
_v_12410_b=_args_fn12407[2];
{
V _v_12411_spec;
j::Cell _v_12412_draw;
V _v_12413_o;
j::Cell _v_12414_period;
j::Cell _v_12415_moves;
j::Cell _v_12416_still;
V _v_12417_side;
V _v_12420_p;
j::Cell _v_12421_top;
j::Cell _v_12422_right;
j::Cell _v_12423_bottom;
j::Cell _v_12424_left;
j::Cell _v_12427_colors;
V _pattern14774=(j::truth(([&]()->V{V _lhs14770=_v_12410_b;V _rhs14771=j::builtin("undefined");return V(j::equal(_lhs14770,_rhs14771,true));})())?([&]()->V{j::Args _array14772;_array14772.push_back(j::builtin("undefined"));_array14772.push_back(_v_12409_a);return j::array(std::move(_array14772));})():([&]()->V{j::Args _array14773;_array14773.push_back(_v_12409_a);_array14773.push_back(_v_12410_b);return j::array(std::move(_array14773));})());
_v_12411_spec=j::get(_pattern14774,V(0));
_v_12412_draw.get()=j::get(_pattern14774,V(1));
if(j::truth(([&]()->V{V _logical14775=([&]()->V{V _lhs14776=j::unary("typeof",_v_12412_draw.get());V _rhs14777=this->_literals[33];return V(!j::equal(_lhs14776,_rhs14777,true));})();return j::truth(_logical14775)?j::unary("!",([&]()->V{V _logical14778=([&]()->V{V _logical14779=_v_12412_draw.get();return j::truth(_logical14779)?([&]()->V{V _lhs14780=j::unary("typeof",_v_12412_draw.get());V _rhs14781=this->_literals[14];return V(j::equal(_lhs14780,_rhs14781,true));})():_logical14779;})();return j::truth(_logical14778)?([&]()->V{V _lhs14782=j::unary("typeof",j::get(_v_12412_draw.get(),this->_literals[59]));V _rhs14783=this->_literals[33];return V(j::equal(_lhs14782,_rhs14783,true));})():_logical14778;})()):_logical14775;})())){(void)(([&]()->V{V _callee14786=this->_v_11645_fail.get();return j::call(_callee14786,j::Args{([&]()->V{std::u16string _text14784;_text14784+=u"effect() takes a drawing, (t, s, src, ctx) => { ... }, or { setup: () => drawing }, after the source and its spec, not ";_text14784+=j::string(([&]()->V{V _callee14785=this->_v_11659_show.get();return j::call(_callee14785,j::Args{_v_12412_draw.get()});})());_text14784+=u"";return V(std::move(_text14784));})()});})());
}
_v_12413_o=([&]()->V{V _callee14788=this->_v_11736_optionsOf.get();return j::call(_callee14788,j::Args{_v_12411_spec,this->_literals[234],([&]()->V{j::Args _array14787;_array14787.push_back(this->_literals[51]);_array14787.push_back(this->_literals[50]);_array14787.push_back(this->_literals[45]);_array14787.push_back(this->_literals[235]);_array14787.push_back(this->_literals[64]);return j::array(std::move(_array14787));})()});})();
_v_12414_period.get()=(j::truth(([&]()->V{V _lhs14789=j::get(_v_12413_o,this->_literals[51]);V _rhs14790=j::builtin("undefined");return V(j::equal(_lhs14789,_rhs14790,true));})())?j::builtin("undefined"):([&]()->V{V _callee14791=this->_v_11689_num.get();return j::call(_callee14791,j::Args{j::get(_v_12413_o,this->_literals[51]),this->_literals[236],V(1.0),this->_literals[69]});})());
if(j::truth(([&]()->V{V _logical14792=([&]()->V{V _lhs14793=j::get(_v_12413_o,this->_literals[50]);V _rhs14794=j::builtin("undefined");return V(!j::equal(_lhs14793,_rhs14794,true));})();return j::truth(_logical14792)?([&]()->V{V _lhs14795=j::unary("typeof",j::get(_v_12413_o,this->_literals[50]));V _rhs14796=this->_literals[162];return V(!j::equal(_lhs14795,_rhs14796,true));})():_logical14792;})())){(void)(([&]()->V{V _callee14799=this->_v_11645_fail.get();return j::call(_callee14799,j::Args{([&]()->V{std::u16string _text14797;_text14797+=u"effect.moves takes true or false, not ";_text14797+=j::string(([&]()->V{V _callee14798=this->_v_11659_show.get();return j::call(_callee14798,j::Args{j::get(_v_12413_o,this->_literals[50])});})());_text14797+=u"";return V(std::move(_text14797));})()});})());
}
_v_12415_moves.get()=([&]()->V{V _logical14800=j::get(_v_12413_o,this->_literals[50]);return j::nullish(_logical14800)?([&]()->V{V _lhs14801=_v_12414_period.get();V _rhs14802=j::builtin("undefined");return V(!j::equal(_lhs14801,_rhs14802,true));})():_logical14800;})();
_v_12416_still.get()=(j::truth(([&]()->V{V _lhs14803=j::get(_v_12413_o,this->_literals[45]);V _rhs14804=j::builtin("undefined");return V(j::equal(_lhs14803,_rhs14804,true));})())?j::builtin("undefined"):([&]()->V{V _callee14805=this->_v_11689_num.get();return j::call(_callee14805,j::Args{j::get(_v_12413_o,this->_literals[45]),this->_literals[237],V(0.0),this->_literals[108]});})());
_v_12417_side=j::function([=](const j::Args &_args_fn12418,const V &_receiver_fn12418,const V &_self_fn12418) mutable ->V{
V _v_12419_v;
_v_12419_v=_args_fn12418[0];
return ([&]()->V{V _callee14806=this->_v_11689_num.get();return j::call(_callee14806,j::Args{_v_12419_v,this->_literals[238],V(0.0),this->_literals[239]});})();
return V{};
},1);
_v_12420_p=j::get(_v_12413_o,this->_literals[235]);
V _pattern14854=(j::truth(([&]()->V{V _logical14807=([&]()->V{V _lhs14808=_v_12420_p;V _rhs14809=j::builtin("undefined");return V(j::equal(_lhs14808,_rhs14809,true));})();return !j::truth(_logical14807)?([&]()->V{V _lhs14810=j::unary("typeof",_v_12420_p);V _rhs14811=this->_literals[0];return V(j::equal(_lhs14810,_rhs14811,true));})():_logical14807;})())?([&]()->V{V _receiver14813=([&]()->V{V _callee14816=j::builtin("Array");return j::call(_callee14816,j::Args{V(4.0)});})();V _method14814=this->_literals[91];V _method=j::get(_receiver14813,_method14814);j::Args _params14815=j::Args{([&]()->V{V _callee14812=_v_12417_side;return j::call(_callee14812,j::Args{_v_12420_p});})()};return j::call(_method,_params14815,_receiver14813);})():(j::truth(([&]()->V{V _logical14817=([&]()->V{V _receiver14818=j::builtin("Array");V _method14819=this->_literals[15];V _method=j::get(_receiver14818,_method14819);j::Args _params14820=j::Args{_v_12420_p};return j::call(_method,_params14820,_receiver14818);})();return j::truth(_logical14817)?([&]()->V{V _lhs14821=j::get(_v_12420_p,this->_literals[8]);V _rhs14822=V(2.0);return V(j::equal(_lhs14821,_rhs14822,true));})():_logical14817;})())?([&]()->V{j::Args _array14823;_array14823.push_back(([&]()->V{V _callee14824=_v_12417_side;return j::call(_callee14824,j::Args{j::get(_v_12420_p,V(1.0))});})());_array14823.push_back(([&]()->V{V _callee14825=_v_12417_side;return j::call(_callee14825,j::Args{j::get(_v_12420_p,V(0.0))});})());_array14823.push_back(([&]()->V{V _callee14826=_v_12417_side;return j::call(_callee14826,j::Args{j::get(_v_12420_p,V(1.0))});})());_array14823.push_back(([&]()->V{V _callee14827=_v_12417_side;return j::call(_callee14827,j::Args{j::get(_v_12420_p,V(0.0))});})());return j::array(std::move(_array14823));})():(j::truth(([&]()->V{V _logical14828=([&]()->V{V _logical14829=([&]()->V{V _logical14830=_v_12420_p;return j::truth(_logical14830)?([&]()->V{V _lhs14831=j::unary("typeof",_v_12420_p);V _rhs14832=this->_literals[14];return V(j::equal(_lhs14831,_rhs14832,true));})():_logical14830;})();return j::truth(_logical14829)?j::unary("!",([&]()->V{V _receiver14833=j::builtin("Array");V _method14834=this->_literals[15];V _method=j::get(_receiver14833,_method14834);j::Args _params14835=j::Args{_v_12420_p};return j::call(_method,_params14835,_receiver14833);})()):_logical14829;})();return j::truth(_logical14828)?([&]()->V{V _receiver14840=([&]()->V{V _receiver14843=j::builtin("Object");V _method14844=this->_literals[5];V _method=j::get(_receiver14843,_method14844);j::Args _params14845=j::Args{_v_12420_p};return j::call(_method,_params14845,_receiver14843);})();V _method14841=this->_literals[9];V _method=j::get(_receiver14840,_method14841);j::Args _params14842=j::Args{j::function([=](const j::Args &_args_fn12425,const V &_receiver_fn12425,const V &_self_fn12425) mutable ->V{
V _v_12426_k;
_v_12426_k=_args_fn12425[0];
return ([&]()->V{V _receiver14836=([&]()->V{j::Args _array14839;_array14839.push_back(this->_literals[147]);_array14839.push_back(this->_literals[156]);_array14839.push_back(this->_literals[240]);_array14839.push_back(this->_literals[157]);return j::array(std::move(_array14839));})();V _method14837=this->_literals[7];V _method=j::get(_receiver14836,_method14837);j::Args _params14838=j::Args{_v_12426_k};return j::call(_method,_params14838,_receiver14836);})();
return V{};
},1)};return j::call(_method,_params14842,_receiver14840);})():_logical14828;})())?([&]()->V{j::Args _array14846;_array14846.push_back(([&]()->V{V _callee14847=_v_12417_side;return j::call(_callee14847,j::Args{j::get(_v_12420_p,this->_literals[147])});})());_array14846.push_back(([&]()->V{V _callee14848=_v_12417_side;return j::call(_callee14848,j::Args{j::get(_v_12420_p,this->_literals[156])});})());_array14846.push_back(([&]()->V{V _callee14849=_v_12417_side;return j::call(_callee14849,j::Args{j::get(_v_12420_p,this->_literals[240])});})());_array14846.push_back(([&]()->V{V _callee14850=_v_12417_side;return j::call(_callee14850,j::Args{j::get(_v_12420_p,this->_literals[157])});})());return j::array(std::move(_array14846));})():([&]()->V{V _callee14853=this->_v_11645_fail.get();return j::call(_callee14853,j::Args{([&]()->V{std::u16string _text14851;_text14851+=u"effect.pad takes a whole number of cells, 0 or more, [columns, rows], or { top, right, bottom, left }, not ";_text14851+=j::string(([&]()->V{V _callee14852=this->_v_11659_show.get();return j::call(_callee14852,j::Args{_v_12420_p});})());_text14851+=u"";return V(std::move(_text14851));})()});})())));
_v_12421_top.get()=j::get(_pattern14854,V(0));
_v_12422_right.get()=j::get(_pattern14854,V(1));
_v_12423_bottom.get()=j::get(_pattern14854,V(2));
_v_12424_left.get()=j::get(_pattern14854,V(3));
_v_12427_colors.get()=(j::truth(([&]()->V{V _lhs14855=j::get(_v_12413_o,this->_literals[64]);V _rhs14856=j::builtin("undefined");return V(j::equal(_lhs14855,_rhs14856,true));})())?([&]()->V{j::Args _array14857;return j::array(std::move(_array14857));})():(j::truth(([&]()->V{V _logical14858=([&]()->V{V _receiver14859=j::builtin("Array");V _method14860=this->_literals[15];V _method=j::get(_receiver14859,_method14860);j::Args _params14861=j::Args{j::get(_v_12413_o,this->_literals[64])};return j::call(_method,_params14861,_receiver14859);})();return j::truth(_logical14858)?([&]()->V{V _receiver14862=j::get(_v_12413_o,this->_literals[64]);V _method14863=this->_literals[9];V _method=j::get(_receiver14862,_method14863);j::Args _params14864=j::Args{this->_v_11648_isHex.get()};return j::call(_method,_params14864,_receiver14862);})():_logical14858;})())?j::get(_v_12413_o,this->_literals[64]):([&]()->V{V _callee14867=this->_v_11645_fail.get();return j::call(_callee14867,j::Args{([&]()->V{std::u16string _text14865;_text14865+=u"effect.colors takes a list of colours as #rrggbb, not ";_text14865+=j::string(([&]()->V{V _callee14866=this->_v_11659_show.get();return j::call(_callee14866,j::Args{j::get(_v_12413_o,this->_literals[64])});})());_text14865+=u"";return V(std::move(_text14865));})()});})()));
return ([&]()->V{V _callee14892=this->_v_11825_build.get();return j::call(_callee14892,j::Args{this->_literals[234],_v_12408_src,_v_12413_o,j::function([=](const j::Args &_args_fn12428,const V &_receiver_fn12428,const V &_self_fn12428) mutable ->V{
V _v_12429_m;
V _v_12430_inks;
V _pattern14868=_args_fn12428[0];
_v_12429_m=j::get(_pattern14868,this->_literals[19]);
_v_12430_inks=j::get(_pattern14868,this->_literals[43]);
{
{for(const auto &_item14869:j::elements(_v_12427_colors.get())){V _v_12431_c;
_v_12431_c=_item14869;
(void)(([&]()->V{V _receiver14870=_v_12430_inks;V _method14871=this->_literals[47];V _method=j::get(_receiver14870,_method14871);j::Args _params14872=j::Args{_v_12431_c};return j::call(_method,_params14872,_receiver14870);})());
}}
return ([&]()->V{V _obj14873=j::object();j::put(_obj14873,this->_literals[48],([&]()->V{V _lhs14874=([&]()->V{V _lhs14876=j::get(_v_12429_m,this->_literals[48]);V _rhs14877=_v_12424_left.get();return j::binary("+",_lhs14876,_rhs14877);})();V _rhs14875=_v_12422_right.get();return j::binary("+",_lhs14874,_rhs14875);})());j::put(_obj14873,this->_literals[49],([&]()->V{V _lhs14878=([&]()->V{V _lhs14880=j::get(_v_12429_m,this->_literals[49]);V _rhs14881=_v_12421_top.get();return j::binary("+",_lhs14880,_rhs14881);})();V _rhs14879=_v_12423_bottom.get();return j::binary("+",_lhs14878,_rhs14879);})());j::put(_obj14873,this->_literals[65],_v_12424_left.get());j::put(_obj14873,this->_literals[66],_v_12421_top.get());j::put(_obj14873,this->_literals[50],_v_12415_moves.get());j::put(_obj14873,this->_literals[51],(j::truth(_v_12415_moves.get())?_v_12414_period.get():j::builtin("undefined")));j::put(_obj14873,this->_literals[45],_v_12416_still.get());j::put(_obj14873,this->_literals[54],this->_literals[241]);j::put(_obj14873,this->_literals[59],j::function([=](const j::Args &_args_fn12432,const V &_receiver_fn12432,const V &_self_fn12432) mutable ->V{
{
V _v_12433_fn;
_v_12433_fn=(j::truth(([&]()->V{V _lhs14882=j::unary("typeof",_v_12412_draw.get());V _rhs14883=this->_literals[33];return V(j::equal(_lhs14882,_rhs14883,true));})())?_v_12412_draw.get():([&]()->V{V _receiver14884=_v_12412_draw.get();V _method14885=this->_literals[59];V _method=j::get(_receiver14884,_method14885);j::Args _params14886=j::Args{};return j::call(_method,_params14886,_receiver14884);})());
if(j::truth(([&]()->V{V _lhs14887=j::unary("typeof",_v_12433_fn);V _rhs14888=this->_literals[33];return V(!j::equal(_lhs14887,_rhs14888,true));})())){(void)(([&]()->V{V _callee14891=this->_v_11645_fail.get();return j::call(_callee14891,j::Args{([&]()->V{std::u16string _text14889;_text14889+=u"effect()'s setup returns the drawing, (t, s, src, ctx) => { ... }, not ";_text14889+=j::string(([&]()->V{V _callee14890=this->_v_11659_show.get();return j::call(_callee14890,j::Args{_v_12433_fn});})());_text14889+=u"";return V(std::move(_text14889));})()});})());
}
return _v_12433_fn;

}

return V{};
},0));return _obj14873;})();

}

return V{};
},1)});})();

}

return V{};
},3);
this->_v_12434_chain.get()=j::function([=](const j::Args &_args_fn12435,const V &_receiver_fn12435,const V &_self_fn12435) mutable ->V{
V _v_12436_src;
V _v_12437_effects;
_v_12436_src=_args_fn12435[0];
_v_12437_effects=j::rest(_args_fn12435,1);
{
j::Cell _v_12438_p;
_v_12438_p.get()=([&]()->V{V _callee14893=this->_v_11800_sourceOf.get();return j::call(_callee14893,j::Args{_v_12436_src,this->_literals[242]});})();
(void)(([&]()->V{V _receiver14915=_v_12437_effects;V _method14916=this->_literals[95];V _method=j::get(_receiver14915,_method14916);j::Args _params14917=j::Args{j::function([=](const j::Args &_args_fn12439,const V &_receiver_fn12439,const V &_self_fn12439) mutable ->V{
V _v_12440_fx;
V _v_12441_i;
_v_12440_fx=_args_fn12439[0];
_v_12441_i=_args_fn12439[1];
{
V _v_12442_next;
if(j::truth(([&]()->V{V _lhs14894=j::unary("typeof",_v_12440_fx);V _rhs14895=this->_literals[33];return V(!j::equal(_lhs14894,_rhs14895,true));})())){(void)(([&]()->V{V _callee14900=this->_v_11645_fail.get();return j::call(_callee14900,j::Args{([&]()->V{std::u16string _text14896;_text14896+=u"chain() takes effects as functions, (p) => glint(p), not ";_text14896+=j::string(([&]()->V{V _callee14897=this->_v_11659_show.get();return j::call(_callee14897,j::Args{_v_12440_fx});})());_text14896+=u" as effect ";_text14896+=j::string(([&]()->V{V _lhs14898=_v_12441_i;V _rhs14899=V(1.0);return j::binary("+",_lhs14898,_rhs14899);})());_text14896+=u"";return V(std::move(_text14896));})()});})());
}
_v_12442_next=([&]()->V{V _callee14901=_v_12440_fx;return j::call(_callee14901,j::Args{_v_12438_p.get()});})();
if(j::truth(([&]()->V{V _logical14902=([&]()->V{V _logical14903=([&]()->V{V _logical14904=j::unary("!",_v_12442_next);return !j::truth(_logical14904)?([&]()->V{V _lhs14905=j::unary("typeof",_v_12442_next);V _rhs14906=this->_literals[14];return V(!j::equal(_lhs14905,_rhs14906,true));})():_logical14904;})();return !j::truth(_logical14903)?j::unary("!",j::get(_v_12442_next,this->_literals[19])):_logical14903;})();return !j::truth(_logical14902)?([&]()->V{V _lhs14907=j::unary("typeof",j::get(_v_12442_next,this->_literals[32]));V _rhs14908=this->_literals[33];return V(!j::equal(_lhs14907,_rhs14908,true));})():_logical14902;})())){(void)(([&]()->V{V _callee14913=this->_v_11645_fail.get();return j::call(_callee14913,j::Args{([&]()->V{std::u16string _text14909;_text14909+=u"chain()'s effect ";_text14909+=j::string(([&]()->V{V _lhs14910=_v_12441_i;V _rhs14911=V(1.0);return j::binary("+",_lhs14910,_rhs14911);})());_text14909+=u" returns a piece, not ";_text14909+=j::string(([&]()->V{V _callee14912=this->_v_11659_show.get();return j::call(_callee14912,j::Args{_v_12442_next});})());_text14909+=u"";return V(std::move(_text14909));})()});})());
}
(void)((_v_12438_p.get()=_v_12442_next));

}

return V{};
},2)};return j::call(_method,_params14917,_receiver14915);})());
return _v_12438_p.get();

}

return V{};
},1);
auto &_import1287=j::module("kit/core");
this->_v_11634_EMPTY=_import1287.exported("EMPTY");
this->_v_11635_INK=_import1287.exported("INK");
this->_v_11636_MAX=_import1287.exported("MAX");
this->_v_11637_NONE=_import1287.exported("NONE");
this->_v_11638_Palette=_import1287.exported("Palette");
this->_v_11639_Surface=_import1287.exported("Surface");
this->_v_11640_TAU=_import1287.exported("TAU");
this->_v_11641_asPiece=_import1287.exported("asPiece");
this->_v_11642_bayer=_import1287.exported("bayer");
this->_v_11643_named=_import1287.exported("colorOf");
this->_v_11644_namedColors=_import1287.exported("colorsOf");
this->_v_11645_fail=_import1287.exported("fail");
this->_v_11646_gradient=_import1287.exported("gradient");
this->_v_11647_hash=_import1287.exported("hash");
this->_v_11648_isHex=_import1287.exported("isHex");
this->_v_11649_mix=_import1287.exported("mix");
this->_v_11650_nearest=_import1287.exported("nearest");
this->_v_11651_piece=_import1287.exported("piece");
this->_v_11652_ramp=_import1287.exported("ramp");
this->_v_11653_ramps=_import1287.exported("ramps");
this->_v_11654_sample=_import1287.exported("sample");
this->_v_11655_smoothstep=_import1287.exported("smoothstep");
this->_v_11656_snapshot=_import1287.exported("snapshot");
this->_v_11657_suggest=_import1287.exported("suggest");
this->_v_11658_valueNoise=_import1287.exported("valueNoise");
this->exports["glint"]=this->_v_11891_glint;
this->exports["typeIn"]=this->_v_11948_typeIn;
this->exports["dissolve"]=this->_v_12017_dissolve;
this->exports["fade"]=this->_v_12062_fade;
this->exports["scan"]=this->_v_12101_scan;
this->exports["glitch"]=this->_v_12137_glitch;
this->exports["wave"]=this->_v_12173_wave;
this->exports["hues"]=this->_v_12213_hues;
this->exports["rainbow"]=this->_v_12264_rainbow;
this->exports["hueCycle"]=this->_v_12268_hueCycle;
this->exports["shake"]=this->_v_12272_shake;
this->exports["outlines"]=this->_v_12295_outlines;
this->exports["outline"]=this->_v_12317_outline;
this->exports["shadow"]=this->_v_12370_shadow;
this->exports["effect"]=this->_v_12406_effect;
this->exports["chain"]=this->_v_12434_chain;
this->_v_11659_show.get()=j::function([=](const j::Args &_args_fn11660,const V &_receiver_fn11660,const V &_self_fn11660) mutable ->V{
V _v_11661_v;
_v_11661_v=_args_fn11660[0];
return (j::truth(([&]()->V{V _lhs14918=j::unary("typeof",_v_11661_v);V _rhs14919=this->_literals[2];return V(j::equal(_lhs14918,_rhs14919,true));})())?([&]()->V{V _receiver14920=j::builtin("JSON");V _method14921=this->_literals[4];V _method=j::get(_receiver14920,_method14921);j::Args _params14922=j::Args{_v_11661_v};return j::call(_method,_params14922,_receiver14920);})():(j::truth(([&]()->V{V _logical14923=([&]()->V{V _lhs14924=_v_11661_v;V _rhs14925=V::null();return V(!j::equal(_lhs14924,_rhs14925,true));})();return j::truth(_logical14923)?([&]()->V{V _lhs14926=j::unary("typeof",_v_11661_v);V _rhs14927=this->_literals[14];return V(j::equal(_lhs14926,_rhs14927,true));})():_logical14923;})())?(j::truth(([&]()->V{V _receiver14928=j::builtin("Array");V _method14929=this->_literals[15];V _method=j::get(_receiver14928,_method14929);j::Args _params14930=j::Args{_v_11661_v};return j::call(_method,_params14930,_receiver14928);})())?this->_literals[243]:this->_literals[244]):([&]()->V{V _callee14931=j::builtin("String");return j::call(_callee14931,j::Args{_v_11661_v});})()));
return V{};
},1);
this->_v_11662_or.get()=j::function([=](const j::Args &_args_fn11663,const V &_receiver_fn11663,const V &_self_fn11663) mutable ->V{
V _v_11664_words;
_v_11664_words=_args_fn11663[0];
return (j::truth(([&]()->V{V _lhs14932=j::get(_v_11664_words,this->_literals[8]);V _rhs14933=V(1.0);return j::binary(">",_lhs14932,_rhs14933);})())?([&]()->V{std::u16string _text14934;_text14934+=u"";_text14934+=j::string(([&]()->V{V _receiver14935=([&]()->V{V _receiver14938=_v_11664_words;V _method14939=this->_literals[25];V _method=j::get(_receiver14938,_method14939);j::Args _params14940=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params14940,_receiver14938);})();V _method14936=this->_literals[120];V _method=j::get(_receiver14935,_method14936);j::Args _params14937=j::Args{this->_literals[245]};return j::call(_method,_params14937,_receiver14935);})());_text14934+=u" or ";_text14934+=j::string(([&]()->V{V _receiver14941=_v_11664_words;V _method14942=this->_literals[62];V _method=j::get(_receiver14941,_method14942);j::Args _params14943=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params14943,_receiver14941);})());_text14934+=u"";return V(std::move(_text14934));})():([&]()->V{V _logical14944=j::get(_v_11664_words,V(0.0));return j::nullish(_logical14944)?this->_literals[17]:_logical14944;})());
return V{};
},1);
this->_v_11665_RULES.get()=([&]()->V{V _obj14945=j::object();j::put(_obj14945,this->_literals[69],([&]()->V{j::Args _array14946;_array14946.push_back(j::function([=](const j::Args &_args_fn11666,const V &_receiver_fn11666,const V &_self_fn11666) mutable ->V{
V _v_11667_v;
_v_11667_v=_args_fn11666[0];
return ([&]()->V{V _lhs14947=_v_11667_v;V _rhs14948=V(0.0);return j::binary(">",_lhs14947,_rhs14948);})();
return V{};
},1));_array14946.push_back(this->_literals[246]);return j::array(std::move(_array14946));})());j::put(_obj14945,this->_literals[108],([&]()->V{j::Args _array14949;_array14949.push_back(j::function([=](const j::Args &_args_fn11668,const V &_receiver_fn11668,const V &_self_fn11668) mutable ->V{
V _v_11669_v;
_v_11669_v=_args_fn11668[0];
return ([&]()->V{V _lhs14950=_v_11669_v;V _rhs14951=V(0.0);return j::binary(">=",_lhs14950,_rhs14951);})();
return V{};
},1));_array14949.push_back(this->_literals[247]);return j::array(std::move(_array14949));})());j::put(_obj14945,this->_literals[85],([&]()->V{j::Args _array14952;_array14952.push_back(j::function([=](const j::Args &_args_fn11670,const V &_receiver_fn11670,const V &_self_fn11670) mutable ->V{
V _v_11671_v;
_v_11671_v=_args_fn11670[0];
return ([&]()->V{V _lhs14953=_v_11671_v;V _rhs14954=V(0.0);return j::binary(">",_lhs14953,_rhs14954);})();
return V{};
},1));_array14952.push_back(this->_literals[248]);return j::array(std::move(_array14952));})());j::put(_obj14945,this->_literals[135],([&]()->V{j::Args _array14955;_array14955.push_back(j::function([=](const j::Args &_args_fn11672,const V &_receiver_fn11672,const V &_self_fn11672) mutable ->V{
V _v_11673_v;
_v_11673_v=_args_fn11672[0];
return ([&]()->V{V _lhs14956=_v_11673_v;V _rhs14957=V(1.0);return j::binary(">=",_lhs14956,_rhs14957);})();
return V{};
},1));_array14955.push_back(this->_literals[249]);return j::array(std::move(_array14955));})());j::put(_obj14945,this->_literals[201],([&]()->V{j::Args _array14958;_array14958.push_back(j::function([=](const j::Args &_args_fn11674,const V &_receiver_fn11674,const V &_self_fn11674) mutable ->V{
V _v_11675_v;
_v_11675_v=_args_fn11674[0];
return ([&]()->V{V _lhs14959=_v_11675_v;V _rhs14960=V(0.0);return j::binary(">=",_lhs14959,_rhs14960);})();
return V{};
},1));_array14958.push_back(this->_literals[250]);return j::array(std::move(_array14958));})());j::put(_obj14945,this->_literals[0],([&]()->V{j::Args _array14961;_array14961.push_back(j::function([=](const j::Args &_args_fn11676,const V &_receiver_fn11676,const V &_self_fn11676) mutable ->V{
return V(true);
return V{};
},0));_array14961.push_back(this->_literals[251]);return j::array(std::move(_array14961));})());j::put(_obj14945,this->_literals[174],([&]()->V{j::Args _array14962;_array14962.push_back(j::function([=](const j::Args &_args_fn11677,const V &_receiver_fn11677,const V &_self_fn11677) mutable ->V{
V _v_11678_v;
_v_11678_v=_args_fn11677[0];
return ([&]()->V{V _logical14963=([&]()->V{V _lhs14964=_v_11678_v;V _rhs14965=V(0.0);return j::binary(">=",_lhs14964,_rhs14965);})();return j::truth(_logical14963)?([&]()->V{V _lhs14966=_v_11678_v;V _rhs14967=V(1.0);return j::binary("<=",_lhs14966,_rhs14967);})():_logical14963;})();
return V{};
},1));_array14962.push_back(this->_literals[252]);return j::array(std::move(_array14962));})());j::put(_obj14945,this->_literals[208],([&]()->V{j::Args _array14968;_array14968.push_back(j::function([=](const j::Args &_args_fn11679,const V &_receiver_fn11679,const V &_self_fn11679) mutable ->V{
V _v_11680_v;
_v_11680_v=_args_fn11679[0];
return ([&]()->V{V _logical14969=([&]()->V{V _receiver14970=j::builtin("Number");V _method14971=this->_literals[253];V _method=j::get(_receiver14970,_method14971);j::Args _params14972=j::Args{_v_11680_v};return j::call(_method,_params14972,_receiver14970);})();return j::truth(_logical14969)?([&]()->V{V _lhs14973=_v_11680_v;V _rhs14974=V(1.0);return j::binary(">=",_lhs14973,_rhs14974);})():_logical14969;})();
return V{};
},1));_array14968.push_back(this->_literals[254]);return j::array(std::move(_array14968));})());j::put(_obj14945,this->_literals[228],([&]()->V{j::Args _array14975;_array14975.push_back(j::function([=](const j::Args &_args_fn11681,const V &_receiver_fn11681,const V &_self_fn11681) mutable ->V{
V _v_11682_v;
_v_11682_v=_args_fn11681[0];
return ([&]()->V{V _receiver14976=j::builtin("Number");V _method14977=this->_literals[253];V _method=j::get(_receiver14976,_method14977);j::Args _params14978=j::Args{_v_11682_v};return j::call(_method,_params14978,_receiver14976);})();
return V{};
},1));_array14975.push_back(this->_literals[255]);return j::array(std::move(_array14975));})());j::put(_obj14945,this->_literals[239],([&]()->V{j::Args _array14979;_array14979.push_back(j::function([=](const j::Args &_args_fn11683,const V &_receiver_fn11683,const V &_self_fn11683) mutable ->V{
V _v_11684_v;
_v_11684_v=_args_fn11683[0];
return ([&]()->V{V _logical14980=([&]()->V{V _receiver14981=j::builtin("Number");V _method14982=this->_literals[253];V _method=j::get(_receiver14981,_method14982);j::Args _params14983=j::Args{_v_11684_v};return j::call(_method,_params14983,_receiver14981);})();return j::truth(_logical14980)?([&]()->V{V _lhs14984=_v_11684_v;V _rhs14985=V(0.0);return j::binary(">=",_lhs14984,_rhs14985);})():_logical14980;})();
return V{};
},1));_array14979.push_back(this->_literals[256]);return j::array(std::move(_array14979));})());j::put(_obj14945,this->_literals[117],([&]()->V{j::Args _array14986;_array14986.push_back(j::function([=](const j::Args &_args_fn11685,const V &_receiver_fn11685,const V &_self_fn11685) mutable ->V{
V _v_11686_v;
_v_11686_v=_args_fn11685[0];
return ([&]()->V{V _receiver14987=j::builtin("Number");V _method14988=this->_literals[253];V _method=j::get(_receiver14987,_method14988);j::Args _params14989=j::Args{_v_11686_v};return j::call(_method,_params14989,_receiver14987);})();
return V{};
},1));_array14986.push_back(this->_literals[257]);return j::array(std::move(_array14986));})());j::put(_obj14945,this->_literals[199],([&]()->V{j::Args _array14990;_array14990.push_back(j::function([=](const j::Args &_args_fn11687,const V &_receiver_fn11687,const V &_self_fn11687) mutable ->V{
V _v_11688_v;
_v_11688_v=_args_fn11687[0];
return ([&]()->V{V _logical14991=([&]()->V{V _logical14992=([&]()->V{V _receiver14993=j::builtin("Number");V _method14994=this->_literals[253];V _method=j::get(_receiver14993,_method14994);j::Args _params14995=j::Args{_v_11688_v};return j::call(_method,_params14995,_receiver14993);})();return j::truth(_logical14992)?([&]()->V{V _lhs14996=_v_11688_v;V _rhs14997=V(1.0);return j::binary(">=",_lhs14996,_rhs14997);})():_logical14992;})();return j::truth(_logical14991)?([&]()->V{V _lhs14998=_v_11688_v;V _rhs14999=V(32.0);return j::binary("<=",_lhs14998,_rhs14999);})():_logical14991;})();
return V{};
},1));_array14990.push_back(this->_literals[258]);return j::array(std::move(_array14990));})());return _obj14945;})();
this->_v_11706_often.get()=j::function([=](const j::Args &_args_fn11707,const V &_receiver_fn11707,const V &_self_fn11707) mutable ->V{
V _v_11708_every;
_v_11708_every=_args_fn11707[0];
return ([&]()->V{V _obj15000=j::object();j::put(_obj15000,this->_literals[259],([&]()->V{V _lhs15001=_v_11708_every;V _rhs15002=V(2.0);return V(j::number(_lhs15001)/j::number(_rhs15002));})());j::put(_obj15000,this->_literals[260],_v_11708_every);j::put(_obj15000,this->_literals[261],([&]()->V{V _lhs15003=_v_11708_every;V _rhs15004=V(2.0);return V(j::number(_lhs15003)*j::number(_rhs15004));})());return _obj15000;})();
return V{};
},1);
this->_v_11709_SPEED.get()=([&]()->V{V _obj15005=j::object();j::put(_obj15005,this->_literals[188],V(0.5));j::put(_obj15005,this->_literals[189],V(1.0));j::put(_obj15005,this->_literals[190],V(2.0));return _obj15005;})();
this->_v_11718_printable.get()=j::function([=](const j::Args &_args_fn11719,const V &_receiver_fn11719,const V &_self_fn11719) mutable ->V{
V _v_11720_c;
_v_11720_c=_args_fn11719[0];
{
V _v_11721_k;
_v_11721_k=([&]()->V{V _receiver15006=_v_11720_c;V _method15007=this->_literals[38];V _method=j::get(_receiver15006,_method15007);j::Args _params15008=j::Args{V(0.0)};return j::call(_method,_params15008,_receiver15006);})();
return ([&]()->V{V _logical15009=([&]()->V{V _logical15010=([&]()->V{V _logical15011=([&]()->V{V _lhs15012=j::get(_v_11720_c,this->_literals[8]);V _rhs15013=V(1.0);return V(j::equal(_lhs15012,_rhs15013,true));})();return j::truth(_logical15011)?([&]()->V{V _lhs15014=_v_11721_k;V _rhs15015=V(32.0);return j::binary(">=",_lhs15014,_rhs15015);})():_logical15011;})();return j::truth(_logical15010)?j::unary("!",([&]()->V{V _logical15016=([&]()->V{V _lhs15017=_v_11721_k;V _rhs15018=V(127.0);return j::binary(">=",_lhs15017,_rhs15018);})();return j::truth(_logical15016)?([&]()->V{V _lhs15019=_v_11721_k;V _rhs15020=V(159.0);return j::binary("<=",_lhs15019,_rhs15020);})():_logical15016;})()):_logical15010;})();return j::truth(_logical15009)?j::unary("!",([&]()->V{V _logical15021=([&]()->V{V _lhs15022=_v_11721_k;V _rhs15023=V(55296.0);return j::binary(">=",_lhs15022,_rhs15023);})();return j::truth(_logical15021)?([&]()->V{V _lhs15024=_v_11721_k;V _rhs15025=V(57343.0);return j::binary("<=",_lhs15024,_rhs15025);})():_logical15021;})()):_logical15009;})();

}

return V{};
},1);
this->_v_11734_COMMON.get()=([&]()->V{j::Args _array15026;_array15026.push_back(this->_literals[52]);_array15026.push_back(this->_literals[53]);_array15026.push_back(this->_literals[36]);return j::array(std::move(_array15026));})();
this->_v_11735_RENAMED.get()=([&]()->V{V _obj15027=j::object();j::put(_obj15027,this->_literals[262],this->_literals[263]);j::put(_obj15027,this->_literals[264],this->_literals[265]);j::put(_obj15027,this->_literals[266],this->_literals[265]);return _obj15027;})();
this->_v_11744_mod.get()=j::function([=](const j::Args &_args_fn11745,const V &_receiver_fn11745,const V &_self_fn11745) mutable ->V{
V _v_11746_a;
V _v_11747_n;
_v_11746_a=_args_fn11745[0];
_v_11747_n=_args_fn11745[1];
return ([&]()->V{V _lhs15028=([&]()->V{V _lhs15030=([&]()->V{V _lhs15032=_v_11746_a;V _rhs15033=_v_11747_n;return V(std::fmod(j::number(_lhs15032),j::number(_rhs15033)));})();V _rhs15031=_v_11747_n;return j::binary("+",_lhs15030,_rhs15031);})();V _rhs15029=_v_11747_n;return V(std::fmod(j::number(_lhs15028),j::number(_rhs15029)));})();
return V{};
},2);
this->_v_11748_gcd.get()=j::function([=](const j::Args &_args_fn11749,const V &_receiver_fn11749,const V &_self_fn11749) mutable ->V{
V _v_11750_a;
V _v_11751_b;
_v_11750_a=_args_fn11749[0];
_v_11751_b=_args_fn11749[1];
return (j::truth(_v_11751_b)?([&]()->V{V _callee15036=this->_v_11748_gcd.get();return j::call(_callee15036,j::Args{_v_11751_b,([&]()->V{V _lhs15034=_v_11750_a;V _rhs15035=_v_11751_b;return V(std::fmod(j::number(_lhs15034),j::number(_rhs15035)));})()});})():_v_11750_a);
return V{};
},2);
{V _base15037=V{};V _class15038=j::make_class("Inks",_base15037,j::function([=](const j::Args &_args_fn11769,const V &_receiver_fn11769,const V &_self_fn11769) mutable ->V{
j::put(_receiver_fn11769,this->_literals[46],([&]()->V{j::Args _array15039;return j::array(std::move(_array15039));})());j::put(_receiver_fn11769,this->_literals[267],([&]()->V{V _callee15040=j::builtin("Map");return j::construct(_callee15040,j::Args{});})());_receiver_fn11769.data->hidden.insert(j::string(this->_literals[267]));j::put(_receiver_fn11769,this->_literals[6],V{});j::put(_receiver_fn11769,this->_literals[92],V{});V _v_11770_src;
_v_11770_src=_args_fn11769[0];
{
(void)(([&]()->V{V _base15042=_receiver_fn11769;V _key15043=this->_literals[6];V _assign15041=([&]()->V{V _receiver15049=j::builtin("Uint8Array");V _method15050=this->_literals[70];V _method=j::get(_receiver15049,_method15050);j::Args _params15051=j::Args{([&]()->V{V _logical15044=_v_11770_src;return j::nullish(_logical15044)?([&]()->V{j::Args _array15045;return j::array(std::move(_array15045));})():_logical15044;})(),j::function([=](const j::Args &_args_fn11771,const V &_receiver_fn11771,const V &_self_fn11771) mutable ->V{
V _v_11772_c;
_v_11772_c=_args_fn11771[0];
return ([&]()->V{V _receiver15046=_receiver_fn11769;V _method15047=this->_literals[47];V _method=j::get(_receiver15046,_method15047);j::Args _params15048=j::Args{_v_11772_c};return j::call(_method,_params15048,_receiver15046);})();
return V{};
},1)};return j::call(_method,_params15051,_receiver15049);})();return j::put(_base15042,_key15043,_assign15041);})());
(void)(([&]()->V{V _base15053=_receiver_fn11769;V _key15054=this->_literals[92];V _assign15052=j::get(j::get(_receiver_fn11769,this->_literals[46]),this->_literals[8]);return j::put(_base15053,_key15054,_assign15052);})());

}

return V{};
},1));this->_v_11768_Inks.get()=_class15038;j::class_method(_class15038,this->_literals[47],j::function([=](const j::Args &_args_fn11773,const V &_receiver_fn11773,const V &_self_fn11773) mutable ->V{
V _v_11774_c;
_v_11774_c=_args_fn11773[0];
{
V _v_11775_k;
V _v_11776_i;
_v_11775_k=([&]()->V{V _receiver15055=_v_11774_c;V _method15056=this->_literals[268];V _method=j::get(_receiver15055,_method15056);j::Args _params15057=j::Args{};return j::call(_method,_params15057,_receiver15055);})();
_v_11776_i=([&]()->V{V _receiver15058=j::get(_receiver_fn11773,this->_literals[267]);V _method15059=this->_literals[39];V _method=j::get(_receiver15058,_method15059);j::Args _params15060=j::Args{_v_11775_k};return j::call(_method,_params15060,_receiver15058);})();
if(j::truth(([&]()->V{V _lhs15061=_v_11776_i;V _rhs15062=j::builtin("undefined");return V(j::equal(_lhs15061,_rhs15062,true));})())){
(void)((_v_11776_i=(j::truth(([&]()->V{V _lhs15064=j::get(j::get(_receiver_fn11773,this->_literals[46]),this->_literals[8]);V _rhs15065=V(64.0);return j::binary("<",_lhs15064,_rhs15065);})())?([&]()->V{V _lhs15066=([&]()->V{V _receiver15068=j::get(_receiver_fn11773,this->_literals[46]);V _method15069=this->_literals[269];V _method=j::get(_receiver15068,_method15069);j::Args _params15070=j::Args{_v_11774_c};return j::call(_method,_params15070,_receiver15068);})();V _rhs15067=V(1.0);return V(j::number(_lhs15066)-j::number(_rhs15067));})():([&]()->V{V _callee15071=this->_v_11650_nearest.get();return j::call(_callee15071,j::Args{j::get(_receiver_fn11773,this->_literals[46]),_v_11774_c});})())));
(void)(([&]()->V{V _receiver15072=j::get(_receiver_fn11773,this->_literals[267]);V _method15073=this->_literals[40];V _method=j::get(_receiver15072,_method15073);j::Args _params15074=j::Args{_v_11775_k,_v_11776_i};return j::call(_method,_params15074,_receiver15072);})());

}

return _v_11776_i;

}

return V{};
},1),false,"method");j::class_method(_class15038,this->_literals[94],j::function([=](const j::Args &_args_fn11777,const V &_receiver_fn11777,const V &_self_fn11777) mutable ->V{
V _v_11778_c;
V _v_11779_fallback;
_v_11778_c=_args_fn11777[0];
_v_11779_fallback=_args_fn11777[1];
{
V _v_11780_i;
_v_11780_i=([&]()->V{V _receiver15078=j::get(_receiver_fn11777,this->_literals[267]);V _method15079=this->_literals[39];V _method=j::get(_receiver15078,_method15079);j::Args _params15080=j::Args{([&]()->V{V _receiver15075=_v_11778_c;V _method15076=this->_literals[268];V _method=j::get(_receiver15075,_method15076);j::Args _params15077=j::Args{};return j::call(_method,_params15077,_receiver15075);})()};return j::call(_method,_params15080,_receiver15078);})();
if(j::truth(([&]()->V{V _logical15081=([&]()->V{V _lhs15082=_v_11780_i;V _rhs15083=j::builtin("undefined");return V(!j::equal(_lhs15082,_rhs15083,true));})();return j::truth(_logical15081)?([&]()->V{V _lhs15084=([&]()->V{V _receiver15086=j::get(j::get(_receiver_fn11777,this->_literals[46]),_v_11780_i);V _method15087=this->_literals[268];V _method=j::get(_receiver15086,_method15087);j::Args _params15088=j::Args{};return j::call(_method,_params15088,_receiver15086);})();V _rhs15085=([&]()->V{V _receiver15089=_v_11778_c;V _method15090=this->_literals[268];V _method=j::get(_receiver15089,_method15090);j::Args _params15091=j::Args{};return j::call(_method,_params15091,_receiver15089);})();return V(j::equal(_lhs15084,_rhs15085,true));})():_logical15081;})())){return _v_11780_i;
}
return (j::truth(([&]()->V{V _lhs15092=j::get(j::get(_receiver_fn11777,this->_literals[46]),this->_literals[8]);V _rhs15093=V(64.0);return j::binary("<",_lhs15092,_rhs15093);})())?([&]()->V{V _receiver15094=_receiver_fn11777;V _method15095=this->_literals[47];V _method=j::get(_receiver15094,_method15095);j::Args _params15096=j::Args{_v_11778_c};return j::call(_method,_params15096,_receiver15094);})():_v_11779_fallback);

}

return V{};
},2),false,"method");}
this->_v_11781_QUIET.get()=([&]()->V{V _obj15097=j::object();j::put(_obj15097,this->_literals[41],this->_literals[270]);j::put(_obj15097,this->_literals[13],this->_literals[271]);return _obj15097;})();
this->_v_11782_LOOPS.get()=([&]()->V{V _obj15098=j::object();j::put(_obj15098,this->_literals[272],this->_literals[273]);j::put(_obj15098,this->_literals[274],this->_literals[273]);j::put(_obj15098,this->_literals[275],this->_literals[148]);return _obj15098;})();
this->_v_11783_ours.get()=([&]()->V{V _callee15099=j::builtin("WeakSet");return j::construct(_callee15099,j::Args{});})();
this->_v_11790_isMotion.get()=j::function([=](const j::Args &_args_fn11791,const V &_receiver_fn11791,const V &_self_fn11791) mutable ->V{
V _v_11792_v;
_v_11792_v=_args_fn11791[0];
return ([&]()->V{V _logical15100=([&]()->V{V _logical15101=([&]()->V{V _logical15102=j::unary("!",j::unary("!",_v_11792_v));return j::truth(_logical15102)?([&]()->V{V _lhs15103=j::unary("typeof",_v_11792_v);V _rhs15104=this->_literals[14];return V(j::equal(_lhs15103,_rhs15104,true));})():_logical15102;})();return j::truth(_logical15101)?([&]()->V{V _lhs15105=j::unary("typeof",j::get(_v_11792_v,this->_literals[69]));V _rhs15106=this->_literals[0];return V(j::equal(_lhs15105,_rhs15106,true));})():_logical15101;})();return j::truth(_logical15100)?([&]()->V{V _lhs15107=j::unary("typeof",j::get(_v_11792_v,this->_literals[70]));V _rhs15108=this->_literals[0];return V(j::equal(_lhs15107,_rhs15108,true));})():_logical15100;})();
return V{};
},1);
this->_v_11793_textOf.get()=j::function([=](const j::Args &_args_fn11794,const V &_receiver_fn11794,const V &_self_fn11794) mutable ->V{
V _v_11795_s;
_v_11795_s=_args_fn11794[0];
return ([&]()->V{V _receiver15109=([&]()->V{V _receiver15134=([&]()->V{V _receiver15137=([&]()->V{V _receiver15140=_v_11795_s;V _method15141=this->_literals[121];V _method=j::get(_receiver15140,_method15141);j::Args _params15142=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[27]};return j::call(_method,_params15142,_receiver15140);})();V _method15138=this->_literals[26];V _method=j::get(_receiver15137,_method15138);j::Args _params15139=j::Args{this->_literals[27]};return j::call(_method,_params15139,_receiver15137);})();V _method15135=this->_literals[6];V _method=j::get(_receiver15134,_method15135);j::Args _params15136=j::Args{j::function([=](const j::Args &_args_fn11796,const V &_receiver_fn11796,const V &_self_fn11796) mutable ->V{
V _v_11797_l;
_v_11797_l=_args_fn11796[0];
return ([&]()->V{V _receiver15131=_v_11797_l;V _method15132=this->_literals[121];V _method=j::get(_receiver15131,_method15132);j::Args _params15133=j::Args{j::regexp(u"[^\\t]*\\t","g"),j::function([=](const j::Args &_args_fn11798,const V &_receiver_fn11798,const V &_self_fn11798) mutable ->V{
V _v_11799_run;
_v_11799_run=_args_fn11798[0];
return ([&]()->V{V _receiver15125=([&]()->V{V _receiver15128=_v_11799_run;V _method15129=this->_literals[25];V _method=j::get(_receiver15128,_method15129);j::Args _params15130=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params15130,_receiver15128);})();V _method15126=this->_literals[276];V _method=j::get(_receiver15125,_method15126);j::Args _params15127=j::Args{([&]()->V{V _lhs15112=([&]()->V{V _lhs15114=([&]()->V{V _number15120=([&]()->V{V _lhs15121=([&]()->V{V _lhs15123=j::get(_v_11799_run,this->_literals[8]);V _rhs15124=V(1.0);return V(j::number(_lhs15123)-j::number(_rhs15124));})();V _rhs15122=V(8.0);return V(j::number(_lhs15121)/j::number(_rhs15122));})();return V(std::floor(j::number(_number15120)));})();V _rhs15115=V(8.0);return V(j::number(_lhs15114)*j::number(_rhs15115));})();V _rhs15113=V(8.0);return j::binary("+",_lhs15112,_rhs15113);})()};return j::call(_method,_params15127,_receiver15125);})();
return V{};
},1)};return j::call(_method,_params15133,_receiver15131);})();
return V{};
},1)};return j::call(_method,_params15136,_receiver15134);})();V _method15110=this->_literals[120];V _method=j::get(_receiver15109,_method15110);j::Args _params15111=j::Args{this->_literals[27]};return j::call(_method,_params15111,_receiver15109);})();
return V{};
},1);
this->_v_11874_copy.get()=j::function([=](const j::Args &_args_fn11875,const V &_receiver_fn11875,const V &_self_fn11875) mutable ->V{
V _v_11876_s;
V _v_11877_g;
_v_11876_s=_args_fn11875[0];
_v_11877_g=_args_fn11875[1];
{
(void)(([&]()->V{V _receiver15143=j::get(_v_11876_s,this->_literals[63]);V _method15144=this->_literals[40];V _method=j::get(_receiver15143,_method15144);j::Args _params15145=j::Args{j::get(_v_11877_g,this->_literals[63])};return j::call(_method,_params15145,_receiver15143);})());
(void)(([&]()->V{V _receiver15146=j::get(_v_11876_s,this->_literals[64]);V _method15147=this->_literals[40];V _method=j::get(_receiver15146,_method15147);j::Args _params15148=j::Args{j::get(_v_11877_g,this->_literals[64])};return j::call(_method,_params15148,_receiver15146);})());

}

return V{};
},2);
this->_v_11885_isBlock.get()=j::function([=](const j::Args &_args_fn11886,const V &_receiver_fn11886,const V &_self_fn11886) mutable ->V{
V _v_11887_c;
_v_11887_c=_args_fn11886[0];
return ([&]()->V{V _logical15149=([&]()->V{V _lhs15150=_v_11887_c;V _rhs15151=V(9600.0);return j::binary(">=",_lhs15150,_rhs15151);})();return j::truth(_logical15149)?([&]()->V{V _lhs15152=_v_11887_c;V _rhs15153=V(9631.0);return j::binary("<=",_lhs15152,_rhs15153);})():_logical15149;})();
return V{};
},1);
this->_v_11888_isSolid.get()=j::function([=](const j::Args &_args_fn11889,const V &_receiver_fn11889,const V &_self_fn11889) mutable ->V{
V _v_11890_c;
_v_11890_c=_args_fn11889[0];
return ([&]()->V{V _logical15154=([&]()->V{V _logical15155=j::unary("!",([&]()->V{V _logical15156=([&]()->V{V _lhs15157=_v_11890_c;V _rhs15158=V(9472.0);return j::binary(">=",_lhs15157,_rhs15158);})();return j::truth(_logical15156)?([&]()->V{V _lhs15159=_v_11890_c;V _rhs15160=V(9599.0);return j::binary("<=",_lhs15159,_rhs15160);})():_logical15156;})());return j::truth(_logical15155)?j::unary("!",([&]()->V{V _logical15161=([&]()->V{V _lhs15162=_v_11890_c;V _rhs15163=V(10240.0);return j::binary(">=",_lhs15162,_rhs15163);})();return j::truth(_logical15161)?([&]()->V{V _lhs15164=_v_11890_c;V _rhs15165=V(10495.0);return j::binary("<=",_lhs15164,_rhs15165);})():_logical15161;})()):_logical15155;})();return j::truth(_logical15154)?([&]()->V{V _lhs15166=([&]()->V{V _callee15168=this->_v_11878_density.get();return j::call(_callee15168,j::Args{_v_11890_c});})();V _rhs15167=V(0.45);return j::binary(">=",_lhs15166,_rhs15167);})():_logical15154;})();
return V{};
},1);
this->_v_12014_HELD.get()=([&]()->V{V _obj15169=j::object();j::put(_obj15169,this->_literals[125],V(0.7));j::put(_obj15169,this->_literals[126],V(0.3));j::put(_obj15169,this->_literals[133],V(0.45));return _obj15169;})();
this->_v_12015_MODES.get()=([&]()->V{j::Args _array15170;_array15170.push_back(this->_literals[125]);_array15170.push_back(this->_literals[126]);_array15170.push_back(this->_literals[133]);return j::array(std::move(_array15170));})();
this->_v_12016_MODE_WHAT.get()=([&]()->V{V _obj15171=j::object();j::put(_obj15171,this->_literals[125],this->_literals[125]);j::put(_obj15171,this->_literals[126],this->_literals[126]);j::put(_obj15171,this->_literals[133],this->_literals[277]);return _obj15171;})();
this->_v_12213_hues.get()=([&]()->V{V _obj15172=j::object();j::put(_obj15172,this->_literals[41],([&]()->V{V _receiver15177=j::builtin("Array");V _method15178=this->_literals[70];V _method=j::get(_receiver15177,_method15178);j::Args _params15179=j::Args{([&]()->V{V _obj15173=j::object();j::put(_obj15173,this->_literals[8],V(12.0));return _obj15173;})(),j::function([=](const j::Args &_args_fn12214,const V &_receiver_fn12214,const V &_self_fn12214) mutable ->V{
V _v_12215__;
V _v_12216_i;
_v_12215__=_args_fn12214[0];
_v_12216_i=_args_fn12214[1];
return ([&]()->V{V _callee15176=this->_v_12201_hsl.get();return j::call(_callee15176,j::Args{([&]()->V{V _lhs15174=_v_12216_i;V _rhs15175=V(30.0);return V(j::number(_lhs15174)*j::number(_rhs15175));})(),V(0.8),V(0.4)});})();
return V{};
},2)};return j::call(_method,_params15179,_receiver15177);})());j::put(_obj15172,this->_literals[13],([&]()->V{V _receiver15184=j::builtin("Array");V _method15185=this->_literals[70];V _method=j::get(_receiver15184,_method15185);j::Args _params15186=j::Args{([&]()->V{V _obj15180=j::object();j::put(_obj15180,this->_literals[8],V(12.0));return _obj15180;})(),j::function([=](const j::Args &_args_fn12217,const V &_receiver_fn12217,const V &_self_fn12217) mutable ->V{
V _v_12218__;
V _v_12219_i;
_v_12218__=_args_fn12217[0];
_v_12219_i=_args_fn12217[1];
return ([&]()->V{V _callee15183=this->_v_12201_hsl.get();return j::call(_callee15183,j::Args{([&]()->V{V _lhs15181=_v_12219_i;V _rhs15182=V(30.0);return V(j::number(_lhs15181)*j::number(_rhs15182));})(),V(0.9),V(0.66)});})();
return V{};
},2)};return j::call(_method,_params15186,_receiver15184);})());return _obj15172;})();
this->_v_12220_cycle.get()=j::function([=](const j::Args &_args_fn12221,const V &_receiver_fn12221,const V &_self_fn12221) mutable ->V{
V _v_12222_stops;
V _v_12223_n;
_v_12222_stops=_args_fn12221[0];
_v_12223_n=_args_fn12221[1];
return (j::truth(([&]()->V{V _lhs15187=j::get(_v_12222_stops,this->_literals[8]);V _rhs15188=V(1.0);return V(j::equal(_lhs15187,_rhs15188,true));})())?([&]()->V{V _receiver15189=([&]()->V{V _callee15192=j::builtin("Array");return j::call(_callee15192,j::Args{_v_12223_n});})();V _method15190=this->_literals[91];V _method=j::get(_receiver15189,_method15190);j::Args _params15191=j::Args{j::get(_v_12222_stops,V(0.0))};return j::call(_method,_params15191,_receiver15189);})():([&]()->V{V _receiver15193=([&]()->V{V _callee15199=this->_v_11646_gradient.get();return j::call(_callee15199,j::Args{([&]()->V{j::Args _array15196;for(const auto &_value:j::elements(_v_12222_stops))_array15196.push_back(_value);_array15196.push_back(j::get(_v_12222_stops,V(0.0)));return j::array(std::move(_array15196));})(),([&]()->V{V _lhs15197=_v_12223_n;V _rhs15198=V(1.0);return j::binary("+",_lhs15197,_rhs15198);})()});})();V _method15194=this->_literals[25];V _method=j::get(_receiver15193,_method15194);j::Args _params15195=j::Args{V(0.0),_v_12223_n};return j::call(_method,_params15195,_receiver15193);})());
return V{};
},2);
this->_v_12268_hueCycle.get()=j::function([=](const j::Args &_args_fn12269,const V &_receiver_fn12269,const V &_self_fn12269) mutable ->V{
V _v_12270_src;
V _v_12271_options;
_v_12270_src=_args_fn12269[0];
_v_12271_options=_args_fn12269[1];
return ([&]()->V{V _callee15200=this->_v_12224_rainbowOf.get();return j::call(_callee15200,j::Args{this->_literals[278],_v_12270_src,_v_12271_options,V(0.0)});})();
return V{};
},2);
this->_v_12295_outlines.get()=([&]()->V{V _obj15201=j::object();j::put(_obj15201,this->_literals[219],this->_literals[279]);j::put(_obj15201,this->_literals[280],this->_literals[281]);j::put(_obj15201,this->_literals[282],this->_literals[283]);j::put(_obj15201,this->_literals[284],this->_literals[285]);j::put(_obj15201,this->_literals[286],this->_literals[287]);return _obj15201;})();
this->_v_12296_NX.get()=([&]()->V{j::Args _array15202;_array15202.push_back(V(0.0));_array15202.push_back(V(0.0));_array15202.push_back(V(1.0));_array15202.push_back(j::unary("-",V(1.0)));_array15202.push_back(V(1.0));_array15202.push_back(j::unary("-",V(1.0)));_array15202.push_back(V(1.0));_array15202.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array15202));})();
this->_v_12297_NY.get()=([&]()->V{j::Args _array15203;_array15203.push_back(V(1.0));_array15203.push_back(j::unary("-",V(1.0)));_array15203.push_back(V(0.0));_array15203.push_back(V(0.0));_array15203.push_back(V(1.0));_array15203.push_back(V(1.0));_array15203.push_back(j::unary("-",V(1.0)));_array15203.push_back(j::unary("-",V(1.0)));return j::array(std::move(_array15203));})();
}
};
}
std::unique_ptr<Module> new_kit_fx(){return std::make_unique<Generated_kit_fx>();}
}
