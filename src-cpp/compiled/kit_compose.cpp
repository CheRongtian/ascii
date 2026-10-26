// Native source generated from src/kit/compose.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_compose final:j::Module {
j::Cell _v_1_EMPTY;
j::Cell _v_2_INK;
j::Cell _v_3_MAX;
j::Cell _v_4_NONE;
j::Cell _v_5_Surface;
j::Cell _v_6_and;
j::Cell _v_7_asPiece;
j::Cell _v_8_bayer;
j::Cell _v_9_chained;
j::Cell _v_10_checkMeta;
j::Cell _v_11_code;
j::Cell _v_12_inkOf;
j::Cell _v_13_fail;
j::Cell _v_14_hash;
j::Cell _v_15_isHex;
j::Cell _v_16_mergePalettes;
j::Cell _v_17_piece;
j::Cell _v_18_ramps;
j::Cell _v_19_rgb;
j::Cell _v_20_sample;
j::Cell _v_21_valueNoise;
j::Cell _v_22_mirror;
j::Cell _v_23_ANCHORS;
j::Cell _v_24_SIDES;
j::Cell _v_25_shown;
j::Cell _v_28_or;
j::Cell _v_31_finite;
j::Cell _v_34_whole;
j::Cell _v_40_duration;
j::Cell _v_46_oneOf;
j::Cell _v_54_object;
j::Cell _v_61_oneLine;
j::Cell _v_64_naming;
j::Cell _v_68_loopOption;
j::Cell _v_72_CLIP;
j::Cell _v_73_colorOf;
j::Cell _v_78_isPiece;
j::Cell _v_81_isClip;
j::Cell _v_84_unwrap;
j::Cell _v_87_textName;
j::Cell _v_93_prepare;
j::Cell _v_106_fit;
j::Cell _v_111_list;
j::Cell _v_120_apart;
j::Cell _v_124_merge;
j::Cell _v_183_LOOPS;
j::Cell _v_184_period;
j::Cell _v_190_gcd;
j::Cell _v_194_together;
j::Cell _v_200_playable;
j::Cell _v_203_stillOf;
j::Cell _v_209_groundOf;
j::Cell _v_214_fpsOf;
j::Cell _v_219_categoryOf;
j::Cell _v_224_short;
j::Cell _v_227_optionsOf;
j::Cell _v_230_build;
j::Cell _v_236_restretch;
j::Cell _v_245_player;
j::Cell _v_264_place;
j::Cell _v_274_LAYER;
j::Cell _v_275_travel;
j::Cell _v_282_position;
j::Cell _v_287_layerOf;
j::Cell _v_295_knockout;
j::Cell _v_311_at;
j::Cell _v_316_around;
j::Cell _v_322_spot;
j::Cell _v_337_stack;
j::Cell _v_385_layer;
j::Cell _v_391_over;
j::Cell _v_402_BOXES;
j::Cell _v_403_borderOf;
j::Cell _v_418_box;
j::Cell _v_447_titleOf;
j::Cell _v_451_borderInk;
j::Cell _v_456_border;
j::Cell _v_478_arrange;
j::Cell _v_510_row;
j::Cell _v_530_column;
j::Cell _v_550_grid;
j::Cell _v_623_single;
j::Cell _v_626_playedOnce;
j::Cell _v_633_withMotion;
j::Cell _v_637_reshape;
j::Cell _v_653_crop;
j::Cell _v_673_pad;
j::Cell _v_691_scale;
j::Cell _v_708_flip;
j::Cell _v_726_TRANSITIONS;
j::Cell _v_727_thresholds;
j::Cell _v_748_fades;
j::Cell _v_749_fadeTable;
j::Cell _v_772_EDGE;
j::Cell _v_773_EDGES;
j::Cell _v_774_BAND;
j::Cell _v_775_sequence;
j::Cell _v_876_retime;
j::Cell _v_907_stillAt;
j::Cell _v_910_speed;
j::Cell _v_919_delay;
j::Cell _v_928_repeat;
j::Cell _v_937_freeze;
j::Cell _v_943_named;
std::vector<V> _literals;
Generated_kit_compose():_v_1_EMPTY(this->slot("EMPTY")),_v_2_INK(this->slot("INK")),_v_3_MAX(this->slot("MAX")),_v_4_NONE(this->slot("NONE")),_v_5_Surface(this->slot("Surface")),_v_6_and(this->slot("and")),_v_7_asPiece(this->slot("asPiece")),_v_8_bayer(this->slot("bayer")),_v_9_chained(this->slot("chained")),_v_10_checkMeta(this->slot("checkMeta")),_v_11_code(this->slot("code")),_v_12_inkOf(this->slot("inkOf")),_v_13_fail(this->slot("fail")),_v_14_hash(this->slot("hash")),_v_15_isHex(this->slot("isHex")),_v_16_mergePalettes(this->slot("mergePalettes")),_v_17_piece(this->slot("piece")),_v_18_ramps(this->slot("ramps")),_v_19_rgb(this->slot("rgb")),_v_20_sample(this->slot("sample")),_v_21_valueNoise(this->slot("valueNoise")),_v_22_mirror(this->slot("mirror")),_v_23_ANCHORS(this->slot("ANCHORS")),_v_24_SIDES(this->slot("SIDES")),_v_25_shown(this->slot("shown")),_v_28_or(this->slot("or")),_v_31_finite(this->slot("finite")),_v_34_whole(this->slot("whole")),_v_40_duration(this->slot("duration")),_v_46_oneOf(this->slot("oneOf")),_v_54_object(this->slot("object")),_v_61_oneLine(this->slot("oneLine")),_v_64_naming(this->slot("naming")),_v_68_loopOption(this->slot("loopOption")),_v_72_CLIP(this->slot("CLIP")),_v_73_colorOf(this->slot("colorOf")),_v_78_isPiece(this->slot("isPiece")),_v_81_isClip(this->slot("isClip")),_v_84_unwrap(this->slot("unwrap")),_v_87_textName(this->slot("textName")),_v_93_prepare(this->slot("prepare")),_v_106_fit(this->slot("fit")),_v_111_list(this->slot("list")),_v_120_apart(this->slot("apart")),_v_124_merge(this->slot("merge")),_v_183_LOOPS(this->slot("LOOPS")),_v_184_period(this->slot("period")),_v_190_gcd(this->slot("gcd")),_v_194_together(this->slot("together")),_v_200_playable(this->slot("playable")),_v_203_stillOf(this->slot("stillOf")),_v_209_groundOf(this->slot("groundOf")),_v_214_fpsOf(this->slot("fpsOf")),_v_219_categoryOf(this->slot("categoryOf")),_v_224_short(this->slot("short")),_v_227_optionsOf(this->slot("optionsOf")),_v_230_build(this->slot("build")),_v_236_restretch(this->slot("restretch")),_v_245_player(this->slot("player")),_v_264_place(this->slot("place")),_v_274_LAYER(this->slot("LAYER")),_v_275_travel(this->slot("travel")),_v_282_position(this->slot("position")),_v_287_layerOf(this->slot("layerOf")),_v_295_knockout(this->slot("knockout")),_v_311_at(this->slot("at")),_v_316_around(this->slot("around")),_v_322_spot(this->slot("spot")),_v_337_stack(this->slot("stack")),_v_385_layer(this->slot("layer")),_v_391_over(this->slot("over")),_v_402_BOXES(this->slot("BOXES")),_v_403_borderOf(this->slot("borderOf")),_v_418_box(this->slot("box")),_v_447_titleOf(this->slot("titleOf")),_v_451_borderInk(this->slot("borderInk")),_v_456_border(this->slot("border")),_v_478_arrange(this->slot("arrange")),_v_510_row(this->slot("row")),_v_530_column(this->slot("column")),_v_550_grid(this->slot("grid")),_v_623_single(this->slot("single")),_v_626_playedOnce(this->slot("playedOnce")),_v_633_withMotion(this->slot("withMotion")),_v_637_reshape(this->slot("reshape")),_v_653_crop(this->slot("crop")),_v_673_pad(this->slot("pad")),_v_691_scale(this->slot("scale")),_v_708_flip(this->slot("flip")),_v_726_TRANSITIONS(this->slot("TRANSITIONS")),_v_727_thresholds(this->slot("thresholds")),_v_748_fades(this->slot("fades")),_v_749_fadeTable(this->slot("fadeTable")),_v_772_EDGE(this->slot("EDGE")),_v_773_EDGES(this->slot("EDGES")),_v_774_BAND(this->slot("BAND")),_v_775_sequence(this->slot("sequence")),_v_876_retime(this->slot("retime")),_v_907_stillAt(this->slot("stillAt")),_v_910_speed(this->slot("speed")),_v_919_delay(this->slot("delay")),_v_928_repeat(this->slot("repeat")),_v_937_freeze(this->slot("freeze")),_v_943_named(this->slot("named")),_literals{V(u"isInteger"),
V(u"of 0 or more"),
V(u"above 0"),
V(u"includes"),
V(u"stringify"),
V(u"map"),
V(u"object"),
V(u"isArray"),
V(u"entries"),
V(u"name"),
V(u"note"),
V(u"length"),
V(u"trim"),
V(u"light"),
V(u"dark"),
V(u"string"),
V(u"src"),
V(u"\n"),
V(u"replace"),
V(u"test"),
V(u"slice"),
V(u"drawing"),
V(u"options"),
V(u"offset"),
V(u"speed"),
V(u"color"),
V(u"a clip's color"),
V(u"frames"),
V(u"piece"),
V(u"meta"),
V(u"tint"),
V(u"stretch"),
V(u"cols"),
V(u"rows"),
V(u"cell"),
V(u"palette"),
V(u"push"),
V(u"toLowerCase"),
V(u"has"),
V(u"set"),
V(u"get"),
V(u"some"),
V(u"fill"),
V(u"min"),
V(u"max"),
V(u"filter"),
V(u"maps"),
V(u"from"),
V(u"ink"),
V(u"fps"),
V(u"loop"),
V(u"category"),
V(u"still"),
V(u"ground"),
V(u"clock"),
V(u"setup"),
V(u"chars"),
V(u"colors"),
V(u"paper"),
V(u"mono"),
V(u"at"),
V(u"left"),
V(u"endsWith"),
V(u"right"),
V(u"top"),
V(u"startsWith"),
V(u"bottom"),
V(u"to"),
V(u"period"),
V(u"a layer's move period"),
V(u"function"),
V(u"halo"),
V(u" "),
V(u"mask"),
V(u"x"),
V(u"y"),
V(u"anchor"),
V(u"a layer's anchor"),
V(u"margin"),
V(u"a layer's margin"),
V(u"move"),
V(u"index"),
V(u"put"),
V(u"down"),
V(u"type"),
V(u"flatMap"),
V(u" over "),
V(u"reverse"),
V(u"join"),
V(u"charCodeAt"),
V(u"paste"),
V(u"layer"),
V(u"top-left"),
V(u"over()"),
V(u"over"),
V(u"center"),
V(u"style"),
V(u"title"),
V(u"pad"),
V(u"rounded"),
V(u"hasOwn"),
V(u"keys"),
V(u"boolean"),
V(u"a border's color"),
V(u"number"),
V(u"a border's pad"),
V(u"a border's pad rows"),
V(u"a border's pad columns"),
V(u"trimEnd"),
V(u"…"),
V(u"border"),
V(u"border()"),
V(u"region"),
V(u"row"),
V(u"row()"),
V(u"gap"),
V(u"align"),
V(u"row's gap"),
V(u"row's align"),
V(u"middle"),
V(u"column"),
V(u"column()"),
V(u"column's gap"),
V(u"column's align"),
V(u"grid"),
V(u"grid()"),
V(u"columns"),
V(u"grid's columns"),
V(u"grid's gap"),
V(u"grid's gap columns"),
V(u"grid's gap rows"),
V(u"grid's align"),
V(u"grid's border"),
V(u"reduce"),
V(u"motion"),
V(u"once"),
V(u"seconds"),
V(u"crop"),
V(u"pad's rows"),
V(u"pad's columns"),
V(u"scale"),
V(u"scale's factor"),
V(u"scale's factor across"),
V(u"scale's factor down"),
V(u"flip"),
V(u"flip's axis"),
V(u"both"),
V(u"sort"),
V(u"forEach"),
V(u"blocks"),
V(u"eighths"),
V(u"dots"),
V(u"standard"),
V(u"detailed"),
V(u"▖▗▘▝"),
V(u"▀▌▐▚▞"),
V(u"▙▛▜▟"),
V(u"ramp"),
V(u"level"),
V(u"ramps"),
V(u"sequence"),
V(u"sequence()"),
V(u"transition"),
V(u"overlap"),
V(u"seed"),
V(u"sequence's seconds"),
V(u"sequence's transition"),
V(u"dissolve"),
V(u"sequence's overlap"),
V(u"cut"),
V(u"wipe"),
V(u"fade"),
V(u", then "),
V(u"clear"),
V(u"fromEntries"),
V(u"default"),
V(u"isFinite"),
V(u"delay"),
V(u"repeat"),
V(u"freeze"),
V(u"named()"),
V(u"named"),
V(u"top-right"),
V(u"bottom-left"),
V(u"bottom-right"),
V(u"up"),
V(u"a function"),
V(u", "),
V(u"an object"),
V(u""),
V(u"split"),
V(u"find"),
V(u"text"),
V(u"logos"),
V(u"shine"),
V(u"companies"),
V(u"distros"),
V(u"scan"),
V(u"every"),
V(u"generative"),
V(u"single"),
V(u"┌┐└┘─│"),
V(u"double"),
V(u"╔╗╚╝═║"),
V(u"╭╮╰╯─│"),
V(u"heavy"),
V(u"┏┓┗┛━┃"),
V(u"ascii"),
V(u"++++-|"),
V(u"$1"),
V(u"assign"),
V(u".:"),
V(u"░▒▓")}{
this->exports["layer"]=this->_v_385_layer;
this->exports["over"]=this->_v_391_over;
this->exports["border"]=this->_v_456_border;
this->exports["row"]=this->_v_510_row;
this->exports["column"]=this->_v_530_column;
this->exports["grid"]=this->_v_550_grid;
this->exports["crop"]=this->_v_653_crop;
this->exports["pad"]=this->_v_673_pad;
this->exports["scale"]=this->_v_691_scale;
this->exports["flip"]=this->_v_708_flip;
this->exports["sequence"]=this->_v_775_sequence;
this->exports["speed"]=this->_v_910_speed;
this->exports["delay"]=this->_v_919_delay;
this->exports["repeat"]=this->_v_928_repeat;
this->exports["freeze"]=this->_v_937_freeze;
this->exports["named"]=this->_v_943_named;
}
void init() override{if(initialized)return;initialized=true;
this->_v_34_whole.get()=j::function([=](const j::Args &_args_fn35,const V &_receiver_fn35,const V &_self_fn35) mutable ->V{
V _v_36_v;
V _v_37_name;
V _v_38_least;
V _v_39_dflt;
_v_36_v=_args_fn35[0];
_v_37_name=_args_fn35[1];
_v_38_least=_args_fn35[2];
_v_39_dflt=_args_fn35[3];
{
if(j::truth(([&]()->V{V _lhs957=_v_36_v;V _rhs958=j::builtin("undefined");return V(j::equal(_lhs957,_rhs958,true));})())){return _v_39_dflt;
}
if(j::truth(([&]()->V{V _logical959=j::unary("!",([&]()->V{V _receiver960=j::builtin("Number");V _method961=this->_literals[0];V _method=j::get(_receiver960,_method961);j::Args _params962=j::Args{_v_36_v};return j::call(_method,_params962,_receiver960);})());return !j::truth(_logical959)?([&]()->V{V _lhs963=_v_36_v;V _rhs964=_v_38_least;return j::binary("<",_lhs963,_rhs964);})():_logical959;})())){(void)(([&]()->V{V _callee967=this->_v_13_fail.get();return j::call(_callee967,j::Args{([&]()->V{std::u16string _text965;_text965+=u"";_text965+=j::string(_v_37_name);_text965+=u" takes a whole number of ";_text965+=j::string(_v_38_least);_text965+=u" or more, not ";_text965+=j::string(([&]()->V{V _callee966=this->_v_25_shown.get();return j::call(_callee966,j::Args{_v_36_v});})());_text965+=u"";return V(std::move(_text965));})()});})());
}
return _v_36_v;

}

return V{};
},4);
this->_v_40_duration.get()=j::function([=](const j::Args &_args_fn41,const V &_receiver_fn41,const V &_self_fn41) mutable ->V{
V _v_42_v;
V _v_43_name;
V _v_44_dflt;
V _v_45_zero;
_v_42_v=_args_fn41[0];
_v_43_name=_args_fn41[1];
_v_44_dflt=_args_fn41[2];
V _default968=_args_fn41[3];if(_default968.kind==V::Undefined||_default968.kind==V::Hole)_default968=V(false);
_v_45_zero=_default968;
{
if(j::truth(([&]()->V{V _lhs969=_v_42_v;V _rhs970=j::builtin("undefined");return V(j::equal(_lhs969,_rhs970,true));})())){return _v_44_dflt;
}
if(j::truth(([&]()->V{V _logical971=j::unary("!",([&]()->V{V _callee972=this->_v_31_finite.get();return j::call(_callee972,j::Args{_v_42_v});})());return !j::truth(_logical971)?(j::truth(_v_45_zero)?([&]()->V{V _lhs973=_v_42_v;V _rhs974=V(0.0);return j::binary("<",_lhs973,_rhs974);})():([&]()->V{V _lhs975=_v_42_v;V _rhs976=V(0.0);return j::binary("<=",_lhs975,_rhs976);})()):_logical971;})())){(void)(([&]()->V{V _callee979=this->_v_13_fail.get();return j::call(_callee979,j::Args{([&]()->V{std::u16string _text977;_text977+=u"";_text977+=j::string(_v_43_name);_text977+=u" takes a number of seconds ";_text977+=j::string((j::truth(_v_45_zero)?this->_literals[1]:this->_literals[2]));_text977+=u", not ";_text977+=j::string(([&]()->V{V _callee978=this->_v_25_shown.get();return j::call(_callee978,j::Args{_v_42_v});})());_text977+=u"";return V(std::move(_text977));})()});})());
}
return _v_42_v;

}

return V{};
},3);
this->_v_46_oneOf.get()=j::function([=](const j::Args &_args_fn47,const V &_receiver_fn47,const V &_self_fn47) mutable ->V{
V _v_48_v;
V _v_49_name;
V _v_50_list;
V _v_51_dflt;
_v_48_v=_args_fn47[0];
_v_49_name=_args_fn47[1];
_v_50_list=_args_fn47[2];
_v_51_dflt=_args_fn47[3];
{
if(j::truth(([&]()->V{V _lhs980=_v_48_v;V _rhs981=j::builtin("undefined");return V(j::equal(_lhs980,_rhs981,true));})())){return _v_51_dflt;
}
if(j::truth(j::unary("!",([&]()->V{V _receiver982=_v_50_list;V _method983=this->_literals[3];V _method=j::get(_receiver982,_method983);j::Args _params984=j::Args{_v_48_v};return j::call(_method,_params984,_receiver982);})()))){(void)(([&]()->V{V _callee994=this->_v_13_fail.get();return j::call(_callee994,j::Args{([&]()->V{std::u16string _text985;_text985+=u"";_text985+=j::string(_v_49_name);_text985+=u" takes ";_text985+=j::string(([&]()->V{V _callee992=this->_v_28_or.get();return j::call(_callee992,j::Args{([&]()->V{V _receiver989=_v_50_list;V _method990=this->_literals[5];V _method=j::get(_receiver989,_method990);j::Args _params991=j::Args{j::function([=](const j::Args &_args_fn52,const V &_receiver_fn52,const V &_self_fn52) mutable ->V{
V _v_53_w;
_v_53_w=_args_fn52[0];
return ([&]()->V{V _receiver986=j::builtin("JSON");V _method987=this->_literals[4];V _method=j::get(_receiver986,_method987);j::Args _params988=j::Args{_v_53_w};return j::call(_method,_params988,_receiver986);})();
return V{};
},1)};return j::call(_method,_params991,_receiver989);})()});})());_text985+=u", not ";_text985+=j::string(([&]()->V{V _callee993=this->_v_25_shown.get();return j::call(_callee993,j::Args{_v_48_v});})());_text985+=u"";return V(std::move(_text985));})()});})());
}
return _v_48_v;

}

return V{};
},4);
this->_v_54_object.get()=j::function([=](const j::Args &_args_fn55,const V &_receiver_fn55,const V &_self_fn55) mutable ->V{
V _v_56_v;
V _v_57_name;
V _v_58_keys;
_v_56_v=_args_fn55[0];
_v_57_name=_args_fn55[1];
_v_58_keys=_args_fn55[2];
{
if(j::truth(([&]()->V{V _lhs995=_v_56_v;V _rhs996=j::builtin("undefined");return V(j::equal(_lhs995,_rhs996,true));})())){return ([&]()->V{V _obj997=j::object();return _obj997;})();
}
if(j::truth(([&]()->V{V _logical998=([&]()->V{V _logical999=([&]()->V{V _lhs1000=_v_56_v;V _rhs1001=V::null();return V(j::equal(_lhs1000,_rhs1001,true));})();return !j::truth(_logical999)?([&]()->V{V _lhs1002=j::unary("typeof",_v_56_v);V _rhs1003=this->_literals[6];return V(!j::equal(_lhs1002,_rhs1003,true));})():_logical999;})();return !j::truth(_logical998)?([&]()->V{V _receiver1004=j::builtin("Array");V _method1005=this->_literals[7];V _method=j::get(_receiver1004,_method1005);j::Args _params1006=j::Args{_v_56_v};return j::call(_method,_params1006,_receiver1004);})():_logical998;})())){(void)(([&]()->V{V _callee1009=this->_v_13_fail.get();return j::call(_callee1009,j::Args{([&]()->V{std::u16string _text1007;_text1007+=u"";_text1007+=j::string(_v_57_name);_text1007+=u" takes an object of options, not ";_text1007+=j::string(([&]()->V{V _callee1008=this->_v_25_shown.get();return j::call(_callee1008,j::Args{_v_56_v});})());_text1007+=u"";return V(std::move(_text1007));})()});})());
}
if(j::truth(_v_58_keys)){{for(const auto &_item1010:j::elements(([&]()->V{V _receiver1011=j::builtin("Object");V _method1012=this->_literals[8];V _method=j::get(_receiver1011,_method1012);j::Args _params1013=j::Args{_v_56_v};return j::call(_method,_params1013,_receiver1011);})())){V _v_59_k;
V _v_60_val;
V _pattern1014=_item1010;
_v_59_k=j::get(_pattern1014,V(0));
_v_60_val=j::get(_pattern1014,V(1));
if(j::truth(([&]()->V{V _logical1015=([&]()->V{V _lhs1016=_v_60_val;V _rhs1017=j::builtin("undefined");return V(!j::equal(_lhs1016,_rhs1017,true));})();return j::truth(_logical1015)?j::unary("!",([&]()->V{V _receiver1018=_v_58_keys;V _method1019=this->_literals[3];V _method=j::get(_receiver1018,_method1019);j::Args _params1020=j::Args{_v_59_k};return j::call(_method,_params1020,_receiver1018);})()):_logical1015;})())){(void)(([&]()->V{V _callee1026=this->_v_13_fail.get();return j::call(_callee1026,j::Args{([&]()->V{std::u16string _text1021;_text1021+=u"";_text1021+=j::string(_v_57_name);_text1021+=u" has no option ";_text1021+=j::string(([&]()->V{V _receiver1022=j::builtin("JSON");V _method1023=this->_literals[4];V _method=j::get(_receiver1022,_method1023);j::Args _params1024=j::Args{_v_59_k};return j::call(_method,_params1024,_receiver1022);})());_text1021+=u": it takes ";_text1021+=j::string(([&]()->V{V _callee1025=this->_v_6_and.get();return j::call(_callee1025,j::Args{_v_58_keys});})());_text1021+=u"";return V(std::move(_text1021));})()});})());
}
}}
}
return _v_56_v;

}

return V{};
},3);
this->_v_64_naming.get()=j::function([=](const j::Args &_args_fn65,const V &_receiver_fn65,const V &_self_fn65) mutable ->V{
V _v_66_fn;
V _v_67_o;
_v_66_fn=_args_fn65[0];
_v_67_o=_args_fn65[1];
{
if(j::truth(([&]()->V{V _logical1027=([&]()->V{V _lhs1028=j::get(_v_67_o,this->_literals[9]);V _rhs1029=j::builtin("undefined");return V(!j::equal(_lhs1028,_rhs1029,true));})();return j::truth(_logical1027)?j::unary("!",([&]()->V{V _callee1030=this->_v_61_oneLine.get();return j::call(_callee1030,j::Args{j::get(_v_67_o,this->_literals[9])});})()):_logical1027;})())){(void)(([&]()->V{V _callee1033=this->_v_13_fail.get();return j::call(_callee1033,j::Args{([&]()->V{std::u16string _text1031;_text1031+=u"";_text1031+=j::string(_v_66_fn);_text1031+=u"()'s name takes one line, such as \"dashboard\", not ";_text1031+=j::string(([&]()->V{V _callee1032=this->_v_25_shown.get();return j::call(_callee1032,j::Args{j::get(_v_67_o,this->_literals[9])});})());_text1031+=u"";return V(std::move(_text1031));})()});})());
}
if(j::truth(([&]()->V{V _logical1034=([&]()->V{V _lhs1035=j::get(_v_67_o,this->_literals[10]);V _rhs1036=j::builtin("undefined");return V(!j::equal(_lhs1035,_rhs1036,true));})();return j::truth(_logical1034)?j::unary("!",([&]()->V{V _logical1037=([&]()->V{V _callee1038=this->_v_61_oneLine.get();return j::call(_callee1038,j::Args{j::get(_v_67_o,this->_literals[10])});})();return j::truth(_logical1037)?([&]()->V{V _lhs1039=j::get(j::get(_v_67_o,this->_literals[10]),this->_literals[11]);V _rhs1040=V(72.0);return j::binary("<=",_lhs1039,_rhs1040);})():_logical1037;})()):_logical1034;})())){(void)(([&]()->V{V _callee1043=this->_v_13_fail.get();return j::call(_callee1043,j::Args{([&]()->V{std::u16string _text1041;_text1041+=u"";_text1041+=j::string(_v_66_fn);_text1041+=u"()'s note takes one line of 1 to 72 characters saying what you see, not ";_text1041+=j::string(([&]()->V{V _callee1042=this->_v_25_shown.get();return j::call(_callee1042,j::Args{j::get(_v_67_o,this->_literals[10])});})());_text1041+=u"";return V(std::move(_text1041));})()});})());
}
return ([&]()->V{V _obj1044=j::object();V _spread1045=(j::truth(([&]()->V{V _lhs1046=j::get(_v_67_o,this->_literals[9]);V _rhs1047=j::builtin("undefined");return V(!j::equal(_lhs1046,_rhs1047,true));})())?([&]()->V{V _obj1048=j::object();j::put(_obj1048,this->_literals[9],([&]()->V{V _receiver1049=j::get(_v_67_o,this->_literals[9]);V _method1050=this->_literals[12];V _method=j::get(_receiver1049,_method1050);j::Args _params1051=j::Args{};return j::call(_method,_params1051,_receiver1049);})());return _obj1048;})():([&]()->V{V _obj1052=j::object();return _obj1052;})());for(const auto &_key:j::keys(_spread1045))j::put(_obj1044,_key,j::get(_spread1045,_key));V _spread1053=(j::truth(([&]()->V{V _lhs1054=j::get(_v_67_o,this->_literals[10]);V _rhs1055=j::builtin("undefined");return V(!j::equal(_lhs1054,_rhs1055,true));})())?([&]()->V{V _obj1056=j::object();j::put(_obj1056,this->_literals[10],j::get(_v_67_o,this->_literals[10]));return _obj1056;})():([&]()->V{V _obj1057=j::object();return _obj1057;})());for(const auto &_key:j::keys(_spread1053))j::put(_obj1044,_key,j::get(_spread1053,_key));return _obj1044;})();

}

return V{};
},2);
this->_v_68_loopOption.get()=j::function([=](const j::Args &_args_fn69,const V &_receiver_fn69,const V &_self_fn69) mutable ->V{
V _v_70_fn;
V _v_71_v;
_v_70_fn=_args_fn69[0];
_v_71_v=_args_fn69[1];
{
if(j::truth(([&]()->V{V _lhs1058=_v_71_v;V _rhs1059=j::builtin("undefined");return V(j::equal(_lhs1058,_rhs1059,true));})())){return j::builtin("undefined");
}
if(j::truth(([&]()->V{V _logical1060=([&]()->V{V _logical1061=j::unary("!",([&]()->V{V _callee1062=this->_v_31_finite.get();return j::call(_callee1062,j::Args{_v_71_v});})());return !j::truth(_logical1061)?([&]()->V{V _lhs1063=_v_71_v;V _rhs1064=V(0.05);return j::binary("<",_lhs1063,_rhs1064);})():_logical1061;})();return !j::truth(_logical1060)?([&]()->V{V _lhs1065=_v_71_v;V _rhs1066=V(60.0);return j::binary(">",_lhs1065,_rhs1066);})():_logical1060;})())){(void)(([&]()->V{V _callee1069=this->_v_13_fail.get();return j::call(_callee1069,j::Args{([&]()->V{std::u16string _text1067;_text1067+=u"";_text1067+=j::string(_v_70_fn);_text1067+=u"()'s loop takes seconds from 0.05 to 60, the loop it plays round on, not ";_text1067+=j::string(([&]()->V{V _callee1068=this->_v_25_shown.get();return j::call(_callee1068,j::Args{_v_71_v});})());_text1067+=u"";return V(std::move(_text1067));})()});})());
}
return ([&]()->V{V _lhs1070=([&]()->V{V _number1074=([&]()->V{V _lhs1075=_v_71_v;V _rhs1076=V(100.0);return V(j::number(_lhs1075)*j::number(_rhs1076));})();return V(std::floor(j::number(_number1074)+.5));})();V _rhs1071=V(100.0);return V(j::number(_lhs1070)/j::number(_rhs1071));})();

}

return V{};
},2);
this->_v_73_colorOf.get()=j::function([=](const j::Args &_args_fn74,const V &_receiver_fn74,const V &_self_fn74) mutable ->V{
V _v_75_v;
V _v_76_name;
_v_75_v=_args_fn74[0];
_v_76_name=_args_fn74[1];
{
if(j::truth(([&]()->V{V _lhs1077=_v_75_v;V _rhs1078=j::builtin("undefined");return V(j::equal(_lhs1077,_rhs1078,true));})())){return V::null();
}
if(j::truth(([&]()->V{V _callee1079=this->_v_15_isHex.get();return j::call(_callee1079,j::Args{_v_75_v});})())){return ([&]()->V{j::Args _array1080;_array1080.push_back(_v_75_v);return j::array(std::move(_array1080));})();
}
if(j::truth(([&]()->V{V _logical1081=([&]()->V{V _logical1082=([&]()->V{V _logical1083=([&]()->V{V _lhs1084=_v_75_v;V _rhs1085=V::null();return V(!j::equal(_lhs1084,_rhs1085,true));})();return j::truth(_logical1083)?([&]()->V{V _lhs1086=j::unary("typeof",_v_75_v);V _rhs1087=this->_literals[6];return V(j::equal(_lhs1086,_rhs1087,true));})():_logical1083;})();return j::truth(_logical1082)?([&]()->V{V _callee1088=this->_v_15_isHex.get();return j::call(_callee1088,j::Args{j::get(_v_75_v,this->_literals[13])});})():_logical1082;})();return j::truth(_logical1081)?([&]()->V{V _callee1089=this->_v_15_isHex.get();return j::call(_callee1089,j::Args{j::get(_v_75_v,this->_literals[14])});})():_logical1081;})())){return ([&]()->V{j::Args _array1090;_array1090.push_back(j::get(_v_75_v,this->_literals[13]));_array1090.push_back(j::get(_v_75_v,this->_literals[14]));return j::array(std::move(_array1090));})();
}
if(j::truth(([&]()->V{V _lhs1091=j::unary("typeof",_v_75_v);V _rhs1092=this->_literals[15];return V(j::equal(_lhs1091,_rhs1092,true));})())){
V _v_77_c;
_v_77_c=([&]()->V{V _callee1093=this->_v_12_inkOf.get();return j::call(_callee1093,j::Args{_v_75_v,_v_76_name});})();
return ([&]()->V{j::Args _array1094;_array1094.push_back(j::get(_v_77_c,this->_literals[13]));_array1094.push_back(j::get(_v_77_c,this->_literals[14]));return j::array(std::move(_array1094));})();

}

return ([&]()->V{V _callee1097=this->_v_13_fail.get();return j::call(_callee1097,j::Args{([&]()->V{std::u16string _text1095;_text1095+=u"";_text1095+=j::string(_v_76_name);_text1095+=u" takes #rrggbb, { light, dark }, or a palette's name such as \"ocean\", not ";_text1095+=j::string(([&]()->V{V _callee1096=this->_v_25_shown.get();return j::call(_callee1096,j::Args{_v_75_v});})());_text1095+=u"";return V(std::move(_text1095));})()});})();

}

return V{};
},2);
this->_v_93_prepare.get()=j::function([=](const j::Args &_args_fn94,const V &_receiver_fn94,const V &_self_fn94) mutable ->V{
V _v_95_fn;
V _v_96_v;
V _v_97_keys;
_v_95_fn=_args_fn94[0];
_v_96_v=_args_fn94[1];
V _default1098=_args_fn94[2];if(_default1098.kind==V::Undefined||_default1098.kind==V::Hole)_default1098=this->_v_72_CLIP.get();
_v_97_keys=_default1098;
{
V _v_98_clip;
V _v_99_given;
V _v_100_src;
V _v_101_p;
V _v_102_offset;
V _v_103_speed;
V _v_104_tint;
V _v_105_frames;
(void)((_v_96_v=([&]()->V{V _callee1100=this->_v_84_unwrap.get();return j::call(_callee1100,j::Args{_v_96_v});})()));
if(j::truth(([&]()->V{V _callee1101=this->_v_81_isClip.get();return j::call(_callee1101,j::Args{_v_96_v});})())){(void)(([&]()->V{V _callee1103=this->_v_54_object.get();return j::call(_callee1103,j::Args{_v_96_v,([&]()->V{std::u16string _text1102;_text1102+=u"";_text1102+=j::string(_v_95_fn);_text1102+=u"()'s part";return V(std::move(_text1102));})(),_v_97_keys});})());
}
_v_98_clip=(j::truth(([&]()->V{V _callee1104=this->_v_81_isClip.get();return j::call(_callee1104,j::Args{_v_96_v});})())?_v_96_v:([&]()->V{V _obj1105=j::object();j::put(_obj1105,this->_literals[16],_v_96_v);return _obj1105;})());
_v_99_given=([&]()->V{V _callee1106=this->_v_84_unwrap.get();return j::call(_callee1106,j::Args{j::get(_v_98_clip,this->_literals[16])});})();
_v_100_src=(j::truth(([&]()->V{V _lhs1107=j::unary("typeof",_v_99_given);V _rhs1108=this->_literals[15];return V(j::equal(_lhs1107,_rhs1108,true));})())?([&]()->V{V _receiver1109=_v_99_given;V _method1110=this->_literals[18];V _method=j::get(_receiver1109,_method1110);j::Args _params1111=j::Args{j::regexp(u"\\r\\n?","g"),this->_literals[17]};return j::call(_method,_params1111,_receiver1109);})():_v_99_given);
if(j::truth(j::unary("!",([&]()->V{V _logical1112=([&]()->V{V _logical1113=([&]()->V{V _lhs1114=j::unary("typeof",_v_100_src);V _rhs1115=this->_literals[15];return V(j::equal(_lhs1114,_rhs1115,true));})();return !j::truth(_logical1113)?([&]()->V{V _lhs1116=_v_100_src;V _rhs1117=this->_v_5_Surface.get();return j::binary("instanceof",_lhs1116,_rhs1117);})():_logical1113;})();return !j::truth(_logical1112)?([&]()->V{V _callee1118=this->_v_78_isPiece.get();return j::call(_callee1118,j::Args{_v_100_src});})():_logical1112;})()))){(void)(([&]()->V{V _callee1121=this->_v_13_fail.get();return j::call(_callee1121,j::Args{([&]()->V{std::u16string _text1119;_text1119+=u"";_text1119+=j::string(_v_95_fn);_text1119+=u"() takes pieces, text, Surfaces or { src } clips, not ";_text1119+=j::string(([&]()->V{V _callee1120=this->_v_25_shown.get();return j::call(_callee1120,j::Args{_v_100_src});})());_text1119+=u"";return V(std::move(_text1119));})()});})());
}
if(j::truth(([&]()->V{V _logical1122=([&]()->V{V _lhs1123=j::unary("typeof",_v_100_src);V _rhs1124=this->_literals[15];return V(j::equal(_lhs1123,_rhs1124,true));})();return j::truth(_logical1122)?([&]()->V{V _receiver1125=j::regexp(u"[\\ud800-\\udfff]","");V _method1126=this->_literals[19];V _method=j::get(_receiver1125,_method1126);j::Args _params1127=j::Args{_v_100_src};return j::call(_method,_params1127,_receiver1125);})():_logical1122;})())){(void)(([&]()->V{V _callee1135=this->_v_13_fail.get();return j::call(_callee1135,j::Args{([&]()->V{std::u16string _text1128;_text1128+=u"text takes characters from the Basic Multilingual Plane, one a cell, so not emoji: ";_text1128+=j::string(([&]()->V{V _receiver1132=j::builtin("JSON");V _method1133=this->_literals[4];V _method=j::get(_receiver1132,_method1133);j::Args _params1134=j::Args{([&]()->V{V _receiver1129=_v_100_src;V _method1130=this->_literals[20];V _method=j::get(_receiver1129,_method1130);j::Args _params1131=j::Args{V(0.0),V(24.0)};return j::call(_method,_params1131,_receiver1129);})()};return j::call(_method,_params1134,_receiver1132);})());_text1128+=u"";return V(std::move(_text1128));})()});})());
}
_v_101_p=([&]()->V{V _callee1139=this->_v_7_asPiece.get();return j::call(_callee1139,j::Args{_v_100_src,(j::truth(([&]()->V{V _lhs1136=j::unary("typeof",_v_100_src);V _rhs1137=this->_literals[15];return V(j::equal(_lhs1136,_rhs1137,true));})())?([&]()->V{V _callee1138=this->_v_87_textName.get();return j::call(_callee1138,j::Args{_v_100_src});})():this->_literals[21])});})();
if(j::truth(([&]()->V{V _logical1140=([&]()->V{V _lhs1141=j::get(_v_98_clip,this->_literals[22]);V _rhs1142=j::builtin("undefined");return V(!j::equal(_lhs1141,_rhs1142,true));})();return j::truth(_logical1140)?([&]()->V{V _logical1143=([&]()->V{V _logical1144=([&]()->V{V _lhs1145=j::get(_v_98_clip,this->_literals[22]);V _rhs1146=V::null();return V(j::equal(_lhs1145,_rhs1146,true));})();return !j::truth(_logical1144)?([&]()->V{V _lhs1147=j::unary("typeof",j::get(_v_98_clip,this->_literals[22]));V _rhs1148=this->_literals[6];return V(!j::equal(_lhs1147,_rhs1148,true));})():_logical1144;})();return !j::truth(_logical1143)?([&]()->V{V _receiver1149=j::builtin("Array");V _method1150=this->_literals[7];V _method=j::get(_receiver1149,_method1150);j::Args _params1151=j::Args{j::get(_v_98_clip,this->_literals[22])};return j::call(_method,_params1151,_receiver1149);})():_logical1143;})():_logical1140;})())){(void)(([&]()->V{V _callee1154=this->_v_13_fail.get();return j::call(_callee1154,j::Args{([&]()->V{std::u16string _text1152;_text1152+=u"a clip's options take an object of the piece's options, not ";_text1152+=j::string(([&]()->V{V _callee1153=this->_v_25_shown.get();return j::call(_callee1153,j::Args{j::get(_v_98_clip,this->_literals[22])});})());_text1152+=u"";return V(std::move(_text1152));})()});})());
}
_v_102_offset=(j::truth(([&]()->V{V _lhs1155=j::get(_v_98_clip,this->_literals[23]);V _rhs1156=j::builtin("undefined");return V(j::equal(_lhs1155,_rhs1156,true));})())?V(0.0):(j::truth(([&]()->V{V _callee1157=this->_v_31_finite.get();return j::call(_callee1157,j::Args{j::get(_v_98_clip,this->_literals[23])});})())?j::get(_v_98_clip,this->_literals[23]):([&]()->V{V _callee1160=this->_v_13_fail.get();return j::call(_callee1160,j::Args{([&]()->V{std::u16string _text1158;_text1158+=u"a clip's offset takes a number of seconds, not ";_text1158+=j::string(([&]()->V{V _callee1159=this->_v_25_shown.get();return j::call(_callee1159,j::Args{j::get(_v_98_clip,this->_literals[23])});})());_text1158+=u"";return V(std::move(_text1158));})()});})()));
_v_103_speed=(j::truth(([&]()->V{V _lhs1161=j::get(_v_98_clip,this->_literals[24]);V _rhs1162=j::builtin("undefined");return V(j::equal(_lhs1161,_rhs1162,true));})())?V(1.0):(j::truth(([&]()->V{V _logical1163=([&]()->V{V _callee1164=this->_v_31_finite.get();return j::call(_callee1164,j::Args{j::get(_v_98_clip,this->_literals[24])});})();return j::truth(_logical1163)?([&]()->V{V _lhs1165=j::get(_v_98_clip,this->_literals[24]);V _rhs1166=V(0.0);return j::binary(">",_lhs1165,_rhs1166);})():_logical1163;})())?j::get(_v_98_clip,this->_literals[24]):([&]()->V{V _callee1169=this->_v_13_fail.get();return j::call(_callee1169,j::Args{([&]()->V{std::u16string _text1167;_text1167+=u"a clip's speed takes a number above 0, not ";_text1167+=j::string(([&]()->V{V _callee1168=this->_v_25_shown.get();return j::call(_callee1168,j::Args{j::get(_v_98_clip,this->_literals[24])});})());_text1167+=u"";return V(std::move(_text1167));})()});})()));
_v_104_tint=([&]()->V{V _callee1170=this->_v_73_colorOf.get();return j::call(_callee1170,j::Args{j::get(_v_98_clip,this->_literals[25]),this->_literals[26]});})();
_v_105_frames=([&]()->V{V _lhs1171=j::get(_v_100_src,this->_literals[27]);V _rhs1172=V(true);return V(j::equal(_lhs1171,_rhs1172,true));})();
return ([&]()->V{V _obj1173=j::object();j::put(_obj1173,this->_literals[28],_v_101_p);j::put(_obj1173,this->_literals[29],j::get(_v_101_p,this->_literals[29]));j::put(_obj1173,this->_literals[22],([&]()->V{V _obj1174=j::object();V _spread1175=j::get(_v_98_clip,this->_literals[22]);for(const auto &_key:j::keys(_spread1175))j::put(_obj1174,_key,j::get(_spread1175,_key));return _obj1174;})());j::put(_obj1173,this->_literals[23],_v_102_offset);j::put(_obj1173,this->_literals[24],_v_103_speed);j::put(_obj1173,this->_literals[30],_v_104_tint);j::put(_obj1173,this->_literals[31],V(0.0));j::put(_obj1173,this->_literals[32],j::get(j::get(_v_101_p,this->_literals[29]),this->_literals[32]));j::put(_obj1173,this->_literals[33],j::get(j::get(_v_101_p,this->_literals[29]),this->_literals[33]));j::put(_obj1173,this->_literals[27],_v_105_frames);return _obj1173;})();

}

return V{};
},2);
this->_v_106_fit.get()=j::function([=](const j::Args &_args_fn107,const V &_receiver_fn107,const V &_self_fn107) mutable ->V{
V _v_108_p;
V _v_109_cell;
_v_108_p=_args_fn107[0];
_v_109_cell=_args_fn107[1];
{
V _v_110_own;
_v_110_own=([&]()->V{V _logical1176=j::get(j::get(_v_108_p,this->_literals[29]),this->_literals[34]);return j::nullish(_logical1176)?V(2.0):_logical1176;})();
(void)(([&]()->V{V _base1178=_v_108_p;V _key1179=this->_literals[31];V _assign1177=(j::truth(([&]()->V{V _lhs1180=_v_110_own;V _rhs1181=_v_109_cell;return V(j::equal(_lhs1180,_rhs1181,true));})())?V(0.0):(j::truth(([&]()->V{V _lhs1182=_v_110_own;V _rhs1183=_v_109_cell;return j::binary(">",_lhs1182,_rhs1183);})())?V(1.0):j::unary("-",V(1.0))));return j::put(_base1178,_key1179,_assign1177);})());
(void)(([&]()->V{V _base1185=_v_108_p;V _key1186=this->_literals[33];V _assign1184=(j::truth(([&]()->V{V _lhs1187=j::get(_v_108_p,this->_literals[31]);V _rhs1188=V(0.0);return j::binary(">",_lhs1187,_rhs1188);})())?([&]()->V{V _lhs1189=j::get(j::get(_v_108_p,this->_literals[29]),this->_literals[33]);V _rhs1190=V(2.0);return V(j::number(_lhs1189)*j::number(_rhs1190));})():(j::truth(([&]()->V{V _lhs1191=j::get(_v_108_p,this->_literals[31]);V _rhs1192=V(0.0);return j::binary("<",_lhs1191,_rhs1192);})())?([&]()->V{V _number1195=([&]()->V{V _lhs1196=j::get(j::get(_v_108_p,this->_literals[29]),this->_literals[33]);V _rhs1197=V(2.0);return V(j::number(_lhs1196)/j::number(_rhs1197));})();return V(std::ceil(j::number(_number1195)));})():j::get(j::get(_v_108_p,this->_literals[29]),this->_literals[33])));return j::put(_base1185,_key1186,_assign1184);})());
return _v_108_p;

}

return V{};
},2);
this->_v_111_list.get()=j::function([=](const j::Args &_args_fn112,const V &_receiver_fn112,const V &_self_fn112) mutable ->V{
j::Cell _v_113_fn;
V _v_114_parts;
j::Cell _v_115_keys;
_v_113_fn.get()=_args_fn112[0];
_v_114_parts=_args_fn112[1];
V _default1198=_args_fn112[2];if(_default1198.kind==V::Undefined||_default1198.kind==V::Hole)_default1198=this->_v_72_CLIP.get();
_v_115_keys.get()=_default1198;
{
V _v_116_all;
if(j::truth(([&]()->V{V _logical1199=j::unary("!",([&]()->V{V _receiver1200=j::builtin("Array");V _method1201=this->_literals[7];V _method=j::get(_receiver1200,_method1201);j::Args _params1202=j::Args{_v_114_parts};return j::call(_method,_params1202,_receiver1200);})());return !j::truth(_logical1199)?j::unary("!",j::get(_v_114_parts,this->_literals[11])):_logical1199;})())){(void)(([&]()->V{V _callee1204=this->_v_13_fail.get();return j::call(_callee1204,j::Args{([&]()->V{std::u16string _text1203;_text1203+=u"";_text1203+=j::string(_v_113_fn.get());_text1203+=u"() takes a list of one or more parts: pieces, text, Surfaces or { src } clips";return V(std::move(_text1203));})()});})());
}
_v_116_all=([&]()->V{V _receiver1206=_v_114_parts;V _method1207=this->_literals[5];V _method=j::get(_receiver1206,_method1207);j::Args _params1208=j::Args{j::function([=](const j::Args &_args_fn117,const V &_receiver_fn117,const V &_self_fn117) mutable ->V{
V _v_118_v;
_v_118_v=_args_fn117[0];
return ([&]()->V{V _callee1205=this->_v_93_prepare.get();return j::call(_callee1205,j::Args{_v_113_fn.get(),_v_118_v,_v_115_keys.get()});})();
return V{};
},1)};return j::call(_method,_params1208,_receiver1206);})();
{for(const auto &_item1209:j::elements(_v_116_all)){V _v_119_p;
_v_119_p=_item1209;
(void)(([&]()->V{V _callee1211=this->_v_106_fit.get();return j::call(_callee1211,j::Args{_v_119_p,([&]()->V{V _logical1210=j::get(j::get(j::get(_v_116_all,V(0.0)),this->_literals[29]),this->_literals[34]);return j::nullish(_logical1210)?V(2.0):_logical1210;})()});})());
}}
return _v_116_all;

}

return V{};
},2);
this->_v_124_merge.get()=j::function([=](const j::Args &_args_fn125,const V &_receiver_fn125,const V &_self_fn125) mutable ->V{
V _v_126_parts;
V _v_127_extra;
V _v_128_plain;
_v_126_parts=_args_fn125[0];
V _default1212=_args_fn125[1];if(_default1212.kind==V::Undefined||_default1212.kind==V::Hole)_default1212=([&]()->V{j::Args _array1213;return j::array(std::move(_array1213));})();
_v_127_extra=_default1212;
V _default1214=_args_fn125[2];if(_default1214.kind==V::Undefined||_default1214.kind==V::Hole)_default1214=V(false);
_v_128_plain=_default1214;
{
V _v_129_lists;
_v_129_lists=([&]()->V{V _receiver1216=_v_126_parts;V _method1217=this->_literals[5];V _method=j::get(_receiver1216,_method1217);j::Args _params1218=j::Args{j::function([=](const j::Args &_args_fn130,const V &_receiver_fn130,const V &_self_fn130) mutable ->V{
V _v_131_p;
_v_131_p=_args_fn130[0];
return ([&]()->V{V _logical1215=j::get(_v_131_p,this->_literals[30]);return j::nullish(_logical1215)?j::get(j::get(_v_131_p,this->_literals[29]),this->_literals[35]):_logical1215;})();
return V{};
},1)};return j::call(_method,_params1218,_receiver1216);})();
if(j::truth(j::get(_v_127_extra,this->_literals[11]))){(void)(([&]()->V{V _receiver1219=_v_129_lists;V _method1220=this->_literals[36];V _method=j::get(_receiver1219,_method1220);j::Args _params1221=j::Args{_v_127_extra};return j::call(_method,_params1221,_receiver1219);})());
}
if(j::truth(_v_128_plain)){(void)(([&]()->V{V _receiver1222=_v_129_lists;V _method1223=this->_literals[36];V _method=j::get(_receiver1222,_method1223);j::Args _params1224=j::Args{j::builtin("undefined")};return j::call(_method,_params1224,_receiver1222);})());
}
{try {
return ([&]()->V{V _callee1225=this->_v_16_mergePalettes.get();return j::call(_callee1225,j::Args{_v_129_lists});})();

}
catch(const std::exception &_error1226){{
j::Cell _v_132_all;
j::Cell _v_133_seen;
j::Cell _v_134_add;
V _v_138_idx;
V _v_141_inked;
j::Cell _v_144_n;
j::Cell _v_145_values;
j::Cell _v_146_into;
j::Cell _v_150_alive;
j::Cell _v_151_near;
j::Cell _v_152_gap;
V _v_153_look;
V _v_168_kept;
j::Cell _v_172_at;
j::Cell _v_176_to;
_v_132_all.get()=([&]()->V{j::Args _array1227;return j::array(std::move(_array1227));})();
_v_133_seen.get()=([&]()->V{V _callee1228=j::builtin("Map");return j::construct(_callee1228,j::Args{});})();
_v_134_add.get()=j::function([=](const j::Args &_args_fn135,const V &_receiver_fn135,const V &_self_fn135) mutable ->V{
V _v_136_c;
_v_136_c=_args_fn135[0];
{
V _v_137_k;
_v_137_k=([&]()->V{V _receiver1229=_v_136_c;V _method1230=this->_literals[37];V _method=j::get(_receiver1229,_method1230);j::Args _params1231=j::Args{};return j::call(_method,_params1231,_receiver1229);})();
if(j::truth(j::unary("!",([&]()->V{V _receiver1232=_v_133_seen.get();V _method1233=this->_literals[38];V _method=j::get(_receiver1232,_method1233);j::Args _params1234=j::Args{_v_137_k};return j::call(_method,_params1234,_receiver1232);})()))){(void)(([&]()->V{V _receiver1240=_v_133_seen.get();V _method1241=this->_literals[39];V _method=j::get(_receiver1240,_method1241);j::Args _params1242=j::Args{_v_137_k,([&]()->V{V _lhs1235=([&]()->V{V _receiver1237=_v_132_all.get();V _method1238=this->_literals[36];V _method=j::get(_receiver1237,_method1238);j::Args _params1239=j::Args{_v_136_c};return j::call(_method,_params1239,_receiver1237);})();V _rhs1236=V(1.0);return V(j::number(_lhs1235)-j::number(_rhs1236));})()};return j::call(_method,_params1242,_receiver1240);})());
}
return ([&]()->V{V _receiver1243=_v_133_seen.get();V _method1244=this->_literals[40];V _method=j::get(_receiver1243,_method1244);j::Args _params1245=j::Args{_v_137_k};return j::call(_method,_params1245,_receiver1243);})();

}

return V{};
},1);
_v_138_idx=([&]()->V{V _receiver1251=_v_129_lists;V _method1252=this->_literals[5];V _method=j::get(_receiver1251,_method1252);j::Args _params1253=j::Args{j::function([=](const j::Args &_args_fn139,const V &_receiver_fn139,const V &_self_fn139) mutable ->V{
V _v_140_p;
_v_140_p=_args_fn139[0];
return ([&]()->V{V _receiver1246=([&]()->V{V _logical1249=_v_140_p;return j::nullish(_logical1249)?([&]()->V{j::Args _array1250;return j::array(std::move(_array1250));})():_logical1249;})();V _method1247=this->_literals[5];V _method=j::get(_receiver1246,_method1247);j::Args _params1248=j::Args{_v_134_add.get()};return j::call(_method,_params1248,_receiver1246);})();
return V{};
},1)};return j::call(_method,_params1253,_receiver1251);})();
_v_141_inked=(j::truth(([&]()->V{V _receiver1254=_v_129_lists;V _method1255=this->_literals[41];V _method=j::get(_receiver1254,_method1255);j::Args _params1256=j::Args{j::function([=](const j::Args &_args_fn142,const V &_receiver_fn142,const V &_self_fn142) mutable ->V{
V _v_143_p;
_v_143_p=_args_fn142[0];
return j::unary("!",_v_143_p);
return V{};
},1)};return j::call(_method,_params1256,_receiver1254);})())?([&]()->V{V _obj1257=j::object();j::put(_obj1257,this->_literals[13],([&]()->V{V _callee1258=_v_134_add.get();return j::call(_callee1258,j::Args{j::get(this->_v_2_INK.get(),this->_literals[13])});})());j::put(_obj1257,this->_literals[14],([&]()->V{V _callee1259=_v_134_add.get();return j::call(_callee1259,j::Args{j::get(this->_v_2_INK.get(),this->_literals[14])});})());return _obj1257;})():V::null());
_v_144_n.get()=j::get(_v_132_all.get(),this->_literals[11]);
_v_145_values.get()=([&]()->V{V _receiver1260=_v_132_all.get();V _method1261=this->_literals[5];V _method=j::get(_receiver1260,_method1261);j::Args _params1262=j::Args{this->_v_19_rgb.get()};return j::call(_method,_params1262,_receiver1260);})();
_v_146_into.get()=([&]()->V{V _receiver1263=_v_132_all.get();V _method1264=this->_literals[5];V _method=j::get(_receiver1263,_method1264);j::Args _params1265=j::Args{j::function([=](const j::Args &_args_fn147,const V &_receiver_fn147,const V &_self_fn147) mutable ->V{
V _v_148__;
V _v_149_i;
_v_148__=_args_fn147[0];
_v_149_i=_args_fn147[1];
return _v_149_i;
return V{};
},2)};return j::call(_method,_params1265,_receiver1263);})();
_v_150_alive.get()=([&]()->V{V _receiver1266=([&]()->V{V _callee1269=j::builtin("Uint8Array");return j::construct(_callee1269,j::Args{_v_144_n.get()});})();V _method1267=this->_literals[42];V _method=j::get(_receiver1266,_method1267);j::Args _params1268=j::Args{V(1.0)};return j::call(_method,_params1268,_receiver1266);})();
_v_151_near.get()=([&]()->V{V _callee1270=j::builtin("Int32Array");return j::construct(_callee1270,j::Args{_v_144_n.get()});})();
_v_152_gap.get()=([&]()->V{V _callee1271=j::builtin("Float64Array");return j::construct(_callee1271,j::Args{_v_144_n.get()});})();
_v_153_look=j::function([=](const j::Args &_args_fn154,const V &_receiver_fn154,const V &_self_fn154) mutable ->V{
V _v_155_i;
_v_155_i=_args_fn154[0];
{
V _v_156_best;
V _v_157_at;
_v_156_best=j::builtin("Infinity");
_v_157_at=j::unary("-",V(1.0));
{V _v_158_j;
_v_158_j=V(0.0);
for(;j::truth(([&]()->V{V _lhs1272=_v_158_j;V _rhs1273=_v_144_n.get();return j::binary("<",_lhs1272,_rhs1273);})());(void)(j::increment(_v_158_j,1,false))){if(j::truth(([&]()->V{V _logical1274=([&]()->V{V _lhs1275=_v_158_j;V _rhs1276=_v_155_i;return V(!j::equal(_lhs1275,_rhs1276,true));})();return j::truth(_logical1274)?j::get(_v_150_alive.get(),_v_158_j):_logical1274;})())){
V _v_159_d;
_v_159_d=([&]()->V{V _callee1277=this->_v_120_apart.get();return j::call(_callee1277,j::Args{j::get(_v_145_values.get(),_v_155_i),j::get(_v_145_values.get(),_v_158_j)});})();
if(j::truth(([&]()->V{V _lhs1278=_v_159_d;V _rhs1279=_v_156_best;return j::binary("<",_lhs1278,_rhs1279);})())){(void)(((_v_156_best=_v_159_d),(_v_157_at=_v_158_j)));
}

}

}}
(void)(([&]()->V{V _base1283=_v_151_near.get();V _key1284=_v_155_i;V _assign1282=_v_157_at;return j::put(_base1283,_key1284,_assign1282);})());
(void)(([&]()->V{V _base1286=_v_152_gap.get();V _key1287=_v_155_i;V _assign1285=_v_156_best;return j::put(_base1286,_key1287,_assign1285);})());

}

return V{};
},1);
{V _v_160_i;
_v_160_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1288=_v_160_i;V _rhs1289=_v_144_n.get();return j::binary("<",_lhs1288,_rhs1289);})());(void)(j::increment(_v_160_i,1,false))){(void)(([&]()->V{V _callee1290=_v_153_look;return j::call(_callee1290,j::Args{_v_160_i});})());
}}
{V _v_161_left;
_v_161_left=_v_144_n.get();
for(;j::truth(([&]()->V{V _lhs1291=_v_161_left;V _rhs1292=V(64.0);return j::binary(">",_lhs1291,_rhs1292);})());(void)(j::increment(_v_161_left,-1,false))){
V _v_162_a;
V _v_164_keep;
V _v_165_drop;
_v_162_a=j::unary("-",V(1.0));
{V _v_163_i;
_v_163_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1293=_v_163_i;V _rhs1294=_v_144_n.get();return j::binary("<",_lhs1293,_rhs1294);})());(void)(j::increment(_v_163_i,1,false))){if(j::truth(([&]()->V{V _logical1295=j::get(_v_150_alive.get(),_v_163_i);return j::truth(_logical1295)?([&]()->V{V _logical1296=([&]()->V{V _lhs1297=_v_162_a;V _rhs1298=V(0.0);return j::binary("<",_lhs1297,_rhs1298);})();return !j::truth(_logical1296)?([&]()->V{V _lhs1299=j::get(_v_152_gap.get(),_v_163_i);V _rhs1300=j::get(_v_152_gap.get(),_v_162_a);return j::binary("<",_lhs1299,_rhs1300);})():_logical1296;})():_logical1295;})())){(void)((_v_162_a=_v_163_i));
}
}}
_v_164_keep=([&]()->V{V _receiver1304=j::builtin("Math");V _method1305=this->_literals[43];V _method=j::get(_receiver1304,_method1305);j::Args _params1306=j::Args{_v_162_a,j::get(_v_151_near.get(),_v_162_a)};return j::call(_method,_params1306,_receiver1304);})();
_v_165_drop=([&]()->V{V _receiver1309=j::builtin("Math");V _method1310=this->_literals[44];V _method=j::get(_receiver1309,_method1310);j::Args _params1311=j::Args{_v_162_a,j::get(_v_151_near.get(),_v_162_a)};return j::call(_method,_params1311,_receiver1309);})();
(void)(([&]()->V{V _base1313=_v_150_alive.get();V _key1314=_v_165_drop;V _assign1312=V(0.0);return j::put(_base1313,_key1314,_assign1312);})());
{V _v_166_i;
_v_166_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1315=_v_166_i;V _rhs1316=_v_144_n.get();return j::binary("<",_lhs1315,_rhs1316);})());(void)(j::increment(_v_166_i,1,false))){if(j::truth(([&]()->V{V _lhs1317=j::get(_v_146_into.get(),_v_166_i);V _rhs1318=_v_165_drop;return V(j::equal(_lhs1317,_rhs1318,true));})())){(void)(([&]()->V{V _base1320=_v_146_into.get();V _key1321=_v_166_i;V _assign1319=_v_164_keep;return j::put(_base1320,_key1321,_assign1319);})());
}
}}
{V _v_167_i;
_v_167_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1322=_v_167_i;V _rhs1323=_v_144_n.get();return j::binary("<",_lhs1322,_rhs1323);})());(void)(j::increment(_v_167_i,1,false))){if(j::truth(([&]()->V{V _logical1324=j::get(_v_150_alive.get(),_v_167_i);return j::truth(_logical1324)?([&]()->V{V _lhs1325=j::get(_v_151_near.get(),_v_167_i);V _rhs1326=_v_165_drop;return V(j::equal(_lhs1325,_rhs1326,true));})():_logical1324;})())){(void)(([&]()->V{V _callee1327=_v_153_look;return j::call(_callee1327,j::Args{_v_167_i});})());
}
}}

}
}
_v_168_kept=([&]()->V{V _receiver1330=_v_146_into.get();V _method1331=this->_literals[45];V _method=j::get(_receiver1330,_method1331);j::Args _params1332=j::Args{j::function([=](const j::Args &_args_fn169,const V &_receiver_fn169,const V &_self_fn169) mutable ->V{
V _v_170_v;
V _v_171_i;
_v_170_v=_args_fn169[0];
_v_171_i=_args_fn169[1];
return ([&]()->V{V _lhs1328=_v_170_v;V _rhs1329=_v_171_i;return V(j::equal(_lhs1328,_rhs1329,true));})();
return V{};
},2)};return j::call(_method,_params1332,_receiver1330);})();
_v_172_at.get()=([&]()->V{V _callee1337=j::builtin("Map");return j::construct(_callee1337,j::Args{([&]()->V{V _receiver1334=_v_168_kept;V _method1335=this->_literals[5];V _method=j::get(_receiver1334,_method1335);j::Args _params1336=j::Args{j::function([=](const j::Args &_args_fn173,const V &_receiver_fn173,const V &_self_fn173) mutable ->V{
V _v_174_c;
V _v_175_i;
_v_174_c=_args_fn173[0];
_v_175_i=_args_fn173[1];
return ([&]()->V{j::Args _array1333;_array1333.push_back(_v_174_c);_array1333.push_back(_v_175_i);return j::array(std::move(_array1333));})();
return V{};
},2)};return j::call(_method,_params1336,_receiver1334);})()});})();
_v_176_to.get()=j::function([=](const j::Args &_args_fn177,const V &_receiver_fn177,const V &_self_fn177) mutable ->V{
V _v_178_i;
_v_178_i=_args_fn177[0];
return ([&]()->V{V _receiver1338=_v_172_at.get();V _method1339=this->_literals[40];V _method=j::get(_receiver1338,_method1339);j::Args _params1340=j::Args{j::get(_v_146_into.get(),_v_178_i)};return j::call(_method,_params1340,_receiver1338);})();
return V{};
},1);
return ([&]()->V{V _obj1341=j::object();j::put(_obj1341,this->_literals[35],([&]()->V{V _receiver1342=_v_168_kept;V _method1343=this->_literals[5];V _method=j::get(_receiver1342,_method1343);j::Args _params1344=j::Args{j::function([=](const j::Args &_args_fn179,const V &_receiver_fn179,const V &_self_fn179) mutable ->V{
V _v_180_i;
_v_180_i=_args_fn179[0];
return j::get(_v_132_all.get(),_v_180_i);
return V{};
},1)};return j::call(_method,_params1344,_receiver1342);})());j::put(_obj1341,this->_literals[46],([&]()->V{V _receiver1348=_v_138_idx;V _method1349=this->_literals[5];V _method=j::get(_receiver1348,_method1349);j::Args _params1350=j::Args{j::function([=](const j::Args &_args_fn181,const V &_receiver_fn181,const V &_self_fn181) mutable ->V{
V _v_182_list;
_v_182_list=_args_fn181[0];
return ([&]()->V{V _receiver1345=j::builtin("Uint8Array");V _method1346=this->_literals[47];V _method=j::get(_receiver1345,_method1346);j::Args _params1347=j::Args{_v_182_list,_v_176_to.get()};return j::call(_method,_params1347,_receiver1345);})();
return V{};
},1)};return j::call(_method,_params1350,_receiver1348);})());j::put(_obj1341,this->_literals[48],([&]()->V{V _logical1351=_v_141_inked;return j::truth(_logical1351)?([&]()->V{V _obj1352=j::object();j::put(_obj1352,this->_literals[13],([&]()->V{V _callee1353=_v_176_to.get();return j::call(_callee1353,j::Args{j::get(_v_141_inked,this->_literals[13])});})());j::put(_obj1352,this->_literals[14],([&]()->V{V _callee1354=_v_176_to.get();return j::call(_callee1354,j::Args{j::get(_v_141_inked,this->_literals[14])});})());return _obj1352;})():_logical1351;})());return _obj1341;})();

}
}}

}

return V{};
},1);
this->_v_184_period.get()=j::function([=](const j::Args &_args_fn185,const V &_receiver_fn185,const V &_self_fn185) mutable ->V{
V _v_186_p;
_v_186_p=_args_fn185[0];
{
V _v_187_meta;
V _v_188_loop;
V _pattern1355=_v_186_p;
_v_187_meta=j::get(_pattern1355,this->_literals[29]);
if(j::truth(j::unary("!",j::get(_v_187_meta,this->_literals[49])))){return V(0.0);
}
if(j::truth(([&]()->V{V _lhs1356=j::get(_v_186_p,this->_literals[23]);V _rhs1357=V(0.0);return j::binary("<",_lhs1356,_rhs1357);})())){return j::builtin("undefined");
}
_v_188_loop=j::get(_v_187_meta,this->_literals[50]);
if(j::truth(([&]()->V{V _logical1358=([&]()->V{V _lhs1359=_v_188_loop;V _rhs1360=j::builtin("undefined");return V(j::equal(_lhs1359,_rhs1360,true));})();return j::truth(_logical1358)?j::get(this->_v_183_LOOPS.get(),j::get(_v_187_meta,this->_literals[51])):_logical1358;})())){
V _v_189_every;
_v_189_every=j::get(([&]()->V{V _obj1361=j::object();V _spread1362=j::get(_v_187_meta,this->_literals[22]);for(const auto &_key:j::keys(_spread1362))j::put(_obj1361,_key,j::get(_spread1362,_key));V _spread1363=j::get(_v_186_p,this->_literals[22]);for(const auto &_key:j::keys(_spread1363))j::put(_obj1361,_key,j::get(_spread1363,_key));return _obj1361;})(),j::get(this->_v_183_LOOPS.get(),j::get(_v_187_meta,this->_literals[51])));
if(j::truth(([&]()->V{V _logical1364=([&]()->V{V _callee1365=this->_v_31_finite.get();return j::call(_callee1365,j::Args{_v_189_every});})();return j::truth(_logical1364)?([&]()->V{V _lhs1366=_v_189_every;V _rhs1367=V(0.0);return j::binary(">",_lhs1366,_rhs1367);})():_logical1364;})())){(void)((_v_188_loop=_v_189_every));
}

}

return (j::truth(([&]()->V{V _lhs1369=_v_188_loop;V _rhs1370=j::builtin("undefined");return V(j::equal(_lhs1369,_rhs1370,true));})())?j::builtin("undefined"):([&]()->V{V _lhs1371=_v_188_loop;V _rhs1372=j::get(_v_186_p,this->_literals[24]);return V(j::number(_lhs1371)/j::number(_rhs1372));})());

}

return V{};
},1);
this->_v_194_together.get()=j::function([=](const j::Args &_args_fn195,const V &_receiver_fn195,const V &_self_fn195) mutable ->V{
V _v_196_periods;
_v_196_periods=_args_fn195[0];
{
V _v_197_l;
_v_197_l=V(0.0);
{for(const auto &_item1373:j::elements(_v_196_periods)){V _v_198_p;
_v_198_p=_item1373;
{
V _v_199_h;
if(j::truth(([&]()->V{V _lhs1374=_v_198_p;V _rhs1375=V(0.0);return V(j::equal(_lhs1374,_rhs1375,true));})())){continue;
}
if(j::truth(([&]()->V{V _lhs1376=_v_198_p;V _rhs1377=j::builtin("undefined");return V(j::equal(_lhs1376,_rhs1377,true));})())){return j::builtin("undefined");
}
_v_199_h=([&]()->V{V _number1380=([&]()->V{V _lhs1381=_v_198_p;V _rhs1382=V(100.0);return V(j::number(_lhs1381)*j::number(_rhs1382));})();return V(std::floor(j::number(_number1380)+.5));})();
if(j::truth(([&]()->V{V _logical1383=([&]()->V{V _lhs1384=_v_199_h;V _rhs1385=V(1.0);return j::binary("<",_lhs1384,_rhs1385);})();return !j::truth(_logical1383)?([&]()->V{V _lhs1386=([&]()->V{V _number1392=([&]()->V{V _lhs1393=_v_199_h;V _rhs1394=([&]()->V{V _lhs1395=_v_198_p;V _rhs1396=V(100.0);return V(j::number(_lhs1395)*j::number(_rhs1396));})();return V(j::number(_lhs1393)-j::number(_rhs1394));})();return V(std::fabs(j::number(_number1392)));})();V _rhs1387=V(0.000001);return j::binary(">",_lhs1386,_rhs1387);})():_logical1383;})())){return j::builtin("undefined");
}
(void)((_v_197_l=(j::truth(_v_197_l)?([&]()->V{V _lhs1398=([&]()->V{V _lhs1400=_v_197_l;V _rhs1401=([&]()->V{V _callee1402=this->_v_190_gcd.get();return j::call(_callee1402,j::Args{_v_197_l,_v_199_h});})();return V(j::number(_lhs1400)/j::number(_rhs1401));})();V _rhs1399=_v_199_h;return V(j::number(_lhs1398)*j::number(_rhs1399));})():_v_199_h)));
if(j::truth(([&]()->V{V _lhs1403=_v_197_l;V _rhs1404=V(6000.0);return j::binary(">",_lhs1403,_rhs1404);})())){return j::builtin("undefined");
}

}
}}
return (j::truth(_v_197_l)?([&]()->V{V _lhs1405=_v_197_l;V _rhs1406=V(100.0);return V(j::number(_lhs1405)/j::number(_rhs1406));})():j::builtin("undefined"));

}

return V{};
},1);
this->_v_203_stillOf.get()=j::function([=](const j::Args &_args_fn204,const V &_receiver_fn204,const V &_self_fn204) mutable ->V{
V _v_205_parts;
_v_205_parts=_args_fn204[0];
{
V _v_206_at;
{for(const auto &_item1407:j::elements(_v_205_parts)){V _v_207_p;
_v_207_p=_item1407;
if(j::truth(([&]()->V{V _logical1408=([&]()->V{V _lhs1409=j::get(j::get(_v_207_p,this->_literals[29]),this->_literals[52]);V _rhs1410=j::builtin("undefined");return V(!j::equal(_lhs1409,_rhs1410,true));})();return j::truth(_logical1408)?j::get(j::get(_v_207_p,this->_literals[29]),this->_literals[49]):_logical1408;})())){
V _v_208_s;
_v_208_s=([&]()->V{V _lhs1411=([&]()->V{V _lhs1413=j::get(j::get(_v_207_p,this->_literals[29]),this->_literals[52]);V _rhs1414=j::get(_v_207_p,this->_literals[23]);return V(j::number(_lhs1413)-j::number(_rhs1414));})();V _rhs1412=j::get(_v_207_p,this->_literals[24]);return V(j::number(_lhs1411)/j::number(_rhs1412));})();
if(j::truth(([&]()->V{V _logical1415=([&]()->V{V _lhs1416=_v_208_s;V _rhs1417=V(0.0);return j::binary(">=",_lhs1416,_rhs1417);})();return j::truth(_logical1415)?([&]()->V{V _logical1418=([&]()->V{V _lhs1419=_v_206_at;V _rhs1420=j::builtin("undefined");return V(j::equal(_lhs1419,_rhs1420,true));})();return !j::truth(_logical1418)?([&]()->V{V _lhs1421=_v_208_s;V _rhs1422=_v_206_at;return j::binary(">",_lhs1421,_rhs1422);})():_logical1418;})():_logical1415;})())){(void)((_v_206_at=_v_208_s));
}

}

}}
return ([&]()->V{V _logical1424=_v_206_at;return !j::truth(_logical1424)?j::builtin("undefined"):_logical1424;})();

}

return V{};
},1);
this->_v_209_groundOf.get()=j::function([=](const j::Args &_args_fn210,const V &_receiver_fn210,const V &_self_fn210) mutable ->V{
V _v_211_parts;
_v_211_parts=_args_fn210[0];
{
V _v_212_g;
{for(const auto &_item1425:j::elements(_v_211_parts)){V _v_213_meta;
V _pattern1426=_item1425;
_v_213_meta=j::get(_pattern1426,this->_literals[29]);
if(j::truth(j::get(_v_213_meta,this->_literals[53]))){
if(j::truth(([&]()->V{V _lhs1427=_v_212_g;V _rhs1428=j::builtin("undefined");return V(j::equal(_lhs1427,_rhs1428,true));})())){(void)((_v_212_g=j::get(_v_213_meta,this->_literals[53])));
}else {if(j::truth(([&]()->V{V _lhs1430=([&]()->V{V _receiver1432=_v_212_g;V _method1433=this->_literals[37];V _method=j::get(_receiver1432,_method1433);j::Args _params1434=j::Args{};return j::call(_method,_params1434,_receiver1432);})();V _rhs1431=([&]()->V{V _receiver1435=j::get(_v_213_meta,this->_literals[53]);V _method1436=this->_literals[37];V _method=j::get(_receiver1435,_method1436);j::Args _params1437=j::Args{};return j::call(_method,_params1437,_receiver1435);})();return V(!j::equal(_lhs1430,_rhs1431,true));})())){return j::builtin("undefined");
}
}

}

}}
return _v_212_g;

}

return V{};
},1);
this->_v_230_build.get()=j::function([=](const j::Args &_args_fn231,const V &_receiver_fn231,const V &_self_fn231) mutable ->V{
V _v_232_fn;
V _v_233_w;
V _v_234_m;
V _v_235_setup;
_v_232_fn=_args_fn231[0];
_v_233_w=_args_fn231[1];
_v_234_m=_args_fn231[2];
_v_235_setup=_args_fn231[3];
{
if(j::truth(([&]()->V{V _logical1438=([&]()->V{V _lhs1439=j::get(_v_233_w,this->_literals[32]);V _rhs1440=j::get(this->_v_3_MAX.get(),this->_literals[32]);return j::binary(">",_lhs1439,_rhs1440);})();return !j::truth(_logical1438)?([&]()->V{V _lhs1441=j::get(_v_233_w,this->_literals[33]);V _rhs1442=j::get(this->_v_3_MAX.get(),this->_literals[33]);return j::binary(">",_lhs1441,_rhs1442);})():_logical1438;})())){(void)(([&]()->V{V _callee1444=this->_v_13_fail.get();return j::call(_callee1444,j::Args{([&]()->V{std::u16string _text1443;_text1443+=u"";_text1443+=j::string(_v_232_fn);_text1443+=u"() makes a piece ";_text1443+=j::string(j::get(_v_233_w,this->_literals[32]));_text1443+=u" by ";_text1443+=j::string(j::get(_v_233_w,this->_literals[33]));_text1443+=u", past the ";_text1443+=j::string(j::get(this->_v_3_MAX.get(),this->_literals[32]));_text1443+=u" by ";_text1443+=j::string(j::get(this->_v_3_MAX.get(),this->_literals[33]));_text1443+=u" a piece can be: use fewer or smaller parts, or less room between them";return V(std::move(_text1443));})()});})());
}
return ([&]()->V{V _callee1475=this->_v_17_piece.get();return j::call(_callee1475,j::Args{([&]()->V{V _obj1445=j::object();j::put(_obj1445,this->_literals[9],j::get(_v_233_w,this->_literals[9]));j::put(_obj1445,this->_literals[10],([&]()->V{V _logical1446=j::get(_v_233_w,this->_literals[10]);return j::nullish(_logical1446)?([&]()->V{V _callee1447=this->_v_224_short.get();return j::call(_callee1447,j::Args{j::get(_v_233_w,this->_literals[9])});})():_logical1446;})());j::put(_obj1445,this->_literals[51],j::get(_v_233_w,this->_literals[51]));j::put(_obj1445,this->_literals[32],j::get(_v_233_w,this->_literals[32]));j::put(_obj1445,this->_literals[33],j::get(_v_233_w,this->_literals[33]));j::put(_obj1445,this->_literals[49],j::get(_v_233_w,this->_literals[49]));V _spread1448=(j::truth(([&]()->V{V _lhs1449=j::get(_v_233_w,this->_literals[34]);V _rhs1450=V(1.0);return V(j::equal(_lhs1449,_rhs1450,true));})())?([&]()->V{V _obj1451=j::object();j::put(_obj1451,this->_literals[34],V(1.0));return _obj1451;})():([&]()->V{V _obj1452=j::object();return _obj1452;})());for(const auto &_key:j::keys(_spread1448))j::put(_obj1445,_key,j::get(_spread1448,_key));V _spread1453=(j::truth(j::get(_v_233_w,this->_literals[53]))?([&]()->V{V _obj1454=j::object();j::put(_obj1454,this->_literals[53],j::get(_v_233_w,this->_literals[53]));return _obj1454;})():([&]()->V{V _obj1455=j::object();return _obj1455;})());for(const auto &_key:j::keys(_spread1453))j::put(_obj1445,_key,j::get(_spread1453,_key));V _spread1456=(j::truth(j::get(_v_233_w,this->_literals[50]))?([&]()->V{V _obj1457=j::object();j::put(_obj1457,this->_literals[50],j::get(_v_233_w,this->_literals[50]));return _obj1457;})():([&]()->V{V _obj1458=j::object();return _obj1458;})());for(const auto &_key:j::keys(_spread1456))j::put(_obj1445,_key,j::get(_spread1456,_key));V _spread1459=(j::truth(j::get(_v_233_w,this->_literals[52]))?([&]()->V{V _obj1460=j::object();j::put(_obj1460,this->_literals[52],j::get(_v_233_w,this->_literals[52]));return _obj1460;})():([&]()->V{V _obj1461=j::object();return _obj1461;})());for(const auto &_key:j::keys(_spread1459))j::put(_obj1445,_key,j::get(_spread1459,_key));V _spread1462=(j::truth(j::get(_v_233_w,this->_literals[54]))?([&]()->V{V _obj1463=j::object();j::put(_obj1463,this->_literals[54],V(true));return _obj1463;})():([&]()->V{V _obj1464=j::object();return _obj1464;})());for(const auto &_key:j::keys(_spread1462))j::put(_obj1445,_key,j::get(_spread1462,_key));V _spread1465=(j::truth(j::get(_v_233_w,this->_literals[22]))?([&]()->V{V _obj1466=j::object();j::put(_obj1466,this->_literals[22],j::get(_v_233_w,this->_literals[22]));return _obj1466;})():([&]()->V{V _obj1467=j::object();return _obj1467;})());for(const auto &_key:j::keys(_spread1465))j::put(_obj1445,_key,j::get(_spread1465,_key));V _spread1468=(j::truth(j::get(j::get(_v_234_m,this->_literals[35]),this->_literals[11]))?([&]()->V{V _obj1469=j::object();j::put(_obj1469,this->_literals[35],j::get(_v_234_m,this->_literals[35]));return _obj1469;})():([&]()->V{V _obj1470=j::object();return _obj1470;})());for(const auto &_key:j::keys(_spread1468))j::put(_obj1445,_key,j::get(_spread1468,_key));V _spread1471=(j::truth(j::get(_v_234_m,this->_literals[48]))?([&]()->V{V _obj1472=j::object();j::put(_obj1472,this->_literals[48],j::get(_v_234_m,this->_literals[48]));return _obj1472;})():([&]()->V{V _obj1473=j::object();return _obj1473;})());for(const auto &_key:j::keys(_spread1471))j::put(_obj1445,_key,j::get(_spread1471,_key));return _obj1445;})(),([&]()->V{V _obj1474=j::object();j::put(_obj1474,this->_literals[55],_v_235_setup);return _obj1474;})()});})();

}

return V{};
},4);
this->_v_236_restretch.get()=j::function([=](const j::Args &_args_fn237,const V &_receiver_fn237,const V &_self_fn237) mutable ->V{
V _v_238_g;
V _v_239_out;
V _v_240_k;
_v_238_g=_args_fn237[0];
_v_239_out=_args_fn237[1];
_v_240_k=_args_fn237[2];
{
V _v_241_cols;
V _pattern1476=_v_238_g;
_v_241_cols=j::get(_pattern1476,this->_literals[32]);
{V _v_242_r;
_v_242_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs1477=_v_242_r;V _rhs1478=j::get(_v_239_out,this->_literals[33]);return j::binary("<",_lhs1477,_rhs1478);})());(void)(j::increment(_v_242_r,1,false))){{V _v_243_c;
_v_243_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs1479=_v_243_c;V _rhs1480=_v_241_cols;return j::binary("<",_lhs1479,_rhs1480);})());(void)(j::increment(_v_243_c,1,false))){
V _v_244_i;
if(j::truth(([&]()->V{V _lhs1481=_v_240_k;V _rhs1482=V(0.0);return j::binary(">",_lhs1481,_rhs1482);})())){(void)((_v_244_i=([&]()->V{V _lhs1484=([&]()->V{V _lhs1486=([&]()->V{V _lhs1488=_v_242_r;V _rhs1489=V(1.0);return V(int(j::i32(_lhs1488)>>(j::u32(_rhs1489)&31)));})();V _rhs1487=_v_241_cols;return V(j::number(_lhs1486)*j::number(_rhs1487));})();V _rhs1485=_v_243_c;return j::binary("+",_lhs1484,_rhs1485);})()));
}else {
(void)((_v_244_i=([&]()->V{V _lhs1491=([&]()->V{V _lhs1493=([&]()->V{V _lhs1495=V(2.0);V _rhs1496=_v_242_r;return V(j::number(_lhs1495)*j::number(_rhs1496));})();V _rhs1494=_v_241_cols;return V(j::number(_lhs1493)*j::number(_rhs1494));})();V _rhs1492=_v_243_c;return j::binary("+",_lhs1491,_rhs1492);})()));
if(j::truth(([&]()->V{V _logical1497=([&]()->V{V _lhs1498=j::get(j::get(_v_238_g,this->_literals[56]),_v_244_i);V _rhs1499=this->_v_1_EMPTY.get();return V(j::equal(_lhs1498,_rhs1499,true));})();return j::truth(_logical1497)?([&]()->V{V _lhs1500=([&]()->V{V _lhs1502=([&]()->V{V _lhs1504=V(2.0);V _rhs1505=_v_242_r;return V(j::number(_lhs1504)*j::number(_rhs1505));})();V _rhs1503=V(1.0);return j::binary("+",_lhs1502,_rhs1503);})();V _rhs1501=j::get(_v_238_g,this->_literals[33]);return j::binary("<",_lhs1500,_rhs1501);})():_logical1497;})())){(void)((_v_244_i=j::binary("+",_v_244_i,_v_241_cols)));
}

}

(void)(([&]()->V{V _base1508=j::get(_v_239_out,this->_literals[56]);V _key1509=([&]()->V{V _lhs1510=([&]()->V{V _lhs1512=_v_242_r;V _rhs1513=_v_241_cols;return V(j::number(_lhs1512)*j::number(_rhs1513));})();V _rhs1511=_v_243_c;return j::binary("+",_lhs1510,_rhs1511);})();V _assign1507=j::get(j::get(_v_238_g,this->_literals[56]),_v_244_i);return j::put(_base1508,_key1509,_assign1507);})());
(void)(([&]()->V{V _base1515=j::get(_v_239_out,this->_literals[57]);V _key1516=([&]()->V{V _lhs1517=([&]()->V{V _lhs1519=_v_242_r;V _rhs1520=_v_241_cols;return V(j::number(_lhs1519)*j::number(_rhs1520));})();V _rhs1518=_v_243_c;return j::binary("+",_lhs1517,_rhs1518);})();V _assign1514=j::get(j::get(_v_238_g,this->_literals[57]),_v_244_i);return j::put(_base1515,_key1516,_assign1514);})());

}
}
}}

}

return V{};
},3);
this->_v_245_player.get()=j::function([=](const j::Args &_args_fn246,const V &_receiver_fn246,const V &_self_fn246) mutable ->V{
j::Cell _v_247_p;
j::Cell _v_248_map;
V _v_249_options;
_v_247_p.get()=_args_fn246[0];
_v_248_map.get()=_args_fn246[1];
V _default1521=_args_fn246[2];if(_default1521.kind==V::Undefined||_default1521.kind==V::Hole)_default1521=j::get(_v_247_p.get(),this->_literals[22]);
_v_249_options=_default1521;
{
j::Cell _v_250_sampler;
j::Cell _v_251_fitted;
j::Cell _v_252_tint;
_v_250_sampler.get()=([&]()->V{V _callee1522=this->_v_20_sample.get();return j::call(_callee1522,j::Args{j::get(_v_247_p.get(),this->_literals[28]),_v_249_options});})();
_v_251_fitted.get()=(j::truth(j::get(_v_247_p.get(),this->_literals[31]))?([&]()->V{V _callee1523=this->_v_5_Surface.get();return j::construct(_callee1523,j::Args{j::get(_v_247_p.get(),this->_literals[32]),j::get(_v_247_p.get(),this->_literals[33])});})():V::null());
_v_252_tint.get()=(j::truth(([&]()->V{V _logical1524=j::get(_v_247_p.get(),this->_literals[30]);return j::truth(_logical1524)?_v_248_map.get():_logical1524;})())?([&]()->V{j::Args _array1525;_array1525.push_back(j::get(_v_248_map.get(),V(0.0)));_array1525.push_back(j::get(_v_248_map.get(),([&]()->V{V _lhs1526=j::get(j::get(_v_247_p.get(),this->_literals[30]),this->_literals[11]);V _rhs1527=V(1.0);return V(j::number(_lhs1526)-j::number(_rhs1527));})()));return j::array(std::move(_array1525));})():V::null());
return j::function([=](const j::Args &_args_fn253,const V &_receiver_fn253,const V &_self_fn253) mutable ->V{
V _v_254_t;
V _v_255_paper;
V _v_256_mono;
_v_254_t=_args_fn253[0];
_v_255_paper=_args_fn253[1];
_v_256_mono=_args_fn253[2];
{
V _v_257_g;
_v_257_g=([&]()->V{V _receiver1539=_v_250_sampler.get();V _method1540=this->_literals[60];V _method=j::get(_receiver1539,_method1540);j::Args _params1541=j::Args{([&]()->V{V _receiver1534=j::builtin("Math");V _method1535=this->_literals[44];V _method=j::get(_receiver1534,_method1535);j::Args _params1536=j::Args{V(0.0),([&]()->V{V _lhs1528=([&]()->V{V _lhs1530=_v_254_t;V _rhs1531=j::get(_v_247_p.get(),this->_literals[24]);return V(j::number(_lhs1530)*j::number(_rhs1531));})();V _rhs1529=j::get(_v_247_p.get(),this->_literals[23]);return j::binary("+",_lhs1528,_rhs1529);})()};return j::call(_method,_params1536,_receiver1534);})(),([&]()->V{V _obj1537=j::object();j::put(_obj1537,this->_literals[58],_v_255_paper);j::put(_obj1537,this->_literals[59],([&]()->V{V _logical1538=_v_256_mono;return !j::truth(_logical1538)?j::unary("!",j::unary("!",_v_252_tint.get())):_logical1538;})());return _obj1537;})()};return j::call(_method,_params1541,_receiver1539);})();
if(j::truth(([&]()->V{V _logical1542=_v_252_tint.get();return j::truth(_logical1542)?j::unary("!",_v_256_mono):_logical1542;})())){
V _v_258_k;
V _v_259_chars;
V _v_260_colors;
_v_258_k=j::get(_v_252_tint.get(),(j::truth(_v_255_paper)?V(0.0):V(1.0)));
V _pattern1543=_v_257_g;
_v_259_chars=j::get(_pattern1543,this->_literals[56]);
_v_260_colors=j::get(_pattern1543,this->_literals[57]);
{V _v_261_i;
_v_261_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1544=_v_261_i;V _rhs1545=j::get(_v_259_chars,this->_literals[11]);return j::binary("<",_lhs1544,_rhs1545);})());(void)(j::increment(_v_261_i,1,false))){if(j::truth(([&]()->V{V _lhs1546=j::get(_v_259_chars,_v_261_i);V _rhs1547=this->_v_1_EMPTY.get();return V(!j::equal(_lhs1546,_rhs1547,true));})())){(void)(([&]()->V{V _base1549=_v_260_colors;V _key1550=_v_261_i;V _assign1548=_v_258_k;return j::put(_base1549,_key1550,_assign1548);})());
}
}}

}
else {if(j::truth(([&]()->V{V _logical1551=_v_248_map.get();return j::truth(_logical1551)?j::unary("!",_v_256_mono):_logical1551;})())){
V _v_262_c;
_v_262_c=j::get(_v_257_g,this->_literals[57]);
{V _v_263_i;
_v_263_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1552=_v_263_i;V _rhs1553=j::get(_v_262_c,this->_literals[11]);return j::binary("<",_lhs1552,_rhs1553);})());(void)(j::increment(_v_263_i,1,false))){if(j::truth(([&]()->V{V _lhs1554=j::get(_v_262_c,_v_263_i);V _rhs1555=this->_v_4_NONE.get();return V(!j::equal(_lhs1554,_rhs1555,true));})())){(void)(([&]()->V{V _base1557=_v_262_c;V _key1558=_v_263_i;V _assign1556=([&]()->V{V _logical1559=j::get(_v_248_map.get(),j::get(_v_262_c,_v_263_i));return j::nullish(_logical1559)?this->_v_4_NONE.get():_logical1559;})();return j::put(_base1557,_key1558,_assign1556);})());
}
}}

}

}
if(j::truth(j::unary("!",_v_251_fitted.get()))){return _v_257_g;
}
(void)(([&]()->V{V _callee1560=this->_v_236_restretch.get();return j::call(_callee1560,j::Args{_v_257_g,_v_251_fitted.get(),j::get(_v_247_p.get(),this->_literals[31])});})());
return _v_251_fitted.get();

}

return V{};
},3);

}

return V{};
},2);
this->_v_264_place.get()=j::function([=](const j::Args &_args_fn265,const V &_receiver_fn265,const V &_self_fn265) mutable ->V{
V _v_266_anchor;
V _v_267_W;
V _v_268_H;
V _v_269_w;
V _v_270_h;
V _v_271_margin;
_v_266_anchor=_args_fn265[0];
_v_267_W=_args_fn265[1];
_v_268_H=_args_fn265[2];
_v_269_w=_args_fn265[3];
_v_270_h=_args_fn265[4];
V _default1561=_args_fn265[5];if(_default1561.kind==V::Undefined||_default1561.kind==V::Hole)_default1561=V(0.0);
_v_271_margin=_default1561;
{
V _v_272_x;
V _v_273_y;
_v_272_x=(j::truth(([&]()->V{V _receiver1562=_v_266_anchor;V _method1563=this->_literals[62];V _method=j::get(_receiver1562,_method1563);j::Args _params1564=j::Args{this->_literals[61]};return j::call(_method,_params1564,_receiver1562);})())?_v_271_margin:(j::truth(([&]()->V{V _receiver1565=_v_266_anchor;V _method1566=this->_literals[62];V _method=j::get(_receiver1565,_method1566);j::Args _params1567=j::Args{this->_literals[63]};return j::call(_method,_params1567,_receiver1565);})())?([&]()->V{V _lhs1568=([&]()->V{V _lhs1570=_v_267_W;V _rhs1571=_v_269_w;return V(j::number(_lhs1570)-j::number(_rhs1571));})();V _rhs1569=_v_271_margin;return V(j::number(_lhs1568)-j::number(_rhs1569));})():([&]()->V{V _number1576=([&]()->V{V _lhs1577=([&]()->V{V _lhs1579=_v_267_W;V _rhs1580=_v_269_w;return V(j::number(_lhs1579)-j::number(_rhs1580));})();V _rhs1578=V(2.0);return V(j::number(_lhs1577)/j::number(_rhs1578));})();return V(std::floor(j::number(_number1576)));})()));
_v_273_y=(j::truth(([&]()->V{V _receiver1581=_v_266_anchor;V _method1582=this->_literals[65];V _method=j::get(_receiver1581,_method1582);j::Args _params1583=j::Args{this->_literals[64]};return j::call(_method,_params1583,_receiver1581);})())?_v_271_margin:(j::truth(([&]()->V{V _receiver1584=_v_266_anchor;V _method1585=this->_literals[65];V _method=j::get(_receiver1584,_method1585);j::Args _params1586=j::Args{this->_literals[66]};return j::call(_method,_params1586,_receiver1584);})())?([&]()->V{V _lhs1587=([&]()->V{V _lhs1589=_v_268_H;V _rhs1590=_v_270_h;return V(j::number(_lhs1589)-j::number(_rhs1590));})();V _rhs1588=_v_271_margin;return V(j::number(_lhs1587)-j::number(_rhs1588));})():([&]()->V{V _number1595=([&]()->V{V _lhs1596=([&]()->V{V _lhs1598=_v_268_H;V _rhs1599=_v_270_h;return V(j::number(_lhs1598)-j::number(_rhs1599));})();V _rhs1597=V(2.0);return V(j::number(_lhs1596)/j::number(_rhs1597));})();return V(std::floor(j::number(_number1595)));})()));
return ([&]()->V{j::Args _array1600;_array1600.push_back(_v_272_x);_array1600.push_back(_v_273_y);return j::array(std::move(_array1600));})();

}

return V{};
},5);
this->_v_275_travel.get()=j::function([=](const j::Args &_args_fn276,const V &_receiver_fn276,const V &_self_fn276) mutable ->V{
V _v_277_v;
_v_277_v=_args_fn276[0];
{
V _v_278_sides;
V _v_281_o;
if(j::truth(([&]()->V{V _lhs1601=_v_277_v;V _rhs1602=j::builtin("undefined");return V(j::equal(_lhs1601,_rhs1602,true));})())){return V::null();
}
_v_278_sides=([&]()->V{V _callee1609=this->_v_28_or.get();return j::call(_callee1609,j::Args{([&]()->V{V _receiver1606=this->_v_24_SIDES.get();V _method1607=this->_literals[5];V _method=j::get(_receiver1606,_method1607);j::Args _params1608=j::Args{j::function([=](const j::Args &_args_fn279,const V &_receiver_fn279,const V &_self_fn279) mutable ->V{
V _v_280_d;
_v_280_d=_args_fn279[0];
return ([&]()->V{V _receiver1603=j::builtin("JSON");V _method1604=this->_literals[4];V _method=j::get(_receiver1603,_method1604);j::Args _params1605=j::Args{_v_280_d};return j::call(_method,_params1605,_receiver1603);})();
return V{};
},1)};return j::call(_method,_params1608,_receiver1606);})()});})();
if(j::truth(([&]()->V{V _logical1610=([&]()->V{V _logical1611=([&]()->V{V _lhs1612=_v_277_v;V _rhs1613=V::null();return V(j::equal(_lhs1612,_rhs1613,true));})();return !j::truth(_logical1611)?([&]()->V{V _lhs1614=j::unary("typeof",_v_277_v);V _rhs1615=this->_literals[6];return V(!j::equal(_lhs1614,_rhs1615,true));})():_logical1611;})();return !j::truth(_logical1610)?([&]()->V{V _receiver1616=j::builtin("Array");V _method1617=this->_literals[7];V _method=j::get(_receiver1616,_method1617);j::Args _params1618=j::Args{_v_277_v};return j::call(_method,_params1618,_receiver1616);})():_logical1610;})())){
if(j::truth(j::unary("!",([&]()->V{V _receiver1619=this->_v_24_SIDES.get();V _method1620=this->_literals[3];V _method=j::get(_receiver1619,_method1620);j::Args _params1621=j::Args{_v_277_v};return j::call(_method,_params1621,_receiver1619);})()))){(void)(([&]()->V{V _callee1624=this->_v_13_fail.get();return j::call(_callee1624,j::Args{([&]()->V{std::u16string _text1622;_text1622+=u"a layer's move takes ";_text1622+=j::string(_v_278_sides);_text1622+=u", or { to, period }, not ";_text1622+=j::string(([&]()->V{V _callee1623=this->_v_25_shown.get();return j::call(_callee1623,j::Args{_v_277_v});})());_text1622+=u"";return V(std::move(_text1622));})()});})());
}
return ([&]()->V{V _obj1625=j::object();j::put(_obj1625,this->_literals[67],_v_277_v);j::put(_obj1625,this->_literals[68],V(0.0));return _obj1625;})();

}

_v_281_o=_v_277_v;
if(j::truth(j::unary("!",([&]()->V{V _receiver1626=this->_v_24_SIDES.get();V _method1627=this->_literals[3];V _method=j::get(_receiver1626,_method1627);j::Args _params1628=j::Args{j::get(_v_281_o,this->_literals[67])};return j::call(_method,_params1628,_receiver1626);})()))){(void)(([&]()->V{V _callee1631=this->_v_13_fail.get();return j::call(_callee1631,j::Args{([&]()->V{std::u16string _text1629;_text1629+=u"a layer's move.to takes ";_text1629+=j::string(_v_278_sides);_text1629+=u", not ";_text1629+=j::string(([&]()->V{V _callee1630=this->_v_25_shown.get();return j::call(_callee1630,j::Args{j::get(_v_281_o,this->_literals[67])});})());_text1629+=u"";return V(std::move(_text1629));})()});})());
}
return ([&]()->V{V _obj1632=j::object();j::put(_obj1632,this->_literals[67],j::get(_v_281_o,this->_literals[67]));j::put(_obj1632,this->_literals[68],([&]()->V{V _callee1633=this->_v_40_duration.get();return j::call(_callee1633,j::Args{j::get(_v_281_o,this->_literals[68]),this->_literals[69],V(0.0)});})());return _obj1632;})();

}

return V{};
},1);
this->_v_282_position.get()=j::function([=](const j::Args &_args_fn283,const V &_receiver_fn283,const V &_self_fn283) mutable ->V{
V _v_284_v;
V _v_285_name;
_v_284_v=_args_fn283[0];
_v_285_name=_args_fn283[1];
{
if(j::truth(([&]()->V{V _lhs1634=_v_284_v;V _rhs1635=j::builtin("undefined");return V(j::equal(_lhs1634,_rhs1635,true));})())){return V(0.0);
}
if(j::truth(([&]()->V{V _lhs1636=j::unary("typeof",_v_284_v);V _rhs1637=this->_literals[70];return V(j::equal(_lhs1636,_rhs1637,true));})())){
V _v_286_at0;
_v_286_at0=([&]()->V{V _callee1638=_v_284_v;return j::call(_callee1638,j::Args{V(0.0)});})();
if(j::truth(j::unary("!",([&]()->V{V _callee1639=this->_v_31_finite.get();return j::call(_callee1639,j::Args{_v_286_at0});})()))){(void)(([&]()->V{V _callee1642=this->_v_13_fail.get();return j::call(_callee1642,j::Args{([&]()->V{std::u16string _text1640;_text1640+=u"a layer's ";_text1640+=j::string(_v_285_name);_text1640+=u" as a function takes t and returns a number, not ";_text1640+=j::string(([&]()->V{V _callee1641=this->_v_25_shown.get();return j::call(_callee1641,j::Args{_v_286_at0});})());_text1640+=u" at t = 0";return V(std::move(_text1640));})()});})());
}
return _v_284_v;

}

if(j::truth(j::unary("!",([&]()->V{V _callee1643=this->_v_31_finite.get();return j::call(_callee1643,j::Args{_v_284_v});})()))){(void)(([&]()->V{V _callee1646=this->_v_13_fail.get();return j::call(_callee1646,j::Args{([&]()->V{std::u16string _text1644;_text1644+=u"a layer's ";_text1644+=j::string(_v_285_name);_text1644+=u" takes a number of cells, or a function of t that returns one, not ";_text1644+=j::string(([&]()->V{V _callee1645=this->_v_25_shown.get();return j::call(_callee1645,j::Args{_v_284_v});})());_text1644+=u"";return V(std::move(_text1644));})()});})());
}
return _v_284_v;

}

return V{};
},2);
this->_v_287_layerOf.get()=j::function([=](const j::Args &_args_fn288,const V &_receiver_fn288,const V &_self_fn288) mutable ->V{
V _v_289_fn;
V _v_290_v;
V _v_291_anchor;
_v_289_fn=_args_fn288[0];
_v_290_v=_args_fn288[1];
_v_291_anchor=_args_fn288[2];
{
V _v_292_p;
V _v_293_l;
V _v_294_mask;
_v_292_p=([&]()->V{V _callee1647=this->_v_93_prepare.get();return j::call(_callee1647,j::Args{_v_289_fn,_v_290_v,this->_v_274_LAYER.get()});})();
_v_293_l=(j::truth(([&]()->V{V _callee1648=this->_v_81_isClip.get();return j::call(_callee1648,j::Args{_v_290_v});})())?_v_290_v:([&]()->V{V _obj1649=j::object();return _obj1649;})());
if(j::truth(([&]()->V{V _logical1650=([&]()->V{V _lhs1651=j::get(_v_293_l,this->_literals[71]);V _rhs1652=j::builtin("undefined");return V(!j::equal(_lhs1651,_rhs1652,true));})();return j::truth(_logical1650)?j::unary("!",([&]()->V{V _logical1653=([&]()->V{V _logical1654=([&]()->V{V _receiver1655=j::builtin("Number");V _method1656=this->_literals[0];V _method=j::get(_receiver1655,_method1656);j::Args _params1657=j::Args{j::get(_v_293_l,this->_literals[71])};return j::call(_method,_params1657,_receiver1655);})();return j::truth(_logical1654)?([&]()->V{V _lhs1658=j::get(_v_293_l,this->_literals[71]);V _rhs1659=V(0.0);return j::binary(">=",_lhs1658,_rhs1659);})():_logical1654;})();return j::truth(_logical1653)?([&]()->V{V _lhs1660=j::get(_v_293_l,this->_literals[71]);V _rhs1661=V(4.0);return j::binary("<=",_lhs1660,_rhs1661);})():_logical1653;})()):_logical1650;})())){(void)(([&]()->V{V _callee1664=this->_v_13_fail.get();return j::call(_callee1664,j::Args{([&]()->V{std::u16string _text1662;_text1662+=u"a layer's halo takes a whole number of cells from 0 to 4, not ";_text1662+=j::string(([&]()->V{V _callee1663=this->_v_25_shown.get();return j::call(_callee1663,j::Args{j::get(_v_293_l,this->_literals[71])});})());_text1662+=u"";return V(std::move(_text1662));})()});})());
}
_v_294_mask=this->_literals[72];
if(j::truth(([&]()->V{V _lhs1665=j::get(_v_293_l,this->_literals[73]);V _rhs1666=V::null();return V(j::equal(_lhs1665,_rhs1666,true));})())){(void)((_v_294_mask=V::null()));
}else {if(j::truth(([&]()->V{V _lhs1668=j::get(_v_293_l,this->_literals[73]);V _rhs1669=j::builtin("undefined");return V(!j::equal(_lhs1668,_rhs1669,true));})())){
if(j::truth(([&]()->V{V _logical1670=([&]()->V{V _lhs1671=j::unary("typeof",j::get(_v_293_l,this->_literals[73]));V _rhs1672=this->_literals[15];return V(!j::equal(_lhs1671,_rhs1672,true));})();return !j::truth(_logical1670)?([&]()->V{V _lhs1673=j::get(j::get(_v_293_l,this->_literals[73]),this->_literals[11]);V _rhs1674=V(1.0);return V(!j::equal(_lhs1673,_rhs1674,true));})():_logical1670;})())){(void)(([&]()->V{V _callee1677=this->_v_13_fail.get();return j::call(_callee1677,j::Args{([&]()->V{std::u16string _text1675;_text1675+=u"a layer's mask takes one character, or null for none, not ";_text1675+=j::string(([&]()->V{V _callee1676=this->_v_25_shown.get();return j::call(_callee1676,j::Args{j::get(_v_293_l,this->_literals[73])});})());_text1675+=u"";return V(std::move(_text1675));})()});})());
}
(void)(([&]()->V{V _callee1678=this->_v_11_code.get();return j::call(_callee1678,j::Args{j::get(_v_293_l,this->_literals[73])});})());
(void)((_v_294_mask=j::get(_v_293_l,this->_literals[73])));

}

}
return ([&]()->V{V _obj1680=j::object();V _spread1681=_v_292_p;for(const auto &_key:j::keys(_spread1681))j::put(_obj1680,_key,j::get(_spread1681,_key));j::put(_obj1680,this->_literals[74],([&]()->V{V _callee1682=this->_v_282_position.get();return j::call(_callee1682,j::Args{j::get(_v_293_l,this->_literals[74]),this->_literals[74]});})());j::put(_obj1680,this->_literals[75],([&]()->V{V _callee1683=this->_v_282_position.get();return j::call(_callee1683,j::Args{j::get(_v_293_l,this->_literals[75]),this->_literals[75]});})());j::put(_obj1680,this->_literals[76],([&]()->V{V _callee1684=this->_v_46_oneOf.get();return j::call(_callee1684,j::Args{j::get(_v_293_l,this->_literals[76]),this->_literals[77],this->_v_23_ANCHORS.get(),_v_291_anchor});})());j::put(_obj1680,this->_literals[78],([&]()->V{V _callee1685=this->_v_34_whole.get();return j::call(_callee1685,j::Args{j::get(_v_293_l,this->_literals[78]),this->_literals[79],V(0.0),V(0.0)});})());j::put(_obj1680,this->_literals[80],([&]()->V{V _callee1686=this->_v_275_travel.get();return j::call(_callee1686,j::Args{j::get(_v_293_l,this->_literals[80])});})());j::put(_obj1680,this->_literals[73],_v_294_mask);j::put(_obj1680,this->_literals[71],j::get(_v_293_l,this->_literals[71]));return _obj1680;})();

}

return V{};
},3);
this->_v_295_knockout.get()=j::function([=](const j::Args &_args_fn296,const V &_receiver_fn296,const V &_self_fn296) mutable ->V{
V _v_297_s;
V _v_298_g;
V _v_299_x;
V _v_300_y;
V _v_301_h;
V _v_302_mask;
_v_297_s=_args_fn296[0];
_v_298_g=_args_fn296[1];
_v_299_x=_args_fn296[2];
_v_300_y=_args_fn296[3];
_v_301_h=_args_fn296[4];
_v_302_mask=_args_fn296[5];
{
V _v_303_dy;
V _v_304_blank;
_v_303_dy=([&]()->V{V _receiver1694=j::builtin("Math");V _method1695=this->_literals[44];V _method=j::get(_receiver1694,_method1695);j::Args _params1696=j::Args{V(1.0),([&]()->V{V _number1689=([&]()->V{V _lhs1690=_v_301_h;V _rhs1691=V(2.0);return V(j::number(_lhs1690)/j::number(_rhs1691));})();return V(std::floor(j::number(_number1689)+.5));})()};return j::call(_method,_params1696,_receiver1694);})();
_v_304_blank=V(32.0);
{V _v_305_r;
_v_305_r=V(0.0);
for(;j::truth(([&]()->V{V _lhs1697=_v_305_r;V _rhs1698=j::get(_v_298_g,this->_literals[33]);return j::binary("<",_lhs1697,_rhs1698);})());(void)(j::increment(_v_305_r,1,false))){{V _v_306_c;
_v_306_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs1699=_v_306_c;V _rhs1700=j::get(_v_298_g,this->_literals[32]);return j::binary("<",_lhs1699,_rhs1700);})());(void)(j::increment(_v_306_c,1,false))){
V _v_307_ch;
_v_307_ch=j::get(j::get(_v_298_g,this->_literals[56]),([&]()->V{V _lhs1701=([&]()->V{V _lhs1703=_v_305_r;V _rhs1704=j::get(_v_298_g,this->_literals[32]);return V(j::number(_lhs1703)*j::number(_rhs1704));})();V _rhs1702=_v_306_c;return j::binary("+",_lhs1701,_rhs1702);})());
if(j::truth(([&]()->V{V _logical1705=([&]()->V{V _lhs1706=_v_307_ch;V _rhs1707=this->_v_1_EMPTY.get();return V(j::equal(_lhs1706,_rhs1707,true));})();return !j::truth(_logical1705)?([&]()->V{V _lhs1708=_v_307_ch;V _rhs1709=_v_302_mask;return V(j::equal(_lhs1708,_rhs1709,true));})():_logical1705;})())){continue;
}
{V _v_308_j;
_v_308_j=([&]()->V{V _lhs1710=_v_305_r;V _rhs1711=_v_303_dy;return V(j::number(_lhs1710)-j::number(_rhs1711));})();
for(;j::truth(([&]()->V{V _lhs1712=_v_308_j;V _rhs1713=([&]()->V{V _lhs1714=_v_305_r;V _rhs1715=_v_303_dy;return j::binary("+",_lhs1714,_rhs1715);})();return j::binary("<=",_lhs1712,_rhs1713);})());(void)(j::increment(_v_308_j,1,false))){{V _v_309_i;
_v_309_i=([&]()->V{V _lhs1716=_v_306_c;V _rhs1717=_v_301_h;return V(j::number(_lhs1716)-j::number(_rhs1717));})();
for(;j::truth(([&]()->V{V _lhs1718=_v_309_i;V _rhs1719=([&]()->V{V _lhs1720=_v_306_c;V _rhs1721=_v_301_h;return j::binary("+",_lhs1720,_rhs1721);})();return j::binary("<=",_lhs1718,_rhs1719);})());(void)(j::increment(_v_309_i,1,false))){
V _v_310_k;
_v_310_k=([&]()->V{V _receiver1726=_v_297_s;V _method1727=this->_literals[81];V _method=j::get(_receiver1726,_method1727);j::Args _params1728=j::Args{([&]()->V{V _lhs1722=_v_299_x;V _rhs1723=_v_309_i;return j::binary("+",_lhs1722,_rhs1723);})(),([&]()->V{V _lhs1724=_v_300_y;V _rhs1725=_v_308_j;return j::binary("+",_lhs1724,_rhs1725);})()};return j::call(_method,_params1728,_receiver1726);})();
if(j::truth(([&]()->V{V _lhs1729=_v_310_k;V _rhs1730=V(0.0);return j::binary(">=",_lhs1729,_rhs1730);})())){(void)(([&]()->V{V _receiver1731=_v_297_s;V _method1732=this->_literals[82];V _method=j::get(_receiver1731,_method1732);j::Args _params1733=j::Args{_v_310_k,_v_304_blank};return j::call(_method,_params1733,_receiver1731);})());
}

}
}
}}

}
}
}}

}

return V{};
},6);
this->_v_322_spot.get()=j::function([=](const j::Args &_args_fn323,const V &_receiver_fn323,const V &_self_fn323) mutable ->V{
V _v_324_l;
V _v_325_t;
V _v_326_cols;
V _v_327_rows;
_v_324_l=_args_fn323[0];
_v_325_t=_args_fn323[1];
_v_326_cols=_args_fn323[2];
_v_327_rows=_args_fn323[3];
{
V _v_328_ax;
V _v_329_ay;
V _v_330_x;
V _v_331_y;
V _pattern1735=([&]()->V{V _callee1734=this->_v_264_place.get();return j::call(_callee1734,j::Args{j::get(_v_324_l,this->_literals[76]),_v_326_cols,_v_327_rows,j::get(_v_324_l,this->_literals[32]),j::get(_v_324_l,this->_literals[33]),j::get(_v_324_l,this->_literals[78])});})();
_v_328_ax=j::get(_pattern1735,V(0));
_v_329_ay=j::get(_pattern1735,V(1));
_v_330_x=([&]()->V{V _lhs1736=_v_328_ax;V _rhs1737=([&]()->V{V _callee1738=this->_v_311_at.get();return j::call(_callee1738,j::Args{j::get(_v_324_l,this->_literals[74]),_v_325_t});})();return j::binary("+",_lhs1736,_rhs1737);})();
_v_331_y=([&]()->V{V _lhs1739=_v_329_ay;V _rhs1740=([&]()->V{V _callee1741=this->_v_311_at.get();return j::call(_callee1741,j::Args{j::get(_v_324_l,this->_literals[75]),_v_325_t});})();return j::binary("+",_lhs1739,_rhs1740);})();
if(j::truth(j::get(_v_324_l,this->_literals[80]))){
V _v_332_to;
V _v_333_period;
V _v_334_across;
V _v_335_span;
V _v_336_step;
V _pattern1742=j::get(_v_324_l,this->_literals[80]);
_v_332_to=j::get(_pattern1742,this->_literals[67]);
_v_333_period=j::get(_pattern1742,this->_literals[68]);
_v_334_across=([&]()->V{V _logical1743=([&]()->V{V _lhs1744=_v_332_to;V _rhs1745=this->_literals[61];return V(j::equal(_lhs1744,_rhs1745,true));})();return !j::truth(_logical1743)?([&]()->V{V _lhs1746=_v_332_to;V _rhs1747=this->_literals[63];return V(j::equal(_lhs1746,_rhs1747,true));})():_logical1743;})();
_v_335_span=(j::truth(_v_334_across)?([&]()->V{V _lhs1748=_v_326_cols;V _rhs1749=j::get(_v_324_l,this->_literals[32]);return j::binary("+",_lhs1748,_rhs1749);})():([&]()->V{V _lhs1750=_v_327_rows;V _rhs1751=j::get(_v_324_l,this->_literals[33]);return j::binary("+",_lhs1750,_rhs1751);})());
_v_336_step=([&]()->V{V _lhs1752=([&]()->V{V _number1760=([&]()->V{V _lhs1761=([&]()->V{V _lhs1763=([&]()->V{V _lhs1765=_v_325_t;V _rhs1766=_v_335_span;return V(j::number(_lhs1765)*j::number(_rhs1766));})();V _rhs1764=_v_333_period;return V(j::number(_lhs1763)/j::number(_rhs1764));})();V _rhs1762=V(1e-9);return j::binary("+",_lhs1761,_rhs1762);})();return V(std::floor(j::number(_number1760)));})();V _rhs1753=(j::truth(([&]()->V{V _logical1767=([&]()->V{V _lhs1768=_v_332_to;V _rhs1769=this->_literals[63];return V(j::equal(_lhs1768,_rhs1769,true));})();return !j::truth(_logical1767)?([&]()->V{V _lhs1770=_v_332_to;V _rhs1771=this->_literals[83];return V(j::equal(_lhs1770,_rhs1771,true));})():_logical1767;})())?V(1.0):j::unary("-",V(1.0)));return V(j::number(_lhs1752)*j::number(_rhs1753));})();
if(j::truth(_v_334_across)){(void)((_v_330_x=([&]()->V{V _callee1775=this->_v_316_around.get();return j::call(_callee1775,j::Args{([&]()->V{V _lhs1773=_v_330_x;V _rhs1774=_v_336_step;return j::binary("+",_lhs1773,_rhs1774);})(),j::get(_v_324_l,this->_literals[32]),_v_326_cols});})()));
}else {(void)((_v_331_y=([&]()->V{V _callee1779=this->_v_316_around.get();return j::call(_callee1779,j::Args{([&]()->V{V _lhs1777=_v_331_y;V _rhs1778=_v_336_step;return j::binary("+",_lhs1777,_rhs1778);})(),j::get(_v_324_l,this->_literals[33]),_v_327_rows});})()));
}

}

return ([&]()->V{j::Args _array1780;_array1780.push_back(_v_330_x);_array1780.push_back(_v_331_y);return j::array(std::move(_array1780));})();

}

return V{};
},4);
this->_v_337_stack.get()=j::function([=](const j::Args &_args_fn338,const V &_receiver_fn338,const V &_self_fn338) mutable ->V{
V _v_339_fn;
j::Cell _v_340_all;
V _v_341_given;
_v_339_fn=_args_fn338[0];
_v_340_all.get()=_args_fn338[1];
V _default1781=_args_fn338[2];if(_default1781.kind==V::Undefined||_default1781.kind==V::Hole)_default1781=([&]()->V{V _obj1782=j::object();return _obj1782;})();
_v_341_given=_default1781;
{
V _v_342_cell;
j::Cell _v_344_cols;
j::Cell _v_345_rows;
V _v_351_steered;
V _v_354_theirs;
V _v_357_fitted;
V _v_359_travels;
j::Cell _v_362_own;
j::Cell _v_363_m;
V _v_364_whole;
_v_342_cell=([&]()->V{V _logical1783=j::get(j::get(j::get(_v_340_all.get(),V(0.0)),this->_literals[29]),this->_literals[34]);return j::nullish(_logical1783)?V(2.0):_logical1783;})();
{for(const auto &_item1784:j::elements(_v_340_all.get())){V _v_343_l;
_v_343_l=_item1784;
(void)(([&]()->V{V _callee1785=this->_v_106_fit.get();return j::call(_callee1785,j::Args{_v_343_l,_v_342_cell});})());
}}
V _pattern1786=j::get(_v_340_all.get(),V(0.0));
_v_344_cols.get()=j::get(_pattern1786,this->_literals[32]);
_v_345_rows.get()=j::get(_pattern1786,this->_literals[33]);
{V _v_346_i;
_v_346_i=V(1.0);
for(;j::truth(([&]()->V{V _lhs1787=_v_346_i;V _rhs1788=j::get(_v_340_all.get(),this->_literals[11]);return j::binary("<",_lhs1787,_rhs1788);})());(void)(j::increment(_v_346_i,1,false))){
V _v_347_l;
_v_347_l=j::get(_v_340_all.get(),_v_346_i);
if(j::truth(([&]()->V{V _logical1789=([&]()->V{V _logical1790=([&]()->V{V _logical1791=([&]()->V{V _logical1792=([&]()->V{V _lhs1793=j::get(j::get(_v_347_l,this->_literals[29]),this->_literals[51]);V _rhs1794=this->_literals[84];return V(j::equal(_lhs1793,_rhs1794,true));})();return j::truth(_logical1792)?j::unary("!",j::get(_v_347_l,this->_literals[80])):_logical1792;})();return j::truth(_logical1791)?([&]()->V{V _lhs1795=j::unary("typeof",j::get(_v_347_l,this->_literals[74]));V _rhs1796=this->_literals[70];return V(!j::equal(_lhs1795,_rhs1796,true));})():_logical1791;})();return j::truth(_logical1790)?([&]()->V{V _lhs1797=j::unary("typeof",j::get(_v_347_l,this->_literals[75]));V _rhs1798=this->_literals[70];return V(!j::equal(_lhs1797,_rhs1798,true));})():_logical1790;})();return j::truth(_logical1789)?([&]()->V{V _logical1799=([&]()->V{V _lhs1800=j::get(_v_347_l,this->_literals[32]);V _rhs1801=_v_344_cols.get();return j::binary(">",_lhs1800,_rhs1801);})();return !j::truth(_logical1799)?([&]()->V{V _lhs1802=j::get(_v_347_l,this->_literals[33]);V _rhs1803=_v_345_rows.get();return j::binary(">",_lhs1802,_rhs1803);})():_logical1799;})():_logical1789;})())){
V _v_348_way;
_v_348_way=(j::truth(([&]()->V{V _lhs1804=j::get(_v_347_l,this->_literals[32]);V _rhs1805=_v_344_cols.get();return j::binary(">",_lhs1804,_rhs1805);})())?([&]()->V{std::u16string _text1806;_text1806+=u"";_text1806+=j::string(j::get(_v_347_l,this->_literals[32]));_text1806+=u" columns, wider than the ";_text1806+=j::string(_v_344_cols.get());_text1806+=u"";return V(std::move(_text1806));})():([&]()->V{std::u16string _text1807;_text1807+=u"";_text1807+=j::string(j::get(_v_347_l,this->_literals[33]));_text1807+=u" rows, taller than the ";_text1807+=j::string(_v_345_rows.get());_text1807+=u"";return V(std::move(_text1807));})());
(void)(([&]()->V{V _callee1809=this->_v_13_fail.get();return j::call(_callee1809,j::Args{([&]()->V{std::u16string _text1808;_text1808+=u"";_text1808+=j::string(_v_339_fn);_text1808+=u"(): ";_text1808+=j::string(j::get(j::get(_v_347_l,this->_literals[29]),this->_literals[9]));_text1808+=u" is ";_text1808+=j::string(_v_348_way);_text1808+=u" of ";_text1808+=j::string(j::get(j::get(j::get(_v_340_all.get(),V(0.0)),this->_literals[29]),this->_literals[9]));_text1808+=u" under it, so its edges would be cut off. Make it smaller (banner() takes max: ";_text1808+=j::string(_v_344_cols.get());_text1808+=u", or a narrower font), crop() it, or lay it on something bigger";return V(std::move(_text1808));})()});})());

}

if(j::truth(([&]()->V{V _lhs1810=j::get(_v_347_l,this->_literals[71]);V _rhs1811=j::builtin("undefined");return V(j::equal(_lhs1810,_rhs1811,true));})())){(void)(([&]()->V{V _base1813=_v_347_l;V _key1814=this->_literals[71];V _assign1812=(j::truth(([&]()->V{V _logical1815=([&]()->V{V _lhs1816=j::get(j::get(_v_347_l,this->_literals[29]),this->_literals[51]);V _rhs1817=this->_literals[84];return V(j::equal(_lhs1816,_rhs1817,true));})();return j::truth(_logical1815)?([&]()->V{V _receiver1820=([&]()->V{V _receiver1823=_v_340_all.get();V _method1824=this->_literals[20];V _method=j::get(_receiver1823,_method1824);j::Args _params1825=j::Args{V(0.0),_v_346_i};return j::call(_method,_params1825,_receiver1823);})();V _method1821=this->_literals[41];V _method=j::get(_receiver1820,_method1821);j::Args _params1822=j::Args{j::function([=](const j::Args &_args_fn349,const V &_receiver_fn349,const V &_self_fn349) mutable ->V{
V _v_350_b;
_v_350_b=_args_fn349[0];
return ([&]()->V{V _lhs1818=j::get(j::get(_v_350_b,this->_literals[29]),this->_literals[49]);V _rhs1819=V(0.0);return j::binary(">",_lhs1818,_rhs1819);})();
return V{};
},1)};return j::call(_method,_params1822,_receiver1820);})():_logical1815;})())?V(1.0):V(0.0));return j::put(_base1813,_key1814,_assign1812);})());
}

}
}
_v_351_steered=([&]()->V{V _receiver1831=_v_340_all.get();V _method1832=this->_literals[41];V _method=j::get(_receiver1831,_method1832);j::Args _params1833=j::Args{j::function([=](const j::Args &_args_fn352,const V &_receiver_fn352,const V &_self_fn352) mutable ->V{
V _v_353_l;
_v_353_l=_args_fn352[0];
return ([&]()->V{V _logical1826=([&]()->V{V _lhs1827=j::unary("typeof",j::get(_v_353_l,this->_literals[74]));V _rhs1828=this->_literals[70];return V(j::equal(_lhs1827,_rhs1828,true));})();return !j::truth(_logical1826)?([&]()->V{V _lhs1829=j::unary("typeof",j::get(_v_353_l,this->_literals[75]));V _rhs1830=this->_literals[70];return V(j::equal(_lhs1829,_rhs1830,true));})():_logical1826;})();
return V{};
},1)};return j::call(_method,_params1833,_receiver1831);})();
_v_354_theirs=([&]()->V{V _callee1842=this->_v_194_together.get();return j::call(_callee1842,j::Args{([&]()->V{V _receiver1836=([&]()->V{V _receiver1839=_v_340_all.get();V _method1840=this->_literals[5];V _method=j::get(_receiver1839,_method1840);j::Args _params1841=j::Args{this->_v_184_period.get()};return j::call(_method,_params1841,_receiver1839);})();V _method1837=this->_literals[45];V _method=j::get(_receiver1836,_method1837);j::Args _params1838=j::Args{j::function([=](const j::Args &_args_fn355,const V &_receiver_fn355,const V &_self_fn355) mutable ->V{
V _v_356_p;
_v_356_p=_args_fn355[0];
return ([&]()->V{V _lhs1834=_v_356_p;V _rhs1835=j::builtin("undefined");return V(!j::equal(_lhs1834,_rhs1835,true));})();
return V{};
},1)};return j::call(_method,_params1838,_receiver1836);})()});})();
_v_357_fitted=(j::truth(([&]()->V{V _logical1843=_v_354_theirs;return j::truth(_logical1843)?([&]()->V{V _lhs1844=_v_354_theirs;V _rhs1845=V(16.0);return j::binary("<=",_lhs1844,_rhs1845);})():_logical1843;})())?([&]()->V{V _lhs1846=([&]()->V{V _number1862=([&]()->V{V _lhs1863=([&]()->V{V _lhs1865=([&]()->V{V _receiver1874=j::builtin("Math");V _method1875=this->_literals[44];V _method=j::get(_receiver1874,_method1875);j::Args _params1876=j::Args{V(1.0),([&]()->V{V _number1869=([&]()->V{V _lhs1870=V(8.0);V _rhs1871=_v_354_theirs;return V(j::number(_lhs1870)/j::number(_rhs1871));})();return V(std::floor(j::number(_number1869)+.5));})()};return j::call(_method,_params1876,_receiver1874);})();V _rhs1866=_v_354_theirs;return V(j::number(_lhs1865)*j::number(_rhs1866));})();V _rhs1864=V(100.0);return V(j::number(_lhs1863)*j::number(_rhs1864));})();return V(std::floor(j::number(_number1862)+.5));})();V _rhs1847=V(100.0);return V(j::number(_lhs1846)/j::number(_rhs1847));})():V(8.0));
{for(const auto &_item1877:j::elements(_v_340_all.get())){V _v_358_l;
_v_358_l=_item1877;
if(j::truth(([&]()->V{V _logical1878=j::get(_v_358_l,this->_literals[80]);return j::truth(_logical1878)?j::unary("!",j::get(j::get(_v_358_l,this->_literals[80]),this->_literals[68])):_logical1878;})())){(void)(([&]()->V{V _base1880=j::get(_v_358_l,this->_literals[80]);V _key1881=this->_literals[68];V _assign1879=_v_357_fitted;return j::put(_base1880,_key1881,_assign1879);})());
}
}}
_v_359_travels=([&]()->V{V _receiver1884=_v_340_all.get();V _method1885=this->_literals[85];V _method=j::get(_receiver1884,_method1885);j::Args _params1886=j::Args{j::function([=](const j::Args &_args_fn360,const V &_receiver_fn360,const V &_self_fn360) mutable ->V{
V _v_361_l;
_v_361_l=_args_fn360[0];
return (j::truth(j::get(_v_361_l,this->_literals[80]))?([&]()->V{j::Args _array1882;_array1882.push_back(j::get(j::get(_v_361_l,this->_literals[80]),this->_literals[68]));return j::array(std::move(_array1882));})():([&]()->V{j::Args _array1883;return j::array(std::move(_array1883));})());
return V{};
},1)};return j::call(_method,_params1886,_receiver1884);})();
_v_362_own.get()=(j::truth(j::get(_v_359_travels,this->_literals[11]))?([&]()->V{V _callee1887=this->_v_194_together.get();return j::call(_callee1887,j::Args{_v_359_travels});})():V(0.0));
_v_363_m.get()=([&]()->V{V _callee1888=this->_v_124_merge.get();return j::call(_callee1888,j::Args{_v_340_all.get()});})();
_v_364_whole=([&]()->V{V _obj1889=j::object();j::put(_obj1889,this->_literals[9],([&]()->V{V _logical1890=j::get(_v_341_given,this->_literals[9]);return j::nullish(_logical1890)?([&]()->V{V _receiver1891=([&]()->V{V _receiver1894=([&]()->V{V _receiver1897=_v_340_all.get();V _method1898=this->_literals[5];V _method=j::get(_receiver1897,_method1898);j::Args _params1899=j::Args{j::function([=](const j::Args &_args_fn365,const V &_receiver_fn365,const V &_self_fn365) mutable ->V{
V _v_366_l;
_v_366_l=_args_fn365[0];
return j::get(j::get(_v_366_l,this->_literals[29]),this->_literals[9]);
return V{};
},1)};return j::call(_method,_params1899,_receiver1897);})();V _method1895=this->_literals[87];V _method=j::get(_receiver1894,_method1895);j::Args _params1896=j::Args{};return j::call(_method,_params1896,_receiver1894);})();V _method1892=this->_literals[88];V _method=j::get(_receiver1891,_method1892);j::Args _params1893=j::Args{this->_literals[86]};return j::call(_method,_params1893,_receiver1891);})():_logical1890;})());j::put(_obj1889,this->_literals[10],j::get(_v_341_given,this->_literals[10]));j::put(_obj1889,this->_literals[51],j::get(j::get(j::get(_v_340_all.get(),V(0.0)),this->_literals[29]),this->_literals[51]));j::put(_obj1889,this->_literals[32],_v_344_cols.get());j::put(_obj1889,this->_literals[33],_v_345_rows.get());j::put(_obj1889,this->_literals[34],_v_342_cell);j::put(_obj1889,this->_literals[49],([&]()->V{V _receiver1904=j::builtin("Math");V _method1905=this->_literals[44];V _method=j::get(_receiver1904,_method1905);j::Args _params1906=j::Args{([&]()->V{V _callee1900=this->_v_214_fpsOf.get();return j::call(_callee1900,j::Args{_v_340_all.get()});})(),(j::truth(([&]()->V{V _logical1901=_v_351_steered;return !j::truth(_logical1901)?j::get(_v_359_travels,this->_literals[11]):_logical1901;})())?V(24.0):V(0.0))};return j::call(_method,_params1906,_receiver1904);})());j::put(_obj1889,this->_literals[53],([&]()->V{V _callee1907=this->_v_209_groundOf.get();return j::call(_callee1907,j::Args{_v_340_all.get()});})());j::put(_obj1889,this->_literals[50],(j::truth(([&]()->V{V _logical1908=_v_351_steered;return !j::truth(_logical1908)?([&]()->V{V _lhs1909=_v_362_own.get();V _rhs1910=j::builtin("undefined");return V(j::equal(_lhs1909,_rhs1910,true));})():_logical1908;})())?j::builtin("undefined"):([&]()->V{V _callee1918=this->_v_194_together.get();return j::call(_callee1918,j::Args{([&]()->V{j::Args _array1911;_array1911.push_back(_v_362_own.get());for(const auto &_value:j::elements(([&]()->V{V _receiver1915=_v_340_all.get();V _method1916=this->_literals[5];V _method=j::get(_receiver1915,_method1916);j::Args _params1917=j::Args{j::function([=](const j::Args &_args_fn367,const V &_receiver_fn367,const V &_self_fn367) mutable ->V{
V _v_368_l;
_v_368_l=_args_fn367[0];
return ([&]()->V{V _logical1912=([&]()->V{V _callee1913=this->_v_184_period.get();return j::call(_callee1913,j::Args{_v_368_l});})();return j::nullish(_logical1912)?([&]()->V{V _logical1914=_v_362_own.get();return !j::truth(_logical1914)?j::builtin("undefined"):_logical1914;})():_logical1912;})();
return V{};
},1)};return j::call(_method,_params1917,_receiver1915);})()))_array1911.push_back(_value);return j::array(std::move(_array1911));})()});})()));j::put(_obj1889,this->_literals[52],([&]()->V{V _callee1919=this->_v_203_stillOf.get();return j::call(_callee1919,j::Args{_v_340_all.get()});})());j::put(_obj1889,this->_literals[54],([&]()->V{V _receiver1920=_v_340_all.get();V _method1921=this->_literals[41];V _method=j::get(_receiver1920,_method1921);j::Args _params1922=j::Args{j::function([=](const j::Args &_args_fn369,const V &_receiver_fn369,const V &_self_fn369) mutable ->V{
V _v_370_l;
_v_370_l=_args_fn369[0];
return j::get(j::get(_v_370_l,this->_literals[29]),this->_literals[54]);
return V{};
},1)};return j::call(_method,_params1922,_receiver1920);})());return _obj1889;})();
return ([&]()->V{V _callee1950=this->_v_230_build.get();return j::call(_callee1950,j::Args{_v_339_fn,_v_364_whole,_v_363_m.get(),j::function([=](const j::Args &_args_fn371,const V &_receiver_fn371,const V &_self_fn371) mutable ->V{
{
j::Cell _v_372_play;
_v_372_play.get()=([&]()->V{V _receiver1924=_v_340_all.get();V _method1925=this->_literals[5];V _method=j::get(_receiver1924,_method1925);j::Args _params1926=j::Args{j::function([=](const j::Args &_args_fn373,const V &_receiver_fn373,const V &_self_fn373) mutable ->V{
V _v_374_l;
V _v_375_i;
_v_374_l=_args_fn373[0];
_v_375_i=_args_fn373[1];
return ([&]()->V{V _callee1923=this->_v_245_player.get();return j::call(_callee1923,j::Args{_v_374_l,j::get(j::get(_v_363_m.get(),this->_literals[46]),_v_375_i)});})();
return V{};
},2)};return j::call(_method,_params1926,_receiver1924);})();
return j::function([=](const j::Args &_args_fn376,const V &_receiver_fn376,const V &_self_fn376) mutable ->V{
V _v_377_t;
V _v_378_s;
V _v_379_ctx;
_v_377_t=_args_fn376[0];
_v_378_s=_args_fn376[1];
_v_379_ctx=_args_fn376[2];
{
{V _v_380_i;
_v_380_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs1927=_v_380_i;V _rhs1928=j::get(_v_340_all.get(),this->_literals[11]);return j::binary("<",_lhs1927,_rhs1928);})());(void)(j::increment(_v_380_i,1,false))){
V _v_381_l;
V _v_382_g;
V _v_383_x;
V _v_384_y;
_v_381_l=j::get(_v_340_all.get(),_v_380_i);
_v_382_g=([&]()->V{V _receiver1929=_v_372_play.get();V _method1930=_v_380_i;V _method=j::get(_receiver1929,_method1930);j::Args _params1931=j::Args{_v_377_t,j::get(_v_379_ctx,this->_literals[58]),j::get(_v_379_ctx,this->_literals[59])};return j::call(_method,_params1931,_receiver1929);})();
V _pattern1933=([&]()->V{V _callee1932=this->_v_322_spot.get();return j::call(_callee1932,j::Args{_v_381_l,_v_377_t,_v_344_cols.get(),_v_345_rows.get()});})();
_v_383_x=j::get(_pattern1933,V(0));
_v_384_y=j::get(_pattern1933,V(1));
if(j::truth(([&]()->V{V _lhs1934=j::get(_v_381_l,this->_literals[73]);V _rhs1935=V::null();return V(j::equal(_lhs1934,_rhs1935,true));})())){(void)(([&]()->V{V _receiver1937=_v_378_s;V _method1938=this->_literals[42];V _method=j::get(_receiver1937,_method1938);j::Args _params1939=j::Args{this->_literals[72],j::builtin("undefined"),([&]()->V{V _obj1936=j::object();j::put(_obj1936,this->_literals[74],_v_383_x);j::put(_obj1936,this->_literals[75],_v_384_y);j::put(_obj1936,this->_literals[32],j::get(_v_381_l,this->_literals[32]));j::put(_obj1936,this->_literals[33],j::get(_v_381_l,this->_literals[33]));return _obj1936;})()};return j::call(_method,_params1939,_receiver1937);})());
}else {if(j::truth(j::get(_v_381_l,this->_literals[71]))){(void)(([&]()->V{V _callee1945=this->_v_295_knockout.get();return j::call(_callee1945,j::Args{_v_378_s,_v_382_g,_v_383_x,_v_384_y,j::get(_v_381_l,this->_literals[71]),(j::truth(([&]()->V{V _lhs1940=j::get(_v_381_l,this->_literals[73]);V _rhs1941=V::null();return V(j::equal(_lhs1940,_rhs1941,true));})())?j::unary("-",V(1.0)):([&]()->V{V _receiver1942=j::get(_v_381_l,this->_literals[73]);V _method1943=this->_literals[89];V _method=j::get(_receiver1942,_method1943);j::Args _params1944=j::Args{V(0.0)};return j::call(_method,_params1944,_receiver1942);})())});})());
}
}
(void)(([&]()->V{V _receiver1947=_v_378_s;V _method1948=this->_literals[90];V _method=j::get(_receiver1947,_method1948);j::Args _params1949=j::Args{_v_382_g,_v_383_x,_v_384_y,([&]()->V{V _obj1946=j::object();j::put(_obj1946,this->_literals[73],j::get(_v_381_l,this->_literals[73]));return _obj1946;})()};return j::call(_method,_params1949,_receiver1947);})());

}
}

}

return V{};
},3);

}

return V{};
},0)});})();

}

return V{};
},2);
this->_v_385_layer.get()=j::function([=](const j::Args &_args_fn386,const V &_receiver_fn386,const V &_self_fn386) mutable ->V{
V _v_387_base;
V _v_388_over;
_v_387_base=_args_fn386[0];
_v_388_over=j::rest(_args_fn386,1);
{
return ([&]()->V{V _callee1956=this->_v_337_stack.get();return j::call(_callee1956,j::Args{this->_literals[91],([&]()->V{V _receiver1952=([&]()->V{j::Args _array1955;_array1955.push_back(_v_387_base);for(const auto &_value:j::elements(_v_388_over))_array1955.push_back(_value);return j::array(std::move(_array1955));})();V _method1953=this->_literals[5];V _method=j::get(_receiver1952,_method1953);j::Args _params1954=j::Args{j::function([=](const j::Args &_args_fn389,const V &_receiver_fn389,const V &_self_fn389) mutable ->V{
V _v_390_v;
_v_390_v=_args_fn389[0];
return ([&]()->V{V _callee1951=this->_v_287_layerOf.get();return j::call(_callee1951,j::Args{this->_literals[91],_v_390_v,this->_literals[92]});})();
return V{};
},1)};return j::call(_method,_params1954,_receiver1952);})()});})();

}

return V{};
},1);
this->_v_391_over.get()=j::function([=](const j::Args &_args_fn392,const V &_receiver_fn392,const V &_self_fn392) mutable ->V{
V _v_393_top;
V _v_394_bottom;
V _v_395_o;
_v_393_top=_args_fn392[0];
_v_394_bottom=_args_fn392[1];
V _default1957=_args_fn392[2];if(_default1957.kind==V::Undefined||_default1957.kind==V::Hole)_default1957=([&]()->V{V _obj1958=j::object();return _obj1958;})();
_v_395_o=_default1957;
{
V _v_396_name;
V _v_397_note;
V _v_398_opts;
V _v_401_upper;
V _pattern1966=([&]()->V{V _callee1965=this->_v_54_object.get();return j::call(_callee1965,j::Args{_v_395_o,this->_literals[93],([&]()->V{j::Args _array1959;for(const auto &_value:j::elements(([&]()->V{V _receiver1962=this->_v_274_LAYER.get();V _method1963=this->_literals[45];V _method=j::get(_receiver1962,_method1963);j::Args _params1964=j::Args{j::function([=](const j::Args &_args_fn399,const V &_receiver_fn399,const V &_self_fn399) mutable ->V{
V _v_400_k;
_v_400_k=_args_fn399[0];
return ([&]()->V{V _lhs1960=_v_400_k;V _rhs1961=this->_literals[16];return V(!j::equal(_lhs1960,_rhs1961,true));})();
return V{};
},1)};return j::call(_method,_params1964,_receiver1962);})()))_array1959.push_back(_value);_array1959.push_back(this->_literals[9]);_array1959.push_back(this->_literals[10]);return j::array(std::move(_array1959));})()});})();
_v_396_name=j::get(_pattern1966,this->_literals[9]);
_v_397_note=j::get(_pattern1966,this->_literals[10]);
_v_398_opts=j::object_rest(_pattern1966,{j::string(this->_literals[9]),j::string(this->_literals[10])});
_v_401_upper=(j::truth(([&]()->V{V _callee1967=this->_v_81_isClip.get();return j::call(_callee1967,j::Args{_v_393_top});})())?([&]()->V{V _obj1968=j::object();V _spread1969=_v_398_opts;for(const auto &_key:j::keys(_spread1969))j::put(_obj1968,_key,j::get(_spread1969,_key));V _spread1970=_v_393_top;for(const auto &_key:j::keys(_spread1970))j::put(_obj1968,_key,j::get(_spread1970,_key));return _obj1968;})():([&]()->V{V _obj1971=j::object();V _spread1972=_v_398_opts;for(const auto &_key:j::keys(_spread1972))j::put(_obj1971,_key,j::get(_spread1972,_key));j::put(_obj1971,this->_literals[16],_v_393_top);return _obj1971;})());
return ([&]()->V{V _callee1978=this->_v_337_stack.get();return j::call(_callee1978,j::Args{this->_literals[94],([&]()->V{j::Args _array1973;_array1973.push_back(([&]()->V{V _callee1974=this->_v_287_layerOf.get();return j::call(_callee1974,j::Args{this->_literals[94],_v_394_bottom,this->_literals[92]});})());_array1973.push_back(([&]()->V{V _callee1975=this->_v_287_layerOf.get();return j::call(_callee1975,j::Args{this->_literals[94],_v_401_upper,this->_literals[95]});})());return j::array(std::move(_array1973));})(),([&]()->V{V _callee1977=this->_v_64_naming.get();return j::call(_callee1977,j::Args{this->_literals[94],([&]()->V{V _obj1976=j::object();j::put(_obj1976,this->_literals[9],_v_396_name);j::put(_obj1976,this->_literals[10],_v_397_note);return _obj1976;})()});})()});})();

}

return V{};
},2);
this->_v_403_borderOf.get()=j::function([=](const j::Args &_args_fn404,const V &_receiver_fn404,const V &_self_fn404) mutable ->V{
V _v_405_name;
V _v_406_v;
_v_405_name=_args_fn404[0];
_v_406_v=_args_fn404[1];
{
V _v_407_o;
V _v_408_style;
V _v_409_chars;
V _v_413_title;
V _v_415_color;
V _v_416_p;
V _v_417_pad;
if(j::truth(([&]()->V{V _logical1979=([&]()->V{V _lhs1980=_v_406_v;V _rhs1981=j::builtin("undefined");return V(j::equal(_lhs1980,_rhs1981,true));})();return !j::truth(_logical1979)?([&]()->V{V _lhs1982=_v_406_v;V _rhs1983=V(false);return V(j::equal(_lhs1982,_rhs1983,true));})():_logical1979;})())){return V::null();
}
_v_407_o=(j::truth(([&]()->V{V _lhs1984=_v_406_v;V _rhs1985=V(true);return V(j::equal(_lhs1984,_rhs1985,true));})())?([&]()->V{V _obj1986=j::object();return _obj1986;})():(j::truth(([&]()->V{V _logical1987=([&]()->V{V _logical1988=([&]()->V{V _lhs1989=_v_406_v;V _rhs1990=V::null();return V(!j::equal(_lhs1989,_rhs1990,true));})();return j::truth(_logical1988)?([&]()->V{V _lhs1991=j::unary("typeof",_v_406_v);V _rhs1992=this->_literals[6];return V(j::equal(_lhs1991,_rhs1992,true));})():_logical1988;})();return j::truth(_logical1987)?j::unary("!",([&]()->V{V _receiver1993=j::builtin("Array");V _method1994=this->_literals[7];V _method=j::get(_receiver1993,_method1994);j::Args _params1995=j::Args{_v_406_v};return j::call(_method,_params1995,_receiver1993);})()):_logical1987;})())?_v_406_v:([&]()->V{V _callee1998=this->_v_13_fail.get();return j::call(_callee1998,j::Args{([&]()->V{std::u16string _text1996;_text1996+=u"";_text1996+=j::string(_v_405_name);_text1996+=u" takes true, or { style, title, color, pad }, not ";_text1996+=j::string(([&]()->V{V _callee1997=this->_v_25_shown.get();return j::call(_callee1997,j::Args{_v_406_v});})());_text1996+=u"";return V(std::move(_text1996));})()});})()));
(void)(([&]()->V{V _callee2000=this->_v_54_object.get();return j::call(_callee2000,j::Args{_v_407_o,_v_405_name,([&]()->V{j::Args _array1999;_array1999.push_back(this->_literals[96]);_array1999.push_back(this->_literals[97]);_array1999.push_back(this->_literals[25]);_array1999.push_back(this->_literals[98]);return j::array(std::move(_array1999));})()});})());
_v_408_style=([&]()->V{V _logical2001=j::get(_v_407_o,this->_literals[96]);return j::nullish(_logical2001)?this->_literals[99]:_logical2001;})();
_v_409_chars=(j::truth(([&]()->V{V _logical2002=([&]()->V{V _lhs2003=j::unary("typeof",_v_408_style);V _rhs2004=this->_literals[15];return V(j::equal(_lhs2003,_rhs2004,true));})();return j::truth(_logical2002)?([&]()->V{V _receiver2005=j::builtin("Object");V _method2006=this->_literals[100];V _method=j::get(_receiver2005,_method2006);j::Args _params2007=j::Args{this->_v_402_BOXES.get(),_v_408_style};return j::call(_method,_params2007,_receiver2005);})():_logical2002;})())?j::get(this->_v_402_BOXES.get(),_v_408_style):_v_408_style);
if(j::truth(([&]()->V{V _logical2008=([&]()->V{V _logical2009=([&]()->V{V _lhs2010=j::unary("typeof",_v_409_chars);V _rhs2011=this->_literals[15];return V(!j::equal(_lhs2010,_rhs2011,true));})();return !j::truth(_logical2009)?([&]()->V{V _lhs2012=j::get(_v_409_chars,this->_literals[11]);V _rhs2013=V(6.0);return V(!j::equal(_lhs2012,_rhs2013,true));})():_logical2009;})();return !j::truth(_logical2008)?([&]()->V{V _receiver2014=j::regexp(u"[\\ud800-\\udfff]","");V _method2015=this->_literals[19];V _method=j::get(_receiver2014,_method2015);j::Args _params2016=j::Args{_v_409_chars};return j::call(_method,_params2016,_receiver2014);})():_logical2008;})())){(void)(([&]()->V{V _callee2029=this->_v_13_fail.get();return j::call(_callee2029,j::Args{([&]()->V{std::u16string _text2017;_text2017+=u"a border's style takes ";_text2017+=j::string(([&]()->V{V _callee2027=this->_v_28_or.get();return j::call(_callee2027,j::Args{([&]()->V{V _receiver2021=([&]()->V{V _receiver2024=j::builtin("Object");V _method2025=this->_literals[101];V _method=j::get(_receiver2024,_method2025);j::Args _params2026=j::Args{this->_v_402_BOXES.get()};return j::call(_method,_params2026,_receiver2024);})();V _method2022=this->_literals[5];V _method=j::get(_receiver2021,_method2022);j::Args _params2023=j::Args{j::function([=](const j::Args &_args_fn410,const V &_receiver_fn410,const V &_self_fn410) mutable ->V{
V _v_411_k;
_v_411_k=_args_fn410[0];
return ([&]()->V{V _receiver2018=j::builtin("JSON");V _method2019=this->_literals[4];V _method=j::get(_receiver2018,_method2019);j::Args _params2020=j::Args{_v_411_k};return j::call(_method,_params2020,_receiver2018);})();
return V{};
},1)};return j::call(_method,_params2023,_receiver2021);})()});})());_text2017+=u", or 6 characters of your own: top left, top right, bottom left, bottom right, across, down; not ";_text2017+=j::string(([&]()->V{V _callee2028=this->_v_25_shown.get();return j::call(_callee2028,j::Args{_v_408_style});})());_text2017+=u"";return V(std::move(_text2017));})()});})());
}
{for(const auto &_item2030:j::elements(_v_409_chars)){V _v_412_ch;
_v_412_ch=_item2030;
(void)(([&]()->V{V _callee2031=this->_v_11_code.get();return j::call(_callee2031,j::Args{_v_412_ch});})());
}}
_v_413_title=([&]()->V{V _logical2032=j::get(_v_407_o,this->_literals[97]);return j::nullish(_logical2032)?V(false):_logical2032;})();
if(j::truth(([&]()->V{V _logical2033=([&]()->V{V _lhs2034=j::unary("typeof",_v_413_title);V _rhs2035=this->_literals[102];return V(!j::equal(_lhs2034,_rhs2035,true));})();return j::truth(_logical2033)?([&]()->V{V _lhs2036=j::unary("typeof",_v_413_title);V _rhs2037=this->_literals[15];return V(!j::equal(_lhs2036,_rhs2037,true));})():_logical2033;})())){(void)(([&]()->V{V _callee2040=this->_v_13_fail.get();return j::call(_callee2040,j::Args{([&]()->V{std::u16string _text2038;_text2038+=u"a border's title takes words, or true for the piece's name, not ";_text2038+=j::string(([&]()->V{V _callee2039=this->_v_25_shown.get();return j::call(_callee2039,j::Args{_v_413_title});})());_text2038+=u"";return V(std::move(_text2038));})()});})());
}
if(j::truth(([&]()->V{V _lhs2041=j::unary("typeof",_v_413_title);V _rhs2042=this->_literals[15];return V(j::equal(_lhs2041,_rhs2042,true));})())){{for(const auto &_item2043:j::elements(_v_413_title)){V _v_414_ch;
_v_414_ch=_item2043;
(void)(([&]()->V{V _callee2044=this->_v_11_code.get();return j::call(_callee2044,j::Args{_v_414_ch});})());
}}
}
_v_415_color=([&]()->V{V _callee2045=this->_v_73_colorOf.get();return j::call(_callee2045,j::Args{j::get(_v_407_o,this->_literals[25]),this->_literals[103]});})();
_v_416_p=j::get(_v_407_o,this->_literals[98]);
_v_417_pad=(j::truth(([&]()->V{V _lhs2046=_v_416_p;V _rhs2047=j::builtin("undefined");return V(j::equal(_lhs2046,_rhs2047,true));})())?([&]()->V{j::Args _array2048;_array2048.push_back(V(0.0));_array2048.push_back(V(1.0));return j::array(std::move(_array2048));})():(j::truth(([&]()->V{V _lhs2049=j::unary("typeof",_v_416_p);V _rhs2050=this->_literals[104];return V(j::equal(_lhs2049,_rhs2050,true));})())?([&]()->V{j::Args _array2051;_array2051.push_back(([&]()->V{V _callee2052=this->_v_34_whole.get();return j::call(_callee2052,j::Args{_v_416_p,this->_literals[105],V(0.0),V(0.0)});})());_array2051.push_back(([&]()->V{V _callee2053=this->_v_34_whole.get();return j::call(_callee2053,j::Args{_v_416_p,this->_literals[105],V(0.0),V(0.0)});})());return j::array(std::move(_array2051));})():(j::truth(([&]()->V{V _logical2054=([&]()->V{V _receiver2055=j::builtin("Array");V _method2056=this->_literals[7];V _method=j::get(_receiver2055,_method2056);j::Args _params2057=j::Args{_v_416_p};return j::call(_method,_params2057,_receiver2055);})();return j::truth(_logical2054)?([&]()->V{V _lhs2058=j::get(_v_416_p,this->_literals[11]);V _rhs2059=V(2.0);return V(j::equal(_lhs2058,_rhs2059,true));})():_logical2054;})())?([&]()->V{j::Args _array2060;_array2060.push_back(([&]()->V{V _callee2061=this->_v_34_whole.get();return j::call(_callee2061,j::Args{j::get(_v_416_p,V(0.0)),this->_literals[106],V(0.0),V(0.0)});})());_array2060.push_back(([&]()->V{V _callee2062=this->_v_34_whole.get();return j::call(_callee2062,j::Args{j::get(_v_416_p,V(1.0)),this->_literals[107],V(0.0),V(0.0)});})());return j::array(std::move(_array2060));})():([&]()->V{V _callee2065=this->_v_13_fail.get();return j::call(_callee2065,j::Args{([&]()->V{std::u16string _text2063;_text2063+=u"a border's pad takes a number, or [rows, columns], not ";_text2063+=j::string(([&]()->V{V _callee2064=this->_v_25_shown.get();return j::call(_callee2064,j::Args{_v_416_p});})());_text2063+=u"";return V(std::move(_text2063));})()});})())));
return ([&]()->V{V _obj2066=j::object();j::put(_obj2066,this->_literals[56],_v_409_chars);j::put(_obj2066,this->_literals[97],_v_413_title);j::put(_obj2066,this->_literals[25],_v_415_color);j::put(_obj2066,this->_literals[98],_v_417_pad);return _obj2066;})();

}

return V{};
},2);
this->_v_418_box.get()=j::function([=](const j::Args &_args_fn419,const V &_receiver_fn419,const V &_self_fn419) mutable ->V{
j::Cell _v_420_s;
V _v_421_x;
V _v_422_y;
V _v_423_w;
V _v_424_h;
V _v_425_chars;
V _v_426_title;
j::Cell _v_427_color;
_v_420_s.get()=_args_fn419[0];
V _pattern2067=_args_fn419[1];
_v_421_x=j::get(_pattern2067,this->_literals[74]);
_v_422_y=j::get(_pattern2067,this->_literals[75]);
_v_423_w=j::get(_pattern2067,this->_literals[32]);
_v_424_h=j::get(_pattern2067,this->_literals[33]);
_v_425_chars=_args_fn419[2];
_v_426_title=_args_fn419[3];
_v_427_color.get()=_args_fn419[4];
{
V _v_428_tl;
V _v_429_tr;
V _v_430_bl;
V _v_431_br;
V _v_432_across;
V _v_433_down;
V _v_436_set;
V _pattern2074=([&]()->V{V _receiver2071=j::builtin("Array");V _method2072=this->_literals[47];V _method=j::get(_receiver2071,_method2072);j::Args _params2073=j::Args{_v_425_chars,j::function([=](const j::Args &_args_fn434,const V &_receiver_fn434,const V &_self_fn434) mutable ->V{
V _v_435_ch;
_v_435_ch=_args_fn434[0];
return ([&]()->V{V _receiver2068=_v_435_ch;V _method2069=this->_literals[89];V _method=j::get(_receiver2068,_method2069);j::Args _params2070=j::Args{V(0.0)};return j::call(_method,_params2070,_receiver2068);})();
return V{};
},1)};return j::call(_method,_params2073,_receiver2071);})();
_v_428_tl=j::get(_pattern2074,V(0));
_v_429_tr=j::get(_pattern2074,V(1));
_v_430_bl=j::get(_pattern2074,V(2));
_v_431_br=j::get(_pattern2074,V(3));
_v_432_across=j::get(_pattern2074,V(4));
_v_433_down=j::get(_pattern2074,V(5));
_v_436_set=j::function([=](const j::Args &_args_fn437,const V &_receiver_fn437,const V &_self_fn437) mutable ->V{
V _v_438_cx;
V _v_439_cy;
V _v_440_ch;
_v_438_cx=_args_fn437[0];
_v_439_cy=_args_fn437[1];
_v_440_ch=_args_fn437[2];
{
V _v_441_i;
_v_441_i=([&]()->V{V _receiver2075=_v_420_s.get();V _method2076=this->_literals[81];V _method=j::get(_receiver2075,_method2076);j::Args _params2077=j::Args{_v_438_cx,_v_439_cy};return j::call(_method,_params2077,_receiver2075);})();
if(j::truth(([&]()->V{V _lhs2078=_v_441_i;V _rhs2079=V(0.0);return j::binary(">=",_lhs2078,_rhs2079);})())){(void)(([&]()->V{V _receiver2080=_v_420_s.get();V _method2081=this->_literals[82];V _method=j::get(_receiver2080,_method2081);j::Args _params2082=j::Args{_v_441_i,_v_440_ch,_v_427_color.get()};return j::call(_method,_params2082,_receiver2080);})());
}

}

return V{};
},3);
{V _v_442_c;
_v_442_c=V(1.0);
for(;j::truth(([&]()->V{V _lhs2083=_v_442_c;V _rhs2084=([&]()->V{V _lhs2085=_v_423_w;V _rhs2086=V(1.0);return V(j::number(_lhs2085)-j::number(_rhs2086));})();return j::binary("<",_lhs2083,_rhs2084);})());(void)(j::increment(_v_442_c,1,false))){(void)((([&]()->V{V _callee2089=_v_436_set;return j::call(_callee2089,j::Args{([&]()->V{V _lhs2087=_v_421_x;V _rhs2088=_v_442_c;return j::binary("+",_lhs2087,_rhs2088);})(),_v_422_y,_v_432_across});})(),([&]()->V{V _callee2096=_v_436_set;return j::call(_callee2096,j::Args{([&]()->V{V _lhs2090=_v_421_x;V _rhs2091=_v_442_c;return j::binary("+",_lhs2090,_rhs2091);})(),([&]()->V{V _lhs2092=([&]()->V{V _lhs2094=_v_422_y;V _rhs2095=_v_424_h;return j::binary("+",_lhs2094,_rhs2095);})();V _rhs2093=V(1.0);return V(j::number(_lhs2092)-j::number(_rhs2093));})(),_v_432_across});})()));
}}
{V _v_443_r;
_v_443_r=V(1.0);
for(;j::truth(([&]()->V{V _lhs2097=_v_443_r;V _rhs2098=([&]()->V{V _lhs2099=_v_424_h;V _rhs2100=V(1.0);return V(j::number(_lhs2099)-j::number(_rhs2100));})();return j::binary("<",_lhs2097,_rhs2098);})());(void)(j::increment(_v_443_r,1,false))){(void)((([&]()->V{V _callee2103=_v_436_set;return j::call(_callee2103,j::Args{_v_421_x,([&]()->V{V _lhs2101=_v_422_y;V _rhs2102=_v_443_r;return j::binary("+",_lhs2101,_rhs2102);})(),_v_433_down});})(),([&]()->V{V _callee2110=_v_436_set;return j::call(_callee2110,j::Args{([&]()->V{V _lhs2104=([&]()->V{V _lhs2106=_v_421_x;V _rhs2107=_v_423_w;return j::binary("+",_lhs2106,_rhs2107);})();V _rhs2105=V(1.0);return V(j::number(_lhs2104)-j::number(_rhs2105));})(),([&]()->V{V _lhs2108=_v_422_y;V _rhs2109=_v_443_r;return j::binary("+",_lhs2108,_rhs2109);})(),_v_433_down});})()));
}}
(void)((([&]()->V{V _callee2111=_v_436_set;return j::call(_callee2111,j::Args{_v_421_x,_v_422_y,_v_428_tl});})(),([&]()->V{V _callee2116=_v_436_set;return j::call(_callee2116,j::Args{([&]()->V{V _lhs2112=([&]()->V{V _lhs2114=_v_421_x;V _rhs2115=_v_423_w;return j::binary("+",_lhs2114,_rhs2115);})();V _rhs2113=V(1.0);return V(j::number(_lhs2112)-j::number(_rhs2113));})(),_v_422_y,_v_429_tr});})(),([&]()->V{V _callee2121=_v_436_set;return j::call(_callee2121,j::Args{_v_421_x,([&]()->V{V _lhs2117=([&]()->V{V _lhs2119=_v_422_y;V _rhs2120=_v_424_h;return j::binary("+",_lhs2119,_rhs2120);})();V _rhs2118=V(1.0);return V(j::number(_lhs2117)-j::number(_rhs2118));})(),_v_430_bl});})(),([&]()->V{V _callee2130=_v_436_set;return j::call(_callee2130,j::Args{([&]()->V{V _lhs2122=([&]()->V{V _lhs2124=_v_421_x;V _rhs2125=_v_423_w;return j::binary("+",_lhs2124,_rhs2125);})();V _rhs2123=V(1.0);return V(j::number(_lhs2122)-j::number(_rhs2123));})(),([&]()->V{V _lhs2126=([&]()->V{V _lhs2128=_v_422_y;V _rhs2129=_v_424_h;return j::binary("+",_lhs2128,_rhs2129);})();V _rhs2127=V(1.0);return V(j::number(_lhs2126)-j::number(_rhs2127));})(),_v_431_br});})()));
if(j::truth(([&]()->V{V _logical2131=_v_426_title;return j::truth(_logical2131)?([&]()->V{V _lhs2132=_v_423_w;V _rhs2133=V(7.0);return j::binary(">=",_lhs2132,_rhs2133);})():_logical2131;})())){
V _v_444_room;
V _v_445_words;
_v_444_room=([&]()->V{V _lhs2134=_v_423_w;V _rhs2135=V(6.0);return V(j::number(_lhs2134)-j::number(_rhs2135));})();
_v_445_words=([&]()->V{std::u16string _text2136;_text2136+=u" ";_text2136+=j::string((j::truth(([&]()->V{V _lhs2137=j::get(_v_426_title,this->_literals[11]);V _rhs2138=_v_444_room;return j::binary(">",_lhs2137,_rhs2138);})())?([&]()->V{V _lhs2139=([&]()->V{V _receiver2141=([&]()->V{V _receiver2146=_v_426_title;V _method2147=this->_literals[20];V _method=j::get(_receiver2146,_method2147);j::Args _params2148=j::Args{V(0.0),([&]()->V{V _lhs2144=_v_444_room;V _rhs2145=V(1.0);return V(j::number(_lhs2144)-j::number(_rhs2145));})()};return j::call(_method,_params2148,_receiver2146);})();V _method2142=this->_literals[108];V _method=j::get(_receiver2141,_method2142);j::Args _params2143=j::Args{};return j::call(_method,_params2143,_receiver2141);})();V _rhs2140=this->_literals[109];return j::binary("+",_lhs2139,_rhs2140);})():_v_426_title));_text2136+=u" ";return V(std::move(_text2136));})();
{V _v_446_k;
_v_446_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs2149=_v_446_k;V _rhs2150=j::get(_v_445_words,this->_literals[11]);return j::binary("<",_lhs2149,_rhs2150);})());(void)(j::increment(_v_446_k,1,false))){(void)(([&]()->V{V _callee2158=_v_436_set;return j::call(_callee2158,j::Args{([&]()->V{V _lhs2151=([&]()->V{V _lhs2153=_v_421_x;V _rhs2154=V(2.0);return j::binary("+",_lhs2153,_rhs2154);})();V _rhs2152=_v_446_k;return j::binary("+",_lhs2151,_rhs2152);})(),_v_422_y,([&]()->V{V _receiver2155=_v_445_words;V _method2156=this->_literals[89];V _method=j::get(_receiver2155,_method2156);j::Args _params2157=j::Args{_v_446_k};return j::call(_method,_params2157,_receiver2155);})()});})());
}}

}


}

return V{};
},5);
this->_v_456_border.get()=j::function([=](const j::Args &_args_fn457,const V &_receiver_fn457,const V &_self_fn457) mutable ->V{
V _v_458_src;
V _v_459_o;
_v_458_src=_args_fn457[0];
V _default2159=_args_fn457[1];if(_default2159.kind==V::Undefined||_default2159.kind==V::Hole)_default2159=([&]()->V{V _obj2160=j::object();return _obj2160;})();
_v_459_o=_default2159;
{
V _v_460_fn;
j::Cell _v_461_p;
j::Cell _v_462_b;
j::Cell _v_463_py;
j::Cell _v_464_px;
j::Cell _v_465_cols;
j::Cell _v_466_rows;
j::Cell _v_467_m;
j::Cell _v_468_title;
V _v_469_boxed;
_v_460_fn=this->_literals[110];
_v_461_p.get()=([&]()->V{V _callee2161=this->_v_93_prepare.get();return j::call(_callee2161,j::Args{_v_460_fn,_v_458_src});})();
_v_462_b.get()=([&]()->V{V _callee2163=this->_v_403_borderOf.get();return j::call(_callee2163,j::Args{this->_literals[111],([&]()->V{V _callee2162=this->_v_54_object.get();return j::call(_callee2162,j::Args{_v_459_o,this->_literals[111]});})()});})();
V _pattern2164=j::get(_v_462_b.get(),this->_literals[98]);
_v_463_py.get()=j::get(_pattern2164,V(0));
_v_464_px.get()=j::get(_pattern2164,V(1));
_v_465_cols.get()=([&]()->V{V _lhs2165=([&]()->V{V _lhs2167=j::get(_v_461_p.get(),this->_literals[32]);V _rhs2168=([&]()->V{V _lhs2169=V(2.0);V _rhs2170=_v_464_px.get();return V(j::number(_lhs2169)*j::number(_rhs2170));})();return j::binary("+",_lhs2167,_rhs2168);})();V _rhs2166=V(2.0);return j::binary("+",_lhs2165,_rhs2166);})();
_v_466_rows.get()=([&]()->V{V _lhs2171=([&]()->V{V _lhs2173=j::get(_v_461_p.get(),this->_literals[33]);V _rhs2174=([&]()->V{V _lhs2175=V(2.0);V _rhs2176=_v_463_py.get();return V(j::number(_lhs2175)*j::number(_rhs2176));})();return j::binary("+",_lhs2173,_rhs2174);})();V _rhs2172=V(2.0);return j::binary("+",_lhs2171,_rhs2172);})();
_v_467_m.get()=([&]()->V{V _callee2180=this->_v_124_merge.get();return j::call(_callee2180,j::Args{([&]()->V{j::Args _array2177;_array2177.push_back(_v_461_p.get());return j::array(std::move(_array2177));})(),([&]()->V{V _logical2178=j::get(_v_462_b.get(),this->_literals[25]);return j::nullish(_logical2178)?([&]()->V{j::Args _array2179;return j::array(std::move(_array2179));})():_logical2178;})(),j::unary("!",j::get(_v_462_b.get(),this->_literals[25]))});})();
_v_468_title.get()=([&]()->V{V _callee2181=this->_v_447_titleOf.get();return j::call(_callee2181,j::Args{_v_462_b.get(),j::get(j::get(_v_461_p.get(),this->_literals[29]),this->_literals[9])});})();
_v_469_boxed=([&]()->V{V _callee2198=this->_v_230_build.get();return j::call(_callee2198,j::Args{_v_460_fn,([&]()->V{V _obj2182=j::object();V _spread2183=([&]()->V{V _callee2184=this->_v_623_single.get();return j::call(_callee2184,j::Args{_v_461_p.get()});})();for(const auto &_key:j::keys(_spread2183))j::put(_obj2182,_key,j::get(_spread2183,_key));j::put(_obj2182,this->_literals[32],_v_465_cols.get());j::put(_obj2182,this->_literals[33],_v_466_rows.get());return _obj2182;})(),_v_467_m.get(),j::function([=](const j::Args &_args_fn470,const V &_receiver_fn470,const V &_self_fn470) mutable ->V{
V _v_471_options;
_v_471_options=_args_fn470[0];
{
j::Cell _v_472_play;
j::Cell _v_473_ink;
_v_472_play.get()=([&]()->V{V _callee2185=this->_v_245_player.get();return j::call(_callee2185,j::Args{_v_461_p.get(),j::get(j::get(_v_467_m.get(),this->_literals[46]),V(0.0)),_v_471_options});})();
_v_473_ink.get()=([&]()->V{V _callee2186=this->_v_451_borderInk.get();return j::call(_callee2186,j::Args{_v_467_m.get(),V(1.0),_v_462_b.get()});})();
return j::function([=](const j::Args &_args_fn474,const V &_receiver_fn474,const V &_self_fn474) mutable ->V{
V _v_475_t;
V _v_476_s;
V _v_477_ctx;
_v_475_t=_args_fn474[0];
_v_476_s=_args_fn474[1];
_v_477_ctx=_args_fn474[2];
{
(void)(([&]()->V{V _callee2189=this->_v_418_box.get();return j::call(_callee2189,j::Args{_v_476_s,([&]()->V{V _obj2187=j::object();j::put(_obj2187,this->_literals[74],V(0.0));j::put(_obj2187,this->_literals[75],V(0.0));j::put(_obj2187,this->_literals[32],_v_465_cols.get());j::put(_obj2187,this->_literals[33],_v_466_rows.get());return _obj2187;})(),j::get(_v_462_b.get(),this->_literals[56]),_v_468_title.get(),(j::truth(([&]()->V{V _logical2188=j::get(_v_477_ctx,this->_literals[59]);return !j::truth(_logical2188)?j::unary("!",_v_473_ink.get()):_logical2188;})())?this->_v_4_NONE.get():j::get(_v_473_ink.get(),(j::truth(j::get(_v_477_ctx,this->_literals[58]))?V(0.0):V(1.0))))});})());
(void)(([&]()->V{V _receiver2195=_v_476_s;V _method2196=this->_literals[90];V _method=j::get(_receiver2195,_method2196);j::Args _params2197=j::Args{([&]()->V{V _callee2190=_v_472_play.get();return j::call(_callee2190,j::Args{_v_475_t,j::get(_v_477_ctx,this->_literals[58]),j::get(_v_477_ctx,this->_literals[59])});})(),([&]()->V{V _lhs2191=_v_464_px.get();V _rhs2192=V(1.0);return j::binary("+",_lhs2191,_rhs2192);})(),([&]()->V{V _lhs2193=_v_463_py.get();V _rhs2194=V(1.0);return j::binary("+",_lhs2193,_rhs2194);})()};return j::call(_method,_params2197,_receiver2195);})());

}

return V{};
},3);

}

return V{};
},1)});})();
return ([&]()->V{V _callee2200=this->_v_633_withMotion.get();return j::call(_callee2200,j::Args{_v_469_boxed,([&]()->V{V _callee2199=this->_v_626_playedOnce.get();return j::call(_callee2199,j::Args{_v_461_p.get()});})()});})();

}

return V{};
},1);
this->_v_478_arrange.get()=j::function([=](const j::Args &_args_fn479,const V &_receiver_fn479,const V &_self_fn479) mutable ->V{
V _v_480_fn;
j::Cell _v_481_all;
V _v_482_cols;
V _v_483_rows;
j::Cell _v_484_spots;
V _v_485_name;
V _v_486_own;
j::Cell _v_487_boxes;
j::Cell _v_488_b;
_v_480_fn=_args_fn479[0];
_v_481_all.get()=_args_fn479[1];
_v_482_cols=_args_fn479[2];
_v_483_rows=_args_fn479[3];
_v_484_spots.get()=_args_fn479[4];
_v_485_name=_args_fn479[5];
_v_486_own=_args_fn479[6];
V _default2201=_args_fn479[7];if(_default2201.kind==V::Undefined||_default2201.kind==V::Hole)_default2201=([&]()->V{j::Args _array2202;return j::array(std::move(_array2202));})();
_v_487_boxes.get()=_default2201;
V _default2203=_args_fn479[8];if(_default2203.kind==V::Undefined||_default2203.kind==V::Hole)_default2203=V::null();
_v_488_b.get()=_default2203;
{
j::Cell _v_489_m;
V _v_490_given;
V _v_491_note;
j::Cell _v_492_loop;
V _v_493_fps;
V _v_494_whole;
_v_489_m.get()=([&]()->V{V _callee2213=this->_v_124_merge.get();return j::call(_callee2213,j::Args{_v_481_all.get(),([&]()->V{V _logical2204=([&]()->V{V _chain2205=_v_488_b.get();if(j::nullish(_chain2205))return V{};V _chain2206=j::get(_chain2205,this->_literals[25]);return _chain2206;})();return j::nullish(_logical2204)?([&]()->V{j::Args _array2207;return j::array(std::move(_array2207));})():_logical2204;})(),([&]()->V{V _logical2208=([&]()->V{V _lhs2209=j::get(_v_487_boxes.get(),this->_literals[11]);V _rhs2210=V(0.0);return j::binary(">",_lhs2209,_rhs2210);})();return j::truth(_logical2208)?j::unary("!",([&]()->V{V _chain2211=_v_488_b.get();if(j::nullish(_chain2211))return V{};V _chain2212=j::get(_chain2211,this->_literals[25]);return _chain2212;})()):_logical2208;})()});})();
V _pattern2215=([&]()->V{V _callee2214=this->_v_64_naming.get();return j::call(_callee2214,j::Args{_v_480_fn,_v_486_own});})();
_v_490_given=j::get(_pattern2215,this->_literals[9]);
_v_491_note=j::get(_pattern2215,this->_literals[10]);
_v_492_loop.get()=([&]()->V{V _callee2216=this->_v_68_loopOption.get();return j::call(_callee2216,j::Args{_v_480_fn,j::get(_v_486_own,this->_literals[50])});})();
_v_493_fps=([&]()->V{V _callee2217=this->_v_214_fpsOf.get();return j::call(_callee2217,j::Args{_v_481_all.get()});})();
_v_494_whole=([&]()->V{V _obj2218=j::object();j::put(_obj2218,this->_literals[9],([&]()->V{V _logical2219=_v_490_given;return j::nullish(_logical2219)?_v_485_name:_logical2219;})());j::put(_obj2218,this->_literals[10],_v_491_note);j::put(_obj2218,this->_literals[51],([&]()->V{V _callee2220=this->_v_219_categoryOf.get();return j::call(_callee2220,j::Args{_v_481_all.get()});})());j::put(_obj2218,this->_literals[32],_v_482_cols);j::put(_obj2218,this->_literals[33],_v_483_rows);j::put(_obj2218,this->_literals[34],([&]()->V{V _logical2221=j::get(j::get(j::get(_v_481_all.get(),V(0.0)),this->_literals[29]),this->_literals[34]);return j::nullish(_logical2221)?V(2.0):_logical2221;})());j::put(_obj2218,this->_literals[49],_v_493_fps);j::put(_obj2218,this->_literals[53],([&]()->V{V _callee2222=this->_v_209_groundOf.get();return j::call(_callee2222,j::Args{_v_481_all.get()});})());j::put(_obj2218,this->_literals[50],(j::truth(([&]()->V{V _lhs2223=_v_492_loop.get();V _rhs2224=j::builtin("undefined");return V(!j::equal(_lhs2223,_rhs2224,true));})())?(j::truth(_v_493_fps)?_v_492_loop.get():j::builtin("undefined")):([&]()->V{V _callee2228=this->_v_194_together.get();return j::call(_callee2228,j::Args{([&]()->V{V _receiver2225=_v_481_all.get();V _method2226=this->_literals[5];V _method=j::get(_receiver2225,_method2226);j::Args _params2227=j::Args{this->_v_184_period.get()};return j::call(_method,_params2227,_receiver2225);})()});})()));j::put(_obj2218,this->_literals[52],([&]()->V{V _callee2229=this->_v_203_stillOf.get();return j::call(_callee2229,j::Args{_v_481_all.get()});})());j::put(_obj2218,this->_literals[54],([&]()->V{V _receiver2230=_v_481_all.get();V _method2231=this->_literals[41];V _method=j::get(_receiver2230,_method2231);j::Args _params2232=j::Args{j::function([=](const j::Args &_args_fn495,const V &_receiver_fn495,const V &_self_fn495) mutable ->V{
V _v_496_p;
_v_496_p=_args_fn495[0];
return j::get(j::get(_v_496_p,this->_literals[29]),this->_literals[54]);
return V{};
},1)};return j::call(_method,_params2232,_receiver2230);})());return _obj2218;})();
return ([&]()->V{V _callee2259=this->_v_230_build.get();return j::call(_callee2259,j::Args{_v_480_fn,_v_494_whole,_v_489_m.get(),j::function([=](const j::Args &_args_fn497,const V &_receiver_fn497,const V &_self_fn497) mutable ->V{
{
j::Cell _v_498_play;
j::Cell _v_502_ink;
_v_498_play.get()=([&]()->V{V _receiver2234=_v_481_all.get();V _method2235=this->_literals[5];V _method=j::get(_receiver2234,_method2235);j::Args _params2236=j::Args{j::function([=](const j::Args &_args_fn499,const V &_receiver_fn499,const V &_self_fn499) mutable ->V{
V _v_500_p;
V _v_501_i;
_v_500_p=_args_fn499[0];
_v_501_i=_args_fn499[1];
return ([&]()->V{V _callee2233=this->_v_245_player.get();return j::call(_callee2233,j::Args{_v_500_p,j::get(j::get(_v_489_m.get(),this->_literals[46]),_v_501_i)});})();
return V{};
},2)};return j::call(_method,_params2236,_receiver2234);})();
_v_502_ink.get()=([&]()->V{V _callee2237=this->_v_451_borderInk.get();return j::call(_callee2237,j::Args{_v_489_m.get(),j::get(_v_481_all.get(),this->_literals[11]),_v_488_b.get()});})();
return j::function([=](const j::Args &_args_fn503,const V &_receiver_fn503,const V &_self_fn503) mutable ->V{
V _v_504_t;
V _v_505_s;
V _v_506_ctx;
_v_504_t=_args_fn503[0];
_v_505_s=_args_fn503[1];
_v_506_ctx=_args_fn503[2];
{
V _v_507_k;
if(j::truth(([&]()->V{V _lhs2238=_v_492_loop.get();V _rhs2239=j::builtin("undefined");return V(!j::equal(_lhs2238,_rhs2239,true));})())){(void)((_v_504_t=j::binary("-",_v_504_t,([&]()->V{V _lhs2241=_v_492_loop.get();V _rhs2242=([&]()->V{V _number2245=([&]()->V{V _lhs2246=_v_504_t;V _rhs2247=_v_492_loop.get();return V(j::number(_lhs2246)/j::number(_rhs2247));})();return V(std::floor(j::number(_number2245)));})();return V(j::number(_lhs2241)*j::number(_rhs2242));})())));
}
_v_507_k=(j::truth(([&]()->V{V _logical2248=j::get(_v_506_ctx,this->_literals[59]);return !j::truth(_logical2248)?j::unary("!",_v_502_ink.get()):_logical2248;})())?this->_v_4_NONE.get():j::get(_v_502_ink.get(),(j::truth(j::get(_v_506_ctx,this->_literals[58]))?V(0.0):V(1.0))));
{for(const auto &_item2249:j::elements(_v_487_boxes.get())){V _v_508_bx;
_v_508_bx=_item2249;
(void)(([&]()->V{V _callee2250=this->_v_418_box.get();return j::call(_callee2250,j::Args{_v_505_s,j::get(_v_508_bx,this->_literals[112]),j::get(_v_488_b.get(),this->_literals[56]),j::get(_v_508_bx,this->_literals[97]),_v_507_k});})());
}}
{V _v_509_i;
_v_509_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs2251=_v_509_i;V _rhs2252=j::get(_v_481_all.get(),this->_literals[11]);return j::binary("<",_lhs2251,_rhs2252);})());(void)(j::increment(_v_509_i,1,false))){(void)(([&]()->V{V _receiver2256=_v_505_s;V _method2257=this->_literals[90];V _method=j::get(_receiver2256,_method2257);j::Args _params2258=j::Args{([&]()->V{V _receiver2253=_v_498_play.get();V _method2254=_v_509_i;V _method=j::get(_receiver2253,_method2254);j::Args _params2255=j::Args{_v_504_t,j::get(_v_506_ctx,this->_literals[58]),j::get(_v_506_ctx,this->_literals[59])};return j::call(_method,_params2255,_receiver2253);})(),j::get(j::get(_v_484_spots.get(),_v_509_i),V(0.0)),j::get(j::get(_v_484_spots.get(),_v_509_i),V(1.0))};return j::call(_method,_params2258,_receiver2256);})());
}}

}

return V{};
},3);

}

return V{};
},0)});})();

}

return V{};
},7);
this->_v_510_row.get()=j::function([=](const j::Args &_args_fn511,const V &_receiver_fn511,const V &_self_fn511) mutable ->V{
V _v_512_parts;
V _v_513_o;
_v_512_parts=_args_fn511[0];
V _default2260=_args_fn511[1];if(_default2260.kind==V::Undefined||_default2260.kind==V::Hole)_default2260=([&]()->V{V _obj2261=j::object();return _obj2261;})();
_v_513_o=_default2260;
{
V _v_514_fn;
V _v_515_opts;
j::Cell _v_516_gap;
j::Cell _v_517_align;
V _v_518_all;
j::Cell _v_519_rows;
j::Cell _v_522_x;
V _v_523_spots;
_v_514_fn=this->_literals[113];
_v_515_opts=([&]()->V{V _callee2263=this->_v_54_object.get();return j::call(_callee2263,j::Args{_v_513_o,this->_literals[114],([&]()->V{j::Args _array2262;_array2262.push_back(this->_literals[115]);_array2262.push_back(this->_literals[116]);_array2262.push_back(this->_literals[50]);_array2262.push_back(this->_literals[9]);_array2262.push_back(this->_literals[10]);return j::array(std::move(_array2262));})()});})();
_v_516_gap.get()=([&]()->V{V _callee2264=this->_v_34_whole.get();return j::call(_callee2264,j::Args{j::get(_v_515_opts,this->_literals[115]),this->_literals[117],V(0.0),V(2.0)});})();
_v_517_align.get()=([&]()->V{V _callee2266=this->_v_46_oneOf.get();return j::call(_callee2266,j::Args{j::get(_v_515_opts,this->_literals[116]),this->_literals[118],([&]()->V{j::Args _array2265;_array2265.push_back(this->_literals[64]);_array2265.push_back(this->_literals[119]);_array2265.push_back(this->_literals[66]);return j::array(std::move(_array2265));})(),this->_literals[119]});})();
_v_518_all=([&]()->V{V _callee2267=this->_v_111_list.get();return j::call(_callee2267,j::Args{_v_514_fn,_v_512_parts});})();
_v_519_rows.get()=([&]()->V{V _receiver2272=j::builtin("Math");V _method2273=this->_literals[44];V _method=j::get(_receiver2272,_method2273);j::Args _params2274=([&](){j::Args _args2268;for(const auto &_v:j::elements(([&]()->V{V _receiver2269=_v_518_all;V _method2270=this->_literals[5];V _method=j::get(_receiver2269,_method2270);j::Args _params2271=j::Args{j::function([=](const j::Args &_args_fn520,const V &_receiver_fn520,const V &_self_fn520) mutable ->V{
V _v_521_p;
_v_521_p=_args_fn520[0];
return j::get(_v_521_p,this->_literals[33]);
return V{};
},1)};return j::call(_method,_params2271,_receiver2269);})()))_args2268.push_back(_v);return _args2268;})();return j::call(_method,_params2274,_receiver2272);})();
_v_522_x.get()=V(0.0);
_v_523_spots=([&]()->V{V _receiver2294=_v_518_all;V _method2295=this->_literals[5];V _method=j::get(_receiver2294,_method2295);j::Args _params2296=j::Args{j::function([=](const j::Args &_args_fn524,const V &_receiver_fn524,const V &_self_fn524) mutable ->V{
V _v_525_p;
_v_525_p=_args_fn524[0];
{
V _v_526_y;
V _v_527_spot;
_v_526_y=(j::truth(([&]()->V{V _lhs2275=_v_517_align.get();V _rhs2276=this->_literals[64];return V(j::equal(_lhs2275,_rhs2276,true));})())?V(0.0):(j::truth(([&]()->V{V _lhs2277=_v_517_align.get();V _rhs2278=this->_literals[66];return V(j::equal(_lhs2277,_rhs2278,true));})())?([&]()->V{V _lhs2279=_v_519_rows.get();V _rhs2280=j::get(_v_525_p,this->_literals[33]);return V(j::number(_lhs2279)-j::number(_rhs2280));})():([&]()->V{V _number2285=([&]()->V{V _lhs2286=([&]()->V{V _lhs2288=_v_519_rows.get();V _rhs2289=j::get(_v_525_p,this->_literals[33]);return V(j::number(_lhs2288)-j::number(_rhs2289));})();V _rhs2287=V(2.0);return V(j::number(_lhs2286)/j::number(_rhs2287));})();return V(std::floor(j::number(_number2285)));})()));
_v_527_spot=([&]()->V{j::Args _array2290;_array2290.push_back(_v_522_x.get());_array2290.push_back(_v_526_y);return j::array(std::move(_array2290));})();
(void)((_v_522_x.get()=j::binary("+",_v_522_x.get(),([&]()->V{V _lhs2292=j::get(_v_525_p,this->_literals[32]);V _rhs2293=_v_516_gap.get();return j::binary("+",_lhs2292,_rhs2293);})())));
return _v_527_spot;

}

return V{};
},1)};return j::call(_method,_params2296,_receiver2294);})();
return ([&]()->V{V _callee2303=this->_v_478_arrange.get();return j::call(_callee2303,j::Args{_v_514_fn,_v_518_all,([&]()->V{V _lhs2297=_v_522_x.get();V _rhs2298=_v_516_gap.get();return V(j::number(_lhs2297)-j::number(_rhs2298));})(),_v_519_rows.get(),_v_523_spots,([&]()->V{V _callee2302=this->_v_6_and.get();return j::call(_callee2302,j::Args{([&]()->V{V _receiver2299=_v_518_all;V _method2300=this->_literals[5];V _method=j::get(_receiver2299,_method2300);j::Args _params2301=j::Args{j::function([=](const j::Args &_args_fn528,const V &_receiver_fn528,const V &_self_fn528) mutable ->V{
V _v_529_p;
_v_529_p=_args_fn528[0];
return j::get(j::get(_v_529_p,this->_literals[29]),this->_literals[9]);
return V{};
},1)};return j::call(_method,_params2301,_receiver2299);})()});})(),_v_515_opts});})();

}

return V{};
},1);
this->_v_530_column.get()=j::function([=](const j::Args &_args_fn531,const V &_receiver_fn531,const V &_self_fn531) mutable ->V{
V _v_532_parts;
V _v_533_o;
_v_532_parts=_args_fn531[0];
V _default2304=_args_fn531[1];if(_default2304.kind==V::Undefined||_default2304.kind==V::Hole)_default2304=([&]()->V{V _obj2305=j::object();return _obj2305;})();
_v_533_o=_default2304;
{
V _v_534_fn;
V _v_535_opts;
j::Cell _v_536_gap;
j::Cell _v_537_align;
V _v_538_all;
j::Cell _v_539_cols;
j::Cell _v_542_y;
V _v_543_spots;
_v_534_fn=this->_literals[120];
_v_535_opts=([&]()->V{V _callee2307=this->_v_54_object.get();return j::call(_callee2307,j::Args{_v_533_o,this->_literals[121],([&]()->V{j::Args _array2306;_array2306.push_back(this->_literals[115]);_array2306.push_back(this->_literals[116]);_array2306.push_back(this->_literals[50]);_array2306.push_back(this->_literals[9]);_array2306.push_back(this->_literals[10]);return j::array(std::move(_array2306));})()});})();
_v_536_gap.get()=([&]()->V{V _callee2308=this->_v_34_whole.get();return j::call(_callee2308,j::Args{j::get(_v_535_opts,this->_literals[115]),this->_literals[122],V(0.0),V(1.0)});})();
_v_537_align.get()=([&]()->V{V _callee2310=this->_v_46_oneOf.get();return j::call(_callee2310,j::Args{j::get(_v_535_opts,this->_literals[116]),this->_literals[123],([&]()->V{j::Args _array2309;_array2309.push_back(this->_literals[61]);_array2309.push_back(this->_literals[95]);_array2309.push_back(this->_literals[63]);return j::array(std::move(_array2309));})(),this->_literals[95]});})();
_v_538_all=([&]()->V{V _callee2311=this->_v_111_list.get();return j::call(_callee2311,j::Args{_v_534_fn,_v_532_parts});})();
_v_539_cols.get()=([&]()->V{V _receiver2316=j::builtin("Math");V _method2317=this->_literals[44];V _method=j::get(_receiver2316,_method2317);j::Args _params2318=([&](){j::Args _args2312;for(const auto &_v:j::elements(([&]()->V{V _receiver2313=_v_538_all;V _method2314=this->_literals[5];V _method=j::get(_receiver2313,_method2314);j::Args _params2315=j::Args{j::function([=](const j::Args &_args_fn540,const V &_receiver_fn540,const V &_self_fn540) mutable ->V{
V _v_541_p;
_v_541_p=_args_fn540[0];
return j::get(_v_541_p,this->_literals[32]);
return V{};
},1)};return j::call(_method,_params2315,_receiver2313);})()))_args2312.push_back(_v);return _args2312;})();return j::call(_method,_params2318,_receiver2316);})();
_v_542_y.get()=V(0.0);
_v_543_spots=([&]()->V{V _receiver2338=_v_538_all;V _method2339=this->_literals[5];V _method=j::get(_receiver2338,_method2339);j::Args _params2340=j::Args{j::function([=](const j::Args &_args_fn544,const V &_receiver_fn544,const V &_self_fn544) mutable ->V{
V _v_545_p;
_v_545_p=_args_fn544[0];
{
V _v_546_x;
V _v_547_spot;
_v_546_x=(j::truth(([&]()->V{V _lhs2319=_v_537_align.get();V _rhs2320=this->_literals[61];return V(j::equal(_lhs2319,_rhs2320,true));})())?V(0.0):(j::truth(([&]()->V{V _lhs2321=_v_537_align.get();V _rhs2322=this->_literals[63];return V(j::equal(_lhs2321,_rhs2322,true));})())?([&]()->V{V _lhs2323=_v_539_cols.get();V _rhs2324=j::get(_v_545_p,this->_literals[32]);return V(j::number(_lhs2323)-j::number(_rhs2324));})():([&]()->V{V _number2329=([&]()->V{V _lhs2330=([&]()->V{V _lhs2332=_v_539_cols.get();V _rhs2333=j::get(_v_545_p,this->_literals[32]);return V(j::number(_lhs2332)-j::number(_rhs2333));})();V _rhs2331=V(2.0);return V(j::number(_lhs2330)/j::number(_rhs2331));})();return V(std::floor(j::number(_number2329)));})()));
_v_547_spot=([&]()->V{j::Args _array2334;_array2334.push_back(_v_546_x);_array2334.push_back(_v_542_y.get());return j::array(std::move(_array2334));})();
(void)((_v_542_y.get()=j::binary("+",_v_542_y.get(),([&]()->V{V _lhs2336=j::get(_v_545_p,this->_literals[33]);V _rhs2337=_v_536_gap.get();return j::binary("+",_lhs2336,_rhs2337);})())));
return _v_547_spot;

}

return V{};
},1)};return j::call(_method,_params2340,_receiver2338);})();
return ([&]()->V{V _callee2347=this->_v_478_arrange.get();return j::call(_callee2347,j::Args{_v_534_fn,_v_538_all,_v_539_cols.get(),([&]()->V{V _lhs2341=_v_542_y.get();V _rhs2342=_v_536_gap.get();return V(j::number(_lhs2341)-j::number(_rhs2342));})(),_v_543_spots,([&]()->V{V _callee2346=this->_v_6_and.get();return j::call(_callee2346,j::Args{([&]()->V{V _receiver2343=_v_538_all;V _method2344=this->_literals[5];V _method=j::get(_receiver2343,_method2344);j::Args _params2345=j::Args{j::function([=](const j::Args &_args_fn548,const V &_receiver_fn548,const V &_self_fn548) mutable ->V{
V _v_549_p;
_v_549_p=_args_fn548[0];
return j::get(j::get(_v_549_p,this->_literals[29]),this->_literals[9]);
return V{};
},1)};return j::call(_method,_params2345,_receiver2343);})()});})(),_v_535_opts});})();

}

return V{};
},1);
this->_v_550_grid.get()=j::function([=](const j::Args &_args_fn551,const V &_receiver_fn551,const V &_self_fn551) mutable ->V{
V _v_552_parts;
V _v_553_o;
_v_552_parts=_args_fn551[0];
V _default2348=_args_fn551[1];if(_default2348.kind==V::Undefined||_default2348.kind==V::Hole)_default2348=([&]()->V{V _obj2349=j::object();return _obj2349;})();
_v_553_o=_default2348;
{
V _v_554_fn;
V _v_555_opts;
j::Cell _v_556_all;
V _v_557_columns;
V _v_558_g;
j::Cell _v_559_gx;
j::Cell _v_560_gy;
j::Cell _v_561_align;
j::Cell _v_562_b;
j::Cell _v_563_n;
V _v_564_lines;
j::Cell _v_565_widths;
j::Cell _v_574_heights;
j::Cell _v_580_py;
j::Cell _v_581_px;
j::Cell _v_582_e;
j::Cell _v_583_cw;
j::Cell _v_586_ch;
j::Cell _v_589_xs;
j::Cell _v_596_ys;
V _v_603_spots;
V _v_613_boxes;
V _v_619_cols;
V _v_620_rows;
_v_554_fn=this->_literals[124];
_v_555_opts=([&]()->V{V _callee2351=this->_v_54_object.get();return j::call(_callee2351,j::Args{_v_553_o,this->_literals[125],([&]()->V{j::Args _array2350;_array2350.push_back(this->_literals[126]);_array2350.push_back(this->_literals[115]);_array2350.push_back(this->_literals[116]);_array2350.push_back(this->_literals[110]);_array2350.push_back(this->_literals[50]);_array2350.push_back(this->_literals[9]);_array2350.push_back(this->_literals[10]);return j::array(std::move(_array2350));})()});})();
_v_556_all.get()=([&]()->V{V _callee2352=this->_v_111_list.get();return j::call(_callee2352,j::Args{_v_554_fn,_v_552_parts});})();
_v_557_columns=([&]()->V{V _callee2356=this->_v_34_whole.get();return j::call(_callee2356,j::Args{j::get(_v_555_opts,this->_literals[126]),this->_literals[127],V(1.0),([&]()->V{V _number2354=([&]()->V{V _number2355=j::get(_v_556_all.get(),this->_literals[11]);return V(std::sqrt(j::number(_number2355)));})();return V(std::ceil(j::number(_number2354)));})()});})();
_v_558_g=j::get(_v_555_opts,this->_literals[115]);
V _pattern2377=(j::truth(([&]()->V{V _lhs2357=_v_558_g;V _rhs2358=j::builtin("undefined");return V(j::equal(_lhs2357,_rhs2358,true));})())?([&]()->V{j::Args _array2359;_array2359.push_back(V(2.0));_array2359.push_back(V(1.0));return j::array(std::move(_array2359));})():(j::truth(([&]()->V{V _lhs2360=j::unary("typeof",_v_558_g);V _rhs2361=this->_literals[104];return V(j::equal(_lhs2360,_rhs2361,true));})())?([&]()->V{j::Args _array2362;_array2362.push_back(([&]()->V{V _callee2363=this->_v_34_whole.get();return j::call(_callee2363,j::Args{_v_558_g,this->_literals[128],V(0.0),V(0.0)});})());_array2362.push_back(([&]()->V{V _callee2364=this->_v_34_whole.get();return j::call(_callee2364,j::Args{_v_558_g,this->_literals[128],V(0.0),V(0.0)});})());return j::array(std::move(_array2362));})():(j::truth(([&]()->V{V _logical2365=([&]()->V{V _receiver2366=j::builtin("Array");V _method2367=this->_literals[7];V _method=j::get(_receiver2366,_method2367);j::Args _params2368=j::Args{_v_558_g};return j::call(_method,_params2368,_receiver2366);})();return j::truth(_logical2365)?([&]()->V{V _lhs2369=j::get(_v_558_g,this->_literals[11]);V _rhs2370=V(2.0);return V(j::equal(_lhs2369,_rhs2370,true));})():_logical2365;})())?([&]()->V{j::Args _array2371;_array2371.push_back(([&]()->V{V _callee2372=this->_v_34_whole.get();return j::call(_callee2372,j::Args{j::get(_v_558_g,V(0.0)),this->_literals[129],V(0.0),V(0.0)});})());_array2371.push_back(([&]()->V{V _callee2373=this->_v_34_whole.get();return j::call(_callee2373,j::Args{j::get(_v_558_g,V(1.0)),this->_literals[130],V(0.0),V(0.0)});})());return j::array(std::move(_array2371));})():([&]()->V{V _callee2376=this->_v_13_fail.get();return j::call(_callee2376,j::Args{([&]()->V{std::u16string _text2374;_text2374+=u"grid's gap takes a number, or [columns, rows], not ";_text2374+=j::string(([&]()->V{V _callee2375=this->_v_25_shown.get();return j::call(_callee2375,j::Args{_v_558_g});})());_text2374+=u"";return V(std::move(_text2374));})()});})())));
_v_559_gx.get()=j::get(_pattern2377,V(0));
_v_560_gy.get()=j::get(_pattern2377,V(1));
_v_561_align.get()=([&]()->V{V _callee2378=this->_v_46_oneOf.get();return j::call(_callee2378,j::Args{j::get(_v_555_opts,this->_literals[116]),this->_literals[131],this->_v_23_ANCHORS.get(),this->_literals[95]});})();
_v_562_b.get()=([&]()->V{V _callee2379=this->_v_403_borderOf.get();return j::call(_callee2379,j::Args{this->_literals[132],j::get(_v_555_opts,this->_literals[110])});})();
_v_563_n.get()=([&]()->V{V _receiver2382=j::builtin("Math");V _method2383=this->_literals[43];V _method=j::get(_receiver2382,_method2383);j::Args _params2384=j::Args{_v_557_columns,j::get(_v_556_all.get(),this->_literals[11])};return j::call(_method,_params2384,_receiver2382);})();
_v_564_lines=([&]()->V{V _number2387=([&]()->V{V _lhs2388=j::get(_v_556_all.get(),this->_literals[11]);V _rhs2389=_v_563_n.get();return V(j::number(_lhs2388)/j::number(_rhs2389));})();return V(std::ceil(j::number(_number2387)));})();
_v_565_widths.get()=([&]()->V{V _receiver2405=j::builtin("Array");V _method2406=this->_literals[47];V _method=j::get(_receiver2405,_method2406);j::Args _params2407=j::Args{([&]()->V{V _obj2390=j::object();j::put(_obj2390,this->_literals[11],_v_563_n.get());return _obj2390;})(),j::function([=](const j::Args &_args_fn566,const V &_receiver_fn566,const V &_self_fn566) mutable ->V{
V _v_567__;
j::Cell _v_568_j;
_v_567__=_args_fn566[0];
_v_568_j.get()=_args_fn566[1];
return ([&]()->V{V _receiver2402=j::builtin("Math");V _method2403=this->_literals[44];V _method=j::get(_receiver2402,_method2403);j::Args _params2404=([&](){j::Args _args2391;for(const auto &_v:j::elements(([&]()->V{V _receiver2392=([&]()->V{V _receiver2399=_v_556_all.get();V _method2400=this->_literals[45];V _method=j::get(_receiver2399,_method2400);j::Args _params2401=j::Args{j::function([=](const j::Args &_args_fn569,const V &_receiver_fn569,const V &_self_fn569) mutable ->V{
V _v_570__;
V _v_571_i;
_v_570__=_args_fn569[0];
_v_571_i=_args_fn569[1];
return ([&]()->V{V _lhs2395=([&]()->V{V _lhs2397=_v_571_i;V _rhs2398=_v_563_n.get();return V(std::fmod(j::number(_lhs2397),j::number(_rhs2398)));})();V _rhs2396=_v_568_j.get();return V(j::equal(_lhs2395,_rhs2396,true));})();
return V{};
},2)};return j::call(_method,_params2401,_receiver2399);})();V _method2393=this->_literals[5];V _method=j::get(_receiver2392,_method2393);j::Args _params2394=j::Args{j::function([=](const j::Args &_args_fn572,const V &_receiver_fn572,const V &_self_fn572) mutable ->V{
V _v_573_p;
_v_573_p=_args_fn572[0];
return j::get(_v_573_p,this->_literals[32]);
return V{};
},1)};return j::call(_method,_params2394,_receiver2392);})()))_args2391.push_back(_v);return _args2391;})();return j::call(_method,_params2404,_receiver2402);})();
return V{};
},2)};return j::call(_method,_params2407,_receiver2405);})();
_v_574_heights.get()=([&]()->V{V _receiver2425=j::builtin("Array");V _method2426=this->_literals[47];V _method=j::get(_receiver2425,_method2426);j::Args _params2427=j::Args{([&]()->V{V _obj2408=j::object();j::put(_obj2408,this->_literals[11],_v_564_lines);return _obj2408;})(),j::function([=](const j::Args &_args_fn575,const V &_receiver_fn575,const V &_self_fn575) mutable ->V{
V _v_576__;
V _v_577_r;
_v_576__=_args_fn575[0];
_v_577_r=_args_fn575[1];
return ([&]()->V{V _receiver2422=j::builtin("Math");V _method2423=this->_literals[44];V _method=j::get(_receiver2422,_method2423);j::Args _params2424=([&](){j::Args _args2409;for(const auto &_v:j::elements(([&]()->V{V _receiver2410=([&]()->V{V _receiver2419=_v_556_all.get();V _method2420=this->_literals[20];V _method=j::get(_receiver2419,_method2420);j::Args _params2421=j::Args{([&]()->V{V _lhs2413=_v_577_r;V _rhs2414=_v_563_n.get();return V(j::number(_lhs2413)*j::number(_rhs2414));})(),([&]()->V{V _lhs2415=([&]()->V{V _lhs2417=_v_577_r;V _rhs2418=_v_563_n.get();return V(j::number(_lhs2417)*j::number(_rhs2418));})();V _rhs2416=_v_563_n.get();return j::binary("+",_lhs2415,_rhs2416);})()};return j::call(_method,_params2421,_receiver2419);})();V _method2411=this->_literals[5];V _method=j::get(_receiver2410,_method2411);j::Args _params2412=j::Args{j::function([=](const j::Args &_args_fn578,const V &_receiver_fn578,const V &_self_fn578) mutable ->V{
V _v_579_p;
_v_579_p=_args_fn578[0];
return j::get(_v_579_p,this->_literals[33]);
return V{};
},1)};return j::call(_method,_params2412,_receiver2410);})()))_args2409.push_back(_v);return _args2409;})();return j::call(_method,_params2424,_receiver2422);})();
return V{};
},2)};return j::call(_method,_params2427,_receiver2425);})();
V _pattern2429=(j::truth(_v_562_b.get())?j::get(_v_562_b.get(),this->_literals[98]):([&]()->V{j::Args _array2428;_array2428.push_back(V(0.0));_array2428.push_back(V(0.0));return j::array(std::move(_array2428));})());
_v_580_py.get()=j::get(_pattern2429,V(0));
_v_581_px.get()=j::get(_pattern2429,V(1));
_v_582_e.get()=(j::truth(_v_562_b.get())?V(1.0):V(0.0));
_v_583_cw.get()=([&]()->V{V _receiver2436=_v_565_widths.get();V _method2437=this->_literals[5];V _method=j::get(_receiver2436,_method2437);j::Args _params2438=j::Args{j::function([=](const j::Args &_args_fn584,const V &_receiver_fn584,const V &_self_fn584) mutable ->V{
V _v_585_w;
_v_585_w=_args_fn584[0];
return ([&]()->V{V _lhs2430=_v_585_w;V _rhs2431=([&]()->V{V _lhs2432=V(2.0);V _rhs2433=([&]()->V{V _lhs2434=_v_581_px.get();V _rhs2435=_v_582_e.get();return j::binary("+",_lhs2434,_rhs2435);})();return V(j::number(_lhs2432)*j::number(_rhs2433));})();return j::binary("+",_lhs2430,_rhs2431);})();
return V{};
},1)};return j::call(_method,_params2438,_receiver2436);})();
_v_586_ch.get()=([&]()->V{V _receiver2445=_v_574_heights.get();V _method2446=this->_literals[5];V _method=j::get(_receiver2445,_method2446);j::Args _params2447=j::Args{j::function([=](const j::Args &_args_fn587,const V &_receiver_fn587,const V &_self_fn587) mutable ->V{
V _v_588_h;
_v_588_h=_args_fn587[0];
return ([&]()->V{V _lhs2439=_v_588_h;V _rhs2440=([&]()->V{V _lhs2441=V(2.0);V _rhs2442=([&]()->V{V _lhs2443=_v_580_py.get();V _rhs2444=_v_582_e.get();return j::binary("+",_lhs2443,_rhs2444);})();return V(j::number(_lhs2441)*j::number(_rhs2442));})();return j::binary("+",_lhs2439,_rhs2440);})();
return V{};
},1)};return j::call(_method,_params2447,_receiver2445);})();
_v_589_xs.get()=([&]()->V{V _receiver2458=_v_583_cw.get();V _method2459=this->_literals[5];V _method=j::get(_receiver2458,_method2459);j::Args _params2460=j::Args{j::function([=](const j::Args &_args_fn590,const V &_receiver_fn590,const V &_self_fn590) mutable ->V{
V _v_591__;
V _v_592_j;
_v_591__=_args_fn590[0];
_v_592_j=_args_fn590[1];
return ([&]()->V{V _receiver2452=([&]()->V{V _receiver2455=_v_583_cw.get();V _method2456=this->_literals[20];V _method=j::get(_receiver2455,_method2456);j::Args _params2457=j::Args{V(0.0),_v_592_j};return j::call(_method,_params2457,_receiver2455);})();V _method2453=this->_literals[133];V _method=j::get(_receiver2452,_method2453);j::Args _params2454=j::Args{j::function([=](const j::Args &_args_fn593,const V &_receiver_fn593,const V &_self_fn593) mutable ->V{
V _v_594_a;
V _v_595_v;
_v_594_a=_args_fn593[0];
_v_595_v=_args_fn593[1];
return ([&]()->V{V _lhs2448=([&]()->V{V _lhs2450=_v_594_a;V _rhs2451=_v_595_v;return j::binary("+",_lhs2450,_rhs2451);})();V _rhs2449=_v_559_gx.get();return j::binary("+",_lhs2448,_rhs2449);})();
return V{};
},2),V(0.0)};return j::call(_method,_params2454,_receiver2452);})();
return V{};
},2)};return j::call(_method,_params2460,_receiver2458);})();
_v_596_ys.get()=([&]()->V{V _receiver2471=_v_586_ch.get();V _method2472=this->_literals[5];V _method=j::get(_receiver2471,_method2472);j::Args _params2473=j::Args{j::function([=](const j::Args &_args_fn597,const V &_receiver_fn597,const V &_self_fn597) mutable ->V{
V _v_598__;
V _v_599_r;
_v_598__=_args_fn597[0];
_v_599_r=_args_fn597[1];
return ([&]()->V{V _receiver2465=([&]()->V{V _receiver2468=_v_586_ch.get();V _method2469=this->_literals[20];V _method=j::get(_receiver2468,_method2469);j::Args _params2470=j::Args{V(0.0),_v_599_r};return j::call(_method,_params2470,_receiver2468);})();V _method2466=this->_literals[133];V _method=j::get(_receiver2465,_method2466);j::Args _params2467=j::Args{j::function([=](const j::Args &_args_fn600,const V &_receiver_fn600,const V &_self_fn600) mutable ->V{
V _v_601_a;
V _v_602_v;
_v_601_a=_args_fn600[0];
_v_602_v=_args_fn600[1];
return ([&]()->V{V _lhs2461=([&]()->V{V _lhs2463=_v_601_a;V _rhs2464=_v_602_v;return j::binary("+",_lhs2463,_rhs2464);})();V _rhs2462=_v_560_gy.get();return j::binary("+",_lhs2461,_rhs2462);})();
return V{};
},2),V(0.0)};return j::call(_method,_params2467,_receiver2465);})();
return V{};
},2)};return j::call(_method,_params2473,_receiver2471);})();
_v_603_spots=([&]()->V{V _receiver2504=_v_556_all.get();V _method2505=this->_literals[5];V _method=j::get(_receiver2504,_method2505);j::Args _params2506=j::Args{j::function([=](const j::Args &_args_fn604,const V &_receiver_fn604,const V &_self_fn604) mutable ->V{
V _v_605_p;
V _v_606_i;
_v_605_p=_args_fn604[0];
_v_606_i=_args_fn604[1];
{
V _v_607_j;
V _v_608_r;
V _v_611_dx;
V _v_612_dy;
_v_607_j=([&]()->V{V _lhs2474=_v_606_i;V _rhs2475=_v_563_n.get();return V(std::fmod(j::number(_lhs2474),j::number(_rhs2475)));})();
_v_608_r=([&]()->V{V _number2478=([&]()->V{V _lhs2479=_v_606_i;V _rhs2480=_v_563_n.get();return V(j::number(_lhs2479)/j::number(_rhs2480));})();return V(std::floor(j::number(_number2478)));})();
if(j::truth(([&]()->V{V _logical2481=_v_562_b.get();return j::truth(_logical2481)?j::get(_v_605_p,this->_literals[27]):_logical2481;})())){
V _v_609_dx;
V _v_610_dy;
V _pattern2483=([&]()->V{V _callee2482=this->_v_264_place.get();return j::call(_callee2482,j::Args{_v_561_align.get(),j::get(_v_583_cw.get(),_v_607_j),j::get(_v_586_ch.get(),_v_608_r),j::get(_v_605_p,this->_literals[32]),j::get(_v_605_p,this->_literals[33])});})();
_v_609_dx=j::get(_pattern2483,V(0));
_v_610_dy=j::get(_pattern2483,V(1));
return ([&]()->V{j::Args _array2484;_array2484.push_back(([&]()->V{V _lhs2485=j::get(_v_589_xs.get(),_v_607_j);V _rhs2486=_v_609_dx;return j::binary("+",_lhs2485,_rhs2486);})());_array2484.push_back(([&]()->V{V _lhs2487=j::get(_v_596_ys.get(),_v_608_r);V _rhs2488=_v_610_dy;return j::binary("+",_lhs2487,_rhs2488);})());return j::array(std::move(_array2484));})();

}

V _pattern2490=([&]()->V{V _callee2489=this->_v_264_place.get();return j::call(_callee2489,j::Args{_v_561_align.get(),j::get(_v_565_widths.get(),_v_607_j),j::get(_v_574_heights.get(),_v_608_r),j::get(_v_605_p,this->_literals[32]),j::get(_v_605_p,this->_literals[33])});})();
_v_611_dx=j::get(_pattern2490,V(0));
_v_612_dy=j::get(_pattern2490,V(1));
return ([&]()->V{j::Args _array2491;_array2491.push_back(([&]()->V{V _lhs2492=([&]()->V{V _lhs2494=([&]()->V{V _lhs2496=j::get(_v_589_xs.get(),_v_607_j);V _rhs2497=_v_582_e.get();return j::binary("+",_lhs2496,_rhs2497);})();V _rhs2495=_v_581_px.get();return j::binary("+",_lhs2494,_rhs2495);})();V _rhs2493=_v_611_dx;return j::binary("+",_lhs2492,_rhs2493);})());_array2491.push_back(([&]()->V{V _lhs2498=([&]()->V{V _lhs2500=([&]()->V{V _lhs2502=j::get(_v_596_ys.get(),_v_608_r);V _rhs2503=_v_582_e.get();return j::binary("+",_lhs2502,_rhs2503);})();V _rhs2501=_v_580_py.get();return j::binary("+",_lhs2500,_rhs2501);})();V _rhs2499=_v_612_dy;return j::binary("+",_lhs2498,_rhs2499);})());return j::array(std::move(_array2491));})();

}

return V{};
},2)};return j::call(_method,_params2506,_receiver2504);})();
_v_613_boxes=(j::truth(_v_562_b.get())?([&]()->V{V _receiver2519=_v_556_all.get();V _method2520=this->_literals[85];V _method=j::get(_receiver2519,_method2520);j::Args _params2521=j::Args{j::function([=](const j::Args &_args_fn614,const V &_receiver_fn614,const V &_self_fn614) mutable ->V{
V _v_615_p;
V _v_616_i;
_v_615_p=_args_fn614[0];
_v_616_i=_args_fn614[1];
{
V _v_617_j;
V _v_618_r;
_v_617_j=([&]()->V{V _lhs2507=_v_616_i;V _rhs2508=_v_563_n.get();return V(std::fmod(j::number(_lhs2507),j::number(_rhs2508)));})();
_v_618_r=([&]()->V{V _number2511=([&]()->V{V _lhs2512=_v_616_i;V _rhs2513=_v_563_n.get();return V(j::number(_lhs2512)/j::number(_rhs2513));})();return V(std::floor(j::number(_number2511)));})();
return (j::truth(j::get(_v_615_p,this->_literals[27]))?([&]()->V{j::Args _array2514;return j::array(std::move(_array2514));})():([&]()->V{j::Args _array2515;_array2515.push_back(([&]()->V{V _obj2516=j::object();j::put(_obj2516,this->_literals[112],([&]()->V{V _obj2517=j::object();j::put(_obj2517,this->_literals[74],j::get(_v_589_xs.get(),_v_617_j));j::put(_obj2517,this->_literals[75],j::get(_v_596_ys.get(),_v_618_r));j::put(_obj2517,this->_literals[32],j::get(_v_583_cw.get(),_v_617_j));j::put(_obj2517,this->_literals[33],j::get(_v_586_ch.get(),_v_618_r));return _obj2517;})());j::put(_obj2516,this->_literals[97],([&]()->V{V _callee2518=this->_v_447_titleOf.get();return j::call(_callee2518,j::Args{_v_562_b.get(),j::get(j::get(_v_615_p,this->_literals[29]),this->_literals[9])});})());return _obj2516;})());return j::array(std::move(_array2515));})());

}

return V{};
},2)};return j::call(_method,_params2521,_receiver2519);})():([&]()->V{j::Args _array2522;return j::array(std::move(_array2522));})());
_v_619_cols=([&]()->V{V _lhs2523=j::get(_v_589_xs.get(),([&]()->V{V _lhs2525=_v_563_n.get();V _rhs2526=V(1.0);return V(j::number(_lhs2525)-j::number(_rhs2526));})());V _rhs2524=j::get(_v_583_cw.get(),([&]()->V{V _lhs2527=_v_563_n.get();V _rhs2528=V(1.0);return V(j::number(_lhs2527)-j::number(_rhs2528));})());return j::binary("+",_lhs2523,_rhs2524);})();
_v_620_rows=([&]()->V{V _lhs2529=j::get(_v_596_ys.get(),([&]()->V{V _lhs2531=_v_564_lines;V _rhs2532=V(1.0);return V(j::number(_lhs2531)-j::number(_rhs2532));})());V _rhs2530=j::get(_v_586_ch.get(),([&]()->V{V _lhs2533=_v_564_lines;V _rhs2534=V(1.0);return V(j::number(_lhs2533)-j::number(_rhs2534));})());return j::binary("+",_lhs2529,_rhs2530);})();
return ([&]()->V{V _callee2539=this->_v_478_arrange.get();return j::call(_callee2539,j::Args{_v_554_fn,_v_556_all.get(),_v_619_cols,_v_620_rows,_v_603_spots,([&]()->V{V _callee2538=this->_v_6_and.get();return j::call(_callee2538,j::Args{([&]()->V{V _receiver2535=_v_556_all.get();V _method2536=this->_literals[5];V _method=j::get(_receiver2535,_method2536);j::Args _params2537=j::Args{j::function([=](const j::Args &_args_fn621,const V &_receiver_fn621,const V &_self_fn621) mutable ->V{
V _v_622_p;
_v_622_p=_args_fn621[0];
return j::get(j::get(_v_622_p,this->_literals[29]),this->_literals[9]);
return V{};
},1)};return j::call(_method,_params2537,_receiver2535);})()});})(),_v_555_opts,_v_613_boxes,_v_562_b.get()});})();

}

return V{};
},1);
this->_v_626_playedOnce.get()=j::function([=](const j::Args &_args_fn627,const V &_receiver_fn627,const V &_self_fn627) mutable ->V{
V _v_628_p;
V _v_629_lag;
V _v_630_rate;
_v_628_p=_args_fn627[0];
V _default2540=_args_fn627[1];if(_default2540.kind==V::Undefined||_default2540.kind==V::Hole)_default2540=V(0.0);
_v_629_lag=_default2540;
V _default2541=_args_fn627[2];if(_default2541.kind==V::Undefined||_default2541.kind==V::Hole)_default2541=V(1.0);
_v_630_rate=_default2541;
{
V _v_631_m;
V _v_632_end;
_v_631_m=j::get(j::get(_v_628_p,this->_literals[28]),this->_literals[134]);
if(j::truth(([&]()->V{V _logical2542=([&]()->V{V _logical2543=j::unary("!",([&]()->V{V _chain2544=_v_631_m;if(j::nullish(_chain2544))return V{};V _chain2545=j::get(_chain2544,this->_literals[135]);return _chain2545;})());return !j::truth(_logical2543)?j::unary("!",([&]()->V{V _callee2546=this->_v_31_finite.get();return j::call(_callee2546,j::Args{j::get(_v_631_m,this->_literals[136])});})()):_logical2543;})();return !j::truth(_logical2542)?j::unary("!",([&]()->V{V _callee2547=this->_v_31_finite.get();return j::call(_callee2547,j::Args{j::get(_v_631_m,this->_literals[47])});})()):_logical2542;})())){return j::builtin("undefined");
}
_v_632_end=([&]()->V{V _lhs2548=_v_629_lag;V _rhs2549=([&]()->V{V _lhs2550=([&]()->V{V _lhs2552=([&]()->V{V _lhs2554=j::get(_v_631_m,this->_literals[47]);V _rhs2555=j::get(_v_631_m,this->_literals[136]);return j::binary("+",_lhs2554,_rhs2555);})();V _rhs2553=j::get(_v_628_p,this->_literals[23]);return V(j::number(_lhs2552)-j::number(_rhs2553));})();V _rhs2551=([&]()->V{V _lhs2556=_v_630_rate;V _rhs2557=j::get(_v_628_p,this->_literals[24]);return V(j::number(_lhs2556)*j::number(_rhs2557));})();return V(j::number(_lhs2550)/j::number(_rhs2551));})();return j::binary("+",_lhs2548,_rhs2549);})();
return (j::truth(([&]()->V{V _lhs2558=_v_632_end;V _rhs2559=V(60.0);return j::binary("<=",_lhs2558,_rhs2559);})())?([&]()->V{V _obj2560=j::object();j::put(_obj2560,this->_literals[136],([&]()->V{V _receiver2563=j::builtin("Math");V _method2564=this->_literals[44];V _method=j::get(_receiver2563,_method2564);j::Args _params2565=j::Args{V(0.0),_v_632_end};return j::call(_method,_params2565,_receiver2563);})());j::put(_obj2560,this->_literals[47],V(0.0));j::put(_obj2560,this->_literals[135],V(true));return _obj2560;})():j::builtin("undefined"));

}

return V{};
},1);
this->_v_637_reshape.get()=j::function([=](const j::Args &_args_fn638,const V &_receiver_fn638,const V &_self_fn638) mutable ->V{
V _v_639_fn;
j::Cell _v_640_p;
V _v_641_cols;
V _v_642_rows;
j::Cell _v_643_draw;
_v_639_fn=_args_fn638[0];
_v_640_p.get()=_args_fn638[1];
_v_641_cols=_args_fn638[2];
_v_642_rows=_args_fn638[3];
_v_643_draw.get()=_args_fn638[4];
{
j::Cell _v_644_m;
V _v_645_whole;
_v_644_m.get()=([&]()->V{V _callee2567=this->_v_124_merge.get();return j::call(_callee2567,j::Args{([&]()->V{j::Args _array2566;_array2566.push_back(_v_640_p.get());return j::array(std::move(_array2566));})()});})();
_v_645_whole=([&]()->V{V _callee2574=this->_v_230_build.get();return j::call(_callee2574,j::Args{_v_639_fn,([&]()->V{V _obj2568=j::object();V _spread2569=([&]()->V{V _callee2570=this->_v_623_single.get();return j::call(_callee2570,j::Args{_v_640_p.get()});})();for(const auto &_key:j::keys(_spread2569))j::put(_obj2568,_key,j::get(_spread2569,_key));j::put(_obj2568,this->_literals[32],_v_641_cols);j::put(_obj2568,this->_literals[33],_v_642_rows);return _obj2568;})(),_v_644_m.get(),j::function([=](const j::Args &_args_fn646,const V &_receiver_fn646,const V &_self_fn646) mutable ->V{
V _v_647_options;
_v_647_options=_args_fn646[0];
{
j::Cell _v_648_play;
_v_648_play.get()=([&]()->V{V _callee2571=this->_v_245_player.get();return j::call(_callee2571,j::Args{_v_640_p.get(),j::get(j::get(_v_644_m.get(),this->_literals[46]),V(0.0)),_v_647_options});})();
return j::function([=](const j::Args &_args_fn649,const V &_receiver_fn649,const V &_self_fn649) mutable ->V{
V _v_650_t;
V _v_651_s;
V _v_652_ctx;
_v_650_t=_args_fn649[0];
_v_651_s=_args_fn649[1];
_v_652_ctx=_args_fn649[2];
return ([&]()->V{V _callee2573=_v_643_draw.get();return j::call(_callee2573,j::Args{([&]()->V{V _callee2572=_v_648_play.get();return j::call(_callee2572,j::Args{_v_650_t,j::get(_v_652_ctx,this->_literals[58]),j::get(_v_652_ctx,this->_literals[59])});})(),_v_651_s});})();
return V{};
},3);

}

return V{};
},1)});})();
return ([&]()->V{V _callee2576=this->_v_633_withMotion.get();return j::call(_callee2576,j::Args{_v_645_whole,([&]()->V{V _callee2575=this->_v_626_playedOnce.get();return j::call(_callee2575,j::Args{_v_640_p.get()});})()});})();

}

return V{};
},5);
this->_v_653_crop.get()=j::function([=](const j::Args &_args_fn654,const V &_receiver_fn654,const V &_self_fn654) mutable ->V{
V _v_655_src;
V _v_656_region;
_v_655_src=_args_fn654[0];
_v_656_region=_args_fn654[1];
{
V _v_657_p;
V _v_658_x;
V _v_659_y;
V _v_660_cols;
V _v_661_rows;
j::Cell _v_666_x0;
j::Cell _v_667_y0;
V _v_668_x1;
V _v_669_y1;
_v_657_p=([&]()->V{V _callee2577=this->_v_93_prepare.get();return j::call(_callee2577,j::Args{this->_literals[137],_v_655_src});})();
if(j::truth(([&]()->V{V _logical2578=([&]()->V{V _lhs2579=_v_656_region;V _rhs2580=V::null();return V(j::equal(_lhs2579,_rhs2580,true));})();return !j::truth(_logical2578)?([&]()->V{V _lhs2581=j::unary("typeof",_v_656_region);V _rhs2582=this->_literals[6];return V(!j::equal(_lhs2581,_rhs2582,true));})():_logical2578;})())){(void)(([&]()->V{V _callee2585=this->_v_13_fail.get();return j::call(_callee2585,j::Args{([&]()->V{std::u16string _text2583;_text2583+=u"crop() takes a region, { x, y, cols, rows }, not ";_text2583+=j::string(([&]()->V{V _callee2584=this->_v_25_shown.get();return j::call(_callee2584,j::Args{_v_656_region});})());_text2583+=u"";return V(std::move(_text2583));})()});})());
}
V _pattern2586=_v_656_region;
_v_658_x=j::get(_pattern2586,this->_literals[74]);
_v_659_y=j::get(_pattern2586,this->_literals[75]);
_v_660_cols=j::get(_pattern2586,this->_literals[32]);
_v_661_rows=j::get(_pattern2586,this->_literals[33]);
{for(const auto &_item2587:j::elements(([&]()->V{j::Args _array2588;_array2588.push_back(([&]()->V{j::Args _array2589;_array2589.push_back(this->_literals[74]);_array2589.push_back(_v_658_x);return j::array(std::move(_array2589));})());_array2588.push_back(([&]()->V{j::Args _array2590;_array2590.push_back(this->_literals[75]);_array2590.push_back(_v_659_y);return j::array(std::move(_array2590));})());return j::array(std::move(_array2588));})())){V _v_662_k;
V _v_663_v;
V _pattern2591=_item2587;
_v_662_k=j::get(_pattern2591,V(0));
_v_663_v=j::get(_pattern2591,V(1));
if(j::truth(j::unary("!",([&]()->V{V _receiver2592=j::builtin("Number");V _method2593=this->_literals[0];V _method=j::get(_receiver2592,_method2593);j::Args _params2594=j::Args{_v_663_v};return j::call(_method,_params2594,_receiver2592);})()))){(void)(([&]()->V{V _callee2597=this->_v_13_fail.get();return j::call(_callee2597,j::Args{([&]()->V{std::u16string _text2595;_text2595+=u"crop's region.";_text2595+=j::string(_v_662_k);_text2595+=u" takes a whole number, not ";_text2595+=j::string(([&]()->V{V _callee2596=this->_v_25_shown.get();return j::call(_callee2596,j::Args{_v_663_v});})());_text2595+=u"";return V(std::move(_text2595));})()});})());
}
}}
{for(const auto &_item2598:j::elements(([&]()->V{j::Args _array2599;_array2599.push_back(([&]()->V{j::Args _array2600;_array2600.push_back(this->_literals[32]);_array2600.push_back(_v_660_cols);return j::array(std::move(_array2600));})());_array2599.push_back(([&]()->V{j::Args _array2601;_array2601.push_back(this->_literals[33]);_array2601.push_back(_v_661_rows);return j::array(std::move(_array2601));})());return j::array(std::move(_array2599));})())){V _v_664_k;
V _v_665_v;
V _pattern2602=_item2598;
_v_664_k=j::get(_pattern2602,V(0));
_v_665_v=j::get(_pattern2602,V(1));
if(j::truth(([&]()->V{V _logical2603=j::unary("!",([&]()->V{V _receiver2604=j::builtin("Number");V _method2605=this->_literals[0];V _method=j::get(_receiver2604,_method2605);j::Args _params2606=j::Args{_v_665_v};return j::call(_method,_params2606,_receiver2604);})());return !j::truth(_logical2603)?([&]()->V{V _lhs2607=_v_665_v;V _rhs2608=V(1.0);return j::binary("<",_lhs2607,_rhs2608);})():_logical2603;})())){(void)(([&]()->V{V _callee2611=this->_v_13_fail.get();return j::call(_callee2611,j::Args{([&]()->V{std::u16string _text2609;_text2609+=u"crop's region.";_text2609+=j::string(_v_664_k);_text2609+=u" takes a whole number of 1 or more, not ";_text2609+=j::string(([&]()->V{V _callee2610=this->_v_25_shown.get();return j::call(_callee2610,j::Args{_v_665_v});})());_text2609+=u"";return V(std::move(_text2609));})()});})());
}
}}
_v_666_x0.get()=([&]()->V{V _receiver2614=j::builtin("Math");V _method2615=this->_literals[44];V _method=j::get(_receiver2614,_method2615);j::Args _params2616=j::Args{V(0.0),_v_658_x};return j::call(_method,_params2616,_receiver2614);})();
_v_667_y0.get()=([&]()->V{V _receiver2619=j::builtin("Math");V _method2620=this->_literals[44];V _method=j::get(_receiver2619,_method2620);j::Args _params2621=j::Args{V(0.0),_v_659_y};return j::call(_method,_params2621,_receiver2619);})();
_v_668_x1=([&]()->V{V _receiver2626=j::builtin("Math");V _method2627=this->_literals[43];V _method=j::get(_receiver2626,_method2627);j::Args _params2628=j::Args{j::get(_v_657_p,this->_literals[32]),([&]()->V{V _lhs2622=_v_658_x;V _rhs2623=_v_660_cols;return j::binary("+",_lhs2622,_rhs2623);})()};return j::call(_method,_params2628,_receiver2626);})();
_v_669_y1=([&]()->V{V _receiver2633=j::builtin("Math");V _method2634=this->_literals[43];V _method=j::get(_receiver2633,_method2634);j::Args _params2635=j::Args{j::get(_v_657_p,this->_literals[33]),([&]()->V{V _lhs2629=_v_659_y;V _rhs2630=_v_661_rows;return j::binary("+",_lhs2629,_rhs2630);})()};return j::call(_method,_params2635,_receiver2633);})();
if(j::truth(([&]()->V{V _logical2636=([&]()->V{V _lhs2637=_v_668_x1;V _rhs2638=_v_666_x0.get();return j::binary("<=",_lhs2637,_rhs2638);})();return !j::truth(_logical2636)?([&]()->V{V _lhs2639=_v_669_y1;V _rhs2640=_v_667_y0.get();return j::binary("<=",_lhs2639,_rhs2640);})():_logical2636;})())){(void)(([&]()->V{V _callee2642=this->_v_13_fail.get();return j::call(_callee2642,j::Args{([&]()->V{std::u16string _text2641;_text2641+=u"crop's region, ";_text2641+=j::string(_v_660_cols);_text2641+=u" by ";_text2641+=j::string(_v_661_rows);_text2641+=u" at ";_text2641+=j::string(_v_658_x);_text2641+=u", ";_text2641+=j::string(_v_659_y);_text2641+=u", misses ";_text2641+=j::string(j::get(j::get(_v_657_p,this->_literals[29]),this->_literals[9]));_text2641+=u", which is ";_text2641+=j::string(j::get(_v_657_p,this->_literals[32]));_text2641+=u" by ";_text2641+=j::string(j::get(_v_657_p,this->_literals[33]));_text2641+=u"";return V(std::move(_text2641));})()});})());
}
return ([&]()->V{V _callee2650=this->_v_637_reshape.get();return j::call(_callee2650,j::Args{this->_literals[137],_v_657_p,([&]()->V{V _lhs2643=_v_668_x1;V _rhs2644=_v_666_x0.get();return V(j::number(_lhs2643)-j::number(_rhs2644));})(),([&]()->V{V _lhs2645=_v_669_y1;V _rhs2646=_v_667_y0.get();return V(j::number(_lhs2645)-j::number(_rhs2646));})(),j::function([=](const j::Args &_args_fn670,const V &_receiver_fn670,const V &_self_fn670) mutable ->V{
V _v_671_g;
V _v_672_s;
_v_671_g=_args_fn670[0];
_v_672_s=_args_fn670[1];
return ([&]()->V{V _receiver2647=_v_672_s;V _method2648=this->_literals[90];V _method=j::get(_receiver2647,_method2648);j::Args _params2649=j::Args{_v_671_g,j::unary("-",_v_666_x0.get()),j::unary("-",_v_667_y0.get())};return j::call(_method,_params2649,_receiver2647);})();
return V{};
},2)});})();

}

return V{};
},2);
this->_v_673_pad.get()=j::function([=](const j::Args &_args_fn674,const V &_receiver_fn674,const V &_self_fn674) mutable ->V{
V _v_675_src;
V _v_676_n;
_v_675_src=_args_fn674[0];
_v_676_n=_args_fn674[1];
{
V _v_677_p;
V _v_678_sides;
j::Cell _v_684_top;
V _v_685_right;
V _v_686_bottom;
j::Cell _v_687_left;
_v_677_p=([&]()->V{V _callee2651=this->_v_93_prepare.get();return j::call(_callee2651,j::Args{this->_literals[98],_v_675_src});})();
if(j::truth(([&]()->V{V _lhs2652=j::unary("typeof",_v_676_n);V _rhs2653=this->_literals[104];return V(j::equal(_lhs2652,_rhs2653,true));})())){(void)((_v_678_sides=([&]()->V{V _receiver2656=([&]()->V{V _callee2659=j::builtin("Array");return j::call(_callee2659,j::Args{V(4.0)});})();V _method2657=this->_literals[42];V _method=j::get(_receiver2656,_method2657);j::Args _params2658=j::Args{([&]()->V{V _callee2655=this->_v_34_whole.get();return j::call(_callee2655,j::Args{_v_676_n,this->_literals[98],V(0.0),V(0.0)});})()};return j::call(_method,_params2658,_receiver2656);})()));
}else {if(j::truth(([&]()->V{V _logical2660=([&]()->V{V _receiver2661=j::builtin("Array");V _method2662=this->_literals[7];V _method=j::get(_receiver2661,_method2662);j::Args _params2663=j::Args{_v_676_n};return j::call(_method,_params2663,_receiver2661);})();return j::truth(_logical2660)?([&]()->V{V _lhs2664=j::get(_v_676_n,this->_literals[11]);V _rhs2665=V(2.0);return V(j::equal(_lhs2664,_rhs2665,true));})():_logical2660;})())){
V _v_679_r;
V _v_680_c;
V _pattern2669=([&]()->V{j::Args _array2666;_array2666.push_back(([&]()->V{V _callee2667=this->_v_34_whole.get();return j::call(_callee2667,j::Args{j::get(_v_676_n,V(0.0)),this->_literals[138],V(0.0),V(0.0)});})());_array2666.push_back(([&]()->V{V _callee2668=this->_v_34_whole.get();return j::call(_callee2668,j::Args{j::get(_v_676_n,V(1.0)),this->_literals[139],V(0.0),V(0.0)});})());return j::array(std::move(_array2666));})();
_v_679_r=j::get(_pattern2669,V(0));
_v_680_c=j::get(_pattern2669,V(1));
(void)((_v_678_sides=([&]()->V{j::Args _array2671;_array2671.push_back(_v_679_r);_array2671.push_back(_v_680_c);_array2671.push_back(_v_679_r);_array2671.push_back(_v_680_c);return j::array(std::move(_array2671));})()));

}
else {if(j::truth(([&]()->V{V _logical2672=([&]()->V{V _logical2673=([&]()->V{V _lhs2674=_v_676_n;V _rhs2675=V::null();return V(!j::equal(_lhs2674,_rhs2675,true));})();return j::truth(_logical2673)?([&]()->V{V _lhs2676=j::unary("typeof",_v_676_n);V _rhs2677=this->_literals[6];return V(j::equal(_lhs2676,_rhs2677,true));})():_logical2673;})();return j::truth(_logical2672)?j::unary("!",([&]()->V{V _receiver2678=j::builtin("Array");V _method2679=this->_literals[7];V _method=j::get(_receiver2678,_method2679);j::Args _params2680=j::Args{_v_676_n};return j::call(_method,_params2680,_receiver2678);})()):_logical2672;})())){
j::Cell _v_681_o;
_v_681_o.get()=_v_676_n;
(void)((_v_678_sides=([&]()->V{V _receiver2684=([&]()->V{j::Args _array2687;_array2687.push_back(this->_literals[64]);_array2687.push_back(this->_literals[63]);_array2687.push_back(this->_literals[66]);_array2687.push_back(this->_literals[61]);return j::array(std::move(_array2687));})();V _method2685=this->_literals[5];V _method=j::get(_receiver2684,_method2685);j::Args _params2686=j::Args{j::function([=](const j::Args &_args_fn682,const V &_receiver_fn682,const V &_self_fn682) mutable ->V{
V _v_683_k;
_v_683_k=_args_fn682[0];
return ([&]()->V{V _callee2683=this->_v_34_whole.get();return j::call(_callee2683,j::Args{j::get(_v_681_o.get(),_v_683_k),([&]()->V{std::u16string _text2682;_text2682+=u"pad's ";_text2682+=j::string(_v_683_k);_text2682+=u"";return V(std::move(_text2682));})(),V(0.0),V(0.0)});})();
return V{};
},1)};return j::call(_method,_params2686,_receiver2684);})()));

}
else {return ([&]()->V{V _callee2690=this->_v_13_fail.get();return j::call(_callee2690,j::Args{([&]()->V{std::u16string _text2688;_text2688+=u"pad takes a number, [rows, columns] or { top, right, bottom, left }, not ";_text2688+=j::string(([&]()->V{V _callee2689=this->_v_25_shown.get();return j::call(_callee2689,j::Args{_v_676_n});})());_text2688+=u"";return V(std::move(_text2688));})()});})();
}
}
}
V _pattern2691=_v_678_sides;
_v_684_top.get()=j::get(_pattern2691,V(0));
_v_685_right=j::get(_pattern2691,V(1));
_v_686_bottom=j::get(_pattern2691,V(2));
_v_687_left.get()=j::get(_pattern2691,V(3));
return ([&]()->V{V _callee2703=this->_v_637_reshape.get();return j::call(_callee2703,j::Args{this->_literals[98],_v_677_p,([&]()->V{V _lhs2692=([&]()->V{V _lhs2694=j::get(_v_677_p,this->_literals[32]);V _rhs2695=_v_687_left.get();return j::binary("+",_lhs2694,_rhs2695);})();V _rhs2693=_v_685_right;return j::binary("+",_lhs2692,_rhs2693);})(),([&]()->V{V _lhs2696=([&]()->V{V _lhs2698=j::get(_v_677_p,this->_literals[33]);V _rhs2699=_v_684_top.get();return j::binary("+",_lhs2698,_rhs2699);})();V _rhs2697=_v_686_bottom;return j::binary("+",_lhs2696,_rhs2697);})(),j::function([=](const j::Args &_args_fn688,const V &_receiver_fn688,const V &_self_fn688) mutable ->V{
V _v_689_g;
V _v_690_s;
_v_689_g=_args_fn688[0];
_v_690_s=_args_fn688[1];
return ([&]()->V{V _receiver2700=_v_690_s;V _method2701=this->_literals[90];V _method=j::get(_receiver2700,_method2701);j::Args _params2702=j::Args{_v_689_g,_v_687_left.get(),_v_684_top.get()};return j::call(_method,_params2702,_receiver2700);})();
return V{};
},2)});})();

}

return V{};
},2);
this->_v_691_scale.get()=j::function([=](const j::Args &_args_fn692,const V &_receiver_fn692,const V &_self_fn692) mutable ->V{
V _v_693_src;
V _v_694_factor;
_v_693_src=_args_fn692[0];
_v_694_factor=_args_fn692[1];
{
V _v_695_p;
j::Cell _v_696_fx;
j::Cell _v_697_fy;
j::Cell _v_698_cols;
j::Cell _v_699_rows;
_v_695_p=([&]()->V{V _callee2704=this->_v_93_prepare.get();return j::call(_callee2704,j::Args{this->_literals[140],_v_693_src});})();
V _pattern2722=(j::truth(([&]()->V{V _lhs2705=j::unary("typeof",_v_694_factor);V _rhs2706=this->_literals[104];return V(j::equal(_lhs2705,_rhs2706,true));})())?([&]()->V{j::Args _array2707;_array2707.push_back(([&]()->V{V _callee2708=this->_v_34_whole.get();return j::call(_callee2708,j::Args{_v_694_factor,this->_literals[141],V(1.0),V(1.0)});})());_array2707.push_back(([&]()->V{V _callee2709=this->_v_34_whole.get();return j::call(_callee2709,j::Args{_v_694_factor,this->_literals[141],V(1.0),V(1.0)});})());return j::array(std::move(_array2707));})():(j::truth(([&]()->V{V _logical2710=([&]()->V{V _receiver2711=j::builtin("Array");V _method2712=this->_literals[7];V _method=j::get(_receiver2711,_method2712);j::Args _params2713=j::Args{_v_694_factor};return j::call(_method,_params2713,_receiver2711);})();return j::truth(_logical2710)?([&]()->V{V _lhs2714=j::get(_v_694_factor,this->_literals[11]);V _rhs2715=V(2.0);return V(j::equal(_lhs2714,_rhs2715,true));})():_logical2710;})())?([&]()->V{j::Args _array2716;_array2716.push_back(([&]()->V{V _callee2717=this->_v_34_whole.get();return j::call(_callee2717,j::Args{j::get(_v_694_factor,V(0.0)),this->_literals[142],V(1.0),V(1.0)});})());_array2716.push_back(([&]()->V{V _callee2718=this->_v_34_whole.get();return j::call(_callee2718,j::Args{j::get(_v_694_factor,V(1.0)),this->_literals[143],V(1.0),V(1.0)});})());return j::array(std::move(_array2716));})():([&]()->V{V _callee2721=this->_v_13_fail.get();return j::call(_callee2721,j::Args{([&]()->V{std::u16string _text2719;_text2719+=u"scale takes a whole number of 1 or more, or [across, down], not ";_text2719+=j::string(([&]()->V{V _callee2720=this->_v_25_shown.get();return j::call(_callee2720,j::Args{_v_694_factor});})());_text2719+=u"";return V(std::move(_text2719));})()});})()));
_v_696_fx.get()=j::get(_pattern2722,V(0));
_v_697_fy.get()=j::get(_pattern2722,V(1));
_v_698_cols.get()=([&]()->V{V _lhs2723=j::get(_v_695_p,this->_literals[32]);V _rhs2724=_v_696_fx.get();return V(j::number(_lhs2723)*j::number(_rhs2724));})();
_v_699_rows.get()=([&]()->V{V _lhs2725=j::get(_v_695_p,this->_literals[33]);V _rhs2726=_v_697_fy.get();return V(j::number(_lhs2725)*j::number(_rhs2726));})();
return ([&]()->V{V _callee2750=this->_v_637_reshape.get();return j::call(_callee2750,j::Args{this->_literals[140],_v_695_p,_v_698_cols.get(),_v_699_rows.get(),j::function([=](const j::Args &_args_fn700,const V &_receiver_fn700,const V &_self_fn700) mutable ->V{
V _v_701_g;
V _v_702_s;
_v_701_g=_args_fn700[0];
_v_702_s=_args_fn700[1];
{
{V _v_703_y;
_v_703_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs2727=_v_703_y;V _rhs2728=_v_699_rows.get();return j::binary("<",_lhs2727,_rhs2728);})());(void)(j::increment(_v_703_y,1,false))){
V _v_704_from;
_v_704_from=([&]()->V{V _lhs2729=([&]()->V{V _number2733=([&]()->V{V _lhs2734=_v_703_y;V _rhs2735=_v_697_fy.get();return V(j::number(_lhs2734)/j::number(_rhs2735));})();return V(std::floor(j::number(_number2733)));})();V _rhs2730=j::get(_v_701_g,this->_literals[32]);return V(j::number(_lhs2729)*j::number(_rhs2730));})();
{V _v_705_x;
V _v_706_i;
_v_705_x=V(0.0);
_v_706_i=([&]()->V{V _lhs2736=_v_703_y;V _rhs2737=_v_698_cols.get();return V(j::number(_lhs2736)*j::number(_rhs2737));})();
for(;j::truth(([&]()->V{V _lhs2738=_v_705_x;V _rhs2739=_v_698_cols.get();return j::binary("<",_lhs2738,_rhs2739);})());(void)((j::increment(_v_705_x,1,false),j::increment(_v_706_i,1,false)))){
V _v_707_k;
_v_707_k=([&]()->V{V _lhs2740=_v_704_from;V _rhs2741=([&]()->V{V _number2744=([&]()->V{V _lhs2745=_v_705_x;V _rhs2746=_v_696_fx.get();return V(j::number(_lhs2745)/j::number(_rhs2746));})();return V(std::floor(j::number(_number2744)));})();return j::binary("+",_lhs2740,_rhs2741);})();
(void)(([&]()->V{V _receiver2747=_v_702_s;V _method2748=this->_literals[82];V _method=j::get(_receiver2747,_method2748);j::Args _params2749=j::Args{_v_706_i,j::get(j::get(_v_701_g,this->_literals[56]),_v_707_k),j::get(j::get(_v_701_g,this->_literals[57]),_v_707_k)};return j::call(_method,_params2749,_receiver2747);})());

}
}

}
}

}

return V{};
},2)});})();

}

return V{};
},2);
this->_v_708_flip.get()=j::function([=](const j::Args &_args_fn709,const V &_receiver_fn709,const V &_self_fn709) mutable ->V{
V _v_710_src;
V _v_711_axis;
_v_710_src=_args_fn709[0];
_v_711_axis=_args_fn709[1];
{
V _v_712_p;
V _v_713_ax;
j::Cell _v_714_fx;
j::Cell _v_715_fy;
j::Cell _v_716_cols;
j::Cell _v_717_rows;
_v_712_p=([&]()->V{V _callee2751=this->_v_93_prepare.get();return j::call(_callee2751,j::Args{this->_literals[144],_v_710_src});})();
if(j::truth(([&]()->V{V _lhs2752=_v_711_axis;V _rhs2753=j::builtin("undefined");return V(j::equal(_lhs2752,_rhs2753,true));})())){(void)(([&]()->V{V _callee2755=this->_v_13_fail.get();return j::call(_callee2755,j::Args{([&]()->V{std::u16string _text2754;_text2754+=u"flip() takes an axis: \"x\" mirrors it left to right, \"y\" turns it upside down, \"both\" does both";return V(std::move(_text2754));})()});})());
}
_v_713_ax=([&]()->V{V _callee2757=this->_v_46_oneOf.get();return j::call(_callee2757,j::Args{_v_711_axis,this->_literals[145],([&]()->V{j::Args _array2756;_array2756.push_back(this->_literals[74]);_array2756.push_back(this->_literals[75]);_array2756.push_back(this->_literals[146]);return j::array(std::move(_array2756));})(),this->_literals[74]});})();
_v_714_fx.get()=([&]()->V{V _lhs2758=_v_713_ax;V _rhs2759=this->_literals[75];return V(!j::equal(_lhs2758,_rhs2759,true));})();
_v_715_fy.get()=([&]()->V{V _lhs2760=_v_713_ax;V _rhs2761=this->_literals[74];return V(!j::equal(_lhs2760,_rhs2761,true));})();
V _pattern2762=_v_712_p;
_v_716_cols.get()=j::get(_pattern2762,this->_literals[32]);
_v_717_rows.get()=j::get(_pattern2762,this->_literals[33]);
return ([&]()->V{V _callee2789=this->_v_637_reshape.get();return j::call(_callee2789,j::Args{this->_literals[144],_v_712_p,_v_716_cols.get(),_v_717_rows.get(),j::function([=](const j::Args &_args_fn718,const V &_receiver_fn718,const V &_self_fn718) mutable ->V{
V _v_719_g;
V _v_720_s;
_v_719_g=_args_fn718[0];
_v_720_s=_args_fn718[1];
{
V _v_721_m;
_v_721_m=([&]()->V{V _callee2763=this->_v_22_mirror.get();return j::call(_callee2763,j::Args{});})();
{V _v_722_y;
_v_722_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs2764=_v_722_y;V _rhs2765=_v_717_rows.get();return j::binary("<",_lhs2764,_rhs2765);})());(void)(j::increment(_v_722_y,1,false))){{V _v_723_x;
_v_723_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs2766=_v_723_x;V _rhs2767=_v_716_cols.get();return j::binary("<",_lhs2766,_rhs2767);})());(void)(j::increment(_v_723_x,1,false))){
V _v_724_k;
V _v_725_ch;
_v_724_k=([&]()->V{V _lhs2768=([&]()->V{V _lhs2770=(j::truth(_v_715_fy.get())?([&]()->V{V _lhs2772=([&]()->V{V _lhs2774=_v_717_rows.get();V _rhs2775=V(1.0);return V(j::number(_lhs2774)-j::number(_rhs2775));})();V _rhs2773=_v_722_y;return V(j::number(_lhs2772)-j::number(_rhs2773));})():_v_722_y);V _rhs2771=_v_716_cols.get();return V(j::number(_lhs2770)*j::number(_rhs2771));})();V _rhs2769=(j::truth(_v_714_fx.get())?([&]()->V{V _lhs2776=([&]()->V{V _lhs2778=_v_716_cols.get();V _rhs2779=V(1.0);return V(j::number(_lhs2778)-j::number(_rhs2779));})();V _rhs2777=_v_723_x;return V(j::number(_lhs2776)-j::number(_rhs2777));})():_v_723_x);return j::binary("+",_lhs2768,_rhs2769);})();
_v_725_ch=j::get(j::get(_v_719_g,this->_literals[56]),_v_724_k);
if(j::truth(_v_714_fx.get())){(void)((_v_725_ch=j::get(j::get(_v_721_m,this->_literals[74]),_v_725_ch)));
}
if(j::truth(_v_715_fy.get())){(void)((_v_725_ch=j::get(j::get(_v_721_m,this->_literals[75]),_v_725_ch)));
}
(void)(([&]()->V{V _receiver2786=_v_720_s;V _method2787=this->_literals[82];V _method=j::get(_receiver2786,_method2787);j::Args _params2788=j::Args{([&]()->V{V _lhs2782=([&]()->V{V _lhs2784=_v_722_y;V _rhs2785=_v_716_cols.get();return V(j::number(_lhs2784)*j::number(_rhs2785));})();V _rhs2783=_v_723_x;return j::binary("+",_lhs2782,_rhs2783);})(),_v_725_ch,j::get(j::get(_v_719_g,this->_literals[57]),_v_724_k)};return j::call(_method,_params2788,_receiver2786);})());

}
}
}}

}

return V{};
},2)});})();

}

return V{};
},2);
this->_v_727_thresholds.get()=j::function([=](const j::Args &_args_fn728,const V &_receiver_fn728,const V &_self_fn728) mutable ->V{
V _v_729_cols;
V _v_730_rows;
V _v_731_aspect;
V _v_732_seed;
_v_729_cols=_args_fn728[0];
_v_730_rows=_args_fn728[1];
_v_731_aspect=_args_fn728[2];
_v_732_seed=_args_fn728[3];
{
j::Cell _v_733_n;
j::Cell _v_734_raw;
V _v_737_order;
j::Cell _v_744_th;
_v_733_n.get()=([&]()->V{V _lhs2790=_v_729_cols;V _rhs2791=_v_730_rows;return V(j::number(_lhs2790)*j::number(_rhs2791));})();
_v_734_raw.get()=([&]()->V{V _callee2792=j::builtin("Float64Array");return j::construct(_callee2792,j::Args{_v_733_n.get()});})();
{V _v_735_y;
_v_735_y=V(0.0);
for(;j::truth(([&]()->V{V _lhs2793=_v_735_y;V _rhs2794=_v_730_rows;return j::binary("<",_lhs2793,_rhs2794);})());(void)(j::increment(_v_735_y,1,false))){{V _v_736_x;
_v_736_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs2795=_v_736_x;V _rhs2796=_v_729_cols;return j::binary("<",_lhs2795,_rhs2796);})());(void)(j::increment(_v_736_x,1,false))){(void)(([&]()->V{V _base2798=_v_734_raw.get();V _key2799=([&]()->V{V _lhs2800=([&]()->V{V _lhs2802=_v_735_y;V _rhs2803=_v_729_cols;return V(j::number(_lhs2802)*j::number(_rhs2803));})();V _rhs2801=_v_736_x;return j::binary("+",_lhs2800,_rhs2801);})();V _assign2797=([&]()->V{V _lhs2804=([&]()->V{V _lhs2806=V(0.8);V _rhs2807=([&]()->V{V _callee2814=this->_v_21_valueNoise.get();return j::call(_callee2814,j::Args{([&]()->V{V _lhs2808=_v_736_x;V _rhs2809=V(0.17);return V(j::number(_lhs2808)*j::number(_rhs2809));})(),([&]()->V{V _lhs2810=([&]()->V{V _lhs2812=_v_735_y;V _rhs2813=V(0.17);return V(j::number(_lhs2812)*j::number(_rhs2813));})();V _rhs2811=_v_731_aspect;return V(j::number(_lhs2810)*j::number(_rhs2811));})(),_v_732_seed});})();return V(j::number(_lhs2806)*j::number(_rhs2807));})();V _rhs2805=([&]()->V{V _lhs2815=V(0.2);V _rhs2816=([&]()->V{V _callee2817=this->_v_14_hash.get();return j::call(_callee2817,j::Args{_v_736_x,_v_735_y,_v_732_seed,V(7.0)});})();return V(j::number(_lhs2815)*j::number(_rhs2816));})();return j::binary("+",_lhs2804,_rhs2805);})();return j::put(_base2798,_key2799,_assign2797);})());
}}
}}
_v_737_order=([&]()->V{V _receiver2820=([&]()->V{V _receiver2824=j::builtin("Array");V _method2825=this->_literals[47];V _method=j::get(_receiver2824,_method2825);j::Args _params2826=j::Args{([&]()->V{V _obj2823=j::object();j::put(_obj2823,this->_literals[11],_v_733_n.get());return _obj2823;})(),j::function([=](const j::Args &_args_fn738,const V &_receiver_fn738,const V &_self_fn738) mutable ->V{
V _v_739__;
V _v_740_i;
_v_739__=_args_fn738[0];
_v_740_i=_args_fn738[1];
return _v_740_i;
return V{};
},2)};return j::call(_method,_params2826,_receiver2824);})();V _method2821=this->_literals[147];V _method=j::get(_receiver2820,_method2821);j::Args _params2822=j::Args{j::function([=](const j::Args &_args_fn741,const V &_receiver_fn741,const V &_self_fn741) mutable ->V{
V _v_742_a;
V _v_743_b;
_v_742_a=_args_fn741[0];
_v_743_b=_args_fn741[1];
return ([&]()->V{V _lhs2818=j::get(_v_734_raw.get(),_v_742_a);V _rhs2819=j::get(_v_734_raw.get(),_v_743_b);return V(j::number(_lhs2818)-j::number(_rhs2819));})();
return V{};
},2)};return j::call(_method,_params2822,_receiver2820);})();
_v_744_th.get()=([&]()->V{V _callee2827=j::builtin("Float32Array");return j::construct(_callee2827,j::Args{_v_733_n.get()});})();
(void)(([&]()->V{V _receiver2835=_v_737_order;V _method2836=this->_literals[148];V _method=j::get(_receiver2835,_method2836);j::Args _params2837=j::Args{j::function([=](const j::Args &_args_fn745,const V &_receiver_fn745,const V &_self_fn745) mutable ->V{
V _v_746_i;
V _v_747_rank;
_v_746_i=_args_fn745[0];
_v_747_rank=_args_fn745[1];
return ([&]()->V{V _base2829=_v_744_th.get();V _key2830=_v_746_i;V _assign2828=([&]()->V{V _lhs2831=([&]()->V{V _lhs2833=_v_747_rank;V _rhs2834=V(0.5);return j::binary("+",_lhs2833,_rhs2834);})();V _rhs2832=_v_733_n.get();return V(j::number(_lhs2831)/j::number(_rhs2832));})();return j::put(_base2829,_key2830,_assign2828);})();
return V{};
},2)};return j::call(_method,_params2837,_receiver2835);})());
return _v_744_th.get();

}

return V{};
},4);
this->_v_749_fadeTable.get()=j::function([=](const j::Args &_args_fn750,const V &_receiver_fn750,const V &_self_fn750) mutable ->V{
{
V _v_751_FADES;
j::Cell _v_752_ramp;
j::Cell _v_753_level;
V _v_754_top;
V _v_755_ink;
V _v_756_put;
if(j::truth(this->_v_748_fades.get())){return this->_v_748_fades.get();
}
_v_751_FADES=([&]()->V{j::Args _array2838;_array2838.push_back(j::get(this->_v_18_ramps.get(),this->_literals[149]));_array2838.push_back(j::get(this->_v_18_ramps.get(),this->_literals[150]));_array2838.push_back(j::get(this->_v_18_ramps.get(),this->_literals[151]));_array2838.push_back(j::get(this->_v_18_ramps.get(),this->_literals[152]));return j::array(std::move(_array2838));})();
_v_752_ramp.get()=([&]()->V{V _receiver2839=([&]()->V{V _callee2842=j::builtin("Uint8Array");return j::construct(_callee2842,j::Args{V(65536.0)});})();V _method2840=this->_literals[42];V _method=j::get(_receiver2839,_method2840);j::Args _params2841=j::Args{V(3.0)};return j::call(_method,_params2841,_receiver2839);})();
_v_753_level.get()=([&]()->V{V _receiver2843=([&]()->V{V _callee2846=j::builtin("Uint8Array");return j::construct(_callee2846,j::Args{V(65536.0)});})();V _method2844=this->_literals[42];V _method=j::get(_receiver2843,_method2844);j::Args _params2845=j::Args{V(5.0)};return j::call(_method,_params2845,_receiver2843);})();
_v_754_top=([&]()->V{V _lhs2847=j::get(j::get(this->_v_18_ramps.get(),this->_literals[152]),this->_literals[11]);V _rhs2848=V(1.0);return V(j::number(_lhs2847)-j::number(_rhs2848));})();
_v_755_ink=j::get(this->_v_18_ramps.get(),this->_literals[153]);
_v_756_put=j::function([=](const j::Args &_args_fn757,const V &_receiver_fn757,const V &_self_fn757) mutable ->V{
V _v_758_c;
V _v_759_r;
V _v_760_l;
_v_758_c=_args_fn757[0];
_v_759_r=_args_fn757[1];
_v_760_l=_args_fn757[2];
return (([&]()->V{V _base2850=_v_752_ramp.get();V _key2851=_v_758_c;V _assign2849=_v_759_r;return j::put(_base2850,_key2851,_assign2849);})(),([&]()->V{V _base2853=_v_753_level.get();V _key2854=_v_758_c;V _assign2852=_v_760_l;return j::put(_base2853,_key2854,_assign2852);})());
return V{};
},3);
{V _v_761_c;
_v_761_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs2855=_v_761_c;V _rhs2856=V(32.0);return j::binary("<=",_lhs2855,_rhs2856);})());(void)(j::increment(_v_761_c,1,false))){(void)(([&]()->V{V _base2858=_v_753_level.get();V _key2859=_v_761_c;V _assign2857=V(0.0);return j::put(_base2858,_key2859,_assign2857);})());
}}
{V _v_762_i;
_v_762_i=V(1.0);
for(;j::truth(([&]()->V{V _lhs2860=_v_762_i;V _rhs2861=j::get(_v_755_ink,this->_literals[11]);return j::binary("<",_lhs2860,_rhs2861);})());(void)(j::increment(_v_762_i,1,false))){(void)(([&]()->V{V _callee2883=_v_756_put;return j::call(_callee2883,j::Args{([&]()->V{V _receiver2862=_v_755_ink;V _method2863=this->_literals[89];V _method=j::get(_receiver2862,_method2863);j::Args _params2864=j::Args{_v_762_i};return j::call(_method,_params2864,_receiver2862);})(),V(3.0),([&]()->V{V _receiver2880=j::builtin("Math");V _method2881=this->_literals[44];V _method=j::get(_receiver2880,_method2881);j::Args _params2882=j::Args{V(1.0),([&]()->V{V _number2871=([&]()->V{V _lhs2872=([&]()->V{V _lhs2874=_v_762_i;V _rhs2875=([&]()->V{V _lhs2876=j::get(_v_755_ink,this->_literals[11]);V _rhs2877=V(1.0);return V(j::number(_lhs2876)-j::number(_rhs2877));})();return V(j::number(_lhs2874)/j::number(_rhs2875));})();V _rhs2873=_v_754_top;return V(j::number(_lhs2872)*j::number(_rhs2873));})();return V(std::floor(j::number(_number2871)+.5));})()};return j::call(_method,_params2882,_receiver2880);})()});})());
}}
{V _v_763_c;
_v_763_c=V(9472.0);
for(;j::truth(([&]()->V{V _lhs2884=_v_763_c;V _rhs2885=V(9599.0);return j::binary("<=",_lhs2884,_rhs2885);})());(void)(j::increment(_v_763_c,1,false))){(void)(([&]()->V{V _callee2886=_v_756_put;return j::call(_callee2886,j::Args{_v_763_c,V(3.0),V(3.0)});})());
}}
{V _v_764_k;
_v_764_k=V(1.0);
for(;j::truth(([&]()->V{V _lhs2887=_v_764_k;V _rhs2888=V(256.0);return j::binary("<",_lhs2887,_rhs2888);})());(void)(j::increment(_v_764_k,1,false))){
V _v_765_dots;
_v_765_dots=V(0.0);
{V _v_766_b;
_v_766_b=_v_764_k;
for(;j::truth(_v_766_b);(void)((_v_766_b=j::binary(">>",_v_766_b,V(1.0))))){(void)((_v_765_dots=j::binary("+",_v_765_dots,([&]()->V{V _lhs2891=_v_766_b;V _rhs2892=V(1.0);return V(int(j::i32(_lhs2891)&j::i32(_rhs2892)));})())));
}}
(void)(([&]()->V{V _callee2909=_v_756_put;return j::call(_callee2909,j::Args{([&]()->V{V _lhs2893=V(10240.0);V _rhs2894=_v_764_k;return j::binary("+",_lhs2893,_rhs2894);})(),V(3.0),([&]()->V{V _receiver2906=j::builtin("Math");V _method2907=this->_literals[44];V _method=j::get(_receiver2906,_method2907);j::Args _params2908=j::Args{V(1.0),([&]()->V{V _number2899=([&]()->V{V _lhs2900=([&]()->V{V _lhs2902=_v_765_dots;V _rhs2903=V(8.0);return V(j::number(_lhs2902)/j::number(_rhs2903));})();V _rhs2901=_v_754_top;return V(j::number(_lhs2900)*j::number(_rhs2901));})();return V(std::floor(j::number(_number2899)+.5));})()};return j::call(_method,_params2908,_receiver2906);})()});})());

}
}
{for(const auto &_item2910:j::elements(([&]()->V{j::Args _array2911;_array2911.push_back(([&]()->V{j::Args _array2912;_array2912.push_back(this->_literals[154]);_array2912.push_back(V(1.0));return j::array(std::move(_array2912));})());_array2911.push_back(([&]()->V{j::Args _array2913;_array2913.push_back(this->_literals[155]);_array2913.push_back(V(2.0));return j::array(std::move(_array2913));})());_array2911.push_back(([&]()->V{j::Args _array2914;_array2914.push_back(this->_literals[156]);_array2914.push_back(V(3.0));return j::array(std::move(_array2914));})());return j::array(std::move(_array2911));})())){V _v_767_chars;
V _v_768_l;
V _pattern2915=_item2910;
_v_767_chars=j::get(_pattern2915,V(0));
_v_768_l=j::get(_pattern2915,V(1));
{for(const auto &_item2916:j::elements(_v_767_chars)){V _v_769_ch;
_v_769_ch=_item2916;
(void)(([&]()->V{V _callee2920=_v_756_put;return j::call(_callee2920,j::Args{([&]()->V{V _receiver2917=_v_769_ch;V _method2918=this->_literals[89];V _method=j::get(_receiver2917,_method2918);j::Args _params2919=j::Args{V(0.0)};return j::call(_method,_params2919,_receiver2917);})(),V(0.0),_v_768_l});})());
}}
}}
{V _v_770_k;
_v_770_k=([&]()->V{V _lhs2921=j::get(_v_751_FADES,this->_literals[11]);V _rhs2922=V(1.0);return V(j::number(_lhs2921)-j::number(_rhs2922));})();
for(;j::truth(([&]()->V{V _lhs2923=_v_770_k;V _rhs2924=V(0.0);return j::binary(">=",_lhs2923,_rhs2924);})());(void)(j::increment(_v_770_k,-1,false))){{V _v_771_i;
_v_771_i=V(1.0);
for(;j::truth(([&]()->V{V _lhs2925=_v_771_i;V _rhs2926=j::get(j::get(_v_751_FADES,_v_770_k),this->_literals[11]);return j::binary("<",_lhs2925,_rhs2926);})());(void)(j::increment(_v_771_i,1,false))){(void)(([&]()->V{V _callee2930=_v_756_put;return j::call(_callee2930,j::Args{([&]()->V{V _receiver2927=j::get(_v_751_FADES,_v_770_k);V _method2928=this->_literals[89];V _method=j::get(_receiver2927,_method2928);j::Args _params2929=j::Args{_v_771_i};return j::call(_method,_params2929,_receiver2927);})(),_v_770_k,_v_771_i});})());
}}
}}
return (this->_v_748_fades.get()=([&]()->V{V _obj2932=j::object();j::put(_obj2932,this->_literals[157],_v_752_ramp.get());j::put(_obj2932,this->_literals[158],_v_753_level.get());j::put(_obj2932,this->_literals[159],_v_751_FADES);return _obj2932;})());

}

return V{};
},0);
this->_v_775_sequence.get()=j::function([=](const j::Args &_args_fn776,const V &_receiver_fn776,const V &_self_fn776) mutable ->V{
j::Cell _v_777_steps;
V _v_778_o;
_v_777_steps.get()=_args_fn776[0];
V _default2933=_args_fn776[1];if(_default2933.kind==V::Undefined||_default2933.kind==V::Hole)_default2933=([&]()->V{V _obj2934=j::object();return _obj2934;})();
_v_778_o=_default2933;
{
V _v_779_fn;
V _v_780_opts;
V _v_781_given;
j::Cell _v_782_each;
V _v_783_transition;
V _v_784_overlap;
j::Cell _v_785_loop;
V _v_786_seed;
j::Cell _v_787_all;
j::Cell _v_788_n;
j::Cell _v_789_span;
j::Cell _v_794_asked;
j::Cell _v_798_ov;
j::Cell _v_799_start;
j::Cell _v_806_total;
j::Cell _v_807_cols;
j::Cell _v_810_rows;
j::Cell _v_813_cell;
j::Cell _v_814_into;
V _v_817_held;
V _v_818_ph;
V _v_819_own;
V _v_820_still;
V _v_821_alone;
j::Cell _v_822_m;
j::Cell _v_823_th;
j::Cell _v_824_fading;
V _v_825_fps;
V _v_826_whole;
_v_779_fn=this->_literals[160];
_v_780_opts=([&]()->V{V _callee2936=this->_v_54_object.get();return j::call(_callee2936,j::Args{_v_778_o,this->_literals[161],([&]()->V{j::Args _array2935;_array2935.push_back(this->_literals[136]);_array2935.push_back(this->_literals[162]);_array2935.push_back(this->_literals[163]);_array2935.push_back(this->_literals[50]);_array2935.push_back(this->_literals[164]);_array2935.push_back(this->_literals[9]);_array2935.push_back(this->_literals[10]);return j::array(std::move(_array2935));})()});})();
_v_781_given=([&]()->V{V _callee2937=this->_v_64_naming.get();return j::call(_callee2937,j::Args{_v_779_fn,_v_780_opts});})();
_v_782_each.get()=([&]()->V{V _callee2938=this->_v_40_duration.get();return j::call(_callee2938,j::Args{j::get(_v_780_opts,this->_literals[136]),this->_literals[165],V(4.0)});})();
_v_783_transition=([&]()->V{V _callee2939=this->_v_46_oneOf.get();return j::call(_callee2939,j::Args{j::get(_v_780_opts,this->_literals[162]),this->_literals[166],this->_v_726_TRANSITIONS.get(),this->_literals[167]});})();
_v_784_overlap=([&]()->V{V _callee2940=this->_v_40_duration.get();return j::call(_callee2940,j::Args{j::get(_v_780_opts,this->_literals[163]),this->_literals[168],V(0.8),V(true)});})();
_v_785_loop.get()=([&]()->V{V _logical2941=j::get(_v_780_opts,this->_literals[50]);return j::nullish(_logical2941)?V(true):_logical2941;})();
if(j::truth(([&]()->V{V _lhs2942=j::unary("typeof",_v_785_loop.get());V _rhs2943=this->_literals[102];return V(!j::equal(_lhs2942,_rhs2943,true));})())){(void)(([&]()->V{V _callee2946=this->_v_13_fail.get();return j::call(_callee2946,j::Args{([&]()->V{std::u16string _text2944;_text2944+=u"sequence's loop takes true or false, not ";_text2944+=j::string(([&]()->V{V _callee2945=this->_v_25_shown.get();return j::call(_callee2945,j::Args{_v_785_loop.get()});})());_text2944+=u"";return V(std::move(_text2944));})()});})());
}
_v_786_seed=([&]()->V{V _logical2947=j::get(_v_780_opts,this->_literals[164]);return j::nullish(_logical2947)?V(1.0):_logical2947;})();
if(j::truth(j::unary("!",([&]()->V{V _receiver2948=j::builtin("Number");V _method2949=this->_literals[0];V _method=j::get(_receiver2948,_method2949);j::Args _params2950=j::Args{_v_786_seed};return j::call(_method,_params2950,_receiver2948);})()))){(void)(([&]()->V{V _callee2953=this->_v_13_fail.get();return j::call(_callee2953,j::Args{([&]()->V{std::u16string _text2951;_text2951+=u"sequence's seed takes a whole number, not ";_text2951+=j::string(([&]()->V{V _callee2952=this->_v_25_shown.get();return j::call(_callee2952,j::Args{_v_786_seed});})());_text2951+=u"";return V(std::move(_text2951));})()});})());
}
_v_787_all.get()=([&]()->V{V _callee2955=this->_v_111_list.get();return j::call(_callee2955,j::Args{_v_779_fn,_v_777_steps.get(),([&]()->V{j::Args _array2954;for(const auto &_value:j::elements(this->_v_72_CLIP.get()))_array2954.push_back(_value);_array2954.push_back(this->_literals[136]);return j::array(std::move(_array2954));})()});})();
_v_788_n.get()=j::get(_v_787_all.get(),this->_literals[11]);
_v_789_span.get()=([&]()->V{V _receiver2961=_v_787_all.get();V _method2962=this->_literals[5];V _method=j::get(_receiver2961,_method2962);j::Args _params2963=j::Args{j::function([=](const j::Args &_args_fn790,const V &_receiver_fn790,const V &_self_fn790) mutable ->V{
V _v_791__;
V _v_792_i;
_v_791__=_args_fn790[0];
_v_792_i=_args_fn790[1];
{
V _v_793_v;
_v_793_v=j::get(_v_777_steps.get(),_v_792_i);
return ([&]()->V{V _callee2960=this->_v_40_duration.get();return j::call(_callee2960,j::Args{(j::truth(([&]()->V{V _callee2956=this->_v_81_isClip.get();return j::call(_callee2956,j::Args{_v_793_v});})())?j::get(_v_793_v,this->_literals[136]):j::builtin("undefined")),([&]()->V{std::u16string _text2957;_text2957+=u"step ";_text2957+=j::string(([&]()->V{V _lhs2958=_v_792_i;V _rhs2959=V(1.0);return j::binary("+",_lhs2958,_rhs2959);})());_text2957+=u"'s seconds";return V(std::move(_text2957));})(),_v_782_each.get()});})();

}

return V{};
},2)};return j::call(_method,_params2963,_receiver2961);})();
_v_794_asked.get()=(j::truth(([&]()->V{V _lhs2964=_v_783_transition;V _rhs2965=this->_literals[169];return V(j::equal(_lhs2964,_rhs2965,true));})())?V(0.0):_v_784_overlap);
(void)(([&]()->V{V _receiver2972=_v_789_span.get();V _method2973=this->_literals[148];V _method=j::get(_receiver2972,_method2973);j::Args _params2974=j::Args{j::function([=](const j::Args &_args_fn795,const V &_receiver_fn795,const V &_self_fn795) mutable ->V{
V _v_796_d;
V _v_797_i;
_v_796_d=_args_fn795[0];
_v_797_i=_args_fn795[1];
{
if(j::truth(([&]()->V{V _lhs2966=_v_796_d;V _rhs2967=_v_794_asked.get();return j::binary("<",_lhs2966,_rhs2967);})())){(void)(([&]()->V{V _callee2971=this->_v_13_fail.get();return j::call(_callee2971,j::Args{([&]()->V{std::u16string _text2968;_text2968+=u"sequence's overlap, ";_text2968+=j::string(_v_794_asked.get());_text2968+=u" seconds, is longer than step ";_text2968+=j::string(([&]()->V{V _lhs2969=_v_797_i;V _rhs2970=V(1.0);return j::binary("+",_lhs2969,_rhs2970);})());_text2968+=u"'s ";_text2968+=j::string(_v_796_d);_text2968+=u": a transition happens inside the step it leaves, so give it less overlap or more seconds";return V(std::move(_text2968));})()});})());
}

}

return V{};
},2)};return j::call(_method,_params2974,_receiver2972);})());
_v_798_ov.get()=(j::truth(([&]()->V{V _logical2975=([&]()->V{V _lhs2976=_v_788_n.get();V _rhs2977=V(1.0);return V(j::equal(_lhs2976,_rhs2977,true));})();return j::truth(_logical2975)?j::unary("!",j::get(j::get(j::get(_v_787_all.get(),V(0.0)),this->_literals[29]),this->_literals[49])):_logical2975;})())?V(0.0):_v_794_asked.get());
_v_799_start.get()=([&]()->V{V _receiver2986=_v_789_span.get();V _method2987=this->_literals[5];V _method=j::get(_receiver2986,_method2987);j::Args _params2988=j::Args{j::function([=](const j::Args &_args_fn800,const V &_receiver_fn800,const V &_self_fn800) mutable ->V{
V _v_801__;
V _v_802_i;
_v_801__=_args_fn800[0];
_v_802_i=_args_fn800[1];
return ([&]()->V{V _receiver2980=([&]()->V{V _receiver2983=_v_789_span.get();V _method2984=this->_literals[20];V _method=j::get(_receiver2983,_method2984);j::Args _params2985=j::Args{V(0.0),_v_802_i};return j::call(_method,_params2985,_receiver2983);})();V _method2981=this->_literals[133];V _method=j::get(_receiver2980,_method2981);j::Args _params2982=j::Args{j::function([=](const j::Args &_args_fn803,const V &_receiver_fn803,const V &_self_fn803) mutable ->V{
V _v_804_a;
V _v_805_v;
_v_804_a=_args_fn803[0];
_v_805_v=_args_fn803[1];
return ([&]()->V{V _lhs2978=_v_804_a;V _rhs2979=_v_805_v;return j::binary("+",_lhs2978,_rhs2979);})();
return V{};
},2),V(0.0)};return j::call(_method,_params2982,_receiver2980);})();
return V{};
},2)};return j::call(_method,_params2988,_receiver2986);})();
_v_806_total.get()=([&]()->V{V _lhs2989=j::get(_v_799_start.get(),([&]()->V{V _lhs2991=_v_788_n.get();V _rhs2992=V(1.0);return V(j::number(_lhs2991)-j::number(_rhs2992));})());V _rhs2990=j::get(_v_789_span.get(),([&]()->V{V _lhs2993=_v_788_n.get();V _rhs2994=V(1.0);return V(j::number(_lhs2993)-j::number(_rhs2994));})());return j::binary("+",_lhs2989,_rhs2990);})();
_v_807_cols.get()=([&]()->V{V _receiver2999=j::builtin("Math");V _method3000=this->_literals[44];V _method=j::get(_receiver2999,_method3000);j::Args _params3001=([&](){j::Args _args2995;for(const auto &_v:j::elements(([&]()->V{V _receiver2996=_v_787_all.get();V _method2997=this->_literals[5];V _method=j::get(_receiver2996,_method2997);j::Args _params2998=j::Args{j::function([=](const j::Args &_args_fn808,const V &_receiver_fn808,const V &_self_fn808) mutable ->V{
V _v_809_p;
_v_809_p=_args_fn808[0];
return j::get(_v_809_p,this->_literals[32]);
return V{};
},1)};return j::call(_method,_params2998,_receiver2996);})()))_args2995.push_back(_v);return _args2995;})();return j::call(_method,_params3001,_receiver2999);})();
_v_810_rows.get()=([&]()->V{V _receiver3006=j::builtin("Math");V _method3007=this->_literals[44];V _method=j::get(_receiver3006,_method3007);j::Args _params3008=([&](){j::Args _args3002;for(const auto &_v:j::elements(([&]()->V{V _receiver3003=_v_787_all.get();V _method3004=this->_literals[5];V _method=j::get(_receiver3003,_method3004);j::Args _params3005=j::Args{j::function([=](const j::Args &_args_fn811,const V &_receiver_fn811,const V &_self_fn811) mutable ->V{
V _v_812_p;
_v_812_p=_args_fn811[0];
return j::get(_v_812_p,this->_literals[33]);
return V{};
},1)};return j::call(_method,_params3005,_receiver3003);})()))_args3002.push_back(_v);return _args3002;})();return j::call(_method,_params3008,_receiver3006);})();
_v_813_cell.get()=([&]()->V{V _logical3009=j::get(j::get(j::get(_v_787_all.get(),V(0.0)),this->_literals[29]),this->_literals[34]);return j::nullish(_logical3009)?V(2.0):_logical3009;})();
_v_814_into.get()=j::function([=](const j::Args &_args_fn815,const V &_receiver_fn815,const V &_self_fn815) mutable ->V{
V _v_816_i;
_v_816_i=_args_fn815[0];
return (j::truth(([&]()->V{V _logical3010=([&]()->V{V _lhs3011=_v_816_i;V _rhs3012=V(0.0);return j::binary(">",_lhs3011,_rhs3012);})();return !j::truth(_logical3010)?_v_785_loop.get():_logical3010;})())?_v_798_ov.get():V(0.0));
return V{};
},1);
_v_817_held=(j::truth(_v_785_loop.get())?V(0.0):([&]()->V{V _lhs3013=_v_788_n.get();V _rhs3014=V(1.0);return V(j::number(_lhs3013)-j::number(_rhs3014));})());
_v_818_ph=j::get(_v_787_all.get(),_v_817_held);
_v_819_own=(j::truth(([&]()->V{V _logical3015=([&]()->V{V _lhs3016=j::get(j::get(_v_818_ph,this->_literals[29]),this->_literals[52]);V _rhs3017=j::builtin("undefined");return V(!j::equal(_lhs3016,_rhs3017,true));})();return j::truth(_logical3015)?j::get(j::get(_v_818_ph,this->_literals[29]),this->_literals[49]):_logical3015;})())?([&]()->V{V _lhs3018=([&]()->V{V _lhs3020=j::get(j::get(_v_818_ph,this->_literals[29]),this->_literals[52]);V _rhs3021=j::get(_v_818_ph,this->_literals[23]);return V(j::number(_lhs3020)-j::number(_rhs3021));})();V _rhs3019=j::get(_v_818_ph,this->_literals[24]);return V(j::number(_lhs3018)/j::number(_rhs3019));})():V(0.0));
_v_820_still=([&]()->V{V _lhs3022=j::get(_v_799_start.get(),_v_817_held);V _rhs3023=([&]()->V{V _receiver3038=j::builtin("Math");V _method3039=this->_literals[44];V _method=j::get(_receiver3038,_method3039);j::Args _params3040=j::Args{V(0.0),([&]()->V{V _receiver3033=j::builtin("Math");V _method3034=this->_literals[43];V _method=j::get(_receiver3033,_method3034);j::Args _params3035=j::Args{([&]()->V{V _lhs3024=_v_819_own;V _rhs3025=([&]()->V{V _callee3026=_v_814_into.get();return j::call(_callee3026,j::Args{_v_817_held});})();return V(j::number(_lhs3024)-j::number(_rhs3025));})(),(j::truth(_v_785_loop.get())?([&]()->V{V _lhs3027=([&]()->V{V _lhs3029=j::get(_v_789_span.get(),_v_817_held);V _rhs3030=_v_798_ov.get();return V(j::number(_lhs3029)-j::number(_rhs3030));})();V _rhs3028=V(0.01);return V(j::number(_lhs3027)-j::number(_rhs3028));})():j::builtin("Infinity"))};return j::call(_method,_params3035,_receiver3033);})()};return j::call(_method,_params3040,_receiver3038);})();return j::binary("+",_lhs3022,_rhs3023);})();
_v_821_alone=([&]()->V{V _logical3041=([&]()->V{V _lhs3042=_v_788_n.get();V _rhs3043=V(1.0);return V(j::equal(_lhs3042,_rhs3043,true));})();return j::truth(_logical3041)?([&]()->V{V _logical3044=j::unary("!",_v_798_ov.get());return !j::truth(_logical3044)?j::unary("!",_v_785_loop.get()):_logical3044;})():_logical3041;})();
_v_822_m.get()=([&]()->V{V _callee3048=this->_v_124_merge.get();return j::call(_callee3048,j::Args{_v_787_all.get(),([&]()->V{j::Args _array3045;return j::array(std::move(_array3045));})(),([&]()->V{V _lhs3046=_v_783_transition;V _rhs3047=this->_literals[170];return V(j::equal(_lhs3046,_rhs3047,true));})()});})();
_v_823_th.get()=(j::truth(([&]()->V{V _lhs3049=_v_783_transition;V _rhs3050=this->_literals[167];return V(j::equal(_lhs3049,_rhs3050,true));})())?([&]()->V{V _callee3051=this->_v_727_thresholds.get();return j::call(_callee3051,j::Args{_v_807_cols.get(),_v_810_rows.get(),_v_813_cell.get(),_v_786_seed});})():V::null());
_v_824_fading.get()=(j::truth(([&]()->V{V _lhs3052=_v_783_transition;V _rhs3053=this->_literals[171];return V(j::equal(_lhs3052,_rhs3053,true));})())?([&]()->V{V _callee3054=this->_v_749_fadeTable.get();return j::call(_callee3054,j::Args{});})():V::null());
_v_825_fps=([&]()->V{V _receiver3058=j::builtin("Math");V _method3059=this->_literals[44];V _method=j::get(_receiver3058,_method3059);j::Args _params3060=j::Args{([&]()->V{V _callee3055=this->_v_214_fpsOf.get();return j::call(_callee3055,j::Args{_v_787_all.get()});})(),(j::truth(_v_821_alone)?V(0.0):V(24.0))};return j::call(_method,_params3060,_receiver3058);})();
_v_826_whole=([&]()->V{V _obj3061=j::object();j::put(_obj3061,this->_literals[9],([&]()->V{V _logical3062=j::get(_v_781_given,this->_literals[9]);return j::nullish(_logical3062)?([&]()->V{V _receiver3063=([&]()->V{V _receiver3066=_v_787_all.get();V _method3067=this->_literals[5];V _method=j::get(_receiver3066,_method3067);j::Args _params3068=j::Args{j::function([=](const j::Args &_args_fn827,const V &_receiver_fn827,const V &_self_fn827) mutable ->V{
V _v_828_p;
_v_828_p=_args_fn827[0];
return j::get(j::get(_v_828_p,this->_literals[29]),this->_literals[9]);
return V{};
},1)};return j::call(_method,_params3068,_receiver3066);})();V _method3064=this->_literals[88];V _method=j::get(_receiver3063,_method3064);j::Args _params3065=j::Args{this->_literals[172]};return j::call(_method,_params3065,_receiver3063);})():_logical3062;})());j::put(_obj3061,this->_literals[10],j::get(_v_781_given,this->_literals[10]));j::put(_obj3061,this->_literals[51],([&]()->V{V _callee3069=this->_v_219_categoryOf.get();return j::call(_callee3069,j::Args{_v_787_all.get()});})());j::put(_obj3061,this->_literals[32],_v_807_cols.get());j::put(_obj3061,this->_literals[33],_v_810_rows.get());j::put(_obj3061,this->_literals[34],_v_813_cell.get());j::put(_obj3061,this->_literals[49],_v_825_fps);j::put(_obj3061,this->_literals[53],([&]()->V{V _callee3070=this->_v_209_groundOf.get();return j::call(_callee3070,j::Args{_v_787_all.get()});})());j::put(_obj3061,this->_literals[50],(j::truth(([&]()->V{V _logical3071=_v_785_loop.get();return j::truth(_logical3071)?_v_825_fps:_logical3071;})())?_v_806_total.get():j::builtin("undefined")));j::put(_obj3061,this->_literals[52],([&]()->V{V _receiver3074=j::builtin("Math");V _method3075=this->_literals[44];V _method=j::get(_receiver3074,_method3075);j::Args _params3076=j::Args{V(0.0),_v_820_still};return j::call(_method,_params3076,_receiver3074);})());j::put(_obj3061,this->_literals[54],([&]()->V{V _receiver3077=_v_787_all.get();V _method3078=this->_literals[41];V _method=j::get(_receiver3077,_method3078);j::Args _params3079=j::Args{j::function([=](const j::Args &_args_fn829,const V &_receiver_fn829,const V &_self_fn829) mutable ->V{
V _v_830_p;
_v_830_p=_args_fn829[0];
return j::get(j::get(_v_830_p,this->_literals[29]),this->_literals[54]);
return V{};
},1)};return j::call(_method,_params3079,_receiver3077);})());return _obj3061;})();
return ([&]()->V{V _callee3309=this->_v_230_build.get();return j::call(_callee3309,j::Args{_v_779_fn,_v_826_whole,_v_822_m.get(),j::function([=](const j::Args &_args_fn831,const V &_receiver_fn831,const V &_self_fn831) mutable ->V{
{
j::Cell _v_832_play;
j::Cell _v_836_a;
j::Cell _v_837_b;
j::Cell _v_838_show;
_v_832_play.get()=([&]()->V{V _receiver3081=_v_787_all.get();V _method3082=this->_literals[5];V _method=j::get(_receiver3081,_method3082);j::Args _params3083=j::Args{j::function([=](const j::Args &_args_fn833,const V &_receiver_fn833,const V &_self_fn833) mutable ->V{
V _v_834_p;
V _v_835_i;
_v_834_p=_args_fn833[0];
_v_835_i=_args_fn833[1];
return ([&]()->V{V _callee3080=this->_v_245_player.get();return j::call(_callee3080,j::Args{_v_834_p,j::get(j::get(_v_822_m.get(),this->_literals[46]),_v_835_i)});})();
return V{};
},2)};return j::call(_method,_params3083,_receiver3081);})();
_v_836_a.get()=([&]()->V{V _callee3084=this->_v_5_Surface.get();return j::construct(_callee3084,j::Args{_v_807_cols.get(),_v_810_rows.get()});})();
_v_837_b.get()=([&]()->V{V _callee3085=this->_v_5_Surface.get();return j::construct(_callee3085,j::Args{_v_807_cols.get(),_v_810_rows.get()});})();
_v_838_show.get()=j::function([=](const j::Args &_args_fn839,const V &_receiver_fn839,const V &_self_fn839) mutable ->V{
V _v_840_i;
V _v_841_t;
V _v_842_into;
V _v_843_ctx;
_v_840_i=_args_fn839[0];
_v_841_t=_args_fn839[1];
_v_842_into=_args_fn839[2];
_v_843_ctx=_args_fn839[3];
{
V _v_844_g;
_v_844_g=([&]()->V{V _receiver3086=_v_832_play.get();V _method3087=_v_840_i;V _method=j::get(_receiver3086,_method3087);j::Args _params3088=j::Args{_v_841_t,j::get(_v_843_ctx,this->_literals[58]),j::get(_v_843_ctx,this->_literals[59])};return j::call(_method,_params3088,_receiver3086);})();
(void)(([&]()->V{V _receiver3107=_v_842_into;V _method3108=this->_literals[90];V _method=j::get(_receiver3107,_method3108);j::Args _params3109=j::Args{_v_844_g,([&]()->V{V _number3093=([&]()->V{V _lhs3094=([&]()->V{V _lhs3096=_v_807_cols.get();V _rhs3097=j::get(_v_844_g,this->_literals[32]);return V(j::number(_lhs3096)-j::number(_rhs3097));})();V _rhs3095=V(2.0);return V(j::number(_lhs3094)/j::number(_rhs3095));})();return V(std::floor(j::number(_number3093)));})(),([&]()->V{V _number3102=([&]()->V{V _lhs3103=([&]()->V{V _lhs3105=_v_810_rows.get();V _rhs3106=j::get(_v_844_g,this->_literals[33]);return V(j::number(_lhs3105)-j::number(_rhs3106));})();V _rhs3104=V(2.0);return V(j::number(_lhs3103)/j::number(_rhs3104));})();return V(std::floor(j::number(_number3102)));})()};return j::call(_method,_params3109,_receiver3107);})());

}

return V{};
},4);
return j::function([=](const j::Args &_args_fn845,const V &_receiver_fn845,const V &_self_fn845) mutable ->V{
V _v_846_t;
V _v_847_s;
V _v_848_ctx;
_v_846_t=_args_fn845[0];
_v_847_s=_args_fn845[1];
_v_848_ctx=_args_fn845[2];
{
V _v_849_tt;
V _v_850_i;
V _v_851_local;
V _v_852_leave;
V _v_853_k;
V _v_854_ac;
V _v_855_bc;
V _v_856_acol;
V _v_857_bcol;
_v_849_tt=(j::truth(_v_785_loop.get())?([&]()->V{V _lhs3110=_v_846_t;V _rhs3111=([&]()->V{V _lhs3112=_v_806_total.get();V _rhs3113=([&]()->V{V _number3116=([&]()->V{V _lhs3117=_v_846_t;V _rhs3118=_v_806_total.get();return V(j::number(_lhs3117)/j::number(_rhs3118));})();return V(std::floor(j::number(_number3116)));})();return V(j::number(_lhs3112)*j::number(_rhs3113));})();return V(j::number(_lhs3110)-j::number(_rhs3111));})():_v_846_t);
_v_850_i=V(0.0);
while(j::truth(([&]()->V{V _logical3119=([&]()->V{V _lhs3120=_v_850_i;V _rhs3121=([&]()->V{V _lhs3122=_v_788_n.get();V _rhs3123=V(1.0);return V(j::number(_lhs3122)-j::number(_rhs3123));})();return j::binary("<",_lhs3120,_rhs3121);})();return j::truth(_logical3119)?([&]()->V{V _lhs3124=_v_849_tt;V _rhs3125=j::get(_v_799_start.get(),([&]()->V{V _lhs3126=_v_850_i;V _rhs3127=V(1.0);return j::binary("+",_lhs3126,_rhs3127);})());return j::binary(">=",_lhs3124,_rhs3125);})():_logical3119;})())){(void)(j::increment(_v_850_i,1,false));
}
_v_851_local=([&]()->V{V _lhs3128=([&]()->V{V _lhs3130=_v_849_tt;V _rhs3131=j::get(_v_799_start.get(),_v_850_i);return V(j::number(_lhs3130)-j::number(_rhs3131));})();V _rhs3129=([&]()->V{V _callee3132=_v_814_into.get();return j::call(_callee3132,j::Args{_v_850_i});})();return j::binary("+",_lhs3128,_rhs3129);})();
_v_852_leave=(j::truth(([&]()->V{V _logical3133=([&]()->V{V _lhs3134=_v_798_ov.get();V _rhs3135=V(0.0);return j::binary(">",_lhs3134,_rhs3135);})();return j::truth(_logical3133)?([&]()->V{V _logical3136=_v_785_loop.get();return !j::truth(_logical3136)?([&]()->V{V _lhs3137=_v_850_i;V _rhs3138=([&]()->V{V _lhs3139=_v_788_n.get();V _rhs3140=V(1.0);return V(j::number(_lhs3139)-j::number(_rhs3140));})();return j::binary("<",_lhs3137,_rhs3138);})():_logical3136;})():_logical3133;})())?([&]()->V{V _lhs3141=([&]()->V{V _lhs3143=j::get(_v_799_start.get(),_v_850_i);V _rhs3144=j::get(_v_789_span.get(),_v_850_i);return j::binary("+",_lhs3143,_rhs3144);})();V _rhs3142=_v_798_ov.get();return V(j::number(_lhs3141)-j::number(_rhs3142));})():j::builtin("Infinity"));
if(j::truth(([&]()->V{V _lhs3145=_v_849_tt;V _rhs3146=_v_852_leave;return j::binary("<",_lhs3145,_rhs3146);})())){return ([&]()->V{V _callee3147=_v_838_show.get();return j::call(_callee3147,j::Args{_v_850_i,_v_851_local,_v_847_s,_v_848_ctx});})();
}
(void)(([&]()->V{V _receiver3148=_v_836_a.get();V _method3149=this->_literals[173];V _method=j::get(_receiver3148,_method3149);j::Args _params3150=j::Args{};return j::call(_method,_params3150,_receiver3148);})());
(void)(([&]()->V{V _receiver3151=_v_837_b.get();V _method3152=this->_literals[173];V _method=j::get(_receiver3151,_method3152);j::Args _params3153=j::Args{};return j::call(_method,_params3153,_receiver3151);})());
(void)(([&]()->V{V _callee3154=_v_838_show.get();return j::call(_callee3154,j::Args{_v_850_i,_v_851_local,_v_836_a.get(),_v_848_ctx});})());
(void)(([&]()->V{V _callee3161=_v_838_show.get();return j::call(_callee3161,j::Args{([&]()->V{V _lhs3155=([&]()->V{V _lhs3157=_v_850_i;V _rhs3158=V(1.0);return j::binary("+",_lhs3157,_rhs3158);})();V _rhs3156=_v_788_n.get();return V(std::fmod(j::number(_lhs3155),j::number(_rhs3156)));})(),([&]()->V{V _lhs3159=_v_849_tt;V _rhs3160=_v_852_leave;return V(j::number(_lhs3159)-j::number(_rhs3160));})(),_v_837_b.get(),_v_848_ctx});})());
_v_853_k=([&]()->V{V _lhs3162=([&]()->V{V _lhs3164=_v_849_tt;V _rhs3165=_v_852_leave;return V(j::number(_lhs3164)-j::number(_rhs3165));})();V _rhs3163=_v_798_ov.get();return V(j::number(_lhs3162)/j::number(_rhs3163));})();
_v_854_ac=j::get(_v_836_a.get(),this->_literals[56]);
_v_855_bc=j::get(_v_837_b.get(),this->_literals[56]);
_v_856_acol=j::get(_v_836_a.get(),this->_literals[57]);
_v_857_bcol=j::get(_v_837_b.get(),this->_literals[57]);
if(j::truth(_v_823_th.get())){
V _v_858_front;
_v_858_front=([&]()->V{V _lhs3166=j::unary("-",this->_v_772_EDGE.get());V _rhs3167=([&]()->V{V _lhs3168=_v_853_k;V _rhs3169=([&]()->V{V _lhs3170=V(1.0);V _rhs3171=([&]()->V{V _lhs3172=V(2.0);V _rhs3173=this->_v_772_EDGE.get();return V(j::number(_lhs3172)*j::number(_rhs3173));})();return j::binary("+",_lhs3170,_rhs3171);})();return V(j::number(_lhs3168)*j::number(_rhs3169));})();return j::binary("+",_lhs3166,_rhs3167);})();
{V _v_859_c;
_v_859_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs3174=_v_859_c;V _rhs3175=j::get(_v_823_th.get(),this->_literals[11]);return j::binary("<",_lhs3174,_rhs3175);})());(void)(j::increment(_v_859_c,1,false))){
V _v_860_d;
_v_860_d=([&]()->V{V _lhs3176=j::get(_v_823_th.get(),_v_859_c);V _rhs3177=_v_858_front;return V(j::number(_lhs3176)-j::number(_rhs3177));})();
if(j::truth(([&]()->V{V _lhs3178=_v_860_d;V _rhs3179=j::unary("-",this->_v_772_EDGE.get());return j::binary("<",_lhs3178,_rhs3179);})())){(void)(([&]()->V{V _receiver3180=_v_847_s;V _method3181=this->_literals[82];V _method=j::get(_receiver3180,_method3181);j::Args _params3182=j::Args{_v_859_c,j::get(_v_855_bc,_v_859_c),j::get(_v_857_bcol,_v_859_c)};return j::call(_method,_params3182,_receiver3180);})());
}else {if(j::truth(([&]()->V{V _lhs3183=_v_860_d;V _rhs3184=this->_v_772_EDGE.get();return j::binary(">=",_lhs3183,_rhs3184);})())){(void)(([&]()->V{V _receiver3185=_v_847_s;V _method3186=this->_literals[82];V _method=j::get(_receiver3185,_method3186);j::Args _params3187=j::Args{_v_859_c,j::get(_v_854_ac,_v_859_c),j::get(_v_856_acol,_v_859_c)};return j::call(_method,_params3187,_receiver3185);})());
}else {if(j::truth(([&]()->V{V _logical3188=([&]()->V{V _lhs3189=j::get(_v_854_ac,_v_859_c);V _rhs3190=this->_v_1_EMPTY.get();return V(j::equal(_lhs3189,_rhs3190,true));})();return j::truth(_logical3188)?([&]()->V{V _lhs3191=j::get(_v_855_bc,_v_859_c);V _rhs3192=this->_v_1_EMPTY.get();return V(j::equal(_lhs3191,_rhs3192,true));})():_logical3188;})())){(void)(([&]()->V{V _receiver3193=_v_847_s;V _method3194=this->_literals[82];V _method=j::get(_receiver3193,_method3194);j::Args _params3195=j::Args{_v_859_c,this->_v_1_EMPTY.get()};return j::call(_method,_params3195,_receiver3193);})());
}else {if(j::truth(([&]()->V{V _lhs3196=_v_860_d;V _rhs3197=V(0.0);return j::binary("<",_lhs3196,_rhs3197);})())){(void)(([&]()->V{V _receiver3203=_v_847_s;V _method3204=this->_literals[82];V _method=j::get(_receiver3203,_method3204);j::Args _params3205=j::Args{_v_859_c,([&]()->V{V _receiver3198=this->_v_773_EDGES.get();V _method3199=this->_literals[89];V _method=j::get(_receiver3198,_method3199);j::Args _params3200=j::Args{V(1.0)};return j::call(_method,_params3200,_receiver3198);})(),(j::truth(([&]()->V{V _lhs3201=j::get(_v_855_bc,_v_859_c);V _rhs3202=this->_v_1_EMPTY.get();return V(!j::equal(_lhs3201,_rhs3202,true));})())?j::get(_v_857_bcol,_v_859_c):j::get(_v_856_acol,_v_859_c))};return j::call(_method,_params3205,_receiver3203);})());
}else {(void)(([&]()->V{V _receiver3211=_v_847_s;V _method3212=this->_literals[82];V _method=j::get(_receiver3211,_method3212);j::Args _params3213=j::Args{_v_859_c,([&]()->V{V _receiver3206=this->_v_773_EDGES.get();V _method3207=this->_literals[89];V _method=j::get(_receiver3206,_method3207);j::Args _params3208=j::Args{V(0.0)};return j::call(_method,_params3208,_receiver3206);})(),(j::truth(([&]()->V{V _lhs3209=j::get(_v_854_ac,_v_859_c);V _rhs3210=this->_v_1_EMPTY.get();return V(!j::equal(_lhs3209,_rhs3210,true));})())?j::get(_v_856_acol,_v_859_c):j::get(_v_857_bcol,_v_859_c))};return j::call(_method,_params3213,_receiver3211);})());
}
}
}
}

}
}

}
else {if(j::truth(_v_824_fading.get())){
V _v_861_g;
V _v_862_gc;
V _v_863_f;
V _pattern3218=(j::truth(([&]()->V{V _lhs3214=_v_853_k;V _rhs3215=V(0.5);return j::binary("<",_lhs3214,_rhs3215);})())?([&]()->V{j::Args _array3216;_array3216.push_back(_v_854_ac);_array3216.push_back(_v_856_acol);return j::array(std::move(_array3216));})():([&]()->V{j::Args _array3217;_array3217.push_back(_v_855_bc);_array3217.push_back(_v_857_bcol);return j::array(std::move(_array3217));})());
_v_861_g=j::get(_pattern3218,V(0));
_v_862_gc=j::get(_pattern3218,V(1));
_v_863_f=(j::truth(([&]()->V{V _lhs3219=_v_853_k;V _rhs3220=V(0.5);return j::binary("<",_lhs3219,_rhs3220);})())?([&]()->V{V _lhs3221=V(2.0);V _rhs3222=_v_853_k;return V(j::number(_lhs3221)*j::number(_rhs3222));})():([&]()->V{V _lhs3223=V(2.0);V _rhs3224=([&]()->V{V _lhs3225=V(2.0);V _rhs3226=_v_853_k;return V(j::number(_lhs3225)*j::number(_rhs3226));})();return V(j::number(_lhs3223)-j::number(_rhs3224));})());
{V _v_864_y;
V _v_865_c;
_v_864_y=V(0.0);
_v_865_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs3227=_v_864_y;V _rhs3228=_v_810_rows.get();return j::binary("<",_lhs3227,_rhs3228);})());(void)(j::increment(_v_864_y,1,false))){{V _v_866_x;
_v_866_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs3229=_v_866_x;V _rhs3230=_v_807_cols.get();return j::binary("<",_lhs3229,_rhs3230);})());(void)((j::increment(_v_866_x,1,false),j::increment(_v_865_c,1,false)))){
V _v_867_ch;
V _v_868_level;
V _v_869_step;
_v_867_ch=j::get(_v_861_g,_v_865_c);
if(j::truth(([&]()->V{V _lhs3231=_v_867_ch;V _rhs3232=this->_v_1_EMPTY.get();return V(j::equal(_lhs3231,_rhs3232,true));})())){continue;
}
_v_868_level=j::get(j::get(_v_824_fading.get(),this->_literals[158]),_v_867_ch);
_v_869_step=([&]()->V{V _receiver3255=j::builtin("Math");V _method3256=this->_literals[44];V _method=j::get(_receiver3255,_method3256);j::Args _params3257=j::Args{V(0.0),([&]()->V{V _receiver3250=j::builtin("Math");V _method3251=this->_literals[43];V _method=j::get(_receiver3250,_method3251);j::Args _params3252=j::Args{_v_868_level,([&]()->V{V _number3240=([&]()->V{V _lhs3241=([&]()->V{V _lhs3243=_v_868_level;V _rhs3244=([&]()->V{V _lhs3245=V(1.0);V _rhs3246=_v_863_f;return V(j::number(_lhs3245)-j::number(_rhs3246));})();return V(j::number(_lhs3243)*j::number(_rhs3244));})();V _rhs3242=([&]()->V{V _callee3247=this->_v_8_bayer.get();return j::call(_callee3247,j::Args{_v_866_x,_v_864_y});})();return j::binary("+",_lhs3241,_rhs3242);})();return V(std::floor(j::number(_number3240)+.5));})()};return j::call(_method,_params3252,_receiver3250);})()};return j::call(_method,_params3257,_receiver3255);})();
(void)(([&]()->V{V _receiver3265=_v_847_s;V _method3266=this->_literals[82];V _method=j::get(_receiver3265,_method3266);j::Args _params3267=j::Args{_v_865_c,(j::truth(([&]()->V{V _lhs3258=_v_869_step;V _rhs3259=_v_868_level;return j::binary(">=",_lhs3258,_rhs3259);})())?_v_867_ch:(j::truth(([&]()->V{V _lhs3260=_v_869_step;V _rhs3261=V(0.0);return j::binary("<=",_lhs3260,_rhs3261);})())?this->_v_1_EMPTY.get():([&]()->V{V _receiver3262=j::get(j::get(_v_824_fading.get(),this->_literals[159]),j::get(j::get(_v_824_fading.get(),this->_literals[157]),_v_867_ch));V _method3263=this->_literals[89];V _method=j::get(_receiver3262,_method3263);j::Args _params3264=j::Args{_v_869_step};return j::call(_method,_params3264,_receiver3262);})())),j::get(_v_862_gc,_v_865_c)};return j::call(_method,_params3267,_receiver3265);})());

}
}
}}

}
else {
V _v_870_slant;
V _v_871_front;
_v_870_slant=([&]()->V{V _lhs3268=V(0.25);V _rhs3269=_v_813_cell.get();return V(j::number(_lhs3268)*j::number(_rhs3269));})();
_v_871_front=([&]()->V{V _lhs3270=([&]()->V{V _lhs3272=_v_853_k;V _rhs3273=([&]()->V{V _lhs3274=([&]()->V{V _lhs3276=_v_807_cols.get();V _rhs3277=([&]()->V{V _lhs3278=([&]()->V{V _lhs3280=_v_810_rows.get();V _rhs3281=V(1.0);return V(j::number(_lhs3280)-j::number(_rhs3281));})();V _rhs3279=_v_870_slant;return V(j::number(_lhs3278)*j::number(_rhs3279));})();return j::binary("+",_lhs3276,_rhs3277);})();V _rhs3275=j::get(this->_v_774_BAND.get(),this->_literals[11]);return j::binary("+",_lhs3274,_rhs3275);})();return V(j::number(_lhs3272)*j::number(_rhs3273));})();V _rhs3271=j::get(this->_v_774_BAND.get(),this->_literals[11]);return V(j::number(_lhs3270)-j::number(_rhs3271));})();
{V _v_872_y;
V _v_873_c;
_v_872_y=V(0.0);
_v_873_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs3282=_v_872_y;V _rhs3283=_v_810_rows.get();return j::binary("<",_lhs3282,_rhs3283);})());(void)(j::increment(_v_872_y,1,false))){{V _v_874_x;
_v_874_x=V(0.0);
for(;j::truth(([&]()->V{V _lhs3284=_v_874_x;V _rhs3285=_v_807_cols.get();return j::binary("<",_lhs3284,_rhs3285);})());(void)((j::increment(_v_874_x,1,false),j::increment(_v_873_c,1,false)))){
V _v_875_u;
_v_875_u=([&]()->V{V _lhs3286=([&]()->V{V _lhs3288=_v_874_x;V _rhs3289=([&]()->V{V _lhs3290=_v_872_y;V _rhs3291=_v_870_slant;return V(j::number(_lhs3290)*j::number(_rhs3291));})();return j::binary("+",_lhs3288,_rhs3289);})();V _rhs3287=_v_871_front;return V(j::number(_lhs3286)-j::number(_rhs3287));})();
if(j::truth(([&]()->V{V _lhs3292=_v_875_u;V _rhs3293=V(0.0);return j::binary("<",_lhs3292,_rhs3293);})())){(void)(([&]()->V{V _receiver3294=_v_847_s;V _method3295=this->_literals[82];V _method=j::get(_receiver3294,_method3295);j::Args _params3296=j::Args{_v_873_c,j::get(_v_855_bc,_v_873_c),j::get(_v_857_bcol,_v_873_c)};return j::call(_method,_params3296,_receiver3294);})());
}else {if(j::truth(([&]()->V{V _lhs3297=_v_875_u;V _rhs3298=j::get(this->_v_774_BAND.get(),this->_literals[11]);return j::binary("<",_lhs3297,_rhs3298);})())){(void)(([&]()->V{V _receiver3303=_v_847_s;V _method3304=this->_literals[82];V _method=j::get(_receiver3303,_method3304);j::Args _params3305=j::Args{_v_873_c,([&]()->V{V _receiver3300=this->_v_774_BAND.get();V _method3301=this->_literals[89];V _method=j::get(_receiver3300,_method3301);j::Args _params3302=j::Args{([&]()->V{V _number3299=_v_875_u;return V(std::floor(j::number(_number3299)));})()};return j::call(_method,_params3302,_receiver3300);})()};return j::call(_method,_params3305,_receiver3303);})());
}else {(void)(([&]()->V{V _receiver3306=_v_847_s;V _method3307=this->_literals[82];V _method=j::get(_receiver3306,_method3307);j::Args _params3308=j::Args{_v_873_c,j::get(_v_854_ac,_v_873_c),j::get(_v_856_acol,_v_873_c)};return j::call(_method,_params3308,_receiver3306);})());
}
}

}
}
}}

}

}

}

return V{};
},3);

}

return V{};
},0)});})();

}

return V{};
},1);
this->_v_876_retime.get()=j::function([=](const j::Args &_args_fn877,const V &_receiver_fn877,const V &_self_fn877) mutable ->V{
V _v_878_fn;
j::Cell _v_879_p;
j::Cell _v_880_time;
V _v_881_timing;
V _v_882_motion;
_v_878_fn=_args_fn877[0];
_v_879_p.get()=_args_fn877[1];
_v_880_time.get()=_args_fn877[2];
_v_881_timing=_args_fn877[3];
_v_882_motion=_args_fn877[4];
{
V _v_883_given;
V _v_895__loop;
V _v_896__still;
V _v_897_rest;
V _v_898_options;
j::Cell _v_899_meta;
V _v_900_retimed;
_v_883_given=([&]()->V{V _receiver3319=j::builtin("Object");V _method3320=this->_literals[174];V _method=j::get(_receiver3319,_method3320);j::Args _params3321=j::Args{([&]()->V{V _receiver3313=([&]()->V{V _receiver3316=j::builtin("Object");V _method3317=this->_literals[8];V _method=j::get(_receiver3316,_method3317);j::Args _params3318=j::Args{_v_881_timing};return j::call(_method,_params3318,_receiver3316);})();V _method3314=this->_literals[45];V _method=j::get(_receiver3313,_method3314);j::Args _params3315=j::Args{j::function([=](const j::Args &_args_fn884,const V &_receiver_fn884,const V &_self_fn884) mutable ->V{
V _v_885_v;
V _pattern3310=_args_fn884[0];
_v_885_v=j::get(_pattern3310,V(1));
return ([&]()->V{V _lhs3311=_v_885_v;V _rhs3312=j::builtin("undefined");return V(!j::equal(_lhs3311,_rhs3312,true));})();
return V{};
},1)};return j::call(_method,_params3315,_receiver3313);})()};return j::call(_method,_params3321,_receiver3319);})();
if(j::truth(j::get(_v_879_p.get(),this->_literals[30]))){
j::Cell _v_886_m;
V _v_887_painted;
_v_886_m.get()=([&]()->V{V _callee3323=this->_v_124_merge.get();return j::call(_callee3323,j::Args{([&]()->V{j::Args _array3322;_array3322.push_back(_v_879_p.get());return j::array(std::move(_array3322));})()});})();
_v_887_painted=([&]()->V{V _callee3334=this->_v_230_build.get();return j::call(_callee3334,j::Args{_v_878_fn,([&]()->V{V _obj3324=j::object();V _spread3325=([&]()->V{V _callee3326=this->_v_623_single.get();return j::call(_callee3326,j::Args{_v_879_p.get()});})();for(const auto &_key:j::keys(_spread3325))j::put(_obj3324,_key,j::get(_spread3325,_key));j::put(_obj3324,this->_literals[50],j::builtin("undefined"));j::put(_obj3324,this->_literals[52],j::builtin("undefined"));V _spread3327=_v_883_given;for(const auto &_key:j::keys(_spread3327))j::put(_obj3324,_key,j::get(_spread3327,_key));return _obj3324;})(),_v_886_m.get(),j::function([=](const j::Args &_args_fn888,const V &_receiver_fn888,const V &_self_fn888) mutable ->V{
V _v_889_options;
_v_889_options=_args_fn888[0];
{
j::Cell _v_890_play;
_v_890_play.get()=([&]()->V{V _callee3328=this->_v_245_player.get();return j::call(_callee3328,j::Args{_v_879_p.get(),j::get(j::get(_v_886_m.get(),this->_literals[46]),V(0.0)),_v_889_options});})();
return j::function([=](const j::Args &_args_fn891,const V &_receiver_fn891,const V &_self_fn891) mutable ->V{
V _v_892_t;
V _v_893_s;
V _v_894_ctx;
_v_892_t=_args_fn891[0];
_v_893_s=_args_fn891[1];
_v_894_ctx=_args_fn891[2];
return ([&]()->V{V _receiver3331=_v_893_s;V _method3332=this->_literals[90];V _method=j::get(_receiver3331,_method3332);j::Args _params3333=j::Args{([&]()->V{V _callee3330=_v_890_play.get();return j::call(_callee3330,j::Args{([&]()->V{V _callee3329=_v_880_time.get();return j::call(_callee3329,j::Args{_v_892_t});})(),j::get(_v_894_ctx,this->_literals[58]),j::get(_v_894_ctx,this->_literals[59])});})(),V(0.0),V(0.0)};return j::call(_method,_params3333,_receiver3331);})();
return V{};
},3);

}

return V{};
},1)});})();
return ([&]()->V{V _callee3335=this->_v_633_withMotion.get();return j::call(_callee3335,j::Args{_v_887_painted,_v_882_motion});})();

}

V _pattern3336=j::get(_v_879_p.get(),this->_literals[29]);
_v_895__loop=j::get(_pattern3336,this->_literals[50]);
_v_896__still=j::get(_pattern3336,this->_literals[52]);
_v_897_rest=j::object_rest(_pattern3336,{j::string(this->_literals[50]),j::string(this->_literals[52])});
_v_898_options=([&]()->V{V _callee3337=this->_v_227_optionsOf.get();return j::call(_callee3337,j::Args{_v_879_p.get()});})();
_v_899_meta.get()=([&]()->V{V _callee3344=this->_v_10_checkMeta.get();return j::call(_callee3344,j::Args{([&]()->V{V _obj3338=j::object();V _spread3339=_v_897_rest;for(const auto &_key:j::keys(_spread3339))j::put(_obj3338,_key,j::get(_spread3339,_key));V _spread3340=(j::truth(_v_898_options)?([&]()->V{V _obj3341=j::object();j::put(_obj3341,this->_literals[22],_v_898_options);return _obj3341;})():([&]()->V{V _obj3342=j::object();return _obj3342;})());for(const auto &_key:j::keys(_spread3340))j::put(_obj3338,_key,j::get(_spread3340,_key));V _spread3343=_v_883_given;for(const auto &_key:j::keys(_spread3343))j::put(_obj3338,_key,j::get(_spread3343,_key));return _obj3338;})()});})();
_v_900_retimed=([&]()->V{V _callee3366=this->_v_9_chained.get();return j::call(_callee3366,j::Args{([&]()->V{V _obj3345=j::object();j::put(_obj3345,this->_literals[29],_v_899_meta.get());j::put(_obj3345,this->_literals[175],j::function([=](const j::Args &_args_fn901,const V &_receiver_fn901,const V &_self_fn901) mutable ->V{
V _v_902_o;
_v_902_o=_args_fn901[0];
{
j::Cell _v_903_frame;
_v_903_frame.get()=([&]()->V{V _receiver3349=j::get(_v_879_p.get(),this->_literals[28]);V _method3350=this->_literals[175];V _method=j::get(_receiver3349,_method3350);j::Args _params3351=j::Args{([&]()->V{V _obj3346=j::object();V _spread3347=j::get(_v_899_meta.get(),this->_literals[22]);for(const auto &_key:j::keys(_spread3347))j::put(_obj3346,_key,j::get(_spread3347,_key));V _spread3348=_v_902_o;for(const auto &_key:j::keys(_spread3348))j::put(_obj3346,_key,j::get(_spread3348,_key));return _obj3346;})()};return j::call(_method,_params3351,_receiver3349);})();
return j::function([=](const j::Args &_args_fn904,const V &_receiver_fn904,const V &_self_fn904) mutable ->V{
V _v_905_t;
V _v_906_env;
_v_905_t=_args_fn904[0];
_v_906_env=_args_fn904[1];
return ([&]()->V{V _callee3365=_v_903_frame.get();return j::call(_callee3365,j::Args{([&]()->V{V _receiver3362=j::builtin("Math");V _method3363=this->_literals[44];V _method=j::get(_receiver3362,_method3363);j::Args _params3364=j::Args{V(0.0),([&]()->V{V _lhs3352=([&]()->V{V _lhs3354=([&]()->V{V _callee3359=_v_880_time.get();return j::call(_callee3359,j::Args{(j::truth(([&]()->V{V _receiver3356=j::builtin("Number");V _method3357=this->_literals[176];V _method=j::get(_receiver3356,_method3357);j::Args _params3358=j::Args{_v_905_t};return j::call(_method,_params3358,_receiver3356);})())?_v_905_t:V(0.0))});})();V _rhs3355=j::get(_v_879_p.get(),this->_literals[24]);return V(j::number(_lhs3354)*j::number(_rhs3355));})();V _rhs3353=j::get(_v_879_p.get(),this->_literals[23]);return j::binary("+",_lhs3352,_rhs3353);})()};return j::call(_method,_params3364,_receiver3362);})(),_v_906_env});})();
return V{};
},2);

}

return V{};
},1));return _obj3345;})()});})();
return ([&]()->V{V _callee3367=this->_v_633_withMotion.get();return j::call(_callee3367,j::Args{_v_900_retimed,_v_882_motion});})();

}

return V{};
},5);
this->_v_910_speed.get()=j::function([=](const j::Args &_args_fn911,const V &_receiver_fn911,const V &_self_fn911) mutable ->V{
V _v_912_src;
j::Cell _v_913_factor;
_v_912_src=_args_fn911[0];
_v_913_factor.get()=_args_fn911[1];
{
V _v_914_p;
V _v_915_loop;
V _v_916_still;
if(j::truth(([&]()->V{V _logical3368=j::unary("!",([&]()->V{V _callee3369=this->_v_31_finite.get();return j::call(_callee3369,j::Args{_v_913_factor.get()});})());return !j::truth(_logical3368)?([&]()->V{V _lhs3370=_v_913_factor.get();V _rhs3371=V(0.0);return j::binary("<=",_lhs3370,_rhs3371);})():_logical3368;})())){(void)(([&]()->V{V _callee3374=this->_v_13_fail.get();return j::call(_callee3374,j::Args{([&]()->V{std::u16string _text3372;_text3372+=u"speed takes a number above 0, 2 for twice as fast, not ";_text3372+=j::string(([&]()->V{V _callee3373=this->_v_25_shown.get();return j::call(_callee3373,j::Args{_v_913_factor.get()});})());_text3372+=u"";return V(std::move(_text3372));})()});})());
}
_v_914_p=([&]()->V{V _callee3375=this->_v_93_prepare.get();return j::call(_callee3375,j::Args{this->_literals[24],_v_912_src});})();
_v_915_loop=([&]()->V{V _callee3376=this->_v_184_period.get();return j::call(_callee3376,j::Args{_v_914_p});})();
_v_916_still=([&]()->V{V _callee3377=this->_v_907_stillAt.get();return j::call(_callee3377,j::Args{_v_914_p});})();
return ([&]()->V{V _callee3388=this->_v_876_retime.get();return j::call(_callee3388,j::Args{this->_literals[24],_v_914_p,j::function([=](const j::Args &_args_fn917,const V &_receiver_fn917,const V &_self_fn917) mutable ->V{
V _v_918_t;
_v_918_t=_args_fn917[0];
return ([&]()->V{V _lhs3378=_v_918_t;V _rhs3379=_v_913_factor.get();return V(j::number(_lhs3378)*j::number(_rhs3379));})();
return V{};
},1),([&]()->V{V _obj3380=j::object();j::put(_obj3380,this->_literals[50],([&]()->V{V _callee3383=this->_v_200_playable.get();return j::call(_callee3383,j::Args{(j::truth(_v_915_loop)?([&]()->V{V _lhs3381=_v_915_loop;V _rhs3382=_v_913_factor.get();return V(j::number(_lhs3381)/j::number(_rhs3382));})():j::builtin("undefined"))});})());j::put(_obj3380,this->_literals[52],([&]()->V{V _logical3384=_v_916_still;return j::truth(_logical3384)?([&]()->V{V _lhs3385=_v_916_still;V _rhs3386=_v_913_factor.get();return V(j::number(_lhs3385)/j::number(_rhs3386));})():_logical3384;})());return _obj3380;})(),([&]()->V{V _callee3387=this->_v_626_playedOnce.get();return j::call(_callee3387,j::Args{_v_914_p,V(0.0),_v_913_factor.get()});})()});})();

}

return V{};
},2);
this->_v_919_delay.get()=j::function([=](const j::Args &_args_fn920,const V &_receiver_fn920,const V &_self_fn920) mutable ->V{
V _v_921_src;
V _v_922_seconds;
_v_921_src=_args_fn920[0];
_v_922_seconds=_args_fn920[1];
{
j::Cell _v_923_wait;
V _v_924_p;
V _v_925_still;
_v_923_wait.get()=([&]()->V{V _callee3389=this->_v_40_duration.get();return j::call(_callee3389,j::Args{_v_922_seconds,this->_literals[177],V(0.0),V(true)});})();
_v_924_p=([&]()->V{V _callee3390=this->_v_93_prepare.get();return j::call(_callee3390,j::Args{this->_literals[177],_v_921_src});})();
_v_925_still=([&]()->V{V _callee3391=this->_v_907_stillAt.get();return j::call(_callee3391,j::Args{_v_924_p});})();
return ([&]()->V{V _callee3400=this->_v_876_retime.get();return j::call(_callee3400,j::Args{this->_literals[177],_v_924_p,j::function([=](const j::Args &_args_fn926,const V &_receiver_fn926,const V &_self_fn926) mutable ->V{
V _v_927_t;
_v_927_t=_args_fn926[0];
return ([&]()->V{V _lhs3392=_v_927_t;V _rhs3393=_v_923_wait.get();return V(j::number(_lhs3392)-j::number(_rhs3393));})();
return V{};
},1),([&]()->V{V _obj3394=j::object();j::put(_obj3394,this->_literals[52],(j::truth(([&]()->V{V _lhs3395=_v_925_still;V _rhs3396=j::builtin("undefined");return V(!j::equal(_lhs3395,_rhs3396,true));})())?([&]()->V{V _lhs3397=_v_925_still;V _rhs3398=_v_923_wait.get();return j::binary("+",_lhs3397,_rhs3398);})():j::builtin("undefined")));return _obj3394;})(),([&]()->V{V _callee3399=this->_v_626_playedOnce.get();return j::call(_callee3399,j::Args{_v_924_p,_v_923_wait.get()});})()});})();

}

return V{};
},2);
this->_v_928_repeat.get()=j::function([=](const j::Args &_args_fn929,const V &_receiver_fn929,const V &_self_fn929) mutable ->V{
V _v_930_src;
V _v_931_seconds;
_v_930_src=_args_fn929[0];
_v_931_seconds=_args_fn929[1];
{
j::Cell _v_932_every;
V _v_933_p;
V _v_934_still;
_v_932_every.get()=([&]()->V{V _callee3401=this->_v_40_duration.get();return j::call(_callee3401,j::Args{_v_931_seconds,this->_literals[178],V(1.0)});})();
_v_933_p=([&]()->V{V _callee3402=this->_v_93_prepare.get();return j::call(_callee3402,j::Args{this->_literals[178],_v_930_src});})();
_v_934_still=([&]()->V{V _callee3403=this->_v_907_stillAt.get();return j::call(_callee3403,j::Args{_v_933_p});})();
return ([&]()->V{V _callee3419=this->_v_876_retime.get();return j::call(_callee3419,j::Args{this->_literals[178],_v_933_p,j::function([=](const j::Args &_args_fn935,const V &_receiver_fn935,const V &_self_fn935) mutable ->V{
V _v_936_t;
_v_936_t=_args_fn935[0];
return ([&]()->V{V _lhs3404=_v_936_t;V _rhs3405=([&]()->V{V _lhs3406=_v_932_every.get();V _rhs3407=([&]()->V{V _number3410=([&]()->V{V _lhs3411=_v_936_t;V _rhs3412=_v_932_every.get();return V(j::number(_lhs3411)/j::number(_rhs3412));})();return V(std::floor(j::number(_number3410)));})();return V(j::number(_lhs3406)*j::number(_rhs3407));})();return V(j::number(_lhs3404)-j::number(_rhs3405));})();
return V{};
},1),([&]()->V{V _obj3413=j::object();j::put(_obj3413,this->_literals[50],(j::truth(j::get(j::get(_v_933_p,this->_literals[29]),this->_literals[49]))?_v_932_every.get():j::builtin("undefined")));j::put(_obj3413,this->_literals[52],(j::truth(([&]()->V{V _logical3414=([&]()->V{V _lhs3415=_v_934_still;V _rhs3416=j::builtin("undefined");return V(!j::equal(_lhs3415,_rhs3416,true));})();return j::truth(_logical3414)?([&]()->V{V _lhs3417=_v_934_still;V _rhs3418=_v_932_every.get();return j::binary("<",_lhs3417,_rhs3418);})():_logical3414;})())?_v_934_still:j::builtin("undefined")));return _obj3413;})()});})();

}

return V{};
},2);
this->_v_937_freeze.get()=j::function([=](const j::Args &_args_fn938,const V &_receiver_fn938,const V &_self_fn938) mutable ->V{
V _v_939_src;
V _v_940_at;
_v_939_src=_args_fn938[0];
_v_940_at=_args_fn938[1];
{
j::Cell _v_941_moment;
_v_941_moment.get()=([&]()->V{V _callee3420=this->_v_40_duration.get();return j::call(_callee3420,j::Args{_v_940_at,this->_literals[179],V(0.0),V(true)});})();
return ([&]()->V{V _callee3423=this->_v_876_retime.get();return j::call(_callee3423,j::Args{this->_literals[179],([&]()->V{V _callee3421=this->_v_93_prepare.get();return j::call(_callee3421,j::Args{this->_literals[179],_v_939_src});})(),j::function([=](const j::Args &_args_fn942,const V &_receiver_fn942,const V &_self_fn942) mutable ->V{
return _v_941_moment.get();
return V{};
},0),([&]()->V{V _obj3422=j::object();j::put(_obj3422,this->_literals[49],V(0.0));return _obj3422;})()});})();

}

return V{};
},2);
this->_v_943_named.get()=j::function([=](const j::Args &_args_fn944,const V &_receiver_fn944,const V &_self_fn944) mutable ->V{
V _v_945_src;
V _v_946_name;
V _v_947_o;
_v_945_src=_args_fn944[0];
_v_946_name=_args_fn944[1];
V _default3424=_args_fn944[2];if(_default3424.kind==V::Undefined||_default3424.kind==V::Hole)_default3424=([&]()->V{V _obj3425=j::object();return _obj3425;})();
_v_947_o=_default3424;
{
V _v_948_opts;
V _v_949_line;
V _v_952_p;
V _v_953_asItWas;
V _v_954_renamed;
_v_948_opts=([&]()->V{V _callee3427=this->_v_54_object.get();return j::call(_callee3427,j::Args{_v_947_o,this->_literals[180],([&]()->V{j::Args _array3426;_array3426.push_back(this->_literals[10]);_array3426.push_back(this->_literals[51]);return j::array(std::move(_array3426));})()});})();
_v_949_line=j::function([=](const j::Args &_args_fn950,const V &_receiver_fn950,const V &_self_fn950) mutable ->V{
V _v_951_v;
_v_951_v=_args_fn950[0];
return ([&]()->V{V _logical3428=([&]()->V{V _logical3429=([&]()->V{V _lhs3430=j::unary("typeof",_v_951_v);V _rhs3431=this->_literals[15];return V(j::equal(_lhs3430,_rhs3431,true));})();return j::truth(_logical3429)?j::unary("!",j::unary("!",([&]()->V{V _receiver3432=_v_951_v;V _method3433=this->_literals[12];V _method=j::get(_receiver3432,_method3433);j::Args _params3434=j::Args{};return j::call(_method,_params3434,_receiver3432);})())):_logical3429;})();return j::truth(_logical3428)?j::unary("!",([&]()->V{V _receiver3435=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");V _method3436=this->_literals[19];V _method=j::get(_receiver3435,_method3436);j::Args _params3437=j::Args{_v_951_v};return j::call(_method,_params3437,_receiver3435);})()):_logical3428;})();
return V{};
},1);
if(j::truth(j::unary("!",([&]()->V{V _callee3438=_v_949_line;return j::call(_callee3438,j::Args{_v_946_name});})()))){(void)(([&]()->V{V _callee3441=this->_v_13_fail.get();return j::call(_callee3441,j::Args{([&]()->V{std::u16string _text3439;_text3439+=u"named() takes a name, one line such as \"hello\", not ";_text3439+=j::string(([&]()->V{V _callee3440=this->_v_25_shown.get();return j::call(_callee3440,j::Args{_v_946_name});})());_text3439+=u"";return V(std::move(_text3439));})()});})());
}
if(j::truth(([&]()->V{V _logical3442=([&]()->V{V _lhs3443=j::get(_v_948_opts,this->_literals[10]);V _rhs3444=j::builtin("undefined");return V(!j::equal(_lhs3443,_rhs3444,true));})();return j::truth(_logical3442)?j::unary("!",([&]()->V{V _callee3445=_v_949_line;return j::call(_callee3445,j::Args{j::get(_v_948_opts,this->_literals[10])});})()):_logical3442;})())){(void)(([&]()->V{V _callee3448=this->_v_13_fail.get();return j::call(_callee3448,j::Args{([&]()->V{std::u16string _text3446;_text3446+=u"named()'s note takes one line saying what you see, not ";_text3446+=j::string(([&]()->V{V _callee3447=this->_v_25_shown.get();return j::call(_callee3447,j::Args{j::get(_v_948_opts,this->_literals[10])});})());_text3446+=u"";return V(std::move(_text3446));})()});})());
}
_v_952_p=([&]()->V{V _callee3449=this->_v_93_prepare.get();return j::call(_callee3449,j::Args{this->_literals[181],_v_945_src});})();
_v_953_asItWas=([&]()->V{V _logical3450=([&]()->V{V _logical3451=([&]()->V{V _logical3452=([&]()->V{V _lhs3453=j::get(_v_952_p,this->_literals[24]);V _rhs3454=V(1.0);return V(j::equal(_lhs3453,_rhs3454,true));})();return j::truth(_logical3452)?j::unary("!",j::get(_v_952_p,this->_literals[23])):_logical3452;})();return j::truth(_logical3451)?j::unary("!",j::get(_v_952_p,this->_literals[30])):_logical3451;})();return j::truth(_logical3450)?j::unary("!",j::get(([&]()->V{V _receiver3455=j::builtin("Object");V _method3456=this->_literals[101];V _method=j::get(_receiver3455,_method3456);j::Args _params3457=j::Args{j::get(_v_952_p,this->_literals[22])};return j::call(_method,_params3457,_receiver3455);})(),this->_literals[11])):_logical3450;})();
_v_954_renamed=([&]()->V{V _callee3472=this->_v_876_retime.get();return j::call(_callee3472,j::Args{this->_literals[181],_v_952_p,j::function([=](const j::Args &_args_fn955,const V &_receiver_fn955,const V &_self_fn955) mutable ->V{
V _v_956_t;
_v_956_t=_args_fn955[0];
return _v_956_t;
return V{};
},1),([&]()->V{V _obj3458=j::object();j::put(_obj3458,this->_literals[49],j::get(j::get(_v_952_p,this->_literals[29]),this->_literals[49]));j::put(_obj3458,this->_literals[50],(j::truth(_v_953_asItWas)?j::get(j::get(_v_952_p,this->_literals[29]),this->_literals[50]):([&]()->V{V _callee3460=this->_v_200_playable.get();return j::call(_callee3460,j::Args{([&]()->V{V _callee3459=this->_v_184_period.get();return j::call(_callee3459,j::Args{_v_952_p});})()});})()));j::put(_obj3458,this->_literals[52],([&]()->V{V _callee3461=this->_v_907_stillAt.get();return j::call(_callee3461,j::Args{_v_952_p});})());j::put(_obj3458,this->_literals[9],([&]()->V{V _receiver3462=_v_946_name;V _method3463=this->_literals[12];V _method=j::get(_receiver3462,_method3463);j::Args _params3464=j::Args{};return j::call(_method,_params3464,_receiver3462);})());j::put(_obj3458,this->_literals[10],([&]()->V{V _logical3465=j::get(_v_948_opts,this->_literals[10]);return j::nullish(_logical3465)?([&]()->V{V _callee3469=this->_v_224_short.get();return j::call(_callee3469,j::Args{([&]()->V{V _receiver3466=_v_946_name;V _method3467=this->_literals[12];V _method=j::get(_receiver3466,_method3467);j::Args _params3468=j::Args{};return j::call(_method,_params3468,_receiver3466);})()});})():_logical3465;})());j::put(_obj3458,this->_literals[51],([&]()->V{V _logical3470=j::get(_v_948_opts,this->_literals[51]);return j::nullish(_logical3470)?j::get(j::get(_v_952_p,this->_literals[29]),this->_literals[51]):_logical3470;})());return _obj3458;})(),([&]()->V{V _callee3471=this->_v_626_playedOnce.get();return j::call(_callee3471,j::Args{_v_952_p});})()});})();
return (j::truth(_v_953_asItWas)?([&]()->V{V _callee3475=this->_v_9_chained.get();return j::call(_callee3475,j::Args{([&]()->V{V _obj3473=j::object();V _spread3474=j::get(_v_952_p,this->_literals[28]);for(const auto &_key:j::keys(_spread3474))j::put(_obj3473,_key,j::get(_spread3474,_key));j::put(_obj3473,this->_literals[29],j::get(_v_954_renamed,this->_literals[29]));j::put(_obj3473,this->_literals[175],j::get(_v_954_renamed,this->_literals[175]));return _obj3473;})()});})():_v_954_renamed);

}

return V{};
},2);
auto &_import1434=j::module("kit/core");
this->_v_1_EMPTY=_import1434.exported("EMPTY");
this->_v_2_INK=_import1434.exported("INK");
this->_v_3_MAX=_import1434.exported("MAX");
this->_v_4_NONE=_import1434.exported("NONE");
this->_v_5_Surface=_import1434.exported("Surface");
this->_v_6_and=_import1434.exported("and");
this->_v_7_asPiece=_import1434.exported("asPiece");
this->_v_8_bayer=_import1434.exported("bayer");
this->_v_9_chained=_import1434.exported("chained");
this->_v_10_checkMeta=_import1434.exported("checkMeta");
this->_v_11_code=_import1434.exported("code");
this->_v_12_inkOf=_import1434.exported("colorOf");
this->_v_13_fail=_import1434.exported("fail");
this->_v_14_hash=_import1434.exported("hash");
this->_v_15_isHex=_import1434.exported("isHex");
this->_v_16_mergePalettes=_import1434.exported("mergePalettes");
this->_v_17_piece=_import1434.exported("piece");
this->_v_18_ramps=_import1434.exported("ramps");
this->_v_19_rgb=_import1434.exported("rgb");
this->_v_20_sample=_import1434.exported("sample");
this->_v_21_valueNoise=_import1434.exported("valueNoise");
auto &_import1750=j::module("kit/mirror");
this->_v_22_mirror=_import1750.exported("mirror");
this->exports["layer"]=this->_v_385_layer;
this->exports["over"]=this->_v_391_over;
this->exports["border"]=this->_v_456_border;
this->exports["row"]=this->_v_510_row;
this->exports["column"]=this->_v_530_column;
this->exports["grid"]=this->_v_550_grid;
this->exports["crop"]=this->_v_653_crop;
this->exports["pad"]=this->_v_673_pad;
this->exports["scale"]=this->_v_691_scale;
this->exports["flip"]=this->_v_708_flip;
this->exports["sequence"]=this->_v_775_sequence;
this->exports["speed"]=this->_v_910_speed;
this->exports["delay"]=this->_v_919_delay;
this->exports["repeat"]=this->_v_928_repeat;
this->exports["freeze"]=this->_v_937_freeze;
this->exports["named"]=this->_v_943_named;
this->_v_23_ANCHORS.get()=([&]()->V{j::Args _array3476;_array3476.push_back(this->_literals[92]);_array3476.push_back(this->_literals[64]);_array3476.push_back(this->_literals[182]);_array3476.push_back(this->_literals[61]);_array3476.push_back(this->_literals[95]);_array3476.push_back(this->_literals[63]);_array3476.push_back(this->_literals[183]);_array3476.push_back(this->_literals[66]);_array3476.push_back(this->_literals[184]);return j::array(std::move(_array3476));})();
this->_v_24_SIDES.get()=([&]()->V{j::Args _array3477;_array3477.push_back(this->_literals[61]);_array3477.push_back(this->_literals[63]);_array3477.push_back(this->_literals[185]);_array3477.push_back(this->_literals[83]);return j::array(std::move(_array3477));})();
this->_v_25_shown.get()=j::function([=](const j::Args &_args_fn26,const V &_receiver_fn26,const V &_self_fn26) mutable ->V{
V _v_27_v;
_v_27_v=_args_fn26[0];
return (j::truth(([&]()->V{V _lhs3478=j::unary("typeof",_v_27_v);V _rhs3479=this->_literals[70];return V(j::equal(_lhs3478,_rhs3479,true));})())?this->_literals[186]:(j::truth(([&]()->V{V _lhs3480=j::unary("typeof",_v_27_v);V _rhs3481=this->_literals[15];return V(j::equal(_lhs3480,_rhs3481,true));})())?([&]()->V{V _receiver3482=j::builtin("JSON");V _method3483=this->_literals[4];V _method=j::get(_receiver3482,_method3483);j::Args _params3484=j::Args{_v_27_v};return j::call(_method,_params3484,_receiver3482);})():(j::truth(([&]()->V{V _receiver3485=j::builtin("Array");V _method3486=this->_literals[7];V _method=j::get(_receiver3485,_method3486);j::Args _params3487=j::Args{_v_27_v};return j::call(_method,_params3487,_receiver3485);})())?([&]()->V{std::u16string _text3488;_text3488+=u"[";_text3488+=j::string(([&]()->V{V _receiver3489=([&]()->V{V _receiver3492=_v_27_v;V _method3493=this->_literals[5];V _method=j::get(_receiver3492,_method3493);j::Args _params3494=j::Args{this->_v_25_shown.get()};return j::call(_method,_params3494,_receiver3492);})();V _method3490=this->_literals[88];V _method=j::get(_receiver3489,_method3490);j::Args _params3491=j::Args{this->_literals[187]};return j::call(_method,_params3491,_receiver3489);})());_text3488+=u"]";return V(std::move(_text3488));})():(j::truth(([&]()->V{V _logical3495=([&]()->V{V _lhs3496=_v_27_v;V _rhs3497=V::null();return V(!j::equal(_lhs3496,_rhs3497,true));})();return j::truth(_logical3495)?([&]()->V{V _lhs3498=j::unary("typeof",_v_27_v);V _rhs3499=this->_literals[6];return V(j::equal(_lhs3498,_rhs3499,true));})():_logical3495;})())?this->_literals[188]:([&]()->V{V _callee3500=j::builtin("String");return j::call(_callee3500,j::Args{_v_27_v});})()))));
return V{};
},1);
this->_v_28_or.get()=j::function([=](const j::Args &_args_fn29,const V &_receiver_fn29,const V &_self_fn29) mutable ->V{
V _v_30_words;
_v_30_words=_args_fn29[0];
return (j::truth(([&]()->V{V _lhs3501=j::get(_v_30_words,this->_literals[11]);V _rhs3502=V(1.0);return j::binary(">",_lhs3501,_rhs3502);})())?([&]()->V{std::u16string _text3503;_text3503+=u"";_text3503+=j::string(([&]()->V{V _receiver3504=([&]()->V{V _receiver3507=_v_30_words;V _method3508=this->_literals[20];V _method=j::get(_receiver3507,_method3508);j::Args _params3509=j::Args{V(0.0),j::unary("-",V(1.0))};return j::call(_method,_params3509,_receiver3507);})();V _method3505=this->_literals[88];V _method=j::get(_receiver3504,_method3505);j::Args _params3506=j::Args{this->_literals[187]};return j::call(_method,_params3506,_receiver3504);})());_text3503+=u" or ";_text3503+=j::string(([&]()->V{V _receiver3510=_v_30_words;V _method3511=this->_literals[60];V _method=j::get(_receiver3510,_method3511);j::Args _params3512=j::Args{j::unary("-",V(1.0))};return j::call(_method,_params3512,_receiver3510);})());_text3503+=u"";return V(std::move(_text3503));})():([&]()->V{V _logical3513=j::get(_v_30_words,V(0.0));return j::nullish(_logical3513)?this->_literals[189]:_logical3513;})());
return V{};
},1);
this->_v_31_finite.get()=j::function([=](const j::Args &_args_fn32,const V &_receiver_fn32,const V &_self_fn32) mutable ->V{
V _v_33_v;
_v_33_v=_args_fn32[0];
return ([&]()->V{V _logical3514=([&]()->V{V _lhs3515=j::unary("typeof",_v_33_v);V _rhs3516=this->_literals[104];return V(j::equal(_lhs3515,_rhs3516,true));})();return j::truth(_logical3514)?([&]()->V{V _receiver3517=j::builtin("Number");V _method3518=this->_literals[176];V _method=j::get(_receiver3517,_method3518);j::Args _params3519=j::Args{_v_33_v};return j::call(_method,_params3519,_receiver3517);})():_logical3514;})();
return V{};
},1);
this->_v_61_oneLine.get()=j::function([=](const j::Args &_args_fn62,const V &_receiver_fn62,const V &_self_fn62) mutable ->V{
V _v_63_v;
_v_63_v=_args_fn62[0];
return ([&]()->V{V _logical3520=([&]()->V{V _logical3521=([&]()->V{V _lhs3522=j::unary("typeof",_v_63_v);V _rhs3523=this->_literals[15];return V(j::equal(_lhs3522,_rhs3523,true));})();return j::truth(_logical3521)?j::unary("!",j::unary("!",([&]()->V{V _receiver3524=_v_63_v;V _method3525=this->_literals[12];V _method=j::get(_receiver3524,_method3525);j::Args _params3526=j::Args{};return j::call(_method,_params3526,_receiver3524);})())):_logical3521;})();return j::truth(_logical3520)?j::unary("!",([&]()->V{V _receiver3527=j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f]","");V _method3528=this->_literals[19];V _method=j::get(_receiver3527,_method3528);j::Args _params3529=j::Args{_v_63_v};return j::call(_method,_params3529,_receiver3527);})()):_logical3520;})();
return V{};
},1);
this->_v_72_CLIP.get()=([&]()->V{j::Args _array3530;_array3530.push_back(this->_literals[16]);_array3530.push_back(this->_literals[22]);_array3530.push_back(this->_literals[23]);_array3530.push_back(this->_literals[24]);_array3530.push_back(this->_literals[25]);return j::array(std::move(_array3530));})();
this->_v_78_isPiece.get()=j::function([=](const j::Args &_args_fn79,const V &_receiver_fn79,const V &_self_fn79) mutable ->V{
V _v_80_v;
_v_80_v=_args_fn79[0];
return ([&]()->V{V _logical3531=([&]()->V{V _logical3532=([&]()->V{V _logical3533=([&]()->V{V _lhs3534=_v_80_v;V _rhs3535=V::null();return V(!j::equal(_lhs3534,_rhs3535,true));})();return j::truth(_logical3533)?([&]()->V{V _lhs3536=j::unary("typeof",_v_80_v);V _rhs3537=this->_literals[6];return V(j::equal(_lhs3536,_rhs3537,true));})():_logical3533;})();return j::truth(_logical3532)?([&]()->V{V _lhs3538=this->_literals[29];V _rhs3539=_v_80_v;return j::binary("in",_lhs3538,_rhs3539);})():_logical3532;})();return j::truth(_logical3531)?([&]()->V{V _lhs3540=j::unary("typeof",j::get(_v_80_v,this->_literals[175]));V _rhs3541=this->_literals[70];return V(j::equal(_lhs3540,_rhs3541,true));})():_logical3531;})();
return V{};
},1);
this->_v_81_isClip.get()=j::function([=](const j::Args &_args_fn82,const V &_receiver_fn82,const V &_self_fn82) mutable ->V{
V _v_83_v;
_v_83_v=_args_fn82[0];
return ([&]()->V{V _logical3542=([&]()->V{V _logical3543=([&]()->V{V _logical3544=([&]()->V{V _logical3545=([&]()->V{V _lhs3546=_v_83_v;V _rhs3547=V::null();return V(!j::equal(_lhs3546,_rhs3547,true));})();return j::truth(_logical3545)?([&]()->V{V _lhs3548=j::unary("typeof",_v_83_v);V _rhs3549=this->_literals[6];return V(j::equal(_lhs3548,_rhs3549,true));})():_logical3545;})();return j::truth(_logical3544)?j::unary("!",([&]()->V{V _lhs3550=_v_83_v;V _rhs3551=this->_v_5_Surface.get();return j::binary("instanceof",_lhs3550,_rhs3551);})()):_logical3544;})();return j::truth(_logical3543)?([&]()->V{V _lhs3552=this->_literals[16];V _rhs3553=_v_83_v;return j::binary("in",_lhs3552,_rhs3553);})():_logical3543;})();return j::truth(_logical3542)?j::unary("!",([&]()->V{V _lhs3554=this->_literals[29];V _rhs3555=_v_83_v;return j::binary("in",_lhs3554,_rhs3555);})()):_logical3542;})();
return V{};
},1);
this->_v_84_unwrap.get()=j::function([=](const j::Args &_args_fn85,const V &_receiver_fn85,const V &_self_fn85) mutable ->V{
V _v_86_v;
_v_86_v=_args_fn85[0];
return (j::truth(([&]()->V{V _logical3556=([&]()->V{V _logical3557=([&]()->V{V _logical3558=([&]()->V{V _logical3559=([&]()->V{V _lhs3560=_v_86_v;V _rhs3561=V::null();return V(!j::equal(_lhs3560,_rhs3561,true));})();return j::truth(_logical3559)?([&]()->V{V _lhs3562=j::unary("typeof",_v_86_v);V _rhs3563=this->_literals[6];return V(j::equal(_lhs3562,_rhs3563,true));})():_logical3559;})();return j::truth(_logical3558)?j::unary("!",([&]()->V{V _lhs3564=this->_literals[29];V _rhs3565=_v_86_v;return j::binary("in",_lhs3564,_rhs3565);})()):_logical3558;})();return j::truth(_logical3557)?j::unary("!",([&]()->V{V _lhs3566=this->_literals[16];V _rhs3567=_v_86_v;return j::binary("in",_lhs3566,_rhs3567);})()):_logical3557;})();return j::truth(_logical3556)?([&]()->V{V _callee3568=this->_v_78_isPiece.get();return j::call(_callee3568,j::Args{j::get(_v_86_v,this->_literals[175])});})():_logical3556;})())?j::get(_v_86_v,this->_literals[175]):_v_86_v);
return V{};
},1);
this->_v_87_textName.get()=j::function([=](const j::Args &_args_fn88,const V &_receiver_fn88,const V &_self_fn88) mutable ->V{
V _v_89_text;
_v_89_text=_args_fn88[0];
{
V _v_90_line;
_v_90_line=([&]()->V{V _logical3569=([&]()->V{V _chain3570=_v_89_text;V _chain3571=j::get(_chain3570,this->_literals[190]);V _chain3572=j::call(_chain3571,j::Args{this->_literals[17]},_chain3570);V _chain3573=j::get(_chain3572,this->_literals[191]);V _chain3574=j::call(_chain3573,j::Args{j::function([=](const j::Args &_args_fn91,const V &_receiver_fn91,const V &_self_fn91) mutable ->V{
V _v_92_l;
_v_92_l=_args_fn91[0];
return ([&]()->V{V _receiver3575=_v_92_l;V _method3576=this->_literals[12];V _method=j::get(_receiver3575,_method3576);j::Args _params3577=j::Args{};return j::call(_method,_params3577,_receiver3575);})();
return V{};
},1)},_chain3572);if(j::nullish(_chain3574))return V{};V _chain3578=j::get(_chain3574,this->_literals[12]);V _chain3579=j::call(_chain3578,j::Args{},_chain3574);return _chain3579;})();return j::nullish(_logical3569)?this->_literals[189]:_logical3569;})();
return (j::truth(_v_90_line)?([&]()->V{std::u16string _text3580;_text3580+=u"\"";_text3580+=j::string(([&]()->V{V _receiver3581=_v_90_line;V _method3582=this->_literals[20];V _method=j::get(_receiver3581,_method3582);j::Args _params3583=j::Args{V(0.0),V(24.0)};return j::call(_method,_params3583,_receiver3581);})());_text3580+=u"\"";return V(std::move(_text3580));})():this->_literals[192]);

}

return V{};
},1);
this->_v_120_apart.get()=j::function([=](const j::Args &_args_fn121,const V &_receiver_fn121,const V &_self_fn121) mutable ->V{
V _v_122_a;
V _v_123_b;
_v_122_a=_args_fn121[0];
_v_123_b=_args_fn121[1];
return ([&]()->V{V _lhs3584=([&]()->V{V _lhs3586=([&]()->V{V _lhs3588=V(0.3);V _rhs3589=([&]()->V{V _lhs3590=([&]()->V{V _lhs3592=j::get(_v_122_a,V(0.0));V _rhs3593=j::get(_v_123_b,V(0.0));return V(j::number(_lhs3592)-j::number(_rhs3593));})();V _rhs3591=V(2.0);return V(std::pow(j::number(_lhs3590),j::number(_rhs3591)));})();return V(j::number(_lhs3588)*j::number(_rhs3589));})();V _rhs3587=([&]()->V{V _lhs3594=V(0.59);V _rhs3595=([&]()->V{V _lhs3596=([&]()->V{V _lhs3598=j::get(_v_122_a,V(1.0));V _rhs3599=j::get(_v_123_b,V(1.0));return V(j::number(_lhs3598)-j::number(_rhs3599));})();V _rhs3597=V(2.0);return V(std::pow(j::number(_lhs3596),j::number(_rhs3597)));})();return V(j::number(_lhs3594)*j::number(_rhs3595));})();return j::binary("+",_lhs3586,_rhs3587);})();V _rhs3585=([&]()->V{V _lhs3600=V(0.11);V _rhs3601=([&]()->V{V _lhs3602=([&]()->V{V _lhs3604=j::get(_v_122_a,V(2.0));V _rhs3605=j::get(_v_123_b,V(2.0));return V(j::number(_lhs3604)-j::number(_rhs3605));})();V _rhs3603=V(2.0);return V(std::pow(j::number(_lhs3602),j::number(_rhs3603)));})();return V(j::number(_lhs3600)*j::number(_rhs3601));})();return j::binary("+",_lhs3584,_rhs3585);})();
return V{};
},2);
this->_v_183_LOOPS.get()=([&]()->V{V _obj3606=j::object();j::put(_obj3606,this->_literals[193],this->_literals[194]);j::put(_obj3606,this->_literals[195],this->_literals[194]);j::put(_obj3606,this->_literals[196],this->_literals[197]);return _obj3606;})();
this->_v_190_gcd.get()=j::function([=](const j::Args &_args_fn191,const V &_receiver_fn191,const V &_self_fn191) mutable ->V{
V _v_192_a;
V _v_193_b;
_v_192_a=_args_fn191[0];
_v_193_b=_args_fn191[1];
return (j::truth(_v_193_b)?([&]()->V{V _callee3609=this->_v_190_gcd.get();return j::call(_callee3609,j::Args{_v_193_b,([&]()->V{V _lhs3607=_v_192_a;V _rhs3608=_v_193_b;return V(std::fmod(j::number(_lhs3607),j::number(_rhs3608)));})()});})():_v_192_a);
return V{};
},2);
this->_v_200_playable.get()=j::function([=](const j::Args &_args_fn201,const V &_receiver_fn201,const V &_self_fn201) mutable ->V{
V _v_202_loop;
_v_202_loop=_args_fn201[0];
return (j::truth(([&]()->V{V _logical3610=_v_202_loop;return j::truth(_logical3610)?([&]()->V{V _lhs3611=_v_202_loop;V _rhs3612=V(60.0);return j::binary("<=",_lhs3611,_rhs3612);})():_logical3610;})())?_v_202_loop:j::builtin("undefined"));
return V{};
},1);
this->_v_214_fpsOf.get()=j::function([=](const j::Args &_args_fn215,const V &_receiver_fn215,const V &_self_fn215) mutable ->V{
V _v_216_parts;
_v_216_parts=_args_fn215[0];
return ([&]()->V{V _receiver3617=j::builtin("Math");V _method3618=this->_literals[44];V _method=j::get(_receiver3617,_method3618);j::Args _params3619=([&](){j::Args _args3613;_args3613.push_back(V(0.0));for(const auto &_v:j::elements(([&]()->V{V _receiver3614=_v_216_parts;V _method3615=this->_literals[5];V _method=j::get(_receiver3614,_method3615);j::Args _params3616=j::Args{j::function([=](const j::Args &_args_fn217,const V &_receiver_fn217,const V &_self_fn217) mutable ->V{
V _v_218_p;
_v_218_p=_args_fn217[0];
return j::get(j::get(_v_218_p,this->_literals[29]),this->_literals[49]);
return V{};
},1)};return j::call(_method,_params3616,_receiver3614);})()))_args3613.push_back(_v);return _args3613;})();return j::call(_method,_params3619,_receiver3617);})();
return V{};
},1);
this->_v_219_categoryOf.get()=j::function([=](const j::Args &_args_fn220,const V &_receiver_fn220,const V &_self_fn220) mutable ->V{
j::Cell _v_221_parts;
_v_221_parts.get()=_args_fn220[0];
return (j::truth(([&]()->V{V _receiver3622=_v_221_parts.get();V _method3623=this->_literals[198];V _method=j::get(_receiver3622,_method3623);j::Args _params3624=j::Args{j::function([=](const j::Args &_args_fn222,const V &_receiver_fn222,const V &_self_fn222) mutable ->V{
V _v_223_p;
_v_223_p=_args_fn222[0];
return ([&]()->V{V _lhs3620=j::get(j::get(_v_223_p,this->_literals[29]),this->_literals[51]);V _rhs3621=j::get(j::get(j::get(_v_221_parts.get(),V(0.0)),this->_literals[29]),this->_literals[51]);return V(j::equal(_lhs3620,_rhs3621,true));})();
return V{};
},1)};return j::call(_method,_params3624,_receiver3622);})())?j::get(j::get(j::get(_v_221_parts.get(),V(0.0)),this->_literals[29]),this->_literals[51]):this->_literals[199]);
return V{};
},1);
this->_v_224_short.get()=j::function([=](const j::Args &_args_fn225,const V &_receiver_fn225,const V &_self_fn225) mutable ->V{
V _v_226_s;
_v_226_s=_args_fn225[0];
return (j::truth(([&]()->V{V _lhs3625=j::get(_v_226_s,this->_literals[11]);V _rhs3626=V(72.0);return j::binary(">",_lhs3625,_rhs3626);})())?([&]()->V{V _lhs3627=([&]()->V{V _receiver3629=_v_226_s;V _method3630=this->_literals[20];V _method=j::get(_receiver3629,_method3630);j::Args _params3631=j::Args{V(0.0),V(71.0)};return j::call(_method,_params3631,_receiver3629);})();V _rhs3628=this->_literals[109];return j::binary("+",_lhs3627,_rhs3628);})():_v_226_s);
return V{};
},1);
this->_v_227_optionsOf.get()=j::function([=](const j::Args &_args_fn228,const V &_receiver_fn228,const V &_self_fn228) mutable ->V{
V _v_229_p;
_v_229_p=_args_fn228[0];
return (j::truth(([&]()->V{V _logical3632=([&]()->V{V _lhs3633=j::get(j::get(_v_229_p,this->_literals[29]),this->_literals[22]);V _rhs3634=j::builtin("undefined");return V(!j::equal(_lhs3633,_rhs3634,true));})();return !j::truth(_logical3632)?j::get(([&]()->V{V _receiver3635=j::builtin("Object");V _method3636=this->_literals[101];V _method=j::get(_receiver3635,_method3636);j::Args _params3637=j::Args{j::get(_v_229_p,this->_literals[22])};return j::call(_method,_params3637,_receiver3635);})(),this->_literals[11]):_logical3632;})())?([&]()->V{V _obj3638=j::object();V _spread3639=j::get(j::get(_v_229_p,this->_literals[29]),this->_literals[22]);for(const auto &_key:j::keys(_spread3639))j::put(_obj3638,_key,j::get(_spread3639,_key));V _spread3640=j::get(_v_229_p,this->_literals[22]);for(const auto &_key:j::keys(_spread3640))j::put(_obj3638,_key,j::get(_spread3640,_key));return _obj3638;})():j::builtin("undefined"));
return V{};
},1);
this->_v_274_LAYER.get()=([&]()->V{j::Args _array3641;for(const auto &_value:j::elements(this->_v_72_CLIP.get()))_array3641.push_back(_value);_array3641.push_back(this->_literals[76]);_array3641.push_back(this->_literals[78]);_array3641.push_back(this->_literals[80]);_array3641.push_back(this->_literals[74]);_array3641.push_back(this->_literals[75]);_array3641.push_back(this->_literals[73]);_array3641.push_back(this->_literals[71]);return j::array(std::move(_array3641));})();
this->_v_311_at.get()=j::function([=](const j::Args &_args_fn312,const V &_receiver_fn312,const V &_self_fn312) mutable ->V{
V _v_313_v;
V _v_314_t;
_v_313_v=_args_fn312[0];
_v_314_t=_args_fn312[1];
{
V _v_315_n;
_v_315_n=(j::truth(([&]()->V{V _lhs3642=j::unary("typeof",_v_313_v);V _rhs3643=this->_literals[70];return V(j::equal(_lhs3642,_rhs3643,true));})())?([&]()->V{V _callee3644=_v_313_v;return j::call(_callee3644,j::Args{_v_314_t});})():_v_313_v);
return (j::truth(([&]()->V{V _callee3645=this->_v_31_finite.get();return j::call(_callee3645,j::Args{_v_315_n});})())?([&]()->V{V _number3646=_v_315_n;return V(std::floor(j::number(_number3646)));})():V(0.0));

}

return V{};
},2);
this->_v_316_around.get()=j::function([=](const j::Args &_args_fn317,const V &_receiver_fn317,const V &_self_fn317) mutable ->V{
V _v_318_p;
V _v_319_size;
V _v_320_room;
_v_318_p=_args_fn317[0];
_v_319_size=_args_fn317[1];
_v_320_room=_args_fn317[2];
{
V _v_321_span;
_v_321_span=([&]()->V{V _lhs3647=_v_320_room;V _rhs3648=_v_319_size;return j::binary("+",_lhs3647,_rhs3648);})();
return ([&]()->V{V _lhs3649=([&]()->V{V _lhs3651=([&]()->V{V _lhs3653=([&]()->V{V _lhs3655=([&]()->V{V _lhs3657=_v_318_p;V _rhs3658=_v_319_size;return j::binary("+",_lhs3657,_rhs3658);})();V _rhs3656=_v_321_span;return V(std::fmod(j::number(_lhs3655),j::number(_rhs3656)));})();V _rhs3654=_v_321_span;return j::binary("+",_lhs3653,_rhs3654);})();V _rhs3652=_v_321_span;return V(std::fmod(j::number(_lhs3651),j::number(_rhs3652)));})();V _rhs3650=_v_319_size;return V(j::number(_lhs3649)-j::number(_rhs3650));})();

}

return V{};
},3);
this->_v_402_BOXES.get()=([&]()->V{V _obj3659=j::object();j::put(_obj3659,this->_literals[200],this->_literals[201]);j::put(_obj3659,this->_literals[202],this->_literals[203]);j::put(_obj3659,this->_literals[99],this->_literals[204]);j::put(_obj3659,this->_literals[205],this->_literals[206]);j::put(_obj3659,this->_literals[207],this->_literals[208]);return _obj3659;})();
this->_v_447_titleOf.get()=j::function([=](const j::Args &_args_fn448,const V &_receiver_fn448,const V &_self_fn448) mutable ->V{
V _v_449_b;
V _v_450_name;
_v_449_b=_args_fn448[0];
_v_450_name=_args_fn448[1];
return (j::truth(([&]()->V{V _lhs3660=j::get(_v_449_b,this->_literals[97]);V _rhs3661=V(true);return V(j::equal(_lhs3660,_rhs3661,true));})())?([&]()->V{V _receiver3662=([&]()->V{V _receiver3665=([&]()->V{V _receiver3668=([&]()->V{V _receiver3671=_v_450_name;V _method3672=this->_literals[18];V _method=j::get(_receiver3671,_method3672);j::Args _params3673=j::Args{j::regexp(u"[\\u0000-\\u001f\\u007f-\\u009f\\ud800-\\udfff]+","g"),this->_literals[72]};return j::call(_method,_params3673,_receiver3671);})();V _method3669=this->_literals[18];V _method=j::get(_receiver3668,_method3669);j::Args _params3670=j::Args{j::regexp(u"\\s+","g"),this->_literals[72]};return j::call(_method,_params3670,_receiver3668);})();V _method3666=this->_literals[12];V _method=j::get(_receiver3665,_method3666);j::Args _params3667=j::Args{};return j::call(_method,_params3667,_receiver3665);})();V _method3663=this->_literals[18];V _method=j::get(_receiver3662,_method3663);j::Args _params3664=j::Args{j::regexp(u"^\"(.+)\"$",""),this->_literals[209]};return j::call(_method,_params3664,_receiver3662);})():([&]()->V{V _logical3674=j::get(_v_449_b,this->_literals[97]);return !j::truth(_logical3674)?this->_literals[189]:_logical3674;})());
return V{};
},2);
this->_v_451_borderInk.get()=j::function([=](const j::Args &_args_fn452,const V &_receiver_fn452,const V &_self_fn452) mutable ->V{
V _v_453_m;
V _v_454_at;
V _v_455_b;
_v_453_m=_args_fn452[0];
_v_454_at=_args_fn452[1];
_v_455_b=_args_fn452[2];
return (j::truth(([&]()->V{V _chain3675=_v_455_b;if(j::nullish(_chain3675))return V{};V _chain3676=j::get(_chain3675,this->_literals[25]);return _chain3676;})())?([&]()->V{j::Args _array3677;_array3677.push_back(j::get(j::get(j::get(_v_453_m,this->_literals[46]),_v_454_at),V(0.0)));_array3677.push_back(j::get(j::get(j::get(_v_453_m,this->_literals[46]),_v_454_at),([&]()->V{V _lhs3678=j::get(j::get(_v_455_b,this->_literals[25]),this->_literals[11]);V _rhs3679=V(1.0);return V(j::number(_lhs3678)-j::number(_rhs3679));})()));return j::array(std::move(_array3677));})():V::null());
return V{};
},3);
this->_v_623_single.get()=j::function([=](const j::Args &_args_fn624,const V &_receiver_fn624,const V &_self_fn624) mutable ->V{
V _v_625_p;
_v_625_p=_args_fn624[0];
return ([&]()->V{V _obj3680=j::object();j::put(_obj3680,this->_literals[9],j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[9]));j::put(_obj3680,this->_literals[10],j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[10]));j::put(_obj3680,this->_literals[51],j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[51]));j::put(_obj3680,this->_literals[32],j::get(_v_625_p,this->_literals[32]));j::put(_obj3680,this->_literals[33],j::get(_v_625_p,this->_literals[33]));j::put(_obj3680,this->_literals[34],([&]()->V{V _logical3681=j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[34]);return j::nullish(_logical3681)?V(2.0):_logical3681;})());j::put(_obj3680,this->_literals[49],j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[49]));j::put(_obj3680,this->_literals[53],j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[53]));j::put(_obj3680,this->_literals[50],([&]()->V{V _callee3683=this->_v_200_playable.get();return j::call(_callee3683,j::Args{([&]()->V{V _callee3682=this->_v_184_period.get();return j::call(_callee3682,j::Args{_v_625_p});})()});})());j::put(_obj3680,this->_literals[52],(j::truth(([&]()->V{V _lhs3684=j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[52]);V _rhs3685=j::builtin("undefined");return V(!j::equal(_lhs3684,_rhs3685,true));})())?([&]()->V{V _receiver3692=j::builtin("Math");V _method3693=this->_literals[44];V _method=j::get(_receiver3692,_method3693);j::Args _params3694=j::Args{V(0.0),([&]()->V{V _lhs3686=([&]()->V{V _lhs3688=j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[52]);V _rhs3689=j::get(_v_625_p,this->_literals[23]);return V(j::number(_lhs3688)-j::number(_rhs3689));})();V _rhs3687=j::get(_v_625_p,this->_literals[24]);return V(j::number(_lhs3686)/j::number(_rhs3687));})()};return j::call(_method,_params3694,_receiver3692);})():j::builtin("undefined")));j::put(_obj3680,this->_literals[54],j::get(j::get(_v_625_p,this->_literals[29]),this->_literals[54]));j::put(_obj3680,this->_literals[22],([&]()->V{V _callee3695=this->_v_227_optionsOf.get();return j::call(_callee3695,j::Args{_v_625_p});})());return _obj3680;})();
return V{};
},1);
this->_v_633_withMotion.get()=j::function([=](const j::Args &_args_fn634,const V &_receiver_fn634,const V &_self_fn634) mutable ->V{
V _v_635_whole;
V _v_636_motion;
_v_635_whole=_args_fn634[0];
_v_636_motion=_args_fn634[1];
return (j::truth(_v_636_motion)?([&]()->V{V _receiver3697=j::builtin("Object");V _method3698=this->_literals[210];V _method=j::get(_receiver3697,_method3698);j::Args _params3699=j::Args{_v_635_whole,([&]()->V{V _obj3696=j::object();j::put(_obj3696,this->_literals[134],_v_636_motion);return _obj3696;})()};return j::call(_method,_params3699,_receiver3697);})():_v_635_whole);
return V{};
},2);
this->_v_726_TRANSITIONS.get()=([&]()->V{j::Args _array3700;_array3700.push_back(this->_literals[169]);_array3700.push_back(this->_literals[167]);_array3700.push_back(this->_literals[171]);_array3700.push_back(this->_literals[170]);return j::array(std::move(_array3700));})();
this->_v_748_fades.get()=V::null();
this->_v_772_EDGE.get()=V(0.07);
this->_v_773_EDGES.get()=this->_literals[211];
this->_v_774_BAND.get()=this->_literals[212];
this->_v_907_stillAt.get()=j::function([=](const j::Args &_args_fn908,const V &_receiver_fn908,const V &_self_fn908) mutable ->V{
V _v_909_p;
_v_909_p=_args_fn908[0];
return (j::truth(([&]()->V{V _lhs3701=j::get(j::get(_v_909_p,this->_literals[29]),this->_literals[52]);V _rhs3702=j::builtin("undefined");return V(!j::equal(_lhs3701,_rhs3702,true));})())?([&]()->V{V _receiver3709=j::builtin("Math");V _method3710=this->_literals[44];V _method=j::get(_receiver3709,_method3710);j::Args _params3711=j::Args{V(0.0),([&]()->V{V _lhs3703=([&]()->V{V _lhs3705=j::get(j::get(_v_909_p,this->_literals[29]),this->_literals[52]);V _rhs3706=j::get(_v_909_p,this->_literals[23]);return V(j::number(_lhs3705)-j::number(_rhs3706));})();V _rhs3704=j::get(_v_909_p,this->_literals[24]);return V(j::number(_lhs3703)/j::number(_rhs3704));})()};return j::call(_method,_params3711,_receiver3709);})():j::builtin("undefined"));
return V{};
},1);
}
};
}
std::unique_ptr<Module> new_kit_compose(){return std::make_unique<Generated_kit_compose>();}
}
