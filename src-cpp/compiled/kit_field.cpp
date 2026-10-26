// Native source generated from src/kit/field.ts (ascii.rest, MIT).
#include "../value.hpp"
#include <limits>
namespace ascii::native {
namespace {
namespace j=ascii::native;using V=j::Value;
struct Generated_kit_field final:j::Module {
j::Cell _v_10727_EMPTY;
j::Cell _v_10728_NONE;
j::Cell _v_10729_Palette;
j::Cell _v_10730_bayer;
j::Cell _v_10731_code;
j::Cell _v_10732_colorsOf;
j::Cell _v_10733_fail;
j::Cell _v_10734_fract;
j::Cell _v_10735_piece;
j::Cell _v_10736_rampOf;
j::Cell _v_10737_specOf;
j::Cell _v_10738_spread;
j::Cell _v_10739_finite;
j::Cell _v_10742_show;
j::Cell _v_10745_plan;
j::Cell _v_10763_geometries;
j::Cell _v_10764_KEEP;
j::Cell _v_10765_unitOf;
j::Cell _v_10770_extent;
j::Cell _v_10776_geometry;
j::Cell _v_10803_lutOf;
j::Cell _v_10812_paint;
j::Cell _v_10857_NO_OPTIONS;
j::Cell _v_10858_NOTHING;
j::Cell _v_10859_wrong;
j::Cell _v_10862_charOf;
j::Cell _v_10865_cell;
j::Cell _v_10868_isSurface;
j::Cell _v_10871_drawField;
j::Cell _v_10877_join;
j::Cell _v_10890_field;
std::vector<V> _literals;
Generated_kit_field():_v_10727_EMPTY(this->slot("EMPTY")),_v_10728_NONE(this->slot("NONE")),_v_10729_Palette(this->slot("Palette")),_v_10730_bayer(this->slot("bayer")),_v_10731_code(this->slot("code")),_v_10732_colorsOf(this->slot("colorsOf")),_v_10733_fail(this->slot("fail")),_v_10734_fract(this->slot("fract")),_v_10735_piece(this->slot("piece")),_v_10736_rampOf(this->slot("rampOf")),_v_10737_specOf(this->slot("specOf")),_v_10738_spread(this->slot("spread")),_v_10739_finite(this->slot("finite")),_v_10742_show(this->slot("show")),_v_10745_plan(this->slot("plan")),_v_10763_geometries(this->slot("geometries")),_v_10764_KEEP(this->slot("KEEP")),_v_10765_unitOf(this->slot("unitOf")),_v_10770_extent(this->slot("extent")),_v_10776_geometry(this->slot("geometry")),_v_10803_lutOf(this->slot("lutOf")),_v_10812_paint(this->slot("paint")),_v_10857_NO_OPTIONS(this->slot("NO_OPTIONS")),_v_10858_NOTHING(this->slot("NOTHING")),_v_10859_wrong(this->slot("wrong")),_v_10862_charOf(this->slot("charOf")),_v_10865_cell(this->slot("cell")),_v_10868_isSurface(this->slot("isSurface")),_v_10871_drawField(this->slot("drawField")),_v_10877_join(this->slot("join")),_v_10890_field(this->slot("field")),_literals{V(u"object"),
V(u"ramp"),
V(u"standard"),
V(u"charCodeAt"),
V(u"from"),
V(u"steps"),
V(u"isInteger"),
V(u"colors"),
V(u"isArray"),
V(u"light"),
V(u"dark"),
V(u"color"),
V(u"function"),
V(u"dither"),
V(u"boolean"),
V(u"invert"),
V(u"auto"),
V(u"aspect"),
V(u"gamma"),
V(u"range"),
V(u"length"),
V(u"region"),
V(u"x"),
V(u"y"),
V(u"cols"),
V(u"rows"),
V(u"every"),
V(u"period"),
V(u"codes"),
V(u"lo"),
V(u"scale"),
V(u"palette"),
V(u"lut"),
V(u"lutFor"),
V(u"max"),
V(u"min"),
V(u"get"),
V(u"set"),
V(u"key"),
V(u"c0"),
V(u"c1"),
V(u"r0"),
V(u"r1"),
V(u"width"),
V(u"height"),
V(u"u"),
V(u"v"),
V(u"r"),
V(u"a"),
V(u"unshift"),
V(u"pop"),
V(u"paper"),
V(u"index"),
V(u"mono"),
V(u"chars"),
V(u"phase"),
V(u"char"),
V(u"row"),
V(u"col"),
V(u"number"),
V(u"resolve"),
V(u"drawField()"),
V(u"field"),
V(u"field()"),
V(u"clear"),
V(u"field()'s color function picks from the piece's colours: give the spec a palette, such as palette: [\"#f97316\", \"#38bdf8\"], or colors"),
V(u"loop"),
V(u"setup"),
V(u"meta"),
V(u"options"),
V(u"cell"),
V(u"assign"),
V(u"at.color picks from the piece's colours: give the spec a palette, such as palette: [\"#f97316\", \"#38bdf8\"], or colors"),
V(u"isFinite"),
V(u"a function"),
V(u"bigint"),
V(u"stringify"),
V(u"a list that contains itself"),
V(u"an object that contains itself"),
V(u"freeze"),
V(u"a field's function returns a brightness, a number 0 to 1, true for solid ink, or null where there is nothing, not undefined: does every path through it return a value?"),
V(u"string")}{
this->exports["drawField"]=this->_v_10871_drawField;
this->exports["field"]=this->_v_10890_field;
}
void init() override{if(initialized)return;initialized=true;
this->_v_10745_plan.get()=j::function([=](const j::Args &_args_fn10746,const V &_receiver_fn10746,const V &_self_fn10746) mutable ->V{
V _v_10747_o;
V _v_10748_who;
_v_10747_o=_args_fn10746[0];
_v_10748_who=_args_fn10746[1];
{
V _v_10749_chars;
V _v_10750_codes;
V _v_10753_steps;
V _v_10754_palette;
V _v_10755_light;
V _v_10756_dark;
V _v_10758_invert;
V _v_10759_gamma;
V _v_10760_range;
V _v_10761_region;
V _v_10762_period;
if(j::truth(([&]()->V{V _logical10913=([&]()->V{V _lhs10914=_v_10747_o;V _rhs10915=j::builtin("undefined");return V(j::equal(_lhs10914,_rhs10915,true));})();return !j::truth(_logical10913)?([&]()->V{V _lhs10916=_v_10747_o;V _rhs10917=V::null();return V(j::equal(_lhs10916,_rhs10917,true));})():_logical10913;})())){(void)((_v_10747_o=([&]()->V{V _obj10919=j::object();return _obj10919;})()));
}else {if(j::truth(([&]()->V{V _lhs10920=j::unary("typeof",_v_10747_o);V _rhs10921=this->_literals[0];return V(!j::equal(_lhs10920,_rhs10921,true));})())){(void)(([&]()->V{V _callee10924=this->_v_10733_fail.get();return j::call(_callee10924,j::Args{([&]()->V{std::u16string _text10922;_text10922+=u"";_text10922+=j::string(_v_10748_who);_text10922+=u" takes its options as an object, such as { ramp: \"blocks\" }, not ";_text10922+=j::string(([&]()->V{V _callee10923=this->_v_10742_show.get();return j::call(_callee10923,j::Args{_v_10747_o});})());_text10922+=u"";return V(std::move(_text10922));})()});})());
}
}
_v_10749_chars=([&]()->V{V _callee10926=this->_v_10736_rampOf.get();return j::call(_callee10926,j::Args{([&]()->V{V _logical10925=j::get(_v_10747_o,this->_literals[1]);return j::nullish(_logical10925)?this->_literals[2]:_logical10925;})()});})();
_v_10750_codes=([&]()->V{V _receiver10930=j::builtin("Uint16Array");V _method10931=this->_literals[4];V _method=j::get(_receiver10930,_method10931);j::Args _params10932=j::Args{_v_10749_chars,j::function([=](const j::Args &_args_fn10751,const V &_receiver_fn10751,const V &_self_fn10751) mutable ->V{
V _v_10752_ch;
_v_10752_ch=_args_fn10751[0];
return ([&]()->V{V _receiver10927=_v_10752_ch;V _method10928=this->_literals[3];V _method=j::get(_receiver10927,_method10928);j::Args _params10929=j::Args{V(0.0)};return j::call(_method,_params10929,_receiver10927);})();
return V{};
},1)};return j::call(_method,_params10932,_receiver10930);})();
_v_10753_steps=([&]()->V{V _logical10933=j::get(_v_10747_o,this->_literals[5]);return j::nullish(_logical10933)?V(16.0):_logical10933;})();
if(j::truth(([&]()->V{V _logical10934=([&]()->V{V _logical10935=j::unary("!",([&]()->V{V _receiver10936=j::builtin("Number");V _method10937=this->_literals[6];V _method=j::get(_receiver10936,_method10937);j::Args _params10938=j::Args{_v_10753_steps};return j::call(_method,_params10938,_receiver10936);})());return !j::truth(_logical10935)?([&]()->V{V _lhs10939=_v_10753_steps;V _rhs10940=V(1.0);return j::binary("<",_lhs10939,_rhs10940);})():_logical10935;})();return !j::truth(_logical10934)?([&]()->V{V _lhs10941=_v_10753_steps;V _rhs10942=V(64.0);return j::binary(">",_lhs10941,_rhs10942);})():_logical10934;})())){(void)(([&]()->V{V _callee10945=this->_v_10733_fail.get();return j::call(_callee10945,j::Args{([&]()->V{std::u16string _text10943;_text10943+=u"steps takes a whole number of colours from 1 to 64, not ";_text10943+=j::string(([&]()->V{V _callee10944=this->_v_10742_show.get();return j::call(_callee10944,j::Args{_v_10753_steps});})());_text10943+=u"";return V(std::move(_text10943));})()});})());
}
_v_10754_palette=V::null();
_v_10755_light=V::null();
_v_10756_dark=V::null();
if(j::truth(([&]()->V{V _lhs10946=j::get(_v_10747_o,this->_literals[7]);V _rhs10947=j::builtin("undefined");return V(!j::equal(_lhs10946,_rhs10947,true));})())){
V _v_10757_c;
_v_10757_c=([&]()->V{V _callee10948=this->_v_10732_colorsOf.get();return j::call(_callee10948,j::Args{j::get(_v_10747_o,this->_literals[7]),this->_literals[7]});})();
if(j::truth(([&]()->V{V _logical10949=j::unary("!",([&]()->V{V _receiver10950=j::builtin("Array");V _method10951=this->_literals[8];V _method=j::get(_receiver10950,_method10951);j::Args _params10952=j::Args{_v_10757_c};return j::call(_method,_params10952,_receiver10950);})());return j::truth(_logical10949)?([&]()->V{V _lhs10953=_v_10753_steps;V _rhs10954=V(32.0);return j::binary(">",_lhs10953,_rhs10954);})():_logical10949;})())){(void)(([&]()->V{V _callee10956=this->_v_10733_fail.get();return j::call(_callee10956,j::Args{([&]()->V{std::u16string _text10955;_text10955+=u"steps takes up to 32 when colors has a light and a dark list (64 colours in all), not ";_text10955+=j::string(_v_10753_steps);_text10955+=u"";return V(std::move(_text10955));})()});})());
}
(void)((_v_10754_palette=([&]()->V{V _callee10958=this->_v_10738_spread.get();return j::call(_callee10958,j::Args{_v_10757_c,_v_10753_steps});})()));
if(j::truth(([&]()->V{V _receiver10959=j::builtin("Array");V _method10960=this->_literals[8];V _method=j::get(_receiver10959,_method10960);j::Args _params10961=j::Args{_v_10754_palette};return j::call(_method,_params10961,_receiver10959);})())){(void)((_v_10755_light=(_v_10756_dark=_v_10754_palette)));
}else {(void)(([&]()->V{V _assign10964=_v_10754_palette;V _pattern10965=_assign10964;
_v_10755_light=j::get(_pattern10965,this->_literals[9]);
_v_10756_dark=j::get(_pattern10965,this->_literals[10]);
return _assign10964;})());
}

}

if(j::truth(([&]()->V{V _logical10966=([&]()->V{V _lhs10967=j::get(_v_10747_o,this->_literals[11]);V _rhs10968=j::builtin("undefined");return V(!j::equal(_lhs10967,_rhs10968,true));})();return j::truth(_logical10966)?([&]()->V{V _lhs10969=j::unary("typeof",j::get(_v_10747_o,this->_literals[11]));V _rhs10970=this->_literals[12];return V(!j::equal(_lhs10969,_rhs10970,true));})():_logical10966;})())){(void)(([&]()->V{V _callee10973=this->_v_10733_fail.get();return j::call(_callee10973,j::Args{([&]()->V{std::u16string _text10971;_text10971+=u"color takes a function of the value, x, y, t and the cell that returns a colour, such as (v) => (v > 0.5 ? 1 : 0), not ";_text10971+=j::string(([&]()->V{V _callee10972=this->_v_10742_show.get();return j::call(_callee10972,j::Args{j::get(_v_10747_o,this->_literals[11])});})());_text10971+=u"";return V(std::move(_text10971));})()});})());
}
if(j::truth(([&]()->V{V _logical10974=([&]()->V{V _lhs10975=j::get(_v_10747_o,this->_literals[13]);V _rhs10976=j::builtin("undefined");return V(!j::equal(_lhs10975,_rhs10976,true));})();return j::truth(_logical10974)?([&]()->V{V _lhs10977=j::unary("typeof",j::get(_v_10747_o,this->_literals[13]));V _rhs10978=this->_literals[14];return V(!j::equal(_lhs10977,_rhs10978,true));})():_logical10974;})())){(void)(([&]()->V{V _callee10981=this->_v_10733_fail.get();return j::call(_callee10981,j::Args{([&]()->V{std::u16string _text10979;_text10979+=u"dither takes true or false, not ";_text10979+=j::string(([&]()->V{V _callee10980=this->_v_10742_show.get();return j::call(_callee10980,j::Args{j::get(_v_10747_o,this->_literals[13])});})());_text10979+=u"";return V(std::move(_text10979));})()});})());
}
_v_10758_invert=([&]()->V{V _logical10982=j::get(_v_10747_o,this->_literals[15]);return j::nullish(_logical10982)?this->_literals[16]:_logical10982;})();
if(j::truth(([&]()->V{V _logical10983=([&]()->V{V _logical10984=([&]()->V{V _lhs10985=_v_10758_invert;V _rhs10986=V(true);return V(!j::equal(_lhs10985,_rhs10986,true));})();return j::truth(_logical10984)?([&]()->V{V _lhs10987=_v_10758_invert;V _rhs10988=V(false);return V(!j::equal(_lhs10987,_rhs10988,true));})():_logical10984;})();return j::truth(_logical10983)?([&]()->V{V _lhs10989=_v_10758_invert;V _rhs10990=this->_literals[16];return V(!j::equal(_lhs10989,_rhs10990,true));})():_logical10983;})())){(void)(([&]()->V{V _callee10993=this->_v_10733_fail.get();return j::call(_callee10993,j::Args{([&]()->V{std::u16string _text10991;_text10991+=u"invert takes true, false or \"auto\", not ";_text10991+=j::string(([&]()->V{V _callee10992=this->_v_10742_show.get();return j::call(_callee10992,j::Args{_v_10758_invert});})());_text10991+=u"";return V(std::move(_text10991));})()});})());
}
if(j::truth(([&]()->V{V _logical10994=([&]()->V{V _lhs10995=j::get(_v_10747_o,this->_literals[17]);V _rhs10996=j::builtin("undefined");return V(!j::equal(_lhs10995,_rhs10996,true));})();return j::truth(_logical10994)?([&]()->V{V _lhs10997=j::unary("typeof",j::get(_v_10747_o,this->_literals[17]));V _rhs10998=this->_literals[14];return V(!j::equal(_lhs10997,_rhs10998,true));})():_logical10994;})())){(void)(([&]()->V{V _callee11001=this->_v_10733_fail.get();return j::call(_callee11001,j::Args{([&]()->V{std::u16string _text10999;_text10999+=u"aspect takes true (circles round) or false (each axis -1 to 1), not ";_text10999+=j::string(([&]()->V{V _callee11000=this->_v_10742_show.get();return j::call(_callee11000,j::Args{j::get(_v_10747_o,this->_literals[17])});})());_text10999+=u"";return V(std::move(_text10999));})()});})());
}
_v_10759_gamma=([&]()->V{V _logical11002=j::get(_v_10747_o,this->_literals[18]);return j::nullish(_logical11002)?V(1.0):_logical11002;})();
if(j::truth(([&]()->V{V _logical11003=j::unary("!",([&]()->V{V _callee11004=this->_v_10739_finite.get();return j::call(_callee11004,j::Args{_v_10759_gamma});})());return !j::truth(_logical11003)?([&]()->V{V _lhs11005=_v_10759_gamma;V _rhs11006=V(0.0);return j::binary("<=",_lhs11005,_rhs11006);})():_logical11003;})())){(void)(([&]()->V{V _callee11009=this->_v_10733_fail.get();return j::call(_callee11009,j::Args{([&]()->V{std::u16string _text11007;_text11007+=u"gamma takes a number above 0, such as 1.5, not ";_text11007+=j::string(([&]()->V{V _callee11008=this->_v_10742_show.get();return j::call(_callee11008,j::Args{_v_10759_gamma});})());_text11007+=u"";return V(std::move(_text11007));})()});})());
}
_v_10760_range=([&]()->V{V _logical11010=j::get(_v_10747_o,this->_literals[19]);return j::nullish(_logical11010)?([&]()->V{j::Args _array11011;_array11011.push_back(V(0.0));_array11011.push_back(V(1.0));return j::array(std::move(_array11011));})():_logical11010;})();
if(j::truth(([&]()->V{V _logical11012=([&]()->V{V _logical11013=([&]()->V{V _logical11014=([&]()->V{V _logical11015=j::unary("!",([&]()->V{V _receiver11016=j::builtin("Array");V _method11017=this->_literals[8];V _method=j::get(_receiver11016,_method11017);j::Args _params11018=j::Args{_v_10760_range};return j::call(_method,_params11018,_receiver11016);})());return !j::truth(_logical11015)?([&]()->V{V _lhs11019=j::get(_v_10760_range,this->_literals[20]);V _rhs11020=V(2.0);return V(!j::equal(_lhs11019,_rhs11020,true));})():_logical11015;})();return !j::truth(_logical11014)?j::unary("!",([&]()->V{V _callee11021=this->_v_10739_finite.get();return j::call(_callee11021,j::Args{j::get(_v_10760_range,V(0.0))});})()):_logical11014;})();return !j::truth(_logical11013)?j::unary("!",([&]()->V{V _callee11022=this->_v_10739_finite.get();return j::call(_callee11022,j::Args{j::get(_v_10760_range,V(1.0))});})()):_logical11013;})();return !j::truth(_logical11012)?([&]()->V{V _lhs11023=j::get(_v_10760_range,V(0.0));V _rhs11024=j::get(_v_10760_range,V(1.0));return V(j::equal(_lhs11023,_rhs11024,true));})():_logical11012;})())){(void)(([&]()->V{V _callee11027=this->_v_10733_fail.get();return j::call(_callee11027,j::Args{([&]()->V{std::u16string _text11025;_text11025+=u"range takes the lowest and highest values the function returns, two different numbers such as [-1, 1], not ";_text11025+=j::string(([&]()->V{V _callee11026=this->_v_10742_show.get();return j::call(_callee11026,j::Args{_v_10760_range});})());_text11025+=u"";return V(std::move(_text11025));})()});})());
}
_v_10761_region=j::get(_v_10747_o,this->_literals[21]);
if(j::truth(([&]()->V{V _logical11028=([&]()->V{V _lhs11029=_v_10761_region;V _rhs11030=j::builtin("undefined");return V(!j::equal(_lhs11029,_rhs11030,true));})();return j::truth(_logical11028)?([&]()->V{V _logical11031=([&]()->V{V _logical11032=([&]()->V{V _lhs11033=_v_10761_region;V _rhs11034=V::null();return V(j::equal(_lhs11033,_rhs11034,true));})();return !j::truth(_logical11032)?([&]()->V{V _lhs11035=j::unary("typeof",_v_10761_region);V _rhs11036=this->_literals[0];return V(!j::equal(_lhs11035,_rhs11036,true));})():_logical11032;})();return !j::truth(_logical11031)?j::unary("!",([&]()->V{V _receiver11037=([&]()->V{j::Args _array11040;_array11040.push_back(j::get(_v_10761_region,this->_literals[22]));_array11040.push_back(j::get(_v_10761_region,this->_literals[23]));_array11040.push_back(j::get(_v_10761_region,this->_literals[24]));_array11040.push_back(j::get(_v_10761_region,this->_literals[25]));return j::array(std::move(_array11040));})();V _method11038=this->_literals[26];V _method=j::get(_receiver11037,_method11038);j::Args _params11039=j::Args{this->_v_10739_finite.get()};return j::call(_method,_params11039,_receiver11037);})()):_logical11031;})():_logical11028;})())){(void)(([&]()->V{V _callee11043=this->_v_10733_fail.get();return j::call(_callee11043,j::Args{([&]()->V{std::u16string _text11041;_text11041+=u"region takes { x, y, cols, rows } in cells, all numbers, not ";_text11041+=j::string(([&]()->V{V _callee11042=this->_v_10742_show.get();return j::call(_callee11042,j::Args{_v_10761_region});})());_text11041+=u"";return V(std::move(_text11041));})()});})());
}
_v_10762_period=j::get(_v_10747_o,this->_literals[27]);
if(j::truth(([&]()->V{V _logical11044=([&]()->V{V _lhs11045=_v_10762_period;V _rhs11046=j::builtin("undefined");return V(!j::equal(_lhs11045,_rhs11046,true));})();return j::truth(_logical11044)?j::unary("!",([&]()->V{V _logical11047=([&]()->V{V _callee11048=this->_v_10739_finite.get();return j::call(_callee11048,j::Args{_v_10762_period});})();return j::truth(_logical11047)?([&]()->V{V _lhs11049=_v_10762_period;V _rhs11050=V(0.0);return j::binary(">",_lhs11049,_rhs11050);})():_logical11047;})()):_logical11044;})())){(void)(([&]()->V{V _callee11053=this->_v_10733_fail.get();return j::call(_callee11053,j::Args{([&]()->V{std::u16string _text11051;_text11051+=u"period takes the field's loop in seconds, a number above 0, not ";_text11051+=j::string(([&]()->V{V _callee11052=this->_v_10742_show.get();return j::call(_callee11052,j::Args{_v_10762_period});})());_text11051+=u"";return V(std::move(_text11051));})()});})());
}
return ([&]()->V{V _obj11054=j::object();j::put(_obj11054,this->_literals[28],_v_10750_codes);j::put(_obj11054,this->_literals[15],_v_10758_invert);j::put(_obj11054,this->_literals[13],([&]()->V{V _logical11055=j::get(_v_10747_o,this->_literals[13]);return j::nullish(_logical11055)?V(false):_logical11055;})());j::put(_obj11054,this->_literals[17],([&]()->V{V _logical11056=j::get(_v_10747_o,this->_literals[17]);return j::nullish(_logical11056)?V(true):_logical11056;})());j::put(_obj11054,this->_literals[18],_v_10759_gamma);j::put(_obj11054,this->_literals[29],j::get(_v_10760_range,V(0.0)));j::put(_obj11054,this->_literals[30],([&]()->V{V _lhs11057=V(1.0);V _rhs11058=([&]()->V{V _lhs11059=j::get(_v_10760_range,V(1.0));V _rhs11060=j::get(_v_10760_range,V(0.0));return V(j::number(_lhs11059)-j::number(_rhs11060));})();return V(j::number(_lhs11057)/j::number(_rhs11058));})());j::put(_obj11054,this->_literals[21],([&]()->V{V _logical11061=_v_10761_region;return j::truth(_logical11061)?([&]()->V{V _obj11062=j::object();j::put(_obj11062,this->_literals[22],j::get(_v_10761_region,this->_literals[22]));j::put(_obj11062,this->_literals[23],j::get(_v_10761_region,this->_literals[23]));j::put(_obj11062,this->_literals[24],j::get(_v_10761_region,this->_literals[24]));j::put(_obj11062,this->_literals[25],j::get(_v_10761_region,this->_literals[25]));return _obj11062;})():_logical11061;})());j::put(_obj11054,this->_literals[27],([&]()->V{V _logical11063=_v_10762_period;return j::nullish(_logical11063)?V(0.0):_logical11063;})());j::put(_obj11054,this->_literals[5],_v_10753_steps);j::put(_obj11054,this->_literals[31],_v_10754_palette);j::put(_obj11054,this->_literals[9],_v_10755_light);j::put(_obj11054,this->_literals[10],_v_10756_dark);j::put(_obj11054,this->_literals[11],j::get(_v_10747_o,this->_literals[11]));j::put(_obj11054,this->_literals[32],([&]()->V{j::Args _array11064;_array11064.push_back(([&]()->V{V _callee11065=j::builtin("Uint8Array");return j::construct(_callee11065,j::Args{_v_10753_steps});})());_array11064.push_back(([&]()->V{V _callee11066=j::builtin("Uint8Array");return j::construct(_callee11066,j::Args{_v_10753_steps});})());return j::array(std::move(_array11064));})());j::put(_obj11054,this->_literals[33],([&]()->V{j::Args _array11067;_array11067.push_back(V::null());_array11067.push_back(V::null());return j::array(std::move(_array11067));})());return _obj11054;})();

}

return V{};
},2);
this->_v_10776_geometry.get()=j::function([=](const j::Args &_args_fn10777,const V &_receiver_fn10777,const V &_self_fn10777) mutable ->V{
V _v_10778_s;
V _v_10779_x0;
V _v_10780_y0;
V _v_10781_cols;
V _v_10782_rows;
V _v_10783_aspect;
_v_10778_s=_args_fn10777[0];
_v_10779_x0=_args_fn10777[1];
_v_10780_y0=_args_fn10777[2];
_v_10781_cols=_args_fn10777[3];
_v_10782_rows=_args_fn10777[4];
_v_10783_aspect=_args_fn10777[5];
{
V _v_10784_c0;
V _v_10785_c1;
V _v_10786_r0;
V _v_10787_r1;
V _v_10788_key;
V _v_10789_list;
V _v_10791_w;
V _v_10792_h;
V _v_10793_k;
V _v_10794_half;
V _v_10795_width;
V _v_10796_height;
V _v_10797_g;
_v_10784_c0=([&]()->V{V _receiver11070=j::builtin("Math");V _method11071=this->_literals[34];V _method=j::get(_receiver11070,_method11071);j::Args _params11072=j::Args{V(0.0),j::unary("-",_v_10779_x0)};return j::call(_method,_params11072,_receiver11070);})();
_v_10785_c1=([&]()->V{V _receiver11077=j::builtin("Math");V _method11078=this->_literals[35];V _method=j::get(_receiver11077,_method11078);j::Args _params11079=j::Args{_v_10781_cols,([&]()->V{V _lhs11073=j::get(_v_10778_s,this->_literals[24]);V _rhs11074=_v_10779_x0;return V(j::number(_lhs11073)-j::number(_rhs11074));})()};return j::call(_method,_params11079,_receiver11077);})();
_v_10786_r0=([&]()->V{V _receiver11082=j::builtin("Math");V _method11083=this->_literals[34];V _method=j::get(_receiver11082,_method11083);j::Args _params11084=j::Args{V(0.0),j::unary("-",_v_10780_y0)};return j::call(_method,_params11084,_receiver11082);})();
_v_10787_r1=([&]()->V{V _receiver11089=j::builtin("Math");V _method11090=this->_literals[35];V _method=j::get(_receiver11089,_method11090);j::Args _params11091=j::Args{_v_10782_rows,([&]()->V{V _lhs11085=j::get(_v_10778_s,this->_literals[25]);V _rhs11086=_v_10780_y0;return V(j::number(_lhs11085)-j::number(_rhs11086));})()};return j::call(_method,_params11091,_receiver11089);})();
if(j::truth(([&]()->V{V _logical11092=([&]()->V{V _lhs11093=_v_10784_c0;V _rhs11094=_v_10785_c1;return j::binary(">=",_lhs11093,_rhs11094);})();return !j::truth(_logical11092)?([&]()->V{V _lhs11095=_v_10786_r0;V _rhs11096=_v_10787_r1;return j::binary(">=",_lhs11095,_rhs11096);})():_logical11092;})())){return V::null();
}
_v_10788_key=([&]()->V{std::u16string _text11097;_text11097+=u"";_text11097+=j::string(_v_10779_x0);_text11097+=u" ";_text11097+=j::string(_v_10780_y0);_text11097+=u" ";_text11097+=j::string(_v_10781_cols);_text11097+=u" ";_text11097+=j::string(_v_10782_rows);_text11097+=u" ";_text11097+=j::string((j::truth(_v_10783_aspect)?V(1.0):V(0.0)));_text11097+=u" ";_text11097+=j::string(j::get(_v_10778_s,this->_literals[17]));_text11097+=u"";return V(std::move(_text11097));})();
_v_10789_list=([&]()->V{V _receiver11098=this->_v_10763_geometries.get();V _method11099=this->_literals[36];V _method=j::get(_receiver11098,_method11099);j::Args _params11100=j::Args{_v_10778_s};return j::call(_method,_params11100,_receiver11098);})();
if(j::truth(j::unary("!",_v_10789_list))){(void)(([&]()->V{V _receiver11103=this->_v_10763_geometries.get();V _method11104=this->_literals[37];V _method=j::get(_receiver11103,_method11104);j::Args _params11105=j::Args{_v_10778_s,(_v_10789_list=([&]()->V{j::Args _array11102;return j::array(std::move(_array11102));})())};return j::call(_method,_params11105,_receiver11103);})());
}
{for(const auto &_item11106:j::elements(_v_10789_list)){V _v_10790_g;
_v_10790_g=_item11106;
if(j::truth(([&]()->V{V _lhs11107=j::get(_v_10790_g,this->_literals[38]);V _rhs11108=_v_10788_key;return V(j::equal(_lhs11107,_rhs11108,true));})())){return _v_10790_g;
}
}}
_v_10791_w=([&]()->V{V _lhs11109=_v_10785_c1;V _rhs11110=_v_10784_c0;return V(j::number(_lhs11109)-j::number(_rhs11110));})();
_v_10792_h=([&]()->V{V _lhs11111=_v_10787_r1;V _rhs11112=_v_10786_r0;return V(j::number(_lhs11111)-j::number(_rhs11112));})();
_v_10793_k=j::get(_v_10778_s,this->_literals[17]);
_v_10794_half=([&]()->V{V _callee11113=this->_v_10765_unitOf.get();return j::call(_callee11113,j::Args{_v_10781_cols,_v_10782_rows,_v_10793_k});})();
V _pattern11115=([&]()->V{V _callee11114=this->_v_10770_extent.get();return j::call(_callee11114,j::Args{_v_10781_cols,_v_10782_rows,_v_10793_k,_v_10783_aspect});})();
_v_10795_width=j::get(_pattern11115,V(0));
_v_10796_height=j::get(_pattern11115,V(1));
_v_10797_g=([&]()->V{V _obj11116=j::object();j::put(_obj11116,this->_literals[38],_v_10788_key);j::put(_obj11116,this->_literals[39],_v_10784_c0);j::put(_obj11116,this->_literals[40],_v_10785_c1);j::put(_obj11116,this->_literals[41],_v_10786_r0);j::put(_obj11116,this->_literals[42],_v_10787_r1);j::put(_obj11116,this->_literals[43],_v_10795_width);j::put(_obj11116,this->_literals[44],_v_10796_height);j::put(_obj11116,this->_literals[22],([&]()->V{V _callee11117=j::builtin("Float64Array");return j::construct(_callee11117,j::Args{_v_10791_w});})());j::put(_obj11116,this->_literals[45],([&]()->V{V _callee11118=j::builtin("Float64Array");return j::construct(_callee11118,j::Args{_v_10791_w});})());j::put(_obj11116,this->_literals[23],([&]()->V{V _callee11119=j::builtin("Float64Array");return j::construct(_callee11119,j::Args{_v_10792_h});})());j::put(_obj11116,this->_literals[46],([&]()->V{V _callee11120=j::builtin("Float64Array");return j::construct(_callee11120,j::Args{_v_10792_h});})());j::put(_obj11116,this->_literals[47],([&]()->V{V _callee11123=j::builtin("Float64Array");return j::construct(_callee11123,j::Args{([&]()->V{V _lhs11121=_v_10791_w;V _rhs11122=_v_10792_h;return V(j::number(_lhs11121)*j::number(_rhs11122));})()});})());j::put(_obj11116,this->_literals[48],([&]()->V{V _callee11126=j::builtin("Float64Array");return j::construct(_callee11126,j::Args{([&]()->V{V _lhs11124=_v_10791_w;V _rhs11125=_v_10792_h;return V(j::number(_lhs11124)*j::number(_rhs11125));})()});})());return _obj11116;})();
{V _v_10798_c;
_v_10798_c=_v_10784_c0;
for(;j::truth(([&]()->V{V _lhs11127=_v_10798_c;V _rhs11128=_v_10785_c1;return j::binary("<",_lhs11127,_rhs11128);})());(void)(j::increment(_v_10798_c,1,false))){
(void)(([&]()->V{V _base11130=j::get(_v_10797_g,this->_literals[22]);V _key11131=([&]()->V{V _lhs11132=_v_10798_c;V _rhs11133=_v_10784_c0;return V(j::number(_lhs11132)-j::number(_rhs11133));})();V _assign11129=(j::truth(_v_10783_aspect)?([&]()->V{V _lhs11134=([&]()->V{V _lhs11136=([&]()->V{V _lhs11138=_v_10798_c;V _rhs11139=V(0.5);return j::binary("+",_lhs11138,_rhs11139);})();V _rhs11137=([&]()->V{V _lhs11140=_v_10781_cols;V _rhs11141=V(2.0);return V(j::number(_lhs11140)/j::number(_rhs11141));})();return V(j::number(_lhs11136)-j::number(_rhs11137));})();V _rhs11135=_v_10794_half;return V(j::number(_lhs11134)/j::number(_rhs11135));})():([&]()->V{V _lhs11142=([&]()->V{V _lhs11144=([&]()->V{V _lhs11146=([&]()->V{V _lhs11148=_v_10798_c;V _rhs11149=V(0.5);return j::binary("+",_lhs11148,_rhs11149);})();V _rhs11147=_v_10781_cols;return V(j::number(_lhs11146)/j::number(_rhs11147));})();V _rhs11145=V(2.0);return V(j::number(_lhs11144)*j::number(_rhs11145));})();V _rhs11143=V(1.0);return V(j::number(_lhs11142)-j::number(_rhs11143));})());return j::put(_base11130,_key11131,_assign11129);})());
(void)(([&]()->V{V _base11151=j::get(_v_10797_g,this->_literals[45]);V _key11152=([&]()->V{V _lhs11153=_v_10798_c;V _rhs11154=_v_10784_c0;return V(j::number(_lhs11153)-j::number(_rhs11154));})();V _assign11150=([&]()->V{V _lhs11155=([&]()->V{V _lhs11157=_v_10798_c;V _rhs11158=V(0.5);return j::binary("+",_lhs11157,_rhs11158);})();V _rhs11156=_v_10781_cols;return V(j::number(_lhs11155)/j::number(_rhs11156));})();return j::put(_base11151,_key11152,_assign11150);})());

}
}
{V _v_10799_r;
_v_10799_r=_v_10786_r0;
for(;j::truth(([&]()->V{V _lhs11159=_v_10799_r;V _rhs11160=_v_10787_r1;return j::binary("<",_lhs11159,_rhs11160);})());(void)(j::increment(_v_10799_r,1,false))){
(void)(([&]()->V{V _base11162=j::get(_v_10797_g,this->_literals[23]);V _key11163=([&]()->V{V _lhs11164=_v_10799_r;V _rhs11165=_v_10786_r0;return V(j::number(_lhs11164)-j::number(_rhs11165));})();V _assign11161=(j::truth(_v_10783_aspect)?([&]()->V{V _lhs11166=([&]()->V{V _lhs11168=([&]()->V{V _lhs11170=([&]()->V{V _lhs11172=_v_10799_r;V _rhs11173=V(0.5);return j::binary("+",_lhs11172,_rhs11173);})();V _rhs11171=([&]()->V{V _lhs11174=_v_10782_rows;V _rhs11175=V(2.0);return V(j::number(_lhs11174)/j::number(_rhs11175));})();return V(j::number(_lhs11170)-j::number(_rhs11171));})();V _rhs11169=_v_10793_k;return V(j::number(_lhs11168)*j::number(_rhs11169));})();V _rhs11167=_v_10794_half;return V(j::number(_lhs11166)/j::number(_rhs11167));})():([&]()->V{V _lhs11176=([&]()->V{V _lhs11178=([&]()->V{V _lhs11180=([&]()->V{V _lhs11182=_v_10799_r;V _rhs11183=V(0.5);return j::binary("+",_lhs11182,_rhs11183);})();V _rhs11181=_v_10782_rows;return V(j::number(_lhs11180)/j::number(_rhs11181));})();V _rhs11179=V(2.0);return V(j::number(_lhs11178)*j::number(_rhs11179));})();V _rhs11177=V(1.0);return V(j::number(_lhs11176)-j::number(_rhs11177));})());return j::put(_base11162,_key11163,_assign11161);})());
(void)(([&]()->V{V _base11185=j::get(_v_10797_g,this->_literals[46]);V _key11186=([&]()->V{V _lhs11187=_v_10799_r;V _rhs11188=_v_10786_r0;return V(j::number(_lhs11187)-j::number(_rhs11188));})();V _assign11184=([&]()->V{V _lhs11189=([&]()->V{V _lhs11191=_v_10799_r;V _rhs11192=V(0.5);return j::binary("+",_lhs11191,_rhs11192);})();V _rhs11190=_v_10782_rows;return V(j::number(_lhs11189)/j::number(_rhs11190));})();return j::put(_base11185,_key11186,_assign11184);})());

}
}
{V _v_10800_j;
V _v_10801_i;
_v_10800_j=V(0.0);
_v_10801_i=V(0.0);
for(;j::truth(([&]()->V{V _lhs11193=_v_10800_j;V _rhs11194=_v_10792_h;return j::binary("<",_lhs11193,_rhs11194);})());(void)(j::increment(_v_10800_j,1,false))){{V _v_10802_c;
_v_10802_c=V(0.0);
for(;j::truth(([&]()->V{V _lhs11195=_v_10802_c;V _rhs11196=_v_10791_w;return j::binary("<",_lhs11195,_rhs11196);})());(void)((j::increment(_v_10802_c,1,false),j::increment(_v_10801_i,1,false)))){
(void)(([&]()->V{V _base11198=j::get(_v_10797_g,this->_literals[47]);V _key11199=_v_10801_i;V _assign11197=([&]()->V{V _number11200=j::get(j::get(_v_10797_g,this->_literals[22]),_v_10802_c);V _number11201=j::get(j::get(_v_10797_g,this->_literals[23]),_v_10800_j);return V(std::hypot(j::number(_number11200),j::number(_number11201)));})();return j::put(_base11198,_key11199,_assign11197);})());
(void)(([&]()->V{V _base11203=j::get(_v_10797_g,this->_literals[48]);V _key11204=_v_10801_i;V _assign11202=([&]()->V{V _number11205=j::get(j::get(_v_10797_g,this->_literals[23]),_v_10800_j);V _number11206=j::get(j::get(_v_10797_g,this->_literals[22]),_v_10802_c);return V(std::atan2(j::number(_number11205),j::number(_number11206)));})();return j::put(_base11203,_key11204,_assign11202);})());

}
}
}}
(void)(([&]()->V{V _receiver11207=_v_10789_list;V _method11208=this->_literals[49];V _method=j::get(_receiver11207,_method11208);j::Args _params11209=j::Args{_v_10797_g};return j::call(_method,_params11209,_receiver11207);})());
if(j::truth(([&]()->V{V _lhs11210=j::get(_v_10789_list,this->_literals[20]);V _rhs11211=this->_v_10764_KEEP.get();return j::binary(">",_lhs11210,_rhs11211);})())){(void)(([&]()->V{V _receiver11212=_v_10789_list;V _method11213=this->_literals[50];V _method=j::get(_receiver11212,_method11213);j::Args _params11214=j::Args{};return j::call(_method,_params11214,_receiver11212);})());
}
return _v_10797_g;

}

return V{};
},6);
this->_v_10803_lutOf.get()=j::function([=](const j::Args &_args_fn10804,const V &_receiver_fn10804,const V &_self_fn10804) mutable ->V{
V _v_10805_s;
V _v_10806_p;
_v_10805_s=_args_fn10804[0];
_v_10806_p=_args_fn10804[1];
{
V _v_10807_side;
V _v_10808_palette;
V _v_10809_lut;
_v_10807_side=(j::truth(j::get(_v_10805_s,this->_literals[51]))?V(1.0):V(0.0));
_v_10808_palette=j::get(_v_10805_s,this->_literals[31]);
_v_10809_lut=j::get(j::get(_v_10806_p,this->_literals[32]),_v_10807_side);
if(j::truth(([&]()->V{V _lhs11215=j::get(j::get(_v_10806_p,this->_literals[33]),_v_10807_side);V _rhs11216=_v_10808_palette;return V(!j::equal(_lhs11215,_rhs11216,true));})())){
V _v_10810_list;
_v_10810_list=(j::truth(j::get(_v_10805_s,this->_literals[51]))?j::get(_v_10806_p,this->_literals[9]):j::get(_v_10806_p,this->_literals[10]));
{V _v_10811_k;
_v_10811_k=V(0.0);
for(;j::truth(([&]()->V{V _lhs11217=_v_10811_k;V _rhs11218=j::get(_v_10806_p,this->_literals[5]);return j::binary("<",_lhs11217,_rhs11218);})());(void)(j::increment(_v_10811_k,1,false))){(void)(([&]()->V{V _base11220=_v_10809_lut;V _key11221=_v_10811_k;V _assign11219=([&]()->V{V _receiver11222=_v_10808_palette;V _method11223=this->_literals[52];V _method=j::get(_receiver11222,_method11223);j::Args _params11224=j::Args{j::get(_v_10810_list,_v_10811_k),j::get(_v_10805_s,this->_literals[51])};return j::call(_method,_params11224,_receiver11222);})();return j::put(_base11220,_key11221,_assign11219);})());
}}
(void)(([&]()->V{V _base11226=j::get(_v_10806_p,this->_literals[33]);V _key11227=_v_10807_side;V _assign11225=_v_10808_palette;return j::put(_base11226,_key11227,_assign11225);})());

}

return _v_10809_lut;

}

return V{};
},2);
this->_v_10812_paint.get()=j::function([=](const j::Args &_args_fn10813,const V &_receiver_fn10813,const V &_self_fn10813) mutable ->V{
V _v_10814_s;
V _v_10815_fn;
V _v_10816_t;
V _v_10817_p;
V _v_10818_at;
_v_10814_s=_args_fn10813[0];
_v_10815_fn=_args_fn10813[1];
_v_10816_t=_args_fn10813[2];
_v_10817_p=_args_fn10813[3];
_v_10818_at=_args_fn10813[4];
{
V _v_10819_R;
V _v_10820_x0;
V _v_10821_y0;
V _v_10822_cols;
V _v_10823_rows;
V _v_10824_g;
V _v_10825_codes;
V _v_10826_steps;
V _v_10827_lo;
V _v_10828_scale;
V _v_10829_gamma;
V _v_10830_dither;
V _v_10831_n;
V _v_10832_flip;
V _v_10833_shown;
V _v_10834_byFn;
V _v_10835_lut;
V _v_10836_chars;
V _v_10837_colors;
V _v_10838_w;
_v_10819_R=j::get(_v_10817_p,this->_literals[21]);
_v_10820_x0=(j::truth(_v_10819_R)?([&]()->V{V _number11228=j::get(_v_10819_R,this->_literals[22]);return V(std::floor(j::number(_number11228)));})():V(0.0));
_v_10821_y0=(j::truth(_v_10819_R)?([&]()->V{V _number11229=j::get(_v_10819_R,this->_literals[23]);return V(std::floor(j::number(_number11229)));})():V(0.0));
_v_10822_cols=(j::truth(_v_10819_R)?([&]()->V{V _number11230=j::get(_v_10819_R,this->_literals[24]);return V(std::floor(j::number(_number11230)));})():j::get(_v_10814_s,this->_literals[24]));
_v_10823_rows=(j::truth(_v_10819_R)?([&]()->V{V _number11231=j::get(_v_10819_R,this->_literals[25]);return V(std::floor(j::number(_number11231)));})():j::get(_v_10814_s,this->_literals[25]));
if(j::truth(([&]()->V{V _logical11232=([&]()->V{V _lhs11233=_v_10822_cols;V _rhs11234=V(1.0);return j::binary("<",_lhs11233,_rhs11234);})();return !j::truth(_logical11232)?([&]()->V{V _lhs11235=_v_10823_rows;V _rhs11236=V(1.0);return j::binary("<",_lhs11235,_rhs11236);})():_logical11232;})())){return V{};
}
_v_10824_g=([&]()->V{V _callee11237=this->_v_10776_geometry.get();return j::call(_callee11237,j::Args{_v_10814_s,_v_10820_x0,_v_10821_y0,_v_10822_cols,_v_10823_rows,j::get(_v_10817_p,this->_literals[17])});})();
if(j::truth(j::unary("!",_v_10824_g))){return V{};
}
V _pattern11238=_v_10817_p;
_v_10825_codes=j::get(_pattern11238,this->_literals[28]);
_v_10826_steps=j::get(_pattern11238,this->_literals[5]);
_v_10827_lo=j::get(_pattern11238,this->_literals[29]);
_v_10828_scale=j::get(_pattern11238,this->_literals[30]);
_v_10829_gamma=j::get(_pattern11238,this->_literals[18]);
_v_10830_dither=j::get(_pattern11238,this->_literals[13]);
_v_10831_n=j::get(_v_10825_codes,this->_literals[20]);
_v_10832_flip=(j::truth(([&]()->V{V _lhs11239=j::get(_v_10817_p,this->_literals[15]);V _rhs11240=this->_literals[16];return V(j::equal(_lhs11239,_rhs11240,true));})())?j::get(_v_10814_s,this->_literals[51]):j::get(_v_10817_p,this->_literals[15]));
_v_10833_shown=([&]()->V{V _logical11241=j::unary("!",j::get(_v_10814_s,this->_literals[53]));return j::truth(_logical11241)?([&]()->V{V _lhs11242=j::get(_v_10814_s,this->_literals[31]);V _rhs11243=V::null();return V(!j::equal(_lhs11242,_rhs11243,true));})():_logical11241;})();
_v_10834_byFn=(j::truth(([&]()->V{V _logical11244=_v_10833_shown;return j::truth(_logical11244)?j::get(_v_10817_p,this->_literals[11]):_logical11244;})())?j::get(_v_10817_p,this->_literals[11]):V::null());
_v_10835_lut=(j::truth(([&]()->V{V _logical11245=([&]()->V{V _logical11246=_v_10833_shown;return j::truth(_logical11246)?j::unary("!",_v_10834_byFn):_logical11246;})();return j::truth(_logical11245)?j::get(_v_10817_p,this->_literals[9]):_logical11245;})())?([&]()->V{V _callee11247=this->_v_10803_lutOf.get();return j::call(_callee11247,j::Args{_v_10814_s,_v_10817_p});})():V::null());
V _pattern11248=_v_10814_s;
_v_10836_chars=j::get(_pattern11248,this->_literals[54]);
_v_10837_colors=j::get(_pattern11248,this->_literals[7]);
_v_10838_w=([&]()->V{V _lhs11249=j::get(_v_10824_g,this->_literals[40]);V _rhs11250=j::get(_v_10824_g,this->_literals[39]);return V(j::number(_lhs11249)-j::number(_rhs11250));})();
(void)(([&]()->V{V _base11252=_v_10818_at;V _key11253=this->_literals[24];V _assign11251=_v_10822_cols;return j::put(_base11252,_key11253,_assign11251);})());
(void)(([&]()->V{V _base11255=_v_10818_at;V _key11256=this->_literals[25];V _assign11254=_v_10823_rows;return j::put(_base11255,_key11256,_assign11254);})());
(void)(([&]()->V{V _base11258=_v_10818_at;V _key11259=this->_literals[43];V _assign11257=j::get(_v_10824_g,this->_literals[43]);return j::put(_base11258,_key11259,_assign11257);})());
(void)(([&]()->V{V _base11261=_v_10818_at;V _key11262=this->_literals[44];V _assign11260=j::get(_v_10824_g,this->_literals[44]);return j::put(_base11261,_key11262,_assign11260);})());
(void)(([&]()->V{V _base11264=_v_10818_at;V _key11265=this->_literals[55];V _assign11263=(j::truth(j::get(_v_10817_p,this->_literals[27]))?([&]()->V{V _callee11268=this->_v_10734_fract.get();return j::call(_callee11268,j::Args{([&]()->V{V _lhs11266=_v_10816_t;V _rhs11267=j::get(_v_10817_p,this->_literals[27]);return V(j::number(_lhs11266)/j::number(_rhs11267));})()});})():V(0.0));return j::put(_base11264,_key11265,_assign11263);})());
(void)(([&]()->V{V _base11270=_v_10818_at;V _key11271=this->_literals[56];V _assign11269=([&]()->V{V _base11273=_v_10818_at;V _key11274=this->_literals[11];V _assign11272=j::builtin("undefined");return j::put(_base11273,_key11274,_assign11272);})();return j::put(_base11270,_key11271,_assign11269);})());
{V _v_10839_r;
_v_10839_r=j::get(_v_10824_g,this->_literals[41]);
for(;j::truth(([&]()->V{V _lhs11275=_v_10839_r;V _rhs11276=j::get(_v_10824_g,this->_literals[42]);return j::binary("<",_lhs11275,_rhs11276);})());(void)(j::increment(_v_10839_r,1,false))){
V _v_10840_j;
V _v_10841_y;
V _v_10842_sy;
_v_10840_j=([&]()->V{V _lhs11277=_v_10839_r;V _rhs11278=j::get(_v_10824_g,this->_literals[41]);return V(j::number(_lhs11277)-j::number(_rhs11278));})();
_v_10841_y=j::get(j::get(_v_10824_g,this->_literals[23]),_v_10840_j);
_v_10842_sy=([&]()->V{V _lhs11279=_v_10821_y0;V _rhs11280=_v_10839_r;return j::binary("+",_lhs11279,_rhs11280);})();
(void)(([&]()->V{V _base11282=_v_10818_at;V _key11283=this->_literals[57];V _assign11281=_v_10839_r;return j::put(_base11282,_key11283,_assign11281);})());
(void)(([&]()->V{V _base11285=_v_10818_at;V _key11286=this->_literals[46];V _assign11284=j::get(j::get(_v_10824_g,this->_literals[46]),_v_10840_j);return j::put(_base11285,_key11286,_assign11284);})());
{V _v_10843_c;
V _v_10844_i;
_v_10843_c=j::get(_v_10824_g,this->_literals[39]);
_v_10844_i=([&]()->V{V _lhs11287=_v_10840_j;V _rhs11288=_v_10838_w;return V(j::number(_lhs11287)*j::number(_rhs11288));})();
for(;j::truth(([&]()->V{V _lhs11289=_v_10843_c;V _rhs11290=j::get(_v_10824_g,this->_literals[40]);return j::binary("<",_lhs11289,_rhs11290);})());(void)((j::increment(_v_10843_c,1,false),j::increment(_v_10844_i,1,false)))){
V _v_10845_x;
V _v_10846_sx;
V _v_10847_got;
V _v_10848_own;
V _v_10849_tint;
V _v_10850_v;
V _v_10851_ink;
V _v_10852_jitter;
V _v_10853_ch;
V _v_10855_cell;
_v_10845_x=j::get(j::get(_v_10824_g,this->_literals[22]),([&]()->V{V _lhs11291=_v_10843_c;V _rhs11292=j::get(_v_10824_g,this->_literals[39]);return V(j::number(_lhs11291)-j::number(_rhs11292));})());
_v_10846_sx=([&]()->V{V _lhs11293=_v_10820_x0;V _rhs11294=_v_10843_c;return j::binary("+",_lhs11293,_rhs11294);})();
(void)(([&]()->V{V _base11296=_v_10818_at;V _key11297=this->_literals[58];V _assign11295=_v_10843_c;return j::put(_base11296,_key11297,_assign11295);})());
(void)(([&]()->V{V _base11299=_v_10818_at;V _key11300=this->_literals[45];V _assign11298=j::get(j::get(_v_10824_g,this->_literals[45]),([&]()->V{V _lhs11301=_v_10843_c;V _rhs11302=j::get(_v_10824_g,this->_literals[39]);return V(j::number(_lhs11301)-j::number(_rhs11302));})());return j::put(_base11299,_key11300,_assign11298);})());
(void)(([&]()->V{V _base11304=_v_10818_at;V _key11305=this->_literals[47];V _assign11303=j::get(j::get(_v_10824_g,this->_literals[47]),_v_10844_i);return j::put(_base11304,_key11305,_assign11303);})());
(void)(([&]()->V{V _base11307=_v_10818_at;V _key11308=this->_literals[48];V _assign11306=j::get(j::get(_v_10824_g,this->_literals[48]),_v_10844_i);return j::put(_base11307,_key11308,_assign11306);})());
_v_10847_got=([&]()->V{V _callee11309=_v_10815_fn;return j::call(_callee11309,j::Args{_v_10845_x,_v_10841_y,_v_10816_t,_v_10818_at});})();
_v_10848_own=j::get(_v_10818_at,this->_literals[56]);
_v_10849_tint=j::get(_v_10818_at,this->_literals[11]);
if(j::truth(([&]()->V{V _lhs11310=_v_10848_own;V _rhs11311=j::builtin("undefined");return V(!j::equal(_lhs11310,_rhs11311,true));})())){(void)(([&]()->V{V _base11313=_v_10818_at;V _key11314=this->_literals[56];V _assign11312=j::builtin("undefined");return j::put(_base11313,_key11314,_assign11312);})());
}
if(j::truth(([&]()->V{V _lhs11315=_v_10849_tint;V _rhs11316=j::builtin("undefined");return V(!j::equal(_lhs11315,_rhs11316,true));})())){(void)(([&]()->V{V _base11318=_v_10818_at;V _key11319=this->_literals[11];V _assign11317=j::builtin("undefined");return j::put(_base11318,_key11319,_assign11317);})());
}
_v_10851_ink=V(false);
if(j::truth(([&]()->V{V _lhs11320=j::unary("typeof",_v_10847_got);V _rhs11321=this->_literals[59];return V(j::equal(_lhs11320,_rhs11321,true));})())){
if(j::truth(([&]()->V{V _lhs11322=_v_10847_got;V _rhs11323=_v_10847_got;return V(!j::equal(_lhs11322,_rhs11323,true));})())){continue;
}
(void)((_v_10850_v=([&]()->V{V _lhs11325=([&]()->V{V _lhs11327=_v_10847_got;V _rhs11328=_v_10827_lo;return V(j::number(_lhs11327)-j::number(_rhs11328));})();V _rhs11326=_v_10828_scale;return V(j::number(_lhs11325)*j::number(_rhs11326));})()));
(void)((_v_10850_v=(j::truth(([&]()->V{V _lhs11330=_v_10850_v;V _rhs11331=V(0.0);return j::binary(">",_lhs11330,_rhs11331);})())?(j::truth(([&]()->V{V _lhs11332=_v_10850_v;V _rhs11333=V(1.0);return j::binary("<",_lhs11332,_rhs11333);})())?_v_10850_v:V(1.0)):V(0.0))));
if(j::truth(([&]()->V{V _lhs11334=_v_10829_gamma;V _rhs11335=V(1.0);return V(!j::equal(_lhs11334,_rhs11335,true));})())){(void)((_v_10850_v=([&]()->V{V _lhs11337=_v_10850_v;V _rhs11338=_v_10829_gamma;return V(std::pow(j::number(_lhs11337),j::number(_rhs11338)));})()));
}

}
else {if(j::truth(([&]()->V{V _lhs11339=_v_10847_got;V _rhs11340=V(true);return V(j::equal(_lhs11339,_rhs11340,true));})())){(void)(((_v_10850_v=V(1.0)),(_v_10851_ink=V(true))));
}else {if(j::truth(([&]()->V{V _logical11343=([&]()->V{V _lhs11344=_v_10847_got;V _rhs11345=V::null();return V(j::equal(_lhs11344,_rhs11345,true));})();return !j::truth(_logical11343)?([&]()->V{V _lhs11346=_v_10847_got;V _rhs11347=V(false);return V(j::equal(_lhs11346,_rhs11347,true));})():_logical11343;})())){continue;
}else {(void)(([&]()->V{V _callee11349=this->_v_10733_fail.get();return j::call(_callee11349,j::Args{([&]()->V{V _callee11348=this->_v_10859_wrong.get();return j::call(_callee11348,j::Args{_v_10847_got});})()});})());
}
}
}
_v_10852_jitter=(j::truth(([&]()->V{V _logical11350=_v_10830_dither;return j::truth(_logical11350)?j::unary("!",_v_10851_ink):_logical11350;})())?([&]()->V{V _callee11351=this->_v_10730_bayer.get();return j::call(_callee11351,j::Args{_v_10846_sx,_v_10842_sy});})():V(0.0));
if(j::truth(([&]()->V{V _lhs11352=_v_10848_own;V _rhs11353=j::builtin("undefined");return V(j::equal(_lhs11352,_rhs11353,true));})())){
V _v_10854_k;
_v_10854_k=([&]()->V{V _number11358=([&]()->V{V _lhs11359=([&]()->V{V _lhs11361=_v_10850_v;V _rhs11362=_v_10831_n;return V(j::number(_lhs11361)*j::number(_rhs11362));})();V _rhs11360=_v_10852_jitter;return j::binary("+",_lhs11359,_rhs11360);})();return V(std::floor(j::number(_number11358)));})();
(void)((_v_10854_k=(j::truth(([&]()->V{V _lhs11364=_v_10854_k;V _rhs11365=V(0.0);return j::binary("<",_lhs11364,_rhs11365);})())?V(0.0):(j::truth(([&]()->V{V _lhs11366=_v_10854_k;V _rhs11367=_v_10831_n;return j::binary(">=",_lhs11366,_rhs11367);})())?([&]()->V{V _lhs11368=_v_10831_n;V _rhs11369=V(1.0);return V(j::number(_lhs11368)-j::number(_rhs11369));})():_v_10854_k))));
(void)((_v_10853_ch=j::get(_v_10825_codes,(j::truth(([&]()->V{V _logical11371=_v_10832_flip;return j::truth(_logical11371)?j::unary("!",_v_10851_ink):_logical11371;})())?([&]()->V{V _lhs11372=([&]()->V{V _lhs11374=_v_10831_n;V _rhs11375=V(1.0);return V(j::number(_lhs11374)-j::number(_rhs11375));})();V _rhs11373=_v_10854_k;return V(j::number(_lhs11372)-j::number(_rhs11373));})():_v_10854_k))));
if(j::truth(([&]()->V{V _lhs11376=_v_10853_ch;V _rhs11377=V(32.0);return V(j::equal(_lhs11376,_rhs11377,true));})())){continue;
}

}
else {if(j::truth(([&]()->V{V _lhs11378=(_v_10853_ch=([&]()->V{V _callee11381=this->_v_10862_charOf.get();return j::call(_callee11381,j::Args{_v_10848_own});})());V _rhs11379=this->_v_10727_EMPTY.get();return V(j::equal(_lhs11378,_rhs11379,true));})())){continue;
}
}
_v_10855_cell=([&]()->V{V _lhs11382=([&]()->V{V _lhs11384=_v_10842_sy;V _rhs11385=j::get(_v_10814_s,this->_literals[24]);return V(j::number(_lhs11384)*j::number(_rhs11385));})();V _rhs11383=_v_10846_sx;return j::binary("+",_lhs11382,_rhs11383);})();
(void)(([&]()->V{V _base11387=_v_10836_chars;V _key11388=_v_10855_cell;V _assign11386=_v_10853_ch;return j::put(_base11387,_key11388,_assign11386);})());
if(j::truth(([&]()->V{V _logical11389=([&]()->V{V _lhs11390=_v_10849_tint;V _rhs11391=j::builtin("undefined");return V(!j::equal(_lhs11390,_rhs11391,true));})();return j::truth(_logical11389)?_v_10833_shown:_logical11389;})())){(void)(([&]()->V{V _base11393=_v_10837_colors;V _key11394=_v_10855_cell;V _assign11392=([&]()->V{V _receiver11395=_v_10814_s;V _method11396=this->_literals[60];V _method=j::get(_receiver11395,_method11396);j::Args _params11397=j::Args{_v_10849_tint};return j::call(_method,_params11397,_receiver11395);})();return j::put(_base11393,_key11394,_assign11392);})());
}else {if(j::truth(_v_10835_lut)){
V _v_10856_q;
_v_10856_q=([&]()->V{V _number11402=([&]()->V{V _lhs11403=([&]()->V{V _lhs11405=_v_10850_v;V _rhs11406=_v_10826_steps;return V(j::number(_lhs11405)*j::number(_rhs11406));})();V _rhs11404=_v_10852_jitter;return j::binary("+",_lhs11403,_rhs11404);})();return V(std::floor(j::number(_number11402)));})();
(void)((_v_10856_q=(j::truth(([&]()->V{V _lhs11408=_v_10856_q;V _rhs11409=V(0.0);return j::binary("<",_lhs11408,_rhs11409);})())?V(0.0):(j::truth(([&]()->V{V _lhs11410=_v_10856_q;V _rhs11411=_v_10826_steps;return j::binary(">=",_lhs11410,_rhs11411);})())?([&]()->V{V _lhs11412=_v_10826_steps;V _rhs11413=V(1.0);return V(j::number(_lhs11412)-j::number(_rhs11413));})():_v_10856_q))));
(void)(([&]()->V{V _base11415=_v_10837_colors;V _key11416=_v_10855_cell;V _assign11414=j::get(_v_10835_lut,_v_10856_q);return j::put(_base11415,_key11416,_assign11414);})());

}
else {(void)(([&]()->V{V _base11418=_v_10837_colors;V _key11419=_v_10855_cell;V _assign11417=(j::truth(_v_10834_byFn)?([&]()->V{V _receiver11421=_v_10814_s;V _method11422=this->_literals[60];V _method=j::get(_receiver11421,_method11422);j::Args _params11423=j::Args{([&]()->V{V _callee11420=_v_10834_byFn;return j::call(_callee11420,j::Args{_v_10850_v,_v_10845_x,_v_10841_y,_v_10816_t,_v_10818_at});})()};return j::call(_method,_params11423,_receiver11421);})():this->_v_10728_NONE.get());return j::put(_base11418,_key11419,_assign11417);})());
}
}

}
}

}
}

}

return V{};
},5);
this->_v_10871_drawField.get()=j::function([=](const j::Args &_args_fn10872,const V &_receiver_fn10872,const V &_self_fn10872) mutable ->V{
V _v_10873_s;
V _v_10874_fn;
V _v_10875_t;
V _v_10876_o;
_v_10873_s=_args_fn10872[0];
_v_10874_fn=_args_fn10872[1];
_v_10875_t=_args_fn10872[2];
_v_10876_o=_args_fn10872[3];
{
if(j::truth(j::unary("!",([&]()->V{V _callee11424=this->_v_10868_isSurface.get();return j::call(_callee11424,j::Args{_v_10873_s});})()))){(void)(([&]()->V{V _callee11427=this->_v_10733_fail.get();return j::call(_callee11427,j::Args{([&]()->V{std::u16string _text11425;_text11425+=u"drawField() takes the Surface to draw into first, then the function and t: drawField(s, (x, y, t) => ..., t), not ";_text11425+=j::string(([&]()->V{V _callee11426=this->_v_10742_show.get();return j::call(_callee11426,j::Args{_v_10873_s});})());_text11425+=u"";return V(std::move(_text11425));})()});})());
}
if(j::truth(([&]()->V{V _lhs11428=j::unary("typeof",_v_10874_fn);V _rhs11429=this->_literals[12];return V(!j::equal(_lhs11428,_rhs11429,true));})())){(void)(([&]()->V{V _callee11432=this->_v_10733_fail.get();return j::call(_callee11432,j::Args{([&]()->V{std::u16string _text11430;_text11430+=u"drawField() takes a function of x, y and t that returns a brightness 0 to 1, such as (x, y, t) => 0.5 + 0.5 * Math.sin(x * 6 + t), not ";_text11430+=j::string(([&]()->V{V _callee11431=this->_v_10742_show.get();return j::call(_callee11431,j::Args{_v_10874_fn});})());_text11430+=u"";return V(std::move(_text11430));})()});})());
}
(void)(([&]()->V{V _callee11436=this->_v_10812_paint.get();return j::call(_callee11436,j::Args{_v_10873_s,_v_10874_fn,(j::truth(([&]()->V{V _callee11433=this->_v_10739_finite.get();return j::call(_callee11433,j::Args{_v_10875_t});})())?_v_10875_t:V(0.0)),([&]()->V{V _callee11434=this->_v_10745_plan.get();return j::call(_callee11434,j::Args{_v_10876_o,this->_literals[61]});})(),([&]()->V{V _callee11435=this->_v_10865_cell.get();return j::call(_callee11435,j::Args{this->_v_10857_NO_OPTIONS.get()});})()});})());

}

return V{};
},4);
this->_v_10877_join.get()=j::function([=](const j::Args &_args_fn10878,const V &_receiver_fn10878,const V &_self_fn10878) mutable ->V{
V _v_10879_spread;
V _v_10880_own;
_v_10879_spread=_args_fn10878[0];
_v_10880_own=_args_fn10878[1];
{
V _v_10881_sides;
V _v_10886_a;
V _v_10887_b;
V _v_10888_c;
V _v_10889_d;
_v_10881_sides=j::function([=](const j::Args &_args_fn10882,const V &_receiver_fn10882,const V &_self_fn10882) mutable ->V{
V _v_10883_p;
_v_10883_p=_args_fn10882[0];
{
V _v_10884_light;
V _v_10885_dark;
if(j::truth(([&]()->V{V _receiver11437=j::builtin("Array");V _method11438=this->_literals[8];V _method=j::get(_receiver11437,_method11438);j::Args _params11439=j::Args{_v_10883_p};return j::call(_method,_params11439,_receiver11437);})())){return ([&]()->V{j::Args _array11440;_array11440.push_back(_v_10883_p);_array11440.push_back(_v_10883_p);return j::array(std::move(_array11440));})();
}
V _pattern11443=([&]()->V{V _logical11441=_v_10883_p;return j::nullish(_logical11441)?([&]()->V{V _obj11442=j::object();return _obj11442;})():_logical11441;})();
_v_10884_light=j::get(_pattern11443,this->_literals[9]);
_v_10885_dark=j::get(_pattern11443,this->_literals[10]);
if(j::truth(([&]()->V{V _logical11444=j::unary("!",([&]()->V{V _receiver11445=j::builtin("Array");V _method11446=this->_literals[8];V _method=j::get(_receiver11445,_method11446);j::Args _params11447=j::Args{_v_10884_light};return j::call(_method,_params11447,_receiver11445);})());return !j::truth(_logical11444)?j::unary("!",([&]()->V{V _receiver11448=j::builtin("Array");V _method11449=this->_literals[8];V _method=j::get(_receiver11448,_method11449);j::Args _params11450=j::Args{_v_10885_dark};return j::call(_method,_params11450,_receiver11448);})()):_logical11444;})())){(void)(([&]()->V{V _callee11453=this->_v_10733_fail.get();return j::call(_callee11453,j::Args{([&]()->V{std::u16string _text11451;_text11451+=u"palette takes a list of #rrggbb, or { light, dark }, not ";_text11451+=j::string(([&]()->V{V _callee11452=this->_v_10742_show.get();return j::call(_callee11452,j::Args{_v_10883_p});})());_text11451+=u"";return V(std::move(_text11451));})()});})());
}
return ([&]()->V{j::Args _array11454;_array11454.push_back(_v_10884_light);_array11454.push_back(_v_10885_dark);return j::array(std::move(_array11454));})();

}

return V{};
},1);
if(j::truth(([&]()->V{V _logical11455=([&]()->V{V _receiver11456=j::builtin("Array");V _method11457=this->_literals[8];V _method=j::get(_receiver11456,_method11457);j::Args _params11458=j::Args{_v_10879_spread};return j::call(_method,_params11458,_receiver11456);})();return j::truth(_logical11455)?([&]()->V{V _receiver11459=j::builtin("Array");V _method11460=this->_literals[8];V _method=j::get(_receiver11459,_method11460);j::Args _params11461=j::Args{_v_10880_own};return j::call(_method,_params11461,_receiver11459);})():_logical11455;})())){return ([&]()->V{j::Args _array11462;for(const auto &_value:j::elements(_v_10879_spread))_array11462.push_back(_value);for(const auto &_value:j::elements(_v_10880_own))_array11462.push_back(_value);return j::array(std::move(_array11462));})();
}
V _pattern11464=([&]()->V{V _callee11463=_v_10881_sides;return j::call(_callee11463,j::Args{_v_10879_spread});})();
_v_10886_a=j::get(_pattern11464,V(0));
_v_10887_b=j::get(_pattern11464,V(1));
V _pattern11466=([&]()->V{V _callee11465=_v_10881_sides;return j::call(_callee11465,j::Args{_v_10880_own});})();
_v_10888_c=j::get(_pattern11466,V(0));
_v_10889_d=j::get(_pattern11466,V(1));
return ([&]()->V{V _obj11467=j::object();j::put(_obj11467,this->_literals[9],([&]()->V{j::Args _array11468;for(const auto &_value:j::elements(_v_10886_a))_array11468.push_back(_value);for(const auto &_value:j::elements(_v_10888_c))_array11468.push_back(_value);return j::array(std::move(_array11468));})());j::put(_obj11467,this->_literals[10],([&]()->V{j::Args _array11469;for(const auto &_value:j::elements(_v_10887_b))_array11469.push_back(_value);for(const auto &_value:j::elements(_v_10889_d))_array11469.push_back(_value);return j::array(std::move(_array11469));})());return _obj11467;})();

}

return V{};
},2);
this->_v_10890_field.get()=j::function([=](const j::Args &_args_fn10891,const V &_receiver_fn10891,const V &_self_fn10891) mutable ->V{
V _v_10892_first;
V _v_10893_second;
_v_10892_first=_args_fn10891[0];
_v_10893_second=_args_fn10891[1];
{
V _v_10894_spec;
j::Cell _v_10895_fn;
V _v_10896_base;
j::Cell _v_10897_p;
V _v_10898_own;
V _v_10899_palette;
V _v_10900_made;
V _v_10907_probe;
V _v_10908_cols;
V _v_10909_rows;
V _v_10910_width;
V _v_10911_height;
V _v_10912_v;
V _pattern11478=(j::truth(([&]()->V{V _logical11470=([&]()->V{V _lhs11471=j::unary("typeof",_v_10892_first);V _rhs11472=this->_literals[12];return V(j::equal(_lhs11471,_rhs11472,true));})();return j::truth(_logical11470)?([&]()->V{V _lhs11473=_v_10893_second;V _rhs11474=j::builtin("undefined");return V(j::equal(_lhs11473,_rhs11474,true));})():_logical11470;})())?([&]()->V{j::Args _array11475;_array11475.push_back(([&]()->V{V _obj11476=j::object();return _obj11476;})());_array11475.push_back(_v_10892_first);return j::array(std::move(_array11475));})():([&]()->V{j::Args _array11477;_array11477.push_back(_v_10892_first);_array11477.push_back(_v_10893_second);return j::array(std::move(_array11477));})());
_v_10894_spec=j::get(_pattern11478,V(0));
_v_10895_fn.get()=j::get(_pattern11478,V(1));
if(j::truth(([&]()->V{V _lhs11479=j::unary("typeof",_v_10895_fn.get());V _rhs11480=this->_literals[12];return V(!j::equal(_lhs11479,_rhs11480,true));})())){(void)(([&]()->V{V _callee11483=this->_v_10733_fail.get();return j::call(_callee11483,j::Args{([&]()->V{std::u16string _text11481;_text11481+=u"field() takes a function of x, y and t that returns a brightness 0 to 1, after a spec if you give one, such as field({ name: \"sea\" }, (x, y, t) => 0.5 + 0.5 * Math.sin(x * 6 + t)), not ";_text11481+=j::string(([&]()->V{V _callee11482=this->_v_10742_show.get();return j::call(_callee11482,j::Args{_v_10895_fn.get()});})());_text11481+=u"";return V(std::move(_text11481));})()});})());
}
_v_10896_base=([&]()->V{V _callee11484=this->_v_10737_specOf.get();return j::call(_callee11484,j::Args{_v_10894_spec,this->_literals[62]});})();
_v_10897_p.get()=([&]()->V{V _callee11485=this->_v_10745_plan.get();return j::call(_callee11485,j::Args{_v_10894_spec,this->_literals[63]});})();
if(j::truth(([&]()->V{V _logical11486=([&]()->V{V _lhs11487=j::get(_v_10894_spec,this->_literals[64]);V _rhs11488=j::builtin("undefined");return V(!j::equal(_lhs11487,_rhs11488,true));})();return j::truth(_logical11486)?([&]()->V{V _lhs11489=j::get(_v_10894_spec,this->_literals[64]);V _rhs11490=V(true);return V(!j::equal(_lhs11489,_rhs11490,true));})():_logical11486;})())){(void)(([&]()->V{V _callee11493=this->_v_10733_fail.get();return j::call(_callee11493,j::Args{([&]()->V{std::u16string _text11491;_text11491+=u"field() starts every frame empty, so a frame depends only on t, as svg() and reduced motion need: leave clear out, not ";_text11491+=j::string(([&]()->V{V _callee11492=this->_v_10742_show.get();return j::call(_callee11492,j::Args{j::get(_v_10894_spec,this->_literals[64])});})());_text11491+=u". For trails, draw with drawField() in a piece() of your own";return V(std::move(_text11491));})()});})());
}
if(j::truth(([&]()->V{V _logical11494=([&]()->V{V _logical11495=j::get(_v_10897_p.get(),this->_literals[11]);return j::truth(_logical11495)?j::unary("!",j::get(_v_10897_p.get(),this->_literals[31])):_logical11495;})();return j::truth(_logical11494)?([&]()->V{V _lhs11496=j::get(_v_10894_spec,this->_literals[31]);V _rhs11497=j::builtin("undefined");return V(j::equal(_lhs11496,_rhs11497,true));})():_logical11494;})())){(void)(([&]()->V{V _callee11498=this->_v_10733_fail.get();return j::call(_callee11498,j::Args{this->_literals[65]});})());
}
_v_10898_own=(j::truth(([&]()->V{V _lhs11499=j::get(_v_10894_spec,this->_literals[31]);V _rhs11500=j::builtin("undefined");return V(j::equal(_lhs11499,_rhs11500,true));})())?j::builtin("undefined"):([&]()->V{V _callee11501=this->_v_10732_colorsOf.get();return j::call(_callee11501,j::Args{j::get(_v_10894_spec,this->_literals[31]),this->_literals[31]});})());
_v_10899_palette=(j::truth(([&]()->V{V _logical11502=j::get(_v_10897_p.get(),this->_literals[31]);return j::truth(_logical11502)?([&]()->V{V _lhs11503=_v_10898_own;V _rhs11504=j::builtin("undefined");return V(!j::equal(_lhs11503,_rhs11504,true));})():_logical11502;})())?([&]()->V{V _callee11505=this->_v_10877_join.get();return j::call(_callee11505,j::Args{j::get(_v_10897_p.get(),this->_literals[31]),_v_10898_own});})():([&]()->V{V _logical11506=j::get(_v_10897_p.get(),this->_literals[31]);return j::nullish(_logical11506)?_v_10898_own:_logical11506;})());
_v_10900_made=([&]()->V{V _callee11513=this->_v_10735_piece.get();return j::call(_callee11513,j::Args{([&]()->V{V _obj11507=j::object();V _spread11508=_v_10896_base;for(const auto &_key:j::keys(_spread11508))j::put(_obj11507,_key,j::get(_spread11508,_key));j::put(_obj11507,this->_literals[31],_v_10899_palette);j::put(_obj11507,this->_literals[66],([&]()->V{V _logical11509=j::get(_v_10897_p.get(),this->_literals[27]);return !j::truth(_logical11509)?j::get(_v_10894_spec,this->_literals[66]):_logical11509;})());return _obj11507;})(),([&]()->V{V _obj11510=j::object();j::put(_obj11510,this->_literals[67],j::function([=](const j::Args &_args_fn10901,const V &_receiver_fn10901,const V &_self_fn10901) mutable ->V{
V _v_10902_options;
_v_10902_options=_args_fn10901[0];
{
j::Cell _v_10903_at;
_v_10903_at.get()=([&]()->V{V _callee11511=this->_v_10865_cell.get();return j::call(_callee11511,j::Args{_v_10902_options});})();
return j::function([=](const j::Args &_args_fn10904,const V &_receiver_fn10904,const V &_self_fn10904) mutable ->V{
V _v_10905_t;
V _v_10906_s;
_v_10905_t=_args_fn10904[0];
_v_10906_s=_args_fn10904[1];
return ([&]()->V{V _callee11512=this->_v_10812_paint.get();return j::call(_callee11512,j::Args{_v_10906_s,_v_10895_fn.get(),_v_10905_t,_v_10897_p.get(),_v_10903_at.get()});})();
return V{};
},2);

}

return V{};
},1));return _obj11510;})()});})();
_v_10907_probe=([&]()->V{V _callee11516=this->_v_10865_cell.get();return j::call(_callee11516,j::Args{([&]()->V{V _obj11514=j::object();V _spread11515=j::get(j::get(_v_10900_made,this->_literals[68]),this->_literals[69]);for(const auto &_key:j::keys(_spread11515))j::put(_obj11514,_key,j::get(_spread11515,_key));return _obj11514;})()});})();
_v_10908_cols=(j::truth(j::get(_v_10897_p.get(),this->_literals[21]))?([&]()->V{V _receiver11520=j::builtin("Math");V _method11521=this->_literals[34];V _method=j::get(_receiver11520,_method11521);j::Args _params11522=j::Args{V(1.0),([&]()->V{V _number11517=j::get(j::get(_v_10897_p.get(),this->_literals[21]),this->_literals[24]);return V(std::floor(j::number(_number11517)));})()};return j::call(_method,_params11522,_receiver11520);})():j::get(_v_10896_base,this->_literals[24]));
_v_10909_rows=(j::truth(j::get(_v_10897_p.get(),this->_literals[21]))?([&]()->V{V _receiver11526=j::builtin("Math");V _method11527=this->_literals[34];V _method=j::get(_receiver11526,_method11527);j::Args _params11528=j::Args{V(1.0),([&]()->V{V _number11523=j::get(j::get(_v_10897_p.get(),this->_literals[21]),this->_literals[25]);return V(std::floor(j::number(_number11523)));})()};return j::call(_method,_params11528,_receiver11526);})():j::get(_v_10896_base,this->_literals[25]));
V _pattern11531=([&]()->V{V _callee11530=this->_v_10770_extent.get();return j::call(_callee11530,j::Args{_v_10908_cols,_v_10909_rows,([&]()->V{V _logical11529=j::get(_v_10896_base,this->_literals[70]);return j::nullish(_logical11529)?V(2.0):_logical11529;})(),j::get(_v_10897_p.get(),this->_literals[17])});})();
_v_10910_width=j::get(_pattern11531,V(0));
_v_10911_height=j::get(_pattern11531,V(1));
(void)(([&]()->V{V _receiver11537=j::builtin("Object");V _method11538=this->_literals[71];V _method=j::get(_receiver11537,_method11538);j::Args _params11539=j::Args{_v_10907_probe,([&]()->V{V _obj11532=j::object();j::put(_obj11532,this->_literals[58],([&]()->V{V _lhs11533=_v_10908_cols;V _rhs11534=V(1.0);return V(int(j::i32(_lhs11533)>>(j::u32(_rhs11534)&31)));})());j::put(_obj11532,this->_literals[57],([&]()->V{V _lhs11535=_v_10909_rows;V _rhs11536=V(1.0);return V(int(j::i32(_lhs11535)>>(j::u32(_rhs11536)&31)));})());j::put(_obj11532,this->_literals[45],V(0.5));j::put(_obj11532,this->_literals[46],V(0.5));j::put(_obj11532,this->_literals[24],_v_10908_cols);j::put(_obj11532,this->_literals[25],_v_10909_rows);j::put(_obj11532,this->_literals[43],_v_10910_width);j::put(_obj11532,this->_literals[44],_v_10911_height);return _obj11532;})()};return j::call(_method,_params11539,_receiver11537);})());
_v_10912_v=([&]()->V{V _callee11540=_v_10895_fn.get();return j::call(_callee11540,j::Args{V(0.0),V(0.0),V(0.0),_v_10907_probe});})();
if(j::truth(([&]()->V{V _logical11541=([&]()->V{V _logical11542=([&]()->V{V _lhs11543=_v_10912_v;V _rhs11544=V::null();return V(!j::equal(_lhs11543,_rhs11544,true));})();return j::truth(_logical11542)?([&]()->V{V _lhs11545=j::unary("typeof",_v_10912_v);V _rhs11546=this->_literals[59];return V(!j::equal(_lhs11545,_rhs11546,true));})():_logical11542;})();return j::truth(_logical11541)?([&]()->V{V _lhs11547=j::unary("typeof",_v_10912_v);V _rhs11548=this->_literals[14];return V(!j::equal(_lhs11547,_rhs11548,true));})():_logical11541;})())){(void)(([&]()->V{V _callee11550=this->_v_10733_fail.get();return j::call(_callee11550,j::Args{([&]()->V{V _callee11549=this->_v_10859_wrong.get();return j::call(_callee11549,j::Args{_v_10912_v});})()});})());
}
if(j::truth(([&]()->V{V _lhs11551=j::get(_v_10907_probe,this->_literals[56]);V _rhs11552=j::builtin("undefined");return V(!j::equal(_lhs11551,_rhs11552,true));})())){(void)(([&]()->V{V _callee11553=this->_v_10862_charOf.get();return j::call(_callee11553,j::Args{j::get(_v_10907_probe,this->_literals[56])});})());
}
if(j::truth(([&]()->V{V _lhs11554=j::get(_v_10907_probe,this->_literals[11]);V _rhs11555=j::builtin("undefined");return V(!j::equal(_lhs11554,_rhs11555,true));})())){
if(j::truth(([&]()->V{V _lhs11556=_v_10899_palette;V _rhs11557=j::builtin("undefined");return V(j::equal(_lhs11556,_rhs11557,true));})())){(void)(([&]()->V{V _callee11558=this->_v_10733_fail.get();return j::call(_callee11558,j::Args{this->_literals[72]});})());
}
(void)(([&]()->V{V _receiver11559=([&]()->V{V _callee11562=this->_v_10729_Palette.get();return j::construct(_callee11562,j::Args{_v_10899_palette});})();V _method11560=this->_literals[52];V _method=j::get(_receiver11559,_method11560);j::Args _params11561=j::Args{j::get(_v_10907_probe,this->_literals[11])};return j::call(_method,_params11561,_receiver11559);})());

}

return _v_10900_made;

}

return V{};
},2);
auto &_import1676=j::module("kit/core");
this->_v_10727_EMPTY=_import1676.exported("EMPTY");
this->_v_10728_NONE=_import1676.exported("NONE");
this->_v_10729_Palette=_import1676.exported("Palette");
this->_v_10730_bayer=_import1676.exported("bayer");
this->_v_10731_code=_import1676.exported("code");
this->_v_10732_colorsOf=_import1676.exported("colorsOf");
this->_v_10733_fail=_import1676.exported("fail");
this->_v_10734_fract=_import1676.exported("fract");
this->_v_10735_piece=_import1676.exported("piece");
this->_v_10736_rampOf=_import1676.exported("ramp");
this->_v_10737_specOf=_import1676.exported("specOf");
this->_v_10738_spread=_import1676.exported("spread");
this->exports["drawField"]=this->_v_10871_drawField;
this->exports["field"]=this->_v_10890_field;
this->_v_10739_finite.get()=j::function([=](const j::Args &_args_fn10740,const V &_receiver_fn10740,const V &_self_fn10740) mutable ->V{
V _v_10741_v;
_v_10741_v=_args_fn10740[0];
return ([&]()->V{V _logical11563=([&]()->V{V _lhs11564=j::unary("typeof",_v_10741_v);V _rhs11565=this->_literals[59];return V(j::equal(_lhs11564,_rhs11565,true));})();return j::truth(_logical11563)?([&]()->V{V _receiver11566=j::builtin("Number");V _method11567=this->_literals[73];V _method=j::get(_receiver11566,_method11567);j::Args _params11568=j::Args{_v_10741_v};return j::call(_method,_params11568,_receiver11566);})():_logical11563;})();
return V{};
},1);
this->_v_10742_show.get()=j::function([=](const j::Args &_args_fn10743,const V &_receiver_fn10743,const V &_self_fn10743) mutable ->V{
V _v_10744_v;
_v_10744_v=_args_fn10743[0];
{
if(j::truth(([&]()->V{V _lhs11569=j::unary("typeof",_v_10744_v);V _rhs11570=this->_literals[12];return V(j::equal(_lhs11569,_rhs11570,true));})())){return this->_literals[74];
}
if(j::truth(([&]()->V{V _lhs11571=j::unary("typeof",_v_10744_v);V _rhs11572=this->_literals[75];return V(j::equal(_lhs11571,_rhs11572,true));})())){return ([&]()->V{std::u16string _text11573;_text11573+=u"";_text11573+=j::string(_v_10744_v);_text11573+=u"n";return V(std::move(_text11573));})();
}
{try {
return ([&]()->V{V _logical11574=([&]()->V{V _receiver11575=j::builtin("JSON");V _method11576=this->_literals[76];V _method=j::get(_receiver11575,_method11576);j::Args _params11577=j::Args{_v_10744_v};return j::call(_method,_params11577,_receiver11575);})();return j::nullish(_logical11574)?([&]()->V{V _callee11578=j::builtin("String");return j::call(_callee11578,j::Args{_v_10744_v});})():_logical11574;})();

}
catch(const std::exception &_error11579){{
return (j::truth(([&]()->V{V _receiver11580=j::builtin("Array");V _method11581=this->_literals[8];V _method=j::get(_receiver11580,_method11581);j::Args _params11582=j::Args{_v_10744_v};return j::call(_method,_params11582,_receiver11580);})())?this->_literals[77]:this->_literals[78]);

}
}}

}

return V{};
},1);
this->_v_10763_geometries.get()=([&]()->V{V _callee11583=j::builtin("WeakMap");return j::construct(_callee11583,j::Args{});})();
this->_v_10764_KEEP.get()=V(8.0);
this->_v_10765_unitOf.get()=j::function([=](const j::Args &_args_fn10766,const V &_receiver_fn10766,const V &_self_fn10766) mutable ->V{
V _v_10767_cols;
V _v_10768_rows;
V _v_10769_k;
_v_10767_cols=_args_fn10766[0];
_v_10768_rows=_args_fn10766[1];
_v_10769_k=_args_fn10766[2];
return ([&]()->V{V _lhs11584=([&]()->V{V _receiver11590=j::builtin("Math");V _method11591=this->_literals[35];V _method=j::get(_receiver11590,_method11591);j::Args _params11592=j::Args{_v_10767_cols,([&]()->V{V _lhs11586=_v_10768_rows;V _rhs11587=_v_10769_k;return V(j::number(_lhs11586)*j::number(_rhs11587));})()};return j::call(_method,_params11592,_receiver11590);})();V _rhs11585=V(2.0);return V(j::number(_lhs11584)/j::number(_rhs11585));})();
return V{};
},3);
this->_v_10770_extent.get()=j::function([=](const j::Args &_args_fn10771,const V &_receiver_fn10771,const V &_self_fn10771) mutable ->V{
V _v_10772_cols;
V _v_10773_rows;
V _v_10774_k;
V _v_10775_aspect;
_v_10772_cols=_args_fn10771[0];
_v_10773_rows=_args_fn10771[1];
_v_10774_k=_args_fn10771[2];
_v_10775_aspect=_args_fn10771[3];
return (j::truth(_v_10775_aspect)?([&]()->V{j::Args _array11593;_array11593.push_back(([&]()->V{V _lhs11594=_v_10772_cols;V _rhs11595=([&]()->V{V _callee11596=this->_v_10765_unitOf.get();return j::call(_callee11596,j::Args{_v_10772_cols,_v_10773_rows,_v_10774_k});})();return V(j::number(_lhs11594)/j::number(_rhs11595));})());_array11593.push_back(([&]()->V{V _lhs11597=([&]()->V{V _lhs11599=_v_10773_rows;V _rhs11600=_v_10774_k;return V(j::number(_lhs11599)*j::number(_rhs11600));})();V _rhs11598=([&]()->V{V _callee11601=this->_v_10765_unitOf.get();return j::call(_callee11601,j::Args{_v_10772_cols,_v_10773_rows,_v_10774_k});})();return V(j::number(_lhs11597)/j::number(_rhs11598));})());return j::array(std::move(_array11593));})():([&]()->V{j::Args _array11602;_array11602.push_back(V(2.0));_array11602.push_back(V(2.0));return j::array(std::move(_array11602));})());
return V{};
},4);
this->_v_10857_NO_OPTIONS.get()=([&]()->V{V _receiver11604=j::builtin("Object");V _method11605=this->_literals[79];V _method=j::get(_receiver11604,_method11605);j::Args _params11606=j::Args{([&]()->V{V _obj11603=j::object();return _obj11603;})()};return j::call(_method,_params11606,_receiver11604);})();
this->_v_10858_NOTHING.get()=this->_literals[80];
this->_v_10859_wrong.get()=j::function([=](const j::Args &_args_fn10860,const V &_receiver_fn10860,const V &_self_fn10860) mutable ->V{
V _v_10861_v;
_v_10861_v=_args_fn10860[0];
return (j::truth(([&]()->V{V _lhs11607=_v_10861_v;V _rhs11608=j::builtin("undefined");return V(j::equal(_lhs11607,_rhs11608,true));})())?this->_v_10858_NOTHING.get():([&]()->V{std::u16string _text11609;_text11609+=u"a field's function returns a brightness, a number 0 to 1, true for solid ink, or null where there is nothing, not ";_text11609+=j::string(([&]()->V{V _callee11610=this->_v_10742_show.get();return j::call(_callee11610,j::Args{_v_10861_v});})());_text11609+=u"";return V(std::move(_text11609));})());
return V{};
},1);
this->_v_10862_charOf.get()=j::function([=](const j::Args &_args_fn10863,const V &_receiver_fn10863,const V &_self_fn10863) mutable ->V{
V _v_10864_ch;
_v_10864_ch=_args_fn10863[0];
return (j::truth(([&]()->V{V _lhs11611=j::unary("typeof",_v_10864_ch);V _rhs11612=this->_literals[81];return V(j::equal(_lhs11611,_rhs11612,true));})())?([&]()->V{V _callee11613=this->_v_10731_code.get();return j::call(_callee11613,j::Args{_v_10864_ch});})():([&]()->V{V _callee11616=this->_v_10733_fail.get();return j::call(_callee11616,j::Args{([&]()->V{std::u16string _text11614;_text11614+=u"at.char takes one character as a string, such as \"*\", or \"\" for nothing, not ";_text11614+=j::string(([&]()->V{V _callee11615=this->_v_10742_show.get();return j::call(_callee11615,j::Args{_v_10864_ch});})());_text11614+=u"";return V(std::move(_text11614));})()});})());
return V{};
},1);
this->_v_10865_cell.get()=j::function([=](const j::Args &_args_fn10866,const V &_receiver_fn10866,const V &_self_fn10866) mutable ->V{
V _v_10867_options;
_v_10867_options=_args_fn10866[0];
return ([&]()->V{V _obj11617=j::object();j::put(_obj11617,this->_literals[58],V(0.0));j::put(_obj11617,this->_literals[57],V(0.0));j::put(_obj11617,this->_literals[45],V(0.0));j::put(_obj11617,this->_literals[46],V(0.0));j::put(_obj11617,this->_literals[47],V(0.0));j::put(_obj11617,this->_literals[48],V(0.0));j::put(_obj11617,this->_literals[24],V(0.0));j::put(_obj11617,this->_literals[25],V(0.0));j::put(_obj11617,this->_literals[43],V(2.0));j::put(_obj11617,this->_literals[44],V(2.0));j::put(_obj11617,this->_literals[55],V(0.0));j::put(_obj11617,this->_literals[69],_v_10867_options);j::put(_obj11617,this->_literals[56],j::builtin("undefined"));j::put(_obj11617,this->_literals[11],j::builtin("undefined"));return _obj11617;})();
return V{};
},1);
this->_v_10868_isSurface.get()=j::function([=](const j::Args &_args_fn10869,const V &_receiver_fn10869,const V &_self_fn10869) mutable ->V{
V _v_10870_s;
_v_10870_s=_args_fn10869[0];
return ([&]()->V{V _logical11618=([&]()->V{V _logical11619=([&]()->V{V _logical11620=([&]()->V{V _logical11621=([&]()->V{V _logical11622=j::unary("!",j::unary("!",_v_10870_s));return j::truth(_logical11622)?([&]()->V{V _lhs11623=j::unary("typeof",_v_10870_s);V _rhs11624=this->_literals[0];return V(j::equal(_lhs11623,_rhs11624,true));})():_logical11622;})();return j::truth(_logical11621)?([&]()->V{V _lhs11625=j::get(_v_10870_s,this->_literals[54]);V _rhs11626=j::builtin("Uint16Array");return j::binary("instanceof",_lhs11625,_rhs11626);})():_logical11621;})();return j::truth(_logical11620)?([&]()->V{V _lhs11627=j::get(_v_10870_s,this->_literals[7]);V _rhs11628=j::builtin("Uint8Array");return j::binary("instanceof",_lhs11627,_rhs11628);})():_logical11620;})();return j::truth(_logical11619)?([&]()->V{V _receiver11629=j::builtin("Number");V _method11630=this->_literals[6];V _method=j::get(_receiver11629,_method11630);j::Args _params11631=j::Args{j::get(_v_10870_s,this->_literals[24])};return j::call(_method,_params11631,_receiver11629);})():_logical11619;})();return j::truth(_logical11618)?([&]()->V{V _lhs11632=j::unary("typeof",j::get(_v_10870_s,this->_literals[60]));V _rhs11633=this->_literals[12];return V(j::equal(_lhs11632,_rhs11633,true));})():_logical11618;})();
return V{};
},1);
}
};
}
std::unique_ptr<Module> new_kit_field(){return std::make_unique<Generated_kit_field>();}
}
